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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006b9cf };

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
0x0209,	// (0x0006bbd8) Screen

0x0215,	// (0x0006bbe4) application_window

0x0251,	// (0x0006bc20) area_bottom_pane_ParamLimits

0x0251,	// (0x0006bc20) area_bottom_pane

0x028a,	// (0x0006bc59) area_top_pane_ParamLimits

0x028a,	// (0x0006bc59) area_top_pane

0x952c,	// (0x00074efb) call_video_uplink_pane_ParamLimits

0x952c,	// (0x00074efb) call_video_uplink_pane

0x0318,	// (0x0006bce7) main_pane_ParamLimits

0x0318,	// (0x0006bce7) main_pane

0xc959,	// (0x00078328) context_pane

0x3851,	// (0x0006f220) navi_pane

0x3883,	// (0x0006f252) popup_cale_events_window_ParamLimits

0x3883,	// (0x0006f252) popup_cale_events_window

0xc96c,	// (0x0007833b) popup_mup_playback_window

0x389b,	// (0x0006f26a) signal_pane

0xa432,	// (0x00075e01) main_browser_pane

0xaae7,	// (0x000764b6) main_burst_pane

0x359f,	// (0x0006ef6e) main_calc_pane

0xc93f,	// (0x0007830e) main_cale_day_pane

0x35b3,	// (0x0006ef82) main_cale_month_pane

0xc93f,	// (0x0007830e) main_cale_week_pane

0xaae7,	// (0x000764b6) main_call_pane

0xa112,	// (0x00075ae1) main_call_poc_pane

0xaae7,	// (0x000764b6) main_camera_pane

0xaae7,	// (0x000764b6) main_chi_dic_pane

0xb2ca,	// (0x00076c99) main_clock_pane

0xa112,	// (0x00075ae1) main_fmradio_pane

0xaae7,	// (0x000764b6) main_graph_messa_pane

0xa112,	// (0x00075ae1) main_help_pane

0xa432,	// (0x00075e01) main_im_pane

0xa36d,	// (0x00075d3c) main_image_pane_ParamLimits

0xa36d,	// (0x00075d3c) main_image_pane

0xa112,	// (0x00075ae1) main_location2_pane

0xaae7,	// (0x000764b6) main_location_pane

0xa36d,	// (0x00075d3c) main_messa_pane

0xa112,	// (0x00075ae1) main_mp2_pane

0xaae7,	// (0x000764b6) main_mp_pane

0xa112,	// (0x00075ae1) main_msg_pane

0xa112,	// (0x00075ae1) main_mup_eq_pane

0xa112,	// (0x00075ae1) main_mup_pane

0xa432,	// (0x00075e01) main_notes_pane

0xa112,	// (0x00075ae1) main_pec_pane

0xa112,	// (0x00075ae1) main_phob_pane

0xa112,	// (0x00075ae1) main_pinb_pane

0xa112,	// (0x00075ae1) main_postcard_pane

0xa112,	// (0x00075ae1) main_qdial_pane

0xaae7,	// (0x000764b6) main_skin_pane

0xa112,	// (0x00075ae1) main_smil2_pane

0xaae7,	// (0x000764b6) main_smil_pane

0xaae7,	// (0x000764b6) main_video_pane

0xaae7,	// (0x000764b6) main_video_tele_pane

0xa36d,	// (0x00075d3c) main_viewer_pane_ParamLimits

0xa36d,	// (0x00075d3c) main_viewer_pane

0xaae7,	// (0x000764b6) main_vorec_pane

0x3605,	// (0x0006efd4) popup_blid_sat_info_window_ParamLimits

0x3605,	// (0x0006efd4) popup_blid_sat_info_window

0x365d,	// (0x0006f02c) popup_dyc_status_message_window_ParamLimits

0x365d,	// (0x0006f02c) popup_dyc_status_message_window

0x3677,	// (0x0006f046) popup_grid_large_graphic_window_ParamLimits

0x3677,	// (0x0006f046) popup_grid_large_graphic_window

0x3733,	// (0x0006f102) popup_loc_request_window_ParamLimits

0x3733,	// (0x0006f102) popup_loc_request_window

0x3829,	// (0x0006f1f8) popup_wml_address_window_ParamLimits

0x3829,	// (0x0006f1f8) popup_wml_address_window

0x33d9,	// (0x0006eda8) call_muted_g1

0x308e,	// (0x0006ea5d) popup_call_audio_conf_window_ParamLimits

0x308e,	// (0x0006ea5d) popup_call_audio_conf_window

0x33ed,	// (0x0006edbc) popup_call_audio_first_window_ParamLimits

0x33ed,	// (0x0006edbc) popup_call_audio_first_window

0x3463,	// (0x0006ee32) popup_call_audio_in_window_ParamLimits

0x3463,	// (0x0006ee32) popup_call_audio_in_window

0x349f,	// (0x0006ee6e) popup_call_audio_out_window_ParamLimits

0x349f,	// (0x0006ee6e) popup_call_audio_out_window

0x34d9,	// (0x0006eea8) popup_call_audio_second_window_ParamLimits

0x34d9,	// (0x0006eea8) popup_call_audio_second_window

0x352f,	// (0x0006eefe) popup_call_audio_wait_window_ParamLimits

0x352f,	// (0x0006eefe) popup_call_audio_wait_window

0x3564,	// (0x0006ef33) popup_number_entry_window_ParamLimits

0x3564,	// (0x0006ef33) popup_number_entry_window

0x9562,	// (0x00074f31) bg_popup_call_pane_cp05_ParamLimits

0x9562,	// (0x00074f31) bg_popup_call_pane_cp05

0x9582,	// (0x00074f51) popup_number_entry_window_t1

0x9595,	// (0x00074f64) popup_number_entry_window_t2

0x95a7,	// (0x00074f76) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0007aa95) popup_number_entry_window_t

0x95b9,	// (0x00074f88) text_title_cp2

0x95cc,	// (0x00074f9b) bg_popup_call_pane_cp_ParamLimits

0x95cc,	// (0x00074f9b) bg_popup_call_pane_cp

0x95da,	// (0x00074fa9) call_thumbnail_pane

0x95e2,	// (0x00074fb1) popup_call_audio_in_window_g1_ParamLimits

0x95e2,	// (0x00074fb1) popup_call_audio_in_window_g1

0x95ee,	// (0x00074fbd) popup_call_audio_in_window_g2_ParamLimits

0x95ee,	// (0x00074fbd) popup_call_audio_in_window_g2

0x95fa,	// (0x00074fc9) popup_call_audio_in_window_g3_ParamLimits

0x95fa,	// (0x00074fc9) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0007aa9e) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0007aa9e) popup_call_audio_in_window_g

0x9606,	// (0x00074fd5) popup_call_audio_in_window_t1_ParamLimits

0x9606,	// (0x00074fd5) popup_call_audio_in_window_t1

0x9622,	// (0x00074ff1) popup_call_audio_in_window_t2_ParamLimits

0x9622,	// (0x00074ff1) popup_call_audio_in_window_t2

0x963e,	// (0x0007500d) popup_call_audio_in_window_t3_ParamLimits

0x963e,	// (0x0007500d) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0007aaa5) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0007aaa5) popup_call_audio_in_window_t

0x95cc,	// (0x00074f9b) bg_popup_call_pane_cp01_ParamLimits

0x95cc,	// (0x00074f9b) bg_popup_call_pane_cp01

0x95da,	// (0x00074fa9) call_thumbnail_pane_cp02

0x9651,	// (0x00075020) call_type_pane_cp022

0x9659,	// (0x00075028) popup_call_audio_out_window_g1_ParamLimits

0x9659,	// (0x00075028) popup_call_audio_out_window_g1

0x966b,	// (0x0007503a) popup_call_audio_out_window_g2_ParamLimits

0x966b,	// (0x0007503a) popup_call_audio_out_window_g2

0x9677,	// (0x00075046) popup_call_audio_out_window_g3_ParamLimits

0x9677,	// (0x00075046) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0007aaac) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0007aaac) popup_call_audio_out_window_g

0x9689,	// (0x00075058) popup_call_audio_out_window_t1_ParamLimits

0x9689,	// (0x00075058) popup_call_audio_out_window_t1

0x96a1,	// (0x00075070) popup_call_audio_out_window_t2_ParamLimits

0x96a1,	// (0x00075070) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0007aab3) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0007aab3) popup_call_audio_out_window_t

0x96b6,	// (0x00075085) bg_popup_call_pane_ParamLimits

0x96b6,	// (0x00075085) bg_popup_call_pane

0x04d4,	// (0x0006bea3) call_thumbnail_pane_cp_ParamLimits

0x04d4,	// (0x0006bea3) call_thumbnail_pane_cp

0x973a,	// (0x00075109) call_type_pane_cp01_ParamLimits

0x973a,	// (0x00075109) call_type_pane_cp01

0x977e,	// (0x0007514d) popup_call_audio_first_window_g1_ParamLimits

0x977e,	// (0x0007514d) popup_call_audio_first_window_g1

0x9f67,	// (0x00075936) popup_call_audio_first_window_g2_ParamLimits

0x9f67,	// (0x00075936) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0007aab8) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0007aab8) popup_call_audio_first_window_g

0x9fab,	// (0x0007597a) popup_call_audio_first_window_t1_ParamLimits

0x9fab,	// (0x0007597a) popup_call_audio_first_window_t1

0xa057,	// (0x00075a26) popup_call_audio_first_window_t4_ParamLimits

0xa057,	// (0x00075a26) popup_call_audio_first_window_t4

0xa0e3,	// (0x00075ab2) popup_call_audio_first_window_t5_ParamLimits

0xa0e3,	// (0x00075ab2) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0007aabd) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0007aabd) popup_call_audio_first_window_t

0xa112,	// (0x00075ae1) bg_popup_call_pane_cp02

0xa11c,	// (0x00075aeb) call_type_pane_cp023

0xa124,	// (0x00075af3) popup_call_audio_wait_window_g1

0xa12c,	// (0x00075afb) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007aac4) popup_call_audio_wait_window_g

0xa134,	// (0x00075b03) popup_call_audio_wait_window_t3

0xa142,	// (0x00075b11) bg_popup_call_pane_cp03_ParamLimits

0xa142,	// (0x00075b11) bg_popup_call_pane_cp03

0xa1a2,	// (0x00075b71) call_thumbnail_pane_cp011_ParamLimits

0xa1a2,	// (0x00075b71) call_thumbnail_pane_cp011

0xa1ae,	// (0x00075b7d) call_type_pane_cp034_ParamLimits

0xa1ae,	// (0x00075b7d) call_type_pane_cp034

0xa1ea,	// (0x00075bb9) popup_call_audio_second_window_g1_ParamLimits

0xa1ea,	// (0x00075bb9) popup_call_audio_second_window_g1

0xa226,	// (0x00075bf5) popup_call_audio_second_window_g2_ParamLimits

0xa226,	// (0x00075bf5) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0007aac9) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0007aac9) popup_call_audio_second_window_g

0xa262,	// (0x00075c31) popup_call_audio_second_window_t1_ParamLimits

0xa262,	// (0x00075c31) popup_call_audio_second_window_t1

0xa2e3,	// (0x00075cb2) popup_call_audio_second_window_t2_ParamLimits

0xa2e3,	// (0x00075cb2) popup_call_audio_second_window_t2

0xa319,	// (0x00075ce8) popup_call_audio_second_window_t3_ParamLimits

0xa319,	// (0x00075ce8) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0007aace) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0007aace) popup_call_audio_second_window_t

0xa112,	// (0x00075ae1) bg_popup_call_pane_cp04

0xa34f,	// (0x00075d1e) list_conf_pane

0xa357,	// (0x00075d26) popup_call_audio_conf_window_t1

0xa365,	// (0x00075d34) call_thumbnail_pane_g1

0xa36d,	// (0x00075d3c) bg_pinb_pane_ParamLimits

0xa36d,	// (0x00075d3c) bg_pinb_pane

0xa37b,	// (0x00075d4a) find_pinb_pane

0xa384,	// (0x00075d53) listscroll_pinb_pane_ParamLimits

0xa384,	// (0x00075d53) listscroll_pinb_pane

0xa393,	// (0x00075d62) pinb_bg_pane_g1

0x04f8,	// (0x0006bec7) pinb_bg_pane_g2

0x0504,	// (0x0006bed3) pinb_bg_pane_g3

0x0510,	// (0x0006bedf) pinb_bg_pane_g4

0x051c,	// (0x0006beeb) pinb_bg_pane_g5

0x0528,	// (0x0006bef7) pinb_bg_pane_g6

0x0533,	// (0x0006bf02) pinb_bg_pane_g7

0x053e,	// (0x0006bf0d) pinb_bg_pane_g8

0x0549,	// (0x0006bf18) pinb_bg_pane_g9

0x0553,	// (0x0006bf22) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0007aad5) pinb_bg_pane_g

0x0570,	// (0x0006bf3f) grid_pinb_pane

0x0579,	// (0x0006bf48) list_pinb_pane

0x0582,	// (0x0006bf51) scroll_pane_cp01_ParamLimits

0x0582,	// (0x0006bf51) scroll_pane_cp01

0xa39d,	// (0x00075d6c) find_pinb_pane_g1_ParamLimits

0xa39d,	// (0x00075d6c) find_pinb_pane_g1

0xa3b5,	// (0x00075d84) find_pinb_pane_t1

0xa3c7,	// (0x00075d96) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0007aaef) find_pinb_pane_t

0xa3dc,	// (0x00075dab) input_focus_pane_cp01_ParamLimits

0xa3dc,	// (0x00075dab) input_focus_pane_cp01

0x0594,	// (0x0006bf63) cell_pinb_pane_ParamLimits

0x0594,	// (0x0006bf63) cell_pinb_pane

0x05bd,	// (0x0006bf8c) cell_pinb_pane_g1_ParamLimits

0x05bd,	// (0x0006bf8c) cell_pinb_pane_g1

0x05cd,	// (0x0006bf9c) cell_pinb_pane_g2_ParamLimits

0x05cd,	// (0x0006bf9c) cell_pinb_pane_g2

0xa3e8,	// (0x00075db7) cell_pinb_pane_g3_ParamLimits

0xa3e8,	// (0x00075db7) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0007aaf4) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0007aaf4) cell_pinb_pane_g

0xa112,	// (0x00075ae1) grid_highlight_pane_cp01

0x05d9,	// (0x0006bfa8) list_pinb_item_pane_ParamLimits

0x05d9,	// (0x0006bfa8) list_pinb_item_pane

0xa112,	// (0x00075ae1) list_highlight_pane_cp02

0x05eb,	// (0x0006bfba) list_pinb_item_pane_g1_ParamLimits

0x05eb,	// (0x0006bfba) list_pinb_item_pane_g1

0x05f8,	// (0x0006bfc7) list_pinb_item_pane_g2_ParamLimits

0x05f8,	// (0x0006bfc7) list_pinb_item_pane_g2

0x0604,	// (0x0006bfd3) list_pinb_item_pane_g3_ParamLimits

0x0604,	// (0x0006bfd3) list_pinb_item_pane_g3

0x0615,	// (0x0006bfe4) list_pinb_item_pane_g4_ParamLimits

0x0615,	// (0x0006bfe4) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0007aafb) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0007aafb) list_pinb_item_pane_g

0x0621,	// (0x0006bff0) list_pinb_item_pane_t1_ParamLimits

0x0621,	// (0x0006bff0) list_pinb_item_pane_t1

0x0656,	// (0x0006c025) calc_display_pane

0x067b,	// (0x0006c04a) calc_paper_pane

0x069e,	// (0x0006c06d) grid_calc_pane

0xa112,	// (0x00075ae1) bg_list_pane_cp01

0x06cc,	// (0x0006c09b) clock_g1

0x06d4,	// (0x0006c0a3) clock_g2

0x0001,

0xf135,	// (0x0007ab04) clock_g

0x06dc,	// (0x0006c0ab) clock_t1_ParamLimits

0x06dc,	// (0x0006c0ab) clock_t1

0x06f1,	// (0x0006c0c0) clock_t2_ParamLimits

0x06f1,	// (0x0006c0c0) clock_t2

0x0703,	// (0x0006c0d2) clock_t3_ParamLimits

0x0703,	// (0x0006c0d2) clock_t3

0x0715,	// (0x0006c0e4) clock_t4_ParamLimits

0x0715,	// (0x0006c0e4) clock_t4

0x0727,	// (0x0006c0f6) clock_t5_ParamLimits

0x0727,	// (0x0006c0f6) clock_t5

0x073c,	// (0x0006c10b) clock_t6_ParamLimits

0x073c,	// (0x0006c10b) clock_t6

0x074e,	// (0x0006c11d) clock_t7_ParamLimits

0x074e,	// (0x0006c11d) clock_t7

0x0760,	// (0x0006c12f) clock_t8_ParamLimits

0x0760,	// (0x0006c12f) clock_t8

0x0774,	// (0x0006c143) clock_t9_ParamLimits

0x0774,	// (0x0006c143) clock_t9

0x0008,

0xf13a,	// (0x0007ab09) clock_t_ParamLimits

0xf13a,	// (0x0007ab09) clock_t

0xa3f4,	// (0x00075dc3) popup_clock_analogue_window_cp02

0xa3f4,	// (0x00075dc3) popup_clock_digital_window_cp01

0xa3fc,	// (0x00075dcb) listscroll_help_pane

0xa112,	// (0x00075ae1) phob_pre_status_pane

0xa406,	// (0x00075dd5) grid_qdial_pane

0xa36d,	// (0x00075d3c) listscroll_mce_pane

0xa36d,	// (0x00075d3c) bg_notes_pane

0xa410,	// (0x00075ddf) list_notes_pane

0x0788,	// (0x0006c157) scroll_pane_cp06

0xa41e,	// (0x00075ded) bg_calc_paper_pane

0x97d2,	// (0x000751a1) list_calc_pane

0xa432,	// (0x00075e01) bg_calc_display_pane

0x079c,	// (0x0006c16b) calc_display_pane_t1

0x07b1,	// (0x0006c180) calc_display_pane_t2

0x97ec,	// (0x000751bb) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0007ab1c) calc_display_pane_t

0x07c6,	// (0x0006c195) cell_calc_pane_ParamLimits

0x07c6,	// (0x0006c195) cell_calc_pane

0xa43e,	// (0x00075e0d) bg_calc_paper_pane_g1

0xa44a,	// (0x00075e19) bg_calc_paper_pane_g2

0xa456,	// (0x00075e25) bg_calc_paper_pane_g3

0xa462,	// (0x00075e31) bg_calc_paper_pane_g4

0xa46e,	// (0x00075e3d) bg_calc_paper_pane_g5

0x07fb,	// (0x0006c1ca) bg_calc_paper_pane_g6

0x080a,	// (0x0006c1d9) bg_calc_paper_pane_g7

0x0819,	// (0x0006c1e8) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0007ab23) bg_calc_paper_pane_g

0x082c,	// (0x0006c1fb) calc_bg_paper_pane_g9

0x083f,	// (0x0006c20e) list_calc_item_pane_ParamLimits

0x083f,	// (0x0006c20e) list_calc_item_pane

0xa47a,	// (0x00075e49) list_calc_item_pane_g1

0x97fe,	// (0x000751cd) list_calc_item_pane_t1_ParamLimits

0x97fe,	// (0x000751cd) list_calc_item_pane_t1

0x0857,	// (0x0006c226) list_calc_item_pane_t2_ParamLimits

0x0857,	// (0x0006c226) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0007ab34) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0007ab34) list_calc_item_pane_t

0xa487,	// (0x00075e56) cell_calc_pane_g1

0xa491,	// (0x00075e60) grid_highlight_pane_cp02

0x0889,	// (0x0006c258) bg_calc_display_pane_g1

0x0892,	// (0x0006c261) bg_calc_display_pane_g2

0xa4b3,	// (0x00075e82) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0007ab3e) bg_calc_display_pane_g

0x089c,	// (0x0006c26b) cell_qdial_pane_ParamLimits

0x089c,	// (0x0006c26b) cell_qdial_pane

0x08b0,	// (0x0006c27f) cell_qdial_pane_g1_ParamLimits

0x08b0,	// (0x0006c27f) cell_qdial_pane_g1

0x08c6,	// (0x0006c295) cell_qdial_pane_g2_ParamLimits

0x08c6,	// (0x0006c295) cell_qdial_pane_g2

0xa4bc,	// (0x00075e8b) cell_qdial_pane_g3_ParamLimits

0xa4bc,	// (0x00075e8b) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0007ab45) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0007ab45) cell_qdial_pane_g

0x08ed,	// (0x0006c2bc) cell_qdial_pane_t1_ParamLimits

0x08ed,	// (0x0006c2bc) cell_qdial_pane_t1

0x0905,	// (0x0006c2d4) cell_qdial_pane_t2_ParamLimits

0x0905,	// (0x0006c2d4) cell_qdial_pane_t2

0x0918,	// (0x0006c2e7) cell_qdial_pane_t3_ParamLimits

0x0918,	// (0x0006c2e7) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0007ab4e) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0007ab4e) cell_qdial_pane_t

0xa112,	// (0x00075ae1) grid_highlight_pane_cp04

0xa4c8,	// (0x00075e97) thumbnail_qdial_pane_ParamLimits

0xa4c8,	// (0x00075e97) thumbnail_qdial_pane

0xaa0b,	// (0x000763da) list_help_pane

0xaa14,	// (0x000763e3) scroll_pane_cp02

0x092b,	// (0x0006c2fa) help_list_pane_t1_ParamLimits

0x092b,	// (0x0006c2fa) help_list_pane_t1

0x9810,	// (0x000751df) bg_notes_pane_g2

0x9818,	// (0x000751e7) bg_notes_pane_g3

0x9820,	// (0x000751ef) notes_bg_pane_g1

0x9828,	// (0x000751f7) notes_bg_pane_g4

0x9830,	// (0x000751ff) notes_bg_pane_g5

0x9838,	// (0x00075207) notes_bg_pane_g6

0x9840,	// (0x0007520f) notes_bg_pane_g7

0x9848,	// (0x00075217) notes_bg_pane_g8

0x9850,	// (0x0007521f) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0007ab6c) notes_bg_pane_g

0x0948,	// (0x0006c317) list_notes_text_pane_ParamLimits

0x0948,	// (0x0006c317) list_notes_text_pane

0xaa1d,	// (0x000763ec) list_notes_text_pane_g1

0x095d,	// (0x0006c32c) list_notes_text_pane_t1

0x096b,	// (0x0006c33a) listscroll_cale_week_pane

0x0997,	// (0x0006c366) bg_cale_heading_pane

0xaa40,	// (0x0007640f) bg_cale_pane_cp01

0x09af,	// (0x0006c37e) cale_week_corner_pane

0x09ce,	// (0x0006c39d) cale_week_day_heading_pane

0x09eb,	// (0x0006c3ba) cale_week_scroll_pane_g1

0x09fe,	// (0x0006c3cd) cale_week_scroll_pane_g2

0x0a16,	// (0x0006c3e5) cale_week_scroll_pane_g3

0x0a2e,	// (0x0006c3fd) cale_week_scroll_pane_g4

0x0a46,	// (0x0006c415) cale_week_scroll_pane_g5

0x0a66,	// (0x0006c435) cale_week_scroll_pane_g6

0x0a86,	// (0x0006c455) cale_week_scroll_pane_g7

0x0aa6,	// (0x0006c475) cale_week_scroll_pane_g8

0x0aca,	// (0x0006c499) cale_week_scroll_pane_g9

0x0ae2,	// (0x0006c4b1) cale_week_scroll_pane_g10

0x0afa,	// (0x0006c4c9) cale_week_scroll_pane_g11

0x0b12,	// (0x0006c4e1) cale_week_scroll_pane_g12

0x0b2a,	// (0x0006c4f9) cale_week_scroll_pane_g13

0x0b2a,	// (0x0006c4f9) cale_week_scroll_pane_g14

0x0b2a,	// (0x0006c4f9) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0007ab7b) cale_week_scroll_pane_g

0x0b66,	// (0x0006c535) cale_week_time_pane

0x0b8a,	// (0x0006c559) grid_cale_week_pane

0xaa6f,	// (0x0007643e) scroll_pane_cp08

0x0bb0,	// (0x0006c57f) cell_cale_week_pane_ParamLimits

0x0bb0,	// (0x0006c57f) cell_cale_week_pane

0x0c3e,	// (0x0006c60d) cale_week_day_heading_pane_t1

0x0c68,	// (0x0006c637) cale_week_day_heading_pane_t2

0x0c97,	// (0x0006c666) cale_week_day_heading_pane_t3

0x0cc6,	// (0x0006c695) cale_week_day_heading_pane_t4

0x0cf5,	// (0x0006c6c4) cale_week_day_heading_pane_t5

0x0d2c,	// (0x0006c6fb) cale_week_day_heading_pane_t6

0x0d63,	// (0x0006c732) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0007ab9c) cale_week_day_heading_pane_t

0xaa8c,	// (0x0007645b) bg_cale_side_pane

0x0d8d,	// (0x0006c75c) cale_week_time_pane_t1

0x0da7,	// (0x0006c776) cale_week_time_pane_t2

0x0dc1,	// (0x0006c790) cale_week_time_pane_t3

0x0ddb,	// (0x0006c7aa) cale_week_time_pane_t4

0x0df5,	// (0x0006c7c4) cale_week_time_pane_t5

0x0e0f,	// (0x0006c7de) cale_week_time_pane_t6

0x0e29,	// (0x0006c7f8) cale_week_time_pane_t7

0x0e43,	// (0x0006c812) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0007abab) cale_week_time_pane_t

0x0e5d,	// (0x0006c82c) cell_cale_week_pane_g2

0x0e7c,	// (0x0006c84b) cell_cale_week_pane_g3_ParamLimits

0x0e7c,	// (0x0006c84b) cell_cale_week_pane_g3

0xaa9a,	// (0x00076469) grid_highlight_pane_cp07

0xaaa2,	// (0x00076471) listscroll_gms_pane

0xaaac,	// (0x0007647b) grid_gms_pane

0xaab5,	// (0x00076484) listscroll_gms_pane_g1

0xaabd,	// (0x0007648c) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0007abbc) listscroll_gms_pane_g

0x0e94,	// (0x0006c863) scroll_pane_cp010

0x0e9f,	// (0x0006c86e) cell_gms_pane_ParamLimits

0x0e9f,	// (0x0006c86e) cell_gms_pane

0x0eb2,	// (0x0006c881) cell_gms_pane_g1

0xaac5,	// (0x00076494) cell_gms_pane_g2

0xaacd,	// (0x0007649c) cell_gms_pane_g3

0xaad6,	// (0x000764a5) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0007abc1) cell_gms_pane_g

0xaadf,	// (0x000764ae) grid_highlight_pane_cp09

0x3383,	// (0x0006ed52) phob_pre_status_pane_g1

0x338b,	// (0x0006ed5a) phob_pre_status_pane_g2

0x3393,	// (0x0006ed62) phob_pre_status_pane_g3

0x339b,	// (0x0006ed6a) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0007afac) phob_pre_status_pane_g

0x33ab,	// (0x0006ed7a) phob_pre_status_pane_t1

0x33b9,	// (0x0006ed88) phob_pre_status_pane_t2

0x33c9,	// (0x0006ed98) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0007afb7) phob_pre_status_pane_t

0xaae7,	// (0x000764b6) bg_list_pane_cp05

0x0ec2,	// (0x0006c891) grid_vorec_pane

0x0eca,	// (0x0006c899) vorec_t1

0x0ed8,	// (0x0006c8a7) vorec_t2

0x0ee6,	// (0x0006c8b5) vorec_t3

0x0ef4,	// (0x0006c8c3) vorec_t4

0x9490,	// (0x00074e5f) vorec_t5

0x949e,	// (0x00074e6d) vorec_t6

0x0004,

0xf1fb,	// (0x0007abca) vorec_t

0x94ac,	// (0x00074e7b) wait_bar_pane_cp01

0x0f10,	// (0x0006c8df) cell_vorec_pane_ParamLimits

0x0f10,	// (0x0006c8df) cell_vorec_pane

0x9858,	// (0x00075227) cell_vorec_pane_g1

0xa112,	// (0x00075ae1) grid_highlight_pane_cp05

0x0f38,	// (0x0006c907) cams_zoom_pane

0x0f47,	// (0x0006c916) image_vga_pane

0x0f61,	// (0x0006c930) main_camera_pane_g1

0x0f73,	// (0x0006c942) main_camera_pane_g2

0x0f83,	// (0x0006c952) main_camera_pane_g3

0x0f93,	// (0x0006c962) main_camera_pane_g4

0x0fa3,	// (0x0006c972) main_camera_pane_g5

0x0fb3,	// (0x0006c982) main_camera_pane_g6

0x0fc5,	// (0x0006c994) main_camera_pane_g7

0x0007,

0xf206,	// (0x0007abd5) main_camera_pane_g

0x0fd5,	// (0x0006c9a4) main_camera_pane_t1

0x0feb,	// (0x0006c9ba) main_camera_pane_t2

0x0001,

0xf217,	// (0x0007abe6) main_camera_pane_t

0x1025,	// (0x0006c9f4) cams_zoom_pane_cp_ParamLimits

0x1025,	// (0x0006c9f4) cams_zoom_pane_cp

0x104d,	// (0x0006ca1c) image_cif_pane_ParamLimits

0x104d,	// (0x0006ca1c) image_cif_pane

0x1083,	// (0x0006ca52) image_subqcif_pane

0x108b,	// (0x0006ca5a) main_video_pane_g1_ParamLimits

0x108b,	// (0x0006ca5a) main_video_pane_g1

0x10af,	// (0x0006ca7e) main_video_pane_g2_ParamLimits

0x10af,	// (0x0006ca7e) main_video_pane_g2

0x10e3,	// (0x0006cab2) main_video_pane_g3_ParamLimits

0x10e3,	// (0x0006cab2) main_video_pane_g3

0x1111,	// (0x0006cae0) main_video_pane_g4_ParamLimits

0x1111,	// (0x0006cae0) main_video_pane_g4

0x113f,	// (0x0006cb0e) main_video_pane_g5_ParamLimits

0x113f,	// (0x0006cb0e) main_video_pane_g5

0xaafb,	// (0x000764ca) main_video_pane_g6_ParamLimits

0xaafb,	// (0x000764ca) main_video_pane_g6

0x0006,

0xf21c,	// (0x0007abeb) main_video_pane_g_ParamLimits

0xf21c,	// (0x0007abeb) main_video_pane_g

0x1168,	// (0x0006cb37) main_video_pane_t1_ParamLimits

0x1168,	// (0x0006cb37) main_video_pane_t1

0xab15,	// (0x000764e4) cams_zoom_pane_g1

0xab1e,	// (0x000764ed) cams_zoom_pane_g2

0xab27,	// (0x000764f6) cams_zoom_pane_g3

0xab30,	// (0x000764ff) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0007abfa) cams_zoom_pane_g

0x11c5,	// (0x0006cb94) grid_cams_pane

0x11df,	// (0x0006cbae) linegrid_cams_pane

0x11f3,	// (0x0006cbc2) cell_cams_pane_ParamLimits

0x11f3,	// (0x0006cbc2) cell_cams_pane

0xab39,	// (0x00076508) cams_burst_image_pane

0xab41,	// (0x00076510) cell_cams_pane_g1

0xa112,	// (0x00075ae1) grid_highlight_pane_cp03

0xa487,	// (0x00075e56) mp_bg_pane_g1

0xa112,	// (0x00075ae1) bg_list_pane_cp03

0xc864,	// (0x00078233) bg_mp_pane

0xc86c,	// (0x0007823b) grid_mp_pane

0xc874,	// (0x00078243) media_player_g1

0xc87c,	// (0x0007824b) media_player_t1

0xc88a,	// (0x00078259) media_player_t2

0xc898,	// (0x00078267) media_player_t3

0xc8a6,	// (0x00078275) media_player_t4

0xc8b4,	// (0x00078283) media_player_t5

0xc8c2,	// (0x00078291) media_player_t6

0xc8d0,	// (0x0007829f) media_player_t7

0x0006,

0xf5c7,	// (0x0007af96) media_player_t

0xc8de,	// (0x000782ad) wait_bar_pane_cp02

0xf5ac,	// (0x0007af7b) main_usb_pane_t

0x337a,	// (0x0006ed49) cell_mp_pane

0xa487,	// (0x00075e56) cell_mp_pane_g1

0xa112,	// (0x00075ae1) grid_highlight_pane_cp06

0xab49,	// (0x00076518) grid_skin_colour_pane

0xab51,	// (0x00076520) list_highlight_pane_cp03

0x1329,	// (0x0006ccf8) skin_g1

0xab59,	// (0x00076528) skin_t1

0xab68,	// (0x00076537) skin_t2

0x0001,

0xf260,	// (0x0007ac2f) skin_t

0x1331,	// (0x0006cd00) cell_skin_colour_pane_ParamLimits

0x1331,	// (0x0006cd00) cell_skin_colour_pane

0xab76,	// (0x00076545) cell_skin_colour_pane_g1

0x13aa,	// (0x0006cd79) call_video_g1_ParamLimits

0x13aa,	// (0x0006cd79) call_video_g1

0x13c6,	// (0x0006cd95) call_video_g2_ParamLimits

0x13c6,	// (0x0006cd95) call_video_g2

0x0001,

0xf265,	// (0x0007ac34) call_video_g_ParamLimits

0xf265,	// (0x0007ac34) call_video_g

0x1418,	// (0x0006cde7) call_video_uplink_pane_cp1_ParamLimits

0x1418,	// (0x0006cde7) call_video_uplink_pane_cp1

0xab88,	// (0x00076557) call_video_uplink_pane_cp2

0x14b7,	// (0x0006ce86) video_down_crop_pane_ParamLimits

0x14b7,	// (0x0006ce86) video_down_crop_pane

0x15ae,	// (0x0006cf7d) video_down_pane_ParamLimits

0x15ae,	// (0x0006cf7d) video_down_pane

0xab90,	// (0x0007655f) video_down_subqcif_pane_ParamLimits

0xab90,	// (0x0007655f) video_down_subqcif_pane

0xaba8,	// (0x00076577) video_down_subqcif_pane_cp_ParamLimits

0xaba8,	// (0x00076577) video_down_subqcif_pane_cp

0xabce,	// (0x0007659d) im_reading_pane_ParamLimits

0xabce,	// (0x0007659d) im_reading_pane

0x16be,	// (0x0006d08d) im_writing_pane_ParamLimits

0x16be,	// (0x0006d08d) im_writing_pane

0x16d4,	// (0x0006d0a3) im_reading_pane_t1

0xabe8,	// (0x000765b7) list_im_pane

0xabf9,	// (0x000765c8) scroll_pane_cp07

0x170d,	// (0x0006d0dc) im_writing_pane_t1_ParamLimits

0x170d,	// (0x0006d0dc) im_writing_pane_t1

0xac12,	// (0x000765e1) im_writing_pane_t2_ParamLimits

0xac12,	// (0x000765e1) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0007ac3e) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0007ac3e) im_writing_pane_t

0xa112,	// (0x00075ae1) input_focus_pane_cp04

0xa112,	// (0x00075ae1) input_focus_pane_cp05

0x1722,	// (0x0006d0f1) list_im_single_pane_ParamLimits

0x1722,	// (0x0006d0f1) list_im_single_pane

0x1736,	// (0x0006d105) list_single_im_pane_t1

0x333a,	// (0x0006ed09) blid_accuracy_pane

0x3342,	// (0x0006ed11) blid_compass_pane

0x334c,	// (0x0006ed1b) main_location_t1

0x335c,	// (0x0006ed2b) main_location_t2

0x336c,	// (0x0006ed3b) main_location_t3

0x0002,

0xf5d6,	// (0x0007afa5) main_location_t

0xa112,	// (0x00075ae1) aid_levels_location

0xa487,	// (0x00075e56) blid_accuracy_pane_g1

0xa487,	// (0x00075e56) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0007aca0) blid_accuracy_pane_g

0xac5a,	// (0x00076629) wml_content_pane

0xac98,	// (0x00076667) wml_button_pane_ParamLimits

0xac98,	// (0x00076667) wml_button_pane

0x1745,	// (0x0006d114) wml_list_single_large_pane_ParamLimits

0x1745,	// (0x0006d114) wml_list_single_large_pane

0x175a,	// (0x0006d129) wml_list_single_medium_pane_ParamLimits

0x175a,	// (0x0006d129) wml_list_single_medium_pane

0x1770,	// (0x0006d13f) wml_list_single_small_pane_ParamLimits

0x1770,	// (0x0006d13f) wml_list_single_small_pane

0xacac,	// (0x0007667b) wml_selection_box_pane_ParamLimits

0xacac,	// (0x0007667b) wml_selection_box_pane

0xacbf,	// (0x0007668e) wml_list_single_pane_t1

0xacce,	// (0x0007669d) wml_list_single_medium_pane_t1

0xacdd,	// (0x000766ac) wml_list_single_large_pane_t1

0xacec,	// (0x000766bb) input_focus_pane_cp02_ParamLimits

0xacec,	// (0x000766bb) input_focus_pane_cp02

0xacff,	// (0x000766ce) wml_selection_box_pane_g1

0xad08,	// (0x000766d7) wml_selection_box_pane_t1_ParamLimits

0xad08,	// (0x000766d7) wml_selection_box_pane_t1

0xa36d,	// (0x00075d3c) bg_wml_button_pane_ParamLimits

0xa36d,	// (0x00075d3c) bg_wml_button_pane

0xad20,	// (0x000766ef) wml_button_pane_g1

0xad28,	// (0x000766f7) wml_button_pane_t1

0xad20,	// (0x000766ef) wml_button_bg_pane_g1

0xad38,	// (0x00076707) wml_button_bg_pane_g2

0xad40,	// (0x0007670f) wml_button_bg_pane_g3

0xad48,	// (0x00076717) wml_button_bg_pane_g4

0xad50,	// (0x0007671f) wml_button_bg_pane_g5

0xad58,	// (0x00076727) wml_button_bg_pane_g6

0xad60,	// (0x0007672f) wml_button_bg_pane_g7

0xad68,	// (0x00076737) wml_button_bg_pane_g8

0xad70,	// (0x0007673f) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0007ac43) wml_button_bg_pane_g

0x1788,	// (0x0006d157) bg_list_pane_cp02

0xad78,	// (0x00076747) mce_header_pane_ParamLimits

0xad78,	// (0x00076747) mce_header_pane

0xad8e,	// (0x0007675d) mce_icon_pane

0xad8e,	// (0x0007675d) mce_image_pane

0xad97,	// (0x00076766) mce_text_pane_ParamLimits

0xad97,	// (0x00076766) mce_text_pane

0x1790,	// (0x0006d15f) scroll_pane_cp03

0xac90,	// (0x0007665f) scroll_pane_cp04

0xadaa,	// (0x00076779) scroll_pane_cp05_ParamLimits

0xadaa,	// (0x00076779) scroll_pane_cp05

0x179a,	// (0x0006d169) mce_header_field_pane_ParamLimits

0x179a,	// (0x0006d169) mce_header_field_pane

0x17b1,	// (0x0006d180) mce_header_field_pane_2_ParamLimits

0x17b1,	// (0x0006d180) mce_header_field_pane_2

0x17c7,	// (0x0006d196) mce_header_field_pane_3

0x17cf,	// (0x0006d19e) list_single_mce_message_pane_ParamLimits

0x17cf,	// (0x0006d19e) list_single_mce_message_pane

0x17e4,	// (0x0006d1b3) list_single_mce_smart_pane_ParamLimits

0x17e4,	// (0x0006d1b3) list_single_mce_smart_pane

0xadb6,	// (0x00076785) input_focus_pane_cp03

0xadbf,	// (0x0007678e) list_header_data_pane

0x1804,	// (0x0006d1d3) mce_header_field_pane_t1

0x1814,	// (0x0006d1e3) list_single_mce_header_pane_ParamLimits

0x1814,	// (0x0006d1e3) list_single_mce_header_pane

0xadc7,	// (0x00076796) list_single_mce_header_pane_t1

0xadd6,	// (0x000767a5) list_single_mce_message_pane_g1

0xadde,	// (0x000767ad) list_single_mce_message_pane_t1

0x184e,	// (0x0006d21d) bg_cale_heading_pane_cp01_ParamLimits

0x184e,	// (0x0006d21d) bg_cale_heading_pane_cp01

0xadec,	// (0x000767bb) bg_cale_pane_cp02_ParamLimits

0xadec,	// (0x000767bb) bg_cale_pane_cp02

0x1888,	// (0x0006d257) cale_month_corner_pane

0x18a7,	// (0x0006d276) cale_month_day_heading_pane_ParamLimits

0x18a7,	// (0x0006d276) cale_month_day_heading_pane

0x18f9,	// (0x0006d2c8) cale_month_pane_g1_ParamLimits

0x18f9,	// (0x0006d2c8) cale_month_pane_g1

0x1928,	// (0x0006d2f7) cale_month_pane_g2_ParamLimits

0x1928,	// (0x0006d2f7) cale_month_pane_g2

0x1958,	// (0x0006d327) cale_month_pane_g3_ParamLimits

0x1958,	// (0x0006d327) cale_month_pane_g3

0x1994,	// (0x0006d363) cale_month_pane_g4_ParamLimits

0x1994,	// (0x0006d363) cale_month_pane_g4

0x19d0,	// (0x0006d39f) cale_month_pane_g5_ParamLimits

0x19d0,	// (0x0006d39f) cale_month_pane_g5

0x1a18,	// (0x0006d3e7) cale_month_pane_g6_ParamLimits

0x1a18,	// (0x0006d3e7) cale_month_pane_g6

0x1a64,	// (0x0006d433) cale_month_pane_g7_ParamLimits

0x1a64,	// (0x0006d433) cale_month_pane_g7

0x1ab8,	// (0x0006d487) cale_month_pane_g8_ParamLimits

0x1ab8,	// (0x0006d487) cale_month_pane_g8

0x1b0c,	// (0x0006d4db) cale_month_pane_g9_ParamLimits

0x1b0c,	// (0x0006d4db) cale_month_pane_g9

0x1b5e,	// (0x0006d52d) cale_month_pane_g10_ParamLimits

0x1b5e,	// (0x0006d52d) cale_month_pane_g10

0x1bb0,	// (0x0006d57f) cale_month_pane_g11_ParamLimits

0x1bb0,	// (0x0006d57f) cale_month_pane_g11

0x1c02,	// (0x0006d5d1) cale_month_pane_g12_ParamLimits

0x1c02,	// (0x0006d5d1) cale_month_pane_g12

0x1c54,	// (0x0006d623) cale_month_pane_g13_ParamLimits

0x1c54,	// (0x0006d623) cale_month_pane_g13

0x000c,

0xf287,	// (0x0007ac56) cale_month_pane_g_ParamLimits

0xf287,	// (0x0007ac56) cale_month_pane_g

0x1ca6,	// (0x0006d675) cale_month_week_pane

0x1cca,	// (0x0006d699) grid_cale_month_pane_ParamLimits

0x1cca,	// (0x0006d699) grid_cale_month_pane

0x1d13,	// (0x0006d6e2) cale_month_day_heading_pane_t1

0x1d99,	// (0x0006d768) cale_month_day_heading_pane_t2

0x1e12,	// (0x0006d7e1) cale_month_day_heading_pane_t3

0x1e8b,	// (0x0006d85a) cale_month_day_heading_pane_t4

0x1f0c,	// (0x0006d8db) cale_month_day_heading_pane_t5

0x1f95,	// (0x0006d964) cale_month_day_heading_pane_t6

0x201e,	// (0x0006d9ed) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0007ac71) cale_month_day_heading_pane_t

0xaa8c,	// (0x0007645b) bg_cale_side_pane_cp01

0x20af,	// (0x0006da7e) cale_month_week_pane_t1

0x20c8,	// (0x0006da97) cale_month_week_pane_t2

0x20e1,	// (0x0006dab0) cale_month_week_pane_t3

0x20fa,	// (0x0006dac9) cale_month_week_pane_t4

0x2113,	// (0x0006dae2) cale_month_week_pane_t5

0x212c,	// (0x0006dafb) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0007ac80) cale_month_week_pane_t

0x2145,	// (0x0006db14) cell_cale_month_pane_ParamLimits

0x2145,	// (0x0006db14) cell_cale_month_pane

0x9862,	// (0x00075231) cell_cale_month_pane_g1

0x229d,	// (0x0006dc6c) cell_cale_month_pane_t1_ParamLimits

0x229d,	// (0x0006dc6c) cell_cale_month_pane_t1

0xaa9a,	// (0x00076469) grid_highlight_pane_cp08

0xa487,	// (0x00075e56) main_smil_g1

0x22c9,	// (0x0006dc98) smil_status_pane

0xae2b,	// (0x000767fa) smil_text_pane

0xc784,	// (0x00078153) bg_popup_call3_rect_pane_g8

0xc78c,	// (0x0007815b) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0007af39) bg_popup_call3_rect_pane_g

0xc9d3,	// (0x000783a2) smil_status_volume_pane_g1

0xae35,	// (0x00076804) smil_status_pane_t1

0x99ac,	// (0x0007537b) volume_smil_pane

0xae4c,	// (0x0007681b) list_smil_text_pane

0x22dc,	// (0x0006dcab) scroll_pane_cp011

0x22e7,	// (0x0006dcb6) smil_text_list_pane_t1_ParamLimits

0x22e7,	// (0x0006dcb6) smil_text_list_pane_t1

0x986e,	// (0x0007523d) aid_volume_smil_ParamLimits

0x986e,	// (0x0007523d) aid_volume_smil

0xa487,	// (0x00075e56) smil_volume_pane_g1

0xa487,	// (0x00075e56) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0007aca0) smil_volume_pane_g

0x096b,	// (0x0006c33a) listscroll_cale_day_pane

0xae56,	// (0x00076825) bg_cale_pane

0xae6e,	// (0x0007683d) list_cale_pane

0xae91,	// (0x00076860) scroll_pane_cp09

0xaea2,	// (0x00076871) cale_bg_pane_g1

0xaeaa,	// (0x00076879) cale_bg_pane_g2

0xaeb2,	// (0x00076881) cale_bg_pane_g3

0xaeba,	// (0x00076889) cale_bg_pane_g4

0xaec2,	// (0x00076891) cale_bg_pane_g5

0xaeca,	// (0x00076899) cale_bg_pane_g6

0xaed2,	// (0x000768a1) cale_bg_pane_g7

0xaeda,	// (0x000768a9) cale_bg_pane_g8

0xaee2,	// (0x000768b1) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0007aca5) cale_bg_pane_g

0x232b,	// (0x0006dcfa) list_cale_time_pane_ParamLimits

0x232b,	// (0x0006dcfa) list_cale_time_pane

0xaeea,	// (0x000768b9) list_cale_time_pane_g1_ParamLimits

0xaeea,	// (0x000768b9) list_cale_time_pane_g1

0xaef6,	// (0x000768c5) list_cale_time_pane_g2_ParamLimits

0xaef6,	// (0x000768c5) list_cale_time_pane_g2

0x2340,	// (0x0006dd0f) list_cale_time_pane_g3_ParamLimits

0x2340,	// (0x0006dd0f) list_cale_time_pane_g3

0x234e,	// (0x0006dd1d) list_cale_time_pane_g4_ParamLimits

0x234e,	// (0x0006dd1d) list_cale_time_pane_g4

0x235c,	// (0x0006dd2b) list_cale_time_pane_g5_ParamLimits

0x235c,	// (0x0006dd2b) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0007acb8) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0007acb8) list_cale_time_pane_g

0xaf10,	// (0x000768df) list_cale_time_pane_t1_ParamLimits

0xaf10,	// (0x000768df) list_cale_time_pane_t1

0xaf38,	// (0x00076907) list_cale_time_pane_t2_ParamLimits

0xaf38,	// (0x00076907) list_cale_time_pane_t2

0x26bd,	// (0x0006e08c) aid_blid_cardinal_pane

0x26fb,	// (0x0006e0ca) compass_pane_t4

0xaf60,	// (0x0007692f) list_cale_time_pane_t4_ParamLimits

0xaf60,	// (0x0007692f) list_cale_time_pane_t4

0x2709,	// (0x0006e0d8) compass_pane_t5

0x2717,	// (0x0006e0e6) compass_pane_t6

0x2725,	// (0x0006e0f4) compass_pane_t7

0xb40f,	// (0x00076dde) navi_pane_cc_t1

0xb5ec,	// (0x00076fbb) aid_phob_thumbnail_center_pane

0x2d52,	// (0x0006e721) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0007acc5) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0007acc5) list_cale_time_pane_t

0x95cc,	// (0x00074f9b) bg_popup_window_pane_cp02_ParamLimits

0x95cc,	// (0x00074f9b) bg_popup_window_pane_cp02

0xaf88,	// (0x00076957) heading_pane_cp01_ParamLimits

0xaf88,	// (0x00076957) heading_pane_cp01

0xaf94,	// (0x00076963) loc_req_pane_ParamLimits

0xaf94,	// (0x00076963) loc_req_pane

0xafa4,	// (0x00076973) loc_type_pane_ParamLimits

0xafa4,	// (0x00076973) loc_type_pane

0xafb6,	// (0x00076985) loc_type_pane_t1_ParamLimits

0xafb6,	// (0x00076985) loc_type_pane_t1

0xafc8,	// (0x00076997) loc_type_pane_t2_ParamLimits

0xafc8,	// (0x00076997) loc_type_pane_t2

0xafda,	// (0x000769a9) loc_type_pane_t3_ParamLimits

0xafda,	// (0x000769a9) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0007accc) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0007accc) loc_type_pane_t

0xafec,	// (0x000769bb) list_loc_req_pane

0xaff6,	// (0x000769c5) scroll_pane_cp012

0x236a,	// (0x0006dd39) list_single_loc_request_popup_menu_pane_ParamLimits

0x236a,	// (0x0006dd39) list_single_loc_request_popup_menu_pane

0xb001,	// (0x000769d0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb001,	// (0x000769d0) list_single_loc_request_popup_menu_pane_g1

0xb00d,	// (0x000769dc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb00d,	// (0x000769dc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0007acd3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0007acd3) list_single_loc_request_popup_menu_pane_g

0xb019,	// (0x000769e8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb019,	// (0x000769e8) list_single_loc_request_popup_menu_pane_t1

0xa36d,	// (0x00075d3c) bg_popup_window_pane_cp03_ParamLimits

0xa36d,	// (0x00075d3c) bg_popup_window_pane_cp03

0xb02f,	// (0x000769fe) heading_loc_req_pane_ParamLimits

0xb02f,	// (0x000769fe) heading_loc_req_pane

0x2377,	// (0x0006dd46) popup_dyc_status_message_window_g1_ParamLimits

0x2377,	// (0x0006dd46) popup_dyc_status_message_window_g1

0x238b,	// (0x0006dd5a) popup_dyc_status_message_window_t1_ParamLimits

0x238b,	// (0x0006dd5a) popup_dyc_status_message_window_t1

0x23a0,	// (0x0006dd6f) popup_dyc_status_message_window_t2_ParamLimits

0x23a0,	// (0x0006dd6f) popup_dyc_status_message_window_t2

0x23b5,	// (0x0006dd84) popup_dyc_status_message_window_t3_ParamLimits

0x23b5,	// (0x0006dd84) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0007acd8) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0007acd8) popup_dyc_status_message_window_t

0xa112,	// (0x00075ae1) bg_heading_pane_cp01

0xb03b,	// (0x00076a0a) heading_loc_req_pane_g1

0xb043,	// (0x00076a12) heading_loc_req_pane_g2

0xb04b,	// (0x00076a1a) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0007acdf) heading_loc_req_pane_g

0xb053,	// (0x00076a22) heading_loc_req_pane_t1

0xb062,	// (0x00076a31) bg_popup_sub_pane_cp01_ParamLimits

0xb062,	// (0x00076a31) bg_popup_sub_pane_cp01

0xb070,	// (0x00076a3f) popup_cale_events_window_g1_ParamLimits

0xb070,	// (0x00076a3f) popup_cale_events_window_g1

0xb090,	// (0x00076a5f) popup_cale_events_window_g2_ParamLimits

0xb090,	// (0x00076a5f) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0007ad13) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0007ad13) popup_cale_events_window_g

0xb0b0,	// (0x00076a7f) popup_cale_events_window_t1_ParamLimits

0xb0b0,	// (0x00076a7f) popup_cale_events_window_t1

0xb0c2,	// (0x00076a91) popup_cale_events_window_t2_ParamLimits

0xb0c2,	// (0x00076a91) popup_cale_events_window_t2

0xb100,	// (0x00076acf) popup_cale_events_window_t3_ParamLimits

0xb100,	// (0x00076acf) popup_cale_events_window_t3

0xb13a,	// (0x00076b09) popup_cale_events_window_t4_ParamLimits

0xb13a,	// (0x00076b09) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0007ad18) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0007ad18) popup_cale_events_window_t

0x24b8,	// (0x0006de87) call_type_pane

0x24c8,	// (0x0006de97) popup_call_status_window_g1

0x24dc,	// (0x0006deab) popup_call_status_window_g2

0x24f0,	// (0x0006debf) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0007ad21) popup_call_status_window_g

0xb170,	// (0x00076b3f) call_type_pane_g1

0xb179,	// (0x00076b48) call_type_pane_g2

0x0001,

0xf359,	// (0x0007ad28) call_type_pane_g

0xa112,	// (0x00075ae1) bg_popup_sub_pane_cp02

0xb182,	// (0x00076b51) listscroll_popup_wml_pane

0xb18a,	// (0x00076b59) list_wml_pane

0xb194,	// (0x00076b63) scroll_pane_cp013

0xb19f,	// (0x00076b6e) list_single_graphic_popup_wml_pane_ParamLimits

0xb19f,	// (0x00076b6e) list_single_graphic_popup_wml_pane

0xa487,	// (0x00075e56) list_single_graphic_popup_wml_pane_g1

0xb1b3,	// (0x00076b82) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0007ad2d) list_single_graphic_popup_wml_pane_g

0xb1bb,	// (0x00076b8a) list_single_graphic_popup_wml_pane_t1

0xb1d1,	// (0x00076ba0) aid_call_pane

0xa365,	// (0x00075d34) popup_clock_analogue_window_g1

0xa365,	// (0x00075d34) popup_clock_analogue_window_g2

0x9890,	// (0x0007525f) popup_clock_analogue_window_g3

0x9890,	// (0x0007525f) popup_clock_analogue_window_g4

0xa487,	// (0x00075e56) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0007ad32) popup_clock_analogue_window_g

0x9898,	// (0x00075267) popup_clock_analogue_window_t1

0x98a6,	// (0x00075275) clock_digital_number_pane_ParamLimits

0x98a6,	// (0x00075275) clock_digital_number_pane

0x98b2,	// (0x00075281) clock_digital_number_pane_cp02_ParamLimits

0x98b2,	// (0x00075281) clock_digital_number_pane_cp02

0x98be,	// (0x0007528d) clock_digital_number_pane_cp03_ParamLimits

0x98be,	// (0x0007528d) clock_digital_number_pane_cp03

0x98ca,	// (0x00075299) clock_digital_number_pane_cp04_ParamLimits

0x98ca,	// (0x00075299) clock_digital_number_pane_cp04

0x98da,	// (0x000752a9) clock_digital_separator_pane_ParamLimits

0x98da,	// (0x000752a9) clock_digital_separator_pane

0x98e6,	// (0x000752b5) popup_clock_digital_window_t1

0xa487,	// (0x00075e56) clock_digital_number_pane_g1

0xa487,	// (0x00075e56) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0007aca0) clock_digital_number_pane_g

0xa487,	// (0x00075e56) clock_digital_separator_pane_g1

0xa487,	// (0x00075e56) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0007aca0) clock_digital_separator_pane_g

0xa112,	// (0x00075ae1) bg_popup_window_pane_cp04

0xb1d9,	// (0x00076ba8) heading_pane_cp03

0xb1e1,	// (0x00076bb0) listscroll_popup_gms_pane

0xb1e9,	// (0x00076bb8) grid_large_graphic_popup_pane

0xb1f3,	// (0x00076bc2) listscroll_popup_gms_pane_g1

0xb1fb,	// (0x00076bca) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0007ad3d) listscroll_popup_gms_pane_g

0xac90,	// (0x0007665f) scroll_pane_cp014

0x24ff,	// (0x0006dece) cell_large_graphic_popup_pane_ParamLimits

0x24ff,	// (0x0006dece) cell_large_graphic_popup_pane

0x2517,	// (0x0006dee6) cell_large_graphic_popup_pane_g1_ParamLimits

0x2517,	// (0x0006dee6) cell_large_graphic_popup_pane_g1

0xb203,	// (0x00076bd2) cell_large_graphic_popup_pane_g2_ParamLimits

0xb203,	// (0x00076bd2) cell_large_graphic_popup_pane_g2

0xb20f,	// (0x00076bde) cell_large_graphic_popup_pane_g3_ParamLimits

0xb20f,	// (0x00076bde) cell_large_graphic_popup_pane_g3

0xb21c,	// (0x00076beb) cell_large_graphic_popup_pane_g4_ParamLimits

0xb21c,	// (0x00076beb) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0007ad42) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0007ad42) cell_large_graphic_popup_pane_g

0xb22c,	// (0x00076bfb) grid_highlight_pane_cp010

0xa487,	// (0x00075e56) bg_popup_call_pane_g1

0xb236,	// (0x00076c05) list_single_graphic_popup_conf_pane_ParamLimits

0xb236,	// (0x00076c05) list_single_graphic_popup_conf_pane

0xb249,	// (0x00076c18) list_highlight_pane_cp01

0xb252,	// (0x00076c21) list_single_graphic_popup_conf_pane_g1

0xb25a,	// (0x00076c29) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0007ad4b) list_single_graphic_popup_conf_pane_g

0xb262,	// (0x00076c31) list_single_graphic_popup_conf_pane_t1

0xb270,	// (0x00076c3f) linegrid_cams_pane_g1

0x2523,	// (0x0006def2) linegrid_cams_pane_g2

0xaacd,	// (0x0007649c) linegrid_cams_pane_g3

0xb279,	// (0x00076c48) linegrid_cams_pane_g4

0x252c,	// (0x0006defb) linegrid_cams_pane_g5

0x2535,	// (0x0006df04) linegrid_cams_pane_g6

0xaad6,	// (0x000764a5) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0007ad50) linegrid_cams_pane_g

0xb282,	// (0x00076c51) popup_clock_analogue_window

0xb282,	// (0x00076c51) popup_clock_digital_window

0xa112,	// (0x00075ae1) popup_phob_thumbnail_window

0xa487,	// (0x00075e56) call_video_uplink_pane_g1

0xb28b,	// (0x00076c5a) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0007ad5f) call_video_uplink_pane_g

0xb293,	// (0x00076c62) video_uplink_pane

0xb29b,	// (0x00076c6a) mce_image_pane_g1

0x2540,	// (0x0006df0f) mce_image_pane_g2

0x254a,	// (0x0006df19) mce_image_pane_g3

0x2552,	// (0x0006df21) mce_image_pane_g4

0x255a,	// (0x0006df29) mce_image_pane_g5

0x0004,

0xf395,	// (0x0007ad64) mce_image_pane_g

0xb2a5,	// (0x00076c74) control_top_pane_stacon_cp01_ParamLimits

0xb2a5,	// (0x00076c74) control_top_pane_stacon_cp01

0xb2b9,	// (0x00076c88) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2b9,	// (0x00076c88) uni_indicator_pane_stacon_cp01

0xb2ca,	// (0x00076c99) bg_popup_sub_pane_cp03

0xb2d4,	// (0x00076ca3) chi_dic_find_pane

0x2562,	// (0x0006df31) listscroll_chi_dic_pane

0xb2dc,	// (0x00076cab) main_pane_chidic_g1

0xb2e4,	// (0x00076cb3) chi_dic_find_pane_t1

0xb2f2,	// (0x00076cc1) find_chidic_pane

0xb2fb,	// (0x00076cca) chi_dic_list_pane_ParamLimits

0xb2fb,	// (0x00076cca) chi_dic_list_pane

0xb30c,	// (0x00076cdb) scroll_pane_cp020

0xb314,	// (0x00076ce3) find_chidic_pane_t1

0xa112,	// (0x00075ae1) input_focus_pane_cp06

0x2576,	// (0x0006df45) list_chi_dic_pane_ParamLimits

0x2576,	// (0x0006df45) list_chi_dic_pane

0x2588,	// (0x0006df57) list_chi_dic_pane_t1_ParamLimits

0x2588,	// (0x0006df57) list_chi_dic_pane_t1

0xa112,	// (0x00075ae1) list_highlight_pane_cp020

0xb323,	// (0x00076cf2) bg_cale_heading_pane_g1

0x259b,	// (0x0006df6a) bg_cale_heading_pane_g2

0x25a3,	// (0x0006df72) bg_cale_heading_pane_g3

0x25ab,	// (0x0006df7a) bg_cale_heading_pane_g4

0x25b5,	// (0x0006df84) bg_cale_heading_pane_g5

0x25bf,	// (0x0006df8e) bg_cale_heading_pane_g6

0x25c7,	// (0x0006df96) bg_cale_heading_pane_g7

0x25cf,	// (0x0006df9e) bg_cale_heading_pane_g8

0x25d9,	// (0x0006dfa8) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0007ad6f) bg_cale_heading_pane_g

0xb323,	// (0x00076cf2) bg_cale_side_pane_g1

0x25e3,	// (0x0006dfb2) bg_cale_side_pane_g2

0x25eb,	// (0x0006dfba) bg_cale_side_pane_g3

0x25f3,	// (0x0006dfc2) bg_cale_side_pane_g4

0x25fb,	// (0x0006dfca) bg_cale_side_pane_g5

0x2603,	// (0x0006dfd2) bg_cale_side_pane_g6

0x260b,	// (0x0006dfda) bg_cale_side_pane_g7

0x2613,	// (0x0006dfe2) bg_cale_side_pane_g8

0x261b,	// (0x0006dfea) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0007ad82) bg_cale_side_pane_g

0x2623,	// (0x0006dff2) popup_call_status_window_ParamLimits

0x2623,	// (0x0006dff2) popup_call_status_window

0xb32b,	// (0x00076cfa) stacon_top_pane

0xb333,	// (0x00076d02) status_pane_ParamLimits

0xb333,	// (0x00076d02) status_pane

0xb348,	// (0x00076d17) status_small_pane

0xb350,	// (0x00076d1f) control_pane

0xa112,	// (0x00075ae1) stacon_bottom_pane

0xb358,	// (0x00076d27) list_single_mce_smart_pane_t1_ParamLimits

0xb358,	// (0x00076d27) list_single_mce_smart_pane_t1

0xb36b,	// (0x00076d3a) list_single_mce_smart_pane_t2_ParamLimits

0xb36b,	// (0x00076d3a) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0007ad95) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0007ad95) list_single_mce_smart_pane_t

0x266c,	// (0x0006e03b) compass_pane

0x2675,	// (0x0006e044) main_location2_pane_t1

0x2687,	// (0x0006e056) main_location2_pane_t2

0x2699,	// (0x0006e068) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0007ad9a) main_location2_pane_t

0xb38a,	// (0x00076d59) compass_pane_g1_ParamLimits

0xb38a,	// (0x00076d59) compass_pane_g1

0x26dd,	// (0x0006e0ac) compass_pane_t1

0x26ec,	// (0x0006e0bb) compass_pane_t2

0x0005,

0xf3d4,	// (0x0007ada3) compass_pane_t

0x2733,	// (0x0006e102) text_secondary_cp61

0xb406,	// (0x00076dd5) navi_pane_cams_g5

0xb482,	// (0x00076e51) navi_pane_im_t1

0xb490,	// (0x00076e5f) navi_pane_mp_g1_ParamLimits

0xb490,	// (0x00076e5f) navi_pane_mp_g1

0xb4a4,	// (0x00076e73) navi_pane_mp_g2_ParamLimits

0xb4a4,	// (0x00076e73) navi_pane_mp_g2

0xb4b0,	// (0x00076e7f) navi_pane_mp_g3_ParamLimits

0xb4b0,	// (0x00076e7f) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0007adb7) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0007adb7) navi_pane_mp_g

0xb4bc,	// (0x00076e8b) navi_pane_mp_t1

0xb4ca,	// (0x00076e99) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0007adbe) navi_pane_mp_t

0xb535,	// (0x00076f04) navi_pane_vt_g1

0xb4bc,	// (0x00076e8b) navi_pane_vt_t1

0xb53d,	// (0x00076f0c) navi_slider_pane

0xaae7,	// (0x000764b6) zooming_pane

0xb54d,	// (0x00076f1c) navi_slider_pane_g1

0x9903,	// (0x000752d2) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0007adc5) navi_slider_pane_g

0xb571,	// (0x00076f40) aid_levels_zoom

0xb579,	// (0x00076f48) zooming_pane_g1

0xb581,	// (0x00076f50) zooming_pane_g2

0xb581,	// (0x00076f50) zooming_pane_g3

0x0002,

0xf405,	// (0x0007add4) zooming_pane_g

0xb589,	// (0x00076f58) level_10_zoom

0xb592,	// (0x00076f61) level_11_zoom

0xb59b,	// (0x00076f6a) level_1_zoom

0xb5a4,	// (0x00076f73) level_2_zoom

0xb5ad,	// (0x00076f7c) level_3_zoom

0xb5b6,	// (0x00076f85) level_4_zoom

0xb5bf,	// (0x00076f8e) level_5_zoom

0xb5c8,	// (0x00076f97) level_6_zoom

0xb5d1,	// (0x00076fa0) level_7_zoom

0xb5da,	// (0x00076fa9) level_8_zoom

0xb5e3,	// (0x00076fb2) level_9_zoom

0xb5f4,	// (0x00076fc3) popup_phob_thumbnail_window_g1

0xb5fc,	// (0x00076fcb) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0007addb) popup_phob_thumbnail_window_g

0xc8e6,	// (0x000782b5) level_1_location

0xc8ee,	// (0x000782bd) level_2_location

0xc8f6,	// (0x000782c5) level_3_location

0xc8fe,	// (0x000782cd) level_4_location

0xaae7,	// (0x000764b6) level_5_location

0x2784,	// (0x0006e153) mce_icon_pane_g1

0x278e,	// (0x0006e15d) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0007ade0) mce_icon_pane_g

0x2796,	// (0x0006e165) main_mup_pane_g1_ParamLimits

0x2796,	// (0x0006e165) main_mup_pane_g1

0x27ac,	// (0x0006e17b) main_mup_pane_g2_ParamLimits

0x27ac,	// (0x0006e17b) main_mup_pane_g2

0x27c4,	// (0x0006e193) main_mup_pane_g3_ParamLimits

0x27c4,	// (0x0006e193) main_mup_pane_g3

0x27dc,	// (0x0006e1ab) main_mup_pane_g4_ParamLimits

0x27dc,	// (0x0006e1ab) main_mup_pane_g4

0x27f4,	// (0x0006e1c3) main_mup_pane_g5_ParamLimits

0x27f4,	// (0x0006e1c3) main_mup_pane_g5

0x2810,	// (0x0006e1df) main_mup_pane_g6_ParamLimits

0x2810,	// (0x0006e1df) main_mup_pane_g6

0x2828,	// (0x0006e1f7) main_mup_pane_g7_ParamLimits

0x2828,	// (0x0006e1f7) main_mup_pane_g7

0x2840,	// (0x0006e20f) main_mup_pane_g8_ParamLimits

0x2840,	// (0x0006e20f) main_mup_pane_g8

0x285a,	// (0x0006e229) main_mup_pane_g9_ParamLimits

0x285a,	// (0x0006e229) main_mup_pane_g9

0x2874,	// (0x0006e243) main_mup_pane_g10_ParamLimits

0x2874,	// (0x0006e243) main_mup_pane_g10

0x288e,	// (0x0006e25d) main_mup_pane_g11_ParamLimits

0x288e,	// (0x0006e25d) main_mup_pane_g11

0x28a2,	// (0x0006e271) main_mup_pane_g12_ParamLimits

0x28a2,	// (0x0006e271) main_mup_pane_g12

0x28b8,	// (0x0006e287) main_mup_pane_g13_ParamLimits

0x28b8,	// (0x0006e287) main_mup_pane_g13

0x000c,

0xf416,	// (0x0007ade5) main_mup_pane_g_ParamLimits

0xf416,	// (0x0007ade5) main_mup_pane_g

0x28cc,	// (0x0006e29b) main_mup_pane_t1_ParamLimits

0x28cc,	// (0x0006e29b) main_mup_pane_t1

0x28e6,	// (0x0006e2b5) main_mup_pane_t2_ParamLimits

0x28e6,	// (0x0006e2b5) main_mup_pane_t2

0x28fe,	// (0x0006e2cd) main_mup_pane_t3_ParamLimits

0x28fe,	// (0x0006e2cd) main_mup_pane_t3

0x2916,	// (0x0006e2e5) main_mup_pane_t4_ParamLimits

0x2916,	// (0x0006e2e5) main_mup_pane_t4

0x2934,	// (0x0006e303) main_mup_pane_t5_ParamLimits

0x2934,	// (0x0006e303) main_mup_pane_t5

0x2949,	// (0x0006e318) main_mup_pane_t6_ParamLimits

0x2949,	// (0x0006e318) main_mup_pane_t6

0x0005,

0xf431,	// (0x0007ae00) main_mup_pane_t_ParamLimits

0xf431,	// (0x0007ae00) main_mup_pane_t

0x295b,	// (0x0006e32a) mup_progress_pane_ParamLimits

0x295b,	// (0x0006e32a) mup_progress_pane

0x2967,	// (0x0006e336) mup_visualizer_pane_ParamLimits

0x2967,	// (0x0006e336) mup_visualizer_pane

0x2997,	// (0x0006e366) mup_volume_pane_ParamLimits

0x2997,	// (0x0006e366) mup_volume_pane

0xb604,	// (0x00076fd3) mup_visualizer_pane_g1_ParamLimits

0xb604,	// (0x00076fd3) mup_visualizer_pane_g1

0xb604,	// (0x00076fd3) mup_visualizer_pane_g2_ParamLimits

0xb604,	// (0x00076fd3) mup_visualizer_pane_g2

0xb38a,	// (0x00076d59) mup_visualizer_pane_g3_ParamLimits

0xb38a,	// (0x00076d59) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0007ae0d) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0007ae0d) mup_visualizer_pane_g

0xa487,	// (0x00075e56) mup_volume_pane_g1

0xb61a,	// (0x00076fe9) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0007ae14) mup_volume_pane_g

0xa487,	// (0x00075e56) mup_progress_pane_g1

0xb623,	// (0x00076ff2) mup_progress_pane_g2

0xb62c,	// (0x00076ffb) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0007ae19) mup_progress_pane_g

0xa112,	// (0x00075ae1) bg_popup_window_pane_cp05

0xb635,	// (0x00077004) heading_pane_cp02_ParamLimits

0xb635,	// (0x00077004) heading_pane_cp02

0xb64f,	// (0x0007701e) list_popup_blid_pane

0xb657,	// (0x00077026) list_blid_sat_info_pane_ParamLimits

0xb657,	// (0x00077026) list_blid_sat_info_pane

0xb66a,	// (0x00077039) list_blid_sat_info_pane_g1

0xb672,	// (0x00077041) list_blid_sat_info_pane_t1

0x2aad,	// (0x0006e47c) mup_equalizer_pane_ParamLimits

0x2aad,	// (0x0006e47c) mup_equalizer_pane

0x2ac6,	// (0x0006e495) mup_equalizer_pane_cp1_ParamLimits

0x2ac6,	// (0x0006e495) mup_equalizer_pane_cp1

0x2ae3,	// (0x0006e4b2) mup_equalizer_pane_cp2_ParamLimits

0x2ae3,	// (0x0006e4b2) mup_equalizer_pane_cp2

0x2b00,	// (0x0006e4cf) mup_equalizer_pane_cp3_ParamLimits

0x2b00,	// (0x0006e4cf) mup_equalizer_pane_cp3

0x2b21,	// (0x0006e4f0) mup_equalizer_pane_cp4_ParamLimits

0x2b21,	// (0x0006e4f0) mup_equalizer_pane_cp4

0x2b42,	// (0x0006e511) mup_equalizer_pane_cp5

0x2b56,	// (0x0006e525) mup_equalizer_pane_cp6

0x2b6a,	// (0x0006e539) mup_equalizer_pane_cp7

0xc804,	// (0x000781d3) bg_popup_call_poc_act_pane_g9

0xc80c,	// (0x000781db) bg_popup_call_poc_act_pane_g10

0xc814,	// (0x000781e3) bg_popup_call_poc_act_pane_g11

0x000a,

0xa36d,	// (0x00075d3c) mup_scale_pane

0xa487,	// (0x00075e56) mup_scale_pane_g1

0xb680,	// (0x0007704f) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0007ae35) mup_scale_pane_g

0xb6a4,	// (0x00077073) msg_data_pane

0xb6ac,	// (0x0007707b) scroll_pane_cp017

0x2b90,	// (0x0006e55f) bg_list_pane_cp04_ParamLimits

0x2b90,	// (0x0006e55f) bg_list_pane_cp04

0xb6b4,	// (0x00077083) msg_data_pane_g1

0x2ba8,	// (0x0006e577) msg_data_pane_g2

0x2bb2,	// (0x0006e581) msg_data_pane_g3

0x2bba,	// (0x0006e589) msg_data_pane_g4

0x2bc2,	// (0x0006e591) msg_data_pane_g5

0x2bca,	// (0x0006e599) msg_data_pane_g6

0x2bd2,	// (0x0006e5a1) msg_data_pane_g7

0x0006,

0xf475,	// (0x0007ae44) msg_data_pane_g

0x2bda,	// (0x0006e5a9) msg_text_pane_ParamLimits

0x2bda,	// (0x0006e5a9) msg_text_pane

0x2c07,	// (0x0006e5d6) qrid_highlight_pane_cp011_ParamLimits

0x2c07,	// (0x0006e5d6) qrid_highlight_pane_cp011

0xa112,	// (0x00075ae1) msg_body_pane

0xa112,	// (0x00075ae1) msg_header_pane

0xb6c5,	// (0x00077094) input_focus_pane_cp07

0x2c2b,	// (0x0006e5fa) msg_header_pane_t1_ParamLimits

0x2c2b,	// (0x0006e5fa) msg_header_pane_t1

0xa50c,	// (0x00075edb) msg_header_pane_t2_ParamLimits

0xa50c,	// (0x00075edb) msg_header_pane_t2

0x0001,

0xf489,	// (0x0007ae58) msg_header_pane_t_ParamLimits

0xf489,	// (0x0007ae58) msg_header_pane_t

0xb6da,	// (0x000770a9) msg_body_pane_g1

0x2c3d,	// (0x0006e60c) msg_body_pane_t1_ParamLimits

0x2c3d,	// (0x0006e60c) msg_body_pane_t1

0xa51e,	// (0x00075eed) msg_body_pane_t2_ParamLimits

0xa51e,	// (0x00075eed) msg_body_pane_t2

0xa530,	// (0x00075eff) msg_body_pane_t3_ParamLimits

0xa530,	// (0x00075eff) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0007ae5d) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0007ae5d) msg_body_pane_t

0x2ca8,	// (0x0006e677) main_viewer_pane_g1_ParamLimits

0x2ca8,	// (0x0006e677) main_viewer_pane_g1

0x2cb6,	// (0x0006e685) main_viewer_pane_g2_ParamLimits

0x2cb6,	// (0x0006e685) main_viewer_pane_g2

0x2cc4,	// (0x0006e693) main_viewer_pane_g3_ParamLimits

0x2cc4,	// (0x0006e693) main_viewer_pane_g3

0x2cd3,	// (0x0006e6a2) main_viewer_pane_g4_ParamLimits

0x2cd3,	// (0x0006e6a2) main_viewer_pane_g4

0x992d,	// (0x000752fc) main_viewer_pane_g5_ParamLimits

0x992d,	// (0x000752fc) main_viewer_pane_g5

0x992d,	// (0x000752fc) main_viewer_pane_g7_ParamLimits

0x992d,	// (0x000752fc) main_viewer_pane_g7

0xb001,	// (0x000769d0) main_viewer_pane_g8_ParamLimits

0xb001,	// (0x000769d0) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0007ae6d) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0007ae6d) main_viewer_pane_g

0xb6e2,	// (0x000770b1) viewer_content_pane_ParamLimits

0xb6e2,	// (0x000770b1) viewer_content_pane

0x2d0f,	// (0x0006e6de) main_postcard_pane_g1_ParamLimits

0x2d0f,	// (0x0006e6de) main_postcard_pane_g1

0x2d25,	// (0x0006e6f4) main_postcard_pane_g2_ParamLimits

0x2d25,	// (0x0006e6f4) main_postcard_pane_g2

0x2d3b,	// (0x0006e70a) main_postcard_pane_g3_ParamLimits

0x2d3b,	// (0x0006e70a) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0007ae7e) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0007ae7e) main_postcard_pane_g

0x2d52,	// (0x0006e721) main_postcard_pane_g4

0xc9f2,	// (0x000783c1) smil_status_volume_pane_g2

0x2d95,	// (0x0006e764) postcard_pane_ParamLimits

0x2d95,	// (0x0006e764) postcard_pane

0xb6f0,	// (0x000770bf) postcard_pane_g1_ParamLimits

0xb6f0,	// (0x000770bf) postcard_pane_g1

0x2dd7,	// (0x0006e7a6) postcard_pane_g2_ParamLimits

0x2dd7,	// (0x0006e7a6) postcard_pane_g2

0x2de3,	// (0x0006e7b2) postcard_pane_g3_ParamLimits

0x2de3,	// (0x0006e7b2) postcard_pane_g3

0xb6fe,	// (0x000770cd) postcard_pane_g4_ParamLimits

0xb6fe,	// (0x000770cd) postcard_pane_g4

0x2def,	// (0x0006e7be) postcard_pane_g5_ParamLimits

0x2def,	// (0x0006e7be) postcard_pane_g5

0x2e04,	// (0x0006e7d3) postcard_pane_g6_ParamLimits

0x2e04,	// (0x0006e7d3) postcard_pane_g6

0xb6f0,	// (0x000770bf) postcard_pane_g7_ParamLimits

0xb6f0,	// (0x000770bf) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0007ae8b) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0007ae8b) postcard_pane_g

0x2e18,	// (0x0006e7e7) main_mp2_pane_g1_ParamLimits

0x2e18,	// (0x0006e7e7) main_mp2_pane_g1

0x2e24,	// (0x0006e7f3) main_mp2_pane_g2_ParamLimits

0x2e24,	// (0x0006e7f3) main_mp2_pane_g2

0x2e30,	// (0x0006e7ff) main_mp2_pane_g3_ParamLimits

0x2e30,	// (0x0006e7ff) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0007ae9a) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0007ae9a) main_mp2_pane_g

0x2e3c,	// (0x0006e80b) main_mp2_pane_t1_ParamLimits

0x2e3c,	// (0x0006e80b) main_mp2_pane_t1

0x2e51,	// (0x0006e820) main_mp2_pane_t2_ParamLimits

0x2e51,	// (0x0006e820) main_mp2_pane_t2

0x2e63,	// (0x0006e832) main_mp2_pane_t3_ParamLimits

0x2e63,	// (0x0006e832) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0007aea1) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0007aea1) main_mp2_pane_t

0xb70c,	// (0x000770db) pec_content_pane_ParamLimits

0xb70c,	// (0x000770db) pec_content_pane

0xac90,	// (0x0007665f) scroll_pane_cp015

0xb71e,	// (0x000770ed) pec_attribute_pane_ParamLimits

0xb71e,	// (0x000770ed) pec_attribute_pane

0x2e75,	// (0x0006e844) pec_content_pane_g1_ParamLimits

0x2e75,	// (0x0006e844) pec_content_pane_g1

0xb72e,	// (0x000770fd) pec_content_pane_t1_ParamLimits

0xb72e,	// (0x000770fd) pec_content_pane_t1

0xb740,	// (0x0007710f) pec_content_pane_t2_ParamLimits

0xb740,	// (0x0007710f) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0007aea8) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0007aea8) pec_content_pane_t

0x2e81,	// (0x0006e850) list_single_graphic_pane_cp01_ParamLimits

0x2e81,	// (0x0006e850) list_single_graphic_pane_cp01

0xa36d,	// (0x00075d3c) bg_popup_sub_pane_cp04

0xb752,	// (0x00077121) popup_mup_playback_window_g1

0xb75e,	// (0x0007712d) popup_mup_playback_window_t1

0xb773,	// (0x00077142) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0007aead) popup_mup_playback_window_t

0xb7aa,	// (0x00077179) main_image_pane_g1_ParamLimits

0xb7aa,	// (0x00077179) main_image_pane_g1

0xb7ed,	// (0x000771bc) scroll_pane_cp018_ParamLimits

0xb7ed,	// (0x000771bc) scroll_pane_cp018

0xb805,	// (0x000771d4) scroll_pane_cp016_ParamLimits

0xb805,	// (0x000771d4) scroll_pane_cp016

0x2f4e,	// (0x0006e91d) smil2_image_pane_ParamLimits

0x2f4e,	// (0x0006e91d) smil2_image_pane

0x2f7e,	// (0x0006e94d) smil2_root_pane_ParamLimits

0x2f7e,	// (0x0006e94d) smil2_root_pane

0x2fb6,	// (0x0006e985) smil2_text_pane_ParamLimits

0x2fb6,	// (0x0006e985) smil2_text_pane

0xa112,	// (0x00075ae1) bg_list_pane_cp06

0xb841,	// (0x00077210) grid_radio_pane

0xa112,	// (0x00075ae1) bg_popup_window_pane_cp06

0xb849,	// (0x00077218) main_fmradio_pane_t1

0xb1d9,	// (0x00076ba8) heading_pane_cp04

0xb857,	// (0x00077226) main_fmradio_pane_t2

0xc81c,	// (0x000781eb) popup_cale_lunar_info_window_g1

0xb865,	// (0x00077234) main_fmradio_pane_t3

0xc824,	// (0x000781f3) popup_cale_lunar_info_window_g2

0xb873,	// (0x00077242) main_fmradio_pane_t4

0x0001,

0xb881,	// (0x00077250) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0007af88) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0007aec2) main_fmradio_pane_t

0xb88f,	// (0x0007725e) wait_bar_pane_cp03

0xb897,	// (0x00077266) cell_fmradio_pane_ParamLimits

0xb897,	// (0x00077266) cell_fmradio_pane

0xb6f0,	// (0x000770bf) cell_fmradio_pane_g1_ParamLimits

0xb6f0,	// (0x000770bf) cell_fmradio_pane_g1

0xa112,	// (0x00075ae1) grid_highlight_pane_cp011

0xb8aa,	// (0x00077279) poc_content_pane_ParamLimits

0xb8aa,	// (0x00077279) poc_content_pane

0xb8bc,	// (0x0007728b) scroll_pane_cp019

0x3036,	// (0x0006ea05) popup_call_poc_act_window_ParamLimits

0x3036,	// (0x0006ea05) popup_call_poc_act_window

0x305a,	// (0x0006ea29) popup_call_poc_inact_window_ParamLimits

0x305a,	// (0x0006ea29) popup_call_poc_inact_window

0xf590,	// (0x0007af5f) bg_popup_call_poc_act_pane_g

0xc794,	// (0x00078163) bg_popup_call_poc_inact_pane_g1

0xc79c,	// (0x0007816b) bg_popup_call_poc_inact_pane_g2

0xb8c4,	// (0x00077293) popup_call_poc_act_window_g2

0xc7a4,	// (0x00078173) bg_popup_call_poc_inact_pane_g3

0xc7ac,	// (0x0007817b) bg_popup_call_poc_inact_pane_g4

0xc7b4,	// (0x00078183) bg_popup_call_poc_inact_pane_g5

0xb8cc,	// (0x0007729b) popup_call_poc_act_window_t1_ParamLimits

0xb8cc,	// (0x0007729b) popup_call_poc_act_window_t1

0xb8f4,	// (0x000772c3) popup_call_poc_act_window_t2_ParamLimits

0xb8f4,	// (0x000772c3) popup_call_poc_act_window_t2

0xb91c,	// (0x000772eb) popup_call_poc_act_window_t3_ParamLimits

0xb91c,	// (0x000772eb) popup_call_poc_act_window_t3

0xb944,	// (0x00077313) popup_call_poc_act_window_t4_ParamLimits

0xb944,	// (0x00077313) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0007aecd) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0007aecd) popup_call_poc_act_window_t

0xc7bc,	// (0x0007818b) bg_popup_call_poc_inact_pane_g6

0xc7c4,	// (0x00078193) bg_popup_call_poc_inact_pane_g7

0xc7cc,	// (0x0007819b) bg_popup_call_poc_inact_pane_g8

0xb956,	// (0x00077325) popup_call_poc_inact_window_g2

0xc7d4,	// (0x000781a3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0007af4c) bg_popup_call_poc_inact_pane_g

0xb95e,	// (0x0007732d) popup_call_poc_inact_window_t1_ParamLimits

0xb95e,	// (0x0007732d) popup_call_poc_inact_window_t1

0xb973,	// (0x00077342) popup_call_poc_inact_window_t2_ParamLimits

0xb973,	// (0x00077342) popup_call_poc_inact_window_t2

0xb988,	// (0x00077357) popup_call_poc_inact_window_t3_ParamLimits

0xb988,	// (0x00077357) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0007aed6) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0007aed6) popup_call_poc_inact_window_t

0xc959,	// (0x00078328) context_pane_ParamLimits

0x389b,	// (0x0006f26a) signal_pane_ParamLimits

0xaae7,	// (0x000764b6) main_call2_pane

0x9978,	// (0x00075347) popup_phob_thumbnail2_window_ParamLimits

0x9978,	// (0x00075347) popup_phob_thumbnail2_window

0x9915,	// (0x000752e4) aid_hotspot_pointer_arrow_pane

0x991d,	// (0x000752ec) aid_hotspot_pointer_hand_pane

0x33a3,	// (0x0006ed72) phob_pre_status_pane_g5

0x0f38,	// (0x0006c907) cams_zoom_pane_ParamLimits

0x0f47,	// (0x0006c916) image_vga_pane_ParamLimits

0x0f61,	// (0x0006c930) main_camera_pane_g1_ParamLimits

0x0f73,	// (0x0006c942) main_camera_pane_g2_ParamLimits

0x0f83,	// (0x0006c952) main_camera_pane_g3_ParamLimits

0x0f93,	// (0x0006c962) main_camera_pane_g4_ParamLimits

0x0fa3,	// (0x0006c972) main_camera_pane_g5_ParamLimits

0x0fb3,	// (0x0006c982) main_camera_pane_g6_ParamLimits

0x0fc5,	// (0x0006c994) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0007abd5) main_camera_pane_g_ParamLimits

0x0fd5,	// (0x0006c9a4) main_camera_pane_t1_ParamLimits

0x0feb,	// (0x0006c9ba) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0007abe6) main_camera_pane_t_ParamLimits

0xa36d,	// (0x00075d3c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa36d,	// (0x00075d3c) bg_popup_preview_window_pane_cp01

0xb99d,	// (0x0007736c) popup_phob_thumbnail2_window_g1_ParamLimits

0xb99d,	// (0x0007736c) popup_phob_thumbnail2_window_g1

0xa112,	// (0x00075ae1) call2_cli_visual_pane

0x308e,	// (0x0006ea5d) popup_call2_audio_conf_window_ParamLimits

0x308e,	// (0x0006ea5d) popup_call2_audio_conf_window

0x30ae,	// (0x0006ea7d) popup_call2_audio_first_window_ParamLimits

0x30ae,	// (0x0006ea7d) popup_call2_audio_first_window

0x3144,	// (0x0006eb13) popup_call2_audio_in_window_ParamLimits

0x3144,	// (0x0006eb13) popup_call2_audio_in_window

0x318c,	// (0x0006eb5b) popup_call2_audio_out_window_ParamLimits

0x318c,	// (0x0006eb5b) popup_call2_audio_out_window

0x31f6,	// (0x0006ebc5) popup_call2_audio_second_window_ParamLimits

0x31f6,	// (0x0006ebc5) popup_call2_audio_second_window

0x325c,	// (0x0006ec2b) popup_call2_audio_wait_window_ParamLimits

0x325c,	// (0x0006ec2b) popup_call2_audio_wait_window

0xa112,	// (0x00075ae1) bg_popup_call2_act_pane_cp03

0xa34f,	// (0x00075d1e) list_conf_pane_cp

0xb9a9,	// (0x00077378) popup_call2_audio_conf_window_t1

0xb236,	// (0x00076c05) list_single_graphic_popup_conf2_pane_ParamLimits

0xb236,	// (0x00076c05) list_single_graphic_popup_conf2_pane

0xb249,	// (0x00076c18) list_highlight_pane_cp04

0xb9b7,	// (0x00077386) list_single_graphic_popup_conf2_pane_g1

0xb25a,	// (0x00076c29) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0007aedd) list_single_graphic_popup_conf2_pane_g

0xb9c1,	// (0x00077390) list_single_graphic_popup_conf2_pane_t1

0xb9cf,	// (0x0007739e) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9cf,	// (0x0007739e) bg_popup_call2_act_pane_cp01

0xba59,	// (0x00077428) call_type_pane_cp05_ParamLimits

0xba59,	// (0x00077428) call_type_pane_cp05

0xbaad,	// (0x0007747c) popup_call2_audio_second_window_g1_ParamLimits

0xbaad,	// (0x0007747c) popup_call2_audio_second_window_g1

0xbb01,	// (0x000774d0) popup_call2_audio_second_window_g2_ParamLimits

0xbb01,	// (0x000774d0) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0007aee2) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0007aee2) popup_call2_audio_second_window_g

0xbb66,	// (0x00077535) popup_call2_audio_second_window_t1_ParamLimits

0xbb66,	// (0x00077535) popup_call2_audio_second_window_t1

0xbc21,	// (0x000775f0) popup_call2_audio_second_window_t2_ParamLimits

0xbc21,	// (0x000775f0) popup_call2_audio_second_window_t2

0xbc74,	// (0x00077643) popup_call2_audio_second_window_t3_ParamLimits

0xbc74,	// (0x00077643) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0007aee9) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0007aee9) popup_call2_audio_second_window_t

0xa112,	// (0x00075ae1) bg_popup_call2_in_pane_cp02

0xa11c,	// (0x00075aeb) call_type_pane_cp04

0xa124,	// (0x00075af3) popup_call2_audio_wait_window_g1

0xa12c,	// (0x00075afb) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007aac4) popup_call2_audio_wait_window_g

0xa134,	// (0x00075b03) popup_call2_audio_wait_window_t3

0xbd67,	// (0x00077736) bg_popup_call2_act_pane_ParamLimits

0xbd67,	// (0x00077736) bg_popup_call2_act_pane

0xbe27,	// (0x000777f6) call_type_pane_cp03_ParamLimits

0xbe27,	// (0x000777f6) call_type_pane_cp03

0xbe8b,	// (0x0007785a) popup_call2_audio_first_window_g1_ParamLimits

0xbe8b,	// (0x0007785a) popup_call2_audio_first_window_g1

0xbefb,	// (0x000778ca) popup_call2_audio_first_window_g2_ParamLimits

0xbefb,	// (0x000778ca) popup_call2_audio_first_window_g2

0xb604,	// (0x00076fd3) popup_call2_audio_first_window_g3_ParamLimits

0xb604,	// (0x00076fd3) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0007aef2) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0007aef2) popup_call2_audio_first_window_g

0xbfd9,	// (0x000779a8) popup_call2_audio_first_window_t1_ParamLimits

0xbfd9,	// (0x000779a8) popup_call2_audio_first_window_t1

0xc0dc,	// (0x00077aab) popup_call2_audio_first_window_t4_ParamLimits

0xc0dc,	// (0x00077aab) popup_call2_audio_first_window_t4

0xc1bf,	// (0x00077b8e) popup_call2_audio_first_window_t5_ParamLimits

0xc1bf,	// (0x00077b8e) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0007aefd) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0007aefd) popup_call2_audio_first_window_t

0xa365,	// (0x00075d34) bg_popup_call2_act_pane_g1

0xc82c,	// (0x000781fb) popup_cale_lunar_info_window_t1

0xc83a,	// (0x00078209) popup_cale_lunar_info_window_t2

0xc848,	// (0x00078217) popup_cale_lunar_info_window_t3

0xa112,	// (0x00075ae1) bg_popup_call2_bubble_pane

0xc2c0,	// (0x00077c8f) bg_popup_call2_in_pane_cp01_ParamLimits

0xc2c0,	// (0x00077c8f) bg_popup_call2_in_pane_cp01

0x9651,	// (0x00075020) call_type_pane_cp02

0xc308,	// (0x00077cd7) popup_call2_audio_out_window_g1_ParamLimits

0xc308,	// (0x00077cd7) popup_call2_audio_out_window_g1

0xc334,	// (0x00077d03) popup_call2_audio_out_window_g2_ParamLimits

0xc334,	// (0x00077d03) popup_call2_audio_out_window_g2

0xc35c,	// (0x00077d2b) popup_call2_audio_out_window_g3_ParamLimits

0xc35c,	// (0x00077d2b) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0007af06) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0007af06) popup_call2_audio_out_window_g

0xc397,	// (0x00077d66) popup_call2_audio_out_window_t1_ParamLimits

0xc397,	// (0x00077d66) popup_call2_audio_out_window_t1

0xc3f6,	// (0x00077dc5) popup_call2_audio_out_window_t2_ParamLimits

0xc3f6,	// (0x00077dc5) popup_call2_audio_out_window_t2

0xc44a,	// (0x00077e19) popup_call2_audio_out_window_t3_ParamLimits

0xc44a,	// (0x00077e19) popup_call2_audio_out_window_t3

0xc460,	// (0x00077e2f) popup_call2_audio_out_window_t4_ParamLimits

0xc460,	// (0x00077e2f) popup_call2_audio_out_window_t4

0xc476,	// (0x00077e45) popup_call2_audio_out_window_t5_ParamLimits

0xc476,	// (0x00077e45) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0007af0f) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0007af0f) popup_call2_audio_out_window_t

0xc4da,	// (0x00077ea9) bg_popup_call2_in_pane_ParamLimits

0xc4da,	// (0x00077ea9) bg_popup_call2_in_pane

0xc536,	// (0x00077f05) popup_call2_audio_in_window_g1_ParamLimits

0xc536,	// (0x00077f05) popup_call2_audio_in_window_g1

0xc56e,	// (0x00077f3d) popup_call2_audio_in_window_g2_ParamLimits

0xc56e,	// (0x00077f3d) popup_call2_audio_in_window_g2

0xc5a6,	// (0x00077f75) popup_call2_audio_in_window_g3_ParamLimits

0xc5a6,	// (0x00077f75) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0007af1c) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0007af1c) popup_call2_audio_in_window_g

0xc5fe,	// (0x00077fcd) popup_call2_audio_in_window_t1_ParamLimits

0xc5fe,	// (0x00077fcd) popup_call2_audio_in_window_t1

0xc67e,	// (0x0007804d) popup_call2_audio_in_window_t2_ParamLimits

0xc67e,	// (0x0007804d) popup_call2_audio_in_window_t2

0xc6fe,	// (0x000780cd) popup_call2_audio_in_window_t3_ParamLimits

0xc6fe,	// (0x000780cd) popup_call2_audio_in_window_t3

0xc718,	// (0x000780e7) popup_call2_audio_in_window_t4_ParamLimits

0xc718,	// (0x000780e7) popup_call2_audio_in_window_t4

0xc72a,	// (0x000780f9) popup_call2_audio_in_window_t5_ParamLimits

0xc72a,	// (0x000780f9) popup_call2_audio_in_window_t5

0xc73f,	// (0x0007810e) popup_call2_audio_in_window_t6_ParamLimits

0xc73f,	// (0x0007810e) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0007af25) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0007af25) popup_call2_audio_in_window_t

0xa365,	// (0x00075d34) bg_popup_call2_in_pane_g1

0xc856,	// (0x00078225) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0007af8d) popup_cale_lunar_info_window_t

0xa36d,	// (0x00075d3c) bg_popup_call2_rect_pane_ParamLimits

0xa36d,	// (0x00075d3c) bg_popup_call2_rect_pane

0xa112,	// (0x00075ae1) call2_cli_visual_graphic_pane

0xa112,	// (0x00075ae1) call2_cli_visual_text_pane

0x999f,	// (0x0007536e) smil_status_volume_pane_g3

0x0002,

0xa487,	// (0x00075e56) call2_cli_visual_graphic_pane_g1

0xa487,	// (0x00075e56) call2_cli_visual_graphic_pane_g2

0xa487,	// (0x00075e56) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0007af32) call2_cli_visual_graphic_pane_g

0xc754,	// (0x00078123) bg_popup_call2_rect_pane_g1

0xaa03,	// (0x000763d2) bg_popup_call2_rect_pane_g2

0xc75c,	// (0x0007812b) bg_popup_call2_rect_pane_g3

0xc764,	// (0x00078133) bg_popup_call2_rect_pane_g4

0xc76c,	// (0x0007813b) bg_popup_call2_rect_pane_g5

0xc774,	// (0x00078143) bg_popup_call2_rect_pane_g6

0xc77c,	// (0x0007814b) bg_popup_call2_rect_pane_g7

0xc784,	// (0x00078153) bg_popup_call2_rect_pane_g8

0xc78c,	// (0x0007815b) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0007af39) bg_popup_call2_rect_pane_g

0xc794,	// (0x00078163) bg_popup_call2_bubble_pane_g1

0xc79c,	// (0x0007816b) bg_popup_call2_bubble_pane_g2

0xc7a4,	// (0x00078173) bg_popup_call2_bubble_pane_g3

0xc7ac,	// (0x0007817b) bg_popup_call2_bubble_pane_g4

0xc7b4,	// (0x00078183) bg_popup_call2_bubble_pane_g5

0xc7bc,	// (0x0007818b) bg_popup_call2_bubble_pane_g6

0xc7c4,	// (0x00078193) bg_popup_call2_bubble_pane_g7

0xc7cc,	// (0x0007819b) bg_popup_call2_bubble_pane_g8

0xc7d4,	// (0x000781a3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0007af4c) bg_popup_call2_bubble_pane_g

0x097d,	// (0x0006c34c) aid_cale_week_size_cell_pane

0x1001,	// (0x0006c9d0) aid_cams_cif_uncrop_pane_ParamLimits

0x1001,	// (0x0006c9d0) aid_cams_cif_uncrop_pane

0x11b1,	// (0x0006cb80) aid_cams_size_cell_ParamLimits

0x11b1,	// (0x0006cb80) aid_cams_size_cell

0x11c5,	// (0x0006cb94) grid_cams_pane_ParamLimits

0x11df,	// (0x0006cbae) linegrid_cams_pane_ParamLimits

0x13dc,	// (0x0006cdab) call_video_pane_t1

0x13fa,	// (0x0006cdc9) call_video_pane_t2

0x0001,

0xf26a,	// (0x0007ac39) call_video_pane_t

0x1828,	// (0x0006d1f7) aid_cale_month_size_cell_pane_ParamLimits

0x1828,	// (0x0006d1f7) aid_cale_month_size_cell_pane

0xf607,	// (0x0007afd6) smil_status_volume_pane_g

0x99ac,	// (0x0007537b) volume_smil_pane_ParamLimits

0x94e4,	// (0x00074eb3) aid_popup2_width_pane

0x08d7,	// (0x0006c2a6) cell_qdial_pane_g4_ParamLimits

0x08d7,	// (0x0006c2a6) cell_qdial_pane_g4

0x26bd,	// (0x0006e08c) aid_blid_cardinal_pane_ParamLimits

0x26c9,	// (0x0006e098) aid_blid_destination_pane_ParamLimits

0x26c9,	// (0x0006e098) aid_blid_destination_pane

0xa36d,	// (0x00075d3c) bg_popup_call_poc_act_pane_ParamLimits

0xa36d,	// (0x00075d3c) bg_popup_call_poc_act_pane

0xa36d,	// (0x00075d3c) bg_popup_call_poc_inact_pane_ParamLimits

0xa36d,	// (0x00075d3c) bg_popup_call_poc_inact_pane

0xc7dc,	// (0x000781ab) bg_popup_call_poc_act_pane_g1

0xc7e4,	// (0x000781b3) bg_popup_call_poc_act_pane_g2

0xc7ec,	// (0x000781bb) bg_popup_call_poc_act_pane_g3

0xc7ac,	// (0x0007817b) bg_popup_call_poc_act_pane_g4

0xc7b4,	// (0x00078183) bg_popup_call_poc_act_pane_g5

0xc7f4,	// (0x000781c3) bg_popup_call_poc_act_pane_g6

0xc7c4,	// (0x00078193) bg_popup_call_poc_act_pane_g7

0xc7fc,	// (0x000781cb) bg_popup_call_poc_act_pane_g8

0xa112,	// (0x00075ae1) main_usb_pane

0x9953,	// (0x00075322) popup_cale_lunar_info_window

0x16d4,	// (0x0006d0a3) im_reading_pane_t1_ParamLimits

0xabe8,	// (0x000765b7) list_im_pane_ParamLimits

0xabf9,	// (0x000765c8) scroll_pane_cp07_ParamLimits

0xa112,	// (0x00075ae1) grid_highlight_pane_cp012

0xa36d,	// (0x00075d3c) mup_scale_pane_ParamLimits

0xb6f0,	// (0x000770bf) main_usb_pane_g1_ParamLimits

0xb6f0,	// (0x000770bf) main_usb_pane_g1

0x32b8,	// (0x0006ec87) main_usb_pane_g2_ParamLimits

0x32b8,	// (0x0006ec87) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0007af76) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0007af76) main_usb_pane_g

0x32ce,	// (0x0006ec9d) main_usb_pane_t1_ParamLimits

0x32ce,	// (0x0006ec9d) main_usb_pane_t1

0x32e0,	// (0x0006ecaf) main_usb_pane_t2_ParamLimits

0x32e0,	// (0x0006ecaf) main_usb_pane_t2

0x32f2,	// (0x0006ecc1) main_usb_pane_t3_ParamLimits

0x32f2,	// (0x0006ecc1) main_usb_pane_t3

0x3304,	// (0x0006ecd3) main_usb_pane_t4_ParamLimits

0x3304,	// (0x0006ecd3) main_usb_pane_t4

0x3316,	// (0x0006ece5) main_usb_pane_t5_ParamLimits

0x3316,	// (0x0006ece5) main_usb_pane_t5

0x3328,	// (0x0006ecf7) main_usb_pane_t6_ParamLimits

0x3328,	// (0x0006ecf7) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0007af7b) main_usb_pane_t_ParamLimits

0x266c,	// (0x0006e03b) aid_text_placing

0x2675,	// (0x0006e044) main_location2_pane_t1_ParamLimits

0x2687,	// (0x0006e056) main_location2_pane_t2_ParamLimits

0x2699,	// (0x0006e068) main_location2_pane_t3_ParamLimits

0x26ab,	// (0x0006e07a) main_location2_pane_t4_ParamLimits

0x26ab,	// (0x0006e07a) main_location2_pane_t4

0xf3cb,	// (0x0007ad9a) main_location2_pane_t_ParamLimits

0xa3a9,	// (0x00075d78) find_pinb_pane_g2_ParamLimits

0xa3a9,	// (0x00075d78) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0007aaea) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0007aaea) find_pinb_pane_g

0xa3b5,	// (0x00075d84) find_pinb_pane_t1_ParamLimits

0xa3c7,	// (0x00075d96) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0007aaef) find_pinb_pane_t_ParamLimits

0xa112,	// (0x00075ae1) main_call3_pane

0x1d13,	// (0x0006d6e2) cale_month_day_heading_pane_t1_ParamLimits

0x1d99,	// (0x0006d768) cale_month_day_heading_pane_t2_ParamLimits

0x1e12,	// (0x0006d7e1) cale_month_day_heading_pane_t3_ParamLimits

0x1e8b,	// (0x0006d85a) cale_month_day_heading_pane_t4_ParamLimits

0x1f0c,	// (0x0006d8db) cale_month_day_heading_pane_t5_ParamLimits

0x1f95,	// (0x0006d964) cale_month_day_heading_pane_t6_ParamLimits

0x201e,	// (0x0006d9ed) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0007ac71) cale_month_day_heading_pane_t_ParamLimits

0xae43,	// (0x00076812) smil_status_volume_pane

0x2db3,	// (0x0006e782) postcard_address_pane_ParamLimits

0x2db3,	// (0x0006e782) postcard_address_pane

0x2dc5,	// (0x0006e794) postcard_message_pane_ParamLimits

0x2dc5,	// (0x0006e794) postcard_message_pane

0x3296,	// (0x0006ec65) call2_cli_visual_pane_t1_ParamLimits

0x3296,	// (0x0006ec65) call2_cli_visual_pane_t1

0x3ac8,	// (0x0006f497) postcard_message_pane_t1_ParamLimits

0x3ac8,	// (0x0006f497) postcard_message_pane_t1

0x3ab1,	// (0x0006f480) postcard_address_pane_t1_ParamLimits

0x3ab1,	// (0x0006f480) postcard_address_pane_t1

0x3a9d,	// (0x0006f46c) popup_call3_audio_in_window_ParamLimits

0x3a9d,	// (0x0006f46c) popup_call3_audio_in_window

0x3928,	// (0x0006f2f7) bg_popup_call3_in_pane_ParamLimits

0x3928,	// (0x0006f2f7) bg_popup_call3_in_pane

0x399e,	// (0x0006f36d) popup_call3_audio_in_window_g1_ParamLimits

0x399e,	// (0x0006f36d) popup_call3_audio_in_window_g1

0x39be,	// (0x0006f38d) popup_call3_audio_in_window_g2_ParamLimits

0x39be,	// (0x0006f38d) popup_call3_audio_in_window_g2

0x39de,	// (0x0006f3ad) popup_call3_audio_in_window_g3_ParamLimits

0x39de,	// (0x0006f3ad) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0007afdd) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0007afdd) popup_call3_audio_in_window_g

0x3a0f,	// (0x0006f3de) popup_call3_audio_in_window_t1_ParamLimits

0x3a0f,	// (0x0006f3de) popup_call3_audio_in_window_t1

0x3a4d,	// (0x0006f41c) popup_call3_audio_in_window_t2_ParamLimits

0x3a4d,	// (0x0006f41c) popup_call3_audio_in_window_t2

0x3a8b,	// (0x0006f45a) popup_call3_audio_in_window_t3_ParamLimits

0x3a8b,	// (0x0006f45a) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0007afe6) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0007afe6) popup_call3_audio_in_window_t

0xaae7,	// (0x000764b6) bg_popup_call3_rect_pane

0xc754,	// (0x00078123) bg_popup_call3_rect_pane_g1

0xaa03,	// (0x000763d2) bg_popup_call3_rect_pane_g2

0xc75c,	// (0x0007812b) bg_popup_call3_rect_pane_g3

0xc764,	// (0x00078133) bg_popup_call3_rect_pane_g4

0xc76c,	// (0x0007813b) bg_popup_call3_rect_pane_g5

0xc774,	// (0x00078143) bg_popup_call3_rect_pane_g6

0xc77c,	// (0x0007814b) bg_popup_call3_rect_pane_g7

0x29ad,	// (0x0006e37c) mup_visualizer_osc_pane

0xb612,	// (0x00076fe1) mup_visualizer_spec_pane

0x3958,	// (0x0006f327) call3_video_qcif_pane_ParamLimits

0x3958,	// (0x0006f327) call3_video_qcif_pane

0x396b,	// (0x0006f33a) call3_video_qcif_uncrop_pane_ParamLimits

0x396b,	// (0x0006f33a) call3_video_qcif_uncrop_pane

0x3979,	// (0x0006f348) call3_video_subqcif_pane_ParamLimits

0x3979,	// (0x0006f348) call3_video_subqcif_pane

0x398d,	// (0x0006f35c) call3_video_subqcif_uncrop_pane_ParamLimits

0x398d,	// (0x0006f35c) call3_video_subqcif_uncrop_pane

0x39fe,	// (0x0006f3cd) popup_call3_audio_in_window_g4_ParamLimits

0x39fe,	// (0x0006f3cd) popup_call3_audio_in_window_g4

0x3917,	// (0x0006f2e6) mup_spec_half_pane

0x3920,	// (0x0006f2ef) mup_spec_half_pane_cp

0xc9b9,	// (0x00078388) mup_osc_middle_pane

0xc9c2,	// (0x00078391) mup_visualizer_osc_pane_g1

0x38f7,	// (0x0006f2c6) mup_spec_bar_pane_ParamLimits

0x38f7,	// (0x0006f2c6) mup_spec_bar_pane

0xc9a6,	// (0x00078375) mup_spec_bar_pane_g1

0xc9b0,	// (0x0007837f) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0007afd1) mup_spec_bar_pane_g

0x097d,	// (0x0006c34c) aid_cale_week_size_cell_pane_ParamLimits

0x0997,	// (0x0006c366) bg_cale_heading_pane_ParamLimits

0xaa40,	// (0x0007640f) bg_cale_pane_cp01_ParamLimits

0x09af,	// (0x0006c37e) cale_week_corner_pane_ParamLimits

0x09ce,	// (0x0006c39d) cale_week_day_heading_pane_ParamLimits

0x09eb,	// (0x0006c3ba) cale_week_scroll_pane_g1_ParamLimits

0x09fe,	// (0x0006c3cd) cale_week_scroll_pane_g2_ParamLimits

0x0a16,	// (0x0006c3e5) cale_week_scroll_pane_g3_ParamLimits

0x0a2e,	// (0x0006c3fd) cale_week_scroll_pane_g4_ParamLimits

0x0a46,	// (0x0006c415) cale_week_scroll_pane_g5_ParamLimits

0x0a66,	// (0x0006c435) cale_week_scroll_pane_g6_ParamLimits

0x0a86,	// (0x0006c455) cale_week_scroll_pane_g7_ParamLimits

0x0aa6,	// (0x0006c475) cale_week_scroll_pane_g8_ParamLimits

0x0aca,	// (0x0006c499) cale_week_scroll_pane_g9_ParamLimits

0x0ae2,	// (0x0006c4b1) cale_week_scroll_pane_g10_ParamLimits

0x0afa,	// (0x0006c4c9) cale_week_scroll_pane_g11_ParamLimits

0x0b12,	// (0x0006c4e1) cale_week_scroll_pane_g12_ParamLimits

0x0b2a,	// (0x0006c4f9) cale_week_scroll_pane_g13_ParamLimits

0x0b2a,	// (0x0006c4f9) cale_week_scroll_pane_g14_ParamLimits

0x0b2a,	// (0x0006c4f9) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0007ab7b) cale_week_scroll_pane_g_ParamLimits

0x0b66,	// (0x0006c535) cale_week_time_pane_ParamLimits

0x0b8a,	// (0x0006c559) grid_cale_week_pane_ParamLimits

0xaa5d,	// (0x0007642c) listscroll_cale_week_pane_t1

0xaa6f,	// (0x0007643e) scroll_pane_cp08_ParamLimits

0x1888,	// (0x0006d257) cale_month_corner_pane_ParamLimits

0xae19,	// (0x000767e8) cale_month_pane_t1

0x1ca6,	// (0x0006d675) cale_month_week_pane_ParamLimits

0x24c8,	// (0x0006de97) popup_call_status_window_g1_ParamLimits

0x24dc,	// (0x0006deab) popup_call_status_window_g2_ParamLimits

0x24f0,	// (0x0006debf) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0007ad21) popup_call_status_window_g_ParamLimits

0xb1c9,	// (0x00076b98) aid_call2_pane

0x2c1d,	// (0x0006e5ec) msg_header_pane_g1

0x2db3,	// (0x0006e782) postcard_address2_pane_ParamLimits

0x2db3,	// (0x0006e782) postcard_address2_pane

0x2dc5,	// (0x0006e794) postcard_message2_pane_ParamLimits

0x2dc5,	// (0x0006e794) postcard_message2_pane

0x38a9,	// (0x0006f278) message2_row_pane_ParamLimits

0x38a9,	// (0x0006f278) message2_row_pane

0x38c5,	// (0x0006f294) address2_row_pane_ParamLimits

0x38c5,	// (0x0006f294) address2_row_pane

0xc974,	// (0x00078343) postcard_message2_row_pane_g1

0xc97c,	// (0x0007834b) postcard_message2_row_pane_t1

0xc974,	// (0x00078343) address2_row_pane_g1

0xc97c,	// (0x0007834b) address2_row_pane_t1

0x0eba,	// (0x0006c889) aid_size_cell_vorec

0xa112,	// (0x00075ae1) main_rss_pane

0x38d8,	// (0x0006f2a7) rss_list_single_pane_ParamLimits

0x38d8,	// (0x0006f2a7) rss_list_single_pane

0xc98a,	// (0x00078359) rss_list_single_pane_t1

0xc998,	// (0x00078367) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0007afcc) rss_list_single_pane_t

0xa112,	// (0x00075ae1) main_camera2_pane

0xa112,	// (0x00075ae1) main_video2_pane

0x3b41,	// (0x0006f510) cams_zoom_pane_cp2_ParamLimits

0x3b41,	// (0x0006f510) cams_zoom_pane_cp2

0x3b61,	// (0x0006f530) image2_vga_pane_ParamLimits

0x3b61,	// (0x0006f530) image2_vga_pane

0x3bb2,	// (0x0006f581) main_camera2_pane_g1_ParamLimits

0x3bb2,	// (0x0006f581) main_camera2_pane_g1

0x3bd2,	// (0x0006f5a1) main_camera2_pane_g2_ParamLimits

0x3bd2,	// (0x0006f5a1) main_camera2_pane_g2

0x3bf2,	// (0x0006f5c1) main_camera2_pane_g3_ParamLimits

0x3bf2,	// (0x0006f5c1) main_camera2_pane_g3

0x3c12,	// (0x0006f5e1) main_camera2_pane_g4_ParamLimits

0x3c12,	// (0x0006f5e1) main_camera2_pane_g4

0x3c32,	// (0x0006f601) main_camera2_pane_g5_ParamLimits

0x3c32,	// (0x0006f601) main_camera2_pane_g5

0x3c52,	// (0x0006f621) main_camera2_pane_g6_ParamLimits

0x3c52,	// (0x0006f621) main_camera2_pane_g6

0x3c72,	// (0x0006f641) main_camera2_pane_g7_ParamLimits

0x3c72,	// (0x0006f641) main_camera2_pane_g7

0x3c92,	// (0x0006f661) main_camera2_pane_g8_ParamLimits

0x3c92,	// (0x0006f661) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0007afed) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0007afed) main_camera2_pane_g

0x3cd2,	// (0x0006f6a1) main_camera2_pane_t1_ParamLimits

0x3cd2,	// (0x0006f6a1) main_camera2_pane_t1

0x3d07,	// (0x0006f6d6) main_camera2_pane_t2_ParamLimits

0x3d07,	// (0x0006f6d6) main_camera2_pane_t2

0x3d2d,	// (0x0006f6fc) main_camera2_pane_t3_ParamLimits

0x3d2d,	// (0x0006f6fc) main_camera2_pane_t3

0x3d8b,	// (0x0006f75a) main_camera2_pane_t4_ParamLimits

0x3d8b,	// (0x0006f75a) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0007b000) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0007b000) main_camera2_pane_t

0x3e1d,	// (0x0006f7ec) cams_zoom_pane_cp4_ParamLimits

0x3e1d,	// (0x0006f7ec) cams_zoom_pane_cp4

0x3e33,	// (0x0006f802) image2_cif_pane_ParamLimits

0x3e33,	// (0x0006f802) image2_cif_pane

0x3e5e,	// (0x0006f82d) image2_subqcif_pane_ParamLimits

0x3e5e,	// (0x0006f82d) image2_subqcif_pane

0x3e78,	// (0x0006f847) main_video2_pane_g1_ParamLimits

0x3e78,	// (0x0006f847) main_video2_pane_g1

0x3e92,	// (0x0006f861) main_video2_pane_g2_ParamLimits

0x3e92,	// (0x0006f861) main_video2_pane_g2

0x3ea8,	// (0x0006f877) main_video2_pane_g3_ParamLimits

0x3ea8,	// (0x0006f877) main_video2_pane_g3

0x3ebe,	// (0x0006f88d) main_video2_pane_g4_ParamLimits

0x3ebe,	// (0x0006f88d) main_video2_pane_g4

0x3ed4,	// (0x0006f8a3) main_video2_pane_g5_ParamLimits

0x3ed4,	// (0x0006f8a3) main_video2_pane_g5

0x3eea,	// (0x0006f8b9) main_video2_pane_g6_ParamLimits

0x3eea,	// (0x0006f8b9) main_video2_pane_g6

0x0005,

0xf640,	// (0x0007b00f) main_video2_pane_g_ParamLimits

0xf640,	// (0x0007b00f) main_video2_pane_g

0x3f04,	// (0x0006f8d3) main_video2_pane_t1_ParamLimits

0x3f04,	// (0x0006f8d3) main_video2_pane_t1

0x3f28,	// (0x0006f8f7) main_video2_pane_t2_ParamLimits

0x3f28,	// (0x0006f8f7) main_video2_pane_t2

0x3f76,	// (0x0006f945) main_video2_pane_t3_ParamLimits

0x3f76,	// (0x0006f945) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0007b01c) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0007b01c) main_video2_pane_t

0x33e3,	// (0x0006edb2) call_muted_g2

0x0001,

0xf5ef,	// (0x0007afbe) call_muted_g

0xa112,	// (0x00075ae1) main_mup2_pane

0x3fba,	// (0x0006f989) main_mup2_pane_g1_ParamLimits

0x3fba,	// (0x0006f989) main_mup2_pane_g1

0x3fc6,	// (0x0006f995) main_mup2_pane_g2_ParamLimits

0x3fc6,	// (0x0006f995) main_mup2_pane_g2

0x9a1a,	// (0x000753e9) main_mup_pane_g13_cp1

0x9a22,	// (0x000753f1) mup_volume_pane_cp1

0x3fe2,	// (0x0006f9b1) main_mup2_pane_g4_ParamLimits

0x3fe2,	// (0x0006f9b1) main_mup2_pane_g4

0x3ff4,	// (0x0006f9c3) main_mup2_pane_g5_ParamLimits

0x3ff4,	// (0x0006f9c3) main_mup2_pane_g5

0x4006,	// (0x0006f9d5) main_mup2_pane_g6_ParamLimits

0x4006,	// (0x0006f9d5) main_mup2_pane_g6

0x4018,	// (0x0006f9e7) main_mup2_pane_g7_ParamLimits

0x4018,	// (0x0006f9e7) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0007b023) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0007b023) main_mup2_pane_g

0x4030,	// (0x0006f9ff) main_mup2_pane_t1_ParamLimits

0x4030,	// (0x0006f9ff) main_mup2_pane_t1

0x4046,	// (0x0006fa15) main_mup2_pane_t2_ParamLimits

0x4046,	// (0x0006fa15) main_mup2_pane_t2

0x405c,	// (0x0006fa2b) main_mup2_pane_t3_ParamLimits

0x405c,	// (0x0006fa2b) main_mup2_pane_t3

0x4072,	// (0x0006fa41) main_mup2_pane_t4_ParamLimits

0x4072,	// (0x0006fa41) main_mup2_pane_t4

0x408a,	// (0x0006fa59) main_mup2_pane_t5_ParamLimits

0x408a,	// (0x0006fa59) main_mup2_pane_t5

0x40a2,	// (0x0006fa71) main_mup2_pane_t6_ParamLimits

0x40a2,	// (0x0006fa71) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0007b032) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0007b032) main_mup2_pane_t

0x40d2,	// (0x0006faa1) mup2_visualizer_pane_ParamLimits

0x40d2,	// (0x0006faa1) mup2_visualizer_pane

0x4100,	// (0x0006facf) mup_progress_pane_cp_ParamLimits

0x4100,	// (0x0006facf) mup_progress_pane_cp

0x9a05,	// (0x000753d4) mup_volume_pane_cp_ParamLimits

0x9a05,	// (0x000753d4) mup_volume_pane_cp

0x4114,	// (0x0006fae3) mup2_visualizer_pane_g1_ParamLimits

0x4114,	// (0x0006fae3) mup2_visualizer_pane_g1

0xca05,	// (0x000783d4) mup2_visualizer_pane_g2_ParamLimits

0xca05,	// (0x000783d4) mup2_visualizer_pane_g2

0x412b,	// (0x0006fafa) mup2_visualizer_pane_g3_ParamLimits

0x412b,	// (0x0006fafa) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0007b03f) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0007b03f) mup2_visualizer_pane_g

0xb839,	// (0x00077208) aid_size_cell_fmradio

0x3595,	// (0x0006ef64) aid_height_parent_landcape

0xac77,	// (0x00076646) wml_content_pane_cp

0xac7f,	// (0x0007664e) wml_tabs_pane

0xac88,	// (0x00076657) popup_wml_miniature_window

0xac90,	// (0x0007665f) scroll_pane_cp021

0xaca4,	// (0x00076673) wml_content_pane_comp8

0xa112,	// (0x00075ae1) bg_popup_sub_pane_cp05

0xca23,	// (0x000783f2) popup_wml_miniature_window_g1

0xca2b,	// (0x000783fa) wml_miniature_view_pane

0x4137,	// (0x0006fb06) aid_size_wml_view

0x413f,	// (0x0006fb0e) wml_miniature_view_pane_g1

0x4148,	// (0x0006fb17) wml_miniature_view_pane_g2

0x4151,	// (0x0006fb20) wml_miniature_view_pane_g3

0x4159,	// (0x0006fb28) wml_miniature_view_pane_g4

0x4161,	// (0x0006fb30) wml_miniature_view_pane_g5

0x4169,	// (0x0006fb38) wml_miniature_view_pane_g6

0x4171,	// (0x0006fb40) wml_miniature_view_pane_g7

0x4179,	// (0x0006fb48) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0007b046) wml_miniature_view_pane_g

0xca33,	// (0x00078402) background_graphic_ParamLimits

0xca33,	// (0x00078402) background_graphic

0xca3f,	// (0x0007840e) wml_tabs_2_pane

0xca48,	// (0x00078417) wml_tabs_3_pane_ParamLimits

0xca48,	// (0x00078417) wml_tabs_3_pane

0xca5a,	// (0x00078429) wml_tabs_4_pane_ParamLimits

0xca5a,	// (0x00078429) wml_tabs_4_pane

0xca70,	// (0x0007843f) wml_tabs_5_pane_ParamLimits

0xca70,	// (0x0007843f) wml_tabs_5_pane

0xca8a,	// (0x00078459) wml_tabs_pane_g2_ParamLimits

0xca8a,	// (0x00078459) wml_tabs_pane_g2

0xca9e,	// (0x0007846d) wml_tabs_pane_g3_ParamLimits

0xca9e,	// (0x0007846d) wml_tabs_pane_g3

0x4181,	// (0x0006fb50) wml_tabs_2_active_pane_ParamLimits

0x4181,	// (0x0006fb50) wml_tabs_2_active_pane

0x4195,	// (0x0006fb64) wml_tabs_2_passive_pane_ParamLimits

0x4195,	// (0x0006fb64) wml_tabs_2_passive_pane

0x41a9,	// (0x0006fb78) wml_tabs_3_active_pane_cp_ParamLimits

0x41a9,	// (0x0006fb78) wml_tabs_3_active_pane_cp

0x41be,	// (0x0006fb8d) wml_tabs_3_passive_pane_ParamLimits

0x41be,	// (0x0006fb8d) wml_tabs_3_passive_pane

0x41d1,	// (0x0006fba0) wml_tabs_3_passive_pane_cp_ParamLimits

0x41d1,	// (0x0006fba0) wml_tabs_3_passive_pane_cp

0x41e8,	// (0x0006fbb7) tabs_4_active_pane

0x41f0,	// (0x0006fbbf) tabs_4_passive_pane

0x41fa,	// (0x0006fbc9) tabs_4_passive_pane_cp

0x4202,	// (0x0006fbd1) tabs_4_passive_pane_cp2

0x32b0,	// (0x0006ec7f) aid_height_text

0x2983,	// (0x0006e352) mup_volume_cont_pane_ParamLimits

0x2983,	// (0x0006e352) mup_volume_cont_pane

0x055e,	// (0x0006bf2d) aid_size_cell_pinb

0x0568,	// (0x0006bf37) aid_size_list_pinb

0x40ec,	// (0x0006fabb) mup2_volume_cont_pane_ParamLimits

0x40ec,	// (0x0006fabb) mup2_volume_cont_pane

0x99f1,	// (0x000753c0) mup2_volume_cont_pane_g1_ParamLimits

0x99f1,	// (0x000753c0) mup2_volume_cont_pane_g1

0x0221,	// (0x0006bbf0) aid_size_cell_touch_ParamLimits

0x0221,	// (0x0006bbf0) aid_size_cell_touch

0x044e,	// (0x0006be1d) touch_pane_ParamLimits

0x044e,	// (0x0006be1d) touch_pane

0x9558,	// (0x00074f27) main_rss2_pane

0xcabb,	// (0x0007848a) listscroll_rss2_pane

0xcac4,	// (0x00078493) rss2_navigation_pane

0xcacc,	// (0x0007849b) list_rss2_pane

0xb30c,	// (0x00076cdb) scroll_pane_cp22

0xcad4,	// (0x000784a3) rss2_navigation_pane_g1

0xcadd,	// (0x000784ac) rss2_navigation_pane_g2

0xcae5,	// (0x000784b4) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0007b057) rss2_navigation_pane_g

0xcaed,	// (0x000784bc) rss2_navigation_pane_t1

0x420c,	// (0x0006fbdb) rss2_list_single_pane_ParamLimits

0x420c,	// (0x0006fbdb) rss2_list_single_pane

0xcafb,	// (0x000784ca) rss2_list_single_pane_t2

0xcb09,	// (0x000784d8) rss2_list_single_pane_t3_ParamLimits

0xcb09,	// (0x000784d8) rss2_list_single_pane_t3

0xcb26,	// (0x000784f5) rss2_list_single_pane_t4

0x22d2,	// (0x0006dca1) smil_status_pane_g1

0x954a,	// (0x00074f19) main_image2_pane_ParamLimits

0x954a,	// (0x00074f19) main_image2_pane

0x3cb2,	// (0x0006f681) main_camera2_pane_g9_ParamLimits

0x3cb2,	// (0x0006f681) main_camera2_pane_g9

0x3de0,	// (0x0006f7af) main_camera2_pane_t5_ParamLimits

0x3de0,	// (0x0006f7af) main_camera2_pane_t5

0x99c1,	// (0x00075390) main_camera2_pane_t6_ParamLimits

0x99c1,	// (0x00075390) main_camera2_pane_t6

0x4221,	// (0x0006fbf0) main_image2_pane_g1_ParamLimits

0x4221,	// (0x0006fbf0) main_image2_pane_g1

0x2fec,	// (0x0006e9bb) smil2_video_pane_ParamLimits

0x2fec,	// (0x0006e9bb) smil2_video_pane

0x9500,	// (0x00074ecf) aid_zoom_text_primary_cp

0x9540,	// (0x00074f0f) popup_preview_fixed_window

0xabe0,	// (0x000765af) im_reading_pane_g1

0x3b29,	// (0x0006f4f8) cams2_bc_adjust_pane_cp_ParamLimits

0x3b29,	// (0x0006f4f8) cams2_bc_adjust_pane_cp

0x3e0f,	// (0x0006f7de) cams2_bc_adjust_pane_ParamLimits

0x3e0f,	// (0x0006f7de) cams2_bc_adjust_pane

0xd46d,	// (0x00078e3c) cams2_bc_adjust_pane_g1

0x9a2a,	// (0x000753f9) cams2_slider_pane

0x9a33,	// (0x00075402) cams2_slider_pane_g1

0x9a3c,	// (0x0007540b) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0007b05e) cams2_slider_pane_g

0x0656,	// (0x0006c025) calc_display_pane_ParamLimits

0x067b,	// (0x0006c04a) calc_paper_pane_ParamLimits

0x069e,	// (0x0006c06d) grid_calc_pane_ParamLimits

0x98e6,	// (0x000752b5) popup_clock_digital_window_t1_ParamLimits

0xb7d6,	// (0x000771a5) main_image_pane_t1

0x0638,	// (0x0006c007) aid_size_cell_calc_ParamLimits

0x0638,	// (0x0006c007) aid_size_cell_calc

0x35ed,	// (0x0006efbc) popup_blid_sat_info2_window_ParamLimits

0x35ed,	// (0x0006efbc) popup_blid_sat_info2_window

0xcb3c,	// (0x0007850b) aid_size_cell_blid

0xcb44,	// (0x00078513) bg_popup_window_pane_cp07

0xcb67,	// (0x00078536) grid_popup_blid_pane

0xcb71,	// (0x00078540) heading_pane_cp05_ParamLimits

0xcb71,	// (0x00078540) heading_pane_cp05

0xcc3b,	// (0x0007860a) cell_popup_blid_pane_ParamLimits

0xcc3b,	// (0x0007860a) cell_popup_blid_pane

0xcc5f,	// (0x0007862e) cell_popup_blid_pane_g1

0xcc67,	// (0x00078636) cell_popup_blid_pane_t1

0x40bc,	// (0x0006fa8b) mup2_indicator_pane_ParamLimits

0x40bc,	// (0x0006fa8b) mup2_indicator_pane

0xaae7,	// (0x000764b6) mup2_visualizer_osc_pane

0xca11,	// (0x000783e0) mup2_visualizer_spec_pane_ParamLimits

0xca11,	// (0x000783e0) mup2_visualizer_spec_pane

0x4237,	// (0x0006fc06) mup2_spec_half_pane

0x4240,	// (0x0006fc0f) mup2_spec_half_pane_cp

0x4248,	// (0x0006fc17) mup2_spec_bar_pane_ParamLimits

0x4248,	// (0x0006fc17) mup2_spec_bar_pane

0xc9a6,	// (0x00078375) mup2_spec_bar_pane_g1

0xc9b0,	// (0x0007837f) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0007afd1) mup2_spec_bar_pane_g

0x4268,	// (0x0006fc37) mup2_osc_middle_pane

0xc9c2,	// (0x00078391) mup2_visualizer_osc_pane_g1

0x9582,	// (0x00074f51) popup_number_entry_window_t1_ParamLimits

0x9595,	// (0x00074f64) popup_number_entry_window_t2_ParamLimits

0x95a7,	// (0x00074f76) popup_number_entry_window_t3_ParamLimits

0x04a0,	// (0x0006be6f) popup_number_entry_window_t5_ParamLimits

0x04a0,	// (0x0006be6f) popup_number_entry_window_t5

0xf0c6,	// (0x0007aa95) popup_number_entry_window_t_ParamLimits

0x95b9,	// (0x00074f88) text_title_cp2_ParamLimits

0x9925,	// (0x000752f4) aid_hotspot_pointer_text2_pane

0x993f,	// (0x0007530e) main_viewer_pane_g9_ParamLimits

0x993f,	// (0x0007530e) main_viewer_pane_g9

0xae19,	// (0x000767e8) cale_month_pane_t1_ParamLimits

0xae56,	// (0x00076825) bg_cale_pane_ParamLimits

0xae6e,	// (0x0007683d) list_cale_pane_ParamLimits

0xae7f,	// (0x0007684e) listscroll_cale_day_pane_t1

0xae91,	// (0x00076860) scroll_pane_cp09_ParamLimits

0x29b5,	// (0x0006e384) main_mup_eq_pane_t1_ParamLimits

0x29b5,	// (0x0006e384) main_mup_eq_pane_t1

0x29cf,	// (0x0006e39e) main_mup_eq_pane_t2_ParamLimits

0x29cf,	// (0x0006e39e) main_mup_eq_pane_t2

0x29e9,	// (0x0006e3b8) main_mup_eq_pane_t3_ParamLimits

0x29e9,	// (0x0006e3b8) main_mup_eq_pane_t3

0x2a05,	// (0x0006e3d4) main_mup_eq_pane_t4_ParamLimits

0x2a05,	// (0x0006e3d4) main_mup_eq_pane_t4

0x2a21,	// (0x0006e3f0) main_mup_eq_pane_t5_ParamLimits

0x2a21,	// (0x0006e3f0) main_mup_eq_pane_t5

0x2a3d,	// (0x0006e40c) main_mup_eq_pane_t6_ParamLimits

0x2a3d,	// (0x0006e40c) main_mup_eq_pane_t6

0x2a51,	// (0x0006e420) main_mup_eq_pane_t7_ParamLimits

0x2a51,	// (0x0006e420) main_mup_eq_pane_t7

0x2a65,	// (0x0006e434) main_mup_eq_pane_t8_ParamLimits

0x2a65,	// (0x0006e434) main_mup_eq_pane_t8

0x2a79,	// (0x0006e448) main_mup_eq_pane_t9_ParamLimits

0x2a79,	// (0x0006e448) main_mup_eq_pane_t9

0x2a93,	// (0x0006e462) main_mup_eq_pane_t10_ParamLimits

0x2a93,	// (0x0006e462) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0007ae20) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0007ae20) main_mup_eq_pane_t

0x2b42,	// (0x0006e511) mup_equalizer_pane_cp5_ParamLimits

0x2b56,	// (0x0006e525) mup_equalizer_pane_cp6_ParamLimits

0x2b6a,	// (0x0006e539) mup_equalizer_pane_cp7_ParamLimits

0x9558,	// (0x00074f27) main_gallery_pane

0xc9cb,	// (0x0007839a) smil2_volume_pane

0xc9d3,	// (0x000783a2) smil_status_volume_pane_g1_ParamLimits

0xc9f2,	// (0x000783c1) smil_status_volume_pane_g2_ParamLimits

0x999f,	// (0x0007536e) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0007afd6) smil_status_volume_pane_g_ParamLimits

0xcb44,	// (0x00078513) bg_popup_window_pane_cp07_ParamLimits

0xcb52,	// (0x00078521) blid_firmament_pane

0x4271,	// (0x0006fc40) aid_size_cell_gallery_ParamLimits

0x4271,	// (0x0006fc40) aid_size_cell_gallery

0x4287,	// (0x0006fc56) grid_gallery_pane_ParamLimits

0x4287,	// (0x0006fc56) grid_gallery_pane

0x42a0,	// (0x0006fc6f) cell_gallery_pane_ParamLimits

0x42a0,	// (0x0006fc6f) cell_gallery_pane

0xcc75,	// (0x00078644) bg_cell_gallery_focus_pane_ParamLimits

0xcc75,	// (0x00078644) bg_cell_gallery_focus_pane

0xcc87,	// (0x00078656) cell_gallery_pane_g1_ParamLimits

0xcc87,	// (0x00078656) cell_gallery_pane_g1

0x42e9,	// (0x0006fcb8) cell_gallery_pane_g2_ParamLimits

0x42e9,	// (0x0006fcb8) cell_gallery_pane_g2

0x42f6,	// (0x0006fcc5) cell_gallery_pane_g3_ParamLimits

0x42f6,	// (0x0006fcc5) cell_gallery_pane_g3

0xcc93,	// (0x00078662) cell_gallery_pane_g4_ParamLimits

0xcc93,	// (0x00078662) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0007b084) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0007b084) cell_gallery_pane_g

0xcc9f,	// (0x0007866e) bg_cell_gallery_focus_pane_g1

0xcca7,	// (0x00078676) bg_cell_gallery_focus_pane_g2

0xccaf,	// (0x0007867e) bg_cell_gallery_focus_pane_g3

0xccb7,	// (0x00078686) bg_cell_gallery_focus_pane_g4

0xccbf,	// (0x0007868e) bg_cell_gallery_focus_pane_g5

0xccc7,	// (0x00078696) bg_cell_gallery_focus_pane_g6

0xcccf,	// (0x0007869e) bg_cell_gallery_focus_pane_g7

0xccd7,	// (0x000786a6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0007b08d) bg_cell_gallery_focus_pane_g

0xccdf,	// (0x000786ae) aid_firma_cardinal

0xccf3,	// (0x000786c2) blid_firmament_pane_t1

0xcd0a,	// (0x000786d9) blid_firmament_pane_t2

0xcd21,	// (0x000786f0) blid_firmament_pane_t3

0xcd38,	// (0x00078707) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0007b09e) blid_firmament_pane_t

0xcd4f,	// (0x0007871e) blid_sat_info_pane

0xcd5f,	// (0x0007872e) blid_sat_info_pane_g1

0xcd5f,	// (0x0007872e) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0007b0a7) blid_sat_info_pane_g

0xcd69,	// (0x00078738) blid_sat_info_pane_t1

0xcd77,	// (0x00078746) smil2_volume_content_pane

0xcd80,	// (0x0007874f) smil2_volume_pane_g1

0xa4b3,	// (0x00075e82) smil2_volume_content_pane_g1

0xcd88,	// (0x00078757) smil2_volume_content_pane_g2

0xcd91,	// (0x00078760) smil2_volume_content_pane_g3

0xcd9a,	// (0x00078769) smil2_volume_content_pane_g4

0xcda3,	// (0x00078772) smil2_volume_content_pane_g5

0xcdac,	// (0x0007877b) smil2_volume_content_pane_g6

0xcdb5,	// (0x00078784) smil2_volume_content_pane_g7

0xcdbe,	// (0x0007878d) smil2_volume_content_pane_g8

0xcdc7,	// (0x00078796) smil2_volume_content_pane_g9

0xcdd0,	// (0x0007879f) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0007b0ac) smil2_volume_content_pane_g

0x0c3e,	// (0x0006c60d) cale_week_day_heading_pane_t1_ParamLimits

0x0c68,	// (0x0006c637) cale_week_day_heading_pane_t2_ParamLimits

0x0c97,	// (0x0006c666) cale_week_day_heading_pane_t3_ParamLimits

0x0cc6,	// (0x0006c695) cale_week_day_heading_pane_t4_ParamLimits

0x0cf5,	// (0x0006c6c4) cale_week_day_heading_pane_t5_ParamLimits

0x0d2c,	// (0x0006c6fb) cale_week_day_heading_pane_t6_ParamLimits

0x0d63,	// (0x0006c732) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0007ab9c) cale_week_day_heading_pane_t_ParamLimits

0xaa8c,	// (0x0007645b) bg_cale_side_pane_ParamLimits

0x0d8d,	// (0x0006c75c) cale_week_time_pane_t1_ParamLimits

0x0da7,	// (0x0006c776) cale_week_time_pane_t2_ParamLimits

0x0dc1,	// (0x0006c790) cale_week_time_pane_t3_ParamLimits

0x0ddb,	// (0x0006c7aa) cale_week_time_pane_t4_ParamLimits

0x0df5,	// (0x0006c7c4) cale_week_time_pane_t5_ParamLimits

0x0e0f,	// (0x0006c7de) cale_week_time_pane_t6_ParamLimits

0x0e29,	// (0x0006c7f8) cale_week_time_pane_t7_ParamLimits

0x0e43,	// (0x0006c812) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0007abab) cale_week_time_pane_t_ParamLimits

0x0e5d,	// (0x0006c82c) cell_cale_week_pane_g2_ParamLimits

0xaa8c,	// (0x0007645b) bg_cale_side_pane_cp01_ParamLimits

0x20af,	// (0x0006da7e) cale_month_week_pane_t1_ParamLimits

0x20c8,	// (0x0006da97) cale_month_week_pane_t2_ParamLimits

0x20e1,	// (0x0006dab0) cale_month_week_pane_t3_ParamLimits

0x20fa,	// (0x0006dac9) cale_month_week_pane_t4_ParamLimits

0x2113,	// (0x0006dae2) cale_month_week_pane_t5_ParamLimits

0x212c,	// (0x0006dafb) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0007ac80) cale_month_week_pane_t_ParamLimits

0x9862,	// (0x00075231) cell_cale_month_pane_g1_ParamLimits

0x9558,	// (0x00074f27) main_cale_event_viewer_pane

0x94d2,	// (0x00074ea1) listscroll_cale_event_viewer_pane

0xcdd9,	// (0x000787a8) list_cale_ev_pane

0xcde1,	// (0x000787b0) scroll_pane_cp023

0xcded,	// (0x000787bc) field_cale_ev_pane_ParamLimits

0xcded,	// (0x000787bc) field_cale_ev_pane

0xce0b,	// (0x000787da) field_cale_ev_content_pane_ParamLimits

0xce0b,	// (0x000787da) field_cale_ev_content_pane

0xce17,	// (0x000787e6) field_cale_ev_pane_g1_ParamLimits

0xce17,	// (0x000787e6) field_cale_ev_pane_g1

0xce23,	// (0x000787f2) field_cale_ev_pane_g2_ParamLimits

0xce23,	// (0x000787f2) field_cale_ev_pane_g2

0xce3b,	// (0x0007880a) field_cale_ev_pane_g3_ParamLimits

0xce3b,	// (0x0007880a) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0007b0c1) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0007b0c1) field_cale_ev_pane_g

0xce53,	// (0x00078822) field_cale_ev_pane_t1_ParamLimits

0xce53,	// (0x00078822) field_cale_ev_pane_t1

0xce6a,	// (0x00078839) field_cale_ev_content_pane_t1_ParamLimits

0xce6a,	// (0x00078839) field_cale_ev_content_pane_t1

0xb6bc,	// (0x0007708b) bg_button_pane_cp01

0x096b,	// (0x0006c33a) listscroll_cale_week_pane_ParamLimits

0xaa37,	// (0x00076406) popup_toolbar_window_cp01

0xaa5d,	// (0x0007642c) listscroll_cale_week_pane_t1_ParamLimits

0x096b,	// (0x0006c33a) listscroll_cale_day_pane_ParamLimits

0xaa37,	// (0x00076406) popup_toolbar_window_cp02

0xae7f,	// (0x0007684e) listscroll_cale_day_pane_t1_ParamLimits

0x35b3,	// (0x0006ef82) main_cale_month_pane_ParamLimits

0x998a,	// (0x00075359) popup_toolbar_window_cp03_ParamLimits

0x998a,	// (0x00075359) popup_toolbar_window_cp03

0x2eb4,	// (0x0006e883) main_image_pane_g2_ParamLimits

0x2eb4,	// (0x0006e883) main_image_pane_g2

0x2ec5,	// (0x0006e894) main_image_pane_g3_ParamLimits

0x2ec5,	// (0x0006e894) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0007aeb2) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0007aeb2) main_image_pane_g

0xb7d6,	// (0x000771a5) main_image_pane_t1_ParamLimits

0x2ed6,	// (0x0006e8a5) main_image_pane_t2_ParamLimits

0x2ed6,	// (0x0006e8a5) main_image_pane_t2

0x2ee8,	// (0x0006e8b7) main_image_pane_t3_ParamLimits

0x2ee8,	// (0x0006e8b7) main_image_pane_t3

0x2f10,	// (0x0006e8df) main_image_pane_t4_ParamLimits

0x2f10,	// (0x0006e8df) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0007aeb9) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0007aeb9) main_image_pane_t

0x2f30,	// (0x0006e8ff) popup_image_details_window_cp01

0x2f3a,	// (0x0006e909) popup_toobar_trans_pane_cp01_ParamLimits

0x2f3a,	// (0x0006e909) popup_toobar_trans_pane_cp01

0x36cc,	// (0x0006f09b) popup_image_details_window_ParamLimits

0x36cc,	// (0x0006f09b) popup_image_details_window

0x995d,	// (0x0007532c) popup_image_focus_window

0x3ae3,	// (0x0006f4b2) camera2_autofocus_pane_ParamLimits

0x3ae3,	// (0x0006f4b2) camera2_autofocus_pane

0x94d2,	// (0x00074ea1) bg_popup_sub_pane_cp06

0xce88,	// (0x00078857) popup_image_focus_window_g1

0xce90,	// (0x0007885f) popup_image_focus_window_g2

0xce98,	// (0x00078867) popup_image_focus_window_g3

0xcea0,	// (0x0007886f) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0007b0c8) popup_image_focus_window_g

0xcea8,	// (0x00078877) popup_image_focus_window_t1

0xceb6,	// (0x00078885) popup_image_focus_window_t2

0xcec6,	// (0x00078895) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0007b0d1) popup_image_focus_window_t

0xced4,	// (0x000788a3) camera2_autofocus_pane_g1

0xa542,	// (0x00075f11) bg_tb_trans_pane_cp01

0xcee2,	// (0x000788b1) popup_image_details_window_g1

0xcef5,	// (0x000788c4) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0007b0e3) popup_image_details_window_g

0xcf1e,	// (0x000788ed) popup_image_details_window_t1

0xcf30,	// (0x000788ff) popup_image_details_window_t2

0xcf49,	// (0x00078918) popup_image_details_window_t3

0xcf5d,	// (0x0007892c) popup_image_details_window_t4

0xcf78,	// (0x00078947) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0007b0ea) popup_image_details_window_t

0xa41e,	// (0x00075ded) bg_calc_paper_pane_ParamLimits

0x9558,	// (0x00074f27) grid_highlight_pane_cp013

0x97d2,	// (0x000751a1) list_calc_pane_ParamLimits

0x97e4,	// (0x000751b3) scroll_pane_cp024

0xa432,	// (0x00075e01) bg_calc_display_pane_ParamLimits

0x079c,	// (0x0006c16b) calc_display_pane_t1_ParamLimits

0x07b1,	// (0x0006c180) calc_display_pane_t2_ParamLimits

0x97ec,	// (0x000751bb) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0007ab1c) calc_display_pane_t_ParamLimits

0x0871,	// (0x0006c240) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0007ab39) cell_calc_pane_g

0x087a,	// (0x0006c249) cell_calc_pane_t1

0xa491,	// (0x00075e60) grid_highlight_pane_cp02_ParamLimits

0xa4a7,	// (0x00075e76) toolbar_button_pane_cp01_ParamLimits

0xa4a7,	// (0x00075e76) toolbar_button_pane_cp01

0xb81b,	// (0x000771ea) temp_image_control_pane_ParamLimits

0xb81b,	// (0x000771ea) temp_image_control_pane

0x954a,	// (0x00074f19) main_mp3_pane

0xcf92,	// (0x00078961) temp_image_control_pane_g1_ParamLimits

0xcf92,	// (0x00078961) temp_image_control_pane_g1

0xcfa0,	// (0x0007896f) temp_image_control_pane_g2_ParamLimits

0xcfa0,	// (0x0007896f) temp_image_control_pane_g2

0xcfb2,	// (0x00078981) temp_image_control_pane_g3_ParamLimits

0xcfb2,	// (0x00078981) temp_image_control_pane_g3

0x4333,	// (0x0006fd02) temp_image_control_pane_g4_ParamLimits

0x4333,	// (0x0006fd02) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0007b0f5) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0007b0f5) temp_image_control_pane_g

0xcf92,	// (0x00078961) main_mp3_pane_g1

0x4346,	// (0x0006fd15) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0007b0fe) main_mp3_pane_g

0xcff5,	// (0x000789c4) main_mp3_pane_t1

0xaaef,	// (0x000764be) main_camera_pane_g8_ParamLimits

0xaaef,	// (0x000764be) main_camera_pane_g8

0x1157,	// (0x0006cb26) main_video_pane_g7_ParamLimits

0x1157,	// (0x0006cb26) main_video_pane_g7

0x99df,	// (0x000753ae) main_camera2_pane_t7_ParamLimits

0x99df,	// (0x000753ae) main_camera2_pane_t7

0xac37,	// (0x00076606) scroll_pane_cp025_ParamLimits

0xac37,	// (0x00076606) scroll_pane_cp025

0xac4b,	// (0x0007661a) scroll_pane_cp026_ParamLimits

0xac4b,	// (0x0007661a) scroll_pane_cp026

0xac5a,	// (0x00076629) wml_content_pane_ParamLimits

0x9558,	// (0x00074f27) main_touch_calib_pane

0x441a,	// (0x0006fde9) main_touch_calib_pane_g1

0x442c,	// (0x0006fdfb) main_touch_calib_pane_g2

0x443e,	// (0x0006fe0d) main_touch_calib_pane_g3

0x4450,	// (0x0006fe1f) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0007b11c) main_touch_calib_pane_g

0x4462,	// (0x0006fe31) main_touch_calib_pane_t1

0x447c,	// (0x0006fe4b) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0007b125) main_touch_calib_pane_t

0xb3e8,	// (0x00076db7) mup_progress_pane_cp02

0xb41d,	// (0x00076dec) navi_pane_g1

0xb4d8,	// (0x00076ea7) navi_pane_mp_t3

0x954a,	// (0x00074f19) main_mp3_pane_ParamLimits

0x3851,	// (0x0006f220) navi_pane_ParamLimits

0xcf92,	// (0x00078961) main_mp3_pane_g1_ParamLimits

0x4346,	// (0x0006fd15) main_mp3_pane_g2_ParamLimits

0x4354,	// (0x0006fd23) main_mp3_pane_g3_ParamLimits

0x4354,	// (0x0006fd23) main_mp3_pane_g3

0x4362,	// (0x0006fd31) main_mp3_pane_g4_ParamLimits

0x4362,	// (0x0006fd31) main_mp3_pane_g4

0xcfc2,	// (0x00078991) main_mp3_pane_g5_ParamLimits

0xcfc2,	// (0x00078991) main_mp3_pane_g5

0xcfd0,	// (0x0007899f) main_mp3_pane_g6_ParamLimits

0xcfd0,	// (0x0007899f) main_mp3_pane_g6

0xcfdd,	// (0x000789ac) main_mp3_pane_g7_ParamLimits

0xcfdd,	// (0x000789ac) main_mp3_pane_g7

0xcfe9,	// (0x000789b8) main_mp3_pane_g8_ParamLimits

0xcfe9,	// (0x000789b8) main_mp3_pane_g8

0xf72f,	// (0x0007b0fe) main_mp3_pane_g_ParamLimits

0x436e,	// (0x0006fd3d) main_mp3_pane_t2

0x437c,	// (0x0006fd4b) main_mp3_pane_t3

0xd003,	// (0x000789d2) main_mp3_pane_t4

0xd011,	// (0x000789e0) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0007b10f) main_mp3_pane_t

0xd01f,	// (0x000789ee) mup_progress_pane_cp01

0x9500,	// (0x00074ecf) aid_zoom_text_secondary2

0xcdd9,	// (0x000787a8) list_cale_ev2_pane

0xcde1,	// (0x000787b0) scroll_pane_cp023_ParamLimits

0x44d2,	// (0x0006fea1) field_cale_ev2_pane_ParamLimits

0x44d2,	// (0x0006fea1) field_cale_ev2_pane

0xa550,	// (0x00075f1f) field_cale_ev2_pane_g1_ParamLimits

0xa550,	// (0x00075f1f) field_cale_ev2_pane_g1

0xa55c,	// (0x00075f2b) field_cale_ev2_pane_g2_ParamLimits

0xa55c,	// (0x00075f2b) field_cale_ev2_pane_g2

0xa574,	// (0x00075f43) field_cale_ev2_pane_g3_ParamLimits

0xa574,	// (0x00075f43) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0007b130) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0007b130) field_cale_ev2_pane_g

0x44f2,	// (0x0006fec1) field_cale_ev2_pane_t1_ParamLimits

0x44f2,	// (0x0006fec1) field_cale_ev2_pane_t1

0x4509,	// (0x0006fed8) field_cale_ev2_pane_t2_ParamLimits

0x4509,	// (0x0006fed8) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0007b139) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0007b139) field_cale_ev2_pane_t

0x2d69,	// (0x0006e738) main_postcard_pane_g5_ParamLimits

0x2d69,	// (0x0006e738) main_postcard_pane_g5

0x2d7f,	// (0x0006e74e) main_postcard_pane_g6_ParamLimits

0x2d7f,	// (0x0006e74e) main_postcard_pane_g6

0x0f23,	// (0x0006c8f2) camera2_autofocus_pane_cp_ParamLimits

0x0f23,	// (0x0006c8f2) camera2_autofocus_pane_cp

0x954a,	// (0x00074f19) main_mup3_pane

0x4542,	// (0x0006ff11) main_mup3_pane_g1_ParamLimits

0x4542,	// (0x0006ff11) main_mup3_pane_g1

0x4564,	// (0x0006ff33) main_mup3_pane_g2_ParamLimits

0x4564,	// (0x0006ff33) main_mup3_pane_g2

0x45e2,	// (0x0006ffb1) main_mup3_pane_g3_ParamLimits

0x45e2,	// (0x0006ffb1) main_mup3_pane_g3

0x4628,	// (0x0006fff7) main_mup3_pane_g4_ParamLimits

0x4628,	// (0x0006fff7) main_mup3_pane_g4

0x466e,	// (0x0007003d) main_mup3_pane_g5_ParamLimits

0x466e,	// (0x0007003d) main_mup3_pane_g5

0x46b4,	// (0x00070083) main_mup3_pane_g6_ParamLimits

0x46b4,	// (0x00070083) main_mup3_pane_g6

0xd047,	// (0x00078a16) main_mup3_pane_g7_ParamLimits

0xd047,	// (0x00078a16) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0007b149) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0007b149) main_mup3_pane_g

0x4732,	// (0x00070101) main_mup3_pane_t1_ParamLimits

0x4732,	// (0x00070101) main_mup3_pane_t1

0x47a6,	// (0x00070175) main_mup3_pane_t2_ParamLimits

0x47a6,	// (0x00070175) main_mup3_pane_t2

0x487a,	// (0x00070249) main_mup3_pane_t4_ParamLimits

0x487a,	// (0x00070249) main_mup3_pane_t4

0x48d0,	// (0x0007029f) main_mup3_pane_t5_ParamLimits

0x48d0,	// (0x0007029f) main_mup3_pane_t5

0x498c,	// (0x0007035b) main_mup3_pane_t6_ParamLimits

0x498c,	// (0x0007035b) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0007b15a) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0007b15a) main_mup3_pane_t

0x4a44,	// (0x00070413) mup3_progress_pane_ParamLimits

0x4a44,	// (0x00070413) mup3_progress_pane

0x4ada,	// (0x000704a9) popup_mup3_control_window_ParamLimits

0x4ada,	// (0x000704a9) popup_mup3_control_window

0xd055,	// (0x00078a24) popup_mup3_text_window

0x4b0c,	// (0x000704db) mup3_progress_pane_t1

0x4b2b,	// (0x000704fa) mup3_progress_pane_t2

0xd05d,	// (0x00078a2c) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0007b167) mup3_progress_pane_t

0xd07a,	// (0x00078a49) mup_progress_pane_cp03

0x94d2,	// (0x00074ea1) bg_tb_trans_pane_cp04

0x4b4a,	// (0x00070519) mup3_volume_pane

0x4b52,	// (0x00070521) popup_mup3_control_window_g1

0x4b5b,	// (0x0007052a) mup3_volume_pane_g1

0x4b64,	// (0x00070533) mup3_volume_pane_g2

0x4b6d,	// (0x0007053c) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0007b16e) mup3_volume_pane_g

0x94d2,	// (0x00074ea1) bg_tb_trans_pane_cp03

0xd08a,	// (0x00078a59) popup_mup3_text_window_g1

0xd092,	// (0x00078a61) popup_mup3_text_window_t1

0xa47a,	// (0x00075e49) list_calc_item_pane_g1_ParamLimits

0xcab2,	// (0x00078481) mup_volume_pane_cp_g1

0x4496,	// (0x0006fe65) main_touch_calib_pane_t3

0x44aa,	// (0x0006fe79) main_touch_calib_pane_t4

0x44be,	// (0x0006fe8d) main_touch_calib_pane_t5

0x94dc,	// (0x00074eab) aid_cell_size_toolbar2

0x94e4,	// (0x00074eb3) aid_popup3_width_pane

0x94f0,	// (0x00074ebf) aid_zoom_text_msg_primary

0x0f02,	// (0x0006c8d1) vorec_t7

0xa43e,	// (0x00075e0d) bg_calc_paper_pane_g1_ParamLimits

0xa44a,	// (0x00075e19) bg_calc_paper_pane_g2_ParamLimits

0xa456,	// (0x00075e25) bg_calc_paper_pane_g3_ParamLimits

0xa462,	// (0x00075e31) bg_calc_paper_pane_g4_ParamLimits

0xa46e,	// (0x00075e3d) bg_calc_paper_pane_g5_ParamLimits

0x07fb,	// (0x0006c1ca) bg_calc_paper_pane_g6_ParamLimits

0x080a,	// (0x0006c1d9) bg_calc_paper_pane_g7_ParamLimits

0x0819,	// (0x0006c1e8) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0007ab23) bg_calc_paper_pane_g_ParamLimits

0x082c,	// (0x0006c1fb) calc_bg_paper_pane_g9_ParamLimits

0x106e,	// (0x0006ca3d) image_qvga_pane_ParamLimits

0x106e,	// (0x0006ca3d) image_qvga_pane

0xa36d,	// (0x00075d3c) bg_popup_sub_pane_cp04_ParamLimits

0xb752,	// (0x00077121) popup_mup_playback_window_g1_ParamLimits

0xb75e,	// (0x0007712d) popup_mup_playback_window_t1_ParamLimits

0xb773,	// (0x00077142) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0007aead) popup_mup_playback_window_t_ParamLimits

0x3fd6,	// (0x0006f9a5) main_mup2_pane_g3_ParamLimits

0x3fd6,	// (0x0006f9a5) main_mup2_pane_g3

0x147d,	// (0x0006ce4c) popup_toolbar_window_cp04

0xbb55,	// (0x00077524) popup_call2_audio_second_window_g3_ParamLimits

0xbb55,	// (0x00077524) popup_call2_audio_second_window_g3

0xbf5f,	// (0x0007792e) popup_call2_audio_first_window_g4_ParamLimits

0xbf5f,	// (0x0007792e) popup_call2_audio_first_window_g4

0xc5de,	// (0x00077fad) popup_call2_audio_in_window_g4_ParamLimits

0xc5de,	// (0x00077fad) popup_call2_audio_in_window_g4

0x2e96,	// (0x0006e865) aid_area_sk_bg_cut_ParamLimits

0x2e96,	// (0x0006e865) aid_area_sk_bg_cut

0xb788,	// (0x00077157) aid_area_sk_bg_cut_2_ParamLimits

0xb788,	// (0x00077157) aid_area_sk_bg_cut_2

0x42d9,	// (0x0006fca8) aid_placing_details_win

0x42e1,	// (0x0006fcb0) aid_placing_details_win_2

0xced4,	// (0x000788a3) camera2_autofocus_pane_g1_ParamLimits

0x03e7,	// (0x0006bdb6) popup_fixed_preview_cale_window_ParamLimits

0x03e7,	// (0x0006bdb6) popup_fixed_preview_cale_window

0xb556,	// (0x00076f25) navi_slider_pane_g3

0xb55f,	// (0x00076f2e) navi_slider_pane_g4

0xb568,	// (0x00076f37) navi_slider_pane_g5

0xb556,	// (0x00076f25) navi_slider_pane_g6

0x990c,	// (0x000752db) navi_slider_pane_g7

0xb689,	// (0x00077058) mup_scale_pane_g3

0xb692,	// (0x00077061) mup_scale_pane_g4

0xb69b,	// (0x0007706a) mup_scale_pane_g5

0x2b7e,	// (0x0006e54d) mup_scale_pane_g6

0x2b87,	// (0x0006e556) mup_scale_pane_g7

0xb556,	// (0x00076f25) cams2_slider_pane_g3

0xcb34,	// (0x00078503) cams2_slider_pane_g4

0x9a45,	// (0x00075414) cams2_slider_pane_g5

0xb556,	// (0x00076f25) cams2_slider_pane_g6

0x9a4d,	// (0x0007541c) cams2_slider_pane_g7

0xcd5f,	// (0x0007872e) camera2_autofocus_pane_cp_g1

0xc93f,	// (0x0007830e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc93f,	// (0x0007830e) bg_popup_preview_window_pane_cp02

0xd0a0,	// (0x00078a6f) list_fp_cale_pane_ParamLimits

0xd0a0,	// (0x00078a6f) list_fp_cale_pane

0xd0ac,	// (0x00078a7b) popup_fixed_preview_cale_window_t1_ParamLimits

0xd0ac,	// (0x00078a7b) popup_fixed_preview_cale_window_t1

0x4b76,	// (0x00070545) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b76,	// (0x00070545) popup_fixed_preview_cale_window_t2

0x4b8b,	// (0x0007055a) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b8b,	// (0x0007055a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0007b175) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0007b175) popup_fixed_preview_cale_window_t

0x4ba0,	// (0x0007056f) list_single_fp_cale_pane_ParamLimits

0x4ba0,	// (0x0007056f) list_single_fp_cale_pane

0xd0ca,	// (0x00078a99) list_single_fp_cale_pane_g1_ParamLimits

0xd0ca,	// (0x00078a99) list_single_fp_cale_pane_g1

0xd0d6,	// (0x00078aa5) list_single_fp_cale_pane_g2_ParamLimits

0xd0d6,	// (0x00078aa5) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0007b17c) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0007b17c) list_single_fp_cale_pane_g

0xd0ef,	// (0x00078abe) list_single_fp_cale_pane_t1_ParamLimits

0xd0ef,	// (0x00078abe) list_single_fp_cale_pane_t1

0xd101,	// (0x00078ad0) list_single_fp_cale_pane_t2_ParamLimits

0xd101,	// (0x00078ad0) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0007b183) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0007b183) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9558,	// (0x00074f27) main_dialer_pane

0x4bb5,	// (0x00070584) aid_cell_size_keypad

0x4bbf,	// (0x0007058e) dialer_ne_pane

0x4bc7,	// (0x00070596) grid_dialer_command_1_pane

0x4bcf,	// (0x0007059e) grid_dialer_command_2_pane

0x4bd7,	// (0x000705a6) grid_dialer_keypad_pane

0x4be9,	// (0x000705b8) bg_popup_call_pane_cp06_ParamLimits

0x4be9,	// (0x000705b8) bg_popup_call_pane_cp06

0x4bf5,	// (0x000705c4) dialer_ne_clear_pane_ParamLimits

0x4bf5,	// (0x000705c4) dialer_ne_clear_pane

0xd134,	// (0x00078b03) dialer_ne_pane_g1

0xd13c,	// (0x00078b0b) dialer_ne_pane_t1_ParamLimits

0xd13c,	// (0x00078b0b) dialer_ne_pane_t1

0x4c01,	// (0x000705d0) dialer_ne_pane_t2_ParamLimits

0x4c01,	// (0x000705d0) dialer_ne_pane_t2

0x4c2b,	// (0x000705fa) dialer_ne_pane_t3_ParamLimits

0x4c2b,	// (0x000705fa) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0007b188) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0007b188) dialer_ne_pane_t

0x4c5b,	// (0x0007062a) dialer_ne_pane_t3_copy1_ParamLimits

0x4c5b,	// (0x0007062a) dialer_ne_pane_t3_copy1

0x4c8a,	// (0x00070659) cell_dialer_keypad_pane_ParamLimits

0x4c8a,	// (0x00070659) cell_dialer_keypad_pane

0x4ca1,	// (0x00070670) cell_dialer_command_1_pane_ParamLimits

0x4ca1,	// (0x00070670) cell_dialer_command_1_pane

0x4cb7,	// (0x00070686) cell_dialer_command_2_pane_ParamLimits

0x4cb7,	// (0x00070686) cell_dialer_command_2_pane

0xd14e,	// (0x00078b1d) bg_button_pane_cp02_ParamLimits

0xd14e,	// (0x00078b1d) bg_button_pane_cp02

0x4cc6,	// (0x00070695) cell_dialer_keypad_pane_g1_ParamLimits

0x4cc6,	// (0x00070695) cell_dialer_keypad_pane_g1

0xd14e,	// (0x00078b1d) bg_button_pane_cp03_ParamLimits

0xd14e,	// (0x00078b1d) bg_button_pane_cp03

0x4cda,	// (0x000706a9) cell_dialer_command_1_pane_g1_ParamLimits

0x4cda,	// (0x000706a9) cell_dialer_command_1_pane_g1

0xd15a,	// (0x00078b29) bg_button_pane_cp04

0x4cee,	// (0x000706bd) cell_dialer_command_2_pane_g1

0xaae7,	// (0x000764b6) bg_button_pane_cp06

0xd162,	// (0x00078b31) dialer_ne_clear_pane_g1

0xb429,	// (0x00076df8) navi_pane_g2

0xb457,	// (0x00076e26) navi_pane_g3

0x0002,

0xf3e1,	// (0x0007adb0) navi_pane_g

0xb4e6,	// (0x00076eb5) navi_pane_mv_g2

0xb50d,	// (0x00076edc) navi_pane_mv_g5

0x2742,	// (0x0006e111) navi_pane_mv_t1

0xa432,	// (0x00075e01) main_clock2_pane

0xa542,	// (0x00075f11) main_clock2_list_pane_ParamLimits

0xa542,	// (0x00075f11) main_clock2_list_pane

0x4d5f,	// (0x0007072e) main_clock2_pane_t1_ParamLimits

0x4d5f,	// (0x0007072e) main_clock2_pane_t1

0x4d9a,	// (0x00070769) main_clock2_pane_t2_ParamLimits

0x4d9a,	// (0x00070769) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0007b194) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0007b194) main_clock2_pane_t

0x4e3a,	// (0x00070809) popup_clock_analogue_window_cp03_ParamLimits

0x4e3a,	// (0x00070809) popup_clock_analogue_window_cp03

0x4e5f,	// (0x0007082e) popup_clock_digital_window_cp02_ParamLimits

0x4e5f,	// (0x0007082e) popup_clock_digital_window_cp02

0x4ed8,	// (0x000708a7) main_clock2_list_single_pane_ParamLimits

0x4ed8,	// (0x000708a7) main_clock2_list_single_pane

0xaae7,	// (0x000764b6) list_highlight_pane_cp05

0xd1a0,	// (0x00078b6f) main_clock2_list_single_pane_t1

0x147d,	// (0x0006ce4c) popup_toolbar_window_cp04_ParamLimits

0x4303,	// (0x0006fcd2) camera2_autofocus_pane_g2_ParamLimits

0x4303,	// (0x0006fcd2) camera2_autofocus_pane_g2

0x430f,	// (0x0006fcde) camera2_autofocus_pane_g3_ParamLimits

0x430f,	// (0x0006fcde) camera2_autofocus_pane_g3

0x431b,	// (0x0006fcea) camera2_autofocus_pane_g4_ParamLimits

0x431b,	// (0x0006fcea) camera2_autofocus_pane_g4

0x4327,	// (0x0006fcf6) camera2_autofocus_pane_g5_ParamLimits

0x4327,	// (0x0006fcf6) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0007b0d8) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0007b0d8) camera2_autofocus_pane_g

0xd027,	// (0x000789f6) camera2_autofocus_pane_cp_g2

0xd02f,	// (0x000789fe) camera2_autofocus_pane_cp_g3

0xd037,	// (0x00078a06) camera2_autofocus_pane_cp_g4

0xd03f,	// (0x00078a0e) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0007b13e) camera2_autofocus_pane_cp_g

0x4be1,	// (0x000705b0) popup_dialer_spcha_window

0x94d2,	// (0x00074ea1) bg_popup_sub_pane_cp07

0xd1ae,	// (0x00078b7d) list_spcha_pane

0xd1b6,	// (0x00078b85) list_single_spcha_pane_ParamLimits

0xd1b6,	// (0x00078b85) list_single_spcha_pane

0x94d2,	// (0x00074ea1) list_highlight_pane_cp06

0xd1c7,	// (0x00078b96) list_single_spcha_pane_t1

0xc388,	// (0x00077d57) popup_call2_audio_out_window_g4_ParamLimits

0xc388,	// (0x00077d57) popup_call2_audio_out_window_g4

0x9558,	// (0x00074f27) main_imed2_pane

0x9965,	// (0x00075334) popup_imed_adjust2_window

0x36e4,	// (0x0006f0b3) popup_imed_trans_window_ParamLimits

0x36e4,	// (0x0006f0b3) popup_imed_trans_window

0xcb9d,	// (0x0007856c) popup_blid_sat_info2_window_t1

0xcbab,	// (0x0007857a) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0007b06d) popup_blid_sat_info2_window_t

0x4f89,	// (0x00070958) aid_size_cell_colour_35

0x4fa9,	// (0x00070978) aid_size_cell_colour_112

0x4fc9,	// (0x00070998) aid_size_cell_effect

0xc94b,	// (0x0007831a) bg_tb_trans_pane_cp02

0xaf88,	// (0x00076957) heading_imed_pane

0x4fe9,	// (0x000709b8) listscroll_imed_pane

0xd1d5,	// (0x00078ba4) heading_imed_pane_g1

0xd1dd,	// (0x00078bac) heading_imed_pane_t1

0xd1eb,	// (0x00078bba) grid_imed_colour_35_pane_ParamLimits

0xd1eb,	// (0x00078bba) grid_imed_colour_35_pane

0x4ff5,	// (0x000709c4) grid_imed_effect_pane

0xd202,	// (0x00078bd1) list_imed_aspect_pane

0x500b,	// (0x000709da) scroll_pane_cp027_ParamLimits

0x500b,	// (0x000709da) scroll_pane_cp027

0x501c,	// (0x000709eb) cell_imed_effect_pane_ParamLimits

0x501c,	// (0x000709eb) cell_imed_effect_pane

0xd20a,	// (0x00078bd9) cell_imed_colour_pane_ParamLimits

0xd20a,	// (0x00078bd9) cell_imed_colour_pane

0xd24c,	// (0x00078c1b) cell_imed_colour_pane_g1_ParamLimits

0xd24c,	// (0x00078c1b) cell_imed_colour_pane_g1

0xd25d,	// (0x00078c2c) hgihlgiht_grid_pane_cp016_ParamLimits

0xd25d,	// (0x00078c2c) hgihlgiht_grid_pane_cp016

0x5043,	// (0x00070a12) cell_imed_effect_pane_g1

0x504b,	// (0x00070a1a) grid_highlight_pane_cp017

0xd26e,	// (0x00078c3d) list_imed_single_pane_ParamLimits

0xd26e,	// (0x00078c3d) list_imed_single_pane

0x94d2,	// (0x00074ea1) list_highlight_pane_cp07

0xd283,	// (0x00078c52) list_imed_aspect_pane_comp1_t1

0xc94b,	// (0x0007831a) bg_tb_trans_pane_cp05

0xd2a5,	// (0x00078c74) popup_imed_adjust2_window_g1

0xd2cc,	// (0x00078c9b) popup_imed_adjust2_window_t1

0xd2e4,	// (0x00078cb3) slider_imed_adjust_pane

0xd2f8,	// (0x00078cc7) slider_imed_adjust_pane_g1

0xd308,	// (0x00078cd7) slider_imed_adjust_pane_g2

0xd318,	// (0x00078ce7) slider_imed_adjust_pane_g3

0xd329,	// (0x00078cf8) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0007b1b1) slider_imed_adjust_pane_g

0x5054,	// (0x00070a23) aid_size_cell_clipart2

0x5060,	// (0x00070a2f) grid_imed_clipart_pane

0xd33a,	// (0x00078d09) scroll_pane_cp031

0x506a,	// (0x00070a39) cell_imed_clipart_pane_ParamLimits

0x506a,	// (0x00070a39) cell_imed_clipart_pane

0x508c,	// (0x00070a5b) cell_imed_clipart_pane_g1

0x94d2,	// (0x00074ea1) grid_highlight_pane_cp014

0x4d3b,	// (0x0007070a) main_clock2_pane_g1_ParamLimits

0x4d3b,	// (0x0007070a) main_clock2_pane_g1

0x4e7f,	// (0x0007084e) aid_call2_pane_cp10

0x4e91,	// (0x00070860) aid_call_pane_cp10

0xb38a,	// (0x00076d59) popup_clock_analogue_window_cp10_g1

0xb38a,	// (0x00076d59) popup_clock_analogue_window_cp10_g2

0x4ea3,	// (0x00070872) popup_clock_analogue_window_cp10_g3

0x4ea3,	// (0x00070872) popup_clock_analogue_window_cp10_g4

0xb38a,	// (0x00076d59) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0007b19f) popup_clock_analogue_window_cp10_g

0x4eb9,	// (0x00070888) popup_clock_analogue_window_cp10_t1

0x4eea,	// (0x000708b9) clock_digital_number_pane_cp10_ParamLimits

0x4eea,	// (0x000708b9) clock_digital_number_pane_cp10

0x4f02,	// (0x000708d1) clock_digital_number_pane_cp11_ParamLimits

0x4f02,	// (0x000708d1) clock_digital_number_pane_cp11

0x4f1a,	// (0x000708e9) clock_digital_number_pane_cp12_ParamLimits

0x4f1a,	// (0x000708e9) clock_digital_number_pane_cp12

0x4f34,	// (0x00070903) clock_digital_number_pane_cp13_ParamLimits

0x4f34,	// (0x00070903) clock_digital_number_pane_cp13

0x4f4e,	// (0x0007091d) clock_digital_separator_pane_cp10_ParamLimits

0x4f4e,	// (0x0007091d) clock_digital_separator_pane_cp10

0x4f68,	// (0x00070937) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f68,	// (0x00070937) popup_clock_digital_window_cp02_t1

0xa365,	// (0x00075d34) clock_digital_number_pane_cp10_g1

0xa365,	// (0x00075d34) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0007b1ba) clock_digital_number_pane_cp10_g

0xa365,	// (0x00075d34) clock_digital_separator_pane_cp10_g1

0xa365,	// (0x00075d34) clock_digital_separator_pane_g2_cp10

0xb515,	// (0x00076ee4) navi_pane_vded_g4

0xb51e,	// (0x00076eed) navi_pane_vded_g5

0xb527,	// (0x00076ef6) navi_pane_vded_t1

0x9558,	// (0x00074f27) main_vded_pane

0x5095,	// (0x00070a64) main_vded_pane_g1

0x509f,	// (0x00070a6e) main_vded_pane_g2

0x50a9,	// (0x00070a78) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0007b1bf) main_vded_pane_g

0x50b3,	// (0x00070a82) main_vded_pane_t1

0x50c1,	// (0x00070a90) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0007b1c6) main_vded_pane_t

0x50cf,	// (0x00070a9e) vded_slider_pane

0x50d7,	// (0x00070aa6) vded_video_pane

0xd342,	// (0x00078d11) vded_video_pane_g1

0x50df,	// (0x00070aae) vded_video_pane_g2

0xcd5f,	// (0x0007872e) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0007b1cb) vded_video_pane_g

0xd34c,	// (0x00078d1b) vded_slider_pane_g1

0xcab2,	// (0x00078481) vded_slider_pane_g2

0xd355,	// (0x00078d24) vded_slider_pane_g3

0xd35e,	// (0x00078d2d) vded_slider_pane_g4

0xd367,	// (0x00078d36) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0007b1d2) vded_slider_pane_g

0x4ac2,	// (0x00070491) mup3_rocker_pane_ParamLimits

0x4ac2,	// (0x00070491) mup3_rocker_pane

0x50e8,	// (0x00070ab7) mup3_control_keys_pane_g1

0x50f0,	// (0x00070abf) mup3_control_keys_pane_g2

0x50f8,	// (0x00070ac7) mup3_control_keys_pane_g3

0x5100,	// (0x00070acf) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0007b1dd) mup3_control_keys_pane_g

0x041e,	// (0x0006bded) popup_toolbar2_fixed_window_cp01_ParamLimits

0x041e,	// (0x0006bded) popup_toolbar2_fixed_window_cp01

0x4af6,	// (0x000704c5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4af6,	// (0x000704c5) popup_toolbar2_fixed_window_cp02

0xbcc7,	// (0x00077696) popup_call2_audio_second_window_t4_ParamLimits

0xbcc7,	// (0x00077696) popup_call2_audio_second_window_t4

0xc1f5,	// (0x00077bc4) popup_call2_audio_first_window_t6_ParamLimits

0xc1f5,	// (0x00077bc4) popup_call2_audio_first_window_t6

0xc48b,	// (0x00077e5a) popup_call2_audio_out_window_t6_ParamLimits

0xc48b,	// (0x00077e5a) popup_call2_audio_out_window_t6

0x9558,	// (0x00074f27) main_vitu_pane

0x5110,	// (0x00070adf) aid_size_cell_itu_ParamLimits

0x5110,	// (0x00070adf) aid_size_cell_itu

0xa542,	// (0x00075f11) bg_popup_window_pane_cp08_ParamLimits

0xa542,	// (0x00075f11) bg_popup_window_pane_cp08

0x5126,	// (0x00070af5) field_vitu_entry_pane_ParamLimits

0x5126,	// (0x00070af5) field_vitu_entry_pane

0x513d,	// (0x00070b0c) grid_vitu_function_pane_ParamLimits

0x513d,	// (0x00070b0c) grid_vitu_function_pane

0x5158,	// (0x00070b27) grid_vitu_itu_pane_ParamLimits

0x5158,	// (0x00070b27) grid_vitu_itu_pane

0x5176,	// (0x00070b45) cell_vitu_itu_pane_ParamLimits

0x5176,	// (0x00070b45) cell_vitu_itu_pane

0x5198,	// (0x00070b67) cell_vitu_function_pane_ParamLimits

0x5198,	// (0x00070b67) cell_vitu_function_pane

0xa542,	// (0x00075f11) bg_popup_sub_pane_cp08_ParamLimits

0xa542,	// (0x00075f11) bg_popup_sub_pane_cp08

0x51b1,	// (0x00070b80) field_vitu_entry_pane_t1_ParamLimits

0x51b1,	// (0x00070b80) field_vitu_entry_pane_t1

0xd388,	// (0x00078d57) field_vitu_entry_pane_t2_ParamLimits

0xd388,	// (0x00078d57) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0007b1eb) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0007b1eb) field_vitu_entry_pane_t

0xd3a5,	// (0x00078d74) bg_button_pane_cp05_ParamLimits

0xd3a5,	// (0x00078d74) bg_button_pane_cp05

0x51cf,	// (0x00070b9e) cell_vitu_itu_pane_g1

0x51e7,	// (0x00070bb6) cell_vitu_itu_pane_t1_ParamLimits

0x51e7,	// (0x00070bb6) cell_vitu_itu_pane_t1

0x51f9,	// (0x00070bc8) cell_vitu_itu_pane_t2_ParamLimits

0x51f9,	// (0x00070bc8) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0007b1f0) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0007b1f0) cell_vitu_itu_pane_t

0xd3b3,	// (0x00078d82) bg_button_pane_cp07

0x522e,	// (0x00070bfd) cell_vitu_function_pane_g1

0x97ca,	// (0x00075199) main_calc_pane_g1

0x0245,	// (0x0006bc14) aid_visual_content_pane

0x9558,	// (0x00074f27) main_vradio_pane

0x5237,	// (0x00070c06) main_vradio_pane_g1_ParamLimits

0x5237,	// (0x00070c06) main_vradio_pane_g1

0xd3bd,	// (0x00078d8c) main_vradio_pane_g2_ParamLimits

0xd3bd,	// (0x00078d8c) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0007b1f7) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0007b1f7) main_vradio_pane_g

0x5250,	// (0x00070c1f) main_vradio_pane_t1_ParamLimits

0x5250,	// (0x00070c1f) main_vradio_pane_t1

0x5265,	// (0x00070c34) main_vradio_pane_t2_ParamLimits

0x5265,	// (0x00070c34) main_vradio_pane_t2

0xd3ca,	// (0x00078d99) main_vradio_pane_t3_ParamLimits

0xd3ca,	// (0x00078d99) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0007b1fc) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0007b1fc) main_vradio_pane_t

0x527a,	// (0x00070c49) vradio_rocker_control_pane_ParamLimits

0x527a,	// (0x00070c49) vradio_rocker_control_pane

0x528c,	// (0x00070c5b) vradio_station_info_pane_ParamLimits

0x528c,	// (0x00070c5b) vradio_station_info_pane

0xd3de,	// (0x00078dad) vradio_frequency_info_pane_ParamLimits

0xd3de,	// (0x00078dad) vradio_frequency_info_pane

0xcd5f,	// (0x0007872e) vradio_station_info_pane_g1

0xd3ed,	// (0x00078dbc) vradio_station_info_pane_t1_ParamLimits

0xd3ed,	// (0x00078dbc) vradio_station_info_pane_t1

0xd40f,	// (0x00078dde) vradio_station_info_pane_t2_ParamLimits

0xd40f,	// (0x00078dde) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0007b203) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0007b203) vradio_station_info_pane_t

0xd421,	// (0x00078df0) vradio_tuning_pane

0xd429,	// (0x00078df8) vradio_rocker_control_pane_g1

0xd431,	// (0x00078e00) vradio_rocker_control_pane_g2

0xd439,	// (0x00078e08) vradio_rocker_control_pane_g3

0xd441,	// (0x00078e10) vradio_rocker_control_pane_g4

0xd449,	// (0x00078e18) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0007b208) vradio_rocker_control_pane_g

0x529e,	// (0x00070c6d) vradio_frequency_info_pane_g1

0xd451,	// (0x00078e20) vradio_frequency_info_pane_t1_ParamLimits

0xd451,	// (0x00078e20) vradio_frequency_info_pane_t1

0x52a8,	// (0x00070c77) vradio_tuning_pane_g1

0x52b3,	// (0x00070c82) vradio_tuning_pane_t1

0x9508,	// (0x00074ed7) area_side_right_pane_ParamLimits

0x9508,	// (0x00074ed7) area_side_right_pane

0xc906,	// (0x000782d5) status_small_pane_g1

0xc90e,	// (0x000782dd) status_small_pane_g2

0xc917,	// (0x000782e6) status_small_pane_g3

0xc920,	// (0x000782ef) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0007afc3) status_small_pane_g

0xc929,	// (0x000782f8) status_small_pane_t1

0x9558,	// (0x00074f27) main_video3_pane

0xd465,	// (0x00078e34) cams_zoom_vslider_pane

0xd475,	// (0x00078e44) image3_wide_pane_ParamLimits

0xd475,	// (0x00078e44) image3_wide_pane

0xd48f,	// (0x00078e5e) image3_wide_small_pane

0xd49b,	// (0x00078e6a) main_video3_pane_g1_ParamLimits

0xd49b,	// (0x00078e6a) main_video3_pane_g1

0xd4b7,	// (0x00078e86) main_video3_pane_g2_ParamLimits

0xd4b7,	// (0x00078e86) main_video3_pane_g2

0x0001,

0xf844,	// (0x0007b213) main_video3_pane_g_ParamLimits

0xf844,	// (0x0007b213) main_video3_pane_g

0xd4d3,	// (0x00078ea2) main_video3_pane_t1_ParamLimits

0xd4d3,	// (0x00078ea2) main_video3_pane_t1

0xd4fe,	// (0x00078ecd) main_video3_pane_t2_ParamLimits

0xd4fe,	// (0x00078ecd) main_video3_pane_t2

0xd529,	// (0x00078ef8) main_video3_pane_t3_ParamLimits

0xd529,	// (0x00078ef8) main_video3_pane_t3

0x0002,

0xf849,	// (0x0007b218) main_video3_pane_t_ParamLimits

0xf849,	// (0x0007b218) main_video3_pane_t

0xd556,	// (0x00078f25) cams_zoom_vslider_pane_g1

0xd55f,	// (0x00078f2e) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0007b21f) cams_zoom_vslider_pane_g

0xd567,	// (0x00078f36) small_slider_vertical_pane

0xcd5f,	// (0x0007872e) small_slider_vertical_pane_g1

0xcd5f,	// (0x0007872e) small_slider_vertical_pane_g2

0xd56f,	// (0x00078f3e) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0007b224) small_slider_vertical_pane_g

0x9558,	// (0x00074f27) main_hwr_training_pane

0xd578,	// (0x00078f47) hwr_training_instruct_pane_ParamLimits

0xd578,	// (0x00078f47) hwr_training_instruct_pane

0x52c2,	// (0x00070c91) hwr_training_navi_pane_ParamLimits

0x52c2,	// (0x00070c91) hwr_training_navi_pane

0x52e1,	// (0x00070cb0) hwr_training_write_pane_ParamLimits

0x52e1,	// (0x00070cb0) hwr_training_write_pane

0x94d2,	// (0x00074ea1) bg_frame_shadow_pane

0xd5af,	// (0x00078f7e) hwr_training_write_pane_g1

0xd5b7,	// (0x00078f86) hwr_training_write_pane_g2

0xd5bf,	// (0x00078f8e) hwr_training_write_pane_g3

0xd5c7,	// (0x00078f96) hwr_training_write_pane_g4

0xd5cf,	// (0x00078f9e) hwr_training_write_pane_g5

0xd5d7,	// (0x00078fa6) hwr_training_write_pane_g6

0xd5df,	// (0x00078fae) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0007b22b) hwr_training_write_pane_g

0x9a56,	// (0x00075425) hwr_training_navi_pane_g1_ParamLimits

0x9a56,	// (0x00075425) hwr_training_navi_pane_g1

0x9a68,	// (0x00075437) hwr_training_navi_pane_g2_ParamLimits

0x9a68,	// (0x00075437) hwr_training_navi_pane_g2

0x9a7a,	// (0x00075449) hwr_training_navi_pane_g3_ParamLimits

0x9a7a,	// (0x00075449) hwr_training_navi_pane_g3

0x9a8a,	// (0x00075459) hwr_training_navi_pane_g4_ParamLimits

0x9a8a,	// (0x00075459) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0007b23a) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0007b23a) hwr_training_navi_pane_g

0x9a97,	// (0x00075466) hwr_training_navi_pane_t1

0x5329,	// (0x00070cf8) list_single_hwr_training_instruct_pane_ParamLimits

0x5329,	// (0x00070cf8) list_single_hwr_training_instruct_pane

0xd5e7,	// (0x00078fb6) list_single_hwr_training_instruct_pane_t1

0xcc9f,	// (0x0007866e) bg_frame_shadow_pane_g1

0xd5f6,	// (0x00078fc5) bg_frame_shadow_pane_g2

0xd5fe,	// (0x00078fcd) bg_frame_shadow_pane_g3

0xd606,	// (0x00078fd5) bg_frame_shadow_pane_g4

0xd60e,	// (0x00078fdd) bg_frame_shadow_pane_g5

0xd616,	// (0x00078fe5) bg_frame_shadow_pane_g6

0xd61e,	// (0x00078fed) bg_frame_shadow_pane_g7

0xa4f4,	// (0x00075ec3) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0007b245) bg_frame_shadow_pane_g

0x9558,	// (0x00074f27) main_video_tele_dialer_pane

0x533e,	// (0x00070d0d) aid_size_cell_video_keypad_ParamLimits

0x533e,	// (0x00070d0d) aid_size_cell_video_keypad

0x5358,	// (0x00070d27) grid_video_dialer_keypad_pane_ParamLimits

0x5358,	// (0x00070d27) grid_video_dialer_keypad_pane

0x53a4,	// (0x00070d73) video_down_pane_cp_ParamLimits

0x53a4,	// (0x00070d73) video_down_pane_cp

0x53d6,	// (0x00070da5) cell_video_dialer_keypad_pane_ParamLimits

0x53d6,	// (0x00070da5) cell_video_dialer_keypad_pane

0xd626,	// (0x00078ff5) bg_button_pane_cp08_ParamLimits

0xd626,	// (0x00078ff5) bg_button_pane_cp08

0x53f8,	// (0x00070dc7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x53f8,	// (0x00070dc7) cell_video_dialer_keypad_pane_g1

0x4aac,	// (0x0007047b) mup3_rocker2_pane_ParamLimits

0x4aac,	// (0x0007047b) mup3_rocker2_pane

0xcd5f,	// (0x0007872e) mup3_rocker2_pane_g1

0x35c5,	// (0x0006ef94) main_dialer2_pane

0x9558,	// (0x00074f27) main_mp4_pane

0x9ac3,	// (0x00075492) main_mp4_pane_g1_ParamLimits

0x9ac3,	// (0x00075492) main_mp4_pane_g1

0x9ac3,	// (0x00075492) main_mp4_pane_g2_ParamLimits

0x9ac3,	// (0x00075492) main_mp4_pane_g2

0x542f,	// (0x00070dfe) main_mp4_pane_g3_ParamLimits

0x542f,	// (0x00070dfe) main_mp4_pane_g3

0x9ad1,	// (0x000754a0) main_mp4_pane_g4_ParamLimits

0x9ad1,	// (0x000754a0) main_mp4_pane_g4

0x9aff,	// (0x000754ce) main_mp4_pane_g5_ParamLimits

0x9aff,	// (0x000754ce) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0007b265) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0007b265) main_mp4_pane_g

0x9b73,	// (0x00075542) main_mp4_pane_t1_ParamLimits

0x9b73,	// (0x00075542) main_mp4_pane_t1

0x9bcf,	// (0x0007559e) main_mp4_pane_t2_ParamLimits

0x9bcf,	// (0x0007559e) main_mp4_pane_t2

0xd632,	// (0x00079001) main_mp4_pane_t3_ParamLimits

0xd632,	// (0x00079001) main_mp4_pane_t3

0x9c21,	// (0x000755f0) main_mp4_pane_t4_ParamLimits

0x9c21,	// (0x000755f0) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007b276) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007b276) main_mp4_pane_t

0x9c65,	// (0x00075634) mp4_progress_pane_ParamLimits

0x9c65,	// (0x00075634) mp4_progress_pane

0x9caf,	// (0x0007567e) mp4_rocker_pane_ParamLimits

0x9caf,	// (0x0007567e) mp4_rocker_pane

0xd660,	// (0x0007902f) mp4_progress_pane_t1

0xd679,	// (0x00079048) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007b27f) mp4_progress_pane_t

0xd692,	// (0x00079061) mup_progress_pane_cp04

0xd6a5,	// (0x00079074) mp4_rocker_pane_g1

0x546b,	// (0x00070e3a) aid_cell_size_keypad2_ParamLimits

0x546b,	// (0x00070e3a) aid_cell_size_keypad2

0x5481,	// (0x00070e50) dialer2_ne_pane_ParamLimits

0x5481,	// (0x00070e50) dialer2_ne_pane

0x549b,	// (0x00070e6a) grid_dialer2_keypad_pane_ParamLimits

0x549b,	// (0x00070e6a) grid_dialer2_keypad_pane

0xcb44,	// (0x00078513) bg_popup_call_pane_cp07_ParamLimits

0xcb44,	// (0x00078513) bg_popup_call_pane_cp07

0x54b7,	// (0x00070e86) dialer2_ne_pane_t1_ParamLimits

0x54b7,	// (0x00070e86) dialer2_ne_pane_t1

0x54f2,	// (0x00070ec1) cell_dialer2_keypad_pane_ParamLimits

0x54f2,	// (0x00070ec1) cell_dialer2_keypad_pane

0xd6c1,	// (0x00079090) bg_button_pane_pane_cp04_ParamLimits

0xd6c1,	// (0x00079090) bg_button_pane_pane_cp04

0x5514,	// (0x00070ee3) cell_dialer2_keypad_pane_g1_ParamLimits

0x5514,	// (0x00070ee3) cell_dialer2_keypad_pane_g1

0x1351,	// (0x0006cd20) aid_placing_vt_set_content_ParamLimits

0x1351,	// (0x0006cd20) aid_placing_vt_set_content

0x1379,	// (0x0006cd48) aid_placing_vt_set_title_ParamLimits

0x1379,	// (0x0006cd48) aid_placing_vt_set_title

0x9558,	// (0x00074f27) main_image3_pane

0x55da,	// (0x00070fa9) area_side_right_pane_cp01_ParamLimits

0x55da,	// (0x00070fa9) area_side_right_pane_cp01

0x9ac3,	// (0x00075492) main_image3_pane_g1_ParamLimits

0x9ac3,	// (0x00075492) main_image3_pane_g1

0x55f1,	// (0x00070fc0) main_image3_pane_g2_ParamLimits

0x55f1,	// (0x00070fc0) main_image3_pane_g2

0x5619,	// (0x00070fe8) main_image3_pane_g3_ParamLimits

0x5619,	// (0x00070fe8) main_image3_pane_g3

0x5643,	// (0x00071012) main_image3_pane_g4_ParamLimits

0x5643,	// (0x00071012) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007b28e) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007b28e) main_image3_pane_g

0x566d,	// (0x0007103c) main_image3_pane_t1_ParamLimits

0x566d,	// (0x0007103c) main_image3_pane_t1

0x56c5,	// (0x00071094) main_image3_pane_t2_ParamLimits

0x56c5,	// (0x00071094) main_image3_pane_t2

0x5717,	// (0x000710e6) main_image3_pane_t3_ParamLimits

0x5717,	// (0x000710e6) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007b297) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007b297) main_image3_pane_t

0xa542,	// (0x00075f11) grid_sctrl_middle_pane_cp01_ParamLimits

0xa542,	// (0x00075f11) grid_sctrl_middle_pane_cp01

0x579f,	// (0x0007116e) cell_sctrl_middle_pane_cp01_ParamLimits

0x579f,	// (0x0007116e) cell_sctrl_middle_pane_cp01

0x57bc,	// (0x0007118b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57bc,	// (0x0007118b) cell_sctrl_middle_pane_cp01_g1

0x9558,	// (0x00074f27) main_call4_pane

0x57d2,	// (0x000711a1) aid_size_button_call4_ParamLimits

0x57d2,	// (0x000711a1) aid_size_button_call4

0x5805,	// (0x000711d4) call4_windows_pane_ParamLimits

0x5805,	// (0x000711d4) call4_windows_pane

0x5824,	// (0x000711f3) grid_call4_button_pane_ParamLimits

0x5824,	// (0x000711f3) grid_call4_button_pane

0x5857,	// (0x00071226) call4_windows_conf_pane

0x586e,	// (0x0007123d) popup_call4_audio_first_window_ParamLimits

0x586e,	// (0x0007123d) popup_call4_audio_first_window

0x58be,	// (0x0007128d) popup_call4_audio_second_window_ParamLimits

0x58be,	// (0x0007128d) popup_call4_audio_second_window

0x58d5,	// (0x000712a4) popup_call4_audio_wait_window_ParamLimits

0x58d5,	// (0x000712a4) popup_call4_audio_wait_window

0x58e3,	// (0x000712b2) cell_call4_button_pane_ParamLimits

0x58e3,	// (0x000712b2) cell_call4_button_pane

0x5908,	// (0x000712d7) bg_button_pane_cp09_ParamLimits

0x5908,	// (0x000712d7) bg_button_pane_cp09

0x5914,	// (0x000712e3) cell_call4_button_pane_g1_ParamLimits

0x5914,	// (0x000712e3) cell_call4_button_pane_g1

0x593a,	// (0x00071309) cell_call4_button_pane_t1_ParamLimits

0x593a,	// (0x00071309) cell_call4_button_pane_t1

0xd6d5,	// (0x000790a4) popup_call4_audio_conf_window_ParamLimits

0xd6d5,	// (0x000790a4) popup_call4_audio_conf_window

0x4b0c,	// (0x000704db) mup3_progress_pane_t1_ParamLimits

0x4b2b,	// (0x000704fa) mup3_progress_pane_t2_ParamLimits

0xd05d,	// (0x00078a2c) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0007b167) mup3_progress_pane_t_ParamLimits

0xd07a,	// (0x00078a49) mup_progress_pane_cp03_ParamLimits

0x5108,	// (0x00070ad7) mup3_control_keys_pane_g4_copy1

0x9c93,	// (0x00075662) mp4_rocker2_pane_ParamLimits

0x9c93,	// (0x00075662) mp4_rocker2_pane

0xd6e9,	// (0x000790b8) mp4_rocker2_pane_g1

0xd6f1,	// (0x000790c0) mp4_rocker2_pane_g2

0x9d33,	// (0x00075702) mp4_rocker2_pane_g3

0x9d3b,	// (0x0007570a) mp4_rocker2_pane_g4

0x9d43,	// (0x00075712) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007b2a0) mp4_rocker2_pane_g

0x9558,	// (0x00074f27) main_camera4_pane

0x9558,	// (0x00074f27) main_video4_pane

0x5372,	// (0x00070d41) main_video_tele_dialer_pane_t1_ParamLimits

0x5372,	// (0x00070d41) main_video_tele_dialer_pane_t1

0x538b,	// (0x00070d5a) main_video_tele_dialer_pane_t2_ParamLimits

0x538b,	// (0x00070d5a) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0007b256) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0007b256) main_video_tele_dialer_pane_t

0x5978,	// (0x00071347) cam4_autofocus_pane_ParamLimits

0x5978,	// (0x00071347) cam4_autofocus_pane

0x598e,	// (0x0007135d) cam4_image_uncrop_pane_ParamLimits

0x598e,	// (0x0007135d) cam4_image_uncrop_pane

0x59a8,	// (0x00071377) cam4_indicators_pane_ParamLimits

0x59a8,	// (0x00071377) cam4_indicators_pane

0x59d3,	// (0x000713a2) main_camera4_pane_g1_ParamLimits

0x59d3,	// (0x000713a2) main_camera4_pane_g1

0x59e5,	// (0x000713b4) main_camera4_pane_g2_ParamLimits

0x59e5,	// (0x000713b4) main_camera4_pane_g2

0x59f8,	// (0x000713c7) main_camera4_pane_g3_ParamLimits

0x59f8,	// (0x000713c7) main_camera4_pane_g3

0x5a0b,	// (0x000713da) main_camera4_pane_g4_ParamLimits

0x5a0b,	// (0x000713da) main_camera4_pane_g4

0x5a1e,	// (0x000713ed) main_camera4_pane_g5_ParamLimits

0x5a1e,	// (0x000713ed) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007b2ab) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007b2ab) main_camera4_pane_g

0x5a42,	// (0x00071411) main_camera4_pane_t1_ParamLimits

0x5a42,	// (0x00071411) main_camera4_pane_t1

0x9d67,	// (0x00075736) bg_tb_trans_pane_cp06

0x9d7d,	// (0x0007574c) cam4_indicators_pane_g1

0x9d8e,	// (0x0007575d) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007b2c6) cam4_indicators_pane_g

0x9dac,	// (0x0007577b) cam4_indicators_pane_t1

0x5aa6,	// (0x00071475) main_video4_pane_g1_ParamLimits

0x5aa6,	// (0x00071475) main_video4_pane_g1

0x5ab5,	// (0x00071484) main_video4_pane_g2_ParamLimits

0x5ab5,	// (0x00071484) main_video4_pane_g2

0x5ac4,	// (0x00071493) main_video4_pane_g3_ParamLimits

0x5ac4,	// (0x00071493) main_video4_pane_g3

0x5ad3,	// (0x000714a2) main_video4_pane_g4_ParamLimits

0x5ad3,	// (0x000714a2) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007b2cd) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007b2cd) main_video4_pane_g

0x5af1,	// (0x000714c0) vid4_indicators_pane_ParamLimits

0x5af1,	// (0x000714c0) vid4_indicators_pane

0x5b1f,	// (0x000714ee) video4_image_uncrop_cif_pane_ParamLimits

0x5b1f,	// (0x000714ee) video4_image_uncrop_cif_pane

0x5b39,	// (0x00071508) video4_image_uncrop_nhd_pane_ParamLimits

0x5b39,	// (0x00071508) video4_image_uncrop_nhd_pane

0x598e,	// (0x0007135d) video4_image_uncrop_vga_pane_ParamLimits

0x598e,	// (0x0007135d) video4_image_uncrop_vga_pane

0x954a,	// (0x00074f19) bg_tb_trans_pane_cp07

0x9dd8,	// (0x000757a7) vid4_indicators_pane_g1

0x9dec,	// (0x000757bb) vid4_indicators_pane_g2

0x9e00,	// (0x000757cf) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007b2d8) vid4_indicators_pane_g

0x9e2f,	// (0x000757fe) vid4_indicators_pane_t1

0x5b4d,	// (0x0007151c) cam4_autofocus_pane_g1

0x5b55,	// (0x00071524) cam4_autofocus_pane_g2

0x5b5d,	// (0x0007152c) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007b2e3) cam4_autofocus_pane_g

0x5b65,	// (0x00071534) cam4_autofocus_pane_g3_copy1

0x53ba,	// (0x00070d89) video_down_pane_cp_t1

0x53c8,	// (0x00070d97) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0007b25b) video_down_pane_cp_t

0x954a,	// (0x00074f19) popup_vitu2_window_ParamLimits

0x954a,	// (0x00074f19) popup_vitu2_window

0x5b6d,	// (0x0007153c) aid_size_cell2_itu2_ParamLimits

0x5b6d,	// (0x0007153c) aid_size_cell2_itu2

0x5b93,	// (0x00071562) aid_size_cell_itu2_ParamLimits

0x5b93,	// (0x00071562) aid_size_cell_itu2

0x5bef,	// (0x000715be) bg_popup_window_pane_cp09_ParamLimits

0x5bef,	// (0x000715be) bg_popup_window_pane_cp09

0x5bfd,	// (0x000715cc) field_vitu2_entry_pane_ParamLimits

0x5bfd,	// (0x000715cc) field_vitu2_entry_pane

0x5c23,	// (0x000715f2) grid_vitu2_function_pane_ParamLimits

0x5c23,	// (0x000715f2) grid_vitu2_function_pane

0x5c74,	// (0x00071643) grid_vitu2_itu_pane_ParamLimits

0x5c74,	// (0x00071643) grid_vitu2_itu_pane

0x5d0c,	// (0x000716db) cell_vitu2_itu_pane_ParamLimits

0x5d0c,	// (0x000716db) cell_vitu2_itu_pane

0x5d38,	// (0x00071707) cell_vitu2_function_pane_ParamLimits

0x5d38,	// (0x00071707) cell_vitu2_function_pane

0xd70b,	// (0x000790da) bg_popup_call_pane_cp08_ParamLimits

0xd70b,	// (0x000790da) bg_popup_call_pane_cp08

0xd722,	// (0x000790f1) field_vitu2_entry_pane_g1

0xd72e,	// (0x000790fd) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007b2ea) field_vitu2_entry_pane_g

0x5d77,	// (0x00071746) field_vitu2_entry_pane_t1_ParamLimits

0x5d77,	// (0x00071746) field_vitu2_entry_pane_t1

0xa598,	// (0x00075f67) field_vitu2_entry_pane_t2_ParamLimits

0xa598,	// (0x00075f67) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007b2f1) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007b2f1) field_vitu2_entry_pane_t

0x5da7,	// (0x00071776) bg_button_pane_cp010_ParamLimits

0x5da7,	// (0x00071776) bg_button_pane_cp010

0x9e46,	// (0x00075815) cell_vitu2_itu_pane_g1

0x5dc3,	// (0x00071792) cell_vitu2_itu_pane_t1_ParamLimits

0x5dc3,	// (0x00071792) cell_vitu2_itu_pane_t1

0x011d,	// (0x0006baec) cell_vitu2_itu_pane_t2_ParamLimits

0x011d,	// (0x0006baec) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007b2fb) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007b2fb) cell_vitu2_itu_pane_t

0x954a,	// (0x00074f19) bg_button_pane_cp011

0x5e21,	// (0x000717f0) cell_vitu2_function_pane_g1

0x9558,	// (0x00074f27) main_myfav_hc_pane

0x5767,	// (0x00071136) popup_image3_note_pane_ParamLimits

0x5767,	// (0x00071136) popup_image3_note_pane

0x5783,	// (0x00071152) popup_image3_tool_bar_pane_ParamLimits

0x5783,	// (0x00071152) popup_image3_tool_bar_pane

0x01ab,	// (0x0006bb7a) cell_vitu2_itu_pane_t3_ParamLimits

0x01ab,	// (0x0006bb7a) cell_vitu2_itu_pane_t3

0x94d2,	// (0x00074ea1) bg_popup_trans_pane

0xd750,	// (0x0007911f) grid_image3_tool_bar_pane

0xd75a,	// (0x00079129) bg_popup_trans_pane_g1

0xad40,	// (0x0007670f) bg_popup_trans_pane_g2

0xd762,	// (0x00079131) bg_popup_trans_pane_g3

0xd76a,	// (0x00079139) bg_popup_trans_pane_g4

0xd772,	// (0x00079141) bg_popup_trans_pane_g5

0xd77a,	// (0x00079149) bg_popup_trans_pane_g6

0xd782,	// (0x00079151) bg_popup_trans_pane_g7

0xd78a,	// (0x00079159) bg_popup_trans_pane_g8

0xad20,	// (0x000766ef) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007b302) bg_popup_trans_pane_g

0xd792,	// (0x00079161) cell_image3_tool_bar_pane_ParamLimits

0xd792,	// (0x00079161) cell_image3_tool_bar_pane

0xcd5f,	// (0x0007872e) cell_image3_tool_bar_pane_g1

0x94d2,	// (0x00074ea1) bg_popup_trans_pane_cp1

0xd7a6,	// (0x00079175) popup_image3_note_pane_t1

0xd7b4,	// (0x00079183) popup_image3_note_pane_t2

0xd7c2,	// (0x00079191) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007b315) popup_image3_note_pane_t

0xd7d0,	// (0x0007919f) popup_image3_note_pane_t3_copy1

0x5e35,	// (0x00071804) bg_myfav_hc_instruction_pane_ParamLimits

0x5e35,	// (0x00071804) bg_myfav_hc_instruction_pane

0x5e49,	// (0x00071818) cell_myfav_contact_pane_ParamLimits

0x5e49,	// (0x00071818) cell_myfav_contact_pane

0x5e67,	// (0x00071836) cell_myfav_contact_pane_cp1_ParamLimits

0x5e67,	// (0x00071836) cell_myfav_contact_pane_cp1

0x5e7f,	// (0x0007184e) cell_myfav_contact_pane_cp2_ParamLimits

0x5e7f,	// (0x0007184e) cell_myfav_contact_pane_cp2

0x5e97,	// (0x00071866) cell_myfav_contact_pane_cp3_ParamLimits

0x5e97,	// (0x00071866) cell_myfav_contact_pane_cp3

0x5eae,	// (0x0007187d) cell_myfav_contact_pane_cp4_ParamLimits

0x5eae,	// (0x0007187d) cell_myfav_contact_pane_cp4

0x5ec6,	// (0x00071895) cell_myfav_contact_pane_cp5_ParamLimits

0x5ec6,	// (0x00071895) cell_myfav_contact_pane_cp5

0x5eda,	// (0x000718a9) cell_myfav_contact_pane_cp6_ParamLimits

0x5eda,	// (0x000718a9) cell_myfav_contact_pane_cp6

0x5ef0,	// (0x000718bf) cell_myfav_contact_pane_cp7_ParamLimits

0x5ef0,	// (0x000718bf) cell_myfav_contact_pane_cp7

0xd7de,	// (0x000791ad) listscroll_gen_pane_cp05

0x5f0a,	// (0x000718d9) main_myfav_hc_pane_g1_ParamLimits

0x5f0a,	// (0x000718d9) main_myfav_hc_pane_g1

0x5f24,	// (0x000718f3) main_myfav_hc_pane_g2_ParamLimits

0x5f24,	// (0x000718f3) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007b31c) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007b31c) main_myfav_hc_pane_g

0x5f56,	// (0x00071925) main_myfav_hc_pane_t1_ParamLimits

0x5f56,	// (0x00071925) main_myfav_hc_pane_t1

0xd7e7,	// (0x000791b6) main_myfav_hc_pane_t2_ParamLimits

0xd7e7,	// (0x000791b6) main_myfav_hc_pane_t2

0xd7f9,	// (0x000791c8) main_myfav_hc_pane_t3_ParamLimits

0xd7f9,	// (0x000791c8) main_myfav_hc_pane_t3

0x5f6d,	// (0x0007193c) main_myfav_hc_pane_t4_ParamLimits

0x5f6d,	// (0x0007193c) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007b323) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007b323) main_myfav_hc_pane_t

0xcd5f,	// (0x0007872e) bg_myfav_hc_instruction_pane_g1

0xd80b,	// (0x000791da) cell_myfav_contact_pane_g1_ParamLimits

0xd80b,	// (0x000791da) cell_myfav_contact_pane_g1

0xd80b,	// (0x000791da) cell_myfav_contact_pane_g2_ParamLimits

0xd80b,	// (0x000791da) cell_myfav_contact_pane_g2

0xd817,	// (0x000791e6) cell_myfav_contact_pane_g3_ParamLimits

0xd817,	// (0x000791e6) cell_myfav_contact_pane_g3

0xd047,	// (0x00078a16) cell_myfav_contact_pane_g4_ParamLimits

0xd047,	// (0x00078a16) cell_myfav_contact_pane_g4

0xd824,	// (0x000791f3) cell_myfav_contact_pane_g5_ParamLimits

0xd824,	// (0x000791f3) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007b32e) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007b32e) cell_myfav_contact_pane_g

0x5f3e,	// (0x0007190d) main_myfav_hc_pane_g3_ParamLimits

0x5f3e,	// (0x0007190d) main_myfav_hc_pane_g3

0x0380,	// (0x0006bd4f) popup_adpt_find_window

0x5f95,	// (0x00071964) afind_page_pane_ParamLimits

0x5f95,	// (0x00071964) afind_page_pane

0x5faa,	// (0x00071979) aid_size_cell_afind_ParamLimits

0x5faa,	// (0x00071979) aid_size_cell_afind

0x5fc8,	// (0x00071997) bg_popup_sub_pane_cp09_ParamLimits

0x5fc8,	// (0x00071997) bg_popup_sub_pane_cp09

0x5fd5,	// (0x000719a4) find_pane_cp01_ParamLimits

0x5fd5,	// (0x000719a4) find_pane_cp01

0xd830,	// (0x000791ff) grid_afind_control_pane_ParamLimits

0xd830,	// (0x000791ff) grid_afind_control_pane

0x5fe2,	// (0x000719b1) grid_afind_pane_ParamLimits

0x5fe2,	// (0x000719b1) grid_afind_pane

0x6004,	// (0x000719d3) cell_afind_pane_ParamLimits

0x6004,	// (0x000719d3) cell_afind_pane

0xcd5f,	// (0x0007872e) afind_page_pane_g1

0x606b,	// (0x00071a3a) afind_page_pane_g2

0x6074,	// (0x00071a43) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007b339) afind_page_pane_g

0x607d,	// (0x00071a4c) afind_page_pane_t1

0xd844,	// (0x00079213) cell_afind_grid_control_pane_ParamLimits

0xd844,	// (0x00079213) cell_afind_grid_control_pane

0xd6c1,	// (0x00079090) bg_button_pane_cp69_ParamLimits

0xd6c1,	// (0x00079090) bg_button_pane_cp69

0x609d,	// (0x00071a6c) cell_afind_pane_g1_ParamLimits

0x609d,	// (0x00071a6c) cell_afind_pane_g1

0x60aa,	// (0x00071a79) cell_afind_pane_t1_ParamLimits

0x60aa,	// (0x00071a79) cell_afind_pane_t1

0xab39,	// (0x00076508) bg_button_pane_cp72

0xd853,	// (0x00079222) cell_afind_grid_control_pane_g1

0x3073,	// (0x0006ea42) aid_image_placing_area_ParamLimits

0x3073,	// (0x0006ea42) aid_image_placing_area

0xd370,	// (0x00078d3f) field_vitu_entry_pane_g1_ParamLimits

0xd370,	// (0x00078d3f) field_vitu_entry_pane_g1

0xd37c,	// (0x00078d4b) field_vitu_entry_pane_g2_ParamLimits

0xd37c,	// (0x00078d4b) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0007b1e6) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0007b1e6) field_vitu_entry_pane_g

0x51cf,	// (0x00070b9e) cell_vitu_itu_pane_g1_ParamLimits

0x5211,	// (0x00070be0) cell_vitu_itu_pane_t3_ParamLimits

0x5211,	// (0x00070be0) cell_vitu_itu_pane_t3

0xd660,	// (0x0007902f) mp4_progress_pane_t1_ParamLimits

0xd679,	// (0x00079048) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007b27f) mp4_progress_pane_t_ParamLimits

0xd692,	// (0x00079061) mup_progress_pane_cp04_ParamLimits

0x5f81,	// (0x00071950) main_myfav_hc_pane_t5_ParamLimits

0x5f81,	// (0x00071950) main_myfav_hc_pane_t5

0x94f8,	// (0x00074ec7) aid_zoom_text_primary

0x0380,	// (0x0006bd4f) popup_adpt_find_window_ParamLimits

0x954a,	// (0x00074f19) main_cam_set_pane

0x59bf,	// (0x0007138e) cam4_zoom_pane_ParamLimits

0x59bf,	// (0x0007138e) cam4_zoom_pane

0x60bc,	// (0x00071a8b) main_cam_set_pane_g1_ParamLimits

0x60bc,	// (0x00071a8b) main_cam_set_pane_g1

0x60ca,	// (0x00071a99) main_cam_set_pane_g2_ParamLimits

0x60ca,	// (0x00071a99) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007b340) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007b340) main_cam_set_pane_g

0x60eb,	// (0x00071aba) main_cam_set_pane_t1_ParamLimits

0x60eb,	// (0x00071aba) main_cam_set_pane_t1

0x6106,	// (0x00071ad5) main_cset_listscroll_pane_ParamLimits

0x6106,	// (0x00071ad5) main_cset_listscroll_pane

0x6126,	// (0x00071af5) main_cset_slider_pane_ParamLimits

0x6126,	// (0x00071af5) main_cset_slider_pane

0xd864,	// (0x00079233) main_cset_list_pane_ParamLimits

0xd864,	// (0x00079233) main_cset_list_pane

0xd874,	// (0x00079243) scroll_pane_cp028

0x614c,	// (0x00071b1b) aid_area_touch_slider

0x6168,	// (0x00071b37) cset_slider_pane

0x6192,	// (0x00071b61) main_cset_slider_pane_g1

0x61a7,	// (0x00071b76) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007b345) main_cset_slider_pane_g

0xd8ad,	// (0x0007927c) main_cset_slider_pane_t1

0x6263,	// (0x00071c32) main_cset_slider_pane_t2

0x627d,	// (0x00071c4c) main_cset_slider_pane_t3

0x6297,	// (0x00071c66) main_cset_slider_pane_t4

0x62b1,	// (0x00071c80) main_cset_slider_pane_t5

0x62cb,	// (0x00071c9a) main_cset_slider_pane_t6

0x62e0,	// (0x00071caf) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007b36a) main_cset_slider_pane_t

0x63e4,	// (0x00071db3) cset_list_set_pane_ParamLimits

0x63e4,	// (0x00071db3) cset_list_set_pane

0x63f6,	// (0x00071dc5) aid_position_infowindow_above

0x63fe,	// (0x00071dcd) aid_position_infowindow_below

0xa5b5,	// (0x00075f84) cset_list_set_pane_g1_ParamLimits

0xa5b5,	// (0x00075f84) cset_list_set_pane_g1

0xa5c1,	// (0x00075f90) cset_list_set_pane_g3_ParamLimits

0xa5c1,	// (0x00075f90) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007b389) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007b389) cset_list_set_pane_g

0xa5d0,	// (0x00075f9f) cset_list_set_pane_t1_ParamLimits

0xa5d0,	// (0x00075f9f) cset_list_set_pane_t1

0xa542,	// (0x00075f11) list_highlight_pane_cp021_ParamLimits

0xa542,	// (0x00075f11) list_highlight_pane_cp021

0xb689,	// (0x00077058) cset_slider_pane_g1

0xb69b,	// (0x0007706a) cset_slider_pane_g2

0xb692,	// (0x00077061) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007b38e) cset_slider_pane_g

0x9e58,	// (0x00075827) aid_area_touch_cam4_zoom

0x9e60,	// (0x0007582f) cam4_zoom_cont_pane

0x9e68,	// (0x00075837) cam4_zoom_pane_g1

0x9e70,	// (0x0007583f) cam4_zoom_pane_g2

0x6406,	// (0x00071dd5) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007b395) cam4_zoom_pane_g

0x9e78,	// (0x00075847) cam4_zoom_cont_pane_g1

0x9e81,	// (0x00075850) cam4_zoom_cont_pane_g2

0x9e8a,	// (0x00075859) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007b39c) cam4_zoom_cont_pane_g

0x57f0,	// (0x000711bf) call4_image_pane_ParamLimits

0x57f0,	// (0x000711bf) call4_image_pane

0x5857,	// (0x00071226) call4_windows_conf_pane_ParamLimits

0x589c,	// (0x0007126b) popup_call4_audio_in_window_ParamLimits

0x589c,	// (0x0007126b) popup_call4_audio_in_window

0x94d2,	// (0x00074ea1) bg_popup_call2_act_pane_cp02

0xd6cd,	// (0x0007909c) call4_list_conf_pane

0xcd5f,	// (0x0007872e) call4_image_pane_g1

0xcd5f,	// (0x0007872e) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0007b0a7) call4_image_pane_g

0xd94d,	// (0x0007931c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd94d,	// (0x0007931c) list_single_graphic_popup_conf4_pane

0x94d2,	// (0x00074ea1) list_highlight_pane_cp022

0xd960,	// (0x0007932f) list_single_graphic_popup_conf4_pane_g1

0xb25a,	// (0x00076c29) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007b3a3) list_single_graphic_popup_conf4_pane_g

0xd968,	// (0x00079337) list_single_graphic_popup_conf4_pane_t1

0x149d,	// (0x0006ce6c) popup_vtel_slider_window_ParamLimits

0x149d,	// (0x0006ce6c) popup_vtel_slider_window

0xd6af,	// (0x0007907e) dialer2_ne_pane_t2_ParamLimits

0xd6af,	// (0x0007907e) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007b284) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007b284) dialer2_ne_pane_t

0xcb44,	// (0x00078513) bg_popup_sub_pane_cp010_ParamLimits

0xcb44,	// (0x00078513) bg_popup_sub_pane_cp010

0x640e,	// (0x00071ddd) popup_vtel_slider_window_g1_ParamLimits

0x640e,	// (0x00071ddd) popup_vtel_slider_window_g1

0x6421,	// (0x00071df0) popup_vtel_slider_window_g2_ParamLimits

0x6421,	// (0x00071df0) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007b3a8) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007b3a8) popup_vtel_slider_window_g

0x6477,	// (0x00071e46) vtel_slider_pane_ParamLimits

0x6477,	// (0x00071e46) vtel_slider_pane

0x6499,	// (0x00071e68) vtel_slider_pane_g1_ParamLimits

0x6499,	// (0x00071e68) vtel_slider_pane_g1

0x64ad,	// (0x00071e7c) vtel_slider_pane_g2_ParamLimits

0x64ad,	// (0x00071e7c) vtel_slider_pane_g2

0x64c5,	// (0x00071e94) vtel_slider_pane_g3_ParamLimits

0x64c5,	// (0x00071e94) vtel_slider_pane_g3

0x6499,	// (0x00071e68) vtel_slider_pane_g4_ParamLimits

0x6499,	// (0x00071e68) vtel_slider_pane_g4

0x64db,	// (0x00071eaa) vtel_slider_pane_g5_ParamLimits

0x64db,	// (0x00071eaa) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007b3b1) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007b3b1) vtel_slider_pane_g

0x954a,	// (0x00074f19) main_gallery2_pane

0x5bbf,	// (0x0007158e) aid_size_row_itut2_dropdow_list_ParamLimits

0x5bbf,	// (0x0007158e) aid_size_row_itut2_dropdow_list

0x5c4b,	// (0x0007161a) grid_vitu2_function_top_pane_ParamLimits

0x5c4b,	// (0x0007161a) grid_vitu2_function_top_pane

0x5cb5,	// (0x00071684) popup_vitu2_dropdown_list_window_ParamLimits

0x5cb5,	// (0x00071684) popup_vitu2_dropdown_list_window

0x5cde,	// (0x000716ad) popup_vitu2_match_list_window

0x64ff,	// (0x00071ece) cell_vitu2_function_top_pane_ParamLimits

0x64ff,	// (0x00071ece) cell_vitu2_function_top_pane

0x6517,	// (0x00071ee6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6517,	// (0x00071ee6) cell_vitu2_function_top_pane_cp01

0x6533,	// (0x00071f02) cell_vitu2_function_top_wide_pane_ParamLimits

0x6533,	// (0x00071f02) cell_vitu2_function_top_wide_pane

0x954a,	// (0x00074f19) bg_button_pane_cp012

0x654f,	// (0x00071f1e) cell_vitu2_function_top_pane_g1

0x9e93,	// (0x00075862) bg_button_pane_cp013_ParamLimits

0x9e93,	// (0x00075862) bg_button_pane_cp013

0x6563,	// (0x00071f32) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6563,	// (0x00071f32) cell_vitu2_function_top_wide_pane_g1

0x954a,	// (0x00074f19) bg_popup_sub_pane_cp20

0x657b,	// (0x00071f4a) list_vitu2_match_list_pane

0xd75a,	// (0x00079129) bg_popup_sub_pane_cp20_g1

0xd762,	// (0x00079131) bg_popup_sub_pane_cp20_g2

0xad40,	// (0x0007670f) bg_popup_sub_pane_cp20_g3

0xd76a,	// (0x00079139) bg_popup_sub_pane_cp20_g4

0xad20,	// (0x000766ef) bg_popup_sub_pane_cp20_g5

0xd97e,	// (0x0007934d) bg_popup_sub_pane_cp20_g6

0xd77a,	// (0x00079149) bg_popup_sub_pane_cp20_g7

0xd782,	// (0x00079151) bg_popup_sub_pane_cp20_g8

0xd78a,	// (0x00079159) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007b3bc) bg_popup_sub_pane_cp20_g

0x9eaf,	// (0x0007587e) list_vitu2_match_list_item_pane_ParamLimits

0x9eaf,	// (0x0007587e) list_vitu2_match_list_item_pane

0x9ec1,	// (0x00075890) list_vitu2_match_list_item_pane_t1

0x9558,	// (0x00074f27) bg_popup_sub_pane_cp21

0x9ecf,	// (0x0007589e) grid_vitu2_dropdown_list_pane

0x65e9,	// (0x00071fb8) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x65e9,	// (0x00071fb8) cell_vitu2_dropdown_list_char_pane

0x660a,	// (0x00071fd9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x660a,	// (0x00071fd9) cell_vitu2_dropdown_list_ctrl_pane

0xd986,	// (0x00079355) cell_vitu2_dropdown_list_char_pane_g1

0xd98f,	// (0x0007935e) cell_vitu2_dropdown_list_char_pane_g2

0xd998,	// (0x00079367) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007b3d9) cell_vitu2_dropdown_list_char_pane_g

0x6636,	// (0x00072005) cell_vitu2_dropdown_list_char_pane_t1

0x6644,	// (0x00072013) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6644,	// (0x00072013) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6651,	// (0x00072020) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6651,	// (0x00072020) cell_vitu2_dropdown_list_ctrl_pane_g2

0x665e,	// (0x0007202d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x665e,	// (0x0007202d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x666b,	// (0x0007203a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x666b,	// (0x0007203a) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9d67,	// (0x00075736) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9d67,	// (0x00075736) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007b3e0) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007b3e0) cell_vitu2_dropdown_list_ctrl_pane_g

0x6687,	// (0x00072056) aid_size_cell_gallery2_ParamLimits

0x6687,	// (0x00072056) aid_size_cell_gallery2

0x66a5,	// (0x00072074) grid_gallery2_pane_ParamLimits

0x66a5,	// (0x00072074) grid_gallery2_pane

0x66bf,	// (0x0007208e) scroll_pane_cp029_ParamLimits

0x66bf,	// (0x0007208e) scroll_pane_cp029

0x66d0,	// (0x0007209f) cell_gallery2_pane_ParamLimits

0x66d0,	// (0x0007209f) cell_gallery2_pane

0xd9a1,	// (0x00079370) cell_gallery2_pane_g2

0x672f,	// (0x000720fe) cell_gallery2_pane_g3

0xd9a9,	// (0x00079378) cell_gallery2_pane_g4

0xd9b1,	// (0x00079380) cell_gallery2_pane_g5

0xaae7,	// (0x000764b6) grid_highlight_pane_cp10

0x5cde,	// (0x000716ad) popup_vitu2_match_list_window_ParamLimits

0x5cf5,	// (0x000716c4) popup_vitu2_query_window_ParamLimits

0x5cf5,	// (0x000716c4) popup_vitu2_query_window

0x9558,	// (0x00074f27) bg_vitu2_candi_button_pane

0xd986,	// (0x00079355) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd98f,	// (0x0007935e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd998,	// (0x00079367) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6737,	// (0x00072106) bg_button_pane_cp015

0x6749,	// (0x00072118) bg_button_pane_cp016

0x675c,	// (0x0007212b) bg_button_pane_cp017

0xc94b,	// (0x0007831a) bg_popup_sub_pane_cp22

0xd9b9,	// (0x00079388) popup_vitu2_query_window_g1

0x67a1,	// (0x00072170) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007b3eb) popup_vitu2_query_window_g

0x67c0,	// (0x0007218f) popup_vitu2_query_window_t1_ParamLimits

0x67c0,	// (0x0007218f) popup_vitu2_query_window_t1

0x67f5,	// (0x000721c4) popup_vitu2_query_window_t2_ParamLimits

0x67f5,	// (0x000721c4) popup_vitu2_query_window_t2

0x6807,	// (0x000721d6) popup_vitu2_query_window_t3_ParamLimits

0x6807,	// (0x000721d6) popup_vitu2_query_window_t3

0x682f,	// (0x000721fe) popup_vitu2_query_window_t4_ParamLimits

0x682f,	// (0x000721fe) popup_vitu2_query_window_t4

0x6850,	// (0x0007221f) popup_vitu2_query_window_t5_ParamLimits

0x6850,	// (0x0007221f) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007b3f2) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007b3f2) popup_vitu2_query_window_t

0xd85c,	// (0x0007922b) main_cset_text_pane

0x614c,	// (0x00071b1b) aid_area_touch_slider_ParamLimits

0x6168,	// (0x00071b37) cset_slider_pane_ParamLimits

0x6192,	// (0x00071b61) main_cset_slider_pane_g1_ParamLimits

0x61a7,	// (0x00071b76) main_cset_slider_pane_g2_ParamLimits

0xd87d,	// (0x0007924c) main_cset_slider_pane_g3_ParamLimits

0xd87d,	// (0x0007924c) main_cset_slider_pane_g3

0x61bc,	// (0x00071b8b) main_cset_slider_pane_g4_ParamLimits

0x61bc,	// (0x00071b8b) main_cset_slider_pane_g4

0x61cb,	// (0x00071b9a) main_cset_slider_pane_g5_ParamLimits

0x61cb,	// (0x00071b9a) main_cset_slider_pane_g5

0x61d7,	// (0x00071ba6) main_cset_slider_pane_g6_ParamLimits

0x61d7,	// (0x00071ba6) main_cset_slider_pane_g6

0xf976,	// (0x0007b345) main_cset_slider_pane_g_ParamLimits

0xd8ad,	// (0x0007927c) main_cset_slider_pane_t1_ParamLimits

0x6263,	// (0x00071c32) main_cset_slider_pane_t2_ParamLimits

0x627d,	// (0x00071c4c) main_cset_slider_pane_t3_ParamLimits

0x6297,	// (0x00071c66) main_cset_slider_pane_t4_ParamLimits

0x62b1,	// (0x00071c80) main_cset_slider_pane_t5_ParamLimits

0x62cb,	// (0x00071c9a) main_cset_slider_pane_t6_ParamLimits

0x62e0,	// (0x00071caf) main_cset_slider_pane_t7_ParamLimits

0x630a,	// (0x00071cd9) main_cset_slider_pane_t8_ParamLimits

0x630a,	// (0x00071cd9) main_cset_slider_pane_t8

0x6332,	// (0x00071d01) main_cset_slider_pane_t9_ParamLimits

0x6332,	// (0x00071d01) main_cset_slider_pane_t9

0x635a,	// (0x00071d29) main_cset_slider_pane_t10_ParamLimits

0x635a,	// (0x00071d29) main_cset_slider_pane_t10

0x6382,	// (0x00071d51) main_cset_slider_pane_t11_ParamLimits

0x6382,	// (0x00071d51) main_cset_slider_pane_t11

0x63aa,	// (0x00071d79) main_cset_slider_pane_t12_ParamLimits

0x63aa,	// (0x00071d79) main_cset_slider_pane_t12

0x63c7,	// (0x00071d96) main_cset_slider_pane_t13_ParamLimits

0x63c7,	// (0x00071d96) main_cset_slider_pane_t13

0xf99b,	// (0x0007b36a) main_cset_slider_pane_t_ParamLimits

0x94d2,	// (0x00074ea1) bg_popup_sub_pane_cp011

0xd9c5,	// (0x00079394) main_cset_text_pane_g1

0xd9cd,	// (0x0007939c) main_cset_text_pane_t1

0xd9db,	// (0x000793aa) main_cset_text_pane_t2

0xd9e9,	// (0x000793b8) main_cset_text_pane_t3

0xd9f7,	// (0x000793c6) main_cset_text_pane_t4

0xda05,	// (0x000793d4) main_cset_text_pane_t5

0xda13,	// (0x000793e2) main_cset_text_pane_t6

0xda21,	// (0x000793f0) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007b401) main_cset_text_pane_t

0x9558,	// (0x00074f27) main_cam4_burst_pane

0x9558,	// (0x00074f27) main_cam5_pane

0x608b,	// (0x00071a5a) bg_button_pane_cp019

0x6094,	// (0x00071a63) bg_button_pane_cp020

0xd889,	// (0x00079258) main_cset_slider_pane_g7_ParamLimits

0xd889,	// (0x00079258) main_cset_slider_pane_g7

0xd895,	// (0x00079264) main_cset_slider_pane_g8_ParamLimits

0xd895,	// (0x00079264) main_cset_slider_pane_g8

0x61eb,	// (0x00071bba) main_cset_slider_pane_g9_ParamLimits

0x61eb,	// (0x00071bba) main_cset_slider_pane_g9

0x61f7,	// (0x00071bc6) main_cset_slider_pane_g10_ParamLimits

0x61f7,	// (0x00071bc6) main_cset_slider_pane_g10

0x6203,	// (0x00071bd2) main_cset_slider_pane_g11_ParamLimits

0x6203,	// (0x00071bd2) main_cset_slider_pane_g11

0x620f,	// (0x00071bde) main_cset_slider_pane_g12_ParamLimits

0x620f,	// (0x00071bde) main_cset_slider_pane_g12

0x621b,	// (0x00071bea) main_cset_slider_pane_g13_ParamLimits

0x621b,	// (0x00071bea) main_cset_slider_pane_g13

0x6227,	// (0x00071bf6) main_cset_slider_pane_g14_ParamLimits

0x6227,	// (0x00071bf6) main_cset_slider_pane_g14

0x6233,	// (0x00071c02) main_cset_slider_pane_g15_ParamLimits

0x6233,	// (0x00071c02) main_cset_slider_pane_g15

0xd8db,	// (0x000792aa) main_cset_slider_pane_t14_ParamLimits

0xd8db,	// (0x000792aa) main_cset_slider_pane_t14

0xd914,	// (0x000792e3) main_cset_slider_pane_t15_ParamLimits

0xd914,	// (0x000792e3) main_cset_slider_pane_t15

0x68c7,	// (0x00072296) aid_cam4_burst_size_cell_ParamLimits

0x68c7,	// (0x00072296) aid_cam4_burst_size_cell

0x68e7,	// (0x000722b6) grid_cam4_burst_pane_ParamLimits

0x68e7,	// (0x000722b6) grid_cam4_burst_pane

0x691f,	// (0x000722ee) linegrid_cam4_burst_pane_ParamLimits

0x691f,	// (0x000722ee) linegrid_cam4_burst_pane

0xda2f,	// (0x000793fe) scroll_pane_cp30_ParamLimits

0xda2f,	// (0x000793fe) scroll_pane_cp30

0x6943,	// (0x00072312) cell_cam4_burst_pane_ParamLimits

0x6943,	// (0x00072312) cell_cam4_burst_pane

0xda3b,	// (0x0007940a) linegrid_cam4_burst_pane_g1_ParamLimits

0xda3b,	// (0x0007940a) linegrid_cam4_burst_pane_g1

0x6990,	// (0x0007235f) linegrid_cam4_burst_pane_g2_ParamLimits

0x6990,	// (0x0007235f) linegrid_cam4_burst_pane_g2

0xda48,	// (0x00079417) linegrid_cam4_burst_pane_g3_ParamLimits

0xda48,	// (0x00079417) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007b410) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007b410) linegrid_cam4_burst_pane_g

0x69a1,	// (0x00072370) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x69a1,	// (0x00072370) linegrid_cam4_burst_pane_g3_copy1

0xda55,	// (0x00079424) linegrid_cam4_burst_pane_g4_ParamLimits

0xda55,	// (0x00079424) linegrid_cam4_burst_pane_g4

0x69bb,	// (0x0007238a) linegrid_cam4_burst_pane_g5_ParamLimits

0x69bb,	// (0x0007238a) linegrid_cam4_burst_pane_g5

0x69cc,	// (0x0007239b) linegrid_cam4_burst_pane_g6_ParamLimits

0x69cc,	// (0x0007239b) linegrid_cam4_burst_pane_g6

0xda62,	// (0x00079431) linegrid_cam4_burst_pane_g7_ParamLimits

0xda62,	// (0x00079431) linegrid_cam4_burst_pane_g7

0x69e3,	// (0x000723b2) cell_cam4_burst_pane_g1

0xda7b,	// (0x0007944a) main_cam5_pane_t1_ParamLimits

0xda7b,	// (0x0007944a) main_cam5_pane_t1

0xda8d,	// (0x0007945c) main_cam5_pane_t2_ParamLimits

0xda8d,	// (0x0007945c) main_cam5_pane_t2

0xda9f,	// (0x0007946e) main_cam5_pane_t3_ParamLimits

0xda9f,	// (0x0007946e) main_cam5_pane_t3

0xdab1,	// (0x00079480) main_cam5_pane_t4_ParamLimits

0xdab1,	// (0x00079480) main_cam5_pane_t4

0xdac9,	// (0x00079498) main_cam5_pane_t5_ParamLimits

0xdac9,	// (0x00079498) main_cam5_pane_t5

0xdadd,	// (0x000794ac) main_cam5_pane_t6_ParamLimits

0xdadd,	// (0x000794ac) main_cam5_pane_t6

0xdaf1,	// (0x000794c0) main_cam5_pane_t7_ParamLimits

0xdaf1,	// (0x000794c0) main_cam5_pane_t7

0xdb03,	// (0x000794d2) main_cam5_pane_t8_ParamLimits

0xdb03,	// (0x000794d2) main_cam5_pane_t8

0xdb1f,	// (0x000794ee) main_cam5_pane_t9_ParamLimits

0xdb1f,	// (0x000794ee) main_cam5_pane_t9

0xdb31,	// (0x00079500) main_cam5_pane_t10_ParamLimits

0xdb31,	// (0x00079500) main_cam5_pane_t10

0xdb43,	// (0x00079512) main_cam5_pane_t11_ParamLimits

0xdb43,	// (0x00079512) main_cam5_pane_t11

0xdb55,	// (0x00079524) main_cam5_pane_t12_ParamLimits

0xdb55,	// (0x00079524) main_cam5_pane_t12

0xdb6a,	// (0x00079539) main_cam5_pane_t13_ParamLimits

0xdb6a,	// (0x00079539) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007b41c) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007b41c) main_cam5_pane_t

0x0402,	// (0x0006bdd1) popup_scut_keymap_window_ParamLimits

0x0402,	// (0x0006bdd1) popup_scut_keymap_window

0x69f6,	// (0x000723c5) aid_size_cell_brow_shortcut

0xaae7,	// (0x000764b6) bg_popup_window_pane_cp010

0x6a02,	// (0x000723d1) grid_scut_pane

0x6a0e,	// (0x000723dd) cell_scut_pane_ParamLimits

0x6a0e,	// (0x000723dd) cell_scut_pane

0x6a25,	// (0x000723f4) cell_scut_pane_g1

0xdb87,	// (0x00079556) cell_scut_pane_t1

0xdb96,	// (0x00079565) cell_scut_pane_t2

0x6a2e,	// (0x000723fd) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007b437) cell_scut_pane_t

0x46c5,	// (0x00070094) main_mup3_pane_g8_ParamLimits

0x46c5,	// (0x00070094) main_mup3_pane_g8

0x5bd7,	// (0x000715a6) area_vitu2_query_pane_ParamLimits

0x5bd7,	// (0x000715a6) area_vitu2_query_pane

0x676f,	// (0x0007213e) input_focus_pane_cp08

0xdba5,	// (0x00079574) area_vitu2_query_pane_g1

0x6a3c,	// (0x0007240b) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007b43e) area_vitu2_query_pane_g

0x6a4d,	// (0x0007241c) area_vitu2_query_pane_t1_ParamLimits

0x6a4d,	// (0x0007241c) area_vitu2_query_pane_t1

0x6a61,	// (0x00072430) area_vitu2_query_pane_t2_ParamLimits

0x6a61,	// (0x00072430) area_vitu2_query_pane_t2

0x6a75,	// (0x00072444) area_vitu2_query_pane_t3_ParamLimits

0x6a75,	// (0x00072444) area_vitu2_query_pane_t3

0xa5e5,	// (0x00075fb4) area_vitu2_query_pane_t4_ParamLimits

0xa5e5,	// (0x00075fb4) area_vitu2_query_pane_t4

0xa60d,	// (0x00075fdc) area_vitu2_query_pane_t5_ParamLimits

0xa60d,	// (0x00075fdc) area_vitu2_query_pane_t5

0xa635,	// (0x00076004) area_vitu2_query_pane_t6_ParamLimits

0xa635,	// (0x00076004) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007b443) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007b443) area_vitu2_query_pane_t

0x6a9d,	// (0x0007246c) bg_button_pane_cp018

0x6aab,	// (0x0007247a) bg_button_pane_cp021

0x6ab7,	// (0x00072486) bg_button_pane_cp022

0x6ac6,	// (0x00072495) input_focus_pane_cp09

0xb396,	// (0x00076d65) aid_size_touch_mv_arrow_left

0xb3bf,	// (0x00076d8e) aid_size_touch_mv_arrow_right

0x624b,	// (0x00071c1a) main_cset_slider_pane_g16_ParamLimits

0x624b,	// (0x00071c1a) main_cset_slider_pane_g16

0x6257,	// (0x00071c26) main_cset_slider_pane_g17_ParamLimits

0x6257,	// (0x00071c26) main_cset_slider_pane_g17

0x69e3,	// (0x000723b2) cell_cam4_burst_pane_g1_ParamLimits

0x94d2,	// (0x00074ea1) compa_mode_pane

0x6431,	// (0x00071e00) popup_vtel_slider_window_g3_ParamLimits

0x6431,	// (0x00071e00) popup_vtel_slider_window_g3

0x6448,	// (0x00071e17) popup_vtel_slider_window_g4_ParamLimits

0x6448,	// (0x00071e17) popup_vtel_slider_window_g4

0x645f,	// (0x00071e2e) popup_vtel_slider_window_t1_ParamLimits

0x645f,	// (0x00071e2e) popup_vtel_slider_window_t1

0x9558,	// (0x00074f27) main_cl_pane

0x9965,	// (0x00075334) popup_imed_adjust2_window_ParamLimits

0xc94b,	// (0x0007831a) bg_tb_trans_pane_cp05_ParamLimits

0xd2a5,	// (0x00078c74) popup_imed_adjust2_window_g1_ParamLimits

0xd2b4,	// (0x00078c83) popup_imed_adjust2_window_g2_ParamLimits

0xd2b4,	// (0x00078c83) popup_imed_adjust2_window_g2

0xd2c0,	// (0x00078c8f) popup_imed_adjust2_window_g3_ParamLimits

0xd2c0,	// (0x00078c8f) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0007b1aa) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0007b1aa) popup_imed_adjust2_window_g

0xd2cc,	// (0x00078c9b) popup_imed_adjust2_window_t1_ParamLimits

0xd2e4,	// (0x00078cb3) slider_imed_adjust_pane_ParamLimits

0xd2f8,	// (0x00078cc7) slider_imed_adjust_pane_g1_ParamLimits

0xd308,	// (0x00078cd7) slider_imed_adjust_pane_g2_ParamLimits

0xd318,	// (0x00078ce7) slider_imed_adjust_pane_g3_ParamLimits

0xd329,	// (0x00078cf8) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0007b1b1) slider_imed_adjust_pane_g_ParamLimits

0x5960,	// (0x0007132f) aid_touch_area_cam4_ParamLimits

0x5960,	// (0x0007132f) aid_touch_area_cam4

0x9d4b,	// (0x0007571a) battery_pane_cp01

0x5a2f,	// (0x000713fe) main_camera4_pane_g6_ParamLimits

0x5a2f,	// (0x000713fe) main_camera4_pane_g6

0x5a59,	// (0x00071428) main_camera4_pane_t2_ParamLimits

0x5a59,	// (0x00071428) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007b2b8) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007b2b8) main_camera4_pane_t

0x5a8e,	// (0x0007145d) aid_touch_area_vid4_ParamLimits

0x5a8e,	// (0x0007145d) aid_touch_area_vid4

0x5ae2,	// (0x000714b1) main_video4_pane_g5_ParamLimits

0x5ae2,	// (0x000714b1) main_video4_pane_g5

0x5b07,	// (0x000714d6) vid4_progress_pane_ParamLimits

0x5b07,	// (0x000714d6) vid4_progress_pane

0xd8a1,	// (0x00079270) main_cset_slider_pane_g18_ParamLimits

0xd8a1,	// (0x00079270) main_cset_slider_pane_g18

0xda6f,	// (0x0007943e) cell_cam4_burst_pane_g2_ParamLimits

0xda6f,	// (0x0007943e) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007b417) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007b417) cell_cam4_burst_pane_g

0xa432,	// (0x00075e01) bg_cl_pane_ParamLimits

0xa432,	// (0x00075e01) bg_cl_pane

0x6ad5,	// (0x000724a4) cl_header_pane_ParamLimits

0x6ad5,	// (0x000724a4) cl_header_pane

0x6ae9,	// (0x000724b8) cl_listscroll_pane_ParamLimits

0x6ae9,	// (0x000724b8) cl_listscroll_pane

0xdbb1,	// (0x00079580) bg_cl_pane_g1

0xdbb9,	// (0x00079588) bg_cl_pane_g2

0xdbc1,	// (0x00079590) bg_cl_pane_g3

0xdbc9,	// (0x00079598) bg_cl_pane_g4

0xdbd1,	// (0x000795a0) bg_cl_pane_g5

0xdbd9,	// (0x000795a8) bg_cl_pane_g6

0xdbe1,	// (0x000795b0) bg_cl_pane_g7

0xdbe9,	// (0x000795b8) bg_cl_pane_g8

0xdbf1,	// (0x000795c0) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007b452) bg_cl_pane_g

0x6af9,	// (0x000724c8) aid_height_cl_leading_ParamLimits

0x6af9,	// (0x000724c8) aid_height_cl_leading

0x6b05,	// (0x000724d4) aid_height_cl_text_ParamLimits

0x6b05,	// (0x000724d4) aid_height_cl_text

0xa542,	// (0x00075f11) bg_cl_header_pane_ParamLimits

0xa542,	// (0x00075f11) bg_cl_header_pane

0x6b24,	// (0x000724f3) cl_header_pane_g1_ParamLimits

0x6b24,	// (0x000724f3) cl_header_pane_g1

0x6b3a,	// (0x00072509) cl_header_pane_t1_ParamLimits

0x6b3a,	// (0x00072509) cl_header_pane_t1

0xdbf9,	// (0x000795c8) cl_list_pane

0xd874,	// (0x00079243) hc_scroll_pane_cp01

0xad20,	// (0x000766ef) bg_cl_header_pane_g1

0xd75a,	// (0x00079129) bg_cl_header_pane_g2

0xad40,	// (0x0007670f) bg_cl_header_pane_g3

0xd76a,	// (0x00079139) bg_cl_header_pane_g4

0xd762,	// (0x00079131) bg_cl_header_pane_g5

0xd97e,	// (0x0007934d) bg_cl_header_pane_g6

0xd782,	// (0x00079151) bg_cl_header_pane_g7

0xd78a,	// (0x00079159) bg_cl_header_pane_g8

0xd77a,	// (0x00079149) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007b465) bg_cl_header_pane_g

0x6b53,	// (0x00072522) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b53,	// (0x00072522) hc_cl_list_double_graphic_heading_pane

0x6b64,	// (0x00072533) hc_cl_list_single_graphic_pane_ParamLimits

0x6b64,	// (0x00072533) hc_cl_list_single_graphic_pane

0x6b7a,	// (0x00072549) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b7a,	// (0x00072549) hc_cl_list_single_graphic_pane_g1

0x6b86,	// (0x00072555) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b86,	// (0x00072555) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007b478) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007b478) hc_cl_list_single_graphic_pane_g

0x6b9a,	// (0x00072569) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b9a,	// (0x00072569) hc_cl_list_single_graphic_pane_t1

0x6b7a,	// (0x00072549) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b7a,	// (0x00072549) hc_cl_list_double_graphic_heading_pane_g1

0x6baf,	// (0x0007257e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6baf,	// (0x0007257e) hc_cl_list_double_graphic_heading_pane_g2

0x6bc3,	// (0x00072592) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6bc3,	// (0x00072592) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007b47d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007b47d) hc_cl_list_double_graphic_heading_pane_g

0x6bd7,	// (0x000725a6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6bd7,	// (0x000725a6) hc_cl_list_double_graphic_heading_pane_t1

0x6bec,	// (0x000725bb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6bec,	// (0x000725bb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007b484) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007b484) hc_cl_list_double_graphic_heading_pane_t

0x9edf,	// (0x000758ae) vid4_progress_pane_g1

0x9eef,	// (0x000758be) vid4_progress_pane_g2

0x6c01,	// (0x000725d0) vid4_progress_pane_g3

0x9eff,	// (0x000758ce) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007b489) vid4_progress_pane_g

0x6c13,	// (0x000725e2) vid4_progress_pane_t1

0x9f17,	// (0x000758e6) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007b494) vid4_progress_pane_t

0x6c2b,	// (0x000725fa) wait_bar_pane_cp07

0xcb52,	// (0x00078521) blid_firmament_pane_ParamLimits

0xcb95,	// (0x00078564) popup_blid_sat_info2_window_g1

0xcbb9,	// (0x00078588) popup_blid_sat_info2_window_t3

0xcbc7,	// (0x00078596) popup_blid_sat_info2_window_t4

0xcbd5,	// (0x000785a4) popup_blid_sat_info2_window_t5

0xcbe3,	// (0x000785b2) popup_blid_sat_info2_window_t6

0xcbf3,	// (0x000785c2) popup_blid_sat_info2_window_t7

0xcc01,	// (0x000785d0) popup_blid_sat_info2_window_t8

0xcc0f,	// (0x000785de) popup_blid_sat_info2_window_t9

0xcc1d,	// (0x000785ec) popup_blid_sat_info2_window_t10

0xccdf,	// (0x000786ae) aid_firma_cardinal_ParamLimits

0xccf3,	// (0x000786c2) blid_firmament_pane_t1_ParamLimits

0xcd0a,	// (0x000786d9) blid_firmament_pane_t2_ParamLimits

0xcd21,	// (0x000786f0) blid_firmament_pane_t3_ParamLimits

0xcd38,	// (0x00078707) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0007b09e) blid_firmament_pane_t_ParamLimits

0xcd4f,	// (0x0007871e) blid_sat_info_pane_ParamLimits

0x954a,	// (0x00074f19) main_cam_set_pane_ParamLimits

0x4f89,	// (0x00070958) aid_size_cell_colour_35_ParamLimits

0x4fa9,	// (0x00070978) aid_size_cell_colour_112_ParamLimits

0x4fc9,	// (0x00070998) aid_size_cell_effect_ParamLimits

0xc94b,	// (0x0007831a) bg_tb_trans_pane_cp02_ParamLimits

0xaf88,	// (0x00076957) heading_imed_pane_ParamLimits

0x4fe9,	// (0x000709b8) listscroll_imed_pane_ParamLimits

0xbf71,	// (0x00077940) popup_call2_audio_first_window_g5_ParamLimits

0xbf71,	// (0x00077940) popup_call2_audio_first_window_g5

0x557c,	// (0x00070f4b) aid_size_touch_image3_arrow_left_ParamLimits

0x557c,	// (0x00070f4b) aid_size_touch_image3_arrow_left

0x55a8,	// (0x00070f77) aid_size_touch_image3_arrow_right_ParamLimits

0x55a8,	// (0x00070f77) aid_size_touch_image3_arrow_right

0x9f2c,	// (0x000758fb) vid4_progress_pane_t3

0x52fc,	// (0x00070ccb) main_hwr_training_symbol_option_pane_ParamLimits

0x52fc,	// (0x00070ccb) main_hwr_training_symbol_option_pane

0xd59a,	// (0x00078f69) popup_hwr_training_preview_window_ParamLimits

0xd59a,	// (0x00078f69) popup_hwr_training_preview_window

0x531c,	// (0x00070ceb) hwr_training_navi_pane_g5_ParamLimits

0x531c,	// (0x00070ceb) hwr_training_navi_pane_g5

0xd748,	// (0x00079117) popup_char_count_window

0x954a,	// (0x00074f19) bg_popup_sub_pane_cp20_ParamLimits

0x657b,	// (0x00071f4a) list_vitu2_match_list_pane_ParamLimits

0x658a,	// (0x00071f59) vitu2_page_scroll_pane_ParamLimits

0x658a,	// (0x00071f59) vitu2_page_scroll_pane

0xdc02,	// (0x000795d1) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdc02,	// (0x000795d1) list_single_hwr_training_symbol_option_pane

0xdc15,	// (0x000795e4) list_single_hwr_training_symbol_option_pane_g1

0xdc1d,	// (0x000795ec) list_single_hwr_training_symbol_option_pane_t1

0xdc2b,	// (0x000795fa) bg_button_pane_cp023

0xdc34,	// (0x00079603) bg_button_pane_cp024

0x6c76,	// (0x00072645) vitu2_page_scroll_pane_g1

0x6c7e,	// (0x0007264d) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007b49b) vitu2_page_scroll_pane_g

0x6c86,	// (0x00072655) vitu2_page_scroll_pane_t1

0xcab2,	// (0x00078481) popup_char_count_window_g1

0xdc67,	// (0x00079636) popup_char_count_window_g2

0xdc70,	// (0x0007963f) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007b4a0) popup_char_count_window_g

0xdc79,	// (0x00079648) popup_char_count_window_t1

0x9558,	// (0x00074f27) main_vded2_pane

0xd291,	// (0x00078c60) aid_size_cell_imed_line

0xd29b,	// (0x00078c6a) grid_imed_line_width_pane

0x9e11,	// (0x000757e0) vid4_indicators_pane_g4

0xdc87,	// (0x00079656) cell_imed_line_width_pane_ParamLimits

0xdc87,	// (0x00079656) cell_imed_line_width_pane

0xdc9b,	// (0x0007966a) cell_imed_line_width_pane_g1

0xd46d,	// (0x00078e3c) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007b4a7) cell_imed_line_width_pane_g

0x6c95,	// (0x00072664) main_vded2_pane_g1_ParamLimits

0x6c95,	// (0x00072664) main_vded2_pane_g1

0x6cab,	// (0x0007267a) main_vded2_pane_g2_ParamLimits

0x6cab,	// (0x0007267a) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007b4ac) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007b4ac) main_vded2_pane_g

0x6cbd,	// (0x0007268c) vded2_slider_pane_ParamLimits

0x6cbd,	// (0x0007268c) vded2_slider_pane

0x6ccd,	// (0x0007269c) aid_size_touch_vded2_end

0x6cd7,	// (0x000726a6) aid_size_touch_vded2_playhead

0xdca4,	// (0x00079673) aid_size_touch_vded2_start

0xdcac,	// (0x0007967b) vded2_slider_bg_pane

0xdcb5,	// (0x00079684) vded2_slider_pane_g1

0xdcbe,	// (0x0007968d) vded2_slider_pane_g2

0x6ce1,	// (0x000726b0) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007b4b1) vded2_slider_pane_g

0xdcc6,	// (0x00079695) vded2_slider_bg_pane_g1

0xdccf,	// (0x0007969e) vded2_slider_bg_pane_g2

0xdcd8,	// (0x000796a7) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007b4b8) vded2_slider_bg_pane_g

0x2ce2,	// (0x0006e6b1) aid_postcard_touch_down_pane_ParamLimits

0x2ce2,	// (0x0006e6b1) aid_postcard_touch_down_pane

0x2cf8,	// (0x0006e6c7) aid_postcard_touch_up_pane_ParamLimits

0x2cf8,	// (0x0006e6c7) aid_postcard_touch_up_pane

0x9558,	// (0x00074f27) main_blid2_pane

0x994b,	// (0x0007531a) popup_blid2_search_window

0x94d2,	// (0x00074ea1) blid2_gps_pane

0x94d2,	// (0x00074ea1) blid2_navig_pane

0x94d2,	// (0x00074ea1) blid2_search_pane

0x94d2,	// (0x00074ea1) blid2_tripm_pane

0x6cec,	// (0x000726bb) blid2_search_pane_g1_ParamLimits

0x6cec,	// (0x000726bb) blid2_search_pane_g1

0x6d06,	// (0x000726d5) blid2_search_pane_t1_ParamLimits

0x6d06,	// (0x000726d5) blid2_search_pane_t1

0x6d18,	// (0x000726e7) aid_size_cell_blid2_gps_ParamLimits

0x6d18,	// (0x000726e7) aid_size_cell_blid2_gps

0x6d30,	// (0x000726ff) blid2_gps_pane_g1_ParamLimits

0x6d30,	// (0x000726ff) blid2_gps_pane_g1

0x6d44,	// (0x00072713) grid_blid2_satellite_pane_ParamLimits

0x6d44,	// (0x00072713) grid_blid2_satellite_pane

0x6d5e,	// (0x0007272d) blid2_navig_pane_g1_ParamLimits

0x6d5e,	// (0x0007272d) blid2_navig_pane_g1

0x6d6a,	// (0x00072739) blid2_navig_pane_t1_ParamLimits

0x6d6a,	// (0x00072739) blid2_navig_pane_t1

0x6d85,	// (0x00072754) blid2_navig_pane_t2_ParamLimits

0x6d85,	// (0x00072754) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007b4bf) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007b4bf) blid2_navig_pane_t

0x6da0,	// (0x0007276f) blid2_navig_ring_pane_ParamLimits

0x6da0,	// (0x0007276f) blid2_navig_ring_pane

0x6db9,	// (0x00072788) blid2_speed_pane_ParamLimits

0x6db9,	// (0x00072788) blid2_speed_pane

0x6dc5,	// (0x00072794) blid2_tripm_pane_g1_ParamLimits

0x6dc5,	// (0x00072794) blid2_tripm_pane_g1

0x6dde,	// (0x000727ad) blid2_tripm_pane_g2_ParamLimits

0x6dde,	// (0x000727ad) blid2_tripm_pane_g2

0x6df2,	// (0x000727c1) blid2_tripm_pane_g3_ParamLimits

0x6df2,	// (0x000727c1) blid2_tripm_pane_g3

0x6e06,	// (0x000727d5) blid2_tripm_pane_g4_ParamLimits

0x6e06,	// (0x000727d5) blid2_tripm_pane_g4

0x6e1a,	// (0x000727e9) blid2_tripm_pane_g5_ParamLimits

0x6e1a,	// (0x000727e9) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007b4c4) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007b4c4) blid2_tripm_pane_g

0x6e40,	// (0x0007280f) blid2_tripm_pane_t1_ParamLimits

0x6e40,	// (0x0007280f) blid2_tripm_pane_t1

0x6e5b,	// (0x0007282a) blid2_tripm_pane_t2_ParamLimits

0x6e5b,	// (0x0007282a) blid2_tripm_pane_t2

0x6e74,	// (0x00072843) blid2_tripm_pane_t3_ParamLimits

0x6e74,	// (0x00072843) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007b4d1) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007b4d1) blid2_tripm_pane_t

0x6ebb,	// (0x0007288a) cell_blid2_satellite_pane_ParamLimits

0x6ebb,	// (0x0007288a) cell_blid2_satellite_pane

0x6ed9,	// (0x000728a8) cell_blid2_satellite_pane_g1

0xdce1,	// (0x000796b0) cell_blid2_satellite_pane_t1

0xcd5f,	// (0x0007872e) blid2_speed_pane_g1

0xdcef,	// (0x000796be) blid2_speed_pane_t1

0xdcfd,	// (0x000796cc) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007b4da) blid2_speed_pane_t

0xcd5f,	// (0x0007872e) blid2_navig_ring_pane_g1

0x6ee2,	// (0x000728b1) blid2_navig_ring_pane_g2

0x6eea,	// (0x000728b9) blid2_navig_ring_pane_g3

0x6ef2,	// (0x000728c1) blid2_navig_ring_pane_g4

0x6efa,	// (0x000728c9) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007b4df) blid2_navig_ring_pane_g

0x94d2,	// (0x00074ea1) bg_popup_window_pane_cp011

0xdd0b,	// (0x000796da) popup_blid2_search_window_g1

0xdd13,	// (0x000796e2) popup_blid2_search_window_t1

0xdd21,	// (0x000796f0) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007b4ea) popup_blid2_search_window_t

0xac2f,	// (0x000765fe) main_browser_pane_g1

0xa432,	// (0x00075e01) main_browser_pane_ParamLimits

0x954a,	// (0x00074f19) bg_button_pane_cp011_ParamLimits

0x5e21,	// (0x000717f0) cell_vitu2_function_pane_g1_ParamLimits

0xc94b,	// (0x0007831a) bg_popup_sub_pane_cp22_ParamLimits

0x676f,	// (0x0007213e) input_focus_pane_cp08_ParamLimits

0x6786,	// (0x00072155) popup_vitu2_query_button_pane_ParamLimits

0x6786,	// (0x00072155) popup_vitu2_query_button_pane

0x6797,	// (0x00072166) popup_vitu2_query_input_button_pane

0xd9b9,	// (0x00079388) popup_vitu2_query_window_g1_ParamLimits

0x67a1,	// (0x00072170) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007b3eb) popup_vitu2_query_window_g_ParamLimits

0x94d2,	// (0x00074ea1) bg_button_pane_cp026

0x6f02,	// (0x000728d1) popup_vitu2_query_input_button_pane_g1

0x94d2,	// (0x00074ea1) bg_button_pane_cp025

0xdd2f,	// (0x000796fe) popup_vitu2_query_button_pane_t1

0x438a,	// (0x0006fd59) main_mp3_pane_t6

0x4398,	// (0x0006fd67) popup_slider_window_cp01

0x9d75,	// (0x00075744) cam4_battery_pane

0x9dce,	// (0x0007579d) cam4_battery_pane_cp02

0x9ed7,	// (0x000758a6) cam4_battery_pane_cp01

0x9ed7,	// (0x000758a6) cam4_battery_pane_cp03

0xd6a5,	// (0x00079074) cam4_battery_pane_g1

0xcd5f,	// (0x0007872e) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007b4ef) cam4_battery_pane_g

0xcc2b,	// (0x000785fa) popup_blid_sat_info2_window_t11

0xb396,	// (0x00076d65) aid_size_touch_mv_arrow_left_ParamLimits

0xb3bf,	// (0x00076d8e) aid_size_touch_mv_arrow_right_ParamLimits

0xb41d,	// (0x00076dec) navi_pane_g1_ParamLimits

0xb429,	// (0x00076df8) navi_pane_g2_ParamLimits

0xb457,	// (0x00076e26) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0007adb0) navi_pane_g_ParamLimits

0x2742,	// (0x0006e111) navi_pane_mv_t1_ParamLimits

0x4ff5,	// (0x000709c4) grid_imed_effect_pane_ParamLimits

0x139a,	// (0x0006cd69) aid_placing_vt_slider_lsc

0xab7e,	// (0x0007654d) aid_placing_vt_slider_prt

0xa542,	// (0x00075f11) bg_tb_trans_pane_cp01_ParamLimits

0xcee2,	// (0x000788b1) popup_image_details_window_g1_ParamLimits

0xcef5,	// (0x000788c4) popup_image_details_window_g2_ParamLimits

0xcf0a,	// (0x000788d9) popup_image_details_window_g3_ParamLimits

0xcf0a,	// (0x000788d9) popup_image_details_window_g3

0xf714,	// (0x0007b0e3) popup_image_details_window_g_ParamLimits

0xcf1e,	// (0x000788ed) popup_image_details_window_t1_ParamLimits

0xcf30,	// (0x000788ff) popup_image_details_window_t2_ParamLimits

0xcf49,	// (0x00078918) popup_image_details_window_t3_ParamLimits

0xcf5d,	// (0x0007892c) popup_image_details_window_t4_ParamLimits

0xcf78,	// (0x00078947) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0007b0ea) popup_image_details_window_t_ParamLimits

0x6b11,	// (0x000724e0) cl_header_name_pane_ParamLimits

0x6b11,	// (0x000724e0) cl_header_name_pane

0x6f0a,	// (0x000728d9) cl_header_name_pane_t1_ParamLimits

0x6f0a,	// (0x000728d9) cl_header_name_pane_t1

0x6f2b,	// (0x000728fa) cl_header_name_pane_t2_ParamLimits

0x6f2b,	// (0x000728fa) cl_header_name_pane_t2

0x6f6d,	// (0x0007293c) cl_header_name_pane_t3_ParamLimits

0x6f6d,	// (0x0007293c) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007b4f4) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007b4f4) cl_header_name_pane_t

0xb4e6,	// (0x00076eb5) navi_pane_mv_g2_ParamLimits

0xd722,	// (0x000790f1) field_vitu2_entry_pane_g1_ParamLimits

0xd72e,	// (0x000790fd) field_vitu2_entry_pane_g2_ParamLimits

0xd73a,	// (0x00079109) field_vitu2_entry_pane_g3_ParamLimits

0xd73a,	// (0x00079109) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007b2ea) field_vitu2_entry_pane_g_ParamLimits

0x9e46,	// (0x00075815) cell_vitu2_itu_pane_g1_ParamLimits

0x5db5,	// (0x00071784) cell_vitu2_itu_pane_g2_ParamLimits

0x5db5,	// (0x00071784) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007b2f6) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007b2f6) cell_vitu2_itu_pane_g

0x954a,	// (0x00074f19) bg_vkb2_func_pane_cp05_ParamLimits

0x954a,	// (0x00074f19) bg_vkb2_func_pane_cp05

0x954a,	// (0x00074f19) bg_vkb2_func_pane_cp03

0x954a,	// (0x00074f19) bg_vkb2_func_pane_cp04

0x954a,	// (0x00074f19) bg_vkb2_func_pane_cp10_ParamLimits

0x954a,	// (0x00074f19) bg_vkb2_func_pane_cp10

0x6ab7,	// (0x00072486) bg_vkb2_func_pane_cp08

0x6a9d,	// (0x0007246c) bg_vkb2_func_pane_cp06

0x6aab,	// (0x0007247a) bg_vkb2_func_pane_cp07

0xdc3d,	// (0x0007960c) bg_vkb2_func_pane_cp11_ParamLimits

0xdc3d,	// (0x0007960c) bg_vkb2_func_pane_cp11

0xdc52,	// (0x00079621) bg_vkb2_func_pane_cp12_ParamLimits

0xdc52,	// (0x00079621) bg_vkb2_func_pane_cp12

0x94d2,	// (0x00074ea1) bg_vkb2_func_pane_cp09

0xd75a,	// (0x00079129) bg_vkb2_func_pane_g1

0xad40,	// (0x0007670f) bg_vkb2_func_pane_g2

0xd762,	// (0x00079131) bg_vkb2_func_pane_g3

0xd76a,	// (0x00079139) bg_vkb2_func_pane_g4

0xd97e,	// (0x0007934d) bg_vkb2_func_pane_g5

0xd782,	// (0x00079151) bg_vkb2_func_pane_g6

0xd78a,	// (0x00079159) bg_vkb2_func_pane_g7

0xd77a,	// (0x00079149) bg_vkb2_func_pane_g8

0xad20,	// (0x000766ef) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007b4fb) bg_vkb2_func_pane_g

0x6e2e,	// (0x000727fd) blid2_tripm_pane_g6_ParamLimits

0x6e2e,	// (0x000727fd) blid2_tripm_pane_g6

0xd658,	// (0x00079027) mp4_progress_pane_g1

0x6ea7,	// (0x00072876) blid2_tripm_values_pane_ParamLimits

0x6ea7,	// (0x00072876) blid2_tripm_values_pane

0x6f9e,	// (0x0007296d) blid2_tripm_values_pane_t1

0x6fac,	// (0x0007297b) blid2_tripm_values_pane_t2

0x6fba,	// (0x00072989) blid2_tripm_values_pane_t3

0x6fc8,	// (0x00072997) blid2_tripm_values_pane_t4

0x6fd6,	// (0x000729a5) blid2_tripm_values_pane_t5

0x6fe4,	// (0x000729b3) blid2_tripm_values_pane_t6

0x6ff2,	// (0x000729c1) blid2_tripm_values_pane_t7

0x7000,	// (0x000729cf) blid2_tripm_values_pane_t8

0x700e,	// (0x000729dd) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007b50e) blid2_tripm_values_pane_t

0x13dc,	// (0x0006cdab) call_video_pane_t1_ParamLimits

0x13fa,	// (0x0006cdc9) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0007ac39) call_video_pane_t_ParamLimits

0x2c1d,	// (0x0006e5ec) msg_header_pane_g1_ParamLimits

0xb6ce,	// (0x0007709d) msg_header_pane_g2_ParamLimits

0xb6ce,	// (0x0007709d) msg_header_pane_g2

0x0001,

0xf484,	// (0x0007ae53) msg_header_pane_g_ParamLimits

0xf484,	// (0x0007ae53) msg_header_pane_g

0xa432,	// (0x00075e01) main_clock2_pane_ParamLimits

0x4cf6,	// (0x000706c5) grid_clock2_toolbar_pane_ParamLimits

0x4cf6,	// (0x000706c5) grid_clock2_toolbar_pane

0x4cf6,	// (0x000706c5) listscroll_clock2_pane_ParamLimits

0x4cf6,	// (0x000706c5) listscroll_clock2_pane

0x4dda,	// (0x000707a9) main_clock2_pane_t3_ParamLimits

0x4dda,	// (0x000707a9) main_clock2_pane_t3

0x4dfe,	// (0x000707cd) main_clock2_pane_t4_ParamLimits

0x4dfe,	// (0x000707cd) main_clock2_pane_t4

0xdd3d,	// (0x0007970c) cell_clock2_toolbar_pane

0xdd45,	// (0x00079714) cell_clock2_toolbar_pane_cp01

0xdd45,	// (0x00079714) cell_clock2_toolbar_pane_cp02

0xdd4d,	// (0x0007971c) cell_clock2_toolbar_pane_cp03

0xdd55,	// (0x00079724) list_clock2_pane

0xb30c,	// (0x00076cdb) scroll_pane_cp10

0xdd5d,	// (0x0007972c) list_single_clock2_pane_ParamLimits

0xdd5d,	// (0x0007972c) list_single_clock2_pane

0xaae7,	// (0x000764b6) list_highlight_pane_cp08

0xdd6a,	// (0x00079739) list_single_clock2_pane_t1

0xdd78,	// (0x00079747) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007b521) list_single_clock2_pane_t

0x94d2,	// (0x00074ea1) bg_button_pane_cp10

0xdd86,	// (0x00079755) cell_clock2_toolbar_pane_g1

0x2c6e,	// (0x0006e63d) aid_main_viewer_pane_g1_ParamLimits

0x2c6e,	// (0x0006e63d) aid_main_viewer_pane_g1

0x2c7c,	// (0x0006e64b) aid_main_viewer_pane_g2_ParamLimits

0x2c7c,	// (0x0006e64b) aid_main_viewer_pane_g2

0x2c8a,	// (0x0006e659) aid_main_viewer_pane_g3_ParamLimits

0x2c8a,	// (0x0006e659) aid_main_viewer_pane_g3

0x2c99,	// (0x0006e668) aid_main_viewer_pane_g4_ParamLimits

0x2c99,	// (0x0006e668) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0007ae64) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0007ae64) aid_main_viewer_pane_g

0x359f,	// (0x0006ef6e) main_calc_pane_ParamLimits

0x35c5,	// (0x0006ef94) main_dialer2_pane_ParamLimits

0x9558,	// (0x00074f27) main_cam6_pane

0x9558,	// (0x00074f27) main_vid6_pane

0x4d02,	// (0x000706d1) listscroll_gen_pane_cp06_ParamLimits

0x4d02,	// (0x000706d1) listscroll_gen_pane_cp06

0x4e21,	// (0x000707f0) main_clock2_pane_t5_ParamLimits

0x4e21,	// (0x000707f0) main_clock2_pane_t5

0x4e7f,	// (0x0007084e) aid_call2_pane_cp10_ParamLimits

0x4e91,	// (0x00070860) aid_call_pane_cp10_ParamLimits

0xb38a,	// (0x00076d59) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb38a,	// (0x00076d59) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ea3,	// (0x00070872) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ea3,	// (0x00070872) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb38a,	// (0x00076d59) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0007b19f) popup_clock_analogue_window_cp10_g_ParamLimits

0x4eb9,	// (0x00070888) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5529,	// (0x00070ef8) cell_dialer2_keypad_pane_g2_ParamLimits

0x5529,	// (0x00070ef8) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007b289) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007b289) cell_dialer2_keypad_pane_g

0x5545,	// (0x00070f14) cell_dialer2_keypad_pane_t1

0x613e,	// (0x00071b0d) main_cset_text2_pane_ParamLimits

0x613e,	// (0x00071b0d) main_cset_text2_pane

0xdba5,	// (0x00079574) area_vitu2_query_pane_g1_ParamLimits

0x6a3c,	// (0x0007240b) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007b43e) area_vitu2_query_pane_g_ParamLimits

0xa65d,	// (0x0007602c) area_vitu2_query_pane_t7_ParamLimits

0xa65d,	// (0x0007602c) area_vitu2_query_pane_t7

0x6a9d,	// (0x0007246c) bg_button_pane_cp018_ParamLimits

0x6aab,	// (0x0007247a) bg_button_pane_cp021_ParamLimits

0x6ab7,	// (0x00072486) bg_button_pane_cp022_ParamLimits

0x6ab7,	// (0x00072486) bg_vkb2_func_pane_cp08_ParamLimits

0x6a9d,	// (0x0007246c) bg_vkb2_func_pane_cp06_ParamLimits

0x6aab,	// (0x0007247a) bg_vkb2_func_pane_cp07_ParamLimits

0x6ac6,	// (0x00072495) input_focus_pane_cp09_ParamLimits

0x9f41,	// (0x00075910) cam6_autofocus_pane_ParamLimits

0x9f41,	// (0x00075910) cam6_autofocus_pane

0x701c,	// (0x000729eb) cam6_image_uncrop_pane_ParamLimits

0x701c,	// (0x000729eb) cam6_image_uncrop_pane

0x702b,	// (0x000729fa) cam6_indi_pane_ParamLimits

0x702b,	// (0x000729fa) cam6_indi_pane

0x7041,	// (0x00072a10) cam6_mode_pane_ParamLimits

0x7041,	// (0x00072a10) cam6_mode_pane

0x7053,	// (0x00072a22) cam6_timer_pane_ParamLimits

0x7053,	// (0x00072a22) cam6_timer_pane

0x705f,	// (0x00072a2e) cam6_zoom_pane_ParamLimits

0x705f,	// (0x00072a2e) cam6_zoom_pane

0x706b,	// (0x00072a3a) cam6_mode_pane_g1_ParamLimits

0x706b,	// (0x00072a3a) cam6_mode_pane_g1

0x707b,	// (0x00072a4a) cam6_mode_pane_g2_ParamLimits

0x707b,	// (0x00072a4a) cam6_mode_pane_g2

0x708b,	// (0x00072a5a) cam6_mode_pane_g3_ParamLimits

0x708b,	// (0x00072a5a) cam6_mode_pane_g3

0x709b,	// (0x00072a6a) cam6_mode_pane_g4_ParamLimits

0x709b,	// (0x00072a6a) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007b526) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007b526) cam6_mode_pane_g

0xdd8e,	// (0x0007975d) bg_tb_trans_pane_cp08_ParamLimits

0xdd8e,	// (0x0007975d) bg_tb_trans_pane_cp08

0xdd9c,	// (0x0007976b) cam6_battery_pane_ParamLimits

0xdd9c,	// (0x0007976b) cam6_battery_pane

0xddb2,	// (0x00079781) cam6_indi_pane_g1_ParamLimits

0xddb2,	// (0x00079781) cam6_indi_pane_g1

0xddc4,	// (0x00079793) cam6_indi_pane_g2_ParamLimits

0xddc4,	// (0x00079793) cam6_indi_pane_g2

0xddd6,	// (0x000797a5) cam6_indi_pane_g3_ParamLimits

0xddd6,	// (0x000797a5) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007b52f) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007b52f) cam6_indi_pane_g

0xdde8,	// (0x000797b7) cam6_indi_pane_t1_ParamLimits

0xdde8,	// (0x000797b7) cam6_indi_pane_t1

0x70ab,	// (0x00072a7a) cam6_autofocus_pane_g1

0x70b3,	// (0x00072a82) cam6_autofocus_pane_g2

0x70bb,	// (0x00072a8a) cam6_autofocus_pane_g3

0x70c3,	// (0x00072a92) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007b536) cam6_autofocus_pane_g

0xde0e,	// (0x000797dd) cam6_timer_pane_g1

0xde16,	// (0x000797e5) cam6_timer_pane_t1

0xde24,	// (0x000797f3) cam6_zoom_cont_pane

0xde2c,	// (0x000797fb) cam6_zoom_pane_g1

0xde34,	// (0x00079803) cam6_zoom_pane_g2

0x70cb,	// (0x00072a9a) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007b53f) cam6_zoom_pane_g

0xcd5f,	// (0x0007872e) cam6_battery_pane_g1

0xcd5f,	// (0x0007872e) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0007b0a7) cam6_battery_pane_g

0xde3c,	// (0x0007980b) cam6_zoom_cont_pane_g1

0xde45,	// (0x00079814) cam6_zoom_cont_pane_g2

0xde4e,	// (0x0007981d) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007b546) cam6_zoom_cont_pane_g

0x70e8,	// (0x00072ab7) cam6_mode_pane_cp_ParamLimits

0x70e8,	// (0x00072ab7) cam6_mode_pane_cp

0x70fa,	// (0x00072ac9) cam6_zoom_pane_cp_ParamLimits

0x70fa,	// (0x00072ac9) cam6_zoom_pane_cp

0x7106,	// (0x00072ad5) vid6_image_uncrop_cif_pane_ParamLimits

0x7106,	// (0x00072ad5) vid6_image_uncrop_cif_pane

0x7116,	// (0x00072ae5) vid6_image_uncrop_nhd_pane_ParamLimits

0x7116,	// (0x00072ae5) vid6_image_uncrop_nhd_pane

0x7125,	// (0x00072af4) vid6_image_uncrop_vga_pane_ParamLimits

0x7125,	// (0x00072af4) vid6_image_uncrop_vga_pane

0x7134,	// (0x00072b03) vid6_image_uncrop_wvga_pane_ParamLimits

0x7134,	// (0x00072b03) vid6_image_uncrop_wvga_pane

0x7143,	// (0x00072b12) vid6_indi_pane_ParamLimits

0x7143,	// (0x00072b12) vid6_indi_pane

0xdd8e,	// (0x0007975d) bg_tb_trans_pane_cp09_ParamLimits

0xdd8e,	// (0x0007975d) bg_tb_trans_pane_cp09

0xde66,	// (0x00079835) cam6_battery_pane_cp_ParamLimits

0xde66,	// (0x00079835) cam6_battery_pane_cp

0xde72,	// (0x00079841) vid6_indi_pane_g1_ParamLimits

0xde72,	// (0x00079841) vid6_indi_pane_g1

0xde84,	// (0x00079853) vid6_indi_pane_g2_ParamLimits

0xde84,	// (0x00079853) vid6_indi_pane_g2

0xde96,	// (0x00079865) vid6_indi_pane_g3_ParamLimits

0xde96,	// (0x00079865) vid6_indi_pane_g3

0xdeab,	// (0x0007987a) vid6_indi_pane_g4_ParamLimits

0xdeab,	// (0x0007987a) vid6_indi_pane_g4

0xdec0,	// (0x0007988f) vid6_indi_pane_g5_ParamLimits

0xdec0,	// (0x0007988f) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007b54d) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007b54d) vid6_indi_pane_g

0xdefe,	// (0x000798cd) vid6_indi_pane_t1_ParamLimits

0xdefe,	// (0x000798cd) vid6_indi_pane_t1

0xdf14,	// (0x000798e3) vid6_indi_pane_t2_ParamLimits

0xdf14,	// (0x000798e3) vid6_indi_pane_t2

0xdf3c,	// (0x0007990b) vid6_indi_pane_t3_ParamLimits

0xdf3c,	// (0x0007990b) vid6_indi_pane_t3

0xdf64,	// (0x00079933) vid6_indi_pane_t4_ParamLimits

0xdf64,	// (0x00079933) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007b558) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007b558) vid6_indi_pane_t

0xdf88,	// (0x00079957) wait_bar_pane_cp08

0x715b,	// (0x00072b2a) main_cset_text2_pane_t1_ParamLimits

0x715b,	// (0x00072b2a) main_cset_text2_pane_t1

0x70d3,	// (0x00072aa2) listscroll_gen_pane_cp06_t1_ParamLimits

0x70d3,	// (0x00072aa2) listscroll_gen_pane_cp06_t1

0x9558,	// (0x00074f27) main_cam6_set_pane

0x9d67,	// (0x00075736) bg_tb_trans_pane_cp06_ParamLimits

0x9d7d,	// (0x0007574c) cam4_indicators_pane_g1_ParamLimits

0x9d8e,	// (0x0007575d) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007b2c6) cam4_indicators_pane_g_ParamLimits

0x9dac,	// (0x0007577b) cam4_indicators_pane_t1_ParamLimits

0x954a,	// (0x00074f19) bg_tb_trans_pane_cp07_ParamLimits

0x9dd8,	// (0x000757a7) vid4_indicators_pane_g1_ParamLimits

0x9dec,	// (0x000757bb) vid4_indicators_pane_g2_ParamLimits

0x9e00,	// (0x000757cf) vid4_indicators_pane_g3_ParamLimits

0x9e11,	// (0x000757e0) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007b2d8) vid4_indicators_pane_g_ParamLimits

0x9e2f,	// (0x000757fe) vid4_indicators_pane_t1_ParamLimits

0x9edf,	// (0x000758ae) vid4_progress_pane_g1_ParamLimits

0x9eef,	// (0x000758be) vid4_progress_pane_g2_ParamLimits

0x6c01,	// (0x000725d0) vid4_progress_pane_g3_ParamLimits

0x9eff,	// (0x000758ce) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007b489) vid4_progress_pane_g_ParamLimits

0x6c13,	// (0x000725e2) vid4_progress_pane_t1_ParamLimits

0x9f17,	// (0x000758e6) vid4_progress_pane_t2_ParamLimits

0x9f2c,	// (0x000758fb) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007b494) vid4_progress_pane_t_ParamLimits

0x6c2b,	// (0x000725fa) wait_bar_pane_cp07_ParamLimits

0x7178,	// (0x00072b47) main_cam6_set_pane_g2_ParamLimits

0x7178,	// (0x00072b47) main_cam6_set_pane_g2

0x719c,	// (0x00072b6b) main_cset6_listscroll_pane_ParamLimits

0x719c,	// (0x00072b6b) main_cset6_listscroll_pane

0x71bc,	// (0x00072b8b) main_cset6_slider_pane_ParamLimits

0x71bc,	// (0x00072b8b) main_cset6_slider_pane

0x71d2,	// (0x00072ba1) main_cset6_text2_pane_ParamLimits

0x71d2,	// (0x00072ba1) main_cset6_text2_pane

0xdf97,	// (0x00079966) main_cset6_text_pane

0xdf9f,	// (0x0007996e) main_cset_list_pane_copy1_ParamLimits

0xdf9f,	// (0x0007996e) main_cset_list_pane_copy1

0xdfaf,	// (0x0007997e) scroll_pane_cp028_copy1

0x71e0,	// (0x00072baf) cset_list_set_pane_copy1

0x71f1,	// (0x00072bc0) aid_position_infowindow_above_copy1

0x71f9,	// (0x00072bc8) aid_position_infowindow_below_copy1

0x7201,	// (0x00072bd0) cset_list_set_pane_g1_copy1

0x7209,	// (0x00072bd8) cset_list_set_pane_g3_copy1_ParamLimits

0x7209,	// (0x00072bd8) cset_list_set_pane_g3_copy1

0x7218,	// (0x00072be7) cset_list_set_pane_t1_copy1_ParamLimits

0x7218,	// (0x00072be7) cset_list_set_pane_t1_copy1

0xa542,	// (0x00075f11) list_highlight_pane_cp021_copy1_ParamLimits

0xa542,	// (0x00075f11) list_highlight_pane_cp021_copy1

0xdfb8,	// (0x00079987) cset6_slider_pane_ParamLimits

0xdfb8,	// (0x00079987) cset6_slider_pane

0xdfe4,	// (0x000799b3) main_cset6_slider_pane_g1_ParamLimits

0xdfe4,	// (0x000799b3) main_cset6_slider_pane_g1

0x722d,	// (0x00072bfc) main_cset6_slider_pane_g2_ParamLimits

0x722d,	// (0x00072bfc) main_cset6_slider_pane_g2

0xe00c,	// (0x000799db) main_cset6_slider_pane_g3_ParamLimits

0xe00c,	// (0x000799db) main_cset6_slider_pane_g3

0x7255,	// (0x00072c24) main_cset6_slider_pane_g4_ParamLimits

0x7255,	// (0x00072c24) main_cset6_slider_pane_g4

0x7261,	// (0x00072c30) main_cset6_slider_pane_g5_ParamLimits

0x7261,	// (0x00072c30) main_cset6_slider_pane_g5

0xd889,	// (0x00079258) main_cset6_slider_pane_g7_ParamLimits

0xd889,	// (0x00079258) main_cset6_slider_pane_g7

0xd895,	// (0x00079264) main_cset6_slider_pane_g8_ParamLimits

0xd895,	// (0x00079264) main_cset6_slider_pane_g8

0x61eb,	// (0x00071bba) main_cset6_slider_pane_g9_ParamLimits

0x61eb,	// (0x00071bba) main_cset6_slider_pane_g9

0x61f7,	// (0x00071bc6) main_cset6_slider_pane_g10_ParamLimits

0x61f7,	// (0x00071bc6) main_cset6_slider_pane_g10

0x6203,	// (0x00071bd2) main_cset6_slider_pane_g11_ParamLimits

0x6203,	// (0x00071bd2) main_cset6_slider_pane_g11

0x620f,	// (0x00071bde) main_cset6_slider_pane_g12_ParamLimits

0x620f,	// (0x00071bde) main_cset6_slider_pane_g12

0x621b,	// (0x00071bea) main_cset6_slider_pane_g13_ParamLimits

0x621b,	// (0x00071bea) main_cset6_slider_pane_g13

0x6227,	// (0x00071bf6) main_cset6_slider_pane_g14_ParamLimits

0x6227,	// (0x00071bf6) main_cset6_slider_pane_g14

0x726d,	// (0x00072c3c) main_cset6_slider_pane_g15_ParamLimits

0x726d,	// (0x00072c3c) main_cset6_slider_pane_g15

0x624b,	// (0x00071c1a) main_cset6_slider_pane_g16_ParamLimits

0x624b,	// (0x00071c1a) main_cset6_slider_pane_g16

0x6257,	// (0x00071c26) main_cset6_slider_pane_g17_ParamLimits

0x6257,	// (0x00071c26) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007b561) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007b561) main_cset6_slider_pane_g

0xe018,	// (0x000799e7) main_cset6_slider_pane_t1_ParamLimits

0xe018,	// (0x000799e7) main_cset6_slider_pane_t1

0x729d,	// (0x00072c6c) main_cset6_slider_pane_t2_ParamLimits

0x729d,	// (0x00072c6c) main_cset6_slider_pane_t2

0x72c8,	// (0x00072c97) main_cset6_slider_pane_t3_ParamLimits

0x72c8,	// (0x00072c97) main_cset6_slider_pane_t3

0x72f3,	// (0x00072cc2) main_cset6_slider_pane_t4_ParamLimits

0x72f3,	// (0x00072cc2) main_cset6_slider_pane_t4

0x731e,	// (0x00072ced) main_cset6_slider_pane_t5_ParamLimits

0x731e,	// (0x00072ced) main_cset6_slider_pane_t5

0xe059,	// (0x00079a28) main_cset6_slider_pane_t7_ParamLimits

0xe059,	// (0x00079a28) main_cset6_slider_pane_t7

0x7349,	// (0x00072d18) main_cset6_slider_pane_t8_ParamLimits

0x7349,	// (0x00072d18) main_cset6_slider_pane_t8

0x736d,	// (0x00072d3c) main_cset6_slider_pane_t9_ParamLimits

0x736d,	// (0x00072d3c) main_cset6_slider_pane_t9

0x7391,	// (0x00072d60) main_cset6_slider_pane_t10_ParamLimits

0x7391,	// (0x00072d60) main_cset6_slider_pane_t10

0x73b5,	// (0x00072d84) main_cset6_slider_pane_t11_ParamLimits

0x73b5,	// (0x00072d84) main_cset6_slider_pane_t11

0xe08f,	// (0x00079a5e) main_cset6_slider_pane_t14_ParamLimits

0xe08f,	// (0x00079a5e) main_cset6_slider_pane_t14

0xe0c8,	// (0x00079a97) main_cset6_slider_pane_t15_ParamLimits

0xe0c8,	// (0x00079a97) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007b586) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007b586) main_cset6_slider_pane_t

0xdeda,	// (0x000798a9) cset_slider_pane_g1_copy1

0xdee3,	// (0x000798b2) cset_slider_pane_g2_copy1

0xdeec,	// (0x000798bb) cset_slider_pane_g3_copy1

0x94d2,	// (0x00074ea1) bg_popup_sub_pane_cp011_copy1

0xe101,	// (0x00079ad0) main_cset_text_pane_g1_copy1

0xd9cd,	// (0x0007939c) main_cset_text_pane_t1_copy1

0xd9db,	// (0x000793aa) main_cset_text_pane_t2_copy1

0xd9e9,	// (0x000793b8) main_cset_text_pane_t3_copy1

0xd9f7,	// (0x000793c6) main_cset_text_pane_t4_copy1

0xda05,	// (0x000793d4) main_cset_text_pane_t5_copy1

0xe109,	// (0x00079ad8) main_cset_text_pane_t6_copy1

0xe117,	// (0x00079ae6) main_cset_text_pane_t7_copy1

0x715b,	// (0x00072b2a) main_cset_text2_pane_t1_copy1

0x954a,	// (0x00074f19) main_ncimui_pane

0x380f,	// (0x0006f1de) popup_query_ncimui_window_ParamLimits

0x380f,	// (0x0006f1de) popup_query_ncimui_window

0xa58c,	// (0x00075f5b) field_cale_ev2_pane_g4_ParamLimits

0xa58c,	// (0x00075f5b) field_cale_ev2_pane_g4

0x5409,	// (0x00070dd8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5409,	// (0x00070dd8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0007b260) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0007b260) cell_video_dialer_keypad_pane_g

0x5421,	// (0x00070df0) cell_video_dialer_keypad_pane_t1

0x94d2,	// (0x00074ea1) bg_popup_window_pane_cp012

0xb1d9,	// (0x00076ba8) heading_pane_cp06

0xe143,	// (0x00079b12) ncim_query_content_pane

0x94d2,	// (0x00074ea1) bg_popup_heading_pane_cp01

0xe14b,	// (0x00079b1a) ncim_heading_pane_t1

0xe159,	// (0x00079b28) ncim_indicator_popup_pane

0xe16b,	// (0x00079b3a) ncim_query_button_pane

0xe17f,	// (0x00079b4e) ncim_query_content_pane_t1

0xe191,	// (0x00079b60) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007b5ca) ncim_query_content_pane_t

0xe1cb,	// (0x00079b9a) ncim_query_list_pane

0xe1dd,	// (0x00079bac) ncim_query_popup_pane

0xe159,	// (0x00079b28) ncim_indicator_popup_pane_ParamLimits

0x75da,	// (0x00072fa9) ncim_query_content_pane_g1_ParamLimits

0x75da,	// (0x00072fa9) ncim_query_content_pane_g1

0xe17f,	// (0x00079b4e) ncim_query_content_pane_t1_ParamLimits

0xe191,	// (0x00079b60) ncim_query_content_pane_t2_ParamLimits

0x75e6,	// (0x00072fb5) ncim_query_content_pane_t3_ParamLimits

0x75e6,	// (0x00072fb5) ncim_query_content_pane_t3

0x760e,	// (0x00072fdd) ncim_query_content_pane_t4_ParamLimits

0x760e,	// (0x00072fdd) ncim_query_content_pane_t4

0x7636,	// (0x00073005) ncim_query_content_pane_t5_ParamLimits

0x7636,	// (0x00073005) ncim_query_content_pane_t5

0xe1a3,	// (0x00079b72) ncim_query_content_pane_t6_ParamLimits

0xe1a3,	// (0x00079b72) ncim_query_content_pane_t6

0xfbfb,	// (0x0007b5ca) ncim_query_content_pane_t_ParamLimits

0xe1cb,	// (0x00079b9a) ncim_query_list_pane_ParamLimits

0xe1dd,	// (0x00079bac) ncim_query_popup_pane_ParamLimits

0xe1f1,	// (0x00079bc0) wait_bar_pane_cp04

0x94d2,	// (0x00074ea1) input_focus_pane_cp011

0xe1f9,	// (0x00079bc8) ncim_query_popup_pane_t1

0xe207,	// (0x00079bd6) ncim_list_query_list_pane_ParamLimits

0xe207,	// (0x00079bd6) ncim_list_query_list_pane

0x94d2,	// (0x00074ea1) bg_button_pane_cp027

0xe214,	// (0x00079be3) ncim_query_button_pane_g1

0x94d2,	// (0x00074ea1) list_highlight_pane_cp012

0xe21e,	// (0x00079bed) ncim_list_query_list_pane_g1

0xe226,	// (0x00079bf5) ncim_list_query_list_pane_t1

0x9d9d,	// (0x0007576c) cam4_indicators_pane_g3_ParamLimits

0x9d9d,	// (0x0007576c) cam4_indicators_pane_g3

0x9e1d,	// (0x000757ec) vid4_indicators_pane_g5_ParamLimits

0x9e1d,	// (0x000757ec) vid4_indicators_pane_g5

0x9f0b,	// (0x000758da) vid4_progress_pane_g5_ParamLimits

0x9f0b,	// (0x000758da) vid4_progress_pane_g5

0x74c5,	// (0x00072e94) main_ncimui_pane_g1

0x752e,	// (0x00072efd) ncimui_group_query_pane_ParamLimits

0x752e,	// (0x00072efd) ncimui_group_query_pane

0x7576,	// (0x00072f45) ncimui_list_pane_ParamLimits

0x7576,	// (0x00072f45) ncimui_list_pane

0x759d,	// (0x00072f6c) ncimui_text_pane_ParamLimits

0x759d,	// (0x00072f6c) ncimui_text_pane

0x765e,	// (0x0007302d) ncimui_text_pane_t1_ParamLimits

0x765e,	// (0x0007302d) ncimui_text_pane_t1

0xe234,	// (0x00079c03) ncimui_list_single_graphic_pane_ParamLimits

0xe234,	// (0x00079c03) ncimui_list_single_graphic_pane

0x767c,	// (0x0007304b) ncimui_query_pane_ParamLimits

0x767c,	// (0x0007304b) ncimui_query_pane

0x94d2,	// (0x00074ea1) list_highlight_pane_cp013

0xe244,	// (0x00079c13) ncim_list_query_list_pane_t1_copy1

0xe21e,	// (0x00079bed) ncim_list_single_graphic_pane_g1

0x768f,	// (0x0007305e) ncim_query_button_pane_cp01

0x769b,	// (0x0007306a) ncim_query_entry_pane_ParamLimits

0x769b,	// (0x0007306a) ncim_query_entry_pane

0x76ae,	// (0x0007307d) ncimui_query_pane_g1

0x76ba,	// (0x00073089) ncimui_query_pane_t1_ParamLimits

0x76ba,	// (0x00073089) ncimui_query_pane_t1

0xa542,	// (0x00075f11) input_focus_pane_cp012

0xe252,	// (0x00079c21) ncim_query_entry_pane_t1

0xa432,	// (0x00075e01) main_im_pane_ParamLimits

0x954a,	// (0x00074f19) main_mobtv_pane_ParamLimits

0x954a,	// (0x00074f19) main_mobtv_pane

0x7285,	// (0x00072c54) main_cset6_slider_pane_g18_ParamLimits

0x7285,	// (0x00072c54) main_cset6_slider_pane_g18

0x7291,	// (0x00072c60) main_cset6_slider_pane_g19_ParamLimits

0x7291,	// (0x00072c60) main_cset6_slider_pane_g19

0x76d3,	// (0x000730a2) bg_main_mobtv_pane_ParamLimits

0x76d3,	// (0x000730a2) bg_main_mobtv_pane

0x76e1,	// (0x000730b0) main_mobtv_info_pane

0x76ea,	// (0x000730b9) main_mobtv_loading_pane_ParamLimits

0x76ea,	// (0x000730b9) main_mobtv_loading_pane

0xe264,	// (0x00079c33) main_mobtv_pg_channel_list_pane

0xe26e,	// (0x00079c3d) main_mobtv_pg_hdr_pane

0x76f7,	// (0x000730c6) main_mobtv_programe_curr_pane_ParamLimits

0x76f7,	// (0x000730c6) main_mobtv_programe_curr_pane

0x7704,	// (0x000730d3) main_mobtv_programe_next_pane_ParamLimits

0x7704,	// (0x000730d3) main_mobtv_programe_next_pane

0xe277,	// (0x00079c46) popup_mobtv_noti_window

0xcd5f,	// (0x0007872e) main_tv_pg_hdr_pane_g1

0xe27f,	// (0x00079c4e) main_tv_pg_hdr_pane_g2

0xe287,	// (0x00079c56) main_tv_pg_hdr_pane_g3

0xe28f,	// (0x00079c5e) main_tv_pg_hdr_pane_g4

0xe297,	// (0x00079c66) main_tv_pg_hdr_pane_g5

0xe2a1,	// (0x00079c70) main_tv_pg_hdr_pane_g6

0xe2ab,	// (0x00079c7a) main_tv_pg_hdr_pane_g7

0xe2b5,	// (0x00079c84) main_tv_pg_hdr_pane_g8

0xe2bf,	// (0x00079c8e) main_tv_pg_hdr_pane_g9

0xe2c9,	// (0x00079c98) main_tv_pg_hdr_pane_g10

0xe2d3,	// (0x00079ca2) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007b5d7) main_tv_pg_hdr_pane_g

0xe2dd,	// (0x00079cac) main_tv_pg_hdr_pane_t1

0xe2eb,	// (0x00079cba) main_tv_pg_hdr_pane_t2

0xe2f9,	// (0x00079cc8) main_tv_pg_hdr_pane_t3

0xe309,	// (0x00079cd8) main_tv_pg_hdr_pane_t4

0xe319,	// (0x00079ce8) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007b5ee) main_tv_pg_hdr_pane_t

0xe329,	// (0x00079cf8) single_mobtv_pg_channel_pane_ParamLimits

0xe329,	// (0x00079cf8) single_mobtv_pg_channel_pane

0xe33b,	// (0x00079d0a) single_mobtv_pg_channel_table_pane

0xe344,	// (0x00079d13) single_mobtv_pg_channel_thumb_pane

0xe34d,	// (0x00079d1c) single_tv_pg_channel_pane_g1

0xe356,	// (0x00079d25) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007b5f9) single_tv_pg_channel_pane_g

0xcfc2,	// (0x00078991) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfc2,	// (0x00078991) bg_single_mobtv_pg_channel_thumb_pane

0xe35f,	// (0x00079d2e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe35f,	// (0x00079d2e) single_mobtv_pg_channel_thumb_pane_g1

0xe36d,	// (0x00079d3c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe36d,	// (0x00079d3c) single_mobtv_pg_channel_thumb_pane_g2

0xe379,	// (0x00079d48) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe379,	// (0x00079d48) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007b5fe) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007b5fe) single_mobtv_pg_channel_thumb_pane_g

0xe385,	// (0x00079d54) single_mobtv_pg_channel_thumb_pane_t1

0xe393,	// (0x00079d62) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007b605) single_mobtv_pg_channel_thumb_pane_t

0xcd5f,	// (0x0007872e) bg_single_mobtv_pg_channel_table_pane_g1

0xcd5f,	// (0x0007872e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0007b0a7) bg_single_mobtv_pg_channel_table_pane_g

0xe3a1,	// (0x00079d70) single_mobtv_pg_channel_table_pane_t1

0xe3af,	// (0x00079d7e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007b60a) single_mobtv_pg_channel_table_pane_t

0x7719,	// (0x000730e8) main_mobtv_info_pane_g1_ParamLimits

0x7719,	// (0x000730e8) main_mobtv_info_pane_g1

0x7737,	// (0x00073106) main_mobtv_info_pane_t1_ParamLimits

0x7737,	// (0x00073106) main_mobtv_info_pane_t1

0x77af,	// (0x0007317e) main_mobtv_info_pane_t2_ParamLimits

0x77af,	// (0x0007317e) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007b614) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007b614) main_mobtv_info_pane_t

0x783e,	// (0x0007320d) wait_bar_pane_cp05

0x7850,	// (0x0007321f) main_mobtv_loading_pane_g1_ParamLimits

0x7850,	// (0x0007321f) main_mobtv_loading_pane_g1

0x7863,	// (0x00073232) main_mobtv_loading_pane_g2_ParamLimits

0x7863,	// (0x00073232) main_mobtv_loading_pane_g2

0x786f,	// (0x0007323e) main_mobtv_loading_pane_g3_ParamLimits

0x786f,	// (0x0007323e) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007b61b) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007b61b) main_mobtv_loading_pane_g

0xe3bd,	// (0x00079d8c) main_mobtv_loading_pane_t1_ParamLimits

0xe3bd,	// (0x00079d8c) main_mobtv_loading_pane_t1

0xe3d5,	// (0x00079da4) main_mobtv_loading_pane_t2_ParamLimits

0xe3d5,	// (0x00079da4) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007b622) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007b622) main_mobtv_loading_pane_t

0x7882,	// (0x00073251) wait_bar_pane_cp06_ParamLimits

0x7882,	// (0x00073251) wait_bar_pane_cp06

0xe3f9,	// (0x00079dc8) main_mobtv_programe_curr_pane_t1

0xe407,	// (0x00079dd6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007b627) main_mobtv_programe_curr_pane_t

0xe415,	// (0x00079de4) main_mobtv_programe_next_pane_t1

0xe423,	// (0x00079df2) main_mobtv_programe_next_pane_t2

0xe431,	// (0x00079e00) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007b62c) main_mobtv_programe_next_pane_t

0x94d2,	// (0x00074ea1) bg_popup_mobtv_noti_window_pane

0xe43f,	// (0x00079e0e) popup_mobtv_noti_window_g1

0xe447,	// (0x00079e16) popup_mobtv_noti_window_t1

0xe455,	// (0x00079e24) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007b633) popup_mobtv_noti_window_t

0xcd5f,	// (0x0007872e) bg_popup_mobtv_noti_window_pane_g1

0x9558,	// (0x00074f27) sc_clock_pane

0x9558,	// (0x00074f27) main_fs_bigclock_pane

0x6e91,	// (0x00072860) blid2_tripm_pane_t4_ParamLimits

0x6e91,	// (0x00072860) blid2_tripm_pane_t4

0x7891,	// (0x00073260) sc_clock_pane_g1_ParamLimits

0x7891,	// (0x00073260) sc_clock_pane_g1

0x78a3,	// (0x00073272) sc_clock_pane_t1_ParamLimits

0x78a3,	// (0x00073272) sc_clock_pane_t1

0x78c5,	// (0x00073294) sc_clock_pane_t2_ParamLimits

0x78c5,	// (0x00073294) sc_clock_pane_t2

0x78dd,	// (0x000732ac) sc_clock_pane_t3_ParamLimits

0x78dd,	// (0x000732ac) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007b638) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007b638) sc_clock_pane_t

0x8952,	// (0x00074321) main_fs_bigclock_indicator_pane_ParamLimits

0x8952,	// (0x00074321) main_fs_bigclock_indicator_pane

0x7983,	// (0x00073352) main_fs_bigclock_pane_g1_ParamLimits

0x7983,	// (0x00073352) main_fs_bigclock_pane_g1

0x895e,	// (0x0007432d) main_fs_bigclock_pane_t1_ParamLimits

0x895e,	// (0x0007432d) main_fs_bigclock_pane_t1

0x8970,	// (0x0007433f) main_fs_bigclock_pane_t2_ParamLimits

0x8970,	// (0x0007433f) main_fs_bigclock_pane_t2

0x8984,	// (0x00074353) main_fs_bigclock_pane_t3_ParamLimits

0x8984,	// (0x00074353) main_fs_bigclock_pane_t3

0x0002,

0xfe64,	// (0x0007b833) main_fs_bigclock_pane_t_ParamLimits

0xfe64,	// (0x0007b833) main_fs_bigclock_pane_t

0xecb2,	// (0x0007a681) main_fs_bigclock_indicator_pane_g1

0xe173,	// (0x00079b42) ncim_query_content_pane_g2_ParamLimits

0xe173,	// (0x00079b42) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007b5c5) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007b5c5) ncim_query_content_pane_g

0x78f6,	// (0x000732c5) sc_clock_pane_t4_ParamLimits

0x78f6,	// (0x000732c5) sc_clock_pane_t4

0x954a,	// (0x00074f19) main_radioblah_pane

0x9d01,	// (0x000756d0) cell_call4_button_pane_t1_copy1_ParamLimits

0x9d01,	// (0x000756d0) cell_call4_button_pane_t1_copy1

0x74dd,	// (0x00072eac) main_ncimui_pane_t1_ParamLimits

0x74dd,	// (0x00072eac) main_ncimui_pane_t1

0x74f7,	// (0x00072ec6) main_ncimui_pane_t2_ParamLimits

0x74f7,	// (0x00072ec6) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007b5be) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007b5be) main_ncimui_pane_t

0xe59a,	// (0x00079f69) main_radioblah_anim_pane_ParamLimits

0xe59a,	// (0x00079f69) main_radioblah_anim_pane

0xe5ab,	// (0x00079f7a) main_radioblah_info_pane_ParamLimits

0xe5ab,	// (0x00079f7a) main_radioblah_info_pane

0xe5bf,	// (0x00079f8e) main_radioblah_pane_t1_ParamLimits

0xe5bf,	// (0x00079f8e) main_radioblah_pane_t1

0xe5db,	// (0x00079faa) main_radioblah_pane_t2_ParamLimits

0xe5db,	// (0x00079faa) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007b659) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007b659) main_radioblah_pane_t

0x79e2,	// (0x000733b1) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79e2,	// (0x000733b1) main_radioblah_rocker_ctrl_pane

0xe623,	// (0x00079ff2) main_radioblah_info_pane_t1_ParamLimits

0xe623,	// (0x00079ff2) main_radioblah_info_pane_t1

0x7a3a,	// (0x00073409) main_radioblah_info_pane_t2_ParamLimits

0x7a3a,	// (0x00073409) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007b662) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007b662) main_radioblah_info_pane_t

0xcd5f,	// (0x0007872e) main_radioblah_rocker_ctrl_pane_g1

0x7aea,	// (0x000734b9) main_radioblah_rocker_ctrl_pane_g2

0x7af2,	// (0x000734c1) main_radioblah_rocker_ctrl_pane_g3

0x7afa,	// (0x000734c9) main_radioblah_rocker_ctrl_pane_g4

0x7b02,	// (0x000734d1) main_radioblah_rocker_ctrl_pane_g5

0x7b0a,	// (0x000734d9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007b66b) main_radioblah_rocker_ctrl_pane_g

0x715b,	// (0x00072b2a) main_cset_text2_pane_t1_copy1_ParamLimits

0x9d5f,	// (0x0007572e) cam4_image_uncrop_qvga_pane

0x9dc6,	// (0x00075795) vid4_image_uncrop_qcif_pane

0x9f41,	// (0x00075910) cam6_image_uncrop_qvga_pane_ParamLimits

0x9f41,	// (0x00075910) cam6_image_uncrop_qvga_pane

0xde56,	// (0x00079825) vid6_image_uncrop_qcif_pane_ParamLimits

0xde56,	// (0x00079825) vid6_image_uncrop_qcif_pane

0x94d2,	// (0x00074ea1) bg_popup_preview_window_pane_cp03

0xe125,	// (0x00079af4) list_cset_text2_pane

0xe12d,	// (0x00079afc) main_cset6_text2_pane_g1

0xe135,	// (0x00079b04) main_cset6_text2_pane_t1

0x7b12,	// (0x000734e1) list_cset_text2_pane_t1_ParamLimits

0x7b12,	// (0x000734e1) list_cset_text2_pane_t1

0x954a,	// (0x00074f19) main_radioblah_pane_ParamLimits

0x782a,	// (0x000731f9) main_mobtv_info_pane_t3_ParamLimits

0x782a,	// (0x000731f9) main_mobtv_info_pane_t3

0x79d0,	// (0x0007339f) main_radioblah_pane_g1

0x7a0a,	// (0x000733d9) main_radioblah_info_pane_g1

0x7a8f,	// (0x0007345e) main_radioblah_info_pane_t3_ParamLimits

0x7a8f,	// (0x0007345e) main_radioblah_info_pane_t3

0x224d,	// (0x0006dc1c) highlight_cell_cale_month_pane_ParamLimits

0x224d,	// (0x0006dc1c) highlight_cell_cale_month_pane

0x9558,	// (0x00074f27) main_phob_fisheye_pane

0xd0be,	// (0x00078a8d) scroll_pane_cp0031_ParamLimits

0xd0be,	// (0x00078a8d) scroll_pane_cp0031

0xdf88,	// (0x00079957) wait_bar_pane_cp08_ParamLimits

0x71e0,	// (0x00072baf) cset_list_set_pane_copy1_ParamLimits

0xe65d,	// (0x0007a02c) highlight_cell_cale_month_pane_g1

0x7b2b,	// (0x000734fa) highlight_cell_cale_month_pane_t1

0xdbf9,	// (0x000795c8) list_gen_pane_cp01

0xd874,	// (0x00079243) scroll_pane_01

0x7b39,	// (0x00073508) list_single_double_fisheye_pane

0x7b42,	// (0x00073511) list_double_fisheye_pane_g1_ParamLimits

0x7b42,	// (0x00073511) list_double_fisheye_pane_g1

0x7b4e,	// (0x0007351d) list_double_fisheye_pane_g2_ParamLimits

0x7b4e,	// (0x0007351d) list_double_fisheye_pane_g2

0x7b62,	// (0x00073531) list_double_fisheye_pane_g3_ParamLimits

0x7b62,	// (0x00073531) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007b678) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007b678) list_double_fisheye_pane_g

0x7b8b,	// (0x0007355a) list_double_fisheye_pane_t1_ParamLimits

0x7b8b,	// (0x0007355a) list_double_fisheye_pane_t1

0x7ba6,	// (0x00073575) list_double_fisheye_pane_t2_ParamLimits

0x7ba6,	// (0x00073575) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007b683) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007b683) list_double_fisheye_pane_t

0x9558,	// (0x00074f27) main_call5_pane

0x7921,	// (0x000732f0) sc_swipe_pane_ParamLimits

0x7921,	// (0x000732f0) sc_swipe_pane

0x7bdb,	// (0x000735aa) call5_image_pane_ParamLimits

0x7bdb,	// (0x000735aa) call5_image_pane

0x7bf8,	// (0x000735c7) call5_swipe_1_pane_ParamLimits

0x7bf8,	// (0x000735c7) call5_swipe_1_pane

0x7c0b,	// (0x000735da) call5_swipe_2_pane_ParamLimits

0x7c0b,	// (0x000735da) call5_swipe_2_pane

0x7c36,	// (0x00073605) popup_call5_audio_first_window_ParamLimits

0x7c36,	// (0x00073605) popup_call5_audio_first_window

0xcfc2,	// (0x00078991) call5_swipe_1_pane_g1_ParamLimits

0xcfc2,	// (0x00078991) call5_swipe_1_pane_g1

0xe665,	// (0x0007a034) call5_swipe_1_pane_g2_ParamLimits

0xe665,	// (0x0007a034) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007b688) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007b688) call5_swipe_1_pane_g

0xe671,	// (0x0007a040) call5_swipe_1_pane_t1_ParamLimits

0xe671,	// (0x0007a040) call5_swipe_1_pane_t1

0xcfc2,	// (0x00078991) call5_swipe_2_pane_g1_ParamLimits

0xcfc2,	// (0x00078991) call5_swipe_2_pane_g1

0xe686,	// (0x0007a055) call5_swipe_2_pane_g2_ParamLimits

0xe686,	// (0x0007a055) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007b68d) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007b68d) call5_swipe_2_pane_g

0xe692,	// (0x0007a061) call5_swipe_2_pane_t1_ParamLimits

0xe692,	// (0x0007a061) call5_swipe_2_pane_t1

0xe6a7,	// (0x0007a076) sc_swipe_pane_g1_ParamLimits

0xe6a7,	// (0x0007a076) sc_swipe_pane_g1

0xe6b4,	// (0x0007a083) sc_swipe_pane_g2_ParamLimits

0xe6b4,	// (0x0007a083) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007b692) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007b692) sc_swipe_pane_g

0xe6c0,	// (0x0007a08f) sc_swipe_pane_t1_ParamLimits

0xe6c0,	// (0x0007a08f) sc_swipe_pane_t1

0x9558,	// (0x00074f27) main_cmail_launcher_pane

0x7c47,	// (0x00073616) aid_size_cell_cmail_l_ParamLimits

0x7c47,	// (0x00073616) aid_size_cell_cmail_l

0x7c55,	// (0x00073624) grid_cmail_l_pane_ParamLimits

0x7c55,	// (0x00073624) grid_cmail_l_pane

0x7c6f,	// (0x0007363e) cell_cmail_l_pane_ParamLimits

0x7c6f,	// (0x0007363e) cell_cmail_l_pane

0xe6d5,	// (0x0007a0a4) cell_cmail_l_pane_g1_ParamLimits

0xe6d5,	// (0x0007a0a4) cell_cmail_l_pane_g1

0xe6e1,	// (0x0007a0b0) cell_cmail_l_pane_t1_ParamLimits

0xe6e1,	// (0x0007a0b0) cell_cmail_l_pane_t1

0xe6f7,	// (0x0007a0c6) cell_cmail_l_pane_t2_ParamLimits

0xe6f7,	// (0x0007a0c6) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007b697) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007b697) cell_cmail_l_pane_t

0xa542,	// (0x00075f11) grid_highlight_pane_cp018_ParamLimits

0xa542,	// (0x00075f11) grid_highlight_pane_cp018

0x02e7,	// (0x0006bcb6) main2_pane_ParamLimits

0x02e7,	// (0x0006bcb6) main2_pane

0xa4d4,	// (0x00075ea3) popup_sp_fs_action_menu_bg_pane_g1

0xa4dc,	// (0x00075eab) popup_sp_fs_action_menu_bg_pane_g2

0xa4e4,	// (0x00075eb3) popup_sp_fs_action_menu_bg_pane_g3

0xa4ec,	// (0x00075ebb) popup_sp_fs_action_menu_bg_pane_g4

0xa4f4,	// (0x00075ec3) popup_sp_fs_action_menu_bg_pane_g5

0xa4fc,	// (0x00075ecb) popup_sp_fs_action_menu_bg_pane_g6

0xa9eb,	// (0x000763ba) popup_sp_fs_action_menu_bg_pane_g7

0xa9f3,	// (0x000763c2) popup_sp_fs_action_menu_bg_pane_g8

0xa9fb,	// (0x000763ca) popup_sp_fs_action_menu_bg_pane_g9

0xaa03,	// (0x000763d2) popup_sp_fs_action_menu_bg_pane_g10

0xaa03,	// (0x000763d2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0007ab55) popup_sp_fs_action_menu_bg_pane_g

0x1213,	// (0x0006cbe2) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x2_t3_g3_g1

0x121f,	// (0x0006cbee) list_medium_line_x2_t3_g3_g2_ParamLimits

0x121f,	// (0x0006cbee) list_medium_line_x2_t3_g3_g2

0x122b,	// (0x0006cbfa) list_medium_line_x2_t3_g3_g3_ParamLimits

0x122b,	// (0x0006cbfa) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0007ac03) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0007ac03) list_medium_line_x2_t3_g3_g

0x1237,	// (0x0006cc06) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1237,	// (0x0006cc06) list_medium_line_x2_t3_g3_t1

0x124c,	// (0x0006cc1b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x124c,	// (0x0006cc1b) list_medium_line_x2_t3_g3_t2

0x1260,	// (0x0006cc2f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1260,	// (0x0006cc2f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0007ac0a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0007ac0a) list_medium_line_x2_t3_g3_t

0x1213,	// (0x0006cbe2) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x2_t3_g2_g1

0x122b,	// (0x0006cbfa) list_medium_line_x2_t3_g2_g2_ParamLimits

0x122b,	// (0x0006cbfa) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0007ac11) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0007ac11) list_medium_line_x2_t3_g2_g

0x1275,	// (0x0006cc44) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1275,	// (0x0006cc44) list_medium_line_x2_t3_g2_t1

0x128b,	// (0x0006cc5a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x128b,	// (0x0006cc5a) list_medium_line_x2_t3_g2_t2

0x129d,	// (0x0006cc6c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x129d,	// (0x0006cc6c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0007ac16) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0007ac16) list_medium_line_x2_t3_g2_t

0x1213,	// (0x0006cbe2) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x2_t4_g4_g1

0x12ba,	// (0x0006cc89) list_medium_line_x2_t4_g4_g2_ParamLimits

0x12ba,	// (0x0006cc89) list_medium_line_x2_t4_g4_g2

0x121f,	// (0x0006cbee) list_medium_line_x2_t4_g4_g3_ParamLimits

0x121f,	// (0x0006cbee) list_medium_line_x2_t4_g4_g3

0x12c6,	// (0x0006cc95) list_medium_line_x2_t4_g4_g4_ParamLimits

0x12c6,	// (0x0006cc95) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0007ac1d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0007ac1d) list_medium_line_x2_t4_g4_g

0x12d2,	// (0x0006cca1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x12d2,	// (0x0006cca1) list_medium_line_x2_t4_g4_t1

0x12ec,	// (0x0006ccbb) list_medium_line_x2_t4_g4_t2_ParamLimits

0x12ec,	// (0x0006ccbb) list_medium_line_x2_t4_g4_t2

0x1302,	// (0x0006ccd1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1302,	// (0x0006ccd1) list_medium_line_x2_t4_g4_t3

0x1317,	// (0x0006cce6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1317,	// (0x0006cce6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0007ac26) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0007ac26) list_medium_line_x2_t4_g4_t

0x1213,	// (0x0006cbe2) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x2_t2_g4_g1

0x12ba,	// (0x0006cc89) list_medium_line_x2_t2_g4_g2_ParamLimits

0x12ba,	// (0x0006cc89) list_medium_line_x2_t2_g4_g2

0x121f,	// (0x0006cbee) list_medium_line_x2_t2_g4_g3_ParamLimits

0x121f,	// (0x0006cbee) list_medium_line_x2_t2_g4_g3

0x122b,	// (0x0006cbfa) list_medium_line_x2_t2_g4_g4_ParamLimits

0x122b,	// (0x0006cbfa) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0007ac8d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0007ac8d) list_medium_line_x2_t2_g4_g

0x2273,	// (0x0006dc42) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2273,	// (0x0006dc42) list_medium_line_x2_t2_g4_t1

0x1260,	// (0x0006cc2f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1260,	// (0x0006cc2f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0007ac96) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0007ac96) list_medium_line_x2_t2_g4_t

0x1213,	// (0x0006cbe2) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x2_t2_g3_g1

0x121f,	// (0x0006cbee) list_medium_line_x2_t2_g3_g2_ParamLimits

0x121f,	// (0x0006cbee) list_medium_line_x2_t2_g3_g2

0x122b,	// (0x0006cbfa) list_medium_line_x2_t2_g3_g3_ParamLimits

0x122b,	// (0x0006cbfa) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0007ac03) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0007ac03) list_medium_line_x2_t2_g3_g

0x2288,	// (0x0006dc57) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2288,	// (0x0006dc57) list_medium_line_x2_t2_g3_t1

0x1260,	// (0x0006cc2f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1260,	// (0x0006cc2f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0007ac9b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0007ac9b) list_medium_line_x2_t2_g3_t

0x23d1,	// (0x0006dda0) main_sp_fs_list_pane_ParamLimits

0x23d1,	// (0x0006dda0) main_sp_fs_list_pane

0xc9e6,	// (0x000783b5) sp_fs_scroll_pane_ParamLimits

0xc9e6,	// (0x000783b5) sp_fs_scroll_pane

0x23dd,	// (0x0006ddac) list_medium_line_x2_t3_t1

0x23ed,	// (0x0006ddbc) list_medium_line_x2_t3_t2

0x23fb,	// (0x0006ddca) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0007ace6) list_medium_line_x2_t3_t

0x2409,	// (0x0006ddd8) list_medium_line_x3_t4_t1

0x2419,	// (0x0006dde8) list_medium_line_x3_t4_t2

0x2427,	// (0x0006ddf6) list_medium_line_x3_t4_t3

0x23fb,	// (0x0006ddca) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0007aced) list_medium_line_x3_t4_t

0x2435,	// (0x0006de04) list_medium_line_x4_t5_t1

0x2445,	// (0x0006de14) list_medium_line_x4_t5_t2

0x2427,	// (0x0006ddf6) list_medium_line_x4_t5_t3

0x2453,	// (0x0006de22) list_medium_line_x4_t5_t4

0x23fb,	// (0x0006ddca) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0007acf6) list_medium_line_x4_t5_t

0x1213,	// (0x0006cbe2) list_medium_line_t4_g4_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_t4_g4_g1

0x2461,	// (0x0006de30) list_medium_line_t4_g4_g2_ParamLimits

0x2461,	// (0x0006de30) list_medium_line_t4_g4_g2

0x246d,	// (0x0006de3c) list_medium_line_t4_g4_g3_ParamLimits

0x246d,	// (0x0006de3c) list_medium_line_t4_g4_g3

0x122b,	// (0x0006cbfa) list_medium_line_t4_g4_g4_ParamLimits

0x122b,	// (0x0006cbfa) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0007ad01) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0007ad01) list_medium_line_t4_g4_g

0x2479,	// (0x0006de48) list_medium_line_t4_g4_t1_ParamLimits

0x2479,	// (0x0006de48) list_medium_line_t4_g4_t1

0x248e,	// (0x0006de5d) list_medium_line_t4_g4_t2_ParamLimits

0x248e,	// (0x0006de5d) list_medium_line_t4_g4_t2

0x24a3,	// (0x0006de72) list_medium_line_t4_g4_t3_ParamLimits

0x24a3,	// (0x0006de72) list_medium_line_t4_g4_t3

0x1260,	// (0x0006cc2f) list_medium_line_t4_g4_t4_ParamLimits

0x1260,	// (0x0006cc2f) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0007ad0a) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0007ad0a) list_medium_line_t4_g4_t

0x256b,	// (0x0006df3a) chi_dic_find_pane_g1

0x35d9,	// (0x0006efa8) main_tport_pane

0x64f1,	// (0x00071ec0) list_medium_line_plain_t1

0x6599,	// (0x00071f68) list_medium_line_t2_g2_g1_ParamLimits

0x6599,	// (0x00071f68) list_medium_line_t2_g2_g1

0x65a5,	// (0x00071f74) list_medium_line_t2_g2_g2_ParamLimits

0x65a5,	// (0x00071f74) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007b3cf) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007b3cf) list_medium_line_t2_g2_g

0x65b1,	// (0x00071f80) list_medium_line_t2_g2_t1_ParamLimits

0x65b1,	// (0x00071f80) list_medium_line_t2_g2_t1

0x65cb,	// (0x00071f9a) list_medium_line_t2_g2_t2_ParamLimits

0x65cb,	// (0x00071f9a) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007b3d4) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007b3d4) list_medium_line_t2_g2_t

0xa681,	// (0x00076050) aid_sp_fs_list_icon_a_sm

0xa689,	// (0x00076058) aid_sp_fs_list_icon_d

0xa691,	// (0x00076060) aid_sp_fs_text_primary

0xdef5,	// (0x000798c4) aid_sp_fs_text_secondary

0x6c3e,	// (0x0007260d) list_medium_line

0x6c3e,	// (0x0007260d) list_medium_line_g2

0x6c3e,	// (0x0007260d) list_medium_line_g3

0x6c3e,	// (0x0007260d) list_medium_line_plain

0x6c3e,	// (0x0007260d) list_medium_line_plain_t2

0x6c3e,	// (0x0007260d) list_medium_line_plain_t3

0x6c3e,	// (0x0007260d) list_medium_line_right_icon

0x6c3e,	// (0x0007260d) list_medium_line_right_iconx2

0x6c3e,	// (0x0007260d) list_medium_line_t2

0x6c3e,	// (0x0007260d) list_medium_line_t2_g2

0x6c3e,	// (0x0007260d) list_medium_line_t2_g3

0x6c3e,	// (0x0007260d) list_medium_line_t2_right_icon

0x6c3e,	// (0x0007260d) list_medium_line_t2_right_iconx2

0x6c3e,	// (0x0007260d) list_medium_line_t3

0x6c3e,	// (0x0007260d) list_medium_line_t3_g2

0x6c3e,	// (0x0007260d) list_medium_line_t3_g3

0x6c3e,	// (0x0007260d) list_medium_line_t3_right_iconx2

0x6c47,	// (0x00072616) list_medium_line_t4_g4

0x6c50,	// (0x0007261f) list_medium_line_x2

0x6c50,	// (0x0007261f) list_medium_line_x2_t2_g2

0x6c50,	// (0x0007261f) list_medium_line_x2_t2_g3

0x6c50,	// (0x0007261f) list_medium_line_x2_t2_g4

0x6c50,	// (0x0007261f) list_medium_line_x2_t3

0x6c50,	// (0x0007261f) list_medium_line_x2_t3_g2

0x6c50,	// (0x0007261f) list_medium_line_x2_t3_g3

0x6c50,	// (0x0007261f) list_medium_line_x2_t3_g4

0x6c50,	// (0x0007261f) list_medium_line_x2_t4_g2

0x6c50,	// (0x0007261f) list_medium_line_x2_t4_g4

0x6c59,	// (0x00072628) list_medium_line_x3

0x6c59,	// (0x00072628) list_medium_line_x3_t4

0x6c59,	// (0x00072628) list_medium_line_x3_t4_g4

0x6c47,	// (0x00072616) list_medium_line_x4_t4

0x6c47,	// (0x00072616) list_medium_line_x4_t4_g7

0x6c47,	// (0x00072616) list_medium_line_x4_t5

0x6c62,	// (0x00072631) list_single_fs_dyc_pane_ParamLimits

0x6c62,	// (0x00072631) list_single_fs_dyc_pane

0x1213,	// (0x0006cbe2) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x4_t4_g7_g1

0x73d9,	// (0x00072da8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x73d9,	// (0x00072da8) list_medium_line_x4_t4_g7_g2

0x73e5,	// (0x00072db4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x73e5,	// (0x00072db4) list_medium_line_x4_t4_g7_g3

0x73f4,	// (0x00072dc3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x73f4,	// (0x00072dc3) list_medium_line_x4_t4_g7_g4

0x7400,	// (0x00072dcf) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7400,	// (0x00072dcf) list_medium_line_x4_t4_g7_g5

0x740f,	// (0x00072dde) list_medium_line_x4_t4_g7_g6_ParamLimits

0x740f,	// (0x00072dde) list_medium_line_x4_t4_g7_g6

0x741e,	// (0x00072ded) list_medium_line_x4_t4_g7_g7_ParamLimits

0x741e,	// (0x00072ded) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007b59f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007b59f) list_medium_line_x4_t4_g7_g

0x742a,	// (0x00072df9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x742a,	// (0x00072df9) list_medium_line_x4_t4_g7_t1

0x743f,	// (0x00072e0e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x743f,	// (0x00072e0e) list_medium_line_x4_t4_g7_t2

0x7454,	// (0x00072e23) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7454,	// (0x00072e23) list_medium_line_x4_t4_g7_t3

0x7469,	// (0x00072e38) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7469,	// (0x00072e38) list_medium_line_x4_t4_g7_t4

0x747b,	// (0x00072e4a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x747b,	// (0x00072e4a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007b5ae) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007b5ae) list_medium_line_x4_t4_g7_t

0x748d,	// (0x00072e5c) list_single_dyc_row_pane_ParamLimits

0x748d,	// (0x00072e5c) list_single_dyc_row_pane

0x7bc8,	// (0x00073597) call5_gesture_pane_ParamLimits

0x7bc8,	// (0x00073597) call5_gesture_pane

0x7c1e,	// (0x000735ed) call5_windows_pane_ParamLimits

0x7c1e,	// (0x000735ed) call5_windows_pane

0x7c89,	// (0x00073658) call5_swipe_1_pane_cp_ParamLimits

0x7c89,	// (0x00073658) call5_swipe_1_pane_cp

0x7c95,	// (0x00073664) call5_swipe_2_pane_cp_ParamLimits

0x7c95,	// (0x00073664) call5_swipe_2_pane_cp

0xaae7,	// (0x000764b6) call5_image_pane_cp

0x7ca1,	// (0x00073670) popup_call5_audio_first_window_cp_ParamLimits

0x7ca1,	// (0x00073670) popup_call5_audio_first_window_cp

0xe6a7,	// (0x0007a076) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6a7,	// (0x0007a076) call5_swipe_1_pane_g1_cp

0xe714,	// (0x0007a0e3) call5_swipe_1_pane_g2_cp

0xe6c0,	// (0x0007a08f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6c0,	// (0x0007a08f) call5_swipe_1_pane_t1_cp

0xe6a7,	// (0x0007a076) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6a7,	// (0x0007a076) call5_swipe_2_pane_g1_cp

0xe71c,	// (0x0007a0eb) call5_swipe_2_pane_g2_cp

0xe724,	// (0x0007a0f3) call5_swipe_2_pane_t1_cp_ParamLimits

0xe724,	// (0x0007a0f3) call5_swipe_2_pane_t1_cp

0xa542,	// (0x00075f11) main_sp_fs_email_pane

0xe739,	// (0x0007a108) main_sp_fs_listscroll_pane_te

0x7caf,	// (0x0007367e) popup_sp_fs_action_menu_pane_ParamLimits

0x7caf,	// (0x0007367e) popup_sp_fs_action_menu_pane

0xcd5f,	// (0x0007872e) bg_sp_fs_ctrlbar_pane_g1

0xe742,	// (0x0007a111) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe74b,	// (0x0007a11a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe754,	// (0x0007a123) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd5f,	// (0x0007872e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007b69c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb44,	// (0x00078513) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb44,	// (0x00078513) bg_sp_fs_ctrlbar_ddmenu_pane

0xe75d,	// (0x0007a12c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe75d,	// (0x0007a12c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe769,	// (0x0007a138) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe769,	// (0x0007a138) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007b6a5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007b6a5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe775,	// (0x0007a144) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe775,	// (0x0007a144) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7cf3,	// (0x000736c2) list_medium_line_t2_right_icon_g1

0x7cfb,	// (0x000736ca) list_medium_line_t2_right_icon_t1

0x7d0b,	// (0x000736da) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007b6aa) list_medium_line_t2_right_icon_t

0xc94b,	// (0x0007831a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc94b,	// (0x0007831a) bg_sp_fs_ctrlbar_pane

0x7d65,	// (0x00073734) main_sp_fs_ctrlbar_button_pane_cp01

0x7d6f,	// (0x0007373e) main_sp_fs_ctrlbar_ddmenu_pane

0xe7c7,	// (0x0007a196) main_sp_fs_ctrlbar_pane_g1

0xe7d3,	// (0x0007a1a2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007b6af) main_sp_fs_ctrlbar_pane_g

0xe7df,	// (0x0007a1ae) main_sp_fs_ctrlbar_pane_t1

0x7d79,	// (0x00073748) main_sp_fs_ctrlbar_pane

0x7d9d,	// (0x0007376c) main_sp_fs_listscroll_pane_te_cp01

0x7dbd,	// (0x0007378c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7dbd,	// (0x0007378c) popup_sp_fs_action_menu_pane_cp01

0xa542,	// (0x00075f11) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa542,	// (0x00075f11) bg_sp_fs_highlight_list_pane_cp01

0xa69a,	// (0x00076069) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa69a,	// (0x00076069) sp_fs_action_menu_list_gene_pane_g1

0xe80f,	// (0x0007a1de) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe80f,	// (0x0007a1de) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007b6b9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007b6b9) sp_fs_action_menu_list_gene_pane_g

0xa6a9,	// (0x00076078) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa6a9,	// (0x00076078) sp_fs_action_menu_list_gene_pane_t1

0xa6c1,	// (0x00076090) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa6c1,	// (0x00076090) sp_fs_action_menu_list_gene_pane

0xe81c,	// (0x0007a1eb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe81c,	// (0x0007a1eb) popup_sp_fs_action_menu_bg_pane

0xa6e0,	// (0x000760af) sp_fs_action_menu_list_pane_ParamLimits

0xa6e0,	// (0x000760af) sp_fs_action_menu_list_pane

0x7ded,	// (0x000737bc) sp_fs_scroll_pane_cp01_ParamLimits

0x7ded,	// (0x000737bc) sp_fs_scroll_pane_cp01

0x7e13,	// (0x000737e2) list_medium_line_plain_t2_t1

0x7e23,	// (0x000737f2) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007b6be) list_medium_line_plain_t2_t

0x7e33,	// (0x00073802) list_medium_line_plain_t3_t1

0x7e43,	// (0x00073812) list_medium_line_plain_t3_t2

0x7e51,	// (0x00073820) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007b6c3) list_medium_line_plain_t3_t

0x1213,	// (0x0006cbe2) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x2_t2_g2_g1

0x122b,	// (0x0006cbfa) list_medium_line_x2_t2_g2_g2_ParamLimits

0x122b,	// (0x0006cbfa) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0007ac11) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0007ac11) list_medium_line_x2_t2_g2_g

0x2479,	// (0x0006de48) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2479,	// (0x0006de48) list_medium_line_x2_t2_g2_t1

0x1260,	// (0x0006cc2f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1260,	// (0x0006cc2f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007b6ca) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007b6ca) list_medium_line_x2_t2_g2_t

0x1213,	// (0x0006cbe2) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x2_t4_g2_g1

0x7e5f,	// (0x0007382e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7e5f,	// (0x0007382e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007b6cf) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007b6cf) list_medium_line_x2_t4_g2_g

0x7e71,	// (0x00073840) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e71,	// (0x00073840) list_medium_line_x2_t4_g2_t1

0x7e8b,	// (0x0007385a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e8b,	// (0x0007385a) list_medium_line_x2_t4_g2_t2

0x7ea1,	// (0x00073870) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7ea1,	// (0x00073870) list_medium_line_x2_t4_g2_t3

0x1260,	// (0x0006cc2f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1260,	// (0x0006cc2f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007b6d4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007b6d4) list_medium_line_x2_t4_g2_t

0x7eb6,	// (0x00073885) list_medium_line_t3_right_iconx2_g1

0x7cf3,	// (0x000736c2) list_medium_line_t3_right_iconx2_g2

0x7ebe,	// (0x0007388d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007b6dd) list_medium_line_t3_right_iconx2_g

0x7ec8,	// (0x00073897) list_medium_line_t3_right_iconx2_t1

0x7ed8,	// (0x000738a7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007b6e4) list_medium_line_t3_right_iconx2_t

0x1213,	// (0x0006cbe2) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x3_t4_g4_g1

0x121f,	// (0x0006cbee) list_medium_line_x3_t4_g4_g2_ParamLimits

0x121f,	// (0x0006cbee) list_medium_line_x3_t4_g4_g2

0x2461,	// (0x0006de30) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2461,	// (0x0006de30) list_medium_line_x3_t4_g4_g3

0x7ee6,	// (0x000738b5) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7ee6,	// (0x000738b5) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007b6e9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007b6e9) list_medium_line_x3_t4_g4_g

0x7ef2,	// (0x000738c1) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7ef2,	// (0x000738c1) list_medium_line_x3_t4_g4_t1

0x7f09,	// (0x000738d8) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f09,	// (0x000738d8) list_medium_line_x3_t4_g4_t2

0x248e,	// (0x0006de5d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x248e,	// (0x0006de5d) list_medium_line_x3_t4_g4_t3

0x7f24,	// (0x000738f3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f24,	// (0x000738f3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007b6f2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007b6f2) list_medium_line_x3_t4_g4_t

0x7f41,	// (0x00073910) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f41,	// (0x00073910) list_single_dyc_row_text_pane_t1

0x7f8a,	// (0x00073959) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f8a,	// (0x00073959) list_single_dyc_row_text_pane_t2

0xa700,	// (0x000760cf) list_single_dyc_row_text_pane_t3_ParamLimits

0xa700,	// (0x000760cf) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007b6fb) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007b6fb) list_single_dyc_row_text_pane_t

0xa724,	// (0x000760f3) list_single_dyc_row_pane_g1_ParamLimits

0xa724,	// (0x000760f3) list_single_dyc_row_pane_g1

0xa730,	// (0x000760ff) list_single_dyc_row_pane_g2_ParamLimits

0xa730,	// (0x000760ff) list_single_dyc_row_pane_g2

0xa73c,	// (0x0007610b) list_single_dyc_row_pane_g3_ParamLimits

0xa73c,	// (0x0007610b) list_single_dyc_row_pane_g3

0xa748,	// (0x00076117) list_single_dyc_row_pane_g4_ParamLimits

0xa748,	// (0x00076117) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007b708) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007b708) list_single_dyc_row_pane_g

0xa754,	// (0x00076123) list_single_dyc_row_text_pane_ParamLimits

0xa754,	// (0x00076123) list_single_dyc_row_text_pane

0x94d2,	// (0x00074ea1) bg_sp_fs_scroll_pane

0xe82a,	// (0x0007a1f9) thumb_sp_fs_scroll_pane

0x6599,	// (0x00071f68) list_medium_line_g1_ParamLimits

0x6599,	// (0x00071f68) list_medium_line_g1

0x80bf,	// (0x00073a8e) list_medium_line_t1_ParamLimits

0x80bf,	// (0x00073a8e) list_medium_line_t1

0x1213,	// (0x0006cbe2) list_medium_line_x2_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x2_g1

0x121f,	// (0x0006cbee) list_medium_line_x2_g2_ParamLimits

0x121f,	// (0x0006cbee) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007b711) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007b711) list_medium_line_x2_g

0xa773,	// (0x00076142) list_medium_line_x2_t1_ParamLimits

0xa773,	// (0x00076142) list_medium_line_x2_t1

0x1213,	// (0x0006cbe2) list_medium_line_x3_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x3_g1

0x121f,	// (0x0006cbee) list_medium_line_x3_g2_ParamLimits

0x121f,	// (0x0006cbee) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007b711) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007b711) list_medium_line_x3_g

0xa773,	// (0x00076142) list_medium_line_x3_t1_ParamLimits

0xa773,	// (0x00076142) list_medium_line_x3_t1

0xe833,	// (0x0007a202) thumb_sp_fs_scroll_pane_g1

0xe83c,	// (0x0007a20b) thumb_sp_fs_scroll_pane_g2

0xe845,	// (0x0007a214) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007b716) thumb_sp_fs_scroll_pane_g

0xe833,	// (0x0007a202) bg_sp_fs_scroll_pane_g1

0xe83c,	// (0x0007a20b) bg_sp_fs_scroll_pane_g2

0xe845,	// (0x0007a214) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007b716) bg_sp_fs_scroll_pane_g

0x1213,	// (0x0006cbe2) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1213,	// (0x0006cbe2) list_medium_line_x2_t3_g4_g1

0x12ba,	// (0x0006cc89) list_medium_line_x2_t3_g4_g2_ParamLimits

0x12ba,	// (0x0006cc89) list_medium_line_x2_t3_g4_g2

0x121f,	// (0x0006cbee) list_medium_line_x2_t3_g4_g3_ParamLimits

0x121f,	// (0x0006cbee) list_medium_line_x2_t3_g4_g3

0x122b,	// (0x0006cbfa) list_medium_line_x2_t3_g4_g4_ParamLimits

0x122b,	// (0x0006cbfa) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0007ac8d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0007ac8d) list_medium_line_x2_t3_g4_g

0x80d4,	// (0x00073aa3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80d4,	// (0x00073aa3) list_medium_line_x2_t3_g4_t1

0x80ee,	// (0x00073abd) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80ee,	// (0x00073abd) list_medium_line_x2_t3_g4_t2

0x1260,	// (0x0006cc2f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1260,	// (0x0006cc2f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007b71d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007b71d) list_medium_line_x2_t3_g4_t

0x6599,	// (0x00071f68) list_medium_line_g2_g1_ParamLimits

0x6599,	// (0x00071f68) list_medium_line_g2_g1

0x65a5,	// (0x00071f74) list_medium_line_g2_g2_ParamLimits

0x65a5,	// (0x00071f74) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007b3cf) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007b3cf) list_medium_line_g2_g

0x8108,	// (0x00073ad7) list_medium_line_g2_t1_ParamLimits

0x8108,	// (0x00073ad7) list_medium_line_g2_t1

0x6599,	// (0x00071f68) list_medium_line_t3_g2_g1_ParamLimits

0x6599,	// (0x00071f68) list_medium_line_t3_g2_g1

0x65a5,	// (0x00071f74) list_medium_line_t3_g2_g2_ParamLimits

0x65a5,	// (0x00071f74) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007b3cf) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007b3cf) list_medium_line_t3_g2_g

0x811d,	// (0x00073aec) list_medium_line_t3_g2_t1_ParamLimits

0x811d,	// (0x00073aec) list_medium_line_t3_g2_t1

0x8137,	// (0x00073b06) list_medium_line_t3_g2_t2_ParamLimits

0x8137,	// (0x00073b06) list_medium_line_t3_g2_t2

0x814d,	// (0x00073b1c) list_medium_line_t3_g2_t3_ParamLimits

0x814d,	// (0x00073b1c) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007b724) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007b724) list_medium_line_t3_g2_t

0x7cf3,	// (0x000736c2) list_medium_line_right_icon_g1

0x8167,	// (0x00073b36) list_medium_line_right_icon_t1

0x6599,	// (0x00071f68) list_medium_line_t2_g1_ParamLimits

0x6599,	// (0x00071f68) list_medium_line_t2_g1

0x8175,	// (0x00073b44) list_medium_line_t2_t1_ParamLimits

0x8175,	// (0x00073b44) list_medium_line_t2_t1

0x818f,	// (0x00073b5e) list_medium_line_t2_t2_ParamLimits

0x818f,	// (0x00073b5e) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007b72b) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007b72b) list_medium_line_t2_t

0x6599,	// (0x00071f68) list_medium_line_t3_g1_ParamLimits

0x6599,	// (0x00071f68) list_medium_line_t3_g1

0x81a8,	// (0x00073b77) list_medium_line_t3_t1_ParamLimits

0x81a8,	// (0x00073b77) list_medium_line_t3_t1

0x81c2,	// (0x00073b91) list_medium_line_t3_t2_ParamLimits

0x81c2,	// (0x00073b91) list_medium_line_t3_t2

0x81d8,	// (0x00073ba7) list_medium_line_t3_t3_ParamLimits

0x81d8,	// (0x00073ba7) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007b730) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007b730) list_medium_line_t3_t

0x6599,	// (0x00071f68) list_medium_line_g3_g1_ParamLimits

0x6599,	// (0x00071f68) list_medium_line_g3_g1

0x81ed,	// (0x00073bbc) list_medium_line_g3_g2_ParamLimits

0x81ed,	// (0x00073bbc) list_medium_line_g3_g2

0x65a5,	// (0x00071f74) list_medium_line_g3_g3_ParamLimits

0x65a5,	// (0x00071f74) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007b737) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007b737) list_medium_line_g3_g

0x81f9,	// (0x00073bc8) list_medium_line_g3_t1_ParamLimits

0x81f9,	// (0x00073bc8) list_medium_line_g3_t1

0x6599,	// (0x00071f68) list_medium_line_t2_g3_g1_ParamLimits

0x6599,	// (0x00071f68) list_medium_line_t2_g3_g1

0x81ed,	// (0x00073bbc) list_medium_line_t2_g3_g2_ParamLimits

0x81ed,	// (0x00073bbc) list_medium_line_t2_g3_g2

0x65a5,	// (0x00071f74) list_medium_line_t2_g3_g3_ParamLimits

0x65a5,	// (0x00071f74) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007b737) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007b737) list_medium_line_t2_g3_g

0x820e,	// (0x00073bdd) list_medium_line_t2_g3_t1_ParamLimits

0x820e,	// (0x00073bdd) list_medium_line_t2_g3_t1

0x8228,	// (0x00073bf7) list_medium_line_t2_g3_t2_ParamLimits

0x8228,	// (0x00073bf7) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007b73e) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007b73e) list_medium_line_t2_g3_t

0x6599,	// (0x00071f68) list_medium_line_t3_g3_g1_ParamLimits

0x6599,	// (0x00071f68) list_medium_line_t3_g3_g1

0x81ed,	// (0x00073bbc) list_medium_line_t3_g3_g2_ParamLimits

0x81ed,	// (0x00073bbc) list_medium_line_t3_g3_g2

0x65a5,	// (0x00071f74) list_medium_line_t3_g3_g3_ParamLimits

0x65a5,	// (0x00071f74) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007b737) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007b737) list_medium_line_t3_g3_g

0x8246,	// (0x00073c15) list_medium_line_t3_g3_t1_ParamLimits

0x8246,	// (0x00073c15) list_medium_line_t3_g3_t1

0x825f,	// (0x00073c2e) list_medium_line_t3_g3_t2_ParamLimits

0x825f,	// (0x00073c2e) list_medium_line_t3_g3_t2

0x8275,	// (0x00073c44) list_medium_line_t3_g3_t3_ParamLimits

0x8275,	// (0x00073c44) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007b743) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007b743) list_medium_line_t3_g3_t

0x7eb6,	// (0x00073885) list_medium_line_right_iconx2_g1

0x7cf3,	// (0x000736c2) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007b74a) list_medium_line_right_iconx2_g

0x828f,	// (0x00073c5e) list_medium_line_right_iconx2_t1

0x7eb6,	// (0x00073885) list_medium_line_t2_right_iconx2_g1

0x7cf3,	// (0x000736c2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007b74a) list_medium_line_t2_right_iconx2_g

0x829d,	// (0x00073c6c) list_medium_line_t2_right_iconx2_t1

0x82ad,	// (0x00073c7c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007b74f) list_medium_line_t2_right_iconx2_t

0x82bf,	// (0x00073c8e) list_medium_line_x4_t4_t1

0x82cd,	// (0x00073c9c) list_medium_line_x4_t4_t2

0x82dd,	// (0x00073cac) list_medium_line_x4_t4_t3

0x82ed,	// (0x00073cbc) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007b754) list_medium_line_x4_t4_t

0x8340,	// (0x00073d0f) tport_appsw_pane_ParamLimits

0x8340,	// (0x00073d0f) tport_appsw_pane

0x8358,	// (0x00073d27) tport_contact_pane_ParamLimits

0x8358,	// (0x00073d27) tport_contact_pane

0x8370,	// (0x00073d3f) tport_listscroll_pane_ParamLimits

0x8370,	// (0x00073d3f) tport_listscroll_pane

0x838a,	// (0x00073d59) cell_tport_appsw_pane_ParamLimits

0x838a,	// (0x00073d59) cell_tport_appsw_pane

0xd73a,	// (0x00079109) tport_appsw_pane_g1_ParamLimits

0xd73a,	// (0x00079109) tport_appsw_pane_g1

0xe84e,	// (0x0007a21d) tport_contact_pane_g1

0xe1f9,	// (0x00079bc8) tport_contact_pane_t1

0xe857,	// (0x0007a226) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007b75d) tport_contact_pane_t

0xe865,	// (0x0007a234) list_tport_pane

0xe86e,	// (0x0007a23d) scroll_pane_cp_030

0x83d2,	// (0x00073da1) cell_tport_appsw_pane_g1

0x83e2,	// (0x00073db1) cell_tport_appsw_pane_t1

0x83f0,	// (0x00073dbf) grid_highlight_pane_cp019

0x83f8,	// (0x00073dc7) list_tport_double_graphic_pane_ParamLimits

0x83f8,	// (0x00073dc7) list_tport_double_graphic_pane

0xa542,	// (0x00075f11) list_highlight_pane_cp023_ParamLimits

0xa542,	// (0x00075f11) list_highlight_pane_cp023

0x8405,	// (0x00073dd4) list_tport_double_graphic_pane_g1_ParamLimits

0x8405,	// (0x00073dd4) list_tport_double_graphic_pane_g1

0x8412,	// (0x00073de1) list_tport_double_graphic_pane_t1_ParamLimits

0x8412,	// (0x00073de1) list_tport_double_graphic_pane_t1

0x8427,	// (0x00073df6) list_tport_double_graphic_pane_t2_ParamLimits

0x8427,	// (0x00073df6) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007b769) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007b769) list_tport_double_graphic_pane_t

0x94d2,	// (0x00074ea1) main_cale_note_pane

0x5d5d,	// (0x0007172c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d5d,	// (0x0007172c) cell_vitu2_function_top_wide_pane_cp01

0x783e,	// (0x0007320d) wait_bar_pane_cp05_ParamLimits

0xa542,	// (0x00075f11) listscroll_cmail_pane

0xe877,	// (0x0007a246) list_cmail_pane

0x8439,	// (0x00073e08) list_cmail_body_pane

0x844e,	// (0x00073e1d) list_single_cmail_header_caption_pane

0x8464,	// (0x00073e33) list_single_cmail_header_detail_pane_ParamLimits

0x8464,	// (0x00073e33) list_single_cmail_header_detail_pane

0xe887,	// (0x0007a256) list_single_cmail_header_caption_pane_t1

0x848d,	// (0x00073e5c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x848d,	// (0x00073e5c) list_single_cmail_header_detail_pane_g1

0xa789,	// (0x00076158) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa789,	// (0x00076158) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007b76e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007b76e) list_single_cmail_header_detail_pane_g

0xa795,	// (0x00076164) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa795,	// (0x00076164) list_single_cmail_header_detail_pane_t1

0xa7f5,	// (0x000761c4) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa7f5,	// (0x000761c4) list_single_cmail_header_editor_pane_bg

0xe356,	// (0x00079d25) list_cmail_body_pane_g1

0xe8ab,	// (0x0007a27a) list_cmail_body_pane_t1

0xd75a,	// (0x00079129) list_single_cmail_header_editor_pane_bg_g1

0xad40,	// (0x0007670f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd76a,	// (0x00079139) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd762,	// (0x00079131) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd97e,	// (0x0007934d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd78a,	// (0x00079159) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd77a,	// (0x00079149) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd782,	// (0x00079151) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad20,	// (0x000766ef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84a5,	// (0x00073e74) calenote_gesture_pane_ParamLimits

0x84a5,	// (0x00073e74) calenote_gesture_pane

0x84c5,	// (0x00073e94) calenote_window_pane_ParamLimits

0x84c5,	// (0x00073e94) calenote_window_pane

0xe8b9,	// (0x0007a288) popup_note_window_cp01

0x84e1,	// (0x00073eb0) calenote_swipe_1_pane_ParamLimits

0x84e1,	// (0x00073eb0) calenote_swipe_1_pane

0x7c95,	// (0x00073664) calenote_swipe_2_pane_ParamLimits

0x7c95,	// (0x00073664) calenote_swipe_2_pane

0xe6a7,	// (0x0007a076) calenote_swipe_1_pane_g1_ParamLimits

0xe6a7,	// (0x0007a076) calenote_swipe_1_pane_g1

0xe6b4,	// (0x0007a083) calenote_swipe_1_pane_g2_ParamLimits

0xe6b4,	// (0x0007a083) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007b692) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007b692) calenote_swipe_1_pane_g

0xe8cb,	// (0x0007a29a) calenote_swipe_1_pane_t1_ParamLimits

0xe8cb,	// (0x0007a29a) calenote_swipe_1_pane_t1

0xe6a7,	// (0x0007a076) calenote_swipe_2_pane_g1_ParamLimits

0xe6a7,	// (0x0007a076) calenote_swipe_2_pane_g1

0xe8ea,	// (0x0007a2b9) calenote_swipe_2_pane_g2_ParamLimits

0xe8ea,	// (0x0007a2b9) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007b77a) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007b77a) calenote_swipe_2_pane_g

0xe8f6,	// (0x0007a2c5) calenote_swipe_2_pane_t1_ParamLimits

0xe8f6,	// (0x0007a2c5) calenote_swipe_2_pane_t1

0x94d2,	// (0x00074ea1) main_mup_navstr_pane

0x499e,	// (0x0007036d) main_mup3_pane_t7_ParamLimits

0x499e,	// (0x0007036d) main_mup3_pane_t7

0x9b2d,	// (0x000754fc) main_mp4_pane_g6_ParamLimits

0x9b2d,	// (0x000754fc) main_mp4_pane_g6

0x9cef,	// (0x000756be) main_image3_pane_t4_ParamLimits

0x9cef,	// (0x000756be) main_image3_pane_t4

0x84f6,	// (0x00073ec5) popup_navstr_preview_pane_ParamLimits

0x84f6,	// (0x00073ec5) popup_navstr_preview_pane

0x850a,	// (0x00073ed9) scroll_navstr_pane_ParamLimits

0x850a,	// (0x00073ed9) scroll_navstr_pane

0x94d2,	// (0x00074ea1) bg_popup_preview_window_pane_cp04

0xe91d,	// (0x0007a2ec) popup_navstr_preview_pane_t1

0x851e,	// (0x00073eed) scroll_navstr_pane_g1_ParamLimits

0x851e,	// (0x00073eed) scroll_navstr_pane_g1

0x8532,	// (0x00073f01) scroll_navstr_pane_t1_ParamLimits

0x8532,	// (0x00073f01) scroll_navstr_pane_t1

0xe8c2,	// (0x0007a291) bg_button_pane_cp014

0xe8c2,	// (0x0007a291) bg_button_pane_cp030

0x7b6e,	// (0x0007353d) list_double_fisheye_pane_g4_ParamLimits

0x7b6e,	// (0x0007353d) list_double_fisheye_pane_g4

0x7b7a,	// (0x00073549) list_double_fisheye_pane_g5_ParamLimits

0x7b7a,	// (0x00073549) list_double_fisheye_pane_g5

0xc9e6,	// (0x000783b5) sp_fs_scroll_pane_cp03

0xe7c7,	// (0x0007a196) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7d3,	// (0x0007a1a2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007b6af) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7df,	// (0x0007a1ae) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe87f,	// (0x0007a24e) sp_fs_scroll_pane_cp02

0xaa26,	// (0x000763f5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa26,	// (0x000763f5) popup_sp_fs_calendar_preview_list_single_pane

0x94d2,	// (0x00074ea1) main_cam6_pano_pane

0x954a,	// (0x00074f19) main_mup3_pane_ParamLimits

0x94d2,	// (0x00074ea1) main_phacti_pane

0x7711,	// (0x000730e0) bg_button_pane_cp11

0x772b,	// (0x000730fa) main_mobtv_info_pane_g2_ParamLimits

0x772b,	// (0x000730fa) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007b60f) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007b60f) main_mobtv_info_pane_g

0x7908,	// (0x000732d7) sc_clock_pane_t5_ParamLimits

0x7908,	// (0x000732d7) sc_clock_pane_t5

0x79d0,	// (0x0007339f) main_radioblah_pane_g1_ParamLimits

0xe5f3,	// (0x00079fc2) main_radioblah_pane_t3_ParamLimits

0xe5f3,	// (0x00079fc2) main_radioblah_pane_t3

0xe60b,	// (0x00079fda) main_radioblah_pane_t4_ParamLimits

0xe60b,	// (0x00079fda) main_radioblah_pane_t4

0x79f8,	// (0x000733c7) main_radioblah_text_pane_ParamLimits

0x79f8,	// (0x000733c7) main_radioblah_text_pane

0x7a0a,	// (0x000733d9) main_radioblah_info_pane_g1_ParamLimits

0x7aa3,	// (0x00073472) main_radioblah_info_pane_t4_ParamLimits

0x7aa3,	// (0x00073472) main_radioblah_info_pane_t4

0xa542,	// (0x00075f11) main_sp_fs_calendar_pane

0x8549,	// (0x00073f18) main_phacti_pane_g1

0x8551,	// (0x00073f20) phacti_note_pane_ParamLimits

0x8551,	// (0x00073f20) phacti_note_pane

0xe934,	// (0x0007a303) phacti_term_pane_ParamLimits

0xe934,	// (0x0007a303) phacti_term_pane

0xe949,	// (0x0007a318) phacti_note_pane_t1_ParamLimits

0xe949,	// (0x0007a318) phacti_note_pane_t1

0xa80c,	// (0x000761db) phacti_term_pane_g1

0xa814,	// (0x000761e3) phacti_term_pane_t1_ParamLimits

0xa814,	// (0x000761e3) phacti_term_pane_t1

0xe960,	// (0x0007a32f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaac5,	// (0x00076494) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007b784) popup_sp_fs_calendar_preview_list_single_pane_g

0xe976,	// (0x0007a345) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe976,	// (0x0007a345) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe98c,	// (0x0007a35b) aid_popup_sp_fs_bg_corner_pane

0xcd5f,	// (0x0007872e) popup_sp_fs_calendar_preview_bg_pane_g1

0x94d2,	// (0x00074ea1) popup_sp_fs_calendar_preview_bg_pane

0xe994,	// (0x0007a363) popup_sp_fs_calendar_preview_list_pane

0xc94b,	// (0x0007831a) bg_main_sp_fs_cale_pane_ParamLimits

0xc94b,	// (0x0007831a) bg_main_sp_fs_cale_pane

0xa847,	// (0x00076216) listscroll_cale_mrui_pane_ParamLimits

0xa847,	// (0x00076216) listscroll_cale_mrui_pane

0xa85c,	// (0x0007622b) listscroll_sp_fs_schedule_track_pane

0xa865,	// (0x00076234) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa865,	// (0x00076234) main_sp_fs_ctrlbar_pane_cp01

0xe99c,	// (0x0007a36b) main_sp_fs_ribbon_pane

0xa878,	// (0x00076247) popup_sp_fs_cale_preview_window

0x85c6,	// (0x00073f95) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85c6,	// (0x00073f95) list_single_sp_fs_schedule_track_pane

0xa542,	// (0x00075f11) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa542,	// (0x00075f11) bg_sp_fs_highlight_list_pane_cp03

0x85d9,	// (0x00073fa8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85d9,	// (0x00073fa8) list_single_sp_fs_schedule_track_pane_g1

0x85e5,	// (0x00073fb4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85e5,	// (0x00073fb4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007b789) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007b789) list_single_sp_fs_schedule_track_pane_g

0x85f1,	// (0x00073fc0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85f1,	// (0x00073fc0) list_single_sp_fs_schedule_track_pane_t1

0x860b,	// (0x00073fda) sp_fs_schedule_track_pane_ParamLimits

0x860b,	// (0x00073fda) sp_fs_schedule_track_pane

0xe9a4,	// (0x0007a373) sp_fs_schedule_track_pane_g1

0xe9ac,	// (0x0007a37b) sp_fs_schedule_track_pane_g2

0xe9b4,	// (0x0007a383) sp_fs_schedule_track_pane_g3

0xe9bc,	// (0x0007a38b) sp_fs_schedule_track_pane_g4

0xe9c4,	// (0x0007a393) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007b78e) sp_fs_schedule_track_pane_g

0xd75a,	// (0x00079129) bg_sp_fs_schedule_viewer_highlight_g1

0xad40,	// (0x0007670f) bg_sp_fs_schedule_viewer_highlight_g2

0xd762,	// (0x00079131) bg_sp_fs_schedule_viewer_highlight_g3

0xd76a,	// (0x00079139) bg_sp_fs_schedule_viewer_highlight_g4

0xd97e,	// (0x0007934d) bg_sp_fs_schedule_viewer_highlight_g5

0xd77a,	// (0x00079149) bg_sp_fs_schedule_viewer_highlight_g6

0xd782,	// (0x00079151) bg_sp_fs_schedule_viewer_highlight_g7

0xd78a,	// (0x00079159) bg_sp_fs_schedule_viewer_highlight_g8

0xad20,	// (0x000766ef) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007b799) bg_sp_fs_schedule_viewer_highlight_g

0x94d2,	// (0x00074ea1) bg_main_sp_fs_ribbon_pane

0x861c,	// (0x00073feb) main_sp_fs_ribbon_pane_g1

0xe9cc,	// (0x0007a39b) main_sp_fs_ribbon_pane_t1

0x8625,	// (0x00073ff4) main_sp_fs_ribbon_pane_t2

0xe9db,	// (0x0007a3aa) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007b7ac) main_sp_fs_ribbon_pane_t

0xe9ea,	// (0x0007a3b9) main_sp_fs_ribbon_scheduler_pane

0xe9f2,	// (0x0007a3c1) bg_main_sp_fs_ribbon_pane_g1

0xe9fb,	// (0x0007a3ca) bg_main_sp_fs_ribbon_pane_g2

0xea04,	// (0x0007a3d3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007b7b3) bg_main_sp_fs_ribbon_pane_g

0xea0c,	// (0x0007a3db) main_sp_fs_ribbon_scheduler_pane_g1

0xea15,	// (0x0007a3e4) main_sp_fs_ribbon_scheduler_pane_g2

0xea1e,	// (0x0007a3ed) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007b7ba) main_sp_fs_ribbon_scheduler_pane_g

0xea27,	// (0x0007a3f6) list_cale_mrui_pane

0x8634,	// (0x00074003) sp_fs_scroll_pane_cp07_ParamLimits

0x8634,	// (0x00074003) sp_fs_scroll_pane_cp07

0x8650,	// (0x0007401f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8650,	// (0x0007401f) bg_sp_fs_schedule_viewer_highlight

0xea34,	// (0x0007a403) list_single_sp_fs_schedule_track_pane_cp01

0xea3c,	// (0x0007a40b) list_sp_fs_schedule_track_pane

0xea44,	// (0x0007a413) sp_fs_scroll_pane_cp06_ParamLimits

0xea44,	// (0x0007a413) sp_fs_scroll_pane_cp06

0xcd5f,	// (0x0007872e) bgmain_sp_fs_calendar_pane_g1

0x8660,	// (0x0007402f) list_single_cale_mrui_pane_ParamLimits

0x8660,	// (0x0007402f) list_single_cale_mrui_pane

0xa88a,	// (0x00076259) list_single_cale_mrui_row_pane_ParamLimits

0xa88a,	// (0x00076259) list_single_cale_mrui_row_pane

0xa897,	// (0x00076266) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa897,	// (0x00076266) list_single_cale_mrui_row_pane_g1

0xa8cf,	// (0x0007629e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa8cf,	// (0x0007629e) list_single_cale_mrui_row_pane_t1

0x8681,	// (0x00074050) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8681,	// (0x00074050) list_single_cale_mrui_row_pane_t2

0xa8e1,	// (0x000762b0) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa8e1,	// (0x000762b0) list_single_cale_mrui_row_pane_t3

0xa910,	// (0x000762df) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa910,	// (0x000762df) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007b7c8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007b7c8) list_single_cale_mrui_row_pane_t

0x86e9,	// (0x000740b8) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86e9,	// (0x000740b8) list_single_cmail_header_editor_pane_bg_cp01

0x870f,	// (0x000740de) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x870f,	// (0x000740de) list_single_cmail_header_editor_pane_bg_cp02

0x872f,	// (0x000740fe) main_radioblah_text_pane_t1_ParamLimits

0x872f,	// (0x000740fe) main_radioblah_text_pane_t1

0xea63,	// (0x0007a432) cam6_indi_pane_cp01

0xea6b,	// (0x0007a43a) cam6_mode_pane_cp01

0xea73,	// (0x0007a442) cam6_pano_pane

0xea7c,	// (0x0007a44b) cam6_zoom_pane_cp01

0xea84,	// (0x0007a453) cam6_pano_image_pane

0xea8f,	// (0x0007a45e) cam6_pano_pane_g1

0xe356,	// (0x00079d25) cam6_pano_pane_g2

0xea98,	// (0x0007a467) cam6_pano_pane_g3

0xeaa1,	// (0x0007a470) cam6_pano_pane_g4

0xd342,	// (0x00078d11) cam6_pano_pane_g5

0xeaaa,	// (0x0007a479) cam6_pano_pane_g6

0xeab4,	// (0x0007a483) cam6_pano_pane_g7

0xeabc,	// (0x0007a48b) cam6_pano_pane_g8

0xeac5,	// (0x0007a494) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007b7d1) cam6_pano_pane_g

0x94d2,	// (0x00074ea1) main_browser_tag_pane

0xe915,	// (0x0007a2e4) grid_navstr_albumart_pane

0xead0,	// (0x0007a49f) cell_navstr_albumart_pane_ParamLimits

0xead0,	// (0x0007a49f) cell_navstr_albumart_pane

0xeaf0,	// (0x0007a4bf) cell_navstr_albumart_pane_g1

0xc75c,	// (0x0007812b) cell_navstr_albumart_pane_g2

0xc76c,	// (0x0007813b) cell_navstr_albumart_pane_g3

0xc764,	// (0x00078133) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007b7e4) cell_navstr_albumart_pane_g

0x8749,	// (0x00074118) bt_list_pane_ParamLimits

0x8749,	// (0x00074118) bt_list_pane

0x875d,	// (0x0007412c) bt_list_pane_t1

0x876c,	// (0x0007413b) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007b7ed) bt_list_pane_t

0x94d2,	// (0x00074ea1) main_cale_prevew_pane

0x877b,	// (0x0007414a) popup_cale_preview_window_ParamLimits

0x877b,	// (0x0007414a) popup_cale_preview_window

0xa542,	// (0x00075f11) bg_popup_preview_window_pane_cp05_ParamLimits

0xa542,	// (0x00075f11) bg_popup_preview_window_pane_cp05

0xeaf8,	// (0x0007a4c7) list_cale_preview_pane_ParamLimits

0xeaf8,	// (0x0007a4c7) list_cale_preview_pane

0x8796,	// (0x00074165) list_double_cale_preview_pane_ParamLimits

0x8796,	// (0x00074165) list_double_cale_preview_pane

0x87a8,	// (0x00074177) list_single_cale_preview_pane_ParamLimits

0x87a8,	// (0x00074177) list_single_cale_preview_pane

0x87be,	// (0x0007418d) list_single_cale_preview_pane_g1

0x87c6,	// (0x00074195) list_single_cale_preview_pane_t1_ParamLimits

0x87c6,	// (0x00074195) list_single_cale_preview_pane_t1

0x87db,	// (0x000741aa) list_double_cale_preview_pane_g1

0x87e3,	// (0x000741b2) list_double_cale_preview_pane_t1_ParamLimits

0x87e3,	// (0x000741b2) list_double_cale_preview_pane_t1

0x87f8,	// (0x000741c7) list_double_cale_preview_pane_t2_ParamLimits

0x87f8,	// (0x000741c7) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007b7f2) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007b7f2) list_double_cale_preview_pane_t

0x94d2,	// (0x00074ea1) main_ezdial_pane

0xa542,	// (0x00075f11) main_sp_fs_email_pane_ParamLimits

0x7d1d,	// (0x000736ec) cmail_ddmenu_btn01_pane_ParamLimits

0x7d1d,	// (0x000736ec) cmail_ddmenu_btn01_pane

0x7d30,	// (0x000736ff) cmail_ddmenu_btn02_pane_ParamLimits

0x7d30,	// (0x000736ff) cmail_ddmenu_btn02_pane

0x7d53,	// (0x00073722) cmail_ddmenu_btn03_pane_ParamLimits

0x7d53,	// (0x00073722) cmail_ddmenu_btn03_pane

0x7d79,	// (0x00073748) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d9d,	// (0x0007376c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8439,	// (0x00073e08) list_cmail_body_pane_ParamLimits

0xe895,	// (0x0007a264) bg_button_pane_cp12

0xe89e,	// (0x0007a26d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe89e,	// (0x0007a26d) list_single_cmail_header_detail_pane_g3

0xa7d1,	// (0x000761a0) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa7d1,	// (0x000761a0) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007b775) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007b775) list_single_cmail_header_detail_pane_t

0xa829,	// (0x000761f8) phacti_term_pane_t2_ParamLimits

0xa829,	// (0x000761f8) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007b77f) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007b77f) phacti_term_pane_t

0xeb04,	// (0x0007a4d3) aid_size_list_single_double

0x8810,	// (0x000741df) popup_ezdial_listscroll_window

0x882c,	// (0x000741fb) popup_number_entry_window_cp01

0xaae7,	// (0x000764b6) bg_popup_call_pane_cp09

0xeb10,	// (0x0007a4df) ezdial_list_pane

0xeb18,	// (0x0007a4e7) scroll_pane_cp23

0xc94b,	// (0x0007831a) bg_button_pane_cp028_ParamLimits

0xc94b,	// (0x0007831a) bg_button_pane_cp028

0x883a,	// (0x00074209) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x883a,	// (0x00074209) cmail_ddmenu_btn01_pane_g1

0x8846,	// (0x00074215) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8846,	// (0x00074215) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007b7f7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007b7f7) cmail_ddmenu_btn01_pane_g

0xeb20,	// (0x0007a4ef) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb20,	// (0x0007a4ef) cmail_ddmenu_btn01_pane_t1

0xc94b,	// (0x0007831a) bg_button_pane_cp029_ParamLimits

0xc94b,	// (0x0007831a) bg_button_pane_cp029

0x8852,	// (0x00074221) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8852,	// (0x00074221) cmail_ddmenu_btn02_pane_g1

0x886a,	// (0x00074239) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x886a,	// (0x00074239) cmail_ddmenu_btn02_pane_t1

0xa542,	// (0x00075f11) bg_button_pane_cp031_ParamLimits

0xa542,	// (0x00075f11) bg_button_pane_cp031

0x8852,	// (0x00074221) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8852,	// (0x00074221) cmail_ddmenu_btn03_pane_g1

0x886a,	// (0x00074239) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x886a,	// (0x00074239) cmail_ddmenu_btn03_pane_t1

0x5545,	// (0x00070f14) cell_dialer2_keypad_pane_t1_ParamLimits

0x555f,	// (0x00070f2e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x555f,	// (0x00070f2e) cell_dialer2_keypad_pane_t1_copy1

0x7526,	// (0x00072ef5) ncimui_group_button_pane

0xa542,	// (0x00075f11) main_sp_fs_calendar_pane_ParamLimits

0x844e,	// (0x00073e1d) list_single_cmail_header_caption_pane_ParamLimits

0xa83e,	// (0x0007620d) aid_recal_txt_sm_pane

0x94d2,	// (0x00074ea1) mian_recal_day_pane

0xa878,	// (0x00076247) popup_sp_fs_cale_preview_window_ParamLimits

0xeb35,	// (0x0007a504) list_recal_day_pane

0xa95a,	// (0x00076329) list_single_recal_day_pane_ParamLimits

0xa95a,	// (0x00076329) list_single_recal_day_pane

0xeb5c,	// (0x0007a52b) list_single_recal_day_pane_g1_ParamLimits

0xeb5c,	// (0x0007a52b) list_single_recal_day_pane_g1

0xa96c,	// (0x0007633b) list_single_recal_day_pane_g2_ParamLimits

0xa96c,	// (0x0007633b) list_single_recal_day_pane_g2

0xa978,	// (0x00076347) list_single_recal_day_pane_g3_ParamLimits

0xa978,	// (0x00076347) list_single_recal_day_pane_g3

0x888e,	// (0x0007425d) list_single_recal_day_pane_g4_ParamLimits

0x888e,	// (0x0007425d) list_single_recal_day_pane_g4

0xa984,	// (0x00076353) list_single_recal_day_pane_g5_ParamLimits

0xa984,	// (0x00076353) list_single_recal_day_pane_g5

0xa990,	// (0x0007635f) list_single_recal_day_pane_g6_ParamLimits

0xa990,	// (0x0007635f) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007b806) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007b806) list_single_recal_day_pane_g

0xa9a4,	// (0x00076373) list_single_recal_day_pane_t1

0xa9b6,	// (0x00076385) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007b811) list_single_recal_day_pane_t

0x88a6,	// (0x00074275) ncimui_query_button_pane_ParamLimits

0x88a6,	// (0x00074275) ncimui_query_button_pane

0x88b6,	// (0x00074285) ncimui_query_button_pane_t1_ParamLimits

0x88b6,	// (0x00074285) ncimui_query_button_pane_t1

0xeb68,	// (0x0007a537) ncimui_query_button_pane_t2_ParamLimits

0xeb68,	// (0x0007a537) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007b816) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007b816) ncimui_query_button_pane_t

0x88c9,	// (0x00074298) query_button_pane_ParamLimits

0x88c9,	// (0x00074298) query_button_pane

0x94d2,	// (0x00074ea1) bg_button_pane_cp0028

0xeb7b,	// (0x0007a54a) query_button_pane_t1

0x35d9,	// (0x0006efa8) main_tport_pane_ParamLimits

0x82fd,	// (0x00073ccc) bg_popup_window_pane_cp01_ParamLimits

0x82fd,	// (0x00073ccc) bg_popup_window_pane_cp01

0x8318,	// (0x00073ce7) heading_pane_cp08_ParamLimits

0x8318,	// (0x00073ce7) heading_pane_cp08

0x832b,	// (0x00073cfa) heading_pane_cp07_ParamLimits

0x832b,	// (0x00073cfa) heading_pane_cp07

0x83d2,	// (0x00073da1) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007b762) cell_tport_appsw_pane_g

0xa504,	// (0x00075ed3) input_candi_list_open_g1

0xaf03,	// (0x000768d2) list_cale_time_pane_g6_ParamLimits

0xaf03,	// (0x000768d2) list_cale_time_pane_g6

0x43a2,	// (0x0006fd71) aid_size_touch_calib_1_ParamLimits

0x43a2,	// (0x0006fd71) aid_size_touch_calib_1

0x43b4,	// (0x0006fd83) aid_size_touch_calib_2_ParamLimits

0x43b4,	// (0x0006fd83) aid_size_touch_calib_2

0x43cc,	// (0x0006fd9b) aid_size_touch_calib_3_ParamLimits

0x43cc,	// (0x0006fd9b) aid_size_touch_calib_3

0x43ea,	// (0x0006fdb9) aid_size_touch_calib_4_ParamLimits

0x43ea,	// (0x0006fdb9) aid_size_touch_calib_4

0x4402,	// (0x0006fdd1) main_touch_calib_button_group_pane_ParamLimits

0x4402,	// (0x0006fdd1) main_touch_calib_button_group_pane

0x441a,	// (0x0006fde9) main_touch_calib_pane_g1_ParamLimits

0x442c,	// (0x0006fdfb) main_touch_calib_pane_g2_ParamLimits

0x443e,	// (0x0006fe0d) main_touch_calib_pane_g3_ParamLimits

0x4450,	// (0x0006fe1f) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0007b11c) main_touch_calib_pane_g_ParamLimits

0x4462,	// (0x0006fe31) main_touch_calib_pane_t1_ParamLimits

0x447c,	// (0x0006fe4b) main_touch_calib_pane_t2_ParamLimits

0x4496,	// (0x0006fe65) main_touch_calib_pane_t3_ParamLimits

0x44aa,	// (0x0006fe79) main_touch_calib_pane_t4_ParamLimits

0x44be,	// (0x0006fe8d) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0007b125) main_touch_calib_pane_t_ParamLimits

0xd0e2,	// (0x00078ab1) list_single_fp_cale_pane_g3_ParamLimits

0xd0e2,	// (0x00078ab1) list_single_fp_cale_pane_g3

0x954a,	// (0x00074f19) bg_button_pane_cp012_ParamLimits

0x954a,	// (0x00074f19) bg_vkb2_func_pane_cp03_ParamLimits

0x654f,	// (0x00071f1e) cell_vitu2_function_top_pane_g1_ParamLimits

0x954a,	// (0x00074f19) bg_vkb2_func_pane_cp04_ParamLimits

0x74b1,	// (0x00072e80) main_ncimui_button_group_pane_ParamLimits

0x74b1,	// (0x00072e80) main_ncimui_button_group_pane

0x7511,	// (0x00072ee0) main_ncimui_pane_t3_ParamLimits

0x7511,	// (0x00072ee0) main_ncimui_pane_t3

0xe92b,	// (0x0007a2fa) phacti_button_group_pane

0xeb04,	// (0x0007a4d3) aid_size_list_single_double_ParamLimits

0x8810,	// (0x000741df) popup_ezdial_listscroll_window_ParamLimits

0x882c,	// (0x000741fb) popup_number_entry_window_cp01_ParamLimits

0x88dc,	// (0x000742ab) phacti_button_pane_ParamLimits

0x88dc,	// (0x000742ab) phacti_button_pane

0x94d2,	// (0x00074ea1) bg_button_pane_cp14

0xeb89,	// (0x0007a558) phacti_button_pane_t1

0x88ed,	// (0x000742bc) main_touch_calib_button_pane_ParamLimits

0x88ed,	// (0x000742bc) main_touch_calib_button_pane

0xa432,	// (0x00075e01) bg_button_pane_cp18_ParamLimits

0xa432,	// (0x00075e01) bg_button_pane_cp18

0xeb97,	// (0x0007a566) main_touch_calib_button_pane_t1_ParamLimits

0xeb97,	// (0x0007a566) main_touch_calib_button_pane_t1

0xebad,	// (0x0007a57c) main_touch_calib_button_pane_t2_ParamLimits

0xebad,	// (0x0007a57c) main_touch_calib_button_pane_t2

0x0001,

0x0011,	// (0x0006b9e0) main_touch_calib_button_pane_t_ParamLimits

0x0011,	// (0x0006b9e0) main_touch_calib_button_pane_t

0x94d2,	// (0x00074ea1) cell_ncimui_button_pane

0x94d2,	// (0x00074ea1) bg_button_pane_cp032

0xebcb,	// (0x0007a59a) cell_ncimui_button_pane_t1

0x9ccf,	// (0x0007569e) image3_infobar_pane_ParamLimits

0x9ccf,	// (0x0007569e) image3_infobar_pane

0x7934,	// (0x00073303) fs_bigclock_status_pane_ParamLimits

0x7934,	// (0x00073303) fs_bigclock_status_pane

0x7941,	// (0x00073310) main_fs_bigclock_clock_pane_ParamLimits

0x7941,	// (0x00073310) main_fs_bigclock_clock_pane

0x795f,	// (0x0007332e) main_fs_bigclock_indi_pane_ParamLimits

0x795f,	// (0x0007332e) main_fs_bigclock_indi_pane

0x7991,	// (0x00073360) main_fs_bigclock_swipe_pane_ParamLimits

0x7991,	// (0x00073360) main_fs_bigclock_swipe_pane

0x94d2,	// (0x00074ea1) main_fs_clock_dumped_data

0xe463,	// (0x00079e32) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe463,	// (0x00079e32) list_single_fs_bigclock_indicator_pane_g1

0xe47e,	// (0x00079e4d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe47e,	// (0x00079e4d) list_single_fs_bigclock_indicator_pane_g2

0xe498,	// (0x00079e67) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe498,	// (0x00079e67) list_single_fs_bigclock_indicator_pane_g3

0xe4b2,	// (0x00079e81) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4b2,	// (0x00079e81) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007b643) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007b643) list_single_fs_bigclock_indicator_pane_g

0xe4dd,	// (0x00079eac) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4dd,	// (0x00079eac) list_single_fs_bigclock_indicator_pane_t1

0xe505,	// (0x00079ed4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe505,	// (0x00079ed4) list_single_fs_bigclock_indicator_pane_t2

0xe52d,	// (0x00079efc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe52d,	// (0x00079efc) list_single_fs_bigclock_indicator_pane_t3

0xe555,	// (0x00079f24) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe555,	// (0x00079f24) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007b64e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007b64e) list_single_fs_bigclock_indicator_pane_t

0xebd9,	// (0x0007a5a8) image3_infobar_fav_pane_ParamLimits

0xebd9,	// (0x0007a5a8) image3_infobar_fav_pane

0xebe9,	// (0x0007a5b8) image3_infobar_loc_pane_ParamLimits

0xebe9,	// (0x0007a5b8) image3_infobar_loc_pane

0xebfd,	// (0x0007a5cc) image3_infobar_time_pane_ParamLimits

0xebfd,	// (0x0007a5cc) image3_infobar_time_pane

0xcd5f,	// (0x0007872e) image3_infobar_time_pane_g1

0xec0d,	// (0x0007a5dc) image3_infobar_time_pane_t1

0xcd5f,	// (0x0007872e) image3_infobar_loc_pane_g1

0xec1b,	// (0x0007a5ea) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0007b81b) image3_infobar_loc_pane_g

0xec23,	// (0x0007a5f2) image3_infobar_loc_pane_t1

0xcd5f,	// (0x0007872e) image3_infobar_fav_pane_g1

0xec31,	// (0x0007a600) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0007b820) image3_infobar_fav_pane_g

0xec39,	// (0x0007a608) fs_bigclock_status_battery_pane

0xec42,	// (0x0007a611) fs_bigclock_status_signal_pane

0xec4b,	// (0x0007a61a) fs_bigclock_status_title_pane

0xec54,	// (0x0007a623) fs_bigclock_status_signal_pane_g1

0xec5d,	// (0x0007a62c) fs_bigclock_status_signal_pane_g2

0x0001,

0x0016,	// (0x0006b9e5) fs_bigclock_status_signal_pane_g

0xec65,	// (0x0007a634) fs_bigclock_status_battery_pane_g1

0xec6e,	// (0x0007a63d) fs_bigclock_status_battery_pane_g2

0x0001,

0x001b,	// (0x0006b9ea) fs_bigclock_status_battery_pane_g

0xec76,	// (0x0007a645) fs_bigclock_status_title_pane_t1

0x8902,	// (0x000742d1) main_fs_bigclock_clock_pane_g1

0x8902,	// (0x000742d1) main_fs_bigclock_clock_pane_g2

0x8913,	// (0x000742e2) main_fs_bigclock_clock_pane_g3

0x8913,	// (0x000742e2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe56,	// (0x0007b825) main_fs_bigclock_clock_pane_g

0x8926,	// (0x000742f5) main_fs_bigclock_clock_pane_t1

0x893c,	// (0x0007430b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5f,	// (0x0007b82e) main_fs_bigclock_clock_pane_t

0xec84,	// (0x0007a653) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec84,	// (0x0007a653) list_single_fs_bigclock_indicator_pane

0xec95,	// (0x0007a664) list_single_fs_bigclock_pane_ParamLimits

0xec95,	// (0x0007a664) list_single_fs_bigclock_pane

0xecbb,	// (0x0007a68a) main_fs_bigclock_indicator_pane_t1

0xecca,	// (0x0007a699) list_single_fs_bigclock_pane_g1

0xecd2,	// (0x0007a6a1) list_single_fs_bigclock_pane_t1

0xcd5f,	// (0x0007872e) main_fs_bigclock_swipe_pane_g1

0xed15,	// (0x0007a6e4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6b,	// (0x0007b83a) main_fs_bigclock_swipe_pane_g

0xed1d,	// (0x0007a6ec) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed1d,	// (0x0007a6ec) main_fs_bigclock_swipe_pane_t1

0x24b8,	// (0x0006de87) call_type_pane_ParamLimits

0x94d2,	// (0x00074ea1) main_btmg_pane

0xa8c3,	// (0x00076292) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa8c3,	// (0x00076292) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007b7c1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007b7c1) list_single_cale_mrui_row_pane_g

0xa949,	// (0x00076318) list_recal_vselct_arw_lo_pane

0xeb54,	// (0x0007a523) list_recal_vselct_arw_up_pane

0xa951,	// (0x00076320) list_recal_vselct_pane

0x8996,	// (0x00074365) btmg_button_pane

0x89a0,	// (0x0007436f) main_btmg_pane_g1

0x94d2,	// (0x00074ea1) bg_button_pane_cp044

0xed3a,	// (0x0007a709) btmg_button_pane_t1

0xc937,	// (0x00078306) aid_listscroll_gen

0xa542,	// (0x00075f11) main_cntbar_detail_pane

0xe877,	// (0x0007a246) list_cmail_folder_pane

0xc9e6,	// (0x000783b5) sp_fs_scroll_pane_cp03_ParamLimits

0x89aa,	// (0x00074379) list_single_fs_dyc_pane_cp01_ParamLimits

0x89aa,	// (0x00074379) list_single_fs_dyc_pane_cp01

0xed48,	// (0x0007a717) aid_size_cmail_indent

0xa9c8,	// (0x00076397) list_single_dyc_row_pane_cp01

0x89f2,	// (0x000743c1) cntbar_detail_list_pane_ParamLimits

0x89f2,	// (0x000743c1) cntbar_detail_list_pane

0x8a3e,	// (0x0007440d) main_cntbar_detail_cont_pane_ParamLimits

0x8a3e,	// (0x0007440d) main_cntbar_detail_cont_pane

0xc9e6,	// (0x000783b5) scroll_pane_cp032_ParamLimits

0xc9e6,	// (0x000783b5) scroll_pane_cp032

0x8a52,	// (0x00074421) cntbar_detail_list_event_pane_ParamLimits

0x8a52,	// (0x00074421) cntbar_detail_list_event_pane

0x8a02,	// (0x000743d1) cntbar_detail_list_shct_pane

0xad8e,	// (0x0007675d) aid_list_gen

0xed51,	// (0x0007a720) aid_scroll

0xed5a,	// (0x0007a729) aid_size_touch_scroll_bar

0x6c50,	// (0x0007261f) aid_list_double

0x6c3e,	// (0x0007260d) aid_list_single

0x6c3e,	// (0x0007260d) aid_list_single_lg

0x8a62,	// (0x00074431) aid_list_z_g_a_sm

0x8a6a,	// (0x00074439) aid_list_z_g_d

0x8a72,	// (0x00074441) aid_txt_z_prm

0x8a80,	// (0x0007444f) aid_txt_z_prm_cp01

0x8a8e,	// (0x0007445d) aid_txt_z_sec

0x8a9c,	// (0x0007446b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a9c,	// (0x0007446b) main_cntbar_detail_cont_pane_g1

0x8ab0,	// (0x0007447f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8ab0,	// (0x0007447f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe70,	// (0x0007b83f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe70,	// (0x0007b83f) main_cntbar_detail_cont_pane_g

0xed63,	// (0x0007a732) main_cntbar_detail_cont_pane_t1

0xed71,	// (0x0007a740) main_cntbar_detail_cont_pane_t2

0xed7f,	// (0x0007a74e) main_cntbar_detail_cont_pane_t3

0x0002,

0x003f,	// (0x0006ba0e) main_cntbar_detail_cont_pane_t

0x8ac0,	// (0x0007448f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8ac0,	// (0x0007448f) cell_cntbar_detail_list_shct_pane

0xed8d,	// (0x0007a75c) cntbar_detail_list_shct_pane_g1

0xed96,	// (0x0007a765) cntbar_detail_list_shct_pane_g2

0x0001,

0x0046,	// (0x0006ba15) cntbar_detail_list_shct_pane_g

0x8ad4,	// (0x000744a3) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ad4,	// (0x000744a3) cntbar_detail_list_event_pane_g1

0x8ae0,	// (0x000744af) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ae0,	// (0x000744af) cntbar_detail_list_event_pane_g2

0x0005,

0xfe75,	// (0x0007b844) cntbar_detail_list_event_pane_g_ParamLimits

0xfe75,	// (0x0007b844) cntbar_detail_list_event_pane_g

0x8b4c,	// (0x0007451b) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b4c,	// (0x0007451b) cntbar_detail_list_event_pane_t1

0x8b61,	// (0x00074530) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b61,	// (0x00074530) cntbar_detail_list_event_pane_t2

0x0002,

0xfe82,	// (0x0007b851) cntbar_detail_list_event_pane_t_ParamLimits

0xfe82,	// (0x0007b851) cntbar_detail_list_event_pane_t

0xcd5f,	// (0x0007872e) cell_cntbar_detail_list_shct_pane_g1

0xb505,	// (0x00076ed4) navi_pane_mv_g3

0xa542,	// (0x00075f11) main_cntbar_detail_pane_ParamLimits

0x94d2,	// (0x00074ea1) main_notif_wgt_pane

0x9abb,	// (0x0007548a) aid_tch_main_mp4_pane_g4

0x9cc7,	// (0x00075696) popup_slider_window_cp02

0xa93f,	// (0x0007630e) list_recal_day_event_pane

0x89c0,	// (0x0007438f) cntbar_detail_btn_pane_ParamLimits

0x89c0,	// (0x0007438f) cntbar_detail_btn_pane

0x89d9,	// (0x000743a8) cntbar_detail_btn_pane_cp01_ParamLimits

0x89d9,	// (0x000743a8) cntbar_detail_btn_pane_cp01

0x8a02,	// (0x000743d1) cntbar_detail_list_shct_pane_ParamLimits

0x8a12,	// (0x000743e1) cntbar_detail_pane_g1_ParamLimits

0x8a12,	// (0x000743e1) cntbar_detail_pane_g1

0x8a22,	// (0x000743f1) cntbar_detail_pane_t1_ParamLimits

0x8a22,	// (0x000743f1) cntbar_detail_pane_t1

0x8aec,	// (0x000744bb) cntbar_detail_list_event_pane_g3_ParamLimits

0x8aec,	// (0x000744bb) cntbar_detail_list_event_pane_g3

0x8b04,	// (0x000744d3) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b04,	// (0x000744d3) cntbar_detail_list_event_pane_g4

0x8b1c,	// (0x000744eb) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b1c,	// (0x000744eb) cntbar_detail_list_event_pane_g5

0x8b34,	// (0x00074503) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b34,	// (0x00074503) cntbar_detail_list_event_pane_g6

0x8b76,	// (0x00074545) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b76,	// (0x00074545) cntbar_detail_list_event_pane_t3

0x8b88,	// (0x00074557) popup_notif_wgt_window_ParamLimits

0x8b88,	// (0x00074557) popup_notif_wgt_window

0x8ba1,	// (0x00074570) popup_submenu_window_cp01_ParamLimits

0x8ba1,	// (0x00074570) popup_submenu_window_cp01

0xaae7,	// (0x000764b6) bg_popup_window_pane_cp10

0xed9f,	// (0x0007a76e) listscroll_notif_wgt_pane

0xedb1,	// (0x0007a780) list_notif_wgt_window

0xedba,	// (0x0007a789) scroll_pane_cp033

0x8bb7,	// (0x00074586) list_notif_wgt_row_pane_ParamLimits

0x8bb7,	// (0x00074586) list_notif_wgt_row_pane

0xedc3,	// (0x0007a792) aid_size_list_notif_wgt_del

0xedd0,	// (0x0007a79f) list_notif_wgt_row_pane_g1

0xeddc,	// (0x0007a7ab) list_notif_wgt_row_pane_g2

0xedeb,	// (0x0007a7ba) list_notif_wgt_row_pane_g3

0x0002,

0x005f,	// (0x0006ba2e) list_notif_wgt_row_pane_g

0xedf8,	// (0x0007a7c7) list_notif_wgt_row_pane_t1

0xee0e,	// (0x0007a7dd) list_notif_wgt_row_pane_t2

0xee20,	// (0x0007a7ef) list_notif_wgt_row_pane_t3

0x0002,

0x0066,	// (0x0006ba35) list_notif_wgt_row_pane_t

0xd998,	// (0x00079367) list_recal_day_event_pane_g1

0xee32,	// (0x0007a801) list_recal_day_event_pane_t1

0x94d2,	// (0x00074ea1) bg_button_pane_cp045

0x8bc7,	// (0x00074596) cntbar_detail_btn_pane_t1

0xc94b,	// (0x0007831a) main_callh_pane_ParamLimits

0xc94b,	// (0x0007831a) main_callh_pane

0x94d2,	// (0x00074ea1) main_coverflow0_pane

0x94d2,	// (0x00074ea1) main_wgtman_pane

0x79a9,	// (0x00073378) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79a9,	// (0x00073378) main_fs_bigclock_unlock_btn_pane

0x83ca,	// (0x00073d99) bg_button_pane_cp16

0x83da,	// (0x00073da9) cell_tport_appsw_pane_g3

0x8bd5,	// (0x000745a4) cf0_flow_pane_ParamLimits

0x8bd5,	// (0x000745a4) cf0_flow_pane

0xee41,	// (0x0007a810) listscroll_cf0_pane

0xee4c,	// (0x0007a81b) main_cf0_pane_g1

0x8bea,	// (0x000745b9) main_cf0_pane_t1_ParamLimits

0x8bea,	// (0x000745b9) main_cf0_pane_t1

0x8c01,	// (0x000745d0) main_cf0_pane_t2_ParamLimits

0x8c01,	// (0x000745d0) main_cf0_pane_t2

0x0001,

0xfe89,	// (0x0007b858) main_cf0_pane_t_ParamLimits

0xfe89,	// (0x0007b858) main_cf0_pane_t

0xee5e,	// (0x0007a82d) scroll_pane_cp11

0x8c18,	// (0x000745e7) cf0_flow_pane_g1

0x8c20,	// (0x000745ef) cf0_flow_pane_g2

0x0001,

0xfe8e,	// (0x0007b85d) cf0_flow_pane_g

0x8c28,	// (0x000745f7) cf0_flow_pane_t1

0x94d2,	// (0x00074ea1) main_call6_pane

0x94d2,	// (0x00074ea1) main_calllock_pane

0x8c36,	// (0x00074605) call6_btn_grp_pane_ParamLimits

0x8c36,	// (0x00074605) call6_btn_grp_pane

0x8c50,	// (0x0007461f) call6_pane_g1_ParamLimits

0x8c50,	// (0x0007461f) call6_pane_g1

0x8c66,	// (0x00074635) popup_call6_1st_window_ParamLimits

0x8c66,	// (0x00074635) popup_call6_1st_window

0x8c77,	// (0x00074646) popup_call6_2nd_window_ParamLimits

0x8c77,	// (0x00074646) popup_call6_2nd_window

0x8c88,	// (0x00074657) cell_call6_btn_pane_ParamLimits

0x8c88,	// (0x00074657) cell_call6_btn_pane

0xaae7,	// (0x000764b6) bg_popup_call2_in_pane_cp03

0xee69,	// (0x0007a838) popup_call6_1st_window_g1

0xee71,	// (0x0007a840) popup_call6_1st_window_g2

0xee79,	// (0x0007a848) popup_call6_1st_window_g3

0x0002,

0x007c,	// (0x0006ba4b) popup_call6_1st_window_g

0xee81,	// (0x0007a850) popup_call6_1st_window_t1

0xee90,	// (0x0007a85f) popup_call6_1st_window_t2

0xee9e,	// (0x0007a86d) popup_call6_1st_window_t3

0x0002,

0x0083,	// (0x0006ba52) popup_call6_1st_window_t

0xaae7,	// (0x000764b6) bg_popup_call2_in_pane_cp04

0xee69,	// (0x0007a838) popup_call6_2nd_window_g1

0xee71,	// (0x0007a840) popup_call6_2nd_window_g2

0xee79,	// (0x0007a848) popup_call6_2nd_window_g3

0x0002,

0x007c,	// (0x0006ba4b) popup_call6_2nd_window_g

0xee81,	// (0x0007a850) popup_call6_2nd_window_t1

0x9558,	// (0x00074f27) bg_button_pane_cp15

0x9f4f,	// (0x0007591e) cell_call6_btn_pane_g1

0x9f58,	// (0x00075927) cell_call6_btn_pane_t1

0x8c9b,	// (0x0007466a) listscroll_wgtman_pane_ParamLimits

0x8c9b,	// (0x0007466a) listscroll_wgtman_pane

0x8cbc,	// (0x0007468b) wgtman_btn_pane_ParamLimits

0x8cbc,	// (0x0007468b) wgtman_btn_pane

0xb30c,	// (0x00076cdb) aid_scroll_copy1

0xeeac,	// (0x0007a87b) list_wgtman_pane

0x8cff,	// (0x000746ce) wgtman_btn_pane_g1_ParamLimits

0x8cff,	// (0x000746ce) wgtman_btn_pane_g1

0x8d2b,	// (0x000746fa) wgtman_btn_pane_t1_ParamLimits

0x8d2b,	// (0x000746fa) wgtman_btn_pane_t1

0xeeb6,	// (0x0007a885) wgtman_btn_pane_t2_ParamLimits

0xeeb6,	// (0x0007a885) wgtman_btn_pane_t2

0x0001,

0xfe93,	// (0x0007b862) wgtman_btn_pane_t_ParamLimits

0xfe93,	// (0x0007b862) wgtman_btn_pane_t

0x8d68,	// (0x00074737) listrow_wgtman_pane_ParamLimits

0x8d68,	// (0x00074737) listrow_wgtman_pane

0x8d7a,	// (0x00074749) listrow_wgtman_pane_g1

0x8d87,	// (0x00074756) listrow_wgtman_pane_g2

0x0001,

0xfe98,	// (0x0007b867) listrow_wgtman_pane_g

0x8da5,	// (0x00074774) listrow_wgtman_pane_t1

0x8dbd,	// (0x0007478c) listrow_wgtman_pane_t2

0x0001,

0xfe9d,	// (0x0007b86c) listrow_wgtman_pane_t

0x8de3,	// (0x000747b2) wait_bar_pane_cp09

0xeecd,	// (0x0007a89c) main_calllock_btn_pane

0xeed7,	// (0x0007a8a6) main_calllock_pane_g1

0x94d2,	// (0x00074ea1) bg_button_pane_cp17

0xeee3,	// (0x0007a8b2) main_calllock_btn_pane_g1

0xeeec,	// (0x0007a8bb) main_calllock_btn_pane_t1

0x94d2,	// (0x00074ea1) main_dialer3_pane

0x94d2,	// (0x00074ea1) main_fmrd2_pane

0xcd5f,	// (0x0007872e) main_fs_bigclock_unlock_btn_pane_g1

0x8dfd,	// (0x000747cc) main_fs_bigclock_unlock_btn_pane_t1

0x8e0b,	// (0x000747da) area_fmrd2_info_pane_ParamLimits

0x8e0b,	// (0x000747da) area_fmrd2_info_pane

0x8e1c,	// (0x000747eb) area_fmrd2_visual_pane_ParamLimits

0x8e1c,	// (0x000747eb) area_fmrd2_visual_pane

0x8e2a,	// (0x000747f9) fmrd2_indi_pane_ParamLimits

0x8e2a,	// (0x000747f9) fmrd2_indi_pane

0x8e37,	// (0x00074806) area_fmrd2_visual_pane_g1

0x8e3f,	// (0x0007480e) area_fmrd2_visual_pane_t1

0x8e4f,	// (0x0007481e) area_fmrd2_visual_pane_t2

0x8e5f,	// (0x0007482e) area_fmrd2_visual_pane_t3

0x0002,

0xfea7,	// (0x0007b876) area_fmrd2_visual_pane_t

0x8e6f,	// (0x0007483e) area_fmrd2_info_pane_g1

0x8e77,	// (0x00074846) area_fmrd2_info_pane_t1

0x8e87,	// (0x00074856) area_fmrd2_info_pane_t2

0x8e97,	// (0x00074866) area_fmrd2_info_pane_t3

0x8ea7,	// (0x00074876) area_fmrd2_info_pane_t4

0x0003,

0xfeae,	// (0x0007b87d) area_fmrd2_info_pane_t

0x8eb5,	// (0x00074884) fmrd2_indi_pane_t1

0x8ec5,	// (0x00074894) fmrd2_indi_pane_t2

0x8ed5,	// (0x000748a4) fmrd2_indi_pane_t3

0x0002,

0xfeb7,	// (0x0007b886) fmrd2_indi_pane_t

0xe4c1,	// (0x00079e90) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4c1,	// (0x00079e90) list_single_fs_bigclock_indicator_pane_g5

0xe572,	// (0x00079f41) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe572,	// (0x00079f41) list_single_fs_bigclock_indicator_pane_t5

0x8565,	// (0x00073f34) aid_cell_bcale_month_pane_ParamLimits

0x8565,	// (0x00073f34) aid_cell_bcale_month_pane

0x8583,	// (0x00073f52) bcale_month_pane_ParamLimits

0x8583,	// (0x00073f52) bcale_month_pane

0x85a7,	// (0x00073f76) bcale_preview_pane_ParamLimits

0x85a7,	// (0x00073f76) bcale_preview_pane

0xecd2,	// (0x0007a6a1) list_single_fs_bigclock_pane_t1_ParamLimits

0xecf1,	// (0x0007a6c0) list_single_fs_bigclock_pane_t2_ParamLimits

0xecf1,	// (0x0007a6c0) list_single_fs_bigclock_pane_t2

0x0001,

0x0035,	// (0x0006ba04) list_single_fs_bigclock_pane_t_ParamLimits

0x0035,	// (0x0006ba04) list_single_fs_bigclock_pane_t

0x8df5,	// (0x000747c4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfea2,	// (0x0007b871) main_fs_bigclock_unlock_btn_pane_g

0x8ee5,	// (0x000748b4) aid_dia3_key_size_ParamLimits

0x8ee5,	// (0x000748b4) aid_dia3_key_size

0x8ef4,	// (0x000748c3) aid_dia3_listrow_size_ParamLimits

0x8ef4,	// (0x000748c3) aid_dia3_listrow_size

0x8f09,	// (0x000748d8) dia3_keypad_fun_pane_ParamLimits

0x8f09,	// (0x000748d8) dia3_keypad_fun_pane

0x8f25,	// (0x000748f4) dia3_keypad_num_pane_ParamLimits

0x8f25,	// (0x000748f4) dia3_keypad_num_pane

0x8f40,	// (0x0007490f) dia3_listscroll_pane_ParamLimits

0x8f40,	// (0x0007490f) dia3_listscroll_pane

0x8f53,	// (0x00074922) dia3_numentry_pane_ParamLimits

0x8f53,	// (0x00074922) dia3_numentry_pane

0xeefb,	// (0x0007a8ca) dia3_list_pane

0xef06,	// (0x0007a8d5) scroll_pane_cp12

0x94d2,	// (0x00074ea1) bg_dia3_numentry_pane

0x8f67,	// (0x00074936) dia3_numentry_pane_t1

0x8f76,	// (0x00074945) cell_dia3_key_num_pane

0x8f7e,	// (0x0007494d) cell_dia3_key0_fun_pane_ParamLimits

0x8f7e,	// (0x0007494d) cell_dia3_key0_fun_pane

0x8f92,	// (0x00074961) cell_dia3_key1_fun_pane_ParamLimits

0x8f92,	// (0x00074961) cell_dia3_key1_fun_pane

0x8faa,	// (0x00074979) dia3_listrow_pane

0xe214,	// (0x00079be3) bg_dia3_numentry_pane_g1

0x94d2,	// (0x00074ea1) bg_button_pane_cp21

0xef11,	// (0x0007a8e0) cell_dia3_key_num_pane_t1

0xef1f,	// (0x0007a8ee) cell_dia3_key_num_pane_t2

0xef2e,	// (0x0007a8fd) cell_dia3_key_num_pane_t3

0xef3d,	// (0x0007a90c) cell_dia3_key_num_pane_t4

0x0003,

0x00b5,	// (0x0006ba84) cell_dia3_key_num_pane_t

0x94d2,	// (0x00074ea1) bg_button_pane_cp19

0x8fbc,	// (0x0007498b) cell_dia3_key0_fun_pane_g1

0x94d2,	// (0x00074ea1) bg_button_pane_cp20

0x8fc4,	// (0x00074993) cell_dia3_key1_fun_pane_g1

0x8fcc,	// (0x0007499b) area_left_week_number_pane

0x8fd8,	// (0x000749a7) area_top_day_name_pane

0x8feb,	// (0x000749ba) frame_month_view_pane

0xef4c,	// (0x0007a91b) grid_month_view_pane

0x8ffe,	// (0x000749cd) cell_top_day_name_pane_ParamLimits

0x8ffe,	// (0x000749cd) cell_top_day_name_pane

0x902b,	// (0x000749fa) cell_area_left_week_number_pane_ParamLimits

0x902b,	// (0x000749fa) cell_area_left_week_number_pane

0x903f,	// (0x00074a0e) cell_month_view_pane_ParamLimits

0x903f,	// (0x00074a0e) cell_month_view_pane

0xef5a,	// (0x0007a929) frm_month_g1

0x906c,	// (0x00074a3b) frm_month_g2

0x907f,	// (0x00074a4e) frm_month_g3

0x9092,	// (0x00074a61) frm_month_g4

0x90a5,	// (0x00074a74) frm_month_g5

0x90b8,	// (0x00074a87) frm_month_g6

0x90cb,	// (0x00074a9a) frm_month_g7

0xef67,	// (0x0007a936) frm_month_g8

0x90de,	// (0x00074aad) frm_month_g9

0x90ee,	// (0x00074abd) frm_month_g10

0x90fe,	// (0x00074acd) frm_month_g11

0x910e,	// (0x00074add) frm_month_g12

0x9120,	// (0x00074aef) frm_month_g13

0x9132,	// (0x00074b01) frm_month_g14

0x9146,	// (0x00074b15) frm_month_g15

0x915a,	// (0x00074b29) frm_month_g16

0x000f,

0xfebe,	// (0x0007b88d) frm_month_g

0xef74,	// (0x0007a943) cell_top_day_name_pane_t1

0x916e,	// (0x00074b3d) cell_area_left_week_number_pane_g1

0x917a,	// (0x00074b49) cell_area_left_week_number_pane_t1

0xcfc2,	// (0x00078991) cell_month_view_pane_g1

0x918d,	// (0x00074b5c) cell_month_view_pane_t1

0x94d2,	// (0x00074ea1) main_fps_pane

0xe78f,	// (0x0007a15e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe78f,	// (0x0007a15e) cmail_ddmenu_btn02_pane_cp1

0xe7ab,	// (0x0007a17a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7ab,	// (0x0007a17a) cmail_ddmenu_btn02_pane_cp2

0x885e,	// (0x0007422d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x885e,	// (0x0007422d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007b7fc) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007b7fc) cmail_ddmenu_btn02_pane_g

0x887c,	// (0x0007424b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x887c,	// (0x0007424b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007b801) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007b801) cmail_ddmenu_btn02_pane_t

0x91a0,	// (0x00074b6f) fps_text_pane_ParamLimits

0x91a0,	// (0x00074b6f) fps_text_pane

0x91b7,	// (0x00074b86) main_fps_pane_g1_ParamLimits

0x91b7,	// (0x00074b86) main_fps_pane_g1

0x91d1,	// (0x00074ba0) wait_bar_pane_cp010_ParamLimits

0x91d1,	// (0x00074ba0) wait_bar_pane_cp010

0x91e2,	// (0x00074bb1) fps_text_pane_t1_ParamLimits

0x91e2,	// (0x00074bb1) fps_text_pane_t1

0xd6f9,	// (0x000790c8) cam4_image_uncrop_pane_g1

0xd702,	// (0x000790d1) cam4_image_uncrop_pane_g2

0x5a7a,	// (0x00071449) cam4_image_uncrop_pane_g3

0x5a83,	// (0x00071452) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007b2bd) cam4_image_uncrop_pane_g

0x8faa,	// (0x00074979) dia3_listrow_pane_ParamLimits

0x94d2,	// (0x00074ea1) main_phob2_pane

0x839b,	// (0x00073d6a) cell_tport_appsw_pane_cp02_ParamLimits

0x839b,	// (0x00073d6a) cell_tport_appsw_pane_cp02

0x83af,	// (0x00073d7e) cell_tport_appsw_pane_cp03_ParamLimits

0x83af,	// (0x00073d7e) cell_tport_appsw_pane_cp03

0x94d2,	// (0x00074ea1) phob2_contact_card_pane

0x94d2,	// (0x00074ea1) phob2_listscroll_pane

0xef87,	// (0x0007a956) phob2_list_pane

0xef8f,	// (0x0007a95e) scroll_pane_cp034

0x91fa,	// (0x00074bc9) phob2_cc_data_pane_ParamLimits

0x91fa,	// (0x00074bc9) phob2_cc_data_pane

0x9219,	// (0x00074be8) phob2_cc_listscroll_pane_ParamLimits

0x9219,	// (0x00074be8) phob2_cc_listscroll_pane

0x8d68,	// (0x00074737) list_double_large_graphic_phob2_pane_ParamLimits

0x8d68,	// (0x00074737) list_double_large_graphic_phob2_pane

0x9237,	// (0x00074c06) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9237,	// (0x00074c06) list_double_large_graphic_phob2_pane_g1

0x924d,	// (0x00074c1c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x924d,	// (0x00074c1c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfedf,	// (0x0007b8ae) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfedf,	// (0x0007b8ae) list_double_large_graphic_phob2_pane_g

0x9259,	// (0x00074c28) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9259,	// (0x00074c28) list_double_large_graphic_phob2_pane_t1

0x926e,	// (0x00074c3d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x926e,	// (0x00074c3d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfee4,	// (0x0007b8b3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfee4,	// (0x0007b8b3) list_double_large_graphic_phob2_pane_t

0x94d2,	// (0x00074ea1) list_highlight_pane_cp024

0x9280,	// (0x00074c4f) phob2_cc_button_pane

0x9288,	// (0x00074c57) phob2_cc_data_pane_g1_ParamLimits

0x9288,	// (0x00074c57) phob2_cc_data_pane_g1

0x929d,	// (0x00074c6c) phob2_cc_data_pane_g2_ParamLimits

0x929d,	// (0x00074c6c) phob2_cc_data_pane_g2

0x0001,

0xfee9,	// (0x0007b8b8) phob2_cc_data_pane_g_ParamLimits

0xfee9,	// (0x0007b8b8) phob2_cc_data_pane_g

0x92ad,	// (0x00074c7c) phob2_cc_data_pane_t1_ParamLimits

0x92ad,	// (0x00074c7c) phob2_cc_data_pane_t1

0x92c5,	// (0x00074c94) phob2_cc_data_pane_t2_ParamLimits

0x92c5,	// (0x00074c94) phob2_cc_data_pane_t2

0x92dd,	// (0x00074cac) phob2_cc_data_pane_t3_ParamLimits

0x92dd,	// (0x00074cac) phob2_cc_data_pane_t3

0x0002,

0xfeee,	// (0x0007b8bd) phob2_cc_data_pane_t_ParamLimits

0xfeee,	// (0x0007b8bd) phob2_cc_data_pane_t

0xef97,	// (0x0007a966) phob2_cc_list_pane_ParamLimits

0xef97,	// (0x0007a966) phob2_cc_list_pane

0xda2f,	// (0x000793fe) scroll_pane_cp035_ParamLimits

0xda2f,	// (0x000793fe) scroll_pane_cp035

0xa542,	// (0x00075f11) bg_button_pane_cp033

0xefa3,	// (0x0007a972) phob2_cc_button_pane_g1

0xefaf,	// (0x0007a97e) phob2_cc_button_pane_t1

0xefc4,	// (0x0007a993) phob2_cc_button_pane_t2

0x0001,

0x00f5,	// (0x0006bac4) phob2_cc_button_pane_t

0x92f5,	// (0x00074cc4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92f5,	// (0x00074cc4) list_double_large_graphic_phob2_cc_pane

0x9325,	// (0x00074cf4) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9325,	// (0x00074cf4) list_double_large_graphic_phob2_cc_pane_g1

0x9331,	// (0x00074d00) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9331,	// (0x00074d00) list_double_large_graphic_phob2_cc_pane_g2

0x933d,	// (0x00074d0c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x933d,	// (0x00074d0c) list_double_large_graphic_phob2_cc_pane_g3

0x9349,	// (0x00074d18) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9349,	// (0x00074d18) list_double_large_graphic_phob2_cc_pane_g4

0xa9d1,	// (0x000763a0) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa9d1,	// (0x000763a0) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfef5,	// (0x0007b8c4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfef5,	// (0x0007b8c4) list_double_large_graphic_phob2_cc_pane_g

0x9355,	// (0x00074d24) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9355,	// (0x00074d24) list_double_large_graphic_phob2_cc_pane_t1

0x937e,	// (0x00074d4d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x937e,	// (0x00074d4d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff00,	// (0x0007b8cf) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff00,	// (0x0007b8cf) list_double_large_graphic_phob2_cc_pane_t

0xefd6,	// (0x0007a9a5) list_highlight_pane_cp025_ParamLimits

0xefd6,	// (0x0007a9a5) list_highlight_pane_cp025

0xa542,	// (0x00075f11) bg_button_pane_cp033_ParamLimits

0xefa3,	// (0x0007a972) phob2_cc_button_pane_g1_ParamLimits

0xefaf,	// (0x0007a97e) phob2_cc_button_pane_t1_ParamLimits

0xefc4,	// (0x0007a993) phob2_cc_button_pane_t2_ParamLimits

0x00f5,	// (0x0006bac4) phob2_cc_button_pane_t_ParamLimits

0x0442,	// (0x0006be11) popup_wgtman_window

0xd874,	// (0x00079243) scroll_pane_cp038

0x8ce1,	// (0x000746b0) wgtman_btn_pane_cp_01_ParamLimits

0x8ce1,	// (0x000746b0) wgtman_btn_pane_cp_01

0xefe4,	// (0x0007a9b3) wgtman_content_pane

0xefed,	// (0x0007a9bc) wgtman_heading_pane

0x94d2,	// (0x00074ea1) bg_heading_pane_cp02

0xeff6,	// (0x0007a9c5) wgtman_heading_pane_g1

0xeffe,	// (0x0007a9cd) wgtman_heading_pane_t1

0xf00c,	// (0x0007a9db) scroll_pane_cp036

0xf014,	// (0x0007a9e3) wgtman_list_pane

0xf01c,	// (0x0007a9eb) wgtman_list_pane_t1_ParamLimits

0xf01c,	// (0x0007a9eb) wgtman_list_pane_t1

0x9d53,	// (0x00075722) cam4_grid_pane

0x6737,	// (0x00072106) bg_button_pane_cp015_ParamLimits

0x6749,	// (0x00072118) bg_button_pane_cp016_ParamLimits

0x675c,	// (0x0007212b) bg_button_pane_cp017_ParamLimits

0x67b4,	// (0x00072183) popup_vitu2_query_window_g3_ParamLimits

0x67b4,	// (0x00072183) popup_vitu2_query_window_g3

0x6871,	// (0x00072240) popup_vitu2_query_window_t6_ParamLimits

0x6871,	// (0x00072240) popup_vitu2_query_window_t6

0x689c,	// (0x0007226b) popup_vitu2_query_window_t7_ParamLimits

0x689c,	// (0x0007226b) popup_vitu2_query_window_t7

0xd6f9,	// (0x000790c8) cam4_grid_pane_g1

0xd702,	// (0x000790d1) cam4_grid_pane_g2

0xf036,	// (0x0007aa05) cam4_grid_pane_g3

0xf03f,	// (0x0007aa0e) cam4_grid_pane_g4

0x0003,

0xff05,	// (0x0007b8d4) cam4_grid_pane_g

0x139a,	// (0x0006cd69) aid_placing_vt_slider_lsc_ParamLimits

0x16a5,	// (0x0006d074) vidtel_button_pane_ParamLimits

0x16a5,	// (0x0006d074) vidtel_button_pane

0x94d2,	// (0x00074ea1) bg_button_pane_cp034

0xf04a,	// (0x0007aa19) vidtel_button_pane_g1

0xf052,	// (0x0007aa21) vidtel_button_pane_t1

0xd976,	// (0x00079345) aid_size_vtel_slider_touch

0xda2f,	// (0x000793fe) scroll_pane_cp039

0x768f,	// (0x0007305e) ncim_query_button_pane_cp01_ParamLimits

0x76ae,	// (0x0007307d) ncimui_query_pane_g1_ParamLimits

0xa542,	// (0x00075f11) input_focus_pane_cp012_ParamLimits

0xe252,	// (0x00079c21) ncim_query_entry_pane_t1_ParamLimits

0xda2f,	// (0x000793fe) scroll_pane_cp039_ParamLimits

0xb3f0,	// (0x00076dbf) navi_pane_bcale_mc_g1

0xb3f8,	// (0x00076dc7) navi_pane_bcale_mc_t1

0xe7f4,	// (0x0007a1c3) main_sp_fs_email_pane_g1

0xe800,	// (0x0007a1cf) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007b6b4) main_sp_fs_email_pane_g

0xea56,	// (0x0007a425) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea56,	// (0x0007a425) list_single_cale_mrui_row_pane_g3

0x889c,	// (0x0007426b) list_single_recal_day_pane_g5_event_pane

0xa99c,	// (0x0007636b) list_single_recal_day_pane_g7

0xf068,	// (0x0007aa37) list_recal_day_event_pane_cp01

0xf071,	// (0x0007aa40) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0007aa48) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0007aa50) list_recal_vselct_pane_cp01

0xd998,	// (0x00079367) list_recal_day_event_pane_cp01_g1

0xa9dd,	// (0x000763ac) list_recal_day_event_pane_cp01_t1

0xa9a4,	// (0x00076373) list_single_recal_day_pane_t1_ParamLimits

0xa9b6,	// (0x00076385) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007b811) list_single_recal_day_pane_t_ParamLimits

0xa36d,	// (0x00075d3c) bg_notes_pane_ParamLimits

0xa410,	// (0x00075ddf) list_notes_pane_ParamLimits

0x0788,	// (0x0006c157) scroll_pane_cp06_ParamLimits

0xa432,	// (0x00075e01) main_notes_pane_ParamLimits

0x94d2,	// (0x00074ea1) main_welc_pane

0x93a7,	// (0x00074d76) main_welc_body_pane_ParamLimits

0x93a7,	// (0x00074d76) main_welc_body_pane

0x93c5,	// (0x00074d94) main_welc_opti_pane_ParamLimits

0x93c5,	// (0x00074d94) main_welc_opti_pane

0x940a,	// (0x00074dd9) main_welc_pane_t1_ParamLimits

0x940a,	// (0x00074dd9) main_welc_pane_t1

0x9428,	// (0x00074df7) main_welc_body_row_pane_ParamLimits

0x9428,	// (0x00074df7) main_welc_body_row_pane

0xe968,	// (0x0007a337) main_welc_opti_row_pane_ParamLimits

0xe968,	// (0x0007a337) main_welc_opti_row_pane

0xf08b,	// (0x0007aa5a) main_welc_opti_row_pane_g1

0x943c,	// (0x00074e0b) main_welc_opti_row_pane_t1

0xf093,	// (0x0007aa62) main_welc_body_row_pane_t1

0xeda9,	// (0x0007a778) popup_notif_wgt_heading_pane

0xedc3,	// (0x0007a792) aid_size_list_notif_wgt_del_ParamLimits

0xedd0,	// (0x0007a79f) list_notif_wgt_row_pane_g1_ParamLimits

0xeddc,	// (0x0007a7ab) list_notif_wgt_row_pane_g2_ParamLimits

0xedeb,	// (0x0007a7ba) list_notif_wgt_row_pane_g3_ParamLimits

0x005f,	// (0x0006ba2e) list_notif_wgt_row_pane_g_ParamLimits

0xedf8,	// (0x0007a7c7) list_notif_wgt_row_pane_t1_ParamLimits

0xee0e,	// (0x0007a7dd) list_notif_wgt_row_pane_t2_ParamLimits

0xee20,	// (0x0007a7ef) list_notif_wgt_row_pane_t3_ParamLimits

0x0066,	// (0x0006ba35) list_notif_wgt_row_pane_t_ParamLimits

0x8d7a,	// (0x00074749) listrow_wgtman_pane_g1_ParamLimits

0x8d87,	// (0x00074756) listrow_wgtman_pane_g2_ParamLimits

0xfe98,	// (0x0007b867) listrow_wgtman_pane_g_ParamLimits

0x8da5,	// (0x00074774) listrow_wgtman_pane_t1_ParamLimits

0x8dbd,	// (0x0007478c) listrow_wgtman_pane_t2_ParamLimits

0xfe9d,	// (0x0007b86c) listrow_wgtman_pane_t_ParamLimits

0x8de3,	// (0x000747b2) wait_bar_pane_cp09_ParamLimits

0x94d2,	// (0x00074ea1) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0007aa71) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0007aa79) popup_notif_wgt_heading_pane_t1

0x94d2,	// (0x00074ea1) main_vids_pane

0x94d2,	// (0x00074ea1) vids_listscroll_pane

0x944b,	// (0x00074e1a) scroll_pane_cp040

0x94d2,	// (0x00074ea1) vids_list_pane

0x9456,	// (0x00074e25) vids_list_double_pane_ParamLimits

0x9456,	// (0x00074e25) vids_list_double_pane

0x9467,	// (0x00074e36) vids_list_double_pane_g1

0x9470,	// (0x00074e3f) vids_list_double_pane_t1

0x9480,	// (0x00074e4f) vids_list_double_pane_t2

0x0001,

0xff13,	// (0x0007b8e2) vids_list_double_pane_t

0x954a,	// (0x00074f19) main_ncimui_pane_ParamLimits

0x74c5,	// (0x00072e94) main_ncimui_pane_g1_ParamLimits

0x74d1,	// (0x00072ea0) main_ncimui_pane_g2_ParamLimits

0x74d1,	// (0x00072ea0) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007b5b9) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007b5b9) main_ncimui_pane_g

0x93e0,	// (0x00074daf) main_welc_pane_g1_ParamLimits

0x93e0,	// (0x00074daf) main_welc_pane_g1

0x93f5,	// (0x00074dc4) main_welc_pane_g2_ParamLimits

0x93f5,	// (0x00074dc4) main_welc_pane_g2

0x0001,

0xff0e,	// (0x0007b8dd) main_welc_pane_g_ParamLimits

0xff0e,	// (0x0007b8dd) main_welc_pane_g

0xa36d,	// (0x00075d3c) listscroll_mce_pane_ParamLimits

0xb545,	// (0x00076f14) wait_bar_pane_cp10

0xc93f,	// (0x0007830e) main_cale_day_pane_ParamLimits

0xc93f,	// (0x0007830e) main_cale_week_pane_ParamLimits

0xa36d,	// (0x00075d3c) main_messa_pane_ParamLimits

0x4d27,	// (0x000706f6) main_clock2_btn_pane_ParamLimits

0x4d27,	// (0x000706f6) main_clock2_btn_pane

0xd16a,	// (0x00078b39) main_clock2_btn_pane_cp01_ParamLimits

0xd16a,	// (0x00078b39) main_clock2_btn_pane_cp01

0xea27,	// (0x0007a3f6) list_cale_mrui_pane_ParamLimits

0xee56,	// (0x0007a825) main_cf0_pane_g2

0x0001,

0x006d,	// (0x0006ba3c) main_cf0_pane_g

0x8fcc,	// (0x0007499b) area_left_week_number_pane_ParamLimits

0x8fd8,	// (0x000749a7) area_top_day_name_pane_ParamLimits

0x8feb,	// (0x000749ba) frame_month_view_pane_ParamLimits

0xef4c,	// (0x0007a91b) grid_month_view_pane_ParamLimits

0xef5a,	// (0x0007a929) frm_month_g1_ParamLimits

0x906c,	// (0x00074a3b) frm_month_g2_ParamLimits

0x907f,	// (0x00074a4e) frm_month_g3_ParamLimits

0x9092,	// (0x00074a61) frm_month_g4_ParamLimits

0x90a5,	// (0x00074a74) frm_month_g5_ParamLimits

0x90b8,	// (0x00074a87) frm_month_g6_ParamLimits

0x90cb,	// (0x00074a9a) frm_month_g7_ParamLimits

0xef67,	// (0x0007a936) frm_month_g8_ParamLimits

0x90de,	// (0x00074aad) frm_month_g9_ParamLimits

0x90ee,	// (0x00074abd) frm_month_g10_ParamLimits

0x90fe,	// (0x00074acd) frm_month_g11_ParamLimits

0x910e,	// (0x00074add) frm_month_g12_ParamLimits

0x9120,	// (0x00074aef) frm_month_g13_ParamLimits

0x9132,	// (0x00074b01) frm_month_g14_ParamLimits

0x9146,	// (0x00074b15) frm_month_g15_ParamLimits

0x915a,	// (0x00074b29) frm_month_g16_ParamLimits

0xfebe,	// (0x0007b88d) frm_month_g_ParamLimits

0xef74,	// (0x0007a943) cell_top_day_name_pane_t1_ParamLimits

0x916e,	// (0x00074b3d) cell_area_left_week_number_pane_g1_ParamLimits

0x917a,	// (0x00074b49) cell_area_left_week_number_pane_t1_ParamLimits

0xcfc2,	// (0x00078991) cell_month_view_pane_g1_ParamLimits

0x918d,	// (0x00074b5c) cell_month_view_pane_t1_ParamLimits

0xa365,	// (0x00075d34) main_clock2_btn_pane_g1

0xf0b8,	// (0x0007aa87) main_clock2_btn_pane_t1

0xa542,	// (0x00075f11) listscroll_cmail_pane_ParamLimits

0xe7f4,	// (0x0007a1c3) main_sp_fs_email_pane_g1_ParamLimits

0xe800,	// (0x0007a1cf) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007b6b4) main_sp_fs_email_pane_g_ParamLimits

0xeb35,	// (0x0007a504) list_recal_day_pane_ParamLimits

0xeb46,	// (0x0007a515) mian_recal_day_pane_t1

0x8000,	// (0x000739cf) list_single_dyc_row_text_pane_t4_ParamLimits

0x8000,	// (0x000739cf) list_single_dyc_row_text_pane_t4

0x8049,	// (0x00073a18) list_single_dyc_row_text_pane_t5_ParamLimits

0x8049,	// (0x00073a18) list_single_dyc_row_text_pane_t5

0xa712,	// (0x000760e1) list_single_dyc_row_text_pane_t6_ParamLimits

0xa712,	// (0x000760e1) list_single_dyc_row_text_pane_t6

0x2323,	// (0x0006dcf2) aid_mgn_list_cale_time_pane

0x954a,	// (0x00074f19) main_gallery2_pane_ParamLimits

0xd180,	// (0x00078b4f) main_clock2_pane_cp01_t1

0xd190,	// (0x00078b5f) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0007b18f) main_clock2_pane_cp01_t

0x0b42,	// (0x0006c511) cale_week_scroll_pane_g16_ParamLimits

0x0b42,	// (0x0006c511) cale_week_scroll_pane_g16

0xaae7,	// (0x000764b6) vorec_slider_pane

0xf052,	// (0x0007aa21) vidtel_button_pane_t1_ParamLimits

0x8902,	// (0x000742d1) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8902,	// (0x000742d1) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8913,	// (0x000742e2) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8913,	// (0x000742e2) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe56,	// (0x0007b825) main_fs_bigclock_clock_pane_g_ParamLimits

0x8926,	// (0x000742f5) main_fs_bigclock_clock_pane_t1_ParamLimits

0x893c,	// (0x0007430b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe5f,	// (0x0007b82e) main_fs_bigclock_clock_pane_t_ParamLimits

0x451e,	// (0x0006feed) main_mup3_lyrics_pane_ParamLimits

0x451e,	// (0x0006feed) main_mup3_lyrics_pane

0x94b6,	// (0x00074e85) main_mup3_lyrics_pane_t1_ParamLimits

0x94b6,	// (0x00074e85) main_mup3_lyrics_pane_t1

0x9aa5,	// (0x00075474) aid_main_mp4_pane_t1_area

0x9aaf,	// (0x0007547e) aid_main_mp4_pane_t2_area

0x9b5b,	// (0x0007552a) main_mp4_pane_g7_ParamLimits

0x9b5b,	// (0x0007552a) main_mp4_pane_g7

0x9b67,	// (0x00075536) main_mp4_pane_g8_ParamLimits

0x9b67,	// (0x00075536) main_mp4_pane_g8

0x584d,	// (0x0007121c) aid_call6_pane_g1_size

0x930f,	// (0x00074cde) list_double_large_graphic_phob2_other_pane_ParamLimits

0x930f,	// (0x00074cde) list_double_large_graphic_phob2_other_pane

0xaea2,	// (0x00076871) list_double_large_graphic_phob2_other_pane_g1

0x94d2,	// (0x00074ea1) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small

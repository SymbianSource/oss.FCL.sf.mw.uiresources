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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005f785 };

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
0x51e1,	// (0x00064966) Screen

0x51ed,	// (0x00064972) application_window

0x5249,	// (0x000649ce) area_bottom_pane_ParamLimits

0x5249,	// (0x000649ce) area_bottom_pane

0x52a1,	// (0x00064a26) area_top_pane_ParamLimits

0x52a1,	// (0x00064a26) area_top_pane

0x5305,	// (0x00064a8a) call_video_uplink_pane_ParamLimits

0x5305,	// (0x00064a8a) call_video_uplink_pane

0x5344,	// (0x00064ac9) main_pane_ParamLimits

0x5344,	// (0x00064ac9) main_pane

0xea9c,	// (0x0006e221) context_pane

0x9482,	// (0x00068c07) navi_pane

0x94a8,	// (0x00068c2d) popup_cale_events_window_ParamLimits

0x94a8,	// (0x00068c2d) popup_cale_events_window

0xeaaf,	// (0x0006e234) popup_mup_playback_window

0x94c0,	// (0x00068c45) signal_pane

0x5746,	// (0x00064ecb) main_browser_pane

0x5fce,	// (0x00065753) main_burst_pane

0x9302,	// (0x00068a87) main_calc_pane

0xea82,	// (0x0006e207) main_cale_day_pane

0x5aab,	// (0x00065230) main_cale_month_pane

0xea82,	// (0x0006e207) main_cale_week_pane

0x5fce,	// (0x00065753) main_call_pane

0x0870,	// (0x0005fff5) main_call_poc_pane

0x5fce,	// (0x00065753) main_camera_pane

0x5fce,	// (0x00065753) main_chi_dic_pane

0x7d17,	// (0x0006749c) main_clock_pane

0x0870,	// (0x0005fff5) main_fmradio_pane

0x5fce,	// (0x00065753) main_graph_messa_pane

0x0870,	// (0x0005fff5) main_help_pane

0x5746,	// (0x00064ecb) main_im_pane

0x0acb,	// (0x00060250) main_image_pane_ParamLimits

0x0acb,	// (0x00060250) main_image_pane

0x0870,	// (0x0005fff5) main_location2_pane

0x5fce,	// (0x00065753) main_location_pane

0x0acb,	// (0x00060250) main_messa_pane

0x0870,	// (0x0005fff5) main_mp2_pane

0x5fce,	// (0x00065753) main_mp_pane

0x0870,	// (0x0005fff5) main_msg_pane

0x0870,	// (0x0005fff5) main_mup_eq_pane

0x0870,	// (0x0005fff5) main_mup_pane

0x5746,	// (0x00064ecb) main_notes_pane

0x0870,	// (0x0005fff5) main_pec_pane

0x0870,	// (0x0005fff5) main_phob_pane

0x0870,	// (0x0005fff5) main_pinb_pane

0x0870,	// (0x0005fff5) main_postcard_pane

0x0870,	// (0x0005fff5) main_qdial_pane

0x5fce,	// (0x00065753) main_skin_pane

0x0870,	// (0x0005fff5) main_smil2_pane

0x5fce,	// (0x00065753) main_smil_pane

0x5fce,	// (0x00065753) main_video_pane

0x5fce,	// (0x00065753) main_video_tele_pane

0x0acb,	// (0x00060250) main_viewer_pane_ParamLimits

0x0acb,	// (0x00060250) main_viewer_pane

0x5fce,	// (0x00065753) main_vorec_pane

0x934c,	// (0x00068ad1) popup_blid_sat_info_window_ParamLimits

0x934c,	// (0x00068ad1) popup_blid_sat_info_window

0x936c,	// (0x00068af1) popup_dyc_status_message_window_ParamLimits

0x936c,	// (0x00068af1) popup_dyc_status_message_window

0x937c,	// (0x00068b01) popup_grid_large_graphic_window_ParamLimits

0x937c,	// (0x00068b01) popup_grid_large_graphic_window

0x940d,	// (0x00068b92) popup_loc_request_window_ParamLimits

0x940d,	// (0x00068b92) popup_loc_request_window

0x945a,	// (0x00068bdf) popup_wml_address_window_ParamLimits

0x945a,	// (0x00068bdf) popup_wml_address_window

0x91da,	// (0x0006895f) call_muted_g1

0x8b8a,	// (0x0006830f) popup_call_audio_conf_window_ParamLimits

0x8b8a,	// (0x0006830f) popup_call_audio_conf_window

0x91ea,	// (0x0006896f) popup_call_audio_first_window_ParamLimits

0x91ea,	// (0x0006896f) popup_call_audio_first_window

0x922a,	// (0x000689af) popup_call_audio_in_window_ParamLimits

0x922a,	// (0x000689af) popup_call_audio_in_window

0x924e,	// (0x000689d3) popup_call_audio_out_window_ParamLimits

0x924e,	// (0x000689d3) popup_call_audio_out_window

0x9270,	// (0x000689f5) popup_call_audio_second_window_ParamLimits

0x9270,	// (0x000689f5) popup_call_audio_second_window

0x92a0,	// (0x00068a25) popup_call_audio_wait_window_ParamLimits

0x92a0,	// (0x00068a25) popup_call_audio_wait_window

0x92c1,	// (0x00068a46) popup_number_entry_window_ParamLimits

0x92c1,	// (0x00068a46) popup_number_entry_window

0x045d,	// (0x0005fbe2) bg_popup_call_pane_cp05_ParamLimits

0x045d,	// (0x0005fbe2) bg_popup_call_pane_cp05

0x047d,	// (0x0005fc02) popup_number_entry_window_t1

0x0490,	// (0x0005fc15) popup_number_entry_window_t2

0x04a2,	// (0x0005fc27) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0006e80a) popup_number_entry_window_t

0x04b4,	// (0x0005fc39) text_title_cp2

0x04c7,	// (0x0005fc4c) bg_popup_call_pane_cp_ParamLimits

0x04c7,	// (0x0005fc4c) bg_popup_call_pane_cp

0x04d5,	// (0x0005fc5a) call_thumbnail_pane

0x04dd,	// (0x0005fc62) popup_call_audio_in_window_g1_ParamLimits

0x04dd,	// (0x0005fc62) popup_call_audio_in_window_g1

0x04e9,	// (0x0005fc6e) popup_call_audio_in_window_g2_ParamLimits

0x04e9,	// (0x0005fc6e) popup_call_audio_in_window_g2

0x04f5,	// (0x0005fc7a) popup_call_audio_in_window_g3_ParamLimits

0x04f5,	// (0x0005fc7a) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0006e813) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0006e813) popup_call_audio_in_window_g

0x0501,	// (0x0005fc86) popup_call_audio_in_window_t1_ParamLimits

0x0501,	// (0x0005fc86) popup_call_audio_in_window_t1

0x051d,	// (0x0005fca2) popup_call_audio_in_window_t2_ParamLimits

0x051d,	// (0x0005fca2) popup_call_audio_in_window_t2

0x0539,	// (0x0005fcbe) popup_call_audio_in_window_t3_ParamLimits

0x0539,	// (0x0005fcbe) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0006e81a) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0006e81a) popup_call_audio_in_window_t

0x04c7,	// (0x0005fc4c) bg_popup_call_pane_cp01_ParamLimits

0x04c7,	// (0x0005fc4c) bg_popup_call_pane_cp01

0x04d5,	// (0x0005fc5a) call_thumbnail_pane_cp02

0x054c,	// (0x0005fcd1) call_type_pane_cp022

0x0554,	// (0x0005fcd9) popup_call_audio_out_window_g1_ParamLimits

0x0554,	// (0x0005fcd9) popup_call_audio_out_window_g1

0x0566,	// (0x0005fceb) popup_call_audio_out_window_g2_ParamLimits

0x0566,	// (0x0005fceb) popup_call_audio_out_window_g2

0x0572,	// (0x0005fcf7) popup_call_audio_out_window_g3_ParamLimits

0x0572,	// (0x0005fcf7) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0006e821) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0006e821) popup_call_audio_out_window_g

0x0584,	// (0x0005fd09) popup_call_audio_out_window_t1_ParamLimits

0x0584,	// (0x0005fd09) popup_call_audio_out_window_t1

0x059c,	// (0x0005fd21) popup_call_audio_out_window_t2_ParamLimits

0x059c,	// (0x0005fd21) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0006e828) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0006e828) popup_call_audio_out_window_t

0x05b1,	// (0x0005fd36) bg_popup_call_pane_ParamLimits

0x05b1,	// (0x0005fd36) bg_popup_call_pane

0x5545,	// (0x00064cca) call_thumbnail_pane_cp_ParamLimits

0x5545,	// (0x00064cca) call_thumbnail_pane_cp

0x0635,	// (0x0005fdba) call_type_pane_cp01_ParamLimits

0x0635,	// (0x0005fdba) call_type_pane_cp01

0x0679,	// (0x0005fdfe) popup_call_audio_first_window_g1_ParamLimits

0x0679,	// (0x0005fdfe) popup_call_audio_first_window_g1

0x06c5,	// (0x0005fe4a) popup_call_audio_first_window_g2_ParamLimits

0x06c5,	// (0x0005fe4a) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0006e82d) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0006e82d) popup_call_audio_first_window_g

0x0709,	// (0x0005fe8e) popup_call_audio_first_window_t1_ParamLimits

0x0709,	// (0x0005fe8e) popup_call_audio_first_window_t1

0x07b5,	// (0x0005ff3a) popup_call_audio_first_window_t4_ParamLimits

0x07b5,	// (0x0005ff3a) popup_call_audio_first_window_t4

0x0841,	// (0x0005ffc6) popup_call_audio_first_window_t5_ParamLimits

0x0841,	// (0x0005ffc6) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0006e832) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0006e832) popup_call_audio_first_window_t

0x0870,	// (0x0005fff5) bg_popup_call_pane_cp02

0x087a,	// (0x0005ffff) call_type_pane_cp023

0x0882,	// (0x00060007) popup_call_audio_wait_window_g1

0x088a,	// (0x0006000f) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0006e839) popup_call_audio_wait_window_g

0x0892,	// (0x00060017) popup_call_audio_wait_window_t3

0x08a0,	// (0x00060025) bg_popup_call_pane_cp03_ParamLimits

0x08a0,	// (0x00060025) bg_popup_call_pane_cp03

0x0900,	// (0x00060085) call_thumbnail_pane_cp011_ParamLimits

0x0900,	// (0x00060085) call_thumbnail_pane_cp011

0x090c,	// (0x00060091) call_type_pane_cp034_ParamLimits

0x090c,	// (0x00060091) call_type_pane_cp034

0x0948,	// (0x000600cd) popup_call_audio_second_window_g1_ParamLimits

0x0948,	// (0x000600cd) popup_call_audio_second_window_g1

0x0984,	// (0x00060109) popup_call_audio_second_window_g2_ParamLimits

0x0984,	// (0x00060109) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0006e83e) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0006e83e) popup_call_audio_second_window_g

0x09c0,	// (0x00060145) popup_call_audio_second_window_t1_ParamLimits

0x09c0,	// (0x00060145) popup_call_audio_second_window_t1

0x0a41,	// (0x000601c6) popup_call_audio_second_window_t2_ParamLimits

0x0a41,	// (0x000601c6) popup_call_audio_second_window_t2

0x0a77,	// (0x000601fc) popup_call_audio_second_window_t3_ParamLimits

0x0a77,	// (0x000601fc) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0006e843) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0006e843) popup_call_audio_second_window_t

0x0870,	// (0x0005fff5) bg_popup_call_pane_cp04

0x0aad,	// (0x00060232) list_conf_pane

0x0ab5,	// (0x0006023a) popup_call_audio_conf_window_t1

0x0ac3,	// (0x00060248) call_thumbnail_pane_g1

0x0acb,	// (0x00060250) bg_pinb_pane_ParamLimits

0x0acb,	// (0x00060250) bg_pinb_pane

0x0ad9,	// (0x0006025e) find_pinb_pane

0x0acb,	// (0x00060250) listscroll_pinb_pane_ParamLimits

0x0acb,	// (0x00060250) listscroll_pinb_pane

0x0ae3,	// (0x00060268) pinb_bg_pane_g1

0x0ae3,	// (0x00060268) pinb_bg_pane_g2

0x0ae3,	// (0x00060268) pinb_bg_pane_g3

0x0ae3,	// (0x00060268) pinb_bg_pane_g4

0x0ae3,	// (0x00060268) pinb_bg_pane_g5

0x0ae3,	// (0x00060268) pinb_bg_pane_g6

0x0ae3,	// (0x00060268) pinb_bg_pane_g7

0x0ae3,	// (0x00060268) pinb_bg_pane_g8

0x0ae3,	// (0x00060268) pinb_bg_pane_g9

0x0ae3,	// (0x00060268) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0006e84a) pinb_bg_pane_g

0x03ce,	// (0x0005fb53) grid_pinb_pane

0x03ce,	// (0x0005fb53) list_pinb_pane

0x0aed,	// (0x00060272) scroll_pane_cp01_ParamLimits

0x0aed,	// (0x00060272) scroll_pane_cp01

0x0afb,	// (0x00060280) find_pinb_pane_g1_ParamLimits

0x0afb,	// (0x00060280) find_pinb_pane_g1

0x0b13,	// (0x00060298) find_pinb_pane_t1

0x0b25,	// (0x000602aa) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0006e864) find_pinb_pane_t

0x0b3a,	// (0x000602bf) input_focus_pane_cp01_ParamLimits

0x0b3a,	// (0x000602bf) input_focus_pane_cp01

0x0b46,	// (0x000602cb) cell_pinb_pane_ParamLimits

0x0b46,	// (0x000602cb) cell_pinb_pane

0x5569,	// (0x00064cee) cell_pinb_pane_g1_ParamLimits

0x5569,	// (0x00064cee) cell_pinb_pane_g1

0x5577,	// (0x00064cfc) cell_pinb_pane_g2_ParamLimits

0x5577,	// (0x00064cfc) cell_pinb_pane_g2

0x5577,	// (0x00064cfc) cell_pinb_pane_g3_ParamLimits

0x5577,	// (0x00064cfc) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0006e869) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0006e869) cell_pinb_pane_g

0x0870,	// (0x0005fff5) grid_highlight_pane_cp01

0x0b46,	// (0x000602cb) list_pinb_item_pane_ParamLimits

0x0b46,	// (0x000602cb) list_pinb_item_pane

0x03ce,	// (0x0005fb53) list_highlight_pane_cp02

0x5585,	// (0x00064d0a) list_pinb_item_pane_g1_ParamLimits

0x5585,	// (0x00064d0a) list_pinb_item_pane_g1

0x5577,	// (0x00064cfc) list_pinb_item_pane_g2_ParamLimits

0x5577,	// (0x00064cfc) list_pinb_item_pane_g2

0x5569,	// (0x00064cee) list_pinb_item_pane_g3_ParamLimits

0x5569,	// (0x00064cee) list_pinb_item_pane_g3

0x5577,	// (0x00064cfc) list_pinb_item_pane_g4_ParamLimits

0x5577,	// (0x00064cfc) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0006e870) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0006e870) list_pinb_item_pane_g

0x5593,	// (0x00064d18) list_pinb_item_pane_t1_ParamLimits

0x5593,	// (0x00064d18) list_pinb_item_pane_t1

0x55c1,	// (0x00064d46) calc_display_pane

0x55df,	// (0x00064d64) calc_paper_pane

0x55fb,	// (0x00064d80) grid_calc_pane

0x0870,	// (0x0005fff5) bg_list_pane_cp01

0x5627,	// (0x00064dac) clock_g1

0x562f,	// (0x00064db4) clock_g2

0x0001,

0xf0f4,	// (0x0006e879) clock_g

0x5639,	// (0x00064dbe) clock_t1_ParamLimits

0x5639,	// (0x00064dbe) clock_t1

0x564e,	// (0x00064dd3) clock_t2_ParamLimits

0x564e,	// (0x00064dd3) clock_t2

0x5660,	// (0x00064de5) clock_t3_ParamLimits

0x5660,	// (0x00064de5) clock_t3

0x5672,	// (0x00064df7) clock_t4_ParamLimits

0x5672,	// (0x00064df7) clock_t4

0x5684,	// (0x00064e09) clock_t5_ParamLimits

0x5684,	// (0x00064e09) clock_t5

0x5699,	// (0x00064e1e) clock_t6_ParamLimits

0x5699,	// (0x00064e1e) clock_t6

0x56ab,	// (0x00064e30) clock_t7_ParamLimits

0x56ab,	// (0x00064e30) clock_t7

0x56bd,	// (0x00064e42) clock_t8_ParamLimits

0x56bd,	// (0x00064e42) clock_t8

0x56d3,	// (0x00064e58) clock_t9_ParamLimits

0x56d3,	// (0x00064e58) clock_t9

0x0008,

0xf0f9,	// (0x0006e87e) clock_t_ParamLimits

0xf0f9,	// (0x0006e87e) clock_t

0x56e9,	// (0x00064e6e) popup_clock_analogue_window_cp02

0x56e9,	// (0x00064e6e) popup_clock_digital_window_cp01

0x0870,	// (0x0005fff5) listscroll_help_pane

0x0870,	// (0x0005fff5) phob_pre_status_pane

0x56f1,	// (0x00064e76) grid_qdial_pane

0x0acb,	// (0x00060250) listscroll_mce_pane

0x0acb,	// (0x00060250) bg_notes_pane

0x56fb,	// (0x00064e80) list_notes_pane

0x5709,	// (0x00064e8e) scroll_pane_cp06

0x5718,	// (0x00064e9d) bg_calc_paper_pane

0x572c,	// (0x00064eb1) list_calc_pane

0x5746,	// (0x00064ecb) bg_calc_display_pane

0x5752,	// (0x00064ed7) calc_display_pane_t1

0x5767,	// (0x00064eec) calc_display_pane_t2

0x577c,	// (0x00064f01) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0006e891) calc_display_pane_t

0x578e,	// (0x00064f13) cell_calc_pane_ParamLimits

0x578e,	// (0x00064f13) cell_calc_pane

0x57bb,	// (0x00064f40) bg_calc_paper_pane_g1

0x57c7,	// (0x00064f4c) bg_calc_paper_pane_g2

0x57d3,	// (0x00064f58) bg_calc_paper_pane_g3

0x57df,	// (0x00064f64) bg_calc_paper_pane_g4

0x57eb,	// (0x00064f70) bg_calc_paper_pane_g5

0x57f7,	// (0x00064f7c) bg_calc_paper_pane_g6

0x5808,	// (0x00064f8d) bg_calc_paper_pane_g7

0x5819,	// (0x00064f9e) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0006e898) bg_calc_paper_pane_g

0x582a,	// (0x00064faf) calc_bg_paper_pane_g9

0x583b,	// (0x00064fc0) list_calc_item_pane_ParamLimits

0x583b,	// (0x00064fc0) list_calc_item_pane

0x5867,	// (0x00064fec) list_calc_item_pane_g1

0x5874,	// (0x00064ff9) list_calc_item_pane_t1_ParamLimits

0x5874,	// (0x00064ff9) list_calc_item_pane_t1

0x5886,	// (0x0006500b) list_calc_item_pane_t2_ParamLimits

0x5886,	// (0x0006500b) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0006e8a9) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0006e8a9) list_calc_item_pane_t

0x0ae3,	// (0x00060268) cell_calc_pane_g1

0x58b6,	// (0x0006503b) grid_highlight_pane_cp02

0x58d8,	// (0x0006505d) bg_calc_display_pane_g1

0x58e1,	// (0x00065066) bg_calc_display_pane_g2

0x58eb,	// (0x00065070) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0006e8b3) bg_calc_display_pane_g

0x58f4,	// (0x00065079) cell_qdial_pane_ParamLimits

0x58f4,	// (0x00065079) cell_qdial_pane

0x5908,	// (0x0006508d) cell_qdial_pane_g1_ParamLimits

0x5908,	// (0x0006508d) cell_qdial_pane_g1

0x5915,	// (0x0006509a) cell_qdial_pane_g2_ParamLimits

0x5915,	// (0x0006509a) cell_qdial_pane_g2

0x5926,	// (0x000650ab) cell_qdial_pane_g3_ParamLimits

0x5926,	// (0x000650ab) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0006e8ba) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0006e8ba) cell_qdial_pane_g

0x593f,	// (0x000650c4) cell_qdial_pane_t1_ParamLimits

0x593f,	// (0x000650c4) cell_qdial_pane_t1

0x5957,	// (0x000650dc) cell_qdial_pane_t2_ParamLimits

0x5957,	// (0x000650dc) cell_qdial_pane_t2

0x596a,	// (0x000650ef) cell_qdial_pane_t3_ParamLimits

0x596a,	// (0x000650ef) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0006e8c3) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0006e8c3) cell_qdial_pane_t

0x0870,	// (0x0005fff5) grid_highlight_pane_cp04

0x597d,	// (0x00065102) thumbnail_qdial_pane_ParamLimits

0x597d,	// (0x00065102) thumbnail_qdial_pane

0x59d9,	// (0x0006515e) list_help_pane

0x59e2,	// (0x00065167) scroll_pane_cp02

0x59eb,	// (0x00065170) help_list_pane_t1_ParamLimits

0x59eb,	// (0x00065170) help_list_pane_t1

0x5a21,	// (0x000651a6) bg_notes_pane_g2

0x5a29,	// (0x000651ae) bg_notes_pane_g3

0x5a31,	// (0x000651b6) notes_bg_pane_g1

0x5a39,	// (0x000651be) notes_bg_pane_g4

0x5a41,	// (0x000651c6) notes_bg_pane_g5

0x5a49,	// (0x000651ce) notes_bg_pane_g6

0x5a51,	// (0x000651d6) notes_bg_pane_g7

0x5a59,	// (0x000651de) notes_bg_pane_g8

0x5a61,	// (0x000651e6) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0006e8e1) notes_bg_pane_g

0x5a69,	// (0x000651ee) list_notes_text_pane_ParamLimits

0x5a69,	// (0x000651ee) list_notes_text_pane

0x5a91,	// (0x00065216) list_notes_text_pane_g1

0x4567,	// (0x00063cec) list_notes_text_pane_t1

0x5aab,	// (0x00065230) listscroll_cale_week_pane

0x5ad9,	// (0x0006525e) bg_cale_heading_pane

0x5af9,	// (0x0006527e) bg_cale_pane_cp01

0x5b16,	// (0x0006529b) cale_week_corner_pane

0x5b30,	// (0x000652b5) cale_week_day_heading_pane

0x5b50,	// (0x000652d5) cale_week_scroll_pane_g1

0x5b6b,	// (0x000652f0) cale_week_scroll_pane_g2

0x5b7e,	// (0x00065303) cale_week_scroll_pane_g3

0x5b91,	// (0x00065316) cale_week_scroll_pane_g4

0x5ba4,	// (0x00065329) cale_week_scroll_pane_g5

0x5bb7,	// (0x0006533c) cale_week_scroll_pane_g6

0x5bca,	// (0x0006534f) cale_week_scroll_pane_g7

0x5bdf,	// (0x00065364) cale_week_scroll_pane_g8

0x5bf4,	// (0x00065379) cale_week_scroll_pane_g9

0x5c07,	// (0x0006538c) cale_week_scroll_pane_g10

0x5c1a,	// (0x0006539f) cale_week_scroll_pane_g11

0x5c2d,	// (0x000653b2) cale_week_scroll_pane_g12

0x5c44,	// (0x000653c9) cale_week_scroll_pane_g13

0x5c5f,	// (0x000653e4) cale_week_scroll_pane_g14

0x5c7a,	// (0x000653ff) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0006e8f0) cale_week_scroll_pane_g

0x5caa,	// (0x0006542f) cale_week_time_pane

0x5cbf,	// (0x00065444) grid_cale_week_pane

0x5cf0,	// (0x00065475) scroll_pane_cp08

0x5d0d,	// (0x00065492) cell_cale_week_pane_ParamLimits

0x5d0d,	// (0x00065492) cell_cale_week_pane

0x5d6f,	// (0x000654f4) cale_week_day_heading_pane_t1

0x5d8a,	// (0x0006550f) cale_week_day_heading_pane_t2

0x5da5,	// (0x0006552a) cale_week_day_heading_pane_t3

0x5dc0,	// (0x00065545) cale_week_day_heading_pane_t4

0x5ddb,	// (0x00065560) cale_week_day_heading_pane_t5

0x5df6,	// (0x0006557b) cale_week_day_heading_pane_t6

0x5e11,	// (0x00065596) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0006e911) cale_week_day_heading_pane_t

0x5e2c,	// (0x000655b1) bg_cale_side_pane

0x5e3a,	// (0x000655bf) cale_week_time_pane_t1

0x5e54,	// (0x000655d9) cale_week_time_pane_t2

0x5e6e,	// (0x000655f3) cale_week_time_pane_t3

0x5e88,	// (0x0006560d) cale_week_time_pane_t4

0x5ea2,	// (0x00065627) cale_week_time_pane_t5

0x5ebc,	// (0x00065641) cale_week_time_pane_t6

0x5eda,	// (0x0006565f) cale_week_time_pane_t7

0x5efc,	// (0x00065681) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0006e920) cale_week_time_pane_t

0x5f20,	// (0x000656a5) cell_cale_week_pane_g2

0x5f44,	// (0x000656c9) cell_cale_week_pane_g3_ParamLimits

0x5f44,	// (0x000656c9) cell_cale_week_pane_g3

0x5f5c,	// (0x000656e1) grid_highlight_pane_cp07

0x5f64,	// (0x000656e9) listscroll_gms_pane

0x5f6e,	// (0x000656f3) grid_gms_pane

0x5f77,	// (0x000656fc) listscroll_gms_pane_g1

0x5f7f,	// (0x00065704) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0006e931) listscroll_gms_pane_g

0x5f87,	// (0x0006570c) scroll_pane_cp010

0x5f92,	// (0x00065717) cell_gms_pane_ParamLimits

0x5f92,	// (0x00065717) cell_gms_pane

0x5fa5,	// (0x0006572a) cell_gms_pane_g1

0x5fad,	// (0x00065732) cell_gms_pane_g2

0x5a91,	// (0x00065216) cell_gms_pane_g3

0x5fb5,	// (0x0006573a) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0006e936) cell_gms_pane_g

0x5fbe,	// (0x00065743) grid_highlight_pane_cp09

0x915e,	// (0x000688e3) phob_pre_status_pane_g1

0x9166,	// (0x000688eb) phob_pre_status_pane_g2

0x916e,	// (0x000688f3) phob_pre_status_pane_g3

0x9176,	// (0x000688fb) phob_pre_status_pane_g4

0x0004,

0xf57a,	// (0x0006ecff) phob_pre_status_pane_g

0x9186,	// (0x0006890b) phob_pre_status_pane_t1

0x9196,	// (0x0006891b) phob_pre_status_pane_t2

0x91a6,	// (0x0006892b) phob_pre_status_pane_t3

0x0002,

0xf585,	// (0x0006ed0a) phob_pre_status_pane_t

0x5fce,	// (0x00065753) bg_list_pane_cp05

0x5fd6,	// (0x0006575b) grid_vorec_pane

0x5fe0,	// (0x00065765) vorec_t1

0x5fee,	// (0x00065773) vorec_t2

0x5ffc,	// (0x00065781) vorec_t3

0x600a,	// (0x0006578f) vorec_t4

0xdbbf,	// (0x0006d344) vorec_t5

0xdbcd,	// (0x0006d352) vorec_t6

0x0004,

0xf1ba,	// (0x0006e93f) vorec_t

0xdbdb,	// (0x0006d360) wait_bar_pane_cp01

0x6026,	// (0x000657ab) cell_vorec_pane_ParamLimits

0x6026,	// (0x000657ab) cell_vorec_pane

0x6039,	// (0x000657be) cell_vorec_pane_g1

0x0870,	// (0x0005fff5) grid_highlight_pane_cp05

0x0b46,	// (0x000602cb) cams_zoom_pane

0x0b46,	// (0x000602cb) image_vga_pane

0x5577,	// (0x00064cfc) main_camera_pane_g1

0x5577,	// (0x00064cfc) main_camera_pane_g2

0x5577,	// (0x00064cfc) main_camera_pane_g3

0x5577,	// (0x00064cfc) main_camera_pane_g4

0x5577,	// (0x00064cfc) main_camera_pane_g5

0x5577,	// (0x00064cfc) main_camera_pane_g6

0x5577,	// (0x00064cfc) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0006e94a) main_camera_pane_g

0x6043,	// (0x000657c8) main_camera_pane_t1

0x6043,	// (0x000657c8) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0006e95b) main_camera_pane_t

0x6057,	// (0x000657dc) cams_zoom_pane_cp_ParamLimits

0x6057,	// (0x000657dc) cams_zoom_pane_cp

0x6085,	// (0x0006580a) image_cif_pane_ParamLimits

0x6085,	// (0x0006580a) image_cif_pane

0x03ce,	// (0x0005fb53) image_subqcif_pane

0x6093,	// (0x00065818) main_video_pane_g1_ParamLimits

0x6093,	// (0x00065818) main_video_pane_g1

0x60bb,	// (0x00065840) main_video_pane_g2_ParamLimits

0x60bb,	// (0x00065840) main_video_pane_g2

0x60ee,	// (0x00065873) main_video_pane_g3_ParamLimits

0x60ee,	// (0x00065873) main_video_pane_g3

0x60ee,	// (0x00065873) main_video_pane_g4_ParamLimits

0x60ee,	// (0x00065873) main_video_pane_g4

0x611c,	// (0x000658a1) main_video_pane_g5_ParamLimits

0x611c,	// (0x000658a1) main_video_pane_g5

0x612a,	// (0x000658af) main_video_pane_g6_ParamLimits

0x612a,	// (0x000658af) main_video_pane_g6

0x0006,

0xf1db,	// (0x0006e960) main_video_pane_g_ParamLimits

0xf1db,	// (0x0006e960) main_video_pane_g

0x6152,	// (0x000658d7) main_video_pane_t1_ParamLimits

0x6152,	// (0x000658d7) main_video_pane_t1

0x618c,	// (0x00065911) cams_zoom_pane_g1

0x618c,	// (0x00065911) cams_zoom_pane_g2

0x618c,	// (0x00065911) cams_zoom_pane_g3

0x618c,	// (0x00065911) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0006e96f) cams_zoom_pane_g

0x61a2,	// (0x00065927) grid_cams_pane

0x61b0,	// (0x00065935) linegrid_cams_pane

0x61be,	// (0x00065943) cell_cams_pane_ParamLimits

0x61be,	// (0x00065943) cell_cams_pane

0x61d1,	// (0x00065956) cams_burst_image_pane

0x61d9,	// (0x0006595e) cell_cams_pane_g1

0x0870,	// (0x0005fff5) grid_highlight_pane_cp03

0x0ae3,	// (0x00060268) mp_bg_pane_g1

0x03ce,	// (0x0005fb53) bg_list_pane_cp03

0x03ce,	// (0x0005fb53) bg_mp_pane

0x03ce,	// (0x0005fb53) grid_mp_pane

0x618c,	// (0x00065911) media_player_g1

0x79c9,	// (0x0006714e) media_player_t1

0x79c9,	// (0x0006714e) media_player_t2

0x79c9,	// (0x0006714e) media_player_t3

0x79c9,	// (0x0006714e) media_player_t4

0x79c9,	// (0x0006714e) media_player_t5

0x79c9,	// (0x0006714e) media_player_t6

0x79c9,	// (0x0006714e) media_player_t7

0x0006,

0xf564,	// (0x0006ece9) media_player_t

0x03ce,	// (0x0005fb53) wait_bar_pane_cp02

0xf549,	// (0x0006ecce) main_usb_pane_t

0x7d17,	// (0x0006749c) cell_mp_pane

0x0ae3,	// (0x00060268) cell_mp_pane_g1

0x0870,	// (0x0005fff5) grid_highlight_pane_cp06

0x61f5,	// (0x0006597a) grid_skin_colour_pane

0x61fd,	// (0x00065982) list_highlight_pane_cp03

0x6205,	// (0x0006598a) skin_g1

0x620f,	// (0x00065994) skin_t1

0x621e,	// (0x000659a3) skin_t2

0x0001,

0xf218,	// (0x0006e99d) skin_t

0x622c,	// (0x000659b1) cell_skin_colour_pane_ParamLimits

0x622c,	// (0x000659b1) cell_skin_colour_pane

0x6248,	// (0x000659cd) cell_skin_colour_pane_g1

0x62c2,	// (0x00065a47) call_video_g1_ParamLimits

0x62c2,	// (0x00065a47) call_video_g1

0x62d2,	// (0x00065a57) call_video_g2_ParamLimits

0x62d2,	// (0x00065a57) call_video_g2

0x0001,

0xf21d,	// (0x0006e9a2) call_video_g_ParamLimits

0xf21d,	// (0x0006e9a2) call_video_g

0x632c,	// (0x00065ab1) call_video_uplink_pane_cp1_ParamLimits

0x632c,	// (0x00065ab1) call_video_uplink_pane_cp1

0x6398,	// (0x00065b1d) call_video_uplink_pane_cp2

0x6400,	// (0x00065b85) video_down_crop_pane_ParamLimits

0x6400,	// (0x00065b85) video_down_crop_pane

0x64fe,	// (0x00065c83) video_down_pane_ParamLimits

0x64fe,	// (0x00065c83) video_down_pane

0x65fe,	// (0x00065d83) video_down_subqcif_pane_ParamLimits

0x65fe,	// (0x00065d83) video_down_subqcif_pane

0x6616,	// (0x00065d9b) video_down_subqcif_pane_cp_ParamLimits

0x6616,	// (0x00065d9b) video_down_subqcif_pane_cp

0x665c,	// (0x00065de1) im_reading_pane_ParamLimits

0x665c,	// (0x00065de1) im_reading_pane

0x666e,	// (0x00065df3) im_writing_pane_ParamLimits

0x666e,	// (0x00065df3) im_writing_pane

0x6694,	// (0x00065e19) im_reading_pane_t1

0x66e8,	// (0x00065e6d) list_im_pane

0x66f9,	// (0x00065e7e) scroll_pane_cp07

0x6712,	// (0x00065e97) im_writing_pane_t1_ParamLimits

0x6712,	// (0x00065e97) im_writing_pane_t1

0x6727,	// (0x00065eac) im_writing_pane_t2_ParamLimits

0x6727,	// (0x00065eac) im_writing_pane_t2

0x0001,

0xf227,	// (0x0006e9ac) im_writing_pane_t_ParamLimits

0xf227,	// (0x0006e9ac) im_writing_pane_t

0x0870,	// (0x0005fff5) input_focus_pane_cp04

0x0870,	// (0x0005fff5) input_focus_pane_cp05

0x6744,	// (0x00065ec9) list_im_single_pane_ParamLimits

0x6744,	// (0x00065ec9) list_im_single_pane

0x6768,	// (0x00065eed) list_single_im_pane_t1

0x5fce,	// (0x00065753) blid_accuracy_pane

0x5fce,	// (0x00065753) blid_compass_pane

0xea3a,	// (0x0006e1bf) main_location_t1

0xea3a,	// (0x0006e1bf) main_location_t2

0xea3a,	// (0x0006e1bf) main_location_t3

0x0002,

0xf573,	// (0x0006ecf8) main_location_t

0x0870,	// (0x0005fff5) aid_levels_location

0x0ae3,	// (0x00060268) blid_accuracy_pane_g1

0x0ae3,	// (0x00060268) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x0006ea00) blid_accuracy_pane_g

0x67a2,	// (0x00065f27) wml_content_pane

0x67e0,	// (0x00065f65) wml_button_pane_ParamLimits

0x67e0,	// (0x00065f65) wml_button_pane

0x67f4,	// (0x00065f79) wml_list_single_large_pane_ParamLimits

0x67f4,	// (0x00065f79) wml_list_single_large_pane

0x681e,	// (0x00065fa3) wml_list_single_medium_pane_ParamLimits

0x681e,	// (0x00065fa3) wml_list_single_medium_pane

0x684f,	// (0x00065fd4) wml_list_single_small_pane_ParamLimits

0x684f,	// (0x00065fd4) wml_list_single_small_pane

0x6889,	// (0x0006600e) wml_selection_box_pane_ParamLimits

0x6889,	// (0x0006600e) wml_selection_box_pane

0x689c,	// (0x00066021) wml_list_single_pane_t1

0x68ab,	// (0x00066030) wml_list_single_medium_pane_t1

0x68ba,	// (0x0006603f) wml_list_single_large_pane_t1

0x68c9,	// (0x0006604e) input_focus_pane_cp02_ParamLimits

0x68c9,	// (0x0006604e) input_focus_pane_cp02

0x68dc,	// (0x00066061) wml_selection_box_pane_g1

0x68e5,	// (0x0006606a) wml_selection_box_pane_t1_ParamLimits

0x68e5,	// (0x0006606a) wml_selection_box_pane_t1

0x0acb,	// (0x00060250) bg_wml_button_pane_ParamLimits

0x0acb,	// (0x00060250) bg_wml_button_pane

0x68fd,	// (0x00066082) wml_button_pane_g1

0x6905,	// (0x0006608a) wml_button_pane_t1

0x68fd,	// (0x00066082) wml_button_bg_pane_g1

0x6915,	// (0x0006609a) wml_button_bg_pane_g2

0x691d,	// (0x000660a2) wml_button_bg_pane_g3

0x6925,	// (0x000660aa) wml_button_bg_pane_g4

0x692d,	// (0x000660b2) wml_button_bg_pane_g5

0x6935,	// (0x000660ba) wml_button_bg_pane_g6

0x693d,	// (0x000660c2) wml_button_bg_pane_g7

0x6945,	// (0x000660ca) wml_button_bg_pane_g8

0x694d,	// (0x000660d2) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0006e9b1) wml_button_bg_pane_g

0x6955,	// (0x000660da) bg_list_pane_cp02

0x695f,	// (0x000660e4) mce_header_pane_ParamLimits

0x695f,	// (0x000660e4) mce_header_pane

0x6975,	// (0x000660fa) mce_icon_pane

0x6975,	// (0x000660fa) mce_image_pane

0x697e,	// (0x00066103) mce_text_pane_ParamLimits

0x697e,	// (0x00066103) mce_text_pane

0x6991,	// (0x00066116) scroll_pane_cp03

0x67d8,	// (0x00065f5d) scroll_pane_cp04

0x699b,	// (0x00066120) scroll_pane_cp05_ParamLimits

0x699b,	// (0x00066120) scroll_pane_cp05

0x69a7,	// (0x0006612c) mce_header_field_pane_ParamLimits

0x69a7,	// (0x0006612c) mce_header_field_pane

0x69c7,	// (0x0006614c) mce_header_field_pane_2_ParamLimits

0x69c7,	// (0x0006614c) mce_header_field_pane_2

0x69dd,	// (0x00066162) mce_header_field_pane_3

0x69e5,	// (0x0006616a) list_single_mce_message_pane_ParamLimits

0x69e5,	// (0x0006616a) list_single_mce_message_pane

0x6a10,	// (0x00066195) list_single_mce_smart_pane_ParamLimits

0x6a10,	// (0x00066195) list_single_mce_smart_pane

0x6a46,	// (0x000661cb) input_focus_pane_cp03

0x6a4f,	// (0x000661d4) list_header_data_pane

0x6a57,	// (0x000661dc) mce_header_field_pane_t1

0x6a65,	// (0x000661ea) list_single_mce_header_pane_ParamLimits

0x6a65,	// (0x000661ea) list_single_mce_header_pane

0x6a91,	// (0x00066216) list_single_mce_header_pane_t1

0x6aa0,	// (0x00066225) list_single_mce_message_pane_g1

0x6aa8,	// (0x0006622d) list_single_mce_message_pane_t1

0x6adc,	// (0x00066261) bg_cale_heading_pane_cp01_ParamLimits

0x6adc,	// (0x00066261) bg_cale_heading_pane_cp01

0x6b2a,	// (0x000662af) bg_cale_pane_cp02_ParamLimits

0x6b2a,	// (0x000662af) bg_cale_pane_cp02

0x6b57,	// (0x000662dc) cale_month_corner_pane

0x6b76,	// (0x000662fb) cale_month_day_heading_pane_ParamLimits

0x6b76,	// (0x000662fb) cale_month_day_heading_pane

0x6bdc,	// (0x00066361) cale_month_pane_g1_ParamLimits

0x6bdc,	// (0x00066361) cale_month_pane_g1

0x6c1f,	// (0x000663a4) cale_month_pane_g2_ParamLimits

0x6c1f,	// (0x000663a4) cale_month_pane_g2

0x6c57,	// (0x000663dc) cale_month_pane_g3_ParamLimits

0x6c57,	// (0x000663dc) cale_month_pane_g3

0x6ca3,	// (0x00066428) cale_month_pane_g4_ParamLimits

0x6ca3,	// (0x00066428) cale_month_pane_g4

0x6cef,	// (0x00066474) cale_month_pane_g5_ParamLimits

0x6cef,	// (0x00066474) cale_month_pane_g5

0x6d3b,	// (0x000664c0) cale_month_pane_g6_ParamLimits

0x6d3b,	// (0x000664c0) cale_month_pane_g6

0x6d87,	// (0x0006650c) cale_month_pane_g7_ParamLimits

0x6d87,	// (0x0006650c) cale_month_pane_g7

0x6deb,	// (0x00066570) cale_month_pane_g8_ParamLimits

0x6deb,	// (0x00066570) cale_month_pane_g8

0x6e4f,	// (0x000665d4) cale_month_pane_g9_ParamLimits

0x6e4f,	// (0x000665d4) cale_month_pane_g9

0x6ead,	// (0x00066632) cale_month_pane_g10_ParamLimits

0x6ead,	// (0x00066632) cale_month_pane_g10

0x6f09,	// (0x0006668e) cale_month_pane_g11_ParamLimits

0x6f09,	// (0x0006668e) cale_month_pane_g11

0x6f5d,	// (0x000666e2) cale_month_pane_g12_ParamLimits

0x6f5d,	// (0x000666e2) cale_month_pane_g12

0x6fb3,	// (0x00066738) cale_month_pane_g13_ParamLimits

0x6fb3,	// (0x00066738) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0006e9c4) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0006e9c4) cale_month_pane_g

0x701b,	// (0x000667a0) cale_month_week_pane

0x703f,	// (0x000667c4) grid_cale_month_pane_ParamLimits

0x703f,	// (0x000667c4) grid_cale_month_pane

0x7098,	// (0x0006681d) cale_month_day_heading_pane_t1

0x711e,	// (0x000668a3) cale_month_day_heading_pane_t2

0x7197,	// (0x0006691c) cale_month_day_heading_pane_t3

0x7210,	// (0x00066995) cale_month_day_heading_pane_t4

0x7289,	// (0x00066a0e) cale_month_day_heading_pane_t5

0x7302,	// (0x00066a87) cale_month_day_heading_pane_t6

0x737b,	// (0x00066b00) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0006e9df) cale_month_day_heading_pane_t

0x5e2c,	// (0x000655b1) bg_cale_side_pane_cp01

0x740c,	// (0x00066b91) cale_month_week_pane_t1

0x7425,	// (0x00066baa) cale_month_week_pane_t2

0x743e,	// (0x00066bc3) cale_month_week_pane_t3

0x7457,	// (0x00066bdc) cale_month_week_pane_t4

0x7470,	// (0x00066bf5) cale_month_week_pane_t5

0x7491,	// (0x00066c16) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0006e9ee) cale_month_week_pane_t

0x74b2,	// (0x00066c37) cell_cale_month_pane_ParamLimits

0x74b2,	// (0x00066c37) cell_cale_month_pane

0x75d4,	// (0x00066d59) cell_cale_month_pane_g1

0x75e0,	// (0x00066d65) cell_cale_month_pane_t1_ParamLimits

0x75e0,	// (0x00066d65) cell_cale_month_pane_t1

0x5f5c,	// (0x000656e1) grid_highlight_pane_cp08

0x0ae3,	// (0x00060268) main_smil_g1

0x760c,	// (0x00066d91) smil_status_pane

0x7617,	// (0x00066d9c) smil_text_pane

0xe952,	// (0x0006e0d7) bg_popup_call3_rect_pane_g8

0xe95a,	// (0x0006e0df) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x0006ec8c) bg_popup_call3_rect_pane_g

0xeb11,	// (0x0006e296) smil_status_volume_pane_g1

0x7629,	// (0x00066dae) smil_status_pane_t1

0x9509,	// (0x00068c8e) volume_smil_pane

0x7640,	// (0x00066dc5) list_smil_text_pane

0x764a,	// (0x00066dcf) scroll_pane_cp011

0x7655,	// (0x00066dda) smil_text_list_pane_t1_ParamLimits

0x7655,	// (0x00066dda) smil_text_list_pane_t1

0x76cd,	// (0x00066e52) aid_volume_smil_ParamLimits

0x76cd,	// (0x00066e52) aid_volume_smil

0x0ae3,	// (0x00060268) smil_volume_pane_g1

0x0ae3,	// (0x00060268) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x0006ea00) smil_volume_pane_g

0x5aab,	// (0x00065230) listscroll_cale_day_pane

0x76ef,	// (0x00066e74) bg_cale_pane

0x7707,	// (0x00066e8c) list_cale_pane

0x772a,	// (0x00066eaf) scroll_pane_cp09

0x773b,	// (0x00066ec0) cale_bg_pane_g1

0x7743,	// (0x00066ec8) cale_bg_pane_g2

0x774b,	// (0x00066ed0) cale_bg_pane_g3

0x7753,	// (0x00066ed8) cale_bg_pane_g4

0x775b,	// (0x00066ee0) cale_bg_pane_g5

0x7763,	// (0x00066ee8) cale_bg_pane_g6

0x776b,	// (0x00066ef0) cale_bg_pane_g7

0x7773,	// (0x00066ef8) cale_bg_pane_g8

0x777b,	// (0x00066f00) cale_bg_pane_g9

0x0008,

0xf280,	// (0x0006ea05) cale_bg_pane_g

0x778b,	// (0x00066f10) list_cale_time_pane_ParamLimits

0x778b,	// (0x00066f10) list_cale_time_pane

0x77ad,	// (0x00066f32) list_cale_time_pane_g1_ParamLimits

0x77ad,	// (0x00066f32) list_cale_time_pane_g1

0x77b9,	// (0x00066f3e) list_cale_time_pane_g2_ParamLimits

0x77b9,	// (0x00066f3e) list_cale_time_pane_g2

0x77c6,	// (0x00066f4b) list_cale_time_pane_g3_ParamLimits

0x77c6,	// (0x00066f4b) list_cale_time_pane_g3

0x77d4,	// (0x00066f59) list_cale_time_pane_g4_ParamLimits

0x77d4,	// (0x00066f59) list_cale_time_pane_g4

0x77e2,	// (0x00066f67) list_cale_time_pane_g5_ParamLimits

0x77e2,	// (0x00066f67) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x0006ea18) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x0006ea18) list_cale_time_pane_g

0x77fd,	// (0x00066f82) list_cale_time_pane_t1_ParamLimits

0x77fd,	// (0x00066f82) list_cale_time_pane_t1

0x7825,	// (0x00066faa) list_cale_time_pane_t2_ParamLimits

0x7825,	// (0x00066faa) list_cale_time_pane_t2

0x7f12,	// (0x00067697) aid_blid_cardinal_pane

0x7f60,	// (0x000676e5) compass_pane_t4

0x784d,	// (0x00066fd2) list_cale_time_pane_t4_ParamLimits

0x784d,	// (0x00066fd2) list_cale_time_pane_t4

0x7f6e,	// (0x000676f3) compass_pane_t5

0x7f7e,	// (0x00067703) compass_pane_t6

0x7f8c,	// (0x00067711) compass_pane_t7

0x8024,	// (0x000677a9) navi_pane_cc_t1

0x823f,	// (0x000679c4) aid_phob_thumbnail_center_pane

0x8678,	// (0x00067dfd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x0006ea25) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x0006ea25) list_cale_time_pane_t

0x04c7,	// (0x0005fc4c) bg_popup_window_pane_cp02_ParamLimits

0x04c7,	// (0x0005fc4c) bg_popup_window_pane_cp02

0x7875,	// (0x00066ffa) heading_pane_cp01_ParamLimits

0x7875,	// (0x00066ffa) heading_pane_cp01

0x7881,	// (0x00067006) loc_req_pane_ParamLimits

0x7881,	// (0x00067006) loc_req_pane

0x7891,	// (0x00067016) loc_type_pane_ParamLimits

0x7891,	// (0x00067016) loc_type_pane

0x78a3,	// (0x00067028) loc_type_pane_t1_ParamLimits

0x78a3,	// (0x00067028) loc_type_pane_t1

0x78b5,	// (0x0006703a) loc_type_pane_t2_ParamLimits

0x78b5,	// (0x0006703a) loc_type_pane_t2

0x78c7,	// (0x0006704c) loc_type_pane_t3_ParamLimits

0x78c7,	// (0x0006704c) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0006ea2c) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0006ea2c) loc_type_pane_t

0x78d9,	// (0x0006705e) list_loc_req_pane

0x78e3,	// (0x00067068) scroll_pane_cp012

0x78ee,	// (0x00067073) list_single_loc_request_popup_menu_pane_ParamLimits

0x78ee,	// (0x00067073) list_single_loc_request_popup_menu_pane

0x7900,	// (0x00067085) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x7900,	// (0x00067085) list_single_loc_request_popup_menu_pane_g1

0x790c,	// (0x00067091) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x790c,	// (0x00067091) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x0006ea33) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x0006ea33) list_single_loc_request_popup_menu_pane_g

0x7918,	// (0x0006709d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x7918,	// (0x0006709d) list_single_loc_request_popup_menu_pane_t1

0x792e,	// (0x000670b3) bg_popup_window_pane_cp03_ParamLimits

0x792e,	// (0x000670b3) bg_popup_window_pane_cp03

0x793c,	// (0x000670c1) heading_loc_req_pane_ParamLimits

0x793c,	// (0x000670c1) heading_loc_req_pane

0x7948,	// (0x000670cd) popup_dyc_status_message_window_g1_ParamLimits

0x7948,	// (0x000670cd) popup_dyc_status_message_window_g1

0x7954,	// (0x000670d9) popup_dyc_status_message_window_t1_ParamLimits

0x7954,	// (0x000670d9) popup_dyc_status_message_window_t1

0x7966,	// (0x000670eb) popup_dyc_status_message_window_t2_ParamLimits

0x7966,	// (0x000670eb) popup_dyc_status_message_window_t2

0x7978,	// (0x000670fd) popup_dyc_status_message_window_t3_ParamLimits

0x7978,	// (0x000670fd) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x0006ea38) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x0006ea38) popup_dyc_status_message_window_t

0x0870,	// (0x0005fff5) bg_heading_pane_cp01

0x798a,	// (0x0006710f) heading_loc_req_pane_g1

0x7992,	// (0x00067117) heading_loc_req_pane_g2

0x799a,	// (0x0006711f) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0006ea3f) heading_loc_req_pane_g

0x79a2,	// (0x00067127) heading_loc_req_pane_t1

0x79d9,	// (0x0006715e) bg_popup_sub_pane_cp01_ParamLimits

0x79d9,	// (0x0006715e) bg_popup_sub_pane_cp01

0x79e7,	// (0x0006716c) popup_cale_events_window_g1_ParamLimits

0x79e7,	// (0x0006716c) popup_cale_events_window_g1

0x7a07,	// (0x0006718c) popup_cale_events_window_g2_ParamLimits

0x7a07,	// (0x0006718c) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x0006ea61) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x0006ea61) popup_cale_events_window_g

0x7a27,	// (0x000671ac) popup_cale_events_window_t1_ParamLimits

0x7a27,	// (0x000671ac) popup_cale_events_window_t1

0x7a39,	// (0x000671be) popup_cale_events_window_t2_ParamLimits

0x7a39,	// (0x000671be) popup_cale_events_window_t2

0x7a77,	// (0x000671fc) popup_cale_events_window_t3_ParamLimits

0x7a77,	// (0x000671fc) popup_cale_events_window_t3

0x7ab1,	// (0x00067236) popup_cale_events_window_t4_ParamLimits

0x7ab1,	// (0x00067236) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x0006ea66) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x0006ea66) popup_cale_events_window_t

0x7ae7,	// (0x0006726c) call_type_pane

0x7af3,	// (0x00067278) popup_call_status_window_g1

0x7b01,	// (0x00067286) popup_call_status_window_g2

0x7b0d,	// (0x00067292) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x0006ea6f) popup_call_status_window_g

0x7b19,	// (0x0006729e) call_type_pane_g1

0x7b22,	// (0x000672a7) call_type_pane_g2

0x0001,

0xf2f1,	// (0x0006ea76) call_type_pane_g

0x0870,	// (0x0005fff5) bg_popup_sub_pane_cp02

0x7b2b,	// (0x000672b0) listscroll_popup_wml_pane

0x7b33,	// (0x000672b8) list_wml_pane

0x7b3d,	// (0x000672c2) scroll_pane_cp013

0x7b48,	// (0x000672cd) list_single_graphic_popup_wml_pane_ParamLimits

0x7b48,	// (0x000672cd) list_single_graphic_popup_wml_pane

0x0ae3,	// (0x00060268) list_single_graphic_popup_wml_pane_g1

0x7b5c,	// (0x000672e1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x0006ea7b) list_single_graphic_popup_wml_pane_g

0x7b64,	// (0x000672e9) list_single_graphic_popup_wml_pane_t1

0x7b7a,	// (0x000672ff) aid_call_pane

0x0ac3,	// (0x00060248) popup_clock_analogue_window_g1

0x0ac3,	// (0x00060248) popup_clock_analogue_window_g2

0x7b82,	// (0x00067307) popup_clock_analogue_window_g3

0x7b82,	// (0x00067307) popup_clock_analogue_window_g4

0x0ae3,	// (0x00060268) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x0006ea80) popup_clock_analogue_window_g

0x7b8a,	// (0x0006730f) popup_clock_analogue_window_t1

0x7b98,	// (0x0006731d) clock_digital_number_pane_ParamLimits

0x7b98,	// (0x0006731d) clock_digital_number_pane

0x7ba4,	// (0x00067329) clock_digital_number_pane_cp02_ParamLimits

0x7ba4,	// (0x00067329) clock_digital_number_pane_cp02

0x7bb0,	// (0x00067335) clock_digital_number_pane_cp03_ParamLimits

0x7bb0,	// (0x00067335) clock_digital_number_pane_cp03

0x7bbc,	// (0x00067341) clock_digital_number_pane_cp04_ParamLimits

0x7bbc,	// (0x00067341) clock_digital_number_pane_cp04

0x7bcc,	// (0x00067351) clock_digital_separator_pane_ParamLimits

0x7bcc,	// (0x00067351) clock_digital_separator_pane

0x7bd8,	// (0x0006735d) popup_clock_digital_window_t1

0x0ae3,	// (0x00060268) clock_digital_number_pane_g1

0x0ae3,	// (0x00060268) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x0006ea00) clock_digital_number_pane_g

0x0ae3,	// (0x00060268) clock_digital_separator_pane_g1

0x0ae3,	// (0x00060268) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x0006ea00) clock_digital_separator_pane_g

0x0870,	// (0x0005fff5) bg_popup_window_pane_cp04

0x7bf5,	// (0x0006737a) heading_pane_cp03

0x5fce,	// (0x00065753) listscroll_popup_gms_pane

0x0870,	// (0x0005fff5) grid_large_graphic_popup_pane

0x7bfe,	// (0x00067383) listscroll_popup_gms_pane_g1

0x7c07,	// (0x0006738c) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x0006ea8b) listscroll_popup_gms_pane_g

0x7c10,	// (0x00067395) scroll_pane_cp014

0x0b46,	// (0x000602cb) cell_large_graphic_popup_pane_ParamLimits

0x0b46,	// (0x000602cb) cell_large_graphic_popup_pane

0x5569,	// (0x00064cee) cell_large_graphic_popup_pane_g1_ParamLimits

0x5569,	// (0x00064cee) cell_large_graphic_popup_pane_g1

0x7c19,	// (0x0006739e) cell_large_graphic_popup_pane_g2_ParamLimits

0x7c19,	// (0x0006739e) cell_large_graphic_popup_pane_g2

0x7c27,	// (0x000673ac) cell_large_graphic_popup_pane_g3_ParamLimits

0x7c27,	// (0x000673ac) cell_large_graphic_popup_pane_g3

0x7c35,	// (0x000673ba) cell_large_graphic_popup_pane_g4_ParamLimits

0x7c35,	// (0x000673ba) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x0006ea90) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x0006ea90) cell_large_graphic_popup_pane_g

0x0870,	// (0x0005fff5) grid_highlight_pane_cp010

0x0ae3,	// (0x00060268) bg_popup_call_pane_g1

0x7c46,	// (0x000673cb) list_single_graphic_popup_conf_pane_ParamLimits

0x7c46,	// (0x000673cb) list_single_graphic_popup_conf_pane

0x7c59,	// (0x000673de) list_highlight_pane_cp01

0x7c62,	// (0x000673e7) list_single_graphic_popup_conf_pane_g1

0x7c6a,	// (0x000673ef) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x0006ea99) list_single_graphic_popup_conf_pane_g

0x7c72,	// (0x000673f7) list_single_graphic_popup_conf_pane_t1

0x7c80,	// (0x00067405) linegrid_cams_pane_g1

0x7c89,	// (0x0006740e) linegrid_cams_pane_g2

0x5a91,	// (0x00065216) linegrid_cams_pane_g3

0x7c92,	// (0x00067417) linegrid_cams_pane_g4

0x7c9b,	// (0x00067420) linegrid_cams_pane_g5

0x7ca4,	// (0x00067429) linegrid_cams_pane_g6

0x5fb5,	// (0x0006573a) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x0006ea9e) linegrid_cams_pane_g

0x7cad,	// (0x00067432) popup_clock_analogue_window

0x7cad,	// (0x00067432) popup_clock_digital_window

0x0870,	// (0x0005fff5) popup_phob_thumbnail_window

0x0ae3,	// (0x00060268) call_video_uplink_pane_g1

0x7cb6,	// (0x0006743b) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x0006eaad) call_video_uplink_pane_g

0x7cbe,	// (0x00067443) video_uplink_pane

0x7cc6,	// (0x0006744b) mce_image_pane_g1

0x7cd0,	// (0x00067455) mce_image_pane_g2

0x7cda,	// (0x0006745f) mce_image_pane_g3

0x7ce2,	// (0x00067467) mce_image_pane_g4

0x7cea,	// (0x0006746f) mce_image_pane_g5

0x0004,

0xf32d,	// (0x0006eab2) mce_image_pane_g

0x7cf2,	// (0x00067477) control_top_pane_stacon_cp01_ParamLimits

0x7cf2,	// (0x00067477) control_top_pane_stacon_cp01

0x7d06,	// (0x0006748b) uni_indicator_pane_stacon_cp01_ParamLimits

0x7d06,	// (0x0006748b) uni_indicator_pane_stacon_cp01

0x7d17,	// (0x0006749c) bg_popup_sub_pane_cp03

0x7d21,	// (0x000674a6) chi_dic_find_pane

0x7d29,	// (0x000674ae) listscroll_chi_dic_pane

0x7d32,	// (0x000674b7) main_pane_chidic_g1

0x7d45,	// (0x000674ca) chi_dic_find_pane_t1

0x7d53,	// (0x000674d8) find_chidic_pane

0x7d5c,	// (0x000674e1) chi_dic_list_pane_ParamLimits

0x7d5c,	// (0x000674e1) chi_dic_list_pane

0x7d6d,	// (0x000674f2) scroll_pane_cp020

0x7d75,	// (0x000674fa) find_chidic_pane_t1

0x0870,	// (0x0005fff5) input_focus_pane_cp06

0x7d84,	// (0x00067509) list_chi_dic_pane_ParamLimits

0x7d84,	// (0x00067509) list_chi_dic_pane

0x7d9e,	// (0x00067523) list_chi_dic_pane_t1_ParamLimits

0x7d9e,	// (0x00067523) list_chi_dic_pane_t1

0x0870,	// (0x0005fff5) list_highlight_pane_cp020

0x7db1,	// (0x00067536) bg_cale_heading_pane_g1

0x7db9,	// (0x0006753e) bg_cale_heading_pane_g2

0x7dc1,	// (0x00067546) bg_cale_heading_pane_g3

0x7dc9,	// (0x0006754e) bg_cale_heading_pane_g4

0x7dd3,	// (0x00067558) bg_cale_heading_pane_g5

0x7ddd,	// (0x00067562) bg_cale_heading_pane_g6

0x7de5,	// (0x0006756a) bg_cale_heading_pane_g7

0x7ded,	// (0x00067572) bg_cale_heading_pane_g8

0x7df7,	// (0x0006757c) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x0006eabd) bg_cale_heading_pane_g

0x7db1,	// (0x00067536) bg_cale_side_pane_g1

0x7e01,	// (0x00067586) bg_cale_side_pane_g2

0x7e0b,	// (0x00067590) bg_cale_side_pane_g3

0x7e15,	// (0x0006759a) bg_cale_side_pane_g4

0x7e1f,	// (0x000675a4) bg_cale_side_pane_g5

0x7e29,	// (0x000675ae) bg_cale_side_pane_g6

0x7e33,	// (0x000675b8) bg_cale_side_pane_g7

0x7e3d,	// (0x000675c2) bg_cale_side_pane_g8

0x7e45,	// (0x000675ca) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x0006ead0) bg_cale_side_pane_g

0x7e4d,	// (0x000675d2) popup_call_status_window_ParamLimits

0x7e4d,	// (0x000675d2) popup_call_status_window

0x7e59,	// (0x000675de) stacon_top_pane

0x7e61,	// (0x000675e6) status_pane_ParamLimits

0x7e61,	// (0x000675e6) status_pane

0x7e76,	// (0x000675fb) status_small_pane

0x7e7e,	// (0x00067603) control_pane

0x0870,	// (0x0005fff5) stacon_bottom_pane

0x7e86,	// (0x0006760b) list_single_mce_smart_pane_t1_ParamLimits

0x7e86,	// (0x0006760b) list_single_mce_smart_pane_t1

0x7e99,	// (0x0006761e) list_single_mce_smart_pane_t2_ParamLimits

0x7e99,	// (0x0006761e) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x0006eae3) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x0006eae3) list_single_mce_smart_pane_t

0x7eb8,	// (0x0006763d) compass_pane

0x7ec4,	// (0x00067649) main_location2_pane_t1

0x7ed8,	// (0x0006765d) main_location2_pane_t2

0x7eec,	// (0x00067671) main_location2_pane_t3

0x0003,

0xf363,	// (0x0006eae8) main_location2_pane_t

0x7f36,	// (0x000676bb) compass_pane_g1_ParamLimits

0x7f36,	// (0x000676bb) compass_pane_g1

0x7f42,	// (0x000676c7) compass_pane_t1

0x7f51,	// (0x000676d6) compass_pane_t2

0x0005,

0xf36c,	// (0x0006eaf1) compass_pane_t

0x7f9c,	// (0x00067721) text_secondary_cp61

0x801b,	// (0x000677a0) navi_pane_cams_g5

0x8097,	// (0x0006781c) navi_pane_im_t1

0x80a5,	// (0x0006782a) navi_pane_mp_g1_ParamLimits

0x80a5,	// (0x0006782a) navi_pane_mp_g1

0x80b9,	// (0x0006783e) navi_pane_mp_g2_ParamLimits

0x80b9,	// (0x0006783e) navi_pane_mp_g2

0x80c5,	// (0x0006784a) navi_pane_mp_g3_ParamLimits

0x80c5,	// (0x0006784a) navi_pane_mp_g3

0x0002,

0xf380,	// (0x0006eb05) navi_pane_mp_g_ParamLimits

0xf380,	// (0x0006eb05) navi_pane_mp_g

0x80d1,	// (0x00067856) navi_pane_mp_t1

0x80df,	// (0x00067864) navi_pane_mp_t2

0x0002,

0xf387,	// (0x0006eb0c) navi_pane_mp_t

0x8176,	// (0x000678fb) navi_pane_vt_g1

0x80d1,	// (0x00067856) navi_pane_vt_t1

0x817e,	// (0x00067903) navi_slider_pane

0x5fce,	// (0x00065753) zooming_pane

0x818e,	// (0x00067913) navi_slider_pane_g1

0x8197,	// (0x0006791c) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x0006eb13) navi_slider_pane_g

0x81c4,	// (0x00067949) aid_levels_zoom

0x81cc,	// (0x00067951) zooming_pane_g1

0x81d4,	// (0x00067959) zooming_pane_g2

0x81d4,	// (0x00067959) zooming_pane_g3

0x0002,

0xf39d,	// (0x0006eb22) zooming_pane_g

0x81dc,	// (0x00067961) level_10_zoom

0x81e5,	// (0x0006796a) level_11_zoom

0x81ee,	// (0x00067973) level_1_zoom

0x81f7,	// (0x0006797c) level_2_zoom

0x8200,	// (0x00067985) level_3_zoom

0x8209,	// (0x0006798e) level_4_zoom

0x8212,	// (0x00067997) level_5_zoom

0x821b,	// (0x000679a0) level_6_zoom

0x8224,	// (0x000679a9) level_7_zoom

0x822d,	// (0x000679b2) level_8_zoom

0x8236,	// (0x000679bb) level_9_zoom

0x8247,	// (0x000679cc) popup_phob_thumbnail_window_g1

0x824f,	// (0x000679d4) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x0006eb29) popup_phob_thumbnail_window_g

0x91b6,	// (0x0006893b) level_1_location

0x91be,	// (0x00068943) level_2_location

0x91c6,	// (0x0006894b) level_3_location

0x91d0,	// (0x00068955) level_4_location

0x5fce,	// (0x00065753) level_5_location

0x8257,	// (0x000679dc) mce_icon_pane_g1

0x825f,	// (0x000679e4) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x0006eb2e) mce_icon_pane_g

0x8267,	// (0x000679ec) main_mup_pane_g1_ParamLimits

0x8267,	// (0x000679ec) main_mup_pane_g1

0x5585,	// (0x00064d0a) main_mup_pane_g2_ParamLimits

0x5585,	// (0x00064d0a) main_mup_pane_g2

0x5585,	// (0x00064d0a) main_mup_pane_g3_ParamLimits

0x5585,	// (0x00064d0a) main_mup_pane_g3

0x5585,	// (0x00064d0a) main_mup_pane_g4_ParamLimits

0x5585,	// (0x00064d0a) main_mup_pane_g4

0x5585,	// (0x00064d0a) main_mup_pane_g5_ParamLimits

0x5585,	// (0x00064d0a) main_mup_pane_g5

0x5585,	// (0x00064d0a) main_mup_pane_g6_ParamLimits

0x5585,	// (0x00064d0a) main_mup_pane_g6

0x5585,	// (0x00064d0a) main_mup_pane_g7_ParamLimits

0x5585,	// (0x00064d0a) main_mup_pane_g7

0x5585,	// (0x00064d0a) main_mup_pane_g8_ParamLimits

0x5585,	// (0x00064d0a) main_mup_pane_g8

0x5585,	// (0x00064d0a) main_mup_pane_g9_ParamLimits

0x5585,	// (0x00064d0a) main_mup_pane_g9

0x5585,	// (0x00064d0a) main_mup_pane_g10_ParamLimits

0x5585,	// (0x00064d0a) main_mup_pane_g10

0x5585,	// (0x00064d0a) main_mup_pane_g11_ParamLimits

0x5585,	// (0x00064d0a) main_mup_pane_g11

0x5577,	// (0x00064cfc) main_mup_pane_g12_ParamLimits

0x5577,	// (0x00064cfc) main_mup_pane_g12

0x5585,	// (0x00064d0a) main_mup_pane_g13_ParamLimits

0x5585,	// (0x00064d0a) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x0006eb33) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x0006eb33) main_mup_pane_g

0x5593,	// (0x00064d18) main_mup_pane_t1_ParamLimits

0x5593,	// (0x00064d18) main_mup_pane_t1

0x5593,	// (0x00064d18) main_mup_pane_t2_ParamLimits

0x5593,	// (0x00064d18) main_mup_pane_t2

0x5593,	// (0x00064d18) main_mup_pane_t3_ParamLimits

0x5593,	// (0x00064d18) main_mup_pane_t3

0x6043,	// (0x000657c8) main_mup_pane_t4_ParamLimits

0x6043,	// (0x000657c8) main_mup_pane_t4

0x6043,	// (0x000657c8) main_mup_pane_t5_ParamLimits

0x6043,	// (0x000657c8) main_mup_pane_t5

0x61e1,	// (0x00065966) main_mup_pane_t6_ParamLimits

0x61e1,	// (0x00065966) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x0006eb4e) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x0006eb4e) main_mup_pane_t

0x0aed,	// (0x00060272) mup_progress_pane_ParamLimits

0x0aed,	// (0x00060272) mup_progress_pane

0xde8c,	// (0x0006d611) mup_visualizer_pane_ParamLimits

0xde8c,	// (0x0006d611) mup_visualizer_pane

0xde8c,	// (0x0006d611) mup_volume_pane_ParamLimits

0xde8c,	// (0x0006d611) mup_volume_pane

0x5577,	// (0x00064cfc) mup_visualizer_pane_g1_ParamLimits

0x5577,	// (0x00064cfc) mup_visualizer_pane_g1

0x827a,	// (0x000679ff) mup_visualizer_pane_g2_ParamLimits

0x827a,	// (0x000679ff) mup_visualizer_pane_g2

0x5569,	// (0x00064cee) mup_visualizer_pane_g3_ParamLimits

0x5569,	// (0x00064cee) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x0006eb5b) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x0006eb5b) mup_visualizer_pane_g

0x618c,	// (0x00065911) mup_volume_pane_g1

0x618c,	// (0x00065911) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x0006eb62) mup_volume_pane_g

0x618c,	// (0x00065911) mup_progress_pane_g1

0x618c,	// (0x00065911) mup_progress_pane_g2

0x618c,	// (0x00065911) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x0006eb67) mup_progress_pane_g

0x0870,	// (0x0005fff5) bg_popup_window_pane_cp05

0x8288,	// (0x00067a0d) heading_pane_cp02_ParamLimits

0x8288,	// (0x00067a0d) heading_pane_cp02

0x82a2,	// (0x00067a27) list_popup_blid_pane

0x82aa,	// (0x00067a2f) list_blid_sat_info_pane_ParamLimits

0x82aa,	// (0x00067a2f) list_blid_sat_info_pane

0x82bd,	// (0x00067a42) list_blid_sat_info_pane_g1

0x82c5,	// (0x00067a4a) list_blid_sat_info_pane_t1

0x83bd,	// (0x00067b42) mup_equalizer_pane_ParamLimits

0x83bd,	// (0x00067b42) mup_equalizer_pane

0x83de,	// (0x00067b63) mup_equalizer_pane_cp1_ParamLimits

0x83de,	// (0x00067b63) mup_equalizer_pane_cp1

0x83ff,	// (0x00067b84) mup_equalizer_pane_cp2_ParamLimits

0x83ff,	// (0x00067b84) mup_equalizer_pane_cp2

0x8420,	// (0x00067ba5) mup_equalizer_pane_cp3_ParamLimits

0x8420,	// (0x00067ba5) mup_equalizer_pane_cp3

0x8441,	// (0x00067bc6) mup_equalizer_pane_cp4_ParamLimits

0x8441,	// (0x00067bc6) mup_equalizer_pane_cp4

0x8462,	// (0x00067be7) mup_equalizer_pane_cp5

0x8478,	// (0x00067bfd) mup_equalizer_pane_cp6

0x8490,	// (0x00067c15) mup_equalizer_pane_cp7

0xe9d2,	// (0x0006e157) bg_popup_call_poc_act_pane_g9

0xe9da,	// (0x0006e15f) bg_popup_call_poc_act_pane_g10

0xe9e2,	// (0x0006e167) bg_popup_call_poc_act_pane_g11

0x000a,

0x0acb,	// (0x00060250) mup_scale_pane

0x0ae3,	// (0x00060268) mup_scale_pane_g1

0x84a8,	// (0x00067c2d) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x0006eb83) mup_scale_pane_g

0x84de,	// (0x00067c63) msg_data_pane

0x84e6,	// (0x00067c6b) scroll_pane_cp017

0x4575,	// (0x00063cfa) bg_list_pane_cp04_ParamLimits

0x4575,	// (0x00063cfa) bg_list_pane_cp04

0x84ee,	// (0x00067c73) msg_data_pane_g1

0x84f6,	// (0x00067c7b) msg_data_pane_g2

0x8500,	// (0x00067c85) msg_data_pane_g3

0x8508,	// (0x00067c8d) msg_data_pane_g4

0x8510,	// (0x00067c95) msg_data_pane_g5

0x8518,	// (0x00067c9d) msg_data_pane_g6

0x8520,	// (0x00067ca5) msg_data_pane_g7

0x0006,

0xf40d,	// (0x0006eb92) msg_data_pane_g

0x459b,	// (0x00063d20) msg_text_pane_ParamLimits

0x459b,	// (0x00063d20) msg_text_pane

0x8528,	// (0x00067cad) qrid_highlight_pane_cp011_ParamLimits

0x8528,	// (0x00067cad) qrid_highlight_pane_cp011

0x0870,	// (0x0005fff5) msg_body_pane

0x0870,	// (0x0005fff5) msg_header_pane

0x854b,	// (0x00067cd0) input_focus_pane_cp07

0x45ea,	// (0x00063d6f) msg_header_pane_t1_ParamLimits

0x45ea,	// (0x00063d6f) msg_header_pane_t1

0x4600,	// (0x00063d85) msg_header_pane_t2_ParamLimits

0x4600,	// (0x00063d85) msg_header_pane_t2

0x0001,

0xf421,	// (0x0006eba6) msg_header_pane_t_ParamLimits

0xf421,	// (0x0006eba6) msg_header_pane_t

0x8560,	// (0x00067ce5) msg_body_pane_g1

0x4617,	// (0x00063d9c) msg_body_pane_t1_ParamLimits

0x4617,	// (0x00063d9c) msg_body_pane_t1

0x4648,	// (0x00063dcd) msg_body_pane_t2_ParamLimits

0x4648,	// (0x00063dcd) msg_body_pane_t2

0x465a,	// (0x00063ddf) msg_body_pane_t3_ParamLimits

0x465a,	// (0x00063ddf) msg_body_pane_t3

0x0002,

0xf426,	// (0x0006ebab) msg_body_pane_t_ParamLimits

0xf426,	// (0x0006ebab) msg_body_pane_t

0x85ba,	// (0x00067d3f) main_viewer_pane_g1_ParamLimits

0x85ba,	// (0x00067d3f) main_viewer_pane_g1

0x85c6,	// (0x00067d4b) main_viewer_pane_g2_ParamLimits

0x85c6,	// (0x00067d4b) main_viewer_pane_g2

0x85d2,	// (0x00067d57) main_viewer_pane_g3_ParamLimits

0x85d2,	// (0x00067d57) main_viewer_pane_g3

0x85e3,	// (0x00067d68) main_viewer_pane_g4_ParamLimits

0x85e3,	// (0x00067d68) main_viewer_pane_g4

0x85f4,	// (0x00067d79) main_viewer_pane_g5_ParamLimits

0x85f4,	// (0x00067d79) main_viewer_pane_g5

0x85f4,	// (0x00067d79) main_viewer_pane_g7_ParamLimits

0x85f4,	// (0x00067d79) main_viewer_pane_g7

0x8606,	// (0x00067d8b) main_viewer_pane_g8_ParamLimits

0x8606,	// (0x00067d8b) main_viewer_pane_g8

0x0007,

0xf436,	// (0x0006ebbb) main_viewer_pane_g_ParamLimits

0xf436,	// (0x0006ebbb) main_viewer_pane_g

0x861e,	// (0x00067da3) viewer_content_pane_ParamLimits

0x861e,	// (0x00067da3) viewer_content_pane

0x864c,	// (0x00067dd1) main_postcard_pane_g1_ParamLimits

0x864c,	// (0x00067dd1) main_postcard_pane_g1

0x865a,	// (0x00067ddf) main_postcard_pane_g2_ParamLimits

0x865a,	// (0x00067ddf) main_postcard_pane_g2

0x8668,	// (0x00067ded) main_postcard_pane_g3_ParamLimits

0x8668,	// (0x00067ded) main_postcard_pane_g3

0x0005,

0xf447,	// (0x0006ebcc) main_postcard_pane_g_ParamLimits

0xf447,	// (0x0006ebcc) main_postcard_pane_g

0x8678,	// (0x00067dfd) main_postcard_pane_g4

0xeb24,	// (0x0006e2a9) smil_status_volume_pane_g2

0x86a4,	// (0x00067e29) postcard_pane_ParamLimits

0x86a4,	// (0x00067e29) postcard_pane

0x7af3,	// (0x00067278) postcard_pane_g1_ParamLimits

0x7af3,	// (0x00067278) postcard_pane_g1

0x86d6,	// (0x00067e5b) postcard_pane_g2_ParamLimits

0x86d6,	// (0x00067e5b) postcard_pane_g2

0x86e2,	// (0x00067e67) postcard_pane_g3_ParamLimits

0x86e2,	// (0x00067e67) postcard_pane_g3

0x86ee,	// (0x00067e73) postcard_pane_g4_ParamLimits

0x86ee,	// (0x00067e73) postcard_pane_g4

0x86fc,	// (0x00067e81) postcard_pane_g5_ParamLimits

0x86fc,	// (0x00067e81) postcard_pane_g5

0x8708,	// (0x00067e8d) postcard_pane_g6_ParamLimits

0x8708,	// (0x00067e8d) postcard_pane_g6

0x8714,	// (0x00067e99) postcard_pane_g7_ParamLimits

0x8714,	// (0x00067e99) postcard_pane_g7

0x0006,

0xf454,	// (0x0006ebd9) postcard_pane_g_ParamLimits

0xf454,	// (0x0006ebd9) postcard_pane_g

0x8722,	// (0x00067ea7) main_mp2_pane_g1_ParamLimits

0x8722,	// (0x00067ea7) main_mp2_pane_g1

0x872e,	// (0x00067eb3) main_mp2_pane_g2_ParamLimits

0x872e,	// (0x00067eb3) main_mp2_pane_g2

0x873a,	// (0x00067ebf) main_mp2_pane_g3_ParamLimits

0x873a,	// (0x00067ebf) main_mp2_pane_g3

0x0002,

0xf463,	// (0x0006ebe8) main_mp2_pane_g_ParamLimits

0xf463,	// (0x0006ebe8) main_mp2_pane_g

0x8746,	// (0x00067ecb) main_mp2_pane_t1_ParamLimits

0x8746,	// (0x00067ecb) main_mp2_pane_t1

0x875d,	// (0x00067ee2) main_mp2_pane_t2_ParamLimits

0x875d,	// (0x00067ee2) main_mp2_pane_t2

0x8771,	// (0x00067ef6) main_mp2_pane_t3_ParamLimits

0x8771,	// (0x00067ef6) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x0006ebef) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x0006ebef) main_mp2_pane_t

0x8783,	// (0x00067f08) pec_content_pane_ParamLimits

0x8783,	// (0x00067f08) pec_content_pane

0x67d8,	// (0x00065f5d) scroll_pane_cp015

0x8795,	// (0x00067f1a) pec_attribute_pane_ParamLimits

0x8795,	// (0x00067f1a) pec_attribute_pane

0x87a5,	// (0x00067f2a) pec_content_pane_g1_ParamLimits

0x87a5,	// (0x00067f2a) pec_content_pane_g1

0x87b1,	// (0x00067f36) pec_content_pane_t1_ParamLimits

0x87b1,	// (0x00067f36) pec_content_pane_t1

0x87c3,	// (0x00067f48) pec_content_pane_t2_ParamLimits

0x87c3,	// (0x00067f48) pec_content_pane_t2

0x0001,

0xf471,	// (0x0006ebf6) pec_content_pane_t_ParamLimits

0xf471,	// (0x0006ebf6) pec_content_pane_t

0x87d5,	// (0x00067f5a) list_single_graphic_pane_cp01_ParamLimits

0x87d5,	// (0x00067f5a) list_single_graphic_pane_cp01

0x0acb,	// (0x00060250) bg_popup_sub_pane_cp04

0x87fd,	// (0x00067f82) popup_mup_playback_window_g1

0x8809,	// (0x00067f8e) popup_mup_playback_window_t1

0x881e,	// (0x00067fa3) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x0006ebfb) popup_mup_playback_window_t

0x8862,	// (0x00067fe7) main_image_pane_g1_ParamLimits

0x8862,	// (0x00067fe7) main_image_pane_g1

0x8909,	// (0x0006808e) scroll_pane_cp018_ParamLimits

0x8909,	// (0x0006808e) scroll_pane_cp018

0x8921,	// (0x000680a6) scroll_pane_cp016_ParamLimits

0x8921,	// (0x000680a6) scroll_pane_cp016

0x8955,	// (0x000680da) smil2_image_pane_ParamLimits

0x8955,	// (0x000680da) smil2_image_pane

0x8985,	// (0x0006810a) smil2_root_pane_ParamLimits

0x8985,	// (0x0006810a) smil2_root_pane

0x89b1,	// (0x00068136) smil2_text_pane_ParamLimits

0x89b1,	// (0x00068136) smil2_text_pane

0x0870,	// (0x0005fff5) bg_list_pane_cp06

0x89f9,	// (0x0006817e) grid_radio_pane

0x0870,	// (0x0005fff5) bg_popup_window_pane_cp06

0x8a01,	// (0x00068186) main_fmradio_pane_t1

0xe9ea,	// (0x0006e16f) heading_pane_cp04

0x8a0f,	// (0x00068194) main_fmradio_pane_t2

0xe9f2,	// (0x0006e177) popup_cale_lunar_info_window_g1

0x8a1d,	// (0x000681a2) main_fmradio_pane_t3

0xe9fa,	// (0x0006e17f) popup_cale_lunar_info_window_g2

0x8a2b,	// (0x000681b0) main_fmradio_pane_t4

0x0001,

0x8a39,	// (0x000681be) main_fmradio_pane_t5

0x0004,

0xf556,	// (0x0006ecdb) popup_cale_lunar_info_window_g

0xf48b,	// (0x0006ec10) main_fmradio_pane_t

0x8a47,	// (0x000681cc) wait_bar_pane_cp03

0x8a4f,	// (0x000681d4) cell_fmradio_pane_ParamLimits

0x8a4f,	// (0x000681d4) cell_fmradio_pane

0x8714,	// (0x00067e99) cell_fmradio_pane_g1_ParamLimits

0x8714,	// (0x00067e99) cell_fmradio_pane_g1

0x0870,	// (0x0005fff5) grid_highlight_pane_cp011

0x8a62,	// (0x000681e7) poc_content_pane_ParamLimits

0x8a62,	// (0x000681e7) poc_content_pane

0x8a74,	// (0x000681f9) scroll_pane_cp019

0x8a7c,	// (0x00068201) popup_call_poc_act_window_ParamLimits

0x8a7c,	// (0x00068201) popup_call_poc_act_window

0x8a89,	// (0x0006820e) popup_call_poc_inact_window_ParamLimits

0x8a89,	// (0x0006820e) popup_call_poc_inact_window

0xf52d,	// (0x0006ecb2) bg_popup_call_poc_act_pane_g

0xe962,	// (0x0006e0e7) bg_popup_call_poc_inact_pane_g1

0xe96a,	// (0x0006e0ef) bg_popup_call_poc_inact_pane_g2

0x8a96,	// (0x0006821b) popup_call_poc_act_window_g2

0xe972,	// (0x0006e0f7) bg_popup_call_poc_inact_pane_g3

0xe97a,	// (0x0006e0ff) bg_popup_call_poc_inact_pane_g4

0xe982,	// (0x0006e107) bg_popup_call_poc_inact_pane_g5

0x8a9e,	// (0x00068223) popup_call_poc_act_window_t1_ParamLimits

0x8a9e,	// (0x00068223) popup_call_poc_act_window_t1

0x8ac6,	// (0x0006824b) popup_call_poc_act_window_t2_ParamLimits

0x8ac6,	// (0x0006824b) popup_call_poc_act_window_t2

0x8aee,	// (0x00068273) popup_call_poc_act_window_t3_ParamLimits

0x8aee,	// (0x00068273) popup_call_poc_act_window_t3

0x8b16,	// (0x0006829b) popup_call_poc_act_window_t4_ParamLimits

0x8b16,	// (0x0006829b) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x0006ec1b) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x0006ec1b) popup_call_poc_act_window_t

0xe98a,	// (0x0006e10f) bg_popup_call_poc_inact_pane_g6

0xe992,	// (0x0006e117) bg_popup_call_poc_inact_pane_g7

0xe99a,	// (0x0006e11f) bg_popup_call_poc_inact_pane_g8

0x8b28,	// (0x000682ad) popup_call_poc_inact_window_g2

0xe9a2,	// (0x0006e127) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf51a,	// (0x0006ec9f) bg_popup_call_poc_inact_pane_g

0x8b30,	// (0x000682b5) popup_call_poc_inact_window_t1_ParamLimits

0x8b30,	// (0x000682b5) popup_call_poc_inact_window_t1

0x8b45,	// (0x000682ca) popup_call_poc_inact_window_t2_ParamLimits

0x8b45,	// (0x000682ca) popup_call_poc_inact_window_t2

0x8b5a,	// (0x000682df) popup_call_poc_inact_window_t3_ParamLimits

0x8b5a,	// (0x000682df) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x0006ec24) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x0006ec24) popup_call_poc_inact_window_t

0xea9c,	// (0x0006e221) context_pane_ParamLimits

0x94c0,	// (0x00068c45) signal_pane_ParamLimits

0x5fce,	// (0x00065753) main_call2_pane

0x9433,	// (0x00068bb8) popup_phob_thumbnail2_window_ParamLimits

0x9433,	// (0x00068bb8) popup_phob_thumbnail2_window

0x8568,	// (0x00067ced) aid_hotspot_pointer_arrow_pane

0x8570,	// (0x00067cf5) aid_hotspot_pointer_hand_pane

0x917e,	// (0x00068903) phob_pre_status_pane_g5

0x0b46,	// (0x000602cb) cams_zoom_pane_ParamLimits

0x0b46,	// (0x000602cb) image_vga_pane_ParamLimits

0x5577,	// (0x00064cfc) main_camera_pane_g1_ParamLimits

0x5577,	// (0x00064cfc) main_camera_pane_g2_ParamLimits

0x5577,	// (0x00064cfc) main_camera_pane_g3_ParamLimits

0x5577,	// (0x00064cfc) main_camera_pane_g4_ParamLimits

0x5577,	// (0x00064cfc) main_camera_pane_g5_ParamLimits

0x5577,	// (0x00064cfc) main_camera_pane_g6_ParamLimits

0x5577,	// (0x00064cfc) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0006e94a) main_camera_pane_g_ParamLimits

0x6043,	// (0x000657c8) main_camera_pane_t1_ParamLimits

0x6043,	// (0x000657c8) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0006e95b) main_camera_pane_t_ParamLimits

0x0acb,	// (0x00060250) bg_popup_preview_window_pane_cp01_ParamLimits

0x0acb,	// (0x00060250) bg_popup_preview_window_pane_cp01

0x8b6f,	// (0x000682f4) popup_phob_thumbnail2_window_g1_ParamLimits

0x8b6f,	// (0x000682f4) popup_phob_thumbnail2_window_g1

0x0870,	// (0x0005fff5) call2_cli_visual_pane

0x8b8a,	// (0x0006830f) popup_call2_audio_conf_window_ParamLimits

0x8b8a,	// (0x0006830f) popup_call2_audio_conf_window

0x8b9f,	// (0x00068324) popup_call2_audio_first_window_ParamLimits

0x8b9f,	// (0x00068324) popup_call2_audio_first_window

0x8c3d,	// (0x000683c2) popup_call2_audio_in_window_ParamLimits

0x8c3d,	// (0x000683c2) popup_call2_audio_in_window

0x8c7f,	// (0x00068404) popup_call2_audio_out_window_ParamLimits

0x8c7f,	// (0x00068404) popup_call2_audio_out_window

0x8ce1,	// (0x00068466) popup_call2_audio_second_window_ParamLimits

0x8ce1,	// (0x00068466) popup_call2_audio_second_window

0x8d3f,	// (0x000684c4) popup_call2_audio_wait_window_ParamLimits

0x8d3f,	// (0x000684c4) popup_call2_audio_wait_window

0x0870,	// (0x0005fff5) bg_popup_call2_act_pane_cp03

0x0aad,	// (0x00060232) list_conf_pane_cp

0x8d7e,	// (0x00068503) popup_call2_audio_conf_window_t1

0x7c46,	// (0x000673cb) list_single_graphic_popup_conf2_pane_ParamLimits

0x7c46,	// (0x000673cb) list_single_graphic_popup_conf2_pane

0x7c59,	// (0x000673de) list_highlight_pane_cp04

0x8d8c,	// (0x00068511) list_single_graphic_popup_conf2_pane_g1

0x7c6a,	// (0x000673ef) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x0006ec2b) list_single_graphic_popup_conf2_pane_g

0x8d96,	// (0x0006851b) list_single_graphic_popup_conf2_pane_t1

0x8da4,	// (0x00068529) bg_popup_call2_act_pane_cp01_ParamLimits

0x8da4,	// (0x00068529) bg_popup_call2_act_pane_cp01

0x8e2e,	// (0x000685b3) call_type_pane_cp05_ParamLimits

0x8e2e,	// (0x000685b3) call_type_pane_cp05

0x8e82,	// (0x00068607) popup_call2_audio_second_window_g1_ParamLimits

0x8e82,	// (0x00068607) popup_call2_audio_second_window_g1

0x8ed6,	// (0x0006865b) popup_call2_audio_second_window_g2_ParamLimits

0x8ed6,	// (0x0006865b) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x0006ec30) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x0006ec30) popup_call2_audio_second_window_g

0x8f3b,	// (0x000686c0) popup_call2_audio_second_window_t1_ParamLimits

0x8f3b,	// (0x000686c0) popup_call2_audio_second_window_t1

0x8ff6,	// (0x0006877b) popup_call2_audio_second_window_t2_ParamLimits

0x8ff6,	// (0x0006877b) popup_call2_audio_second_window_t2

0xde9a,	// (0x0006d61f) popup_call2_audio_second_window_t3_ParamLimits

0xde9a,	// (0x0006d61f) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x0006ec37) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x0006ec37) popup_call2_audio_second_window_t

0x0870,	// (0x0005fff5) bg_popup_call2_in_pane_cp02

0x087a,	// (0x0005ffff) call_type_pane_cp04

0x9049,	// (0x000687ce) popup_call2_audio_wait_window_g1

0x9051,	// (0x000687d6) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x0006ec40) popup_call2_audio_wait_window_g

0x0892,	// (0x00060017) popup_call2_audio_wait_window_t3

0xdf8d,	// (0x0006d712) bg_popup_call2_act_pane_ParamLimits

0xdf8d,	// (0x0006d712) bg_popup_call2_act_pane

0xe04d,	// (0x0006d7d2) call_type_pane_cp03_ParamLimits

0xe04d,	// (0x0006d7d2) call_type_pane_cp03

0xe0b1,	// (0x0006d836) popup_call2_audio_first_window_g1_ParamLimits

0xe0b1,	// (0x0006d836) popup_call2_audio_first_window_g1

0xe121,	// (0x0006d8a6) popup_call2_audio_first_window_g2_ParamLimits

0xe121,	// (0x0006d8a6) popup_call2_audio_first_window_g2

0x7af3,	// (0x00067278) popup_call2_audio_first_window_g3_ParamLimits

0x7af3,	// (0x00067278) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x0006ec45) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x0006ec45) popup_call2_audio_first_window_g

0xe1ff,	// (0x0006d984) popup_call2_audio_first_window_t1_ParamLimits

0xe1ff,	// (0x0006d984) popup_call2_audio_first_window_t1

0xe302,	// (0x0006da87) popup_call2_audio_first_window_t4_ParamLimits

0xe302,	// (0x0006da87) popup_call2_audio_first_window_t4

0xe3e5,	// (0x0006db6a) popup_call2_audio_first_window_t5_ParamLimits

0xe3e5,	// (0x0006db6a) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x0006ec50) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x0006ec50) popup_call2_audio_first_window_t

0x0ac3,	// (0x00060248) bg_popup_call2_act_pane_g1

0xea02,	// (0x0006e187) popup_cale_lunar_info_window_t1

0xea10,	// (0x0006e195) popup_cale_lunar_info_window_t2

0xea1e,	// (0x0006e1a3) popup_cale_lunar_info_window_t3

0x0870,	// (0x0005fff5) bg_popup_call2_bubble_pane

0xe4e6,	// (0x0006dc6b) bg_popup_call2_in_pane_cp01_ParamLimits

0xe4e6,	// (0x0006dc6b) bg_popup_call2_in_pane_cp01

0x054c,	// (0x0005fcd1) call_type_pane_cp02

0x9059,	// (0x000687de) popup_call2_audio_out_window_g1_ParamLimits

0x9059,	// (0x000687de) popup_call2_audio_out_window_g1

0xe52e,	// (0x0006dcb3) popup_call2_audio_out_window_g2_ParamLimits

0xe52e,	// (0x0006dcb3) popup_call2_audio_out_window_g2

0x9085,	// (0x0006880a) popup_call2_audio_out_window_g3_ParamLimits

0x9085,	// (0x0006880a) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x0006ec59) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x0006ec59) popup_call2_audio_out_window_g

0xe565,	// (0x0006dcea) popup_call2_audio_out_window_t1_ParamLimits

0xe565,	// (0x0006dcea) popup_call2_audio_out_window_t1

0xe5c4,	// (0x0006dd49) popup_call2_audio_out_window_t2_ParamLimits

0xe5c4,	// (0x0006dd49) popup_call2_audio_out_window_t2

0xe618,	// (0x0006dd9d) popup_call2_audio_out_window_t3_ParamLimits

0xe618,	// (0x0006dd9d) popup_call2_audio_out_window_t3

0xe62e,	// (0x0006ddb3) popup_call2_audio_out_window_t4_ParamLimits

0xe62e,	// (0x0006ddb3) popup_call2_audio_out_window_t4

0xe644,	// (0x0006ddc9) popup_call2_audio_out_window_t5_ParamLimits

0xe644,	// (0x0006ddc9) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x0006ec62) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x0006ec62) popup_call2_audio_out_window_t

0xe6a8,	// (0x0006de2d) bg_popup_call2_in_pane_ParamLimits

0xe6a8,	// (0x0006de2d) bg_popup_call2_in_pane

0xe704,	// (0x0006de89) popup_call2_audio_in_window_g1_ParamLimits

0xe704,	// (0x0006de89) popup_call2_audio_in_window_g1

0xe73c,	// (0x0006dec1) popup_call2_audio_in_window_g2_ParamLimits

0xe73c,	// (0x0006dec1) popup_call2_audio_in_window_g2

0xe774,	// (0x0006def9) popup_call2_audio_in_window_g3_ParamLimits

0xe774,	// (0x0006def9) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x0006ec6f) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x0006ec6f) popup_call2_audio_in_window_g

0xe7cc,	// (0x0006df51) popup_call2_audio_in_window_t1_ParamLimits

0xe7cc,	// (0x0006df51) popup_call2_audio_in_window_t1

0xe84c,	// (0x0006dfd1) popup_call2_audio_in_window_t2_ParamLimits

0xe84c,	// (0x0006dfd1) popup_call2_audio_in_window_t2

0xe8cc,	// (0x0006e051) popup_call2_audio_in_window_t3_ParamLimits

0xe8cc,	// (0x0006e051) popup_call2_audio_in_window_t3

0xe8e6,	// (0x0006e06b) popup_call2_audio_in_window_t4_ParamLimits

0xe8e6,	// (0x0006e06b) popup_call2_audio_in_window_t4

0xe8f8,	// (0x0006e07d) popup_call2_audio_in_window_t5_ParamLimits

0xe8f8,	// (0x0006e07d) popup_call2_audio_in_window_t5

0xe90d,	// (0x0006e092) popup_call2_audio_in_window_t6_ParamLimits

0xe90d,	// (0x0006e092) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x0006ec78) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x0006ec78) popup_call2_audio_in_window_t

0x0ac3,	// (0x00060248) bg_popup_call2_in_pane_g1

0xea2c,	// (0x0006e1b1) popup_cale_lunar_info_window_t4

0x0003,

0xf55b,	// (0x0006ece0) popup_cale_lunar_info_window_t

0x0acb,	// (0x00060250) bg_popup_call2_rect_pane_ParamLimits

0x0acb,	// (0x00060250) bg_popup_call2_rect_pane

0x0870,	// (0x0005fff5) call2_cli_visual_graphic_pane

0x0870,	// (0x0005fff5) call2_cli_visual_text_pane

0x94fc,	// (0x00068c81) smil_status_volume_pane_g3

0x0002,

0x0ae3,	// (0x00060268) call2_cli_visual_graphic_pane_g1

0x0ae3,	// (0x00060268) call2_cli_visual_graphic_pane_g2

0x0ae3,	// (0x00060268) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x0006ec85) call2_cli_visual_graphic_pane_g

0xe922,	// (0x0006e0a7) bg_popup_call2_rect_pane_g1

0x59d1,	// (0x00065156) bg_popup_call2_rect_pane_g2

0xe92a,	// (0x0006e0af) bg_popup_call2_rect_pane_g3

0xe932,	// (0x0006e0b7) bg_popup_call2_rect_pane_g4

0xe93a,	// (0x0006e0bf) bg_popup_call2_rect_pane_g5

0xe942,	// (0x0006e0c7) bg_popup_call2_rect_pane_g6

0xe94a,	// (0x0006e0cf) bg_popup_call2_rect_pane_g7

0xe952,	// (0x0006e0d7) bg_popup_call2_rect_pane_g8

0xe95a,	// (0x0006e0df) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x0006ec8c) bg_popup_call2_rect_pane_g

0xe962,	// (0x0006e0e7) bg_popup_call2_bubble_pane_g1

0xe96a,	// (0x0006e0ef) bg_popup_call2_bubble_pane_g2

0xe972,	// (0x0006e0f7) bg_popup_call2_bubble_pane_g3

0xe97a,	// (0x0006e0ff) bg_popup_call2_bubble_pane_g4

0xe982,	// (0x0006e107) bg_popup_call2_bubble_pane_g5

0xe98a,	// (0x0006e10f) bg_popup_call2_bubble_pane_g6

0xe992,	// (0x0006e117) bg_popup_call2_bubble_pane_g7

0xe99a,	// (0x0006e11f) bg_popup_call2_bubble_pane_g8

0xe9a2,	// (0x0006e127) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x0006ec9f) bg_popup_call2_bubble_pane_g

0x5ac4,	// (0x00065249) aid_cale_week_size_cell_pane

0x0acb,	// (0x00060250) aid_cams_cif_uncrop_pane_ParamLimits

0x0acb,	// (0x00060250) aid_cams_cif_uncrop_pane

0x6196,	// (0x0006591b) aid_cams_size_cell_ParamLimits

0x6196,	// (0x0006591b) aid_cams_size_cell

0x61a2,	// (0x00065927) grid_cams_pane_ParamLimits

0x61b0,	// (0x00065935) linegrid_cams_pane_ParamLimits

0x62ea,	// (0x00065a6f) call_video_pane_t1

0x630b,	// (0x00065a90) call_video_pane_t2

0x0001,

0xf222,	// (0x0006e9a7) call_video_pane_t

0x6ab6,	// (0x0006623b) aid_cale_month_size_cell_pane_ParamLimits

0x6ab6,	// (0x0006623b) aid_cale_month_size_cell_pane

0xf59f,	// (0x0006ed24) smil_status_volume_pane_g

0x9509,	// (0x00068c8e) volume_smil_pane_ParamLimits

0x5201,	// (0x00064986) aid_popup2_width_pane

0x5932,	// (0x000650b7) cell_qdial_pane_g4_ParamLimits

0x5932,	// (0x000650b7) cell_qdial_pane_g4

0x7f12,	// (0x00067697) aid_blid_cardinal_pane_ParamLimits

0x7f22,	// (0x000676a7) aid_blid_destination_pane_ParamLimits

0x7f22,	// (0x000676a7) aid_blid_destination_pane

0x0acb,	// (0x00060250) bg_popup_call_poc_act_pane_ParamLimits

0x0acb,	// (0x00060250) bg_popup_call_poc_act_pane

0x0acb,	// (0x00060250) bg_popup_call_poc_inact_pane_ParamLimits

0x0acb,	// (0x00060250) bg_popup_call_poc_inact_pane

0xe9aa,	// (0x0006e12f) bg_popup_call_poc_act_pane_g1

0xe9b2,	// (0x0006e137) bg_popup_call_poc_act_pane_g2

0xe9ba,	// (0x0006e13f) bg_popup_call_poc_act_pane_g3

0xe97a,	// (0x0006e0ff) bg_popup_call_poc_act_pane_g4

0xe982,	// (0x0006e107) bg_popup_call_poc_act_pane_g5

0xe9c2,	// (0x0006e147) bg_popup_call_poc_act_pane_g6

0xe992,	// (0x0006e117) bg_popup_call_poc_act_pane_g7

0xe9ca,	// (0x0006e14f) bg_popup_call_poc_act_pane_g8

0x0870,	// (0x0005fff5) main_usb_pane

0x9362,	// (0x00068ae7) popup_cale_lunar_info_window

0x6694,	// (0x00065e19) im_reading_pane_t1_ParamLimits

0x66e8,	// (0x00065e6d) list_im_pane_ParamLimits

0x66f9,	// (0x00065e7e) scroll_pane_cp07_ParamLimits

0x0870,	// (0x0005fff5) grid_highlight_pane_cp012

0x0acb,	// (0x00060250) mup_scale_pane_ParamLimits

0x7af3,	// (0x00067278) main_usb_pane_g1_ParamLimits

0x7af3,	// (0x00067278) main_usb_pane_g1

0x90e6,	// (0x0006886b) main_usb_pane_g2_ParamLimits

0x90e6,	// (0x0006886b) main_usb_pane_g2

0x0001,

0xf544,	// (0x0006ecc9) main_usb_pane_g_ParamLimits

0xf544,	// (0x0006ecc9) main_usb_pane_g

0x90f2,	// (0x00068877) main_usb_pane_t1_ParamLimits

0x90f2,	// (0x00068877) main_usb_pane_t1

0x9104,	// (0x00068889) main_usb_pane_t2_ParamLimits

0x9104,	// (0x00068889) main_usb_pane_t2

0x9116,	// (0x0006889b) main_usb_pane_t3_ParamLimits

0x9116,	// (0x0006889b) main_usb_pane_t3

0x9128,	// (0x000688ad) main_usb_pane_t4_ParamLimits

0x9128,	// (0x000688ad) main_usb_pane_t4

0x913a,	// (0x000688bf) main_usb_pane_t5_ParamLimits

0x913a,	// (0x000688bf) main_usb_pane_t5

0x914c,	// (0x000688d1) main_usb_pane_t6_ParamLimits

0x914c,	// (0x000688d1) main_usb_pane_t6

0x0005,

0xf549,	// (0x0006ecce) main_usb_pane_t_ParamLimits

0x7eb8,	// (0x0006763d) aid_text_placing

0x7ec4,	// (0x00067649) main_location2_pane_t1_ParamLimits

0x7ed8,	// (0x0006765d) main_location2_pane_t2_ParamLimits

0x7eec,	// (0x00067671) main_location2_pane_t3_ParamLimits

0x7f00,	// (0x00067685) main_location2_pane_t4_ParamLimits

0x7f00,	// (0x00067685) main_location2_pane_t4

0xf363,	// (0x0006eae8) main_location2_pane_t_ParamLimits

0x0b07,	// (0x0006028c) find_pinb_pane_g2_ParamLimits

0x0b07,	// (0x0006028c) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0006e85f) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0006e85f) find_pinb_pane_g

0x0b13,	// (0x00060298) find_pinb_pane_t1_ParamLimits

0x0b25,	// (0x000602aa) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0006e864) find_pinb_pane_t_ParamLimits

0x0870,	// (0x0005fff5) main_call3_pane

0x7098,	// (0x0006681d) cale_month_day_heading_pane_t1_ParamLimits

0x711e,	// (0x000668a3) cale_month_day_heading_pane_t2_ParamLimits

0x7197,	// (0x0006691c) cale_month_day_heading_pane_t3_ParamLimits

0x7210,	// (0x00066995) cale_month_day_heading_pane_t4_ParamLimits

0x7289,	// (0x00066a0e) cale_month_day_heading_pane_t5_ParamLimits

0x7302,	// (0x00066a87) cale_month_day_heading_pane_t6_ParamLimits

0x737b,	// (0x00066b00) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0006e9df) cale_month_day_heading_pane_t_ParamLimits

0x7637,	// (0x00066dbc) smil_status_volume_pane

0x86be,	// (0x00067e43) postcard_address_pane_ParamLimits

0x86be,	// (0x00067e43) postcard_address_pane

0x86ca,	// (0x00067e4f) postcard_message_pane_ParamLimits

0x86ca,	// (0x00067e4f) postcard_message_pane

0x90b1,	// (0x00068836) call2_cli_visual_pane_t1_ParamLimits

0x90b1,	// (0x00068836) call2_cli_visual_pane_t1

0xeb4f,	// (0x0006e2d4) postcard_message_pane_t1_ParamLimits

0xeb4f,	// (0x0006e2d4) postcard_message_pane_t1

0xeb37,	// (0x0006e2bc) postcard_address_pane_t1_ParamLimits

0xeb37,	// (0x0006e2bc) postcard_address_pane_t1

0x963a,	// (0x00068dbf) popup_call3_audio_in_window_ParamLimits

0x963a,	// (0x00068dbf) popup_call3_audio_in_window

0x951e,	// (0x00068ca3) bg_popup_call3_in_pane_ParamLimits

0x951e,	// (0x00068ca3) bg_popup_call3_in_pane

0x9580,	// (0x00068d05) popup_call3_audio_in_window_g1_ParamLimits

0x9580,	// (0x00068d05) popup_call3_audio_in_window_g1

0x9598,	// (0x00068d1d) popup_call3_audio_in_window_g2_ParamLimits

0x9598,	// (0x00068d1d) popup_call3_audio_in_window_g2

0x95b0,	// (0x00068d35) popup_call3_audio_in_window_g3_ParamLimits

0x95b0,	// (0x00068d35) popup_call3_audio_in_window_g3

0x0003,

0xf5a6,	// (0x0006ed2b) popup_call3_audio_in_window_g_ParamLimits

0xf5a6,	// (0x0006ed2b) popup_call3_audio_in_window_g

0x95d8,	// (0x00068d5d) popup_call3_audio_in_window_t1_ParamLimits

0x95d8,	// (0x00068d5d) popup_call3_audio_in_window_t1

0x9600,	// (0x00068d85) popup_call3_audio_in_window_t2_ParamLimits

0x9600,	// (0x00068d85) popup_call3_audio_in_window_t2

0x9628,	// (0x00068dad) popup_call3_audio_in_window_t3_ParamLimits

0x9628,	// (0x00068dad) popup_call3_audio_in_window_t3

0x0002,

0xf5af,	// (0x0006ed34) popup_call3_audio_in_window_t_ParamLimits

0xf5af,	// (0x0006ed34) popup_call3_audio_in_window_t

0x5fce,	// (0x00065753) bg_popup_call3_rect_pane

0xe922,	// (0x0006e0a7) bg_popup_call3_rect_pane_g1

0x59d1,	// (0x00065156) bg_popup_call3_rect_pane_g2

0xe92a,	// (0x0006e0af) bg_popup_call3_rect_pane_g3

0xe932,	// (0x0006e0b7) bg_popup_call3_rect_pane_g4

0xe93a,	// (0x0006e0bf) bg_popup_call3_rect_pane_g5

0xe942,	// (0x0006e0c7) bg_popup_call3_rect_pane_g6

0xe94a,	// (0x0006e0cf) bg_popup_call3_rect_pane_g7

0x03ce,	// (0x0005fb53) mup_visualizer_osc_pane

0x03ce,	// (0x0005fb53) mup_visualizer_spec_pane

0x953e,	// (0x00068cc3) call3_video_qcif_pane_ParamLimits

0x953e,	// (0x00068cc3) call3_video_qcif_pane

0x9550,	// (0x00068cd5) call3_video_qcif_uncrop_pane_ParamLimits

0x9550,	// (0x00068cd5) call3_video_qcif_uncrop_pane

0x955e,	// (0x00068ce3) call3_video_subqcif_pane_ParamLimits

0x955e,	// (0x00068ce3) call3_video_subqcif_pane

0x9570,	// (0x00068cf5) call3_video_subqcif_uncrop_pane_ParamLimits

0x9570,	// (0x00068cf5) call3_video_subqcif_uncrop_pane

0x95c8,	// (0x00068d4d) popup_call3_audio_in_window_g4_ParamLimits

0x95c8,	// (0x00068d4d) popup_call3_audio_in_window_g4

0x03ce,	// (0x0005fb53) mup_spec_half_pane

0x03ce,	// (0x0005fb53) mup_spec_half_pane_cp

0x03ce,	// (0x0005fb53) mup_osc_middle_pane

0x618c,	// (0x00065911) mup_visualizer_osc_pane_g1

0xeaea,	// (0x0006e26f) mup_spec_bar_pane_ParamLimits

0xeaea,	// (0x0006e26f) mup_spec_bar_pane

0x618c,	// (0x00065911) mup_spec_bar_pane_g1

0x618c,	// (0x00065911) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x0006eb62) mup_spec_bar_pane_g

0x5ac4,	// (0x00065249) aid_cale_week_size_cell_pane_ParamLimits

0x5ad9,	// (0x0006525e) bg_cale_heading_pane_ParamLimits

0x5af9,	// (0x0006527e) bg_cale_pane_cp01_ParamLimits

0x5b16,	// (0x0006529b) cale_week_corner_pane_ParamLimits

0x5b30,	// (0x000652b5) cale_week_day_heading_pane_ParamLimits

0x5b50,	// (0x000652d5) cale_week_scroll_pane_g1_ParamLimits

0x5b6b,	// (0x000652f0) cale_week_scroll_pane_g2_ParamLimits

0x5b7e,	// (0x00065303) cale_week_scroll_pane_g3_ParamLimits

0x5b91,	// (0x00065316) cale_week_scroll_pane_g4_ParamLimits

0x5ba4,	// (0x00065329) cale_week_scroll_pane_g5_ParamLimits

0x5bb7,	// (0x0006533c) cale_week_scroll_pane_g6_ParamLimits

0x5bca,	// (0x0006534f) cale_week_scroll_pane_g7_ParamLimits

0x5bdf,	// (0x00065364) cale_week_scroll_pane_g8_ParamLimits

0x5bf4,	// (0x00065379) cale_week_scroll_pane_g9_ParamLimits

0x5c07,	// (0x0006538c) cale_week_scroll_pane_g10_ParamLimits

0x5c1a,	// (0x0006539f) cale_week_scroll_pane_g11_ParamLimits

0x5c2d,	// (0x000653b2) cale_week_scroll_pane_g12_ParamLimits

0x5c44,	// (0x000653c9) cale_week_scroll_pane_g13_ParamLimits

0x5c5f,	// (0x000653e4) cale_week_scroll_pane_g14_ParamLimits

0x5c7a,	// (0x000653ff) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0006e8f0) cale_week_scroll_pane_g_ParamLimits

0x5caa,	// (0x0006542f) cale_week_time_pane_ParamLimits

0x5cbf,	// (0x00065444) grid_cale_week_pane_ParamLimits

0x5cde,	// (0x00065463) listscroll_cale_week_pane_t1

0x5cf0,	// (0x00065475) scroll_pane_cp08_ParamLimits

0x6b57,	// (0x000662dc) cale_month_corner_pane_ParamLimits

0x7009,	// (0x0006678e) cale_month_pane_t1

0x701b,	// (0x000667a0) cale_month_week_pane_ParamLimits

0x7af3,	// (0x00067278) popup_call_status_window_g1_ParamLimits

0x7b01,	// (0x00067286) popup_call_status_window_g2_ParamLimits

0x7b0d,	// (0x00067292) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x0006ea6f) popup_call_status_window_g_ParamLimits

0x7b72,	// (0x000672f7) aid_call2_pane

0x45de,	// (0x00063d63) msg_header_pane_g1

0x86be,	// (0x00067e43) postcard_address2_pane_ParamLimits

0x86be,	// (0x00067e43) postcard_address2_pane

0x86ca,	// (0x00067e4f) postcard_message2_pane_ParamLimits

0x86ca,	// (0x00067e4f) postcard_message2_pane

0x94ce,	// (0x00068c53) message2_row_pane_ParamLimits

0x94ce,	// (0x00068c53) message2_row_pane

0x94e9,	// (0x00068c6e) address2_row_pane_ParamLimits

0x94e9,	// (0x00068c6e) address2_row_pane

0xeab7,	// (0x0006e23c) postcard_message2_row_pane_g1

0xeabf,	// (0x0006e244) postcard_message2_row_pane_t1

0xeab7,	// (0x0006e23c) address2_row_pane_g1

0xeabf,	// (0x0006e244) address2_row_pane_t1

0x5fc6,	// (0x0006574b) aid_size_cell_vorec

0x0870,	// (0x0005fff5) main_rss_pane

0xeacd,	// (0x0006e252) rss_list_single_pane_ParamLimits

0xeacd,	// (0x0006e252) rss_list_single_pane

0xeadb,	// (0x0006e260) rss_list_single_pane_t1

0xeadb,	// (0x0006e260) rss_list_single_pane_t2

0x0001,

0xf59a,	// (0x0006ed1f) rss_list_single_pane_t

0x0870,	// (0x0005fff5) main_camera2_pane

0x0870,	// (0x0005fff5) main_video2_pane

0x0b46,	// (0x000602cb) cams_zoom_pane_cp2_ParamLimits

0x0b46,	// (0x000602cb) cams_zoom_pane_cp2

0x0b46,	// (0x000602cb) image2_vga_pane_ParamLimits

0x0b46,	// (0x000602cb) image2_vga_pane

0x5577,	// (0x00064cfc) main_camera2_pane_g1_ParamLimits

0x5577,	// (0x00064cfc) main_camera2_pane_g1

0x5577,	// (0x00064cfc) main_camera2_pane_g2_ParamLimits

0x5577,	// (0x00064cfc) main_camera2_pane_g2

0x5577,	// (0x00064cfc) main_camera2_pane_g3_ParamLimits

0x5577,	// (0x00064cfc) main_camera2_pane_g3

0x5577,	// (0x00064cfc) main_camera2_pane_g4_ParamLimits

0x5577,	// (0x00064cfc) main_camera2_pane_g4

0x5577,	// (0x00064cfc) main_camera2_pane_g5_ParamLimits

0x5577,	// (0x00064cfc) main_camera2_pane_g5

0x5577,	// (0x00064cfc) main_camera2_pane_g6_ParamLimits

0x5577,	// (0x00064cfc) main_camera2_pane_g6

0x5577,	// (0x00064cfc) main_camera2_pane_g7_ParamLimits

0x5577,	// (0x00064cfc) main_camera2_pane_g7

0x5577,	// (0x00064cfc) main_camera2_pane_g8_ParamLimits

0x5577,	// (0x00064cfc) main_camera2_pane_g8

0x0008,

0xf5b6,	// (0x0006ed3b) main_camera2_pane_g_ParamLimits

0xf5b6,	// (0x0006ed3b) main_camera2_pane_g

0x6043,	// (0x000657c8) main_camera2_pane_t1_ParamLimits

0x6043,	// (0x000657c8) main_camera2_pane_t1

0x6043,	// (0x000657c8) main_camera2_pane_t2_ParamLimits

0x6043,	// (0x000657c8) main_camera2_pane_t2

0x6043,	// (0x000657c8) main_camera2_pane_t3_ParamLimits

0x6043,	// (0x000657c8) main_camera2_pane_t3

0x6043,	// (0x000657c8) main_camera2_pane_t4_ParamLimits

0x6043,	// (0x000657c8) main_camera2_pane_t4

0x0006,

0xf5c9,	// (0x0006ed4e) main_camera2_pane_t_ParamLimits

0xf5c9,	// (0x0006ed4e) main_camera2_pane_t

0xea8e,	// (0x0006e213) cams_zoom_pane_cp4_ParamLimits

0xea8e,	// (0x0006e213) cams_zoom_pane_cp4

0x0aed,	// (0x00060272) image2_cif_pane_ParamLimits

0x0aed,	// (0x00060272) image2_cif_pane

0x0b46,	// (0x000602cb) image2_subqcif_pane_ParamLimits

0x0b46,	// (0x000602cb) image2_subqcif_pane

0xeb6b,	// (0x0006e2f0) main_video2_pane_g1_ParamLimits

0xeb6b,	// (0x0006e2f0) main_video2_pane_g1

0xeb6b,	// (0x0006e2f0) main_video2_pane_g2_ParamLimits

0xeb6b,	// (0x0006e2f0) main_video2_pane_g2

0xeb6b,	// (0x0006e2f0) main_video2_pane_g3_ParamLimits

0xeb6b,	// (0x0006e2f0) main_video2_pane_g3

0xeb6b,	// (0x0006e2f0) main_video2_pane_g4_ParamLimits

0xeb6b,	// (0x0006e2f0) main_video2_pane_g4

0xeb6b,	// (0x0006e2f0) main_video2_pane_g5_ParamLimits

0xeb6b,	// (0x0006e2f0) main_video2_pane_g5

0xeb6b,	// (0x0006e2f0) main_video2_pane_g6_ParamLimits

0xeb6b,	// (0x0006e2f0) main_video2_pane_g6

0x0005,

0xf5d8,	// (0x0006ed5d) main_video2_pane_g_ParamLimits

0xf5d8,	// (0x0006ed5d) main_video2_pane_g

0xeb79,	// (0x0006e2fe) main_video2_pane_t1_ParamLimits

0xeb79,	// (0x0006e2fe) main_video2_pane_t1

0xeb79,	// (0x0006e2fe) main_video2_pane_t2_ParamLimits

0xeb79,	// (0x0006e2fe) main_video2_pane_t2

0xeb79,	// (0x0006e2fe) main_video2_pane_t3_ParamLimits

0xeb79,	// (0x0006e2fe) main_video2_pane_t3

0x0002,

0xf5e5,	// (0x0006ed6a) main_video2_pane_t_ParamLimits

0xf5e5,	// (0x0006ed6a) main_video2_pane_t

0x91e2,	// (0x00068967) call_muted_g2

0x0001,

0xf58c,	// (0x0006ed11) call_muted_g

0x0870,	// (0x0005fff5) main_mup2_pane

0x5585,	// (0x00064d0a) main_mup2_pane_g1_ParamLimits

0x5585,	// (0x00064d0a) main_mup2_pane_g1

0x5585,	// (0x00064d0a) main_mup2_pane_g2_ParamLimits

0x5585,	// (0x00064d0a) main_mup2_pane_g2

0x618c,	// (0x00065911) main_mup_pane_g13_cp1

0x03ce,	// (0x0005fb53) mup_volume_pane_cp1

0x5585,	// (0x00064d0a) main_mup2_pane_g4_ParamLimits

0x5585,	// (0x00064d0a) main_mup2_pane_g4

0x5585,	// (0x00064d0a) main_mup2_pane_g5_ParamLimits

0x5585,	// (0x00064d0a) main_mup2_pane_g5

0x5585,	// (0x00064d0a) main_mup2_pane_g6_ParamLimits

0x5585,	// (0x00064d0a) main_mup2_pane_g6

0x5585,	// (0x00064d0a) main_mup2_pane_g7_ParamLimits

0x5585,	// (0x00064d0a) main_mup2_pane_g7

0x0006,

0xf5ec,	// (0x0006ed71) main_mup2_pane_g_ParamLimits

0xf5ec,	// (0x0006ed71) main_mup2_pane_g

0x5593,	// (0x00064d18) main_mup2_pane_t1_ParamLimits

0x5593,	// (0x00064d18) main_mup2_pane_t1

0x5593,	// (0x00064d18) main_mup2_pane_t2_ParamLimits

0x5593,	// (0x00064d18) main_mup2_pane_t2

0x5593,	// (0x00064d18) main_mup2_pane_t3_ParamLimits

0x5593,	// (0x00064d18) main_mup2_pane_t3

0x5593,	// (0x00064d18) main_mup2_pane_t4_ParamLimits

0x5593,	// (0x00064d18) main_mup2_pane_t4

0x5593,	// (0x00064d18) main_mup2_pane_t5_ParamLimits

0x5593,	// (0x00064d18) main_mup2_pane_t5

0x5593,	// (0x00064d18) main_mup2_pane_t6_ParamLimits

0x5593,	// (0x00064d18) main_mup2_pane_t6

0x0005,

0xf5fb,	// (0x0006ed80) main_mup2_pane_t_ParamLimits

0xf5fb,	// (0x0006ed80) main_mup2_pane_t

0xde8c,	// (0x0006d611) mup2_visualizer_pane_ParamLimits

0xde8c,	// (0x0006d611) mup2_visualizer_pane

0xde8c,	// (0x0006d611) mup_progress_pane_cp_ParamLimits

0xde8c,	// (0x0006d611) mup_progress_pane_cp

0xeb8d,	// (0x0006e312) mup_volume_pane_cp_ParamLimits

0xeb8d,	// (0x0006e312) mup_volume_pane_cp

0x5569,	// (0x00064cee) mup2_visualizer_pane_g1_ParamLimits

0x5569,	// (0x00064cee) mup2_visualizer_pane_g1

0x5577,	// (0x00064cfc) mup2_visualizer_pane_g2_ParamLimits

0x5577,	// (0x00064cfc) mup2_visualizer_pane_g2

0x5577,	// (0x00064cfc) mup2_visualizer_pane_g3_ParamLimits

0x5577,	// (0x00064cfc) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0006e869) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0006e869) mup2_visualizer_pane_g

0x89f1,	// (0x00068176) aid_size_cell_fmradio

0x92f8,	// (0x00068a7d) aid_height_parent_landcape

0x67bf,	// (0x00065f44) wml_content_pane_cp

0x67c7,	// (0x00065f4c) wml_tabs_pane

0x67d0,	// (0x00065f55) popup_wml_miniature_window

0x67d8,	// (0x00065f5d) scroll_pane_cp021

0x67ec,	// (0x00065f71) wml_content_pane_comp8

0x0870,	// (0x0005fff5) bg_popup_sub_pane_cp05

0xeba3,	// (0x0006e328) popup_wml_miniature_window_g1

0xebab,	// (0x0006e330) wml_miniature_view_pane

0x966b,	// (0x00068df0) aid_size_wml_view

0x9673,	// (0x00068df8) wml_miniature_view_pane_g1

0x967c,	// (0x00068e01) wml_miniature_view_pane_g2

0x9685,	// (0x00068e0a) wml_miniature_view_pane_g3

0x968d,	// (0x00068e12) wml_miniature_view_pane_g4

0x9695,	// (0x00068e1a) wml_miniature_view_pane_g5

0x969d,	// (0x00068e22) wml_miniature_view_pane_g6

0x96a5,	// (0x00068e2a) wml_miniature_view_pane_g7

0x96ad,	// (0x00068e32) wml_miniature_view_pane_g8

0x0007,

0xf608,	// (0x0006ed8d) wml_miniature_view_pane_g

0xebb3,	// (0x0006e338) background_graphic_ParamLimits

0xebb3,	// (0x0006e338) background_graphic

0xebbf,	// (0x0006e344) wml_tabs_2_pane

0xebc8,	// (0x0006e34d) wml_tabs_3_pane_ParamLimits

0xebc8,	// (0x0006e34d) wml_tabs_3_pane

0xebda,	// (0x0006e35f) wml_tabs_4_pane_ParamLimits

0xebda,	// (0x0006e35f) wml_tabs_4_pane

0xebf0,	// (0x0006e375) wml_tabs_5_pane_ParamLimits

0xebf0,	// (0x0006e375) wml_tabs_5_pane

0xec0a,	// (0x0006e38f) wml_tabs_pane_g2_ParamLimits

0xec0a,	// (0x0006e38f) wml_tabs_pane_g2

0xec1f,	// (0x0006e3a4) wml_tabs_pane_g3_ParamLimits

0xec1f,	// (0x0006e3a4) wml_tabs_pane_g3

0xec34,	// (0x0006e3b9) wml_tabs_2_active_pane_ParamLimits

0xec34,	// (0x0006e3b9) wml_tabs_2_active_pane

0xec34,	// (0x0006e3b9) wml_tabs_2_passive_pane_ParamLimits

0xec34,	// (0x0006e3b9) wml_tabs_2_passive_pane

0x96b5,	// (0x00068e3a) wml_tabs_3_active_pane_cp_ParamLimits

0x96b5,	// (0x00068e3a) wml_tabs_3_active_pane_cp

0x96c6,	// (0x00068e4b) wml_tabs_3_passive_pane_ParamLimits

0x96c6,	// (0x00068e4b) wml_tabs_3_passive_pane

0x96d7,	// (0x00068e5c) wml_tabs_3_passive_pane_cp_ParamLimits

0x96d7,	// (0x00068e5c) wml_tabs_3_passive_pane_cp

0x96e8,	// (0x00068e6d) tabs_4_active_pane

0x96f0,	// (0x00068e75) tabs_4_passive_pane

0x96f8,	// (0x00068e7d) tabs_4_passive_pane_cp

0x9700,	// (0x00068e85) tabs_4_passive_pane_cp2

0x90de,	// (0x00068863) aid_height_text

0xde8c,	// (0x0006d611) mup_volume_cont_pane_ParamLimits

0xde8c,	// (0x0006d611) mup_volume_cont_pane

0x03ce,	// (0x0005fb53) aid_size_cell_pinb

0x03ce,	// (0x0005fb53) aid_size_list_pinb

0xde8c,	// (0x0006d611) mup2_volume_cont_pane_ParamLimits

0xde8c,	// (0x0006d611) mup2_volume_cont_pane

0x9708,	// (0x00068e8d) mup2_volume_cont_pane_g1_ParamLimits

0x9708,	// (0x00068e8d) mup2_volume_cont_pane_g1

0x520d,	// (0x00064992) aid_size_cell_touch_ParamLimits

0x520d,	// (0x00064992) aid_size_cell_touch

0x54b5,	// (0x00064c3a) touch_pane_ParamLimits

0x54b5,	// (0x00064c3a) touch_pane

0x03ce,	// (0x0005fb53) main_rss2_pane

0xec4b,	// (0x0006e3d0) listscroll_rss2_pane

0xec54,	// (0x0006e3d9) rss2_navigation_pane

0xec5c,	// (0x0006e3e1) list_rss2_pane

0x7d6d,	// (0x000674f2) scroll_pane_cp22

0xec64,	// (0x0006e3e9) rss2_navigation_pane_g1

0xec6d,	// (0x0006e3f2) rss2_navigation_pane_g2

0xec75,	// (0x0006e3fa) rss2_navigation_pane_g3

0x0002,

0xf619,	// (0x0006ed9e) rss2_navigation_pane_g

0xec7d,	// (0x0006e402) rss2_navigation_pane_t1

0x971e,	// (0x00068ea3) rss2_list_single_pane_ParamLimits

0x971e,	// (0x00068ea3) rss2_list_single_pane

0xec8b,	// (0x0006e410) rss2_list_single_pane_t2

0xec99,	// (0x0006e41e) rss2_list_single_pane_t3_ParamLimits

0xec99,	// (0x0006e41e) rss2_list_single_pane_t3

0xecb6,	// (0x0006e43b) rss2_list_single_pane_t4

0x7621,	// (0x00066da6) smil_status_pane_g1

0x0aed,	// (0x00060272) main_image2_pane_ParamLimits

0x0aed,	// (0x00060272) main_image2_pane

0x5577,	// (0x00064cfc) main_camera2_pane_g9_ParamLimits

0x5577,	// (0x00064cfc) main_camera2_pane_g9

0x6043,	// (0x000657c8) main_camera2_pane_t5_ParamLimits

0x6043,	// (0x000657c8) main_camera2_pane_t5

0x9657,	// (0x00068ddc) main_camera2_pane_t6_ParamLimits

0x9657,	// (0x00068ddc) main_camera2_pane_t6

0x974f,	// (0x00068ed4) main_image2_pane_g1_ParamLimits

0x974f,	// (0x00068ed4) main_image2_pane_g1

0x89db,	// (0x00068160) smil2_video_pane_ParamLimits

0x89db,	// (0x00068160) smil2_video_pane

0x5241,	// (0x000649c6) aid_zoom_text_primary_cp

0x545e,	// (0x00064be3) popup_preview_fixed_window

0x668c,	// (0x00065e11) im_reading_pane_g1

0x9649,	// (0x00068dce) cams2_bc_adjust_pane_cp_ParamLimits

0x9649,	// (0x00068dce) cams2_bc_adjust_pane_cp

0x0b46,	// (0x000602cb) cams2_bc_adjust_pane_ParamLimits

0x0b46,	// (0x000602cb) cams2_bc_adjust_pane

0x618c,	// (0x00065911) cams2_bc_adjust_pane_g1

0x03ce,	// (0x0005fb53) cams2_slider_pane

0x618c,	// (0x00065911) cams2_slider_pane_g1

0x618c,	// (0x00065911) cams2_slider_pane_g2

0x0006,

0xf620,	// (0x0006eda5) cams2_slider_pane_g

0x55c1,	// (0x00064d46) calc_display_pane_ParamLimits

0x55df,	// (0x00064d64) calc_paper_pane_ParamLimits

0x55fb,	// (0x00064d80) grid_calc_pane_ParamLimits

0x7bd8,	// (0x0006735d) popup_clock_digital_window_t1_ParamLimits

0x88a6,	// (0x0006802b) main_image_pane_t1

0x55a7,	// (0x00064d2c) aid_size_cell_calc_ParamLimits

0x55a7,	// (0x00064d2c) aid_size_cell_calc

0x933e,	// (0x00068ac3) popup_blid_sat_info2_window_ParamLimits

0x933e,	// (0x00068ac3) popup_blid_sat_info2_window

0xecc4,	// (0x0006e449) aid_size_cell_blid

0xde8c,	// (0x0006d611) bg_popup_window_pane_cp07

0xece1,	// (0x0006e466) grid_popup_blid_pane

0xeceb,	// (0x0006e470) heading_pane_cp05_ParamLimits

0xeceb,	// (0x0006e470) heading_pane_cp05

0xedb5,	// (0x0006e53a) cell_popup_blid_pane_ParamLimits

0xedb5,	// (0x0006e53a) cell_popup_blid_pane

0xedd9,	// (0x0006e55e) cell_popup_blid_pane_g1

0xede1,	// (0x0006e566) cell_popup_blid_pane_t1

0xde8c,	// (0x0006d611) mup2_indicator_pane_ParamLimits

0xde8c,	// (0x0006d611) mup2_indicator_pane

0x03ce,	// (0x0005fb53) mup2_visualizer_osc_pane

0xeb8d,	// (0x0006e312) mup2_visualizer_spec_pane_ParamLimits

0xeb8d,	// (0x0006e312) mup2_visualizer_spec_pane

0x03ce,	// (0x0005fb53) mup2_spec_half_pane

0x03ce,	// (0x0005fb53) mup2_spec_half_pane_cp

0xedef,	// (0x0006e574) mup2_spec_bar_pane_ParamLimits

0xedef,	// (0x0006e574) mup2_spec_bar_pane

0x618c,	// (0x00065911) mup2_spec_bar_pane_g1

0xee0e,	// (0x0006e593) mup2_spec_bar_pane_g2

0x0001,

0xf646,	// (0x0006edcb) mup2_spec_bar_pane_g

0x03ce,	// (0x0005fb53) mup2_osc_middle_pane

0x618c,	// (0x00065911) mup2_visualizer_osc_pane_g1

0x047d,	// (0x0005fc02) popup_number_entry_window_t1_ParamLimits

0x0490,	// (0x0005fc15) popup_number_entry_window_t2_ParamLimits

0x04a2,	// (0x0005fc27) popup_number_entry_window_t3_ParamLimits

0x550c,	// (0x00064c91) popup_number_entry_window_t5_ParamLimits

0x550c,	// (0x00064c91) popup_number_entry_window_t5

0xf085,	// (0x0006e80a) popup_number_entry_window_t_ParamLimits

0x04b4,	// (0x0005fc39) text_title_cp2_ParamLimits

0x8578,	// (0x00067cfd) aid_hotspot_pointer_text2_pane

0x8612,	// (0x00067d97) main_viewer_pane_g9_ParamLimits

0x8612,	// (0x00067d97) main_viewer_pane_g9

0x7009,	// (0x0006678e) cale_month_pane_t1_ParamLimits

0x76ef,	// (0x00066e74) bg_cale_pane_ParamLimits

0x7707,	// (0x00066e8c) list_cale_pane_ParamLimits

0x7718,	// (0x00066e9d) listscroll_cale_day_pane_t1

0x772a,	// (0x00066eaf) scroll_pane_cp09_ParamLimits

0x82d3,	// (0x00067a58) main_mup_eq_pane_t1_ParamLimits

0x82d3,	// (0x00067a58) main_mup_eq_pane_t1

0x82ed,	// (0x00067a72) main_mup_eq_pane_t2_ParamLimits

0x82ed,	// (0x00067a72) main_mup_eq_pane_t2

0x8307,	// (0x00067a8c) main_mup_eq_pane_t3_ParamLimits

0x8307,	// (0x00067a8c) main_mup_eq_pane_t3

0x831f,	// (0x00067aa4) main_mup_eq_pane_t4_ParamLimits

0x831f,	// (0x00067aa4) main_mup_eq_pane_t4

0x8337,	// (0x00067abc) main_mup_eq_pane_t5_ParamLimits

0x8337,	// (0x00067abc) main_mup_eq_pane_t5

0x834f,	// (0x00067ad4) main_mup_eq_pane_t6_ParamLimits

0x834f,	// (0x00067ad4) main_mup_eq_pane_t6

0x8363,	// (0x00067ae8) main_mup_eq_pane_t7_ParamLimits

0x8363,	// (0x00067ae8) main_mup_eq_pane_t7

0x8377,	// (0x00067afc) main_mup_eq_pane_t8_ParamLimits

0x8377,	// (0x00067afc) main_mup_eq_pane_t8

0x838d,	// (0x00067b12) main_mup_eq_pane_t9_ParamLimits

0x838d,	// (0x00067b12) main_mup_eq_pane_t9

0x83a5,	// (0x00067b2a) main_mup_eq_pane_t10_ParamLimits

0x83a5,	// (0x00067b2a) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x0006eb6e) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x0006eb6e) main_mup_eq_pane_t

0x8462,	// (0x00067be7) mup_equalizer_pane_cp5_ParamLimits

0x8478,	// (0x00067bfd) mup_equalizer_pane_cp6_ParamLimits

0x8490,	// (0x00067c15) mup_equalizer_pane_cp7_ParamLimits

0x03ce,	// (0x0005fb53) main_gallery_pane

0xeb09,	// (0x0006e28e) smil2_volume_pane

0xeb11,	// (0x0006e296) smil_status_volume_pane_g1_ParamLimits

0xeb24,	// (0x0006e2a9) smil_status_volume_pane_g2_ParamLimits

0x94fc,	// (0x00068c81) smil_status_volume_pane_g3_ParamLimits

0xf59f,	// (0x0006ed24) smil_status_volume_pane_g_ParamLimits

0xde8c,	// (0x0006d611) bg_popup_window_pane_cp07_ParamLimits

0xeccc,	// (0x0006e451) blid_firmament_pane

0x0b46,	// (0x000602cb) aid_size_cell_gallery_ParamLimits

0x0b46,	// (0x000602cb) aid_size_cell_gallery

0x0b46,	// (0x000602cb) grid_gallery_pane_ParamLimits

0x0b46,	// (0x000602cb) grid_gallery_pane

0xea8e,	// (0x0006e213) cell_gallery_pane_ParamLimits

0xea8e,	// (0x0006e213) cell_gallery_pane

0x0aed,	// (0x00060272) bg_cell_gallery_focus_pane_ParamLimits

0x0aed,	// (0x00060272) bg_cell_gallery_focus_pane

0x5569,	// (0x00064cee) cell_gallery_pane_g1_ParamLimits

0x5569,	// (0x00064cee) cell_gallery_pane_g1

0x5569,	// (0x00064cee) cell_gallery_pane_g2_ParamLimits

0x5569,	// (0x00064cee) cell_gallery_pane_g2

0x5569,	// (0x00064cee) cell_gallery_pane_g3_ParamLimits

0x5569,	// (0x00064cee) cell_gallery_pane_g3

0x5577,	// (0x00064cfc) cell_gallery_pane_g4_ParamLimits

0x5577,	// (0x00064cfc) cell_gallery_pane_g4

0x0003,

0xf64b,	// (0x0006edd0) cell_gallery_pane_g_ParamLimits

0xf64b,	// (0x0006edd0) cell_gallery_pane_g

0xee18,	// (0x0006e59d) bg_cell_gallery_focus_pane_g1

0xee20,	// (0x0006e5a5) bg_cell_gallery_focus_pane_g2

0xee28,	// (0x0006e5ad) bg_cell_gallery_focus_pane_g3

0xee30,	// (0x0006e5b5) bg_cell_gallery_focus_pane_g4

0xee38,	// (0x0006e5bd) bg_cell_gallery_focus_pane_g5

0xee40,	// (0x0006e5c5) bg_cell_gallery_focus_pane_g6

0xee48,	// (0x0006e5cd) bg_cell_gallery_focus_pane_g7

0xee50,	// (0x0006e5d5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf654,	// (0x0006edd9) bg_cell_gallery_focus_pane_g

0xee58,	// (0x0006e5dd) aid_firma_cardinal

0xee6c,	// (0x0006e5f1) blid_firmament_pane_t1

0xee83,	// (0x0006e608) blid_firmament_pane_t2

0xee9a,	// (0x0006e61f) blid_firmament_pane_t3

0xeeb1,	// (0x0006e636) blid_firmament_pane_t4

0x0003,

0xf665,	// (0x0006edea) blid_firmament_pane_t

0xeec8,	// (0x0006e64d) blid_sat_info_pane

0x618c,	// (0x00065911) blid_sat_info_pane_g1

0x618c,	// (0x00065911) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x0006eb62) blid_sat_info_pane_g

0xeed8,	// (0x0006e65d) blid_sat_info_pane_t1

0xeee6,	// (0x0006e66b) smil2_volume_content_pane

0xeeef,	// (0x0006e674) smil2_volume_pane_g1

0xeef7,	// (0x0006e67c) smil2_volume_content_pane_g1

0xef00,	// (0x0006e685) smil2_volume_content_pane_g2

0xef09,	// (0x0006e68e) smil2_volume_content_pane_g3

0xef12,	// (0x0006e697) smil2_volume_content_pane_g4

0xef1b,	// (0x0006e6a0) smil2_volume_content_pane_g5

0xef24,	// (0x0006e6a9) smil2_volume_content_pane_g6

0xef2d,	// (0x0006e6b2) smil2_volume_content_pane_g7

0xef36,	// (0x0006e6bb) smil2_volume_content_pane_g8

0xef3f,	// (0x0006e6c4) smil2_volume_content_pane_g9

0xef48,	// (0x0006e6cd) smil2_volume_content_pane_g10

0x0009,

0xf66e,	// (0x0006edf3) smil2_volume_content_pane_g

0x5d6f,	// (0x000654f4) cale_week_day_heading_pane_t1_ParamLimits

0x5d8a,	// (0x0006550f) cale_week_day_heading_pane_t2_ParamLimits

0x5da5,	// (0x0006552a) cale_week_day_heading_pane_t3_ParamLimits

0x5dc0,	// (0x00065545) cale_week_day_heading_pane_t4_ParamLimits

0x5ddb,	// (0x00065560) cale_week_day_heading_pane_t5_ParamLimits

0x5df6,	// (0x0006557b) cale_week_day_heading_pane_t6_ParamLimits

0x5e11,	// (0x00065596) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0006e911) cale_week_day_heading_pane_t_ParamLimits

0x5e2c,	// (0x000655b1) bg_cale_side_pane_ParamLimits

0x5e3a,	// (0x000655bf) cale_week_time_pane_t1_ParamLimits

0x5e54,	// (0x000655d9) cale_week_time_pane_t2_ParamLimits

0x5e6e,	// (0x000655f3) cale_week_time_pane_t3_ParamLimits

0x5e88,	// (0x0006560d) cale_week_time_pane_t4_ParamLimits

0x5ea2,	// (0x00065627) cale_week_time_pane_t5_ParamLimits

0x5ebc,	// (0x00065641) cale_week_time_pane_t6_ParamLimits

0x5eda,	// (0x0006565f) cale_week_time_pane_t7_ParamLimits

0x5efc,	// (0x00065681) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0006e920) cale_week_time_pane_t_ParamLimits

0x5f20,	// (0x000656a5) cell_cale_week_pane_g2_ParamLimits

0x5e2c,	// (0x000655b1) bg_cale_side_pane_cp01_ParamLimits

0x740c,	// (0x00066b91) cale_month_week_pane_t1_ParamLimits

0x7425,	// (0x00066baa) cale_month_week_pane_t2_ParamLimits

0x743e,	// (0x00066bc3) cale_month_week_pane_t3_ParamLimits

0x7457,	// (0x00066bdc) cale_month_week_pane_t4_ParamLimits

0x7470,	// (0x00066bf5) cale_month_week_pane_t5_ParamLimits

0x7491,	// (0x00066c16) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0006e9ee) cale_month_week_pane_t_ParamLimits

0x75d4,	// (0x00066d59) cell_cale_month_pane_g1_ParamLimits

0x03ce,	// (0x0005fb53) main_cale_event_viewer_pane

0x03ce,	// (0x0005fb53) listscroll_cale_event_viewer_pane

0xef51,	// (0x0006e6d6) list_cale_ev_pane

0xef59,	// (0x0006e6de) scroll_pane_cp023

0xef65,	// (0x0006e6ea) field_cale_ev_pane_ParamLimits

0xef65,	// (0x0006e6ea) field_cale_ev_pane

0xef83,	// (0x0006e708) field_cale_ev_content_pane_ParamLimits

0xef83,	// (0x0006e708) field_cale_ev_content_pane

0xef8f,	// (0x0006e714) field_cale_ev_pane_g1_ParamLimits

0xef8f,	// (0x0006e714) field_cale_ev_pane_g1

0xef9b,	// (0x0006e720) field_cale_ev_pane_g2_ParamLimits

0xef9b,	// (0x0006e720) field_cale_ev_pane_g2

0xefb3,	// (0x0006e738) field_cale_ev_pane_g3_ParamLimits

0xefb3,	// (0x0006e738) field_cale_ev_pane_g3

0x0002,

0xf683,	// (0x0006ee08) field_cale_ev_pane_g_ParamLimits

0xf683,	// (0x0006ee08) field_cale_ev_pane_g

0xefcb,	// (0x0006e750) field_cale_ev_pane_t1_ParamLimits

0xefcb,	// (0x0006e750) field_cale_ev_pane_t1

0xefe2,	// (0x0006e767) field_cale_ev_content_pane_t1_ParamLimits

0xefe2,	// (0x0006e767) field_cale_ev_content_pane_t1

0x8542,	// (0x00067cc7) bg_button_pane_cp01

0x5aab,	// (0x00065230) listscroll_cale_week_pane_ParamLimits

0x5abb,	// (0x00065240) popup_toolbar_window_cp01

0x5cde,	// (0x00065463) listscroll_cale_week_pane_t1_ParamLimits

0x5aab,	// (0x00065230) listscroll_cale_day_pane_ParamLimits

0x5abb,	// (0x00065240) popup_toolbar_window_cp02

0x7718,	// (0x00066e9d) listscroll_cale_day_pane_t1_ParamLimits

0x5aab,	// (0x00065230) main_cale_month_pane_ParamLimits

0x9445,	// (0x00068bca) popup_toolbar_window_cp03_ParamLimits

0x9445,	// (0x00068bca) popup_toolbar_window_cp03

0x888e,	// (0x00068013) main_image_pane_g2_ParamLimits

0x888e,	// (0x00068013) main_image_pane_g2

0x889a,	// (0x0006801f) main_image_pane_g3_ParamLimits

0x889a,	// (0x0006801f) main_image_pane_g3

0x0002,

0xf47b,	// (0x0006ec00) main_image_pane_g_ParamLimits

0xf47b,	// (0x0006ec00) main_image_pane_g

0x88a6,	// (0x0006802b) main_image_pane_t1_ParamLimits

0x88bd,	// (0x00068042) main_image_pane_t2_ParamLimits

0x88bd,	// (0x00068042) main_image_pane_t2

0x88cf,	// (0x00068054) main_image_pane_t3_ParamLimits

0x88cf,	// (0x00068054) main_image_pane_t3

0x88e1,	// (0x00068066) main_image_pane_t4_ParamLimits

0x88e1,	// (0x00068066) main_image_pane_t4

0x0003,

0xf482,	// (0x0006ec07) main_image_pane_t_ParamLimits

0xf482,	// (0x0006ec07) main_image_pane_t

0x88f3,	// (0x00068078) popup_image_details_window_cp01

0x88fd,	// (0x00068082) popup_toobar_trans_pane_cp01_ParamLimits

0x88fd,	// (0x00068082) popup_toobar_trans_pane_cp01

0x9395,	// (0x00068b1a) popup_image_details_window_ParamLimits

0x9395,	// (0x00068b1a) popup_image_details_window

0x93a3,	// (0x00068b28) popup_image_focus_window

0x0b46,	// (0x000602cb) camera2_autofocus_pane_ParamLimits

0x0b46,	// (0x000602cb) camera2_autofocus_pane

0x03ce,	// (0x0005fb53) bg_popup_sub_pane_cp06

0xf000,	// (0x0006e785) popup_image_focus_window_g1

0xf008,	// (0x0006e78d) popup_image_focus_window_g2

0xf010,	// (0x0006e795) popup_image_focus_window_g3

0xf018,	// (0x0006e79d) popup_image_focus_window_g4

0x0003,

0xf68a,	// (0x0006ee0f) popup_image_focus_window_g

0xf020,	// (0x0006e7a5) popup_image_focus_window_t1

0xf02e,	// (0x0006e7b3) popup_image_focus_window_t2

0xf03e,	// (0x0006e7c3) popup_image_focus_window_t3

0x0002,

0xf693,	// (0x0006ee18) popup_image_focus_window_t

0x5569,	// (0x00064cee) camera2_autofocus_pane_g1

0x0aed,	// (0x00060272) bg_tb_trans_pane_cp01

0xf04c,	// (0x0006e7d1) popup_image_details_window_g1

0x0dc5,	// (0x0006054a) popup_image_details_window_g2

0x0002,

0xf6a5,	// (0x0006ee2a) popup_image_details_window_g

0x0dee,	// (0x00060573) popup_image_details_window_t1

0x0e00,	// (0x00060585) popup_image_details_window_t2

0x0e19,	// (0x0006059e) popup_image_details_window_t3

0x0e2d,	// (0x000605b2) popup_image_details_window_t4

0x0e48,	// (0x000605cd) popup_image_details_window_t5

0x0004,

0xf6ac,	// (0x0006ee31) popup_image_details_window_t

0x5718,	// (0x00064e9d) bg_calc_paper_pane_ParamLimits

0x03ce,	// (0x0005fb53) grid_highlight_pane_cp013

0x572c,	// (0x00064eb1) list_calc_pane_ParamLimits

0x573e,	// (0x00064ec3) scroll_pane_cp024

0x5746,	// (0x00064ecb) bg_calc_display_pane_ParamLimits

0x5752,	// (0x00064ed7) calc_display_pane_t1_ParamLimits

0x5767,	// (0x00064eec) calc_display_pane_t2_ParamLimits

0x577c,	// (0x00064f01) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0006e891) calc_display_pane_t_ParamLimits

0x589e,	// (0x00065023) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0006e8ae) cell_calc_pane_g

0x58a7,	// (0x0006502c) cell_calc_pane_t1

0x58b6,	// (0x0006503b) grid_highlight_pane_cp02_ParamLimits

0x58cc,	// (0x00065051) toolbar_button_pane_cp01_ParamLimits

0x58cc,	// (0x00065051) toolbar_button_pane_cp01

0x8937,	// (0x000680bc) temp_image_control_pane_ParamLimits

0x8937,	// (0x000680bc) temp_image_control_pane

0x0aed,	// (0x00060272) main_mp3_pane

0x0e62,	// (0x000605e7) temp_image_control_pane_g1_ParamLimits

0x0e62,	// (0x000605e7) temp_image_control_pane_g1

0x0e70,	// (0x000605f5) temp_image_control_pane_g2_ParamLimits

0x0e70,	// (0x000605f5) temp_image_control_pane_g2

0x0e82,	// (0x00060607) temp_image_control_pane_g3_ParamLimits

0x0e82,	// (0x00060607) temp_image_control_pane_g3

0x975b,	// (0x00068ee0) temp_image_control_pane_g4_ParamLimits

0x975b,	// (0x00068ee0) temp_image_control_pane_g4

0x0003,

0xf6b7,	// (0x0006ee3c) temp_image_control_pane_g_ParamLimits

0xf6b7,	// (0x0006ee3c) temp_image_control_pane_g

0x0e62,	// (0x000605e7) main_mp3_pane_g1

0x976c,	// (0x00068ef1) main_mp3_pane_g2

0x0007,

0xf6c0,	// (0x0006ee45) main_mp3_pane_g

0x0eb7,	// (0x0006063c) main_mp3_pane_t1

0x5577,	// (0x00064cfc) main_camera_pane_g8_ParamLimits

0x5577,	// (0x00064cfc) main_camera_pane_g8

0x6144,	// (0x000658c9) main_video_pane_g7_ParamLimits

0x6144,	// (0x000658c9) main_video_pane_g7

0x6043,	// (0x000657c8) main_camera2_pane_t7_ParamLimits

0x6043,	// (0x000657c8) main_camera2_pane_t7

0x677f,	// (0x00065f04) scroll_pane_cp025_ParamLimits

0x677f,	// (0x00065f04) scroll_pane_cp025

0x6793,	// (0x00065f18) scroll_pane_cp026_ParamLimits

0x6793,	// (0x00065f18) scroll_pane_cp026

0x67a2,	// (0x00065f27) wml_content_pane_ParamLimits

0x03ce,	// (0x0005fb53) main_touch_calib_pane

0x9810,	// (0x00068f95) main_touch_calib_pane_g1

0x981c,	// (0x00068fa1) main_touch_calib_pane_g2

0x9828,	// (0x00068fad) main_touch_calib_pane_g3

0x9834,	// (0x00068fb9) main_touch_calib_pane_g4

0x0003,

0xf6de,	// (0x0006ee63) main_touch_calib_pane_g

0x9840,	// (0x00068fc5) main_touch_calib_pane_t1

0x9859,	// (0x00068fde) main_touch_calib_pane_t2

0x0004,

0xf6e7,	// (0x0006ee6c) main_touch_calib_pane_t

0x7ffd,	// (0x00067782) mup_progress_pane_cp02

0x8032,	// (0x000677b7) navi_pane_g1

0x80ed,	// (0x00067872) navi_pane_mp_t3

0x0aed,	// (0x00060272) main_mp3_pane_ParamLimits

0x9482,	// (0x00068c07) navi_pane_ParamLimits

0x0e62,	// (0x000605e7) main_mp3_pane_g1_ParamLimits

0x976c,	// (0x00068ef1) main_mp3_pane_g2_ParamLimits

0x9778,	// (0x00068efd) main_mp3_pane_g3_ParamLimits

0x9778,	// (0x00068efd) main_mp3_pane_g3

0x9784,	// (0x00068f09) main_mp3_pane_g4_ParamLimits

0x9784,	// (0x00068f09) main_mp3_pane_g4

0x5569,	// (0x00064cee) main_mp3_pane_g5_ParamLimits

0x5569,	// (0x00064cee) main_mp3_pane_g5

0x0e92,	// (0x00060617) main_mp3_pane_g6_ParamLimits

0x0e92,	// (0x00060617) main_mp3_pane_g6

0x0e9f,	// (0x00060624) main_mp3_pane_g7_ParamLimits

0x0e9f,	// (0x00060624) main_mp3_pane_g7

0x0eab,	// (0x00060630) main_mp3_pane_g8_ParamLimits

0x0eab,	// (0x00060630) main_mp3_pane_g8

0xf6c0,	// (0x0006ee45) main_mp3_pane_g_ParamLimits

0x9790,	// (0x00068f15) main_mp3_pane_t2

0x97a0,	// (0x00068f25) main_mp3_pane_t3

0x0ec5,	// (0x0006064a) main_mp3_pane_t4

0x0ed3,	// (0x00060658) main_mp3_pane_t5

0x0005,

0xf6d1,	// (0x0006ee56) main_mp3_pane_t

0x0ee1,	// (0x00060666) mup_progress_pane_cp01

0x5241,	// (0x000649c6) aid_zoom_text_secondary2

0xef51,	// (0x0006e6d6) list_cale_ev2_pane

0xef59,	// (0x0006e6de) scroll_pane_cp023_ParamLimits

0x98b4,	// (0x00069039) field_cale_ev2_pane_ParamLimits

0x98b4,	// (0x00069039) field_cale_ev2_pane

0x98dd,	// (0x00069062) field_cale_ev2_pane_g1_ParamLimits

0x98dd,	// (0x00069062) field_cale_ev2_pane_g1

0x98e9,	// (0x0006906e) field_cale_ev2_pane_g2_ParamLimits

0x98e9,	// (0x0006906e) field_cale_ev2_pane_g2

0x9901,	// (0x00069086) field_cale_ev2_pane_g3_ParamLimits

0x9901,	// (0x00069086) field_cale_ev2_pane_g3

0x0003,

0xf6f2,	// (0x0006ee77) field_cale_ev2_pane_g_ParamLimits

0xf6f2,	// (0x0006ee77) field_cale_ev2_pane_g

0x466c,	// (0x00063df1) field_cale_ev2_pane_t1_ParamLimits

0x466c,	// (0x00063df1) field_cale_ev2_pane_t1

0x4683,	// (0x00063e08) field_cale_ev2_pane_t2_ParamLimits

0x4683,	// (0x00063e08) field_cale_ev2_pane_t2

0x0001,

0xf6fb,	// (0x0006ee80) field_cale_ev2_pane_t_ParamLimits

0xf6fb,	// (0x0006ee80) field_cale_ev2_pane_t

0x8688,	// (0x00067e0d) main_postcard_pane_g5_ParamLimits

0x8688,	// (0x00067e0d) main_postcard_pane_g5

0x8696,	// (0x00067e1b) main_postcard_pane_g6_ParamLimits

0x8696,	// (0x00067e1b) main_postcard_pane_g6

0x0b46,	// (0x000602cb) camera2_autofocus_pane_cp_ParamLimits

0x0b46,	// (0x000602cb) camera2_autofocus_pane_cp

0x0aed,	// (0x00060272) main_mup3_pane

0x9964,	// (0x000690e9) main_mup3_pane_g1_ParamLimits

0x9964,	// (0x000690e9) main_mup3_pane_g1

0x9985,	// (0x0006910a) main_mup3_pane_g2_ParamLimits

0x9985,	// (0x0006910a) main_mup3_pane_g2

0x99fd,	// (0x00069182) main_mup3_pane_g3_ParamLimits

0x99fd,	// (0x00069182) main_mup3_pane_g3

0x9a40,	// (0x000691c5) main_mup3_pane_g4_ParamLimits

0x9a40,	// (0x000691c5) main_mup3_pane_g4

0x9a83,	// (0x00069208) main_mup3_pane_g5_ParamLimits

0x9a83,	// (0x00069208) main_mup3_pane_g5

0x9ac6,	// (0x0006924b) main_mup3_pane_g6_ParamLimits

0x9ac6,	// (0x0006924b) main_mup3_pane_g6

0x5577,	// (0x00064cfc) main_mup3_pane_g7_ParamLimits

0x5577,	// (0x00064cfc) main_mup3_pane_g7

0x0007,

0xf70b,	// (0x0006ee90) main_mup3_pane_g_ParamLimits

0xf70b,	// (0x0006ee90) main_mup3_pane_g

0x9b3c,	// (0x000692c1) main_mup3_pane_t1_ParamLimits

0x9b3c,	// (0x000692c1) main_mup3_pane_t1

0x9bab,	// (0x00069330) main_mup3_pane_t2_ParamLimits

0x9bab,	// (0x00069330) main_mup3_pane_t2

0x9c74,	// (0x000693f9) main_mup3_pane_t4_ParamLimits

0x9c74,	// (0x000693f9) main_mup3_pane_t4

0x9cc2,	// (0x00069447) main_mup3_pane_t5_ParamLimits

0x9cc2,	// (0x00069447) main_mup3_pane_t5

0x9d72,	// (0x000694f7) main_mup3_pane_t6_ParamLimits

0x9d72,	// (0x000694f7) main_mup3_pane_t6

0x0005,

0xf71c,	// (0x0006eea1) main_mup3_pane_t_ParamLimits

0xf71c,	// (0x0006eea1) main_mup3_pane_t

0x9e1e,	// (0x000695a3) mup3_progress_pane_ParamLimits

0x9e1e,	// (0x000695a3) mup3_progress_pane

0x9e9c,	// (0x00069621) popup_mup3_control_window_ParamLimits

0x9e9c,	// (0x00069621) popup_mup3_control_window

0x0f31,	// (0x000606b6) popup_mup3_text_window

0x9eb5,	// (0x0006963a) mup3_progress_pane_t1

0x9ed4,	// (0x00069659) mup3_progress_pane_t2

0x0f39,	// (0x000606be) mup3_progress_pane_t3

0x0002,

0xf729,	// (0x0006eeae) mup3_progress_pane_t

0x0f56,	// (0x000606db) mup_progress_pane_cp03

0x03ce,	// (0x0005fb53) bg_tb_trans_pane_cp04

0x9ef3,	// (0x00069678) mup3_volume_pane

0x9efb,	// (0x00069680) popup_mup3_control_window_g1

0x9f04,	// (0x00069689) mup3_volume_pane_g1

0x9f0d,	// (0x00069692) mup3_volume_pane_g2

0x9f16,	// (0x0006969b) mup3_volume_pane_g3

0x0002,

0xf730,	// (0x0006eeb5) mup3_volume_pane_g

0x03ce,	// (0x0005fb53) bg_tb_trans_pane_cp03

0x0f66,	// (0x000606eb) popup_mup3_text_window_g1

0x0f6e,	// (0x000606f3) popup_mup3_text_window_t1

0x5867,	// (0x00064fec) list_calc_item_pane_g1_ParamLimits

0xec42,	// (0x0006e3c7) mup_volume_pane_cp_g1

0x9872,	// (0x00068ff7) main_touch_calib_pane_t3

0x9888,	// (0x0006900d) main_touch_calib_pane_t4

0x989e,	// (0x00069023) main_touch_calib_pane_t5

0x51f9,	// (0x0006497e) aid_cell_size_toolbar2

0x5201,	// (0x00064986) aid_popup3_width_pane

0x4557,	// (0x00063cdc) aid_zoom_text_msg_primary

0x6018,	// (0x0006579d) vorec_t7

0x57bb,	// (0x00064f40) bg_calc_paper_pane_g1_ParamLimits

0x57c7,	// (0x00064f4c) bg_calc_paper_pane_g2_ParamLimits

0x57d3,	// (0x00064f58) bg_calc_paper_pane_g3_ParamLimits

0x57df,	// (0x00064f64) bg_calc_paper_pane_g4_ParamLimits

0x57eb,	// (0x00064f70) bg_calc_paper_pane_g5_ParamLimits

0x57f7,	// (0x00064f7c) bg_calc_paper_pane_g6_ParamLimits

0x5808,	// (0x00064f8d) bg_calc_paper_pane_g7_ParamLimits

0x5819,	// (0x00064f9e) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0006e898) bg_calc_paper_pane_g_ParamLimits

0x582a,	// (0x00064faf) calc_bg_paper_pane_g9_ParamLimits

0x0b46,	// (0x000602cb) image_qvga_pane_ParamLimits

0x0b46,	// (0x000602cb) image_qvga_pane

0x0acb,	// (0x00060250) bg_popup_sub_pane_cp04_ParamLimits

0x87fd,	// (0x00067f82) popup_mup_playback_window_g1_ParamLimits

0x8809,	// (0x00067f8e) popup_mup_playback_window_t1_ParamLimits

0x881e,	// (0x00067fa3) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x0006ebfb) popup_mup_playback_window_t_ParamLimits

0x5569,	// (0x00064cee) main_mup2_pane_g3_ParamLimits

0x5569,	// (0x00064cee) main_mup2_pane_g3

0x63a0,	// (0x00065b25) popup_toolbar_window_cp04

0x8f2a,	// (0x000686af) popup_call2_audio_second_window_g3_ParamLimits

0x8f2a,	// (0x000686af) popup_call2_audio_second_window_g3

0xe185,	// (0x0006d90a) popup_call2_audio_first_window_g4_ParamLimits

0xe185,	// (0x0006d90a) popup_call2_audio_first_window_g4

0xe7ac,	// (0x0006df31) popup_call2_audio_in_window_g4_ParamLimits

0xe7ac,	// (0x0006df31) popup_call2_audio_in_window_g4

0x8833,	// (0x00067fb8) aid_area_sk_bg_cut_ParamLimits

0x8833,	// (0x00067fb8) aid_area_sk_bg_cut

0x8840,	// (0x00067fc5) aid_area_sk_bg_cut_2_ParamLimits

0x8840,	// (0x00067fc5) aid_area_sk_bg_cut_2

0x03ce,	// (0x0005fb53) aid_placing_details_win

0x03ce,	// (0x0005fb53) aid_placing_details_win_2

0x5569,	// (0x00064cee) camera2_autofocus_pane_g1_ParamLimits

0x544f,	// (0x00064bd4) popup_fixed_preview_cale_window_ParamLimits

0x544f,	// (0x00064bd4) popup_fixed_preview_cale_window

0x81a0,	// (0x00067925) navi_slider_pane_g3

0x81a9,	// (0x0006792e) navi_slider_pane_g4

0x81b2,	// (0x00067937) navi_slider_pane_g5

0x81a0,	// (0x00067925) navi_slider_pane_g6

0x81bb,	// (0x00067940) navi_slider_pane_g7

0x84b1,	// (0x00067c36) mup_scale_pane_g3

0x84ba,	// (0x00067c3f) mup_scale_pane_g4

0x84c3,	// (0x00067c48) mup_scale_pane_g5

0x84cc,	// (0x00067c51) mup_scale_pane_g6

0x84d5,	// (0x00067c5a) mup_scale_pane_g7

0x618c,	// (0x00065911) cams2_slider_pane_g3

0x618c,	// (0x00065911) cams2_slider_pane_g4

0x618c,	// (0x00065911) cams2_slider_pane_g5

0x618c,	// (0x00065911) cams2_slider_pane_g6

0x618c,	// (0x00065911) cams2_slider_pane_g7

0x618c,	// (0x00065911) camera2_autofocus_pane_cp_g1

0xea82,	// (0x0006e207) bg_popup_preview_window_pane_cp02_ParamLimits

0xea82,	// (0x0006e207) bg_popup_preview_window_pane_cp02

0x0f7c,	// (0x00060701) list_fp_cale_pane_ParamLimits

0x0f7c,	// (0x00060701) list_fp_cale_pane

0x0f88,	// (0x0006070d) popup_fixed_preview_cale_window_t1_ParamLimits

0x0f88,	// (0x0006070d) popup_fixed_preview_cale_window_t1

0x9f1f,	// (0x000696a4) popup_fixed_preview_cale_window_t2_ParamLimits

0x9f1f,	// (0x000696a4) popup_fixed_preview_cale_window_t2

0x9f34,	// (0x000696b9) popup_fixed_preview_cale_window_t3_ParamLimits

0x9f34,	// (0x000696b9) popup_fixed_preview_cale_window_t3

0x0002,

0xf737,	// (0x0006eebc) popup_fixed_preview_cale_window_t_ParamLimits

0xf737,	// (0x0006eebc) popup_fixed_preview_cale_window_t

0x9f49,	// (0x000696ce) list_single_fp_cale_pane_ParamLimits

0x9f49,	// (0x000696ce) list_single_fp_cale_pane

0x0fa6,	// (0x0006072b) list_single_fp_cale_pane_g1_ParamLimits

0x0fa6,	// (0x0006072b) list_single_fp_cale_pane_g1

0x0fb2,	// (0x00060737) list_single_fp_cale_pane_g2_ParamLimits

0x0fb2,	// (0x00060737) list_single_fp_cale_pane_g2

0x0002,

0xf73e,	// (0x0006eec3) list_single_fp_cale_pane_g_ParamLimits

0xf73e,	// (0x0006eec3) list_single_fp_cale_pane_g

0x0fcb,	// (0x00060750) list_single_fp_cale_pane_t1_ParamLimits

0x0fcb,	// (0x00060750) list_single_fp_cale_pane_t1

0x0fdd,	// (0x00060762) list_single_fp_cale_pane_t2_ParamLimits

0x0fdd,	// (0x00060762) list_single_fp_cale_pane_t2

0x0001,

0xf745,	// (0x0006eeca) list_single_fp_cale_pane_t_ParamLimits

0xf745,	// (0x0006eeca) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x03ce,	// (0x0005fb53) main_dialer_pane

0x03ce,	// (0x0005fb53) aid_cell_size_keypad

0x03ce,	// (0x0005fb53) dialer_ne_pane

0x03ce,	// (0x0005fb53) grid_dialer_command_1_pane

0x03ce,	// (0x0005fb53) grid_dialer_command_2_pane

0x03ce,	// (0x0005fb53) grid_dialer_keypad_pane

0xde8c,	// (0x0006d611) bg_popup_call_pane_cp06_ParamLimits

0xde8c,	// (0x0006d611) bg_popup_call_pane_cp06

0xde8c,	// (0x0006d611) dialer_ne_clear_pane_ParamLimits

0xde8c,	// (0x0006d611) dialer_ne_clear_pane

0x618c,	// (0x00065911) dialer_ne_pane_g1

0x6043,	// (0x000657c8) dialer_ne_pane_t1_ParamLimits

0x6043,	// (0x000657c8) dialer_ne_pane_t1

0x1229,	// (0x000609ae) dialer_ne_pane_t2_ParamLimits

0x1229,	// (0x000609ae) dialer_ne_pane_t2

0x9f5c,	// (0x000696e1) dialer_ne_pane_t3_ParamLimits

0x9f5c,	// (0x000696e1) dialer_ne_pane_t3

0x0002,

0xf74a,	// (0x0006eecf) dialer_ne_pane_t_ParamLimits

0xf74a,	// (0x0006eecf) dialer_ne_pane_t

0x9f5c,	// (0x000696e1) dialer_ne_pane_t3_copy1_ParamLimits

0x9f5c,	// (0x000696e1) dialer_ne_pane_t3_copy1

0x1010,	// (0x00060795) cell_dialer_keypad_pane_ParamLimits

0x1010,	// (0x00060795) cell_dialer_keypad_pane

0x0aed,	// (0x00060272) cell_dialer_command_1_pane_ParamLimits

0x0aed,	// (0x00060272) cell_dialer_command_1_pane

0x1027,	// (0x000607ac) cell_dialer_command_2_pane_ParamLimits

0x1027,	// (0x000607ac) cell_dialer_command_2_pane

0x0aed,	// (0x00060272) bg_button_pane_cp02_ParamLimits

0x0aed,	// (0x00060272) bg_button_pane_cp02

0x5569,	// (0x00064cee) cell_dialer_keypad_pane_g1_ParamLimits

0x5569,	// (0x00064cee) cell_dialer_keypad_pane_g1

0x0aed,	// (0x00060272) bg_button_pane_cp03_ParamLimits

0x0aed,	// (0x00060272) bg_button_pane_cp03

0x5569,	// (0x00064cee) cell_dialer_command_1_pane_g1_ParamLimits

0x5569,	// (0x00064cee) cell_dialer_command_1_pane_g1

0x03ce,	// (0x0005fb53) bg_button_pane_cp04

0x618c,	// (0x00065911) cell_dialer_command_2_pane_g1

0x03ce,	// (0x0005fb53) bg_button_pane_cp06

0x618c,	// (0x00065911) dialer_ne_clear_pane_g1

0x803e,	// (0x000677c3) navi_pane_g2

0x806c,	// (0x000677f1) navi_pane_g3

0x0002,

0xf379,	// (0x0006eafe) navi_pane_g

0x80fb,	// (0x00067880) navi_pane_mv_g2

0x8122,	// (0x000678a7) navi_pane_mv_g5

0x812a,	// (0x000678af) navi_pane_mv_t1

0x5746,	// (0x00064ecb) main_clock2_pane

0x0b46,	// (0x000602cb) main_clock2_list_pane_ParamLimits

0x0b46,	// (0x000602cb) main_clock2_list_pane

0x9fd2,	// (0x00069757) main_clock2_pane_t1_ParamLimits

0x9fd2,	// (0x00069757) main_clock2_pane_t1

0xa000,	// (0x00069785) main_clock2_pane_t2_ParamLimits

0xa000,	// (0x00069785) main_clock2_pane_t2

0x0004,

0xf756,	// (0x0006eedb) main_clock2_pane_t_ParamLimits

0xf756,	// (0x0006eedb) main_clock2_pane_t

0xa065,	// (0x000697ea) popup_clock_analogue_window_cp03_ParamLimits

0xa065,	// (0x000697ea) popup_clock_analogue_window_cp03

0xa083,	// (0x00069808) popup_clock_digital_window_cp02_ParamLimits

0xa083,	// (0x00069808) popup_clock_digital_window_cp02

0xa0f8,	// (0x0006987d) main_clock2_list_single_pane_ParamLimits

0xa0f8,	// (0x0006987d) main_clock2_list_single_pane

0x5fce,	// (0x00065753) list_highlight_pane_cp05

0x106e,	// (0x000607f3) main_clock2_list_single_pane_t1

0x63a0,	// (0x00065b25) popup_toolbar_window_cp04_ParamLimits

0x5577,	// (0x00064cfc) camera2_autofocus_pane_g2_ParamLimits

0x5577,	// (0x00064cfc) camera2_autofocus_pane_g2

0x5577,	// (0x00064cfc) camera2_autofocus_pane_g3_ParamLimits

0x5577,	// (0x00064cfc) camera2_autofocus_pane_g3

0x5577,	// (0x00064cfc) camera2_autofocus_pane_g4_ParamLimits

0x5577,	// (0x00064cfc) camera2_autofocus_pane_g4

0x5577,	// (0x00064cfc) camera2_autofocus_pane_g5_ParamLimits

0x5577,	// (0x00064cfc) camera2_autofocus_pane_g5

0x0004,

0xf69a,	// (0x0006ee1f) camera2_autofocus_pane_g_ParamLimits

0xf69a,	// (0x0006ee1f) camera2_autofocus_pane_g

0x9925,	// (0x000690aa) camera2_autofocus_pane_cp_g2

0x992d,	// (0x000690b2) camera2_autofocus_pane_cp_g3

0x9935,	// (0x000690ba) camera2_autofocus_pane_cp_g4

0x993d,	// (0x000690c2) camera2_autofocus_pane_cp_g5

0x0004,

0xf700,	// (0x0006ee85) camera2_autofocus_pane_cp_g

0x03ce,	// (0x0005fb53) popup_dialer_spcha_window

0x03ce,	// (0x0005fb53) bg_popup_sub_pane_cp07

0x03ce,	// (0x0005fb53) list_spcha_pane

0x107c,	// (0x00060801) list_single_spcha_pane_ParamLimits

0x107c,	// (0x00060801) list_single_spcha_pane

0x03ce,	// (0x0005fb53) list_highlight_pane_cp06

0x79c9,	// (0x0006714e) list_single_spcha_pane_t1

0xe556,	// (0x0006dcdb) popup_call2_audio_out_window_g4_ParamLimits

0xe556,	// (0x0006dcdb) popup_call2_audio_out_window_g4

0x03ce,	// (0x0005fb53) main_imed2_pane

0x93ab,	// (0x00068b30) popup_imed_adjust2_window

0x93be,	// (0x00068b43) popup_imed_trans_window_ParamLimits

0x93be,	// (0x00068b43) popup_imed_trans_window

0xed17,	// (0x0006e49c) popup_blid_sat_info2_window_t1

0xed25,	// (0x0006e4aa) popup_blid_sat_info2_window_t2

0x000a,

0xf62f,	// (0x0006edb4) popup_blid_sat_info2_window_t

0xa1ad,	// (0x00069932) aid_size_cell_colour_35

0xa1c7,	// (0x0006994c) aid_size_cell_colour_112

0xa1de,	// (0x00069963) aid_size_cell_effect

0x0aed,	// (0x00060272) bg_tb_trans_pane_cp02

0xf05f,	// (0x0006e7e4) heading_imed_pane

0xa1f8,	// (0x0006997d) listscroll_imed_pane

0x108e,	// (0x00060813) heading_imed_pane_g1

0x1096,	// (0x0006081b) heading_imed_pane_t1

0x10a4,	// (0x00060829) grid_imed_colour_35_pane_ParamLimits

0x10a4,	// (0x00060829) grid_imed_colour_35_pane

0xa204,	// (0x00069989) grid_imed_effect_pane

0x10bb,	// (0x00060840) list_imed_aspect_pane

0xa214,	// (0x00069999) scroll_pane_cp027_ParamLimits

0xa214,	// (0x00069999) scroll_pane_cp027

0xa220,	// (0x000699a5) cell_imed_effect_pane_ParamLimits

0xa220,	// (0x000699a5) cell_imed_effect_pane

0x10c3,	// (0x00060848) cell_imed_colour_pane_ParamLimits

0x10c3,	// (0x00060848) cell_imed_colour_pane

0x1105,	// (0x0006088a) cell_imed_colour_pane_g1_ParamLimits

0x1105,	// (0x0006088a) cell_imed_colour_pane_g1

0x1116,	// (0x0006089b) hgihlgiht_grid_pane_cp016_ParamLimits

0x1116,	// (0x0006089b) hgihlgiht_grid_pane_cp016

0xa238,	// (0x000699bd) cell_imed_effect_pane_g1

0xa240,	// (0x000699c5) grid_highlight_pane_cp017

0x1127,	// (0x000608ac) list_imed_single_pane_ParamLimits

0x1127,	// (0x000608ac) list_imed_single_pane

0x03ce,	// (0x0005fb53) list_highlight_pane_cp07

0x113c,	// (0x000608c1) list_imed_aspect_pane_comp1_t1

0xea8e,	// (0x0006e213) bg_tb_trans_pane_cp05

0x115e,	// (0x000608e3) popup_imed_adjust2_window_g1

0x1185,	// (0x0006090a) popup_imed_adjust2_window_t1

0x119d,	// (0x00060922) slider_imed_adjust_pane

0x11b1,	// (0x00060936) slider_imed_adjust_pane_g1

0x11c1,	// (0x00060946) slider_imed_adjust_pane_g2

0x11d1,	// (0x00060956) slider_imed_adjust_pane_g3

0x11e2,	// (0x00060967) slider_imed_adjust_pane_g4

0x0003,

0xf773,	// (0x0006eef8) slider_imed_adjust_pane_g

0xa249,	// (0x000699ce) aid_size_cell_clipart2

0xa255,	// (0x000699da) grid_imed_clipart_pane

0x11f3,	// (0x00060978) scroll_pane_cp031

0xa25f,	// (0x000699e4) cell_imed_clipart_pane_ParamLimits

0xa25f,	// (0x000699e4) cell_imed_clipart_pane

0xa281,	// (0x00069a06) cell_imed_clipart_pane_g1

0x03ce,	// (0x0005fb53) grid_highlight_pane_cp014

0x9fb4,	// (0x00069739) main_clock2_pane_g1_ParamLimits

0x9fb4,	// (0x00069739) main_clock2_pane_g1

0xa09f,	// (0x00069824) aid_call2_pane_cp10

0xa0b1,	// (0x00069836) aid_call_pane_cp10

0x7f36,	// (0x000676bb) popup_clock_analogue_window_cp10_g1

0x7f36,	// (0x000676bb) popup_clock_analogue_window_cp10_g2

0xa0c3,	// (0x00069848) popup_clock_analogue_window_cp10_g3

0xa0c3,	// (0x00069848) popup_clock_analogue_window_cp10_g4

0x7f36,	// (0x000676bb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf761,	// (0x0006eee6) popup_clock_analogue_window_cp10_g

0xa0d9,	// (0x0006985e) popup_clock_analogue_window_cp10_t1

0xa10a,	// (0x0006988f) clock_digital_number_pane_cp10_ParamLimits

0xa10a,	// (0x0006988f) clock_digital_number_pane_cp10

0xa124,	// (0x000698a9) clock_digital_number_pane_cp11_ParamLimits

0xa124,	// (0x000698a9) clock_digital_number_pane_cp11

0xa13e,	// (0x000698c3) clock_digital_number_pane_cp12_ParamLimits

0xa13e,	// (0x000698c3) clock_digital_number_pane_cp12

0xa158,	// (0x000698dd) clock_digital_number_pane_cp13_ParamLimits

0xa158,	// (0x000698dd) clock_digital_number_pane_cp13

0xa172,	// (0x000698f7) clock_digital_separator_pane_cp10_ParamLimits

0xa172,	// (0x000698f7) clock_digital_separator_pane_cp10

0xa18c,	// (0x00069911) popup_clock_digital_window_cp02_t1_ParamLimits

0xa18c,	// (0x00069911) popup_clock_digital_window_cp02_t1

0x0ac3,	// (0x00060248) clock_digital_number_pane_cp10_g1

0x0ac3,	// (0x00060248) clock_digital_number_pane_cp10_g2

0x0001,

0xf77c,	// (0x0006ef01) clock_digital_number_pane_cp10_g

0x0ac3,	// (0x00060248) clock_digital_separator_pane_cp10_g1

0x0ac3,	// (0x00060248) clock_digital_separator_pane_g2_cp10

0x8156,	// (0x000678db) navi_pane_vded_g4

0x815f,	// (0x000678e4) navi_pane_vded_g5

0x8168,	// (0x000678ed) navi_pane_vded_t1

0x03ce,	// (0x0005fb53) main_vded_pane

0xa28a,	// (0x00069a0f) main_vded_pane_g1

0xa296,	// (0x00069a1b) main_vded_pane_g2

0xa2a0,	// (0x00069a25) main_vded_pane_g3

0x0002,

0xf781,	// (0x0006ef06) main_vded_pane_g

0xa2aa,	// (0x00069a2f) main_vded_pane_t1

0xa2b8,	// (0x00069a3d) main_vded_pane_t2

0x0001,

0xf788,	// (0x0006ef0d) main_vded_pane_t

0xa2c6,	// (0x00069a4b) vded_slider_pane

0xa2d0,	// (0x00069a55) vded_video_pane

0x11fb,	// (0x00060980) vded_video_pane_g1

0xa2da,	// (0x00069a5f) vded_video_pane_g2

0x618c,	// (0x00065911) vded_video_pane_g3

0x0002,

0xf78d,	// (0x0006ef12) vded_video_pane_g

0x1205,	// (0x0006098a) vded_slider_pane_g1

0xec42,	// (0x0006e3c7) vded_slider_pane_g2

0x120e,	// (0x00060993) vded_slider_pane_g3

0x1217,	// (0x0006099c) vded_slider_pane_g4

0x1220,	// (0x000609a5) vded_slider_pane_g5

0x0004,

0xf794,	// (0x0006ef19) vded_slider_pane_g

0x9e8e,	// (0x00069613) mup3_rocker_pane_ParamLimits

0x9e8e,	// (0x00069613) mup3_rocker_pane

0xa2e3,	// (0x00069a68) mup3_control_keys_pane_g1

0xa2eb,	// (0x00069a70) mup3_control_keys_pane_g2

0xa2f3,	// (0x00069a78) mup3_control_keys_pane_g3

0xa2fb,	// (0x00069a80) mup3_control_keys_pane_g4

0x0003,

0xf79f,	// (0x0006ef24) mup3_control_keys_pane_g

0x5477,	// (0x00064bfc) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5477,	// (0x00064bfc) popup_toolbar2_fixed_window_cp01

0x9ea8,	// (0x0006962d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9ea8,	// (0x0006962d) popup_toolbar2_fixed_window_cp02

0xdeed,	// (0x0006d672) popup_call2_audio_second_window_t4_ParamLimits

0xdeed,	// (0x0006d672) popup_call2_audio_second_window_t4

0xe41b,	// (0x0006dba0) popup_call2_audio_first_window_t6_ParamLimits

0xe41b,	// (0x0006dba0) popup_call2_audio_first_window_t6

0xe659,	// (0x0006ddde) popup_call2_audio_out_window_t6_ParamLimits

0xe659,	// (0x0006ddde) popup_call2_audio_out_window_t6

0x03ce,	// (0x0005fb53) main_vitu_pane

0x0b46,	// (0x000602cb) aid_size_cell_itu_ParamLimits

0x0b46,	// (0x000602cb) aid_size_cell_itu

0x0b46,	// (0x000602cb) bg_popup_window_pane_cp08_ParamLimits

0x0b46,	// (0x000602cb) bg_popup_window_pane_cp08

0x0b46,	// (0x000602cb) field_vitu_entry_pane_ParamLimits

0x0b46,	// (0x000602cb) field_vitu_entry_pane

0x0b46,	// (0x000602cb) grid_vitu_function_pane_ParamLimits

0x0b46,	// (0x000602cb) grid_vitu_function_pane

0x0b46,	// (0x000602cb) grid_vitu_itu_pane_ParamLimits

0x0b46,	// (0x000602cb) grid_vitu_itu_pane

0x0b46,	// (0x000602cb) cell_vitu_itu_pane_ParamLimits

0x0b46,	// (0x000602cb) cell_vitu_itu_pane

0x0b46,	// (0x000602cb) cell_vitu_function_pane_ParamLimits

0x0b46,	// (0x000602cb) cell_vitu_function_pane

0x0aed,	// (0x00060272) bg_popup_sub_pane_cp08_ParamLimits

0x0aed,	// (0x00060272) bg_popup_sub_pane_cp08

0x61e1,	// (0x00065966) field_vitu_entry_pane_t1_ParamLimits

0x61e1,	// (0x00065966) field_vitu_entry_pane_t1

0x1229,	// (0x000609ae) field_vitu_entry_pane_t2_ParamLimits

0x1229,	// (0x000609ae) field_vitu_entry_pane_t2

0x0001,

0xf7a8,	// (0x0006ef2d) field_vitu_entry_pane_t_ParamLimits

0xf7a8,	// (0x0006ef2d) field_vitu_entry_pane_t

0xde8c,	// (0x0006d611) bg_button_pane_cp05_ParamLimits

0xde8c,	// (0x0006d611) bg_button_pane_cp05

0x1246,	// (0x000609cb) cell_vitu_itu_pane_g1

0xeb79,	// (0x0006e2fe) cell_vitu_itu_pane_t1_ParamLimits

0xeb79,	// (0x0006e2fe) cell_vitu_itu_pane_t1

0xeb79,	// (0x0006e2fe) cell_vitu_itu_pane_t2_ParamLimits

0xeb79,	// (0x0006e2fe) cell_vitu_itu_pane_t2

0x0002,

0xf7ad,	// (0x0006ef32) cell_vitu_itu_pane_t_ParamLimits

0xf7ad,	// (0x0006ef32) cell_vitu_itu_pane_t

0x03ce,	// (0x0005fb53) bg_button_pane_cp07

0x618c,	// (0x00065911) cell_vitu_function_pane_g1

0x561f,	// (0x00064da4) main_calc_pane_g1

0x5235,	// (0x000649ba) aid_visual_content_pane

0x03ce,	// (0x0005fb53) main_vradio_pane

0x5577,	// (0x00064cfc) main_vradio_pane_g1_ParamLimits

0x5577,	// (0x00064cfc) main_vradio_pane_g1

0x5577,	// (0x00064cfc) main_vradio_pane_g2_ParamLimits

0x5577,	// (0x00064cfc) main_vradio_pane_g2

0x0001,

0xf7b4,	// (0x0006ef39) main_vradio_pane_g_ParamLimits

0xf7b4,	// (0x0006ef39) main_vradio_pane_g

0x6043,	// (0x000657c8) main_vradio_pane_t1_ParamLimits

0x6043,	// (0x000657c8) main_vradio_pane_t1

0x6043,	// (0x000657c8) main_vradio_pane_t2_ParamLimits

0x6043,	// (0x000657c8) main_vradio_pane_t2

0x6043,	// (0x000657c8) main_vradio_pane_t3_ParamLimits

0x6043,	// (0x000657c8) main_vradio_pane_t3

0x0002,

0xf7b9,	// (0x0006ef3e) main_vradio_pane_t_ParamLimits

0xf7b9,	// (0x0006ef3e) main_vradio_pane_t

0x0b46,	// (0x000602cb) vradio_rocker_control_pane_ParamLimits

0x0b46,	// (0x000602cb) vradio_rocker_control_pane

0x0b46,	// (0x000602cb) vradio_station_info_pane_ParamLimits

0x0b46,	// (0x000602cb) vradio_station_info_pane

0x0aed,	// (0x00060272) vradio_frequency_info_pane_ParamLimits

0x0aed,	// (0x00060272) vradio_frequency_info_pane

0x618c,	// (0x00065911) vradio_station_info_pane_g1

0xeb79,	// (0x0006e2fe) vradio_station_info_pane_t1_ParamLimits

0xeb79,	// (0x0006e2fe) vradio_station_info_pane_t1

0x6043,	// (0x000657c8) vradio_station_info_pane_t2_ParamLimits

0x6043,	// (0x000657c8) vradio_station_info_pane_t2

0x0001,

0xf7c0,	// (0x0006ef45) vradio_station_info_pane_t_ParamLimits

0xf7c0,	// (0x0006ef45) vradio_station_info_pane_t

0x03ce,	// (0x0005fb53) vradio_tuning_pane

0xa30b,	// (0x00069a90) vradio_rocker_control_pane_g1

0x1262,	// (0x000609e7) vradio_rocker_control_pane_g2

0xa313,	// (0x00069a98) vradio_rocker_control_pane_g3

0xa31b,	// (0x00069aa0) vradio_rocker_control_pane_g4

0xa323,	// (0x00069aa8) vradio_rocker_control_pane_g5

0x0004,

0xf7c5,	// (0x0006ef4a) vradio_rocker_control_pane_g

0x618c,	// (0x00065911) vradio_frequency_info_pane_g1

0x61e1,	// (0x00065966) vradio_frequency_info_pane_t1_ParamLimits

0x61e1,	// (0x00065966) vradio_frequency_info_pane_t1

0xa32b,	// (0x00069ab0) vradio_tuning_pane_g1

0xa338,	// (0x00069abd) vradio_tuning_pane_t1

0x527e,	// (0x00064a03) area_side_right_pane_ParamLimits

0x527e,	// (0x00064a03) area_side_right_pane

0xea49,	// (0x0006e1ce) status_small_pane_g1

0xea51,	// (0x0006e1d6) status_small_pane_g2

0xea5a,	// (0x0006e1df) status_small_pane_g3

0xea63,	// (0x0006e1e8) status_small_pane_g4

0x0003,

0xf591,	// (0x0006ed16) status_small_pane_g

0xea6c,	// (0x0006e1f1) status_small_pane_t1

0x03ce,	// (0x0005fb53) main_video3_pane

0x126a,	// (0x000609ef) cams_zoom_vslider_pane

0x1272,	// (0x000609f7) image3_wide_pane_ParamLimits

0x1272,	// (0x000609f7) image3_wide_pane

0x128c,	// (0x00060a11) image3_wide_small_pane

0x1298,	// (0x00060a1d) main_video3_pane_g1_ParamLimits

0x1298,	// (0x00060a1d) main_video3_pane_g1

0x12b4,	// (0x00060a39) main_video3_pane_g2_ParamLimits

0x12b4,	// (0x00060a39) main_video3_pane_g2

0x0001,

0xf7d0,	// (0x0006ef55) main_video3_pane_g_ParamLimits

0xf7d0,	// (0x0006ef55) main_video3_pane_g

0x12d0,	// (0x00060a55) main_video3_pane_t1_ParamLimits

0x12d0,	// (0x00060a55) main_video3_pane_t1

0x12fb,	// (0x00060a80) main_video3_pane_t2_ParamLimits

0x12fb,	// (0x00060a80) main_video3_pane_t2

0x1326,	// (0x00060aab) main_video3_pane_t3_ParamLimits

0x1326,	// (0x00060aab) main_video3_pane_t3

0x0002,

0xf7d5,	// (0x0006ef5a) main_video3_pane_t_ParamLimits

0xf7d5,	// (0x0006ef5a) main_video3_pane_t

0x1353,	// (0x00060ad8) cams_zoom_vslider_pane_g1

0x135c,	// (0x00060ae1) cams_zoom_vslider_pane_g2

0x0001,

0xf7dc,	// (0x0006ef61) cams_zoom_vslider_pane_g

0x1364,	// (0x00060ae9) small_slider_vertical_pane

0x618c,	// (0x00065911) small_slider_vertical_pane_g1

0x618c,	// (0x00065911) small_slider_vertical_pane_g2

0x136c,	// (0x00060af1) small_slider_vertical_pane_g3

0x0002,

0xf7e1,	// (0x0006ef66) small_slider_vertical_pane_g

0x03ce,	// (0x0005fb53) main_hwr_training_pane

0x1375,	// (0x00060afa) hwr_training_instruct_pane_ParamLimits

0x1375,	// (0x00060afa) hwr_training_instruct_pane

0xa347,	// (0x00069acc) hwr_training_navi_pane_ParamLimits

0xa347,	// (0x00069acc) hwr_training_navi_pane

0xa361,	// (0x00069ae6) hwr_training_write_pane_ParamLimits

0xa361,	// (0x00069ae6) hwr_training_write_pane

0x03ce,	// (0x0005fb53) bg_frame_shadow_pane

0x13ac,	// (0x00060b31) hwr_training_write_pane_g1

0x13b4,	// (0x00060b39) hwr_training_write_pane_g2

0x13bc,	// (0x00060b41) hwr_training_write_pane_g3

0x13c4,	// (0x00060b49) hwr_training_write_pane_g4

0x13cc,	// (0x00060b51) hwr_training_write_pane_g5

0x13d4,	// (0x00060b59) hwr_training_write_pane_g6

0x13dc,	// (0x00060b61) hwr_training_write_pane_g7

0x0006,

0xf7e8,	// (0x0006ef6d) hwr_training_write_pane_g

0xa399,	// (0x00069b1e) hwr_training_navi_pane_g1_ParamLimits

0xa399,	// (0x00069b1e) hwr_training_navi_pane_g1

0xa3ab,	// (0x00069b30) hwr_training_navi_pane_g2_ParamLimits

0xa3ab,	// (0x00069b30) hwr_training_navi_pane_g2

0xa3bd,	// (0x00069b42) hwr_training_navi_pane_g3_ParamLimits

0xa3bd,	// (0x00069b42) hwr_training_navi_pane_g3

0xa3cd,	// (0x00069b52) hwr_training_navi_pane_g4_ParamLimits

0xa3cd,	// (0x00069b52) hwr_training_navi_pane_g4

0x0004,

0xf7f7,	// (0x0006ef7c) hwr_training_navi_pane_g_ParamLimits

0xf7f7,	// (0x0006ef7c) hwr_training_navi_pane_g

0xa3e7,	// (0x00069b6c) hwr_training_navi_pane_t1

0xa3f5,	// (0x00069b7a) list_single_hwr_training_instruct_pane_ParamLimits

0xa3f5,	// (0x00069b7a) list_single_hwr_training_instruct_pane

0x1433,	// (0x00060bb8) list_single_hwr_training_instruct_pane_t1

0xee18,	// (0x0006e59d) bg_frame_shadow_pane_g1

0x1442,	// (0x00060bc7) bg_frame_shadow_pane_g2

0x144a,	// (0x00060bcf) bg_frame_shadow_pane_g3

0x1452,	// (0x00060bd7) bg_frame_shadow_pane_g4

0x145a,	// (0x00060bdf) bg_frame_shadow_pane_g5

0x1462,	// (0x00060be7) bg_frame_shadow_pane_g6

0x146a,	// (0x00060bef) bg_frame_shadow_pane_g7

0x59a9,	// (0x0006512e) bg_frame_shadow_pane_g8

0x0007,

0xf802,	// (0x0006ef87) bg_frame_shadow_pane_g

0x03ce,	// (0x0005fb53) main_video_tele_dialer_pane

0xa41a,	// (0x00069b9f) aid_size_cell_video_keypad_ParamLimits

0xa41a,	// (0x00069b9f) aid_size_cell_video_keypad

0xa42a,	// (0x00069baf) grid_video_dialer_keypad_pane_ParamLimits

0xa42a,	// (0x00069baf) grid_video_dialer_keypad_pane

0xa45e,	// (0x00069be3) video_down_pane_cp_ParamLimits

0xa45e,	// (0x00069be3) video_down_pane_cp

0xa488,	// (0x00069c0d) cell_video_dialer_keypad_pane_ParamLimits

0xa488,	// (0x00069c0d) cell_video_dialer_keypad_pane

0x1472,	// (0x00060bf7) bg_button_pane_cp08_ParamLimits

0x1472,	// (0x00060bf7) bg_button_pane_cp08

0xa49d,	// (0x00069c22) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa49d,	// (0x00069c22) cell_video_dialer_keypad_pane_g1

0x9e82,	// (0x00069607) mup3_rocker2_pane_ParamLimits

0x9e82,	// (0x00069607) mup3_rocker2_pane

0x618c,	// (0x00065911) mup3_rocker2_pane_g1

0x930f,	// (0x00068a94) main_dialer2_pane

0x03ce,	// (0x0005fb53) main_mp4_pane

0xa4f2,	// (0x00069c77) main_mp4_pane_g1_ParamLimits

0xa4f2,	// (0x00069c77) main_mp4_pane_g1

0xa500,	// (0x00069c85) main_mp4_pane_g2_ParamLimits

0xa500,	// (0x00069c85) main_mp4_pane_g2

0xa50e,	// (0x00069c93) main_mp4_pane_g3_ParamLimits

0xa50e,	// (0x00069c93) main_mp4_pane_g3

0xa553,	// (0x00069cd8) main_mp4_pane_g4_ParamLimits

0xa553,	// (0x00069cd8) main_mp4_pane_g4

0xa581,	// (0x00069d06) main_mp4_pane_g5_ParamLimits

0xa581,	// (0x00069d06) main_mp4_pane_g5

0x0007,

0xf822,	// (0x0006efa7) main_mp4_pane_g_ParamLimits

0xf822,	// (0x0006efa7) main_mp4_pane_g

0xa5f5,	// (0x00069d7a) main_mp4_pane_t1_ParamLimits

0xa5f5,	// (0x00069d7a) main_mp4_pane_t1

0xa651,	// (0x00069dd6) main_mp4_pane_t2_ParamLimits

0xa651,	// (0x00069dd6) main_mp4_pane_t2

0x15fa,	// (0x00060d7f) main_mp4_pane_t3_ParamLimits

0x15fa,	// (0x00060d7f) main_mp4_pane_t3

0xa6a3,	// (0x00069e28) main_mp4_pane_t4_ParamLimits

0xa6a3,	// (0x00069e28) main_mp4_pane_t4

0x0003,

0xf833,	// (0x0006efb8) main_mp4_pane_t_ParamLimits

0xf833,	// (0x0006efb8) main_mp4_pane_t

0xa6e7,	// (0x00069e6c) mp4_progress_pane_ParamLimits

0xa6e7,	// (0x00069e6c) mp4_progress_pane

0xa731,	// (0x00069eb6) mp4_rocker_pane_ParamLimits

0xa731,	// (0x00069eb6) mp4_rocker_pane

0x16d6,	// (0x00060e5b) mp4_progress_pane_t1

0x16ef,	// (0x00060e74) mp4_progress_pane_t2

0x0001,

0xf83c,	// (0x0006efc1) mp4_progress_pane_t

0x1708,	// (0x00060e8d) mup_progress_pane_cp04

0x618c,	// (0x00065911) mp4_rocker_pane_g1

0xa751,	// (0x00069ed6) aid_cell_size_keypad2_ParamLimits

0xa751,	// (0x00069ed6) aid_cell_size_keypad2

0xa761,	// (0x00069ee6) dialer2_ne_pane_ParamLimits

0xa761,	// (0x00069ee6) dialer2_ne_pane

0xa76f,	// (0x00069ef4) grid_dialer2_keypad_pane_ParamLimits

0xa76f,	// (0x00069ef4) grid_dialer2_keypad_pane

0xf06b,	// (0x0006e7f0) bg_popup_call_pane_cp07_ParamLimits

0xf06b,	// (0x0006e7f0) bg_popup_call_pane_cp07

0xa77f,	// (0x00069f04) dialer2_ne_pane_t1_ParamLimits

0xa77f,	// (0x00069f04) dialer2_ne_pane_t1

0xa7a4,	// (0x00069f29) cell_dialer2_keypad_pane_ParamLimits

0xa7a4,	// (0x00069f29) cell_dialer2_keypad_pane

0x172d,	// (0x00060eb2) bg_button_pane_pane_cp04_ParamLimits

0x172d,	// (0x00060eb2) bg_button_pane_pane_cp04

0xa7b9,	// (0x00069f3e) cell_dialer2_keypad_pane_g1_ParamLimits

0xa7b9,	// (0x00069f3e) cell_dialer2_keypad_pane_g1

0x6250,	// (0x000659d5) aid_placing_vt_set_content_ParamLimits

0x6250,	// (0x000659d5) aid_placing_vt_set_content

0x627c,	// (0x00065a01) aid_placing_vt_set_title_ParamLimits

0x627c,	// (0x00065a01) aid_placing_vt_set_title

0x03ce,	// (0x0005fb53) main_image3_pane

0xa853,	// (0x00069fd8) area_side_right_pane_cp01_ParamLimits

0xa853,	// (0x00069fd8) area_side_right_pane_cp01

0x5585,	// (0x00064d0a) main_image3_pane_g1_ParamLimits

0x5585,	// (0x00064d0a) main_image3_pane_g1

0xa880,	// (0x0006a005) main_image3_pane_g2_ParamLimits

0xa880,	// (0x0006a005) main_image3_pane_g2

0xa899,	// (0x0006a01e) main_image3_pane_g3_ParamLimits

0xa899,	// (0x0006a01e) main_image3_pane_g3

0xa8b2,	// (0x0006a037) main_image3_pane_g4_ParamLimits

0xa8b2,	// (0x0006a037) main_image3_pane_g4

0x0003,

0xf84b,	// (0x0006efd0) main_image3_pane_g_ParamLimits

0xf84b,	// (0x0006efd0) main_image3_pane_g

0xa8cb,	// (0x0006a050) main_image3_pane_t1_ParamLimits

0xa8cb,	// (0x0006a050) main_image3_pane_t1

0xa8f0,	// (0x0006a075) main_image3_pane_t2_ParamLimits

0xa8f0,	// (0x0006a075) main_image3_pane_t2

0xa90f,	// (0x0006a094) main_image3_pane_t3_ParamLimits

0xa90f,	// (0x0006a094) main_image3_pane_t3

0x0003,

0xf854,	// (0x0006efd9) main_image3_pane_t_ParamLimits

0xf854,	// (0x0006efd9) main_image3_pane_t

0x0b46,	// (0x000602cb) grid_sctrl_middle_pane_cp01_ParamLimits

0x0b46,	// (0x000602cb) grid_sctrl_middle_pane_cp01

0xa970,	// (0x0006a0f5) cell_sctrl_middle_pane_cp01_ParamLimits

0xa970,	// (0x0006a0f5) cell_sctrl_middle_pane_cp01

0xa981,	// (0x0006a106) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa981,	// (0x0006a106) cell_sctrl_middle_pane_cp01_g1

0x03ce,	// (0x0005fb53) main_call4_pane

0xa98e,	// (0x0006a113) aid_size_button_call4_ParamLimits

0xa98e,	// (0x0006a113) aid_size_button_call4

0xa9c4,	// (0x0006a149) call4_windows_pane_ParamLimits

0xa9c4,	// (0x0006a149) call4_windows_pane

0xa9d9,	// (0x0006a15e) grid_call4_button_pane_ParamLimits

0xa9d9,	// (0x0006a15e) grid_call4_button_pane

0xaa07,	// (0x0006a18c) call4_windows_conf_pane

0xaa1e,	// (0x0006a1a3) popup_call4_audio_first_window_ParamLimits

0xaa1e,	// (0x0006a1a3) popup_call4_audio_first_window

0xaa6e,	// (0x0006a1f3) popup_call4_audio_second_window_ParamLimits

0xaa6e,	// (0x0006a1f3) popup_call4_audio_second_window

0xaa87,	// (0x0006a20c) popup_call4_audio_wait_window_ParamLimits

0xaa87,	// (0x0006a20c) popup_call4_audio_wait_window

0xaa95,	// (0x0006a21a) cell_call4_button_pane_ParamLimits

0xaa95,	// (0x0006a21a) cell_call4_button_pane

0xaab8,	// (0x0006a23d) bg_button_pane_cp09_ParamLimits

0xaab8,	// (0x0006a23d) bg_button_pane_cp09

0xaac4,	// (0x0006a249) cell_call4_button_pane_g1_ParamLimits

0xaac4,	// (0x0006a249) cell_call4_button_pane_g1

0xaad1,	// (0x0006a256) cell_call4_button_pane_t1_ParamLimits

0xaad1,	// (0x0006a256) cell_call4_button_pane_t1

0x1773,	// (0x00060ef8) popup_call4_audio_conf_window_ParamLimits

0x1773,	// (0x00060ef8) popup_call4_audio_conf_window

0x9eb5,	// (0x0006963a) mup3_progress_pane_t1_ParamLimits

0x9ed4,	// (0x00069659) mup3_progress_pane_t2_ParamLimits

0x0f39,	// (0x000606be) mup3_progress_pane_t3_ParamLimits

0xf729,	// (0x0006eeae) mup3_progress_pane_t_ParamLimits

0x0f56,	// (0x000606db) mup_progress_pane_cp03_ParamLimits

0xa303,	// (0x00069a88) mup3_control_keys_pane_g4_copy1

0xa715,	// (0x00069e9a) mp4_rocker2_pane_ParamLimits

0xa715,	// (0x00069e9a) mp4_rocker2_pane

0x178f,	// (0x00060f14) mp4_rocker2_pane_g1

0x1787,	// (0x00060f0c) mp4_rocker2_pane_g2

0xab15,	// (0x0006a29a) mp4_rocker2_pane_g3

0xab1d,	// (0x0006a2a2) mp4_rocker2_pane_g4

0xab25,	// (0x0006a2aa) mp4_rocker2_pane_g5

0x0004,

0xf85d,	// (0x0006efe2) mp4_rocker2_pane_g

0x03ce,	// (0x0005fb53) main_camera4_pane

0x03ce,	// (0x0005fb53) main_video4_pane

0xa43a,	// (0x00069bbf) main_video_tele_dialer_pane_t1_ParamLimits

0xa43a,	// (0x00069bbf) main_video_tele_dialer_pane_t1

0xa44c,	// (0x00069bd1) main_video_tele_dialer_pane_t2_ParamLimits

0xa44c,	// (0x00069bd1) main_video_tele_dialer_pane_t2

0x0001,

0xf813,	// (0x0006ef98) main_video_tele_dialer_pane_t_ParamLimits

0xf813,	// (0x0006ef98) main_video_tele_dialer_pane_t

0xab45,	// (0x0006a2ca) cam4_autofocus_pane_ParamLimits

0xab45,	// (0x0006a2ca) cam4_autofocus_pane

0xab5f,	// (0x0006a2e4) cam4_image_uncrop_pane_ParamLimits

0xab5f,	// (0x0006a2e4) cam4_image_uncrop_pane

0xab76,	// (0x0006a2fb) cam4_indicators_pane_ParamLimits

0xab76,	// (0x0006a2fb) cam4_indicators_pane

0xab92,	// (0x0006a317) main_camera4_pane_g1_ParamLimits

0xab92,	// (0x0006a317) main_camera4_pane_g1

0xab9e,	// (0x0006a323) main_camera4_pane_g2_ParamLimits

0xab9e,	// (0x0006a323) main_camera4_pane_g2

0xab9e,	// (0x0006a323) main_camera4_pane_g3_ParamLimits

0xab9e,	// (0x0006a323) main_camera4_pane_g3

0xabaa,	// (0x0006a32f) main_camera4_pane_g4_ParamLimits

0xabaa,	// (0x0006a32f) main_camera4_pane_g4

0xabb6,	// (0x0006a33b) main_camera4_pane_g5_ParamLimits

0xabb6,	// (0x0006a33b) main_camera4_pane_g5

0x0005,

0xf868,	// (0x0006efed) main_camera4_pane_g_ParamLimits

0xf868,	// (0x0006efed) main_camera4_pane_g

0xabd0,	// (0x0006a355) main_camera4_pane_t1_ParamLimits

0xabd0,	// (0x0006a355) main_camera4_pane_t1

0x5569,	// (0x00064cee) bg_tb_trans_pane_cp06

0xac20,	// (0x0006a3a5) cam4_indicators_pane_g1

0xac31,	// (0x0006a3b6) cam4_indicators_pane_g2

0x0002,

0xf883,	// (0x0006f008) cam4_indicators_pane_g

0xac4f,	// (0x0006a3d4) cam4_indicators_pane_t1

0xac79,	// (0x0006a3fe) main_video4_pane_g1_ParamLimits

0xac79,	// (0x0006a3fe) main_video4_pane_g1

0xac85,	// (0x0006a40a) main_video4_pane_g2_ParamLimits

0xac85,	// (0x0006a40a) main_video4_pane_g2

0xac91,	// (0x0006a416) main_video4_pane_g3_ParamLimits

0xac91,	// (0x0006a416) main_video4_pane_g3

0xac9d,	// (0x0006a422) main_video4_pane_g4_ParamLimits

0xac9d,	// (0x0006a422) main_video4_pane_g4

0x0004,

0xf88a,	// (0x0006f00f) main_video4_pane_g_ParamLimits

0xf88a,	// (0x0006f00f) main_video4_pane_g

0xacbd,	// (0x0006a442) vid4_indicators_pane_ParamLimits

0xacbd,	// (0x0006a442) vid4_indicators_pane

0xacdc,	// (0x0006a461) video4_image_uncrop_cif_pane_ParamLimits

0xacdc,	// (0x0006a461) video4_image_uncrop_cif_pane

0xaceb,	// (0x0006a470) video4_image_uncrop_nhd_pane_ParamLimits

0xaceb,	// (0x0006a470) video4_image_uncrop_nhd_pane

0xab5f,	// (0x0006a2e4) video4_image_uncrop_vga_pane_ParamLimits

0xab5f,	// (0x0006a2e4) video4_image_uncrop_vga_pane

0x0aed,	// (0x00060272) bg_tb_trans_pane_cp07

0xad02,	// (0x0006a487) vid4_indicators_pane_g1

0xad16,	// (0x0006a49b) vid4_indicators_pane_g2

0xad2a,	// (0x0006a4af) vid4_indicators_pane_g3

0x0004,

0xf895,	// (0x0006f01a) vid4_indicators_pane_g

0xad59,	// (0x0006a4de) vid4_indicators_pane_t1

0xad70,	// (0x0006a4f5) cam4_autofocus_pane_g1

0xad78,	// (0x0006a4fd) cam4_autofocus_pane_g2

0xad80,	// (0x0006a505) cam4_autofocus_pane_g3

0x0002,

0xf8a0,	// (0x0006f025) cam4_autofocus_pane_g

0xad88,	// (0x0006a50d) cam4_autofocus_pane_g3_copy1

0xa46c,	// (0x00069bf1) video_down_pane_cp_t1

0xa47a,	// (0x00069bff) video_down_pane_cp_t2

0x0001,

0xf818,	// (0x0006ef9d) video_down_pane_cp_t

0x0b46,	// (0x000602cb) popup_vitu2_window_ParamLimits

0x0b46,	// (0x000602cb) popup_vitu2_window

0xad90,	// (0x0006a515) aid_size_cell2_itu2_ParamLimits

0xad90,	// (0x0006a515) aid_size_cell2_itu2

0xadac,	// (0x0006a531) aid_size_cell_itu2_ParamLimits

0xadac,	// (0x0006a531) aid_size_cell_itu2

0xf06b,	// (0x0006e7f0) bg_popup_window_pane_cp09_ParamLimits

0xf06b,	// (0x0006e7f0) bg_popup_window_pane_cp09

0xade6,	// (0x0006a56b) field_vitu2_entry_pane_ParamLimits

0xade6,	// (0x0006a56b) field_vitu2_entry_pane

0xae04,	// (0x0006a589) grid_vitu2_function_pane_ParamLimits

0xae04,	// (0x0006a589) grid_vitu2_function_pane

0xae44,	// (0x0006a5c9) grid_vitu2_itu_pane_ParamLimits

0xae44,	// (0x0006a5c9) grid_vitu2_itu_pane

0xaea8,	// (0x0006a62d) cell_vitu2_itu_pane_ParamLimits

0xaea8,	// (0x0006a62d) cell_vitu2_itu_pane

0xaec1,	// (0x0006a646) cell_vitu2_function_pane_ParamLimits

0xaec1,	// (0x0006a646) cell_vitu2_function_pane

0x17a5,	// (0x00060f2a) bg_popup_call_pane_cp08_ParamLimits

0x17a5,	// (0x00060f2a) bg_popup_call_pane_cp08

0x17bc,	// (0x00060f41) field_vitu2_entry_pane_g1

0x17c8,	// (0x00060f4d) field_vitu2_entry_pane_g2

0x0002,

0xf8a7,	// (0x0006f02c) field_vitu2_entry_pane_g

0x4698,	// (0x00063e1d) field_vitu2_entry_pane_t1_ParamLimits

0x4698,	// (0x00063e1d) field_vitu2_entry_pane_t1

0x46ca,	// (0x00063e4f) field_vitu2_entry_pane_t2_ParamLimits

0x46ca,	// (0x00063e4f) field_vitu2_entry_pane_t2

0x0001,

0xf8ae,	// (0x0006f033) field_vitu2_entry_pane_t_ParamLimits

0xf8ae,	// (0x0006f033) field_vitu2_entry_pane_t

0x9649,	// (0x00068dce) bg_button_pane_cp010_ParamLimits

0x9649,	// (0x00068dce) bg_button_pane_cp010

0xaf02,	// (0x0006a687) cell_vitu2_itu_pane_g1

0xaf28,	// (0x0006a6ad) cell_vitu2_itu_pane_t1_ParamLimits

0xaf28,	// (0x0006a6ad) cell_vitu2_itu_pane_t1

0x46e7,	// (0x00063e6c) cell_vitu2_itu_pane_t2_ParamLimits

0x46e7,	// (0x00063e6c) cell_vitu2_itu_pane_t2

0x0002,

0xf8b8,	// (0x0006f03d) cell_vitu2_itu_pane_t_ParamLimits

0xf8b8,	// (0x0006f03d) cell_vitu2_itu_pane_t

0x0aed,	// (0x00060272) bg_button_pane_cp011

0xaf74,	// (0x0006a6f9) cell_vitu2_function_pane_g1

0x03ce,	// (0x0005fb53) main_myfav_hc_pane

0xa951,	// (0x0006a0d6) popup_image3_note_pane_ParamLimits

0xa951,	// (0x0006a0d6) popup_image3_note_pane

0xa95f,	// (0x0006a0e4) popup_image3_tool_bar_pane_ParamLimits

0xa95f,	// (0x0006a0e4) popup_image3_tool_bar_pane

0x475d,	// (0x00063ee2) cell_vitu2_itu_pane_t3_ParamLimits

0x475d,	// (0x00063ee2) cell_vitu2_itu_pane_t3

0x03ce,	// (0x0005fb53) bg_popup_trans_pane

0x17f9,	// (0x00060f7e) grid_image3_tool_bar_pane

0x1803,	// (0x00060f88) bg_popup_trans_pane_g1

0x691d,	// (0x000660a2) bg_popup_trans_pane_g2

0x180b,	// (0x00060f90) bg_popup_trans_pane_g3

0x1813,	// (0x00060f98) bg_popup_trans_pane_g4

0x181b,	// (0x00060fa0) bg_popup_trans_pane_g5

0x1823,	// (0x00060fa8) bg_popup_trans_pane_g6

0x182b,	// (0x00060fb0) bg_popup_trans_pane_g7

0x1833,	// (0x00060fb8) bg_popup_trans_pane_g8

0x68fd,	// (0x00066082) bg_popup_trans_pane_g9

0x0008,

0xf8bf,	// (0x0006f044) bg_popup_trans_pane_g

0x183b,	// (0x00060fc0) cell_image3_tool_bar_pane_ParamLimits

0x183b,	// (0x00060fc0) cell_image3_tool_bar_pane

0x618c,	// (0x00065911) cell_image3_tool_bar_pane_g1

0x03ce,	// (0x0005fb53) bg_popup_trans_pane_cp1

0x184f,	// (0x00060fd4) popup_image3_note_pane_t1

0x185d,	// (0x00060fe2) popup_image3_note_pane_t2

0x186b,	// (0x00060ff0) popup_image3_note_pane_t3

0x0002,

0xf8d2,	// (0x0006f057) popup_image3_note_pane_t

0x1879,	// (0x00060ffe) popup_image3_note_pane_t3_copy1

0xaf88,	// (0x0006a70d) bg_myfav_hc_instruction_pane_ParamLimits

0xaf88,	// (0x0006a70d) bg_myfav_hc_instruction_pane

0xafa0,	// (0x0006a725) cell_myfav_contact_pane_ParamLimits

0xafa0,	// (0x0006a725) cell_myfav_contact_pane

0xafba,	// (0x0006a73f) cell_myfav_contact_pane_cp1_ParamLimits

0xafba,	// (0x0006a73f) cell_myfav_contact_pane_cp1

0xafd2,	// (0x0006a757) cell_myfav_contact_pane_cp2_ParamLimits

0xafd2,	// (0x0006a757) cell_myfav_contact_pane_cp2

0xafea,	// (0x0006a76f) cell_myfav_contact_pane_cp3_ParamLimits

0xafea,	// (0x0006a76f) cell_myfav_contact_pane_cp3

0xb001,	// (0x0006a786) cell_myfav_contact_pane_cp4_ParamLimits

0xb001,	// (0x0006a786) cell_myfav_contact_pane_cp4

0xb017,	// (0x0006a79c) cell_myfav_contact_pane_cp5_ParamLimits

0xb017,	// (0x0006a79c) cell_myfav_contact_pane_cp5

0xb02b,	// (0x0006a7b0) cell_myfav_contact_pane_cp6_ParamLimits

0xb02b,	// (0x0006a7b0) cell_myfav_contact_pane_cp6

0xb03f,	// (0x0006a7c4) cell_myfav_contact_pane_cp7_ParamLimits

0xb03f,	// (0x0006a7c4) cell_myfav_contact_pane_cp7

0x1887,	// (0x0006100c) listscroll_gen_pane_cp05

0xb057,	// (0x0006a7dc) main_myfav_hc_pane_g1_ParamLimits

0xb057,	// (0x0006a7dc) main_myfav_hc_pane_g1

0xb06d,	// (0x0006a7f2) main_myfav_hc_pane_g2_ParamLimits

0xb06d,	// (0x0006a7f2) main_myfav_hc_pane_g2

0x0002,

0xf8d9,	// (0x0006f05e) main_myfav_hc_pane_g_ParamLimits

0xf8d9,	// (0x0006f05e) main_myfav_hc_pane_g

0xb09b,	// (0x0006a820) main_myfav_hc_pane_t1_ParamLimits

0xb09b,	// (0x0006a820) main_myfav_hc_pane_t1

0x1890,	// (0x00061015) main_myfav_hc_pane_t2_ParamLimits

0x1890,	// (0x00061015) main_myfav_hc_pane_t2

0x18a2,	// (0x00061027) main_myfav_hc_pane_t3_ParamLimits

0x18a2,	// (0x00061027) main_myfav_hc_pane_t3

0xb0b2,	// (0x0006a837) main_myfav_hc_pane_t4_ParamLimits

0xb0b2,	// (0x0006a837) main_myfav_hc_pane_t4

0x0004,

0xf8e0,	// (0x0006f065) main_myfav_hc_pane_t_ParamLimits

0xf8e0,	// (0x0006f065) main_myfav_hc_pane_t

0x618c,	// (0x00065911) bg_myfav_hc_instruction_pane_g1

0x18b4,	// (0x00061039) cell_myfav_contact_pane_g1_ParamLimits

0x18b4,	// (0x00061039) cell_myfav_contact_pane_g1

0x18b4,	// (0x00061039) cell_myfav_contact_pane_g2_ParamLimits

0x18b4,	// (0x00061039) cell_myfav_contact_pane_g2

0x18c0,	// (0x00061045) cell_myfav_contact_pane_g3_ParamLimits

0x18c0,	// (0x00061045) cell_myfav_contact_pane_g3

0x5577,	// (0x00064cfc) cell_myfav_contact_pane_g4_ParamLimits

0x5577,	// (0x00064cfc) cell_myfav_contact_pane_g4

0x18cd,	// (0x00061052) cell_myfav_contact_pane_g5_ParamLimits

0x18cd,	// (0x00061052) cell_myfav_contact_pane_g5

0x0004,

0xf8eb,	// (0x0006f070) cell_myfav_contact_pane_g_ParamLimits

0xf8eb,	// (0x0006f070) cell_myfav_contact_pane_g

0xb083,	// (0x0006a808) main_myfav_hc_pane_g3_ParamLimits

0xb083,	// (0x0006a808) main_myfav_hc_pane_g3

0x53b2,	// (0x00064b37) popup_adpt_find_window

0xb0dc,	// (0x0006a861) afind_page_pane_ParamLimits

0xb0dc,	// (0x0006a861) afind_page_pane

0xb0e9,	// (0x0006a86e) aid_size_cell_afind_ParamLimits

0xb0e9,	// (0x0006a86e) aid_size_cell_afind

0xb103,	// (0x0006a888) bg_popup_sub_pane_cp09_ParamLimits

0xb103,	// (0x0006a888) bg_popup_sub_pane_cp09

0xb110,	// (0x0006a895) find_pane_cp01_ParamLimits

0xb110,	// (0x0006a895) find_pane_cp01

0x18d9,	// (0x0006105e) grid_afind_control_pane_ParamLimits

0x18d9,	// (0x0006105e) grid_afind_control_pane

0xb11d,	// (0x0006a8a2) grid_afind_pane_ParamLimits

0xb11d,	// (0x0006a8a2) grid_afind_pane

0xb139,	// (0x0006a8be) cell_afind_pane_ParamLimits

0xb139,	// (0x0006a8be) cell_afind_pane

0x618c,	// (0x00065911) afind_page_pane_g1

0xb181,	// (0x0006a906) afind_page_pane_g2

0xb18a,	// (0x0006a90f) afind_page_pane_g3

0x0002,

0xf8f6,	// (0x0006f07b) afind_page_pane_g

0xb193,	// (0x0006a918) afind_page_pane_t1

0x18ed,	// (0x00061072) cell_afind_grid_control_pane_ParamLimits

0x18ed,	// (0x00061072) cell_afind_grid_control_pane

0x172d,	// (0x00060eb2) bg_button_pane_cp69_ParamLimits

0x172d,	// (0x00060eb2) bg_button_pane_cp69

0xb1b3,	// (0x0006a938) cell_afind_pane_g1_ParamLimits

0xb1b3,	// (0x0006a938) cell_afind_pane_g1

0xb1c0,	// (0x0006a945) cell_afind_pane_t1_ParamLimits

0xb1c0,	// (0x0006a945) cell_afind_pane_t1

0x61d1,	// (0x00065956) bg_button_pane_cp72

0x18fc,	// (0x00061081) cell_afind_grid_control_pane_g1

0x8b7b,	// (0x00068300) aid_image_placing_area_ParamLimits

0x8b7b,	// (0x00068300) aid_image_placing_area

0x5569,	// (0x00064cee) field_vitu_entry_pane_g1_ParamLimits

0x5569,	// (0x00064cee) field_vitu_entry_pane_g1

0x5569,	// (0x00064cee) field_vitu_entry_pane_g2_ParamLimits

0x5569,	// (0x00064cee) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0006e986) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0006e986) field_vitu_entry_pane_g

0x1246,	// (0x000609cb) cell_vitu_itu_pane_g1_ParamLimits

0x1229,	// (0x000609ae) cell_vitu_itu_pane_t3_ParamLimits

0x1229,	// (0x000609ae) cell_vitu_itu_pane_t3

0x16d6,	// (0x00060e5b) mp4_progress_pane_t1_ParamLimits

0x16ef,	// (0x00060e74) mp4_progress_pane_t2_ParamLimits

0xf83c,	// (0x0006efc1) mp4_progress_pane_t_ParamLimits

0x1708,	// (0x00060e8d) mup_progress_pane_cp04_ParamLimits

0xb0c6,	// (0x0006a84b) main_myfav_hc_pane_t5_ParamLimits

0xb0c6,	// (0x0006a84b) main_myfav_hc_pane_t5

0x455f,	// (0x00063ce4) aid_zoom_text_primary

0x53b2,	// (0x00064b37) popup_adpt_find_window_ParamLimits

0x0aed,	// (0x00060272) main_cam_set_pane

0xab84,	// (0x0006a309) cam4_zoom_pane_ParamLimits

0xab84,	// (0x0006a309) cam4_zoom_pane

0xb1d2,	// (0x0006a957) main_cam_set_pane_g1_ParamLimits

0xb1d2,	// (0x0006a957) main_cam_set_pane_g1

0xb1e0,	// (0x0006a965) main_cam_set_pane_g2_ParamLimits

0xb1e0,	// (0x0006a965) main_cam_set_pane_g2

0x0001,

0xf8fd,	// (0x0006f082) main_cam_set_pane_g_ParamLimits

0xf8fd,	// (0x0006f082) main_cam_set_pane_g

0xb1ec,	// (0x0006a971) main_cam_set_pane_t1_ParamLimits

0xb1ec,	// (0x0006a971) main_cam_set_pane_t1

0xb208,	// (0x0006a98d) main_cset_listscroll_pane_ParamLimits

0xb208,	// (0x0006a98d) main_cset_listscroll_pane

0xb23a,	// (0x0006a9bf) main_cset_slider_pane_ParamLimits

0xb23a,	// (0x0006a9bf) main_cset_slider_pane

0x190d,	// (0x00061092) main_cset_list_pane_ParamLimits

0x190d,	// (0x00061092) main_cset_list_pane

0x191d,	// (0x000610a2) scroll_pane_cp028

0xb259,	// (0x0006a9de) aid_area_touch_slider

0xb275,	// (0x0006a9fa) cset_slider_pane

0xb298,	// (0x0006aa1d) main_cset_slider_pane_g1

0xb2ad,	// (0x0006aa32) main_cset_slider_pane_g2

0x0011,

0xf902,	// (0x0006f087) main_cset_slider_pane_g

0x1956,	// (0x000610db) main_cset_slider_pane_t1

0xb36f,	// (0x0006aaf4) main_cset_slider_pane_t2

0xb389,	// (0x0006ab0e) main_cset_slider_pane_t3

0xb3a3,	// (0x0006ab28) main_cset_slider_pane_t4

0xb3bd,	// (0x0006ab42) main_cset_slider_pane_t5

0xb3db,	// (0x0006ab60) main_cset_slider_pane_t6

0xb3f2,	// (0x0006ab77) main_cset_slider_pane_t7

0x000e,

0xf927,	// (0x0006f0ac) main_cset_slider_pane_t

0xb4fe,	// (0x0006ac83) cset_list_set_pane_ParamLimits

0xb4fe,	// (0x0006ac83) cset_list_set_pane

0x19f0,	// (0x00061175) aid_position_infowindow_above

0x19f8,	// (0x0006117d) aid_position_infowindow_below

0xb514,	// (0x0006ac99) cset_list_set_pane_g1_ParamLimits

0xb514,	// (0x0006ac99) cset_list_set_pane_g1

0x47af,	// (0x00063f34) cset_list_set_pane_g3_ParamLimits

0x47af,	// (0x00063f34) cset_list_set_pane_g3

0x0001,

0xf946,	// (0x0006f0cb) cset_list_set_pane_g_ParamLimits

0xf946,	// (0x0006f0cb) cset_list_set_pane_g

0x47be,	// (0x00063f43) cset_list_set_pane_t1_ParamLimits

0x47be,	// (0x00063f43) cset_list_set_pane_t1

0x0aed,	// (0x00060272) list_highlight_pane_cp021_ParamLimits

0x0aed,	// (0x00060272) list_highlight_pane_cp021

0x84b1,	// (0x00067c36) cset_slider_pane_g1

0x84c3,	// (0x00067c48) cset_slider_pane_g2

0x84ba,	// (0x00067c3f) cset_slider_pane_g3

0x0002,

0xf94b,	// (0x0006f0d0) cset_slider_pane_g

0xb520,	// (0x0006aca5) aid_area_touch_cam4_zoom

0xb528,	// (0x0006acad) cam4_zoom_cont_pane

0xb530,	// (0x0006acb5) cam4_zoom_pane_g1

0xb538,	// (0x0006acbd) cam4_zoom_pane_g2

0xb540,	// (0x0006acc5) cam4_zoom_pane_g3

0x0002,

0xf952,	// (0x0006f0d7) cam4_zoom_pane_g

0x2297,	// (0x00061a1c) cam4_zoom_cont_pane_g1

0x22a0,	// (0x00061a25) cam4_zoom_cont_pane_g2

0x22a9,	// (0x00061a2e) cam4_zoom_cont_pane_g3

0x0002,

0xf959,	// (0x0006f0de) cam4_zoom_cont_pane_g

0xa9a8,	// (0x0006a12d) call4_image_pane_ParamLimits

0xa9a8,	// (0x0006a12d) call4_image_pane

0xaa07,	// (0x0006a18c) call4_windows_conf_pane_ParamLimits

0xaa4c,	// (0x0006a1d1) popup_call4_audio_in_window_ParamLimits

0xaa4c,	// (0x0006a1d1) popup_call4_audio_in_window

0x03ce,	// (0x0005fb53) bg_popup_call2_act_pane_cp02

0x176b,	// (0x00060ef0) call4_list_conf_pane

0x618c,	// (0x00065911) call4_image_pane_g1

0x618c,	// (0x00065911) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x0006eb62) call4_image_pane_g

0x1a30,	// (0x000611b5) list_single_graphic_popup_conf4_pane_ParamLimits

0x1a30,	// (0x000611b5) list_single_graphic_popup_conf4_pane

0x03ce,	// (0x0005fb53) list_highlight_pane_cp022

0x1a43,	// (0x000611c8) list_single_graphic_popup_conf4_pane_g1

0x7c6a,	// (0x000673ef) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf960,	// (0x0006f0e5) list_single_graphic_popup_conf4_pane_g

0x1a4b,	// (0x000611d0) list_single_graphic_popup_conf4_pane_t1

0x63f2,	// (0x00065b77) popup_vtel_slider_window_ParamLimits

0x63f2,	// (0x00065b77) popup_vtel_slider_window

0x171b,	// (0x00060ea0) dialer2_ne_pane_t2_ParamLimits

0x171b,	// (0x00060ea0) dialer2_ne_pane_t2

0x0001,

0xf841,	// (0x0006efc6) dialer2_ne_pane_t_ParamLimits

0xf841,	// (0x0006efc6) dialer2_ne_pane_t

0x0aed,	// (0x00060272) bg_popup_sub_pane_cp010_ParamLimits

0x0aed,	// (0x00060272) bg_popup_sub_pane_cp010

0xb548,	// (0x0006accd) popup_vtel_slider_window_g1_ParamLimits

0xb548,	// (0x0006accd) popup_vtel_slider_window_g1

0xb554,	// (0x0006acd9) popup_vtel_slider_window_g2_ParamLimits

0xb554,	// (0x0006acd9) popup_vtel_slider_window_g2

0x0003,

0xf965,	// (0x0006f0ea) popup_vtel_slider_window_g_ParamLimits

0xf965,	// (0x0006f0ea) popup_vtel_slider_window_g

0xb59c,	// (0x0006ad21) vtel_slider_pane_ParamLimits

0xb59c,	// (0x0006ad21) vtel_slider_pane

0xb5ab,	// (0x0006ad30) vtel_slider_pane_g1_ParamLimits

0xb5ab,	// (0x0006ad30) vtel_slider_pane_g1

0xb5b8,	// (0x0006ad3d) vtel_slider_pane_g2_ParamLimits

0xb5b8,	// (0x0006ad3d) vtel_slider_pane_g2

0xb5c5,	// (0x0006ad4a) vtel_slider_pane_g3_ParamLimits

0xb5c5,	// (0x0006ad4a) vtel_slider_pane_g3

0xb5ab,	// (0x0006ad30) vtel_slider_pane_g4_ParamLimits

0xb5ab,	// (0x0006ad30) vtel_slider_pane_g4

0xb5d2,	// (0x0006ad57) vtel_slider_pane_g5_ParamLimits

0xb5d2,	// (0x0006ad57) vtel_slider_pane_g5

0x0004,

0xf96e,	// (0x0006f0f3) vtel_slider_pane_g_ParamLimits

0xf96e,	// (0x0006f0f3) vtel_slider_pane_g

0x0aed,	// (0x00060272) main_gallery2_pane

0xadc8,	// (0x0006a54d) aid_size_row_itut2_dropdow_list_ParamLimits

0xadc8,	// (0x0006a54d) aid_size_row_itut2_dropdow_list

0xae24,	// (0x0006a5a9) grid_vitu2_function_top_pane_ParamLimits

0xae24,	// (0x0006a5a9) grid_vitu2_function_top_pane

0xae78,	// (0x0006a5fd) popup_vitu2_dropdown_list_window_ParamLimits

0xae78,	// (0x0006a5fd) popup_vitu2_dropdown_list_window

0xae96,	// (0x0006a61b) popup_vitu2_match_list_window

0xb5df,	// (0x0006ad64) cell_vitu2_function_top_pane_ParamLimits

0xb5df,	// (0x0006ad64) cell_vitu2_function_top_pane

0xb5f9,	// (0x0006ad7e) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb5f9,	// (0x0006ad7e) cell_vitu2_function_top_pane_cp01

0xb615,	// (0x0006ad9a) cell_vitu2_function_top_wide_pane_ParamLimits

0xb615,	// (0x0006ad9a) cell_vitu2_function_top_wide_pane

0x0aed,	// (0x00060272) bg_button_pane_cp012

0xb633,	// (0x0006adb8) cell_vitu2_function_top_pane_g1

0xb647,	// (0x0006adcc) bg_button_pane_cp013_ParamLimits

0xb647,	// (0x0006adcc) bg_button_pane_cp013

0xb663,	// (0x0006ade8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb663,	// (0x0006ade8) cell_vitu2_function_top_wide_pane_g1

0x0b46,	// (0x000602cb) bg_popup_sub_pane_cp20

0xb67b,	// (0x0006ae00) list_vitu2_match_list_pane

0x1803,	// (0x00060f88) bg_popup_sub_pane_cp20_g1

0x180b,	// (0x00060f90) bg_popup_sub_pane_cp20_g2

0x691d,	// (0x000660a2) bg_popup_sub_pane_cp20_g3

0x1813,	// (0x00060f98) bg_popup_sub_pane_cp20_g4

0x68fd,	// (0x00066082) bg_popup_sub_pane_cp20_g5

0x1a61,	// (0x000611e6) bg_popup_sub_pane_cp20_g6

0x1823,	// (0x00060fa8) bg_popup_sub_pane_cp20_g7

0x182b,	// (0x00060fb0) bg_popup_sub_pane_cp20_g8

0x1833,	// (0x00060fb8) bg_popup_sub_pane_cp20_g9

0x0008,

0xf979,	// (0x0006f0fe) bg_popup_sub_pane_cp20_g

0xb693,	// (0x0006ae18) list_vitu2_match_list_item_pane_ParamLimits

0xb693,	// (0x0006ae18) list_vitu2_match_list_item_pane

0xb6a5,	// (0x0006ae2a) list_vitu2_match_list_item_pane_t1

0x03ce,	// (0x0005fb53) bg_popup_sub_pane_cp21

0x5fce,	// (0x00065753) grid_vitu2_dropdown_list_pane

0xb6b3,	// (0x0006ae38) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb6b3,	// (0x0006ae38) cell_vitu2_dropdown_list_char_pane

0xb6d6,	// (0x0006ae5b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb6d6,	// (0x0006ae5b) cell_vitu2_dropdown_list_ctrl_pane

0x1a7b,	// (0x00061200) cell_vitu2_dropdown_list_char_pane_g1

0x1a72,	// (0x000611f7) cell_vitu2_dropdown_list_char_pane_g2

0x1a69,	// (0x000611ee) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf98c,	// (0x0006f111) cell_vitu2_dropdown_list_char_pane_g

0xb700,	// (0x0006ae85) cell_vitu2_dropdown_list_char_pane_t1

0xb70e,	// (0x0006ae93) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb70e,	// (0x0006ae93) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb71b,	// (0x0006aea0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb71b,	// (0x0006aea0) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb728,	// (0x0006aead) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb728,	// (0x0006aead) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb735,	// (0x0006aeba) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb735,	// (0x0006aeba) cell_vitu2_dropdown_list_ctrl_pane_g4

0x5569,	// (0x00064cee) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x5569,	// (0x00064cee) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf993,	// (0x0006f118) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf993,	// (0x0006f118) cell_vitu2_dropdown_list_ctrl_pane_g

0xb751,	// (0x0006aed6) aid_size_cell_gallery2_ParamLimits

0xb751,	// (0x0006aed6) aid_size_cell_gallery2

0xb76b,	// (0x0006aef0) grid_gallery2_pane_ParamLimits

0xb76b,	// (0x0006aef0) grid_gallery2_pane

0xb782,	// (0x0006af07) scroll_pane_cp029_ParamLimits

0xb782,	// (0x0006af07) scroll_pane_cp029

0xb792,	// (0x0006af17) cell_gallery2_pane_ParamLimits

0xb792,	// (0x0006af17) cell_gallery2_pane

0x1a84,	// (0x00061209) cell_gallery2_pane_g2

0x2ee5,	// (0x0006266a) cell_gallery2_pane_g3

0x1a8c,	// (0x00061211) cell_gallery2_pane_g4

0x1a94,	// (0x00061219) cell_gallery2_pane_g5

0x5fce,	// (0x00065753) grid_highlight_pane_cp10

0xae96,	// (0x0006a61b) popup_vitu2_match_list_window_ParamLimits

0xadd6,	// (0x0006a55b) popup_vitu2_query_window_ParamLimits

0xadd6,	// (0x0006a55b) popup_vitu2_query_window

0x03ce,	// (0x0005fb53) bg_vitu2_candi_button_pane

0x1a7b,	// (0x00061200) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1a72,	// (0x000611f7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1a69,	// (0x000611ee) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x47d3,	// (0x00063f58) bg_button_pane_cp015

0xb7e7,	// (0x0006af6c) bg_button_pane_cp016

0xb7fa,	// (0x0006af7f) bg_button_pane_cp017

0xea8e,	// (0x0006e213) bg_popup_sub_pane_cp22

0x1a9c,	// (0x00061221) popup_vitu2_query_window_g1

0x4806,	// (0x00063f8b) popup_vitu2_query_window_g2

0x0002,

0xf99e,	// (0x0006f123) popup_vitu2_query_window_g

0x4823,	// (0x00063fa8) popup_vitu2_query_window_t1_ParamLimits

0x4823,	// (0x00063fa8) popup_vitu2_query_window_t1

0x4856,	// (0x00063fdb) popup_vitu2_query_window_t2_ParamLimits

0x4856,	// (0x00063fdb) popup_vitu2_query_window_t2

0x4868,	// (0x00063fed) popup_vitu2_query_window_t3_ParamLimits

0x4868,	// (0x00063fed) popup_vitu2_query_window_t3

0xb81e,	// (0x0006afa3) popup_vitu2_query_window_t4_ParamLimits

0xb81e,	// (0x0006afa3) popup_vitu2_query_window_t4

0xb83f,	// (0x0006afc4) popup_vitu2_query_window_t5_ParamLimits

0xb83f,	// (0x0006afc4) popup_vitu2_query_window_t5

0x0006,

0xf9a5,	// (0x0006f12a) popup_vitu2_query_window_t_ParamLimits

0xf9a5,	// (0x0006f12a) popup_vitu2_query_window_t

0x1905,	// (0x0006108a) main_cset_text_pane

0xb259,	// (0x0006a9de) aid_area_touch_slider_ParamLimits

0xb275,	// (0x0006a9fa) cset_slider_pane_ParamLimits

0xb298,	// (0x0006aa1d) main_cset_slider_pane_g1_ParamLimits

0xb2ad,	// (0x0006aa32) main_cset_slider_pane_g2_ParamLimits

0x1926,	// (0x000610ab) main_cset_slider_pane_g3_ParamLimits

0x1926,	// (0x000610ab) main_cset_slider_pane_g3

0xb2c2,	// (0x0006aa47) main_cset_slider_pane_g4_ParamLimits

0xb2c2,	// (0x0006aa47) main_cset_slider_pane_g4

0xb2d1,	// (0x0006aa56) main_cset_slider_pane_g5_ParamLimits

0xb2d1,	// (0x0006aa56) main_cset_slider_pane_g5

0xb2df,	// (0x0006aa64) main_cset_slider_pane_g6_ParamLimits

0xb2df,	// (0x0006aa64) main_cset_slider_pane_g6

0xf902,	// (0x0006f087) main_cset_slider_pane_g_ParamLimits

0x1956,	// (0x000610db) main_cset_slider_pane_t1_ParamLimits

0xb36f,	// (0x0006aaf4) main_cset_slider_pane_t2_ParamLimits

0xb389,	// (0x0006ab0e) main_cset_slider_pane_t3_ParamLimits

0xb3a3,	// (0x0006ab28) main_cset_slider_pane_t4_ParamLimits

0xb3bd,	// (0x0006ab42) main_cset_slider_pane_t5_ParamLimits

0xb3db,	// (0x0006ab60) main_cset_slider_pane_t6_ParamLimits

0xb3f2,	// (0x0006ab77) main_cset_slider_pane_t7_ParamLimits

0xb420,	// (0x0006aba5) main_cset_slider_pane_t8_ParamLimits

0xb420,	// (0x0006aba5) main_cset_slider_pane_t8

0xb448,	// (0x0006abcd) main_cset_slider_pane_t9_ParamLimits

0xb448,	// (0x0006abcd) main_cset_slider_pane_t9

0xb470,	// (0x0006abf5) main_cset_slider_pane_t10_ParamLimits

0xb470,	// (0x0006abf5) main_cset_slider_pane_t10

0xb498,	// (0x0006ac1d) main_cset_slider_pane_t11_ParamLimits

0xb498,	// (0x0006ac1d) main_cset_slider_pane_t11

0xb4c2,	// (0x0006ac47) main_cset_slider_pane_t12_ParamLimits

0xb4c2,	// (0x0006ac47) main_cset_slider_pane_t12

0xb4df,	// (0x0006ac64) main_cset_slider_pane_t13_ParamLimits

0xb4df,	// (0x0006ac64) main_cset_slider_pane_t13

0xf927,	// (0x0006f0ac) main_cset_slider_pane_t_ParamLimits

0x03ce,	// (0x0005fb53) bg_popup_sub_pane_cp011

0x1aa8,	// (0x0006122d) main_cset_text_pane_g1

0x1ab0,	// (0x00061235) main_cset_text_pane_t1

0x1abe,	// (0x00061243) main_cset_text_pane_t2

0x1acc,	// (0x00061251) main_cset_text_pane_t3

0x1ada,	// (0x0006125f) main_cset_text_pane_t4

0x1ae8,	// (0x0006126d) main_cset_text_pane_t5

0x1af6,	// (0x0006127b) main_cset_text_pane_t6

0x1b04,	// (0x00061289) main_cset_text_pane_t7

0x0006,

0xf9b4,	// (0x0006f139) main_cset_text_pane_t

0x03ce,	// (0x0005fb53) main_cam4_burst_pane

0x03ce,	// (0x0005fb53) main_cam5_pane

0xb1a1,	// (0x0006a926) bg_button_pane_cp019

0xb1aa,	// (0x0006a92f) bg_button_pane_cp020

0x1932,	// (0x000610b7) main_cset_slider_pane_g7_ParamLimits

0x1932,	// (0x000610b7) main_cset_slider_pane_g7

0x193e,	// (0x000610c3) main_cset_slider_pane_g8_ParamLimits

0x193e,	// (0x000610c3) main_cset_slider_pane_g8

0xb2f3,	// (0x0006aa78) main_cset_slider_pane_g9_ParamLimits

0xb2f3,	// (0x0006aa78) main_cset_slider_pane_g9

0xb2ff,	// (0x0006aa84) main_cset_slider_pane_g10_ParamLimits

0xb2ff,	// (0x0006aa84) main_cset_slider_pane_g10

0xb30b,	// (0x0006aa90) main_cset_slider_pane_g11_ParamLimits

0xb30b,	// (0x0006aa90) main_cset_slider_pane_g11

0xb317,	// (0x0006aa9c) main_cset_slider_pane_g12_ParamLimits

0xb317,	// (0x0006aa9c) main_cset_slider_pane_g12

0xb323,	// (0x0006aaa8) main_cset_slider_pane_g13_ParamLimits

0xb323,	// (0x0006aaa8) main_cset_slider_pane_g13

0xb32f,	// (0x0006aab4) main_cset_slider_pane_g14_ParamLimits

0xb32f,	// (0x0006aab4) main_cset_slider_pane_g14

0xb33b,	// (0x0006aac0) main_cset_slider_pane_g15_ParamLimits

0xb33b,	// (0x0006aac0) main_cset_slider_pane_g15

0x197e,	// (0x00061103) main_cset_slider_pane_t14_ParamLimits

0x197e,	// (0x00061103) main_cset_slider_pane_t14

0x19b7,	// (0x0006113c) main_cset_slider_pane_t15_ParamLimits

0x19b7,	// (0x0006113c) main_cset_slider_pane_t15

0xb860,	// (0x0006afe5) aid_cam4_burst_size_cell_ParamLimits

0xb860,	// (0x0006afe5) aid_cam4_burst_size_cell

0xb87c,	// (0x0006b001) grid_cam4_burst_pane_ParamLimits

0xb87c,	// (0x0006b001) grid_cam4_burst_pane

0xb8ac,	// (0x0006b031) linegrid_cam4_burst_pane_ParamLimits

0xb8ac,	// (0x0006b031) linegrid_cam4_burst_pane

0xb8cc,	// (0x0006b051) scroll_pane_cp30_ParamLimits

0xb8cc,	// (0x0006b051) scroll_pane_cp30

0xb8d8,	// (0x0006b05d) cell_cam4_burst_pane_ParamLimits

0xb8d8,	// (0x0006b05d) cell_cam4_burst_pane

0x1b1e,	// (0x000612a3) linegrid_cam4_burst_pane_g1_ParamLimits

0x1b1e,	// (0x000612a3) linegrid_cam4_burst_pane_g1

0xb914,	// (0x0006b099) linegrid_cam4_burst_pane_g2_ParamLimits

0xb914,	// (0x0006b099) linegrid_cam4_burst_pane_g2

0x1b2b,	// (0x000612b0) linegrid_cam4_burst_pane_g3_ParamLimits

0x1b2b,	// (0x000612b0) linegrid_cam4_burst_pane_g3

0x0002,

0xf9c3,	// (0x0006f148) linegrid_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x0006f148) linegrid_cam4_burst_pane_g

0xb925,	// (0x0006b0aa) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb925,	// (0x0006b0aa) linegrid_cam4_burst_pane_g3_copy1

0x1b38,	// (0x000612bd) linegrid_cam4_burst_pane_g4_ParamLimits

0x1b38,	// (0x000612bd) linegrid_cam4_burst_pane_g4

0xb93f,	// (0x0006b0c4) linegrid_cam4_burst_pane_g5_ParamLimits

0xb93f,	// (0x0006b0c4) linegrid_cam4_burst_pane_g5

0xb950,	// (0x0006b0d5) linegrid_cam4_burst_pane_g6_ParamLimits

0xb950,	// (0x0006b0d5) linegrid_cam4_burst_pane_g6

0x1b45,	// (0x000612ca) linegrid_cam4_burst_pane_g7_ParamLimits

0x1b45,	// (0x000612ca) linegrid_cam4_burst_pane_g7

0xb961,	// (0x0006b0e6) cell_cam4_burst_pane_g1

0x1b5e,	// (0x000612e3) main_cam5_pane_t1_ParamLimits

0x1b5e,	// (0x000612e3) main_cam5_pane_t1

0x1b70,	// (0x000612f5) main_cam5_pane_t2_ParamLimits

0x1b70,	// (0x000612f5) main_cam5_pane_t2

0x1b82,	// (0x00061307) main_cam5_pane_t3_ParamLimits

0x1b82,	// (0x00061307) main_cam5_pane_t3

0x1b94,	// (0x00061319) main_cam5_pane_t4_ParamLimits

0x1b94,	// (0x00061319) main_cam5_pane_t4

0x1bac,	// (0x00061331) main_cam5_pane_t5_ParamLimits

0x1bac,	// (0x00061331) main_cam5_pane_t5

0x1bc0,	// (0x00061345) main_cam5_pane_t6_ParamLimits

0x1bc0,	// (0x00061345) main_cam5_pane_t6

0x1bd4,	// (0x00061359) main_cam5_pane_t7_ParamLimits

0x1bd4,	// (0x00061359) main_cam5_pane_t7

0x1be6,	// (0x0006136b) main_cam5_pane_t8_ParamLimits

0x1be6,	// (0x0006136b) main_cam5_pane_t8

0x1c02,	// (0x00061387) main_cam5_pane_t9_ParamLimits

0x1c02,	// (0x00061387) main_cam5_pane_t9

0x1c14,	// (0x00061399) main_cam5_pane_t10_ParamLimits

0x1c14,	// (0x00061399) main_cam5_pane_t10

0x1c26,	// (0x000613ab) main_cam5_pane_t11_ParamLimits

0x1c26,	// (0x000613ab) main_cam5_pane_t11

0x1c38,	// (0x000613bd) main_cam5_pane_t12_ParamLimits

0x1c38,	// (0x000613bd) main_cam5_pane_t12

0x1c4d,	// (0x000613d2) main_cam5_pane_t13_ParamLimits

0x1c4d,	// (0x000613d2) main_cam5_pane_t13

0x000c,

0xf9cf,	// (0x0006f154) main_cam5_pane_t_ParamLimits

0xf9cf,	// (0x0006f154) main_cam5_pane_t

0x5468,	// (0x00064bed) popup_scut_keymap_window_ParamLimits

0x5468,	// (0x00064bed) popup_scut_keymap_window

0xb974,	// (0x0006b0f9) aid_size_cell_brow_shortcut

0x5fce,	// (0x00065753) bg_popup_window_pane_cp010

0xb980,	// (0x0006b105) grid_scut_pane

0xb98c,	// (0x0006b111) cell_scut_pane_ParamLimits

0xb98c,	// (0x0006b111) cell_scut_pane

0xb9a3,	// (0x0006b128) cell_scut_pane_g1

0x1c6a,	// (0x000613ef) cell_scut_pane_t1

0x1c79,	// (0x000613fe) cell_scut_pane_t2

0xb9ac,	// (0x0006b131) cell_scut_pane_t3

0x0002,

0xf9ea,	// (0x0006f16f) cell_scut_pane_t

0x9ad4,	// (0x00069259) main_mup3_pane_g8_ParamLimits

0x9ad4,	// (0x00069259) main_mup3_pane_g8

0xadd6,	// (0x0006a55b) area_vitu2_query_pane_ParamLimits

0xadd6,	// (0x0006a55b) area_vitu2_query_pane

0x47e5,	// (0x00063f6a) input_focus_pane_cp08

0x1c88,	// (0x0006140d) area_vitu2_query_pane_g1

0x48e6,	// (0x0006406b) area_vitu2_query_pane_g2

0x0001,

0xf9f1,	// (0x0006f176) area_vitu2_query_pane_g

0xb9ba,	// (0x0006b13f) area_vitu2_query_pane_t1_ParamLimits

0xb9ba,	// (0x0006b13f) area_vitu2_query_pane_t1

0xb9ce,	// (0x0006b153) area_vitu2_query_pane_t2_ParamLimits

0xb9ce,	// (0x0006b153) area_vitu2_query_pane_t2

0x48f7,	// (0x0006407c) area_vitu2_query_pane_t3_ParamLimits

0x48f7,	// (0x0006407c) area_vitu2_query_pane_t3

0x491f,	// (0x000640a4) area_vitu2_query_pane_t4_ParamLimits

0x491f,	// (0x000640a4) area_vitu2_query_pane_t4

0x4947,	// (0x000640cc) area_vitu2_query_pane_t5_ParamLimits

0x4947,	// (0x000640cc) area_vitu2_query_pane_t5

0x496f,	// (0x000640f4) area_vitu2_query_pane_t6_ParamLimits

0x496f,	// (0x000640f4) area_vitu2_query_pane_t6

0x0006,

0xf9f6,	// (0x0006f17b) area_vitu2_query_pane_t_ParamLimits

0xf9f6,	// (0x0006f17b) area_vitu2_query_pane_t

0xb9e2,	// (0x0006b167) bg_button_pane_cp018

0xb9f0,	// (0x0006b175) bg_button_pane_cp021

0x49bb,	// (0x00064140) bg_button_pane_cp022

0x49cc,	// (0x00064151) input_focus_pane_cp09

0x7fab,	// (0x00067730) aid_size_touch_mv_arrow_left

0x7fd4,	// (0x00067759) aid_size_touch_mv_arrow_right

0xb353,	// (0x0006aad8) main_cset_slider_pane_g16_ParamLimits

0xb353,	// (0x0006aad8) main_cset_slider_pane_g16

0xb361,	// (0x0006aae6) main_cset_slider_pane_g17_ParamLimits

0xb361,	// (0x0006aae6) main_cset_slider_pane_g17

0xb961,	// (0x0006b0e6) cell_cam4_burst_pane_g1_ParamLimits

0x03ce,	// (0x0005fb53) compa_mode_pane

0xb560,	// (0x0006ace5) popup_vtel_slider_window_g3_ParamLimits

0xb560,	// (0x0006ace5) popup_vtel_slider_window_g3

0xb574,	// (0x0006acf9) popup_vtel_slider_window_g4_ParamLimits

0xb574,	// (0x0006acf9) popup_vtel_slider_window_g4

0xb588,	// (0x0006ad0d) popup_vtel_slider_window_t1_ParamLimits

0xb588,	// (0x0006ad0d) popup_vtel_slider_window_t1

0x03ce,	// (0x0005fb53) main_cl_pane

0x93ab,	// (0x00068b30) popup_imed_adjust2_window_ParamLimits

0xea8e,	// (0x0006e213) bg_tb_trans_pane_cp05_ParamLimits

0x115e,	// (0x000608e3) popup_imed_adjust2_window_g1_ParamLimits

0x116d,	// (0x000608f2) popup_imed_adjust2_window_g2_ParamLimits

0x116d,	// (0x000608f2) popup_imed_adjust2_window_g2

0x1179,	// (0x000608fe) popup_imed_adjust2_window_g3_ParamLimits

0x1179,	// (0x000608fe) popup_imed_adjust2_window_g3

0x0002,

0xf76c,	// (0x0006eef1) popup_imed_adjust2_window_g_ParamLimits

0xf76c,	// (0x0006eef1) popup_imed_adjust2_window_g

0x1185,	// (0x0006090a) popup_imed_adjust2_window_t1_ParamLimits

0x119d,	// (0x00060922) slider_imed_adjust_pane_ParamLimits

0x11b1,	// (0x00060936) slider_imed_adjust_pane_g1_ParamLimits

0x11c1,	// (0x00060946) slider_imed_adjust_pane_g2_ParamLimits

0x11d1,	// (0x00060956) slider_imed_adjust_pane_g3_ParamLimits

0x11e2,	// (0x00060967) slider_imed_adjust_pane_g4_ParamLimits

0xf773,	// (0x0006eef8) slider_imed_adjust_pane_g_ParamLimits

0xab2d,	// (0x0006a2b2) aid_touch_area_cam4_ParamLimits

0xab2d,	// (0x0006a2b2) aid_touch_area_cam4

0xab3d,	// (0x0006a2c2) battery_pane_cp01

0xabc4,	// (0x0006a349) main_camera4_pane_g6_ParamLimits

0xabc4,	// (0x0006a349) main_camera4_pane_g6

0xabe2,	// (0x0006a367) main_camera4_pane_t2_ParamLimits

0xabe2,	// (0x0006a367) main_camera4_pane_t2

0x0001,

0xf875,	// (0x0006effa) main_camera4_pane_t_ParamLimits

0xf875,	// (0x0006effa) main_camera4_pane_t

0xac69,	// (0x0006a3ee) aid_touch_area_vid4_ParamLimits

0xac69,	// (0x0006a3ee) aid_touch_area_vid4

0xaca9,	// (0x0006a42e) main_video4_pane_g5_ParamLimits

0xaca9,	// (0x0006a42e) main_video4_pane_g5

0xaccd,	// (0x0006a452) vid4_progress_pane_ParamLimits

0xaccd,	// (0x0006a452) vid4_progress_pane

0x194a,	// (0x000610cf) main_cset_slider_pane_g18_ParamLimits

0x194a,	// (0x000610cf) main_cset_slider_pane_g18

0x1b52,	// (0x000612d7) cell_cam4_burst_pane_g2_ParamLimits

0x1b52,	// (0x000612d7) cell_cam4_burst_pane_g2

0x0001,

0xf9ca,	// (0x0006f14f) cell_cam4_burst_pane_g_ParamLimits

0xf9ca,	// (0x0006f14f) cell_cam4_burst_pane_g

0xb9fc,	// (0x0006b181) bg_cl_pane_ParamLimits

0xb9fc,	// (0x0006b181) bg_cl_pane

0xba08,	// (0x0006b18d) cl_header_pane_ParamLimits

0xba08,	// (0x0006b18d) cl_header_pane

0xba14,	// (0x0006b199) cl_listscroll_pane_ParamLimits

0xba14,	// (0x0006b199) cl_listscroll_pane

0x1d30,	// (0x000614b5) bg_cl_pane_g1

0x1d38,	// (0x000614bd) bg_cl_pane_g2

0x1d40,	// (0x000614c5) bg_cl_pane_g3

0x1d48,	// (0x000614cd) bg_cl_pane_g4

0x1d50,	// (0x000614d5) bg_cl_pane_g5

0x1d58,	// (0x000614dd) bg_cl_pane_g6

0x1d60,	// (0x000614e5) bg_cl_pane_g7

0x1d68,	// (0x000614ed) bg_cl_pane_g8

0x1d70,	// (0x000614f5) bg_cl_pane_g9

0x0008,

0xfa05,	// (0x0006f18a) bg_cl_pane_g

0xba20,	// (0x0006b1a5) aid_height_cl_leading_ParamLimits

0xba20,	// (0x0006b1a5) aid_height_cl_leading

0xba2c,	// (0x0006b1b1) aid_height_cl_text_ParamLimits

0xba2c,	// (0x0006b1b1) aid_height_cl_text

0x0b46,	// (0x000602cb) bg_cl_header_pane_ParamLimits

0x0b46,	// (0x000602cb) bg_cl_header_pane

0xba44,	// (0x0006b1c9) cl_header_pane_g1_ParamLimits

0xba44,	// (0x0006b1c9) cl_header_pane_g1

0xba51,	// (0x0006b1d6) cl_header_pane_t1_ParamLimits

0xba51,	// (0x0006b1d6) cl_header_pane_t1

0x1d78,	// (0x000614fd) cl_list_pane

0x191d,	// (0x000610a2) hc_scroll_pane_cp01

0x68fd,	// (0x00066082) bg_cl_header_pane_g1

0x1803,	// (0x00060f88) bg_cl_header_pane_g2

0x691d,	// (0x000660a2) bg_cl_header_pane_g3

0x1813,	// (0x00060f98) bg_cl_header_pane_g4

0x180b,	// (0x00060f90) bg_cl_header_pane_g5

0x1a61,	// (0x000611e6) bg_cl_header_pane_g6

0x182b,	// (0x00060fb0) bg_cl_header_pane_g7

0x1833,	// (0x00060fb8) bg_cl_header_pane_g8

0x1823,	// (0x00060fa8) bg_cl_header_pane_g9

0x0008,

0xfa18,	// (0x0006f19d) bg_cl_header_pane_g

0xba63,	// (0x0006b1e8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xba63,	// (0x0006b1e8) hc_cl_list_double_graphic_heading_pane

0xba74,	// (0x0006b1f9) hc_cl_list_single_graphic_pane_ParamLimits

0xba74,	// (0x0006b1f9) hc_cl_list_single_graphic_pane

0xba8d,	// (0x0006b212) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xba8d,	// (0x0006b212) hc_cl_list_single_graphic_pane_g1

0xba99,	// (0x0006b21e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xba99,	// (0x0006b21e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa2b,	// (0x0006f1b0) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa2b,	// (0x0006f1b0) hc_cl_list_single_graphic_pane_g

0xbaad,	// (0x0006b232) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbaad,	// (0x0006b232) hc_cl_list_single_graphic_pane_t1

0xba8d,	// (0x0006b212) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xba8d,	// (0x0006b212) hc_cl_list_double_graphic_heading_pane_g1

0xbac2,	// (0x0006b247) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbac2,	// (0x0006b247) hc_cl_list_double_graphic_heading_pane_g2

0xbad6,	// (0x0006b25b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbad6,	// (0x0006b25b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa30,	// (0x0006f1b5) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa30,	// (0x0006f1b5) hc_cl_list_double_graphic_heading_pane_g

0xbaea,	// (0x0006b26f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbaea,	// (0x0006b26f) hc_cl_list_double_graphic_heading_pane_t1

0xbaff,	// (0x0006b284) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbaff,	// (0x0006b284) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa37,	// (0x0006f1bc) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa37,	// (0x0006f1bc) hc_cl_list_double_graphic_heading_pane_t

0xbb1c,	// (0x0006b2a1) vid4_progress_pane_g1

0xbb2c,	// (0x0006b2b1) vid4_progress_pane_g2

0xbb3c,	// (0x0006b2c1) vid4_progress_pane_g3

0xbb4e,	// (0x0006b2d3) vid4_progress_pane_g4

0x0004,

0xfa3c,	// (0x0006f1c1) vid4_progress_pane_g

0xbb66,	// (0x0006b2eb) vid4_progress_pane_t1

0xbb7c,	// (0x0006b301) vid4_progress_pane_t2

0x0002,

0xfa47,	// (0x0006f1cc) vid4_progress_pane_t

0xbba6,	// (0x0006b32b) wait_bar_pane_cp07

0xeccc,	// (0x0006e451) blid_firmament_pane_ParamLimits

0xed0f,	// (0x0006e494) popup_blid_sat_info2_window_g1

0xed33,	// (0x0006e4b8) popup_blid_sat_info2_window_t3

0xed41,	// (0x0006e4c6) popup_blid_sat_info2_window_t4

0xed4f,	// (0x0006e4d4) popup_blid_sat_info2_window_t5

0xed5d,	// (0x0006e4e2) popup_blid_sat_info2_window_t6

0xed6d,	// (0x0006e4f2) popup_blid_sat_info2_window_t7

0xed7b,	// (0x0006e500) popup_blid_sat_info2_window_t8

0xed89,	// (0x0006e50e) popup_blid_sat_info2_window_t9

0xed97,	// (0x0006e51c) popup_blid_sat_info2_window_t10

0xee58,	// (0x0006e5dd) aid_firma_cardinal_ParamLimits

0xee6c,	// (0x0006e5f1) blid_firmament_pane_t1_ParamLimits

0xee83,	// (0x0006e608) blid_firmament_pane_t2_ParamLimits

0xee9a,	// (0x0006e61f) blid_firmament_pane_t3_ParamLimits

0xeeb1,	// (0x0006e636) blid_firmament_pane_t4_ParamLimits

0xf665,	// (0x0006edea) blid_firmament_pane_t_ParamLimits

0xeec8,	// (0x0006e64d) blid_sat_info_pane_ParamLimits

0x0aed,	// (0x00060272) main_cam_set_pane_ParamLimits

0xa1ad,	// (0x00069932) aid_size_cell_colour_35_ParamLimits

0xa1c7,	// (0x0006994c) aid_size_cell_colour_112_ParamLimits

0xa1de,	// (0x00069963) aid_size_cell_effect_ParamLimits

0x0aed,	// (0x00060272) bg_tb_trans_pane_cp02_ParamLimits

0xf05f,	// (0x0006e7e4) heading_imed_pane_ParamLimits

0xa1f8,	// (0x0006997d) listscroll_imed_pane_ParamLimits

0xe197,	// (0x0006d91c) popup_call2_audio_first_window_g5_ParamLimits

0xe197,	// (0x0006d91c) popup_call2_audio_first_window_g5

0xa821,	// (0x00069fa6) aid_size_touch_image3_arrow_left_ParamLimits

0xa821,	// (0x00069fa6) aid_size_touch_image3_arrow_left

0xa837,	// (0x00069fbc) aid_size_touch_image3_arrow_right_ParamLimits

0xa837,	// (0x00069fbc) aid_size_touch_image3_arrow_right

0xbb91,	// (0x0006b316) vid4_progress_pane_t3

0xa379,	// (0x00069afe) main_hwr_training_symbol_option_pane_ParamLimits

0xa379,	// (0x00069afe) main_hwr_training_symbol_option_pane

0x1397,	// (0x00060b1c) popup_hwr_training_preview_window_ParamLimits

0x1397,	// (0x00060b1c) popup_hwr_training_preview_window

0xa3da,	// (0x00069b5f) hwr_training_navi_pane_g5_ParamLimits

0xa3da,	// (0x00069b5f) hwr_training_navi_pane_g5

0x17f1,	// (0x00060f76) popup_char_count_window

0x0b46,	// (0x000602cb) bg_popup_sub_pane_cp20_ParamLimits

0xb67b,	// (0x0006ae00) list_vitu2_match_list_pane_ParamLimits

0xb687,	// (0x0006ae0c) vitu2_page_scroll_pane_ParamLimits

0xb687,	// (0x0006ae0c) vitu2_page_scroll_pane

0x1da3,	// (0x00061528) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1da3,	// (0x00061528) list_single_hwr_training_symbol_option_pane

0x1db6,	// (0x0006153b) list_single_hwr_training_symbol_option_pane_g1

0x1dbe,	// (0x00061543) list_single_hwr_training_symbol_option_pane_t1

0x1dcc,	// (0x00061551) bg_button_pane_cp023

0x1dd5,	// (0x0006155a) bg_button_pane_cp024

0x1e08,	// (0x0006158d) vitu2_page_scroll_pane_g1

0x1e10,	// (0x00061595) vitu2_page_scroll_pane_g2

0x0001,

0xfa4e,	// (0x0006f1d3) vitu2_page_scroll_pane_g

0x1e18,	// (0x0006159d) vitu2_page_scroll_pane_t1

0xec42,	// (0x0006e3c7) popup_char_count_window_g1

0x1e27,	// (0x000615ac) popup_char_count_window_g2

0x1e30,	// (0x000615b5) popup_char_count_window_g3

0x0002,

0xfa53,	// (0x0006f1d8) popup_char_count_window_g

0x1e39,	// (0x000615be) popup_char_count_window_t1

0x03ce,	// (0x0005fb53) main_vded2_pane

0x114a,	// (0x000608cf) aid_size_cell_imed_line

0x1154,	// (0x000608d9) grid_imed_line_width_pane

0xad3b,	// (0x0006a4c0) vid4_indicators_pane_g4

0x1e47,	// (0x000615cc) cell_imed_line_width_pane_ParamLimits

0x1e47,	// (0x000615cc) cell_imed_line_width_pane

0x1e5b,	// (0x000615e0) cell_imed_line_width_pane_g1

0x1e64,	// (0x000615e9) cell_imed_line_width_pane_g2

0x0001,

0xfa5a,	// (0x0006f1df) cell_imed_line_width_pane_g

0xbbc1,	// (0x0006b346) main_vded2_pane_g1_ParamLimits

0xbbc1,	// (0x0006b346) main_vded2_pane_g1

0xbbce,	// (0x0006b353) main_vded2_pane_g2_ParamLimits

0xbbce,	// (0x0006b353) main_vded2_pane_g2

0x0001,

0xfa5f,	// (0x0006f1e4) main_vded2_pane_g_ParamLimits

0xfa5f,	// (0x0006f1e4) main_vded2_pane_g

0xbbdc,	// (0x0006b361) vded2_slider_pane_ParamLimits

0xbbdc,	// (0x0006b361) vded2_slider_pane

0xbbe9,	// (0x0006b36e) aid_size_touch_vded2_end

0xbbf3,	// (0x0006b378) aid_size_touch_vded2_playhead

0x1e6c,	// (0x000615f1) aid_size_touch_vded2_start

0x1e74,	// (0x000615f9) vded2_slider_bg_pane

0x1e7d,	// (0x00061602) vded2_slider_pane_g1

0x1e86,	// (0x0006160b) vded2_slider_pane_g2

0xbbfb,	// (0x0006b380) vded2_slider_pane_g3

0x0002,

0xfa64,	// (0x0006f1e9) vded2_slider_pane_g

0x1e8e,	// (0x00061613) vded2_slider_bg_pane_g1

0x1e97,	// (0x0006161c) vded2_slider_bg_pane_g2

0x1ea0,	// (0x00061625) vded2_slider_bg_pane_g3

0x0002,

0xfa6b,	// (0x0006f1f0) vded2_slider_bg_pane_g

0x862c,	// (0x00067db1) aid_postcard_touch_down_pane_ParamLimits

0x862c,	// (0x00067db1) aid_postcard_touch_down_pane

0x863c,	// (0x00067dc1) aid_postcard_touch_up_pane_ParamLimits

0x863c,	// (0x00067dc1) aid_postcard_touch_up_pane

0x03ce,	// (0x0005fb53) main_blid2_pane

0x9336,	// (0x00068abb) popup_blid2_search_window

0x03ce,	// (0x0005fb53) blid2_gps_pane

0x03ce,	// (0x0005fb53) blid2_navig_pane

0x03ce,	// (0x0005fb53) blid2_search_pane

0x03ce,	// (0x0005fb53) blid2_tripm_pane

0xbc04,	// (0x0006b389) blid2_search_pane_g1_ParamLimits

0xbc04,	// (0x0006b389) blid2_search_pane_g1

0xbc14,	// (0x0006b399) blid2_search_pane_t1_ParamLimits

0xbc14,	// (0x0006b399) blid2_search_pane_t1

0xbc26,	// (0x0006b3ab) aid_size_cell_blid2_gps_ParamLimits

0xbc26,	// (0x0006b3ab) aid_size_cell_blid2_gps

0xbc36,	// (0x0006b3bb) blid2_gps_pane_g1_ParamLimits

0xbc36,	// (0x0006b3bb) blid2_gps_pane_g1

0xbc42,	// (0x0006b3c7) grid_blid2_satellite_pane_ParamLimits

0xbc42,	// (0x0006b3c7) grid_blid2_satellite_pane

0xbc52,	// (0x0006b3d7) blid2_navig_pane_g1_ParamLimits

0xbc52,	// (0x0006b3d7) blid2_navig_pane_g1

0xbc5e,	// (0x0006b3e3) blid2_navig_pane_t1_ParamLimits

0xbc5e,	// (0x0006b3e3) blid2_navig_pane_t1

0xbc70,	// (0x0006b3f5) blid2_navig_pane_t2_ParamLimits

0xbc70,	// (0x0006b3f5) blid2_navig_pane_t2

0x0001,

0xfa72,	// (0x0006f1f7) blid2_navig_pane_t_ParamLimits

0xfa72,	// (0x0006f1f7) blid2_navig_pane_t

0xbc82,	// (0x0006b407) blid2_navig_ring_pane_ParamLimits

0xbc82,	// (0x0006b407) blid2_navig_ring_pane

0xbc92,	// (0x0006b417) blid2_speed_pane_ParamLimits

0xbc92,	// (0x0006b417) blid2_speed_pane

0xbc9e,	// (0x0006b423) blid2_tripm_pane_g1_ParamLimits

0xbc9e,	// (0x0006b423) blid2_tripm_pane_g1

0xbcae,	// (0x0006b433) blid2_tripm_pane_g2_ParamLimits

0xbcae,	// (0x0006b433) blid2_tripm_pane_g2

0xbcba,	// (0x0006b43f) blid2_tripm_pane_g3_ParamLimits

0xbcba,	// (0x0006b43f) blid2_tripm_pane_g3

0xbcc6,	// (0x0006b44b) blid2_tripm_pane_g4_ParamLimits

0xbcc6,	// (0x0006b44b) blid2_tripm_pane_g4

0xbcd2,	// (0x0006b457) blid2_tripm_pane_g5_ParamLimits

0xbcd2,	// (0x0006b457) blid2_tripm_pane_g5

0x0005,

0xfa77,	// (0x0006f1fc) blid2_tripm_pane_g_ParamLimits

0xfa77,	// (0x0006f1fc) blid2_tripm_pane_g

0xbcee,	// (0x0006b473) blid2_tripm_pane_t1_ParamLimits

0xbcee,	// (0x0006b473) blid2_tripm_pane_t1

0xbd02,	// (0x0006b487) blid2_tripm_pane_t2_ParamLimits

0xbd02,	// (0x0006b487) blid2_tripm_pane_t2

0xbd14,	// (0x0006b499) blid2_tripm_pane_t3_ParamLimits

0xbd14,	// (0x0006b499) blid2_tripm_pane_t3

0x0003,

0xfa84,	// (0x0006f209) blid2_tripm_pane_t_ParamLimits

0xfa84,	// (0x0006f209) blid2_tripm_pane_t

0xbd46,	// (0x0006b4cb) cell_blid2_satellite_pane_ParamLimits

0xbd46,	// (0x0006b4cb) cell_blid2_satellite_pane

0xbd60,	// (0x0006b4e5) cell_blid2_satellite_pane_g1

0x1ea9,	// (0x0006162e) cell_blid2_satellite_pane_t1

0x618c,	// (0x00065911) blid2_speed_pane_g1

0x1eb7,	// (0x0006163c) blid2_speed_pane_t1

0x1ec5,	// (0x0006164a) blid2_speed_pane_t2

0x0001,

0xfa8d,	// (0x0006f212) blid2_speed_pane_t

0x618c,	// (0x00065911) blid2_navig_ring_pane_g1

0xbd69,	// (0x0006b4ee) blid2_navig_ring_pane_g2

0xbd71,	// (0x0006b4f6) blid2_navig_ring_pane_g3

0xbd79,	// (0x0006b4fe) blid2_navig_ring_pane_g4

0xbd81,	// (0x0006b506) blid2_navig_ring_pane_g5

0x0004,

0xfa92,	// (0x0006f217) blid2_navig_ring_pane_g

0x03ce,	// (0x0005fb53) bg_popup_window_pane_cp011

0x1ed3,	// (0x00061658) popup_blid2_search_window_g1

0x1edb,	// (0x00061660) popup_blid2_search_window_t1

0x1ee9,	// (0x0006166e) popup_blid2_search_window_t2

0x0001,

0xfa9d,	// (0x0006f222) popup_blid2_search_window_t

0x6777,	// (0x00065efc) main_browser_pane_g1

0x5746,	// (0x00064ecb) main_browser_pane_ParamLimits

0x0aed,	// (0x00060272) bg_button_pane_cp011_ParamLimits

0xaf74,	// (0x0006a6f9) cell_vitu2_function_pane_g1_ParamLimits

0xea8e,	// (0x0006e213) bg_popup_sub_pane_cp22_ParamLimits

0x47e5,	// (0x00063f6a) input_focus_pane_cp08_ParamLimits

0xb80d,	// (0x0006af92) popup_vitu2_query_button_pane_ParamLimits

0xb80d,	// (0x0006af92) popup_vitu2_query_button_pane

0x47fc,	// (0x00063f81) popup_vitu2_query_input_button_pane

0x1a9c,	// (0x00061221) popup_vitu2_query_window_g1_ParamLimits

0x4806,	// (0x00063f8b) popup_vitu2_query_window_g2_ParamLimits

0xf99e,	// (0x0006f123) popup_vitu2_query_window_g_ParamLimits

0x03ce,	// (0x0005fb53) bg_button_pane_cp026

0xbd89,	// (0x0006b50e) popup_vitu2_query_input_button_pane_g1

0x03ce,	// (0x0005fb53) bg_button_pane_cp025

0x1ef7,	// (0x0006167c) popup_vitu2_query_button_pane_t1

0x97b0,	// (0x00068f35) main_mp3_pane_t6

0x97c0,	// (0x00068f45) popup_slider_window_cp01

0xac18,	// (0x0006a39d) cam4_battery_pane

0xacf8,	// (0x0006a47d) cam4_battery_pane_cp02

0xbb14,	// (0x0006b299) cam4_battery_pane_cp01

0xbb14,	// (0x0006b299) cam4_battery_pane_cp03

0x618c,	// (0x00065911) cam4_battery_pane_g1

0x0dbb,	// (0x00060540) cam4_battery_pane_g2

0x0001,

0xfaa2,	// (0x0006f227) cam4_battery_pane_g

0xeda5,	// (0x0006e52a) popup_blid_sat_info2_window_t11

0x7fab,	// (0x00067730) aid_size_touch_mv_arrow_left_ParamLimits

0x7fd4,	// (0x00067759) aid_size_touch_mv_arrow_right_ParamLimits

0x8032,	// (0x000677b7) navi_pane_g1_ParamLimits

0x803e,	// (0x000677c3) navi_pane_g2_ParamLimits

0x806c,	// (0x000677f1) navi_pane_g3_ParamLimits

0xf379,	// (0x0006eafe) navi_pane_g_ParamLimits

0x812a,	// (0x000678af) navi_pane_mv_t1_ParamLimits

0xa204,	// (0x00069989) grid_imed_effect_pane_ParamLimits

0x62a0,	// (0x00065a25) aid_placing_vt_slider_lsc

0x62b8,	// (0x00065a3d) aid_placing_vt_slider_prt

0x0aed,	// (0x00060272) bg_tb_trans_pane_cp01_ParamLimits

0xf04c,	// (0x0006e7d1) popup_image_details_window_g1_ParamLimits

0x0dc5,	// (0x0006054a) popup_image_details_window_g2_ParamLimits

0x0dda,	// (0x0006055f) popup_image_details_window_g3_ParamLimits

0x0dda,	// (0x0006055f) popup_image_details_window_g3

0xf6a5,	// (0x0006ee2a) popup_image_details_window_g_ParamLimits

0x0dee,	// (0x00060573) popup_image_details_window_t1_ParamLimits

0x0e00,	// (0x00060585) popup_image_details_window_t2_ParamLimits

0x0e19,	// (0x0006059e) popup_image_details_window_t3_ParamLimits

0x0e2d,	// (0x000605b2) popup_image_details_window_t4_ParamLimits

0x0e48,	// (0x000605cd) popup_image_details_window_t5_ParamLimits

0xf6ac,	// (0x0006ee31) popup_image_details_window_t_ParamLimits

0xba38,	// (0x0006b1bd) cl_header_name_pane_ParamLimits

0xba38,	// (0x0006b1bd) cl_header_name_pane

0xbd91,	// (0x0006b516) cl_header_name_pane_t1_ParamLimits

0xbd91,	// (0x0006b516) cl_header_name_pane_t1

0xbda8,	// (0x0006b52d) cl_header_name_pane_t2_ParamLimits

0xbda8,	// (0x0006b52d) cl_header_name_pane_t2

0xbdd2,	// (0x0006b557) cl_header_name_pane_t3_ParamLimits

0xbdd2,	// (0x0006b557) cl_header_name_pane_t3

0x0002,

0xfaa7,	// (0x0006f22c) cl_header_name_pane_t_ParamLimits

0xfaa7,	// (0x0006f22c) cl_header_name_pane_t

0x80fb,	// (0x00067880) navi_pane_mv_g2_ParamLimits

0x17bc,	// (0x00060f41) field_vitu2_entry_pane_g1_ParamLimits

0x17c8,	// (0x00060f4d) field_vitu2_entry_pane_g2_ParamLimits

0xeb6b,	// (0x0006e2f0) field_vitu2_entry_pane_g3_ParamLimits

0xeb6b,	// (0x0006e2f0) field_vitu2_entry_pane_g3

0xf8a7,	// (0x0006f02c) field_vitu2_entry_pane_g_ParamLimits

0xaf02,	// (0x0006a687) cell_vitu2_itu_pane_g1_ParamLimits

0xaf1a,	// (0x0006a69f) cell_vitu2_itu_pane_g2_ParamLimits

0xaf1a,	// (0x0006a69f) cell_vitu2_itu_pane_g2

0x0001,

0xf8b3,	// (0x0006f038) cell_vitu2_itu_pane_g_ParamLimits

0xf8b3,	// (0x0006f038) cell_vitu2_itu_pane_g

0x0aed,	// (0x00060272) bg_vkb2_func_pane_cp05_ParamLimits

0x0aed,	// (0x00060272) bg_vkb2_func_pane_cp05

0x0aed,	// (0x00060272) bg_vkb2_func_pane_cp03

0x0aed,	// (0x00060272) bg_vkb2_func_pane_cp04

0x0aed,	// (0x00060272) bg_vkb2_func_pane_cp10_ParamLimits

0x0aed,	// (0x00060272) bg_vkb2_func_pane_cp10

0x49bb,	// (0x00064140) bg_vkb2_func_pane_cp08

0xb9e2,	// (0x0006b167) bg_vkb2_func_pane_cp06

0xb9f0,	// (0x0006b175) bg_vkb2_func_pane_cp07

0x1dde,	// (0x00061563) bg_vkb2_func_pane_cp11_ParamLimits

0x1dde,	// (0x00061563) bg_vkb2_func_pane_cp11

0x1df3,	// (0x00061578) bg_vkb2_func_pane_cp12_ParamLimits

0x1df3,	// (0x00061578) bg_vkb2_func_pane_cp12

0x03ce,	// (0x0005fb53) bg_vkb2_func_pane_cp09

0x1803,	// (0x00060f88) bg_vkb2_func_pane_g1

0x691d,	// (0x000660a2) bg_vkb2_func_pane_g2

0x180b,	// (0x00060f90) bg_vkb2_func_pane_g3

0x1813,	// (0x00060f98) bg_vkb2_func_pane_g4

0x1a61,	// (0x000611e6) bg_vkb2_func_pane_g5

0x182b,	// (0x00060fb0) bg_vkb2_func_pane_g6

0x1833,	// (0x00060fb8) bg_vkb2_func_pane_g7

0x1823,	// (0x00060fa8) bg_vkb2_func_pane_g8

0x68fd,	// (0x00066082) bg_vkb2_func_pane_g9

0x0008,

0xfaae,	// (0x0006f233) bg_vkb2_func_pane_g

0xbce0,	// (0x0006b465) blid2_tripm_pane_g6_ParamLimits

0xbce0,	// (0x0006b465) blid2_tripm_pane_g6

0x16ce,	// (0x00060e53) mp4_progress_pane_g1

0xbd3a,	// (0x0006b4bf) blid2_tripm_values_pane_ParamLimits

0xbd3a,	// (0x0006b4bf) blid2_tripm_values_pane

0xbdf7,	// (0x0006b57c) blid2_tripm_values_pane_t1

0xbe05,	// (0x0006b58a) blid2_tripm_values_pane_t2

0xbe13,	// (0x0006b598) blid2_tripm_values_pane_t3

0xbe21,	// (0x0006b5a6) blid2_tripm_values_pane_t4

0xbe2f,	// (0x0006b5b4) blid2_tripm_values_pane_t5

0xbe3d,	// (0x0006b5c2) blid2_tripm_values_pane_t6

0xbe4b,	// (0x0006b5d0) blid2_tripm_values_pane_t7

0xbe59,	// (0x0006b5de) blid2_tripm_values_pane_t8

0xbe67,	// (0x0006b5ec) blid2_tripm_values_pane_t9

0x0008,

0xfac1,	// (0x0006f246) blid2_tripm_values_pane_t

0x62ea,	// (0x00065a6f) call_video_pane_t1_ParamLimits

0x630b,	// (0x00065a90) call_video_pane_t2_ParamLimits

0xf222,	// (0x0006e9a7) call_video_pane_t_ParamLimits

0x45de,	// (0x00063d63) msg_header_pane_g1_ParamLimits

0x8554,	// (0x00067cd9) msg_header_pane_g2_ParamLimits

0x8554,	// (0x00067cd9) msg_header_pane_g2

0x0001,

0xf41c,	// (0x0006eba1) msg_header_pane_g_ParamLimits

0xf41c,	// (0x0006eba1) msg_header_pane_g

0x5746,	// (0x00064ecb) main_clock2_pane_ParamLimits

0x9f7e,	// (0x00069703) grid_clock2_toolbar_pane_ParamLimits

0x9f7e,	// (0x00069703) grid_clock2_toolbar_pane

0x9f7e,	// (0x00069703) listscroll_clock2_pane_ParamLimits

0x9f7e,	// (0x00069703) listscroll_clock2_pane

0xa02e,	// (0x000697b3) main_clock2_pane_t3_ParamLimits

0xa02e,	// (0x000697b3) main_clock2_pane_t3

0xa040,	// (0x000697c5) main_clock2_pane_t4_ParamLimits

0xa040,	// (0x000697c5) main_clock2_pane_t4

0x1f05,	// (0x0006168a) cell_clock2_toolbar_pane

0x1f0d,	// (0x00061692) cell_clock2_toolbar_pane_cp01

0x1f0d,	// (0x00061692) cell_clock2_toolbar_pane_cp02

0x1f15,	// (0x0006169a) cell_clock2_toolbar_pane_cp03

0x1f1d,	// (0x000616a2) list_clock2_pane

0x7d6d,	// (0x000674f2) scroll_pane_cp10

0x1f25,	// (0x000616aa) list_single_clock2_pane_ParamLimits

0x1f25,	// (0x000616aa) list_single_clock2_pane

0x5fce,	// (0x00065753) list_highlight_pane_cp08

0x1f32,	// (0x000616b7) list_single_clock2_pane_t1

0x1f40,	// (0x000616c5) list_single_clock2_pane_t2

0x0001,

0xfad4,	// (0x0006f259) list_single_clock2_pane_t

0x03ce,	// (0x0005fb53) bg_button_pane_cp10

0x1f4e,	// (0x000616d3) cell_clock2_toolbar_pane_g1

0x8580,	// (0x00067d05) aid_main_viewer_pane_g1_ParamLimits

0x8580,	// (0x00067d05) aid_main_viewer_pane_g1

0x858c,	// (0x00067d11) aid_main_viewer_pane_g2_ParamLimits

0x858c,	// (0x00067d11) aid_main_viewer_pane_g2

0x8598,	// (0x00067d1d) aid_main_viewer_pane_g3_ParamLimits

0x8598,	// (0x00067d1d) aid_main_viewer_pane_g3

0x85a9,	// (0x00067d2e) aid_main_viewer_pane_g4_ParamLimits

0x85a9,	// (0x00067d2e) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x0006ebb2) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x0006ebb2) aid_main_viewer_pane_g

0x9302,	// (0x00068a87) main_calc_pane_ParamLimits

0x930f,	// (0x00068a94) main_dialer2_pane_ParamLimits

0x03ce,	// (0x0005fb53) main_cam6_pane

0x03ce,	// (0x0005fb53) main_vid6_pane

0x9f8a,	// (0x0006970f) listscroll_gen_pane_cp06_ParamLimits

0x9f8a,	// (0x0006970f) listscroll_gen_pane_cp06

0xa052,	// (0x000697d7) main_clock2_pane_t5_ParamLimits

0xa052,	// (0x000697d7) main_clock2_pane_t5

0xa09f,	// (0x00069824) aid_call2_pane_cp10_ParamLimits

0xa0b1,	// (0x00069836) aid_call_pane_cp10_ParamLimits

0x7f36,	// (0x000676bb) popup_clock_analogue_window_cp10_g1_ParamLimits

0x7f36,	// (0x000676bb) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa0c3,	// (0x00069848) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa0c3,	// (0x00069848) popup_clock_analogue_window_cp10_g4_ParamLimits

0x7f36,	// (0x000676bb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf761,	// (0x0006eee6) popup_clock_analogue_window_cp10_g_ParamLimits

0xa0d9,	// (0x0006985e) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa7ce,	// (0x00069f53) cell_dialer2_keypad_pane_g2_ParamLimits

0xa7ce,	// (0x00069f53) cell_dialer2_keypad_pane_g2

0x0001,

0xf846,	// (0x0006efcb) cell_dialer2_keypad_pane_g_ParamLimits

0xf846,	// (0x0006efcb) cell_dialer2_keypad_pane_g

0xa7ea,	// (0x00069f6f) cell_dialer2_keypad_pane_t1

0xb246,	// (0x0006a9cb) main_cset_text2_pane_ParamLimits

0xb246,	// (0x0006a9cb) main_cset_text2_pane

0x1c88,	// (0x0006140d) area_vitu2_query_pane_g1_ParamLimits

0x48e6,	// (0x0006406b) area_vitu2_query_pane_g2_ParamLimits

0xf9f1,	// (0x0006f176) area_vitu2_query_pane_g_ParamLimits

0x4997,	// (0x0006411c) area_vitu2_query_pane_t7_ParamLimits

0x4997,	// (0x0006411c) area_vitu2_query_pane_t7

0xb9e2,	// (0x0006b167) bg_button_pane_cp018_ParamLimits

0xb9f0,	// (0x0006b175) bg_button_pane_cp021_ParamLimits

0x49bb,	// (0x00064140) bg_button_pane_cp022_ParamLimits

0x49bb,	// (0x00064140) bg_vkb2_func_pane_cp08_ParamLimits

0xb9e2,	// (0x0006b167) bg_vkb2_func_pane_cp06_ParamLimits

0xb9f0,	// (0x0006b175) bg_vkb2_func_pane_cp07_ParamLimits

0x49cc,	// (0x00064151) input_focus_pane_cp09_ParamLimits

0xbe75,	// (0x0006b5fa) cam6_autofocus_pane_ParamLimits

0xbe75,	// (0x0006b5fa) cam6_autofocus_pane

0xbe97,	// (0x0006b61c) cam6_image_uncrop_pane_ParamLimits

0xbe97,	// (0x0006b61c) cam6_image_uncrop_pane

0xbec4,	// (0x0006b649) cam6_indi_pane_ParamLimits

0xbec4,	// (0x0006b649) cam6_indi_pane

0xbede,	// (0x0006b663) cam6_mode_pane_ParamLimits

0xbede,	// (0x0006b663) cam6_mode_pane

0xbef2,	// (0x0006b677) cam6_timer_pane_ParamLimits

0xbef2,	// (0x0006b677) cam6_timer_pane

0xbefe,	// (0x0006b683) cam6_zoom_pane_ParamLimits

0xbefe,	// (0x0006b683) cam6_zoom_pane

0xbf16,	// (0x0006b69b) cam6_mode_pane_g1_ParamLimits

0xbf16,	// (0x0006b69b) cam6_mode_pane_g1

0xbf22,	// (0x0006b6a7) cam6_mode_pane_g2_ParamLimits

0xbf22,	// (0x0006b6a7) cam6_mode_pane_g2

0xbf2e,	// (0x0006b6b3) cam6_mode_pane_g3_ParamLimits

0xbf2e,	// (0x0006b6b3) cam6_mode_pane_g3

0xbf3a,	// (0x0006b6bf) cam6_mode_pane_g4_ParamLimits

0xbf3a,	// (0x0006b6bf) cam6_mode_pane_g4

0x0003,

0xfad9,	// (0x0006f25e) cam6_mode_pane_g_ParamLimits

0xfad9,	// (0x0006f25e) cam6_mode_pane_g

0xf06b,	// (0x0006e7f0) bg_tb_trans_pane_cp08_ParamLimits

0xf06b,	// (0x0006e7f0) bg_tb_trans_pane_cp08

0x1f56,	// (0x000616db) cam6_battery_pane_ParamLimits

0x1f56,	// (0x000616db) cam6_battery_pane

0x1f6c,	// (0x000616f1) cam6_indi_pane_g1_ParamLimits

0x1f6c,	// (0x000616f1) cam6_indi_pane_g1

0x1f7e,	// (0x00061703) cam6_indi_pane_g2_ParamLimits

0x1f7e,	// (0x00061703) cam6_indi_pane_g2

0x1f90,	// (0x00061715) cam6_indi_pane_g3_ParamLimits

0x1f90,	// (0x00061715) cam6_indi_pane_g3

0x0002,

0xfae2,	// (0x0006f267) cam6_indi_pane_g_ParamLimits

0xfae2,	// (0x0006f267) cam6_indi_pane_g

0x1fa2,	// (0x00061727) cam6_indi_pane_t1_ParamLimits

0x1fa2,	// (0x00061727) cam6_indi_pane_t1

0xad70,	// (0x0006a4f5) cam6_autofocus_pane_g1

0xad78,	// (0x0006a4fd) cam6_autofocus_pane_g2

0xad80,	// (0x0006a505) cam6_autofocus_pane_g3

0xad88,	// (0x0006a50d) cam6_autofocus_pane_g4

0x0003,

0xfae9,	// (0x0006f26e) cam6_autofocus_pane_g

0x1fc8,	// (0x0006174d) cam6_timer_pane_g1

0x1fd0,	// (0x00061755) cam6_timer_pane_t1

0x1fde,	// (0x00061763) cam6_zoom_cont_pane

0x1fe6,	// (0x0006176b) cam6_zoom_pane_g1

0x1fee,	// (0x00061773) cam6_zoom_pane_g2

0xbf46,	// (0x0006b6cb) cam6_zoom_pane_g3

0x0002,

0xfaf2,	// (0x0006f277) cam6_zoom_pane_g

0x618c,	// (0x00065911) cam6_battery_pane_g1

0x618c,	// (0x00065911) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x0006eb62) cam6_battery_pane_g

0x1ff6,	// (0x0006177b) cam6_zoom_cont_pane_g1

0x1fff,	// (0x00061784) cam6_zoom_cont_pane_g2

0x2008,	// (0x0006178d) cam6_zoom_cont_pane_g3

0x0002,

0xfaf9,	// (0x0006f27e) cam6_zoom_cont_pane_g

0xbf63,	// (0x0006b6e8) cam6_mode_pane_cp_ParamLimits

0xbf63,	// (0x0006b6e8) cam6_mode_pane_cp

0xbefe,	// (0x0006b683) cam6_zoom_pane_cp_ParamLimits

0xbefe,	// (0x0006b683) cam6_zoom_pane_cp

0xbf77,	// (0x0006b6fc) vid6_image_uncrop_cif_pane_ParamLimits

0xbf77,	// (0x0006b6fc) vid6_image_uncrop_cif_pane

0xbfa3,	// (0x0006b728) vid6_image_uncrop_nhd_pane_ParamLimits

0xbfa3,	// (0x0006b728) vid6_image_uncrop_nhd_pane

0xbe97,	// (0x0006b61c) vid6_image_uncrop_vga_pane_ParamLimits

0xbe97,	// (0x0006b61c) vid6_image_uncrop_vga_pane

0xbfc0,	// (0x0006b745) vid6_image_uncrop_wvga_pane_ParamLimits

0xbfc0,	// (0x0006b745) vid6_image_uncrop_wvga_pane

0xbfdd,	// (0x0006b762) vid6_indi_pane_ParamLimits

0xbfdd,	// (0x0006b762) vid6_indi_pane

0xf06b,	// (0x0006e7f0) bg_tb_trans_pane_cp09_ParamLimits

0xf06b,	// (0x0006e7f0) bg_tb_trans_pane_cp09

0x2020,	// (0x000617a5) cam6_battery_pane_cp_ParamLimits

0x2020,	// (0x000617a5) cam6_battery_pane_cp

0x202c,	// (0x000617b1) vid6_indi_pane_g1_ParamLimits

0x202c,	// (0x000617b1) vid6_indi_pane_g1

0x203e,	// (0x000617c3) vid6_indi_pane_g2_ParamLimits

0x203e,	// (0x000617c3) vid6_indi_pane_g2

0x2050,	// (0x000617d5) vid6_indi_pane_g3_ParamLimits

0x2050,	// (0x000617d5) vid6_indi_pane_g3

0x2065,	// (0x000617ea) vid6_indi_pane_g4_ParamLimits

0x2065,	// (0x000617ea) vid6_indi_pane_g4

0x207a,	// (0x000617ff) vid6_indi_pane_g5_ParamLimits

0x207a,	// (0x000617ff) vid6_indi_pane_g5

0x0004,

0xfb00,	// (0x0006f285) vid6_indi_pane_g_ParamLimits

0xfb00,	// (0x0006f285) vid6_indi_pane_g

0x2094,	// (0x00061819) vid6_indi_pane_t1_ParamLimits

0x2094,	// (0x00061819) vid6_indi_pane_t1

0x20aa,	// (0x0006182f) vid6_indi_pane_t2_ParamLimits

0x20aa,	// (0x0006182f) vid6_indi_pane_t2

0x20d2,	// (0x00061857) vid6_indi_pane_t3_ParamLimits

0x20d2,	// (0x00061857) vid6_indi_pane_t3

0x20fa,	// (0x0006187f) vid6_indi_pane_t4_ParamLimits

0x20fa,	// (0x0006187f) vid6_indi_pane_t4

0x0003,

0xfb0b,	// (0x0006f290) vid6_indi_pane_t_ParamLimits

0xfb0b,	// (0x0006f290) vid6_indi_pane_t

0x211e,	// (0x000618a3) wait_bar_pane_cp08

0xc002,	// (0x0006b787) main_cset_text2_pane_t1_ParamLimits

0xc002,	// (0x0006b787) main_cset_text2_pane_t1

0xbf4e,	// (0x0006b6d3) listscroll_gen_pane_cp06_t1_ParamLimits

0xbf4e,	// (0x0006b6d3) listscroll_gen_pane_cp06_t1

0x03ce,	// (0x0005fb53) main_cam6_set_pane

0x5569,	// (0x00064cee) bg_tb_trans_pane_cp06_ParamLimits

0xac20,	// (0x0006a3a5) cam4_indicators_pane_g1_ParamLimits

0xac31,	// (0x0006a3b6) cam4_indicators_pane_g2_ParamLimits

0xf883,	// (0x0006f008) cam4_indicators_pane_g_ParamLimits

0xac4f,	// (0x0006a3d4) cam4_indicators_pane_t1_ParamLimits

0x0aed,	// (0x00060272) bg_tb_trans_pane_cp07_ParamLimits

0xad02,	// (0x0006a487) vid4_indicators_pane_g1_ParamLimits

0xad16,	// (0x0006a49b) vid4_indicators_pane_g2_ParamLimits

0xad2a,	// (0x0006a4af) vid4_indicators_pane_g3_ParamLimits

0xad3b,	// (0x0006a4c0) vid4_indicators_pane_g4_ParamLimits

0xf895,	// (0x0006f01a) vid4_indicators_pane_g_ParamLimits

0xad59,	// (0x0006a4de) vid4_indicators_pane_t1_ParamLimits

0xbb1c,	// (0x0006b2a1) vid4_progress_pane_g1_ParamLimits

0xbb2c,	// (0x0006b2b1) vid4_progress_pane_g2_ParamLimits

0xbb3c,	// (0x0006b2c1) vid4_progress_pane_g3_ParamLimits

0xbb4e,	// (0x0006b2d3) vid4_progress_pane_g4_ParamLimits

0xfa3c,	// (0x0006f1c1) vid4_progress_pane_g_ParamLimits

0xbb66,	// (0x0006b2eb) vid4_progress_pane_t1_ParamLimits

0xbb7c,	// (0x0006b301) vid4_progress_pane_t2_ParamLimits

0xbb91,	// (0x0006b316) vid4_progress_pane_t3_ParamLimits

0xfa47,	// (0x0006f1cc) vid4_progress_pane_t_ParamLimits

0xbba6,	// (0x0006b32b) wait_bar_pane_cp07_ParamLimits

0xc035,	// (0x0006b7ba) main_cam6_set_pane_g2_ParamLimits

0xc035,	// (0x0006b7ba) main_cam6_set_pane_g2

0xc041,	// (0x0006b7c6) main_cset6_listscroll_pane_ParamLimits

0xc041,	// (0x0006b7c6) main_cset6_listscroll_pane

0xc06c,	// (0x0006b7f1) main_cset6_slider_pane_ParamLimits

0xc06c,	// (0x0006b7f1) main_cset6_slider_pane

0xc078,	// (0x0006b7fd) main_cset6_text2_pane_ParamLimits

0xc078,	// (0x0006b7fd) main_cset6_text2_pane

0x212d,	// (0x000618b2) main_cset6_text_pane

0x2135,	// (0x000618ba) main_cset_list_pane_copy1_ParamLimits

0x2135,	// (0x000618ba) main_cset_list_pane_copy1

0x2145,	// (0x000618ca) scroll_pane_cp028_copy1

0xc08b,	// (0x0006b810) cset_list_set_pane_copy1

0xc09e,	// (0x0006b823) aid_position_infowindow_above_copy1

0xc0a6,	// (0x0006b82b) aid_position_infowindow_below_copy1

0xc0ae,	// (0x0006b833) cset_list_set_pane_g1_copy1

0x47af,	// (0x00063f34) cset_list_set_pane_g3_copy1_ParamLimits

0x47af,	// (0x00063f34) cset_list_set_pane_g3_copy1

0x47be,	// (0x00063f43) cset_list_set_pane_t1_copy1_ParamLimits

0x47be,	// (0x00063f43) cset_list_set_pane_t1_copy1

0x0aed,	// (0x00060272) list_highlight_pane_cp021_copy1_ParamLimits

0x0aed,	// (0x00060272) list_highlight_pane_cp021_copy1

0x214e,	// (0x000618d3) cset6_slider_pane_ParamLimits

0x214e,	// (0x000618d3) cset6_slider_pane

0x217a,	// (0x000618ff) main_cset6_slider_pane_g1_ParamLimits

0x217a,	// (0x000618ff) main_cset6_slider_pane_g1

0xc0b6,	// (0x0006b83b) main_cset6_slider_pane_g2_ParamLimits

0xc0b6,	// (0x0006b83b) main_cset6_slider_pane_g2

0x21a2,	// (0x00061927) main_cset6_slider_pane_g3_ParamLimits

0x21a2,	// (0x00061927) main_cset6_slider_pane_g3

0xc0de,	// (0x0006b863) main_cset6_slider_pane_g4_ParamLimits

0xc0de,	// (0x0006b863) main_cset6_slider_pane_g4

0xc0ea,	// (0x0006b86f) main_cset6_slider_pane_g5_ParamLimits

0xc0ea,	// (0x0006b86f) main_cset6_slider_pane_g5

0x1932,	// (0x000610b7) main_cset6_slider_pane_g7_ParamLimits

0x1932,	// (0x000610b7) main_cset6_slider_pane_g7

0x193e,	// (0x000610c3) main_cset6_slider_pane_g8_ParamLimits

0x193e,	// (0x000610c3) main_cset6_slider_pane_g8

0xc0f8,	// (0x0006b87d) main_cset6_slider_pane_g9_ParamLimits

0xc0f8,	// (0x0006b87d) main_cset6_slider_pane_g9

0xc104,	// (0x0006b889) main_cset6_slider_pane_g10_ParamLimits

0xc104,	// (0x0006b889) main_cset6_slider_pane_g10

0xc110,	// (0x0006b895) main_cset6_slider_pane_g11_ParamLimits

0xc110,	// (0x0006b895) main_cset6_slider_pane_g11

0xc11c,	// (0x0006b8a1) main_cset6_slider_pane_g12_ParamLimits

0xc11c,	// (0x0006b8a1) main_cset6_slider_pane_g12

0xc128,	// (0x0006b8ad) main_cset6_slider_pane_g13_ParamLimits

0xc128,	// (0x0006b8ad) main_cset6_slider_pane_g13

0xc134,	// (0x0006b8b9) main_cset6_slider_pane_g14_ParamLimits

0xc134,	// (0x0006b8b9) main_cset6_slider_pane_g14

0xc140,	// (0x0006b8c5) main_cset6_slider_pane_g15_ParamLimits

0xc140,	// (0x0006b8c5) main_cset6_slider_pane_g15

0xc158,	// (0x0006b8dd) main_cset6_slider_pane_g16_ParamLimits

0xc158,	// (0x0006b8dd) main_cset6_slider_pane_g16

0xc166,	// (0x0006b8eb) main_cset6_slider_pane_g17_ParamLimits

0xc166,	// (0x0006b8eb) main_cset6_slider_pane_g17

0x0011,

0xfb14,	// (0x0006f299) main_cset6_slider_pane_g_ParamLimits

0xfb14,	// (0x0006f299) main_cset6_slider_pane_g

0x21ae,	// (0x00061933) main_cset6_slider_pane_t1_ParamLimits

0x21ae,	// (0x00061933) main_cset6_slider_pane_t1

0xc18c,	// (0x0006b911) main_cset6_slider_pane_t2_ParamLimits

0xc18c,	// (0x0006b911) main_cset6_slider_pane_t2

0xc1b7,	// (0x0006b93c) main_cset6_slider_pane_t3_ParamLimits

0xc1b7,	// (0x0006b93c) main_cset6_slider_pane_t3

0xc1e2,	// (0x0006b967) main_cset6_slider_pane_t4_ParamLimits

0xc1e2,	// (0x0006b967) main_cset6_slider_pane_t4

0xc20d,	// (0x0006b992) main_cset6_slider_pane_t5_ParamLimits

0xc20d,	// (0x0006b992) main_cset6_slider_pane_t5

0x21ef,	// (0x00061974) main_cset6_slider_pane_t7_ParamLimits

0x21ef,	// (0x00061974) main_cset6_slider_pane_t7

0xc23a,	// (0x0006b9bf) main_cset6_slider_pane_t8_ParamLimits

0xc23a,	// (0x0006b9bf) main_cset6_slider_pane_t8

0xc25e,	// (0x0006b9e3) main_cset6_slider_pane_t9_ParamLimits

0xc25e,	// (0x0006b9e3) main_cset6_slider_pane_t9

0xc282,	// (0x0006ba07) main_cset6_slider_pane_t10_ParamLimits

0xc282,	// (0x0006ba07) main_cset6_slider_pane_t10

0xc2a6,	// (0x0006ba2b) main_cset6_slider_pane_t11_ParamLimits

0xc2a6,	// (0x0006ba2b) main_cset6_slider_pane_t11

0x2225,	// (0x000619aa) main_cset6_slider_pane_t14_ParamLimits

0x2225,	// (0x000619aa) main_cset6_slider_pane_t14

0x225e,	// (0x000619e3) main_cset6_slider_pane_t15_ParamLimits

0x225e,	// (0x000619e3) main_cset6_slider_pane_t15

0x000b,

0xfb39,	// (0x0006f2be) main_cset6_slider_pane_t_ParamLimits

0xfb39,	// (0x0006f2be) main_cset6_slider_pane_t

0x2297,	// (0x00061a1c) cset_slider_pane_g1_copy1

0x22a0,	// (0x00061a25) cset_slider_pane_g2_copy1

0x22a9,	// (0x00061a2e) cset_slider_pane_g3_copy1

0x03ce,	// (0x0005fb53) bg_popup_sub_pane_cp011_copy1

0x22b2,	// (0x00061a37) main_cset_text_pane_g1_copy1

0x1ab0,	// (0x00061235) main_cset_text_pane_t1_copy1

0x1abe,	// (0x00061243) main_cset_text_pane_t2_copy1

0x1acc,	// (0x00061251) main_cset_text_pane_t3_copy1

0x1ada,	// (0x0006125f) main_cset_text_pane_t4_copy1

0x1ae8,	// (0x0006126d) main_cset_text_pane_t5_copy1

0x22ba,	// (0x00061a3f) main_cset_text_pane_t6_copy1

0x22c8,	// (0x00061a4d) main_cset_text_pane_t7_copy1

0xc2ca,	// (0x0006ba4f) main_cset_text2_pane_t1_copy1

0x0aed,	// (0x00060272) main_ncimui_pane

0x936c,	// (0x00068af1) popup_query_ncimui_window_ParamLimits

0x936c,	// (0x00068af1) popup_query_ncimui_window

0x9919,	// (0x0006909e) field_cale_ev2_pane_g4_ParamLimits

0x9919,	// (0x0006909e) field_cale_ev2_pane_g4

0xa4ae,	// (0x00069c33) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa4ae,	// (0x00069c33) cell_video_dialer_keypad_pane_g2

0x0001,

0xf81d,	// (0x0006efa2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf81d,	// (0x0006efa2) cell_video_dialer_keypad_pane_g

0xa4c6,	// (0x00069c4b) cell_video_dialer_keypad_pane_t1

0x03ce,	// (0x0005fb53) bg_popup_window_pane_cp012

0xe9ea,	// (0x0006e16f) heading_pane_cp06

0x22f4,	// (0x00061a79) ncim_query_content_pane

0x03ce,	// (0x0005fb53) bg_popup_heading_pane_cp01

0x22fc,	// (0x00061a81) ncim_heading_pane_t1

0x230a,	// (0x00061a8f) ncim_indicator_popup_pane

0x231c,	// (0x00061aa1) ncim_query_button_pane

0x2330,	// (0x00061ab5) ncim_query_content_pane_t1

0x2342,	// (0x00061ac7) ncim_query_content_pane_t2

0x0005,

0xfb7d,	// (0x0006f302) ncim_query_content_pane_t

0x237c,	// (0x00061b01) ncim_query_list_pane

0x238e,	// (0x00061b13) ncim_query_popup_pane

0x230a,	// (0x00061a8f) ncim_indicator_popup_pane_ParamLimits

0xc41d,	// (0x0006bba2) ncim_query_content_pane_g1_ParamLimits

0xc41d,	// (0x0006bba2) ncim_query_content_pane_g1

0x2330,	// (0x00061ab5) ncim_query_content_pane_t1_ParamLimits

0x2342,	// (0x00061ac7) ncim_query_content_pane_t2_ParamLimits

0xc429,	// (0x0006bbae) ncim_query_content_pane_t3_ParamLimits

0xc429,	// (0x0006bbae) ncim_query_content_pane_t3

0xc446,	// (0x0006bbcb) ncim_query_content_pane_t4_ParamLimits

0xc446,	// (0x0006bbcb) ncim_query_content_pane_t4

0xc463,	// (0x0006bbe8) ncim_query_content_pane_t5_ParamLimits

0xc463,	// (0x0006bbe8) ncim_query_content_pane_t5

0x2354,	// (0x00061ad9) ncim_query_content_pane_t6_ParamLimits

0x2354,	// (0x00061ad9) ncim_query_content_pane_t6

0xfb7d,	// (0x0006f302) ncim_query_content_pane_t_ParamLimits

0x237c,	// (0x00061b01) ncim_query_list_pane_ParamLimits

0x238e,	// (0x00061b13) ncim_query_popup_pane_ParamLimits

0x23a2,	// (0x00061b27) wait_bar_pane_cp04

0x03ce,	// (0x0005fb53) input_focus_pane_cp011

0x23aa,	// (0x00061b2f) ncim_query_popup_pane_t1

0x23b8,	// (0x00061b3d) ncim_list_query_list_pane_ParamLimits

0x23b8,	// (0x00061b3d) ncim_list_query_list_pane

0x03ce,	// (0x0005fb53) bg_button_pane_cp027

0x23c5,	// (0x00061b4a) ncim_query_button_pane_g1

0x03ce,	// (0x0005fb53) list_highlight_pane_cp012

0x23cf,	// (0x00061b54) ncim_list_query_list_pane_g1

0x23d7,	// (0x00061b5c) ncim_list_query_list_pane_t1

0xac40,	// (0x0006a3c5) cam4_indicators_pane_g3_ParamLimits

0xac40,	// (0x0006a3c5) cam4_indicators_pane_g3

0xad47,	// (0x0006a4cc) vid4_indicators_pane_g5_ParamLimits

0xad47,	// (0x0006a4cc) vid4_indicators_pane_g5

0xbb5a,	// (0x0006b2df) vid4_progress_pane_g5_ParamLimits

0xbb5a,	// (0x0006b2df) vid4_progress_pane_g5

0xc309,	// (0x0006ba8e) main_ncimui_pane_g1

0xc371,	// (0x0006baf6) ncimui_group_query_pane_ParamLimits

0xc371,	// (0x0006baf6) ncimui_group_query_pane

0xc3b9,	// (0x0006bb3e) ncimui_list_pane_ParamLimits

0xc3b9,	// (0x0006bb3e) ncimui_list_pane

0xc3e0,	// (0x0006bb65) ncimui_text_pane_ParamLimits

0xc3e0,	// (0x0006bb65) ncimui_text_pane

0xc480,	// (0x0006bc05) ncimui_text_pane_t1_ParamLimits

0xc480,	// (0x0006bc05) ncimui_text_pane_t1

0x23e5,	// (0x00061b6a) ncimui_list_single_graphic_pane_ParamLimits

0x23e5,	// (0x00061b6a) ncimui_list_single_graphic_pane

0xc49f,	// (0x0006bc24) ncimui_query_pane_ParamLimits

0xc49f,	// (0x0006bc24) ncimui_query_pane

0x03ce,	// (0x0005fb53) list_highlight_pane_cp013

0x23f5,	// (0x00061b7a) ncim_list_query_list_pane_t1_copy1

0x23cf,	// (0x00061b54) ncim_list_single_graphic_pane_g1

0xc4b2,	// (0x0006bc37) ncim_query_button_pane_cp01

0xc4be,	// (0x0006bc43) ncim_query_entry_pane_ParamLimits

0xc4be,	// (0x0006bc43) ncim_query_entry_pane

0xc4d1,	// (0x0006bc56) ncimui_query_pane_g1

0xc4dd,	// (0x0006bc62) ncimui_query_pane_t1_ParamLimits

0xc4dd,	// (0x0006bc62) ncimui_query_pane_t1

0x0aed,	// (0x00060272) input_focus_pane_cp012

0x2403,	// (0x00061b88) ncim_query_entry_pane_t1

0x5746,	// (0x00064ecb) main_im_pane_ParamLimits

0x0aed,	// (0x00060272) main_mobtv_pane_ParamLimits

0x0aed,	// (0x00060272) main_mobtv_pane

0xc174,	// (0x0006b8f9) main_cset6_slider_pane_g18_ParamLimits

0xc174,	// (0x0006b8f9) main_cset6_slider_pane_g18

0xc180,	// (0x0006b905) main_cset6_slider_pane_g19_ParamLimits

0xc180,	// (0x0006b905) main_cset6_slider_pane_g19

0xeb6b,	// (0x0006e2f0) bg_main_mobtv_pane_ParamLimits

0xeb6b,	// (0x0006e2f0) bg_main_mobtv_pane

0xc4f6,	// (0x0006bc7b) main_mobtv_info_pane

0xc501,	// (0x0006bc86) main_mobtv_loading_pane_ParamLimits

0xc501,	// (0x0006bc86) main_mobtv_loading_pane

0x2415,	// (0x00061b9a) main_mobtv_pg_channel_list_pane

0x241f,	// (0x00061ba4) main_mobtv_pg_hdr_pane

0xc50e,	// (0x0006bc93) main_mobtv_programe_curr_pane_ParamLimits

0xc50e,	// (0x0006bc93) main_mobtv_programe_curr_pane

0xc51b,	// (0x0006bca0) main_mobtv_programe_next_pane_ParamLimits

0xc51b,	// (0x0006bca0) main_mobtv_programe_next_pane

0x2428,	// (0x00061bad) popup_mobtv_noti_window

0x618c,	// (0x00065911) main_tv_pg_hdr_pane_g1

0x2430,	// (0x00061bb5) main_tv_pg_hdr_pane_g2

0x2438,	// (0x00061bbd) main_tv_pg_hdr_pane_g3

0x2440,	// (0x00061bc5) main_tv_pg_hdr_pane_g4

0x2448,	// (0x00061bcd) main_tv_pg_hdr_pane_g5

0x2452,	// (0x00061bd7) main_tv_pg_hdr_pane_g6

0x245c,	// (0x00061be1) main_tv_pg_hdr_pane_g7

0x2466,	// (0x00061beb) main_tv_pg_hdr_pane_g8

0x2470,	// (0x00061bf5) main_tv_pg_hdr_pane_g9

0x247a,	// (0x00061bff) main_tv_pg_hdr_pane_g10

0x2484,	// (0x00061c09) main_tv_pg_hdr_pane_g11

0x000a,

0xfb8a,	// (0x0006f30f) main_tv_pg_hdr_pane_g

0x248e,	// (0x00061c13) main_tv_pg_hdr_pane_t1

0x249c,	// (0x00061c21) main_tv_pg_hdr_pane_t2

0x24aa,	// (0x00061c2f) main_tv_pg_hdr_pane_t3

0x24ba,	// (0x00061c3f) main_tv_pg_hdr_pane_t4

0x24ca,	// (0x00061c4f) main_tv_pg_hdr_pane_t5

0x0004,

0xfba1,	// (0x0006f326) main_tv_pg_hdr_pane_t

0x24da,	// (0x00061c5f) single_mobtv_pg_channel_pane_ParamLimits

0x24da,	// (0x00061c5f) single_mobtv_pg_channel_pane

0x24ec,	// (0x00061c71) single_mobtv_pg_channel_table_pane

0x24f5,	// (0x00061c7a) single_mobtv_pg_channel_thumb_pane

0x24fe,	// (0x00061c83) single_tv_pg_channel_pane_g1

0x2507,	// (0x00061c8c) single_tv_pg_channel_pane_g2

0x0001,

0xfbac,	// (0x0006f331) single_tv_pg_channel_pane_g

0x5569,	// (0x00064cee) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x5569,	// (0x00064cee) bg_single_mobtv_pg_channel_thumb_pane

0x2510,	// (0x00061c95) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2510,	// (0x00061c95) single_mobtv_pg_channel_thumb_pane_g1

0x251e,	// (0x00061ca3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x251e,	// (0x00061ca3) single_mobtv_pg_channel_thumb_pane_g2

0x252a,	// (0x00061caf) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x252a,	// (0x00061caf) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbb1,	// (0x0006f336) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbb1,	// (0x0006f336) single_mobtv_pg_channel_thumb_pane_g

0x2536,	// (0x00061cbb) single_mobtv_pg_channel_thumb_pane_t1

0x2544,	// (0x00061cc9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb8,	// (0x0006f33d) single_mobtv_pg_channel_thumb_pane_t

0x618c,	// (0x00065911) bg_single_mobtv_pg_channel_table_pane_g1

0x618c,	// (0x00065911) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x0006eb62) bg_single_mobtv_pg_channel_table_pane_g

0x2552,	// (0x00061cd7) single_mobtv_pg_channel_table_pane_t1

0x2560,	// (0x00061ce5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbbd,	// (0x0006f342) single_mobtv_pg_channel_table_pane_t

0xc530,	// (0x0006bcb5) main_mobtv_info_pane_g1_ParamLimits

0xc530,	// (0x0006bcb5) main_mobtv_info_pane_g1

0xc54c,	// (0x0006bcd1) main_mobtv_info_pane_t1_ParamLimits

0xc54c,	// (0x0006bcd1) main_mobtv_info_pane_t1

0xc5c4,	// (0x0006bd49) main_mobtv_info_pane_t2_ParamLimits

0xc5c4,	// (0x0006bd49) main_mobtv_info_pane_t2

0x0002,

0xfbc7,	// (0x0006f34c) main_mobtv_info_pane_t_ParamLimits

0xfbc7,	// (0x0006f34c) main_mobtv_info_pane_t

0xc653,	// (0x0006bdd8) wait_bar_pane_cp05

0xc665,	// (0x0006bdea) main_mobtv_loading_pane_g1_ParamLimits

0xc665,	// (0x0006bdea) main_mobtv_loading_pane_g1

0xc673,	// (0x0006bdf8) main_mobtv_loading_pane_g2_ParamLimits

0xc673,	// (0x0006bdf8) main_mobtv_loading_pane_g2

0xc67f,	// (0x0006be04) main_mobtv_loading_pane_g3_ParamLimits

0xc67f,	// (0x0006be04) main_mobtv_loading_pane_g3

0x0002,

0xfbce,	// (0x0006f353) main_mobtv_loading_pane_g_ParamLimits

0xfbce,	// (0x0006f353) main_mobtv_loading_pane_g

0x256e,	// (0x00061cf3) main_mobtv_loading_pane_t1_ParamLimits

0x256e,	// (0x00061cf3) main_mobtv_loading_pane_t1

0x2586,	// (0x00061d0b) main_mobtv_loading_pane_t2_ParamLimits

0x2586,	// (0x00061d0b) main_mobtv_loading_pane_t2

0x0001,

0xfbd5,	// (0x0006f35a) main_mobtv_loading_pane_t_ParamLimits

0xfbd5,	// (0x0006f35a) main_mobtv_loading_pane_t

0xc68d,	// (0x0006be12) wait_bar_pane_cp06_ParamLimits

0xc68d,	// (0x0006be12) wait_bar_pane_cp06

0x25aa,	// (0x00061d2f) main_mobtv_programe_curr_pane_t1

0x25b8,	// (0x00061d3d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbda,	// (0x0006f35f) main_mobtv_programe_curr_pane_t

0x25c6,	// (0x00061d4b) main_mobtv_programe_next_pane_t1

0x25d4,	// (0x00061d59) main_mobtv_programe_next_pane_t2

0x25e2,	// (0x00061d67) main_mobtv_programe_next_pane_t3

0x0002,

0xfbdf,	// (0x0006f364) main_mobtv_programe_next_pane_t

0x03ce,	// (0x0005fb53) bg_popup_mobtv_noti_window_pane

0x25f0,	// (0x00061d75) popup_mobtv_noti_window_g1

0x25f8,	// (0x00061d7d) popup_mobtv_noti_window_t1

0x2606,	// (0x00061d8b) popup_mobtv_noti_window_t2

0x0001,

0xfbe6,	// (0x0006f36b) popup_mobtv_noti_window_t

0x618c,	// (0x00065911) bg_popup_mobtv_noti_window_pane_g1

0x03ce,	// (0x0005fb53) sc_clock_pane

0x03ce,	// (0x0005fb53) main_fs_bigclock_pane

0xbd28,	// (0x0006b4ad) blid2_tripm_pane_t4_ParamLimits

0xbd28,	// (0x0006b4ad) blid2_tripm_pane_t4

0xc699,	// (0x0006be1e) sc_clock_pane_g1_ParamLimits

0xc699,	// (0x0006be1e) sc_clock_pane_g1

0xc6a7,	// (0x0006be2c) sc_clock_pane_t1_ParamLimits

0xc6a7,	// (0x0006be2c) sc_clock_pane_t1

0xc6ba,	// (0x0006be3f) sc_clock_pane_t2_ParamLimits

0xc6ba,	// (0x0006be3f) sc_clock_pane_t2

0xc6cc,	// (0x0006be51) sc_clock_pane_t3_ParamLimits

0xc6cc,	// (0x0006be51) sc_clock_pane_t3

0x0004,

0xfbeb,	// (0x0006f370) sc_clock_pane_t_ParamLimits

0xfbeb,	// (0x0006f370) sc_clock_pane_t

0xcfee,	// (0x0006c773) main_fs_bigclock_indicator_pane_ParamLimits

0xcfee,	// (0x0006c773) main_fs_bigclock_indicator_pane

0xc74f,	// (0x0006bed4) main_fs_bigclock_pane_g1_ParamLimits

0xc74f,	// (0x0006bed4) main_fs_bigclock_pane_g1

0xcffa,	// (0x0006c77f) main_fs_bigclock_pane_t1_ParamLimits

0xcffa,	// (0x0006c77f) main_fs_bigclock_pane_t1

0xd00c,	// (0x0006c791) main_fs_bigclock_pane_t2_ParamLimits

0xd00c,	// (0x0006c791) main_fs_bigclock_pane_t2

0xd020,	// (0x0006c7a5) main_fs_bigclock_pane_t3_ParamLimits

0xd020,	// (0x0006c7a5) main_fs_bigclock_pane_t3

0x0002,

0xfd7c,	// (0x0006f501) main_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x0006f501) main_fs_bigclock_pane_t

0x316d,	// (0x000628f2) main_fs_bigclock_indicator_pane_g1

0x2324,	// (0x00061aa9) ncim_query_content_pane_g2_ParamLimits

0x2324,	// (0x00061aa9) ncim_query_content_pane_g2

0x0001,

0xfb78,	// (0x0006f2fd) ncim_query_content_pane_g_ParamLimits

0xfb78,	// (0x0006f2fd) ncim_query_content_pane_g

0xc6e0,	// (0x0006be65) sc_clock_pane_t4_ParamLimits

0xc6e0,	// (0x0006be65) sc_clock_pane_t4

0x0aed,	// (0x00060272) main_radioblah_pane

0xaae3,	// (0x0006a268) cell_call4_button_pane_t1_copy1_ParamLimits

0xaae3,	// (0x0006a268) cell_call4_button_pane_t1_copy1

0xc323,	// (0x0006baa8) main_ncimui_pane_t1_ParamLimits

0xc323,	// (0x0006baa8) main_ncimui_pane_t1

0xc33d,	// (0x0006bac2) main_ncimui_pane_t2_ParamLimits

0xc33d,	// (0x0006bac2) main_ncimui_pane_t2

0x0002,

0xfb71,	// (0x0006f2f6) main_ncimui_pane_t_ParamLimits

0xfb71,	// (0x0006f2f6) main_ncimui_pane_t

0x274b,	// (0x00061ed0) main_radioblah_anim_pane_ParamLimits

0x274b,	// (0x00061ed0) main_radioblah_anim_pane

0x275c,	// (0x00061ee1) main_radioblah_info_pane_ParamLimits

0x275c,	// (0x00061ee1) main_radioblah_info_pane

0x2770,	// (0x00061ef5) main_radioblah_pane_t1_ParamLimits

0x2770,	// (0x00061ef5) main_radioblah_pane_t1

0x278c,	// (0x00061f11) main_radioblah_pane_t2_ParamLimits

0x278c,	// (0x00061f11) main_radioblah_pane_t2

0x0003,

0xfc0c,	// (0x0006f391) main_radioblah_pane_t_ParamLimits

0xfc0c,	// (0x0006f391) main_radioblah_pane_t

0xc7a5,	// (0x0006bf2a) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc7a5,	// (0x0006bf2a) main_radioblah_rocker_ctrl_pane

0x27d4,	// (0x00061f59) main_radioblah_info_pane_t1_ParamLimits

0x27d4,	// (0x00061f59) main_radioblah_info_pane_t1

0xc7ea,	// (0x0006bf6f) main_radioblah_info_pane_t2_ParamLimits

0xc7ea,	// (0x0006bf6f) main_radioblah_info_pane_t2

0x0003,

0xfc15,	// (0x0006f39a) main_radioblah_info_pane_t_ParamLimits

0xfc15,	// (0x0006f39a) main_radioblah_info_pane_t

0x618c,	// (0x00065911) main_radioblah_rocker_ctrl_pane_g1

0xc89a,	// (0x0006c01f) main_radioblah_rocker_ctrl_pane_g2

0xc8a2,	// (0x0006c027) main_radioblah_rocker_ctrl_pane_g3

0xc8aa,	// (0x0006c02f) main_radioblah_rocker_ctrl_pane_g4

0xc8b2,	// (0x0006c037) main_radioblah_rocker_ctrl_pane_g5

0xc8ba,	// (0x0006c03f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc1e,	// (0x0006f3a3) main_radioblah_rocker_ctrl_pane_g

0xc2ca,	// (0x0006ba4f) main_cset_text2_pane_t1_copy1_ParamLimits

0xab6e,	// (0x0006a2f3) cam4_image_uncrop_qvga_pane

0xacb5,	// (0x0006a43a) vid4_image_uncrop_qcif_pane

0xbeb6,	// (0x0006b63b) cam6_image_uncrop_qvga_pane_ParamLimits

0xbeb6,	// (0x0006b63b) cam6_image_uncrop_qvga_pane

0x2010,	// (0x00061795) vid6_image_uncrop_qcif_pane_ParamLimits

0x2010,	// (0x00061795) vid6_image_uncrop_qcif_pane

0x03ce,	// (0x0005fb53) bg_popup_preview_window_pane_cp03

0x22d6,	// (0x00061a5b) list_cset_text2_pane

0x22de,	// (0x00061a63) main_cset6_text2_pane_g1

0x22e6,	// (0x00061a6b) main_cset6_text2_pane_t1

0xc8c2,	// (0x0006c047) list_cset_text2_pane_t1_ParamLimits

0xc8c2,	// (0x0006c047) list_cset_text2_pane_t1

0x0aed,	// (0x00060272) main_radioblah_pane_ParamLimits

0xc63f,	// (0x0006bdc4) main_mobtv_info_pane_t3_ParamLimits

0xc63f,	// (0x0006bdc4) main_mobtv_info_pane_t3

0xc793,	// (0x0006bf18) main_radioblah_pane_g1

0xc7be,	// (0x0006bf43) main_radioblah_info_pane_g1

0xc83f,	// (0x0006bfc4) main_radioblah_info_pane_t3_ParamLimits

0xc83f,	// (0x0006bfc4) main_radioblah_info_pane_t3

0x75ae,	// (0x00066d33) highlight_cell_cale_month_pane_ParamLimits

0x75ae,	// (0x00066d33) highlight_cell_cale_month_pane

0x03ce,	// (0x0005fb53) main_phob_fisheye_pane

0x0f9a,	// (0x0006071f) scroll_pane_cp0031_ParamLimits

0x0f9a,	// (0x0006071f) scroll_pane_cp0031

0x211e,	// (0x000618a3) wait_bar_pane_cp08_ParamLimits

0xc08b,	// (0x0006b810) cset_list_set_pane_copy1_ParamLimits

0x280e,	// (0x00061f93) highlight_cell_cale_month_pane_g1

0xc8df,	// (0x0006c064) highlight_cell_cale_month_pane_t1

0x1d78,	// (0x000614fd) list_gen_pane_cp01

0x191d,	// (0x000610a2) scroll_pane_01

0x4a1f,	// (0x000641a4) list_single_double_fisheye_pane

0x4a28,	// (0x000641ad) list_double_fisheye_pane_g1_ParamLimits

0x4a28,	// (0x000641ad) list_double_fisheye_pane_g1

0x4a34,	// (0x000641b9) list_double_fisheye_pane_g2_ParamLimits

0x4a34,	// (0x000641b9) list_double_fisheye_pane_g2

0x4a48,	// (0x000641cd) list_double_fisheye_pane_g3_ParamLimits

0x4a48,	// (0x000641cd) list_double_fisheye_pane_g3

0x0004,

0xfc2b,	// (0x0006f3b0) list_double_fisheye_pane_g_ParamLimits

0xfc2b,	// (0x0006f3b0) list_double_fisheye_pane_g

0x4a71,	// (0x000641f6) list_double_fisheye_pane_t1_ParamLimits

0x4a71,	// (0x000641f6) list_double_fisheye_pane_t1

0x4a8c,	// (0x00064211) list_double_fisheye_pane_t2_ParamLimits

0x4a8c,	// (0x00064211) list_double_fisheye_pane_t2

0x0001,

0xfc36,	// (0x0006f3bb) list_double_fisheye_pane_t_ParamLimits

0xfc36,	// (0x0006f3bb) list_double_fisheye_pane_t

0x03ce,	// (0x0005fb53) main_call5_pane

0xc706,	// (0x0006be8b) sc_swipe_pane_ParamLimits

0xc706,	// (0x0006be8b) sc_swipe_pane

0xc8f9,	// (0x0006c07e) call5_image_pane_ParamLimits

0xc8f9,	// (0x0006c07e) call5_image_pane

0xc909,	// (0x0006c08e) call5_swipe_1_pane_ParamLimits

0xc909,	// (0x0006c08e) call5_swipe_1_pane

0xc915,	// (0x0006c09a) call5_swipe_2_pane_ParamLimits

0xc915,	// (0x0006c09a) call5_swipe_2_pane

0xc92f,	// (0x0006c0b4) popup_call5_audio_first_window_ParamLimits

0xc92f,	// (0x0006c0b4) popup_call5_audio_first_window

0x5569,	// (0x00064cee) call5_swipe_1_pane_g1_ParamLimits

0x5569,	// (0x00064cee) call5_swipe_1_pane_g1

0x2816,	// (0x00061f9b) call5_swipe_1_pane_g2_ParamLimits

0x2816,	// (0x00061f9b) call5_swipe_1_pane_g2

0x0001,

0xfc3b,	// (0x0006f3c0) call5_swipe_1_pane_g_ParamLimits

0xfc3b,	// (0x0006f3c0) call5_swipe_1_pane_g

0x2822,	// (0x00061fa7) call5_swipe_1_pane_t1_ParamLimits

0x2822,	// (0x00061fa7) call5_swipe_1_pane_t1

0x5569,	// (0x00064cee) call5_swipe_2_pane_g1_ParamLimits

0x5569,	// (0x00064cee) call5_swipe_2_pane_g1

0x2837,	// (0x00061fbc) call5_swipe_2_pane_g2_ParamLimits

0x2837,	// (0x00061fbc) call5_swipe_2_pane_g2

0x0001,

0xfc40,	// (0x0006f3c5) call5_swipe_2_pane_g_ParamLimits

0xfc40,	// (0x0006f3c5) call5_swipe_2_pane_g

0x2843,	// (0x00061fc8) call5_swipe_2_pane_t1_ParamLimits

0x2843,	// (0x00061fc8) call5_swipe_2_pane_t1

0x2858,	// (0x00061fdd) sc_swipe_pane_g1_ParamLimits

0x2858,	// (0x00061fdd) sc_swipe_pane_g1

0x2865,	// (0x00061fea) sc_swipe_pane_g2_ParamLimits

0x2865,	// (0x00061fea) sc_swipe_pane_g2

0x0001,

0xfc45,	// (0x0006f3ca) sc_swipe_pane_g_ParamLimits

0xfc45,	// (0x0006f3ca) sc_swipe_pane_g

0x2871,	// (0x00061ff6) sc_swipe_pane_t1_ParamLimits

0x2871,	// (0x00061ff6) sc_swipe_pane_t1

0x03ce,	// (0x0005fb53) main_cmail_launcher_pane

0xc93d,	// (0x0006c0c2) aid_size_cell_cmail_l_ParamLimits

0xc93d,	// (0x0006c0c2) aid_size_cell_cmail_l

0xc94b,	// (0x0006c0d0) grid_cmail_l_pane_ParamLimits

0xc94b,	// (0x0006c0d0) grid_cmail_l_pane

0xc95b,	// (0x0006c0e0) cell_cmail_l_pane_ParamLimits

0xc95b,	// (0x0006c0e0) cell_cmail_l_pane

0x2886,	// (0x0006200b) cell_cmail_l_pane_g1_ParamLimits

0x2886,	// (0x0006200b) cell_cmail_l_pane_g1

0x2892,	// (0x00062017) cell_cmail_l_pane_t1_ParamLimits

0x2892,	// (0x00062017) cell_cmail_l_pane_t1

0x28a8,	// (0x0006202d) cell_cmail_l_pane_t2_ParamLimits

0x28a8,	// (0x0006202d) cell_cmail_l_pane_t2

0x0001,

0xfc4a,	// (0x0006f3cf) cell_cmail_l_pane_t_ParamLimits

0xfc4a,	// (0x0006f3cf) cell_cmail_l_pane_t

0x0aed,	// (0x00060272) grid_highlight_pane_cp018_ParamLimits

0x0aed,	// (0x00060272) grid_highlight_pane_cp018

0x5319,	// (0x00064a9e) main2_pane_ParamLimits

0x5319,	// (0x00064a9e) main2_pane

0x5989,	// (0x0006510e) popup_sp_fs_action_menu_bg_pane_g1

0x5991,	// (0x00065116) popup_sp_fs_action_menu_bg_pane_g2

0x5999,	// (0x0006511e) popup_sp_fs_action_menu_bg_pane_g3

0x59a1,	// (0x00065126) popup_sp_fs_action_menu_bg_pane_g4

0x59a9,	// (0x0006512e) popup_sp_fs_action_menu_bg_pane_g5

0x59b1,	// (0x00065136) popup_sp_fs_action_menu_bg_pane_g6

0x59b9,	// (0x0006513e) popup_sp_fs_action_menu_bg_pane_g7

0x59c1,	// (0x00065146) popup_sp_fs_action_menu_bg_pane_g8

0x59c9,	// (0x0006514e) popup_sp_fs_action_menu_bg_pane_g9

0x59d1,	// (0x00065156) popup_sp_fs_action_menu_bg_pane_g10

0x59d1,	// (0x00065156) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0006e8ca) popup_sp_fs_action_menu_bg_pane_g

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g3_g1

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g3_g2

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0006e978) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0006e978) list_medium_line_x2_t3_g3_g

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g3_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g3_t1

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g3_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g3_t2

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g3_t3_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0006e97f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0006e97f) list_medium_line_x2_t3_g3_t

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g2_g1

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0006e986) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0006e986) list_medium_line_x2_t3_g2_g

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g2_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g2_t1

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g2_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g2_t2

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g2_t3_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0006e97f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0006e97f) list_medium_line_x2_t3_g2_t

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g4_g1

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g4_g2

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g4_g3

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0006e98b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0006e98b) list_medium_line_x2_t4_g4_g

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g4_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g4_t1

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g4_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g4_t2

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g4_t3_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g4_t3

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g4_t4_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0006e994) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0006e994) list_medium_line_x2_t4_g4_t

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g4_g1

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g4_g2

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g4_g3

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0006e98b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0006e98b) list_medium_line_x2_t2_g4_g

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g4_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g4_t1

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g4_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0006e9fb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0006e9fb) list_medium_line_x2_t2_g4_t

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g3_g1

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g3_g2

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0006e978) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0006e978) list_medium_line_x2_t2_g3_g

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g3_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g3_t1

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g3_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0006e9fb) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0006e9fb) list_medium_line_x2_t2_g3_t

0x79b1,	// (0x00067136) main_sp_fs_list_pane_ParamLimits

0x79b1,	// (0x00067136) main_sp_fs_list_pane

0x79bd,	// (0x00067142) sp_fs_scroll_pane_ParamLimits

0x79bd,	// (0x00067142) sp_fs_scroll_pane

0x79c9,	// (0x0006714e) list_medium_line_x2_t3_t1

0x79c9,	// (0x0006714e) list_medium_line_x2_t3_t2

0x79c9,	// (0x0006714e) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x0006ea46) list_medium_line_x2_t3_t

0x79c9,	// (0x0006714e) list_medium_line_x3_t4_t1

0x79c9,	// (0x0006714e) list_medium_line_x3_t4_t2

0x79c9,	// (0x0006714e) list_medium_line_x3_t4_t3

0x79c9,	// (0x0006714e) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0006ea4d) list_medium_line_x3_t4_t

0x79c9,	// (0x0006714e) list_medium_line_x4_t5_t1

0x79c9,	// (0x0006714e) list_medium_line_x4_t5_t2

0x79c9,	// (0x0006714e) list_medium_line_x4_t5_t3

0x79c9,	// (0x0006714e) list_medium_line_x4_t5_t4

0x79c9,	// (0x0006714e) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x0006ea56) list_medium_line_x4_t5_t

0x5569,	// (0x00064cee) list_medium_line_t4_g4_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t4_g4_g1

0x5569,	// (0x00064cee) list_medium_line_t4_g4_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t4_g4_g2

0x5569,	// (0x00064cee) list_medium_line_t4_g4_g3_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t4_g4_g3

0x5569,	// (0x00064cee) list_medium_line_t4_g4_g4_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0006e98b) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0006e98b) list_medium_line_t4_g4_g

0x61e1,	// (0x00065966) list_medium_line_t4_g4_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t4_g4_t1

0x61e1,	// (0x00065966) list_medium_line_t4_g4_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t4_g4_t2

0x61e1,	// (0x00065966) list_medium_line_t4_g4_t3_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t4_g4_t3

0x61e1,	// (0x00065966) list_medium_line_t4_g4_t4_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0006e994) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0006e994) list_medium_line_t4_g4_t

0x7d3a,	// (0x000674bf) chi_dic_find_pane_g1

0x9329,	// (0x00068aae) main_tport_pane

0x79c9,	// (0x0006714e) list_medium_line_plain_t1

0x5569,	// (0x00064cee) list_medium_line_t2_g2_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t2_g2_g1

0x5569,	// (0x00064cee) list_medium_line_t2_g2_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0006e986) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0006e986) list_medium_line_t2_g2_g

0x61e1,	// (0x00065966) list_medium_line_t2_g2_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t2_g2_t1

0x61e1,	// (0x00065966) list_medium_line_t2_g2_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x0006e9fb) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x0006e9fb) list_medium_line_t2_g2_t

0x49dd,	// (0x00064162) aid_sp_fs_list_icon_a_sm

0xbbb9,	// (0x0006b33e) aid_sp_fs_list_icon_d

0x320c,	// (0x00062991) aid_sp_fs_text_primary

0x49e5,	// (0x0006416a) aid_sp_fs_text_secondary

0x03ce,	// (0x0005fb53) list_medium_line

0x03ce,	// (0x0005fb53) list_medium_line_g2

0x03ce,	// (0x0005fb53) list_medium_line_g3

0x03ce,	// (0x0005fb53) list_medium_line_plain

0x03ce,	// (0x0005fb53) list_medium_line_plain_t2

0x03ce,	// (0x0005fb53) list_medium_line_plain_t3

0x03ce,	// (0x0005fb53) list_medium_line_right_icon

0x03ce,	// (0x0005fb53) list_medium_line_right_iconx2

0x03ce,	// (0x0005fb53) list_medium_line_t2

0x03ce,	// (0x0005fb53) list_medium_line_t2_g2

0x03ce,	// (0x0005fb53) list_medium_line_t2_g3

0x03ce,	// (0x0005fb53) list_medium_line_t2_right_icon

0x03ce,	// (0x0005fb53) list_medium_line_t2_right_iconx2

0x03ce,	// (0x0005fb53) list_medium_line_t3

0x03ce,	// (0x0005fb53) list_medium_line_t3_g2

0x03ce,	// (0x0005fb53) list_medium_line_t3_g3

0x03ce,	// (0x0005fb53) list_medium_line_t3_right_iconx2

0x03ce,	// (0x0005fb53) list_medium_line_t4_g4

0x03ce,	// (0x0005fb53) list_medium_line_x2

0x03ce,	// (0x0005fb53) list_medium_line_x2_t2_g2

0x03ce,	// (0x0005fb53) list_medium_line_x2_t2_g3

0x03ce,	// (0x0005fb53) list_medium_line_x2_t2_g4

0x03ce,	// (0x0005fb53) list_medium_line_x2_t3

0x03ce,	// (0x0005fb53) list_medium_line_x2_t3_g2

0x03ce,	// (0x0005fb53) list_medium_line_x2_t3_g3

0x03ce,	// (0x0005fb53) list_medium_line_x2_t3_g4

0x03ce,	// (0x0005fb53) list_medium_line_x2_t4_g2

0x03ce,	// (0x0005fb53) list_medium_line_x2_t4_g4

0x03ce,	// (0x0005fb53) list_medium_line_x3

0x03ce,	// (0x0005fb53) list_medium_line_x3_t4

0x03ce,	// (0x0005fb53) list_medium_line_x3_t4_g4

0x03ce,	// (0x0005fb53) list_medium_line_x4_t4

0x03ce,	// (0x0005fb53) list_medium_line_x4_t4_g7

0x03ce,	// (0x0005fb53) list_medium_line_x4_t5

0x49ee,	// (0x00064173) list_single_fs_dyc_pane_ParamLimits

0x49ee,	// (0x00064173) list_single_fs_dyc_pane

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g1

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g2

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g3

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g4

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g5

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x4_t4_g7_g6

0x5577,	// (0x00064cfc) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5577,	// (0x00064cfc) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb52,	// (0x0006f2d7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb52,	// (0x0006f2d7) list_medium_line_x4_t4_g7_g

0x61e1,	// (0x00065966) list_medium_line_x4_t4_g7_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x4_t4_g7_t1

0x61e1,	// (0x00065966) list_medium_line_x4_t4_g7_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x4_t4_g7_t2

0x61e1,	// (0x00065966) list_medium_line_x4_t4_g7_t3_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x4_t4_g7_t3

0x6043,	// (0x000657c8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6043,	// (0x000657c8) list_medium_line_x4_t4_g7_t4

0x6043,	// (0x000657c8) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6043,	// (0x000657c8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb61,	// (0x0006f2e6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb61,	// (0x0006f2e6) list_medium_line_x4_t4_g7_t

0x4a02,	// (0x00064187) list_single_dyc_row_pane_ParamLimits

0x4a02,	// (0x00064187) list_single_dyc_row_pane

0xc8ed,	// (0x0006c072) call5_gesture_pane_ParamLimits

0xc8ed,	// (0x0006c072) call5_gesture_pane

0xc921,	// (0x0006c0a6) call5_windows_pane_ParamLimits

0xc921,	// (0x0006c0a6) call5_windows_pane

0xc974,	// (0x0006c0f9) call5_swipe_1_pane_cp_ParamLimits

0xc974,	// (0x0006c0f9) call5_swipe_1_pane_cp

0xc980,	// (0x0006c105) call5_swipe_2_pane_cp_ParamLimits

0xc980,	// (0x0006c105) call5_swipe_2_pane_cp

0x5fce,	// (0x00065753) call5_image_pane_cp

0xc98c,	// (0x0006c111) popup_call5_audio_first_window_cp_ParamLimits

0xc98c,	// (0x0006c111) popup_call5_audio_first_window_cp

0x2858,	// (0x00061fdd) call5_swipe_1_pane_g1_cp_ParamLimits

0x2858,	// (0x00061fdd) call5_swipe_1_pane_g1_cp

0x28c5,	// (0x0006204a) call5_swipe_1_pane_g2_cp

0x2871,	// (0x00061ff6) call5_swipe_1_pane_t1_cp_ParamLimits

0x2871,	// (0x00061ff6) call5_swipe_1_pane_t1_cp

0x2858,	// (0x00061fdd) call5_swipe_2_pane_g1_cp_ParamLimits

0x2858,	// (0x00061fdd) call5_swipe_2_pane_g1_cp

0x28cd,	// (0x00062052) call5_swipe_2_pane_g2_cp

0x28d5,	// (0x0006205a) call5_swipe_2_pane_t1_cp_ParamLimits

0x28d5,	// (0x0006205a) call5_swipe_2_pane_t1_cp

0x0aed,	// (0x00060272) main_sp_fs_email_pane

0x28ea,	// (0x0006206f) main_sp_fs_listscroll_pane_te

0xc99a,	// (0x0006c11f) popup_sp_fs_action_menu_pane_ParamLimits

0xc99a,	// (0x0006c11f) popup_sp_fs_action_menu_pane

0x618c,	// (0x00065911) bg_sp_fs_ctrlbar_pane_g1

0x28f3,	// (0x00062078) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x28fc,	// (0x00062081) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2905,	// (0x0006208a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x618c,	// (0x00065911) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4f,	// (0x0006f3d4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xde8c,	// (0x0006d611) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xde8c,	// (0x0006d611) bg_sp_fs_ctrlbar_ddmenu_pane

0x290e,	// (0x00062093) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x290e,	// (0x00062093) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x291a,	// (0x0006209f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x291a,	// (0x0006209f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc58,	// (0x0006f3dd) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc58,	// (0x0006f3dd) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2926,	// (0x000620ab) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2926,	// (0x000620ab) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x618c,	// (0x00065911) list_medium_line_t2_right_icon_g1

0x79c9,	// (0x0006714e) list_medium_line_t2_right_icon_t1

0x79c9,	// (0x0006714e) list_medium_line_t2_right_icon_t2

0x0001,

0xfc5d,	// (0x0006f3e2) list_medium_line_t2_right_icon_t

0xea8e,	// (0x0006e213) bg_sp_fs_ctrlbar_pane_ParamLimits

0xea8e,	// (0x0006e213) bg_sp_fs_ctrlbar_pane

0xca35,	// (0x0006c1ba) main_sp_fs_ctrlbar_button_pane_cp01

0xca3d,	// (0x0006c1c2) main_sp_fs_ctrlbar_ddmenu_pane

0x2978,	// (0x000620fd) main_sp_fs_ctrlbar_pane_g1

0x2984,	// (0x00062109) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc62,	// (0x0006f3e7) main_sp_fs_ctrlbar_pane_g

0xca79,	// (0x0006c1fe) main_sp_fs_ctrlbar_pane_t1

0xcab4,	// (0x0006c239) main_sp_fs_ctrlbar_pane

0xcaca,	// (0x0006c24f) main_sp_fs_listscroll_pane_te_cp01

0x4aae,	// (0x00064233) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4aae,	// (0x00064233) popup_sp_fs_action_menu_pane_cp01

0x0aed,	// (0x00060272) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0aed,	// (0x00060272) bg_sp_fs_highlight_list_pane_cp01

0x4ace,	// (0x00064253) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4ace,	// (0x00064253) sp_fs_action_menu_list_gene_pane_g1

0x29ba,	// (0x0006213f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x29ba,	// (0x0006213f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc70,	// (0x0006f3f5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc70,	// (0x0006f3f5) sp_fs_action_menu_list_gene_pane_g

0x4add,	// (0x00064262) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4add,	// (0x00064262) sp_fs_action_menu_list_gene_pane_t1

0x4af5,	// (0x0006427a) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4af5,	// (0x0006427a) sp_fs_action_menu_list_gene_pane

0x29fe,	// (0x00062183) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x29fe,	// (0x00062183) popup_sp_fs_action_menu_bg_pane

0x4b16,	// (0x0006429b) sp_fs_action_menu_list_pane_ParamLimits

0x4b16,	// (0x0006429b) sp_fs_action_menu_list_pane

0x4b38,	// (0x000642bd) sp_fs_scroll_pane_cp01_ParamLimits

0x4b38,	// (0x000642bd) sp_fs_scroll_pane_cp01

0x79c9,	// (0x0006714e) list_medium_line_plain_t2_t1

0x79c9,	// (0x0006714e) list_medium_line_plain_t2_t2

0x0001,

0xfc5d,	// (0x0006f3e2) list_medium_line_plain_t2_t

0x79c9,	// (0x0006714e) list_medium_line_plain_t3_t1

0x79c9,	// (0x0006714e) list_medium_line_plain_t3_t2

0x79c9,	// (0x0006714e) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x0006ea46) list_medium_line_plain_t3_t

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g2_g1

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0006e986) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0006e986) list_medium_line_x2_t2_g2_g

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g2_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g2_t1

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g2_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0006e9fb) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0006e9fb) list_medium_line_x2_t2_g2_t

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g2_g1

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0006e986) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0006e986) list_medium_line_x2_t4_g2_g

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g2_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g2_t1

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g2_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g2_t2

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g2_t3_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g2_t3

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g2_t4_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0006e994) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0006e994) list_medium_line_x2_t4_g2_t

0x618c,	// (0x00065911) list_medium_line_t3_right_iconx2_g1

0x618c,	// (0x00065911) list_medium_line_t3_right_iconx2_g2

0x618c,	// (0x00065911) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x0006eb67) list_medium_line_t3_right_iconx2_g

0x79c9,	// (0x0006714e) list_medium_line_t3_right_iconx2_t1

0x79c9,	// (0x0006714e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc5d,	// (0x0006f3e2) list_medium_line_t3_right_iconx2_t

0x5569,	// (0x00064cee) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x3_t4_g4_g1

0x5569,	// (0x00064cee) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x3_t4_g4_g2

0x5569,	// (0x00064cee) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x3_t4_g4_g3

0x5569,	// (0x00064cee) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0006e98b) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0006e98b) list_medium_line_x3_t4_g4_g

0x61e1,	// (0x00065966) list_medium_line_x3_t4_g4_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x3_t4_g4_t1

0x61e1,	// (0x00065966) list_medium_line_x3_t4_g4_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x3_t4_g4_t2

0x61e1,	// (0x00065966) list_medium_line_x3_t4_g4_t3_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x3_t4_g4_t3

0x61e1,	// (0x00065966) list_medium_line_x3_t4_g4_t4_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0006e994) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0006e994) list_medium_line_x3_t4_g4_t

0x4b5e,	// (0x000642e3) list_single_dyc_row_text_pane_t1_ParamLimits

0x4b5e,	// (0x000642e3) list_single_dyc_row_text_pane_t1

0x4b95,	// (0x0006431a) list_single_dyc_row_text_pane_t2_ParamLimits

0x4b95,	// (0x0006431a) list_single_dyc_row_text_pane_t2

0x4c0b,	// (0x00064390) list_single_dyc_row_text_pane_t3_ParamLimits

0x4c0b,	// (0x00064390) list_single_dyc_row_text_pane_t3

0x0005,

0xfc75,	// (0x0006f3fa) list_single_dyc_row_text_pane_t_ParamLimits

0xfc75,	// (0x0006f3fa) list_single_dyc_row_text_pane_t

0x4cdc,	// (0x00064461) list_single_dyc_row_pane_g1_ParamLimits

0x4cdc,	// (0x00064461) list_single_dyc_row_pane_g1

0x4ce8,	// (0x0006446d) list_single_dyc_row_pane_g2_ParamLimits

0x4ce8,	// (0x0006446d) list_single_dyc_row_pane_g2

0x4cf4,	// (0x00064479) list_single_dyc_row_pane_g3_ParamLimits

0x4cf4,	// (0x00064479) list_single_dyc_row_pane_g3

0x4d00,	// (0x00064485) list_single_dyc_row_pane_g4_ParamLimits

0x4d00,	// (0x00064485) list_single_dyc_row_pane_g4

0x0003,

0xfc82,	// (0x0006f407) list_single_dyc_row_pane_g_ParamLimits

0xfc82,	// (0x0006f407) list_single_dyc_row_pane_g

0x4d0c,	// (0x00064491) list_single_dyc_row_text_pane_ParamLimits

0x4d0c,	// (0x00064491) list_single_dyc_row_text_pane

0x03ce,	// (0x0005fb53) bg_sp_fs_scroll_pane

0x2a9f,	// (0x00062224) thumb_sp_fs_scroll_pane

0x5569,	// (0x00064cee) list_medium_line_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_g1

0x61e1,	// (0x00065966) list_medium_line_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t1

0x5569,	// (0x00064cee) list_medium_line_x2_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_g1

0x5569,	// (0x00064cee) list_medium_line_x2_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0006e986) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0006e986) list_medium_line_x2_g

0x61e1,	// (0x00065966) list_medium_line_x2_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t1

0x5569,	// (0x00064cee) list_medium_line_x3_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x3_g1

0x1797,	// (0x00060f1c) list_medium_line_x3_g2_ParamLimits

0x1797,	// (0x00060f1c) list_medium_line_x3_g2

0x0001,

0xfc8b,	// (0x0006f410) list_medium_line_x3_g_ParamLimits

0xfc8b,	// (0x0006f410) list_medium_line_x3_g

0x2aa8,	// (0x0006222d) list_medium_line_x3_t1_ParamLimits

0x2aa8,	// (0x0006222d) list_medium_line_x3_t1

0x2abc,	// (0x00062241) thumb_sp_fs_scroll_pane_g1

0x2ac5,	// (0x0006224a) thumb_sp_fs_scroll_pane_g2

0x2ace,	// (0x00062253) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc90,	// (0x0006f415) thumb_sp_fs_scroll_pane_g

0x2abc,	// (0x00062241) bg_sp_fs_scroll_pane_g1

0x2ac5,	// (0x0006224a) bg_sp_fs_scroll_pane_g2

0x2ace,	// (0x00062253) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc90,	// (0x0006f415) bg_sp_fs_scroll_pane_g

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g4_g1

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g4_g2

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g4_g3

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0006e98b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0006e98b) list_medium_line_x2_t3_g4_g

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g4_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g4_t1

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g4_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g4_t2

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g4_t3_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0006e97f) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0006e97f) list_medium_line_x2_t3_g4_t

0x5569,	// (0x00064cee) list_medium_line_g2_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_g2_g1

0x5569,	// (0x00064cee) list_medium_line_g2_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0006e986) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0006e986) list_medium_line_g2_g

0x61e1,	// (0x00065966) list_medium_line_g2_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_g2_t1

0x5569,	// (0x00064cee) list_medium_line_t3_g2_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t3_g2_g1

0x5569,	// (0x00064cee) list_medium_line_t3_g2_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0006e986) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0006e986) list_medium_line_t3_g2_g

0x61e1,	// (0x00065966) list_medium_line_t3_g2_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t3_g2_t1

0x61e1,	// (0x00065966) list_medium_line_t3_g2_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t3_g2_t2

0x61e1,	// (0x00065966) list_medium_line_t3_g2_t3_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0006e97f) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0006e97f) list_medium_line_t3_g2_t

0x618c,	// (0x00065911) list_medium_line_right_icon_g1

0x79c9,	// (0x0006714e) list_medium_line_right_icon_t1

0x5569,	// (0x00064cee) list_medium_line_t2_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t2_g1

0x61e1,	// (0x00065966) list_medium_line_t2_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t2_t1

0x61e1,	// (0x00065966) list_medium_line_t2_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x0006e9fb) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x0006e9fb) list_medium_line_t2_t

0x5569,	// (0x00064cee) list_medium_line_t3_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t3_g1

0x61e1,	// (0x00065966) list_medium_line_t3_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t3_t1

0x61e1,	// (0x00065966) list_medium_line_t3_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t3_t2

0x61e1,	// (0x00065966) list_medium_line_t3_t3_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0006e97f) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0006e97f) list_medium_line_t3_t

0x5569,	// (0x00064cee) list_medium_line_g3_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_g3_g1

0x5569,	// (0x00064cee) list_medium_line_g3_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_g3_g2

0x5569,	// (0x00064cee) list_medium_line_g3_g3_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0006e978) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0006e978) list_medium_line_g3_g

0x61e1,	// (0x00065966) list_medium_line_g3_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_g3_t1

0x5569,	// (0x00064cee) list_medium_line_t2_g3_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t2_g3_g1

0x5569,	// (0x00064cee) list_medium_line_t2_g3_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t2_g3_g2

0x5569,	// (0x00064cee) list_medium_line_t2_g3_g3_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0006e978) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0006e978) list_medium_line_t2_g3_g

0x61e1,	// (0x00065966) list_medium_line_t2_g3_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t2_g3_t1

0x61e1,	// (0x00065966) list_medium_line_t2_g3_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x0006e9fb) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x0006e9fb) list_medium_line_t2_g3_t

0x5569,	// (0x00064cee) list_medium_line_t3_g3_g1_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t3_g3_g1

0x5569,	// (0x00064cee) list_medium_line_t3_g3_g2_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t3_g3_g2

0x5569,	// (0x00064cee) list_medium_line_t3_g3_g3_ParamLimits

0x5569,	// (0x00064cee) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0006e978) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0006e978) list_medium_line_t3_g3_g

0x61e1,	// (0x00065966) list_medium_line_t3_g3_t1_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t3_g3_t1

0x61e1,	// (0x00065966) list_medium_line_t3_g3_t2_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t3_g3_t2

0x61e1,	// (0x00065966) list_medium_line_t3_g3_t3_ParamLimits

0x61e1,	// (0x00065966) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0006e97f) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0006e97f) list_medium_line_t3_g3_t

0x618c,	// (0x00065911) list_medium_line_right_iconx2_g1

0x618c,	// (0x00065911) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0006eb62) list_medium_line_right_iconx2_g

0x79c9,	// (0x0006714e) list_medium_line_right_iconx2_t1

0x618c,	// (0x00065911) list_medium_line_t2_right_iconx2_g1

0x618c,	// (0x00065911) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0006eb62) list_medium_line_t2_right_iconx2_g

0x79c9,	// (0x0006714e) list_medium_line_t2_right_iconx2_t1

0x79c9,	// (0x0006714e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc5d,	// (0x0006f3e2) list_medium_line_t2_right_iconx2_t

0x79c9,	// (0x0006714e) list_medium_line_x4_t4_t1

0x79c9,	// (0x0006714e) list_medium_line_x4_t4_t2

0x79c9,	// (0x0006714e) list_medium_line_x4_t4_t3

0x79c9,	// (0x0006714e) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0006ea4d) list_medium_line_x4_t4_t

0xcb05,	// (0x0006c28a) tport_appsw_pane_ParamLimits

0xcb05,	// (0x0006c28a) tport_appsw_pane

0xcb13,	// (0x0006c298) tport_contact_pane_ParamLimits

0xcb13,	// (0x0006c298) tport_contact_pane

0xcb23,	// (0x0006c2a8) tport_listscroll_pane_ParamLimits

0xcb23,	// (0x0006c2a8) tport_listscroll_pane

0xcb33,	// (0x0006c2b8) cell_tport_appsw_pane_ParamLimits

0xcb33,	// (0x0006c2b8) cell_tport_appsw_pane

0x5577,	// (0x00064cfc) tport_appsw_pane_g1_ParamLimits

0x5577,	// (0x00064cfc) tport_appsw_pane_g1

0x2ad7,	// (0x0006225c) tport_contact_pane_g1

0x23aa,	// (0x00061b2f) tport_contact_pane_t1

0x2ae0,	// (0x00062265) tport_contact_pane_t2

0x0001,

0xfc97,	// (0x0006f41c) tport_contact_pane_t

0x2aee,	// (0x00062273) list_tport_pane

0x2af7,	// (0x0006227c) scroll_pane_cp_030

0xcb66,	// (0x0006c2eb) cell_tport_appsw_pane_g1

0xcb76,	// (0x0006c2fb) cell_tport_appsw_pane_t1

0xcb84,	// (0x0006c309) grid_highlight_pane_cp019

0xcb8c,	// (0x0006c311) list_tport_double_graphic_pane_ParamLimits

0xcb8c,	// (0x0006c311) list_tport_double_graphic_pane

0x0aed,	// (0x00060272) list_highlight_pane_cp023_ParamLimits

0x0aed,	// (0x00060272) list_highlight_pane_cp023

0xcb9d,	// (0x0006c322) list_tport_double_graphic_pane_g1_ParamLimits

0xcb9d,	// (0x0006c322) list_tport_double_graphic_pane_g1

0xcbaa,	// (0x0006c32f) list_tport_double_graphic_pane_t1_ParamLimits

0xcbaa,	// (0x0006c32f) list_tport_double_graphic_pane_t1

0xcbbf,	// (0x0006c344) list_tport_double_graphic_pane_t2_ParamLimits

0xcbbf,	// (0x0006c344) list_tport_double_graphic_pane_t2

0x0001,

0xfca3,	// (0x0006f428) list_tport_double_graphic_pane_t_ParamLimits

0xfca3,	// (0x0006f428) list_tport_double_graphic_pane_t

0x03ce,	// (0x0005fb53) main_cale_note_pane

0xaee8,	// (0x0006a66d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaee8,	// (0x0006a66d) cell_vitu2_function_top_wide_pane_cp01

0xc653,	// (0x0006bdd8) wait_bar_pane_cp05_ParamLimits

0x0aed,	// (0x00060272) listscroll_cmail_pane

0x2b00,	// (0x00062285) list_cmail_pane

0xcbd1,	// (0x0006c356) list_cmail_body_pane

0xcbf8,	// (0x0006c37d) list_single_cmail_header_caption_pane

0xcc21,	// (0x0006c3a6) list_single_cmail_header_detail_pane_ParamLimits

0xcc21,	// (0x0006c3a6) list_single_cmail_header_detail_pane

0x2b10,	// (0x00062295) list_single_cmail_header_caption_pane_t1

0x4d2b,	// (0x000644b0) list_single_cmail_header_detail_pane_g1_ParamLimits

0x4d2b,	// (0x000644b0) list_single_cmail_header_detail_pane_g1

0xcc57,	// (0x0006c3dc) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcc57,	// (0x0006c3dc) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca8,	// (0x0006f42d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca8,	// (0x0006f42d) list_single_cmail_header_detail_pane_g

0x4d41,	// (0x000644c6) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4d41,	// (0x000644c6) list_single_cmail_header_detail_pane_t1

0x4da1,	// (0x00064526) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4da1,	// (0x00064526) list_single_cmail_header_editor_pane_bg

0x2507,	// (0x00061c8c) list_cmail_body_pane_g1

0x2bb7,	// (0x0006233c) list_cmail_body_pane_t1

0x1803,	// (0x00060f88) list_single_cmail_header_editor_pane_bg_g1

0x691d,	// (0x000660a2) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1813,	// (0x00060f98) list_single_cmail_header_editor_pane_bg_g1_copy2

0x180b,	// (0x00060f90) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1a61,	// (0x000611e6) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1833,	// (0x00060fb8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1823,	// (0x00060fa8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x182b,	// (0x00060fb0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x68fd,	// (0x00066082) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcc63,	// (0x0006c3e8) calenote_gesture_pane_ParamLimits

0xcc63,	// (0x0006c3e8) calenote_gesture_pane

0xcc7d,	// (0x0006c402) calenote_window_pane_ParamLimits

0xcc7d,	// (0x0006c402) calenote_window_pane

0x2bc5,	// (0x0006234a) popup_note_window_cp01

0xcc95,	// (0x0006c41a) calenote_swipe_1_pane_ParamLimits

0xcc95,	// (0x0006c41a) calenote_swipe_1_pane

0xc980,	// (0x0006c105) calenote_swipe_2_pane_ParamLimits

0xc980,	// (0x0006c105) calenote_swipe_2_pane

0x2858,	// (0x00061fdd) calenote_swipe_1_pane_g1_ParamLimits

0x2858,	// (0x00061fdd) calenote_swipe_1_pane_g1

0x2865,	// (0x00061fea) calenote_swipe_1_pane_g2_ParamLimits

0x2865,	// (0x00061fea) calenote_swipe_1_pane_g2

0x0001,

0xfc45,	// (0x0006f3ca) calenote_swipe_1_pane_g_ParamLimits

0xfc45,	// (0x0006f3ca) calenote_swipe_1_pane_g

0x2bd7,	// (0x0006235c) calenote_swipe_1_pane_t1_ParamLimits

0x2bd7,	// (0x0006235c) calenote_swipe_1_pane_t1

0x2858,	// (0x00061fdd) calenote_swipe_2_pane_g1_ParamLimits

0x2858,	// (0x00061fdd) calenote_swipe_2_pane_g1

0x2bf6,	// (0x0006237b) calenote_swipe_2_pane_g2_ParamLimits

0x2bf6,	// (0x0006237b) calenote_swipe_2_pane_g2

0x0001,

0xfcb4,	// (0x0006f439) calenote_swipe_2_pane_g_ParamLimits

0xfcb4,	// (0x0006f439) calenote_swipe_2_pane_g

0x2c02,	// (0x00062387) calenote_swipe_2_pane_t1_ParamLimits

0x2c02,	// (0x00062387) calenote_swipe_2_pane_t1

0x03ce,	// (0x0005fb53) main_mup_navstr_pane

0x9d84,	// (0x00069509) main_mup3_pane_t7_ParamLimits

0x9d84,	// (0x00069509) main_mup3_pane_t7

0xa5af,	// (0x00069d34) main_mp4_pane_g6_ParamLimits

0xa5af,	// (0x00069d34) main_mp4_pane_g6

0xa93f,	// (0x0006a0c4) main_image3_pane_t4_ParamLimits

0xa93f,	// (0x0006a0c4) main_image3_pane_t4

0xcca8,	// (0x0006c42d) popup_navstr_preview_pane_ParamLimits

0xcca8,	// (0x0006c42d) popup_navstr_preview_pane

0xccb4,	// (0x0006c439) scroll_navstr_pane_ParamLimits

0xccb4,	// (0x0006c439) scroll_navstr_pane

0x03ce,	// (0x0005fb53) bg_popup_preview_window_pane_cp04

0x2c29,	// (0x000623ae) popup_navstr_preview_pane_t1

0xccc0,	// (0x0006c445) scroll_navstr_pane_g1_ParamLimits

0xccc0,	// (0x0006c445) scroll_navstr_pane_g1

0xcccd,	// (0x0006c452) scroll_navstr_pane_t1_ParamLimits

0xcccd,	// (0x0006c452) scroll_navstr_pane_t1

0x2bce,	// (0x00062353) bg_button_pane_cp014

0x2bce,	// (0x00062353) bg_button_pane_cp030

0x4a54,	// (0x000641d9) list_double_fisheye_pane_g4_ParamLimits

0x4a54,	// (0x000641d9) list_double_fisheye_pane_g4

0x4a60,	// (0x000641e5) list_double_fisheye_pane_g5_ParamLimits

0x4a60,	// (0x000641e5) list_double_fisheye_pane_g5

0xf079,	// (0x0006e7fe) sp_fs_scroll_pane_cp03

0x2978,	// (0x000620fd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2984,	// (0x00062109) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc62,	// (0x0006f3e7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xca79,	// (0x0006c1fe) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2b08,	// (0x0006228d) sp_fs_scroll_pane_cp02

0x5a9a,	// (0x0006521f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x5a9a,	// (0x0006521f) popup_sp_fs_calendar_preview_list_single_pane

0x03ce,	// (0x0005fb53) main_cam6_pano_pane

0x0aed,	// (0x00060272) main_mup3_pane_ParamLimits

0x03ce,	// (0x0005fb53) main_phacti_pane

0xc528,	// (0x0006bcad) bg_button_pane_cp11

0xc540,	// (0x0006bcc5) main_mobtv_info_pane_g2_ParamLimits

0xc540,	// (0x0006bcc5) main_mobtv_info_pane_g2

0x0001,

0xfbc2,	// (0x0006f347) main_mobtv_info_pane_g_ParamLimits

0xfbc2,	// (0x0006f347) main_mobtv_info_pane_g

0xc6f2,	// (0x0006be77) sc_clock_pane_t5_ParamLimits

0xc6f2,	// (0x0006be77) sc_clock_pane_t5

0xc793,	// (0x0006bf18) main_radioblah_pane_g1_ParamLimits

0x27a4,	// (0x00061f29) main_radioblah_pane_t3_ParamLimits

0x27a4,	// (0x00061f29) main_radioblah_pane_t3

0x27bc,	// (0x00061f41) main_radioblah_pane_t4_ParamLimits

0x27bc,	// (0x00061f41) main_radioblah_pane_t4

0xc7b1,	// (0x0006bf36) main_radioblah_text_pane_ParamLimits

0xc7b1,	// (0x0006bf36) main_radioblah_text_pane

0xc7be,	// (0x0006bf43) main_radioblah_info_pane_g1_ParamLimits

0xc853,	// (0x0006bfd8) main_radioblah_info_pane_t4_ParamLimits

0xc853,	// (0x0006bfd8) main_radioblah_info_pane_t4

0x0aed,	// (0x00060272) main_sp_fs_calendar_pane

0xccdf,	// (0x0006c464) main_phacti_pane_g1

0xcce7,	// (0x0006c46c) phacti_note_pane_ParamLimits

0xcce7,	// (0x0006c46c) phacti_note_pane

0x2c40,	// (0x000623c5) phacti_term_pane_ParamLimits

0x2c40,	// (0x000623c5) phacti_term_pane

0x2c55,	// (0x000623da) phacti_note_pane_t1_ParamLimits

0x2c55,	// (0x000623da) phacti_note_pane_t1

0x4db8,	// (0x0006453d) phacti_term_pane_g1

0x4dc0,	// (0x00064545) phacti_term_pane_t1_ParamLimits

0x4dc0,	// (0x00064545) phacti_term_pane_t1

0x2c9e,	// (0x00062423) popup_sp_fs_calendar_preview_list_single_pane_g1

0x5fad,	// (0x00065732) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcbe,	// (0x0006f443) popup_sp_fs_calendar_preview_list_single_pane_g

0x2ca6,	// (0x0006242b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2ca6,	// (0x0006242b) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2cbc,	// (0x00062441) aid_popup_sp_fs_bg_corner_pane

0x618c,	// (0x00065911) popup_sp_fs_calendar_preview_bg_pane_g1

0x03ce,	// (0x0005fb53) popup_sp_fs_calendar_preview_bg_pane

0x2cc4,	// (0x00062449) popup_sp_fs_calendar_preview_list_pane

0xea8e,	// (0x0006e213) bg_main_sp_fs_cale_pane_ParamLimits

0xea8e,	// (0x0006e213) bg_main_sp_fs_cale_pane

0x4df3,	// (0x00064578) listscroll_cale_mrui_pane_ParamLimits

0x4df3,	// (0x00064578) listscroll_cale_mrui_pane

0x4e08,	// (0x0006458d) listscroll_sp_fs_schedule_track_pane

0x4e11,	// (0x00064596) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4e11,	// (0x00064596) main_sp_fs_ctrlbar_pane_cp01

0x2d06,	// (0x0006248b) main_sp_fs_ribbon_pane

0x4e24,	// (0x000645a9) popup_sp_fs_cale_preview_window

0xcd4a,	// (0x0006c4cf) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcd4a,	// (0x0006c4cf) list_single_sp_fs_schedule_track_pane

0x0b46,	// (0x000602cb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0b46,	// (0x000602cb) bg_sp_fs_highlight_list_pane_cp03

0xcd6a,	// (0x0006c4ef) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcd6a,	// (0x0006c4ef) list_single_sp_fs_schedule_track_pane_g1

0xcd76,	// (0x0006c4fb) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcd76,	// (0x0006c4fb) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcc3,	// (0x0006f448) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcc3,	// (0x0006f448) list_single_sp_fs_schedule_track_pane_g

0xcd82,	// (0x0006c507) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcd82,	// (0x0006c507) list_single_sp_fs_schedule_track_pane_t1

0xcd9a,	// (0x0006c51f) sp_fs_schedule_track_pane_ParamLimits

0xcd9a,	// (0x0006c51f) sp_fs_schedule_track_pane

0x2d20,	// (0x000624a5) sp_fs_schedule_track_pane_g1

0x2d28,	// (0x000624ad) sp_fs_schedule_track_pane_g2

0x2d30,	// (0x000624b5) sp_fs_schedule_track_pane_g3

0x2d38,	// (0x000624bd) sp_fs_schedule_track_pane_g4

0x2d40,	// (0x000624c5) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc8,	// (0x0006f44d) sp_fs_schedule_track_pane_g

0x1803,	// (0x00060f88) bg_sp_fs_schedule_viewer_highlight_g1

0x691d,	// (0x000660a2) bg_sp_fs_schedule_viewer_highlight_g2

0x180b,	// (0x00060f90) bg_sp_fs_schedule_viewer_highlight_g3

0x1813,	// (0x00060f98) bg_sp_fs_schedule_viewer_highlight_g4

0x1a61,	// (0x000611e6) bg_sp_fs_schedule_viewer_highlight_g5

0x1823,	// (0x00060fa8) bg_sp_fs_schedule_viewer_highlight_g6

0x182b,	// (0x00060fb0) bg_sp_fs_schedule_viewer_highlight_g7

0x1833,	// (0x00060fb8) bg_sp_fs_schedule_viewer_highlight_g8

0x68fd,	// (0x00066082) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcd3,	// (0x0006f458) bg_sp_fs_schedule_viewer_highlight_g

0x03ce,	// (0x0005fb53) bg_main_sp_fs_ribbon_pane

0xcdaa,	// (0x0006c52f) main_sp_fs_ribbon_pane_g1

0x2d48,	// (0x000624cd) main_sp_fs_ribbon_pane_t1

0xcdb3,	// (0x0006c538) main_sp_fs_ribbon_pane_t2

0x2d57,	// (0x000624dc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce6,	// (0x0006f46b) main_sp_fs_ribbon_pane_t

0x2d66,	// (0x000624eb) main_sp_fs_ribbon_scheduler_pane

0x2d6e,	// (0x000624f3) bg_main_sp_fs_ribbon_pane_g1

0x2d77,	// (0x000624fc) bg_main_sp_fs_ribbon_pane_g2

0x2d80,	// (0x00062505) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfced,	// (0x0006f472) bg_main_sp_fs_ribbon_pane_g

0x2d88,	// (0x0006250d) main_sp_fs_ribbon_scheduler_pane_g1

0x2d91,	// (0x00062516) main_sp_fs_ribbon_scheduler_pane_g2

0x2d9a,	// (0x0006251f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcf4,	// (0x0006f479) main_sp_fs_ribbon_scheduler_pane_g

0x2da3,	// (0x00062528) list_cale_mrui_pane

0xcdc2,	// (0x0006c547) sp_fs_scroll_pane_cp07_ParamLimits

0xcdc2,	// (0x0006c547) sp_fs_scroll_pane_cp07

0xcdde,	// (0x0006c563) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcdde,	// (0x0006c563) bg_sp_fs_schedule_viewer_highlight

0x2db0,	// (0x00062535) list_single_sp_fs_schedule_track_pane_cp01

0x2db8,	// (0x0006253d) list_sp_fs_schedule_track_pane

0x2dc0,	// (0x00062545) sp_fs_scroll_pane_cp06_ParamLimits

0x2dc0,	// (0x00062545) sp_fs_scroll_pane_cp06

0x618c,	// (0x00065911) bgmain_sp_fs_calendar_pane_g1

0x4e36,	// (0x000645bb) list_single_cale_mrui_pane_ParamLimits

0x4e36,	// (0x000645bb) list_single_cale_mrui_pane

0x4e60,	// (0x000645e5) list_single_cale_mrui_row_pane_ParamLimits

0x4e60,	// (0x000645e5) list_single_cale_mrui_row_pane

0x4e6d,	// (0x000645f2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4e6d,	// (0x000645f2) list_single_cale_mrui_row_pane_g1

0x4ea5,	// (0x0006462a) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4ea5,	// (0x0006462a) list_single_cale_mrui_row_pane_t1

0x4eb7,	// (0x0006463c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x4eb7,	// (0x0006463c) list_single_cale_mrui_row_pane_t2

0x4f1d,	// (0x000646a2) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4f1d,	// (0x000646a2) list_single_cale_mrui_row_pane_t3

0x4f4c,	// (0x000646d1) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4f4c,	// (0x000646d1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd02,	// (0x0006f487) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd02,	// (0x0006f487) list_single_cale_mrui_row_pane_t

0x4f7b,	// (0x00064700) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x4f7b,	// (0x00064700) list_single_cmail_header_editor_pane_bg_cp01

0x4f9b,	// (0x00064720) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x4f9b,	// (0x00064720) list_single_cmail_header_editor_pane_bg_cp02

0xcdeb,	// (0x0006c570) main_radioblah_text_pane_t1_ParamLimits

0xcdeb,	// (0x0006c570) main_radioblah_text_pane_t1

0x2e94,	// (0x00062619) cam6_indi_pane_cp01

0x2e9c,	// (0x00062621) cam6_mode_pane_cp01

0x2ea4,	// (0x00062629) cam6_pano_pane

0x2ead,	// (0x00062632) cam6_zoom_pane_cp01

0x2eb5,	// (0x0006263a) cam6_pano_image_pane

0x2ec0,	// (0x00062645) cam6_pano_pane_g1

0x2507,	// (0x00061c8c) cam6_pano_pane_g2

0x2ec9,	// (0x0006264e) cam6_pano_pane_g3

0x2ed2,	// (0x00062657) cam6_pano_pane_g4

0x11fb,	// (0x00060980) cam6_pano_pane_g5

0x2edb,	// (0x00062660) cam6_pano_pane_g6

0x2ee5,	// (0x0006266a) cam6_pano_pane_g7

0x2eed,	// (0x00062672) cam6_pano_pane_g8

0x2ef6,	// (0x0006267b) cam6_pano_pane_g9

0x0008,

0xfd0b,	// (0x0006f490) cam6_pano_pane_g

0x03ce,	// (0x0005fb53) main_browser_tag_pane

0x2c21,	// (0x000623a6) grid_navstr_albumart_pane

0x2f01,	// (0x00062686) cell_navstr_albumart_pane_ParamLimits

0x2f01,	// (0x00062686) cell_navstr_albumart_pane

0x2f21,	// (0x000626a6) cell_navstr_albumart_pane_g1

0xe92a,	// (0x0006e0af) cell_navstr_albumart_pane_g2

0xe93a,	// (0x0006e0bf) cell_navstr_albumart_pane_g3

0xe932,	// (0x0006e0b7) cell_navstr_albumart_pane_g4

0x0003,

0xfd1e,	// (0x0006f4a3) cell_navstr_albumart_pane_g

0xce06,	// (0x0006c58b) bt_list_pane_ParamLimits

0xce06,	// (0x0006c58b) bt_list_pane

0xce26,	// (0x0006c5ab) bt_list_pane_t1

0xce35,	// (0x0006c5ba) bt_list_pane_t2

0x0001,

0xfd27,	// (0x0006f4ac) bt_list_pane_t

0x03ce,	// (0x0005fb53) main_cale_prevew_pane

0xce44,	// (0x0006c5c9) popup_cale_preview_window_ParamLimits

0xce44,	// (0x0006c5c9) popup_cale_preview_window

0x0aed,	// (0x00060272) bg_popup_preview_window_pane_cp05_ParamLimits

0x0aed,	// (0x00060272) bg_popup_preview_window_pane_cp05

0x2f29,	// (0x000626ae) list_cale_preview_pane_ParamLimits

0x2f29,	// (0x000626ae) list_cale_preview_pane

0xce5d,	// (0x0006c5e2) list_double_cale_preview_pane_ParamLimits

0xce5d,	// (0x0006c5e2) list_double_cale_preview_pane

0xce6f,	// (0x0006c5f4) list_single_cale_preview_pane_ParamLimits

0xce6f,	// (0x0006c5f4) list_single_cale_preview_pane

0xce85,	// (0x0006c60a) list_single_cale_preview_pane_g1

0xce8d,	// (0x0006c612) list_single_cale_preview_pane_t1_ParamLimits

0xce8d,	// (0x0006c612) list_single_cale_preview_pane_t1

0xcea2,	// (0x0006c627) list_double_cale_preview_pane_g1

0xceaa,	// (0x0006c62f) list_double_cale_preview_pane_t1_ParamLimits

0xceaa,	// (0x0006c62f) list_double_cale_preview_pane_t1

0xcebf,	// (0x0006c644) list_double_cale_preview_pane_t2_ParamLimits

0xcebf,	// (0x0006c644) list_double_cale_preview_pane_t2

0x0001,

0xfd2c,	// (0x0006f4b1) list_double_cale_preview_pane_t_ParamLimits

0xfd2c,	// (0x0006f4b1) list_double_cale_preview_pane_t

0x03ce,	// (0x0005fb53) main_ezdial_pane

0x0aed,	// (0x00060272) main_sp_fs_email_pane_ParamLimits

0xc9de,	// (0x0006c163) cmail_ddmenu_btn01_pane_ParamLimits

0xc9de,	// (0x0006c163) cmail_ddmenu_btn01_pane

0xc9fb,	// (0x0006c180) cmail_ddmenu_btn02_pane_ParamLimits

0xc9fb,	// (0x0006c180) cmail_ddmenu_btn02_pane

0xca19,	// (0x0006c19e) cmail_ddmenu_btn03_pane_ParamLimits

0xca19,	// (0x0006c19e) cmail_ddmenu_btn03_pane

0xcab4,	// (0x0006c239) main_sp_fs_ctrlbar_pane_ParamLimits

0xcaca,	// (0x0006c24f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcbd1,	// (0x0006c356) list_cmail_body_pane_ParamLimits

0x2b1e,	// (0x000622a3) bg_button_pane_cp12

0x2b33,	// (0x000622b8) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2b33,	// (0x000622b8) list_single_cmail_header_detail_pane_g3

0x4d7d,	// (0x00064502) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4d7d,	// (0x00064502) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaf,	// (0x0006f434) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaf,	// (0x0006f434) list_single_cmail_header_detail_pane_t

0x4dd5,	// (0x0006455a) phacti_term_pane_t2_ParamLimits

0x4dd5,	// (0x0006455a) phacti_term_pane_t2

0x0001,

0xfcb9,	// (0x0006f43e) phacti_term_pane_t_ParamLimits

0xfcb9,	// (0x0006f43e) phacti_term_pane_t

0x2f35,	// (0x000626ba) aid_size_list_single_double

0xced7,	// (0x0006c65c) popup_ezdial_listscroll_window

0xcef8,	// (0x0006c67d) popup_number_entry_window_cp01

0x5fce,	// (0x00065753) bg_popup_call_pane_cp09

0x2f41,	// (0x000626c6) ezdial_list_pane

0x2f49,	// (0x000626ce) scroll_pane_cp23

0xde8c,	// (0x0006d611) bg_button_pane_cp028_ParamLimits

0xde8c,	// (0x0006d611) bg_button_pane_cp028

0xcf06,	// (0x0006c68b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcf06,	// (0x0006c68b) cmail_ddmenu_btn01_pane_g1

0xcf16,	// (0x0006c69b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcf16,	// (0x0006c69b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd31,	// (0x0006f4b6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd31,	// (0x0006f4b6) cmail_ddmenu_btn01_pane_g

0x2f51,	// (0x000626d6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2f51,	// (0x000626d6) cmail_ddmenu_btn01_pane_t1

0xea8e,	// (0x0006e213) bg_button_pane_cp029_ParamLimits

0xea8e,	// (0x0006e213) bg_button_pane_cp029

0xcf22,	// (0x0006c6a7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcf22,	// (0x0006c6a7) cmail_ddmenu_btn02_pane_g1

0xcf3a,	// (0x0006c6bf) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcf3a,	// (0x0006c6bf) cmail_ddmenu_btn02_pane_t1

0x0b46,	// (0x000602cb) bg_button_pane_cp031_ParamLimits

0x0b46,	// (0x000602cb) bg_button_pane_cp031

0xcf22,	// (0x0006c6a7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcf22,	// (0x0006c6a7) cmail_ddmenu_btn03_pane_g1

0xcf3a,	// (0x0006c6bf) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcf3a,	// (0x0006c6bf) cmail_ddmenu_btn03_pane_t1

0xa7ea,	// (0x00069f6f) cell_dialer2_keypad_pane_t1_ParamLimits

0xa804,	// (0x00069f89) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa804,	// (0x00069f89) cell_dialer2_keypad_pane_t1_copy1

0xc369,	// (0x0006baee) ncimui_group_button_pane

0x0aed,	// (0x00060272) main_sp_fs_calendar_pane_ParamLimits

0xcbf8,	// (0x0006c37d) list_single_cmail_header_caption_pane_ParamLimits

0x4dea,	// (0x0006456f) aid_recal_txt_sm_pane

0x03ce,	// (0x0005fb53) mian_recal_day_pane

0x4e24,	// (0x000645a9) popup_sp_fs_cale_preview_window_ParamLimits

0x2f67,	// (0x000626ec) list_recal_day_pane

0x4fd2,	// (0x00064757) list_single_recal_day_pane_ParamLimits

0x4fd2,	// (0x00064757) list_single_recal_day_pane

0x2fbb,	// (0x00062740) list_single_recal_day_pane_g1_ParamLimits

0x2fbb,	// (0x00062740) list_single_recal_day_pane_g1

0x4fe4,	// (0x00064769) list_single_recal_day_pane_g2_ParamLimits

0x4fe4,	// (0x00064769) list_single_recal_day_pane_g2

0x4ff0,	// (0x00064775) list_single_recal_day_pane_g3_ParamLimits

0x4ff0,	// (0x00064775) list_single_recal_day_pane_g3

0x4ffc,	// (0x00064781) list_single_recal_day_pane_g4_ParamLimits

0x4ffc,	// (0x00064781) list_single_recal_day_pane_g4

0x500a,	// (0x0006478f) list_single_recal_day_pane_g5_ParamLimits

0x500a,	// (0x0006478f) list_single_recal_day_pane_g5

0x5020,	// (0x000647a5) list_single_recal_day_pane_g6_ParamLimits

0x5020,	// (0x000647a5) list_single_recal_day_pane_g6

0x0004,

0xfd40,	// (0x0006f4c5) list_single_recal_day_pane_g_ParamLimits

0xfd40,	// (0x0006f4c5) list_single_recal_day_pane_g

0x5034,	// (0x000647b9) list_single_recal_day_pane_t1

0x5046,	// (0x000647cb) list_single_recal_day_pane_t2

0x0001,

0xfd4b,	// (0x0006f4d0) list_single_recal_day_pane_t

0xcf5e,	// (0x0006c6e3) ncimui_query_button_pane_ParamLimits

0xcf5e,	// (0x0006c6e3) ncimui_query_button_pane

0xcf6e,	// (0x0006c6f3) ncimui_query_button_pane_t1_ParamLimits

0xcf6e,	// (0x0006c6f3) ncimui_query_button_pane_t1

0x3023,	// (0x000627a8) ncimui_query_button_pane_t2_ParamLimits

0x3023,	// (0x000627a8) ncimui_query_button_pane_t2

0x0001,

0xfd50,	// (0x0006f4d5) ncimui_query_button_pane_t_ParamLimits

0xfd50,	// (0x0006f4d5) ncimui_query_button_pane_t

0xcf81,	// (0x0006c706) query_button_pane_ParamLimits

0xcf81,	// (0x0006c706) query_button_pane

0x03ce,	// (0x0005fb53) bg_button_pane_cp0028

0x3036,	// (0x000627bb) query_button_pane_t1

0x9329,	// (0x00068aae) main_tport_pane_ParamLimits

0xcadb,	// (0x0006c260) bg_popup_window_pane_cp01_ParamLimits

0xcadb,	// (0x0006c260) bg_popup_window_pane_cp01

0xcae9,	// (0x0006c26e) heading_pane_cp08_ParamLimits

0xcae9,	// (0x0006c26e) heading_pane_cp08

0xcaf7,	// (0x0006c27c) heading_pane_cp07_ParamLimits

0xcaf7,	// (0x0006c27c) heading_pane_cp07

0xcb66,	// (0x0006c2eb) cell_tport_appsw_pane_g2

0x0002,

0xfc9c,	// (0x0006f421) cell_tport_appsw_pane_g

0x4593,	// (0x00063d18) input_candi_list_open_g1

0x77f0,	// (0x00066f75) list_cale_time_pane_g6_ParamLimits

0x77f0,	// (0x00066f75) list_cale_time_pane_g6

0x97ca,	// (0x00068f4f) aid_size_touch_calib_1_ParamLimits

0x97ca,	// (0x00068f4f) aid_size_touch_calib_1

0x97d6,	// (0x00068f5b) aid_size_touch_calib_2_ParamLimits

0x97d6,	// (0x00068f5b) aid_size_touch_calib_2

0x97e4,	// (0x00068f69) aid_size_touch_calib_3_ParamLimits

0x97e4,	// (0x00068f69) aid_size_touch_calib_3

0x97f4,	// (0x00068f79) aid_size_touch_calib_4_ParamLimits

0x97f4,	// (0x00068f79) aid_size_touch_calib_4

0x9802,	// (0x00068f87) main_touch_calib_button_group_pane_ParamLimits

0x9802,	// (0x00068f87) main_touch_calib_button_group_pane

0x9810,	// (0x00068f95) main_touch_calib_pane_g1_ParamLimits

0x981c,	// (0x00068fa1) main_touch_calib_pane_g2_ParamLimits

0x9828,	// (0x00068fad) main_touch_calib_pane_g3_ParamLimits

0x9834,	// (0x00068fb9) main_touch_calib_pane_g4_ParamLimits

0xf6de,	// (0x0006ee63) main_touch_calib_pane_g_ParamLimits

0x9840,	// (0x00068fc5) main_touch_calib_pane_t1_ParamLimits

0x9859,	// (0x00068fde) main_touch_calib_pane_t2_ParamLimits

0x9872,	// (0x00068ff7) main_touch_calib_pane_t3_ParamLimits

0x9888,	// (0x0006900d) main_touch_calib_pane_t4_ParamLimits

0x989e,	// (0x00069023) main_touch_calib_pane_t5_ParamLimits

0xf6e7,	// (0x0006ee6c) main_touch_calib_pane_t_ParamLimits

0x0fbe,	// (0x00060743) list_single_fp_cale_pane_g3_ParamLimits

0x0fbe,	// (0x00060743) list_single_fp_cale_pane_g3

0x0aed,	// (0x00060272) bg_button_pane_cp012_ParamLimits

0x0aed,	// (0x00060272) bg_vkb2_func_pane_cp03_ParamLimits

0xb633,	// (0x0006adb8) cell_vitu2_function_top_pane_g1_ParamLimits

0x0aed,	// (0x00060272) bg_vkb2_func_pane_cp04_ParamLimits

0xc2f1,	// (0x0006ba76) main_ncimui_button_group_pane_ParamLimits

0xc2f1,	// (0x0006ba76) main_ncimui_button_group_pane

0xc357,	// (0x0006badc) main_ncimui_pane_t3_ParamLimits

0xc357,	// (0x0006badc) main_ncimui_pane_t3

0x2c37,	// (0x000623bc) phacti_button_group_pane

0x2f35,	// (0x000626ba) aid_size_list_single_double_ParamLimits

0xced7,	// (0x0006c65c) popup_ezdial_listscroll_window_ParamLimits

0xcef8,	// (0x0006c67d) popup_number_entry_window_cp01_ParamLimits

0xcf8e,	// (0x0006c713) phacti_button_pane_ParamLimits

0xcf8e,	// (0x0006c713) phacti_button_pane

0x03ce,	// (0x0005fb53) bg_button_pane_cp14

0x3044,	// (0x000627c9) phacti_button_pane_t1

0xcf9f,	// (0x0006c724) main_touch_calib_button_pane_ParamLimits

0xcf9f,	// (0x0006c724) main_touch_calib_button_pane

0x5746,	// (0x00064ecb) bg_button_pane_cp18_ParamLimits

0x5746,	// (0x00064ecb) bg_button_pane_cp18

0x3052,	// (0x000627d7) main_touch_calib_button_pane_t1_ParamLimits

0x3052,	// (0x000627d7) main_touch_calib_button_pane_t1

0x3068,	// (0x000627ed) main_touch_calib_button_pane_t2_ParamLimits

0x3068,	// (0x000627ed) main_touch_calib_button_pane_t2

0x0001,

0xfd55,	// (0x0006f4da) main_touch_calib_button_pane_t_ParamLimits

0xfd55,	// (0x0006f4da) main_touch_calib_button_pane_t

0x03ce,	// (0x0005fb53) cell_ncimui_button_pane

0x03ce,	// (0x0005fb53) bg_button_pane_cp032

0x3086,	// (0x0006280b) cell_ncimui_button_pane_t1

0xa860,	// (0x00069fe5) image3_infobar_pane_ParamLimits

0xa860,	// (0x00069fe5) image3_infobar_pane

0xc714,	// (0x0006be99) fs_bigclock_status_pane_ParamLimits

0xc714,	// (0x0006be99) fs_bigclock_status_pane

0xc721,	// (0x0006bea6) main_fs_bigclock_clock_pane_ParamLimits

0xc721,	// (0x0006bea6) main_fs_bigclock_clock_pane

0xc735,	// (0x0006beba) main_fs_bigclock_indi_pane_ParamLimits

0xc735,	// (0x0006beba) main_fs_bigclock_indi_pane

0xc75d,	// (0x0006bee2) main_fs_bigclock_swipe_pane_ParamLimits

0xc75d,	// (0x0006bee2) main_fs_bigclock_swipe_pane

0x03ce,	// (0x0005fb53) main_fs_clock_dumped_data

0x2614,	// (0x00061d99) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2614,	// (0x00061d99) list_single_fs_bigclock_indicator_pane_g1

0x262f,	// (0x00061db4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x262f,	// (0x00061db4) list_single_fs_bigclock_indicator_pane_g2

0x2649,	// (0x00061dce) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2649,	// (0x00061dce) list_single_fs_bigclock_indicator_pane_g3

0x2663,	// (0x00061de8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2663,	// (0x00061de8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf6,	// (0x0006f37b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf6,	// (0x0006f37b) list_single_fs_bigclock_indicator_pane_g

0x268e,	// (0x00061e13) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x268e,	// (0x00061e13) list_single_fs_bigclock_indicator_pane_t1

0x26b6,	// (0x00061e3b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x26b6,	// (0x00061e3b) list_single_fs_bigclock_indicator_pane_t2

0x26de,	// (0x00061e63) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x26de,	// (0x00061e63) list_single_fs_bigclock_indicator_pane_t3

0x2706,	// (0x00061e8b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2706,	// (0x00061e8b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc01,	// (0x0006f386) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc01,	// (0x0006f386) list_single_fs_bigclock_indicator_pane_t

0x3094,	// (0x00062819) image3_infobar_fav_pane_ParamLimits

0x3094,	// (0x00062819) image3_infobar_fav_pane

0x30a4,	// (0x00062829) image3_infobar_loc_pane_ParamLimits

0x30a4,	// (0x00062829) image3_infobar_loc_pane

0x30b8,	// (0x0006283d) image3_infobar_time_pane_ParamLimits

0x30b8,	// (0x0006283d) image3_infobar_time_pane

0x618c,	// (0x00065911) image3_infobar_time_pane_g1

0x30c8,	// (0x0006284d) image3_infobar_time_pane_t1

0x618c,	// (0x00065911) image3_infobar_loc_pane_g1

0x30d6,	// (0x0006285b) image3_infobar_loc_pane_g2

0x0001,

0xfd5a,	// (0x0006f4df) image3_infobar_loc_pane_g

0x30de,	// (0x00062863) image3_infobar_loc_pane_t1

0x618c,	// (0x00065911) image3_infobar_fav_pane_g1

0x30ec,	// (0x00062871) image3_infobar_fav_pane_g2

0x0001,

0xfd5f,	// (0x0006f4e4) image3_infobar_fav_pane_g

0x30f4,	// (0x00062879) fs_bigclock_status_battery_pane

0x30fd,	// (0x00062882) fs_bigclock_status_signal_pane

0x3106,	// (0x0006288b) fs_bigclock_status_title_pane

0x310f,	// (0x00062894) fs_bigclock_status_signal_pane_g1

0x3118,	// (0x0006289d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd64,	// (0x0006f4e9) fs_bigclock_status_signal_pane_g

0x3120,	// (0x000628a5) fs_bigclock_status_battery_pane_g1

0x3129,	// (0x000628ae) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd69,	// (0x0006f4ee) fs_bigclock_status_battery_pane_g

0x3131,	// (0x000628b6) fs_bigclock_status_title_pane_t1

0xcfaf,	// (0x0006c734) main_fs_bigclock_clock_pane_g1

0xcfaf,	// (0x0006c734) main_fs_bigclock_clock_pane_g2

0xcfbc,	// (0x0006c741) main_fs_bigclock_clock_pane_g3

0xcfbc,	// (0x0006c741) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd6e,	// (0x0006f4f3) main_fs_bigclock_clock_pane_g

0xcfc8,	// (0x0006c74d) main_fs_bigclock_clock_pane_t1

0xcfdb,	// (0x0006c760) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd77,	// (0x0006f4fc) main_fs_bigclock_clock_pane_t

0x313f,	// (0x000628c4) list_single_fs_bigclock_indicator_pane_ParamLimits

0x313f,	// (0x000628c4) list_single_fs_bigclock_indicator_pane

0x3150,	// (0x000628d5) list_single_fs_bigclock_pane_ParamLimits

0x3150,	// (0x000628d5) list_single_fs_bigclock_pane

0x3176,	// (0x000628fb) main_fs_bigclock_indicator_pane_t1

0x3185,	// (0x0006290a) list_single_fs_bigclock_pane_g1

0x318d,	// (0x00062912) list_single_fs_bigclock_pane_t1

0x618c,	// (0x00065911) main_fs_bigclock_swipe_pane_g1

0x31d0,	// (0x00062955) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd88,	// (0x0006f50d) main_fs_bigclock_swipe_pane_g

0x31d8,	// (0x0006295d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x31d8,	// (0x0006295d) main_fs_bigclock_swipe_pane_t1

0x7ae7,	// (0x0006726c) call_type_pane_ParamLimits

0x03ce,	// (0x0005fb53) main_btmg_pane

0x4e99,	// (0x0006461e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4e99,	// (0x0006461e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcfb,	// (0x0006f480) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcfb,	// (0x0006f480) list_single_cale_mrui_row_pane_g

0x4fc1,	// (0x00064746) list_recal_vselct_arw_lo_pane

0x2f98,	// (0x0006271d) list_recal_vselct_arw_up_pane

0x4fc9,	// (0x0006474e) list_recal_vselct_pane

0xd032,	// (0x0006c7b7) btmg_button_pane

0xd03e,	// (0x0006c7c3) main_btmg_pane_g1

0x03ce,	// (0x0005fb53) bg_button_pane_cp044

0x31f5,	// (0x0006297a) btmg_button_pane_t1

0xea7a,	// (0x0006e1ff) aid_listscroll_gen

0x0aed,	// (0x00060272) main_cntbar_detail_pane

0x2b00,	// (0x00062285) list_cmail_folder_pane

0xf079,	// (0x0006e7fe) sp_fs_scroll_pane_cp03_ParamLimits

0x5058,	// (0x000647dd) list_single_fs_dyc_pane_cp01_ParamLimits

0x5058,	// (0x000647dd) list_single_fs_dyc_pane_cp01

0x3203,	// (0x00062988) aid_size_cmail_indent

0x5080,	// (0x00064805) list_single_dyc_row_pane_cp01

0xd066,	// (0x0006c7eb) cntbar_detail_list_pane_ParamLimits

0xd066,	// (0x0006c7eb) cntbar_detail_list_pane

0xd0a0,	// (0x0006c825) main_cntbar_detail_cont_pane_ParamLimits

0xd0a0,	// (0x0006c825) main_cntbar_detail_cont_pane

0x79bd,	// (0x00067142) scroll_pane_cp032_ParamLimits

0x79bd,	// (0x00067142) scroll_pane_cp032

0xd0ac,	// (0x0006c831) cntbar_detail_list_event_pane_ParamLimits

0xd0ac,	// (0x0006c831) cntbar_detail_list_event_pane

0xd072,	// (0x0006c7f7) cntbar_detail_list_shct_pane

0x6975,	// (0x000660fa) aid_list_gen

0x3215,	// (0x0006299a) aid_scroll

0x321e,	// (0x000629a3) aid_size_touch_scroll_bar

0xd0c0,	// (0x0006c845) aid_list_double

0x3227,	// (0x000629ac) aid_list_single

0xd0c9,	// (0x0006c84e) aid_list_single_lg

0x5089,	// (0x0006480e) aid_list_z_g_a_sm

0xd0d2,	// (0x0006c857) aid_list_z_g_d

0x5091,	// (0x00064816) aid_txt_z_prm

0x509f,	// (0x00064824) aid_txt_z_prm_cp01

0x50ad,	// (0x00064832) aid_txt_z_sec

0xd0da,	// (0x0006c85f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd0da,	// (0x0006c85f) main_cntbar_detail_cont_pane_g1

0xd0e7,	// (0x0006c86c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd0e7,	// (0x0006c86c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd8d,	// (0x0006f512) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd8d,	// (0x0006f512) main_cntbar_detail_cont_pane_g

0x3230,	// (0x000629b5) main_cntbar_detail_cont_pane_t1

0x323e,	// (0x000629c3) main_cntbar_detail_cont_pane_t2

0x324c,	// (0x000629d1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd92,	// (0x0006f517) main_cntbar_detail_cont_pane_t

0xd0f3,	// (0x0006c878) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd0f3,	// (0x0006c878) cell_cntbar_detail_list_shct_pane

0x325a,	// (0x000629df) cntbar_detail_list_shct_pane_g1

0x3263,	// (0x000629e8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd99,	// (0x0006f51e) cntbar_detail_list_shct_pane_g

0xd107,	// (0x0006c88c) cntbar_detail_list_event_pane_g1_ParamLimits

0xd107,	// (0x0006c88c) cntbar_detail_list_event_pane_g1

0xd113,	// (0x0006c898) cntbar_detail_list_event_pane_g2_ParamLimits

0xd113,	// (0x0006c898) cntbar_detail_list_event_pane_g2

0x0005,

0xfd9e,	// (0x0006f523) cntbar_detail_list_event_pane_g_ParamLimits

0xfd9e,	// (0x0006f523) cntbar_detail_list_event_pane_g

0xd17f,	// (0x0006c904) cntbar_detail_list_event_pane_t1_ParamLimits

0xd17f,	// (0x0006c904) cntbar_detail_list_event_pane_t1

0xd194,	// (0x0006c919) cntbar_detail_list_event_pane_t2_ParamLimits

0xd194,	// (0x0006c919) cntbar_detail_list_event_pane_t2

0x0002,

0xfdab,	// (0x0006f530) cntbar_detail_list_event_pane_t_ParamLimits

0xfdab,	// (0x0006f530) cntbar_detail_list_event_pane_t

0x618c,	// (0x00065911) cell_cntbar_detail_list_shct_pane_g1

0x811a,	// (0x0006789f) navi_pane_mv_g3

0x0aed,	// (0x00060272) main_cntbar_detail_pane_ParamLimits

0x03ce,	// (0x0005fb53) main_notif_wgt_pane

0xa4ea,	// (0x00069c6f) aid_tch_main_mp4_pane_g4

0xa749,	// (0x00069ece) popup_slider_window_cp02

0x4fb7,	// (0x0006473c) list_recal_day_event_pane

0xd046,	// (0x0006c7cb) cntbar_detail_btn_pane_ParamLimits

0xd046,	// (0x0006c7cb) cntbar_detail_btn_pane

0xd056,	// (0x0006c7db) cntbar_detail_btn_pane_cp01_ParamLimits

0xd056,	// (0x0006c7db) cntbar_detail_btn_pane_cp01

0xd072,	// (0x0006c7f7) cntbar_detail_list_shct_pane_ParamLimits

0xd07e,	// (0x0006c803) cntbar_detail_pane_g1_ParamLimits

0xd07e,	// (0x0006c803) cntbar_detail_pane_g1

0xd08a,	// (0x0006c80f) cntbar_detail_pane_t1_ParamLimits

0xd08a,	// (0x0006c80f) cntbar_detail_pane_t1

0xd11f,	// (0x0006c8a4) cntbar_detail_list_event_pane_g3_ParamLimits

0xd11f,	// (0x0006c8a4) cntbar_detail_list_event_pane_g3

0xd137,	// (0x0006c8bc) cntbar_detail_list_event_pane_g4_ParamLimits

0xd137,	// (0x0006c8bc) cntbar_detail_list_event_pane_g4

0xd14f,	// (0x0006c8d4) cntbar_detail_list_event_pane_g5_ParamLimits

0xd14f,	// (0x0006c8d4) cntbar_detail_list_event_pane_g5

0xd167,	// (0x0006c8ec) cntbar_detail_list_event_pane_g6_ParamLimits

0xd167,	// (0x0006c8ec) cntbar_detail_list_event_pane_g6

0xd1a9,	// (0x0006c92e) cntbar_detail_list_event_pane_t3_ParamLimits

0xd1a9,	// (0x0006c92e) cntbar_detail_list_event_pane_t3

0xd1bb,	// (0x0006c940) popup_notif_wgt_window_ParamLimits

0xd1bb,	// (0x0006c940) popup_notif_wgt_window

0xd1cb,	// (0x0006c950) popup_submenu_window_cp01_ParamLimits

0xd1cb,	// (0x0006c950) popup_submenu_window_cp01

0x5fce,	// (0x00065753) bg_popup_window_pane_cp10

0x326c,	// (0x000629f1) listscroll_notif_wgt_pane

0x327e,	// (0x00062a03) list_notif_wgt_window

0x3287,	// (0x00062a0c) scroll_pane_cp033

0xd1dd,	// (0x0006c962) list_notif_wgt_row_pane_ParamLimits

0xd1dd,	// (0x0006c962) list_notif_wgt_row_pane

0x3290,	// (0x00062a15) aid_size_list_notif_wgt_del

0x329d,	// (0x00062a22) list_notif_wgt_row_pane_g1

0x32a9,	// (0x00062a2e) list_notif_wgt_row_pane_g2

0x32b8,	// (0x00062a3d) list_notif_wgt_row_pane_g3

0x0002,

0xfdb2,	// (0x0006f537) list_notif_wgt_row_pane_g

0x32c5,	// (0x00062a4a) list_notif_wgt_row_pane_t1

0x32db,	// (0x00062a60) list_notif_wgt_row_pane_t2

0x32ed,	// (0x00062a72) list_notif_wgt_row_pane_t3

0x0002,

0xfdb9,	// (0x0006f53e) list_notif_wgt_row_pane_t

0x1a7b,	// (0x00061200) list_recal_day_event_pane_g1

0x32ff,	// (0x00062a84) list_recal_day_event_pane_t1

0x03ce,	// (0x0005fb53) bg_button_pane_cp045

0x330e,	// (0x00062a93) cntbar_detail_btn_pane_t1

0xea8e,	// (0x0006e213) main_callh_pane_ParamLimits

0xea8e,	// (0x0006e213) main_callh_pane

0x03ce,	// (0x0005fb53) main_coverflow0_pane

0x03ce,	// (0x0005fb53) main_wgtman_pane

0xc775,	// (0x0006befa) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc775,	// (0x0006befa) main_fs_bigclock_unlock_btn_pane

0xcb5e,	// (0x0006c2e3) bg_button_pane_cp16

0xcb6e,	// (0x0006c2f3) cell_tport_appsw_pane_g3

0xd1ef,	// (0x0006c974) cf0_flow_pane_ParamLimits

0xd1ef,	// (0x0006c974) cf0_flow_pane

0x331c,	// (0x00062aa1) listscroll_cf0_pane

0x3327,	// (0x00062aac) main_cf0_pane_g1

0xd1fe,	// (0x0006c983) main_cf0_pane_t1_ParamLimits

0xd1fe,	// (0x0006c983) main_cf0_pane_t1

0xd212,	// (0x0006c997) main_cf0_pane_t2_ParamLimits

0xd212,	// (0x0006c997) main_cf0_pane_t2

0x0001,

0xfdc5,	// (0x0006f54a) main_cf0_pane_t_ParamLimits

0xfdc5,	// (0x0006f54a) main_cf0_pane_t

0x3339,	// (0x00062abe) scroll_pane_cp11

0xd226,	// (0x0006c9ab) cf0_flow_pane_g1

0xd22e,	// (0x0006c9b3) cf0_flow_pane_g2

0x0001,

0xfdca,	// (0x0006f54f) cf0_flow_pane_g

0xd236,	// (0x0006c9bb) cf0_flow_pane_t1

0x03ce,	// (0x0005fb53) main_call6_pane

0x03ce,	// (0x0005fb53) main_calllock_pane

0xd244,	// (0x0006c9c9) call6_btn_grp_pane_ParamLimits

0xd244,	// (0x0006c9c9) call6_btn_grp_pane

0xd253,	// (0x0006c9d8) call6_pane_g1_ParamLimits

0xd253,	// (0x0006c9d8) call6_pane_g1

0xd263,	// (0x0006c9e8) popup_call6_1st_window_ParamLimits

0xd263,	// (0x0006c9e8) popup_call6_1st_window

0xd271,	// (0x0006c9f6) popup_call6_2nd_window_ParamLimits

0xd271,	// (0x0006c9f6) popup_call6_2nd_window

0xd27f,	// (0x0006ca04) cell_call6_btn_pane_ParamLimits

0xd27f,	// (0x0006ca04) cell_call6_btn_pane

0x5fce,	// (0x00065753) bg_popup_call2_in_pane_cp03

0x3344,	// (0x00062ac9) popup_call6_1st_window_g1

0x334c,	// (0x00062ad1) popup_call6_1st_window_g2

0x3354,	// (0x00062ad9) popup_call6_1st_window_g3

0x0002,

0xfdcf,	// (0x0006f554) popup_call6_1st_window_g

0x335c,	// (0x00062ae1) popup_call6_1st_window_t1

0x336b,	// (0x00062af0) popup_call6_1st_window_t2

0x3379,	// (0x00062afe) popup_call6_1st_window_t3

0x0002,

0xfdd6,	// (0x0006f55b) popup_call6_1st_window_t

0x5fce,	// (0x00065753) bg_popup_call2_in_pane_cp04

0x3387,	// (0x00062b0c) popup_call6_2nd_window_g1

0x338f,	// (0x00062b14) popup_call6_2nd_window_g2

0x3397,	// (0x00062b1c) popup_call6_2nd_window_g3

0x0002,

0xfddd,	// (0x0006f562) popup_call6_2nd_window_g

0x339f,	// (0x00062b24) popup_call6_2nd_window_t1

0x03ce,	// (0x0005fb53) bg_button_pane_cp15

0x33e1,	// (0x00062b66) cell_call6_btn_pane_g1

0xd28e,	// (0x0006ca13) cell_call6_btn_pane_t1

0xd29d,	// (0x0006ca22) listscroll_wgtman_pane_ParamLimits

0xd29d,	// (0x0006ca22) listscroll_wgtman_pane

0xd2b9,	// (0x0006ca3e) wgtman_btn_pane_ParamLimits

0xd2b9,	// (0x0006ca3e) wgtman_btn_pane

0x7d6d,	// (0x000674f2) aid_scroll_copy1

0x33ae,	// (0x00062b33) list_wgtman_pane

0xd2ee,	// (0x0006ca73) wgtman_btn_pane_g1_ParamLimits

0xd2ee,	// (0x0006ca73) wgtman_btn_pane_g1

0xd316,	// (0x0006ca9b) wgtman_btn_pane_t1_ParamLimits

0xd316,	// (0x0006ca9b) wgtman_btn_pane_t1

0x33b8,	// (0x00062b3d) wgtman_btn_pane_t2_ParamLimits

0x33b8,	// (0x00062b3d) wgtman_btn_pane_t2

0x0001,

0xfde4,	// (0x0006f569) wgtman_btn_pane_t_ParamLimits

0xfde4,	// (0x0006f569) wgtman_btn_pane_t

0xd34d,	// (0x0006cad2) listrow_wgtman_pane_ParamLimits

0xd34d,	// (0x0006cad2) listrow_wgtman_pane

0xd368,	// (0x0006caed) listrow_wgtman_pane_g1

0xd375,	// (0x0006cafa) listrow_wgtman_pane_g2

0x0001,

0xfde9,	// (0x0006f56e) listrow_wgtman_pane_g

0x50bb,	// (0x00064840) listrow_wgtman_pane_t1

0x50d3,	// (0x00064858) listrow_wgtman_pane_t2

0x0001,

0xfdee,	// (0x0006f573) listrow_wgtman_pane_t

0x50f9,	// (0x0006487e) wait_bar_pane_cp09

0x33cf,	// (0x00062b54) main_calllock_btn_pane

0x33d9,	// (0x00062b5e) main_calllock_pane_g1

0x03ce,	// (0x0005fb53) bg_button_pane_cp17

0x33e1,	// (0x00062b66) main_calllock_btn_pane_g1

0x33ea,	// (0x00062b6f) main_calllock_btn_pane_t1

0x03ce,	// (0x0005fb53) main_dialer3_pane

0x03ce,	// (0x0005fb53) main_fmrd2_pane

0x618c,	// (0x00065911) main_fs_bigclock_unlock_btn_pane_g1

0xd39b,	// (0x0006cb20) main_fs_bigclock_unlock_btn_pane_t1

0xd3a9,	// (0x0006cb2e) area_fmrd2_info_pane_ParamLimits

0xd3a9,	// (0x0006cb2e) area_fmrd2_info_pane

0xd3b7,	// (0x0006cb3c) area_fmrd2_visual_pane_ParamLimits

0xd3b7,	// (0x0006cb3c) area_fmrd2_visual_pane

0xd3c5,	// (0x0006cb4a) fmrd2_indi_pane_ParamLimits

0xd3c5,	// (0x0006cb4a) fmrd2_indi_pane

0xd3d2,	// (0x0006cb57) area_fmrd2_visual_pane_g1

0xd3da,	// (0x0006cb5f) area_fmrd2_visual_pane_t1

0xd3ea,	// (0x0006cb6f) area_fmrd2_visual_pane_t2

0xd3fa,	// (0x0006cb7f) area_fmrd2_visual_pane_t3

0x0002,

0xfdf8,	// (0x0006f57d) area_fmrd2_visual_pane_t

0xd40a,	// (0x0006cb8f) area_fmrd2_info_pane_g1

0xd412,	// (0x0006cb97) area_fmrd2_info_pane_t1

0xd422,	// (0x0006cba7) area_fmrd2_info_pane_t2

0xd432,	// (0x0006cbb7) area_fmrd2_info_pane_t3

0xd442,	// (0x0006cbc7) area_fmrd2_info_pane_t4

0x0003,

0xfdff,	// (0x0006f584) area_fmrd2_info_pane_t

0xd450,	// (0x0006cbd5) fmrd2_indi_pane_t1

0xd460,	// (0x0006cbe5) fmrd2_indi_pane_t2

0xd470,	// (0x0006cbf5) fmrd2_indi_pane_t3

0x0002,

0xfe08,	// (0x0006f58d) fmrd2_indi_pane_t

0x2672,	// (0x00061df7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2672,	// (0x00061df7) list_single_fs_bigclock_indicator_pane_g5

0x2723,	// (0x00061ea8) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2723,	// (0x00061ea8) list_single_fs_bigclock_indicator_pane_t5

0xccfd,	// (0x0006c482) aid_cell_bcale_month_pane_ParamLimits

0xccfd,	// (0x0006c482) aid_cell_bcale_month_pane

0xcd1b,	// (0x0006c4a0) bcale_month_pane_ParamLimits

0xcd1b,	// (0x0006c4a0) bcale_month_pane

0xcd39,	// (0x0006c4be) bcale_preview_pane_ParamLimits

0xcd39,	// (0x0006c4be) bcale_preview_pane

0x318d,	// (0x00062912) list_single_fs_bigclock_pane_t1_ParamLimits

0x31ac,	// (0x00062931) list_single_fs_bigclock_pane_t2_ParamLimits

0x31ac,	// (0x00062931) list_single_fs_bigclock_pane_t2

0x0001,

0xfd83,	// (0x0006f508) list_single_fs_bigclock_pane_t_ParamLimits

0xfd83,	// (0x0006f508) list_single_fs_bigclock_pane_t

0xd393,	// (0x0006cb18) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdf3,	// (0x0006f578) main_fs_bigclock_unlock_btn_pane_g

0xd47e,	// (0x0006cc03) aid_dia3_key_size_ParamLimits

0xd47e,	// (0x0006cc03) aid_dia3_key_size

0xd48a,	// (0x0006cc0f) aid_dia3_listrow_size_ParamLimits

0xd48a,	// (0x0006cc0f) aid_dia3_listrow_size

0xd49a,	// (0x0006cc1f) dia3_keypad_fun_pane_ParamLimits

0xd49a,	// (0x0006cc1f) dia3_keypad_fun_pane

0xd4ac,	// (0x0006cc31) dia3_keypad_num_pane_ParamLimits

0xd4ac,	// (0x0006cc31) dia3_keypad_num_pane

0xd4be,	// (0x0006cc43) dia3_listscroll_pane_ParamLimits

0xd4be,	// (0x0006cc43) dia3_listscroll_pane

0xd4cc,	// (0x0006cc51) dia3_numentry_pane_ParamLimits

0xd4cc,	// (0x0006cc51) dia3_numentry_pane

0x33f9,	// (0x00062b7e) dia3_list_pane

0x3404,	// (0x00062b89) scroll_pane_cp12

0x03ce,	// (0x0005fb53) bg_dia3_numentry_pane

0xd4da,	// (0x0006cc5f) dia3_numentry_pane_t1

0xd4e9,	// (0x0006cc6e) cell_dia3_key_num_pane

0xd4f1,	// (0x0006cc76) cell_dia3_key0_fun_pane_ParamLimits

0xd4f1,	// (0x0006cc76) cell_dia3_key0_fun_pane

0xd4fe,	// (0x0006cc83) cell_dia3_key1_fun_pane_ParamLimits

0xd4fe,	// (0x0006cc83) cell_dia3_key1_fun_pane

0xd50b,	// (0x0006cc90) dia3_listrow_pane

0x23c5,	// (0x00061b4a) bg_dia3_numentry_pane_g1

0x03ce,	// (0x0005fb53) bg_button_pane_cp21

0x340f,	// (0x00062b94) cell_dia3_key_num_pane_t1

0x341d,	// (0x00062ba2) cell_dia3_key_num_pane_t2

0x342c,	// (0x00062bb1) cell_dia3_key_num_pane_t3

0x343b,	// (0x00062bc0) cell_dia3_key_num_pane_t4

0x0003,

0xfe0f,	// (0x0006f594) cell_dia3_key_num_pane_t

0x03ce,	// (0x0005fb53) bg_button_pane_cp19

0xd518,	// (0x0006cc9d) cell_dia3_key0_fun_pane_g1

0x03ce,	// (0x0005fb53) bg_button_pane_cp20

0xd520,	// (0x0006cca5) cell_dia3_key1_fun_pane_g1

0xd528,	// (0x0006ccad) area_left_week_number_pane

0xd53b,	// (0x0006ccc0) area_top_day_name_pane

0xd549,	// (0x0006ccce) frame_month_view_pane

0x344a,	// (0x00062bcf) grid_month_view_pane

0xd55e,	// (0x0006cce3) cell_top_day_name_pane_ParamLimits

0xd55e,	// (0x0006cce3) cell_top_day_name_pane

0xd578,	// (0x0006ccfd) cell_area_left_week_number_pane_ParamLimits

0xd578,	// (0x0006ccfd) cell_area_left_week_number_pane

0xd59b,	// (0x0006cd20) cell_month_view_pane_ParamLimits

0xd59b,	// (0x0006cd20) cell_month_view_pane

0x3458,	// (0x00062bdd) frm_month_g1

0xd5c7,	// (0x0006cd4c) frm_month_g2

0xd5d8,	// (0x0006cd5d) frm_month_g3

0xd5e9,	// (0x0006cd6e) frm_month_g4

0xd5fa,	// (0x0006cd7f) frm_month_g5

0xd60d,	// (0x0006cd92) frm_month_g6

0xd620,	// (0x0006cda5) frm_month_g7

0x3465,	// (0x00062bea) frm_month_g8

0xd633,	// (0x0006cdb8) frm_month_g9

0xd640,	// (0x0006cdc5) frm_month_g10

0xd64d,	// (0x0006cdd2) frm_month_g11

0xd65a,	// (0x0006cddf) frm_month_g12

0xd667,	// (0x0006cdec) frm_month_g13

0xd674,	// (0x0006cdf9) frm_month_g14

0xd683,	// (0x0006ce08) frm_month_g15

0xd692,	// (0x0006ce17) frm_month_g16

0x000f,

0xfe18,	// (0x0006f59d) frm_month_g

0x3472,	// (0x00062bf7) cell_top_day_name_pane_t1

0xd6a1,	// (0x0006ce26) cell_area_left_week_number_pane_g1

0xd6b0,	// (0x0006ce35) cell_area_left_week_number_pane_t1

0x5569,	// (0x00064cee) cell_month_view_pane_g1

0xd6c6,	// (0x0006ce4b) cell_month_view_pane_t1

0x03ce,	// (0x0005fb53) main_fps_pane

0x2940,	// (0x000620c5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2940,	// (0x000620c5) cmail_ddmenu_btn02_pane_cp1

0x295c,	// (0x000620e1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x295c,	// (0x000620e1) cmail_ddmenu_btn02_pane_cp2

0xcf2e,	// (0x0006c6b3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcf2e,	// (0x0006c6b3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd36,	// (0x0006f4bb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd36,	// (0x0006f4bb) cmail_ddmenu_btn02_pane_g

0xcf4c,	// (0x0006c6d1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcf4c,	// (0x0006c6d1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd3b,	// (0x0006f4c0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd3b,	// (0x0006f4c0) cmail_ddmenu_btn02_pane_t

0xd6dc,	// (0x0006ce61) fps_text_pane_ParamLimits

0xd6dc,	// (0x0006ce61) fps_text_pane

0xd6e9,	// (0x0006ce6e) main_fps_pane_g1_ParamLimits

0xd6e9,	// (0x0006ce6e) main_fps_pane_g1

0xd6f7,	// (0x0006ce7c) wait_bar_pane_cp010_ParamLimits

0xd6f7,	// (0x0006ce7c) wait_bar_pane_cp010

0xd703,	// (0x0006ce88) fps_text_pane_t1_ParamLimits

0xd703,	// (0x0006ce88) fps_text_pane_t1

0xabf4,	// (0x0006a379) cam4_image_uncrop_pane_g1

0xabfd,	// (0x0006a382) cam4_image_uncrop_pane_g2

0xac06,	// (0x0006a38b) cam4_image_uncrop_pane_g3

0xac0f,	// (0x0006a394) cam4_image_uncrop_pane_g4

0x0003,

0xf87a,	// (0x0006efff) cam4_image_uncrop_pane_g

0xd50b,	// (0x0006cc90) dia3_listrow_pane_ParamLimits

0x03ce,	// (0x0005fb53) main_phob2_pane

0xcb40,	// (0x0006c2c5) cell_tport_appsw_pane_cp02_ParamLimits

0xcb40,	// (0x0006c2c5) cell_tport_appsw_pane_cp02

0xcb4f,	// (0x0006c2d4) cell_tport_appsw_pane_cp03_ParamLimits

0xcb4f,	// (0x0006c2d4) cell_tport_appsw_pane_cp03

0x03ce,	// (0x0005fb53) phob2_contact_card_pane

0x03ce,	// (0x0005fb53) phob2_listscroll_pane

0x3485,	// (0x00062c0a) phob2_list_pane

0x348d,	// (0x00062c12) scroll_pane_cp034

0xd71c,	// (0x0006cea1) phob2_cc_data_pane_ParamLimits

0xd71c,	// (0x0006cea1) phob2_cc_data_pane

0xd736,	// (0x0006cebb) phob2_cc_listscroll_pane_ParamLimits

0xd736,	// (0x0006cebb) phob2_cc_listscroll_pane

0xd34d,	// (0x0006cad2) list_double_large_graphic_phob2_pane_ParamLimits

0xd34d,	// (0x0006cad2) list_double_large_graphic_phob2_pane

0xd750,	// (0x0006ced5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd750,	// (0x0006ced5) list_double_large_graphic_phob2_pane_g1

0xd75d,	// (0x0006cee2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd75d,	// (0x0006cee2) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe39,	// (0x0006f5be) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe39,	// (0x0006f5be) list_double_large_graphic_phob2_pane_g

0x5117,	// (0x0006489c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x5117,	// (0x0006489c) list_double_large_graphic_phob2_pane_t1

0x512c,	// (0x000648b1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x512c,	// (0x000648b1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe42,	// (0x0006f5c7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe42,	// (0x0006f5c7) list_double_large_graphic_phob2_pane_t

0x03ce,	// (0x0005fb53) list_highlight_pane_cp024

0x3495,	// (0x00062c1a) phob2_cc_button_pane

0xd777,	// (0x0006cefc) phob2_cc_data_pane_g1_ParamLimits

0xd777,	// (0x0006cefc) phob2_cc_data_pane_g1

0xd786,	// (0x0006cf0b) phob2_cc_data_pane_g2_ParamLimits

0xd786,	// (0x0006cf0b) phob2_cc_data_pane_g2

0x0001,

0xfe47,	// (0x0006f5cc) phob2_cc_data_pane_g_ParamLimits

0xfe47,	// (0x0006f5cc) phob2_cc_data_pane_g

0xd795,	// (0x0006cf1a) phob2_cc_data_pane_t1_ParamLimits

0xd795,	// (0x0006cf1a) phob2_cc_data_pane_t1

0xd7aa,	// (0x0006cf2f) phob2_cc_data_pane_t2_ParamLimits

0xd7aa,	// (0x0006cf2f) phob2_cc_data_pane_t2

0xd7bf,	// (0x0006cf44) phob2_cc_data_pane_t3_ParamLimits

0xd7bf,	// (0x0006cf44) phob2_cc_data_pane_t3

0x0002,

0xfe4c,	// (0x0006f5d1) phob2_cc_data_pane_t_ParamLimits

0xfe4c,	// (0x0006f5d1) phob2_cc_data_pane_t

0xd7d4,	// (0x0006cf59) phob2_cc_list_pane_ParamLimits

0xd7d4,	// (0x0006cf59) phob2_cc_list_pane

0x1b12,	// (0x00061297) scroll_pane_cp035_ParamLimits

0x1b12,	// (0x00061297) scroll_pane_cp035

0x0aed,	// (0x00060272) bg_button_pane_cp033

0xd7e0,	// (0x0006cf65) phob2_cc_button_pane_g1

0xd7ec,	// (0x0006cf71) phob2_cc_button_pane_t1

0xd801,	// (0x0006cf86) phob2_cc_button_pane_t2

0x0001,

0xfe53,	// (0x0006f5d8) phob2_cc_button_pane_t

0xd813,	// (0x0006cf98) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd813,	// (0x0006cf98) list_double_large_graphic_phob2_cc_pane

0xd881,	// (0x0006d006) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd881,	// (0x0006d006) list_double_large_graphic_phob2_cc_pane_g1

0xd892,	// (0x0006d017) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd892,	// (0x0006d017) list_double_large_graphic_phob2_cc_pane_g2

0x5141,	// (0x000648c6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5141,	// (0x000648c6) list_double_large_graphic_phob2_cc_pane_g3

0x514d,	// (0x000648d2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x514d,	// (0x000648d2) list_double_large_graphic_phob2_cc_pane_g4

0x5159,	// (0x000648de) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5159,	// (0x000648de) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe58,	// (0x0006f5dd) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe58,	// (0x0006f5dd) list_double_large_graphic_phob2_cc_pane_g

0x5165,	// (0x000648ea) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5165,	// (0x000648ea) list_double_large_graphic_phob2_cc_pane_t1

0x518e,	// (0x00064913) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x518e,	// (0x00064913) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe63,	// (0x0006f5e8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe63,	// (0x0006f5e8) list_double_large_graphic_phob2_cc_pane_t

0xd89e,	// (0x0006d023) list_highlight_pane_cp025_ParamLimits

0xd89e,	// (0x0006d023) list_highlight_pane_cp025

0x0aed,	// (0x00060272) bg_button_pane_cp033_ParamLimits

0xd7e0,	// (0x0006cf65) phob2_cc_button_pane_g1_ParamLimits

0xd7ec,	// (0x0006cf71) phob2_cc_button_pane_t1_ParamLimits

0xd801,	// (0x0006cf86) phob2_cc_button_pane_t2_ParamLimits

0xfe53,	// (0x0006f5d8) phob2_cc_button_pane_t_ParamLimits

0x54a9,	// (0x00064c2e) popup_wgtman_window

0x191d,	// (0x000610a2) scroll_pane_cp038

0xd2d6,	// (0x0006ca5b) wgtman_btn_pane_cp_01_ParamLimits

0xd2d6,	// (0x0006ca5b) wgtman_btn_pane_cp_01

0xd8ac,	// (0x0006d031) wgtman_content_pane

0xd8b5,	// (0x0006d03a) wgtman_heading_pane

0x03ce,	// (0x0005fb53) bg_heading_pane_cp02

0xd8be,	// (0x0006d043) wgtman_heading_pane_g1

0xd8c6,	// (0x0006d04b) wgtman_heading_pane_t1

0xd8d4,	// (0x0006d059) scroll_pane_cp036

0xd8dc,	// (0x0006d061) wgtman_list_pane

0xd8e4,	// (0x0006d069) wgtman_list_pane_t1_ParamLimits

0xd8e4,	// (0x0006d069) wgtman_list_pane_t1

0xab53,	// (0x0006a2d8) cam4_grid_pane

0x47d3,	// (0x00063f58) bg_button_pane_cp015_ParamLimits

0xb7e7,	// (0x0006af6c) bg_button_pane_cp016_ParamLimits

0xb7fa,	// (0x0006af7f) bg_button_pane_cp017_ParamLimits

0x4817,	// (0x00063f9c) popup_vitu2_query_window_g3_ParamLimits

0x4817,	// (0x00063f9c) popup_vitu2_query_window_g3

0x4890,	// (0x00064015) popup_vitu2_query_window_t6_ParamLimits

0x4890,	// (0x00064015) popup_vitu2_query_window_t6

0x48bb,	// (0x00064040) popup_vitu2_query_window_t7_ParamLimits

0x48bb,	// (0x00064040) popup_vitu2_query_window_t7

0xd8fe,	// (0x0006d083) cam4_grid_pane_g1

0xd907,	// (0x0006d08c) cam4_grid_pane_g2

0xd910,	// (0x0006d095) cam4_grid_pane_g3

0xd919,	// (0x0006d09e) cam4_grid_pane_g4

0x0003,

0xfe68,	// (0x0006f5ed) cam4_grid_pane_g

0x62a0,	// (0x00065a25) aid_placing_vt_slider_lsc_ParamLimits

0x663c,	// (0x00065dc1) vidtel_button_pane_ParamLimits

0x663c,	// (0x00065dc1) vidtel_button_pane

0x03ce,	// (0x0005fb53) bg_button_pane_cp034

0xd924,	// (0x0006d0a9) vidtel_button_pane_g1

0xd92c,	// (0x0006d0b1) vidtel_button_pane_t1

0x1a59,	// (0x000611de) aid_size_vtel_slider_touch

0x1b12,	// (0x00061297) scroll_pane_cp039

0xc4b2,	// (0x0006bc37) ncim_query_button_pane_cp01_ParamLimits

0xc4d1,	// (0x0006bc56) ncimui_query_pane_g1_ParamLimits

0x0aed,	// (0x00060272) input_focus_pane_cp012_ParamLimits

0x2403,	// (0x00061b88) ncim_query_entry_pane_t1_ParamLimits

0x1b12,	// (0x00061297) scroll_pane_cp039_ParamLimits

0x8005,	// (0x0006778a) navi_pane_bcale_mc_g1

0x800d,	// (0x00067792) navi_pane_bcale_mc_t1

0x2990,	// (0x00062115) main_sp_fs_email_pane_g1

0x299c,	// (0x00062121) main_sp_fs_email_pane_g2

0x0001,

0xfc6b,	// (0x0006f3f0) main_sp_fs_email_pane_g

0x2e17,	// (0x0006259c) list_single_cale_mrui_row_pane_g3_ParamLimits

0x2e17,	// (0x0006259c) list_single_cale_mrui_row_pane_g3

0x5016,	// (0x0006479b) list_single_recal_day_pane_g5_event_pane

0x502c,	// (0x000647b1) list_single_recal_day_pane_g7

0xd942,	// (0x0006d0c7) list_recal_day_event_pane_cp01

0xd94b,	// (0x0006d0d0) list_recal_vselct_arw_lo_pane_cp01

0xd953,	// (0x0006d0d8) list_recal_vselct_arw_up_pane_cp01

0xd95b,	// (0x0006d0e0) list_recal_vselct_pane_cp01

0x1a7b,	// (0x00061200) list_recal_day_event_pane_cp01_g1

0x51b7,	// (0x0006493c) list_recal_day_event_pane_cp01_t1

0x5034,	// (0x000647b9) list_single_recal_day_pane_t1_ParamLimits

0x5046,	// (0x000647cb) list_single_recal_day_pane_t2_ParamLimits

0xfd4b,	// (0x0006f4d0) list_single_recal_day_pane_t_ParamLimits

0x0acb,	// (0x00060250) bg_notes_pane_ParamLimits

0x56fb,	// (0x00064e80) list_notes_pane_ParamLimits

0x5709,	// (0x00064e8e) scroll_pane_cp06_ParamLimits

0x5746,	// (0x00064ecb) main_notes_pane_ParamLimits

0x0aed,	// (0x00060272) main_welc_pane

0xd97c,	// (0x0006d101) main_welc_body_pane_ParamLimits

0xd97c,	// (0x0006d101) main_welc_body_pane

0xd996,	// (0x0006d11b) main_welc_opti_pane_ParamLimits

0xd996,	// (0x0006d11b) main_welc_opti_pane

0xd9f1,	// (0x0006d176) main_welc_pane_t1_ParamLimits

0xd9f1,	// (0x0006d176) main_welc_pane_t1

0xdb07,	// (0x0006d28c) main_welc_body_row_pane_ParamLimits

0xdb07,	// (0x0006d28c) main_welc_body_row_pane

0x0b46,	// (0x000602cb) main_welc_opti_row_pane_ParamLimits

0x0b46,	// (0x000602cb) main_welc_opti_row_pane

0xdb2c,	// (0x0006d2b1) main_welc_opti_row_pane_g1

0xdb34,	// (0x0006d2b9) main_welc_opti_row_pane_t1

0xdb43,	// (0x0006d2c8) main_welc_body_row_pane_t1

0x3276,	// (0x000629fb) popup_notif_wgt_heading_pane

0x3290,	// (0x00062a15) aid_size_list_notif_wgt_del_ParamLimits

0x329d,	// (0x00062a22) list_notif_wgt_row_pane_g1_ParamLimits

0x32a9,	// (0x00062a2e) list_notif_wgt_row_pane_g2_ParamLimits

0x32b8,	// (0x00062a3d) list_notif_wgt_row_pane_g3_ParamLimits

0xfdb2,	// (0x0006f537) list_notif_wgt_row_pane_g_ParamLimits

0x32c5,	// (0x00062a4a) list_notif_wgt_row_pane_t1_ParamLimits

0x32db,	// (0x00062a60) list_notif_wgt_row_pane_t2_ParamLimits

0x32ed,	// (0x00062a72) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb9,	// (0x0006f53e) list_notif_wgt_row_pane_t_ParamLimits

0xd368,	// (0x0006caed) listrow_wgtman_pane_g1_ParamLimits

0xd375,	// (0x0006cafa) listrow_wgtman_pane_g2_ParamLimits

0xfde9,	// (0x0006f56e) listrow_wgtman_pane_g_ParamLimits

0x50bb,	// (0x00064840) listrow_wgtman_pane_t1_ParamLimits

0x50d3,	// (0x00064858) listrow_wgtman_pane_t2_ParamLimits

0xfdee,	// (0x0006f573) listrow_wgtman_pane_t_ParamLimits

0x50f9,	// (0x0006487e) wait_bar_pane_cp09_ParamLimits

0x03ce,	// (0x0005fb53) bg_popup_heading_pane_cp02

0xdb52,	// (0x0006d2d7) popup_notif_wgt_heading_pane_g1

0xdb5a,	// (0x0006d2df) popup_notif_wgt_heading_pane_t1

0x03ce,	// (0x0005fb53) main_vids_pane

0x03ce,	// (0x0005fb53) vids_listscroll_pane

0xdb68,	// (0x0006d2ed) scroll_pane_cp040

0x03ce,	// (0x0005fb53) vids_list_pane

0xdb73,	// (0x0006d2f8) vids_list_double_pane_ParamLimits

0xdb73,	// (0x0006d2f8) vids_list_double_pane

0xdb8a,	// (0x0006d30f) vids_list_double_pane_g1

0xdb93,	// (0x0006d318) vids_list_double_pane_t1

0xdba3,	// (0x0006d328) vids_list_double_pane_t2

0x0001,

0xfe87,	// (0x0006f60c) vids_list_double_pane_t

0x0aed,	// (0x00060272) main_ncimui_pane_ParamLimits

0xc309,	// (0x0006ba8e) main_ncimui_pane_g1_ParamLimits

0xc315,	// (0x0006ba9a) main_ncimui_pane_g2_ParamLimits

0xc315,	// (0x0006ba9a) main_ncimui_pane_g2

0x0001,

0xfb6c,	// (0x0006f2f1) main_ncimui_pane_g_ParamLimits

0xfb6c,	// (0x0006f2f1) main_ncimui_pane_g

0xd9af,	// (0x0006d134) main_welc_pane_g1_ParamLimits

0xd9af,	// (0x0006d134) main_welc_pane_g1

0xd9bb,	// (0x0006d140) main_welc_pane_g2_ParamLimits

0xd9bb,	// (0x0006d140) main_welc_pane_g2

0x0003,

0xfe71,	// (0x0006f5f6) main_welc_pane_g_ParamLimits

0xfe71,	// (0x0006f5f6) main_welc_pane_g

0x0acb,	// (0x00060250) listscroll_mce_pane_ParamLimits

0x8186,	// (0x0006790b) wait_bar_pane_cp10

0xea82,	// (0x0006e207) main_cale_day_pane_ParamLimits

0xea82,	// (0x0006e207) main_cale_week_pane_ParamLimits

0x0acb,	// (0x00060250) main_messa_pane_ParamLimits

0x9fa8,	// (0x0006972d) main_clock2_btn_pane_ParamLimits

0x9fa8,	// (0x0006972d) main_clock2_btn_pane

0x1038,	// (0x000607bd) main_clock2_btn_pane_cp01_ParamLimits

0x1038,	// (0x000607bd) main_clock2_btn_pane_cp01

0x2da3,	// (0x00062528) list_cale_mrui_pane_ParamLimits

0x3331,	// (0x00062ab6) main_cf0_pane_g2

0x0001,

0xfdc0,	// (0x0006f545) main_cf0_pane_g

0xd528,	// (0x0006ccad) area_left_week_number_pane_ParamLimits

0xd53b,	// (0x0006ccc0) area_top_day_name_pane_ParamLimits

0xd549,	// (0x0006ccce) frame_month_view_pane_ParamLimits

0x344a,	// (0x00062bcf) grid_month_view_pane_ParamLimits

0x3458,	// (0x00062bdd) frm_month_g1_ParamLimits

0xd5c7,	// (0x0006cd4c) frm_month_g2_ParamLimits

0xd5d8,	// (0x0006cd5d) frm_month_g3_ParamLimits

0xd5e9,	// (0x0006cd6e) frm_month_g4_ParamLimits

0xd5fa,	// (0x0006cd7f) frm_month_g5_ParamLimits

0xd60d,	// (0x0006cd92) frm_month_g6_ParamLimits

0xd620,	// (0x0006cda5) frm_month_g7_ParamLimits

0x3465,	// (0x00062bea) frm_month_g8_ParamLimits

0xd633,	// (0x0006cdb8) frm_month_g9_ParamLimits

0xd640,	// (0x0006cdc5) frm_month_g10_ParamLimits

0xd64d,	// (0x0006cdd2) frm_month_g11_ParamLimits

0xd65a,	// (0x0006cddf) frm_month_g12_ParamLimits

0xd667,	// (0x0006cdec) frm_month_g13_ParamLimits

0xd674,	// (0x0006cdf9) frm_month_g14_ParamLimits

0xd683,	// (0x0006ce08) frm_month_g15_ParamLimits

0xd692,	// (0x0006ce17) frm_month_g16_ParamLimits

0xfe18,	// (0x0006f59d) frm_month_g_ParamLimits

0x3472,	// (0x00062bf7) cell_top_day_name_pane_t1_ParamLimits

0xd6a1,	// (0x0006ce26) cell_area_left_week_number_pane_g1_ParamLimits

0xd6b0,	// (0x0006ce35) cell_area_left_week_number_pane_t1_ParamLimits

0x5569,	// (0x00064cee) cell_month_view_pane_g1_ParamLimits

0xd6c6,	// (0x0006ce4b) cell_month_view_pane_t1_ParamLimits

0x0ac3,	// (0x00060248) main_clock2_btn_pane_g1

0xdbb1,	// (0x0006d336) main_clock2_btn_pane_t1

0x0aed,	// (0x00060272) listscroll_cmail_pane_ParamLimits

0x2990,	// (0x00062115) main_sp_fs_email_pane_g1_ParamLimits

0x299c,	// (0x00062121) main_sp_fs_email_pane_g2_ParamLimits

0xfc6b,	// (0x0006f3f0) main_sp_fs_email_pane_g_ParamLimits

0x2f67,	// (0x000626ec) list_recal_day_pane_ParamLimits

0x2f78,	// (0x000626fd) mian_recal_day_pane_t1

0x4c1d,	// (0x000643a2) list_single_dyc_row_text_pane_t4_ParamLimits

0x4c1d,	// (0x000643a2) list_single_dyc_row_text_pane_t4

0x4c54,	// (0x000643d9) list_single_dyc_row_text_pane_t5_ParamLimits

0x4c54,	// (0x000643d9) list_single_dyc_row_text_pane_t5

0x4cca,	// (0x0006444f) list_single_dyc_row_text_pane_t6_ParamLimits

0x4cca,	// (0x0006444f) list_single_dyc_row_text_pane_t6

0x7783,	// (0x00066f08) aid_mgn_list_cale_time_pane

0x0aed,	// (0x00060272) main_gallery2_pane_ParamLimits

0x104e,	// (0x000607d3) main_clock2_pane_cp01_t1

0x105e,	// (0x000607e3) main_clock2_pane_cp01_t3

0x0001,

0xf751,	// (0x0006eed6) main_clock2_pane_cp01_t

0x5c95,	// (0x0006541a) cale_week_scroll_pane_g16_ParamLimits

0x5c95,	// (0x0006541a) cale_week_scroll_pane_g16

0x5fce,	// (0x00065753) vorec_slider_pane

0xd92c,	// (0x0006d0b1) vidtel_button_pane_t1_ParamLimits

0xcfaf,	// (0x0006c734) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcfaf,	// (0x0006c734) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcfbc,	// (0x0006c741) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcfbc,	// (0x0006c741) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd6e,	// (0x0006f4f3) main_fs_bigclock_clock_pane_g_ParamLimits

0xcfc8,	// (0x0006c74d) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcfdb,	// (0x0006c760) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd77,	// (0x0006f4fc) main_fs_bigclock_clock_pane_t_ParamLimits

0x9945,	// (0x000690ca) main_mup3_lyrics_pane_ParamLimits

0x9945,	// (0x000690ca) main_mup3_lyrics_pane

0xdbe5,	// (0x0006d36a) main_mup3_lyrics_pane_t1_ParamLimits

0xdbe5,	// (0x0006d36a) main_mup3_lyrics_pane_t1

0xa4d4,	// (0x00069c59) aid_main_mp4_pane_t1_area

0xa4de,	// (0x00069c63) aid_main_mp4_pane_t2_area

0xa5dd,	// (0x00069d62) main_mp4_pane_g7_ParamLimits

0xa5dd,	// (0x00069d62) main_mp4_pane_g7

0xa5e9,	// (0x00069d6e) main_mp4_pane_g8_ParamLimits

0xa5e9,	// (0x00069d6e) main_mp4_pane_g8

0xa9fb,	// (0x0006a180) aid_call6_pane_g1_size

0xd855,	// (0x0006cfda) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd855,	// (0x0006cfda) list_double_large_graphic_phob2_other_pane

0x773b,	// (0x00066ec0) list_double_large_graphic_phob2_other_pane_g1

0x03ce,	// (0x0005fb53) list_highlight_pane_cp026

0x0aed,	// (0x00060272) main_welc_pane_ParamLimits

0xca47,	// (0x0006c1cc) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xca47,	// (0x0006c1cc) main_sp_fs_ctrlbar_pane_g3

0xca5f,	// (0x0006c1e4) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xca5f,	// (0x0006c1e4) main_sp_fs_ctrlbar_pane_g4

0xca91,	// (0x0006c216) toolbar2_fixed_button_pane_cp01

0xca9c,	// (0x0006c221) toolbar2_fixed_button_pane_cp02

0xcaa7,	// (0x0006c22c) toolbar2_fixed_button_pane_cp03

0xd965,	// (0x0006d0ea) list_welc_entry_pane_ParamLimits

0xd965,	// (0x0006d0ea) list_welc_entry_pane

0xd9c9,	// (0x0006d14e) main_welc_pane_g3_ParamLimits

0xd9c9,	// (0x0006d14e) main_welc_pane_g3

0xda0b,	// (0x0006d190) main_welc_pane_t2_ParamLimits

0xda0b,	// (0x0006d190) main_welc_pane_t2

0xda1f,	// (0x0006d1a4) main_welc_pane_t3_ParamLimits

0xda1f,	// (0x0006d1a4) main_welc_pane_t3

0x0005,

0xfe7a,	// (0x0006f5ff) main_welc_pane_t_ParamLimits

0xfe7a,	// (0x0006f5ff) main_welc_pane_t

0xdaa9,	// (0x0006d22e) welc_button_pane_ParamLimits

0xdaa9,	// (0x0006d22e) welc_button_pane

0xdaf9,	// (0x0006d27e) welc_service_logo_pane_ParamLimits

0xdaf9,	// (0x0006d27e) welc_service_logo_pane

0xdc17,	// (0x0006d39c) list_single_welc_entry_pane_ParamLimits

0xdc17,	// (0x0006d39c) list_single_welc_entry_pane

0xdc28,	// (0x0006d3ad) list_single_welc_entry_pane_g1

0xdc30,	// (0x0006d3b5) list_single_welc_entry_pane_t1

0xdc3e,	// (0x0006d3c3) list_single_welc_entry_pane_t2

0x0001,

0xfe8c,	// (0x0006f611) list_single_welc_entry_pane_t

0x03ce,	// (0x0005fb53) bg_button_pane_cp035

0xdc4c,	// (0x0006d3d1) welc_button_pane_t1

0xdc5a,	// (0x0006d3df) welc_service_logo_pane_g1

0xdc63,	// (0x0006d3e8) welc_service_logo_pane_g2

0x0001,

0xfe91,	// (0x0006f616) welc_service_logo_pane_g

0x03ce,	// (0x0005fb53) main_int_radio_pane

0xeef7,	// (0x0006e67c) list_single_fs_dyc_pane_g1

0x510b,	// (0x00064890) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x510b,	// (0x00064890) list_double_large_graphic_phob2_pane_g3

0xd769,	// (0x0006ceee) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd769,	// (0x0006ceee) list_double_large_graphic_phob2_pane_g4

0xdc6c,	// (0x0006d3f1) main_int_radio1_pane_ParamLimits

0xdc6c,	// (0x0006d3f1) main_int_radio1_pane

0xdc7e,	// (0x0006d403) find_pane_cp02

0xdc87,	// (0x0006d40c) input_focus_pane_cp12_ParamLimits

0xdc87,	// (0x0006d40c) input_focus_pane_cp12

0xdc93,	// (0x0006d418) input_focus_pane_cp13_ParamLimits

0xdc93,	// (0x0006d418) input_focus_pane_cp13

0xdcab,	// (0x0006d430) input_focus_pane_cp14_ParamLimits

0xdcab,	// (0x0006d430) input_focus_pane_cp14

0xdcc3,	// (0x0006d448) int_radio1_listscroll_pane

0xdccd,	// (0x0006d452) main_int_radio1_pane_g1_ParamLimits

0xdccd,	// (0x0006d452) main_int_radio1_pane_g1

0xdcdd,	// (0x0006d462) main_int_radio1_pane_t1_ParamLimits

0xdcdd,	// (0x0006d462) main_int_radio1_pane_t1

0xdcf1,	// (0x0006d476) main_int_radio1_pane_t2_ParamLimits

0xdcf1,	// (0x0006d476) main_int_radio1_pane_t2

0xdd05,	// (0x0006d48a) main_int_radio1_pane_t3_ParamLimits

0xdd05,	// (0x0006d48a) main_int_radio1_pane_t3

0xdd19,	// (0x0006d49e) main_int_radio1_pane_t4_ParamLimits

0xdd19,	// (0x0006d49e) main_int_radio1_pane_t4

0xdd30,	// (0x0006d4b5) main_int_radio1_pane_t5_ParamLimits

0xdd30,	// (0x0006d4b5) main_int_radio1_pane_t5

0xdd42,	// (0x0006d4c7) main_int_radio1_pane_t6_ParamLimits

0xdd42,	// (0x0006d4c7) main_int_radio1_pane_t6

0xdd54,	// (0x0006d4d9) main_int_radio1_pane_t7_ParamLimits

0xdd54,	// (0x0006d4d9) main_int_radio1_pane_t7

0xdd66,	// (0x0006d4eb) main_int_radio1_pane_t8_ParamLimits

0xdd66,	// (0x0006d4eb) main_int_radio1_pane_t8

0xdd7a,	// (0x0006d4ff) main_int_radio1_pane_t9_ParamLimits

0xdd7a,	// (0x0006d4ff) main_int_radio1_pane_t9

0xdd8c,	// (0x0006d511) main_int_radio1_pane_t10_ParamLimits

0xdd8c,	// (0x0006d511) main_int_radio1_pane_t10

0xddbd,	// (0x0006d542) main_int_radio1_pane_t11_ParamLimits

0xddbd,	// (0x0006d542) main_int_radio1_pane_t11

0xddee,	// (0x0006d573) main_int_radio1_pane_t12_ParamLimits

0xddee,	// (0x0006d573) main_int_radio1_pane_t12

0x000b,

0xfe96,	// (0x0006f61b) main_int_radio1_pane_t_ParamLimits

0xfe96,	// (0x0006f61b) main_int_radio1_pane_t

0xde05,	// (0x0006d58a) int_radio_list_pane

0x348d,	// (0x00062c12) scroll_pane_cp037

0xde0d,	// (0x0006d592) list_double_large_graphic_int_radio_pane_ParamLimits

0xde0d,	// (0x0006d592) list_double_large_graphic_int_radio_pane

0xde25,	// (0x0006d5aa) list_double_large_graphic_int_radio_pane_g1

0x51c5,	// (0x0006494a) list_double_large_graphic_int_radio_pane_t1

0x51d3,	// (0x00064958) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaf,	// (0x0006f634) list_double_large_graphic_int_radio_pane_t

0x03ce,	// (0x0005fb53) list_highlight_pane_cp027

0xd974,	// (0x0006d0f9) main_button_pane_4

0xd9d5,	// (0x0006d15a) main_welc_pane_g4_ParamLimits

0xd9d5,	// (0x0006d15a) main_welc_pane_g4

0xda31,	// (0x0006d1b6) main_welc_pane_t4_ParamLimits

0xda31,	// (0x0006d1b6) main_welc_pane_t4

0xda43,	// (0x0006d1c8) main_welc_pane_t5_ParamLimits

0xda43,	// (0x0006d1c8) main_welc_pane_t5

0xda75,	// (0x0006d1fa) main_welc_pane_t6_ParamLimits

0xda75,	// (0x0006d1fa) main_welc_pane_t6

0xdab7,	// (0x0006d23c) welc_button_pane_2_ParamLimits

0xdab7,	// (0x0006d23c) welc_button_pane_2

0xdacf,	// (0x0006d254) welc_button_pane_3_ParamLimits

0xdacf,	// (0x0006d254) welc_button_pane_3

0xd974,	// (0x0006d0f9) welc_button_pane_4

0xdae9,	// (0x0006d26e) welc_button_pane_5_ParamLimits

0xdae9,	// (0x0006d26e) welc_button_pane_5

0x931d,	// (0x00068aa2) main_popup_welc_pane

0xde2e,	// (0x0006d5b3) main_welc_sk_g3

0xde38,	// (0x0006d5bd) main_welc_sk_g4

0xde42,	// (0x0006d5c7) main_welc_sk_t3

0xde52,	// (0x0006d5d7) main_welc_sk_t4

0xde62,	// (0x0006d5e7) popup_welc_pane_t4

0xde70,	// (0x0006d5f5) popup_welc_pane_t5

0xde7e,	// (0x0006d603) popup_welc_pane_t6
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
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large

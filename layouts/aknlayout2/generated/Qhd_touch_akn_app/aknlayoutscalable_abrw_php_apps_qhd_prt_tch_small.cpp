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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005bcd5 };

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
0x0ed6,	// (0x0005cbab) Screen

0x0ee2,	// (0x0005cbb7) application_window

0x0f3e,	// (0x0005cc13) area_bottom_pane_ParamLimits

0x0f3e,	// (0x0005cc13) area_bottom_pane

0x0f97,	// (0x0005cc6c) area_top_pane_ParamLimits

0x0f97,	// (0x0005cc6c) area_top_pane

0x0ffb,	// (0x0005ccd0) call_video_uplink_pane_ParamLimits

0x0ffb,	// (0x0005ccd0) call_video_uplink_pane

0x103a,	// (0x0005cd0f) main_pane_ParamLimits

0x103a,	// (0x0005cd0f) main_pane

0xc876,	// (0x0006854b) context_pane

0x4621,	// (0x000602f6) navi_pane

0x4647,	// (0x0006031c) popup_cale_events_window_ParamLimits

0x4647,	// (0x0006031c) popup_cale_events_window

0xc889,	// (0x0006855e) popup_mup_playback_window

0x465f,	// (0x00060334) signal_pane

0xa831,	// (0x00066506) main_browser_pane

0xa9f6,	// (0x000666cb) main_burst_pane

0x449f,	// (0x00060174) main_calc_pane

0xc85c,	// (0x00068531) main_cale_day_pane

0x179d,	// (0x0005d472) main_cale_month_pane

0xc85c,	// (0x00068531) main_cale_week_pane

0xa9f6,	// (0x000666cb) main_call_pane

0xa511,	// (0x000661e6) main_call_poc_pane

0xa9f6,	// (0x000666cb) main_camera_pane

0xa9f6,	// (0x000666cb) main_chi_dic_pane

0xb1e7,	// (0x00066ebc) main_clock_pane

0xa511,	// (0x000661e6) main_fmradio_pane

0xa9f6,	// (0x000666cb) main_graph_messa_pane

0xa511,	// (0x000661e6) main_help_pane

0xa831,	// (0x00066506) main_im_pane

0xa76c,	// (0x00066441) main_image_pane_ParamLimits

0xa76c,	// (0x00066441) main_image_pane

0xa511,	// (0x000661e6) main_location2_pane

0xa9f6,	// (0x000666cb) main_location_pane

0xa76c,	// (0x00066441) main_messa_pane

0xa511,	// (0x000661e6) main_mp2_pane

0xa9f6,	// (0x000666cb) main_mp_pane

0xa511,	// (0x000661e6) main_msg_pane

0xa511,	// (0x000661e6) main_mup_eq_pane

0xa511,	// (0x000661e6) main_mup_pane

0xa831,	// (0x00066506) main_notes_pane

0xa511,	// (0x000661e6) main_pec_pane

0xa511,	// (0x000661e6) main_phob_pane

0xa511,	// (0x000661e6) main_pinb_pane

0xa511,	// (0x000661e6) main_postcard_pane

0xa511,	// (0x000661e6) main_qdial_pane

0xa9f6,	// (0x000666cb) main_skin_pane

0xa511,	// (0x000661e6) main_smil2_pane

0xa9f6,	// (0x000666cb) main_smil_pane

0xa9f6,	// (0x000666cb) main_video_pane

0xa9f6,	// (0x000666cb) main_video_tele_pane

0xa76c,	// (0x00066441) main_viewer_pane_ParamLimits

0xa76c,	// (0x00066441) main_viewer_pane

0xa9f6,	// (0x000666cb) main_vorec_pane

0x44eb,	// (0x000601c0) popup_blid_sat_info_window_ParamLimits

0x44eb,	// (0x000601c0) popup_blid_sat_info_window

0x450b,	// (0x000601e0) popup_dyc_status_message_window_ParamLimits

0x450b,	// (0x000601e0) popup_dyc_status_message_window

0x451b,	// (0x000601f0) popup_grid_large_graphic_window_ParamLimits

0x451b,	// (0x000601f0) popup_grid_large_graphic_window

0x45ac,	// (0x00060281) popup_loc_request_window_ParamLimits

0x45ac,	// (0x00060281) popup_loc_request_window

0x45f9,	// (0x000602ce) popup_wml_address_window_ParamLimits

0x45f9,	// (0x000602ce) popup_wml_address_window

0x4377,	// (0x0006004c) call_muted_g1

0x4039,	// (0x0005fd0e) popup_call_audio_conf_window_ParamLimits

0x4039,	// (0x0005fd0e) popup_call_audio_conf_window

0x4387,	// (0x0006005c) popup_call_audio_first_window_ParamLimits

0x4387,	// (0x0006005c) popup_call_audio_first_window

0x43c7,	// (0x0006009c) popup_call_audio_in_window_ParamLimits

0x43c7,	// (0x0006009c) popup_call_audio_in_window

0x43eb,	// (0x000600c0) popup_call_audio_out_window_ParamLimits

0x43eb,	// (0x000600c0) popup_call_audio_out_window

0x440d,	// (0x000600e2) popup_call_audio_second_window_ParamLimits

0x440d,	// (0x000600e2) popup_call_audio_second_window

0x443d,	// (0x00060112) popup_call_audio_wait_window_ParamLimits

0x443d,	// (0x00060112) popup_call_audio_wait_window

0x445e,	// (0x00060133) popup_number_entry_window_ParamLimits

0x445e,	// (0x00060133) popup_number_entry_window

0x9c14,	// (0x000658e9) bg_popup_call_pane_cp05_ParamLimits

0x9c14,	// (0x000658e9) bg_popup_call_pane_cp05

0x9c34,	// (0x00065909) popup_number_entry_window_t1

0x9c47,	// (0x0006591c) popup_number_entry_window_t2

0x9c59,	// (0x0006592e) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0006ad9f) popup_number_entry_window_t

0x9c6b,	// (0x00065940) text_title_cp2

0x9c7e,	// (0x00065953) bg_popup_call_pane_cp_ParamLimits

0x9c7e,	// (0x00065953) bg_popup_call_pane_cp

0x9c8c,	// (0x00065961) call_thumbnail_pane

0x9c94,	// (0x00065969) popup_call_audio_in_window_g1_ParamLimits

0x9c94,	// (0x00065969) popup_call_audio_in_window_g1

0x9ca0,	// (0x00065975) popup_call_audio_in_window_g2_ParamLimits

0x9ca0,	// (0x00065975) popup_call_audio_in_window_g2

0x9cac,	// (0x00065981) popup_call_audio_in_window_g3_ParamLimits

0x9cac,	// (0x00065981) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0006ada8) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0006ada8) popup_call_audio_in_window_g

0x9cb8,	// (0x0006598d) popup_call_audio_in_window_t1_ParamLimits

0x9cb8,	// (0x0006598d) popup_call_audio_in_window_t1

0x9cd4,	// (0x000659a9) popup_call_audio_in_window_t2_ParamLimits

0x9cd4,	// (0x000659a9) popup_call_audio_in_window_t2

0x9cf0,	// (0x000659c5) popup_call_audio_in_window_t3_ParamLimits

0x9cf0,	// (0x000659c5) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0006adaf) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0006adaf) popup_call_audio_in_window_t

0x9c7e,	// (0x00065953) bg_popup_call_pane_cp01_ParamLimits

0x9c7e,	// (0x00065953) bg_popup_call_pane_cp01

0x9c8c,	// (0x00065961) call_thumbnail_pane_cp02

0x9d03,	// (0x000659d8) call_type_pane_cp022

0x9d0b,	// (0x000659e0) popup_call_audio_out_window_g1_ParamLimits

0x9d0b,	// (0x000659e0) popup_call_audio_out_window_g1

0x9d1d,	// (0x000659f2) popup_call_audio_out_window_g2_ParamLimits

0x9d1d,	// (0x000659f2) popup_call_audio_out_window_g2

0x9d29,	// (0x000659fe) popup_call_audio_out_window_g3_ParamLimits

0x9d29,	// (0x000659fe) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0006adb6) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0006adb6) popup_call_audio_out_window_g

0x9d3b,	// (0x00065a10) popup_call_audio_out_window_t1_ParamLimits

0x9d3b,	// (0x00065a10) popup_call_audio_out_window_t1

0x9d53,	// (0x00065a28) popup_call_audio_out_window_t2_ParamLimits

0x9d53,	// (0x00065a28) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0006adbd) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0006adbd) popup_call_audio_out_window_t

0x9d68,	// (0x00065a3d) bg_popup_call_pane_ParamLimits

0x9d68,	// (0x00065a3d) bg_popup_call_pane

0x1253,	// (0x0005cf28) call_thumbnail_pane_cp_ParamLimits

0x1253,	// (0x0005cf28) call_thumbnail_pane_cp

0x9dec,	// (0x00065ac1) call_type_pane_cp01_ParamLimits

0x9dec,	// (0x00065ac1) call_type_pane_cp01

0x9e30,	// (0x00065b05) popup_call_audio_first_window_g1_ParamLimits

0x9e30,	// (0x00065b05) popup_call_audio_first_window_g1

0x9e7c,	// (0x00065b51) popup_call_audio_first_window_g2_ParamLimits

0x9e7c,	// (0x00065b51) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0006adc2) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0006adc2) popup_call_audio_first_window_g

0x9ec0,	// (0x00065b95) popup_call_audio_first_window_t1_ParamLimits

0x9ec0,	// (0x00065b95) popup_call_audio_first_window_t1

0xa456,	// (0x0006612b) popup_call_audio_first_window_t4_ParamLimits

0xa456,	// (0x0006612b) popup_call_audio_first_window_t4

0xa4e2,	// (0x000661b7) popup_call_audio_first_window_t5_ParamLimits

0xa4e2,	// (0x000661b7) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0006adc7) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0006adc7) popup_call_audio_first_window_t

0xa511,	// (0x000661e6) bg_popup_call_pane_cp02

0xa51b,	// (0x000661f0) call_type_pane_cp023

0xa523,	// (0x000661f8) popup_call_audio_wait_window_g1

0xa52b,	// (0x00066200) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006adce) popup_call_audio_wait_window_g

0xa533,	// (0x00066208) popup_call_audio_wait_window_t3

0xa541,	// (0x00066216) bg_popup_call_pane_cp03_ParamLimits

0xa541,	// (0x00066216) bg_popup_call_pane_cp03

0xa5a1,	// (0x00066276) call_thumbnail_pane_cp011_ParamLimits

0xa5a1,	// (0x00066276) call_thumbnail_pane_cp011

0xa5ad,	// (0x00066282) call_type_pane_cp034_ParamLimits

0xa5ad,	// (0x00066282) call_type_pane_cp034

0xa5e9,	// (0x000662be) popup_call_audio_second_window_g1_ParamLimits

0xa5e9,	// (0x000662be) popup_call_audio_second_window_g1

0xa625,	// (0x000662fa) popup_call_audio_second_window_g2_ParamLimits

0xa625,	// (0x000662fa) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0006add3) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0006add3) popup_call_audio_second_window_g

0xa661,	// (0x00066336) popup_call_audio_second_window_t1_ParamLimits

0xa661,	// (0x00066336) popup_call_audio_second_window_t1

0xa6e2,	// (0x000663b7) popup_call_audio_second_window_t2_ParamLimits

0xa6e2,	// (0x000663b7) popup_call_audio_second_window_t2

0xa718,	// (0x000663ed) popup_call_audio_second_window_t3_ParamLimits

0xa718,	// (0x000663ed) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0006add8) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0006add8) popup_call_audio_second_window_t

0xa511,	// (0x000661e6) bg_popup_call_pane_cp04

0xa74e,	// (0x00066423) list_conf_pane

0xa756,	// (0x0006642b) popup_call_audio_conf_window_t1

0xa764,	// (0x00066439) call_thumbnail_pane_g1

0xa76c,	// (0x00066441) bg_pinb_pane_ParamLimits

0xa76c,	// (0x00066441) bg_pinb_pane

0xa77a,	// (0x0006644f) find_pinb_pane

0xa783,	// (0x00066458) listscroll_pinb_pane_ParamLimits

0xa783,	// (0x00066458) listscroll_pinb_pane

0xa792,	// (0x00066467) pinb_bg_pane_g1

0x1277,	// (0x0005cf4c) pinb_bg_pane_g2

0x1283,	// (0x0005cf58) pinb_bg_pane_g3

0x128f,	// (0x0005cf64) pinb_bg_pane_g4

0x129b,	// (0x0005cf70) pinb_bg_pane_g5

0x12a7,	// (0x0005cf7c) pinb_bg_pane_g6

0x12b2,	// (0x0005cf87) pinb_bg_pane_g7

0x12bd,	// (0x0005cf92) pinb_bg_pane_g8

0x12c8,	// (0x0005cf9d) pinb_bg_pane_g9

0x12d2,	// (0x0005cfa7) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0006addf) pinb_bg_pane_g

0x12ef,	// (0x0005cfc4) grid_pinb_pane

0x12fa,	// (0x0005cfcf) list_pinb_pane

0x1305,	// (0x0005cfda) scroll_pane_cp01_ParamLimits

0x1305,	// (0x0005cfda) scroll_pane_cp01

0xa79c,	// (0x00066471) find_pinb_pane_g1_ParamLimits

0xa79c,	// (0x00066471) find_pinb_pane_g1

0xa7b4,	// (0x00066489) find_pinb_pane_t1

0xa7c6,	// (0x0006649b) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0006adf9) find_pinb_pane_t

0xa7db,	// (0x000664b0) input_focus_pane_cp01_ParamLimits

0xa7db,	// (0x000664b0) input_focus_pane_cp01

0x1317,	// (0x0005cfec) cell_pinb_pane_ParamLimits

0x1317,	// (0x0005cfec) cell_pinb_pane

0x133f,	// (0x0005d014) cell_pinb_pane_g1_ParamLimits

0x133f,	// (0x0005d014) cell_pinb_pane_g1

0x1354,	// (0x0005d029) cell_pinb_pane_g2_ParamLimits

0x1354,	// (0x0005d029) cell_pinb_pane_g2

0xa7e7,	// (0x000664bc) cell_pinb_pane_g3_ParamLimits

0xa7e7,	// (0x000664bc) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0006adfe) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0006adfe) cell_pinb_pane_g

0xa511,	// (0x000661e6) grid_highlight_pane_cp01

0x1360,	// (0x0005d035) list_pinb_item_pane_ParamLimits

0x1360,	// (0x0005d035) list_pinb_item_pane

0xa511,	// (0x000661e6) list_highlight_pane_cp02

0x1386,	// (0x0005d05b) list_pinb_item_pane_g1_ParamLimits

0x1386,	// (0x0005d05b) list_pinb_item_pane_g1

0x1393,	// (0x0005d068) list_pinb_item_pane_g2_ParamLimits

0x1393,	// (0x0005d068) list_pinb_item_pane_g2

0x139f,	// (0x0005d074) list_pinb_item_pane_g3_ParamLimits

0x139f,	// (0x0005d074) list_pinb_item_pane_g3

0x13b0,	// (0x0005d085) list_pinb_item_pane_g4_ParamLimits

0x13b0,	// (0x0005d085) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0006ae05) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0006ae05) list_pinb_item_pane_g

0x13bc,	// (0x0005d091) list_pinb_item_pane_t1_ParamLimits

0x13bc,	// (0x0005d091) list_pinb_item_pane_t1

0x13ed,	// (0x0005d0c2) calc_display_pane

0x140b,	// (0x0005d0e0) calc_paper_pane

0x1427,	// (0x0005d0fc) grid_calc_pane

0xa511,	// (0x000661e6) bg_list_pane_cp01

0x1453,	// (0x0005d128) clock_g1

0x145b,	// (0x0005d130) clock_g2

0x0001,

0xf139,	// (0x0006ae0e) clock_g

0x1465,	// (0x0005d13a) clock_t1_ParamLimits

0x1465,	// (0x0005d13a) clock_t1

0x147a,	// (0x0005d14f) clock_t2_ParamLimits

0x147a,	// (0x0005d14f) clock_t2

0x148c,	// (0x0005d161) clock_t3_ParamLimits

0x148c,	// (0x0005d161) clock_t3

0x149e,	// (0x0005d173) clock_t4_ParamLimits

0x149e,	// (0x0005d173) clock_t4

0x14b0,	// (0x0005d185) clock_t5_ParamLimits

0x14b0,	// (0x0005d185) clock_t5

0x14c5,	// (0x0005d19a) clock_t6_ParamLimits

0x14c5,	// (0x0005d19a) clock_t6

0x14d7,	// (0x0005d1ac) clock_t7_ParamLimits

0x14d7,	// (0x0005d1ac) clock_t7

0x14e9,	// (0x0005d1be) clock_t8_ParamLimits

0x14e9,	// (0x0005d1be) clock_t8

0x14ff,	// (0x0005d1d4) clock_t9_ParamLimits

0x14ff,	// (0x0005d1d4) clock_t9

0x0008,

0xf13e,	// (0x0006ae13) clock_t_ParamLimits

0xf13e,	// (0x0006ae13) clock_t

0xa7f3,	// (0x000664c8) popup_clock_analogue_window_cp02

0xa7f3,	// (0x000664c8) popup_clock_digital_window_cp01

0xa7fb,	// (0x000664d0) listscroll_help_pane

0xa511,	// (0x000661e6) phob_pre_status_pane

0xa805,	// (0x000664da) grid_qdial_pane

0xa76c,	// (0x00066441) listscroll_mce_pane

0xa76c,	// (0x00066441) bg_notes_pane

0xa80f,	// (0x000664e4) list_notes_pane

0x1515,	// (0x0005d1ea) scroll_pane_cp06

0xa81d,	// (0x000664f2) bg_calc_paper_pane

0x1524,	// (0x0005d1f9) list_calc_pane

0xa831,	// (0x00066506) bg_calc_display_pane

0x153e,	// (0x0005d213) calc_display_pane_t1

0x1553,	// (0x0005d228) calc_display_pane_t2

0x1568,	// (0x0005d23d) calc_display_pane_t3

0x0002,

0xf151,	// (0x0006ae26) calc_display_pane_t

0x157a,	// (0x0005d24f) cell_calc_pane_ParamLimits

0x157a,	// (0x0005d24f) cell_calc_pane

0xa83d,	// (0x00066512) bg_calc_paper_pane_g1

0xa849,	// (0x0006651e) bg_calc_paper_pane_g2

0xa855,	// (0x0006652a) bg_calc_paper_pane_g3

0xa861,	// (0x00066536) bg_calc_paper_pane_g4

0xa86d,	// (0x00066542) bg_calc_paper_pane_g5

0x15a7,	// (0x0005d27c) bg_calc_paper_pane_g6

0x15b8,	// (0x0005d28d) bg_calc_paper_pane_g7

0x15c9,	// (0x0005d29e) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0006ae2d) bg_calc_paper_pane_g

0x15da,	// (0x0005d2af) calc_bg_paper_pane_g9

0x15eb,	// (0x0005d2c0) list_calc_item_pane_ParamLimits

0x15eb,	// (0x0005d2c0) list_calc_item_pane

0xa879,	// (0x0006654e) list_calc_item_pane_g1

0x161a,	// (0x0005d2ef) list_calc_item_pane_t1_ParamLimits

0x161a,	// (0x0005d2ef) list_calc_item_pane_t1

0x162c,	// (0x0005d301) list_calc_item_pane_t2_ParamLimits

0x162c,	// (0x0005d301) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0006ae3e) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0006ae3e) list_calc_item_pane_t

0xa886,	// (0x0006655b) cell_calc_pane_g1

0xa890,	// (0x00066565) grid_highlight_pane_cp02

0x165c,	// (0x0005d331) bg_calc_display_pane_g1

0x1665,	// (0x0005d33a) bg_calc_display_pane_g2

0xcb86,	// (0x0006885b) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0006ae48) bg_calc_display_pane_g

0x166f,	// (0x0005d344) cell_qdial_pane_ParamLimits

0x166f,	// (0x0005d344) cell_qdial_pane

0x1683,	// (0x0005d358) cell_qdial_pane_g1_ParamLimits

0x1683,	// (0x0005d358) cell_qdial_pane_g1

0x1690,	// (0x0005d365) cell_qdial_pane_g2_ParamLimits

0x1690,	// (0x0005d365) cell_qdial_pane_g2

0xa8b2,	// (0x00066587) cell_qdial_pane_g3_ParamLimits

0xa8b2,	// (0x00066587) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0006ae4f) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0006ae4f) cell_qdial_pane_g

0x16ae,	// (0x0005d383) cell_qdial_pane_t1_ParamLimits

0x16ae,	// (0x0005d383) cell_qdial_pane_t1

0x16c6,	// (0x0005d39b) cell_qdial_pane_t2_ParamLimits

0x16c6,	// (0x0005d39b) cell_qdial_pane_t2

0x16d9,	// (0x0005d3ae) cell_qdial_pane_t3_ParamLimits

0x16d9,	// (0x0005d3ae) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0006ae58) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0006ae58) cell_qdial_pane_t

0xa511,	// (0x000661e6) grid_highlight_pane_cp04

0xa8be,	// (0x00066593) thumbnail_qdial_pane_ParamLimits

0xa8be,	// (0x00066593) thumbnail_qdial_pane

0xa91a,	// (0x000665ef) list_help_pane

0xa923,	// (0x000665f8) scroll_pane_cp02

0x16ec,	// (0x0005d3c1) help_list_pane_t1_ParamLimits

0x16ec,	// (0x0005d3c1) help_list_pane_t1

0x171f,	// (0x0005d3f4) bg_notes_pane_g2

0x1727,	// (0x0005d3fc) bg_notes_pane_g3

0x172f,	// (0x0005d404) notes_bg_pane_g1

0x1737,	// (0x0005d40c) notes_bg_pane_g4

0x173f,	// (0x0005d414) notes_bg_pane_g5

0x1747,	// (0x0005d41c) notes_bg_pane_g6

0x174f,	// (0x0005d424) notes_bg_pane_g7

0x1757,	// (0x0005d42c) notes_bg_pane_g8

0x175f,	// (0x0005d434) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0006ae76) notes_bg_pane_g

0x1767,	// (0x0005d43c) list_notes_text_pane_ParamLimits

0x1767,	// (0x0005d43c) list_notes_text_pane

0xa92c,	// (0x00066601) list_notes_text_pane_g1

0x178f,	// (0x0005d464) list_notes_text_pane_t1

0x179d,	// (0x0005d472) listscroll_cale_week_pane

0x17c2,	// (0x0005d497) bg_cale_heading_pane

0xa94f,	// (0x00066624) bg_cale_pane_cp01

0x17e4,	// (0x0005d4b9) cale_week_corner_pane

0x17fe,	// (0x0005d4d3) cale_week_day_heading_pane

0x1820,	// (0x0005d4f5) cale_week_scroll_pane_g1

0x183d,	// (0x0005d512) cale_week_scroll_pane_g2

0x1850,	// (0x0005d525) cale_week_scroll_pane_g3

0x1863,	// (0x0005d538) cale_week_scroll_pane_g4

0x1876,	// (0x0005d54b) cale_week_scroll_pane_g5

0x1889,	// (0x0005d55e) cale_week_scroll_pane_g6

0x189c,	// (0x0005d571) cale_week_scroll_pane_g7

0x18af,	// (0x0005d584) cale_week_scroll_pane_g8

0x18c4,	// (0x0005d599) cale_week_scroll_pane_g9

0x18d7,	// (0x0005d5ac) cale_week_scroll_pane_g10

0x18ea,	// (0x0005d5bf) cale_week_scroll_pane_g11

0x18fd,	// (0x0005d5d2) cale_week_scroll_pane_g12

0x1914,	// (0x0005d5e9) cale_week_scroll_pane_g13

0x192f,	// (0x0005d604) cale_week_scroll_pane_g14

0x194a,	// (0x0005d61f) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0006ae85) cale_week_scroll_pane_g

0x197a,	// (0x0005d64f) cale_week_time_pane

0x198f,	// (0x0005d664) grid_cale_week_pane

0xa97e,	// (0x00066653) scroll_pane_cp08

0x19ae,	// (0x0005d683) cell_cale_week_pane_ParamLimits

0x19ae,	// (0x0005d683) cell_cale_week_pane

0x1a10,	// (0x0005d6e5) cale_week_day_heading_pane_t1

0x1a4b,	// (0x0005d720) cale_week_day_heading_pane_t2

0x1a86,	// (0x0005d75b) cale_week_day_heading_pane_t3

0x1ac1,	// (0x0005d796) cale_week_day_heading_pane_t4

0x1afc,	// (0x0005d7d1) cale_week_day_heading_pane_t5

0x1b37,	// (0x0005d80c) cale_week_day_heading_pane_t6

0x1b72,	// (0x0005d847) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0006aea6) cale_week_day_heading_pane_t

0xa99b,	// (0x00066670) bg_cale_side_pane

0x1bad,	// (0x0005d882) cale_week_time_pane_t1

0x1bc7,	// (0x0005d89c) cale_week_time_pane_t2

0x1be1,	// (0x0005d8b6) cale_week_time_pane_t3

0x1bfb,	// (0x0005d8d0) cale_week_time_pane_t4

0x1c15,	// (0x0005d8ea) cale_week_time_pane_t5

0x1c2f,	// (0x0005d904) cale_week_time_pane_t6

0x1c4f,	// (0x0005d924) cale_week_time_pane_t7

0x1c71,	// (0x0005d946) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0006aeb5) cale_week_time_pane_t

0x1c95,	// (0x0005d96a) cell_cale_week_pane_g2

0x1cb9,	// (0x0005d98e) cell_cale_week_pane_g3_ParamLimits

0x1cb9,	// (0x0005d98e) cell_cale_week_pane_g3

0xa9a9,	// (0x0006667e) grid_highlight_pane_cp07

0xa9b1,	// (0x00066686) listscroll_gms_pane

0xa9bb,	// (0x00066690) grid_gms_pane

0xa9c4,	// (0x00066699) listscroll_gms_pane_g1

0xa9cc,	// (0x000666a1) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0006aec6) listscroll_gms_pane_g

0x1cd1,	// (0x0005d9a6) scroll_pane_cp010

0x1cdc,	// (0x0005d9b1) cell_gms_pane_ParamLimits

0x1cdc,	// (0x0005d9b1) cell_gms_pane

0x1cef,	// (0x0005d9c4) cell_gms_pane_g1

0xa9d4,	// (0x000666a9) cell_gms_pane_g2

0xa9dc,	// (0x000666b1) cell_gms_pane_g3

0xa9e5,	// (0x000666ba) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0006aecb) cell_gms_pane_g

0xa9ee,	// (0x000666c3) grid_highlight_pane_cp09

0x431f,	// (0x0005fff4) phob_pre_status_pane_g1

0x4327,	// (0x0005fffc) phob_pre_status_pane_g2

0x432f,	// (0x00060004) phob_pre_status_pane_g3

0x4337,	// (0x0006000c) phob_pre_status_pane_g4

0x0004,

0xf50f,	// (0x0006b1e4) phob_pre_status_pane_g

0x4347,	// (0x0006001c) phob_pre_status_pane_t1

0x4357,	// (0x0006002c) phob_pre_status_pane_t2

0x4367,	// (0x0006003c) phob_pre_status_pane_t3

0x0002,

0xf51a,	// (0x0006b1ef) phob_pre_status_pane_t

0xa9f6,	// (0x000666cb) bg_list_pane_cp05

0x1cff,	// (0x0005d9d4) grid_vorec_pane

0x1d09,	// (0x0005d9de) vorec_t1

0x1d17,	// (0x0005d9ec) vorec_t2

0x1d25,	// (0x0005d9fa) vorec_t3

0x1d33,	// (0x0005da08) vorec_t4

0x9be4,	// (0x000658b9) vorec_t5

0x9bf2,	// (0x000658c7) vorec_t6

0x0004,

0xf1ff,	// (0x0006aed4) vorec_t

0x9c00,	// (0x000658d5) wait_bar_pane_cp01

0x1d4f,	// (0x0005da24) cell_vorec_pane_ParamLimits

0x1d4f,	// (0x0005da24) cell_vorec_pane

0x1d62,	// (0x0005da37) cell_vorec_pane_g1

0xa511,	// (0x000661e6) grid_highlight_pane_cp05

0x1d7c,	// (0x0005da51) cams_zoom_pane

0x1d88,	// (0x0005da5d) image_vga_pane

0x1d97,	// (0x0005da6c) main_camera_pane_g1

0x1da5,	// (0x0005da7a) main_camera_pane_g2

0x1db1,	// (0x0005da86) main_camera_pane_g3

0x1dbd,	// (0x0005da92) main_camera_pane_g4

0x1dc9,	// (0x0005da9e) main_camera_pane_g5

0x1dd5,	// (0x0005daaa) main_camera_pane_g6

0x1de1,	// (0x0005dab6) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0006aedf) main_camera_pane_g

0x1ded,	// (0x0005dac2) main_camera_pane_t1

0x1dff,	// (0x0005dad4) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0006aef0) main_camera_pane_t

0x1e20,	// (0x0005daf5) cams_zoom_pane_cp_ParamLimits

0x1e20,	// (0x0005daf5) cams_zoom_pane_cp

0x1e44,	// (0x0005db19) image_cif_pane_ParamLimits

0x1e44,	// (0x0005db19) image_cif_pane

0x1e62,	// (0x0005db37) image_subqcif_pane

0x1e6a,	// (0x0005db3f) main_video_pane_g1_ParamLimits

0x1e6a,	// (0x0005db3f) main_video_pane_g1

0x1e8a,	// (0x0005db5f) main_video_pane_g2_ParamLimits

0x1e8a,	// (0x0005db5f) main_video_pane_g2

0x1eba,	// (0x0005db8f) main_video_pane_g3_ParamLimits

0x1eba,	// (0x0005db8f) main_video_pane_g3

0x1ee3,	// (0x0005dbb8) main_video_pane_g4_ParamLimits

0x1ee3,	// (0x0005dbb8) main_video_pane_g4

0x1f0c,	// (0x0005dbe1) main_video_pane_g5_ParamLimits

0x1f0c,	// (0x0005dbe1) main_video_pane_g5

0xaa0a,	// (0x000666df) main_video_pane_g6_ParamLimits

0xaa0a,	// (0x000666df) main_video_pane_g6

0x0006,

0xf220,	// (0x0006aef5) main_video_pane_g_ParamLimits

0xf220,	// (0x0006aef5) main_video_pane_g

0x1f2e,	// (0x0005dc03) main_video_pane_t1_ParamLimits

0x1f2e,	// (0x0005dc03) main_video_pane_t1

0xaa24,	// (0x000666f9) cams_zoom_pane_g1

0xaa2d,	// (0x00066702) cams_zoom_pane_g2

0xaa36,	// (0x0006670b) cams_zoom_pane_g3

0xaa3f,	// (0x00066714) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0006af04) cams_zoom_pane_g

0x1f78,	// (0x0005dc4d) grid_cams_pane

0x1f86,	// (0x0005dc5b) linegrid_cams_pane

0x1f94,	// (0x0005dc69) cell_cams_pane_ParamLimits

0x1f94,	// (0x0005dc69) cell_cams_pane

0xaa48,	// (0x0006671d) cams_burst_image_pane

0xaa50,	// (0x00066725) cell_cams_pane_g1

0xa511,	// (0x000661e6) grid_highlight_pane_cp03

0xa886,	// (0x0006655b) mp_bg_pane_g1

0xa511,	// (0x000661e6) bg_list_pane_cp03

0xc781,	// (0x00068456) bg_mp_pane

0xc789,	// (0x0006845e) grid_mp_pane

0xc791,	// (0x00068466) media_player_g1

0xc799,	// (0x0006846e) media_player_t1

0xc7a7,	// (0x0006847c) media_player_t2

0xc7b5,	// (0x0006848a) media_player_t3

0xc7c3,	// (0x00068498) media_player_t4

0xc7d1,	// (0x000684a6) media_player_t5

0xc7df,	// (0x000684b4) media_player_t6

0xc7ed,	// (0x000684c2) media_player_t7

0x0006,

0x04c8,	// (0x0005c19d) media_player_t

0xc7fb,	// (0x000684d0) wait_bar_pane_cp02

0xf4fb,	// (0x0006b1d0) main_usb_pane_t

0x4316,	// (0x0005ffeb) cell_mp_pane

0xa886,	// (0x0006655b) cell_mp_pane_g1

0xa511,	// (0x000661e6) grid_highlight_pane_cp06

0xaa58,	// (0x0006672d) grid_skin_colour_pane

0xaa60,	// (0x00066735) list_highlight_pane_cp03

0x20b4,	// (0x0005dd89) skin_g1

0xaa68,	// (0x0006673d) skin_t1

0xaa77,	// (0x0006674c) skin_t2

0x0001,

0xf264,	// (0x0006af39) skin_t

0x20be,	// (0x0005dd93) cell_skin_colour_pane_ParamLimits

0x20be,	// (0x0005dd93) cell_skin_colour_pane

0xaa85,	// (0x0006675a) cell_skin_colour_pane_g1

0x2142,	// (0x0005de17) call_video_g1_ParamLimits

0x2142,	// (0x0005de17) call_video_g1

0x2152,	// (0x0005de27) call_video_g2_ParamLimits

0x2152,	// (0x0005de27) call_video_g2

0x0001,

0xf269,	// (0x0006af3e) call_video_g_ParamLimits

0xf269,	// (0x0006af3e) call_video_g

0x21ac,	// (0x0005de81) call_video_uplink_pane_cp1_ParamLimits

0x21ac,	// (0x0005de81) call_video_uplink_pane_cp1

0xaa97,	// (0x0006676c) call_video_uplink_pane_cp2

0x2278,	// (0x0005df4d) video_down_crop_pane_ParamLimits

0x2278,	// (0x0005df4d) video_down_crop_pane

0x2376,	// (0x0005e04b) video_down_pane_ParamLimits

0x2376,	// (0x0005e04b) video_down_pane

0xaa9f,	// (0x00066774) video_down_subqcif_pane_ParamLimits

0xaa9f,	// (0x00066774) video_down_subqcif_pane

0xaab7,	// (0x0006678c) video_down_subqcif_pane_cp_ParamLimits

0xaab7,	// (0x0006678c) video_down_subqcif_pane_cp

0xaadd,	// (0x000667b2) im_reading_pane_ParamLimits

0xaadd,	// (0x000667b2) im_reading_pane

0x2498,	// (0x0005e16d) im_writing_pane_ParamLimits

0x2498,	// (0x0005e16d) im_writing_pane

0x24b6,	// (0x0005e18b) im_reading_pane_t1

0xaaf7,	// (0x000667cc) list_im_pane

0xab08,	// (0x000667dd) scroll_pane_cp07

0x250a,	// (0x0005e1df) im_writing_pane_t1_ParamLimits

0x250a,	// (0x0005e1df) im_writing_pane_t1

0xab21,	// (0x000667f6) im_writing_pane_t2_ParamLimits

0xab21,	// (0x000667f6) im_writing_pane_t2

0x0001,

0xf273,	// (0x0006af48) im_writing_pane_t_ParamLimits

0xf273,	// (0x0006af48) im_writing_pane_t

0xa511,	// (0x000661e6) input_focus_pane_cp04

0xa511,	// (0x000661e6) input_focus_pane_cp05

0x251f,	// (0x0005e1f4) list_im_single_pane_ParamLimits

0x251f,	// (0x0005e1f4) list_im_single_pane

0x2543,	// (0x0005e218) list_single_im_pane_t1

0x42da,	// (0x0005ffaf) blid_accuracy_pane

0x42e2,	// (0x0005ffb7) blid_compass_pane

0x42ec,	// (0x0005ffc1) main_location_t1

0x42fa,	// (0x0005ffcf) main_location_t2

0x4308,	// (0x0005ffdd) main_location_t3

0x0002,

0xf508,	// (0x0006b1dd) main_location_t

0xa511,	// (0x000661e6) aid_levels_location

0xa886,	// (0x0006655b) blid_accuracy_pane_g1

0xa886,	// (0x0006655b) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0006afaa) blid_accuracy_pane_g

0xab69,	// (0x0006683e) wml_content_pane

0xaba7,	// (0x0006687c) wml_button_pane_ParamLimits

0xaba7,	// (0x0006687c) wml_button_pane

0x2552,	// (0x0005e227) wml_list_single_large_pane_ParamLimits

0x2552,	// (0x0005e227) wml_list_single_large_pane

0x257c,	// (0x0005e251) wml_list_single_medium_pane_ParamLimits

0x257c,	// (0x0005e251) wml_list_single_medium_pane

0x25ad,	// (0x0005e282) wml_list_single_small_pane_ParamLimits

0x25ad,	// (0x0005e282) wml_list_single_small_pane

0xabbb,	// (0x00066890) wml_selection_box_pane_ParamLimits

0xabbb,	// (0x00066890) wml_selection_box_pane

0xabce,	// (0x000668a3) wml_list_single_pane_t1

0xabdd,	// (0x000668b2) wml_list_single_medium_pane_t1

0xabec,	// (0x000668c1) wml_list_single_large_pane_t1

0xabfb,	// (0x000668d0) input_focus_pane_cp02_ParamLimits

0xabfb,	// (0x000668d0) input_focus_pane_cp02

0xac0e,	// (0x000668e3) wml_selection_box_pane_g1

0xac17,	// (0x000668ec) wml_selection_box_pane_t1_ParamLimits

0xac17,	// (0x000668ec) wml_selection_box_pane_t1

0xa76c,	// (0x00066441) bg_wml_button_pane_ParamLimits

0xa76c,	// (0x00066441) bg_wml_button_pane

0xac2f,	// (0x00066904) wml_button_pane_g1

0xac37,	// (0x0006690c) wml_button_pane_t1

0xac2f,	// (0x00066904) wml_button_bg_pane_g1

0xac47,	// (0x0006691c) wml_button_bg_pane_g2

0xac4f,	// (0x00066924) wml_button_bg_pane_g3

0xac57,	// (0x0006692c) wml_button_bg_pane_g4

0xac5f,	// (0x00066934) wml_button_bg_pane_g5

0xac67,	// (0x0006693c) wml_button_bg_pane_g6

0xac6f,	// (0x00066944) wml_button_bg_pane_g7

0xac77,	// (0x0006694c) wml_button_bg_pane_g8

0xac7f,	// (0x00066954) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006af4d) wml_button_bg_pane_g

0x25e7,	// (0x0005e2bc) bg_list_pane_cp02

0xac87,	// (0x0006695c) mce_header_pane_ParamLimits

0xac87,	// (0x0006695c) mce_header_pane

0xac9d,	// (0x00066972) mce_icon_pane

0xac9d,	// (0x00066972) mce_image_pane

0xaca6,	// (0x0006697b) mce_text_pane_ParamLimits

0xaca6,	// (0x0006697b) mce_text_pane

0x25f1,	// (0x0005e2c6) scroll_pane_cp03

0xab9f,	// (0x00066874) scroll_pane_cp04

0xacb9,	// (0x0006698e) scroll_pane_cp05_ParamLimits

0xacb9,	// (0x0006698e) scroll_pane_cp05

0x25fb,	// (0x0005e2d0) mce_header_field_pane_ParamLimits

0x25fb,	// (0x0005e2d0) mce_header_field_pane

0x261b,	// (0x0005e2f0) mce_header_field_pane_2_ParamLimits

0x261b,	// (0x0005e2f0) mce_header_field_pane_2

0x2631,	// (0x0005e306) mce_header_field_pane_3

0x2639,	// (0x0005e30e) list_single_mce_message_pane_ParamLimits

0x2639,	// (0x0005e30e) list_single_mce_message_pane

0x2664,	// (0x0005e339) list_single_mce_smart_pane_ParamLimits

0x2664,	// (0x0005e339) list_single_mce_smart_pane

0xacc5,	// (0x0006699a) input_focus_pane_cp03

0xacce,	// (0x000669a3) list_header_data_pane

0x269a,	// (0x0005e36f) mce_header_field_pane_t1

0x26a8,	// (0x0005e37d) list_single_mce_header_pane_ParamLimits

0x26a8,	// (0x0005e37d) list_single_mce_header_pane

0xacd6,	// (0x000669ab) list_single_mce_header_pane_t1

0xace5,	// (0x000669ba) list_single_mce_message_pane_g1

0xaced,	// (0x000669c2) list_single_mce_message_pane_t1

0x26fa,	// (0x0005e3cf) bg_cale_heading_pane_cp01_ParamLimits

0x26fa,	// (0x0005e3cf) bg_cale_heading_pane_cp01

0xacfb,	// (0x000669d0) bg_cale_pane_cp02_ParamLimits

0xacfb,	// (0x000669d0) bg_cale_pane_cp02

0x273d,	// (0x0005e412) cale_month_corner_pane

0x2757,	// (0x0005e42c) cale_month_day_heading_pane_ParamLimits

0x2757,	// (0x0005e42c) cale_month_day_heading_pane

0x27b2,	// (0x0005e487) cale_month_pane_g1_ParamLimits

0x27b2,	// (0x0005e487) cale_month_pane_g1

0x27ea,	// (0x0005e4bf) cale_month_pane_g2_ParamLimits

0x27ea,	// (0x0005e4bf) cale_month_pane_g2

0x2813,	// (0x0005e4e8) cale_month_pane_g3_ParamLimits

0x2813,	// (0x0005e4e8) cale_month_pane_g3

0x285f,	// (0x0005e534) cale_month_pane_g4_ParamLimits

0x285f,	// (0x0005e534) cale_month_pane_g4

0x28ab,	// (0x0005e580) cale_month_pane_g5_ParamLimits

0x28ab,	// (0x0005e580) cale_month_pane_g5

0x28f7,	// (0x0005e5cc) cale_month_pane_g6_ParamLimits

0x28f7,	// (0x0005e5cc) cale_month_pane_g6

0x2943,	// (0x0005e618) cale_month_pane_g7_ParamLimits

0x2943,	// (0x0005e618) cale_month_pane_g7

0x29a7,	// (0x0005e67c) cale_month_pane_g8_ParamLimits

0x29a7,	// (0x0005e67c) cale_month_pane_g8

0x2a0b,	// (0x0005e6e0) cale_month_pane_g9_ParamLimits

0x2a0b,	// (0x0005e6e0) cale_month_pane_g9

0x2a69,	// (0x0005e73e) cale_month_pane_g10_ParamLimits

0x2a69,	// (0x0005e73e) cale_month_pane_g10

0x2ac5,	// (0x0005e79a) cale_month_pane_g11_ParamLimits

0x2ac5,	// (0x0005e79a) cale_month_pane_g11

0x2b19,	// (0x0005e7ee) cale_month_pane_g12_ParamLimits

0x2b19,	// (0x0005e7ee) cale_month_pane_g12

0x2b6f,	// (0x0005e844) cale_month_pane_g13_ParamLimits

0x2b6f,	// (0x0005e844) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0006af60) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0006af60) cale_month_pane_g

0x2bc5,	// (0x0005e89a) cale_month_week_pane

0x2bda,	// (0x0005e8af) grid_cale_month_pane_ParamLimits

0x2bda,	// (0x0005e8af) grid_cale_month_pane

0x2c28,	// (0x0005e8fd) cale_month_day_heading_pane_t1

0x2cae,	// (0x0005e983) cale_month_day_heading_pane_t2

0x2d3f,	// (0x0005ea14) cale_month_day_heading_pane_t3

0x2dd0,	// (0x0005eaa5) cale_month_day_heading_pane_t4

0x2e61,	// (0x0005eb36) cale_month_day_heading_pane_t5

0x2ef2,	// (0x0005ebc7) cale_month_day_heading_pane_t6

0x2f83,	// (0x0005ec58) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006af7b) cale_month_day_heading_pane_t

0xa99b,	// (0x00066670) bg_cale_side_pane_cp01

0x302c,	// (0x0005ed01) cale_month_week_pane_t1

0x3045,	// (0x0005ed1a) cale_month_week_pane_t2

0x305e,	// (0x0005ed33) cale_month_week_pane_t3

0x3077,	// (0x0005ed4c) cale_month_week_pane_t4

0x3090,	// (0x0005ed65) cale_month_week_pane_t5

0x30b1,	// (0x0005ed86) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0006af8a) cale_month_week_pane_t

0x30d2,	// (0x0005eda7) cell_cale_month_pane_ParamLimits

0x30d2,	// (0x0005eda7) cell_cale_month_pane

0x321e,	// (0x0005eef3) cell_cale_month_pane_g1

0x322a,	// (0x0005eeff) cell_cale_month_pane_t1_ParamLimits

0x322a,	// (0x0005eeff) cell_cale_month_pane_t1

0xa9a9,	// (0x0006667e) grid_highlight_pane_cp08

0xa886,	// (0x0006655b) main_smil_g1

0x324a,	// (0x0005ef1f) smil_status_pane

0xad3a,	// (0x00066a0f) smil_text_pane

0xc6a1,	// (0x00068376) bg_popup_call3_rect_pane_g8

0xc6a9,	// (0x0006837e) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e3,	// (0x0006b1b8) bg_popup_call3_rect_pane_g

0xc903,	// (0x000685d8) smil_status_volume_pane_g1

0xad44,	// (0x00066a19) smil_status_pane_t1

0x4712,	// (0x000603e7) volume_smil_pane

0xad5b,	// (0x00066a30) list_smil_text_pane

0x325d,	// (0x0005ef32) scroll_pane_cp011

0x3268,	// (0x0005ef3d) smil_text_list_pane_t1_ParamLimits

0x3268,	// (0x0005ef3d) smil_text_list_pane_t1

0x32e0,	// (0x0005efb5) aid_volume_smil_ParamLimits

0x32e0,	// (0x0005efb5) aid_volume_smil

0xa886,	// (0x0006655b) smil_volume_pane_g1

0xa886,	// (0x0006655b) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0006afaa) smil_volume_pane_g

0x179d,	// (0x0005d472) listscroll_cale_day_pane

0xad65,	// (0x00066a3a) bg_cale_pane

0xad7d,	// (0x00066a52) list_cale_pane

0xada0,	// (0x00066a75) scroll_pane_cp09

0xadb1,	// (0x00066a86) cale_bg_pane_g1

0xadb9,	// (0x00066a8e) cale_bg_pane_g2

0xadc1,	// (0x00066a96) cale_bg_pane_g3

0xadc9,	// (0x00066a9e) cale_bg_pane_g4

0xadd1,	// (0x00066aa6) cale_bg_pane_g5

0xadd9,	// (0x00066aae) cale_bg_pane_g6

0xade1,	// (0x00066ab6) cale_bg_pane_g7

0xade9,	// (0x00066abe) cale_bg_pane_g8

0xadf1,	// (0x00066ac6) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0006afaf) cale_bg_pane_g

0x330a,	// (0x0005efdf) list_cale_time_pane_ParamLimits

0x330a,	// (0x0005efdf) list_cale_time_pane

0xadf9,	// (0x00066ace) list_cale_time_pane_g1_ParamLimits

0xadf9,	// (0x00066ace) list_cale_time_pane_g1

0xae05,	// (0x00066ada) list_cale_time_pane_g2_ParamLimits

0xae05,	// (0x00066ada) list_cale_time_pane_g2

0x332c,	// (0x0005f001) list_cale_time_pane_g3_ParamLimits

0x332c,	// (0x0005f001) list_cale_time_pane_g3

0x333a,	// (0x0005f00f) list_cale_time_pane_g4_ParamLimits

0x333a,	// (0x0005f00f) list_cale_time_pane_g4

0x3348,	// (0x0005f01d) list_cale_time_pane_g5_ParamLimits

0x3348,	// (0x0005f01d) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0006afc2) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0006afc2) list_cale_time_pane_g

0xae1f,	// (0x00066af4) list_cale_time_pane_t1_ParamLimits

0xae1f,	// (0x00066af4) list_cale_time_pane_t1

0xae47,	// (0x00066b1c) list_cale_time_pane_t2_ParamLimits

0xae47,	// (0x00066b1c) list_cale_time_pane_t2

0x36de,	// (0x0005f3b3) aid_blid_cardinal_pane

0x3720,	// (0x0005f3f5) compass_pane_t4

0xae6f,	// (0x00066b44) list_cale_time_pane_t4_ParamLimits

0xae6f,	// (0x00066b44) list_cale_time_pane_t4

0x372e,	// (0x0005f403) compass_pane_t5

0x373e,	// (0x0005f413) compass_pane_t6

0x374c,	// (0x0005f421) compass_pane_t7

0xb32c,	// (0x00067001) navi_pane_cc_t1

0xb509,	// (0x000671de) aid_phob_thumbnail_center_pane

0x3de0,	// (0x0005fab5) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0006afcf) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0006afcf) list_cale_time_pane_t

0x9c7e,	// (0x00065953) bg_popup_window_pane_cp02_ParamLimits

0x9c7e,	// (0x00065953) bg_popup_window_pane_cp02

0xae97,	// (0x00066b6c) heading_pane_cp01_ParamLimits

0xae97,	// (0x00066b6c) heading_pane_cp01

0xaea3,	// (0x00066b78) loc_req_pane_ParamLimits

0xaea3,	// (0x00066b78) loc_req_pane

0xaeb3,	// (0x00066b88) loc_type_pane_ParamLimits

0xaeb3,	// (0x00066b88) loc_type_pane

0xaec5,	// (0x00066b9a) loc_type_pane_t1_ParamLimits

0xaec5,	// (0x00066b9a) loc_type_pane_t1

0xaed7,	// (0x00066bac) loc_type_pane_t2_ParamLimits

0xaed7,	// (0x00066bac) loc_type_pane_t2

0xaee9,	// (0x00066bbe) loc_type_pane_t3_ParamLimits

0xaee9,	// (0x00066bbe) loc_type_pane_t3

0x0002,

0xf301,	// (0x0006afd6) loc_type_pane_t_ParamLimits

0xf301,	// (0x0006afd6) loc_type_pane_t

0xaefb,	// (0x00066bd0) list_loc_req_pane

0xaf05,	// (0x00066bda) scroll_pane_cp012

0x3356,	// (0x0005f02b) list_single_loc_request_popup_menu_pane_ParamLimits

0x3356,	// (0x0005f02b) list_single_loc_request_popup_menu_pane

0xaf10,	// (0x00066be5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf10,	// (0x00066be5) list_single_loc_request_popup_menu_pane_g1

0xaf1c,	// (0x00066bf1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf1c,	// (0x00066bf1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0006afdd) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0006afdd) list_single_loc_request_popup_menu_pane_g

0xaf28,	// (0x00066bfd) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf28,	// (0x00066bfd) list_single_loc_request_popup_menu_pane_t1

0x3368,	// (0x0005f03d) bg_popup_window_pane_cp03_ParamLimits

0x3368,	// (0x0005f03d) bg_popup_window_pane_cp03

0x3376,	// (0x0005f04b) heading_loc_req_pane_ParamLimits

0x3376,	// (0x0005f04b) heading_loc_req_pane

0x3382,	// (0x0005f057) popup_dyc_status_message_window_g1_ParamLimits

0x3382,	// (0x0005f057) popup_dyc_status_message_window_g1

0x338e,	// (0x0005f063) popup_dyc_status_message_window_t1_ParamLimits

0x338e,	// (0x0005f063) popup_dyc_status_message_window_t1

0x33a0,	// (0x0005f075) popup_dyc_status_message_window_t2_ParamLimits

0x33a0,	// (0x0005f075) popup_dyc_status_message_window_t2

0x33b2,	// (0x0005f087) popup_dyc_status_message_window_t3_ParamLimits

0x33b2,	// (0x0005f087) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0006afe2) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0006afe2) popup_dyc_status_message_window_t

0xa511,	// (0x000661e6) bg_heading_pane_cp01

0xaf3e,	// (0x00066c13) heading_loc_req_pane_g1

0xaf46,	// (0x00066c1b) heading_loc_req_pane_g2

0xaf4e,	// (0x00066c23) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0006afe9) heading_loc_req_pane_g

0xaf56,	// (0x00066c2b) heading_loc_req_pane_t1

0xaf65,	// (0x00066c3a) bg_popup_sub_pane_cp01_ParamLimits

0xaf65,	// (0x00066c3a) bg_popup_sub_pane_cp01

0xaf73,	// (0x00066c48) popup_cale_events_window_g1_ParamLimits

0xaf73,	// (0x00066c48) popup_cale_events_window_g1

0xaf93,	// (0x00066c68) popup_cale_events_window_g2_ParamLimits

0xaf93,	// (0x00066c68) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0006b01d) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0006b01d) popup_cale_events_window_g

0xafb3,	// (0x00066c88) popup_cale_events_window_t1_ParamLimits

0xafb3,	// (0x00066c88) popup_cale_events_window_t1

0xafc5,	// (0x00066c9a) popup_cale_events_window_t2_ParamLimits

0xafc5,	// (0x00066c9a) popup_cale_events_window_t2

0xb003,	// (0x00066cd8) popup_cale_events_window_t3_ParamLimits

0xb003,	// (0x00066cd8) popup_cale_events_window_t3

0xb03d,	// (0x00066d12) popup_cale_events_window_t4_ParamLimits

0xb03d,	// (0x00066d12) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0006b022) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0006b022) popup_cale_events_window_t

0x34ab,	// (0x0005f180) call_type_pane

0xb519,	// (0x000671ee) popup_call_status_window_g1

0x34b7,	// (0x0005f18c) popup_call_status_window_g2

0x34c3,	// (0x0005f198) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0006b02b) popup_call_status_window_g

0xb073,	// (0x00066d48) call_type_pane_g1

0xb07c,	// (0x00066d51) call_type_pane_g2

0x0001,

0xf35d,	// (0x0006b032) call_type_pane_g

0xa511,	// (0x000661e6) bg_popup_sub_pane_cp02

0xb085,	// (0x00066d5a) listscroll_popup_wml_pane

0xb08d,	// (0x00066d62) list_wml_pane

0xb097,	// (0x00066d6c) scroll_pane_cp013

0xb0a2,	// (0x00066d77) list_single_graphic_popup_wml_pane_ParamLimits

0xb0a2,	// (0x00066d77) list_single_graphic_popup_wml_pane

0xa886,	// (0x0006655b) list_single_graphic_popup_wml_pane_g1

0xb0b6,	// (0x00066d8b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0006b037) list_single_graphic_popup_wml_pane_g

0xb0be,	// (0x00066d93) list_single_graphic_popup_wml_pane_t1

0xb0d4,	// (0x00066da9) aid_call_pane

0xa764,	// (0x00066439) popup_clock_analogue_window_g1

0xa764,	// (0x00066439) popup_clock_analogue_window_g2

0x34cf,	// (0x0005f1a4) popup_clock_analogue_window_g3

0x34cf,	// (0x0005f1a4) popup_clock_analogue_window_g4

0xa886,	// (0x0006655b) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0006b03c) popup_clock_analogue_window_g

0x34d7,	// (0x0005f1ac) popup_clock_analogue_window_t1

0x34e5,	// (0x0005f1ba) clock_digital_number_pane_ParamLimits

0x34e5,	// (0x0005f1ba) clock_digital_number_pane

0x34f1,	// (0x0005f1c6) clock_digital_number_pane_cp02_ParamLimits

0x34f1,	// (0x0005f1c6) clock_digital_number_pane_cp02

0x34fd,	// (0x0005f1d2) clock_digital_number_pane_cp03_ParamLimits

0x34fd,	// (0x0005f1d2) clock_digital_number_pane_cp03

0x3509,	// (0x0005f1de) clock_digital_number_pane_cp04_ParamLimits

0x3509,	// (0x0005f1de) clock_digital_number_pane_cp04

0x3519,	// (0x0005f1ee) clock_digital_separator_pane_ParamLimits

0x3519,	// (0x0005f1ee) clock_digital_separator_pane

0x3525,	// (0x0005f1fa) popup_clock_digital_window_t1

0xa886,	// (0x0006655b) clock_digital_number_pane_g1

0xa886,	// (0x0006655b) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0006afaa) clock_digital_number_pane_g

0xa886,	// (0x0006655b) clock_digital_separator_pane_g1

0xa886,	// (0x0006655b) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0006afaa) clock_digital_separator_pane_g

0xa511,	// (0x000661e6) bg_popup_window_pane_cp04

0xb0dc,	// (0x00066db1) heading_pane_cp03

0xb0e4,	// (0x00066db9) listscroll_popup_gms_pane

0xb0ec,	// (0x00066dc1) grid_large_graphic_popup_pane

0xb0f6,	// (0x00066dcb) listscroll_popup_gms_pane_g1

0xb0fe,	// (0x00066dd3) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0006b047) listscroll_popup_gms_pane_g

0xab9f,	// (0x00066874) scroll_pane_cp014

0x3542,	// (0x0005f217) cell_large_graphic_popup_pane_ParamLimits

0x3542,	// (0x0005f217) cell_large_graphic_popup_pane

0x355a,	// (0x0005f22f) cell_large_graphic_popup_pane_g1_ParamLimits

0x355a,	// (0x0005f22f) cell_large_graphic_popup_pane_g1

0xb106,	// (0x00066ddb) cell_large_graphic_popup_pane_g2_ParamLimits

0xb106,	// (0x00066ddb) cell_large_graphic_popup_pane_g2

0xb112,	// (0x00066de7) cell_large_graphic_popup_pane_g3_ParamLimits

0xb112,	// (0x00066de7) cell_large_graphic_popup_pane_g3

0xb11f,	// (0x00066df4) cell_large_graphic_popup_pane_g4_ParamLimits

0xb11f,	// (0x00066df4) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0006b04c) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0006b04c) cell_large_graphic_popup_pane_g

0xb12f,	// (0x00066e04) grid_highlight_pane_cp010

0xa886,	// (0x0006655b) bg_popup_call_pane_g1

0xb139,	// (0x00066e0e) list_single_graphic_popup_conf_pane_ParamLimits

0xb139,	// (0x00066e0e) list_single_graphic_popup_conf_pane

0xb14c,	// (0x00066e21) list_highlight_pane_cp01

0xb155,	// (0x00066e2a) list_single_graphic_popup_conf_pane_g1

0xb15d,	// (0x00066e32) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0006b055) list_single_graphic_popup_conf_pane_g

0xb165,	// (0x00066e3a) list_single_graphic_popup_conf_pane_t1

0xb173,	// (0x00066e48) linegrid_cams_pane_g1

0x3566,	// (0x0005f23b) linegrid_cams_pane_g2

0xa9dc,	// (0x000666b1) linegrid_cams_pane_g3

0xb196,	// (0x00066e6b) linegrid_cams_pane_g4

0x356f,	// (0x0005f244) linegrid_cams_pane_g5

0x3578,	// (0x0005f24d) linegrid_cams_pane_g6

0xa9e5,	// (0x000666ba) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0006b05a) linegrid_cams_pane_g

0xb19f,	// (0x00066e74) popup_clock_analogue_window

0xb19f,	// (0x00066e74) popup_clock_digital_window

0xa511,	// (0x000661e6) popup_phob_thumbnail_window

0xa886,	// (0x0006655b) call_video_uplink_pane_g1

0xb1a8,	// (0x00066e7d) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0006b069) call_video_uplink_pane_g

0xb1b0,	// (0x00066e85) video_uplink_pane

0xb1b8,	// (0x00066e8d) mce_image_pane_g1

0x3581,	// (0x0005f256) mce_image_pane_g2

0x358b,	// (0x0005f260) mce_image_pane_g3

0x3593,	// (0x0005f268) mce_image_pane_g4

0x359b,	// (0x0005f270) mce_image_pane_g5

0x0004,

0xf399,	// (0x0006b06e) mce_image_pane_g

0xb1c2,	// (0x00066e97) control_top_pane_stacon_cp01_ParamLimits

0xb1c2,	// (0x00066e97) control_top_pane_stacon_cp01

0xb1d6,	// (0x00066eab) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1d6,	// (0x00066eab) uni_indicator_pane_stacon_cp01

0xb1e7,	// (0x00066ebc) bg_popup_sub_pane_cp03

0xb1f1,	// (0x00066ec6) chi_dic_find_pane

0x35a3,	// (0x0005f278) listscroll_chi_dic_pane

0xb1f9,	// (0x00066ece) main_pane_chidic_g1

0xb201,	// (0x00066ed6) chi_dic_find_pane_t1

0xb20f,	// (0x00066ee4) find_chidic_pane

0xb218,	// (0x00066eed) chi_dic_list_pane_ParamLimits

0xb218,	// (0x00066eed) chi_dic_list_pane

0xb229,	// (0x00066efe) scroll_pane_cp020

0xb231,	// (0x00066f06) find_chidic_pane_t1

0xa511,	// (0x000661e6) input_focus_pane_cp06

0x35b7,	// (0x0005f28c) list_chi_dic_pane_ParamLimits

0x35b7,	// (0x0005f28c) list_chi_dic_pane

0x35d1,	// (0x0005f2a6) list_chi_dic_pane_t1_ParamLimits

0x35d1,	// (0x0005f2a6) list_chi_dic_pane_t1

0xa511,	// (0x000661e6) list_highlight_pane_cp020

0xb240,	// (0x00066f15) bg_cale_heading_pane_g1

0x35e4,	// (0x0005f2b9) bg_cale_heading_pane_g2

0x35ec,	// (0x0005f2c1) bg_cale_heading_pane_g3

0x35f4,	// (0x0005f2c9) bg_cale_heading_pane_g4

0x35fe,	// (0x0005f2d3) bg_cale_heading_pane_g5

0x3608,	// (0x0005f2dd) bg_cale_heading_pane_g6

0x3610,	// (0x0005f2e5) bg_cale_heading_pane_g7

0x3618,	// (0x0005f2ed) bg_cale_heading_pane_g8

0x3622,	// (0x0005f2f7) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0006b079) bg_cale_heading_pane_g

0xb240,	// (0x00066f15) bg_cale_side_pane_g1

0x362c,	// (0x0005f301) bg_cale_side_pane_g2

0x3636,	// (0x0005f30b) bg_cale_side_pane_g3

0x3640,	// (0x0005f315) bg_cale_side_pane_g4

0x364a,	// (0x0005f31f) bg_cale_side_pane_g5

0x3654,	// (0x0005f329) bg_cale_side_pane_g6

0x365e,	// (0x0005f333) bg_cale_side_pane_g7

0x3668,	// (0x0005f33d) bg_cale_side_pane_g8

0x3670,	// (0x0005f345) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0006b08c) bg_cale_side_pane_g

0x3678,	// (0x0005f34d) popup_call_status_window_ParamLimits

0x3678,	// (0x0005f34d) popup_call_status_window

0xb248,	// (0x00066f1d) stacon_top_pane

0xb250,	// (0x00066f25) status_pane_ParamLimits

0xb250,	// (0x00066f25) status_pane

0xb265,	// (0x00066f3a) status_small_pane

0xb26d,	// (0x00066f42) control_pane

0xa511,	// (0x000661e6) stacon_bottom_pane

0xb275,	// (0x00066f4a) list_single_mce_smart_pane_t1_ParamLimits

0xb275,	// (0x00066f4a) list_single_mce_smart_pane_t1

0xb288,	// (0x00066f5d) list_single_mce_smart_pane_t2_ParamLimits

0xb288,	// (0x00066f5d) list_single_mce_smart_pane_t2

0x0001,

0x02c7,	// (0x0005bf9c) list_single_mce_smart_pane_t_ParamLimits

0x02c7,	// (0x0005bf9c) list_single_mce_smart_pane_t

0x3684,	// (0x0005f359) compass_pane

0x3690,	// (0x0005f365) main_location2_pane_t1

0x36a4,	// (0x0005f379) main_location2_pane_t2

0x36b8,	// (0x0005f38d) main_location2_pane_t3

0x0003,

0xf3ca,	// (0x0006b09f) main_location2_pane_t

0xb2a7,	// (0x00066f7c) compass_pane_g1_ParamLimits

0xb2a7,	// (0x00066f7c) compass_pane_g1

0x3702,	// (0x0005f3d7) compass_pane_t1

0x3711,	// (0x0005f3e6) compass_pane_t2

0x0005,

0xf3d3,	// (0x0006b0a8) compass_pane_t

0x375c,	// (0x0005f431) text_secondary_cp61

0xb323,	// (0x00066ff8) navi_pane_cams_g5

0xb39f,	// (0x00067074) navi_pane_im_t1

0xb3ad,	// (0x00067082) navi_pane_mp_g1_ParamLimits

0xb3ad,	// (0x00067082) navi_pane_mp_g1

0xb3c1,	// (0x00067096) navi_pane_mp_g2_ParamLimits

0xb3c1,	// (0x00067096) navi_pane_mp_g2

0xb3cd,	// (0x000670a2) navi_pane_mp_g3_ParamLimits

0xb3cd,	// (0x000670a2) navi_pane_mp_g3

0x0002,

0x02e9,	// (0x0005bfbe) navi_pane_mp_g_ParamLimits

0x02e9,	// (0x0005bfbe) navi_pane_mp_g

0xb3d9,	// (0x000670ae) navi_pane_mp_t1

0xb3e7,	// (0x000670bc) navi_pane_mp_t2

0x0002,

0x02f0,	// (0x0005bfc5) navi_pane_mp_t

0xb452,	// (0x00067127) navi_pane_vt_g1

0xb3d9,	// (0x000670ae) navi_pane_vt_t1

0xb45a,	// (0x0006712f) navi_slider_pane

0xa9f6,	// (0x000666cb) zooming_pane

0xb46a,	// (0x0006713f) navi_slider_pane_g1

0x3797,	// (0x0005f46c) navi_slider_pane_g2

0x0006,

0xf3e0,	// (0x0006b0b5) navi_slider_pane_g

0xb48e,	// (0x00067163) aid_levels_zoom

0xb496,	// (0x0006716b) zooming_pane_g1

0xb49e,	// (0x00067173) zooming_pane_g2

0xb49e,	// (0x00067173) zooming_pane_g3

0x0002,

0x0306,	// (0x0005bfdb) zooming_pane_g

0xb4a6,	// (0x0006717b) level_10_zoom

0xb4af,	// (0x00067184) level_11_zoom

0xb4b8,	// (0x0006718d) level_1_zoom

0xb4c1,	// (0x00067196) level_2_zoom

0xb4ca,	// (0x0006719f) level_3_zoom

0xb4d3,	// (0x000671a8) level_4_zoom

0xb4dc,	// (0x000671b1) level_5_zoom

0xb4e5,	// (0x000671ba) level_6_zoom

0xb4ee,	// (0x000671c3) level_7_zoom

0xb4f7,	// (0x000671cc) level_8_zoom

0xb500,	// (0x000671d5) level_9_zoom

0xb511,	// (0x000671e6) popup_phob_thumbnail_window_g1

0xb527,	// (0x000671fc) popup_phob_thumbnail_window_g2

0x0001,

0xf3ef,	// (0x0006b0c4) popup_phob_thumbnail_window_g

0xc803,	// (0x000684d8) level_1_location

0xc80b,	// (0x000684e0) level_2_location

0xc813,	// (0x000684e8) level_3_location

0xc81b,	// (0x000684f0) level_4_location

0xa9f6,	// (0x000666cb) level_5_location

0x37a9,	// (0x0005f47e) mce_icon_pane_g1

0x37b1,	// (0x0005f486) mce_icon_pane_g2

0x0001,

0xf3f4,	// (0x0006b0c9) mce_icon_pane_g

0x37b9,	// (0x0005f48e) main_mup_pane_g1_ParamLimits

0x37b9,	// (0x0005f48e) main_mup_pane_g1

0x37d1,	// (0x0005f4a6) main_mup_pane_g2_ParamLimits

0x37d1,	// (0x0005f4a6) main_mup_pane_g2

0x37ed,	// (0x0005f4c2) main_mup_pane_g3_ParamLimits

0x37ed,	// (0x0005f4c2) main_mup_pane_g3

0x3809,	// (0x0005f4de) main_mup_pane_g4_ParamLimits

0x3809,	// (0x0005f4de) main_mup_pane_g4

0x3825,	// (0x0005f4fa) main_mup_pane_g5_ParamLimits

0x3825,	// (0x0005f4fa) main_mup_pane_g5

0x3846,	// (0x0005f51b) main_mup_pane_g6_ParamLimits

0x3846,	// (0x0005f51b) main_mup_pane_g6

0x3862,	// (0x0005f537) main_mup_pane_g7_ParamLimits

0x3862,	// (0x0005f537) main_mup_pane_g7

0x387e,	// (0x0005f553) main_mup_pane_g8_ParamLimits

0x387e,	// (0x0005f553) main_mup_pane_g8

0x389e,	// (0x0005f573) main_mup_pane_g9_ParamLimits

0x389e,	// (0x0005f573) main_mup_pane_g9

0x38bd,	// (0x0005f592) main_mup_pane_g10_ParamLimits

0x38bd,	// (0x0005f592) main_mup_pane_g10

0x38dc,	// (0x0005f5b1) main_mup_pane_g11_ParamLimits

0x38dc,	// (0x0005f5b1) main_mup_pane_g11

0x38f4,	// (0x0005f5c9) main_mup_pane_g12_ParamLimits

0x38f4,	// (0x0005f5c9) main_mup_pane_g12

0x3902,	// (0x0005f5d7) main_mup_pane_g13_ParamLimits

0x3902,	// (0x0005f5d7) main_mup_pane_g13

0x000c,

0xf3f9,	// (0x0006b0ce) main_mup_pane_g_ParamLimits

0xf3f9,	// (0x0006b0ce) main_mup_pane_g

0x3918,	// (0x0005f5ed) main_mup_pane_t1_ParamLimits

0x3918,	// (0x0005f5ed) main_mup_pane_t1

0x3935,	// (0x0005f60a) main_mup_pane_t2_ParamLimits

0x3935,	// (0x0005f60a) main_mup_pane_t2

0x394f,	// (0x0005f624) main_mup_pane_t3_ParamLimits

0x394f,	// (0x0005f624) main_mup_pane_t3

0x3969,	// (0x0005f63e) main_mup_pane_t4_ParamLimits

0x3969,	// (0x0005f63e) main_mup_pane_t4

0x397b,	// (0x0005f650) main_mup_pane_t5_ParamLimits

0x397b,	// (0x0005f650) main_mup_pane_t5

0x398d,	// (0x0005f662) main_mup_pane_t6_ParamLimits

0x398d,	// (0x0005f662) main_mup_pane_t6

0x0005,

0xf414,	// (0x0006b0e9) main_mup_pane_t_ParamLimits

0xf414,	// (0x0006b0e9) main_mup_pane_t

0x39a3,	// (0x0005f678) mup_progress_pane_ParamLimits

0x39a3,	// (0x0005f678) mup_progress_pane

0x39af,	// (0x0005f684) mup_visualizer_pane_ParamLimits

0x39af,	// (0x0005f684) mup_visualizer_pane

0x39e9,	// (0x0005f6be) mup_volume_pane_ParamLimits

0x39e9,	// (0x0005f6be) mup_volume_pane

0xb519,	// (0x000671ee) mup_visualizer_pane_g1_ParamLimits

0xb519,	// (0x000671ee) mup_visualizer_pane_g1

0xb519,	// (0x000671ee) mup_visualizer_pane_g2_ParamLimits

0xb519,	// (0x000671ee) mup_visualizer_pane_g2

0xb2a7,	// (0x00066f7c) mup_visualizer_pane_g3_ParamLimits

0xb2a7,	// (0x00066f7c) mup_visualizer_pane_g3

0x0002,

0xf421,	// (0x0006b0f6) mup_visualizer_pane_g_ParamLimits

0xf421,	// (0x0006b0f6) mup_visualizer_pane_g

0xa886,	// (0x0006655b) mup_volume_pane_g1

0xb537,	// (0x0006720c) mup_volume_pane_g2

0x0001,

0xf428,	// (0x0006b0fd) mup_volume_pane_g

0xa886,	// (0x0006655b) mup_progress_pane_g1

0xb540,	// (0x00067215) mup_progress_pane_g2

0xb549,	// (0x0006721e) mup_progress_pane_g3

0x0002,

0xf42d,	// (0x0006b102) mup_progress_pane_g

0xa511,	// (0x000661e6) bg_popup_window_pane_cp05

0xb552,	// (0x00067227) heading_pane_cp02_ParamLimits

0xb552,	// (0x00067227) heading_pane_cp02

0xb56c,	// (0x00067241) list_popup_blid_pane

0xb574,	// (0x00067249) list_blid_sat_info_pane_ParamLimits

0xb574,	// (0x00067249) list_blid_sat_info_pane

0xb587,	// (0x0006725c) list_blid_sat_info_pane_g1

0xb58f,	// (0x00067264) list_blid_sat_info_pane_t1

0x3af6,	// (0x0005f7cb) mup_equalizer_pane_ParamLimits

0x3af6,	// (0x0005f7cb) mup_equalizer_pane

0x3b17,	// (0x0005f7ec) mup_equalizer_pane_cp1_ParamLimits

0x3b17,	// (0x0005f7ec) mup_equalizer_pane_cp1

0x3b38,	// (0x0005f80d) mup_equalizer_pane_cp2_ParamLimits

0x3b38,	// (0x0005f80d) mup_equalizer_pane_cp2

0x3b59,	// (0x0005f82e) mup_equalizer_pane_cp3_ParamLimits

0x3b59,	// (0x0005f82e) mup_equalizer_pane_cp3

0x3b7a,	// (0x0005f84f) mup_equalizer_pane_cp4_ParamLimits

0x3b7a,	// (0x0005f84f) mup_equalizer_pane_cp4

0x3b9b,	// (0x0005f870) mup_equalizer_pane_cp5

0x3bb1,	// (0x0005f886) mup_equalizer_pane_cp6

0x3bc9,	// (0x0005f89e) mup_equalizer_pane_cp7

0xc721,	// (0x000683f6) bg_popup_call_poc_act_pane_g9

0xc729,	// (0x000683fe) bg_popup_call_poc_act_pane_g10

0xc731,	// (0x00068406) bg_popup_call_poc_act_pane_g11

0x000a,

0xa76c,	// (0x00066441) mup_scale_pane

0xa886,	// (0x0006655b) mup_scale_pane_g1

0xb59d,	// (0x00067272) mup_scale_pane_g2

0x0006,

0xf449,	// (0x0006b11e) mup_scale_pane_g

0xb5c1,	// (0x00067296) msg_data_pane

0xb5c9,	// (0x0006729e) scroll_pane_cp017

0x3bf3,	// (0x0005f8c8) bg_list_pane_cp04_ParamLimits

0x3bf3,	// (0x0005f8c8) bg_list_pane_cp04

0xb5d1,	// (0x000672a6) msg_data_pane_g1

0x3c0f,	// (0x0005f8e4) msg_data_pane_g2

0x3c19,	// (0x0005f8ee) msg_data_pane_g3

0x3c21,	// (0x0005f8f6) msg_data_pane_g4

0x3c29,	// (0x0005f8fe) msg_data_pane_g5

0x3c31,	// (0x0005f906) msg_data_pane_g6

0x3c39,	// (0x0005f90e) msg_data_pane_g7

0x0006,

0xf458,	// (0x0006b12d) msg_data_pane_g

0x3c41,	// (0x0005f916) msg_text_pane_ParamLimits

0x3c41,	// (0x0005f916) msg_text_pane

0x3c81,	// (0x0005f956) qrid_highlight_pane_cp011_ParamLimits

0x3c81,	// (0x0005f956) qrid_highlight_pane_cp011

0xa511,	// (0x000661e6) msg_body_pane

0xa511,	// (0x000661e6) msg_header_pane

0xb5e2,	// (0x000672b7) input_focus_pane_cp07

0x3ca7,	// (0x0005f97c) msg_header_pane_t1_ParamLimits

0x3ca7,	// (0x0005f97c) msg_header_pane_t1

0x9f74,	// (0x00065c49) msg_header_pane_t2_ParamLimits

0x9f74,	// (0x00065c49) msg_header_pane_t2

0x0001,

0xf46c,	// (0x0006b141) msg_header_pane_t_ParamLimits

0xf46c,	// (0x0006b141) msg_header_pane_t

0xb5f7,	// (0x000672cc) msg_body_pane_g1

0x3cb9,	// (0x0005f98e) msg_body_pane_t1_ParamLimits

0x3cb9,	// (0x0005f98e) msg_body_pane_t1

0x9f86,	// (0x00065c5b) msg_body_pane_t2_ParamLimits

0x9f86,	// (0x00065c5b) msg_body_pane_t2

0x9f98,	// (0x00065c6d) msg_body_pane_t3_ParamLimits

0x9f98,	// (0x00065c6d) msg_body_pane_t3

0x0002,

0xf471,	// (0x0006b146) msg_body_pane_t_ParamLimits

0xf471,	// (0x0006b146) msg_body_pane_t

0x3d3c,	// (0x0005fa11) main_viewer_pane_g1_ParamLimits

0x3d3c,	// (0x0005fa11) main_viewer_pane_g1

0x3d48,	// (0x0005fa1d) main_viewer_pane_g2_ParamLimits

0x3d48,	// (0x0005fa1d) main_viewer_pane_g2

0x3d54,	// (0x0005fa29) main_viewer_pane_g3_ParamLimits

0x3d54,	// (0x0005fa29) main_viewer_pane_g3

0x3d65,	// (0x0005fa3a) main_viewer_pane_g4_ParamLimits

0x3d65,	// (0x0005fa3a) main_viewer_pane_g4

0x3d76,	// (0x0005fa4b) main_viewer_pane_g5_ParamLimits

0x3d76,	// (0x0005fa4b) main_viewer_pane_g5

0x3d76,	// (0x0005fa4b) main_viewer_pane_g7_ParamLimits

0x3d76,	// (0x0005fa4b) main_viewer_pane_g7

0xaf10,	// (0x00066be5) main_viewer_pane_g8_ParamLimits

0xaf10,	// (0x00066be5) main_viewer_pane_g8

0x0007,

0xf481,	// (0x0006b156) main_viewer_pane_g_ParamLimits

0xf481,	// (0x0006b156) main_viewer_pane_g

0xb5ff,	// (0x000672d4) viewer_content_pane_ParamLimits

0xb5ff,	// (0x000672d4) viewer_content_pane

0x3db4,	// (0x0005fa89) main_postcard_pane_g1_ParamLimits

0x3db4,	// (0x0005fa89) main_postcard_pane_g1

0x3dc2,	// (0x0005fa97) main_postcard_pane_g2_ParamLimits

0x3dc2,	// (0x0005fa97) main_postcard_pane_g2

0x3dd0,	// (0x0005faa5) main_postcard_pane_g3_ParamLimits

0x3dd0,	// (0x0005faa5) main_postcard_pane_g3

0x0005,

0xf492,	// (0x0006b167) main_postcard_pane_g_ParamLimits

0xf492,	// (0x0006b167) main_postcard_pane_g

0x3de0,	// (0x0005fab5) main_postcard_pane_g4

0xc8f0,	// (0x000685c5) smil_status_volume_pane_g2

0x3e0c,	// (0x0005fae1) postcard_pane_ParamLimits

0x3e0c,	// (0x0005fae1) postcard_pane

0xb519,	// (0x000671ee) postcard_pane_g1_ParamLimits

0xb519,	// (0x000671ee) postcard_pane_g1

0x3e3e,	// (0x0005fb13) postcard_pane_g2_ParamLimits

0x3e3e,	// (0x0005fb13) postcard_pane_g2

0x3e4a,	// (0x0005fb1f) postcard_pane_g3_ParamLimits

0x3e4a,	// (0x0005fb1f) postcard_pane_g3

0xb60d,	// (0x000672e2) postcard_pane_g4_ParamLimits

0xb60d,	// (0x000672e2) postcard_pane_g4

0x3e56,	// (0x0005fb2b) postcard_pane_g5_ParamLimits

0x3e56,	// (0x0005fb2b) postcard_pane_g5

0x3e62,	// (0x0005fb37) postcard_pane_g6_ParamLimits

0x3e62,	// (0x0005fb37) postcard_pane_g6

0xb61b,	// (0x000672f0) postcard_pane_g7_ParamLimits

0xb61b,	// (0x000672f0) postcard_pane_g7

0x0006,

0xf49f,	// (0x0006b174) postcard_pane_g_ParamLimits

0xf49f,	// (0x0006b174) postcard_pane_g

0x3e6e,	// (0x0005fb43) main_mp2_pane_g1_ParamLimits

0x3e6e,	// (0x0005fb43) main_mp2_pane_g1

0x3e7a,	// (0x0005fb4f) main_mp2_pane_g2_ParamLimits

0x3e7a,	// (0x0005fb4f) main_mp2_pane_g2

0x3e86,	// (0x0005fb5b) main_mp2_pane_g3_ParamLimits

0x3e86,	// (0x0005fb5b) main_mp2_pane_g3

0x0002,

0xf4ae,	// (0x0006b183) main_mp2_pane_g_ParamLimits

0xf4ae,	// (0x0006b183) main_mp2_pane_g

0x3e92,	// (0x0005fb67) main_mp2_pane_t1_ParamLimits

0x3e92,	// (0x0005fb67) main_mp2_pane_t1

0x3ea9,	// (0x0005fb7e) main_mp2_pane_t2_ParamLimits

0x3ea9,	// (0x0005fb7e) main_mp2_pane_t2

0x3ebd,	// (0x0005fb92) main_mp2_pane_t3_ParamLimits

0x3ebd,	// (0x0005fb92) main_mp2_pane_t3

0x0002,

0xf4b5,	// (0x0006b18a) main_mp2_pane_t_ParamLimits

0xf4b5,	// (0x0006b18a) main_mp2_pane_t

0xb629,	// (0x000672fe) pec_content_pane_ParamLimits

0xb629,	// (0x000672fe) pec_content_pane

0xab9f,	// (0x00066874) scroll_pane_cp015

0xb63b,	// (0x00067310) pec_attribute_pane_ParamLimits

0xb63b,	// (0x00067310) pec_attribute_pane

0x3ecf,	// (0x0005fba4) pec_content_pane_g1_ParamLimits

0x3ecf,	// (0x0005fba4) pec_content_pane_g1

0xb64b,	// (0x00067320) pec_content_pane_t1_ParamLimits

0xb64b,	// (0x00067320) pec_content_pane_t1

0xb65d,	// (0x00067332) pec_content_pane_t2_ParamLimits

0xb65d,	// (0x00067332) pec_content_pane_t2

0x0001,

0x03da,	// (0x0005c0af) pec_content_pane_t_ParamLimits

0x03da,	// (0x0005c0af) pec_content_pane_t

0x3edb,	// (0x0005fbb0) list_single_graphic_pane_cp01_ParamLimits

0x3edb,	// (0x0005fbb0) list_single_graphic_pane_cp01

0xa76c,	// (0x00066441) bg_popup_sub_pane_cp04

0xb66f,	// (0x00067344) popup_mup_playback_window_g1

0xb67b,	// (0x00067350) popup_mup_playback_window_t1

0xb690,	// (0x00067365) popup_mup_playback_window_t2

0x0001,

0x03df,	// (0x0005c0b4) popup_mup_playback_window_t

0xb6c7,	// (0x0006739c) main_image_pane_g1_ParamLimits

0xb6c7,	// (0x0006739c) main_image_pane_g1

0xb70a,	// (0x000673df) scroll_pane_cp018_ParamLimits

0xb70a,	// (0x000673df) scroll_pane_cp018

0xb722,	// (0x000673f7) scroll_pane_cp016_ParamLimits

0xb722,	// (0x000673f7) scroll_pane_cp016

0x3f74,	// (0x0005fc49) smil2_image_pane_ParamLimits

0x3f74,	// (0x0005fc49) smil2_image_pane

0x3fa4,	// (0x0005fc79) smil2_root_pane_ParamLimits

0x3fa4,	// (0x0005fc79) smil2_root_pane

0x3fd0,	// (0x0005fca5) smil2_text_pane_ParamLimits

0x3fd0,	// (0x0005fca5) smil2_text_pane

0xa511,	// (0x000661e6) bg_list_pane_cp06

0xb75e,	// (0x00067433) grid_radio_pane

0xa511,	// (0x000661e6) bg_popup_window_pane_cp06

0xb766,	// (0x0006743b) main_fmradio_pane_t1

0xb0dc,	// (0x00066db1) heading_pane_cp04

0xb774,	// (0x00067449) main_fmradio_pane_t2

0xc739,	// (0x0006840e) popup_cale_lunar_info_window_g1

0xb782,	// (0x00067457) main_fmradio_pane_t3

0xc741,	// (0x00068416) popup_cale_lunar_info_window_g2

0xb790,	// (0x00067465) main_fmradio_pane_t4

0x0001,

0xb79e,	// (0x00067473) main_fmradio_pane_t5

0x0004,

0x04ba,	// (0x0005c18f) popup_cale_lunar_info_window_g

0x03f4,	// (0x0005c0c9) main_fmradio_pane_t

0xb7ac,	// (0x00067481) wait_bar_pane_cp03

0xb7b4,	// (0x00067489) cell_fmradio_pane_ParamLimits

0xb7b4,	// (0x00067489) cell_fmradio_pane

0xb61b,	// (0x000672f0) cell_fmradio_pane_g1_ParamLimits

0xb61b,	// (0x000672f0) cell_fmradio_pane_g1

0xa511,	// (0x000661e6) grid_highlight_pane_cp011

0xb7c7,	// (0x0006749c) poc_content_pane_ParamLimits

0xb7c7,	// (0x0006749c) poc_content_pane

0xb7d9,	// (0x000674ae) scroll_pane_cp019

0x4010,	// (0x0005fce5) popup_call_poc_act_window_ParamLimits

0x4010,	// (0x0005fce5) popup_call_poc_act_window

0x401d,	// (0x0005fcf2) popup_call_poc_inact_window_ParamLimits

0x401d,	// (0x0005fcf2) popup_call_poc_inact_window

0x0491,	// (0x0005c166) bg_popup_call_poc_act_pane_g

0xc6b1,	// (0x00068386) bg_popup_call_poc_inact_pane_g1

0xc6b9,	// (0x0006838e) bg_popup_call_poc_inact_pane_g2

0xb7e1,	// (0x000674b6) popup_call_poc_act_window_g2

0xc6c1,	// (0x00068396) bg_popup_call_poc_inact_pane_g3

0xc6c9,	// (0x0006839e) bg_popup_call_poc_inact_pane_g4

0xc6d1,	// (0x000683a6) bg_popup_call_poc_inact_pane_g5

0xb7e9,	// (0x000674be) popup_call_poc_act_window_t1_ParamLimits

0xb7e9,	// (0x000674be) popup_call_poc_act_window_t1

0xb811,	// (0x000674e6) popup_call_poc_act_window_t2_ParamLimits

0xb811,	// (0x000674e6) popup_call_poc_act_window_t2

0xb839,	// (0x0006750e) popup_call_poc_act_window_t3_ParamLimits

0xb839,	// (0x0006750e) popup_call_poc_act_window_t3

0xb861,	// (0x00067536) popup_call_poc_act_window_t4_ParamLimits

0xb861,	// (0x00067536) popup_call_poc_act_window_t4

0x0003,

0x03ff,	// (0x0005c0d4) popup_call_poc_act_window_t_ParamLimits

0x03ff,	// (0x0005c0d4) popup_call_poc_act_window_t

0xc6d9,	// (0x000683ae) bg_popup_call_poc_inact_pane_g6

0xc6e1,	// (0x000683b6) bg_popup_call_poc_inact_pane_g7

0xc6e9,	// (0x000683be) bg_popup_call_poc_inact_pane_g8

0xb873,	// (0x00067548) popup_call_poc_inact_window_g2

0xc6f1,	// (0x000683c6) bg_popup_call_poc_inact_pane_g9

0x0008,

0x047e,	// (0x0005c153) bg_popup_call_poc_inact_pane_g

0xb87b,	// (0x00067550) popup_call_poc_inact_window_t1_ParamLimits

0xb87b,	// (0x00067550) popup_call_poc_inact_window_t1

0xb890,	// (0x00067565) popup_call_poc_inact_window_t2_ParamLimits

0xb890,	// (0x00067565) popup_call_poc_inact_window_t2

0xb8a5,	// (0x0006757a) popup_call_poc_inact_window_t3_ParamLimits

0xb8a5,	// (0x0006757a) popup_call_poc_inact_window_t3

0x0002,

0x0408,	// (0x0005c0dd) popup_call_poc_inact_window_t_ParamLimits

0x0408,	// (0x0005c0dd) popup_call_poc_inact_window_t

0xc876,	// (0x0006854b) context_pane_ParamLimits

0x465f,	// (0x00060334) signal_pane_ParamLimits

0xa9f6,	// (0x000666cb) main_call2_pane

0x45d2,	// (0x000602a7) popup_phob_thumbnail2_window_ParamLimits

0x45d2,	// (0x000602a7) popup_phob_thumbnail2_window

0x3cea,	// (0x0005f9bf) aid_hotspot_pointer_arrow_pane

0x3cf2,	// (0x0005f9c7) aid_hotspot_pointer_hand_pane

0x433f,	// (0x00060014) phob_pre_status_pane_g5

0x1d7c,	// (0x0005da51) cams_zoom_pane_ParamLimits

0x1d88,	// (0x0005da5d) image_vga_pane_ParamLimits

0x1d97,	// (0x0005da6c) main_camera_pane_g1_ParamLimits

0x1da5,	// (0x0005da7a) main_camera_pane_g2_ParamLimits

0x1db1,	// (0x0005da86) main_camera_pane_g3_ParamLimits

0x1dbd,	// (0x0005da92) main_camera_pane_g4_ParamLimits

0x1dc9,	// (0x0005da9e) main_camera_pane_g5_ParamLimits

0x1dd5,	// (0x0005daaa) main_camera_pane_g6_ParamLimits

0x1de1,	// (0x0005dab6) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0006aedf) main_camera_pane_g_ParamLimits

0x1ded,	// (0x0005dac2) main_camera_pane_t1_ParamLimits

0x1dff,	// (0x0005dad4) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0006aef0) main_camera_pane_t_ParamLimits

0xa76c,	// (0x00066441) bg_popup_preview_window_pane_cp01_ParamLimits

0xa76c,	// (0x00066441) bg_popup_preview_window_pane_cp01

0xb8ba,	// (0x0006758f) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ba,	// (0x0006758f) popup_phob_thumbnail2_window_g1

0xa511,	// (0x000661e6) call2_cli_visual_pane

0x4039,	// (0x0005fd0e) popup_call2_audio_conf_window_ParamLimits

0x4039,	// (0x0005fd0e) popup_call2_audio_conf_window

0x404e,	// (0x0005fd23) popup_call2_audio_first_window_ParamLimits

0x404e,	// (0x0005fd23) popup_call2_audio_first_window

0x40ec,	// (0x0005fdc1) popup_call2_audio_in_window_ParamLimits

0x40ec,	// (0x0005fdc1) popup_call2_audio_in_window

0x412e,	// (0x0005fe03) popup_call2_audio_out_window_ParamLimits

0x412e,	// (0x0005fe03) popup_call2_audio_out_window

0x4190,	// (0x0005fe65) popup_call2_audio_second_window_ParamLimits

0x4190,	// (0x0005fe65) popup_call2_audio_second_window

0x41ee,	// (0x0005fec3) popup_call2_audio_wait_window_ParamLimits

0x41ee,	// (0x0005fec3) popup_call2_audio_wait_window

0xa511,	// (0x000661e6) bg_popup_call2_act_pane_cp03

0xa74e,	// (0x00066423) list_conf_pane_cp

0xb8c6,	// (0x0006759b) popup_call2_audio_conf_window_t1

0xb139,	// (0x00066e0e) list_single_graphic_popup_conf2_pane_ParamLimits

0xb139,	// (0x00066e0e) list_single_graphic_popup_conf2_pane

0xb14c,	// (0x00066e21) list_highlight_pane_cp04

0xb8d4,	// (0x000675a9) list_single_graphic_popup_conf2_pane_g1

0xb15d,	// (0x00066e32) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4cc,	// (0x0006b1a1) list_single_graphic_popup_conf2_pane_g

0xb8de,	// (0x000675b3) list_single_graphic_popup_conf2_pane_t1

0xb8ec,	// (0x000675c1) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8ec,	// (0x000675c1) bg_popup_call2_act_pane_cp01

0xb976,	// (0x0006764b) call_type_pane_cp05_ParamLimits

0xb976,	// (0x0006764b) call_type_pane_cp05

0xb9ca,	// (0x0006769f) popup_call2_audio_second_window_g1_ParamLimits

0xb9ca,	// (0x0006769f) popup_call2_audio_second_window_g1

0xba1e,	// (0x000676f3) popup_call2_audio_second_window_g2_ParamLimits

0xba1e,	// (0x000676f3) popup_call2_audio_second_window_g2

0x0002,

0x0414,	// (0x0005c0e9) popup_call2_audio_second_window_g_ParamLimits

0x0414,	// (0x0005c0e9) popup_call2_audio_second_window_g

0xba83,	// (0x00067758) popup_call2_audio_second_window_t1_ParamLimits

0xba83,	// (0x00067758) popup_call2_audio_second_window_t1

0xbb3e,	// (0x00067813) popup_call2_audio_second_window_t2_ParamLimits

0xbb3e,	// (0x00067813) popup_call2_audio_second_window_t2

0xbb91,	// (0x00067866) popup_call2_audio_second_window_t3_ParamLimits

0xbb91,	// (0x00067866) popup_call2_audio_second_window_t3

0x0003,

0x041b,	// (0x0005c0f0) popup_call2_audio_second_window_t_ParamLimits

0x041b,	// (0x0005c0f0) popup_call2_audio_second_window_t

0xa511,	// (0x000661e6) bg_popup_call2_in_pane_cp02

0xa51b,	// (0x000661f0) call_type_pane_cp04

0xa523,	// (0x000661f8) popup_call2_audio_wait_window_g1

0xa52b,	// (0x00066200) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006adce) popup_call2_audio_wait_window_g

0xa533,	// (0x00066208) popup_call2_audio_wait_window_t3

0xbc84,	// (0x00067959) bg_popup_call2_act_pane_ParamLimits

0xbc84,	// (0x00067959) bg_popup_call2_act_pane

0xbd44,	// (0x00067a19) call_type_pane_cp03_ParamLimits

0xbd44,	// (0x00067a19) call_type_pane_cp03

0xbda8,	// (0x00067a7d) popup_call2_audio_first_window_g1_ParamLimits

0xbda8,	// (0x00067a7d) popup_call2_audio_first_window_g1

0xbe18,	// (0x00067aed) popup_call2_audio_first_window_g2_ParamLimits

0xbe18,	// (0x00067aed) popup_call2_audio_first_window_g2

0xb519,	// (0x000671ee) popup_call2_audio_first_window_g3_ParamLimits

0xb519,	// (0x000671ee) popup_call2_audio_first_window_g3

0x0004,

0xf4d1,	// (0x0006b1a6) popup_call2_audio_first_window_g_ParamLimits

0xf4d1,	// (0x0006b1a6) popup_call2_audio_first_window_g

0xbef6,	// (0x00067bcb) popup_call2_audio_first_window_t1_ParamLimits

0xbef6,	// (0x00067bcb) popup_call2_audio_first_window_t1

0xbff9,	// (0x00067cce) popup_call2_audio_first_window_t4_ParamLimits

0xbff9,	// (0x00067cce) popup_call2_audio_first_window_t4

0xc0dc,	// (0x00067db1) popup_call2_audio_first_window_t5_ParamLimits

0xc0dc,	// (0x00067db1) popup_call2_audio_first_window_t5

0x0003,

0x042f,	// (0x0005c104) popup_call2_audio_first_window_t_ParamLimits

0x042f,	// (0x0005c104) popup_call2_audio_first_window_t

0xa764,	// (0x00066439) bg_popup_call2_act_pane_g1

0xc749,	// (0x0006841e) popup_cale_lunar_info_window_t1

0xc757,	// (0x0006842c) popup_cale_lunar_info_window_t2

0xc765,	// (0x0006843a) popup_cale_lunar_info_window_t3

0xa511,	// (0x000661e6) bg_popup_call2_bubble_pane

0xc1dd,	// (0x00067eb2) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1dd,	// (0x00067eb2) bg_popup_call2_in_pane_cp01

0x9d03,	// (0x000659d8) call_type_pane_cp02

0xc225,	// (0x00067efa) popup_call2_audio_out_window_g1_ParamLimits

0xc225,	// (0x00067efa) popup_call2_audio_out_window_g1

0xc251,	// (0x00067f26) popup_call2_audio_out_window_g2_ParamLimits

0xc251,	// (0x00067f26) popup_call2_audio_out_window_g2

0xc279,	// (0x00067f4e) popup_call2_audio_out_window_g3_ParamLimits

0xc279,	// (0x00067f4e) popup_call2_audio_out_window_g3

0x0003,

0x0438,	// (0x0005c10d) popup_call2_audio_out_window_g_ParamLimits

0x0438,	// (0x0005c10d) popup_call2_audio_out_window_g

0xc2b4,	// (0x00067f89) popup_call2_audio_out_window_t1_ParamLimits

0xc2b4,	// (0x00067f89) popup_call2_audio_out_window_t1

0xc313,	// (0x00067fe8) popup_call2_audio_out_window_t2_ParamLimits

0xc313,	// (0x00067fe8) popup_call2_audio_out_window_t2

0xc367,	// (0x0006803c) popup_call2_audio_out_window_t3_ParamLimits

0xc367,	// (0x0006803c) popup_call2_audio_out_window_t3

0xc37d,	// (0x00068052) popup_call2_audio_out_window_t4_ParamLimits

0xc37d,	// (0x00068052) popup_call2_audio_out_window_t4

0xc393,	// (0x00068068) popup_call2_audio_out_window_t5_ParamLimits

0xc393,	// (0x00068068) popup_call2_audio_out_window_t5

0x0005,

0x0441,	// (0x0005c116) popup_call2_audio_out_window_t_ParamLimits

0x0441,	// (0x0005c116) popup_call2_audio_out_window_t

0xc3f7,	// (0x000680cc) bg_popup_call2_in_pane_ParamLimits

0xc3f7,	// (0x000680cc) bg_popup_call2_in_pane

0xc453,	// (0x00068128) popup_call2_audio_in_window_g1_ParamLimits

0xc453,	// (0x00068128) popup_call2_audio_in_window_g1

0xc48b,	// (0x00068160) popup_call2_audio_in_window_g2_ParamLimits

0xc48b,	// (0x00068160) popup_call2_audio_in_window_g2

0xc4c3,	// (0x00068198) popup_call2_audio_in_window_g3_ParamLimits

0xc4c3,	// (0x00068198) popup_call2_audio_in_window_g3

0x0003,

0x044e,	// (0x0005c123) popup_call2_audio_in_window_g_ParamLimits

0x044e,	// (0x0005c123) popup_call2_audio_in_window_g

0xc51b,	// (0x000681f0) popup_call2_audio_in_window_t1_ParamLimits

0xc51b,	// (0x000681f0) popup_call2_audio_in_window_t1

0xc59b,	// (0x00068270) popup_call2_audio_in_window_t2_ParamLimits

0xc59b,	// (0x00068270) popup_call2_audio_in_window_t2

0xc61b,	// (0x000682f0) popup_call2_audio_in_window_t3_ParamLimits

0xc61b,	// (0x000682f0) popup_call2_audio_in_window_t3

0xc635,	// (0x0006830a) popup_call2_audio_in_window_t4_ParamLimits

0xc635,	// (0x0006830a) popup_call2_audio_in_window_t4

0xc647,	// (0x0006831c) popup_call2_audio_in_window_t5_ParamLimits

0xc647,	// (0x0006831c) popup_call2_audio_in_window_t5

0xc65c,	// (0x00068331) popup_call2_audio_in_window_t6_ParamLimits

0xc65c,	// (0x00068331) popup_call2_audio_in_window_t6

0x0005,

0x0457,	// (0x0005c12c) popup_call2_audio_in_window_t_ParamLimits

0x0457,	// (0x0005c12c) popup_call2_audio_in_window_t

0xa764,	// (0x00066439) bg_popup_call2_in_pane_g1

0xc773,	// (0x00068448) popup_cale_lunar_info_window_t4

0x0003,

0x04bf,	// (0x0005c194) popup_cale_lunar_info_window_t

0xa76c,	// (0x00066441) bg_popup_call2_rect_pane_ParamLimits

0xa76c,	// (0x00066441) bg_popup_call2_rect_pane

0xa511,	// (0x000661e6) call2_cli_visual_graphic_pane

0xa511,	// (0x000661e6) call2_cli_visual_text_pane

0x4705,	// (0x000603da) smil_status_volume_pane_g3

0x0002,

0xa886,	// (0x0006655b) call2_cli_visual_graphic_pane_g1

0xa886,	// (0x0006655b) call2_cli_visual_graphic_pane_g2

0xa886,	// (0x0006655b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4dc,	// (0x0006b1b1) call2_cli_visual_graphic_pane_g

0xc671,	// (0x00068346) bg_popup_call2_rect_pane_g1

0xa912,	// (0x000665e7) bg_popup_call2_rect_pane_g2

0xc679,	// (0x0006834e) bg_popup_call2_rect_pane_g3

0xc681,	// (0x00068356) bg_popup_call2_rect_pane_g4

0xc689,	// (0x0006835e) bg_popup_call2_rect_pane_g5

0xc691,	// (0x00068366) bg_popup_call2_rect_pane_g6

0xc699,	// (0x0006836e) bg_popup_call2_rect_pane_g7

0xc6a1,	// (0x00068376) bg_popup_call2_rect_pane_g8

0xc6a9,	// (0x0006837e) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e3,	// (0x0006b1b8) bg_popup_call2_rect_pane_g

0xc6b1,	// (0x00068386) bg_popup_call2_bubble_pane_g1

0xc6b9,	// (0x0006838e) bg_popup_call2_bubble_pane_g2

0xc6c1,	// (0x00068396) bg_popup_call2_bubble_pane_g3

0xc6c9,	// (0x0006839e) bg_popup_call2_bubble_pane_g4

0xc6d1,	// (0x000683a6) bg_popup_call2_bubble_pane_g5

0xc6d9,	// (0x000683ae) bg_popup_call2_bubble_pane_g6

0xc6e1,	// (0x000683b6) bg_popup_call2_bubble_pane_g7

0xc6e9,	// (0x000683be) bg_popup_call2_bubble_pane_g8

0xc6f1,	// (0x000683c6) bg_popup_call2_bubble_pane_g9

0x0008,

0x047e,	// (0x0005c153) bg_popup_call2_bubble_pane_g

0x17ad,	// (0x0005d482) aid_cale_week_size_cell_pane

0x1e11,	// (0x0005dae6) aid_cams_cif_uncrop_pane_ParamLimits

0x1e11,	// (0x0005dae6) aid_cams_cif_uncrop_pane

0x1f6c,	// (0x0005dc41) aid_cams_size_cell_ParamLimits

0x1f6c,	// (0x0005dc41) aid_cams_size_cell

0x1f78,	// (0x0005dc4d) grid_cams_pane_ParamLimits

0x1f86,	// (0x0005dc5b) linegrid_cams_pane_ParamLimits

0x216a,	// (0x0005de3f) call_video_pane_t1

0x218b,	// (0x0005de60) call_video_pane_t2

0x0001,

0xf26e,	// (0x0006af43) call_video_pane_t

0x26d4,	// (0x0005e3a9) aid_cale_month_size_cell_pane_ParamLimits

0x26d4,	// (0x0005e3a9) aid_cale_month_size_cell_pane

0xf526,	// (0x0006b1fb) smil_status_volume_pane_g

0x4712,	// (0x000603e7) volume_smil_pane_ParamLimits

0x0ef6,	// (0x0005cbcb) aid_popup2_width_pane

0x16a1,	// (0x0005d376) cell_qdial_pane_g4_ParamLimits

0x16a1,	// (0x0005d376) cell_qdial_pane_g4

0x36de,	// (0x0005f3b3) aid_blid_cardinal_pane_ParamLimits

0x36ee,	// (0x0005f3c3) aid_blid_destination_pane_ParamLimits

0x36ee,	// (0x0005f3c3) aid_blid_destination_pane

0xa76c,	// (0x00066441) bg_popup_call_poc_act_pane_ParamLimits

0xa76c,	// (0x00066441) bg_popup_call_poc_act_pane

0xa76c,	// (0x00066441) bg_popup_call_poc_inact_pane_ParamLimits

0xa76c,	// (0x00066441) bg_popup_call_poc_inact_pane

0xc6f9,	// (0x000683ce) bg_popup_call_poc_act_pane_g1

0xc701,	// (0x000683d6) bg_popup_call_poc_act_pane_g2

0xc709,	// (0x000683de) bg_popup_call_poc_act_pane_g3

0xc6c9,	// (0x0006839e) bg_popup_call_poc_act_pane_g4

0xc6d1,	// (0x000683a6) bg_popup_call_poc_act_pane_g5

0xc711,	// (0x000683e6) bg_popup_call_poc_act_pane_g6

0xc6e1,	// (0x000683b6) bg_popup_call_poc_act_pane_g7

0xc719,	// (0x000683ee) bg_popup_call_poc_act_pane_g8

0xa511,	// (0x000661e6) main_usb_pane

0x4501,	// (0x000601d6) popup_cale_lunar_info_window

0x24b6,	// (0x0005e18b) im_reading_pane_t1_ParamLimits

0xaaf7,	// (0x000667cc) list_im_pane_ParamLimits

0xab08,	// (0x000667dd) scroll_pane_cp07_ParamLimits

0xa511,	// (0x000661e6) grid_highlight_pane_cp012

0xa76c,	// (0x00066441) mup_scale_pane_ParamLimits

0xb519,	// (0x000671ee) main_usb_pane_g1_ParamLimits

0xb519,	// (0x000671ee) main_usb_pane_g1

0x4262,	// (0x0005ff37) main_usb_pane_g2_ParamLimits

0x4262,	// (0x0005ff37) main_usb_pane_g2

0x0001,

0xf4f6,	// (0x0006b1cb) main_usb_pane_g_ParamLimits

0xf4f6,	// (0x0006b1cb) main_usb_pane_g

0x426e,	// (0x0005ff43) main_usb_pane_t1_ParamLimits

0x426e,	// (0x0005ff43) main_usb_pane_t1

0x4280,	// (0x0005ff55) main_usb_pane_t2_ParamLimits

0x4280,	// (0x0005ff55) main_usb_pane_t2

0x4292,	// (0x0005ff67) main_usb_pane_t3_ParamLimits

0x4292,	// (0x0005ff67) main_usb_pane_t3

0x42a4,	// (0x0005ff79) main_usb_pane_t4_ParamLimits

0x42a4,	// (0x0005ff79) main_usb_pane_t4

0x42b6,	// (0x0005ff8b) main_usb_pane_t5_ParamLimits

0x42b6,	// (0x0005ff8b) main_usb_pane_t5

0x42c8,	// (0x0005ff9d) main_usb_pane_t6_ParamLimits

0x42c8,	// (0x0005ff9d) main_usb_pane_t6

0x0005,

0xf4fb,	// (0x0006b1d0) main_usb_pane_t_ParamLimits

0x3684,	// (0x0005f359) aid_text_placing

0x3690,	// (0x0005f365) main_location2_pane_t1_ParamLimits

0x36a4,	// (0x0005f379) main_location2_pane_t2_ParamLimits

0x36b8,	// (0x0005f38d) main_location2_pane_t3_ParamLimits

0x36cc,	// (0x0005f3a1) main_location2_pane_t4_ParamLimits

0x36cc,	// (0x0005f3a1) main_location2_pane_t4

0xf3ca,	// (0x0006b09f) main_location2_pane_t_ParamLimits

0xa7a8,	// (0x0006647d) find_pinb_pane_g2_ParamLimits

0xa7a8,	// (0x0006647d) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0006adf4) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0006adf4) find_pinb_pane_g

0xa7b4,	// (0x00066489) find_pinb_pane_t1_ParamLimits

0xa7c6,	// (0x0006649b) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0006adf9) find_pinb_pane_t_ParamLimits

0xa511,	// (0x000661e6) main_call3_pane

0x2c28,	// (0x0005e8fd) cale_month_day_heading_pane_t1_ParamLimits

0x2cae,	// (0x0005e983) cale_month_day_heading_pane_t2_ParamLimits

0x2d3f,	// (0x0005ea14) cale_month_day_heading_pane_t3_ParamLimits

0x2dd0,	// (0x0005eaa5) cale_month_day_heading_pane_t4_ParamLimits

0x2e61,	// (0x0005eb36) cale_month_day_heading_pane_t5_ParamLimits

0x2ef2,	// (0x0005ebc7) cale_month_day_heading_pane_t6_ParamLimits

0x2f83,	// (0x0005ec58) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006af7b) cale_month_day_heading_pane_t_ParamLimits

0xad52,	// (0x00066a27) smil_status_volume_pane

0x3e26,	// (0x0005fafb) postcard_address_pane_ParamLimits

0x3e26,	// (0x0005fafb) postcard_address_pane

0x3e32,	// (0x0005fb07) postcard_message_pane_ParamLimits

0x3e32,	// (0x0005fb07) postcard_message_pane

0x422d,	// (0x0005ff02) call2_cli_visual_pane_t1_ParamLimits

0x422d,	// (0x0005ff02) call2_cli_visual_pane_t1

0x4869,	// (0x0006053e) postcard_message_pane_t1_ParamLimits

0x4869,	// (0x0006053e) postcard_message_pane_t1

0x4852,	// (0x00060527) postcard_address_pane_t1_ParamLimits

0x4852,	// (0x00060527) postcard_address_pane_t1

0x4843,	// (0x00060518) popup_call3_audio_in_window_ParamLimits

0x4843,	// (0x00060518) popup_call3_audio_in_window

0x4727,	// (0x000603fc) bg_popup_call3_in_pane_ParamLimits

0x4727,	// (0x000603fc) bg_popup_call3_in_pane

0x4789,	// (0x0006045e) popup_call3_audio_in_window_g1_ParamLimits

0x4789,	// (0x0006045e) popup_call3_audio_in_window_g1

0x47a1,	// (0x00060476) popup_call3_audio_in_window_g2_ParamLimits

0x47a1,	// (0x00060476) popup_call3_audio_in_window_g2

0x47b9,	// (0x0006048e) popup_call3_audio_in_window_g3_ParamLimits

0x47b9,	// (0x0006048e) popup_call3_audio_in_window_g3

0x0003,

0xf52d,	// (0x0006b202) popup_call3_audio_in_window_g_ParamLimits

0xf52d,	// (0x0006b202) popup_call3_audio_in_window_g

0x47e1,	// (0x000604b6) popup_call3_audio_in_window_t1_ParamLimits

0x47e1,	// (0x000604b6) popup_call3_audio_in_window_t1

0x4809,	// (0x000604de) popup_call3_audio_in_window_t2_ParamLimits

0x4809,	// (0x000604de) popup_call3_audio_in_window_t2

0x4831,	// (0x00060506) popup_call3_audio_in_window_t3_ParamLimits

0x4831,	// (0x00060506) popup_call3_audio_in_window_t3

0x0002,

0xf536,	// (0x0006b20b) popup_call3_audio_in_window_t_ParamLimits

0xf536,	// (0x0006b20b) popup_call3_audio_in_window_t

0xa9f6,	// (0x000666cb) bg_popup_call3_rect_pane

0xc671,	// (0x00068346) bg_popup_call3_rect_pane_g1

0xa912,	// (0x000665e7) bg_popup_call3_rect_pane_g2

0xc679,	// (0x0006834e) bg_popup_call3_rect_pane_g3

0xc681,	// (0x00068356) bg_popup_call3_rect_pane_g4

0xc689,	// (0x0006835e) bg_popup_call3_rect_pane_g5

0xc691,	// (0x00068366) bg_popup_call3_rect_pane_g6

0xc699,	// (0x0006836e) bg_popup_call3_rect_pane_g7

0x3a04,	// (0x0005f6d9) mup_visualizer_osc_pane

0xb52f,	// (0x00067204) mup_visualizer_spec_pane

0x4747,	// (0x0006041c) call3_video_qcif_pane_ParamLimits

0x4747,	// (0x0006041c) call3_video_qcif_pane

0x4759,	// (0x0006042e) call3_video_qcif_uncrop_pane_ParamLimits

0x4759,	// (0x0006042e) call3_video_qcif_uncrop_pane

0x4767,	// (0x0006043c) call3_video_subqcif_pane_ParamLimits

0x4767,	// (0x0006043c) call3_video_subqcif_pane

0x4779,	// (0x0006044e) call3_video_subqcif_uncrop_pane_ParamLimits

0x4779,	// (0x0006044e) call3_video_subqcif_uncrop_pane

0x47d1,	// (0x000604a6) popup_call3_audio_in_window_g4_ParamLimits

0x47d1,	// (0x000604a6) popup_call3_audio_in_window_g4

0x46f4,	// (0x000603c9) mup_spec_half_pane

0x46fd,	// (0x000603d2) mup_spec_half_pane_cp

0xc8d6,	// (0x000685ab) mup_osc_middle_pane

0xc8df,	// (0x000685b4) mup_visualizer_osc_pane_g1

0x46d5,	// (0x000603aa) mup_spec_bar_pane_ParamLimits

0x46d5,	// (0x000603aa) mup_spec_bar_pane

0xc8c3,	// (0x00068598) mup_spec_bar_pane_g1

0xc8cd,	// (0x000685a2) mup_spec_bar_pane_g2

0x0001,

0x0503,	// (0x0005c1d8) mup_spec_bar_pane_g

0x17ad,	// (0x0005d482) aid_cale_week_size_cell_pane_ParamLimits

0x17c2,	// (0x0005d497) bg_cale_heading_pane_ParamLimits

0xa94f,	// (0x00066624) bg_cale_pane_cp01_ParamLimits

0x17e4,	// (0x0005d4b9) cale_week_corner_pane_ParamLimits

0x17fe,	// (0x0005d4d3) cale_week_day_heading_pane_ParamLimits

0x1820,	// (0x0005d4f5) cale_week_scroll_pane_g1_ParamLimits

0x183d,	// (0x0005d512) cale_week_scroll_pane_g2_ParamLimits

0x1850,	// (0x0005d525) cale_week_scroll_pane_g3_ParamLimits

0x1863,	// (0x0005d538) cale_week_scroll_pane_g4_ParamLimits

0x1876,	// (0x0005d54b) cale_week_scroll_pane_g5_ParamLimits

0x1889,	// (0x0005d55e) cale_week_scroll_pane_g6_ParamLimits

0x189c,	// (0x0005d571) cale_week_scroll_pane_g7_ParamLimits

0x18af,	// (0x0005d584) cale_week_scroll_pane_g8_ParamLimits

0x18c4,	// (0x0005d599) cale_week_scroll_pane_g9_ParamLimits

0x18d7,	// (0x0005d5ac) cale_week_scroll_pane_g10_ParamLimits

0x18ea,	// (0x0005d5bf) cale_week_scroll_pane_g11_ParamLimits

0x18fd,	// (0x0005d5d2) cale_week_scroll_pane_g12_ParamLimits

0x1914,	// (0x0005d5e9) cale_week_scroll_pane_g13_ParamLimits

0x192f,	// (0x0005d604) cale_week_scroll_pane_g14_ParamLimits

0x194a,	// (0x0005d61f) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0006ae85) cale_week_scroll_pane_g_ParamLimits

0x197a,	// (0x0005d64f) cale_week_time_pane_ParamLimits

0x198f,	// (0x0005d664) grid_cale_week_pane_ParamLimits

0xa96c,	// (0x00066641) listscroll_cale_week_pane_t1

0xa97e,	// (0x00066653) scroll_pane_cp08_ParamLimits

0x273d,	// (0x0005e412) cale_month_corner_pane_ParamLimits

0xad28,	// (0x000669fd) cale_month_pane_t1

0x2bc5,	// (0x0005e89a) cale_month_week_pane_ParamLimits

0xb519,	// (0x000671ee) popup_call_status_window_g1_ParamLimits

0x34b7,	// (0x0005f18c) popup_call_status_window_g2_ParamLimits

0x34c3,	// (0x0005f198) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0006b02b) popup_call_status_window_g_ParamLimits

0xb0cc,	// (0x00066da1) aid_call2_pane

0x3c9b,	// (0x0005f970) msg_header_pane_g1

0x3e26,	// (0x0005fafb) postcard_address2_pane_ParamLimits

0x3e26,	// (0x0005fafb) postcard_address2_pane

0x3e32,	// (0x0005fb07) postcard_message2_pane_ParamLimits

0x3e32,	// (0x0005fb07) postcard_message2_pane

0x466d,	// (0x00060342) message2_row_pane_ParamLimits

0x466d,	// (0x00060342) message2_row_pane

0x4688,	// (0x0006035d) address2_row_pane_ParamLimits

0x4688,	// (0x0006035d) address2_row_pane

0xc891,	// (0x00068566) postcard_message2_row_pane_g1

0xc899,	// (0x0006856e) postcard_message2_row_pane_t1

0xc891,	// (0x00068566) address2_row_pane_g1

0xc899,	// (0x0006856e) address2_row_pane_t1

0x1cf7,	// (0x0005d9cc) aid_size_cell_vorec

0xa511,	// (0x000661e6) main_rss_pane

0x469b,	// (0x00060370) rss_list_single_pane_ParamLimits

0x469b,	// (0x00060370) rss_list_single_pane

0xc8a7,	// (0x0006857c) rss_list_single_pane_t1

0xc8b5,	// (0x0006858a) rss_list_single_pane_t2

0x0001,

0x04fe,	// (0x0005c1d3) rss_list_single_pane_t

0xa511,	// (0x000661e6) main_camera2_pane

0xa511,	// (0x000661e6) main_video2_pane

0x48cd,	// (0x000605a2) cams_zoom_pane_cp2_ParamLimits

0x48cd,	// (0x000605a2) cams_zoom_pane_cp2

0x48d9,	// (0x000605ae) image2_vga_pane_ParamLimits

0x48d9,	// (0x000605ae) image2_vga_pane

0x48e8,	// (0x000605bd) main_camera2_pane_g1_ParamLimits

0x48e8,	// (0x000605bd) main_camera2_pane_g1

0x48f4,	// (0x000605c9) main_camera2_pane_g2_ParamLimits

0x48f4,	// (0x000605c9) main_camera2_pane_g2

0x4900,	// (0x000605d5) main_camera2_pane_g3_ParamLimits

0x4900,	// (0x000605d5) main_camera2_pane_g3

0x490c,	// (0x000605e1) main_camera2_pane_g4_ParamLimits

0x490c,	// (0x000605e1) main_camera2_pane_g4

0x4918,	// (0x000605ed) main_camera2_pane_g5_ParamLimits

0x4918,	// (0x000605ed) main_camera2_pane_g5

0x4924,	// (0x000605f9) main_camera2_pane_g6_ParamLimits

0x4924,	// (0x000605f9) main_camera2_pane_g6

0x4930,	// (0x00060605) main_camera2_pane_g7_ParamLimits

0x4930,	// (0x00060605) main_camera2_pane_g7

0x493c,	// (0x00060611) main_camera2_pane_g8_ParamLimits

0x493c,	// (0x00060611) main_camera2_pane_g8

0x0008,

0xf53d,	// (0x0006b212) main_camera2_pane_g_ParamLimits

0xf53d,	// (0x0006b212) main_camera2_pane_g

0x4954,	// (0x00060629) main_camera2_pane_t1_ParamLimits

0x4954,	// (0x00060629) main_camera2_pane_t1

0x4966,	// (0x0006063b) main_camera2_pane_t2_ParamLimits

0x4966,	// (0x0006063b) main_camera2_pane_t2

0x4978,	// (0x0006064d) main_camera2_pane_t3_ParamLimits

0x4978,	// (0x0006064d) main_camera2_pane_t3

0x498a,	// (0x0006065f) main_camera2_pane_t4_ParamLimits

0x498a,	// (0x0006065f) main_camera2_pane_t4

0x0006,

0xf550,	// (0x0006b225) main_camera2_pane_t_ParamLimits

0xf550,	// (0x0006b225) main_camera2_pane_t

0x49ec,	// (0x000606c1) cams_zoom_pane_cp4_ParamLimits

0x49ec,	// (0x000606c1) cams_zoom_pane_cp4

0x49fc,	// (0x000606d1) image2_cif_pane_ParamLimits

0x49fc,	// (0x000606d1) image2_cif_pane

0x4a11,	// (0x000606e6) image2_subqcif_pane_ParamLimits

0x4a11,	// (0x000606e6) image2_subqcif_pane

0x4a20,	// (0x000606f5) main_video2_pane_g1_ParamLimits

0x4a20,	// (0x000606f5) main_video2_pane_g1

0x4a32,	// (0x00060707) main_video2_pane_g2_ParamLimits

0x4a32,	// (0x00060707) main_video2_pane_g2

0x4a42,	// (0x00060717) main_video2_pane_g3_ParamLimits

0x4a42,	// (0x00060717) main_video2_pane_g3

0x4a52,	// (0x00060727) main_video2_pane_g4_ParamLimits

0x4a52,	// (0x00060727) main_video2_pane_g4

0x4a62,	// (0x00060737) main_video2_pane_g5_ParamLimits

0x4a62,	// (0x00060737) main_video2_pane_g5

0x4a72,	// (0x00060747) main_video2_pane_g6_ParamLimits

0x4a72,	// (0x00060747) main_video2_pane_g6

0x0005,

0xf55f,	// (0x0006b234) main_video2_pane_g_ParamLimits

0xf55f,	// (0x0006b234) main_video2_pane_g

0x4a84,	// (0x00060759) main_video2_pane_t1_ParamLimits

0x4a84,	// (0x00060759) main_video2_pane_t1

0x4a9e,	// (0x00060773) main_video2_pane_t2_ParamLimits

0x4a9e,	// (0x00060773) main_video2_pane_t2

0x4ac4,	// (0x00060799) main_video2_pane_t3_ParamLimits

0x4ac4,	// (0x00060799) main_video2_pane_t3

0x0002,

0xf56c,	// (0x0006b241) main_video2_pane_t_ParamLimits

0xf56c,	// (0x0006b241) main_video2_pane_t

0x437f,	// (0x00060054) call_muted_g2

0x0001,

0xf521,	// (0x0006b1f6) call_muted_g

0xa511,	// (0x000661e6) main_mup2_pane

0xc93c,	// (0x00068611) main_mup2_pane_g1_ParamLimits

0xc93c,	// (0x00068611) main_mup2_pane_g1

0x4aea,	// (0x000607bf) main_mup2_pane_g2_ParamLimits

0x4aea,	// (0x000607bf) main_mup2_pane_g2

0x4d6c,	// (0x00060a41) main_mup_pane_g13_cp1

0x4d74,	// (0x00060a49) mup_volume_pane_cp1

0x4b0a,	// (0x000607df) main_mup2_pane_g4_ParamLimits

0x4b0a,	// (0x000607df) main_mup2_pane_g4

0x4b1f,	// (0x000607f4) main_mup2_pane_g5_ParamLimits

0x4b1f,	// (0x000607f4) main_mup2_pane_g5

0x4b34,	// (0x00060809) main_mup2_pane_g6_ParamLimits

0x4b34,	// (0x00060809) main_mup2_pane_g6

0x4b49,	// (0x0006081e) main_mup2_pane_g7_ParamLimits

0x4b49,	// (0x0006081e) main_mup2_pane_g7

0x0006,

0xf573,	// (0x0006b248) main_mup2_pane_g_ParamLimits

0xf573,	// (0x0006b248) main_mup2_pane_g

0x4b65,	// (0x0006083a) main_mup2_pane_t1_ParamLimits

0x4b65,	// (0x0006083a) main_mup2_pane_t1

0x4b7c,	// (0x00060851) main_mup2_pane_t2_ParamLimits

0x4b7c,	// (0x00060851) main_mup2_pane_t2

0x4b93,	// (0x00060868) main_mup2_pane_t3_ParamLimits

0x4b93,	// (0x00060868) main_mup2_pane_t3

0x4baa,	// (0x0006087f) main_mup2_pane_t4_ParamLimits

0x4baa,	// (0x0006087f) main_mup2_pane_t4

0x4bc4,	// (0x00060899) main_mup2_pane_t5_ParamLimits

0x4bc4,	// (0x00060899) main_mup2_pane_t5

0x4bde,	// (0x000608b3) main_mup2_pane_t6_ParamLimits

0x4bde,	// (0x000608b3) main_mup2_pane_t6

0x0005,

0xf582,	// (0x0006b257) main_mup2_pane_t_ParamLimits

0xf582,	// (0x0006b257) main_mup2_pane_t

0x4c16,	// (0x000608eb) mup2_visualizer_pane_ParamLimits

0x4c16,	// (0x000608eb) mup2_visualizer_pane

0x4c4c,	// (0x00060921) mup_progress_pane_cp_ParamLimits

0x4c4c,	// (0x00060921) mup_progress_pane_cp

0x4d57,	// (0x00060a2c) mup_volume_pane_cp_ParamLimits

0x4d57,	// (0x00060a2c) mup_volume_pane_cp

0x4c63,	// (0x00060938) mup2_visualizer_pane_g1_ParamLimits

0x4c63,	// (0x00060938) mup2_visualizer_pane_g1

0xc916,	// (0x000685eb) mup2_visualizer_pane_g2_ParamLimits

0xc916,	// (0x000685eb) mup2_visualizer_pane_g2

0x4c78,	// (0x0006094d) mup2_visualizer_pane_g3_ParamLimits

0x4c78,	// (0x0006094d) mup2_visualizer_pane_g3

0x0002,

0xf58f,	// (0x0006b264) mup2_visualizer_pane_g_ParamLimits

0xf58f,	// (0x0006b264) mup2_visualizer_pane_g

0xb756,	// (0x0006742b) aid_size_cell_fmradio

0x4495,	// (0x0006016a) aid_height_parent_landcape

0xab86,	// (0x0006685b) wml_content_pane_cp

0xab8e,	// (0x00066863) wml_tabs_pane

0xab97,	// (0x0006686c) popup_wml_miniature_window

0xab9f,	// (0x00066874) scroll_pane_cp021

0xabb3,	// (0x00066888) wml_content_pane_comp8

0xa511,	// (0x000661e6) bg_popup_sub_pane_cp05

0xc934,	// (0x00068609) popup_wml_miniature_window_g1

0xc948,	// (0x0006861d) wml_miniature_view_pane

0x4c86,	// (0x0006095b) aid_size_wml_view

0x4c8e,	// (0x00060963) wml_miniature_view_pane_g1

0x4c97,	// (0x0006096c) wml_miniature_view_pane_g2

0x4ca0,	// (0x00060975) wml_miniature_view_pane_g3

0x4ca8,	// (0x0006097d) wml_miniature_view_pane_g4

0x4cb0,	// (0x00060985) wml_miniature_view_pane_g5

0x4cb8,	// (0x0006098d) wml_miniature_view_pane_g6

0x4cc0,	// (0x00060995) wml_miniature_view_pane_g7

0x4cc8,	// (0x0006099d) wml_miniature_view_pane_g8

0x0007,

0xf596,	// (0x0006b26b) wml_miniature_view_pane_g

0xc93c,	// (0x00068611) background_graphic_ParamLimits

0xc93c,	// (0x00068611) background_graphic

0xc950,	// (0x00068625) wml_tabs_2_pane

0xc959,	// (0x0006862e) wml_tabs_3_pane_ParamLimits

0xc959,	// (0x0006862e) wml_tabs_3_pane

0xc96b,	// (0x00068640) wml_tabs_4_pane_ParamLimits

0xc96b,	// (0x00068640) wml_tabs_4_pane

0xc981,	// (0x00068656) wml_tabs_5_pane_ParamLimits

0xc981,	// (0x00068656) wml_tabs_5_pane

0xc99b,	// (0x00068670) wml_tabs_pane_g2_ParamLimits

0xc99b,	// (0x00068670) wml_tabs_pane_g2

0xc9af,	// (0x00068684) wml_tabs_pane_g3_ParamLimits

0xc9af,	// (0x00068684) wml_tabs_pane_g3

0x4cd0,	// (0x000609a5) wml_tabs_2_active_pane_ParamLimits

0x4cd0,	// (0x000609a5) wml_tabs_2_active_pane

0x4ce0,	// (0x000609b5) wml_tabs_2_passive_pane_ParamLimits

0x4ce0,	// (0x000609b5) wml_tabs_2_passive_pane

0x4cf0,	// (0x000609c5) wml_tabs_3_active_pane_cp_ParamLimits

0x4cf0,	// (0x000609c5) wml_tabs_3_active_pane_cp

0x4d01,	// (0x000609d6) wml_tabs_3_passive_pane_ParamLimits

0x4d01,	// (0x000609d6) wml_tabs_3_passive_pane

0x4d12,	// (0x000609e7) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d12,	// (0x000609e7) wml_tabs_3_passive_pane_cp

0x4d23,	// (0x000609f8) tabs_4_active_pane

0x4d2b,	// (0x00060a00) tabs_4_passive_pane

0x4d33,	// (0x00060a08) tabs_4_passive_pane_cp

0x4d3b,	// (0x00060a10) tabs_4_passive_pane_cp2

0x425a,	// (0x0005ff2f) aid_height_text

0x39d1,	// (0x0005f6a6) mup_volume_cont_pane_ParamLimits

0x39d1,	// (0x0005f6a6) mup_volume_cont_pane

0x12dd,	// (0x0005cfb2) aid_size_cell_pinb

0x12e7,	// (0x0005cfbc) aid_size_list_pinb

0x4c35,	// (0x0006090a) mup2_volume_cont_pane_ParamLimits

0x4c35,	// (0x0006090a) mup2_volume_cont_pane

0x4d43,	// (0x00060a18) mup2_volume_cont_pane_g1_ParamLimits

0x4d43,	// (0x00060a18) mup2_volume_cont_pane_g1

0x0f02,	// (0x0005cbd7) aid_size_cell_touch_ParamLimits

0x0f02,	// (0x0005cbd7) aid_size_cell_touch

0x11c3,	// (0x0005ce98) touch_pane_ParamLimits

0x11c3,	// (0x0005ce98) touch_pane

0x11b9,	// (0x0005ce8e) main_rss2_pane

0xc9cc,	// (0x000686a1) listscroll_rss2_pane

0xc9d5,	// (0x000686aa) rss2_navigation_pane

0xc9dd,	// (0x000686b2) list_rss2_pane

0xb229,	// (0x00066efe) scroll_pane_cp22

0xc9e5,	// (0x000686ba) rss2_navigation_pane_g1

0xc9ee,	// (0x000686c3) rss2_navigation_pane_g2

0xc9f6,	// (0x000686cb) rss2_navigation_pane_g3

0x0002,

0x0589,	// (0x0005c25e) rss2_navigation_pane_g

0xc9fe,	// (0x000686d3) rss2_navigation_pane_t1

0x4d7c,	// (0x00060a51) rss2_list_single_pane_ParamLimits

0x4d7c,	// (0x00060a51) rss2_list_single_pane

0xca0c,	// (0x000686e1) rss2_list_single_pane_t2

0xca1a,	// (0x000686ef) rss2_list_single_pane_t3_ParamLimits

0xca1a,	// (0x000686ef) rss2_list_single_pane_t3

0xca37,	// (0x0006870c) rss2_list_single_pane_t4

0x3255,	// (0x0005ef2a) smil_status_pane_g1

0x44ac,	// (0x00060181) main_image2_pane_ParamLimits

0x44ac,	// (0x00060181) main_image2_pane

0x4948,	// (0x0006061d) main_camera2_pane_g9_ParamLimits

0x4948,	// (0x0006061d) main_camera2_pane_g9

0x499c,	// (0x00060671) main_camera2_pane_t5_ParamLimits

0x499c,	// (0x00060671) main_camera2_pane_t5

0x49ae,	// (0x00060683) main_camera2_pane_t6_ParamLimits

0x49ae,	// (0x00060683) main_camera2_pane_t6

0x4dad,	// (0x00060a82) main_image2_pane_g1_ParamLimits

0x4dad,	// (0x00060a82) main_image2_pane_g1

0x3ffa,	// (0x0005fccf) smil2_video_pane_ParamLimits

0x3ffa,	// (0x0005fccf) smil2_video_pane

0x0e06,	// (0x0005cadb) aid_zoom_text_primary_cp

0x1154,	// (0x0005ce29) popup_preview_fixed_window

0xaaef,	// (0x000667c4) im_reading_pane_g1

0x4892,	// (0x00060567) cams2_bc_adjust_pane_cp_ParamLimits

0x4892,	// (0x00060567) cams2_bc_adjust_pane_cp

0x49de,	// (0x000606b3) cams2_bc_adjust_pane_ParamLimits

0x49de,	// (0x000606b3) cams2_bc_adjust_pane

0xdc40,	// (0x00069915) cams2_bc_adjust_pane_g1

0x4db9,	// (0x00060a8e) cams2_slider_pane

0x4dc2,	// (0x00060a97) cams2_slider_pane_g1

0x4dcb,	// (0x00060aa0) cams2_slider_pane_g2

0x0006,

0xf5a7,	// (0x0006b27c) cams2_slider_pane_g

0x13ed,	// (0x0005d0c2) calc_display_pane_ParamLimits

0x140b,	// (0x0005d0e0) calc_paper_pane_ParamLimits

0x1427,	// (0x0005d0fc) grid_calc_pane_ParamLimits

0x3525,	// (0x0005f1fa) popup_clock_digital_window_t1_ParamLimits

0xb6f3,	// (0x000673c8) main_image_pane_t1

0x13d3,	// (0x0005d0a8) aid_size_cell_calc_ParamLimits

0x13d3,	// (0x0005d0a8) aid_size_cell_calc

0x44dd,	// (0x000601b2) popup_blid_sat_info2_window_ParamLimits

0x44dd,	// (0x000601b2) popup_blid_sat_info2_window

0xca4d,	// (0x00068722) aid_size_cell_blid

0xca55,	// (0x0006872a) bg_popup_window_pane_cp07

0xca78,	// (0x0006874d) grid_popup_blid_pane

0xca82,	// (0x00068757) heading_pane_cp05_ParamLimits

0xca82,	// (0x00068757) heading_pane_cp05

0xcb4c,	// (0x00068821) cell_popup_blid_pane_ParamLimits

0xcb4c,	// (0x00068821) cell_popup_blid_pane

0xcb70,	// (0x00068845) cell_popup_blid_pane_g1

0xcb78,	// (0x0006884d) cell_popup_blid_pane_t1

0x4bfb,	// (0x000608d0) mup2_indicator_pane_ParamLimits

0x4bfb,	// (0x000608d0) mup2_indicator_pane

0xa9f6,	// (0x000666cb) mup2_visualizer_osc_pane

0xc922,	// (0x000685f7) mup2_visualizer_spec_pane_ParamLimits

0xc922,	// (0x000685f7) mup2_visualizer_spec_pane

0x4de5,	// (0x00060aba) mup2_spec_half_pane

0x4dee,	// (0x00060ac3) mup2_spec_half_pane_cp

0x4df8,	// (0x00060acd) mup2_spec_bar_pane_ParamLimits

0x4df8,	// (0x00060acd) mup2_spec_bar_pane

0xc8c3,	// (0x00068598) mup2_spec_bar_pane_g1

0xc8cd,	// (0x000685a2) mup2_spec_bar_pane_g2

0x0001,

0x0503,	// (0x0005c1d8) mup2_spec_bar_pane_g

0x4e17,	// (0x00060aec) mup2_osc_middle_pane

0xc8df,	// (0x000685b4) mup2_visualizer_osc_pane_g1

0x9c34,	// (0x00065909) popup_number_entry_window_t1_ParamLimits

0x9c47,	// (0x0006591c) popup_number_entry_window_t2_ParamLimits

0x9c59,	// (0x0006592e) popup_number_entry_window_t3_ParamLimits

0x121a,	// (0x0005ceef) popup_number_entry_window_t5_ParamLimits

0x121a,	// (0x0005ceef) popup_number_entry_window_t5

0xf0ca,	// (0x0006ad9f) popup_number_entry_window_t_ParamLimits

0x9c6b,	// (0x00065940) text_title_cp2_ParamLimits

0x3cfa,	// (0x0005f9cf) aid_hotspot_pointer_text2_pane

0x3d88,	// (0x0005fa5d) main_viewer_pane_g9_ParamLimits

0x3d88,	// (0x0005fa5d) main_viewer_pane_g9

0xad28,	// (0x000669fd) cale_month_pane_t1_ParamLimits

0xad65,	// (0x00066a3a) bg_cale_pane_ParamLimits

0xad7d,	// (0x00066a52) list_cale_pane_ParamLimits

0xad8e,	// (0x00066a63) listscroll_cale_day_pane_t1

0xada0,	// (0x00066a75) scroll_pane_cp09_ParamLimits

0x3a0c,	// (0x0005f6e1) main_mup_eq_pane_t1_ParamLimits

0x3a0c,	// (0x0005f6e1) main_mup_eq_pane_t1

0x3a26,	// (0x0005f6fb) main_mup_eq_pane_t2_ParamLimits

0x3a26,	// (0x0005f6fb) main_mup_eq_pane_t2

0x3a40,	// (0x0005f715) main_mup_eq_pane_t3_ParamLimits

0x3a40,	// (0x0005f715) main_mup_eq_pane_t3

0x3a58,	// (0x0005f72d) main_mup_eq_pane_t4_ParamLimits

0x3a58,	// (0x0005f72d) main_mup_eq_pane_t4

0x3a70,	// (0x0005f745) main_mup_eq_pane_t5_ParamLimits

0x3a70,	// (0x0005f745) main_mup_eq_pane_t5

0x3a88,	// (0x0005f75d) main_mup_eq_pane_t6_ParamLimits

0x3a88,	// (0x0005f75d) main_mup_eq_pane_t6

0x3a9c,	// (0x0005f771) main_mup_eq_pane_t7_ParamLimits

0x3a9c,	// (0x0005f771) main_mup_eq_pane_t7

0x3ab0,	// (0x0005f785) main_mup_eq_pane_t8_ParamLimits

0x3ab0,	// (0x0005f785) main_mup_eq_pane_t8

0x3ac6,	// (0x0005f79b) main_mup_eq_pane_t9_ParamLimits

0x3ac6,	// (0x0005f79b) main_mup_eq_pane_t9

0x3ade,	// (0x0005f7b3) main_mup_eq_pane_t10_ParamLimits

0x3ade,	// (0x0005f7b3) main_mup_eq_pane_t10

0x0009,

0xf434,	// (0x0006b109) main_mup_eq_pane_t_ParamLimits

0xf434,	// (0x0006b109) main_mup_eq_pane_t

0x3b9b,	// (0x0005f870) mup_equalizer_pane_cp5_ParamLimits

0x3bb1,	// (0x0005f886) mup_equalizer_pane_cp6_ParamLimits

0x3bc9,	// (0x0005f89e) mup_equalizer_pane_cp7_ParamLimits

0x11b9,	// (0x0005ce8e) main_gallery_pane

0xc8e8,	// (0x000685bd) smil2_volume_pane

0xc903,	// (0x000685d8) smil_status_volume_pane_g1_ParamLimits

0xc8f0,	// (0x000685c5) smil_status_volume_pane_g2_ParamLimits

0x4705,	// (0x000603da) smil_status_volume_pane_g3_ParamLimits

0xf526,	// (0x0006b1fb) smil_status_volume_pane_g_ParamLimits

0xca55,	// (0x0006872a) bg_popup_window_pane_cp07_ParamLimits

0xca63,	// (0x00068738) blid_firmament_pane

0x4e20,	// (0x00060af5) aid_size_cell_gallery_ParamLimits

0x4e20,	// (0x00060af5) aid_size_cell_gallery

0x4e2e,	// (0x00060b03) grid_gallery_pane_ParamLimits

0x4e2e,	// (0x00060b03) grid_gallery_pane

0x4e3e,	// (0x00060b13) cell_gallery_pane_ParamLimits

0x4e3e,	// (0x00060b13) cell_gallery_pane

0xcb8f,	// (0x00068864) bg_cell_gallery_focus_pane_ParamLimits

0xcb8f,	// (0x00068864) bg_cell_gallery_focus_pane

0xcba1,	// (0x00068876) cell_gallery_pane_g1_ParamLimits

0xcba1,	// (0x00068876) cell_gallery_pane_g1

0x4e8c,	// (0x00060b61) cell_gallery_pane_g2_ParamLimits

0x4e8c,	// (0x00060b61) cell_gallery_pane_g2

0x4e99,	// (0x00060b6e) cell_gallery_pane_g3_ParamLimits

0x4e99,	// (0x00060b6e) cell_gallery_pane_g3

0xcbad,	// (0x00068882) cell_gallery_pane_g4_ParamLimits

0xcbad,	// (0x00068882) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x0006b28b) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x0006b28b) cell_gallery_pane_g

0xcbc5,	// (0x0006889a) bg_cell_gallery_focus_pane_g1

0xcbcd,	// (0x000688a2) bg_cell_gallery_focus_pane_g2

0xcbd5,	// (0x000688aa) bg_cell_gallery_focus_pane_g3

0xcbdd,	// (0x000688b2) bg_cell_gallery_focus_pane_g4

0xcbe5,	// (0x000688ba) bg_cell_gallery_focus_pane_g5

0xcbed,	// (0x000688c2) bg_cell_gallery_focus_pane_g6

0xcbf5,	// (0x000688ca) bg_cell_gallery_focus_pane_g7

0xcbfd,	// (0x000688d2) bg_cell_gallery_focus_pane_g8

0x0007,

0x05bf,	// (0x0005c294) bg_cell_gallery_focus_pane_g

0xcc05,	// (0x000688da) aid_firma_cardinal

0xcc19,	// (0x000688ee) blid_firmament_pane_t1

0xcc30,	// (0x00068905) blid_firmament_pane_t2

0xcc47,	// (0x0006891c) blid_firmament_pane_t3

0xcc5e,	// (0x00068933) blid_firmament_pane_t4

0x0003,

0x05d0,	// (0x0005c2a5) blid_firmament_pane_t

0xcc75,	// (0x0006894a) blid_sat_info_pane

0xcc85,	// (0x0006895a) blid_sat_info_pane_g1

0xcc85,	// (0x0006895a) blid_sat_info_pane_g2

0x0001,

0x05d9,	// (0x0005c2ae) blid_sat_info_pane_g

0xcc8f,	// (0x00068964) blid_sat_info_pane_t1

0xcc9d,	// (0x00068972) smil2_volume_content_pane

0xcca6,	// (0x0006897b) smil2_volume_pane_g1

0xcb86,	// (0x0006885b) smil2_volume_content_pane_g1

0xccae,	// (0x00068983) smil2_volume_content_pane_g2

0xccb7,	// (0x0006898c) smil2_volume_content_pane_g3

0xccc0,	// (0x00068995) smil2_volume_content_pane_g4

0xccc9,	// (0x0006899e) smil2_volume_content_pane_g5

0xccd2,	// (0x000689a7) smil2_volume_content_pane_g6

0xccdb,	// (0x000689b0) smil2_volume_content_pane_g7

0xcce4,	// (0x000689b9) smil2_volume_content_pane_g8

0xcced,	// (0x000689c2) smil2_volume_content_pane_g9

0xccf6,	// (0x000689cb) smil2_volume_content_pane_g10

0x0009,

0x05de,	// (0x0005c2b3) smil2_volume_content_pane_g

0x1a10,	// (0x0005d6e5) cale_week_day_heading_pane_t1_ParamLimits

0x1a4b,	// (0x0005d720) cale_week_day_heading_pane_t2_ParamLimits

0x1a86,	// (0x0005d75b) cale_week_day_heading_pane_t3_ParamLimits

0x1ac1,	// (0x0005d796) cale_week_day_heading_pane_t4_ParamLimits

0x1afc,	// (0x0005d7d1) cale_week_day_heading_pane_t5_ParamLimits

0x1b37,	// (0x0005d80c) cale_week_day_heading_pane_t6_ParamLimits

0x1b72,	// (0x0005d847) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0006aea6) cale_week_day_heading_pane_t_ParamLimits

0xa99b,	// (0x00066670) bg_cale_side_pane_ParamLimits

0x1bad,	// (0x0005d882) cale_week_time_pane_t1_ParamLimits

0x1bc7,	// (0x0005d89c) cale_week_time_pane_t2_ParamLimits

0x1be1,	// (0x0005d8b6) cale_week_time_pane_t3_ParamLimits

0x1bfb,	// (0x0005d8d0) cale_week_time_pane_t4_ParamLimits

0x1c15,	// (0x0005d8ea) cale_week_time_pane_t5_ParamLimits

0x1c2f,	// (0x0005d904) cale_week_time_pane_t6_ParamLimits

0x1c4f,	// (0x0005d924) cale_week_time_pane_t7_ParamLimits

0x1c71,	// (0x0005d946) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0006aeb5) cale_week_time_pane_t_ParamLimits

0x1c95,	// (0x0005d96a) cell_cale_week_pane_g2_ParamLimits

0xa99b,	// (0x00066670) bg_cale_side_pane_cp01_ParamLimits

0x302c,	// (0x0005ed01) cale_month_week_pane_t1_ParamLimits

0x3045,	// (0x0005ed1a) cale_month_week_pane_t2_ParamLimits

0x305e,	// (0x0005ed33) cale_month_week_pane_t3_ParamLimits

0x3077,	// (0x0005ed4c) cale_month_week_pane_t4_ParamLimits

0x3090,	// (0x0005ed65) cale_month_week_pane_t5_ParamLimits

0x30b1,	// (0x0005ed86) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0006af8a) cale_month_week_pane_t_ParamLimits

0x321e,	// (0x0005eef3) cell_cale_month_pane_g1_ParamLimits

0x11b9,	// (0x0005ce8e) main_cale_event_viewer_pane

0x9c0a,	// (0x000658df) listscroll_cale_event_viewer_pane

0xccff,	// (0x000689d4) list_cale_ev_pane

0xcd07,	// (0x000689dc) scroll_pane_cp023

0xcd13,	// (0x000689e8) field_cale_ev_pane_ParamLimits

0xcd13,	// (0x000689e8) field_cale_ev_pane

0xcd31,	// (0x00068a06) field_cale_ev_content_pane_ParamLimits

0xcd31,	// (0x00068a06) field_cale_ev_content_pane

0xcd3d,	// (0x00068a12) field_cale_ev_pane_g1_ParamLimits

0xcd3d,	// (0x00068a12) field_cale_ev_pane_g1

0xcd49,	// (0x00068a1e) field_cale_ev_pane_g2_ParamLimits

0xcd49,	// (0x00068a1e) field_cale_ev_pane_g2

0xcd61,	// (0x00068a36) field_cale_ev_pane_g3_ParamLimits

0xcd61,	// (0x00068a36) field_cale_ev_pane_g3

0x0002,

0x05f3,	// (0x0005c2c8) field_cale_ev_pane_g_ParamLimits

0x05f3,	// (0x0005c2c8) field_cale_ev_pane_g

0xcd79,	// (0x00068a4e) field_cale_ev_pane_t1_ParamLimits

0xcd79,	// (0x00068a4e) field_cale_ev_pane_t1

0xcd90,	// (0x00068a65) field_cale_ev_content_pane_t1_ParamLimits

0xcd90,	// (0x00068a65) field_cale_ev_content_pane_t1

0xb5d9,	// (0x000672ae) bg_button_pane_cp01

0x179d,	// (0x0005d472) listscroll_cale_week_pane_ParamLimits

0xa946,	// (0x0006661b) popup_toolbar_window_cp01

0xa96c,	// (0x00066641) listscroll_cale_week_pane_t1_ParamLimits

0x179d,	// (0x0005d472) listscroll_cale_day_pane_ParamLimits

0xa946,	// (0x0006661b) popup_toolbar_window_cp02

0xad8e,	// (0x00066a63) listscroll_cale_day_pane_t1_ParamLimits

0x179d,	// (0x0005d472) main_cale_month_pane_ParamLimits

0x45e4,	// (0x000602b9) popup_toolbar_window_cp03_ParamLimits

0x45e4,	// (0x000602b9) popup_toolbar_window_cp03

0x3f10,	// (0x0005fbe5) main_image_pane_g2_ParamLimits

0x3f10,	// (0x0005fbe5) main_image_pane_g2

0x3f1c,	// (0x0005fbf1) main_image_pane_g3_ParamLimits

0x3f1c,	// (0x0005fbf1) main_image_pane_g3

0x0002,

0xf4bc,	// (0x0006b191) main_image_pane_g_ParamLimits

0xf4bc,	// (0x0006b191) main_image_pane_g

0xb6f3,	// (0x000673c8) main_image_pane_t1_ParamLimits

0x3f28,	// (0x0005fbfd) main_image_pane_t2_ParamLimits

0x3f28,	// (0x0005fbfd) main_image_pane_t2

0x3f3a,	// (0x0005fc0f) main_image_pane_t3_ParamLimits

0x3f3a,	// (0x0005fc0f) main_image_pane_t3

0x3f4c,	// (0x0005fc21) main_image_pane_t4_ParamLimits

0x3f4c,	// (0x0005fc21) main_image_pane_t4

0x0003,

0xf4c3,	// (0x0006b198) main_image_pane_t_ParamLimits

0xf4c3,	// (0x0006b198) main_image_pane_t

0x3f5e,	// (0x0005fc33) popup_image_details_window_cp01

0x3f68,	// (0x0005fc3d) popup_toobar_trans_pane_cp01_ParamLimits

0x3f68,	// (0x0005fc3d) popup_toobar_trans_pane_cp01

0x4534,	// (0x00060209) popup_image_details_window_ParamLimits

0x4534,	// (0x00060209) popup_image_details_window

0x4542,	// (0x00060217) popup_image_focus_window

0x4884,	// (0x00060559) camera2_autofocus_pane_ParamLimits

0x4884,	// (0x00060559) camera2_autofocus_pane

0x9c0a,	// (0x000658df) bg_popup_sub_pane_cp06

0xcdae,	// (0x00068a83) popup_image_focus_window_g1

0xcdb6,	// (0x00068a8b) popup_image_focus_window_g2

0xcdbe,	// (0x00068a93) popup_image_focus_window_g3

0xcdc6,	// (0x00068a9b) popup_image_focus_window_g4

0x0003,

0x05fa,	// (0x0005c2cf) popup_image_focus_window_g

0xcdce,	// (0x00068aa3) popup_image_focus_window_t1

0xcddc,	// (0x00068ab1) popup_image_focus_window_t2

0xcdec,	// (0x00068ac1) popup_image_focus_window_t3

0x0002,

0x0603,	// (0x0005c2d8) popup_image_focus_window_t

0xcdfa,	// (0x00068acf) camera2_autofocus_pane_g1

0xb17c,	// (0x00066e51) bg_tb_trans_pane_cp01

0xce08,	// (0x00068add) popup_image_details_window_g1

0xce1b,	// (0x00068af0) popup_image_details_window_g2

0x0002,

0x0615,	// (0x0005c2ea) popup_image_details_window_g

0xce44,	// (0x00068b19) popup_image_details_window_t1

0xce56,	// (0x00068b2b) popup_image_details_window_t2

0xce6f,	// (0x00068b44) popup_image_details_window_t3

0xce83,	// (0x00068b58) popup_image_details_window_t4

0xce9e,	// (0x00068b73) popup_image_details_window_t5

0x0004,

0x061c,	// (0x0005c2f1) popup_image_details_window_t

0xa81d,	// (0x000664f2) bg_calc_paper_pane_ParamLimits

0x11b9,	// (0x0005ce8e) grid_highlight_pane_cp013

0x1524,	// (0x0005d1f9) list_calc_pane_ParamLimits

0x1536,	// (0x0005d20b) scroll_pane_cp024

0xa831,	// (0x00066506) bg_calc_display_pane_ParamLimits

0x153e,	// (0x0005d213) calc_display_pane_t1_ParamLimits

0x1553,	// (0x0005d228) calc_display_pane_t2_ParamLimits

0x1568,	// (0x0005d23d) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0006ae26) calc_display_pane_t_ParamLimits

0x1644,	// (0x0005d319) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0006ae43) cell_calc_pane_g

0x164d,	// (0x0005d322) cell_calc_pane_t1

0xa890,	// (0x00066565) grid_highlight_pane_cp02_ParamLimits

0xa8a6,	// (0x0006657b) toolbar_button_pane_cp01_ParamLimits

0xa8a6,	// (0x0006657b) toolbar_button_pane_cp01

0xb738,	// (0x0006740d) temp_image_control_pane_ParamLimits

0xb738,	// (0x0006740d) temp_image_control_pane

0x44ac,	// (0x00060181) main_mp3_pane

0xceb8,	// (0x00068b8d) temp_image_control_pane_g1_ParamLimits

0xceb8,	// (0x00068b8d) temp_image_control_pane_g1

0xcec6,	// (0x00068b9b) temp_image_control_pane_g2_ParamLimits

0xcec6,	// (0x00068b9b) temp_image_control_pane_g2

0xced8,	// (0x00068bad) temp_image_control_pane_g3_ParamLimits

0xced8,	// (0x00068bad) temp_image_control_pane_g3

0x4ed6,	// (0x00060bab) temp_image_control_pane_g4_ParamLimits

0x4ed6,	// (0x00060bab) temp_image_control_pane_g4

0x0003,

0xf5ca,	// (0x0006b29f) temp_image_control_pane_g_ParamLimits

0xf5ca,	// (0x0006b29f) temp_image_control_pane_g

0xceb8,	// (0x00068b8d) main_mp3_pane_g1

0x4ee7,	// (0x00060bbc) main_mp3_pane_g2

0x0007,

0xf5d3,	// (0x0006b2a8) main_mp3_pane_g

0xcf1b,	// (0x00068bf0) main_mp3_pane_t1

0xa9fe,	// (0x000666d3) main_camera_pane_g8_ParamLimits

0xa9fe,	// (0x000666d3) main_camera_pane_g8

0x1f22,	// (0x0005dbf7) main_video_pane_g7_ParamLimits

0x1f22,	// (0x0005dbf7) main_video_pane_g7

0x49cc,	// (0x000606a1) main_camera2_pane_t7_ParamLimits

0x49cc,	// (0x000606a1) main_camera2_pane_t7

0xab46,	// (0x0006681b) scroll_pane_cp025_ParamLimits

0xab46,	// (0x0006681b) scroll_pane_cp025

0xab5a,	// (0x0006682f) scroll_pane_cp026_ParamLimits

0xab5a,	// (0x0006682f) scroll_pane_cp026

0xab69,	// (0x0006683e) wml_content_pane_ParamLimits

0x11b9,	// (0x0005ce8e) main_touch_calib_pane

0x4f8b,	// (0x00060c60) main_touch_calib_pane_g1

0x4f97,	// (0x00060c6c) main_touch_calib_pane_g2

0x4fa3,	// (0x00060c78) main_touch_calib_pane_g3

0x4faf,	// (0x00060c84) main_touch_calib_pane_g4

0x0003,

0xf5f1,	// (0x0006b2c6) main_touch_calib_pane_g

0x4fbb,	// (0x00060c90) main_touch_calib_pane_t1

0x4fd4,	// (0x00060ca9) main_touch_calib_pane_t2

0x0004,

0xf5fa,	// (0x0006b2cf) main_touch_calib_pane_t

0xb305,	// (0x00066fda) mup_progress_pane_cp02

0xb33a,	// (0x0006700f) navi_pane_g1

0xb3f5,	// (0x000670ca) navi_pane_mp_t3

0x44ac,	// (0x00060181) main_mp3_pane_ParamLimits

0x4621,	// (0x000602f6) navi_pane_ParamLimits

0xceb8,	// (0x00068b8d) main_mp3_pane_g1_ParamLimits

0x4ee7,	// (0x00060bbc) main_mp3_pane_g2_ParamLimits

0x4ef3,	// (0x00060bc8) main_mp3_pane_g3_ParamLimits

0x4ef3,	// (0x00060bc8) main_mp3_pane_g3

0x4eff,	// (0x00060bd4) main_mp3_pane_g4_ParamLimits

0x4eff,	// (0x00060bd4) main_mp3_pane_g4

0xcee8,	// (0x00068bbd) main_mp3_pane_g5_ParamLimits

0xcee8,	// (0x00068bbd) main_mp3_pane_g5

0xcef6,	// (0x00068bcb) main_mp3_pane_g6_ParamLimits

0xcef6,	// (0x00068bcb) main_mp3_pane_g6

0xcf03,	// (0x00068bd8) main_mp3_pane_g7_ParamLimits

0xcf03,	// (0x00068bd8) main_mp3_pane_g7

0xcf0f,	// (0x00068be4) main_mp3_pane_g8_ParamLimits

0xcf0f,	// (0x00068be4) main_mp3_pane_g8

0xf5d3,	// (0x0006b2a8) main_mp3_pane_g_ParamLimits

0x4f0b,	// (0x00060be0) main_mp3_pane_t2

0x4f1b,	// (0x00060bf0) main_mp3_pane_t3

0xcf29,	// (0x00068bfe) main_mp3_pane_t4

0xcf37,	// (0x00068c0c) main_mp3_pane_t5

0x0005,

0xf5e4,	// (0x0006b2b9) main_mp3_pane_t

0xcf45,	// (0x00068c1a) mup_progress_pane_cp01

0x0e06,	// (0x0005cadb) aid_zoom_text_secondary2

0xccff,	// (0x000689d4) list_cale_ev2_pane

0xcd07,	// (0x000689dc) scroll_pane_cp023_ParamLimits

0x502f,	// (0x00060d04) field_cale_ev2_pane_ParamLimits

0x502f,	// (0x00060d04) field_cale_ev2_pane

0x9faa,	// (0x00065c7f) field_cale_ev2_pane_g1_ParamLimits

0x9faa,	// (0x00065c7f) field_cale_ev2_pane_g1

0x9fb6,	// (0x00065c8b) field_cale_ev2_pane_g2_ParamLimits

0x9fb6,	// (0x00065c8b) field_cale_ev2_pane_g2

0x9fce,	// (0x00065ca3) field_cale_ev2_pane_g3_ParamLimits

0x9fce,	// (0x00065ca3) field_cale_ev2_pane_g3

0x0003,

0xf605,	// (0x0006b2da) field_cale_ev2_pane_g_ParamLimits

0xf605,	// (0x0006b2da) field_cale_ev2_pane_g

0x5058,	// (0x00060d2d) field_cale_ev2_pane_t1_ParamLimits

0x5058,	// (0x00060d2d) field_cale_ev2_pane_t1

0x506f,	// (0x00060d44) field_cale_ev2_pane_t2_ParamLimits

0x506f,	// (0x00060d44) field_cale_ev2_pane_t2

0x0001,

0xf60e,	// (0x0006b2e3) field_cale_ev2_pane_t_ParamLimits

0xf60e,	// (0x0006b2e3) field_cale_ev2_pane_t

0x3df0,	// (0x0005fac5) main_postcard_pane_g5_ParamLimits

0x3df0,	// (0x0005fac5) main_postcard_pane_g5

0x3dfe,	// (0x0005fad3) main_postcard_pane_g6_ParamLimits

0x3dfe,	// (0x0005fad3) main_postcard_pane_g6

0x1d6c,	// (0x0005da41) camera2_autofocus_pane_cp_ParamLimits

0x1d6c,	// (0x0005da41) camera2_autofocus_pane_cp

0x44ac,	// (0x00060181) main_mup3_pane

0x5084,	// (0x00060d59) main_mup3_pane_g1_ParamLimits

0x5084,	// (0x00060d59) main_mup3_pane_g1

0x50a5,	// (0x00060d7a) main_mup3_pane_g2_ParamLimits

0x50a5,	// (0x00060d7a) main_mup3_pane_g2

0x511d,	// (0x00060df2) main_mup3_pane_g3_ParamLimits

0x511d,	// (0x00060df2) main_mup3_pane_g3

0x5160,	// (0x00060e35) main_mup3_pane_g4_ParamLimits

0x5160,	// (0x00060e35) main_mup3_pane_g4

0x51a3,	// (0x00060e78) main_mup3_pane_g5_ParamLimits

0x51a3,	// (0x00060e78) main_mup3_pane_g5

0x51e6,	// (0x00060ebb) main_mup3_pane_g6_ParamLimits

0x51e6,	// (0x00060ebb) main_mup3_pane_g6

0xcf6d,	// (0x00068c42) main_mup3_pane_g7_ParamLimits

0xcf6d,	// (0x00068c42) main_mup3_pane_g7

0x0007,

0xf613,	// (0x0006b2e8) main_mup3_pane_g_ParamLimits

0xf613,	// (0x0006b2e8) main_mup3_pane_g

0x525c,	// (0x00060f31) main_mup3_pane_t1_ParamLimits

0x525c,	// (0x00060f31) main_mup3_pane_t1

0x52cb,	// (0x00060fa0) main_mup3_pane_t2_ParamLimits

0x52cb,	// (0x00060fa0) main_mup3_pane_t2

0x5394,	// (0x00061069) main_mup3_pane_t4_ParamLimits

0x5394,	// (0x00061069) main_mup3_pane_t4

0x53e2,	// (0x000610b7) main_mup3_pane_t5_ParamLimits

0x53e2,	// (0x000610b7) main_mup3_pane_t5

0x5492,	// (0x00061167) main_mup3_pane_t6_ParamLimits

0x5492,	// (0x00061167) main_mup3_pane_t6

0x0005,

0xf624,	// (0x0006b2f9) main_mup3_pane_t_ParamLimits

0xf624,	// (0x0006b2f9) main_mup3_pane_t

0x553e,	// (0x00061213) mup3_progress_pane_ParamLimits

0x553e,	// (0x00061213) mup3_progress_pane

0x55bc,	// (0x00061291) popup_mup3_control_window_ParamLimits

0x55bc,	// (0x00061291) popup_mup3_control_window

0xcf7b,	// (0x00068c50) popup_mup3_text_window

0x55d5,	// (0x000612aa) mup3_progress_pane_t1

0x55f4,	// (0x000612c9) mup3_progress_pane_t2

0xcf83,	// (0x00068c58) mup3_progress_pane_t3

0x0002,

0xf631,	// (0x0006b306) mup3_progress_pane_t

0xcfa0,	// (0x00068c75) mup_progress_pane_cp03

0x9c0a,	// (0x000658df) bg_tb_trans_pane_cp04

0x5613,	// (0x000612e8) mup3_volume_pane

0x561b,	// (0x000612f0) popup_mup3_control_window_g1

0x5624,	// (0x000612f9) mup3_volume_pane_g1

0x562d,	// (0x00061302) mup3_volume_pane_g2

0x5636,	// (0x0006130b) mup3_volume_pane_g3

0x0002,

0xf638,	// (0x0006b30d) mup3_volume_pane_g

0x9c0a,	// (0x000658df) bg_tb_trans_pane_cp03

0xcfb0,	// (0x00068c85) popup_mup3_text_window_g1

0xcfb8,	// (0x00068c8d) popup_mup3_text_window_t1

0xa879,	// (0x0006654e) list_calc_item_pane_g1_ParamLimits

0xc9c3,	// (0x00068698) mup_volume_pane_cp_g1

0x4fed,	// (0x00060cc2) main_touch_calib_pane_t3

0x5003,	// (0x00060cd8) main_touch_calib_pane_t4

0x5019,	// (0x00060cee) main_touch_calib_pane_t5

0x0eee,	// (0x0005cbc3) aid_cell_size_toolbar2

0x0ef6,	// (0x0005cbcb) aid_popup3_width_pane

0x0dfe,	// (0x0005cad3) aid_zoom_text_msg_primary

0x1d41,	// (0x0005da16) vorec_t7

0xa83d,	// (0x00066512) bg_calc_paper_pane_g1_ParamLimits

0xa849,	// (0x0006651e) bg_calc_paper_pane_g2_ParamLimits

0xa855,	// (0x0006652a) bg_calc_paper_pane_g3_ParamLimits

0xa861,	// (0x00066536) bg_calc_paper_pane_g4_ParamLimits

0xa86d,	// (0x00066542) bg_calc_paper_pane_g5_ParamLimits

0x15a7,	// (0x0005d27c) bg_calc_paper_pane_g6_ParamLimits

0x15b8,	// (0x0005d28d) bg_calc_paper_pane_g7_ParamLimits

0x15c9,	// (0x0005d29e) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0006ae2d) bg_calc_paper_pane_g_ParamLimits

0x15da,	// (0x0005d2af) calc_bg_paper_pane_g9_ParamLimits

0x1e53,	// (0x0005db28) image_qvga_pane_ParamLimits

0x1e53,	// (0x0005db28) image_qvga_pane

0xa76c,	// (0x00066441) bg_popup_sub_pane_cp04_ParamLimits

0xb66f,	// (0x00067344) popup_mup_playback_window_g1_ParamLimits

0xb67b,	// (0x00067350) popup_mup_playback_window_t1_ParamLimits

0xb690,	// (0x00067365) popup_mup_playback_window_t2_ParamLimits

0x03df,	// (0x0005c0b4) popup_mup_playback_window_t_ParamLimits

0x4afb,	// (0x000607d0) main_mup2_pane_g3_ParamLimits

0x4afb,	// (0x000607d0) main_mup2_pane_g3

0x2218,	// (0x0005deed) popup_toolbar_window_cp04

0xba72,	// (0x00067747) popup_call2_audio_second_window_g3_ParamLimits

0xba72,	// (0x00067747) popup_call2_audio_second_window_g3

0xbe7c,	// (0x00067b51) popup_call2_audio_first_window_g4_ParamLimits

0xbe7c,	// (0x00067b51) popup_call2_audio_first_window_g4

0xc4fb,	// (0x000681d0) popup_call2_audio_in_window_g4_ParamLimits

0xc4fb,	// (0x000681d0) popup_call2_audio_in_window_g4

0x3f03,	// (0x0005fbd8) aid_area_sk_bg_cut_ParamLimits

0x3f03,	// (0x0005fbd8) aid_area_sk_bg_cut

0xb6a5,	// (0x0006737a) aid_area_sk_bg_cut_2_ParamLimits

0xb6a5,	// (0x0006737a) aid_area_sk_bg_cut_2

0x4e7c,	// (0x00060b51) aid_placing_details_win

0x4e84,	// (0x00060b59) aid_placing_details_win_2

0xcdfa,	// (0x00068acf) camera2_autofocus_pane_g1_ParamLimits

0x1145,	// (0x0005ce1a) popup_fixed_preview_cale_window_ParamLimits

0x1145,	// (0x0005ce1a) popup_fixed_preview_cale_window

0xb473,	// (0x00067148) navi_slider_pane_g3

0xb47c,	// (0x00067151) navi_slider_pane_g4

0xb485,	// (0x0006715a) navi_slider_pane_g5

0xb473,	// (0x00067148) navi_slider_pane_g6

0x37a0,	// (0x0005f475) navi_slider_pane_g7

0xb5a6,	// (0x0006727b) mup_scale_pane_g3

0xb5af,	// (0x00067284) mup_scale_pane_g4

0xb5b8,	// (0x0006728d) mup_scale_pane_g5

0x3be1,	// (0x0005f8b6) mup_scale_pane_g6

0x3bea,	// (0x0005f8bf) mup_scale_pane_g7

0xb473,	// (0x00067148) cams2_slider_pane_g3

0xca45,	// (0x0006871a) cams2_slider_pane_g4

0x4dd4,	// (0x00060aa9) cams2_slider_pane_g5

0xb473,	// (0x00067148) cams2_slider_pane_g6

0x4ddc,	// (0x00060ab1) cams2_slider_pane_g7

0xcc85,	// (0x0006895a) camera2_autofocus_pane_cp_g1

0xc85c,	// (0x00068531) bg_popup_preview_window_pane_cp02_ParamLimits

0xc85c,	// (0x00068531) bg_popup_preview_window_pane_cp02

0xcfc6,	// (0x00068c9b) list_fp_cale_pane_ParamLimits

0xcfc6,	// (0x00068c9b) list_fp_cale_pane

0xcfd2,	// (0x00068ca7) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfd2,	// (0x00068ca7) popup_fixed_preview_cale_window_t1

0x563f,	// (0x00061314) popup_fixed_preview_cale_window_t2_ParamLimits

0x563f,	// (0x00061314) popup_fixed_preview_cale_window_t2

0x5654,	// (0x00061329) popup_fixed_preview_cale_window_t3_ParamLimits

0x5654,	// (0x00061329) popup_fixed_preview_cale_window_t3

0x0002,

0xf63f,	// (0x0006b314) popup_fixed_preview_cale_window_t_ParamLimits

0xf63f,	// (0x0006b314) popup_fixed_preview_cale_window_t

0x5669,	// (0x0006133e) list_single_fp_cale_pane_ParamLimits

0x5669,	// (0x0006133e) list_single_fp_cale_pane

0xcff0,	// (0x00068cc5) list_single_fp_cale_pane_g1_ParamLimits

0xcff0,	// (0x00068cc5) list_single_fp_cale_pane_g1

0xcffc,	// (0x00068cd1) list_single_fp_cale_pane_g2_ParamLimits

0xcffc,	// (0x00068cd1) list_single_fp_cale_pane_g2

0x0002,

0x06ae,	// (0x0005c383) list_single_fp_cale_pane_g_ParamLimits

0x06ae,	// (0x0005c383) list_single_fp_cale_pane_g

0xd015,	// (0x00068cea) list_single_fp_cale_pane_t1_ParamLimits

0xd015,	// (0x00068cea) list_single_fp_cale_pane_t1

0xd027,	// (0x00068cfc) list_single_fp_cale_pane_t2_ParamLimits

0xd027,	// (0x00068cfc) list_single_fp_cale_pane_t2

0x0001,

0x06b5,	// (0x0005c38a) list_single_fp_cale_pane_t_ParamLimits

0x06b5,	// (0x0005c38a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11b9,	// (0x0005ce8e) main_dialer_pane

0x567c,	// (0x00061351) aid_cell_size_keypad

0x5686,	// (0x0006135b) dialer_ne_pane

0x5690,	// (0x00061365) grid_dialer_command_1_pane

0x5698,	// (0x0006136d) grid_dialer_command_2_pane

0x56a0,	// (0x00061375) grid_dialer_keypad_pane

0x56b2,	// (0x00061387) bg_popup_call_pane_cp06_ParamLimits

0x56b2,	// (0x00061387) bg_popup_call_pane_cp06

0x56be,	// (0x00061393) dialer_ne_clear_pane_ParamLimits

0x56be,	// (0x00061393) dialer_ne_clear_pane

0xd05a,	// (0x00068d2f) dialer_ne_pane_g1

0xd062,	// (0x00068d37) dialer_ne_pane_t1_ParamLimits

0xd062,	// (0x00068d37) dialer_ne_pane_t1

0x56ca,	// (0x0006139f) dialer_ne_pane_t2_ParamLimits

0x56ca,	// (0x0006139f) dialer_ne_pane_t2

0x56e7,	// (0x000613bc) dialer_ne_pane_t3_ParamLimits

0x56e7,	// (0x000613bc) dialer_ne_pane_t3

0x0002,

0xf646,	// (0x0006b31b) dialer_ne_pane_t_ParamLimits

0xf646,	// (0x0006b31b) dialer_ne_pane_t

0x570b,	// (0x000613e0) dialer_ne_pane_t3_copy1_ParamLimits

0x570b,	// (0x000613e0) dialer_ne_pane_t3_copy1

0x572f,	// (0x00061404) cell_dialer_keypad_pane_ParamLimits

0x572f,	// (0x00061404) cell_dialer_keypad_pane

0x5746,	// (0x0006141b) cell_dialer_command_1_pane_ParamLimits

0x5746,	// (0x0006141b) cell_dialer_command_1_pane

0x575c,	// (0x00061431) cell_dialer_command_2_pane_ParamLimits

0x575c,	// (0x00061431) cell_dialer_command_2_pane

0xd074,	// (0x00068d49) bg_button_pane_cp02_ParamLimits

0xd074,	// (0x00068d49) bg_button_pane_cp02

0x576b,	// (0x00061440) cell_dialer_keypad_pane_g1_ParamLimits

0x576b,	// (0x00061440) cell_dialer_keypad_pane_g1

0xd074,	// (0x00068d49) bg_button_pane_cp03_ParamLimits

0xd074,	// (0x00068d49) bg_button_pane_cp03

0x5780,	// (0x00061455) cell_dialer_command_1_pane_g1_ParamLimits

0x5780,	// (0x00061455) cell_dialer_command_1_pane_g1

0xd080,	// (0x00068d55) bg_button_pane_cp04

0x5794,	// (0x00061469) cell_dialer_command_2_pane_g1

0xa9f6,	// (0x000666cb) bg_button_pane_cp06

0xd088,	// (0x00068d5d) dialer_ne_clear_pane_g1

0xb346,	// (0x0006701b) navi_pane_g2

0xb374,	// (0x00067049) navi_pane_g3

0x0002,

0x02e2,	// (0x0005bfb7) navi_pane_g

0xb403,	// (0x000670d8) navi_pane_mv_g2

0xb42a,	// (0x000670ff) navi_pane_mv_g5

0x376b,	// (0x0005f440) navi_pane_mv_t1

0xa831,	// (0x00066506) main_clock2_pane

0x57d2,	// (0x000614a7) main_clock2_list_pane_ParamLimits

0x57d2,	// (0x000614a7) main_clock2_list_pane

0x57fa,	// (0x000614cf) main_clock2_pane_t1_ParamLimits

0x57fa,	// (0x000614cf) main_clock2_pane_t1

0x581c,	// (0x000614f1) main_clock2_pane_t2_ParamLimits

0x581c,	// (0x000614f1) main_clock2_pane_t2

0x0004,

0xf64d,	// (0x0006b322) main_clock2_pane_t_ParamLimits

0xf64d,	// (0x0006b322) main_clock2_pane_t

0x5877,	// (0x0006154c) popup_clock_analogue_window_cp03_ParamLimits

0x5877,	// (0x0006154c) popup_clock_analogue_window_cp03

0x5895,	// (0x0006156a) popup_clock_digital_window_cp02_ParamLimits

0x5895,	// (0x0006156a) popup_clock_digital_window_cp02

0x5902,	// (0x000615d7) main_clock2_list_single_pane_ParamLimits

0x5902,	// (0x000615d7) main_clock2_list_single_pane

0xa9f6,	// (0x000666cb) list_highlight_pane_cp05

0xd0c6,	// (0x00068d9b) main_clock2_list_single_pane_t1

0x2218,	// (0x0005deed) popup_toolbar_window_cp04_ParamLimits

0x4ea6,	// (0x00060b7b) camera2_autofocus_pane_g2_ParamLimits

0x4ea6,	// (0x00060b7b) camera2_autofocus_pane_g2

0x4eb2,	// (0x00060b87) camera2_autofocus_pane_g3_ParamLimits

0x4eb2,	// (0x00060b87) camera2_autofocus_pane_g3

0x4ebe,	// (0x00060b93) camera2_autofocus_pane_g4_ParamLimits

0x4ebe,	// (0x00060b93) camera2_autofocus_pane_g4

0x4eca,	// (0x00060b9f) camera2_autofocus_pane_g5_ParamLimits

0x4eca,	// (0x00060b9f) camera2_autofocus_pane_g5

0x0004,

0xf5bf,	// (0x0006b294) camera2_autofocus_pane_g_ParamLimits

0xf5bf,	// (0x0006b294) camera2_autofocus_pane_g

0xcf4d,	// (0x00068c22) camera2_autofocus_pane_cp_g2

0xcf55,	// (0x00068c2a) camera2_autofocus_pane_cp_g3

0xcf5d,	// (0x00068c32) camera2_autofocus_pane_cp_g4

0xcf65,	// (0x00068c3a) camera2_autofocus_pane_cp_g5

0x0004,

0x0670,	// (0x0005c345) camera2_autofocus_pane_cp_g

0x56aa,	// (0x0006137f) popup_dialer_spcha_window

0x9c0a,	// (0x000658df) bg_popup_sub_pane_cp07

0xd0d4,	// (0x00068da9) list_spcha_pane

0xd0dc,	// (0x00068db1) list_single_spcha_pane_ParamLimits

0xd0dc,	// (0x00068db1) list_single_spcha_pane

0x9c0a,	// (0x000658df) list_highlight_pane_cp06

0xd0ed,	// (0x00068dc2) list_single_spcha_pane_t1

0xc2a5,	// (0x00067f7a) popup_call2_audio_out_window_g4_ParamLimits

0xc2a5,	// (0x00067f7a) popup_call2_audio_out_window_g4

0x11b9,	// (0x0005ce8e) main_imed2_pane

0x454a,	// (0x0006021f) popup_imed_adjust2_window

0x455d,	// (0x00060232) popup_imed_trans_window_ParamLimits

0x455d,	// (0x00060232) popup_imed_trans_window

0xcaae,	// (0x00068783) popup_blid_sat_info2_window_t1

0xcabc,	// (0x00068791) popup_blid_sat_info2_window_t2

0x000a,

0x059f,	// (0x0005c274) popup_blid_sat_info2_window_t

0x59ac,	// (0x00061681) aid_size_cell_colour_35

0x59c6,	// (0x0006169b) aid_size_cell_colour_112

0x59dd,	// (0x000616b2) aid_size_cell_effect

0xb17c,	// (0x00066e51) bg_tb_trans_pane_cp02

0xb18a,	// (0x00066e5f) heading_imed_pane

0x59f7,	// (0x000616cc) listscroll_imed_pane

0xd0fb,	// (0x00068dd0) heading_imed_pane_g1

0xd103,	// (0x00068dd8) heading_imed_pane_t1

0xd111,	// (0x00068de6) grid_imed_colour_35_pane_ParamLimits

0xd111,	// (0x00068de6) grid_imed_colour_35_pane

0x5a03,	// (0x000616d8) grid_imed_effect_pane

0xd128,	// (0x00068dfd) list_imed_aspect_pane

0x5a13,	// (0x000616e8) scroll_pane_cp027_ParamLimits

0x5a13,	// (0x000616e8) scroll_pane_cp027

0x5a1f,	// (0x000616f4) cell_imed_effect_pane_ParamLimits

0x5a1f,	// (0x000616f4) cell_imed_effect_pane

0xd130,	// (0x00068e05) cell_imed_colour_pane_ParamLimits

0xd130,	// (0x00068e05) cell_imed_colour_pane

0xd172,	// (0x00068e47) cell_imed_colour_pane_g1_ParamLimits

0xd172,	// (0x00068e47) cell_imed_colour_pane_g1

0xd183,	// (0x00068e58) hgihlgiht_grid_pane_cp016_ParamLimits

0xd183,	// (0x00068e58) hgihlgiht_grid_pane_cp016

0x5a37,	// (0x0006170c) cell_imed_effect_pane_g1

0x5a3f,	// (0x00061714) grid_highlight_pane_cp017

0xd194,	// (0x00068e69) list_imed_single_pane_ParamLimits

0xd194,	// (0x00068e69) list_imed_single_pane

0x9c0a,	// (0x000658df) list_highlight_pane_cp07

0xd1a9,	// (0x00068e7e) list_imed_aspect_pane_comp1_t1

0xc868,	// (0x0006853d) bg_tb_trans_pane_cp05

0xd1cb,	// (0x00068ea0) popup_imed_adjust2_window_g1

0xd1f2,	// (0x00068ec7) popup_imed_adjust2_window_t1

0xd20a,	// (0x00068edf) slider_imed_adjust_pane

0xd21e,	// (0x00068ef3) slider_imed_adjust_pane_g1

0xd22e,	// (0x00068f03) slider_imed_adjust_pane_g2

0xd23e,	// (0x00068f13) slider_imed_adjust_pane_g3

0xd24f,	// (0x00068f24) slider_imed_adjust_pane_g4

0x0003,

0x06e3,	// (0x0005c3b8) slider_imed_adjust_pane_g

0x5a48,	// (0x0006171d) aid_size_cell_clipart2

0x5a54,	// (0x00061729) grid_imed_clipart_pane

0xd260,	// (0x00068f35) scroll_pane_cp031

0x5a5e,	// (0x00061733) cell_imed_clipart_pane_ParamLimits

0x5a5e,	// (0x00061733) cell_imed_clipart_pane

0x5a80,	// (0x00061755) cell_imed_clipart_pane_g1

0x9c0a,	// (0x000658df) grid_highlight_pane_cp014

0x57de,	// (0x000614b3) main_clock2_pane_g1_ParamLimits

0x57de,	// (0x000614b3) main_clock2_pane_g1

0x58ad,	// (0x00061582) aid_call2_pane_cp10

0x58bf,	// (0x00061594) aid_call_pane_cp10

0xb2a7,	// (0x00066f7c) popup_clock_analogue_window_cp10_g1

0xb2a7,	// (0x00066f7c) popup_clock_analogue_window_cp10_g2

0x58d1,	// (0x000615a6) popup_clock_analogue_window_cp10_g3

0x58d1,	// (0x000615a6) popup_clock_analogue_window_cp10_g4

0xb2a7,	// (0x00066f7c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf658,	// (0x0006b32d) popup_clock_analogue_window_cp10_g

0x58e3,	// (0x000615b8) popup_clock_analogue_window_cp10_t1

0x5914,	// (0x000615e9) clock_digital_number_pane_cp10_ParamLimits

0x5914,	// (0x000615e9) clock_digital_number_pane_cp10

0x592c,	// (0x00061601) clock_digital_number_pane_cp11_ParamLimits

0x592c,	// (0x00061601) clock_digital_number_pane_cp11

0x5944,	// (0x00061619) clock_digital_number_pane_cp12_ParamLimits

0x5944,	// (0x00061619) clock_digital_number_pane_cp12

0x595c,	// (0x00061631) clock_digital_number_pane_cp13_ParamLimits

0x595c,	// (0x00061631) clock_digital_number_pane_cp13

0x5974,	// (0x00061649) clock_digital_separator_pane_cp10_ParamLimits

0x5974,	// (0x00061649) clock_digital_separator_pane_cp10

0x598c,	// (0x00061661) popup_clock_digital_window_cp02_t1_ParamLimits

0x598c,	// (0x00061661) popup_clock_digital_window_cp02_t1

0xa764,	// (0x00066439) clock_digital_number_pane_cp10_g1

0xa764,	// (0x00066439) clock_digital_number_pane_cp10_g2

0x0001,

0xf663,	// (0x0006b338) clock_digital_number_pane_cp10_g

0xa764,	// (0x00066439) clock_digital_separator_pane_cp10_g1

0xa764,	// (0x00066439) clock_digital_separator_pane_g2_cp10

0xb432,	// (0x00067107) navi_pane_vded_g4

0xb43b,	// (0x00067110) navi_pane_vded_g5

0xb444,	// (0x00067119) navi_pane_vded_t1

0x11b9,	// (0x0005ce8e) main_vded_pane

0x5a89,	// (0x0006175e) main_vded_pane_g1

0x5a95,	// (0x0006176a) main_vded_pane_g2

0x5a9f,	// (0x00061774) main_vded_pane_g3

0x0002,

0xf668,	// (0x0006b33d) main_vded_pane_g

0x5aa9,	// (0x0006177e) main_vded_pane_t1

0x5ab7,	// (0x0006178c) main_vded_pane_t2

0x0001,

0xf66f,	// (0x0006b344) main_vded_pane_t

0x5ac5,	// (0x0006179a) vded_slider_pane

0x5acf,	// (0x000617a4) vded_video_pane

0xd268,	// (0x00068f3d) vded_video_pane_g1

0x5ad9,	// (0x000617ae) vded_video_pane_g2

0xcc85,	// (0x0006895a) vded_video_pane_g3

0x0002,

0xf674,	// (0x0006b349) vded_video_pane_g

0xd272,	// (0x00068f47) vded_slider_pane_g1

0xc9c3,	// (0x00068698) vded_slider_pane_g2

0xd27b,	// (0x00068f50) vded_slider_pane_g3

0xd284,	// (0x00068f59) vded_slider_pane_g4

0xd28d,	// (0x00068f62) vded_slider_pane_g5

0x0004,

0x0704,	// (0x0005c3d9) vded_slider_pane_g

0x55ae,	// (0x00061283) mup3_rocker_pane_ParamLimits

0x55ae,	// (0x00061283) mup3_rocker_pane

0x5ae2,	// (0x000617b7) mup3_control_keys_pane_g1

0x5aea,	// (0x000617bf) mup3_control_keys_pane_g2

0x5af2,	// (0x000617c7) mup3_control_keys_pane_g3

0x5afa,	// (0x000617cf) mup3_control_keys_pane_g4

0x0003,

0xf67b,	// (0x0006b350) mup3_control_keys_pane_g

0x116d,	// (0x0005ce42) popup_toolbar2_fixed_window_cp01_ParamLimits

0x116d,	// (0x0005ce42) popup_toolbar2_fixed_window_cp01

0x55c8,	// (0x0006129d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55c8,	// (0x0006129d) popup_toolbar2_fixed_window_cp02

0xbbe4,	// (0x000678b9) popup_call2_audio_second_window_t4_ParamLimits

0xbbe4,	// (0x000678b9) popup_call2_audio_second_window_t4

0xc112,	// (0x00067de7) popup_call2_audio_first_window_t6_ParamLimits

0xc112,	// (0x00067de7) popup_call2_audio_first_window_t6

0xc3a8,	// (0x0006807d) popup_call2_audio_out_window_t6_ParamLimits

0xc3a8,	// (0x0006807d) popup_call2_audio_out_window_t6

0x11b9,	// (0x0005ce8e) main_vitu_pane

0x5b0a,	// (0x000617df) aid_size_cell_itu_ParamLimits

0x5b0a,	// (0x000617df) aid_size_cell_itu

0xe5c5,	// (0x0006a29a) bg_popup_window_pane_cp08_ParamLimits

0xe5c5,	// (0x0006a29a) bg_popup_window_pane_cp08

0x5b18,	// (0x000617ed) field_vitu_entry_pane_ParamLimits

0x5b18,	// (0x000617ed) field_vitu_entry_pane

0x5b27,	// (0x000617fc) grid_vitu_function_pane_ParamLimits

0x5b27,	// (0x000617fc) grid_vitu_function_pane

0x5b37,	// (0x0006180c) grid_vitu_itu_pane_ParamLimits

0x5b37,	// (0x0006180c) grid_vitu_itu_pane

0x5b47,	// (0x0006181c) cell_vitu_itu_pane_ParamLimits

0x5b47,	// (0x0006181c) cell_vitu_itu_pane

0x5b5c,	// (0x00061831) cell_vitu_function_pane_ParamLimits

0x5b5c,	// (0x00061831) cell_vitu_function_pane

0xb17c,	// (0x00066e51) bg_popup_sub_pane_cp08_ParamLimits

0xb17c,	// (0x00066e51) bg_popup_sub_pane_cp08

0x5b6e,	// (0x00061843) field_vitu_entry_pane_t1_ParamLimits

0x5b6e,	// (0x00061843) field_vitu_entry_pane_t1

0xd2ae,	// (0x00068f83) field_vitu_entry_pane_t2_ParamLimits

0xd2ae,	// (0x00068f83) field_vitu_entry_pane_t2

0x0001,

0xf684,	// (0x0006b359) field_vitu_entry_pane_t_ParamLimits

0xf684,	// (0x0006b359) field_vitu_entry_pane_t

0xd2cb,	// (0x00068fa0) bg_button_pane_cp05_ParamLimits

0xd2cb,	// (0x00068fa0) bg_button_pane_cp05

0x5b8a,	// (0x0006185f) cell_vitu_itu_pane_g1

0x5ba2,	// (0x00061877) cell_vitu_itu_pane_t1_ParamLimits

0x5ba2,	// (0x00061877) cell_vitu_itu_pane_t1

0x5bb4,	// (0x00061889) cell_vitu_itu_pane_t2_ParamLimits

0x5bb4,	// (0x00061889) cell_vitu_itu_pane_t2

0x0002,

0xf689,	// (0x0006b35e) cell_vitu_itu_pane_t_ParamLimits

0xf689,	// (0x0006b35e) cell_vitu_itu_pane_t

0xd2d9,	// (0x00068fae) bg_button_pane_cp07

0x5be9,	// (0x000618be) cell_vitu_function_pane_g1

0x144b,	// (0x0005d120) main_calc_pane_g1

0x0f2a,	// (0x0005cbff) aid_visual_content_pane

0x11b9,	// (0x0005ce8e) main_vradio_pane

0x5bf2,	// (0x000618c7) main_vradio_pane_g1_ParamLimits

0x5bf2,	// (0x000618c7) main_vradio_pane_g1

0xd2e3,	// (0x00068fb8) main_vradio_pane_g2_ParamLimits

0xd2e3,	// (0x00068fb8) main_vradio_pane_g2

0x0001,

0xf690,	// (0x0006b365) main_vradio_pane_g_ParamLimits

0xf690,	// (0x0006b365) main_vradio_pane_g

0x5c02,	// (0x000618d7) main_vradio_pane_t1_ParamLimits

0x5c02,	// (0x000618d7) main_vradio_pane_t1

0x5c14,	// (0x000618e9) main_vradio_pane_t2_ParamLimits

0x5c14,	// (0x000618e9) main_vradio_pane_t2

0xd2f0,	// (0x00068fc5) main_vradio_pane_t3_ParamLimits

0xd2f0,	// (0x00068fc5) main_vradio_pane_t3

0x0002,

0xf695,	// (0x0006b36a) main_vradio_pane_t_ParamLimits

0xf695,	// (0x0006b36a) main_vradio_pane_t

0x5c26,	// (0x000618fb) vradio_rocker_control_pane_ParamLimits

0x5c26,	// (0x000618fb) vradio_rocker_control_pane

0x5c32,	// (0x00061907) vradio_station_info_pane_ParamLimits

0x5c32,	// (0x00061907) vradio_station_info_pane

0xd304,	// (0x00068fd9) vradio_frequency_info_pane_ParamLimits

0xd304,	// (0x00068fd9) vradio_frequency_info_pane

0xcc85,	// (0x0006895a) vradio_station_info_pane_g1

0xd313,	// (0x00068fe8) vradio_station_info_pane_t1_ParamLimits

0xd313,	// (0x00068fe8) vradio_station_info_pane_t1

0xd335,	// (0x0006900a) vradio_station_info_pane_t2_ParamLimits

0xd335,	// (0x0006900a) vradio_station_info_pane_t2

0x0001,

0x0735,	// (0x0005c40a) vradio_station_info_pane_t_ParamLimits

0x0735,	// (0x0005c40a) vradio_station_info_pane_t

0xd347,	// (0x0006901c) vradio_tuning_pane

0xd34f,	// (0x00069024) vradio_rocker_control_pane_g1

0xd357,	// (0x0006902c) vradio_rocker_control_pane_g2

0xd35f,	// (0x00069034) vradio_rocker_control_pane_g3

0xd367,	// (0x0006903c) vradio_rocker_control_pane_g4

0xd36f,	// (0x00069044) vradio_rocker_control_pane_g5

0x0004,

0x073a,	// (0x0005c40f) vradio_rocker_control_pane_g

0x5c41,	// (0x00061916) vradio_frequency_info_pane_g1

0xd377,	// (0x0006904c) vradio_frequency_info_pane_t1_ParamLimits

0xd377,	// (0x0006904c) vradio_frequency_info_pane_t1

0x5c4b,	// (0x00061920) vradio_tuning_pane_g1

0x5c54,	// (0x00061929) vradio_tuning_pane_t1

0x0f73,	// (0x0005cc48) area_side_right_pane_ParamLimits

0x0f73,	// (0x0005cc48) area_side_right_pane

0xc823,	// (0x000684f8) status_small_pane_g1

0xc82b,	// (0x00068500) status_small_pane_g2

0xc834,	// (0x00068509) status_small_pane_g3

0xc83d,	// (0x00068512) status_small_pane_g4

0x0003,

0x04f5,	// (0x0005c1ca) status_small_pane_g

0xc846,	// (0x0006851b) status_small_pane_t1

0x11b9,	// (0x0005ce8e) main_video3_pane

0xd38b,	// (0x00069060) cams_zoom_vslider_pane

0xd393,	// (0x00069068) image3_wide_pane_ParamLimits

0xd393,	// (0x00069068) image3_wide_pane

0xd3ad,	// (0x00069082) image3_wide_small_pane

0xd3b9,	// (0x0006908e) main_video3_pane_g1_ParamLimits

0xd3b9,	// (0x0006908e) main_video3_pane_g1

0xd3d5,	// (0x000690aa) main_video3_pane_g2_ParamLimits

0xd3d5,	// (0x000690aa) main_video3_pane_g2

0x0001,

0x0745,	// (0x0005c41a) main_video3_pane_g_ParamLimits

0x0745,	// (0x0005c41a) main_video3_pane_g

0xd3f1,	// (0x000690c6) main_video3_pane_t1_ParamLimits

0xd3f1,	// (0x000690c6) main_video3_pane_t1

0xd41c,	// (0x000690f1) main_video3_pane_t2_ParamLimits

0xd41c,	// (0x000690f1) main_video3_pane_t2

0xd447,	// (0x0006911c) main_video3_pane_t3_ParamLimits

0xd447,	// (0x0006911c) main_video3_pane_t3

0x0002,

0x074a,	// (0x0005c41f) main_video3_pane_t_ParamLimits

0x074a,	// (0x0005c41f) main_video3_pane_t

0xd474,	// (0x00069149) cams_zoom_vslider_pane_g1

0xd47d,	// (0x00069152) cams_zoom_vslider_pane_g2

0x0001,

0x0751,	// (0x0005c426) cams_zoom_vslider_pane_g

0xd485,	// (0x0006915a) small_slider_vertical_pane

0xcc85,	// (0x0006895a) small_slider_vertical_pane_g1

0xcc85,	// (0x0006895a) small_slider_vertical_pane_g2

0xd48d,	// (0x00069162) small_slider_vertical_pane_g3

0x0002,

0x0756,	// (0x0005c42b) small_slider_vertical_pane_g

0x11b9,	// (0x0005ce8e) main_hwr_training_pane

0xd496,	// (0x0006916b) hwr_training_instruct_pane_ParamLimits

0xd496,	// (0x0006916b) hwr_training_instruct_pane

0x5c63,	// (0x00061938) hwr_training_navi_pane_ParamLimits

0x5c63,	// (0x00061938) hwr_training_navi_pane

0x5c7d,	// (0x00061952) hwr_training_write_pane_ParamLimits

0x5c7d,	// (0x00061952) hwr_training_write_pane

0x9c0a,	// (0x000658df) bg_frame_shadow_pane

0xd4cd,	// (0x000691a2) hwr_training_write_pane_g1

0xd4d5,	// (0x000691aa) hwr_training_write_pane_g2

0xd4dd,	// (0x000691b2) hwr_training_write_pane_g3

0xd4e5,	// (0x000691ba) hwr_training_write_pane_g4

0xd4ed,	// (0x000691c2) hwr_training_write_pane_g5

0xd4f5,	// (0x000691ca) hwr_training_write_pane_g6

0xd4fd,	// (0x000691d2) hwr_training_write_pane_g7

0x0006,

0x075d,	// (0x0005c432) hwr_training_write_pane_g

0x5cb5,	// (0x0006198a) hwr_training_navi_pane_g1_ParamLimits

0x5cb5,	// (0x0006198a) hwr_training_navi_pane_g1

0x5cc7,	// (0x0006199c) hwr_training_navi_pane_g2_ParamLimits

0x5cc7,	// (0x0006199c) hwr_training_navi_pane_g2

0x5cd9,	// (0x000619ae) hwr_training_navi_pane_g3_ParamLimits

0x5cd9,	// (0x000619ae) hwr_training_navi_pane_g3

0x5ce9,	// (0x000619be) hwr_training_navi_pane_g4_ParamLimits

0x5ce9,	// (0x000619be) hwr_training_navi_pane_g4

0x0004,

0xf69c,	// (0x0006b371) hwr_training_navi_pane_g_ParamLimits

0xf69c,	// (0x0006b371) hwr_training_navi_pane_g

0x5d03,	// (0x000619d8) hwr_training_navi_pane_t1

0x5d11,	// (0x000619e6) list_single_hwr_training_instruct_pane_ParamLimits

0x5d11,	// (0x000619e6) list_single_hwr_training_instruct_pane

0xd505,	// (0x000691da) list_single_hwr_training_instruct_pane_t1

0xcbc5,	// (0x0006889a) bg_frame_shadow_pane_g1

0xd514,	// (0x000691e9) bg_frame_shadow_pane_g2

0xd51c,	// (0x000691f1) bg_frame_shadow_pane_g3

0xd524,	// (0x000691f9) bg_frame_shadow_pane_g4

0xd52c,	// (0x00069201) bg_frame_shadow_pane_g5

0xd534,	// (0x00069209) bg_frame_shadow_pane_g6

0xd53c,	// (0x00069211) bg_frame_shadow_pane_g7

0xa8ea,	// (0x000665bf) bg_frame_shadow_pane_g8

0x0007,

0xf6a7,	// (0x0006b37c) bg_frame_shadow_pane_g

0x11b9,	// (0x0005ce8e) main_video_tele_dialer_pane

0x5d36,	// (0x00061a0b) aid_size_cell_video_keypad_ParamLimits

0x5d36,	// (0x00061a0b) aid_size_cell_video_keypad

0x5d46,	// (0x00061a1b) grid_video_dialer_keypad_pane_ParamLimits

0x5d46,	// (0x00061a1b) grid_video_dialer_keypad_pane

0x5d7a,	// (0x00061a4f) video_down_pane_cp_ParamLimits

0x5d7a,	// (0x00061a4f) video_down_pane_cp

0x5da4,	// (0x00061a79) cell_video_dialer_keypad_pane_ParamLimits

0x5da4,	// (0x00061a79) cell_video_dialer_keypad_pane

0xd544,	// (0x00069219) bg_button_pane_cp08_ParamLimits

0xd544,	// (0x00069219) bg_button_pane_cp08

0x5db9,	// (0x00061a8e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5db9,	// (0x00061a8e) cell_video_dialer_keypad_pane_g1

0x55a2,	// (0x00061277) mup3_rocker2_pane_ParamLimits

0x55a2,	// (0x00061277) mup3_rocker2_pane

0xcc85,	// (0x0006895a) mup3_rocker2_pane_g1

0x44ba,	// (0x0006018f) main_dialer2_pane

0x11b9,	// (0x0005ce8e) main_mp4_pane

0x5df8,	// (0x00061acd) main_mp4_pane_g1_ParamLimits

0x5df8,	// (0x00061acd) main_mp4_pane_g1

0x5e06,	// (0x00061adb) main_mp4_pane_g2_ParamLimits

0x5e06,	// (0x00061adb) main_mp4_pane_g2

0x5e14,	// (0x00061ae9) main_mp4_pane_g3_ParamLimits

0x5e14,	// (0x00061ae9) main_mp4_pane_g3

0x5e59,	// (0x00061b2e) main_mp4_pane_g4_ParamLimits

0x5e59,	// (0x00061b2e) main_mp4_pane_g4

0x5e81,	// (0x00061b56) main_mp4_pane_g5_ParamLimits

0x5e81,	// (0x00061b56) main_mp4_pane_g5

0x0005,

0xf6c7,	// (0x0006b39c) main_mp4_pane_g_ParamLimits

0xf6c7,	// (0x0006b39c) main_mp4_pane_g

0x5ed1,	// (0x00061ba6) main_mp4_pane_t1_ParamLimits

0x5ed1,	// (0x00061ba6) main_mp4_pane_t1

0x5f2d,	// (0x00061c02) main_mp4_pane_t2_ParamLimits

0x5f2d,	// (0x00061c02) main_mp4_pane_t2

0xd550,	// (0x00069225) main_mp4_pane_t3_ParamLimits

0xd550,	// (0x00069225) main_mp4_pane_t3

0x5f7f,	// (0x00061c54) main_mp4_pane_t4_ParamLimits

0x5f7f,	// (0x00061c54) main_mp4_pane_t4

0x0003,

0xf6d4,	// (0x0006b3a9) main_mp4_pane_t_ParamLimits

0xf6d4,	// (0x0006b3a9) main_mp4_pane_t

0x5fc3,	// (0x00061c98) mp4_progress_pane_ParamLimits

0x5fc3,	// (0x00061c98) mp4_progress_pane

0x600d,	// (0x00061ce2) mp4_rocker_pane_ParamLimits

0x600d,	// (0x00061ce2) mp4_rocker_pane

0xd578,	// (0x0006924d) mp4_progress_pane_t1

0xd591,	// (0x00069266) mp4_progress_pane_t2

0x0001,

0x07ad,	// (0x0005c482) mp4_progress_pane_t

0xd5aa,	// (0x0006927f) mup_progress_pane_cp04

0xdcfe,	// (0x000699d3) mp4_rocker_pane_g1

0x602d,	// (0x00061d02) aid_cell_size_keypad2_ParamLimits

0x602d,	// (0x00061d02) aid_cell_size_keypad2

0x603d,	// (0x00061d12) dialer2_ne_pane_ParamLimits

0x603d,	// (0x00061d12) dialer2_ne_pane

0x604b,	// (0x00061d20) grid_dialer2_keypad_pane_ParamLimits

0x604b,	// (0x00061d20) grid_dialer2_keypad_pane

0xdd43,	// (0x00069a18) bg_popup_call_pane_cp07_ParamLimits

0xdd43,	// (0x00069a18) bg_popup_call_pane_cp07

0x605b,	// (0x00061d30) dialer2_ne_pane_t1_ParamLimits

0x605b,	// (0x00061d30) dialer2_ne_pane_t1

0x6080,	// (0x00061d55) cell_dialer2_keypad_pane_ParamLimits

0x6080,	// (0x00061d55) cell_dialer2_keypad_pane

0xd5c8,	// (0x0006929d) bg_button_pane_pane_cp04_ParamLimits

0xd5c8,	// (0x0006929d) bg_button_pane_pane_cp04

0x6095,	// (0x00061d6a) cell_dialer2_keypad_pane_g1_ParamLimits

0x6095,	// (0x00061d6a) cell_dialer2_keypad_pane_g1

0x20da,	// (0x0005ddaf) aid_placing_vt_set_content_ParamLimits

0x20da,	// (0x0005ddaf) aid_placing_vt_set_content

0x2106,	// (0x0005dddb) aid_placing_vt_set_title_ParamLimits

0x2106,	// (0x0005dddb) aid_placing_vt_set_title

0x11b9,	// (0x0005ce8e) main_image3_pane

0x612f,	// (0x00061e04) area_side_right_pane_cp01_ParamLimits

0x612f,	// (0x00061e04) area_side_right_pane_cp01

0x615c,	// (0x00061e31) main_image3_pane_g1_ParamLimits

0x615c,	// (0x00061e31) main_image3_pane_g1

0x616a,	// (0x00061e3f) main_image3_pane_g2_ParamLimits

0x616a,	// (0x00061e3f) main_image3_pane_g2

0x6183,	// (0x00061e58) main_image3_pane_g3_ParamLimits

0x6183,	// (0x00061e58) main_image3_pane_g3

0x619c,	// (0x00061e71) main_image3_pane_g4_ParamLimits

0x619c,	// (0x00061e71) main_image3_pane_g4

0x0003,

0xf6e7,	// (0x0006b3bc) main_image3_pane_g_ParamLimits

0xf6e7,	// (0x0006b3bc) main_image3_pane_g

0x61b5,	// (0x00061e8a) main_image3_pane_t1_ParamLimits

0x61b5,	// (0x00061e8a) main_image3_pane_t1

0x61da,	// (0x00061eaf) main_image3_pane_t2_ParamLimits

0x61da,	// (0x00061eaf) main_image3_pane_t2

0x61f9,	// (0x00061ece) main_image3_pane_t3_ParamLimits

0x61f9,	// (0x00061ece) main_image3_pane_t3

0x0003,

0xf6f0,	// (0x0006b3c5) main_image3_pane_t_ParamLimits

0xf6f0,	// (0x0006b3c5) main_image3_pane_t

0xe5c5,	// (0x0006a29a) grid_sctrl_middle_pane_cp01_ParamLimits

0xe5c5,	// (0x0006a29a) grid_sctrl_middle_pane_cp01

0x625a,	// (0x00061f2f) cell_sctrl_middle_pane_cp01_ParamLimits

0x625a,	// (0x00061f2f) cell_sctrl_middle_pane_cp01

0x626b,	// (0x00061f40) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x626b,	// (0x00061f40) cell_sctrl_middle_pane_cp01_g1

0x11b9,	// (0x0005ce8e) main_call4_pane

0x6278,	// (0x00061f4d) aid_size_button_call4_ParamLimits

0x6278,	// (0x00061f4d) aid_size_button_call4

0x62a8,	// (0x00061f7d) call4_windows_pane_ParamLimits

0x62a8,	// (0x00061f7d) call4_windows_pane

0x62c2,	// (0x00061f97) grid_call4_button_pane_ParamLimits

0x62c2,	// (0x00061f97) grid_call4_button_pane

0xd5d4,	// (0x000692a9) call4_windows_conf_pane

0xd5eb,	// (0x000692c0) popup_call4_audio_first_window_ParamLimits

0xd5eb,	// (0x000692c0) popup_call4_audio_first_window

0xd637,	// (0x0006930c) popup_call4_audio_second_window_ParamLimits

0xd637,	// (0x0006930c) popup_call4_audio_second_window

0xd64b,	// (0x00069320) popup_call4_audio_wait_window_ParamLimits

0xd64b,	// (0x00069320) popup_call4_audio_wait_window

0x62e6,	// (0x00061fbb) cell_call4_button_pane_ParamLimits

0x62e6,	// (0x00061fbb) cell_call4_button_pane

0x630b,	// (0x00061fe0) bg_button_pane_cp09_ParamLimits

0x630b,	// (0x00061fe0) bg_button_pane_cp09

0x6317,	// (0x00061fec) cell_call4_button_pane_g1_ParamLimits

0x6317,	// (0x00061fec) cell_call4_button_pane_g1

0x6324,	// (0x00061ff9) cell_call4_button_pane_t1_ParamLimits

0x6324,	// (0x00061ff9) cell_call4_button_pane_t1

0xd693,	// (0x00069368) popup_call4_audio_conf_window_ParamLimits

0xd693,	// (0x00069368) popup_call4_audio_conf_window

0x55d5,	// (0x000612aa) mup3_progress_pane_t1_ParamLimits

0x55f4,	// (0x000612c9) mup3_progress_pane_t2_ParamLimits

0xcf83,	// (0x00068c58) mup3_progress_pane_t3_ParamLimits

0xf631,	// (0x0006b306) mup3_progress_pane_t_ParamLimits

0xcfa0,	// (0x00068c75) mup_progress_pane_cp03_ParamLimits

0x5b02,	// (0x000617d7) mup3_control_keys_pane_g4_copy1

0x5ff1,	// (0x00061cc6) mp4_rocker2_pane_ParamLimits

0x5ff1,	// (0x00061cc6) mp4_rocker2_pane

0xd6a7,	// (0x0006937c) mp4_rocker2_pane_g1

0xd6af,	// (0x00069384) mp4_rocker2_pane_g2

0x6336,	// (0x0006200b) mp4_rocker2_pane_g3

0x633e,	// (0x00062013) mp4_rocker2_pane_g4

0x6346,	// (0x0006201b) mp4_rocker2_pane_g5

0x0004,

0xf6f9,	// (0x0006b3ce) mp4_rocker2_pane_g

0x11b9,	// (0x0005ce8e) main_camera4_pane

0x11b9,	// (0x0005ce8e) main_video4_pane

0x5d56,	// (0x00061a2b) main_video_tele_dialer_pane_t1_ParamLimits

0x5d56,	// (0x00061a2b) main_video_tele_dialer_pane_t1

0x5d68,	// (0x00061a3d) main_video_tele_dialer_pane_t2_ParamLimits

0x5d68,	// (0x00061a3d) main_video_tele_dialer_pane_t2

0x0001,

0xf6b8,	// (0x0006b38d) main_video_tele_dialer_pane_t_ParamLimits

0xf6b8,	// (0x0006b38d) main_video_tele_dialer_pane_t

0x6366,	// (0x0006203b) cam4_autofocus_pane_ParamLimits

0x6366,	// (0x0006203b) cam4_autofocus_pane

0x6380,	// (0x00062055) cam4_image_uncrop_pane_ParamLimits

0x6380,	// (0x00062055) cam4_image_uncrop_pane

0x6397,	// (0x0006206c) cam4_indicators_pane_ParamLimits

0x6397,	// (0x0006206c) cam4_indicators_pane

0x63b3,	// (0x00062088) main_camera4_pane_g1_ParamLimits

0x63b3,	// (0x00062088) main_camera4_pane_g1

0x63bf,	// (0x00062094) main_camera4_pane_g2_ParamLimits

0x63bf,	// (0x00062094) main_camera4_pane_g2

0x63bf,	// (0x00062094) main_camera4_pane_g3_ParamLimits

0x63bf,	// (0x00062094) main_camera4_pane_g3

0x63cb,	// (0x000620a0) main_camera4_pane_g4_ParamLimits

0x63cb,	// (0x000620a0) main_camera4_pane_g4

0x63d7,	// (0x000620ac) main_camera4_pane_g5_ParamLimits

0x63d7,	// (0x000620ac) main_camera4_pane_g5

0x0005,

0xf704,	// (0x0006b3d9) main_camera4_pane_g_ParamLimits

0xf704,	// (0x0006b3d9) main_camera4_pane_g

0x63f1,	// (0x000620c6) main_camera4_pane_t1_ParamLimits

0x63f1,	// (0x000620c6) main_camera4_pane_t1

0x6439,	// (0x0006210e) bg_tb_trans_pane_cp06

0x644f,	// (0x00062124) cam4_indicators_pane_g1

0x6460,	// (0x00062135) cam4_indicators_pane_g2

0x0002,

0xf71f,	// (0x0006b3f4) cam4_indicators_pane_g

0x647e,	// (0x00062153) cam4_indicators_pane_t1

0x64a8,	// (0x0006217d) main_video4_pane_g1_ParamLimits

0x64a8,	// (0x0006217d) main_video4_pane_g1

0x64b4,	// (0x00062189) main_video4_pane_g2_ParamLimits

0x64b4,	// (0x00062189) main_video4_pane_g2

0x64c0,	// (0x00062195) main_video4_pane_g3_ParamLimits

0x64c0,	// (0x00062195) main_video4_pane_g3

0x64cc,	// (0x000621a1) main_video4_pane_g4_ParamLimits

0x64cc,	// (0x000621a1) main_video4_pane_g4

0x0004,

0xf726,	// (0x0006b3fb) main_video4_pane_g_ParamLimits

0xf726,	// (0x0006b3fb) main_video4_pane_g

0x64ec,	// (0x000621c1) vid4_indicators_pane_ParamLimits

0x64ec,	// (0x000621c1) vid4_indicators_pane

0x650b,	// (0x000621e0) video4_image_uncrop_cif_pane_ParamLimits

0x650b,	// (0x000621e0) video4_image_uncrop_cif_pane

0x651a,	// (0x000621ef) video4_image_uncrop_nhd_pane_ParamLimits

0x651a,	// (0x000621ef) video4_image_uncrop_nhd_pane

0x6380,	// (0x00062055) video4_image_uncrop_vga_pane_ParamLimits

0x6380,	// (0x00062055) video4_image_uncrop_vga_pane

0x44ac,	// (0x00060181) bg_tb_trans_pane_cp07

0x6531,	// (0x00062206) vid4_indicators_pane_g1

0x6545,	// (0x0006221a) vid4_indicators_pane_g2

0x6559,	// (0x0006222e) vid4_indicators_pane_g3

0x0004,

0xf731,	// (0x0006b406) vid4_indicators_pane_g

0x6588,	// (0x0006225d) vid4_indicators_pane_t1

0x659f,	// (0x00062274) cam4_autofocus_pane_g1

0x65a7,	// (0x0006227c) cam4_autofocus_pane_g2

0x65af,	// (0x00062284) cam4_autofocus_pane_g3

0x0002,

0xf73c,	// (0x0006b411) cam4_autofocus_pane_g

0x65b7,	// (0x0006228c) cam4_autofocus_pane_g3_copy1

0x5d88,	// (0x00061a5d) video_down_pane_cp_t1

0x5d96,	// (0x00061a6b) video_down_pane_cp_t2

0x0001,

0xf6bd,	// (0x0006b392) video_down_pane_cp_t

0x119f,	// (0x0005ce74) popup_vitu2_window_ParamLimits

0x119f,	// (0x0005ce74) popup_vitu2_window

0x65bf,	// (0x00062294) aid_size_cell2_itu2_ParamLimits

0x65bf,	// (0x00062294) aid_size_cell2_itu2

0x65e1,	// (0x000622b6) aid_size_cell_itu2_ParamLimits

0x65e1,	// (0x000622b6) aid_size_cell_itu2

0x6625,	// (0x000622fa) bg_popup_window_pane_cp09_ParamLimits

0x6625,	// (0x000622fa) bg_popup_window_pane_cp09

0x6633,	// (0x00062308) field_vitu2_entry_pane_ParamLimits

0x6633,	// (0x00062308) field_vitu2_entry_pane

0x6653,	// (0x00062328) grid_vitu2_function_pane_ParamLimits

0x6653,	// (0x00062328) grid_vitu2_function_pane

0x6697,	// (0x0006236c) grid_vitu2_itu_pane_ParamLimits

0x6697,	// (0x0006236c) grid_vitu2_itu_pane

0x6713,	// (0x000623e8) cell_vitu2_itu_pane_ParamLimits

0x6713,	// (0x000623e8) cell_vitu2_itu_pane

0x672c,	// (0x00062401) cell_vitu2_function_pane_ParamLimits

0x672c,	// (0x00062401) cell_vitu2_function_pane

0xd6b7,	// (0x0006938c) bg_popup_call_pane_cp08_ParamLimits

0xd6b7,	// (0x0006938c) bg_popup_call_pane_cp08

0xd6ce,	// (0x000693a3) field_vitu2_entry_pane_g1

0xd6da,	// (0x000693af) field_vitu2_entry_pane_g2

0x0002,

0x0818,	// (0x0005c4ed) field_vitu2_entry_pane_g

0x676d,	// (0x00062442) field_vitu2_entry_pane_t1_ParamLimits

0x676d,	// (0x00062442) field_vitu2_entry_pane_t1

0x9ff2,	// (0x00065cc7) field_vitu2_entry_pane_t2_ParamLimits

0x9ff2,	// (0x00065cc7) field_vitu2_entry_pane_t2

0x0001,

0xf743,	// (0x0006b418) field_vitu2_entry_pane_t_ParamLimits

0xf743,	// (0x0006b418) field_vitu2_entry_pane_t

0x679e,	// (0x00062473) bg_button_pane_cp010_ParamLimits

0x679e,	// (0x00062473) bg_button_pane_cp010

0x67ac,	// (0x00062481) cell_vitu2_itu_pane_g1

0x67cc,	// (0x000624a1) cell_vitu2_itu_pane_t1_ParamLimits

0x67cc,	// (0x000624a1) cell_vitu2_itu_pane_t1

0x0e0e,	// (0x0005cae3) cell_vitu2_itu_pane_t2_ParamLimits

0x0e0e,	// (0x0005cae3) cell_vitu2_itu_pane_t2

0x0002,

0xf74d,	// (0x0006b422) cell_vitu2_itu_pane_t_ParamLimits

0xf74d,	// (0x0006b422) cell_vitu2_itu_pane_t

0x44ac,	// (0x00060181) bg_button_pane_cp011

0x6818,	// (0x000624ed) cell_vitu2_function_pane_g1

0x11b9,	// (0x0005ce8e) main_myfav_hc_pane

0x623b,	// (0x00061f10) popup_image3_note_pane_ParamLimits

0x623b,	// (0x00061f10) popup_image3_note_pane

0x6249,	// (0x00061f1e) popup_image3_tool_bar_pane_ParamLimits

0x6249,	// (0x00061f1e) popup_image3_tool_bar_pane

0x0e84,	// (0x0005cb59) cell_vitu2_itu_pane_t3_ParamLimits

0x0e84,	// (0x0005cb59) cell_vitu2_itu_pane_t3

0x9c0a,	// (0x000658df) bg_popup_trans_pane

0xd6fc,	// (0x000693d1) grid_image3_tool_bar_pane

0xd706,	// (0x000693db) bg_popup_trans_pane_g1

0xac4f,	// (0x00066924) bg_popup_trans_pane_g2

0xd70e,	// (0x000693e3) bg_popup_trans_pane_g3

0xd716,	// (0x000693eb) bg_popup_trans_pane_g4

0xd71e,	// (0x000693f3) bg_popup_trans_pane_g5

0xd726,	// (0x000693fb) bg_popup_trans_pane_g6

0xd72e,	// (0x00069403) bg_popup_trans_pane_g7

0xd736,	// (0x0006940b) bg_popup_trans_pane_g8

0xac2f,	// (0x00066904) bg_popup_trans_pane_g9

0x0008,

0xf754,	// (0x0006b429) bg_popup_trans_pane_g

0xd73e,	// (0x00069413) cell_image3_tool_bar_pane_ParamLimits

0xd73e,	// (0x00069413) cell_image3_tool_bar_pane

0xcc85,	// (0x0006895a) cell_image3_tool_bar_pane_g1

0x9c0a,	// (0x000658df) bg_popup_trans_pane_cp1

0xd752,	// (0x00069427) popup_image3_note_pane_t1

0xd760,	// (0x00069435) popup_image3_note_pane_t2

0xd76e,	// (0x00069443) popup_image3_note_pane_t3

0x0002,

0x0843,	// (0x0005c518) popup_image3_note_pane_t

0xd77c,	// (0x00069451) popup_image3_note_pane_t3_copy1

0x682c,	// (0x00062501) bg_myfav_hc_instruction_pane_ParamLimits

0x682c,	// (0x00062501) bg_myfav_hc_instruction_pane

0x6844,	// (0x00062519) cell_myfav_contact_pane_ParamLimits

0x6844,	// (0x00062519) cell_myfav_contact_pane

0x685e,	// (0x00062533) cell_myfav_contact_pane_cp1_ParamLimits

0x685e,	// (0x00062533) cell_myfav_contact_pane_cp1

0x6876,	// (0x0006254b) cell_myfav_contact_pane_cp2_ParamLimits

0x6876,	// (0x0006254b) cell_myfav_contact_pane_cp2

0x688e,	// (0x00062563) cell_myfav_contact_pane_cp3_ParamLimits

0x688e,	// (0x00062563) cell_myfav_contact_pane_cp3

0x68a5,	// (0x0006257a) cell_myfav_contact_pane_cp4_ParamLimits

0x68a5,	// (0x0006257a) cell_myfav_contact_pane_cp4

0x68bb,	// (0x00062590) cell_myfav_contact_pane_cp5_ParamLimits

0x68bb,	// (0x00062590) cell_myfav_contact_pane_cp5

0x68cf,	// (0x000625a4) cell_myfav_contact_pane_cp6_ParamLimits

0x68cf,	// (0x000625a4) cell_myfav_contact_pane_cp6

0x68e3,	// (0x000625b8) cell_myfav_contact_pane_cp7_ParamLimits

0x68e3,	// (0x000625b8) cell_myfav_contact_pane_cp7

0xd78a,	// (0x0006945f) listscroll_gen_pane_cp05

0x68fb,	// (0x000625d0) main_myfav_hc_pane_g1_ParamLimits

0x68fb,	// (0x000625d0) main_myfav_hc_pane_g1

0x6911,	// (0x000625e6) main_myfav_hc_pane_g2_ParamLimits

0x6911,	// (0x000625e6) main_myfav_hc_pane_g2

0x0002,

0xf767,	// (0x0006b43c) main_myfav_hc_pane_g_ParamLimits

0xf767,	// (0x0006b43c) main_myfav_hc_pane_g

0x693f,	// (0x00062614) main_myfav_hc_pane_t1_ParamLimits

0x693f,	// (0x00062614) main_myfav_hc_pane_t1

0xd793,	// (0x00069468) main_myfav_hc_pane_t2_ParamLimits

0xd793,	// (0x00069468) main_myfav_hc_pane_t2

0xd7a5,	// (0x0006947a) main_myfav_hc_pane_t3_ParamLimits

0xd7a5,	// (0x0006947a) main_myfav_hc_pane_t3

0x6956,	// (0x0006262b) main_myfav_hc_pane_t4_ParamLimits

0x6956,	// (0x0006262b) main_myfav_hc_pane_t4

0x0004,

0xf76e,	// (0x0006b443) main_myfav_hc_pane_t_ParamLimits

0xf76e,	// (0x0006b443) main_myfav_hc_pane_t

0xcc85,	// (0x0006895a) bg_myfav_hc_instruction_pane_g1

0xd7b7,	// (0x0006948c) cell_myfav_contact_pane_g1_ParamLimits

0xd7b7,	// (0x0006948c) cell_myfav_contact_pane_g1

0xd7b7,	// (0x0006948c) cell_myfav_contact_pane_g2_ParamLimits

0xd7b7,	// (0x0006948c) cell_myfav_contact_pane_g2

0xd7c3,	// (0x00069498) cell_myfav_contact_pane_g3_ParamLimits

0xd7c3,	// (0x00069498) cell_myfav_contact_pane_g3

0xcf6d,	// (0x00068c42) cell_myfav_contact_pane_g4_ParamLimits

0xcf6d,	// (0x00068c42) cell_myfav_contact_pane_g4

0xd7d0,	// (0x000694a5) cell_myfav_contact_pane_g5_ParamLimits

0xd7d0,	// (0x000694a5) cell_myfav_contact_pane_g5

0x0004,

0x085c,	// (0x0005c531) cell_myfav_contact_pane_g_ParamLimits

0x085c,	// (0x0005c531) cell_myfav_contact_pane_g

0x6927,	// (0x000625fc) main_myfav_hc_pane_g3_ParamLimits

0x6927,	// (0x000625fc) main_myfav_hc_pane_g3

0x10a8,	// (0x0005cd7d) popup_adpt_find_window

0x6980,	// (0x00062655) afind_page_pane_ParamLimits

0x6980,	// (0x00062655) afind_page_pane

0x698d,	// (0x00062662) aid_size_cell_afind_ParamLimits

0x698d,	// (0x00062662) aid_size_cell_afind

0x69a7,	// (0x0006267c) bg_popup_sub_pane_cp09_ParamLimits

0x69a7,	// (0x0006267c) bg_popup_sub_pane_cp09

0x69b4,	// (0x00062689) find_pane_cp01_ParamLimits

0x69b4,	// (0x00062689) find_pane_cp01

0xd7dc,	// (0x000694b1) grid_afind_control_pane_ParamLimits

0xd7dc,	// (0x000694b1) grid_afind_control_pane

0x69c1,	// (0x00062696) grid_afind_pane_ParamLimits

0x69c1,	// (0x00062696) grid_afind_pane

0x69dd,	// (0x000626b2) cell_afind_pane_ParamLimits

0x69dd,	// (0x000626b2) cell_afind_pane

0xcc85,	// (0x0006895a) afind_page_pane_g1

0x6a25,	// (0x000626fa) afind_page_pane_g2

0x6a2e,	// (0x00062703) afind_page_pane_g3

0x0002,

0xf779,	// (0x0006b44e) afind_page_pane_g

0x6a37,	// (0x0006270c) afind_page_pane_t1

0xd7f0,	// (0x000694c5) cell_afind_grid_control_pane_ParamLimits

0xd7f0,	// (0x000694c5) cell_afind_grid_control_pane

0xd5c8,	// (0x0006929d) bg_button_pane_cp69_ParamLimits

0xd5c8,	// (0x0006929d) bg_button_pane_cp69

0x6a57,	// (0x0006272c) cell_afind_pane_g1_ParamLimits

0x6a57,	// (0x0006272c) cell_afind_pane_g1

0x6a64,	// (0x00062739) cell_afind_pane_t1_ParamLimits

0x6a64,	// (0x00062739) cell_afind_pane_t1

0xaa48,	// (0x0006671d) bg_button_pane_cp72

0xd7ff,	// (0x000694d4) cell_afind_grid_control_pane_g1

0x402a,	// (0x0005fcff) aid_image_placing_area_ParamLimits

0x402a,	// (0x0005fcff) aid_image_placing_area

0xd296,	// (0x00068f6b) field_vitu_entry_pane_g1_ParamLimits

0xd296,	// (0x00068f6b) field_vitu_entry_pane_g1

0xd2a2,	// (0x00068f77) field_vitu_entry_pane_g2_ParamLimits

0xd2a2,	// (0x00068f77) field_vitu_entry_pane_g2

0x0001,

0x0718,	// (0x0005c3ed) field_vitu_entry_pane_g_ParamLimits

0x0718,	// (0x0005c3ed) field_vitu_entry_pane_g

0x5b8a,	// (0x0006185f) cell_vitu_itu_pane_g1_ParamLimits

0x5bcc,	// (0x000618a1) cell_vitu_itu_pane_t3_ParamLimits

0x5bcc,	// (0x000618a1) cell_vitu_itu_pane_t3

0xd578,	// (0x0006924d) mp4_progress_pane_t1_ParamLimits

0xd591,	// (0x00069266) mp4_progress_pane_t2_ParamLimits

0x07ad,	// (0x0005c482) mp4_progress_pane_t_ParamLimits

0xd5aa,	// (0x0006927f) mup_progress_pane_cp04_ParamLimits

0x696a,	// (0x0006263f) main_myfav_hc_pane_t5_ParamLimits

0x696a,	// (0x0006263f) main_myfav_hc_pane_t5

0x0f36,	// (0x0005cc0b) aid_zoom_text_primary

0x10a8,	// (0x0005cd7d) popup_adpt_find_window_ParamLimits

0x44ac,	// (0x00060181) main_cam_set_pane

0x63a5,	// (0x0006207a) cam4_zoom_pane_ParamLimits

0x63a5,	// (0x0006207a) cam4_zoom_pane

0x6a76,	// (0x0006274b) main_cam_set_pane_g1_ParamLimits

0x6a76,	// (0x0006274b) main_cam_set_pane_g1

0x6a84,	// (0x00062759) main_cam_set_pane_g2_ParamLimits

0x6a84,	// (0x00062759) main_cam_set_pane_g2

0x0001,

0xf780,	// (0x0006b455) main_cam_set_pane_g_ParamLimits

0xf780,	// (0x0006b455) main_cam_set_pane_g

0x6a90,	// (0x00062765) main_cam_set_pane_t1_ParamLimits

0x6a90,	// (0x00062765) main_cam_set_pane_t1

0x6aac,	// (0x00062781) main_cset_listscroll_pane_ParamLimits

0x6aac,	// (0x00062781) main_cset_listscroll_pane

0x6ad7,	// (0x000627ac) main_cset_slider_pane_ParamLimits

0x6ad7,	// (0x000627ac) main_cset_slider_pane

0xd810,	// (0x000694e5) main_cset_list_pane_ParamLimits

0xd810,	// (0x000694e5) main_cset_list_pane

0xd820,	// (0x000694f5) scroll_pane_cp028

0x6af6,	// (0x000627cb) aid_area_touch_slider

0x6b12,	// (0x000627e7) cset_slider_pane

0x6b3c,	// (0x00062811) main_cset_slider_pane_g1

0x6b51,	// (0x00062826) main_cset_slider_pane_g2

0x0011,

0xf785,	// (0x0006b45a) main_cset_slider_pane_g

0xd859,	// (0x0006952e) main_cset_slider_pane_t1

0x6c13,	// (0x000628e8) main_cset_slider_pane_t2

0x6c2d,	// (0x00062902) main_cset_slider_pane_t3

0x6c47,	// (0x0006291c) main_cset_slider_pane_t4

0x6c61,	// (0x00062936) main_cset_slider_pane_t5

0x6c7f,	// (0x00062954) main_cset_slider_pane_t6

0x6c96,	// (0x0006296b) main_cset_slider_pane_t7

0x000e,

0xf7aa,	// (0x0006b47f) main_cset_slider_pane_t

0x6da2,	// (0x00062a77) cset_list_set_pane_ParamLimits

0x6da2,	// (0x00062a77) cset_list_set_pane

0x6db8,	// (0x00062a8d) aid_position_infowindow_above

0x6dc0,	// (0x00062a95) aid_position_infowindow_below

0xa00f,	// (0x00065ce4) cset_list_set_pane_g1_ParamLimits

0xa00f,	// (0x00065ce4) cset_list_set_pane_g1

0xa01b,	// (0x00065cf0) cset_list_set_pane_g3_ParamLimits

0xa01b,	// (0x00065cf0) cset_list_set_pane_g3

0x0001,

0xf7c9,	// (0x0006b49e) cset_list_set_pane_g_ParamLimits

0xf7c9,	// (0x0006b49e) cset_list_set_pane_g

0xa02a,	// (0x00065cff) cset_list_set_pane_t1_ParamLimits

0xa02a,	// (0x00065cff) cset_list_set_pane_t1

0xb17c,	// (0x00066e51) list_highlight_pane_cp021_ParamLimits

0xb17c,	// (0x00066e51) list_highlight_pane_cp021

0xb5a6,	// (0x0006727b) cset_slider_pane_g1

0xb5b8,	// (0x0006728d) cset_slider_pane_g2

0xb5af,	// (0x00067284) cset_slider_pane_g3

0x0002,

0x08bc,	// (0x0005c591) cset_slider_pane_g

0x6dc8,	// (0x00062a9d) aid_area_touch_cam4_zoom

0x6dd0,	// (0x00062aa5) cam4_zoom_cont_pane

0x6dd8,	// (0x00062aad) cam4_zoom_pane_g1

0x6de0,	// (0x00062ab5) cam4_zoom_pane_g2

0x6de8,	// (0x00062abd) cam4_zoom_pane_g3

0x0002,

0xf7ce,	// (0x0006b4a3) cam4_zoom_pane_g

0x6df0,	// (0x00062ac5) cam4_zoom_cont_pane_g1

0x6df9,	// (0x00062ace) cam4_zoom_cont_pane_g2

0x6e02,	// (0x00062ad7) cam4_zoom_cont_pane_g3

0x0002,

0xf7d5,	// (0x0006b4aa) cam4_zoom_cont_pane_g

0x6292,	// (0x00061f67) call4_image_pane_ParamLimits

0x6292,	// (0x00061f67) call4_image_pane

0xd5d4,	// (0x000692a9) call4_windows_conf_pane_ParamLimits

0xd615,	// (0x000692ea) popup_call4_audio_in_window_ParamLimits

0xd615,	// (0x000692ea) popup_call4_audio_in_window

0x9c0a,	// (0x000658df) bg_popup_call2_act_pane_cp02

0xd68b,	// (0x00069360) call4_list_conf_pane

0xcc85,	// (0x0006895a) call4_image_pane_g1

0xcc85,	// (0x0006895a) call4_image_pane_g2

0x0001,

0x05d9,	// (0x0005c2ae) call4_image_pane_g

0xd8f9,	// (0x000695ce) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8f9,	// (0x000695ce) list_single_graphic_popup_conf4_pane

0x9c0a,	// (0x000658df) list_highlight_pane_cp022

0xd90c,	// (0x000695e1) list_single_graphic_popup_conf4_pane_g1

0xb15d,	// (0x00066e32) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf7dc,	// (0x0006b4b1) list_single_graphic_popup_conf4_pane_g

0xd914,	// (0x000695e9) list_single_graphic_popup_conf4_pane_t1

0x226a,	// (0x0005df3f) popup_vtel_slider_window_ParamLimits

0x226a,	// (0x0005df3f) popup_vtel_slider_window

0xd5b6,	// (0x0006928b) dialer2_ne_pane_t2_ParamLimits

0xd5b6,	// (0x0006928b) dialer2_ne_pane_t2

0x0001,

0xf6dd,	// (0x0006b3b2) dialer2_ne_pane_t_ParamLimits

0xf6dd,	// (0x0006b3b2) dialer2_ne_pane_t

0xb17c,	// (0x00066e51) bg_popup_sub_pane_cp010_ParamLimits

0xb17c,	// (0x00066e51) bg_popup_sub_pane_cp010

0x6e0b,	// (0x00062ae0) popup_vtel_slider_window_g1_ParamLimits

0x6e0b,	// (0x00062ae0) popup_vtel_slider_window_g1

0x6e17,	// (0x00062aec) popup_vtel_slider_window_g2_ParamLimits

0x6e17,	// (0x00062aec) popup_vtel_slider_window_g2

0x0003,

0xf7e1,	// (0x0006b4b6) popup_vtel_slider_window_g_ParamLimits

0xf7e1,	// (0x0006b4b6) popup_vtel_slider_window_g

0x6e5f,	// (0x00062b34) vtel_slider_pane_ParamLimits

0x6e5f,	// (0x00062b34) vtel_slider_pane

0x6e6e,	// (0x00062b43) vtel_slider_pane_g1_ParamLimits

0x6e6e,	// (0x00062b43) vtel_slider_pane_g1

0x6e7b,	// (0x00062b50) vtel_slider_pane_g2_ParamLimits

0x6e7b,	// (0x00062b50) vtel_slider_pane_g2

0x6e88,	// (0x00062b5d) vtel_slider_pane_g3_ParamLimits

0x6e88,	// (0x00062b5d) vtel_slider_pane_g3

0x6e6e,	// (0x00062b43) vtel_slider_pane_g4_ParamLimits

0x6e6e,	// (0x00062b43) vtel_slider_pane_g4

0x6e95,	// (0x00062b6a) vtel_slider_pane_g5_ParamLimits

0x6e95,	// (0x00062b6a) vtel_slider_pane_g5

0x0004,

0xf7ea,	// (0x0006b4bf) vtel_slider_pane_g_ParamLimits

0xf7ea,	// (0x0006b4bf) vtel_slider_pane_g

0x44ac,	// (0x00060181) main_gallery2_pane

0x6607,	// (0x000622dc) aid_size_row_itut2_dropdow_list_ParamLimits

0x6607,	// (0x000622dc) aid_size_row_itut2_dropdow_list

0x6675,	// (0x0006234a) grid_vitu2_function_top_pane_ParamLimits

0x6675,	// (0x0006234a) grid_vitu2_function_top_pane

0x66cf,	// (0x000623a4) popup_vitu2_dropdown_list_window_ParamLimits

0x66cf,	// (0x000623a4) popup_vitu2_dropdown_list_window

0x66ef,	// (0x000623c4) popup_vitu2_match_list_window

0x6eb0,	// (0x00062b85) cell_vitu2_function_top_pane_ParamLimits

0x6eb0,	// (0x00062b85) cell_vitu2_function_top_pane

0x6eca,	// (0x00062b9f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6eca,	// (0x00062b9f) cell_vitu2_function_top_pane_cp01

0x6ee6,	// (0x00062bbb) cell_vitu2_function_top_wide_pane_ParamLimits

0x6ee6,	// (0x00062bbb) cell_vitu2_function_top_wide_pane

0x44ac,	// (0x00060181) bg_button_pane_cp012

0x6f02,	// (0x00062bd7) cell_vitu2_function_top_pane_g1

0x6f16,	// (0x00062beb) bg_button_pane_cp013_ParamLimits

0x6f16,	// (0x00062beb) bg_button_pane_cp013

0x6f32,	// (0x00062c07) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f32,	// (0x00062c07) cell_vitu2_function_top_wide_pane_g1

0x119f,	// (0x0005ce74) bg_popup_sub_pane_cp20

0x6f4a,	// (0x00062c1f) list_vitu2_match_list_pane

0xd706,	// (0x000693db) bg_popup_sub_pane_cp20_g1

0xd70e,	// (0x000693e3) bg_popup_sub_pane_cp20_g2

0xac4f,	// (0x00066924) bg_popup_sub_pane_cp20_g3

0xd716,	// (0x000693eb) bg_popup_sub_pane_cp20_g4

0xac2f,	// (0x00066904) bg_popup_sub_pane_cp20_g5

0xd945,	// (0x0006961a) bg_popup_sub_pane_cp20_g6

0xd726,	// (0x000693fb) bg_popup_sub_pane_cp20_g7

0xd72e,	// (0x00069403) bg_popup_sub_pane_cp20_g8

0xd736,	// (0x0006940b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf7f5,	// (0x0006b4ca) bg_popup_sub_pane_cp20_g

0x6f62,	// (0x00062c37) list_vitu2_match_list_item_pane_ParamLimits

0x6f62,	// (0x00062c37) list_vitu2_match_list_item_pane

0x6f74,	// (0x00062c49) list_vitu2_match_list_item_pane_t1

0x11b9,	// (0x0005ce8e) bg_popup_sub_pane_cp21

0x6fc6,	// (0x00062c9b) grid_vitu2_dropdown_list_pane

0x6fce,	// (0x00062ca3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6fce,	// (0x00062ca3) cell_vitu2_dropdown_list_char_pane

0x6fef,	// (0x00062cc4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6fef,	// (0x00062cc4) cell_vitu2_dropdown_list_ctrl_pane

0xd94d,	// (0x00069622) cell_vitu2_dropdown_list_char_pane_g1

0xd956,	// (0x0006962b) cell_vitu2_dropdown_list_char_pane_g2

0xd95f,	// (0x00069634) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x0907,	// (0x0005c5dc) cell_vitu2_dropdown_list_char_pane_g

0x701b,	// (0x00062cf0) cell_vitu2_dropdown_list_char_pane_t1

0x7029,	// (0x00062cfe) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7029,	// (0x00062cfe) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7039,	// (0x00062d0e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7039,	// (0x00062d0e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x704a,	// (0x00062d1f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x704a,	// (0x00062d1f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x705a,	// (0x00062d2f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x705a,	// (0x00062d2f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6439,	// (0x0006210e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6439,	// (0x0006210e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf812,	// (0x0006b4e7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf812,	// (0x0006b4e7) cell_vitu2_dropdown_list_ctrl_pane_g

0x7076,	// (0x00062d4b) aid_size_cell_gallery2_ParamLimits

0x7076,	// (0x00062d4b) aid_size_cell_gallery2

0x7090,	// (0x00062d65) grid_gallery2_pane_ParamLimits

0x7090,	// (0x00062d65) grid_gallery2_pane

0x5a13,	// (0x000616e8) scroll_pane_cp029_ParamLimits

0x5a13,	// (0x000616e8) scroll_pane_cp029

0x70a7,	// (0x00062d7c) cell_gallery2_pane_ParamLimits

0x70a7,	// (0x00062d7c) cell_gallery2_pane

0xd968,	// (0x0006963d) cell_gallery2_pane_g2

0xea67,	// (0x0006a73c) cell_gallery2_pane_g3

0xd970,	// (0x00069645) cell_gallery2_pane_g4

0xd978,	// (0x0006964d) cell_gallery2_pane_g5

0xa9f6,	// (0x000666cb) grid_highlight_pane_cp10

0x66ef,	// (0x000623c4) popup_vitu2_match_list_window_ParamLimits

0x6703,	// (0x000623d8) popup_vitu2_query_window_ParamLimits

0x6703,	// (0x000623d8) popup_vitu2_query_window

0x11b9,	// (0x0005ce8e) bg_vitu2_candi_button_pane

0xd94d,	// (0x00069622) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd956,	// (0x0006962b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd95f,	// (0x00069634) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x70fb,	// (0x00062dd0) bg_button_pane_cp015

0x710d,	// (0x00062de2) bg_button_pane_cp016

0x7120,	// (0x00062df5) bg_button_pane_cp017

0xc868,	// (0x0006853d) bg_popup_sub_pane_cp22

0xd980,	// (0x00069655) popup_vitu2_query_window_g1

0x7165,	// (0x00062e3a) popup_vitu2_query_window_g2

0x0002,

0xf81d,	// (0x0006b4f2) popup_vitu2_query_window_g

0x7182,	// (0x00062e57) popup_vitu2_query_window_t1_ParamLimits

0x7182,	// (0x00062e57) popup_vitu2_query_window_t1

0x71b5,	// (0x00062e8a) popup_vitu2_query_window_t2_ParamLimits

0x71b5,	// (0x00062e8a) popup_vitu2_query_window_t2

0x71c7,	// (0x00062e9c) popup_vitu2_query_window_t3_ParamLimits

0x71c7,	// (0x00062e9c) popup_vitu2_query_window_t3

0x71ef,	// (0x00062ec4) popup_vitu2_query_window_t4_ParamLimits

0x71ef,	// (0x00062ec4) popup_vitu2_query_window_t4

0x7210,	// (0x00062ee5) popup_vitu2_query_window_t5_ParamLimits

0x7210,	// (0x00062ee5) popup_vitu2_query_window_t5

0x0006,

0xf824,	// (0x0006b4f9) popup_vitu2_query_window_t_ParamLimits

0xf824,	// (0x0006b4f9) popup_vitu2_query_window_t

0xd808,	// (0x000694dd) main_cset_text_pane

0x6af6,	// (0x000627cb) aid_area_touch_slider_ParamLimits

0x6b12,	// (0x000627e7) cset_slider_pane_ParamLimits

0x6b3c,	// (0x00062811) main_cset_slider_pane_g1_ParamLimits

0x6b51,	// (0x00062826) main_cset_slider_pane_g2_ParamLimits

0xd829,	// (0x000694fe) main_cset_slider_pane_g3_ParamLimits

0xd829,	// (0x000694fe) main_cset_slider_pane_g3

0x6b66,	// (0x0006283b) main_cset_slider_pane_g4_ParamLimits

0x6b66,	// (0x0006283b) main_cset_slider_pane_g4

0x6b75,	// (0x0006284a) main_cset_slider_pane_g5_ParamLimits

0x6b75,	// (0x0006284a) main_cset_slider_pane_g5

0x6b83,	// (0x00062858) main_cset_slider_pane_g6_ParamLimits

0x6b83,	// (0x00062858) main_cset_slider_pane_g6

0xf785,	// (0x0006b45a) main_cset_slider_pane_g_ParamLimits

0xd859,	// (0x0006952e) main_cset_slider_pane_t1_ParamLimits

0x6c13,	// (0x000628e8) main_cset_slider_pane_t2_ParamLimits

0x6c2d,	// (0x00062902) main_cset_slider_pane_t3_ParamLimits

0x6c47,	// (0x0006291c) main_cset_slider_pane_t4_ParamLimits

0x6c61,	// (0x00062936) main_cset_slider_pane_t5_ParamLimits

0x6c7f,	// (0x00062954) main_cset_slider_pane_t6_ParamLimits

0x6c96,	// (0x0006296b) main_cset_slider_pane_t7_ParamLimits

0x6cc4,	// (0x00062999) main_cset_slider_pane_t8_ParamLimits

0x6cc4,	// (0x00062999) main_cset_slider_pane_t8

0x6cec,	// (0x000629c1) main_cset_slider_pane_t9_ParamLimits

0x6cec,	// (0x000629c1) main_cset_slider_pane_t9

0x6d14,	// (0x000629e9) main_cset_slider_pane_t10_ParamLimits

0x6d14,	// (0x000629e9) main_cset_slider_pane_t10

0x6d3c,	// (0x00062a11) main_cset_slider_pane_t11_ParamLimits

0x6d3c,	// (0x00062a11) main_cset_slider_pane_t11

0x6d66,	// (0x00062a3b) main_cset_slider_pane_t12_ParamLimits

0x6d66,	// (0x00062a3b) main_cset_slider_pane_t12

0x6d83,	// (0x00062a58) main_cset_slider_pane_t13_ParamLimits

0x6d83,	// (0x00062a58) main_cset_slider_pane_t13

0xf7aa,	// (0x0006b47f) main_cset_slider_pane_t_ParamLimits

0x9c0a,	// (0x000658df) bg_popup_sub_pane_cp011

0xd98c,	// (0x00069661) main_cset_text_pane_g1

0xd994,	// (0x00069669) main_cset_text_pane_t1

0xd9a2,	// (0x00069677) main_cset_text_pane_t2

0xd9b0,	// (0x00069685) main_cset_text_pane_t3

0xd9be,	// (0x00069693) main_cset_text_pane_t4

0xd9cc,	// (0x000696a1) main_cset_text_pane_t5

0xd9da,	// (0x000696af) main_cset_text_pane_t6

0xd9e8,	// (0x000696bd) main_cset_text_pane_t7

0x0006,

0x092f,	// (0x0005c604) main_cset_text_pane_t

0x11b9,	// (0x0005ce8e) main_cam4_burst_pane

0x11b9,	// (0x0005ce8e) main_cam5_pane

0x6a45,	// (0x0006271a) bg_button_pane_cp019

0x6a4e,	// (0x00062723) bg_button_pane_cp020

0xd835,	// (0x0006950a) main_cset_slider_pane_g7_ParamLimits

0xd835,	// (0x0006950a) main_cset_slider_pane_g7

0xd841,	// (0x00069516) main_cset_slider_pane_g8_ParamLimits

0xd841,	// (0x00069516) main_cset_slider_pane_g8

0x6b97,	// (0x0006286c) main_cset_slider_pane_g9_ParamLimits

0x6b97,	// (0x0006286c) main_cset_slider_pane_g9

0x6ba3,	// (0x00062878) main_cset_slider_pane_g10_ParamLimits

0x6ba3,	// (0x00062878) main_cset_slider_pane_g10

0x6baf,	// (0x00062884) main_cset_slider_pane_g11_ParamLimits

0x6baf,	// (0x00062884) main_cset_slider_pane_g11

0x6bbb,	// (0x00062890) main_cset_slider_pane_g12_ParamLimits

0x6bbb,	// (0x00062890) main_cset_slider_pane_g12

0x6bc7,	// (0x0006289c) main_cset_slider_pane_g13_ParamLimits

0x6bc7,	// (0x0006289c) main_cset_slider_pane_g13

0x6bd3,	// (0x000628a8) main_cset_slider_pane_g14_ParamLimits

0x6bd3,	// (0x000628a8) main_cset_slider_pane_g14

0x6bdf,	// (0x000628b4) main_cset_slider_pane_g15_ParamLimits

0x6bdf,	// (0x000628b4) main_cset_slider_pane_g15

0xd887,	// (0x0006955c) main_cset_slider_pane_t14_ParamLimits

0xd887,	// (0x0006955c) main_cset_slider_pane_t14

0xd8c0,	// (0x00069595) main_cset_slider_pane_t15_ParamLimits

0xd8c0,	// (0x00069595) main_cset_slider_pane_t15

0x7287,	// (0x00062f5c) aid_cam4_burst_size_cell_ParamLimits

0x7287,	// (0x00062f5c) aid_cam4_burst_size_cell

0x72a3,	// (0x00062f78) grid_cam4_burst_pane_ParamLimits

0x72a3,	// (0x00062f78) grid_cam4_burst_pane

0x72d3,	// (0x00062fa8) linegrid_cam4_burst_pane_ParamLimits

0x72d3,	// (0x00062fa8) linegrid_cam4_burst_pane

0x72f3,	// (0x00062fc8) scroll_pane_cp30_ParamLimits

0x72f3,	// (0x00062fc8) scroll_pane_cp30

0x72ff,	// (0x00062fd4) cell_cam4_burst_pane_ParamLimits

0x72ff,	// (0x00062fd4) cell_cam4_burst_pane

0xda02,	// (0x000696d7) linegrid_cam4_burst_pane_g1_ParamLimits

0xda02,	// (0x000696d7) linegrid_cam4_burst_pane_g1

0x733b,	// (0x00063010) linegrid_cam4_burst_pane_g2_ParamLimits

0x733b,	// (0x00063010) linegrid_cam4_burst_pane_g2

0xda0f,	// (0x000696e4) linegrid_cam4_burst_pane_g3_ParamLimits

0xda0f,	// (0x000696e4) linegrid_cam4_burst_pane_g3

0x0002,

0xf833,	// (0x0006b508) linegrid_cam4_burst_pane_g_ParamLimits

0xf833,	// (0x0006b508) linegrid_cam4_burst_pane_g

0x734c,	// (0x00063021) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x734c,	// (0x00063021) linegrid_cam4_burst_pane_g3_copy1

0xda1c,	// (0x000696f1) linegrid_cam4_burst_pane_g4_ParamLimits

0xda1c,	// (0x000696f1) linegrid_cam4_burst_pane_g4

0x7366,	// (0x0006303b) linegrid_cam4_burst_pane_g5_ParamLimits

0x7366,	// (0x0006303b) linegrid_cam4_burst_pane_g5

0x7377,	// (0x0006304c) linegrid_cam4_burst_pane_g6_ParamLimits

0x7377,	// (0x0006304c) linegrid_cam4_burst_pane_g6

0xda29,	// (0x000696fe) linegrid_cam4_burst_pane_g7_ParamLimits

0xda29,	// (0x000696fe) linegrid_cam4_burst_pane_g7

0x7388,	// (0x0006305d) cell_cam4_burst_pane_g1

0xda42,	// (0x00069717) main_cam5_pane_t1_ParamLimits

0xda42,	// (0x00069717) main_cam5_pane_t1

0xda54,	// (0x00069729) main_cam5_pane_t2_ParamLimits

0xda54,	// (0x00069729) main_cam5_pane_t2

0xda66,	// (0x0006973b) main_cam5_pane_t3_ParamLimits

0xda66,	// (0x0006973b) main_cam5_pane_t3

0xda78,	// (0x0006974d) main_cam5_pane_t4_ParamLimits

0xda78,	// (0x0006974d) main_cam5_pane_t4

0xda90,	// (0x00069765) main_cam5_pane_t5_ParamLimits

0xda90,	// (0x00069765) main_cam5_pane_t5

0xdaa4,	// (0x00069779) main_cam5_pane_t6_ParamLimits

0xdaa4,	// (0x00069779) main_cam5_pane_t6

0xdab8,	// (0x0006978d) main_cam5_pane_t7_ParamLimits

0xdab8,	// (0x0006978d) main_cam5_pane_t7

0xdaca,	// (0x0006979f) main_cam5_pane_t8_ParamLimits

0xdaca,	// (0x0006979f) main_cam5_pane_t8

0xdae6,	// (0x000697bb) main_cam5_pane_t9_ParamLimits

0xdae6,	// (0x000697bb) main_cam5_pane_t9

0xdaf8,	// (0x000697cd) main_cam5_pane_t10_ParamLimits

0xdaf8,	// (0x000697cd) main_cam5_pane_t10

0xdb0a,	// (0x000697df) main_cam5_pane_t11_ParamLimits

0xdb0a,	// (0x000697df) main_cam5_pane_t11

0xdb1c,	// (0x000697f1) main_cam5_pane_t12_ParamLimits

0xdb1c,	// (0x000697f1) main_cam5_pane_t12

0xdb31,	// (0x00069806) main_cam5_pane_t13_ParamLimits

0xdb31,	// (0x00069806) main_cam5_pane_t13

0x000c,

0x094a,	// (0x0005c61f) main_cam5_pane_t_ParamLimits

0x094a,	// (0x0005c61f) main_cam5_pane_t

0x115e,	// (0x0005ce33) popup_scut_keymap_window_ParamLimits

0x115e,	// (0x0005ce33) popup_scut_keymap_window

0x739b,	// (0x00063070) aid_size_cell_brow_shortcut

0xa9f6,	// (0x000666cb) bg_popup_window_pane_cp010

0x73a7,	// (0x0006307c) grid_scut_pane

0x73b3,	// (0x00063088) cell_scut_pane_ParamLimits

0x73b3,	// (0x00063088) cell_scut_pane

0x73ca,	// (0x0006309f) cell_scut_pane_g1

0xdb4e,	// (0x00069823) cell_scut_pane_t1

0xdb5d,	// (0x00069832) cell_scut_pane_t2

0x73d3,	// (0x000630a8) cell_scut_pane_t3

0x0002,

0xf83f,	// (0x0006b514) cell_scut_pane_t

0x51f4,	// (0x00060ec9) main_mup3_pane_g8_ParamLimits

0x51f4,	// (0x00060ec9) main_mup3_pane_g8

0x6615,	// (0x000622ea) area_vitu2_query_pane_ParamLimits

0x6615,	// (0x000622ea) area_vitu2_query_pane

0x7133,	// (0x00062e08) input_focus_pane_cp08

0xdb6c,	// (0x00069841) area_vitu2_query_pane_g1

0x73e1,	// (0x000630b6) area_vitu2_query_pane_g2

0x0001,

0xf846,	// (0x0006b51b) area_vitu2_query_pane_g

0x73f2,	// (0x000630c7) area_vitu2_query_pane_t1_ParamLimits

0x73f2,	// (0x000630c7) area_vitu2_query_pane_t1

0x7406,	// (0x000630db) area_vitu2_query_pane_t2_ParamLimits

0x7406,	// (0x000630db) area_vitu2_query_pane_t2

0x741a,	// (0x000630ef) area_vitu2_query_pane_t3_ParamLimits

0x741a,	// (0x000630ef) area_vitu2_query_pane_t3

0xa03f,	// (0x00065d14) area_vitu2_query_pane_t4_ParamLimits

0xa03f,	// (0x00065d14) area_vitu2_query_pane_t4

0xa067,	// (0x00065d3c) area_vitu2_query_pane_t5_ParamLimits

0xa067,	// (0x00065d3c) area_vitu2_query_pane_t5

0xa08f,	// (0x00065d64) area_vitu2_query_pane_t6_ParamLimits

0xa08f,	// (0x00065d64) area_vitu2_query_pane_t6

0x0006,

0xf84b,	// (0x0006b520) area_vitu2_query_pane_t_ParamLimits

0xf84b,	// (0x0006b520) area_vitu2_query_pane_t

0x7442,	// (0x00063117) bg_button_pane_cp018

0x7450,	// (0x00063125) bg_button_pane_cp021

0x745c,	// (0x00063131) bg_button_pane_cp022

0x746d,	// (0x00063142) input_focus_pane_cp09

0xb2b3,	// (0x00066f88) aid_size_touch_mv_arrow_left

0xb2dc,	// (0x00066fb1) aid_size_touch_mv_arrow_right

0x6bf7,	// (0x000628cc) main_cset_slider_pane_g16_ParamLimits

0x6bf7,	// (0x000628cc) main_cset_slider_pane_g16

0x6c05,	// (0x000628da) main_cset_slider_pane_g17_ParamLimits

0x6c05,	// (0x000628da) main_cset_slider_pane_g17

0x7388,	// (0x0006305d) cell_cam4_burst_pane_g1_ParamLimits

0x9c0a,	// (0x000658df) compa_mode_pane

0x6e23,	// (0x00062af8) popup_vtel_slider_window_g3_ParamLimits

0x6e23,	// (0x00062af8) popup_vtel_slider_window_g3

0x6e37,	// (0x00062b0c) popup_vtel_slider_window_g4_ParamLimits

0x6e37,	// (0x00062b0c) popup_vtel_slider_window_g4

0x6e4b,	// (0x00062b20) popup_vtel_slider_window_t1_ParamLimits

0x6e4b,	// (0x00062b20) popup_vtel_slider_window_t1

0x11b9,	// (0x0005ce8e) main_cl_pane

0x454a,	// (0x0006021f) popup_imed_adjust2_window_ParamLimits

0xc868,	// (0x0006853d) bg_tb_trans_pane_cp05_ParamLimits

0xd1cb,	// (0x00068ea0) popup_imed_adjust2_window_g1_ParamLimits

0xd1da,	// (0x00068eaf) popup_imed_adjust2_window_g2_ParamLimits

0xd1da,	// (0x00068eaf) popup_imed_adjust2_window_g2

0xd1e6,	// (0x00068ebb) popup_imed_adjust2_window_g3_ParamLimits

0xd1e6,	// (0x00068ebb) popup_imed_adjust2_window_g3

0x0002,

0x06dc,	// (0x0005c3b1) popup_imed_adjust2_window_g_ParamLimits

0x06dc,	// (0x0005c3b1) popup_imed_adjust2_window_g

0xd1f2,	// (0x00068ec7) popup_imed_adjust2_window_t1_ParamLimits

0xd20a,	// (0x00068edf) slider_imed_adjust_pane_ParamLimits

0xd21e,	// (0x00068ef3) slider_imed_adjust_pane_g1_ParamLimits

0xd22e,	// (0x00068f03) slider_imed_adjust_pane_g2_ParamLimits

0xd23e,	// (0x00068f13) slider_imed_adjust_pane_g3_ParamLimits

0xd24f,	// (0x00068f24) slider_imed_adjust_pane_g4_ParamLimits

0x06e3,	// (0x0005c3b8) slider_imed_adjust_pane_g_ParamLimits

0x634e,	// (0x00062023) aid_touch_area_cam4_ParamLimits

0x634e,	// (0x00062023) aid_touch_area_cam4

0x635e,	// (0x00062033) battery_pane_cp01

0x63e5,	// (0x000620ba) main_camera4_pane_g6_ParamLimits

0x63e5,	// (0x000620ba) main_camera4_pane_g6

0x6403,	// (0x000620d8) main_camera4_pane_t2_ParamLimits

0x6403,	// (0x000620d8) main_camera4_pane_t2

0x0001,

0xf711,	// (0x0006b3e6) main_camera4_pane_t_ParamLimits

0xf711,	// (0x0006b3e6) main_camera4_pane_t

0x6498,	// (0x0006216d) aid_touch_area_vid4_ParamLimits

0x6498,	// (0x0006216d) aid_touch_area_vid4

0x64d8,	// (0x000621ad) main_video4_pane_g5_ParamLimits

0x64d8,	// (0x000621ad) main_video4_pane_g5

0x64fc,	// (0x000621d1) vid4_progress_pane_ParamLimits

0x64fc,	// (0x000621d1) vid4_progress_pane

0xd84d,	// (0x00069522) main_cset_slider_pane_g18_ParamLimits

0xd84d,	// (0x00069522) main_cset_slider_pane_g18

0xda36,	// (0x0006970b) cell_cam4_burst_pane_g2_ParamLimits

0xda36,	// (0x0006970b) cell_cam4_burst_pane_g2

0x0001,

0xf83a,	// (0x0006b50f) cell_cam4_burst_pane_g_ParamLimits

0xf83a,	// (0x0006b50f) cell_cam4_burst_pane_g

0x747e,	// (0x00063153) bg_cl_pane_ParamLimits

0x747e,	// (0x00063153) bg_cl_pane

0x748a,	// (0x0006315f) cl_header_pane_ParamLimits

0x748a,	// (0x0006315f) cl_header_pane

0x7496,	// (0x0006316b) cl_listscroll_pane_ParamLimits

0x7496,	// (0x0006316b) cl_listscroll_pane

0xdb78,	// (0x0006984d) bg_cl_pane_g1

0xdb80,	// (0x00069855) bg_cl_pane_g2

0xdb88,	// (0x0006985d) bg_cl_pane_g3

0xdb90,	// (0x00069865) bg_cl_pane_g4

0xdb98,	// (0x0006986d) bg_cl_pane_g5

0xdba0,	// (0x00069875) bg_cl_pane_g6

0xdba8,	// (0x0006987d) bg_cl_pane_g7

0xdbb0,	// (0x00069885) bg_cl_pane_g8

0xdbb8,	// (0x0006988d) bg_cl_pane_g9

0x0008,

0x0980,	// (0x0005c655) bg_cl_pane_g

0x74a2,	// (0x00063177) aid_height_cl_leading_ParamLimits

0x74a2,	// (0x00063177) aid_height_cl_leading

0x74ae,	// (0x00063183) aid_height_cl_text_ParamLimits

0x74ae,	// (0x00063183) aid_height_cl_text

0xe5c5,	// (0x0006a29a) bg_cl_header_pane_ParamLimits

0xe5c5,	// (0x0006a29a) bg_cl_header_pane

0x74c6,	// (0x0006319b) cl_header_pane_g1_ParamLimits

0x74c6,	// (0x0006319b) cl_header_pane_g1

0x74d3,	// (0x000631a8) cl_header_pane_t1_ParamLimits

0x74d3,	// (0x000631a8) cl_header_pane_t1

0xdbc0,	// (0x00069895) cl_list_pane

0xd820,	// (0x000694f5) hc_scroll_pane_cp01

0xac2f,	// (0x00066904) bg_cl_header_pane_g1

0xd706,	// (0x000693db) bg_cl_header_pane_g2

0xac4f,	// (0x00066924) bg_cl_header_pane_g3

0xd716,	// (0x000693eb) bg_cl_header_pane_g4

0xd70e,	// (0x000693e3) bg_cl_header_pane_g5

0xd945,	// (0x0006961a) bg_cl_header_pane_g6

0xd72e,	// (0x00069403) bg_cl_header_pane_g7

0xd736,	// (0x0006940b) bg_cl_header_pane_g8

0xd726,	// (0x000693fb) bg_cl_header_pane_g9

0x0008,

0xf85a,	// (0x0006b52f) bg_cl_header_pane_g

0x74e5,	// (0x000631ba) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74e5,	// (0x000631ba) hc_cl_list_double_graphic_heading_pane

0x74f6,	// (0x000631cb) hc_cl_list_single_graphic_pane_ParamLimits

0x74f6,	// (0x000631cb) hc_cl_list_single_graphic_pane

0x750f,	// (0x000631e4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x750f,	// (0x000631e4) hc_cl_list_single_graphic_pane_g1

0x751b,	// (0x000631f0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x751b,	// (0x000631f0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf86d,	// (0x0006b542) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf86d,	// (0x0006b542) hc_cl_list_single_graphic_pane_g

0x752f,	// (0x00063204) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x752f,	// (0x00063204) hc_cl_list_single_graphic_pane_t1

0x750f,	// (0x000631e4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x750f,	// (0x000631e4) hc_cl_list_double_graphic_heading_pane_g1

0x7544,	// (0x00063219) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7544,	// (0x00063219) hc_cl_list_double_graphic_heading_pane_g2

0x7558,	// (0x0006322d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7558,	// (0x0006322d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf872,	// (0x0006b547) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf872,	// (0x0006b547) hc_cl_list_double_graphic_heading_pane_g

0x756c,	// (0x00063241) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x756c,	// (0x00063241) hc_cl_list_double_graphic_heading_pane_t1

0x7581,	// (0x00063256) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7581,	// (0x00063256) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf879,	// (0x0006b54e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf879,	// (0x0006b54e) hc_cl_list_double_graphic_heading_pane_t

0x759e,	// (0x00063273) vid4_progress_pane_g1

0x75ae,	// (0x00063283) vid4_progress_pane_g2

0x75be,	// (0x00063293) vid4_progress_pane_g3

0x75d0,	// (0x000632a5) vid4_progress_pane_g4

0x0004,

0xf87e,	// (0x0006b553) vid4_progress_pane_g

0x75e8,	// (0x000632bd) vid4_progress_pane_t1

0x75fe,	// (0x000632d3) vid4_progress_pane_t2

0x0002,

0xf889,	// (0x0006b55e) vid4_progress_pane_t

0x7628,	// (0x000632fd) wait_bar_pane_cp07

0xca63,	// (0x00068738) blid_firmament_pane_ParamLimits

0xcaa6,	// (0x0006877b) popup_blid_sat_info2_window_g1

0xcaca,	// (0x0006879f) popup_blid_sat_info2_window_t3

0xcad8,	// (0x000687ad) popup_blid_sat_info2_window_t4

0xcae6,	// (0x000687bb) popup_blid_sat_info2_window_t5

0xcaf4,	// (0x000687c9) popup_blid_sat_info2_window_t6

0xcb04,	// (0x000687d9) popup_blid_sat_info2_window_t7

0xcb12,	// (0x000687e7) popup_blid_sat_info2_window_t8

0xcb20,	// (0x000687f5) popup_blid_sat_info2_window_t9

0xcb2e,	// (0x00068803) popup_blid_sat_info2_window_t10

0xcc05,	// (0x000688da) aid_firma_cardinal_ParamLimits

0xcc19,	// (0x000688ee) blid_firmament_pane_t1_ParamLimits

0xcc30,	// (0x00068905) blid_firmament_pane_t2_ParamLimits

0xcc47,	// (0x0006891c) blid_firmament_pane_t3_ParamLimits

0xcc5e,	// (0x00068933) blid_firmament_pane_t4_ParamLimits

0x05d0,	// (0x0005c2a5) blid_firmament_pane_t_ParamLimits

0xcc75,	// (0x0006894a) blid_sat_info_pane_ParamLimits

0x44ac,	// (0x00060181) main_cam_set_pane_ParamLimits

0x59ac,	// (0x00061681) aid_size_cell_colour_35_ParamLimits

0x59c6,	// (0x0006169b) aid_size_cell_colour_112_ParamLimits

0x59dd,	// (0x000616b2) aid_size_cell_effect_ParamLimits

0xb17c,	// (0x00066e51) bg_tb_trans_pane_cp02_ParamLimits

0xb18a,	// (0x00066e5f) heading_imed_pane_ParamLimits

0x59f7,	// (0x000616cc) listscroll_imed_pane_ParamLimits

0xbe8e,	// (0x00067b63) popup_call2_audio_first_window_g5_ParamLimits

0xbe8e,	// (0x00067b63) popup_call2_audio_first_window_g5

0x60fd,	// (0x00061dd2) aid_size_touch_image3_arrow_left_ParamLimits

0x60fd,	// (0x00061dd2) aid_size_touch_image3_arrow_left

0x6113,	// (0x00061de8) aid_size_touch_image3_arrow_right_ParamLimits

0x6113,	// (0x00061de8) aid_size_touch_image3_arrow_right

0x7613,	// (0x000632e8) vid4_progress_pane_t3

0x5c95,	// (0x0006196a) main_hwr_training_symbol_option_pane_ParamLimits

0x5c95,	// (0x0006196a) main_hwr_training_symbol_option_pane

0xd4b8,	// (0x0006918d) popup_hwr_training_preview_window_ParamLimits

0xd4b8,	// (0x0006918d) popup_hwr_training_preview_window

0x5cf6,	// (0x000619cb) hwr_training_navi_pane_g5_ParamLimits

0x5cf6,	// (0x000619cb) hwr_training_navi_pane_g5

0xd6f4,	// (0x000693c9) popup_char_count_window

0x119f,	// (0x0005ce74) bg_popup_sub_pane_cp20_ParamLimits

0x6f4a,	// (0x00062c1f) list_vitu2_match_list_pane_ParamLimits

0x6f56,	// (0x00062c2b) vitu2_page_scroll_pane_ParamLimits

0x6f56,	// (0x00062c2b) vitu2_page_scroll_pane

0xdbc9,	// (0x0006989e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbc9,	// (0x0006989e) list_single_hwr_training_symbol_option_pane

0xdbdc,	// (0x000698b1) list_single_hwr_training_symbol_option_pane_g1

0xdbe4,	// (0x000698b9) list_single_hwr_training_symbol_option_pane_t1

0xdbf2,	// (0x000698c7) bg_button_pane_cp023

0xdbfb,	// (0x000698d0) bg_button_pane_cp024

0x7673,	// (0x00063348) vitu2_page_scroll_pane_g1

0x767b,	// (0x00063350) vitu2_page_scroll_pane_g2

0x0001,

0xf890,	// (0x0006b565) vitu2_page_scroll_pane_g

0x7683,	// (0x00063358) vitu2_page_scroll_pane_t1

0xc9c3,	// (0x00068698) popup_char_count_window_g1

0xdc2e,	// (0x00069903) popup_char_count_window_g2

0xdc37,	// (0x0006990c) popup_char_count_window_g3

0x0002,

0x09ce,	// (0x0005c6a3) popup_char_count_window_g

0xdc48,	// (0x0006991d) popup_char_count_window_t1

0x11b9,	// (0x0005ce8e) main_vded2_pane

0xd1b7,	// (0x00068e8c) aid_size_cell_imed_line

0xd1c1,	// (0x00068e96) grid_imed_line_width_pane

0x656a,	// (0x0006223f) vid4_indicators_pane_g4

0xdc56,	// (0x0006992b) cell_imed_line_width_pane_ParamLimits

0xdc56,	// (0x0006992b) cell_imed_line_width_pane

0xdc6a,	// (0x0006993f) cell_imed_line_width_pane_g1

0xdc40,	// (0x00069915) cell_imed_line_width_pane_g2

0x0001,

0xf895,	// (0x0006b56a) cell_imed_line_width_pane_g

0x7692,	// (0x00063367) main_vded2_pane_g1_ParamLimits

0x7692,	// (0x00063367) main_vded2_pane_g1

0x769f,	// (0x00063374) main_vded2_pane_g2_ParamLimits

0x769f,	// (0x00063374) main_vded2_pane_g2

0x0001,

0xf89a,	// (0x0006b56f) main_vded2_pane_g_ParamLimits

0xf89a,	// (0x0006b56f) main_vded2_pane_g

0x76ad,	// (0x00063382) vded2_slider_pane_ParamLimits

0x76ad,	// (0x00063382) vded2_slider_pane

0x76ba,	// (0x0006338f) aid_size_touch_vded2_end

0x76c4,	// (0x00063399) aid_size_touch_vded2_playhead

0xdc73,	// (0x00069948) aid_size_touch_vded2_start

0xdc7b,	// (0x00069950) vded2_slider_bg_pane

0xdc84,	// (0x00069959) vded2_slider_pane_g1

0xdc8d,	// (0x00069962) vded2_slider_pane_g2

0x76cc,	// (0x000633a1) vded2_slider_pane_g3

0x0002,

0xf89f,	// (0x0006b574) vded2_slider_pane_g

0xdc95,	// (0x0006996a) vded2_slider_bg_pane_g1

0xdc9e,	// (0x00069973) vded2_slider_bg_pane_g2

0xdca7,	// (0x0006997c) vded2_slider_bg_pane_g3

0x0002,

0x09e6,	// (0x0005c6bb) vded2_slider_bg_pane_g

0x3d94,	// (0x0005fa69) aid_postcard_touch_down_pane_ParamLimits

0x3d94,	// (0x0005fa69) aid_postcard_touch_down_pane

0x3da4,	// (0x0005fa79) aid_postcard_touch_up_pane_ParamLimits

0x3da4,	// (0x0005fa79) aid_postcard_touch_up_pane

0x11b9,	// (0x0005ce8e) main_blid2_pane

0x44d5,	// (0x000601aa) popup_blid2_search_window

0x9c0a,	// (0x000658df) blid2_gps_pane

0x9c0a,	// (0x000658df) blid2_navig_pane

0x9c0a,	// (0x000658df) blid2_search_pane

0x9c0a,	// (0x000658df) blid2_tripm_pane

0x76d5,	// (0x000633aa) blid2_search_pane_g1_ParamLimits

0x76d5,	// (0x000633aa) blid2_search_pane_g1

0x76e5,	// (0x000633ba) blid2_search_pane_t1_ParamLimits

0x76e5,	// (0x000633ba) blid2_search_pane_t1

0x76f7,	// (0x000633cc) aid_size_cell_blid2_gps_ParamLimits

0x76f7,	// (0x000633cc) aid_size_cell_blid2_gps

0x7707,	// (0x000633dc) blid2_gps_pane_g1_ParamLimits

0x7707,	// (0x000633dc) blid2_gps_pane_g1

0x7713,	// (0x000633e8) grid_blid2_satellite_pane_ParamLimits

0x7713,	// (0x000633e8) grid_blid2_satellite_pane

0x7723,	// (0x000633f8) blid2_navig_pane_g1_ParamLimits

0x7723,	// (0x000633f8) blid2_navig_pane_g1

0x772f,	// (0x00063404) blid2_navig_pane_t1_ParamLimits

0x772f,	// (0x00063404) blid2_navig_pane_t1

0x7741,	// (0x00063416) blid2_navig_pane_t2_ParamLimits

0x7741,	// (0x00063416) blid2_navig_pane_t2

0x0001,

0xf8a6,	// (0x0006b57b) blid2_navig_pane_t_ParamLimits

0xf8a6,	// (0x0006b57b) blid2_navig_pane_t

0x7753,	// (0x00063428) blid2_navig_ring_pane_ParamLimits

0x7753,	// (0x00063428) blid2_navig_ring_pane

0x7763,	// (0x00063438) blid2_speed_pane_ParamLimits

0x7763,	// (0x00063438) blid2_speed_pane

0x776f,	// (0x00063444) blid2_tripm_pane_g1_ParamLimits

0x776f,	// (0x00063444) blid2_tripm_pane_g1

0x777f,	// (0x00063454) blid2_tripm_pane_g2_ParamLimits

0x777f,	// (0x00063454) blid2_tripm_pane_g2

0x778b,	// (0x00063460) blid2_tripm_pane_g3_ParamLimits

0x778b,	// (0x00063460) blid2_tripm_pane_g3

0x7797,	// (0x0006346c) blid2_tripm_pane_g4_ParamLimits

0x7797,	// (0x0006346c) blid2_tripm_pane_g4

0x77a3,	// (0x00063478) blid2_tripm_pane_g5_ParamLimits

0x77a3,	// (0x00063478) blid2_tripm_pane_g5

0x0005,

0xf8ab,	// (0x0006b580) blid2_tripm_pane_g_ParamLimits

0xf8ab,	// (0x0006b580) blid2_tripm_pane_g

0x77bf,	// (0x00063494) blid2_tripm_pane_t1_ParamLimits

0x77bf,	// (0x00063494) blid2_tripm_pane_t1

0x77d3,	// (0x000634a8) blid2_tripm_pane_t2_ParamLimits

0x77d3,	// (0x000634a8) blid2_tripm_pane_t2

0x77e5,	// (0x000634ba) blid2_tripm_pane_t3_ParamLimits

0x77e5,	// (0x000634ba) blid2_tripm_pane_t3

0x0003,

0xf8b8,	// (0x0006b58d) blid2_tripm_pane_t_ParamLimits

0xf8b8,	// (0x0006b58d) blid2_tripm_pane_t

0x7817,	// (0x000634ec) cell_blid2_satellite_pane_ParamLimits

0x7817,	// (0x000634ec) cell_blid2_satellite_pane

0x7831,	// (0x00063506) cell_blid2_satellite_pane_g1

0xdcb0,	// (0x00069985) cell_blid2_satellite_pane_t1

0xcc85,	// (0x0006895a) blid2_speed_pane_g1

0xdcbe,	// (0x00069993) blid2_speed_pane_t1

0xdccc,	// (0x000699a1) blid2_speed_pane_t2

0x0001,

0x0a08,	// (0x0005c6dd) blid2_speed_pane_t

0xcc85,	// (0x0006895a) blid2_navig_ring_pane_g1

0x783a,	// (0x0006350f) blid2_navig_ring_pane_g2

0x7842,	// (0x00063517) blid2_navig_ring_pane_g3

0x784a,	// (0x0006351f) blid2_navig_ring_pane_g4

0x7852,	// (0x00063527) blid2_navig_ring_pane_g5

0x0004,

0xf8c1,	// (0x0006b596) blid2_navig_ring_pane_g

0x9c0a,	// (0x000658df) bg_popup_window_pane_cp011

0xdcda,	// (0x000699af) popup_blid2_search_window_g1

0xdce2,	// (0x000699b7) popup_blid2_search_window_t1

0xdcf0,	// (0x000699c5) popup_blid2_search_window_t2

0x0001,

0x0a18,	// (0x0005c6ed) popup_blid2_search_window_t

0xab3e,	// (0x00066813) main_browser_pane_g1

0xa831,	// (0x00066506) main_browser_pane_ParamLimits

0x44ac,	// (0x00060181) bg_button_pane_cp011_ParamLimits

0x6818,	// (0x000624ed) cell_vitu2_function_pane_g1_ParamLimits

0xc868,	// (0x0006853d) bg_popup_sub_pane_cp22_ParamLimits

0x7133,	// (0x00062e08) input_focus_pane_cp08_ParamLimits

0x714a,	// (0x00062e1f) popup_vitu2_query_button_pane_ParamLimits

0x714a,	// (0x00062e1f) popup_vitu2_query_button_pane

0x715b,	// (0x00062e30) popup_vitu2_query_input_button_pane

0xd980,	// (0x00069655) popup_vitu2_query_window_g1_ParamLimits

0x7165,	// (0x00062e3a) popup_vitu2_query_window_g2_ParamLimits

0xf81d,	// (0x0006b4f2) popup_vitu2_query_window_g_ParamLimits

0x9c0a,	// (0x000658df) bg_button_pane_cp026

0x785a,	// (0x0006352f) popup_vitu2_query_input_button_pane_g1

0x9c0a,	// (0x000658df) bg_button_pane_cp025

0xdd08,	// (0x000699dd) popup_vitu2_query_button_pane_t1

0x4f2b,	// (0x00060c00) main_mp3_pane_t6

0x4f3b,	// (0x00060c10) popup_slider_window_cp01

0x6447,	// (0x0006211c) cam4_battery_pane

0x6527,	// (0x000621fc) cam4_battery_pane_cp02

0x7596,	// (0x0006326b) cam4_battery_pane_cp01

0x7596,	// (0x0006326b) cam4_battery_pane_cp03

0xdcfe,	// (0x000699d3) cam4_battery_pane_g1

0xcc85,	// (0x0006895a) cam4_battery_pane_g2

0x0001,

0xf8cc,	// (0x0006b5a1) cam4_battery_pane_g

0xcb3c,	// (0x00068811) popup_blid_sat_info2_window_t11

0xb2b3,	// (0x00066f88) aid_size_touch_mv_arrow_left_ParamLimits

0xb2dc,	// (0x00066fb1) aid_size_touch_mv_arrow_right_ParamLimits

0xb33a,	// (0x0006700f) navi_pane_g1_ParamLimits

0xb346,	// (0x0006701b) navi_pane_g2_ParamLimits

0xb374,	// (0x00067049) navi_pane_g3_ParamLimits

0x02e2,	// (0x0005bfb7) navi_pane_g_ParamLimits

0x376b,	// (0x0005f440) navi_pane_mv_t1_ParamLimits

0x5a03,	// (0x000616d8) grid_imed_effect_pane_ParamLimits

0x212a,	// (0x0005ddff) aid_placing_vt_slider_lsc

0xaa8d,	// (0x00066762) aid_placing_vt_slider_prt

0xb17c,	// (0x00066e51) bg_tb_trans_pane_cp01_ParamLimits

0xce08,	// (0x00068add) popup_image_details_window_g1_ParamLimits

0xce1b,	// (0x00068af0) popup_image_details_window_g2_ParamLimits

0xce30,	// (0x00068b05) popup_image_details_window_g3_ParamLimits

0xce30,	// (0x00068b05) popup_image_details_window_g3

0x0615,	// (0x0005c2ea) popup_image_details_window_g_ParamLimits

0xce44,	// (0x00068b19) popup_image_details_window_t1_ParamLimits

0xce56,	// (0x00068b2b) popup_image_details_window_t2_ParamLimits

0xce6f,	// (0x00068b44) popup_image_details_window_t3_ParamLimits

0xce83,	// (0x00068b58) popup_image_details_window_t4_ParamLimits

0xce9e,	// (0x00068b73) popup_image_details_window_t5_ParamLimits

0x061c,	// (0x0005c2f1) popup_image_details_window_t_ParamLimits

0x74ba,	// (0x0006318f) cl_header_name_pane_ParamLimits

0x74ba,	// (0x0006318f) cl_header_name_pane

0x7862,	// (0x00063537) cl_header_name_pane_t1_ParamLimits

0x7862,	// (0x00063537) cl_header_name_pane_t1

0x7879,	// (0x0006354e) cl_header_name_pane_t2_ParamLimits

0x7879,	// (0x0006354e) cl_header_name_pane_t2

0x78a3,	// (0x00063578) cl_header_name_pane_t3_ParamLimits

0x78a3,	// (0x00063578) cl_header_name_pane_t3

0x0002,

0xf8d1,	// (0x0006b5a6) cl_header_name_pane_t_ParamLimits

0xf8d1,	// (0x0006b5a6) cl_header_name_pane_t

0xb403,	// (0x000670d8) navi_pane_mv_g2_ParamLimits

0xd6ce,	// (0x000693a3) field_vitu2_entry_pane_g1_ParamLimits

0xd6da,	// (0x000693af) field_vitu2_entry_pane_g2_ParamLimits

0xd6e6,	// (0x000693bb) field_vitu2_entry_pane_g3_ParamLimits

0xd6e6,	// (0x000693bb) field_vitu2_entry_pane_g3

0x0818,	// (0x0005c4ed) field_vitu2_entry_pane_g_ParamLimits

0x67ac,	// (0x00062481) cell_vitu2_itu_pane_g1_ParamLimits

0x67be,	// (0x00062493) cell_vitu2_itu_pane_g2_ParamLimits

0x67be,	// (0x00062493) cell_vitu2_itu_pane_g2

0x0001,

0xf748,	// (0x0006b41d) cell_vitu2_itu_pane_g_ParamLimits

0xf748,	// (0x0006b41d) cell_vitu2_itu_pane_g

0x44ac,	// (0x00060181) bg_vkb2_func_pane_cp05_ParamLimits

0x44ac,	// (0x00060181) bg_vkb2_func_pane_cp05

0x44ac,	// (0x00060181) bg_vkb2_func_pane_cp03

0x44ac,	// (0x00060181) bg_vkb2_func_pane_cp04

0x44ac,	// (0x00060181) bg_vkb2_func_pane_cp10_ParamLimits

0x44ac,	// (0x00060181) bg_vkb2_func_pane_cp10

0x745c,	// (0x00063131) bg_vkb2_func_pane_cp08

0x7442,	// (0x00063117) bg_vkb2_func_pane_cp06

0x7450,	// (0x00063125) bg_vkb2_func_pane_cp07

0xdc04,	// (0x000698d9) bg_vkb2_func_pane_cp11_ParamLimits

0xdc04,	// (0x000698d9) bg_vkb2_func_pane_cp11

0xdc19,	// (0x000698ee) bg_vkb2_func_pane_cp12_ParamLimits

0xdc19,	// (0x000698ee) bg_vkb2_func_pane_cp12

0x9c0a,	// (0x000658df) bg_vkb2_func_pane_cp09

0xd706,	// (0x000693db) bg_vkb2_func_pane_g1

0xac4f,	// (0x00066924) bg_vkb2_func_pane_g2

0xd70e,	// (0x000693e3) bg_vkb2_func_pane_g3

0xd716,	// (0x000693eb) bg_vkb2_func_pane_g4

0xd945,	// (0x0006961a) bg_vkb2_func_pane_g5

0xd72e,	// (0x00069403) bg_vkb2_func_pane_g6

0xd736,	// (0x0006940b) bg_vkb2_func_pane_g7

0xd726,	// (0x000693fb) bg_vkb2_func_pane_g8

0xac2f,	// (0x00066904) bg_vkb2_func_pane_g9

0x0008,

0xf8d8,	// (0x0006b5ad) bg_vkb2_func_pane_g

0x77b1,	// (0x00063486) blid2_tripm_pane_g6_ParamLimits

0x77b1,	// (0x00063486) blid2_tripm_pane_g6

0xd570,	// (0x00069245) mp4_progress_pane_g1

0x780b,	// (0x000634e0) blid2_tripm_values_pane_ParamLimits

0x780b,	// (0x000634e0) blid2_tripm_values_pane

0x78c8,	// (0x0006359d) blid2_tripm_values_pane_t1

0x78d6,	// (0x000635ab) blid2_tripm_values_pane_t2

0x78e4,	// (0x000635b9) blid2_tripm_values_pane_t3

0x78f2,	// (0x000635c7) blid2_tripm_values_pane_t4

0x7900,	// (0x000635d5) blid2_tripm_values_pane_t5

0x790e,	// (0x000635e3) blid2_tripm_values_pane_t6

0x791c,	// (0x000635f1) blid2_tripm_values_pane_t7

0x792a,	// (0x000635ff) blid2_tripm_values_pane_t8

0x7938,	// (0x0006360d) blid2_tripm_values_pane_t9

0x0008,

0xf8eb,	// (0x0006b5c0) blid2_tripm_values_pane_t

0x216a,	// (0x0005de3f) call_video_pane_t1_ParamLimits

0x218b,	// (0x0005de60) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0006af43) call_video_pane_t_ParamLimits

0x3c9b,	// (0x0005f970) msg_header_pane_g1_ParamLimits

0xb5eb,	// (0x000672c0) msg_header_pane_g2_ParamLimits

0xb5eb,	// (0x000672c0) msg_header_pane_g2

0x0001,

0xf467,	// (0x0006b13c) msg_header_pane_g_ParamLimits

0xf467,	// (0x0006b13c) msg_header_pane_g

0xa831,	// (0x00066506) main_clock2_pane_ParamLimits

0x579c,	// (0x00061471) grid_clock2_toolbar_pane_ParamLimits

0x579c,	// (0x00061471) grid_clock2_toolbar_pane

0x579c,	// (0x00061471) listscroll_clock2_pane_ParamLimits

0x579c,	// (0x00061471) listscroll_clock2_pane

0x5840,	// (0x00061515) main_clock2_pane_t3_ParamLimits

0x5840,	// (0x00061515) main_clock2_pane_t3

0x5852,	// (0x00061527) main_clock2_pane_t4_ParamLimits

0x5852,	// (0x00061527) main_clock2_pane_t4

0xdd16,	// (0x000699eb) cell_clock2_toolbar_pane

0xdd1e,	// (0x000699f3) cell_clock2_toolbar_pane_cp01

0xdd1e,	// (0x000699f3) cell_clock2_toolbar_pane_cp02

0xdd26,	// (0x000699fb) cell_clock2_toolbar_pane_cp03

0xdd2e,	// (0x00069a03) list_clock2_pane

0xb229,	// (0x00066efe) scroll_pane_cp10

0xdd36,	// (0x00069a0b) list_single_clock2_pane_ParamLimits

0xdd36,	// (0x00069a0b) list_single_clock2_pane

0xa9f6,	// (0x000666cb) list_highlight_pane_cp08

0xdd51,	// (0x00069a26) list_single_clock2_pane_t1

0xdd5f,	// (0x00069a34) list_single_clock2_pane_t2

0x0001,

0xf8fe,	// (0x0006b5d3) list_single_clock2_pane_t

0x9c0a,	// (0x000658df) bg_button_pane_cp10

0xdd6d,	// (0x00069a42) cell_clock2_toolbar_pane_g1

0x3d02,	// (0x0005f9d7) aid_main_viewer_pane_g1_ParamLimits

0x3d02,	// (0x0005f9d7) aid_main_viewer_pane_g1

0x3d0e,	// (0x0005f9e3) aid_main_viewer_pane_g2_ParamLimits

0x3d0e,	// (0x0005f9e3) aid_main_viewer_pane_g2

0x3d1a,	// (0x0005f9ef) aid_main_viewer_pane_g3_ParamLimits

0x3d1a,	// (0x0005f9ef) aid_main_viewer_pane_g3

0x3d2b,	// (0x0005fa00) aid_main_viewer_pane_g4_ParamLimits

0x3d2b,	// (0x0005fa00) aid_main_viewer_pane_g4

0x0003,

0xf478,	// (0x0006b14d) aid_main_viewer_pane_g_ParamLimits

0xf478,	// (0x0006b14d) aid_main_viewer_pane_g

0x449f,	// (0x00060174) main_calc_pane_ParamLimits

0x44ba,	// (0x0006018f) main_dialer2_pane_ParamLimits

0x11b9,	// (0x0005ce8e) main_cam6_pane

0x11b9,	// (0x0005ce8e) main_vid6_pane

0x57a8,	// (0x0006147d) listscroll_gen_pane_cp06_ParamLimits

0x57a8,	// (0x0006147d) listscroll_gen_pane_cp06

0x5864,	// (0x00061539) main_clock2_pane_t5_ParamLimits

0x5864,	// (0x00061539) main_clock2_pane_t5

0x58ad,	// (0x00061582) aid_call2_pane_cp10_ParamLimits

0x58bf,	// (0x00061594) aid_call_pane_cp10_ParamLimits

0xb2a7,	// (0x00066f7c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2a7,	// (0x00066f7c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58d1,	// (0x000615a6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58d1,	// (0x000615a6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2a7,	// (0x00066f7c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf658,	// (0x0006b32d) popup_clock_analogue_window_cp10_g_ParamLimits

0x58e3,	// (0x000615b8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x60aa,	// (0x00061d7f) cell_dialer2_keypad_pane_g2_ParamLimits

0x60aa,	// (0x00061d7f) cell_dialer2_keypad_pane_g2

0x0001,

0xf6e2,	// (0x0006b3b7) cell_dialer2_keypad_pane_g_ParamLimits

0xf6e2,	// (0x0006b3b7) cell_dialer2_keypad_pane_g

0x60c6,	// (0x00061d9b) cell_dialer2_keypad_pane_t1

0x6ae3,	// (0x000627b8) main_cset_text2_pane_ParamLimits

0x6ae3,	// (0x000627b8) main_cset_text2_pane

0xdb6c,	// (0x00069841) area_vitu2_query_pane_g1_ParamLimits

0x73e1,	// (0x000630b6) area_vitu2_query_pane_g2_ParamLimits

0xf846,	// (0x0006b51b) area_vitu2_query_pane_g_ParamLimits

0xa0b7,	// (0x00065d8c) area_vitu2_query_pane_t7_ParamLimits

0xa0b7,	// (0x00065d8c) area_vitu2_query_pane_t7

0x7442,	// (0x00063117) bg_button_pane_cp018_ParamLimits

0x7450,	// (0x00063125) bg_button_pane_cp021_ParamLimits

0x745c,	// (0x00063131) bg_button_pane_cp022_ParamLimits

0x745c,	// (0x00063131) bg_vkb2_func_pane_cp08_ParamLimits

0x7442,	// (0x00063117) bg_vkb2_func_pane_cp06_ParamLimits

0x7450,	// (0x00063125) bg_vkb2_func_pane_cp07_ParamLimits

0x746d,	// (0x00063142) input_focus_pane_cp09_ParamLimits

0x7946,	// (0x0006361b) cam6_autofocus_pane_ParamLimits

0x7946,	// (0x0006361b) cam6_autofocus_pane

0x7968,	// (0x0006363d) cam6_image_uncrop_pane_ParamLimits

0x7968,	// (0x0006363d) cam6_image_uncrop_pane

0x7995,	// (0x0006366a) cam6_indi_pane_ParamLimits

0x7995,	// (0x0006366a) cam6_indi_pane

0x79af,	// (0x00063684) cam6_mode_pane_ParamLimits

0x79af,	// (0x00063684) cam6_mode_pane

0x79c3,	// (0x00063698) cam6_timer_pane_ParamLimits

0x79c3,	// (0x00063698) cam6_timer_pane

0x79cf,	// (0x000636a4) cam6_zoom_pane_ParamLimits

0x79cf,	// (0x000636a4) cam6_zoom_pane

0x79e7,	// (0x000636bc) cam6_mode_pane_g1_ParamLimits

0x79e7,	// (0x000636bc) cam6_mode_pane_g1

0x79f3,	// (0x000636c8) cam6_mode_pane_g2_ParamLimits

0x79f3,	// (0x000636c8) cam6_mode_pane_g2

0x79ff,	// (0x000636d4) cam6_mode_pane_g3_ParamLimits

0x79ff,	// (0x000636d4) cam6_mode_pane_g3

0x7a0b,	// (0x000636e0) cam6_mode_pane_g4_ParamLimits

0x7a0b,	// (0x000636e0) cam6_mode_pane_g4

0x0003,

0xf903,	// (0x0006b5d8) cam6_mode_pane_g_ParamLimits

0xf903,	// (0x0006b5d8) cam6_mode_pane_g

0xdd43,	// (0x00069a18) bg_tb_trans_pane_cp08_ParamLimits

0xdd43,	// (0x00069a18) bg_tb_trans_pane_cp08

0xdd75,	// (0x00069a4a) cam6_battery_pane_ParamLimits

0xdd75,	// (0x00069a4a) cam6_battery_pane

0xdd8b,	// (0x00069a60) cam6_indi_pane_g1_ParamLimits

0xdd8b,	// (0x00069a60) cam6_indi_pane_g1

0xdd9d,	// (0x00069a72) cam6_indi_pane_g2_ParamLimits

0xdd9d,	// (0x00069a72) cam6_indi_pane_g2

0xddaf,	// (0x00069a84) cam6_indi_pane_g3_ParamLimits

0xddaf,	// (0x00069a84) cam6_indi_pane_g3

0x0002,

0x0a5d,	// (0x0005c732) cam6_indi_pane_g_ParamLimits

0x0a5d,	// (0x0005c732) cam6_indi_pane_g

0xddc1,	// (0x00069a96) cam6_indi_pane_t1_ParamLimits

0xddc1,	// (0x00069a96) cam6_indi_pane_t1

0x65a7,	// (0x0006227c) cam6_autofocus_pane_g1

0x659f,	// (0x00062274) cam6_autofocus_pane_g2

0x65b7,	// (0x0006228c) cam6_autofocus_pane_g3

0x65af,	// (0x00062284) cam6_autofocus_pane_g4

0x0003,

0xf90c,	// (0x0006b5e1) cam6_autofocus_pane_g

0xdde7,	// (0x00069abc) cam6_timer_pane_g1

0xddef,	// (0x00069ac4) cam6_timer_pane_t1

0xddfd,	// (0x00069ad2) cam6_zoom_cont_pane

0xde05,	// (0x00069ada) cam6_zoom_pane_g1

0xde0d,	// (0x00069ae2) cam6_zoom_pane_g2

0x7a17,	// (0x000636ec) cam6_zoom_pane_g3

0x0002,

0xf915,	// (0x0006b5ea) cam6_zoom_pane_g

0xcc85,	// (0x0006895a) cam6_battery_pane_g1

0xcc85,	// (0x0006895a) cam6_battery_pane_g2

0x0001,

0x05d9,	// (0x0005c2ae) cam6_battery_pane_g

0xde15,	// (0x00069aea) cam6_zoom_cont_pane_g1

0xde1e,	// (0x00069af3) cam6_zoom_cont_pane_g2

0xde27,	// (0x00069afc) cam6_zoom_cont_pane_g3

0x0002,

0x0a74,	// (0x0005c749) cam6_zoom_cont_pane_g

0x7a34,	// (0x00063709) cam6_mode_pane_cp_ParamLimits

0x7a34,	// (0x00063709) cam6_mode_pane_cp

0x7a48,	// (0x0006371d) cam6_zoom_pane_cp_ParamLimits

0x7a48,	// (0x0006371d) cam6_zoom_pane_cp

0x7a60,	// (0x00063735) vid6_image_uncrop_cif_pane_ParamLimits

0x7a60,	// (0x00063735) vid6_image_uncrop_cif_pane

0x7a8c,	// (0x00063761) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a8c,	// (0x00063761) vid6_image_uncrop_nhd_pane

0x7aa9,	// (0x0006377e) vid6_image_uncrop_vga_pane_ParamLimits

0x7aa9,	// (0x0006377e) vid6_image_uncrop_vga_pane

0x7ac8,	// (0x0006379d) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ac8,	// (0x0006379d) vid6_image_uncrop_wvga_pane

0x7ae5,	// (0x000637ba) vid6_indi_pane_ParamLimits

0x7ae5,	// (0x000637ba) vid6_indi_pane

0xdd43,	// (0x00069a18) bg_tb_trans_pane_cp09_ParamLimits

0xdd43,	// (0x00069a18) bg_tb_trans_pane_cp09

0xde3f,	// (0x00069b14) cam6_battery_pane_cp_ParamLimits

0xde3f,	// (0x00069b14) cam6_battery_pane_cp

0xde4b,	// (0x00069b20) vid6_indi_pane_g1_ParamLimits

0xde4b,	// (0x00069b20) vid6_indi_pane_g1

0xde5d,	// (0x00069b32) vid6_indi_pane_g2_ParamLimits

0xde5d,	// (0x00069b32) vid6_indi_pane_g2

0xde6f,	// (0x00069b44) vid6_indi_pane_g3_ParamLimits

0xde6f,	// (0x00069b44) vid6_indi_pane_g3

0xde84,	// (0x00069b59) vid6_indi_pane_g4_ParamLimits

0xde84,	// (0x00069b59) vid6_indi_pane_g4

0xde99,	// (0x00069b6e) vid6_indi_pane_g5_ParamLimits

0xde99,	// (0x00069b6e) vid6_indi_pane_g5

0x0004,

0x0a7b,	// (0x0005c750) vid6_indi_pane_g_ParamLimits

0x0a7b,	// (0x0005c750) vid6_indi_pane_g

0xdeb3,	// (0x00069b88) vid6_indi_pane_t1_ParamLimits

0xdeb3,	// (0x00069b88) vid6_indi_pane_t1

0xdec9,	// (0x00069b9e) vid6_indi_pane_t2_ParamLimits

0xdec9,	// (0x00069b9e) vid6_indi_pane_t2

0xdef1,	// (0x00069bc6) vid6_indi_pane_t3_ParamLimits

0xdef1,	// (0x00069bc6) vid6_indi_pane_t3

0xdf19,	// (0x00069bee) vid6_indi_pane_t4_ParamLimits

0xdf19,	// (0x00069bee) vid6_indi_pane_t4

0x0003,

0x0a86,	// (0x0005c75b) vid6_indi_pane_t_ParamLimits

0x0a86,	// (0x0005c75b) vid6_indi_pane_t

0xdf3d,	// (0x00069c12) wait_bar_pane_cp08

0x7b0a,	// (0x000637df) main_cset_text2_pane_t1_ParamLimits

0x7b0a,	// (0x000637df) main_cset_text2_pane_t1

0x7a1f,	// (0x000636f4) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a1f,	// (0x000636f4) listscroll_gen_pane_cp06_t1

0x11b9,	// (0x0005ce8e) main_cam6_set_pane

0x6439,	// (0x0006210e) bg_tb_trans_pane_cp06_ParamLimits

0x644f,	// (0x00062124) cam4_indicators_pane_g1_ParamLimits

0x6460,	// (0x00062135) cam4_indicators_pane_g2_ParamLimits

0xf71f,	// (0x0006b3f4) cam4_indicators_pane_g_ParamLimits

0x647e,	// (0x00062153) cam4_indicators_pane_t1_ParamLimits

0x44ac,	// (0x00060181) bg_tb_trans_pane_cp07_ParamLimits

0x6531,	// (0x00062206) vid4_indicators_pane_g1_ParamLimits

0x6545,	// (0x0006221a) vid4_indicators_pane_g2_ParamLimits

0x6559,	// (0x0006222e) vid4_indicators_pane_g3_ParamLimits

0x656a,	// (0x0006223f) vid4_indicators_pane_g4_ParamLimits

0xf731,	// (0x0006b406) vid4_indicators_pane_g_ParamLimits

0x6588,	// (0x0006225d) vid4_indicators_pane_t1_ParamLimits

0x759e,	// (0x00063273) vid4_progress_pane_g1_ParamLimits

0x75ae,	// (0x00063283) vid4_progress_pane_g2_ParamLimits

0x75be,	// (0x00063293) vid4_progress_pane_g3_ParamLimits

0x75d0,	// (0x000632a5) vid4_progress_pane_g4_ParamLimits

0xf87e,	// (0x0006b553) vid4_progress_pane_g_ParamLimits

0x75e8,	// (0x000632bd) vid4_progress_pane_t1_ParamLimits

0x75fe,	// (0x000632d3) vid4_progress_pane_t2_ParamLimits

0x7613,	// (0x000632e8) vid4_progress_pane_t3_ParamLimits

0xf889,	// (0x0006b55e) vid4_progress_pane_t_ParamLimits

0x7628,	// (0x000632fd) wait_bar_pane_cp07_ParamLimits

0x7b3d,	// (0x00063812) main_cam6_set_pane_g2_ParamLimits

0x7b3d,	// (0x00063812) main_cam6_set_pane_g2

0x7b49,	// (0x0006381e) main_cset6_listscroll_pane_ParamLimits

0x7b49,	// (0x0006381e) main_cset6_listscroll_pane

0x7b74,	// (0x00063849) main_cset6_slider_pane_ParamLimits

0x7b74,	// (0x00063849) main_cset6_slider_pane

0x7b80,	// (0x00063855) main_cset6_text2_pane_ParamLimits

0x7b80,	// (0x00063855) main_cset6_text2_pane

0xdf4c,	// (0x00069c21) main_cset6_text_pane

0xdf54,	// (0x00069c29) main_cset_list_pane_copy1_ParamLimits

0xdf54,	// (0x00069c29) main_cset_list_pane_copy1

0xdf64,	// (0x00069c39) scroll_pane_cp028_copy1

0x7b93,	// (0x00063868) cset_list_set_pane_copy1

0x7ba6,	// (0x0006387b) aid_position_infowindow_above_copy1

0x7bae,	// (0x00063883) aid_position_infowindow_below_copy1

0x7bb6,	// (0x0006388b) cset_list_set_pane_g1_copy1

0xa01b,	// (0x00065cf0) cset_list_set_pane_g3_copy1_ParamLimits

0xa01b,	// (0x00065cf0) cset_list_set_pane_g3_copy1

0xa02a,	// (0x00065cff) cset_list_set_pane_t1_copy1_ParamLimits

0xa02a,	// (0x00065cff) cset_list_set_pane_t1_copy1

0xb17c,	// (0x00066e51) list_highlight_pane_cp021_copy1_ParamLimits

0xb17c,	// (0x00066e51) list_highlight_pane_cp021_copy1

0xdf6d,	// (0x00069c42) cset6_slider_pane_ParamLimits

0xdf6d,	// (0x00069c42) cset6_slider_pane

0xdf99,	// (0x00069c6e) main_cset6_slider_pane_g1_ParamLimits

0xdf99,	// (0x00069c6e) main_cset6_slider_pane_g1

0x7bbe,	// (0x00063893) main_cset6_slider_pane_g2_ParamLimits

0x7bbe,	// (0x00063893) main_cset6_slider_pane_g2

0xdfc1,	// (0x00069c96) main_cset6_slider_pane_g3_ParamLimits

0xdfc1,	// (0x00069c96) main_cset6_slider_pane_g3

0x7be6,	// (0x000638bb) main_cset6_slider_pane_g4_ParamLimits

0x7be6,	// (0x000638bb) main_cset6_slider_pane_g4

0x7bf2,	// (0x000638c7) main_cset6_slider_pane_g5_ParamLimits

0x7bf2,	// (0x000638c7) main_cset6_slider_pane_g5

0xd835,	// (0x0006950a) main_cset6_slider_pane_g7_ParamLimits

0xd835,	// (0x0006950a) main_cset6_slider_pane_g7

0xd841,	// (0x00069516) main_cset6_slider_pane_g8_ParamLimits

0xd841,	// (0x00069516) main_cset6_slider_pane_g8

0x7c00,	// (0x000638d5) main_cset6_slider_pane_g9_ParamLimits

0x7c00,	// (0x000638d5) main_cset6_slider_pane_g9

0x7c0c,	// (0x000638e1) main_cset6_slider_pane_g10_ParamLimits

0x7c0c,	// (0x000638e1) main_cset6_slider_pane_g10

0x7c18,	// (0x000638ed) main_cset6_slider_pane_g11_ParamLimits

0x7c18,	// (0x000638ed) main_cset6_slider_pane_g11

0x7c24,	// (0x000638f9) main_cset6_slider_pane_g12_ParamLimits

0x7c24,	// (0x000638f9) main_cset6_slider_pane_g12

0x7c30,	// (0x00063905) main_cset6_slider_pane_g13_ParamLimits

0x7c30,	// (0x00063905) main_cset6_slider_pane_g13

0x7c3c,	// (0x00063911) main_cset6_slider_pane_g14_ParamLimits

0x7c3c,	// (0x00063911) main_cset6_slider_pane_g14

0x7c48,	// (0x0006391d) main_cset6_slider_pane_g15_ParamLimits

0x7c48,	// (0x0006391d) main_cset6_slider_pane_g15

0x7c60,	// (0x00063935) main_cset6_slider_pane_g16_ParamLimits

0x7c60,	// (0x00063935) main_cset6_slider_pane_g16

0x7c6e,	// (0x00063943) main_cset6_slider_pane_g17_ParamLimits

0x7c6e,	// (0x00063943) main_cset6_slider_pane_g17

0x0011,

0xf91c,	// (0x0006b5f1) main_cset6_slider_pane_g_ParamLimits

0xf91c,	// (0x0006b5f1) main_cset6_slider_pane_g

0xdfcd,	// (0x00069ca2) main_cset6_slider_pane_t1_ParamLimits

0xdfcd,	// (0x00069ca2) main_cset6_slider_pane_t1

0x7c94,	// (0x00063969) main_cset6_slider_pane_t2_ParamLimits

0x7c94,	// (0x00063969) main_cset6_slider_pane_t2

0x7cbf,	// (0x00063994) main_cset6_slider_pane_t3_ParamLimits

0x7cbf,	// (0x00063994) main_cset6_slider_pane_t3

0x7cea,	// (0x000639bf) main_cset6_slider_pane_t4_ParamLimits

0x7cea,	// (0x000639bf) main_cset6_slider_pane_t4

0x7d15,	// (0x000639ea) main_cset6_slider_pane_t5_ParamLimits

0x7d15,	// (0x000639ea) main_cset6_slider_pane_t5

0xe00e,	// (0x00069ce3) main_cset6_slider_pane_t7_ParamLimits

0xe00e,	// (0x00069ce3) main_cset6_slider_pane_t7

0x7d42,	// (0x00063a17) main_cset6_slider_pane_t8_ParamLimits

0x7d42,	// (0x00063a17) main_cset6_slider_pane_t8

0x7d66,	// (0x00063a3b) main_cset6_slider_pane_t9_ParamLimits

0x7d66,	// (0x00063a3b) main_cset6_slider_pane_t9

0x7d8a,	// (0x00063a5f) main_cset6_slider_pane_t10_ParamLimits

0x7d8a,	// (0x00063a5f) main_cset6_slider_pane_t10

0x7dae,	// (0x00063a83) main_cset6_slider_pane_t11_ParamLimits

0x7dae,	// (0x00063a83) main_cset6_slider_pane_t11

0xe044,	// (0x00069d19) main_cset6_slider_pane_t14_ParamLimits

0xe044,	// (0x00069d19) main_cset6_slider_pane_t14

0xe07d,	// (0x00069d52) main_cset6_slider_pane_t15_ParamLimits

0xe07d,	// (0x00069d52) main_cset6_slider_pane_t15

0x000b,

0xf941,	// (0x0006b616) main_cset6_slider_pane_t_ParamLimits

0xf941,	// (0x0006b616) main_cset6_slider_pane_t

0xd922,	// (0x000695f7) cset_slider_pane_g1_copy1

0xd92b,	// (0x00069600) cset_slider_pane_g2_copy1

0xd934,	// (0x00069609) cset_slider_pane_g3_copy1

0x9c0a,	// (0x000658df) bg_popup_sub_pane_cp011_copy1

0xe0b6,	// (0x00069d8b) main_cset_text_pane_g1_copy1

0xd994,	// (0x00069669) main_cset_text_pane_t1_copy1

0xd9a2,	// (0x00069677) main_cset_text_pane_t2_copy1

0xd9b0,	// (0x00069685) main_cset_text_pane_t3_copy1

0xd9be,	// (0x00069693) main_cset_text_pane_t4_copy1

0xd9cc,	// (0x000696a1) main_cset_text_pane_t5_copy1

0xe0be,	// (0x00069d93) main_cset_text_pane_t6_copy1

0xd9e8,	// (0x000696bd) main_cset_text_pane_t7_copy1

0x7ea3,	// (0x00063b78) main_cset_text2_pane_t1_copy1

0x44ac,	// (0x00060181) main_ncimui_pane

0x450b,	// (0x000601e0) popup_query_ncimui_window_ParamLimits

0x450b,	// (0x000601e0) popup_query_ncimui_window

0x9fe6,	// (0x00065cbb) field_cale_ev2_pane_g4_ParamLimits

0x9fe6,	// (0x00065cbb) field_cale_ev2_pane_g4

0x5dca,	// (0x00061a9f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5dca,	// (0x00061a9f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6c2,	// (0x0006b397) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6c2,	// (0x0006b397) cell_video_dialer_keypad_pane_g

0x5de2,	// (0x00061ab7) cell_video_dialer_keypad_pane_t1

0x9c0a,	// (0x000658df) bg_popup_window_pane_cp012

0xb0dc,	// (0x00066db1) heading_pane_cp06

0xe0ea,	// (0x00069dbf) ncim_query_content_pane

0x9c0a,	// (0x000658df) bg_popup_heading_pane_cp01

0xe0f2,	// (0x00069dc7) ncim_heading_pane_t1

0xe100,	// (0x00069dd5) ncim_indicator_popup_pane

0xe112,	// (0x00069de7) ncim_query_button_pane

0xe126,	// (0x00069dfb) ncim_query_content_pane_t1

0xe138,	// (0x00069e0d) ncim_query_content_pane_t2

0x0005,

0xf985,	// (0x0006b65a) ncim_query_content_pane_t

0xe172,	// (0x00069e47) ncim_query_list_pane

0xe184,	// (0x00069e59) ncim_query_popup_pane

0xe100,	// (0x00069dd5) ncim_indicator_popup_pane_ParamLimits

0x7ff6,	// (0x00063ccb) ncim_query_content_pane_g1_ParamLimits

0x7ff6,	// (0x00063ccb) ncim_query_content_pane_g1

0xe126,	// (0x00069dfb) ncim_query_content_pane_t1_ParamLimits

0xe138,	// (0x00069e0d) ncim_query_content_pane_t2_ParamLimits

0x8002,	// (0x00063cd7) ncim_query_content_pane_t3_ParamLimits

0x8002,	// (0x00063cd7) ncim_query_content_pane_t3

0x801f,	// (0x00063cf4) ncim_query_content_pane_t4_ParamLimits

0x801f,	// (0x00063cf4) ncim_query_content_pane_t4

0x803c,	// (0x00063d11) ncim_query_content_pane_t5_ParamLimits

0x803c,	// (0x00063d11) ncim_query_content_pane_t5

0xe14a,	// (0x00069e1f) ncim_query_content_pane_t6_ParamLimits

0xe14a,	// (0x00069e1f) ncim_query_content_pane_t6

0xf985,	// (0x0006b65a) ncim_query_content_pane_t_ParamLimits

0xe172,	// (0x00069e47) ncim_query_list_pane_ParamLimits

0xe184,	// (0x00069e59) ncim_query_popup_pane_ParamLimits

0xe198,	// (0x00069e6d) wait_bar_pane_cp04

0x9c0a,	// (0x000658df) input_focus_pane_cp011

0xe1a0,	// (0x00069e75) ncim_query_popup_pane_t1

0xe1ae,	// (0x00069e83) ncim_list_query_list_pane_ParamLimits

0xe1ae,	// (0x00069e83) ncim_list_query_list_pane

0x9c0a,	// (0x000658df) bg_button_pane_cp027

0xe1bb,	// (0x00069e90) ncim_query_button_pane_g1

0x9c0a,	// (0x000658df) list_highlight_pane_cp012

0xe1c5,	// (0x00069e9a) ncim_list_query_list_pane_g1

0xe1cd,	// (0x00069ea2) ncim_list_query_list_pane_t1

0x646f,	// (0x00062144) cam4_indicators_pane_g3_ParamLimits

0x646f,	// (0x00062144) cam4_indicators_pane_g3

0x6576,	// (0x0006224b) vid4_indicators_pane_g5_ParamLimits

0x6576,	// (0x0006224b) vid4_indicators_pane_g5

0x75dc,	// (0x000632b1) vid4_progress_pane_g5_ParamLimits

0x75dc,	// (0x000632b1) vid4_progress_pane_g5

0x7ee2,	// (0x00063bb7) main_ncimui_pane_g1

0x7f4a,	// (0x00063c1f) ncimui_group_query_pane_ParamLimits

0x7f4a,	// (0x00063c1f) ncimui_group_query_pane

0x7f92,	// (0x00063c67) ncimui_list_pane_ParamLimits

0x7f92,	// (0x00063c67) ncimui_list_pane

0x7fb9,	// (0x00063c8e) ncimui_text_pane_ParamLimits

0x7fb9,	// (0x00063c8e) ncimui_text_pane

0x8059,	// (0x00063d2e) ncimui_text_pane_t1_ParamLimits

0x8059,	// (0x00063d2e) ncimui_text_pane_t1

0xe1db,	// (0x00069eb0) ncimui_list_single_graphic_pane_ParamLimits

0xe1db,	// (0x00069eb0) ncimui_list_single_graphic_pane

0x8078,	// (0x00063d4d) ncimui_query_pane_ParamLimits

0x8078,	// (0x00063d4d) ncimui_query_pane

0x9c0a,	// (0x000658df) list_highlight_pane_cp013

0xe1eb,	// (0x00069ec0) ncim_list_query_list_pane_t1_copy1

0xe1c5,	// (0x00069e9a) ncim_list_single_graphic_pane_g1

0xe1f9,	// (0x00069ece) ncim_query_button_pane_cp01

0xe205,	// (0x00069eda) ncim_query_entry_pane_ParamLimits

0xe205,	// (0x00069eda) ncim_query_entry_pane

0xe218,	// (0x00069eed) ncimui_query_pane_g1

0xe224,	// (0x00069ef9) ncimui_query_pane_t1_ParamLimits

0xe224,	// (0x00069ef9) ncimui_query_pane_t1

0xb17c,	// (0x00066e51) input_focus_pane_cp012

0xe23d,	// (0x00069f12) ncim_query_entry_pane_t1

0xa831,	// (0x00066506) main_im_pane_ParamLimits

0x44ac,	// (0x00060181) main_mobtv_pane_ParamLimits

0x44ac,	// (0x00060181) main_mobtv_pane

0x7c7c,	// (0x00063951) main_cset6_slider_pane_g18_ParamLimits

0x7c7c,	// (0x00063951) main_cset6_slider_pane_g18

0x7c88,	// (0x0006395d) main_cset6_slider_pane_g19_ParamLimits

0x7c88,	// (0x0006395d) main_cset6_slider_pane_g19

0xd6e6,	// (0x000693bb) bg_main_mobtv_pane_ParamLimits

0xd6e6,	// (0x000693bb) bg_main_mobtv_pane

0x808b,	// (0x00063d60) main_mobtv_info_pane

0x8096,	// (0x00063d6b) main_mobtv_loading_pane_ParamLimits

0x8096,	// (0x00063d6b) main_mobtv_loading_pane

0xe24f,	// (0x00069f24) main_mobtv_pg_channel_list_pane

0xe259,	// (0x00069f2e) main_mobtv_pg_hdr_pane

0x80a3,	// (0x00063d78) main_mobtv_programe_curr_pane_ParamLimits

0x80a3,	// (0x00063d78) main_mobtv_programe_curr_pane

0x80b0,	// (0x00063d85) main_mobtv_programe_next_pane_ParamLimits

0x80b0,	// (0x00063d85) main_mobtv_programe_next_pane

0xe262,	// (0x00069f37) popup_mobtv_noti_window

0xcc85,	// (0x0006895a) main_tv_pg_hdr_pane_g1

0xe26a,	// (0x00069f3f) main_tv_pg_hdr_pane_g2

0xe272,	// (0x00069f47) main_tv_pg_hdr_pane_g3

0xe27a,	// (0x00069f4f) main_tv_pg_hdr_pane_g4

0xe282,	// (0x00069f57) main_tv_pg_hdr_pane_g5

0xe28c,	// (0x00069f61) main_tv_pg_hdr_pane_g6

0xe296,	// (0x00069f6b) main_tv_pg_hdr_pane_g7

0xe2a0,	// (0x00069f75) main_tv_pg_hdr_pane_g8

0xe2aa,	// (0x00069f7f) main_tv_pg_hdr_pane_g9

0xe2b4,	// (0x00069f89) main_tv_pg_hdr_pane_g10

0xe2be,	// (0x00069f93) main_tv_pg_hdr_pane_g11

0x000a,

0x0b05,	// (0x0005c7da) main_tv_pg_hdr_pane_g

0xe2c8,	// (0x00069f9d) main_tv_pg_hdr_pane_t1

0xe2d6,	// (0x00069fab) main_tv_pg_hdr_pane_t2

0xe2e4,	// (0x00069fb9) main_tv_pg_hdr_pane_t3

0xe2f4,	// (0x00069fc9) main_tv_pg_hdr_pane_t4

0xe304,	// (0x00069fd9) main_tv_pg_hdr_pane_t5

0x0004,

0x0b1c,	// (0x0005c7f1) main_tv_pg_hdr_pane_t

0xe314,	// (0x00069fe9) single_mobtv_pg_channel_pane_ParamLimits

0xe314,	// (0x00069fe9) single_mobtv_pg_channel_pane

0xe326,	// (0x00069ffb) single_mobtv_pg_channel_table_pane

0xe32f,	// (0x0006a004) single_mobtv_pg_channel_thumb_pane

0xe338,	// (0x0006a00d) single_tv_pg_channel_pane_g1

0xe341,	// (0x0006a016) single_tv_pg_channel_pane_g2

0x0001,

0x0b27,	// (0x0005c7fc) single_tv_pg_channel_pane_g

0xcee8,	// (0x00068bbd) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcee8,	// (0x00068bbd) bg_single_mobtv_pg_channel_thumb_pane

0xe34a,	// (0x0006a01f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe34a,	// (0x0006a01f) single_mobtv_pg_channel_thumb_pane_g1

0xe358,	// (0x0006a02d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe358,	// (0x0006a02d) single_mobtv_pg_channel_thumb_pane_g2

0xe364,	// (0x0006a039) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe364,	// (0x0006a039) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0b2c,	// (0x0005c801) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0b2c,	// (0x0005c801) single_mobtv_pg_channel_thumb_pane_g

0xe370,	// (0x0006a045) single_mobtv_pg_channel_thumb_pane_t1

0xe37e,	// (0x0006a053) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b33,	// (0x0005c808) single_mobtv_pg_channel_thumb_pane_t

0xcc85,	// (0x0006895a) bg_single_mobtv_pg_channel_table_pane_g1

0xcc85,	// (0x0006895a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x05d9,	// (0x0005c2ae) bg_single_mobtv_pg_channel_table_pane_g

0xe38c,	// (0x0006a061) single_mobtv_pg_channel_table_pane_t1

0xe39a,	// (0x0006a06f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b38,	// (0x0005c80d) single_mobtv_pg_channel_table_pane_t

0x80c5,	// (0x00063d9a) main_mobtv_info_pane_g1_ParamLimits

0x80c5,	// (0x00063d9a) main_mobtv_info_pane_g1

0x80e1,	// (0x00063db6) main_mobtv_info_pane_t1_ParamLimits

0x80e1,	// (0x00063db6) main_mobtv_info_pane_t1

0x8159,	// (0x00063e2e) main_mobtv_info_pane_t2_ParamLimits

0x8159,	// (0x00063e2e) main_mobtv_info_pane_t2

0x0002,

0xf997,	// (0x0006b66c) main_mobtv_info_pane_t_ParamLimits

0xf997,	// (0x0006b66c) main_mobtv_info_pane_t

0x81e8,	// (0x00063ebd) wait_bar_pane_cp05

0x81fa,	// (0x00063ecf) main_mobtv_loading_pane_g1_ParamLimits

0x81fa,	// (0x00063ecf) main_mobtv_loading_pane_g1

0x8208,	// (0x00063edd) main_mobtv_loading_pane_g2_ParamLimits

0x8208,	// (0x00063edd) main_mobtv_loading_pane_g2

0x8214,	// (0x00063ee9) main_mobtv_loading_pane_g3_ParamLimits

0x8214,	// (0x00063ee9) main_mobtv_loading_pane_g3

0x0002,

0xf99e,	// (0x0006b673) main_mobtv_loading_pane_g_ParamLimits

0xf99e,	// (0x0006b673) main_mobtv_loading_pane_g

0xe3a8,	// (0x0006a07d) main_mobtv_loading_pane_t1_ParamLimits

0xe3a8,	// (0x0006a07d) main_mobtv_loading_pane_t1

0xe3c0,	// (0x0006a095) main_mobtv_loading_pane_t2_ParamLimits

0xe3c0,	// (0x0006a095) main_mobtv_loading_pane_t2

0x0001,

0x0b50,	// (0x0005c825) main_mobtv_loading_pane_t_ParamLimits

0x0b50,	// (0x0005c825) main_mobtv_loading_pane_t

0x8222,	// (0x00063ef7) wait_bar_pane_cp06_ParamLimits

0x8222,	// (0x00063ef7) wait_bar_pane_cp06

0xe3e4,	// (0x0006a0b9) main_mobtv_programe_curr_pane_t1

0xe3f2,	// (0x0006a0c7) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b55,	// (0x0005c82a) main_mobtv_programe_curr_pane_t

0xe400,	// (0x0006a0d5) main_mobtv_programe_next_pane_t1

0xe40e,	// (0x0006a0e3) main_mobtv_programe_next_pane_t2

0xe41c,	// (0x0006a0f1) main_mobtv_programe_next_pane_t3

0x0002,

0x0b5a,	// (0x0005c82f) main_mobtv_programe_next_pane_t

0x9c0a,	// (0x000658df) bg_popup_mobtv_noti_window_pane

0xe42a,	// (0x0006a0ff) popup_mobtv_noti_window_g1

0xe432,	// (0x0006a107) popup_mobtv_noti_window_t1

0xe440,	// (0x0006a115) popup_mobtv_noti_window_t2

0x0001,

0x0b61,	// (0x0005c836) popup_mobtv_noti_window_t

0xcc85,	// (0x0006895a) bg_popup_mobtv_noti_window_pane_g1

0x11b9,	// (0x0005ce8e) sc_clock_pane

0x11b9,	// (0x0005ce8e) main_fs_bigclock_pane

0x77f9,	// (0x000634ce) blid2_tripm_pane_t4_ParamLimits

0x77f9,	// (0x000634ce) blid2_tripm_pane_t4

0x822e,	// (0x00063f03) sc_clock_pane_g1_ParamLimits

0x822e,	// (0x00063f03) sc_clock_pane_g1

0x823c,	// (0x00063f11) sc_clock_pane_t1_ParamLimits

0x823c,	// (0x00063f11) sc_clock_pane_t1

0x824f,	// (0x00063f24) sc_clock_pane_t2_ParamLimits

0x824f,	// (0x00063f24) sc_clock_pane_t2

0x8261,	// (0x00063f36) sc_clock_pane_t3_ParamLimits

0x8261,	// (0x00063f36) sc_clock_pane_t3

0x0004,

0xf9a5,	// (0x0006b67a) sc_clock_pane_t_ParamLimits

0xf9a5,	// (0x0006b67a) sc_clock_pane_t

0x9198,	// (0x00064e6d) main_fs_bigclock_indicator_pane_ParamLimits

0x9198,	// (0x00064e6d) main_fs_bigclock_indicator_pane

0x82ea,	// (0x00063fbf) main_fs_bigclock_pane_g1_ParamLimits

0x82ea,	// (0x00063fbf) main_fs_bigclock_pane_g1

0x91a4,	// (0x00064e79) main_fs_bigclock_pane_t1_ParamLimits

0x91a4,	// (0x00064e79) main_fs_bigclock_pane_t1

0x91b6,	// (0x00064e8b) main_fs_bigclock_pane_t2_ParamLimits

0x91b6,	// (0x00064e8b) main_fs_bigclock_pane_t2

0x91ca,	// (0x00064e9f) main_fs_bigclock_pane_t3_ParamLimits

0x91ca,	// (0x00064e9f) main_fs_bigclock_pane_t3

0x0002,

0xfb30,	// (0x0006b805) main_fs_bigclock_pane_t_ParamLimits

0xfb30,	// (0x0006b805) main_fs_bigclock_pane_t

0xec85,	// (0x0006a95a) main_fs_bigclock_indicator_pane_g1

0xe11a,	// (0x00069def) ncim_query_content_pane_g2_ParamLimits

0xe11a,	// (0x00069def) ncim_query_content_pane_g2

0x0001,

0xf980,	// (0x0006b655) ncim_query_content_pane_g_ParamLimits

0xf980,	// (0x0006b655) ncim_query_content_pane_g

0x8275,	// (0x00063f4a) sc_clock_pane_t4_ParamLimits

0x8275,	// (0x00063f4a) sc_clock_pane_t4

0x44ac,	// (0x00060181) main_radioblah_pane

0xd659,	// (0x0006932e) cell_call4_button_pane_t1_copy1_ParamLimits

0xd659,	// (0x0006932e) cell_call4_button_pane_t1_copy1

0x7efc,	// (0x00063bd1) main_ncimui_pane_t1_ParamLimits

0x7efc,	// (0x00063bd1) main_ncimui_pane_t1

0x7f16,	// (0x00063beb) main_ncimui_pane_t2_ParamLimits

0x7f16,	// (0x00063beb) main_ncimui_pane_t2

0x0002,

0xf979,	// (0x0006b64e) main_ncimui_pane_t_ParamLimits

0xf979,	// (0x0006b64e) main_ncimui_pane_t

0xe584,	// (0x0006a259) main_radioblah_anim_pane_ParamLimits

0xe584,	// (0x0006a259) main_radioblah_anim_pane

0xe595,	// (0x0006a26a) main_radioblah_info_pane_ParamLimits

0xe595,	// (0x0006a26a) main_radioblah_info_pane

0xe5a9,	// (0x0006a27e) main_radioblah_pane_t1_ParamLimits

0xe5a9,	// (0x0006a27e) main_radioblah_pane_t1

0xe5d3,	// (0x0006a2a8) main_radioblah_pane_t2_ParamLimits

0xe5d3,	// (0x0006a2a8) main_radioblah_pane_t2

0x0003,

0xf9b0,	// (0x0006b685) main_radioblah_pane_t_ParamLimits

0xf9b0,	// (0x0006b685) main_radioblah_pane_t

0x833c,	// (0x00064011) main_radioblah_rocker_ctrl_pane_ParamLimits

0x833c,	// (0x00064011) main_radioblah_rocker_ctrl_pane

0xe62d,	// (0x0006a302) main_radioblah_info_pane_t1_ParamLimits

0xe62d,	// (0x0006a302) main_radioblah_info_pane_t1

0x8381,	// (0x00064056) main_radioblah_info_pane_t2_ParamLimits

0x8381,	// (0x00064056) main_radioblah_info_pane_t2

0x0003,

0xf9b9,	// (0x0006b68e) main_radioblah_info_pane_t_ParamLimits

0xf9b9,	// (0x0006b68e) main_radioblah_info_pane_t

0xcc85,	// (0x0006895a) main_radioblah_rocker_ctrl_pane_g1

0x8431,	// (0x00064106) main_radioblah_rocker_ctrl_pane_g2

0x8439,	// (0x0006410e) main_radioblah_rocker_ctrl_pane_g3

0x8441,	// (0x00064116) main_radioblah_rocker_ctrl_pane_g4

0x8449,	// (0x0006411e) main_radioblah_rocker_ctrl_pane_g5

0x8451,	// (0x00064126) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf9c2,	// (0x0006b697) main_radioblah_rocker_ctrl_pane_g

0x7ea3,	// (0x00063b78) main_cset_text2_pane_t1_copy1_ParamLimits

0x638f,	// (0x00062064) cam4_image_uncrop_qvga_pane

0x64e4,	// (0x000621b9) vid4_image_uncrop_qcif_pane

0x7987,	// (0x0006365c) cam6_image_uncrop_qvga_pane_ParamLimits

0x7987,	// (0x0006365c) cam6_image_uncrop_qvga_pane

0xde2f,	// (0x00069b04) vid6_image_uncrop_qcif_pane_ParamLimits

0xde2f,	// (0x00069b04) vid6_image_uncrop_qcif_pane

0x9c0a,	// (0x000658df) bg_popup_preview_window_pane_cp03

0xe0cc,	// (0x00069da1) list_cset_text2_pane

0xe0d4,	// (0x00069da9) main_cset6_text2_pane_g1

0xe0dc,	// (0x00069db1) main_cset6_text2_pane_t1

0x8459,	// (0x0006412e) list_cset_text2_pane_t1_ParamLimits

0x8459,	// (0x0006412e) list_cset_text2_pane_t1

0x44ac,	// (0x00060181) main_radioblah_pane_ParamLimits

0x81d4,	// (0x00063ea9) main_mobtv_info_pane_t3_ParamLimits

0x81d4,	// (0x00063ea9) main_mobtv_info_pane_t3

0x832a,	// (0x00063fff) main_radioblah_pane_g1

0x8355,	// (0x0006402a) main_radioblah_info_pane_g1

0x83d6,	// (0x000640ab) main_radioblah_info_pane_t3_ParamLimits

0x83d6,	// (0x000640ab) main_radioblah_info_pane_t3

0x31ce,	// (0x0005eea3) highlight_cell_cale_month_pane_ParamLimits

0x31ce,	// (0x0005eea3) highlight_cell_cale_month_pane

0x11b9,	// (0x0005ce8e) main_phob_fisheye_pane

0xcfe4,	// (0x00068cb9) scroll_pane_cp0031_ParamLimits

0xcfe4,	// (0x00068cb9) scroll_pane_cp0031

0xdf3d,	// (0x00069c12) wait_bar_pane_cp08_ParamLimits

0x7b93,	// (0x00063868) cset_list_set_pane_copy1_ParamLimits

0xe667,	// (0x0006a33c) highlight_cell_cale_month_pane_g1

0x8476,	// (0x0006414b) highlight_cell_cale_month_pane_t1

0xdbc0,	// (0x00069895) list_gen_pane_cp01

0xd820,	// (0x000694f5) scroll_pane_01

0x8484,	// (0x00064159) list_single_double_fisheye_pane

0x848d,	// (0x00064162) list_double_fisheye_pane_g1_ParamLimits

0x848d,	// (0x00064162) list_double_fisheye_pane_g1

0x8499,	// (0x0006416e) list_double_fisheye_pane_g2_ParamLimits

0x8499,	// (0x0006416e) list_double_fisheye_pane_g2

0x84ad,	// (0x00064182) list_double_fisheye_pane_g3_ParamLimits

0x84ad,	// (0x00064182) list_double_fisheye_pane_g3

0x0004,

0xf9cf,	// (0x0006b6a4) list_double_fisheye_pane_g_ParamLimits

0xf9cf,	// (0x0006b6a4) list_double_fisheye_pane_g

0x84d6,	// (0x000641ab) list_double_fisheye_pane_t1_ParamLimits

0x84d6,	// (0x000641ab) list_double_fisheye_pane_t1

0x84f1,	// (0x000641c6) list_double_fisheye_pane_t2_ParamLimits

0x84f1,	// (0x000641c6) list_double_fisheye_pane_t2

0x0001,

0xf9da,	// (0x0006b6af) list_double_fisheye_pane_t_ParamLimits

0xf9da,	// (0x0006b6af) list_double_fisheye_pane_t

0x11b9,	// (0x0005ce8e) main_call5_pane

0x829b,	// (0x00063f70) sc_swipe_pane_ParamLimits

0x829b,	// (0x00063f70) sc_swipe_pane

0x851f,	// (0x000641f4) call5_image_pane_ParamLimits

0x851f,	// (0x000641f4) call5_image_pane

0x852f,	// (0x00064204) call5_swipe_1_pane_ParamLimits

0x852f,	// (0x00064204) call5_swipe_1_pane

0x853b,	// (0x00064210) call5_swipe_2_pane_ParamLimits

0x853b,	// (0x00064210) call5_swipe_2_pane

0x8555,	// (0x0006422a) popup_call5_audio_first_window_ParamLimits

0x8555,	// (0x0006422a) popup_call5_audio_first_window

0xcee8,	// (0x00068bbd) call5_swipe_1_pane_g1_ParamLimits

0xcee8,	// (0x00068bbd) call5_swipe_1_pane_g1

0xe66f,	// (0x0006a344) call5_swipe_1_pane_g2_ParamLimits

0xe66f,	// (0x0006a344) call5_swipe_1_pane_g2

0x0001,

0x0bb6,	// (0x0005c88b) call5_swipe_1_pane_g_ParamLimits

0x0bb6,	// (0x0005c88b) call5_swipe_1_pane_g

0xe67b,	// (0x0006a350) call5_swipe_1_pane_t1_ParamLimits

0xe67b,	// (0x0006a350) call5_swipe_1_pane_t1

0xcee8,	// (0x00068bbd) call5_swipe_2_pane_g1_ParamLimits

0xcee8,	// (0x00068bbd) call5_swipe_2_pane_g1

0xe690,	// (0x0006a365) call5_swipe_2_pane_g2_ParamLimits

0xe690,	// (0x0006a365) call5_swipe_2_pane_g2

0x0001,

0x0bbb,	// (0x0005c890) call5_swipe_2_pane_g_ParamLimits

0x0bbb,	// (0x0005c890) call5_swipe_2_pane_g

0xe69c,	// (0x0006a371) call5_swipe_2_pane_t1_ParamLimits

0xe69c,	// (0x0006a371) call5_swipe_2_pane_t1

0xe6b1,	// (0x0006a386) sc_swipe_pane_g1_ParamLimits

0xe6b1,	// (0x0006a386) sc_swipe_pane_g1

0xe6be,	// (0x0006a393) sc_swipe_pane_g2_ParamLimits

0xe6be,	// (0x0006a393) sc_swipe_pane_g2

0x0001,

0x0bc0,	// (0x0005c895) sc_swipe_pane_g_ParamLimits

0x0bc0,	// (0x0005c895) sc_swipe_pane_g

0xe6ca,	// (0x0006a39f) sc_swipe_pane_t1_ParamLimits

0xe6ca,	// (0x0006a39f) sc_swipe_pane_t1

0x11b9,	// (0x0005ce8e) main_cmail_launcher_pane

0x8563,	// (0x00064238) aid_size_cell_cmail_l_ParamLimits

0x8563,	// (0x00064238) aid_size_cell_cmail_l

0x8573,	// (0x00064248) grid_cmail_l_pane_ParamLimits

0x8573,	// (0x00064248) grid_cmail_l_pane

0x8583,	// (0x00064258) cell_cmail_l_pane_ParamLimits

0x8583,	// (0x00064258) cell_cmail_l_pane

0x8597,	// (0x0006426c) cell_cmail_l_pane_g1_ParamLimits

0x8597,	// (0x0006426c) cell_cmail_l_pane_g1

0x85a3,	// (0x00064278) cell_cmail_l_pane_t1_ParamLimits

0x85a3,	// (0x00064278) cell_cmail_l_pane_t1

0xe6df,	// (0x0006a3b4) cell_cmail_l_pane_t2_ParamLimits

0xe6df,	// (0x0006a3b4) cell_cmail_l_pane_t2

0x0001,

0xf9df,	// (0x0006b6b4) cell_cmail_l_pane_t_ParamLimits

0xf9df,	// (0x0006b6b4) cell_cmail_l_pane_t

0xb17c,	// (0x00066e51) grid_highlight_pane_cp018_ParamLimits

0xb17c,	// (0x00066e51) grid_highlight_pane_cp018

0x100f,	// (0x0005cce4) main2_pane_ParamLimits

0x100f,	// (0x0005cce4) main2_pane

0xa8ca,	// (0x0006659f) popup_sp_fs_action_menu_bg_pane_g1

0xa8d2,	// (0x000665a7) popup_sp_fs_action_menu_bg_pane_g2

0xa8da,	// (0x000665af) popup_sp_fs_action_menu_bg_pane_g3

0xa8e2,	// (0x000665b7) popup_sp_fs_action_menu_bg_pane_g4

0xa8ea,	// (0x000665bf) popup_sp_fs_action_menu_bg_pane_g5

0xa8f2,	// (0x000665c7) popup_sp_fs_action_menu_bg_pane_g6

0xa8fa,	// (0x000665cf) popup_sp_fs_action_menu_bg_pane_g7

0xa902,	// (0x000665d7) popup_sp_fs_action_menu_bg_pane_g8

0xa90a,	// (0x000665df) popup_sp_fs_action_menu_bg_pane_g9

0xa912,	// (0x000665e7) popup_sp_fs_action_menu_bg_pane_g10

0xa912,	// (0x000665e7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0006ae5f) popup_sp_fs_action_menu_bg_pane_g

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t3_g3_g1

0x1fb3,	// (0x0005dc88) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1fb3,	// (0x0005dc88) list_medium_line_x2_t3_g3_g2

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006af0d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006af0d) list_medium_line_x2_t3_g3_g

0x1fcb,	// (0x0005dca0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1fcb,	// (0x0005dca0) list_medium_line_x2_t3_g3_t1

0x1fe0,	// (0x0005dcb5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1fe0,	// (0x0005dcb5) list_medium_line_x2_t3_g3_t2

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0006af14) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0006af14) list_medium_line_x2_t3_g3_t

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t3_g2_g1

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006af1b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006af1b) list_medium_line_x2_t3_g2_g

0x2007,	// (0x0005dcdc) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2007,	// (0x0005dcdc) list_medium_line_x2_t3_g2_t1

0x201d,	// (0x0005dcf2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x201d,	// (0x0005dcf2) list_medium_line_x2_t3_g2_t2

0x202f,	// (0x0005dd04) list_medium_line_x2_t3_g2_t3_ParamLimits

0x202f,	// (0x0005dd04) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0006af20) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0006af20) list_medium_line_x2_t3_g2_t

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t4_g4_g1

0x204c,	// (0x0005dd21) list_medium_line_x2_t4_g4_g2_ParamLimits

0x204c,	// (0x0005dd21) list_medium_line_x2_t4_g4_g2

0x1fb3,	// (0x0005dc88) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1fb3,	// (0x0005dc88) list_medium_line_x2_t4_g4_g3

0x2058,	// (0x0005dd2d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2058,	// (0x0005dd2d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0006af27) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0006af27) list_medium_line_x2_t4_g4_g

0x2064,	// (0x0005dd39) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2064,	// (0x0005dd39) list_medium_line_x2_t4_g4_t1

0x207b,	// (0x0005dd50) list_medium_line_x2_t4_g4_t2_ParamLimits

0x207b,	// (0x0005dd50) list_medium_line_x2_t4_g4_t2

0x2090,	// (0x0005dd65) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2090,	// (0x0005dd65) list_medium_line_x2_t4_g4_t3

0x20a2,	// (0x0005dd77) list_medium_line_x2_t4_g4_t4_ParamLimits

0x20a2,	// (0x0005dd77) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0006af30) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0006af30) list_medium_line_x2_t4_g4_t

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t2_g4_g1

0x204c,	// (0x0005dd21) list_medium_line_x2_t2_g4_g2_ParamLimits

0x204c,	// (0x0005dd21) list_medium_line_x2_t2_g4_g2

0x1fb3,	// (0x0005dc88) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1fb3,	// (0x0005dc88) list_medium_line_x2_t2_g4_g3

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0006af97) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0006af97) list_medium_line_x2_t2_g4_g

0x31f4,	// (0x0005eec9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x31f4,	// (0x0005eec9) list_medium_line_x2_t2_g4_t1

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0006afa0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0006afa0) list_medium_line_x2_t2_g4_t

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t2_g3_g1

0x1fb3,	// (0x0005dc88) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1fb3,	// (0x0005dc88) list_medium_line_x2_t2_g3_g2

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006af0d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006af0d) list_medium_line_x2_t2_g3_g

0x3209,	// (0x0005eede) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3209,	// (0x0005eede) list_medium_line_x2_t2_g3_t1

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0006afa5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0006afa5) list_medium_line_x2_t2_g3_t

0x33c4,	// (0x0005f099) main_sp_fs_list_pane_ParamLimits

0x33c4,	// (0x0005f099) main_sp_fs_list_pane

0x33d0,	// (0x0005f0a5) sp_fs_scroll_pane_ParamLimits

0x33d0,	// (0x0005f0a5) sp_fs_scroll_pane

0x33dc,	// (0x0005f0b1) list_medium_line_x2_t3_t1

0x33ec,	// (0x0005f0c1) list_medium_line_x2_t3_t2

0x33fa,	// (0x0005f0cf) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0006aff0) list_medium_line_x2_t3_t

0x3408,	// (0x0005f0dd) list_medium_line_x3_t4_t1

0x3418,	// (0x0005f0ed) list_medium_line_x3_t4_t2

0x3426,	// (0x0005f0fb) list_medium_line_x3_t4_t3

0x33fa,	// (0x0005f0cf) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0006aff7) list_medium_line_x3_t4_t

0x3434,	// (0x0005f109) list_medium_line_x4_t5_t1

0x3444,	// (0x0005f119) list_medium_line_x4_t5_t2

0x3426,	// (0x0005f0fb) list_medium_line_x4_t5_t3

0x3452,	// (0x0005f127) list_medium_line_x4_t5_t4

0x33fa,	// (0x0005f0cf) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0006b000) list_medium_line_x4_t5_t

0x1fa7,	// (0x0005dc7c) list_medium_line_t4_g4_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_t4_g4_g1

0x2058,	// (0x0005dd2d) list_medium_line_t4_g4_g2_ParamLimits

0x2058,	// (0x0005dd2d) list_medium_line_t4_g4_g2

0x3460,	// (0x0005f135) list_medium_line_t4_g4_g3_ParamLimits

0x3460,	// (0x0005f135) list_medium_line_t4_g4_g3

0x1fbf,	// (0x0005dc94) list_medium_line_t4_g4_g4_ParamLimits

0x1fbf,	// (0x0005dc94) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0006b00b) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0006b00b) list_medium_line_t4_g4_g

0x346c,	// (0x0005f141) list_medium_line_t4_g4_t1_ParamLimits

0x346c,	// (0x0005f141) list_medium_line_t4_g4_t1

0x3481,	// (0x0005f156) list_medium_line_t4_g4_t2_ParamLimits

0x3481,	// (0x0005f156) list_medium_line_t4_g4_t2

0x3496,	// (0x0005f16b) list_medium_line_t4_g4_t3_ParamLimits

0x3496,	// (0x0005f16b) list_medium_line_t4_g4_t3

0x1ff2,	// (0x0005dcc7) list_medium_line_t4_g4_t4_ParamLimits

0x1ff2,	// (0x0005dcc7) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0006b014) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0006b014) list_medium_line_t4_g4_t

0x35ac,	// (0x0005f281) chi_dic_find_pane_g1

0x44c8,	// (0x0006019d) main_tport_pane

0x6ea2,	// (0x00062b77) list_medium_line_plain_t1

0x6f82,	// (0x00062c57) list_medium_line_t2_g2_g1_ParamLimits

0x6f82,	// (0x00062c57) list_medium_line_t2_g2_g1

0x6f8e,	// (0x00062c63) list_medium_line_t2_g2_g2_ParamLimits

0x6f8e,	// (0x00062c63) list_medium_line_t2_g2_g2

0x0001,

0xf808,	// (0x0006b4dd) list_medium_line_t2_g2_g_ParamLimits

0xf808,	// (0x0006b4dd) list_medium_line_t2_g2_g

0x6f9a,	// (0x00062c6f) list_medium_line_t2_g2_t1_ParamLimits

0x6f9a,	// (0x00062c6f) list_medium_line_t2_g2_t1

0x6fb1,	// (0x00062c86) list_medium_line_t2_g2_t2_ParamLimits

0x6fb1,	// (0x00062c86) list_medium_line_t2_g2_t2

0x0001,

0xf80d,	// (0x0006b4e2) list_medium_line_t2_g2_t_ParamLimits

0xf80d,	// (0x0006b4e2) list_medium_line_t2_g2_t

0xa0db,	// (0x00065db0) aid_sp_fs_list_icon_a_sm

0xa0e3,	// (0x00065db8) aid_sp_fs_list_icon_d

0xa0eb,	// (0x00065dc0) aid_sp_fs_text_primary

0xa0f4,	// (0x00065dc9) aid_sp_fs_text_secondary

0x763b,	// (0x00063310) list_medium_line

0x763b,	// (0x00063310) list_medium_line_g2

0x763b,	// (0x00063310) list_medium_line_g3

0x763b,	// (0x00063310) list_medium_line_plain

0x763b,	// (0x00063310) list_medium_line_plain_t2

0x763b,	// (0x00063310) list_medium_line_plain_t3

0x763b,	// (0x00063310) list_medium_line_right_icon

0x763b,	// (0x00063310) list_medium_line_right_iconx2

0x763b,	// (0x00063310) list_medium_line_t2

0x763b,	// (0x00063310) list_medium_line_t2_g2

0x763b,	// (0x00063310) list_medium_line_t2_g3

0x763b,	// (0x00063310) list_medium_line_t2_right_icon

0x763b,	// (0x00063310) list_medium_line_t2_right_iconx2

0x763b,	// (0x00063310) list_medium_line_t3

0x763b,	// (0x00063310) list_medium_line_t3_g2

0x763b,	// (0x00063310) list_medium_line_t3_g3

0x763b,	// (0x00063310) list_medium_line_t3_right_iconx2

0x7644,	// (0x00063319) list_medium_line_t4_g4

0x764d,	// (0x00063322) list_medium_line_x2

0x764d,	// (0x00063322) list_medium_line_x2_t2_g2

0x764d,	// (0x00063322) list_medium_line_x2_t2_g3

0x764d,	// (0x00063322) list_medium_line_x2_t2_g4

0x764d,	// (0x00063322) list_medium_line_x2_t3

0x764d,	// (0x00063322) list_medium_line_x2_t3_g2

0x764d,	// (0x00063322) list_medium_line_x2_t3_g3

0x764d,	// (0x00063322) list_medium_line_x2_t3_g4

0x764d,	// (0x00063322) list_medium_line_x2_t4_g2

0x764d,	// (0x00063322) list_medium_line_x2_t4_g4

0x7656,	// (0x0006332b) list_medium_line_x3

0x7656,	// (0x0006332b) list_medium_line_x3_t4

0x7656,	// (0x0006332b) list_medium_line_x3_t4_g4

0x7644,	// (0x00063319) list_medium_line_x4_t4

0x7644,	// (0x00063319) list_medium_line_x4_t4_g7

0x7644,	// (0x00063319) list_medium_line_x4_t5

0x765f,	// (0x00063334) list_single_fs_dyc_pane_ParamLimits

0x765f,	// (0x00063334) list_single_fs_dyc_pane

0x1fa7,	// (0x0005dc7c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x4_t4_g7_g1

0x7dd2,	// (0x00063aa7) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7dd2,	// (0x00063aa7) list_medium_line_x4_t4_g7_g2

0x7dde,	// (0x00063ab3) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7dde,	// (0x00063ab3) list_medium_line_x4_t4_g7_g3

0x7ded,	// (0x00063ac2) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7ded,	// (0x00063ac2) list_medium_line_x4_t4_g7_g4

0x7df9,	// (0x00063ace) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7df9,	// (0x00063ace) list_medium_line_x4_t4_g7_g5

0x7e08,	// (0x00063add) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e08,	// (0x00063add) list_medium_line_x4_t4_g7_g6

0x7e17,	// (0x00063aec) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e17,	// (0x00063aec) list_medium_line_x4_t4_g7_g7

0x0006,

0xf95a,	// (0x0006b62f) list_medium_line_x4_t4_g7_g_ParamLimits

0xf95a,	// (0x0006b62f) list_medium_line_x4_t4_g7_g

0x7e23,	// (0x00063af8) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e23,	// (0x00063af8) list_medium_line_x4_t4_g7_t1

0x7e38,	// (0x00063b0d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e38,	// (0x00063b0d) list_medium_line_x4_t4_g7_t2

0x7e4d,	// (0x00063b22) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e4d,	// (0x00063b22) list_medium_line_x4_t4_g7_t3

0x7e62,	// (0x00063b37) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e62,	// (0x00063b37) list_medium_line_x4_t4_g7_t4

0x7e74,	// (0x00063b49) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e74,	// (0x00063b49) list_medium_line_x4_t4_g7_t5

0x0004,

0xf969,	// (0x0006b63e) list_medium_line_x4_t4_g7_t_ParamLimits

0xf969,	// (0x0006b63e) list_medium_line_x4_t4_g7_t

0x7e86,	// (0x00063b5b) list_single_dyc_row_pane_ParamLimits

0x7e86,	// (0x00063b5b) list_single_dyc_row_pane

0x8513,	// (0x000641e8) call5_gesture_pane_ParamLimits

0x8513,	// (0x000641e8) call5_gesture_pane

0x8547,	// (0x0006421c) call5_windows_pane_ParamLimits

0x8547,	// (0x0006421c) call5_windows_pane

0x85b9,	// (0x0006428e) call5_swipe_1_pane_cp_ParamLimits

0x85b9,	// (0x0006428e) call5_swipe_1_pane_cp

0x85c5,	// (0x0006429a) call5_swipe_2_pane_cp_ParamLimits

0x85c5,	// (0x0006429a) call5_swipe_2_pane_cp

0xa9f6,	// (0x000666cb) call5_image_pane_cp

0x85d1,	// (0x000642a6) popup_call5_audio_first_window_cp_ParamLimits

0x85d1,	// (0x000642a6) popup_call5_audio_first_window_cp

0xe6b1,	// (0x0006a386) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6b1,	// (0x0006a386) call5_swipe_1_pane_g1_cp

0xe6f1,	// (0x0006a3c6) call5_swipe_1_pane_g2_cp

0xe6ca,	// (0x0006a39f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6ca,	// (0x0006a39f) call5_swipe_1_pane_t1_cp

0xe6b1,	// (0x0006a386) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6b1,	// (0x0006a386) call5_swipe_2_pane_g1_cp

0xe6f9,	// (0x0006a3ce) call5_swipe_2_pane_g2_cp

0xe701,	// (0x0006a3d6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe701,	// (0x0006a3d6) call5_swipe_2_pane_t1_cp

0xb17c,	// (0x00066e51) main_sp_fs_email_pane

0xe716,	// (0x0006a3eb) main_sp_fs_listscroll_pane_te

0x85df,	// (0x000642b4) popup_sp_fs_action_menu_pane_ParamLimits

0x85df,	// (0x000642b4) popup_sp_fs_action_menu_pane

0xcc85,	// (0x0006895a) bg_sp_fs_ctrlbar_pane_g1

0xd27b,	// (0x00068f50) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd28d,	// (0x00068f62) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd284,	// (0x00068f59) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc85,	// (0x0006895a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0bca,	// (0x0005c89f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca55,	// (0x0006872a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca55,	// (0x0006872a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe71f,	// (0x0006a3f4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe71f,	// (0x0006a3f4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe72b,	// (0x0006a400) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe72b,	// (0x0006a400) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0bd3,	// (0x0005c8a8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0bd3,	// (0x0005c8a8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe737,	// (0x0006a40c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe737,	// (0x0006a40c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8621,	// (0x000642f6) list_medium_line_t2_right_icon_g1

0x8629,	// (0x000642fe) list_medium_line_t2_right_icon_t1

0x8639,	// (0x0006430e) list_medium_line_t2_right_icon_t2

0x0001,

0xf9e4,	// (0x0006b6b9) list_medium_line_t2_right_icon_t

0xc868,	// (0x0006853d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc868,	// (0x0006853d) bg_sp_fs_ctrlbar_pane

0x869e,	// (0x00064373) main_sp_fs_ctrlbar_button_pane_cp01

0x86a6,	// (0x0006437b) main_sp_fs_ctrlbar_ddmenu_pane

0xe789,	// (0x0006a45e) main_sp_fs_ctrlbar_pane_g1

0xe795,	// (0x0006a46a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0bdd,	// (0x0005c8b2) main_sp_fs_ctrlbar_pane_g

0xe7a1,	// (0x0006a476) main_sp_fs_ctrlbar_pane_t1

0x86b0,	// (0x00064385) main_sp_fs_ctrlbar_pane

0x86c6,	// (0x0006439b) main_sp_fs_listscroll_pane_te_cp01

0x86d7,	// (0x000643ac) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x86d7,	// (0x000643ac) popup_sp_fs_action_menu_pane_cp01

0xb17c,	// (0x00066e51) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb17c,	// (0x00066e51) bg_sp_fs_highlight_list_pane_cp01

0xa0fd,	// (0x00065dd2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa0fd,	// (0x00065dd2) sp_fs_action_menu_list_gene_pane_g1

0xe7d1,	// (0x0006a4a6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d1,	// (0x0006a4a6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xf9e9,	// (0x0006b6be) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xf9e9,	// (0x0006b6be) sp_fs_action_menu_list_gene_pane_g

0xa10c,	// (0x00065de1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa10c,	// (0x00065de1) sp_fs_action_menu_list_gene_pane_t1

0xa124,	// (0x00065df9) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa124,	// (0x00065df9) sp_fs_action_menu_list_gene_pane

0xe7de,	// (0x0006a4b3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7de,	// (0x0006a4b3) popup_sp_fs_action_menu_bg_pane

0xa143,	// (0x00065e18) sp_fs_action_menu_list_pane_ParamLimits

0xa143,	// (0x00065e18) sp_fs_action_menu_list_pane

0x8701,	// (0x000643d6) sp_fs_scroll_pane_cp01_ParamLimits

0x8701,	// (0x000643d6) sp_fs_scroll_pane_cp01

0x8727,	// (0x000643fc) list_medium_line_plain_t2_t1

0x8737,	// (0x0006440c) list_medium_line_plain_t2_t2

0x0001,

0xf9ee,	// (0x0006b6c3) list_medium_line_plain_t2_t

0x8745,	// (0x0006441a) list_medium_line_plain_t3_t1

0x8755,	// (0x0006442a) list_medium_line_plain_t3_t2

0x8763,	// (0x00064438) list_medium_line_plain_t3_t3

0x0002,

0xf9f3,	// (0x0006b6c8) list_medium_line_plain_t3_t

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t2_g2_g1

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006af1b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006af1b) list_medium_line_x2_t2_g2_g

0x346c,	// (0x0005f141) list_medium_line_x2_t2_g2_t1_ParamLimits

0x346c,	// (0x0005f141) list_medium_line_x2_t2_g2_t1

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t2_g2_t2

0x0001,

0xf9fa,	// (0x0006b6cf) list_medium_line_x2_t2_g2_t_ParamLimits

0xf9fa,	// (0x0006b6cf) list_medium_line_x2_t2_g2_t

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t4_g2_g1

0x8771,	// (0x00064446) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8771,	// (0x00064446) list_medium_line_x2_t4_g2_g2

0x0001,

0xf9ff,	// (0x0006b6d4) list_medium_line_x2_t4_g2_g_ParamLimits

0xf9ff,	// (0x0006b6d4) list_medium_line_x2_t4_g2_g

0x8782,	// (0x00064457) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8782,	// (0x00064457) list_medium_line_x2_t4_g2_t1

0x879c,	// (0x00064471) list_medium_line_x2_t4_g2_t2_ParamLimits

0x879c,	// (0x00064471) list_medium_line_x2_t4_g2_t2

0x87b1,	// (0x00064486) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87b1,	// (0x00064486) list_medium_line_x2_t4_g2_t3

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa04,	// (0x0006b6d9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa04,	// (0x0006b6d9) list_medium_line_x2_t4_g2_t

0x87c6,	// (0x0006449b) list_medium_line_t3_right_iconx2_g1

0x8621,	// (0x000642f6) list_medium_line_t3_right_iconx2_g2

0x87ce,	// (0x000644a3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa0d,	// (0x0006b6e2) list_medium_line_t3_right_iconx2_g

0x87d6,	// (0x000644ab) list_medium_line_t3_right_iconx2_t1

0x87e6,	// (0x000644bb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa14,	// (0x0006b6e9) list_medium_line_t3_right_iconx2_t

0x1fa7,	// (0x0005dc7c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x3_t4_g4_g1

0x1fb3,	// (0x0005dc88) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1fb3,	// (0x0005dc88) list_medium_line_x3_t4_g4_g2

0x2058,	// (0x0005dd2d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2058,	// (0x0005dd2d) list_medium_line_x3_t4_g4_g3

0x87f4,	// (0x000644c9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x87f4,	// (0x000644c9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa19,	// (0x0006b6ee) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa19,	// (0x0006b6ee) list_medium_line_x3_t4_g4_g

0x8800,	// (0x000644d5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8800,	// (0x000644d5) list_medium_line_x3_t4_g4_t1

0x8817,	// (0x000644ec) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8817,	// (0x000644ec) list_medium_line_x3_t4_g4_t2

0x3481,	// (0x0005f156) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3481,	// (0x0005f156) list_medium_line_x3_t4_g4_t3

0x882c,	// (0x00064501) list_medium_line_x3_t4_g4_t4_ParamLimits

0x882c,	// (0x00064501) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa22,	// (0x0006b6f7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa22,	// (0x0006b6f7) list_medium_line_x3_t4_g4_t

0x8849,	// (0x0006451e) list_single_dyc_row_text_pane_t1_ParamLimits

0x8849,	// (0x0006451e) list_single_dyc_row_text_pane_t1

0x8880,	// (0x00064555) list_single_dyc_row_text_pane_t2_ParamLimits

0x8880,	// (0x00064555) list_single_dyc_row_text_pane_t2

0xa163,	// (0x00065e38) list_single_dyc_row_text_pane_t3_ParamLimits

0xa163,	// (0x00065e38) list_single_dyc_row_text_pane_t3

0x0005,

0xfa2b,	// (0x0006b700) list_single_dyc_row_text_pane_t_ParamLimits

0xfa2b,	// (0x0006b700) list_single_dyc_row_text_pane_t

0xa187,	// (0x00065e5c) list_single_dyc_row_pane_g1_ParamLimits

0xa187,	// (0x00065e5c) list_single_dyc_row_pane_g1

0xa193,	// (0x00065e68) list_single_dyc_row_pane_g2_ParamLimits

0xa193,	// (0x00065e68) list_single_dyc_row_pane_g2

0xa19f,	// (0x00065e74) list_single_dyc_row_pane_g3_ParamLimits

0xa19f,	// (0x00065e74) list_single_dyc_row_pane_g3

0xa1ab,	// (0x00065e80) list_single_dyc_row_pane_g4_ParamLimits

0xa1ab,	// (0x00065e80) list_single_dyc_row_pane_g4

0x0003,

0xfa38,	// (0x0006b70d) list_single_dyc_row_pane_g_ParamLimits

0xfa38,	// (0x0006b70d) list_single_dyc_row_pane_g

0xa1b7,	// (0x00065e8c) list_single_dyc_row_text_pane_ParamLimits

0xa1b7,	// (0x00065e8c) list_single_dyc_row_text_pane

0x9c0a,	// (0x000658df) bg_sp_fs_scroll_pane

0xe7ec,	// (0x0006a4c1) thumb_sp_fs_scroll_pane

0x6f82,	// (0x00062c57) list_medium_line_g1_ParamLimits

0x6f82,	// (0x00062c57) list_medium_line_g1

0x89a3,	// (0x00064678) list_medium_line_t1_ParamLimits

0x89a3,	// (0x00064678) list_medium_line_t1

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_g1

0x1fb3,	// (0x0005dc88) list_medium_line_x2_g2_ParamLimits

0x1fb3,	// (0x0005dc88) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x0006b716) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x0006b716) list_medium_line_x2_g

0xa1d6,	// (0x00065eab) list_medium_line_x2_t1_ParamLimits

0xa1d6,	// (0x00065eab) list_medium_line_x2_t1

0x1fa7,	// (0x0005dc7c) list_medium_line_x3_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x3_g1

0x1fb3,	// (0x0005dc88) list_medium_line_x3_g2_ParamLimits

0x1fb3,	// (0x0005dc88) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x0006b716) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x0006b716) list_medium_line_x3_g

0xa1d6,	// (0x00065eab) list_medium_line_x3_t1_ParamLimits

0xa1d6,	// (0x00065eab) list_medium_line_x3_t1

0xe7f5,	// (0x0006a4ca) thumb_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0006a4d3) thumb_sp_fs_scroll_pane_g2

0xe807,	// (0x0006a4dc) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0c44,	// (0x0005c919) thumb_sp_fs_scroll_pane_g

0xe7f5,	// (0x0006a4ca) bg_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0006a4d3) bg_sp_fs_scroll_pane_g2

0xe807,	// (0x0006a4dc) bg_sp_fs_scroll_pane_g3

0x0002,

0x0c44,	// (0x0005c919) bg_sp_fs_scroll_pane_g

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1fa7,	// (0x0005dc7c) list_medium_line_x2_t3_g4_g1

0x204c,	// (0x0005dd21) list_medium_line_x2_t3_g4_g2_ParamLimits

0x204c,	// (0x0005dd21) list_medium_line_x2_t3_g4_g2

0x1fb3,	// (0x0005dc88) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1fb3,	// (0x0005dc88) list_medium_line_x2_t3_g4_g3

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1fbf,	// (0x0005dc94) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0006af97) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0006af97) list_medium_line_x2_t3_g4_g

0x89b8,	// (0x0006468d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89b8,	// (0x0006468d) list_medium_line_x2_t3_g4_t1

0x89ce,	// (0x000646a3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x89ce,	// (0x000646a3) list_medium_line_x2_t3_g4_t2

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1ff2,	// (0x0005dcc7) list_medium_line_x2_t3_g4_t3

0x0002,

0xfa46,	// (0x0006b71b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfa46,	// (0x0006b71b) list_medium_line_x2_t3_g4_t

0x6f82,	// (0x00062c57) list_medium_line_g2_g1_ParamLimits

0x6f82,	// (0x00062c57) list_medium_line_g2_g1

0x6f8e,	// (0x00062c63) list_medium_line_g2_g2_ParamLimits

0x6f8e,	// (0x00062c63) list_medium_line_g2_g2

0x0001,

0xf808,	// (0x0006b4dd) list_medium_line_g2_g_ParamLimits

0xf808,	// (0x0006b4dd) list_medium_line_g2_g

0x89e8,	// (0x000646bd) list_medium_line_g2_t1_ParamLimits

0x89e8,	// (0x000646bd) list_medium_line_g2_t1

0x6f82,	// (0x00062c57) list_medium_line_t3_g2_g1_ParamLimits

0x6f82,	// (0x00062c57) list_medium_line_t3_g2_g1

0x6f8e,	// (0x00062c63) list_medium_line_t3_g2_g2_ParamLimits

0x6f8e,	// (0x00062c63) list_medium_line_t3_g2_g2

0x0001,

0xf808,	// (0x0006b4dd) list_medium_line_t3_g2_g_ParamLimits

0xf808,	// (0x0006b4dd) list_medium_line_t3_g2_g

0x89fd,	// (0x000646d2) list_medium_line_t3_g2_t1_ParamLimits

0x89fd,	// (0x000646d2) list_medium_line_t3_g2_t1

0x8a17,	// (0x000646ec) list_medium_line_t3_g2_t2_ParamLimits

0x8a17,	// (0x000646ec) list_medium_line_t3_g2_t2

0x8a2c,	// (0x00064701) list_medium_line_t3_g2_t3_ParamLimits

0x8a2c,	// (0x00064701) list_medium_line_t3_g2_t3

0x0002,

0xfa4d,	// (0x0006b722) list_medium_line_t3_g2_t_ParamLimits

0xfa4d,	// (0x0006b722) list_medium_line_t3_g2_t

0x8621,	// (0x000642f6) list_medium_line_right_icon_g1

0x8a42,	// (0x00064717) list_medium_line_right_icon_t1

0x6f82,	// (0x00062c57) list_medium_line_t2_g1_ParamLimits

0x6f82,	// (0x00062c57) list_medium_line_t2_g1

0x8a50,	// (0x00064725) list_medium_line_t2_t1_ParamLimits

0x8a50,	// (0x00064725) list_medium_line_t2_t1

0x8a6a,	// (0x0006473f) list_medium_line_t2_t2_ParamLimits

0x8a6a,	// (0x0006473f) list_medium_line_t2_t2

0x0001,

0xfa54,	// (0x0006b729) list_medium_line_t2_t_ParamLimits

0xfa54,	// (0x0006b729) list_medium_line_t2_t

0x6f82,	// (0x00062c57) list_medium_line_t3_g1_ParamLimits

0x6f82,	// (0x00062c57) list_medium_line_t3_g1

0x8a7f,	// (0x00064754) list_medium_line_t3_t1_ParamLimits

0x8a7f,	// (0x00064754) list_medium_line_t3_t1

0x8a96,	// (0x0006476b) list_medium_line_t3_t2_ParamLimits

0x8a96,	// (0x0006476b) list_medium_line_t3_t2

0x8aab,	// (0x00064780) list_medium_line_t3_t3_ParamLimits

0x8aab,	// (0x00064780) list_medium_line_t3_t3

0x0002,

0xfa59,	// (0x0006b72e) list_medium_line_t3_t_ParamLimits

0xfa59,	// (0x0006b72e) list_medium_line_t3_t

0x6f82,	// (0x00062c57) list_medium_line_g3_g1_ParamLimits

0x6f82,	// (0x00062c57) list_medium_line_g3_g1

0x8abd,	// (0x00064792) list_medium_line_g3_g2_ParamLimits

0x8abd,	// (0x00064792) list_medium_line_g3_g2

0x6f8e,	// (0x00062c63) list_medium_line_g3_g3_ParamLimits

0x6f8e,	// (0x00062c63) list_medium_line_g3_g3

0x0002,

0xfa60,	// (0x0006b735) list_medium_line_g3_g_ParamLimits

0xfa60,	// (0x0006b735) list_medium_line_g3_g

0x8ac9,	// (0x0006479e) list_medium_line_g3_t1_ParamLimits

0x8ac9,	// (0x0006479e) list_medium_line_g3_t1

0x6f82,	// (0x00062c57) list_medium_line_t2_g3_g1_ParamLimits

0x6f82,	// (0x00062c57) list_medium_line_t2_g3_g1

0x8abd,	// (0x00064792) list_medium_line_t2_g3_g2_ParamLimits

0x8abd,	// (0x00064792) list_medium_line_t2_g3_g2

0x6f8e,	// (0x00062c63) list_medium_line_t2_g3_g3_ParamLimits

0x6f8e,	// (0x00062c63) list_medium_line_t2_g3_g3

0x0002,

0xfa60,	// (0x0006b735) list_medium_line_t2_g3_g_ParamLimits

0xfa60,	// (0x0006b735) list_medium_line_t2_g3_g

0x8ade,	// (0x000647b3) list_medium_line_t2_g3_t1_ParamLimits

0x8ade,	// (0x000647b3) list_medium_line_t2_g3_t1

0x8af8,	// (0x000647cd) list_medium_line_t2_g3_t2_ParamLimits

0x8af8,	// (0x000647cd) list_medium_line_t2_g3_t2

0x0001,

0xfa67,	// (0x0006b73c) list_medium_line_t2_g3_t_ParamLimits

0xfa67,	// (0x0006b73c) list_medium_line_t2_g3_t

0x6f82,	// (0x00062c57) list_medium_line_t3_g3_g1_ParamLimits

0x6f82,	// (0x00062c57) list_medium_line_t3_g3_g1

0x8abd,	// (0x00064792) list_medium_line_t3_g3_g2_ParamLimits

0x8abd,	// (0x00064792) list_medium_line_t3_g3_g2

0x6f8e,	// (0x00062c63) list_medium_line_t3_g3_g3_ParamLimits

0x6f8e,	// (0x00062c63) list_medium_line_t3_g3_g3

0x0002,

0xfa60,	// (0x0006b735) list_medium_line_t3_g3_g_ParamLimits

0xfa60,	// (0x0006b735) list_medium_line_t3_g3_g

0x8b0d,	// (0x000647e2) list_medium_line_t3_g3_t1_ParamLimits

0x8b0d,	// (0x000647e2) list_medium_line_t3_g3_t1

0x8b26,	// (0x000647fb) list_medium_line_t3_g3_t2_ParamLimits

0x8b26,	// (0x000647fb) list_medium_line_t3_g3_t2

0x8b3c,	// (0x00064811) list_medium_line_t3_g3_t3_ParamLimits

0x8b3c,	// (0x00064811) list_medium_line_t3_g3_t3

0x0002,

0xfa6c,	// (0x0006b741) list_medium_line_t3_g3_t_ParamLimits

0xfa6c,	// (0x0006b741) list_medium_line_t3_g3_t

0x87c6,	// (0x0006449b) list_medium_line_right_iconx2_g1

0x8621,	// (0x000642f6) list_medium_line_right_iconx2_g2

0x0001,

0xfa73,	// (0x0006b748) list_medium_line_right_iconx2_g

0x8b52,	// (0x00064827) list_medium_line_right_iconx2_t1

0x87c6,	// (0x0006449b) list_medium_line_t2_right_iconx2_g1

0x8621,	// (0x000642f6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfa73,	// (0x0006b748) list_medium_line_t2_right_iconx2_g

0x8b60,	// (0x00064835) list_medium_line_t2_right_iconx2_t1

0x8b70,	// (0x00064845) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfa78,	// (0x0006b74d) list_medium_line_t2_right_iconx2_t

0x8b7e,	// (0x00064853) list_medium_line_x4_t4_t1

0x8b8c,	// (0x00064861) list_medium_line_x4_t4_t2

0x8b9c,	// (0x00064871) list_medium_line_x4_t4_t3

0x8bac,	// (0x00064881) list_medium_line_x4_t4_t4

0x0003,

0xfa7d,	// (0x0006b752) list_medium_line_x4_t4_t

0x8be6,	// (0x000648bb) tport_appsw_pane_ParamLimits

0x8be6,	// (0x000648bb) tport_appsw_pane

0x8bf4,	// (0x000648c9) tport_contact_pane_ParamLimits

0x8bf4,	// (0x000648c9) tport_contact_pane

0x8c04,	// (0x000648d9) tport_listscroll_pane_ParamLimits

0x8c04,	// (0x000648d9) tport_listscroll_pane

0x8c14,	// (0x000648e9) cell_tport_appsw_pane_ParamLimits

0x8c14,	// (0x000648e9) cell_tport_appsw_pane

0xcf6d,	// (0x00068c42) tport_appsw_pane_g1_ParamLimits

0xcf6d,	// (0x00068c42) tport_appsw_pane_g1

0xe810,	// (0x0006a4e5) tport_contact_pane_g1

0xe1a0,	// (0x00069e75) tport_contact_pane_t1

0xe819,	// (0x0006a4ee) tport_contact_pane_t2

0x0001,

0x0c8b,	// (0x0005c960) tport_contact_pane_t

0xe827,	// (0x0006a4fc) list_tport_pane

0xe830,	// (0x0006a505) scroll_pane_cp_030

0x8c47,	// (0x0006491c) cell_tport_appsw_pane_g1

0x8c57,	// (0x0006492c) cell_tport_appsw_pane_t1

0x8c65,	// (0x0006493a) grid_highlight_pane_cp019

0x8c6d,	// (0x00064942) list_tport_double_graphic_pane_ParamLimits

0x8c6d,	// (0x00064942) list_tport_double_graphic_pane

0xb17c,	// (0x00066e51) list_highlight_pane_cp023_ParamLimits

0xb17c,	// (0x00066e51) list_highlight_pane_cp023

0x8c7e,	// (0x00064953) list_tport_double_graphic_pane_g1_ParamLimits

0x8c7e,	// (0x00064953) list_tport_double_graphic_pane_g1

0x8c8b,	// (0x00064960) list_tport_double_graphic_pane_t1_ParamLimits

0x8c8b,	// (0x00064960) list_tport_double_graphic_pane_t1

0x8ca0,	// (0x00064975) list_tport_double_graphic_pane_t2_ParamLimits

0x8ca0,	// (0x00064975) list_tport_double_graphic_pane_t2

0x0001,

0xfa8d,	// (0x0006b762) list_tport_double_graphic_pane_t_ParamLimits

0xfa8d,	// (0x0006b762) list_tport_double_graphic_pane_t

0x9c0a,	// (0x000658df) main_cale_note_pane

0x6753,	// (0x00062428) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6753,	// (0x00062428) cell_vitu2_function_top_wide_pane_cp01

0x81e8,	// (0x00063ebd) wait_bar_pane_cp05_ParamLimits

0xb17c,	// (0x00066e51) listscroll_cmail_pane

0xe839,	// (0x0006a50e) list_cmail_pane

0x8cb2,	// (0x00064987) list_cmail_body_pane

0x8cd2,	// (0x000649a7) list_single_cmail_header_caption_pane

0x8cfe,	// (0x000649d3) list_single_cmail_header_detail_pane_ParamLimits

0x8cfe,	// (0x000649d3) list_single_cmail_header_detail_pane

0xe849,	// (0x0006a51e) list_single_cmail_header_caption_pane_t1

0x8d34,	// (0x00064a09) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d34,	// (0x00064a09) list_single_cmail_header_detail_pane_g1

0xa1ec,	// (0x00065ec1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa1ec,	// (0x00065ec1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfa92,	// (0x0006b767) list_single_cmail_header_detail_pane_g_ParamLimits

0xfa92,	// (0x0006b767) list_single_cmail_header_detail_pane_g

0xa1f8,	// (0x00065ecd) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa1f8,	// (0x00065ecd) list_single_cmail_header_detail_pane_t1

0xa258,	// (0x00065f2d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa258,	// (0x00065f2d) list_single_cmail_header_editor_pane_bg

0xe341,	// (0x0006a016) list_cmail_body_pane_g1

0xe86d,	// (0x0006a542) list_cmail_body_pane_t1

0xd706,	// (0x000693db) list_single_cmail_header_editor_pane_bg_g1

0xac4f,	// (0x00066924) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd716,	// (0x000693eb) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd70e,	// (0x000693e3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd945,	// (0x0006961a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd736,	// (0x0006940b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd726,	// (0x000693fb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd72e,	// (0x00069403) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac2f,	// (0x00066904) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d4a,	// (0x00064a1f) calenote_gesture_pane_ParamLimits

0x8d4a,	// (0x00064a1f) calenote_gesture_pane

0x8d64,	// (0x00064a39) calenote_window_pane_ParamLimits

0x8d64,	// (0x00064a39) calenote_window_pane

0xe87b,	// (0x0006a550) popup_note_window_cp01

0x8d7c,	// (0x00064a51) calenote_swipe_1_pane_ParamLimits

0x8d7c,	// (0x00064a51) calenote_swipe_1_pane

0x85c5,	// (0x0006429a) calenote_swipe_2_pane_ParamLimits

0x85c5,	// (0x0006429a) calenote_swipe_2_pane

0xe6b1,	// (0x0006a386) calenote_swipe_1_pane_g1_ParamLimits

0xe6b1,	// (0x0006a386) calenote_swipe_1_pane_g1

0xe6be,	// (0x0006a393) calenote_swipe_1_pane_g2_ParamLimits

0xe6be,	// (0x0006a393) calenote_swipe_1_pane_g2

0x0001,

0x0bc0,	// (0x0005c895) calenote_swipe_1_pane_g_ParamLimits

0x0bc0,	// (0x0005c895) calenote_swipe_1_pane_g

0xe88d,	// (0x0006a562) calenote_swipe_1_pane_t1_ParamLimits

0xe88d,	// (0x0006a562) calenote_swipe_1_pane_t1

0xe6b1,	// (0x0006a386) calenote_swipe_2_pane_g1_ParamLimits

0xe6b1,	// (0x0006a386) calenote_swipe_2_pane_g1

0xe8ac,	// (0x0006a581) calenote_swipe_2_pane_g2_ParamLimits

0xe8ac,	// (0x0006a581) calenote_swipe_2_pane_g2

0x0001,

0x0ca8,	// (0x0005c97d) calenote_swipe_2_pane_g_ParamLimits

0x0ca8,	// (0x0005c97d) calenote_swipe_2_pane_g

0xe8b8,	// (0x0006a58d) calenote_swipe_2_pane_t1_ParamLimits

0xe8b8,	// (0x0006a58d) calenote_swipe_2_pane_t1

0x9c0a,	// (0x000658df) main_mup_navstr_pane

0x54a4,	// (0x00061179) main_mup3_pane_t7_ParamLimits

0x54a4,	// (0x00061179) main_mup3_pane_t7

0x5ea9,	// (0x00061b7e) main_mp4_pane_g6_ParamLimits

0x5ea9,	// (0x00061b7e) main_mp4_pane_g6

0x6229,	// (0x00061efe) main_image3_pane_t4_ParamLimits

0x6229,	// (0x00061efe) main_image3_pane_t4

0x8d8f,	// (0x00064a64) popup_navstr_preview_pane_ParamLimits

0x8d8f,	// (0x00064a64) popup_navstr_preview_pane

0x8d9b,	// (0x00064a70) scroll_navstr_pane_ParamLimits

0x8d9b,	// (0x00064a70) scroll_navstr_pane

0x9c0a,	// (0x000658df) bg_popup_preview_window_pane_cp04

0xe8df,	// (0x0006a5b4) popup_navstr_preview_pane_t1

0x8da7,	// (0x00064a7c) scroll_navstr_pane_g1_ParamLimits

0x8da7,	// (0x00064a7c) scroll_navstr_pane_g1

0x8db4,	// (0x00064a89) scroll_navstr_pane_t1_ParamLimits

0x8db4,	// (0x00064a89) scroll_navstr_pane_t1

0xe884,	// (0x0006a559) bg_button_pane_cp014

0xe884,	// (0x0006a559) bg_button_pane_cp030

0x84b9,	// (0x0006418e) list_double_fisheye_pane_g4_ParamLimits

0x84b9,	// (0x0006418e) list_double_fisheye_pane_g4

0x84c5,	// (0x0006419a) list_double_fisheye_pane_g5_ParamLimits

0x84c5,	// (0x0006419a) list_double_fisheye_pane_g5

0xcbb9,	// (0x0006888e) sp_fs_scroll_pane_cp03

0xe789,	// (0x0006a45e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe795,	// (0x0006a46a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0bdd,	// (0x0005c8b2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a1,	// (0x0006a476) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe841,	// (0x0006a516) sp_fs_scroll_pane_cp02

0xa935,	// (0x0006660a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa935,	// (0x0006660a) popup_sp_fs_calendar_preview_list_single_pane

0x9c0a,	// (0x000658df) main_cam6_pano_pane

0x44ac,	// (0x00060181) main_mup3_pane_ParamLimits

0x9c0a,	// (0x000658df) main_phacti_pane

0x80bd,	// (0x00063d92) bg_button_pane_cp11

0x80d5,	// (0x00063daa) main_mobtv_info_pane_g2_ParamLimits

0x80d5,	// (0x00063daa) main_mobtv_info_pane_g2

0x0001,

0xf992,	// (0x0006b667) main_mobtv_info_pane_g_ParamLimits

0xf992,	// (0x0006b667) main_mobtv_info_pane_g

0x8287,	// (0x00063f5c) sc_clock_pane_t5_ParamLimits

0x8287,	// (0x00063f5c) sc_clock_pane_t5

0x832a,	// (0x00063fff) main_radioblah_pane_g1_ParamLimits

0xe5eb,	// (0x0006a2c0) main_radioblah_pane_t3_ParamLimits

0xe5eb,	// (0x0006a2c0) main_radioblah_pane_t3

0xe615,	// (0x0006a2ea) main_radioblah_pane_t4_ParamLimits

0xe615,	// (0x0006a2ea) main_radioblah_pane_t4

0x8348,	// (0x0006401d) main_radioblah_text_pane_ParamLimits

0x8348,	// (0x0006401d) main_radioblah_text_pane

0x8355,	// (0x0006402a) main_radioblah_info_pane_g1_ParamLimits

0x83ea,	// (0x000640bf) main_radioblah_info_pane_t4_ParamLimits

0x83ea,	// (0x000640bf) main_radioblah_info_pane_t4

0xb17c,	// (0x00066e51) main_sp_fs_calendar_pane

0x8dc6,	// (0x00064a9b) main_phacti_pane_g1

0x8dce,	// (0x00064aa3) phacti_note_pane_ParamLimits

0x8dce,	// (0x00064aa3) phacti_note_pane

0xe8f6,	// (0x0006a5cb) phacti_term_pane_ParamLimits

0xe8f6,	// (0x0006a5cb) phacti_term_pane

0xe90b,	// (0x0006a5e0) phacti_note_pane_t1_ParamLimits

0xe90b,	// (0x0006a5e0) phacti_note_pane_t1

0xa26f,	// (0x00065f44) phacti_term_pane_g1

0xa277,	// (0x00065f4c) phacti_term_pane_t1_ParamLimits

0xa277,	// (0x00065f4c) phacti_term_pane_t1

0xe922,	// (0x0006a5f7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa50,	// (0x00066725) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfaa3,	// (0x0006b778) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92a,	// (0x0006a5ff) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92a,	// (0x0006a5ff) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe93f,	// (0x0006a614) aid_popup_sp_fs_bg_corner_pane

0xcc85,	// (0x0006895a) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c0a,	// (0x000658df) popup_sp_fs_calendar_preview_bg_pane

0xe947,	// (0x0006a61c) popup_sp_fs_calendar_preview_list_pane

0xc868,	// (0x0006853d) bg_main_sp_fs_cale_pane_ParamLimits

0xc868,	// (0x0006853d) bg_main_sp_fs_cale_pane

0xa2aa,	// (0x00065f7f) listscroll_cale_mrui_pane_ParamLimits

0xa2aa,	// (0x00065f7f) listscroll_cale_mrui_pane

0xa2bf,	// (0x00065f94) listscroll_sp_fs_schedule_track_pane

0xa2c8,	// (0x00065f9d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa2c8,	// (0x00065f9d) main_sp_fs_ctrlbar_pane_cp01

0xe94f,	// (0x0006a624) main_sp_fs_ribbon_pane

0xa2db,	// (0x00065fb0) popup_sp_fs_cale_preview_window

0x8e31,	// (0x00064b06) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e31,	// (0x00064b06) list_single_sp_fs_schedule_track_pane

0xe5c5,	// (0x0006a29a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe5c5,	// (0x0006a29a) bg_sp_fs_highlight_list_pane_cp03

0x8e54,	// (0x00064b29) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e54,	// (0x00064b29) list_single_sp_fs_schedule_track_pane_g1

0x8e60,	// (0x00064b35) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e60,	// (0x00064b35) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfaa8,	// (0x0006b77d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfaa8,	// (0x0006b77d) list_single_sp_fs_schedule_track_pane_g

0x8e6c,	// (0x00064b41) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e6c,	// (0x00064b41) list_single_sp_fs_schedule_track_pane_t1

0x8e84,	// (0x00064b59) sp_fs_schedule_track_pane_ParamLimits

0x8e84,	// (0x00064b59) sp_fs_schedule_track_pane

0xe957,	// (0x0006a62c) sp_fs_schedule_track_pane_g1

0xe95f,	// (0x0006a634) sp_fs_schedule_track_pane_g2

0xe967,	// (0x0006a63c) sp_fs_schedule_track_pane_g3

0xe96f,	// (0x0006a644) sp_fs_schedule_track_pane_g4

0xe977,	// (0x0006a64c) sp_fs_schedule_track_pane_g5

0x0004,

0x0cbc,	// (0x0005c991) sp_fs_schedule_track_pane_g

0xd706,	// (0x000693db) bg_sp_fs_schedule_viewer_highlight_g1

0xac4f,	// (0x00066924) bg_sp_fs_schedule_viewer_highlight_g2

0xd70e,	// (0x000693e3) bg_sp_fs_schedule_viewer_highlight_g3

0xd716,	// (0x000693eb) bg_sp_fs_schedule_viewer_highlight_g4

0xd945,	// (0x0006961a) bg_sp_fs_schedule_viewer_highlight_g5

0xd726,	// (0x000693fb) bg_sp_fs_schedule_viewer_highlight_g6

0xd72e,	// (0x00069403) bg_sp_fs_schedule_viewer_highlight_g7

0xd736,	// (0x0006940b) bg_sp_fs_schedule_viewer_highlight_g8

0xac2f,	// (0x00066904) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfaad,	// (0x0006b782) bg_sp_fs_schedule_viewer_highlight_g

0x9c0a,	// (0x000658df) bg_main_sp_fs_ribbon_pane

0x8e94,	// (0x00064b69) main_sp_fs_ribbon_pane_g1

0xe97f,	// (0x0006a654) main_sp_fs_ribbon_pane_t1

0x8e9d,	// (0x00064b72) main_sp_fs_ribbon_pane_t2

0xe98e,	// (0x0006a663) main_sp_fs_ribbon_pane_t3

0x0002,

0xfac0,	// (0x0006b795) main_sp_fs_ribbon_pane_t

0xe99d,	// (0x0006a672) main_sp_fs_ribbon_scheduler_pane

0xe9a5,	// (0x0006a67a) bg_main_sp_fs_ribbon_pane_g1

0xe9ae,	// (0x0006a683) bg_main_sp_fs_ribbon_pane_g2

0xe9b7,	// (0x0006a68c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfac7,	// (0x0006b79c) bg_main_sp_fs_ribbon_pane_g

0xe9bf,	// (0x0006a694) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c8,	// (0x0006a69d) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d1,	// (0x0006a6a6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xface,	// (0x0006b7a3) main_sp_fs_ribbon_scheduler_pane_g

0xe9da,	// (0x0006a6af) list_cale_mrui_pane

0x8eac,	// (0x00064b81) sp_fs_scroll_pane_cp07_ParamLimits

0x8eac,	// (0x00064b81) sp_fs_scroll_pane_cp07

0x8ec8,	// (0x00064b9d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ec8,	// (0x00064b9d) bg_sp_fs_schedule_viewer_highlight

0xe9e7,	// (0x0006a6bc) list_single_sp_fs_schedule_track_pane_cp01

0xe9ef,	// (0x0006a6c4) list_sp_fs_schedule_track_pane

0xe9f7,	// (0x0006a6cc) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f7,	// (0x0006a6cc) sp_fs_scroll_pane_cp06

0xcc85,	// (0x0006895a) bgmain_sp_fs_calendar_pane_g1

0x8ed5,	// (0x00064baa) list_single_cale_mrui_pane_ParamLimits

0x8ed5,	// (0x00064baa) list_single_cale_mrui_pane

0xa2ed,	// (0x00065fc2) list_single_cale_mrui_row_pane_ParamLimits

0xa2ed,	// (0x00065fc2) list_single_cale_mrui_row_pane

0xa2fa,	// (0x00065fcf) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa2fa,	// (0x00065fcf) list_single_cale_mrui_row_pane_g1

0xa332,	// (0x00066007) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa332,	// (0x00066007) list_single_cale_mrui_row_pane_t1

0x8f03,	// (0x00064bd8) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f03,	// (0x00064bd8) list_single_cale_mrui_row_pane_t2

0xa344,	// (0x00066019) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa344,	// (0x00066019) list_single_cale_mrui_row_pane_t3

0xa373,	// (0x00066048) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa373,	// (0x00066048) list_single_cale_mrui_row_pane_t4

0x0003,

0xfadc,	// (0x0006b7b1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfadc,	// (0x0006b7b1) list_single_cale_mrui_row_pane_t

0x8f69,	// (0x00064c3e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f69,	// (0x00064c3e) list_single_cmail_header_editor_pane_bg_cp01

0x8f89,	// (0x00064c5e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f89,	// (0x00064c5e) list_single_cmail_header_editor_pane_bg_cp02

0x8fa5,	// (0x00064c7a) main_radioblah_text_pane_t1_ParamLimits

0x8fa5,	// (0x00064c7a) main_radioblah_text_pane_t1

0xea16,	// (0x0006a6eb) cam6_indi_pane_cp01

0xea1e,	// (0x0006a6f3) cam6_mode_pane_cp01

0xea26,	// (0x0006a6fb) cam6_pano_pane

0xea2f,	// (0x0006a704) cam6_zoom_pane_cp01

0xea37,	// (0x0006a70c) cam6_pano_image_pane

0xea42,	// (0x0006a717) cam6_pano_pane_g1

0xe341,	// (0x0006a016) cam6_pano_pane_g2

0xea4b,	// (0x0006a720) cam6_pano_pane_g3

0xea54,	// (0x0006a729) cam6_pano_pane_g4

0xd268,	// (0x00068f3d) cam6_pano_pane_g5

0xea5d,	// (0x0006a732) cam6_pano_pane_g6

0xea67,	// (0x0006a73c) cam6_pano_pane_g7

0xea6f,	// (0x0006a744) cam6_pano_pane_g8

0xea78,	// (0x0006a74d) cam6_pano_pane_g9

0x0008,

0x0cf1,	// (0x0005c9c6) cam6_pano_pane_g

0x9c0a,	// (0x000658df) main_browser_tag_pane

0xe8d7,	// (0x0006a5ac) grid_navstr_albumart_pane

0xea83,	// (0x0006a758) cell_navstr_albumart_pane_ParamLimits

0xea83,	// (0x0006a758) cell_navstr_albumart_pane

0xeaa3,	// (0x0006a778) cell_navstr_albumart_pane_g1

0xc679,	// (0x0006834e) cell_navstr_albumart_pane_g2

0xc689,	// (0x0006835e) cell_navstr_albumart_pane_g3

0xc681,	// (0x00068356) cell_navstr_albumart_pane_g4

0x0003,

0xfae5,	// (0x0006b7ba) cell_navstr_albumart_pane_g

0x8fc0,	// (0x00064c95) bt_list_pane_ParamLimits

0x8fc0,	// (0x00064c95) bt_list_pane

0x8fe0,	// (0x00064cb5) bt_list_pane_t1

0x8fef,	// (0x00064cc4) bt_list_pane_t2

0x0001,

0xfaee,	// (0x0006b7c3) bt_list_pane_t

0x9c0a,	// (0x000658df) main_cale_prevew_pane

0x8ffe,	// (0x00064cd3) popup_cale_preview_window_ParamLimits

0x8ffe,	// (0x00064cd3) popup_cale_preview_window

0xb17c,	// (0x00066e51) bg_popup_preview_window_pane_cp05_ParamLimits

0xb17c,	// (0x00066e51) bg_popup_preview_window_pane_cp05

0xeaab,	// (0x0006a780) list_cale_preview_pane_ParamLimits

0xeaab,	// (0x0006a780) list_cale_preview_pane

0x9017,	// (0x00064cec) list_double_cale_preview_pane_ParamLimits

0x9017,	// (0x00064cec) list_double_cale_preview_pane

0x9029,	// (0x00064cfe) list_single_cale_preview_pane_ParamLimits

0x9029,	// (0x00064cfe) list_single_cale_preview_pane

0x903f,	// (0x00064d14) list_single_cale_preview_pane_g1

0x9047,	// (0x00064d1c) list_single_cale_preview_pane_t1_ParamLimits

0x9047,	// (0x00064d1c) list_single_cale_preview_pane_t1

0x905c,	// (0x00064d31) list_double_cale_preview_pane_g1

0x9064,	// (0x00064d39) list_double_cale_preview_pane_t1_ParamLimits

0x9064,	// (0x00064d39) list_double_cale_preview_pane_t1

0x9079,	// (0x00064d4e) list_double_cale_preview_pane_t2_ParamLimits

0x9079,	// (0x00064d4e) list_double_cale_preview_pane_t2

0x0001,

0xfaf3,	// (0x0006b7c8) list_double_cale_preview_pane_t_ParamLimits

0xfaf3,	// (0x0006b7c8) list_double_cale_preview_pane_t

0x9c0a,	// (0x000658df) main_ezdial_pane

0xb17c,	// (0x00066e51) main_sp_fs_email_pane_ParamLimits

0x8647,	// (0x0006431c) cmail_ddmenu_btn01_pane_ParamLimits

0x8647,	// (0x0006431c) cmail_ddmenu_btn01_pane

0x8664,	// (0x00064339) cmail_ddmenu_btn02_pane_ParamLimits

0x8664,	// (0x00064339) cmail_ddmenu_btn02_pane

0x8682,	// (0x00064357) cmail_ddmenu_btn03_pane_ParamLimits

0x8682,	// (0x00064357) cmail_ddmenu_btn03_pane

0x86b0,	// (0x00064385) main_sp_fs_ctrlbar_pane_ParamLimits

0x86c6,	// (0x0006439b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cb2,	// (0x00064987) list_cmail_body_pane_ParamLimits

0xe857,	// (0x0006a52c) bg_button_pane_cp12

0xe860,	// (0x0006a535) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe860,	// (0x0006a535) list_single_cmail_header_detail_pane_g3

0xa234,	// (0x00065f09) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa234,	// (0x00065f09) list_single_cmail_header_detail_pane_t2

0x0001,

0xfa99,	// (0x0006b76e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfa99,	// (0x0006b76e) list_single_cmail_header_detail_pane_t

0xa28c,	// (0x00065f61) phacti_term_pane_t2_ParamLimits

0xa28c,	// (0x00065f61) phacti_term_pane_t2

0x0001,

0xfa9e,	// (0x0006b773) phacti_term_pane_t_ParamLimits

0xfa9e,	// (0x0006b773) phacti_term_pane_t

0xeab7,	// (0x0006a78c) aid_size_list_single_double

0x9091,	// (0x00064d66) popup_ezdial_listscroll_window

0x90b2,	// (0x00064d87) popup_number_entry_window_cp01

0xa9f6,	// (0x000666cb) bg_popup_call_pane_cp09

0xeac3,	// (0x0006a798) ezdial_list_pane

0xeacb,	// (0x0006a7a0) scroll_pane_cp23

0xca55,	// (0x0006872a) bg_button_pane_cp028_ParamLimits

0xca55,	// (0x0006872a) bg_button_pane_cp028

0x90c0,	// (0x00064d95) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90c0,	// (0x00064d95) cmail_ddmenu_btn01_pane_g1

0x90d0,	// (0x00064da5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x90d0,	// (0x00064da5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfaf8,	// (0x0006b7cd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfaf8,	// (0x0006b7cd) cmail_ddmenu_btn01_pane_g

0xead3,	// (0x0006a7a8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead3,	// (0x0006a7a8) cmail_ddmenu_btn01_pane_t1

0xc868,	// (0x0006853d) bg_button_pane_cp029_ParamLimits

0xc868,	// (0x0006853d) bg_button_pane_cp029

0x90dc,	// (0x00064db1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x90dc,	// (0x00064db1) cmail_ddmenu_btn02_pane_g1

0x90f4,	// (0x00064dc9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x90f4,	// (0x00064dc9) cmail_ddmenu_btn02_pane_t1

0xe5c5,	// (0x0006a29a) bg_button_pane_cp031_ParamLimits

0xe5c5,	// (0x0006a29a) bg_button_pane_cp031

0x90dc,	// (0x00064db1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x90dc,	// (0x00064db1) cmail_ddmenu_btn03_pane_g1

0x90f4,	// (0x00064dc9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x90f4,	// (0x00064dc9) cmail_ddmenu_btn03_pane_t1

0x60c6,	// (0x00061d9b) cell_dialer2_keypad_pane_t1_ParamLimits

0x60e0,	// (0x00061db5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x60e0,	// (0x00061db5) cell_dialer2_keypad_pane_t1_copy1

0x7f42,	// (0x00063c17) ncimui_group_button_pane

0xb17c,	// (0x00066e51) main_sp_fs_calendar_pane_ParamLimits

0x8cd2,	// (0x000649a7) list_single_cmail_header_caption_pane_ParamLimits

0xa2a1,	// (0x00065f76) aid_recal_txt_sm_pane

0x9c0a,	// (0x000658df) mian_recal_day_pane

0xa2db,	// (0x00065fb0) popup_sp_fs_cale_preview_window_ParamLimits

0xeae9,	// (0x0006a7be) list_recal_day_pane

0xa3bd,	// (0x00066092) list_single_recal_day_pane_ParamLimits

0xa3bd,	// (0x00066092) list_single_recal_day_pane

0xeb10,	// (0x0006a7e5) list_single_recal_day_pane_g1_ParamLimits

0xeb10,	// (0x0006a7e5) list_single_recal_day_pane_g1

0xa3cf,	// (0x000660a4) list_single_recal_day_pane_g2_ParamLimits

0xa3cf,	// (0x000660a4) list_single_recal_day_pane_g2

0xa3df,	// (0x000660b4) list_single_recal_day_pane_g3_ParamLimits

0xa3df,	// (0x000660b4) list_single_recal_day_pane_g3

0x9118,	// (0x00064ded) list_single_recal_day_pane_g4_ParamLimits

0x9118,	// (0x00064ded) list_single_recal_day_pane_g4

0xa3eb,	// (0x000660c0) list_single_recal_day_pane_g5_ParamLimits

0xa3eb,	// (0x000660c0) list_single_recal_day_pane_g5

0xa3fb,	// (0x000660d0) list_single_recal_day_pane_g6_ParamLimits

0xa3fb,	// (0x000660d0) list_single_recal_day_pane_g6

0x0004,

0xfb07,	// (0x0006b7dc) list_single_recal_day_pane_g_ParamLimits

0xfb07,	// (0x0006b7dc) list_single_recal_day_pane_g

0xa40f,	// (0x000660e4) list_single_recal_day_pane_t1

0xa421,	// (0x000660f6) list_single_recal_day_pane_t2

0x0001,

0xfb12,	// (0x0006b7e7) list_single_recal_day_pane_t

0x9138,	// (0x00064e0d) ncimui_query_button_pane_ParamLimits

0x9138,	// (0x00064e0d) ncimui_query_button_pane

0x9148,	// (0x00064e1d) ncimui_query_button_pane_t1_ParamLimits

0x9148,	// (0x00064e1d) ncimui_query_button_pane_t1

0xeb1c,	// (0x0006a7f1) ncimui_query_button_pane_t2_ParamLimits

0xeb1c,	// (0x0006a7f1) ncimui_query_button_pane_t2

0x0001,

0xfb17,	// (0x0006b7ec) ncimui_query_button_pane_t_ParamLimits

0xfb17,	// (0x0006b7ec) ncimui_query_button_pane_t

0x915b,	// (0x00064e30) query_button_pane_ParamLimits

0x915b,	// (0x00064e30) query_button_pane

0x9c0a,	// (0x000658df) bg_button_pane_cp0028

0xeb2f,	// (0x0006a804) query_button_pane_t1

0x44c8,	// (0x0006019d) main_tport_pane_ParamLimits

0x8bbc,	// (0x00064891) bg_popup_window_pane_cp01_ParamLimits

0x8bbc,	// (0x00064891) bg_popup_window_pane_cp01

0x8bca,	// (0x0006489f) heading_pane_cp08_ParamLimits

0x8bca,	// (0x0006489f) heading_pane_cp08

0x8bd8,	// (0x000648ad) heading_pane_cp07_ParamLimits

0x8bd8,	// (0x000648ad) heading_pane_cp07

0x8c47,	// (0x0006491c) cell_tport_appsw_pane_g2

0x0002,

0xfa86,	// (0x0006b75b) cell_tport_appsw_pane_g

0x9f6c,	// (0x00065c41) input_candi_list_open_g1

0xae12,	// (0x00066ae7) list_cale_time_pane_g6_ParamLimits

0xae12,	// (0x00066ae7) list_cale_time_pane_g6

0x4f45,	// (0x00060c1a) aid_size_touch_calib_1_ParamLimits

0x4f45,	// (0x00060c1a) aid_size_touch_calib_1

0x4f51,	// (0x00060c26) aid_size_touch_calib_2_ParamLimits

0x4f51,	// (0x00060c26) aid_size_touch_calib_2

0x4f5f,	// (0x00060c34) aid_size_touch_calib_3_ParamLimits

0x4f5f,	// (0x00060c34) aid_size_touch_calib_3

0x4f6f,	// (0x00060c44) aid_size_touch_calib_4_ParamLimits

0x4f6f,	// (0x00060c44) aid_size_touch_calib_4

0x4f7d,	// (0x00060c52) main_touch_calib_button_group_pane_ParamLimits

0x4f7d,	// (0x00060c52) main_touch_calib_button_group_pane

0x4f8b,	// (0x00060c60) main_touch_calib_pane_g1_ParamLimits

0x4f97,	// (0x00060c6c) main_touch_calib_pane_g2_ParamLimits

0x4fa3,	// (0x00060c78) main_touch_calib_pane_g3_ParamLimits

0x4faf,	// (0x00060c84) main_touch_calib_pane_g4_ParamLimits

0xf5f1,	// (0x0006b2c6) main_touch_calib_pane_g_ParamLimits

0x4fbb,	// (0x00060c90) main_touch_calib_pane_t1_ParamLimits

0x4fd4,	// (0x00060ca9) main_touch_calib_pane_t2_ParamLimits

0x4fed,	// (0x00060cc2) main_touch_calib_pane_t3_ParamLimits

0x5003,	// (0x00060cd8) main_touch_calib_pane_t4_ParamLimits

0x5019,	// (0x00060cee) main_touch_calib_pane_t5_ParamLimits

0xf5fa,	// (0x0006b2cf) main_touch_calib_pane_t_ParamLimits

0xd008,	// (0x00068cdd) list_single_fp_cale_pane_g3_ParamLimits

0xd008,	// (0x00068cdd) list_single_fp_cale_pane_g3

0x44ac,	// (0x00060181) bg_button_pane_cp012_ParamLimits

0x44ac,	// (0x00060181) bg_vkb2_func_pane_cp03_ParamLimits

0x6f02,	// (0x00062bd7) cell_vitu2_function_top_pane_g1_ParamLimits

0x44ac,	// (0x00060181) bg_vkb2_func_pane_cp04_ParamLimits

0x7eca,	// (0x00063b9f) main_ncimui_button_group_pane_ParamLimits

0x7eca,	// (0x00063b9f) main_ncimui_button_group_pane

0x7f30,	// (0x00063c05) main_ncimui_pane_t3_ParamLimits

0x7f30,	// (0x00063c05) main_ncimui_pane_t3

0xe8ed,	// (0x0006a5c2) phacti_button_group_pane

0xeab7,	// (0x0006a78c) aid_size_list_single_double_ParamLimits

0x9091,	// (0x00064d66) popup_ezdial_listscroll_window_ParamLimits

0x90b2,	// (0x00064d87) popup_number_entry_window_cp01_ParamLimits

0x9168,	// (0x00064e3d) phacti_button_pane_ParamLimits

0x9168,	// (0x00064e3d) phacti_button_pane

0x9c0a,	// (0x000658df) bg_button_pane_cp14

0xeb3d,	// (0x0006a812) phacti_button_pane_t1

0x9179,	// (0x00064e4e) main_touch_calib_button_pane_ParamLimits

0x9179,	// (0x00064e4e) main_touch_calib_button_pane

0xa831,	// (0x00066506) bg_button_pane_cp18_ParamLimits

0xa831,	// (0x00066506) bg_button_pane_cp18

0xeb4b,	// (0x0006a820) main_touch_calib_button_pane_t1_ParamLimits

0xeb4b,	// (0x0006a820) main_touch_calib_button_pane_t1

0xeb61,	// (0x0006a836) main_touch_calib_button_pane_t2_ParamLimits

0xeb61,	// (0x0006a836) main_touch_calib_button_pane_t2

0x0001,

0xfb1c,	// (0x0006b7f1) main_touch_calib_button_pane_t_ParamLimits

0xfb1c,	// (0x0006b7f1) main_touch_calib_button_pane_t

0x9c0a,	// (0x000658df) cell_ncimui_button_pane

0x9c0a,	// (0x000658df) bg_button_pane_cp032

0xeb7f,	// (0x0006a854) cell_ncimui_button_pane_t1

0x613c,	// (0x00061e11) image3_infobar_pane_ParamLimits

0x613c,	// (0x00061e11) image3_infobar_pane

0x82a9,	// (0x00063f7e) fs_bigclock_status_pane_ParamLimits

0x82a9,	// (0x00063f7e) fs_bigclock_status_pane

0x82b6,	// (0x00063f8b) main_fs_bigclock_clock_pane_ParamLimits

0x82b6,	// (0x00063f8b) main_fs_bigclock_clock_pane

0x82d0,	// (0x00063fa5) main_fs_bigclock_indi_pane_ParamLimits

0x82d0,	// (0x00063fa5) main_fs_bigclock_indi_pane

0x82f8,	// (0x00063fcd) main_fs_bigclock_swipe_pane_ParamLimits

0x82f8,	// (0x00063fcd) main_fs_bigclock_swipe_pane

0x9c0a,	// (0x000658df) main_fs_clock_dumped_data

0xe44e,	// (0x0006a123) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe44e,	// (0x0006a123) list_single_fs_bigclock_indicator_pane_g1

0xe469,	// (0x0006a13e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe469,	// (0x0006a13e) list_single_fs_bigclock_indicator_pane_g2

0xe483,	// (0x0006a158) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe483,	// (0x0006a158) list_single_fs_bigclock_indicator_pane_g3

0xe49d,	// (0x0006a172) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe49d,	// (0x0006a172) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b71,	// (0x0005c846) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b71,	// (0x0005c846) list_single_fs_bigclock_indicator_pane_g

0xe4c8,	// (0x0006a19d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4c8,	// (0x0006a19d) list_single_fs_bigclock_indicator_pane_t1

0xe4f0,	// (0x0006a1c5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4f0,	// (0x0006a1c5) list_single_fs_bigclock_indicator_pane_t2

0xe518,	// (0x0006a1ed) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe518,	// (0x0006a1ed) list_single_fs_bigclock_indicator_pane_t3

0xe540,	// (0x0006a215) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe540,	// (0x0006a215) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b7c,	// (0x0005c851) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b7c,	// (0x0005c851) list_single_fs_bigclock_indicator_pane_t

0xeb8d,	// (0x0006a862) image3_infobar_fav_pane_ParamLimits

0xeb8d,	// (0x0006a862) image3_infobar_fav_pane

0xeb9d,	// (0x0006a872) image3_infobar_loc_pane_ParamLimits

0xeb9d,	// (0x0006a872) image3_infobar_loc_pane

0xebb1,	// (0x0006a886) image3_infobar_time_pane_ParamLimits

0xebb1,	// (0x0006a886) image3_infobar_time_pane

0xcc85,	// (0x0006895a) image3_infobar_time_pane_g1

0xebc1,	// (0x0006a896) image3_infobar_time_pane_t1

0xcc85,	// (0x0006895a) image3_infobar_loc_pane_g1

0xebcf,	// (0x0006a8a4) image3_infobar_loc_pane_g2

0x0001,

0x0d32,	// (0x0005ca07) image3_infobar_loc_pane_g

0xebd7,	// (0x0006a8ac) image3_infobar_loc_pane_t1

0xcc85,	// (0x0006895a) image3_infobar_fav_pane_g1

0xebe5,	// (0x0006a8ba) image3_infobar_fav_pane_g2

0x0001,

0x0d37,	// (0x0005ca0c) image3_infobar_fav_pane_g

0xebed,	// (0x0006a8c2) fs_bigclock_status_battery_pane

0xebf6,	// (0x0006a8cb) fs_bigclock_status_signal_pane

0xebff,	// (0x0006a8d4) fs_bigclock_status_title_pane

0xec08,	// (0x0006a8dd) fs_bigclock_status_signal_pane_g1

0xec11,	// (0x0006a8e6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb21,	// (0x0006b7f6) fs_bigclock_status_signal_pane_g

0xec19,	// (0x0006a8ee) fs_bigclock_status_battery_pane_g1

0xec22,	// (0x0006a8f7) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb26,	// (0x0006b7fb) fs_bigclock_status_battery_pane_g

0xec2a,	// (0x0006a8ff) fs_bigclock_status_title_pane_t1

0xcc85,	// (0x0006895a) main_fs_bigclock_clock_pane_g1

0xec38,	// (0x0006a90d) main_fs_bigclock_clock_pane_g2

0xec41,	// (0x0006a916) main_fs_bigclock_clock_pane_g3

0xec41,	// (0x0006a916) main_fs_bigclock_clock_pane_g4

0x0003,

0x0d3c,	// (0x0005ca11) main_fs_bigclock_clock_pane_g

0xec49,	// (0x0006a91e) main_fs_bigclock_clock_pane_t1

0x9189,	// (0x00064e5e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb2b,	// (0x0006b800) main_fs_bigclock_clock_pane_t

0xec57,	// (0x0006a92c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec57,	// (0x0006a92c) list_single_fs_bigclock_indicator_pane

0xec68,	// (0x0006a93d) list_single_fs_bigclock_pane_ParamLimits

0xec68,	// (0x0006a93d) list_single_fs_bigclock_pane

0xec8e,	// (0x0006a963) main_fs_bigclock_indicator_pane_t1

0xec9d,	// (0x0006a972) list_single_fs_bigclock_pane_g1

0xeca5,	// (0x0006a97a) list_single_fs_bigclock_pane_t1

0xcc85,	// (0x0006895a) main_fs_bigclock_swipe_pane_g1

0xece8,	// (0x0006a9bd) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0d51,	// (0x0005ca26) main_fs_bigclock_swipe_pane_g

0xecf0,	// (0x0006a9c5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf0,	// (0x0006a9c5) main_fs_bigclock_swipe_pane_t1

0x34ab,	// (0x0005f180) call_type_pane_ParamLimits

0x9c0a,	// (0x000658df) main_btmg_pane

0xa326,	// (0x00065ffb) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa326,	// (0x00065ffb) list_single_cale_mrui_row_pane_g2

0x0002,

0xfad5,	// (0x0006b7aa) list_single_cale_mrui_row_pane_g_ParamLimits

0xfad5,	// (0x0006b7aa) list_single_cale_mrui_row_pane_g

0xa3ac,	// (0x00066081) list_recal_vselct_arw_lo_pane

0xeb08,	// (0x0006a7dd) list_recal_vselct_arw_up_pane

0xa3b4,	// (0x00066089) list_recal_vselct_pane

0x91dc,	// (0x00064eb1) btmg_button_pane

0x91e8,	// (0x00064ebd) main_btmg_pane_g1

0x9c0a,	// (0x000658df) bg_button_pane_cp044

0xed0d,	// (0x0006a9e2) btmg_button_pane_t1

0xc854,	// (0x00068529) aid_listscroll_gen

0xb17c,	// (0x00066e51) main_cntbar_detail_pane

0xe839,	// (0x0006a50e) list_cmail_folder_pane

0xcbb9,	// (0x0006888e) sp_fs_scroll_pane_cp03_ParamLimits

0x91f0,	// (0x00064ec5) list_single_fs_dyc_pane_cp01_ParamLimits

0x91f0,	// (0x00064ec5) list_single_fs_dyc_pane_cp01

0xed1b,	// (0x0006a9f0) aid_size_cmail_indent

0xa433,	// (0x00066108) list_single_dyc_row_pane_cp01

0x923f,	// (0x00064f14) cntbar_detail_list_pane_ParamLimits

0x923f,	// (0x00064f14) cntbar_detail_list_pane

0x9279,	// (0x00064f4e) main_cntbar_detail_cont_pane_ParamLimits

0x9279,	// (0x00064f4e) main_cntbar_detail_cont_pane

0x33d0,	// (0x0005f0a5) scroll_pane_cp032_ParamLimits

0x33d0,	// (0x0005f0a5) scroll_pane_cp032

0x9285,	// (0x00064f5a) cntbar_detail_list_event_pane_ParamLimits

0x9285,	// (0x00064f5a) cntbar_detail_list_event_pane

0x924b,	// (0x00064f20) cntbar_detail_list_shct_pane

0xac9d,	// (0x00066972) aid_list_gen

0xed24,	// (0x0006a9f9) aid_scroll

0xed2d,	// (0x0006aa02) aid_size_touch_scroll_bar

0x764d,	// (0x00063322) aid_list_double

0x9299,	// (0x00064f6e) aid_list_single

0x763b,	// (0x00063310) aid_list_single_lg

0x92a2,	// (0x00064f77) aid_list_z_g_a_sm

0x92aa,	// (0x00064f7f) aid_list_z_g_d

0x92b2,	// (0x00064f87) aid_txt_z_prm

0x92c0,	// (0x00064f95) aid_txt_z_prm_cp01

0x92ce,	// (0x00064fa3) aid_txt_z_sec

0x92dc,	// (0x00064fb1) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92dc,	// (0x00064fb1) main_cntbar_detail_cont_pane_g1

0x92e9,	// (0x00064fbe) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92e9,	// (0x00064fbe) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb3c,	// (0x0006b811) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb3c,	// (0x0006b811) main_cntbar_detail_cont_pane_g

0xed36,	// (0x0006aa0b) main_cntbar_detail_cont_pane_t1

0xed44,	// (0x0006aa19) main_cntbar_detail_cont_pane_t2

0xed52,	// (0x0006aa27) main_cntbar_detail_cont_pane_t3

0x0002,

0xfb41,	// (0x0006b816) main_cntbar_detail_cont_pane_t

0x92f5,	// (0x00064fca) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92f5,	// (0x00064fca) cell_cntbar_detail_list_shct_pane

0xed60,	// (0x0006aa35) cntbar_detail_list_shct_pane_g1

0xed69,	// (0x0006aa3e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfb48,	// (0x0006b81d) cntbar_detail_list_shct_pane_g

0x9309,	// (0x00064fde) cntbar_detail_list_event_pane_g1_ParamLimits

0x9309,	// (0x00064fde) cntbar_detail_list_event_pane_g1

0x9315,	// (0x00064fea) cntbar_detail_list_event_pane_g2_ParamLimits

0x9315,	// (0x00064fea) cntbar_detail_list_event_pane_g2

0x0005,

0xfb4d,	// (0x0006b822) cntbar_detail_list_event_pane_g_ParamLimits

0xfb4d,	// (0x0006b822) cntbar_detail_list_event_pane_g

0x9381,	// (0x00065056) cntbar_detail_list_event_pane_t1_ParamLimits

0x9381,	// (0x00065056) cntbar_detail_list_event_pane_t1

0x9396,	// (0x0006506b) cntbar_detail_list_event_pane_t2_ParamLimits

0x9396,	// (0x0006506b) cntbar_detail_list_event_pane_t2

0x0002,

0xfb5a,	// (0x0006b82f) cntbar_detail_list_event_pane_t_ParamLimits

0xfb5a,	// (0x0006b82f) cntbar_detail_list_event_pane_t

0xcc85,	// (0x0006895a) cell_cntbar_detail_list_shct_pane_g1

0xb422,	// (0x000670f7) navi_pane_mv_g3

0xb17c,	// (0x00066e51) main_cntbar_detail_pane_ParamLimits

0x9c0a,	// (0x000658df) main_notif_wgt_pane

0x5df0,	// (0x00061ac5) aid_tch_main_mp4_pane_g4

0x6025,	// (0x00061cfa) popup_slider_window_cp02

0xa3a2,	// (0x00066077) list_recal_day_event_pane

0x921f,	// (0x00064ef4) cntbar_detail_btn_pane_ParamLimits

0x921f,	// (0x00064ef4) cntbar_detail_btn_pane

0x922f,	// (0x00064f04) cntbar_detail_btn_pane_cp01_ParamLimits

0x922f,	// (0x00064f04) cntbar_detail_btn_pane_cp01

0x924b,	// (0x00064f20) cntbar_detail_list_shct_pane_ParamLimits

0x9257,	// (0x00064f2c) cntbar_detail_pane_g1_ParamLimits

0x9257,	// (0x00064f2c) cntbar_detail_pane_g1

0x9263,	// (0x00064f38) cntbar_detail_pane_t1_ParamLimits

0x9263,	// (0x00064f38) cntbar_detail_pane_t1

0x9321,	// (0x00064ff6) cntbar_detail_list_event_pane_g3_ParamLimits

0x9321,	// (0x00064ff6) cntbar_detail_list_event_pane_g3

0x9339,	// (0x0006500e) cntbar_detail_list_event_pane_g4_ParamLimits

0x9339,	// (0x0006500e) cntbar_detail_list_event_pane_g4

0x9351,	// (0x00065026) cntbar_detail_list_event_pane_g5_ParamLimits

0x9351,	// (0x00065026) cntbar_detail_list_event_pane_g5

0x9369,	// (0x0006503e) cntbar_detail_list_event_pane_g6_ParamLimits

0x9369,	// (0x0006503e) cntbar_detail_list_event_pane_g6

0x93ab,	// (0x00065080) cntbar_detail_list_event_pane_t3_ParamLimits

0x93ab,	// (0x00065080) cntbar_detail_list_event_pane_t3

0x93bd,	// (0x00065092) popup_notif_wgt_window_ParamLimits

0x93bd,	// (0x00065092) popup_notif_wgt_window

0x93cd,	// (0x000650a2) popup_submenu_window_cp01_ParamLimits

0x93cd,	// (0x000650a2) popup_submenu_window_cp01

0xa9f6,	// (0x000666cb) bg_popup_window_pane_cp10

0xed72,	// (0x0006aa47) listscroll_notif_wgt_pane

0xed84,	// (0x0006aa59) list_notif_wgt_window

0xed8d,	// (0x0006aa62) scroll_pane_cp033

0x93df,	// (0x000650b4) list_notif_wgt_row_pane_ParamLimits

0x93df,	// (0x000650b4) list_notif_wgt_row_pane

0xed96,	// (0x0006aa6b) aid_size_list_notif_wgt_del

0xeda3,	// (0x0006aa78) list_notif_wgt_row_pane_g1

0xedaf,	// (0x0006aa84) list_notif_wgt_row_pane_g2

0xedc3,	// (0x0006aa98) list_notif_wgt_row_pane_g3

0x0002,

0xfb61,	// (0x0006b836) list_notif_wgt_row_pane_g

0xedd0,	// (0x0006aaa5) list_notif_wgt_row_pane_t1

0xede6,	// (0x0006aabb) list_notif_wgt_row_pane_t2

0xedf8,	// (0x0006aacd) list_notif_wgt_row_pane_t3

0x0002,

0xfb68,	// (0x0006b83d) list_notif_wgt_row_pane_t

0xd95f,	// (0x00069634) list_recal_day_event_pane_g1

0xee0a,	// (0x0006aadf) list_recal_day_event_pane_t1

0x9c0a,	// (0x000658df) bg_button_pane_cp045

0x93f1,	// (0x000650c6) cntbar_detail_btn_pane_t1

0xc868,	// (0x0006853d) main_callh_pane_ParamLimits

0xc868,	// (0x0006853d) main_callh_pane

0x9c0a,	// (0x000658df) main_coverflow0_pane

0x9c0a,	// (0x000658df) main_wgtman_pane

0x8310,	// (0x00063fe5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8310,	// (0x00063fe5) main_fs_bigclock_unlock_btn_pane

0x8c3f,	// (0x00064914) bg_button_pane_cp16

0x8c4f,	// (0x00064924) cell_tport_appsw_pane_g3

0x93ff,	// (0x000650d4) cf0_flow_pane_ParamLimits

0x93ff,	// (0x000650d4) cf0_flow_pane

0xee19,	// (0x0006aaee) listscroll_cf0_pane

0xee24,	// (0x0006aaf9) main_cf0_pane_g1

0x940e,	// (0x000650e3) main_cf0_pane_t1_ParamLimits

0x940e,	// (0x000650e3) main_cf0_pane_t1

0x9422,	// (0x000650f7) main_cf0_pane_t2_ParamLimits

0x9422,	// (0x000650f7) main_cf0_pane_t2

0x0001,

0xfb74,	// (0x0006b849) main_cf0_pane_t_ParamLimits

0xfb74,	// (0x0006b849) main_cf0_pane_t

0xee36,	// (0x0006ab0b) scroll_pane_cp11

0x9436,	// (0x0006510b) cf0_flow_pane_g1

0x943e,	// (0x00065113) cf0_flow_pane_g2

0x0001,

0xfb79,	// (0x0006b84e) cf0_flow_pane_g

0x9446,	// (0x0006511b) cf0_flow_pane_t1

0x9c0a,	// (0x000658df) main_call6_pane

0x9c0a,	// (0x000658df) main_calllock_pane

0x9454,	// (0x00065129) call6_btn_grp_pane_ParamLimits

0x9454,	// (0x00065129) call6_btn_grp_pane

0x9463,	// (0x00065138) call6_pane_g1_ParamLimits

0x9463,	// (0x00065138) call6_pane_g1

0x9472,	// (0x00065147) popup_call6_1st_window_ParamLimits

0x9472,	// (0x00065147) popup_call6_1st_window

0x9480,	// (0x00065155) popup_call6_2nd_window_ParamLimits

0x9480,	// (0x00065155) popup_call6_2nd_window

0x948e,	// (0x00065163) cell_call6_btn_pane_ParamLimits

0x948e,	// (0x00065163) cell_call6_btn_pane

0xa9f6,	// (0x000666cb) bg_popup_call2_in_pane_cp03

0xee41,	// (0x0006ab16) popup_call6_1st_window_g1

0xee49,	// (0x0006ab1e) popup_call6_1st_window_g2

0xee51,	// (0x0006ab26) popup_call6_1st_window_g3

0x0002,

0xfb7e,	// (0x0006b853) popup_call6_1st_window_g

0xee59,	// (0x0006ab2e) popup_call6_1st_window_t1

0xee68,	// (0x0006ab3d) popup_call6_1st_window_t2

0xee78,	// (0x0006ab4d) popup_call6_1st_window_t3

0x0002,

0xfb85,	// (0x0006b85a) popup_call6_1st_window_t

0xa9f6,	// (0x000666cb) bg_popup_call2_in_pane_cp04

0xee41,	// (0x0006ab16) popup_call6_2nd_window_g1

0xee49,	// (0x0006ab1e) popup_call6_2nd_window_g2

0xee51,	// (0x0006ab26) popup_call6_2nd_window_g3

0x0002,

0xfb7e,	// (0x0006b853) popup_call6_2nd_window_g

0xee59,	// (0x0006ab2e) popup_call6_2nd_window_t1

0x9c0a,	// (0x000658df) bg_button_pane_cp15

0xee88,	// (0x0006ab5d) cell_call6_btn_pane_g1

0xee91,	// (0x0006ab66) cell_call6_btn_pane_t1

0x949d,	// (0x00065172) listscroll_wgtman_pane_ParamLimits

0x949d,	// (0x00065172) listscroll_wgtman_pane

0x94b9,	// (0x0006518e) wgtman_btn_pane_ParamLimits

0x94b9,	// (0x0006518e) wgtman_btn_pane

0xb229,	// (0x00066efe) aid_scroll_copy1

0xeea0,	// (0x0006ab75) list_wgtman_pane

0x94ee,	// (0x000651c3) wgtman_btn_pane_g1_ParamLimits

0x94ee,	// (0x000651c3) wgtman_btn_pane_g1

0x9516,	// (0x000651eb) wgtman_btn_pane_t1_ParamLimits

0x9516,	// (0x000651eb) wgtman_btn_pane_t1

0xeeaa,	// (0x0006ab7f) wgtman_btn_pane_t2_ParamLimits

0xeeaa,	// (0x0006ab7f) wgtman_btn_pane_t2

0x0001,

0xfb8c,	// (0x0006b861) wgtman_btn_pane_t_ParamLimits

0xfb8c,	// (0x0006b861) wgtman_btn_pane_t

0x954d,	// (0x00065222) listrow_wgtman_pane_ParamLimits

0x954d,	// (0x00065222) listrow_wgtman_pane

0x9568,	// (0x0006523d) listrow_wgtman_pane_g1

0x9575,	// (0x0006524a) listrow_wgtman_pane_g2

0x0001,

0xfb91,	// (0x0006b866) listrow_wgtman_pane_g

0x9593,	// (0x00065268) listrow_wgtman_pane_t1

0x95ab,	// (0x00065280) listrow_wgtman_pane_t2

0x0001,

0xfb96,	// (0x0006b86b) listrow_wgtman_pane_t

0x95d1,	// (0x000652a6) wait_bar_pane_cp09

0xeec1,	// (0x0006ab96) main_calllock_btn_pane

0xeecb,	// (0x0006aba0) main_calllock_pane_g1

0x9c0a,	// (0x000658df) bg_button_pane_cp17

0xeed7,	// (0x0006abac) main_calllock_btn_pane_g1

0xeee0,	// (0x0006abb5) main_calllock_btn_pane_t1

0x9c0a,	// (0x000658df) main_dialer3_pane

0x9c0a,	// (0x000658df) main_fmrd2_pane

0xcc85,	// (0x0006895a) main_fs_bigclock_unlock_btn_pane_g1

0xeef7,	// (0x0006abcc) main_fs_bigclock_unlock_btn_pane_t1

0x95e3,	// (0x000652b8) area_fmrd2_info_pane_ParamLimits

0x95e3,	// (0x000652b8) area_fmrd2_info_pane

0x95f1,	// (0x000652c6) area_fmrd2_visual_pane_ParamLimits

0x95f1,	// (0x000652c6) area_fmrd2_visual_pane

0x95ff,	// (0x000652d4) fmrd2_indi_pane_ParamLimits

0x95ff,	// (0x000652d4) fmrd2_indi_pane

0x960c,	// (0x000652e1) area_fmrd2_visual_pane_g1

0x9614,	// (0x000652e9) area_fmrd2_visual_pane_t1

0x9624,	// (0x000652f9) area_fmrd2_visual_pane_t2

0x9634,	// (0x00065309) area_fmrd2_visual_pane_t3

0x0002,

0xfb9b,	// (0x0006b870) area_fmrd2_visual_pane_t

0x9644,	// (0x00065319) area_fmrd2_info_pane_g1

0x964c,	// (0x00065321) area_fmrd2_info_pane_t1

0x965c,	// (0x00065331) area_fmrd2_info_pane_t2

0x966c,	// (0x00065341) area_fmrd2_info_pane_t3

0x967c,	// (0x00065351) area_fmrd2_info_pane_t4

0x0003,

0xfba2,	// (0x0006b877) area_fmrd2_info_pane_t

0x968a,	// (0x0006535f) fmrd2_indi_pane_t1

0x969a,	// (0x0006536f) fmrd2_indi_pane_t2

0x96aa,	// (0x0006537f) fmrd2_indi_pane_t3

0x0002,

0xfbab,	// (0x0006b880) fmrd2_indi_pane_t

0xe4ac,	// (0x0006a181) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4ac,	// (0x0006a181) list_single_fs_bigclock_indicator_pane_g5

0xe55c,	// (0x0006a231) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe55c,	// (0x0006a231) list_single_fs_bigclock_indicator_pane_t5

0x8de4,	// (0x00064ab9) aid_cell_bcale_month_pane_ParamLimits

0x8de4,	// (0x00064ab9) aid_cell_bcale_month_pane

0x8e02,	// (0x00064ad7) bcale_month_pane_ParamLimits

0x8e02,	// (0x00064ad7) bcale_month_pane

0x8e20,	// (0x00064af5) bcale_preview_pane_ParamLimits

0x8e20,	// (0x00064af5) bcale_preview_pane

0xeca5,	// (0x0006a97a) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc4,	// (0x0006a999) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc4,	// (0x0006a999) list_single_fs_bigclock_pane_t2

0x0001,

0xfb37,	// (0x0006b80c) list_single_fs_bigclock_pane_t_ParamLimits

0xfb37,	// (0x0006b80c) list_single_fs_bigclock_pane_t

0xeeef,	// (0x0006abc4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x0d88,	// (0x0005ca5d) main_fs_bigclock_unlock_btn_pane_g

0x96b8,	// (0x0006538d) aid_dia3_key_size_ParamLimits

0x96b8,	// (0x0006538d) aid_dia3_key_size

0x96c4,	// (0x00065399) aid_dia3_listrow_size_ParamLimits

0x96c4,	// (0x00065399) aid_dia3_listrow_size

0x96d4,	// (0x000653a9) dia3_keypad_fun_pane_ParamLimits

0x96d4,	// (0x000653a9) dia3_keypad_fun_pane

0x96e6,	// (0x000653bb) dia3_keypad_num_pane_ParamLimits

0x96e6,	// (0x000653bb) dia3_keypad_num_pane

0x96f8,	// (0x000653cd) dia3_listscroll_pane_ParamLimits

0x96f8,	// (0x000653cd) dia3_listscroll_pane

0x9706,	// (0x000653db) dia3_numentry_pane_ParamLimits

0x9706,	// (0x000653db) dia3_numentry_pane

0xef05,	// (0x0006abda) dia3_list_pane

0xef10,	// (0x0006abe5) scroll_pane_cp12

0x9c0a,	// (0x000658df) bg_dia3_numentry_pane

0x9714,	// (0x000653e9) dia3_numentry_pane_t1

0x9723,	// (0x000653f8) cell_dia3_key_num_pane

0x972b,	// (0x00065400) cell_dia3_key0_fun_pane_ParamLimits

0x972b,	// (0x00065400) cell_dia3_key0_fun_pane

0x9738,	// (0x0006540d) cell_dia3_key1_fun_pane_ParamLimits

0x9738,	// (0x0006540d) cell_dia3_key1_fun_pane

0x9745,	// (0x0006541a) dia3_listrow_pane

0xe1bb,	// (0x00069e90) bg_dia3_numentry_pane_g1

0x9c0a,	// (0x000658df) bg_button_pane_cp21

0xef1b,	// (0x0006abf0) cell_dia3_key_num_pane_t1

0xef29,	// (0x0006abfe) cell_dia3_key_num_pane_t2

0xef38,	// (0x0006ac0d) cell_dia3_key_num_pane_t3

0xef47,	// (0x0006ac1c) cell_dia3_key_num_pane_t4

0x0003,

0xfbb2,	// (0x0006b887) cell_dia3_key_num_pane_t

0x9c0a,	// (0x000658df) bg_button_pane_cp19

0x9752,	// (0x00065427) cell_dia3_key0_fun_pane_g1

0x9c0a,	// (0x000658df) bg_button_pane_cp20

0x975a,	// (0x0006542f) cell_dia3_key1_fun_pane_g1

0x9762,	// (0x00065437) area_left_week_number_pane

0x9775,	// (0x0006544a) area_top_day_name_pane

0x9783,	// (0x00065458) frame_month_view_pane

0xef56,	// (0x0006ac2b) grid_month_view_pane

0x9798,	// (0x0006546d) cell_top_day_name_pane_ParamLimits

0x9798,	// (0x0006546d) cell_top_day_name_pane

0x97b2,	// (0x00065487) cell_area_left_week_number_pane_ParamLimits

0x97b2,	// (0x00065487) cell_area_left_week_number_pane

0x97d5,	// (0x000654aa) cell_month_view_pane_ParamLimits

0x97d5,	// (0x000654aa) cell_month_view_pane

0xef64,	// (0x0006ac39) frm_month_g1

0x9801,	// (0x000654d6) frm_month_g2

0x9812,	// (0x000654e7) frm_month_g3

0x9823,	// (0x000654f8) frm_month_g4

0x9834,	// (0x00065509) frm_month_g5

0x9847,	// (0x0006551c) frm_month_g6

0x985a,	// (0x0006552f) frm_month_g7

0xef71,	// (0x0006ac46) frm_month_g8

0x986d,	// (0x00065542) frm_month_g9

0x987a,	// (0x0006554f) frm_month_g10

0x9887,	// (0x0006555c) frm_month_g11

0x9894,	// (0x00065569) frm_month_g12

0x98a1,	// (0x00065576) frm_month_g13

0x98ae,	// (0x00065583) frm_month_g14

0x98bd,	// (0x00065592) frm_month_g15

0x98cc,	// (0x000655a1) frm_month_g16

0x000f,

0xfbbb,	// (0x0006b890) frm_month_g

0xef7e,	// (0x0006ac53) cell_top_day_name_pane_t1

0x98db,	// (0x000655b0) cell_area_left_week_number_pane_g1

0x98ea,	// (0x000655bf) cell_area_left_week_number_pane_t1

0xcee8,	// (0x00068bbd) cell_month_view_pane_g1

0x9900,	// (0x000655d5) cell_month_view_pane_t1

0x9c0a,	// (0x000658df) main_fps_pane

0xe751,	// (0x0006a426) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe751,	// (0x0006a426) cmail_ddmenu_btn02_pane_cp1

0xe76d,	// (0x0006a442) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76d,	// (0x0006a442) cmail_ddmenu_btn02_pane_cp2

0x90e8,	// (0x00064dbd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x90e8,	// (0x00064dbd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfafd,	// (0x0006b7d2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfafd,	// (0x0006b7d2) cmail_ddmenu_btn02_pane_g

0x9106,	// (0x00064ddb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9106,	// (0x00064ddb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb02,	// (0x0006b7d7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb02,	// (0x0006b7d7) cmail_ddmenu_btn02_pane_t

0x9916,	// (0x000655eb) fps_text_pane_ParamLimits

0x9916,	// (0x000655eb) fps_text_pane

0x9923,	// (0x000655f8) main_fps_pane_g1_ParamLimits

0x9923,	// (0x000655f8) main_fps_pane_g1

0x9931,	// (0x00065606) wait_bar_pane_cp010_ParamLimits

0x9931,	// (0x00065606) wait_bar_pane_cp010

0x993d,	// (0x00065612) fps_text_pane_t1_ParamLimits

0x993d,	// (0x00065612) fps_text_pane_t1

0x6415,	// (0x000620ea) cam4_image_uncrop_pane_g1

0x641e,	// (0x000620f3) cam4_image_uncrop_pane_g2

0x6427,	// (0x000620fc) cam4_image_uncrop_pane_g3

0x6430,	// (0x00062105) cam4_image_uncrop_pane_g4

0x0003,

0xf716,	// (0x0006b3eb) cam4_image_uncrop_pane_g

0x9745,	// (0x0006541a) dia3_listrow_pane_ParamLimits

0x9c0a,	// (0x000658df) main_phob2_pane

0x8c21,	// (0x000648f6) cell_tport_appsw_pane_cp02_ParamLimits

0x8c21,	// (0x000648f6) cell_tport_appsw_pane_cp02

0x8c30,	// (0x00064905) cell_tport_appsw_pane_cp03_ParamLimits

0x8c30,	// (0x00064905) cell_tport_appsw_pane_cp03

0x9c0a,	// (0x000658df) phob2_contact_card_pane

0x9c0a,	// (0x000658df) phob2_listscroll_pane

0xef91,	// (0x0006ac66) phob2_list_pane

0xef99,	// (0x0006ac6e) scroll_pane_cp034

0x9956,	// (0x0006562b) phob2_cc_data_pane_ParamLimits

0x9956,	// (0x0006562b) phob2_cc_data_pane

0x9970,	// (0x00065645) phob2_cc_listscroll_pane_ParamLimits

0x9970,	// (0x00065645) phob2_cc_listscroll_pane

0x998a,	// (0x0006565f) list_double_large_graphic_phob2_pane_ParamLimits

0x998a,	// (0x0006565f) list_double_large_graphic_phob2_pane

0x99a8,	// (0x0006567d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99a8,	// (0x0006567d) list_double_large_graphic_phob2_pane_g1

0x99be,	// (0x00065693) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99be,	// (0x00065693) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfbdc,	// (0x0006b8b1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfbdc,	// (0x0006b8b1) list_double_large_graphic_phob2_pane_g

0x99ca,	// (0x0006569f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99ca,	// (0x0006569f) list_double_large_graphic_phob2_pane_t1

0x99df,	// (0x000656b4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99df,	// (0x000656b4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfbe1,	// (0x0006b8b6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfbe1,	// (0x0006b8b6) list_double_large_graphic_phob2_pane_t

0x9c0a,	// (0x000658df) list_highlight_pane_cp024

0x99f1,	// (0x000656c6) phob2_cc_button_pane

0x99f9,	// (0x000656ce) phob2_cc_data_pane_g1_ParamLimits

0x99f9,	// (0x000656ce) phob2_cc_data_pane_g1

0x9a05,	// (0x000656da) phob2_cc_data_pane_g2_ParamLimits

0x9a05,	// (0x000656da) phob2_cc_data_pane_g2

0x0001,

0xfbe6,	// (0x0006b8bb) phob2_cc_data_pane_g_ParamLimits

0xfbe6,	// (0x0006b8bb) phob2_cc_data_pane_g

0x9a11,	// (0x000656e6) phob2_cc_data_pane_t1_ParamLimits

0x9a11,	// (0x000656e6) phob2_cc_data_pane_t1

0x9a23,	// (0x000656f8) phob2_cc_data_pane_t2_ParamLimits

0x9a23,	// (0x000656f8) phob2_cc_data_pane_t2

0x9a35,	// (0x0006570a) phob2_cc_data_pane_t3_ParamLimits

0x9a35,	// (0x0006570a) phob2_cc_data_pane_t3

0x0002,

0xfbeb,	// (0x0006b8c0) phob2_cc_data_pane_t_ParamLimits

0xfbeb,	// (0x0006b8c0) phob2_cc_data_pane_t

0xefa1,	// (0x0006ac76) phob2_cc_list_pane_ParamLimits

0xefa1,	// (0x0006ac76) phob2_cc_list_pane

0xd9f6,	// (0x000696cb) scroll_pane_cp035_ParamLimits

0xd9f6,	// (0x000696cb) scroll_pane_cp035

0xb17c,	// (0x00066e51) bg_button_pane_cp033

0xefad,	// (0x0006ac82) phob2_cc_button_pane_g1

0xefb9,	// (0x0006ac8e) phob2_cc_button_pane_t1

0xefce,	// (0x0006aca3) phob2_cc_button_pane_t2

0x0001,

0xfbf2,	// (0x0006b8c7) phob2_cc_button_pane_t

0x9a47,	// (0x0006571c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a47,	// (0x0006571c) list_double_large_graphic_phob2_cc_pane

0x9a6e,	// (0x00065743) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a6e,	// (0x00065743) list_double_large_graphic_phob2_cc_pane_g1

0xa43c,	// (0x00066111) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa43c,	// (0x00066111) list_double_large_graphic_phob2_cc_pane_g2

0x9a7f,	// (0x00065754) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a7f,	// (0x00065754) list_double_large_graphic_phob2_cc_pane_g3

0x9a8b,	// (0x00065760) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a8b,	// (0x00065760) list_double_large_graphic_phob2_cc_pane_g4

0x9a97,	// (0x0006576c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a97,	// (0x0006576c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfbf7,	// (0x0006b8cc) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfbf7,	// (0x0006b8cc) list_double_large_graphic_phob2_cc_pane_g

0x9aa3,	// (0x00065778) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9aa3,	// (0x00065778) list_double_large_graphic_phob2_cc_pane_t1

0x9acc,	// (0x000657a1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9acc,	// (0x000657a1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc02,	// (0x0006b8d7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc02,	// (0x0006b8d7) list_double_large_graphic_phob2_cc_pane_t

0xefe0,	// (0x0006acb5) list_highlight_pane_cp025_ParamLimits

0xefe0,	// (0x0006acb5) list_highlight_pane_cp025

0xb17c,	// (0x00066e51) bg_button_pane_cp033_ParamLimits

0xefad,	// (0x0006ac82) phob2_cc_button_pane_g1_ParamLimits

0xefb9,	// (0x0006ac8e) phob2_cc_button_pane_t1_ParamLimits

0xefce,	// (0x0006aca3) phob2_cc_button_pane_t2_ParamLimits

0xfbf2,	// (0x0006b8c7) phob2_cc_button_pane_t_ParamLimits

0x11ad,	// (0x0005ce82) popup_wgtman_window

0xd820,	// (0x000694f5) scroll_pane_cp038

0x94d6,	// (0x000651ab) wgtman_btn_pane_cp_01_ParamLimits

0x94d6,	// (0x000651ab) wgtman_btn_pane_cp_01

0xefee,	// (0x0006acc3) wgtman_content_pane

0xeff7,	// (0x0006accc) wgtman_heading_pane

0x9c0a,	// (0x000658df) bg_heading_pane_cp02

0xf000,	// (0x0006acd5) wgtman_heading_pane_g1

0xf008,	// (0x0006acdd) wgtman_heading_pane_t1

0xf016,	// (0x0006aceb) scroll_pane_cp036

0xf01e,	// (0x0006acf3) wgtman_list_pane

0xf026,	// (0x0006acfb) wgtman_list_pane_t1_ParamLimits

0xf026,	// (0x0006acfb) wgtman_list_pane_t1

0x6374,	// (0x00062049) cam4_grid_pane

0x70fb,	// (0x00062dd0) bg_button_pane_cp015_ParamLimits

0x710d,	// (0x00062de2) bg_button_pane_cp016_ParamLimits

0x7120,	// (0x00062df5) bg_button_pane_cp017_ParamLimits

0x7176,	// (0x00062e4b) popup_vitu2_query_window_g3_ParamLimits

0x7176,	// (0x00062e4b) popup_vitu2_query_window_g3

0x7231,	// (0x00062f06) popup_vitu2_query_window_t6_ParamLimits

0x7231,	// (0x00062f06) popup_vitu2_query_window_t6

0x725c,	// (0x00062f31) popup_vitu2_query_window_t7_ParamLimits

0x725c,	// (0x00062f31) popup_vitu2_query_window_t7

0xe603,	// (0x0006a2d8) cam4_grid_pane_g1

0xe60c,	// (0x0006a2e1) cam4_grid_pane_g2

0xf040,	// (0x0006ad15) cam4_grid_pane_g3

0xf049,	// (0x0006ad1e) cam4_grid_pane_g4

0x0003,

0xfc07,	// (0x0006b8dc) cam4_grid_pane_g

0x212a,	// (0x0005ddff) aid_placing_vt_slider_lsc_ParamLimits

0x2476,	// (0x0005e14b) vidtel_button_pane_ParamLimits

0x2476,	// (0x0005e14b) vidtel_button_pane

0xf054,	// (0x0006ad29) bg_button_pane_cp034

0x9af5,	// (0x000657ca) vidtel_button_pane_g1

0xf05e,	// (0x0006ad33) vidtel_button_pane_t1

0xd93d,	// (0x00069612) aid_size_vtel_slider_touch

0xd9f6,	// (0x000696cb) scroll_pane_cp039

0xe1f9,	// (0x00069ece) ncim_query_button_pane_cp01_ParamLimits

0xe218,	// (0x00069eed) ncimui_query_pane_g1_ParamLimits

0xb17c,	// (0x00066e51) input_focus_pane_cp012_ParamLimits

0xe23d,	// (0x00069f12) ncim_query_entry_pane_t1_ParamLimits

0xd9f6,	// (0x000696cb) scroll_pane_cp039_ParamLimits

0xb30d,	// (0x00066fe2) navi_pane_bcale_mc_g1

0xb315,	// (0x00066fea) navi_pane_bcale_mc_t1

0xe7b6,	// (0x0006a48b) main_sp_fs_email_pane_g1

0xe7c2,	// (0x0006a497) main_sp_fs_email_pane_g2

0x0001,

0x0be2,	// (0x0005c8b7) main_sp_fs_email_pane_g

0xea09,	// (0x0006a6de) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea09,	// (0x0006a6de) list_single_cale_mrui_row_pane_g3

0x912e,	// (0x00064e03) list_single_recal_day_pane_g5_event_pane

0xa407,	// (0x000660dc) list_single_recal_day_pane_g7

0xf06c,	// (0x0006ad41) list_recal_day_event_pane_cp01

0xf075,	// (0x0006ad4a) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0006ad52) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0006ad5a) list_recal_vselct_pane_cp01

0xd95f,	// (0x00069634) list_recal_day_event_pane_cp01_g1

0xa448,	// (0x0006611d) list_recal_day_event_pane_cp01_t1

0xa40f,	// (0x000660e4) list_single_recal_day_pane_t1_ParamLimits

0xa421,	// (0x000660f6) list_single_recal_day_pane_t2_ParamLimits

0xfb12,	// (0x0006b7e7) list_single_recal_day_pane_t_ParamLimits

0xa76c,	// (0x00066441) bg_notes_pane_ParamLimits

0xa80f,	// (0x000664e4) list_notes_pane_ParamLimits

0x1515,	// (0x0005d1ea) scroll_pane_cp06_ParamLimits

0xa831,	// (0x00066506) main_notes_pane_ParamLimits

0x9c0a,	// (0x000658df) main_welc_pane

0x9afd,	// (0x000657d2) main_welc_body_pane_ParamLimits

0x9afd,	// (0x000657d2) main_welc_body_pane

0x9b17,	// (0x000657ec) main_welc_opti_pane_ParamLimits

0x9b17,	// (0x000657ec) main_welc_opti_pane

0x9b4a,	// (0x0006581f) main_welc_pane_t1_ParamLimits

0x9b4a,	// (0x0006581f) main_welc_pane_t1

0x9b64,	// (0x00065839) main_welc_body_row_pane_ParamLimits

0x9b64,	// (0x00065839) main_welc_body_row_pane

0xe5c5,	// (0x0006a29a) main_welc_opti_row_pane_ParamLimits

0xe5c5,	// (0x0006a29a) main_welc_opti_row_pane

0xf08f,	// (0x0006ad64) main_welc_opti_row_pane_g1

0x9b89,	// (0x0006585e) main_welc_opti_row_pane_t1

0xf097,	// (0x0006ad6c) main_welc_body_row_pane_t1

0xed7c,	// (0x0006aa51) popup_notif_wgt_heading_pane

0xed96,	// (0x0006aa6b) aid_size_list_notif_wgt_del_ParamLimits

0xeda3,	// (0x0006aa78) list_notif_wgt_row_pane_g1_ParamLimits

0xedaf,	// (0x0006aa84) list_notif_wgt_row_pane_g2_ParamLimits

0xedc3,	// (0x0006aa98) list_notif_wgt_row_pane_g3_ParamLimits

0xfb61,	// (0x0006b836) list_notif_wgt_row_pane_g_ParamLimits

0xedd0,	// (0x0006aaa5) list_notif_wgt_row_pane_t1_ParamLimits

0xede6,	// (0x0006aabb) list_notif_wgt_row_pane_t2_ParamLimits

0xedf8,	// (0x0006aacd) list_notif_wgt_row_pane_t3_ParamLimits

0xfb68,	// (0x0006b83d) list_notif_wgt_row_pane_t_ParamLimits

0x9568,	// (0x0006523d) listrow_wgtman_pane_g1_ParamLimits

0x9575,	// (0x0006524a) listrow_wgtman_pane_g2_ParamLimits

0xfb91,	// (0x0006b866) listrow_wgtman_pane_g_ParamLimits

0x9593,	// (0x00065268) listrow_wgtman_pane_t1_ParamLimits

0x95ab,	// (0x00065280) listrow_wgtman_pane_t2_ParamLimits

0xfb96,	// (0x0006b86b) listrow_wgtman_pane_t_ParamLimits

0x95d1,	// (0x000652a6) wait_bar_pane_cp09_ParamLimits

0x9c0a,	// (0x000658df) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0006ad7b) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0006ad83) popup_notif_wgt_heading_pane_t1

0x9c0a,	// (0x000658df) main_vids_pane

0x9c0a,	// (0x000658df) vids_listscroll_pane

0x9b98,	// (0x0006586d) scroll_pane_cp040

0x9c0a,	// (0x000658df) vids_list_pane

0x9ba3,	// (0x00065878) vids_list_double_pane_ParamLimits

0x9ba3,	// (0x00065878) vids_list_double_pane

0x9bbd,	// (0x00065892) vids_list_double_pane_g1

0x9bc6,	// (0x0006589b) vids_list_double_pane_t1

0x9bd6,	// (0x000658ab) vids_list_double_pane_t2

0x0001,

0xfc15,	// (0x0006b8ea) vids_list_double_pane_t

0x44ac,	// (0x00060181) main_ncimui_pane_ParamLimits

0x7ee2,	// (0x00063bb7) main_ncimui_pane_g1_ParamLimits

0x7eee,	// (0x00063bc3) main_ncimui_pane_g2_ParamLimits

0x7eee,	// (0x00063bc3) main_ncimui_pane_g2

0x0001,

0xf974,	// (0x0006b649) main_ncimui_pane_g_ParamLimits

0xf974,	// (0x0006b649) main_ncimui_pane_g

0x9b30,	// (0x00065805) main_welc_pane_g1_ParamLimits

0x9b30,	// (0x00065805) main_welc_pane_g1

0x9b3c,	// (0x00065811) main_welc_pane_g2_ParamLimits

0x9b3c,	// (0x00065811) main_welc_pane_g2

0x0001,

0xfc10,	// (0x0006b8e5) main_welc_pane_g_ParamLimits

0xfc10,	// (0x0006b8e5) main_welc_pane_g

0xa76c,	// (0x00066441) listscroll_mce_pane_ParamLimits

0xb462,	// (0x00067137) wait_bar_pane_cp10

0xc85c,	// (0x00068531) main_cale_day_pane_ParamLimits

0xc85c,	// (0x00068531) main_cale_week_pane_ParamLimits

0xa76c,	// (0x00066441) main_messa_pane_ParamLimits

0x57c6,	// (0x0006149b) main_clock2_btn_pane_ParamLimits

0x57c6,	// (0x0006149b) main_clock2_btn_pane

0xd090,	// (0x00068d65) main_clock2_btn_pane_cp01_ParamLimits

0xd090,	// (0x00068d65) main_clock2_btn_pane_cp01

0xe9da,	// (0x0006a6af) list_cale_mrui_pane_ParamLimits

0xee2e,	// (0x0006ab03) main_cf0_pane_g2

0x0001,

0xfb6f,	// (0x0006b844) main_cf0_pane_g

0x9762,	// (0x00065437) area_left_week_number_pane_ParamLimits

0x9775,	// (0x0006544a) area_top_day_name_pane_ParamLimits

0x9783,	// (0x00065458) frame_month_view_pane_ParamLimits

0xef56,	// (0x0006ac2b) grid_month_view_pane_ParamLimits

0xef64,	// (0x0006ac39) frm_month_g1_ParamLimits

0x9801,	// (0x000654d6) frm_month_g2_ParamLimits

0x9812,	// (0x000654e7) frm_month_g3_ParamLimits

0x9823,	// (0x000654f8) frm_month_g4_ParamLimits

0x9834,	// (0x00065509) frm_month_g5_ParamLimits

0x9847,	// (0x0006551c) frm_month_g6_ParamLimits

0x985a,	// (0x0006552f) frm_month_g7_ParamLimits

0xef71,	// (0x0006ac46) frm_month_g8_ParamLimits

0x986d,	// (0x00065542) frm_month_g9_ParamLimits

0x987a,	// (0x0006554f) frm_month_g10_ParamLimits

0x9887,	// (0x0006555c) frm_month_g11_ParamLimits

0x9894,	// (0x00065569) frm_month_g12_ParamLimits

0x98a1,	// (0x00065576) frm_month_g13_ParamLimits

0x98ae,	// (0x00065583) frm_month_g14_ParamLimits

0x98bd,	// (0x00065592) frm_month_g15_ParamLimits

0x98cc,	// (0x000655a1) frm_month_g16_ParamLimits

0xfbbb,	// (0x0006b890) frm_month_g_ParamLimits

0xef7e,	// (0x0006ac53) cell_top_day_name_pane_t1_ParamLimits

0x98db,	// (0x000655b0) cell_area_left_week_number_pane_g1_ParamLimits

0x98ea,	// (0x000655bf) cell_area_left_week_number_pane_t1_ParamLimits

0xcee8,	// (0x00068bbd) cell_month_view_pane_g1_ParamLimits

0x9900,	// (0x000655d5) cell_month_view_pane_t1_ParamLimits

0xa764,	// (0x00066439) main_clock2_btn_pane_g1

0xf0bc,	// (0x0006ad91) main_clock2_btn_pane_t1

0xb17c,	// (0x00066e51) listscroll_cmail_pane_ParamLimits

0xe7b6,	// (0x0006a48b) main_sp_fs_email_pane_g1_ParamLimits

0xe7c2,	// (0x0006a497) main_sp_fs_email_pane_g2_ParamLimits

0x0be2,	// (0x0005c8b7) main_sp_fs_email_pane_g_ParamLimits

0xeae9,	// (0x0006a7be) list_recal_day_pane_ParamLimits

0xeafa,	// (0x0006a7cf) mian_recal_day_pane_t1

0x88f6,	// (0x000645cb) list_single_dyc_row_text_pane_t4_ParamLimits

0x88f6,	// (0x000645cb) list_single_dyc_row_text_pane_t4

0x892d,	// (0x00064602) list_single_dyc_row_text_pane_t5_ParamLimits

0x892d,	// (0x00064602) list_single_dyc_row_text_pane_t5

0xa175,	// (0x00065e4a) list_single_dyc_row_text_pane_t6_ParamLimits

0xa175,	// (0x00065e4a) list_single_dyc_row_text_pane_t6

0x3302,	// (0x0005efd7) aid_mgn_list_cale_time_pane

0x44ac,	// (0x00060181) main_gallery2_pane_ParamLimits

0xd0a6,	// (0x00068d7b) main_clock2_pane_cp01_t1

0xd0b6,	// (0x00068d8b) main_clock2_pane_cp01_t3

0x0001,

0x06c1,	// (0x0005c396) main_clock2_pane_cp01_t

0x1965,	// (0x0005d63a) cale_week_scroll_pane_g16_ParamLimits

0x1965,	// (0x0005d63a) cale_week_scroll_pane_g16

0xa9f6,	// (0x000666cb) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small

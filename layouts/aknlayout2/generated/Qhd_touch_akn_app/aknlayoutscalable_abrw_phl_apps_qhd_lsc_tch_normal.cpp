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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002dd21 };

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
0x188d,	// (0x0002f5ae) Screen

0x1899,	// (0x0002f5ba) application_window

0x18c9,	// (0x0002f5ea) area_bottom_pane_ParamLimits

0x18c9,	// (0x0002f5ea) area_bottom_pane

0x0182,	// (0x0002dea3) area_top_pane_ParamLimits

0x0182,	// (0x0002dea3) area_top_pane

0x1926,	// (0x0002f647) call_video_uplink_pane_ParamLimits

0x1926,	// (0x0002f647) call_video_uplink_pane

0x0210,	// (0x0002df31) main_pane_ParamLimits

0x0210,	// (0x0002df31) main_pane

0xc406,	// (0x0003a127) context_pane

0x4a8f,	// (0x000327b0) navi_pane

0x4ac1,	// (0x000327e2) popup_cale_events_window_ParamLimits

0x4ac1,	// (0x000327e2) popup_cale_events_window

0xc419,	// (0x0003a13a) popup_mup_playback_window

0x4ad9,	// (0x000327fa) signal_pane

0xa2b2,	// (0x00037fd3) main_browser_pane

0xa477,	// (0x00038198) main_burst_pane

0x0604,	// (0x0002e325) main_calc_pane

0xc3ec,	// (0x0003a10d) main_cale_day_pane

0x0618,	// (0x0002e339) main_cale_month_pane

0xc3ec,	// (0x0003a10d) main_cale_week_pane

0xa477,	// (0x00038198) main_call_pane

0x9f92,	// (0x00037cb3) main_call_poc_pane

0xa477,	// (0x00038198) main_camera_pane

0xa477,	// (0x00038198) main_chi_dic_pane

0xacf6,	// (0x00038a17) main_clock_pane

0x9f92,	// (0x00037cb3) main_fmradio_pane

0xa477,	// (0x00038198) main_graph_messa_pane

0x9f92,	// (0x00037cb3) main_help_pane

0xa2b2,	// (0x00037fd3) main_im_pane

0xa1ed,	// (0x00037f0e) main_image_pane_ParamLimits

0xa1ed,	// (0x00037f0e) main_image_pane

0x9f92,	// (0x00037cb3) main_location2_pane

0xa477,	// (0x00038198) main_location_pane

0xa1ed,	// (0x00037f0e) main_messa_pane

0x9f92,	// (0x00037cb3) main_mp2_pane

0xa477,	// (0x00038198) main_mp_pane

0x9f92,	// (0x00037cb3) main_msg_pane

0x9f92,	// (0x00037cb3) main_mup_eq_pane

0x9f92,	// (0x00037cb3) main_mup_pane

0xa2b2,	// (0x00037fd3) main_notes_pane

0x9f92,	// (0x00037cb3) main_pec_pane

0x9f92,	// (0x00037cb3) main_phob_pane

0x9f92,	// (0x00037cb3) main_pinb_pane

0x9f92,	// (0x00037cb3) main_postcard_pane

0x9f92,	// (0x00037cb3) main_qdial_pane

0xa477,	// (0x00038198) main_skin_pane

0x9f92,	// (0x00037cb3) main_smil2_pane

0xa477,	// (0x00038198) main_smil_pane

0xa477,	// (0x00038198) main_video_pane

0xa477,	// (0x00038198) main_video_tele_pane

0xa1ed,	// (0x00037f0e) main_viewer_pane_ParamLimits

0xa1ed,	// (0x00037f0e) main_viewer_pane

0xa477,	// (0x00038198) main_vorec_pane

0x066a,	// (0x0002e38b) popup_blid_sat_info_window_ParamLimits

0x066a,	// (0x0002e38b) popup_blid_sat_info_window

0x06c2,	// (0x0002e3e3) popup_dyc_status_message_window_ParamLimits

0x06c2,	// (0x0002e3e3) popup_dyc_status_message_window

0x06dc,	// (0x0002e3fd) popup_grid_large_graphic_window_ParamLimits

0x06dc,	// (0x0002e3fd) popup_grid_large_graphic_window

0x0798,	// (0x0002e4b9) popup_loc_request_window_ParamLimits

0x0798,	// (0x0002e4b9) popup_loc_request_window

0x088e,	// (0x0002e5af) popup_wml_address_window_ParamLimits

0x088e,	// (0x0002e5af) popup_wml_address_window

0x487f,	// (0x000325a0) call_muted_g1

0x4534,	// (0x00032255) popup_call_audio_conf_window_ParamLimits

0x4534,	// (0x00032255) popup_call_audio_conf_window

0x4893,	// (0x000325b4) popup_call_audio_first_window_ParamLimits

0x4893,	// (0x000325b4) popup_call_audio_first_window

0x4909,	// (0x0003262a) popup_call_audio_in_window_ParamLimits

0x4909,	// (0x0003262a) popup_call_audio_in_window

0x4945,	// (0x00032666) popup_call_audio_out_window_ParamLimits

0x4945,	// (0x00032666) popup_call_audio_out_window

0x497f,	// (0x000326a0) popup_call_audio_second_window_ParamLimits

0x497f,	// (0x000326a0) popup_call_audio_second_window

0x49d5,	// (0x000326f6) popup_call_audio_wait_window_ParamLimits

0x49d5,	// (0x000326f6) popup_call_audio_wait_window

0x4a0a,	// (0x0003272b) popup_number_entry_window_ParamLimits

0x4a0a,	// (0x0003272b) popup_number_entry_window

0x9b7f,	// (0x000378a0) bg_popup_call_pane_cp05_ParamLimits

0x9b7f,	// (0x000378a0) bg_popup_call_pane_cp05

0x9b9f,	// (0x000378c0) popup_number_entry_window_t1

0x9bb2,	// (0x000378d3) popup_number_entry_window_t2

0x9bc4,	// (0x000378e5) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0003cdeb) popup_number_entry_window_t

0x9bd6,	// (0x000378f7) text_title_cp2

0x9be9,	// (0x0003790a) bg_popup_call_pane_cp_ParamLimits

0x9be9,	// (0x0003790a) bg_popup_call_pane_cp

0x9bf7,	// (0x00037918) call_thumbnail_pane

0x9bff,	// (0x00037920) popup_call_audio_in_window_g1_ParamLimits

0x9bff,	// (0x00037920) popup_call_audio_in_window_g1

0x9c0b,	// (0x0003792c) popup_call_audio_in_window_g2_ParamLimits

0x9c0b,	// (0x0003792c) popup_call_audio_in_window_g2

0x9c17,	// (0x00037938) popup_call_audio_in_window_g3_ParamLimits

0x9c17,	// (0x00037938) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0003cdf4) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0003cdf4) popup_call_audio_in_window_g

0x9c23,	// (0x00037944) popup_call_audio_in_window_t1_ParamLimits

0x9c23,	// (0x00037944) popup_call_audio_in_window_t1

0x9c3f,	// (0x00037960) popup_call_audio_in_window_t2_ParamLimits

0x9c3f,	// (0x00037960) popup_call_audio_in_window_t2

0x9c5b,	// (0x0003797c) popup_call_audio_in_window_t3_ParamLimits

0x9c5b,	// (0x0003797c) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0003cdfb) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0003cdfb) popup_call_audio_in_window_t

0x9be9,	// (0x0003790a) bg_popup_call_pane_cp01_ParamLimits

0x9be9,	// (0x0003790a) bg_popup_call_pane_cp01

0x9bf7,	// (0x00037918) call_thumbnail_pane_cp02

0x9c6e,	// (0x0003798f) call_type_pane_cp022

0x9c76,	// (0x00037997) popup_call_audio_out_window_g1_ParamLimits

0x9c76,	// (0x00037997) popup_call_audio_out_window_g1

0x9c88,	// (0x000379a9) popup_call_audio_out_window_g2_ParamLimits

0x9c88,	// (0x000379a9) popup_call_audio_out_window_g2

0x9c94,	// (0x000379b5) popup_call_audio_out_window_g3_ParamLimits

0x9c94,	// (0x000379b5) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0003ce02) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0003ce02) popup_call_audio_out_window_g

0x9ca6,	// (0x000379c7) popup_call_audio_out_window_t1_ParamLimits

0x9ca6,	// (0x000379c7) popup_call_audio_out_window_t1

0x9cbe,	// (0x000379df) popup_call_audio_out_window_t2_ParamLimits

0x9cbe,	// (0x000379df) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003ce09) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003ce09) popup_call_audio_out_window_t

0x9cd3,	// (0x000379f4) bg_popup_call_pane_ParamLimits

0x9cd3,	// (0x000379f4) bg_popup_call_pane

0x199c,	// (0x0002f6bd) call_thumbnail_pane_cp_ParamLimits

0x199c,	// (0x0002f6bd) call_thumbnail_pane_cp

0x9d57,	// (0x00037a78) call_type_pane_cp01_ParamLimits

0x9d57,	// (0x00037a78) call_type_pane_cp01

0x9d9b,	// (0x00037abc) popup_call_audio_first_window_g1_ParamLimits

0x9d9b,	// (0x00037abc) popup_call_audio_first_window_g1

0x9de7,	// (0x00037b08) popup_call_audio_first_window_g2_ParamLimits

0x9de7,	// (0x00037b08) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0003ce0e) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0003ce0e) popup_call_audio_first_window_g

0x9e2b,	// (0x00037b4c) popup_call_audio_first_window_t1_ParamLimits

0x9e2b,	// (0x00037b4c) popup_call_audio_first_window_t1

0x9ed7,	// (0x00037bf8) popup_call_audio_first_window_t4_ParamLimits

0x9ed7,	// (0x00037bf8) popup_call_audio_first_window_t4

0x9f63,	// (0x00037c84) popup_call_audio_first_window_t5_ParamLimits

0x9f63,	// (0x00037c84) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0003ce13) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0003ce13) popup_call_audio_first_window_t

0x9f92,	// (0x00037cb3) bg_popup_call_pane_cp02

0x9f9c,	// (0x00037cbd) call_type_pane_cp023

0x9fa4,	// (0x00037cc5) popup_call_audio_wait_window_g1

0x9fac,	// (0x00037ccd) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003ce1a) popup_call_audio_wait_window_g

0x9fb4,	// (0x00037cd5) popup_call_audio_wait_window_t3

0x9fc2,	// (0x00037ce3) bg_popup_call_pane_cp03_ParamLimits

0x9fc2,	// (0x00037ce3) bg_popup_call_pane_cp03

0xa022,	// (0x00037d43) call_thumbnail_pane_cp011_ParamLimits

0xa022,	// (0x00037d43) call_thumbnail_pane_cp011

0xa02e,	// (0x00037d4f) call_type_pane_cp034_ParamLimits

0xa02e,	// (0x00037d4f) call_type_pane_cp034

0xa06a,	// (0x00037d8b) popup_call_audio_second_window_g1_ParamLimits

0xa06a,	// (0x00037d8b) popup_call_audio_second_window_g1

0xa0a6,	// (0x00037dc7) popup_call_audio_second_window_g2_ParamLimits

0xa0a6,	// (0x00037dc7) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0003ce1f) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0003ce1f) popup_call_audio_second_window_g

0xa0e2,	// (0x00037e03) popup_call_audio_second_window_t1_ParamLimits

0xa0e2,	// (0x00037e03) popup_call_audio_second_window_t1

0xa163,	// (0x00037e84) popup_call_audio_second_window_t2_ParamLimits

0xa163,	// (0x00037e84) popup_call_audio_second_window_t2

0xa199,	// (0x00037eba) popup_call_audio_second_window_t3_ParamLimits

0xa199,	// (0x00037eba) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0003ce24) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0003ce24) popup_call_audio_second_window_t

0x9f92,	// (0x00037cb3) bg_popup_call_pane_cp04

0xa1cf,	// (0x00037ef0) list_conf_pane

0xa1d7,	// (0x00037ef8) popup_call_audio_conf_window_t1

0xa1e5,	// (0x00037f06) call_thumbnail_pane_g1

0xa1ed,	// (0x00037f0e) bg_pinb_pane_ParamLimits

0xa1ed,	// (0x00037f0e) bg_pinb_pane

0xa1fb,	// (0x00037f1c) find_pinb_pane

0xa204,	// (0x00037f25) listscroll_pinb_pane_ParamLimits

0xa204,	// (0x00037f25) listscroll_pinb_pane

0xa213,	// (0x00037f34) pinb_bg_pane_g1

0x19c0,	// (0x0002f6e1) pinb_bg_pane_g2

0x19cc,	// (0x0002f6ed) pinb_bg_pane_g3

0x19d8,	// (0x0002f6f9) pinb_bg_pane_g4

0x19e4,	// (0x0002f705) pinb_bg_pane_g5

0x19f0,	// (0x0002f711) pinb_bg_pane_g6

0x19fb,	// (0x0002f71c) pinb_bg_pane_g7

0x1a06,	// (0x0002f727) pinb_bg_pane_g8

0x1a11,	// (0x0002f732) pinb_bg_pane_g9

0x1a1b,	// (0x0002f73c) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0003ce2b) pinb_bg_pane_g

0x1a38,	// (0x0002f759) grid_pinb_pane

0x1a41,	// (0x0002f762) list_pinb_pane

0x1a4a,	// (0x0002f76b) scroll_pane_cp01_ParamLimits

0x1a4a,	// (0x0002f76b) scroll_pane_cp01

0xa21d,	// (0x00037f3e) find_pinb_pane_g1_ParamLimits

0xa21d,	// (0x00037f3e) find_pinb_pane_g1

0xa235,	// (0x00037f56) find_pinb_pane_t1

0xa247,	// (0x00037f68) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003ce45) find_pinb_pane_t

0xa25c,	// (0x00037f7d) input_focus_pane_cp01_ParamLimits

0xa25c,	// (0x00037f7d) input_focus_pane_cp01

0x1a5c,	// (0x0002f77d) cell_pinb_pane_ParamLimits

0x1a5c,	// (0x0002f77d) cell_pinb_pane

0x1a85,	// (0x0002f7a6) cell_pinb_pane_g1_ParamLimits

0x1a85,	// (0x0002f7a6) cell_pinb_pane_g1

0x1a95,	// (0x0002f7b6) cell_pinb_pane_g2_ParamLimits

0x1a95,	// (0x0002f7b6) cell_pinb_pane_g2

0xa268,	// (0x00037f89) cell_pinb_pane_g3_ParamLimits

0xa268,	// (0x00037f89) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003ce4a) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003ce4a) cell_pinb_pane_g

0x9f92,	// (0x00037cb3) grid_highlight_pane_cp01

0x1aa1,	// (0x0002f7c2) list_pinb_item_pane_ParamLimits

0x1aa1,	// (0x0002f7c2) list_pinb_item_pane

0x9f92,	// (0x00037cb3) list_highlight_pane_cp02

0x1ab3,	// (0x0002f7d4) list_pinb_item_pane_g1_ParamLimits

0x1ab3,	// (0x0002f7d4) list_pinb_item_pane_g1

0x1ac0,	// (0x0002f7e1) list_pinb_item_pane_g2_ParamLimits

0x1ac0,	// (0x0002f7e1) list_pinb_item_pane_g2

0x1acc,	// (0x0002f7ed) list_pinb_item_pane_g3_ParamLimits

0x1acc,	// (0x0002f7ed) list_pinb_item_pane_g3

0x1add,	// (0x0002f7fe) list_pinb_item_pane_g4_ParamLimits

0x1add,	// (0x0002f7fe) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0003ce51) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0003ce51) list_pinb_item_pane_g

0x1ae9,	// (0x0002f80a) list_pinb_item_pane_t1_ParamLimits

0x1ae9,	// (0x0002f80a) list_pinb_item_pane_t1

0x03aa,	// (0x0002e0cb) calc_display_pane

0x03d2,	// (0x0002e0f3) calc_paper_pane

0x03f5,	// (0x0002e116) grid_calc_pane

0x9f92,	// (0x00037cb3) bg_list_pane_cp01

0x1b08,	// (0x0002f829) clock_g1

0x1b10,	// (0x0002f831) clock_g2

0x0001,

0xf139,	// (0x0003ce5a) clock_g

0x1b18,	// (0x0002f839) clock_t1_ParamLimits

0x1b18,	// (0x0002f839) clock_t1

0x1b2d,	// (0x0002f84e) clock_t2_ParamLimits

0x1b2d,	// (0x0002f84e) clock_t2

0x1b3f,	// (0x0002f860) clock_t3_ParamLimits

0x1b3f,	// (0x0002f860) clock_t3

0x1b51,	// (0x0002f872) clock_t4_ParamLimits

0x1b51,	// (0x0002f872) clock_t4

0x1b63,	// (0x0002f884) clock_t5_ParamLimits

0x1b63,	// (0x0002f884) clock_t5

0x1b78,	// (0x0002f899) clock_t6_ParamLimits

0x1b78,	// (0x0002f899) clock_t6

0x1b8a,	// (0x0002f8ab) clock_t7_ParamLimits

0x1b8a,	// (0x0002f8ab) clock_t7

0x1b9c,	// (0x0002f8bd) clock_t8_ParamLimits

0x1b9c,	// (0x0002f8bd) clock_t8

0x1bb0,	// (0x0002f8d1) clock_t9_ParamLimits

0x1bb0,	// (0x0002f8d1) clock_t9

0x0008,

0xf13e,	// (0x0003ce5f) clock_t_ParamLimits

0xf13e,	// (0x0003ce5f) clock_t

0xa274,	// (0x00037f95) popup_clock_analogue_window_cp02

0xa274,	// (0x00037f95) popup_clock_digital_window_cp01

0xa27c,	// (0x00037f9d) listscroll_help_pane

0x9f92,	// (0x00037cb3) phob_pre_status_pane

0xa286,	// (0x00037fa7) grid_qdial_pane

0xa1ed,	// (0x00037f0e) listscroll_mce_pane

0xa1ed,	// (0x00037f0e) bg_notes_pane

0xa290,	// (0x00037fb1) list_notes_pane

0x1bc4,	// (0x0002f8e5) scroll_pane_cp06

0xa29e,	// (0x00037fbf) bg_calc_paper_pane

0x1bd8,	// (0x0002f8f9) list_calc_pane

0xa2b2,	// (0x00037fd3) bg_calc_display_pane

0x0423,	// (0x0002e144) calc_display_pane_t1

0x0435,	// (0x0002e156) calc_display_pane_t2

0x1bf2,	// (0x0002f913) calc_display_pane_t3

0x0002,

0xf151,	// (0x0003ce72) calc_display_pane_t

0x0447,	// (0x0002e168) cell_calc_pane_ParamLimits

0x0447,	// (0x0002e168) cell_calc_pane

0xa2be,	// (0x00037fdf) bg_calc_paper_pane_g1

0xa2ca,	// (0x00037feb) bg_calc_paper_pane_g2

0xa2d6,	// (0x00037ff7) bg_calc_paper_pane_g3

0xa2e2,	// (0x00038003) bg_calc_paper_pane_g4

0xa2ee,	// (0x0003800f) bg_calc_paper_pane_g5

0x1c04,	// (0x0002f925) bg_calc_paper_pane_g6

0x1c13,	// (0x0002f934) bg_calc_paper_pane_g7

0x1c22,	// (0x0002f943) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0003ce79) bg_calc_paper_pane_g

0x1c35,	// (0x0002f956) calc_bg_paper_pane_g9

0x1c48,	// (0x0002f969) list_calc_item_pane_ParamLimits

0x1c48,	// (0x0002f969) list_calc_item_pane

0xa2fa,	// (0x0003801b) list_calc_item_pane_g1

0x1c5d,	// (0x0002f97e) list_calc_item_pane_t1_ParamLimits

0x1c5d,	// (0x0002f97e) list_calc_item_pane_t1

0x047c,	// (0x0002e19d) list_calc_item_pane_t2_ParamLimits

0x047c,	// (0x0002e19d) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0003ce8a) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0003ce8a) list_calc_item_pane_t

0xa307,	// (0x00038028) cell_calc_pane_g1

0xa311,	// (0x00038032) grid_highlight_pane_cp02

0x1c6f,	// (0x0002f990) bg_calc_display_pane_g1

0x04ae,	// (0x0002e1cf) bg_calc_display_pane_g2

0x1c78,	// (0x0002f999) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0003ce94) bg_calc_display_pane_g

0x04b8,	// (0x0002e1d9) cell_qdial_pane_ParamLimits

0x04b8,	// (0x0002e1d9) cell_qdial_pane

0x1c81,	// (0x0002f9a2) cell_qdial_pane_g1_ParamLimits

0x1c81,	// (0x0002f9a2) cell_qdial_pane_g1

0x1c97,	// (0x0002f9b8) cell_qdial_pane_g2_ParamLimits

0x1c97,	// (0x0002f9b8) cell_qdial_pane_g2

0xa333,	// (0x00038054) cell_qdial_pane_g3_ParamLimits

0xa333,	// (0x00038054) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0003ce9b) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0003ce9b) cell_qdial_pane_g

0x1cbe,	// (0x0002f9df) cell_qdial_pane_t1_ParamLimits

0x1cbe,	// (0x0002f9df) cell_qdial_pane_t1

0x1cd6,	// (0x0002f9f7) cell_qdial_pane_t2_ParamLimits

0x1cd6,	// (0x0002f9f7) cell_qdial_pane_t2

0x1ce9,	// (0x0002fa0a) cell_qdial_pane_t3_ParamLimits

0x1ce9,	// (0x0002fa0a) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0003cea4) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0003cea4) cell_qdial_pane_t

0x9f92,	// (0x00037cb3) grid_highlight_pane_cp04

0xa33f,	// (0x00038060) thumbnail_qdial_pane_ParamLimits

0xa33f,	// (0x00038060) thumbnail_qdial_pane

0xa39b,	// (0x000380bc) list_help_pane

0xa3a4,	// (0x000380c5) scroll_pane_cp02

0x1cfc,	// (0x0002fa1d) help_list_pane_t1_ParamLimits

0x1cfc,	// (0x0002fa1d) help_list_pane_t1

0x1d19,	// (0x0002fa3a) bg_notes_pane_g2

0x1d21,	// (0x0002fa42) bg_notes_pane_g3

0x1d29,	// (0x0002fa4a) notes_bg_pane_g1

0x1d31,	// (0x0002fa52) notes_bg_pane_g4

0x1d39,	// (0x0002fa5a) notes_bg_pane_g5

0x1d41,	// (0x0002fa62) notes_bg_pane_g6

0x1d49,	// (0x0002fa6a) notes_bg_pane_g7

0x1d51,	// (0x0002fa72) notes_bg_pane_g8

0x1d59,	// (0x0002fa7a) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0003cec2) notes_bg_pane_g

0x1d61,	// (0x0002fa82) list_notes_text_pane_ParamLimits

0x1d61,	// (0x0002fa82) list_notes_text_pane

0xa3ad,	// (0x000380ce) list_notes_text_pane_g1

0x1d76,	// (0x0002fa97) list_notes_text_pane_t1

0x1d84,	// (0x0002faa5) listscroll_cale_week_pane

0x1db0,	// (0x0002fad1) bg_cale_heading_pane

0xa3d0,	// (0x000380f1) bg_cale_pane_cp01

0x1dc8,	// (0x0002fae9) cale_week_corner_pane

0x1de7,	// (0x0002fb08) cale_week_day_heading_pane

0x1e04,	// (0x0002fb25) cale_week_scroll_pane_g1

0x1e17,	// (0x0002fb38) cale_week_scroll_pane_g2

0x1e2f,	// (0x0002fb50) cale_week_scroll_pane_g3

0x1e47,	// (0x0002fb68) cale_week_scroll_pane_g4

0x1e5f,	// (0x0002fb80) cale_week_scroll_pane_g5

0x1e7f,	// (0x0002fba0) cale_week_scroll_pane_g6

0x1e9f,	// (0x0002fbc0) cale_week_scroll_pane_g7

0x1ebf,	// (0x0002fbe0) cale_week_scroll_pane_g8

0x1ee3,	// (0x0002fc04) cale_week_scroll_pane_g9

0x1efb,	// (0x0002fc1c) cale_week_scroll_pane_g10

0x1f13,	// (0x0002fc34) cale_week_scroll_pane_g11

0x1f2b,	// (0x0002fc4c) cale_week_scroll_pane_g12

0x1f43,	// (0x0002fc64) cale_week_scroll_pane_g13

0x1f43,	// (0x0002fc64) cale_week_scroll_pane_g14

0x1f43,	// (0x0002fc64) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0003ced1) cale_week_scroll_pane_g

0x1f7f,	// (0x0002fca0) cale_week_time_pane

0x1fa3,	// (0x0002fcc4) grid_cale_week_pane

0xa3ff,	// (0x00038120) scroll_pane_cp08

0x1fc9,	// (0x0002fcea) cell_cale_week_pane_ParamLimits

0x1fc9,	// (0x0002fcea) cell_cale_week_pane

0x2057,	// (0x0002fd78) cale_week_day_heading_pane_t1

0x209c,	// (0x0002fdbd) cale_week_day_heading_pane_t2

0x20e6,	// (0x0002fe07) cale_week_day_heading_pane_t3

0x2130,	// (0x0002fe51) cale_week_day_heading_pane_t4

0x217a,	// (0x0002fe9b) cale_week_day_heading_pane_t5

0x21cc,	// (0x0002feed) cale_week_day_heading_pane_t6

0x221e,	// (0x0002ff3f) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0003cef2) cale_week_day_heading_pane_t

0xa41c,	// (0x0003813d) bg_cale_side_pane

0x04cc,	// (0x0002e1ed) cale_week_time_pane_t1

0x04e6,	// (0x0002e207) cale_week_time_pane_t2

0x0500,	// (0x0002e221) cale_week_time_pane_t3

0x051a,	// (0x0002e23b) cale_week_time_pane_t4

0x0534,	// (0x0002e255) cale_week_time_pane_t5

0x054e,	// (0x0002e26f) cale_week_time_pane_t6

0x0568,	// (0x0002e289) cale_week_time_pane_t7

0x0582,	// (0x0002e2a3) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0003cf01) cale_week_time_pane_t

0x2263,	// (0x0002ff84) cell_cale_week_pane_g2

0x2282,	// (0x0002ffa3) cell_cale_week_pane_g3_ParamLimits

0x2282,	// (0x0002ffa3) cell_cale_week_pane_g3

0xa42a,	// (0x0003814b) grid_highlight_pane_cp07

0xa432,	// (0x00038153) listscroll_gms_pane

0xa43c,	// (0x0003815d) grid_gms_pane

0xa445,	// (0x00038166) listscroll_gms_pane_g1

0xa44d,	// (0x0003816e) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0003cf12) listscroll_gms_pane_g

0x229a,	// (0x0002ffbb) scroll_pane_cp010

0x22a5,	// (0x0002ffc6) cell_gms_pane_ParamLimits

0x22a5,	// (0x0002ffc6) cell_gms_pane

0x22b8,	// (0x0002ffd9) cell_gms_pane_g1

0xa455,	// (0x00038176) cell_gms_pane_g2

0xa45d,	// (0x0003817e) cell_gms_pane_g3

0xa466,	// (0x00038187) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003cf17) cell_gms_pane_g

0xa46f,	// (0x00038190) grid_highlight_pane_cp09

0x4829,	// (0x0003254a) phob_pre_status_pane_g1

0x4831,	// (0x00032552) phob_pre_status_pane_g2

0x4839,	// (0x0003255a) phob_pre_status_pane_g3

0x4841,	// (0x00032562) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0003d302) phob_pre_status_pane_g

0x4851,	// (0x00032572) phob_pre_status_pane_t1

0x485f,	// (0x00032580) phob_pre_status_pane_t2

0x486f,	// (0x00032590) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0003d30d) phob_pre_status_pane_t

0xa477,	// (0x00038198) bg_list_pane_cp05

0x22c8,	// (0x0002ffe9) grid_vorec_pane

0x22d0,	// (0x0002fff1) vorec_t1

0x22de,	// (0x0002ffff) vorec_t2

0x22ec,	// (0x0003000d) vorec_t3

0x22fa,	// (0x0003001b) vorec_t4

0x1867,	// (0x0002f588) vorec_t5

0x1875,	// (0x0002f596) vorec_t6

0x0004,

0xf1ff,	// (0x0003cf20) vorec_t

0x1883,	// (0x0002f5a4) wait_bar_pane_cp01

0x2316,	// (0x00030037) cell_vorec_pane_ParamLimits

0x2316,	// (0x00030037) cell_vorec_pane

0x2329,	// (0x0003004a) cell_vorec_pane_g1

0x9f92,	// (0x00037cb3) grid_highlight_pane_cp05

0x2348,	// (0x00030069) cams_zoom_pane

0x2357,	// (0x00030078) image_vga_pane

0x2371,	// (0x00030092) main_camera_pane_g1

0x2383,	// (0x000300a4) main_camera_pane_g2

0x2393,	// (0x000300b4) main_camera_pane_g3

0x23a3,	// (0x000300c4) main_camera_pane_g4

0x23b3,	// (0x000300d4) main_camera_pane_g5

0x23c3,	// (0x000300e4) main_camera_pane_g6

0x23d5,	// (0x000300f6) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003cf2b) main_camera_pane_g

0x23e5,	// (0x00030106) main_camera_pane_t1

0x23fb,	// (0x0003011c) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003cf3c) main_camera_pane_t

0x2435,	// (0x00030156) cams_zoom_pane_cp_ParamLimits

0x2435,	// (0x00030156) cams_zoom_pane_cp

0x245d,	// (0x0003017e) image_cif_pane_ParamLimits

0x245d,	// (0x0003017e) image_cif_pane

0x2493,	// (0x000301b4) image_subqcif_pane

0x249b,	// (0x000301bc) main_video_pane_g1_ParamLimits

0x249b,	// (0x000301bc) main_video_pane_g1

0x24bf,	// (0x000301e0) main_video_pane_g2_ParamLimits

0x24bf,	// (0x000301e0) main_video_pane_g2

0x24f3,	// (0x00030214) main_video_pane_g3_ParamLimits

0x24f3,	// (0x00030214) main_video_pane_g3

0x2521,	// (0x00030242) main_video_pane_g4_ParamLimits

0x2521,	// (0x00030242) main_video_pane_g4

0x254f,	// (0x00030270) main_video_pane_g5_ParamLimits

0x254f,	// (0x00030270) main_video_pane_g5

0xa48b,	// (0x000381ac) main_video_pane_g6_ParamLimits

0xa48b,	// (0x000381ac) main_video_pane_g6

0x0006,

0xf220,	// (0x0003cf41) main_video_pane_g_ParamLimits

0xf220,	// (0x0003cf41) main_video_pane_g

0x2578,	// (0x00030299) main_video_pane_t1_ParamLimits

0x2578,	// (0x00030299) main_video_pane_t1

0xa4a5,	// (0x000381c6) cams_zoom_pane_g1

0xa4ae,	// (0x000381cf) cams_zoom_pane_g2

0xa4b7,	// (0x000381d8) cams_zoom_pane_g3

0xa4c0,	// (0x000381e1) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003cf50) cams_zoom_pane_g

0x25d5,	// (0x000302f6) grid_cams_pane

0x25ef,	// (0x00030310) linegrid_cams_pane

0x2603,	// (0x00030324) cell_cams_pane_ParamLimits

0x2603,	// (0x00030324) cell_cams_pane

0xa4c9,	// (0x000381ea) cams_burst_image_pane

0xa4d1,	// (0x000381f2) cell_cams_pane_g1

0x9f92,	// (0x00037cb3) grid_highlight_pane_cp03

0xa307,	// (0x00038028) mp_bg_pane_g1

0x9f92,	// (0x00037cb3) bg_list_pane_cp03

0xc311,	// (0x0003a032) bg_mp_pane

0xc319,	// (0x0003a03a) grid_mp_pane

0xc321,	// (0x0003a042) media_player_g1

0xc329,	// (0x0003a04a) media_player_t1

0xc337,	// (0x0003a058) media_player_t2

0xc345,	// (0x0003a066) media_player_t3

0xc353,	// (0x0003a074) media_player_t4

0xc361,	// (0x0003a082) media_player_t5

0xc36f,	// (0x0003a090) media_player_t6

0xc37d,	// (0x0003a09e) media_player_t7

0x0006,

0xf5cb,	// (0x0003d2ec) media_player_t

0xc38b,	// (0x0003a0ac) wait_bar_pane_cp02

0xf5b0,	// (0x0003d2d1) main_usb_pane_t

0x4820,	// (0x00032541) cell_mp_pane

0xa307,	// (0x00038028) cell_mp_pane_g1

0x9f92,	// (0x00037cb3) grid_highlight_pane_cp06

0xa4d9,	// (0x000381fa) grid_skin_colour_pane

0xa4e1,	// (0x00038202) list_highlight_pane_cp03

0x273a,	// (0x0003045b) skin_g1

0xa4e9,	// (0x0003820a) skin_t1

0xa4f8,	// (0x00038219) skin_t2

0x0001,

0xf264,	// (0x0003cf85) skin_t

0x2742,	// (0x00030463) cell_skin_colour_pane_ParamLimits

0x2742,	// (0x00030463) cell_skin_colour_pane

0xa506,	// (0x00038227) cell_skin_colour_pane_g1

0x27bb,	// (0x000304dc) call_video_g1_ParamLimits

0x27bb,	// (0x000304dc) call_video_g1

0x27d7,	// (0x000304f8) call_video_g2_ParamLimits

0x27d7,	// (0x000304f8) call_video_g2

0x0001,

0xf269,	// (0x0003cf8a) call_video_g_ParamLimits

0xf269,	// (0x0003cf8a) call_video_g

0x2829,	// (0x0003054a) call_video_uplink_pane_cp1_ParamLimits

0x2829,	// (0x0003054a) call_video_uplink_pane_cp1

0xa518,	// (0x00038239) call_video_uplink_pane_cp2

0x28c8,	// (0x000305e9) video_down_crop_pane_ParamLimits

0x28c8,	// (0x000305e9) video_down_crop_pane

0x29bf,	// (0x000306e0) video_down_pane_ParamLimits

0x29bf,	// (0x000306e0) video_down_pane

0xa520,	// (0x00038241) video_down_subqcif_pane_ParamLimits

0xa520,	// (0x00038241) video_down_subqcif_pane

0xa538,	// (0x00038259) video_down_subqcif_pane_cp_ParamLimits

0xa538,	// (0x00038259) video_down_subqcif_pane_cp

0xa55e,	// (0x0003827f) im_reading_pane_ParamLimits

0xa55e,	// (0x0003827f) im_reading_pane

0x2acd,	// (0x000307ee) im_writing_pane_ParamLimits

0x2acd,	// (0x000307ee) im_writing_pane

0x2ae3,	// (0x00030804) im_reading_pane_t1

0xa578,	// (0x00038299) list_im_pane

0xa589,	// (0x000382aa) scroll_pane_cp07

0x2b1c,	// (0x0003083d) im_writing_pane_t1_ParamLimits

0x2b1c,	// (0x0003083d) im_writing_pane_t1

0xa5a2,	// (0x000382c3) im_writing_pane_t2_ParamLimits

0xa5a2,	// (0x000382c3) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003cf94) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003cf94) im_writing_pane_t

0x9f92,	// (0x00037cb3) input_focus_pane_cp04

0x9f92,	// (0x00037cb3) input_focus_pane_cp05

0x2b31,	// (0x00030852) list_im_single_pane_ParamLimits

0x2b31,	// (0x00030852) list_im_single_pane

0x2b45,	// (0x00030866) list_single_im_pane_t1

0x47e0,	// (0x00032501) blid_accuracy_pane

0x47e8,	// (0x00032509) blid_compass_pane

0x47f2,	// (0x00032513) main_location_t1

0x4802,	// (0x00032523) main_location_t2

0x4812,	// (0x00032533) main_location_t3

0x0002,

0xf5da,	// (0x0003d2fb) main_location_t

0x9f92,	// (0x00037cb3) aid_levels_location

0xa307,	// (0x00038028) blid_accuracy_pane_g1

0xa307,	// (0x00038028) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003cff6) blid_accuracy_pane_g

0xa5ea,	// (0x0003830b) wml_content_pane

0xa628,	// (0x00038349) wml_button_pane_ParamLimits

0xa628,	// (0x00038349) wml_button_pane

0x2b54,	// (0x00030875) wml_list_single_large_pane_ParamLimits

0x2b54,	// (0x00030875) wml_list_single_large_pane

0x2b69,	// (0x0003088a) wml_list_single_medium_pane_ParamLimits

0x2b69,	// (0x0003088a) wml_list_single_medium_pane

0x2b7f,	// (0x000308a0) wml_list_single_small_pane_ParamLimits

0x2b7f,	// (0x000308a0) wml_list_single_small_pane

0xa63c,	// (0x0003835d) wml_selection_box_pane_ParamLimits

0xa63c,	// (0x0003835d) wml_selection_box_pane

0xa64f,	// (0x00038370) wml_list_single_pane_t1

0xa65e,	// (0x0003837f) wml_list_single_medium_pane_t1

0xa66d,	// (0x0003838e) wml_list_single_large_pane_t1

0xa67c,	// (0x0003839d) input_focus_pane_cp02_ParamLimits

0xa67c,	// (0x0003839d) input_focus_pane_cp02

0xa68f,	// (0x000383b0) wml_selection_box_pane_g1

0xa698,	// (0x000383b9) wml_selection_box_pane_t1_ParamLimits

0xa698,	// (0x000383b9) wml_selection_box_pane_t1

0xa1ed,	// (0x00037f0e) bg_wml_button_pane_ParamLimits

0xa1ed,	// (0x00037f0e) bg_wml_button_pane

0xa6b0,	// (0x000383d1) wml_button_pane_g1

0xa6b8,	// (0x000383d9) wml_button_pane_t1

0xa6b0,	// (0x000383d1) wml_button_bg_pane_g1

0xa6c8,	// (0x000383e9) wml_button_bg_pane_g2

0xa6d0,	// (0x000383f1) wml_button_bg_pane_g3

0xa6d8,	// (0x000383f9) wml_button_bg_pane_g4

0xa6e0,	// (0x00038401) wml_button_bg_pane_g5

0xa6e8,	// (0x00038409) wml_button_bg_pane_g6

0xa6f0,	// (0x00038411) wml_button_bg_pane_g7

0xa6f8,	// (0x00038419) wml_button_bg_pane_g8

0xa700,	// (0x00038421) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003cf99) wml_button_bg_pane_g

0x2b97,	// (0x000308b8) bg_list_pane_cp02

0xa7a4,	// (0x000384c5) mce_header_pane_ParamLimits

0xa7a4,	// (0x000384c5) mce_header_pane

0xa7ba,	// (0x000384db) mce_icon_pane

0xa7ba,	// (0x000384db) mce_image_pane

0xa7c3,	// (0x000384e4) mce_text_pane_ParamLimits

0xa7c3,	// (0x000384e4) mce_text_pane

0x2b9f,	// (0x000308c0) scroll_pane_cp03

0xa620,	// (0x00038341) scroll_pane_cp04

0xa7d6,	// (0x000384f7) scroll_pane_cp05_ParamLimits

0xa7d6,	// (0x000384f7) scroll_pane_cp05

0x2ba9,	// (0x000308ca) mce_header_field_pane_ParamLimits

0x2ba9,	// (0x000308ca) mce_header_field_pane

0x2bc0,	// (0x000308e1) mce_header_field_pane_2_ParamLimits

0x2bc0,	// (0x000308e1) mce_header_field_pane_2

0x2bd6,	// (0x000308f7) mce_header_field_pane_3

0x2bde,	// (0x000308ff) list_single_mce_message_pane_ParamLimits

0x2bde,	// (0x000308ff) list_single_mce_message_pane

0x2bf3,	// (0x00030914) list_single_mce_smart_pane_ParamLimits

0x2bf3,	// (0x00030914) list_single_mce_smart_pane

0xa7e2,	// (0x00038503) input_focus_pane_cp03

0xa7eb,	// (0x0003850c) list_header_data_pane

0x2c13,	// (0x00030934) mce_header_field_pane_t1

0x2c23,	// (0x00030944) list_single_mce_header_pane_ParamLimits

0x2c23,	// (0x00030944) list_single_mce_header_pane

0xa7f3,	// (0x00038514) list_single_mce_header_pane_t1

0xa802,	// (0x00038523) list_single_mce_message_pane_g1

0xa80a,	// (0x0003852b) list_single_mce_message_pane_t1

0x2c5d,	// (0x0003097e) bg_cale_heading_pane_cp01_ParamLimits

0x2c5d,	// (0x0003097e) bg_cale_heading_pane_cp01

0xa818,	// (0x00038539) bg_cale_pane_cp02_ParamLimits

0xa818,	// (0x00038539) bg_cale_pane_cp02

0x2c8c,	// (0x000309ad) cale_month_corner_pane

0x2cab,	// (0x000309cc) cale_month_day_heading_pane_ParamLimits

0x2cab,	// (0x000309cc) cale_month_day_heading_pane

0x2cf2,	// (0x00030a13) cale_month_pane_g1_ParamLimits

0x2cf2,	// (0x00030a13) cale_month_pane_g1

0x2d16,	// (0x00030a37) cale_month_pane_g2_ParamLimits

0x2d16,	// (0x00030a37) cale_month_pane_g2

0x2d46,	// (0x00030a67) cale_month_pane_g3_ParamLimits

0x2d46,	// (0x00030a67) cale_month_pane_g3

0x2d82,	// (0x00030aa3) cale_month_pane_g4_ParamLimits

0x2d82,	// (0x00030aa3) cale_month_pane_g4

0x2dbe,	// (0x00030adf) cale_month_pane_g5_ParamLimits

0x2dbe,	// (0x00030adf) cale_month_pane_g5

0x2e06,	// (0x00030b27) cale_month_pane_g6_ParamLimits

0x2e06,	// (0x00030b27) cale_month_pane_g6

0x2e52,	// (0x00030b73) cale_month_pane_g7_ParamLimits

0x2e52,	// (0x00030b73) cale_month_pane_g7

0x2ea6,	// (0x00030bc7) cale_month_pane_g8_ParamLimits

0x2ea6,	// (0x00030bc7) cale_month_pane_g8

0x2efa,	// (0x00030c1b) cale_month_pane_g9_ParamLimits

0x2efa,	// (0x00030c1b) cale_month_pane_g9

0x2f4c,	// (0x00030c6d) cale_month_pane_g10_ParamLimits

0x2f4c,	// (0x00030c6d) cale_month_pane_g10

0x2f9e,	// (0x00030cbf) cale_month_pane_g11_ParamLimits

0x2f9e,	// (0x00030cbf) cale_month_pane_g11

0x2ff0,	// (0x00030d11) cale_month_pane_g12_ParamLimits

0x2ff0,	// (0x00030d11) cale_month_pane_g12

0x3042,	// (0x00030d63) cale_month_pane_g13_ParamLimits

0x3042,	// (0x00030d63) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003cfac) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003cfac) cale_month_pane_g

0x3094,	// (0x00030db5) cale_month_week_pane

0x30b8,	// (0x00030dd9) grid_cale_month_pane_ParamLimits

0x30b8,	// (0x00030dd9) grid_cale_month_pane

0x30f6,	// (0x00030e17) cale_month_day_heading_pane_t1

0x317c,	// (0x00030e9d) cale_month_day_heading_pane_t2

0x320d,	// (0x00030f2e) cale_month_day_heading_pane_t3

0x329e,	// (0x00030fbf) cale_month_day_heading_pane_t4

0x3333,	// (0x00031054) cale_month_day_heading_pane_t5

0x33d4,	// (0x000310f5) cale_month_day_heading_pane_t6

0x3475,	// (0x00031196) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003cfc7) cale_month_day_heading_pane_t

0xa41c,	// (0x0003813d) bg_cale_side_pane_cp01

0x351e,	// (0x0003123f) cale_month_week_pane_t1

0x3537,	// (0x00031258) cale_month_week_pane_t2

0x3550,	// (0x00031271) cale_month_week_pane_t3

0x3569,	// (0x0003128a) cale_month_week_pane_t4

0x3582,	// (0x000312a3) cale_month_week_pane_t5

0x359b,	// (0x000312bc) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003cfd6) cale_month_week_pane_t

0x35b4,	// (0x000312d5) cell_cale_month_pane_ParamLimits

0x35b4,	// (0x000312d5) cell_cale_month_pane

0x3708,	// (0x00031429) cell_cale_month_pane_g1

0x05a2,	// (0x0002e2c3) cell_cale_month_pane_t1_ParamLimits

0x05a2,	// (0x0002e2c3) cell_cale_month_pane_t1

0xa42a,	// (0x0003814b) grid_highlight_pane_cp08

0xa307,	// (0x00038028) main_smil_g1

0x3714,	// (0x00031435) smil_status_pane

0xa857,	// (0x00038578) smil_text_pane

0xc231,	// (0x00039f52) bg_popup_call3_rect_pane_g8

0xc239,	// (0x00039f5a) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d28f) bg_popup_call3_rect_pane_g

0xc480,	// (0x0003a1a1) smil_status_volume_pane_g1

0xa861,	// (0x00038582) smil_status_pane_t1

0x4b73,	// (0x00032894) volume_smil_pane

0xa878,	// (0x00038599) list_smil_text_pane

0x3727,	// (0x00031448) scroll_pane_cp011

0x3732,	// (0x00031453) smil_text_list_pane_t1_ParamLimits

0x3732,	// (0x00031453) smil_text_list_pane_t1

0x376e,	// (0x0003148f) aid_volume_smil_ParamLimits

0x376e,	// (0x0003148f) aid_volume_smil

0xa307,	// (0x00038028) smil_volume_pane_g1

0xa307,	// (0x00038028) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003cff6) smil_volume_pane_g

0x1d84,	// (0x0002faa5) listscroll_cale_day_pane

0xa882,	// (0x000385a3) bg_cale_pane

0xa89a,	// (0x000385bb) list_cale_pane

0xa8bd,	// (0x000385de) scroll_pane_cp09

0xa8ce,	// (0x000385ef) cale_bg_pane_g1

0xa8d6,	// (0x000385f7) cale_bg_pane_g2

0xa8de,	// (0x000385ff) cale_bg_pane_g3

0xa8e6,	// (0x00038607) cale_bg_pane_g4

0xa8ee,	// (0x0003860f) cale_bg_pane_g5

0xa8f6,	// (0x00038617) cale_bg_pane_g6

0xa8fe,	// (0x0003861f) cale_bg_pane_g7

0xa906,	// (0x00038627) cale_bg_pane_g8

0xa90e,	// (0x0003862f) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003cffb) cale_bg_pane_g

0x3798,	// (0x000314b9) list_cale_time_pane_ParamLimits

0x3798,	// (0x000314b9) list_cale_time_pane

0xa916,	// (0x00038637) list_cale_time_pane_g1_ParamLimits

0xa916,	// (0x00038637) list_cale_time_pane_g1

0xa922,	// (0x00038643) list_cale_time_pane_g2_ParamLimits

0xa922,	// (0x00038643) list_cale_time_pane_g2

0x37ad,	// (0x000314ce) list_cale_time_pane_g3_ParamLimits

0x37ad,	// (0x000314ce) list_cale_time_pane_g3

0x37bb,	// (0x000314dc) list_cale_time_pane_g4_ParamLimits

0x37bb,	// (0x000314dc) list_cale_time_pane_g4

0x37c9,	// (0x000314ea) list_cale_time_pane_g5_ParamLimits

0x37c9,	// (0x000314ea) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003d00e) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003d00e) list_cale_time_pane_g

0xa93c,	// (0x0003865d) list_cale_time_pane_t1_ParamLimits

0xa93c,	// (0x0003865d) list_cale_time_pane_t1

0xa964,	// (0x00038685) list_cale_time_pane_t2_ParamLimits

0xa964,	// (0x00038685) list_cale_time_pane_t2

0x3b9f,	// (0x000318c0) aid_blid_cardinal_pane

0x3bdd,	// (0x000318fe) compass_pane_t4

0xa98c,	// (0x000386ad) list_cale_time_pane_t4_ParamLimits

0xa98c,	// (0x000386ad) list_cale_time_pane_t4

0x3beb,	// (0x0003190c) compass_pane_t5

0x3bf9,	// (0x0003191a) compass_pane_t6

0x3c07,	// (0x00031928) compass_pane_t7

0xae3b,	// (0x00038b5c) navi_pane_cc_t1

0xb018,	// (0x00038d39) aid_phob_thumbnail_center_pane

0x41f8,	// (0x00031f19) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003d01b) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003d01b) list_cale_time_pane_t

0x9be9,	// (0x0003790a) bg_popup_window_pane_cp02_ParamLimits

0x9be9,	// (0x0003790a) bg_popup_window_pane_cp02

0xa9b4,	// (0x000386d5) heading_pane_cp01_ParamLimits

0xa9b4,	// (0x000386d5) heading_pane_cp01

0xa9c0,	// (0x000386e1) loc_req_pane_ParamLimits

0xa9c0,	// (0x000386e1) loc_req_pane

0xa9d0,	// (0x000386f1) loc_type_pane_ParamLimits

0xa9d0,	// (0x000386f1) loc_type_pane

0xa9e2,	// (0x00038703) loc_type_pane_t1_ParamLimits

0xa9e2,	// (0x00038703) loc_type_pane_t1

0xa9f4,	// (0x00038715) loc_type_pane_t2_ParamLimits

0xa9f4,	// (0x00038715) loc_type_pane_t2

0xaa06,	// (0x00038727) loc_type_pane_t3_ParamLimits

0xaa06,	// (0x00038727) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003d022) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003d022) loc_type_pane_t

0xaa18,	// (0x00038739) list_loc_req_pane

0xaa22,	// (0x00038743) scroll_pane_cp012

0x37d7,	// (0x000314f8) list_single_loc_request_popup_menu_pane_ParamLimits

0x37d7,	// (0x000314f8) list_single_loc_request_popup_menu_pane

0xaa2d,	// (0x0003874e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa2d,	// (0x0003874e) list_single_loc_request_popup_menu_pane_g1

0xaa39,	// (0x0003875a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa39,	// (0x0003875a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003d029) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003d029) list_single_loc_request_popup_menu_pane_g

0xaa45,	// (0x00038766) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa45,	// (0x00038766) list_single_loc_request_popup_menu_pane_t1

0xa1ed,	// (0x00037f0e) bg_popup_window_pane_cp03_ParamLimits

0xa1ed,	// (0x00037f0e) bg_popup_window_pane_cp03

0xaa5b,	// (0x0003877c) heading_loc_req_pane_ParamLimits

0xaa5b,	// (0x0003877c) heading_loc_req_pane

0x37e4,	// (0x00031505) popup_dyc_status_message_window_g1_ParamLimits

0x37e4,	// (0x00031505) popup_dyc_status_message_window_g1

0x37f8,	// (0x00031519) popup_dyc_status_message_window_t1_ParamLimits

0x37f8,	// (0x00031519) popup_dyc_status_message_window_t1

0x380d,	// (0x0003152e) popup_dyc_status_message_window_t2_ParamLimits

0x380d,	// (0x0003152e) popup_dyc_status_message_window_t2

0x3822,	// (0x00031543) popup_dyc_status_message_window_t3_ParamLimits

0x3822,	// (0x00031543) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003d02e) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003d02e) popup_dyc_status_message_window_t

0x9f92,	// (0x00037cb3) bg_heading_pane_cp01

0xaa67,	// (0x00038788) heading_loc_req_pane_g1

0xaa6f,	// (0x00038790) heading_loc_req_pane_g2

0xaa77,	// (0x00038798) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003d035) heading_loc_req_pane_g

0xaa7f,	// (0x000387a0) heading_loc_req_pane_t1

0xaa8e,	// (0x000387af) bg_popup_sub_pane_cp01_ParamLimits

0xaa8e,	// (0x000387af) bg_popup_sub_pane_cp01

0xaa9c,	// (0x000387bd) popup_cale_events_window_g1_ParamLimits

0xaa9c,	// (0x000387bd) popup_cale_events_window_g1

0xaabc,	// (0x000387dd) popup_cale_events_window_g2_ParamLimits

0xaabc,	// (0x000387dd) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003d069) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003d069) popup_cale_events_window_g

0xaadc,	// (0x000387fd) popup_cale_events_window_t1_ParamLimits

0xaadc,	// (0x000387fd) popup_cale_events_window_t1

0xaaee,	// (0x0003880f) popup_cale_events_window_t2_ParamLimits

0xaaee,	// (0x0003880f) popup_cale_events_window_t2

0xab2c,	// (0x0003884d) popup_cale_events_window_t3_ParamLimits

0xab2c,	// (0x0003884d) popup_cale_events_window_t3

0xab66,	// (0x00038887) popup_cale_events_window_t4_ParamLimits

0xab66,	// (0x00038887) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003d06e) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003d06e) popup_cale_events_window_t

0x3927,	// (0x00031648) call_type_pane

0x3937,	// (0x00031658) popup_call_status_window_g1

0x394b,	// (0x0003166c) popup_call_status_window_g2

0x395f,	// (0x00031680) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003d077) popup_call_status_window_g

0xab9c,	// (0x000388bd) call_type_pane_g1

0xaba5,	// (0x000388c6) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003d07e) call_type_pane_g

0x9f92,	// (0x00037cb3) bg_popup_sub_pane_cp02

0xabae,	// (0x000388cf) listscroll_popup_wml_pane

0xabb6,	// (0x000388d7) list_wml_pane

0xabc0,	// (0x000388e1) scroll_pane_cp013

0xabcb,	// (0x000388ec) list_single_graphic_popup_wml_pane_ParamLimits

0xabcb,	// (0x000388ec) list_single_graphic_popup_wml_pane

0xa307,	// (0x00038028) list_single_graphic_popup_wml_pane_g1

0xabdf,	// (0x00038900) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003d083) list_single_graphic_popup_wml_pane_g

0xabe7,	// (0x00038908) list_single_graphic_popup_wml_pane_t1

0xabfd,	// (0x0003891e) aid_call_pane

0xa1e5,	// (0x00037f06) popup_clock_analogue_window_g1

0xa1e5,	// (0x00037f06) popup_clock_analogue_window_g2

0x396e,	// (0x0003168f) popup_clock_analogue_window_g3

0x396e,	// (0x0003168f) popup_clock_analogue_window_g4

0xa307,	// (0x00038028) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003d088) popup_clock_analogue_window_g

0x3976,	// (0x00031697) popup_clock_analogue_window_t1

0x3984,	// (0x000316a5) clock_digital_number_pane_ParamLimits

0x3984,	// (0x000316a5) clock_digital_number_pane

0x3990,	// (0x000316b1) clock_digital_number_pane_cp02_ParamLimits

0x3990,	// (0x000316b1) clock_digital_number_pane_cp02

0x399c,	// (0x000316bd) clock_digital_number_pane_cp03_ParamLimits

0x399c,	// (0x000316bd) clock_digital_number_pane_cp03

0x39a8,	// (0x000316c9) clock_digital_number_pane_cp04_ParamLimits

0x39a8,	// (0x000316c9) clock_digital_number_pane_cp04

0x39b8,	// (0x000316d9) clock_digital_separator_pane_ParamLimits

0x39b8,	// (0x000316d9) clock_digital_separator_pane

0x39c4,	// (0x000316e5) popup_clock_digital_window_t1

0xa307,	// (0x00038028) clock_digital_number_pane_g1

0xa307,	// (0x00038028) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003cff6) clock_digital_number_pane_g

0xa307,	// (0x00038028) clock_digital_separator_pane_g1

0xa307,	// (0x00038028) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003cff6) clock_digital_separator_pane_g

0x9f92,	// (0x00037cb3) bg_popup_window_pane_cp04

0xac05,	// (0x00038926) heading_pane_cp03

0xac0d,	// (0x0003892e) listscroll_popup_gms_pane

0xac15,	// (0x00038936) grid_large_graphic_popup_pane

0xac1f,	// (0x00038940) listscroll_popup_gms_pane_g1

0xac27,	// (0x00038948) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003d093) listscroll_popup_gms_pane_g

0xa620,	// (0x00038341) scroll_pane_cp014

0x39e1,	// (0x00031702) cell_large_graphic_popup_pane_ParamLimits

0x39e1,	// (0x00031702) cell_large_graphic_popup_pane

0x39f9,	// (0x0003171a) cell_large_graphic_popup_pane_g1_ParamLimits

0x39f9,	// (0x0003171a) cell_large_graphic_popup_pane_g1

0xac2f,	// (0x00038950) cell_large_graphic_popup_pane_g2_ParamLimits

0xac2f,	// (0x00038950) cell_large_graphic_popup_pane_g2

0xac3b,	// (0x0003895c) cell_large_graphic_popup_pane_g3_ParamLimits

0xac3b,	// (0x0003895c) cell_large_graphic_popup_pane_g3

0xac48,	// (0x00038969) cell_large_graphic_popup_pane_g4_ParamLimits

0xac48,	// (0x00038969) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003d098) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003d098) cell_large_graphic_popup_pane_g

0xac58,	// (0x00038979) grid_highlight_pane_cp010

0xa307,	// (0x00038028) bg_popup_call_pane_g1

0xac62,	// (0x00038983) list_single_graphic_popup_conf_pane_ParamLimits

0xac62,	// (0x00038983) list_single_graphic_popup_conf_pane

0xac75,	// (0x00038996) list_highlight_pane_cp01

0xac7e,	// (0x0003899f) list_single_graphic_popup_conf_pane_g1

0xac86,	// (0x000389a7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003d0a1) list_single_graphic_popup_conf_pane_g

0xac8e,	// (0x000389af) list_single_graphic_popup_conf_pane_t1

0xac9c,	// (0x000389bd) linegrid_cams_pane_g1

0x3a05,	// (0x00031726) linegrid_cams_pane_g2

0xa45d,	// (0x0003817e) linegrid_cams_pane_g3

0xaca5,	// (0x000389c6) linegrid_cams_pane_g4

0x3a0e,	// (0x0003172f) linegrid_cams_pane_g5

0x3a17,	// (0x00031738) linegrid_cams_pane_g6

0xa466,	// (0x00038187) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003d0a6) linegrid_cams_pane_g

0xacae,	// (0x000389cf) popup_clock_analogue_window

0xacae,	// (0x000389cf) popup_clock_digital_window

0x9f92,	// (0x00037cb3) popup_phob_thumbnail_window

0xa307,	// (0x00038028) call_video_uplink_pane_g1

0xacb7,	// (0x000389d8) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003d0b5) call_video_uplink_pane_g

0xacbf,	// (0x000389e0) video_uplink_pane

0xacc7,	// (0x000389e8) mce_image_pane_g1

0x3a22,	// (0x00031743) mce_image_pane_g2

0x3a2c,	// (0x0003174d) mce_image_pane_g3

0x3a34,	// (0x00031755) mce_image_pane_g4

0x3a3c,	// (0x0003175d) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003d0ba) mce_image_pane_g

0xacd1,	// (0x000389f2) control_top_pane_stacon_cp01_ParamLimits

0xacd1,	// (0x000389f2) control_top_pane_stacon_cp01

0xace5,	// (0x00038a06) uni_indicator_pane_stacon_cp01_ParamLimits

0xace5,	// (0x00038a06) uni_indicator_pane_stacon_cp01

0xacf6,	// (0x00038a17) bg_popup_sub_pane_cp03

0xad00,	// (0x00038a21) chi_dic_find_pane

0x3a44,	// (0x00031765) listscroll_chi_dic_pane

0xad08,	// (0x00038a29) main_pane_chidic_g1

0xad10,	// (0x00038a31) chi_dic_find_pane_t1

0xad1e,	// (0x00038a3f) find_chidic_pane

0xad27,	// (0x00038a48) chi_dic_list_pane_ParamLimits

0xad27,	// (0x00038a48) chi_dic_list_pane

0xad38,	// (0x00038a59) scroll_pane_cp020

0xad40,	// (0x00038a61) find_chidic_pane_t1

0x9f92,	// (0x00037cb3) input_focus_pane_cp06

0x3a58,	// (0x00031779) list_chi_dic_pane_ParamLimits

0x3a58,	// (0x00031779) list_chi_dic_pane

0x3a6a,	// (0x0003178b) list_chi_dic_pane_t1_ParamLimits

0x3a6a,	// (0x0003178b) list_chi_dic_pane_t1

0x9f92,	// (0x00037cb3) list_highlight_pane_cp020

0xad4f,	// (0x00038a70) bg_cale_heading_pane_g1

0x3a7d,	// (0x0003179e) bg_cale_heading_pane_g2

0x3a85,	// (0x000317a6) bg_cale_heading_pane_g3

0x3a8d,	// (0x000317ae) bg_cale_heading_pane_g4

0x3a97,	// (0x000317b8) bg_cale_heading_pane_g5

0x3aa1,	// (0x000317c2) bg_cale_heading_pane_g6

0x3aa9,	// (0x000317ca) bg_cale_heading_pane_g7

0x3ab1,	// (0x000317d2) bg_cale_heading_pane_g8

0x3abb,	// (0x000317dc) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003d0c5) bg_cale_heading_pane_g

0xad4f,	// (0x00038a70) bg_cale_side_pane_g1

0x3ac5,	// (0x000317e6) bg_cale_side_pane_g2

0x3acd,	// (0x000317ee) bg_cale_side_pane_g3

0x3ad5,	// (0x000317f6) bg_cale_side_pane_g4

0x3add,	// (0x000317fe) bg_cale_side_pane_g5

0x3ae5,	// (0x00031806) bg_cale_side_pane_g6

0x3aed,	// (0x0003180e) bg_cale_side_pane_g7

0x3af5,	// (0x00031816) bg_cale_side_pane_g8

0x3afd,	// (0x0003181e) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003d0d8) bg_cale_side_pane_g

0x3b05,	// (0x00031826) popup_call_status_window_ParamLimits

0x3b05,	// (0x00031826) popup_call_status_window

0xad57,	// (0x00038a78) stacon_top_pane

0xad5f,	// (0x00038a80) status_pane_ParamLimits

0xad5f,	// (0x00038a80) status_pane

0xad74,	// (0x00038a95) status_small_pane

0xad7c,	// (0x00038a9d) control_pane

0x9f92,	// (0x00037cb3) stacon_bottom_pane

0xad84,	// (0x00038aa5) list_single_mce_smart_pane_t1_ParamLimits

0xad84,	// (0x00038aa5) list_single_mce_smart_pane_t1

0xad97,	// (0x00038ab8) list_single_mce_smart_pane_t2_ParamLimits

0xad97,	// (0x00038ab8) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003d0eb) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003d0eb) list_single_mce_smart_pane_t

0x3b4e,	// (0x0003186f) compass_pane

0x3b57,	// (0x00031878) main_location2_pane_t1

0x3b69,	// (0x0003188a) main_location2_pane_t2

0x3b7b,	// (0x0003189c) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003d0f0) main_location2_pane_t

0xadb6,	// (0x00038ad7) compass_pane_g1_ParamLimits

0xadb6,	// (0x00038ad7) compass_pane_g1

0x3bbf,	// (0x000318e0) compass_pane_t1

0x3bce,	// (0x000318ef) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003d0f9) compass_pane_t

0x3c15,	// (0x00031936) text_secondary_cp61

0xae32,	// (0x00038b53) navi_pane_cams_g5

0xaeae,	// (0x00038bcf) navi_pane_im_t1

0xaebc,	// (0x00038bdd) navi_pane_mp_g1_ParamLimits

0xaebc,	// (0x00038bdd) navi_pane_mp_g1

0xaed0,	// (0x00038bf1) navi_pane_mp_g2_ParamLimits

0xaed0,	// (0x00038bf1) navi_pane_mp_g2

0xaedc,	// (0x00038bfd) navi_pane_mp_g3_ParamLimits

0xaedc,	// (0x00038bfd) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003d10d) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003d10d) navi_pane_mp_g

0xaee8,	// (0x00038c09) navi_pane_mp_t1

0xaef6,	// (0x00038c17) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003d114) navi_pane_mp_t

0xaf61,	// (0x00038c82) navi_pane_vt_g1

0xaee8,	// (0x00038c09) navi_pane_vt_t1

0xaf69,	// (0x00038c8a) navi_slider_pane

0xa477,	// (0x00038198) zooming_pane

0xaf79,	// (0x00038c9a) navi_slider_pane_g1

0x3c66,	// (0x00031987) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003d11b) navi_slider_pane_g

0xaf9d,	// (0x00038cbe) aid_levels_zoom

0xafa5,	// (0x00038cc6) zooming_pane_g1

0xafad,	// (0x00038cce) zooming_pane_g2

0xafad,	// (0x00038cce) zooming_pane_g3

0x0002,

0xf409,	// (0x0003d12a) zooming_pane_g

0xafb5,	// (0x00038cd6) level_10_zoom

0xafbe,	// (0x00038cdf) level_11_zoom

0xafc7,	// (0x00038ce8) level_1_zoom

0xafd0,	// (0x00038cf1) level_2_zoom

0xafd9,	// (0x00038cfa) level_3_zoom

0xafe2,	// (0x00038d03) level_4_zoom

0xafeb,	// (0x00038d0c) level_5_zoom

0xaff4,	// (0x00038d15) level_6_zoom

0xaffd,	// (0x00038d1e) level_7_zoom

0xb006,	// (0x00038d27) level_8_zoom

0xb00f,	// (0x00038d30) level_9_zoom

0xb020,	// (0x00038d41) popup_phob_thumbnail_window_g1

0xb028,	// (0x00038d49) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003d131) popup_phob_thumbnail_window_g

0xc393,	// (0x0003a0b4) level_1_location

0xc39b,	// (0x0003a0bc) level_2_location

0xc3a3,	// (0x0003a0c4) level_3_location

0xc3ab,	// (0x0003a0cc) level_4_location

0xa477,	// (0x00038198) level_5_location

0x3c78,	// (0x00031999) mce_icon_pane_g1

0x3c82,	// (0x000319a3) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003d136) mce_icon_pane_g

0x3c8a,	// (0x000319ab) main_mup_pane_g1_ParamLimits

0x3c8a,	// (0x000319ab) main_mup_pane_g1

0x3ca0,	// (0x000319c1) main_mup_pane_g2_ParamLimits

0x3ca0,	// (0x000319c1) main_mup_pane_g2

0x3cb8,	// (0x000319d9) main_mup_pane_g3_ParamLimits

0x3cb8,	// (0x000319d9) main_mup_pane_g3

0x3cd0,	// (0x000319f1) main_mup_pane_g4_ParamLimits

0x3cd0,	// (0x000319f1) main_mup_pane_g4

0x3ce8,	// (0x00031a09) main_mup_pane_g5_ParamLimits

0x3ce8,	// (0x00031a09) main_mup_pane_g5

0x3d04,	// (0x00031a25) main_mup_pane_g6_ParamLimits

0x3d04,	// (0x00031a25) main_mup_pane_g6

0x3d1c,	// (0x00031a3d) main_mup_pane_g7_ParamLimits

0x3d1c,	// (0x00031a3d) main_mup_pane_g7

0x3d34,	// (0x00031a55) main_mup_pane_g8_ParamLimits

0x3d34,	// (0x00031a55) main_mup_pane_g8

0x3d4e,	// (0x00031a6f) main_mup_pane_g9_ParamLimits

0x3d4e,	// (0x00031a6f) main_mup_pane_g9

0x3d68,	// (0x00031a89) main_mup_pane_g10_ParamLimits

0x3d68,	// (0x00031a89) main_mup_pane_g10

0x3d82,	// (0x00031aa3) main_mup_pane_g11_ParamLimits

0x3d82,	// (0x00031aa3) main_mup_pane_g11

0x3d96,	// (0x00031ab7) main_mup_pane_g12_ParamLimits

0x3d96,	// (0x00031ab7) main_mup_pane_g12

0x3dac,	// (0x00031acd) main_mup_pane_g13_ParamLimits

0x3dac,	// (0x00031acd) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003d13b) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003d13b) main_mup_pane_g

0x3dc0,	// (0x00031ae1) main_mup_pane_t1_ParamLimits

0x3dc0,	// (0x00031ae1) main_mup_pane_t1

0x3dda,	// (0x00031afb) main_mup_pane_t2_ParamLimits

0x3dda,	// (0x00031afb) main_mup_pane_t2

0x3df2,	// (0x00031b13) main_mup_pane_t3_ParamLimits

0x3df2,	// (0x00031b13) main_mup_pane_t3

0x3e0a,	// (0x00031b2b) main_mup_pane_t4_ParamLimits

0x3e0a,	// (0x00031b2b) main_mup_pane_t4

0x3e28,	// (0x00031b49) main_mup_pane_t5_ParamLimits

0x3e28,	// (0x00031b49) main_mup_pane_t5

0x3e3d,	// (0x00031b5e) main_mup_pane_t6_ParamLimits

0x3e3d,	// (0x00031b5e) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003d156) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003d156) main_mup_pane_t

0x3e4f,	// (0x00031b70) mup_progress_pane_ParamLimits

0x3e4f,	// (0x00031b70) mup_progress_pane

0x3e5b,	// (0x00031b7c) mup_visualizer_pane_ParamLimits

0x3e5b,	// (0x00031b7c) mup_visualizer_pane

0x3e8b,	// (0x00031bac) mup_volume_pane_ParamLimits

0x3e8b,	// (0x00031bac) mup_volume_pane

0xb030,	// (0x00038d51) mup_visualizer_pane_g1_ParamLimits

0xb030,	// (0x00038d51) mup_visualizer_pane_g1

0xb030,	// (0x00038d51) mup_visualizer_pane_g2_ParamLimits

0xb030,	// (0x00038d51) mup_visualizer_pane_g2

0xadb6,	// (0x00038ad7) mup_visualizer_pane_g3_ParamLimits

0xadb6,	// (0x00038ad7) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003d163) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003d163) mup_visualizer_pane_g

0xa307,	// (0x00038028) mup_volume_pane_g1

0xb046,	// (0x00038d67) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003d16a) mup_volume_pane_g

0xa307,	// (0x00038028) mup_progress_pane_g1

0xb04f,	// (0x00038d70) mup_progress_pane_g2

0xb058,	// (0x00038d79) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003d16f) mup_progress_pane_g

0x9f92,	// (0x00037cb3) bg_popup_window_pane_cp05

0xb061,	// (0x00038d82) heading_pane_cp02_ParamLimits

0xb061,	// (0x00038d82) heading_pane_cp02

0xb07b,	// (0x00038d9c) list_popup_blid_pane

0xb083,	// (0x00038da4) list_blid_sat_info_pane_ParamLimits

0xb083,	// (0x00038da4) list_blid_sat_info_pane

0xb096,	// (0x00038db7) list_blid_sat_info_pane_g1

0xb09e,	// (0x00038dbf) list_blid_sat_info_pane_t1

0x3fa1,	// (0x00031cc2) mup_equalizer_pane_ParamLimits

0x3fa1,	// (0x00031cc2) mup_equalizer_pane

0x3fba,	// (0x00031cdb) mup_equalizer_pane_cp1_ParamLimits

0x3fba,	// (0x00031cdb) mup_equalizer_pane_cp1

0x3fd7,	// (0x00031cf8) mup_equalizer_pane_cp2_ParamLimits

0x3fd7,	// (0x00031cf8) mup_equalizer_pane_cp2

0x3ff4,	// (0x00031d15) mup_equalizer_pane_cp3_ParamLimits

0x3ff4,	// (0x00031d15) mup_equalizer_pane_cp3

0x4015,	// (0x00031d36) mup_equalizer_pane_cp4_ParamLimits

0x4015,	// (0x00031d36) mup_equalizer_pane_cp4

0x4036,	// (0x00031d57) mup_equalizer_pane_cp5

0x404a,	// (0x00031d6b) mup_equalizer_pane_cp6

0x405e,	// (0x00031d7f) mup_equalizer_pane_cp7

0xc2b1,	// (0x00039fd2) bg_popup_call_poc_act_pane_g9

0xc2b9,	// (0x00039fda) bg_popup_call_poc_act_pane_g10

0xc2c1,	// (0x00039fe2) bg_popup_call_poc_act_pane_g11

0x000a,

0xa1ed,	// (0x00037f0e) mup_scale_pane

0xa307,	// (0x00038028) mup_scale_pane_g1

0xb0ac,	// (0x00038dcd) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003d18b) mup_scale_pane_g

0xb0d0,	// (0x00038df1) msg_data_pane

0xb0d8,	// (0x00038df9) scroll_pane_cp017

0x4084,	// (0x00031da5) bg_list_pane_cp04_ParamLimits

0x4084,	// (0x00031da5) bg_list_pane_cp04

0xb0e8,	// (0x00038e09) msg_data_pane_g1

0x409c,	// (0x00031dbd) msg_data_pane_g2

0x40a6,	// (0x00031dc7) msg_data_pane_g3

0x40ae,	// (0x00031dcf) msg_data_pane_g4

0x40b6,	// (0x00031dd7) msg_data_pane_g5

0x40be,	// (0x00031ddf) msg_data_pane_g6

0x40c6,	// (0x00031de7) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003d19a) msg_data_pane_g

0x40ce,	// (0x00031def) msg_text_pane_ParamLimits

0x40ce,	// (0x00031def) msg_text_pane

0x40f2,	// (0x00031e13) qrid_highlight_pane_cp011_ParamLimits

0x40f2,	// (0x00031e13) qrid_highlight_pane_cp011

0x9f92,	// (0x00037cb3) msg_body_pane

0x9f92,	// (0x00037cb3) msg_header_pane

0xb0f9,	// (0x00038e1a) input_focus_pane_cp07

0xb10e,	// (0x00038e2f) msg_header_pane_t1_ParamLimits

0xb10e,	// (0x00038e2f) msg_header_pane_t1

0xb120,	// (0x00038e41) msg_header_pane_t2_ParamLimits

0xb120,	// (0x00038e41) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003d1ae) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003d1ae) msg_header_pane_t

0xb132,	// (0x00038e53) msg_body_pane_g1

0xb13a,	// (0x00038e5b) msg_body_pane_t1_ParamLimits

0xb13a,	// (0x00038e5b) msg_body_pane_t1

0xb16b,	// (0x00038e8c) msg_body_pane_t2_ParamLimits

0xb16b,	// (0x00038e8c) msg_body_pane_t2

0xb17d,	// (0x00038e9e) msg_body_pane_t3_ParamLimits

0xb17d,	// (0x00038e9e) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003d1b3) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003d1b3) msg_body_pane_t

0x05de,	// (0x0002e2ff) main_viewer_pane_g1_ParamLimits

0x05de,	// (0x0002e2ff) main_viewer_pane_g1

0x05ec,	// (0x0002e30d) main_viewer_pane_g2_ParamLimits

0x05ec,	// (0x0002e30d) main_viewer_pane_g2

0x414c,	// (0x00031e6d) main_viewer_pane_g3_ParamLimits

0x414c,	// (0x00031e6d) main_viewer_pane_g3

0x415b,	// (0x00031e7c) main_viewer_pane_g4_ParamLimits

0x415b,	// (0x00031e7c) main_viewer_pane_g4

0x416a,	// (0x00031e8b) main_viewer_pane_g5_ParamLimits

0x416a,	// (0x00031e8b) main_viewer_pane_g5

0x416a,	// (0x00031e8b) main_viewer_pane_g7_ParamLimits

0x416a,	// (0x00031e8b) main_viewer_pane_g7

0xaa2d,	// (0x0003874e) main_viewer_pane_g8_ParamLimits

0xaa2d,	// (0x0003874e) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003d1c3) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003d1c3) main_viewer_pane_g

0xb18f,	// (0x00038eb0) viewer_content_pane_ParamLimits

0xb18f,	// (0x00038eb0) viewer_content_pane

0x41b5,	// (0x00031ed6) main_postcard_pane_g1_ParamLimits

0x41b5,	// (0x00031ed6) main_postcard_pane_g1

0x41cb,	// (0x00031eec) main_postcard_pane_g2_ParamLimits

0x41cb,	// (0x00031eec) main_postcard_pane_g2

0x41e1,	// (0x00031f02) main_postcard_pane_g3_ParamLimits

0x41e1,	// (0x00031f02) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003d1d4) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003d1d4) main_postcard_pane_g

0x41f8,	// (0x00031f19) main_postcard_pane_g4

0xc493,	// (0x0003a1b4) smil_status_volume_pane_g2

0x423b,	// (0x00031f5c) postcard_pane_ParamLimits

0x423b,	// (0x00031f5c) postcard_pane

0xb19d,	// (0x00038ebe) postcard_pane_g1_ParamLimits

0xb19d,	// (0x00038ebe) postcard_pane_g1

0x427d,	// (0x00031f9e) postcard_pane_g2_ParamLimits

0x427d,	// (0x00031f9e) postcard_pane_g2

0x4289,	// (0x00031faa) postcard_pane_g3_ParamLimits

0x4289,	// (0x00031faa) postcard_pane_g3

0xb1ab,	// (0x00038ecc) postcard_pane_g4_ParamLimits

0xb1ab,	// (0x00038ecc) postcard_pane_g4

0x4295,	// (0x00031fb6) postcard_pane_g5_ParamLimits

0x4295,	// (0x00031fb6) postcard_pane_g5

0x42aa,	// (0x00031fcb) postcard_pane_g6_ParamLimits

0x42aa,	// (0x00031fcb) postcard_pane_g6

0xb19d,	// (0x00038ebe) postcard_pane_g7_ParamLimits

0xb19d,	// (0x00038ebe) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003d1e1) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003d1e1) postcard_pane_g

0x42be,	// (0x00031fdf) main_mp2_pane_g1_ParamLimits

0x42be,	// (0x00031fdf) main_mp2_pane_g1

0x42ca,	// (0x00031feb) main_mp2_pane_g2_ParamLimits

0x42ca,	// (0x00031feb) main_mp2_pane_g2

0x42d6,	// (0x00031ff7) main_mp2_pane_g3_ParamLimits

0x42d6,	// (0x00031ff7) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003d1f0) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003d1f0) main_mp2_pane_g

0x42e2,	// (0x00032003) main_mp2_pane_t1_ParamLimits

0x42e2,	// (0x00032003) main_mp2_pane_t1

0x42f7,	// (0x00032018) main_mp2_pane_t2_ParamLimits

0x42f7,	// (0x00032018) main_mp2_pane_t2

0x4309,	// (0x0003202a) main_mp2_pane_t3_ParamLimits

0x4309,	// (0x0003202a) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003d1f7) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003d1f7) main_mp2_pane_t

0xb1b9,	// (0x00038eda) pec_content_pane_ParamLimits

0xb1b9,	// (0x00038eda) pec_content_pane

0xa620,	// (0x00038341) scroll_pane_cp015

0xb1cb,	// (0x00038eec) pec_attribute_pane_ParamLimits

0xb1cb,	// (0x00038eec) pec_attribute_pane

0x431b,	// (0x0003203c) pec_content_pane_g1_ParamLimits

0x431b,	// (0x0003203c) pec_content_pane_g1

0xb1db,	// (0x00038efc) pec_content_pane_t1_ParamLimits

0xb1db,	// (0x00038efc) pec_content_pane_t1

0xb1ed,	// (0x00038f0e) pec_content_pane_t2_ParamLimits

0xb1ed,	// (0x00038f0e) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003d1fe) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003d1fe) pec_content_pane_t

0x4327,	// (0x00032048) list_single_graphic_pane_cp01_ParamLimits

0x4327,	// (0x00032048) list_single_graphic_pane_cp01

0xa1ed,	// (0x00037f0e) bg_popup_sub_pane_cp04

0xb1ff,	// (0x00038f20) popup_mup_playback_window_g1

0xb20b,	// (0x00038f2c) popup_mup_playback_window_t1

0xb220,	// (0x00038f41) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003d203) popup_mup_playback_window_t

0xb257,	// (0x00038f78) main_image_pane_g1_ParamLimits

0xb257,	// (0x00038f78) main_image_pane_g1

0xb29a,	// (0x00038fbb) scroll_pane_cp018_ParamLimits

0xb29a,	// (0x00038fbb) scroll_pane_cp018

0xb2b2,	// (0x00038fd3) scroll_pane_cp016_ParamLimits

0xb2b2,	// (0x00038fd3) scroll_pane_cp016

0x43f4,	// (0x00032115) smil2_image_pane_ParamLimits

0x43f4,	// (0x00032115) smil2_image_pane

0x4424,	// (0x00032145) smil2_root_pane_ParamLimits

0x4424,	// (0x00032145) smil2_root_pane

0x445c,	// (0x0003217d) smil2_text_pane_ParamLimits

0x445c,	// (0x0003217d) smil2_text_pane

0x9f92,	// (0x00037cb3) bg_list_pane_cp06

0xb2ee,	// (0x0003900f) grid_radio_pane

0x9f92,	// (0x00037cb3) bg_popup_window_pane_cp06

0xb2f6,	// (0x00039017) main_fmradio_pane_t1

0xac05,	// (0x00038926) heading_pane_cp04

0xb304,	// (0x00039025) main_fmradio_pane_t2

0xc2c9,	// (0x00039fea) popup_cale_lunar_info_window_g1

0xb312,	// (0x00039033) main_fmradio_pane_t3

0xc2d1,	// (0x00039ff2) popup_cale_lunar_info_window_g2

0xb320,	// (0x00039041) main_fmradio_pane_t4

0x0001,

0xb32e,	// (0x0003904f) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0003d2de) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003d218) main_fmradio_pane_t

0xb33c,	// (0x0003905d) wait_bar_pane_cp03

0xb344,	// (0x00039065) cell_fmradio_pane_ParamLimits

0xb344,	// (0x00039065) cell_fmradio_pane

0xb19d,	// (0x00038ebe) cell_fmradio_pane_g1_ParamLimits

0xb19d,	// (0x00038ebe) cell_fmradio_pane_g1

0x9f92,	// (0x00037cb3) grid_highlight_pane_cp011

0xb357,	// (0x00039078) poc_content_pane_ParamLimits

0xb357,	// (0x00039078) poc_content_pane

0xb369,	// (0x0003908a) scroll_pane_cp019

0x44dc,	// (0x000321fd) popup_call_poc_act_window_ParamLimits

0x44dc,	// (0x000321fd) popup_call_poc_act_window

0x4500,	// (0x00032221) popup_call_poc_inact_window_ParamLimits

0x4500,	// (0x00032221) popup_call_poc_inact_window

0xf594,	// (0x0003d2b5) bg_popup_call_poc_act_pane_g

0xc241,	// (0x00039f62) bg_popup_call_poc_inact_pane_g1

0xc249,	// (0x00039f6a) bg_popup_call_poc_inact_pane_g2

0xb371,	// (0x00039092) popup_call_poc_act_window_g2

0xc251,	// (0x00039f72) bg_popup_call_poc_inact_pane_g3

0xc259,	// (0x00039f7a) bg_popup_call_poc_inact_pane_g4

0xc261,	// (0x00039f82) bg_popup_call_poc_inact_pane_g5

0xb379,	// (0x0003909a) popup_call_poc_act_window_t1_ParamLimits

0xb379,	// (0x0003909a) popup_call_poc_act_window_t1

0xb3a1,	// (0x000390c2) popup_call_poc_act_window_t2_ParamLimits

0xb3a1,	// (0x000390c2) popup_call_poc_act_window_t2

0xb3c9,	// (0x000390ea) popup_call_poc_act_window_t3_ParamLimits

0xb3c9,	// (0x000390ea) popup_call_poc_act_window_t3

0xb3f1,	// (0x00039112) popup_call_poc_act_window_t4_ParamLimits

0xb3f1,	// (0x00039112) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003d223) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003d223) popup_call_poc_act_window_t

0xc269,	// (0x00039f8a) bg_popup_call_poc_inact_pane_g6

0xc271,	// (0x00039f92) bg_popup_call_poc_inact_pane_g7

0xc279,	// (0x00039f9a) bg_popup_call_poc_inact_pane_g8

0xb403,	// (0x00039124) popup_call_poc_inact_window_g2

0xc281,	// (0x00039fa2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0003d2a2) bg_popup_call_poc_inact_pane_g

0xb40b,	// (0x0003912c) popup_call_poc_inact_window_t1_ParamLimits

0xb40b,	// (0x0003912c) popup_call_poc_inact_window_t1

0xb420,	// (0x00039141) popup_call_poc_inact_window_t2_ParamLimits

0xb420,	// (0x00039141) popup_call_poc_inact_window_t2

0xb435,	// (0x00039156) popup_call_poc_inact_window_t3_ParamLimits

0xb435,	// (0x00039156) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003d22c) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003d22c) popup_call_poc_inact_window_t

0xc406,	// (0x0003a127) context_pane_ParamLimits

0x4ad9,	// (0x000327fa) signal_pane_ParamLimits

0xa477,	// (0x00038198) main_call2_pane

0x4a68,	// (0x00032789) popup_phob_thumbnail2_window_ParamLimits

0x4a68,	// (0x00032789) popup_phob_thumbnail2_window

0x4116,	// (0x00031e37) aid_hotspot_pointer_arrow_pane

0x411e,	// (0x00031e3f) aid_hotspot_pointer_hand_pane

0x4849,	// (0x0003256a) phob_pre_status_pane_g5

0x2348,	// (0x00030069) cams_zoom_pane_ParamLimits

0x2357,	// (0x00030078) image_vga_pane_ParamLimits

0x2371,	// (0x00030092) main_camera_pane_g1_ParamLimits

0x2383,	// (0x000300a4) main_camera_pane_g2_ParamLimits

0x2393,	// (0x000300b4) main_camera_pane_g3_ParamLimits

0x23a3,	// (0x000300c4) main_camera_pane_g4_ParamLimits

0x23b3,	// (0x000300d4) main_camera_pane_g5_ParamLimits

0x23c3,	// (0x000300e4) main_camera_pane_g6_ParamLimits

0x23d5,	// (0x000300f6) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003cf2b) main_camera_pane_g_ParamLimits

0x23e5,	// (0x00030106) main_camera_pane_t1_ParamLimits

0x23fb,	// (0x0003011c) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003cf3c) main_camera_pane_t_ParamLimits

0xa1ed,	// (0x00037f0e) bg_popup_preview_window_pane_cp01_ParamLimits

0xa1ed,	// (0x00037f0e) bg_popup_preview_window_pane_cp01

0xb44a,	// (0x0003916b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb44a,	// (0x0003916b) popup_phob_thumbnail2_window_g1

0x9f92,	// (0x00037cb3) call2_cli_visual_pane

0x4534,	// (0x00032255) popup_call2_audio_conf_window_ParamLimits

0x4534,	// (0x00032255) popup_call2_audio_conf_window

0x4554,	// (0x00032275) popup_call2_audio_first_window_ParamLimits

0x4554,	// (0x00032275) popup_call2_audio_first_window

0x45ea,	// (0x0003230b) popup_call2_audio_in_window_ParamLimits

0x45ea,	// (0x0003230b) popup_call2_audio_in_window

0x4632,	// (0x00032353) popup_call2_audio_out_window_ParamLimits

0x4632,	// (0x00032353) popup_call2_audio_out_window

0x469c,	// (0x000323bd) popup_call2_audio_second_window_ParamLimits

0x469c,	// (0x000323bd) popup_call2_audio_second_window

0x4702,	// (0x00032423) popup_call2_audio_wait_window_ParamLimits

0x4702,	// (0x00032423) popup_call2_audio_wait_window

0x9f92,	// (0x00037cb3) bg_popup_call2_act_pane_cp03

0xa1cf,	// (0x00037ef0) list_conf_pane_cp

0xb456,	// (0x00039177) popup_call2_audio_conf_window_t1

0xac62,	// (0x00038983) list_single_graphic_popup_conf2_pane_ParamLimits

0xac62,	// (0x00038983) list_single_graphic_popup_conf2_pane

0xac75,	// (0x00038996) list_highlight_pane_cp04

0xb464,	// (0x00039185) list_single_graphic_popup_conf2_pane_g1

0xac86,	// (0x000389a7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003d233) list_single_graphic_popup_conf2_pane_g

0xb46e,	// (0x0003918f) list_single_graphic_popup_conf2_pane_t1

0xb47c,	// (0x0003919d) bg_popup_call2_act_pane_cp01_ParamLimits

0xb47c,	// (0x0003919d) bg_popup_call2_act_pane_cp01

0xb506,	// (0x00039227) call_type_pane_cp05_ParamLimits

0xb506,	// (0x00039227) call_type_pane_cp05

0xb55a,	// (0x0003927b) popup_call2_audio_second_window_g1_ParamLimits

0xb55a,	// (0x0003927b) popup_call2_audio_second_window_g1

0xb5ae,	// (0x000392cf) popup_call2_audio_second_window_g2_ParamLimits

0xb5ae,	// (0x000392cf) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003d238) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003d238) popup_call2_audio_second_window_g

0xb613,	// (0x00039334) popup_call2_audio_second_window_t1_ParamLimits

0xb613,	// (0x00039334) popup_call2_audio_second_window_t1

0xb6ce,	// (0x000393ef) popup_call2_audio_second_window_t2_ParamLimits

0xb6ce,	// (0x000393ef) popup_call2_audio_second_window_t2

0xb721,	// (0x00039442) popup_call2_audio_second_window_t3_ParamLimits

0xb721,	// (0x00039442) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003d23f) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003d23f) popup_call2_audio_second_window_t

0x9f92,	// (0x00037cb3) bg_popup_call2_in_pane_cp02

0x9f9c,	// (0x00037cbd) call_type_pane_cp04

0x9fa4,	// (0x00037cc5) popup_call2_audio_wait_window_g1

0x9fac,	// (0x00037ccd) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003ce1a) popup_call2_audio_wait_window_g

0x9fb4,	// (0x00037cd5) popup_call2_audio_wait_window_t3

0xb814,	// (0x00039535) bg_popup_call2_act_pane_ParamLimits

0xb814,	// (0x00039535) bg_popup_call2_act_pane

0xb8d4,	// (0x000395f5) call_type_pane_cp03_ParamLimits

0xb8d4,	// (0x000395f5) call_type_pane_cp03

0xb938,	// (0x00039659) popup_call2_audio_first_window_g1_ParamLimits

0xb938,	// (0x00039659) popup_call2_audio_first_window_g1

0xb9a8,	// (0x000396c9) popup_call2_audio_first_window_g2_ParamLimits

0xb9a8,	// (0x000396c9) popup_call2_audio_first_window_g2

0xb030,	// (0x00038d51) popup_call2_audio_first_window_g3_ParamLimits

0xb030,	// (0x00038d51) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003d248) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003d248) popup_call2_audio_first_window_g

0xba86,	// (0x000397a7) popup_call2_audio_first_window_t1_ParamLimits

0xba86,	// (0x000397a7) popup_call2_audio_first_window_t1

0xbb89,	// (0x000398aa) popup_call2_audio_first_window_t4_ParamLimits

0xbb89,	// (0x000398aa) popup_call2_audio_first_window_t4

0xbc6c,	// (0x0003998d) popup_call2_audio_first_window_t5_ParamLimits

0xbc6c,	// (0x0003998d) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003d253) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003d253) popup_call2_audio_first_window_t

0xa1e5,	// (0x00037f06) bg_popup_call2_act_pane_g1

0xc2d9,	// (0x00039ffa) popup_cale_lunar_info_window_t1

0xc2e7,	// (0x0003a008) popup_cale_lunar_info_window_t2

0xc2f5,	// (0x0003a016) popup_cale_lunar_info_window_t3

0x9f92,	// (0x00037cb3) bg_popup_call2_bubble_pane

0xbd6d,	// (0x00039a8e) bg_popup_call2_in_pane_cp01_ParamLimits

0xbd6d,	// (0x00039a8e) bg_popup_call2_in_pane_cp01

0x9c6e,	// (0x0003798f) call_type_pane_cp02

0xbdb5,	// (0x00039ad6) popup_call2_audio_out_window_g1_ParamLimits

0xbdb5,	// (0x00039ad6) popup_call2_audio_out_window_g1

0xbde1,	// (0x00039b02) popup_call2_audio_out_window_g2_ParamLimits

0xbde1,	// (0x00039b02) popup_call2_audio_out_window_g2

0xbe09,	// (0x00039b2a) popup_call2_audio_out_window_g3_ParamLimits

0xbe09,	// (0x00039b2a) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003d25c) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003d25c) popup_call2_audio_out_window_g

0xbe44,	// (0x00039b65) popup_call2_audio_out_window_t1_ParamLimits

0xbe44,	// (0x00039b65) popup_call2_audio_out_window_t1

0xbea3,	// (0x00039bc4) popup_call2_audio_out_window_t2_ParamLimits

0xbea3,	// (0x00039bc4) popup_call2_audio_out_window_t2

0xbef7,	// (0x00039c18) popup_call2_audio_out_window_t3_ParamLimits

0xbef7,	// (0x00039c18) popup_call2_audio_out_window_t3

0xbf0d,	// (0x00039c2e) popup_call2_audio_out_window_t4_ParamLimits

0xbf0d,	// (0x00039c2e) popup_call2_audio_out_window_t4

0xbf23,	// (0x00039c44) popup_call2_audio_out_window_t5_ParamLimits

0xbf23,	// (0x00039c44) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003d265) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003d265) popup_call2_audio_out_window_t

0xbf87,	// (0x00039ca8) bg_popup_call2_in_pane_ParamLimits

0xbf87,	// (0x00039ca8) bg_popup_call2_in_pane

0xbfe3,	// (0x00039d04) popup_call2_audio_in_window_g1_ParamLimits

0xbfe3,	// (0x00039d04) popup_call2_audio_in_window_g1

0xc01b,	// (0x00039d3c) popup_call2_audio_in_window_g2_ParamLimits

0xc01b,	// (0x00039d3c) popup_call2_audio_in_window_g2

0xc053,	// (0x00039d74) popup_call2_audio_in_window_g3_ParamLimits

0xc053,	// (0x00039d74) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003d272) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003d272) popup_call2_audio_in_window_g

0xc0ab,	// (0x00039dcc) popup_call2_audio_in_window_t1_ParamLimits

0xc0ab,	// (0x00039dcc) popup_call2_audio_in_window_t1

0xc12b,	// (0x00039e4c) popup_call2_audio_in_window_t2_ParamLimits

0xc12b,	// (0x00039e4c) popup_call2_audio_in_window_t2

0xc1ab,	// (0x00039ecc) popup_call2_audio_in_window_t3_ParamLimits

0xc1ab,	// (0x00039ecc) popup_call2_audio_in_window_t3

0xc1c5,	// (0x00039ee6) popup_call2_audio_in_window_t4_ParamLimits

0xc1c5,	// (0x00039ee6) popup_call2_audio_in_window_t4

0xc1d7,	// (0x00039ef8) popup_call2_audio_in_window_t5_ParamLimits

0xc1d7,	// (0x00039ef8) popup_call2_audio_in_window_t5

0xc1ec,	// (0x00039f0d) popup_call2_audio_in_window_t6_ParamLimits

0xc1ec,	// (0x00039f0d) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003d27b) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003d27b) popup_call2_audio_in_window_t

0xa1e5,	// (0x00037f06) bg_popup_call2_in_pane_g1

0xc303,	// (0x0003a024) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0003d2e3) popup_cale_lunar_info_window_t

0xa1ed,	// (0x00037f0e) bg_popup_call2_rect_pane_ParamLimits

0xa1ed,	// (0x00037f0e) bg_popup_call2_rect_pane

0x9f92,	// (0x00037cb3) call2_cli_visual_graphic_pane

0x9f92,	// (0x00037cb3) call2_cli_visual_text_pane

0x4b66,	// (0x00032887) smil_status_volume_pane_g3

0x0002,

0xa307,	// (0x00038028) call2_cli_visual_graphic_pane_g1

0xa307,	// (0x00038028) call2_cli_visual_graphic_pane_g2

0xa307,	// (0x00038028) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003d288) call2_cli_visual_graphic_pane_g

0xc201,	// (0x00039f22) bg_popup_call2_rect_pane_g1

0xa393,	// (0x000380b4) bg_popup_call2_rect_pane_g2

0xc209,	// (0x00039f2a) bg_popup_call2_rect_pane_g3

0xc211,	// (0x00039f32) bg_popup_call2_rect_pane_g4

0xc219,	// (0x00039f3a) bg_popup_call2_rect_pane_g5

0xc221,	// (0x00039f42) bg_popup_call2_rect_pane_g6

0xc229,	// (0x00039f4a) bg_popup_call2_rect_pane_g7

0xc231,	// (0x00039f52) bg_popup_call2_rect_pane_g8

0xc239,	// (0x00039f5a) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d28f) bg_popup_call2_rect_pane_g

0xc241,	// (0x00039f62) bg_popup_call2_bubble_pane_g1

0xc249,	// (0x00039f6a) bg_popup_call2_bubble_pane_g2

0xc251,	// (0x00039f72) bg_popup_call2_bubble_pane_g3

0xc259,	// (0x00039f7a) bg_popup_call2_bubble_pane_g4

0xc261,	// (0x00039f82) bg_popup_call2_bubble_pane_g5

0xc269,	// (0x00039f8a) bg_popup_call2_bubble_pane_g6

0xc271,	// (0x00039f92) bg_popup_call2_bubble_pane_g7

0xc279,	// (0x00039f9a) bg_popup_call2_bubble_pane_g8

0xc281,	// (0x00039fa2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003d2a2) bg_popup_call2_bubble_pane_g

0x1d96,	// (0x0002fab7) aid_cale_week_size_cell_pane

0x2411,	// (0x00030132) aid_cams_cif_uncrop_pane_ParamLimits

0x2411,	// (0x00030132) aid_cams_cif_uncrop_pane

0x25c1,	// (0x000302e2) aid_cams_size_cell_ParamLimits

0x25c1,	// (0x000302e2) aid_cams_size_cell

0x25d5,	// (0x000302f6) grid_cams_pane_ParamLimits

0x25ef,	// (0x00030310) linegrid_cams_pane_ParamLimits

0x27ed,	// (0x0003050e) call_video_pane_t1

0x280b,	// (0x0003052c) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003cf8f) call_video_pane_t

0x2c37,	// (0x00030958) aid_cale_month_size_cell_pane_ParamLimits

0x2c37,	// (0x00030958) aid_cale_month_size_cell_pane

0xf60b,	// (0x0003d32c) smil_status_volume_pane_g

0x4b73,	// (0x00032894) volume_smil_pane_ParamLimits

0x18ad,	// (0x0002f5ce) aid_popup2_width_pane

0x1ca8,	// (0x0002f9c9) cell_qdial_pane_g4_ParamLimits

0x1ca8,	// (0x0002f9c9) cell_qdial_pane_g4

0x3b9f,	// (0x000318c0) aid_blid_cardinal_pane_ParamLimits

0x3bab,	// (0x000318cc) aid_blid_destination_pane_ParamLimits

0x3bab,	// (0x000318cc) aid_blid_destination_pane

0xa1ed,	// (0x00037f0e) bg_popup_call_poc_act_pane_ParamLimits

0xa1ed,	// (0x00037f0e) bg_popup_call_poc_act_pane

0xa1ed,	// (0x00037f0e) bg_popup_call_poc_inact_pane_ParamLimits

0xa1ed,	// (0x00037f0e) bg_popup_call_poc_inact_pane

0xc289,	// (0x00039faa) bg_popup_call_poc_act_pane_g1

0xc291,	// (0x00039fb2) bg_popup_call_poc_act_pane_g2

0xc299,	// (0x00039fba) bg_popup_call_poc_act_pane_g3

0xc259,	// (0x00039f7a) bg_popup_call_poc_act_pane_g4

0xc261,	// (0x00039f82) bg_popup_call_poc_act_pane_g5

0xc2a1,	// (0x00039fc2) bg_popup_call_poc_act_pane_g6

0xc271,	// (0x00039f92) bg_popup_call_poc_act_pane_g7

0xc2a9,	// (0x00039fca) bg_popup_call_poc_act_pane_g8

0x9f92,	// (0x00037cb3) main_usb_pane

0x4a43,	// (0x00032764) popup_cale_lunar_info_window

0x2ae3,	// (0x00030804) im_reading_pane_t1_ParamLimits

0xa578,	// (0x00038299) list_im_pane_ParamLimits

0xa589,	// (0x000382aa) scroll_pane_cp07_ParamLimits

0x9f92,	// (0x00037cb3) grid_highlight_pane_cp012

0xa1ed,	// (0x00037f0e) mup_scale_pane_ParamLimits

0xb19d,	// (0x00038ebe) main_usb_pane_g1_ParamLimits

0xb19d,	// (0x00038ebe) main_usb_pane_g1

0x475e,	// (0x0003247f) main_usb_pane_g2_ParamLimits

0x475e,	// (0x0003247f) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0003d2cc) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0003d2cc) main_usb_pane_g

0x4774,	// (0x00032495) main_usb_pane_t1_ParamLimits

0x4774,	// (0x00032495) main_usb_pane_t1

0x4786,	// (0x000324a7) main_usb_pane_t2_ParamLimits

0x4786,	// (0x000324a7) main_usb_pane_t2

0x4798,	// (0x000324b9) main_usb_pane_t3_ParamLimits

0x4798,	// (0x000324b9) main_usb_pane_t3

0x47aa,	// (0x000324cb) main_usb_pane_t4_ParamLimits

0x47aa,	// (0x000324cb) main_usb_pane_t4

0x47bc,	// (0x000324dd) main_usb_pane_t5_ParamLimits

0x47bc,	// (0x000324dd) main_usb_pane_t5

0x47ce,	// (0x000324ef) main_usb_pane_t6_ParamLimits

0x47ce,	// (0x000324ef) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0003d2d1) main_usb_pane_t_ParamLimits

0x3b4e,	// (0x0003186f) aid_text_placing

0x3b57,	// (0x00031878) main_location2_pane_t1_ParamLimits

0x3b69,	// (0x0003188a) main_location2_pane_t2_ParamLimits

0x3b7b,	// (0x0003189c) main_location2_pane_t3_ParamLimits

0x3b8d,	// (0x000318ae) main_location2_pane_t4_ParamLimits

0x3b8d,	// (0x000318ae) main_location2_pane_t4

0xf3cf,	// (0x0003d0f0) main_location2_pane_t_ParamLimits

0xa229,	// (0x00037f4a) find_pinb_pane_g2_ParamLimits

0xa229,	// (0x00037f4a) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0003ce40) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0003ce40) find_pinb_pane_g

0xa235,	// (0x00037f56) find_pinb_pane_t1_ParamLimits

0xa247,	// (0x00037f68) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003ce45) find_pinb_pane_t_ParamLimits

0x9f92,	// (0x00037cb3) main_call3_pane

0x30f6,	// (0x00030e17) cale_month_day_heading_pane_t1_ParamLimits

0x317c,	// (0x00030e9d) cale_month_day_heading_pane_t2_ParamLimits

0x320d,	// (0x00030f2e) cale_month_day_heading_pane_t3_ParamLimits

0x329e,	// (0x00030fbf) cale_month_day_heading_pane_t4_ParamLimits

0x3333,	// (0x00031054) cale_month_day_heading_pane_t5_ParamLimits

0x33d4,	// (0x000310f5) cale_month_day_heading_pane_t6_ParamLimits

0x3475,	// (0x00031196) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003cfc7) cale_month_day_heading_pane_t_ParamLimits

0xa86f,	// (0x00038590) smil_status_volume_pane

0x4259,	// (0x00031f7a) postcard_address_pane_ParamLimits

0x4259,	// (0x00031f7a) postcard_address_pane

0x426b,	// (0x00031f8c) postcard_message_pane_ParamLimits

0x426b,	// (0x00031f8c) postcard_message_pane

0x473c,	// (0x0003245d) call2_cli_visual_pane_t1_ParamLimits

0x473c,	// (0x0003245d) call2_cli_visual_pane_t1

0x4d28,	// (0x00032a49) postcard_message_pane_t1_ParamLimits

0x4d28,	// (0x00032a49) postcard_message_pane_t1

0x4d11,	// (0x00032a32) postcard_address_pane_t1_ParamLimits

0x4d11,	// (0x00032a32) postcard_address_pane_t1

0x4cfd,	// (0x00032a1e) popup_call3_audio_in_window_ParamLimits

0x4cfd,	// (0x00032a1e) popup_call3_audio_in_window

0x4b88,	// (0x000328a9) bg_popup_call3_in_pane_ParamLimits

0x4b88,	// (0x000328a9) bg_popup_call3_in_pane

0x4bfe,	// (0x0003291f) popup_call3_audio_in_window_g1_ParamLimits

0x4bfe,	// (0x0003291f) popup_call3_audio_in_window_g1

0x4c1e,	// (0x0003293f) popup_call3_audio_in_window_g2_ParamLimits

0x4c1e,	// (0x0003293f) popup_call3_audio_in_window_g2

0x4c3e,	// (0x0003295f) popup_call3_audio_in_window_g3_ParamLimits

0x4c3e,	// (0x0003295f) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0003d333) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0003d333) popup_call3_audio_in_window_g

0x4c6f,	// (0x00032990) popup_call3_audio_in_window_t1_ParamLimits

0x4c6f,	// (0x00032990) popup_call3_audio_in_window_t1

0x4cad,	// (0x000329ce) popup_call3_audio_in_window_t2_ParamLimits

0x4cad,	// (0x000329ce) popup_call3_audio_in_window_t2

0x4ceb,	// (0x00032a0c) popup_call3_audio_in_window_t3_ParamLimits

0x4ceb,	// (0x00032a0c) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0003d33c) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0003d33c) popup_call3_audio_in_window_t

0xa477,	// (0x00038198) bg_popup_call3_rect_pane

0xc201,	// (0x00039f22) bg_popup_call3_rect_pane_g1

0xa393,	// (0x000380b4) bg_popup_call3_rect_pane_g2

0xc209,	// (0x00039f2a) bg_popup_call3_rect_pane_g3

0xc211,	// (0x00039f32) bg_popup_call3_rect_pane_g4

0xc219,	// (0x00039f3a) bg_popup_call3_rect_pane_g5

0xc221,	// (0x00039f42) bg_popup_call3_rect_pane_g6

0xc229,	// (0x00039f4a) bg_popup_call3_rect_pane_g7

0x3ea1,	// (0x00031bc2) mup_visualizer_osc_pane

0xb03e,	// (0x00038d5f) mup_visualizer_spec_pane

0x4bb8,	// (0x000328d9) call3_video_qcif_pane_ParamLimits

0x4bb8,	// (0x000328d9) call3_video_qcif_pane

0x4bcb,	// (0x000328ec) call3_video_qcif_uncrop_pane_ParamLimits

0x4bcb,	// (0x000328ec) call3_video_qcif_uncrop_pane

0x4bd9,	// (0x000328fa) call3_video_subqcif_pane_ParamLimits

0x4bd9,	// (0x000328fa) call3_video_subqcif_pane

0x4bed,	// (0x0003290e) call3_video_subqcif_uncrop_pane_ParamLimits

0x4bed,	// (0x0003290e) call3_video_subqcif_uncrop_pane

0x4c5e,	// (0x0003297f) popup_call3_audio_in_window_g4_ParamLimits

0x4c5e,	// (0x0003297f) popup_call3_audio_in_window_g4

0x4b55,	// (0x00032876) mup_spec_half_pane

0x4b5e,	// (0x0003287f) mup_spec_half_pane_cp

0xc466,	// (0x0003a187) mup_osc_middle_pane

0xc46f,	// (0x0003a190) mup_visualizer_osc_pane_g1

0x4b35,	// (0x00032856) mup_spec_bar_pane_ParamLimits

0x4b35,	// (0x00032856) mup_spec_bar_pane

0xc453,	// (0x0003a174) mup_spec_bar_pane_g1

0xc45d,	// (0x0003a17e) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003d327) mup_spec_bar_pane_g

0x1d96,	// (0x0002fab7) aid_cale_week_size_cell_pane_ParamLimits

0x1db0,	// (0x0002fad1) bg_cale_heading_pane_ParamLimits

0xa3d0,	// (0x000380f1) bg_cale_pane_cp01_ParamLimits

0x1dc8,	// (0x0002fae9) cale_week_corner_pane_ParamLimits

0x1de7,	// (0x0002fb08) cale_week_day_heading_pane_ParamLimits

0x1e04,	// (0x0002fb25) cale_week_scroll_pane_g1_ParamLimits

0x1e17,	// (0x0002fb38) cale_week_scroll_pane_g2_ParamLimits

0x1e2f,	// (0x0002fb50) cale_week_scroll_pane_g3_ParamLimits

0x1e47,	// (0x0002fb68) cale_week_scroll_pane_g4_ParamLimits

0x1e5f,	// (0x0002fb80) cale_week_scroll_pane_g5_ParamLimits

0x1e7f,	// (0x0002fba0) cale_week_scroll_pane_g6_ParamLimits

0x1e9f,	// (0x0002fbc0) cale_week_scroll_pane_g7_ParamLimits

0x1ebf,	// (0x0002fbe0) cale_week_scroll_pane_g8_ParamLimits

0x1ee3,	// (0x0002fc04) cale_week_scroll_pane_g9_ParamLimits

0x1efb,	// (0x0002fc1c) cale_week_scroll_pane_g10_ParamLimits

0x1f13,	// (0x0002fc34) cale_week_scroll_pane_g11_ParamLimits

0x1f2b,	// (0x0002fc4c) cale_week_scroll_pane_g12_ParamLimits

0x1f43,	// (0x0002fc64) cale_week_scroll_pane_g13_ParamLimits

0x1f43,	// (0x0002fc64) cale_week_scroll_pane_g14_ParamLimits

0x1f43,	// (0x0002fc64) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0003ced1) cale_week_scroll_pane_g_ParamLimits

0x1f7f,	// (0x0002fca0) cale_week_time_pane_ParamLimits

0x1fa3,	// (0x0002fcc4) grid_cale_week_pane_ParamLimits

0xa3ed,	// (0x0003810e) listscroll_cale_week_pane_t1

0xa3ff,	// (0x00038120) scroll_pane_cp08_ParamLimits

0x2c8c,	// (0x000309ad) cale_month_corner_pane_ParamLimits

0xa845,	// (0x00038566) cale_month_pane_t1

0x3094,	// (0x00030db5) cale_month_week_pane_ParamLimits

0x3937,	// (0x00031658) popup_call_status_window_g1_ParamLimits

0x394b,	// (0x0003166c) popup_call_status_window_g2_ParamLimits

0x395f,	// (0x00031680) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003d077) popup_call_status_window_g_ParamLimits

0xabf5,	// (0x00038916) aid_call2_pane

0x4108,	// (0x00031e29) msg_header_pane_g1

0x4259,	// (0x00031f7a) postcard_address2_pane_ParamLimits

0x4259,	// (0x00031f7a) postcard_address2_pane

0x426b,	// (0x00031f8c) postcard_message2_pane_ParamLimits

0x426b,	// (0x00031f8c) postcard_message2_pane

0x4ae7,	// (0x00032808) message2_row_pane_ParamLimits

0x4ae7,	// (0x00032808) message2_row_pane

0x4b03,	// (0x00032824) address2_row_pane_ParamLimits

0x4b03,	// (0x00032824) address2_row_pane

0xc421,	// (0x0003a142) postcard_message2_row_pane_g1

0xc429,	// (0x0003a14a) postcard_message2_row_pane_t1

0xc421,	// (0x0003a142) address2_row_pane_g1

0xc429,	// (0x0003a14a) address2_row_pane_t1

0x22c0,	// (0x0002ffe1) aid_size_cell_vorec

0x9f92,	// (0x00037cb3) main_rss_pane

0x4b16,	// (0x00032837) rss_list_single_pane_ParamLimits

0x4b16,	// (0x00032837) rss_list_single_pane

0xc437,	// (0x0003a158) rss_list_single_pane_t1

0xc445,	// (0x0003a166) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0003d322) rss_list_single_pane_t

0x9f92,	// (0x00037cb3) main_camera2_pane

0x9f92,	// (0x00037cb3) main_video2_pane

0x0914,	// (0x0002e635) cams_zoom_pane_cp2_ParamLimits

0x0914,	// (0x0002e635) cams_zoom_pane_cp2

0x0934,	// (0x0002e655) image2_vga_pane_ParamLimits

0x0934,	// (0x0002e655) image2_vga_pane

0x0985,	// (0x0002e6a6) main_camera2_pane_g1_ParamLimits

0x0985,	// (0x0002e6a6) main_camera2_pane_g1

0x09a5,	// (0x0002e6c6) main_camera2_pane_g2_ParamLimits

0x09a5,	// (0x0002e6c6) main_camera2_pane_g2

0x09c5,	// (0x0002e6e6) main_camera2_pane_g3_ParamLimits

0x09c5,	// (0x0002e6e6) main_camera2_pane_g3

0x09e5,	// (0x0002e706) main_camera2_pane_g4_ParamLimits

0x09e5,	// (0x0002e706) main_camera2_pane_g4

0x0a05,	// (0x0002e726) main_camera2_pane_g5_ParamLimits

0x0a05,	// (0x0002e726) main_camera2_pane_g5

0x0a25,	// (0x0002e746) main_camera2_pane_g6_ParamLimits

0x0a25,	// (0x0002e746) main_camera2_pane_g6

0x0a45,	// (0x0002e766) main_camera2_pane_g7_ParamLimits

0x0a45,	// (0x0002e766) main_camera2_pane_g7

0x0a65,	// (0x0002e786) main_camera2_pane_g8_ParamLimits

0x0a65,	// (0x0002e786) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0003d343) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0003d343) main_camera2_pane_g

0x0aa5,	// (0x0002e7c6) main_camera2_pane_t1_ParamLimits

0x0aa5,	// (0x0002e7c6) main_camera2_pane_t1

0x0ada,	// (0x0002e7fb) main_camera2_pane_t2_ParamLimits

0x0ada,	// (0x0002e7fb) main_camera2_pane_t2

0x0b00,	// (0x0002e821) main_camera2_pane_t3_ParamLimits

0x0b00,	// (0x0002e821) main_camera2_pane_t3

0x0b5e,	// (0x0002e87f) main_camera2_pane_t4_ParamLimits

0x0b5e,	// (0x0002e87f) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0003d356) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0003d356) main_camera2_pane_t

0x0bf0,	// (0x0002e911) cams_zoom_pane_cp4_ParamLimits

0x0bf0,	// (0x0002e911) cams_zoom_pane_cp4

0x0c06,	// (0x0002e927) image2_cif_pane_ParamLimits

0x0c06,	// (0x0002e927) image2_cif_pane

0x0c31,	// (0x0002e952) image2_subqcif_pane_ParamLimits

0x0c31,	// (0x0002e952) image2_subqcif_pane

0x0c4b,	// (0x0002e96c) main_video2_pane_g1_ParamLimits

0x0c4b,	// (0x0002e96c) main_video2_pane_g1

0x0c65,	// (0x0002e986) main_video2_pane_g2_ParamLimits

0x0c65,	// (0x0002e986) main_video2_pane_g2

0x0c7b,	// (0x0002e99c) main_video2_pane_g3_ParamLimits

0x0c7b,	// (0x0002e99c) main_video2_pane_g3

0x0c91,	// (0x0002e9b2) main_video2_pane_g4_ParamLimits

0x0c91,	// (0x0002e9b2) main_video2_pane_g4

0x0ca7,	// (0x0002e9c8) main_video2_pane_g5_ParamLimits

0x0ca7,	// (0x0002e9c8) main_video2_pane_g5

0x0cbd,	// (0x0002e9de) main_video2_pane_g6_ParamLimits

0x0cbd,	// (0x0002e9de) main_video2_pane_g6

0x0005,

0xf644,	// (0x0003d365) main_video2_pane_g_ParamLimits

0xf644,	// (0x0003d365) main_video2_pane_g

0x0cd7,	// (0x0002e9f8) main_video2_pane_t1_ParamLimits

0x0cd7,	// (0x0002e9f8) main_video2_pane_t1

0x0cfb,	// (0x0002ea1c) main_video2_pane_t2_ParamLimits

0x0cfb,	// (0x0002ea1c) main_video2_pane_t2

0x0d49,	// (0x0002ea6a) main_video2_pane_t3_ParamLimits

0x0d49,	// (0x0002ea6a) main_video2_pane_t3

0x0002,

0xf651,	// (0x0003d372) main_video2_pane_t_ParamLimits

0xf651,	// (0x0003d372) main_video2_pane_t

0x4889,	// (0x000325aa) call_muted_g2

0x0001,

0xf5f3,	// (0x0003d314) call_muted_g

0x9f92,	// (0x00037cb3) main_mup2_pane

0x4d73,	// (0x00032a94) main_mup2_pane_g1_ParamLimits

0x4d73,	// (0x00032a94) main_mup2_pane_g1

0x4d7f,	// (0x00032aa0) main_mup2_pane_g2_ParamLimits

0x4d7f,	// (0x00032aa0) main_mup2_pane_g2

0x4fee,	// (0x00032d0f) main_mup_pane_g13_cp1

0x4ff6,	// (0x00032d17) mup_volume_pane_cp1

0x4d9b,	// (0x00032abc) main_mup2_pane_g4_ParamLimits

0x4d9b,	// (0x00032abc) main_mup2_pane_g4

0x4dad,	// (0x00032ace) main_mup2_pane_g5_ParamLimits

0x4dad,	// (0x00032ace) main_mup2_pane_g5

0x4dbf,	// (0x00032ae0) main_mup2_pane_g6_ParamLimits

0x4dbf,	// (0x00032ae0) main_mup2_pane_g6

0x4dd1,	// (0x00032af2) main_mup2_pane_g7_ParamLimits

0x4dd1,	// (0x00032af2) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0003d379) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0003d379) main_mup2_pane_g

0x4de9,	// (0x00032b0a) main_mup2_pane_t1_ParamLimits

0x4de9,	// (0x00032b0a) main_mup2_pane_t1

0x4dff,	// (0x00032b20) main_mup2_pane_t2_ParamLimits

0x4dff,	// (0x00032b20) main_mup2_pane_t2

0x4e15,	// (0x00032b36) main_mup2_pane_t3_ParamLimits

0x4e15,	// (0x00032b36) main_mup2_pane_t3

0x4e2b,	// (0x00032b4c) main_mup2_pane_t4_ParamLimits

0x4e2b,	// (0x00032b4c) main_mup2_pane_t4

0x4e43,	// (0x00032b64) main_mup2_pane_t5_ParamLimits

0x4e43,	// (0x00032b64) main_mup2_pane_t5

0x4e5b,	// (0x00032b7c) main_mup2_pane_t6_ParamLimits

0x4e5b,	// (0x00032b7c) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0003d388) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0003d388) main_mup2_pane_t

0x4e8b,	// (0x00032bac) mup2_visualizer_pane_ParamLimits

0x4e8b,	// (0x00032bac) mup2_visualizer_pane

0x4eb9,	// (0x00032bda) mup_progress_pane_cp_ParamLimits

0x4eb9,	// (0x00032bda) mup_progress_pane_cp

0x4fd9,	// (0x00032cfa) mup_volume_pane_cp_ParamLimits

0x4fd9,	// (0x00032cfa) mup_volume_pane_cp

0x4ecd,	// (0x00032bee) mup2_visualizer_pane_g1_ParamLimits

0x4ecd,	// (0x00032bee) mup2_visualizer_pane_g1

0xc4a6,	// (0x0003a1c7) mup2_visualizer_pane_g2_ParamLimits

0xc4a6,	// (0x0003a1c7) mup2_visualizer_pane_g2

0x4ee4,	// (0x00032c05) mup2_visualizer_pane_g3_ParamLimits

0x4ee4,	// (0x00032c05) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0003d395) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0003d395) mup2_visualizer_pane_g

0xb2e6,	// (0x00039007) aid_size_cell_fmradio

0x05fa,	// (0x0002e31b) aid_height_parent_landcape

0xa607,	// (0x00038328) wml_content_pane_cp

0xa60f,	// (0x00038330) wml_tabs_pane

0xa618,	// (0x00038339) popup_wml_miniature_window

0xa620,	// (0x00038341) scroll_pane_cp021

0xa634,	// (0x00038355) wml_content_pane_comp8

0x9f92,	// (0x00037cb3) bg_popup_sub_pane_cp05

0xc4c4,	// (0x0003a1e5) popup_wml_miniature_window_g1

0xc4cc,	// (0x0003a1ed) wml_miniature_view_pane

0x4ef0,	// (0x00032c11) aid_size_wml_view

0x4ef8,	// (0x00032c19) wml_miniature_view_pane_g1

0x4f01,	// (0x00032c22) wml_miniature_view_pane_g2

0x4f0a,	// (0x00032c2b) wml_miniature_view_pane_g3

0x4f12,	// (0x00032c33) wml_miniature_view_pane_g4

0x4f1a,	// (0x00032c3b) wml_miniature_view_pane_g5

0x4f22,	// (0x00032c43) wml_miniature_view_pane_g6

0x4f2a,	// (0x00032c4b) wml_miniature_view_pane_g7

0x4f32,	// (0x00032c53) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0003d39c) wml_miniature_view_pane_g

0xc4d4,	// (0x0003a1f5) background_graphic_ParamLimits

0xc4d4,	// (0x0003a1f5) background_graphic

0xc4e0,	// (0x0003a201) wml_tabs_2_pane

0xc4e9,	// (0x0003a20a) wml_tabs_3_pane_ParamLimits

0xc4e9,	// (0x0003a20a) wml_tabs_3_pane

0xc4fb,	// (0x0003a21c) wml_tabs_4_pane_ParamLimits

0xc4fb,	// (0x0003a21c) wml_tabs_4_pane

0xc511,	// (0x0003a232) wml_tabs_5_pane_ParamLimits

0xc511,	// (0x0003a232) wml_tabs_5_pane

0xc52b,	// (0x0003a24c) wml_tabs_pane_g2_ParamLimits

0xc52b,	// (0x0003a24c) wml_tabs_pane_g2

0xc53f,	// (0x0003a260) wml_tabs_pane_g3_ParamLimits

0xc53f,	// (0x0003a260) wml_tabs_pane_g3

0x4f3a,	// (0x00032c5b) wml_tabs_2_active_pane_ParamLimits

0x4f3a,	// (0x00032c5b) wml_tabs_2_active_pane

0x4f4e,	// (0x00032c6f) wml_tabs_2_passive_pane_ParamLimits

0x4f4e,	// (0x00032c6f) wml_tabs_2_passive_pane

0x4f62,	// (0x00032c83) wml_tabs_3_active_pane_cp_ParamLimits

0x4f62,	// (0x00032c83) wml_tabs_3_active_pane_cp

0x4f77,	// (0x00032c98) wml_tabs_3_passive_pane_ParamLimits

0x4f77,	// (0x00032c98) wml_tabs_3_passive_pane

0x4f8a,	// (0x00032cab) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f8a,	// (0x00032cab) wml_tabs_3_passive_pane_cp

0x4fa1,	// (0x00032cc2) tabs_4_active_pane

0x4fa9,	// (0x00032cca) tabs_4_passive_pane

0x4fb3,	// (0x00032cd4) tabs_4_passive_pane_cp

0x4fbb,	// (0x00032cdc) tabs_4_passive_pane_cp2

0x4756,	// (0x00032477) aid_height_text

0x3e77,	// (0x00031b98) mup_volume_cont_pane_ParamLimits

0x3e77,	// (0x00031b98) mup_volume_cont_pane

0x1a26,	// (0x0002f747) aid_size_cell_pinb

0x1a30,	// (0x0002f751) aid_size_list_pinb

0x4ea5,	// (0x00032bc6) mup2_volume_cont_pane_ParamLimits

0x4ea5,	// (0x00032bc6) mup2_volume_cont_pane

0x4fc5,	// (0x00032ce6) mup2_volume_cont_pane_g1_ParamLimits

0x4fc5,	// (0x00032ce6) mup2_volume_cont_pane_g1

0x0152,	// (0x0002de73) aid_size_cell_touch_ParamLimits

0x0152,	// (0x0002de73) aid_size_cell_touch

0x033a,	// (0x0002e05b) touch_pane_ParamLimits

0x033a,	// (0x0002e05b) touch_pane

0x195e,	// (0x0002f67f) main_rss2_pane

0xc55c,	// (0x0003a27d) listscroll_rss2_pane

0xc565,	// (0x0003a286) rss2_navigation_pane

0xc56d,	// (0x0003a28e) list_rss2_pane

0xad38,	// (0x00038a59) scroll_pane_cp22

0xc575,	// (0x0003a296) rss2_navigation_pane_g1

0xc57e,	// (0x0003a29f) rss2_navigation_pane_g2

0xc586,	// (0x0003a2a7) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0003d3ad) rss2_navigation_pane_g

0xc58e,	// (0x0003a2af) rss2_navigation_pane_t1

0x4ffe,	// (0x00032d1f) rss2_list_single_pane_ParamLimits

0x4ffe,	// (0x00032d1f) rss2_list_single_pane

0xc59c,	// (0x0003a2bd) rss2_list_single_pane_t2

0xc5aa,	// (0x0003a2cb) rss2_list_single_pane_t3_ParamLimits

0xc5aa,	// (0x0003a2cb) rss2_list_single_pane_t3

0xc5c7,	// (0x0003a2e8) rss2_list_single_pane_t4

0x371d,	// (0x0003143e) smil_status_pane_g1

0x1944,	// (0x0002f665) main_image2_pane_ParamLimits

0x1944,	// (0x0002f665) main_image2_pane

0x0a85,	// (0x0002e7a6) main_camera2_pane_g9_ParamLimits

0x0a85,	// (0x0002e7a6) main_camera2_pane_g9

0x0bb3,	// (0x0002e8d4) main_camera2_pane_t5_ParamLimits

0x0bb3,	// (0x0002e8d4) main_camera2_pane_t5

0x4d43,	// (0x00032a64) main_camera2_pane_t6_ParamLimits

0x4d43,	// (0x00032a64) main_camera2_pane_t6

0x5013,	// (0x00032d34) main_image2_pane_g1_ParamLimits

0x5013,	// (0x00032d34) main_image2_pane_g1

0x4492,	// (0x000321b3) smil2_video_pane_ParamLimits

0x4492,	// (0x000321b3) smil2_video_pane

0x18b9,	// (0x0002f5da) aid_zoom_text_primary_cp

0x193a,	// (0x0002f65b) popup_preview_fixed_window

0xa570,	// (0x00038291) im_reading_pane_g1

0x08fc,	// (0x0002e61d) cams2_bc_adjust_pane_cp_ParamLimits

0x08fc,	// (0x0002e61d) cams2_bc_adjust_pane_cp

0x0be2,	// (0x0002e903) cams2_bc_adjust_pane_ParamLimits

0x0be2,	// (0x0002e903) cams2_bc_adjust_pane

0xd8be,	// (0x0003b5df) cams2_bc_adjust_pane_g1

0x5029,	// (0x00032d4a) cams2_slider_pane

0x5032,	// (0x00032d53) cams2_slider_pane_g1

0x503b,	// (0x00032d5c) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0003d3b4) cams2_slider_pane_g

0x03aa,	// (0x0002e0cb) calc_display_pane_ParamLimits

0x03d2,	// (0x0002e0f3) calc_paper_pane_ParamLimits

0x03f5,	// (0x0002e116) grid_calc_pane_ParamLimits

0x39c4,	// (0x000316e5) popup_clock_digital_window_t1_ParamLimits

0xb283,	// (0x00038fa4) main_image_pane_t1

0x038c,	// (0x0002e0ad) aid_size_cell_calc_ParamLimits

0x038c,	// (0x0002e0ad) aid_size_cell_calc

0x0652,	// (0x0002e373) popup_blid_sat_info2_window_ParamLimits

0x0652,	// (0x0002e373) popup_blid_sat_info2_window

0xc5dd,	// (0x0003a2fe) aid_size_cell_blid

0xc5e5,	// (0x0003a306) bg_popup_window_pane_cp07

0xc608,	// (0x0003a329) grid_popup_blid_pane

0xc612,	// (0x0003a333) heading_pane_cp05_ParamLimits

0xc612,	// (0x0003a333) heading_pane_cp05

0xc6dc,	// (0x0003a3fd) cell_popup_blid_pane_ParamLimits

0xc6dc,	// (0x0003a3fd) cell_popup_blid_pane

0xc700,	// (0x0003a421) cell_popup_blid_pane_g1

0xc708,	// (0x0003a429) cell_popup_blid_pane_t1

0x4e75,	// (0x00032b96) mup2_indicator_pane_ParamLimits

0x4e75,	// (0x00032b96) mup2_indicator_pane

0xa477,	// (0x00038198) mup2_visualizer_osc_pane

0xc4b2,	// (0x0003a1d3) mup2_visualizer_spec_pane_ParamLimits

0xc4b2,	// (0x0003a1d3) mup2_visualizer_spec_pane

0x5055,	// (0x00032d76) mup2_spec_half_pane

0x505e,	// (0x00032d7f) mup2_spec_half_pane_cp

0x5066,	// (0x00032d87) mup2_spec_bar_pane_ParamLimits

0x5066,	// (0x00032d87) mup2_spec_bar_pane

0xc453,	// (0x0003a174) mup2_spec_bar_pane_g1

0xc45d,	// (0x0003a17e) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003d327) mup2_spec_bar_pane_g

0x5086,	// (0x00032da7) mup2_osc_middle_pane

0xc46f,	// (0x0003a190) mup2_visualizer_osc_pane_g1

0x9b9f,	// (0x000378c0) popup_number_entry_window_t1_ParamLimits

0x9bb2,	// (0x000378d3) popup_number_entry_window_t2_ParamLimits

0x9bc4,	// (0x000378e5) popup_number_entry_window_t3_ParamLimits

0x1968,	// (0x0002f689) popup_number_entry_window_t5_ParamLimits

0x1968,	// (0x0002f689) popup_number_entry_window_t5

0xf0ca,	// (0x0003cdeb) popup_number_entry_window_t_ParamLimits

0x9bd6,	// (0x000378f7) text_title_cp2_ParamLimits

0x4126,	// (0x00031e47) aid_hotspot_pointer_text2_pane

0x417c,	// (0x00031e9d) main_viewer_pane_g9_ParamLimits

0x417c,	// (0x00031e9d) main_viewer_pane_g9

0xa845,	// (0x00038566) cale_month_pane_t1_ParamLimits

0xa882,	// (0x000385a3) bg_cale_pane_ParamLimits

0xa89a,	// (0x000385bb) list_cale_pane_ParamLimits

0xa8ab,	// (0x000385cc) listscroll_cale_day_pane_t1

0xa8bd,	// (0x000385de) scroll_pane_cp09_ParamLimits

0x3ea9,	// (0x00031bca) main_mup_eq_pane_t1_ParamLimits

0x3ea9,	// (0x00031bca) main_mup_eq_pane_t1

0x3ec3,	// (0x00031be4) main_mup_eq_pane_t2_ParamLimits

0x3ec3,	// (0x00031be4) main_mup_eq_pane_t2

0x3edd,	// (0x00031bfe) main_mup_eq_pane_t3_ParamLimits

0x3edd,	// (0x00031bfe) main_mup_eq_pane_t3

0x3ef9,	// (0x00031c1a) main_mup_eq_pane_t4_ParamLimits

0x3ef9,	// (0x00031c1a) main_mup_eq_pane_t4

0x3f15,	// (0x00031c36) main_mup_eq_pane_t5_ParamLimits

0x3f15,	// (0x00031c36) main_mup_eq_pane_t5

0x3f31,	// (0x00031c52) main_mup_eq_pane_t6_ParamLimits

0x3f31,	// (0x00031c52) main_mup_eq_pane_t6

0x3f45,	// (0x00031c66) main_mup_eq_pane_t7_ParamLimits

0x3f45,	// (0x00031c66) main_mup_eq_pane_t7

0x3f59,	// (0x00031c7a) main_mup_eq_pane_t8_ParamLimits

0x3f59,	// (0x00031c7a) main_mup_eq_pane_t8

0x3f6d,	// (0x00031c8e) main_mup_eq_pane_t9_ParamLimits

0x3f6d,	// (0x00031c8e) main_mup_eq_pane_t9

0x3f87,	// (0x00031ca8) main_mup_eq_pane_t10_ParamLimits

0x3f87,	// (0x00031ca8) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003d176) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003d176) main_mup_eq_pane_t

0x4036,	// (0x00031d57) mup_equalizer_pane_cp5_ParamLimits

0x404a,	// (0x00031d6b) mup_equalizer_pane_cp6_ParamLimits

0x405e,	// (0x00031d7f) mup_equalizer_pane_cp7_ParamLimits

0x195e,	// (0x0002f67f) main_gallery_pane

0xc478,	// (0x0003a199) smil2_volume_pane

0xc480,	// (0x0003a1a1) smil_status_volume_pane_g1_ParamLimits

0xc493,	// (0x0003a1b4) smil_status_volume_pane_g2_ParamLimits

0x4b66,	// (0x00032887) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0003d32c) smil_status_volume_pane_g_ParamLimits

0xc5e5,	// (0x0003a306) bg_popup_window_pane_cp07_ParamLimits

0xc5f3,	// (0x0003a314) blid_firmament_pane

0x508f,	// (0x00032db0) aid_size_cell_gallery_ParamLimits

0x508f,	// (0x00032db0) aid_size_cell_gallery

0x50a5,	// (0x00032dc6) grid_gallery_pane_ParamLimits

0x50a5,	// (0x00032dc6) grid_gallery_pane

0x50be,	// (0x00032ddf) cell_gallery_pane_ParamLimits

0x50be,	// (0x00032ddf) cell_gallery_pane

0xc716,	// (0x0003a437) bg_cell_gallery_focus_pane_ParamLimits

0xc716,	// (0x0003a437) bg_cell_gallery_focus_pane

0xc728,	// (0x0003a449) cell_gallery_pane_g1_ParamLimits

0xc728,	// (0x0003a449) cell_gallery_pane_g1

0x5107,	// (0x00032e28) cell_gallery_pane_g2_ParamLimits

0x5107,	// (0x00032e28) cell_gallery_pane_g2

0x5114,	// (0x00032e35) cell_gallery_pane_g3_ParamLimits

0x5114,	// (0x00032e35) cell_gallery_pane_g3

0xc734,	// (0x0003a455) cell_gallery_pane_g4_ParamLimits

0xc734,	// (0x0003a455) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0003d3da) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0003d3da) cell_gallery_pane_g

0xc740,	// (0x0003a461) bg_cell_gallery_focus_pane_g1

0xc748,	// (0x0003a469) bg_cell_gallery_focus_pane_g2

0xc750,	// (0x0003a471) bg_cell_gallery_focus_pane_g3

0xc758,	// (0x0003a479) bg_cell_gallery_focus_pane_g4

0xc760,	// (0x0003a481) bg_cell_gallery_focus_pane_g5

0xc768,	// (0x0003a489) bg_cell_gallery_focus_pane_g6

0xc770,	// (0x0003a491) bg_cell_gallery_focus_pane_g7

0xc778,	// (0x0003a499) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0003d3e3) bg_cell_gallery_focus_pane_g

0xc780,	// (0x0003a4a1) aid_firma_cardinal

0xc794,	// (0x0003a4b5) blid_firmament_pane_t1

0xc7ab,	// (0x0003a4cc) blid_firmament_pane_t2

0xc7c2,	// (0x0003a4e3) blid_firmament_pane_t3

0xc7d9,	// (0x0003a4fa) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0003d3f4) blid_firmament_pane_t

0xc7f0,	// (0x0003a511) blid_sat_info_pane

0xc800,	// (0x0003a521) blid_sat_info_pane_g1

0xc800,	// (0x0003a521) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0003d3fd) blid_sat_info_pane_g

0xc80a,	// (0x0003a52b) blid_sat_info_pane_t1

0xc818,	// (0x0003a539) smil2_volume_content_pane

0xc821,	// (0x0003a542) smil2_volume_pane_g1

0xc829,	// (0x0003a54a) smil2_volume_content_pane_g1

0xc832,	// (0x0003a553) smil2_volume_content_pane_g2

0xc83b,	// (0x0003a55c) smil2_volume_content_pane_g3

0xc844,	// (0x0003a565) smil2_volume_content_pane_g4

0xc84d,	// (0x0003a56e) smil2_volume_content_pane_g5

0xc856,	// (0x0003a577) smil2_volume_content_pane_g6

0xc85f,	// (0x0003a580) smil2_volume_content_pane_g7

0xc868,	// (0x0003a589) smil2_volume_content_pane_g8

0xc871,	// (0x0003a592) smil2_volume_content_pane_g9

0xc87a,	// (0x0003a59b) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0003d402) smil2_volume_content_pane_g

0x2057,	// (0x0002fd78) cale_week_day_heading_pane_t1_ParamLimits

0x209c,	// (0x0002fdbd) cale_week_day_heading_pane_t2_ParamLimits

0x20e6,	// (0x0002fe07) cale_week_day_heading_pane_t3_ParamLimits

0x2130,	// (0x0002fe51) cale_week_day_heading_pane_t4_ParamLimits

0x217a,	// (0x0002fe9b) cale_week_day_heading_pane_t5_ParamLimits

0x21cc,	// (0x0002feed) cale_week_day_heading_pane_t6_ParamLimits

0x221e,	// (0x0002ff3f) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0003cef2) cale_week_day_heading_pane_t_ParamLimits

0xa41c,	// (0x0003813d) bg_cale_side_pane_ParamLimits

0x04cc,	// (0x0002e1ed) cale_week_time_pane_t1_ParamLimits

0x04e6,	// (0x0002e207) cale_week_time_pane_t2_ParamLimits

0x0500,	// (0x0002e221) cale_week_time_pane_t3_ParamLimits

0x051a,	// (0x0002e23b) cale_week_time_pane_t4_ParamLimits

0x0534,	// (0x0002e255) cale_week_time_pane_t5_ParamLimits

0x054e,	// (0x0002e26f) cale_week_time_pane_t6_ParamLimits

0x0568,	// (0x0002e289) cale_week_time_pane_t7_ParamLimits

0x0582,	// (0x0002e2a3) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0003cf01) cale_week_time_pane_t_ParamLimits

0x2263,	// (0x0002ff84) cell_cale_week_pane_g2_ParamLimits

0xa41c,	// (0x0003813d) bg_cale_side_pane_cp01_ParamLimits

0x351e,	// (0x0003123f) cale_month_week_pane_t1_ParamLimits

0x3537,	// (0x00031258) cale_month_week_pane_t2_ParamLimits

0x3550,	// (0x00031271) cale_month_week_pane_t3_ParamLimits

0x3569,	// (0x0003128a) cale_month_week_pane_t4_ParamLimits

0x3582,	// (0x000312a3) cale_month_week_pane_t5_ParamLimits

0x359b,	// (0x000312bc) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003cfd6) cale_month_week_pane_t_ParamLimits

0x3708,	// (0x00031429) cell_cale_month_pane_g1_ParamLimits

0x195e,	// (0x0002f67f) main_cale_event_viewer_pane

0x9b75,	// (0x00037896) listscroll_cale_event_viewer_pane

0xc883,	// (0x0003a5a4) list_cale_ev_pane

0xc88b,	// (0x0003a5ac) scroll_pane_cp023

0xc897,	// (0x0003a5b8) field_cale_ev_pane_ParamLimits

0xc897,	// (0x0003a5b8) field_cale_ev_pane

0xc8b5,	// (0x0003a5d6) field_cale_ev_content_pane_ParamLimits

0xc8b5,	// (0x0003a5d6) field_cale_ev_content_pane

0xc8c1,	// (0x0003a5e2) field_cale_ev_pane_g1_ParamLimits

0xc8c1,	// (0x0003a5e2) field_cale_ev_pane_g1

0xc8cd,	// (0x0003a5ee) field_cale_ev_pane_g2_ParamLimits

0xc8cd,	// (0x0003a5ee) field_cale_ev_pane_g2

0xc8e5,	// (0x0003a606) field_cale_ev_pane_g3_ParamLimits

0xc8e5,	// (0x0003a606) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0003d417) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0003d417) field_cale_ev_pane_g

0xc8fd,	// (0x0003a61e) field_cale_ev_pane_t1_ParamLimits

0xc8fd,	// (0x0003a61e) field_cale_ev_pane_t1

0xc914,	// (0x0003a635) field_cale_ev_content_pane_t1_ParamLimits

0xc914,	// (0x0003a635) field_cale_ev_content_pane_t1

0xb0f0,	// (0x00038e11) bg_button_pane_cp01

0x1d84,	// (0x0002faa5) listscroll_cale_week_pane_ParamLimits

0xa3c7,	// (0x000380e8) popup_toolbar_window_cp01

0xa3ed,	// (0x0003810e) listscroll_cale_week_pane_t1_ParamLimits

0x1d84,	// (0x0002faa5) listscroll_cale_day_pane_ParamLimits

0xa3c7,	// (0x000380e8) popup_toolbar_window_cp02

0xa8ab,	// (0x000385cc) listscroll_cale_day_pane_t1_ParamLimits

0x0618,	// (0x0002e339) main_cale_month_pane_ParamLimits

0x4a7a,	// (0x0003279b) popup_toolbar_window_cp03_ParamLimits

0x4a7a,	// (0x0003279b) popup_toolbar_window_cp03

0x435a,	// (0x0003207b) main_image_pane_g2_ParamLimits

0x435a,	// (0x0003207b) main_image_pane_g2

0x436b,	// (0x0003208c) main_image_pane_g3_ParamLimits

0x436b,	// (0x0003208c) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003d208) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003d208) main_image_pane_g

0xb283,	// (0x00038fa4) main_image_pane_t1_ParamLimits

0x437c,	// (0x0003209d) main_image_pane_t2_ParamLimits

0x437c,	// (0x0003209d) main_image_pane_t2

0x438e,	// (0x000320af) main_image_pane_t3_ParamLimits

0x438e,	// (0x000320af) main_image_pane_t3

0x43b6,	// (0x000320d7) main_image_pane_t4_ParamLimits

0x43b6,	// (0x000320d7) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003d20f) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003d20f) main_image_pane_t

0x43d6,	// (0x000320f7) popup_image_details_window_cp01

0x43e0,	// (0x00032101) popup_toobar_trans_pane_cp01_ParamLimits

0x43e0,	// (0x00032101) popup_toobar_trans_pane_cp01

0x0731,	// (0x0002e452) popup_image_details_window_ParamLimits

0x0731,	// (0x0002e452) popup_image_details_window

0x4a4d,	// (0x0003276e) popup_image_focus_window

0x08b6,	// (0x0002e5d7) camera2_autofocus_pane_ParamLimits

0x08b6,	// (0x0002e5d7) camera2_autofocus_pane

0x9b75,	// (0x00037896) bg_popup_sub_pane_cp06

0xc932,	// (0x0003a653) popup_image_focus_window_g1

0xc93a,	// (0x0003a65b) popup_image_focus_window_g2

0xc942,	// (0x0003a663) popup_image_focus_window_g3

0xc94a,	// (0x0003a66b) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0003d41e) popup_image_focus_window_g

0xc952,	// (0x0003a673) popup_image_focus_window_t1

0xc960,	// (0x0003a681) popup_image_focus_window_t2

0xc970,	// (0x0003a691) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0003d427) popup_image_focus_window_t

0xc97e,	// (0x0003a69f) camera2_autofocus_pane_g1

0xa708,	// (0x00038429) bg_tb_trans_pane_cp01

0xc98c,	// (0x0003a6ad) popup_image_details_window_g1

0xc99f,	// (0x0003a6c0) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0003d439) popup_image_details_window_g

0xc9c8,	// (0x0003a6e9) popup_image_details_window_t1

0xc9da,	// (0x0003a6fb) popup_image_details_window_t2

0xc9f3,	// (0x0003a714) popup_image_details_window_t3

0xca07,	// (0x0003a728) popup_image_details_window_t4

0xca22,	// (0x0003a743) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0003d440) popup_image_details_window_t

0xa29e,	// (0x00037fbf) bg_calc_paper_pane_ParamLimits

0x195e,	// (0x0002f67f) grid_highlight_pane_cp013

0x1bd8,	// (0x0002f8f9) list_calc_pane_ParamLimits

0x1bea,	// (0x0002f90b) scroll_pane_cp024

0xa2b2,	// (0x00037fd3) bg_calc_display_pane_ParamLimits

0x0423,	// (0x0002e144) calc_display_pane_t1_ParamLimits

0x0435,	// (0x0002e156) calc_display_pane_t2_ParamLimits

0x1bf2,	// (0x0002f913) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0003ce72) calc_display_pane_t_ParamLimits

0x0496,	// (0x0002e1b7) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0003ce8f) cell_calc_pane_g

0x049f,	// (0x0002e1c0) cell_calc_pane_t1

0xa311,	// (0x00038032) grid_highlight_pane_cp02_ParamLimits

0xa327,	// (0x00038048) toolbar_button_pane_cp01_ParamLimits

0xa327,	// (0x00038048) toolbar_button_pane_cp01

0xb2c8,	// (0x00038fe9) temp_image_control_pane_ParamLimits

0xb2c8,	// (0x00038fe9) temp_image_control_pane

0x1944,	// (0x0002f665) main_mp3_pane

0xca3c,	// (0x0003a75d) temp_image_control_pane_g1_ParamLimits

0xca3c,	// (0x0003a75d) temp_image_control_pane_g1

0xca4a,	// (0x0003a76b) temp_image_control_pane_g2_ParamLimits

0xca4a,	// (0x0003a76b) temp_image_control_pane_g2

0xca5c,	// (0x0003a77d) temp_image_control_pane_g3_ParamLimits

0xca5c,	// (0x0003a77d) temp_image_control_pane_g3

0x5151,	// (0x00032e72) temp_image_control_pane_g4_ParamLimits

0x5151,	// (0x00032e72) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0003d44b) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0003d44b) temp_image_control_pane_g

0xca3c,	// (0x0003a75d) main_mp3_pane_g1

0x5164,	// (0x00032e85) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0003d454) main_mp3_pane_g

0xca9f,	// (0x0003a7c0) main_mp3_pane_t1

0xa47f,	// (0x000381a0) main_camera_pane_g8_ParamLimits

0xa47f,	// (0x000381a0) main_camera_pane_g8

0x2567,	// (0x00030288) main_video_pane_g7_ParamLimits

0x2567,	// (0x00030288) main_video_pane_g7

0x4d61,	// (0x00032a82) main_camera2_pane_t7_ParamLimits

0x4d61,	// (0x00032a82) main_camera2_pane_t7

0xa5c7,	// (0x000382e8) scroll_pane_cp025_ParamLimits

0xa5c7,	// (0x000382e8) scroll_pane_cp025

0xa5db,	// (0x000382fc) scroll_pane_cp026_ParamLimits

0xa5db,	// (0x000382fc) scroll_pane_cp026

0xa5ea,	// (0x0003830b) wml_content_pane_ParamLimits

0x195e,	// (0x0002f67f) main_touch_calib_pane

0x5238,	// (0x00032f59) main_touch_calib_pane_g1

0x524a,	// (0x00032f6b) main_touch_calib_pane_g2

0x525c,	// (0x00032f7d) main_touch_calib_pane_g3

0x526e,	// (0x00032f8f) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0003d472) main_touch_calib_pane_g

0x5280,	// (0x00032fa1) main_touch_calib_pane_t1

0x529a,	// (0x00032fbb) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0003d47b) main_touch_calib_pane_t

0xae14,	// (0x00038b35) mup_progress_pane_cp02

0xae49,	// (0x00038b6a) navi_pane_g1

0xaf04,	// (0x00038c25) navi_pane_mp_t3

0x1944,	// (0x0002f665) main_mp3_pane_ParamLimits

0x4a8f,	// (0x000327b0) navi_pane_ParamLimits

0xca3c,	// (0x0003a75d) main_mp3_pane_g1_ParamLimits

0x5164,	// (0x00032e85) main_mp3_pane_g2_ParamLimits

0x5172,	// (0x00032e93) main_mp3_pane_g3_ParamLimits

0x5172,	// (0x00032e93) main_mp3_pane_g3

0x5180,	// (0x00032ea1) main_mp3_pane_g4_ParamLimits

0x5180,	// (0x00032ea1) main_mp3_pane_g4

0xca6c,	// (0x0003a78d) main_mp3_pane_g5_ParamLimits

0xca6c,	// (0x0003a78d) main_mp3_pane_g5

0xca7a,	// (0x0003a79b) main_mp3_pane_g6_ParamLimits

0xca7a,	// (0x0003a79b) main_mp3_pane_g6

0xca87,	// (0x0003a7a8) main_mp3_pane_g7_ParamLimits

0xca87,	// (0x0003a7a8) main_mp3_pane_g7

0xca93,	// (0x0003a7b4) main_mp3_pane_g8_ParamLimits

0xca93,	// (0x0003a7b4) main_mp3_pane_g8

0xf733,	// (0x0003d454) main_mp3_pane_g_ParamLimits

0x518c,	// (0x00032ead) main_mp3_pane_t2

0x519a,	// (0x00032ebb) main_mp3_pane_t3

0xcaad,	// (0x0003a7ce) main_mp3_pane_t4

0xcabb,	// (0x0003a7dc) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0003d465) main_mp3_pane_t

0xcac9,	// (0x0003a7ea) mup_progress_pane_cp01

0x18b9,	// (0x0002f5da) aid_zoom_text_secondary2

0xc883,	// (0x0003a5a4) list_cale_ev2_pane

0xc88b,	// (0x0003a5ac) scroll_pane_cp023_ParamLimits

0x52f0,	// (0x00033011) field_cale_ev2_pane_ParamLimits

0x52f0,	// (0x00033011) field_cale_ev2_pane

0x5310,	// (0x00033031) field_cale_ev2_pane_g1_ParamLimits

0x5310,	// (0x00033031) field_cale_ev2_pane_g1

0x531c,	// (0x0003303d) field_cale_ev2_pane_g2_ParamLimits

0x531c,	// (0x0003303d) field_cale_ev2_pane_g2

0x5334,	// (0x00033055) field_cale_ev2_pane_g3_ParamLimits

0x5334,	// (0x00033055) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0003d486) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0003d486) field_cale_ev2_pane_g

0x534c,	// (0x0003306d) field_cale_ev2_pane_t1_ParamLimits

0x534c,	// (0x0003306d) field_cale_ev2_pane_t1

0x5363,	// (0x00033084) field_cale_ev2_pane_t2_ParamLimits

0x5363,	// (0x00033084) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0003d48f) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0003d48f) field_cale_ev2_pane_t

0x420f,	// (0x00031f30) main_postcard_pane_g5_ParamLimits

0x420f,	// (0x00031f30) main_postcard_pane_g5

0x4225,	// (0x00031f46) main_postcard_pane_g6_ParamLimits

0x4225,	// (0x00031f46) main_postcard_pane_g6

0x2333,	// (0x00030054) camera2_autofocus_pane_cp_ParamLimits

0x2333,	// (0x00030054) camera2_autofocus_pane_cp

0x1944,	// (0x0002f665) main_mup3_pane

0x5378,	// (0x00033099) main_mup3_pane_g1_ParamLimits

0x5378,	// (0x00033099) main_mup3_pane_g1

0x539a,	// (0x000330bb) main_mup3_pane_g2_ParamLimits

0x539a,	// (0x000330bb) main_mup3_pane_g2

0x5418,	// (0x00033139) main_mup3_pane_g3_ParamLimits

0x5418,	// (0x00033139) main_mup3_pane_g3

0x545e,	// (0x0003317f) main_mup3_pane_g4_ParamLimits

0x545e,	// (0x0003317f) main_mup3_pane_g4

0x54a4,	// (0x000331c5) main_mup3_pane_g5_ParamLimits

0x54a4,	// (0x000331c5) main_mup3_pane_g5

0x54ea,	// (0x0003320b) main_mup3_pane_g6_ParamLimits

0x54ea,	// (0x0003320b) main_mup3_pane_g6

0xcafd,	// (0x0003a81e) main_mup3_pane_g7_ParamLimits

0xcafd,	// (0x0003a81e) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0003d49f) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0003d49f) main_mup3_pane_g

0x5568,	// (0x00033289) main_mup3_pane_t1_ParamLimits

0x5568,	// (0x00033289) main_mup3_pane_t1

0x55dc,	// (0x000332fd) main_mup3_pane_t2_ParamLimits

0x55dc,	// (0x000332fd) main_mup3_pane_t2

0x56b0,	// (0x000333d1) main_mup3_pane_t4_ParamLimits

0x56b0,	// (0x000333d1) main_mup3_pane_t4

0x5706,	// (0x00033427) main_mup3_pane_t5_ParamLimits

0x5706,	// (0x00033427) main_mup3_pane_t5

0x57c2,	// (0x000334e3) main_mup3_pane_t6_ParamLimits

0x57c2,	// (0x000334e3) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0003d4b0) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0003d4b0) main_mup3_pane_t

0x587a,	// (0x0003359b) mup3_progress_pane_ParamLimits

0x587a,	// (0x0003359b) mup3_progress_pane

0x5910,	// (0x00033631) popup_mup3_control_window_ParamLimits

0x5910,	// (0x00033631) popup_mup3_control_window

0xcb0b,	// (0x0003a82c) popup_mup3_text_window

0x5942,	// (0x00033663) mup3_progress_pane_t1

0x5961,	// (0x00033682) mup3_progress_pane_t2

0xcb13,	// (0x0003a834) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0003d4bd) mup3_progress_pane_t

0xcb30,	// (0x0003a851) mup_progress_pane_cp03

0x9b75,	// (0x00037896) bg_tb_trans_pane_cp04

0x5980,	// (0x000336a1) mup3_volume_pane

0x5988,	// (0x000336a9) popup_mup3_control_window_g1

0x5991,	// (0x000336b2) mup3_volume_pane_g1

0x599a,	// (0x000336bb) mup3_volume_pane_g2

0x59a3,	// (0x000336c4) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0003d4c4) mup3_volume_pane_g

0x9b75,	// (0x00037896) bg_tb_trans_pane_cp03

0xcb40,	// (0x0003a861) popup_mup3_text_window_g1

0xcb48,	// (0x0003a869) popup_mup3_text_window_t1

0xa2fa,	// (0x0003801b) list_calc_item_pane_g1_ParamLimits

0xc553,	// (0x0003a274) mup_volume_pane_cp_g1

0x52b4,	// (0x00032fd5) main_touch_calib_pane_t3

0x52c8,	// (0x00032fe9) main_touch_calib_pane_t4

0x52dc,	// (0x00032ffd) main_touch_calib_pane_t5

0x18a5,	// (0x0002f5c6) aid_cell_size_toolbar2

0x18ad,	// (0x0002f5ce) aid_popup3_width_pane

0x18b9,	// (0x0002f5da) aid_zoom_text_msg_primary

0x2308,	// (0x00030029) vorec_t7

0xa2be,	// (0x00037fdf) bg_calc_paper_pane_g1_ParamLimits

0xa2ca,	// (0x00037feb) bg_calc_paper_pane_g2_ParamLimits

0xa2d6,	// (0x00037ff7) bg_calc_paper_pane_g3_ParamLimits

0xa2e2,	// (0x00038003) bg_calc_paper_pane_g4_ParamLimits

0xa2ee,	// (0x0003800f) bg_calc_paper_pane_g5_ParamLimits

0x1c04,	// (0x0002f925) bg_calc_paper_pane_g6_ParamLimits

0x1c13,	// (0x0002f934) bg_calc_paper_pane_g7_ParamLimits

0x1c22,	// (0x0002f943) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0003ce79) bg_calc_paper_pane_g_ParamLimits

0x1c35,	// (0x0002f956) calc_bg_paper_pane_g9_ParamLimits

0x247e,	// (0x0003019f) image_qvga_pane_ParamLimits

0x247e,	// (0x0003019f) image_qvga_pane

0xa1ed,	// (0x00037f0e) bg_popup_sub_pane_cp04_ParamLimits

0xb1ff,	// (0x00038f20) popup_mup_playback_window_g1_ParamLimits

0xb20b,	// (0x00038f2c) popup_mup_playback_window_t1_ParamLimits

0xb220,	// (0x00038f41) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003d203) popup_mup_playback_window_t_ParamLimits

0x4d8f,	// (0x00032ab0) main_mup2_pane_g3_ParamLimits

0x4d8f,	// (0x00032ab0) main_mup2_pane_g3

0x288e,	// (0x000305af) popup_toolbar_window_cp04

0xb602,	// (0x00039323) popup_call2_audio_second_window_g3_ParamLimits

0xb602,	// (0x00039323) popup_call2_audio_second_window_g3

0xba0c,	// (0x0003972d) popup_call2_audio_first_window_g4_ParamLimits

0xba0c,	// (0x0003972d) popup_call2_audio_first_window_g4

0xc08b,	// (0x00039dac) popup_call2_audio_in_window_g4_ParamLimits

0xc08b,	// (0x00039dac) popup_call2_audio_in_window_g4

0x433c,	// (0x0003205d) aid_area_sk_bg_cut_ParamLimits

0x433c,	// (0x0003205d) aid_area_sk_bg_cut

0xb235,	// (0x00038f56) aid_area_sk_bg_cut_2_ParamLimits

0xb235,	// (0x00038f56) aid_area_sk_bg_cut_2

0x50f7,	// (0x00032e18) aid_placing_details_win

0x50ff,	// (0x00032e20) aid_placing_details_win_2

0xc97e,	// (0x0003a69f) camera2_autofocus_pane_g1_ParamLimits

0x02df,	// (0x0002e000) popup_fixed_preview_cale_window_ParamLimits

0x02df,	// (0x0002e000) popup_fixed_preview_cale_window

0xaf82,	// (0x00038ca3) navi_slider_pane_g3

0xaf8b,	// (0x00038cac) navi_slider_pane_g4

0xaf94,	// (0x00038cb5) navi_slider_pane_g5

0xaf82,	// (0x00038ca3) navi_slider_pane_g6

0x3c6f,	// (0x00031990) navi_slider_pane_g7

0xb0b5,	// (0x00038dd6) mup_scale_pane_g3

0xb0be,	// (0x00038ddf) mup_scale_pane_g4

0xb0c7,	// (0x00038de8) mup_scale_pane_g5

0x4072,	// (0x00031d93) mup_scale_pane_g6

0x407b,	// (0x00031d9c) mup_scale_pane_g7

0xaf82,	// (0x00038ca3) cams2_slider_pane_g3

0xc5d5,	// (0x0003a2f6) cams2_slider_pane_g4

0x5044,	// (0x00032d65) cams2_slider_pane_g5

0xaf82,	// (0x00038ca3) cams2_slider_pane_g6

0x504c,	// (0x00032d6d) cams2_slider_pane_g7

0xc800,	// (0x0003a521) camera2_autofocus_pane_cp_g1

0xc3ec,	// (0x0003a10d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3ec,	// (0x0003a10d) bg_popup_preview_window_pane_cp02

0xcb56,	// (0x0003a877) list_fp_cale_pane_ParamLimits

0xcb56,	// (0x0003a877) list_fp_cale_pane

0xcb62,	// (0x0003a883) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb62,	// (0x0003a883) popup_fixed_preview_cale_window_t1

0x59ac,	// (0x000336cd) popup_fixed_preview_cale_window_t2_ParamLimits

0x59ac,	// (0x000336cd) popup_fixed_preview_cale_window_t2

0x59c1,	// (0x000336e2) popup_fixed_preview_cale_window_t3_ParamLimits

0x59c1,	// (0x000336e2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0003d4cb) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0003d4cb) popup_fixed_preview_cale_window_t

0x59d6,	// (0x000336f7) list_single_fp_cale_pane_ParamLimits

0x59d6,	// (0x000336f7) list_single_fp_cale_pane

0xcb80,	// (0x0003a8a1) list_single_fp_cale_pane_g1_ParamLimits

0xcb80,	// (0x0003a8a1) list_single_fp_cale_pane_g1

0xcb8c,	// (0x0003a8ad) list_single_fp_cale_pane_g2_ParamLimits

0xcb8c,	// (0x0003a8ad) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0003d4d2) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0003d4d2) list_single_fp_cale_pane_g

0xcba5,	// (0x0003a8c6) list_single_fp_cale_pane_t1_ParamLimits

0xcba5,	// (0x0003a8c6) list_single_fp_cale_pane_t1

0xcbb7,	// (0x0003a8d8) list_single_fp_cale_pane_t2_ParamLimits

0xcbb7,	// (0x0003a8d8) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0003d4d9) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0003d4d9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x195e,	// (0x0002f67f) main_dialer_pane

0x59eb,	// (0x0003370c) aid_cell_size_keypad

0x59f5,	// (0x00033716) dialer_ne_pane

0x59fd,	// (0x0003371e) grid_dialer_command_1_pane

0x5a05,	// (0x00033726) grid_dialer_command_2_pane

0x5a0d,	// (0x0003372e) grid_dialer_keypad_pane

0x5a1f,	// (0x00033740) bg_popup_call_pane_cp06_ParamLimits

0x5a1f,	// (0x00033740) bg_popup_call_pane_cp06

0x5a2b,	// (0x0003374c) dialer_ne_clear_pane_ParamLimits

0x5a2b,	// (0x0003374c) dialer_ne_clear_pane

0xcbea,	// (0x0003a90b) dialer_ne_pane_g1

0xcbf2,	// (0x0003a913) dialer_ne_pane_t1_ParamLimits

0xcbf2,	// (0x0003a913) dialer_ne_pane_t1

0x5a37,	// (0x00033758) dialer_ne_pane_t2_ParamLimits

0x5a37,	// (0x00033758) dialer_ne_pane_t2

0x5a61,	// (0x00033782) dialer_ne_pane_t3_ParamLimits

0x5a61,	// (0x00033782) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0003d4de) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0003d4de) dialer_ne_pane_t

0x5a91,	// (0x000337b2) dialer_ne_pane_t3_copy1_ParamLimits

0x5a91,	// (0x000337b2) dialer_ne_pane_t3_copy1

0x5ac0,	// (0x000337e1) cell_dialer_keypad_pane_ParamLimits

0x5ac0,	// (0x000337e1) cell_dialer_keypad_pane

0x5ad7,	// (0x000337f8) cell_dialer_command_1_pane_ParamLimits

0x5ad7,	// (0x000337f8) cell_dialer_command_1_pane

0x5aed,	// (0x0003380e) cell_dialer_command_2_pane_ParamLimits

0x5aed,	// (0x0003380e) cell_dialer_command_2_pane

0xcc04,	// (0x0003a925) bg_button_pane_cp02_ParamLimits

0xcc04,	// (0x0003a925) bg_button_pane_cp02

0x5afc,	// (0x0003381d) cell_dialer_keypad_pane_g1_ParamLimits

0x5afc,	// (0x0003381d) cell_dialer_keypad_pane_g1

0xcc04,	// (0x0003a925) bg_button_pane_cp03_ParamLimits

0xcc04,	// (0x0003a925) bg_button_pane_cp03

0x5b10,	// (0x00033831) cell_dialer_command_1_pane_g1_ParamLimits

0x5b10,	// (0x00033831) cell_dialer_command_1_pane_g1

0xcc10,	// (0x0003a931) bg_button_pane_cp04

0x5b24,	// (0x00033845) cell_dialer_command_2_pane_g1

0xa477,	// (0x00038198) bg_button_pane_cp06

0xcc18,	// (0x0003a939) dialer_ne_clear_pane_g1

0xae55,	// (0x00038b76) navi_pane_g2

0xae83,	// (0x00038ba4) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003d106) navi_pane_g

0xaf12,	// (0x00038c33) navi_pane_mv_g2

0xaf39,	// (0x00038c5a) navi_pane_mv_g5

0x3c24,	// (0x00031945) navi_pane_mv_t1

0xa2b2,	// (0x00037fd3) main_clock2_pane

0x5b6f,	// (0x00033890) main_clock2_list_pane_ParamLimits

0x5b6f,	// (0x00033890) main_clock2_list_pane

0x5ba5,	// (0x000338c6) main_clock2_pane_t1_ParamLimits

0x5ba5,	// (0x000338c6) main_clock2_pane_t1

0x5be1,	// (0x00033902) main_clock2_pane_t2_ParamLimits

0x5be1,	// (0x00033902) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003d4ea) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003d4ea) main_clock2_pane_t

0x5c7f,	// (0x000339a0) popup_clock_analogue_window_cp03_ParamLimits

0x5c7f,	// (0x000339a0) popup_clock_analogue_window_cp03

0x5ca4,	// (0x000339c5) popup_clock_digital_window_cp02_ParamLimits

0x5ca4,	// (0x000339c5) popup_clock_digital_window_cp02

0x5d15,	// (0x00033a36) main_clock2_list_single_pane_ParamLimits

0x5d15,	// (0x00033a36) main_clock2_list_single_pane

0xa477,	// (0x00038198) list_highlight_pane_cp05

0xcc56,	// (0x0003a977) main_clock2_list_single_pane_t1

0x288e,	// (0x000305af) popup_toolbar_window_cp04_ParamLimits

0x5121,	// (0x00032e42) camera2_autofocus_pane_g2_ParamLimits

0x5121,	// (0x00032e42) camera2_autofocus_pane_g2

0x512d,	// (0x00032e4e) camera2_autofocus_pane_g3_ParamLimits

0x512d,	// (0x00032e4e) camera2_autofocus_pane_g3

0x5139,	// (0x00032e5a) camera2_autofocus_pane_g4_ParamLimits

0x5139,	// (0x00032e5a) camera2_autofocus_pane_g4

0x5145,	// (0x00032e66) camera2_autofocus_pane_g5_ParamLimits

0x5145,	// (0x00032e66) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0003d42e) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0003d42e) camera2_autofocus_pane_g

0xcadd,	// (0x0003a7fe) camera2_autofocus_pane_cp_g2

0xcae5,	// (0x0003a806) camera2_autofocus_pane_cp_g3

0xcaed,	// (0x0003a80e) camera2_autofocus_pane_cp_g4

0xcaf5,	// (0x0003a816) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0003d494) camera2_autofocus_pane_cp_g

0x5a17,	// (0x00033738) popup_dialer_spcha_window

0x9b75,	// (0x00037896) bg_popup_sub_pane_cp07

0xcc64,	// (0x0003a985) list_spcha_pane

0xcc6c,	// (0x0003a98d) list_single_spcha_pane_ParamLimits

0xcc6c,	// (0x0003a98d) list_single_spcha_pane

0x9b75,	// (0x00037896) list_highlight_pane_cp06

0xcc7d,	// (0x0003a99e) list_single_spcha_pane_t1

0xbe35,	// (0x00039b56) popup_call2_audio_out_window_g4_ParamLimits

0xbe35,	// (0x00039b56) popup_call2_audio_out_window_g4

0x195e,	// (0x0002f67f) main_imed2_pane

0x4a55,	// (0x00032776) popup_imed_adjust2_window

0x0749,	// (0x0002e46a) popup_imed_trans_window_ParamLimits

0x0749,	// (0x0002e46a) popup_imed_trans_window

0xc63e,	// (0x0003a35f) popup_blid_sat_info2_window_t1

0xc64c,	// (0x0003a36d) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0003d3c3) popup_blid_sat_info2_window_t

0x5d47,	// (0x00033a68) aid_size_cell_colour_35

0x5d67,	// (0x00033a88) aid_size_cell_colour_112

0x5d87,	// (0x00033aa8) aid_size_cell_effect

0xc3f8,	// (0x0003a119) bg_tb_trans_pane_cp02

0xa9b4,	// (0x000386d5) heading_imed_pane

0x5da7,	// (0x00033ac8) listscroll_imed_pane

0xcc97,	// (0x0003a9b8) heading_imed_pane_g1

0xcc9f,	// (0x0003a9c0) heading_imed_pane_t1

0xccad,	// (0x0003a9ce) grid_imed_colour_35_pane_ParamLimits

0xccad,	// (0x0003a9ce) grid_imed_colour_35_pane

0x5db3,	// (0x00033ad4) grid_imed_effect_pane

0xccc4,	// (0x0003a9e5) list_imed_aspect_pane

0x5dc9,	// (0x00033aea) scroll_pane_cp027_ParamLimits

0x5dc9,	// (0x00033aea) scroll_pane_cp027

0x5dda,	// (0x00033afb) cell_imed_effect_pane_ParamLimits

0x5dda,	// (0x00033afb) cell_imed_effect_pane

0xcccc,	// (0x0003a9ed) cell_imed_colour_pane_ParamLimits

0xcccc,	// (0x0003a9ed) cell_imed_colour_pane

0xcd0e,	// (0x0003aa2f) cell_imed_colour_pane_g1_ParamLimits

0xcd0e,	// (0x0003aa2f) cell_imed_colour_pane_g1

0xcd1f,	// (0x0003aa40) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd1f,	// (0x0003aa40) hgihlgiht_grid_pane_cp016

0x5e01,	// (0x00033b22) cell_imed_effect_pane_g1

0x5e09,	// (0x00033b2a) grid_highlight_pane_cp017

0xcd30,	// (0x0003aa51) list_imed_single_pane_ParamLimits

0xcd30,	// (0x0003aa51) list_imed_single_pane

0x9b75,	// (0x00037896) list_highlight_pane_cp07

0xcd45,	// (0x0003aa66) list_imed_aspect_pane_comp1_t1

0xc3f8,	// (0x0003a119) bg_tb_trans_pane_cp05

0xcd67,	// (0x0003aa88) popup_imed_adjust2_window_g1

0xcd8e,	// (0x0003aaaf) popup_imed_adjust2_window_t1

0xcda6,	// (0x0003aac7) slider_imed_adjust_pane

0xcdba,	// (0x0003aadb) slider_imed_adjust_pane_g1

0xcdca,	// (0x0003aaeb) slider_imed_adjust_pane_g2

0xcdda,	// (0x0003aafb) slider_imed_adjust_pane_g3

0xcdeb,	// (0x0003ab0c) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003d507) slider_imed_adjust_pane_g

0x5e12,	// (0x00033b33) aid_size_cell_clipart2

0x5e1e,	// (0x00033b3f) grid_imed_clipart_pane

0xcdfc,	// (0x0003ab1d) scroll_pane_cp031

0x5e28,	// (0x00033b49) cell_imed_clipart_pane_ParamLimits

0x5e28,	// (0x00033b49) cell_imed_clipart_pane

0x5e4a,	// (0x00033b6b) cell_imed_clipart_pane_g1

0x9b75,	// (0x00037896) grid_highlight_pane_cp014

0x5b84,	// (0x000338a5) main_clock2_pane_g1_ParamLimits

0x5b84,	// (0x000338a5) main_clock2_pane_g1

0x5cc0,	// (0x000339e1) aid_call2_pane_cp10

0x5cd2,	// (0x000339f3) aid_call_pane_cp10

0xadb6,	// (0x00038ad7) popup_clock_analogue_window_cp10_g1

0xadb6,	// (0x00038ad7) popup_clock_analogue_window_cp10_g2

0x5ce4,	// (0x00033a05) popup_clock_analogue_window_cp10_g3

0x5ce4,	// (0x00033a05) popup_clock_analogue_window_cp10_g4

0xadb6,	// (0x00038ad7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003d4f5) popup_clock_analogue_window_cp10_g

0x5cf6,	// (0x00033a17) popup_clock_analogue_window_cp10_t1

0x0d8d,	// (0x0002eaae) clock_digital_number_pane_cp10_ParamLimits

0x0d8d,	// (0x0002eaae) clock_digital_number_pane_cp10

0x0da5,	// (0x0002eac6) clock_digital_number_pane_cp11_ParamLimits

0x0da5,	// (0x0002eac6) clock_digital_number_pane_cp11

0x0dbd,	// (0x0002eade) clock_digital_number_pane_cp12_ParamLimits

0x0dbd,	// (0x0002eade) clock_digital_number_pane_cp12

0x0dd5,	// (0x0002eaf6) clock_digital_number_pane_cp13_ParamLimits

0x0dd5,	// (0x0002eaf6) clock_digital_number_pane_cp13

0x0ded,	// (0x0002eb0e) clock_digital_separator_pane_cp10_ParamLimits

0x0ded,	// (0x0002eb0e) clock_digital_separator_pane_cp10

0x5d27,	// (0x00033a48) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d27,	// (0x00033a48) popup_clock_digital_window_cp02_t1

0xa1e5,	// (0x00037f06) clock_digital_number_pane_cp10_g1

0xa1e5,	// (0x00037f06) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003d510) clock_digital_number_pane_cp10_g

0xa1e5,	// (0x00037f06) clock_digital_separator_pane_cp10_g1

0xa1e5,	// (0x00037f06) clock_digital_separator_pane_g2_cp10

0xaf41,	// (0x00038c62) navi_pane_vded_g4

0xaf4a,	// (0x00038c6b) navi_pane_vded_g5

0xaf53,	// (0x00038c74) navi_pane_vded_t1

0x195e,	// (0x0002f67f) main_vded_pane

0x5e53,	// (0x00033b74) main_vded_pane_g1

0x5e5d,	// (0x00033b7e) main_vded_pane_g2

0x5e67,	// (0x00033b88) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003d515) main_vded_pane_g

0x5e71,	// (0x00033b92) main_vded_pane_t1

0x5e7f,	// (0x00033ba0) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003d51c) main_vded_pane_t

0x5e8d,	// (0x00033bae) vded_slider_pane

0x5e95,	// (0x00033bb6) vded_video_pane

0xce04,	// (0x0003ab25) vded_video_pane_g1

0x5e9d,	// (0x00033bbe) vded_video_pane_g2

0xc800,	// (0x0003a521) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003d521) vded_video_pane_g

0xce0e,	// (0x0003ab2f) vded_slider_pane_g1

0xc553,	// (0x0003a274) vded_slider_pane_g2

0xce17,	// (0x0003ab38) vded_slider_pane_g3

0xce20,	// (0x0003ab41) vded_slider_pane_g4

0xce29,	// (0x0003ab4a) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003d528) vded_slider_pane_g

0x58f8,	// (0x00033619) mup3_rocker_pane_ParamLimits

0x58f8,	// (0x00033619) mup3_rocker_pane

0x5ea6,	// (0x00033bc7) mup3_control_keys_pane_g1

0x5eae,	// (0x00033bcf) mup3_control_keys_pane_g2

0x5eb6,	// (0x00033bd7) mup3_control_keys_pane_g3

0x5ebe,	// (0x00033bdf) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003d533) mup3_control_keys_pane_g

0x0316,	// (0x0002e037) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0316,	// (0x0002e037) popup_toolbar2_fixed_window_cp01

0x592c,	// (0x0003364d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x592c,	// (0x0003364d) popup_toolbar2_fixed_window_cp02

0xb774,	// (0x00039495) popup_call2_audio_second_window_t4_ParamLimits

0xb774,	// (0x00039495) popup_call2_audio_second_window_t4

0xbca2,	// (0x000399c3) popup_call2_audio_first_window_t6_ParamLimits

0xbca2,	// (0x000399c3) popup_call2_audio_first_window_t6

0xbf38,	// (0x00039c59) popup_call2_audio_out_window_t6_ParamLimits

0xbf38,	// (0x00039c59) popup_call2_audio_out_window_t6

0x195e,	// (0x0002f67f) main_vitu_pane

0x5ece,	// (0x00033bef) aid_size_cell_itu_ParamLimits

0x5ece,	// (0x00033bef) aid_size_cell_itu

0xa708,	// (0x00038429) bg_popup_window_pane_cp08_ParamLimits

0xa708,	// (0x00038429) bg_popup_window_pane_cp08

0x5ee4,	// (0x00033c05) field_vitu_entry_pane_ParamLimits

0x5ee4,	// (0x00033c05) field_vitu_entry_pane

0x5efb,	// (0x00033c1c) grid_vitu_function_pane_ParamLimits

0x5efb,	// (0x00033c1c) grid_vitu_function_pane

0x5f16,	// (0x00033c37) grid_vitu_itu_pane_ParamLimits

0x5f16,	// (0x00033c37) grid_vitu_itu_pane

0x5f34,	// (0x00033c55) cell_vitu_itu_pane_ParamLimits

0x5f34,	// (0x00033c55) cell_vitu_itu_pane

0x5f56,	// (0x00033c77) cell_vitu_function_pane_ParamLimits

0x5f56,	// (0x00033c77) cell_vitu_function_pane

0xa708,	// (0x00038429) bg_popup_sub_pane_cp08_ParamLimits

0xa708,	// (0x00038429) bg_popup_sub_pane_cp08

0x5f6f,	// (0x00033c90) field_vitu_entry_pane_t1_ParamLimits

0x5f6f,	// (0x00033c90) field_vitu_entry_pane_t1

0xce4a,	// (0x0003ab6b) field_vitu_entry_pane_t2_ParamLimits

0xce4a,	// (0x0003ab6b) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003d541) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003d541) field_vitu_entry_pane_t

0xce67,	// (0x0003ab88) bg_button_pane_cp05_ParamLimits

0xce67,	// (0x0003ab88) bg_button_pane_cp05

0x5f8d,	// (0x00033cae) cell_vitu_itu_pane_g1

0x5fa5,	// (0x00033cc6) cell_vitu_itu_pane_t1_ParamLimits

0x5fa5,	// (0x00033cc6) cell_vitu_itu_pane_t1

0x5fb7,	// (0x00033cd8) cell_vitu_itu_pane_t2_ParamLimits

0x5fb7,	// (0x00033cd8) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003d546) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003d546) cell_vitu_itu_pane_t

0xce75,	// (0x0003ab96) bg_button_pane_cp07

0x5fec,	// (0x00033d0d) cell_vitu_function_pane_g1

0x1b00,	// (0x0002f821) main_calc_pane_g1

0x0176,	// (0x0002de97) aid_visual_content_pane

0x195e,	// (0x0002f67f) main_vradio_pane

0x5ff5,	// (0x00033d16) main_vradio_pane_g1_ParamLimits

0x5ff5,	// (0x00033d16) main_vradio_pane_g1

0xce7f,	// (0x0003aba0) main_vradio_pane_g2_ParamLimits

0xce7f,	// (0x0003aba0) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003d54d) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003d54d) main_vradio_pane_g

0x600e,	// (0x00033d2f) main_vradio_pane_t1_ParamLimits

0x600e,	// (0x00033d2f) main_vradio_pane_t1

0x6023,	// (0x00033d44) main_vradio_pane_t2_ParamLimits

0x6023,	// (0x00033d44) main_vradio_pane_t2

0xce8c,	// (0x0003abad) main_vradio_pane_t3_ParamLimits

0xce8c,	// (0x0003abad) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003d552) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003d552) main_vradio_pane_t

0x6038,	// (0x00033d59) vradio_rocker_control_pane_ParamLimits

0x6038,	// (0x00033d59) vradio_rocker_control_pane

0x604a,	// (0x00033d6b) vradio_station_info_pane_ParamLimits

0x604a,	// (0x00033d6b) vradio_station_info_pane

0xcea0,	// (0x0003abc1) vradio_frequency_info_pane_ParamLimits

0xcea0,	// (0x0003abc1) vradio_frequency_info_pane

0xc800,	// (0x0003a521) vradio_station_info_pane_g1

0xceaf,	// (0x0003abd0) vradio_station_info_pane_t1_ParamLimits

0xceaf,	// (0x0003abd0) vradio_station_info_pane_t1

0xced1,	// (0x0003abf2) vradio_station_info_pane_t2_ParamLimits

0xced1,	// (0x0003abf2) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003d559) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003d559) vradio_station_info_pane_t

0xcee3,	// (0x0003ac04) vradio_tuning_pane

0xceeb,	// (0x0003ac0c) vradio_rocker_control_pane_g1

0xcef3,	// (0x0003ac14) vradio_rocker_control_pane_g2

0xcefb,	// (0x0003ac1c) vradio_rocker_control_pane_g3

0xcf03,	// (0x0003ac24) vradio_rocker_control_pane_g4

0xcf0b,	// (0x0003ac2c) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003d55e) vradio_rocker_control_pane_g

0x605c,	// (0x00033d7d) vradio_frequency_info_pane_g1

0xcf13,	// (0x0003ac34) vradio_frequency_info_pane_t1_ParamLimits

0xcf13,	// (0x0003ac34) vradio_frequency_info_pane_t1

0x6066,	// (0x00033d87) vradio_tuning_pane_g1

0x6071,	// (0x00033d92) vradio_tuning_pane_t1

0x1902,	// (0x0002f623) area_side_right_pane_ParamLimits

0x1902,	// (0x0002f623) area_side_right_pane

0xc3b3,	// (0x0003a0d4) status_small_pane_g1

0xc3bb,	// (0x0003a0dc) status_small_pane_g2

0xc3c4,	// (0x0003a0e5) status_small_pane_g3

0xc3cd,	// (0x0003a0ee) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0003d319) status_small_pane_g

0xc3d6,	// (0x0003a0f7) status_small_pane_t1

0x195e,	// (0x0002f67f) main_video3_pane

0xcf27,	// (0x0003ac48) cams_zoom_vslider_pane

0xcf2f,	// (0x0003ac50) image3_wide_pane_ParamLimits

0xcf2f,	// (0x0003ac50) image3_wide_pane

0xcf49,	// (0x0003ac6a) image3_wide_small_pane

0xcf55,	// (0x0003ac76) main_video3_pane_g1_ParamLimits

0xcf55,	// (0x0003ac76) main_video3_pane_g1

0xcf71,	// (0x0003ac92) main_video3_pane_g2_ParamLimits

0xcf71,	// (0x0003ac92) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003d569) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003d569) main_video3_pane_g

0xcf8d,	// (0x0003acae) main_video3_pane_t1_ParamLimits

0xcf8d,	// (0x0003acae) main_video3_pane_t1

0xcfb8,	// (0x0003acd9) main_video3_pane_t2_ParamLimits

0xcfb8,	// (0x0003acd9) main_video3_pane_t2

0xcfe3,	// (0x0003ad04) main_video3_pane_t3_ParamLimits

0xcfe3,	// (0x0003ad04) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003d56e) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003d56e) main_video3_pane_t

0xd010,	// (0x0003ad31) cams_zoom_vslider_pane_g1

0xd019,	// (0x0003ad3a) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003d575) cams_zoom_vslider_pane_g

0xd021,	// (0x0003ad42) small_slider_vertical_pane

0xc800,	// (0x0003a521) small_slider_vertical_pane_g1

0xc800,	// (0x0003a521) small_slider_vertical_pane_g2

0xd029,	// (0x0003ad4a) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003d57a) small_slider_vertical_pane_g

0x195e,	// (0x0002f67f) main_hwr_training_pane

0xd032,	// (0x0003ad53) hwr_training_instruct_pane_ParamLimits

0xd032,	// (0x0003ad53) hwr_training_instruct_pane

0x6080,	// (0x00033da1) hwr_training_navi_pane_ParamLimits

0x6080,	// (0x00033da1) hwr_training_navi_pane

0x609f,	// (0x00033dc0) hwr_training_write_pane_ParamLimits

0x609f,	// (0x00033dc0) hwr_training_write_pane

0x9b75,	// (0x00037896) bg_frame_shadow_pane

0xd069,	// (0x0003ad8a) hwr_training_write_pane_g1

0xd071,	// (0x0003ad92) hwr_training_write_pane_g2

0xd079,	// (0x0003ad9a) hwr_training_write_pane_g3

0xd081,	// (0x0003ada2) hwr_training_write_pane_g4

0xd089,	// (0x0003adaa) hwr_training_write_pane_g5

0xd091,	// (0x0003adb2) hwr_training_write_pane_g6

0xd099,	// (0x0003adba) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003d581) hwr_training_write_pane_g

0x60da,	// (0x00033dfb) hwr_training_navi_pane_g1_ParamLimits

0x60da,	// (0x00033dfb) hwr_training_navi_pane_g1

0x60ec,	// (0x00033e0d) hwr_training_navi_pane_g2_ParamLimits

0x60ec,	// (0x00033e0d) hwr_training_navi_pane_g2

0x60fe,	// (0x00033e1f) hwr_training_navi_pane_g3_ParamLimits

0x60fe,	// (0x00033e1f) hwr_training_navi_pane_g3

0x610e,	// (0x00033e2f) hwr_training_navi_pane_g4_ParamLimits

0x610e,	// (0x00033e2f) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003d590) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003d590) hwr_training_navi_pane_g

0x611b,	// (0x00033e3c) hwr_training_navi_pane_t1

0x6129,	// (0x00033e4a) list_single_hwr_training_instruct_pane_ParamLimits

0x6129,	// (0x00033e4a) list_single_hwr_training_instruct_pane

0xd0a1,	// (0x0003adc2) list_single_hwr_training_instruct_pane_t1

0xc740,	// (0x0003a461) bg_frame_shadow_pane_g1

0xd0b0,	// (0x0003add1) bg_frame_shadow_pane_g2

0xd0b8,	// (0x0003add9) bg_frame_shadow_pane_g3

0xd0c0,	// (0x0003ade1) bg_frame_shadow_pane_g4

0xd0c8,	// (0x0003ade9) bg_frame_shadow_pane_g5

0xd0d0,	// (0x0003adf1) bg_frame_shadow_pane_g6

0xd0d8,	// (0x0003adf9) bg_frame_shadow_pane_g7

0xa36b,	// (0x0003808c) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003d59b) bg_frame_shadow_pane_g

0x195e,	// (0x0002f67f) main_video_tele_dialer_pane

0x0e12,	// (0x0002eb33) aid_size_cell_video_keypad_ParamLimits

0x0e12,	// (0x0002eb33) aid_size_cell_video_keypad

0x0e2c,	// (0x0002eb4d) grid_video_dialer_keypad_pane_ParamLimits

0x0e2c,	// (0x0002eb4d) grid_video_dialer_keypad_pane

0x0e78,	// (0x0002eb99) video_down_pane_cp_ParamLimits

0x0e78,	// (0x0002eb99) video_down_pane_cp

0x0e8e,	// (0x0002ebaf) cell_video_dialer_keypad_pane_ParamLimits

0x0e8e,	// (0x0002ebaf) cell_video_dialer_keypad_pane

0xd0e0,	// (0x0003ae01) bg_button_pane_cp08_ParamLimits

0xd0e0,	// (0x0003ae01) bg_button_pane_cp08

0x615a,	// (0x00033e7b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x615a,	// (0x00033e7b) cell_video_dialer_keypad_pane_g1

0x58e2,	// (0x00033603) mup3_rocker2_pane_ParamLimits

0x58e2,	// (0x00033603) mup3_rocker2_pane

0xc800,	// (0x0003a521) mup3_rocker2_pane_g1

0x062a,	// (0x0002e34b) main_dialer2_pane

0x195e,	// (0x0002f67f) main_mp4_pane

0x6199,	// (0x00033eba) main_mp4_pane_g1_ParamLimits

0x6199,	// (0x00033eba) main_mp4_pane_g1

0x6199,	// (0x00033eba) main_mp4_pane_g2_ParamLimits

0x6199,	// (0x00033eba) main_mp4_pane_g2

0x0eb0,	// (0x0002ebd1) main_mp4_pane_g3_ParamLimits

0x0eb0,	// (0x0002ebd1) main_mp4_pane_g3

0x61a7,	// (0x00033ec8) main_mp4_pane_g4_ParamLimits

0x61a7,	// (0x00033ec8) main_mp4_pane_g4

0x61cf,	// (0x00033ef0) main_mp4_pane_g5_ParamLimits

0x61cf,	// (0x00033ef0) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003d5bb) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003d5bb) main_mp4_pane_g

0x621f,	// (0x00033f40) main_mp4_pane_t1_ParamLimits

0x621f,	// (0x00033f40) main_mp4_pane_t1

0x627b,	// (0x00033f9c) main_mp4_pane_t2_ParamLimits

0x627b,	// (0x00033f9c) main_mp4_pane_t2

0xd0ec,	// (0x0003ae0d) main_mp4_pane_t3_ParamLimits

0xd0ec,	// (0x0003ae0d) main_mp4_pane_t3

0x62cd,	// (0x00033fee) main_mp4_pane_t4_ParamLimits

0x62cd,	// (0x00033fee) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003d5c8) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003d5c8) main_mp4_pane_t

0x6311,	// (0x00034032) mp4_progress_pane_ParamLimits

0x6311,	// (0x00034032) mp4_progress_pane

0x635b,	// (0x0003407c) mp4_rocker_pane_ParamLimits

0x635b,	// (0x0003407c) mp4_rocker_pane

0xd114,	// (0x0003ae35) mp4_progress_pane_t1

0xd12d,	// (0x0003ae4e) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003d5d1) mp4_progress_pane_t

0xd146,	// (0x0003ae67) mup_progress_pane_cp04

0xd8c6,	// (0x0003b5e7) mp4_rocker_pane_g1

0x0eec,	// (0x0002ec0d) aid_cell_size_keypad2_ParamLimits

0x0eec,	// (0x0002ec0d) aid_cell_size_keypad2

0x0f02,	// (0x0002ec23) dialer2_ne_pane_ParamLimits

0x0f02,	// (0x0002ec23) dialer2_ne_pane

0x0f1c,	// (0x0002ec3d) grid_dialer2_keypad_pane_ParamLimits

0x0f1c,	// (0x0002ec3d) grid_dialer2_keypad_pane

0xc5e5,	// (0x0003a306) bg_popup_call_pane_cp07_ParamLimits

0xc5e5,	// (0x0003a306) bg_popup_call_pane_cp07

0x637b,	// (0x0003409c) dialer2_ne_pane_t1_ParamLimits

0x637b,	// (0x0003409c) dialer2_ne_pane_t1

0x0f38,	// (0x0002ec59) cell_dialer2_keypad_pane_ParamLimits

0x0f38,	// (0x0002ec59) cell_dialer2_keypad_pane

0xd164,	// (0x0003ae85) bg_button_pane_pane_cp04_ParamLimits

0xd164,	// (0x0003ae85) bg_button_pane_pane_cp04

0x63b6,	// (0x000340d7) cell_dialer2_keypad_pane_g1_ParamLimits

0x63b6,	// (0x000340d7) cell_dialer2_keypad_pane_g1

0x2762,	// (0x00030483) aid_placing_vt_set_content_ParamLimits

0x2762,	// (0x00030483) aid_placing_vt_set_content

0x278a,	// (0x000304ab) aid_placing_vt_set_title_ParamLimits

0x278a,	// (0x000304ab) aid_placing_vt_set_title

0x195e,	// (0x0002f67f) main_image3_pane

0x0fb8,	// (0x0002ecd9) area_side_right_pane_cp01_ParamLimits

0x0fb8,	// (0x0002ecd9) area_side_right_pane_cp01

0x6199,	// (0x00033eba) main_image3_pane_g1_ParamLimits

0x6199,	// (0x00033eba) main_image3_pane_g1

0x0fcf,	// (0x0002ecf0) main_image3_pane_g2_ParamLimits

0x0fcf,	// (0x0002ecf0) main_image3_pane_g2

0x0ff7,	// (0x0002ed18) main_image3_pane_g3_ParamLimits

0x0ff7,	// (0x0002ed18) main_image3_pane_g3

0x1021,	// (0x0002ed42) main_image3_pane_g4_ParamLimits

0x1021,	// (0x0002ed42) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003d5e0) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003d5e0) main_image3_pane_g

0x104b,	// (0x0002ed6c) main_image3_pane_t1_ParamLimits

0x104b,	// (0x0002ed6c) main_image3_pane_t1

0x10a3,	// (0x0002edc4) main_image3_pane_t2_ParamLimits

0x10a3,	// (0x0002edc4) main_image3_pane_t2

0x10f5,	// (0x0002ee16) main_image3_pane_t3_ParamLimits

0x10f5,	// (0x0002ee16) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003d5e9) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003d5e9) main_image3_pane_t

0xa708,	// (0x00038429) grid_sctrl_middle_pane_cp01_ParamLimits

0xa708,	// (0x00038429) grid_sctrl_middle_pane_cp01

0x6450,	// (0x00034171) cell_sctrl_middle_pane_cp01_ParamLimits

0x6450,	// (0x00034171) cell_sctrl_middle_pane_cp01

0x646d,	// (0x0003418e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x646d,	// (0x0003418e) cell_sctrl_middle_pane_cp01_g1

0x195e,	// (0x0002f67f) main_call4_pane

0x6483,	// (0x000341a4) aid_size_button_call4_ParamLimits

0x6483,	// (0x000341a4) aid_size_button_call4

0x64b4,	// (0x000341d5) call4_windows_pane_ParamLimits

0x64b4,	// (0x000341d5) call4_windows_pane

0x64d4,	// (0x000341f5) grid_call4_button_pane_ParamLimits

0x64d4,	// (0x000341f5) grid_call4_button_pane

0xd170,	// (0x0003ae91) call4_windows_conf_pane

0xd187,	// (0x0003aea8) popup_call4_audio_first_window_ParamLimits

0xd187,	// (0x0003aea8) popup_call4_audio_first_window

0xd1d3,	// (0x0003aef4) popup_call4_audio_second_window_ParamLimits

0xd1d3,	// (0x0003aef4) popup_call4_audio_second_window

0xd1e7,	// (0x0003af08) popup_call4_audio_wait_window_ParamLimits

0xd1e7,	// (0x0003af08) popup_call4_audio_wait_window

0x6501,	// (0x00034222) cell_call4_button_pane_ParamLimits

0x6501,	// (0x00034222) cell_call4_button_pane

0x652a,	// (0x0003424b) bg_button_pane_cp09_ParamLimits

0x652a,	// (0x0003424b) bg_button_pane_cp09

0x6536,	// (0x00034257) cell_call4_button_pane_g1_ParamLimits

0x6536,	// (0x00034257) cell_call4_button_pane_g1

0x655c,	// (0x0003427d) cell_call4_button_pane_t1_ParamLimits

0x655c,	// (0x0003427d) cell_call4_button_pane_t1

0xd22f,	// (0x0003af50) popup_call4_audio_conf_window_ParamLimits

0xd22f,	// (0x0003af50) popup_call4_audio_conf_window

0x5942,	// (0x00033663) mup3_progress_pane_t1_ParamLimits

0x5961,	// (0x00033682) mup3_progress_pane_t2_ParamLimits

0xcb13,	// (0x0003a834) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0003d4bd) mup3_progress_pane_t_ParamLimits

0xcb30,	// (0x0003a851) mup_progress_pane_cp03_ParamLimits

0x5ec6,	// (0x00033be7) mup3_control_keys_pane_g4_copy1

0x633f,	// (0x00034060) mp4_rocker2_pane_ParamLimits

0x633f,	// (0x00034060) mp4_rocker2_pane

0xd243,	// (0x0003af64) mp4_rocker2_pane_g1

0xd24b,	// (0x0003af6c) mp4_rocker2_pane_g2

0x6582,	// (0x000342a3) mp4_rocker2_pane_g3

0x658a,	// (0x000342ab) mp4_rocker2_pane_g4

0x6592,	// (0x000342b3) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003d5f2) mp4_rocker2_pane_g

0x195e,	// (0x0002f67f) main_camera4_pane

0x195e,	// (0x0002f67f) main_video4_pane

0x0e46,	// (0x0002eb67) main_video_tele_dialer_pane_t1_ParamLimits

0x0e46,	// (0x0002eb67) main_video_tele_dialer_pane_t1

0x0e5f,	// (0x0002eb80) main_video_tele_dialer_pane_t2_ParamLimits

0x0e5f,	// (0x0002eb80) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003d5ac) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003d5ac) main_video_tele_dialer_pane_t

0x1195,	// (0x0002eeb6) cam4_autofocus_pane_ParamLimits

0x1195,	// (0x0002eeb6) cam4_autofocus_pane

0x11ab,	// (0x0002eecc) cam4_image_uncrop_pane_ParamLimits

0x11ab,	// (0x0002eecc) cam4_image_uncrop_pane

0x11c5,	// (0x0002eee6) cam4_indicators_pane_ParamLimits

0x11c5,	// (0x0002eee6) cam4_indicators_pane

0x11f0,	// (0x0002ef11) main_camera4_pane_g1_ParamLimits

0x11f0,	// (0x0002ef11) main_camera4_pane_g1

0x1202,	// (0x0002ef23) main_camera4_pane_g2_ParamLimits

0x1202,	// (0x0002ef23) main_camera4_pane_g2

0x1215,	// (0x0002ef36) main_camera4_pane_g3_ParamLimits

0x1215,	// (0x0002ef36) main_camera4_pane_g3

0x1228,	// (0x0002ef49) main_camera4_pane_g4_ParamLimits

0x1228,	// (0x0002ef49) main_camera4_pane_g4

0x123b,	// (0x0002ef5c) main_camera4_pane_g5_ParamLimits

0x123b,	// (0x0002ef5c) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003d5fd) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003d5fd) main_camera4_pane_g

0x125f,	// (0x0002ef80) main_camera4_pane_t1_ParamLimits

0x125f,	// (0x0002ef80) main_camera4_pane_t1

0x65ca,	// (0x000342eb) bg_tb_trans_pane_cp06

0x65e0,	// (0x00034301) cam4_indicators_pane_g1

0x65f1,	// (0x00034312) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003d618) cam4_indicators_pane_g

0x660f,	// (0x00034330) cam4_indicators_pane_t1

0x12af,	// (0x0002efd0) main_video4_pane_g1_ParamLimits

0x12af,	// (0x0002efd0) main_video4_pane_g1

0x12be,	// (0x0002efdf) main_video4_pane_g2_ParamLimits

0x12be,	// (0x0002efdf) main_video4_pane_g2

0x12cd,	// (0x0002efee) main_video4_pane_g3_ParamLimits

0x12cd,	// (0x0002efee) main_video4_pane_g3

0x12dc,	// (0x0002effd) main_video4_pane_g4_ParamLimits

0x12dc,	// (0x0002effd) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003d61f) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003d61f) main_video4_pane_g

0x12fa,	// (0x0002f01b) vid4_indicators_pane_ParamLimits

0x12fa,	// (0x0002f01b) vid4_indicators_pane

0x1328,	// (0x0002f049) video4_image_uncrop_cif_pane_ParamLimits

0x1328,	// (0x0002f049) video4_image_uncrop_cif_pane

0x1342,	// (0x0002f063) video4_image_uncrop_nhd_pane_ParamLimits

0x1342,	// (0x0002f063) video4_image_uncrop_nhd_pane

0x11ab,	// (0x0002eecc) video4_image_uncrop_vga_pane_ParamLimits

0x11ab,	// (0x0002eecc) video4_image_uncrop_vga_pane

0x1944,	// (0x0002f665) bg_tb_trans_pane_cp07

0x663b,	// (0x0003435c) vid4_indicators_pane_g1

0x664f,	// (0x00034370) vid4_indicators_pane_g2

0x6663,	// (0x00034384) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003d62a) vid4_indicators_pane_g

0x6692,	// (0x000343b3) vid4_indicators_pane_t1

0x66a9,	// (0x000343ca) cam4_autofocus_pane_g1

0x66b1,	// (0x000343d2) cam4_autofocus_pane_g2

0x66b9,	// (0x000343da) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003d635) cam4_autofocus_pane_g

0x66c1,	// (0x000343e2) cam4_autofocus_pane_g3_copy1

0x613e,	// (0x00033e5f) video_down_pane_cp_t1

0x614c,	// (0x00033e6d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003d5b1) video_down_pane_cp_t

0x1944,	// (0x0002f665) popup_vitu2_window_ParamLimits

0x1944,	// (0x0002f665) popup_vitu2_window

0x1356,	// (0x0002f077) aid_size_cell2_itu2_ParamLimits

0x1356,	// (0x0002f077) aid_size_cell2_itu2

0x137c,	// (0x0002f09d) aid_size_cell_itu2_ParamLimits

0x137c,	// (0x0002f09d) aid_size_cell_itu2

0x13d8,	// (0x0002f0f9) bg_popup_window_pane_cp09_ParamLimits

0x13d8,	// (0x0002f0f9) bg_popup_window_pane_cp09

0x13e6,	// (0x0002f107) field_vitu2_entry_pane_ParamLimits

0x13e6,	// (0x0002f107) field_vitu2_entry_pane

0x140c,	// (0x0002f12d) grid_vitu2_function_pane_ParamLimits

0x140c,	// (0x0002f12d) grid_vitu2_function_pane

0x145d,	// (0x0002f17e) grid_vitu2_itu_pane_ParamLimits

0x145d,	// (0x0002f17e) grid_vitu2_itu_pane

0x14f5,	// (0x0002f216) cell_vitu2_itu_pane_ParamLimits

0x14f5,	// (0x0002f216) cell_vitu2_itu_pane

0x1521,	// (0x0002f242) cell_vitu2_function_pane_ParamLimits

0x1521,	// (0x0002f242) cell_vitu2_function_pane

0xd253,	// (0x0003af74) bg_popup_call_pane_cp08_ParamLimits

0xd253,	// (0x0003af74) bg_popup_call_pane_cp08

0xd26a,	// (0x0003af8b) field_vitu2_entry_pane_g1

0xd276,	// (0x0003af97) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003d63c) field_vitu2_entry_pane_g

0x66c9,	// (0x000343ea) field_vitu2_entry_pane_t1_ParamLimits

0x66c9,	// (0x000343ea) field_vitu2_entry_pane_t1

0xd290,	// (0x0003afb1) field_vitu2_entry_pane_t2_ParamLimits

0xd290,	// (0x0003afb1) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003d643) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003d643) field_vitu2_entry_pane_t

0x1560,	// (0x0002f281) bg_button_pane_cp010_ParamLimits

0x1560,	// (0x0002f281) bg_button_pane_cp010

0x66f8,	// (0x00034419) cell_vitu2_itu_pane_g1

0x157c,	// (0x0002f29d) cell_vitu2_itu_pane_t1_ParamLimits

0x157c,	// (0x0002f29d) cell_vitu2_itu_pane_t1

0x15da,	// (0x0002f2fb) cell_vitu2_itu_pane_t2_ParamLimits

0x15da,	// (0x0002f2fb) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003d64d) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003d64d) cell_vitu2_itu_pane_t

0x1944,	// (0x0002f665) bg_button_pane_cp011

0x16c6,	// (0x0002f3e7) cell_vitu2_function_pane_g1

0x195e,	// (0x0002f67f) main_myfav_hc_pane

0x1145,	// (0x0002ee66) popup_image3_note_pane_ParamLimits

0x1145,	// (0x0002ee66) popup_image3_note_pane

0x1161,	// (0x0002ee82) popup_image3_tool_bar_pane_ParamLimits

0x1161,	// (0x0002ee82) popup_image3_tool_bar_pane

0x1668,	// (0x0002f389) cell_vitu2_itu_pane_t3_ParamLimits

0x1668,	// (0x0002f389) cell_vitu2_itu_pane_t3

0x9b75,	// (0x00037896) bg_popup_trans_pane

0xd2b5,	// (0x0003afd6) grid_image3_tool_bar_pane

0xd2bf,	// (0x0003afe0) bg_popup_trans_pane_g1

0xa6d0,	// (0x000383f1) bg_popup_trans_pane_g2

0xd2c7,	// (0x0003afe8) bg_popup_trans_pane_g3

0xd2cf,	// (0x0003aff0) bg_popup_trans_pane_g4

0xd2d7,	// (0x0003aff8) bg_popup_trans_pane_g5

0xd2df,	// (0x0003b000) bg_popup_trans_pane_g6

0xd2e7,	// (0x0003b008) bg_popup_trans_pane_g7

0xd2ef,	// (0x0003b010) bg_popup_trans_pane_g8

0xa6b0,	// (0x000383d1) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003d654) bg_popup_trans_pane_g

0xd2f7,	// (0x0003b018) cell_image3_tool_bar_pane_ParamLimits

0xd2f7,	// (0x0003b018) cell_image3_tool_bar_pane

0xc800,	// (0x0003a521) cell_image3_tool_bar_pane_g1

0x9b75,	// (0x00037896) bg_popup_trans_pane_cp1

0xd30b,	// (0x0003b02c) popup_image3_note_pane_t1

0xd319,	// (0x0003b03a) popup_image3_note_pane_t2

0xd327,	// (0x0003b048) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003d667) popup_image3_note_pane_t

0xd335,	// (0x0003b056) popup_image3_note_pane_t3_copy1

0x670a,	// (0x0003442b) bg_myfav_hc_instruction_pane_ParamLimits

0x670a,	// (0x0003442b) bg_myfav_hc_instruction_pane

0x671e,	// (0x0003443f) cell_myfav_contact_pane_ParamLimits

0x671e,	// (0x0003443f) cell_myfav_contact_pane

0x673c,	// (0x0003445d) cell_myfav_contact_pane_cp1_ParamLimits

0x673c,	// (0x0003445d) cell_myfav_contact_pane_cp1

0x6754,	// (0x00034475) cell_myfav_contact_pane_cp2_ParamLimits

0x6754,	// (0x00034475) cell_myfav_contact_pane_cp2

0x676c,	// (0x0003448d) cell_myfav_contact_pane_cp3_ParamLimits

0x676c,	// (0x0003448d) cell_myfav_contact_pane_cp3

0x6783,	// (0x000344a4) cell_myfav_contact_pane_cp4_ParamLimits

0x6783,	// (0x000344a4) cell_myfav_contact_pane_cp4

0x679b,	// (0x000344bc) cell_myfav_contact_pane_cp5_ParamLimits

0x679b,	// (0x000344bc) cell_myfav_contact_pane_cp5

0x67af,	// (0x000344d0) cell_myfav_contact_pane_cp6_ParamLimits

0x67af,	// (0x000344d0) cell_myfav_contact_pane_cp6

0x67c5,	// (0x000344e6) cell_myfav_contact_pane_cp7_ParamLimits

0x67c5,	// (0x000344e6) cell_myfav_contact_pane_cp7

0xd343,	// (0x0003b064) listscroll_gen_pane_cp05

0x67df,	// (0x00034500) main_myfav_hc_pane_g1_ParamLimits

0x67df,	// (0x00034500) main_myfav_hc_pane_g1

0x67f9,	// (0x0003451a) main_myfav_hc_pane_g2_ParamLimits

0x67f9,	// (0x0003451a) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003d66e) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003d66e) main_myfav_hc_pane_g

0x682b,	// (0x0003454c) main_myfav_hc_pane_t1_ParamLimits

0x682b,	// (0x0003454c) main_myfav_hc_pane_t1

0xd34c,	// (0x0003b06d) main_myfav_hc_pane_t2_ParamLimits

0xd34c,	// (0x0003b06d) main_myfav_hc_pane_t2

0xd35e,	// (0x0003b07f) main_myfav_hc_pane_t3_ParamLimits

0xd35e,	// (0x0003b07f) main_myfav_hc_pane_t3

0x6842,	// (0x00034563) main_myfav_hc_pane_t4_ParamLimits

0x6842,	// (0x00034563) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003d675) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003d675) main_myfav_hc_pane_t

0xc800,	// (0x0003a521) bg_myfav_hc_instruction_pane_g1

0xd370,	// (0x0003b091) cell_myfav_contact_pane_g1_ParamLimits

0xd370,	// (0x0003b091) cell_myfav_contact_pane_g1

0xd370,	// (0x0003b091) cell_myfav_contact_pane_g2_ParamLimits

0xd370,	// (0x0003b091) cell_myfav_contact_pane_g2

0xd37c,	// (0x0003b09d) cell_myfav_contact_pane_g3_ParamLimits

0xd37c,	// (0x0003b09d) cell_myfav_contact_pane_g3

0xcafd,	// (0x0003a81e) cell_myfav_contact_pane_g4_ParamLimits

0xcafd,	// (0x0003a81e) cell_myfav_contact_pane_g4

0xd389,	// (0x0003b0aa) cell_myfav_contact_pane_g5_ParamLimits

0xd389,	// (0x0003b0aa) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003d680) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003d680) cell_myfav_contact_pane_g

0x6813,	// (0x00034534) main_myfav_hc_pane_g3_ParamLimits

0x6813,	// (0x00034534) main_myfav_hc_pane_g3

0x0278,	// (0x0002df99) popup_adpt_find_window

0x686a,	// (0x0003458b) afind_page_pane_ParamLimits

0x686a,	// (0x0003458b) afind_page_pane

0x687f,	// (0x000345a0) aid_size_cell_afind_ParamLimits

0x687f,	// (0x000345a0) aid_size_cell_afind

0x689d,	// (0x000345be) bg_popup_sub_pane_cp09_ParamLimits

0x689d,	// (0x000345be) bg_popup_sub_pane_cp09

0x68aa,	// (0x000345cb) find_pane_cp01_ParamLimits

0x68aa,	// (0x000345cb) find_pane_cp01

0xd395,	// (0x0003b0b6) grid_afind_control_pane_ParamLimits

0xd395,	// (0x0003b0b6) grid_afind_control_pane

0x68b7,	// (0x000345d8) grid_afind_pane_ParamLimits

0x68b7,	// (0x000345d8) grid_afind_pane

0x68d9,	// (0x000345fa) cell_afind_pane_ParamLimits

0x68d9,	// (0x000345fa) cell_afind_pane

0xc800,	// (0x0003a521) afind_page_pane_g1

0x6940,	// (0x00034661) afind_page_pane_g2

0x6949,	// (0x0003466a) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003d68b) afind_page_pane_g

0x6952,	// (0x00034673) afind_page_pane_t1

0xd3a9,	// (0x0003b0ca) cell_afind_grid_control_pane_ParamLimits

0xd3a9,	// (0x0003b0ca) cell_afind_grid_control_pane

0xd164,	// (0x0003ae85) bg_button_pane_cp69_ParamLimits

0xd164,	// (0x0003ae85) bg_button_pane_cp69

0x6972,	// (0x00034693) cell_afind_pane_g1_ParamLimits

0x6972,	// (0x00034693) cell_afind_pane_g1

0x697f,	// (0x000346a0) cell_afind_pane_t1_ParamLimits

0x697f,	// (0x000346a0) cell_afind_pane_t1

0xa4c9,	// (0x000381ea) bg_button_pane_cp72

0xd3b8,	// (0x0003b0d9) cell_afind_grid_control_pane_g1

0x4519,	// (0x0003223a) aid_image_placing_area_ParamLimits

0x4519,	// (0x0003223a) aid_image_placing_area

0xce32,	// (0x0003ab53) field_vitu_entry_pane_g1_ParamLimits

0xce32,	// (0x0003ab53) field_vitu_entry_pane_g1

0xce3e,	// (0x0003ab5f) field_vitu_entry_pane_g2_ParamLimits

0xce3e,	// (0x0003ab5f) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003d53c) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003d53c) field_vitu_entry_pane_g

0x5f8d,	// (0x00033cae) cell_vitu_itu_pane_g1_ParamLimits

0x5fcf,	// (0x00033cf0) cell_vitu_itu_pane_t3_ParamLimits

0x5fcf,	// (0x00033cf0) cell_vitu_itu_pane_t3

0xd114,	// (0x0003ae35) mp4_progress_pane_t1_ParamLimits

0xd12d,	// (0x0003ae4e) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003d5d1) mp4_progress_pane_t_ParamLimits

0xd146,	// (0x0003ae67) mup_progress_pane_cp04_ParamLimits

0x6856,	// (0x00034577) main_myfav_hc_pane_t5_ParamLimits

0x6856,	// (0x00034577) main_myfav_hc_pane_t5

0x18c1,	// (0x0002f5e2) aid_zoom_text_primary

0x0278,	// (0x0002df99) popup_adpt_find_window_ParamLimits

0x1944,	// (0x0002f665) main_cam_set_pane

0x11dc,	// (0x0002eefd) cam4_zoom_pane_ParamLimits

0x11dc,	// (0x0002eefd) cam4_zoom_pane

0x6991,	// (0x000346b2) main_cam_set_pane_g1_ParamLimits

0x6991,	// (0x000346b2) main_cam_set_pane_g1

0x699f,	// (0x000346c0) main_cam_set_pane_g2_ParamLimits

0x699f,	// (0x000346c0) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003d692) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003d692) main_cam_set_pane_g

0x69c0,	// (0x000346e1) main_cam_set_pane_t1_ParamLimits

0x69c0,	// (0x000346e1) main_cam_set_pane_t1

0x69db,	// (0x000346fc) main_cset_listscroll_pane_ParamLimits

0x69db,	// (0x000346fc) main_cset_listscroll_pane

0x69fb,	// (0x0003471c) main_cset_slider_pane_ParamLimits

0x69fb,	// (0x0003471c) main_cset_slider_pane

0xd3c9,	// (0x0003b0ea) main_cset_list_pane_ParamLimits

0xd3c9,	// (0x0003b0ea) main_cset_list_pane

0xd3d9,	// (0x0003b0fa) scroll_pane_cp028

0x6a21,	// (0x00034742) aid_area_touch_slider

0x6a3d,	// (0x0003475e) cset_slider_pane

0x6a67,	// (0x00034788) main_cset_slider_pane_g1

0x6a7c,	// (0x0003479d) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003d697) main_cset_slider_pane_g

0xd412,	// (0x0003b133) main_cset_slider_pane_t1

0x6b38,	// (0x00034859) main_cset_slider_pane_t2

0x6b52,	// (0x00034873) main_cset_slider_pane_t3

0x6b6c,	// (0x0003488d) main_cset_slider_pane_t4

0x6b86,	// (0x000348a7) main_cset_slider_pane_t5

0x6ba0,	// (0x000348c1) main_cset_slider_pane_t6

0x6bb5,	// (0x000348d6) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003d6bc) main_cset_slider_pane_t

0x6cb9,	// (0x000349da) cset_list_set_pane_ParamLimits

0x6cb9,	// (0x000349da) cset_list_set_pane

0x6ccb,	// (0x000349ec) aid_position_infowindow_above

0x6cd3,	// (0x000349f4) aid_position_infowindow_below

0xd4b2,	// (0x0003b1d3) cset_list_set_pane_g1_ParamLimits

0xd4b2,	// (0x0003b1d3) cset_list_set_pane_g1

0xd4be,	// (0x0003b1df) cset_list_set_pane_g3_ParamLimits

0xd4be,	// (0x0003b1df) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003d6db) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003d6db) cset_list_set_pane_g

0xd4cd,	// (0x0003b1ee) cset_list_set_pane_t1_ParamLimits

0xd4cd,	// (0x0003b1ee) cset_list_set_pane_t1

0xa708,	// (0x00038429) list_highlight_pane_cp021_ParamLimits

0xa708,	// (0x00038429) list_highlight_pane_cp021

0xb0b5,	// (0x00038dd6) cset_slider_pane_g1

0xb0c7,	// (0x00038de8) cset_slider_pane_g2

0xb0be,	// (0x00038ddf) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003d6e0) cset_slider_pane_g

0x6cdb,	// (0x000349fc) aid_area_touch_cam4_zoom

0x6ce3,	// (0x00034a04) cam4_zoom_cont_pane

0x6ceb,	// (0x00034a0c) cam4_zoom_pane_g1

0x6cf3,	// (0x00034a14) cam4_zoom_pane_g2

0x16da,	// (0x0002f3fb) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003d6e7) cam4_zoom_pane_g

0x6cfb,	// (0x00034a1c) cam4_zoom_cont_pane_g1

0x6d04,	// (0x00034a25) cam4_zoom_cont_pane_g2

0x6d0d,	// (0x00034a2e) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003d6ee) cam4_zoom_cont_pane_g

0x64a1,	// (0x000341c2) call4_image_pane_ParamLimits

0x64a1,	// (0x000341c2) call4_image_pane

0xd170,	// (0x0003ae91) call4_windows_conf_pane_ParamLimits

0xd1b1,	// (0x0003aed2) popup_call4_audio_in_window_ParamLimits

0xd1b1,	// (0x0003aed2) popup_call4_audio_in_window

0x9b75,	// (0x00037896) bg_popup_call2_act_pane_cp02

0xd227,	// (0x0003af48) call4_list_conf_pane

0xc800,	// (0x0003a521) call4_image_pane_g1

0xc800,	// (0x0003a521) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0003d3fd) call4_image_pane_g

0xd4e2,	// (0x0003b203) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4e2,	// (0x0003b203) list_single_graphic_popup_conf4_pane

0x9b75,	// (0x00037896) list_highlight_pane_cp022

0xd4f5,	// (0x0003b216) list_single_graphic_popup_conf4_pane_g1

0xac86,	// (0x000389a7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003d6f5) list_single_graphic_popup_conf4_pane_g

0xd4fd,	// (0x0003b21e) list_single_graphic_popup_conf4_pane_t1

0x28ae,	// (0x000305cf) popup_vtel_slider_window_ParamLimits

0x28ae,	// (0x000305cf) popup_vtel_slider_window

0xd152,	// (0x0003ae73) dialer2_ne_pane_t2_ParamLimits

0xd152,	// (0x0003ae73) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003d5d6) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003d5d6) dialer2_ne_pane_t

0xc5e5,	// (0x0003a306) bg_popup_sub_pane_cp010_ParamLimits

0xc5e5,	// (0x0003a306) bg_popup_sub_pane_cp010

0x6d16,	// (0x00034a37) popup_vtel_slider_window_g1_ParamLimits

0x6d16,	// (0x00034a37) popup_vtel_slider_window_g1

0x6d29,	// (0x00034a4a) popup_vtel_slider_window_g2_ParamLimits

0x6d29,	// (0x00034a4a) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003d6fa) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003d6fa) popup_vtel_slider_window_g

0x6d7f,	// (0x00034aa0) vtel_slider_pane_ParamLimits

0x6d7f,	// (0x00034aa0) vtel_slider_pane

0x6da1,	// (0x00034ac2) vtel_slider_pane_g1_ParamLimits

0x6da1,	// (0x00034ac2) vtel_slider_pane_g1

0x6db5,	// (0x00034ad6) vtel_slider_pane_g2_ParamLimits

0x6db5,	// (0x00034ad6) vtel_slider_pane_g2

0x6dcd,	// (0x00034aee) vtel_slider_pane_g3_ParamLimits

0x6dcd,	// (0x00034aee) vtel_slider_pane_g3

0x6da1,	// (0x00034ac2) vtel_slider_pane_g4_ParamLimits

0x6da1,	// (0x00034ac2) vtel_slider_pane_g4

0x6de3,	// (0x00034b04) vtel_slider_pane_g5_ParamLimits

0x6de3,	// (0x00034b04) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003d703) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003d703) vtel_slider_pane_g

0x1944,	// (0x0002f665) main_gallery2_pane

0x13a8,	// (0x0002f0c9) aid_size_row_itut2_dropdow_list_ParamLimits

0x13a8,	// (0x0002f0c9) aid_size_row_itut2_dropdow_list

0x1434,	// (0x0002f155) grid_vitu2_function_top_pane_ParamLimits

0x1434,	// (0x0002f155) grid_vitu2_function_top_pane

0x149e,	// (0x0002f1bf) popup_vitu2_dropdown_list_window_ParamLimits

0x149e,	// (0x0002f1bf) popup_vitu2_dropdown_list_window

0x14c7,	// (0x0002f1e8) popup_vitu2_match_list_window

0x16e2,	// (0x0002f403) cell_vitu2_function_top_pane_ParamLimits

0x16e2,	// (0x0002f403) cell_vitu2_function_top_pane

0x16fa,	// (0x0002f41b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x16fa,	// (0x0002f41b) cell_vitu2_function_top_pane_cp01

0x1716,	// (0x0002f437) cell_vitu2_function_top_wide_pane_ParamLimits

0x1716,	// (0x0002f437) cell_vitu2_function_top_wide_pane

0x1944,	// (0x0002f665) bg_button_pane_cp012

0x1732,	// (0x0002f453) cell_vitu2_function_top_pane_g1

0x6e07,	// (0x00034b28) bg_button_pane_cp013_ParamLimits

0x6e07,	// (0x00034b28) bg_button_pane_cp013

0x6e23,	// (0x00034b44) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e23,	// (0x00034b44) cell_vitu2_function_top_wide_pane_g1

0x1944,	// (0x0002f665) bg_popup_sub_pane_cp20

0x1746,	// (0x0002f467) list_vitu2_match_list_pane

0xd2bf,	// (0x0003afe0) bg_popup_sub_pane_cp20_g1

0xd2c7,	// (0x0003afe8) bg_popup_sub_pane_cp20_g2

0xa6d0,	// (0x000383f1) bg_popup_sub_pane_cp20_g3

0xd2cf,	// (0x0003aff0) bg_popup_sub_pane_cp20_g4

0xa6b0,	// (0x000383d1) bg_popup_sub_pane_cp20_g5

0xd513,	// (0x0003b234) bg_popup_sub_pane_cp20_g6

0xd2df,	// (0x0003b000) bg_popup_sub_pane_cp20_g7

0xd2e7,	// (0x0003b008) bg_popup_sub_pane_cp20_g8

0xd2ef,	// (0x0003b010) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003d70e) bg_popup_sub_pane_cp20_g

0x6e3b,	// (0x00034b5c) list_vitu2_match_list_item_pane_ParamLimits

0x6e3b,	// (0x00034b5c) list_vitu2_match_list_item_pane

0xa716,	// (0x00038437) list_vitu2_match_list_item_pane_t1

0x195e,	// (0x0002f67f) bg_popup_sub_pane_cp21

0xa724,	// (0x00038445) grid_vitu2_dropdown_list_pane

0x1764,	// (0x0002f485) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1764,	// (0x0002f485) cell_vitu2_dropdown_list_char_pane

0x1785,	// (0x0002f4a6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1785,	// (0x0002f4a6) cell_vitu2_dropdown_list_ctrl_pane

0xd51b,	// (0x0003b23c) cell_vitu2_dropdown_list_char_pane_g1

0xd524,	// (0x0003b245) cell_vitu2_dropdown_list_char_pane_g2

0xd52d,	// (0x0003b24e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003d72b) cell_vitu2_dropdown_list_char_pane_g

0x17b1,	// (0x0002f4d2) cell_vitu2_dropdown_list_char_pane_t1

0x6e97,	// (0x00034bb8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e97,	// (0x00034bb8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6ea4,	// (0x00034bc5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6ea4,	// (0x00034bc5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6eb1,	// (0x00034bd2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6eb1,	// (0x00034bd2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x17bf,	// (0x0002f4e0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x17bf,	// (0x0002f4e0) cell_vitu2_dropdown_list_ctrl_pane_g4

0x65ca,	// (0x000342eb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x65ca,	// (0x000342eb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003d732) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003d732) cell_vitu2_dropdown_list_ctrl_pane_g

0x6ebe,	// (0x00034bdf) aid_size_cell_gallery2_ParamLimits

0x6ebe,	// (0x00034bdf) aid_size_cell_gallery2

0x6edc,	// (0x00034bfd) grid_gallery2_pane_ParamLimits

0x6edc,	// (0x00034bfd) grid_gallery2_pane

0x6ef6,	// (0x00034c17) scroll_pane_cp029_ParamLimits

0x6ef6,	// (0x00034c17) scroll_pane_cp029

0x6f02,	// (0x00034c23) cell_gallery2_pane_ParamLimits

0x6f02,	// (0x00034c23) cell_gallery2_pane

0xd536,	// (0x0003b257) cell_gallery2_pane_g2

0x6f5d,	// (0x00034c7e) cell_gallery2_pane_g3

0xd53e,	// (0x0003b25f) cell_gallery2_pane_g4

0xd546,	// (0x0003b267) cell_gallery2_pane_g5

0xa477,	// (0x00038198) grid_highlight_pane_cp10

0x14c7,	// (0x0002f1e8) popup_vitu2_match_list_window_ParamLimits

0x14de,	// (0x0002f1ff) popup_vitu2_query_window_ParamLimits

0x14de,	// (0x0002f1ff) popup_vitu2_query_window

0x195e,	// (0x0002f67f) bg_vitu2_candi_button_pane

0xd51b,	// (0x0003b23c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd524,	// (0x0003b245) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd52d,	// (0x0003b24e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f65,	// (0x00034c86) bg_button_pane_cp015

0x6f77,	// (0x00034c98) bg_button_pane_cp016

0x6f8a,	// (0x00034cab) bg_button_pane_cp017

0xc3f8,	// (0x0003a119) bg_popup_sub_pane_cp22

0xd54e,	// (0x0003b26f) popup_vitu2_query_window_g1

0x6fcf,	// (0x00034cf0) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003d73d) popup_vitu2_query_window_g

0x6fee,	// (0x00034d0f) popup_vitu2_query_window_t1_ParamLimits

0x6fee,	// (0x00034d0f) popup_vitu2_query_window_t1

0x7023,	// (0x00034d44) popup_vitu2_query_window_t2_ParamLimits

0x7023,	// (0x00034d44) popup_vitu2_query_window_t2

0x7035,	// (0x00034d56) popup_vitu2_query_window_t3_ParamLimits

0x7035,	// (0x00034d56) popup_vitu2_query_window_t3

0x705d,	// (0x00034d7e) popup_vitu2_query_window_t4_ParamLimits

0x705d,	// (0x00034d7e) popup_vitu2_query_window_t4

0x707e,	// (0x00034d9f) popup_vitu2_query_window_t5_ParamLimits

0x707e,	// (0x00034d9f) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003d744) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003d744) popup_vitu2_query_window_t

0xd3c1,	// (0x0003b0e2) main_cset_text_pane

0x6a21,	// (0x00034742) aid_area_touch_slider_ParamLimits

0x6a3d,	// (0x0003475e) cset_slider_pane_ParamLimits

0x6a67,	// (0x00034788) main_cset_slider_pane_g1_ParamLimits

0x6a7c,	// (0x0003479d) main_cset_slider_pane_g2_ParamLimits

0xd3e2,	// (0x0003b103) main_cset_slider_pane_g3_ParamLimits

0xd3e2,	// (0x0003b103) main_cset_slider_pane_g3

0x6a91,	// (0x000347b2) main_cset_slider_pane_g4_ParamLimits

0x6a91,	// (0x000347b2) main_cset_slider_pane_g4

0x6aa0,	// (0x000347c1) main_cset_slider_pane_g5_ParamLimits

0x6aa0,	// (0x000347c1) main_cset_slider_pane_g5

0x6aac,	// (0x000347cd) main_cset_slider_pane_g6_ParamLimits

0x6aac,	// (0x000347cd) main_cset_slider_pane_g6

0xf976,	// (0x0003d697) main_cset_slider_pane_g_ParamLimits

0xd412,	// (0x0003b133) main_cset_slider_pane_t1_ParamLimits

0x6b38,	// (0x00034859) main_cset_slider_pane_t2_ParamLimits

0x6b52,	// (0x00034873) main_cset_slider_pane_t3_ParamLimits

0x6b6c,	// (0x0003488d) main_cset_slider_pane_t4_ParamLimits

0x6b86,	// (0x000348a7) main_cset_slider_pane_t5_ParamLimits

0x6ba0,	// (0x000348c1) main_cset_slider_pane_t6_ParamLimits

0x6bb5,	// (0x000348d6) main_cset_slider_pane_t7_ParamLimits

0x6bdf,	// (0x00034900) main_cset_slider_pane_t8_ParamLimits

0x6bdf,	// (0x00034900) main_cset_slider_pane_t8

0x6c07,	// (0x00034928) main_cset_slider_pane_t9_ParamLimits

0x6c07,	// (0x00034928) main_cset_slider_pane_t9

0x6c2f,	// (0x00034950) main_cset_slider_pane_t10_ParamLimits

0x6c2f,	// (0x00034950) main_cset_slider_pane_t10

0x6c57,	// (0x00034978) main_cset_slider_pane_t11_ParamLimits

0x6c57,	// (0x00034978) main_cset_slider_pane_t11

0x6c7f,	// (0x000349a0) main_cset_slider_pane_t12_ParamLimits

0x6c7f,	// (0x000349a0) main_cset_slider_pane_t12

0x6c9c,	// (0x000349bd) main_cset_slider_pane_t13_ParamLimits

0x6c9c,	// (0x000349bd) main_cset_slider_pane_t13

0xf99b,	// (0x0003d6bc) main_cset_slider_pane_t_ParamLimits

0x9b75,	// (0x00037896) bg_popup_sub_pane_cp011

0xd55a,	// (0x0003b27b) main_cset_text_pane_g1

0xd562,	// (0x0003b283) main_cset_text_pane_t1

0xd570,	// (0x0003b291) main_cset_text_pane_t2

0xd57e,	// (0x0003b29f) main_cset_text_pane_t3

0xd58c,	// (0x0003b2ad) main_cset_text_pane_t4

0xd59a,	// (0x0003b2bb) main_cset_text_pane_t5

0xd5a8,	// (0x0003b2c9) main_cset_text_pane_t6

0xd5b6,	// (0x0003b2d7) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003d753) main_cset_text_pane_t

0x195e,	// (0x0002f67f) main_cam4_burst_pane

0x195e,	// (0x0002f67f) main_cam5_pane

0x6960,	// (0x00034681) bg_button_pane_cp019

0x6969,	// (0x0003468a) bg_button_pane_cp020

0xd3ee,	// (0x0003b10f) main_cset_slider_pane_g7_ParamLimits

0xd3ee,	// (0x0003b10f) main_cset_slider_pane_g7

0xd3fa,	// (0x0003b11b) main_cset_slider_pane_g8_ParamLimits

0xd3fa,	// (0x0003b11b) main_cset_slider_pane_g8

0x6ac0,	// (0x000347e1) main_cset_slider_pane_g9_ParamLimits

0x6ac0,	// (0x000347e1) main_cset_slider_pane_g9

0x6acc,	// (0x000347ed) main_cset_slider_pane_g10_ParamLimits

0x6acc,	// (0x000347ed) main_cset_slider_pane_g10

0x6ad8,	// (0x000347f9) main_cset_slider_pane_g11_ParamLimits

0x6ad8,	// (0x000347f9) main_cset_slider_pane_g11

0x6ae4,	// (0x00034805) main_cset_slider_pane_g12_ParamLimits

0x6ae4,	// (0x00034805) main_cset_slider_pane_g12

0x6af0,	// (0x00034811) main_cset_slider_pane_g13_ParamLimits

0x6af0,	// (0x00034811) main_cset_slider_pane_g13

0x6afc,	// (0x0003481d) main_cset_slider_pane_g14_ParamLimits

0x6afc,	// (0x0003481d) main_cset_slider_pane_g14

0x6b08,	// (0x00034829) main_cset_slider_pane_g15_ParamLimits

0x6b08,	// (0x00034829) main_cset_slider_pane_g15

0xd440,	// (0x0003b161) main_cset_slider_pane_t14_ParamLimits

0xd440,	// (0x0003b161) main_cset_slider_pane_t14

0xd479,	// (0x0003b19a) main_cset_slider_pane_t15_ParamLimits

0xd479,	// (0x0003b19a) main_cset_slider_pane_t15

0x70f5,	// (0x00034e16) aid_cam4_burst_size_cell_ParamLimits

0x70f5,	// (0x00034e16) aid_cam4_burst_size_cell

0x7115,	// (0x00034e36) grid_cam4_burst_pane_ParamLimits

0x7115,	// (0x00034e36) grid_cam4_burst_pane

0x714d,	// (0x00034e6e) linegrid_cam4_burst_pane_ParamLimits

0x714d,	// (0x00034e6e) linegrid_cam4_burst_pane

0xd5c4,	// (0x0003b2e5) scroll_pane_cp30_ParamLimits

0xd5c4,	// (0x0003b2e5) scroll_pane_cp30

0x7171,	// (0x00034e92) cell_cam4_burst_pane_ParamLimits

0x7171,	// (0x00034e92) cell_cam4_burst_pane

0xd5d0,	// (0x0003b2f1) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5d0,	// (0x0003b2f1) linegrid_cam4_burst_pane_g1

0x71be,	// (0x00034edf) linegrid_cam4_burst_pane_g2_ParamLimits

0x71be,	// (0x00034edf) linegrid_cam4_burst_pane_g2

0xd5dd,	// (0x0003b2fe) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5dd,	// (0x0003b2fe) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003d762) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003d762) linegrid_cam4_burst_pane_g

0x71cf,	// (0x00034ef0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71cf,	// (0x00034ef0) linegrid_cam4_burst_pane_g3_copy1

0xd5ea,	// (0x0003b30b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5ea,	// (0x0003b30b) linegrid_cam4_burst_pane_g4

0x71e9,	// (0x00034f0a) linegrid_cam4_burst_pane_g5_ParamLimits

0x71e9,	// (0x00034f0a) linegrid_cam4_burst_pane_g5

0x71fa,	// (0x00034f1b) linegrid_cam4_burst_pane_g6_ParamLimits

0x71fa,	// (0x00034f1b) linegrid_cam4_burst_pane_g6

0xd5f7,	// (0x0003b318) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5f7,	// (0x0003b318) linegrid_cam4_burst_pane_g7

0x7211,	// (0x00034f32) cell_cam4_burst_pane_g1

0xd610,	// (0x0003b331) main_cam5_pane_t1_ParamLimits

0xd610,	// (0x0003b331) main_cam5_pane_t1

0xd622,	// (0x0003b343) main_cam5_pane_t2_ParamLimits

0xd622,	// (0x0003b343) main_cam5_pane_t2

0xd634,	// (0x0003b355) main_cam5_pane_t3_ParamLimits

0xd634,	// (0x0003b355) main_cam5_pane_t3

0xd646,	// (0x0003b367) main_cam5_pane_t4_ParamLimits

0xd646,	// (0x0003b367) main_cam5_pane_t4

0xd65e,	// (0x0003b37f) main_cam5_pane_t5_ParamLimits

0xd65e,	// (0x0003b37f) main_cam5_pane_t5

0xd672,	// (0x0003b393) main_cam5_pane_t6_ParamLimits

0xd672,	// (0x0003b393) main_cam5_pane_t6

0xd686,	// (0x0003b3a7) main_cam5_pane_t7_ParamLimits

0xd686,	// (0x0003b3a7) main_cam5_pane_t7

0xd698,	// (0x0003b3b9) main_cam5_pane_t8_ParamLimits

0xd698,	// (0x0003b3b9) main_cam5_pane_t8

0xd6b4,	// (0x0003b3d5) main_cam5_pane_t9_ParamLimits

0xd6b4,	// (0x0003b3d5) main_cam5_pane_t9

0xd6c6,	// (0x0003b3e7) main_cam5_pane_t10_ParamLimits

0xd6c6,	// (0x0003b3e7) main_cam5_pane_t10

0xd6d8,	// (0x0003b3f9) main_cam5_pane_t11_ParamLimits

0xd6d8,	// (0x0003b3f9) main_cam5_pane_t11

0xd6ea,	// (0x0003b40b) main_cam5_pane_t12_ParamLimits

0xd6ea,	// (0x0003b40b) main_cam5_pane_t12

0xd6ff,	// (0x0003b420) main_cam5_pane_t13_ParamLimits

0xd6ff,	// (0x0003b420) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003d76e) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003d76e) main_cam5_pane_t

0x02fa,	// (0x0002e01b) popup_scut_keymap_window_ParamLimits

0x02fa,	// (0x0002e01b) popup_scut_keymap_window

0x7224,	// (0x00034f45) aid_size_cell_brow_shortcut

0xa477,	// (0x00038198) bg_popup_window_pane_cp010

0x7230,	// (0x00034f51) grid_scut_pane

0x723c,	// (0x00034f5d) cell_scut_pane_ParamLimits

0x723c,	// (0x00034f5d) cell_scut_pane

0x7253,	// (0x00034f74) cell_scut_pane_g1

0xd71c,	// (0x0003b43d) cell_scut_pane_t1

0xd72b,	// (0x0003b44c) cell_scut_pane_t2

0x725c,	// (0x00034f7d) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003d789) cell_scut_pane_t

0x54fb,	// (0x0003321c) main_mup3_pane_g8_ParamLimits

0x54fb,	// (0x0003321c) main_mup3_pane_g8

0x13c0,	// (0x0002f0e1) area_vitu2_query_pane_ParamLimits

0x13c0,	// (0x0002f0e1) area_vitu2_query_pane

0x6f9d,	// (0x00034cbe) input_focus_pane_cp08

0xd73a,	// (0x0003b45b) area_vitu2_query_pane_g1

0x726a,	// (0x00034f8b) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003d790) area_vitu2_query_pane_g

0x727b,	// (0x00034f9c) area_vitu2_query_pane_t1_ParamLimits

0x727b,	// (0x00034f9c) area_vitu2_query_pane_t1

0x728f,	// (0x00034fb0) area_vitu2_query_pane_t2_ParamLimits

0x728f,	// (0x00034fb0) area_vitu2_query_pane_t2

0x72a3,	// (0x00034fc4) area_vitu2_query_pane_t3_ParamLimits

0x72a3,	// (0x00034fc4) area_vitu2_query_pane_t3

0xd746,	// (0x0003b467) area_vitu2_query_pane_t4_ParamLimits

0xd746,	// (0x0003b467) area_vitu2_query_pane_t4

0xd76e,	// (0x0003b48f) area_vitu2_query_pane_t5_ParamLimits

0xd76e,	// (0x0003b48f) area_vitu2_query_pane_t5

0xd796,	// (0x0003b4b7) area_vitu2_query_pane_t6_ParamLimits

0xd796,	// (0x0003b4b7) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003d795) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003d795) area_vitu2_query_pane_t

0x72cb,	// (0x00034fec) bg_button_pane_cp018

0x72d9,	// (0x00034ffa) bg_button_pane_cp021

0x72e5,	// (0x00035006) bg_button_pane_cp022

0x72f4,	// (0x00035015) input_focus_pane_cp09

0xadc2,	// (0x00038ae3) aid_size_touch_mv_arrow_left

0xadeb,	// (0x00038b0c) aid_size_touch_mv_arrow_right

0x6b20,	// (0x00034841) main_cset_slider_pane_g16_ParamLimits

0x6b20,	// (0x00034841) main_cset_slider_pane_g16

0x6b2c,	// (0x0003484d) main_cset_slider_pane_g17_ParamLimits

0x6b2c,	// (0x0003484d) main_cset_slider_pane_g17

0x7211,	// (0x00034f32) cell_cam4_burst_pane_g1_ParamLimits

0x9b75,	// (0x00037896) compa_mode_pane

0x6d39,	// (0x00034a5a) popup_vtel_slider_window_g3_ParamLimits

0x6d39,	// (0x00034a5a) popup_vtel_slider_window_g3

0x6d50,	// (0x00034a71) popup_vtel_slider_window_g4_ParamLimits

0x6d50,	// (0x00034a71) popup_vtel_slider_window_g4

0x6d67,	// (0x00034a88) popup_vtel_slider_window_t1_ParamLimits

0x6d67,	// (0x00034a88) popup_vtel_slider_window_t1

0x195e,	// (0x0002f67f) main_cl_pane

0x4a55,	// (0x00032776) popup_imed_adjust2_window_ParamLimits

0xc3f8,	// (0x0003a119) bg_tb_trans_pane_cp05_ParamLimits

0xcd67,	// (0x0003aa88) popup_imed_adjust2_window_g1_ParamLimits

0xcd76,	// (0x0003aa97) popup_imed_adjust2_window_g2_ParamLimits

0xcd76,	// (0x0003aa97) popup_imed_adjust2_window_g2

0xcd82,	// (0x0003aaa3) popup_imed_adjust2_window_g3_ParamLimits

0xcd82,	// (0x0003aaa3) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003d500) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003d500) popup_imed_adjust2_window_g

0xcd8e,	// (0x0003aaaf) popup_imed_adjust2_window_t1_ParamLimits

0xcda6,	// (0x0003aac7) slider_imed_adjust_pane_ParamLimits

0xcdba,	// (0x0003aadb) slider_imed_adjust_pane_g1_ParamLimits

0xcdca,	// (0x0003aaeb) slider_imed_adjust_pane_g2_ParamLimits

0xcdda,	// (0x0003aafb) slider_imed_adjust_pane_g3_ParamLimits

0xcdeb,	// (0x0003ab0c) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003d507) slider_imed_adjust_pane_g_ParamLimits

0x117d,	// (0x0002ee9e) aid_touch_area_cam4_ParamLimits

0x117d,	// (0x0002ee9e) aid_touch_area_cam4

0x659a,	// (0x000342bb) battery_pane_cp01

0x124c,	// (0x0002ef6d) main_camera4_pane_g6_ParamLimits

0x124c,	// (0x0002ef6d) main_camera4_pane_g6

0x1276,	// (0x0002ef97) main_camera4_pane_t2_ParamLimits

0x1276,	// (0x0002ef97) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003d60a) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003d60a) main_camera4_pane_t

0x1297,	// (0x0002efb8) aid_touch_area_vid4_ParamLimits

0x1297,	// (0x0002efb8) aid_touch_area_vid4

0x12eb,	// (0x0002f00c) main_video4_pane_g5_ParamLimits

0x12eb,	// (0x0002f00c) main_video4_pane_g5

0x1310,	// (0x0002f031) vid4_progress_pane_ParamLimits

0x1310,	// (0x0002f031) vid4_progress_pane

0xd406,	// (0x0003b127) main_cset_slider_pane_g18_ParamLimits

0xd406,	// (0x0003b127) main_cset_slider_pane_g18

0xd604,	// (0x0003b325) cell_cam4_burst_pane_g2_ParamLimits

0xd604,	// (0x0003b325) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003d769) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003d769) cell_cam4_burst_pane_g

0xa2b2,	// (0x00037fd3) bg_cl_pane_ParamLimits

0xa2b2,	// (0x00037fd3) bg_cl_pane

0x7303,	// (0x00035024) cl_header_pane_ParamLimits

0x7303,	// (0x00035024) cl_header_pane

0x7317,	// (0x00035038) cl_listscroll_pane_ParamLimits

0x7317,	// (0x00035038) cl_listscroll_pane

0xd7e2,	// (0x0003b503) bg_cl_pane_g1

0xd7ea,	// (0x0003b50b) bg_cl_pane_g2

0xd7f2,	// (0x0003b513) bg_cl_pane_g3

0xd7fa,	// (0x0003b51b) bg_cl_pane_g4

0xd802,	// (0x0003b523) bg_cl_pane_g5

0xd80a,	// (0x0003b52b) bg_cl_pane_g6

0xd812,	// (0x0003b533) bg_cl_pane_g7

0xd81a,	// (0x0003b53b) bg_cl_pane_g8

0xd822,	// (0x0003b543) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003d7a4) bg_cl_pane_g

0x7327,	// (0x00035048) aid_height_cl_leading_ParamLimits

0x7327,	// (0x00035048) aid_height_cl_leading

0x7333,	// (0x00035054) aid_height_cl_text_ParamLimits

0x7333,	// (0x00035054) aid_height_cl_text

0xa708,	// (0x00038429) bg_cl_header_pane_ParamLimits

0xa708,	// (0x00038429) bg_cl_header_pane

0x7352,	// (0x00035073) cl_header_pane_g1_ParamLimits

0x7352,	// (0x00035073) cl_header_pane_g1

0x7368,	// (0x00035089) cl_header_pane_t1_ParamLimits

0x7368,	// (0x00035089) cl_header_pane_t1

0xd82a,	// (0x0003b54b) cl_list_pane

0xd3d9,	// (0x0003b0fa) hc_scroll_pane_cp01

0xa6b0,	// (0x000383d1) bg_cl_header_pane_g1

0xd2bf,	// (0x0003afe0) bg_cl_header_pane_g2

0xa6d0,	// (0x000383f1) bg_cl_header_pane_g3

0xd2cf,	// (0x0003aff0) bg_cl_header_pane_g4

0xd2c7,	// (0x0003afe8) bg_cl_header_pane_g5

0xd513,	// (0x0003b234) bg_cl_header_pane_g6

0xd2e7,	// (0x0003b008) bg_cl_header_pane_g7

0xd2ef,	// (0x0003b010) bg_cl_header_pane_g8

0xd2df,	// (0x0003b000) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003d7b7) bg_cl_header_pane_g

0x7381,	// (0x000350a2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7381,	// (0x000350a2) hc_cl_list_double_graphic_heading_pane

0x7392,	// (0x000350b3) hc_cl_list_single_graphic_pane_ParamLimits

0x7392,	// (0x000350b3) hc_cl_list_single_graphic_pane

0x73a8,	// (0x000350c9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x73a8,	// (0x000350c9) hc_cl_list_single_graphic_pane_g1

0x73b4,	// (0x000350d5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x73b4,	// (0x000350d5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003d7ca) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003d7ca) hc_cl_list_single_graphic_pane_g

0x73c8,	// (0x000350e9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x73c8,	// (0x000350e9) hc_cl_list_single_graphic_pane_t1

0x73a8,	// (0x000350c9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x73a8,	// (0x000350c9) hc_cl_list_double_graphic_heading_pane_g1

0x73dd,	// (0x000350fe) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x73dd,	// (0x000350fe) hc_cl_list_double_graphic_heading_pane_g2

0x73f1,	// (0x00035112) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73f1,	// (0x00035112) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003d7cf) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003d7cf) hc_cl_list_double_graphic_heading_pane_g

0x7405,	// (0x00035126) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7405,	// (0x00035126) hc_cl_list_double_graphic_heading_pane_t1

0x741a,	// (0x0003513b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x741a,	// (0x0003513b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003d7d6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003d7d6) hc_cl_list_double_graphic_heading_pane_t

0xa734,	// (0x00038455) vid4_progress_pane_g1

0xa744,	// (0x00038465) vid4_progress_pane_g2

0x17db,	// (0x0002f4fc) vid4_progress_pane_g3

0xa754,	// (0x00038475) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003d7db) vid4_progress_pane_g

0x17ed,	// (0x0002f50e) vid4_progress_pane_t1

0xa76c,	// (0x0003848d) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003d7e6) vid4_progress_pane_t

0x1805,	// (0x0002f526) wait_bar_pane_cp07

0xc5f3,	// (0x0003a314) blid_firmament_pane_ParamLimits

0xc636,	// (0x0003a357) popup_blid_sat_info2_window_g1

0xc65a,	// (0x0003a37b) popup_blid_sat_info2_window_t3

0xc668,	// (0x0003a389) popup_blid_sat_info2_window_t4

0xc676,	// (0x0003a397) popup_blid_sat_info2_window_t5

0xc684,	// (0x0003a3a5) popup_blid_sat_info2_window_t6

0xc694,	// (0x0003a3b5) popup_blid_sat_info2_window_t7

0xc6a2,	// (0x0003a3c3) popup_blid_sat_info2_window_t8

0xc6b0,	// (0x0003a3d1) popup_blid_sat_info2_window_t9

0xc6be,	// (0x0003a3df) popup_blid_sat_info2_window_t10

0xc780,	// (0x0003a4a1) aid_firma_cardinal_ParamLimits

0xc794,	// (0x0003a4b5) blid_firmament_pane_t1_ParamLimits

0xc7ab,	// (0x0003a4cc) blid_firmament_pane_t2_ParamLimits

0xc7c2,	// (0x0003a4e3) blid_firmament_pane_t3_ParamLimits

0xc7d9,	// (0x0003a4fa) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0003d3f4) blid_firmament_pane_t_ParamLimits

0xc7f0,	// (0x0003a511) blid_sat_info_pane_ParamLimits

0x1944,	// (0x0002f665) main_cam_set_pane_ParamLimits

0x5d47,	// (0x00033a68) aid_size_cell_colour_35_ParamLimits

0x5d67,	// (0x00033a88) aid_size_cell_colour_112_ParamLimits

0x5d87,	// (0x00033aa8) aid_size_cell_effect_ParamLimits

0xc3f8,	// (0x0003a119) bg_tb_trans_pane_cp02_ParamLimits

0xa9b4,	// (0x000386d5) heading_imed_pane_ParamLimits

0x5da7,	// (0x00033ac8) listscroll_imed_pane_ParamLimits

0xba1e,	// (0x0003973f) popup_call2_audio_first_window_g5_ParamLimits

0xba1e,	// (0x0003973f) popup_call2_audio_first_window_g5

0x0f5a,	// (0x0002ec7b) aid_size_touch_image3_arrow_left_ParamLimits

0x0f5a,	// (0x0002ec7b) aid_size_touch_image3_arrow_left

0x0f86,	// (0x0002eca7) aid_size_touch_image3_arrow_right_ParamLimits

0x0f86,	// (0x0002eca7) aid_size_touch_image3_arrow_right

0xa781,	// (0x000384a2) vid4_progress_pane_t3

0x60ba,	// (0x00033ddb) main_hwr_training_symbol_option_pane_ParamLimits

0x60ba,	// (0x00033ddb) main_hwr_training_symbol_option_pane

0xd054,	// (0x0003ad75) popup_hwr_training_preview_window_ParamLimits

0xd054,	// (0x0003ad75) popup_hwr_training_preview_window

0x0e05,	// (0x0002eb26) hwr_training_navi_pane_g5_ParamLimits

0x0e05,	// (0x0002eb26) hwr_training_navi_pane_g5

0xd2ad,	// (0x0003afce) popup_char_count_window

0x1944,	// (0x0002f665) bg_popup_sub_pane_cp20_ParamLimits

0x1746,	// (0x0002f467) list_vitu2_match_list_pane_ParamLimits

0x1755,	// (0x0002f476) vitu2_page_scroll_pane_ParamLimits

0x1755,	// (0x0002f476) vitu2_page_scroll_pane

0xd855,	// (0x0003b576) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd855,	// (0x0003b576) list_single_hwr_training_symbol_option_pane

0xd868,	// (0x0003b589) list_single_hwr_training_symbol_option_pane_g1

0xd870,	// (0x0003b591) list_single_hwr_training_symbol_option_pane_t1

0xd87e,	// (0x0003b59f) bg_button_pane_cp023

0xd8d0,	// (0x0003b5f1) bg_button_pane_cp024

0x7467,	// (0x00035188) vitu2_page_scroll_pane_g1

0x746f,	// (0x00035190) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003d7ed) vitu2_page_scroll_pane_g

0x7477,	// (0x00035198) vitu2_page_scroll_pane_t1

0xc553,	// (0x0003a274) popup_char_count_window_g1

0xd903,	// (0x0003b624) popup_char_count_window_g2

0xd90c,	// (0x0003b62d) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003d7f2) popup_char_count_window_g

0xd915,	// (0x0003b636) popup_char_count_window_t1

0x195e,	// (0x0002f67f) main_vded2_pane

0xcd53,	// (0x0003aa74) aid_size_cell_imed_line

0xcd5d,	// (0x0003aa7e) grid_imed_line_width_pane

0x6674,	// (0x00034395) vid4_indicators_pane_g4

0xd923,	// (0x0003b644) cell_imed_line_width_pane_ParamLimits

0xd923,	// (0x0003b644) cell_imed_line_width_pane

0xd937,	// (0x0003b658) cell_imed_line_width_pane_g1

0xd8be,	// (0x0003b5df) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003d7f9) cell_imed_line_width_pane_g

0x7486,	// (0x000351a7) main_vded2_pane_g1_ParamLimits

0x7486,	// (0x000351a7) main_vded2_pane_g1

0x749c,	// (0x000351bd) main_vded2_pane_g2_ParamLimits

0x749c,	// (0x000351bd) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003d7fe) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003d7fe) main_vded2_pane_g

0x74ae,	// (0x000351cf) vded2_slider_pane_ParamLimits

0x74ae,	// (0x000351cf) vded2_slider_pane

0x74be,	// (0x000351df) aid_size_touch_vded2_end

0x74c8,	// (0x000351e9) aid_size_touch_vded2_playhead

0xd940,	// (0x0003b661) aid_size_touch_vded2_start

0xd948,	// (0x0003b669) vded2_slider_bg_pane

0xd951,	// (0x0003b672) vded2_slider_pane_g1

0xd95a,	// (0x0003b67b) vded2_slider_pane_g2

0x74d2,	// (0x000351f3) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003d803) vded2_slider_pane_g

0xd962,	// (0x0003b683) vded2_slider_bg_pane_g1

0xd96b,	// (0x0003b68c) vded2_slider_bg_pane_g2

0xd974,	// (0x0003b695) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003d80a) vded2_slider_bg_pane_g

0x4188,	// (0x00031ea9) aid_postcard_touch_down_pane_ParamLimits

0x4188,	// (0x00031ea9) aid_postcard_touch_down_pane

0x419e,	// (0x00031ebf) aid_postcard_touch_up_pane_ParamLimits

0x419e,	// (0x00031ebf) aid_postcard_touch_up_pane

0x195e,	// (0x0002f67f) main_blid2_pane

0x4a3b,	// (0x0003275c) popup_blid2_search_window

0x9b75,	// (0x00037896) blid2_gps_pane

0x9b75,	// (0x00037896) blid2_navig_pane

0x9b75,	// (0x00037896) blid2_search_pane

0x9b75,	// (0x00037896) blid2_tripm_pane

0x74dd,	// (0x000351fe) blid2_search_pane_g1_ParamLimits

0x74dd,	// (0x000351fe) blid2_search_pane_g1

0x74f7,	// (0x00035218) blid2_search_pane_t1_ParamLimits

0x74f7,	// (0x00035218) blid2_search_pane_t1

0x7509,	// (0x0003522a) aid_size_cell_blid2_gps_ParamLimits

0x7509,	// (0x0003522a) aid_size_cell_blid2_gps

0x7521,	// (0x00035242) blid2_gps_pane_g1_ParamLimits

0x7521,	// (0x00035242) blid2_gps_pane_g1

0x7535,	// (0x00035256) grid_blid2_satellite_pane_ParamLimits

0x7535,	// (0x00035256) grid_blid2_satellite_pane

0x754f,	// (0x00035270) blid2_navig_pane_g1_ParamLimits

0x754f,	// (0x00035270) blid2_navig_pane_g1

0x755b,	// (0x0003527c) blid2_navig_pane_t1_ParamLimits

0x755b,	// (0x0003527c) blid2_navig_pane_t1

0x7576,	// (0x00035297) blid2_navig_pane_t2_ParamLimits

0x7576,	// (0x00035297) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003d811) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003d811) blid2_navig_pane_t

0x7591,	// (0x000352b2) blid2_navig_ring_pane_ParamLimits

0x7591,	// (0x000352b2) blid2_navig_ring_pane

0x75aa,	// (0x000352cb) blid2_speed_pane_ParamLimits

0x75aa,	// (0x000352cb) blid2_speed_pane

0x75b6,	// (0x000352d7) blid2_tripm_pane_g1_ParamLimits

0x75b6,	// (0x000352d7) blid2_tripm_pane_g1

0x75cf,	// (0x000352f0) blid2_tripm_pane_g2_ParamLimits

0x75cf,	// (0x000352f0) blid2_tripm_pane_g2

0x75e3,	// (0x00035304) blid2_tripm_pane_g3_ParamLimits

0x75e3,	// (0x00035304) blid2_tripm_pane_g3

0x75f7,	// (0x00035318) blid2_tripm_pane_g4_ParamLimits

0x75f7,	// (0x00035318) blid2_tripm_pane_g4

0x760b,	// (0x0003532c) blid2_tripm_pane_g5_ParamLimits

0x760b,	// (0x0003532c) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003d816) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003d816) blid2_tripm_pane_g

0x7631,	// (0x00035352) blid2_tripm_pane_t1_ParamLimits

0x7631,	// (0x00035352) blid2_tripm_pane_t1

0x764c,	// (0x0003536d) blid2_tripm_pane_t2_ParamLimits

0x764c,	// (0x0003536d) blid2_tripm_pane_t2

0x7665,	// (0x00035386) blid2_tripm_pane_t3_ParamLimits

0x7665,	// (0x00035386) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003d823) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003d823) blid2_tripm_pane_t

0x76ac,	// (0x000353cd) cell_blid2_satellite_pane_ParamLimits

0x76ac,	// (0x000353cd) cell_blid2_satellite_pane

0x76ca,	// (0x000353eb) cell_blid2_satellite_pane_g1

0xd97d,	// (0x0003b69e) cell_blid2_satellite_pane_t1

0xc800,	// (0x0003a521) blid2_speed_pane_g1

0xd98b,	// (0x0003b6ac) blid2_speed_pane_t1

0xd999,	// (0x0003b6ba) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003d82c) blid2_speed_pane_t

0xc800,	// (0x0003a521) blid2_navig_ring_pane_g1

0x76d3,	// (0x000353f4) blid2_navig_ring_pane_g2

0x76db,	// (0x000353fc) blid2_navig_ring_pane_g3

0x76e3,	// (0x00035404) blid2_navig_ring_pane_g4

0x76eb,	// (0x0003540c) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003d831) blid2_navig_ring_pane_g

0x9b75,	// (0x00037896) bg_popup_window_pane_cp011

0xd9a7,	// (0x0003b6c8) popup_blid2_search_window_g1

0xd9af,	// (0x0003b6d0) popup_blid2_search_window_t1

0xd9bd,	// (0x0003b6de) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003d83c) popup_blid2_search_window_t

0xa5bf,	// (0x000382e0) main_browser_pane_g1

0xa2b2,	// (0x00037fd3) main_browser_pane_ParamLimits

0x1944,	// (0x0002f665) bg_button_pane_cp011_ParamLimits

0x16c6,	// (0x0002f3e7) cell_vitu2_function_pane_g1_ParamLimits

0xc3f8,	// (0x0003a119) bg_popup_sub_pane_cp22_ParamLimits

0x6f9d,	// (0x00034cbe) input_focus_pane_cp08_ParamLimits

0x6fb4,	// (0x00034cd5) popup_vitu2_query_button_pane_ParamLimits

0x6fb4,	// (0x00034cd5) popup_vitu2_query_button_pane

0x6fc5,	// (0x00034ce6) popup_vitu2_query_input_button_pane

0xd54e,	// (0x0003b26f) popup_vitu2_query_window_g1_ParamLimits

0x6fcf,	// (0x00034cf0) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003d73d) popup_vitu2_query_window_g_ParamLimits

0x9b75,	// (0x00037896) bg_button_pane_cp026

0x76f3,	// (0x00035414) popup_vitu2_query_input_button_pane_g1

0x9b75,	// (0x00037896) bg_button_pane_cp025

0xd9cb,	// (0x0003b6ec) popup_vitu2_query_button_pane_t1

0x51a8,	// (0x00032ec9) main_mp3_pane_t6

0x51b6,	// (0x00032ed7) popup_slider_window_cp01

0x65d8,	// (0x000342f9) cam4_battery_pane

0x6631,	// (0x00034352) cam4_battery_pane_cp02

0xa72c,	// (0x0003844d) cam4_battery_pane_cp01

0xa72c,	// (0x0003844d) cam4_battery_pane_cp03

0xd8c6,	// (0x0003b5e7) cam4_battery_pane_g1

0xc800,	// (0x0003a521) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003d841) cam4_battery_pane_g

0xc6cc,	// (0x0003a3ed) popup_blid_sat_info2_window_t11

0xadc2,	// (0x00038ae3) aid_size_touch_mv_arrow_left_ParamLimits

0xadeb,	// (0x00038b0c) aid_size_touch_mv_arrow_right_ParamLimits

0xae49,	// (0x00038b6a) navi_pane_g1_ParamLimits

0xae55,	// (0x00038b76) navi_pane_g2_ParamLimits

0xae83,	// (0x00038ba4) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003d106) navi_pane_g_ParamLimits

0x3c24,	// (0x00031945) navi_pane_mv_t1_ParamLimits

0x5db3,	// (0x00033ad4) grid_imed_effect_pane_ParamLimits

0x27ab,	// (0x000304cc) aid_placing_vt_slider_lsc

0xa50e,	// (0x0003822f) aid_placing_vt_slider_prt

0xa708,	// (0x00038429) bg_tb_trans_pane_cp01_ParamLimits

0xc98c,	// (0x0003a6ad) popup_image_details_window_g1_ParamLimits

0xc99f,	// (0x0003a6c0) popup_image_details_window_g2_ParamLimits

0xc9b4,	// (0x0003a6d5) popup_image_details_window_g3_ParamLimits

0xc9b4,	// (0x0003a6d5) popup_image_details_window_g3

0xf718,	// (0x0003d439) popup_image_details_window_g_ParamLimits

0xc9c8,	// (0x0003a6e9) popup_image_details_window_t1_ParamLimits

0xc9da,	// (0x0003a6fb) popup_image_details_window_t2_ParamLimits

0xc9f3,	// (0x0003a714) popup_image_details_window_t3_ParamLimits

0xca07,	// (0x0003a728) popup_image_details_window_t4_ParamLimits

0xca22,	// (0x0003a743) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0003d440) popup_image_details_window_t_ParamLimits

0x733f,	// (0x00035060) cl_header_name_pane_ParamLimits

0x733f,	// (0x00035060) cl_header_name_pane

0x76fb,	// (0x0003541c) cl_header_name_pane_t1_ParamLimits

0x76fb,	// (0x0003541c) cl_header_name_pane_t1

0x771c,	// (0x0003543d) cl_header_name_pane_t2_ParamLimits

0x771c,	// (0x0003543d) cl_header_name_pane_t2

0x775e,	// (0x0003547f) cl_header_name_pane_t3_ParamLimits

0x775e,	// (0x0003547f) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003d846) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003d846) cl_header_name_pane_t

0xaf12,	// (0x00038c33) navi_pane_mv_g2_ParamLimits

0xd26a,	// (0x0003af8b) field_vitu2_entry_pane_g1_ParamLimits

0xd276,	// (0x0003af97) field_vitu2_entry_pane_g2_ParamLimits

0xd282,	// (0x0003afa3) field_vitu2_entry_pane_g3_ParamLimits

0xd282,	// (0x0003afa3) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003d63c) field_vitu2_entry_pane_g_ParamLimits

0x66f8,	// (0x00034419) cell_vitu2_itu_pane_g1_ParamLimits

0x156e,	// (0x0002f28f) cell_vitu2_itu_pane_g2_ParamLimits

0x156e,	// (0x0002f28f) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003d648) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003d648) cell_vitu2_itu_pane_g

0x1944,	// (0x0002f665) bg_vkb2_func_pane_cp05_ParamLimits

0x1944,	// (0x0002f665) bg_vkb2_func_pane_cp05

0x1944,	// (0x0002f665) bg_vkb2_func_pane_cp03

0x1944,	// (0x0002f665) bg_vkb2_func_pane_cp04

0x1944,	// (0x0002f665) bg_vkb2_func_pane_cp10_ParamLimits

0x1944,	// (0x0002f665) bg_vkb2_func_pane_cp10

0x72e5,	// (0x00035006) bg_vkb2_func_pane_cp08

0x72cb,	// (0x00034fec) bg_vkb2_func_pane_cp06

0x72d9,	// (0x00034ffa) bg_vkb2_func_pane_cp07

0xd8d9,	// (0x0003b5fa) bg_vkb2_func_pane_cp11_ParamLimits

0xd8d9,	// (0x0003b5fa) bg_vkb2_func_pane_cp11

0xd8ee,	// (0x0003b60f) bg_vkb2_func_pane_cp12_ParamLimits

0xd8ee,	// (0x0003b60f) bg_vkb2_func_pane_cp12

0x9b75,	// (0x00037896) bg_vkb2_func_pane_cp09

0xd2bf,	// (0x0003afe0) bg_vkb2_func_pane_g1

0xa6d0,	// (0x000383f1) bg_vkb2_func_pane_g2

0xd2c7,	// (0x0003afe8) bg_vkb2_func_pane_g3

0xd2cf,	// (0x0003aff0) bg_vkb2_func_pane_g4

0xd513,	// (0x0003b234) bg_vkb2_func_pane_g5

0xd2e7,	// (0x0003b008) bg_vkb2_func_pane_g6

0xd2ef,	// (0x0003b010) bg_vkb2_func_pane_g7

0xd2df,	// (0x0003b000) bg_vkb2_func_pane_g8

0xa6b0,	// (0x000383d1) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003d84d) bg_vkb2_func_pane_g

0x761f,	// (0x00035340) blid2_tripm_pane_g6_ParamLimits

0x761f,	// (0x00035340) blid2_tripm_pane_g6

0xd10c,	// (0x0003ae2d) mp4_progress_pane_g1

0x7698,	// (0x000353b9) blid2_tripm_values_pane_ParamLimits

0x7698,	// (0x000353b9) blid2_tripm_values_pane

0x778f,	// (0x000354b0) blid2_tripm_values_pane_t1

0x779d,	// (0x000354be) blid2_tripm_values_pane_t2

0x77ab,	// (0x000354cc) blid2_tripm_values_pane_t3

0x77b9,	// (0x000354da) blid2_tripm_values_pane_t4

0x77c7,	// (0x000354e8) blid2_tripm_values_pane_t5

0x77d5,	// (0x000354f6) blid2_tripm_values_pane_t6

0x77e3,	// (0x00035504) blid2_tripm_values_pane_t7

0x77f1,	// (0x00035512) blid2_tripm_values_pane_t8

0x77ff,	// (0x00035520) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003d860) blid2_tripm_values_pane_t

0x27ed,	// (0x0003050e) call_video_pane_t1_ParamLimits

0x280b,	// (0x0003052c) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003cf8f) call_video_pane_t_ParamLimits

0x4108,	// (0x00031e29) msg_header_pane_g1_ParamLimits

0xb102,	// (0x00038e23) msg_header_pane_g2_ParamLimits

0xb102,	// (0x00038e23) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003d1a9) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003d1a9) msg_header_pane_g

0xa2b2,	// (0x00037fd3) main_clock2_pane_ParamLimits

0x5b2c,	// (0x0003384d) grid_clock2_toolbar_pane_ParamLimits

0x5b2c,	// (0x0003384d) grid_clock2_toolbar_pane

0x5b2c,	// (0x0003384d) listscroll_clock2_pane_ParamLimits

0x5b2c,	// (0x0003384d) listscroll_clock2_pane

0x5c1f,	// (0x00033940) main_clock2_pane_t3_ParamLimits

0x5c1f,	// (0x00033940) main_clock2_pane_t3

0x5c43,	// (0x00033964) main_clock2_pane_t4_ParamLimits

0x5c43,	// (0x00033964) main_clock2_pane_t4

0xd9d9,	// (0x0003b6fa) cell_clock2_toolbar_pane

0xd9e1,	// (0x0003b702) cell_clock2_toolbar_pane_cp01

0xd9e1,	// (0x0003b702) cell_clock2_toolbar_pane_cp02

0xd9e9,	// (0x0003b70a) cell_clock2_toolbar_pane_cp03

0xd9f1,	// (0x0003b712) list_clock2_pane

0xad38,	// (0x00038a59) scroll_pane_cp10

0xd9f9,	// (0x0003b71a) list_single_clock2_pane_ParamLimits

0xd9f9,	// (0x0003b71a) list_single_clock2_pane

0xa477,	// (0x00038198) list_highlight_pane_cp08

0xda06,	// (0x0003b727) list_single_clock2_pane_t1

0xda14,	// (0x0003b735) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003d873) list_single_clock2_pane_t

0x9b75,	// (0x00037896) bg_button_pane_cp10

0xda22,	// (0x0003b743) cell_clock2_toolbar_pane_g1

0x05c2,	// (0x0002e2e3) aid_main_viewer_pane_g1_ParamLimits

0x05c2,	// (0x0002e2e3) aid_main_viewer_pane_g1

0x05d0,	// (0x0002e2f1) aid_main_viewer_pane_g2_ParamLimits

0x05d0,	// (0x0002e2f1) aid_main_viewer_pane_g2

0x412e,	// (0x00031e4f) aid_main_viewer_pane_g3_ParamLimits

0x412e,	// (0x00031e4f) aid_main_viewer_pane_g3

0x413d,	// (0x00031e5e) aid_main_viewer_pane_g4_ParamLimits

0x413d,	// (0x00031e5e) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003d1ba) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003d1ba) aid_main_viewer_pane_g

0x0604,	// (0x0002e325) main_calc_pane_ParamLimits

0x062a,	// (0x0002e34b) main_dialer2_pane_ParamLimits

0x195e,	// (0x0002f67f) main_cam6_pane

0x195e,	// (0x0002f67f) main_vid6_pane

0x5b38,	// (0x00033859) listscroll_gen_pane_cp06_ParamLimits

0x5b38,	// (0x00033859) listscroll_gen_pane_cp06

0x5c66,	// (0x00033987) main_clock2_pane_t5_ParamLimits

0x5c66,	// (0x00033987) main_clock2_pane_t5

0x5cc0,	// (0x000339e1) aid_call2_pane_cp10_ParamLimits

0x5cd2,	// (0x000339f3) aid_call_pane_cp10_ParamLimits

0xadb6,	// (0x00038ad7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadb6,	// (0x00038ad7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5ce4,	// (0x00033a05) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5ce4,	// (0x00033a05) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadb6,	// (0x00038ad7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003d4f5) popup_clock_analogue_window_cp10_g_ParamLimits

0x5cf6,	// (0x00033a17) popup_clock_analogue_window_cp10_t1_ParamLimits

0x63cb,	// (0x000340ec) cell_dialer2_keypad_pane_g2_ParamLimits

0x63cb,	// (0x000340ec) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003d5db) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003d5db) cell_dialer2_keypad_pane_g

0x63e7,	// (0x00034108) cell_dialer2_keypad_pane_t1

0x6a13,	// (0x00034734) main_cset_text2_pane_ParamLimits

0x6a13,	// (0x00034734) main_cset_text2_pane

0xd73a,	// (0x0003b45b) area_vitu2_query_pane_g1_ParamLimits

0x726a,	// (0x00034f8b) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003d790) area_vitu2_query_pane_g_ParamLimits

0xd7be,	// (0x0003b4df) area_vitu2_query_pane_t7_ParamLimits

0xd7be,	// (0x0003b4df) area_vitu2_query_pane_t7

0x72cb,	// (0x00034fec) bg_button_pane_cp018_ParamLimits

0x72d9,	// (0x00034ffa) bg_button_pane_cp021_ParamLimits

0x72e5,	// (0x00035006) bg_button_pane_cp022_ParamLimits

0x72e5,	// (0x00035006) bg_vkb2_func_pane_cp08_ParamLimits

0x72cb,	// (0x00034fec) bg_vkb2_func_pane_cp06_ParamLimits

0x72d9,	// (0x00034ffa) bg_vkb2_func_pane_cp07_ParamLimits

0x72f4,	// (0x00035015) input_focus_pane_cp09_ParamLimits

0xa796,	// (0x000384b7) cam6_autofocus_pane_ParamLimits

0xa796,	// (0x000384b7) cam6_autofocus_pane

0x1818,	// (0x0002f539) cam6_image_uncrop_pane_ParamLimits

0x1818,	// (0x0002f539) cam6_image_uncrop_pane

0x1827,	// (0x0002f548) cam6_indi_pane_ParamLimits

0x1827,	// (0x0002f548) cam6_indi_pane

0x183d,	// (0x0002f55e) cam6_mode_pane_ParamLimits

0x183d,	// (0x0002f55e) cam6_mode_pane

0x184f,	// (0x0002f570) cam6_timer_pane_ParamLimits

0x184f,	// (0x0002f570) cam6_timer_pane

0x185b,	// (0x0002f57c) cam6_zoom_pane_ParamLimits

0x185b,	// (0x0002f57c) cam6_zoom_pane

0x780d,	// (0x0003552e) cam6_mode_pane_g1_ParamLimits

0x780d,	// (0x0003552e) cam6_mode_pane_g1

0x781d,	// (0x0003553e) cam6_mode_pane_g2_ParamLimits

0x781d,	// (0x0003553e) cam6_mode_pane_g2

0x782d,	// (0x0003554e) cam6_mode_pane_g3_ParamLimits

0x782d,	// (0x0003554e) cam6_mode_pane_g3

0x783d,	// (0x0003555e) cam6_mode_pane_g4_ParamLimits

0x783d,	// (0x0003555e) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003d878) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003d878) cam6_mode_pane_g

0xd887,	// (0x0003b5a8) bg_tb_trans_pane_cp08_ParamLimits

0xd887,	// (0x0003b5a8) bg_tb_trans_pane_cp08

0xda2a,	// (0x0003b74b) cam6_battery_pane_ParamLimits

0xda2a,	// (0x0003b74b) cam6_battery_pane

0xda40,	// (0x0003b761) cam6_indi_pane_g1_ParamLimits

0xda40,	// (0x0003b761) cam6_indi_pane_g1

0xda52,	// (0x0003b773) cam6_indi_pane_g2_ParamLimits

0xda52,	// (0x0003b773) cam6_indi_pane_g2

0xda64,	// (0x0003b785) cam6_indi_pane_g3_ParamLimits

0xda64,	// (0x0003b785) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003d881) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003d881) cam6_indi_pane_g

0xda76,	// (0x0003b797) cam6_indi_pane_t1_ParamLimits

0xda76,	// (0x0003b797) cam6_indi_pane_t1

0x784d,	// (0x0003556e) cam6_autofocus_pane_g1

0x7855,	// (0x00035576) cam6_autofocus_pane_g2

0x785d,	// (0x0003557e) cam6_autofocus_pane_g3

0x7865,	// (0x00035586) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003d888) cam6_autofocus_pane_g

0xda9c,	// (0x0003b7bd) cam6_timer_pane_g1

0xdaa4,	// (0x0003b7c5) cam6_timer_pane_t1

0xdab2,	// (0x0003b7d3) cam6_zoom_cont_pane

0xdaba,	// (0x0003b7db) cam6_zoom_pane_g1

0xdac2,	// (0x0003b7e3) cam6_zoom_pane_g2

0x786d,	// (0x0003558e) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003d891) cam6_zoom_pane_g

0xc800,	// (0x0003a521) cam6_battery_pane_g1

0xc800,	// (0x0003a521) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0003d3fd) cam6_battery_pane_g

0xdaca,	// (0x0003b7eb) cam6_zoom_cont_pane_g1

0xdad3,	// (0x0003b7f4) cam6_zoom_cont_pane_g2

0xdadc,	// (0x0003b7fd) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003d898) cam6_zoom_cont_pane_g

0x788a,	// (0x000355ab) cam6_mode_pane_cp_ParamLimits

0x788a,	// (0x000355ab) cam6_mode_pane_cp

0x789c,	// (0x000355bd) cam6_zoom_pane_cp_ParamLimits

0x789c,	// (0x000355bd) cam6_zoom_pane_cp

0x78a8,	// (0x000355c9) vid6_image_uncrop_cif_pane_ParamLimits

0x78a8,	// (0x000355c9) vid6_image_uncrop_cif_pane

0x78b8,	// (0x000355d9) vid6_image_uncrop_nhd_pane_ParamLimits

0x78b8,	// (0x000355d9) vid6_image_uncrop_nhd_pane

0x78c7,	// (0x000355e8) vid6_image_uncrop_vga_pane_ParamLimits

0x78c7,	// (0x000355e8) vid6_image_uncrop_vga_pane

0x78d6,	// (0x000355f7) vid6_image_uncrop_wvga_pane_ParamLimits

0x78d6,	// (0x000355f7) vid6_image_uncrop_wvga_pane

0x78e5,	// (0x00035606) vid6_indi_pane_ParamLimits

0x78e5,	// (0x00035606) vid6_indi_pane

0xd887,	// (0x0003b5a8) bg_tb_trans_pane_cp09_ParamLimits

0xd887,	// (0x0003b5a8) bg_tb_trans_pane_cp09

0xdaf4,	// (0x0003b815) cam6_battery_pane_cp_ParamLimits

0xdaf4,	// (0x0003b815) cam6_battery_pane_cp

0xdb00,	// (0x0003b821) vid6_indi_pane_g1_ParamLimits

0xdb00,	// (0x0003b821) vid6_indi_pane_g1

0xdb12,	// (0x0003b833) vid6_indi_pane_g2_ParamLimits

0xdb12,	// (0x0003b833) vid6_indi_pane_g2

0xdb24,	// (0x0003b845) vid6_indi_pane_g3_ParamLimits

0xdb24,	// (0x0003b845) vid6_indi_pane_g3

0xdb39,	// (0x0003b85a) vid6_indi_pane_g4_ParamLimits

0xdb39,	// (0x0003b85a) vid6_indi_pane_g4

0xdb4e,	// (0x0003b86f) vid6_indi_pane_g5_ParamLimits

0xdb4e,	// (0x0003b86f) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003d89f) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003d89f) vid6_indi_pane_g

0xdb68,	// (0x0003b889) vid6_indi_pane_t1_ParamLimits

0xdb68,	// (0x0003b889) vid6_indi_pane_t1

0xdb7e,	// (0x0003b89f) vid6_indi_pane_t2_ParamLimits

0xdb7e,	// (0x0003b89f) vid6_indi_pane_t2

0xdba6,	// (0x0003b8c7) vid6_indi_pane_t3_ParamLimits

0xdba6,	// (0x0003b8c7) vid6_indi_pane_t3

0xdbce,	// (0x0003b8ef) vid6_indi_pane_t4_ParamLimits

0xdbce,	// (0x0003b8ef) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003d8aa) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003d8aa) vid6_indi_pane_t

0xdbf2,	// (0x0003b913) wait_bar_pane_cp08

0x78fd,	// (0x0003561e) main_cset_text2_pane_t1_ParamLimits

0x78fd,	// (0x0003561e) main_cset_text2_pane_t1

0x7875,	// (0x00035596) listscroll_gen_pane_cp06_t1_ParamLimits

0x7875,	// (0x00035596) listscroll_gen_pane_cp06_t1

0x195e,	// (0x0002f67f) main_cam6_set_pane

0x65ca,	// (0x000342eb) bg_tb_trans_pane_cp06_ParamLimits

0x65e0,	// (0x00034301) cam4_indicators_pane_g1_ParamLimits

0x65f1,	// (0x00034312) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003d618) cam4_indicators_pane_g_ParamLimits

0x660f,	// (0x00034330) cam4_indicators_pane_t1_ParamLimits

0x1944,	// (0x0002f665) bg_tb_trans_pane_cp07_ParamLimits

0x663b,	// (0x0003435c) vid4_indicators_pane_g1_ParamLimits

0x664f,	// (0x00034370) vid4_indicators_pane_g2_ParamLimits

0x6663,	// (0x00034384) vid4_indicators_pane_g3_ParamLimits

0x6674,	// (0x00034395) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003d62a) vid4_indicators_pane_g_ParamLimits

0x6692,	// (0x000343b3) vid4_indicators_pane_t1_ParamLimits

0xa734,	// (0x00038455) vid4_progress_pane_g1_ParamLimits

0xa744,	// (0x00038465) vid4_progress_pane_g2_ParamLimits

0x17db,	// (0x0002f4fc) vid4_progress_pane_g3_ParamLimits

0xa754,	// (0x00038475) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003d7db) vid4_progress_pane_g_ParamLimits

0x17ed,	// (0x0002f50e) vid4_progress_pane_t1_ParamLimits

0xa76c,	// (0x0003848d) vid4_progress_pane_t2_ParamLimits

0xa781,	// (0x000384a2) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003d7e6) vid4_progress_pane_t_ParamLimits

0x1805,	// (0x0002f526) wait_bar_pane_cp07_ParamLimits

0x791a,	// (0x0003563b) main_cam6_set_pane_g2_ParamLimits

0x791a,	// (0x0003563b) main_cam6_set_pane_g2

0x793e,	// (0x0003565f) main_cset6_listscroll_pane_ParamLimits

0x793e,	// (0x0003565f) main_cset6_listscroll_pane

0x795e,	// (0x0003567f) main_cset6_slider_pane_ParamLimits

0x795e,	// (0x0003567f) main_cset6_slider_pane

0x7974,	// (0x00035695) main_cset6_text2_pane_ParamLimits

0x7974,	// (0x00035695) main_cset6_text2_pane

0xdc01,	// (0x0003b922) main_cset6_text_pane

0xdc09,	// (0x0003b92a) main_cset_list_pane_copy1_ParamLimits

0xdc09,	// (0x0003b92a) main_cset_list_pane_copy1

0xdc19,	// (0x0003b93a) scroll_pane_cp028_copy1

0x7982,	// (0x000356a3) cset_list_set_pane_copy1

0x7993,	// (0x000356b4) aid_position_infowindow_above_copy1

0x799b,	// (0x000356bc) aid_position_infowindow_below_copy1

0x79a3,	// (0x000356c4) cset_list_set_pane_g1_copy1

0x79ab,	// (0x000356cc) cset_list_set_pane_g3_copy1_ParamLimits

0x79ab,	// (0x000356cc) cset_list_set_pane_g3_copy1

0x79ba,	// (0x000356db) cset_list_set_pane_t1_copy1_ParamLimits

0x79ba,	// (0x000356db) cset_list_set_pane_t1_copy1

0xa708,	// (0x00038429) list_highlight_pane_cp021_copy1_ParamLimits

0xa708,	// (0x00038429) list_highlight_pane_cp021_copy1

0xdc22,	// (0x0003b943) cset6_slider_pane_ParamLimits

0xdc22,	// (0x0003b943) cset6_slider_pane

0xdc4e,	// (0x0003b96f) main_cset6_slider_pane_g1_ParamLimits

0xdc4e,	// (0x0003b96f) main_cset6_slider_pane_g1

0x79cf,	// (0x000356f0) main_cset6_slider_pane_g2_ParamLimits

0x79cf,	// (0x000356f0) main_cset6_slider_pane_g2

0xdc76,	// (0x0003b997) main_cset6_slider_pane_g3_ParamLimits

0xdc76,	// (0x0003b997) main_cset6_slider_pane_g3

0x79f7,	// (0x00035718) main_cset6_slider_pane_g4_ParamLimits

0x79f7,	// (0x00035718) main_cset6_slider_pane_g4

0x7a03,	// (0x00035724) main_cset6_slider_pane_g5_ParamLimits

0x7a03,	// (0x00035724) main_cset6_slider_pane_g5

0xd3ee,	// (0x0003b10f) main_cset6_slider_pane_g7_ParamLimits

0xd3ee,	// (0x0003b10f) main_cset6_slider_pane_g7

0xd3fa,	// (0x0003b11b) main_cset6_slider_pane_g8_ParamLimits

0xd3fa,	// (0x0003b11b) main_cset6_slider_pane_g8

0x6ac0,	// (0x000347e1) main_cset6_slider_pane_g9_ParamLimits

0x6ac0,	// (0x000347e1) main_cset6_slider_pane_g9

0x6acc,	// (0x000347ed) main_cset6_slider_pane_g10_ParamLimits

0x6acc,	// (0x000347ed) main_cset6_slider_pane_g10

0x6ad8,	// (0x000347f9) main_cset6_slider_pane_g11_ParamLimits

0x6ad8,	// (0x000347f9) main_cset6_slider_pane_g11

0x6ae4,	// (0x00034805) main_cset6_slider_pane_g12_ParamLimits

0x6ae4,	// (0x00034805) main_cset6_slider_pane_g12

0x6af0,	// (0x00034811) main_cset6_slider_pane_g13_ParamLimits

0x6af0,	// (0x00034811) main_cset6_slider_pane_g13

0x6afc,	// (0x0003481d) main_cset6_slider_pane_g14_ParamLimits

0x6afc,	// (0x0003481d) main_cset6_slider_pane_g14

0x7a0f,	// (0x00035730) main_cset6_slider_pane_g15_ParamLimits

0x7a0f,	// (0x00035730) main_cset6_slider_pane_g15

0x6b20,	// (0x00034841) main_cset6_slider_pane_g16_ParamLimits

0x6b20,	// (0x00034841) main_cset6_slider_pane_g16

0x6b2c,	// (0x0003484d) main_cset6_slider_pane_g17_ParamLimits

0x6b2c,	// (0x0003484d) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003d8b3) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003d8b3) main_cset6_slider_pane_g

0xdc82,	// (0x0003b9a3) main_cset6_slider_pane_t1_ParamLimits

0xdc82,	// (0x0003b9a3) main_cset6_slider_pane_t1

0x7a3f,	// (0x00035760) main_cset6_slider_pane_t2_ParamLimits

0x7a3f,	// (0x00035760) main_cset6_slider_pane_t2

0x7a6a,	// (0x0003578b) main_cset6_slider_pane_t3_ParamLimits

0x7a6a,	// (0x0003578b) main_cset6_slider_pane_t3

0x7a95,	// (0x000357b6) main_cset6_slider_pane_t4_ParamLimits

0x7a95,	// (0x000357b6) main_cset6_slider_pane_t4

0x7ac0,	// (0x000357e1) main_cset6_slider_pane_t5_ParamLimits

0x7ac0,	// (0x000357e1) main_cset6_slider_pane_t5

0xdcc3,	// (0x0003b9e4) main_cset6_slider_pane_t7_ParamLimits

0xdcc3,	// (0x0003b9e4) main_cset6_slider_pane_t7

0x7aeb,	// (0x0003580c) main_cset6_slider_pane_t8_ParamLimits

0x7aeb,	// (0x0003580c) main_cset6_slider_pane_t8

0x7b0f,	// (0x00035830) main_cset6_slider_pane_t9_ParamLimits

0x7b0f,	// (0x00035830) main_cset6_slider_pane_t9

0x7b33,	// (0x00035854) main_cset6_slider_pane_t10_ParamLimits

0x7b33,	// (0x00035854) main_cset6_slider_pane_t10

0x7b57,	// (0x00035878) main_cset6_slider_pane_t11_ParamLimits

0x7b57,	// (0x00035878) main_cset6_slider_pane_t11

0xdcf9,	// (0x0003ba1a) main_cset6_slider_pane_t14_ParamLimits

0xdcf9,	// (0x0003ba1a) main_cset6_slider_pane_t14

0xdd32,	// (0x0003ba53) main_cset6_slider_pane_t15_ParamLimits

0xdd32,	// (0x0003ba53) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003d8d8) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003d8d8) main_cset6_slider_pane_t

0xd895,	// (0x0003b5b6) cset_slider_pane_g1_copy1

0xd89e,	// (0x0003b5bf) cset_slider_pane_g2_copy1

0xd8a7,	// (0x0003b5c8) cset_slider_pane_g3_copy1

0x9b75,	// (0x00037896) bg_popup_sub_pane_cp011_copy1

0xdd6b,	// (0x0003ba8c) main_cset_text_pane_g1_copy1

0xd562,	// (0x0003b283) main_cset_text_pane_t1_copy1

0xd570,	// (0x0003b291) main_cset_text_pane_t2_copy1

0xd57e,	// (0x0003b29f) main_cset_text_pane_t3_copy1

0xd58c,	// (0x0003b2ad) main_cset_text_pane_t4_copy1

0xd59a,	// (0x0003b2bb) main_cset_text_pane_t5_copy1

0xdd73,	// (0x0003ba94) main_cset_text_pane_t6_copy1

0xd5b6,	// (0x0003b2d7) main_cset_text_pane_t7_copy1

0x78fd,	// (0x0003561e) main_cset_text2_pane_t1_copy1

0x1944,	// (0x0002f665) main_ncimui_pane

0x0874,	// (0x0002e595) popup_query_ncimui_window_ParamLimits

0x0874,	// (0x0002e595) popup_query_ncimui_window

0xcad1,	// (0x0003a7f2) field_cale_ev2_pane_g4_ParamLimits

0xcad1,	// (0x0003a7f2) field_cale_ev2_pane_g4

0x616b,	// (0x00033e8c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x616b,	// (0x00033e8c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003d5b6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003d5b6) cell_video_dialer_keypad_pane_g

0x6183,	// (0x00033ea4) cell_video_dialer_keypad_pane_t1

0x9b75,	// (0x00037896) bg_popup_window_pane_cp012

0xac05,	// (0x00038926) heading_pane_cp06

0xdd9f,	// (0x0003bac0) ncim_query_content_pane

0x9b75,	// (0x00037896) bg_popup_heading_pane_cp01

0xdda7,	// (0x0003bac8) ncim_heading_pane_t1

0xddb5,	// (0x0003bad6) ncim_indicator_popup_pane

0xddc7,	// (0x0003bae8) ncim_query_button_pane

0xdddb,	// (0x0003bafc) ncim_query_content_pane_t1

0xdded,	// (0x0003bb0e) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003d91c) ncim_query_content_pane_t

0xde27,	// (0x0003bb48) ncim_query_list_pane

0xde39,	// (0x0003bb5a) ncim_query_popup_pane

0xddb5,	// (0x0003bad6) ncim_indicator_popup_pane_ParamLimits

0x7d72,	// (0x00035a93) ncim_query_content_pane_g1_ParamLimits

0x7d72,	// (0x00035a93) ncim_query_content_pane_g1

0xdddb,	// (0x0003bafc) ncim_query_content_pane_t1_ParamLimits

0xdded,	// (0x0003bb0e) ncim_query_content_pane_t2_ParamLimits

0x7d7e,	// (0x00035a9f) ncim_query_content_pane_t3_ParamLimits

0x7d7e,	// (0x00035a9f) ncim_query_content_pane_t3

0x7da6,	// (0x00035ac7) ncim_query_content_pane_t4_ParamLimits

0x7da6,	// (0x00035ac7) ncim_query_content_pane_t4

0x7dce,	// (0x00035aef) ncim_query_content_pane_t5_ParamLimits

0x7dce,	// (0x00035aef) ncim_query_content_pane_t5

0xddff,	// (0x0003bb20) ncim_query_content_pane_t6_ParamLimits

0xddff,	// (0x0003bb20) ncim_query_content_pane_t6

0xfbfb,	// (0x0003d91c) ncim_query_content_pane_t_ParamLimits

0xde27,	// (0x0003bb48) ncim_query_list_pane_ParamLimits

0xde39,	// (0x0003bb5a) ncim_query_popup_pane_ParamLimits

0xde4d,	// (0x0003bb6e) wait_bar_pane_cp04

0x9b75,	// (0x00037896) input_focus_pane_cp011

0xde55,	// (0x0003bb76) ncim_query_popup_pane_t1

0xde63,	// (0x0003bb84) ncim_list_query_list_pane_ParamLimits

0xde63,	// (0x0003bb84) ncim_list_query_list_pane

0x9b75,	// (0x00037896) bg_button_pane_cp027

0xde70,	// (0x0003bb91) ncim_query_button_pane_g1

0x9b75,	// (0x00037896) list_highlight_pane_cp012

0xde7a,	// (0x0003bb9b) ncim_list_query_list_pane_g1

0xde82,	// (0x0003bba3) ncim_list_query_list_pane_t1

0x6600,	// (0x00034321) cam4_indicators_pane_g3_ParamLimits

0x6600,	// (0x00034321) cam4_indicators_pane_g3

0x6680,	// (0x000343a1) vid4_indicators_pane_g5_ParamLimits

0x6680,	// (0x000343a1) vid4_indicators_pane_g5

0xa760,	// (0x00038481) vid4_progress_pane_g5_ParamLimits

0xa760,	// (0x00038481) vid4_progress_pane_g5

0x7c60,	// (0x00035981) main_ncimui_pane_g1

0x7cc6,	// (0x000359e7) ncimui_group_query_pane_ParamLimits

0x7cc6,	// (0x000359e7) ncimui_group_query_pane

0x7d0e,	// (0x00035a2f) ncimui_list_pane_ParamLimits

0x7d0e,	// (0x00035a2f) ncimui_list_pane

0x7d35,	// (0x00035a56) ncimui_text_pane_ParamLimits

0x7d35,	// (0x00035a56) ncimui_text_pane

0x7df6,	// (0x00035b17) ncimui_text_pane_t1_ParamLimits

0x7df6,	// (0x00035b17) ncimui_text_pane_t1

0xde90,	// (0x0003bbb1) ncimui_list_single_graphic_pane_ParamLimits

0xde90,	// (0x0003bbb1) ncimui_list_single_graphic_pane

0x7e14,	// (0x00035b35) ncimui_query_pane_ParamLimits

0x7e14,	// (0x00035b35) ncimui_query_pane

0x9b75,	// (0x00037896) list_highlight_pane_cp013

0xdea0,	// (0x0003bbc1) ncim_list_query_list_pane_t1_copy1

0xde7a,	// (0x0003bb9b) ncim_list_single_graphic_pane_g1

0xdeae,	// (0x0003bbcf) ncim_query_button_pane_cp01

0xdeba,	// (0x0003bbdb) ncim_query_entry_pane_ParamLimits

0xdeba,	// (0x0003bbdb) ncim_query_entry_pane

0xdecd,	// (0x0003bbee) ncimui_query_pane_g1

0xded9,	// (0x0003bbfa) ncimui_query_pane_t1_ParamLimits

0xded9,	// (0x0003bbfa) ncimui_query_pane_t1

0xa708,	// (0x00038429) input_focus_pane_cp012

0xdef2,	// (0x0003bc13) ncim_query_entry_pane_t1

0xa2b2,	// (0x00037fd3) main_im_pane_ParamLimits

0x1944,	// (0x0002f665) main_mobtv_pane_ParamLimits

0x1944,	// (0x0002f665) main_mobtv_pane

0x7a27,	// (0x00035748) main_cset6_slider_pane_g18_ParamLimits

0x7a27,	// (0x00035748) main_cset6_slider_pane_g18

0x7a33,	// (0x00035754) main_cset6_slider_pane_g19_ParamLimits

0x7a33,	// (0x00035754) main_cset6_slider_pane_g19

0x7e27,	// (0x00035b48) bg_main_mobtv_pane_ParamLimits

0x7e27,	// (0x00035b48) bg_main_mobtv_pane

0x7e35,	// (0x00035b56) main_mobtv_info_pane

0x7e3e,	// (0x00035b5f) main_mobtv_loading_pane_ParamLimits

0x7e3e,	// (0x00035b5f) main_mobtv_loading_pane

0xdf04,	// (0x0003bc25) main_mobtv_pg_channel_list_pane

0xdf0e,	// (0x0003bc2f) main_mobtv_pg_hdr_pane

0x7e4b,	// (0x00035b6c) main_mobtv_programe_curr_pane_ParamLimits

0x7e4b,	// (0x00035b6c) main_mobtv_programe_curr_pane

0x7e58,	// (0x00035b79) main_mobtv_programe_next_pane_ParamLimits

0x7e58,	// (0x00035b79) main_mobtv_programe_next_pane

0xdf17,	// (0x0003bc38) popup_mobtv_noti_window

0xc800,	// (0x0003a521) main_tv_pg_hdr_pane_g1

0xdf1f,	// (0x0003bc40) main_tv_pg_hdr_pane_g2

0xdf27,	// (0x0003bc48) main_tv_pg_hdr_pane_g3

0xdf2f,	// (0x0003bc50) main_tv_pg_hdr_pane_g4

0xdf37,	// (0x0003bc58) main_tv_pg_hdr_pane_g5

0xdf41,	// (0x0003bc62) main_tv_pg_hdr_pane_g6

0xdf4b,	// (0x0003bc6c) main_tv_pg_hdr_pane_g7

0xdf55,	// (0x0003bc76) main_tv_pg_hdr_pane_g8

0xdf5f,	// (0x0003bc80) main_tv_pg_hdr_pane_g9

0xdf69,	// (0x0003bc8a) main_tv_pg_hdr_pane_g10

0xdf73,	// (0x0003bc94) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003d929) main_tv_pg_hdr_pane_g

0xdf7d,	// (0x0003bc9e) main_tv_pg_hdr_pane_t1

0xdf8b,	// (0x0003bcac) main_tv_pg_hdr_pane_t2

0xdf99,	// (0x0003bcba) main_tv_pg_hdr_pane_t3

0xdfa9,	// (0x0003bcca) main_tv_pg_hdr_pane_t4

0xdfb9,	// (0x0003bcda) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003d940) main_tv_pg_hdr_pane_t

0xdfc9,	// (0x0003bcea) single_mobtv_pg_channel_pane_ParamLimits

0xdfc9,	// (0x0003bcea) single_mobtv_pg_channel_pane

0xdfdb,	// (0x0003bcfc) single_mobtv_pg_channel_table_pane

0xdfe4,	// (0x0003bd05) single_mobtv_pg_channel_thumb_pane

0xdfed,	// (0x0003bd0e) single_tv_pg_channel_pane_g1

0xdff6,	// (0x0003bd17) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003d94b) single_tv_pg_channel_pane_g

0xca6c,	// (0x0003a78d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca6c,	// (0x0003a78d) bg_single_mobtv_pg_channel_thumb_pane

0xdfff,	// (0x0003bd20) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfff,	// (0x0003bd20) single_mobtv_pg_channel_thumb_pane_g1

0xe00d,	// (0x0003bd2e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe00d,	// (0x0003bd2e) single_mobtv_pg_channel_thumb_pane_g2

0xe019,	// (0x0003bd3a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe019,	// (0x0003bd3a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003d950) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003d950) single_mobtv_pg_channel_thumb_pane_g

0xe025,	// (0x0003bd46) single_mobtv_pg_channel_thumb_pane_t1

0xe033,	// (0x0003bd54) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003d957) single_mobtv_pg_channel_thumb_pane_t

0xc800,	// (0x0003a521) bg_single_mobtv_pg_channel_table_pane_g1

0xc800,	// (0x0003a521) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0003d3fd) bg_single_mobtv_pg_channel_table_pane_g

0xe041,	// (0x0003bd62) single_mobtv_pg_channel_table_pane_t1

0xe04f,	// (0x0003bd70) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003d95c) single_mobtv_pg_channel_table_pane_t

0x7e6d,	// (0x00035b8e) main_mobtv_info_pane_g1_ParamLimits

0x7e6d,	// (0x00035b8e) main_mobtv_info_pane_g1

0x7e8b,	// (0x00035bac) main_mobtv_info_pane_t1_ParamLimits

0x7e8b,	// (0x00035bac) main_mobtv_info_pane_t1

0x7f03,	// (0x00035c24) main_mobtv_info_pane_t2_ParamLimits

0x7f03,	// (0x00035c24) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003d966) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003d966) main_mobtv_info_pane_t

0x7f92,	// (0x00035cb3) wait_bar_pane_cp05

0x7fa4,	// (0x00035cc5) main_mobtv_loading_pane_g1_ParamLimits

0x7fa4,	// (0x00035cc5) main_mobtv_loading_pane_g1

0x7fb7,	// (0x00035cd8) main_mobtv_loading_pane_g2_ParamLimits

0x7fb7,	// (0x00035cd8) main_mobtv_loading_pane_g2

0x7fc3,	// (0x00035ce4) main_mobtv_loading_pane_g3_ParamLimits

0x7fc3,	// (0x00035ce4) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003d96d) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003d96d) main_mobtv_loading_pane_g

0xe05d,	// (0x0003bd7e) main_mobtv_loading_pane_t1_ParamLimits

0xe05d,	// (0x0003bd7e) main_mobtv_loading_pane_t1

0xe075,	// (0x0003bd96) main_mobtv_loading_pane_t2_ParamLimits

0xe075,	// (0x0003bd96) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003d974) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003d974) main_mobtv_loading_pane_t

0x7fd6,	// (0x00035cf7) wait_bar_pane_cp06_ParamLimits

0x7fd6,	// (0x00035cf7) wait_bar_pane_cp06

0xe099,	// (0x0003bdba) main_mobtv_programe_curr_pane_t1

0xe0a7,	// (0x0003bdc8) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003d979) main_mobtv_programe_curr_pane_t

0xe0b5,	// (0x0003bdd6) main_mobtv_programe_next_pane_t1

0xe0c3,	// (0x0003bde4) main_mobtv_programe_next_pane_t2

0xe0d1,	// (0x0003bdf2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003d97e) main_mobtv_programe_next_pane_t

0x9b75,	// (0x00037896) bg_popup_mobtv_noti_window_pane

0xe0df,	// (0x0003be00) popup_mobtv_noti_window_g1

0xe0e7,	// (0x0003be08) popup_mobtv_noti_window_t1

0xe0f5,	// (0x0003be16) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003d985) popup_mobtv_noti_window_t

0xc800,	// (0x0003a521) bg_popup_mobtv_noti_window_pane_g1

0x195e,	// (0x0002f67f) sc_clock_pane

0x195e,	// (0x0002f67f) main_fs_bigclock_pane

0x7682,	// (0x000353a3) blid2_tripm_pane_t4_ParamLimits

0x7682,	// (0x000353a3) blid2_tripm_pane_t4

0x7fe5,	// (0x00035d06) sc_clock_pane_g1_ParamLimits

0x7fe5,	// (0x00035d06) sc_clock_pane_g1

0x7ff7,	// (0x00035d18) sc_clock_pane_t1_ParamLimits

0x7ff7,	// (0x00035d18) sc_clock_pane_t1

0x8019,	// (0x00035d3a) sc_clock_pane_t2_ParamLimits

0x8019,	// (0x00035d3a) sc_clock_pane_t2

0x8031,	// (0x00035d52) sc_clock_pane_t3_ParamLimits

0x8031,	// (0x00035d52) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003d98a) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003d98a) sc_clock_pane_t

0x9067,	// (0x00036d88) main_fs_bigclock_indicator_pane_ParamLimits

0x9067,	// (0x00036d88) main_fs_bigclock_indicator_pane

0x80d1,	// (0x00035df2) main_fs_bigclock_pane_g1_ParamLimits

0x80d1,	// (0x00035df2) main_fs_bigclock_pane_g1

0x9073,	// (0x00036d94) main_fs_bigclock_pane_t1_ParamLimits

0x9073,	// (0x00036d94) main_fs_bigclock_pane_t1

0x9085,	// (0x00036da6) main_fs_bigclock_pane_t2_ParamLimits

0x9085,	// (0x00036da6) main_fs_bigclock_pane_t2

0x9099,	// (0x00036dba) main_fs_bigclock_pane_t3_ParamLimits

0x9099,	// (0x00036dba) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003db8f) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003db8f) main_fs_bigclock_pane_t

0xec62,	// (0x0003c983) main_fs_bigclock_indicator_pane_g1

0xddcf,	// (0x0003baf0) ncim_query_content_pane_g2_ParamLimits

0xddcf,	// (0x0003baf0) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003d917) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003d917) ncim_query_content_pane_g

0x804a,	// (0x00035d6b) sc_clock_pane_t4_ParamLimits

0x804a,	// (0x00035d6b) sc_clock_pane_t4

0x1944,	// (0x0002f665) main_radioblah_pane

0xd1f5,	// (0x0003af16) cell_call4_button_pane_t1_copy1_ParamLimits

0xd1f5,	// (0x0003af16) cell_call4_button_pane_t1_copy1

0x7c78,	// (0x00035999) main_ncimui_pane_t1_ParamLimits

0x7c78,	// (0x00035999) main_ncimui_pane_t1

0x7c92,	// (0x000359b3) main_ncimui_pane_t2_ParamLimits

0x7c92,	// (0x000359b3) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003d910) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003d910) main_ncimui_pane_t

0xe239,	// (0x0003bf5a) main_radioblah_anim_pane_ParamLimits

0xe239,	// (0x0003bf5a) main_radioblah_anim_pane

0xe24a,	// (0x0003bf6b) main_radioblah_info_pane_ParamLimits

0xe24a,	// (0x0003bf6b) main_radioblah_info_pane

0xe25e,	// (0x0003bf7f) main_radioblah_pane_t1_ParamLimits

0xe25e,	// (0x0003bf7f) main_radioblah_pane_t1

0xe27a,	// (0x0003bf9b) main_radioblah_pane_t2_ParamLimits

0xe27a,	// (0x0003bf9b) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003d9ab) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003d9ab) main_radioblah_pane_t

0x8129,	// (0x00035e4a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8129,	// (0x00035e4a) main_radioblah_rocker_ctrl_pane

0xe2c2,	// (0x0003bfe3) main_radioblah_info_pane_t1_ParamLimits

0xe2c2,	// (0x0003bfe3) main_radioblah_info_pane_t1

0x8181,	// (0x00035ea2) main_radioblah_info_pane_t2_ParamLimits

0x8181,	// (0x00035ea2) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003d9b4) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003d9b4) main_radioblah_info_pane_t

0xc800,	// (0x0003a521) main_radioblah_rocker_ctrl_pane_g1

0x8231,	// (0x00035f52) main_radioblah_rocker_ctrl_pane_g2

0x8239,	// (0x00035f5a) main_radioblah_rocker_ctrl_pane_g3

0x8241,	// (0x00035f62) main_radioblah_rocker_ctrl_pane_g4

0x8249,	// (0x00035f6a) main_radioblah_rocker_ctrl_pane_g5

0x8251,	// (0x00035f72) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003d9bd) main_radioblah_rocker_ctrl_pane_g

0x78fd,	// (0x0003561e) main_cset_text2_pane_t1_copy1_ParamLimits

0x65ae,	// (0x000342cf) cam4_image_uncrop_qvga_pane

0x6629,	// (0x0003434a) vid4_image_uncrop_qcif_pane

0xa796,	// (0x000384b7) cam6_image_uncrop_qvga_pane_ParamLimits

0xa796,	// (0x000384b7) cam6_image_uncrop_qvga_pane

0xdae4,	// (0x0003b805) vid6_image_uncrop_qcif_pane_ParamLimits

0xdae4,	// (0x0003b805) vid6_image_uncrop_qcif_pane

0x9b75,	// (0x00037896) bg_popup_preview_window_pane_cp03

0xdd81,	// (0x0003baa2) list_cset_text2_pane

0xdd89,	// (0x0003baaa) main_cset6_text2_pane_g1

0xdd91,	// (0x0003bab2) main_cset6_text2_pane_t1

0x8259,	// (0x00035f7a) list_cset_text2_pane_t1_ParamLimits

0x8259,	// (0x00035f7a) list_cset_text2_pane_t1

0x1944,	// (0x0002f665) main_radioblah_pane_ParamLimits

0x7f7e,	// (0x00035c9f) main_mobtv_info_pane_t3_ParamLimits

0x7f7e,	// (0x00035c9f) main_mobtv_info_pane_t3

0x8117,	// (0x00035e38) main_radioblah_pane_g1

0x8151,	// (0x00035e72) main_radioblah_info_pane_g1

0x81d6,	// (0x00035ef7) main_radioblah_info_pane_t3_ParamLimits

0x81d6,	// (0x00035ef7) main_radioblah_info_pane_t3

0x36b8,	// (0x000313d9) highlight_cell_cale_month_pane_ParamLimits

0x36b8,	// (0x000313d9) highlight_cell_cale_month_pane

0x195e,	// (0x0002f67f) main_phob_fisheye_pane

0xcb74,	// (0x0003a895) scroll_pane_cp0031_ParamLimits

0xcb74,	// (0x0003a895) scroll_pane_cp0031

0xdbf2,	// (0x0003b913) wait_bar_pane_cp08_ParamLimits

0x7982,	// (0x000356a3) cset_list_set_pane_copy1_ParamLimits

0xe2fc,	// (0x0003c01d) highlight_cell_cale_month_pane_g1

0x8272,	// (0x00035f93) highlight_cell_cale_month_pane_t1

0xd82a,	// (0x0003b54b) list_gen_pane_cp01

0xd3d9,	// (0x0003b0fa) scroll_pane_01

0xe304,	// (0x0003c025) list_single_double_fisheye_pane

0x8280,	// (0x00035fa1) list_double_fisheye_pane_g1_ParamLimits

0x8280,	// (0x00035fa1) list_double_fisheye_pane_g1

0x828c,	// (0x00035fad) list_double_fisheye_pane_g2_ParamLimits

0x828c,	// (0x00035fad) list_double_fisheye_pane_g2

0x82a0,	// (0x00035fc1) list_double_fisheye_pane_g3_ParamLimits

0x82a0,	// (0x00035fc1) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003d9ca) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003d9ca) list_double_fisheye_pane_g

0x82c9,	// (0x00035fea) list_double_fisheye_pane_t1_ParamLimits

0x82c9,	// (0x00035fea) list_double_fisheye_pane_t1

0x82e4,	// (0x00036005) list_double_fisheye_pane_t2_ParamLimits

0x82e4,	// (0x00036005) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003d9d5) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003d9d5) list_double_fisheye_pane_t

0x195e,	// (0x0002f67f) main_call5_pane

0x8075,	// (0x00035d96) sc_swipe_pane_ParamLimits

0x8075,	// (0x00035d96) sc_swipe_pane

0x8319,	// (0x0003603a) call5_image_pane_ParamLimits

0x8319,	// (0x0003603a) call5_image_pane

0x8336,	// (0x00036057) call5_swipe_1_pane_ParamLimits

0x8336,	// (0x00036057) call5_swipe_1_pane

0x8349,	// (0x0003606a) call5_swipe_2_pane_ParamLimits

0x8349,	// (0x0003606a) call5_swipe_2_pane

0x8374,	// (0x00036095) popup_call5_audio_first_window_ParamLimits

0x8374,	// (0x00036095) popup_call5_audio_first_window

0xca6c,	// (0x0003a78d) call5_swipe_1_pane_g1_ParamLimits

0xca6c,	// (0x0003a78d) call5_swipe_1_pane_g1

0xe30d,	// (0x0003c02e) call5_swipe_1_pane_g2_ParamLimits

0xe30d,	// (0x0003c02e) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003d9da) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003d9da) call5_swipe_1_pane_g

0xe319,	// (0x0003c03a) call5_swipe_1_pane_t1_ParamLimits

0xe319,	// (0x0003c03a) call5_swipe_1_pane_t1

0xca6c,	// (0x0003a78d) call5_swipe_2_pane_g1_ParamLimits

0xca6c,	// (0x0003a78d) call5_swipe_2_pane_g1

0xe32e,	// (0x0003c04f) call5_swipe_2_pane_g2_ParamLimits

0xe32e,	// (0x0003c04f) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003d9df) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003d9df) call5_swipe_2_pane_g

0xe33a,	// (0x0003c05b) call5_swipe_2_pane_t1_ParamLimits

0xe33a,	// (0x0003c05b) call5_swipe_2_pane_t1

0xe34f,	// (0x0003c070) sc_swipe_pane_g1_ParamLimits

0xe34f,	// (0x0003c070) sc_swipe_pane_g1

0xe35c,	// (0x0003c07d) sc_swipe_pane_g2_ParamLimits

0xe35c,	// (0x0003c07d) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003d9e4) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003d9e4) sc_swipe_pane_g

0xe368,	// (0x0003c089) sc_swipe_pane_t1_ParamLimits

0xe368,	// (0x0003c089) sc_swipe_pane_t1

0x195e,	// (0x0002f67f) main_cmail_launcher_pane

0x8385,	// (0x000360a6) aid_size_cell_cmail_l_ParamLimits

0x8385,	// (0x000360a6) aid_size_cell_cmail_l

0x839f,	// (0x000360c0) grid_cmail_l_pane_ParamLimits

0x839f,	// (0x000360c0) grid_cmail_l_pane

0x83ba,	// (0x000360db) cell_cmail_l_pane_ParamLimits

0x83ba,	// (0x000360db) cell_cmail_l_pane

0x83e0,	// (0x00036101) cell_cmail_l_pane_g1_ParamLimits

0x83e0,	// (0x00036101) cell_cmail_l_pane_g1

0x83ec,	// (0x0003610d) cell_cmail_l_pane_t1_ParamLimits

0x83ec,	// (0x0003610d) cell_cmail_l_pane_t1

0xe37d,	// (0x0003c09e) cell_cmail_l_pane_t2_ParamLimits

0xe37d,	// (0x0003c09e) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003d9e9) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003d9e9) cell_cmail_l_pane_t

0xa708,	// (0x00038429) grid_highlight_pane_cp018_ParamLimits

0xa708,	// (0x00038429) grid_highlight_pane_cp018

0x01df,	// (0x0002df00) main2_pane_ParamLimits

0x01df,	// (0x0002df00) main2_pane

0xa34b,	// (0x0003806c) popup_sp_fs_action_menu_bg_pane_g1

0xa353,	// (0x00038074) popup_sp_fs_action_menu_bg_pane_g2

0xa35b,	// (0x0003807c) popup_sp_fs_action_menu_bg_pane_g3

0xa363,	// (0x00038084) popup_sp_fs_action_menu_bg_pane_g4

0xa36b,	// (0x0003808c) popup_sp_fs_action_menu_bg_pane_g5

0xa373,	// (0x00038094) popup_sp_fs_action_menu_bg_pane_g6

0xa37b,	// (0x0003809c) popup_sp_fs_action_menu_bg_pane_g7

0xa383,	// (0x000380a4) popup_sp_fs_action_menu_bg_pane_g8

0xa38b,	// (0x000380ac) popup_sp_fs_action_menu_bg_pane_g9

0xa393,	// (0x000380b4) popup_sp_fs_action_menu_bg_pane_g10

0xa393,	// (0x000380b4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0003ceab) popup_sp_fs_action_menu_bg_pane_g

0x2623,	// (0x00030344) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x2_t3_g3_g1

0x262f,	// (0x00030350) list_medium_line_x2_t3_g3_g2_ParamLimits

0x262f,	// (0x00030350) list_medium_line_x2_t3_g3_g2

0x263b,	// (0x0003035c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x263b,	// (0x0003035c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003cf59) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003cf59) list_medium_line_x2_t3_g3_g

0x2647,	// (0x00030368) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2647,	// (0x00030368) list_medium_line_x2_t3_g3_t1

0x265c,	// (0x0003037d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x265c,	// (0x0003037d) list_medium_line_x2_t3_g3_t2

0x2670,	// (0x00030391) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2670,	// (0x00030391) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003cf60) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003cf60) list_medium_line_x2_t3_g3_t

0x2623,	// (0x00030344) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x2_t3_g2_g1

0x263b,	// (0x0003035c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x263b,	// (0x0003035c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003cf67) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003cf67) list_medium_line_x2_t3_g2_g

0x2685,	// (0x000303a6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2685,	// (0x000303a6) list_medium_line_x2_t3_g2_t1

0x269b,	// (0x000303bc) list_medium_line_x2_t3_g2_t2_ParamLimits

0x269b,	// (0x000303bc) list_medium_line_x2_t3_g2_t2

0x26ad,	// (0x000303ce) list_medium_line_x2_t3_g2_t3_ParamLimits

0x26ad,	// (0x000303ce) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003cf6c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003cf6c) list_medium_line_x2_t3_g2_t

0x2623,	// (0x00030344) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x2_t4_g4_g1

0x26cb,	// (0x000303ec) list_medium_line_x2_t4_g4_g2_ParamLimits

0x26cb,	// (0x000303ec) list_medium_line_x2_t4_g4_g2

0x262f,	// (0x00030350) list_medium_line_x2_t4_g4_g3_ParamLimits

0x262f,	// (0x00030350) list_medium_line_x2_t4_g4_g3

0x26d7,	// (0x000303f8) list_medium_line_x2_t4_g4_g4_ParamLimits

0x26d7,	// (0x000303f8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003cf73) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003cf73) list_medium_line_x2_t4_g4_g

0x26e3,	// (0x00030404) list_medium_line_x2_t4_g4_t1_ParamLimits

0x26e3,	// (0x00030404) list_medium_line_x2_t4_g4_t1

0x26fd,	// (0x0003041e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x26fd,	// (0x0003041e) list_medium_line_x2_t4_g4_t2

0x2713,	// (0x00030434) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2713,	// (0x00030434) list_medium_line_x2_t4_g4_t3

0x2728,	// (0x00030449) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2728,	// (0x00030449) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003cf7c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003cf7c) list_medium_line_x2_t4_g4_t

0x2623,	// (0x00030344) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x2_t2_g4_g1

0x26cb,	// (0x000303ec) list_medium_line_x2_t2_g4_g2_ParamLimits

0x26cb,	// (0x000303ec) list_medium_line_x2_t2_g4_g2

0x262f,	// (0x00030350) list_medium_line_x2_t2_g4_g3_ParamLimits

0x262f,	// (0x00030350) list_medium_line_x2_t2_g4_g3

0x263b,	// (0x0003035c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x263b,	// (0x0003035c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003cfe3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003cfe3) list_medium_line_x2_t2_g4_g

0x36de,	// (0x000313ff) list_medium_line_x2_t2_g4_t1_ParamLimits

0x36de,	// (0x000313ff) list_medium_line_x2_t2_g4_t1

0x2670,	// (0x00030391) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2670,	// (0x00030391) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003cfec) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003cfec) list_medium_line_x2_t2_g4_t

0x2623,	// (0x00030344) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x2_t2_g3_g1

0x262f,	// (0x00030350) list_medium_line_x2_t2_g3_g2_ParamLimits

0x262f,	// (0x00030350) list_medium_line_x2_t2_g3_g2

0x263b,	// (0x0003035c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x263b,	// (0x0003035c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003cf59) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003cf59) list_medium_line_x2_t2_g3_g

0x36f3,	// (0x00031414) list_medium_line_x2_t2_g3_t1_ParamLimits

0x36f3,	// (0x00031414) list_medium_line_x2_t2_g3_t1

0x2670,	// (0x00030391) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2670,	// (0x00030391) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003cff1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003cff1) list_medium_line_x2_t2_g3_t

0x383e,	// (0x0003155f) main_sp_fs_list_pane_ParamLimits

0x383e,	// (0x0003155f) main_sp_fs_list_pane

0xcc8b,	// (0x0003a9ac) sp_fs_scroll_pane_ParamLimits

0xcc8b,	// (0x0003a9ac) sp_fs_scroll_pane

0x384a,	// (0x0003156b) list_medium_line_x2_t3_t1

0x385a,	// (0x0003157b) list_medium_line_x2_t3_t2

0x3868,	// (0x00031589) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003d03c) list_medium_line_x2_t3_t

0x3876,	// (0x00031597) list_medium_line_x3_t4_t1

0x3886,	// (0x000315a7) list_medium_line_x3_t4_t2

0x3894,	// (0x000315b5) list_medium_line_x3_t4_t3

0x3868,	// (0x00031589) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003d043) list_medium_line_x3_t4_t

0x38a2,	// (0x000315c3) list_medium_line_x4_t5_t1

0x38b2,	// (0x000315d3) list_medium_line_x4_t5_t2

0x3894,	// (0x000315b5) list_medium_line_x4_t5_t3

0x38c0,	// (0x000315e1) list_medium_line_x4_t5_t4

0x3868,	// (0x00031589) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003d04c) list_medium_line_x4_t5_t

0x2623,	// (0x00030344) list_medium_line_t4_g4_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_t4_g4_g1

0x38ce,	// (0x000315ef) list_medium_line_t4_g4_g2_ParamLimits

0x38ce,	// (0x000315ef) list_medium_line_t4_g4_g2

0x38da,	// (0x000315fb) list_medium_line_t4_g4_g3_ParamLimits

0x38da,	// (0x000315fb) list_medium_line_t4_g4_g3

0x263b,	// (0x0003035c) list_medium_line_t4_g4_g4_ParamLimits

0x263b,	// (0x0003035c) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003d057) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003d057) list_medium_line_t4_g4_g

0x38e6,	// (0x00031607) list_medium_line_t4_g4_t1_ParamLimits

0x38e6,	// (0x00031607) list_medium_line_t4_g4_t1

0x38fb,	// (0x0003161c) list_medium_line_t4_g4_t2_ParamLimits

0x38fb,	// (0x0003161c) list_medium_line_t4_g4_t2

0x3911,	// (0x00031632) list_medium_line_t4_g4_t3_ParamLimits

0x3911,	// (0x00031632) list_medium_line_t4_g4_t3

0x2670,	// (0x00030391) list_medium_line_t4_g4_t4_ParamLimits

0x2670,	// (0x00030391) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003d060) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003d060) list_medium_line_t4_g4_t

0x3a4d,	// (0x0003176e) chi_dic_find_pane_g1

0x063e,	// (0x0002e35f) main_tport_pane

0x6df9,	// (0x00034b1a) list_medium_line_plain_t1

0x6e4d,	// (0x00034b6e) list_medium_line_t2_g2_g1_ParamLimits

0x6e4d,	// (0x00034b6e) list_medium_line_t2_g2_g1

0x6e59,	// (0x00034b7a) list_medium_line_t2_g2_g2_ParamLimits

0x6e59,	// (0x00034b7a) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003d721) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003d721) list_medium_line_t2_g2_g

0x6e65,	// (0x00034b86) list_medium_line_t2_g2_t1_ParamLimits

0x6e65,	// (0x00034b86) list_medium_line_t2_g2_t1

0x6e7c,	// (0x00034b9d) list_medium_line_t2_g2_t2_ParamLimits

0x6e7c,	// (0x00034b9d) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003d726) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003d726) list_medium_line_t2_g2_t

0xd833,	// (0x0003b554) aid_sp_fs_list_icon_a_sm

0xd83b,	// (0x0003b55c) aid_sp_fs_list_icon_d

0xd843,	// (0x0003b564) aid_sp_fs_text_primary

0xd84c,	// (0x0003b56d) aid_sp_fs_text_secondary

0x742f,	// (0x00035150) list_medium_line

0x742f,	// (0x00035150) list_medium_line_g2

0x742f,	// (0x00035150) list_medium_line_g3

0x742f,	// (0x00035150) list_medium_line_plain

0x742f,	// (0x00035150) list_medium_line_plain_t2

0x742f,	// (0x00035150) list_medium_line_plain_t3

0x742f,	// (0x00035150) list_medium_line_right_icon

0x742f,	// (0x00035150) list_medium_line_right_iconx2

0x742f,	// (0x00035150) list_medium_line_t2

0x742f,	// (0x00035150) list_medium_line_t2_g2

0x742f,	// (0x00035150) list_medium_line_t2_g3

0x742f,	// (0x00035150) list_medium_line_t2_right_icon

0x742f,	// (0x00035150) list_medium_line_t2_right_iconx2

0x742f,	// (0x00035150) list_medium_line_t3

0x742f,	// (0x00035150) list_medium_line_t3_g2

0x742f,	// (0x00035150) list_medium_line_t3_g3

0x742f,	// (0x00035150) list_medium_line_t3_right_iconx2

0x7438,	// (0x00035159) list_medium_line_t4_g4

0x7441,	// (0x00035162) list_medium_line_x2

0x7441,	// (0x00035162) list_medium_line_x2_t2_g2

0x7441,	// (0x00035162) list_medium_line_x2_t2_g3

0x7441,	// (0x00035162) list_medium_line_x2_t2_g4

0x7441,	// (0x00035162) list_medium_line_x2_t3

0x7441,	// (0x00035162) list_medium_line_x2_t3_g2

0x7441,	// (0x00035162) list_medium_line_x2_t3_g3

0x7441,	// (0x00035162) list_medium_line_x2_t3_g4

0x7441,	// (0x00035162) list_medium_line_x2_t4_g2

0x7441,	// (0x00035162) list_medium_line_x2_t4_g4

0x744a,	// (0x0003516b) list_medium_line_x3

0x744a,	// (0x0003516b) list_medium_line_x3_t4

0x744a,	// (0x0003516b) list_medium_line_x3_t4_g4

0x7438,	// (0x00035159) list_medium_line_x4_t4

0x7438,	// (0x00035159) list_medium_line_x4_t4_g7

0x7438,	// (0x00035159) list_medium_line_x4_t5

0x7453,	// (0x00035174) list_single_fs_dyc_pane_ParamLimits

0x7453,	// (0x00035174) list_single_fs_dyc_pane

0x2623,	// (0x00030344) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x4_t4_g7_g1

0x7b7b,	// (0x0003589c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7b7b,	// (0x0003589c) list_medium_line_x4_t4_g7_g2

0x7b87,	// (0x000358a8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7b87,	// (0x000358a8) list_medium_line_x4_t4_g7_g3

0x7b96,	// (0x000358b7) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7b96,	// (0x000358b7) list_medium_line_x4_t4_g7_g4

0x7ba2,	// (0x000358c3) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ba2,	// (0x000358c3) list_medium_line_x4_t4_g7_g5

0x7bb1,	// (0x000358d2) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7bb1,	// (0x000358d2) list_medium_line_x4_t4_g7_g6

0x7bc0,	// (0x000358e1) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7bc0,	// (0x000358e1) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003d8f1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003d8f1) list_medium_line_x4_t4_g7_g

0x7bcc,	// (0x000358ed) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7bcc,	// (0x000358ed) list_medium_line_x4_t4_g7_t1

0x7be1,	// (0x00035902) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7be1,	// (0x00035902) list_medium_line_x4_t4_g7_t2

0x7bf6,	// (0x00035917) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7bf6,	// (0x00035917) list_medium_line_x4_t4_g7_t3

0x7c0b,	// (0x0003592c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c0b,	// (0x0003592c) list_medium_line_x4_t4_g7_t4

0x7c1d,	// (0x0003593e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c1d,	// (0x0003593e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003d900) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003d900) list_medium_line_x4_t4_g7_t

0x7c2f,	// (0x00035950) list_single_dyc_row_pane_ParamLimits

0x7c2f,	// (0x00035950) list_single_dyc_row_pane

0x8306,	// (0x00036027) call5_gesture_pane_ParamLimits

0x8306,	// (0x00036027) call5_gesture_pane

0x835c,	// (0x0003607d) call5_windows_pane_ParamLimits

0x835c,	// (0x0003607d) call5_windows_pane

0x8402,	// (0x00036123) call5_swipe_1_pane_cp_ParamLimits

0x8402,	// (0x00036123) call5_swipe_1_pane_cp

0x840e,	// (0x0003612f) call5_swipe_2_pane_cp_ParamLimits

0x840e,	// (0x0003612f) call5_swipe_2_pane_cp

0xa477,	// (0x00038198) call5_image_pane_cp

0x841a,	// (0x0003613b) popup_call5_audio_first_window_cp_ParamLimits

0x841a,	// (0x0003613b) popup_call5_audio_first_window_cp

0xe34f,	// (0x0003c070) call5_swipe_1_pane_g1_cp_ParamLimits

0xe34f,	// (0x0003c070) call5_swipe_1_pane_g1_cp

0xe38f,	// (0x0003c0b0) call5_swipe_1_pane_g2_cp

0xe368,	// (0x0003c089) call5_swipe_1_pane_t1_cp_ParamLimits

0xe368,	// (0x0003c089) call5_swipe_1_pane_t1_cp

0xe34f,	// (0x0003c070) call5_swipe_2_pane_g1_cp_ParamLimits

0xe34f,	// (0x0003c070) call5_swipe_2_pane_g1_cp

0xe397,	// (0x0003c0b8) call5_swipe_2_pane_g2_cp

0xe39f,	// (0x0003c0c0) call5_swipe_2_pane_t1_cp_ParamLimits

0xe39f,	// (0x0003c0c0) call5_swipe_2_pane_t1_cp

0xa708,	// (0x00038429) main_sp_fs_email_pane

0xe3b4,	// (0x0003c0d5) main_sp_fs_listscroll_pane_te

0x8428,	// (0x00036149) popup_sp_fs_action_menu_pane_ParamLimits

0x8428,	// (0x00036149) popup_sp_fs_action_menu_pane

0xc800,	// (0x0003a521) bg_sp_fs_ctrlbar_pane_g1

0xce17,	// (0x0003ab38) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xce29,	// (0x0003ab4a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xce20,	// (0x0003ab41) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc800,	// (0x0003a521) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003d9ee) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5e5,	// (0x0003a306) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5e5,	// (0x0003a306) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3bd,	// (0x0003c0de) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3bd,	// (0x0003c0de) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3c9,	// (0x0003c0ea) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3c9,	// (0x0003c0ea) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003d9f7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003d9f7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3d5,	// (0x0003c0f6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3d5,	// (0x0003c0f6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x846c,	// (0x0003618d) list_medium_line_t2_right_icon_g1

0x8474,	// (0x00036195) list_medium_line_t2_right_icon_t1

0x8484,	// (0x000361a5) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003d9fc) list_medium_line_t2_right_icon_t

0xc3f8,	// (0x0003a119) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3f8,	// (0x0003a119) bg_sp_fs_ctrlbar_pane

0x84de,	// (0x000361ff) main_sp_fs_ctrlbar_button_pane_cp01

0x84e8,	// (0x00036209) main_sp_fs_ctrlbar_ddmenu_pane

0xe427,	// (0x0003c148) main_sp_fs_ctrlbar_pane_g1

0xe433,	// (0x0003c154) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003da01) main_sp_fs_ctrlbar_pane_g

0xe43f,	// (0x0003c160) main_sp_fs_ctrlbar_pane_t1

0x84f2,	// (0x00036213) main_sp_fs_ctrlbar_pane

0x8516,	// (0x00036237) main_sp_fs_listscroll_pane_te_cp01

0x8536,	// (0x00036257) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8536,	// (0x00036257) popup_sp_fs_action_menu_pane_cp01

0xa708,	// (0x00038429) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa708,	// (0x00038429) bg_sp_fs_highlight_list_pane_cp01

0xe46f,	// (0x0003c190) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe46f,	// (0x0003c190) sp_fs_action_menu_list_gene_pane_g1

0xe47e,	// (0x0003c19f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe47e,	// (0x0003c19f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003da0b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003da0b) sp_fs_action_menu_list_gene_pane_g

0xe48b,	// (0x0003c1ac) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe48b,	// (0x0003c1ac) sp_fs_action_menu_list_gene_pane_t1

0xe4a3,	// (0x0003c1c4) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4a3,	// (0x0003c1c4) sp_fs_action_menu_list_gene_pane

0xe4c2,	// (0x0003c1e3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4c2,	// (0x0003c1e3) popup_sp_fs_action_menu_bg_pane

0xe4d0,	// (0x0003c1f1) sp_fs_action_menu_list_pane_ParamLimits

0xe4d0,	// (0x0003c1f1) sp_fs_action_menu_list_pane

0x8566,	// (0x00036287) sp_fs_scroll_pane_cp01_ParamLimits

0x8566,	// (0x00036287) sp_fs_scroll_pane_cp01

0x858c,	// (0x000362ad) list_medium_line_plain_t2_t1

0x859c,	// (0x000362bd) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003da10) list_medium_line_plain_t2_t

0x85ac,	// (0x000362cd) list_medium_line_plain_t3_t1

0x85bc,	// (0x000362dd) list_medium_line_plain_t3_t2

0x85ca,	// (0x000362eb) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003da15) list_medium_line_plain_t3_t

0x2623,	// (0x00030344) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x2_t2_g2_g1

0x263b,	// (0x0003035c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x263b,	// (0x0003035c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003cf67) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003cf67) list_medium_line_x2_t2_g2_g

0x38e6,	// (0x00031607) list_medium_line_x2_t2_g2_t1_ParamLimits

0x38e6,	// (0x00031607) list_medium_line_x2_t2_g2_t1

0x2670,	// (0x00030391) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2670,	// (0x00030391) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003da1c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003da1c) list_medium_line_x2_t2_g2_t

0x2623,	// (0x00030344) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x2_t4_g2_g1

0x263b,	// (0x0003035c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x263b,	// (0x0003035c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003cf67) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003cf67) list_medium_line_x2_t4_g2_g

0x85d8,	// (0x000362f9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x85d8,	// (0x000362f9) list_medium_line_x2_t4_g2_t1

0x85ef,	// (0x00036310) list_medium_line_x2_t4_g2_t2_ParamLimits

0x85ef,	// (0x00036310) list_medium_line_x2_t4_g2_t2

0x8604,	// (0x00036325) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8604,	// (0x00036325) list_medium_line_x2_t4_g2_t3

0x2670,	// (0x00030391) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2670,	// (0x00030391) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003da21) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003da21) list_medium_line_x2_t4_g2_t

0x8616,	// (0x00036337) list_medium_line_t3_right_iconx2_g1

0x846c,	// (0x0003618d) list_medium_line_t3_right_iconx2_g2

0x861e,	// (0x0003633f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003da2a) list_medium_line_t3_right_iconx2_g

0x8628,	// (0x00036349) list_medium_line_t3_right_iconx2_t1

0x8638,	// (0x00036359) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003da31) list_medium_line_t3_right_iconx2_t

0x2623,	// (0x00030344) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x3_t4_g4_g1

0x262f,	// (0x00030350) list_medium_line_x3_t4_g4_g2_ParamLimits

0x262f,	// (0x00030350) list_medium_line_x3_t4_g4_g2

0x38ce,	// (0x000315ef) list_medium_line_x3_t4_g4_g3_ParamLimits

0x38ce,	// (0x000315ef) list_medium_line_x3_t4_g4_g3

0x8646,	// (0x00036367) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8646,	// (0x00036367) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003da36) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003da36) list_medium_line_x3_t4_g4_g

0x8652,	// (0x00036373) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8652,	// (0x00036373) list_medium_line_x3_t4_g4_t1

0x8669,	// (0x0003638a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8669,	// (0x0003638a) list_medium_line_x3_t4_g4_t2

0x8684,	// (0x000363a5) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8684,	// (0x000363a5) list_medium_line_x3_t4_g4_t3

0x8699,	// (0x000363ba) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8699,	// (0x000363ba) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003da3f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003da3f) list_medium_line_x3_t4_g4_t

0x86b6,	// (0x000363d7) list_single_dyc_row_text_pane_t1_ParamLimits

0x86b6,	// (0x000363d7) list_single_dyc_row_text_pane_t1

0x86ff,	// (0x00036420) list_single_dyc_row_text_pane_t2_ParamLimits

0x86ff,	// (0x00036420) list_single_dyc_row_text_pane_t2

0xe502,	// (0x0003c223) list_single_dyc_row_text_pane_t3_ParamLimits

0xe502,	// (0x0003c223) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003da48) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003da48) list_single_dyc_row_text_pane_t

0xe526,	// (0x0003c247) list_single_dyc_row_pane_g1_ParamLimits

0xe526,	// (0x0003c247) list_single_dyc_row_pane_g1

0xe532,	// (0x0003c253) list_single_dyc_row_pane_g2_ParamLimits

0xe532,	// (0x0003c253) list_single_dyc_row_pane_g2

0xe53e,	// (0x0003c25f) list_single_dyc_row_pane_g3_ParamLimits

0xe53e,	// (0x0003c25f) list_single_dyc_row_pane_g3

0xe54a,	// (0x0003c26b) list_single_dyc_row_pane_g4_ParamLimits

0xe54a,	// (0x0003c26b) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003da55) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003da55) list_single_dyc_row_pane_g

0xe556,	// (0x0003c277) list_single_dyc_row_text_pane_ParamLimits

0xe556,	// (0x0003c277) list_single_dyc_row_text_pane

0x9b75,	// (0x00037896) bg_sp_fs_scroll_pane

0xe575,	// (0x0003c296) thumb_sp_fs_scroll_pane

0x6e4d,	// (0x00034b6e) list_medium_line_g1_ParamLimits

0x6e4d,	// (0x00034b6e) list_medium_line_g1

0x8834,	// (0x00036555) list_medium_line_t1_ParamLimits

0x8834,	// (0x00036555) list_medium_line_t1

0x2623,	// (0x00030344) list_medium_line_x2_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x2_g1

0x262f,	// (0x00030350) list_medium_line_x2_g2_ParamLimits

0x262f,	// (0x00030350) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003da5e) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003da5e) list_medium_line_x2_g

0xe57e,	// (0x0003c29f) list_medium_line_x2_t1_ParamLimits

0xe57e,	// (0x0003c29f) list_medium_line_x2_t1

0x2623,	// (0x00030344) list_medium_line_x3_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x3_g1

0x262f,	// (0x00030350) list_medium_line_x3_g2_ParamLimits

0x262f,	// (0x00030350) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003da5e) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003da5e) list_medium_line_x3_g

0xe57e,	// (0x0003c29f) list_medium_line_x3_t1_ParamLimits

0xe57e,	// (0x0003c29f) list_medium_line_x3_t1

0xe594,	// (0x0003c2b5) thumb_sp_fs_scroll_pane_g1

0xe59d,	// (0x0003c2be) thumb_sp_fs_scroll_pane_g2

0xe5a6,	// (0x0003c2c7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003da63) thumb_sp_fs_scroll_pane_g

0xe594,	// (0x0003c2b5) bg_sp_fs_scroll_pane_g1

0xe59d,	// (0x0003c2be) bg_sp_fs_scroll_pane_g2

0xe5a6,	// (0x0003c2c7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003da63) bg_sp_fs_scroll_pane_g

0x2623,	// (0x00030344) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2623,	// (0x00030344) list_medium_line_x2_t3_g4_g1

0x26cb,	// (0x000303ec) list_medium_line_x2_t3_g4_g2_ParamLimits

0x26cb,	// (0x000303ec) list_medium_line_x2_t3_g4_g2

0x262f,	// (0x00030350) list_medium_line_x2_t3_g4_g3_ParamLimits

0x262f,	// (0x00030350) list_medium_line_x2_t3_g4_g3

0x263b,	// (0x0003035c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x263b,	// (0x0003035c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003cfe3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003cfe3) list_medium_line_x2_t3_g4_g

0x8849,	// (0x0003656a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8849,	// (0x0003656a) list_medium_line_x2_t3_g4_t1

0x8863,	// (0x00036584) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8863,	// (0x00036584) list_medium_line_x2_t3_g4_t2

0x2670,	// (0x00030391) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2670,	// (0x00030391) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003da6a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003da6a) list_medium_line_x2_t3_g4_t

0x6e4d,	// (0x00034b6e) list_medium_line_g2_g1_ParamLimits

0x6e4d,	// (0x00034b6e) list_medium_line_g2_g1

0x6e59,	// (0x00034b7a) list_medium_line_g2_g2_ParamLimits

0x6e59,	// (0x00034b7a) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003d721) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003d721) list_medium_line_g2_g

0x887d,	// (0x0003659e) list_medium_line_g2_t1_ParamLimits

0x887d,	// (0x0003659e) list_medium_line_g2_t1

0x6e4d,	// (0x00034b6e) list_medium_line_t3_g2_g1_ParamLimits

0x6e4d,	// (0x00034b6e) list_medium_line_t3_g2_g1

0x6e59,	// (0x00034b7a) list_medium_line_t3_g2_g2_ParamLimits

0x6e59,	// (0x00034b7a) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003d721) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003d721) list_medium_line_t3_g2_g

0x8892,	// (0x000365b3) list_medium_line_t3_g2_t1_ParamLimits

0x8892,	// (0x000365b3) list_medium_line_t3_g2_t1

0x88ac,	// (0x000365cd) list_medium_line_t3_g2_t2_ParamLimits

0x88ac,	// (0x000365cd) list_medium_line_t3_g2_t2

0x88c1,	// (0x000365e2) list_medium_line_t3_g2_t3_ParamLimits

0x88c1,	// (0x000365e2) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003da71) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003da71) list_medium_line_t3_g2_t

0x846c,	// (0x0003618d) list_medium_line_right_icon_g1

0x88db,	// (0x000365fc) list_medium_line_right_icon_t1

0x6e4d,	// (0x00034b6e) list_medium_line_t2_g1_ParamLimits

0x6e4d,	// (0x00034b6e) list_medium_line_t2_g1

0x88e9,	// (0x0003660a) list_medium_line_t2_t1_ParamLimits

0x88e9,	// (0x0003660a) list_medium_line_t2_t1

0x8903,	// (0x00036624) list_medium_line_t2_t2_ParamLimits

0x8903,	// (0x00036624) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003da78) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003da78) list_medium_line_t2_t

0x6e4d,	// (0x00034b6e) list_medium_line_t3_g1_ParamLimits

0x6e4d,	// (0x00034b6e) list_medium_line_t3_g1

0x891c,	// (0x0003663d) list_medium_line_t3_t1_ParamLimits

0x891c,	// (0x0003663d) list_medium_line_t3_t1

0x8933,	// (0x00036654) list_medium_line_t3_t2_ParamLimits

0x8933,	// (0x00036654) list_medium_line_t3_t2

0x8948,	// (0x00036669) list_medium_line_t3_t3_ParamLimits

0x8948,	// (0x00036669) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003da7d) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003da7d) list_medium_line_t3_t

0x6e4d,	// (0x00034b6e) list_medium_line_g3_g1_ParamLimits

0x6e4d,	// (0x00034b6e) list_medium_line_g3_g1

0x895a,	// (0x0003667b) list_medium_line_g3_g2_ParamLimits

0x895a,	// (0x0003667b) list_medium_line_g3_g2

0x6e59,	// (0x00034b7a) list_medium_line_g3_g3_ParamLimits

0x6e59,	// (0x00034b7a) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003da84) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003da84) list_medium_line_g3_g

0x8966,	// (0x00036687) list_medium_line_g3_t1_ParamLimits

0x8966,	// (0x00036687) list_medium_line_g3_t1

0x6e4d,	// (0x00034b6e) list_medium_line_t2_g3_g1_ParamLimits

0x6e4d,	// (0x00034b6e) list_medium_line_t2_g3_g1

0x895a,	// (0x0003667b) list_medium_line_t2_g3_g2_ParamLimits

0x895a,	// (0x0003667b) list_medium_line_t2_g3_g2

0x6e59,	// (0x00034b7a) list_medium_line_t2_g3_g3_ParamLimits

0x6e59,	// (0x00034b7a) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003da84) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003da84) list_medium_line_t2_g3_g

0x897b,	// (0x0003669c) list_medium_line_t2_g3_t1_ParamLimits

0x897b,	// (0x0003669c) list_medium_line_t2_g3_t1

0x8992,	// (0x000366b3) list_medium_line_t2_g3_t2_ParamLimits

0x8992,	// (0x000366b3) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003da8b) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003da8b) list_medium_line_t2_g3_t

0x6e4d,	// (0x00034b6e) list_medium_line_t3_g3_g1_ParamLimits

0x6e4d,	// (0x00034b6e) list_medium_line_t3_g3_g1

0x895a,	// (0x0003667b) list_medium_line_t3_g3_g2_ParamLimits

0x895a,	// (0x0003667b) list_medium_line_t3_g3_g2

0x6e59,	// (0x00034b7a) list_medium_line_t3_g3_g3_ParamLimits

0x6e59,	// (0x00034b7a) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003da84) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003da84) list_medium_line_t3_g3_g

0x89ad,	// (0x000366ce) list_medium_line_t3_g3_t1_ParamLimits

0x89ad,	// (0x000366ce) list_medium_line_t3_g3_t1

0x89c1,	// (0x000366e2) list_medium_line_t3_g3_t2_ParamLimits

0x89c1,	// (0x000366e2) list_medium_line_t3_g3_t2

0x89d3,	// (0x000366f4) list_medium_line_t3_g3_t3_ParamLimits

0x89d3,	// (0x000366f4) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003da90) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003da90) list_medium_line_t3_g3_t

0x8616,	// (0x00036337) list_medium_line_right_iconx2_g1

0x846c,	// (0x0003618d) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003da97) list_medium_line_right_iconx2_g

0x89e7,	// (0x00036708) list_medium_line_right_iconx2_t1

0x8616,	// (0x00036337) list_medium_line_t2_right_iconx2_g1

0x846c,	// (0x0003618d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003da97) list_medium_line_t2_right_iconx2_g

0x89f5,	// (0x00036716) list_medium_line_t2_right_iconx2_t1

0x8a05,	// (0x00036726) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003da9c) list_medium_line_t2_right_iconx2_t

0x8a17,	// (0x00036738) list_medium_line_x4_t4_t1

0x8a25,	// (0x00036746) list_medium_line_x4_t4_t2

0x8a35,	// (0x00036756) list_medium_line_x4_t4_t3

0x8a45,	// (0x00036766) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003daa1) list_medium_line_x4_t4_t

0x8a98,	// (0x000367b9) tport_appsw_pane_ParamLimits

0x8a98,	// (0x000367b9) tport_appsw_pane

0x8ab0,	// (0x000367d1) tport_contact_pane_ParamLimits

0x8ab0,	// (0x000367d1) tport_contact_pane

0x8ac8,	// (0x000367e9) tport_listscroll_pane_ParamLimits

0x8ac8,	// (0x000367e9) tport_listscroll_pane

0x8ae2,	// (0x00036803) cell_tport_appsw_pane_ParamLimits

0x8ae2,	// (0x00036803) cell_tport_appsw_pane

0xd282,	// (0x0003afa3) tport_appsw_pane_g1_ParamLimits

0xd282,	// (0x0003afa3) tport_appsw_pane_g1

0xe5af,	// (0x0003c2d0) tport_contact_pane_g1

0xde55,	// (0x0003bb76) tport_contact_pane_t1

0xe5b8,	// (0x0003c2d9) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003daaa) tport_contact_pane_t

0xe5c6,	// (0x0003c2e7) list_tport_pane

0xe5cf,	// (0x0003c2f0) scroll_pane_cp_030

0x8b2a,	// (0x0003684b) cell_tport_appsw_pane_g1

0x8b3a,	// (0x0003685b) cell_tport_appsw_pane_t1

0x8b48,	// (0x00036869) grid_highlight_pane_cp019

0x8b50,	// (0x00036871) list_tport_double_graphic_pane_ParamLimits

0x8b50,	// (0x00036871) list_tport_double_graphic_pane

0xa708,	// (0x00038429) list_highlight_pane_cp023_ParamLimits

0xa708,	// (0x00038429) list_highlight_pane_cp023

0x8b5d,	// (0x0003687e) list_tport_double_graphic_pane_g1_ParamLimits

0x8b5d,	// (0x0003687e) list_tport_double_graphic_pane_g1

0x8b6a,	// (0x0003688b) list_tport_double_graphic_pane_t1_ParamLimits

0x8b6a,	// (0x0003688b) list_tport_double_graphic_pane_t1

0x8b7f,	// (0x000368a0) list_tport_double_graphic_pane_t2_ParamLimits

0x8b7f,	// (0x000368a0) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003dab6) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003dab6) list_tport_double_graphic_pane_t

0x9b75,	// (0x00037896) main_cale_note_pane

0x1546,	// (0x0002f267) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1546,	// (0x0002f267) cell_vitu2_function_top_wide_pane_cp01

0x7f92,	// (0x00035cb3) wait_bar_pane_cp05_ParamLimits

0xa708,	// (0x00038429) listscroll_cmail_pane

0xe5d8,	// (0x0003c2f9) list_cmail_pane

0xd2f7,	// (0x0003b018) list_cmail_body_pane

0x8b91,	// (0x000368b2) list_single_cmail_header_caption_pane

0x8ba8,	// (0x000368c9) list_single_cmail_header_detail_pane_ParamLimits

0x8ba8,	// (0x000368c9) list_single_cmail_header_detail_pane

0xe5e8,	// (0x0003c309) list_single_cmail_header_caption_pane_t1

0x8bd2,	// (0x000368f3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bd2,	// (0x000368f3) list_single_cmail_header_detail_pane_g1

0xe5ff,	// (0x0003c320) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5ff,	// (0x0003c320) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003dabb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003dabb) list_single_cmail_header_detail_pane_g

0xe618,	// (0x0003c339) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe618,	// (0x0003c339) list_single_cmail_header_detail_pane_t1

0xe678,	// (0x0003c399) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe678,	// (0x0003c399) list_single_cmail_header_editor_pane_bg

0xdff6,	// (0x0003bd17) list_cmail_body_pane_g1

0xe68f,	// (0x0003c3b0) list_cmail_body_pane_t1

0xd2bf,	// (0x0003afe0) list_single_cmail_header_editor_pane_bg_g1

0xa6d0,	// (0x000383f1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2cf,	// (0x0003aff0) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2c7,	// (0x0003afe8) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd513,	// (0x0003b234) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2ef,	// (0x0003b010) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2df,	// (0x0003b000) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2e7,	// (0x0003b008) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa6b0,	// (0x000383d1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8bea,	// (0x0003690b) calenote_gesture_pane_ParamLimits

0x8bea,	// (0x0003690b) calenote_gesture_pane

0x8c0a,	// (0x0003692b) calenote_window_pane_ParamLimits

0x8c0a,	// (0x0003692b) calenote_window_pane

0xe69d,	// (0x0003c3be) popup_note_window_cp01

0x8c26,	// (0x00036947) calenote_swipe_1_pane_ParamLimits

0x8c26,	// (0x00036947) calenote_swipe_1_pane

0x840e,	// (0x0003612f) calenote_swipe_2_pane_ParamLimits

0x840e,	// (0x0003612f) calenote_swipe_2_pane

0xe34f,	// (0x0003c070) calenote_swipe_1_pane_g1_ParamLimits

0xe34f,	// (0x0003c070) calenote_swipe_1_pane_g1

0xe35c,	// (0x0003c07d) calenote_swipe_1_pane_g2_ParamLimits

0xe35c,	// (0x0003c07d) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003d9e4) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003d9e4) calenote_swipe_1_pane_g

0xe6af,	// (0x0003c3d0) calenote_swipe_1_pane_t1_ParamLimits

0xe6af,	// (0x0003c3d0) calenote_swipe_1_pane_t1

0xe34f,	// (0x0003c070) calenote_swipe_2_pane_g1_ParamLimits

0xe34f,	// (0x0003c070) calenote_swipe_2_pane_g1

0xe6ce,	// (0x0003c3ef) calenote_swipe_2_pane_g2_ParamLimits

0xe6ce,	// (0x0003c3ef) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003dac7) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003dac7) calenote_swipe_2_pane_g

0xe6da,	// (0x0003c3fb) calenote_swipe_2_pane_t1_ParamLimits

0xe6da,	// (0x0003c3fb) calenote_swipe_2_pane_t1

0x9b75,	// (0x00037896) main_mup_navstr_pane

0x57d4,	// (0x000334f5) main_mup3_pane_t7_ParamLimits

0x57d4,	// (0x000334f5) main_mup3_pane_t7

0x61f7,	// (0x00033f18) main_mp4_pane_g6_ParamLimits

0x61f7,	// (0x00033f18) main_mp4_pane_g6

0x643e,	// (0x0003415f) main_image3_pane_t4_ParamLimits

0x643e,	// (0x0003415f) main_image3_pane_t4

0x8c3b,	// (0x0003695c) popup_navstr_preview_pane_ParamLimits

0x8c3b,	// (0x0003695c) popup_navstr_preview_pane

0x8c4f,	// (0x00036970) scroll_navstr_pane_ParamLimits

0x8c4f,	// (0x00036970) scroll_navstr_pane

0x9b75,	// (0x00037896) bg_popup_preview_window_pane_cp04

0xe701,	// (0x0003c422) popup_navstr_preview_pane_t1

0x8c63,	// (0x00036984) scroll_navstr_pane_g1_ParamLimits

0x8c63,	// (0x00036984) scroll_navstr_pane_g1

0x8c77,	// (0x00036998) scroll_navstr_pane_t1_ParamLimits

0x8c77,	// (0x00036998) scroll_navstr_pane_t1

0xe6a6,	// (0x0003c3c7) bg_button_pane_cp014

0xe6a6,	// (0x0003c3c7) bg_button_pane_cp030

0x82ac,	// (0x00035fcd) list_double_fisheye_pane_g4_ParamLimits

0x82ac,	// (0x00035fcd) list_double_fisheye_pane_g4

0x82b8,	// (0x00035fd9) list_double_fisheye_pane_g5_ParamLimits

0x82b8,	// (0x00035fd9) list_double_fisheye_pane_g5

0xcc8b,	// (0x0003a9ac) sp_fs_scroll_pane_cp03

0xe427,	// (0x0003c148) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe433,	// (0x0003c154) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003da01) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe43f,	// (0x0003c160) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5e0,	// (0x0003c301) sp_fs_scroll_pane_cp02

0xa3b6,	// (0x000380d7) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa3b6,	// (0x000380d7) popup_sp_fs_calendar_preview_list_single_pane

0x9b75,	// (0x00037896) main_cam6_pano_pane

0x1944,	// (0x0002f665) main_mup3_pane_ParamLimits

0x9b75,	// (0x00037896) main_phacti_pane

0x7e65,	// (0x00035b86) bg_button_pane_cp11

0x7e7f,	// (0x00035ba0) main_mobtv_info_pane_g2_ParamLimits

0x7e7f,	// (0x00035ba0) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003d961) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003d961) main_mobtv_info_pane_g

0x805c,	// (0x00035d7d) sc_clock_pane_t5_ParamLimits

0x805c,	// (0x00035d7d) sc_clock_pane_t5

0x8117,	// (0x00035e38) main_radioblah_pane_g1_ParamLimits

0xe292,	// (0x0003bfb3) main_radioblah_pane_t3_ParamLimits

0xe292,	// (0x0003bfb3) main_radioblah_pane_t3

0xe2aa,	// (0x0003bfcb) main_radioblah_pane_t4_ParamLimits

0xe2aa,	// (0x0003bfcb) main_radioblah_pane_t4

0x813f,	// (0x00035e60) main_radioblah_text_pane_ParamLimits

0x813f,	// (0x00035e60) main_radioblah_text_pane

0x8151,	// (0x00035e72) main_radioblah_info_pane_g1_ParamLimits

0x81ea,	// (0x00035f0b) main_radioblah_info_pane_t4_ParamLimits

0x81ea,	// (0x00035f0b) main_radioblah_info_pane_t4

0xa708,	// (0x00038429) main_sp_fs_calendar_pane

0x8c8e,	// (0x000369af) main_phacti_pane_g1

0x8c96,	// (0x000369b7) phacti_note_pane_ParamLimits

0x8c96,	// (0x000369b7) phacti_note_pane

0xe718,	// (0x0003c439) phacti_term_pane_ParamLimits

0xe718,	// (0x0003c439) phacti_term_pane

0xe72d,	// (0x0003c44e) phacti_note_pane_t1_ParamLimits

0xe72d,	// (0x0003c44e) phacti_note_pane_t1

0xe744,	// (0x0003c465) phacti_term_pane_g1

0xe74c,	// (0x0003c46d) phacti_term_pane_t1_ParamLimits

0xe74c,	// (0x0003c46d) phacti_term_pane_t1

0xe776,	// (0x0003c497) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa4d1,	// (0x000381f2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003dad1) popup_sp_fs_calendar_preview_list_single_pane_g

0xe77e,	// (0x0003c49f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe77e,	// (0x0003c49f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe793,	// (0x0003c4b4) aid_popup_sp_fs_bg_corner_pane

0xc800,	// (0x0003a521) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b75,	// (0x00037896) popup_sp_fs_calendar_preview_bg_pane

0xe79b,	// (0x0003c4bc) popup_sp_fs_calendar_preview_list_pane

0xc3f8,	// (0x0003a119) bg_main_sp_fs_cale_pane_ParamLimits

0xc3f8,	// (0x0003a119) bg_main_sp_fs_cale_pane

0xe7a3,	// (0x0003c4c4) listscroll_cale_mrui_pane_ParamLimits

0xe7a3,	// (0x0003c4c4) listscroll_cale_mrui_pane

0xe7b8,	// (0x0003c4d9) listscroll_sp_fs_schedule_track_pane

0xe7c1,	// (0x0003c4e2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7c1,	// (0x0003c4e2) main_sp_fs_ctrlbar_pane_cp01

0xe7d4,	// (0x0003c4f5) main_sp_fs_ribbon_pane

0xe7dc,	// (0x0003c4fd) popup_sp_fs_cale_preview_window

0x8d0b,	// (0x00036a2c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d0b,	// (0x00036a2c) list_single_sp_fs_schedule_track_pane

0xa708,	// (0x00038429) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa708,	// (0x00038429) bg_sp_fs_highlight_list_pane_cp03

0x8d1f,	// (0x00036a40) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d1f,	// (0x00036a40) list_single_sp_fs_schedule_track_pane_g1

0x8d2b,	// (0x00036a4c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d2b,	// (0x00036a4c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003dad6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003dad6) list_single_sp_fs_schedule_track_pane_g

0x8d37,	// (0x00036a58) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d37,	// (0x00036a58) list_single_sp_fs_schedule_track_pane_t1

0x8d51,	// (0x00036a72) sp_fs_schedule_track_pane_ParamLimits

0x8d51,	// (0x00036a72) sp_fs_schedule_track_pane

0xe7ee,	// (0x0003c50f) sp_fs_schedule_track_pane_g1

0xe7f6,	// (0x0003c517) sp_fs_schedule_track_pane_g2

0xe7fe,	// (0x0003c51f) sp_fs_schedule_track_pane_g3

0xe806,	// (0x0003c527) sp_fs_schedule_track_pane_g4

0xe80e,	// (0x0003c52f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003dadb) sp_fs_schedule_track_pane_g

0xd2bf,	// (0x0003afe0) bg_sp_fs_schedule_viewer_highlight_g1

0xa6d0,	// (0x000383f1) bg_sp_fs_schedule_viewer_highlight_g2

0xd2c7,	// (0x0003afe8) bg_sp_fs_schedule_viewer_highlight_g3

0xd2cf,	// (0x0003aff0) bg_sp_fs_schedule_viewer_highlight_g4

0xd513,	// (0x0003b234) bg_sp_fs_schedule_viewer_highlight_g5

0xd2df,	// (0x0003b000) bg_sp_fs_schedule_viewer_highlight_g6

0xd2e7,	// (0x0003b008) bg_sp_fs_schedule_viewer_highlight_g7

0xd2ef,	// (0x0003b010) bg_sp_fs_schedule_viewer_highlight_g8

0xa6b0,	// (0x000383d1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003dae6) bg_sp_fs_schedule_viewer_highlight_g

0x9b75,	// (0x00037896) bg_main_sp_fs_ribbon_pane

0x8d62,	// (0x00036a83) main_sp_fs_ribbon_pane_g1

0xe816,	// (0x0003c537) main_sp_fs_ribbon_pane_t1

0x8d6b,	// (0x00036a8c) main_sp_fs_ribbon_pane_t2

0xe825,	// (0x0003c546) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003daf9) main_sp_fs_ribbon_pane_t

0xe834,	// (0x0003c555) main_sp_fs_ribbon_scheduler_pane

0xe83c,	// (0x0003c55d) bg_main_sp_fs_ribbon_pane_g1

0xe845,	// (0x0003c566) bg_main_sp_fs_ribbon_pane_g2

0xe84e,	// (0x0003c56f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003db00) bg_main_sp_fs_ribbon_pane_g

0xe856,	// (0x0003c577) main_sp_fs_ribbon_scheduler_pane_g1

0xe85f,	// (0x0003c580) main_sp_fs_ribbon_scheduler_pane_g2

0xe868,	// (0x0003c589) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003db07) main_sp_fs_ribbon_scheduler_pane_g

0xe871,	// (0x0003c592) list_cale_mrui_pane

0x8d7a,	// (0x00036a9b) sp_fs_scroll_pane_cp07_ParamLimits

0x8d7a,	// (0x00036a9b) sp_fs_scroll_pane_cp07

0x8d96,	// (0x00036ab7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8d96,	// (0x00036ab7) bg_sp_fs_schedule_viewer_highlight

0xe87e,	// (0x0003c59f) list_single_sp_fs_schedule_track_pane_cp01

0xe886,	// (0x0003c5a7) list_sp_fs_schedule_track_pane

0xe88e,	// (0x0003c5af) sp_fs_scroll_pane_cp06_ParamLimits

0xe88e,	// (0x0003c5af) sp_fs_scroll_pane_cp06

0xc800,	// (0x0003a521) bgmain_sp_fs_calendar_pane_g1

0x8da6,	// (0x00036ac7) list_single_cale_mrui_pane_ParamLimits

0x8da6,	// (0x00036ac7) list_single_cale_mrui_pane

0xe8a0,	// (0x0003c5c1) list_single_cale_mrui_row_pane_ParamLimits

0xe8a0,	// (0x0003c5c1) list_single_cale_mrui_row_pane

0xe8ad,	// (0x0003c5ce) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8ad,	// (0x0003c5ce) list_single_cale_mrui_row_pane_g1

0xe8f2,	// (0x0003c613) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8f2,	// (0x0003c613) list_single_cale_mrui_row_pane_t1

0x8dc7,	// (0x00036ae8) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8dc7,	// (0x00036ae8) list_single_cale_mrui_row_pane_t2

0xe904,	// (0x0003c625) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe904,	// (0x0003c625) list_single_cale_mrui_row_pane_t3

0xe933,	// (0x0003c654) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe933,	// (0x0003c654) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003db15) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003db15) list_single_cale_mrui_row_pane_t

0x8e2f,	// (0x00036b50) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e2f,	// (0x00036b50) list_single_cmail_header_editor_pane_bg_cp01

0x8e55,	// (0x00036b76) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e55,	// (0x00036b76) list_single_cmail_header_editor_pane_bg_cp02

0x8e75,	// (0x00036b96) main_radioblah_text_pane_t1_ParamLimits

0x8e75,	// (0x00036b96) main_radioblah_text_pane_t1

0xe962,	// (0x0003c683) cam6_indi_pane_cp01

0xe96a,	// (0x0003c68b) cam6_mode_pane_cp01

0xe972,	// (0x0003c693) cam6_pano_pane

0xe97b,	// (0x0003c69c) cam6_zoom_pane_cp01

0xe983,	// (0x0003c6a4) cam6_pano_image_pane

0xe98e,	// (0x0003c6af) cam6_pano_pane_g1

0xdff6,	// (0x0003bd17) cam6_pano_pane_g2

0xe997,	// (0x0003c6b8) cam6_pano_pane_g3

0xe9a0,	// (0x0003c6c1) cam6_pano_pane_g4

0xce04,	// (0x0003ab25) cam6_pano_pane_g5

0xe9a9,	// (0x0003c6ca) cam6_pano_pane_g6

0xe9b3,	// (0x0003c6d4) cam6_pano_pane_g7

0xe9bb,	// (0x0003c6dc) cam6_pano_pane_g8

0xe9c4,	// (0x0003c6e5) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003db1e) cam6_pano_pane_g

0x9b75,	// (0x00037896) main_browser_tag_pane

0xe6f9,	// (0x0003c41a) grid_navstr_albumart_pane

0xe9cf,	// (0x0003c6f0) cell_navstr_albumart_pane_ParamLimits

0xe9cf,	// (0x0003c6f0) cell_navstr_albumart_pane

0xe9ef,	// (0x0003c710) cell_navstr_albumart_pane_g1

0xc209,	// (0x00039f2a) cell_navstr_albumart_pane_g2

0xc219,	// (0x00039f3a) cell_navstr_albumart_pane_g3

0xc211,	// (0x00039f32) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003db31) cell_navstr_albumart_pane_g

0x8e8f,	// (0x00036bb0) bt_list_pane_ParamLimits

0x8e8f,	// (0x00036bb0) bt_list_pane

0x8ea3,	// (0x00036bc4) bt_list_pane_t1

0x8eb2,	// (0x00036bd3) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003db3a) bt_list_pane_t

0x9b75,	// (0x00037896) main_cale_prevew_pane

0x8ec1,	// (0x00036be2) popup_cale_preview_window_ParamLimits

0x8ec1,	// (0x00036be2) popup_cale_preview_window

0xa708,	// (0x00038429) bg_popup_preview_window_pane_cp05_ParamLimits

0xa708,	// (0x00038429) bg_popup_preview_window_pane_cp05

0xe9f7,	// (0x0003c718) list_cale_preview_pane_ParamLimits

0xe9f7,	// (0x0003c718) list_cale_preview_pane

0x8edc,	// (0x00036bfd) list_double_cale_preview_pane_ParamLimits

0x8edc,	// (0x00036bfd) list_double_cale_preview_pane

0x8eee,	// (0x00036c0f) list_single_cale_preview_pane_ParamLimits

0x8eee,	// (0x00036c0f) list_single_cale_preview_pane

0x8f04,	// (0x00036c25) list_single_cale_preview_pane_g1

0x8f0c,	// (0x00036c2d) list_single_cale_preview_pane_t1_ParamLimits

0x8f0c,	// (0x00036c2d) list_single_cale_preview_pane_t1

0x8f21,	// (0x00036c42) list_double_cale_preview_pane_g1

0x8f29,	// (0x00036c4a) list_double_cale_preview_pane_t1_ParamLimits

0x8f29,	// (0x00036c4a) list_double_cale_preview_pane_t1

0x8f3e,	// (0x00036c5f) list_double_cale_preview_pane_t2_ParamLimits

0x8f3e,	// (0x00036c5f) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003db3f) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003db3f) list_double_cale_preview_pane_t

0x9b75,	// (0x00037896) main_ezdial_pane

0xa708,	// (0x00038429) main_sp_fs_email_pane_ParamLimits

0x8496,	// (0x000361b7) cmail_ddmenu_btn01_pane_ParamLimits

0x8496,	// (0x000361b7) cmail_ddmenu_btn01_pane

0x84a9,	// (0x000361ca) cmail_ddmenu_btn02_pane_ParamLimits

0x84a9,	// (0x000361ca) cmail_ddmenu_btn02_pane

0x84cc,	// (0x000361ed) cmail_ddmenu_btn03_pane_ParamLimits

0x84cc,	// (0x000361ed) cmail_ddmenu_btn03_pane

0x84f2,	// (0x00036213) main_sp_fs_ctrlbar_pane_ParamLimits

0x8516,	// (0x00036237) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd2f7,	// (0x0003b018) list_cmail_body_pane_ParamLimits

0xe5f6,	// (0x0003c317) bg_button_pane_cp12

0xe60b,	// (0x0003c32c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe60b,	// (0x0003c32c) list_single_cmail_header_detail_pane_g3

0xe654,	// (0x0003c375) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe654,	// (0x0003c375) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003dac2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003dac2) list_single_cmail_header_detail_pane_t

0xe761,	// (0x0003c482) phacti_term_pane_t2_ParamLimits

0xe761,	// (0x0003c482) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003dacc) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003dacc) phacti_term_pane_t

0xea03,	// (0x0003c724) aid_size_list_single_double

0x8f56,	// (0x00036c77) popup_ezdial_listscroll_window

0x8f72,	// (0x00036c93) popup_number_entry_window_cp01

0xa477,	// (0x00038198) bg_popup_call_pane_cp09

0xea0f,	// (0x0003c730) ezdial_list_pane

0xea17,	// (0x0003c738) scroll_pane_cp23

0xc3f8,	// (0x0003a119) bg_button_pane_cp028_ParamLimits

0xc3f8,	// (0x0003a119) bg_button_pane_cp028

0x8f80,	// (0x00036ca1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f80,	// (0x00036ca1) cmail_ddmenu_btn01_pane_g1

0x8f8c,	// (0x00036cad) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f8c,	// (0x00036cad) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003db44) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003db44) cmail_ddmenu_btn01_pane_g

0xea1f,	// (0x0003c740) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea1f,	// (0x0003c740) cmail_ddmenu_btn01_pane_t1

0xc3f8,	// (0x0003a119) bg_button_pane_cp029_ParamLimits

0xc3f8,	// (0x0003a119) bg_button_pane_cp029

0x8fa0,	// (0x00036cc1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fa0,	// (0x00036cc1) cmail_ddmenu_btn02_pane_g1

0x8fb8,	// (0x00036cd9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fb8,	// (0x00036cd9) cmail_ddmenu_btn02_pane_t1

0xa708,	// (0x00038429) bg_button_pane_cp031_ParamLimits

0xa708,	// (0x00038429) bg_button_pane_cp031

0x8fa0,	// (0x00036cc1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fa0,	// (0x00036cc1) cmail_ddmenu_btn03_pane_g1

0x8fb8,	// (0x00036cd9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fb8,	// (0x00036cd9) cmail_ddmenu_btn03_pane_t1

0x63e7,	// (0x00034108) cell_dialer2_keypad_pane_t1_ParamLimits

0x6401,	// (0x00034122) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6401,	// (0x00034122) cell_dialer2_keypad_pane_t1_copy1

0x7cbe,	// (0x000359df) ncimui_group_button_pane

0xa708,	// (0x00038429) main_sp_fs_calendar_pane_ParamLimits

0x8b91,	// (0x000368b2) list_single_cmail_header_caption_pane_ParamLimits

0xd84c,	// (0x0003b56d) aid_recal_txt_sm_pane

0x9b75,	// (0x00037896) mian_recal_day_pane

0xe7dc,	// (0x0003c4fd) popup_sp_fs_cale_preview_window_ParamLimits

0xea35,	// (0x0003c756) list_recal_day_pane

0xea77,	// (0x0003c798) list_single_recal_day_pane_ParamLimits

0xea77,	// (0x0003c798) list_single_recal_day_pane

0xea89,	// (0x0003c7aa) list_single_recal_day_pane_g1_ParamLimits

0xea89,	// (0x0003c7aa) list_single_recal_day_pane_g1

0xea95,	// (0x0003c7b6) list_single_recal_day_pane_g2_ParamLimits

0xea95,	// (0x0003c7b6) list_single_recal_day_pane_g2

0xeaa5,	// (0x0003c7c6) list_single_recal_day_pane_g3_ParamLimits

0xeaa5,	// (0x0003c7c6) list_single_recal_day_pane_g3

0x8fdc,	// (0x00036cfd) list_single_recal_day_pane_g4_ParamLimits

0x8fdc,	// (0x00036cfd) list_single_recal_day_pane_g4

0xeab1,	// (0x0003c7d2) list_single_recal_day_pane_g5_ParamLimits

0xeab1,	// (0x0003c7d2) list_single_recal_day_pane_g5

0xeac1,	// (0x0003c7e2) list_single_recal_day_pane_g6_ParamLimits

0xeac1,	// (0x0003c7e2) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003db53) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003db53) list_single_recal_day_pane_g

0xead5,	// (0x0003c7f6) list_single_recal_day_pane_t1

0xeae7,	// (0x0003c808) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003db5e) list_single_recal_day_pane_t

0x8ffc,	// (0x00036d1d) ncimui_query_button_pane_ParamLimits

0x8ffc,	// (0x00036d1d) ncimui_query_button_pane

0x900c,	// (0x00036d2d) ncimui_query_button_pane_t1_ParamLimits

0x900c,	// (0x00036d2d) ncimui_query_button_pane_t1

0xeaf9,	// (0x0003c81a) ncimui_query_button_pane_t2_ParamLimits

0xeaf9,	// (0x0003c81a) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003db63) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003db63) ncimui_query_button_pane_t

0x901f,	// (0x00036d40) query_button_pane_ParamLimits

0x901f,	// (0x00036d40) query_button_pane

0x9b75,	// (0x00037896) bg_button_pane_cp0028

0xeb0c,	// (0x0003c82d) query_button_pane_t1

0x063e,	// (0x0002e35f) main_tport_pane_ParamLimits

0x8a55,	// (0x00036776) bg_popup_window_pane_cp01_ParamLimits

0x8a55,	// (0x00036776) bg_popup_window_pane_cp01

0x8a70,	// (0x00036791) heading_pane_cp08_ParamLimits

0x8a70,	// (0x00036791) heading_pane_cp08

0x8a83,	// (0x000367a4) heading_pane_cp07_ParamLimits

0x8a83,	// (0x000367a4) heading_pane_cp07

0x8b2a,	// (0x0003684b) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003daaf) cell_tport_appsw_pane_g

0xb0e0,	// (0x00038e01) input_candi_list_open_g1

0xa92f,	// (0x00038650) list_cale_time_pane_g6_ParamLimits

0xa92f,	// (0x00038650) list_cale_time_pane_g6

0x51c0,	// (0x00032ee1) aid_size_touch_calib_1_ParamLimits

0x51c0,	// (0x00032ee1) aid_size_touch_calib_1

0x51d2,	// (0x00032ef3) aid_size_touch_calib_2_ParamLimits

0x51d2,	// (0x00032ef3) aid_size_touch_calib_2

0x51ea,	// (0x00032f0b) aid_size_touch_calib_3_ParamLimits

0x51ea,	// (0x00032f0b) aid_size_touch_calib_3

0x5208,	// (0x00032f29) aid_size_touch_calib_4_ParamLimits

0x5208,	// (0x00032f29) aid_size_touch_calib_4

0x5220,	// (0x00032f41) main_touch_calib_button_group_pane_ParamLimits

0x5220,	// (0x00032f41) main_touch_calib_button_group_pane

0x5238,	// (0x00032f59) main_touch_calib_pane_g1_ParamLimits

0x524a,	// (0x00032f6b) main_touch_calib_pane_g2_ParamLimits

0x525c,	// (0x00032f7d) main_touch_calib_pane_g3_ParamLimits

0x526e,	// (0x00032f8f) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0003d472) main_touch_calib_pane_g_ParamLimits

0x5280,	// (0x00032fa1) main_touch_calib_pane_t1_ParamLimits

0x529a,	// (0x00032fbb) main_touch_calib_pane_t2_ParamLimits

0x52b4,	// (0x00032fd5) main_touch_calib_pane_t3_ParamLimits

0x52c8,	// (0x00032fe9) main_touch_calib_pane_t4_ParamLimits

0x52dc,	// (0x00032ffd) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0003d47b) main_touch_calib_pane_t_ParamLimits

0xcb98,	// (0x0003a8b9) list_single_fp_cale_pane_g3_ParamLimits

0xcb98,	// (0x0003a8b9) list_single_fp_cale_pane_g3

0x1944,	// (0x0002f665) bg_button_pane_cp012_ParamLimits

0x1944,	// (0x0002f665) bg_vkb2_func_pane_cp03_ParamLimits

0x1732,	// (0x0002f453) cell_vitu2_function_top_pane_g1_ParamLimits

0x1944,	// (0x0002f665) bg_vkb2_func_pane_cp04_ParamLimits

0x7c4c,	// (0x0003596d) main_ncimui_button_group_pane_ParamLimits

0x7c4c,	// (0x0003596d) main_ncimui_button_group_pane

0x7cac,	// (0x000359cd) main_ncimui_pane_t3_ParamLimits

0x7cac,	// (0x000359cd) main_ncimui_pane_t3

0xe70f,	// (0x0003c430) phacti_button_group_pane

0xea03,	// (0x0003c724) aid_size_list_single_double_ParamLimits

0x8f56,	// (0x00036c77) popup_ezdial_listscroll_window_ParamLimits

0x8f72,	// (0x00036c93) popup_number_entry_window_cp01_ParamLimits

0x9032,	// (0x00036d53) phacti_button_pane_ParamLimits

0x9032,	// (0x00036d53) phacti_button_pane

0x9b75,	// (0x00037896) bg_button_pane_cp14

0xeb1a,	// (0x0003c83b) phacti_button_pane_t1

0x9043,	// (0x00036d64) main_touch_calib_button_pane_ParamLimits

0x9043,	// (0x00036d64) main_touch_calib_button_pane

0xa2b2,	// (0x00037fd3) bg_button_pane_cp18_ParamLimits

0xa2b2,	// (0x00037fd3) bg_button_pane_cp18

0xeb28,	// (0x0003c849) main_touch_calib_button_pane_t1_ParamLimits

0xeb28,	// (0x0003c849) main_touch_calib_button_pane_t1

0xeb3e,	// (0x0003c85f) main_touch_calib_button_pane_t2_ParamLimits

0xeb3e,	// (0x0003c85f) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003db68) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003db68) main_touch_calib_button_pane_t

0x9b75,	// (0x00037896) cell_ncimui_button_pane

0x9b75,	// (0x00037896) bg_button_pane_cp032

0xeb5c,	// (0x0003c87d) cell_ncimui_button_pane_t1

0x641e,	// (0x0003413f) image3_infobar_pane_ParamLimits

0x641e,	// (0x0003413f) image3_infobar_pane

0x8088,	// (0x00035da9) fs_bigclock_status_pane_ParamLimits

0x8088,	// (0x00035da9) fs_bigclock_status_pane

0x8095,	// (0x00035db6) main_fs_bigclock_clock_pane_ParamLimits

0x8095,	// (0x00035db6) main_fs_bigclock_clock_pane

0x80b5,	// (0x00035dd6) main_fs_bigclock_indi_pane_ParamLimits

0x80b5,	// (0x00035dd6) main_fs_bigclock_indi_pane

0x80df,	// (0x00035e00) main_fs_bigclock_swipe_pane_ParamLimits

0x80df,	// (0x00035e00) main_fs_bigclock_swipe_pane

0x9b75,	// (0x00037896) main_fs_clock_dumped_data

0xe103,	// (0x0003be24) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe103,	// (0x0003be24) list_single_fs_bigclock_indicator_pane_g1

0xe11e,	// (0x0003be3f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe11e,	// (0x0003be3f) list_single_fs_bigclock_indicator_pane_g2

0xe138,	// (0x0003be59) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe138,	// (0x0003be59) list_single_fs_bigclock_indicator_pane_g3

0xe152,	// (0x0003be73) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe152,	// (0x0003be73) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003d995) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003d995) list_single_fs_bigclock_indicator_pane_g

0xe17d,	// (0x0003be9e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe17d,	// (0x0003be9e) list_single_fs_bigclock_indicator_pane_t1

0xe1a5,	// (0x0003bec6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1a5,	// (0x0003bec6) list_single_fs_bigclock_indicator_pane_t2

0xe1cd,	// (0x0003beee) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1cd,	// (0x0003beee) list_single_fs_bigclock_indicator_pane_t3

0xe1f5,	// (0x0003bf16) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1f5,	// (0x0003bf16) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003d9a0) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003d9a0) list_single_fs_bigclock_indicator_pane_t

0xeb6a,	// (0x0003c88b) image3_infobar_fav_pane_ParamLimits

0xeb6a,	// (0x0003c88b) image3_infobar_fav_pane

0xeb7a,	// (0x0003c89b) image3_infobar_loc_pane_ParamLimits

0xeb7a,	// (0x0003c89b) image3_infobar_loc_pane

0xeb8e,	// (0x0003c8af) image3_infobar_time_pane_ParamLimits

0xeb8e,	// (0x0003c8af) image3_infobar_time_pane

0xc800,	// (0x0003a521) image3_infobar_time_pane_g1

0xeb9e,	// (0x0003c8bf) image3_infobar_time_pane_t1

0xc800,	// (0x0003a521) image3_infobar_loc_pane_g1

0xebac,	// (0x0003c8cd) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003db6d) image3_infobar_loc_pane_g

0xebb4,	// (0x0003c8d5) image3_infobar_loc_pane_t1

0xc800,	// (0x0003a521) image3_infobar_fav_pane_g1

0xebc2,	// (0x0003c8e3) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003db72) image3_infobar_fav_pane_g

0xebca,	// (0x0003c8eb) fs_bigclock_status_battery_pane

0xebd3,	// (0x0003c8f4) fs_bigclock_status_signal_pane

0xebdc,	// (0x0003c8fd) fs_bigclock_status_title_pane

0xebe5,	// (0x0003c906) fs_bigclock_status_signal_pane_g1

0xebee,	// (0x0003c90f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003db77) fs_bigclock_status_signal_pane_g

0xebf6,	// (0x0003c917) fs_bigclock_status_battery_pane_g1

0xebff,	// (0x0003c920) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003db7c) fs_bigclock_status_battery_pane_g

0xec07,	// (0x0003c928) fs_bigclock_status_title_pane_t1

0xc800,	// (0x0003a521) main_fs_bigclock_clock_pane_g1

0xec15,	// (0x0003c936) main_fs_bigclock_clock_pane_g2

0xec1e,	// (0x0003c93f) main_fs_bigclock_clock_pane_g3

0xec1e,	// (0x0003c93f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003db81) main_fs_bigclock_clock_pane_g

0xec26,	// (0x0003c947) main_fs_bigclock_clock_pane_t1

0x9058,	// (0x00036d79) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003db8a) main_fs_bigclock_clock_pane_t

0xec34,	// (0x0003c955) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec34,	// (0x0003c955) list_single_fs_bigclock_indicator_pane

0xec45,	// (0x0003c966) list_single_fs_bigclock_pane_ParamLimits

0xec45,	// (0x0003c966) list_single_fs_bigclock_pane

0xec6b,	// (0x0003c98c) main_fs_bigclock_indicator_pane_t1

0xec7a,	// (0x0003c99b) list_single_fs_bigclock_pane_g1

0xec82,	// (0x0003c9a3) list_single_fs_bigclock_pane_t1

0xc800,	// (0x0003a521) main_fs_bigclock_swipe_pane_g1

0xecc5,	// (0x0003c9e6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003db9b) main_fs_bigclock_swipe_pane_g

0xeccd,	// (0x0003c9ee) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeccd,	// (0x0003c9ee) main_fs_bigclock_swipe_pane_t1

0x3927,	// (0x00031648) call_type_pane_ParamLimits

0x9b75,	// (0x00037896) main_btmg_pane

0xe8d9,	// (0x0003c5fa) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8d9,	// (0x0003c5fa) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003db0e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003db0e) list_single_cale_mrui_row_pane_g

0xea5e,	// (0x0003c77f) list_recal_vselct_arw_lo_pane

0xea66,	// (0x0003c787) list_recal_vselct_arw_up_pane

0xea6e,	// (0x0003c78f) list_recal_vselct_pane

0x90ab,	// (0x00036dcc) btmg_button_pane

0x90b5,	// (0x00036dd6) main_btmg_pane_g1

0x9b75,	// (0x00037896) bg_button_pane_cp044

0xecea,	// (0x0003ca0b) btmg_button_pane_t1

0xc3e4,	// (0x0003a105) aid_listscroll_gen

0xa708,	// (0x00038429) main_cntbar_detail_pane

0xe5d8,	// (0x0003c2f9) list_cmail_folder_pane

0xcc8b,	// (0x0003a9ac) sp_fs_scroll_pane_cp03_ParamLimits

0x8b91,	// (0x000368b2) list_single_fs_dyc_pane_cp01_ParamLimits

0x8b91,	// (0x000368b2) list_single_fs_dyc_pane_cp01

0xecf8,	// (0x0003ca19) aid_size_cmail_indent

0xed01,	// (0x0003ca22) list_single_dyc_row_pane_cp01

0x90f1,	// (0x00036e12) cntbar_detail_list_pane_ParamLimits

0x90f1,	// (0x00036e12) cntbar_detail_list_pane

0x913d,	// (0x00036e5e) main_cntbar_detail_cont_pane_ParamLimits

0x913d,	// (0x00036e5e) main_cntbar_detail_cont_pane

0xcc8b,	// (0x0003a9ac) scroll_pane_cp032_ParamLimits

0xcc8b,	// (0x0003a9ac) scroll_pane_cp032

0x9151,	// (0x00036e72) cntbar_detail_list_event_pane_ParamLimits

0x9151,	// (0x00036e72) cntbar_detail_list_event_pane

0x9101,	// (0x00036e22) cntbar_detail_list_shct_pane

0xa7ba,	// (0x000384db) aid_list_gen

0xed0a,	// (0x0003ca2b) aid_scroll

0xed13,	// (0x0003ca34) aid_size_touch_scroll_bar

0x7441,	// (0x00035162) aid_list_double

0x742f,	// (0x00035150) aid_list_single

0x742f,	// (0x00035150) aid_list_single_lg

0x9161,	// (0x00036e82) aid_list_z_g_a_sm

0x9169,	// (0x00036e8a) aid_list_z_g_d

0x9171,	// (0x00036e92) aid_txt_z_prm

0x917f,	// (0x00036ea0) aid_txt_z_prm_cp01

0x918d,	// (0x00036eae) aid_txt_z_sec

0x919b,	// (0x00036ebc) main_cntbar_detail_cont_pane_g1_ParamLimits

0x919b,	// (0x00036ebc) main_cntbar_detail_cont_pane_g1

0x91af,	// (0x00036ed0) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91af,	// (0x00036ed0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003dba0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003dba0) main_cntbar_detail_cont_pane_g

0xed1c,	// (0x0003ca3d) main_cntbar_detail_cont_pane_t1

0xed2a,	// (0x0003ca4b) main_cntbar_detail_cont_pane_t2

0xed38,	// (0x0003ca59) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003dba5) main_cntbar_detail_cont_pane_t

0x91bf,	// (0x00036ee0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91bf,	// (0x00036ee0) cell_cntbar_detail_list_shct_pane

0xed46,	// (0x0003ca67) cntbar_detail_list_shct_pane_g1

0xed4f,	// (0x0003ca70) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003dbac) cntbar_detail_list_shct_pane_g

0x91d3,	// (0x00036ef4) cntbar_detail_list_event_pane_g1_ParamLimits

0x91d3,	// (0x00036ef4) cntbar_detail_list_event_pane_g1

0x91df,	// (0x00036f00) cntbar_detail_list_event_pane_g2_ParamLimits

0x91df,	// (0x00036f00) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003dbb1) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003dbb1) cntbar_detail_list_event_pane_g

0x924b,	// (0x00036f6c) cntbar_detail_list_event_pane_t1_ParamLimits

0x924b,	// (0x00036f6c) cntbar_detail_list_event_pane_t1

0x9260,	// (0x00036f81) cntbar_detail_list_event_pane_t2_ParamLimits

0x9260,	// (0x00036f81) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003dbbe) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003dbbe) cntbar_detail_list_event_pane_t

0xc800,	// (0x0003a521) cell_cntbar_detail_list_shct_pane_g1

0xaf31,	// (0x00038c52) navi_pane_mv_g3

0xa708,	// (0x00038429) main_cntbar_detail_pane_ParamLimits

0x9b75,	// (0x00037896) main_notif_wgt_pane

0x6191,	// (0x00033eb2) aid_tch_main_mp4_pane_g4

0x6373,	// (0x00034094) popup_slider_window_cp02

0xea54,	// (0x0003c775) list_recal_day_event_pane

0x90bf,	// (0x00036de0) cntbar_detail_btn_pane_ParamLimits

0x90bf,	// (0x00036de0) cntbar_detail_btn_pane

0x90d8,	// (0x00036df9) cntbar_detail_btn_pane_cp01_ParamLimits

0x90d8,	// (0x00036df9) cntbar_detail_btn_pane_cp01

0x9101,	// (0x00036e22) cntbar_detail_list_shct_pane_ParamLimits

0x9111,	// (0x00036e32) cntbar_detail_pane_g1_ParamLimits

0x9111,	// (0x00036e32) cntbar_detail_pane_g1

0x9121,	// (0x00036e42) cntbar_detail_pane_t1_ParamLimits

0x9121,	// (0x00036e42) cntbar_detail_pane_t1

0x91eb,	// (0x00036f0c) cntbar_detail_list_event_pane_g3_ParamLimits

0x91eb,	// (0x00036f0c) cntbar_detail_list_event_pane_g3

0x9203,	// (0x00036f24) cntbar_detail_list_event_pane_g4_ParamLimits

0x9203,	// (0x00036f24) cntbar_detail_list_event_pane_g4

0x921b,	// (0x00036f3c) cntbar_detail_list_event_pane_g5_ParamLimits

0x921b,	// (0x00036f3c) cntbar_detail_list_event_pane_g5

0x9233,	// (0x00036f54) cntbar_detail_list_event_pane_g6_ParamLimits

0x9233,	// (0x00036f54) cntbar_detail_list_event_pane_g6

0x9275,	// (0x00036f96) cntbar_detail_list_event_pane_t3_ParamLimits

0x9275,	// (0x00036f96) cntbar_detail_list_event_pane_t3

0x9287,	// (0x00036fa8) popup_notif_wgt_window_ParamLimits

0x9287,	// (0x00036fa8) popup_notif_wgt_window

0x92a0,	// (0x00036fc1) popup_submenu_window_cp01_ParamLimits

0x92a0,	// (0x00036fc1) popup_submenu_window_cp01

0xa477,	// (0x00038198) bg_popup_window_pane_cp10

0xed58,	// (0x0003ca79) listscroll_notif_wgt_pane

0xed6a,	// (0x0003ca8b) list_notif_wgt_window

0xed73,	// (0x0003ca94) scroll_pane_cp033

0x92b6,	// (0x00036fd7) list_notif_wgt_row_pane_ParamLimits

0x92b6,	// (0x00036fd7) list_notif_wgt_row_pane

0xed7c,	// (0x0003ca9d) aid_size_list_notif_wgt_del

0xed89,	// (0x0003caaa) list_notif_wgt_row_pane_g1

0xed95,	// (0x0003cab6) list_notif_wgt_row_pane_g2

0xeda9,	// (0x0003caca) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003dbc5) list_notif_wgt_row_pane_g

0xedb6,	// (0x0003cad7) list_notif_wgt_row_pane_t1

0xedcc,	// (0x0003caed) list_notif_wgt_row_pane_t2

0xedde,	// (0x0003caff) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003dbcc) list_notif_wgt_row_pane_t

0xd52d,	// (0x0003b24e) list_recal_day_event_pane_g1

0xedf0,	// (0x0003cb11) list_recal_day_event_pane_t1

0x9b75,	// (0x00037896) bg_button_pane_cp045

0x92c6,	// (0x00036fe7) cntbar_detail_btn_pane_t1

0xc3f8,	// (0x0003a119) main_callh_pane_ParamLimits

0xc3f8,	// (0x0003a119) main_callh_pane

0x9b75,	// (0x00037896) main_coverflow0_pane

0x9b75,	// (0x00037896) main_wgtman_pane

0x80f7,	// (0x00035e18) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x80f7,	// (0x00035e18) main_fs_bigclock_unlock_btn_pane

0x8b22,	// (0x00036843) bg_button_pane_cp16

0x8b32,	// (0x00036853) cell_tport_appsw_pane_g3

0x92d4,	// (0x00036ff5) cf0_flow_pane_ParamLimits

0x92d4,	// (0x00036ff5) cf0_flow_pane

0xedff,	// (0x0003cb20) listscroll_cf0_pane

0xee0a,	// (0x0003cb2b) main_cf0_pane_g1

0x92e9,	// (0x0003700a) main_cf0_pane_t1_ParamLimits

0x92e9,	// (0x0003700a) main_cf0_pane_t1

0x9300,	// (0x00037021) main_cf0_pane_t2_ParamLimits

0x9300,	// (0x00037021) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003dbd8) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003dbd8) main_cf0_pane_t

0xee1c,	// (0x0003cb3d) scroll_pane_cp11

0x9317,	// (0x00037038) cf0_flow_pane_g1

0x931f,	// (0x00037040) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003dbdd) cf0_flow_pane_g

0x9327,	// (0x00037048) cf0_flow_pane_t1

0x9b75,	// (0x00037896) main_call6_pane

0x9b75,	// (0x00037896) main_calllock_pane

0x9335,	// (0x00037056) call6_btn_grp_pane_ParamLimits

0x9335,	// (0x00037056) call6_btn_grp_pane

0x934f,	// (0x00037070) call6_pane_g1_ParamLimits

0x934f,	// (0x00037070) call6_pane_g1

0x9364,	// (0x00037085) popup_call6_1st_window_ParamLimits

0x9364,	// (0x00037085) popup_call6_1st_window

0x9375,	// (0x00037096) popup_call6_2nd_window_ParamLimits

0x9375,	// (0x00037096) popup_call6_2nd_window

0x9386,	// (0x000370a7) cell_call6_btn_pane_ParamLimits

0x9386,	// (0x000370a7) cell_call6_btn_pane

0xa477,	// (0x00038198) bg_popup_call2_in_pane_cp03

0xee27,	// (0x0003cb48) popup_call6_1st_window_g1

0xee2f,	// (0x0003cb50) popup_call6_1st_window_g2

0xee37,	// (0x0003cb58) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003dbe2) popup_call6_1st_window_g

0xee3f,	// (0x0003cb60) popup_call6_1st_window_t1

0xee4e,	// (0x0003cb6f) popup_call6_1st_window_t2

0xee5e,	// (0x0003cb7f) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003dbe9) popup_call6_1st_window_t

0xa477,	// (0x00038198) bg_popup_call2_in_pane_cp04

0xee27,	// (0x0003cb48) popup_call6_2nd_window_g1

0xee2f,	// (0x0003cb50) popup_call6_2nd_window_g2

0xee37,	// (0x0003cb58) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003dbe2) popup_call6_2nd_window_g

0xee3f,	// (0x0003cb60) popup_call6_2nd_window_t1

0x9b75,	// (0x00037896) bg_button_pane_cp15

0xee6e,	// (0x0003cb8f) cell_call6_btn_pane_g1

0xee77,	// (0x0003cb98) cell_call6_btn_pane_t1

0x939a,	// (0x000370bb) listscroll_wgtman_pane_ParamLimits

0x939a,	// (0x000370bb) listscroll_wgtman_pane

0x93bb,	// (0x000370dc) wgtman_btn_pane_ParamLimits

0x93bb,	// (0x000370dc) wgtman_btn_pane

0xad38,	// (0x00038a59) aid_scroll_copy1

0xee86,	// (0x0003cba7) list_wgtman_pane

0x93fe,	// (0x0003711f) wgtman_btn_pane_g1_ParamLimits

0x93fe,	// (0x0003711f) wgtman_btn_pane_g1

0x942a,	// (0x0003714b) wgtman_btn_pane_t1_ParamLimits

0x942a,	// (0x0003714b) wgtman_btn_pane_t1

0xee90,	// (0x0003cbb1) wgtman_btn_pane_t2_ParamLimits

0xee90,	// (0x0003cbb1) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003dbf0) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003dbf0) wgtman_btn_pane_t

0x9467,	// (0x00037188) listrow_wgtman_pane_ParamLimits

0x9467,	// (0x00037188) listrow_wgtman_pane

0x9479,	// (0x0003719a) listrow_wgtman_pane_g1

0x9486,	// (0x000371a7) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003dbf5) listrow_wgtman_pane_g

0x94a4,	// (0x000371c5) listrow_wgtman_pane_t1

0x94bc,	// (0x000371dd) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003dbfa) listrow_wgtman_pane_t

0x94e2,	// (0x00037203) wait_bar_pane_cp09

0xeea7,	// (0x0003cbc8) main_calllock_btn_pane

0xeeb1,	// (0x0003cbd2) main_calllock_pane_g1

0x9b75,	// (0x00037896) bg_button_pane_cp17

0xeebd,	// (0x0003cbde) main_calllock_btn_pane_g1

0xeec6,	// (0x0003cbe7) main_calllock_btn_pane_t1

0x9b75,	// (0x00037896) main_dialer3_pane

0x9b75,	// (0x00037896) main_fmrd2_pane

0xc800,	// (0x0003a521) main_fs_bigclock_unlock_btn_pane_g1

0xeedd,	// (0x0003cbfe) main_fs_bigclock_unlock_btn_pane_t1

0x94f4,	// (0x00037215) area_fmrd2_info_pane_ParamLimits

0x94f4,	// (0x00037215) area_fmrd2_info_pane

0x9505,	// (0x00037226) area_fmrd2_visual_pane_ParamLimits

0x9505,	// (0x00037226) area_fmrd2_visual_pane

0x9513,	// (0x00037234) fmrd2_indi_pane_ParamLimits

0x9513,	// (0x00037234) fmrd2_indi_pane

0x9520,	// (0x00037241) area_fmrd2_visual_pane_g1

0x9528,	// (0x00037249) area_fmrd2_visual_pane_t1

0x9538,	// (0x00037259) area_fmrd2_visual_pane_t2

0x9548,	// (0x00037269) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003dc04) area_fmrd2_visual_pane_t

0x9558,	// (0x00037279) area_fmrd2_info_pane_g1

0x9560,	// (0x00037281) area_fmrd2_info_pane_t1

0x9570,	// (0x00037291) area_fmrd2_info_pane_t2

0x9580,	// (0x000372a1) area_fmrd2_info_pane_t3

0x9590,	// (0x000372b1) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003dc0b) area_fmrd2_info_pane_t

0x959e,	// (0x000372bf) fmrd2_indi_pane_t1

0x95ae,	// (0x000372cf) fmrd2_indi_pane_t2

0x95be,	// (0x000372df) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003dc14) fmrd2_indi_pane_t

0xe161,	// (0x0003be82) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe161,	// (0x0003be82) list_single_fs_bigclock_indicator_pane_g5

0xe211,	// (0x0003bf32) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe211,	// (0x0003bf32) list_single_fs_bigclock_indicator_pane_t5

0x8caa,	// (0x000369cb) aid_cell_bcale_month_pane_ParamLimits

0x8caa,	// (0x000369cb) aid_cell_bcale_month_pane

0x8cc8,	// (0x000369e9) bcale_month_pane_ParamLimits

0x8cc8,	// (0x000369e9) bcale_month_pane

0x8cec,	// (0x00036a0d) bcale_preview_pane_ParamLimits

0x8cec,	// (0x00036a0d) bcale_preview_pane

0xec82,	// (0x0003c9a3) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca1,	// (0x0003c9c2) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca1,	// (0x0003c9c2) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003db96) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003db96) list_single_fs_bigclock_pane_t

0xeed5,	// (0x0003cbf6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003dbff) main_fs_bigclock_unlock_btn_pane_g

0x95ce,	// (0x000372ef) aid_dia3_key_size_ParamLimits

0x95ce,	// (0x000372ef) aid_dia3_key_size

0x95dd,	// (0x000372fe) aid_dia3_listrow_size_ParamLimits

0x95dd,	// (0x000372fe) aid_dia3_listrow_size

0x95f2,	// (0x00037313) dia3_keypad_fun_pane_ParamLimits

0x95f2,	// (0x00037313) dia3_keypad_fun_pane

0x960e,	// (0x0003732f) dia3_keypad_num_pane_ParamLimits

0x960e,	// (0x0003732f) dia3_keypad_num_pane

0x9629,	// (0x0003734a) dia3_listscroll_pane_ParamLimits

0x9629,	// (0x0003734a) dia3_listscroll_pane

0x963c,	// (0x0003735d) dia3_numentry_pane_ParamLimits

0x963c,	// (0x0003735d) dia3_numentry_pane

0xeeeb,	// (0x0003cc0c) dia3_list_pane

0xeef6,	// (0x0003cc17) scroll_pane_cp12

0x9b75,	// (0x00037896) bg_dia3_numentry_pane

0x9650,	// (0x00037371) dia3_numentry_pane_t1

0x965f,	// (0x00037380) cell_dia3_key_num_pane

0x9667,	// (0x00037388) cell_dia3_key0_fun_pane_ParamLimits

0x9667,	// (0x00037388) cell_dia3_key0_fun_pane

0x967b,	// (0x0003739c) cell_dia3_key1_fun_pane_ParamLimits

0x967b,	// (0x0003739c) cell_dia3_key1_fun_pane

0x9693,	// (0x000373b4) dia3_listrow_pane

0xde70,	// (0x0003bb91) bg_dia3_numentry_pane_g1

0x9b75,	// (0x00037896) bg_button_pane_cp21

0xef01,	// (0x0003cc22) cell_dia3_key_num_pane_t1

0xef0f,	// (0x0003cc30) cell_dia3_key_num_pane_t2

0xef1e,	// (0x0003cc3f) cell_dia3_key_num_pane_t3

0xef2d,	// (0x0003cc4e) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003dc1b) cell_dia3_key_num_pane_t

0x9b75,	// (0x00037896) bg_button_pane_cp19

0x96a5,	// (0x000373c6) cell_dia3_key0_fun_pane_g1

0x9b75,	// (0x00037896) bg_button_pane_cp20

0x96ad,	// (0x000373ce) cell_dia3_key1_fun_pane_g1

0x96b5,	// (0x000373d6) area_left_week_number_pane

0x96c1,	// (0x000373e2) area_top_day_name_pane

0x96d4,	// (0x000373f5) frame_month_view_pane

0xef3c,	// (0x0003cc5d) grid_month_view_pane

0x96e7,	// (0x00037408) cell_top_day_name_pane_ParamLimits

0x96e7,	// (0x00037408) cell_top_day_name_pane

0x9714,	// (0x00037435) cell_area_left_week_number_pane_ParamLimits

0x9714,	// (0x00037435) cell_area_left_week_number_pane

0x9728,	// (0x00037449) cell_month_view_pane_ParamLimits

0x9728,	// (0x00037449) cell_month_view_pane

0xef4a,	// (0x0003cc6b) frm_month_g1

0x9755,	// (0x00037476) frm_month_g2

0x9768,	// (0x00037489) frm_month_g3

0x977b,	// (0x0003749c) frm_month_g4

0x978e,	// (0x000374af) frm_month_g5

0x97a1,	// (0x000374c2) frm_month_g6

0x97b4,	// (0x000374d5) frm_month_g7

0xef57,	// (0x0003cc78) frm_month_g8

0x97c7,	// (0x000374e8) frm_month_g9

0x97d7,	// (0x000374f8) frm_month_g10

0x97e7,	// (0x00037508) frm_month_g11

0x97f7,	// (0x00037518) frm_month_g12

0x9809,	// (0x0003752a) frm_month_g13

0x981b,	// (0x0003753c) frm_month_g14

0x982f,	// (0x00037550) frm_month_g15

0x9843,	// (0x00037564) frm_month_g16

0x000f,

0xff03,	// (0x0003dc24) frm_month_g

0xef64,	// (0x0003cc85) cell_top_day_name_pane_t1

0x9857,	// (0x00037578) cell_area_left_week_number_pane_g1

0x9863,	// (0x00037584) cell_area_left_week_number_pane_t1

0xca6c,	// (0x0003a78d) cell_month_view_pane_g1

0x9876,	// (0x00037597) cell_month_view_pane_t1

0x9b75,	// (0x00037896) main_fps_pane

0xe3ef,	// (0x0003c110) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3ef,	// (0x0003c110) cmail_ddmenu_btn02_pane_cp1

0xe40b,	// (0x0003c12c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe40b,	// (0x0003c12c) cmail_ddmenu_btn02_pane_cp2

0x8fac,	// (0x00036ccd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fac,	// (0x00036ccd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003db49) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003db49) cmail_ddmenu_btn02_pane_g

0x8fca,	// (0x00036ceb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fca,	// (0x00036ceb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003db4e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003db4e) cmail_ddmenu_btn02_pane_t

0x9889,	// (0x000375aa) fps_text_pane_ParamLimits

0x9889,	// (0x000375aa) fps_text_pane

0x98a0,	// (0x000375c1) main_fps_pane_g1_ParamLimits

0x98a0,	// (0x000375c1) main_fps_pane_g1

0x98ba,	// (0x000375db) wait_bar_pane_cp010_ParamLimits

0x98ba,	// (0x000375db) wait_bar_pane_cp010

0x98cb,	// (0x000375ec) fps_text_pane_t1_ParamLimits

0x98cb,	// (0x000375ec) fps_text_pane_t1

0xe4f0,	// (0x0003c211) cam4_image_uncrop_pane_g1

0xe4f9,	// (0x0003c21a) cam4_image_uncrop_pane_g2

0x65b6,	// (0x000342d7) cam4_image_uncrop_pane_g3

0x65bf,	// (0x000342e0) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003d60f) cam4_image_uncrop_pane_g

0x9693,	// (0x000373b4) dia3_listrow_pane_ParamLimits

0x9b75,	// (0x00037896) main_phob2_pane

0x8af3,	// (0x00036814) cell_tport_appsw_pane_cp02_ParamLimits

0x8af3,	// (0x00036814) cell_tport_appsw_pane_cp02

0x8b07,	// (0x00036828) cell_tport_appsw_pane_cp03_ParamLimits

0x8b07,	// (0x00036828) cell_tport_appsw_pane_cp03

0x9b75,	// (0x00037896) phob2_contact_card_pane

0x9b75,	// (0x00037896) phob2_listscroll_pane

0xef77,	// (0x0003cc98) phob2_list_pane

0xef7f,	// (0x0003cca0) scroll_pane_cp034

0x98e3,	// (0x00037604) phob2_cc_data_pane_ParamLimits

0x98e3,	// (0x00037604) phob2_cc_data_pane

0x9902,	// (0x00037623) phob2_cc_listscroll_pane_ParamLimits

0x9902,	// (0x00037623) phob2_cc_listscroll_pane

0x9920,	// (0x00037641) list_double_large_graphic_phob2_pane_ParamLimits

0x9920,	// (0x00037641) list_double_large_graphic_phob2_pane

0x9932,	// (0x00037653) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9932,	// (0x00037653) list_double_large_graphic_phob2_pane_g1

0xef87,	// (0x0003cca8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef87,	// (0x0003cca8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003dc45) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003dc45) list_double_large_graphic_phob2_pane_g

0x9948,	// (0x00037669) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9948,	// (0x00037669) list_double_large_graphic_phob2_pane_t1

0x995d,	// (0x0003767e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x995d,	// (0x0003767e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003dc4a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003dc4a) list_double_large_graphic_phob2_pane_t

0x9b75,	// (0x00037896) list_highlight_pane_cp024

0x996f,	// (0x00037690) phob2_cc_button_pane

0x9977,	// (0x00037698) phob2_cc_data_pane_g1_ParamLimits

0x9977,	// (0x00037698) phob2_cc_data_pane_g1

0x998c,	// (0x000376ad) phob2_cc_data_pane_g2_ParamLimits

0x998c,	// (0x000376ad) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003dc4f) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003dc4f) phob2_cc_data_pane_g

0x999c,	// (0x000376bd) phob2_cc_data_pane_t1_ParamLimits

0x999c,	// (0x000376bd) phob2_cc_data_pane_t1

0x99b4,	// (0x000376d5) phob2_cc_data_pane_t2_ParamLimits

0x99b4,	// (0x000376d5) phob2_cc_data_pane_t2

0x99cc,	// (0x000376ed) phob2_cc_data_pane_t3_ParamLimits

0x99cc,	// (0x000376ed) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003dc54) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003dc54) phob2_cc_data_pane_t

0xef93,	// (0x0003ccb4) phob2_cc_list_pane_ParamLimits

0xef93,	// (0x0003ccb4) phob2_cc_list_pane

0xd5c4,	// (0x0003b2e5) scroll_pane_cp035_ParamLimits

0xd5c4,	// (0x0003b2e5) scroll_pane_cp035

0xa708,	// (0x00038429) bg_button_pane_cp033

0xef9f,	// (0x0003ccc0) phob2_cc_button_pane_g1

0xefab,	// (0x0003cccc) phob2_cc_button_pane_t1

0xefc0,	// (0x0003cce1) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003dc5b) phob2_cc_button_pane_t

0x99e4,	// (0x00037705) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99e4,	// (0x00037705) list_double_large_graphic_phob2_cc_pane

0x99f6,	// (0x00037717) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99f6,	// (0x00037717) list_double_large_graphic_phob2_cc_pane_g1

0x9a02,	// (0x00037723) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a02,	// (0x00037723) list_double_large_graphic_phob2_cc_pane_g2

0x9a0e,	// (0x0003772f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a0e,	// (0x0003772f) list_double_large_graphic_phob2_cc_pane_g3

0x9a1a,	// (0x0003773b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a1a,	// (0x0003773b) list_double_large_graphic_phob2_cc_pane_g4

0x9a26,	// (0x00037747) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a26,	// (0x00037747) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003dc60) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003dc60) list_double_large_graphic_phob2_cc_pane_g

0x9a32,	// (0x00037753) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a32,	// (0x00037753) list_double_large_graphic_phob2_cc_pane_t1

0x9a5b,	// (0x0003777c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a5b,	// (0x0003777c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003dc6b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003dc6b) list_double_large_graphic_phob2_cc_pane_t

0xefd2,	// (0x0003ccf3) list_highlight_pane_cp025_ParamLimits

0xefd2,	// (0x0003ccf3) list_highlight_pane_cp025

0xa708,	// (0x00038429) bg_button_pane_cp033_ParamLimits

0xef9f,	// (0x0003ccc0) phob2_cc_button_pane_g1_ParamLimits

0xefab,	// (0x0003cccc) phob2_cc_button_pane_t1_ParamLimits

0xefc0,	// (0x0003cce1) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003dc5b) phob2_cc_button_pane_t_ParamLimits

0x1952,	// (0x0002f673) popup_wgtman_window

0xd3d9,	// (0x0003b0fa) scroll_pane_cp038

0x93e0,	// (0x00037101) wgtman_btn_pane_cp_01_ParamLimits

0x93e0,	// (0x00037101) wgtman_btn_pane_cp_01

0xefe0,	// (0x0003cd01) wgtman_content_pane

0xefe9,	// (0x0003cd0a) wgtman_heading_pane

0x9b75,	// (0x00037896) bg_heading_pane_cp02

0xeff2,	// (0x0003cd13) wgtman_heading_pane_g1

0xeffa,	// (0x0003cd1b) wgtman_heading_pane_t1

0xf008,	// (0x0003cd29) scroll_pane_cp036

0xf010,	// (0x0003cd31) wgtman_list_pane

0xf018,	// (0x0003cd39) wgtman_list_pane_t1_ParamLimits

0xf018,	// (0x0003cd39) wgtman_list_pane_t1

0x65a2,	// (0x000342c3) cam4_grid_pane

0x6f65,	// (0x00034c86) bg_button_pane_cp015_ParamLimits

0x6f77,	// (0x00034c98) bg_button_pane_cp016_ParamLimits

0x6f8a,	// (0x00034cab) bg_button_pane_cp017_ParamLimits

0x6fe2,	// (0x00034d03) popup_vitu2_query_window_g3_ParamLimits

0x6fe2,	// (0x00034d03) popup_vitu2_query_window_g3

0x709f,	// (0x00034dc0) popup_vitu2_query_window_t6_ParamLimits

0x709f,	// (0x00034dc0) popup_vitu2_query_window_t6

0x70ca,	// (0x00034deb) popup_vitu2_query_window_t7_ParamLimits

0x70ca,	// (0x00034deb) popup_vitu2_query_window_t7

0xe4f0,	// (0x0003c211) cam4_grid_pane_g1

0xe4f9,	// (0x0003c21a) cam4_grid_pane_g2

0xf032,	// (0x0003cd53) cam4_grid_pane_g3

0xf03b,	// (0x0003cd5c) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003dc70) cam4_grid_pane_g

0x27ab,	// (0x000304cc) aid_placing_vt_slider_lsc_ParamLimits

0x2ab6,	// (0x000307d7) vidtel_button_pane_ParamLimits

0x2ab6,	// (0x000307d7) vidtel_button_pane

0xf046,	// (0x0003cd67) bg_button_pane_cp034

0x9a84,	// (0x000377a5) vidtel_button_pane_g1

0xf050,	// (0x0003cd71) vidtel_button_pane_t1

0xd50b,	// (0x0003b22c) aid_size_vtel_slider_touch

0xd5c4,	// (0x0003b2e5) scroll_pane_cp039

0xdeae,	// (0x0003bbcf) ncim_query_button_pane_cp01_ParamLimits

0xdecd,	// (0x0003bbee) ncimui_query_pane_g1_ParamLimits

0xa708,	// (0x00038429) input_focus_pane_cp012_ParamLimits

0xdef2,	// (0x0003bc13) ncim_query_entry_pane_t1_ParamLimits

0xd5c4,	// (0x0003b2e5) scroll_pane_cp039_ParamLimits

0xae1c,	// (0x00038b3d) navi_pane_bcale_mc_g1

0xae24,	// (0x00038b45) navi_pane_bcale_mc_t1

0xe454,	// (0x0003c175) main_sp_fs_email_pane_g1

0xe460,	// (0x0003c181) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003da06) main_sp_fs_email_pane_g

0xe8e5,	// (0x0003c606) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8e5,	// (0x0003c606) list_single_cale_mrui_row_pane_g3

0x8ff2,	// (0x00036d13) list_single_recal_day_pane_g5_event_pane

0xeacd,	// (0x0003c7ee) list_single_recal_day_pane_g7

0xf05e,	// (0x0003cd7f) list_recal_day_event_pane_cp01

0xf067,	// (0x0003cd88) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0003cd90) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0003cd98) list_recal_vselct_pane_cp01

0xd52d,	// (0x0003b24e) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0003cda2) list_recal_day_event_pane_cp01_t1

0xead5,	// (0x0003c7f6) list_single_recal_day_pane_t1_ParamLimits

0xeae7,	// (0x0003c808) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003db5e) list_single_recal_day_pane_t_ParamLimits

0xa1ed,	// (0x00037f0e) bg_notes_pane_ParamLimits

0xa290,	// (0x00037fb1) list_notes_pane_ParamLimits

0x1bc4,	// (0x0002f8e5) scroll_pane_cp06_ParamLimits

0xa2b2,	// (0x00037fd3) main_notes_pane_ParamLimits

0x9b75,	// (0x00037896) main_welc_pane

0x9a8c,	// (0x000377ad) main_welc_body_pane_ParamLimits

0x9a8c,	// (0x000377ad) main_welc_body_pane

0x9aaa,	// (0x000377cb) main_welc_opti_pane_ParamLimits

0x9aaa,	// (0x000377cb) main_welc_opti_pane

0x9aef,	// (0x00037810) main_welc_pane_t1_ParamLimits

0x9aef,	// (0x00037810) main_welc_pane_t1

0x9b0d,	// (0x0003782e) main_welc_body_row_pane_ParamLimits

0x9b0d,	// (0x0003782e) main_welc_body_row_pane

0xd8b0,	// (0x0003b5d1) main_welc_opti_row_pane_ParamLimits

0xd8b0,	// (0x0003b5d1) main_welc_opti_row_pane

0xf08f,	// (0x0003cdb0) main_welc_opti_row_pane_g1

0x9b21,	// (0x00037842) main_welc_opti_row_pane_t1

0xf097,	// (0x0003cdb8) main_welc_body_row_pane_t1

0xed62,	// (0x0003ca83) popup_notif_wgt_heading_pane

0xed7c,	// (0x0003ca9d) aid_size_list_notif_wgt_del_ParamLimits

0xed89,	// (0x0003caaa) list_notif_wgt_row_pane_g1_ParamLimits

0xed95,	// (0x0003cab6) list_notif_wgt_row_pane_g2_ParamLimits

0xeda9,	// (0x0003caca) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003dbc5) list_notif_wgt_row_pane_g_ParamLimits

0xedb6,	// (0x0003cad7) list_notif_wgt_row_pane_t1_ParamLimits

0xedcc,	// (0x0003caed) list_notif_wgt_row_pane_t2_ParamLimits

0xedde,	// (0x0003caff) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003dbcc) list_notif_wgt_row_pane_t_ParamLimits

0x9479,	// (0x0003719a) listrow_wgtman_pane_g1_ParamLimits

0x9486,	// (0x000371a7) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003dbf5) listrow_wgtman_pane_g_ParamLimits

0x94a4,	// (0x000371c5) listrow_wgtman_pane_t1_ParamLimits

0x94bc,	// (0x000371dd) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003dbfa) listrow_wgtman_pane_t_ParamLimits

0x94e2,	// (0x00037203) wait_bar_pane_cp09_ParamLimits

0x9b75,	// (0x00037896) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0003cdc7) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0003cdcf) popup_notif_wgt_heading_pane_t1

0x9b75,	// (0x00037896) main_vids_pane

0x9b75,	// (0x00037896) vids_listscroll_pane

0x9b30,	// (0x00037851) scroll_pane_cp040

0x9b75,	// (0x00037896) vids_list_pane

0x9b3b,	// (0x0003785c) vids_list_double_pane_ParamLimits

0x9b3b,	// (0x0003785c) vids_list_double_pane

0x9b4c,	// (0x0003786d) vids_list_double_pane_g1

0x9b55,	// (0x00037876) vids_list_double_pane_t1

0x9b65,	// (0x00037886) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003dc7e) vids_list_double_pane_t

0x1944,	// (0x0002f665) main_ncimui_pane_ParamLimits

0x7c60,	// (0x00035981) main_ncimui_pane_g1_ParamLimits

0x7c6c,	// (0x0003598d) main_ncimui_pane_g2_ParamLimits

0x7c6c,	// (0x0003598d) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003d90b) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003d90b) main_ncimui_pane_g

0x9ac5,	// (0x000377e6) main_welc_pane_g1_ParamLimits

0x9ac5,	// (0x000377e6) main_welc_pane_g1

0x9ada,	// (0x000377fb) main_welc_pane_g2_ParamLimits

0x9ada,	// (0x000377fb) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003dc79) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003dc79) main_welc_pane_g

0xa1ed,	// (0x00037f0e) listscroll_mce_pane_ParamLimits

0xaf71,	// (0x00038c92) wait_bar_pane_cp10

0xc3ec,	// (0x0003a10d) main_cale_day_pane_ParamLimits

0xc3ec,	// (0x0003a10d) main_cale_week_pane_ParamLimits

0xa1ed,	// (0x00037f0e) main_messa_pane_ParamLimits

0x5b5d,	// (0x0003387e) main_clock2_btn_pane_ParamLimits

0x5b5d,	// (0x0003387e) main_clock2_btn_pane

0xcc20,	// (0x0003a941) main_clock2_btn_pane_cp01_ParamLimits

0xcc20,	// (0x0003a941) main_clock2_btn_pane_cp01

0xe871,	// (0x0003c592) list_cale_mrui_pane_ParamLimits

0xee14,	// (0x0003cb35) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003dbd3) main_cf0_pane_g

0x96b5,	// (0x000373d6) area_left_week_number_pane_ParamLimits

0x96c1,	// (0x000373e2) area_top_day_name_pane_ParamLimits

0x96d4,	// (0x000373f5) frame_month_view_pane_ParamLimits

0xef3c,	// (0x0003cc5d) grid_month_view_pane_ParamLimits

0xef4a,	// (0x0003cc6b) frm_month_g1_ParamLimits

0x9755,	// (0x00037476) frm_month_g2_ParamLimits

0x9768,	// (0x00037489) frm_month_g3_ParamLimits

0x977b,	// (0x0003749c) frm_month_g4_ParamLimits

0x978e,	// (0x000374af) frm_month_g5_ParamLimits

0x97a1,	// (0x000374c2) frm_month_g6_ParamLimits

0x97b4,	// (0x000374d5) frm_month_g7_ParamLimits

0xef57,	// (0x0003cc78) frm_month_g8_ParamLimits

0x97c7,	// (0x000374e8) frm_month_g9_ParamLimits

0x97d7,	// (0x000374f8) frm_month_g10_ParamLimits

0x97e7,	// (0x00037508) frm_month_g11_ParamLimits

0x97f7,	// (0x00037518) frm_month_g12_ParamLimits

0x9809,	// (0x0003752a) frm_month_g13_ParamLimits

0x981b,	// (0x0003753c) frm_month_g14_ParamLimits

0x982f,	// (0x00037550) frm_month_g15_ParamLimits

0x9843,	// (0x00037564) frm_month_g16_ParamLimits

0xff03,	// (0x0003dc24) frm_month_g_ParamLimits

0xef64,	// (0x0003cc85) cell_top_day_name_pane_t1_ParamLimits

0x9857,	// (0x00037578) cell_area_left_week_number_pane_g1_ParamLimits

0x9863,	// (0x00037584) cell_area_left_week_number_pane_t1_ParamLimits

0xca6c,	// (0x0003a78d) cell_month_view_pane_g1_ParamLimits

0x9876,	// (0x00037597) cell_month_view_pane_t1_ParamLimits

0xa1e5,	// (0x00037f06) main_clock2_btn_pane_g1

0xf0bc,	// (0x0003cddd) main_clock2_btn_pane_t1

0xa708,	// (0x00038429) listscroll_cmail_pane_ParamLimits

0xe454,	// (0x0003c175) main_sp_fs_email_pane_g1_ParamLimits

0xe460,	// (0x0003c181) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003da06) main_sp_fs_email_pane_g_ParamLimits

0xea35,	// (0x0003c756) list_recal_day_pane_ParamLimits

0xea46,	// (0x0003c767) mian_recal_day_pane_t1

0x8775,	// (0x00036496) list_single_dyc_row_text_pane_t4_ParamLimits

0x8775,	// (0x00036496) list_single_dyc_row_text_pane_t4

0x87be,	// (0x000364df) list_single_dyc_row_text_pane_t5_ParamLimits

0x87be,	// (0x000364df) list_single_dyc_row_text_pane_t5

0xe514,	// (0x0003c235) list_single_dyc_row_text_pane_t6_ParamLimits

0xe514,	// (0x0003c235) list_single_dyc_row_text_pane_t6

0x3790,	// (0x000314b1) aid_mgn_list_cale_time_pane

0x1944,	// (0x0002f665) main_gallery2_pane_ParamLimits

0xcc36,	// (0x0003a957) main_clock2_pane_cp01_t1

0xcc46,	// (0x0003a967) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0003d4e5) main_clock2_pane_cp01_t

0x1f5b,	// (0x0002fc7c) cale_week_scroll_pane_g16_ParamLimits

0x1f5b,	// (0x0002fc7c) cale_week_scroll_pane_g16

0xa477,	// (0x00038198) vorec_slider_pane
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal

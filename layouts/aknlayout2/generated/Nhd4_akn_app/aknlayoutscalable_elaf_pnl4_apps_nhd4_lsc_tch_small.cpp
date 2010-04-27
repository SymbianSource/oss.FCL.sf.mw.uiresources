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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004d4d7 };

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
0x0c35,	// (0x0004e10c) Screen

0x0c41,	// (0x0004e118) application_window

0x0c8d,	// (0x0004e164) area_bottom_pane_ParamLimits

0x0c8d,	// (0x0004e164) area_bottom_pane

0x0cc6,	// (0x0004e19d) area_top_pane_ParamLimits

0x0cc6,	// (0x0004e19d) area_top_pane

0x9614,	// (0x00056aeb) call_video_uplink_pane_ParamLimits

0x9614,	// (0x00056aeb) call_video_uplink_pane

0x0d54,	// (0x0004e22b) main_pane_ParamLimits

0x0d54,	// (0x0004e22b) main_pane

0xc7b3,	// (0x00059c8a) context_pane

0x42d0,	// (0x000517a7) navi_pane

0x4302,	// (0x000517d9) popup_cale_events_window_ParamLimits

0x4302,	// (0x000517d9) popup_cale_events_window

0xc7c6,	// (0x00059c9d) popup_mup_playback_window

0x431a,	// (0x000517f1) signal_pane

0xa727,	// (0x00057bfe) main_browser_pane

0xa8f5,	// (0x00057dcc) main_burst_pane

0x4040,	// (0x00051517) main_calc_pane

0xc799,	// (0x00059c70) main_cale_day_pane

0x1386,	// (0x0004e85d) main_cale_month_pane

0xc799,	// (0x00059c70) main_cale_week_pane

0xa8f5,	// (0x00057dcc) main_call_pane

0x9a45,	// (0x00056f1c) main_call_poc_pane

0xa8f5,	// (0x00057dcc) main_camera_pane

0xa8f5,	// (0x00057dcc) main_chi_dic_pane

0xb0f0,	// (0x000585c7) main_clock_pane

0x9a45,	// (0x00056f1c) main_fmradio_pane

0xa8f5,	// (0x00057dcc) main_graph_messa_pane

0x9a45,	// (0x00056f1c) main_help_pane

0xa727,	// (0x00057bfe) main_im_pane

0xa643,	// (0x00057b1a) main_image_pane_ParamLimits

0xa643,	// (0x00057b1a) main_image_pane

0x9a45,	// (0x00056f1c) main_location2_pane

0xa8f5,	// (0x00057dcc) main_location_pane

0xa643,	// (0x00057b1a) main_messa_pane

0x9a45,	// (0x00056f1c) main_mp2_pane

0xa8f5,	// (0x00057dcc) main_mp_pane

0x9a45,	// (0x00056f1c) main_msg_pane

0x9a45,	// (0x00056f1c) main_mup_eq_pane

0x9a45,	// (0x00056f1c) main_mup_pane

0xa727,	// (0x00057bfe) main_notes_pane

0x9a45,	// (0x00056f1c) main_pec_pane

0x9a45,	// (0x00056f1c) main_phob_pane

0x9a45,	// (0x00056f1c) main_pinb_pane

0x9a45,	// (0x00056f1c) main_postcard_pane

0x9a45,	// (0x00056f1c) main_qdial_pane

0xa8f5,	// (0x00057dcc) main_skin_pane

0x9a45,	// (0x00056f1c) main_smil2_pane

0xa8f5,	// (0x00057dcc) main_smil_pane

0xa8f5,	// (0x00057dcc) main_video_pane

0xa8f5,	// (0x00057dcc) main_video_tele_pane

0xa643,	// (0x00057b1a) main_viewer_pane_ParamLimits

0xa643,	// (0x00057b1a) main_viewer_pane

0xa8f5,	// (0x00057dcc) main_vorec_pane

0x4094,	// (0x0005156b) popup_blid_sat_info_window_ParamLimits

0x4094,	// (0x0005156b) popup_blid_sat_info_window

0x40ec,	// (0x000515c3) popup_dyc_status_message_window_ParamLimits

0x40ec,	// (0x000515c3) popup_dyc_status_message_window

0x4104,	// (0x000515db) popup_grid_large_graphic_window_ParamLimits

0x4104,	// (0x000515db) popup_grid_large_graphic_window

0x41ba,	// (0x00051691) popup_loc_request_window_ParamLimits

0x41ba,	// (0x00051691) popup_loc_request_window

0x42a8,	// (0x0005177f) popup_wml_address_window_ParamLimits

0x42a8,	// (0x0005177f) popup_wml_address_window

0x3e7a,	// (0x00051351) call_muted_g1

0x3b2d,	// (0x00051004) popup_call_audio_conf_window_ParamLimits

0x3b2d,	// (0x00051004) popup_call_audio_conf_window

0x3e8e,	// (0x00051365) popup_call_audio_first_window_ParamLimits

0x3e8e,	// (0x00051365) popup_call_audio_first_window

0x3f04,	// (0x000513db) popup_call_audio_in_window_ParamLimits

0x3f04,	// (0x000513db) popup_call_audio_in_window

0x3f40,	// (0x00051417) popup_call_audio_out_window_ParamLimits

0x3f40,	// (0x00051417) popup_call_audio_out_window

0x3f7a,	// (0x00051451) popup_call_audio_second_window_ParamLimits

0x3f7a,	// (0x00051451) popup_call_audio_second_window

0x3fd0,	// (0x000514a7) popup_call_audio_wait_window_ParamLimits

0x3fd0,	// (0x000514a7) popup_call_audio_wait_window

0x4005,	// (0x000514dc) popup_number_entry_window_ParamLimits

0x4005,	// (0x000514dc) popup_number_entry_window

0x9632,	// (0x00056b09) bg_popup_call_pane_cp05_ParamLimits

0x9632,	// (0x00056b09) bg_popup_call_pane_cp05

0x9652,	// (0x00056b29) popup_number_entry_window_t1

0x9665,	// (0x00056b3c) popup_number_entry_window_t2

0x9677,	// (0x00056b4e) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0005c5a1) popup_number_entry_window_t

0x9689,	// (0x00056b60) text_title_cp2

0x969c,	// (0x00056b73) bg_popup_call_pane_cp_ParamLimits

0x969c,	// (0x00056b73) bg_popup_call_pane_cp

0x96aa,	// (0x00056b81) call_thumbnail_pane

0x96b2,	// (0x00056b89) popup_call_audio_in_window_g1_ParamLimits

0x96b2,	// (0x00056b89) popup_call_audio_in_window_g1

0x96be,	// (0x00056b95) popup_call_audio_in_window_g2_ParamLimits

0x96be,	// (0x00056b95) popup_call_audio_in_window_g2

0x96ca,	// (0x00056ba1) popup_call_audio_in_window_g3_ParamLimits

0x96ca,	// (0x00056ba1) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0005c5aa) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0005c5aa) popup_call_audio_in_window_g

0x96d6,	// (0x00056bad) popup_call_audio_in_window_t1_ParamLimits

0x96d6,	// (0x00056bad) popup_call_audio_in_window_t1

0x96f2,	// (0x00056bc9) popup_call_audio_in_window_t2_ParamLimits

0x96f2,	// (0x00056bc9) popup_call_audio_in_window_t2

0x970e,	// (0x00056be5) popup_call_audio_in_window_t3_ParamLimits

0x970e,	// (0x00056be5) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0005c5b1) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0005c5b1) popup_call_audio_in_window_t

0x969c,	// (0x00056b73) bg_popup_call_pane_cp01_ParamLimits

0x969c,	// (0x00056b73) bg_popup_call_pane_cp01

0x96aa,	// (0x00056b81) call_thumbnail_pane_cp02

0x9721,	// (0x00056bf8) call_type_pane_cp022

0x9729,	// (0x00056c00) popup_call_audio_out_window_g1_ParamLimits

0x9729,	// (0x00056c00) popup_call_audio_out_window_g1

0x973b,	// (0x00056c12) popup_call_audio_out_window_g2_ParamLimits

0x973b,	// (0x00056c12) popup_call_audio_out_window_g2

0x9747,	// (0x00056c1e) popup_call_audio_out_window_g3_ParamLimits

0x9747,	// (0x00056c1e) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0005c5b8) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0005c5b8) popup_call_audio_out_window_g

0x9759,	// (0x00056c30) popup_call_audio_out_window_t1_ParamLimits

0x9759,	// (0x00056c30) popup_call_audio_out_window_t1

0x9771,	// (0x00056c48) popup_call_audio_out_window_t2_ParamLimits

0x9771,	// (0x00056c48) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0005c5bf) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0005c5bf) popup_call_audio_out_window_t

0x9786,	// (0x00056c5d) bg_popup_call_pane_ParamLimits

0x9786,	// (0x00056c5d) bg_popup_call_pane

0x0f11,	// (0x0004e3e8) call_thumbnail_pane_cp_ParamLimits

0x0f11,	// (0x0004e3e8) call_thumbnail_pane_cp

0x980a,	// (0x00056ce1) call_type_pane_cp01_ParamLimits

0x980a,	// (0x00056ce1) call_type_pane_cp01

0x984e,	// (0x00056d25) popup_call_audio_first_window_g1_ParamLimits

0x984e,	// (0x00056d25) popup_call_audio_first_window_g1

0x989a,	// (0x00056d71) popup_call_audio_first_window_g2_ParamLimits

0x989a,	// (0x00056d71) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0005c5c4) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0005c5c4) popup_call_audio_first_window_g

0x98de,	// (0x00056db5) popup_call_audio_first_window_t1_ParamLimits

0x98de,	// (0x00056db5) popup_call_audio_first_window_t1

0x998a,	// (0x00056e61) popup_call_audio_first_window_t4_ParamLimits

0x998a,	// (0x00056e61) popup_call_audio_first_window_t4

0x9a16,	// (0x00056eed) popup_call_audio_first_window_t5_ParamLimits

0x9a16,	// (0x00056eed) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0005c5c9) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0005c5c9) popup_call_audio_first_window_t

0x9a45,	// (0x00056f1c) bg_popup_call_pane_cp02

0x9a4f,	// (0x00056f26) call_type_pane_cp023

0x9a57,	// (0x00056f2e) popup_call_audio_wait_window_g1

0x9a5f,	// (0x00056f36) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005c5d0) popup_call_audio_wait_window_g

0x9a67,	// (0x00056f3e) popup_call_audio_wait_window_t3

0x9a75,	// (0x00056f4c) bg_popup_call_pane_cp03_ParamLimits

0x9a75,	// (0x00056f4c) bg_popup_call_pane_cp03

0xa478,	// (0x0005794f) call_thumbnail_pane_cp011_ParamLimits

0xa478,	// (0x0005794f) call_thumbnail_pane_cp011

0xa484,	// (0x0005795b) call_type_pane_cp034_ParamLimits

0xa484,	// (0x0005795b) call_type_pane_cp034

0xa4c0,	// (0x00057997) popup_call_audio_second_window_g1_ParamLimits

0xa4c0,	// (0x00057997) popup_call_audio_second_window_g1

0xa4fc,	// (0x000579d3) popup_call_audio_second_window_g2_ParamLimits

0xa4fc,	// (0x000579d3) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0005c5d5) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0005c5d5) popup_call_audio_second_window_g

0xa538,	// (0x00057a0f) popup_call_audio_second_window_t1_ParamLimits

0xa538,	// (0x00057a0f) popup_call_audio_second_window_t1

0xa5b9,	// (0x00057a90) popup_call_audio_second_window_t2_ParamLimits

0xa5b9,	// (0x00057a90) popup_call_audio_second_window_t2

0xa5ef,	// (0x00057ac6) popup_call_audio_second_window_t3_ParamLimits

0xa5ef,	// (0x00057ac6) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0005c5da) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0005c5da) popup_call_audio_second_window_t

0x9a45,	// (0x00056f1c) bg_popup_call_pane_cp04

0xa625,	// (0x00057afc) list_conf_pane

0xa62d,	// (0x00057b04) popup_call_audio_conf_window_t1

0xa63b,	// (0x00057b12) call_thumbnail_pane_g1

0xa643,	// (0x00057b1a) bg_pinb_pane_ParamLimits

0xa643,	// (0x00057b1a) bg_pinb_pane

0xa651,	// (0x00057b28) find_pinb_pane

0xa65a,	// (0x00057b31) listscroll_pinb_pane_ParamLimits

0xa65a,	// (0x00057b31) listscroll_pinb_pane

0xa669,	// (0x00057b40) pinb_bg_pane_g1

0x0f35,	// (0x0004e40c) pinb_bg_pane_g2

0x0f41,	// (0x0004e418) pinb_bg_pane_g3

0x0f4d,	// (0x0004e424) pinb_bg_pane_g4

0x0f59,	// (0x0004e430) pinb_bg_pane_g5

0x0f65,	// (0x0004e43c) pinb_bg_pane_g6

0x0f70,	// (0x0004e447) pinb_bg_pane_g7

0x0f7b,	// (0x0004e452) pinb_bg_pane_g8

0x0f86,	// (0x0004e45d) pinb_bg_pane_g9

0x0f90,	// (0x0004e467) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0005c5e1) pinb_bg_pane_g

0x0fad,	// (0x0004e484) grid_pinb_pane

0x0fb6,	// (0x0004e48d) list_pinb_pane

0x0fbf,	// (0x0004e496) scroll_pane_cp01_ParamLimits

0x0fbf,	// (0x0004e496) scroll_pane_cp01

0xa673,	// (0x00057b4a) find_pinb_pane_g1_ParamLimits

0xa673,	// (0x00057b4a) find_pinb_pane_g1

0xa68b,	// (0x00057b62) find_pinb_pane_t1

0xa69d,	// (0x00057b74) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0005c5fb) find_pinb_pane_t

0xa6b2,	// (0x00057b89) input_focus_pane_cp01_ParamLimits

0xa6b2,	// (0x00057b89) input_focus_pane_cp01

0x0fd1,	// (0x0004e4a8) cell_pinb_pane_ParamLimits

0x0fd1,	// (0x0004e4a8) cell_pinb_pane

0xa6be,	// (0x00057b95) cell_pinb_pane_g1_ParamLimits

0xa6be,	// (0x00057b95) cell_pinb_pane_g1

0xa6d1,	// (0x00057ba8) cell_pinb_pane_g2_ParamLimits

0xa6d1,	// (0x00057ba8) cell_pinb_pane_g2

0xa6dd,	// (0x00057bb4) cell_pinb_pane_g3_ParamLimits

0xa6dd,	// (0x00057bb4) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0005c600) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0005c600) cell_pinb_pane_g

0x9a45,	// (0x00056f1c) grid_highlight_pane_cp01

0x0fff,	// (0x0004e4d6) list_pinb_item_pane_ParamLimits

0x0fff,	// (0x0004e4d6) list_pinb_item_pane

0x9a45,	// (0x00056f1c) list_highlight_pane_cp02

0x1012,	// (0x0004e4e9) list_pinb_item_pane_g1_ParamLimits

0x1012,	// (0x0004e4e9) list_pinb_item_pane_g1

0x101f,	// (0x0004e4f6) list_pinb_item_pane_g2_ParamLimits

0x101f,	// (0x0004e4f6) list_pinb_item_pane_g2

0x102b,	// (0x0004e502) list_pinb_item_pane_g3_ParamLimits

0x102b,	// (0x0004e502) list_pinb_item_pane_g3

0x103c,	// (0x0004e513) list_pinb_item_pane_g4_ParamLimits

0x103c,	// (0x0004e513) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0005c607) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0005c607) list_pinb_item_pane_g

0x1048,	// (0x0004e51f) list_pinb_item_pane_t1_ParamLimits

0x1048,	// (0x0004e51f) list_pinb_item_pane_t1

0x107d,	// (0x0004e554) calc_display_pane

0x10a5,	// (0x0004e57c) calc_paper_pane

0x10c8,	// (0x0004e59f) grid_calc_pane

0x9a45,	// (0x00056f1c) bg_list_pane_cp01

0x10f6,	// (0x0004e5cd) clock_g1

0x10fe,	// (0x0004e5d5) clock_g2

0x0001,

0xf139,	// (0x0005c610) clock_g

0x1106,	// (0x0004e5dd) clock_t1_ParamLimits

0x1106,	// (0x0004e5dd) clock_t1

0x111b,	// (0x0004e5f2) clock_t2_ParamLimits

0x111b,	// (0x0004e5f2) clock_t2

0x112d,	// (0x0004e604) clock_t3_ParamLimits

0x112d,	// (0x0004e604) clock_t3

0x113f,	// (0x0004e616) clock_t4_ParamLimits

0x113f,	// (0x0004e616) clock_t4

0x1151,	// (0x0004e628) clock_t5_ParamLimits

0x1151,	// (0x0004e628) clock_t5

0x1166,	// (0x0004e63d) clock_t6_ParamLimits

0x1166,	// (0x0004e63d) clock_t6

0x1178,	// (0x0004e64f) clock_t7_ParamLimits

0x1178,	// (0x0004e64f) clock_t7

0x118a,	// (0x0004e661) clock_t8_ParamLimits

0x118a,	// (0x0004e661) clock_t8

0x119e,	// (0x0004e675) clock_t9_ParamLimits

0x119e,	// (0x0004e675) clock_t9

0x0008,

0xf13e,	// (0x0005c615) clock_t_ParamLimits

0xf13e,	// (0x0005c615) clock_t

0xa6e9,	// (0x00057bc0) popup_clock_analogue_window_cp02

0xa6e9,	// (0x00057bc0) popup_clock_digital_window_cp01

0xa6f1,	// (0x00057bc8) listscroll_help_pane

0x9a45,	// (0x00056f1c) phob_pre_status_pane

0xa6fb,	// (0x00057bd2) grid_qdial_pane

0xa643,	// (0x00057b1a) listscroll_mce_pane

0xa643,	// (0x00057b1a) bg_notes_pane

0xa705,	// (0x00057bdc) list_notes_pane

0x11b2,	// (0x0004e689) scroll_pane_cp06

0xa713,	// (0x00057bea) bg_calc_paper_pane

0x9add,	// (0x00056fb4) list_calc_pane

0xa727,	// (0x00057bfe) bg_calc_display_pane

0x11c6,	// (0x0004e69d) calc_display_pane_t1

0x11d8,	// (0x0004e6af) calc_display_pane_t2

0x9af7,	// (0x00056fce) calc_display_pane_t3

0x0002,

0xf151,	// (0x0005c628) calc_display_pane_t

0x11ea,	// (0x0004e6c1) cell_calc_pane_ParamLimits

0x11ea,	// (0x0004e6c1) cell_calc_pane

0xa733,	// (0x00057c0a) bg_calc_paper_pane_g1

0xa73f,	// (0x00057c16) bg_calc_paper_pane_g2

0xa74b,	// (0x00057c22) bg_calc_paper_pane_g3

0xa757,	// (0x00057c2e) bg_calc_paper_pane_g4

0xa763,	// (0x00057c3a) bg_calc_paper_pane_g5

0x1221,	// (0x0004e6f8) bg_calc_paper_pane_g6

0x1232,	// (0x0004e709) bg_calc_paper_pane_g7

0x1243,	// (0x0004e71a) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0005c62f) bg_calc_paper_pane_g

0x1256,	// (0x0004e72d) calc_bg_paper_pane_g9

0x1269,	// (0x0004e740) list_calc_item_pane_ParamLimits

0x1269,	// (0x0004e740) list_calc_item_pane

0xa76f,	// (0x00057c46) list_calc_item_pane_g1

0x9b09,	// (0x00056fe0) list_calc_item_pane_t1_ParamLimits

0x9b09,	// (0x00056fe0) list_calc_item_pane_t1

0x1283,	// (0x0004e75a) list_calc_item_pane_t2_ParamLimits

0x1283,	// (0x0004e75a) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0005c640) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0005c640) list_calc_item_pane_t

0xa77c,	// (0x00057c53) cell_calc_pane_g1

0xa786,	// (0x00057c5d) grid_highlight_pane_cp02

0xa7a8,	// (0x00057c7f) bg_calc_display_pane_g1

0x9b1b,	// (0x00056ff2) bg_calc_display_pane_g2

0xa7b1,	// (0x00057c88) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0005c64a) bg_calc_display_pane_g

0x12b5,	// (0x0004e78c) cell_qdial_pane_ParamLimits

0x12b5,	// (0x0004e78c) cell_qdial_pane

0x12c9,	// (0x0004e7a0) cell_qdial_pane_g1_ParamLimits

0x12c9,	// (0x0004e7a0) cell_qdial_pane_g1

0x12df,	// (0x0004e7b6) cell_qdial_pane_g2_ParamLimits

0x12df,	// (0x0004e7b6) cell_qdial_pane_g2

0xa7ba,	// (0x00057c91) cell_qdial_pane_g3_ParamLimits

0xa7ba,	// (0x00057c91) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0005c651) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0005c651) cell_qdial_pane_g

0x1305,	// (0x0004e7dc) cell_qdial_pane_t1_ParamLimits

0x1305,	// (0x0004e7dc) cell_qdial_pane_t1

0x131d,	// (0x0004e7f4) cell_qdial_pane_t2_ParamLimits

0x131d,	// (0x0004e7f4) cell_qdial_pane_t2

0x1330,	// (0x0004e807) cell_qdial_pane_t3_ParamLimits

0x1330,	// (0x0004e807) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0005c65a) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0005c65a) cell_qdial_pane_t

0x9a45,	// (0x00056f1c) grid_highlight_pane_cp04

0xa7c6,	// (0x00057c9d) thumbnail_qdial_pane_ParamLimits

0xa7c6,	// (0x00057c9d) thumbnail_qdial_pane

0xa822,	// (0x00057cf9) list_help_pane

0xa82b,	// (0x00057d02) scroll_pane_cp02

0x1343,	// (0x0004e81a) help_list_pane_t1_ParamLimits

0x1343,	// (0x0004e81a) help_list_pane_t1

0x9b25,	// (0x00056ffc) bg_notes_pane_g2

0x9b2d,	// (0x00057004) bg_notes_pane_g3

0x9b35,	// (0x0005700c) notes_bg_pane_g1

0x9b3d,	// (0x00057014) notes_bg_pane_g4

0x9b45,	// (0x0005701c) notes_bg_pane_g5

0x9b4d,	// (0x00057024) notes_bg_pane_g6

0x9b55,	// (0x0005702c) notes_bg_pane_g7

0x9b5d,	// (0x00057034) notes_bg_pane_g8

0x9b65,	// (0x0005703c) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0005c678) notes_bg_pane_g

0x1362,	// (0x0004e839) list_notes_text_pane_ParamLimits

0x1362,	// (0x0004e839) list_notes_text_pane

0xa834,	// (0x00057d0b) list_notes_text_pane_g1

0x1378,	// (0x0004e84f) list_notes_text_pane_t1

0x1386,	// (0x0004e85d) listscroll_cale_week_pane

0x13b2,	// (0x0004e889) bg_cale_heading_pane

0xa857,	// (0x00057d2e) bg_cale_pane_cp01

0x13d0,	// (0x0004e8a7) cale_week_corner_pane

0x13ef,	// (0x0004e8c6) cale_week_day_heading_pane

0x1412,	// (0x0004e8e9) cale_week_scroll_pane_g1

0x142b,	// (0x0004e902) cale_week_scroll_pane_g2

0x1443,	// (0x0004e91a) cale_week_scroll_pane_g3

0x145b,	// (0x0004e932) cale_week_scroll_pane_g4

0x1473,	// (0x0004e94a) cale_week_scroll_pane_g5

0x148f,	// (0x0004e966) cale_week_scroll_pane_g6

0x14af,	// (0x0004e986) cale_week_scroll_pane_g7

0x14cf,	// (0x0004e9a6) cale_week_scroll_pane_g8

0x14f3,	// (0x0004e9ca) cale_week_scroll_pane_g9

0x150b,	// (0x0004e9e2) cale_week_scroll_pane_g10

0x1523,	// (0x0004e9fa) cale_week_scroll_pane_g11

0x153b,	// (0x0004ea12) cale_week_scroll_pane_g12

0x1553,	// (0x0004ea2a) cale_week_scroll_pane_g13

0x1553,	// (0x0004ea2a) cale_week_scroll_pane_g14

0x1553,	// (0x0004ea2a) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0005c687) cale_week_scroll_pane_g

0x158f,	// (0x0004ea66) cale_week_time_pane

0x15b3,	// (0x0004ea8a) grid_cale_week_pane

0xa886,	// (0x00057d5d) scroll_pane_cp08

0x15d9,	// (0x0004eab0) cell_cale_week_pane_ParamLimits

0x15d9,	// (0x0004eab0) cell_cale_week_pane

0x1667,	// (0x0004eb3e) cale_week_day_heading_pane_t1

0x16b1,	// (0x0004eb88) cale_week_day_heading_pane_t2

0x1700,	// (0x0004ebd7) cale_week_day_heading_pane_t3

0x174f,	// (0x0004ec26) cale_week_day_heading_pane_t4

0x179e,	// (0x0004ec75) cale_week_day_heading_pane_t5

0x17f5,	// (0x0004eccc) cale_week_day_heading_pane_t6

0x184c,	// (0x0004ed23) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0005c6a8) cale_week_day_heading_pane_t

0xa8a3,	// (0x00057d7a) bg_cale_side_pane

0x1896,	// (0x0004ed6d) cale_week_time_pane_t1

0x18b0,	// (0x0004ed87) cale_week_time_pane_t2

0x18ca,	// (0x0004eda1) cale_week_time_pane_t3

0x18e4,	// (0x0004edbb) cale_week_time_pane_t4

0x18fe,	// (0x0004edd5) cale_week_time_pane_t5

0x1918,	// (0x0004edef) cale_week_time_pane_t6

0x1932,	// (0x0004ee09) cale_week_time_pane_t7

0x1952,	// (0x0004ee29) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0005c6b7) cale_week_time_pane_t

0x1972,	// (0x0004ee49) cell_cale_week_pane_g2

0x1996,	// (0x0004ee6d) cell_cale_week_pane_g3_ParamLimits

0x1996,	// (0x0004ee6d) cell_cale_week_pane_g3

0xa8b1,	// (0x00057d88) grid_highlight_pane_cp07

0xa8b9,	// (0x00057d90) listscroll_gms_pane

0xa8c3,	// (0x00057d9a) grid_gms_pane

0xa8cc,	// (0x00057da3) listscroll_gms_pane_g1

0xa8d4,	// (0x00057dab) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0005c6c8) listscroll_gms_pane_g

0x19ae,	// (0x0004ee85) scroll_pane_cp010

0x19b9,	// (0x0004ee90) cell_gms_pane_ParamLimits

0x19b9,	// (0x0004ee90) cell_gms_pane

0x19cb,	// (0x0004eea2) cell_gms_pane_g1

0xa8dc,	// (0x00057db3) cell_gms_pane_g2

0xa834,	// (0x00057d0b) cell_gms_pane_g3

0xa8e4,	// (0x00057dbb) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0005c6cd) cell_gms_pane_g

0xa8ed,	// (0x00057dc4) grid_highlight_pane_cp09

0x3e24,	// (0x000512fb) phob_pre_status_pane_g1

0x3e2c,	// (0x00051303) phob_pre_status_pane_g2

0x3e34,	// (0x0005130b) phob_pre_status_pane_g3

0x3e3c,	// (0x00051313) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0005cab8) phob_pre_status_pane_g

0x3e4c,	// (0x00051323) phob_pre_status_pane_t1

0x3e5a,	// (0x00051331) phob_pre_status_pane_t2

0x3e6a,	// (0x00051341) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0005cac3) phob_pre_status_pane_t

0xa8f5,	// (0x00057dcc) bg_list_pane_cp05

0x19db,	// (0x0004eeb2) grid_vorec_pane

0x19e5,	// (0x0004eebc) vorec_t1

0x19f3,	// (0x0004eeca) vorec_t2

0x1a01,	// (0x0004eed8) vorec_t3

0x1a0f,	// (0x0004eee6) vorec_t4

0x95a4,	// (0x00056a7b) vorec_t5

0x95b2,	// (0x00056a89) vorec_t6

0x0004,

0xf1ff,	// (0x0005c6d6) vorec_t

0x95c0,	// (0x00056a97) wait_bar_pane_cp01

0x1a2b,	// (0x0004ef02) cell_vorec_pane_ParamLimits

0x1a2b,	// (0x0004ef02) cell_vorec_pane

0x9b6d,	// (0x00057044) cell_vorec_pane_g1

0x9a45,	// (0x00056f1c) grid_highlight_pane_cp05

0x1a56,	// (0x0004ef2d) cams_zoom_pane

0x1a65,	// (0x0004ef3c) image_vga_pane

0x1a7f,	// (0x0004ef56) main_camera_pane_g1

0x1a91,	// (0x0004ef68) main_camera_pane_g2

0x1aa1,	// (0x0004ef78) main_camera_pane_g3

0x1ab3,	// (0x0004ef8a) main_camera_pane_g4

0x1ac5,	// (0x0004ef9c) main_camera_pane_g5

0x1ad7,	// (0x0004efae) main_camera_pane_g6

0x1ae9,	// (0x0004efc0) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005c6e1) main_camera_pane_g

0x1afb,	// (0x0004efd2) main_camera_pane_t1

0x1b11,	// (0x0004efe8) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005c6f2) main_camera_pane_t

0x1b4d,	// (0x0004f024) cams_zoom_pane_cp_ParamLimits

0x1b4d,	// (0x0004f024) cams_zoom_pane_cp

0x1b75,	// (0x0004f04c) image_cif_pane_ParamLimits

0x1b75,	// (0x0004f04c) image_cif_pane

0x1bb0,	// (0x0004f087) image_subqcif_pane

0x1bb8,	// (0x0004f08f) main_video_pane_g1_ParamLimits

0x1bb8,	// (0x0004f08f) main_video_pane_g1

0x1bdc,	// (0x0004f0b3) main_video_pane_g2_ParamLimits

0x1bdc,	// (0x0004f0b3) main_video_pane_g2

0x1c10,	// (0x0004f0e7) main_video_pane_g3_ParamLimits

0x1c10,	// (0x0004f0e7) main_video_pane_g3

0x1c3e,	// (0x0004f115) main_video_pane_g4_ParamLimits

0x1c3e,	// (0x0004f115) main_video_pane_g4

0x1c6c,	// (0x0004f143) main_video_pane_g5_ParamLimits

0x1c6c,	// (0x0004f143) main_video_pane_g5

0xa909,	// (0x00057de0) main_video_pane_g6_ParamLimits

0xa909,	// (0x00057de0) main_video_pane_g6

0x0006,

0xf220,	// (0x0005c6f7) main_video_pane_g_ParamLimits

0xf220,	// (0x0005c6f7) main_video_pane_g

0x1c95,	// (0x0004f16c) main_video_pane_t1_ParamLimits

0x1c95,	// (0x0004f16c) main_video_pane_t1

0xa923,	// (0x00057dfa) cams_zoom_pane_g1

0xa92c,	// (0x00057e03) cams_zoom_pane_g2

0xa935,	// (0x00057e0c) cams_zoom_pane_g3

0xa93e,	// (0x00057e15) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005c706) cams_zoom_pane_g

0x1cf2,	// (0x0004f1c9) grid_cams_pane

0x1d0c,	// (0x0004f1e3) linegrid_cams_pane

0x1d1f,	// (0x0004f1f6) cell_cams_pane_ParamLimits

0x1d1f,	// (0x0004f1f6) cell_cams_pane

0xa947,	// (0x00057e1e) cams_burst_image_pane

0xa94f,	// (0x00057e26) cell_cams_pane_g1

0x9a45,	// (0x00056f1c) grid_highlight_pane_cp03

0xa77c,	// (0x00057c53) mp_bg_pane_g1

0x9a45,	// (0x00056f1c) bg_list_pane_cp03

0xc6be,	// (0x00059b95) bg_mp_pane

0xc6c6,	// (0x00059b9d) grid_mp_pane

0xc6ce,	// (0x00059ba5) media_player_g1

0xc6d6,	// (0x00059bad) media_player_t1

0xc6e4,	// (0x00059bbb) media_player_t2

0xc6f2,	// (0x00059bc9) media_player_t3

0xc700,	// (0x00059bd7) media_player_t4

0xc70e,	// (0x00059be5) media_player_t5

0xc71c,	// (0x00059bf3) media_player_t6

0xc72a,	// (0x00059c01) media_player_t7

0x0006,

0xf5cb,	// (0x0005caa2) media_player_t

0xc738,	// (0x00059c0f) wait_bar_pane_cp02

0xf5b0,	// (0x0005ca87) main_usb_pane_t

0x3e1b,	// (0x000512f2) cell_mp_pane

0xa77c,	// (0x00057c53) cell_mp_pane_g1

0x9a45,	// (0x00056f1c) grid_highlight_pane_cp06

0xa957,	// (0x00057e2e) grid_skin_colour_pane

0xa95f,	// (0x00057e36) list_highlight_pane_cp03

0x1dd9,	// (0x0004f2b0) skin_g1

0xa967,	// (0x00057e3e) skin_t1

0xa976,	// (0x00057e4d) skin_t2

0x0001,

0xf264,	// (0x0005c73b) skin_t

0x1de1,	// (0x0004f2b8) cell_skin_colour_pane_ParamLimits

0x1de1,	// (0x0004f2b8) cell_skin_colour_pane

0xa984,	// (0x00057e5b) cell_skin_colour_pane_g1

0x1e5a,	// (0x0004f331) call_video_g1_ParamLimits

0x1e5a,	// (0x0004f331) call_video_g1

0x1e76,	// (0x0004f34d) call_video_g2_ParamLimits

0x1e76,	// (0x0004f34d) call_video_g2

0x0001,

0xf269,	// (0x0005c740) call_video_g_ParamLimits

0xf269,	// (0x0005c740) call_video_g

0x1ec8,	// (0x0004f39f) call_video_uplink_pane_cp1_ParamLimits

0x1ec8,	// (0x0004f39f) call_video_uplink_pane_cp1

0xa996,	// (0x00057e6d) call_video_uplink_pane_cp2

0x1f67,	// (0x0004f43e) video_down_crop_pane_ParamLimits

0x1f67,	// (0x0004f43e) video_down_crop_pane

0x2050,	// (0x0004f527) video_down_pane_ParamLimits

0x2050,	// (0x0004f527) video_down_pane

0xa99e,	// (0x00057e75) video_down_subqcif_pane_ParamLimits

0xa99e,	// (0x00057e75) video_down_subqcif_pane

0xa9b6,	// (0x00057e8d) video_down_subqcif_pane_cp_ParamLimits

0xa9b6,	// (0x00057e8d) video_down_subqcif_pane_cp

0xa9dc,	// (0x00057eb3) im_reading_pane_ParamLimits

0xa9dc,	// (0x00057eb3) im_reading_pane

0x215e,	// (0x0004f635) im_writing_pane_ParamLimits

0x215e,	// (0x0004f635) im_writing_pane

0x2174,	// (0x0004f64b) im_reading_pane_t1

0xa9f6,	// (0x00057ecd) list_im_pane

0xaa07,	// (0x00057ede) scroll_pane_cp07

0x21b1,	// (0x0004f688) im_writing_pane_t1_ParamLimits

0x21b1,	// (0x0004f688) im_writing_pane_t1

0xaa20,	// (0x00057ef7) im_writing_pane_t2_ParamLimits

0xaa20,	// (0x00057ef7) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005c74a) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005c74a) im_writing_pane_t

0x9a45,	// (0x00056f1c) input_focus_pane_cp04

0x9a45,	// (0x00056f1c) input_focus_pane_cp05

0x21c6,	// (0x0004f69d) list_im_single_pane_ParamLimits

0x21c6,	// (0x0004f69d) list_im_single_pane

0x21dc,	// (0x0004f6b3) list_single_im_pane_t1

0x3ddb,	// (0x000512b2) blid_accuracy_pane

0x3de3,	// (0x000512ba) blid_compass_pane

0x3ded,	// (0x000512c4) main_location_t1

0x3dfd,	// (0x000512d4) main_location_t2

0x3e0d,	// (0x000512e4) main_location_t3

0x0002,

0xf5da,	// (0x0005cab1) main_location_t

0x9a45,	// (0x00056f1c) aid_levels_location

0xa77c,	// (0x00057c53) blid_accuracy_pane_g1

0xa77c,	// (0x00057c53) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0005c7ac) blid_accuracy_pane_g

0xaa68,	// (0x00057f3f) wml_content_pane

0xaaa6,	// (0x00057f7d) wml_button_pane_ParamLimits

0xaaa6,	// (0x00057f7d) wml_button_pane

0x21eb,	// (0x0004f6c2) wml_list_single_large_pane_ParamLimits

0x21eb,	// (0x0004f6c2) wml_list_single_large_pane

0x2201,	// (0x0004f6d8) wml_list_single_medium_pane_ParamLimits

0x2201,	// (0x0004f6d8) wml_list_single_medium_pane

0x221b,	// (0x0004f6f2) wml_list_single_small_pane_ParamLimits

0x221b,	// (0x0004f6f2) wml_list_single_small_pane

0xaaba,	// (0x00057f91) wml_selection_box_pane_ParamLimits

0xaaba,	// (0x00057f91) wml_selection_box_pane

0xaacd,	// (0x00057fa4) wml_list_single_pane_t1

0xaadc,	// (0x00057fb3) wml_list_single_medium_pane_t1

0xaaeb,	// (0x00057fc2) wml_list_single_large_pane_t1

0xaafa,	// (0x00057fd1) input_focus_pane_cp02_ParamLimits

0xaafa,	// (0x00057fd1) input_focus_pane_cp02

0xab0d,	// (0x00057fe4) wml_selection_box_pane_g1

0xab16,	// (0x00057fed) wml_selection_box_pane_t1_ParamLimits

0xab16,	// (0x00057fed) wml_selection_box_pane_t1

0xa643,	// (0x00057b1a) bg_wml_button_pane_ParamLimits

0xa643,	// (0x00057b1a) bg_wml_button_pane

0xab2e,	// (0x00058005) wml_button_pane_g1

0xab36,	// (0x0005800d) wml_button_pane_t1

0xab2e,	// (0x00058005) wml_button_bg_pane_g1

0xab46,	// (0x0005801d) wml_button_bg_pane_g2

0xab4e,	// (0x00058025) wml_button_bg_pane_g3

0xab56,	// (0x0005802d) wml_button_bg_pane_g4

0xab5e,	// (0x00058035) wml_button_bg_pane_g5

0xab66,	// (0x0005803d) wml_button_bg_pane_g6

0xab6e,	// (0x00058045) wml_button_bg_pane_g7

0xab76,	// (0x0005804d) wml_button_bg_pane_g8

0xab7e,	// (0x00058055) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005c74f) wml_button_bg_pane_g

0x2235,	// (0x0004f70c) bg_list_pane_cp02

0xab86,	// (0x0005805d) mce_header_pane_ParamLimits

0xab86,	// (0x0005805d) mce_header_pane

0xab9c,	// (0x00058073) mce_icon_pane

0xab9c,	// (0x00058073) mce_image_pane

0xaba5,	// (0x0005807c) mce_text_pane_ParamLimits

0xaba5,	// (0x0005807c) mce_text_pane

0x223d,	// (0x0004f714) scroll_pane_cp03

0xaa9e,	// (0x00057f75) scroll_pane_cp04

0xabb8,	// (0x0005808f) scroll_pane_cp05_ParamLimits

0xabb8,	// (0x0005808f) scroll_pane_cp05

0x2247,	// (0x0004f71e) mce_header_field_pane_ParamLimits

0x2247,	// (0x0004f71e) mce_header_field_pane

0x225e,	// (0x0004f735) mce_header_field_pane_2_ParamLimits

0x225e,	// (0x0004f735) mce_header_field_pane_2

0x2274,	// (0x0004f74b) mce_header_field_pane_3

0x227c,	// (0x0004f753) list_single_mce_message_pane_ParamLimits

0x227c,	// (0x0004f753) list_single_mce_message_pane

0x2293,	// (0x0004f76a) list_single_mce_smart_pane_ParamLimits

0x2293,	// (0x0004f76a) list_single_mce_smart_pane

0xabc4,	// (0x0005809b) input_focus_pane_cp03

0xabcd,	// (0x000580a4) list_header_data_pane

0x22b5,	// (0x0004f78c) mce_header_field_pane_t1

0x22c5,	// (0x0004f79c) list_single_mce_header_pane_ParamLimits

0x22c5,	// (0x0004f79c) list_single_mce_header_pane

0xabd5,	// (0x000580ac) list_single_mce_header_pane_t1

0xabe4,	// (0x000580bb) list_single_mce_message_pane_g1

0xabec,	// (0x000580c3) list_single_mce_message_pane_t1

0x22ff,	// (0x0004f7d6) bg_cale_heading_pane_cp01_ParamLimits

0x22ff,	// (0x0004f7d6) bg_cale_heading_pane_cp01

0xabfa,	// (0x000580d1) bg_cale_pane_cp02_ParamLimits

0xabfa,	// (0x000580d1) bg_cale_pane_cp02

0x233a,	// (0x0004f811) cale_month_corner_pane

0x2359,	// (0x0004f830) cale_month_day_heading_pane_ParamLimits

0x2359,	// (0x0004f830) cale_month_day_heading_pane

0x23ac,	// (0x0004f883) cale_month_pane_g1_ParamLimits

0x23ac,	// (0x0004f883) cale_month_pane_g1

0x23dc,	// (0x0004f8b3) cale_month_pane_g2_ParamLimits

0x23dc,	// (0x0004f8b3) cale_month_pane_g2

0x240c,	// (0x0004f8e3) cale_month_pane_g3_ParamLimits

0x240c,	// (0x0004f8e3) cale_month_pane_g3

0x2448,	// (0x0004f91f) cale_month_pane_g4_ParamLimits

0x2448,	// (0x0004f91f) cale_month_pane_g4

0x2484,	// (0x0004f95b) cale_month_pane_g5_ParamLimits

0x2484,	// (0x0004f95b) cale_month_pane_g5

0x24cc,	// (0x0004f9a3) cale_month_pane_g6_ParamLimits

0x24cc,	// (0x0004f9a3) cale_month_pane_g6

0x2518,	// (0x0004f9ef) cale_month_pane_g7_ParamLimits

0x2518,	// (0x0004f9ef) cale_month_pane_g7

0x256c,	// (0x0004fa43) cale_month_pane_g8_ParamLimits

0x256c,	// (0x0004fa43) cale_month_pane_g8

0x25c0,	// (0x0004fa97) cale_month_pane_g9_ParamLimits

0x25c0,	// (0x0004fa97) cale_month_pane_g9

0x2612,	// (0x0004fae9) cale_month_pane_g10_ParamLimits

0x2612,	// (0x0004fae9) cale_month_pane_g10

0x2664,	// (0x0004fb3b) cale_month_pane_g11_ParamLimits

0x2664,	// (0x0004fb3b) cale_month_pane_g11

0x26b6,	// (0x0004fb8d) cale_month_pane_g12_ParamLimits

0x26b6,	// (0x0004fb8d) cale_month_pane_g12

0x2708,	// (0x0004fbdf) cale_month_pane_g13_ParamLimits

0x2708,	// (0x0004fbdf) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005c762) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005c762) cale_month_pane_g

0x275a,	// (0x0004fc31) cale_month_week_pane

0x277e,	// (0x0004fc55) grid_cale_month_pane_ParamLimits

0x277e,	// (0x0004fc55) grid_cale_month_pane

0x27bc,	// (0x0004fc93) cale_month_day_heading_pane_t1

0x2842,	// (0x0004fd19) cale_month_day_heading_pane_t2

0x28d3,	// (0x0004fdaa) cale_month_day_heading_pane_t3

0x2964,	// (0x0004fe3b) cale_month_day_heading_pane_t4

0x29fd,	// (0x0004fed4) cale_month_day_heading_pane_t5

0x2a9e,	// (0x0004ff75) cale_month_day_heading_pane_t6

0x2b3f,	// (0x00050016) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005c77d) cale_month_day_heading_pane_t

0xa8a3,	// (0x00057d7a) bg_cale_side_pane_cp01

0x2be8,	// (0x000500bf) cale_month_week_pane_t1

0x2c01,	// (0x000500d8) cale_month_week_pane_t2

0x2c1a,	// (0x000500f1) cale_month_week_pane_t3

0x2c33,	// (0x0005010a) cale_month_week_pane_t4

0x2c4c,	// (0x00050123) cale_month_week_pane_t5

0x2c65,	// (0x0005013c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005c78c) cale_month_week_pane_t

0x2c7e,	// (0x00050155) cell_cale_month_pane_ParamLimits

0x2c7e,	// (0x00050155) cell_cale_month_pane

0x9b77,	// (0x0005704e) cell_cale_month_pane_g1

0x2dd6,	// (0x000502ad) cell_cale_month_pane_t1_ParamLimits

0x2dd6,	// (0x000502ad) cell_cale_month_pane_t1

0xa8b1,	// (0x00057d88) grid_highlight_pane_cp08

0xa77c,	// (0x00057c53) main_smil_g1

0x2df6,	// (0x000502cd) smil_status_pane

0xac39,	// (0x00058110) smil_text_pane

0xc5de,	// (0x00059ab5) bg_popup_call3_rect_pane_g8

0xc5e6,	// (0x00059abd) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0005ca45) bg_popup_call3_rect_pane_g

0xc82d,	// (0x00059d04) smil_status_volume_pane_g1

0xac43,	// (0x0005811a) smil_status_pane_t1

0x9ccd,	// (0x000571a4) volume_smil_pane

0xac5a,	// (0x00058131) list_smil_text_pane

0x2e0b,	// (0x000502e2) scroll_pane_cp011

0x2e16,	// (0x000502ed) smil_text_list_pane_t1_ParamLimits

0x2e16,	// (0x000502ed) smil_text_list_pane_t1

0x9b83,	// (0x0005705a) aid_volume_smil_ParamLimits

0x9b83,	// (0x0005705a) aid_volume_smil

0xa77c,	// (0x00057c53) smil_volume_pane_g1

0xa77c,	// (0x00057c53) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0005c7ac) smil_volume_pane_g

0x1386,	// (0x0004e85d) listscroll_cale_day_pane

0xac64,	// (0x0005813b) bg_cale_pane

0xac7c,	// (0x00058153) list_cale_pane

0xac9f,	// (0x00058176) scroll_pane_cp09

0xacb0,	// (0x00058187) cale_bg_pane_g1

0xacb8,	// (0x0005818f) cale_bg_pane_g2

0xacc0,	// (0x00058197) cale_bg_pane_g3

0xacc8,	// (0x0005819f) cale_bg_pane_g4

0xacd0,	// (0x000581a7) cale_bg_pane_g5

0xacd8,	// (0x000581af) cale_bg_pane_g6

0xace0,	// (0x000581b7) cale_bg_pane_g7

0xace8,	// (0x000581bf) cale_bg_pane_g8

0xacf0,	// (0x000581c7) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0005c7b1) cale_bg_pane_g

0x2e58,	// (0x0005032f) list_cale_time_pane_ParamLimits

0x2e58,	// (0x0005032f) list_cale_time_pane

0xad00,	// (0x000581d7) list_cale_time_pane_g1_ParamLimits

0xad00,	// (0x000581d7) list_cale_time_pane_g1

0xad0c,	// (0x000581e3) list_cale_time_pane_g2_ParamLimits

0xad0c,	// (0x000581e3) list_cale_time_pane_g2

0x2e6f,	// (0x00050346) list_cale_time_pane_g3_ParamLimits

0x2e6f,	// (0x00050346) list_cale_time_pane_g3

0x2e7d,	// (0x00050354) list_cale_time_pane_g4_ParamLimits

0x2e7d,	// (0x00050354) list_cale_time_pane_g4

0x2e8b,	// (0x00050362) list_cale_time_pane_g5_ParamLimits

0x2e8b,	// (0x00050362) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0005c7c4) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0005c7c4) list_cale_time_pane_g

0xad26,	// (0x000581fd) list_cale_time_pane_t1_ParamLimits

0xad26,	// (0x000581fd) list_cale_time_pane_t1

0xad4e,	// (0x00058225) list_cale_time_pane_t2_ParamLimits

0xad4e,	// (0x00058225) list_cale_time_pane_t2

0x3151,	// (0x00050628) aid_blid_cardinal_pane

0x318f,	// (0x00050666) compass_pane_t4

0xad76,	// (0x0005824d) list_cale_time_pane_t4_ParamLimits

0xad76,	// (0x0005824d) list_cale_time_pane_t4

0x319d,	// (0x00050674) compass_pane_t5

0x31ab,	// (0x00050682) compass_pane_t6

0x31b9,	// (0x00050690) compass_pane_t7

0xb227,	// (0x000586fe) navi_pane_cc_t1

0xb441,	// (0x00058918) aid_phob_thumbnail_center_pane

0x37eb,	// (0x00050cc2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0005c7d1) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0005c7d1) list_cale_time_pane_t

0x969c,	// (0x00056b73) bg_popup_window_pane_cp02_ParamLimits

0x969c,	// (0x00056b73) bg_popup_window_pane_cp02

0xad9e,	// (0x00058275) heading_pane_cp01_ParamLimits

0xad9e,	// (0x00058275) heading_pane_cp01

0xadaa,	// (0x00058281) loc_req_pane_ParamLimits

0xadaa,	// (0x00058281) loc_req_pane

0xadba,	// (0x00058291) loc_type_pane_ParamLimits

0xadba,	// (0x00058291) loc_type_pane

0xadcc,	// (0x000582a3) loc_type_pane_t1_ParamLimits

0xadcc,	// (0x000582a3) loc_type_pane_t1

0xadde,	// (0x000582b5) loc_type_pane_t2_ParamLimits

0xadde,	// (0x000582b5) loc_type_pane_t2

0xadf0,	// (0x000582c7) loc_type_pane_t3_ParamLimits

0xadf0,	// (0x000582c7) loc_type_pane_t3

0x0002,

0xf301,	// (0x0005c7d8) loc_type_pane_t_ParamLimits

0xf301,	// (0x0005c7d8) loc_type_pane_t

0xae02,	// (0x000582d9) list_loc_req_pane

0xae0c,	// (0x000582e3) scroll_pane_cp012

0x2e99,	// (0x00050370) list_single_loc_request_popup_menu_pane_ParamLimits

0x2e99,	// (0x00050370) list_single_loc_request_popup_menu_pane

0xae17,	// (0x000582ee) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae17,	// (0x000582ee) list_single_loc_request_popup_menu_pane_g1

0xae23,	// (0x000582fa) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae23,	// (0x000582fa) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0005c7df) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0005c7df) list_single_loc_request_popup_menu_pane_g

0xae2f,	// (0x00058306) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae2f,	// (0x00058306) list_single_loc_request_popup_menu_pane_t1

0xa643,	// (0x00057b1a) bg_popup_window_pane_cp03_ParamLimits

0xa643,	// (0x00057b1a) bg_popup_window_pane_cp03

0xb2d9,	// (0x000587b0) heading_loc_req_pane_ParamLimits

0xb2d9,	// (0x000587b0) heading_loc_req_pane

0x2ea6,	// (0x0005037d) popup_dyc_status_message_window_g1_ParamLimits

0x2ea6,	// (0x0005037d) popup_dyc_status_message_window_g1

0x2eba,	// (0x00050391) popup_dyc_status_message_window_t1_ParamLimits

0x2eba,	// (0x00050391) popup_dyc_status_message_window_t1

0x2ecf,	// (0x000503a6) popup_dyc_status_message_window_t2_ParamLimits

0x2ecf,	// (0x000503a6) popup_dyc_status_message_window_t2

0x2ee4,	// (0x000503bb) popup_dyc_status_message_window_t3_ParamLimits

0x2ee4,	// (0x000503bb) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0005c7e4) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0005c7e4) popup_dyc_status_message_window_t

0x9a45,	// (0x00056f1c) bg_heading_pane_cp01

0xae45,	// (0x0005831c) heading_loc_req_pane_g1

0xae4d,	// (0x00058324) heading_loc_req_pane_g2

0xae55,	// (0x0005832c) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0005c7eb) heading_loc_req_pane_g

0xae5d,	// (0x00058334) heading_loc_req_pane_t1

0xae6c,	// (0x00058343) bg_popup_sub_pane_cp01_ParamLimits

0xae6c,	// (0x00058343) bg_popup_sub_pane_cp01

0xae7a,	// (0x00058351) popup_cale_events_window_g1_ParamLimits

0xae7a,	// (0x00058351) popup_cale_events_window_g1

0xae9a,	// (0x00058371) popup_cale_events_window_g2_ParamLimits

0xae9a,	// (0x00058371) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0005c81f) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0005c81f) popup_cale_events_window_g

0xaeba,	// (0x00058391) popup_cale_events_window_t1_ParamLimits

0xaeba,	// (0x00058391) popup_cale_events_window_t1

0xaecc,	// (0x000583a3) popup_cale_events_window_t2_ParamLimits

0xaecc,	// (0x000583a3) popup_cale_events_window_t2

0xaf0a,	// (0x000583e1) popup_cale_events_window_t3_ParamLimits

0xaf0a,	// (0x000583e1) popup_cale_events_window_t3

0xaf44,	// (0x0005841b) popup_cale_events_window_t4_ParamLimits

0xaf44,	// (0x0005841b) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0005c824) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0005c824) popup_cale_events_window_t

0x2f5f,	// (0x00050436) call_type_pane

0x2f6f,	// (0x00050446) popup_call_status_window_g1

0x2f83,	// (0x0005045a) popup_call_status_window_g2

0x2f97,	// (0x0005046e) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0005c82d) popup_call_status_window_g

0xaf7a,	// (0x00058451) call_type_pane_g1

0xaf83,	// (0x0005845a) call_type_pane_g2

0x0001,

0xf35d,	// (0x0005c834) call_type_pane_g

0x9a45,	// (0x00056f1c) bg_popup_sub_pane_cp02

0xaf8c,	// (0x00058463) listscroll_popup_wml_pane

0xaf94,	// (0x0005846b) list_wml_pane

0xaf9e,	// (0x00058475) scroll_pane_cp013

0xafa9,	// (0x00058480) list_single_graphic_popup_wml_pane_ParamLimits

0xafa9,	// (0x00058480) list_single_graphic_popup_wml_pane

0xa77c,	// (0x00057c53) list_single_graphic_popup_wml_pane_g1

0xafbd,	// (0x00058494) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0005c839) list_single_graphic_popup_wml_pane_g

0xafc5,	// (0x0005849c) list_single_graphic_popup_wml_pane_t1

0xafdb,	// (0x000584b2) aid_call_pane

0xa63b,	// (0x00057b12) popup_clock_analogue_window_g1

0xa63b,	// (0x00057b12) popup_clock_analogue_window_g2

0x9ba5,	// (0x0005707c) popup_clock_analogue_window_g3

0x9ba5,	// (0x0005707c) popup_clock_analogue_window_g4

0xa77c,	// (0x00057c53) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0005c83e) popup_clock_analogue_window_g

0x9bad,	// (0x00057084) popup_clock_analogue_window_t1

0x9bbb,	// (0x00057092) clock_digital_number_pane_ParamLimits

0x9bbb,	// (0x00057092) clock_digital_number_pane

0x9bc7,	// (0x0005709e) clock_digital_number_pane_cp02_ParamLimits

0x9bc7,	// (0x0005709e) clock_digital_number_pane_cp02

0x9bd3,	// (0x000570aa) clock_digital_number_pane_cp03_ParamLimits

0x9bd3,	// (0x000570aa) clock_digital_number_pane_cp03

0x9bdf,	// (0x000570b6) clock_digital_number_pane_cp04_ParamLimits

0x9bdf,	// (0x000570b6) clock_digital_number_pane_cp04

0x9bef,	// (0x000570c6) clock_digital_separator_pane_ParamLimits

0x9bef,	// (0x000570c6) clock_digital_separator_pane

0x9bfb,	// (0x000570d2) popup_clock_digital_window_t1

0xa77c,	// (0x00057c53) clock_digital_number_pane_g1

0xa77c,	// (0x00057c53) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0005c7ac) clock_digital_number_pane_g

0xa77c,	// (0x00057c53) clock_digital_separator_pane_g1

0xa77c,	// (0x00057c53) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0005c7ac) clock_digital_separator_pane_g

0x9a45,	// (0x00056f1c) bg_popup_window_pane_cp04

0xafe3,	// (0x000584ba) heading_pane_cp03

0xafeb,	// (0x000584c2) listscroll_popup_gms_pane

0xaff3,	// (0x000584ca) grid_large_graphic_popup_pane

0xaffd,	// (0x000584d4) listscroll_popup_gms_pane_g1

0xb005,	// (0x000584dc) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0005c849) listscroll_popup_gms_pane_g

0xaa9e,	// (0x00057f75) scroll_pane_cp014

0xb00d,	// (0x000584e4) cell_large_graphic_popup_pane_ParamLimits

0xb00d,	// (0x000584e4) cell_large_graphic_popup_pane

0xb025,	// (0x000584fc) cell_large_graphic_popup_pane_g1_ParamLimits

0xb025,	// (0x000584fc) cell_large_graphic_popup_pane_g1

0xb031,	// (0x00058508) cell_large_graphic_popup_pane_g2_ParamLimits

0xb031,	// (0x00058508) cell_large_graphic_popup_pane_g2

0xb03d,	// (0x00058514) cell_large_graphic_popup_pane_g3_ParamLimits

0xb03d,	// (0x00058514) cell_large_graphic_popup_pane_g3

0xb04a,	// (0x00058521) cell_large_graphic_popup_pane_g4_ParamLimits

0xb04a,	// (0x00058521) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0005c84e) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0005c84e) cell_large_graphic_popup_pane_g

0xb05a,	// (0x00058531) grid_highlight_pane_cp010

0xa77c,	// (0x00057c53) bg_popup_call_pane_g1

0xb064,	// (0x0005853b) list_single_graphic_popup_conf_pane_ParamLimits

0xb064,	// (0x0005853b) list_single_graphic_popup_conf_pane

0xb077,	// (0x0005854e) list_highlight_pane_cp01

0xb080,	// (0x00058557) list_single_graphic_popup_conf_pane_g1

0xb088,	// (0x0005855f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0005c857) list_single_graphic_popup_conf_pane_g

0xb090,	// (0x00058567) list_single_graphic_popup_conf_pane_t1

0xb09e,	// (0x00058575) linegrid_cams_pane_g1

0x2fa6,	// (0x0005047d) linegrid_cams_pane_g2

0xa834,	// (0x00057d0b) linegrid_cams_pane_g3

0xb0a7,	// (0x0005857e) linegrid_cams_pane_g4

0x2faf,	// (0x00050486) linegrid_cams_pane_g5

0x2fb8,	// (0x0005048f) linegrid_cams_pane_g6

0xa8e4,	// (0x00057dbb) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0005c85c) linegrid_cams_pane_g

0xb0b0,	// (0x00058587) popup_clock_analogue_window

0xb0b0,	// (0x00058587) popup_clock_digital_window

0x9a45,	// (0x00056f1c) popup_phob_thumbnail_window

0xa77c,	// (0x00057c53) call_video_uplink_pane_g1

0xb0b9,	// (0x00058590) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0005c86b) call_video_uplink_pane_g

0xa8b1,	// (0x00057d88) video_uplink_pane

0xb0c1,	// (0x00058598) mce_image_pane_g1

0x2fc3,	// (0x0005049a) mce_image_pane_g2

0x2fcb,	// (0x000504a2) mce_image_pane_g3

0x2fd3,	// (0x000504aa) mce_image_pane_g4

0x2fdd,	// (0x000504b4) mce_image_pane_g5

0x0004,

0xf399,	// (0x0005c870) mce_image_pane_g

0xb0cb,	// (0x000585a2) control_top_pane_stacon_cp01_ParamLimits

0xb0cb,	// (0x000585a2) control_top_pane_stacon_cp01

0xb0df,	// (0x000585b6) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0df,	// (0x000585b6) uni_indicator_pane_stacon_cp01

0xb0f0,	// (0x000585c7) bg_popup_sub_pane_cp03

0x2fe5,	// (0x000504bc) chi_dic_find_pane

0x2fed,	// (0x000504c4) listscroll_chi_dic_pane

0x2ff6,	// (0x000504cd) main_pane_chidic_g1

0xb0fa,	// (0x000585d1) chi_dic_find_pane_t1

0xb108,	// (0x000585df) find_chidic_pane

0xb111,	// (0x000585e8) chi_dic_list_pane_ParamLimits

0xb111,	// (0x000585e8) chi_dic_list_pane

0xb122,	// (0x000585f9) scroll_pane_cp020

0xb12a,	// (0x00058601) find_chidic_pane_t1

0x9a45,	// (0x00056f1c) input_focus_pane_cp06

0x3009,	// (0x000504e0) list_chi_dic_pane_ParamLimits

0x3009,	// (0x000504e0) list_chi_dic_pane

0x301c,	// (0x000504f3) list_chi_dic_pane_t1_ParamLimits

0x301c,	// (0x000504f3) list_chi_dic_pane_t1

0x9a45,	// (0x00056f1c) list_highlight_pane_cp020

0xb139,	// (0x00058610) bg_cale_heading_pane_g1

0x302f,	// (0x00050506) bg_cale_heading_pane_g2

0x3037,	// (0x0005050e) bg_cale_heading_pane_g3

0x303f,	// (0x00050516) bg_cale_heading_pane_g4

0x3049,	// (0x00050520) bg_cale_heading_pane_g5

0x3053,	// (0x0005052a) bg_cale_heading_pane_g6

0x305b,	// (0x00050532) bg_cale_heading_pane_g7

0x3063,	// (0x0005053a) bg_cale_heading_pane_g8

0x306d,	// (0x00050544) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0005c87b) bg_cale_heading_pane_g

0xb139,	// (0x00058610) bg_cale_side_pane_g1

0x3077,	// (0x0005054e) bg_cale_side_pane_g2

0x307f,	// (0x00050556) bg_cale_side_pane_g3

0x3087,	// (0x0005055e) bg_cale_side_pane_g4

0x308f,	// (0x00050566) bg_cale_side_pane_g5

0x3097,	// (0x0005056e) bg_cale_side_pane_g6

0x309f,	// (0x00050576) bg_cale_side_pane_g7

0x30a7,	// (0x0005057e) bg_cale_side_pane_g8

0x30af,	// (0x00050586) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0005c88e) bg_cale_side_pane_g

0x30b7,	// (0x0005058e) popup_call_status_window_ParamLimits

0x30b7,	// (0x0005058e) popup_call_status_window

0xb141,	// (0x00058618) stacon_top_pane

0xb149,	// (0x00058620) status_pane_ParamLimits

0xb149,	// (0x00058620) status_pane

0xb15e,	// (0x00058635) status_small_pane

0xb166,	// (0x0005863d) control_pane

0x9a45,	// (0x00056f1c) stacon_bottom_pane

0xb16e,	// (0x00058645) list_single_mce_smart_pane_t1_ParamLimits

0xb16e,	// (0x00058645) list_single_mce_smart_pane_t1

0xb181,	// (0x00058658) list_single_mce_smart_pane_t2_ParamLimits

0xb181,	// (0x00058658) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0005c8a1) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0005c8a1) list_single_mce_smart_pane_t

0x30fe,	// (0x000505d5) compass_pane

0x3107,	// (0x000505de) main_location2_pane_t1

0x3119,	// (0x000505f0) main_location2_pane_t2

0x312b,	// (0x00050602) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0005c8a6) main_location2_pane_t

0xb1a0,	// (0x00058677) compass_pane_g1_ParamLimits

0xb1a0,	// (0x00058677) compass_pane_g1

0x3171,	// (0x00050648) compass_pane_t1

0x3180,	// (0x00050657) compass_pane_t2

0x0005,

0xf3d8,	// (0x0005c8af) compass_pane_t

0x31c7,	// (0x0005069e) text_secondary_cp61

0xb21e,	// (0x000586f5) navi_pane_cams_g5

0xb29a,	// (0x00058771) navi_pane_im_t1

0xb2e5,	// (0x000587bc) navi_pane_mp_g1_ParamLimits

0xb2e5,	// (0x000587bc) navi_pane_mp_g1

0xb2f9,	// (0x000587d0) navi_pane_mp_g2_ParamLimits

0xb2f9,	// (0x000587d0) navi_pane_mp_g2

0xb305,	// (0x000587dc) navi_pane_mp_g3_ParamLimits

0xb305,	// (0x000587dc) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0005c8c3) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0005c8c3) navi_pane_mp_g

0xb311,	// (0x000587e8) navi_pane_mp_t1

0xb31f,	// (0x000587f6) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0005c8ca) navi_pane_mp_t

0xb38a,	// (0x00058861) navi_pane_vt_g1

0xb311,	// (0x000587e8) navi_pane_vt_t1

0xb392,	// (0x00058869) navi_slider_pane

0xa8f5,	// (0x00057dcc) zooming_pane

0xb3a2,	// (0x00058879) navi_slider_pane_g1

0x9c18,	// (0x000570ef) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0005c8d1) navi_slider_pane_g

0xb3c6,	// (0x0005889d) aid_levels_zoom

0xb3ce,	// (0x000588a5) zooming_pane_g1

0xb3d6,	// (0x000588ad) zooming_pane_g2

0xb3d6,	// (0x000588ad) zooming_pane_g3

0x0002,

0xf409,	// (0x0005c8e0) zooming_pane_g

0xb3de,	// (0x000588b5) level_10_zoom

0xb3e7,	// (0x000588be) level_11_zoom

0xb3f0,	// (0x000588c7) level_1_zoom

0xb3f9,	// (0x000588d0) level_2_zoom

0xb402,	// (0x000588d9) level_3_zoom

0xb40b,	// (0x000588e2) level_4_zoom

0xb414,	// (0x000588eb) level_5_zoom

0xb41d,	// (0x000588f4) level_6_zoom

0xb426,	// (0x000588fd) level_7_zoom

0xb42f,	// (0x00058906) level_8_zoom

0xb438,	// (0x0005890f) level_9_zoom

0xb449,	// (0x00058920) popup_phob_thumbnail_window_g1

0xb451,	// (0x00058928) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0005c8e7) popup_phob_thumbnail_window_g

0xc740,	// (0x00059c17) level_1_location

0xc748,	// (0x00059c1f) level_2_location

0xc750,	// (0x00059c27) level_3_location

0xc758,	// (0x00059c2f) level_4_location

0xa8f5,	// (0x00057dcc) level_5_location

0x3218,	// (0x000506ef) mce_icon_pane_g1

0x3222,	// (0x000506f9) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0005c8ec) mce_icon_pane_g

0x322c,	// (0x00050703) main_mup_pane_g1_ParamLimits

0x322c,	// (0x00050703) main_mup_pane_g1

0x3242,	// (0x00050719) main_mup_pane_g2_ParamLimits

0x3242,	// (0x00050719) main_mup_pane_g2

0x325a,	// (0x00050731) main_mup_pane_g3_ParamLimits

0x325a,	// (0x00050731) main_mup_pane_g3

0x3272,	// (0x00050749) main_mup_pane_g4_ParamLimits

0x3272,	// (0x00050749) main_mup_pane_g4

0x328a,	// (0x00050761) main_mup_pane_g5_ParamLimits

0x328a,	// (0x00050761) main_mup_pane_g5

0x32a6,	// (0x0005077d) main_mup_pane_g6_ParamLimits

0x32a6,	// (0x0005077d) main_mup_pane_g6

0x32be,	// (0x00050795) main_mup_pane_g7_ParamLimits

0x32be,	// (0x00050795) main_mup_pane_g7

0x32d6,	// (0x000507ad) main_mup_pane_g8_ParamLimits

0x32d6,	// (0x000507ad) main_mup_pane_g8

0x32ee,	// (0x000507c5) main_mup_pane_g9_ParamLimits

0x32ee,	// (0x000507c5) main_mup_pane_g9

0x3308,	// (0x000507df) main_mup_pane_g10_ParamLimits

0x3308,	// (0x000507df) main_mup_pane_g10

0x3322,	// (0x000507f9) main_mup_pane_g11_ParamLimits

0x3322,	// (0x000507f9) main_mup_pane_g11

0x3336,	// (0x0005080d) main_mup_pane_g12_ParamLimits

0x3336,	// (0x0005080d) main_mup_pane_g12

0x334c,	// (0x00050823) main_mup_pane_g13_ParamLimits

0x334c,	// (0x00050823) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0005c8f1) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0005c8f1) main_mup_pane_g

0x3360,	// (0x00050837) main_mup_pane_t1_ParamLimits

0x3360,	// (0x00050837) main_mup_pane_t1

0x337a,	// (0x00050851) main_mup_pane_t2_ParamLimits

0x337a,	// (0x00050851) main_mup_pane_t2

0x3392,	// (0x00050869) main_mup_pane_t3_ParamLimits

0x3392,	// (0x00050869) main_mup_pane_t3

0x33aa,	// (0x00050881) main_mup_pane_t4_ParamLimits

0x33aa,	// (0x00050881) main_mup_pane_t4

0x33c8,	// (0x0005089f) main_mup_pane_t5_ParamLimits

0x33c8,	// (0x0005089f) main_mup_pane_t5

0x33dd,	// (0x000508b4) main_mup_pane_t6_ParamLimits

0x33dd,	// (0x000508b4) main_mup_pane_t6

0x0005,

0xf435,	// (0x0005c90c) main_mup_pane_t_ParamLimits

0xf435,	// (0x0005c90c) main_mup_pane_t

0x33ef,	// (0x000508c6) mup_progress_pane_ParamLimits

0x33ef,	// (0x000508c6) mup_progress_pane

0x33fb,	// (0x000508d2) mup_visualizer_pane_ParamLimits

0x33fb,	// (0x000508d2) mup_visualizer_pane

0x342f,	// (0x00050906) mup_volume_pane_ParamLimits

0x342f,	// (0x00050906) mup_volume_pane

0xb2a8,	// (0x0005877f) mup_visualizer_pane_g1_ParamLimits

0xb2a8,	// (0x0005877f) mup_visualizer_pane_g1

0xb2a8,	// (0x0005877f) mup_visualizer_pane_g2_ParamLimits

0xb2a8,	// (0x0005877f) mup_visualizer_pane_g2

0xb1a0,	// (0x00058677) mup_visualizer_pane_g3_ParamLimits

0xb1a0,	// (0x00058677) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0005c919) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0005c919) mup_visualizer_pane_g

0xa77c,	// (0x00057c53) mup_volume_pane_g1

0xb461,	// (0x00058938) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0005c920) mup_volume_pane_g

0xa77c,	// (0x00057c53) mup_progress_pane_g1

0xb46a,	// (0x00058941) mup_progress_pane_g2

0xb473,	// (0x0005894a) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0005c925) mup_progress_pane_g

0x9a45,	// (0x00056f1c) bg_popup_window_pane_cp05

0xb47c,	// (0x00058953) heading_pane_cp02_ParamLimits

0xb47c,	// (0x00058953) heading_pane_cp02

0xb496,	// (0x0005896d) list_popup_blid_pane

0xb49e,	// (0x00058975) list_blid_sat_info_pane_ParamLimits

0xb49e,	// (0x00058975) list_blid_sat_info_pane

0xb4b1,	// (0x00058988) list_blid_sat_info_pane_g1

0xb4b9,	// (0x00058990) list_blid_sat_info_pane_t1

0x3545,	// (0x00050a1c) mup_equalizer_pane_ParamLimits

0x3545,	// (0x00050a1c) mup_equalizer_pane

0x355e,	// (0x00050a35) mup_equalizer_pane_cp1_ParamLimits

0x355e,	// (0x00050a35) mup_equalizer_pane_cp1

0x357b,	// (0x00050a52) mup_equalizer_pane_cp2_ParamLimits

0x357b,	// (0x00050a52) mup_equalizer_pane_cp2

0x3598,	// (0x00050a6f) mup_equalizer_pane_cp3_ParamLimits

0x3598,	// (0x00050a6f) mup_equalizer_pane_cp3

0x35b9,	// (0x00050a90) mup_equalizer_pane_cp4_ParamLimits

0x35b9,	// (0x00050a90) mup_equalizer_pane_cp4

0x35da,	// (0x00050ab1) mup_equalizer_pane_cp5

0x35ee,	// (0x00050ac5) mup_equalizer_pane_cp6

0x3602,	// (0x00050ad9) mup_equalizer_pane_cp7

0xc65e,	// (0x00059b35) bg_popup_call_poc_act_pane_g9

0xc666,	// (0x00059b3d) bg_popup_call_poc_act_pane_g10

0xc66e,	// (0x00059b45) bg_popup_call_poc_act_pane_g11

0x000a,

0xa643,	// (0x00057b1a) mup_scale_pane

0xa77c,	// (0x00057c53) mup_scale_pane_g1

0xb4c7,	// (0x0005899e) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0005c941) mup_scale_pane_g

0xb4eb,	// (0x000589c2) msg_data_pane

0xb4f3,	// (0x000589ca) scroll_pane_cp017

0x3628,	// (0x00050aff) bg_list_pane_cp04_ParamLimits

0x3628,	// (0x00050aff) bg_list_pane_cp04

0xb4fb,	// (0x000589d2) msg_data_pane_g1

0x3648,	// (0x00050b1f) msg_data_pane_g2

0x3650,	// (0x00050b27) msg_data_pane_g3

0x3658,	// (0x00050b2f) msg_data_pane_g4

0x3660,	// (0x00050b37) msg_data_pane_g5

0x3668,	// (0x00050b3f) msg_data_pane_g6

0x3670,	// (0x00050b47) msg_data_pane_g7

0x0006,

0xf479,	// (0x0005c950) msg_data_pane_g

0x0137,	// (0x0004d60e) msg_text_pane_ParamLimits

0x0137,	// (0x0004d60e) msg_text_pane

0x3678,	// (0x00050b4f) qrid_highlight_pane_cp011_ParamLimits

0x3678,	// (0x00050b4f) qrid_highlight_pane_cp011

0x9a45,	// (0x00056f1c) msg_body_pane

0x9a45,	// (0x00056f1c) msg_header_pane

0xb50c,	// (0x000589e3) input_focus_pane_cp07

0x368e,	// (0x00050b65) msg_header_pane_t1_ParamLimits

0x368e,	// (0x00050b65) msg_header_pane_t1

0x36a0,	// (0x00050b77) msg_header_pane_t2_ParamLimits

0x36a0,	// (0x00050b77) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0005c964) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0005c964) msg_header_pane_t

0xb521,	// (0x000589f8) msg_body_pane_g1

0x36b2,	// (0x00050b89) msg_body_pane_t1_ParamLimits

0x36b2,	// (0x00050b89) msg_body_pane_t1

0x36e3,	// (0x00050bba) msg_body_pane_t2_ParamLimits

0x36e3,	// (0x00050bba) msg_body_pane_t2

0x36f5,	// (0x00050bcc) msg_body_pane_t3_ParamLimits

0x36f5,	// (0x00050bcc) msg_body_pane_t3

0x0002,

0xf492,	// (0x0005c969) msg_body_pane_t_ParamLimits

0xf492,	// (0x0005c969) msg_body_pane_t

0x3741,	// (0x00050c18) main_viewer_pane_g1_ParamLimits

0x3741,	// (0x00050c18) main_viewer_pane_g1

0x374f,	// (0x00050c26) main_viewer_pane_g2_ParamLimits

0x374f,	// (0x00050c26) main_viewer_pane_g2

0x375d,	// (0x00050c34) main_viewer_pane_g3_ParamLimits

0x375d,	// (0x00050c34) main_viewer_pane_g3

0x376c,	// (0x00050c43) main_viewer_pane_g4_ParamLimits

0x376c,	// (0x00050c43) main_viewer_pane_g4

0x9c42,	// (0x00057119) main_viewer_pane_g5_ParamLimits

0x9c42,	// (0x00057119) main_viewer_pane_g5

0x9c42,	// (0x00057119) main_viewer_pane_g7_ParamLimits

0x9c42,	// (0x00057119) main_viewer_pane_g7

0x9c54,	// (0x0005712b) main_viewer_pane_g8_ParamLimits

0x9c54,	// (0x0005712b) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0005c979) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0005c979) main_viewer_pane_g

0xb529,	// (0x00058a00) viewer_content_pane_ParamLimits

0xb529,	// (0x00058a00) viewer_content_pane

0x37a8,	// (0x00050c7f) main_postcard_pane_g1_ParamLimits

0x37a8,	// (0x00050c7f) main_postcard_pane_g1

0x37be,	// (0x00050c95) main_postcard_pane_g2_ParamLimits

0x37be,	// (0x00050c95) main_postcard_pane_g2

0x37d4,	// (0x00050cab) main_postcard_pane_g3_ParamLimits

0x37d4,	// (0x00050cab) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0005c98a) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0005c98a) main_postcard_pane_g

0x37eb,	// (0x00050cc2) main_postcard_pane_g4

0xc840,	// (0x00059d17) smil_status_volume_pane_g2

0x382e,	// (0x00050d05) postcard_pane_ParamLimits

0x382e,	// (0x00050d05) postcard_pane

0xb537,	// (0x00058a0e) postcard_pane_g1_ParamLimits

0xb537,	// (0x00058a0e) postcard_pane_g1

0x3870,	// (0x00050d47) postcard_pane_g2_ParamLimits

0x3870,	// (0x00050d47) postcard_pane_g2

0x387c,	// (0x00050d53) postcard_pane_g3_ParamLimits

0x387c,	// (0x00050d53) postcard_pane_g3

0xb545,	// (0x00058a1c) postcard_pane_g4_ParamLimits

0xb545,	// (0x00058a1c) postcard_pane_g4

0x3888,	// (0x00050d5f) postcard_pane_g5_ParamLimits

0x3888,	// (0x00050d5f) postcard_pane_g5

0x389d,	// (0x00050d74) postcard_pane_g6_ParamLimits

0x389d,	// (0x00050d74) postcard_pane_g6

0xb537,	// (0x00058a0e) postcard_pane_g7_ParamLimits

0xb537,	// (0x00058a0e) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0005c997) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0005c997) postcard_pane_g

0x38b1,	// (0x00050d88) main_mp2_pane_g1_ParamLimits

0x38b1,	// (0x00050d88) main_mp2_pane_g1

0x38bd,	// (0x00050d94) main_mp2_pane_g2_ParamLimits

0x38bd,	// (0x00050d94) main_mp2_pane_g2

0x38c9,	// (0x00050da0) main_mp2_pane_g3_ParamLimits

0x38c9,	// (0x00050da0) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0005c9a6) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0005c9a6) main_mp2_pane_g

0x38d5,	// (0x00050dac) main_mp2_pane_t1_ParamLimits

0x38d5,	// (0x00050dac) main_mp2_pane_t1

0x38ea,	// (0x00050dc1) main_mp2_pane_t2_ParamLimits

0x38ea,	// (0x00050dc1) main_mp2_pane_t2

0x38fc,	// (0x00050dd3) main_mp2_pane_t3_ParamLimits

0x38fc,	// (0x00050dd3) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0005c9ad) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0005c9ad) main_mp2_pane_t

0xb553,	// (0x00058a2a) pec_content_pane_ParamLimits

0xb553,	// (0x00058a2a) pec_content_pane

0xaa9e,	// (0x00057f75) scroll_pane_cp015

0xb565,	// (0x00058a3c) pec_attribute_pane_ParamLimits

0xb565,	// (0x00058a3c) pec_attribute_pane

0x390e,	// (0x00050de5) pec_content_pane_g1_ParamLimits

0x390e,	// (0x00050de5) pec_content_pane_g1

0xb575,	// (0x00058a4c) pec_content_pane_t1_ParamLimits

0xb575,	// (0x00058a4c) pec_content_pane_t1

0xb587,	// (0x00058a5e) pec_content_pane_t2_ParamLimits

0xb587,	// (0x00058a5e) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0005c9b4) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0005c9b4) pec_content_pane_t

0x391a,	// (0x00050df1) list_single_graphic_pane_cp01_ParamLimits

0x391a,	// (0x00050df1) list_single_graphic_pane_cp01

0xa643,	// (0x00057b1a) bg_popup_sub_pane_cp04

0xb599,	// (0x00058a70) popup_mup_playback_window_g1

0xb5a5,	// (0x00058a7c) popup_mup_playback_window_t1

0xb5ba,	// (0x00058a91) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0005c9b9) popup_mup_playback_window_t

0xb5f1,	// (0x00058ac8) main_image_pane_g1_ParamLimits

0xb5f1,	// (0x00058ac8) main_image_pane_g1

0xb634,	// (0x00058b0b) scroll_pane_cp018_ParamLimits

0xb634,	// (0x00058b0b) scroll_pane_cp018

0xb64c,	// (0x00058b23) scroll_pane_cp016_ParamLimits

0xb64c,	// (0x00058b23) scroll_pane_cp016

0x39e9,	// (0x00050ec0) smil2_image_pane_ParamLimits

0x39e9,	// (0x00050ec0) smil2_image_pane

0x3a1d,	// (0x00050ef4) smil2_root_pane_ParamLimits

0x3a1d,	// (0x00050ef4) smil2_root_pane

0x3a55,	// (0x00050f2c) smil2_text_pane_ParamLimits

0x3a55,	// (0x00050f2c) smil2_text_pane

0x9a45,	// (0x00056f1c) bg_list_pane_cp06

0xb688,	// (0x00058b5f) grid_radio_pane

0x9a45,	// (0x00056f1c) bg_popup_window_pane_cp06

0xb690,	// (0x00058b67) main_fmradio_pane_t1

0xafe3,	// (0x000584ba) heading_pane_cp04

0xb69e,	// (0x00058b75) main_fmradio_pane_t2

0xc676,	// (0x00059b4d) popup_cale_lunar_info_window_g1

0xb6ac,	// (0x00058b83) main_fmradio_pane_t3

0xc67e,	// (0x00059b55) popup_cale_lunar_info_window_g2

0xb6ba,	// (0x00058b91) main_fmradio_pane_t4

0x0001,

0xb6c8,	// (0x00058b9f) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0005ca94) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0005c9ce) main_fmradio_pane_t

0xb6d6,	// (0x00058bad) wait_bar_pane_cp03

0xb6de,	// (0x00058bb5) cell_fmradio_pane_ParamLimits

0xb6de,	// (0x00058bb5) cell_fmradio_pane

0xb537,	// (0x00058a0e) cell_fmradio_pane_g1_ParamLimits

0xb537,	// (0x00058a0e) cell_fmradio_pane_g1

0x9a45,	// (0x00056f1c) grid_highlight_pane_cp011

0xb6f1,	// (0x00058bc8) poc_content_pane_ParamLimits

0xb6f1,	// (0x00058bc8) poc_content_pane

0xb703,	// (0x00058bda) scroll_pane_cp019

0x3ad5,	// (0x00050fac) popup_call_poc_act_window_ParamLimits

0x3ad5,	// (0x00050fac) popup_call_poc_act_window

0x3af9,	// (0x00050fd0) popup_call_poc_inact_window_ParamLimits

0x3af9,	// (0x00050fd0) popup_call_poc_inact_window

0xf594,	// (0x0005ca6b) bg_popup_call_poc_act_pane_g

0xc5ee,	// (0x00059ac5) bg_popup_call_poc_inact_pane_g1

0xc5f6,	// (0x00059acd) bg_popup_call_poc_inact_pane_g2

0xb70b,	// (0x00058be2) popup_call_poc_act_window_g2

0xc5fe,	// (0x00059ad5) bg_popup_call_poc_inact_pane_g3

0xc606,	// (0x00059add) bg_popup_call_poc_inact_pane_g4

0xc60e,	// (0x00059ae5) bg_popup_call_poc_inact_pane_g5

0xb713,	// (0x00058bea) popup_call_poc_act_window_t1_ParamLimits

0xb713,	// (0x00058bea) popup_call_poc_act_window_t1

0xb73b,	// (0x00058c12) popup_call_poc_act_window_t2_ParamLimits

0xb73b,	// (0x00058c12) popup_call_poc_act_window_t2

0xb763,	// (0x00058c3a) popup_call_poc_act_window_t3_ParamLimits

0xb763,	// (0x00058c3a) popup_call_poc_act_window_t3

0xb78b,	// (0x00058c62) popup_call_poc_act_window_t4_ParamLimits

0xb78b,	// (0x00058c62) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0005c9d9) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0005c9d9) popup_call_poc_act_window_t

0xc616,	// (0x00059aed) bg_popup_call_poc_inact_pane_g6

0xc61e,	// (0x00059af5) bg_popup_call_poc_inact_pane_g7

0xc626,	// (0x00059afd) bg_popup_call_poc_inact_pane_g8

0xb79d,	// (0x00058c74) popup_call_poc_inact_window_g2

0xc62e,	// (0x00059b05) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0005ca58) bg_popup_call_poc_inact_pane_g

0xb7a5,	// (0x00058c7c) popup_call_poc_inact_window_t1_ParamLimits

0xb7a5,	// (0x00058c7c) popup_call_poc_inact_window_t1

0xb7ba,	// (0x00058c91) popup_call_poc_inact_window_t2_ParamLimits

0xb7ba,	// (0x00058c91) popup_call_poc_inact_window_t2

0xb7cf,	// (0x00058ca6) popup_call_poc_inact_window_t3_ParamLimits

0xb7cf,	// (0x00058ca6) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0005c9e2) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0005c9e2) popup_call_poc_inact_window_t

0xc7b3,	// (0x00059c8a) context_pane_ParamLimits

0x431a,	// (0x000517f1) signal_pane_ParamLimits

0xa8f5,	// (0x00057dcc) main_call2_pane

0x9c99,	// (0x00057170) popup_phob_thumbnail2_window_ParamLimits

0x9c99,	// (0x00057170) popup_phob_thumbnail2_window

0x9c2a,	// (0x00057101) aid_hotspot_pointer_arrow_pane

0x9c32,	// (0x00057109) aid_hotspot_pointer_hand_pane

0x3e44,	// (0x0005131b) phob_pre_status_pane_g5

0x1a56,	// (0x0004ef2d) cams_zoom_pane_ParamLimits

0x1a65,	// (0x0004ef3c) image_vga_pane_ParamLimits

0x1a7f,	// (0x0004ef56) main_camera_pane_g1_ParamLimits

0x1a91,	// (0x0004ef68) main_camera_pane_g2_ParamLimits

0x1aa1,	// (0x0004ef78) main_camera_pane_g3_ParamLimits

0x1ab3,	// (0x0004ef8a) main_camera_pane_g4_ParamLimits

0x1ac5,	// (0x0004ef9c) main_camera_pane_g5_ParamLimits

0x1ad7,	// (0x0004efae) main_camera_pane_g6_ParamLimits

0x1ae9,	// (0x0004efc0) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005c6e1) main_camera_pane_g_ParamLimits

0x1afb,	// (0x0004efd2) main_camera_pane_t1_ParamLimits

0x1b11,	// (0x0004efe8) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005c6f2) main_camera_pane_t_ParamLimits

0xa643,	// (0x00057b1a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa643,	// (0x00057b1a) bg_popup_preview_window_pane_cp01

0xb7e4,	// (0x00058cbb) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e4,	// (0x00058cbb) popup_phob_thumbnail2_window_g1

0x9a45,	// (0x00056f1c) call2_cli_visual_pane

0x3b2d,	// (0x00051004) popup_call2_audio_conf_window_ParamLimits

0x3b2d,	// (0x00051004) popup_call2_audio_conf_window

0x3b4d,	// (0x00051024) popup_call2_audio_first_window_ParamLimits

0x3b4d,	// (0x00051024) popup_call2_audio_first_window

0x3be3,	// (0x000510ba) popup_call2_audio_in_window_ParamLimits

0x3be3,	// (0x000510ba) popup_call2_audio_in_window

0x3c2b,	// (0x00051102) popup_call2_audio_out_window_ParamLimits

0x3c2b,	// (0x00051102) popup_call2_audio_out_window

0x3c95,	// (0x0005116c) popup_call2_audio_second_window_ParamLimits

0x3c95,	// (0x0005116c) popup_call2_audio_second_window

0x3cfb,	// (0x000511d2) popup_call2_audio_wait_window_ParamLimits

0x3cfb,	// (0x000511d2) popup_call2_audio_wait_window

0x9a45,	// (0x00056f1c) bg_popup_call2_act_pane_cp03

0xa625,	// (0x00057afc) list_conf_pane_cp

0xb7f0,	// (0x00058cc7) popup_call2_audio_conf_window_t1

0xb7fe,	// (0x00058cd5) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7fe,	// (0x00058cd5) list_single_graphic_popup_conf2_pane

0xb077,	// (0x0005854e) list_highlight_pane_cp04

0xb811,	// (0x00058ce8) list_single_graphic_popup_conf2_pane_g1

0xb088,	// (0x0005855f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0005c9e9) list_single_graphic_popup_conf2_pane_g

0xb81b,	// (0x00058cf2) list_single_graphic_popup_conf2_pane_t1

0xb829,	// (0x00058d00) bg_popup_call2_act_pane_cp01_ParamLimits

0xb829,	// (0x00058d00) bg_popup_call2_act_pane_cp01

0xb8b3,	// (0x00058d8a) call_type_pane_cp05_ParamLimits

0xb8b3,	// (0x00058d8a) call_type_pane_cp05

0xb907,	// (0x00058dde) popup_call2_audio_second_window_g1_ParamLimits

0xb907,	// (0x00058dde) popup_call2_audio_second_window_g1

0xb95b,	// (0x00058e32) popup_call2_audio_second_window_g2_ParamLimits

0xb95b,	// (0x00058e32) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0005c9ee) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0005c9ee) popup_call2_audio_second_window_g

0xb9c0,	// (0x00058e97) popup_call2_audio_second_window_t1_ParamLimits

0xb9c0,	// (0x00058e97) popup_call2_audio_second_window_t1

0xba7b,	// (0x00058f52) popup_call2_audio_second_window_t2_ParamLimits

0xba7b,	// (0x00058f52) popup_call2_audio_second_window_t2

0xbace,	// (0x00058fa5) popup_call2_audio_second_window_t3_ParamLimits

0xbace,	// (0x00058fa5) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0005c9f5) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0005c9f5) popup_call2_audio_second_window_t

0x9a45,	// (0x00056f1c) bg_popup_call2_in_pane_cp02

0x9a4f,	// (0x00056f26) call_type_pane_cp04

0x9a57,	// (0x00056f2e) popup_call2_audio_wait_window_g1

0x9a5f,	// (0x00056f36) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005c5d0) popup_call2_audio_wait_window_g

0x9a67,	// (0x00056f3e) popup_call2_audio_wait_window_t3

0xbbc1,	// (0x00059098) bg_popup_call2_act_pane_ParamLimits

0xbbc1,	// (0x00059098) bg_popup_call2_act_pane

0xbc81,	// (0x00059158) call_type_pane_cp03_ParamLimits

0xbc81,	// (0x00059158) call_type_pane_cp03

0xbce5,	// (0x000591bc) popup_call2_audio_first_window_g1_ParamLimits

0xbce5,	// (0x000591bc) popup_call2_audio_first_window_g1

0xbd55,	// (0x0005922c) popup_call2_audio_first_window_g2_ParamLimits

0xbd55,	// (0x0005922c) popup_call2_audio_first_window_g2

0xb2a8,	// (0x0005877f) popup_call2_audio_first_window_g3_ParamLimits

0xb2a8,	// (0x0005877f) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0005c9fe) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0005c9fe) popup_call2_audio_first_window_g

0xbe33,	// (0x0005930a) popup_call2_audio_first_window_t1_ParamLimits

0xbe33,	// (0x0005930a) popup_call2_audio_first_window_t1

0xbf36,	// (0x0005940d) popup_call2_audio_first_window_t4_ParamLimits

0xbf36,	// (0x0005940d) popup_call2_audio_first_window_t4

0xc019,	// (0x000594f0) popup_call2_audio_first_window_t5_ParamLimits

0xc019,	// (0x000594f0) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0005ca09) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0005ca09) popup_call2_audio_first_window_t

0xa63b,	// (0x00057b12) bg_popup_call2_act_pane_g1

0xc686,	// (0x00059b5d) popup_cale_lunar_info_window_t1

0xc694,	// (0x00059b6b) popup_cale_lunar_info_window_t2

0xc6a2,	// (0x00059b79) popup_cale_lunar_info_window_t3

0x9a45,	// (0x00056f1c) bg_popup_call2_bubble_pane

0xc11a,	// (0x000595f1) bg_popup_call2_in_pane_cp01_ParamLimits

0xc11a,	// (0x000595f1) bg_popup_call2_in_pane_cp01

0x9721,	// (0x00056bf8) call_type_pane_cp02

0xc162,	// (0x00059639) popup_call2_audio_out_window_g1_ParamLimits

0xc162,	// (0x00059639) popup_call2_audio_out_window_g1

0xc18e,	// (0x00059665) popup_call2_audio_out_window_g2_ParamLimits

0xc18e,	// (0x00059665) popup_call2_audio_out_window_g2

0xc1b6,	// (0x0005968d) popup_call2_audio_out_window_g3_ParamLimits

0xc1b6,	// (0x0005968d) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0005ca12) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0005ca12) popup_call2_audio_out_window_g

0xc1f1,	// (0x000596c8) popup_call2_audio_out_window_t1_ParamLimits

0xc1f1,	// (0x000596c8) popup_call2_audio_out_window_t1

0xc250,	// (0x00059727) popup_call2_audio_out_window_t2_ParamLimits

0xc250,	// (0x00059727) popup_call2_audio_out_window_t2

0xc2a4,	// (0x0005977b) popup_call2_audio_out_window_t3_ParamLimits

0xc2a4,	// (0x0005977b) popup_call2_audio_out_window_t3

0xc2ba,	// (0x00059791) popup_call2_audio_out_window_t4_ParamLimits

0xc2ba,	// (0x00059791) popup_call2_audio_out_window_t4

0xc2d0,	// (0x000597a7) popup_call2_audio_out_window_t5_ParamLimits

0xc2d0,	// (0x000597a7) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0005ca1b) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0005ca1b) popup_call2_audio_out_window_t

0xc334,	// (0x0005980b) bg_popup_call2_in_pane_ParamLimits

0xc334,	// (0x0005980b) bg_popup_call2_in_pane

0xc390,	// (0x00059867) popup_call2_audio_in_window_g1_ParamLimits

0xc390,	// (0x00059867) popup_call2_audio_in_window_g1

0xc3c8,	// (0x0005989f) popup_call2_audio_in_window_g2_ParamLimits

0xc3c8,	// (0x0005989f) popup_call2_audio_in_window_g2

0xc400,	// (0x000598d7) popup_call2_audio_in_window_g3_ParamLimits

0xc400,	// (0x000598d7) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0005ca28) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0005ca28) popup_call2_audio_in_window_g

0xc458,	// (0x0005992f) popup_call2_audio_in_window_t1_ParamLimits

0xc458,	// (0x0005992f) popup_call2_audio_in_window_t1

0xc4d8,	// (0x000599af) popup_call2_audio_in_window_t2_ParamLimits

0xc4d8,	// (0x000599af) popup_call2_audio_in_window_t2

0xc558,	// (0x00059a2f) popup_call2_audio_in_window_t3_ParamLimits

0xc558,	// (0x00059a2f) popup_call2_audio_in_window_t3

0xc572,	// (0x00059a49) popup_call2_audio_in_window_t4_ParamLimits

0xc572,	// (0x00059a49) popup_call2_audio_in_window_t4

0xc584,	// (0x00059a5b) popup_call2_audio_in_window_t5_ParamLimits

0xc584,	// (0x00059a5b) popup_call2_audio_in_window_t5

0xc599,	// (0x00059a70) popup_call2_audio_in_window_t6_ParamLimits

0xc599,	// (0x00059a70) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0005ca31) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0005ca31) popup_call2_audio_in_window_t

0xa63b,	// (0x00057b12) bg_popup_call2_in_pane_g1

0xc6b0,	// (0x00059b87) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0005ca99) popup_cale_lunar_info_window_t

0xa643,	// (0x00057b1a) bg_popup_call2_rect_pane_ParamLimits

0xa643,	// (0x00057b1a) bg_popup_call2_rect_pane

0x9a45,	// (0x00056f1c) call2_cli_visual_graphic_pane

0x9a45,	// (0x00056f1c) call2_cli_visual_text_pane

0x9cc0,	// (0x00057197) smil_status_volume_pane_g3

0x0002,

0xa77c,	// (0x00057c53) call2_cli_visual_graphic_pane_g1

0xa77c,	// (0x00057c53) call2_cli_visual_graphic_pane_g2

0xa77c,	// (0x00057c53) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0005ca3e) call2_cli_visual_graphic_pane_g

0xc5ae,	// (0x00059a85) bg_popup_call2_rect_pane_g1

0xa81a,	// (0x00057cf1) bg_popup_call2_rect_pane_g2

0xc5b6,	// (0x00059a8d) bg_popup_call2_rect_pane_g3

0xc5be,	// (0x00059a95) bg_popup_call2_rect_pane_g4

0xc5c6,	// (0x00059a9d) bg_popup_call2_rect_pane_g5

0xc5ce,	// (0x00059aa5) bg_popup_call2_rect_pane_g6

0xc5d6,	// (0x00059aad) bg_popup_call2_rect_pane_g7

0xc5de,	// (0x00059ab5) bg_popup_call2_rect_pane_g8

0xc5e6,	// (0x00059abd) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0005ca45) bg_popup_call2_rect_pane_g

0xc5ee,	// (0x00059ac5) bg_popup_call2_bubble_pane_g1

0xc5f6,	// (0x00059acd) bg_popup_call2_bubble_pane_g2

0xc5fe,	// (0x00059ad5) bg_popup_call2_bubble_pane_g3

0xc606,	// (0x00059add) bg_popup_call2_bubble_pane_g4

0xc60e,	// (0x00059ae5) bg_popup_call2_bubble_pane_g5

0xc616,	// (0x00059aed) bg_popup_call2_bubble_pane_g6

0xc61e,	// (0x00059af5) bg_popup_call2_bubble_pane_g7

0xc626,	// (0x00059afd) bg_popup_call2_bubble_pane_g8

0xc62e,	// (0x00059b05) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0005ca58) bg_popup_call2_bubble_pane_g

0x1398,	// (0x0004e86f) aid_cale_week_size_cell_pane

0x1b29,	// (0x0004f000) aid_cams_cif_uncrop_pane_ParamLimits

0x1b29,	// (0x0004f000) aid_cams_cif_uncrop_pane

0x1cde,	// (0x0004f1b5) aid_cams_size_cell_ParamLimits

0x1cde,	// (0x0004f1b5) aid_cams_size_cell

0x1cf2,	// (0x0004f1c9) grid_cams_pane_ParamLimits

0x1d0c,	// (0x0004f1e3) linegrid_cams_pane_ParamLimits

0x1e8c,	// (0x0004f363) call_video_pane_t1

0x1eaa,	// (0x0004f381) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005c745) call_video_pane_t

0x22d9,	// (0x0004f7b0) aid_cale_month_size_cell_pane_ParamLimits

0x22d9,	// (0x0004f7b0) aid_cale_month_size_cell_pane

0xf60b,	// (0x0005cae2) smil_status_volume_pane_g

0x9ccd,	// (0x000571a4) volume_smil_pane_ParamLimits

0x95dc,	// (0x00056ab3) aid_popup2_width_pane

0x12ef,	// (0x0004e7c6) cell_qdial_pane_g4_ParamLimits

0x12ef,	// (0x0004e7c6) cell_qdial_pane_g4

0x3151,	// (0x00050628) aid_blid_cardinal_pane_ParamLimits

0x315d,	// (0x00050634) aid_blid_destination_pane_ParamLimits

0x315d,	// (0x00050634) aid_blid_destination_pane

0xa643,	// (0x00057b1a) bg_popup_call_poc_act_pane_ParamLimits

0xa643,	// (0x00057b1a) bg_popup_call_poc_act_pane

0xa643,	// (0x00057b1a) bg_popup_call_poc_inact_pane_ParamLimits

0xa643,	// (0x00057b1a) bg_popup_call_poc_inact_pane

0xc636,	// (0x00059b0d) bg_popup_call_poc_act_pane_g1

0xc63e,	// (0x00059b15) bg_popup_call_poc_act_pane_g2

0xc646,	// (0x00059b1d) bg_popup_call_poc_act_pane_g3

0xc606,	// (0x00059add) bg_popup_call_poc_act_pane_g4

0xc60e,	// (0x00059ae5) bg_popup_call_poc_act_pane_g5

0xc64e,	// (0x00059b25) bg_popup_call_poc_act_pane_g6

0xc61e,	// (0x00059af5) bg_popup_call_poc_act_pane_g7

0xc656,	// (0x00059b2d) bg_popup_call_poc_act_pane_g8

0x9a45,	// (0x00056f1c) main_usb_pane

0x9c74,	// (0x0005714b) popup_cale_lunar_info_window

0x2174,	// (0x0004f64b) im_reading_pane_t1_ParamLimits

0xa9f6,	// (0x00057ecd) list_im_pane_ParamLimits

0xaa07,	// (0x00057ede) scroll_pane_cp07_ParamLimits

0x9a45,	// (0x00056f1c) grid_highlight_pane_cp012

0xa643,	// (0x00057b1a) mup_scale_pane_ParamLimits

0xb537,	// (0x00058a0e) main_usb_pane_g1_ParamLimits

0xb537,	// (0x00058a0e) main_usb_pane_g1

0x3d59,	// (0x00051230) main_usb_pane_g2_ParamLimits

0x3d59,	// (0x00051230) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0005ca82) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0005ca82) main_usb_pane_g

0x3d6f,	// (0x00051246) main_usb_pane_t1_ParamLimits

0x3d6f,	// (0x00051246) main_usb_pane_t1

0x3d81,	// (0x00051258) main_usb_pane_t2_ParamLimits

0x3d81,	// (0x00051258) main_usb_pane_t2

0x3d93,	// (0x0005126a) main_usb_pane_t3_ParamLimits

0x3d93,	// (0x0005126a) main_usb_pane_t3

0x3da5,	// (0x0005127c) main_usb_pane_t4_ParamLimits

0x3da5,	// (0x0005127c) main_usb_pane_t4

0x3db7,	// (0x0005128e) main_usb_pane_t5_ParamLimits

0x3db7,	// (0x0005128e) main_usb_pane_t5

0x3dc9,	// (0x000512a0) main_usb_pane_t6_ParamLimits

0x3dc9,	// (0x000512a0) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0005ca87) main_usb_pane_t_ParamLimits

0x30fe,	// (0x000505d5) aid_text_placing

0x3107,	// (0x000505de) main_location2_pane_t1_ParamLimits

0x3119,	// (0x000505f0) main_location2_pane_t2_ParamLimits

0x312b,	// (0x00050602) main_location2_pane_t3_ParamLimits

0x313f,	// (0x00050616) main_location2_pane_t4_ParamLimits

0x313f,	// (0x00050616) main_location2_pane_t4

0xf3cf,	// (0x0005c8a6) main_location2_pane_t_ParamLimits

0xa67f,	// (0x00057b56) find_pinb_pane_g2_ParamLimits

0xa67f,	// (0x00057b56) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0005c5f6) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0005c5f6) find_pinb_pane_g

0xa68b,	// (0x00057b62) find_pinb_pane_t1_ParamLimits

0xa69d,	// (0x00057b74) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0005c5fb) find_pinb_pane_t_ParamLimits

0x9a45,	// (0x00056f1c) main_call3_pane

0x27bc,	// (0x0004fc93) cale_month_day_heading_pane_t1_ParamLimits

0x2842,	// (0x0004fd19) cale_month_day_heading_pane_t2_ParamLimits

0x28d3,	// (0x0004fdaa) cale_month_day_heading_pane_t3_ParamLimits

0x2964,	// (0x0004fe3b) cale_month_day_heading_pane_t4_ParamLimits

0x29fd,	// (0x0004fed4) cale_month_day_heading_pane_t5_ParamLimits

0x2a9e,	// (0x0004ff75) cale_month_day_heading_pane_t6_ParamLimits

0x2b3f,	// (0x00050016) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005c77d) cale_month_day_heading_pane_t_ParamLimits

0xac51,	// (0x00058128) smil_status_volume_pane

0x384c,	// (0x00050d23) postcard_address_pane_ParamLimits

0x384c,	// (0x00050d23) postcard_address_pane

0x385e,	// (0x00050d35) postcard_message_pane_ParamLimits

0x385e,	// (0x00050d35) postcard_message_pane

0x3d35,	// (0x0005120c) call2_cli_visual_pane_t1_ParamLimits

0x3d35,	// (0x0005120c) call2_cli_visual_pane_t1

0x4549,	// (0x00051a20) postcard_message_pane_t1_ParamLimits

0x4549,	// (0x00051a20) postcard_message_pane_t1

0x4532,	// (0x00051a09) postcard_address_pane_t1_ParamLimits

0x4532,	// (0x00051a09) postcard_address_pane_t1

0x451e,	// (0x000519f5) popup_call3_audio_in_window_ParamLimits

0x451e,	// (0x000519f5) popup_call3_audio_in_window

0x43ab,	// (0x00051882) bg_popup_call3_in_pane_ParamLimits

0x43ab,	// (0x00051882) bg_popup_call3_in_pane

0x441f,	// (0x000518f6) popup_call3_audio_in_window_g1_ParamLimits

0x441f,	// (0x000518f6) popup_call3_audio_in_window_g1

0x443f,	// (0x00051916) popup_call3_audio_in_window_g2_ParamLimits

0x443f,	// (0x00051916) popup_call3_audio_in_window_g2

0x445f,	// (0x00051936) popup_call3_audio_in_window_g3_ParamLimits

0x445f,	// (0x00051936) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0005cae9) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0005cae9) popup_call3_audio_in_window_g

0x4490,	// (0x00051967) popup_call3_audio_in_window_t1_ParamLimits

0x4490,	// (0x00051967) popup_call3_audio_in_window_t1

0x44ce,	// (0x000519a5) popup_call3_audio_in_window_t2_ParamLimits

0x44ce,	// (0x000519a5) popup_call3_audio_in_window_t2

0x450c,	// (0x000519e3) popup_call3_audio_in_window_t3_ParamLimits

0x450c,	// (0x000519e3) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0005caf2) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0005caf2) popup_call3_audio_in_window_t

0xa8f5,	// (0x00057dcc) bg_popup_call3_rect_pane

0xc5ae,	// (0x00059a85) bg_popup_call3_rect_pane_g1

0xa81a,	// (0x00057cf1) bg_popup_call3_rect_pane_g2

0xc5b6,	// (0x00059a8d) bg_popup_call3_rect_pane_g3

0xc5be,	// (0x00059a95) bg_popup_call3_rect_pane_g4

0xc5c6,	// (0x00059a9d) bg_popup_call3_rect_pane_g5

0xc5ce,	// (0x00059aa5) bg_popup_call3_rect_pane_g6

0xc5d6,	// (0x00059aad) bg_popup_call3_rect_pane_g7

0x3445,	// (0x0005091c) mup_visualizer_osc_pane

0xb459,	// (0x00058930) mup_visualizer_spec_pane

0x43db,	// (0x000518b2) call3_video_qcif_pane_ParamLimits

0x43db,	// (0x000518b2) call3_video_qcif_pane

0x43ec,	// (0x000518c3) call3_video_qcif_uncrop_pane_ParamLimits

0x43ec,	// (0x000518c3) call3_video_qcif_uncrop_pane

0x43fa,	// (0x000518d1) call3_video_subqcif_pane_ParamLimits

0x43fa,	// (0x000518d1) call3_video_subqcif_pane

0x440e,	// (0x000518e5) call3_video_subqcif_uncrop_pane_ParamLimits

0x440e,	// (0x000518e5) call3_video_subqcif_uncrop_pane

0x447f,	// (0x00051956) popup_call3_audio_in_window_g4_ParamLimits

0x447f,	// (0x00051956) popup_call3_audio_in_window_g4

0x439a,	// (0x00051871) mup_spec_half_pane

0x43a3,	// (0x0005187a) mup_spec_half_pane_cp

0xc813,	// (0x00059cea) mup_osc_middle_pane

0xc81c,	// (0x00059cf3) mup_visualizer_osc_pane_g1

0x437a,	// (0x00051851) mup_spec_bar_pane_ParamLimits

0x437a,	// (0x00051851) mup_spec_bar_pane

0xc800,	// (0x00059cd7) mup_spec_bar_pane_g1

0xc80a,	// (0x00059ce1) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005cadd) mup_spec_bar_pane_g

0x1398,	// (0x0004e86f) aid_cale_week_size_cell_pane_ParamLimits

0x13b2,	// (0x0004e889) bg_cale_heading_pane_ParamLimits

0xa857,	// (0x00057d2e) bg_cale_pane_cp01_ParamLimits

0x13d0,	// (0x0004e8a7) cale_week_corner_pane_ParamLimits

0x13ef,	// (0x0004e8c6) cale_week_day_heading_pane_ParamLimits

0x1412,	// (0x0004e8e9) cale_week_scroll_pane_g1_ParamLimits

0x142b,	// (0x0004e902) cale_week_scroll_pane_g2_ParamLimits

0x1443,	// (0x0004e91a) cale_week_scroll_pane_g3_ParamLimits

0x145b,	// (0x0004e932) cale_week_scroll_pane_g4_ParamLimits

0x1473,	// (0x0004e94a) cale_week_scroll_pane_g5_ParamLimits

0x148f,	// (0x0004e966) cale_week_scroll_pane_g6_ParamLimits

0x14af,	// (0x0004e986) cale_week_scroll_pane_g7_ParamLimits

0x14cf,	// (0x0004e9a6) cale_week_scroll_pane_g8_ParamLimits

0x14f3,	// (0x0004e9ca) cale_week_scroll_pane_g9_ParamLimits

0x150b,	// (0x0004e9e2) cale_week_scroll_pane_g10_ParamLimits

0x1523,	// (0x0004e9fa) cale_week_scroll_pane_g11_ParamLimits

0x153b,	// (0x0004ea12) cale_week_scroll_pane_g12_ParamLimits

0x1553,	// (0x0004ea2a) cale_week_scroll_pane_g13_ParamLimits

0x1553,	// (0x0004ea2a) cale_week_scroll_pane_g14_ParamLimits

0x1553,	// (0x0004ea2a) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0005c687) cale_week_scroll_pane_g_ParamLimits

0x158f,	// (0x0004ea66) cale_week_time_pane_ParamLimits

0x15b3,	// (0x0004ea8a) grid_cale_week_pane_ParamLimits

0xa874,	// (0x00057d4b) listscroll_cale_week_pane_t1

0xa886,	// (0x00057d5d) scroll_pane_cp08_ParamLimits

0x233a,	// (0x0004f811) cale_month_corner_pane_ParamLimits

0xac27,	// (0x000580fe) cale_month_pane_t1

0x275a,	// (0x0004fc31) cale_month_week_pane_ParamLimits

0x2f6f,	// (0x00050446) popup_call_status_window_g1_ParamLimits

0x2f83,	// (0x0005045a) popup_call_status_window_g2_ParamLimits

0x2f97,	// (0x0005046e) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0005c82d) popup_call_status_window_g_ParamLimits

0xafd3,	// (0x000584aa) aid_call2_pane

0x0160,	// (0x0004d637) msg_header_pane_g1

0x384c,	// (0x00050d23) postcard_address2_pane_ParamLimits

0x384c,	// (0x00050d23) postcard_address2_pane

0x385e,	// (0x00050d35) postcard_message2_pane_ParamLimits

0x385e,	// (0x00050d35) postcard_message2_pane

0x4328,	// (0x000517ff) message2_row_pane_ParamLimits

0x4328,	// (0x000517ff) message2_row_pane

0x4347,	// (0x0005181e) address2_row_pane_ParamLimits

0x4347,	// (0x0005181e) address2_row_pane

0xc7ce,	// (0x00059ca5) postcard_message2_row_pane_g1

0xc7d6,	// (0x00059cad) postcard_message2_row_pane_t1

0xc7ce,	// (0x00059ca5) address2_row_pane_g1

0xc7d6,	// (0x00059cad) address2_row_pane_t1

0x19d3,	// (0x0004eeaa) aid_size_cell_vorec

0x9a45,	// (0x00056f1c) main_rss_pane

0x435a,	// (0x00051831) rss_list_single_pane_ParamLimits

0x435a,	// (0x00051831) rss_list_single_pane

0xc7e4,	// (0x00059cbb) rss_list_single_pane_t1

0xc7f2,	// (0x00059cc9) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0005cad8) rss_list_single_pane_t

0x9a45,	// (0x00056f1c) main_camera2_pane

0x9a45,	// (0x00056f1c) main_video2_pane

0x45c2,	// (0x00051a99) cams_zoom_pane_cp2_ParamLimits

0x45c2,	// (0x00051a99) cams_zoom_pane_cp2

0x45e2,	// (0x00051ab9) image2_vga_pane_ParamLimits

0x45e2,	// (0x00051ab9) image2_vga_pane

0x4633,	// (0x00051b0a) main_camera2_pane_g1_ParamLimits

0x4633,	// (0x00051b0a) main_camera2_pane_g1

0x4653,	// (0x00051b2a) main_camera2_pane_g2_ParamLimits

0x4653,	// (0x00051b2a) main_camera2_pane_g2

0x4673,	// (0x00051b4a) main_camera2_pane_g3_ParamLimits

0x4673,	// (0x00051b4a) main_camera2_pane_g3

0x4693,	// (0x00051b6a) main_camera2_pane_g4_ParamLimits

0x4693,	// (0x00051b6a) main_camera2_pane_g4

0x46b3,	// (0x00051b8a) main_camera2_pane_g5_ParamLimits

0x46b3,	// (0x00051b8a) main_camera2_pane_g5

0x46d3,	// (0x00051baa) main_camera2_pane_g6_ParamLimits

0x46d3,	// (0x00051baa) main_camera2_pane_g6

0x46f3,	// (0x00051bca) main_camera2_pane_g7_ParamLimits

0x46f3,	// (0x00051bca) main_camera2_pane_g7

0x4713,	// (0x00051bea) main_camera2_pane_g8_ParamLimits

0x4713,	// (0x00051bea) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0005caf9) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0005caf9) main_camera2_pane_g

0x4753,	// (0x00051c2a) main_camera2_pane_t1_ParamLimits

0x4753,	// (0x00051c2a) main_camera2_pane_t1

0x4788,	// (0x00051c5f) main_camera2_pane_t2_ParamLimits

0x4788,	// (0x00051c5f) main_camera2_pane_t2

0x47ae,	// (0x00051c85) main_camera2_pane_t3_ParamLimits

0x47ae,	// (0x00051c85) main_camera2_pane_t3

0x480c,	// (0x00051ce3) main_camera2_pane_t4_ParamLimits

0x480c,	// (0x00051ce3) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0005cb0c) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0005cb0c) main_camera2_pane_t

0x489e,	// (0x00051d75) cams_zoom_pane_cp4_ParamLimits

0x489e,	// (0x00051d75) cams_zoom_pane_cp4

0x48b4,	// (0x00051d8b) image2_cif_pane_ParamLimits

0x48b4,	// (0x00051d8b) image2_cif_pane

0x48df,	// (0x00051db6) image2_subqcif_pane_ParamLimits

0x48df,	// (0x00051db6) image2_subqcif_pane

0x48f9,	// (0x00051dd0) main_video2_pane_g1_ParamLimits

0x48f9,	// (0x00051dd0) main_video2_pane_g1

0x4913,	// (0x00051dea) main_video2_pane_g2_ParamLimits

0x4913,	// (0x00051dea) main_video2_pane_g2

0x4929,	// (0x00051e00) main_video2_pane_g3_ParamLimits

0x4929,	// (0x00051e00) main_video2_pane_g3

0x493f,	// (0x00051e16) main_video2_pane_g4_ParamLimits

0x493f,	// (0x00051e16) main_video2_pane_g4

0x4955,	// (0x00051e2c) main_video2_pane_g5_ParamLimits

0x4955,	// (0x00051e2c) main_video2_pane_g5

0x496b,	// (0x00051e42) main_video2_pane_g6_ParamLimits

0x496b,	// (0x00051e42) main_video2_pane_g6

0x0005,

0xf644,	// (0x0005cb1b) main_video2_pane_g_ParamLimits

0xf644,	// (0x0005cb1b) main_video2_pane_g

0x4985,	// (0x00051e5c) main_video2_pane_t1_ParamLimits

0x4985,	// (0x00051e5c) main_video2_pane_t1

0x49a9,	// (0x00051e80) main_video2_pane_t2_ParamLimits

0x49a9,	// (0x00051e80) main_video2_pane_t2

0x49f7,	// (0x00051ece) main_video2_pane_t3_ParamLimits

0x49f7,	// (0x00051ece) main_video2_pane_t3

0x0002,

0xf651,	// (0x0005cb28) main_video2_pane_t_ParamLimits

0xf651,	// (0x0005cb28) main_video2_pane_t

0x3e84,	// (0x0005135b) call_muted_g2

0x0001,

0xf5f3,	// (0x0005caca) call_muted_g

0x9a45,	// (0x00056f1c) main_mup2_pane

0x4a3f,	// (0x00051f16) main_mup2_pane_g1_ParamLimits

0x4a3f,	// (0x00051f16) main_mup2_pane_g1

0x4a4b,	// (0x00051f22) main_mup2_pane_g2_ParamLimits

0x4a4b,	// (0x00051f22) main_mup2_pane_g2

0x9d3b,	// (0x00057212) main_mup_pane_g13_cp1

0x9d43,	// (0x0005721a) mup_volume_pane_cp1

0x4a67,	// (0x00051f3e) main_mup2_pane_g4_ParamLimits

0x4a67,	// (0x00051f3e) main_mup2_pane_g4

0x4a79,	// (0x00051f50) main_mup2_pane_g5_ParamLimits

0x4a79,	// (0x00051f50) main_mup2_pane_g5

0x4a8b,	// (0x00051f62) main_mup2_pane_g6_ParamLimits

0x4a8b,	// (0x00051f62) main_mup2_pane_g6

0x4a9d,	// (0x00051f74) main_mup2_pane_g7_ParamLimits

0x4a9d,	// (0x00051f74) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0005cb2f) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0005cb2f) main_mup2_pane_g

0x4ab5,	// (0x00051f8c) main_mup2_pane_t1_ParamLimits

0x4ab5,	// (0x00051f8c) main_mup2_pane_t1

0x4acb,	// (0x00051fa2) main_mup2_pane_t2_ParamLimits

0x4acb,	// (0x00051fa2) main_mup2_pane_t2

0x4ae1,	// (0x00051fb8) main_mup2_pane_t3_ParamLimits

0x4ae1,	// (0x00051fb8) main_mup2_pane_t3

0x4af7,	// (0x00051fce) main_mup2_pane_t4_ParamLimits

0x4af7,	// (0x00051fce) main_mup2_pane_t4

0x4b0f,	// (0x00051fe6) main_mup2_pane_t5_ParamLimits

0x4b0f,	// (0x00051fe6) main_mup2_pane_t5

0x4b27,	// (0x00051ffe) main_mup2_pane_t6_ParamLimits

0x4b27,	// (0x00051ffe) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0005cb3e) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0005cb3e) main_mup2_pane_t

0x4b57,	// (0x0005202e) mup2_visualizer_pane_ParamLimits

0x4b57,	// (0x0005202e) mup2_visualizer_pane

0x4b85,	// (0x0005205c) mup_progress_pane_cp_ParamLimits

0x4b85,	// (0x0005205c) mup_progress_pane_cp

0x9d26,	// (0x000571fd) mup_volume_pane_cp_ParamLimits

0x9d26,	// (0x000571fd) mup_volume_pane_cp

0x4b99,	// (0x00052070) mup2_visualizer_pane_g1_ParamLimits

0x4b99,	// (0x00052070) mup2_visualizer_pane_g1

0xc853,	// (0x00059d2a) mup2_visualizer_pane_g2_ParamLimits

0xc853,	// (0x00059d2a) mup2_visualizer_pane_g2

0x4bb0,	// (0x00052087) mup2_visualizer_pane_g3_ParamLimits

0x4bb0,	// (0x00052087) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0005cb4b) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0005cb4b) mup2_visualizer_pane_g

0xb680,	// (0x00058b57) aid_size_cell_fmradio

0x4036,	// (0x0005150d) aid_height_parent_landcape

0xaa85,	// (0x00057f5c) wml_content_pane_cp

0xaa8d,	// (0x00057f64) wml_tabs_pane

0xaa96,	// (0x00057f6d) popup_wml_miniature_window

0xaa9e,	// (0x00057f75) scroll_pane_cp021

0xaab2,	// (0x00057f89) wml_content_pane_comp8

0x9a45,	// (0x00056f1c) bg_popup_sub_pane_cp05

0xc871,	// (0x00059d48) popup_wml_miniature_window_g1

0xc879,	// (0x00059d50) wml_miniature_view_pane

0x4bbc,	// (0x00052093) aid_size_wml_view

0x4bc4,	// (0x0005209b) wml_miniature_view_pane_g1

0x4bcd,	// (0x000520a4) wml_miniature_view_pane_g2

0x4bd6,	// (0x000520ad) wml_miniature_view_pane_g3

0x4bde,	// (0x000520b5) wml_miniature_view_pane_g4

0x4be6,	// (0x000520bd) wml_miniature_view_pane_g5

0x4bee,	// (0x000520c5) wml_miniature_view_pane_g6

0x4bf6,	// (0x000520cd) wml_miniature_view_pane_g7

0x4bfe,	// (0x000520d5) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0005cb52) wml_miniature_view_pane_g

0xc881,	// (0x00059d58) background_graphic_ParamLimits

0xc881,	// (0x00059d58) background_graphic

0xc88d,	// (0x00059d64) wml_tabs_2_pane

0xc896,	// (0x00059d6d) wml_tabs_3_pane_ParamLimits

0xc896,	// (0x00059d6d) wml_tabs_3_pane

0xc8a8,	// (0x00059d7f) wml_tabs_4_pane_ParamLimits

0xc8a8,	// (0x00059d7f) wml_tabs_4_pane

0xc8be,	// (0x00059d95) wml_tabs_5_pane_ParamLimits

0xc8be,	// (0x00059d95) wml_tabs_5_pane

0xc8d8,	// (0x00059daf) wml_tabs_pane_g2_ParamLimits

0xc8d8,	// (0x00059daf) wml_tabs_pane_g2

0xc8ec,	// (0x00059dc3) wml_tabs_pane_g3_ParamLimits

0xc8ec,	// (0x00059dc3) wml_tabs_pane_g3

0x4c06,	// (0x000520dd) wml_tabs_2_active_pane_ParamLimits

0x4c06,	// (0x000520dd) wml_tabs_2_active_pane

0x4c1a,	// (0x000520f1) wml_tabs_2_passive_pane_ParamLimits

0x4c1a,	// (0x000520f1) wml_tabs_2_passive_pane

0x4c2e,	// (0x00052105) wml_tabs_3_active_pane_cp_ParamLimits

0x4c2e,	// (0x00052105) wml_tabs_3_active_pane_cp

0x4c43,	// (0x0005211a) wml_tabs_3_passive_pane_ParamLimits

0x4c43,	// (0x0005211a) wml_tabs_3_passive_pane

0x4c56,	// (0x0005212d) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c56,	// (0x0005212d) wml_tabs_3_passive_pane_cp

0x4c6d,	// (0x00052144) tabs_4_active_pane

0x4c75,	// (0x0005214c) tabs_4_passive_pane

0x4c7f,	// (0x00052156) tabs_4_passive_pane_cp

0x4c87,	// (0x0005215e) tabs_4_passive_pane_cp2

0x3d51,	// (0x00051228) aid_height_text

0x3417,	// (0x000508ee) mup_volume_cont_pane_ParamLimits

0x3417,	// (0x000508ee) mup_volume_cont_pane

0x0f9b,	// (0x0004e472) aid_size_cell_pinb

0x0fa5,	// (0x0004e47c) aid_size_list_pinb

0x4b71,	// (0x00052048) mup2_volume_cont_pane_ParamLimits

0x4b71,	// (0x00052048) mup2_volume_cont_pane

0x9d12,	// (0x000571e9) mup2_volume_cont_pane_g1_ParamLimits

0x9d12,	// (0x000571e9) mup2_volume_cont_pane_g1

0x0c4d,	// (0x0004e124) aid_size_cell_touch_ParamLimits

0x0c4d,	// (0x0004e124) aid_size_cell_touch

0x0e8a,	// (0x0004e361) touch_pane_ParamLimits

0x0e8a,	// (0x0004e361) touch_pane

0x95ca,	// (0x00056aa1) main_rss2_pane

0xc909,	// (0x00059de0) listscroll_rss2_pane

0xc912,	// (0x00059de9) rss2_navigation_pane

0xc91a,	// (0x00059df1) list_rss2_pane

0xb122,	// (0x000585f9) scroll_pane_cp22

0xc922,	// (0x00059df9) rss2_navigation_pane_g1

0xc92b,	// (0x00059e02) rss2_navigation_pane_g2

0xc933,	// (0x00059e0a) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0005cb63) rss2_navigation_pane_g

0xc93b,	// (0x00059e12) rss2_navigation_pane_t1

0x4c91,	// (0x00052168) rss2_list_single_pane_ParamLimits

0x4c91,	// (0x00052168) rss2_list_single_pane

0xc949,	// (0x00059e20) rss2_list_single_pane_t2

0xc957,	// (0x00059e2e) rss2_list_single_pane_t3_ParamLimits

0xc957,	// (0x00059e2e) rss2_list_single_pane_t3

0xc974,	// (0x00059e4b) rss2_list_single_pane_t4

0x2e01,	// (0x000502d8) smil_status_pane_g1

0xa46a,	// (0x00057941) main_image2_pane_ParamLimits

0xa46a,	// (0x00057941) main_image2_pane

0x4733,	// (0x00051c0a) main_camera2_pane_g9_ParamLimits

0x4733,	// (0x00051c0a) main_camera2_pane_g9

0x4861,	// (0x00051d38) main_camera2_pane_t5_ParamLimits

0x4861,	// (0x00051d38) main_camera2_pane_t5

0x9ce2,	// (0x000571b9) main_camera2_pane_t6_ParamLimits

0x9ce2,	// (0x000571b9) main_camera2_pane_t6

0x4ca8,	// (0x0005217f) main_image2_pane_g1_ParamLimits

0x4ca8,	// (0x0005217f) main_image2_pane_g1

0x3a8b,	// (0x00050f62) smil2_video_pane_ParamLimits

0x3a8b,	// (0x00050f62) smil2_video_pane

0x0c85,	// (0x0004e15c) aid_zoom_text_primary_cp

0x9628,	// (0x00056aff) popup_preview_fixed_window

0xa9ee,	// (0x00057ec5) im_reading_pane_g1

0x45aa,	// (0x00051a81) cams2_bc_adjust_pane_cp_ParamLimits

0x45aa,	// (0x00051a81) cams2_bc_adjust_pane_cp

0x4890,	// (0x00051d67) cams2_bc_adjust_pane_ParamLimits

0x4890,	// (0x00051d67) cams2_bc_adjust_pane

0x9d4b,	// (0x00057222) cams2_bc_adjust_pane_g1

0x9d53,	// (0x0005722a) cams2_slider_pane

0x9d5c,	// (0x00057233) cams2_slider_pane_g1

0x9d65,	// (0x0005723c) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0005cb6a) cams2_slider_pane_g

0x107d,	// (0x0004e554) calc_display_pane_ParamLimits

0x10a5,	// (0x0004e57c) calc_paper_pane_ParamLimits

0x10c8,	// (0x0004e59f) grid_calc_pane_ParamLimits

0x9bfb,	// (0x000570d2) popup_clock_digital_window_t1_ParamLimits

0xb61d,	// (0x00058af4) main_image_pane_t1

0x105f,	// (0x0004e536) aid_size_cell_calc_ParamLimits

0x105f,	// (0x0004e536) aid_size_cell_calc

0x407c,	// (0x00051553) popup_blid_sat_info2_window_ParamLimits

0x407c,	// (0x00051553) popup_blid_sat_info2_window

0xc98a,	// (0x00059e61) aid_size_cell_blid

0xc992,	// (0x00059e69) bg_popup_window_pane_cp07

0xc9b5,	// (0x00059e8c) grid_popup_blid_pane

0xc9bf,	// (0x00059e96) heading_pane_cp05_ParamLimits

0xc9bf,	// (0x00059e96) heading_pane_cp05

0xca89,	// (0x00059f60) cell_popup_blid_pane_ParamLimits

0xca89,	// (0x00059f60) cell_popup_blid_pane

0xcaaf,	// (0x00059f86) cell_popup_blid_pane_g1

0xcab7,	// (0x00059f8e) cell_popup_blid_pane_t1

0x4b41,	// (0x00052018) mup2_indicator_pane_ParamLimits

0x4b41,	// (0x00052018) mup2_indicator_pane

0xa8f5,	// (0x00057dcc) mup2_visualizer_osc_pane

0xc85f,	// (0x00059d36) mup2_visualizer_spec_pane_ParamLimits

0xc85f,	// (0x00059d36) mup2_visualizer_spec_pane

0x4cbe,	// (0x00052195) mup2_spec_half_pane

0x4cc7,	// (0x0005219e) mup2_spec_half_pane_cp

0x4ccf,	// (0x000521a6) mup2_spec_bar_pane_ParamLimits

0x4ccf,	// (0x000521a6) mup2_spec_bar_pane

0xc800,	// (0x00059cd7) mup2_spec_bar_pane_g1

0xc80a,	// (0x00059ce1) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005cadd) mup2_spec_bar_pane_g

0x4cef,	// (0x000521c6) mup2_osc_middle_pane

0xc81c,	// (0x00059cf3) mup2_visualizer_osc_pane_g1

0x9652,	// (0x00056b29) popup_number_entry_window_t1_ParamLimits

0x9665,	// (0x00056b3c) popup_number_entry_window_t2_ParamLimits

0x9677,	// (0x00056b4e) popup_number_entry_window_t3_ParamLimits

0x0edc,	// (0x0004e3b3) popup_number_entry_window_t5_ParamLimits

0x0edc,	// (0x0004e3b3) popup_number_entry_window_t5

0xf0ca,	// (0x0005c5a1) popup_number_entry_window_t_ParamLimits

0x9689,	// (0x00056b60) text_title_cp2_ParamLimits

0x9c3a,	// (0x00057111) aid_hotspot_pointer_text2_pane

0x9c60,	// (0x00057137) main_viewer_pane_g9_ParamLimits

0x9c60,	// (0x00057137) main_viewer_pane_g9

0xac27,	// (0x000580fe) cale_month_pane_t1_ParamLimits

0xac64,	// (0x0005813b) bg_cale_pane_ParamLimits

0xac7c,	// (0x00058153) list_cale_pane_ParamLimits

0xac8d,	// (0x00058164) listscroll_cale_day_pane_t1

0xac9f,	// (0x00058176) scroll_pane_cp09_ParamLimits

0x344d,	// (0x00050924) main_mup_eq_pane_t1_ParamLimits

0x344d,	// (0x00050924) main_mup_eq_pane_t1

0x3467,	// (0x0005093e) main_mup_eq_pane_t2_ParamLimits

0x3467,	// (0x0005093e) main_mup_eq_pane_t2

0x3481,	// (0x00050958) main_mup_eq_pane_t3_ParamLimits

0x3481,	// (0x00050958) main_mup_eq_pane_t3

0x349d,	// (0x00050974) main_mup_eq_pane_t4_ParamLimits

0x349d,	// (0x00050974) main_mup_eq_pane_t4

0x34b9,	// (0x00050990) main_mup_eq_pane_t5_ParamLimits

0x34b9,	// (0x00050990) main_mup_eq_pane_t5

0x34d5,	// (0x000509ac) main_mup_eq_pane_t6_ParamLimits

0x34d5,	// (0x000509ac) main_mup_eq_pane_t6

0x34e9,	// (0x000509c0) main_mup_eq_pane_t7_ParamLimits

0x34e9,	// (0x000509c0) main_mup_eq_pane_t7

0x34fd,	// (0x000509d4) main_mup_eq_pane_t8_ParamLimits

0x34fd,	// (0x000509d4) main_mup_eq_pane_t8

0x3511,	// (0x000509e8) main_mup_eq_pane_t9_ParamLimits

0x3511,	// (0x000509e8) main_mup_eq_pane_t9

0x352b,	// (0x00050a02) main_mup_eq_pane_t10_ParamLimits

0x352b,	// (0x00050a02) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0005c92c) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0005c92c) main_mup_eq_pane_t

0x35da,	// (0x00050ab1) mup_equalizer_pane_cp5_ParamLimits

0x35ee,	// (0x00050ac5) mup_equalizer_pane_cp6_ParamLimits

0x3602,	// (0x00050ad9) mup_equalizer_pane_cp7_ParamLimits

0x95ca,	// (0x00056aa1) main_gallery_pane

0xc825,	// (0x00059cfc) smil2_volume_pane

0xc82d,	// (0x00059d04) smil_status_volume_pane_g1_ParamLimits

0xc840,	// (0x00059d17) smil_status_volume_pane_g2_ParamLimits

0x9cc0,	// (0x00057197) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0005cae2) smil_status_volume_pane_g_ParamLimits

0xc992,	// (0x00059e69) bg_popup_window_pane_cp07_ParamLimits

0xc9a0,	// (0x00059e77) blid_firmament_pane

0x4cf8,	// (0x000521cf) aid_size_cell_gallery_ParamLimits

0x4cf8,	// (0x000521cf) aid_size_cell_gallery

0x4d0e,	// (0x000521e5) grid_gallery_pane_ParamLimits

0x4d0e,	// (0x000521e5) grid_gallery_pane

0x4d27,	// (0x000521fe) cell_gallery_pane_ParamLimits

0x4d27,	// (0x000521fe) cell_gallery_pane

0xcac5,	// (0x00059f9c) bg_cell_gallery_focus_pane_ParamLimits

0xcac5,	// (0x00059f9c) bg_cell_gallery_focus_pane

0xcad7,	// (0x00059fae) cell_gallery_pane_g1_ParamLimits

0xcad7,	// (0x00059fae) cell_gallery_pane_g1

0x4d70,	// (0x00052247) cell_gallery_pane_g2_ParamLimits

0x4d70,	// (0x00052247) cell_gallery_pane_g2

0x4d7d,	// (0x00052254) cell_gallery_pane_g3_ParamLimits

0x4d7d,	// (0x00052254) cell_gallery_pane_g3

0xcae3,	// (0x00059fba) cell_gallery_pane_g4_ParamLimits

0xcae3,	// (0x00059fba) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0005cb90) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0005cb90) cell_gallery_pane_g

0xcaef,	// (0x00059fc6) bg_cell_gallery_focus_pane_g1

0xcaf7,	// (0x00059fce) bg_cell_gallery_focus_pane_g2

0xcaff,	// (0x00059fd6) bg_cell_gallery_focus_pane_g3

0xcb07,	// (0x00059fde) bg_cell_gallery_focus_pane_g4

0xcb0f,	// (0x00059fe6) bg_cell_gallery_focus_pane_g5

0xcb17,	// (0x00059fee) bg_cell_gallery_focus_pane_g6

0xcb1f,	// (0x00059ff6) bg_cell_gallery_focus_pane_g7

0xcb27,	// (0x00059ffe) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0005cb99) bg_cell_gallery_focus_pane_g

0xcb2f,	// (0x0005a006) aid_firma_cardinal

0xcb43,	// (0x0005a01a) blid_firmament_pane_t1

0xcb5a,	// (0x0005a031) blid_firmament_pane_t2

0xcb71,	// (0x0005a048) blid_firmament_pane_t3

0xcb88,	// (0x0005a05f) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0005cbaa) blid_firmament_pane_t

0xcb9f,	// (0x0005a076) blid_sat_info_pane

0xcbaf,	// (0x0005a086) blid_sat_info_pane_g1

0xcbaf,	// (0x0005a086) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0005cbb3) blid_sat_info_pane_g

0xcbb9,	// (0x0005a090) blid_sat_info_pane_t1

0xcbc7,	// (0x0005a09e) smil2_volume_content_pane

0xcbd0,	// (0x0005a0a7) smil2_volume_pane_g1

0xa7a8,	// (0x00057c7f) smil2_volume_content_pane_g1

0xcbd8,	// (0x0005a0af) smil2_volume_content_pane_g2

0xcbe1,	// (0x0005a0b8) smil2_volume_content_pane_g3

0xcbea,	// (0x0005a0c1) smil2_volume_content_pane_g4

0xcbf3,	// (0x0005a0ca) smil2_volume_content_pane_g5

0xcbfc,	// (0x0005a0d3) smil2_volume_content_pane_g6

0xcc05,	// (0x0005a0dc) smil2_volume_content_pane_g7

0xcc0e,	// (0x0005a0e5) smil2_volume_content_pane_g8

0xcc17,	// (0x0005a0ee) smil2_volume_content_pane_g9

0xcc20,	// (0x0005a0f7) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0005cbb8) smil2_volume_content_pane_g

0x1667,	// (0x0004eb3e) cale_week_day_heading_pane_t1_ParamLimits

0x16b1,	// (0x0004eb88) cale_week_day_heading_pane_t2_ParamLimits

0x1700,	// (0x0004ebd7) cale_week_day_heading_pane_t3_ParamLimits

0x174f,	// (0x0004ec26) cale_week_day_heading_pane_t4_ParamLimits

0x179e,	// (0x0004ec75) cale_week_day_heading_pane_t5_ParamLimits

0x17f5,	// (0x0004eccc) cale_week_day_heading_pane_t6_ParamLimits

0x184c,	// (0x0004ed23) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0005c6a8) cale_week_day_heading_pane_t_ParamLimits

0xa8a3,	// (0x00057d7a) bg_cale_side_pane_ParamLimits

0x1896,	// (0x0004ed6d) cale_week_time_pane_t1_ParamLimits

0x18b0,	// (0x0004ed87) cale_week_time_pane_t2_ParamLimits

0x18ca,	// (0x0004eda1) cale_week_time_pane_t3_ParamLimits

0x18e4,	// (0x0004edbb) cale_week_time_pane_t4_ParamLimits

0x18fe,	// (0x0004edd5) cale_week_time_pane_t5_ParamLimits

0x1918,	// (0x0004edef) cale_week_time_pane_t6_ParamLimits

0x1932,	// (0x0004ee09) cale_week_time_pane_t7_ParamLimits

0x1952,	// (0x0004ee29) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0005c6b7) cale_week_time_pane_t_ParamLimits

0x1972,	// (0x0004ee49) cell_cale_week_pane_g2_ParamLimits

0xa8a3,	// (0x00057d7a) bg_cale_side_pane_cp01_ParamLimits

0x2be8,	// (0x000500bf) cale_month_week_pane_t1_ParamLimits

0x2c01,	// (0x000500d8) cale_month_week_pane_t2_ParamLimits

0x2c1a,	// (0x000500f1) cale_month_week_pane_t3_ParamLimits

0x2c33,	// (0x0005010a) cale_month_week_pane_t4_ParamLimits

0x2c4c,	// (0x00050123) cale_month_week_pane_t5_ParamLimits

0x2c65,	// (0x0005013c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005c78c) cale_month_week_pane_t_ParamLimits

0x9b77,	// (0x0005704e) cell_cale_month_pane_g1_ParamLimits

0x95ca,	// (0x00056aa1) main_cale_event_viewer_pane

0x95ca,	// (0x00056aa1) listscroll_cale_event_viewer_pane

0xcc29,	// (0x0005a100) list_cale_ev_pane

0xcc31,	// (0x0005a108) scroll_pane_cp023

0xcc3d,	// (0x0005a114) field_cale_ev_pane_ParamLimits

0xcc3d,	// (0x0005a114) field_cale_ev_pane

0xcc59,	// (0x0005a130) field_cale_ev_content_pane_ParamLimits

0xcc59,	// (0x0005a130) field_cale_ev_content_pane

0xcc65,	// (0x0005a13c) field_cale_ev_pane_g1_ParamLimits

0xcc65,	// (0x0005a13c) field_cale_ev_pane_g1

0xcc71,	// (0x0005a148) field_cale_ev_pane_g2_ParamLimits

0xcc71,	// (0x0005a148) field_cale_ev_pane_g2

0xcc89,	// (0x0005a160) field_cale_ev_pane_g3_ParamLimits

0xcc89,	// (0x0005a160) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0005cbcd) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0005cbcd) field_cale_ev_pane_g

0xcca1,	// (0x0005a178) field_cale_ev_pane_t1_ParamLimits

0xcca1,	// (0x0005a178) field_cale_ev_pane_t1

0xccb8,	// (0x0005a18f) field_cale_ev_content_pane_t1_ParamLimits

0xccb8,	// (0x0005a18f) field_cale_ev_content_pane_t1

0xb503,	// (0x000589da) bg_button_pane_cp01

0x1386,	// (0x0004e85d) listscroll_cale_week_pane_ParamLimits

0xa84e,	// (0x00057d25) popup_toolbar_window_cp01

0xa874,	// (0x00057d4b) listscroll_cale_week_pane_t1_ParamLimits

0x1386,	// (0x0004e85d) listscroll_cale_day_pane_ParamLimits

0xa84e,	// (0x00057d25) popup_toolbar_window_cp02

0xac8d,	// (0x00058164) listscroll_cale_day_pane_t1_ParamLimits

0x1386,	// (0x0004e85d) main_cale_month_pane_ParamLimits

0x9cab,	// (0x00057182) popup_toolbar_window_cp03_ParamLimits

0x9cab,	// (0x00057182) popup_toolbar_window_cp03

0x394f,	// (0x00050e26) main_image_pane_g2_ParamLimits

0x394f,	// (0x00050e26) main_image_pane_g2

0x3960,	// (0x00050e37) main_image_pane_g3_ParamLimits

0x3960,	// (0x00050e37) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0005c9be) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0005c9be) main_image_pane_g

0xb61d,	// (0x00058af4) main_image_pane_t1_ParamLimits

0x3971,	// (0x00050e48) main_image_pane_t2_ParamLimits

0x3971,	// (0x00050e48) main_image_pane_t2

0x3983,	// (0x00050e5a) main_image_pane_t3_ParamLimits

0x3983,	// (0x00050e5a) main_image_pane_t3

0x39ab,	// (0x00050e82) main_image_pane_t4_ParamLimits

0x39ab,	// (0x00050e82) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0005c9c5) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0005c9c5) main_image_pane_t

0x39cb,	// (0x00050ea2) popup_image_details_window_cp01

0x39d5,	// (0x00050eac) popup_toobar_trans_pane_cp01_ParamLimits

0x39d5,	// (0x00050eac) popup_toobar_trans_pane_cp01

0x4153,	// (0x0005162a) popup_image_details_window_ParamLimits

0x4153,	// (0x0005162a) popup_image_details_window

0x9c7e,	// (0x00057155) popup_image_focus_window

0x4564,	// (0x00051a3b) camera2_autofocus_pane_ParamLimits

0x4564,	// (0x00051a3b) camera2_autofocus_pane

0x95ca,	// (0x00056aa1) bg_popup_sub_pane_cp06

0xccd5,	// (0x0005a1ac) popup_image_focus_window_g1

0xccdd,	// (0x0005a1b4) popup_image_focus_window_g2

0xcce5,	// (0x0005a1bc) popup_image_focus_window_g3

0xcced,	// (0x0005a1c4) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0005cbd4) popup_image_focus_window_g

0xccf5,	// (0x0005a1cc) popup_image_focus_window_t1

0xcd03,	// (0x0005a1da) popup_image_focus_window_t2

0xcd13,	// (0x0005a1ea) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0005cbdd) popup_image_focus_window_t

0xcd21,	// (0x0005a1f8) camera2_autofocus_pane_g1

0xa46a,	// (0x00057941) bg_tb_trans_pane_cp01

0xcd2f,	// (0x0005a206) popup_image_details_window_g1

0xcd42,	// (0x0005a219) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0005cbef) popup_image_details_window_g

0xcd6b,	// (0x0005a242) popup_image_details_window_t1

0xcd7d,	// (0x0005a254) popup_image_details_window_t2

0xcd96,	// (0x0005a26d) popup_image_details_window_t3

0xcdaa,	// (0x0005a281) popup_image_details_window_t4

0xcdc5,	// (0x0005a29c) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0005cbf6) popup_image_details_window_t

0xa713,	// (0x00057bea) bg_calc_paper_pane_ParamLimits

0x95ca,	// (0x00056aa1) grid_highlight_pane_cp013

0x9add,	// (0x00056fb4) list_calc_pane_ParamLimits

0x9aef,	// (0x00056fc6) scroll_pane_cp024

0xa727,	// (0x00057bfe) bg_calc_display_pane_ParamLimits

0x11c6,	// (0x0004e69d) calc_display_pane_t1_ParamLimits

0x11d8,	// (0x0004e6af) calc_display_pane_t2_ParamLimits

0x9af7,	// (0x00056fce) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0005c628) calc_display_pane_t_ParamLimits

0x129d,	// (0x0004e774) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0005c645) cell_calc_pane_g

0x12a6,	// (0x0004e77d) cell_calc_pane_t1

0xa786,	// (0x00057c5d) grid_highlight_pane_cp02_ParamLimits

0xa79c,	// (0x00057c73) toolbar_button_pane_cp01_ParamLimits

0xa79c,	// (0x00057c73) toolbar_button_pane_cp01

0xb662,	// (0x00058b39) temp_image_control_pane_ParamLimits

0xb662,	// (0x00058b39) temp_image_control_pane

0xa46a,	// (0x00057941) main_mp3_pane

0xcddf,	// (0x0005a2b6) temp_image_control_pane_g1_ParamLimits

0xcddf,	// (0x0005a2b6) temp_image_control_pane_g1

0xcded,	// (0x0005a2c4) temp_image_control_pane_g2_ParamLimits

0xcded,	// (0x0005a2c4) temp_image_control_pane_g2

0xcdff,	// (0x0005a2d6) temp_image_control_pane_g3_ParamLimits

0xcdff,	// (0x0005a2d6) temp_image_control_pane_g3

0x4dba,	// (0x00052291) temp_image_control_pane_g4_ParamLimits

0x4dba,	// (0x00052291) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0005cc01) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0005cc01) temp_image_control_pane_g

0xcddf,	// (0x0005a2b6) main_mp3_pane_g1

0x4dcd,	// (0x000522a4) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0005cc0a) main_mp3_pane_g

0xce42,	// (0x0005a319) main_mp3_pane_t1

0xa8fd,	// (0x00057dd4) main_camera_pane_g8_ParamLimits

0xa8fd,	// (0x00057dd4) main_camera_pane_g8

0x1c84,	// (0x0004f15b) main_video_pane_g7_ParamLimits

0x1c84,	// (0x0004f15b) main_video_pane_g7

0x9d00,	// (0x000571d7) main_camera2_pane_t7_ParamLimits

0x9d00,	// (0x000571d7) main_camera2_pane_t7

0xaa45,	// (0x00057f1c) scroll_pane_cp025_ParamLimits

0xaa45,	// (0x00057f1c) scroll_pane_cp025

0xaa59,	// (0x00057f30) scroll_pane_cp026_ParamLimits

0xaa59,	// (0x00057f30) scroll_pane_cp026

0xaa68,	// (0x00057f3f) wml_content_pane_ParamLimits

0x95ca,	// (0x00056aa1) main_touch_calib_pane

0x4ea3,	// (0x0005237a) main_touch_calib_pane_g1

0x4eb5,	// (0x0005238c) main_touch_calib_pane_g2

0x4ec7,	// (0x0005239e) main_touch_calib_pane_g3

0x4ed9,	// (0x000523b0) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0005cc28) main_touch_calib_pane_g

0x4eeb,	// (0x000523c2) main_touch_calib_pane_t1

0x4f05,	// (0x000523dc) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0005cc31) main_touch_calib_pane_t

0xb200,	// (0x000586d7) mup_progress_pane_cp02

0xb235,	// (0x0005870c) navi_pane_g1

0xb32d,	// (0x00058804) navi_pane_mp_t3

0xa46a,	// (0x00057941) main_mp3_pane_ParamLimits

0x42d0,	// (0x000517a7) navi_pane_ParamLimits

0xcddf,	// (0x0005a2b6) main_mp3_pane_g1_ParamLimits

0x4dcd,	// (0x000522a4) main_mp3_pane_g2_ParamLimits

0x4ddb,	// (0x000522b2) main_mp3_pane_g3_ParamLimits

0x4ddb,	// (0x000522b2) main_mp3_pane_g3

0x4de9,	// (0x000522c0) main_mp3_pane_g4_ParamLimits

0x4de9,	// (0x000522c0) main_mp3_pane_g4

0xce0f,	// (0x0005a2e6) main_mp3_pane_g5_ParamLimits

0xce0f,	// (0x0005a2e6) main_mp3_pane_g5

0xce1d,	// (0x0005a2f4) main_mp3_pane_g6_ParamLimits

0xce1d,	// (0x0005a2f4) main_mp3_pane_g6

0xce2a,	// (0x0005a301) main_mp3_pane_g7_ParamLimits

0xce2a,	// (0x0005a301) main_mp3_pane_g7

0xce36,	// (0x0005a30d) main_mp3_pane_g8_ParamLimits

0xce36,	// (0x0005a30d) main_mp3_pane_g8

0xf733,	// (0x0005cc0a) main_mp3_pane_g_ParamLimits

0x4df7,	// (0x000522ce) main_mp3_pane_t2

0x4e05,	// (0x000522dc) main_mp3_pane_t3

0xce50,	// (0x0005a327) main_mp3_pane_t4

0xce5e,	// (0x0005a335) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0005cc1b) main_mp3_pane_t

0xce6c,	// (0x0005a343) mup_progress_pane_cp01

0x0c85,	// (0x0004e15c) aid_zoom_text_secondary2

0xcc29,	// (0x0005a100) list_cale_ev2_pane

0xcc31,	// (0x0005a108) scroll_pane_cp023_ParamLimits

0x4f5b,	// (0x00052432) field_cale_ev2_pane_ParamLimits

0x4f5b,	// (0x00052432) field_cale_ev2_pane

0x4f7d,	// (0x00052454) field_cale_ev2_pane_g1_ParamLimits

0x4f7d,	// (0x00052454) field_cale_ev2_pane_g1

0x4f89,	// (0x00052460) field_cale_ev2_pane_g2_ParamLimits

0x4f89,	// (0x00052460) field_cale_ev2_pane_g2

0x4fa1,	// (0x00052478) field_cale_ev2_pane_g3_ParamLimits

0x4fa1,	// (0x00052478) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0005cc3c) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0005cc3c) field_cale_ev2_pane_g

0x4fc5,	// (0x0005249c) field_cale_ev2_pane_t1_ParamLimits

0x4fc5,	// (0x0005249c) field_cale_ev2_pane_t1

0x4fdc,	// (0x000524b3) field_cale_ev2_pane_t2_ParamLimits

0x4fdc,	// (0x000524b3) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0005cc45) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0005cc45) field_cale_ev2_pane_t

0x3802,	// (0x00050cd9) main_postcard_pane_g5_ParamLimits

0x3802,	// (0x00050cd9) main_postcard_pane_g5

0x3818,	// (0x00050cef) main_postcard_pane_g6_ParamLimits

0x3818,	// (0x00050cef) main_postcard_pane_g6

0x1a3e,	// (0x0004ef15) camera2_autofocus_pane_cp_ParamLimits

0x1a3e,	// (0x0004ef15) camera2_autofocus_pane_cp

0xa46a,	// (0x00057941) main_mup3_pane

0x5011,	// (0x000524e8) main_mup3_pane_g1_ParamLimits

0x5011,	// (0x000524e8) main_mup3_pane_g1

0x5033,	// (0x0005250a) main_mup3_pane_g2_ParamLimits

0x5033,	// (0x0005250a) main_mup3_pane_g2

0x50b5,	// (0x0005258c) main_mup3_pane_g3_ParamLimits

0x50b5,	// (0x0005258c) main_mup3_pane_g3

0x50fb,	// (0x000525d2) main_mup3_pane_g4_ParamLimits

0x50fb,	// (0x000525d2) main_mup3_pane_g4

0x5141,	// (0x00052618) main_mup3_pane_g5_ParamLimits

0x5141,	// (0x00052618) main_mup3_pane_g5

0x5189,	// (0x00052660) main_mup3_pane_g6_ParamLimits

0x5189,	// (0x00052660) main_mup3_pane_g6

0xce74,	// (0x0005a34b) main_mup3_pane_g7_ParamLimits

0xce74,	// (0x0005a34b) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0005cc55) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0005cc55) main_mup3_pane_g

0x5207,	// (0x000526de) main_mup3_pane_t1_ParamLimits

0x5207,	// (0x000526de) main_mup3_pane_t1

0x527b,	// (0x00052752) main_mup3_pane_t2_ParamLimits

0x527b,	// (0x00052752) main_mup3_pane_t2

0x534f,	// (0x00052826) main_mup3_pane_t4_ParamLimits

0x534f,	// (0x00052826) main_mup3_pane_t4

0x53a5,	// (0x0005287c) main_mup3_pane_t5_ParamLimits

0x53a5,	// (0x0005287c) main_mup3_pane_t5

0x5461,	// (0x00052938) main_mup3_pane_t6_ParamLimits

0x5461,	// (0x00052938) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0005cc66) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0005cc66) main_mup3_pane_t

0x5519,	// (0x000529f0) mup3_progress_pane_ParamLimits

0x5519,	// (0x000529f0) mup3_progress_pane

0x55a5,	// (0x00052a7c) popup_mup3_control_window_ParamLimits

0x55a5,	// (0x00052a7c) popup_mup3_control_window

0xce82,	// (0x0005a359) popup_mup3_text_window

0x55d7,	// (0x00052aae) mup3_progress_pane_t1

0x55f6,	// (0x00052acd) mup3_progress_pane_t2

0xce8a,	// (0x0005a361) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0005cc73) mup3_progress_pane_t

0xcea7,	// (0x0005a37e) mup_progress_pane_cp03

0x95ca,	// (0x00056aa1) bg_tb_trans_pane_cp04

0x5615,	// (0x00052aec) mup3_volume_pane

0x561d,	// (0x00052af4) popup_mup3_control_window_g1

0x5626,	// (0x00052afd) mup3_volume_pane_g1

0x562f,	// (0x00052b06) mup3_volume_pane_g2

0x5638,	// (0x00052b0f) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0005cc7a) mup3_volume_pane_g

0x95ca,	// (0x00056aa1) bg_tb_trans_pane_cp03

0xceb7,	// (0x0005a38e) popup_mup3_text_window_g1

0xcebf,	// (0x0005a396) popup_mup3_text_window_t1

0xa76f,	// (0x00057c46) list_calc_item_pane_g1_ParamLimits

0xc900,	// (0x00059dd7) mup_volume_pane_cp_g1

0x4f1f,	// (0x000523f6) main_touch_calib_pane_t3

0x4f33,	// (0x0005240a) main_touch_calib_pane_t4

0x4f47,	// (0x0005241e) main_touch_calib_pane_t5

0x95d4,	// (0x00056aab) aid_cell_size_toolbar2

0x95dc,	// (0x00056ab3) aid_popup3_width_pane

0x0c7d,	// (0x0004e154) aid_zoom_text_msg_primary

0x1a1d,	// (0x0004eef4) vorec_t7

0xa733,	// (0x00057c0a) bg_calc_paper_pane_g1_ParamLimits

0xa73f,	// (0x00057c16) bg_calc_paper_pane_g2_ParamLimits

0xa74b,	// (0x00057c22) bg_calc_paper_pane_g3_ParamLimits

0xa757,	// (0x00057c2e) bg_calc_paper_pane_g4_ParamLimits

0xa763,	// (0x00057c3a) bg_calc_paper_pane_g5_ParamLimits

0x1221,	// (0x0004e6f8) bg_calc_paper_pane_g6_ParamLimits

0x1232,	// (0x0004e709) bg_calc_paper_pane_g7_ParamLimits

0x1243,	// (0x0004e71a) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0005c62f) bg_calc_paper_pane_g_ParamLimits

0x1256,	// (0x0004e72d) calc_bg_paper_pane_g9_ParamLimits

0x1b96,	// (0x0004f06d) image_qvga_pane_ParamLimits

0x1b96,	// (0x0004f06d) image_qvga_pane

0xa643,	// (0x00057b1a) bg_popup_sub_pane_cp04_ParamLimits

0xb599,	// (0x00058a70) popup_mup_playback_window_g1_ParamLimits

0xb5a5,	// (0x00058a7c) popup_mup_playback_window_t1_ParamLimits

0xb5ba,	// (0x00058a91) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0005c9b9) popup_mup_playback_window_t_ParamLimits

0x4a5b,	// (0x00051f32) main_mup2_pane_g3_ParamLimits

0x4a5b,	// (0x00051f32) main_mup2_pane_g3

0x1f2d,	// (0x0004f404) popup_toolbar_window_cp04

0xb9af,	// (0x00058e86) popup_call2_audio_second_window_g3_ParamLimits

0xb9af,	// (0x00058e86) popup_call2_audio_second_window_g3

0xbdb9,	// (0x00059290) popup_call2_audio_first_window_g4_ParamLimits

0xbdb9,	// (0x00059290) popup_call2_audio_first_window_g4

0xc438,	// (0x0005990f) popup_call2_audio_in_window_g4_ParamLimits

0xc438,	// (0x0005990f) popup_call2_audio_in_window_g4

0x3931,	// (0x00050e08) aid_area_sk_bg_cut_ParamLimits

0x3931,	// (0x00050e08) aid_area_sk_bg_cut

0xb5cf,	// (0x00058aa6) aid_area_sk_bg_cut_2_ParamLimits

0xb5cf,	// (0x00058aa6) aid_area_sk_bg_cut_2

0x4d60,	// (0x00052237) aid_placing_details_win

0x4d68,	// (0x0005223f) aid_placing_details_win_2

0xcd21,	// (0x0005a1f8) camera2_autofocus_pane_g1_ParamLimits

0x0e23,	// (0x0004e2fa) popup_fixed_preview_cale_window_ParamLimits

0x0e23,	// (0x0004e2fa) popup_fixed_preview_cale_window

0xb3ab,	// (0x00058882) navi_slider_pane_g3

0xb3b4,	// (0x0005888b) navi_slider_pane_g4

0xb3bd,	// (0x00058894) navi_slider_pane_g5

0xb3ab,	// (0x00058882) navi_slider_pane_g6

0x9c21,	// (0x000570f8) navi_slider_pane_g7

0xb4d0,	// (0x000589a7) mup_scale_pane_g3

0xb4d9,	// (0x000589b0) mup_scale_pane_g4

0xb4e2,	// (0x000589b9) mup_scale_pane_g5

0x3616,	// (0x00050aed) mup_scale_pane_g6

0x361f,	// (0x00050af6) mup_scale_pane_g7

0xb3ab,	// (0x00058882) cams2_slider_pane_g3

0xc982,	// (0x00059e59) cams2_slider_pane_g4

0x9d6e,	// (0x00057245) cams2_slider_pane_g5

0xb3ab,	// (0x00058882) cams2_slider_pane_g6

0x9d76,	// (0x0005724d) cams2_slider_pane_g7

0xcbaf,	// (0x0005a086) camera2_autofocus_pane_cp_g1

0xc799,	// (0x00059c70) bg_popup_preview_window_pane_cp02_ParamLimits

0xc799,	// (0x00059c70) bg_popup_preview_window_pane_cp02

0xcecd,	// (0x0005a3a4) list_fp_cale_pane_ParamLimits

0xcecd,	// (0x0005a3a4) list_fp_cale_pane

0xced9,	// (0x0005a3b0) popup_fixed_preview_cale_window_t1_ParamLimits

0xced9,	// (0x0005a3b0) popup_fixed_preview_cale_window_t1

0x5641,	// (0x00052b18) popup_fixed_preview_cale_window_t2_ParamLimits

0x5641,	// (0x00052b18) popup_fixed_preview_cale_window_t2

0x5656,	// (0x00052b2d) popup_fixed_preview_cale_window_t3_ParamLimits

0x5656,	// (0x00052b2d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0005cc81) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0005cc81) popup_fixed_preview_cale_window_t

0x566b,	// (0x00052b42) list_single_fp_cale_pane_ParamLimits

0x566b,	// (0x00052b42) list_single_fp_cale_pane

0xcef7,	// (0x0005a3ce) list_single_fp_cale_pane_g1_ParamLimits

0xcef7,	// (0x0005a3ce) list_single_fp_cale_pane_g1

0xcf03,	// (0x0005a3da) list_single_fp_cale_pane_g2_ParamLimits

0xcf03,	// (0x0005a3da) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0005cc88) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0005cc88) list_single_fp_cale_pane_g

0xcf1c,	// (0x0005a3f3) list_single_fp_cale_pane_t1_ParamLimits

0xcf1c,	// (0x0005a3f3) list_single_fp_cale_pane_t1

0xcf2e,	// (0x0005a405) list_single_fp_cale_pane_t2_ParamLimits

0xcf2e,	// (0x0005a405) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0005cc8f) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0005cc8f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95ca,	// (0x00056aa1) main_dialer_pane

0x5682,	// (0x00052b59) aid_cell_size_keypad

0x568c,	// (0x00052b63) dialer_ne_pane

0x5694,	// (0x00052b6b) grid_dialer_command_1_pane

0x569c,	// (0x00052b73) grid_dialer_command_2_pane

0x56a4,	// (0x00052b7b) grid_dialer_keypad_pane

0x56b6,	// (0x00052b8d) bg_popup_call_pane_cp06_ParamLimits

0x56b6,	// (0x00052b8d) bg_popup_call_pane_cp06

0x56c2,	// (0x00052b99) dialer_ne_clear_pane_ParamLimits

0x56c2,	// (0x00052b99) dialer_ne_clear_pane

0xcf61,	// (0x0005a438) dialer_ne_pane_g1

0xcf69,	// (0x0005a440) dialer_ne_pane_t1_ParamLimits

0xcf69,	// (0x0005a440) dialer_ne_pane_t1

0x56ce,	// (0x00052ba5) dialer_ne_pane_t2_ParamLimits

0x56ce,	// (0x00052ba5) dialer_ne_pane_t2

0x56f8,	// (0x00052bcf) dialer_ne_pane_t3_ParamLimits

0x56f8,	// (0x00052bcf) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0005cc94) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0005cc94) dialer_ne_pane_t

0x5728,	// (0x00052bff) dialer_ne_pane_t3_copy1_ParamLimits

0x5728,	// (0x00052bff) dialer_ne_pane_t3_copy1

0x5757,	// (0x00052c2e) cell_dialer_keypad_pane_ParamLimits

0x5757,	// (0x00052c2e) cell_dialer_keypad_pane

0x576e,	// (0x00052c45) cell_dialer_command_1_pane_ParamLimits

0x576e,	// (0x00052c45) cell_dialer_command_1_pane

0x5784,	// (0x00052c5b) cell_dialer_command_2_pane_ParamLimits

0x5784,	// (0x00052c5b) cell_dialer_command_2_pane

0xcf7b,	// (0x0005a452) bg_button_pane_cp02_ParamLimits

0xcf7b,	// (0x0005a452) bg_button_pane_cp02

0x5793,	// (0x00052c6a) cell_dialer_keypad_pane_g1_ParamLimits

0x5793,	// (0x00052c6a) cell_dialer_keypad_pane_g1

0xcf7b,	// (0x0005a452) bg_button_pane_cp03_ParamLimits

0xcf7b,	// (0x0005a452) bg_button_pane_cp03

0x57a8,	// (0x00052c7f) cell_dialer_command_1_pane_g1_ParamLimits

0x57a8,	// (0x00052c7f) cell_dialer_command_1_pane_g1

0xcf87,	// (0x0005a45e) bg_button_pane_cp04

0x57bb,	// (0x00052c92) cell_dialer_command_2_pane_g1

0xa8f5,	// (0x00057dcc) bg_button_pane_cp06

0xcf8f,	// (0x0005a466) dialer_ne_clear_pane_g1

0xb241,	// (0x00058718) navi_pane_g2

0xb26f,	// (0x00058746) navi_pane_g3

0x0002,

0xf3e5,	// (0x0005c8bc) navi_pane_g

0xb33b,	// (0x00058812) navi_pane_mv_g2

0xb362,	// (0x00058839) navi_pane_mv_g5

0x31d6,	// (0x000506ad) navi_pane_mv_t1

0xa727,	// (0x00057bfe) main_clock2_pane

0x5808,	// (0x00052cdf) main_clock2_list_pane_ParamLimits

0x5808,	// (0x00052cdf) main_clock2_list_pane

0x5840,	// (0x00052d17) main_clock2_pane_t1_ParamLimits

0x5840,	// (0x00052d17) main_clock2_pane_t1

0x587e,	// (0x00052d55) main_clock2_pane_t2_ParamLimits

0x587e,	// (0x00052d55) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0005cca0) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0005cca0) main_clock2_pane_t

0x591c,	// (0x00052df3) popup_clock_analogue_window_cp03_ParamLimits

0x591c,	// (0x00052df3) popup_clock_analogue_window_cp03

0x5941,	// (0x00052e18) popup_clock_digital_window_cp02_ParamLimits

0x5941,	// (0x00052e18) popup_clock_digital_window_cp02

0x59b4,	// (0x00052e8b) main_clock2_list_single_pane_ParamLimits

0x59b4,	// (0x00052e8b) main_clock2_list_single_pane

0xa8f5,	// (0x00057dcc) list_highlight_pane_cp05

0xcfd5,	// (0x0005a4ac) main_clock2_list_single_pane_t1

0x1f2d,	// (0x0004f404) popup_toolbar_window_cp04_ParamLimits

0x4d8a,	// (0x00052261) camera2_autofocus_pane_g2_ParamLimits

0x4d8a,	// (0x00052261) camera2_autofocus_pane_g2

0x4d96,	// (0x0005226d) camera2_autofocus_pane_g3_ParamLimits

0x4d96,	// (0x0005226d) camera2_autofocus_pane_g3

0x4da2,	// (0x00052279) camera2_autofocus_pane_g4_ParamLimits

0x4da2,	// (0x00052279) camera2_autofocus_pane_g4

0x4dae,	// (0x00052285) camera2_autofocus_pane_g5_ParamLimits

0x4dae,	// (0x00052285) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0005cbe4) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0005cbe4) camera2_autofocus_pane_g

0x4ff1,	// (0x000524c8) camera2_autofocus_pane_cp_g2

0x4ff9,	// (0x000524d0) camera2_autofocus_pane_cp_g3

0x5001,	// (0x000524d8) camera2_autofocus_pane_cp_g4

0x5009,	// (0x000524e0) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0005cc4a) camera2_autofocus_pane_cp_g

0x56ae,	// (0x00052b85) popup_dialer_spcha_window

0x95ca,	// (0x00056aa1) bg_popup_sub_pane_cp07

0xcfe3,	// (0x0005a4ba) list_spcha_pane

0xcfeb,	// (0x0005a4c2) list_single_spcha_pane_ParamLimits

0xcfeb,	// (0x0005a4c2) list_single_spcha_pane

0x95ca,	// (0x00056aa1) list_highlight_pane_cp06

0xcffc,	// (0x0005a4d3) list_single_spcha_pane_t1

0xc1e2,	// (0x000596b9) popup_call2_audio_out_window_g4_ParamLimits

0xc1e2,	// (0x000596b9) popup_call2_audio_out_window_g4

0x95ca,	// (0x00056aa1) main_imed2_pane

0x9c86,	// (0x0005715d) popup_imed_adjust2_window

0x416b,	// (0x00051642) popup_imed_trans_window_ParamLimits

0x416b,	// (0x00051642) popup_imed_trans_window

0xc9eb,	// (0x00059ec2) popup_blid_sat_info2_window_t1

0xc9f9,	// (0x00059ed0) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0005cb79) popup_blid_sat_info2_window_t

0x5a5e,	// (0x00052f35) aid_size_cell_colour_35

0x5a7e,	// (0x00052f55) aid_size_cell_colour_112

0x5a9e,	// (0x00052f75) aid_size_cell_effect

0xc7a5,	// (0x00059c7c) bg_tb_trans_pane_cp02

0xad9e,	// (0x00058275) heading_imed_pane

0x5abe,	// (0x00052f95) listscroll_imed_pane

0xd00a,	// (0x0005a4e1) heading_imed_pane_g1

0xd012,	// (0x0005a4e9) heading_imed_pane_t1

0xd020,	// (0x0005a4f7) grid_imed_colour_35_pane_ParamLimits

0xd020,	// (0x0005a4f7) grid_imed_colour_35_pane

0x5aca,	// (0x00052fa1) grid_imed_effect_pane

0xd038,	// (0x0005a50f) list_imed_aspect_pane

0x5ae0,	// (0x00052fb7) scroll_pane_cp027_ParamLimits

0x5ae0,	// (0x00052fb7) scroll_pane_cp027

0x5af1,	// (0x00052fc8) cell_imed_effect_pane_ParamLimits

0x5af1,	// (0x00052fc8) cell_imed_effect_pane

0xd040,	// (0x0005a517) cell_imed_colour_pane_ParamLimits

0xd040,	// (0x0005a517) cell_imed_colour_pane

0xd082,	// (0x0005a559) cell_imed_colour_pane_g1_ParamLimits

0xd082,	// (0x0005a559) cell_imed_colour_pane_g1

0xd093,	// (0x0005a56a) hgihlgiht_grid_pane_cp016_ParamLimits

0xd093,	// (0x0005a56a) hgihlgiht_grid_pane_cp016

0x5b18,	// (0x00052fef) cell_imed_effect_pane_g1

0x5b20,	// (0x00052ff7) grid_highlight_pane_cp017

0xd0a4,	// (0x0005a57b) list_imed_single_pane_ParamLimits

0xd0a4,	// (0x0005a57b) list_imed_single_pane

0x95ca,	// (0x00056aa1) list_highlight_pane_cp07

0xd0ba,	// (0x0005a591) list_imed_aspect_pane_comp1_t1

0xc7a5,	// (0x00059c7c) bg_tb_trans_pane_cp05

0xd0dc,	// (0x0005a5b3) popup_imed_adjust2_window_g1

0xd103,	// (0x0005a5da) popup_imed_adjust2_window_t1

0xd11b,	// (0x0005a5f2) slider_imed_adjust_pane

0xd12f,	// (0x0005a606) slider_imed_adjust_pane_g1

0xd13f,	// (0x0005a616) slider_imed_adjust_pane_g2

0xd14f,	// (0x0005a626) slider_imed_adjust_pane_g3

0xd160,	// (0x0005a637) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0005ccbd) slider_imed_adjust_pane_g

0x5b29,	// (0x00053000) aid_size_cell_clipart2

0x5b35,	// (0x0005300c) grid_imed_clipart_pane

0xd171,	// (0x0005a648) scroll_pane_cp031

0x5b3f,	// (0x00053016) cell_imed_clipart_pane_ParamLimits

0x5b3f,	// (0x00053016) cell_imed_clipart_pane

0x5b63,	// (0x0005303a) cell_imed_clipart_pane_g1

0x95ca,	// (0x00056aa1) grid_highlight_pane_cp014

0x581d,	// (0x00052cf4) main_clock2_pane_g1_ParamLimits

0x581d,	// (0x00052cf4) main_clock2_pane_g1

0x595f,	// (0x00052e36) aid_call2_pane_cp10

0x5971,	// (0x00052e48) aid_call_pane_cp10

0xb1a0,	// (0x00058677) popup_clock_analogue_window_cp10_g1

0xb1a0,	// (0x00058677) popup_clock_analogue_window_cp10_g2

0x5983,	// (0x00052e5a) popup_clock_analogue_window_cp10_g3

0x5983,	// (0x00052e5a) popup_clock_analogue_window_cp10_g4

0xb1a0,	// (0x00058677) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0005ccab) popup_clock_analogue_window_cp10_g

0x5995,	// (0x00052e6c) popup_clock_analogue_window_cp10_t1

0x59c6,	// (0x00052e9d) clock_digital_number_pane_cp10_ParamLimits

0x59c6,	// (0x00052e9d) clock_digital_number_pane_cp10

0x59de,	// (0x00052eb5) clock_digital_number_pane_cp11_ParamLimits

0x59de,	// (0x00052eb5) clock_digital_number_pane_cp11

0x59f6,	// (0x00052ecd) clock_digital_number_pane_cp12_ParamLimits

0x59f6,	// (0x00052ecd) clock_digital_number_pane_cp12

0x5a0e,	// (0x00052ee5) clock_digital_number_pane_cp13_ParamLimits

0x5a0e,	// (0x00052ee5) clock_digital_number_pane_cp13

0x5a26,	// (0x00052efd) clock_digital_separator_pane_cp10_ParamLimits

0x5a26,	// (0x00052efd) clock_digital_separator_pane_cp10

0x5a3e,	// (0x00052f15) popup_clock_digital_window_cp02_t1_ParamLimits

0x5a3e,	// (0x00052f15) popup_clock_digital_window_cp02_t1

0xa63b,	// (0x00057b12) clock_digital_number_pane_cp10_g1

0xa63b,	// (0x00057b12) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0005ccc6) clock_digital_number_pane_cp10_g

0xa63b,	// (0x00057b12) clock_digital_separator_pane_cp10_g1

0xa63b,	// (0x00057b12) clock_digital_separator_pane_g2_cp10

0xb36a,	// (0x00058841) navi_pane_vded_g4

0xb373,	// (0x0005884a) navi_pane_vded_g5

0xb37c,	// (0x00058853) navi_pane_vded_t1

0x95ca,	// (0x00056aa1) main_vded_pane

0x5b6c,	// (0x00053043) main_vded_pane_g1

0x5b76,	// (0x0005304d) main_vded_pane_g2

0x5b80,	// (0x00053057) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0005cccb) main_vded_pane_g

0x5b8a,	// (0x00053061) main_vded_pane_t1

0x5b98,	// (0x0005306f) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0005ccd2) main_vded_pane_t

0x5ba6,	// (0x0005307d) vded_slider_pane

0x5bb0,	// (0x00053087) vded_video_pane

0xd179,	// (0x0005a650) vded_video_pane_g1

0x5bba,	// (0x00053091) vded_video_pane_g2

0xcbaf,	// (0x0005a086) vded_video_pane_g3

0x0002,

0xf800,	// (0x0005ccd7) vded_video_pane_g

0xd183,	// (0x0005a65a) vded_slider_pane_g1

0xd18c,	// (0x0005a663) vded_slider_pane_g2

0xd195,	// (0x0005a66c) vded_slider_pane_g3

0xd19e,	// (0x0005a675) vded_slider_pane_g4

0xd1a7,	// (0x0005a67e) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0005ccde) vded_slider_pane_g

0x558d,	// (0x00052a64) mup3_rocker_pane_ParamLimits

0x558d,	// (0x00052a64) mup3_rocker_pane

0x5bc3,	// (0x0005309a) mup3_control_keys_pane_g1

0x5bcb,	// (0x000530a2) mup3_control_keys_pane_g2

0x5bd3,	// (0x000530aa) mup3_control_keys_pane_g3

0x5bdb,	// (0x000530b2) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0005cce9) mup3_control_keys_pane_g

0x0e5a,	// (0x0004e331) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0e5a,	// (0x0004e331) popup_toolbar2_fixed_window_cp01

0x55c1,	// (0x00052a98) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55c1,	// (0x00052a98) popup_toolbar2_fixed_window_cp02

0xbb21,	// (0x00058ff8) popup_call2_audio_second_window_t4_ParamLimits

0xbb21,	// (0x00058ff8) popup_call2_audio_second_window_t4

0xc04f,	// (0x00059526) popup_call2_audio_first_window_t6_ParamLimits

0xc04f,	// (0x00059526) popup_call2_audio_first_window_t6

0xc2e5,	// (0x000597bc) popup_call2_audio_out_window_t6_ParamLimits

0xc2e5,	// (0x000597bc) popup_call2_audio_out_window_t6

0x95ca,	// (0x00056aa1) main_vitu_pane

0x5beb,	// (0x000530c2) aid_size_cell_itu_ParamLimits

0x5beb,	// (0x000530c2) aid_size_cell_itu

0xa46a,	// (0x00057941) bg_popup_window_pane_cp08_ParamLimits

0xa46a,	// (0x00057941) bg_popup_window_pane_cp08

0x5c01,	// (0x000530d8) field_vitu_entry_pane_ParamLimits

0x5c01,	// (0x000530d8) field_vitu_entry_pane

0x5c18,	// (0x000530ef) grid_vitu_function_pane_ParamLimits

0x5c18,	// (0x000530ef) grid_vitu_function_pane

0x5c33,	// (0x0005310a) grid_vitu_itu_pane_ParamLimits

0x5c33,	// (0x0005310a) grid_vitu_itu_pane

0x5c51,	// (0x00053128) cell_vitu_itu_pane_ParamLimits

0x5c51,	// (0x00053128) cell_vitu_itu_pane

0x5c75,	// (0x0005314c) cell_vitu_function_pane_ParamLimits

0x5c75,	// (0x0005314c) cell_vitu_function_pane

0xa46a,	// (0x00057941) bg_popup_sub_pane_cp08_ParamLimits

0xa46a,	// (0x00057941) bg_popup_sub_pane_cp08

0x5c90,	// (0x00053167) field_vitu_entry_pane_t1_ParamLimits

0x5c90,	// (0x00053167) field_vitu_entry_pane_t1

0xd1c8,	// (0x0005a69f) field_vitu_entry_pane_t2_ParamLimits

0xd1c8,	// (0x0005a69f) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0005ccf7) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0005ccf7) field_vitu_entry_pane_t

0xd1e5,	// (0x0005a6bc) bg_button_pane_cp05_ParamLimits

0xd1e5,	// (0x0005a6bc) bg_button_pane_cp05

0x5caf,	// (0x00053186) cell_vitu_itu_pane_g1

0x5cc7,	// (0x0005319e) cell_vitu_itu_pane_t1_ParamLimits

0x5cc7,	// (0x0005319e) cell_vitu_itu_pane_t1

0x5cd9,	// (0x000531b0) cell_vitu_itu_pane_t2_ParamLimits

0x5cd9,	// (0x000531b0) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0005ccfc) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0005ccfc) cell_vitu_itu_pane_t

0xd1f3,	// (0x0005a6ca) bg_button_pane_cp07

0x5d1c,	// (0x000531f3) cell_vitu_function_pane_g1

0x9ad5,	// (0x00056fac) main_calc_pane_g1

0x0c71,	// (0x0004e148) aid_visual_content_pane

0x95ca,	// (0x00056aa1) main_vradio_pane

0x5d25,	// (0x000531fc) main_vradio_pane_g1_ParamLimits

0x5d25,	// (0x000531fc) main_vradio_pane_g1

0xd1fd,	// (0x0005a6d4) main_vradio_pane_g2_ParamLimits

0xd1fd,	// (0x0005a6d4) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0005cd03) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0005cd03) main_vradio_pane_g

0x5d3e,	// (0x00053215) main_vradio_pane_t1_ParamLimits

0x5d3e,	// (0x00053215) main_vradio_pane_t1

0x5d53,	// (0x0005322a) main_vradio_pane_t2_ParamLimits

0x5d53,	// (0x0005322a) main_vradio_pane_t2

0xd20a,	// (0x0005a6e1) main_vradio_pane_t3_ParamLimits

0xd20a,	// (0x0005a6e1) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0005cd08) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0005cd08) main_vradio_pane_t

0x5d68,	// (0x0005323f) vradio_rocker_control_pane_ParamLimits

0x5d68,	// (0x0005323f) vradio_rocker_control_pane

0x5d7a,	// (0x00053251) vradio_station_info_pane_ParamLimits

0x5d7a,	// (0x00053251) vradio_station_info_pane

0xd21e,	// (0x0005a6f5) vradio_frequency_info_pane_ParamLimits

0xd21e,	// (0x0005a6f5) vradio_frequency_info_pane

0xcbaf,	// (0x0005a086) vradio_station_info_pane_g1

0xd22d,	// (0x0005a704) vradio_station_info_pane_t1_ParamLimits

0xd22d,	// (0x0005a704) vradio_station_info_pane_t1

0xd24f,	// (0x0005a726) vradio_station_info_pane_t2_ParamLimits

0xd24f,	// (0x0005a726) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0005cd0f) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0005cd0f) vradio_station_info_pane_t

0xd261,	// (0x0005a738) vradio_tuning_pane

0xd269,	// (0x0005a740) vradio_rocker_control_pane_g1

0xd271,	// (0x0005a748) vradio_rocker_control_pane_g2

0xd279,	// (0x0005a750) vradio_rocker_control_pane_g3

0xd281,	// (0x0005a758) vradio_rocker_control_pane_g4

0xd289,	// (0x0005a760) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0005cd14) vradio_rocker_control_pane_g

0x5d8c,	// (0x00053263) vradio_frequency_info_pane_g1

0xd291,	// (0x0005a768) vradio_frequency_info_pane_t1_ParamLimits

0xd291,	// (0x0005a768) vradio_frequency_info_pane_t1

0x5d96,	// (0x0005326d) vradio_tuning_pane_g1

0x5da1,	// (0x00053278) vradio_tuning_pane_t1

0x95f0,	// (0x00056ac7) area_side_right_pane_ParamLimits

0x95f0,	// (0x00056ac7) area_side_right_pane

0xc760,	// (0x00059c37) status_small_pane_g1

0xc768,	// (0x00059c3f) status_small_pane_g2

0xc771,	// (0x00059c48) status_small_pane_g3

0xc77a,	// (0x00059c51) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0005cacf) status_small_pane_g

0xc783,	// (0x00059c5a) status_small_pane_t1

0x95ca,	// (0x00056aa1) main_video3_pane

0xd2a5,	// (0x0005a77c) cams_zoom_vslider_pane

0xd2ad,	// (0x0005a784) image3_wide_pane_ParamLimits

0xd2ad,	// (0x0005a784) image3_wide_pane

0xd2c7,	// (0x0005a79e) image3_wide_small_pane

0xd2d3,	// (0x0005a7aa) main_video3_pane_g1_ParamLimits

0xd2d3,	// (0x0005a7aa) main_video3_pane_g1

0xd2ef,	// (0x0005a7c6) main_video3_pane_g2_ParamLimits

0xd2ef,	// (0x0005a7c6) main_video3_pane_g2

0x0001,

0xf848,	// (0x0005cd1f) main_video3_pane_g_ParamLimits

0xf848,	// (0x0005cd1f) main_video3_pane_g

0xd30b,	// (0x0005a7e2) main_video3_pane_t1_ParamLimits

0xd30b,	// (0x0005a7e2) main_video3_pane_t1

0xd336,	// (0x0005a80d) main_video3_pane_t2_ParamLimits

0xd336,	// (0x0005a80d) main_video3_pane_t2

0xd361,	// (0x0005a838) main_video3_pane_t3_ParamLimits

0xd361,	// (0x0005a838) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0005cd24) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0005cd24) main_video3_pane_t

0xd38e,	// (0x0005a865) cams_zoom_vslider_pane_g1

0xd397,	// (0x0005a86e) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0005cd2b) cams_zoom_vslider_pane_g

0xd39f,	// (0x0005a876) small_slider_vertical_pane

0xcbaf,	// (0x0005a086) small_slider_vertical_pane_g1

0xcbaf,	// (0x0005a086) small_slider_vertical_pane_g2

0xd3a7,	// (0x0005a87e) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0005cd30) small_slider_vertical_pane_g

0x95ca,	// (0x00056aa1) main_hwr_training_pane

0xd3b0,	// (0x0005a887) hwr_training_instruct_pane_ParamLimits

0xd3b0,	// (0x0005a887) hwr_training_instruct_pane

0x5db0,	// (0x00053287) hwr_training_navi_pane_ParamLimits

0x5db0,	// (0x00053287) hwr_training_navi_pane

0x5dcf,	// (0x000532a6) hwr_training_write_pane_ParamLimits

0x5dcf,	// (0x000532a6) hwr_training_write_pane

0x95ca,	// (0x00056aa1) bg_frame_shadow_pane

0xd3e7,	// (0x0005a8be) hwr_training_write_pane_g1

0xd3ef,	// (0x0005a8c6) hwr_training_write_pane_g2

0xd3f7,	// (0x0005a8ce) hwr_training_write_pane_g3

0xd3ff,	// (0x0005a8d6) hwr_training_write_pane_g4

0xd407,	// (0x0005a8de) hwr_training_write_pane_g5

0xd40f,	// (0x0005a8e6) hwr_training_write_pane_g6

0xd417,	// (0x0005a8ee) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0005cd37) hwr_training_write_pane_g

0x9d7f,	// (0x00057256) hwr_training_navi_pane_g1_ParamLimits

0x9d7f,	// (0x00057256) hwr_training_navi_pane_g1

0x9d91,	// (0x00057268) hwr_training_navi_pane_g2_ParamLimits

0x9d91,	// (0x00057268) hwr_training_navi_pane_g2

0x9da3,	// (0x0005727a) hwr_training_navi_pane_g3_ParamLimits

0x9da3,	// (0x0005727a) hwr_training_navi_pane_g3

0x9db3,	// (0x0005728a) hwr_training_navi_pane_g4_ParamLimits

0x9db3,	// (0x0005728a) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0005cd46) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0005cd46) hwr_training_navi_pane_g

0x9dc0,	// (0x00057297) hwr_training_navi_pane_t1

0x5e19,	// (0x000532f0) list_single_hwr_training_instruct_pane_ParamLimits

0x5e19,	// (0x000532f0) list_single_hwr_training_instruct_pane

0xd41f,	// (0x0005a8f6) list_single_hwr_training_instruct_pane_t1

0xcaef,	// (0x00059fc6) bg_frame_shadow_pane_g1

0xd42e,	// (0x0005a905) bg_frame_shadow_pane_g2

0xd436,	// (0x0005a90d) bg_frame_shadow_pane_g3

0xd43e,	// (0x0005a915) bg_frame_shadow_pane_g4

0xd446,	// (0x0005a91d) bg_frame_shadow_pane_g5

0xd44e,	// (0x0005a925) bg_frame_shadow_pane_g6

0xd456,	// (0x0005a92d) bg_frame_shadow_pane_g7

0xa7f2,	// (0x00057cc9) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0005cd51) bg_frame_shadow_pane_g

0x95ca,	// (0x00056aa1) main_video_tele_dialer_pane

0x5e30,	// (0x00053307) aid_size_cell_video_keypad_ParamLimits

0x5e30,	// (0x00053307) aid_size_cell_video_keypad

0x5e4a,	// (0x00053321) grid_video_dialer_keypad_pane_ParamLimits

0x5e4a,	// (0x00053321) grid_video_dialer_keypad_pane

0x5e98,	// (0x0005336f) video_down_pane_cp_ParamLimits

0x5e98,	// (0x0005336f) video_down_pane_cp

0x5eca,	// (0x000533a1) cell_video_dialer_keypad_pane_ParamLimits

0x5eca,	// (0x000533a1) cell_video_dialer_keypad_pane

0xd45e,	// (0x0005a935) bg_button_pane_cp08_ParamLimits

0xd45e,	// (0x0005a935) bg_button_pane_cp08

0x5eec,	// (0x000533c3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5eec,	// (0x000533c3) cell_video_dialer_keypad_pane_g1

0x5577,	// (0x00052a4e) mup3_rocker2_pane_ParamLimits

0x5577,	// (0x00052a4e) mup3_rocker2_pane

0xcbaf,	// (0x0005a086) mup3_rocker2_pane_g1

0x4054,	// (0x0005152b) main_dialer2_pane

0x95ca,	// (0x00056aa1) main_mp4_pane

0x9dd6,	// (0x000572ad) main_mp4_pane_g1_ParamLimits

0x9dd6,	// (0x000572ad) main_mp4_pane_g1

0x9dd6,	// (0x000572ad) main_mp4_pane_g2_ParamLimits

0x9dd6,	// (0x000572ad) main_mp4_pane_g2

0x5f27,	// (0x000533fe) main_mp4_pane_g3_ParamLimits

0x5f27,	// (0x000533fe) main_mp4_pane_g3

0x9de4,	// (0x000572bb) main_mp4_pane_g4_ParamLimits

0x9de4,	// (0x000572bb) main_mp4_pane_g4

0x9e0c,	// (0x000572e3) main_mp4_pane_g5_ParamLimits

0x9e0c,	// (0x000572e3) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0005cd71) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0005cd71) main_mp4_pane_g

0x9e5c,	// (0x00057333) main_mp4_pane_t1_ParamLimits

0x9e5c,	// (0x00057333) main_mp4_pane_t1

0x9eb8,	// (0x0005738f) main_mp4_pane_t2_ParamLimits

0x9eb8,	// (0x0005738f) main_mp4_pane_t2

0xd46a,	// (0x0005a941) main_mp4_pane_t3_ParamLimits

0xd46a,	// (0x0005a941) main_mp4_pane_t3

0x9f0a,	// (0x000573e1) main_mp4_pane_t4_ParamLimits

0x9f0a,	// (0x000573e1) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0005cd7e) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0005cd7e) main_mp4_pane_t

0x9f4e,	// (0x00057425) mp4_progress_pane_ParamLimits

0x9f4e,	// (0x00057425) mp4_progress_pane

0x9f98,	// (0x0005746f) mp4_rocker_pane_ParamLimits

0x9f98,	// (0x0005746f) mp4_rocker_pane

0xd492,	// (0x0005a969) mp4_progress_pane_t1

0xd4ab,	// (0x0005a982) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0005cd87) mp4_progress_pane_t

0xd4c4,	// (0x0005a99b) mup_progress_pane_cp04

0xcbaf,	// (0x0005a086) mp4_rocker_pane_g1

0x5f63,	// (0x0005343a) aid_cell_size_keypad2_ParamLimits

0x5f63,	// (0x0005343a) aid_cell_size_keypad2

0x5f79,	// (0x00053450) dialer2_ne_pane_ParamLimits

0x5f79,	// (0x00053450) dialer2_ne_pane

0x5f93,	// (0x0005346a) grid_dialer2_keypad_pane_ParamLimits

0x5f93,	// (0x0005346a) grid_dialer2_keypad_pane

0xc992,	// (0x00059e69) bg_popup_call_pane_cp07_ParamLimits

0xc992,	// (0x00059e69) bg_popup_call_pane_cp07

0x5fb1,	// (0x00053488) dialer2_ne_pane_t1_ParamLimits

0x5fb1,	// (0x00053488) dialer2_ne_pane_t1

0x5fee,	// (0x000534c5) cell_dialer2_keypad_pane_ParamLimits

0x5fee,	// (0x000534c5) cell_dialer2_keypad_pane

0xd4e2,	// (0x0005a9b9) bg_button_pane_pane_cp04_ParamLimits

0xd4e2,	// (0x0005a9b9) bg_button_pane_pane_cp04

0x6010,	// (0x000534e7) cell_dialer2_keypad_pane_g1_ParamLimits

0x6010,	// (0x000534e7) cell_dialer2_keypad_pane_g1

0x1e01,	// (0x0004f2d8) aid_placing_vt_set_content_ParamLimits

0x1e01,	// (0x0004f2d8) aid_placing_vt_set_content

0x1e29,	// (0x0004f300) aid_placing_vt_set_title_ParamLimits

0x1e29,	// (0x0004f300) aid_placing_vt_set_title

0x95ca,	// (0x00056aa1) main_image3_pane

0x60d6,	// (0x000535ad) area_side_right_pane_cp01_ParamLimits

0x60d6,	// (0x000535ad) area_side_right_pane_cp01

0x9dd6,	// (0x000572ad) main_image3_pane_g1_ParamLimits

0x9dd6,	// (0x000572ad) main_image3_pane_g1

0x60ed,	// (0x000535c4) main_image3_pane_g2_ParamLimits

0x60ed,	// (0x000535c4) main_image3_pane_g2

0x6115,	// (0x000535ec) main_image3_pane_g3_ParamLimits

0x6115,	// (0x000535ec) main_image3_pane_g3

0x613f,	// (0x00053616) main_image3_pane_g4_ParamLimits

0x613f,	// (0x00053616) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0005cd96) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0005cd96) main_image3_pane_g

0x6169,	// (0x00053640) main_image3_pane_t1_ParamLimits

0x6169,	// (0x00053640) main_image3_pane_t1

0x61c1,	// (0x00053698) main_image3_pane_t2_ParamLimits

0x61c1,	// (0x00053698) main_image3_pane_t2

0x6213,	// (0x000536ea) main_image3_pane_t3_ParamLimits

0x6213,	// (0x000536ea) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0005cd9f) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0005cd9f) main_image3_pane_t

0xa46a,	// (0x00057941) grid_sctrl_middle_pane_cp01_ParamLimits

0xa46a,	// (0x00057941) grid_sctrl_middle_pane_cp01

0x629b,	// (0x00053772) cell_sctrl_middle_pane_cp01_ParamLimits

0x629b,	// (0x00053772) cell_sctrl_middle_pane_cp01

0x62b8,	// (0x0005378f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x62b8,	// (0x0005378f) cell_sctrl_middle_pane_cp01_g1

0x95ca,	// (0x00056aa1) main_call4_pane

0x62ce,	// (0x000537a5) aid_size_button_call4_ParamLimits

0x62ce,	// (0x000537a5) aid_size_button_call4

0x62ff,	// (0x000537d6) call4_windows_pane_ParamLimits

0x62ff,	// (0x000537d6) call4_windows_pane

0x631f,	// (0x000537f6) grid_call4_button_pane_ParamLimits

0x631f,	// (0x000537f6) grid_call4_button_pane

0xd4ee,	// (0x0005a9c5) call4_windows_conf_pane

0xd503,	// (0x0005a9da) popup_call4_audio_first_window_ParamLimits

0xd503,	// (0x0005a9da) popup_call4_audio_first_window

0xd54f,	// (0x0005aa26) popup_call4_audio_second_window_ParamLimits

0xd54f,	// (0x0005aa26) popup_call4_audio_second_window

0xd563,	// (0x0005aa3a) popup_call4_audio_wait_window_ParamLimits

0xd563,	// (0x0005aa3a) popup_call4_audio_wait_window

0x634c,	// (0x00053823) cell_call4_button_pane_ParamLimits

0x634c,	// (0x00053823) cell_call4_button_pane

0x6375,	// (0x0005384c) bg_button_pane_cp09_ParamLimits

0x6375,	// (0x0005384c) bg_button_pane_cp09

0x6381,	// (0x00053858) cell_call4_button_pane_g1_ParamLimits

0x6381,	// (0x00053858) cell_call4_button_pane_g1

0x63a7,	// (0x0005387e) cell_call4_button_pane_t1_ParamLimits

0x63a7,	// (0x0005387e) cell_call4_button_pane_t1

0xd5ab,	// (0x0005aa82) popup_call4_audio_conf_window_ParamLimits

0xd5ab,	// (0x0005aa82) popup_call4_audio_conf_window

0x55d7,	// (0x00052aae) mup3_progress_pane_t1_ParamLimits

0x55f6,	// (0x00052acd) mup3_progress_pane_t2_ParamLimits

0xce8a,	// (0x0005a361) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0005cc73) mup3_progress_pane_t_ParamLimits

0xcea7,	// (0x0005a37e) mup_progress_pane_cp03_ParamLimits

0x5be3,	// (0x000530ba) mup3_control_keys_pane_g4_copy1

0x9f7c,	// (0x00057453) mp4_rocker2_pane_ParamLimits

0x9f7c,	// (0x00057453) mp4_rocker2_pane

0xd5bf,	// (0x0005aa96) mp4_rocker2_pane_g1

0xd5c7,	// (0x0005aa9e) mp4_rocker2_pane_g2

0x9fea,	// (0x000574c1) mp4_rocker2_pane_g3

0x9ff2,	// (0x000574c9) mp4_rocker2_pane_g4

0x9ffa,	// (0x000574d1) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0005cda8) mp4_rocker2_pane_g

0x95ca,	// (0x00056aa1) main_camera4_pane

0x95ca,	// (0x00056aa1) main_video4_pane

0x5e66,	// (0x0005333d) main_video_tele_dialer_pane_t1_ParamLimits

0x5e66,	// (0x0005333d) main_video_tele_dialer_pane_t1

0x5e7f,	// (0x00053356) main_video_tele_dialer_pane_t2_ParamLimits

0x5e7f,	// (0x00053356) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0005cd62) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0005cd62) main_video_tele_dialer_pane_t

0x63e5,	// (0x000538bc) cam4_autofocus_pane_ParamLimits

0x63e5,	// (0x000538bc) cam4_autofocus_pane

0x63fb,	// (0x000538d2) cam4_image_uncrop_pane_ParamLimits

0x63fb,	// (0x000538d2) cam4_image_uncrop_pane

0x6415,	// (0x000538ec) cam4_indicators_pane_ParamLimits

0x6415,	// (0x000538ec) cam4_indicators_pane

0x6440,	// (0x00053917) main_camera4_pane_g1_ParamLimits

0x6440,	// (0x00053917) main_camera4_pane_g1

0x6452,	// (0x00053929) main_camera4_pane_g2_ParamLimits

0x6452,	// (0x00053929) main_camera4_pane_g2

0x6465,	// (0x0005393c) main_camera4_pane_g3_ParamLimits

0x6465,	// (0x0005393c) main_camera4_pane_g3

0x6478,	// (0x0005394f) main_camera4_pane_g4_ParamLimits

0x6478,	// (0x0005394f) main_camera4_pane_g4

0x648b,	// (0x00053962) main_camera4_pane_g5_ParamLimits

0x648b,	// (0x00053962) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0005cdb3) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0005cdb3) main_camera4_pane_g

0x64af,	// (0x00053986) main_camera4_pane_t1_ParamLimits

0x64af,	// (0x00053986) main_camera4_pane_t1

0xce0f,	// (0x0005a2e6) bg_tb_trans_pane_cp06

0xa026,	// (0x000574fd) cam4_indicators_pane_g1

0xa037,	// (0x0005750e) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0005cdce) cam4_indicators_pane_g

0xa055,	// (0x0005752c) cam4_indicators_pane_t1

0x6513,	// (0x000539ea) main_video4_pane_g1_ParamLimits

0x6513,	// (0x000539ea) main_video4_pane_g1

0x6522,	// (0x000539f9) main_video4_pane_g2_ParamLimits

0x6522,	// (0x000539f9) main_video4_pane_g2

0x6531,	// (0x00053a08) main_video4_pane_g3_ParamLimits

0x6531,	// (0x00053a08) main_video4_pane_g3

0x6540,	// (0x00053a17) main_video4_pane_g4_ParamLimits

0x6540,	// (0x00053a17) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0005cdd5) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0005cdd5) main_video4_pane_g

0x655e,	// (0x00053a35) vid4_indicators_pane_ParamLimits

0x655e,	// (0x00053a35) vid4_indicators_pane

0x658c,	// (0x00053a63) video4_image_uncrop_cif_pane_ParamLimits

0x658c,	// (0x00053a63) video4_image_uncrop_cif_pane

0x65a6,	// (0x00053a7d) video4_image_uncrop_nhd_pane_ParamLimits

0x65a6,	// (0x00053a7d) video4_image_uncrop_nhd_pane

0x63fb,	// (0x000538d2) video4_image_uncrop_vga_pane_ParamLimits

0x63fb,	// (0x000538d2) video4_image_uncrop_vga_pane

0xa46a,	// (0x00057941) bg_tb_trans_pane_cp07

0xa07f,	// (0x00057556) vid4_indicators_pane_g1

0xa093,	// (0x0005756a) vid4_indicators_pane_g2

0xa0a7,	// (0x0005757e) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0005cde0) vid4_indicators_pane_g

0xa0d4,	// (0x000575ab) vid4_indicators_pane_t1

0x65ba,	// (0x00053a91) cam4_autofocus_pane_g1

0x65c2,	// (0x00053a99) cam4_autofocus_pane_g2

0x65ca,	// (0x00053aa1) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0005cdeb) cam4_autofocus_pane_g

0x65d2,	// (0x00053aa9) cam4_autofocus_pane_g3_copy1

0x5eae,	// (0x00053385) video_down_pane_cp_t1

0x5ebc,	// (0x00053393) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0005cd67) video_down_pane_cp_t

0xa46a,	// (0x00057941) popup_vitu2_window_ParamLimits

0xa46a,	// (0x00057941) popup_vitu2_window

0x65da,	// (0x00053ab1) aid_size_cell2_itu2_ParamLimits

0x65da,	// (0x00053ab1) aid_size_cell2_itu2

0x6600,	// (0x00053ad7) aid_size_cell_itu2_ParamLimits

0x6600,	// (0x00053ad7) aid_size_cell_itu2

0x665b,	// (0x00053b32) bg_popup_window_pane_cp09_ParamLimits

0x665b,	// (0x00053b32) bg_popup_window_pane_cp09

0x6669,	// (0x00053b40) field_vitu2_entry_pane_ParamLimits

0x6669,	// (0x00053b40) field_vitu2_entry_pane

0x668c,	// (0x00053b63) grid_vitu2_function_pane_ParamLimits

0x668c,	// (0x00053b63) grid_vitu2_function_pane

0x66d7,	// (0x00053bae) grid_vitu2_itu_pane_ParamLimits

0x66d7,	// (0x00053bae) grid_vitu2_itu_pane

0x676a,	// (0x00053c41) cell_vitu2_itu_pane_ParamLimits

0x676a,	// (0x00053c41) cell_vitu2_itu_pane

0x6796,	// (0x00053c6d) cell_vitu2_function_pane_ParamLimits

0x6796,	// (0x00053c6d) cell_vitu2_function_pane

0xd5cf,	// (0x0005aaa6) bg_popup_call_pane_cp08_ParamLimits

0xd5cf,	// (0x0005aaa6) bg_popup_call_pane_cp08

0xd5e6,	// (0x0005aabd) field_vitu2_entry_pane_g1

0xd5f2,	// (0x0005aac9) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0005cdf2) field_vitu2_entry_pane_g

0x016e,	// (0x0004d645) field_vitu2_entry_pane_t1_ParamLimits

0x016e,	// (0x0004d645) field_vitu2_entry_pane_t1

0x67d5,	// (0x00053cac) field_vitu2_entry_pane_t2_ParamLimits

0x67d5,	// (0x00053cac) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0005cdf9) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0005cdf9) field_vitu2_entry_pane_t

0x67f2,	// (0x00053cc9) bg_button_pane_cp010_ParamLimits

0x67f2,	// (0x00053cc9) bg_button_pane_cp010

0xa0eb,	// (0x000575c2) cell_vitu2_itu_pane_g1

0x680e,	// (0x00053ce5) cell_vitu2_itu_pane_t1_ParamLimits

0x680e,	// (0x00053ce5) cell_vitu2_itu_pane_t1

0x019f,	// (0x0004d676) cell_vitu2_itu_pane_t2_ParamLimits

0x019f,	// (0x0004d676) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0005ce03) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0005ce03) cell_vitu2_itu_pane_t

0xa46a,	// (0x00057941) bg_button_pane_cp011

0x686c,	// (0x00053d43) cell_vitu2_function_pane_g1

0x95ca,	// (0x00056aa1) main_myfav_hc_pane

0x6263,	// (0x0005373a) popup_image3_note_pane_ParamLimits

0x6263,	// (0x0005373a) popup_image3_note_pane

0x627f,	// (0x00053756) popup_image3_tool_bar_pane_ParamLimits

0x627f,	// (0x00053756) popup_image3_tool_bar_pane

0x022d,	// (0x0004d704) cell_vitu2_itu_pane_t3_ParamLimits

0x022d,	// (0x0004d704) cell_vitu2_itu_pane_t3

0x95ca,	// (0x00056aa1) bg_popup_trans_pane

0xd614,	// (0x0005aaeb) grid_image3_tool_bar_pane

0xd61e,	// (0x0005aaf5) bg_popup_trans_pane_g1

0xab4e,	// (0x00058025) bg_popup_trans_pane_g2

0xd626,	// (0x0005aafd) bg_popup_trans_pane_g3

0xd62e,	// (0x0005ab05) bg_popup_trans_pane_g4

0xd636,	// (0x0005ab0d) bg_popup_trans_pane_g5

0xd63e,	// (0x0005ab15) bg_popup_trans_pane_g6

0xd646,	// (0x0005ab1d) bg_popup_trans_pane_g7

0xd64e,	// (0x0005ab25) bg_popup_trans_pane_g8

0xab2e,	// (0x00058005) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0005ce0a) bg_popup_trans_pane_g

0xd656,	// (0x0005ab2d) cell_image3_tool_bar_pane_ParamLimits

0xd656,	// (0x0005ab2d) cell_image3_tool_bar_pane

0xcbaf,	// (0x0005a086) cell_image3_tool_bar_pane_g1

0x95ca,	// (0x00056aa1) bg_popup_trans_pane_cp1

0xd66a,	// (0x0005ab41) popup_image3_note_pane_t1

0xd678,	// (0x0005ab4f) popup_image3_note_pane_t2

0xd686,	// (0x0005ab5d) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0005ce1d) popup_image3_note_pane_t

0xd694,	// (0x0005ab6b) popup_image3_note_pane_t3_copy1

0x6880,	// (0x00053d57) bg_myfav_hc_instruction_pane_ParamLimits

0x6880,	// (0x00053d57) bg_myfav_hc_instruction_pane

0x6896,	// (0x00053d6d) cell_myfav_contact_pane_ParamLimits

0x6896,	// (0x00053d6d) cell_myfav_contact_pane

0x68b4,	// (0x00053d8b) cell_myfav_contact_pane_cp1_ParamLimits

0x68b4,	// (0x00053d8b) cell_myfav_contact_pane_cp1

0x68cc,	// (0x00053da3) cell_myfav_contact_pane_cp2_ParamLimits

0x68cc,	// (0x00053da3) cell_myfav_contact_pane_cp2

0x68e4,	// (0x00053dbb) cell_myfav_contact_pane_cp3_ParamLimits

0x68e4,	// (0x00053dbb) cell_myfav_contact_pane_cp3

0x68fb,	// (0x00053dd2) cell_myfav_contact_pane_cp4_ParamLimits

0x68fb,	// (0x00053dd2) cell_myfav_contact_pane_cp4

0x6913,	// (0x00053dea) cell_myfav_contact_pane_cp5_ParamLimits

0x6913,	// (0x00053dea) cell_myfav_contact_pane_cp5

0x6927,	// (0x00053dfe) cell_myfav_contact_pane_cp6_ParamLimits

0x6927,	// (0x00053dfe) cell_myfav_contact_pane_cp6

0x693d,	// (0x00053e14) cell_myfav_contact_pane_cp7_ParamLimits

0x693d,	// (0x00053e14) cell_myfav_contact_pane_cp7

0xd6a2,	// (0x0005ab79) listscroll_gen_pane_cp05

0x6957,	// (0x00053e2e) main_myfav_hc_pane_g1_ParamLimits

0x6957,	// (0x00053e2e) main_myfav_hc_pane_g1

0x6971,	// (0x00053e48) main_myfav_hc_pane_g2_ParamLimits

0x6971,	// (0x00053e48) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0005ce24) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0005ce24) main_myfav_hc_pane_g

0x69a3,	// (0x00053e7a) main_myfav_hc_pane_t1_ParamLimits

0x69a3,	// (0x00053e7a) main_myfav_hc_pane_t1

0xd6ab,	// (0x0005ab82) main_myfav_hc_pane_t2_ParamLimits

0xd6ab,	// (0x0005ab82) main_myfav_hc_pane_t2

0xd6bd,	// (0x0005ab94) main_myfav_hc_pane_t3_ParamLimits

0xd6bd,	// (0x0005ab94) main_myfav_hc_pane_t3

0x69ba,	// (0x00053e91) main_myfav_hc_pane_t4_ParamLimits

0x69ba,	// (0x00053e91) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0005ce2b) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0005ce2b) main_myfav_hc_pane_t

0xcbaf,	// (0x0005a086) bg_myfav_hc_instruction_pane_g1

0xd6cf,	// (0x0005aba6) cell_myfav_contact_pane_g1_ParamLimits

0xd6cf,	// (0x0005aba6) cell_myfav_contact_pane_g1

0xd6cf,	// (0x0005aba6) cell_myfav_contact_pane_g2_ParamLimits

0xd6cf,	// (0x0005aba6) cell_myfav_contact_pane_g2

0xd6db,	// (0x0005abb2) cell_myfav_contact_pane_g3_ParamLimits

0xd6db,	// (0x0005abb2) cell_myfav_contact_pane_g3

0xce74,	// (0x0005a34b) cell_myfav_contact_pane_g4_ParamLimits

0xce74,	// (0x0005a34b) cell_myfav_contact_pane_g4

0xd6e8,	// (0x0005abbf) cell_myfav_contact_pane_g5_ParamLimits

0xd6e8,	// (0x0005abbf) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0005ce36) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0005ce36) cell_myfav_contact_pane_g

0x698b,	// (0x00053e62) main_myfav_hc_pane_g3_ParamLimits

0x698b,	// (0x00053e62) main_myfav_hc_pane_g3

0x0dbc,	// (0x0004e293) popup_adpt_find_window

0x69e2,	// (0x00053eb9) afind_page_pane_ParamLimits

0x69e2,	// (0x00053eb9) afind_page_pane

0x69f7,	// (0x00053ece) aid_size_cell_afind_ParamLimits

0x69f7,	// (0x00053ece) aid_size_cell_afind

0x6a15,	// (0x00053eec) bg_popup_sub_pane_cp09_ParamLimits

0x6a15,	// (0x00053eec) bg_popup_sub_pane_cp09

0x6a22,	// (0x00053ef9) find_pane_cp01_ParamLimits

0x6a22,	// (0x00053ef9) find_pane_cp01

0xd6f4,	// (0x0005abcb) grid_afind_control_pane_ParamLimits

0xd6f4,	// (0x0005abcb) grid_afind_control_pane

0x6a2f,	// (0x00053f06) grid_afind_pane_ParamLimits

0x6a2f,	// (0x00053f06) grid_afind_pane

0x6a4e,	// (0x00053f25) cell_afind_pane_ParamLimits

0x6a4e,	// (0x00053f25) cell_afind_pane

0xcbaf,	// (0x0005a086) afind_page_pane_g1

0x6ab5,	// (0x00053f8c) afind_page_pane_g2

0x6abe,	// (0x00053f95) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0005ce41) afind_page_pane_g

0x6ac7,	// (0x00053f9e) afind_page_pane_t1

0xd708,	// (0x0005abdf) cell_afind_grid_control_pane_ParamLimits

0xd708,	// (0x0005abdf) cell_afind_grid_control_pane

0xd4e2,	// (0x0005a9b9) bg_button_pane_cp69_ParamLimits

0xd4e2,	// (0x0005a9b9) bg_button_pane_cp69

0x6ae7,	// (0x00053fbe) cell_afind_pane_g1_ParamLimits

0x6ae7,	// (0x00053fbe) cell_afind_pane_g1

0x6af4,	// (0x00053fcb) cell_afind_pane_t1_ParamLimits

0x6af4,	// (0x00053fcb) cell_afind_pane_t1

0xa947,	// (0x00057e1e) bg_button_pane_cp72

0xd717,	// (0x0005abee) cell_afind_grid_control_pane_g1

0x3b12,	// (0x00050fe9) aid_image_placing_area_ParamLimits

0x3b12,	// (0x00050fe9) aid_image_placing_area

0xd1b0,	// (0x0005a687) field_vitu_entry_pane_g1_ParamLimits

0xd1b0,	// (0x0005a687) field_vitu_entry_pane_g1

0xd1bc,	// (0x0005a693) field_vitu_entry_pane_g2_ParamLimits

0xd1bc,	// (0x0005a693) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0005ccf2) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0005ccf2) field_vitu_entry_pane_g

0x5caf,	// (0x00053186) cell_vitu_itu_pane_g1_ParamLimits

0x5cff,	// (0x000531d6) cell_vitu_itu_pane_t3_ParamLimits

0x5cff,	// (0x000531d6) cell_vitu_itu_pane_t3

0xd492,	// (0x0005a969) mp4_progress_pane_t1_ParamLimits

0xd4ab,	// (0x0005a982) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0005cd87) mp4_progress_pane_t_ParamLimits

0xd4c4,	// (0x0005a99b) mup_progress_pane_cp04_ParamLimits

0x69ce,	// (0x00053ea5) main_myfav_hc_pane_t5_ParamLimits

0x69ce,	// (0x00053ea5) main_myfav_hc_pane_t5

0x95e8,	// (0x00056abf) aid_zoom_text_primary

0x0dbc,	// (0x0004e293) popup_adpt_find_window_ParamLimits

0xa46a,	// (0x00057941) main_cam_set_pane

0x642c,	// (0x00053903) cam4_zoom_pane_ParamLimits

0x642c,	// (0x00053903) cam4_zoom_pane

0x6b06,	// (0x00053fdd) main_cam_set_pane_g1_ParamLimits

0x6b06,	// (0x00053fdd) main_cam_set_pane_g1

0x6b14,	// (0x00053feb) main_cam_set_pane_g2_ParamLimits

0x6b14,	// (0x00053feb) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0005ce48) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0005ce48) main_cam_set_pane_g

0x6b35,	// (0x0005400c) main_cam_set_pane_t1_ParamLimits

0x6b35,	// (0x0005400c) main_cam_set_pane_t1

0x6b50,	// (0x00054027) main_cset_listscroll_pane_ParamLimits

0x6b50,	// (0x00054027) main_cset_listscroll_pane

0x6b70,	// (0x00054047) main_cset_slider_pane_ParamLimits

0x6b70,	// (0x00054047) main_cset_slider_pane

0xd728,	// (0x0005abff) main_cset_list_pane_ParamLimits

0xd728,	// (0x0005abff) main_cset_list_pane

0xd738,	// (0x0005ac0f) scroll_pane_cp028

0x6b96,	// (0x0005406d) aid_area_touch_slider

0x6bb2,	// (0x00054089) cset_slider_pane

0x6bdc,	// (0x000540b3) main_cset_slider_pane_g1

0x6bf1,	// (0x000540c8) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0005ce4d) main_cset_slider_pane_g

0xd771,	// (0x0005ac48) main_cset_slider_pane_t1

0x6cad,	// (0x00054184) main_cset_slider_pane_t2

0x6cc7,	// (0x0005419e) main_cset_slider_pane_t3

0x6ce1,	// (0x000541b8) main_cset_slider_pane_t4

0x6cfb,	// (0x000541d2) main_cset_slider_pane_t5

0x6d15,	// (0x000541ec) main_cset_slider_pane_t6

0x6d2a,	// (0x00054201) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0005ce72) main_cset_slider_pane_t

0x6e2e,	// (0x00054305) cset_list_set_pane_ParamLimits

0x6e2e,	// (0x00054305) cset_list_set_pane

0x6e41,	// (0x00054318) aid_position_infowindow_above

0x6e49,	// (0x00054320) aid_position_infowindow_below

0x6e51,	// (0x00054328) cset_list_set_pane_g1_ParamLimits

0x6e51,	// (0x00054328) cset_list_set_pane_g1

0x028b,	// (0x0004d762) cset_list_set_pane_g3_ParamLimits

0x028b,	// (0x0004d762) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0005ce91) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0005ce91) cset_list_set_pane_g

0x6e5d,	// (0x00054334) cset_list_set_pane_t1_ParamLimits

0x6e5d,	// (0x00054334) cset_list_set_pane_t1

0xa46a,	// (0x00057941) list_highlight_pane_cp021_ParamLimits

0xa46a,	// (0x00057941) list_highlight_pane_cp021

0xb4d0,	// (0x000589a7) cset_slider_pane_g1

0xb4e2,	// (0x000589b9) cset_slider_pane_g2

0xb4d9,	// (0x000589b0) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0005ce96) cset_slider_pane_g

0xa0fd,	// (0x000575d4) aid_area_touch_cam4_zoom

0xa105,	// (0x000575dc) cam4_zoom_cont_pane

0xa10d,	// (0x000575e4) cam4_zoom_pane_g1

0xa115,	// (0x000575ec) cam4_zoom_pane_g2

0x6e72,	// (0x00054349) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0005ce9d) cam4_zoom_pane_g

0xd811,	// (0x0005ace8) cam4_zoom_cont_pane_g1

0xd81a,	// (0x0005acf1) cam4_zoom_cont_pane_g2

0xd823,	// (0x0005acfa) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0005cea4) cam4_zoom_cont_pane_g

0x62ec,	// (0x000537c3) call4_image_pane_ParamLimits

0x62ec,	// (0x000537c3) call4_image_pane

0xd4ee,	// (0x0005a9c5) call4_windows_conf_pane_ParamLimits

0xd52d,	// (0x0005aa04) popup_call4_audio_in_window_ParamLimits

0xd52d,	// (0x0005aa04) popup_call4_audio_in_window

0x95ca,	// (0x00056aa1) bg_popup_call2_act_pane_cp02

0xd5a3,	// (0x0005aa7a) call4_list_conf_pane

0xcbaf,	// (0x0005a086) call4_image_pane_g1

0xcbaf,	// (0x0005a086) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0005cbb3) call4_image_pane_g

0xd82c,	// (0x0005ad03) list_single_graphic_popup_conf4_pane_ParamLimits

0xd82c,	// (0x0005ad03) list_single_graphic_popup_conf4_pane

0x95ca,	// (0x00056aa1) list_highlight_pane_cp022

0xd83f,	// (0x0005ad16) list_single_graphic_popup_conf4_pane_g1

0xb088,	// (0x0005855f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0005ceab) list_single_graphic_popup_conf4_pane_g

0xd847,	// (0x0005ad1e) list_single_graphic_popup_conf4_pane_t1

0x1f4d,	// (0x0004f424) popup_vtel_slider_window_ParamLimits

0x1f4d,	// (0x0004f424) popup_vtel_slider_window

0xd4d0,	// (0x0005a9a7) dialer2_ne_pane_t2_ParamLimits

0xd4d0,	// (0x0005a9a7) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0005cd8c) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0005cd8c) dialer2_ne_pane_t

0xc992,	// (0x00059e69) bg_popup_sub_pane_cp010_ParamLimits

0xc992,	// (0x00059e69) bg_popup_sub_pane_cp010

0x6e7a,	// (0x00054351) popup_vtel_slider_window_g1_ParamLimits

0x6e7a,	// (0x00054351) popup_vtel_slider_window_g1

0x6e8d,	// (0x00054364) popup_vtel_slider_window_g2_ParamLimits

0x6e8d,	// (0x00054364) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0005ceb0) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0005ceb0) popup_vtel_slider_window_g

0x6ee3,	// (0x000543ba) vtel_slider_pane_ParamLimits

0x6ee3,	// (0x000543ba) vtel_slider_pane

0x6f05,	// (0x000543dc) vtel_slider_pane_g1_ParamLimits

0x6f05,	// (0x000543dc) vtel_slider_pane_g1

0x6f19,	// (0x000543f0) vtel_slider_pane_g2_ParamLimits

0x6f19,	// (0x000543f0) vtel_slider_pane_g2

0x6f31,	// (0x00054408) vtel_slider_pane_g3_ParamLimits

0x6f31,	// (0x00054408) vtel_slider_pane_g3

0x6f05,	// (0x000543dc) vtel_slider_pane_g4_ParamLimits

0x6f05,	// (0x000543dc) vtel_slider_pane_g4

0x6f47,	// (0x0005441e) vtel_slider_pane_g5_ParamLimits

0x6f47,	// (0x0005441e) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0005ceb9) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0005ceb9) vtel_slider_pane_g

0xa46a,	// (0x00057941) main_gallery2_pane

0x662c,	// (0x00053b03) aid_size_row_itut2_dropdow_list_ParamLimits

0x662c,	// (0x00053b03) aid_size_row_itut2_dropdow_list

0x66b1,	// (0x00053b88) grid_vitu2_function_top_pane_ParamLimits

0x66b1,	// (0x00053b88) grid_vitu2_function_top_pane

0x6718,	// (0x00053bef) popup_vitu2_dropdown_list_window_ParamLimits

0x6718,	// (0x00053bef) popup_vitu2_dropdown_list_window

0x673e,	// (0x00053c15) popup_vitu2_match_list_window

0x6f6b,	// (0x00054442) cell_vitu2_function_top_pane_ParamLimits

0x6f6b,	// (0x00054442) cell_vitu2_function_top_pane

0x6f8d,	// (0x00054464) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f8d,	// (0x00054464) cell_vitu2_function_top_pane_cp01

0x6fa9,	// (0x00054480) cell_vitu2_function_top_wide_pane_ParamLimits

0x6fa9,	// (0x00054480) cell_vitu2_function_top_wide_pane

0xa46a,	// (0x00057941) bg_button_pane_cp012

0x6fc5,	// (0x0005449c) cell_vitu2_function_top_pane_g1

0xa11d,	// (0x000575f4) bg_button_pane_cp013_ParamLimits

0xa11d,	// (0x000575f4) bg_button_pane_cp013

0x6fd9,	// (0x000544b0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6fd9,	// (0x000544b0) cell_vitu2_function_top_wide_pane_g1

0xa46a,	// (0x00057941) bg_popup_sub_pane_cp20

0x6ff1,	// (0x000544c8) list_vitu2_match_list_pane

0xd61e,	// (0x0005aaf5) bg_popup_sub_pane_cp20_g1

0xd626,	// (0x0005aafd) bg_popup_sub_pane_cp20_g2

0xab4e,	// (0x00058025) bg_popup_sub_pane_cp20_g3

0xd62e,	// (0x0005ab05) bg_popup_sub_pane_cp20_g4

0xab2e,	// (0x00058005) bg_popup_sub_pane_cp20_g5

0xd85d,	// (0x0005ad34) bg_popup_sub_pane_cp20_g6

0xd63e,	// (0x0005ab15) bg_popup_sub_pane_cp20_g7

0xd646,	// (0x0005ab1d) bg_popup_sub_pane_cp20_g8

0xd64e,	// (0x0005ab25) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0005cec4) bg_popup_sub_pane_cp20_g

0xa139,	// (0x00057610) list_vitu2_match_list_item_pane_ParamLimits

0xa139,	// (0x00057610) list_vitu2_match_list_item_pane

0xa14b,	// (0x00057622) list_vitu2_match_list_item_pane_t1

0x95ca,	// (0x00056aa1) bg_popup_sub_pane_cp21

0xaf8c,	// (0x00058463) grid_vitu2_dropdown_list_pane

0x7027,	// (0x000544fe) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7027,	// (0x000544fe) cell_vitu2_dropdown_list_char_pane

0x7048,	// (0x0005451f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7048,	// (0x0005451f) cell_vitu2_dropdown_list_ctrl_pane

0xd865,	// (0x0005ad3c) cell_vitu2_dropdown_list_char_pane_g1

0xd86e,	// (0x0005ad45) cell_vitu2_dropdown_list_char_pane_g2

0xd877,	// (0x0005ad4e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0005cee1) cell_vitu2_dropdown_list_char_pane_g

0x7074,	// (0x0005454b) cell_vitu2_dropdown_list_char_pane_t1

0x7082,	// (0x00054559) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7082,	// (0x00054559) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7092,	// (0x00054569) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7092,	// (0x00054569) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70a3,	// (0x0005457a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70a3,	// (0x0005457a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x70b3,	// (0x0005458a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x70b3,	// (0x0005458a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce0f,	// (0x0005a2e6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce0f,	// (0x0005a2e6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0005cee8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0005cee8) cell_vitu2_dropdown_list_ctrl_pane_g

0x70cf,	// (0x000545a6) aid_size_cell_gallery2_ParamLimits

0x70cf,	// (0x000545a6) aid_size_cell_gallery2

0x70ed,	// (0x000545c4) grid_gallery2_pane_ParamLimits

0x70ed,	// (0x000545c4) grid_gallery2_pane

0x7107,	// (0x000545de) scroll_pane_cp029_ParamLimits

0x7107,	// (0x000545de) scroll_pane_cp029

0x7113,	// (0x000545ea) cell_gallery2_pane_ParamLimits

0x7113,	// (0x000545ea) cell_gallery2_pane

0xd880,	// (0x0005ad57) cell_gallery2_pane_g2

0x716f,	// (0x00054646) cell_gallery2_pane_g3

0xd888,	// (0x0005ad5f) cell_gallery2_pane_g4

0xd890,	// (0x0005ad67) cell_gallery2_pane_g5

0xa8f5,	// (0x00057dcc) grid_highlight_pane_cp10

0x673e,	// (0x00053c15) popup_vitu2_match_list_window_ParamLimits

0x6753,	// (0x00053c2a) popup_vitu2_query_window_ParamLimits

0x6753,	// (0x00053c2a) popup_vitu2_query_window

0x95ca,	// (0x00056aa1) bg_vitu2_candi_button_pane

0xd865,	// (0x0005ad3c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd86e,	// (0x0005ad45) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd877,	// (0x0005ad4e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x02cf,	// (0x0004d7a6) bg_button_pane_cp015

0x7177,	// (0x0005464e) bg_button_pane_cp016

0x718a,	// (0x00054661) bg_button_pane_cp017

0xc7a5,	// (0x00059c7c) bg_popup_sub_pane_cp22

0xd898,	// (0x0005ad6f) popup_vitu2_query_window_g1

0x0304,	// (0x0004d7db) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0005cef3) popup_vitu2_query_window_g

0x0323,	// (0x0004d7fa) popup_vitu2_query_window_t1_ParamLimits

0x0323,	// (0x0004d7fa) popup_vitu2_query_window_t1

0x0358,	// (0x0004d82f) popup_vitu2_query_window_t2_ParamLimits

0x0358,	// (0x0004d82f) popup_vitu2_query_window_t2

0x036a,	// (0x0004d841) popup_vitu2_query_window_t3_ParamLimits

0x036a,	// (0x0004d841) popup_vitu2_query_window_t3

0x71ae,	// (0x00054685) popup_vitu2_query_window_t4_ParamLimits

0x71ae,	// (0x00054685) popup_vitu2_query_window_t4

0x71cf,	// (0x000546a6) popup_vitu2_query_window_t5_ParamLimits

0x71cf,	// (0x000546a6) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0005cefa) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0005cefa) popup_vitu2_query_window_t

0xd720,	// (0x0005abf7) main_cset_text_pane

0x6b96,	// (0x0005406d) aid_area_touch_slider_ParamLimits

0x6bb2,	// (0x00054089) cset_slider_pane_ParamLimits

0x6bdc,	// (0x000540b3) main_cset_slider_pane_g1_ParamLimits

0x6bf1,	// (0x000540c8) main_cset_slider_pane_g2_ParamLimits

0xd741,	// (0x0005ac18) main_cset_slider_pane_g3_ParamLimits

0xd741,	// (0x0005ac18) main_cset_slider_pane_g3

0x6c06,	// (0x000540dd) main_cset_slider_pane_g4_ParamLimits

0x6c06,	// (0x000540dd) main_cset_slider_pane_g4

0x6c15,	// (0x000540ec) main_cset_slider_pane_g5_ParamLimits

0x6c15,	// (0x000540ec) main_cset_slider_pane_g5

0x6c21,	// (0x000540f8) main_cset_slider_pane_g6_ParamLimits

0x6c21,	// (0x000540f8) main_cset_slider_pane_g6

0xf976,	// (0x0005ce4d) main_cset_slider_pane_g_ParamLimits

0xd771,	// (0x0005ac48) main_cset_slider_pane_t1_ParamLimits

0x6cad,	// (0x00054184) main_cset_slider_pane_t2_ParamLimits

0x6cc7,	// (0x0005419e) main_cset_slider_pane_t3_ParamLimits

0x6ce1,	// (0x000541b8) main_cset_slider_pane_t4_ParamLimits

0x6cfb,	// (0x000541d2) main_cset_slider_pane_t5_ParamLimits

0x6d15,	// (0x000541ec) main_cset_slider_pane_t6_ParamLimits

0x6d2a,	// (0x00054201) main_cset_slider_pane_t7_ParamLimits

0x6d54,	// (0x0005422b) main_cset_slider_pane_t8_ParamLimits

0x6d54,	// (0x0005422b) main_cset_slider_pane_t8

0x6d7c,	// (0x00054253) main_cset_slider_pane_t9_ParamLimits

0x6d7c,	// (0x00054253) main_cset_slider_pane_t9

0x6da4,	// (0x0005427b) main_cset_slider_pane_t10_ParamLimits

0x6da4,	// (0x0005427b) main_cset_slider_pane_t10

0x6dcc,	// (0x000542a3) main_cset_slider_pane_t11_ParamLimits

0x6dcc,	// (0x000542a3) main_cset_slider_pane_t11

0x6df4,	// (0x000542cb) main_cset_slider_pane_t12_ParamLimits

0x6df4,	// (0x000542cb) main_cset_slider_pane_t12

0x6e11,	// (0x000542e8) main_cset_slider_pane_t13_ParamLimits

0x6e11,	// (0x000542e8) main_cset_slider_pane_t13

0xf99b,	// (0x0005ce72) main_cset_slider_pane_t_ParamLimits

0x95ca,	// (0x00056aa1) bg_popup_sub_pane_cp011

0xd8a4,	// (0x0005ad7b) main_cset_text_pane_g1

0xd8ac,	// (0x0005ad83) main_cset_text_pane_t1

0xd8ba,	// (0x0005ad91) main_cset_text_pane_t2

0xd8c8,	// (0x0005ad9f) main_cset_text_pane_t3

0xd8d6,	// (0x0005adad) main_cset_text_pane_t4

0xd8e4,	// (0x0005adbb) main_cset_text_pane_t5

0xd8f2,	// (0x0005adc9) main_cset_text_pane_t6

0xd900,	// (0x0005add7) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0005cf09) main_cset_text_pane_t

0x95ca,	// (0x00056aa1) main_cam4_burst_pane

0x95ca,	// (0x00056aa1) main_cam5_pane

0x6ad5,	// (0x00053fac) bg_button_pane_cp019

0x6ade,	// (0x00053fb5) bg_button_pane_cp020

0xd74d,	// (0x0005ac24) main_cset_slider_pane_g7_ParamLimits

0xd74d,	// (0x0005ac24) main_cset_slider_pane_g7

0xd759,	// (0x0005ac30) main_cset_slider_pane_g8_ParamLimits

0xd759,	// (0x0005ac30) main_cset_slider_pane_g8

0x6c35,	// (0x0005410c) main_cset_slider_pane_g9_ParamLimits

0x6c35,	// (0x0005410c) main_cset_slider_pane_g9

0x6c41,	// (0x00054118) main_cset_slider_pane_g10_ParamLimits

0x6c41,	// (0x00054118) main_cset_slider_pane_g10

0x6c4d,	// (0x00054124) main_cset_slider_pane_g11_ParamLimits

0x6c4d,	// (0x00054124) main_cset_slider_pane_g11

0x6c59,	// (0x00054130) main_cset_slider_pane_g12_ParamLimits

0x6c59,	// (0x00054130) main_cset_slider_pane_g12

0x6c65,	// (0x0005413c) main_cset_slider_pane_g13_ParamLimits

0x6c65,	// (0x0005413c) main_cset_slider_pane_g13

0x6c71,	// (0x00054148) main_cset_slider_pane_g14_ParamLimits

0x6c71,	// (0x00054148) main_cset_slider_pane_g14

0x6c7d,	// (0x00054154) main_cset_slider_pane_g15_ParamLimits

0x6c7d,	// (0x00054154) main_cset_slider_pane_g15

0xd79f,	// (0x0005ac76) main_cset_slider_pane_t14_ParamLimits

0xd79f,	// (0x0005ac76) main_cset_slider_pane_t14

0xd7d8,	// (0x0005acaf) main_cset_slider_pane_t15_ParamLimits

0xd7d8,	// (0x0005acaf) main_cset_slider_pane_t15

0x71f0,	// (0x000546c7) aid_cam4_burst_size_cell_ParamLimits

0x71f0,	// (0x000546c7) aid_cam4_burst_size_cell

0x7210,	// (0x000546e7) grid_cam4_burst_pane_ParamLimits

0x7210,	// (0x000546e7) grid_cam4_burst_pane

0x7248,	// (0x0005471f) linegrid_cam4_burst_pane_ParamLimits

0x7248,	// (0x0005471f) linegrid_cam4_burst_pane

0xd90e,	// (0x0005ade5) scroll_pane_cp30_ParamLimits

0xd90e,	// (0x0005ade5) scroll_pane_cp30

0x726e,	// (0x00054745) cell_cam4_burst_pane_ParamLimits

0x726e,	// (0x00054745) cell_cam4_burst_pane

0xd91a,	// (0x0005adf1) linegrid_cam4_burst_pane_g1_ParamLimits

0xd91a,	// (0x0005adf1) linegrid_cam4_burst_pane_g1

0x72bb,	// (0x00054792) linegrid_cam4_burst_pane_g2_ParamLimits

0x72bb,	// (0x00054792) linegrid_cam4_burst_pane_g2

0xd927,	// (0x0005adfe) linegrid_cam4_burst_pane_g3_ParamLimits

0xd927,	// (0x0005adfe) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0005cf18) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0005cf18) linegrid_cam4_burst_pane_g

0x72cc,	// (0x000547a3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x72cc,	// (0x000547a3) linegrid_cam4_burst_pane_g3_copy1

0xd934,	// (0x0005ae0b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd934,	// (0x0005ae0b) linegrid_cam4_burst_pane_g4

0x72e6,	// (0x000547bd) linegrid_cam4_burst_pane_g5_ParamLimits

0x72e6,	// (0x000547bd) linegrid_cam4_burst_pane_g5

0x72f7,	// (0x000547ce) linegrid_cam4_burst_pane_g6_ParamLimits

0x72f7,	// (0x000547ce) linegrid_cam4_burst_pane_g6

0xd941,	// (0x0005ae18) linegrid_cam4_burst_pane_g7_ParamLimits

0xd941,	// (0x0005ae18) linegrid_cam4_burst_pane_g7

0x730e,	// (0x000547e5) cell_cam4_burst_pane_g1

0xd95a,	// (0x0005ae31) main_cam5_pane_t1_ParamLimits

0xd95a,	// (0x0005ae31) main_cam5_pane_t1

0xd96c,	// (0x0005ae43) main_cam5_pane_t2_ParamLimits

0xd96c,	// (0x0005ae43) main_cam5_pane_t2

0xd97e,	// (0x0005ae55) main_cam5_pane_t3_ParamLimits

0xd97e,	// (0x0005ae55) main_cam5_pane_t3

0xd990,	// (0x0005ae67) main_cam5_pane_t4_ParamLimits

0xd990,	// (0x0005ae67) main_cam5_pane_t4

0xd9a8,	// (0x0005ae7f) main_cam5_pane_t5_ParamLimits

0xd9a8,	// (0x0005ae7f) main_cam5_pane_t5

0xd9bc,	// (0x0005ae93) main_cam5_pane_t6_ParamLimits

0xd9bc,	// (0x0005ae93) main_cam5_pane_t6

0xd9d0,	// (0x0005aea7) main_cam5_pane_t7_ParamLimits

0xd9d0,	// (0x0005aea7) main_cam5_pane_t7

0xd9e2,	// (0x0005aeb9) main_cam5_pane_t8_ParamLimits

0xd9e2,	// (0x0005aeb9) main_cam5_pane_t8

0xd9fe,	// (0x0005aed5) main_cam5_pane_t9_ParamLimits

0xd9fe,	// (0x0005aed5) main_cam5_pane_t9

0xda10,	// (0x0005aee7) main_cam5_pane_t10_ParamLimits

0xda10,	// (0x0005aee7) main_cam5_pane_t10

0xda22,	// (0x0005aef9) main_cam5_pane_t11_ParamLimits

0xda22,	// (0x0005aef9) main_cam5_pane_t11

0xda34,	// (0x0005af0b) main_cam5_pane_t12_ParamLimits

0xda34,	// (0x0005af0b) main_cam5_pane_t12

0xda49,	// (0x0005af20) main_cam5_pane_t13_ParamLimits

0xda49,	// (0x0005af20) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0005cf24) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0005cf24) main_cam5_pane_t

0x0e3e,	// (0x0004e315) popup_scut_keymap_window_ParamLimits

0x0e3e,	// (0x0004e315) popup_scut_keymap_window

0x7323,	// (0x000547fa) aid_size_cell_brow_shortcut

0xa8f5,	// (0x00057dcc) bg_popup_window_pane_cp010

0x732f,	// (0x00054806) grid_scut_pane

0x733b,	// (0x00054812) cell_scut_pane_ParamLimits

0x733b,	// (0x00054812) cell_scut_pane

0x7352,	// (0x00054829) cell_scut_pane_g1

0xda66,	// (0x0005af3d) cell_scut_pane_t1

0xda75,	// (0x0005af4c) cell_scut_pane_t2

0x735b,	// (0x00054832) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0005cf3f) cell_scut_pane_t

0x519a,	// (0x00052671) main_mup3_pane_g8_ParamLimits

0x519a,	// (0x00052671) main_mup3_pane_g8

0x6643,	// (0x00053b1a) area_vitu2_query_pane_ParamLimits

0x6643,	// (0x00053b1a) area_vitu2_query_pane

0x02e3,	// (0x0004d7ba) input_focus_pane_cp08

0xda84,	// (0x0005af5b) area_vitu2_query_pane_g1

0x03e8,	// (0x0004d8bf) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0005cf46) area_vitu2_query_pane_g

0x7369,	// (0x00054840) area_vitu2_query_pane_t1_ParamLimits

0x7369,	// (0x00054840) area_vitu2_query_pane_t1

0x737d,	// (0x00054854) area_vitu2_query_pane_t2_ParamLimits

0x737d,	// (0x00054854) area_vitu2_query_pane_t2

0x03f9,	// (0x0004d8d0) area_vitu2_query_pane_t3_ParamLimits

0x03f9,	// (0x0004d8d0) area_vitu2_query_pane_t3

0x7391,	// (0x00054868) area_vitu2_query_pane_t4_ParamLimits

0x7391,	// (0x00054868) area_vitu2_query_pane_t4

0x73b9,	// (0x00054890) area_vitu2_query_pane_t5_ParamLimits

0x73b9,	// (0x00054890) area_vitu2_query_pane_t5

0x73e1,	// (0x000548b8) area_vitu2_query_pane_t6_ParamLimits

0x73e1,	// (0x000548b8) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0005cf4b) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0005cf4b) area_vitu2_query_pane_t

0x742d,	// (0x00054904) bg_button_pane_cp018

0x743b,	// (0x00054912) bg_button_pane_cp021

0x0421,	// (0x0004d8f8) bg_button_pane_cp022

0x0432,	// (0x0004d909) input_focus_pane_cp09

0xb1ac,	// (0x00058683) aid_size_touch_mv_arrow_left

0xb1d7,	// (0x000586ae) aid_size_touch_mv_arrow_right

0x6c95,	// (0x0005416c) main_cset_slider_pane_g16_ParamLimits

0x6c95,	// (0x0005416c) main_cset_slider_pane_g16

0x6ca1,	// (0x00054178) main_cset_slider_pane_g17_ParamLimits

0x6ca1,	// (0x00054178) main_cset_slider_pane_g17

0x730e,	// (0x000547e5) cell_cam4_burst_pane_g1_ParamLimits

0x95ca,	// (0x00056aa1) compa_mode_pane

0x6e9d,	// (0x00054374) popup_vtel_slider_window_g3_ParamLimits

0x6e9d,	// (0x00054374) popup_vtel_slider_window_g3

0x6eb4,	// (0x0005438b) popup_vtel_slider_window_g4_ParamLimits

0x6eb4,	// (0x0005438b) popup_vtel_slider_window_g4

0x6ecb,	// (0x000543a2) popup_vtel_slider_window_t1_ParamLimits

0x6ecb,	// (0x000543a2) popup_vtel_slider_window_t1

0x95ca,	// (0x00056aa1) main_cl_pane

0x9c86,	// (0x0005715d) popup_imed_adjust2_window_ParamLimits

0xc7a5,	// (0x00059c7c) bg_tb_trans_pane_cp05_ParamLimits

0xd0dc,	// (0x0005a5b3) popup_imed_adjust2_window_g1_ParamLimits

0xd0eb,	// (0x0005a5c2) popup_imed_adjust2_window_g2_ParamLimits

0xd0eb,	// (0x0005a5c2) popup_imed_adjust2_window_g2

0xd0f7,	// (0x0005a5ce) popup_imed_adjust2_window_g3_ParamLimits

0xd0f7,	// (0x0005a5ce) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0005ccb6) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0005ccb6) popup_imed_adjust2_window_g

0xd103,	// (0x0005a5da) popup_imed_adjust2_window_t1_ParamLimits

0xd11b,	// (0x0005a5f2) slider_imed_adjust_pane_ParamLimits

0xd12f,	// (0x0005a606) slider_imed_adjust_pane_g1_ParamLimits

0xd13f,	// (0x0005a616) slider_imed_adjust_pane_g2_ParamLimits

0xd14f,	// (0x0005a626) slider_imed_adjust_pane_g3_ParamLimits

0xd160,	// (0x0005a637) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0005ccbd) slider_imed_adjust_pane_g_ParamLimits

0x63cd,	// (0x000538a4) aid_touch_area_cam4_ParamLimits

0x63cd,	// (0x000538a4) aid_touch_area_cam4

0xa002,	// (0x000574d9) battery_pane_cp01

0x649c,	// (0x00053973) main_camera4_pane_g6_ParamLimits

0x649c,	// (0x00053973) main_camera4_pane_g6

0x64c6,	// (0x0005399d) main_camera4_pane_t2_ParamLimits

0x64c6,	// (0x0005399d) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0005cdc0) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0005cdc0) main_camera4_pane_t

0x64fb,	// (0x000539d2) aid_touch_area_vid4_ParamLimits

0x64fb,	// (0x000539d2) aid_touch_area_vid4

0x654f,	// (0x00053a26) main_video4_pane_g5_ParamLimits

0x654f,	// (0x00053a26) main_video4_pane_g5

0x6574,	// (0x00053a4b) vid4_progress_pane_ParamLimits

0x6574,	// (0x00053a4b) vid4_progress_pane

0xd765,	// (0x0005ac3c) main_cset_slider_pane_g18_ParamLimits

0xd765,	// (0x0005ac3c) main_cset_slider_pane_g18

0xd94e,	// (0x0005ae25) cell_cam4_burst_pane_g2_ParamLimits

0xd94e,	// (0x0005ae25) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0005cf1f) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005cf1f) cell_cam4_burst_pane_g

0xa727,	// (0x00057bfe) bg_cl_pane_ParamLimits

0xa727,	// (0x00057bfe) bg_cl_pane

0x7447,	// (0x0005491e) cl_header_pane_ParamLimits

0x7447,	// (0x0005491e) cl_header_pane

0x745b,	// (0x00054932) cl_listscroll_pane_ParamLimits

0x745b,	// (0x00054932) cl_listscroll_pane

0xda90,	// (0x0005af67) bg_cl_pane_g1

0xda98,	// (0x0005af6f) bg_cl_pane_g2

0xdaa0,	// (0x0005af77) bg_cl_pane_g3

0xdaa8,	// (0x0005af7f) bg_cl_pane_g4

0xdab0,	// (0x0005af87) bg_cl_pane_g5

0xdab8,	// (0x0005af8f) bg_cl_pane_g6

0xdac0,	// (0x0005af97) bg_cl_pane_g7

0xdac8,	// (0x0005af9f) bg_cl_pane_g8

0xdad0,	// (0x0005afa7) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0005cf5a) bg_cl_pane_g

0x746b,	// (0x00054942) aid_height_cl_leading_ParamLimits

0x746b,	// (0x00054942) aid_height_cl_leading

0x7477,	// (0x0005494e) aid_height_cl_text_ParamLimits

0x7477,	// (0x0005494e) aid_height_cl_text

0xa46a,	// (0x00057941) bg_cl_header_pane_ParamLimits

0xa46a,	// (0x00057941) bg_cl_header_pane

0x7496,	// (0x0005496d) cl_header_pane_g1_ParamLimits

0x7496,	// (0x0005496d) cl_header_pane_g1

0x74ac,	// (0x00054983) cl_header_pane_t1_ParamLimits

0x74ac,	// (0x00054983) cl_header_pane_t1

0xdad8,	// (0x0005afaf) cl_list_pane

0xd738,	// (0x0005ac0f) hc_scroll_pane_cp01

0xab2e,	// (0x00058005) bg_cl_header_pane_g1

0xd61e,	// (0x0005aaf5) bg_cl_header_pane_g2

0xab4e,	// (0x00058025) bg_cl_header_pane_g3

0xd62e,	// (0x0005ab05) bg_cl_header_pane_g4

0xd626,	// (0x0005aafd) bg_cl_header_pane_g5

0xd85d,	// (0x0005ad34) bg_cl_header_pane_g6

0xd646,	// (0x0005ab1d) bg_cl_header_pane_g7

0xd64e,	// (0x0005ab25) bg_cl_header_pane_g8

0xd63e,	// (0x0005ab15) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0005cf6d) bg_cl_header_pane_g

0x74c5,	// (0x0005499c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74c5,	// (0x0005499c) hc_cl_list_double_graphic_heading_pane

0x74d6,	// (0x000549ad) hc_cl_list_single_graphic_pane_ParamLimits

0x74d6,	// (0x000549ad) hc_cl_list_single_graphic_pane

0x74ef,	// (0x000549c6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x74ef,	// (0x000549c6) hc_cl_list_single_graphic_pane_g1

0x74fb,	// (0x000549d2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x74fb,	// (0x000549d2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0005cf80) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0005cf80) hc_cl_list_single_graphic_pane_g

0x750f,	// (0x000549e6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x750f,	// (0x000549e6) hc_cl_list_single_graphic_pane_t1

0x74ef,	// (0x000549c6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x74ef,	// (0x000549c6) hc_cl_list_double_graphic_heading_pane_g1

0x7524,	// (0x000549fb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7524,	// (0x000549fb) hc_cl_list_double_graphic_heading_pane_g2

0x7538,	// (0x00054a0f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7538,	// (0x00054a0f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0005cf85) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0005cf85) hc_cl_list_double_graphic_heading_pane_g

0x754c,	// (0x00054a23) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x754c,	// (0x00054a23) hc_cl_list_double_graphic_heading_pane_t1

0x7561,	// (0x00054a38) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7561,	// (0x00054a38) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0005cf8c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0005cf8c) hc_cl_list_double_graphic_heading_pane_t

0xa161,	// (0x00057638) vid4_progress_pane_g1

0xa171,	// (0x00057648) vid4_progress_pane_g2

0x7576,	// (0x00054a4d) vid4_progress_pane_g3

0xa181,	// (0x00057658) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0005cf91) vid4_progress_pane_g

0x7588,	// (0x00054a5f) vid4_progress_pane_t1

0xa19f,	// (0x00057676) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0005cf9c) vid4_progress_pane_t

0x759e,	// (0x00054a75) wait_bar_pane_cp07

0xc9a0,	// (0x00059e77) blid_firmament_pane_ParamLimits

0xc9e3,	// (0x00059eba) popup_blid_sat_info2_window_g1

0xca07,	// (0x00059ede) popup_blid_sat_info2_window_t3

0xca15,	// (0x00059eec) popup_blid_sat_info2_window_t4

0xca23,	// (0x00059efa) popup_blid_sat_info2_window_t5

0xca31,	// (0x00059f08) popup_blid_sat_info2_window_t6

0xca41,	// (0x00059f18) popup_blid_sat_info2_window_t7

0xca4f,	// (0x00059f26) popup_blid_sat_info2_window_t8

0xca5d,	// (0x00059f34) popup_blid_sat_info2_window_t9

0xca6b,	// (0x00059f42) popup_blid_sat_info2_window_t10

0xcb2f,	// (0x0005a006) aid_firma_cardinal_ParamLimits

0xcb43,	// (0x0005a01a) blid_firmament_pane_t1_ParamLimits

0xcb5a,	// (0x0005a031) blid_firmament_pane_t2_ParamLimits

0xcb71,	// (0x0005a048) blid_firmament_pane_t3_ParamLimits

0xcb88,	// (0x0005a05f) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0005cbaa) blid_firmament_pane_t_ParamLimits

0xcb9f,	// (0x0005a076) blid_sat_info_pane_ParamLimits

0xa46a,	// (0x00057941) main_cam_set_pane_ParamLimits

0x5a5e,	// (0x00052f35) aid_size_cell_colour_35_ParamLimits

0x5a7e,	// (0x00052f55) aid_size_cell_colour_112_ParamLimits

0x5a9e,	// (0x00052f75) aid_size_cell_effect_ParamLimits

0xc7a5,	// (0x00059c7c) bg_tb_trans_pane_cp02_ParamLimits

0xad9e,	// (0x00058275) heading_imed_pane_ParamLimits

0x5abe,	// (0x00052f95) listscroll_imed_pane_ParamLimits

0xbdcb,	// (0x000592a2) popup_call2_audio_first_window_g5_ParamLimits

0xbdcb,	// (0x000592a2) popup_call2_audio_first_window_g5

0x6078,	// (0x0005354f) aid_size_touch_image3_arrow_left_ParamLimits

0x6078,	// (0x0005354f) aid_size_touch_image3_arrow_left

0x60a4,	// (0x0005357b) aid_size_touch_image3_arrow_right_ParamLimits

0x60a4,	// (0x0005357b) aid_size_touch_image3_arrow_right

0xa1b4,	// (0x0005768b) vid4_progress_pane_t3

0x5dea,	// (0x000532c1) main_hwr_training_symbol_option_pane_ParamLimits

0x5dea,	// (0x000532c1) main_hwr_training_symbol_option_pane

0xd3d2,	// (0x0005a8a9) popup_hwr_training_preview_window_ParamLimits

0xd3d2,	// (0x0005a8a9) popup_hwr_training_preview_window

0x5e0a,	// (0x000532e1) hwr_training_navi_pane_g5_ParamLimits

0x5e0a,	// (0x000532e1) hwr_training_navi_pane_g5

0xd60c,	// (0x0005aae3) popup_char_count_window

0xa46a,	// (0x00057941) bg_popup_sub_pane_cp20_ParamLimits

0x6ff1,	// (0x000544c8) list_vitu2_match_list_pane_ParamLimits

0x7000,	// (0x000544d7) vitu2_page_scroll_pane_ParamLimits

0x7000,	// (0x000544d7) vitu2_page_scroll_pane

0xdae1,	// (0x0005afb8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdae1,	// (0x0005afb8) list_single_hwr_training_symbol_option_pane

0xdaf4,	// (0x0005afcb) list_single_hwr_training_symbol_option_pane_g1

0xdafc,	// (0x0005afd3) list_single_hwr_training_symbol_option_pane_t1

0xdb0a,	// (0x0005afe1) bg_button_pane_cp023

0xdb13,	// (0x0005afea) bg_button_pane_cp024

0x75ec,	// (0x00054ac3) vitu2_page_scroll_pane_g1

0x75f4,	// (0x00054acb) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0005cfa3) vitu2_page_scroll_pane_g

0x75fc,	// (0x00054ad3) vitu2_page_scroll_pane_t1

0xc900,	// (0x00059dd7) popup_char_count_window_g1

0xdb46,	// (0x0005b01d) popup_char_count_window_g2

0xdb4f,	// (0x0005b026) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0005cfa8) popup_char_count_window_g

0xdb58,	// (0x0005b02f) popup_char_count_window_t1

0x95ca,	// (0x00056aa1) main_vded2_pane

0xd0c8,	// (0x0005a59f) aid_size_cell_imed_line

0xd0d2,	// (0x0005a5a9) grid_imed_line_width_pane

0xa0b8,	// (0x0005758f) vid4_indicators_pane_g4

0xdb66,	// (0x0005b03d) cell_imed_line_width_pane_ParamLimits

0xdb66,	// (0x0005b03d) cell_imed_line_width_pane

0xdb7a,	// (0x0005b051) cell_imed_line_width_pane_g1

0xdb83,	// (0x0005b05a) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0005cfaf) cell_imed_line_width_pane_g

0x760b,	// (0x00054ae2) main_vded2_pane_g1_ParamLimits

0x760b,	// (0x00054ae2) main_vded2_pane_g1

0x7621,	// (0x00054af8) main_vded2_pane_g2_ParamLimits

0x7621,	// (0x00054af8) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0005cfb4) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0005cfb4) main_vded2_pane_g

0x7633,	// (0x00054b0a) vded2_slider_pane_ParamLimits

0x7633,	// (0x00054b0a) vded2_slider_pane

0x7643,	// (0x00054b1a) aid_size_touch_vded2_end

0x764d,	// (0x00054b24) aid_size_touch_vded2_playhead

0xdb8b,	// (0x0005b062) aid_size_touch_vded2_start

0xdb93,	// (0x0005b06a) vded2_slider_bg_pane

0xdb9c,	// (0x0005b073) vded2_slider_pane_g1

0xdba5,	// (0x0005b07c) vded2_slider_pane_g2

0x7657,	// (0x00054b2e) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0005cfb9) vded2_slider_pane_g

0xdbad,	// (0x0005b084) vded2_slider_bg_pane_g1

0xdbb6,	// (0x0005b08d) vded2_slider_bg_pane_g2

0xdbbf,	// (0x0005b096) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0005cfc0) vded2_slider_bg_pane_g

0x377b,	// (0x00050c52) aid_postcard_touch_down_pane_ParamLimits

0x377b,	// (0x00050c52) aid_postcard_touch_down_pane

0x3791,	// (0x00050c68) aid_postcard_touch_up_pane_ParamLimits

0x3791,	// (0x00050c68) aid_postcard_touch_up_pane

0x95ca,	// (0x00056aa1) main_blid2_pane

0x9c6c,	// (0x00057143) popup_blid2_search_window

0x95ca,	// (0x00056aa1) blid2_gps_pane

0x95ca,	// (0x00056aa1) blid2_navig_pane

0x95ca,	// (0x00056aa1) blid2_search_pane

0x95ca,	// (0x00056aa1) blid2_tripm_pane

0x7662,	// (0x00054b39) blid2_search_pane_g1_ParamLimits

0x7662,	// (0x00054b39) blid2_search_pane_g1

0x767a,	// (0x00054b51) blid2_search_pane_t1_ParamLimits

0x767a,	// (0x00054b51) blid2_search_pane_t1

0x768c,	// (0x00054b63) aid_size_cell_blid2_gps_ParamLimits

0x768c,	// (0x00054b63) aid_size_cell_blid2_gps

0x76a4,	// (0x00054b7b) blid2_gps_pane_g1_ParamLimits

0x76a4,	// (0x00054b7b) blid2_gps_pane_g1

0x76b8,	// (0x00054b8f) grid_blid2_satellite_pane_ParamLimits

0x76b8,	// (0x00054b8f) grid_blid2_satellite_pane

0x76d2,	// (0x00054ba9) blid2_navig_pane_g1_ParamLimits

0x76d2,	// (0x00054ba9) blid2_navig_pane_g1

0x76de,	// (0x00054bb5) blid2_navig_pane_t1_ParamLimits

0x76de,	// (0x00054bb5) blid2_navig_pane_t1

0x76f9,	// (0x00054bd0) blid2_navig_pane_t2_ParamLimits

0x76f9,	// (0x00054bd0) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0005cfc7) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0005cfc7) blid2_navig_pane_t

0x7714,	// (0x00054beb) blid2_navig_ring_pane_ParamLimits

0x7714,	// (0x00054beb) blid2_navig_ring_pane

0x772d,	// (0x00054c04) blid2_speed_pane_ParamLimits

0x772d,	// (0x00054c04) blid2_speed_pane

0x7739,	// (0x00054c10) blid2_tripm_pane_g1_ParamLimits

0x7739,	// (0x00054c10) blid2_tripm_pane_g1

0x7754,	// (0x00054c2b) blid2_tripm_pane_g2_ParamLimits

0x7754,	// (0x00054c2b) blid2_tripm_pane_g2

0x7768,	// (0x00054c3f) blid2_tripm_pane_g3_ParamLimits

0x7768,	// (0x00054c3f) blid2_tripm_pane_g3

0x777c,	// (0x00054c53) blid2_tripm_pane_g4_ParamLimits

0x777c,	// (0x00054c53) blid2_tripm_pane_g4

0x7790,	// (0x00054c67) blid2_tripm_pane_g5_ParamLimits

0x7790,	// (0x00054c67) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0005cfcc) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0005cfcc) blid2_tripm_pane_g

0x77b6,	// (0x00054c8d) blid2_tripm_pane_t1_ParamLimits

0x77b6,	// (0x00054c8d) blid2_tripm_pane_t1

0x77d1,	// (0x00054ca8) blid2_tripm_pane_t2_ParamLimits

0x77d1,	// (0x00054ca8) blid2_tripm_pane_t2

0x77ea,	// (0x00054cc1) blid2_tripm_pane_t3_ParamLimits

0x77ea,	// (0x00054cc1) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0005cfd9) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0005cfd9) blid2_tripm_pane_t

0x7831,	// (0x00054d08) cell_blid2_satellite_pane_ParamLimits

0x7831,	// (0x00054d08) cell_blid2_satellite_pane

0x784f,	// (0x00054d26) cell_blid2_satellite_pane_g1

0xdbc8,	// (0x0005b09f) cell_blid2_satellite_pane_t1

0xcbaf,	// (0x0005a086) blid2_speed_pane_g1

0xdbd6,	// (0x0005b0ad) blid2_speed_pane_t1

0xdbe4,	// (0x0005b0bb) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0005cfe2) blid2_speed_pane_t

0xcbaf,	// (0x0005a086) blid2_navig_ring_pane_g1

0x7858,	// (0x00054d2f) blid2_navig_ring_pane_g2

0x7860,	// (0x00054d37) blid2_navig_ring_pane_g3

0x7868,	// (0x00054d3f) blid2_navig_ring_pane_g4

0x7870,	// (0x00054d47) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0005cfe7) blid2_navig_ring_pane_g

0x95ca,	// (0x00056aa1) bg_popup_window_pane_cp011

0xdbf2,	// (0x0005b0c9) popup_blid2_search_window_g1

0xdbfa,	// (0x0005b0d1) popup_blid2_search_window_t1

0xdc08,	// (0x0005b0df) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0005cff2) popup_blid2_search_window_t

0xaa3d,	// (0x00057f14) main_browser_pane_g1

0xa727,	// (0x00057bfe) main_browser_pane_ParamLimits

0xa46a,	// (0x00057941) bg_button_pane_cp011_ParamLimits

0x686c,	// (0x00053d43) cell_vitu2_function_pane_g1_ParamLimits

0xc7a5,	// (0x00059c7c) bg_popup_sub_pane_cp22_ParamLimits

0x02e3,	// (0x0004d7ba) input_focus_pane_cp08_ParamLimits

0x719d,	// (0x00054674) popup_vitu2_query_button_pane_ParamLimits

0x719d,	// (0x00054674) popup_vitu2_query_button_pane

0x02fa,	// (0x0004d7d1) popup_vitu2_query_input_button_pane

0xd898,	// (0x0005ad6f) popup_vitu2_query_window_g1_ParamLimits

0x0304,	// (0x0004d7db) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0005cef3) popup_vitu2_query_window_g_ParamLimits

0x95ca,	// (0x00056aa1) bg_button_pane_cp026

0x7878,	// (0x00054d4f) popup_vitu2_query_input_button_pane_g1

0x95ca,	// (0x00056aa1) bg_button_pane_cp025

0xdc16,	// (0x0005b0ed) popup_vitu2_query_button_pane_t1

0x4e13,	// (0x000522ea) main_mp3_pane_t6

0x4e21,	// (0x000522f8) popup_slider_window_cp01

0xa01e,	// (0x000574f5) cam4_battery_pane

0xa077,	// (0x0005754e) cam4_battery_pane_cp02

0xa159,	// (0x00057630) cam4_battery_pane_cp01

0xa159,	// (0x00057630) cam4_battery_pane_cp03

0xcbaf,	// (0x0005a086) cam4_battery_pane_g1

0xdc24,	// (0x0005b0fb) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0005cff7) cam4_battery_pane_g

0xca79,	// (0x00059f50) popup_blid_sat_info2_window_t11

0xb1ac,	// (0x00058683) aid_size_touch_mv_arrow_left_ParamLimits

0xb1d7,	// (0x000586ae) aid_size_touch_mv_arrow_right_ParamLimits

0xb235,	// (0x0005870c) navi_pane_g1_ParamLimits

0xb241,	// (0x00058718) navi_pane_g2_ParamLimits

0xb26f,	// (0x00058746) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0005c8bc) navi_pane_g_ParamLimits

0x31d6,	// (0x000506ad) navi_pane_mv_t1_ParamLimits

0x5aca,	// (0x00052fa1) grid_imed_effect_pane_ParamLimits

0x1e4a,	// (0x0004f321) aid_placing_vt_slider_lsc

0xa98c,	// (0x00057e63) aid_placing_vt_slider_prt

0xa46a,	// (0x00057941) bg_tb_trans_pane_cp01_ParamLimits

0xcd2f,	// (0x0005a206) popup_image_details_window_g1_ParamLimits

0xcd42,	// (0x0005a219) popup_image_details_window_g2_ParamLimits

0xcd57,	// (0x0005a22e) popup_image_details_window_g3_ParamLimits

0xcd57,	// (0x0005a22e) popup_image_details_window_g3

0xf718,	// (0x0005cbef) popup_image_details_window_g_ParamLimits

0xcd6b,	// (0x0005a242) popup_image_details_window_t1_ParamLimits

0xcd7d,	// (0x0005a254) popup_image_details_window_t2_ParamLimits

0xcd96,	// (0x0005a26d) popup_image_details_window_t3_ParamLimits

0xcdaa,	// (0x0005a281) popup_image_details_window_t4_ParamLimits

0xcdc5,	// (0x0005a29c) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0005cbf6) popup_image_details_window_t_ParamLimits

0x7483,	// (0x0005495a) cl_header_name_pane_ParamLimits

0x7483,	// (0x0005495a) cl_header_name_pane

0x7880,	// (0x00054d57) cl_header_name_pane_t1_ParamLimits

0x7880,	// (0x00054d57) cl_header_name_pane_t1

0x78a1,	// (0x00054d78) cl_header_name_pane_t2_ParamLimits

0x78a1,	// (0x00054d78) cl_header_name_pane_t2

0x78e3,	// (0x00054dba) cl_header_name_pane_t3_ParamLimits

0x78e3,	// (0x00054dba) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0005cffc) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0005cffc) cl_header_name_pane_t

0xb33b,	// (0x00058812) navi_pane_mv_g2_ParamLimits

0xd5e6,	// (0x0005aabd) field_vitu2_entry_pane_g1_ParamLimits

0xd5f2,	// (0x0005aac9) field_vitu2_entry_pane_g2_ParamLimits

0xd5fe,	// (0x0005aad5) field_vitu2_entry_pane_g3_ParamLimits

0xd5fe,	// (0x0005aad5) field_vitu2_entry_pane_g3

0xf91b,	// (0x0005cdf2) field_vitu2_entry_pane_g_ParamLimits

0xa0eb,	// (0x000575c2) cell_vitu2_itu_pane_g1_ParamLimits

0x6800,	// (0x00053cd7) cell_vitu2_itu_pane_g2_ParamLimits

0x6800,	// (0x00053cd7) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0005cdfe) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0005cdfe) cell_vitu2_itu_pane_g

0xa46a,	// (0x00057941) bg_vkb2_func_pane_cp05_ParamLimits

0xa46a,	// (0x00057941) bg_vkb2_func_pane_cp05

0xa46a,	// (0x00057941) bg_vkb2_func_pane_cp03

0xa46a,	// (0x00057941) bg_vkb2_func_pane_cp04

0xa46a,	// (0x00057941) bg_vkb2_func_pane_cp10_ParamLimits

0xa46a,	// (0x00057941) bg_vkb2_func_pane_cp10

0x0421,	// (0x0004d8f8) bg_vkb2_func_pane_cp08

0x742d,	// (0x00054904) bg_vkb2_func_pane_cp06

0x743b,	// (0x00054912) bg_vkb2_func_pane_cp07

0xdb1c,	// (0x0005aff3) bg_vkb2_func_pane_cp11_ParamLimits

0xdb1c,	// (0x0005aff3) bg_vkb2_func_pane_cp11

0xdb31,	// (0x0005b008) bg_vkb2_func_pane_cp12_ParamLimits

0xdb31,	// (0x0005b008) bg_vkb2_func_pane_cp12

0x95ca,	// (0x00056aa1) bg_vkb2_func_pane_cp09

0xd61e,	// (0x0005aaf5) bg_vkb2_func_pane_g1

0xab4e,	// (0x00058025) bg_vkb2_func_pane_g2

0xd626,	// (0x0005aafd) bg_vkb2_func_pane_g3

0xd62e,	// (0x0005ab05) bg_vkb2_func_pane_g4

0xd85d,	// (0x0005ad34) bg_vkb2_func_pane_g5

0xd646,	// (0x0005ab1d) bg_vkb2_func_pane_g6

0xd64e,	// (0x0005ab25) bg_vkb2_func_pane_g7

0xd63e,	// (0x0005ab15) bg_vkb2_func_pane_g8

0xab2e,	// (0x00058005) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0005d003) bg_vkb2_func_pane_g

0x77a4,	// (0x00054c7b) blid2_tripm_pane_g6_ParamLimits

0x77a4,	// (0x00054c7b) blid2_tripm_pane_g6

0xd48a,	// (0x0005a961) mp4_progress_pane_g1

0x781d,	// (0x00054cf4) blid2_tripm_values_pane_ParamLimits

0x781d,	// (0x00054cf4) blid2_tripm_values_pane

0x7914,	// (0x00054deb) blid2_tripm_values_pane_t1

0x7922,	// (0x00054df9) blid2_tripm_values_pane_t2

0x7930,	// (0x00054e07) blid2_tripm_values_pane_t3

0x793e,	// (0x00054e15) blid2_tripm_values_pane_t4

0x794c,	// (0x00054e23) blid2_tripm_values_pane_t5

0x795a,	// (0x00054e31) blid2_tripm_values_pane_t6

0x7968,	// (0x00054e3f) blid2_tripm_values_pane_t7

0x7976,	// (0x00054e4d) blid2_tripm_values_pane_t8

0x7984,	// (0x00054e5b) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0005d016) blid2_tripm_values_pane_t

0x1e8c,	// (0x0004f363) call_video_pane_t1_ParamLimits

0x1eaa,	// (0x0004f381) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005c745) call_video_pane_t_ParamLimits

0x0160,	// (0x0004d637) msg_header_pane_g1_ParamLimits

0xb515,	// (0x000589ec) msg_header_pane_g2_ParamLimits

0xb515,	// (0x000589ec) msg_header_pane_g2

0x0001,

0xf488,	// (0x0005c95f) msg_header_pane_g_ParamLimits

0xf488,	// (0x0005c95f) msg_header_pane_g

0xa727,	// (0x00057bfe) main_clock2_pane_ParamLimits

0x57c3,	// (0x00052c9a) grid_clock2_toolbar_pane_ParamLimits

0x57c3,	// (0x00052c9a) grid_clock2_toolbar_pane

0x57c3,	// (0x00052c9a) listscroll_clock2_pane_ParamLimits

0x57c3,	// (0x00052c9a) listscroll_clock2_pane

0x58bc,	// (0x00052d93) main_clock2_pane_t3_ParamLimits

0x58bc,	// (0x00052d93) main_clock2_pane_t3

0x58e0,	// (0x00052db7) main_clock2_pane_t4_ParamLimits

0x58e0,	// (0x00052db7) main_clock2_pane_t4

0xdc2e,	// (0x0005b105) cell_clock2_toolbar_pane

0xdc36,	// (0x0005b10d) cell_clock2_toolbar_pane_cp01

0xdc36,	// (0x0005b10d) cell_clock2_toolbar_pane_cp02

0xdc3e,	// (0x0005b115) cell_clock2_toolbar_pane_cp03

0xdc46,	// (0x0005b11d) list_clock2_pane

0xb122,	// (0x000585f9) scroll_pane_cp10

0xdc4e,	// (0x0005b125) list_single_clock2_pane_ParamLimits

0xdc4e,	// (0x0005b125) list_single_clock2_pane

0xa8f5,	// (0x00057dcc) list_highlight_pane_cp08

0xdc5b,	// (0x0005b132) list_single_clock2_pane_t1

0xdc69,	// (0x0005b140) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0005d029) list_single_clock2_pane_t

0x95ca,	// (0x00056aa1) bg_button_pane_cp10

0xdc77,	// (0x0005b14e) cell_clock2_toolbar_pane_g1

0x3707,	// (0x00050bde) aid_main_viewer_pane_g1_ParamLimits

0x3707,	// (0x00050bde) aid_main_viewer_pane_g1

0x3715,	// (0x00050bec) aid_main_viewer_pane_g2_ParamLimits

0x3715,	// (0x00050bec) aid_main_viewer_pane_g2

0x3723,	// (0x00050bfa) aid_main_viewer_pane_g3_ParamLimits

0x3723,	// (0x00050bfa) aid_main_viewer_pane_g3

0x3732,	// (0x00050c09) aid_main_viewer_pane_g4_ParamLimits

0x3732,	// (0x00050c09) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0005c970) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0005c970) aid_main_viewer_pane_g

0x4040,	// (0x00051517) main_calc_pane_ParamLimits

0x4054,	// (0x0005152b) main_dialer2_pane_ParamLimits

0x95ca,	// (0x00056aa1) main_cam6_pane

0x95ca,	// (0x00056aa1) main_vid6_pane

0x57cf,	// (0x00052ca6) listscroll_gen_pane_cp06_ParamLimits

0x57cf,	// (0x00052ca6) listscroll_gen_pane_cp06

0x5903,	// (0x00052dda) main_clock2_pane_t5_ParamLimits

0x5903,	// (0x00052dda) main_clock2_pane_t5

0x595f,	// (0x00052e36) aid_call2_pane_cp10_ParamLimits

0x5971,	// (0x00052e48) aid_call_pane_cp10_ParamLimits

0xb1a0,	// (0x00058677) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1a0,	// (0x00058677) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5983,	// (0x00052e5a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5983,	// (0x00052e5a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1a0,	// (0x00058677) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0005ccab) popup_clock_analogue_window_cp10_g_ParamLimits

0x5995,	// (0x00052e6c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6025,	// (0x000534fc) cell_dialer2_keypad_pane_g2_ParamLimits

0x6025,	// (0x000534fc) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0005cd91) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0005cd91) cell_dialer2_keypad_pane_g

0x6041,	// (0x00053518) cell_dialer2_keypad_pane_t1

0x6b88,	// (0x0005405f) main_cset_text2_pane_ParamLimits

0x6b88,	// (0x0005405f) main_cset_text2_pane

0xda84,	// (0x0005af5b) area_vitu2_query_pane_g1_ParamLimits

0x03e8,	// (0x0004d8bf) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0005cf46) area_vitu2_query_pane_g_ParamLimits

0x7409,	// (0x000548e0) area_vitu2_query_pane_t7_ParamLimits

0x7409,	// (0x000548e0) area_vitu2_query_pane_t7

0x742d,	// (0x00054904) bg_button_pane_cp018_ParamLimits

0x743b,	// (0x00054912) bg_button_pane_cp021_ParamLimits

0x0421,	// (0x0004d8f8) bg_button_pane_cp022_ParamLimits

0x0421,	// (0x0004d8f8) bg_vkb2_func_pane_cp08_ParamLimits

0x742d,	// (0x00054904) bg_vkb2_func_pane_cp06_ParamLimits

0x743b,	// (0x00054912) bg_vkb2_func_pane_cp07_ParamLimits

0x0432,	// (0x0004d909) input_focus_pane_cp09_ParamLimits

0xa1ca,	// (0x000576a1) cam6_autofocus_pane_ParamLimits

0xa1ca,	// (0x000576a1) cam6_autofocus_pane

0x7992,	// (0x00054e69) cam6_image_uncrop_pane_ParamLimits

0x7992,	// (0x00054e69) cam6_image_uncrop_pane

0x79a1,	// (0x00054e78) cam6_indi_pane_ParamLimits

0x79a1,	// (0x00054e78) cam6_indi_pane

0x79b7,	// (0x00054e8e) cam6_mode_pane_ParamLimits

0x79b7,	// (0x00054e8e) cam6_mode_pane

0x79c9,	// (0x00054ea0) cam6_timer_pane_ParamLimits

0x79c9,	// (0x00054ea0) cam6_timer_pane

0x79d5,	// (0x00054eac) cam6_zoom_pane_ParamLimits

0x79d5,	// (0x00054eac) cam6_zoom_pane

0x79e1,	// (0x00054eb8) cam6_mode_pane_g1_ParamLimits

0x79e1,	// (0x00054eb8) cam6_mode_pane_g1

0x79f1,	// (0x00054ec8) cam6_mode_pane_g2_ParamLimits

0x79f1,	// (0x00054ec8) cam6_mode_pane_g2

0x7a01,	// (0x00054ed8) cam6_mode_pane_g3_ParamLimits

0x7a01,	// (0x00054ed8) cam6_mode_pane_g3

0x7a11,	// (0x00054ee8) cam6_mode_pane_g4_ParamLimits

0x7a11,	// (0x00054ee8) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0005d02e) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0005d02e) cam6_mode_pane_g

0xdc7f,	// (0x0005b156) bg_tb_trans_pane_cp08_ParamLimits

0xdc7f,	// (0x0005b156) bg_tb_trans_pane_cp08

0xdc8d,	// (0x0005b164) cam6_battery_pane_ParamLimits

0xdc8d,	// (0x0005b164) cam6_battery_pane

0xdca3,	// (0x0005b17a) cam6_indi_pane_g1_ParamLimits

0xdca3,	// (0x0005b17a) cam6_indi_pane_g1

0xdcb5,	// (0x0005b18c) cam6_indi_pane_g2_ParamLimits

0xdcb5,	// (0x0005b18c) cam6_indi_pane_g2

0xdcc7,	// (0x0005b19e) cam6_indi_pane_g3_ParamLimits

0xdcc7,	// (0x0005b19e) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0005d037) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0005d037) cam6_indi_pane_g

0xdcd9,	// (0x0005b1b0) cam6_indi_pane_t1_ParamLimits

0xdcd9,	// (0x0005b1b0) cam6_indi_pane_t1

0x7a21,	// (0x00054ef8) cam6_autofocus_pane_g1

0x7a29,	// (0x00054f00) cam6_autofocus_pane_g2

0x7a31,	// (0x00054f08) cam6_autofocus_pane_g3

0x7a39,	// (0x00054f10) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0005d03e) cam6_autofocus_pane_g

0xdcff,	// (0x0005b1d6) cam6_timer_pane_g1

0xdd07,	// (0x0005b1de) cam6_timer_pane_t1

0xdd15,	// (0x0005b1ec) cam6_zoom_cont_pane

0xdd1d,	// (0x0005b1f4) cam6_zoom_pane_g1

0xdd25,	// (0x0005b1fc) cam6_zoom_pane_g2

0x7a41,	// (0x00054f18) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0005d047) cam6_zoom_pane_g

0xcbaf,	// (0x0005a086) cam6_battery_pane_g1

0xcbaf,	// (0x0005a086) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0005cbb3) cam6_battery_pane_g

0xdd2d,	// (0x0005b204) cam6_zoom_cont_pane_g1

0xdd36,	// (0x0005b20d) cam6_zoom_cont_pane_g2

0xdd3f,	// (0x0005b216) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0005d04e) cam6_zoom_cont_pane_g

0x7a5e,	// (0x00054f35) cam6_mode_pane_cp_ParamLimits

0x7a5e,	// (0x00054f35) cam6_mode_pane_cp

0x79d5,	// (0x00054eac) cam6_zoom_pane_cp_ParamLimits

0x79d5,	// (0x00054eac) cam6_zoom_pane_cp

0x7a70,	// (0x00054f47) vid6_image_uncrop_cif_pane_ParamLimits

0x7a70,	// (0x00054f47) vid6_image_uncrop_cif_pane

0x7a80,	// (0x00054f57) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a80,	// (0x00054f57) vid6_image_uncrop_nhd_pane

0x7992,	// (0x00054e69) vid6_image_uncrop_vga_pane_ParamLimits

0x7992,	// (0x00054e69) vid6_image_uncrop_vga_pane

0x7a8f,	// (0x00054f66) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a8f,	// (0x00054f66) vid6_image_uncrop_wvga_pane

0x7a9e,	// (0x00054f75) vid6_indi_pane_ParamLimits

0x7a9e,	// (0x00054f75) vid6_indi_pane

0xdc7f,	// (0x0005b156) bg_tb_trans_pane_cp09_ParamLimits

0xdc7f,	// (0x0005b156) bg_tb_trans_pane_cp09

0xdd57,	// (0x0005b22e) cam6_battery_pane_cp_ParamLimits

0xdd57,	// (0x0005b22e) cam6_battery_pane_cp

0xdd63,	// (0x0005b23a) vid6_indi_pane_g1_ParamLimits

0xdd63,	// (0x0005b23a) vid6_indi_pane_g1

0xdd75,	// (0x0005b24c) vid6_indi_pane_g2_ParamLimits

0xdd75,	// (0x0005b24c) vid6_indi_pane_g2

0xdd87,	// (0x0005b25e) vid6_indi_pane_g3_ParamLimits

0xdd87,	// (0x0005b25e) vid6_indi_pane_g3

0xdd9c,	// (0x0005b273) vid6_indi_pane_g4_ParamLimits

0xdd9c,	// (0x0005b273) vid6_indi_pane_g4

0xddb1,	// (0x0005b288) vid6_indi_pane_g5_ParamLimits

0xddb1,	// (0x0005b288) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0005d055) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0005d055) vid6_indi_pane_g

0xddcb,	// (0x0005b2a2) vid6_indi_pane_t1_ParamLimits

0xddcb,	// (0x0005b2a2) vid6_indi_pane_t1

0xdde1,	// (0x0005b2b8) vid6_indi_pane_t2_ParamLimits

0xdde1,	// (0x0005b2b8) vid6_indi_pane_t2

0xde09,	// (0x0005b2e0) vid6_indi_pane_t3_ParamLimits

0xde09,	// (0x0005b2e0) vid6_indi_pane_t3

0xde63,	// (0x0005b33a) vid6_indi_pane_t4_ParamLimits

0xde63,	// (0x0005b33a) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0005d060) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0005d060) vid6_indi_pane_t

0xde87,	// (0x0005b35e) wait_bar_pane_cp08

0x7ab6,	// (0x00054f8d) main_cset_text2_pane_t1_ParamLimits

0x7ab6,	// (0x00054f8d) main_cset_text2_pane_t1

0x7a49,	// (0x00054f20) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a49,	// (0x00054f20) listscroll_gen_pane_cp06_t1

0x95ca,	// (0x00056aa1) main_cam6_set_pane

0xce0f,	// (0x0005a2e6) bg_tb_trans_pane_cp06_ParamLimits

0xa026,	// (0x000574fd) cam4_indicators_pane_g1_ParamLimits

0xa037,	// (0x0005750e) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0005cdce) cam4_indicators_pane_g_ParamLimits

0xa055,	// (0x0005752c) cam4_indicators_pane_t1_ParamLimits

0xa46a,	// (0x00057941) bg_tb_trans_pane_cp07_ParamLimits

0xa07f,	// (0x00057556) vid4_indicators_pane_g1_ParamLimits

0xa093,	// (0x0005756a) vid4_indicators_pane_g2_ParamLimits

0xa0a7,	// (0x0005757e) vid4_indicators_pane_g3_ParamLimits

0xa0b8,	// (0x0005758f) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0005cde0) vid4_indicators_pane_g_ParamLimits

0xa0d4,	// (0x000575ab) vid4_indicators_pane_t1_ParamLimits

0xa161,	// (0x00057638) vid4_progress_pane_g1_ParamLimits

0xa171,	// (0x00057648) vid4_progress_pane_g2_ParamLimits

0x7576,	// (0x00054a4d) vid4_progress_pane_g3_ParamLimits

0xa181,	// (0x00057658) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0005cf91) vid4_progress_pane_g_ParamLimits

0x7588,	// (0x00054a5f) vid4_progress_pane_t1_ParamLimits

0xa19f,	// (0x00057676) vid4_progress_pane_t2_ParamLimits

0xa1b4,	// (0x0005768b) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0005cf9c) vid4_progress_pane_t_ParamLimits

0x759e,	// (0x00054a75) wait_bar_pane_cp07_ParamLimits

0x7ad5,	// (0x00054fac) main_cam6_set_pane_g2_ParamLimits

0x7ad5,	// (0x00054fac) main_cam6_set_pane_g2

0x7af9,	// (0x00054fd0) main_cset6_listscroll_pane_ParamLimits

0x7af9,	// (0x00054fd0) main_cset6_listscroll_pane

0x7b15,	// (0x00054fec) main_cset6_slider_pane_ParamLimits

0x7b15,	// (0x00054fec) main_cset6_slider_pane

0x7b2b,	// (0x00055002) main_cset6_text2_pane_ParamLimits

0x7b2b,	// (0x00055002) main_cset6_text2_pane

0xde96,	// (0x0005b36d) main_cset6_text_pane

0xde9e,	// (0x0005b375) main_cset_list_pane_copy1_ParamLimits

0xde9e,	// (0x0005b375) main_cset_list_pane_copy1

0xdeae,	// (0x0005b385) scroll_pane_cp028_copy1

0x7b39,	// (0x00055010) cset_list_set_pane_copy1

0x7b4b,	// (0x00055022) aid_position_infowindow_above_copy1

0x7b53,	// (0x0005502a) aid_position_infowindow_below_copy1

0x0457,	// (0x0004d92e) cset_list_set_pane_g1_copy1

0x045f,	// (0x0004d936) cset_list_set_pane_g3_copy1_ParamLimits

0x045f,	// (0x0004d936) cset_list_set_pane_g3_copy1

0x046e,	// (0x0004d945) cset_list_set_pane_t1_copy1_ParamLimits

0x046e,	// (0x0004d945) cset_list_set_pane_t1_copy1

0xa46a,	// (0x00057941) list_highlight_pane_cp021_copy1_ParamLimits

0xa46a,	// (0x00057941) list_highlight_pane_cp021_copy1

0xdeb7,	// (0x0005b38e) cset6_slider_pane_ParamLimits

0xdeb7,	// (0x0005b38e) cset6_slider_pane

0xdee3,	// (0x0005b3ba) main_cset6_slider_pane_g1_ParamLimits

0xdee3,	// (0x0005b3ba) main_cset6_slider_pane_g1

0x7b5b,	// (0x00055032) main_cset6_slider_pane_g2_ParamLimits

0x7b5b,	// (0x00055032) main_cset6_slider_pane_g2

0xdf0b,	// (0x0005b3e2) main_cset6_slider_pane_g3_ParamLimits

0xdf0b,	// (0x0005b3e2) main_cset6_slider_pane_g3

0x7b83,	// (0x0005505a) main_cset6_slider_pane_g4_ParamLimits

0x7b83,	// (0x0005505a) main_cset6_slider_pane_g4

0x7b8f,	// (0x00055066) main_cset6_slider_pane_g5_ParamLimits

0x7b8f,	// (0x00055066) main_cset6_slider_pane_g5

0xd74d,	// (0x0005ac24) main_cset6_slider_pane_g7_ParamLimits

0xd74d,	// (0x0005ac24) main_cset6_slider_pane_g7

0xd759,	// (0x0005ac30) main_cset6_slider_pane_g8_ParamLimits

0xd759,	// (0x0005ac30) main_cset6_slider_pane_g8

0x6c35,	// (0x0005410c) main_cset6_slider_pane_g9_ParamLimits

0x6c35,	// (0x0005410c) main_cset6_slider_pane_g9

0x6c41,	// (0x00054118) main_cset6_slider_pane_g10_ParamLimits

0x6c41,	// (0x00054118) main_cset6_slider_pane_g10

0x6c4d,	// (0x00054124) main_cset6_slider_pane_g11_ParamLimits

0x6c4d,	// (0x00054124) main_cset6_slider_pane_g11

0x6c59,	// (0x00054130) main_cset6_slider_pane_g12_ParamLimits

0x6c59,	// (0x00054130) main_cset6_slider_pane_g12

0x6c65,	// (0x0005413c) main_cset6_slider_pane_g13_ParamLimits

0x6c65,	// (0x0005413c) main_cset6_slider_pane_g13

0x6c71,	// (0x00054148) main_cset6_slider_pane_g14_ParamLimits

0x6c71,	// (0x00054148) main_cset6_slider_pane_g14

0x7b9b,	// (0x00055072) main_cset6_slider_pane_g15_ParamLimits

0x7b9b,	// (0x00055072) main_cset6_slider_pane_g15

0x6c95,	// (0x0005416c) main_cset6_slider_pane_g16_ParamLimits

0x6c95,	// (0x0005416c) main_cset6_slider_pane_g16

0x6ca1,	// (0x00054178) main_cset6_slider_pane_g17_ParamLimits

0x6ca1,	// (0x00054178) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0005d069) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0005d069) main_cset6_slider_pane_g

0xdf17,	// (0x0005b3ee) main_cset6_slider_pane_t1_ParamLimits

0xdf17,	// (0x0005b3ee) main_cset6_slider_pane_t1

0x7bcb,	// (0x000550a2) main_cset6_slider_pane_t2_ParamLimits

0x7bcb,	// (0x000550a2) main_cset6_slider_pane_t2

0x7bf6,	// (0x000550cd) main_cset6_slider_pane_t3_ParamLimits

0x7bf6,	// (0x000550cd) main_cset6_slider_pane_t3

0x7c21,	// (0x000550f8) main_cset6_slider_pane_t4_ParamLimits

0x7c21,	// (0x000550f8) main_cset6_slider_pane_t4

0x7c4c,	// (0x00055123) main_cset6_slider_pane_t5_ParamLimits

0x7c4c,	// (0x00055123) main_cset6_slider_pane_t5

0xdf58,	// (0x0005b42f) main_cset6_slider_pane_t7_ParamLimits

0xdf58,	// (0x0005b42f) main_cset6_slider_pane_t7

0x7c77,	// (0x0005514e) main_cset6_slider_pane_t8_ParamLimits

0x7c77,	// (0x0005514e) main_cset6_slider_pane_t8

0x7c9b,	// (0x00055172) main_cset6_slider_pane_t9_ParamLimits

0x7c9b,	// (0x00055172) main_cset6_slider_pane_t9

0x7cbf,	// (0x00055196) main_cset6_slider_pane_t10_ParamLimits

0x7cbf,	// (0x00055196) main_cset6_slider_pane_t10

0x7ce3,	// (0x000551ba) main_cset6_slider_pane_t11_ParamLimits

0x7ce3,	// (0x000551ba) main_cset6_slider_pane_t11

0xdf8e,	// (0x0005b465) main_cset6_slider_pane_t14_ParamLimits

0xdf8e,	// (0x0005b465) main_cset6_slider_pane_t14

0xdfc7,	// (0x0005b49e) main_cset6_slider_pane_t15_ParamLimits

0xdfc7,	// (0x0005b49e) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0005d08e) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0005d08e) main_cset6_slider_pane_t

0xd811,	// (0x0005ace8) cset_slider_pane_g1_copy1

0xd81a,	// (0x0005acf1) cset_slider_pane_g2_copy1

0xd823,	// (0x0005acfa) cset_slider_pane_g3_copy1

0x95ca,	// (0x00056aa1) bg_popup_sub_pane_cp011_copy1

0xe000,	// (0x0005b4d7) main_cset_text_pane_g1_copy1

0xd8ac,	// (0x0005ad83) main_cset_text_pane_t1_copy1

0xd8ba,	// (0x0005ad91) main_cset_text_pane_t2_copy1

0xd8c8,	// (0x0005ad9f) main_cset_text_pane_t3_copy1

0xd8d6,	// (0x0005adad) main_cset_text_pane_t4_copy1

0xd8e4,	// (0x0005adbb) main_cset_text_pane_t5_copy1

0xe008,	// (0x0005b4df) main_cset_text_pane_t6_copy1

0xe016,	// (0x0005b4ed) main_cset_text_pane_t7_copy1

0x7d61,	// (0x00055238) main_cset_text2_pane_t1_copy1

0xa46a,	// (0x00057941) main_ncimui_pane

0x4290,	// (0x00051767) popup_query_ncimui_window_ParamLimits

0x4290,	// (0x00051767) popup_query_ncimui_window

0x4fb9,	// (0x00052490) field_cale_ev2_pane_g4_ParamLimits

0x4fb9,	// (0x00052490) field_cale_ev2_pane_g4

0x5f01,	// (0x000533d8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5f01,	// (0x000533d8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0005cd6c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0005cd6c) cell_video_dialer_keypad_pane_g

0x5f19,	// (0x000533f0) cell_video_dialer_keypad_pane_t1

0x95ca,	// (0x00056aa1) bg_popup_window_pane_cp012

0xafe3,	// (0x000584ba) heading_pane_cp06

0xe042,	// (0x0005b519) ncim_query_content_pane

0x95ca,	// (0x00056aa1) bg_popup_heading_pane_cp01

0xe04a,	// (0x0005b521) ncim_heading_pane_t1

0xe058,	// (0x0005b52f) ncim_indicator_popup_pane

0xe06a,	// (0x0005b541) ncim_query_button_pane

0xe07e,	// (0x0005b555) ncim_query_content_pane_t1

0xe090,	// (0x0005b567) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0005d0d2) ncim_query_content_pane_t

0xe0ca,	// (0x0005b5a1) ncim_query_list_pane

0xe0dc,	// (0x0005b5b3) ncim_query_popup_pane

0xe058,	// (0x0005b52f) ncim_indicator_popup_pane_ParamLimits

0x7ea5,	// (0x0005537c) ncim_query_content_pane_g1_ParamLimits

0x7ea5,	// (0x0005537c) ncim_query_content_pane_g1

0xe07e,	// (0x0005b555) ncim_query_content_pane_t1_ParamLimits

0xe090,	// (0x0005b567) ncim_query_content_pane_t2_ParamLimits

0x7eb1,	// (0x00055388) ncim_query_content_pane_t3_ParamLimits

0x7eb1,	// (0x00055388) ncim_query_content_pane_t3

0x7ed9,	// (0x000553b0) ncim_query_content_pane_t4_ParamLimits

0x7ed9,	// (0x000553b0) ncim_query_content_pane_t4

0x7f01,	// (0x000553d8) ncim_query_content_pane_t5_ParamLimits

0x7f01,	// (0x000553d8) ncim_query_content_pane_t5

0xe0a2,	// (0x0005b579) ncim_query_content_pane_t6_ParamLimits

0xe0a2,	// (0x0005b579) ncim_query_content_pane_t6

0xfbfb,	// (0x0005d0d2) ncim_query_content_pane_t_ParamLimits

0xe0ca,	// (0x0005b5a1) ncim_query_list_pane_ParamLimits

0xe0dc,	// (0x0005b5b3) ncim_query_popup_pane_ParamLimits

0xe0f0,	// (0x0005b5c7) wait_bar_pane_cp04

0x95ca,	// (0x00056aa1) input_focus_pane_cp011

0xe0f8,	// (0x0005b5cf) ncim_query_popup_pane_t1

0xe106,	// (0x0005b5dd) ncim_list_query_list_pane_ParamLimits

0xe106,	// (0x0005b5dd) ncim_list_query_list_pane

0x95ca,	// (0x00056aa1) bg_button_pane_cp027

0xe119,	// (0x0005b5f0) ncim_query_button_pane_g1

0x95ca,	// (0x00056aa1) list_highlight_pane_cp012

0xe123,	// (0x0005b5fa) ncim_list_query_list_pane_g1

0xe12b,	// (0x0005b602) ncim_list_query_list_pane_t1

0xa046,	// (0x0005751d) cam4_indicators_pane_g3_ParamLimits

0xa046,	// (0x0005751d) cam4_indicators_pane_g3

0xa0c4,	// (0x0005759b) vid4_indicators_pane_g5_ParamLimits

0xa0c4,	// (0x0005759b) vid4_indicators_pane_g5

0xa190,	// (0x00057667) vid4_progress_pane_g5_ParamLimits

0xa190,	// (0x00057667) vid4_progress_pane_g5

0x7d93,	// (0x0005526a) main_ncimui_pane_g1

0x7df9,	// (0x000552d0) ncimui_group_query_pane_ParamLimits

0x7df9,	// (0x000552d0) ncimui_group_query_pane

0x7e41,	// (0x00055318) ncimui_list_pane_ParamLimits

0x7e41,	// (0x00055318) ncimui_list_pane

0x7e68,	// (0x0005533f) ncimui_text_pane_ParamLimits

0x7e68,	// (0x0005533f) ncimui_text_pane

0x7f29,	// (0x00055400) ncimui_text_pane_t1_ParamLimits

0x7f29,	// (0x00055400) ncimui_text_pane_t1

0xe139,	// (0x0005b610) ncimui_list_single_graphic_pane_ParamLimits

0xe139,	// (0x0005b610) ncimui_list_single_graphic_pane

0x7f47,	// (0x0005541e) ncimui_query_pane_ParamLimits

0x7f47,	// (0x0005541e) ncimui_query_pane

0x95ca,	// (0x00056aa1) list_highlight_pane_cp013

0xe149,	// (0x0005b620) ncim_list_query_list_pane_t1_copy1

0xe123,	// (0x0005b5fa) ncim_list_single_graphic_pane_g1

0xe157,	// (0x0005b62e) ncim_query_button_pane_cp01

0xe163,	// (0x0005b63a) ncim_query_entry_pane_ParamLimits

0xe163,	// (0x0005b63a) ncim_query_entry_pane

0xe176,	// (0x0005b64d) ncimui_query_pane_g1

0xe182,	// (0x0005b659) ncimui_query_pane_t1_ParamLimits

0xe182,	// (0x0005b659) ncimui_query_pane_t1

0xa46a,	// (0x00057941) input_focus_pane_cp012

0xe19b,	// (0x0005b672) ncim_query_entry_pane_t1

0xa727,	// (0x00057bfe) main_im_pane_ParamLimits

0xa46a,	// (0x00057941) main_mobtv_pane_ParamLimits

0xa46a,	// (0x00057941) main_mobtv_pane

0x7bb3,	// (0x0005508a) main_cset6_slider_pane_g18_ParamLimits

0x7bb3,	// (0x0005508a) main_cset6_slider_pane_g18

0x7bbf,	// (0x00055096) main_cset6_slider_pane_g19_ParamLimits

0x7bbf,	// (0x00055096) main_cset6_slider_pane_g19

0xb2b6,	// (0x0005878d) bg_main_mobtv_pane_ParamLimits

0xb2b6,	// (0x0005878d) bg_main_mobtv_pane

0x7f5a,	// (0x00055431) main_mobtv_info_pane

0x7f63,	// (0x0005543a) main_mobtv_loading_pane_ParamLimits

0x7f63,	// (0x0005543a) main_mobtv_loading_pane

0xe1ad,	// (0x0005b684) main_mobtv_pg_channel_list_pane

0xe1b7,	// (0x0005b68e) main_mobtv_pg_hdr_pane

0x7f70,	// (0x00055447) main_mobtv_programe_curr_pane_ParamLimits

0x7f70,	// (0x00055447) main_mobtv_programe_curr_pane

0x7f7d,	// (0x00055454) main_mobtv_programe_next_pane_ParamLimits

0x7f7d,	// (0x00055454) main_mobtv_programe_next_pane

0xe1c0,	// (0x0005b697) popup_mobtv_noti_window

0xcbaf,	// (0x0005a086) main_tv_pg_hdr_pane_g1

0xe1c8,	// (0x0005b69f) main_tv_pg_hdr_pane_g2

0xe1d0,	// (0x0005b6a7) main_tv_pg_hdr_pane_g3

0xe1d8,	// (0x0005b6af) main_tv_pg_hdr_pane_g4

0xe1e0,	// (0x0005b6b7) main_tv_pg_hdr_pane_g5

0xe1ea,	// (0x0005b6c1) main_tv_pg_hdr_pane_g6

0xe1f4,	// (0x0005b6cb) main_tv_pg_hdr_pane_g7

0xe1fe,	// (0x0005b6d5) main_tv_pg_hdr_pane_g8

0xe208,	// (0x0005b6df) main_tv_pg_hdr_pane_g9

0xe212,	// (0x0005b6e9) main_tv_pg_hdr_pane_g10

0xe21c,	// (0x0005b6f3) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0005d0df) main_tv_pg_hdr_pane_g

0xe226,	// (0x0005b6fd) main_tv_pg_hdr_pane_t1

0xe234,	// (0x0005b70b) main_tv_pg_hdr_pane_t2

0xe242,	// (0x0005b719) main_tv_pg_hdr_pane_t3

0xe252,	// (0x0005b729) main_tv_pg_hdr_pane_t4

0xe262,	// (0x0005b739) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0005d0f6) main_tv_pg_hdr_pane_t

0xe272,	// (0x0005b749) single_mobtv_pg_channel_pane_ParamLimits

0xe272,	// (0x0005b749) single_mobtv_pg_channel_pane

0xe284,	// (0x0005b75b) single_mobtv_pg_channel_table_pane

0xe28d,	// (0x0005b764) single_mobtv_pg_channel_thumb_pane

0xe296,	// (0x0005b76d) single_tv_pg_channel_pane_g1

0xe29f,	// (0x0005b776) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0005d101) single_tv_pg_channel_pane_g

0xce0f,	// (0x0005a2e6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce0f,	// (0x0005a2e6) bg_single_mobtv_pg_channel_thumb_pane

0xe2a8,	// (0x0005b77f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2a8,	// (0x0005b77f) single_mobtv_pg_channel_thumb_pane_g1

0xe2b6,	// (0x0005b78d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2b6,	// (0x0005b78d) single_mobtv_pg_channel_thumb_pane_g2

0xe2c2,	// (0x0005b799) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2c2,	// (0x0005b799) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0005d106) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0005d106) single_mobtv_pg_channel_thumb_pane_g

0xe2ce,	// (0x0005b7a5) single_mobtv_pg_channel_thumb_pane_t1

0xe2dc,	// (0x0005b7b3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0005d10d) single_mobtv_pg_channel_thumb_pane_t

0xcbaf,	// (0x0005a086) bg_single_mobtv_pg_channel_table_pane_g1

0xcbaf,	// (0x0005a086) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0005cbb3) bg_single_mobtv_pg_channel_table_pane_g

0xe2ea,	// (0x0005b7c1) single_mobtv_pg_channel_table_pane_t1

0xe2f8,	// (0x0005b7cf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0005d112) single_mobtv_pg_channel_table_pane_t

0x7f92,	// (0x00055469) main_mobtv_info_pane_g1_ParamLimits

0x7f92,	// (0x00055469) main_mobtv_info_pane_g1

0x7fb0,	// (0x00055487) main_mobtv_info_pane_t1_ParamLimits

0x7fb0,	// (0x00055487) main_mobtv_info_pane_t1

0x8028,	// (0x000554ff) main_mobtv_info_pane_t2_ParamLimits

0x8028,	// (0x000554ff) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0005d11c) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0005d11c) main_mobtv_info_pane_t

0x80b7,	// (0x0005558e) wait_bar_pane_cp05

0x80c9,	// (0x000555a0) main_mobtv_loading_pane_g1_ParamLimits

0x80c9,	// (0x000555a0) main_mobtv_loading_pane_g1

0x80dc,	// (0x000555b3) main_mobtv_loading_pane_g2_ParamLimits

0x80dc,	// (0x000555b3) main_mobtv_loading_pane_g2

0x80e8,	// (0x000555bf) main_mobtv_loading_pane_g3_ParamLimits

0x80e8,	// (0x000555bf) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0005d123) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0005d123) main_mobtv_loading_pane_g

0xe306,	// (0x0005b7dd) main_mobtv_loading_pane_t1_ParamLimits

0xe306,	// (0x0005b7dd) main_mobtv_loading_pane_t1

0xe31e,	// (0x0005b7f5) main_mobtv_loading_pane_t2_ParamLimits

0xe31e,	// (0x0005b7f5) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0005d12a) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0005d12a) main_mobtv_loading_pane_t

0x80fb,	// (0x000555d2) wait_bar_pane_cp06_ParamLimits

0x80fb,	// (0x000555d2) wait_bar_pane_cp06

0xe342,	// (0x0005b819) main_mobtv_programe_curr_pane_t1

0xe350,	// (0x0005b827) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0005d12f) main_mobtv_programe_curr_pane_t

0xe35e,	// (0x0005b835) main_mobtv_programe_next_pane_t1

0xe36c,	// (0x0005b843) main_mobtv_programe_next_pane_t2

0xe37a,	// (0x0005b851) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0005d134) main_mobtv_programe_next_pane_t

0x95ca,	// (0x00056aa1) bg_popup_mobtv_noti_window_pane

0xe388,	// (0x0005b85f) popup_mobtv_noti_window_g1

0xe390,	// (0x0005b867) popup_mobtv_noti_window_t1

0xe39e,	// (0x0005b875) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0005d13b) popup_mobtv_noti_window_t

0xcbaf,	// (0x0005a086) bg_popup_mobtv_noti_window_pane_g1

0x95ca,	// (0x00056aa1) sc_clock_pane

0x95ca,	// (0x00056aa1) main_fs_bigclock_pane

0x7807,	// (0x00054cde) blid2_tripm_pane_t4_ParamLimits

0x7807,	// (0x00054cde) blid2_tripm_pane_t4

0x810a,	// (0x000555e1) sc_clock_pane_g1_ParamLimits

0x810a,	// (0x000555e1) sc_clock_pane_g1

0x811c,	// (0x000555f3) sc_clock_pane_t1_ParamLimits

0x811c,	// (0x000555f3) sc_clock_pane_t1

0x813e,	// (0x00055615) sc_clock_pane_t2_ParamLimits

0x813e,	// (0x00055615) sc_clock_pane_t2

0x8156,	// (0x0005562d) sc_clock_pane_t3_ParamLimits

0x8156,	// (0x0005562d) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0005d140) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0005d140) sc_clock_pane_t

0x8bd8,	// (0x000560af) main_fs_bigclock_indicator_pane_ParamLimits

0x8bd8,	// (0x000560af) main_fs_bigclock_indicator_pane

0x81f6,	// (0x000556cd) main_fs_bigclock_pane_g1_ParamLimits

0x81f6,	// (0x000556cd) main_fs_bigclock_pane_g1

0x8be4,	// (0x000560bb) main_fs_bigclock_pane_t1_ParamLimits

0x8be4,	// (0x000560bb) main_fs_bigclock_pane_t1

0x8bf6,	// (0x000560cd) main_fs_bigclock_pane_t2_ParamLimits

0x8bf6,	// (0x000560cd) main_fs_bigclock_pane_t2

0x8c08,	// (0x000560df) main_fs_bigclock_pane_t3_ParamLimits

0x8c08,	// (0x000560df) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0005d34a) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0005d34a) main_fs_bigclock_pane_t

0xec93,	// (0x0005c16a) main_fs_bigclock_indicator_pane_g1

0xe072,	// (0x0005b549) ncim_query_content_pane_g2_ParamLimits

0xe072,	// (0x0005b549) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0005d0cd) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0005d0cd) ncim_query_content_pane_g

0x816f,	// (0x00055646) sc_clock_pane_t4_ParamLimits

0x816f,	// (0x00055646) sc_clock_pane_t4

0xa46a,	// (0x00057941) main_radioblah_pane

0xd571,	// (0x0005aa48) cell_call4_button_pane_t1_copy1_ParamLimits

0xd571,	// (0x0005aa48) cell_call4_button_pane_t1_copy1

0x7dab,	// (0x00055282) main_ncimui_pane_t1_ParamLimits

0x7dab,	// (0x00055282) main_ncimui_pane_t1

0x7dc5,	// (0x0005529c) main_ncimui_pane_t2_ParamLimits

0x7dc5,	// (0x0005529c) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0005d0c6) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0005d0c6) main_ncimui_pane_t

0xe4e3,	// (0x0005b9ba) main_radioblah_anim_pane_ParamLimits

0xe4e3,	// (0x0005b9ba) main_radioblah_anim_pane

0xe4f4,	// (0x0005b9cb) main_radioblah_info_pane_ParamLimits

0xe4f4,	// (0x0005b9cb) main_radioblah_info_pane

0xe508,	// (0x0005b9df) main_radioblah_pane_t1_ParamLimits

0xe508,	// (0x0005b9df) main_radioblah_pane_t1

0xe524,	// (0x0005b9fb) main_radioblah_pane_t2_ParamLimits

0xe524,	// (0x0005b9fb) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0005d161) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0005d161) main_radioblah_pane_t

0x824e,	// (0x00055725) main_radioblah_rocker_ctrl_pane_ParamLimits

0x824e,	// (0x00055725) main_radioblah_rocker_ctrl_pane

0xe56c,	// (0x0005ba43) main_radioblah_info_pane_t1_ParamLimits

0xe56c,	// (0x0005ba43) main_radioblah_info_pane_t1

0x82a6,	// (0x0005577d) main_radioblah_info_pane_t2_ParamLimits

0x82a6,	// (0x0005577d) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0005d16a) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0005d16a) main_radioblah_info_pane_t

0xcbaf,	// (0x0005a086) main_radioblah_rocker_ctrl_pane_g1

0x8356,	// (0x0005582d) main_radioblah_rocker_ctrl_pane_g2

0x835e,	// (0x00055835) main_radioblah_rocker_ctrl_pane_g3

0x8366,	// (0x0005583d) main_radioblah_rocker_ctrl_pane_g4

0x836e,	// (0x00055845) main_radioblah_rocker_ctrl_pane_g5

0x8376,	// (0x0005584d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0005d173) main_radioblah_rocker_ctrl_pane_g

0x7d61,	// (0x00055238) main_cset_text2_pane_t1_copy1_ParamLimits

0xa016,	// (0x000574ed) cam4_image_uncrop_qvga_pane

0xa06f,	// (0x00057546) vid4_image_uncrop_qcif_pane

0xa1ca,	// (0x000576a1) cam6_image_uncrop_qvga_pane_ParamLimits

0xa1ca,	// (0x000576a1) cam6_image_uncrop_qvga_pane

0xdd47,	// (0x0005b21e) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd47,	// (0x0005b21e) vid6_image_uncrop_qcif_pane

0x95ca,	// (0x00056aa1) bg_popup_preview_window_pane_cp03

0xe024,	// (0x0005b4fb) list_cset_text2_pane

0xe02c,	// (0x0005b503) main_cset6_text2_pane_g1

0xe034,	// (0x0005b50b) main_cset6_text2_pane_t1

0xe5a6,	// (0x0005ba7d) list_cset_text2_pane_t1_ParamLimits

0xe5a6,	// (0x0005ba7d) list_cset_text2_pane_t1

0xa46a,	// (0x00057941) main_radioblah_pane_ParamLimits

0x80a3,	// (0x0005557a) main_mobtv_info_pane_t3_ParamLimits

0x80a3,	// (0x0005557a) main_mobtv_info_pane_t3

0x823c,	// (0x00055713) main_radioblah_pane_g1

0x8276,	// (0x0005574d) main_radioblah_info_pane_g1

0x82fb,	// (0x000557d2) main_radioblah_info_pane_t3_ParamLimits

0x82fb,	// (0x000557d2) main_radioblah_info_pane_t3

0x2d86,	// (0x0005025d) highlight_cell_cale_month_pane_ParamLimits

0x2d86,	// (0x0005025d) highlight_cell_cale_month_pane

0x95ca,	// (0x00056aa1) main_phob_fisheye_pane

0xceeb,	// (0x0005a3c2) scroll_pane_cp0031_ParamLimits

0xceeb,	// (0x0005a3c2) scroll_pane_cp0031

0xde87,	// (0x0005b35e) wait_bar_pane_cp08_ParamLimits

0x7b39,	// (0x00055010) cset_list_set_pane_copy1_ParamLimits

0xe5c1,	// (0x0005ba98) highlight_cell_cale_month_pane_g1

0x837e,	// (0x00055855) highlight_cell_cale_month_pane_t1

0xdad8,	// (0x0005afaf) list_gen_pane_cp01

0xd738,	// (0x0005ac0f) scroll_pane_01

0xb2c4,	// (0x0005879b) list_single_double_fisheye_pane

0x838c,	// (0x00055863) list_double_fisheye_pane_g1_ParamLimits

0x838c,	// (0x00055863) list_double_fisheye_pane_g1

0x8398,	// (0x0005586f) list_double_fisheye_pane_g2_ParamLimits

0x8398,	// (0x0005586f) list_double_fisheye_pane_g2

0xb2cd,	// (0x000587a4) list_double_fisheye_pane_g3_ParamLimits

0xb2cd,	// (0x000587a4) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0005d180) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0005d180) list_double_fisheye_pane_g

0x83c9,	// (0x000558a0) list_double_fisheye_pane_t1_ParamLimits

0x83c9,	// (0x000558a0) list_double_fisheye_pane_t1

0x83e4,	// (0x000558bb) list_double_fisheye_pane_t2_ParamLimits

0x83e4,	// (0x000558bb) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0005d18b) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0005d18b) list_double_fisheye_pane_t

0x95ca,	// (0x00056aa1) main_call5_pane

0x819a,	// (0x00055671) sc_swipe_pane_ParamLimits

0x819a,	// (0x00055671) sc_swipe_pane

0x8419,	// (0x000558f0) call5_image_pane_ParamLimits

0x8419,	// (0x000558f0) call5_image_pane

0x8436,	// (0x0005590d) call5_swipe_1_pane_ParamLimits

0x8436,	// (0x0005590d) call5_swipe_1_pane

0x8449,	// (0x00055920) call5_swipe_2_pane_ParamLimits

0x8449,	// (0x00055920) call5_swipe_2_pane

0x8474,	// (0x0005594b) popup_call5_audio_first_window_ParamLimits

0x8474,	// (0x0005594b) popup_call5_audio_first_window

0xce0f,	// (0x0005a2e6) call5_swipe_1_pane_g1_ParamLimits

0xce0f,	// (0x0005a2e6) call5_swipe_1_pane_g1

0xe5c9,	// (0x0005baa0) call5_swipe_1_pane_g2_ParamLimits

0xe5c9,	// (0x0005baa0) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0005d190) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0005d190) call5_swipe_1_pane_g

0xe5d5,	// (0x0005baac) call5_swipe_1_pane_t1_ParamLimits

0xe5d5,	// (0x0005baac) call5_swipe_1_pane_t1

0xce0f,	// (0x0005a2e6) call5_swipe_2_pane_g1_ParamLimits

0xce0f,	// (0x0005a2e6) call5_swipe_2_pane_g1

0xe5ea,	// (0x0005bac1) call5_swipe_2_pane_g2_ParamLimits

0xe5ea,	// (0x0005bac1) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0005d195) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0005d195) call5_swipe_2_pane_g

0xe5f6,	// (0x0005bacd) call5_swipe_2_pane_t1_ParamLimits

0xe5f6,	// (0x0005bacd) call5_swipe_2_pane_t1

0xe60b,	// (0x0005bae2) sc_swipe_pane_g1_ParamLimits

0xe60b,	// (0x0005bae2) sc_swipe_pane_g1

0xe618,	// (0x0005baef) sc_swipe_pane_g2_ParamLimits

0xe618,	// (0x0005baef) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0005d19a) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0005d19a) sc_swipe_pane_g

0xe624,	// (0x0005bafb) sc_swipe_pane_t1_ParamLimits

0xe624,	// (0x0005bafb) sc_swipe_pane_t1

0x95ca,	// (0x00056aa1) main_cmail_launcher_pane

0x8485,	// (0x0005595c) aid_size_cell_cmail_l_ParamLimits

0x8485,	// (0x0005595c) aid_size_cell_cmail_l

0x849f,	// (0x00055976) grid_cmail_l_pane_ParamLimits

0x849f,	// (0x00055976) grid_cmail_l_pane

0x84ba,	// (0x00055991) cell_cmail_l_pane_ParamLimits

0x84ba,	// (0x00055991) cell_cmail_l_pane

0x84e0,	// (0x000559b7) cell_cmail_l_pane_g1_ParamLimits

0x84e0,	// (0x000559b7) cell_cmail_l_pane_g1

0x84f1,	// (0x000559c8) cell_cmail_l_pane_t1_ParamLimits

0x84f1,	// (0x000559c8) cell_cmail_l_pane_t1

0xe639,	// (0x0005bb10) cell_cmail_l_pane_t2_ParamLimits

0xe639,	// (0x0005bb10) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0005d19f) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0005d19f) cell_cmail_l_pane_t

0xa46a,	// (0x00057941) grid_highlight_pane_cp018_ParamLimits

0xa46a,	// (0x00057941) grid_highlight_pane_cp018

0x0d23,	// (0x0004e1fa) main2_pane_ParamLimits

0x0d23,	// (0x0004e1fa) main2_pane

0xa7d2,	// (0x00057ca9) popup_sp_fs_action_menu_bg_pane_g1

0xa7da,	// (0x00057cb1) popup_sp_fs_action_menu_bg_pane_g2

0xa7e2,	// (0x00057cb9) popup_sp_fs_action_menu_bg_pane_g3

0xa7ea,	// (0x00057cc1) popup_sp_fs_action_menu_bg_pane_g4

0xa7f2,	// (0x00057cc9) popup_sp_fs_action_menu_bg_pane_g5

0xa7fa,	// (0x00057cd1) popup_sp_fs_action_menu_bg_pane_g6

0xa802,	// (0x00057cd9) popup_sp_fs_action_menu_bg_pane_g7

0xa80a,	// (0x00057ce1) popup_sp_fs_action_menu_bg_pane_g8

0xa812,	// (0x00057ce9) popup_sp_fs_action_menu_bg_pane_g9

0xa81a,	// (0x00057cf1) popup_sp_fs_action_menu_bg_pane_g10

0xa81a,	// (0x00057cf1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0005c661) popup_sp_fs_action_menu_bg_pane_g

0x1d3f,	// (0x0004f216) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x2_t3_g3_g1

0x0037,	// (0x0004d50e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0037,	// (0x0004d50e) list_medium_line_x2_t3_g3_g2

0x1d4b,	// (0x0004f222) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d4b,	// (0x0004f222) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005c70f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005c70f) list_medium_line_x2_t3_g3_g

0x1d57,	// (0x0004f22e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d57,	// (0x0004f22e) list_medium_line_x2_t3_g3_t1

0x0043,	// (0x0004d51a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0043,	// (0x0004d51a) list_medium_line_x2_t3_g3_t2

0x1d6c,	// (0x0004f243) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1d6c,	// (0x0004f243) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005c716) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005c716) list_medium_line_x2_t3_g3_t

0x1d3f,	// (0x0004f216) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x2_t3_g2_g1

0x1d4b,	// (0x0004f222) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d4b,	// (0x0004f222) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005c71d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005c71d) list_medium_line_x2_t3_g2_g

0x1d81,	// (0x0004f258) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1d81,	// (0x0004f258) list_medium_line_x2_t3_g2_t1

0x1d97,	// (0x0004f26e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1d97,	// (0x0004f26e) list_medium_line_x2_t3_g2_t2

0x1da9,	// (0x0004f280) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1da9,	// (0x0004f280) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005c722) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005c722) list_medium_line_x2_t3_g2_t

0x1d3f,	// (0x0004f216) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x2_t4_g4_g1

0x0057,	// (0x0004d52e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0057,	// (0x0004d52e) list_medium_line_x2_t4_g4_g2

0x0037,	// (0x0004d50e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0037,	// (0x0004d50e) list_medium_line_x2_t4_g4_g3

0x0063,	// (0x0004d53a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0063,	// (0x0004d53a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005c729) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005c729) list_medium_line_x2_t4_g4_g

0x006f,	// (0x0004d546) list_medium_line_x2_t4_g4_t1_ParamLimits

0x006f,	// (0x0004d546) list_medium_line_x2_t4_g4_t1

0x0086,	// (0x0004d55d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0086,	// (0x0004d55d) list_medium_line_x2_t4_g4_t2

0x009b,	// (0x0004d572) list_medium_line_x2_t4_g4_t3_ParamLimits

0x009b,	// (0x0004d572) list_medium_line_x2_t4_g4_t3

0x1dc7,	// (0x0004f29e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1dc7,	// (0x0004f29e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005c732) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005c732) list_medium_line_x2_t4_g4_t

0x1d3f,	// (0x0004f216) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x2_t2_g4_g1

0x0057,	// (0x0004d52e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0057,	// (0x0004d52e) list_medium_line_x2_t2_g4_g2

0x0037,	// (0x0004d50e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0037,	// (0x0004d50e) list_medium_line_x2_t2_g4_g3

0x1d4b,	// (0x0004f222) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d4b,	// (0x0004f222) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005c799) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005c799) list_medium_line_x2_t2_g4_g

0x2dac,	// (0x00050283) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2dac,	// (0x00050283) list_medium_line_x2_t2_g4_t1

0x1d6c,	// (0x0004f243) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1d6c,	// (0x0004f243) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005c7a2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005c7a2) list_medium_line_x2_t2_g4_t

0x1d3f,	// (0x0004f216) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x2_t2_g3_g1

0x0037,	// (0x0004d50e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0037,	// (0x0004d50e) list_medium_line_x2_t2_g3_g2

0x1d4b,	// (0x0004f222) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d4b,	// (0x0004f222) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0005c70f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0005c70f) list_medium_line_x2_t2_g3_g

0x2dc1,	// (0x00050298) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2dc1,	// (0x00050298) list_medium_line_x2_t2_g3_t1

0x1d6c,	// (0x0004f243) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1d6c,	// (0x0004f243) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0005c7a7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0005c7a7) list_medium_line_x2_t2_g3_t

0x2f00,	// (0x000503d7) main_sp_fs_list_pane_ParamLimits

0x2f00,	// (0x000503d7) main_sp_fs_list_pane

0xcfc9,	// (0x0005a4a0) sp_fs_scroll_pane_ParamLimits

0xcfc9,	// (0x0005a4a0) sp_fs_scroll_pane

0x00ad,	// (0x0004d584) list_medium_line_x2_t3_t1

0x00bd,	// (0x0004d594) list_medium_line_x2_t3_t2

0x2f0c,	// (0x000503e3) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0005c7f2) list_medium_line_x2_t3_t

0x00cb,	// (0x0004d5a2) list_medium_line_x3_t4_t1

0x00db,	// (0x0004d5b2) list_medium_line_x3_t4_t2

0x2f1a,	// (0x000503f1) list_medium_line_x3_t4_t3

0x2f0c,	// (0x000503e3) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0005c7f9) list_medium_line_x3_t4_t

0x00e9,	// (0x0004d5c0) list_medium_line_x4_t5_t1

0x00f9,	// (0x0004d5d0) list_medium_line_x4_t5_t2

0x2f1a,	// (0x000503f1) list_medium_line_x4_t5_t3

0x0107,	// (0x0004d5de) list_medium_line_x4_t5_t4

0x2f0c,	// (0x000503e3) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0005c802) list_medium_line_x4_t5_t

0x1d3f,	// (0x0004f216) list_medium_line_t4_g4_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_t4_g4_g1

0x2f28,	// (0x000503ff) list_medium_line_t4_g4_g2_ParamLimits

0x2f28,	// (0x000503ff) list_medium_line_t4_g4_g2

0x0115,	// (0x0004d5ec) list_medium_line_t4_g4_g3_ParamLimits

0x0115,	// (0x0004d5ec) list_medium_line_t4_g4_g3

0x1d4b,	// (0x0004f222) list_medium_line_t4_g4_g4_ParamLimits

0x1d4b,	// (0x0004f222) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0005c80d) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0005c80d) list_medium_line_t4_g4_g

0x2f34,	// (0x0005040b) list_medium_line_t4_g4_t1_ParamLimits

0x2f34,	// (0x0005040b) list_medium_line_t4_g4_t1

0x2f49,	// (0x00050420) list_medium_line_t4_g4_t2_ParamLimits

0x2f49,	// (0x00050420) list_medium_line_t4_g4_t2

0x0121,	// (0x0004d5f8) list_medium_line_t4_g4_t3_ParamLimits

0x0121,	// (0x0004d5f8) list_medium_line_t4_g4_t3

0x1d6c,	// (0x0004f243) list_medium_line_t4_g4_t4_ParamLimits

0x1d6c,	// (0x0004f243) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0005c816) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0005c816) list_medium_line_t4_g4_t

0x2ffe,	// (0x000504d5) chi_dic_find_pane_g1

0x4068,	// (0x0005153f) main_tport_pane

0x6f5d,	// (0x00054434) list_medium_line_plain_t1

0x700f,	// (0x000544e6) list_medium_line_t2_g2_g1_ParamLimits

0x700f,	// (0x000544e6) list_medium_line_t2_g2_g1

0x701b,	// (0x000544f2) list_medium_line_t2_g2_g2_ParamLimits

0x701b,	// (0x000544f2) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0005ced7) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0005ced7) list_medium_line_t2_g2_g

0x029a,	// (0x0004d771) list_medium_line_t2_g2_t1_ParamLimits

0x029a,	// (0x0004d771) list_medium_line_t2_g2_t1

0x02b4,	// (0x0004d78b) list_medium_line_t2_g2_t2_ParamLimits

0x02b4,	// (0x0004d78b) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0005cedc) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0005cedc) list_medium_line_t2_g2_t

0x75af,	// (0x00054a86) aid_sp_fs_list_icon_a_sm

0x75b7,	// (0x00054a8e) aid_sp_fs_list_icon_d

0x75bf,	// (0x00054a96) aid_sp_fs_text_primary

0x75c8,	// (0x00054a9f) aid_sp_fs_text_secondary

0xde5a,	// (0x0005b331) list_medium_line

0xde5a,	// (0x0005b331) list_medium_line_g2

0xde5a,	// (0x0005b331) list_medium_line_g3

0xde5a,	// (0x0005b331) list_medium_line_plain

0xde5a,	// (0x0005b331) list_medium_line_plain_t2

0xde5a,	// (0x0005b331) list_medium_line_plain_t3

0xde5a,	// (0x0005b331) list_medium_line_right_icon

0xde5a,	// (0x0005b331) list_medium_line_right_iconx2

0xde5a,	// (0x0005b331) list_medium_line_t2

0xde5a,	// (0x0005b331) list_medium_line_t2_g2

0xde5a,	// (0x0005b331) list_medium_line_t2_g3

0xde5a,	// (0x0005b331) list_medium_line_t2_right_icon

0xde5a,	// (0x0005b331) list_medium_line_t2_right_iconx2

0xde5a,	// (0x0005b331) list_medium_line_t3

0xde5a,	// (0x0005b331) list_medium_line_t3_g2

0xde5a,	// (0x0005b331) list_medium_line_t3_g3

0xde5a,	// (0x0005b331) list_medium_line_t3_right_iconx2

0x75d1,	// (0x00054aa8) list_medium_line_t4_g4

0x75da,	// (0x00054ab1) list_medium_line_x2

0x75da,	// (0x00054ab1) list_medium_line_x2_t2_g2

0x75da,	// (0x00054ab1) list_medium_line_x2_t2_g3

0x75da,	// (0x00054ab1) list_medium_line_x2_t2_g4

0x75da,	// (0x00054ab1) list_medium_line_x2_t3

0x75da,	// (0x00054ab1) list_medium_line_x2_t3_g2

0x75da,	// (0x00054ab1) list_medium_line_x2_t3_g3

0x75da,	// (0x00054ab1) list_medium_line_x2_t3_g4

0x75da,	// (0x00054ab1) list_medium_line_x2_t4_g2

0x75da,	// (0x00054ab1) list_medium_line_x2_t4_g4

0x75e3,	// (0x00054aba) list_medium_line_x3

0x75e3,	// (0x00054aba) list_medium_line_x3_t4

0x75e3,	// (0x00054aba) list_medium_line_x3_t4_g4

0x75d1,	// (0x00054aa8) list_medium_line_x4_t4

0x75d1,	// (0x00054aa8) list_medium_line_x4_t4_g7

0x75d1,	// (0x00054aa8) list_medium_line_x4_t5

0x0443,	// (0x0004d91a) list_single_fs_dyc_pane_ParamLimits

0x0443,	// (0x0004d91a) list_single_fs_dyc_pane

0x1d3f,	// (0x0004f216) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x4_t4_g7_g1

0x7d07,	// (0x000551de) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d07,	// (0x000551de) list_medium_line_x4_t4_g7_g2

0x0483,	// (0x0004d95a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0483,	// (0x0004d95a) list_medium_line_x4_t4_g7_g3

0x0492,	// (0x0004d969) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0492,	// (0x0004d969) list_medium_line_x4_t4_g7_g4

0x049e,	// (0x0004d975) list_medium_line_x4_t4_g7_g5_ParamLimits

0x049e,	// (0x0004d975) list_medium_line_x4_t4_g7_g5

0x04ad,	// (0x0004d984) list_medium_line_x4_t4_g7_g6_ParamLimits

0x04ad,	// (0x0004d984) list_medium_line_x4_t4_g7_g6

0x7d13,	// (0x000551ea) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d13,	// (0x000551ea) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0005d0a7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0005d0a7) list_medium_line_x4_t4_g7_g

0x7d1f,	// (0x000551f6) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d1f,	// (0x000551f6) list_medium_line_x4_t4_g7_t1

0x04bc,	// (0x0004d993) list_medium_line_x4_t4_g7_t2_ParamLimits

0x04bc,	// (0x0004d993) list_medium_line_x4_t4_g7_t2

0x04d1,	// (0x0004d9a8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x04d1,	// (0x0004d9a8) list_medium_line_x4_t4_g7_t3

0x04e6,	// (0x0004d9bd) list_medium_line_x4_t4_g7_t4_ParamLimits

0x04e6,	// (0x0004d9bd) list_medium_line_x4_t4_g7_t4

0x7d34,	// (0x0005520b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d34,	// (0x0005520b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0005d0b6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0005d0b6) list_medium_line_x4_t4_g7_t

0x7d46,	// (0x0005521d) list_single_dyc_row_pane_ParamLimits

0x7d46,	// (0x0005521d) list_single_dyc_row_pane

0x8406,	// (0x000558dd) call5_gesture_pane_ParamLimits

0x8406,	// (0x000558dd) call5_gesture_pane

0x845c,	// (0x00055933) call5_windows_pane_ParamLimits

0x845c,	// (0x00055933) call5_windows_pane

0x8507,	// (0x000559de) call5_swipe_1_pane_cp_ParamLimits

0x8507,	// (0x000559de) call5_swipe_1_pane_cp

0x8513,	// (0x000559ea) call5_swipe_2_pane_cp_ParamLimits

0x8513,	// (0x000559ea) call5_swipe_2_pane_cp

0xa8f5,	// (0x00057dcc) call5_image_pane_cp

0x851f,	// (0x000559f6) popup_call5_audio_first_window_cp_ParamLimits

0x851f,	// (0x000559f6) popup_call5_audio_first_window_cp

0xe60b,	// (0x0005bae2) call5_swipe_1_pane_g1_cp_ParamLimits

0xe60b,	// (0x0005bae2) call5_swipe_1_pane_g1_cp

0xe64b,	// (0x0005bb22) call5_swipe_1_pane_g2_cp

0xe624,	// (0x0005bafb) call5_swipe_1_pane_t1_cp_ParamLimits

0xe624,	// (0x0005bafb) call5_swipe_1_pane_t1_cp

0xe60b,	// (0x0005bae2) call5_swipe_2_pane_g1_cp_ParamLimits

0xe60b,	// (0x0005bae2) call5_swipe_2_pane_g1_cp

0xe653,	// (0x0005bb2a) call5_swipe_2_pane_g2_cp

0xe65b,	// (0x0005bb32) call5_swipe_2_pane_t1_cp_ParamLimits

0xe65b,	// (0x0005bb32) call5_swipe_2_pane_t1_cp

0xa46a,	// (0x00057941) main_sp_fs_email_pane

0xe670,	// (0x0005bb47) main_sp_fs_listscroll_pane_te

0x852d,	// (0x00055a04) popup_sp_fs_action_menu_pane_ParamLimits

0x852d,	// (0x00055a04) popup_sp_fs_action_menu_pane

0xcbaf,	// (0x0005a086) bg_sp_fs_ctrlbar_pane_g1

0xe679,	// (0x0005bb50) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe682,	// (0x0005bb59) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe68b,	// (0x0005bb62) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbaf,	// (0x0005a086) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0005d1a4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc992,	// (0x00059e69) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc992,	// (0x00059e69) bg_sp_fs_ctrlbar_ddmenu_pane

0xe694,	// (0x0005bb6b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe694,	// (0x0005bb6b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6a0,	// (0x0005bb77) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6a0,	// (0x0005bb77) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0005d1ad) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0005d1ad) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6ac,	// (0x0005bb83) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6ac,	// (0x0005bb83) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x856f,	// (0x00055a46) list_medium_line_t2_right_icon_g1

0x04f8,	// (0x0004d9cf) list_medium_line_t2_right_icon_t1

0x0508,	// (0x0004d9df) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0005d1b2) list_medium_line_t2_right_icon_t

0xc7a5,	// (0x00059c7c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7a5,	// (0x00059c7c) bg_sp_fs_ctrlbar_pane

0x85bf,	// (0x00055a96) main_sp_fs_ctrlbar_button_pane_cp01

0x85c9,	// (0x00055aa0) main_sp_fs_ctrlbar_ddmenu_pane

0xe6fe,	// (0x0005bbd5) main_sp_fs_ctrlbar_pane_g1

0xe70a,	// (0x0005bbe1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0005d1b7) main_sp_fs_ctrlbar_pane_g

0xe716,	// (0x0005bbed) main_sp_fs_ctrlbar_pane_t1

0x85d3,	// (0x00055aaa) main_sp_fs_ctrlbar_pane

0x85f7,	// (0x00055ace) main_sp_fs_listscroll_pane_te_cp01

0x051a,	// (0x0004d9f1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x051a,	// (0x0004d9f1) popup_sp_fs_action_menu_pane_cp01

0xa46a,	// (0x00057941) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa46a,	// (0x00057941) bg_sp_fs_highlight_list_pane_cp01

0x8617,	// (0x00055aee) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8617,	// (0x00055aee) sp_fs_action_menu_list_gene_pane_g1

0xe746,	// (0x0005bc1d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe746,	// (0x0005bc1d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005d1c1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005d1c1) sp_fs_action_menu_list_gene_pane_g

0x8626,	// (0x00055afd) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8626,	// (0x00055afd) sp_fs_action_menu_list_gene_pane_t1

0x863e,	// (0x00055b15) sp_fs_action_menu_list_gene_pane_ParamLimits

0x863e,	// (0x00055b15) sp_fs_action_menu_list_gene_pane

0xe753,	// (0x0005bc2a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe753,	// (0x0005bc2a) popup_sp_fs_action_menu_bg_pane

0x865b,	// (0x00055b32) sp_fs_action_menu_list_pane_ParamLimits

0x865b,	// (0x00055b32) sp_fs_action_menu_list_pane

0x054a,	// (0x0004da21) sp_fs_scroll_pane_cp01_ParamLimits

0x054a,	// (0x0004da21) sp_fs_scroll_pane_cp01

0x0570,	// (0x0004da47) list_medium_line_plain_t2_t1

0x0580,	// (0x0004da57) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0005d1c6) list_medium_line_plain_t2_t

0x0590,	// (0x0004da67) list_medium_line_plain_t3_t1

0x05a0,	// (0x0004da77) list_medium_line_plain_t3_t2

0x05ae,	// (0x0004da85) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0005d1cb) list_medium_line_plain_t3_t

0x1d3f,	// (0x0004f216) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x2_t2_g2_g1

0x1d4b,	// (0x0004f222) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d4b,	// (0x0004f222) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005c71d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005c71d) list_medium_line_x2_t2_g2_g

0x2f34,	// (0x0005040b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2f34,	// (0x0005040b) list_medium_line_x2_t2_g2_t1

0x1d6c,	// (0x0004f243) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1d6c,	// (0x0004f243) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005d1d2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005d1d2) list_medium_line_x2_t2_g2_t

0x1d3f,	// (0x0004f216) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x2_t4_g2_g1

0x05bc,	// (0x0004da93) list_medium_line_x2_t4_g2_g2_ParamLimits

0x05bc,	// (0x0004da93) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0005d1d7) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0005d1d7) list_medium_line_x2_t4_g2_g

0x05cd,	// (0x0004daa4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x05cd,	// (0x0004daa4) list_medium_line_x2_t4_g2_t1

0x05e7,	// (0x0004dabe) list_medium_line_x2_t4_g2_t2_ParamLimits

0x05e7,	// (0x0004dabe) list_medium_line_x2_t4_g2_t2

0x05fc,	// (0x0004dad3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x05fc,	// (0x0004dad3) list_medium_line_x2_t4_g2_t3

0x1d6c,	// (0x0004f243) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1d6c,	// (0x0004f243) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0005d1dc) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0005d1dc) list_medium_line_x2_t4_g2_t

0x8679,	// (0x00055b50) list_medium_line_t3_right_iconx2_g1

0x856f,	// (0x00055a46) list_medium_line_t3_right_iconx2_g2

0x0611,	// (0x0004dae8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0005d1e5) list_medium_line_t3_right_iconx2_g

0x061b,	// (0x0004daf2) list_medium_line_t3_right_iconx2_t1

0x062b,	// (0x0004db02) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0005d1ec) list_medium_line_t3_right_iconx2_t

0x1d3f,	// (0x0004f216) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x3_t4_g4_g1

0x0037,	// (0x0004d50e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0037,	// (0x0004d50e) list_medium_line_x3_t4_g4_g2

0x2f28,	// (0x000503ff) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2f28,	// (0x000503ff) list_medium_line_x3_t4_g4_g3

0x0639,	// (0x0004db10) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0639,	// (0x0004db10) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0005d1f1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0005d1f1) list_medium_line_x3_t4_g4_g

0x0645,	// (0x0004db1c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0645,	// (0x0004db1c) list_medium_line_x3_t4_g4_t1

0x065c,	// (0x0004db33) list_medium_line_x3_t4_g4_t2_ParamLimits

0x065c,	// (0x0004db33) list_medium_line_x3_t4_g4_t2

0x8681,	// (0x00055b58) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8681,	// (0x00055b58) list_medium_line_x3_t4_g4_t3

0x0677,	// (0x0004db4e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0677,	// (0x0004db4e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0005d1fa) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0005d1fa) list_medium_line_x3_t4_g4_t

0x0693,	// (0x0004db6a) list_single_dyc_row_text_pane_t1_ParamLimits

0x0693,	// (0x0004db6a) list_single_dyc_row_text_pane_t1

0x06dc,	// (0x0004dbb3) list_single_dyc_row_text_pane_t2_ParamLimits

0x06dc,	// (0x0004dbb3) list_single_dyc_row_text_pane_t2

0x8696,	// (0x00055b6d) list_single_dyc_row_text_pane_t3_ParamLimits

0x8696,	// (0x00055b6d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0005d203) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0005d203) list_single_dyc_row_text_pane_t

0x86ba,	// (0x00055b91) list_single_dyc_row_pane_g1_ParamLimits

0x86ba,	// (0x00055b91) list_single_dyc_row_pane_g1

0x86c6,	// (0x00055b9d) list_single_dyc_row_pane_g2_ParamLimits

0x86c6,	// (0x00055b9d) list_single_dyc_row_pane_g2

0x86d2,	// (0x00055ba9) list_single_dyc_row_pane_g3_ParamLimits

0x86d2,	// (0x00055ba9) list_single_dyc_row_pane_g3

0x86de,	// (0x00055bb5) list_single_dyc_row_pane_g4_ParamLimits

0x86de,	// (0x00055bb5) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005d210) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005d210) list_single_dyc_row_pane_g

0x86ea,	// (0x00055bc1) list_single_dyc_row_text_pane_ParamLimits

0x86ea,	// (0x00055bc1) list_single_dyc_row_text_pane

0x95ca,	// (0x00056aa1) bg_sp_fs_scroll_pane

0xe761,	// (0x0005bc38) thumb_sp_fs_scroll_pane

0x700f,	// (0x000544e6) list_medium_line_g1_ParamLimits

0x700f,	// (0x000544e6) list_medium_line_g1

0x8709,	// (0x00055be0) list_medium_line_t1_ParamLimits

0x8709,	// (0x00055be0) list_medium_line_t1

0x1d3f,	// (0x0004f216) list_medium_line_x2_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x2_g1

0x0037,	// (0x0004d50e) list_medium_line_x2_g2_ParamLimits

0x0037,	// (0x0004d50e) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005d219) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005d219) list_medium_line_x2_g

0x871e,	// (0x00055bf5) list_medium_line_x2_t1_ParamLimits

0x871e,	// (0x00055bf5) list_medium_line_x2_t1

0x1d3f,	// (0x0004f216) list_medium_line_x3_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x3_g1

0x0037,	// (0x0004d50e) list_medium_line_x3_g2_ParamLimits

0x0037,	// (0x0004d50e) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005d219) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005d219) list_medium_line_x3_g

0x871e,	// (0x00055bf5) list_medium_line_x3_t1_ParamLimits

0x871e,	// (0x00055bf5) list_medium_line_x3_t1

0xe76a,	// (0x0005bc41) thumb_sp_fs_scroll_pane_g1

0xe773,	// (0x0005bc4a) thumb_sp_fs_scroll_pane_g2

0xe77c,	// (0x0005bc53) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005d21e) thumb_sp_fs_scroll_pane_g

0xe76a,	// (0x0005bc41) bg_sp_fs_scroll_pane_g1

0xe773,	// (0x0005bc4a) bg_sp_fs_scroll_pane_g2

0xe77c,	// (0x0005bc53) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005d21e) bg_sp_fs_scroll_pane_g

0x1d3f,	// (0x0004f216) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d3f,	// (0x0004f216) list_medium_line_x2_t3_g4_g1

0x0057,	// (0x0004d52e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0057,	// (0x0004d52e) list_medium_line_x2_t3_g4_g2

0x0037,	// (0x0004d50e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0037,	// (0x0004d50e) list_medium_line_x2_t3_g4_g3

0x1d4b,	// (0x0004f222) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d4b,	// (0x0004f222) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005c799) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005c799) list_medium_line_x2_t3_g4_g

0x0811,	// (0x0004dce8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0811,	// (0x0004dce8) list_medium_line_x2_t3_g4_t1

0x082b,	// (0x0004dd02) list_medium_line_x2_t3_g4_t2_ParamLimits

0x082b,	// (0x0004dd02) list_medium_line_x2_t3_g4_t2

0x1d6c,	// (0x0004f243) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1d6c,	// (0x0004f243) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0005d225) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0005d225) list_medium_line_x2_t3_g4_t

0x700f,	// (0x000544e6) list_medium_line_g2_g1_ParamLimits

0x700f,	// (0x000544e6) list_medium_line_g2_g1

0x701b,	// (0x000544f2) list_medium_line_g2_g2_ParamLimits

0x701b,	// (0x000544f2) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0005ced7) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0005ced7) list_medium_line_g2_g

0x8734,	// (0x00055c0b) list_medium_line_g2_t1_ParamLimits

0x8734,	// (0x00055c0b) list_medium_line_g2_t1

0x700f,	// (0x000544e6) list_medium_line_t3_g2_g1_ParamLimits

0x700f,	// (0x000544e6) list_medium_line_t3_g2_g1

0x701b,	// (0x000544f2) list_medium_line_t3_g2_g2_ParamLimits

0x701b,	// (0x000544f2) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0005ced7) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0005ced7) list_medium_line_t3_g2_g

0x0844,	// (0x0004dd1b) list_medium_line_t3_g2_t1_ParamLimits

0x0844,	// (0x0004dd1b) list_medium_line_t3_g2_t1

0x085e,	// (0x0004dd35) list_medium_line_t3_g2_t2_ParamLimits

0x085e,	// (0x0004dd35) list_medium_line_t3_g2_t2

0x0873,	// (0x0004dd4a) list_medium_line_t3_g2_t3_ParamLimits

0x0873,	// (0x0004dd4a) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0005d22c) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0005d22c) list_medium_line_t3_g2_t

0x856f,	// (0x00055a46) list_medium_line_right_icon_g1

0x8749,	// (0x00055c20) list_medium_line_right_icon_t1

0x700f,	// (0x000544e6) list_medium_line_t2_g1_ParamLimits

0x700f,	// (0x000544e6) list_medium_line_t2_g1

0x088d,	// (0x0004dd64) list_medium_line_t2_t1_ParamLimits

0x088d,	// (0x0004dd64) list_medium_line_t2_t1

0x08a7,	// (0x0004dd7e) list_medium_line_t2_t2_ParamLimits

0x08a7,	// (0x0004dd7e) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0005d233) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0005d233) list_medium_line_t2_t

0x700f,	// (0x000544e6) list_medium_line_t3_g1_ParamLimits

0x700f,	// (0x000544e6) list_medium_line_t3_g1

0x08c0,	// (0x0004dd97) list_medium_line_t3_t1_ParamLimits

0x08c0,	// (0x0004dd97) list_medium_line_t3_t1

0x08d7,	// (0x0004ddae) list_medium_line_t3_t2_ParamLimits

0x08d7,	// (0x0004ddae) list_medium_line_t3_t2

0x08ec,	// (0x0004ddc3) list_medium_line_t3_t3_ParamLimits

0x08ec,	// (0x0004ddc3) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0005d238) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0005d238) list_medium_line_t3_t

0x700f,	// (0x000544e6) list_medium_line_g3_g1_ParamLimits

0x700f,	// (0x000544e6) list_medium_line_g3_g1

0xa1d8,	// (0x000576af) list_medium_line_g3_g2_ParamLimits

0xa1d8,	// (0x000576af) list_medium_line_g3_g2

0x701b,	// (0x000544f2) list_medium_line_g3_g3_ParamLimits

0x701b,	// (0x000544f2) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0005d23f) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0005d23f) list_medium_line_g3_g

0xa1e4,	// (0x000576bb) list_medium_line_g3_t1_ParamLimits

0xa1e4,	// (0x000576bb) list_medium_line_g3_t1

0x700f,	// (0x000544e6) list_medium_line_t2_g3_g1_ParamLimits

0x700f,	// (0x000544e6) list_medium_line_t2_g3_g1

0xa1d8,	// (0x000576af) list_medium_line_t2_g3_g2_ParamLimits

0xa1d8,	// (0x000576af) list_medium_line_t2_g3_g2

0x701b,	// (0x000544f2) list_medium_line_t2_g3_g3_ParamLimits

0x701b,	// (0x000544f2) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0005d23f) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0005d23f) list_medium_line_t2_g3_g

0x08fe,	// (0x0004ddd5) list_medium_line_t2_g3_t1_ParamLimits

0x08fe,	// (0x0004ddd5) list_medium_line_t2_g3_t1

0x0918,	// (0x0004ddef) list_medium_line_t2_g3_t2_ParamLimits

0x0918,	// (0x0004ddef) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0005d246) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0005d246) list_medium_line_t2_g3_t

0x700f,	// (0x000544e6) list_medium_line_t3_g3_g1_ParamLimits

0x700f,	// (0x000544e6) list_medium_line_t3_g3_g1

0xa1d8,	// (0x000576af) list_medium_line_t3_g3_g2_ParamLimits

0xa1d8,	// (0x000576af) list_medium_line_t3_g3_g2

0x701b,	// (0x000544f2) list_medium_line_t3_g3_g3_ParamLimits

0x701b,	// (0x000544f2) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0005d23f) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0005d23f) list_medium_line_t3_g3_g

0x0933,	// (0x0004de0a) list_medium_line_t3_g3_t1_ParamLimits

0x0933,	// (0x0004de0a) list_medium_line_t3_g3_t1

0x094c,	// (0x0004de23) list_medium_line_t3_g3_t2_ParamLimits

0x094c,	// (0x0004de23) list_medium_line_t3_g3_t2

0x0962,	// (0x0004de39) list_medium_line_t3_g3_t3_ParamLimits

0x0962,	// (0x0004de39) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0005d24b) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0005d24b) list_medium_line_t3_g3_t

0x8679,	// (0x00055b50) list_medium_line_right_iconx2_g1

0x856f,	// (0x00055a46) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005d252) list_medium_line_right_iconx2_g

0xa1f9,	// (0x000576d0) list_medium_line_right_iconx2_t1

0x8679,	// (0x00055b50) list_medium_line_t2_right_iconx2_g1

0x856f,	// (0x00055a46) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005d252) list_medium_line_t2_right_iconx2_g

0x097c,	// (0x0004de53) list_medium_line_t2_right_iconx2_t1

0x098c,	// (0x0004de63) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0005d257) list_medium_line_t2_right_iconx2_t

0xa207,	// (0x000576de) list_medium_line_x4_t4_t1

0x099e,	// (0x0004de75) list_medium_line_x4_t4_t2

0x09ae,	// (0x0004de85) list_medium_line_x4_t4_t3

0x09be,	// (0x0004de95) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0005d25c) list_medium_line_x4_t4_t

0x879a,	// (0x00055c71) tport_appsw_pane_ParamLimits

0x879a,	// (0x00055c71) tport_appsw_pane

0x87b2,	// (0x00055c89) tport_contact_pane_ParamLimits

0x87b2,	// (0x00055c89) tport_contact_pane

0x87ca,	// (0x00055ca1) tport_listscroll_pane_ParamLimits

0x87ca,	// (0x00055ca1) tport_listscroll_pane

0x87e4,	// (0x00055cbb) cell_tport_appsw_pane_ParamLimits

0x87e4,	// (0x00055cbb) cell_tport_appsw_pane

0xd5fe,	// (0x0005aad5) tport_appsw_pane_g1_ParamLimits

0xd5fe,	// (0x0005aad5) tport_appsw_pane_g1

0xe785,	// (0x0005bc5c) tport_contact_pane_g1

0xe0f8,	// (0x0005b5cf) tport_contact_pane_t1

0xe78e,	// (0x0005bc65) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0005d265) tport_contact_pane_t

0xe79c,	// (0x0005bc73) list_tport_pane

0xe7a5,	// (0x0005bc7c) scroll_pane_cp_030

0x882c,	// (0x00055d03) cell_tport_appsw_pane_g1

0x883c,	// (0x00055d13) cell_tport_appsw_pane_t1

0x884a,	// (0x00055d21) grid_highlight_pane_cp019

0x8852,	// (0x00055d29) list_tport_double_graphic_pane_ParamLimits

0x8852,	// (0x00055d29) list_tport_double_graphic_pane

0xa46a,	// (0x00057941) list_highlight_pane_cp023_ParamLimits

0xa46a,	// (0x00057941) list_highlight_pane_cp023

0x885f,	// (0x00055d36) list_tport_double_graphic_pane_g1_ParamLimits

0x885f,	// (0x00055d36) list_tport_double_graphic_pane_g1

0x886c,	// (0x00055d43) list_tport_double_graphic_pane_t1_ParamLimits

0x886c,	// (0x00055d43) list_tport_double_graphic_pane_t1

0x8881,	// (0x00055d58) list_tport_double_graphic_pane_t2_ParamLimits

0x8881,	// (0x00055d58) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005d271) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005d271) list_tport_double_graphic_pane_t

0x95ca,	// (0x00056aa1) main_cale_note_pane

0x67bb,	// (0x00053c92) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67bb,	// (0x00053c92) cell_vitu2_function_top_wide_pane_cp01

0x80b7,	// (0x0005558e) wait_bar_pane_cp05_ParamLimits

0xa46a,	// (0x00057941) listscroll_cmail_pane

0xe7ae,	// (0x0005bc85) list_cmail_pane

0x8893,	// (0x00055d6a) list_cmail_body_pane

0x88a8,	// (0x00055d7f) list_single_cmail_header_caption_pane

0x88c1,	// (0x00055d98) list_single_cmail_header_detail_pane_ParamLimits

0x88c1,	// (0x00055d98) list_single_cmail_header_detail_pane

0xe7be,	// (0x0005bc95) list_single_cmail_header_caption_pane_t1

0x09ce,	// (0x0004dea5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x09ce,	// (0x0004dea5) list_single_cmail_header_detail_pane_g1

0xa215,	// (0x000576ec) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa215,	// (0x000576ec) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0005d276) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0005d276) list_single_cmail_header_detail_pane_g

0xa221,	// (0x000576f8) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa221,	// (0x000576f8) list_single_cmail_header_detail_pane_t1

0xa281,	// (0x00057758) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa281,	// (0x00057758) list_single_cmail_header_editor_pane_bg

0xe7e2,	// (0x0005bcb9) list_cmail_body_pane_g1

0xe7eb,	// (0x0005bcc2) list_cmail_body_pane_t1

0xd61e,	// (0x0005aaf5) list_single_cmail_header_editor_pane_bg_g1

0xab4e,	// (0x00058025) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd62e,	// (0x0005ab05) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd626,	// (0x0005aafd) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd85d,	// (0x0005ad34) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd64e,	// (0x0005ab25) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd63e,	// (0x0005ab15) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd646,	// (0x0005ab1d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab2e,	// (0x00058005) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x88ea,	// (0x00055dc1) calenote_gesture_pane_ParamLimits

0x88ea,	// (0x00055dc1) calenote_gesture_pane

0x890a,	// (0x00055de1) calenote_window_pane_ParamLimits

0x890a,	// (0x00055de1) calenote_window_pane

0xe7f9,	// (0x0005bcd0) popup_note_window_cp01

0x8926,	// (0x00055dfd) calenote_swipe_1_pane_ParamLimits

0x8926,	// (0x00055dfd) calenote_swipe_1_pane

0x8513,	// (0x000559ea) calenote_swipe_2_pane_ParamLimits

0x8513,	// (0x000559ea) calenote_swipe_2_pane

0xe60b,	// (0x0005bae2) calenote_swipe_1_pane_g1_ParamLimits

0xe60b,	// (0x0005bae2) calenote_swipe_1_pane_g1

0xe618,	// (0x0005baef) calenote_swipe_1_pane_g2_ParamLimits

0xe618,	// (0x0005baef) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0005d19a) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0005d19a) calenote_swipe_1_pane_g

0xe80b,	// (0x0005bce2) calenote_swipe_1_pane_t1_ParamLimits

0xe80b,	// (0x0005bce2) calenote_swipe_1_pane_t1

0xe60b,	// (0x0005bae2) calenote_swipe_2_pane_g1_ParamLimits

0xe60b,	// (0x0005bae2) calenote_swipe_2_pane_g1

0xe82a,	// (0x0005bd01) calenote_swipe_2_pane_g2_ParamLimits

0xe82a,	// (0x0005bd01) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0005d282) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0005d282) calenote_swipe_2_pane_g

0xe836,	// (0x0005bd0d) calenote_swipe_2_pane_t1_ParamLimits

0xe836,	// (0x0005bd0d) calenote_swipe_2_pane_t1

0x95ca,	// (0x00056aa1) main_mup_navstr_pane

0x5473,	// (0x0005294a) main_mup3_pane_t7_ParamLimits

0x5473,	// (0x0005294a) main_mup3_pane_t7

0x9e34,	// (0x0005730b) main_mp4_pane_g6_ParamLimits

0x9e34,	// (0x0005730b) main_mp4_pane_g6

0x9fd8,	// (0x000574af) main_image3_pane_t4_ParamLimits

0x9fd8,	// (0x000574af) main_image3_pane_t4

0x893b,	// (0x00055e12) popup_navstr_preview_pane_ParamLimits

0x893b,	// (0x00055e12) popup_navstr_preview_pane

0x894f,	// (0x00055e26) scroll_navstr_pane_ParamLimits

0x894f,	// (0x00055e26) scroll_navstr_pane

0x95ca,	// (0x00056aa1) bg_popup_preview_window_pane_cp04

0xe85d,	// (0x0005bd34) popup_navstr_preview_pane_t1

0x8963,	// (0x00055e3a) scroll_navstr_pane_g1_ParamLimits

0x8963,	// (0x00055e3a) scroll_navstr_pane_g1

0x8977,	// (0x00055e4e) scroll_navstr_pane_t1_ParamLimits

0x8977,	// (0x00055e4e) scroll_navstr_pane_t1

0xe802,	// (0x0005bcd9) bg_button_pane_cp014

0xe802,	// (0x0005bcd9) bg_button_pane_cp030

0x83ac,	// (0x00055883) list_double_fisheye_pane_g4_ParamLimits

0x83ac,	// (0x00055883) list_double_fisheye_pane_g4

0x83b8,	// (0x0005588f) list_double_fisheye_pane_g5_ParamLimits

0x83b8,	// (0x0005588f) list_double_fisheye_pane_g5

0xcfc9,	// (0x0005a4a0) sp_fs_scroll_pane_cp03

0xe6fe,	// (0x0005bbd5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe70a,	// (0x0005bbe1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0005d1b7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe716,	// (0x0005bbed) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7b6,	// (0x0005bc8d) sp_fs_scroll_pane_cp02

0xa83d,	// (0x00057d14) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa83d,	// (0x00057d14) popup_sp_fs_calendar_preview_list_single_pane

0x95ca,	// (0x00056aa1) main_cam6_pano_pane

0xa46a,	// (0x00057941) main_mup3_pane_ParamLimits

0x95ca,	// (0x00056aa1) main_phacti_pane

0x7f8a,	// (0x00055461) bg_button_pane_cp11

0x7fa4,	// (0x0005547b) main_mobtv_info_pane_g2_ParamLimits

0x7fa4,	// (0x0005547b) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0005d117) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0005d117) main_mobtv_info_pane_g

0x8181,	// (0x00055658) sc_clock_pane_t5_ParamLimits

0x8181,	// (0x00055658) sc_clock_pane_t5

0x823c,	// (0x00055713) main_radioblah_pane_g1_ParamLimits

0xe53c,	// (0x0005ba13) main_radioblah_pane_t3_ParamLimits

0xe53c,	// (0x0005ba13) main_radioblah_pane_t3

0xe554,	// (0x0005ba2b) main_radioblah_pane_t4_ParamLimits

0xe554,	// (0x0005ba2b) main_radioblah_pane_t4

0x8264,	// (0x0005573b) main_radioblah_text_pane_ParamLimits

0x8264,	// (0x0005573b) main_radioblah_text_pane

0x8276,	// (0x0005574d) main_radioblah_info_pane_g1_ParamLimits

0x830f,	// (0x000557e6) main_radioblah_info_pane_t4_ParamLimits

0x830f,	// (0x000557e6) main_radioblah_info_pane_t4

0xa46a,	// (0x00057941) main_sp_fs_calendar_pane

0x898d,	// (0x00055e64) main_phacti_pane_g1

0x8995,	// (0x00055e6c) phacti_note_pane_ParamLimits

0x8995,	// (0x00055e6c) phacti_note_pane

0xe874,	// (0x0005bd4b) phacti_term_pane_ParamLimits

0xe874,	// (0x0005bd4b) phacti_term_pane

0xe889,	// (0x0005bd60) phacti_note_pane_t1_ParamLimits

0xe889,	// (0x0005bd60) phacti_note_pane_t1

0xa298,	// (0x0005776f) phacti_term_pane_g1

0xa2a0,	// (0x00057777) phacti_term_pane_t1_ParamLimits

0xa2a0,	// (0x00057777) phacti_term_pane_t1

0xe8a0,	// (0x0005bd77) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a8,	// (0x0005bd7f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0005d28c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b0,	// (0x0005bd87) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b0,	// (0x0005bd87) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c6,	// (0x0005bd9d) aid_popup_sp_fs_bg_corner_pane

0xcbaf,	// (0x0005a086) popup_sp_fs_calendar_preview_bg_pane_g1

0x95ca,	// (0x00056aa1) popup_sp_fs_calendar_preview_bg_pane

0x1bc8,	// (0x0004f09f) popup_sp_fs_calendar_preview_list_pane

0xc7a5,	// (0x00059c7c) bg_main_sp_fs_cale_pane_ParamLimits

0xc7a5,	// (0x00059c7c) bg_main_sp_fs_cale_pane

0xa2ca,	// (0x000577a1) listscroll_cale_mrui_pane_ParamLimits

0xa2ca,	// (0x000577a1) listscroll_cale_mrui_pane

0xa2df,	// (0x000577b6) listscroll_sp_fs_schedule_track_pane

0xa2e8,	// (0x000577bf) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa2e8,	// (0x000577bf) main_sp_fs_ctrlbar_pane_cp01

0xe8ce,	// (0x0005bda5) main_sp_fs_ribbon_pane

0xa2fb,	// (0x000577d2) popup_sp_fs_cale_preview_window

0x8a0a,	// (0x00055ee1) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a0a,	// (0x00055ee1) list_single_sp_fs_schedule_track_pane

0xa46a,	// (0x00057941) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa46a,	// (0x00057941) bg_sp_fs_highlight_list_pane_cp03

0x8a20,	// (0x00055ef7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8a20,	// (0x00055ef7) list_single_sp_fs_schedule_track_pane_g1

0x8a2c,	// (0x00055f03) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a2c,	// (0x00055f03) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0005d291) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0005d291) list_single_sp_fs_schedule_track_pane_g

0x8a38,	// (0x00055f0f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8a38,	// (0x00055f0f) list_single_sp_fs_schedule_track_pane_t1

0x8a52,	// (0x00055f29) sp_fs_schedule_track_pane_ParamLimits

0x8a52,	// (0x00055f29) sp_fs_schedule_track_pane

0xe8d6,	// (0x0005bdad) sp_fs_schedule_track_pane_g1

0xe8de,	// (0x0005bdb5) sp_fs_schedule_track_pane_g2

0xe8e6,	// (0x0005bdbd) sp_fs_schedule_track_pane_g3

0xe8ee,	// (0x0005bdc5) sp_fs_schedule_track_pane_g4

0xe8f6,	// (0x0005bdcd) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0005d296) sp_fs_schedule_track_pane_g

0xd61e,	// (0x0005aaf5) bg_sp_fs_schedule_viewer_highlight_g1

0xab4e,	// (0x00058025) bg_sp_fs_schedule_viewer_highlight_g2

0xd626,	// (0x0005aafd) bg_sp_fs_schedule_viewer_highlight_g3

0xd62e,	// (0x0005ab05) bg_sp_fs_schedule_viewer_highlight_g4

0xd85d,	// (0x0005ad34) bg_sp_fs_schedule_viewer_highlight_g5

0xd63e,	// (0x0005ab15) bg_sp_fs_schedule_viewer_highlight_g6

0xd646,	// (0x0005ab1d) bg_sp_fs_schedule_viewer_highlight_g7

0xd64e,	// (0x0005ab25) bg_sp_fs_schedule_viewer_highlight_g8

0xab2e,	// (0x00058005) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0005d2a1) bg_sp_fs_schedule_viewer_highlight_g

0x95ca,	// (0x00056aa1) bg_main_sp_fs_ribbon_pane

0x8a63,	// (0x00055f3a) main_sp_fs_ribbon_pane_g1

0xe8fe,	// (0x0005bdd5) main_sp_fs_ribbon_pane_t1

0x8a6c,	// (0x00055f43) main_sp_fs_ribbon_pane_t2

0xe90d,	// (0x0005bde4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0005d2b4) main_sp_fs_ribbon_pane_t

0xe91c,	// (0x0005bdf3) main_sp_fs_ribbon_scheduler_pane

0xe924,	// (0x0005bdfb) bg_main_sp_fs_ribbon_pane_g1

0xe92d,	// (0x0005be04) bg_main_sp_fs_ribbon_pane_g2

0xe936,	// (0x0005be0d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0005d2bb) bg_main_sp_fs_ribbon_pane_g

0xe93e,	// (0x0005be15) main_sp_fs_ribbon_scheduler_pane_g1

0xe947,	// (0x0005be1e) main_sp_fs_ribbon_scheduler_pane_g2

0xe950,	// (0x0005be27) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0005d2c2) main_sp_fs_ribbon_scheduler_pane_g

0xe959,	// (0x0005be30) list_cale_mrui_pane

0x8a7b,	// (0x00055f52) sp_fs_scroll_pane_cp07_ParamLimits

0x8a7b,	// (0x00055f52) sp_fs_scroll_pane_cp07

0x8a97,	// (0x00055f6e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8a97,	// (0x00055f6e) bg_sp_fs_schedule_viewer_highlight

0xe966,	// (0x0005be3d) list_single_sp_fs_schedule_track_pane_cp01

0xe96e,	// (0x0005be45) list_sp_fs_schedule_track_pane

0xe976,	// (0x0005be4d) sp_fs_scroll_pane_cp06_ParamLimits

0xe976,	// (0x0005be4d) sp_fs_scroll_pane_cp06

0xcbaf,	// (0x0005a086) bgmain_sp_fs_calendar_pane_g1

0x09e6,	// (0x0004debd) list_single_cale_mrui_pane_ParamLimits

0x09e6,	// (0x0004debd) list_single_cale_mrui_pane

0xa30d,	// (0x000577e4) list_single_cale_mrui_row_pane_ParamLimits

0xa30d,	// (0x000577e4) list_single_cale_mrui_row_pane

0xa31a,	// (0x000577f1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa31a,	// (0x000577f1) list_single_cale_mrui_row_pane_g1

0xa352,	// (0x00057829) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa352,	// (0x00057829) list_single_cale_mrui_row_pane_t1

0x0a08,	// (0x0004dedf) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0a08,	// (0x0004dedf) list_single_cale_mrui_row_pane_t2

0xa364,	// (0x0005783b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa364,	// (0x0005783b) list_single_cale_mrui_row_pane_t3

0xa393,	// (0x0005786a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa393,	// (0x0005786a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0005d2d0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0005d2d0) list_single_cale_mrui_row_pane_t

0x0a70,	// (0x0004df47) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0a70,	// (0x0004df47) list_single_cmail_header_editor_pane_bg_cp01

0x0a96,	// (0x0004df6d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0a96,	// (0x0004df6d) list_single_cmail_header_editor_pane_bg_cp02

0x8aa7,	// (0x00055f7e) main_radioblah_text_pane_t1_ParamLimits

0x8aa7,	// (0x00055f7e) main_radioblah_text_pane_t1

0xe995,	// (0x0005be6c) cam6_indi_pane_cp01

0xe99d,	// (0x0005be74) cam6_mode_pane_cp01

0xe9a5,	// (0x0005be7c) cam6_pano_pane

0xe9ae,	// (0x0005be85) cam6_zoom_pane_cp01

0xe9b6,	// (0x0005be8d) cam6_pano_image_pane

0xe9c1,	// (0x0005be98) cam6_pano_pane_g1

0xe29f,	// (0x0005b776) cam6_pano_pane_g2

0xe9ca,	// (0x0005bea1) cam6_pano_pane_g3

0xe9d3,	// (0x0005beaa) cam6_pano_pane_g4

0xd179,	// (0x0005a650) cam6_pano_pane_g5

0xe9dc,	// (0x0005beb3) cam6_pano_pane_g6

0xe9e6,	// (0x0005bebd) cam6_pano_pane_g7

0xe9ee,	// (0x0005bec5) cam6_pano_pane_g8

0xe9f7,	// (0x0005bece) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0005d2d9) cam6_pano_pane_g

0x95ca,	// (0x00056aa1) main_browser_tag_pane

0xe855,	// (0x0005bd2c) grid_navstr_albumart_pane

0xea02,	// (0x0005bed9) cell_navstr_albumart_pane_ParamLimits

0xea02,	// (0x0005bed9) cell_navstr_albumart_pane

0xb4fb,	// (0x000589d2) cell_navstr_albumart_pane_g1

0xc5b6,	// (0x00059a8d) cell_navstr_albumart_pane_g2

0xc5c6,	// (0x00059a9d) cell_navstr_albumart_pane_g3

0xc5be,	// (0x00059a95) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0005d2ec) cell_navstr_albumart_pane_g

0x8ac2,	// (0x00055f99) bt_list_pane_ParamLimits

0x8ac2,	// (0x00055f99) bt_list_pane

0xea24,	// (0x0005befb) bt_list_pane_t1

0xea33,	// (0x0005bf0a) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0005d2f5) bt_list_pane_t

0x95ca,	// (0x00056aa1) main_cale_prevew_pane

0x8ad7,	// (0x00055fae) popup_cale_preview_window_ParamLimits

0x8ad7,	// (0x00055fae) popup_cale_preview_window

0xa46a,	// (0x00057941) bg_popup_preview_window_pane_cp05_ParamLimits

0xa46a,	// (0x00057941) bg_popup_preview_window_pane_cp05

0xea42,	// (0x0005bf19) list_cale_preview_pane_ParamLimits

0xea42,	// (0x0005bf19) list_cale_preview_pane

0xea4e,	// (0x0005bf25) list_double_cale_preview_pane_ParamLimits

0xea4e,	// (0x0005bf25) list_double_cale_preview_pane

0xea60,	// (0x0005bf37) list_single_cale_preview_pane_ParamLimits

0xea60,	// (0x0005bf37) list_single_cale_preview_pane

0xea74,	// (0x0005bf4b) list_single_cale_preview_pane_g1

0xea7c,	// (0x0005bf53) list_single_cale_preview_pane_t1_ParamLimits

0xea7c,	// (0x0005bf53) list_single_cale_preview_pane_t1

0xea91,	// (0x0005bf68) list_double_cale_preview_pane_g1

0xea99,	// (0x0005bf70) list_double_cale_preview_pane_t1_ParamLimits

0xea99,	// (0x0005bf70) list_double_cale_preview_pane_t1

0xeaae,	// (0x0005bf85) list_double_cale_preview_pane_t2_ParamLimits

0xeaae,	// (0x0005bf85) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0005d2fa) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0005d2fa) list_double_cale_preview_pane_t

0x95ca,	// (0x00056aa1) main_ezdial_pane

0xa46a,	// (0x00057941) main_sp_fs_email_pane_ParamLimits

0x8577,	// (0x00055a4e) cmail_ddmenu_btn01_pane_ParamLimits

0x8577,	// (0x00055a4e) cmail_ddmenu_btn01_pane

0x858a,	// (0x00055a61) cmail_ddmenu_btn02_pane_ParamLimits

0x858a,	// (0x00055a61) cmail_ddmenu_btn02_pane

0x85ad,	// (0x00055a84) cmail_ddmenu_btn03_pane_ParamLimits

0x85ad,	// (0x00055a84) cmail_ddmenu_btn03_pane

0x85d3,	// (0x00055aaa) main_sp_fs_ctrlbar_pane_ParamLimits

0x85f7,	// (0x00055ace) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8893,	// (0x00055d6a) list_cmail_body_pane_ParamLimits

0xe7cc,	// (0x0005bca3) bg_button_pane_cp12

0xe7d5,	// (0x0005bcac) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d5,	// (0x0005bcac) list_single_cmail_header_detail_pane_g3

0xa25d,	// (0x00057734) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa25d,	// (0x00057734) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005d27d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005d27d) list_single_cmail_header_detail_pane_t

0xa2b5,	// (0x0005778c) phacti_term_pane_t2_ParamLimits

0xa2b5,	// (0x0005778c) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0005d287) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0005d287) phacti_term_pane_t

0xeac6,	// (0x0005bf9d) aid_size_list_single_double

0x8af0,	// (0x00055fc7) popup_ezdial_listscroll_window

0x8b0b,	// (0x00055fe2) popup_number_entry_window_cp01

0xa8f5,	// (0x00057dcc) bg_popup_call_pane_cp09

0xead2,	// (0x0005bfa9) ezdial_list_pane

0xeada,	// (0x0005bfb1) scroll_pane_cp23

0xc7a5,	// (0x00059c7c) bg_button_pane_cp028_ParamLimits

0xc7a5,	// (0x00059c7c) bg_button_pane_cp028

0x8b19,	// (0x00055ff0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8b19,	// (0x00055ff0) cmail_ddmenu_btn01_pane_g1

0x8b25,	// (0x00055ffc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8b25,	// (0x00055ffc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0005d2ff) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0005d2ff) cmail_ddmenu_btn01_pane_g

0xeae2,	// (0x0005bfb9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae2,	// (0x0005bfb9) cmail_ddmenu_btn01_pane_t1

0xc7a5,	// (0x00059c7c) bg_button_pane_cp029_ParamLimits

0xc7a5,	// (0x00059c7c) bg_button_pane_cp029

0x8b31,	// (0x00056008) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8b31,	// (0x00056008) cmail_ddmenu_btn02_pane_g1

0x8b49,	// (0x00056020) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8b49,	// (0x00056020) cmail_ddmenu_btn02_pane_t1

0xa46a,	// (0x00057941) bg_button_pane_cp031_ParamLimits

0xa46a,	// (0x00057941) bg_button_pane_cp031

0x8b31,	// (0x00056008) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8b31,	// (0x00056008) cmail_ddmenu_btn03_pane_g1

0x8b49,	// (0x00056020) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8b49,	// (0x00056020) cmail_ddmenu_btn03_pane_t1

0x6041,	// (0x00053518) cell_dialer2_keypad_pane_t1_ParamLimits

0x605b,	// (0x00053532) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x605b,	// (0x00053532) cell_dialer2_keypad_pane_t1_copy1

0x7df1,	// (0x000552c8) ncimui_group_button_pane

0xa46a,	// (0x00057941) main_sp_fs_calendar_pane_ParamLimits

0x88a8,	// (0x00055d7f) list_single_cmail_header_caption_pane_ParamLimits

0xde31,	// (0x0005b308) aid_recal_txt_sm_pane

0x95ca,	// (0x00056aa1) mian_recal_day_pane

0xa2fb,	// (0x000577d2) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf7,	// (0x0005bfce) list_recal_day_pane

0xa3dd,	// (0x000578b4) list_single_recal_day_pane_ParamLimits

0xa3dd,	// (0x000578b4) list_single_recal_day_pane

0xeb1e,	// (0x0005bff5) list_single_recal_day_pane_g1_ParamLimits

0xeb1e,	// (0x0005bff5) list_single_recal_day_pane_g1

0xa3ef,	// (0x000578c6) list_single_recal_day_pane_g2_ParamLimits

0xa3ef,	// (0x000578c6) list_single_recal_day_pane_g2

0xa3ff,	// (0x000578d6) list_single_recal_day_pane_g3_ParamLimits

0xa3ff,	// (0x000578d6) list_single_recal_day_pane_g3

0x0ab6,	// (0x0004df8d) list_single_recal_day_pane_g4_ParamLimits

0x0ab6,	// (0x0004df8d) list_single_recal_day_pane_g4

0xa40b,	// (0x000578e2) list_single_recal_day_pane_g5_ParamLimits

0xa40b,	// (0x000578e2) list_single_recal_day_pane_g5

0xa41b,	// (0x000578f2) list_single_recal_day_pane_g6_ParamLimits

0xa41b,	// (0x000578f2) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0005d30e) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0005d30e) list_single_recal_day_pane_g

0xa42f,	// (0x00057906) list_single_recal_day_pane_t1

0xa441,	// (0x00057918) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0005d319) list_single_recal_day_pane_t

0x8b6d,	// (0x00056044) ncimui_query_button_pane_ParamLimits

0x8b6d,	// (0x00056044) ncimui_query_button_pane

0x8b7d,	// (0x00056054) ncimui_query_button_pane_t1_ParamLimits

0x8b7d,	// (0x00056054) ncimui_query_button_pane_t1

0xeb2a,	// (0x0005c001) ncimui_query_button_pane_t2_ParamLimits

0xeb2a,	// (0x0005c001) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0005d31e) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0005d31e) ncimui_query_button_pane_t

0x8b90,	// (0x00056067) query_button_pane_ParamLimits

0x8b90,	// (0x00056067) query_button_pane

0x95ca,	// (0x00056aa1) bg_button_pane_cp0028

0xeb3d,	// (0x0005c014) query_button_pane_t1

0x4068,	// (0x0005153f) main_tport_pane_ParamLimits

0x8757,	// (0x00055c2e) bg_popup_window_pane_cp01_ParamLimits

0x8757,	// (0x00055c2e) bg_popup_window_pane_cp01

0x8772,	// (0x00055c49) heading_pane_cp08_ParamLimits

0x8772,	// (0x00055c49) heading_pane_cp08

0x8785,	// (0x00055c5c) heading_pane_cp07_ParamLimits

0x8785,	// (0x00055c5c) heading_pane_cp07

0x882c,	// (0x00055d03) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0005d26a) cell_tport_appsw_pane_g

0x3640,	// (0x00050b17) input_candi_list_open_g1

0xad19,	// (0x000581f0) list_cale_time_pane_g6_ParamLimits

0xad19,	// (0x000581f0) list_cale_time_pane_g6

0x4e2b,	// (0x00052302) aid_size_touch_calib_1_ParamLimits

0x4e2b,	// (0x00052302) aid_size_touch_calib_1

0x4e3d,	// (0x00052314) aid_size_touch_calib_2_ParamLimits

0x4e3d,	// (0x00052314) aid_size_touch_calib_2

0x4e55,	// (0x0005232c) aid_size_touch_calib_3_ParamLimits

0x4e55,	// (0x0005232c) aid_size_touch_calib_3

0x4e73,	// (0x0005234a) aid_size_touch_calib_4_ParamLimits

0x4e73,	// (0x0005234a) aid_size_touch_calib_4

0x4e8b,	// (0x00052362) main_touch_calib_button_group_pane_ParamLimits

0x4e8b,	// (0x00052362) main_touch_calib_button_group_pane

0x4ea3,	// (0x0005237a) main_touch_calib_pane_g1_ParamLimits

0x4eb5,	// (0x0005238c) main_touch_calib_pane_g2_ParamLimits

0x4ec7,	// (0x0005239e) main_touch_calib_pane_g3_ParamLimits

0x4ed9,	// (0x000523b0) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0005cc28) main_touch_calib_pane_g_ParamLimits

0x4eeb,	// (0x000523c2) main_touch_calib_pane_t1_ParamLimits

0x4f05,	// (0x000523dc) main_touch_calib_pane_t2_ParamLimits

0x4f1f,	// (0x000523f6) main_touch_calib_pane_t3_ParamLimits

0x4f33,	// (0x0005240a) main_touch_calib_pane_t4_ParamLimits

0x4f47,	// (0x0005241e) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0005cc31) main_touch_calib_pane_t_ParamLimits

0xcf0f,	// (0x0005a3e6) list_single_fp_cale_pane_g3_ParamLimits

0xcf0f,	// (0x0005a3e6) list_single_fp_cale_pane_g3

0xa46a,	// (0x00057941) bg_button_pane_cp012_ParamLimits

0xa46a,	// (0x00057941) bg_vkb2_func_pane_cp03_ParamLimits

0x6fc5,	// (0x0005449c) cell_vitu2_function_top_pane_g1_ParamLimits

0xa46a,	// (0x00057941) bg_vkb2_func_pane_cp04_ParamLimits

0x7d7f,	// (0x00055256) main_ncimui_button_group_pane_ParamLimits

0x7d7f,	// (0x00055256) main_ncimui_button_group_pane

0x7ddf,	// (0x000552b6) main_ncimui_pane_t3_ParamLimits

0x7ddf,	// (0x000552b6) main_ncimui_pane_t3

0xe86b,	// (0x0005bd42) phacti_button_group_pane

0xeac6,	// (0x0005bf9d) aid_size_list_single_double_ParamLimits

0x8af0,	// (0x00055fc7) popup_ezdial_listscroll_window_ParamLimits

0x8b0b,	// (0x00055fe2) popup_number_entry_window_cp01_ParamLimits

0x8ba3,	// (0x0005607a) phacti_button_pane_ParamLimits

0x8ba3,	// (0x0005607a) phacti_button_pane

0x95ca,	// (0x00056aa1) bg_button_pane_cp14

0xeb4b,	// (0x0005c022) phacti_button_pane_t1

0x8bb4,	// (0x0005608b) main_touch_calib_button_pane_ParamLimits

0x8bb4,	// (0x0005608b) main_touch_calib_button_pane

0xa727,	// (0x00057bfe) bg_button_pane_cp18_ParamLimits

0xa727,	// (0x00057bfe) bg_button_pane_cp18

0xeb59,	// (0x0005c030) main_touch_calib_button_pane_t1_ParamLimits

0xeb59,	// (0x0005c030) main_touch_calib_button_pane_t1

0xeb6f,	// (0x0005c046) main_touch_calib_button_pane_t2_ParamLimits

0xeb6f,	// (0x0005c046) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0005d323) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0005d323) main_touch_calib_button_pane_t

0x95ca,	// (0x00056aa1) cell_ncimui_button_pane

0x95ca,	// (0x00056aa1) bg_button_pane_cp032

0xeb8d,	// (0x0005c064) cell_ncimui_button_pane_t1

0x9fb8,	// (0x0005748f) image3_infobar_pane_ParamLimits

0x9fb8,	// (0x0005748f) image3_infobar_pane

0x81ad,	// (0x00055684) fs_bigclock_status_pane_ParamLimits

0x81ad,	// (0x00055684) fs_bigclock_status_pane

0x81ba,	// (0x00055691) main_fs_bigclock_clock_pane_ParamLimits

0x81ba,	// (0x00055691) main_fs_bigclock_clock_pane

0x81da,	// (0x000556b1) main_fs_bigclock_indi_pane_ParamLimits

0x81da,	// (0x000556b1) main_fs_bigclock_indi_pane

0x8204,	// (0x000556db) main_fs_bigclock_swipe_pane_ParamLimits

0x8204,	// (0x000556db) main_fs_bigclock_swipe_pane

0x95ca,	// (0x00056aa1) main_fs_clock_dumped_data

0xe3ac,	// (0x0005b883) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3ac,	// (0x0005b883) list_single_fs_bigclock_indicator_pane_g1

0xe3c8,	// (0x0005b89f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3c8,	// (0x0005b89f) list_single_fs_bigclock_indicator_pane_g2

0xe3e2,	// (0x0005b8b9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3e2,	// (0x0005b8b9) list_single_fs_bigclock_indicator_pane_g3

0xe3fc,	// (0x0005b8d3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3fc,	// (0x0005b8d3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0005d14b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0005d14b) list_single_fs_bigclock_indicator_pane_g

0xe427,	// (0x0005b8fe) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe427,	// (0x0005b8fe) list_single_fs_bigclock_indicator_pane_t1

0xe44f,	// (0x0005b926) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe44f,	// (0x0005b926) list_single_fs_bigclock_indicator_pane_t2

0xe477,	// (0x0005b94e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe477,	// (0x0005b94e) list_single_fs_bigclock_indicator_pane_t3

0xe49f,	// (0x0005b976) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe49f,	// (0x0005b976) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0005d156) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0005d156) list_single_fs_bigclock_indicator_pane_t

0xeb9b,	// (0x0005c072) image3_infobar_fav_pane_ParamLimits

0xeb9b,	// (0x0005c072) image3_infobar_fav_pane

0xebab,	// (0x0005c082) image3_infobar_loc_pane_ParamLimits

0xebab,	// (0x0005c082) image3_infobar_loc_pane

0xebbf,	// (0x0005c096) image3_infobar_time_pane_ParamLimits

0xebbf,	// (0x0005c096) image3_infobar_time_pane

0xcbaf,	// (0x0005a086) image3_infobar_time_pane_g1

0xebcf,	// (0x0005c0a6) image3_infobar_time_pane_t1

0xcbaf,	// (0x0005a086) image3_infobar_loc_pane_g1

0xebdd,	// (0x0005c0b4) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0005d328) image3_infobar_loc_pane_g

0xebe5,	// (0x0005c0bc) image3_infobar_loc_pane_t1

0xcbaf,	// (0x0005a086) image3_infobar_fav_pane_g1

0xebf3,	// (0x0005c0ca) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0005d32d) image3_infobar_fav_pane_g

0xebfb,	// (0x0005c0d2) fs_bigclock_status_battery_pane

0xec04,	// (0x0005c0db) fs_bigclock_status_signal_pane

0xec0d,	// (0x0005c0e4) fs_bigclock_status_title_pane

0xec16,	// (0x0005c0ed) fs_bigclock_status_signal_pane_g1

0xec1f,	// (0x0005c0f6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0005d332) fs_bigclock_status_signal_pane_g

0xec27,	// (0x0005c0fe) fs_bigclock_status_battery_pane_g1

0xec30,	// (0x0005c107) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0005d337) fs_bigclock_status_battery_pane_g

0xec38,	// (0x0005c10f) fs_bigclock_status_title_pane_t1

0xcbaf,	// (0x0005a086) main_fs_bigclock_clock_pane_g1

0xec46,	// (0x0005c11d) main_fs_bigclock_clock_pane_g2

0xec4f,	// (0x0005c126) main_fs_bigclock_clock_pane_g3

0xec4f,	// (0x0005c126) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0005d33c) main_fs_bigclock_clock_pane_g

0xec57,	// (0x0005c12e) main_fs_bigclock_clock_pane_t1

0x8bc9,	// (0x000560a0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0005d345) main_fs_bigclock_clock_pane_t

0xec65,	// (0x0005c13c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec65,	// (0x0005c13c) list_single_fs_bigclock_indicator_pane

0xec76,	// (0x0005c14d) list_single_fs_bigclock_pane_ParamLimits

0xec76,	// (0x0005c14d) list_single_fs_bigclock_pane

0xec9c,	// (0x0005c173) main_fs_bigclock_indicator_pane_t1

0xecab,	// (0x0005c182) list_single_fs_bigclock_pane_g1

0xecb3,	// (0x0005c18a) list_single_fs_bigclock_pane_t1

0xcbaf,	// (0x0005a086) main_fs_bigclock_swipe_pane_g1

0xecf6,	// (0x0005c1cd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0005d356) main_fs_bigclock_swipe_pane_g

0xecfe,	// (0x0005c1d5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfe,	// (0x0005c1d5) main_fs_bigclock_swipe_pane_t1

0x2f5f,	// (0x00050436) call_type_pane_ParamLimits

0x95ca,	// (0x00056aa1) main_btmg_pane

0xa346,	// (0x0005781d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa346,	// (0x0005781d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0005d2c9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0005d2c9) list_single_cale_mrui_row_pane_g

0xa3cc,	// (0x000578a3) list_recal_vselct_arw_lo_pane

0xeb16,	// (0x0005bfed) list_recal_vselct_arw_up_pane

0xa3d4,	// (0x000578ab) list_recal_vselct_pane

0x8c1a,	// (0x000560f1) btmg_button_pane

0x8c24,	// (0x000560fb) main_btmg_pane_g1

0x95ca,	// (0x00056aa1) bg_button_pane_cp044

0xed1b,	// (0x0005c1f2) btmg_button_pane_t1

0xc791,	// (0x00059c68) aid_listscroll_gen

0xa46a,	// (0x00057941) main_cntbar_detail_pane

0xe7ae,	// (0x0005bc85) list_cmail_folder_pane

0xcfc9,	// (0x0005a4a0) sp_fs_scroll_pane_cp03_ParamLimits

0x0ad6,	// (0x0004dfad) list_single_fs_dyc_pane_cp01_ParamLimits

0x0ad6,	// (0x0004dfad) list_single_fs_dyc_pane_cp01

0xed29,	// (0x0005c200) aid_size_cmail_indent

0xa453,	// (0x0005792a) list_single_dyc_row_pane_cp01

0x8c5a,	// (0x00056131) cntbar_detail_list_pane_ParamLimits

0x8c5a,	// (0x00056131) cntbar_detail_list_pane

0x8ca6,	// (0x0005617d) main_cntbar_detail_cont_pane_ParamLimits

0x8ca6,	// (0x0005617d) main_cntbar_detail_cont_pane

0xcfc9,	// (0x0005a4a0) scroll_pane_cp032_ParamLimits

0xcfc9,	// (0x0005a4a0) scroll_pane_cp032

0x8cba,	// (0x00056191) cntbar_detail_list_event_pane_ParamLimits

0x8cba,	// (0x00056191) cntbar_detail_list_event_pane

0x8c6a,	// (0x00056141) cntbar_detail_list_shct_pane

0xab9c,	// (0x00058073) aid_list_gen

0xed32,	// (0x0005c209) aid_scroll

0xed3b,	// (0x0005c212) aid_size_touch_scroll_bar

0x75da,	// (0x00054ab1) aid_list_double

0xde5a,	// (0x0005b331) aid_list_single

0xde5a,	// (0x0005b331) aid_list_single_lg

0x0af2,	// (0x0004dfc9) aid_list_z_g_a_sm

0x0afa,	// (0x0004dfd1) aid_list_z_g_d

0x0b02,	// (0x0004dfd9) aid_txt_z_prm

0x0b10,	// (0x0004dfe7) aid_txt_z_prm_cp01

0x0b1e,	// (0x0004dff5) aid_txt_z_sec

0x8cca,	// (0x000561a1) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8cca,	// (0x000561a1) main_cntbar_detail_cont_pane_g1

0x8cde,	// (0x000561b5) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8cde,	// (0x000561b5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0005d35b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0005d35b) main_cntbar_detail_cont_pane_g

0xed44,	// (0x0005c21b) main_cntbar_detail_cont_pane_t1

0xed52,	// (0x0005c229) main_cntbar_detail_cont_pane_t2

0xed60,	// (0x0005c237) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0005d360) main_cntbar_detail_cont_pane_t

0x8cee,	// (0x000561c5) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8cee,	// (0x000561c5) cell_cntbar_detail_list_shct_pane

0xed6e,	// (0x0005c245) cntbar_detail_list_shct_pane_g1

0xed77,	// (0x0005c24e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0005d367) cntbar_detail_list_shct_pane_g

0x8d02,	// (0x000561d9) cntbar_detail_list_event_pane_g1_ParamLimits

0x8d02,	// (0x000561d9) cntbar_detail_list_event_pane_g1

0x8d0e,	// (0x000561e5) cntbar_detail_list_event_pane_g2_ParamLimits

0x8d0e,	// (0x000561e5) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0005d36c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0005d36c) cntbar_detail_list_event_pane_g

0x8d7a,	// (0x00056251) cntbar_detail_list_event_pane_t1_ParamLimits

0x8d7a,	// (0x00056251) cntbar_detail_list_event_pane_t1

0x8d8f,	// (0x00056266) cntbar_detail_list_event_pane_t2_ParamLimits

0x8d8f,	// (0x00056266) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0005d379) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0005d379) cntbar_detail_list_event_pane_t

0xcbaf,	// (0x0005a086) cell_cntbar_detail_list_shct_pane_g1

0xb35a,	// (0x00058831) navi_pane_mv_g3

0xa46a,	// (0x00057941) main_cntbar_detail_pane_ParamLimits

0x95ca,	// (0x00056aa1) main_notif_wgt_pane

0x9dce,	// (0x000572a5) aid_tch_main_mp4_pane_g4

0x9fb0,	// (0x00057487) popup_slider_window_cp02

0xa3c2,	// (0x00057899) list_recal_day_event_pane

0x8c2e,	// (0x00056105) cntbar_detail_btn_pane_ParamLimits

0x8c2e,	// (0x00056105) cntbar_detail_btn_pane

0x8c44,	// (0x0005611b) cntbar_detail_btn_pane_cp01_ParamLimits

0x8c44,	// (0x0005611b) cntbar_detail_btn_pane_cp01

0x8c6a,	// (0x00056141) cntbar_detail_list_shct_pane_ParamLimits

0x8c7a,	// (0x00056151) cntbar_detail_pane_g1_ParamLimits

0x8c7a,	// (0x00056151) cntbar_detail_pane_g1

0x8c8a,	// (0x00056161) cntbar_detail_pane_t1_ParamLimits

0x8c8a,	// (0x00056161) cntbar_detail_pane_t1

0x8d1a,	// (0x000561f1) cntbar_detail_list_event_pane_g3_ParamLimits

0x8d1a,	// (0x000561f1) cntbar_detail_list_event_pane_g3

0x8d32,	// (0x00056209) cntbar_detail_list_event_pane_g4_ParamLimits

0x8d32,	// (0x00056209) cntbar_detail_list_event_pane_g4

0x8d4a,	// (0x00056221) cntbar_detail_list_event_pane_g5_ParamLimits

0x8d4a,	// (0x00056221) cntbar_detail_list_event_pane_g5

0x8d62,	// (0x00056239) cntbar_detail_list_event_pane_g6_ParamLimits

0x8d62,	// (0x00056239) cntbar_detail_list_event_pane_g6

0x8da4,	// (0x0005627b) cntbar_detail_list_event_pane_t3_ParamLimits

0x8da4,	// (0x0005627b) cntbar_detail_list_event_pane_t3

0x8db6,	// (0x0005628d) popup_notif_wgt_window_ParamLimits

0x8db6,	// (0x0005628d) popup_notif_wgt_window

0x8dcf,	// (0x000562a6) popup_submenu_window_cp01_ParamLimits

0x8dcf,	// (0x000562a6) popup_submenu_window_cp01

0xa8f5,	// (0x00057dcc) bg_popup_window_pane_cp10

0xed80,	// (0x0005c257) listscroll_notif_wgt_pane

0xed91,	// (0x0005c268) list_notif_wgt_window

0xed9a,	// (0x0005c271) scroll_pane_cp033

0x8de1,	// (0x000562b8) list_notif_wgt_row_pane_ParamLimits

0x8de1,	// (0x000562b8) list_notif_wgt_row_pane

0xeda3,	// (0x0005c27a) aid_size_list_notif_wgt_del

0xedb0,	// (0x0005c287) list_notif_wgt_row_pane_g1

0xedbc,	// (0x0005c293) list_notif_wgt_row_pane_g2

0xedd0,	// (0x0005c2a7) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0005d380) list_notif_wgt_row_pane_g

0xeddd,	// (0x0005c2b4) list_notif_wgt_row_pane_t1

0xedf3,	// (0x0005c2ca) list_notif_wgt_row_pane_t2

0xee05,	// (0x0005c2dc) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0005d387) list_notif_wgt_row_pane_t

0xd865,	// (0x0005ad3c) list_recal_day_event_pane_g1

0xee17,	// (0x0005c2ee) list_recal_day_event_pane_t1

0x95ca,	// (0x00056aa1) bg_button_pane_cp045

0xee26,	// (0x0005c2fd) cntbar_detail_btn_pane_t1

0xc7a5,	// (0x00059c7c) main_callh_pane_ParamLimits

0xc7a5,	// (0x00059c7c) main_callh_pane

0x95ca,	// (0x00056aa1) main_coverflow0_pane

0x95ca,	// (0x00056aa1) main_wgtman_pane

0x821c,	// (0x000556f3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x821c,	// (0x000556f3) main_fs_bigclock_unlock_btn_pane

0x8824,	// (0x00055cfb) bg_button_pane_cp16

0x8834,	// (0x00055d0b) cell_tport_appsw_pane_g3

0x8df1,	// (0x000562c8) cf0_flow_pane_ParamLimits

0x8df1,	// (0x000562c8) cf0_flow_pane

0xee34,	// (0x0005c30b) listscroll_cf0_pane

0xee3f,	// (0x0005c316) main_cf0_pane_g1

0x8e06,	// (0x000562dd) main_cf0_pane_t1_ParamLimits

0x8e06,	// (0x000562dd) main_cf0_pane_t1

0x8e1d,	// (0x000562f4) main_cf0_pane_t2_ParamLimits

0x8e1d,	// (0x000562f4) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0005d393) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0005d393) main_cf0_pane_t

0xee51,	// (0x0005c328) scroll_pane_cp11

0x8e34,	// (0x0005630b) cf0_flow_pane_g1

0x8e3c,	// (0x00056313) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0005d398) cf0_flow_pane_g

0x8e44,	// (0x0005631b) cf0_flow_pane_t1

0x95ca,	// (0x00056aa1) main_call6_pane

0x95ca,	// (0x00056aa1) main_calllock_pane

0x8e52,	// (0x00056329) call6_btn_grp_pane_ParamLimits

0x8e52,	// (0x00056329) call6_btn_grp_pane

0x8e6c,	// (0x00056343) call6_pane_g1_ParamLimits

0x8e6c,	// (0x00056343) call6_pane_g1

0x8e81,	// (0x00056358) popup_call6_1st_window_ParamLimits

0x8e81,	// (0x00056358) popup_call6_1st_window

0x8e92,	// (0x00056369) popup_call6_2nd_window_ParamLimits

0x8e92,	// (0x00056369) popup_call6_2nd_window

0x8ea3,	// (0x0005637a) cell_call6_btn_pane_ParamLimits

0x8ea3,	// (0x0005637a) cell_call6_btn_pane

0xa8f5,	// (0x00057dcc) bg_popup_call2_in_pane_cp03

0xee5c,	// (0x0005c333) popup_call6_1st_window_g1

0xee64,	// (0x0005c33b) popup_call6_1st_window_g2

0xee6c,	// (0x0005c343) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0005d39d) popup_call6_1st_window_g

0xee74,	// (0x0005c34b) popup_call6_1st_window_t1

0xee83,	// (0x0005c35a) popup_call6_1st_window_t2

0xee93,	// (0x0005c36a) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0005d3a4) popup_call6_1st_window_t

0xa8f5,	// (0x00057dcc) bg_popup_call2_in_pane_cp04

0xee5c,	// (0x0005c333) popup_call6_2nd_window_g1

0xee64,	// (0x0005c33b) popup_call6_2nd_window_g2

0xee6c,	// (0x0005c343) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0005d39d) popup_call6_2nd_window_g

0xee74,	// (0x0005c34b) popup_call6_2nd_window_t1

0x95ca,	// (0x00056aa1) bg_button_pane_cp15

0xeea3,	// (0x0005c37a) cell_call6_btn_pane_g1

0xeeac,	// (0x0005c383) cell_call6_btn_pane_t1

0x8eb7,	// (0x0005638e) listscroll_wgtman_pane_ParamLimits

0x8eb7,	// (0x0005638e) listscroll_wgtman_pane

0x8ed8,	// (0x000563af) wgtman_btn_pane_ParamLimits

0x8ed8,	// (0x000563af) wgtman_btn_pane

0xb122,	// (0x000585f9) aid_scroll_copy1

0xeebb,	// (0x0005c392) list_wgtman_pane

0x8f1b,	// (0x000563f2) wgtman_btn_pane_g1_ParamLimits

0x8f1b,	// (0x000563f2) wgtman_btn_pane_g1

0x8f47,	// (0x0005641e) wgtman_btn_pane_t1_ParamLimits

0x8f47,	// (0x0005641e) wgtman_btn_pane_t1

0xeec5,	// (0x0005c39c) wgtman_btn_pane_t2_ParamLimits

0xeec5,	// (0x0005c39c) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0005d3ab) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0005d3ab) wgtman_btn_pane_t

0x8f84,	// (0x0005645b) listrow_wgtman_pane_ParamLimits

0x8f84,	// (0x0005645b) listrow_wgtman_pane

0x8f97,	// (0x0005646e) listrow_wgtman_pane_g1

0x8fa4,	// (0x0005647b) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0005d3b0) listrow_wgtman_pane_g

0x0b2c,	// (0x0004e003) listrow_wgtman_pane_t1

0x0b44,	// (0x0004e01b) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0005d3b5) listrow_wgtman_pane_t

0x0b6a,	// (0x0004e041) wait_bar_pane_cp09

0xeedc,	// (0x0005c3b3) main_calllock_btn_pane

0xeee6,	// (0x0005c3bd) main_calllock_pane_g1

0x95ca,	// (0x00056aa1) bg_button_pane_cp17

0xeef1,	// (0x0005c3c8) main_calllock_btn_pane_g1

0xeefa,	// (0x0005c3d1) main_calllock_btn_pane_t1

0x95ca,	// (0x00056aa1) main_dialer3_pane

0x95ca,	// (0x00056aa1) main_fmrd2_pane

0xcbaf,	// (0x0005a086) main_fs_bigclock_unlock_btn_pane_g1

0xef11,	// (0x0005c3e8) main_fs_bigclock_unlock_btn_pane_t1

0x8fc2,	// (0x00056499) area_fmrd2_info_pane_ParamLimits

0x8fc2,	// (0x00056499) area_fmrd2_info_pane

0x8fd3,	// (0x000564aa) area_fmrd2_visual_pane_ParamLimits

0x8fd3,	// (0x000564aa) area_fmrd2_visual_pane

0x8fe1,	// (0x000564b8) fmrd2_indi_pane_ParamLimits

0x8fe1,	// (0x000564b8) fmrd2_indi_pane

0x8fee,	// (0x000564c5) area_fmrd2_visual_pane_g1

0x8ff6,	// (0x000564cd) area_fmrd2_visual_pane_t1

0x9006,	// (0x000564dd) area_fmrd2_visual_pane_t2

0x9016,	// (0x000564ed) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0005d3bf) area_fmrd2_visual_pane_t

0x9026,	// (0x000564fd) area_fmrd2_info_pane_g1

0x902e,	// (0x00056505) area_fmrd2_info_pane_t1

0x903e,	// (0x00056515) area_fmrd2_info_pane_t2

0x904e,	// (0x00056525) area_fmrd2_info_pane_t3

0x905e,	// (0x00056535) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0005d3c6) area_fmrd2_info_pane_t

0x906c,	// (0x00056543) fmrd2_indi_pane_t1

0x907c,	// (0x00056553) fmrd2_indi_pane_t2

0x908c,	// (0x00056563) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0005d3cf) fmrd2_indi_pane_t

0xe40b,	// (0x0005b8e2) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe40b,	// (0x0005b8e2) list_single_fs_bigclock_indicator_pane_g5

0xe4bb,	// (0x0005b992) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4bb,	// (0x0005b992) list_single_fs_bigclock_indicator_pane_t5

0x89a9,	// (0x00055e80) aid_cell_bcale_month_pane_ParamLimits

0x89a9,	// (0x00055e80) aid_cell_bcale_month_pane

0x89c7,	// (0x00055e9e) bcale_month_pane_ParamLimits

0x89c7,	// (0x00055e9e) bcale_month_pane

0x89eb,	// (0x00055ec2) bcale_preview_pane_ParamLimits

0x89eb,	// (0x00055ec2) bcale_preview_pane

0xecb3,	// (0x0005c18a) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd2,	// (0x0005c1a9) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd2,	// (0x0005c1a9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0005d351) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0005d351) list_single_fs_bigclock_pane_t

0xef09,	// (0x0005c3e0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0005d3ba) main_fs_bigclock_unlock_btn_pane_g

0x909c,	// (0x00056573) aid_dia3_key_size_ParamLimits

0x909c,	// (0x00056573) aid_dia3_key_size

0x90ab,	// (0x00056582) aid_dia3_listrow_size_ParamLimits

0x90ab,	// (0x00056582) aid_dia3_listrow_size

0x90c0,	// (0x00056597) dia3_keypad_fun_pane_ParamLimits

0x90c0,	// (0x00056597) dia3_keypad_fun_pane

0x90dc,	// (0x000565b3) dia3_keypad_num_pane_ParamLimits

0x90dc,	// (0x000565b3) dia3_keypad_num_pane

0x90f7,	// (0x000565ce) dia3_listscroll_pane_ParamLimits

0x90f7,	// (0x000565ce) dia3_listscroll_pane

0x910a,	// (0x000565e1) dia3_numentry_pane_ParamLimits

0x910a,	// (0x000565e1) dia3_numentry_pane

0xef1f,	// (0x0005c3f6) dia3_list_pane

0xef2a,	// (0x0005c401) scroll_pane_cp12

0x95ca,	// (0x00056aa1) bg_dia3_numentry_pane

0x911e,	// (0x000565f5) dia3_numentry_pane_t1

0x912d,	// (0x00056604) cell_dia3_key_num_pane

0x9135,	// (0x0005660c) cell_dia3_key0_fun_pane_ParamLimits

0x9135,	// (0x0005660c) cell_dia3_key0_fun_pane

0x9149,	// (0x00056620) cell_dia3_key1_fun_pane_ParamLimits

0x9149,	// (0x00056620) cell_dia3_key1_fun_pane

0x9161,	// (0x00056638) dia3_listrow_pane

0xe119,	// (0x0005b5f0) bg_dia3_numentry_pane_g1

0x95ca,	// (0x00056aa1) bg_button_pane_cp21

0xef35,	// (0x0005c40c) cell_dia3_key_num_pane_t1

0xef43,	// (0x0005c41a) cell_dia3_key_num_pane_t2

0xef52,	// (0x0005c429) cell_dia3_key_num_pane_t3

0xef61,	// (0x0005c438) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0005d3d6) cell_dia3_key_num_pane_t

0x95ca,	// (0x00056aa1) bg_button_pane_cp19

0x9173,	// (0x0005664a) cell_dia3_key0_fun_pane_g1

0x95ca,	// (0x00056aa1) bg_button_pane_cp20

0x917b,	// (0x00056652) cell_dia3_key1_fun_pane_g1

0x9183,	// (0x0005665a) area_left_week_number_pane

0x918f,	// (0x00056666) area_top_day_name_pane

0x91a2,	// (0x00056679) frame_month_view_pane

0xef70,	// (0x0005c447) grid_month_view_pane

0x91b5,	// (0x0005668c) cell_top_day_name_pane_ParamLimits

0x91b5,	// (0x0005668c) cell_top_day_name_pane

0x91e2,	// (0x000566b9) cell_area_left_week_number_pane_ParamLimits

0x91e2,	// (0x000566b9) cell_area_left_week_number_pane

0x91f6,	// (0x000566cd) cell_month_view_pane_ParamLimits

0x91f6,	// (0x000566cd) cell_month_view_pane

0xef7e,	// (0x0005c455) frm_month_g1

0x9223,	// (0x000566fa) frm_month_g2

0x9236,	// (0x0005670d) frm_month_g3

0x9249,	// (0x00056720) frm_month_g4

0x925c,	// (0x00056733) frm_month_g5

0x926f,	// (0x00056746) frm_month_g6

0x9282,	// (0x00056759) frm_month_g7

0xef8b,	// (0x0005c462) frm_month_g8

0x9295,	// (0x0005676c) frm_month_g9

0x92a5,	// (0x0005677c) frm_month_g10

0x92b5,	// (0x0005678c) frm_month_g11

0x92c5,	// (0x0005679c) frm_month_g12

0x92d7,	// (0x000567ae) frm_month_g13

0x92e9,	// (0x000567c0) frm_month_g14

0x92fd,	// (0x000567d4) frm_month_g15

0x9311,	// (0x000567e8) frm_month_g16

0x000f,

0xff08,	// (0x0005d3df) frm_month_g

0xef98,	// (0x0005c46f) cell_top_day_name_pane_t1

0x9325,	// (0x000567fc) cell_area_left_week_number_pane_g1

0x9331,	// (0x00056808) cell_area_left_week_number_pane_t1

0xce0f,	// (0x0005a2e6) cell_month_view_pane_g1

0x9344,	// (0x0005681b) cell_month_view_pane_t1

0x95ca,	// (0x00056aa1) main_fps_pane

0xe6c6,	// (0x0005bb9d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6c6,	// (0x0005bb9d) cmail_ddmenu_btn02_pane_cp1

0xe6e2,	// (0x0005bbb9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6e2,	// (0x0005bbb9) cmail_ddmenu_btn02_pane_cp2

0x8b3d,	// (0x00056014) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8b3d,	// (0x00056014) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0005d304) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0005d304) cmail_ddmenu_btn02_pane_g

0x8b5b,	// (0x00056032) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8b5b,	// (0x00056032) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0005d309) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0005d309) cmail_ddmenu_btn02_pane_t

0x9357,	// (0x0005682e) fps_text_pane_ParamLimits

0x9357,	// (0x0005682e) fps_text_pane

0x936e,	// (0x00056845) main_fps_pane_g1_ParamLimits

0x936e,	// (0x00056845) main_fps_pane_g1

0x9388,	// (0x0005685f) wait_bar_pane_cp010_ParamLimits

0x9388,	// (0x0005685f) wait_bar_pane_cp010

0x9399,	// (0x00056870) fps_text_pane_t1_ParamLimits

0x9399,	// (0x00056870) fps_text_pane_t1

0xde48,	// (0x0005b31f) cam4_image_uncrop_pane_g1

0xde51,	// (0x0005b328) cam4_image_uncrop_pane_g2

0x64e7,	// (0x000539be) cam4_image_uncrop_pane_g3

0x64f0,	// (0x000539c7) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0005cdc5) cam4_image_uncrop_pane_g

0x9161,	// (0x00056638) dia3_listrow_pane_ParamLimits

0x95ca,	// (0x00056aa1) main_phob2_pane

0x87f5,	// (0x00055ccc) cell_tport_appsw_pane_cp02_ParamLimits

0x87f5,	// (0x00055ccc) cell_tport_appsw_pane_cp02

0x8809,	// (0x00055ce0) cell_tport_appsw_pane_cp03_ParamLimits

0x8809,	// (0x00055ce0) cell_tport_appsw_pane_cp03

0x95ca,	// (0x00056aa1) phob2_contact_card_pane

0x95ca,	// (0x00056aa1) phob2_listscroll_pane

0xefab,	// (0x0005c482) phob2_list_pane

0xefb3,	// (0x0005c48a) scroll_pane_cp034

0x93b1,	// (0x00056888) phob2_cc_data_pane_ParamLimits

0x93b1,	// (0x00056888) phob2_cc_data_pane

0x93d0,	// (0x000568a7) phob2_cc_listscroll_pane_ParamLimits

0x93d0,	// (0x000568a7) phob2_cc_listscroll_pane

0x93ee,	// (0x000568c5) list_double_large_graphic_phob2_pane_ParamLimits

0x93ee,	// (0x000568c5) list_double_large_graphic_phob2_pane

0x9401,	// (0x000568d8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9401,	// (0x000568d8) list_double_large_graphic_phob2_pane_g1

0x0b7c,	// (0x0004e053) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0b7c,	// (0x0004e053) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0005d400) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0005d400) list_double_large_graphic_phob2_pane_g

0x0b88,	// (0x0004e05f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0b88,	// (0x0004e05f) list_double_large_graphic_phob2_pane_t1

0x0b9e,	// (0x0004e075) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0b9e,	// (0x0004e075) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0005d405) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0005d405) list_double_large_graphic_phob2_pane_t

0x95ca,	// (0x00056aa1) list_highlight_pane_cp024

0x9417,	// (0x000568ee) phob2_cc_button_pane

0x941f,	// (0x000568f6) phob2_cc_data_pane_g1_ParamLimits

0x941f,	// (0x000568f6) phob2_cc_data_pane_g1

0x9434,	// (0x0005690b) phob2_cc_data_pane_g2_ParamLimits

0x9434,	// (0x0005690b) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0005d40a) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0005d40a) phob2_cc_data_pane_g

0x9444,	// (0x0005691b) phob2_cc_data_pane_t1_ParamLimits

0x9444,	// (0x0005691b) phob2_cc_data_pane_t1

0x945c,	// (0x00056933) phob2_cc_data_pane_t2_ParamLimits

0x945c,	// (0x00056933) phob2_cc_data_pane_t2

0x9474,	// (0x0005694b) phob2_cc_data_pane_t3_ParamLimits

0x9474,	// (0x0005694b) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0005d40f) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0005d40f) phob2_cc_data_pane_t

0xefbb,	// (0x0005c492) phob2_cc_list_pane_ParamLimits

0xefbb,	// (0x0005c492) phob2_cc_list_pane

0xd90e,	// (0x0005ade5) scroll_pane_cp035_ParamLimits

0xd90e,	// (0x0005ade5) scroll_pane_cp035

0xa46a,	// (0x00057941) bg_button_pane_cp033

0xefc7,	// (0x0005c49e) phob2_cc_button_pane_g1

0xefd3,	// (0x0005c4aa) phob2_cc_button_pane_t1

0xefe8,	// (0x0005c4bf) phob2_cc_button_pane_t2

0x0001,

0x000f,	// (0x0004d4e6) phob2_cc_button_pane_t

0x948c,	// (0x00056963) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x948c,	// (0x00056963) list_double_large_graphic_phob2_cc_pane

0x949f,	// (0x00056976) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x949f,	// (0x00056976) list_double_large_graphic_phob2_cc_pane_g1

0x0bb3,	// (0x0004e08a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0bb3,	// (0x0004e08a) list_double_large_graphic_phob2_cc_pane_g2

0x0bbf,	// (0x0004e096) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0bbf,	// (0x0004e096) list_double_large_graphic_phob2_cc_pane_g3

0x0bcb,	// (0x0004e0a2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0bcb,	// (0x0004e0a2) list_double_large_graphic_phob2_cc_pane_g4

0x0bd7,	// (0x0004e0ae) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0bd7,	// (0x0004e0ae) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0005d416) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0005d416) list_double_large_graphic_phob2_cc_pane_g

0x0be3,	// (0x0004e0ba) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0be3,	// (0x0004e0ba) list_double_large_graphic_phob2_cc_pane_t1

0x0c0c,	// (0x0004e0e3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0c0c,	// (0x0004e0e3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0005d421) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0005d421) list_double_large_graphic_phob2_cc_pane_t

0xeffa,	// (0x0005c4d1) list_highlight_pane_cp025_ParamLimits

0xeffa,	// (0x0005c4d1) list_highlight_pane_cp025

0xa46a,	// (0x00057941) bg_button_pane_cp033_ParamLimits

0xefc7,	// (0x0005c49e) phob2_cc_button_pane_g1_ParamLimits

0xefd3,	// (0x0005c4aa) phob2_cc_button_pane_t1_ParamLimits

0xefe8,	// (0x0005c4bf) phob2_cc_button_pane_t2_ParamLimits

0x000f,	// (0x0004d4e6) phob2_cc_button_pane_t_ParamLimits

0x0e7e,	// (0x0004e355) popup_wgtman_window

0xd738,	// (0x0005ac0f) scroll_pane_cp038

0x8efd,	// (0x000563d4) wgtman_btn_pane_cp_01_ParamLimits

0x8efd,	// (0x000563d4) wgtman_btn_pane_cp_01

0xf008,	// (0x0005c4df) wgtman_content_pane

0xf011,	// (0x0005c4e8) wgtman_heading_pane

0x95ca,	// (0x00056aa1) bg_heading_pane_cp02

0xf01a,	// (0x0005c4f1) wgtman_heading_pane_g1

0xf022,	// (0x0005c4f9) wgtman_heading_pane_t1

0xf030,	// (0x0005c507) scroll_pane_cp036

0xf038,	// (0x0005c50f) wgtman_list_pane

0xe5a6,	// (0x0005ba7d) wgtman_list_pane_t1_ParamLimits

0xe5a6,	// (0x0005ba7d) wgtman_list_pane_t1

0xa00a,	// (0x000574e1) cam4_grid_pane

0x02cf,	// (0x0004d7a6) bg_button_pane_cp015_ParamLimits

0x7177,	// (0x0005464e) bg_button_pane_cp016_ParamLimits

0x718a,	// (0x00054661) bg_button_pane_cp017_ParamLimits

0x0317,	// (0x0004d7ee) popup_vitu2_query_window_g3_ParamLimits

0x0317,	// (0x0004d7ee) popup_vitu2_query_window_g3

0x0392,	// (0x0004d869) popup_vitu2_query_window_t6_ParamLimits

0x0392,	// (0x0004d869) popup_vitu2_query_window_t6

0x03bd,	// (0x0004d894) popup_vitu2_query_window_t7_ParamLimits

0x03bd,	// (0x0004d894) popup_vitu2_query_window_t7

0xde48,	// (0x0005b31f) cam4_grid_pane_g1

0xde51,	// (0x0005b328) cam4_grid_pane_g2

0xf040,	// (0x0005c517) cam4_grid_pane_g3

0xf049,	// (0x0005c520) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0005d426) cam4_grid_pane_g

0x1e4a,	// (0x0004f321) aid_placing_vt_slider_lsc_ParamLimits

0x2147,	// (0x0004f61e) vidtel_button_pane_ParamLimits

0x2147,	// (0x0004f61e) vidtel_button_pane

0xf054,	// (0x0005c52b) bg_button_pane_cp034

0x94ab,	// (0x00056982) vidtel_button_pane_g1

0xf05e,	// (0x0005c535) vidtel_button_pane_t1

0xd855,	// (0x0005ad2c) aid_size_vtel_slider_touch

0xd90e,	// (0x0005ade5) scroll_pane_cp039

0xe157,	// (0x0005b62e) ncim_query_button_pane_cp01_ParamLimits

0xe176,	// (0x0005b64d) ncimui_query_pane_g1_ParamLimits

0xa46a,	// (0x00057941) input_focus_pane_cp012_ParamLimits

0xe19b,	// (0x0005b672) ncim_query_entry_pane_t1_ParamLimits

0xd90e,	// (0x0005ade5) scroll_pane_cp039_ParamLimits

0xb208,	// (0x000586df) navi_pane_bcale_mc_g1

0xb210,	// (0x000586e7) navi_pane_bcale_mc_t1

0xe72b,	// (0x0005bc02) main_sp_fs_email_pane_g1

0xe737,	// (0x0005bc0e) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0005d1bc) main_sp_fs_email_pane_g

0xe988,	// (0x0005be5f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe988,	// (0x0005be5f) list_single_cale_mrui_row_pane_g3

0x0acc,	// (0x0004dfa3) list_single_recal_day_pane_g5_event_pane

0xa427,	// (0x000578fe) list_single_recal_day_pane_g7

0xf06c,	// (0x0005c543) list_recal_day_event_pane_cp01

0xf075,	// (0x0005c54c) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0005c554) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0005c55c) list_recal_vselct_pane_cp01

0xd865,	// (0x0005ad3c) list_recal_day_event_pane_cp01_g1

0xa45c,	// (0x00057933) list_recal_day_event_pane_cp01_t1

0xa42f,	// (0x00057906) list_single_recal_day_pane_t1_ParamLimits

0xa441,	// (0x00057918) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0005d319) list_single_recal_day_pane_t_ParamLimits

0xa643,	// (0x00057b1a) bg_notes_pane_ParamLimits

0xa705,	// (0x00057bdc) list_notes_pane_ParamLimits

0x11b2,	// (0x0004e689) scroll_pane_cp06_ParamLimits

0xa727,	// (0x00057bfe) main_notes_pane_ParamLimits

0x95ca,	// (0x00056aa1) main_welc_pane

0x94b3,	// (0x0005698a) main_welc_body_pane_ParamLimits

0x94b3,	// (0x0005698a) main_welc_body_pane

0x94d0,	// (0x000569a7) main_welc_opti_pane_ParamLimits

0x94d0,	// (0x000569a7) main_welc_opti_pane

0x9519,	// (0x000569f0) main_welc_pane_t1_ParamLimits

0x9519,	// (0x000569f0) main_welc_pane_t1

0x953b,	// (0x00056a12) main_welc_body_row_pane_ParamLimits

0x953b,	// (0x00056a12) main_welc_body_row_pane

0xde3a,	// (0x0005b311) main_welc_opti_row_pane_ParamLimits

0xde3a,	// (0x0005b311) main_welc_opti_row_pane

0xf08f,	// (0x0005c566) main_welc_opti_row_pane_g1

0x9551,	// (0x00056a28) main_welc_opti_row_pane_t1

0xf097,	// (0x0005c56e) main_welc_body_row_pane_t1

0xed89,	// (0x0005c260) popup_notif_wgt_heading_pane

0xeda3,	// (0x0005c27a) aid_size_list_notif_wgt_del_ParamLimits

0xedb0,	// (0x0005c287) list_notif_wgt_row_pane_g1_ParamLimits

0xedbc,	// (0x0005c293) list_notif_wgt_row_pane_g2_ParamLimits

0xedd0,	// (0x0005c2a7) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0005d380) list_notif_wgt_row_pane_g_ParamLimits

0xeddd,	// (0x0005c2b4) list_notif_wgt_row_pane_t1_ParamLimits

0xedf3,	// (0x0005c2ca) list_notif_wgt_row_pane_t2_ParamLimits

0xee05,	// (0x0005c2dc) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0005d387) list_notif_wgt_row_pane_t_ParamLimits

0x8f97,	// (0x0005646e) listrow_wgtman_pane_g1_ParamLimits

0x8fa4,	// (0x0005647b) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0005d3b0) listrow_wgtman_pane_g_ParamLimits

0x0b2c,	// (0x0004e003) listrow_wgtman_pane_t1_ParamLimits

0x0b44,	// (0x0004e01b) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0005d3b5) listrow_wgtman_pane_t_ParamLimits

0x0b6a,	// (0x0004e041) wait_bar_pane_cp09_ParamLimits

0x95ca,	// (0x00056aa1) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0005c57d) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0005c585) popup_notif_wgt_heading_pane_t1

0x95ca,	// (0x00056aa1) main_vids_pane

0x95ca,	// (0x00056aa1) vids_listscroll_pane

0x9560,	// (0x00056a37) scroll_pane_cp040

0x95ca,	// (0x00056aa1) vids_list_pane

0x956b,	// (0x00056a42) vids_list_double_pane_ParamLimits

0x956b,	// (0x00056a42) vids_list_double_pane

0x957c,	// (0x00056a53) vids_list_double_pane_g1

0x9585,	// (0x00056a5c) vids_list_double_pane_t1

0x9594,	// (0x00056a6b) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0005d434) vids_list_double_pane_t

0xa46a,	// (0x00057941) main_ncimui_pane_ParamLimits

0x7d93,	// (0x0005526a) main_ncimui_pane_g1_ParamLimits

0x7d9f,	// (0x00055276) main_ncimui_pane_g2_ParamLimits

0x7d9f,	// (0x00055276) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0005d0c1) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0005d0c1) main_ncimui_pane_g

0x94ef,	// (0x000569c6) main_welc_pane_g1_ParamLimits

0x94ef,	// (0x000569c6) main_welc_pane_g1

0x9504,	// (0x000569db) main_welc_pane_g2_ParamLimits

0x9504,	// (0x000569db) main_welc_pane_g2

0x0001,

0xff58,	// (0x0005d42f) main_welc_pane_g_ParamLimits

0xff58,	// (0x0005d42f) main_welc_pane_g

0xa643,	// (0x00057b1a) listscroll_mce_pane_ParamLimits

0xb39a,	// (0x00058871) wait_bar_pane_cp10

0xc799,	// (0x00059c70) main_cale_day_pane_ParamLimits

0xc799,	// (0x00059c70) main_cale_week_pane_ParamLimits

0xa643,	// (0x00057b1a) main_messa_pane_ParamLimits

0x57f4,	// (0x00052ccb) main_clock2_btn_pane_ParamLimits

0x57f4,	// (0x00052ccb) main_clock2_btn_pane

0xcf97,	// (0x0005a46e) main_clock2_btn_pane_cp01_ParamLimits

0xcf97,	// (0x0005a46e) main_clock2_btn_pane_cp01

0xe959,	// (0x0005be30) list_cale_mrui_pane_ParamLimits

0xee49,	// (0x0005c320) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0005d38e) main_cf0_pane_g

0x9183,	// (0x0005665a) area_left_week_number_pane_ParamLimits

0x918f,	// (0x00056666) area_top_day_name_pane_ParamLimits

0x91a2,	// (0x00056679) frame_month_view_pane_ParamLimits

0xef70,	// (0x0005c447) grid_month_view_pane_ParamLimits

0xef7e,	// (0x0005c455) frm_month_g1_ParamLimits

0x9223,	// (0x000566fa) frm_month_g2_ParamLimits

0x9236,	// (0x0005670d) frm_month_g3_ParamLimits

0x9249,	// (0x00056720) frm_month_g4_ParamLimits

0x925c,	// (0x00056733) frm_month_g5_ParamLimits

0x926f,	// (0x00056746) frm_month_g6_ParamLimits

0x9282,	// (0x00056759) frm_month_g7_ParamLimits

0xef8b,	// (0x0005c462) frm_month_g8_ParamLimits

0x9295,	// (0x0005676c) frm_month_g9_ParamLimits

0x92a5,	// (0x0005677c) frm_month_g10_ParamLimits

0x92b5,	// (0x0005678c) frm_month_g11_ParamLimits

0x92c5,	// (0x0005679c) frm_month_g12_ParamLimits

0x92d7,	// (0x000567ae) frm_month_g13_ParamLimits

0x92e9,	// (0x000567c0) frm_month_g14_ParamLimits

0x92fd,	// (0x000567d4) frm_month_g15_ParamLimits

0x9311,	// (0x000567e8) frm_month_g16_ParamLimits

0xff08,	// (0x0005d3df) frm_month_g_ParamLimits

0xef98,	// (0x0005c46f) cell_top_day_name_pane_t1_ParamLimits

0x9325,	// (0x000567fc) cell_area_left_week_number_pane_g1_ParamLimits

0x9331,	// (0x00056808) cell_area_left_week_number_pane_t1_ParamLimits

0xce0f,	// (0x0005a2e6) cell_month_view_pane_g1_ParamLimits

0x9344,	// (0x0005681b) cell_month_view_pane_t1_ParamLimits

0xa63b,	// (0x00057b12) main_clock2_btn_pane_g1

0xf0bc,	// (0x0005c593) main_clock2_btn_pane_t1

0xa46a,	// (0x00057941) listscroll_cmail_pane_ParamLimits

0xe72b,	// (0x0005bc02) main_sp_fs_email_pane_g1_ParamLimits

0xe737,	// (0x0005bc0e) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0005d1bc) main_sp_fs_email_pane_g_ParamLimits

0xeaf7,	// (0x0005bfce) list_recal_day_pane_ParamLimits

0xeb08,	// (0x0005bfdf) mian_recal_day_pane_t1

0x0752,	// (0x0004dc29) list_single_dyc_row_text_pane_t4_ParamLimits

0x0752,	// (0x0004dc29) list_single_dyc_row_text_pane_t4

0x079b,	// (0x0004dc72) list_single_dyc_row_text_pane_t5_ParamLimits

0x079b,	// (0x0004dc72) list_single_dyc_row_text_pane_t5

0x86a8,	// (0x00055b7f) list_single_dyc_row_text_pane_t6_ParamLimits

0x86a8,	// (0x00055b7f) list_single_dyc_row_text_pane_t6

0xacf8,	// (0x000581cf) aid_mgn_list_cale_time_pane

0xa46a,	// (0x00057941) main_gallery2_pane_ParamLimits

0xcfad,	// (0x0005a484) main_clock2_pane_cp01_t1

0xcfbb,	// (0x0005a492) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0005cc9b) main_clock2_pane_cp01_t

0x156b,	// (0x0004ea42) cale_week_scroll_pane_g16_ParamLimits

0x156b,	// (0x0004ea42) cale_week_scroll_pane_g16

0xa8f5,	// (0x00057dcc) vorec_slider_pane
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small

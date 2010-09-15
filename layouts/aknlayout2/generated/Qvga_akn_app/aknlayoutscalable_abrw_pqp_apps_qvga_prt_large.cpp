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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00077a79 };

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
0x5680,	// (0x0007d0f9) Screen

0x568a,	// (0x0007d103) application_window

0x56dc,	// (0x0007d155) area_bottom_pane_ParamLimits

0x56dc,	// (0x0007d155) area_bottom_pane

0x5718,	// (0x0007d191) area_top_pane_ParamLimits

0x5718,	// (0x0007d191) area_top_pane

0x5774,	// (0x0007d1ed) call_video_uplink_pane_ParamLimits

0x5774,	// (0x0007d1ed) call_video_uplink_pane

0x57af,	// (0x0007d228) main_pane_ParamLimits

0x57af,	// (0x0007d228) main_pane

0x8919,	// (0x00080392) context_pane

0x892c,	// (0x000803a5) navi_pane

0x8946,	// (0x000803bf) popup_cale_events_window_ParamLimits

0x8946,	// (0x000803bf) popup_cale_events_window

0x895d,	// (0x000803d6) popup_mup_playback_window

0x8965,	// (0x000803de) signal_pane

0xe5c9,	// (0x00086042) main_browser_pane

0x0931,	// (0x000783aa) main_burst_pane

0x5872,	// (0x0007d2eb) main_calc_pane

0x87b6,	// (0x0008022f) main_cale_day_pane

0x5cc4,	// (0x0007d73d) main_cale_month_pane

0x87b6,	// (0x0008022f) main_cale_week_pane

0x0931,	// (0x000783aa) main_call_pane

0xe270,	// (0x00085ce9) main_call_poc_pane

0x0931,	// (0x000783aa) main_camera_pane

0x0931,	// (0x000783aa) main_chi_dic_pane

0x11f7,	// (0x00078c70) main_clock_pane

0xe270,	// (0x00085ce9) main_fmradio_pane

0x0931,	// (0x000783aa) main_graph_messa_pane

0xe270,	// (0x00085ce9) main_help_pane

0xe5c9,	// (0x00086042) main_im_pane

0xe4cb,	// (0x00085f44) main_image_pane_ParamLimits

0xe4cb,	// (0x00085f44) main_image_pane

0xe270,	// (0x00085ce9) main_location2_pane

0x0931,	// (0x000783aa) main_location_pane

0xe4cb,	// (0x00085f44) main_messa_pane

0xe270,	// (0x00085ce9) main_mp2_pane

0x0931,	// (0x000783aa) main_mp_pane

0xe270,	// (0x00085ce9) main_msg_pane

0xe270,	// (0x00085ce9) main_mup_eq_pane

0xe270,	// (0x00085ce9) main_mup_pane

0xe5c9,	// (0x00086042) main_notes_pane

0xe270,	// (0x00085ce9) main_pec_pane

0xe270,	// (0x00085ce9) main_phob_pane

0xe270,	// (0x00085ce9) main_pinb_pane

0xe270,	// (0x00085ce9) main_postcard_pane

0xe270,	// (0x00085ce9) main_qdial_pane

0x0931,	// (0x000783aa) main_skin_pane

0xe270,	// (0x00085ce9) main_smil2_pane

0x0931,	// (0x000783aa) main_smil_pane

0x0931,	// (0x000783aa) main_video_pane

0x0931,	// (0x000783aa) main_video_tele_pane

0xe4cb,	// (0x00085f44) main_viewer_pane_ParamLimits

0xe4cb,	// (0x00085f44) main_viewer_pane

0x0931,	// (0x000783aa) main_vorec_pane

0x8817,	// (0x00080290) popup_blid_sat_info_window_ParamLimits

0x8817,	// (0x00080290) popup_blid_sat_info_window

0x8833,	// (0x000802ac) popup_dyc_status_message_window_ParamLimits

0x8833,	// (0x000802ac) popup_dyc_status_message_window

0x883f,	// (0x000802b8) popup_grid_large_graphic_window_ParamLimits

0x883f,	// (0x000802b8) popup_grid_large_graphic_window

0x88b0,	// (0x00080329) popup_loc_request_window_ParamLimits

0x88b0,	// (0x00080329) popup_loc_request_window

0x88f3,	// (0x0008036c) popup_wml_address_window_ParamLimits

0x88f3,	// (0x0008036c) popup_wml_address_window

0x8689,	// (0x00080102) call_muted_g1

0x7ccb,	// (0x0007f744) popup_call_audio_conf_window_ParamLimits

0x7ccb,	// (0x0007f744) popup_call_audio_conf_window

0x8699,	// (0x00080112) popup_call_audio_first_window_ParamLimits

0x8699,	// (0x00080112) popup_call_audio_first_window

0x86cd,	// (0x00080146) popup_call_audio_in_window_ParamLimits

0x86cd,	// (0x00080146) popup_call_audio_in_window

0x86e9,	// (0x00080162) popup_call_audio_out_window_ParamLimits

0x86e9,	// (0x00080162) popup_call_audio_out_window

0x8705,	// (0x0008017e) popup_call_audio_second_window_ParamLimits

0x8705,	// (0x0008017e) popup_call_audio_second_window

0x872d,	// (0x000801a6) popup_call_audio_wait_window_ParamLimits

0x872d,	// (0x000801a6) popup_call_audio_wait_window

0x874c,	// (0x000801c5) popup_number_entry_window_ParamLimits

0x874c,	// (0x000801c5) popup_number_entry_window

0xde5f,	// (0x000858d8) bg_popup_call_pane_cp05_ParamLimits

0xde5f,	// (0x000858d8) bg_popup_call_pane_cp05

0xde7f,	// (0x000858f8) popup_number_entry_window_t1

0xde92,	// (0x0008590b) popup_number_entry_window_t2

0xdea4,	// (0x0008591d) popup_number_entry_window_t3

0x0003,

0xf05f,	// (0x00086ad8) popup_number_entry_window_t

0xdeb6,	// (0x0008592f) text_title_cp2

0xdec9,	// (0x00085942) bg_popup_call_pane_cp_ParamLimits

0xdec9,	// (0x00085942) bg_popup_call_pane_cp

0xded7,	// (0x00085950) call_thumbnail_pane

0xdedf,	// (0x00085958) popup_call_audio_in_window_g1_ParamLimits

0xdedf,	// (0x00085958) popup_call_audio_in_window_g1

0xdeeb,	// (0x00085964) popup_call_audio_in_window_g2_ParamLimits

0xdeeb,	// (0x00085964) popup_call_audio_in_window_g2

0xdef7,	// (0x00085970) popup_call_audio_in_window_g3_ParamLimits

0xdef7,	// (0x00085970) popup_call_audio_in_window_g3

0x0002,

0xf068,	// (0x00086ae1) popup_call_audio_in_window_g_ParamLimits

0xf068,	// (0x00086ae1) popup_call_audio_in_window_g

0xdf03,	// (0x0008597c) popup_call_audio_in_window_t1_ParamLimits

0xdf03,	// (0x0008597c) popup_call_audio_in_window_t1

0xdf1e,	// (0x00085997) popup_call_audio_in_window_t2_ParamLimits

0xdf1e,	// (0x00085997) popup_call_audio_in_window_t2

0xdf39,	// (0x000859b2) popup_call_audio_in_window_t3_ParamLimits

0xdf39,	// (0x000859b2) popup_call_audio_in_window_t3

0x0002,

0xf06f,	// (0x00086ae8) popup_call_audio_in_window_t_ParamLimits

0xf06f,	// (0x00086ae8) popup_call_audio_in_window_t

0xdec9,	// (0x00085942) bg_popup_call_pane_cp01_ParamLimits

0xdec9,	// (0x00085942) bg_popup_call_pane_cp01

0xded7,	// (0x00085950) call_thumbnail_pane_cp02

0xdf4c,	// (0x000859c5) call_type_pane_cp022

0xdf54,	// (0x000859cd) popup_call_audio_out_window_g1_ParamLimits

0xdf54,	// (0x000859cd) popup_call_audio_out_window_g1

0xdf66,	// (0x000859df) popup_call_audio_out_window_g2_ParamLimits

0xdf66,	// (0x000859df) popup_call_audio_out_window_g2

0xdf72,	// (0x000859eb) popup_call_audio_out_window_g3_ParamLimits

0xdf72,	// (0x000859eb) popup_call_audio_out_window_g3

0x0002,

0xf076,	// (0x00086aef) popup_call_audio_out_window_g_ParamLimits

0xf076,	// (0x00086aef) popup_call_audio_out_window_g

0xdf84,	// (0x000859fd) popup_call_audio_out_window_t1_ParamLimits

0xdf84,	// (0x000859fd) popup_call_audio_out_window_t1

0xdf9c,	// (0x00085a15) popup_call_audio_out_window_t2_ParamLimits

0xdf9c,	// (0x00085a15) popup_call_audio_out_window_t2

0x0001,

0xf07d,	// (0x00086af6) popup_call_audio_out_window_t_ParamLimits

0xf07d,	// (0x00086af6) popup_call_audio_out_window_t

0xdfb1,	// (0x00085a2a) bg_popup_call_pane_ParamLimits

0xdfb1,	// (0x00085a2a) bg_popup_call_pane

0x5914,	// (0x0007d38d) call_thumbnail_pane_cp_ParamLimits

0x5914,	// (0x0007d38d) call_thumbnail_pane_cp

0xe035,	// (0x00085aae) call_type_pane_cp01_ParamLimits

0xe035,	// (0x00085aae) call_type_pane_cp01

0xe079,	// (0x00085af2) popup_call_audio_first_window_g1_ParamLimits

0xe079,	// (0x00085af2) popup_call_audio_first_window_g1

0xe0c5,	// (0x00085b3e) popup_call_audio_first_window_g2_ParamLimits

0xe0c5,	// (0x00085b3e) popup_call_audio_first_window_g2

0x0001,

0xf082,	// (0x00086afb) popup_call_audio_first_window_g_ParamLimits

0xf082,	// (0x00086afb) popup_call_audio_first_window_g

0xe109,	// (0x00085b82) popup_call_audio_first_window_t1_ParamLimits

0xe109,	// (0x00085b82) popup_call_audio_first_window_t1

0xe1b5,	// (0x00085c2e) popup_call_audio_first_window_t4_ParamLimits

0xe1b5,	// (0x00085c2e) popup_call_audio_first_window_t4

0xe241,	// (0x00085cba) popup_call_audio_first_window_t5_ParamLimits

0xe241,	// (0x00085cba) popup_call_audio_first_window_t5

0x0002,

0xf087,	// (0x00086b00) popup_call_audio_first_window_t_ParamLimits

0xf087,	// (0x00086b00) popup_call_audio_first_window_t

0xe270,	// (0x00085ce9) bg_popup_call_pane_cp02

0xe27a,	// (0x00085cf3) call_type_pane_cp023

0xe282,	// (0x00085cfb) popup_call_audio_wait_window_g1

0xe28a,	// (0x00085d03) popup_call_audio_wait_window_g2

0x0001,

0xf08e,	// (0x00086b07) popup_call_audio_wait_window_g

0xe292,	// (0x00085d0b) popup_call_audio_wait_window_t3

0xe2a0,	// (0x00085d19) bg_popup_call_pane_cp03_ParamLimits

0xe2a0,	// (0x00085d19) bg_popup_call_pane_cp03

0xe300,	// (0x00085d79) call_thumbnail_pane_cp011_ParamLimits

0xe300,	// (0x00085d79) call_thumbnail_pane_cp011

0xe30c,	// (0x00085d85) call_type_pane_cp034_ParamLimits

0xe30c,	// (0x00085d85) call_type_pane_cp034

0xe348,	// (0x00085dc1) popup_call_audio_second_window_g1_ParamLimits

0xe348,	// (0x00085dc1) popup_call_audio_second_window_g1

0xe384,	// (0x00085dfd) popup_call_audio_second_window_g2_ParamLimits

0xe384,	// (0x00085dfd) popup_call_audio_second_window_g2

0x0001,

0xf093,	// (0x00086b0c) popup_call_audio_second_window_g_ParamLimits

0xf093,	// (0x00086b0c) popup_call_audio_second_window_g

0xe3c0,	// (0x00085e39) popup_call_audio_second_window_t1_ParamLimits

0xe3c0,	// (0x00085e39) popup_call_audio_second_window_t1

0xe441,	// (0x00085eba) popup_call_audio_second_window_t2_ParamLimits

0xe441,	// (0x00085eba) popup_call_audio_second_window_t2

0xe477,	// (0x00085ef0) popup_call_audio_second_window_t3_ParamLimits

0xe477,	// (0x00085ef0) popup_call_audio_second_window_t3

0x0002,

0xf098,	// (0x00086b11) popup_call_audio_second_window_t_ParamLimits

0xf098,	// (0x00086b11) popup_call_audio_second_window_t

0xe270,	// (0x00085ce9) bg_popup_call_pane_cp04

0xe4ad,	// (0x00085f26) list_conf_pane

0xe4b5,	// (0x00085f2e) popup_call_audio_conf_window_t1

0xe4c3,	// (0x00085f3c) call_thumbnail_pane_g1

0xe4cb,	// (0x00085f44) bg_pinb_pane_ParamLimits

0xe4cb,	// (0x00085f44) bg_pinb_pane

0xe4d9,	// (0x00085f52) find_pinb_pane

0xe4cb,	// (0x00085f44) listscroll_pinb_pane_ParamLimits

0xe4cb,	// (0x00085f44) listscroll_pinb_pane

0xe4e3,	// (0x00085f5c) pinb_bg_pane_g1

0xe4e3,	// (0x00085f5c) pinb_bg_pane_g2

0xe4e3,	// (0x00085f5c) pinb_bg_pane_g3

0xe4e3,	// (0x00085f5c) pinb_bg_pane_g4

0xe4e3,	// (0x00085f5c) pinb_bg_pane_g5

0xe4e3,	// (0x00085f5c) pinb_bg_pane_g6

0xe4e3,	// (0x00085f5c) pinb_bg_pane_g7

0xe4e3,	// (0x00085f5c) pinb_bg_pane_g8

0xe4e3,	// (0x00085f5c) pinb_bg_pane_g9

0xe4e3,	// (0x00085f5c) pinb_bg_pane_g10

0x0009,

0xf09f,	// (0x00086b18) pinb_bg_pane_g

0x5943,	// (0x0007d3bc) grid_pinb_pane

0xde55,	// (0x000858ce) list_pinb_pane

0xe4ed,	// (0x00085f66) scroll_pane_cp01_ParamLimits

0xe4ed,	// (0x00085f66) scroll_pane_cp01

0xe4fa,	// (0x00085f73) find_pinb_pane_g1_ParamLimits

0xe4fa,	// (0x00085f73) find_pinb_pane_g1

0xe512,	// (0x00085f8b) find_pinb_pane_t1

0xe524,	// (0x00085f9d) find_pinb_pane_t2

0x0001,

0xf0b9,	// (0x00086b32) find_pinb_pane_t

0xe539,	// (0x00085fb2) input_focus_pane_cp01_ParamLimits

0xe539,	// (0x00085fb2) input_focus_pane_cp01

0x594d,	// (0x0007d3c6) cell_pinb_pane_ParamLimits

0x594d,	// (0x0007d3c6) cell_pinb_pane

0xe545,	// (0x00085fbe) cell_pinb_pane_g1_ParamLimits

0xe545,	// (0x00085fbe) cell_pinb_pane_g1

0xe553,	// (0x00085fcc) cell_pinb_pane_g2_ParamLimits

0xe553,	// (0x00085fcc) cell_pinb_pane_g2

0xe553,	// (0x00085fcc) cell_pinb_pane_g3_ParamLimits

0xe553,	// (0x00085fcc) cell_pinb_pane_g3

0x0002,

0xf0be,	// (0x00086b37) cell_pinb_pane_g_ParamLimits

0xf0be,	// (0x00086b37) cell_pinb_pane_g

0xe270,	// (0x00085ce9) grid_highlight_pane_cp01

0xe561,	// (0x00085fda) list_pinb_item_pane_ParamLimits

0xe561,	// (0x00085fda) list_pinb_item_pane

0xde55,	// (0x000858ce) list_highlight_pane_cp02

0xe56f,	// (0x00085fe8) list_pinb_item_pane_g1_ParamLimits

0xe56f,	// (0x00085fe8) list_pinb_item_pane_g1

0xe553,	// (0x00085fcc) list_pinb_item_pane_g2_ParamLimits

0xe553,	// (0x00085fcc) list_pinb_item_pane_g2

0xe545,	// (0x00085fbe) list_pinb_item_pane_g3_ParamLimits

0xe545,	// (0x00085fbe) list_pinb_item_pane_g3

0xe553,	// (0x00085fcc) list_pinb_item_pane_g4_ParamLimits

0xe553,	// (0x00085fcc) list_pinb_item_pane_g4

0x0003,

0xf0c5,	// (0x00086b3e) list_pinb_item_pane_g_ParamLimits

0xf0c5,	// (0x00086b3e) list_pinb_item_pane_g

0xe57d,	// (0x00085ff6) list_pinb_item_pane_t1_ParamLimits

0xe57d,	// (0x00085ff6) list_pinb_item_pane_t1

0x597b,	// (0x0007d3f4) calc_display_pane

0x5993,	// (0x0007d40c) calc_paper_pane

0x59af,	// (0x0007d428) grid_calc_pane

0xe270,	// (0x00085ce9) bg_list_pane_cp01

0x59cf,	// (0x0007d448) clock_g1

0x59d7,	// (0x0007d450) clock_g2

0x0001,

0xf0ce,	// (0x00086b47) clock_g

0x59df,	// (0x0007d458) clock_t1_ParamLimits

0x59df,	// (0x0007d458) clock_t1

0x59f4,	// (0x0007d46d) clock_t2_ParamLimits

0x59f4,	// (0x0007d46d) clock_t2

0x5a06,	// (0x0007d47f) clock_t3_ParamLimits

0x5a06,	// (0x0007d47f) clock_t3

0x5a18,	// (0x0007d491) clock_t4_ParamLimits

0x5a18,	// (0x0007d491) clock_t4

0x5a2a,	// (0x0007d4a3) clock_t5_ParamLimits

0x5a2a,	// (0x0007d4a3) clock_t5

0x5a3f,	// (0x0007d4b8) clock_t6_ParamLimits

0x5a3f,	// (0x0007d4b8) clock_t6

0x5a51,	// (0x0007d4ca) clock_t7_ParamLimits

0x5a51,	// (0x0007d4ca) clock_t7

0x5a63,	// (0x0007d4dc) clock_t8_ParamLimits

0x5a63,	// (0x0007d4dc) clock_t8

0x5a75,	// (0x0007d4ee) clock_t9_ParamLimits

0x5a75,	// (0x0007d4ee) clock_t9

0x0008,

0xf0d3,	// (0x00086b4c) clock_t_ParamLimits

0xf0d3,	// (0x00086b4c) clock_t

0xe591,	// (0x0008600a) popup_clock_analogue_window_cp02

0xe591,	// (0x0008600a) popup_clock_digital_window_cp01

0xe270,	// (0x00085ce9) listscroll_help_pane

0xe270,	// (0x00085ce9) phob_pre_status_pane

0xe599,	// (0x00086012) grid_qdial_pane

0xe4cb,	// (0x00085f44) listscroll_mce_pane

0xe4cb,	// (0x00085f44) bg_notes_pane

0xe5a3,	// (0x0008601c) list_notes_pane

0x5a87,	// (0x0007d500) scroll_pane_cp06

0xe5b1,	// (0x0008602a) bg_calc_paper_pane

0x5a94,	// (0x0007d50d) list_calc_pane

0xe5c9,	// (0x00086042) bg_calc_display_pane

0x5aae,	// (0x0007d527) calc_display_pane_t1

0x5ac3,	// (0x0007d53c) calc_display_pane_t2

0x5ad8,	// (0x0007d551) calc_display_pane_t3

0x0002,

0xf0e6,	// (0x00086b5f) calc_display_pane_t

0x5aea,	// (0x0007d563) cell_calc_pane_ParamLimits

0x5aea,	// (0x0007d563) cell_calc_pane

0xe5d5,	// (0x0008604e) bg_calc_paper_pane_g1

0xe5e1,	// (0x0008605a) bg_calc_paper_pane_g2

0xe5ed,	// (0x00086066) bg_calc_paper_pane_g3

0xe5f9,	// (0x00086072) bg_calc_paper_pane_g4

0xe605,	// (0x0008607e) bg_calc_paper_pane_g5

0x5b11,	// (0x0007d58a) bg_calc_paper_pane_g6

0x5b20,	// (0x0007d599) bg_calc_paper_pane_g7

0x5b2f,	// (0x0007d5a8) bg_calc_paper_pane_g8

0x0007,

0xf0ed,	// (0x00086b66) bg_calc_paper_pane_g

0x5b3e,	// (0x0007d5b7) calc_bg_paper_pane_g9

0x5b4d,	// (0x0007d5c6) list_calc_item_pane_ParamLimits

0x5b4d,	// (0x0007d5c6) list_calc_item_pane

0xe611,	// (0x0008608a) list_calc_item_pane_g1

0x5b66,	// (0x0007d5df) list_calc_item_pane_t1_ParamLimits

0x5b66,	// (0x0007d5df) list_calc_item_pane_t1

0x5b78,	// (0x0007d5f1) list_calc_item_pane_t2_ParamLimits

0x5b78,	// (0x0007d5f1) list_calc_item_pane_t2

0x0001,

0xf0fe,	// (0x00086b77) list_calc_item_pane_t_ParamLimits

0xf0fe,	// (0x00086b77) list_calc_item_pane_t

0xe4e3,	// (0x00085f5c) cell_calc_pane_g1

0xe61e,	// (0x00086097) grid_highlight_pane_cp02

0xe640,	// (0x000860b9) bg_calc_display_pane_g1

0x5ba6,	// (0x0007d61f) bg_calc_display_pane_g2

0xe649,	// (0x000860c2) bg_calc_display_pane_g3

0x0002,

0xf108,	// (0x00086b81) bg_calc_display_pane_g

0x5bb0,	// (0x0007d629) cell_qdial_pane_ParamLimits

0x5bb0,	// (0x0007d629) cell_qdial_pane

0x5bc2,	// (0x0007d63b) cell_qdial_pane_g1_ParamLimits

0x5bc2,	// (0x0007d63b) cell_qdial_pane_g1

0x5bcf,	// (0x0007d648) cell_qdial_pane_g2_ParamLimits

0x5bcf,	// (0x0007d648) cell_qdial_pane_g2

0xe652,	// (0x000860cb) cell_qdial_pane_g3_ParamLimits

0xe652,	// (0x000860cb) cell_qdial_pane_g3

0x0003,

0xf10f,	// (0x00086b88) cell_qdial_pane_g_ParamLimits

0xf10f,	// (0x00086b88) cell_qdial_pane_g

0x5bed,	// (0x0007d666) cell_qdial_pane_t1_ParamLimits

0x5bed,	// (0x0007d666) cell_qdial_pane_t1

0x5c05,	// (0x0007d67e) cell_qdial_pane_t2_ParamLimits

0x5c05,	// (0x0007d67e) cell_qdial_pane_t2

0x5c18,	// (0x0007d691) cell_qdial_pane_t3_ParamLimits

0x5c18,	// (0x0007d691) cell_qdial_pane_t3

0x0002,

0xf118,	// (0x00086b91) cell_qdial_pane_t_ParamLimits

0xf118,	// (0x00086b91) cell_qdial_pane_t

0xe270,	// (0x00085ce9) grid_highlight_pane_cp04

0xe65e,	// (0x000860d7) thumbnail_qdial_pane_ParamLimits

0xe65e,	// (0x000860d7) thumbnail_qdial_pane

0xe6ba,	// (0x00086133) list_help_pane

0xe6c4,	// (0x0008613d) scroll_pane_cp02

0x5c2b,	// (0x0007d6a4) help_list_pane_t1_ParamLimits

0x5c2b,	// (0x0007d6a4) help_list_pane_t1

0x5c4a,	// (0x0007d6c3) bg_notes_pane_g2

0x5c52,	// (0x0007d6cb) bg_notes_pane_g3

0x5c5a,	// (0x0007d6d3) notes_bg_pane_g1

0x5c62,	// (0x0007d6db) notes_bg_pane_g4

0x5c6a,	// (0x0007d6e3) notes_bg_pane_g5

0x5c72,	// (0x0007d6eb) notes_bg_pane_g6

0x5c7a,	// (0x0007d6f3) notes_bg_pane_g7

0x5c82,	// (0x0007d6fb) notes_bg_pane_g8

0x5c8a,	// (0x0007d703) notes_bg_pane_g9

0x0006,

0xf136,	// (0x00086baf) notes_bg_pane_g

0x5c92,	// (0x0007d70b) list_notes_text_pane_ParamLimits

0x5c92,	// (0x0007d70b) list_notes_text_pane

0xe6cd,	// (0x00086146) list_notes_text_pane_g1

0x5cb6,	// (0x0007d72f) list_notes_text_pane_t1

0x5cc4,	// (0x0007d73d) listscroll_cale_week_pane

0x5ce9,	// (0x0007d762) bg_cale_heading_pane

0xe6f0,	// (0x00086169) bg_cale_pane_cp01

0x5d01,	// (0x0007d77a) cale_week_corner_pane

0x5d1b,	// (0x0007d794) cale_week_day_heading_pane

0x5d33,	// (0x0007d7ac) cale_week_scroll_pane_g1

0x5d46,	// (0x0007d7bf) cale_week_scroll_pane_g2

0x5d59,	// (0x0007d7d2) cale_week_scroll_pane_g3

0x5d6c,	// (0x0007d7e5) cale_week_scroll_pane_g4

0x5d7f,	// (0x0007d7f8) cale_week_scroll_pane_g5

0x5d92,	// (0x0007d80b) cale_week_scroll_pane_g6

0x5da5,	// (0x0007d81e) cale_week_scroll_pane_g7

0x5db8,	// (0x0007d831) cale_week_scroll_pane_g8

0x5dcb,	// (0x0007d844) cale_week_scroll_pane_g9

0x5dde,	// (0x0007d857) cale_week_scroll_pane_g10

0x5df1,	// (0x0007d86a) cale_week_scroll_pane_g11

0x5e04,	// (0x0007d87d) cale_week_scroll_pane_g12

0x5e17,	// (0x0007d890) cale_week_scroll_pane_g13

0x5e2a,	// (0x0007d8a3) cale_week_scroll_pane_g14

0x5e3d,	// (0x0007d8b6) cale_week_scroll_pane_g15

0x000f,

0xf145,	// (0x00086bbe) cale_week_scroll_pane_g

0x5e63,	// (0x0007d8dc) cale_week_time_pane

0x5e76,	// (0x0007d8ef) grid_cale_week_pane

0xe71f,	// (0x00086198) scroll_pane_cp08

0x5e8b,	// (0x0007d904) cell_cale_week_pane_ParamLimits

0x5e8b,	// (0x0007d904) cell_cale_week_pane

0x5ed9,	// (0x0007d952) cale_week_day_heading_pane_t1

0x5f14,	// (0x0007d98d) cale_week_day_heading_pane_t2

0x5f4f,	// (0x0007d9c8) cale_week_day_heading_pane_t3

0x5f8a,	// (0x0007da03) cale_week_day_heading_pane_t4

0x5fc5,	// (0x0007da3e) cale_week_day_heading_pane_t5

0x6000,	// (0x0007da79) cale_week_day_heading_pane_t6

0x603b,	// (0x0007dab4) cale_week_day_heading_pane_t7

0x0006,

0xf166,	// (0x00086bdf) cale_week_day_heading_pane_t

0xe73c,	// (0x000861b5) bg_cale_side_pane

0x6076,	// (0x0007daef) cale_week_time_pane_t1

0x60b0,	// (0x0007db29) cale_week_time_pane_t2

0x60ea,	// (0x0007db63) cale_week_time_pane_t3

0x6124,	// (0x0007db9d) cale_week_time_pane_t4

0x615e,	// (0x0007dbd7) cale_week_time_pane_t5

0x6198,	// (0x0007dc11) cale_week_time_pane_t6

0x61d2,	// (0x0007dc4b) cale_week_time_pane_t7

0x620c,	// (0x0007dc85) cale_week_time_pane_t8

0x0007,

0xf175,	// (0x00086bee) cale_week_time_pane_t

0x6246,	// (0x0007dcbf) cell_cale_week_pane_g2

0x626a,	// (0x0007dce3) cell_cale_week_pane_g3_ParamLimits

0x626a,	// (0x0007dce3) cell_cale_week_pane_g3

0xe74a,	// (0x000861c3) grid_highlight_pane_cp07

0xe752,	// (0x000861cb) listscroll_gms_pane

0xe75c,	// (0x000861d5) grid_gms_pane

0xe765,	// (0x000861de) listscroll_gms_pane_g1

0xe76d,	// (0x000861e6) listscroll_gms_pane_g2

0x0001,

0xf186,	// (0x00086bff) listscroll_gms_pane_g

0x6282,	// (0x0007dcfb) scroll_pane_cp010

0x628b,	// (0x0007dd04) cell_gms_pane_ParamLimits

0x628b,	// (0x0007dd04) cell_gms_pane

0x629c,	// (0x0007dd15) cell_gms_pane_g1

0xe775,	// (0x000861ee) cell_gms_pane_g2

0xe6cd,	// (0x00086146) cell_gms_pane_g3

0xe77d,	// (0x000861f6) cell_gms_pane_g4

0x0003,

0xf18b,	// (0x00086c04) cell_gms_pane_g

0xe786,	// (0x000861ff) grid_highlight_pane_cp09

0x8617,	// (0x00080090) phob_pre_status_pane_g1

0x861f,	// (0x00080098) phob_pre_status_pane_g2

0x8627,	// (0x000800a0) phob_pre_status_pane_g3

0x862f,	// (0x000800a8) phob_pre_status_pane_g4

0x0004,

0xf579,	// (0x00086ff2) phob_pre_status_pane_g

0x863f,	// (0x000800b8) phob_pre_status_pane_t1

0x864d,	// (0x000800c6) phob_pre_status_pane_t2

0x865b,	// (0x000800d4) phob_pre_status_pane_t3

0x0002,

0xf584,	// (0x00086ffd) phob_pre_status_pane_t

0x0931,	// (0x000783aa) bg_list_pane_cp05

0x62a4,	// (0x0007dd1d) grid_vorec_pane

0x0939,	// (0x000783b2) vorec_t1

0x0947,	// (0x000783c0) vorec_t2

0x0955,	// (0x000783ce) vorec_t3

0x62ac,	// (0x0007dd25) vorec_t4

0xd4e3,	// (0x00084f5c) vorec_t5

0xd4f1,	// (0x00084f6a) vorec_t6

0x0004,

0xf194,	// (0x00086c0d) vorec_t

0xd4ff,	// (0x00084f78) wait_bar_pane_cp01

0x17bf,	// (0x00079238) cell_vorec_pane_ParamLimits

0x17bf,	// (0x00079238) cell_vorec_pane

0x62ba,	// (0x0007dd33) cell_vorec_pane_g1

0xe270,	// (0x00085ce9) grid_highlight_pane_cp05

0xe561,	// (0x00085fda) cams_zoom_pane

0xe561,	// (0x00085fda) image_vga_pane

0xe553,	// (0x00085fcc) main_camera_pane_g1

0xe553,	// (0x00085fcc) main_camera_pane_g2

0xe553,	// (0x00085fcc) main_camera_pane_g3

0xe553,	// (0x00085fcc) main_camera_pane_g4

0xe553,	// (0x00085fcc) main_camera_pane_g5

0xe553,	// (0x00085fcc) main_camera_pane_g6

0xe553,	// (0x00085fcc) main_camera_pane_g7

0x0007,

0xf19f,	// (0x00086c18) main_camera_pane_g

0x14e3,	// (0x00078f5c) main_camera_pane_t1

0x14e3,	// (0x00078f5c) main_camera_pane_t2

0x0001,

0xf1b0,	// (0x00086c29) main_camera_pane_t

0x62c4,	// (0x0007dd3d) cams_zoom_pane_cp_ParamLimits

0x62c4,	// (0x0007dd3d) cams_zoom_pane_cp

0x62f2,	// (0x0007dd6b) image_cif_pane_ParamLimits

0x62f2,	// (0x0007dd6b) image_cif_pane

0xde55,	// (0x000858ce) image_subqcif_pane

0x6300,	// (0x0007dd79) main_video_pane_g1_ParamLimits

0x6300,	// (0x0007dd79) main_video_pane_g1

0x6328,	// (0x0007dda1) main_video_pane_g2_ParamLimits

0x6328,	// (0x0007dda1) main_video_pane_g2

0x635b,	// (0x0007ddd4) main_video_pane_g3_ParamLimits

0x635b,	// (0x0007ddd4) main_video_pane_g3

0x635b,	// (0x0007ddd4) main_video_pane_g4_ParamLimits

0x635b,	// (0x0007ddd4) main_video_pane_g4

0x6389,	// (0x0007de02) main_video_pane_g5_ParamLimits

0x6389,	// (0x0007de02) main_video_pane_g5

0x098f,	// (0x00078408) main_video_pane_g6_ParamLimits

0x098f,	// (0x00078408) main_video_pane_g6

0x0006,

0xf1b5,	// (0x00086c2e) main_video_pane_g_ParamLimits

0xf1b5,	// (0x00086c2e) main_video_pane_g

0x63a5,	// (0x0007de1e) main_video_pane_t1_ParamLimits

0x63a5,	// (0x0007de1e) main_video_pane_t1

0x09a9,	// (0x00078422) cams_zoom_pane_g1

0x09a9,	// (0x00078422) cams_zoom_pane_g2

0x09a9,	// (0x00078422) cams_zoom_pane_g3

0x09a9,	// (0x00078422) cams_zoom_pane_g4

0x0003,

0xf1c4,	// (0x00086c3d) cams_zoom_pane_g

0x63eb,	// (0x0007de64) grid_cams_pane

0x63f7,	// (0x0007de70) linegrid_cams_pane

0x6403,	// (0x0007de7c) cell_cams_pane_ParamLimits

0x6403,	// (0x0007de7c) cell_cams_pane

0x09b3,	// (0x0007842c) cams_burst_image_pane

0x09bb,	// (0x00078434) cell_cams_pane_g1

0xe270,	// (0x00085ce9) grid_highlight_pane_cp03

0xe4e3,	// (0x00085f5c) mp_bg_pane_g1

0xde55,	// (0x000858ce) bg_list_pane_cp03

0xde55,	// (0x000858ce) bg_mp_pane

0xde55,	// (0x000858ce) grid_mp_pane

0x09a9,	// (0x00078422) media_player_g1

0x85f8,	// (0x00080071) media_player_t1

0x85f8,	// (0x00080071) media_player_t2

0x85f8,	// (0x00080071) media_player_t3

0x85f8,	// (0x00080071) media_player_t4

0x85f8,	// (0x00080071) media_player_t5

0x85f8,	// (0x00080071) media_player_t6

0x85f8,	// (0x00080071) media_player_t7

0x0006,

0xf563,	// (0x00086fdc) media_player_t

0xde55,	// (0x000858ce) wait_bar_pane_cp02

0xf548,	// (0x00086fc1) main_usb_pane_t

0x11f7,	// (0x00078c70) cell_mp_pane

0xe4e3,	// (0x00085f5c) cell_mp_pane_g1

0xe270,	// (0x00085ce9) grid_highlight_pane_cp06

0x0a01,	// (0x0007847a) grid_skin_colour_pane

0x0a09,	// (0x00078482) list_highlight_pane_cp03

0x6416,	// (0x0007de8f) skin_g1

0x0a11,	// (0x0007848a) skin_t1

0x0a20,	// (0x00078499) skin_t2

0x0001,

0xf1f2,	// (0x00086c6b) skin_t

0x641e,	// (0x0007de97) cell_skin_colour_pane_ParamLimits

0x641e,	// (0x0007de97) cell_skin_colour_pane

0x0a2e,	// (0x000784a7) cell_skin_colour_pane_g1

0x6494,	// (0x0007df0d) call_video_g1_ParamLimits

0x6494,	// (0x0007df0d) call_video_g1

0x64a0,	// (0x0007df19) call_video_g2_ParamLimits

0x64a0,	// (0x0007df19) call_video_g2

0x0001,

0xf1f7,	// (0x00086c70) call_video_g_ParamLimits

0xf1f7,	// (0x00086c70) call_video_g

0x64f0,	// (0x0007df69) call_video_uplink_pane_cp1_ParamLimits

0x64f0,	// (0x0007df69) call_video_uplink_pane_cp1

0x0a40,	// (0x000784b9) call_video_uplink_pane_cp2

0x65ac,	// (0x0007e025) video_down_crop_pane_ParamLimits

0x65ac,	// (0x0007e025) video_down_crop_pane

0x6676,	// (0x0007e0ef) video_down_pane_ParamLimits

0x6676,	// (0x0007e0ef) video_down_pane

0x0a48,	// (0x000784c1) video_down_subqcif_pane_ParamLimits

0x0a48,	// (0x000784c1) video_down_subqcif_pane

0x0a60,	// (0x000784d9) video_down_subqcif_pane_cp_ParamLimits

0x0a60,	// (0x000784d9) video_down_subqcif_pane_cp

0x0a84,	// (0x000784fd) im_reading_pane_ParamLimits

0x0a84,	// (0x000784fd) im_reading_pane

0x6742,	// (0x0007e1bb) im_writing_pane_ParamLimits

0x6742,	// (0x0007e1bb) im_writing_pane

0x6758,	// (0x0007e1d1) im_reading_pane_t1

0x0a9e,	// (0x00078517) list_im_pane

0x0aaf,	// (0x00078528) scroll_pane_cp07

0x6790,	// (0x0007e209) im_writing_pane_t1_ParamLimits

0x6790,	// (0x0007e209) im_writing_pane_t1

0x0ac8,	// (0x00078541) im_writing_pane_t2_ParamLimits

0x0ac8,	// (0x00078541) im_writing_pane_t2

0x0001,

0xf201,	// (0x00086c7a) im_writing_pane_t_ParamLimits

0xf201,	// (0x00086c7a) im_writing_pane_t

0xe270,	// (0x00085ce9) input_focus_pane_cp04

0xe270,	// (0x00085ce9) input_focus_pane_cp05

0x67a5,	// (0x0007e21e) list_im_single_pane_ParamLimits

0x67a5,	// (0x0007e21e) list_im_single_pane

0x0ae5,	// (0x0007855e) list_single_im_pane_t1

0x0931,	// (0x000783aa) blid_accuracy_pane

0x0931,	// (0x000783aa) blid_compass_pane

0x8608,	// (0x00080081) main_location_t1

0x8608,	// (0x00080081) main_location_t2

0x8608,	// (0x00080081) main_location_t3

0x0002,

0xf572,	// (0x00086feb) main_location_t

0xe270,	// (0x00085ce9) aid_levels_location

0xe4e3,	// (0x00085f5c) blid_accuracy_pane_g1

0xe4e3,	// (0x00085f5c) blid_accuracy_pane_g2

0x0001,

0xf255,	// (0x00086cce) blid_accuracy_pane_g

0x0b1f,	// (0x00078598) wml_content_pane

0x0b5d,	// (0x000785d6) wml_button_pane_ParamLimits

0x0b5d,	// (0x000785d6) wml_button_pane

0x67bd,	// (0x0007e236) wml_list_single_large_pane_ParamLimits

0x67bd,	// (0x0007e236) wml_list_single_large_pane

0x67d4,	// (0x0007e24d) wml_list_single_medium_pane_ParamLimits

0x67d4,	// (0x0007e24d) wml_list_single_medium_pane

0x67ec,	// (0x0007e265) wml_list_single_small_pane_ParamLimits

0x67ec,	// (0x0007e265) wml_list_single_small_pane

0x0b71,	// (0x000785ea) wml_selection_box_pane_ParamLimits

0x0b71,	// (0x000785ea) wml_selection_box_pane

0x0b84,	// (0x000785fd) wml_list_single_pane_t1

0x0b93,	// (0x0007860c) wml_list_single_medium_pane_t1

0x0ba2,	// (0x0007861b) wml_list_single_large_pane_t1

0x0bb1,	// (0x0007862a) input_focus_pane_cp02_ParamLimits

0x0bb1,	// (0x0007862a) input_focus_pane_cp02

0x0bc4,	// (0x0007863d) wml_selection_box_pane_g1

0x0bcd,	// (0x00078646) wml_selection_box_pane_t1_ParamLimits

0x0bcd,	// (0x00078646) wml_selection_box_pane_t1

0xe4cb,	// (0x00085f44) bg_wml_button_pane_ParamLimits

0xe4cb,	// (0x00085f44) bg_wml_button_pane

0x0be5,	// (0x0007865e) wml_button_pane_g1

0x0bed,	// (0x00078666) wml_button_pane_t1

0x0be5,	// (0x0007865e) wml_button_bg_pane_g1

0x0bfd,	// (0x00078676) wml_button_bg_pane_g2

0x0c05,	// (0x0007867e) wml_button_bg_pane_g3

0x0c0d,	// (0x00078686) wml_button_bg_pane_g4

0x0c15,	// (0x0007868e) wml_button_bg_pane_g5

0x0c1d,	// (0x00078696) wml_button_bg_pane_g6

0x0c25,	// (0x0007869e) wml_button_bg_pane_g7

0x0c2d,	// (0x000786a6) wml_button_bg_pane_g8

0x0c35,	// (0x000786ae) wml_button_bg_pane_g9

0x0008,

0xf206,	// (0x00086c7f) wml_button_bg_pane_g

0x6807,	// (0x0007e280) bg_list_pane_cp02

0x0c3d,	// (0x000786b6) mce_header_pane_ParamLimits

0x0c3d,	// (0x000786b6) mce_header_pane

0x0c51,	// (0x000786ca) mce_icon_pane

0x0c51,	// (0x000786ca) mce_image_pane

0x0c5a,	// (0x000786d3) mce_text_pane_ParamLimits

0x0c5a,	// (0x000786d3) mce_text_pane

0x6810,	// (0x0007e289) scroll_pane_cp03

0x6810,	// (0x0007e289) scroll_pane_cp04

0x0c6e,	// (0x000786e7) scroll_pane_cp05_ParamLimits

0x0c6e,	// (0x000786e7) scroll_pane_cp05

0x6818,	// (0x0007e291) mce_header_field_pane_ParamLimits

0x6818,	// (0x0007e291) mce_header_field_pane

0x6838,	// (0x0007e2b1) mce_header_field_pane_2_ParamLimits

0x6838,	// (0x0007e2b1) mce_header_field_pane_2

0x684e,	// (0x0007e2c7) mce_header_field_pane_3

0x6856,	// (0x0007e2cf) list_single_mce_message_pane_ParamLimits

0x6856,	// (0x0007e2cf) list_single_mce_message_pane

0x686d,	// (0x0007e2e6) list_single_mce_smart_pane_ParamLimits

0x686d,	// (0x0007e2e6) list_single_mce_smart_pane

0x0c7a,	// (0x000786f3) input_focus_pane_cp03

0x0c83,	// (0x000786fc) list_header_data_pane

0x688f,	// (0x0007e308) mce_header_field_pane_t1

0x689d,	// (0x0007e316) list_single_mce_header_pane_ParamLimits

0x689d,	// (0x0007e316) list_single_mce_header_pane

0x0c8b,	// (0x00078704) list_single_mce_header_pane_t1

0x0c9a,	// (0x00078713) list_single_mce_message_pane_g1

0x0ca3,	// (0x0007871c) list_single_mce_message_pane_t1

0x68db,	// (0x0007e354) bg_cale_heading_pane_cp01_ParamLimits

0x68db,	// (0x0007e354) bg_cale_heading_pane_cp01

0x0cb2,	// (0x0007872b) bg_cale_pane_cp02_ParamLimits

0x0cb2,	// (0x0007872b) bg_cale_pane_cp02

0x690a,	// (0x0007e383) cale_month_corner_pane

0x6924,	// (0x0007e39d) cale_month_day_heading_pane_ParamLimits

0x6924,	// (0x0007e39d) cale_month_day_heading_pane

0x6953,	// (0x0007e3cc) cale_month_pane_g1_ParamLimits

0x6953,	// (0x0007e3cc) cale_month_pane_g1

0x6977,	// (0x0007e3f0) cale_month_pane_g2_ParamLimits

0x6977,	// (0x0007e3f0) cale_month_pane_g2

0x6996,	// (0x0007e40f) cale_month_pane_g3_ParamLimits

0x6996,	// (0x0007e40f) cale_month_pane_g3

0x69d2,	// (0x0007e44b) cale_month_pane_g4_ParamLimits

0x69d2,	// (0x0007e44b) cale_month_pane_g4

0x6a0e,	// (0x0007e487) cale_month_pane_g5_ParamLimits

0x6a0e,	// (0x0007e487) cale_month_pane_g5

0x6a4a,	// (0x0007e4c3) cale_month_pane_g6_ParamLimits

0x6a4a,	// (0x0007e4c3) cale_month_pane_g6

0x6a86,	// (0x0007e4ff) cale_month_pane_g7_ParamLimits

0x6a86,	// (0x0007e4ff) cale_month_pane_g7

0x6ac2,	// (0x0007e53b) cale_month_pane_g8_ParamLimits

0x6ac2,	// (0x0007e53b) cale_month_pane_g8

0x6afe,	// (0x0007e577) cale_month_pane_g9_ParamLimits

0x6afe,	// (0x0007e577) cale_month_pane_g9

0x6b38,	// (0x0007e5b1) cale_month_pane_g10_ParamLimits

0x6b38,	// (0x0007e5b1) cale_month_pane_g10

0x6b72,	// (0x0007e5eb) cale_month_pane_g11_ParamLimits

0x6b72,	// (0x0007e5eb) cale_month_pane_g11

0x6bac,	// (0x0007e625) cale_month_pane_g12_ParamLimits

0x6bac,	// (0x0007e625) cale_month_pane_g12

0x6be6,	// (0x0007e65f) cale_month_pane_g13_ParamLimits

0x6be6,	// (0x0007e65f) cale_month_pane_g13

0x000c,

0xf219,	// (0x00086c92) cale_month_pane_g_ParamLimits

0xf219,	// (0x00086c92) cale_month_pane_g

0x6c20,	// (0x0007e699) cale_month_week_pane

0x6c33,	// (0x0007e6ac) grid_cale_month_pane_ParamLimits

0x6c33,	// (0x0007e6ac) grid_cale_month_pane

0x6c59,	// (0x0007e6d2) cale_month_day_heading_pane_t1

0x6cdf,	// (0x0007e758) cale_month_day_heading_pane_t2

0x6d70,	// (0x0007e7e9) cale_month_day_heading_pane_t3

0x6e01,	// (0x0007e87a) cale_month_day_heading_pane_t4

0x6e92,	// (0x0007e90b) cale_month_day_heading_pane_t5

0x6f23,	// (0x0007e99c) cale_month_day_heading_pane_t6

0x6fb4,	// (0x0007ea2d) cale_month_day_heading_pane_t7

0x0006,

0xf234,	// (0x00086cad) cale_month_day_heading_pane_t

0xe73c,	// (0x000861b5) bg_cale_side_pane_cp01

0x7045,	// (0x0007eabe) cale_month_week_pane_t1

0x707e,	// (0x0007eaf7) cale_month_week_pane_t2

0x70b7,	// (0x0007eb30) cale_month_week_pane_t3

0x70f0,	// (0x0007eb69) cale_month_week_pane_t4

0x7129,	// (0x0007eba2) cale_month_week_pane_t5

0x7162,	// (0x0007ebdb) cale_month_week_pane_t6

0x0005,

0xf243,	// (0x00086cbc) cale_month_week_pane_t

0x719b,	// (0x0007ec14) cell_cale_month_pane_ParamLimits

0x719b,	// (0x0007ec14) cell_cale_month_pane

0x7289,	// (0x0007ed02) cell_cale_month_pane_g1

0x7295,	// (0x0007ed0e) cell_cale_month_pane_t1_ParamLimits

0x7295,	// (0x0007ed0e) cell_cale_month_pane_t1

0xe74a,	// (0x000861c3) grid_highlight_pane_cp08

0xe4e3,	// (0x00085f5c) main_smil_g1

0x72b5,	// (0x0007ed2e) smil_status_pane

0x0cfd,	// (0x00078776) smil_text_pane

0x8450,	// (0x0007fec9) bg_popup_call3_rect_pane_g8

0x8458,	// (0x0007fed1) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f3,	// (0x00086f6c) bg_popup_call3_rect_pane_g

0x89f6,	// (0x0008046f) smil_status_volume_pane_g1

0x72c6,	// (0x0007ed3f) smil_status_pane_t1

0x8a29,	// (0x000804a2) volume_smil_pane

0x0d07,	// (0x00078780) list_smil_text_pane

0x72dd,	// (0x0007ed56) scroll_pane_cp011

0x72e6,	// (0x0007ed5f) smil_text_list_pane_t1_ParamLimits

0x72e6,	// (0x0007ed5f) smil_text_list_pane_t1

0x7325,	// (0x0007ed9e) aid_volume_smil_ParamLimits

0x7325,	// (0x0007ed9e) aid_volume_smil

0xe4e3,	// (0x00085f5c) smil_volume_pane_g1

0xe4e3,	// (0x00085f5c) smil_volume_pane_g2

0x0001,

0xf255,	// (0x00086cce) smil_volume_pane_g

0x5cc4,	// (0x0007d73d) listscroll_cale_day_pane

0x0d33,	// (0x000787ac) bg_cale_pane

0x0d4b,	// (0x000787c4) list_cale_pane

0x0d6e,	// (0x000787e7) scroll_pane_cp09

0x0d7f,	// (0x000787f8) cale_bg_pane_g1

0x0d87,	// (0x00078800) cale_bg_pane_g2

0x0d8f,	// (0x00078808) cale_bg_pane_g3

0x0d97,	// (0x00078810) cale_bg_pane_g4

0x0d9f,	// (0x00078818) cale_bg_pane_g5

0x0da7,	// (0x00078820) cale_bg_pane_g6

0x0daf,	// (0x00078828) cale_bg_pane_g7

0x0db7,	// (0x00078830) cale_bg_pane_g8

0x0dbf,	// (0x00078838) cale_bg_pane_g9

0x0008,

0xf25a,	// (0x00086cd3) cale_bg_pane_g

0x734f,	// (0x0007edc8) list_cale_time_pane_ParamLimits

0x734f,	// (0x0007edc8) list_cale_time_pane

0x0dc7,	// (0x00078840) list_cale_time_pane_g1_ParamLimits

0x0dc7,	// (0x00078840) list_cale_time_pane_g1

0x0dd3,	// (0x0007884c) list_cale_time_pane_g2_ParamLimits

0x0dd3,	// (0x0007884c) list_cale_time_pane_g2

0x7363,	// (0x0007eddc) list_cale_time_pane_g3_ParamLimits

0x7363,	// (0x0007eddc) list_cale_time_pane_g3

0x736f,	// (0x0007ede8) list_cale_time_pane_g4_ParamLimits

0x736f,	// (0x0007ede8) list_cale_time_pane_g4

0x737b,	// (0x0007edf4) list_cale_time_pane_g5_ParamLimits

0x737b,	// (0x0007edf4) list_cale_time_pane_g5

0x0005,

0xf26d,	// (0x00086ce6) list_cale_time_pane_g_ParamLimits

0xf26d,	// (0x00086ce6) list_cale_time_pane_g

0x0ded,	// (0x00078866) list_cale_time_pane_t1_ParamLimits

0x0ded,	// (0x00078866) list_cale_time_pane_t1

0x0e15,	// (0x0007888e) list_cale_time_pane_t2_ParamLimits

0x0e15,	// (0x0007888e) list_cale_time_pane_t2

0x7615,	// (0x0007f08e) aid_blid_cardinal_pane

0x7653,	// (0x0007f0cc) compass_pane_t4

0x0e3d,	// (0x000788b6) list_cale_time_pane_t4_ParamLimits

0x0e3d,	// (0x000788b6) list_cale_time_pane_t4

0x7661,	// (0x0007f0da) compass_pane_t5

0x766f,	// (0x0007f0e8) compass_pane_t6

0x767d,	// (0x0007f0f6) compass_pane_t7

0x1314,	// (0x00078d8d) navi_pane_cc_t1

0x14cb,	// (0x00078f44) aid_phob_thumbnail_center_pane

0x7aa8,	// (0x0007f521) main_postcard_pane_g4_ParamLimits

0x0002,

0xf27a,	// (0x00086cf3) list_cale_time_pane_t_ParamLimits

0xf27a,	// (0x00086cf3) list_cale_time_pane_t

0xdec9,	// (0x00085942) bg_popup_window_pane_cp02_ParamLimits

0xdec9,	// (0x00085942) bg_popup_window_pane_cp02

0x0e65,	// (0x000788de) heading_pane_cp01_ParamLimits

0x0e65,	// (0x000788de) heading_pane_cp01

0x0e71,	// (0x000788ea) loc_req_pane_ParamLimits

0x0e71,	// (0x000788ea) loc_req_pane

0x0e81,	// (0x000788fa) loc_type_pane_ParamLimits

0x0e81,	// (0x000788fa) loc_type_pane

0x0e93,	// (0x0007890c) loc_type_pane_t1_ParamLimits

0x0e93,	// (0x0007890c) loc_type_pane_t1

0x0ea5,	// (0x0007891e) loc_type_pane_t2_ParamLimits

0x0ea5,	// (0x0007891e) loc_type_pane_t2

0x0eb7,	// (0x00078930) loc_type_pane_t3_ParamLimits

0x0eb7,	// (0x00078930) loc_type_pane_t3

0x0002,

0xf281,	// (0x00086cfa) loc_type_pane_t_ParamLimits

0xf281,	// (0x00086cfa) loc_type_pane_t

0x0ec9,	// (0x00078942) list_loc_req_pane

0x0ed3,	// (0x0007894c) scroll_pane_cp012

0x7387,	// (0x0007ee00) list_single_loc_request_popup_menu_pane_ParamLimits

0x7387,	// (0x0007ee00) list_single_loc_request_popup_menu_pane

0x0edc,	// (0x00078955) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0edc,	// (0x00078955) list_single_loc_request_popup_menu_pane_g1

0x0ee8,	// (0x00078961) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0ee8,	// (0x00078961) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf288,	// (0x00086d01) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf288,	// (0x00086d01) list_single_loc_request_popup_menu_pane_g

0x0ef4,	// (0x0007896d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0ef4,	// (0x0007896d) list_single_loc_request_popup_menu_pane_t1

0x7399,	// (0x0007ee12) bg_popup_window_pane_cp03_ParamLimits

0x7399,	// (0x0007ee12) bg_popup_window_pane_cp03

0x73a7,	// (0x0007ee20) heading_loc_req_pane_ParamLimits

0x73a7,	// (0x0007ee20) heading_loc_req_pane

0x73b3,	// (0x0007ee2c) popup_dyc_status_message_window_g1_ParamLimits

0x73b3,	// (0x0007ee2c) popup_dyc_status_message_window_g1

0x73bf,	// (0x0007ee38) popup_dyc_status_message_window_t1_ParamLimits

0x73bf,	// (0x0007ee38) popup_dyc_status_message_window_t1

0x73d1,	// (0x0007ee4a) popup_dyc_status_message_window_t2_ParamLimits

0x73d1,	// (0x0007ee4a) popup_dyc_status_message_window_t2

0x73e3,	// (0x0007ee5c) popup_dyc_status_message_window_t3_ParamLimits

0x73e3,	// (0x0007ee5c) popup_dyc_status_message_window_t3

0x0002,

0xf28d,	// (0x00086d06) popup_dyc_status_message_window_t_ParamLimits

0xf28d,	// (0x00086d06) popup_dyc_status_message_window_t

0xe270,	// (0x00085ce9) bg_heading_pane_cp01

0x0f0a,	// (0x00078983) heading_loc_req_pane_g1

0x0f12,	// (0x0007898b) heading_loc_req_pane_g2

0x0f1a,	// (0x00078993) heading_loc_req_pane_g3

0x0002,

0xf294,	// (0x00086d0d) heading_loc_req_pane_g

0x0f22,	// (0x0007899b) heading_loc_req_pane_t1

0x0f4f,	// (0x000789c8) bg_popup_sub_pane_cp01_ParamLimits

0x0f4f,	// (0x000789c8) bg_popup_sub_pane_cp01

0x0f5d,	// (0x000789d6) popup_cale_events_window_g1_ParamLimits

0x0f5d,	// (0x000789d6) popup_cale_events_window_g1

0x0f7d,	// (0x000789f6) popup_cale_events_window_g2_ParamLimits

0x0f7d,	// (0x000789f6) popup_cale_events_window_g2

0x0001,

0xf2c8,	// (0x00086d41) popup_cale_events_window_g_ParamLimits

0xf2c8,	// (0x00086d41) popup_cale_events_window_g

0x0f9d,	// (0x00078a16) popup_cale_events_window_t1_ParamLimits

0x0f9d,	// (0x00078a16) popup_cale_events_window_t1

0x0faf,	// (0x00078a28) popup_cale_events_window_t2_ParamLimits

0x0faf,	// (0x00078a28) popup_cale_events_window_t2

0x0fed,	// (0x00078a66) popup_cale_events_window_t3_ParamLimits

0x0fed,	// (0x00078a66) popup_cale_events_window_t3

0x1027,	// (0x00078aa0) popup_cale_events_window_t4_ParamLimits

0x1027,	// (0x00078aa0) popup_cale_events_window_t4

0x0003,

0xf2cd,	// (0x00086d46) popup_cale_events_window_t_ParamLimits

0xf2cd,	// (0x00086d46) popup_cale_events_window_t

0x740f,	// (0x0007ee88) call_type_pane

0x1e86,	// (0x000798ff) popup_call_status_window_g1

0x741b,	// (0x0007ee94) popup_call_status_window_g2

0x7427,	// (0x0007eea0) popup_call_status_window_g3

0x0002,

0xf2d6,	// (0x00086d4f) popup_call_status_window_g

0x105d,	// (0x00078ad6) call_type_pane_g1

0x1066,	// (0x00078adf) call_type_pane_g2

0x0001,

0xf2dd,	// (0x00086d56) call_type_pane_g

0xe270,	// (0x00085ce9) bg_popup_sub_pane_cp02

0x106f,	// (0x00078ae8) listscroll_popup_wml_pane

0x1077,	// (0x00078af0) list_wml_pane

0x1081,	// (0x00078afa) scroll_pane_cp013

0x7433,	// (0x0007eeac) list_single_graphic_popup_wml_pane_ParamLimits

0x7433,	// (0x0007eeac) list_single_graphic_popup_wml_pane

0xe4e3,	// (0x00085f5c) list_single_graphic_popup_wml_pane_g1

0x108a,	// (0x00078b03) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2e2,	// (0x00086d5b) list_single_graphic_popup_wml_pane_g

0x1092,	// (0x00078b0b) list_single_graphic_popup_wml_pane_t1

0x10a0,	// (0x00078b19) aid_call_pane

0xe4c3,	// (0x00085f3c) popup_clock_analogue_window_g1

0xe4c3,	// (0x00085f3c) popup_clock_analogue_window_g2

0x7447,	// (0x0007eec0) popup_clock_analogue_window_g3

0x7447,	// (0x0007eec0) popup_clock_analogue_window_g4

0xe4e3,	// (0x00085f5c) popup_clock_analogue_window_g5

0x0004,

0xf2e7,	// (0x00086d60) popup_clock_analogue_window_g

0x744f,	// (0x0007eec8) popup_clock_analogue_window_t1

0x745d,	// (0x0007eed6) clock_digital_number_pane_ParamLimits

0x745d,	// (0x0007eed6) clock_digital_number_pane

0x7469,	// (0x0007eee2) clock_digital_number_pane_cp02_ParamLimits

0x7469,	// (0x0007eee2) clock_digital_number_pane_cp02

0x7475,	// (0x0007eeee) clock_digital_number_pane_cp03_ParamLimits

0x7475,	// (0x0007eeee) clock_digital_number_pane_cp03

0x7481,	// (0x0007eefa) clock_digital_number_pane_cp04_ParamLimits

0x7481,	// (0x0007eefa) clock_digital_number_pane_cp04

0x748d,	// (0x0007ef06) clock_digital_separator_pane_ParamLimits

0x748d,	// (0x0007ef06) clock_digital_separator_pane

0x7499,	// (0x0007ef12) popup_clock_digital_window_t1

0xe4e3,	// (0x00085f5c) clock_digital_number_pane_g1

0xe4e3,	// (0x00085f5c) clock_digital_number_pane_g2

0x0001,

0xf255,	// (0x00086cce) clock_digital_number_pane_g

0xe4e3,	// (0x00085f5c) clock_digital_separator_pane_g1

0xe4e3,	// (0x00085f5c) clock_digital_separator_pane_g2

0x0001,

0xf255,	// (0x00086cce) clock_digital_separator_pane_g

0xe270,	// (0x00085ce9) bg_popup_window_pane_cp04

0x111f,	// (0x00078b98) heading_pane_cp03

0x0931,	// (0x000783aa) listscroll_popup_gms_pane

0xe270,	// (0x00085ce9) grid_large_graphic_popup_pane

0x1128,	// (0x00078ba1) listscroll_popup_gms_pane_g1

0x1131,	// (0x00078baa) listscroll_popup_gms_pane_g2

0x0001,

0xf2f2,	// (0x00086d6b) listscroll_popup_gms_pane_g

0x113a,	// (0x00078bb3) scroll_pane_cp014

0xe561,	// (0x00085fda) cell_large_graphic_popup_pane_ParamLimits

0xe561,	// (0x00085fda) cell_large_graphic_popup_pane

0xe545,	// (0x00085fbe) cell_large_graphic_popup_pane_g1_ParamLimits

0xe545,	// (0x00085fbe) cell_large_graphic_popup_pane_g1

0x1142,	// (0x00078bbb) cell_large_graphic_popup_pane_g2_ParamLimits

0x1142,	// (0x00078bbb) cell_large_graphic_popup_pane_g2

0x1150,	// (0x00078bc9) cell_large_graphic_popup_pane_g3_ParamLimits

0x1150,	// (0x00078bc9) cell_large_graphic_popup_pane_g3

0x115e,	// (0x00078bd7) cell_large_graphic_popup_pane_g4_ParamLimits

0x115e,	// (0x00078bd7) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f7,	// (0x00086d70) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f7,	// (0x00086d70) cell_large_graphic_popup_pane_g

0xe270,	// (0x00085ce9) grid_highlight_pane_cp010

0xe4e3,	// (0x00085f5c) bg_popup_call_pane_g1

0x116f,	// (0x00078be8) list_single_graphic_popup_conf_pane_ParamLimits

0x116f,	// (0x00078be8) list_single_graphic_popup_conf_pane

0x1182,	// (0x00078bfb) list_highlight_pane_cp01

0x118b,	// (0x00078c04) list_single_graphic_popup_conf_pane_g1

0x1193,	// (0x00078c0c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf300,	// (0x00086d79) list_single_graphic_popup_conf_pane_g

0x119b,	// (0x00078c14) list_single_graphic_popup_conf_pane_t1

0x11a9,	// (0x00078c22) linegrid_cams_pane_g1

0x74b6,	// (0x0007ef2f) linegrid_cams_pane_g2

0xe6cd,	// (0x00086146) linegrid_cams_pane_g3

0x11b2,	// (0x00078c2b) linegrid_cams_pane_g4

0x74bf,	// (0x0007ef38) linegrid_cams_pane_g5

0x74c8,	// (0x0007ef41) linegrid_cams_pane_g6

0xe77d,	// (0x000861f6) linegrid_cams_pane_g7

0x0006,

0xf305,	// (0x00086d7e) linegrid_cams_pane_g

0x11bb,	// (0x00078c34) popup_clock_analogue_window

0x11bb,	// (0x00078c34) popup_clock_digital_window

0xe270,	// (0x00085ce9) popup_phob_thumbnail_window

0xe4e3,	// (0x00085f5c) call_video_uplink_pane_g1

0x11c4,	// (0x00078c3d) call_video_uplink_pane_g2

0x0001,

0xf314,	// (0x00086d8d) call_video_uplink_pane_g

0xe74a,	// (0x000861c3) video_uplink_pane

0x11cc,	// (0x00078c45) mce_image_pane_g1

0x74d1,	// (0x0007ef4a) mce_image_pane_g2

0x74d9,	// (0x0007ef52) mce_image_pane_g3

0x74e1,	// (0x0007ef5a) mce_image_pane_g4

0x74e9,	// (0x0007ef62) mce_image_pane_g5

0x0004,

0xf319,	// (0x00086d92) mce_image_pane_g

0x11d6,	// (0x00078c4f) control_top_pane_stacon_cp01_ParamLimits

0x11d6,	// (0x00078c4f) control_top_pane_stacon_cp01

0x11e6,	// (0x00078c5f) uni_indicator_pane_stacon_cp01_ParamLimits

0x11e6,	// (0x00078c5f) uni_indicator_pane_stacon_cp01

0x11f7,	// (0x00078c70) bg_popup_sub_pane_cp03

0x1201,	// (0x00078c7a) chi_dic_find_pane

0x74f1,	// (0x0007ef6a) listscroll_chi_dic_pane

0x1209,	// (0x00078c82) main_pane_chidic_g1

0x1211,	// (0x00078c8a) chi_dic_find_pane_t1

0x121f,	// (0x00078c98) find_chidic_pane

0x1228,	// (0x00078ca1) chi_dic_list_pane_ParamLimits

0x1228,	// (0x00078ca1) chi_dic_list_pane

0x113a,	// (0x00078bb3) scroll_pane_cp020

0x1239,	// (0x00078cb2) find_chidic_pane_t1

0xe270,	// (0x00085ce9) input_focus_pane_cp06

0x7503,	// (0x0007ef7c) list_chi_dic_pane_ParamLimits

0x7503,	// (0x0007ef7c) list_chi_dic_pane

0x7516,	// (0x0007ef8f) list_chi_dic_pane_t1_ParamLimits

0x7516,	// (0x0007ef8f) list_chi_dic_pane_t1

0xe270,	// (0x00085ce9) list_highlight_pane_cp020

0x1248,	// (0x00078cc1) bg_cale_heading_pane_g1

0x7529,	// (0x0007efa2) bg_cale_heading_pane_g2

0x7531,	// (0x0007efaa) bg_cale_heading_pane_g3

0x7539,	// (0x0007efb2) bg_cale_heading_pane_g4

0x7541,	// (0x0007efba) bg_cale_heading_pane_g5

0x7549,	// (0x0007efc2) bg_cale_heading_pane_g6

0x7551,	// (0x0007efca) bg_cale_heading_pane_g7

0x7559,	// (0x0007efd2) bg_cale_heading_pane_g8

0x7561,	// (0x0007efda) bg_cale_heading_pane_g9

0x0008,

0xf324,	// (0x00086d9d) bg_cale_heading_pane_g

0x1248,	// (0x00078cc1) bg_cale_side_pane_g1

0x7569,	// (0x0007efe2) bg_cale_side_pane_g2

0x7571,	// (0x0007efea) bg_cale_side_pane_g3

0x7579,	// (0x0007eff2) bg_cale_side_pane_g4

0x7581,	// (0x0007effa) bg_cale_side_pane_g5

0x7589,	// (0x0007f002) bg_cale_side_pane_g6

0x7591,	// (0x0007f00a) bg_cale_side_pane_g7

0x7599,	// (0x0007f012) bg_cale_side_pane_g8

0x75a1,	// (0x0007f01a) bg_cale_side_pane_g9

0x0008,

0xf337,	// (0x00086db0) bg_cale_side_pane_g

0x75a9,	// (0x0007f022) popup_call_status_window_ParamLimits

0x75a9,	// (0x0007f022) popup_call_status_window

0x1250,	// (0x00078cc9) stacon_top_pane

0x1258,	// (0x00078cd1) status_pane_ParamLimits

0x1258,	// (0x00078cd1) status_pane

0x1272,	// (0x00078ceb) status_small_pane

0x127a,	// (0x00078cf3) control_pane

0xe270,	// (0x00085ce9) stacon_bottom_pane

0x1282,	// (0x00078cfb) list_single_mce_smart_pane_t1_ParamLimits

0x1282,	// (0x00078cfb) list_single_mce_smart_pane_t1

0x1295,	// (0x00078d0e) list_single_mce_smart_pane_t2_ParamLimits

0x1295,	// (0x00078d0e) list_single_mce_smart_pane_t2

0x0001,

0xf34a,	// (0x00086dc3) list_single_mce_smart_pane_t_ParamLimits

0xf34a,	// (0x00086dc3) list_single_mce_smart_pane_t

0x75b8,	// (0x0007f031) compass_pane

0x75c1,	// (0x0007f03a) main_location2_pane_t1

0x75d7,	// (0x0007f050) main_location2_pane_t2

0x75ed,	// (0x0007f066) main_location2_pane_t3

0x0003,

0xf34f,	// (0x00086dc8) main_location2_pane_t

0x12bd,	// (0x00078d36) compass_pane_g1_ParamLimits

0x12bd,	// (0x00078d36) compass_pane_g1

0x7635,	// (0x0007f0ae) compass_pane_t1

0x7644,	// (0x0007f0bd) compass_pane_t2

0x0005,

0xf358,	// (0x00086dd1) compass_pane_t

0x768b,	// (0x0007f104) text_secondary_cp61

0x130b,	// (0x00078d84) navi_pane_cams_g5

0x1357,	// (0x00078dd0) navi_pane_im_t1

0x1365,	// (0x00078dde) navi_pane_mp_g1_ParamLimits

0x1365,	// (0x00078dde) navi_pane_mp_g1

0x1379,	// (0x00078df2) navi_pane_mp_g2_ParamLimits

0x1379,	// (0x00078df2) navi_pane_mp_g2

0x1385,	// (0x00078dfe) navi_pane_mp_g3_ParamLimits

0x1385,	// (0x00078dfe) navi_pane_mp_g3

0x0002,

0xf36c,	// (0x00086de5) navi_pane_mp_g_ParamLimits

0xf36c,	// (0x00086de5) navi_pane_mp_g

0x1391,	// (0x00078e0a) navi_pane_mp_t1

0x139f,	// (0x00078e18) navi_pane_mp_t2

0x0002,

0xf373,	// (0x00086dec) navi_pane_mp_t

0x140a,	// (0x00078e83) navi_pane_vt_g1

0x1391,	// (0x00078e0a) navi_pane_vt_t1

0x1412,	// (0x00078e8b) navi_slider_pane

0x0931,	// (0x000783aa) zooming_pane

0x141a,	// (0x00078e93) navi_slider_pane_g1

0x770d,	// (0x0007f186) navi_slider_pane_g2

0x0006,

0xf37a,	// (0x00086df3) navi_slider_pane_g

0x1450,	// (0x00078ec9) aid_levels_zoom

0x1458,	// (0x00078ed1) zooming_pane_g1

0x1460,	// (0x00078ed9) zooming_pane_g2

0x1460,	// (0x00078ed9) zooming_pane_g3

0x0002,

0xf389,	// (0x00086e02) zooming_pane_g

0x1468,	// (0x00078ee1) level_10_zoom

0x1471,	// (0x00078eea) level_11_zoom

0x147a,	// (0x00078ef3) level_1_zoom

0x1483,	// (0x00078efc) level_2_zoom

0x148c,	// (0x00078f05) level_3_zoom

0x1495,	// (0x00078f0e) level_4_zoom

0x149e,	// (0x00078f17) level_5_zoom

0x14a7,	// (0x00078f20) level_6_zoom

0x14b0,	// (0x00078f29) level_7_zoom

0x14b9,	// (0x00078f32) level_8_zoom

0x14c2,	// (0x00078f3b) level_9_zoom

0x14d3,	// (0x00078f4c) popup_phob_thumbnail_window_g1

0x14db,	// (0x00078f54) popup_phob_thumbnail_window_g2

0x0001,

0xf390,	// (0x00086e09) popup_phob_thumbnail_window_g

0x8669,	// (0x000800e2) level_1_location

0x8671,	// (0x000800ea) level_2_location

0x8679,	// (0x000800f2) level_3_location

0x8681,	// (0x000800fa) level_4_location

0x0931,	// (0x000783aa) level_5_location

0x771f,	// (0x0007f198) mce_icon_pane_g1

0x7727,	// (0x0007f1a0) mce_icon_pane_g2

0x0001,

0xf395,	// (0x00086e0e) mce_icon_pane_g

0x772f,	// (0x0007f1a8) main_mup_pane_g1_ParamLimits

0x772f,	// (0x0007f1a8) main_mup_pane_g1

0xe56f,	// (0x00085fe8) main_mup_pane_g2_ParamLimits

0xe56f,	// (0x00085fe8) main_mup_pane_g2

0xe56f,	// (0x00085fe8) main_mup_pane_g3_ParamLimits

0xe56f,	// (0x00085fe8) main_mup_pane_g3

0xe56f,	// (0x00085fe8) main_mup_pane_g4_ParamLimits

0xe56f,	// (0x00085fe8) main_mup_pane_g4

0xe56f,	// (0x00085fe8) main_mup_pane_g5_ParamLimits

0xe56f,	// (0x00085fe8) main_mup_pane_g5

0xe56f,	// (0x00085fe8) main_mup_pane_g6_ParamLimits

0xe56f,	// (0x00085fe8) main_mup_pane_g6

0xe56f,	// (0x00085fe8) main_mup_pane_g7_ParamLimits

0xe56f,	// (0x00085fe8) main_mup_pane_g7

0xe56f,	// (0x00085fe8) main_mup_pane_g8_ParamLimits

0xe56f,	// (0x00085fe8) main_mup_pane_g8

0xe56f,	// (0x00085fe8) main_mup_pane_g9_ParamLimits

0xe56f,	// (0x00085fe8) main_mup_pane_g9

0xe56f,	// (0x00085fe8) main_mup_pane_g10_ParamLimits

0xe56f,	// (0x00085fe8) main_mup_pane_g10

0xe56f,	// (0x00085fe8) main_mup_pane_g11_ParamLimits

0xe56f,	// (0x00085fe8) main_mup_pane_g11

0xe553,	// (0x00085fcc) main_mup_pane_g12_ParamLimits

0xe553,	// (0x00085fcc) main_mup_pane_g12

0xe56f,	// (0x00085fe8) main_mup_pane_g13_ParamLimits

0xe56f,	// (0x00085fe8) main_mup_pane_g13

0x000c,

0xf39a,	// (0x00086e13) main_mup_pane_g_ParamLimits

0xf39a,	// (0x00086e13) main_mup_pane_g

0xe57d,	// (0x00085ff6) main_mup_pane_t1_ParamLimits

0xe57d,	// (0x00085ff6) main_mup_pane_t1

0xe57d,	// (0x00085ff6) main_mup_pane_t2_ParamLimits

0xe57d,	// (0x00085ff6) main_mup_pane_t2

0xe57d,	// (0x00085ff6) main_mup_pane_t3_ParamLimits

0xe57d,	// (0x00085ff6) main_mup_pane_t3

0x14e3,	// (0x00078f5c) main_mup_pane_t4_ParamLimits

0x14e3,	// (0x00078f5c) main_mup_pane_t4

0x14e3,	// (0x00078f5c) main_mup_pane_t5_ParamLimits

0x14e3,	// (0x00078f5c) main_mup_pane_t5

0x097b,	// (0x000783f4) main_mup_pane_t6_ParamLimits

0x097b,	// (0x000783f4) main_mup_pane_t6

0x0005,

0xf3b5,	// (0x00086e2e) main_mup_pane_t_ParamLimits

0xf3b5,	// (0x00086e2e) main_mup_pane_t

0x0861,	// (0x000782da) mup_progress_pane_ParamLimits

0x0861,	// (0x000782da) mup_progress_pane

0x7742,	// (0x0007f1bb) mup_visualizer_pane_ParamLimits

0x7742,	// (0x0007f1bb) mup_visualizer_pane

0x7742,	// (0x0007f1bb) mup_volume_pane_ParamLimits

0x7742,	// (0x0007f1bb) mup_volume_pane

0xe553,	// (0x00085fcc) mup_visualizer_pane_g1_ParamLimits

0xe553,	// (0x00085fcc) mup_visualizer_pane_g1

0x14f7,	// (0x00078f70) mup_visualizer_pane_g2_ParamLimits

0x14f7,	// (0x00078f70) mup_visualizer_pane_g2

0xe545,	// (0x00085fbe) mup_visualizer_pane_g3_ParamLimits

0xe545,	// (0x00085fbe) mup_visualizer_pane_g3

0x0002,

0xf3c2,	// (0x00086e3b) mup_visualizer_pane_g_ParamLimits

0xf3c2,	// (0x00086e3b) mup_visualizer_pane_g

0x09a9,	// (0x00078422) mup_volume_pane_g1

0x09a9,	// (0x00078422) mup_volume_pane_g2

0x0001,

0xf3c9,	// (0x00086e42) mup_volume_pane_g

0x09a9,	// (0x00078422) mup_progress_pane_g1

0x09a9,	// (0x00078422) mup_progress_pane_g2

0x09a9,	// (0x00078422) mup_progress_pane_g3

0x0002,

0xf3ce,	// (0x00086e47) mup_progress_pane_g

0xe270,	// (0x00085ce9) bg_popup_window_pane_cp05

0x1505,	// (0x00078f7e) heading_pane_cp02_ParamLimits

0x1505,	// (0x00078f7e) heading_pane_cp02

0x151f,	// (0x00078f98) list_popup_blid_pane

0x1527,	// (0x00078fa0) list_blid_sat_info_pane_ParamLimits

0x1527,	// (0x00078fa0) list_blid_sat_info_pane

0x153a,	// (0x00078fb3) list_blid_sat_info_pane_g1

0x1542,	// (0x00078fbb) list_blid_sat_info_pane_t1

0x7820,	// (0x0007f299) mup_equalizer_pane_ParamLimits

0x7820,	// (0x0007f299) mup_equalizer_pane

0x7839,	// (0x0007f2b2) mup_equalizer_pane_cp1_ParamLimits

0x7839,	// (0x0007f2b2) mup_equalizer_pane_cp1

0x7852,	// (0x0007f2cb) mup_equalizer_pane_cp2_ParamLimits

0x7852,	// (0x0007f2cb) mup_equalizer_pane_cp2

0x786b,	// (0x0007f2e4) mup_equalizer_pane_cp3_ParamLimits

0x786b,	// (0x0007f2e4) mup_equalizer_pane_cp3

0x7884,	// (0x0007f2fd) mup_equalizer_pane_cp4_ParamLimits

0x7884,	// (0x0007f2fd) mup_equalizer_pane_cp4

0x789d,	// (0x0007f316) mup_equalizer_pane_cp5

0x78af,	// (0x0007f328) mup_equalizer_pane_cp6

0x78c1,	// (0x0007f33a) mup_equalizer_pane_cp7

0x84d8,	// (0x0007ff51) bg_popup_call_poc_act_pane_g9

0x84e0,	// (0x0007ff59) bg_popup_call_poc_act_pane_g10

0x84e8,	// (0x0007ff61) bg_popup_call_poc_act_pane_g11

0x000a,

0xe4cb,	// (0x00085f44) mup_scale_pane

0xe4e3,	// (0x00085f5c) mup_scale_pane_g1

0x1550,	// (0x00078fc9) mup_scale_pane_g2

0x0006,

0xf3ea,	// (0x00086e63) mup_scale_pane_g

0x1574,	// (0x00078fed) msg_data_pane

0x157c,	// (0x00078ff5) scroll_pane_cp017

0x78e5,	// (0x0007f35e) bg_list_pane_cp04_ParamLimits

0x78e5,	// (0x0007f35e) bg_list_pane_cp04

0x158c,	// (0x00079005) msg_data_pane_g1

0x74d1,	// (0x0007ef4a) msg_data_pane_g2

0x74d9,	// (0x0007ef52) msg_data_pane_g3

0x78fd,	// (0x0007f376) msg_data_pane_g4

0x74e9,	// (0x0007ef62) msg_data_pane_g5

0x771f,	// (0x0007f198) msg_data_pane_g6

0x7905,	// (0x0007f37e) msg_data_pane_g7

0x0006,

0xf3f9,	// (0x00086e72) msg_data_pane_g

0x790d,	// (0x0007f386) msg_text_pane_ParamLimits

0x790d,	// (0x0007f386) msg_text_pane

0x7936,	// (0x0007f3af) qrid_highlight_pane_cp011_ParamLimits

0x7936,	// (0x0007f3af) qrid_highlight_pane_cp011

0xe270,	// (0x00085ce9) msg_body_pane

0xe270,	// (0x00085ce9) msg_header_pane

0x159d,	// (0x00079016) input_focus_pane_cp07

0x15b2,	// (0x0007902b) msg_header_pane_t1_ParamLimits

0x15b2,	// (0x0007902b) msg_header_pane_t1

0x7958,	// (0x0007f3d1) msg_header_pane_t2_ParamLimits

0x7958,	// (0x0007f3d1) msg_header_pane_t2

0x0001,

0xf40d,	// (0x00086e86) msg_header_pane_t_ParamLimits

0xf40d,	// (0x00086e86) msg_header_pane_t

0x15c8,	// (0x00079041) msg_body_pane_g1

0x796f,	// (0x0007f3e8) msg_body_pane_t1_ParamLimits

0x796f,	// (0x0007f3e8) msg_body_pane_t1

0x799a,	// (0x0007f413) msg_body_pane_t2_ParamLimits

0x799a,	// (0x0007f413) msg_body_pane_t2

0x79ac,	// (0x0007f425) msg_body_pane_t3_ParamLimits

0x79ac,	// (0x0007f425) msg_body_pane_t3

0x0002,

0xf412,	// (0x00086e8b) msg_body_pane_t_ParamLimits

0xf412,	// (0x00086e8b) msg_body_pane_t

0x7a0c,	// (0x0007f485) main_viewer_pane_g1_ParamLimits

0x7a0c,	// (0x0007f485) main_viewer_pane_g1

0x7a18,	// (0x0007f491) main_viewer_pane_g2_ParamLimits

0x7a18,	// (0x0007f491) main_viewer_pane_g2

0x7a24,	// (0x0007f49d) main_viewer_pane_g3_ParamLimits

0x7a24,	// (0x0007f49d) main_viewer_pane_g3

0x7a33,	// (0x0007f4ac) main_viewer_pane_g4_ParamLimits

0x7a33,	// (0x0007f4ac) main_viewer_pane_g4

0x7a42,	// (0x0007f4bb) main_viewer_pane_g5_ParamLimits

0x7a42,	// (0x0007f4bb) main_viewer_pane_g5

0x7a42,	// (0x0007f4bb) main_viewer_pane_g7_ParamLimits

0x7a42,	// (0x0007f4bb) main_viewer_pane_g7

0x7a54,	// (0x0007f4cd) main_viewer_pane_g8_ParamLimits

0x7a54,	// (0x0007f4cd) main_viewer_pane_g8

0x0007,

0xf422,	// (0x00086e9b) main_viewer_pane_g_ParamLimits

0xf422,	// (0x00086e9b) main_viewer_pane_g

0x1612,	// (0x0007908b) viewer_content_pane_ParamLimits

0x1612,	// (0x0007908b) viewer_content_pane

0x7a84,	// (0x0007f4fd) main_postcard_pane_g1_ParamLimits

0x7a84,	// (0x0007f4fd) main_postcard_pane_g1

0x7a90,	// (0x0007f509) main_postcard_pane_g2_ParamLimits

0x7a90,	// (0x0007f509) main_postcard_pane_g2

0x7a9c,	// (0x0007f515) main_postcard_pane_g3_ParamLimits

0x7a9c,	// (0x0007f515) main_postcard_pane_g3

0x0005,

0xf433,	// (0x00086eac) main_postcard_pane_g_ParamLimits

0xf433,	// (0x00086eac) main_postcard_pane_g

0x7aa8,	// (0x0007f521) main_postcard_pane_g4

0x8a09,	// (0x00080482) smil_status_volume_pane_g2

0x7acc,	// (0x0007f545) postcard_pane_ParamLimits

0x7acc,	// (0x0007f545) postcard_pane

0x1e86,	// (0x000798ff) postcard_pane_g1_ParamLimits

0x1e86,	// (0x000798ff) postcard_pane_g1

0x7afc,	// (0x0007f575) postcard_pane_g2_ParamLimits

0x7afc,	// (0x0007f575) postcard_pane_g2

0x7b08,	// (0x0007f581) postcard_pane_g3_ParamLimits

0x7b08,	// (0x0007f581) postcard_pane_g3

0x162e,	// (0x000790a7) postcard_pane_g4_ParamLimits

0x162e,	// (0x000790a7) postcard_pane_g4

0x7b14,	// (0x0007f58d) postcard_pane_g5_ParamLimits

0x7b14,	// (0x0007f58d) postcard_pane_g5

0x7b20,	// (0x0007f599) postcard_pane_g6_ParamLimits

0x7b20,	// (0x0007f599) postcard_pane_g6

0x1620,	// (0x00079099) postcard_pane_g7_ParamLimits

0x1620,	// (0x00079099) postcard_pane_g7

0x0006,

0xf440,	// (0x00086eb9) postcard_pane_g_ParamLimits

0xf440,	// (0x00086eb9) postcard_pane_g

0x7b2c,	// (0x0007f5a5) main_mp2_pane_g1_ParamLimits

0x7b2c,	// (0x0007f5a5) main_mp2_pane_g1

0x7b38,	// (0x0007f5b1) main_mp2_pane_g2_ParamLimits

0x7b38,	// (0x0007f5b1) main_mp2_pane_g2

0x7b44,	// (0x0007f5bd) main_mp2_pane_g3_ParamLimits

0x7b44,	// (0x0007f5bd) main_mp2_pane_g3

0x0002,

0xf44f,	// (0x00086ec8) main_mp2_pane_g_ParamLimits

0xf44f,	// (0x00086ec8) main_mp2_pane_g

0x7b50,	// (0x0007f5c9) main_mp2_pane_t1_ParamLimits

0x7b50,	// (0x0007f5c9) main_mp2_pane_t1

0x7b65,	// (0x0007f5de) main_mp2_pane_t2_ParamLimits

0x7b65,	// (0x0007f5de) main_mp2_pane_t2

0x7b77,	// (0x0007f5f0) main_mp2_pane_t3_ParamLimits

0x7b77,	// (0x0007f5f0) main_mp2_pane_t3

0x0002,

0xf456,	// (0x00086ecf) main_mp2_pane_t_ParamLimits

0xf456,	// (0x00086ecf) main_mp2_pane_t

0x163c,	// (0x000790b5) pec_content_pane_ParamLimits

0x163c,	// (0x000790b5) pec_content_pane

0x0b55,	// (0x000785ce) scroll_pane_cp015

0x164e,	// (0x000790c7) pec_attribute_pane_ParamLimits

0x164e,	// (0x000790c7) pec_attribute_pane

0x7b89,	// (0x0007f602) pec_content_pane_g1_ParamLimits

0x7b89,	// (0x0007f602) pec_content_pane_g1

0x165e,	// (0x000790d7) pec_content_pane_t1_ParamLimits

0x165e,	// (0x000790d7) pec_content_pane_t1

0x1670,	// (0x000790e9) pec_content_pane_t2_ParamLimits

0x1670,	// (0x000790e9) pec_content_pane_t2

0x0001,

0xf45d,	// (0x00086ed6) pec_content_pane_t_ParamLimits

0xf45d,	// (0x00086ed6) pec_content_pane_t

0x7b95,	// (0x0007f60e) list_single_graphic_pane_cp01_ParamLimits

0x7b95,	// (0x0007f60e) list_single_graphic_pane_cp01

0xe4cb,	// (0x00085f44) bg_popup_sub_pane_cp04

0x1682,	// (0x000790fb) popup_mup_playback_window_g1

0x168e,	// (0x00079107) popup_mup_playback_window_t1

0x16a3,	// (0x0007911c) popup_mup_playback_window_t2

0x0001,

0xf462,	// (0x00086edb) popup_mup_playback_window_t

0x16da,	// (0x00079153) main_image_pane_g1_ParamLimits

0x16da,	// (0x00079153) main_image_pane_g1

0x171d,	// (0x00079196) scroll_pane_cp018_ParamLimits

0x171d,	// (0x00079196) scroll_pane_cp018

0x1735,	// (0x000791ae) scroll_pane_cp016_ParamLimits

0x1735,	// (0x000791ae) scroll_pane_cp016

0x7c1a,	// (0x0007f693) smil2_image_pane_ParamLimits

0x7c1a,	// (0x0007f693) smil2_image_pane

0x7c42,	// (0x0007f6bb) smil2_root_pane_ParamLimits

0x7c42,	// (0x0007f6bb) smil2_root_pane

0x7c6e,	// (0x0007f6e7) smil2_text_pane_ParamLimits

0x7c6e,	// (0x0007f6e7) smil2_text_pane

0xe270,	// (0x00085ce9) bg_list_pane_cp06

0x1769,	// (0x000791e2) grid_radio_pane

0xe270,	// (0x00085ce9) bg_popup_window_pane_cp06

0x1771,	// (0x000791ea) main_fmradio_pane_t1

0x85a8,	// (0x00080021) heading_pane_cp04

0x177f,	// (0x000791f8) main_fmradio_pane_t2

0x85b0,	// (0x00080029) popup_cale_lunar_info_window_g1

0x178d,	// (0x00079206) main_fmradio_pane_t3

0x85b8,	// (0x00080031) popup_cale_lunar_info_window_g2

0x179b,	// (0x00079214) main_fmradio_pane_t4

0x0001,

0x17a9,	// (0x00079222) main_fmradio_pane_t5

0x0004,

0xf555,	// (0x00086fce) popup_cale_lunar_info_window_g

0xf477,	// (0x00086ef0) main_fmradio_pane_t

0x17b7,	// (0x00079230) wait_bar_pane_cp03

0x17bf,	// (0x00079238) cell_fmradio_pane_ParamLimits

0x17bf,	// (0x00079238) cell_fmradio_pane

0x1620,	// (0x00079099) cell_fmradio_pane_g1_ParamLimits

0x1620,	// (0x00079099) cell_fmradio_pane_g1

0xe270,	// (0x00085ce9) grid_highlight_pane_cp011

0x17d2,	// (0x0007924b) poc_content_pane_ParamLimits

0x17d2,	// (0x0007924b) poc_content_pane

0x17e5,	// (0x0007925e) scroll_pane_cp019

0x7ca2,	// (0x0007f71b) popup_call_poc_act_window_ParamLimits

0x7ca2,	// (0x0007f71b) popup_call_poc_act_window

0x7caf,	// (0x0007f728) popup_call_poc_inact_window_ParamLimits

0x7caf,	// (0x0007f728) popup_call_poc_inact_window

0xf519,	// (0x00086f92) bg_popup_call_poc_act_pane_g

0x84f0,	// (0x0007ff69) bg_popup_call_poc_inact_pane_g1

0x84f8,	// (0x0007ff71) bg_popup_call_poc_inact_pane_g2

0x17ed,	// (0x00079266) popup_call_poc_act_window_g2

0x8500,	// (0x0007ff79) bg_popup_call_poc_inact_pane_g3

0x8478,	// (0x0007fef1) bg_popup_call_poc_inact_pane_g4

0x8508,	// (0x0007ff81) bg_popup_call_poc_inact_pane_g5

0x17f5,	// (0x0007926e) popup_call_poc_act_window_t1_ParamLimits

0x17f5,	// (0x0007926e) popup_call_poc_act_window_t1

0x181d,	// (0x00079296) popup_call_poc_act_window_t2_ParamLimits

0x181d,	// (0x00079296) popup_call_poc_act_window_t2

0x1845,	// (0x000792be) popup_call_poc_act_window_t3_ParamLimits

0x1845,	// (0x000792be) popup_call_poc_act_window_t3

0x186d,	// (0x000792e6) popup_call_poc_act_window_t4_ParamLimits

0x186d,	// (0x000792e6) popup_call_poc_act_window_t4

0x0003,

0xf482,	// (0x00086efb) popup_call_poc_act_window_t_ParamLimits

0xf482,	// (0x00086efb) popup_call_poc_act_window_t

0x8510,	// (0x0007ff89) bg_popup_call_poc_inact_pane_g6

0x8518,	// (0x0007ff91) bg_popup_call_poc_inact_pane_g7

0x8520,	// (0x0007ff99) bg_popup_call_poc_inact_pane_g8

0x187f,	// (0x000792f8) popup_call_poc_inact_window_g2

0x8528,	// (0x0007ffa1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf530,	// (0x00086fa9) bg_popup_call_poc_inact_pane_g

0x1887,	// (0x00079300) popup_call_poc_inact_window_t1_ParamLimits

0x1887,	// (0x00079300) popup_call_poc_inact_window_t1

0x189c,	// (0x00079315) popup_call_poc_inact_window_t2_ParamLimits

0x189c,	// (0x00079315) popup_call_poc_inact_window_t2

0x18b1,	// (0x0007932a) popup_call_poc_inact_window_t3_ParamLimits

0x18b1,	// (0x0007932a) popup_call_poc_inact_window_t3

0x0002,

0xf48b,	// (0x00086f04) popup_call_poc_inact_window_t_ParamLimits

0xf48b,	// (0x00086f04) popup_call_poc_inact_window_t

0x8919,	// (0x00080392) context_pane_ParamLimits

0x8965,	// (0x000803de) signal_pane_ParamLimits

0x0931,	// (0x000783aa) main_call2_pane

0x88cc,	// (0x00080345) popup_phob_thumbnail2_window_ParamLimits

0x88cc,	// (0x00080345) popup_phob_thumbnail2_window

0x79be,	// (0x0007f437) aid_hotspot_pointer_arrow_pane

0x79c6,	// (0x0007f43f) aid_hotspot_pointer_hand_pane

0x8637,	// (0x000800b0) phob_pre_status_pane_g5

0xe561,	// (0x00085fda) cams_zoom_pane_ParamLimits

0xe561,	// (0x00085fda) image_vga_pane_ParamLimits

0xe553,	// (0x00085fcc) main_camera_pane_g1_ParamLimits

0xe553,	// (0x00085fcc) main_camera_pane_g2_ParamLimits

0xe553,	// (0x00085fcc) main_camera_pane_g3_ParamLimits

0xe553,	// (0x00085fcc) main_camera_pane_g4_ParamLimits

0xe553,	// (0x00085fcc) main_camera_pane_g5_ParamLimits

0xe553,	// (0x00085fcc) main_camera_pane_g6_ParamLimits

0xe553,	// (0x00085fcc) main_camera_pane_g7_ParamLimits

0xf19f,	// (0x00086c18) main_camera_pane_g_ParamLimits

0x14e3,	// (0x00078f5c) main_camera_pane_t1_ParamLimits

0x14e3,	// (0x00078f5c) main_camera_pane_t2_ParamLimits

0xf1b0,	// (0x00086c29) main_camera_pane_t_ParamLimits

0xe4cb,	// (0x00085f44) bg_popup_preview_window_pane_cp01_ParamLimits

0xe4cb,	// (0x00085f44) bg_popup_preview_window_pane_cp01

0x18c6,	// (0x0007933f) popup_phob_thumbnail2_window_g1_ParamLimits

0x18c6,	// (0x0007933f) popup_phob_thumbnail2_window_g1

0xe270,	// (0x00085ce9) call2_cli_visual_pane

0x7ccb,	// (0x0007f744) popup_call2_audio_conf_window_ParamLimits

0x7ccb,	// (0x0007f744) popup_call2_audio_conf_window

0x7cde,	// (0x0007f757) popup_call2_audio_first_window_ParamLimits

0x7cde,	// (0x0007f757) popup_call2_audio_first_window

0x7d5a,	// (0x0007f7d3) popup_call2_audio_in_window_ParamLimits

0x7d5a,	// (0x0007f7d3) popup_call2_audio_in_window

0x7d8a,	// (0x0007f803) popup_call2_audio_out_window_ParamLimits

0x7d8a,	// (0x0007f803) popup_call2_audio_out_window

0x7dd6,	// (0x0007f84f) popup_call2_audio_second_window_ParamLimits

0x7dd6,	// (0x0007f84f) popup_call2_audio_second_window

0x7e22,	// (0x0007f89b) popup_call2_audio_wait_window_ParamLimits

0x7e22,	// (0x0007f89b) popup_call2_audio_wait_window

0xe270,	// (0x00085ce9) bg_popup_call2_act_pane_cp03

0xe4ad,	// (0x00085f26) list_conf_pane_cp

0x18d2,	// (0x0007934b) popup_call2_audio_conf_window_t1

0x116f,	// (0x00078be8) list_single_graphic_popup_conf2_pane_ParamLimits

0x116f,	// (0x00078be8) list_single_graphic_popup_conf2_pane

0x1182,	// (0x00078bfb) list_highlight_pane_cp04

0x18e0,	// (0x00079359) list_single_graphic_popup_conf2_pane_g1

0x1193,	// (0x00078c0c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf492,	// (0x00086f0b) list_single_graphic_popup_conf2_pane_g

0x18e8,	// (0x00079361) list_single_graphic_popup_conf2_pane_t1

0x18f6,	// (0x0007936f) bg_popup_call2_act_pane_cp01_ParamLimits

0x18f6,	// (0x0007936f) bg_popup_call2_act_pane_cp01

0x1980,	// (0x000793f9) call_type_pane_cp05_ParamLimits

0x1980,	// (0x000793f9) call_type_pane_cp05

0x19d4,	// (0x0007944d) popup_call2_audio_second_window_g1_ParamLimits

0x19d4,	// (0x0007944d) popup_call2_audio_second_window_g1

0x1a28,	// (0x000794a1) popup_call2_audio_second_window_g2_ParamLimits

0x1a28,	// (0x000794a1) popup_call2_audio_second_window_g2

0x0002,

0xf497,	// (0x00086f10) popup_call2_audio_second_window_g_ParamLimits

0xf497,	// (0x00086f10) popup_call2_audio_second_window_g

0x1a8d,	// (0x00079506) popup_call2_audio_second_window_t1_ParamLimits

0x1a8d,	// (0x00079506) popup_call2_audio_second_window_t1

0x1b48,	// (0x000795c1) popup_call2_audio_second_window_t2_ParamLimits

0x1b48,	// (0x000795c1) popup_call2_audio_second_window_t2

0x1b9b,	// (0x00079614) popup_call2_audio_second_window_t3_ParamLimits

0x1b9b,	// (0x00079614) popup_call2_audio_second_window_t3

0x0003,

0xf49e,	// (0x00086f17) popup_call2_audio_second_window_t_ParamLimits

0xf49e,	// (0x00086f17) popup_call2_audio_second_window_t

0xe270,	// (0x00085ce9) bg_popup_call2_in_pane_cp02

0xe27a,	// (0x00085cf3) call_type_pane_cp04

0x7e5f,	// (0x0007f8d8) popup_call2_audio_wait_window_g1

0x7e67,	// (0x0007f8e0) popup_call2_audio_wait_window_g2

0x0001,

0xf4a7,	// (0x00086f20) popup_call2_audio_wait_window_g

0xe292,	// (0x00085d0b) popup_call2_audio_wait_window_t3

0x1c8e,	// (0x00079707) bg_popup_call2_act_pane_ParamLimits

0x1c8e,	// (0x00079707) bg_popup_call2_act_pane

0x1d4e,	// (0x000797c7) call_type_pane_cp03_ParamLimits

0x1d4e,	// (0x000797c7) call_type_pane_cp03

0x1db2,	// (0x0007982b) popup_call2_audio_first_window_g1_ParamLimits

0x1db2,	// (0x0007982b) popup_call2_audio_first_window_g1

0x1e22,	// (0x0007989b) popup_call2_audio_first_window_g2_ParamLimits

0x1e22,	// (0x0007989b) popup_call2_audio_first_window_g2

0x1e86,	// (0x000798ff) popup_call2_audio_first_window_g3_ParamLimits

0x1e86,	// (0x000798ff) popup_call2_audio_first_window_g3

0x0004,

0xf4ac,	// (0x00086f25) popup_call2_audio_first_window_g_ParamLimits

0xf4ac,	// (0x00086f25) popup_call2_audio_first_window_g

0x1f0e,	// (0x00079987) popup_call2_audio_first_window_t1_ParamLimits

0x1f0e,	// (0x00079987) popup_call2_audio_first_window_t1

0x2011,	// (0x00079a8a) popup_call2_audio_first_window_t4_ParamLimits

0x2011,	// (0x00079a8a) popup_call2_audio_first_window_t4

0x7e6f,	// (0x0007f8e8) popup_call2_audio_first_window_t5_ParamLimits

0x7e6f,	// (0x0007f8e8) popup_call2_audio_first_window_t5

0x0003,

0xf4b7,	// (0x00086f30) popup_call2_audio_first_window_t_ParamLimits

0xf4b7,	// (0x00086f30) popup_call2_audio_first_window_t

0xe4c3,	// (0x00085f3c) bg_popup_call2_act_pane_g1

0x85c0,	// (0x00080039) popup_cale_lunar_info_window_t1

0x85ce,	// (0x00080047) popup_cale_lunar_info_window_t2

0x85dc,	// (0x00080055) popup_cale_lunar_info_window_t3

0xe270,	// (0x00085ce9) bg_popup_call2_bubble_pane

0x7f70,	// (0x0007f9e9) bg_popup_call2_in_pane_cp01_ParamLimits

0x7f70,	// (0x0007f9e9) bg_popup_call2_in_pane_cp01

0xdf4c,	// (0x000859c5) call_type_pane_cp02

0x7fb8,	// (0x0007fa31) popup_call2_audio_out_window_g1_ParamLimits

0x7fb8,	// (0x0007fa31) popup_call2_audio_out_window_g1

0x7fe4,	// (0x0007fa5d) popup_call2_audio_out_window_g2_ParamLimits

0x7fe4,	// (0x0007fa5d) popup_call2_audio_out_window_g2

0x800c,	// (0x0007fa85) popup_call2_audio_out_window_g3_ParamLimits

0x800c,	// (0x0007fa85) popup_call2_audio_out_window_g3

0x0003,

0xf4c0,	// (0x00086f39) popup_call2_audio_out_window_g_ParamLimits

0xf4c0,	// (0x00086f39) popup_call2_audio_out_window_g

0x8047,	// (0x0007fac0) popup_call2_audio_out_window_t1_ParamLimits

0x8047,	// (0x0007fac0) popup_call2_audio_out_window_t1

0x80a6,	// (0x0007fb1f) popup_call2_audio_out_window_t2_ParamLimits

0x80a6,	// (0x0007fb1f) popup_call2_audio_out_window_t2

0x80fa,	// (0x0007fb73) popup_call2_audio_out_window_t3_ParamLimits

0x80fa,	// (0x0007fb73) popup_call2_audio_out_window_t3

0x8110,	// (0x0007fb89) popup_call2_audio_out_window_t4_ParamLimits

0x8110,	// (0x0007fb89) popup_call2_audio_out_window_t4

0x8126,	// (0x0007fb9f) popup_call2_audio_out_window_t5_ParamLimits

0x8126,	// (0x0007fb9f) popup_call2_audio_out_window_t5

0x0005,

0xf4c9,	// (0x00086f42) popup_call2_audio_out_window_t_ParamLimits

0xf4c9,	// (0x00086f42) popup_call2_audio_out_window_t

0x818a,	// (0x0007fc03) bg_popup_call2_in_pane_ParamLimits

0x818a,	// (0x0007fc03) bg_popup_call2_in_pane

0x81e6,	// (0x0007fc5f) popup_call2_audio_in_window_g1_ParamLimits

0x81e6,	// (0x0007fc5f) popup_call2_audio_in_window_g1

0x821e,	// (0x0007fc97) popup_call2_audio_in_window_g2_ParamLimits

0x821e,	// (0x0007fc97) popup_call2_audio_in_window_g2

0x8256,	// (0x0007fccf) popup_call2_audio_in_window_g3_ParamLimits

0x8256,	// (0x0007fccf) popup_call2_audio_in_window_g3

0x0003,

0xf4d6,	// (0x00086f4f) popup_call2_audio_in_window_g_ParamLimits

0xf4d6,	// (0x00086f4f) popup_call2_audio_in_window_g

0x82ae,	// (0x0007fd27) popup_call2_audio_in_window_t1_ParamLimits

0x82ae,	// (0x0007fd27) popup_call2_audio_in_window_t1

0x832e,	// (0x0007fda7) popup_call2_audio_in_window_t2_ParamLimits

0x832e,	// (0x0007fda7) popup_call2_audio_in_window_t2

0x83ae,	// (0x0007fe27) popup_call2_audio_in_window_t3_ParamLimits

0x83ae,	// (0x0007fe27) popup_call2_audio_in_window_t3

0x83c8,	// (0x0007fe41) popup_call2_audio_in_window_t4_ParamLimits

0x83c8,	// (0x0007fe41) popup_call2_audio_in_window_t4

0x83da,	// (0x0007fe53) popup_call2_audio_in_window_t5_ParamLimits

0x83da,	// (0x0007fe53) popup_call2_audio_in_window_t5

0x83ef,	// (0x0007fe68) popup_call2_audio_in_window_t6_ParamLimits

0x83ef,	// (0x0007fe68) popup_call2_audio_in_window_t6

0x0005,

0xf4df,	// (0x00086f58) popup_call2_audio_in_window_t_ParamLimits

0xf4df,	// (0x00086f58) popup_call2_audio_in_window_t

0xe4c3,	// (0x00085f3c) bg_popup_call2_in_pane_g1

0x85ea,	// (0x00080063) popup_cale_lunar_info_window_t4

0x0003,

0xf55a,	// (0x00086fd3) popup_cale_lunar_info_window_t

0xe4cb,	// (0x00085f44) bg_popup_call2_rect_pane_ParamLimits

0xe4cb,	// (0x00085f44) bg_popup_call2_rect_pane

0xe270,	// (0x00085ce9) call2_cli_visual_graphic_pane

0xe270,	// (0x00085ce9) call2_cli_visual_text_pane

0x8a1c,	// (0x00080495) smil_status_volume_pane_g3

0x0002,

0xe4e3,	// (0x00085f5c) call2_cli_visual_graphic_pane_g1

0xe4e3,	// (0x00085f5c) call2_cli_visual_graphic_pane_g2

0xe4e3,	// (0x00085f5c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ec,	// (0x00086f65) call2_cli_visual_graphic_pane_g

0x8420,	// (0x0007fe99) bg_popup_call2_rect_pane_g1

0xe6b2,	// (0x0008612b) bg_popup_call2_rect_pane_g2

0x8428,	// (0x0007fea1) bg_popup_call2_rect_pane_g3

0x8430,	// (0x0007fea9) bg_popup_call2_rect_pane_g4

0x8438,	// (0x0007feb1) bg_popup_call2_rect_pane_g5

0x8440,	// (0x0007feb9) bg_popup_call2_rect_pane_g6

0x8448,	// (0x0007fec1) bg_popup_call2_rect_pane_g7

0x8450,	// (0x0007fec9) bg_popup_call2_rect_pane_g8

0x8458,	// (0x0007fed1) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f3,	// (0x00086f6c) bg_popup_call2_rect_pane_g

0x8460,	// (0x0007fed9) bg_popup_call2_bubble_pane_g1

0x8468,	// (0x0007fee1) bg_popup_call2_bubble_pane_g2

0x8470,	// (0x0007fee9) bg_popup_call2_bubble_pane_g3

0x8478,	// (0x0007fef1) bg_popup_call2_bubble_pane_g4

0x8480,	// (0x0007fef9) bg_popup_call2_bubble_pane_g5

0x8488,	// (0x0007ff01) bg_popup_call2_bubble_pane_g6

0x8490,	// (0x0007ff09) bg_popup_call2_bubble_pane_g7

0x8498,	// (0x0007ff11) bg_popup_call2_bubble_pane_g8

0x84a0,	// (0x0007ff19) bg_popup_call2_bubble_pane_g9

0x0008,

0xf506,	// (0x00086f7f) bg_popup_call2_bubble_pane_g

0x5cd4,	// (0x0007d74d) aid_cale_week_size_cell_pane

0xe4cb,	// (0x00085f44) aid_cams_cif_uncrop_pane_ParamLimits

0xe4cb,	// (0x00085f44) aid_cams_cif_uncrop_pane

0x63df,	// (0x0007de58) aid_cams_size_cell_ParamLimits

0x63df,	// (0x0007de58) aid_cams_size_cell

0x63eb,	// (0x0007de64) grid_cams_pane_ParamLimits

0x63f7,	// (0x0007de70) linegrid_cams_pane_ParamLimits

0x64b6,	// (0x0007df2f) call_video_pane_t1

0x64d3,	// (0x0007df4c) call_video_pane_t2

0x0001,

0xf1fc,	// (0x00086c75) call_video_pane_t

0x68b5,	// (0x0007e32e) aid_cale_month_size_cell_pane_ParamLimits

0x68b5,	// (0x0007e32e) aid_cale_month_size_cell_pane

0xf59e,	// (0x00087017) smil_status_volume_pane_g

0x8a29,	// (0x000804a2) volume_smil_pane_ParamLimits

0x569c,	// (0x0007d115) aid_popup2_width_pane

0x5be0,	// (0x0007d659) cell_qdial_pane_g4_ParamLimits

0x5be0,	// (0x0007d659) cell_qdial_pane_g4

0x7615,	// (0x0007f08e) aid_blid_cardinal_pane_ParamLimits

0x7621,	// (0x0007f09a) aid_blid_destination_pane_ParamLimits

0x7621,	// (0x0007f09a) aid_blid_destination_pane

0xe4cb,	// (0x00085f44) bg_popup_call_poc_act_pane_ParamLimits

0xe4cb,	// (0x00085f44) bg_popup_call_poc_act_pane

0xe4cb,	// (0x00085f44) bg_popup_call_poc_inact_pane_ParamLimits

0xe4cb,	// (0x00085f44) bg_popup_call_poc_inact_pane

0x84b0,	// (0x0007ff29) bg_popup_call_poc_act_pane_g1

0x84b8,	// (0x0007ff31) bg_popup_call_poc_act_pane_g2

0x84c0,	// (0x0007ff39) bg_popup_call_poc_act_pane_g3

0x8478,	// (0x0007fef1) bg_popup_call_poc_act_pane_g4

0x8480,	// (0x0007fef9) bg_popup_call_poc_act_pane_g5

0x84c8,	// (0x0007ff41) bg_popup_call_poc_act_pane_g6

0x8490,	// (0x0007ff09) bg_popup_call_poc_act_pane_g7

0x84d0,	// (0x0007ff49) bg_popup_call_poc_act_pane_g8

0xe270,	// (0x00085ce9) main_usb_pane

0x882b,	// (0x000802a4) popup_cale_lunar_info_window

0x6758,	// (0x0007e1d1) im_reading_pane_t1_ParamLimits

0x0a9e,	// (0x00078517) list_im_pane_ParamLimits

0x0aaf,	// (0x00078528) scroll_pane_cp07_ParamLimits

0xe270,	// (0x00085ce9) grid_highlight_pane_cp012

0xe4cb,	// (0x00085f44) mup_scale_pane_ParamLimits

0x1e86,	// (0x000798ff) main_usb_pane_g1_ParamLimits

0x1e86,	// (0x000798ff) main_usb_pane_g1

0x8530,	// (0x0007ffa9) main_usb_pane_g2_ParamLimits

0x8530,	// (0x0007ffa9) main_usb_pane_g2

0x0001,

0xf543,	// (0x00086fbc) main_usb_pane_g_ParamLimits

0xf543,	// (0x00086fbc) main_usb_pane_g

0x853c,	// (0x0007ffb5) main_usb_pane_t1_ParamLimits

0x853c,	// (0x0007ffb5) main_usb_pane_t1

0x854e,	// (0x0007ffc7) main_usb_pane_t2_ParamLimits

0x854e,	// (0x0007ffc7) main_usb_pane_t2

0x8560,	// (0x0007ffd9) main_usb_pane_t3_ParamLimits

0x8560,	// (0x0007ffd9) main_usb_pane_t3

0x8572,	// (0x0007ffeb) main_usb_pane_t4_ParamLimits

0x8572,	// (0x0007ffeb) main_usb_pane_t4

0x8584,	// (0x0007fffd) main_usb_pane_t5_ParamLimits

0x8584,	// (0x0007fffd) main_usb_pane_t5

0x8596,	// (0x0008000f) main_usb_pane_t6_ParamLimits

0x8596,	// (0x0008000f) main_usb_pane_t6

0x0005,

0xf548,	// (0x00086fc1) main_usb_pane_t_ParamLimits

0x12b4,	// (0x00078d2d) aid_text_placing

0x75c1,	// (0x0007f03a) main_location2_pane_t1_ParamLimits

0x75d7,	// (0x0007f050) main_location2_pane_t2_ParamLimits

0x75ed,	// (0x0007f066) main_location2_pane_t3_ParamLimits

0x7603,	// (0x0007f07c) main_location2_pane_t4_ParamLimits

0x7603,	// (0x0007f07c) main_location2_pane_t4

0xf34f,	// (0x00086dc8) main_location2_pane_t_ParamLimits

0xe506,	// (0x00085f7f) find_pinb_pane_g2_ParamLimits

0xe506,	// (0x00085f7f) find_pinb_pane_g2

0x0001,

0xf0b4,	// (0x00086b2d) find_pinb_pane_g_ParamLimits

0xf0b4,	// (0x00086b2d) find_pinb_pane_g

0xe512,	// (0x00085f8b) find_pinb_pane_t1_ParamLimits

0xe524,	// (0x00085f9d) find_pinb_pane_t2_ParamLimits

0xf0b9,	// (0x00086b32) find_pinb_pane_t_ParamLimits

0xe270,	// (0x00085ce9) main_call3_pane

0x6c59,	// (0x0007e6d2) cale_month_day_heading_pane_t1_ParamLimits

0x6cdf,	// (0x0007e758) cale_month_day_heading_pane_t2_ParamLimits

0x6d70,	// (0x0007e7e9) cale_month_day_heading_pane_t3_ParamLimits

0x6e01,	// (0x0007e87a) cale_month_day_heading_pane_t4_ParamLimits

0x6e92,	// (0x0007e90b) cale_month_day_heading_pane_t5_ParamLimits

0x6f23,	// (0x0007e99c) cale_month_day_heading_pane_t6_ParamLimits

0x6fb4,	// (0x0007ea2d) cale_month_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00086cad) cale_month_day_heading_pane_t_ParamLimits

0x72d4,	// (0x0007ed4d) smil_status_volume_pane

0x7ae4,	// (0x0007f55d) postcard_address_pane_ParamLimits

0x7ae4,	// (0x0007f55d) postcard_address_pane

0x7af0,	// (0x0007f569) postcard_message_pane_ParamLimits

0x7af0,	// (0x0007f569) postcard_message_pane

0x8404,	// (0x0007fe7d) call2_cli_visual_pane_t1_ParamLimits

0x8404,	// (0x0007fe7d) call2_cli_visual_pane_t1

0x8b7b,	// (0x000805f4) postcard_message_pane_t1_ParamLimits

0x8b7b,	// (0x000805f4) postcard_message_pane_t1

0x8b63,	// (0x000805dc) postcard_address_pane_t1_ParamLimits

0x8b63,	// (0x000805dc) postcard_address_pane_t1

0x8b56,	// (0x000805cf) popup_call3_audio_in_window_ParamLimits

0x8b56,	// (0x000805cf) popup_call3_audio_in_window

0x8a3e,	// (0x000804b7) bg_popup_call3_in_pane_ParamLimits

0x8a3e,	// (0x000804b7) bg_popup_call3_in_pane

0x8a9c,	// (0x00080515) popup_call3_audio_in_window_g1_ParamLimits

0x8a9c,	// (0x00080515) popup_call3_audio_in_window_g1

0x8ab4,	// (0x0008052d) popup_call3_audio_in_window_g2_ParamLimits

0x8ab4,	// (0x0008052d) popup_call3_audio_in_window_g2

0x8acc,	// (0x00080545) popup_call3_audio_in_window_g3_ParamLimits

0x8acc,	// (0x00080545) popup_call3_audio_in_window_g3

0x0003,

0xf5a5,	// (0x0008701e) popup_call3_audio_in_window_g_ParamLimits

0xf5a5,	// (0x0008701e) popup_call3_audio_in_window_g

0x8af4,	// (0x0008056d) popup_call3_audio_in_window_t1_ParamLimits

0x8af4,	// (0x0008056d) popup_call3_audio_in_window_t1

0x8b1c,	// (0x00080595) popup_call3_audio_in_window_t2_ParamLimits

0x8b1c,	// (0x00080595) popup_call3_audio_in_window_t2

0x8b44,	// (0x000805bd) popup_call3_audio_in_window_t3_ParamLimits

0x8b44,	// (0x000805bd) popup_call3_audio_in_window_t3

0x0002,

0xf5ae,	// (0x00087027) popup_call3_audio_in_window_t_ParamLimits

0xf5ae,	// (0x00087027) popup_call3_audio_in_window_t

0x0931,	// (0x000783aa) bg_popup_call3_rect_pane

0x8420,	// (0x0007fe99) bg_popup_call3_rect_pane_g1

0xe6b2,	// (0x0008612b) bg_popup_call3_rect_pane_g2

0x8428,	// (0x0007fea1) bg_popup_call3_rect_pane_g3

0x8430,	// (0x0007fea9) bg_popup_call3_rect_pane_g4

0x8438,	// (0x0007feb1) bg_popup_call3_rect_pane_g5

0x8440,	// (0x0007feb9) bg_popup_call3_rect_pane_g6

0x8448,	// (0x0007fec1) bg_popup_call3_rect_pane_g7

0xde55,	// (0x000858ce) mup_visualizer_osc_pane

0xde55,	// (0x000858ce) mup_visualizer_spec_pane

0x8a5e,	// (0x000804d7) call3_video_qcif_pane_ParamLimits

0x8a5e,	// (0x000804d7) call3_video_qcif_pane

0x8a6e,	// (0x000804e7) call3_video_qcif_uncrop_pane_ParamLimits

0x8a6e,	// (0x000804e7) call3_video_qcif_uncrop_pane

0x8a7a,	// (0x000804f3) call3_video_subqcif_pane_ParamLimits

0x8a7a,	// (0x000804f3) call3_video_subqcif_pane

0x8a8c,	// (0x00080505) call3_video_subqcif_uncrop_pane_ParamLimits

0x8a8c,	// (0x00080505) call3_video_subqcif_uncrop_pane

0x8ae4,	// (0x0008055d) popup_call3_audio_in_window_g4_ParamLimits

0x8ae4,	// (0x0008055d) popup_call3_audio_in_window_g4

0xde55,	// (0x000858ce) mup_spec_half_pane

0xde55,	// (0x000858ce) mup_spec_half_pane_cp

0xde55,	// (0x000858ce) mup_osc_middle_pane

0x09a9,	// (0x00078422) mup_visualizer_osc_pane_g1

0x89cf,	// (0x00080448) mup_spec_bar_pane_ParamLimits

0x89cf,	// (0x00080448) mup_spec_bar_pane

0x09a9,	// (0x00078422) mup_spec_bar_pane_g1

0x09a9,	// (0x00078422) mup_spec_bar_pane_g2

0x0001,

0xf3c9,	// (0x00086e42) mup_spec_bar_pane_g

0x5cd4,	// (0x0007d74d) aid_cale_week_size_cell_pane_ParamLimits

0x5ce9,	// (0x0007d762) bg_cale_heading_pane_ParamLimits

0xe6f0,	// (0x00086169) bg_cale_pane_cp01_ParamLimits

0x5d01,	// (0x0007d77a) cale_week_corner_pane_ParamLimits

0x5d1b,	// (0x0007d794) cale_week_day_heading_pane_ParamLimits

0x5d33,	// (0x0007d7ac) cale_week_scroll_pane_g1_ParamLimits

0x5d46,	// (0x0007d7bf) cale_week_scroll_pane_g2_ParamLimits

0x5d59,	// (0x0007d7d2) cale_week_scroll_pane_g3_ParamLimits

0x5d6c,	// (0x0007d7e5) cale_week_scroll_pane_g4_ParamLimits

0x5d7f,	// (0x0007d7f8) cale_week_scroll_pane_g5_ParamLimits

0x5d92,	// (0x0007d80b) cale_week_scroll_pane_g6_ParamLimits

0x5da5,	// (0x0007d81e) cale_week_scroll_pane_g7_ParamLimits

0x5db8,	// (0x0007d831) cale_week_scroll_pane_g8_ParamLimits

0x5dcb,	// (0x0007d844) cale_week_scroll_pane_g9_ParamLimits

0x5dde,	// (0x0007d857) cale_week_scroll_pane_g10_ParamLimits

0x5df1,	// (0x0007d86a) cale_week_scroll_pane_g11_ParamLimits

0x5e04,	// (0x0007d87d) cale_week_scroll_pane_g12_ParamLimits

0x5e17,	// (0x0007d890) cale_week_scroll_pane_g13_ParamLimits

0x5e2a,	// (0x0007d8a3) cale_week_scroll_pane_g14_ParamLimits

0x5e3d,	// (0x0007d8b6) cale_week_scroll_pane_g15_ParamLimits

0xf145,	// (0x00086bbe) cale_week_scroll_pane_g_ParamLimits

0x5e63,	// (0x0007d8dc) cale_week_time_pane_ParamLimits

0x5e76,	// (0x0007d8ef) grid_cale_week_pane_ParamLimits

0xe70d,	// (0x00086186) listscroll_cale_week_pane_t1

0xe71f,	// (0x00086198) scroll_pane_cp08_ParamLimits

0x690a,	// (0x0007e383) cale_month_corner_pane_ParamLimits

0x0cdf,	// (0x00078758) cale_month_pane_t1

0x6c20,	// (0x0007e699) cale_month_week_pane_ParamLimits

0x1e86,	// (0x000798ff) popup_call_status_window_g1_ParamLimits

0x741b,	// (0x0007ee94) popup_call_status_window_g2_ParamLimits

0x7427,	// (0x0007eea0) popup_call_status_window_g3_ParamLimits

0xf2d6,	// (0x00086d4f) popup_call_status_window_g_ParamLimits

0x10a8,	// (0x00078b21) aid_call2_pane

0x794c,	// (0x0007f3c5) msg_header_pane_g1

0x7ae4,	// (0x0007f55d) postcard_address2_pane_ParamLimits

0x7ae4,	// (0x0007f55d) postcard_address2_pane

0x7af0,	// (0x0007f569) postcard_message2_pane_ParamLimits

0x7af0,	// (0x0007f569) postcard_message2_pane

0x8971,	// (0x000803ea) message2_row_pane_ParamLimits

0x8971,	// (0x000803ea) message2_row_pane

0x8989,	// (0x00080402) address2_row_pane_ParamLimits

0x8989,	// (0x00080402) address2_row_pane

0x899c,	// (0x00080415) postcard_message2_row_pane_g1

0x89a4,	// (0x0008041d) postcard_message2_row_pane_t1

0x899c,	// (0x00080415) address2_row_pane_g1

0x89a4,	// (0x0008041d) address2_row_pane_t1

0xe78e,	// (0x00086207) aid_size_cell_vorec

0xe270,	// (0x00085ce9) main_rss_pane

0x89b2,	// (0x0008042b) rss_list_single_pane_ParamLimits

0x89b2,	// (0x0008042b) rss_list_single_pane

0x89c0,	// (0x00080439) rss_list_single_pane_t1

0x89c0,	// (0x00080439) rss_list_single_pane_t2

0x0001,

0xf599,	// (0x00087012) rss_list_single_pane_t

0xe270,	// (0x00085ce9) main_camera2_pane

0xe270,	// (0x00085ce9) main_video2_pane

0x5872,	// (0x0007d2eb) cams_zoom_pane_cp2_ParamLimits

0x5872,	// (0x0007d2eb) cams_zoom_pane_cp2

0x5872,	// (0x0007d2eb) image2_vga_pane_ParamLimits

0x5872,	// (0x0007d2eb) image2_vga_pane

0x1142,	// (0x00078bbb) main_camera2_pane_g1_ParamLimits

0x1142,	// (0x00078bbb) main_camera2_pane_g1

0x1142,	// (0x00078bbb) main_camera2_pane_g2_ParamLimits

0x1142,	// (0x00078bbb) main_camera2_pane_g2

0x1142,	// (0x00078bbb) main_camera2_pane_g3_ParamLimits

0x1142,	// (0x00078bbb) main_camera2_pane_g3

0x1142,	// (0x00078bbb) main_camera2_pane_g4_ParamLimits

0x1142,	// (0x00078bbb) main_camera2_pane_g4

0x1142,	// (0x00078bbb) main_camera2_pane_g5_ParamLimits

0x1142,	// (0x00078bbb) main_camera2_pane_g5

0x1142,	// (0x00078bbb) main_camera2_pane_g6_ParamLimits

0x1142,	// (0x00078bbb) main_camera2_pane_g6

0x1142,	// (0x00078bbb) main_camera2_pane_g7_ParamLimits

0x1142,	// (0x00078bbb) main_camera2_pane_g7

0x1142,	// (0x00078bbb) main_camera2_pane_g8_ParamLimits

0x1142,	// (0x00078bbb) main_camera2_pane_g8

0x0008,

0xf5b5,	// (0x0008702e) main_camera2_pane_g_ParamLimits

0xf5b5,	// (0x0008702e) main_camera2_pane_g

0x8bcd,	// (0x00080646) main_camera2_pane_t1_ParamLimits

0x8bcd,	// (0x00080646) main_camera2_pane_t1

0x8bcd,	// (0x00080646) main_camera2_pane_t2_ParamLimits

0x8bcd,	// (0x00080646) main_camera2_pane_t2

0x8bcd,	// (0x00080646) main_camera2_pane_t3_ParamLimits

0x8bcd,	// (0x00080646) main_camera2_pane_t3

0x8bcd,	// (0x00080646) main_camera2_pane_t4_ParamLimits

0x8bcd,	// (0x00080646) main_camera2_pane_t4

0x0006,

0xf5c8,	// (0x00087041) main_camera2_pane_t_ParamLimits

0xf5c8,	// (0x00087041) main_camera2_pane_t

0x8bf5,	// (0x0008066e) cams_zoom_pane_cp4_ParamLimits

0x8bf5,	// (0x0008066e) cams_zoom_pane_cp4

0x87d0,	// (0x00080249) image2_cif_pane_ParamLimits

0x87d0,	// (0x00080249) image2_cif_pane

0x5872,	// (0x0007d2eb) image2_subqcif_pane_ParamLimits

0x5872,	// (0x0007d2eb) image2_subqcif_pane

0x8c03,	// (0x0008067c) main_video2_pane_g1_ParamLimits

0x8c03,	// (0x0008067c) main_video2_pane_g1

0x8c03,	// (0x0008067c) main_video2_pane_g2_ParamLimits

0x8c03,	// (0x0008067c) main_video2_pane_g2

0x8c03,	// (0x0008067c) main_video2_pane_g3_ParamLimits

0x8c03,	// (0x0008067c) main_video2_pane_g3

0x8c03,	// (0x0008067c) main_video2_pane_g4_ParamLimits

0x8c03,	// (0x0008067c) main_video2_pane_g4

0x8c03,	// (0x0008067c) main_video2_pane_g5_ParamLimits

0x8c03,	// (0x0008067c) main_video2_pane_g5

0x8c03,	// (0x0008067c) main_video2_pane_g6_ParamLimits

0x8c03,	// (0x0008067c) main_video2_pane_g6

0x0005,

0xf5d7,	// (0x00087050) main_video2_pane_g_ParamLimits

0xf5d7,	// (0x00087050) main_video2_pane_g

0x8c11,	// (0x0008068a) main_video2_pane_t1_ParamLimits

0x8c11,	// (0x0008068a) main_video2_pane_t1

0x8c11,	// (0x0008068a) main_video2_pane_t2_ParamLimits

0x8c11,	// (0x0008068a) main_video2_pane_t2

0x8c11,	// (0x0008068a) main_video2_pane_t3_ParamLimits

0x8c11,	// (0x0008068a) main_video2_pane_t3

0x0002,

0xf5e4,	// (0x0008705d) main_video2_pane_t_ParamLimits

0xf5e4,	// (0x0008705d) main_video2_pane_t

0x8691,	// (0x0008010a) call_muted_g2

0x0001,

0xf58b,	// (0x00087004) call_muted_g

0xe270,	// (0x00085ce9) main_mup2_pane

0xe56f,	// (0x00085fe8) main_mup2_pane_g1_ParamLimits

0xe56f,	// (0x00085fe8) main_mup2_pane_g1

0xe56f,	// (0x00085fe8) main_mup2_pane_g2_ParamLimits

0xe56f,	// (0x00085fe8) main_mup2_pane_g2

0xe796,	// (0x0008620f) main_mup_pane_g13_cp1

0x5888,	// (0x0007d301) mup_volume_pane_cp1

0xe56f,	// (0x00085fe8) main_mup2_pane_g4_ParamLimits

0xe56f,	// (0x00085fe8) main_mup2_pane_g4

0xe56f,	// (0x00085fe8) main_mup2_pane_g5_ParamLimits

0xe56f,	// (0x00085fe8) main_mup2_pane_g5

0xe56f,	// (0x00085fe8) main_mup2_pane_g6_ParamLimits

0xe56f,	// (0x00085fe8) main_mup2_pane_g6

0xe56f,	// (0x00085fe8) main_mup2_pane_g7_ParamLimits

0xe56f,	// (0x00085fe8) main_mup2_pane_g7

0x0006,

0xf5eb,	// (0x00087064) main_mup2_pane_g_ParamLimits

0xf5eb,	// (0x00087064) main_mup2_pane_g

0xe57d,	// (0x00085ff6) main_mup2_pane_t1_ParamLimits

0xe57d,	// (0x00085ff6) main_mup2_pane_t1

0xe57d,	// (0x00085ff6) main_mup2_pane_t2_ParamLimits

0xe57d,	// (0x00085ff6) main_mup2_pane_t2

0xe57d,	// (0x00085ff6) main_mup2_pane_t3_ParamLimits

0xe57d,	// (0x00085ff6) main_mup2_pane_t3

0xe57d,	// (0x00085ff6) main_mup2_pane_t4_ParamLimits

0xe57d,	// (0x00085ff6) main_mup2_pane_t4

0xe57d,	// (0x00085ff6) main_mup2_pane_t5_ParamLimits

0xe57d,	// (0x00085ff6) main_mup2_pane_t5

0xe57d,	// (0x00085ff6) main_mup2_pane_t6_ParamLimits

0xe57d,	// (0x00085ff6) main_mup2_pane_t6

0x0005,

0xf5fa,	// (0x00087073) main_mup2_pane_t_ParamLimits

0xf5fa,	// (0x00087073) main_mup2_pane_t

0x7742,	// (0x0007f1bb) mup2_visualizer_pane_ParamLimits

0x7742,	// (0x0007f1bb) mup2_visualizer_pane

0x7742,	// (0x0007f1bb) mup_progress_pane_cp_ParamLimits

0x7742,	// (0x0007f1bb) mup_progress_pane_cp

0x8d8d,	// (0x00080806) mup_volume_pane_cp_ParamLimits

0x8d8d,	// (0x00080806) mup_volume_pane_cp

0xe545,	// (0x00085fbe) mup2_visualizer_pane_g1_ParamLimits

0xe545,	// (0x00085fbe) mup2_visualizer_pane_g1

0xe553,	// (0x00085fcc) mup2_visualizer_pane_g2_ParamLimits

0xe553,	// (0x00085fcc) mup2_visualizer_pane_g2

0xe553,	// (0x00085fcc) mup2_visualizer_pane_g3_ParamLimits

0xe553,	// (0x00085fcc) mup2_visualizer_pane_g3

0x0002,

0xf0be,	// (0x00086b37) mup2_visualizer_pane_g_ParamLimits

0xf0be,	// (0x00086b37) mup2_visualizer_pane_g

0xe78e,	// (0x00086207) aid_size_cell_fmradio

0x87a4,	// (0x0008021d) aid_height_parent_landcape

0x0b3c,	// (0x000785b5) wml_content_pane_cp

0x0b44,	// (0x000785bd) wml_tabs_pane

0x0b4d,	// (0x000785c6) popup_wml_miniature_window

0x0b55,	// (0x000785ce) scroll_pane_cp021

0x0b69,	// (0x000785e2) wml_content_pane_comp8

0xe270,	// (0x00085ce9) bg_popup_sub_pane_cp05

0x8c3b,	// (0x000806b4) popup_wml_miniature_window_g1

0x8c43,	// (0x000806bc) wml_miniature_view_pane

0x8c4b,	// (0x000806c4) aid_size_wml_view

0x8c53,	// (0x000806cc) wml_miniature_view_pane_g1

0x8c5c,	// (0x000806d5) wml_miniature_view_pane_g2

0x8c65,	// (0x000806de) wml_miniature_view_pane_g3

0x8c6d,	// (0x000806e6) wml_miniature_view_pane_g4

0x8c75,	// (0x000806ee) wml_miniature_view_pane_g5

0x8c7d,	// (0x000806f6) wml_miniature_view_pane_g6

0x8c85,	// (0x000806fe) wml_miniature_view_pane_g7

0x8c8d,	// (0x00080706) wml_miniature_view_pane_g8

0x0007,

0xf607,	// (0x00087080) wml_miniature_view_pane_g

0x8c95,	// (0x0008070e) background_graphic_ParamLimits

0x8c95,	// (0x0008070e) background_graphic

0x8ca1,	// (0x0008071a) wml_tabs_2_pane

0x8caa,	// (0x00080723) wml_tabs_3_pane_ParamLimits

0x8caa,	// (0x00080723) wml_tabs_3_pane

0x8cbc,	// (0x00080735) wml_tabs_4_pane_ParamLimits

0x8cbc,	// (0x00080735) wml_tabs_4_pane

0x8cd2,	// (0x0008074b) wml_tabs_5_pane_ParamLimits

0x8cd2,	// (0x0008074b) wml_tabs_5_pane

0x8cec,	// (0x00080765) wml_tabs_pane_g2_ParamLimits

0x8cec,	// (0x00080765) wml_tabs_pane_g2

0x8d01,	// (0x0008077a) wml_tabs_pane_g3_ParamLimits

0x8d01,	// (0x0008077a) wml_tabs_pane_g3

0x8d16,	// (0x0008078f) wml_tabs_2_active_pane_ParamLimits

0x8d16,	// (0x0008078f) wml_tabs_2_active_pane

0x8d16,	// (0x0008078f) wml_tabs_2_passive_pane_ParamLimits

0x8d16,	// (0x0008078f) wml_tabs_2_passive_pane

0x8d24,	// (0x0008079d) wml_tabs_3_active_pane_cp_ParamLimits

0x8d24,	// (0x0008079d) wml_tabs_3_active_pane_cp

0x8d35,	// (0x000807ae) wml_tabs_3_passive_pane_ParamLimits

0x8d35,	// (0x000807ae) wml_tabs_3_passive_pane

0x8d46,	// (0x000807bf) wml_tabs_3_passive_pane_cp_ParamLimits

0x8d46,	// (0x000807bf) wml_tabs_3_passive_pane_cp

0x8d57,	// (0x000807d0) tabs_4_active_pane

0x8d5f,	// (0x000807d8) tabs_4_passive_pane

0x8d67,	// (0x000807e0) tabs_4_passive_pane_cp

0x8d6f,	// (0x000807e8) tabs_4_passive_pane_cp2

0x84a8,	// (0x0007ff21) aid_height_text

0x7742,	// (0x0007f1bb) mup_volume_cont_pane_ParamLimits

0x7742,	// (0x0007f1bb) mup_volume_cont_pane

0x5938,	// (0x0007d3b1) aid_size_cell_pinb

0xde55,	// (0x000858ce) aid_size_list_pinb

0x7742,	// (0x0007f1bb) mup2_volume_cont_pane_ParamLimits

0x7742,	// (0x0007f1bb) mup2_volume_cont_pane

0x8d77,	// (0x000807f0) mup2_volume_cont_pane_g1_ParamLimits

0x8d77,	// (0x000807f0) mup2_volume_cont_pane_g1

0x56a4,	// (0x0007d11d) aid_size_cell_touch_ParamLimits

0x56a4,	// (0x0007d11d) aid_size_cell_touch

0x5892,	// (0x0007d30b) touch_pane_ParamLimits

0x5892,	// (0x0007d30b) touch_pane

0x5888,	// (0x0007d301) main_rss2_pane

0x8dac,	// (0x00080825) listscroll_rss2_pane

0x8db5,	// (0x0008082e) rss2_navigation_pane

0x8dbd,	// (0x00080836) list_rss2_pane

0x113a,	// (0x00078bb3) scroll_pane_cp22

0x8dc5,	// (0x0008083e) rss2_navigation_pane_g1

0x8dce,	// (0x00080847) rss2_navigation_pane_g2

0x8dd6,	// (0x0008084f) rss2_navigation_pane_g3

0x0002,

0xf618,	// (0x00087091) rss2_navigation_pane_g

0x8dde,	// (0x00080857) rss2_navigation_pane_t1

0x8dec,	// (0x00080865) rss2_list_single_pane_ParamLimits

0x8dec,	// (0x00080865) rss2_list_single_pane

0x8e03,	// (0x0008087c) rss2_list_single_pane_t2

0x8e11,	// (0x0008088a) rss2_list_single_pane_t3_ParamLimits

0x8e11,	// (0x0008088a) rss2_list_single_pane_t3

0x8e2e,	// (0x000808a7) rss2_list_single_pane_t4

0x72be,	// (0x0007ed37) smil_status_pane_g1

0x87d0,	// (0x00080249) main_image2_pane_ParamLimits

0x87d0,	// (0x00080249) main_image2_pane

0x1142,	// (0x00078bbb) main_camera2_pane_g9_ParamLimits

0x1142,	// (0x00078bbb) main_camera2_pane_g9

0x8bcd,	// (0x00080646) main_camera2_pane_t5_ParamLimits

0x8bcd,	// (0x00080646) main_camera2_pane_t5

0x8be1,	// (0x0008065a) main_camera2_pane_t6_ParamLimits

0x8be1,	// (0x0008065a) main_camera2_pane_t6

0x8e3c,	// (0x000808b5) main_image2_pane_g1_ParamLimits

0x8e3c,	// (0x000808b5) main_image2_pane_g1

0x7c90,	// (0x0007f709) smil2_video_pane_ParamLimits

0x7c90,	// (0x0007f709) smil2_video_pane

0x56d4,	// (0x0007d14d) aid_zoom_text_primary_cp

0x5829,	// (0x0007d2a2) popup_preview_fixed_window

0x0a96,	// (0x0007850f) im_reading_pane_g1

0x8b97,	// (0x00080610) cams2_bc_adjust_pane_cp_ParamLimits

0x8b97,	// (0x00080610) cams2_bc_adjust_pane_cp

0x5872,	// (0x0007d2eb) cams2_bc_adjust_pane_ParamLimits

0x5872,	// (0x0007d2eb) cams2_bc_adjust_pane

0xe796,	// (0x0008620f) cams2_bc_adjust_pane_g1

0x5888,	// (0x0007d301) cams2_slider_pane

0xe796,	// (0x0008620f) cams2_slider_pane_g1

0xe796,	// (0x0008620f) cams2_slider_pane_g2

0x0006,

0xf61f,	// (0x00087098) cams2_slider_pane_g

0x597b,	// (0x0007d3f4) calc_display_pane_ParamLimits

0x5993,	// (0x0007d40c) calc_paper_pane_ParamLimits

0x59af,	// (0x0007d428) grid_calc_pane_ParamLimits

0x7499,	// (0x0007ef12) popup_clock_digital_window_t1_ParamLimits

0x1706,	// (0x0007917f) main_image_pane_t1

0x5961,	// (0x0007d3da) aid_size_cell_calc_ParamLimits

0x5961,	// (0x0007d3da) aid_size_cell_calc

0x880b,	// (0x00080284) popup_blid_sat_info2_window_ParamLimits

0x880b,	// (0x00080284) popup_blid_sat_info2_window

0x8e48,	// (0x000808c1) aid_size_cell_blid

0x7742,	// (0x0007f1bb) bg_popup_window_pane_cp07

0x8e65,	// (0x000808de) grid_popup_blid_pane

0x8e6d,	// (0x000808e6) heading_pane_cp05_ParamLimits

0x8e6d,	// (0x000808e6) heading_pane_cp05

0xe804,	// (0x0008627d) cell_popup_blid_pane_ParamLimits

0xe804,	// (0x0008627d) cell_popup_blid_pane

0xe824,	// (0x0008629d) cell_popup_blid_pane_g1

0xe82c,	// (0x000862a5) cell_popup_blid_pane_t1

0x7742,	// (0x0007f1bb) mup2_indicator_pane_ParamLimits

0x7742,	// (0x0007f1bb) mup2_indicator_pane

0xde55,	// (0x000858ce) mup2_visualizer_osc_pane

0x8c25,	// (0x0008069e) mup2_visualizer_spec_pane_ParamLimits

0x8c25,	// (0x0008069e) mup2_visualizer_spec_pane

0xde55,	// (0x000858ce) mup2_spec_half_pane

0xde55,	// (0x000858ce) mup2_spec_half_pane_cp

0xe83a,	// (0x000862b3) mup2_spec_bar_pane_ParamLimits

0xe83a,	// (0x000862b3) mup2_spec_bar_pane

0x09a9,	// (0x00078422) mup2_spec_bar_pane_g1

0xe859,	// (0x000862d2) mup2_spec_bar_pane_g2

0x0001,

0xf645,	// (0x000870be) mup2_spec_bar_pane_g

0xde55,	// (0x000858ce) mup2_osc_middle_pane

0x09a9,	// (0x00078422) mup2_visualizer_osc_pane_g1

0xde7f,	// (0x000858f8) popup_number_entry_window_t1_ParamLimits

0xde92,	// (0x0008590b) popup_number_entry_window_t2_ParamLimits

0xdea4,	// (0x0008591d) popup_number_entry_window_t3_ParamLimits

0x58df,	// (0x0007d358) popup_number_entry_window_t5_ParamLimits

0x58df,	// (0x0007d358) popup_number_entry_window_t5

0xf05f,	// (0x00086ad8) popup_number_entry_window_t_ParamLimits

0xdeb6,	// (0x0008592f) text_title_cp2_ParamLimits

0x79ce,	// (0x0007f447) aid_hotspot_pointer_text2_pane

0x7a60,	// (0x0007f4d9) main_viewer_pane_g9_ParamLimits

0x7a60,	// (0x0007f4d9) main_viewer_pane_g9

0x0cdf,	// (0x00078758) cale_month_pane_t1_ParamLimits

0x0d33,	// (0x000787ac) bg_cale_pane_ParamLimits

0x0d4b,	// (0x000787c4) list_cale_pane_ParamLimits

0x0d5c,	// (0x000787d5) listscroll_cale_day_pane_t1

0x0d6e,	// (0x000787e7) scroll_pane_cp09_ParamLimits

0x7750,	// (0x0007f1c9) main_mup_eq_pane_t1_ParamLimits

0x7750,	// (0x0007f1c9) main_mup_eq_pane_t1

0x7766,	// (0x0007f1df) main_mup_eq_pane_t2_ParamLimits

0x7766,	// (0x0007f1df) main_mup_eq_pane_t2

0x777c,	// (0x0007f1f5) main_mup_eq_pane_t3_ParamLimits

0x777c,	// (0x0007f1f5) main_mup_eq_pane_t3

0x7792,	// (0x0007f20b) main_mup_eq_pane_t4_ParamLimits

0x7792,	// (0x0007f20b) main_mup_eq_pane_t4

0x77a8,	// (0x0007f221) main_mup_eq_pane_t5_ParamLimits

0x77a8,	// (0x0007f221) main_mup_eq_pane_t5

0x77be,	// (0x0007f237) main_mup_eq_pane_t6_ParamLimits

0x77be,	// (0x0007f237) main_mup_eq_pane_t6

0x77d0,	// (0x0007f249) main_mup_eq_pane_t7_ParamLimits

0x77d0,	// (0x0007f249) main_mup_eq_pane_t7

0x77e2,	// (0x0007f25b) main_mup_eq_pane_t8_ParamLimits

0x77e2,	// (0x0007f25b) main_mup_eq_pane_t8

0x77f4,	// (0x0007f26d) main_mup_eq_pane_t9_ParamLimits

0x77f4,	// (0x0007f26d) main_mup_eq_pane_t9

0x780a,	// (0x0007f283) main_mup_eq_pane_t10_ParamLimits

0x780a,	// (0x0007f283) main_mup_eq_pane_t10

0x0009,

0xf3d5,	// (0x00086e4e) main_mup_eq_pane_t_ParamLimits

0xf3d5,	// (0x00086e4e) main_mup_eq_pane_t

0x789d,	// (0x0007f316) mup_equalizer_pane_cp5_ParamLimits

0x78af,	// (0x0007f328) mup_equalizer_pane_cp6_ParamLimits

0x78c1,	// (0x0007f33a) mup_equalizer_pane_cp7_ParamLimits

0x5888,	// (0x0007d301) main_gallery_pane

0x89ee,	// (0x00080467) smil2_volume_pane

0x89f6,	// (0x0008046f) smil_status_volume_pane_g1_ParamLimits

0x8a09,	// (0x00080482) smil_status_volume_pane_g2_ParamLimits

0x8a1c,	// (0x00080495) smil_status_volume_pane_g3_ParamLimits

0xf59e,	// (0x00087017) smil_status_volume_pane_g_ParamLimits

0x7742,	// (0x0007f1bb) bg_popup_window_pane_cp07_ParamLimits

0x8e50,	// (0x000808c9) blid_firmament_pane

0xe561,	// (0x00085fda) aid_size_cell_gallery_ParamLimits

0xe561,	// (0x00085fda) aid_size_cell_gallery

0x8ed1,	// (0x0008094a) grid_gallery_pane_ParamLimits

0x8ed1,	// (0x0008094a) grid_gallery_pane

0x8ee0,	// (0x00080959) cell_gallery_pane_ParamLimits

0x8ee0,	// (0x00080959) cell_gallery_pane

0x0861,	// (0x000782da) bg_cell_gallery_focus_pane_ParamLimits

0x0861,	// (0x000782da) bg_cell_gallery_focus_pane

0xe545,	// (0x00085fbe) cell_gallery_pane_g1_ParamLimits

0xe545,	// (0x00085fbe) cell_gallery_pane_g1

0xe545,	// (0x00085fbe) cell_gallery_pane_g2_ParamLimits

0xe545,	// (0x00085fbe) cell_gallery_pane_g2

0xe545,	// (0x00085fbe) cell_gallery_pane_g3_ParamLimits

0xe545,	// (0x00085fbe) cell_gallery_pane_g3

0xe553,	// (0x00085fcc) cell_gallery_pane_g4_ParamLimits

0xe553,	// (0x00085fcc) cell_gallery_pane_g4

0x0003,

0xf64a,	// (0x000870c3) cell_gallery_pane_g_ParamLimits

0xf64a,	// (0x000870c3) cell_gallery_pane_g

0xe863,	// (0x000862dc) bg_cell_gallery_focus_pane_g1

0xe86b,	// (0x000862e4) bg_cell_gallery_focus_pane_g2

0xe873,	// (0x000862ec) bg_cell_gallery_focus_pane_g3

0xe87b,	// (0x000862f4) bg_cell_gallery_focus_pane_g4

0xe883,	// (0x000862fc) bg_cell_gallery_focus_pane_g5

0xe88b,	// (0x00086304) bg_cell_gallery_focus_pane_g6

0xe893,	// (0x0008630c) bg_cell_gallery_focus_pane_g7

0xe89b,	// (0x00086314) bg_cell_gallery_focus_pane_g8

0x0007,

0xf653,	// (0x000870cc) bg_cell_gallery_focus_pane_g

0xe8a3,	// (0x0008631c) aid_firma_cardinal

0xe8b7,	// (0x00086330) blid_firmament_pane_t1

0xe8ce,	// (0x00086347) blid_firmament_pane_t2

0xe8e5,	// (0x0008635e) blid_firmament_pane_t3

0xe8fc,	// (0x00086375) blid_firmament_pane_t4

0x0003,

0xf664,	// (0x000870dd) blid_firmament_pane_t

0xe913,	// (0x0008638c) blid_sat_info_pane

0x09a9,	// (0x00078422) blid_sat_info_pane_g1

0x09a9,	// (0x00078422) blid_sat_info_pane_g2

0x0001,

0xf3c9,	// (0x00086e42) blid_sat_info_pane_g

0xe923,	// (0x0008639c) blid_sat_info_pane_t1

0xe931,	// (0x000863aa) smil2_volume_content_pane

0xe93a,	// (0x000863b3) smil2_volume_pane_g1

0xe942,	// (0x000863bb) smil2_volume_content_pane_g1

0xe94b,	// (0x000863c4) smil2_volume_content_pane_g2

0xe954,	// (0x000863cd) smil2_volume_content_pane_g3

0xe95d,	// (0x000863d6) smil2_volume_content_pane_g4

0xe966,	// (0x000863df) smil2_volume_content_pane_g5

0xe96f,	// (0x000863e8) smil2_volume_content_pane_g6

0xe978,	// (0x000863f1) smil2_volume_content_pane_g7

0xe981,	// (0x000863fa) smil2_volume_content_pane_g8

0xe98a,	// (0x00086403) smil2_volume_content_pane_g9

0xe993,	// (0x0008640c) smil2_volume_content_pane_g10

0x0009,

0xf66d,	// (0x000870e6) smil2_volume_content_pane_g

0x5ed9,	// (0x0007d952) cale_week_day_heading_pane_t1_ParamLimits

0x5f14,	// (0x0007d98d) cale_week_day_heading_pane_t2_ParamLimits

0x5f4f,	// (0x0007d9c8) cale_week_day_heading_pane_t3_ParamLimits

0x5f8a,	// (0x0007da03) cale_week_day_heading_pane_t4_ParamLimits

0x5fc5,	// (0x0007da3e) cale_week_day_heading_pane_t5_ParamLimits

0x6000,	// (0x0007da79) cale_week_day_heading_pane_t6_ParamLimits

0x603b,	// (0x0007dab4) cale_week_day_heading_pane_t7_ParamLimits

0xf166,	// (0x00086bdf) cale_week_day_heading_pane_t_ParamLimits

0xe73c,	// (0x000861b5) bg_cale_side_pane_ParamLimits

0x6076,	// (0x0007daef) cale_week_time_pane_t1_ParamLimits

0x60b0,	// (0x0007db29) cale_week_time_pane_t2_ParamLimits

0x60ea,	// (0x0007db63) cale_week_time_pane_t3_ParamLimits

0x6124,	// (0x0007db9d) cale_week_time_pane_t4_ParamLimits

0x615e,	// (0x0007dbd7) cale_week_time_pane_t5_ParamLimits

0x6198,	// (0x0007dc11) cale_week_time_pane_t6_ParamLimits

0x61d2,	// (0x0007dc4b) cale_week_time_pane_t7_ParamLimits

0x620c,	// (0x0007dc85) cale_week_time_pane_t8_ParamLimits

0xf175,	// (0x00086bee) cale_week_time_pane_t_ParamLimits

0x6246,	// (0x0007dcbf) cell_cale_week_pane_g2_ParamLimits

0xe73c,	// (0x000861b5) bg_cale_side_pane_cp01_ParamLimits

0x7045,	// (0x0007eabe) cale_month_week_pane_t1_ParamLimits

0x707e,	// (0x0007eaf7) cale_month_week_pane_t2_ParamLimits

0x70b7,	// (0x0007eb30) cale_month_week_pane_t3_ParamLimits

0x70f0,	// (0x0007eb69) cale_month_week_pane_t4_ParamLimits

0x7129,	// (0x0007eba2) cale_month_week_pane_t5_ParamLimits

0x7162,	// (0x0007ebdb) cale_month_week_pane_t6_ParamLimits

0xf243,	// (0x00086cbc) cale_month_week_pane_t_ParamLimits

0x7289,	// (0x0007ed02) cell_cale_month_pane_g1_ParamLimits

0x5888,	// (0x0007d301) main_cale_event_viewer_pane

0xde55,	// (0x000858ce) listscroll_cale_event_viewer_pane

0xe99c,	// (0x00086415) list_cale_ev_pane

0xe9a4,	// (0x0008641d) scroll_pane_cp023

0x8efc,	// (0x00080975) field_cale_ev_pane_ParamLimits

0x8efc,	// (0x00080975) field_cale_ev_pane

0xe9b0,	// (0x00086429) field_cale_ev_content_pane_ParamLimits

0xe9b0,	// (0x00086429) field_cale_ev_content_pane

0xe9bc,	// (0x00086435) field_cale_ev_pane_g1_ParamLimits

0xe9bc,	// (0x00086435) field_cale_ev_pane_g1

0xe9c8,	// (0x00086441) field_cale_ev_pane_g2_ParamLimits

0xe9c8,	// (0x00086441) field_cale_ev_pane_g2

0xe9e0,	// (0x00086459) field_cale_ev_pane_g3_ParamLimits

0xe9e0,	// (0x00086459) field_cale_ev_pane_g3

0x0002,

0xf682,	// (0x000870fb) field_cale_ev_pane_g_ParamLimits

0xf682,	// (0x000870fb) field_cale_ev_pane_g

0xe9f8,	// (0x00086471) field_cale_ev_pane_t1_ParamLimits

0xe9f8,	// (0x00086471) field_cale_ev_pane_t1

0x8f16,	// (0x0008098f) field_cale_ev_content_pane_t1_ParamLimits

0x8f16,	// (0x0008098f) field_cale_ev_content_pane_t1

0x1594,	// (0x0007900d) bg_button_pane_cp01

0x5cc4,	// (0x0007d73d) listscroll_cale_week_pane_ParamLimits

0xe6e7,	// (0x00086160) popup_toolbar_window_cp01

0xe70d,	// (0x00086186) listscroll_cale_week_pane_t1_ParamLimits

0x5cc4,	// (0x0007d73d) listscroll_cale_day_pane_ParamLimits

0xe6e7,	// (0x00086160) popup_toolbar_window_cp02

0x0d5c,	// (0x000787d5) listscroll_cale_day_pane_t1_ParamLimits

0x5cc4,	// (0x0007d73d) main_cale_month_pane_ParamLimits

0x88de,	// (0x00080357) popup_toolbar_window_cp03_ParamLimits

0x88de,	// (0x00080357) popup_toolbar_window_cp03

0x7bb8,	// (0x0007f631) main_image_pane_g2_ParamLimits

0x7bb8,	// (0x0007f631) main_image_pane_g2

0x7bc4,	// (0x0007f63d) main_image_pane_g3_ParamLimits

0x7bc4,	// (0x0007f63d) main_image_pane_g3

0x0002,

0xf467,	// (0x00086ee0) main_image_pane_g_ParamLimits

0xf467,	// (0x00086ee0) main_image_pane_g

0x1706,	// (0x0007917f) main_image_pane_t1_ParamLimits

0x7bd0,	// (0x0007f649) main_image_pane_t2_ParamLimits

0x7bd0,	// (0x0007f649) main_image_pane_t2

0x7be2,	// (0x0007f65b) main_image_pane_t3_ParamLimits

0x7be2,	// (0x0007f65b) main_image_pane_t3

0x7bf4,	// (0x0007f66d) main_image_pane_t4_ParamLimits

0x7bf4,	// (0x0007f66d) main_image_pane_t4

0x0003,

0xf46e,	// (0x00086ee7) main_image_pane_t_ParamLimits

0xf46e,	// (0x00086ee7) main_image_pane_t

0x7c06,	// (0x0007f67f) popup_image_details_window_cp01

0x7c0e,	// (0x0007f687) popup_toobar_trans_pane_cp01_ParamLimits

0x7c0e,	// (0x0007f687) popup_toobar_trans_pane_cp01

0x8852,	// (0x000802cb) popup_image_details_window_ParamLimits

0x8852,	// (0x000802cb) popup_image_details_window

0x885e,	// (0x000802d7) popup_image_focus_window

0x5872,	// (0x0007d2eb) camera2_autofocus_pane_ParamLimits

0x5872,	// (0x0007d2eb) camera2_autofocus_pane

0xde55,	// (0x000858ce) bg_popup_sub_pane_cp06

0xea0f,	// (0x00086488) popup_image_focus_window_g1

0xea17,	// (0x00086490) popup_image_focus_window_g2

0xea1f,	// (0x00086498) popup_image_focus_window_g3

0xea27,	// (0x000864a0) popup_image_focus_window_g4

0x0003,

0xf689,	// (0x00087102) popup_image_focus_window_g

0xea2f,	// (0x000864a8) popup_image_focus_window_t1

0xea3d,	// (0x000864b6) popup_image_focus_window_t2

0xea4c,	// (0x000864c5) popup_image_focus_window_t3

0x0002,

0xf692,	// (0x0008710b) popup_image_focus_window_t

0xe545,	// (0x00085fbe) camera2_autofocus_pane_g1

0x0861,	// (0x000782da) bg_tb_trans_pane_cp01

0xea5a,	// (0x000864d3) popup_image_details_window_g1

0xea6d,	// (0x000864e6) popup_image_details_window_g2

0x0002,

0xf6a4,	// (0x0008711d) popup_image_details_window_g

0xea96,	// (0x0008650f) popup_image_details_window_t1

0xeaa8,	// (0x00086521) popup_image_details_window_t2

0xeac1,	// (0x0008653a) popup_image_details_window_t3

0xead5,	// (0x0008654e) popup_image_details_window_t4

0xeaf0,	// (0x00086569) popup_image_details_window_t5

0x0004,

0xf6ab,	// (0x00087124) popup_image_details_window_t

0xe5b1,	// (0x0008602a) bg_calc_paper_pane_ParamLimits

0x5888,	// (0x0007d301) grid_highlight_pane_cp013

0x5a94,	// (0x0007d50d) list_calc_pane_ParamLimits

0x5aa6,	// (0x0007d51f) scroll_pane_cp024

0xe5c9,	// (0x00086042) bg_calc_display_pane_ParamLimits

0x5aae,	// (0x0007d527) calc_display_pane_t1_ParamLimits

0x5ac3,	// (0x0007d53c) calc_display_pane_t2_ParamLimits

0x5ad8,	// (0x0007d551) calc_display_pane_t3_ParamLimits

0xf0e6,	// (0x00086b5f) calc_display_pane_t_ParamLimits

0x5b8e,	// (0x0007d607) cell_calc_pane_g2

0x0001,

0xf103,	// (0x00086b7c) cell_calc_pane_g

0x5b97,	// (0x0007d610) cell_calc_pane_t1

0xe61e,	// (0x00086097) grid_highlight_pane_cp02_ParamLimits

0xe634,	// (0x000860ad) toolbar_button_pane_cp01_ParamLimits

0xe634,	// (0x000860ad) toolbar_button_pane_cp01

0x174b,	// (0x000791c4) temp_image_control_pane_ParamLimits

0x174b,	// (0x000791c4) temp_image_control_pane

0x87d0,	// (0x00080249) main_mp3_pane

0xeb0a,	// (0x00086583) temp_image_control_pane_g1_ParamLimits

0xeb0a,	// (0x00086583) temp_image_control_pane_g1

0xeb18,	// (0x00086591) temp_image_control_pane_g2_ParamLimits

0xeb18,	// (0x00086591) temp_image_control_pane_g2

0xeb2a,	// (0x000865a3) temp_image_control_pane_g3_ParamLimits

0xeb2a,	// (0x000865a3) temp_image_control_pane_g3

0x8f30,	// (0x000809a9) temp_image_control_pane_g4_ParamLimits

0x8f30,	// (0x000809a9) temp_image_control_pane_g4

0x0003,

0xf6b6,	// (0x0008712f) temp_image_control_pane_g_ParamLimits

0xf6b6,	// (0x0008712f) temp_image_control_pane_g

0xeb0a,	// (0x00086583) main_mp3_pane_g1

0x8f41,	// (0x000809ba) main_mp3_pane_g2

0x0007,

0xf6bf,	// (0x00087138) main_mp3_pane_g

0xeb5f,	// (0x000865d8) main_mp3_pane_t1

0xe553,	// (0x00085fcc) main_camera_pane_g8_ParamLimits

0xe553,	// (0x00085fcc) main_camera_pane_g8

0x6397,	// (0x0007de10) main_video_pane_g7_ParamLimits

0x6397,	// (0x0007de10) main_video_pane_g7

0x8bcd,	// (0x00080646) main_camera2_pane_t7_ParamLimits

0x8bcd,	// (0x00080646) main_camera2_pane_t7

0x0afc,	// (0x00078575) scroll_pane_cp025_ParamLimits

0x0afc,	// (0x00078575) scroll_pane_cp025

0x0b10,	// (0x00078589) scroll_pane_cp026_ParamLimits

0x0b10,	// (0x00078589) scroll_pane_cp026

0x0b1f,	// (0x00078598) wml_content_pane_ParamLimits

0x5888,	// (0x0007d301) main_touch_calib_pane

0x8fd9,	// (0x00080a52) main_touch_calib_pane_g1

0x8fe5,	// (0x00080a5e) main_touch_calib_pane_g2

0x8ff1,	// (0x00080a6a) main_touch_calib_pane_g3

0x8ffd,	// (0x00080a76) main_touch_calib_pane_g4

0x0003,

0xf6dd,	// (0x00087156) main_touch_calib_pane_g

0x9009,	// (0x00080a82) main_touch_calib_pane_t1

0x901e,	// (0x00080a97) main_touch_calib_pane_t2

0x0004,

0xf6e6,	// (0x0008715f) main_touch_calib_pane_t

0x12ed,	// (0x00078d66) mup_progress_pane_cp02

0x1322,	// (0x00078d9b) navi_pane_g1

0x13ad,	// (0x00078e26) navi_pane_mp_t3

0x87d0,	// (0x00080249) main_mp3_pane_ParamLimits

0x892c,	// (0x000803a5) navi_pane_ParamLimits

0xeb0a,	// (0x00086583) main_mp3_pane_g1_ParamLimits

0x8f41,	// (0x000809ba) main_mp3_pane_g2_ParamLimits

0x8f4d,	// (0x000809c6) main_mp3_pane_g3_ParamLimits

0x8f4d,	// (0x000809c6) main_mp3_pane_g3

0x8f59,	// (0x000809d2) main_mp3_pane_g4_ParamLimits

0x8f59,	// (0x000809d2) main_mp3_pane_g4

0xe545,	// (0x00085fbe) main_mp3_pane_g5_ParamLimits

0xe545,	// (0x00085fbe) main_mp3_pane_g5

0xeb3a,	// (0x000865b3) main_mp3_pane_g6_ParamLimits

0xeb3a,	// (0x000865b3) main_mp3_pane_g6

0xeb47,	// (0x000865c0) main_mp3_pane_g7_ParamLimits

0xeb47,	// (0x000865c0) main_mp3_pane_g7

0xeb53,	// (0x000865cc) main_mp3_pane_g8_ParamLimits

0xeb53,	// (0x000865cc) main_mp3_pane_g8

0xf6bf,	// (0x00087138) main_mp3_pane_g_ParamLimits

0x8f65,	// (0x000809de) main_mp3_pane_t2

0x8f73,	// (0x000809ec) main_mp3_pane_t3

0xeb6d,	// (0x000865e6) main_mp3_pane_t4

0xeb7b,	// (0x000865f4) main_mp3_pane_t5

0x0005,

0xf6d0,	// (0x00087149) main_mp3_pane_t

0xeb89,	// (0x00086602) mup_progress_pane_cp01

0x56d4,	// (0x0007d14d) aid_zoom_text_secondary2

0xe99c,	// (0x00086415) list_cale_ev2_pane

0xe9a4,	// (0x0008641d) scroll_pane_cp023_ParamLimits

0x9069,	// (0x00080ae2) field_cale_ev2_pane_ParamLimits

0x9069,	// (0x00080ae2) field_cale_ev2_pane

0x2190,	// (0x00079c09) field_cale_ev2_pane_g1_ParamLimits

0x2190,	// (0x00079c09) field_cale_ev2_pane_g1

0x219c,	// (0x00079c15) field_cale_ev2_pane_g2_ParamLimits

0x219c,	// (0x00079c15) field_cale_ev2_pane_g2

0x21b4,	// (0x00079c2d) field_cale_ev2_pane_g3_ParamLimits

0x21b4,	// (0x00079c2d) field_cale_ev2_pane_g3

0x0003,

0xf6f1,	// (0x0008716a) field_cale_ev2_pane_g_ParamLimits

0xf6f1,	// (0x0008716a) field_cale_ev2_pane_g

0x21d8,	// (0x00079c51) field_cale_ev2_pane_t1_ParamLimits

0x21d8,	// (0x00079c51) field_cale_ev2_pane_t1

0x21ef,	// (0x00079c68) field_cale_ev2_pane_t2_ParamLimits

0x21ef,	// (0x00079c68) field_cale_ev2_pane_t2

0x0001,

0xf6fa,	// (0x00087173) field_cale_ev2_pane_t_ParamLimits

0xf6fa,	// (0x00087173) field_cale_ev2_pane_t

0x7ab4,	// (0x0007f52d) main_postcard_pane_g5_ParamLimits

0x7ab4,	// (0x0007f52d) main_postcard_pane_g5

0x7ac0,	// (0x0007f539) main_postcard_pane_g6_ParamLimits

0x7ac0,	// (0x0007f539) main_postcard_pane_g6

0xe561,	// (0x00085fda) camera2_autofocus_pane_cp_ParamLimits

0xe561,	// (0x00085fda) camera2_autofocus_pane_cp

0x87d0,	// (0x00080249) main_mup3_pane

0x90b8,	// (0x00080b31) main_mup3_pane_g1_ParamLimits

0x90b8,	// (0x00080b31) main_mup3_pane_g1

0x90d9,	// (0x00080b52) main_mup3_pane_g2_ParamLimits

0x90d9,	// (0x00080b52) main_mup3_pane_g2

0x9146,	// (0x00080bbf) main_mup3_pane_g3_ParamLimits

0x9146,	// (0x00080bbf) main_mup3_pane_g3

0x9181,	// (0x00080bfa) main_mup3_pane_g4_ParamLimits

0x9181,	// (0x00080bfa) main_mup3_pane_g4

0x91bc,	// (0x00080c35) main_mup3_pane_g5_ParamLimits

0x91bc,	// (0x00080c35) main_mup3_pane_g5

0x91f7,	// (0x00080c70) main_mup3_pane_g6_ParamLimits

0x91f7,	// (0x00080c70) main_mup3_pane_g6

0xe553,	// (0x00085fcc) main_mup3_pane_g7_ParamLimits

0xe553,	// (0x00085fcc) main_mup3_pane_g7

0x0007,

0xf70a,	// (0x00087183) main_mup3_pane_g_ParamLimits

0xf70a,	// (0x00087183) main_mup3_pane_g

0x9265,	// (0x00080cde) main_mup3_pane_t1_ParamLimits

0x9265,	// (0x00080cde) main_mup3_pane_t1

0x92c6,	// (0x00080d3f) main_mup3_pane_t2_ParamLimits

0x92c6,	// (0x00080d3f) main_mup3_pane_t2

0x9381,	// (0x00080dfa) main_mup3_pane_t4_ParamLimits

0x9381,	// (0x00080dfa) main_mup3_pane_t4

0x93c7,	// (0x00080e40) main_mup3_pane_t5_ParamLimits

0x93c7,	// (0x00080e40) main_mup3_pane_t5

0x946b,	// (0x00080ee4) main_mup3_pane_t6_ParamLimits

0x946b,	// (0x00080ee4) main_mup3_pane_t6

0x0005,

0xf71b,	// (0x00087194) main_mup3_pane_t_ParamLimits

0xf71b,	// (0x00087194) main_mup3_pane_t

0x9513,	// (0x00080f8c) mup3_progress_pane_ParamLimits

0x9513,	// (0x00080f8c) mup3_progress_pane

0x9577,	// (0x00080ff0) popup_mup3_control_window_ParamLimits

0x9577,	// (0x00080ff0) popup_mup3_control_window

0xeb91,	// (0x0008660a) popup_mup3_text_window

0x9590,	// (0x00081009) mup3_progress_pane_t1

0x95ae,	// (0x00081027) mup3_progress_pane_t2

0xeb99,	// (0x00086612) mup3_progress_pane_t3

0x0002,

0xf728,	// (0x000871a1) mup3_progress_pane_t

0xebb6,	// (0x0008662f) mup_progress_pane_cp03

0xde55,	// (0x000858ce) bg_tb_trans_pane_cp04

0x95cc,	// (0x00081045) mup3_volume_pane

0x95d4,	// (0x0008104d) popup_mup3_control_window_g1

0x95dd,	// (0x00081056) mup3_volume_pane_g1

0x95e6,	// (0x0008105f) mup3_volume_pane_g2

0x95ef,	// (0x00081068) mup3_volume_pane_g3

0x0002,

0xf72f,	// (0x000871a8) mup3_volume_pane_g

0xde55,	// (0x000858ce) bg_tb_trans_pane_cp03

0xebc6,	// (0x0008663f) popup_mup3_text_window_g1

0xebce,	// (0x00086647) popup_mup3_text_window_t1

0xe611,	// (0x0008608a) list_calc_item_pane_g1_ParamLimits

0x8da3,	// (0x0008081c) mup_volume_pane_cp_g1

0x9033,	// (0x00080aac) main_touch_calib_pane_t3

0x9045,	// (0x00080abe) main_touch_calib_pane_t4

0x9057,	// (0x00080ad0) main_touch_calib_pane_t5

0x5694,	// (0x0007d10d) aid_cell_size_toolbar2

0x569c,	// (0x0007d115) aid_popup3_width_pane

0x5545,	// (0x0007cfbe) aid_zoom_text_msg_primary

0x0963,	// (0x000783dc) vorec_t7

0xe5d5,	// (0x0008604e) bg_calc_paper_pane_g1_ParamLimits

0xe5e1,	// (0x0008605a) bg_calc_paper_pane_g2_ParamLimits

0xe5ed,	// (0x00086066) bg_calc_paper_pane_g3_ParamLimits

0xe5f9,	// (0x00086072) bg_calc_paper_pane_g4_ParamLimits

0xe605,	// (0x0008607e) bg_calc_paper_pane_g5_ParamLimits

0x5b11,	// (0x0007d58a) bg_calc_paper_pane_g6_ParamLimits

0x5b20,	// (0x0007d599) bg_calc_paper_pane_g7_ParamLimits

0x5b2f,	// (0x0007d5a8) bg_calc_paper_pane_g8_ParamLimits

0xf0ed,	// (0x00086b66) bg_calc_paper_pane_g_ParamLimits

0x5b3e,	// (0x0007d5b7) calc_bg_paper_pane_g9_ParamLimits

0xe561,	// (0x00085fda) image_qvga_pane_ParamLimits

0xe561,	// (0x00085fda) image_qvga_pane

0xe4cb,	// (0x00085f44) bg_popup_sub_pane_cp04_ParamLimits

0x1682,	// (0x000790fb) popup_mup_playback_window_g1_ParamLimits

0x168e,	// (0x00079107) popup_mup_playback_window_t1_ParamLimits

0x16a3,	// (0x0007911c) popup_mup_playback_window_t2_ParamLimits

0xf462,	// (0x00086edb) popup_mup_playback_window_t_ParamLimits

0xe545,	// (0x00085fbe) main_mup2_pane_g3_ParamLimits

0xe545,	// (0x00085fbe) main_mup2_pane_g3

0x655a,	// (0x0007dfd3) popup_toolbar_window_cp04

0x1a7c,	// (0x000794f5) popup_call2_audio_second_window_g3_ParamLimits

0x1a7c,	// (0x000794f5) popup_call2_audio_second_window_g3

0x1e94,	// (0x0007990d) popup_call2_audio_first_window_g4_ParamLimits

0x1e94,	// (0x0007990d) popup_call2_audio_first_window_g4

0x828e,	// (0x0007fd07) popup_call2_audio_in_window_g4_ParamLimits

0x828e,	// (0x0007fd07) popup_call2_audio_in_window_g4

0x7bab,	// (0x0007f624) aid_area_sk_bg_cut_ParamLimits

0x7bab,	// (0x0007f624) aid_area_sk_bg_cut

0x16b8,	// (0x00079131) aid_area_sk_bg_cut_2_ParamLimits

0x16b8,	// (0x00079131) aid_area_sk_bg_cut_2

0xde55,	// (0x000858ce) aid_placing_details_win

0xde55,	// (0x000858ce) aid_placing_details_win_2

0xe545,	// (0x00085fbe) camera2_autofocus_pane_g1_ParamLimits

0x581c,	// (0x0007d295) popup_fixed_preview_cale_window_ParamLimits

0x581c,	// (0x0007d295) popup_fixed_preview_cale_window

0x143e,	// (0x00078eb7) navi_slider_pane_g3

0x1435,	// (0x00078eae) navi_slider_pane_g4

0x142c,	// (0x00078ea5) navi_slider_pane_g5

0x143e,	// (0x00078eb7) navi_slider_pane_g6

0x7716,	// (0x0007f18f) navi_slider_pane_g7

0x1559,	// (0x00078fd2) mup_scale_pane_g3

0x1562,	// (0x00078fdb) mup_scale_pane_g4

0x156b,	// (0x00078fe4) mup_scale_pane_g5

0x78d3,	// (0x0007f34c) mup_scale_pane_g6

0x78dc,	// (0x0007f355) mup_scale_pane_g7

0xe796,	// (0x0008620f) cams2_slider_pane_g3

0xe796,	// (0x0008620f) cams2_slider_pane_g4

0xe796,	// (0x0008620f) cams2_slider_pane_g5

0xe796,	// (0x0008620f) cams2_slider_pane_g6

0xe796,	// (0x0008620f) cams2_slider_pane_g7

0x09a9,	// (0x00078422) camera2_autofocus_pane_cp_g1

0x87b6,	// (0x0008022f) bg_popup_preview_window_pane_cp02_ParamLimits

0x87b6,	// (0x0008022f) bg_popup_preview_window_pane_cp02

0xebdc,	// (0x00086655) list_fp_cale_pane_ParamLimits

0xebdc,	// (0x00086655) list_fp_cale_pane

0xebe8,	// (0x00086661) popup_fixed_preview_cale_window_t1_ParamLimits

0xebe8,	// (0x00086661) popup_fixed_preview_cale_window_t1

0x95f8,	// (0x00081071) popup_fixed_preview_cale_window_t2_ParamLimits

0x95f8,	// (0x00081071) popup_fixed_preview_cale_window_t2

0x960d,	// (0x00081086) popup_fixed_preview_cale_window_t3_ParamLimits

0x960d,	// (0x00081086) popup_fixed_preview_cale_window_t3

0x0002,

0xf736,	// (0x000871af) popup_fixed_preview_cale_window_t_ParamLimits

0xf736,	// (0x000871af) popup_fixed_preview_cale_window_t

0x9622,	// (0x0008109b) list_single_fp_cale_pane_ParamLimits

0x9622,	// (0x0008109b) list_single_fp_cale_pane

0xec06,	// (0x0008667f) list_single_fp_cale_pane_g1_ParamLimits

0xec06,	// (0x0008667f) list_single_fp_cale_pane_g1

0xec12,	// (0x0008668b) list_single_fp_cale_pane_g2_ParamLimits

0xec12,	// (0x0008668b) list_single_fp_cale_pane_g2

0x0002,

0xf73d,	// (0x000871b6) list_single_fp_cale_pane_g_ParamLimits

0xf73d,	// (0x000871b6) list_single_fp_cale_pane_g

0xec2b,	// (0x000866a4) list_single_fp_cale_pane_t1_ParamLimits

0xec2b,	// (0x000866a4) list_single_fp_cale_pane_t1

0xec3d,	// (0x000866b6) list_single_fp_cale_pane_t2_ParamLimits

0xec3d,	// (0x000866b6) list_single_fp_cale_pane_t2

0x0001,

0xf744,	// (0x000871bd) list_single_fp_cale_pane_t_ParamLimits

0xf744,	// (0x000871bd) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5888,	// (0x0007d301) main_dialer_pane

0x9632,	// (0x000810ab) aid_cell_size_keypad

0xde55,	// (0x000858ce) dialer_ne_pane

0xde55,	// (0x000858ce) grid_dialer_command_1_pane

0xde55,	// (0x000858ce) grid_dialer_command_2_pane

0xde55,	// (0x000858ce) grid_dialer_keypad_pane

0x7742,	// (0x0007f1bb) bg_popup_call_pane_cp06_ParamLimits

0x7742,	// (0x0007f1bb) bg_popup_call_pane_cp06

0x7742,	// (0x0007f1bb) dialer_ne_clear_pane_ParamLimits

0x7742,	// (0x0007f1bb) dialer_ne_clear_pane

0x09a9,	// (0x00078422) dialer_ne_pane_g1

0x14e3,	// (0x00078f5c) dialer_ne_pane_t1_ParamLimits

0x14e3,	// (0x00078f5c) dialer_ne_pane_t1

0xec70,	// (0x000866e9) dialer_ne_pane_t2_ParamLimits

0xec70,	// (0x000866e9) dialer_ne_pane_t2

0x963c,	// (0x000810b5) dialer_ne_pane_t3_ParamLimits

0x963c,	// (0x000810b5) dialer_ne_pane_t3

0x0002,

0xf749,	// (0x000871c2) dialer_ne_pane_t_ParamLimits

0xf749,	// (0x000871c2) dialer_ne_pane_t

0x963c,	// (0x000810b5) dialer_ne_pane_t3_copy1_ParamLimits

0x963c,	// (0x000810b5) dialer_ne_pane_t3_copy1

0x965e,	// (0x000810d7) cell_dialer_keypad_pane_ParamLimits

0x965e,	// (0x000810d7) cell_dialer_keypad_pane

0x9673,	// (0x000810ec) cell_dialer_command_1_pane_ParamLimits

0x9673,	// (0x000810ec) cell_dialer_command_1_pane

0x9684,	// (0x000810fd) cell_dialer_command_2_pane_ParamLimits

0x9684,	// (0x000810fd) cell_dialer_command_2_pane

0x0861,	// (0x000782da) bg_button_pane_cp02_ParamLimits

0x0861,	// (0x000782da) bg_button_pane_cp02

0xe545,	// (0x00085fbe) cell_dialer_keypad_pane_g1_ParamLimits

0xe545,	// (0x00085fbe) cell_dialer_keypad_pane_g1

0x0861,	// (0x000782da) bg_button_pane_cp03_ParamLimits

0x0861,	// (0x000782da) bg_button_pane_cp03

0xe545,	// (0x00085fbe) cell_dialer_command_1_pane_g1_ParamLimits

0xe545,	// (0x00085fbe) cell_dialer_command_1_pane_g1

0xde55,	// (0x000858ce) bg_button_pane_cp04

0x09a9,	// (0x00078422) cell_dialer_command_2_pane_g1

0xde55,	// (0x000858ce) bg_button_pane_cp06

0x09a9,	// (0x00078422) dialer_ne_clear_pane_g1

0x132e,	// (0x00078da7) navi_pane_g2

0x76be,	// (0x0007f137) navi_pane_g3

0x0002,

0xf365,	// (0x00086dde) navi_pane_g

0x13bb,	// (0x00078e34) navi_pane_mv_g2

0x13e2,	// (0x00078e5b) navi_pane_mv_g5

0x76db,	// (0x0007f154) navi_pane_mv_t1

0xe5c9,	// (0x00086042) main_clock2_pane

0x96c7,	// (0x00081140) main_clock2_list_pane_ParamLimits

0x96c7,	// (0x00081140) main_clock2_list_pane

0x96ed,	// (0x00081166) main_clock2_pane_t1_ParamLimits

0x96ed,	// (0x00081166) main_clock2_pane_t1

0x970d,	// (0x00081186) main_clock2_pane_t2_ParamLimits

0x970d,	// (0x00081186) main_clock2_pane_t2

0x0004,

0xf755,	// (0x000871ce) main_clock2_pane_t_ParamLimits

0xf755,	// (0x000871ce) main_clock2_pane_t

0x9766,	// (0x000811df) popup_clock_analogue_window_cp03_ParamLimits

0x9766,	// (0x000811df) popup_clock_analogue_window_cp03

0x9784,	// (0x000811fd) popup_clock_digital_window_cp02_ParamLimits

0x9784,	// (0x000811fd) popup_clock_digital_window_cp02

0x97f1,	// (0x0008126a) main_clock2_list_single_pane_ParamLimits

0x97f1,	// (0x0008126a) main_clock2_list_single_pane

0x0931,	// (0x000783aa) list_highlight_pane_cp05

0xecbd,	// (0x00086736) main_clock2_list_single_pane_t1

0x655a,	// (0x0007dfd3) popup_toolbar_window_cp04_ParamLimits

0xe553,	// (0x00085fcc) camera2_autofocus_pane_g2_ParamLimits

0xe553,	// (0x00085fcc) camera2_autofocus_pane_g2

0xe553,	// (0x00085fcc) camera2_autofocus_pane_g3_ParamLimits

0xe553,	// (0x00085fcc) camera2_autofocus_pane_g3

0xe553,	// (0x00085fcc) camera2_autofocus_pane_g4_ParamLimits

0xe553,	// (0x00085fcc) camera2_autofocus_pane_g4

0xe553,	// (0x00085fcc) camera2_autofocus_pane_g5_ParamLimits

0xe553,	// (0x00085fcc) camera2_autofocus_pane_g5

0x0004,

0xf699,	// (0x00087112) camera2_autofocus_pane_g_ParamLimits

0xf699,	// (0x00087112) camera2_autofocus_pane_g

0x907f,	// (0x00080af8) camera2_autofocus_pane_cp_g2

0x9087,	// (0x00080b00) camera2_autofocus_pane_cp_g3

0x908f,	// (0x00080b08) camera2_autofocus_pane_cp_g4

0x9097,	// (0x00080b10) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ff,	// (0x00087178) camera2_autofocus_pane_cp_g

0xde55,	// (0x000858ce) popup_dialer_spcha_window

0xde55,	// (0x000858ce) bg_popup_sub_pane_cp07

0xde55,	// (0x000858ce) list_spcha_pane

0xeccb,	// (0x00086744) list_single_spcha_pane_ParamLimits

0xeccb,	// (0x00086744) list_single_spcha_pane

0xde55,	// (0x000858ce) list_highlight_pane_cp06

0x85f8,	// (0x00080071) list_single_spcha_pane_t1

0x8038,	// (0x0007fab1) popup_call2_audio_out_window_g4_ParamLimits

0x8038,	// (0x0007fab1) popup_call2_audio_out_window_g4

0x5888,	// (0x0007d301) main_imed2_pane

0x8866,	// (0x000802df) popup_imed_adjust2_window

0x8877,	// (0x000802f0) popup_imed_trans_window_ParamLimits

0x8877,	// (0x000802f0) popup_imed_trans_window

0x8e99,	// (0x00080912) popup_blid_sat_info2_window_t1

0x8ea7,	// (0x00080920) popup_blid_sat_info2_window_t2

0x000a,

0xf62e,	// (0x000870a7) popup_blid_sat_info2_window_t

0x989b,	// (0x00081314) aid_size_cell_colour_35

0x98b2,	// (0x0008132b) aid_size_cell_colour_112

0x98c9,	// (0x00081342) aid_size_cell_effect

0x0861,	// (0x000782da) bg_tb_trans_pane_cp02

0xecdd,	// (0x00086756) heading_imed_pane

0x98e3,	// (0x0008135c) listscroll_imed_pane

0xece9,	// (0x00086762) heading_imed_pane_g1

0xecf1,	// (0x0008676a) heading_imed_pane_t1

0xecff,	// (0x00086778) grid_imed_colour_35_pane_ParamLimits

0xecff,	// (0x00086778) grid_imed_colour_35_pane

0x98ef,	// (0x00081368) grid_imed_effect_pane

0xed12,	// (0x0008678b) list_imed_aspect_pane

0x98fb,	// (0x00081374) scroll_pane_cp027_ParamLimits

0x98fb,	// (0x00081374) scroll_pane_cp027

0x9907,	// (0x00081380) cell_imed_effect_pane_ParamLimits

0x9907,	// (0x00081380) cell_imed_effect_pane

0xed1a,	// (0x00086793) cell_imed_colour_pane_ParamLimits

0xed1a,	// (0x00086793) cell_imed_colour_pane

0xed54,	// (0x000867cd) cell_imed_colour_pane_g1_ParamLimits

0xed54,	// (0x000867cd) cell_imed_colour_pane_g1

0xed65,	// (0x000867de) hgihlgiht_grid_pane_cp016_ParamLimits

0xed65,	// (0x000867de) hgihlgiht_grid_pane_cp016

0x991d,	// (0x00081396) cell_imed_effect_pane_g1

0x9925,	// (0x0008139e) grid_highlight_pane_cp017

0xed76,	// (0x000867ef) list_imed_single_pane_ParamLimits

0xed76,	// (0x000867ef) list_imed_single_pane

0xde55,	// (0x000858ce) list_highlight_pane_cp07

0xed89,	// (0x00086802) list_imed_aspect_pane_comp1_t1

0x87c2,	// (0x0008023b) bg_tb_trans_pane_cp05

0xeda9,	// (0x00086822) popup_imed_adjust2_window_g1

0xedd0,	// (0x00086849) popup_imed_adjust2_window_t1

0xede8,	// (0x00086861) slider_imed_adjust_pane

0xedfc,	// (0x00086875) slider_imed_adjust_pane_g1

0xee0c,	// (0x00086885) slider_imed_adjust_pane_g2

0xee1c,	// (0x00086895) slider_imed_adjust_pane_g3

0xee2d,	// (0x000868a6) slider_imed_adjust_pane_g4

0x0003,

0xf772,	// (0x000871eb) slider_imed_adjust_pane_g

0x992e,	// (0x000813a7) aid_size_cell_clipart2

0x993a,	// (0x000813b3) grid_imed_clipart_pane

0xee3e,	// (0x000868b7) scroll_pane_cp031

0x9944,	// (0x000813bd) cell_imed_clipart_pane_ParamLimits

0x9944,	// (0x000813bd) cell_imed_clipart_pane

0x995b,	// (0x000813d4) cell_imed_clipart_pane_g1

0xde55,	// (0x000858ce) grid_highlight_pane_cp014

0x96d3,	// (0x0008114c) main_clock2_pane_g1_ParamLimits

0x96d3,	// (0x0008114c) main_clock2_pane_g1

0x979c,	// (0x00081215) aid_call2_pane_cp10

0x97ae,	// (0x00081227) aid_call_pane_cp10

0x12bd,	// (0x00078d36) popup_clock_analogue_window_cp10_g1

0x12bd,	// (0x00078d36) popup_clock_analogue_window_cp10_g2

0x97c0,	// (0x00081239) popup_clock_analogue_window_cp10_g3

0x97c0,	// (0x00081239) popup_clock_analogue_window_cp10_g4

0x12bd,	// (0x00078d36) popup_clock_analogue_window_cp10_g5

0x0004,

0xf760,	// (0x000871d9) popup_clock_analogue_window_cp10_g

0x97d2,	// (0x0008124b) popup_clock_analogue_window_cp10_t1

0x9803,	// (0x0008127c) clock_digital_number_pane_cp10_ParamLimits

0x9803,	// (0x0008127c) clock_digital_number_pane_cp10

0x981b,	// (0x00081294) clock_digital_number_pane_cp11_ParamLimits

0x981b,	// (0x00081294) clock_digital_number_pane_cp11

0x9833,	// (0x000812ac) clock_digital_number_pane_cp12_ParamLimits

0x9833,	// (0x000812ac) clock_digital_number_pane_cp12

0x984b,	// (0x000812c4) clock_digital_number_pane_cp13_ParamLimits

0x984b,	// (0x000812c4) clock_digital_number_pane_cp13

0x9863,	// (0x000812dc) clock_digital_separator_pane_cp10_ParamLimits

0x9863,	// (0x000812dc) clock_digital_separator_pane_cp10

0x987b,	// (0x000812f4) popup_clock_digital_window_cp02_t1_ParamLimits

0x987b,	// (0x000812f4) popup_clock_digital_window_cp02_t1

0xe4c3,	// (0x00085f3c) clock_digital_number_pane_cp10_g1

0xe4c3,	// (0x00085f3c) clock_digital_number_pane_cp10_g2

0x0001,

0xf77b,	// (0x000871f4) clock_digital_number_pane_cp10_g

0xe4c3,	// (0x00085f3c) clock_digital_separator_pane_cp10_g1

0xe4c3,	// (0x00085f3c) clock_digital_separator_pane_g2_cp10

0x13ea,	// (0x00078e63) navi_pane_vded_g4

0x13f3,	// (0x00078e6c) navi_pane_vded_g5

0x13fc,	// (0x00078e75) navi_pane_vded_t1

0x5888,	// (0x0007d301) main_vded_pane

0x9964,	// (0x000813dd) main_vded_pane_g1

0x996c,	// (0x000813e5) main_vded_pane_g2

0x9974,	// (0x000813ed) main_vded_pane_g3

0x0002,

0xf780,	// (0x000871f9) main_vded_pane_g

0x997c,	// (0x000813f5) main_vded_pane_t1

0x998a,	// (0x00081403) main_vded_pane_t2

0x0001,

0xf787,	// (0x00087200) main_vded_pane_t

0x9998,	// (0x00081411) vded_slider_pane

0x99a0,	// (0x00081419) vded_video_pane

0xee46,	// (0x000868bf) vded_video_pane_g1

0x99a8,	// (0x00081421) vded_video_pane_g2

0x09a9,	// (0x00078422) vded_video_pane_g3

0x0002,

0xf78c,	// (0x00087205) vded_video_pane_g

0xee50,	// (0x000868c9) vded_slider_pane_g1

0x8da3,	// (0x0008081c) vded_slider_pane_g2

0xee59,	// (0x000868d2) vded_slider_pane_g3

0xee62,	// (0x000868db) vded_slider_pane_g4

0xee6b,	// (0x000868e4) vded_slider_pane_g5

0x0004,

0xf793,	// (0x0008720c) vded_slider_pane_g

0x956b,	// (0x00080fe4) mup3_rocker_pane_ParamLimits

0x956b,	// (0x00080fe4) mup3_rocker_pane

0x99b1,	// (0x0008142a) mup3_control_keys_pane_g1

0x99b9,	// (0x00081432) mup3_control_keys_pane_g2

0x99c1,	// (0x0008143a) mup3_control_keys_pane_g3

0x99c9,	// (0x00081442) mup3_control_keys_pane_g4

0x0003,

0xf79e,	// (0x00087217) mup3_control_keys_pane_g

0x5840,	// (0x0007d2b9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5840,	// (0x0007d2b9) popup_toolbar2_fixed_window_cp01

0x9583,	// (0x00080ffc) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9583,	// (0x00080ffc) popup_toolbar2_fixed_window_cp02

0x1bee,	// (0x00079667) popup_call2_audio_second_window_t4_ParamLimits

0x1bee,	// (0x00079667) popup_call2_audio_second_window_t4

0x7ea5,	// (0x0007f91e) popup_call2_audio_first_window_t6_ParamLimits

0x7ea5,	// (0x0007f91e) popup_call2_audio_first_window_t6

0x813b,	// (0x0007fbb4) popup_call2_audio_out_window_t6_ParamLimits

0x813b,	// (0x0007fbb4) popup_call2_audio_out_window_t6

0x5888,	// (0x0007d301) main_vitu_pane

0xe561,	// (0x00085fda) aid_size_cell_itu_ParamLimits

0xe561,	// (0x00085fda) aid_size_cell_itu

0xe561,	// (0x00085fda) bg_popup_window_pane_cp08_ParamLimits

0xe561,	// (0x00085fda) bg_popup_window_pane_cp08

0xe561,	// (0x00085fda) field_vitu_entry_pane_ParamLimits

0xe561,	// (0x00085fda) field_vitu_entry_pane

0xe561,	// (0x00085fda) grid_vitu_function_pane_ParamLimits

0xe561,	// (0x00085fda) grid_vitu_function_pane

0xe561,	// (0x00085fda) grid_vitu_itu_pane_ParamLimits

0xe561,	// (0x00085fda) grid_vitu_itu_pane

0x99d9,	// (0x00081452) cell_vitu_itu_pane_ParamLimits

0x99d9,	// (0x00081452) cell_vitu_itu_pane

0xe561,	// (0x00085fda) cell_vitu_function_pane_ParamLimits

0xe561,	// (0x00085fda) cell_vitu_function_pane

0x0861,	// (0x000782da) bg_popup_sub_pane_cp08_ParamLimits

0x0861,	// (0x000782da) bg_popup_sub_pane_cp08

0x097b,	// (0x000783f4) field_vitu_entry_pane_t1_ParamLimits

0x097b,	// (0x000783f4) field_vitu_entry_pane_t1

0xec70,	// (0x000866e9) field_vitu_entry_pane_t2_ParamLimits

0xec70,	// (0x000866e9) field_vitu_entry_pane_t2

0x0001,

0xf7ac,	// (0x00087225) field_vitu_entry_pane_t_ParamLimits

0xf7ac,	// (0x00087225) field_vitu_entry_pane_t

0x7742,	// (0x0007f1bb) bg_button_pane_cp05_ParamLimits

0x7742,	// (0x0007f1bb) bg_button_pane_cp05

0xee74,	// (0x000868ed) cell_vitu_itu_pane_g1

0x99e7,	// (0x00081460) cell_vitu_itu_pane_t1_ParamLimits

0x99e7,	// (0x00081460) cell_vitu_itu_pane_t1

0x99e7,	// (0x00081460) cell_vitu_itu_pane_t2_ParamLimits

0x99e7,	// (0x00081460) cell_vitu_itu_pane_t2

0x0002,

0xf7b1,	// (0x0008722a) cell_vitu_itu_pane_t_ParamLimits

0xf7b1,	// (0x0008722a) cell_vitu_itu_pane_t

0xde55,	// (0x000858ce) bg_button_pane_cp07

0x09a9,	// (0x00078422) cell_vitu_function_pane_g1

0x59c7,	// (0x0007d440) main_calc_pane_g1

0x56cc,	// (0x0007d145) aid_visual_content_pane

0x5888,	// (0x0007d301) main_vradio_pane

0xe553,	// (0x00085fcc) main_vradio_pane_g1_ParamLimits

0xe553,	// (0x00085fcc) main_vradio_pane_g1

0xe553,	// (0x00085fcc) main_vradio_pane_g2_ParamLimits

0xe553,	// (0x00085fcc) main_vradio_pane_g2

0x0001,

0xf7b8,	// (0x00087231) main_vradio_pane_g_ParamLimits

0xf7b8,	// (0x00087231) main_vradio_pane_g

0x14e3,	// (0x00078f5c) main_vradio_pane_t1_ParamLimits

0x14e3,	// (0x00078f5c) main_vradio_pane_t1

0x14e3,	// (0x00078f5c) main_vradio_pane_t2_ParamLimits

0x14e3,	// (0x00078f5c) main_vradio_pane_t2

0x14e3,	// (0x00078f5c) main_vradio_pane_t3_ParamLimits

0x14e3,	// (0x00078f5c) main_vradio_pane_t3

0x0002,

0xf7bd,	// (0x00087236) main_vradio_pane_t_ParamLimits

0xf7bd,	// (0x00087236) main_vradio_pane_t

0xe561,	// (0x00085fda) vradio_rocker_control_pane_ParamLimits

0xe561,	// (0x00085fda) vradio_rocker_control_pane

0xe561,	// (0x00085fda) vradio_station_info_pane_ParamLimits

0xe561,	// (0x00085fda) vradio_station_info_pane

0x0861,	// (0x000782da) vradio_frequency_info_pane_ParamLimits

0x0861,	// (0x000782da) vradio_frequency_info_pane

0x09a9,	// (0x00078422) vradio_station_info_pane_g1

0x99e7,	// (0x00081460) vradio_station_info_pane_t1_ParamLimits

0x99e7,	// (0x00081460) vradio_station_info_pane_t1

0x14e3,	// (0x00078f5c) vradio_station_info_pane_t2_ParamLimits

0x14e3,	// (0x00078f5c) vradio_station_info_pane_t2

0x0001,

0xf7c4,	// (0x0008723d) vradio_station_info_pane_t_ParamLimits

0xf7c4,	// (0x0008723d) vradio_station_info_pane_t

0xde55,	// (0x000858ce) vradio_tuning_pane

0x99fb,	// (0x00081474) vradio_rocker_control_pane_g1

0xee90,	// (0x00086909) vradio_rocker_control_pane_g2

0x9a03,	// (0x0008147c) vradio_rocker_control_pane_g3

0x9a0b,	// (0x00081484) vradio_rocker_control_pane_g4

0x9a13,	// (0x0008148c) vradio_rocker_control_pane_g5

0x0004,

0xf7c9,	// (0x00087242) vradio_rocker_control_pane_g

0x09a9,	// (0x00078422) vradio_frequency_info_pane_g1

0x097b,	// (0x000783f4) vradio_frequency_info_pane_t1_ParamLimits

0x097b,	// (0x000783f4) vradio_frequency_info_pane_t1

0x9a1b,	// (0x00081494) vradio_tuning_pane_g1

0x9a24,	// (0x0008149d) vradio_tuning_pane_t1

0x570b,	// (0x0007d184) area_side_right_pane_ParamLimits

0x570b,	// (0x0007d184) area_side_right_pane

0x8773,	// (0x000801ec) status_small_pane_g1

0x877b,	// (0x000801f4) status_small_pane_g2

0x8784,	// (0x000801fd) status_small_pane_g3

0x878d,	// (0x00080206) status_small_pane_g4

0x0003,

0xf590,	// (0x00087009) status_small_pane_g

0x8796,	// (0x0008020f) status_small_pane_t1

0x5888,	// (0x0007d301) main_video3_pane

0xee98,	// (0x00086911) cams_zoom_vslider_pane

0xeea0,	// (0x00086919) image3_wide_pane_ParamLimits

0xeea0,	// (0x00086919) image3_wide_pane

0xeeba,	// (0x00086933) image3_wide_small_pane

0xeec4,	// (0x0008693d) main_video3_pane_g1_ParamLimits

0xeec4,	// (0x0008693d) main_video3_pane_g1

0xeee0,	// (0x00086959) main_video3_pane_g2_ParamLimits

0xeee0,	// (0x00086959) main_video3_pane_g2

0x0001,

0xf7d4,	// (0x0008724d) main_video3_pane_g_ParamLimits

0xf7d4,	// (0x0008724d) main_video3_pane_g

0xeefc,	// (0x00086975) main_video3_pane_t1_ParamLimits

0xeefc,	// (0x00086975) main_video3_pane_t1

0xef27,	// (0x000869a0) main_video3_pane_t2_ParamLimits

0xef27,	// (0x000869a0) main_video3_pane_t2

0xef52,	// (0x000869cb) main_video3_pane_t3_ParamLimits

0xef52,	// (0x000869cb) main_video3_pane_t3

0x0002,

0xf7d9,	// (0x00087252) main_video3_pane_t_ParamLimits

0xf7d9,	// (0x00087252) main_video3_pane_t

0xef7d,	// (0x000869f6) cams_zoom_vslider_pane_g1

0xef86,	// (0x000869ff) cams_zoom_vslider_pane_g2

0x0001,

0xf7e0,	// (0x00087259) cams_zoom_vslider_pane_g

0xef8e,	// (0x00086a07) small_slider_vertical_pane

0x09a9,	// (0x00078422) small_slider_vertical_pane_g1

0x09a9,	// (0x00078422) small_slider_vertical_pane_g2

0xef96,	// (0x00086a0f) small_slider_vertical_pane_g3

0x0002,

0xf7e5,	// (0x0008725e) small_slider_vertical_pane_g

0x5888,	// (0x0007d301) main_hwr_training_pane

0xef9f,	// (0x00086a18) hwr_training_instruct_pane_ParamLimits

0xef9f,	// (0x00086a18) hwr_training_instruct_pane

0x9a33,	// (0x000814ac) hwr_training_navi_pane_ParamLimits

0x9a33,	// (0x000814ac) hwr_training_navi_pane

0x9a47,	// (0x000814c0) hwr_training_write_pane_ParamLimits

0x9a47,	// (0x000814c0) hwr_training_write_pane

0xde55,	// (0x000858ce) bg_frame_shadow_pane

0xefce,	// (0x00086a47) hwr_training_write_pane_g1

0xefd6,	// (0x00086a4f) hwr_training_write_pane_g2

0xefde,	// (0x00086a57) hwr_training_write_pane_g3

0xefe6,	// (0x00086a5f) hwr_training_write_pane_g4

0xefee,	// (0x00086a67) hwr_training_write_pane_g5

0xeff6,	// (0x00086a6f) hwr_training_write_pane_g6

0xeffe,	// (0x00086a77) hwr_training_write_pane_g7

0x0006,

0xf7ec,	// (0x00087265) hwr_training_write_pane_g

0x9a75,	// (0x000814ee) hwr_training_navi_pane_g1_ParamLimits

0x9a75,	// (0x000814ee) hwr_training_navi_pane_g1

0x9a87,	// (0x00081500) hwr_training_navi_pane_g2_ParamLimits

0x9a87,	// (0x00081500) hwr_training_navi_pane_g2

0x9a99,	// (0x00081512) hwr_training_navi_pane_g3_ParamLimits

0x9a99,	// (0x00081512) hwr_training_navi_pane_g3

0x9aa9,	// (0x00081522) hwr_training_navi_pane_g4_ParamLimits

0x9aa9,	// (0x00081522) hwr_training_navi_pane_g4

0x0004,

0xf7fb,	// (0x00087274) hwr_training_navi_pane_g_ParamLimits

0xf7fb,	// (0x00087274) hwr_training_navi_pane_g

0x9ac3,	// (0x0008153c) hwr_training_navi_pane_t1

0x9ad1,	// (0x0008154a) list_single_hwr_training_instruct_pane_ParamLimits

0x9ad1,	// (0x0008154a) list_single_hwr_training_instruct_pane

0xf006,	// (0x00086a7f) list_single_hwr_training_instruct_pane_t1

0xe863,	// (0x000862dc) bg_frame_shadow_pane_g1

0xf015,	// (0x00086a8e) bg_frame_shadow_pane_g2

0xf01d,	// (0x00086a96) bg_frame_shadow_pane_g3

0xf025,	// (0x00086a9e) bg_frame_shadow_pane_g4

0xf02d,	// (0x00086aa6) bg_frame_shadow_pane_g5

0xf035,	// (0x00086aae) bg_frame_shadow_pane_g6

0xf03d,	// (0x00086ab6) bg_frame_shadow_pane_g7

0xe68a,	// (0x00086103) bg_frame_shadow_pane_g8

0x0007,

0xf806,	// (0x0008727f) bg_frame_shadow_pane_g

0x5888,	// (0x0007d301) main_video_tele_dialer_pane

0x9ae9,	// (0x00081562) aid_size_cell_video_keypad_ParamLimits

0x9ae9,	// (0x00081562) aid_size_cell_video_keypad

0x9af9,	// (0x00081572) grid_video_dialer_keypad_pane_ParamLimits

0x9af9,	// (0x00081572) grid_video_dialer_keypad_pane

0x9b29,	// (0x000815a2) video_down_pane_cp_ParamLimits

0x9b29,	// (0x000815a2) video_down_pane_cp

0x9b51,	// (0x000815ca) cell_video_dialer_keypad_pane_ParamLimits

0x9b51,	// (0x000815ca) cell_video_dialer_keypad_pane

0xf045,	// (0x00086abe) bg_button_pane_cp08_ParamLimits

0xf045,	// (0x00086abe) bg_button_pane_cp08

0x9b66,	// (0x000815df) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9b66,	// (0x000815df) cell_video_dialer_keypad_pane_g1

0x955f,	// (0x00080fd8) mup3_rocker2_pane_ParamLimits

0x955f,	// (0x00080fd8) mup3_rocker2_pane

0x09a9,	// (0x00078422) mup3_rocker2_pane_g1

0x87de,	// (0x00080257) main_dialer2_pane

0x5888,	// (0x0007d301) main_mp4_pane

0x9bb9,	// (0x00081632) main_mp4_pane_g1_ParamLimits

0x9bb9,	// (0x00081632) main_mp4_pane_g1

0x9bc7,	// (0x00081640) main_mp4_pane_g2_ParamLimits

0x9bc7,	// (0x00081640) main_mp4_pane_g2

0x9bd5,	// (0x0008164e) main_mp4_pane_g3_ParamLimits

0x9bd5,	// (0x0008164e) main_mp4_pane_g3

0x9c0a,	// (0x00081683) main_mp4_pane_g4_ParamLimits

0x9c0a,	// (0x00081683) main_mp4_pane_g4

0x9c38,	// (0x000816b1) main_mp4_pane_g5_ParamLimits

0x9c38,	// (0x000816b1) main_mp4_pane_g5

0x0007,

0xf826,	// (0x0008729f) main_mp4_pane_g_ParamLimits

0xf826,	// (0x0008729f) main_mp4_pane_g

0x9cac,	// (0x00081725) main_mp4_pane_t1_ParamLimits

0x9cac,	// (0x00081725) main_mp4_pane_t1

0x9d04,	// (0x0008177d) main_mp4_pane_t2_ParamLimits

0x9d04,	// (0x0008177d) main_mp4_pane_t2

0x2204,	// (0x00079c7d) main_mp4_pane_t3_ParamLimits

0x2204,	// (0x00079c7d) main_mp4_pane_t3

0x9d56,	// (0x000817cf) main_mp4_pane_t4_ParamLimits

0x9d56,	// (0x000817cf) main_mp4_pane_t4

0x0003,

0xf837,	// (0x000872b0) main_mp4_pane_t_ParamLimits

0xf837,	// (0x000872b0) main_mp4_pane_t

0x9d96,	// (0x0008180f) mp4_progress_pane_ParamLimits

0x9d96,	// (0x0008180f) mp4_progress_pane

0x9dda,	// (0x00081853) mp4_rocker_pane_ParamLimits

0x9dda,	// (0x00081853) mp4_rocker_pane

0x2232,	// (0x00079cab) mp4_progress_pane_t1

0x2249,	// (0x00079cc2) mp4_progress_pane_t2

0x0001,

0xf840,	// (0x000872b9) mp4_progress_pane_t

0x2260,	// (0x00079cd9) mup_progress_pane_cp04

0xe796,	// (0x0008620f) mp4_rocker_pane_g1

0x9df8,	// (0x00081871) aid_cell_size_keypad2_ParamLimits

0x9df8,	// (0x00081871) aid_cell_size_keypad2

0x9e08,	// (0x00081881) dialer2_ne_pane_ParamLimits

0x9e08,	// (0x00081881) dialer2_ne_pane

0x9e14,	// (0x0008188d) grid_dialer2_keypad_pane_ParamLimits

0x9e14,	// (0x0008188d) grid_dialer2_keypad_pane

0xf051,	// (0x00086aca) bg_popup_call_pane_cp07_ParamLimits

0xf051,	// (0x00086aca) bg_popup_call_pane_cp07

0x9e20,	// (0x00081899) dialer2_ne_pane_t1_ParamLimits

0x9e20,	// (0x00081899) dialer2_ne_pane_t1

0x9e45,	// (0x000818be) cell_dialer2_keypad_pane_ParamLimits

0x9e45,	// (0x000818be) cell_dialer2_keypad_pane

0x227e,	// (0x00079cf7) bg_button_pane_pane_cp04_ParamLimits

0x227e,	// (0x00079cf7) bg_button_pane_pane_cp04

0x9e5a,	// (0x000818d3) cell_dialer2_keypad_pane_g1_ParamLimits

0x9e5a,	// (0x000818d3) cell_dialer2_keypad_pane_g1

0x6436,	// (0x0007deaf) aid_placing_vt_set_content_ParamLimits

0x6436,	// (0x0007deaf) aid_placing_vt_set_content

0x645c,	// (0x0007ded5) aid_placing_vt_set_title_ParamLimits

0x645c,	// (0x0007ded5) aid_placing_vt_set_title

0x5888,	// (0x0007d301) main_image3_pane

0x9ece,	// (0x00081947) area_side_right_pane_cp01_ParamLimits

0x9ece,	// (0x00081947) area_side_right_pane_cp01

0x9efb,	// (0x00081974) main_image3_pane_g1_ParamLimits

0x9efb,	// (0x00081974) main_image3_pane_g1

0x9f09,	// (0x00081982) main_image3_pane_g2_ParamLimits

0x9f09,	// (0x00081982) main_image3_pane_g2

0x9f20,	// (0x00081999) main_image3_pane_g3_ParamLimits

0x9f20,	// (0x00081999) main_image3_pane_g3

0x9f37,	// (0x000819b0) main_image3_pane_g4_ParamLimits

0x9f37,	// (0x000819b0) main_image3_pane_g4

0x0003,

0xf84f,	// (0x000872c8) main_image3_pane_g_ParamLimits

0xf84f,	// (0x000872c8) main_image3_pane_g

0x9f4e,	// (0x000819c7) main_image3_pane_t1_ParamLimits

0x9f4e,	// (0x000819c7) main_image3_pane_t1

0x9f73,	// (0x000819ec) main_image3_pane_t2_ParamLimits

0x9f73,	// (0x000819ec) main_image3_pane_t2

0x9f92,	// (0x00081a0b) main_image3_pane_t3_ParamLimits

0x9f92,	// (0x00081a0b) main_image3_pane_t3

0x0003,

0xf858,	// (0x000872d1) main_image3_pane_t_ParamLimits

0xf858,	// (0x000872d1) main_image3_pane_t

0xe561,	// (0x00085fda) grid_sctrl_middle_pane_cp01_ParamLimits

0xe561,	// (0x00085fda) grid_sctrl_middle_pane_cp01

0x9fed,	// (0x00081a66) cell_sctrl_middle_pane_cp01_ParamLimits

0x9fed,	// (0x00081a66) cell_sctrl_middle_pane_cp01

0x9ffe,	// (0x00081a77) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9ffe,	// (0x00081a77) cell_sctrl_middle_pane_cp01_g1

0x5888,	// (0x0007d301) main_call4_pane

0xa00b,	// (0x00081a84) aid_size_button_call4_ParamLimits

0xa00b,	// (0x00081a84) aid_size_button_call4

0xa035,	// (0x00081aae) call4_windows_pane_ParamLimits

0xa035,	// (0x00081aae) call4_windows_pane

0xa049,	// (0x00081ac2) grid_call4_button_pane_ParamLimits

0xa049,	// (0x00081ac2) grid_call4_button_pane

0x22a2,	// (0x00079d1b) call4_windows_conf_pane

0xa06b,	// (0x00081ae4) popup_call4_audio_first_window_ParamLimits

0xa06b,	// (0x00081ae4) popup_call4_audio_first_window

0x22d5,	// (0x00079d4e) popup_call4_audio_second_window_ParamLimits

0x22d5,	// (0x00079d4e) popup_call4_audio_second_window

0x22e7,	// (0x00079d60) popup_call4_audio_wait_window_ParamLimits

0x22e7,	// (0x00079d60) popup_call4_audio_wait_window

0xa08b,	// (0x00081b04) cell_call4_button_pane_ParamLimits

0xa08b,	// (0x00081b04) cell_call4_button_pane

0xe634,	// (0x000860ad) bg_button_pane_cp09_ParamLimits

0xe634,	// (0x000860ad) bg_button_pane_cp09

0xa0ae,	// (0x00081b27) cell_call4_button_pane_g1_ParamLimits

0xa0ae,	// (0x00081b27) cell_call4_button_pane_g1

0xa0bb,	// (0x00081b34) cell_call4_button_pane_t1_ParamLimits

0xa0bb,	// (0x00081b34) cell_call4_button_pane_t1

0x22fb,	// (0x00079d74) popup_call4_audio_conf_window_ParamLimits

0x22fb,	// (0x00079d74) popup_call4_audio_conf_window

0x9590,	// (0x00081009) mup3_progress_pane_t1_ParamLimits

0x95ae,	// (0x00081027) mup3_progress_pane_t2_ParamLimits

0xeb99,	// (0x00086612) mup3_progress_pane_t3_ParamLimits

0xf728,	// (0x000871a1) mup3_progress_pane_t_ParamLimits

0xebb6,	// (0x0008662f) mup_progress_pane_cp03_ParamLimits

0x99d1,	// (0x0008144a) mup3_control_keys_pane_g4_copy1

0x9dc4,	// (0x0008183d) mp4_rocker2_pane_ParamLimits

0x9dc4,	// (0x0008183d) mp4_rocker2_pane

0x2317,	// (0x00079d90) mp4_rocker2_pane_g1

0x230f,	// (0x00079d88) mp4_rocker2_pane_g2

0xa0ff,	// (0x00081b78) mp4_rocker2_pane_g3

0xa107,	// (0x00081b80) mp4_rocker2_pane_g4

0xa10f,	// (0x00081b88) mp4_rocker2_pane_g5

0x0004,

0xf861,	// (0x000872da) mp4_rocker2_pane_g

0x5888,	// (0x0007d301) main_camera4_pane

0x5888,	// (0x0007d301) main_video4_pane

0x9b05,	// (0x0008157e) main_video_tele_dialer_pane_t1_ParamLimits

0x9b05,	// (0x0008157e) main_video_tele_dialer_pane_t1

0x9b17,	// (0x00081590) main_video_tele_dialer_pane_t2_ParamLimits

0x9b17,	// (0x00081590) main_video_tele_dialer_pane_t2

0x0001,

0xf817,	// (0x00087290) main_video_tele_dialer_pane_t_ParamLimits

0xf817,	// (0x00087290) main_video_tele_dialer_pane_t

0xa12d,	// (0x00081ba6) cam4_autofocus_pane_ParamLimits

0xa12d,	// (0x00081ba6) cam4_autofocus_pane

0xa143,	// (0x00081bbc) cam4_image_uncrop_pane_ParamLimits

0xa143,	// (0x00081bbc) cam4_image_uncrop_pane

0xa158,	// (0x00081bd1) cam4_indicators_pane_ParamLimits

0xa158,	// (0x00081bd1) cam4_indicators_pane

0xa172,	// (0x00081beb) main_camera4_pane_g1_ParamLimits

0xa172,	// (0x00081beb) main_camera4_pane_g1

0xa17e,	// (0x00081bf7) main_camera4_pane_g2_ParamLimits

0xa17e,	// (0x00081bf7) main_camera4_pane_g2

0xa17e,	// (0x00081bf7) main_camera4_pane_g3_ParamLimits

0xa17e,	// (0x00081bf7) main_camera4_pane_g3

0xa18a,	// (0x00081c03) main_camera4_pane_g4_ParamLimits

0xa18a,	// (0x00081c03) main_camera4_pane_g4

0xa196,	// (0x00081c0f) main_camera4_pane_g5_ParamLimits

0xa196,	// (0x00081c0f) main_camera4_pane_g5

0x0005,

0xf86c,	// (0x000872e5) main_camera4_pane_g_ParamLimits

0xf86c,	// (0x000872e5) main_camera4_pane_g

0xa1b0,	// (0x00081c29) main_camera4_pane_t1_ParamLimits

0xa1b0,	// (0x00081c29) main_camera4_pane_t1

0xa1f8,	// (0x00081c71) bg_tb_trans_pane_cp06

0xa20e,	// (0x00081c87) cam4_indicators_pane_g1

0xa21e,	// (0x00081c97) cam4_indicators_pane_g2

0x0002,

0xf887,	// (0x00087300) cam4_indicators_pane_g

0xa23e,	// (0x00081cb7) cam4_indicators_pane_t1

0xa266,	// (0x00081cdf) main_video4_pane_g1_ParamLimits

0xa266,	// (0x00081cdf) main_video4_pane_g1

0xa17e,	// (0x00081bf7) main_video4_pane_g2_ParamLimits

0xa17e,	// (0x00081bf7) main_video4_pane_g2

0xa17e,	// (0x00081bf7) main_video4_pane_g3_ParamLimits

0xa17e,	// (0x00081bf7) main_video4_pane_g3

0xa18a,	// (0x00081c03) main_video4_pane_g4_ParamLimits

0xa18a,	// (0x00081c03) main_video4_pane_g4

0x0004,

0xf88e,	// (0x00087307) main_video4_pane_g_ParamLimits

0xf88e,	// (0x00087307) main_video4_pane_g

0xa27a,	// (0x00081cf3) vid4_indicators_pane_ParamLimits

0xa27a,	// (0x00081cf3) vid4_indicators_pane

0xa298,	// (0x00081d11) video4_image_uncrop_cif_pane_ParamLimits

0xa298,	// (0x00081d11) video4_image_uncrop_cif_pane

0xa2a5,	// (0x00081d1e) video4_image_uncrop_nhd_pane_ParamLimits

0xa2a5,	// (0x00081d1e) video4_image_uncrop_nhd_pane

0xa143,	// (0x00081bbc) video4_image_uncrop_vga_pane_ParamLimits

0xa143,	// (0x00081bbc) video4_image_uncrop_vga_pane

0x87d0,	// (0x00080249) bg_tb_trans_pane_cp07

0xa20e,	// (0x00081c87) vid4_indicators_pane_g1

0xa2b2,	// (0x00081d2b) vid4_indicators_pane_g2

0xa2c2,	// (0x00081d3b) vid4_indicators_pane_g3

0x0004,

0xf899,	// (0x00087312) vid4_indicators_pane_g

0xa2ef,	// (0x00081d68) vid4_indicators_pane_t1

0xa309,	// (0x00081d82) cam4_autofocus_pane_g1

0xa311,	// (0x00081d8a) cam4_autofocus_pane_g2

0xa319,	// (0x00081d92) cam4_autofocus_pane_g3

0x0002,

0xf8a4,	// (0x0008731d) cam4_autofocus_pane_g

0xa321,	// (0x00081d9a) cam4_autofocus_pane_g3_copy1

0x9b35,	// (0x000815ae) video_down_pane_cp_t1

0x9b43,	// (0x000815bc) video_down_pane_cp_t2

0x0001,

0xf81c,	// (0x00087295) video_down_pane_cp_t

0x5872,	// (0x0007d2eb) popup_vitu2_window_ParamLimits

0x5872,	// (0x0007d2eb) popup_vitu2_window

0xa329,	// (0x00081da2) aid_size_cell2_itu2_ParamLimits

0xa329,	// (0x00081da2) aid_size_cell2_itu2

0xa34b,	// (0x00081dc4) aid_size_cell_itu2_ParamLimits

0xa34b,	// (0x00081dc4) aid_size_cell_itu2

0xa389,	// (0x00081e02) bg_popup_window_pane_cp09_ParamLimits

0xa389,	// (0x00081e02) bg_popup_window_pane_cp09

0xa397,	// (0x00081e10) field_vitu2_entry_pane_ParamLimits

0xa397,	// (0x00081e10) field_vitu2_entry_pane

0xa3ad,	// (0x00081e26) grid_vitu2_function_pane_ParamLimits

0xa3ad,	// (0x00081e26) grid_vitu2_function_pane

0xa3df,	// (0x00081e58) grid_vitu2_itu_pane_ParamLimits

0xa3df,	// (0x00081e58) grid_vitu2_itu_pane

0xa43b,	// (0x00081eb4) cell_vitu2_itu_pane_ParamLimits

0xa43b,	// (0x00081eb4) cell_vitu2_itu_pane

0xa453,	// (0x00081ecc) cell_vitu2_function_pane_ParamLimits

0xa453,	// (0x00081ecc) cell_vitu2_function_pane

0x2331,	// (0x00079daa) bg_popup_call_pane_cp08_ParamLimits

0x2331,	// (0x00079daa) bg_popup_call_pane_cp08

0x2348,	// (0x00079dc1) field_vitu2_entry_pane_g1

0x2354,	// (0x00079dcd) field_vitu2_entry_pane_g2

0x0002,

0xf8ab,	// (0x00087324) field_vitu2_entry_pane_g

0xa4a0,	// (0x00081f19) field_vitu2_entry_pane_t1_ParamLimits

0xa4a0,	// (0x00081f19) field_vitu2_entry_pane_t1

0x2360,	// (0x00079dd9) field_vitu2_entry_pane_t2_ParamLimits

0x2360,	// (0x00079dd9) field_vitu2_entry_pane_t2

0x0001,

0xf8b2,	// (0x0008732b) field_vitu2_entry_pane_t_ParamLimits

0xf8b2,	// (0x0008732b) field_vitu2_entry_pane_t

0xa4cf,	// (0x00081f48) bg_button_pane_cp010_ParamLimits

0xa4cf,	// (0x00081f48) bg_button_pane_cp010

0xa4dd,	// (0x00081f56) cell_vitu2_itu_pane_g1

0xa503,	// (0x00081f7c) cell_vitu2_itu_pane_t1_ParamLimits

0xa503,	// (0x00081f7c) cell_vitu2_itu_pane_t1

0x55b8,	// (0x0007d031) cell_vitu2_itu_pane_t2_ParamLimits

0x55b8,	// (0x0007d031) cell_vitu2_itu_pane_t2

0x0002,

0xf8bc,	// (0x00087335) cell_vitu2_itu_pane_t_ParamLimits

0xf8bc,	// (0x00087335) cell_vitu2_itu_pane_t

0x87d0,	// (0x00080249) bg_button_pane_cp011

0xa54f,	// (0x00081fc8) cell_vitu2_function_pane_g1

0x5888,	// (0x0007d301) main_myfav_hc_pane

0x9fd2,	// (0x00081a4b) popup_image3_note_pane_ParamLimits

0x9fd2,	// (0x00081a4b) popup_image3_note_pane

0x9fde,	// (0x00081a57) popup_image3_tool_bar_pane_ParamLimits

0x9fde,	// (0x00081a57) popup_image3_tool_bar_pane

0x562e,	// (0x0007d0a7) cell_vitu2_itu_pane_t3_ParamLimits

0x562e,	// (0x0007d0a7) cell_vitu2_itu_pane_t3

0xde55,	// (0x000858ce) bg_popup_trans_pane

0x2385,	// (0x00079dfe) grid_image3_tool_bar_pane

0x238f,	// (0x00079e08) bg_popup_trans_pane_g1

0x0c05,	// (0x0007867e) bg_popup_trans_pane_g2

0x2397,	// (0x00079e10) bg_popup_trans_pane_g3

0x239f,	// (0x00079e18) bg_popup_trans_pane_g4

0x23a7,	// (0x00079e20) bg_popup_trans_pane_g5

0x23af,	// (0x00079e28) bg_popup_trans_pane_g6

0x23b7,	// (0x00079e30) bg_popup_trans_pane_g7

0x23bf,	// (0x00079e38) bg_popup_trans_pane_g8

0x0be5,	// (0x0007865e) bg_popup_trans_pane_g9

0x0008,

0xf8c3,	// (0x0008733c) bg_popup_trans_pane_g

0x23c7,	// (0x00079e40) cell_image3_tool_bar_pane_ParamLimits

0x23c7,	// (0x00079e40) cell_image3_tool_bar_pane

0x09a9,	// (0x00078422) cell_image3_tool_bar_pane_g1

0xde55,	// (0x000858ce) bg_popup_trans_pane_cp1

0x23db,	// (0x00079e54) popup_image3_note_pane_t1

0x23e9,	// (0x00079e62) popup_image3_note_pane_t2

0x23f7,	// (0x00079e70) popup_image3_note_pane_t3

0x0002,

0xf8d6,	// (0x0008734f) popup_image3_note_pane_t

0x2405,	// (0x00079e7e) popup_image3_note_pane_t3_copy1

0xa563,	// (0x00081fdc) bg_myfav_hc_instruction_pane_ParamLimits

0xa563,	// (0x00081fdc) bg_myfav_hc_instruction_pane

0xa575,	// (0x00081fee) cell_myfav_contact_pane_ParamLimits

0xa575,	// (0x00081fee) cell_myfav_contact_pane

0xa58f,	// (0x00082008) cell_myfav_contact_pane_cp1_ParamLimits

0xa58f,	// (0x00082008) cell_myfav_contact_pane_cp1

0xa5a5,	// (0x0008201e) cell_myfav_contact_pane_cp2_ParamLimits

0xa5a5,	// (0x0008201e) cell_myfav_contact_pane_cp2

0xa5bb,	// (0x00082034) cell_myfav_contact_pane_cp3_ParamLimits

0xa5bb,	// (0x00082034) cell_myfav_contact_pane_cp3

0xa5d0,	// (0x00082049) cell_myfav_contact_pane_cp4_ParamLimits

0xa5d0,	// (0x00082049) cell_myfav_contact_pane_cp4

0xa5e4,	// (0x0008205d) cell_myfav_contact_pane_cp5_ParamLimits

0xa5e4,	// (0x0008205d) cell_myfav_contact_pane_cp5

0xa5f8,	// (0x00082071) cell_myfav_contact_pane_cp6_ParamLimits

0xa5f8,	// (0x00082071) cell_myfav_contact_pane_cp6

0xa60c,	// (0x00082085) cell_myfav_contact_pane_cp7_ParamLimits

0xa60c,	// (0x00082085) cell_myfav_contact_pane_cp7

0x2413,	// (0x00079e8c) listscroll_gen_pane_cp05

0xa624,	// (0x0008209d) main_myfav_hc_pane_g1_ParamLimits

0xa624,	// (0x0008209d) main_myfav_hc_pane_g1

0xa63a,	// (0x000820b3) main_myfav_hc_pane_g2_ParamLimits

0xa63a,	// (0x000820b3) main_myfav_hc_pane_g2

0x0002,

0xf8dd,	// (0x00087356) main_myfav_hc_pane_g_ParamLimits

0xf8dd,	// (0x00087356) main_myfav_hc_pane_g

0xa664,	// (0x000820dd) main_myfav_hc_pane_t1_ParamLimits

0xa664,	// (0x000820dd) main_myfav_hc_pane_t1

0x241c,	// (0x00079e95) main_myfav_hc_pane_t2_ParamLimits

0x241c,	// (0x00079e95) main_myfav_hc_pane_t2

0x242e,	// (0x00079ea7) main_myfav_hc_pane_t3_ParamLimits

0x242e,	// (0x00079ea7) main_myfav_hc_pane_t3

0xa679,	// (0x000820f2) main_myfav_hc_pane_t4_ParamLimits

0xa679,	// (0x000820f2) main_myfav_hc_pane_t4

0x0004,

0xf8e4,	// (0x0008735d) main_myfav_hc_pane_t_ParamLimits

0xf8e4,	// (0x0008735d) main_myfav_hc_pane_t

0x09a9,	// (0x00078422) bg_myfav_hc_instruction_pane_g1

0x2440,	// (0x00079eb9) cell_myfav_contact_pane_g1_ParamLimits

0x2440,	// (0x00079eb9) cell_myfav_contact_pane_g1

0x2440,	// (0x00079eb9) cell_myfav_contact_pane_g2_ParamLimits

0x2440,	// (0x00079eb9) cell_myfav_contact_pane_g2

0x244c,	// (0x00079ec5) cell_myfav_contact_pane_g3_ParamLimits

0x244c,	// (0x00079ec5) cell_myfav_contact_pane_g3

0xe553,	// (0x00085fcc) cell_myfav_contact_pane_g4_ParamLimits

0xe553,	// (0x00085fcc) cell_myfav_contact_pane_g4

0x2459,	// (0x00079ed2) cell_myfav_contact_pane_g5_ParamLimits

0x2459,	// (0x00079ed2) cell_myfav_contact_pane_g5

0x0004,

0xf8ef,	// (0x00087368) cell_myfav_contact_pane_g_ParamLimits

0xf8ef,	// (0x00087368) cell_myfav_contact_pane_g

0xa650,	// (0x000820c9) main_myfav_hc_pane_g3_ParamLimits

0xa650,	// (0x000820c9) main_myfav_hc_pane_g3

0x5555,	// (0x0007cfce) popup_adpt_find_window

0xa69d,	// (0x00082116) afind_page_pane_ParamLimits

0xa69d,	// (0x00082116) afind_page_pane

0xa6aa,	// (0x00082123) aid_size_cell_afind_ParamLimits

0xa6aa,	// (0x00082123) aid_size_cell_afind

0xa6c4,	// (0x0008213d) bg_popup_sub_pane_cp09_ParamLimits

0xa6c4,	// (0x0008213d) bg_popup_sub_pane_cp09

0xa6d1,	// (0x0008214a) find_pane_cp01_ParamLimits

0xa6d1,	// (0x0008214a) find_pane_cp01

0x2465,	// (0x00079ede) grid_afind_control_pane_ParamLimits

0x2465,	// (0x00079ede) grid_afind_control_pane

0xa6de,	// (0x00082157) grid_afind_pane_ParamLimits

0xa6de,	// (0x00082157) grid_afind_pane

0xa6f4,	// (0x0008216d) cell_afind_pane_ParamLimits

0xa6f4,	// (0x0008216d) cell_afind_pane

0x09a9,	// (0x00078422) afind_page_pane_g1

0xa72a,	// (0x000821a3) afind_page_pane_g2

0xa732,	// (0x000821ab) afind_page_pane_g3

0x0002,

0xf8fa,	// (0x00087373) afind_page_pane_g

0xa73a,	// (0x000821b3) afind_page_pane_t1

0x248b,	// (0x00079f04) cell_afind_grid_control_pane_ParamLimits

0x248b,	// (0x00079f04) cell_afind_grid_control_pane

0x227e,	// (0x00079cf7) bg_button_pane_cp69_ParamLimits

0x227e,	// (0x00079cf7) bg_button_pane_cp69

0xa748,	// (0x000821c1) cell_afind_pane_g1_ParamLimits

0xa748,	// (0x000821c1) cell_afind_pane_g1

0xa755,	// (0x000821ce) cell_afind_pane_t1_ParamLimits

0xa755,	// (0x000821ce) cell_afind_pane_t1

0x09b3,	// (0x0007842c) bg_button_pane_cp72

0x249a,	// (0x00079f13) cell_afind_grid_control_pane_g1

0x7cbc,	// (0x0007f735) aid_image_placing_area_ParamLimits

0x7cbc,	// (0x0007f735) aid_image_placing_area

0xe545,	// (0x00085fbe) field_vitu_entry_pane_g1_ParamLimits

0xe545,	// (0x00085fbe) field_vitu_entry_pane_g1

0xe545,	// (0x00085fbe) field_vitu_entry_pane_g2_ParamLimits

0xe545,	// (0x00085fbe) field_vitu_entry_pane_g2

0x0001,

0xf7a7,	// (0x00087220) field_vitu_entry_pane_g_ParamLimits

0xf7a7,	// (0x00087220) field_vitu_entry_pane_g

0xee74,	// (0x000868ed) cell_vitu_itu_pane_g1_ParamLimits

0xec70,	// (0x000866e9) cell_vitu_itu_pane_t3_ParamLimits

0xec70,	// (0x000866e9) cell_vitu_itu_pane_t3

0x2232,	// (0x00079cab) mp4_progress_pane_t1_ParamLimits

0x2249,	// (0x00079cc2) mp4_progress_pane_t2_ParamLimits

0xf840,	// (0x000872b9) mp4_progress_pane_t_ParamLimits

0x2260,	// (0x00079cd9) mup_progress_pane_cp04_ParamLimits

0xa68b,	// (0x00082104) main_myfav_hc_pane_t5_ParamLimits

0xa68b,	// (0x00082104) main_myfav_hc_pane_t5

0x554d,	// (0x0007cfc6) aid_zoom_text_primary

0x5555,	// (0x0007cfce) popup_adpt_find_window_ParamLimits

0x87d0,	// (0x00080249) main_cam_set_pane

0xa166,	// (0x00081bdf) cam4_zoom_pane_ParamLimits

0xa166,	// (0x00081bdf) cam4_zoom_pane

0xa767,	// (0x000821e0) main_cam_set_pane_g1_ParamLimits

0xa767,	// (0x000821e0) main_cam_set_pane_g1

0xa775,	// (0x000821ee) main_cam_set_pane_g2_ParamLimits

0xa775,	// (0x000821ee) main_cam_set_pane_g2

0x0001,

0xf901,	// (0x0008737a) main_cam_set_pane_g_ParamLimits

0xf901,	// (0x0008737a) main_cam_set_pane_g

0xa781,	// (0x000821fa) main_cam_set_pane_t1_ParamLimits

0xa781,	// (0x000821fa) main_cam_set_pane_t1

0xa793,	// (0x0008220c) main_cset_listscroll_pane_ParamLimits

0xa793,	// (0x0008220c) main_cset_listscroll_pane

0xa7c1,	// (0x0008223a) main_cset_slider_pane_ParamLimits

0xa7c1,	// (0x0008223a) main_cset_slider_pane

0x24ab,	// (0x00079f24) main_cset_list_pane_ParamLimits

0x24ab,	// (0x00079f24) main_cset_list_pane

0x24bb,	// (0x00079f34) scroll_pane_cp028

0xa7e0,	// (0x00082259) aid_area_touch_slider

0xa7fc,	// (0x00082275) cset_slider_pane

0xa81f,	// (0x00082298) main_cset_slider_pane_g1

0xa834,	// (0x000822ad) main_cset_slider_pane_g2

0x0011,

0xf906,	// (0x0008737f) main_cset_slider_pane_g

0x24f4,	// (0x00079f6d) main_cset_slider_pane_t1

0xa8f0,	// (0x00082369) main_cset_slider_pane_t2

0xa90a,	// (0x00082383) main_cset_slider_pane_t3

0xa924,	// (0x0008239d) main_cset_slider_pane_t4

0xa93e,	// (0x000823b7) main_cset_slider_pane_t5

0xa958,	// (0x000823d1) main_cset_slider_pane_t6

0xa96d,	// (0x000823e6) main_cset_slider_pane_t7

0x000e,

0xf92b,	// (0x000873a4) main_cset_slider_pane_t

0xaa71,	// (0x000824ea) cset_list_set_pane_ParamLimits

0xaa71,	// (0x000824ea) cset_list_set_pane

0x258e,	// (0x0007a007) aid_position_infowindow_above

0x2596,	// (0x0007a00f) aid_position_infowindow_below

0xaa81,	// (0x000824fa) cset_list_set_pane_g1_ParamLimits

0xaa81,	// (0x000824fa) cset_list_set_pane_g1

0xaa8d,	// (0x00082506) cset_list_set_pane_g3_ParamLimits

0xaa8d,	// (0x00082506) cset_list_set_pane_g3

0x0001,

0xf94a,	// (0x000873c3) cset_list_set_pane_g_ParamLimits

0xf94a,	// (0x000873c3) cset_list_set_pane_g

0xaa9c,	// (0x00082515) cset_list_set_pane_t1_ParamLimits

0xaa9c,	// (0x00082515) cset_list_set_pane_t1

0x0861,	// (0x000782da) list_highlight_pane_cp021_ParamLimits

0x0861,	// (0x000782da) list_highlight_pane_cp021

0x1559,	// (0x00078fd2) cset_slider_pane_g1

0x156b,	// (0x00078fe4) cset_slider_pane_g2

0x1562,	// (0x00078fdb) cset_slider_pane_g3

0x0002,

0xf94f,	// (0x000873c8) cset_slider_pane_g

0xaab1,	// (0x0008252a) aid_area_touch_cam4_zoom

0xaab9,	// (0x00082532) cam4_zoom_cont_pane

0xaac1,	// (0x0008253a) cam4_zoom_pane_g1

0xaac9,	// (0x00082542) cam4_zoom_pane_g2

0xaad1,	// (0x0008254a) cam4_zoom_pane_g3

0x0002,

0xf956,	// (0x000873cf) cam4_zoom_pane_g

0xaad9,	// (0x00082552) cam4_zoom_cont_pane_g1

0xaae2,	// (0x0008255b) cam4_zoom_cont_pane_g2

0xaaeb,	// (0x00082564) cam4_zoom_cont_pane_g3

0x0002,

0xf95d,	// (0x000873d6) cam4_zoom_cont_pane_g

0xa025,	// (0x00081a9e) call4_image_pane_ParamLimits

0xa025,	// (0x00081a9e) call4_image_pane

0x22a2,	// (0x00079d1b) call4_windows_conf_pane_ParamLimits

0x22b5,	// (0x00079d2e) popup_call4_audio_in_window_ParamLimits

0x22b5,	// (0x00079d2e) popup_call4_audio_in_window

0xde55,	// (0x000858ce) bg_popup_call2_act_pane_cp02

0x22f3,	// (0x00079d6c) call4_list_conf_pane

0x09a9,	// (0x00078422) call4_image_pane_g1

0x09a9,	// (0x00078422) call4_image_pane_g2

0x0001,

0xf3c9,	// (0x00086e42) call4_image_pane_g

0x25b9,	// (0x0007a032) list_single_graphic_popup_conf4_pane_ParamLimits

0x25b9,	// (0x0007a032) list_single_graphic_popup_conf4_pane

0xde55,	// (0x000858ce) list_highlight_pane_cp022

0x25cc,	// (0x0007a045) list_single_graphic_popup_conf4_pane_g1

0x1193,	// (0x00078c0c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf964,	// (0x000873dd) list_single_graphic_popup_conf4_pane_g

0x25d4,	// (0x0007a04d) list_single_graphic_popup_conf4_pane_t1

0x65a0,	// (0x0007e019) popup_vtel_slider_window_ParamLimits

0x65a0,	// (0x0007e019) popup_vtel_slider_window

0x226c,	// (0x00079ce5) dialer2_ne_pane_t2_ParamLimits

0x226c,	// (0x00079ce5) dialer2_ne_pane_t2

0x0001,

0xf845,	// (0x000872be) dialer2_ne_pane_t_ParamLimits

0xf845,	// (0x000872be) dialer2_ne_pane_t

0x0861,	// (0x000782da) bg_popup_sub_pane_cp010_ParamLimits

0x0861,	// (0x000782da) bg_popup_sub_pane_cp010

0xaaf4,	// (0x0008256d) popup_vtel_slider_window_g1_ParamLimits

0xaaf4,	// (0x0008256d) popup_vtel_slider_window_g1

0xab00,	// (0x00082579) popup_vtel_slider_window_g2_ParamLimits

0xab00,	// (0x00082579) popup_vtel_slider_window_g2

0x0003,

0xf969,	// (0x000873e2) popup_vtel_slider_window_g_ParamLimits

0xf969,	// (0x000873e2) popup_vtel_slider_window_g

0xab46,	// (0x000825bf) vtel_slider_pane_ParamLimits

0xab46,	// (0x000825bf) vtel_slider_pane

0xab55,	// (0x000825ce) vtel_slider_pane_g1_ParamLimits

0xab55,	// (0x000825ce) vtel_slider_pane_g1

0xab62,	// (0x000825db) vtel_slider_pane_g2_ParamLimits

0xab62,	// (0x000825db) vtel_slider_pane_g2

0xab6f,	// (0x000825e8) vtel_slider_pane_g3_ParamLimits

0xab6f,	// (0x000825e8) vtel_slider_pane_g3

0xab55,	// (0x000825ce) vtel_slider_pane_g4_ParamLimits

0xab55,	// (0x000825ce) vtel_slider_pane_g4

0xab7c,	// (0x000825f5) vtel_slider_pane_g5_ParamLimits

0xab7c,	// (0x000825f5) vtel_slider_pane_g5

0x0004,

0xf972,	// (0x000873eb) vtel_slider_pane_g_ParamLimits

0xf972,	// (0x000873eb) vtel_slider_pane_g

0x87d0,	// (0x00080249) main_gallery2_pane

0xa371,	// (0x00081dea) aid_size_row_itut2_dropdow_list_ParamLimits

0xa371,	// (0x00081dea) aid_size_row_itut2_dropdow_list

0xa3c5,	// (0x00081e3e) grid_vitu2_function_top_pane_ParamLimits

0xa3c5,	// (0x00081e3e) grid_vitu2_function_top_pane

0xa403,	// (0x00081e7c) popup_vitu2_dropdown_list_window_ParamLimits

0xa403,	// (0x00081e7c) popup_vitu2_dropdown_list_window

0xa41f,	// (0x00081e98) popup_vitu2_match_list_window

0xab89,	// (0x00082602) cell_vitu2_function_top_pane_ParamLimits

0xab89,	// (0x00082602) cell_vitu2_function_top_pane

0xaba1,	// (0x0008261a) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaba1,	// (0x0008261a) cell_vitu2_function_top_pane_cp01

0xabbd,	// (0x00082636) cell_vitu2_function_top_wide_pane_ParamLimits

0xabbd,	// (0x00082636) cell_vitu2_function_top_wide_pane

0x87d0,	// (0x00080249) bg_button_pane_cp012

0xabda,	// (0x00082653) cell_vitu2_function_top_pane_g1

0xabee,	// (0x00082667) bg_button_pane_cp013_ParamLimits

0xabee,	// (0x00082667) bg_button_pane_cp013

0xac0a,	// (0x00082683) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xac0a,	// (0x00082683) cell_vitu2_function_top_wide_pane_g1

0x5872,	// (0x0007d2eb) bg_popup_sub_pane_cp20

0xac22,	// (0x0008269b) list_vitu2_match_list_pane

0x238f,	// (0x00079e08) bg_popup_sub_pane_cp20_g1

0x2397,	// (0x00079e10) bg_popup_sub_pane_cp20_g2

0x0c05,	// (0x0007867e) bg_popup_sub_pane_cp20_g3

0x239f,	// (0x00079e18) bg_popup_sub_pane_cp20_g4

0x0be5,	// (0x0007865e) bg_popup_sub_pane_cp20_g5

0x25ea,	// (0x0007a063) bg_popup_sub_pane_cp20_g6

0x23af,	// (0x00079e28) bg_popup_sub_pane_cp20_g7

0x23b7,	// (0x00079e30) bg_popup_sub_pane_cp20_g8

0x23bf,	// (0x00079e38) bg_popup_sub_pane_cp20_g9

0x0008,

0xf97d,	// (0x000873f6) bg_popup_sub_pane_cp20_g

0xac3a,	// (0x000826b3) list_vitu2_match_list_item_pane_ParamLimits

0xac3a,	// (0x000826b3) list_vitu2_match_list_item_pane

0xac4c,	// (0x000826c5) list_vitu2_match_list_item_pane_t1

0x5888,	// (0x0007d301) bg_popup_sub_pane_cp21

0x0931,	// (0x000783aa) grid_vitu2_dropdown_list_pane

0xac5a,	// (0x000826d3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xac5a,	// (0x000826d3) cell_vitu2_dropdown_list_char_pane

0xac78,	// (0x000826f1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xac78,	// (0x000826f1) cell_vitu2_dropdown_list_ctrl_pane

0x2604,	// (0x0007a07d) cell_vitu2_dropdown_list_char_pane_g1

0x25fb,	// (0x0007a074) cell_vitu2_dropdown_list_char_pane_g2

0x25f2,	// (0x0007a06b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x00087413) cell_vitu2_dropdown_list_char_pane_g

0xaca0,	// (0x00082719) cell_vitu2_dropdown_list_char_pane_t1

0xacae,	// (0x00082727) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xacae,	// (0x00082727) cell_vitu2_dropdown_list_ctrl_pane_g1

0xacbe,	// (0x00082737) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xacbe,	// (0x00082737) cell_vitu2_dropdown_list_ctrl_pane_g2

0xaccf,	// (0x00082748) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xaccf,	// (0x00082748) cell_vitu2_dropdown_list_ctrl_pane_g3

0xacdf,	// (0x00082758) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xacdf,	// (0x00082758) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa1f8,	// (0x00081c71) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa1f8,	// (0x00081c71) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x0008741a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x0008741a) cell_vitu2_dropdown_list_ctrl_pane_g

0xacf8,	// (0x00082771) aid_size_cell_gallery2_ParamLimits

0xacf8,	// (0x00082771) aid_size_cell_gallery2

0xad12,	// (0x0008278b) grid_gallery2_pane_ParamLimits

0xad12,	// (0x0008278b) grid_gallery2_pane

0x98fb,	// (0x00081374) scroll_pane_cp029_ParamLimits

0x98fb,	// (0x00081374) scroll_pane_cp029

0xad23,	// (0x0008279c) cell_gallery2_pane_ParamLimits

0xad23,	// (0x0008279c) cell_gallery2_pane

0x260d,	// (0x0007a086) cell_gallery2_pane_g2

0xad70,	// (0x000827e9) cell_gallery2_pane_g3

0x2615,	// (0x0007a08e) cell_gallery2_pane_g4

0x261d,	// (0x0007a096) cell_gallery2_pane_g5

0x0931,	// (0x000783aa) grid_highlight_pane_cp10

0xa41f,	// (0x00081e98) popup_vitu2_match_list_window_ParamLimits

0xa42f,	// (0x00081ea8) popup_vitu2_query_window_ParamLimits

0xa42f,	// (0x00081ea8) popup_vitu2_query_window

0x5888,	// (0x0007d301) bg_vitu2_candi_button_pane

0x2604,	// (0x0007a07d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x25fb,	// (0x0007a074) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x25f2,	// (0x0007a06b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xad78,	// (0x000827f1) bg_button_pane_cp015

0xad89,	// (0x00082802) bg_button_pane_cp016

0xad95,	// (0x0008280e) bg_button_pane_cp017

0x87c2,	// (0x0008023b) bg_popup_sub_pane_cp22

0x2625,	// (0x0007a09e) popup_vitu2_query_window_g1

0xadd3,	// (0x0008284c) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x00087425) popup_vitu2_query_window_g

0xadf3,	// (0x0008286c) popup_vitu2_query_window_t1_ParamLimits

0xadf3,	// (0x0008286c) popup_vitu2_query_window_t1

0xae26,	// (0x0008289f) popup_vitu2_query_window_t2_ParamLimits

0xae26,	// (0x0008289f) popup_vitu2_query_window_t2

0xae38,	// (0x000828b1) popup_vitu2_query_window_t3_ParamLimits

0xae38,	// (0x000828b1) popup_vitu2_query_window_t3

0xae60,	// (0x000828d9) popup_vitu2_query_window_t4_ParamLimits

0xae60,	// (0x000828d9) popup_vitu2_query_window_t4

0xae72,	// (0x000828eb) popup_vitu2_query_window_t5_ParamLimits

0xae72,	// (0x000828eb) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x0008742c) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x0008742c) popup_vitu2_query_window_t

0x24a3,	// (0x00079f1c) main_cset_text_pane

0xa7e0,	// (0x00082259) aid_area_touch_slider_ParamLimits

0xa7fc,	// (0x00082275) cset_slider_pane_ParamLimits

0xa81f,	// (0x00082298) main_cset_slider_pane_g1_ParamLimits

0xa834,	// (0x000822ad) main_cset_slider_pane_g2_ParamLimits

0x24c4,	// (0x00079f3d) main_cset_slider_pane_g3_ParamLimits

0x24c4,	// (0x00079f3d) main_cset_slider_pane_g3

0xa849,	// (0x000822c2) main_cset_slider_pane_g4_ParamLimits

0xa849,	// (0x000822c2) main_cset_slider_pane_g4

0xa858,	// (0x000822d1) main_cset_slider_pane_g5_ParamLimits

0xa858,	// (0x000822d1) main_cset_slider_pane_g5

0xa864,	// (0x000822dd) main_cset_slider_pane_g6_ParamLimits

0xa864,	// (0x000822dd) main_cset_slider_pane_g6

0xf906,	// (0x0008737f) main_cset_slider_pane_g_ParamLimits

0x24f4,	// (0x00079f6d) main_cset_slider_pane_t1_ParamLimits

0xa8f0,	// (0x00082369) main_cset_slider_pane_t2_ParamLimits

0xa90a,	// (0x00082383) main_cset_slider_pane_t3_ParamLimits

0xa924,	// (0x0008239d) main_cset_slider_pane_t4_ParamLimits

0xa93e,	// (0x000823b7) main_cset_slider_pane_t5_ParamLimits

0xa958,	// (0x000823d1) main_cset_slider_pane_t6_ParamLimits

0xa96d,	// (0x000823e6) main_cset_slider_pane_t7_ParamLimits

0xa997,	// (0x00082410) main_cset_slider_pane_t8_ParamLimits

0xa997,	// (0x00082410) main_cset_slider_pane_t8

0xa9bf,	// (0x00082438) main_cset_slider_pane_t9_ParamLimits

0xa9bf,	// (0x00082438) main_cset_slider_pane_t9

0xa9e7,	// (0x00082460) main_cset_slider_pane_t10_ParamLimits

0xa9e7,	// (0x00082460) main_cset_slider_pane_t10

0xaa0f,	// (0x00082488) main_cset_slider_pane_t11_ParamLimits

0xaa0f,	// (0x00082488) main_cset_slider_pane_t11

0xaa37,	// (0x000824b0) main_cset_slider_pane_t12_ParamLimits

0xaa37,	// (0x000824b0) main_cset_slider_pane_t12

0xaa54,	// (0x000824cd) main_cset_slider_pane_t13_ParamLimits

0xaa54,	// (0x000824cd) main_cset_slider_pane_t13

0xf92b,	// (0x000873a4) main_cset_slider_pane_t_ParamLimits

0xde55,	// (0x000858ce) bg_popup_sub_pane_cp011

0x2631,	// (0x0007a0aa) main_cset_text_pane_g1

0x2639,	// (0x0007a0b2) main_cset_text_pane_t1

0x2647,	// (0x0007a0c0) main_cset_text_pane_t2

0x2655,	// (0x0007a0ce) main_cset_text_pane_t3

0x2663,	// (0x0007a0dc) main_cset_text_pane_t4

0x2671,	// (0x0007a0ea) main_cset_text_pane_t5

0x267f,	// (0x0007a0f8) main_cset_text_pane_t6

0x268d,	// (0x0007a106) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x0008743b) main_cset_text_pane_t

0x5888,	// (0x0007d301) main_cam4_burst_pane

0x5888,	// (0x0007d301) main_cam5_pane

0x2479,	// (0x00079ef2) bg_button_pane_cp019

0x2482,	// (0x00079efb) bg_button_pane_cp020

0x24d0,	// (0x00079f49) main_cset_slider_pane_g7_ParamLimits

0x24d0,	// (0x00079f49) main_cset_slider_pane_g7

0x24dc,	// (0x00079f55) main_cset_slider_pane_g8_ParamLimits

0x24dc,	// (0x00079f55) main_cset_slider_pane_g8

0xa878,	// (0x000822f1) main_cset_slider_pane_g9_ParamLimits

0xa878,	// (0x000822f1) main_cset_slider_pane_g9

0xa884,	// (0x000822fd) main_cset_slider_pane_g10_ParamLimits

0xa884,	// (0x000822fd) main_cset_slider_pane_g10

0xa890,	// (0x00082309) main_cset_slider_pane_g11_ParamLimits

0xa890,	// (0x00082309) main_cset_slider_pane_g11

0xa89c,	// (0x00082315) main_cset_slider_pane_g12_ParamLimits

0xa89c,	// (0x00082315) main_cset_slider_pane_g12

0xa8a8,	// (0x00082321) main_cset_slider_pane_g13_ParamLimits

0xa8a8,	// (0x00082321) main_cset_slider_pane_g13

0xa8b4,	// (0x0008232d) main_cset_slider_pane_g14_ParamLimits

0xa8b4,	// (0x0008232d) main_cset_slider_pane_g14

0xa8c0,	// (0x00082339) main_cset_slider_pane_g15_ParamLimits

0xa8c0,	// (0x00082339) main_cset_slider_pane_g15

0x251c,	// (0x00079f95) main_cset_slider_pane_t14_ParamLimits

0x251c,	// (0x00079f95) main_cset_slider_pane_t14

0x2555,	// (0x00079fce) main_cset_slider_pane_t15_ParamLimits

0x2555,	// (0x00079fce) main_cset_slider_pane_t15

0xaeda,	// (0x00082953) aid_cam4_burst_size_cell_ParamLimits

0xaeda,	// (0x00082953) aid_cam4_burst_size_cell

0xaef6,	// (0x0008296f) grid_cam4_burst_pane_ParamLimits

0xaef6,	// (0x0008296f) grid_cam4_burst_pane

0xaf18,	// (0x00082991) linegrid_cam4_burst_pane_ParamLimits

0xaf18,	// (0x00082991) linegrid_cam4_burst_pane

0xaf36,	// (0x000829af) scroll_pane_cp30_ParamLimits

0xaf36,	// (0x000829af) scroll_pane_cp30

0xaf42,	// (0x000829bb) cell_cam4_burst_pane_ParamLimits

0xaf42,	// (0x000829bb) cell_cam4_burst_pane

0x269b,	// (0x0007a114) linegrid_cam4_burst_pane_g1_ParamLimits

0x269b,	// (0x0007a114) linegrid_cam4_burst_pane_g1

0xaf7a,	// (0x000829f3) linegrid_cam4_burst_pane_g2_ParamLimits

0xaf7a,	// (0x000829f3) linegrid_cam4_burst_pane_g2

0x26a8,	// (0x0007a121) linegrid_cam4_burst_pane_g3_ParamLimits

0x26a8,	// (0x0007a121) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x0008744a) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x0008744a) linegrid_cam4_burst_pane_g

0xaf8b,	// (0x00082a04) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xaf8b,	// (0x00082a04) linegrid_cam4_burst_pane_g3_copy1

0x26b5,	// (0x0007a12e) linegrid_cam4_burst_pane_g4_ParamLimits

0x26b5,	// (0x0007a12e) linegrid_cam4_burst_pane_g4

0xafa5,	// (0x00082a1e) linegrid_cam4_burst_pane_g5_ParamLimits

0xafa5,	// (0x00082a1e) linegrid_cam4_burst_pane_g5

0xafb6,	// (0x00082a2f) linegrid_cam4_burst_pane_g6_ParamLimits

0xafb6,	// (0x00082a2f) linegrid_cam4_burst_pane_g6

0x26c2,	// (0x0007a13b) linegrid_cam4_burst_pane_g7_ParamLimits

0x26c2,	// (0x0007a13b) linegrid_cam4_burst_pane_g7

0xafc7,	// (0x00082a40) cell_cam4_burst_pane_g1

0x26db,	// (0x0007a154) main_cam5_pane_t1_ParamLimits

0x26db,	// (0x0007a154) main_cam5_pane_t1

0x26ed,	// (0x0007a166) main_cam5_pane_t2_ParamLimits

0x26ed,	// (0x0007a166) main_cam5_pane_t2

0x26ff,	// (0x0007a178) main_cam5_pane_t3_ParamLimits

0x26ff,	// (0x0007a178) main_cam5_pane_t3

0x2711,	// (0x0007a18a) main_cam5_pane_t4_ParamLimits

0x2711,	// (0x0007a18a) main_cam5_pane_t4

0x2727,	// (0x0007a1a0) main_cam5_pane_t5_ParamLimits

0x2727,	// (0x0007a1a0) main_cam5_pane_t5

0x2739,	// (0x0007a1b2) main_cam5_pane_t6_ParamLimits

0x2739,	// (0x0007a1b2) main_cam5_pane_t6

0x274b,	// (0x0007a1c4) main_cam5_pane_t7_ParamLimits

0x274b,	// (0x0007a1c4) main_cam5_pane_t7

0x275d,	// (0x0007a1d6) main_cam5_pane_t8_ParamLimits

0x275d,	// (0x0007a1d6) main_cam5_pane_t8

0x2779,	// (0x0007a1f2) main_cam5_pane_t9_ParamLimits

0x2779,	// (0x0007a1f2) main_cam5_pane_t9

0x278b,	// (0x0007a204) main_cam5_pane_t10_ParamLimits

0x278b,	// (0x0007a204) main_cam5_pane_t10

0x279d,	// (0x0007a216) main_cam5_pane_t11_ParamLimits

0x279d,	// (0x0007a216) main_cam5_pane_t11

0x27af,	// (0x0007a228) main_cam5_pane_t12_ParamLimits

0x27af,	// (0x0007a228) main_cam5_pane_t12

0x27c4,	// (0x0007a23d) main_cam5_pane_t13_ParamLimits

0x27c4,	// (0x0007a23d) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x00087456) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x00087456) main_cam5_pane_t

0x5831,	// (0x0007d2aa) popup_scut_keymap_window_ParamLimits

0x5831,	// (0x0007d2aa) popup_scut_keymap_window

0xafda,	// (0x00082a53) aid_size_cell_brow_shortcut

0x0931,	// (0x000783aa) bg_popup_window_pane_cp010

0xafe6,	// (0x00082a5f) grid_scut_pane

0xaff0,	// (0x00082a69) cell_scut_pane_ParamLimits

0xaff0,	// (0x00082a69) cell_scut_pane

0xb005,	// (0x00082a7e) cell_scut_pane_g1

0x27e1,	// (0x0007a25a) cell_scut_pane_t1

0x27f0,	// (0x0007a269) cell_scut_pane_t2

0xb00e,	// (0x00082a87) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x00087471) cell_scut_pane_t

0x9203,	// (0x00080c7c) main_mup3_pane_g8_ParamLimits

0x9203,	// (0x00080c7c) main_mup3_pane_g8

0xa37d,	// (0x00081df6) area_vitu2_query_pane_ParamLimits

0xa37d,	// (0x00081df6) area_vitu2_query_pane

0xada1,	// (0x0008281a) input_focus_pane_cp08

0x27ff,	// (0x0007a278) area_vitu2_query_pane_g1

0xb01c,	// (0x00082a95) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x00087478) area_vitu2_query_pane_g

0xb02b,	// (0x00082aa4) area_vitu2_query_pane_t1_ParamLimits

0xb02b,	// (0x00082aa4) area_vitu2_query_pane_t1

0xb03d,	// (0x00082ab6) area_vitu2_query_pane_t2_ParamLimits

0xb03d,	// (0x00082ab6) area_vitu2_query_pane_t2

0xb04f,	// (0x00082ac8) area_vitu2_query_pane_t3_ParamLimits

0xb04f,	// (0x00082ac8) area_vitu2_query_pane_t3

0x280b,	// (0x0007a284) area_vitu2_query_pane_t4_ParamLimits

0x280b,	// (0x0007a284) area_vitu2_query_pane_t4

0x2833,	// (0x0007a2ac) area_vitu2_query_pane_t5_ParamLimits

0x2833,	// (0x0007a2ac) area_vitu2_query_pane_t5

0x285b,	// (0x0007a2d4) area_vitu2_query_pane_t6_ParamLimits

0x285b,	// (0x0007a2d4) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x0008747d) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x0008747d) area_vitu2_query_pane_t

0xad89,	// (0x00082802) bg_button_pane_cp018

0xb077,	// (0x00082af0) bg_button_pane_cp021

0xb083,	// (0x00082afc) bg_button_pane_cp022

0xb0a2,	// (0x00082b1b) input_focus_pane_cp09

0x769a,	// (0x0007f113) aid_size_touch_mv_arrow_left

0x12c9,	// (0x00078d42) aid_size_touch_mv_arrow_right

0xa8d8,	// (0x00082351) main_cset_slider_pane_g16_ParamLimits

0xa8d8,	// (0x00082351) main_cset_slider_pane_g16

0xa8e4,	// (0x0008235d) main_cset_slider_pane_g17_ParamLimits

0xa8e4,	// (0x0008235d) main_cset_slider_pane_g17

0xafc7,	// (0x00082a40) cell_cam4_burst_pane_g1_ParamLimits

0xde55,	// (0x000858ce) compa_mode_pane

0xab0c,	// (0x00082585) popup_vtel_slider_window_g3_ParamLimits

0xab0c,	// (0x00082585) popup_vtel_slider_window_g3

0xab20,	// (0x00082599) popup_vtel_slider_window_g4_ParamLimits

0xab20,	// (0x00082599) popup_vtel_slider_window_g4

0xab34,	// (0x000825ad) popup_vtel_slider_window_t1_ParamLimits

0xab34,	// (0x000825ad) popup_vtel_slider_window_t1

0x5888,	// (0x0007d301) main_cl_pane

0x8866,	// (0x000802df) popup_imed_adjust2_window_ParamLimits

0x87c2,	// (0x0008023b) bg_tb_trans_pane_cp05_ParamLimits

0xeda9,	// (0x00086822) popup_imed_adjust2_window_g1_ParamLimits

0xedb8,	// (0x00086831) popup_imed_adjust2_window_g2_ParamLimits

0xedb8,	// (0x00086831) popup_imed_adjust2_window_g2

0xedc4,	// (0x0008683d) popup_imed_adjust2_window_g3_ParamLimits

0xedc4,	// (0x0008683d) popup_imed_adjust2_window_g3

0x0002,

0xf76b,	// (0x000871e4) popup_imed_adjust2_window_g_ParamLimits

0xf76b,	// (0x000871e4) popup_imed_adjust2_window_g

0xedd0,	// (0x00086849) popup_imed_adjust2_window_t1_ParamLimits

0xede8,	// (0x00086861) slider_imed_adjust_pane_ParamLimits

0xedfc,	// (0x00086875) slider_imed_adjust_pane_g1_ParamLimits

0xee0c,	// (0x00086885) slider_imed_adjust_pane_g2_ParamLimits

0xee1c,	// (0x00086895) slider_imed_adjust_pane_g3_ParamLimits

0xee2d,	// (0x000868a6) slider_imed_adjust_pane_g4_ParamLimits

0xf772,	// (0x000871eb) slider_imed_adjust_pane_g_ParamLimits

0xa117,	// (0x00081b90) aid_touch_area_cam4_ParamLimits

0xa117,	// (0x00081b90) aid_touch_area_cam4

0xa125,	// (0x00081b9e) battery_pane_cp01

0xa1a4,	// (0x00081c1d) main_camera4_pane_g6_ParamLimits

0xa1a4,	// (0x00081c1d) main_camera4_pane_g6

0xa1c2,	// (0x00081c3b) main_camera4_pane_t2_ParamLimits

0xa1c2,	// (0x00081c3b) main_camera4_pane_t2

0x0001,

0xf879,	// (0x000872f2) main_camera4_pane_t_ParamLimits

0xf879,	// (0x000872f2) main_camera4_pane_t

0xa258,	// (0x00081cd1) aid_touch_area_vid4_ParamLimits

0xa258,	// (0x00081cd1) aid_touch_area_vid4

0xa1a4,	// (0x00081c1d) main_video4_pane_g5_ParamLimits

0xa1a4,	// (0x00081c1d) main_video4_pane_g5

0xa288,	// (0x00081d01) vid4_progress_pane_ParamLimits

0xa288,	// (0x00081d01) vid4_progress_pane

0x24e8,	// (0x00079f61) main_cset_slider_pane_g18_ParamLimits

0x24e8,	// (0x00079f61) main_cset_slider_pane_g18

0x26cf,	// (0x0007a148) cell_cam4_burst_pane_g2_ParamLimits

0x26cf,	// (0x0007a148) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x00087451) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x00087451) cell_cam4_burst_pane_g

0xb0b2,	// (0x00082b2b) bg_cl_pane_ParamLimits

0xb0b2,	// (0x00082b2b) bg_cl_pane

0xb0be,	// (0x00082b37) cl_header_pane_ParamLimits

0xb0be,	// (0x00082b37) cl_header_pane

0xb0ca,	// (0x00082b43) cl_listscroll_pane_ParamLimits

0xb0ca,	// (0x00082b43) cl_listscroll_pane

0x28a7,	// (0x0007a320) bg_cl_pane_g1

0x28af,	// (0x0007a328) bg_cl_pane_g2

0x28b7,	// (0x0007a330) bg_cl_pane_g3

0x28bf,	// (0x0007a338) bg_cl_pane_g4

0x28c7,	// (0x0007a340) bg_cl_pane_g5

0x28cf,	// (0x0007a348) bg_cl_pane_g6

0x28d7,	// (0x0007a350) bg_cl_pane_g7

0x28df,	// (0x0007a358) bg_cl_pane_g8

0x28e7,	// (0x0007a360) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x0008748c) bg_cl_pane_g

0xb0d6,	// (0x00082b4f) aid_height_cl_leading_ParamLimits

0xb0d6,	// (0x00082b4f) aid_height_cl_leading

0xb0e2,	// (0x00082b5b) aid_height_cl_text_ParamLimits

0xb0e2,	// (0x00082b5b) aid_height_cl_text

0xe561,	// (0x00085fda) bg_cl_header_pane_ParamLimits

0xe561,	// (0x00085fda) bg_cl_header_pane

0xb0fa,	// (0x00082b73) cl_header_pane_g1_ParamLimits

0xb0fa,	// (0x00082b73) cl_header_pane_g1

0xb107,	// (0x00082b80) cl_header_pane_t1_ParamLimits

0xb107,	// (0x00082b80) cl_header_pane_t1

0x28ef,	// (0x0007a368) cl_list_pane

0x28f8,	// (0x0007a371) hc_scroll_pane_cp01

0x0be5,	// (0x0007865e) bg_cl_header_pane_g1

0x238f,	// (0x00079e08) bg_cl_header_pane_g2

0x0c05,	// (0x0007867e) bg_cl_header_pane_g3

0x239f,	// (0x00079e18) bg_cl_header_pane_g4

0x2397,	// (0x00079e10) bg_cl_header_pane_g5

0x25ea,	// (0x0007a063) bg_cl_header_pane_g6

0x23b7,	// (0x00079e30) bg_cl_header_pane_g7

0x23bf,	// (0x00079e38) bg_cl_header_pane_g8

0x23af,	// (0x00079e28) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x0008749f) bg_cl_header_pane_g

0xb119,	// (0x00082b92) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb119,	// (0x00082b92) hc_cl_list_double_graphic_heading_pane

0xb129,	// (0x00082ba2) hc_cl_list_single_graphic_pane_ParamLimits

0xb129,	// (0x00082ba2) hc_cl_list_single_graphic_pane

0xb13b,	// (0x00082bb4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb13b,	// (0x00082bb4) hc_cl_list_single_graphic_pane_g1

0xb147,	// (0x00082bc0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb147,	// (0x00082bc0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x000874b2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x000874b2) hc_cl_list_single_graphic_pane_g

0xb15b,	// (0x00082bd4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb15b,	// (0x00082bd4) hc_cl_list_single_graphic_pane_t1

0xb13b,	// (0x00082bb4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb13b,	// (0x00082bb4) hc_cl_list_double_graphic_heading_pane_g1

0xb170,	// (0x00082be9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb170,	// (0x00082be9) hc_cl_list_double_graphic_heading_pane_g2

0xb184,	// (0x00082bfd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb184,	// (0x00082bfd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x000874b7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x000874b7) hc_cl_list_double_graphic_heading_pane_g

0xb198,	// (0x00082c11) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb198,	// (0x00082c11) hc_cl_list_double_graphic_heading_pane_t1

0xb1ad,	// (0x00082c26) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb1ad,	// (0x00082c26) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x000874be) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x000874be) hc_cl_list_double_graphic_heading_pane_t

0xb1c2,	// (0x00082c3b) vid4_progress_pane_g1

0xb1d1,	// (0x00082c4a) vid4_progress_pane_g2

0xb1e0,	// (0x00082c59) vid4_progress_pane_g3

0xb1ef,	// (0x00082c68) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x000874c3) vid4_progress_pane_g

0xb207,	// (0x00082c80) vid4_progress_pane_t1

0xb21d,	// (0x00082c96) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x000874ce) vid4_progress_pane_t

0xb247,	// (0x00082cc0) wait_bar_pane_cp07

0x8e50,	// (0x000808c9) blid_firmament_pane_ParamLimits

0x8e91,	// (0x0008090a) popup_blid_sat_info2_window_g1

0x8eb5,	// (0x0008092e) popup_blid_sat_info2_window_t3

0x8ec3,	// (0x0008093c) popup_blid_sat_info2_window_t4

0xe7a0,	// (0x00086219) popup_blid_sat_info2_window_t5

0xe7ae,	// (0x00086227) popup_blid_sat_info2_window_t6

0xe7be,	// (0x00086237) popup_blid_sat_info2_window_t7

0xe7cc,	// (0x00086245) popup_blid_sat_info2_window_t8

0xe7da,	// (0x00086253) popup_blid_sat_info2_window_t9

0xe7e8,	// (0x00086261) popup_blid_sat_info2_window_t10

0xe8a3,	// (0x0008631c) aid_firma_cardinal_ParamLimits

0xe8b7,	// (0x00086330) blid_firmament_pane_t1_ParamLimits

0xe8ce,	// (0x00086347) blid_firmament_pane_t2_ParamLimits

0xe8e5,	// (0x0008635e) blid_firmament_pane_t3_ParamLimits

0xe8fc,	// (0x00086375) blid_firmament_pane_t4_ParamLimits

0xf664,	// (0x000870dd) blid_firmament_pane_t_ParamLimits

0xe913,	// (0x0008638c) blid_sat_info_pane_ParamLimits

0x87d0,	// (0x00080249) main_cam_set_pane_ParamLimits

0x989b,	// (0x00081314) aid_size_cell_colour_35_ParamLimits

0x98b2,	// (0x0008132b) aid_size_cell_colour_112_ParamLimits

0x98c9,	// (0x00081342) aid_size_cell_effect_ParamLimits

0x0861,	// (0x000782da) bg_tb_trans_pane_cp02_ParamLimits

0xecdd,	// (0x00086756) heading_imed_pane_ParamLimits

0x98e3,	// (0x0008135c) listscroll_imed_pane_ParamLimits

0x1ea6,	// (0x0007991f) popup_call2_audio_first_window_g5_ParamLimits

0x1ea6,	// (0x0007991f) popup_call2_audio_first_window_g5

0x9ea6,	// (0x0008191f) aid_size_touch_image3_arrow_left_ParamLimits

0x9ea6,	// (0x0008191f) aid_size_touch_image3_arrow_left

0x9eba,	// (0x00081933) aid_size_touch_image3_arrow_right_ParamLimits

0x9eba,	// (0x00081933) aid_size_touch_image3_arrow_right

0xb232,	// (0x00082cab) vid4_progress_pane_t3

0x9a5b,	// (0x000814d4) main_hwr_training_symbol_option_pane_ParamLimits

0x9a5b,	// (0x000814d4) main_hwr_training_symbol_option_pane

0xefb9,	// (0x00086a32) popup_hwr_training_preview_window_ParamLimits

0xefb9,	// (0x00086a32) popup_hwr_training_preview_window

0x9ab6,	// (0x0008152f) hwr_training_navi_pane_g5_ParamLimits

0x9ab6,	// (0x0008152f) hwr_training_navi_pane_g5

0x237d,	// (0x00079df6) popup_char_count_window

0x5872,	// (0x0007d2eb) bg_popup_sub_pane_cp20_ParamLimits

0xac22,	// (0x0008269b) list_vitu2_match_list_pane_ParamLimits

0xac2e,	// (0x000826a7) vitu2_page_scroll_pane_ParamLimits

0xac2e,	// (0x000826a7) vitu2_page_scroll_pane

0x291b,	// (0x0007a394) list_single_hwr_training_symbol_option_pane_ParamLimits

0x291b,	// (0x0007a394) list_single_hwr_training_symbol_option_pane

0x292e,	// (0x0007a3a7) list_single_hwr_training_symbol_option_pane_g1

0x2936,	// (0x0007a3af) list_single_hwr_training_symbol_option_pane_t1

0x2944,	// (0x0007a3bd) bg_button_pane_cp023

0x294d,	// (0x0007a3c6) bg_button_pane_cp024

0xb286,	// (0x00082cff) vitu2_page_scroll_pane_g1

0xb28e,	// (0x00082d07) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x000874d5) vitu2_page_scroll_pane_g

0xb296,	// (0x00082d0f) vitu2_page_scroll_pane_t1

0xe942,	// (0x000863bb) popup_char_count_window_g1

0x2980,	// (0x0007a3f9) popup_char_count_window_g2

0x2989,	// (0x0007a402) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x000874da) popup_char_count_window_g

0x2992,	// (0x0007a40b) popup_char_count_window_t1

0x5888,	// (0x0007d301) main_vded2_pane

0xed97,	// (0x00086810) aid_size_cell_imed_line

0xeda1,	// (0x0008681a) grid_imed_line_width_pane

0xa2d3,	// (0x00081d4c) vid4_indicators_pane_g4

0x29a0,	// (0x0007a419) cell_imed_line_width_pane_ParamLimits

0x29a0,	// (0x0007a419) cell_imed_line_width_pane

0x29b2,	// (0x0007a42b) cell_imed_line_width_pane_g1

0x29bb,	// (0x0007a434) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x000874e1) cell_imed_line_width_pane_g

0xb2a5,	// (0x00082d1e) main_vded2_pane_g1_ParamLimits

0xb2a5,	// (0x00082d1e) main_vded2_pane_g1

0xb2b2,	// (0x00082d2b) main_vded2_pane_g2_ParamLimits

0xb2b2,	// (0x00082d2b) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x000874e6) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x000874e6) main_vded2_pane_g

0xb2be,	// (0x00082d37) vded2_slider_pane_ParamLimits

0xb2be,	// (0x00082d37) vded2_slider_pane

0xb2cb,	// (0x00082d44) aid_size_touch_vded2_end

0xb2d3,	// (0x00082d4c) aid_size_touch_vded2_playhead

0xb2db,	// (0x00082d54) aid_size_touch_vded2_start

0xb2e3,	// (0x00082d5c) vded2_slider_bg_pane

0xb2ec,	// (0x00082d65) vded2_slider_pane_g1

0xb2f5,	// (0x00082d6e) vded2_slider_pane_g2

0xb2fd,	// (0x00082d76) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x000874eb) vded2_slider_pane_g

0xb306,	// (0x00082d7f) vded2_slider_bg_pane_g1

0xb30f,	// (0x00082d88) vded2_slider_bg_pane_g2

0xb318,	// (0x00082d91) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x000874f2) vded2_slider_bg_pane_g

0x7a6c,	// (0x0007f4e5) aid_postcard_touch_down_pane_ParamLimits

0x7a6c,	// (0x0007f4e5) aid_postcard_touch_down_pane

0x7a78,	// (0x0007f4f1) aid_postcard_touch_up_pane_ParamLimits

0x7a78,	// (0x0007f4f1) aid_postcard_touch_up_pane

0x5888,	// (0x0007d301) main_blid2_pane

0x8803,	// (0x0008027c) popup_blid2_search_window

0xde55,	// (0x000858ce) blid2_gps_pane

0xde55,	// (0x000858ce) blid2_navig_pane

0xde55,	// (0x000858ce) blid2_search_pane

0xde55,	// (0x000858ce) blid2_tripm_pane

0xb321,	// (0x00082d9a) blid2_search_pane_g1_ParamLimits

0xb321,	// (0x00082d9a) blid2_search_pane_g1

0xb32d,	// (0x00082da6) blid2_search_pane_t1_ParamLimits

0xb32d,	// (0x00082da6) blid2_search_pane_t1

0xb33f,	// (0x00082db8) aid_size_cell_blid2_gps_ParamLimits

0xb33f,	// (0x00082db8) aid_size_cell_blid2_gps

0xb34f,	// (0x00082dc8) blid2_gps_pane_g1_ParamLimits

0xb34f,	// (0x00082dc8) blid2_gps_pane_g1

0xb35b,	// (0x00082dd4) grid_blid2_satellite_pane_ParamLimits

0xb35b,	// (0x00082dd4) grid_blid2_satellite_pane

0xb367,	// (0x00082de0) blid2_navig_pane_g1_ParamLimits

0xb367,	// (0x00082de0) blid2_navig_pane_g1

0xb373,	// (0x00082dec) blid2_navig_pane_t1_ParamLimits

0xb373,	// (0x00082dec) blid2_navig_pane_t1

0xb385,	// (0x00082dfe) blid2_navig_pane_t2_ParamLimits

0xb385,	// (0x00082dfe) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x000874f9) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x000874f9) blid2_navig_pane_t

0xb397,	// (0x00082e10) blid2_navig_ring_pane_ParamLimits

0xb397,	// (0x00082e10) blid2_navig_ring_pane

0xb3a3,	// (0x00082e1c) blid2_speed_pane_ParamLimits

0xb3a3,	// (0x00082e1c) blid2_speed_pane

0xb3af,	// (0x00082e28) blid2_tripm_pane_g1_ParamLimits

0xb3af,	// (0x00082e28) blid2_tripm_pane_g1

0xb3bb,	// (0x00082e34) blid2_tripm_pane_g2_ParamLimits

0xb3bb,	// (0x00082e34) blid2_tripm_pane_g2

0xb3c7,	// (0x00082e40) blid2_tripm_pane_g3_ParamLimits

0xb3c7,	// (0x00082e40) blid2_tripm_pane_g3

0xb3d3,	// (0x00082e4c) blid2_tripm_pane_g4_ParamLimits

0xb3d3,	// (0x00082e4c) blid2_tripm_pane_g4

0xb3df,	// (0x00082e58) blid2_tripm_pane_g5_ParamLimits

0xb3df,	// (0x00082e58) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x000874fe) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x000874fe) blid2_tripm_pane_g

0xb3f7,	// (0x00082e70) blid2_tripm_pane_t1_ParamLimits

0xb3f7,	// (0x00082e70) blid2_tripm_pane_t1

0xb409,	// (0x00082e82) blid2_tripm_pane_t2_ParamLimits

0xb409,	// (0x00082e82) blid2_tripm_pane_t2

0xb41b,	// (0x00082e94) blid2_tripm_pane_t3_ParamLimits

0xb41b,	// (0x00082e94) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x0008750b) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x0008750b) blid2_tripm_pane_t

0xb44b,	// (0x00082ec4) cell_blid2_satellite_pane_ParamLimits

0xb44b,	// (0x00082ec4) cell_blid2_satellite_pane

0xb463,	// (0x00082edc) cell_blid2_satellite_pane_g1

0x29c3,	// (0x0007a43c) cell_blid2_satellite_pane_t1

0x09a9,	// (0x00078422) blid2_speed_pane_g1

0x29d1,	// (0x0007a44a) blid2_speed_pane_t1

0x29df,	// (0x0007a458) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x00087514) blid2_speed_pane_t

0x09a9,	// (0x00078422) blid2_navig_ring_pane_g1

0xb46c,	// (0x00082ee5) blid2_navig_ring_pane_g2

0xb474,	// (0x00082eed) blid2_navig_ring_pane_g3

0xb47c,	// (0x00082ef5) blid2_navig_ring_pane_g4

0xb484,	// (0x00082efd) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x00087519) blid2_navig_ring_pane_g

0xde55,	// (0x000858ce) bg_popup_window_pane_cp011

0x29ed,	// (0x0007a466) popup_blid2_search_window_g1

0x29f5,	// (0x0007a46e) popup_blid2_search_window_t1

0x2a03,	// (0x0007a47c) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x00087524) popup_blid2_search_window_t

0x0af4,	// (0x0007856d) main_browser_pane_g1

0xe5c9,	// (0x00086042) main_browser_pane_ParamLimits

0x87d0,	// (0x00080249) bg_button_pane_cp011_ParamLimits

0xa54f,	// (0x00081fc8) cell_vitu2_function_pane_g1_ParamLimits

0x87c2,	// (0x0008023b) bg_popup_sub_pane_cp22_ParamLimits

0xada1,	// (0x0008281a) input_focus_pane_cp08_ParamLimits

0xadbc,	// (0x00082835) popup_vitu2_query_button_pane_ParamLimits

0xadbc,	// (0x00082835) popup_vitu2_query_button_pane

0xadcb,	// (0x00082844) popup_vitu2_query_input_button_pane

0x2625,	// (0x0007a09e) popup_vitu2_query_window_g1_ParamLimits

0xadd3,	// (0x0008284c) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x00087425) popup_vitu2_query_window_g_ParamLimits

0xde55,	// (0x000858ce) bg_button_pane_cp026

0xb48c,	// (0x00082f05) popup_vitu2_query_input_button_pane_g1

0xde55,	// (0x000858ce) bg_button_pane_cp025

0x2a11,	// (0x0007a48a) popup_vitu2_query_button_pane_t1

0x8f81,	// (0x000809fa) main_mp3_pane_t6

0x8f8f,	// (0x00080a08) popup_slider_window_cp01

0xa206,	// (0x00081c7f) cam4_battery_pane

0xa206,	// (0x00081c7f) cam4_battery_pane_cp02

0xa206,	// (0x00081c7f) cam4_battery_pane_cp01

0xa206,	// (0x00081c7f) cam4_battery_pane_cp03

0xe796,	// (0x0008620f) cam4_battery_pane_g1

0x09a9,	// (0x00078422) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x00087529) cam4_battery_pane_g

0xe7f6,	// (0x0008626f) popup_blid_sat_info2_window_t11

0x769a,	// (0x0007f113) aid_size_touch_mv_arrow_left_ParamLimits

0x12c9,	// (0x00078d42) aid_size_touch_mv_arrow_right_ParamLimits

0x1322,	// (0x00078d9b) navi_pane_g1_ParamLimits

0x132e,	// (0x00078da7) navi_pane_g2_ParamLimits

0x76be,	// (0x0007f137) navi_pane_g3_ParamLimits

0xf365,	// (0x00086dde) navi_pane_g_ParamLimits

0x76db,	// (0x0007f154) navi_pane_mv_t1_ParamLimits

0x98ef,	// (0x00081368) grid_imed_effect_pane_ParamLimits

0x647c,	// (0x0007def5) aid_placing_vt_slider_lsc

0x0a36,	// (0x000784af) aid_placing_vt_slider_prt

0x0861,	// (0x000782da) bg_tb_trans_pane_cp01_ParamLimits

0xea5a,	// (0x000864d3) popup_image_details_window_g1_ParamLimits

0xea6d,	// (0x000864e6) popup_image_details_window_g2_ParamLimits

0xea82,	// (0x000864fb) popup_image_details_window_g3_ParamLimits

0xea82,	// (0x000864fb) popup_image_details_window_g3

0xf6a4,	// (0x0008711d) popup_image_details_window_g_ParamLimits

0xea96,	// (0x0008650f) popup_image_details_window_t1_ParamLimits

0xeaa8,	// (0x00086521) popup_image_details_window_t2_ParamLimits

0xeac1,	// (0x0008653a) popup_image_details_window_t3_ParamLimits

0xead5,	// (0x0008654e) popup_image_details_window_t4_ParamLimits

0xeaf0,	// (0x00086569) popup_image_details_window_t5_ParamLimits

0xf6ab,	// (0x00087124) popup_image_details_window_t_ParamLimits

0xb0ee,	// (0x00082b67) cl_header_name_pane_ParamLimits

0xb0ee,	// (0x00082b67) cl_header_name_pane

0xb494,	// (0x00082f0d) cl_header_name_pane_t1_ParamLimits

0xb494,	// (0x00082f0d) cl_header_name_pane_t1

0xb4ab,	// (0x00082f24) cl_header_name_pane_t2_ParamLimits

0xb4ab,	// (0x00082f24) cl_header_name_pane_t2

0xb4d5,	// (0x00082f4e) cl_header_name_pane_t3_ParamLimits

0xb4d5,	// (0x00082f4e) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x0008752e) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x0008752e) cl_header_name_pane_t

0x13bb,	// (0x00078e34) navi_pane_mv_g2_ParamLimits

0x2348,	// (0x00079dc1) field_vitu2_entry_pane_g1_ParamLimits

0x2354,	// (0x00079dcd) field_vitu2_entry_pane_g2_ParamLimits

0xa492,	// (0x00081f0b) field_vitu2_entry_pane_g3_ParamLimits

0xa492,	// (0x00081f0b) field_vitu2_entry_pane_g3

0xf8ab,	// (0x00087324) field_vitu2_entry_pane_g_ParamLimits

0xa4dd,	// (0x00081f56) cell_vitu2_itu_pane_g1_ParamLimits

0xa4f5,	// (0x00081f6e) cell_vitu2_itu_pane_g2_ParamLimits

0xa4f5,	// (0x00081f6e) cell_vitu2_itu_pane_g2

0x0001,

0xf8b7,	// (0x00087330) cell_vitu2_itu_pane_g_ParamLimits

0xf8b7,	// (0x00087330) cell_vitu2_itu_pane_g

0x87d0,	// (0x00080249) bg_vkb2_func_pane_cp05_ParamLimits

0x87d0,	// (0x00080249) bg_vkb2_func_pane_cp05

0x87d0,	// (0x00080249) bg_vkb2_func_pane_cp03

0x87d0,	// (0x00080249) bg_vkb2_func_pane_cp04

0x87d0,	// (0x00080249) bg_vkb2_func_pane_cp10_ParamLimits

0x87d0,	// (0x00080249) bg_vkb2_func_pane_cp10

0xb092,	// (0x00082b0b) bg_vkb2_func_pane_cp08

0xad89,	// (0x00082802) bg_vkb2_func_pane_cp06

0xb077,	// (0x00082af0) bg_vkb2_func_pane_cp07

0x2956,	// (0x0007a3cf) bg_vkb2_func_pane_cp11_ParamLimits

0x2956,	// (0x0007a3cf) bg_vkb2_func_pane_cp11

0x296b,	// (0x0007a3e4) bg_vkb2_func_pane_cp12_ParamLimits

0x296b,	// (0x0007a3e4) bg_vkb2_func_pane_cp12

0xde55,	// (0x000858ce) bg_vkb2_func_pane_cp09

0x238f,	// (0x00079e08) bg_vkb2_func_pane_g1

0x0c05,	// (0x0007867e) bg_vkb2_func_pane_g2

0x2397,	// (0x00079e10) bg_vkb2_func_pane_g3

0x239f,	// (0x00079e18) bg_vkb2_func_pane_g4

0x25ea,	// (0x0007a063) bg_vkb2_func_pane_g5

0x23b7,	// (0x00079e30) bg_vkb2_func_pane_g6

0x23bf,	// (0x00079e38) bg_vkb2_func_pane_g7

0x23af,	// (0x00079e28) bg_vkb2_func_pane_g8

0x0be5,	// (0x0007865e) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x00087535) bg_vkb2_func_pane_g

0xb3eb,	// (0x00082e64) blid2_tripm_pane_g6_ParamLimits

0xb3eb,	// (0x00082e64) blid2_tripm_pane_g6

0x222a,	// (0x00079ca3) mp4_progress_pane_g1

0xb43f,	// (0x00082eb8) blid2_tripm_values_pane_ParamLimits

0xb43f,	// (0x00082eb8) blid2_tripm_values_pane

0xb4fa,	// (0x00082f73) blid2_tripm_values_pane_t1

0xb508,	// (0x00082f81) blid2_tripm_values_pane_t2

0xb516,	// (0x00082f8f) blid2_tripm_values_pane_t3

0xb524,	// (0x00082f9d) blid2_tripm_values_pane_t4

0xb532,	// (0x00082fab) blid2_tripm_values_pane_t5

0xb540,	// (0x00082fb9) blid2_tripm_values_pane_t6

0xb54e,	// (0x00082fc7) blid2_tripm_values_pane_t7

0xb55c,	// (0x00082fd5) blid2_tripm_values_pane_t8

0xb56a,	// (0x00082fe3) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x00087548) blid2_tripm_values_pane_t

0x64b6,	// (0x0007df2f) call_video_pane_t1_ParamLimits

0x64d3,	// (0x0007df4c) call_video_pane_t2_ParamLimits

0xf1fc,	// (0x00086c75) call_video_pane_t_ParamLimits

0x794c,	// (0x0007f3c5) msg_header_pane_g1_ParamLimits

0x15a6,	// (0x0007901f) msg_header_pane_g2_ParamLimits

0x15a6,	// (0x0007901f) msg_header_pane_g2

0x0001,

0xf408,	// (0x00086e81) msg_header_pane_g_ParamLimits

0xf408,	// (0x00086e81) msg_header_pane_g

0xe5c9,	// (0x00086042) main_clock2_pane_ParamLimits

0x9693,	// (0x0008110c) grid_clock2_toolbar_pane_ParamLimits

0x9693,	// (0x0008110c) grid_clock2_toolbar_pane

0x9693,	// (0x0008110c) listscroll_clock2_pane_ParamLimits

0x9693,	// (0x0008110c) listscroll_clock2_pane

0x972f,	// (0x000811a8) main_clock2_pane_t3_ParamLimits

0x972f,	// (0x000811a8) main_clock2_pane_t3

0x9741,	// (0x000811ba) main_clock2_pane_t4_ParamLimits

0x9741,	// (0x000811ba) main_clock2_pane_t4

0x2a1f,	// (0x0007a498) cell_clock2_toolbar_pane

0x2a27,	// (0x0007a4a0) cell_clock2_toolbar_pane_cp01

0x2a27,	// (0x0007a4a0) cell_clock2_toolbar_pane_cp02

0x2a2f,	// (0x0007a4a8) cell_clock2_toolbar_pane_cp03

0x2a37,	// (0x0007a4b0) list_clock2_pane

0x2a3f,	// (0x0007a4b8) scroll_pane_cp10

0x2a47,	// (0x0007a4c0) list_single_clock2_pane_ParamLimits

0x2a47,	// (0x0007a4c0) list_single_clock2_pane

0x0931,	// (0x000783aa) list_highlight_pane_cp08

0x2a54,	// (0x0007a4cd) list_single_clock2_pane_t1

0x2a62,	// (0x0007a4db) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x0008755b) list_single_clock2_pane_t

0xde55,	// (0x000858ce) bg_button_pane_cp10

0x2a70,	// (0x0007a4e9) cell_clock2_toolbar_pane_g1

0x79d6,	// (0x0007f44f) aid_main_viewer_pane_g1_ParamLimits

0x79d6,	// (0x0007f44f) aid_main_viewer_pane_g1

0x79e2,	// (0x0007f45b) aid_main_viewer_pane_g2_ParamLimits

0x79e2,	// (0x0007f45b) aid_main_viewer_pane_g2

0x79ee,	// (0x0007f467) aid_main_viewer_pane_g3_ParamLimits

0x79ee,	// (0x0007f467) aid_main_viewer_pane_g3

0x79fd,	// (0x0007f476) aid_main_viewer_pane_g4_ParamLimits

0x79fd,	// (0x0007f476) aid_main_viewer_pane_g4

0x0003,

0xf419,	// (0x00086e92) aid_main_viewer_pane_g_ParamLimits

0xf419,	// (0x00086e92) aid_main_viewer_pane_g

0x5872,	// (0x0007d2eb) main_calc_pane_ParamLimits

0x87de,	// (0x00080257) main_dialer2_pane_ParamLimits

0x5888,	// (0x0007d301) main_cam6_pane

0x5888,	// (0x0007d301) main_vid6_pane

0x969f,	// (0x00081118) listscroll_gen_pane_cp06_ParamLimits

0x969f,	// (0x00081118) listscroll_gen_pane_cp06

0x9753,	// (0x000811cc) main_clock2_pane_t5_ParamLimits

0x9753,	// (0x000811cc) main_clock2_pane_t5

0x979c,	// (0x00081215) aid_call2_pane_cp10_ParamLimits

0x97ae,	// (0x00081227) aid_call_pane_cp10_ParamLimits

0x12bd,	// (0x00078d36) popup_clock_analogue_window_cp10_g1_ParamLimits

0x12bd,	// (0x00078d36) popup_clock_analogue_window_cp10_g2_ParamLimits

0x97c0,	// (0x00081239) popup_clock_analogue_window_cp10_g3_ParamLimits

0x97c0,	// (0x00081239) popup_clock_analogue_window_cp10_g4_ParamLimits

0x12bd,	// (0x00078d36) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf760,	// (0x000871d9) popup_clock_analogue_window_cp10_g_ParamLimits

0x97d2,	// (0x0008124b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x228a,	// (0x00079d03) cell_dialer2_keypad_pane_g2_ParamLimits

0x228a,	// (0x00079d03) cell_dialer2_keypad_pane_g2

0x0001,

0xf84a,	// (0x000872c3) cell_dialer2_keypad_pane_g_ParamLimits

0xf84a,	// (0x000872c3) cell_dialer2_keypad_pane_g

0x9e6f,	// (0x000818e8) cell_dialer2_keypad_pane_t1

0xa7cd,	// (0x00082246) main_cset_text2_pane_ParamLimits

0xa7cd,	// (0x00082246) main_cset_text2_pane

0x27ff,	// (0x0007a278) area_vitu2_query_pane_g1_ParamLimits

0xb01c,	// (0x00082a95) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x00087478) area_vitu2_query_pane_g_ParamLimits

0x2883,	// (0x0007a2fc) area_vitu2_query_pane_t7_ParamLimits

0x2883,	// (0x0007a2fc) area_vitu2_query_pane_t7

0xad89,	// (0x00082802) bg_button_pane_cp018_ParamLimits

0xb077,	// (0x00082af0) bg_button_pane_cp021_ParamLimits

0xb083,	// (0x00082afc) bg_button_pane_cp022_ParamLimits

0xb092,	// (0x00082b0b) bg_vkb2_func_pane_cp08_ParamLimits

0xad89,	// (0x00082802) bg_vkb2_func_pane_cp06_ParamLimits

0xb077,	// (0x00082af0) bg_vkb2_func_pane_cp07_ParamLimits

0xb0a2,	// (0x00082b1b) input_focus_pane_cp09_ParamLimits

0xb578,	// (0x00082ff1) cam6_autofocus_pane_ParamLimits

0xb578,	// (0x00082ff1) cam6_autofocus_pane

0xb594,	// (0x0008300d) cam6_image_uncrop_pane_ParamLimits

0xb594,	// (0x0008300d) cam6_image_uncrop_pane

0xb5c0,	// (0x00083039) cam6_indi_pane_ParamLimits

0xb5c0,	// (0x00083039) cam6_indi_pane

0xb5da,	// (0x00083053) cam6_mode_pane_ParamLimits

0xb5da,	// (0x00083053) cam6_mode_pane

0xb5ee,	// (0x00083067) cam6_timer_pane_ParamLimits

0xb5ee,	// (0x00083067) cam6_timer_pane

0xb602,	// (0x0008307b) cam6_zoom_pane_ParamLimits

0xb602,	// (0x0008307b) cam6_zoom_pane

0xb61b,	// (0x00083094) cam6_mode_pane_g1_ParamLimits

0xb61b,	// (0x00083094) cam6_mode_pane_g1

0xb627,	// (0x000830a0) cam6_mode_pane_g2_ParamLimits

0xb627,	// (0x000830a0) cam6_mode_pane_g2

0xb633,	// (0x000830ac) cam6_mode_pane_g3_ParamLimits

0xb633,	// (0x000830ac) cam6_mode_pane_g3

0xb63f,	// (0x000830b8) cam6_mode_pane_g4_ParamLimits

0xb63f,	// (0x000830b8) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x00087560) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x00087560) cam6_mode_pane_g

0xf051,	// (0x00086aca) bg_tb_trans_pane_cp08_ParamLimits

0xf051,	// (0x00086aca) bg_tb_trans_pane_cp08

0x2a78,	// (0x0007a4f1) cam6_battery_pane_ParamLimits

0x2a78,	// (0x0007a4f1) cam6_battery_pane

0x2a8e,	// (0x0007a507) cam6_indi_pane_g1_ParamLimits

0x2a8e,	// (0x0007a507) cam6_indi_pane_g1

0x2aa0,	// (0x0007a519) cam6_indi_pane_g2_ParamLimits

0x2aa0,	// (0x0007a519) cam6_indi_pane_g2

0x2ab2,	// (0x0007a52b) cam6_indi_pane_g3_ParamLimits

0x2ab2,	// (0x0007a52b) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x00087569) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x00087569) cam6_indi_pane_g

0x2ac4,	// (0x0007a53d) cam6_indi_pane_t1_ParamLimits

0x2ac4,	// (0x0007a53d) cam6_indi_pane_t1

0xa311,	// (0x00081d8a) cam6_autofocus_pane_g1

0xa309,	// (0x00081d82) cam6_autofocus_pane_g2

0xa321,	// (0x00081d9a) cam6_autofocus_pane_g3

0xa319,	// (0x00081d92) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x00087570) cam6_autofocus_pane_g

0x2aea,	// (0x0007a563) cam6_timer_pane_g1

0x2af2,	// (0x0007a56b) cam6_timer_pane_t1

0x2b00,	// (0x0007a579) cam6_zoom_cont_pane

0x2b08,	// (0x0007a581) cam6_zoom_pane_g1

0x2b11,	// (0x0007a58a) cam6_zoom_pane_g2

0xb64b,	// (0x000830c4) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x00087579) cam6_zoom_pane_g

0x09a9,	// (0x00078422) cam6_battery_pane_g1

0x09a9,	// (0x00078422) cam6_battery_pane_g2

0x0001,

0xf3c9,	// (0x00086e42) cam6_battery_pane_g

0x2b08,	// (0x0007a581) cam6_zoom_cont_pane_g1

0x2b11,	// (0x0007a58a) cam6_zoom_cont_pane_g2

0x2b1a,	// (0x0007a593) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x00087580) cam6_zoom_cont_pane_g

0xb669,	// (0x000830e2) cam6_mode_pane_cp_ParamLimits

0xb669,	// (0x000830e2) cam6_mode_pane_cp

0xb67d,	// (0x000830f6) cam6_zoom_pane_cp_ParamLimits

0xb67d,	// (0x000830f6) cam6_zoom_pane_cp

0xb693,	// (0x0008310c) vid6_image_uncrop_cif_pane_ParamLimits

0xb693,	// (0x0008310c) vid6_image_uncrop_cif_pane

0xb6b5,	// (0x0008312e) vid6_image_uncrop_nhd_pane_ParamLimits

0xb6b5,	// (0x0008312e) vid6_image_uncrop_nhd_pane

0xb6cc,	// (0x00083145) vid6_image_uncrop_vga_pane_ParamLimits

0xb6cc,	// (0x00083145) vid6_image_uncrop_vga_pane

0xb6e3,	// (0x0008315c) vid6_image_uncrop_wvga_pane_ParamLimits

0xb6e3,	// (0x0008315c) vid6_image_uncrop_wvga_pane

0xb6fa,	// (0x00083173) vid6_indi_pane_ParamLimits

0xb6fa,	// (0x00083173) vid6_indi_pane

0xf051,	// (0x00086aca) bg_tb_trans_pane_cp09_ParamLimits

0xf051,	// (0x00086aca) bg_tb_trans_pane_cp09

0x2b2e,	// (0x0007a5a7) cam6_battery_pane_cp_ParamLimits

0x2b2e,	// (0x0007a5a7) cam6_battery_pane_cp

0x2b3a,	// (0x0007a5b3) vid6_indi_pane_g1_ParamLimits

0x2b3a,	// (0x0007a5b3) vid6_indi_pane_g1

0x2b4c,	// (0x0007a5c5) vid6_indi_pane_g2_ParamLimits

0x2b4c,	// (0x0007a5c5) vid6_indi_pane_g2

0x2b5e,	// (0x0007a5d7) vid6_indi_pane_g3_ParamLimits

0x2b5e,	// (0x0007a5d7) vid6_indi_pane_g3

0x2b73,	// (0x0007a5ec) vid6_indi_pane_g4_ParamLimits

0x2b73,	// (0x0007a5ec) vid6_indi_pane_g4

0x2b88,	// (0x0007a601) vid6_indi_pane_g5_ParamLimits

0x2b88,	// (0x0007a601) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x00087587) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x00087587) vid6_indi_pane_g

0x2ba2,	// (0x0007a61b) vid6_indi_pane_t1_ParamLimits

0x2ba2,	// (0x0007a61b) vid6_indi_pane_t1

0x2bb8,	// (0x0007a631) vid6_indi_pane_t2_ParamLimits

0x2bb8,	// (0x0007a631) vid6_indi_pane_t2

0x2be0,	// (0x0007a659) vid6_indi_pane_t3_ParamLimits

0x2be0,	// (0x0007a659) vid6_indi_pane_t3

0x2c08,	// (0x0007a681) vid6_indi_pane_t4_ParamLimits

0x2c08,	// (0x0007a681) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x00087592) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x00087592) vid6_indi_pane_t

0x2c2c,	// (0x0007a6a5) wait_bar_pane_cp08

0xb71a,	// (0x00083193) main_cset_text2_pane_t1_ParamLimits

0xb71a,	// (0x00083193) main_cset_text2_pane_t1

0xb654,	// (0x000830cd) listscroll_gen_pane_cp06_t1_ParamLimits

0xb654,	// (0x000830cd) listscroll_gen_pane_cp06_t1

0x5888,	// (0x0007d301) main_cam6_set_pane

0xa1f8,	// (0x00081c71) bg_tb_trans_pane_cp06_ParamLimits

0xa20e,	// (0x00081c87) cam4_indicators_pane_g1_ParamLimits

0xa21e,	// (0x00081c97) cam4_indicators_pane_g2_ParamLimits

0xf887,	// (0x00087300) cam4_indicators_pane_g_ParamLimits

0xa23e,	// (0x00081cb7) cam4_indicators_pane_t1_ParamLimits

0x87d0,	// (0x00080249) bg_tb_trans_pane_cp07_ParamLimits

0xa20e,	// (0x00081c87) vid4_indicators_pane_g1_ParamLimits

0xa2b2,	// (0x00081d2b) vid4_indicators_pane_g2_ParamLimits

0xa2c2,	// (0x00081d3b) vid4_indicators_pane_g3_ParamLimits

0xa2d3,	// (0x00081d4c) vid4_indicators_pane_g4_ParamLimits

0xf899,	// (0x00087312) vid4_indicators_pane_g_ParamLimits

0xa2ef,	// (0x00081d68) vid4_indicators_pane_t1_ParamLimits

0xb1c2,	// (0x00082c3b) vid4_progress_pane_g1_ParamLimits

0xb1d1,	// (0x00082c4a) vid4_progress_pane_g2_ParamLimits

0xb1e0,	// (0x00082c59) vid4_progress_pane_g3_ParamLimits

0xb1ef,	// (0x00082c68) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x000874c3) vid4_progress_pane_g_ParamLimits

0xb207,	// (0x00082c80) vid4_progress_pane_t1_ParamLimits

0xb21d,	// (0x00082c96) vid4_progress_pane_t2_ParamLimits

0xb232,	// (0x00082cab) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x000874ce) vid4_progress_pane_t_ParamLimits

0xb247,	// (0x00082cc0) wait_bar_pane_cp07_ParamLimits

0xb736,	// (0x000831af) main_cam6_set_pane_g2_ParamLimits

0xb736,	// (0x000831af) main_cam6_set_pane_g2

0xb742,	// (0x000831bb) main_cset6_listscroll_pane_ParamLimits

0xb742,	// (0x000831bb) main_cset6_listscroll_pane

0xb76b,	// (0x000831e4) main_cset6_slider_pane_ParamLimits

0xb76b,	// (0x000831e4) main_cset6_slider_pane

0xb777,	// (0x000831f0) main_cset6_text2_pane_ParamLimits

0xb777,	// (0x000831f0) main_cset6_text2_pane

0x2c3c,	// (0x0007a6b5) main_cset6_text_pane

0x24ab,	// (0x00079f24) main_cset_list_pane_copy1_ParamLimits

0x24ab,	// (0x00079f24) main_cset_list_pane_copy1

0x24bb,	// (0x00079f34) scroll_pane_cp028_copy1

0xb78a,	// (0x00083203) cset_list_set_pane_copy1

0x258e,	// (0x0007a007) aid_position_infowindow_above_copy1

0x2596,	// (0x0007a00f) aid_position_infowindow_below_copy1

0xb799,	// (0x00083212) cset_list_set_pane_g1_copy1

0xb7a1,	// (0x0008321a) cset_list_set_pane_g3_copy1_ParamLimits

0xb7a1,	// (0x0008321a) cset_list_set_pane_g3_copy1

0xb7b0,	// (0x00083229) cset_list_set_pane_t1_copy1_ParamLimits

0xb7b0,	// (0x00083229) cset_list_set_pane_t1_copy1

0x0861,	// (0x000782da) list_highlight_pane_cp021_copy1_ParamLimits

0x0861,	// (0x000782da) list_highlight_pane_cp021_copy1

0x2c44,	// (0x0007a6bd) cset6_slider_pane_ParamLimits

0x2c44,	// (0x0007a6bd) cset6_slider_pane

0x2c70,	// (0x0007a6e9) main_cset6_slider_pane_g1_ParamLimits

0x2c70,	// (0x0007a6e9) main_cset6_slider_pane_g1

0xb7c5,	// (0x0008323e) main_cset6_slider_pane_g2_ParamLimits

0xb7c5,	// (0x0008323e) main_cset6_slider_pane_g2

0x24d0,	// (0x00079f49) main_cset6_slider_pane_g3_ParamLimits

0x24d0,	// (0x00079f49) main_cset6_slider_pane_g3

0xb7ed,	// (0x00083266) main_cset6_slider_pane_g4_ParamLimits

0xb7ed,	// (0x00083266) main_cset6_slider_pane_g4

0xb7f9,	// (0x00083272) main_cset6_slider_pane_g5_ParamLimits

0xb7f9,	// (0x00083272) main_cset6_slider_pane_g5

0x24d0,	// (0x00079f49) main_cset6_slider_pane_g7_ParamLimits

0x24d0,	// (0x00079f49) main_cset6_slider_pane_g7

0x24dc,	// (0x00079f55) main_cset6_slider_pane_g8_ParamLimits

0x24dc,	// (0x00079f55) main_cset6_slider_pane_g8

0xb805,	// (0x0008327e) main_cset6_slider_pane_g9_ParamLimits

0xb805,	// (0x0008327e) main_cset6_slider_pane_g9

0xb811,	// (0x0008328a) main_cset6_slider_pane_g10_ParamLimits

0xb811,	// (0x0008328a) main_cset6_slider_pane_g10

0xb7ed,	// (0x00083266) main_cset6_slider_pane_g11_ParamLimits

0xb7ed,	// (0x00083266) main_cset6_slider_pane_g11

0xb81d,	// (0x00083296) main_cset6_slider_pane_g12_ParamLimits

0xb81d,	// (0x00083296) main_cset6_slider_pane_g12

0xb829,	// (0x000832a2) main_cset6_slider_pane_g13_ParamLimits

0xb829,	// (0x000832a2) main_cset6_slider_pane_g13

0xb835,	// (0x000832ae) main_cset6_slider_pane_g14_ParamLimits

0xb835,	// (0x000832ae) main_cset6_slider_pane_g14

0xb841,	// (0x000832ba) main_cset6_slider_pane_g15_ParamLimits

0xb841,	// (0x000832ba) main_cset6_slider_pane_g15

0xb7f9,	// (0x00083272) main_cset6_slider_pane_g16_ParamLimits

0xb7f9,	// (0x00083272) main_cset6_slider_pane_g16

0xb859,	// (0x000832d2) main_cset6_slider_pane_g17_ParamLimits

0xb859,	// (0x000832d2) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x0008759b) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x0008759b) main_cset6_slider_pane_g

0x2c98,	// (0x0007a711) main_cset6_slider_pane_t1_ParamLimits

0x2c98,	// (0x0007a711) main_cset6_slider_pane_t1

0xb865,	// (0x000832de) main_cset6_slider_pane_t2_ParamLimits

0xb865,	// (0x000832de) main_cset6_slider_pane_t2

0x2cd9,	// (0x0007a752) main_cset6_slider_pane_t3_ParamLimits

0x2cd9,	// (0x0007a752) main_cset6_slider_pane_t3

0xb890,	// (0x00083309) main_cset6_slider_pane_t4_ParamLimits

0xb890,	// (0x00083309) main_cset6_slider_pane_t4

0x2d04,	// (0x0007a77d) main_cset6_slider_pane_t5_ParamLimits

0x2d04,	// (0x0007a77d) main_cset6_slider_pane_t5

0x2d2f,	// (0x0007a7a8) main_cset6_slider_pane_t7_ParamLimits

0x2d2f,	// (0x0007a7a8) main_cset6_slider_pane_t7

0xb8bb,	// (0x00083334) main_cset6_slider_pane_t8_ParamLimits

0xb8bb,	// (0x00083334) main_cset6_slider_pane_t8

0xb8df,	// (0x00083358) main_cset6_slider_pane_t9_ParamLimits

0xb8df,	// (0x00083358) main_cset6_slider_pane_t9

0xb903,	// (0x0008337c) main_cset6_slider_pane_t10_ParamLimits

0xb903,	// (0x0008337c) main_cset6_slider_pane_t10

0xb927,	// (0x000833a0) main_cset6_slider_pane_t11_ParamLimits

0xb927,	// (0x000833a0) main_cset6_slider_pane_t11

0x2d65,	// (0x0007a7de) main_cset6_slider_pane_t14_ParamLimits

0x2d65,	// (0x0007a7de) main_cset6_slider_pane_t14

0x2d9e,	// (0x0007a817) main_cset6_slider_pane_t15_ParamLimits

0x2d9e,	// (0x0007a817) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x000875c0) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x000875c0) main_cset6_slider_pane_t

0x259e,	// (0x0007a017) cset_slider_pane_g1_copy1

0x25a7,	// (0x0007a020) cset_slider_pane_g2_copy1

0x25b0,	// (0x0007a029) cset_slider_pane_g3_copy1

0xde55,	// (0x000858ce) bg_popup_sub_pane_cp011_copy1

0x2631,	// (0x0007a0aa) main_cset_text_pane_g1_copy1

0x2639,	// (0x0007a0b2) main_cset_text_pane_t1_copy1

0x2647,	// (0x0007a0c0) main_cset_text_pane_t2_copy1

0x2655,	// (0x0007a0ce) main_cset_text_pane_t3_copy1

0x2663,	// (0x0007a0dc) main_cset_text_pane_t4_copy1

0x2671,	// (0x0007a0ea) main_cset_text_pane_t5_copy1

0x267f,	// (0x0007a0f8) main_cset_text_pane_t6_copy1

0x268d,	// (0x0007a106) main_cset_text_pane_t7_copy1

0xb968,	// (0x000833e1) main_cset_text2_pane_t1_copy1

0x87d0,	// (0x00080249) main_ncimui_pane

0x8833,	// (0x000802ac) popup_query_ncimui_window_ParamLimits

0x8833,	// (0x000802ac) popup_query_ncimui_window

0x21cc,	// (0x00079c45) field_cale_ev2_pane_g4_ParamLimits

0x21cc,	// (0x00079c45) field_cale_ev2_pane_g4

0x9b77,	// (0x000815f0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9b77,	// (0x000815f0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf821,	// (0x0008729a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf821,	// (0x0008729a) cell_video_dialer_keypad_pane_g

0x9b8f,	// (0x00081608) cell_video_dialer_keypad_pane_t1

0xde55,	// (0x000858ce) bg_popup_window_pane_cp012

0x85a8,	// (0x00080021) heading_pane_cp06

0x2e27,	// (0x0007a8a0) ncim_query_content_pane

0xde55,	// (0x000858ce) bg_popup_heading_pane_cp01

0x2e2f,	// (0x0007a8a8) ncim_heading_pane_t1

0x2e3d,	// (0x0007a8b6) ncim_indicator_popup_pane

0x2e4f,	// (0x0007a8c8) ncim_query_button_pane

0x2e63,	// (0x0007a8dc) ncim_query_content_pane_t1

0x2e75,	// (0x0007a8ee) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x00087604) ncim_query_content_pane_t

0x2eaf,	// (0x0007a928) ncim_query_list_pane

0x2ec1,	// (0x0007a93a) ncim_query_popup_pane

0x2e3d,	// (0x0007a8b6) ncim_indicator_popup_pane_ParamLimits

0xbaa9,	// (0x00083522) ncim_query_content_pane_g1_ParamLimits

0xbaa9,	// (0x00083522) ncim_query_content_pane_g1

0x2e63,	// (0x0007a8dc) ncim_query_content_pane_t1_ParamLimits

0x2e75,	// (0x0007a8ee) ncim_query_content_pane_t2_ParamLimits

0xbab5,	// (0x0008352e) ncim_query_content_pane_t3_ParamLimits

0xbab5,	// (0x0008352e) ncim_query_content_pane_t3

0xbad2,	// (0x0008354b) ncim_query_content_pane_t4_ParamLimits

0xbad2,	// (0x0008354b) ncim_query_content_pane_t4

0xbaef,	// (0x00083568) ncim_query_content_pane_t5_ParamLimits

0xbaef,	// (0x00083568) ncim_query_content_pane_t5

0x2e87,	// (0x0007a900) ncim_query_content_pane_t6_ParamLimits

0x2e87,	// (0x0007a900) ncim_query_content_pane_t6

0xfb8b,	// (0x00087604) ncim_query_content_pane_t_ParamLimits

0x2eaf,	// (0x0007a928) ncim_query_list_pane_ParamLimits

0x2ec1,	// (0x0007a93a) ncim_query_popup_pane_ParamLimits

0x2ed5,	// (0x0007a94e) wait_bar_pane_cp04

0xde55,	// (0x000858ce) input_focus_pane_cp011

0x2edd,	// (0x0007a956) ncim_query_popup_pane_t1

0x2eeb,	// (0x0007a964) ncim_list_query_list_pane_ParamLimits

0x2eeb,	// (0x0007a964) ncim_list_query_list_pane

0xde55,	// (0x000858ce) bg_button_pane_cp027

0x2efe,	// (0x0007a977) ncim_query_button_pane_g1

0xde55,	// (0x000858ce) list_highlight_pane_cp012

0x2f08,	// (0x0007a981) ncim_list_query_list_pane_g1

0x2f10,	// (0x0007a989) ncim_list_query_list_pane_t1

0xa22e,	// (0x00081ca7) cam4_indicators_pane_g3_ParamLimits

0xa22e,	// (0x00081ca7) cam4_indicators_pane_g3

0xa2df,	// (0x00081d58) vid4_indicators_pane_g5_ParamLimits

0xa2df,	// (0x00081d58) vid4_indicators_pane_g5

0xb1fb,	// (0x00082c74) vid4_progress_pane_g5_ParamLimits

0xb1fb,	// (0x00082c74) vid4_progress_pane_g5

0xb999,	// (0x00083412) main_ncimui_pane_g1

0xb9ff,	// (0x00083478) ncimui_group_query_pane_ParamLimits

0xb9ff,	// (0x00083478) ncimui_group_query_pane

0xba47,	// (0x000834c0) ncimui_list_pane_ParamLimits

0xba47,	// (0x000834c0) ncimui_list_pane

0xba6c,	// (0x000834e5) ncimui_text_pane_ParamLimits

0xba6c,	// (0x000834e5) ncimui_text_pane

0xbb0c,	// (0x00083585) ncimui_text_pane_t1_ParamLimits

0xbb0c,	// (0x00083585) ncimui_text_pane_t1

0x2f27,	// (0x0007a9a0) ncimui_list_single_graphic_pane_ParamLimits

0x2f27,	// (0x0007a9a0) ncimui_list_single_graphic_pane

0xbb2a,	// (0x000835a3) ncimui_query_pane_ParamLimits

0xbb2a,	// (0x000835a3) ncimui_query_pane

0xde55,	// (0x000858ce) list_highlight_pane_cp013

0x2f37,	// (0x0007a9b0) ncim_list_query_list_pane_t1_copy1

0x2f45,	// (0x0007a9be) ncim_list_single_graphic_pane_g1

0x2f4d,	// (0x0007a9c6) ncim_query_button_pane_cp01

0x2f59,	// (0x0007a9d2) ncim_query_entry_pane_ParamLimits

0x2f59,	// (0x0007a9d2) ncim_query_entry_pane

0x2f6c,	// (0x0007a9e5) ncimui_query_pane_g1

0x2f78,	// (0x0007a9f1) ncimui_query_pane_t1_ParamLimits

0x2f78,	// (0x0007a9f1) ncimui_query_pane_t1

0x0861,	// (0x000782da) input_focus_pane_cp012

0x2f91,	// (0x0007aa0a) ncim_query_entry_pane_t1

0xe5c9,	// (0x00086042) main_im_pane_ParamLimits

0x87d0,	// (0x00080249) main_mobtv_pane_ParamLimits

0x87d0,	// (0x00080249) main_mobtv_pane

0xb805,	// (0x0008327e) main_cset6_slider_pane_g18_ParamLimits

0xb805,	// (0x0008327e) main_cset6_slider_pane_g18

0xb829,	// (0x000832a2) main_cset6_slider_pane_g19_ParamLimits

0xb829,	// (0x000832a2) main_cset6_slider_pane_g19

0xa492,	// (0x00081f0b) bg_main_mobtv_pane_ParamLimits

0xa492,	// (0x00081f0b) bg_main_mobtv_pane

0xbb3a,	// (0x000835b3) main_mobtv_info_pane

0xbb43,	// (0x000835bc) main_mobtv_loading_pane_ParamLimits

0xbb43,	// (0x000835bc) main_mobtv_loading_pane

0x2fa3,	// (0x0007aa1c) main_mobtv_pg_channel_list_pane

0x2fad,	// (0x0007aa26) main_mobtv_pg_hdr_pane

0xbb50,	// (0x000835c9) main_mobtv_programe_curr_pane_ParamLimits

0xbb50,	// (0x000835c9) main_mobtv_programe_curr_pane

0xbb5d,	// (0x000835d6) main_mobtv_programe_next_pane_ParamLimits

0xbb5d,	// (0x000835d6) main_mobtv_programe_next_pane

0x2fb6,	// (0x0007aa2f) popup_mobtv_noti_window

0x09a9,	// (0x00078422) main_tv_pg_hdr_pane_g1

0x2fbe,	// (0x0007aa37) main_tv_pg_hdr_pane_g2

0x2fc6,	// (0x0007aa3f) main_tv_pg_hdr_pane_g3

0x2fce,	// (0x0007aa47) main_tv_pg_hdr_pane_g4

0x2fd6,	// (0x0007aa4f) main_tv_pg_hdr_pane_g5

0x2fde,	// (0x0007aa57) main_tv_pg_hdr_pane_g6

0x2fe6,	// (0x0007aa5f) main_tv_pg_hdr_pane_g7

0x2fee,	// (0x0007aa67) main_tv_pg_hdr_pane_g8

0x2ff6,	// (0x0007aa6f) main_tv_pg_hdr_pane_g9

0x2ffe,	// (0x0007aa77) main_tv_pg_hdr_pane_g10

0x3008,	// (0x0007aa81) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x00087611) main_tv_pg_hdr_pane_g

0x3012,	// (0x0007aa8b) main_tv_pg_hdr_pane_t1

0x3020,	// (0x0007aa99) main_tv_pg_hdr_pane_t2

0x302e,	// (0x0007aaa7) main_tv_pg_hdr_pane_t3

0x303c,	// (0x0007aab5) main_tv_pg_hdr_pane_t4

0x304a,	// (0x0007aac3) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x00087628) main_tv_pg_hdr_pane_t

0x3058,	// (0x0007aad1) single_mobtv_pg_channel_pane_ParamLimits

0x3058,	// (0x0007aad1) single_mobtv_pg_channel_pane

0x306a,	// (0x0007aae3) single_mobtv_pg_channel_table_pane

0x3073,	// (0x0007aaec) single_mobtv_pg_channel_thumb_pane

0x307c,	// (0x0007aaf5) single_tv_pg_channel_pane_g1

0x3085,	// (0x0007aafe) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x00087633) single_tv_pg_channel_pane_g

0xe545,	// (0x00085fbe) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe545,	// (0x00085fbe) bg_single_mobtv_pg_channel_thumb_pane

0x308e,	// (0x0007ab07) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x308e,	// (0x0007ab07) single_mobtv_pg_channel_thumb_pane_g1

0x309c,	// (0x0007ab15) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x309c,	// (0x0007ab15) single_mobtv_pg_channel_thumb_pane_g2

0x30a8,	// (0x0007ab21) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x30a8,	// (0x0007ab21) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x00087638) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x00087638) single_mobtv_pg_channel_thumb_pane_g

0x30b4,	// (0x0007ab2d) single_mobtv_pg_channel_thumb_pane_t1

0x30c2,	// (0x0007ab3b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x0008763f) single_mobtv_pg_channel_thumb_pane_t

0x09a9,	// (0x00078422) bg_single_mobtv_pg_channel_table_pane_g1

0x09a9,	// (0x00078422) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c9,	// (0x00086e42) bg_single_mobtv_pg_channel_table_pane_g

0x30d0,	// (0x0007ab49) single_mobtv_pg_channel_table_pane_t1

0x30de,	// (0x0007ab57) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x00087644) single_mobtv_pg_channel_table_pane_t

0xbb72,	// (0x000835eb) main_mobtv_info_pane_g1_ParamLimits

0xbb72,	// (0x000835eb) main_mobtv_info_pane_g1

0xbb8e,	// (0x00083607) main_mobtv_info_pane_t1_ParamLimits

0xbb8e,	// (0x00083607) main_mobtv_info_pane_t1

0xbbf4,	// (0x0008366d) main_mobtv_info_pane_t2_ParamLimits

0xbbf4,	// (0x0008366d) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x0008764e) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x0008764e) main_mobtv_info_pane_t

0xbc77,	// (0x000836f0) wait_bar_pane_cp05

0xbc87,	// (0x00083700) main_mobtv_loading_pane_g1_ParamLimits

0xbc87,	// (0x00083700) main_mobtv_loading_pane_g1

0xbc93,	// (0x0008370c) main_mobtv_loading_pane_g2_ParamLimits

0xbc93,	// (0x0008370c) main_mobtv_loading_pane_g2

0xbc9f,	// (0x00083718) main_mobtv_loading_pane_g3_ParamLimits

0xbc9f,	// (0x00083718) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x00087655) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x00087655) main_mobtv_loading_pane_g

0x30ec,	// (0x0007ab65) main_mobtv_loading_pane_t1_ParamLimits

0x30ec,	// (0x0007ab65) main_mobtv_loading_pane_t1

0x3104,	// (0x0007ab7d) main_mobtv_loading_pane_t2_ParamLimits

0x3104,	// (0x0007ab7d) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x0008765c) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x0008765c) main_mobtv_loading_pane_t

0xbcab,	// (0x00083724) wait_bar_pane_cp06_ParamLimits

0xbcab,	// (0x00083724) wait_bar_pane_cp06

0x3128,	// (0x0007aba1) main_mobtv_programe_curr_pane_t1

0x3136,	// (0x0007abaf) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x00087661) main_mobtv_programe_curr_pane_t

0x3144,	// (0x0007abbd) main_mobtv_programe_next_pane_t1

0x3152,	// (0x0007abcb) main_mobtv_programe_next_pane_t2

0x3160,	// (0x0007abd9) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x00087666) main_mobtv_programe_next_pane_t

0xde55,	// (0x000858ce) bg_popup_mobtv_noti_window_pane

0x316e,	// (0x0007abe7) popup_mobtv_noti_window_g1

0x3176,	// (0x0007abef) popup_mobtv_noti_window_t1

0x3184,	// (0x0007abfd) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x0008766d) popup_mobtv_noti_window_t

0x09a9,	// (0x00078422) bg_popup_mobtv_noti_window_pane_g1

0x5888,	// (0x0007d301) sc_clock_pane

0x5888,	// (0x0007d301) main_fs_bigclock_pane

0xb42d,	// (0x00082ea6) blid2_tripm_pane_t4_ParamLimits

0xb42d,	// (0x00082ea6) blid2_tripm_pane_t4

0xbcb7,	// (0x00083730) sc_clock_pane_g1_ParamLimits

0xbcb7,	// (0x00083730) sc_clock_pane_g1

0xbcc5,	// (0x0008373e) sc_clock_pane_t1_ParamLimits

0xbcc5,	// (0x0008373e) sc_clock_pane_t1

0xbcd8,	// (0x00083751) sc_clock_pane_t2_ParamLimits

0xbcd8,	// (0x00083751) sc_clock_pane_t2

0xbcea,	// (0x00083763) sc_clock_pane_t3_ParamLimits

0xbcea,	// (0x00083763) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x00087672) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x00087672) sc_clock_pane_t

0xc97f,	// (0x000843f8) main_fs_bigclock_indicator_pane_ParamLimits

0xc97f,	// (0x000843f8) main_fs_bigclock_indicator_pane

0xbd65,	// (0x000837de) main_fs_bigclock_pane_g1_ParamLimits

0xbd65,	// (0x000837de) main_fs_bigclock_pane_g1

0xc98b,	// (0x00084404) main_fs_bigclock_pane_t1_ParamLimits

0xc98b,	// (0x00084404) main_fs_bigclock_pane_t1

0xc99d,	// (0x00084416) main_fs_bigclock_pane_t2_ParamLimits

0xc99d,	// (0x00084416) main_fs_bigclock_pane_t2

0xc9af,	// (0x00084428) main_fs_bigclock_pane_t3_ParamLimits

0xc9af,	// (0x00084428) main_fs_bigclock_pane_t3

0x0002,

0xfdc2,	// (0x0008783b) main_fs_bigclock_pane_t_ParamLimits

0xfdc2,	// (0x0008783b) main_fs_bigclock_pane_t

0x3bd0,	// (0x0007b649) main_fs_bigclock_indicator_pane_g1

0x2e57,	// (0x0007a8d0) ncim_query_content_pane_g2_ParamLimits

0x2e57,	// (0x0007a8d0) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x000875ff) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x000875ff) ncim_query_content_pane_g

0xbcfc,	// (0x00083775) sc_clock_pane_t4_ParamLimits

0xbcfc,	// (0x00083775) sc_clock_pane_t4

0x87d0,	// (0x00080249) main_radioblah_pane

0xa0cd,	// (0x00081b46) cell_call4_button_pane_t1_copy1_ParamLimits

0xa0cd,	// (0x00081b46) cell_call4_button_pane_t1_copy1

0xb9b1,	// (0x0008342a) main_ncimui_pane_t1_ParamLimits

0xb9b1,	// (0x0008342a) main_ncimui_pane_t1

0xb9cb,	// (0x00083444) main_ncimui_pane_t2_ParamLimits

0xb9cb,	// (0x00083444) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x000875f8) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x000875f8) main_ncimui_pane_t

0x32c5,	// (0x0007ad3e) main_radioblah_anim_pane_ParamLimits

0x32c5,	// (0x0007ad3e) main_radioblah_anim_pane

0x32d6,	// (0x0007ad4f) main_radioblah_info_pane_ParamLimits

0x32d6,	// (0x0007ad4f) main_radioblah_info_pane

0x32ea,	// (0x0007ad63) main_radioblah_pane_t1_ParamLimits

0x32ea,	// (0x0007ad63) main_radioblah_pane_t1

0x3306,	// (0x0007ad7f) main_radioblah_pane_t2_ParamLimits

0x3306,	// (0x0007ad7f) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x00087693) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x00087693) main_radioblah_pane_t

0xbdad,	// (0x00083826) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbdad,	// (0x00083826) main_radioblah_rocker_ctrl_pane

0x334e,	// (0x0007adc7) main_radioblah_info_pane_t1_ParamLimits

0x334e,	// (0x0007adc7) main_radioblah_info_pane_t1

0xbdf2,	// (0x0008386b) main_radioblah_info_pane_t2_ParamLimits

0xbdf2,	// (0x0008386b) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x0008769c) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x0008769c) main_radioblah_info_pane_t

0x09a9,	// (0x00078422) main_radioblah_rocker_ctrl_pane_g1

0xbe9a,	// (0x00083913) main_radioblah_rocker_ctrl_pane_g2

0xbea2,	// (0x0008391b) main_radioblah_rocker_ctrl_pane_g3

0xbeaa,	// (0x00083923) main_radioblah_rocker_ctrl_pane_g4

0xbeb2,	// (0x0008392b) main_radioblah_rocker_ctrl_pane_g5

0xbeba,	// (0x00083933) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x000876a5) main_radioblah_rocker_ctrl_pane_g

0xb968,	// (0x000833e1) main_cset_text2_pane_t1_copy1_ParamLimits

0xa150,	// (0x00081bc9) cam4_image_uncrop_qvga_pane

0xa272,	// (0x00081ceb) vid4_image_uncrop_qcif_pane

0xb5b4,	// (0x0008302d) cam6_image_uncrop_qvga_pane_ParamLimits

0xb5b4,	// (0x0008302d) cam6_image_uncrop_qvga_pane

0x2b22,	// (0x0007a59b) vid6_image_uncrop_qcif_pane_ParamLimits

0x2b22,	// (0x0007a59b) vid6_image_uncrop_qcif_pane

0xde55,	// (0x000858ce) bg_popup_preview_window_pane_cp03

0x2dfd,	// (0x0007a876) list_cset_text2_pane

0x2e05,	// (0x0007a87e) main_cset6_text2_pane_g1

0x2e0d,	// (0x0007a886) main_cset6_text2_pane_t1

0x3f83,	// (0x0007b9fc) list_cset_text2_pane_t1_ParamLimits

0x3f83,	// (0x0007b9fc) list_cset_text2_pane_t1

0x87d0,	// (0x00080249) main_radioblah_pane_ParamLimits

0xbc65,	// (0x000836de) main_mobtv_info_pane_t3_ParamLimits

0xbc65,	// (0x000836de) main_mobtv_info_pane_t3

0xbd9b,	// (0x00083814) main_radioblah_pane_g1

0xbdc6,	// (0x0008383f) main_radioblah_info_pane_g1

0xbe41,	// (0x000838ba) main_radioblah_info_pane_t3_ParamLimits

0xbe41,	// (0x000838ba) main_radioblah_info_pane_t3

0x7263,	// (0x0007ecdc) highlight_cell_cale_month_pane_ParamLimits

0x7263,	// (0x0007ecdc) highlight_cell_cale_month_pane

0x5888,	// (0x0007d301) main_phob_fisheye_pane

0xebfa,	// (0x00086673) scroll_pane_cp0031_ParamLimits

0xebfa,	// (0x00086673) scroll_pane_cp0031

0x2c2c,	// (0x0007a6a5) wait_bar_pane_cp08_ParamLimits

0xb78a,	// (0x00083203) cset_list_set_pane_copy1_ParamLimits

0x3388,	// (0x0007ae01) highlight_cell_cale_month_pane_g1

0xbec2,	// (0x0008393b) highlight_cell_cale_month_pane_t1

0x3390,	// (0x0007ae09) list_gen_pane_cp01

0x24bb,	// (0x00079f34) scroll_pane_01

0xbed0,	// (0x00083949) list_single_double_fisheye_pane

0xbed9,	// (0x00083952) list_double_fisheye_pane_g1_ParamLimits

0xbed9,	// (0x00083952) list_double_fisheye_pane_g1

0xbee5,	// (0x0008395e) list_double_fisheye_pane_g2_ParamLimits

0xbee5,	// (0x0008395e) list_double_fisheye_pane_g2

0xbef9,	// (0x00083972) list_double_fisheye_pane_g3_ParamLimits

0xbef9,	// (0x00083972) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x000876b2) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x000876b2) list_double_fisheye_pane_g

0xbf22,	// (0x0008399b) list_double_fisheye_pane_t1_ParamLimits

0xbf22,	// (0x0008399b) list_double_fisheye_pane_t1

0xbf3d,	// (0x000839b6) list_double_fisheye_pane_t2_ParamLimits

0xbf3d,	// (0x000839b6) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x000876bd) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x000876bd) list_double_fisheye_pane_t

0x5888,	// (0x0007d301) main_call5_pane

0xbd22,	// (0x0008379b) sc_swipe_pane_ParamLimits

0xbd22,	// (0x0008379b) sc_swipe_pane

0xbf6b,	// (0x000839e4) call5_image_pane_ParamLimits

0xbf6b,	// (0x000839e4) call5_image_pane

0xbf77,	// (0x000839f0) call5_swipe_1_pane_ParamLimits

0xbf77,	// (0x000839f0) call5_swipe_1_pane

0xbf83,	// (0x000839fc) call5_swipe_2_pane_ParamLimits

0xbf83,	// (0x000839fc) call5_swipe_2_pane

0xbf9b,	// (0x00083a14) popup_call5_audio_first_window_ParamLimits

0xbf9b,	// (0x00083a14) popup_call5_audio_first_window

0xe545,	// (0x00085fbe) call5_swipe_1_pane_g1_ParamLimits

0xe545,	// (0x00085fbe) call5_swipe_1_pane_g1

0x3399,	// (0x0007ae12) call5_swipe_1_pane_g2_ParamLimits

0x3399,	// (0x0007ae12) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x000876c2) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x000876c2) call5_swipe_1_pane_g

0x33a5,	// (0x0007ae1e) call5_swipe_1_pane_t1_ParamLimits

0x33a5,	// (0x0007ae1e) call5_swipe_1_pane_t1

0xe545,	// (0x00085fbe) call5_swipe_2_pane_g1_ParamLimits

0xe545,	// (0x00085fbe) call5_swipe_2_pane_g1

0x33ba,	// (0x0007ae33) call5_swipe_2_pane_g2_ParamLimits

0x33ba,	// (0x0007ae33) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x000876c7) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x000876c7) call5_swipe_2_pane_g

0x33c6,	// (0x0007ae3f) call5_swipe_2_pane_t1_ParamLimits

0x33c6,	// (0x0007ae3f) call5_swipe_2_pane_t1

0x33db,	// (0x0007ae54) sc_swipe_pane_g1_ParamLimits

0x33db,	// (0x0007ae54) sc_swipe_pane_g1

0x33e8,	// (0x0007ae61) sc_swipe_pane_g2_ParamLimits

0x33e8,	// (0x0007ae61) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x000876cc) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x000876cc) sc_swipe_pane_g

0x33f4,	// (0x0007ae6d) sc_swipe_pane_t1_ParamLimits

0x33f4,	// (0x0007ae6d) sc_swipe_pane_t1

0x5888,	// (0x0007d301) main_cmail_launcher_pane

0xbfa7,	// (0x00083a20) aid_size_cell_cmail_l_ParamLimits

0xbfa7,	// (0x00083a20) aid_size_cell_cmail_l

0xbfb7,	// (0x00083a30) grid_cmail_l_pane_ParamLimits

0xbfb7,	// (0x00083a30) grid_cmail_l_pane

0xbfc3,	// (0x00083a3c) cell_cmail_l_pane_ParamLimits

0xbfc3,	// (0x00083a3c) cell_cmail_l_pane

0xbfd5,	// (0x00083a4e) cell_cmail_l_pane_g1_ParamLimits

0xbfd5,	// (0x00083a4e) cell_cmail_l_pane_g1

0xbfe5,	// (0x00083a5e) cell_cmail_l_pane_t1_ParamLimits

0xbfe5,	// (0x00083a5e) cell_cmail_l_pane_t1

0x3409,	// (0x0007ae82) cell_cmail_l_pane_t2_ParamLimits

0x3409,	// (0x0007ae82) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x000876d1) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x000876d1) cell_cmail_l_pane_t

0x0861,	// (0x000782da) grid_highlight_pane_cp018_ParamLimits

0x0861,	// (0x000782da) grid_highlight_pane_cp018

0x5788,	// (0x0007d201) main2_pane_ParamLimits

0x5788,	// (0x0007d201) main2_pane

0xe66a,	// (0x000860e3) popup_sp_fs_action_menu_bg_pane_g1

0xe672,	// (0x000860eb) popup_sp_fs_action_menu_bg_pane_g2

0xe67a,	// (0x000860f3) popup_sp_fs_action_menu_bg_pane_g3

0xe682,	// (0x000860fb) popup_sp_fs_action_menu_bg_pane_g4

0xe68a,	// (0x00086103) popup_sp_fs_action_menu_bg_pane_g5

0xe692,	// (0x0008610b) popup_sp_fs_action_menu_bg_pane_g6

0xe69a,	// (0x00086113) popup_sp_fs_action_menu_bg_pane_g7

0xe6a2,	// (0x0008611b) popup_sp_fs_action_menu_bg_pane_g8

0xe6aa,	// (0x00086123) popup_sp_fs_action_menu_bg_pane_g9

0xe6b2,	// (0x0008612b) popup_sp_fs_action_menu_bg_pane_g10

0xe6b2,	// (0x0008612b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf11f,	// (0x00086b98) popup_sp_fs_action_menu_bg_pane_g

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g3_g1

0x09cf,	// (0x00078448) list_medium_line_x2_t3_g3_g2_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_x2_t3_g3_g2

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1cd,	// (0x00086c46) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1cd,	// (0x00086c46) list_medium_line_x2_t3_g3_g

0x09db,	// (0x00078454) list_medium_line_x2_t3_g3_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t3_g3_t1

0x09db,	// (0x00078454) list_medium_line_x2_t3_g3_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t3_g3_t2

0x09ee,	// (0x00078467) list_medium_line_x2_t3_g3_t3_ParamLimits

0x09ee,	// (0x00078467) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x00086c4d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x00086c4d) list_medium_line_x2_t3_g3_t

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g2_g1

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x00086c54) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x00086c54) list_medium_line_x2_t3_g2_g

0x09db,	// (0x00078454) list_medium_line_x2_t3_g2_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t3_g2_t1

0x09db,	// (0x00078454) list_medium_line_x2_t3_g2_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t3_g2_t2

0x09ee,	// (0x00078467) list_medium_line_x2_t3_g2_t3_ParamLimits

0x09ee,	// (0x00078467) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x00086c4d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x00086c4d) list_medium_line_x2_t3_g2_t

0x09c3,	// (0x0007843c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t4_g4_g1

0x09cf,	// (0x00078448) list_medium_line_x2_t4_g4_g2_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_x2_t4_g4_g2

0x09cf,	// (0x00078448) list_medium_line_x2_t4_g4_g3_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_x2_t4_g4_g3

0x09c3,	// (0x0007843c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e0,	// (0x00086c59) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e0,	// (0x00086c59) list_medium_line_x2_t4_g4_g

0x09db,	// (0x00078454) list_medium_line_x2_t4_g4_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t4_g4_t1

0x09db,	// (0x00078454) list_medium_line_x2_t4_g4_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t4_g4_t2

0x09db,	// (0x00078454) list_medium_line_x2_t4_g4_t3_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t4_g4_t3

0x09ee,	// (0x00078467) list_medium_line_x2_t4_g4_t4_ParamLimits

0x09ee,	// (0x00078467) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1e9,	// (0x00086c62) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1e9,	// (0x00086c62) list_medium_line_x2_t4_g4_t

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g4_g1

0x09cf,	// (0x00078448) list_medium_line_x2_t2_g4_g2_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_x2_t2_g4_g2

0x09cf,	// (0x00078448) list_medium_line_x2_t2_g4_g3_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_x2_t2_g4_g3

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e0,	// (0x00086c59) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e0,	// (0x00086c59) list_medium_line_x2_t2_g4_g

0x09db,	// (0x00078454) list_medium_line_x2_t2_g4_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t2_g4_t1

0x09ee,	// (0x00078467) list_medium_line_x2_t2_g4_t2_ParamLimits

0x09ee,	// (0x00078467) list_medium_line_x2_t2_g4_t2

0x0001,

0xf250,	// (0x00086cc9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf250,	// (0x00086cc9) list_medium_line_x2_t2_g4_t

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g3_g1

0x09cf,	// (0x00078448) list_medium_line_x2_t2_g3_g2_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_x2_t2_g3_g2

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1cd,	// (0x00086c46) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1cd,	// (0x00086c46) list_medium_line_x2_t2_g3_g

0x09db,	// (0x00078454) list_medium_line_x2_t2_g3_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t2_g3_t1

0x09ee,	// (0x00078467) list_medium_line_x2_t2_g3_t2_ParamLimits

0x09ee,	// (0x00078467) list_medium_line_x2_t2_g3_t2

0x0001,

0xf250,	// (0x00086cc9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf250,	// (0x00086cc9) list_medium_line_x2_t2_g3_t

0x73f5,	// (0x0007ee6e) main_sp_fs_list_pane_ParamLimits

0x73f5,	// (0x0007ee6e) main_sp_fs_list_pane

0x7402,	// (0x0007ee7b) sp_fs_scroll_pane_ParamLimits

0x7402,	// (0x0007ee7b) sp_fs_scroll_pane

0x0f31,	// (0x000789aa) list_medium_line_x2_t3_t1

0x0f31,	// (0x000789aa) list_medium_line_x2_t3_t2

0x0f40,	// (0x000789b9) list_medium_line_x2_t3_t3

0x0002,

0xf29b,	// (0x00086d14) list_medium_line_x2_t3_t

0x0f31,	// (0x000789aa) list_medium_line_x3_t4_t1

0x0f31,	// (0x000789aa) list_medium_line_x3_t4_t2

0x0f31,	// (0x000789aa) list_medium_line_x3_t4_t3

0x0f31,	// (0x000789aa) list_medium_line_x3_t4_t4

0x0003,

0xf2a2,	// (0x00086d1b) list_medium_line_x3_t4_t

0x0f31,	// (0x000789aa) list_medium_line_x4_t5_t1

0x0f31,	// (0x000789aa) list_medium_line_x4_t5_t2

0x0f31,	// (0x000789aa) list_medium_line_x4_t5_t3

0x0f31,	// (0x000789aa) list_medium_line_x4_t5_t4

0x0f31,	// (0x000789aa) list_medium_line_x4_t5_t5

0x0004,

0xf2ab,	// (0x00086d24) list_medium_line_x4_t5_t

0x09c3,	// (0x0007843c) list_medium_line_t4_g4_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_t4_g4_g1

0x09c3,	// (0x0007843c) list_medium_line_t4_g4_g2_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_t4_g4_g2

0x09c3,	// (0x0007843c) list_medium_line_t4_g4_g3_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_t4_g4_g3

0x09c3,	// (0x0007843c) list_medium_line_t4_g4_g4_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_t4_g4_g4

0x0003,

0xf2b6,	// (0x00086d2f) list_medium_line_t4_g4_g_ParamLimits

0xf2b6,	// (0x00086d2f) list_medium_line_t4_g4_g

0x09db,	// (0x00078454) list_medium_line_t4_g4_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t4_g4_t1

0x09db,	// (0x00078454) list_medium_line_t4_g4_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t4_g4_t2

0x09db,	// (0x00078454) list_medium_line_t4_g4_t3_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t4_g4_t3

0x09db,	// (0x00078454) list_medium_line_t4_g4_t4_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t4_g4_t4

0x0003,

0xf2bf,	// (0x00086d38) list_medium_line_t4_g4_t_ParamLimits

0xf2bf,	// (0x00086d38) list_medium_line_t4_g4_t

0x74fa,	// (0x0007ef73) chi_dic_find_pane_g1

0x87ec,	// (0x00080265) main_tport_pane

0x0f31,	// (0x000789aa) list_medium_line_plain_t1

0x09c3,	// (0x0007843c) list_medium_line_t2_g2_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_t2_g2_g1

0x458f,	// (0x0007c008) list_medium_line_t2_g2_g2_ParamLimits

0x458f,	// (0x0007c008) list_medium_line_t2_g2_g2

0x0001,

0xf990,	// (0x00087409) list_medium_line_t2_g2_g_ParamLimits

0xf990,	// (0x00087409) list_medium_line_t2_g2_g

0x09db,	// (0x00078454) list_medium_line_t2_g2_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t2_g2_t1

0x09db,	// (0x00078454) list_medium_line_t2_g2_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t2_g2_t2

0x0001,

0xf995,	// (0x0008740e) list_medium_line_t2_g2_t_ParamLimits

0xf995,	// (0x0008740e) list_medium_line_t2_g2_t

0x2901,	// (0x0007a37a) aid_sp_fs_list_icon_a_sm

0x4625,	// (0x0007c09e) aid_sp_fs_list_icon_d

0x2909,	// (0x0007a382) aid_sp_fs_text_primary

0x462d,	// (0x0007c0a6) aid_sp_fs_text_secondary

0x2912,	// (0x0007a38b) list_medium_line

0x2912,	// (0x0007a38b) list_medium_line_g2

0x2912,	// (0x0007a38b) list_medium_line_g3

0x2912,	// (0x0007a38b) list_medium_line_plain

0x2912,	// (0x0007a38b) list_medium_line_plain_t2

0x2912,	// (0x0007a38b) list_medium_line_plain_t3

0x2912,	// (0x0007a38b) list_medium_line_right_icon

0x2912,	// (0x0007a38b) list_medium_line_right_iconx2

0x2912,	// (0x0007a38b) list_medium_line_t2

0x2912,	// (0x0007a38b) list_medium_line_t2_g2

0x2912,	// (0x0007a38b) list_medium_line_t2_g3

0x2912,	// (0x0007a38b) list_medium_line_t2_right_icon

0x2912,	// (0x0007a38b) list_medium_line_t2_right_iconx2

0x2912,	// (0x0007a38b) list_medium_line_t3

0x2912,	// (0x0007a38b) list_medium_line_t3_g2

0x2912,	// (0x0007a38b) list_medium_line_t3_g3

0x2912,	// (0x0007a38b) list_medium_line_t3_right_iconx2

0xb257,	// (0x00082cd0) list_medium_line_t4_g4

0xb260,	// (0x00082cd9) list_medium_line_x2

0xb260,	// (0x00082cd9) list_medium_line_x2_t2_g2

0xb260,	// (0x00082cd9) list_medium_line_x2_t2_g3

0xb260,	// (0x00082cd9) list_medium_line_x2_t2_g4

0xb260,	// (0x00082cd9) list_medium_line_x2_t3

0xb260,	// (0x00082cd9) list_medium_line_x2_t3_g2

0xb260,	// (0x00082cd9) list_medium_line_x2_t3_g3

0xb260,	// (0x00082cd9) list_medium_line_x2_t3_g4

0xb260,	// (0x00082cd9) list_medium_line_x2_t4_g2

0xb260,	// (0x00082cd9) list_medium_line_x2_t4_g4

0xb269,	// (0x00082ce2) list_medium_line_x3

0xb269,	// (0x00082ce2) list_medium_line_x3_t4

0xb269,	// (0x00082ce2) list_medium_line_x3_t4_g4

0xb257,	// (0x00082cd0) list_medium_line_x4_t4

0xb257,	// (0x00082cd0) list_medium_line_x4_t4_g7

0xb257,	// (0x00082cd0) list_medium_line_x4_t5

0xb272,	// (0x00082ceb) list_single_fs_dyc_pane_ParamLimits

0xb272,	// (0x00082ceb) list_single_fs_dyc_pane

0x09c3,	// (0x0007843c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x4_t4_g7_g1

0xe545,	// (0x00085fbe) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe545,	// (0x00085fbe) list_medium_line_x4_t4_g7_g2

0x09cf,	// (0x00078448) list_medium_line_x4_t4_g7_g3_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_x4_t4_g7_g3

0xe545,	// (0x00085fbe) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe545,	// (0x00085fbe) list_medium_line_x4_t4_g7_g4

0xe545,	// (0x00085fbe) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe545,	// (0x00085fbe) list_medium_line_x4_t4_g7_g5

0xe545,	// (0x00085fbe) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe545,	// (0x00085fbe) list_medium_line_x4_t4_g7_g6

0xe553,	// (0x00085fcc) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe553,	// (0x00085fcc) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x000875d9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x000875d9) list_medium_line_x4_t4_g7_g

0x09db,	// (0x00078454) list_medium_line_x4_t4_g7_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x4_t4_g7_t1

0x09db,	// (0x00078454) list_medium_line_x4_t4_g7_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x4_t4_g7_t2

0x09db,	// (0x00078454) list_medium_line_x4_t4_g7_t3_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x4_t4_g7_t3

0x2dd7,	// (0x0007a850) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2dd7,	// (0x0007a850) list_medium_line_x4_t4_g7_t4

0x2dea,	// (0x0007a863) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2dea,	// (0x0007a863) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x000875e8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x000875e8) list_medium_line_x4_t4_g7_t

0xb94b,	// (0x000833c4) list_single_dyc_row_pane_ParamLimits

0xb94b,	// (0x000833c4) list_single_dyc_row_pane

0xbf5f,	// (0x000839d8) call5_gesture_pane_ParamLimits

0xbf5f,	// (0x000839d8) call5_gesture_pane

0xbf8f,	// (0x00083a08) call5_windows_pane_ParamLimits

0xbf8f,	// (0x00083a08) call5_windows_pane

0xbffb,	// (0x00083a74) call5_swipe_1_pane_cp_ParamLimits

0xbffb,	// (0x00083a74) call5_swipe_1_pane_cp

0xc007,	// (0x00083a80) call5_swipe_2_pane_cp_ParamLimits

0xc007,	// (0x00083a80) call5_swipe_2_pane_cp

0x0931,	// (0x000783aa) call5_image_pane_cp

0xc013,	// (0x00083a8c) popup_call5_audio_first_window_cp_ParamLimits

0xc013,	// (0x00083a8c) popup_call5_audio_first_window_cp

0x33db,	// (0x0007ae54) call5_swipe_1_pane_g1_cp_ParamLimits

0x33db,	// (0x0007ae54) call5_swipe_1_pane_g1_cp

0x3421,	// (0x0007ae9a) call5_swipe_1_pane_g2_cp

0x33f4,	// (0x0007ae6d) call5_swipe_1_pane_t1_cp_ParamLimits

0x33f4,	// (0x0007ae6d) call5_swipe_1_pane_t1_cp

0x33db,	// (0x0007ae54) call5_swipe_2_pane_g1_cp_ParamLimits

0x33db,	// (0x0007ae54) call5_swipe_2_pane_g1_cp

0x3429,	// (0x0007aea2) call5_swipe_2_pane_g2_cp

0x3431,	// (0x0007aeaa) call5_swipe_2_pane_t1_cp_ParamLimits

0x3431,	// (0x0007aeaa) call5_swipe_2_pane_t1_cp

0x0861,	// (0x000782da) main_sp_fs_email_pane

0x3446,	// (0x0007aebf) main_sp_fs_listscroll_pane_te

0xc01f,	// (0x00083a98) popup_sp_fs_action_menu_pane_ParamLimits

0xc01f,	// (0x00083a98) popup_sp_fs_action_menu_pane

0x09a9,	// (0x00078422) bg_sp_fs_ctrlbar_pane_g1

0xee59,	// (0x000868d2) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xee6b,	// (0x000868e4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xee62,	// (0x000868db) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x09a9,	// (0x00078422) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x000876d6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x7742,	// (0x0007f1bb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x7742,	// (0x0007f1bb) bg_sp_fs_ctrlbar_ddmenu_pane

0x344f,	// (0x0007aec8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x344f,	// (0x0007aec8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x345b,	// (0x0007aed4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x345b,	// (0x0007aed4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x000876df) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x000876df) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3467,	// (0x0007aee0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3467,	// (0x0007aee0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x4642,	// (0x0007c0bb) list_medium_line_t2_right_icon_g1

0x0f31,	// (0x000789aa) list_medium_line_t2_right_icon_t1

0x0f31,	// (0x000789aa) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x000876e4) list_medium_line_t2_right_icon_t

0x87c2,	// (0x0008023b) bg_sp_fs_ctrlbar_pane_ParamLimits

0x87c2,	// (0x0008023b) bg_sp_fs_ctrlbar_pane

0xc0a6,	// (0x00083b1f) main_sp_fs_ctrlbar_button_pane_cp01

0xc0ae,	// (0x00083b27) main_sp_fs_ctrlbar_ddmenu_pane

0x34b9,	// (0x0007af32) main_sp_fs_ctrlbar_pane_g1

0x34c5,	// (0x0007af3e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x000876e9) main_sp_fs_ctrlbar_pane_g

0xc0e8,	// (0x00083b61) main_sp_fs_ctrlbar_pane_t1

0xc130,	// (0x00083ba9) main_sp_fs_ctrlbar_pane

0xc144,	// (0x00083bbd) main_sp_fs_listscroll_pane_te_cp01

0xc155,	// (0x00083bce) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc155,	// (0x00083bce) popup_sp_fs_action_menu_pane_cp01

0x0861,	// (0x000782da) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0861,	// (0x000782da) bg_sp_fs_highlight_list_pane_cp01

0xc17f,	// (0x00083bf8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc17f,	// (0x00083bf8) sp_fs_action_menu_list_gene_pane_g1

0x34ec,	// (0x0007af65) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x34ec,	// (0x0007af65) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x000876f7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x000876f7) sp_fs_action_menu_list_gene_pane_g

0xc18e,	// (0x00083c07) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc18e,	// (0x00083c07) sp_fs_action_menu_list_gene_pane_t1

0xc1a6,	// (0x00083c1f) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc1a6,	// (0x00083c1f) sp_fs_action_menu_list_gene_pane

0x34f9,	// (0x0007af72) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x34f9,	// (0x0007af72) popup_sp_fs_action_menu_bg_pane

0xc1c3,	// (0x00083c3c) sp_fs_action_menu_list_pane_ParamLimits

0xc1c3,	// (0x00083c3c) sp_fs_action_menu_list_pane

0x3507,	// (0x0007af80) sp_fs_scroll_pane_cp01_ParamLimits

0x3507,	// (0x0007af80) sp_fs_scroll_pane_cp01

0x0f31,	// (0x000789aa) list_medium_line_plain_t2_t1

0x0f31,	// (0x000789aa) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x000876e4) list_medium_line_plain_t2_t

0x0f31,	// (0x000789aa) list_medium_line_plain_t3_t1

0x0f31,	// (0x000789aa) list_medium_line_plain_t3_t2

0x0f31,	// (0x000789aa) list_medium_line_plain_t3_t3

0x0002,

0xfc83,	// (0x000876fc) list_medium_line_plain_t3_t

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g2_g1

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x00086c54) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x00086c54) list_medium_line_x2_t2_g2_g

0x09db,	// (0x00078454) list_medium_line_x2_t2_g2_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t2_g2_t1

0x09ee,	// (0x00078467) list_medium_line_x2_t2_g2_t2_ParamLimits

0x09ee,	// (0x00078467) list_medium_line_x2_t2_g2_t2

0x0001,

0xf250,	// (0x00086cc9) list_medium_line_x2_t2_g2_t_ParamLimits

0xf250,	// (0x00086cc9) list_medium_line_x2_t2_g2_t

0x09c3,	// (0x0007843c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t4_g2_g1

0x352d,	// (0x0007afa6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x352d,	// (0x0007afa6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc8a,	// (0x00087703) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc8a,	// (0x00087703) list_medium_line_x2_t4_g2_g

0x09db,	// (0x00078454) list_medium_line_x2_t4_g2_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t4_g2_t1

0x09db,	// (0x00078454) list_medium_line_x2_t4_g2_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t4_g2_t2

0x09db,	// (0x00078454) list_medium_line_x2_t4_g2_t3_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t4_g2_t3

0x09ee,	// (0x00078467) list_medium_line_x2_t4_g2_t4_ParamLimits

0x09ee,	// (0x00078467) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1e9,	// (0x00086c62) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1e9,	// (0x00086c62) list_medium_line_x2_t4_g2_t

0x4642,	// (0x0007c0bb) list_medium_line_t3_right_iconx2_g1

0x09a9,	// (0x00078422) list_medium_line_t3_right_iconx2_g2

0x353e,	// (0x0007afb7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8f,	// (0x00087708) list_medium_line_t3_right_iconx2_g

0x0f31,	// (0x000789aa) list_medium_line_t3_right_iconx2_t1

0x0f31,	// (0x000789aa) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x000876e4) list_medium_line_t3_right_iconx2_t

0x09c3,	// (0x0007843c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x3_t4_g4_g1

0x09cf,	// (0x00078448) list_medium_line_x3_t4_g4_g2_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_x3_t4_g4_g2

0x09c3,	// (0x0007843c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x3_t4_g4_g3

0x09cf,	// (0x00078448) list_medium_line_x3_t4_g4_g4_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc96,	// (0x0008770f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc96,	// (0x0008770f) list_medium_line_x3_t4_g4_g

0x09db,	// (0x00078454) list_medium_line_x3_t4_g4_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x3_t4_g4_t1

0x09db,	// (0x00078454) list_medium_line_x3_t4_g4_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x3_t4_g4_t2

0x09db,	// (0x00078454) list_medium_line_x3_t4_g4_t3_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x3_t4_g4_t3

0x3547,	// (0x0007afc0) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3547,	// (0x0007afc0) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc9f,	// (0x00087718) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc9f,	// (0x00087718) list_medium_line_x3_t4_g4_t

0xc1e1,	// (0x00083c5a) list_single_dyc_row_text_pane_t1_ParamLimits

0xc1e1,	// (0x00083c5a) list_single_dyc_row_text_pane_t1

0xc218,	// (0x00083c91) list_single_dyc_row_text_pane_t2_ParamLimits

0xc218,	// (0x00083c91) list_single_dyc_row_text_pane_t2

0x3564,	// (0x0007afdd) list_single_dyc_row_text_pane_t3_ParamLimits

0x3564,	// (0x0007afdd) list_single_dyc_row_text_pane_t3

0x0005,

0xfca8,	// (0x00087721) list_single_dyc_row_text_pane_t_ParamLimits

0xfca8,	// (0x00087721) list_single_dyc_row_text_pane_t

0x3588,	// (0x0007b001) list_single_dyc_row_pane_g1_ParamLimits

0x3588,	// (0x0007b001) list_single_dyc_row_pane_g1

0x3594,	// (0x0007b00d) list_single_dyc_row_pane_g2_ParamLimits

0x3594,	// (0x0007b00d) list_single_dyc_row_pane_g2

0x35a0,	// (0x0007b019) list_single_dyc_row_pane_g3_ParamLimits

0x35a0,	// (0x0007b019) list_single_dyc_row_pane_g3

0x35ac,	// (0x0007b025) list_single_dyc_row_pane_g4_ParamLimits

0x35ac,	// (0x0007b025) list_single_dyc_row_pane_g4

0x0003,

0xfcb5,	// (0x0008772e) list_single_dyc_row_pane_g_ParamLimits

0xfcb5,	// (0x0008772e) list_single_dyc_row_pane_g

0x35b8,	// (0x0007b031) list_single_dyc_row_text_pane_ParamLimits

0x35b8,	// (0x0007b031) list_single_dyc_row_text_pane

0xde55,	// (0x000858ce) bg_sp_fs_scroll_pane

0x35d7,	// (0x0007b050) thumb_sp_fs_scroll_pane

0x09c3,	// (0x0007843c) list_medium_line_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_g1

0x09db,	// (0x00078454) list_medium_line_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t1

0x09c3,	// (0x0007843c) list_medium_line_x2_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_g1

0x458f,	// (0x0007c008) list_medium_line_x2_g2_ParamLimits

0x458f,	// (0x0007c008) list_medium_line_x2_g2

0x0001,

0xf990,	// (0x00087409) list_medium_line_x2_g_ParamLimits

0xf990,	// (0x00087409) list_medium_line_x2_g

0x097b,	// (0x000783f4) list_medium_line_x2_t1_ParamLimits

0x097b,	// (0x000783f4) list_medium_line_x2_t1

0x09c3,	// (0x0007843c) list_medium_line_x3_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x3_g1

0x464a,	// (0x0007c0c3) list_medium_line_x3_g2_ParamLimits

0x464a,	// (0x0007c0c3) list_medium_line_x3_g2

0x0001,

0xfcbe,	// (0x00087737) list_medium_line_x3_g_ParamLimits

0xfcbe,	// (0x00087737) list_medium_line_x3_g

0x35e0,	// (0x0007b059) list_medium_line_x3_t1_ParamLimits

0x35e0,	// (0x0007b059) list_medium_line_x3_t1

0x35f4,	// (0x0007b06d) thumb_sp_fs_scroll_pane_g1

0x35fd,	// (0x0007b076) thumb_sp_fs_scroll_pane_g2

0x3606,	// (0x0007b07f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x0008773c) thumb_sp_fs_scroll_pane_g

0x35f4,	// (0x0007b06d) bg_sp_fs_scroll_pane_g1

0x35fd,	// (0x0007b076) bg_sp_fs_scroll_pane_g2

0x3606,	// (0x0007b07f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x0008773c) bg_sp_fs_scroll_pane_g

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g4_g1

0x09cf,	// (0x00078448) list_medium_line_x2_t3_g4_g2_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_x2_t3_g4_g2

0x09cf,	// (0x00078448) list_medium_line_x2_t3_g4_g3_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_x2_t3_g4_g3

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e0,	// (0x00086c59) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e0,	// (0x00086c59) list_medium_line_x2_t3_g4_g

0x09db,	// (0x00078454) list_medium_line_x2_t3_g4_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t3_g4_t1

0x09db,	// (0x00078454) list_medium_line_x2_t3_g4_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_x2_t3_g4_t2

0x09ee,	// (0x00078467) list_medium_line_x2_t3_g4_t3_ParamLimits

0x09ee,	// (0x00078467) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x00086c4d) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x00086c4d) list_medium_line_x2_t3_g4_t

0x09c3,	// (0x0007843c) list_medium_line_g2_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_g2_g1

0x458f,	// (0x0007c008) list_medium_line_g2_g2_ParamLimits

0x458f,	// (0x0007c008) list_medium_line_g2_g2

0x0001,

0xf990,	// (0x00087409) list_medium_line_g2_g_ParamLimits

0xf990,	// (0x00087409) list_medium_line_g2_g

0x09db,	// (0x00078454) list_medium_line_g2_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_g2_t1

0x09c3,	// (0x0007843c) list_medium_line_t3_g2_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_t3_g2_g1

0x458f,	// (0x0007c008) list_medium_line_t3_g2_g2_ParamLimits

0x458f,	// (0x0007c008) list_medium_line_t3_g2_g2

0x0001,

0xf990,	// (0x00087409) list_medium_line_t3_g2_g_ParamLimits

0xf990,	// (0x00087409) list_medium_line_t3_g2_g

0x09db,	// (0x00078454) list_medium_line_t3_g2_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t3_g2_t1

0x09db,	// (0x00078454) list_medium_line_t3_g2_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t3_g2_t2

0x09db,	// (0x00078454) list_medium_line_t3_g2_t3_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t3_g2_t3

0x0002,

0xfcca,	// (0x00087743) list_medium_line_t3_g2_t_ParamLimits

0xfcca,	// (0x00087743) list_medium_line_t3_g2_t

0x360f,	// (0x0007b088) list_medium_line_right_icon_g1

0x0f31,	// (0x000789aa) list_medium_line_right_icon_t1

0x09c3,	// (0x0007843c) list_medium_line_t2_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_t2_g1

0x09db,	// (0x00078454) list_medium_line_t2_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t2_t1

0x09db,	// (0x00078454) list_medium_line_t2_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t2_t2

0x0001,

0xf995,	// (0x0008740e) list_medium_line_t2_t_ParamLimits

0xf995,	// (0x0008740e) list_medium_line_t2_t

0x09c3,	// (0x0007843c) list_medium_line_t3_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_t3_g1

0x09db,	// (0x00078454) list_medium_line_t3_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t3_t1

0x09db,	// (0x00078454) list_medium_line_t3_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t3_t2

0x09db,	// (0x00078454) list_medium_line_t3_t3_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t3_t3

0x0002,

0xfcca,	// (0x00087743) list_medium_line_t3_t_ParamLimits

0xfcca,	// (0x00087743) list_medium_line_t3_t

0x09c3,	// (0x0007843c) list_medium_line_g3_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_g3_g1

0x09cf,	// (0x00078448) list_medium_line_g3_g2_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_g3_g2

0x09cf,	// (0x00078448) list_medium_line_g3_g3_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_g3_g3

0x0002,

0xfcd1,	// (0x0008774a) list_medium_line_g3_g_ParamLimits

0xfcd1,	// (0x0008774a) list_medium_line_g3_g

0x09db,	// (0x00078454) list_medium_line_g3_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_g3_t1

0x09c3,	// (0x0007843c) list_medium_line_t2_g3_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_t2_g3_g1

0x09cf,	// (0x00078448) list_medium_line_t2_g3_g2_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_t2_g3_g2

0x09cf,	// (0x00078448) list_medium_line_t2_g3_g3_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_t2_g3_g3

0x0002,

0xfcd1,	// (0x0008774a) list_medium_line_t2_g3_g_ParamLimits

0xfcd1,	// (0x0008774a) list_medium_line_t2_g3_g

0x09db,	// (0x00078454) list_medium_line_t2_g3_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t2_g3_t1

0x09db,	// (0x00078454) list_medium_line_t2_g3_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t2_g3_t2

0x0001,

0xf995,	// (0x0008740e) list_medium_line_t2_g3_t_ParamLimits

0xf995,	// (0x0008740e) list_medium_line_t2_g3_t

0x09c3,	// (0x0007843c) list_medium_line_t3_g3_g1_ParamLimits

0x09c3,	// (0x0007843c) list_medium_line_t3_g3_g1

0x09cf,	// (0x00078448) list_medium_line_t3_g3_g2_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_t3_g3_g2

0x09cf,	// (0x00078448) list_medium_line_t3_g3_g3_ParamLimits

0x09cf,	// (0x00078448) list_medium_line_t3_g3_g3

0x0002,

0xfcd1,	// (0x0008774a) list_medium_line_t3_g3_g_ParamLimits

0xfcd1,	// (0x0008774a) list_medium_line_t3_g3_g

0x09db,	// (0x00078454) list_medium_line_t3_g3_t1_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t3_g3_t1

0x09db,	// (0x00078454) list_medium_line_t3_g3_t2_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t3_g3_t2

0x09db,	// (0x00078454) list_medium_line_t3_g3_t3_ParamLimits

0x09db,	// (0x00078454) list_medium_line_t3_g3_t3

0x0002,

0xfcca,	// (0x00087743) list_medium_line_t3_g3_t_ParamLimits

0xfcca,	// (0x00087743) list_medium_line_t3_g3_t

0x4642,	// (0x0007c0bb) list_medium_line_right_iconx2_g1

0x4642,	// (0x0007c0bb) list_medium_line_right_iconx2_g2

0x0001,

0xfcd8,	// (0x00087751) list_medium_line_right_iconx2_g

0x0f40,	// (0x000789b9) list_medium_line_right_iconx2_t1

0x4642,	// (0x0007c0bb) list_medium_line_t2_right_iconx2_g1

0x4642,	// (0x0007c0bb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd8,	// (0x00087751) list_medium_line_t2_right_iconx2_g

0x0f31,	// (0x000789aa) list_medium_line_t2_right_iconx2_t1

0x0f31,	// (0x000789aa) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x000876e4) list_medium_line_t2_right_iconx2_t

0x0f31,	// (0x000789aa) list_medium_line_x4_t4_t1

0x0f31,	// (0x000789aa) list_medium_line_x4_t4_t2

0x0f31,	// (0x000789aa) list_medium_line_x4_t4_t3

0x0f31,	// (0x000789aa) list_medium_line_x4_t4_t4

0x0003,

0xf2a2,	// (0x00086d1b) list_medium_line_x4_t4_t

0xc35c,	// (0x00083dd5) tport_appsw_pane_ParamLimits

0xc35c,	// (0x00083dd5) tport_appsw_pane

0xc368,	// (0x00083de1) tport_contact_pane_ParamLimits

0xc368,	// (0x00083de1) tport_contact_pane

0xc376,	// (0x00083def) tport_listscroll_pane_ParamLimits

0xc376,	// (0x00083def) tport_listscroll_pane

0xc384,	// (0x00083dfd) cell_tport_appsw_pane_ParamLimits

0xc384,	// (0x00083dfd) cell_tport_appsw_pane

0xe553,	// (0x00085fcc) tport_appsw_pane_g1_ParamLimits

0xe553,	// (0x00085fcc) tport_appsw_pane_g1

0x3618,	// (0x0007b091) tport_contact_pane_g1

0x3621,	// (0x0007b09a) tport_contact_pane_t1

0x362f,	// (0x0007b0a8) tport_contact_pane_t2

0x0001,

0xfcdd,	// (0x00087756) tport_contact_pane_t

0x363d,	// (0x0007b0b6) list_tport_pane

0xe6c4,	// (0x0008613d) scroll_pane_cp_030

0x364e,	// (0x0007b0c7) cell_tport_appsw_pane_g1

0x365e,	// (0x0007b0d7) cell_tport_appsw_pane_t1

0x366c,	// (0x0007b0e5) grid_highlight_pane_cp019

0xc3ab,	// (0x00083e24) list_tport_double_graphic_pane_ParamLimits

0xc3ab,	// (0x00083e24) list_tport_double_graphic_pane

0x0861,	// (0x000782da) list_highlight_pane_cp023_ParamLimits

0x0861,	// (0x000782da) list_highlight_pane_cp023

0xc3b8,	// (0x00083e31) list_tport_double_graphic_pane_g1_ParamLimits

0xc3b8,	// (0x00083e31) list_tport_double_graphic_pane_g1

0xc3c5,	// (0x00083e3e) list_tport_double_graphic_pane_t1_ParamLimits

0xc3c5,	// (0x00083e3e) list_tport_double_graphic_pane_t1

0xc3da,	// (0x00083e53) list_tport_double_graphic_pane_t2_ParamLimits

0xc3da,	// (0x00083e53) list_tport_double_graphic_pane_t2

0x0001,

0xfce9,	// (0x00087762) list_tport_double_graphic_pane_t_ParamLimits

0xfce9,	// (0x00087762) list_tport_double_graphic_pane_t

0xde55,	// (0x000858ce) main_cale_note_pane

0xa478,	// (0x00081ef1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa478,	// (0x00081ef1) cell_vitu2_function_top_wide_pane_cp01

0xbc77,	// (0x000836f0) wait_bar_pane_cp05_ParamLimits

0x0861,	// (0x000782da) listscroll_cmail_pane

0x367c,	// (0x0007b0f5) list_cmail_pane

0xc3ec,	// (0x00083e65) list_cmail_body_pane

0xc3ec,	// (0x00083e65) list_single_cmail_header_caption_pane

0xc405,	// (0x00083e7e) list_single_cmail_header_detail_pane_ParamLimits

0xc405,	// (0x00083e7e) list_single_cmail_header_detail_pane

0x369f,	// (0x0007b118) list_single_cmail_header_caption_pane_t1

0xc432,	// (0x00083eab) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc432,	// (0x00083eab) list_single_cmail_header_detail_pane_g1

0x4657,	// (0x0007c0d0) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4657,	// (0x0007c0d0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcee,	// (0x00087767) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcee,	// (0x00087767) list_single_cmail_header_detail_pane_g

0xc448,	// (0x00083ec1) list_single_cmail_header_detail_pane_t1_ParamLimits

0xc448,	// (0x00083ec1) list_single_cmail_header_detail_pane_t1

0x36e7,	// (0x0007b160) list_single_cmail_header_editor_pane_bg_ParamLimits

0x36e7,	// (0x0007b160) list_single_cmail_header_editor_pane_bg

0x36fe,	// (0x0007b177) list_cmail_body_pane_g1

0x3707,	// (0x0007b180) list_cmail_body_pane_t1

0x238f,	// (0x00079e08) list_single_cmail_header_editor_pane_bg_g1

0x0c05,	// (0x0007867e) list_single_cmail_header_editor_pane_bg_g1_copy1

0x239f,	// (0x00079e18) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2397,	// (0x00079e10) list_single_cmail_header_editor_pane_bg_g1_copy3

0x25ea,	// (0x0007a063) list_single_cmail_header_editor_pane_bg_g1_copy4

0x23bf,	// (0x00079e38) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x23af,	// (0x00079e28) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x23b7,	// (0x00079e30) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0be5,	// (0x0007865e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc484,	// (0x00083efd) calenote_gesture_pane_ParamLimits

0xc484,	// (0x00083efd) calenote_gesture_pane

0xc49c,	// (0x00083f15) calenote_window_pane_ParamLimits

0xc49c,	// (0x00083f15) calenote_window_pane

0x3715,	// (0x0007b18e) popup_note_window_cp01

0xc4b4,	// (0x00083f2d) calenote_swipe_1_pane_ParamLimits

0xc4b4,	// (0x00083f2d) calenote_swipe_1_pane

0xc007,	// (0x00083a80) calenote_swipe_2_pane_ParamLimits

0xc007,	// (0x00083a80) calenote_swipe_2_pane

0x33db,	// (0x0007ae54) calenote_swipe_1_pane_g1_ParamLimits

0x33db,	// (0x0007ae54) calenote_swipe_1_pane_g1

0x33e8,	// (0x0007ae61) calenote_swipe_1_pane_g2_ParamLimits

0x33e8,	// (0x0007ae61) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x000876cc) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x000876cc) calenote_swipe_1_pane_g

0x3727,	// (0x0007b1a0) calenote_swipe_1_pane_t1_ParamLimits

0x3727,	// (0x0007b1a0) calenote_swipe_1_pane_t1

0x33db,	// (0x0007ae54) calenote_swipe_2_pane_g1_ParamLimits

0x33db,	// (0x0007ae54) calenote_swipe_2_pane_g1

0x3746,	// (0x0007b1bf) calenote_swipe_2_pane_g2_ParamLimits

0x3746,	// (0x0007b1bf) calenote_swipe_2_pane_g2

0x0001,

0xfcfa,	// (0x00087773) calenote_swipe_2_pane_g_ParamLimits

0xfcfa,	// (0x00087773) calenote_swipe_2_pane_g

0x3752,	// (0x0007b1cb) calenote_swipe_2_pane_t1_ParamLimits

0x3752,	// (0x0007b1cb) calenote_swipe_2_pane_t1

0xde55,	// (0x000858ce) main_mup_navstr_pane

0x947d,	// (0x00080ef6) main_mup3_pane_t7_ParamLimits

0x947d,	// (0x00080ef6) main_mup3_pane_t7

0x9c66,	// (0x000816df) main_mp4_pane_g6_ParamLimits

0x9c66,	// (0x000816df) main_mp4_pane_g6

0x9fc0,	// (0x00081a39) main_image3_pane_t4_ParamLimits

0x9fc0,	// (0x00081a39) main_image3_pane_t4

0xc4c7,	// (0x00083f40) popup_navstr_preview_pane_ParamLimits

0xc4c7,	// (0x00083f40) popup_navstr_preview_pane

0xc4d3,	// (0x00083f4c) scroll_navstr_pane_ParamLimits

0xc4d3,	// (0x00083f4c) scroll_navstr_pane

0xde55,	// (0x000858ce) bg_popup_preview_window_pane_cp04

0x3779,	// (0x0007b1f2) popup_navstr_preview_pane_t1

0xc4df,	// (0x00083f58) scroll_navstr_pane_g1_ParamLimits

0xc4df,	// (0x00083f58) scroll_navstr_pane_g1

0xc4ec,	// (0x00083f65) scroll_navstr_pane_t1_ParamLimits

0xc4ec,	// (0x00083f65) scroll_navstr_pane_t1

0x371e,	// (0x0007b197) bg_button_pane_cp014

0x371e,	// (0x0007b197) bg_button_pane_cp030

0xbf05,	// (0x0008397e) list_double_fisheye_pane_g4_ParamLimits

0xbf05,	// (0x0008397e) list_double_fisheye_pane_g4

0xbf11,	// (0x0008398a) list_double_fisheye_pane_g5_ParamLimits

0xbf11,	// (0x0008398a) list_double_fisheye_pane_g5

0x3693,	// (0x0007b10c) sp_fs_scroll_pane_cp03

0x34b9,	// (0x0007af32) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x34c5,	// (0x0007af3e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x000876e9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc0e8,	// (0x00083b61) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x368b,	// (0x0007b104) sp_fs_scroll_pane_cp02

0xe6d6,	// (0x0008614f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe6d6,	// (0x0008614f) popup_sp_fs_calendar_preview_list_single_pane

0xde55,	// (0x000858ce) main_cam6_pano_pane

0x87d0,	// (0x00080249) main_mup3_pane_ParamLimits

0xde55,	// (0x000858ce) main_phacti_pane

0xbb6a,	// (0x000835e3) bg_button_pane_cp11

0xbb82,	// (0x000835fb) main_mobtv_info_pane_g2_ParamLimits

0xbb82,	// (0x000835fb) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x00087649) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x00087649) main_mobtv_info_pane_g

0xbd0e,	// (0x00083787) sc_clock_pane_t5_ParamLimits

0xbd0e,	// (0x00083787) sc_clock_pane_t5

0xbd9b,	// (0x00083814) main_radioblah_pane_g1_ParamLimits

0x331e,	// (0x0007ad97) main_radioblah_pane_t3_ParamLimits

0x331e,	// (0x0007ad97) main_radioblah_pane_t3

0x3336,	// (0x0007adaf) main_radioblah_pane_t4_ParamLimits

0x3336,	// (0x0007adaf) main_radioblah_pane_t4

0xbdb9,	// (0x00083832) main_radioblah_text_pane_ParamLimits

0xbdb9,	// (0x00083832) main_radioblah_text_pane

0xbdc6,	// (0x0008383f) main_radioblah_info_pane_g1_ParamLimits

0xbe53,	// (0x000838cc) main_radioblah_info_pane_t4_ParamLimits

0xbe53,	// (0x000838cc) main_radioblah_info_pane_t4

0x0861,	// (0x000782da) main_sp_fs_calendar_pane

0xc4fe,	// (0x00083f77) main_phacti_pane_g1

0xc506,	// (0x00083f7f) phacti_note_pane_ParamLimits

0xc506,	// (0x00083f7f) phacti_note_pane

0x3790,	// (0x0007b209) phacti_term_pane_ParamLimits

0x3790,	// (0x0007b209) phacti_term_pane

0x37a5,	// (0x0007b21e) phacti_note_pane_t1_ParamLimits

0x37a5,	// (0x0007b21e) phacti_note_pane_t1

0x37bc,	// (0x0007b235) phacti_term_pane_g1

0x37c4,	// (0x0007b23d) phacti_term_pane_t1_ParamLimits

0x37c4,	// (0x0007b23d) phacti_term_pane_t1

0x37ee,	// (0x0007b267) popup_sp_fs_calendar_preview_list_single_pane_g1

0x37f6,	// (0x0007b26f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd04,	// (0x0008777d) popup_sp_fs_calendar_preview_list_single_pane_g

0x37fe,	// (0x0007b277) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x37fe,	// (0x0007b277) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3814,	// (0x0007b28d) aid_popup_sp_fs_bg_corner_pane

0x09a9,	// (0x00078422) popup_sp_fs_calendar_preview_bg_pane_g1

0xde55,	// (0x000858ce) popup_sp_fs_calendar_preview_bg_pane

0x381c,	// (0x0007b295) popup_sp_fs_calendar_preview_list_pane

0x87c2,	// (0x0008023b) bg_main_sp_fs_cale_pane_ParamLimits

0x87c2,	// (0x0008023b) bg_main_sp_fs_cale_pane

0x3824,	// (0x0007b29d) listscroll_cale_mrui_pane_ParamLimits

0x3824,	// (0x0007b29d) listscroll_cale_mrui_pane

0x3839,	// (0x0007b2b2) listscroll_sp_fs_schedule_track_pane

0x3842,	// (0x0007b2bb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3842,	// (0x0007b2bb) main_sp_fs_ctrlbar_pane_cp01

0x3855,	// (0x0007b2ce) main_sp_fs_ribbon_pane

0x385d,	// (0x0007b2d6) popup_sp_fs_cale_preview_window

0xc55d,	// (0x00083fd6) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc55d,	// (0x00083fd6) list_single_sp_fs_schedule_track_pane

0xe561,	// (0x00085fda) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe561,	// (0x00085fda) bg_sp_fs_highlight_list_pane_cp03

0xc573,	// (0x00083fec) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc573,	// (0x00083fec) list_single_sp_fs_schedule_track_pane_g1

0xc57f,	// (0x00083ff8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc57f,	// (0x00083ff8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd09,	// (0x00087782) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd09,	// (0x00087782) list_single_sp_fs_schedule_track_pane_g

0xc58b,	// (0x00084004) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc58b,	// (0x00084004) list_single_sp_fs_schedule_track_pane_t1

0xc5a3,	// (0x0008401c) sp_fs_schedule_track_pane_ParamLimits

0xc5a3,	// (0x0008401c) sp_fs_schedule_track_pane

0x386f,	// (0x0007b2e8) sp_fs_schedule_track_pane_g1

0x3877,	// (0x0007b2f0) sp_fs_schedule_track_pane_g2

0x387f,	// (0x0007b2f8) sp_fs_schedule_track_pane_g3

0x3887,	// (0x0007b300) sp_fs_schedule_track_pane_g4

0x388f,	// (0x0007b308) sp_fs_schedule_track_pane_g5

0x0004,

0xfd0e,	// (0x00087787) sp_fs_schedule_track_pane_g

0x238f,	// (0x00079e08) bg_sp_fs_schedule_viewer_highlight_g1

0x0c05,	// (0x0007867e) bg_sp_fs_schedule_viewer_highlight_g2

0x2397,	// (0x00079e10) bg_sp_fs_schedule_viewer_highlight_g3

0x239f,	// (0x00079e18) bg_sp_fs_schedule_viewer_highlight_g4

0x25ea,	// (0x0007a063) bg_sp_fs_schedule_viewer_highlight_g5

0x23af,	// (0x00079e28) bg_sp_fs_schedule_viewer_highlight_g6

0x23b7,	// (0x00079e30) bg_sp_fs_schedule_viewer_highlight_g7

0x23bf,	// (0x00079e38) bg_sp_fs_schedule_viewer_highlight_g8

0x0be5,	// (0x0007865e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd19,	// (0x00087792) bg_sp_fs_schedule_viewer_highlight_g

0xde55,	// (0x000858ce) bg_main_sp_fs_ribbon_pane

0xa1dd,	// (0x00081c56) main_sp_fs_ribbon_pane_g1

0x3897,	// (0x0007b310) main_sp_fs_ribbon_pane_t1

0xc5b3,	// (0x0008402c) main_sp_fs_ribbon_pane_t2

0x38a6,	// (0x0007b31f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd2c,	// (0x000877a5) main_sp_fs_ribbon_pane_t

0x38b5,	// (0x0007b32e) main_sp_fs_ribbon_scheduler_pane

0x38bd,	// (0x0007b336) bg_main_sp_fs_ribbon_pane_g1

0x38c6,	// (0x0007b33f) bg_main_sp_fs_ribbon_pane_g2

0x38cf,	// (0x0007b348) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd33,	// (0x000877ac) bg_main_sp_fs_ribbon_pane_g

0x38d7,	// (0x0007b350) main_sp_fs_ribbon_scheduler_pane_g1

0x38e0,	// (0x0007b359) main_sp_fs_ribbon_scheduler_pane_g2

0x38e9,	// (0x0007b362) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd3a,	// (0x000877b3) main_sp_fs_ribbon_scheduler_pane_g

0x38f2,	// (0x0007b36b) list_cale_mrui_pane

0xc5c2,	// (0x0008403b) sp_fs_scroll_pane_cp07_ParamLimits

0xc5c2,	// (0x0008403b) sp_fs_scroll_pane_cp07

0xc5da,	// (0x00084053) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc5da,	// (0x00084053) bg_sp_fs_schedule_viewer_highlight

0x38ff,	// (0x0007b378) list_single_sp_fs_schedule_track_pane_cp01

0x3907,	// (0x0007b380) list_sp_fs_schedule_track_pane

0x390f,	// (0x0007b388) sp_fs_scroll_pane_cp06_ParamLimits

0x390f,	// (0x0007b388) sp_fs_scroll_pane_cp06

0x09a9,	// (0x00078422) bgmain_sp_fs_calendar_pane_g1

0xc5e7,	// (0x00084060) list_single_cale_mrui_pane_ParamLimits

0xc5e7,	// (0x00084060) list_single_cale_mrui_pane

0x3921,	// (0x0007b39a) list_single_cale_mrui_row_pane_ParamLimits

0x3921,	// (0x0007b39a) list_single_cale_mrui_row_pane

0xc609,	// (0x00084082) list_single_cale_mrui_row_pane_g1_ParamLimits

0xc609,	// (0x00084082) list_single_cale_mrui_row_pane_g1

0xc641,	// (0x000840ba) list_single_cale_mrui_row_pane_t1_ParamLimits

0xc641,	// (0x000840ba) list_single_cale_mrui_row_pane_t1

0xc653,	// (0x000840cc) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc653,	// (0x000840cc) list_single_cale_mrui_row_pane_t2

0xc6b9,	// (0x00084132) list_single_cale_mrui_row_pane_t3_ParamLimits

0xc6b9,	// (0x00084132) list_single_cale_mrui_row_pane_t3

0xc6e8,	// (0x00084161) list_single_cale_mrui_row_pane_t4_ParamLimits

0xc6e8,	// (0x00084161) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd48,	// (0x000877c1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd48,	// (0x000877c1) list_single_cale_mrui_row_pane_t

0xc717,	// (0x00084190) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc717,	// (0x00084190) list_single_cmail_header_editor_pane_bg_cp01

0xc73b,	// (0x000841b4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc73b,	// (0x000841b4) list_single_cmail_header_editor_pane_bg_cp02

0xc759,	// (0x000841d2) main_radioblah_text_pane_t1_ParamLimits

0xc759,	// (0x000841d2) main_radioblah_text_pane_t1

0x3944,	// (0x0007b3bd) cam6_indi_pane_cp01

0x394c,	// (0x0007b3c5) cam6_mode_pane_cp01

0x3954,	// (0x0007b3cd) cam6_pano_pane

0x395d,	// (0x0007b3d6) cam6_zoom_pane_cp01

0x3965,	// (0x0007b3de) cam6_pano_image_pane

0x396e,	// (0x0007b3e7) cam6_pano_pane_g1

0x3085,	// (0x0007aafe) cam6_pano_pane_g2

0x3977,	// (0x0007b3f0) cam6_pano_pane_g3

0x3980,	// (0x0007b3f9) cam6_pano_pane_g4

0xee46,	// (0x000868bf) cam6_pano_pane_g5

0x3989,	// (0x0007b402) cam6_pano_pane_g6

0x3991,	// (0x0007b40a) cam6_pano_pane_g7

0x3999,	// (0x0007b412) cam6_pano_pane_g8

0x39a2,	// (0x0007b41b) cam6_pano_pane_g9

0x0008,

0xfd51,	// (0x000877ca) cam6_pano_pane_g

0xde55,	// (0x000858ce) main_browser_tag_pane

0x3771,	// (0x0007b1ea) grid_navstr_albumart_pane

0x39ab,	// (0x0007b424) cell_navstr_albumart_pane_ParamLimits

0x39ab,	// (0x0007b424) cell_navstr_albumart_pane

0x158c,	// (0x00079005) cell_navstr_albumart_pane_g1

0x8428,	// (0x0007fea1) cell_navstr_albumart_pane_g2

0x8438,	// (0x0007feb1) cell_navstr_albumart_pane_g3

0x8430,	// (0x0007fea9) cell_navstr_albumart_pane_g4

0x0003,

0xfd64,	// (0x000877dd) cell_navstr_albumart_pane_g

0xc772,	// (0x000841eb) bt_list_pane_ParamLimits

0xc772,	// (0x000841eb) bt_list_pane

0xc787,	// (0x00084200) bt_list_pane_t1

0xc796,	// (0x0008420f) bt_list_pane_t2

0x0001,

0xfd6d,	// (0x000877e6) bt_list_pane_t

0xde55,	// (0x000858ce) main_cale_prevew_pane

0xc7a5,	// (0x0008421e) popup_cale_preview_window_ParamLimits

0xc7a5,	// (0x0008421e) popup_cale_preview_window

0x0861,	// (0x000782da) bg_popup_preview_window_pane_cp05_ParamLimits

0x0861,	// (0x000782da) bg_popup_preview_window_pane_cp05

0x39c2,	// (0x0007b43b) list_cale_preview_pane_ParamLimits

0x39c2,	// (0x0007b43b) list_cale_preview_pane

0xc7ba,	// (0x00084233) list_double_cale_preview_pane_ParamLimits

0xc7ba,	// (0x00084233) list_double_cale_preview_pane

0xc7cb,	// (0x00084244) list_single_cale_preview_pane_ParamLimits

0xc7cb,	// (0x00084244) list_single_cale_preview_pane

0xc7df,	// (0x00084258) list_single_cale_preview_pane_g1

0xc7e7,	// (0x00084260) list_single_cale_preview_pane_t1_ParamLimits

0xc7e7,	// (0x00084260) list_single_cale_preview_pane_t1

0x39ce,	// (0x0007b447) list_double_cale_preview_pane_g1

0x39d6,	// (0x0007b44f) list_double_cale_preview_pane_t1_ParamLimits

0x39d6,	// (0x0007b44f) list_double_cale_preview_pane_t1

0xc7fc,	// (0x00084275) list_double_cale_preview_pane_t2_ParamLimits

0xc7fc,	// (0x00084275) list_double_cale_preview_pane_t2

0x0001,

0xfd72,	// (0x000877eb) list_double_cale_preview_pane_t_ParamLimits

0xfd72,	// (0x000877eb) list_double_cale_preview_pane_t

0xde55,	// (0x000858ce) main_ezdial_pane

0x0861,	// (0x000782da) main_sp_fs_email_pane_ParamLimits

0xc051,	// (0x00083aca) cmail_ddmenu_btn01_pane_ParamLimits

0xc051,	// (0x00083aca) cmail_ddmenu_btn01_pane

0xc06e,	// (0x00083ae7) cmail_ddmenu_btn02_pane_ParamLimits

0xc06e,	// (0x00083ae7) cmail_ddmenu_btn02_pane

0xc08c,	// (0x00083b05) cmail_ddmenu_btn03_pane_ParamLimits

0xc08c,	// (0x00083b05) cmail_ddmenu_btn03_pane

0xc130,	// (0x00083ba9) main_sp_fs_ctrlbar_pane_ParamLimits

0xc144,	// (0x00083bbd) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc3ec,	// (0x00083e65) list_cmail_body_pane_ParamLimits

0x36ad,	// (0x0007b126) bg_button_pane_cp12

0x36b6,	// (0x0007b12f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x36b6,	// (0x0007b12f) list_single_cmail_header_detail_pane_g3

0x36c3,	// (0x0007b13c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x36c3,	// (0x0007b13c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf5,	// (0x0008776e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf5,	// (0x0008776e) list_single_cmail_header_detail_pane_t

0x37d9,	// (0x0007b252) phacti_term_pane_t2_ParamLimits

0x37d9,	// (0x0007b252) phacti_term_pane_t2

0x0001,

0xfcff,	// (0x00087778) phacti_term_pane_t_ParamLimits

0xfcff,	// (0x00087778) phacti_term_pane_t

0x39eb,	// (0x0007b464) aid_size_list_single_double

0xc814,	// (0x0008428d) popup_ezdial_listscroll_window

0xc82d,	// (0x000842a6) popup_number_entry_window_cp01

0x0931,	// (0x000783aa) bg_popup_call_pane_cp09

0x39f7,	// (0x0007b470) ezdial_list_pane

0x39ff,	// (0x0007b478) scroll_pane_cp23

0x7742,	// (0x0007f1bb) bg_button_pane_cp028_ParamLimits

0x7742,	// (0x0007f1bb) bg_button_pane_cp028

0xc839,	// (0x000842b2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc839,	// (0x000842b2) cmail_ddmenu_btn01_pane_g1

0xc849,	// (0x000842c2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc849,	// (0x000842c2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd77,	// (0x000877f0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd77,	// (0x000877f0) cmail_ddmenu_btn01_pane_g

0x3a07,	// (0x0007b480) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3a07,	// (0x0007b480) cmail_ddmenu_btn01_pane_t1

0x87c2,	// (0x0008023b) bg_button_pane_cp029_ParamLimits

0x87c2,	// (0x0008023b) bg_button_pane_cp029

0xc849,	// (0x000842c2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc849,	// (0x000842c2) cmail_ddmenu_btn02_pane_g1

0xc861,	// (0x000842da) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc861,	// (0x000842da) cmail_ddmenu_btn02_pane_t1

0xe561,	// (0x00085fda) bg_button_pane_cp031_ParamLimits

0xe561,	// (0x00085fda) bg_button_pane_cp031

0xc849,	// (0x000842c2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc849,	// (0x000842c2) cmail_ddmenu_btn03_pane_g1

0xc861,	// (0x000842da) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc861,	// (0x000842da) cmail_ddmenu_btn03_pane_t1

0x9e6f,	// (0x000818e8) cell_dialer2_keypad_pane_t1_ParamLimits

0x9e89,	// (0x00081902) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9e89,	// (0x00081902) cell_dialer2_keypad_pane_t1_copy1

0xb9f7,	// (0x00083470) ncimui_group_button_pane

0x0861,	// (0x000782da) main_sp_fs_calendar_pane_ParamLimits

0xc3ec,	// (0x00083e65) list_single_cmail_header_caption_pane_ParamLimits

0x4663,	// (0x0007c0dc) aid_recal_txt_sm_pane

0xde55,	// (0x000858ce) mian_recal_day_pane

0x385d,	// (0x0007b2d6) popup_sp_fs_cale_preview_window_ParamLimits

0x3a1c,	// (0x0007b495) list_recal_day_pane

0x3a5e,	// (0x0007b4d7) list_single_recal_day_pane_ParamLimits

0x3a5e,	// (0x0007b4d7) list_single_recal_day_pane

0x3a70,	// (0x0007b4e9) list_single_recal_day_pane_g1_ParamLimits

0x3a70,	// (0x0007b4e9) list_single_recal_day_pane_g1

0x3a7c,	// (0x0007b4f5) list_single_recal_day_pane_g2_ParamLimits

0x3a7c,	// (0x0007b4f5) list_single_recal_day_pane_g2

0x3a88,	// (0x0007b501) list_single_recal_day_pane_g3_ParamLimits

0x3a88,	// (0x0007b501) list_single_recal_day_pane_g3

0xc885,	// (0x000842fe) list_single_recal_day_pane_g4_ParamLimits

0xc885,	// (0x000842fe) list_single_recal_day_pane_g4

0x3a94,	// (0x0007b50d) list_single_recal_day_pane_g5_ParamLimits

0x3a94,	// (0x0007b50d) list_single_recal_day_pane_g5

0xc899,	// (0x00084312) list_single_recal_day_pane_g6_ParamLimits

0xc899,	// (0x00084312) list_single_recal_day_pane_g6

0x0004,

0xfd86,	// (0x000877ff) list_single_recal_day_pane_g_ParamLimits

0xfd86,	// (0x000877ff) list_single_recal_day_pane_g

0x3aa8,	// (0x0007b521) list_single_recal_day_pane_t1

0xc8a8,	// (0x00084321) list_single_recal_day_pane_t2

0x0001,

0xfd91,	// (0x0008780a) list_single_recal_day_pane_t

0xc8bd,	// (0x00084336) ncimui_query_button_pane_ParamLimits

0xc8bd,	// (0x00084336) ncimui_query_button_pane

0xc8cd,	// (0x00084346) ncimui_query_button_pane_t1_ParamLimits

0xc8cd,	// (0x00084346) ncimui_query_button_pane_t1

0x3aba,	// (0x0007b533) ncimui_query_button_pane_t2_ParamLimits

0x3aba,	// (0x0007b533) ncimui_query_button_pane_t2

0x0001,

0xfd96,	// (0x0008780f) ncimui_query_button_pane_t_ParamLimits

0xfd96,	// (0x0008780f) ncimui_query_button_pane_t

0xc8e0,	// (0x00084359) query_button_pane_ParamLimits

0xc8e0,	// (0x00084359) query_button_pane

0xde55,	// (0x000858ce) bg_button_pane_cp0028

0x3acd,	// (0x0007b546) query_button_pane_t1

0x87ec,	// (0x00080265) main_tport_pane_ParamLimits

0xc338,	// (0x00083db1) bg_popup_window_pane_cp01_ParamLimits

0xc338,	// (0x00083db1) bg_popup_window_pane_cp01

0xc344,	// (0x00083dbd) heading_pane_cp08_ParamLimits

0xc344,	// (0x00083dbd) heading_pane_cp08

0xc350,	// (0x00083dc9) heading_pane_cp07_ParamLimits

0xc350,	// (0x00083dc9) heading_pane_cp07

0x364e,	// (0x0007b0c7) cell_tport_appsw_pane_g2

0x0002,

0xfce2,	// (0x0008775b) cell_tport_appsw_pane_g

0x1584,	// (0x00078ffd) input_candi_list_open_g1

0x0de0,	// (0x00078859) list_cale_time_pane_g6_ParamLimits

0x0de0,	// (0x00078859) list_cale_time_pane_g6

0x8f97,	// (0x00080a10) aid_size_touch_calib_1_ParamLimits

0x8f97,	// (0x00080a10) aid_size_touch_calib_1

0x8fa3,	// (0x00080a1c) aid_size_touch_calib_2_ParamLimits

0x8fa3,	// (0x00080a1c) aid_size_touch_calib_2

0x8faf,	// (0x00080a28) aid_size_touch_calib_3_ParamLimits

0x8faf,	// (0x00080a28) aid_size_touch_calib_3

0x8fbd,	// (0x00080a36) aid_size_touch_calib_4_ParamLimits

0x8fbd,	// (0x00080a36) aid_size_touch_calib_4

0x8fcb,	// (0x00080a44) main_touch_calib_button_group_pane_ParamLimits

0x8fcb,	// (0x00080a44) main_touch_calib_button_group_pane

0x8fd9,	// (0x00080a52) main_touch_calib_pane_g1_ParamLimits

0x8fe5,	// (0x00080a5e) main_touch_calib_pane_g2_ParamLimits

0x8ff1,	// (0x00080a6a) main_touch_calib_pane_g3_ParamLimits

0x8ffd,	// (0x00080a76) main_touch_calib_pane_g4_ParamLimits

0xf6dd,	// (0x00087156) main_touch_calib_pane_g_ParamLimits

0x9009,	// (0x00080a82) main_touch_calib_pane_t1_ParamLimits

0x901e,	// (0x00080a97) main_touch_calib_pane_t2_ParamLimits

0x9033,	// (0x00080aac) main_touch_calib_pane_t3_ParamLimits

0x9045,	// (0x00080abe) main_touch_calib_pane_t4_ParamLimits

0x9057,	// (0x00080ad0) main_touch_calib_pane_t5_ParamLimits

0xf6e6,	// (0x0008715f) main_touch_calib_pane_t_ParamLimits

0xec1e,	// (0x00086697) list_single_fp_cale_pane_g3_ParamLimits

0xec1e,	// (0x00086697) list_single_fp_cale_pane_g3

0x87d0,	// (0x00080249) bg_button_pane_cp012_ParamLimits

0x87d0,	// (0x00080249) bg_vkb2_func_pane_cp03_ParamLimits

0xabda,	// (0x00082653) cell_vitu2_function_top_pane_g1_ParamLimits

0x87d0,	// (0x00080249) bg_vkb2_func_pane_cp04_ParamLimits

0xb983,	// (0x000833fc) main_ncimui_button_group_pane_ParamLimits

0xb983,	// (0x000833fc) main_ncimui_button_group_pane

0xb9e5,	// (0x0008345e) main_ncimui_pane_t3_ParamLimits

0xb9e5,	// (0x0008345e) main_ncimui_pane_t3

0x3787,	// (0x0007b200) phacti_button_group_pane

0x39eb,	// (0x0007b464) aid_size_list_single_double_ParamLimits

0xc814,	// (0x0008428d) popup_ezdial_listscroll_window_ParamLimits

0xc82d,	// (0x000842a6) popup_number_entry_window_cp01_ParamLimits

0xc8ed,	// (0x00084366) phacti_button_pane_ParamLimits

0xc8ed,	// (0x00084366) phacti_button_pane

0xde55,	// (0x000858ce) bg_button_pane_cp14

0x3adb,	// (0x0007b554) phacti_button_pane_t1

0xc8fc,	// (0x00084375) main_touch_calib_button_pane_ParamLimits

0xc8fc,	// (0x00084375) main_touch_calib_button_pane

0xe5c9,	// (0x00086042) bg_button_pane_cp18_ParamLimits

0xe5c9,	// (0x00086042) bg_button_pane_cp18

0xc90d,	// (0x00084386) main_touch_calib_button_pane_t1_ParamLimits

0xc90d,	// (0x00084386) main_touch_calib_button_pane_t1

0xc923,	// (0x0008439c) main_touch_calib_button_pane_t2_ParamLimits

0xc923,	// (0x0008439c) main_touch_calib_button_pane_t2

0x0001,

0xfd9b,	// (0x00087814) main_touch_calib_button_pane_t_ParamLimits

0xfd9b,	// (0x00087814) main_touch_calib_button_pane_t

0xde55,	// (0x000858ce) cell_ncimui_button_pane

0xde55,	// (0x000858ce) bg_button_pane_cp032

0x3ae9,	// (0x0007b562) cell_ncimui_button_pane_t1

0x9edb,	// (0x00081954) image3_infobar_pane_ParamLimits

0x9edb,	// (0x00081954) image3_infobar_pane

0xbd2e,	// (0x000837a7) fs_bigclock_status_pane_ParamLimits

0xbd2e,	// (0x000837a7) fs_bigclock_status_pane

0xbd3b,	// (0x000837b4) main_fs_bigclock_clock_pane_ParamLimits

0xbd3b,	// (0x000837b4) main_fs_bigclock_clock_pane

0xbd53,	// (0x000837cc) main_fs_bigclock_indi_pane_ParamLimits

0xbd53,	// (0x000837cc) main_fs_bigclock_indi_pane

0xbd73,	// (0x000837ec) main_fs_bigclock_swipe_pane_ParamLimits

0xbd73,	// (0x000837ec) main_fs_bigclock_swipe_pane

0xde55,	// (0x000858ce) main_fs_clock_dumped_data

0x3192,	// (0x0007ac0b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3192,	// (0x0007ac0b) list_single_fs_bigclock_indicator_pane_g1

0x31ac,	// (0x0007ac25) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x31ac,	// (0x0007ac25) list_single_fs_bigclock_indicator_pane_g2

0x31c6,	// (0x0007ac3f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x31c6,	// (0x0007ac3f) list_single_fs_bigclock_indicator_pane_g3

0x31e0,	// (0x0007ac59) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x31e0,	// (0x0007ac59) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x0008767d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x0008767d) list_single_fs_bigclock_indicator_pane_g

0x3209,	// (0x0007ac82) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3209,	// (0x0007ac82) list_single_fs_bigclock_indicator_pane_t1

0x3231,	// (0x0007acaa) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3231,	// (0x0007acaa) list_single_fs_bigclock_indicator_pane_t2

0x3259,	// (0x0007acd2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3259,	// (0x0007acd2) list_single_fs_bigclock_indicator_pane_t3

0x3281,	// (0x0007acfa) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3281,	// (0x0007acfa) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x00087688) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x00087688) list_single_fs_bigclock_indicator_pane_t

0x3af7,	// (0x0007b570) image3_infobar_fav_pane_ParamLimits

0x3af7,	// (0x0007b570) image3_infobar_fav_pane

0x3b07,	// (0x0007b580) image3_infobar_loc_pane_ParamLimits

0x3b07,	// (0x0007b580) image3_infobar_loc_pane

0x3b1b,	// (0x0007b594) image3_infobar_time_pane_ParamLimits

0x3b1b,	// (0x0007b594) image3_infobar_time_pane

0x09a9,	// (0x00078422) image3_infobar_time_pane_g1

0x3b2b,	// (0x0007b5a4) image3_infobar_time_pane_t1

0x09a9,	// (0x00078422) image3_infobar_loc_pane_g1

0x3b39,	// (0x0007b5b2) image3_infobar_loc_pane_g2

0x0001,

0xfda0,	// (0x00087819) image3_infobar_loc_pane_g

0x3b41,	// (0x0007b5ba) image3_infobar_loc_pane_t1

0x09a9,	// (0x00078422) image3_infobar_fav_pane_g1

0x3b4f,	// (0x0007b5c8) image3_infobar_fav_pane_g2

0x0001,

0xfda5,	// (0x0008781e) image3_infobar_fav_pane_g

0x3b57,	// (0x0007b5d0) fs_bigclock_status_battery_pane

0x3b60,	// (0x0007b5d9) fs_bigclock_status_signal_pane

0x3b69,	// (0x0007b5e2) fs_bigclock_status_title_pane

0x3b72,	// (0x0007b5eb) fs_bigclock_status_signal_pane_g1

0x3b7b,	// (0x0007b5f4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdaa,	// (0x00087823) fs_bigclock_status_signal_pane_g

0x3b83,	// (0x0007b5fc) fs_bigclock_status_battery_pane_g1

0x3b8c,	// (0x0007b605) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdaf,	// (0x00087828) fs_bigclock_status_battery_pane_g

0x3b94,	// (0x0007b60d) fs_bigclock_status_title_pane_t1

0xe553,	// (0x00085fcc) main_fs_bigclock_clock_pane_g1

0xc941,	// (0x000843ba) main_fs_bigclock_clock_pane_g2

0xc94e,	// (0x000843c7) main_fs_bigclock_clock_pane_g3

0xc94e,	// (0x000843c7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdb4,	// (0x0008782d) main_fs_bigclock_clock_pane_g

0xc95a,	// (0x000843d3) main_fs_bigclock_clock_pane_t1

0xc96c,	// (0x000843e5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdbd,	// (0x00087836) main_fs_bigclock_clock_pane_t

0x3ba2,	// (0x0007b61b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3ba2,	// (0x0007b61b) list_single_fs_bigclock_indicator_pane

0x3bb3,	// (0x0007b62c) list_single_fs_bigclock_pane_ParamLimits

0x3bb3,	// (0x0007b62c) list_single_fs_bigclock_pane

0x3bd9,	// (0x0007b652) main_fs_bigclock_indicator_pane_t1

0x3be8,	// (0x0007b661) list_single_fs_bigclock_pane_g1

0x3bf0,	// (0x0007b669) list_single_fs_bigclock_pane_t1

0x09a9,	// (0x00078422) main_fs_bigclock_swipe_pane_g1

0x3c30,	// (0x0007b6a9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdce,	// (0x00087847) main_fs_bigclock_swipe_pane_g

0x3c38,	// (0x0007b6b1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3c38,	// (0x0007b6b1) main_fs_bigclock_swipe_pane_t1

0x740f,	// (0x0007ee88) call_type_pane_ParamLimits

0xde55,	// (0x000858ce) main_btmg_pane

0xc635,	// (0x000840ae) list_single_cale_mrui_row_pane_g2_ParamLimits

0xc635,	// (0x000840ae) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd41,	// (0x000877ba) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd41,	// (0x000877ba) list_single_cale_mrui_row_pane_g

0x3a45,	// (0x0007b4be) list_recal_vselct_arw_lo_pane

0x3a4d,	// (0x0007b4c6) list_recal_vselct_arw_up_pane

0x3a55,	// (0x0007b4ce) list_recal_vselct_pane

0x3c55,	// (0x0007b6ce) btmg_button_pane

0xc9c1,	// (0x0008443a) main_btmg_pane_g1

0xde55,	// (0x000858ce) bg_button_pane_cp044

0x3c5d,	// (0x0007b6d6) btmg_button_pane_t1

0x87ae,	// (0x00080227) aid_listscroll_gen

0x0861,	// (0x000782da) main_cntbar_detail_pane

0x3674,	// (0x0007b0ed) list_cmail_folder_pane

0x3693,	// (0x0007b10c) sp_fs_scroll_pane_cp03_ParamLimits

0xc9c9,	// (0x00084442) list_single_fs_dyc_pane_cp01_ParamLimits

0xc9c9,	// (0x00084442) list_single_fs_dyc_pane_cp01

0x3c6b,	// (0x0007b6e4) aid_size_cmail_indent

0x3c74,	// (0x0007b6ed) list_single_dyc_row_pane_cp01

0xc9fb,	// (0x00084474) cntbar_detail_list_pane_ParamLimits

0xc9fb,	// (0x00084474) cntbar_detail_list_pane

0xca31,	// (0x000844aa) main_cntbar_detail_cont_pane_ParamLimits

0xca31,	// (0x000844aa) main_cntbar_detail_cont_pane

0xca3d,	// (0x000844b6) scroll_pane_cp032_ParamLimits

0xca3d,	// (0x000844b6) scroll_pane_cp032

0x401a,	// (0x0007ba93) cntbar_detail_list_event_pane_ParamLimits

0x401a,	// (0x0007ba93) cntbar_detail_list_event_pane

0xca07,	// (0x00084480) cntbar_detail_list_shct_pane

0x3c7d,	// (0x0007b6f6) aid_list_gen

0xe6c4,	// (0x0008613d) aid_scroll

0x28f8,	// (0x0007a371) aid_size_touch_scroll_bar

0xb260,	// (0x00082cd9) aid_list_double

0xca49,	// (0x000844c2) aid_list_single

0x2912,	// (0x0007a38b) aid_list_single_lg

0xca52,	// (0x000844cb) aid_list_z_g_a_sm

0xca5a,	// (0x000844d3) aid_list_z_g_d

0xca62,	// (0x000844db) aid_txt_z_prm

0xca70,	// (0x000844e9) aid_txt_z_prm_cp01

0xca7e,	// (0x000844f7) aid_txt_z_sec

0xca8c,	// (0x00084505) main_cntbar_detail_cont_pane_g1_ParamLimits

0xca8c,	// (0x00084505) main_cntbar_detail_cont_pane_g1

0xca99,	// (0x00084512) main_cntbar_detail_cont_pane_g2_ParamLimits

0xca99,	// (0x00084512) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdd3,	// (0x0008784c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdd3,	// (0x0008784c) main_cntbar_detail_cont_pane_g

0x3c86,	// (0x0007b6ff) main_cntbar_detail_cont_pane_t1

0x3c94,	// (0x0007b70d) main_cntbar_detail_cont_pane_t2

0x3ca2,	// (0x0007b71b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdd8,	// (0x00087851) main_cntbar_detail_cont_pane_t

0xcaa5,	// (0x0008451e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcaa5,	// (0x0008451e) cell_cntbar_detail_list_shct_pane

0x3cb0,	// (0x0007b729) cntbar_detail_list_shct_pane_g1

0x3cb9,	// (0x0007b732) cntbar_detail_list_shct_pane_g2

0x0001,

0xfddf,	// (0x00087858) cntbar_detail_list_shct_pane_g

0xcab7,	// (0x00084530) cntbar_detail_list_event_pane_g1_ParamLimits

0xcab7,	// (0x00084530) cntbar_detail_list_event_pane_g1

0xcac3,	// (0x0008453c) cntbar_detail_list_event_pane_g2_ParamLimits

0xcac3,	// (0x0008453c) cntbar_detail_list_event_pane_g2

0x0005,

0xfde4,	// (0x0008785d) cntbar_detail_list_event_pane_g_ParamLimits

0xfde4,	// (0x0008785d) cntbar_detail_list_event_pane_g

0xcb2f,	// (0x000845a8) cntbar_detail_list_event_pane_t1_ParamLimits

0xcb2f,	// (0x000845a8) cntbar_detail_list_event_pane_t1

0xcb44,	// (0x000845bd) cntbar_detail_list_event_pane_t2_ParamLimits

0xcb44,	// (0x000845bd) cntbar_detail_list_event_pane_t2

0x0002,

0xfdf1,	// (0x0008786a) cntbar_detail_list_event_pane_t_ParamLimits

0xfdf1,	// (0x0008786a) cntbar_detail_list_event_pane_t

0x09a9,	// (0x00078422) cell_cntbar_detail_list_shct_pane_g1

0x13da,	// (0x00078e53) navi_pane_mv_g3

0x0861,	// (0x000782da) main_cntbar_detail_pane_ParamLimits

0xde55,	// (0x000858ce) main_notif_wgt_pane

0x9bb1,	// (0x0008162a) aid_tch_main_mp4_pane_g4

0x9df0,	// (0x00081869) popup_slider_window_cp02

0x3a3b,	// (0x0007b4b4) list_recal_day_event_pane

0xc9e1,	// (0x0008445a) cntbar_detail_btn_pane_ParamLimits

0xc9e1,	// (0x0008445a) cntbar_detail_btn_pane

0xc9ed,	// (0x00084466) cntbar_detail_btn_pane_cp01_ParamLimits

0xc9ed,	// (0x00084466) cntbar_detail_btn_pane_cp01

0xca07,	// (0x00084480) cntbar_detail_list_shct_pane_ParamLimits

0xca13,	// (0x0008448c) cntbar_detail_pane_g1_ParamLimits

0xca13,	// (0x0008448c) cntbar_detail_pane_g1

0xca1f,	// (0x00084498) cntbar_detail_pane_t1_ParamLimits

0xca1f,	// (0x00084498) cntbar_detail_pane_t1

0xcacf,	// (0x00084548) cntbar_detail_list_event_pane_g3_ParamLimits

0xcacf,	// (0x00084548) cntbar_detail_list_event_pane_g3

0xcae7,	// (0x00084560) cntbar_detail_list_event_pane_g4_ParamLimits

0xcae7,	// (0x00084560) cntbar_detail_list_event_pane_g4

0xcaff,	// (0x00084578) cntbar_detail_list_event_pane_g5_ParamLimits

0xcaff,	// (0x00084578) cntbar_detail_list_event_pane_g5

0xcb17,	// (0x00084590) cntbar_detail_list_event_pane_g6_ParamLimits

0xcb17,	// (0x00084590) cntbar_detail_list_event_pane_g6

0xcb59,	// (0x000845d2) cntbar_detail_list_event_pane_t3_ParamLimits

0xcb59,	// (0x000845d2) cntbar_detail_list_event_pane_t3

0xcb6b,	// (0x000845e4) popup_notif_wgt_window_ParamLimits

0xcb6b,	// (0x000845e4) popup_notif_wgt_window

0xcb79,	// (0x000845f2) popup_submenu_window_cp01_ParamLimits

0xcb79,	// (0x000845f2) popup_submenu_window_cp01

0x0931,	// (0x000783aa) bg_popup_window_pane_cp10

0x3cc2,	// (0x0007b73b) listscroll_notif_wgt_pane

0x3cd3,	// (0x0007b74c) list_notif_wgt_window

0x3cdc,	// (0x0007b755) scroll_pane_cp033

0xcb85,	// (0x000845fe) list_notif_wgt_row_pane_ParamLimits

0xcb85,	// (0x000845fe) list_notif_wgt_row_pane

0x3ce5,	// (0x0007b75e) aid_size_list_notif_wgt_del

0x3cf2,	// (0x0007b76b) list_notif_wgt_row_pane_g1

0x3cfe,	// (0x0007b777) list_notif_wgt_row_pane_g2

0x3d12,	// (0x0007b78b) list_notif_wgt_row_pane_g3

0x0002,

0xfdf8,	// (0x00087871) list_notif_wgt_row_pane_g

0x3d1f,	// (0x0007b798) list_notif_wgt_row_pane_t1

0x3d35,	// (0x0007b7ae) list_notif_wgt_row_pane_t2

0x3d47,	// (0x0007b7c0) list_notif_wgt_row_pane_t3

0x0002,

0xfdff,	// (0x00087878) list_notif_wgt_row_pane_t

0x25f2,	// (0x0007a06b) list_recal_day_event_pane_g1

0x3d59,	// (0x0007b7d2) list_recal_day_event_pane_t1

0xde55,	// (0x000858ce) bg_button_pane_cp045

0xcb97,	// (0x00084610) cntbar_detail_btn_pane_t1

0x87c2,	// (0x0008023b) main_callh_pane_ParamLimits

0x87c2,	// (0x0008023b) main_callh_pane

0xde55,	// (0x000858ce) main_coverflow0_pane

0xde55,	// (0x000858ce) main_wgtman_pane

0xbd85,	// (0x000837fe) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbd85,	// (0x000837fe) main_fs_bigclock_unlock_btn_pane

0x3646,	// (0x0007b0bf) bg_button_pane_cp16

0x3656,	// (0x0007b0cf) cell_tport_appsw_pane_g3

0xcba5,	// (0x0008461e) cf0_flow_pane_ParamLimits

0xcba5,	// (0x0008461e) cf0_flow_pane

0x3d68,	// (0x0007b7e1) listscroll_cf0_pane

0x3d71,	// (0x0007b7ea) main_cf0_pane_g1

0xcbb4,	// (0x0008462d) main_cf0_pane_t1_ParamLimits

0xcbb4,	// (0x0008462d) main_cf0_pane_t1

0xcbc6,	// (0x0008463f) main_cf0_pane_t2_ParamLimits

0xcbc6,	// (0x0008463f) main_cf0_pane_t2

0x0001,

0xfe0b,	// (0x00087884) main_cf0_pane_t_ParamLimits

0xfe0b,	// (0x00087884) main_cf0_pane_t

0x3d83,	// (0x0007b7fc) scroll_pane_cp11

0xcbd8,	// (0x00084651) cf0_flow_pane_g1

0xcbe0,	// (0x00084659) cf0_flow_pane_g2

0x0001,

0xfe10,	// (0x00087889) cf0_flow_pane_g

0xcbe8,	// (0x00084661) cf0_flow_pane_t1

0xde55,	// (0x000858ce) main_call6_pane

0xde55,	// (0x000858ce) main_calllock_pane

0xcbf6,	// (0x0008466f) call6_btn_grp_pane_ParamLimits

0xcbf6,	// (0x0008466f) call6_btn_grp_pane

0xcc03,	// (0x0008467c) call6_pane_g1_ParamLimits

0xcc03,	// (0x0008467c) call6_pane_g1

0xcc10,	// (0x00084689) popup_call6_1st_window_ParamLimits

0xcc10,	// (0x00084689) popup_call6_1st_window

0xcc1c,	// (0x00084695) popup_call6_2nd_window_ParamLimits

0xcc1c,	// (0x00084695) popup_call6_2nd_window

0xcc28,	// (0x000846a1) cell_call6_btn_pane_ParamLimits

0xcc28,	// (0x000846a1) cell_call6_btn_pane

0x0931,	// (0x000783aa) bg_popup_call2_in_pane_cp03

0x3d8c,	// (0x0007b805) popup_call6_1st_window_g1

0x3d94,	// (0x0007b80d) popup_call6_1st_window_g2

0x3d9c,	// (0x0007b815) popup_call6_1st_window_g3

0x0002,

0xfe15,	// (0x0008788e) popup_call6_1st_window_g

0x3da4,	// (0x0007b81d) popup_call6_1st_window_t1

0x3db3,	// (0x0007b82c) popup_call6_1st_window_t2

0x3dc1,	// (0x0007b83a) popup_call6_1st_window_t3

0x0002,

0xfe1c,	// (0x00087895) popup_call6_1st_window_t

0x0931,	// (0x000783aa) bg_popup_call2_in_pane_cp04

0x3dcf,	// (0x0007b848) popup_call6_2nd_window_g1

0x3dd7,	// (0x0007b850) popup_call6_2nd_window_g2

0x3ddf,	// (0x0007b858) popup_call6_2nd_window_g3

0x0002,

0xfe23,	// (0x0008789c) popup_call6_2nd_window_g

0x3de7,	// (0x0007b860) popup_call6_2nd_window_t1

0x5888,	// (0x0007d301) bg_button_pane_cp15

0xcc37,	// (0x000846b0) cell_call6_btn_pane_g1

0xcc40,	// (0x000846b9) cell_call6_btn_pane_t1

0xcc4f,	// (0x000846c8) listscroll_wgtman_pane_ParamLimits

0xcc4f,	// (0x000846c8) listscroll_wgtman_pane

0xcc6b,	// (0x000846e4) wgtman_btn_pane_ParamLimits

0xcc6b,	// (0x000846e4) wgtman_btn_pane

0x113a,	// (0x00078bb3) aid_scroll_copy1

0x3df6,	// (0x0007b86f) list_wgtman_pane

0xcc9e,	// (0x00084717) wgtman_btn_pane_g1_ParamLimits

0xcc9e,	// (0x00084717) wgtman_btn_pane_g1

0xccc6,	// (0x0008473f) wgtman_btn_pane_t1_ParamLimits

0xccc6,	// (0x0008473f) wgtman_btn_pane_t1

0x3e00,	// (0x0007b879) wgtman_btn_pane_t2_ParamLimits

0x3e00,	// (0x0007b879) wgtman_btn_pane_t2

0x0001,

0xfe2a,	// (0x000878a3) wgtman_btn_pane_t_ParamLimits

0xfe2a,	// (0x000878a3) wgtman_btn_pane_t

0x4077,	// (0x0007baf0) listrow_wgtman_pane_ParamLimits

0x4077,	// (0x0007baf0) listrow_wgtman_pane

0xccfd,	// (0x00084776) listrow_wgtman_pane_g1

0xcd0a,	// (0x00084783) listrow_wgtman_pane_g2

0x0001,

0xfe2f,	// (0x000878a8) listrow_wgtman_pane_g

0xcd22,	// (0x0008479b) listrow_wgtman_pane_t1

0xcd3a,	// (0x000847b3) listrow_wgtman_pane_t2

0x0001,

0xfe34,	// (0x000878ad) listrow_wgtman_pane_t

0xcd60,	// (0x000847d9) wait_bar_pane_cp09

0x3e17,	// (0x0007b890) main_calllock_btn_pane

0x3e1f,	// (0x0007b898) main_calllock_pane_g1

0xde55,	// (0x000858ce) bg_button_pane_cp17

0x3e28,	// (0x0007b8a1) main_calllock_btn_pane_g1

0x3e31,	// (0x0007b8aa) main_calllock_btn_pane_t1

0xde55,	// (0x000858ce) main_dialer3_pane

0xde55,	// (0x000858ce) main_fmrd2_pane

0x09a9,	// (0x00078422) main_fs_bigclock_unlock_btn_pane_g1

0x3e48,	// (0x0007b8c1) main_fs_bigclock_unlock_btn_pane_t1

0xcd72,	// (0x000847eb) area_fmrd2_info_pane_ParamLimits

0xcd72,	// (0x000847eb) area_fmrd2_info_pane

0xcd7e,	// (0x000847f7) area_fmrd2_visual_pane_ParamLimits

0xcd7e,	// (0x000847f7) area_fmrd2_visual_pane

0xcd8c,	// (0x00084805) fmrd2_indi_pane_ParamLimits

0xcd8c,	// (0x00084805) fmrd2_indi_pane

0xcd99,	// (0x00084812) area_fmrd2_visual_pane_g1

0xcda1,	// (0x0008481a) area_fmrd2_visual_pane_t1

0xcdaf,	// (0x00084828) area_fmrd2_visual_pane_t2

0xcdbd,	// (0x00084836) area_fmrd2_visual_pane_t3

0x0002,

0xfe3e,	// (0x000878b7) area_fmrd2_visual_pane_t

0xcdcb,	// (0x00084844) area_fmrd2_info_pane_g1

0xcdd3,	// (0x0008484c) area_fmrd2_info_pane_t1

0xcde1,	// (0x0008485a) area_fmrd2_info_pane_t2

0xcdef,	// (0x00084868) area_fmrd2_info_pane_t3

0xcdfd,	// (0x00084876) area_fmrd2_info_pane_t4

0x0003,

0xfe45,	// (0x000878be) area_fmrd2_info_pane_t

0xce0b,	// (0x00084884) fmrd2_indi_pane_t1

0xce19,	// (0x00084892) fmrd2_indi_pane_t2

0xce27,	// (0x000848a0) fmrd2_indi_pane_t3

0x0002,

0xfe4e,	// (0x000878c7) fmrd2_indi_pane_t

0x31ef,	// (0x0007ac68) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x31ef,	// (0x0007ac68) list_single_fs_bigclock_indicator_pane_g5

0x329d,	// (0x0007ad16) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x329d,	// (0x0007ad16) list_single_fs_bigclock_indicator_pane_t5

0xc51a,	// (0x00083f93) aid_cell_bcale_month_pane_ParamLimits

0xc51a,	// (0x00083f93) aid_cell_bcale_month_pane

0xc538,	// (0x00083fb1) bcale_month_pane_ParamLimits

0xc538,	// (0x00083fb1) bcale_month_pane

0xc54e,	// (0x00083fc7) bcale_preview_pane_ParamLimits

0xc54e,	// (0x00083fc7) bcale_preview_pane

0x3bf0,	// (0x0007b669) list_single_fs_bigclock_pane_t1_ParamLimits

0x3c0c,	// (0x0007b685) list_single_fs_bigclock_pane_t2_ParamLimits

0x3c0c,	// (0x0007b685) list_single_fs_bigclock_pane_t2

0x0001,

0xfdc9,	// (0x00087842) list_single_fs_bigclock_pane_t_ParamLimits

0xfdc9,	// (0x00087842) list_single_fs_bigclock_pane_t

0x3e40,	// (0x0007b8b9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe39,	// (0x000878b2) main_fs_bigclock_unlock_btn_pane_g

0xce35,	// (0x000848ae) aid_dia3_key_size_ParamLimits

0xce35,	// (0x000848ae) aid_dia3_key_size

0xce41,	// (0x000848ba) aid_dia3_listrow_size_ParamLimits

0xce41,	// (0x000848ba) aid_dia3_listrow_size

0xce4f,	// (0x000848c8) dia3_keypad_fun_pane_ParamLimits

0xce4f,	// (0x000848c8) dia3_keypad_fun_pane

0xce5b,	// (0x000848d4) dia3_keypad_num_pane_ParamLimits

0xce5b,	// (0x000848d4) dia3_keypad_num_pane

0xce67,	// (0x000848e0) dia3_listscroll_pane_ParamLimits

0xce67,	// (0x000848e0) dia3_listscroll_pane

0xce73,	// (0x000848ec) dia3_numentry_pane_ParamLimits

0xce73,	// (0x000848ec) dia3_numentry_pane

0x3e56,	// (0x0007b8cf) dia3_list_pane

0x3e5f,	// (0x0007b8d8) scroll_pane_cp12

0xde55,	// (0x000858ce) bg_dia3_numentry_pane

0xce7f,	// (0x000848f8) dia3_numentry_pane_t1

0xce8e,	// (0x00084907) cell_dia3_key_num_pane

0xce96,	// (0x0008490f) cell_dia3_key0_fun_pane_ParamLimits

0xce96,	// (0x0008490f) cell_dia3_key0_fun_pane

0xcea3,	// (0x0008491c) cell_dia3_key1_fun_pane_ParamLimits

0xcea3,	// (0x0008491c) cell_dia3_key1_fun_pane

0xceb0,	// (0x00084929) dia3_listrow_pane

0x2efe,	// (0x0007a977) bg_dia3_numentry_pane_g1

0xde55,	// (0x000858ce) bg_button_pane_cp21

0x3e68,	// (0x0007b8e1) cell_dia3_key_num_pane_t1

0x3e76,	// (0x0007b8ef) cell_dia3_key_num_pane_t2

0x3e85,	// (0x0007b8fe) cell_dia3_key_num_pane_t3

0x3e94,	// (0x0007b90d) cell_dia3_key_num_pane_t4

0x0003,

0xfe55,	// (0x000878ce) cell_dia3_key_num_pane_t

0xde55,	// (0x000858ce) bg_button_pane_cp19

0x3ea3,	// (0x0007b91c) cell_dia3_key0_fun_pane_g1

0xde55,	// (0x000858ce) bg_button_pane_cp20

0xcebd,	// (0x00084936) cell_dia3_key1_fun_pane_g1

0xcec5,	// (0x0008493e) area_left_week_number_pane

0xced6,	// (0x0008494f) area_top_day_name_pane

0xcee2,	// (0x0008495b) frame_month_view_pane

0x3eab,	// (0x0007b924) grid_month_view_pane

0xcef3,	// (0x0008496c) cell_top_day_name_pane_ParamLimits

0xcef3,	// (0x0008496c) cell_top_day_name_pane

0xcf09,	// (0x00084982) cell_area_left_week_number_pane_ParamLimits

0xcf09,	// (0x00084982) cell_area_left_week_number_pane

0xcf28,	// (0x000849a1) cell_month_view_pane_ParamLimits

0xcf28,	// (0x000849a1) cell_month_view_pane

0x3eb9,	// (0x0007b932) frm_month_g1

0xcf4e,	// (0x000849c7) frm_month_g2

0xcf5d,	// (0x000849d6) frm_month_g3

0xcf6c,	// (0x000849e5) frm_month_g4

0xcf7b,	// (0x000849f4) frm_month_g5

0xcf8a,	// (0x00084a03) frm_month_g6

0xcf99,	// (0x00084a12) frm_month_g7

0x3ec6,	// (0x0007b93f) frm_month_g8

0xcfa8,	// (0x00084a21) frm_month_g9

0xcfb5,	// (0x00084a2e) frm_month_g10

0xcfc2,	// (0x00084a3b) frm_month_g11

0xcfcf,	// (0x00084a48) frm_month_g12

0xcfdc,	// (0x00084a55) frm_month_g13

0xcfe9,	// (0x00084a62) frm_month_g14

0xcff6,	// (0x00084a6f) frm_month_g15

0xd003,	// (0x00084a7c) frm_month_g16

0x000f,

0xfe5e,	// (0x000878d7) frm_month_g

0x3ed3,	// (0x0007b94c) cell_top_day_name_pane_t1

0xd010,	// (0x00084a89) cell_area_left_week_number_pane_g1

0xd01f,	// (0x00084a98) cell_area_left_week_number_pane_t1

0xe545,	// (0x00085fbe) cell_month_view_pane_g1

0xd035,	// (0x00084aae) cell_month_view_pane_t1

0xde55,	// (0x000858ce) main_fps_pane

0x3481,	// (0x0007aefa) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3481,	// (0x0007aefa) cmail_ddmenu_btn02_pane_cp1

0x349d,	// (0x0007af16) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x349d,	// (0x0007af16) cmail_ddmenu_btn02_pane_cp2

0xc855,	// (0x000842ce) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc855,	// (0x000842ce) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd7c,	// (0x000877f5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd7c,	// (0x000877f5) cmail_ddmenu_btn02_pane_g

0xc873,	// (0x000842ec) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc873,	// (0x000842ec) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd81,	// (0x000877fa) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd81,	// (0x000877fa) cmail_ddmenu_btn02_pane_t

0xd04b,	// (0x00084ac4) fps_text_pane_ParamLimits

0xd04b,	// (0x00084ac4) fps_text_pane

0xd058,	// (0x00084ad1) main_fps_pane_g1_ParamLimits

0xd058,	// (0x00084ad1) main_fps_pane_g1

0xd064,	// (0x00084add) wait_bar_pane_cp010_ParamLimits

0xd064,	// (0x00084add) wait_bar_pane_cp010

0xd070,	// (0x00084ae9) fps_text_pane_t1_ParamLimits

0xd070,	// (0x00084ae9) fps_text_pane_t1

0xa1d4,	// (0x00081c4d) cam4_image_uncrop_pane_g1

0xa1dd,	// (0x00081c56) cam4_image_uncrop_pane_g2

0xa1e6,	// (0x00081c5f) cam4_image_uncrop_pane_g3

0xa1ef,	// (0x00081c68) cam4_image_uncrop_pane_g4

0x0003,

0xf87e,	// (0x000872f7) cam4_image_uncrop_pane_g

0xceb0,	// (0x00084929) dia3_listrow_pane_ParamLimits

0xde55,	// (0x000858ce) main_phob2_pane

0xc391,	// (0x00083e0a) cell_tport_appsw_pane_cp02_ParamLimits

0xc391,	// (0x00083e0a) cell_tport_appsw_pane_cp02

0xc39e,	// (0x00083e17) cell_tport_appsw_pane_cp03_ParamLimits

0xc39e,	// (0x00083e17) cell_tport_appsw_pane_cp03

0xde55,	// (0x000858ce) phob2_contact_card_pane

0xde55,	// (0x000858ce) phob2_listscroll_pane

0x3ee6,	// (0x0007b95f) phob2_list_pane

0x3eee,	// (0x0007b967) scroll_pane_cp034

0xd089,	// (0x00084b02) phob2_cc_data_pane_ParamLimits

0xd089,	// (0x00084b02) phob2_cc_data_pane

0xd0a1,	// (0x00084b1a) phob2_cc_listscroll_pane_ParamLimits

0xd0a1,	// (0x00084b1a) phob2_cc_listscroll_pane

0xd0b9,	// (0x00084b32) list_double_large_graphic_phob2_pane_ParamLimits

0xd0b9,	// (0x00084b32) list_double_large_graphic_phob2_pane

0xd0cb,	// (0x00084b44) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd0cb,	// (0x00084b44) list_double_large_graphic_phob2_pane_g1

0xd0d8,	// (0x00084b51) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd0d8,	// (0x00084b51) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe7f,	// (0x000878f8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe7f,	// (0x000878f8) list_double_large_graphic_phob2_pane_g

0xd0fc,	// (0x00084b75) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd0fc,	// (0x00084b75) list_double_large_graphic_phob2_pane_t1

0xd111,	// (0x00084b8a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd111,	// (0x00084b8a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe88,	// (0x00087901) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe88,	// (0x00087901) list_double_large_graphic_phob2_pane_t

0xde55,	// (0x000858ce) list_highlight_pane_cp024

0x3ef6,	// (0x0007b96f) phob2_cc_button_pane

0xd126,	// (0x00084b9f) phob2_cc_data_pane_g1_ParamLimits

0xd126,	// (0x00084b9f) phob2_cc_data_pane_g1

0xd135,	// (0x00084bae) phob2_cc_data_pane_g2_ParamLimits

0xd135,	// (0x00084bae) phob2_cc_data_pane_g2

0x0001,

0xfe8d,	// (0x00087906) phob2_cc_data_pane_g_ParamLimits

0xfe8d,	// (0x00087906) phob2_cc_data_pane_g

0xd144,	// (0x00084bbd) phob2_cc_data_pane_t1_ParamLimits

0xd144,	// (0x00084bbd) phob2_cc_data_pane_t1

0xd159,	// (0x00084bd2) phob2_cc_data_pane_t2_ParamLimits

0xd159,	// (0x00084bd2) phob2_cc_data_pane_t2

0xd16e,	// (0x00084be7) phob2_cc_data_pane_t3_ParamLimits

0xd16e,	// (0x00084be7) phob2_cc_data_pane_t3

0x0002,

0xfe92,	// (0x0008790b) phob2_cc_data_pane_t_ParamLimits

0xfe92,	// (0x0008790b) phob2_cc_data_pane_t

0x3efe,	// (0x0007b977) phob2_cc_list_pane_ParamLimits

0x3efe,	// (0x0007b977) phob2_cc_list_pane

0x2e1b,	// (0x0007a894) scroll_pane_cp035_ParamLimits

0x2e1b,	// (0x0007a894) scroll_pane_cp035

0x0861,	// (0x000782da) bg_button_pane_cp033

0x3f0a,	// (0x0007b983) phob2_cc_button_pane_g1

0x3f16,	// (0x0007b98f) phob2_cc_button_pane_t1

0x3f2b,	// (0x0007b9a4) phob2_cc_button_pane_t2

0x0001,

0xfe99,	// (0x00087912) phob2_cc_button_pane_t

0xd183,	// (0x00084bfc) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd183,	// (0x00084bfc) list_double_large_graphic_phob2_cc_pane

0xd1c9,	// (0x00084c42) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd1c9,	// (0x00084c42) list_double_large_graphic_phob2_cc_pane_g1

0xd1da,	// (0x00084c53) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd1da,	// (0x00084c53) list_double_large_graphic_phob2_cc_pane_g2

0xd1e9,	// (0x00084c62) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd1e9,	// (0x00084c62) list_double_large_graphic_phob2_cc_pane_g3

0xd1f8,	// (0x00084c71) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd1f8,	// (0x00084c71) list_double_large_graphic_phob2_cc_pane_g4

0xd209,	// (0x00084c82) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd209,	// (0x00084c82) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe9e,	// (0x00087917) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe9e,	// (0x00087917) list_double_large_graphic_phob2_cc_pane_g

0xd218,	// (0x00084c91) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd218,	// (0x00084c91) list_double_large_graphic_phob2_cc_pane_t1

0xd241,	// (0x00084cba) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd241,	// (0x00084cba) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea9,	// (0x00087922) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea9,	// (0x00087922) list_double_large_graphic_phob2_cc_pane_t

0x3f3d,	// (0x0007b9b6) list_highlight_pane_cp025_ParamLimits

0x3f3d,	// (0x0007b9b6) list_highlight_pane_cp025

0x0861,	// (0x000782da) bg_button_pane_cp033_ParamLimits

0x3f0a,	// (0x0007b983) phob2_cc_button_pane_g1_ParamLimits

0x3f16,	// (0x0007b98f) phob2_cc_button_pane_t1_ParamLimits

0x3f2b,	// (0x0007b9a4) phob2_cc_button_pane_t2_ParamLimits

0xfe99,	// (0x00087912) phob2_cc_button_pane_t_ParamLimits

0x5880,	// (0x0007d2f9) popup_wgtman_window

0x2f1e,	// (0x0007a997) scroll_pane_cp038

0xcc86,	// (0x000846ff) wgtman_btn_pane_cp_01_ParamLimits

0xcc86,	// (0x000846ff) wgtman_btn_pane_cp_01

0x3f4b,	// (0x0007b9c4) wgtman_content_pane

0x3f54,	// (0x0007b9cd) wgtman_heading_pane

0xde55,	// (0x000858ce) bg_heading_pane_cp02

0x3f5d,	// (0x0007b9d6) wgtman_heading_pane_g1

0x3f65,	// (0x0007b9de) wgtman_heading_pane_t1

0x3f73,	// (0x0007b9ec) scroll_pane_cp036

0x3f7b,	// (0x0007b9f4) wgtman_list_pane

0x3f83,	// (0x0007b9fc) wgtman_list_pane_t1_ParamLimits

0x3f83,	// (0x0007b9fc) wgtman_list_pane_t1

0xa139,	// (0x00081bb2) cam4_grid_pane

0xad78,	// (0x000827f1) bg_button_pane_cp015_ParamLimits

0xad89,	// (0x00082802) bg_button_pane_cp016_ParamLimits

0xad95,	// (0x0008280e) bg_button_pane_cp017_ParamLimits

0xade7,	// (0x00082860) popup_vitu2_query_window_g3_ParamLimits

0xade7,	// (0x00082860) popup_vitu2_query_window_g3

0xae84,	// (0x000828fd) popup_vitu2_query_window_t6_ParamLimits

0xae84,	// (0x000828fd) popup_vitu2_query_window_t6

0xaeaf,	// (0x00082928) popup_vitu2_query_window_t7_ParamLimits

0xaeaf,	// (0x00082928) popup_vitu2_query_window_t7

0x231f,	// (0x00079d98) cam4_grid_pane_g1

0x2328,	// (0x00079da1) cam4_grid_pane_g2

0x3f9a,	// (0x0007ba13) cam4_grid_pane_g3

0x3fa3,	// (0x0007ba1c) cam4_grid_pane_g4

0x0003,

0xfeae,	// (0x00087927) cam4_grid_pane_g

0x647c,	// (0x0007def5) aid_placing_vt_slider_lsc_ParamLimits

0x6726,	// (0x0007e19f) vidtel_button_pane_ParamLimits

0x6726,	// (0x0007e19f) vidtel_button_pane

0xde55,	// (0x000858ce) bg_button_pane_cp034

0xd26a,	// (0x00084ce3) vidtel_button_pane_g1

0xd272,	// (0x00084ceb) vidtel_button_pane_t1

0x25e2,	// (0x0007a05b) aid_size_vtel_slider_touch

0x2e1b,	// (0x0007a894) scroll_pane_cp039

0x2f4d,	// (0x0007a9c6) ncim_query_button_pane_cp01_ParamLimits

0x2f6c,	// (0x0007a9e5) ncimui_query_pane_g1_ParamLimits

0x0861,	// (0x000782da) input_focus_pane_cp012_ParamLimits

0x2f91,	// (0x0007aa0a) ncim_query_entry_pane_t1_ParamLimits

0x2e1b,	// (0x0007a894) scroll_pane_cp039_ParamLimits

0x12f5,	// (0x00078d6e) navi_pane_bcale_mc_g1

0x12fd,	// (0x00078d76) navi_pane_bcale_mc_t1

0x34d1,	// (0x0007af4a) main_sp_fs_email_pane_g1

0x34dd,	// (0x0007af56) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x000876f2) main_sp_fs_email_pane_g

0x3937,	// (0x0007b3b0) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3937,	// (0x0007b3b0) list_single_cale_mrui_row_pane_g3

0xc891,	// (0x0008430a) list_single_recal_day_pane_g5_event_pane

0x3aa0,	// (0x0007b519) list_single_recal_day_pane_g7

0x3fac,	// (0x0007ba25) list_recal_day_event_pane_cp01

0x3fb5,	// (0x0007ba2e) list_recal_vselct_arw_lo_pane_cp01

0x3fbd,	// (0x0007ba36) list_recal_vselct_arw_up_pane_cp01

0x3fc5,	// (0x0007ba3e) list_recal_vselct_pane_cp01

0x25f2,	// (0x0007a06b) list_recal_day_event_pane_cp01_g1

0x3fcf,	// (0x0007ba48) list_recal_day_event_pane_cp01_t1

0x3aa8,	// (0x0007b521) list_single_recal_day_pane_t1_ParamLimits

0xc8a8,	// (0x00084321) list_single_recal_day_pane_t2_ParamLimits

0xfd91,	// (0x0008780a) list_single_recal_day_pane_t_ParamLimits

0xe4cb,	// (0x00085f44) bg_notes_pane_ParamLimits

0xe5a3,	// (0x0008601c) list_notes_pane_ParamLimits

0x5a87,	// (0x0007d500) scroll_pane_cp06_ParamLimits

0xe5c9,	// (0x00086042) main_notes_pane_ParamLimits

0x0861,	// (0x000782da) main_welc_pane

0xd2a6,	// (0x00084d1f) main_welc_body_pane_ParamLimits

0xd2a6,	// (0x00084d1f) main_welc_body_pane

0xd2bf,	// (0x00084d38) main_welc_opti_pane_ParamLimits

0xd2bf,	// (0x00084d38) main_welc_opti_pane

0xd318,	// (0x00084d91) main_welc_pane_t1_ParamLimits

0xd318,	// (0x00084d91) main_welc_pane_t1

0xd47e,	// (0x00084ef7) main_welc_body_row_pane_ParamLimits

0xd47e,	// (0x00084ef7) main_welc_body_row_pane

0xe561,	// (0x00085fda) main_welc_opti_row_pane_ParamLimits

0xe561,	// (0x00085fda) main_welc_opti_row_pane

0x3fed,	// (0x0007ba66) main_welc_opti_row_pane_g1

0xd493,	// (0x00084f0c) main_welc_opti_row_pane_t1

0x3ff5,	// (0x0007ba6e) main_welc_body_row_pane_t1

0x3ccb,	// (0x0007b744) popup_notif_wgt_heading_pane

0x3ce5,	// (0x0007b75e) aid_size_list_notif_wgt_del_ParamLimits

0x3cf2,	// (0x0007b76b) list_notif_wgt_row_pane_g1_ParamLimits

0x3cfe,	// (0x0007b777) list_notif_wgt_row_pane_g2_ParamLimits

0x3d12,	// (0x0007b78b) list_notif_wgt_row_pane_g3_ParamLimits

0xfdf8,	// (0x00087871) list_notif_wgt_row_pane_g_ParamLimits

0x3d1f,	// (0x0007b798) list_notif_wgt_row_pane_t1_ParamLimits

0x3d35,	// (0x0007b7ae) list_notif_wgt_row_pane_t2_ParamLimits

0x3d47,	// (0x0007b7c0) list_notif_wgt_row_pane_t3_ParamLimits

0xfdff,	// (0x00087878) list_notif_wgt_row_pane_t_ParamLimits

0xccfd,	// (0x00084776) listrow_wgtman_pane_g1_ParamLimits

0xcd0a,	// (0x00084783) listrow_wgtman_pane_g2_ParamLimits

0xfe2f,	// (0x000878a8) listrow_wgtman_pane_g_ParamLimits

0xcd22,	// (0x0008479b) listrow_wgtman_pane_t1_ParamLimits

0xcd3a,	// (0x000847b3) listrow_wgtman_pane_t2_ParamLimits

0xfe34,	// (0x000878ad) listrow_wgtman_pane_t_ParamLimits

0xcd60,	// (0x000847d9) wait_bar_pane_cp09_ParamLimits

0xde55,	// (0x000858ce) bg_popup_heading_pane_cp02

0x4004,	// (0x0007ba7d) popup_notif_wgt_heading_pane_g1

0x400c,	// (0x0007ba85) popup_notif_wgt_heading_pane_t1

0x87f9,	// (0x00080272) main_vids_pane

0xde55,	// (0x000858ce) vids_listscroll_pane

0xd4a2,	// (0x00084f1b) scroll_pane_cp040

0xde55,	// (0x000858ce) vids_list_pane

0xd4ab,	// (0x00084f24) vids_list_double_pane_ParamLimits

0xd4ab,	// (0x00084f24) vids_list_double_pane

0xd4bc,	// (0x00084f35) vids_list_double_pane_g1

0xd4c5,	// (0x00084f3e) vids_list_double_pane_t1

0xd4d5,	// (0x00084f4e) vids_list_double_pane_t2

0x0001,

0xfecd,	// (0x00087946) vids_list_double_pane_t

0x87d0,	// (0x00080249) main_ncimui_pane_ParamLimits

0xb999,	// (0x00083412) main_ncimui_pane_g1_ParamLimits

0xb9a5,	// (0x0008341e) main_ncimui_pane_g2_ParamLimits

0xb9a5,	// (0x0008341e) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x000875f3) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x000875f3) main_ncimui_pane_g

0xd2d4,	// (0x00084d4d) main_welc_pane_g1_ParamLimits

0xd2d4,	// (0x00084d4d) main_welc_pane_g1

0xd2e0,	// (0x00084d59) main_welc_pane_g2_ParamLimits

0xd2e0,	// (0x00084d59) main_welc_pane_g2

0x0003,

0xfeb7,	// (0x00087930) main_welc_pane_g_ParamLimits

0xfeb7,	// (0x00087930) main_welc_pane_g

0xe4cb,	// (0x00085f44) listscroll_mce_pane_ParamLimits

0x7705,	// (0x0007f17e) wait_bar_pane_cp10

0x87b6,	// (0x0008022f) main_cale_day_pane_ParamLimits

0x87b6,	// (0x0008022f) main_cale_week_pane_ParamLimits

0xe4cb,	// (0x00085f44) main_messa_pane_ParamLimits

0x96bb,	// (0x00081134) main_clock2_btn_pane_ParamLimits

0x96bb,	// (0x00081134) main_clock2_btn_pane

0xec8d,	// (0x00086706) main_clock2_btn_pane_cp01_ParamLimits

0xec8d,	// (0x00086706) main_clock2_btn_pane_cp01

0x38f2,	// (0x0007b36b) list_cale_mrui_pane_ParamLimits

0x3d7b,	// (0x0007b7f4) main_cf0_pane_g2

0x0001,

0xfe06,	// (0x0008787f) main_cf0_pane_g

0xcec5,	// (0x0008493e) area_left_week_number_pane_ParamLimits

0xced6,	// (0x0008494f) area_top_day_name_pane_ParamLimits

0xcee2,	// (0x0008495b) frame_month_view_pane_ParamLimits

0x3eab,	// (0x0007b924) grid_month_view_pane_ParamLimits

0x3eb9,	// (0x0007b932) frm_month_g1_ParamLimits

0xcf4e,	// (0x000849c7) frm_month_g2_ParamLimits

0xcf5d,	// (0x000849d6) frm_month_g3_ParamLimits

0xcf6c,	// (0x000849e5) frm_month_g4_ParamLimits

0xcf7b,	// (0x000849f4) frm_month_g5_ParamLimits

0xcf8a,	// (0x00084a03) frm_month_g6_ParamLimits

0xcf99,	// (0x00084a12) frm_month_g7_ParamLimits

0x3ec6,	// (0x0007b93f) frm_month_g8_ParamLimits

0xcfa8,	// (0x00084a21) frm_month_g9_ParamLimits

0xcfb5,	// (0x00084a2e) frm_month_g10_ParamLimits

0xcfc2,	// (0x00084a3b) frm_month_g11_ParamLimits

0xcfcf,	// (0x00084a48) frm_month_g12_ParamLimits

0xcfdc,	// (0x00084a55) frm_month_g13_ParamLimits

0xcfe9,	// (0x00084a62) frm_month_g14_ParamLimits

0xcff6,	// (0x00084a6f) frm_month_g15_ParamLimits

0xd003,	// (0x00084a7c) frm_month_g16_ParamLimits

0xfe5e,	// (0x000878d7) frm_month_g_ParamLimits

0x3ed3,	// (0x0007b94c) cell_top_day_name_pane_t1_ParamLimits

0xd010,	// (0x00084a89) cell_area_left_week_number_pane_g1_ParamLimits

0xd01f,	// (0x00084a98) cell_area_left_week_number_pane_t1_ParamLimits

0xe545,	// (0x00085fbe) cell_month_view_pane_g1_ParamLimits

0xd035,	// (0x00084aae) cell_month_view_pane_t1_ParamLimits

0xe4c3,	// (0x00085f3c) main_clock2_btn_pane_g1

0x402a,	// (0x0007baa3) main_clock2_btn_pane_t1

0x0861,	// (0x000782da) listscroll_cmail_pane_ParamLimits

0x34d1,	// (0x0007af4a) main_sp_fs_email_pane_g1_ParamLimits

0x34dd,	// (0x0007af56) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x000876f2) main_sp_fs_email_pane_g_ParamLimits

0x3a1c,	// (0x0007b495) list_recal_day_pane_ParamLimits

0x3a2d,	// (0x0007b4a6) mian_recal_day_pane_t1

0xc28c,	// (0x00083d05) list_single_dyc_row_text_pane_t4_ParamLimits

0xc28c,	// (0x00083d05) list_single_dyc_row_text_pane_t4

0xc2c3,	// (0x00083d3c) list_single_dyc_row_text_pane_t5_ParamLimits

0xc2c3,	// (0x00083d3c) list_single_dyc_row_text_pane_t5

0x3576,	// (0x0007afef) list_single_dyc_row_text_pane_t6_ParamLimits

0x3576,	// (0x0007afef) list_single_dyc_row_text_pane_t6

0x7347,	// (0x0007edc0) aid_mgn_list_cale_time_pane

0x87d0,	// (0x00080249) main_gallery2_pane_ParamLimits

0xeca1,	// (0x0008671a) main_clock2_pane_cp01_t1

0xecaf,	// (0x00086728) main_clock2_pane_cp01_t3

0x0001,

0xf750,	// (0x000871c9) main_clock2_pane_cp01_t

0x5e50,	// (0x0007d8c9) cale_week_scroll_pane_g16_ParamLimits

0x5e50,	// (0x0007d8c9) cale_week_scroll_pane_g16

0x0931,	// (0x000783aa) vorec_slider_pane

0xd272,	// (0x00084ceb) vidtel_button_pane_t1_ParamLimits

0xe553,	// (0x00085fcc) main_fs_bigclock_clock_pane_g1_ParamLimits

0xc941,	// (0x000843ba) main_fs_bigclock_clock_pane_g2_ParamLimits

0xc94e,	// (0x000843c7) main_fs_bigclock_clock_pane_g3_ParamLimits

0xc94e,	// (0x000843c7) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdb4,	// (0x0008782d) main_fs_bigclock_clock_pane_g_ParamLimits

0xc95a,	// (0x000843d3) main_fs_bigclock_clock_pane_t1_ParamLimits

0xc96c,	// (0x000843e5) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdbd,	// (0x00087836) main_fs_bigclock_clock_pane_t_ParamLimits

0x909f,	// (0x00080b18) main_mup3_lyrics_pane_ParamLimits

0x909f,	// (0x00080b18) main_mup3_lyrics_pane

0xd507,	// (0x00084f80) main_mup3_lyrics_pane_t1_ParamLimits

0xd507,	// (0x00084f80) main_mup3_lyrics_pane_t1

0x9b9d,	// (0x00081616) aid_main_mp4_pane_t1_area

0x9ba7,	// (0x00081620) aid_main_mp4_pane_t2_area

0x9c94,	// (0x0008170d) main_mp4_pane_g7_ParamLimits

0x9c94,	// (0x0008170d) main_mp4_pane_g7

0x9ca0,	// (0x00081719) main_mp4_pane_g8_ParamLimits

0x9ca0,	// (0x00081719) main_mp4_pane_g8

0xa063,	// (0x00081adc) aid_call6_pane_g1_size

0xd1ad,	// (0x00084c26) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd1ad,	// (0x00084c26) list_double_large_graphic_phob2_other_pane

0x1248,	// (0x00078cc1) list_double_large_graphic_phob2_other_pane_g1

0xde55,	// (0x000858ce) list_highlight_pane_cp026

0x0861,	// (0x000782da) main_welc_pane_ParamLimits

0xc0b8,	// (0x00083b31) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc0b8,	// (0x00083b31) main_sp_fs_ctrlbar_pane_g3

0xc0d0,	// (0x00083b49) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc0d0,	// (0x00083b49) main_sp_fs_ctrlbar_pane_g4

0xc110,	// (0x00083b89) toolbar2_fixed_button_pane_cp01

0xc11a,	// (0x00083b93) toolbar2_fixed_button_pane_cp02

0xc125,	// (0x00083b9e) toolbar2_fixed_button_pane_cp03

0xd29a,	// (0x00084d13) list_welc_entry_pane_ParamLimits

0xd29a,	// (0x00084d13) list_welc_entry_pane

0xd2ec,	// (0x00084d65) main_welc_pane_g3_ParamLimits

0xd2ec,	// (0x00084d65) main_welc_pane_g3

0xd330,	// (0x00084da9) main_welc_pane_t2_ParamLimits

0xd330,	// (0x00084da9) main_welc_pane_t2

0xd342,	// (0x00084dbb) main_welc_pane_t3_ParamLimits

0xd342,	// (0x00084dbb) main_welc_pane_t3

0x0005,

0xfec0,	// (0x00087939) main_welc_pane_t_ParamLimits

0xfec0,	// (0x00087939) main_welc_pane_t

0xd428,	// (0x00084ea1) welc_button_pane_ParamLimits

0xd428,	// (0x00084ea1) welc_button_pane

0xd472,	// (0x00084eeb) welc_service_logo_pane_ParamLimits

0xd472,	// (0x00084eeb) welc_service_logo_pane

0xd525,	// (0x00084f9e) list_single_welc_entry_pane_ParamLimits

0xd525,	// (0x00084f9e) list_single_welc_entry_pane

0xd536,	// (0x00084faf) list_single_welc_entry_pane_g1

0xd53e,	// (0x00084fb7) list_single_welc_entry_pane_t1

0xd54c,	// (0x00084fc5) list_single_welc_entry_pane_t2

0x0001,

0xfed2,	// (0x0008794b) list_single_welc_entry_pane_t

0xde55,	// (0x000858ce) bg_button_pane_cp035

0xd55a,	// (0x00084fd3) welc_button_pane_t1

0x4038,	// (0x0007bab1) welc_service_logo_pane_g1

0x4041,	// (0x0007baba) welc_service_logo_pane_g2

0x0001,

0xfed7,	// (0x00087950) welc_service_logo_pane_g

0x5888,	// (0x0007d301) main_int_radio_pane

0xe649,	// (0x000860c2) list_single_fs_dyc_pane_g1

0xd0e4,	// (0x00084b5d) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xd0e4,	// (0x00084b5d) list_double_large_graphic_phob2_pane_g3

0xd0f0,	// (0x00084b69) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd0f0,	// (0x00084b69) list_double_large_graphic_phob2_pane_g4

0xd568,	// (0x00084fe1) main_int_radio1_pane_ParamLimits

0xd568,	// (0x00084fe1) main_int_radio1_pane

0x404a,	// (0x0007bac3) find_pane_cp02

0xd57e,	// (0x00084ff7) input_focus_pane_cp12_ParamLimits

0xd57e,	// (0x00084ff7) input_focus_pane_cp12

0xd58a,	// (0x00085003) input_focus_pane_cp13_ParamLimits

0xd58a,	// (0x00085003) input_focus_pane_cp13

0xd5a2,	// (0x0008501b) input_focus_pane_cp14_ParamLimits

0xd5a2,	// (0x0008501b) input_focus_pane_cp14

0x4053,	// (0x0007bacc) int_radio1_listscroll_pane

0xd5ba,	// (0x00085033) main_int_radio1_pane_g1_ParamLimits

0xd5ba,	// (0x00085033) main_int_radio1_pane_g1

0xd5c6,	// (0x0008503f) main_int_radio1_pane_t1_ParamLimits

0xd5c6,	// (0x0008503f) main_int_radio1_pane_t1

0xd5d8,	// (0x00085051) main_int_radio1_pane_t2_ParamLimits

0xd5d8,	// (0x00085051) main_int_radio1_pane_t2

0xd5ea,	// (0x00085063) main_int_radio1_pane_t3_ParamLimits

0xd5ea,	// (0x00085063) main_int_radio1_pane_t3

0xd5fc,	// (0x00085075) main_int_radio1_pane_t4_ParamLimits

0xd5fc,	// (0x00085075) main_int_radio1_pane_t4

0x405d,	// (0x0007bad6) main_int_radio1_pane_t5_ParamLimits

0x405d,	// (0x0007bad6) main_int_radio1_pane_t5

0xd613,	// (0x0008508c) main_int_radio1_pane_t6_ParamLimits

0xd613,	// (0x0008508c) main_int_radio1_pane_t6

0xd625,	// (0x0008509e) main_int_radio1_pane_t7_ParamLimits

0xd625,	// (0x0008509e) main_int_radio1_pane_t7

0xd637,	// (0x000850b0) main_int_radio1_pane_t8_ParamLimits

0xd637,	// (0x000850b0) main_int_radio1_pane_t8

0xd649,	// (0x000850c2) main_int_radio1_pane_t9_ParamLimits

0xd649,	// (0x000850c2) main_int_radio1_pane_t9

0xd65b,	// (0x000850d4) main_int_radio1_pane_t10_ParamLimits

0xd65b,	// (0x000850d4) main_int_radio1_pane_t10

0xd68a,	// (0x00085103) main_int_radio1_pane_t11_ParamLimits

0xd68a,	// (0x00085103) main_int_radio1_pane_t11

0xd6b9,	// (0x00085132) main_int_radio1_pane_t12_ParamLimits

0xd6b9,	// (0x00085132) main_int_radio1_pane_t12

0x000b,

0xfedc,	// (0x00087955) main_int_radio1_pane_t_ParamLimits

0xfedc,	// (0x00087955) main_int_radio1_pane_t

0x406f,	// (0x0007bae8) int_radio_list_pane

0x3eee,	// (0x0007b967) scroll_pane_cp037

0x4077,	// (0x0007baf0) list_double_large_graphic_int_radio_pane_ParamLimits

0x4077,	// (0x0007baf0) list_double_large_graphic_int_radio_pane

0x4088,	// (0x0007bb01) list_double_large_graphic_int_radio_pane_g1

0x4091,	// (0x0007bb0a) list_double_large_graphic_int_radio_pane_t1

0x409f,	// (0x0007bb18) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfef5,	// (0x0008796e) list_double_large_graphic_int_radio_pane_t

0xde55,	// (0x000858ce) list_highlight_pane_cp027

0x3fdd,	// (0x0007ba56) main_button_pane_4

0xd2f8,	// (0x00084d71) main_welc_pane_g4_ParamLimits

0xd2f8,	// (0x00084d71) main_welc_pane_g4

0xd354,	// (0x00084dcd) main_welc_pane_t4_ParamLimits

0xd354,	// (0x00084dcd) main_welc_pane_t4

0xd366,	// (0x00084ddf) main_welc_pane_t5_ParamLimits

0xd366,	// (0x00084ddf) main_welc_pane_t5

0xd396,	// (0x00084e0f) main_welc_pane_t6_ParamLimits

0xd396,	// (0x00084e0f) main_welc_pane_t6

0xd434,	// (0x00084ead) welc_button_pane_2_ParamLimits

0xd434,	// (0x00084ead) welc_button_pane_2

0xd446,	// (0x00084ebf) welc_button_pane_3_ParamLimits

0xd446,	// (0x00084ebf) welc_button_pane_3

0x3fe5,	// (0x0007ba5e) welc_button_pane_4

0xd45a,	// (0x00084ed3) welc_button_pane_5_ParamLimits

0xd45a,	// (0x00084ed3) welc_button_pane_5

0x56cc,	// (0x0007d145) main_popup_welc_pane

0x40bc,	// (0x0007bb35) main_welc_sk_g3

0x40c6,	// (0x0007bb3f) main_welc_sk_g4

0x40d0,	// (0x0007bb49) main_welc_sk_t3

0x40de,	// (0x0007bb57) main_welc_sk_t4

0x40ec,	// (0x0007bb65) popup_welc_pane_t4

0x40fa,	// (0x0007bb73) popup_welc_pane_t5

0x4108,	// (0x0007bb81) popup_welc_pane_t6

0x5888,	// (0x0007d301) main_acti_pane

0xde55,	// (0x000858ce) main_sso_pane

0xd6d0,	// (0x00085149) sso_body_pane_ParamLimits

0xd6d0,	// (0x00085149) sso_body_pane

0xd6de,	// (0x00085157) sso_logo_pane_ParamLimits

0xd6de,	// (0x00085157) sso_logo_pane

0xd701,	// (0x0008517a) sso_sk_pane_ParamLimits

0xd701,	// (0x0008517a) sso_sk_pane

0x09a9,	// (0x00078422) main_sso_logo_pane_g1

0xd70e,	// (0x00085187) sso_sk_pane_t1_ParamLimits

0xd70e,	// (0x00085187) sso_sk_pane_t1

0xd721,	// (0x0008519a) sso_sk_pane_t2_ParamLimits

0xd721,	// (0x0008519a) sso_sk_pane_t2

0x0001,

0xfefa,	// (0x00087973) sso_sk_pane_t_ParamLimits

0xfefa,	// (0x00087973) sso_sk_pane_t

0x4140,	// (0x0007bbb9) aid_sso_gap

0x4149,	// (0x0007bbc2) aid_sso_txt1

0x4151,	// (0x0007bbca) aid_sso_txt2

0x4159,	// (0x0007bbd2) aid_sso_txt3

0x0002,

0xfeff,	// (0x00087978) aid_sso_txt

0x4161,	// (0x0007bbda) aid_sso_widget

0xd776,	// (0x000851ef) sso_btn_pane_ParamLimits

0xd776,	// (0x000851ef) sso_btn_pane

0xd7df,	// (0x00085258) sso_option_pane_ParamLimits

0xd7df,	// (0x00085258) sso_option_pane

0xd839,	// (0x000852b2) sso_query_pane_ParamLimits

0xd839,	// (0x000852b2) sso_query_pane

0xd875,	// (0x000852ee) sso_query_pane_cp01_ParamLimits

0xd875,	// (0x000852ee) sso_query_pane_cp01

0xd8b3,	// (0x0008532c) sso_t_hdr_pane_ParamLimits

0xd8b3,	// (0x0008532c) sso_t_hdr_pane

0xd8d1,	// (0x0008534a) sso_t_nml_pane_ParamLimits

0xd8d1,	// (0x0008534a) sso_t_nml_pane

0x4159,	// (0x0007bbd2) sso_t_sub_pane

0xd6eb,	// (0x00085164) sso_popup_window_ParamLimits

0xd6eb,	// (0x00085164) sso_popup_window

0xd733,	// (0x000851ac) sso_apps_pane_ParamLimits

0xd733,	// (0x000851ac) sso_apps_pane

0xd752,	// (0x000851cb) sso_body_pane_g1

0xd75a,	// (0x000851d3) sso_body_pane_t1

0xd768,	// (0x000851e1) sso_body_pane_t2

0x0001,

0xff06,	// (0x0008797f) sso_body_pane_t

0xd7b3,	// (0x0008522c) sso_btn_pane_cp01_ParamLimits

0xd7b3,	// (0x0008522c) sso_btn_pane_cp01

0xd813,	// (0x0008528c) sso_prog_pane_ParamLimits

0xd813,	// (0x0008528c) sso_prog_pane

0xd915,	// (0x0008538e) sso_t_hdr_pane_t1_ParamLimits

0xd915,	// (0x0008538e) sso_t_hdr_pane_t1

0xd92e,	// (0x000853a7) input_focus_pane_cp10_ParamLimits

0xd92e,	// (0x000853a7) input_focus_pane_cp10

0xd946,	// (0x000853bf) sso_query_pane_t1_ParamLimits

0xd946,	// (0x000853bf) sso_query_pane_t1

0xd959,	// (0x000853d2) sso_query_pane_t2_ParamLimits

0xd959,	// (0x000853d2) sso_query_pane_t2

0xd974,	// (0x000853ed) sso_query_pane_t3_ParamLimits

0xd974,	// (0x000853ed) sso_query_pane_t3

0xd99e,	// (0x00085417) sso_query_pane_t4_ParamLimits

0xd99e,	// (0x00085417) sso_query_pane_t4

0x0003,

0xff0b,	// (0x00087984) sso_query_pane_t_ParamLimits

0xff0b,	// (0x00087984) sso_query_pane_t

0xde55,	// (0x000858ce) bg_button_pane_cp22

0x40ad,	// (0x0007bb26) sso_btn_pane_t1

0xd9c2,	// (0x0008543b) sso_t_nml_pane_t1_ParamLimits

0xd9c2,	// (0x0008543b) sso_t_nml_pane_t1

0xd9df,	// (0x00085458) sso_option_row_pane_ParamLimits

0xd9df,	// (0x00085458) sso_option_row_pane

0xd9f2,	// (0x0008546b) sso_t_sub_pane_t1_ParamLimits

0xd9f2,	// (0x0008546b) sso_t_sub_pane_t1

0x0861,	// (0x000782da) bg_popup_window_pane_cp11_ParamLimits

0x0861,	// (0x000782da) bg_popup_window_pane_cp11

0xda05,	// (0x0008547e) popup_sk_window_cp01_ParamLimits

0xda05,	// (0x0008547e) popup_sk_window_cp01

0xda12,	// (0x0008548b) sso_popup_body_pane_ParamLimits

0xda12,	// (0x0008548b) sso_popup_body_pane

0xda1f,	// (0x00085498) scroll_pane_cp21_ParamLimits

0xda1f,	// (0x00085498) scroll_pane_cp21

0xda2c,	// (0x000854a5) sso_popup_body_t_pane_ParamLimits

0xda2c,	// (0x000854a5) sso_popup_body_t_pane

0xda39,	// (0x000854b2) sso_popup_body_t_hdr_pane_ParamLimits

0xda39,	// (0x000854b2) sso_popup_body_t_hdr_pane

0xda45,	// (0x000854be) sso_popup_body_t_nml_pane_ParamLimits

0xda45,	// (0x000854be) sso_popup_body_t_nml_pane

0xda5e,	// (0x000854d7) sso_popup_body_t_sub_pane_ParamLimits

0xda5e,	// (0x000854d7) sso_popup_body_t_sub_pane

0xda7d,	// (0x000854f6) sso_popup_body_t_hdr_pane_t1

0xda8d,	// (0x00085506) sso_popup_body_t_nml_pane_t1_ParamLimits

0xda8d,	// (0x00085506) sso_popup_body_t_nml_pane_t1

0xdac7,	// (0x00085540) sso_popup_body_t_sub_pane_t1_ParamLimits

0xdac7,	// (0x00085540) sso_popup_body_t_sub_pane_t1

0x09a9,	// (0x00078422) sso_prog_pane_g1

0xdaec,	// (0x00085565) sso_apps_pane_comp1_ParamLimits

0xdaec,	// (0x00085565) sso_apps_pane_comp1

0xdafe,	// (0x00085577) sso_apps_pane_comp1_g1

0xdb06,	// (0x0008557f) sso_apps_pane_comp1_t1

0xdb22,	// (0x0008559b) sso_option_row_pane_g1

0xdb2a,	// (0x000855a3) sso_option_row_pane_t1

0xd288,	// (0x00084d01) bg_welc_area_ParamLimits

0xd288,	// (0x00084d01) bg_welc_area

0xd3cc,	// (0x00084e45) sso_t_hdr_pane_a_t1_ParamLimits

0xd3cc,	// (0x00084e45) sso_t_hdr_pane_a_t1

0xd3de,	// (0x00084e57) sso_t_nml_pane_a_t1_ParamLimits

0xd3de,	// (0x00084e57) sso_t_nml_pane_a_t1

0xd400,	// (0x00084e79) sso_t_sub_pane_a_t1_ParamLimits

0xd400,	// (0x00084e79) sso_t_sub_pane_a_t1

0x40ad,	// (0x0007bb26) sso_btn_pane_t1_copy1

0xde55,	// (0x000858ce) welc_button_pane_2_comp1

0x4116,	// (0x0007bb8f) sso_t_hdr_pane_p_t1

0x4124,	// (0x0007bb9d) sso_t_nml_pane_p_t1

0x4132,	// (0x0007bbab) sso_t_sub_pane_p_t1

0x367c,	// (0x0007b0f5) list_cmail_pane_ParamLimits

0xd466,	// (0x00084edf) welc_button_pane_cp01_ParamLimits

0xd466,	// (0x00084edf) welc_button_pane_cp01

0xde55,	// (0x000858ce) main_att_pane

0xdb14,	// (0x0008558d) input_focus_pane_cp10_t1

0xdb2a,	// (0x000855a3) sso_option_row_pane_t1_ParamLimits

0xdb3f,	// (0x000855b8) main_att_body_pane_ParamLimits

0xdb3f,	// (0x000855b8) main_att_body_pane

0xdb53,	// (0x000855cc) att_btn_pane_ParamLimits

0xdb53,	// (0x000855cc) att_btn_pane

0xdb6d,	// (0x000855e6) att_btn_pane_cp01_ParamLimits

0xdb6d,	// (0x000855e6) att_btn_pane_cp01

0xdb85,	// (0x000855fe) att_li_srv_pane_ParamLimits

0xdb85,	// (0x000855fe) att_li_srv_pane

0xdb93,	// (0x0008560c) att_opt_pane_ParamLimits

0xdb93,	// (0x0008560c) att_opt_pane

0xdbd5,	// (0x0008564e) att_query_pane_ParamLimits

0xdbd5,	// (0x0008564e) att_query_pane

0xdc05,	// (0x0008567e) att_query_pane_cp01_ParamLimits

0xdc05,	// (0x0008567e) att_query_pane_cp01

0xdc3b,	// (0x000856b4) att_t_hdr_pane_ParamLimits

0xdc3b,	// (0x000856b4) att_t_hdr_pane

0xdc7b,	// (0x000856f4) att_t_nml_pane_ParamLimits

0xdc7b,	// (0x000856f4) att_t_nml_pane

0xdca9,	// (0x00085722) att_t_nml_pane_cp01_ParamLimits

0xdca9,	// (0x00085722) att_t_nml_pane_cp01

0xdccb,	// (0x00085744) att_t_nmlb_pane_ParamLimits

0xdccb,	// (0x00085744) att_t_nmlb_pane

0xdce1,	// (0x0008575a) att_term_pane_ParamLimits

0xdce1,	// (0x0008575a) att_term_pane

0xdd21,	// (0x0008579a) main_att_body_pane_g1_ParamLimits

0xdd21,	// (0x0008579a) main_att_body_pane_g1

0xd915,	// (0x0008538e) att_t_hdr_pane_t1_ParamLimits

0xd915,	// (0x0008538e) att_t_hdr_pane_t1

0xdd61,	// (0x000857da) att_t_nml_pane_t1_ParamLimits

0xdd61,	// (0x000857da) att_t_nml_pane_t1

0xdd86,	// (0x000857ff) att_btn_pane_t1

0xde55,	// (0x000858ce) bg_button_pane_cp23

0xdd94,	// (0x0008580d) att_li_srv_row_pane_ParamLimits

0xdd94,	// (0x0008580d) att_li_srv_row_pane

0xdda4,	// (0x0008581d) att_t_nmlb_pane_t1_ParamLimits

0xdda4,	// (0x0008581d) att_t_nmlb_pane_t1

0xddbd,	// (0x00085836) att_query_pane_t1

0xddcc,	// (0x00085845) att_query_pane_t2

0xdddb,	// (0x00085854) att_query_pane_t3

0x0002,

0xff14,	// (0x0008798d) att_query_pane_t

0xddea,	// (0x00085863) input_focus_pane_cp11

0xddf3,	// (0x0008586c) att_term_pane_t1_ParamLimits

0xddf3,	// (0x0008586c) att_term_pane_t1

0xde55,	// (0x000858ce) att_opt_row_pane

0xde10,	// (0x00085889) att_opt_row_pane_g1

0xde18,	// (0x00085891) att_opt_row_pane_t1_ParamLimits

0xde18,	// (0x00085891) att_opt_row_pane_t1

0xde31,	// (0x000858aa) att_li_srv_row_pane_g1

0xde39,	// (0x000858b2) att_li_srv_row_pane_t1

0xde47,	// (0x000858c0) att_li_srv_row_pane_t2

0x0001,

0xff1b,	// (0x00087994) att_li_srv_row_pane_t
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large

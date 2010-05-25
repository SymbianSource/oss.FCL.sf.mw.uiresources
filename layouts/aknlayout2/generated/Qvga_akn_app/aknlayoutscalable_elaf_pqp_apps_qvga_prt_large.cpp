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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0006263d };

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
0x7c57,	// (0x0006a294) Screen

0x7c61,	// (0x0006a29e) application_window

0x7cb3,	// (0x0006a2f0) area_bottom_pane_ParamLimits

0x7cb3,	// (0x0006a2f0) area_bottom_pane

0x7d04,	// (0x0006a341) area_top_pane_ParamLimits

0x7d04,	// (0x0006a341) area_top_pane

0x7d5a,	// (0x0006a397) call_video_uplink_pane_ParamLimits

0x7d5a,	// (0x0006a397) call_video_uplink_pane

0x7d93,	// (0x0006a3d0) main_pane_ParamLimits

0x7d93,	// (0x0006a3d0) main_pane

0x5010,	// (0x0006764d) context_pane

0xa945,	// (0x0006cf82) navi_pane

0xa965,	// (0x0006cfa2) popup_cale_events_window_ParamLimits

0xa965,	// (0x0006cfa2) popup_cale_events_window

0x5023,	// (0x00067660) popup_mup_playback_window

0xa97c,	// (0x0006cfb9) signal_pane

0x0ba3,	// (0x000631e0) main_browser_pane

0x0dca,	// (0x00063407) main_burst_pane

0xa803,	// (0x0006ce40) main_calc_pane

0x4ff6,	// (0x00067633) main_cale_day_pane

0x83d3,	// (0x0006aa10) main_cale_month_pane

0x4ff6,	// (0x00067633) main_cale_week_pane

0x0dca,	// (0x00063407) main_call_pane

0x0855,	// (0x00062e92) main_call_poc_pane

0x0dca,	// (0x00063407) main_camera_pane

0x0dca,	// (0x00063407) main_chi_dic_pane

0x1645,	// (0x00063c82) main_clock_pane

0x0855,	// (0x00062e92) main_fmradio_pane

0x0dca,	// (0x00063407) main_graph_messa_pane

0x0855,	// (0x00062e92) main_help_pane

0x0ba3,	// (0x000631e0) main_im_pane

0x0ab0,	// (0x000630ed) main_image_pane_ParamLimits

0x0ab0,	// (0x000630ed) main_image_pane

0x0855,	// (0x00062e92) main_location2_pane

0x0dca,	// (0x00063407) main_location_pane

0x0ab0,	// (0x000630ed) main_messa_pane

0x0855,	// (0x00062e92) main_mp2_pane

0x0dca,	// (0x00063407) main_mp_pane

0x0855,	// (0x00062e92) main_msg_pane

0x0855,	// (0x00062e92) main_mup_eq_pane

0x0855,	// (0x00062e92) main_mup_pane

0x0ba3,	// (0x000631e0) main_notes_pane

0x0855,	// (0x00062e92) main_pec_pane

0x0855,	// (0x00062e92) main_phob_pane

0x0855,	// (0x00062e92) main_pinb_pane

0x0855,	// (0x00062e92) main_postcard_pane

0x0855,	// (0x00062e92) main_qdial_pane

0x0dca,	// (0x00063407) main_skin_pane

0x0855,	// (0x00062e92) main_smil2_pane

0x0dca,	// (0x00063407) main_smil_pane

0x0dca,	// (0x00063407) main_video_pane

0x0dca,	// (0x00063407) main_video_tele_pane

0x0ab0,	// (0x000630ed) main_viewer_pane_ParamLimits

0x0ab0,	// (0x000630ed) main_viewer_pane

0x0dca,	// (0x00063407) main_vorec_pane

0xa83f,	// (0x0006ce7c) popup_blid_sat_info_window_ParamLimits

0xa83f,	// (0x0006ce7c) popup_blid_sat_info_window

0xa85b,	// (0x0006ce98) popup_dyc_status_message_window_ParamLimits

0xa85b,	// (0x0006ce98) popup_dyc_status_message_window

0xa867,	// (0x0006cea4) popup_grid_large_graphic_window_ParamLimits

0xa867,	// (0x0006cea4) popup_grid_large_graphic_window

0xa8dc,	// (0x0006cf19) popup_loc_request_window_ParamLimits

0xa8dc,	// (0x0006cf19) popup_loc_request_window

0xa91f,	// (0x0006cf5c) popup_wml_address_window_ParamLimits

0xa91f,	// (0x0006cf5c) popup_wml_address_window

0xa70f,	// (0x0006cd4c) call_muted_g1

0xa44c,	// (0x0006ca89) popup_call_audio_conf_window_ParamLimits

0xa44c,	// (0x0006ca89) popup_call_audio_conf_window

0xa71f,	// (0x0006cd5c) popup_call_audio_first_window_ParamLimits

0xa71f,	// (0x0006cd5c) popup_call_audio_first_window

0xa753,	// (0x0006cd90) popup_call_audio_in_window_ParamLimits

0xa753,	// (0x0006cd90) popup_call_audio_in_window

0xa76f,	// (0x0006cdac) popup_call_audio_out_window_ParamLimits

0xa76f,	// (0x0006cdac) popup_call_audio_out_window

0xa78b,	// (0x0006cdc8) popup_call_audio_second_window_ParamLimits

0xa78b,	// (0x0006cdc8) popup_call_audio_second_window

0xa7b3,	// (0x0006cdf0) popup_call_audio_wait_window_ParamLimits

0xa7b3,	// (0x0006cdf0) popup_call_audio_wait_window

0xa7d2,	// (0x0006ce0f) popup_number_entry_window_ParamLimits

0xa7d2,	// (0x0006ce0f) popup_number_entry_window

0x0410,	// (0x00062a4d) bg_popup_call_pane_cp05_ParamLimits

0x0410,	// (0x00062a4d) bg_popup_call_pane_cp05

0x0430,	// (0x00062a6d) popup_number_entry_window_t1

0x0443,	// (0x00062a80) popup_number_entry_window_t2

0x0455,	// (0x00062a92) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00071707) popup_number_entry_window_t

0x049b,	// (0x00062ad8) text_title_cp2

0x04ae,	// (0x00062aeb) bg_popup_call_pane_cp_ParamLimits

0x04ae,	// (0x00062aeb) bg_popup_call_pane_cp

0x04bc,	// (0x00062af9) call_thumbnail_pane

0x04c4,	// (0x00062b01) popup_call_audio_in_window_g1_ParamLimits

0x04c4,	// (0x00062b01) popup_call_audio_in_window_g1

0x04d0,	// (0x00062b0d) popup_call_audio_in_window_g2_ParamLimits

0x04d0,	// (0x00062b0d) popup_call_audio_in_window_g2

0x04dc,	// (0x00062b19) popup_call_audio_in_window_g3_ParamLimits

0x04dc,	// (0x00062b19) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00071710) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00071710) popup_call_audio_in_window_g

0x04e8,	// (0x00062b25) popup_call_audio_in_window_t1_ParamLimits

0x04e8,	// (0x00062b25) popup_call_audio_in_window_t1

0x0503,	// (0x00062b40) popup_call_audio_in_window_t2_ParamLimits

0x0503,	// (0x00062b40) popup_call_audio_in_window_t2

0x051e,	// (0x00062b5b) popup_call_audio_in_window_t3_ParamLimits

0x051e,	// (0x00062b5b) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00071717) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00071717) popup_call_audio_in_window_t

0x04ae,	// (0x00062aeb) bg_popup_call_pane_cp01_ParamLimits

0x04ae,	// (0x00062aeb) bg_popup_call_pane_cp01

0x04bc,	// (0x00062af9) call_thumbnail_pane_cp02

0x0531,	// (0x00062b6e) call_type_pane_cp022

0x0539,	// (0x00062b76) popup_call_audio_out_window_g1_ParamLimits

0x0539,	// (0x00062b76) popup_call_audio_out_window_g1

0x054b,	// (0x00062b88) popup_call_audio_out_window_g2_ParamLimits

0x054b,	// (0x00062b88) popup_call_audio_out_window_g2

0x0557,	// (0x00062b94) popup_call_audio_out_window_g3_ParamLimits

0x0557,	// (0x00062b94) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0007171e) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0007171e) popup_call_audio_out_window_g

0x0569,	// (0x00062ba6) popup_call_audio_out_window_t1_ParamLimits

0x0569,	// (0x00062ba6) popup_call_audio_out_window_t1

0x0581,	// (0x00062bbe) popup_call_audio_out_window_t2_ParamLimits

0x0581,	// (0x00062bbe) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00071725) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00071725) popup_call_audio_out_window_t

0x0596,	// (0x00062bd3) bg_popup_call_pane_ParamLimits

0x0596,	// (0x00062bd3) bg_popup_call_pane

0x7f45,	// (0x0006a582) call_thumbnail_pane_cp_ParamLimits

0x7f45,	// (0x0006a582) call_thumbnail_pane_cp

0x061a,	// (0x00062c57) call_type_pane_cp01_ParamLimits

0x061a,	// (0x00062c57) call_type_pane_cp01

0x065e,	// (0x00062c9b) popup_call_audio_first_window_g1_ParamLimits

0x065e,	// (0x00062c9b) popup_call_audio_first_window_g1

0x06aa,	// (0x00062ce7) popup_call_audio_first_window_g2_ParamLimits

0x06aa,	// (0x00062ce7) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0007172a) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0007172a) popup_call_audio_first_window_g

0x06ee,	// (0x00062d2b) popup_call_audio_first_window_t1_ParamLimits

0x06ee,	// (0x00062d2b) popup_call_audio_first_window_t1

0x079a,	// (0x00062dd7) popup_call_audio_first_window_t4_ParamLimits

0x079a,	// (0x00062dd7) popup_call_audio_first_window_t4

0x0826,	// (0x00062e63) popup_call_audio_first_window_t5_ParamLimits

0x0826,	// (0x00062e63) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0007172f) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0007172f) popup_call_audio_first_window_t

0x0855,	// (0x00062e92) bg_popup_call_pane_cp02

0x085f,	// (0x00062e9c) call_type_pane_cp023

0x0867,	// (0x00062ea4) popup_call_audio_wait_window_g1

0x086f,	// (0x00062eac) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00071736) popup_call_audio_wait_window_g

0x0877,	// (0x00062eb4) popup_call_audio_wait_window_t3

0x0885,	// (0x00062ec2) bg_popup_call_pane_cp03_ParamLimits

0x0885,	// (0x00062ec2) bg_popup_call_pane_cp03

0x08e5,	// (0x00062f22) call_thumbnail_pane_cp011_ParamLimits

0x08e5,	// (0x00062f22) call_thumbnail_pane_cp011

0x08f1,	// (0x00062f2e) call_type_pane_cp034_ParamLimits

0x08f1,	// (0x00062f2e) call_type_pane_cp034

0x092d,	// (0x00062f6a) popup_call_audio_second_window_g1_ParamLimits

0x092d,	// (0x00062f6a) popup_call_audio_second_window_g1

0x0969,	// (0x00062fa6) popup_call_audio_second_window_g2_ParamLimits

0x0969,	// (0x00062fa6) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0007173b) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0007173b) popup_call_audio_second_window_g

0x09a5,	// (0x00062fe2) popup_call_audio_second_window_t1_ParamLimits

0x09a5,	// (0x00062fe2) popup_call_audio_second_window_t1

0x0a26,	// (0x00063063) popup_call_audio_second_window_t2_ParamLimits

0x0a26,	// (0x00063063) popup_call_audio_second_window_t2

0x0a5c,	// (0x00063099) popup_call_audio_second_window_t3_ParamLimits

0x0a5c,	// (0x00063099) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00071740) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00071740) popup_call_audio_second_window_t

0x0855,	// (0x00062e92) bg_popup_call_pane_cp04

0x0a92,	// (0x000630cf) list_conf_pane

0x0a9a,	// (0x000630d7) popup_call_audio_conf_window_t1

0x0aa8,	// (0x000630e5) call_thumbnail_pane_g1

0x0ab0,	// (0x000630ed) bg_pinb_pane_ParamLimits

0x0ab0,	// (0x000630ed) bg_pinb_pane

0x0abe,	// (0x000630fb) find_pinb_pane

0x0ac7,	// (0x00063104) listscroll_pinb_pane_ParamLimits

0x0ac7,	// (0x00063104) listscroll_pinb_pane

0x0ad6,	// (0x00063113) pinb_bg_pane_g1

0x7f69,	// (0x0006a5a6) pinb_bg_pane_g2

0x7f73,	// (0x0006a5b0) pinb_bg_pane_g3

0x7f7d,	// (0x0006a5ba) pinb_bg_pane_g4

0x7f87,	// (0x0006a5c4) pinb_bg_pane_g5

0x7f91,	// (0x0006a5ce) pinb_bg_pane_g6

0x7f9c,	// (0x0006a5d9) pinb_bg_pane_g7

0x7fa7,	// (0x0006a5e4) pinb_bg_pane_g8

0x7fb0,	// (0x0006a5ed) pinb_bg_pane_g9

0x7fb8,	// (0x0006a5f5) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00071747) pinb_bg_pane_g

0x7fd5,	// (0x0006a612) grid_pinb_pane

0x7fde,	// (0x0006a61b) list_pinb_pane

0x7fe9,	// (0x0006a626) scroll_pane_cp01_ParamLimits

0x7fe9,	// (0x0006a626) scroll_pane_cp01

0x0ae0,	// (0x0006311d) find_pinb_pane_g1_ParamLimits

0x0ae0,	// (0x0006311d) find_pinb_pane_g1

0x0af8,	// (0x00063135) find_pinb_pane_t1

0x0b0a,	// (0x00063147) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00071761) find_pinb_pane_t

0x0b1f,	// (0x0006315c) input_focus_pane_cp01_ParamLimits

0x0b1f,	// (0x0006315c) input_focus_pane_cp01

0x7ff9,	// (0x0006a636) cell_pinb_pane_ParamLimits

0x7ff9,	// (0x0006a636) cell_pinb_pane

0x8012,	// (0x0006a64f) cell_pinb_pane_g1_ParamLimits

0x8012,	// (0x0006a64f) cell_pinb_pane_g1

0x8023,	// (0x0006a660) cell_pinb_pane_g2_ParamLimits

0x8023,	// (0x0006a660) cell_pinb_pane_g2

0x0b2b,	// (0x00063168) cell_pinb_pane_g3_ParamLimits

0x0b2b,	// (0x00063168) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00071766) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00071766) cell_pinb_pane_g

0x0855,	// (0x00062e92) grid_highlight_pane_cp01

0x802f,	// (0x0006a66c) list_pinb_item_pane_ParamLimits

0x802f,	// (0x0006a66c) list_pinb_item_pane

0x0855,	// (0x00062e92) list_highlight_pane_cp02

0x8044,	// (0x0006a681) list_pinb_item_pane_g1_ParamLimits

0x8044,	// (0x0006a681) list_pinb_item_pane_g1

0x0b37,	// (0x00063174) list_pinb_item_pane_g2_ParamLimits

0x0b37,	// (0x00063174) list_pinb_item_pane_g2

0x8051,	// (0x0006a68e) list_pinb_item_pane_g3_ParamLimits

0x8051,	// (0x0006a68e) list_pinb_item_pane_g3

0x8060,	// (0x0006a69d) list_pinb_item_pane_g4_ParamLimits

0x8060,	// (0x0006a69d) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0007176d) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0007176d) list_pinb_item_pane_g

0x806c,	// (0x0006a6a9) list_pinb_item_pane_t1_ParamLimits

0x806c,	// (0x0006a6a9) list_pinb_item_pane_t1

0x809d,	// (0x0006a6da) calc_display_pane

0x80b7,	// (0x0006a6f4) calc_paper_pane

0x80cf,	// (0x0006a70c) grid_calc_pane

0x0855,	// (0x00062e92) bg_list_pane_cp01

0x80f3,	// (0x0006a730) clock_g1

0x80fb,	// (0x0006a738) clock_g2

0x0001,

0xf139,	// (0x00071776) clock_g

0x8103,	// (0x0006a740) clock_t1_ParamLimits

0x8103,	// (0x0006a740) clock_t1

0x8118,	// (0x0006a755) clock_t2_ParamLimits

0x8118,	// (0x0006a755) clock_t2

0x812a,	// (0x0006a767) clock_t3_ParamLimits

0x812a,	// (0x0006a767) clock_t3

0x813c,	// (0x0006a779) clock_t4_ParamLimits

0x813c,	// (0x0006a779) clock_t4

0x814e,	// (0x0006a78b) clock_t5_ParamLimits

0x814e,	// (0x0006a78b) clock_t5

0x8163,	// (0x0006a7a0) clock_t6_ParamLimits

0x8163,	// (0x0006a7a0) clock_t6

0x8175,	// (0x0006a7b2) clock_t7_ParamLimits

0x8175,	// (0x0006a7b2) clock_t7

0x8187,	// (0x0006a7c4) clock_t8_ParamLimits

0x8187,	// (0x0006a7c4) clock_t8

0x8199,	// (0x0006a7d6) clock_t9_ParamLimits

0x8199,	// (0x0006a7d6) clock_t9

0x0008,

0xf13e,	// (0x0007177b) clock_t_ParamLimits

0xf13e,	// (0x0007177b) clock_t

0x0b4b,	// (0x00063188) popup_clock_analogue_window_cp02

0x0b4b,	// (0x00063188) popup_clock_digital_window_cp01

0x0b53,	// (0x00063190) listscroll_help_pane

0x0855,	// (0x00062e92) phob_pre_status_pane

0x0b5d,	// (0x0006319a) grid_qdial_pane

0x0ab0,	// (0x000630ed) listscroll_mce_pane

0x0ab0,	// (0x000630ed) bg_notes_pane

0x0b67,	// (0x000631a4) list_notes_pane

0x81ab,	// (0x0006a7e8) scroll_pane_cp06

0x0b75,	// (0x000631b2) bg_calc_paper_pane

0x81b8,	// (0x0006a7f5) list_calc_pane

0x0ba3,	// (0x000631e0) bg_calc_display_pane

0x81d2,	// (0x0006a80f) calc_display_pane_t1

0x81e7,	// (0x0006a824) calc_display_pane_t2

0x81fc,	// (0x0006a839) calc_display_pane_t3

0x0002,

0xf151,	// (0x0007178e) calc_display_pane_t

0x820e,	// (0x0006a84b) cell_calc_pane_ParamLimits

0x820e,	// (0x0006a84b) cell_calc_pane

0x0bc1,	// (0x000631fe) bg_calc_paper_pane_g1

0x0bd9,	// (0x00063216) bg_calc_paper_pane_g2

0x0bcd,	// (0x0006320a) bg_calc_paper_pane_g3

0x0bf1,	// (0x0006322e) bg_calc_paper_pane_g4

0x0be5,	// (0x00063222) bg_calc_paper_pane_g5

0x8235,	// (0x0006a872) bg_calc_paper_pane_g6

0x8244,	// (0x0006a881) bg_calc_paper_pane_g7

0x8253,	// (0x0006a890) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00071795) bg_calc_paper_pane_g

0x8262,	// (0x0006a89f) calc_bg_paper_pane_g9

0x8271,	// (0x0006a8ae) list_calc_item_pane_ParamLimits

0x8271,	// (0x0006a8ae) list_calc_item_pane

0x0bfd,	// (0x0006323a) list_calc_item_pane_g1

0x8289,	// (0x0006a8c6) list_calc_item_pane_t1_ParamLimits

0x8289,	// (0x0006a8c6) list_calc_item_pane_t1

0x829b,	// (0x0006a8d8) list_calc_item_pane_t2_ParamLimits

0x829b,	// (0x0006a8d8) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000717a6) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000717a6) list_calc_item_pane_t

0x0c1c,	// (0x00063259) cell_calc_pane_g1

0x0c26,	// (0x00063263) grid_highlight_pane_cp02

0x0c5b,	// (0x00063298) bg_calc_display_pane_g1

0x82c9,	// (0x0006a906) bg_calc_display_pane_g2

0x0c48,	// (0x00063285) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000717b0) bg_calc_display_pane_g

0x82d3,	// (0x0006a910) cell_qdial_pane_ParamLimits

0x82d3,	// (0x0006a910) cell_qdial_pane

0x82e5,	// (0x0006a922) cell_qdial_pane_g1_ParamLimits

0x82e5,	// (0x0006a922) cell_qdial_pane_g1

0x82f2,	// (0x0006a92f) cell_qdial_pane_g2_ParamLimits

0x82f2,	// (0x0006a92f) cell_qdial_pane_g2

0x0c64,	// (0x000632a1) cell_qdial_pane_g3_ParamLimits

0x0c64,	// (0x000632a1) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000717b7) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000717b7) cell_qdial_pane_g

0x8310,	// (0x0006a94d) cell_qdial_pane_t1_ParamLimits

0x8310,	// (0x0006a94d) cell_qdial_pane_t1

0x8328,	// (0x0006a965) cell_qdial_pane_t2_ParamLimits

0x8328,	// (0x0006a965) cell_qdial_pane_t2

0x833b,	// (0x0006a978) cell_qdial_pane_t3_ParamLimits

0x833b,	// (0x0006a978) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000717c0) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000717c0) cell_qdial_pane_t

0x0855,	// (0x00062e92) grid_highlight_pane_cp04

0x0c70,	// (0x000632ad) thumbnail_qdial_pane_ParamLimits

0x0c70,	// (0x000632ad) thumbnail_qdial_pane

0x0ccc,	// (0x00063309) list_help_pane

0x0cd5,	// (0x00063312) scroll_pane_cp02

0x834e,	// (0x0006a98b) help_list_pane_t1_ParamLimits

0x834e,	// (0x0006a98b) help_list_pane_t1

0x836a,	// (0x0006a9a7) bg_notes_pane_g2

0x8372,	// (0x0006a9af) bg_notes_pane_g3

0x837a,	// (0x0006a9b7) notes_bg_pane_g1

0x8382,	// (0x0006a9bf) notes_bg_pane_g4

0x838a,	// (0x0006a9c7) notes_bg_pane_g5

0x8392,	// (0x0006a9cf) notes_bg_pane_g6

0x839a,	// (0x0006a9d7) notes_bg_pane_g7

0x83a2,	// (0x0006a9df) notes_bg_pane_g8

0x83aa,	// (0x0006a9e7) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000717de) notes_bg_pane_g

0x83b2,	// (0x0006a9ef) list_notes_text_pane_ParamLimits

0x83b2,	// (0x0006a9ef) list_notes_text_pane

0x0d26,	// (0x00063363) list_notes_text_pane_g1

0x69e0,	// (0x0006901d) list_notes_text_pane_t1

0x83d3,	// (0x0006aa10) listscroll_cale_week_pane

0x83fd,	// (0x0006aa3a) bg_cale_heading_pane

0x841a,	// (0x0006aa57) bg_cale_pane_cp01

0x843c,	// (0x0006aa79) cale_week_corner_pane

0x845b,	// (0x0006aa98) cale_week_day_heading_pane

0x847d,	// (0x0006aaba) cale_week_scroll_pane_g1

0x8495,	// (0x0006aad2) cale_week_scroll_pane_g2

0x84ad,	// (0x0006aaea) cale_week_scroll_pane_g3

0x84c5,	// (0x0006ab02) cale_week_scroll_pane_g4

0x84dd,	// (0x0006ab1a) cale_week_scroll_pane_g5

0x84f5,	// (0x0006ab32) cale_week_scroll_pane_g6

0x850d,	// (0x0006ab4a) cale_week_scroll_pane_g7

0x8525,	// (0x0006ab62) cale_week_scroll_pane_g8

0x853d,	// (0x0006ab7a) cale_week_scroll_pane_g9

0x855a,	// (0x0006ab97) cale_week_scroll_pane_g10

0x8577,	// (0x0006abb4) cale_week_scroll_pane_g11

0x8594,	// (0x0006abd1) cale_week_scroll_pane_g12

0x85b1,	// (0x0006abee) cale_week_scroll_pane_g13

0x85ce,	// (0x0006ac0b) cale_week_scroll_pane_g14

0x85eb,	// (0x0006ac28) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000717ed) cale_week_scroll_pane_g

0x8620,	// (0x0006ac5d) cale_week_time_pane

0x8638,	// (0x0006ac75) grid_cale_week_pane

0x0d5b,	// (0x00063398) scroll_pane_cp08

0x8657,	// (0x0006ac94) cell_cale_week_pane_ParamLimits

0x8657,	// (0x0006ac94) cell_cale_week_pane

0x86cd,	// (0x0006ad0a) cale_week_day_heading_pane_t1

0x86f5,	// (0x0006ad32) cale_week_day_heading_pane_t2

0x8722,	// (0x0006ad5f) cale_week_day_heading_pane_t3

0x874f,	// (0x0006ad8c) cale_week_day_heading_pane_t4

0x877c,	// (0x0006adb9) cale_week_day_heading_pane_t5

0x87a9,	// (0x0006ade6) cale_week_day_heading_pane_t6

0x87d6,	// (0x0006ae13) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0007180e) cale_week_day_heading_pane_t

0x0d78,	// (0x000633b5) bg_cale_side_pane

0x87fe,	// (0x0006ae3b) cale_week_time_pane_t1

0x8842,	// (0x0006ae7f) cale_week_time_pane_t2

0x8886,	// (0x0006aec3) cale_week_time_pane_t3

0x88ca,	// (0x0006af07) cale_week_time_pane_t4

0x890e,	// (0x0006af4b) cale_week_time_pane_t5

0x8952,	// (0x0006af8f) cale_week_time_pane_t6

0x8996,	// (0x0006afd3) cale_week_time_pane_t7

0x89da,	// (0x0006b017) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0007181d) cale_week_time_pane_t

0x8a1e,	// (0x0006b05b) cell_cale_week_pane_g2

0x8a42,	// (0x0006b07f) cell_cale_week_pane_g3_ParamLimits

0x8a42,	// (0x0006b07f) cell_cale_week_pane_g3

0x0d86,	// (0x000633c3) grid_highlight_pane_cp07

0x0d8e,	// (0x000633cb) listscroll_gms_pane

0x0d98,	// (0x000633d5) grid_gms_pane

0x0da1,	// (0x000633de) listscroll_gms_pane_g1

0x0da9,	// (0x000633e6) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0007182e) listscroll_gms_pane_g

0x8a5a,	// (0x0006b097) scroll_pane_cp010

0x8a63,	// (0x0006b0a0) cell_gms_pane_ParamLimits

0x8a63,	// (0x0006b0a0) cell_gms_pane

0x8a74,	// (0x0006b0b1) cell_gms_pane_g1

0x0db1,	// (0x000633ee) cell_gms_pane_g2

0x0d26,	// (0x00063363) cell_gms_pane_g3

0x0db9,	// (0x000633f6) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x00071833) cell_gms_pane_g

0x0dc2,	// (0x000633ff) grid_highlight_pane_cp09

0xa6bd,	// (0x0006ccfa) phob_pre_status_pane_g1

0xa6c5,	// (0x0006cd02) phob_pre_status_pane_g2

0xa6cd,	// (0x0006cd0a) phob_pre_status_pane_g3

0xa6d5,	// (0x0006cd12) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x00071c31) phob_pre_status_pane_g

0xa6e5,	// (0x0006cd22) phob_pre_status_pane_t1

0xa6f3,	// (0x0006cd30) phob_pre_status_pane_t2

0xa701,	// (0x0006cd3e) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x00071c3c) phob_pre_status_pane_t

0x0dca,	// (0x00063407) bg_list_pane_cp05

0x8a84,	// (0x0006b0c1) grid_vorec_pane

0x8a8c,	// (0x0006b0c9) vorec_t1

0x8a9a,	// (0x0006b0d7) vorec_t2

0x8aa8,	// (0x0006b0e5) vorec_t3

0x8ab6,	// (0x0006b0f3) vorec_t4

0xee52,	// (0x0007148f) vorec_t5

0xee60,	// (0x0007149d) vorec_t6

0x0004,

0xf1ff,	// (0x0007183c) vorec_t

0xee6e,	// (0x000714ab) wait_bar_pane_cp01

0x8ad2,	// (0x0006b10f) cell_vorec_pane_ParamLimits

0x8ad2,	// (0x0006b10f) cell_vorec_pane

0x8ae5,	// (0x0006b122) cell_vorec_pane_g1

0x0855,	// (0x00062e92) grid_highlight_pane_cp05

0x8afb,	// (0x0006b138) cams_zoom_pane

0x8b07,	// (0x0006b144) image_vga_pane

0x8b14,	// (0x0006b151) main_camera_pane_g1

0x8b20,	// (0x0006b15d) main_camera_pane_g2

0x8b2c,	// (0x0006b169) main_camera_pane_g3

0x8b38,	// (0x0006b175) main_camera_pane_g4

0x8b44,	// (0x0006b181) main_camera_pane_g5

0x8b50,	// (0x0006b18d) main_camera_pane_g6

0x8b5c,	// (0x0006b199) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00071847) main_camera_pane_g

0x8b68,	// (0x0006b1a5) main_camera_pane_t1

0x8b7a,	// (0x0006b1b7) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00071858) main_camera_pane_t

0x8b9e,	// (0x0006b1db) cams_zoom_pane_cp_ParamLimits

0x8b9e,	// (0x0006b1db) cams_zoom_pane_cp

0x8bc2,	// (0x0006b1ff) image_cif_pane_ParamLimits

0x8bc2,	// (0x0006b1ff) image_cif_pane

0x8bdc,	// (0x0006b219) image_subqcif_pane

0x8be4,	// (0x0006b221) main_video_pane_g1_ParamLimits

0x8be4,	// (0x0006b221) main_video_pane_g1

0x8c04,	// (0x0006b241) main_video_pane_g2_ParamLimits

0x8c04,	// (0x0006b241) main_video_pane_g2

0x8c32,	// (0x0006b26f) main_video_pane_g3_ParamLimits

0x8c32,	// (0x0006b26f) main_video_pane_g3

0x8c5b,	// (0x0006b298) main_video_pane_g4_ParamLimits

0x8c5b,	// (0x0006b298) main_video_pane_g4

0x8c84,	// (0x0006b2c1) main_video_pane_g5_ParamLimits

0x8c84,	// (0x0006b2c1) main_video_pane_g5

0x0de8,	// (0x00063425) main_video_pane_g6_ParamLimits

0x0de8,	// (0x00063425) main_video_pane_g6

0x0006,

0xf220,	// (0x0007185d) main_video_pane_g_ParamLimits

0xf220,	// (0x0007185d) main_video_pane_g

0x8ca6,	// (0x0006b2e3) main_video_pane_t1_ParamLimits

0x8ca6,	// (0x0006b2e3) main_video_pane_t1

0x0e02,	// (0x0006343f) cams_zoom_pane_g1

0x0e0b,	// (0x00063448) cams_zoom_pane_g2

0x0e14,	// (0x00063451) cams_zoom_pane_g3

0x0e1d,	// (0x0006345a) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007186c) cams_zoom_pane_g

0x8cf0,	// (0x0006b32d) grid_cams_pane

0x8cfc,	// (0x0006b339) linegrid_cams_pane

0x8d08,	// (0x0006b345) cell_cams_pane_ParamLimits

0x8d08,	// (0x0006b345) cell_cams_pane

0x0e26,	// (0x00063463) cams_burst_image_pane

0x0e2e,	// (0x0006346b) cell_cams_pane_g1

0x0855,	// (0x00062e92) grid_highlight_pane_cp03

0x0c1c,	// (0x00063259) mp_bg_pane_g1

0x0855,	// (0x00062e92) bg_list_pane_cp03

0x4f1b,	// (0x00067558) bg_mp_pane

0x4f23,	// (0x00067560) grid_mp_pane

0x4f2b,	// (0x00067568) media_player_g1

0x4f33,	// (0x00067570) media_player_t1

0x4f41,	// (0x0006757e) media_player_t2

0x4f4f,	// (0x0006758c) media_player_t3

0x4f5d,	// (0x0006759a) media_player_t4

0x4f6b,	// (0x000675a8) media_player_t5

0x4f79,	// (0x000675b6) media_player_t6

0x4f87,	// (0x000675c4) media_player_t7

0x0006,

0xf5de,	// (0x00071c1b) media_player_t

0x4f95,	// (0x000675d2) wait_bar_pane_cp02

0xf5c3,	// (0x00071c00) main_usb_pane_t

0xa6b4,	// (0x0006ccf1) cell_mp_pane

0x0c1c,	// (0x00063259) cell_mp_pane_g1

0x0855,	// (0x00062e92) grid_highlight_pane_cp06

0x0e36,	// (0x00063473) grid_skin_colour_pane

0x0e3e,	// (0x0006347b) list_highlight_pane_cp03

0x8d1b,	// (0x0006b358) skin_g1

0x0e46,	// (0x00063483) skin_t1

0x0e55,	// (0x00063492) skin_t2

0x0001,

0xf264,	// (0x000718a1) skin_t

0x8d23,	// (0x0006b360) cell_skin_colour_pane_ParamLimits

0x8d23,	// (0x0006b360) cell_skin_colour_pane

0x0e63,	// (0x000634a0) cell_skin_colour_pane_g1

0x8d99,	// (0x0006b3d6) call_video_g1_ParamLimits

0x8d99,	// (0x0006b3d6) call_video_g1

0x8da5,	// (0x0006b3e2) call_video_g2_ParamLimits

0x8da5,	// (0x0006b3e2) call_video_g2

0x0001,

0xf269,	// (0x000718a6) call_video_g_ParamLimits

0xf269,	// (0x000718a6) call_video_g

0x8df5,	// (0x0006b432) call_video_uplink_pane_cp1_ParamLimits

0x8df5,	// (0x0006b432) call_video_uplink_pane_cp1

0x0e75,	// (0x000634b2) call_video_uplink_pane_cp2

0x8eb1,	// (0x0006b4ee) video_down_crop_pane_ParamLimits

0x8eb1,	// (0x0006b4ee) video_down_crop_pane

0x8f7b,	// (0x0006b5b8) video_down_pane_ParamLimits

0x8f7b,	// (0x0006b5b8) video_down_pane

0x0e7d,	// (0x000634ba) video_down_subqcif_pane_ParamLimits

0x0e7d,	// (0x000634ba) video_down_subqcif_pane

0x0e95,	// (0x000634d2) video_down_subqcif_pane_cp_ParamLimits

0x0e95,	// (0x000634d2) video_down_subqcif_pane_cp

0x0eb9,	// (0x000634f6) im_reading_pane_ParamLimits

0x0eb9,	// (0x000634f6) im_reading_pane

0x9045,	// (0x0006b682) im_writing_pane_ParamLimits

0x9045,	// (0x0006b682) im_writing_pane

0x905b,	// (0x0006b698) im_reading_pane_t1

0x0ed3,	// (0x00063510) list_im_pane

0x0ee4,	// (0x00063521) scroll_pane_cp07

0x9093,	// (0x0006b6d0) im_writing_pane_t1_ParamLimits

0x9093,	// (0x0006b6d0) im_writing_pane_t1

0x0efd,	// (0x0006353a) im_writing_pane_t2_ParamLimits

0x0efd,	// (0x0006353a) im_writing_pane_t2

0x0001,

0xf273,	// (0x000718b0) im_writing_pane_t_ParamLimits

0xf273,	// (0x000718b0) im_writing_pane_t

0x0855,	// (0x00062e92) input_focus_pane_cp04

0x0855,	// (0x00062e92) input_focus_pane_cp05

0x90a5,	// (0x0006b6e2) list_im_single_pane_ParamLimits

0x90a5,	// (0x0006b6e2) list_im_single_pane

0x0f1a,	// (0x00063557) list_single_im_pane_t1

0xa67a,	// (0x0006ccb7) blid_accuracy_pane

0xa682,	// (0x0006ccbf) blid_compass_pane

0xa68a,	// (0x0006ccc7) main_location_t1

0xa698,	// (0x0006ccd5) main_location_t2

0xa6a6,	// (0x0006cce3) main_location_t3

0x0002,

0xf5ed,	// (0x00071c2a) main_location_t

0x0855,	// (0x00062e92) aid_levels_location

0x0c1c,	// (0x00063259) blid_accuracy_pane_g1

0x0c1c,	// (0x00063259) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x00071912) blid_accuracy_pane_g

0x0f54,	// (0x00063591) wml_content_pane

0x0f92,	// (0x000635cf) wml_button_pane_ParamLimits

0x0f92,	// (0x000635cf) wml_button_pane

0x90b9,	// (0x0006b6f6) wml_list_single_large_pane_ParamLimits

0x90b9,	// (0x0006b6f6) wml_list_single_large_pane

0x90cf,	// (0x0006b70c) wml_list_single_medium_pane_ParamLimits

0x90cf,	// (0x0006b70c) wml_list_single_medium_pane

0x90e7,	// (0x0006b724) wml_list_single_small_pane_ParamLimits

0x90e7,	// (0x0006b724) wml_list_single_small_pane

0x0fa6,	// (0x000635e3) wml_selection_box_pane_ParamLimits

0x0fa6,	// (0x000635e3) wml_selection_box_pane

0x0fb9,	// (0x000635f6) wml_list_single_pane_t1

0x0fc8,	// (0x00063605) wml_list_single_medium_pane_t1

0x0fd7,	// (0x00063614) wml_list_single_large_pane_t1

0x0fe6,	// (0x00063623) input_focus_pane_cp02_ParamLimits

0x0fe6,	// (0x00063623) input_focus_pane_cp02

0x0ff9,	// (0x00063636) wml_selection_box_pane_g1

0x1002,	// (0x0006363f) wml_selection_box_pane_t1_ParamLimits

0x1002,	// (0x0006363f) wml_selection_box_pane_t1

0x0ab0,	// (0x000630ed) bg_wml_button_pane_ParamLimits

0x0ab0,	// (0x000630ed) bg_wml_button_pane

0x101a,	// (0x00063657) wml_button_pane_g1

0x1022,	// (0x0006365f) wml_button_pane_t1

0x101a,	// (0x00063657) wml_button_bg_pane_g1

0x1032,	// (0x0006366f) wml_button_bg_pane_g2

0x103a,	// (0x00063677) wml_button_bg_pane_g3

0x1042,	// (0x0006367f) wml_button_bg_pane_g4

0x104a,	// (0x00063687) wml_button_bg_pane_g5

0x1052,	// (0x0006368f) wml_button_bg_pane_g6

0x105a,	// (0x00063697) wml_button_bg_pane_g7

0x1062,	// (0x0006369f) wml_button_bg_pane_g8

0x106a,	// (0x000636a7) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000718b5) wml_button_bg_pane_g

0x9101,	// (0x0006b73e) bg_list_pane_cp02

0x1072,	// (0x000636af) mce_header_pane_ParamLimits

0x1072,	// (0x000636af) mce_header_pane

0x1088,	// (0x000636c5) mce_icon_pane

0x1088,	// (0x000636c5) mce_image_pane

0x1091,	// (0x000636ce) mce_text_pane_ParamLimits

0x1091,	// (0x000636ce) mce_text_pane

0x9109,	// (0x0006b746) scroll_pane_cp03

0x0f8a,	// (0x000635c7) scroll_pane_cp04

0x10a4,	// (0x000636e1) scroll_pane_cp05_ParamLimits

0x10a4,	// (0x000636e1) scroll_pane_cp05

0x9111,	// (0x0006b74e) mce_header_field_pane_ParamLimits

0x9111,	// (0x0006b74e) mce_header_field_pane

0x9131,	// (0x0006b76e) mce_header_field_pane_2_ParamLimits

0x9131,	// (0x0006b76e) mce_header_field_pane_2

0x9147,	// (0x0006b784) mce_header_field_pane_3

0x914f,	// (0x0006b78c) list_single_mce_message_pane_ParamLimits

0x914f,	// (0x0006b78c) list_single_mce_message_pane

0x9164,	// (0x0006b7a1) list_single_mce_smart_pane_ParamLimits

0x9164,	// (0x0006b7a1) list_single_mce_smart_pane

0x10b0,	// (0x000636ed) input_focus_pane_cp03

0x10b9,	// (0x000636f6) list_header_data_pane

0x9184,	// (0x0006b7c1) mce_header_field_pane_t1

0x9192,	// (0x0006b7cf) list_single_mce_header_pane_ParamLimits

0x9192,	// (0x0006b7cf) list_single_mce_header_pane

0x10c1,	// (0x000636fe) list_single_mce_header_pane_t1

0x10d0,	// (0x0006370d) list_single_mce_message_pane_g1

0x10d8,	// (0x00063715) list_single_mce_message_pane_t1

0x91ce,	// (0x0006b80b) bg_cale_heading_pane_cp01_ParamLimits

0x91ce,	// (0x0006b80b) bg_cale_heading_pane_cp01

0x10e6,	// (0x00063723) bg_cale_pane_cp02_ParamLimits

0x10e6,	// (0x00063723) bg_cale_pane_cp02

0x9208,	// (0x0006b845) cale_month_corner_pane

0x9220,	// (0x0006b85d) cale_month_day_heading_pane_ParamLimits

0x9220,	// (0x0006b85d) cale_month_day_heading_pane

0x925a,	// (0x0006b897) cale_month_pane_g1_ParamLimits

0x925a,	// (0x0006b897) cale_month_pane_g1

0x9289,	// (0x0006b8c6) cale_month_pane_g2_ParamLimits

0x9289,	// (0x0006b8c6) cale_month_pane_g2

0x92ad,	// (0x0006b8ea) cale_month_pane_g3_ParamLimits

0x92ad,	// (0x0006b8ea) cale_month_pane_g3

0x92e9,	// (0x0006b926) cale_month_pane_g4_ParamLimits

0x92e9,	// (0x0006b926) cale_month_pane_g4

0x9325,	// (0x0006b962) cale_month_pane_g5_ParamLimits

0x9325,	// (0x0006b962) cale_month_pane_g5

0x9361,	// (0x0006b99e) cale_month_pane_g6_ParamLimits

0x9361,	// (0x0006b99e) cale_month_pane_g6

0x939d,	// (0x0006b9da) cale_month_pane_g7_ParamLimits

0x939d,	// (0x0006b9da) cale_month_pane_g7

0x93d9,	// (0x0006ba16) cale_month_pane_g8_ParamLimits

0x93d9,	// (0x0006ba16) cale_month_pane_g8

0x9415,	// (0x0006ba52) cale_month_pane_g9_ParamLimits

0x9415,	// (0x0006ba52) cale_month_pane_g9

0x944f,	// (0x0006ba8c) cale_month_pane_g10_ParamLimits

0x944f,	// (0x0006ba8c) cale_month_pane_g10

0x9489,	// (0x0006bac6) cale_month_pane_g11_ParamLimits

0x9489,	// (0x0006bac6) cale_month_pane_g11

0x94c3,	// (0x0006bb00) cale_month_pane_g12_ParamLimits

0x94c3,	// (0x0006bb00) cale_month_pane_g12

0x94fd,	// (0x0006bb3a) cale_month_pane_g13_ParamLimits

0x94fd,	// (0x0006bb3a) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000718c8) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000718c8) cale_month_pane_g

0x9537,	// (0x0006bb74) cale_month_week_pane

0x954f,	// (0x0006bb8c) grid_cale_month_pane_ParamLimits

0x954f,	// (0x0006bb8c) grid_cale_month_pane

0x9580,	// (0x0006bbbd) cale_month_day_heading_pane_t1

0x95b3,	// (0x0006bbf0) cale_month_day_heading_pane_t2

0x95dd,	// (0x0006bc1a) cale_month_day_heading_pane_t3

0x9607,	// (0x0006bc44) cale_month_day_heading_pane_t4

0x9631,	// (0x0006bc6e) cale_month_day_heading_pane_t5

0x965b,	// (0x0006bc98) cale_month_day_heading_pane_t6

0x9685,	// (0x0006bcc2) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000718e3) cale_month_day_heading_pane_t

0x0d78,	// (0x000633b5) bg_cale_side_pane_cp01

0x96af,	// (0x0006bcec) cale_month_week_pane_t1

0x96c8,	// (0x0006bd05) cale_month_week_pane_t2

0x96e1,	// (0x0006bd1e) cale_month_week_pane_t3

0x96fa,	// (0x0006bd37) cale_month_week_pane_t4

0x9713,	// (0x0006bd50) cale_month_week_pane_t5

0x972c,	// (0x0006bd69) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000718f2) cale_month_week_pane_t

0x9745,	// (0x0006bd82) cell_cale_month_pane_ParamLimits

0x9745,	// (0x0006bd82) cell_cale_month_pane

0x9833,	// (0x0006be70) cell_cale_month_pane_g1

0x983f,	// (0x0006be7c) cell_cale_month_pane_t1_ParamLimits

0x983f,	// (0x0006be7c) cell_cale_month_pane_t1

0x0d86,	// (0x000633c3) grid_highlight_pane_cp08

0x0c1c,	// (0x00063259) main_smil_g1

0x986b,	// (0x0006bea8) smil_status_pane

0x1131,	// (0x0006376e) smil_text_pane

0x4dfb,	// (0x00067438) bg_popup_call3_rect_pane_g8

0x4e03,	// (0x00067440) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00071bab) bg_popup_call3_rect_pane_g

0x509d,	// (0x000676da) smil_status_volume_pane_g1

0x113b,	// (0x00063778) smil_status_pane_t1

0xaa0e,	// (0x0006d04b) volume_smil_pane

0x1152,	// (0x0006378f) list_smil_text_pane

0x987c,	// (0x0006beb9) scroll_pane_cp011

0x9885,	// (0x0006bec2) smil_text_list_pane_t1_ParamLimits

0x9885,	// (0x0006bec2) smil_text_list_pane_t1

0x98c4,	// (0x0006bf01) aid_volume_smil_ParamLimits

0x98c4,	// (0x0006bf01) aid_volume_smil

0x0c1c,	// (0x00063259) smil_volume_pane_g1

0x0c1c,	// (0x00063259) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x00071912) smil_volume_pane_g

0x83d3,	// (0x0006aa10) listscroll_cale_day_pane

0x117e,	// (0x000637bb) bg_cale_pane

0x1196,	// (0x000637d3) list_cale_pane

0x11b9,	// (0x000637f6) scroll_pane_cp09

0x11ca,	// (0x00063807) cale_bg_pane_g1

0x11d2,	// (0x0006380f) cale_bg_pane_g2

0x11da,	// (0x00063817) cale_bg_pane_g3

0x11e2,	// (0x0006381f) cale_bg_pane_g4

0x11ea,	// (0x00063827) cale_bg_pane_g5

0x11f2,	// (0x0006382f) cale_bg_pane_g6

0x11fa,	// (0x00063837) cale_bg_pane_g7

0x1202,	// (0x0006383f) cale_bg_pane_g8

0x120a,	// (0x00063847) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00071917) cale_bg_pane_g

0x98e6,	// (0x0006bf23) list_cale_time_pane_ParamLimits

0x98e6,	// (0x0006bf23) list_cale_time_pane

0x121a,	// (0x00063857) list_cale_time_pane_g1_ParamLimits

0x121a,	// (0x00063857) list_cale_time_pane_g1

0x1226,	// (0x00063863) list_cale_time_pane_g2_ParamLimits

0x1226,	// (0x00063863) list_cale_time_pane_g2

0x98f8,	// (0x0006bf35) list_cale_time_pane_g3_ParamLimits

0x98f8,	// (0x0006bf35) list_cale_time_pane_g3

0x9904,	// (0x0006bf41) list_cale_time_pane_g4_ParamLimits

0x9904,	// (0x0006bf41) list_cale_time_pane_g4

0x9910,	// (0x0006bf4d) list_cale_time_pane_g5_ParamLimits

0x9910,	// (0x0006bf4d) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007192a) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007192a) list_cale_time_pane_g

0x1240,	// (0x0006387d) list_cale_time_pane_t1_ParamLimits

0x1240,	// (0x0006387d) list_cale_time_pane_t1

0x1268,	// (0x000638a5) list_cale_time_pane_t2_ParamLimits

0x1268,	// (0x000638a5) list_cale_time_pane_t2

0x9bd6,	// (0x0006c213) aid_blid_cardinal_pane

0x9c14,	// (0x0006c251) compass_pane_t4

0x1290,	// (0x000638cd) list_cale_time_pane_t4_ParamLimits

0x1290,	// (0x000638cd) list_cale_time_pane_t4

0x9c22,	// (0x0006c25f) compass_pane_t5

0x9c30,	// (0x0006c26d) compass_pane_t6

0x9c3e,	// (0x0006c27b) compass_pane_t7

0x175d,	// (0x00063d9a) navi_pane_cc_t1

0x194a,	// (0x00063f87) aid_phob_thumbnail_center_pane

0xa207,	// (0x0006c844) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00071937) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00071937) list_cale_time_pane_t

0x04ae,	// (0x00062aeb) bg_popup_window_pane_cp02_ParamLimits

0x04ae,	// (0x00062aeb) bg_popup_window_pane_cp02

0x12b8,	// (0x000638f5) heading_pane_cp01_ParamLimits

0x12b8,	// (0x000638f5) heading_pane_cp01

0x12c4,	// (0x00063901) loc_req_pane_ParamLimits

0x12c4,	// (0x00063901) loc_req_pane

0x12d4,	// (0x00063911) loc_type_pane_ParamLimits

0x12d4,	// (0x00063911) loc_type_pane

0x12e6,	// (0x00063923) loc_type_pane_t1_ParamLimits

0x12e6,	// (0x00063923) loc_type_pane_t1

0x12f8,	// (0x00063935) loc_type_pane_t2_ParamLimits

0x12f8,	// (0x00063935) loc_type_pane_t2

0x130a,	// (0x00063947) loc_type_pane_t3_ParamLimits

0x130a,	// (0x00063947) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007193e) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007193e) loc_type_pane_t

0x131c,	// (0x00063959) list_loc_req_pane

0x1326,	// (0x00063963) scroll_pane_cp012

0x199b,	// (0x00063fd8) list_single_loc_request_popup_menu_pane_ParamLimits

0x199b,	// (0x00063fd8) list_single_loc_request_popup_menu_pane

0x132f,	// (0x0006396c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x132f,	// (0x0006396c) list_single_loc_request_popup_menu_pane_g1

0x133b,	// (0x00063978) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x133b,	// (0x00063978) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00071945) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00071945) list_single_loc_request_popup_menu_pane_g

0x1347,	// (0x00063984) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1347,	// (0x00063984) list_single_loc_request_popup_menu_pane_t1

0x991c,	// (0x0006bf59) bg_popup_window_pane_cp03_ParamLimits

0x991c,	// (0x0006bf59) bg_popup_window_pane_cp03

0x992a,	// (0x0006bf67) heading_loc_req_pane_ParamLimits

0x992a,	// (0x0006bf67) heading_loc_req_pane

0x9936,	// (0x0006bf73) popup_dyc_status_message_window_g1_ParamLimits

0x9936,	// (0x0006bf73) popup_dyc_status_message_window_g1

0x9942,	// (0x0006bf7f) popup_dyc_status_message_window_t1_ParamLimits

0x9942,	// (0x0006bf7f) popup_dyc_status_message_window_t1

0x9954,	// (0x0006bf91) popup_dyc_status_message_window_t2_ParamLimits

0x9954,	// (0x0006bf91) popup_dyc_status_message_window_t2

0x9966,	// (0x0006bfa3) popup_dyc_status_message_window_t3_ParamLimits

0x9966,	// (0x0006bfa3) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007194a) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007194a) popup_dyc_status_message_window_t

0x0855,	// (0x00062e92) bg_heading_pane_cp01

0x1369,	// (0x000639a6) heading_loc_req_pane_g1

0x1371,	// (0x000639ae) heading_loc_req_pane_g2

0x1379,	// (0x000639b6) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00071951) heading_loc_req_pane_g

0x1381,	// (0x000639be) heading_loc_req_pane_t1

0x1390,	// (0x000639cd) bg_popup_sub_pane_cp01_ParamLimits

0x1390,	// (0x000639cd) bg_popup_sub_pane_cp01

0x139e,	// (0x000639db) popup_cale_events_window_g1_ParamLimits

0x139e,	// (0x000639db) popup_cale_events_window_g1

0x13be,	// (0x000639fb) popup_cale_events_window_g2_ParamLimits

0x13be,	// (0x000639fb) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00071985) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00071985) popup_cale_events_window_g

0x13de,	// (0x00063a1b) popup_cale_events_window_t1_ParamLimits

0x13de,	// (0x00063a1b) popup_cale_events_window_t1

0x13f0,	// (0x00063a2d) popup_cale_events_window_t2_ParamLimits

0x13f0,	// (0x00063a2d) popup_cale_events_window_t2

0x142e,	// (0x00063a6b) popup_cale_events_window_t3_ParamLimits

0x142e,	// (0x00063a6b) popup_cale_events_window_t3

0x1468,	// (0x00063aa5) popup_cale_events_window_t4_ParamLimits

0x1468,	// (0x00063aa5) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007198a) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007198a) popup_cale_events_window_t

0x9990,	// (0x0006bfcd) call_type_pane

0x1962,	// (0x00063f9f) popup_call_status_window_g1

0x999c,	// (0x0006bfd9) popup_call_status_window_g2

0x99a8,	// (0x0006bfe5) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00071993) popup_call_status_window_g

0x149e,	// (0x00063adb) call_type_pane_g1

0x14a7,	// (0x00063ae4) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007199a) call_type_pane_g

0x0855,	// (0x00062e92) bg_popup_sub_pane_cp02

0x14b0,	// (0x00063aed) listscroll_popup_wml_pane

0x14b8,	// (0x00063af5) list_wml_pane

0x14c2,	// (0x00063aff) scroll_pane_cp013

0x99b4,	// (0x0006bff1) list_single_graphic_popup_wml_pane_ParamLimits

0x99b4,	// (0x0006bff1) list_single_graphic_popup_wml_pane

0x0c1c,	// (0x00063259) list_single_graphic_popup_wml_pane_g1

0x14cb,	// (0x00063b08) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007199f) list_single_graphic_popup_wml_pane_g

0x14d3,	// (0x00063b10) list_single_graphic_popup_wml_pane_t1

0x14e1,	// (0x00063b1e) aid_call_pane

0x0aa8,	// (0x000630e5) popup_clock_analogue_window_g1

0x0aa8,	// (0x000630e5) popup_clock_analogue_window_g2

0x99c8,	// (0x0006c005) popup_clock_analogue_window_g3

0x99c8,	// (0x0006c005) popup_clock_analogue_window_g4

0x0c1c,	// (0x00063259) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000719a4) popup_clock_analogue_window_g

0x99d0,	// (0x0006c00d) popup_clock_analogue_window_t1

0x99de,	// (0x0006c01b) clock_digital_number_pane_ParamLimits

0x99de,	// (0x0006c01b) clock_digital_number_pane

0x99ea,	// (0x0006c027) clock_digital_number_pane_cp02_ParamLimits

0x99ea,	// (0x0006c027) clock_digital_number_pane_cp02

0x99f6,	// (0x0006c033) clock_digital_number_pane_cp03_ParamLimits

0x99f6,	// (0x0006c033) clock_digital_number_pane_cp03

0x9a02,	// (0x0006c03f) clock_digital_number_pane_cp04_ParamLimits

0x9a02,	// (0x0006c03f) clock_digital_number_pane_cp04

0x9a0e,	// (0x0006c04b) clock_digital_separator_pane_ParamLimits

0x9a0e,	// (0x0006c04b) clock_digital_separator_pane

0x9a1a,	// (0x0006c057) popup_clock_digital_window_t1

0x0c1c,	// (0x00063259) clock_digital_number_pane_g1

0x0c1c,	// (0x00063259) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x00071912) clock_digital_number_pane_g

0x0c1c,	// (0x00063259) clock_digital_separator_pane_g1

0x0c1c,	// (0x00063259) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x00071912) clock_digital_separator_pane_g

0x0855,	// (0x00062e92) bg_popup_window_pane_cp04

0x1560,	// (0x00063b9d) heading_pane_cp03

0x1568,	// (0x00063ba5) listscroll_popup_gms_pane

0x1570,	// (0x00063bad) grid_large_graphic_popup_pane

0x157a,	// (0x00063bb7) listscroll_popup_gms_pane_g1

0x1582,	// (0x00063bbf) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000719af) listscroll_popup_gms_pane_g

0x0f8a,	// (0x000635c7) scroll_pane_cp014

0x9a37,	// (0x0006c074) cell_large_graphic_popup_pane_ParamLimits

0x9a37,	// (0x0006c074) cell_large_graphic_popup_pane

0x9a4e,	// (0x0006c08b) cell_large_graphic_popup_pane_g1_ParamLimits

0x9a4e,	// (0x0006c08b) cell_large_graphic_popup_pane_g1

0x158a,	// (0x00063bc7) cell_large_graphic_popup_pane_g2_ParamLimits

0x158a,	// (0x00063bc7) cell_large_graphic_popup_pane_g2

0x1596,	// (0x00063bd3) cell_large_graphic_popup_pane_g3_ParamLimits

0x1596,	// (0x00063bd3) cell_large_graphic_popup_pane_g3

0x15a3,	// (0x00063be0) cell_large_graphic_popup_pane_g4_ParamLimits

0x15a3,	// (0x00063be0) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000719b4) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000719b4) cell_large_graphic_popup_pane_g

0x15b3,	// (0x00063bf0) grid_highlight_pane_cp010

0x0c1c,	// (0x00063259) bg_popup_call_pane_g1

0x15bd,	// (0x00063bfa) list_single_graphic_popup_conf_pane_ParamLimits

0x15bd,	// (0x00063bfa) list_single_graphic_popup_conf_pane

0x15d0,	// (0x00063c0d) list_highlight_pane_cp01

0x15d9,	// (0x00063c16) list_single_graphic_popup_conf_pane_g1

0x15e1,	// (0x00063c1e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000719bd) list_single_graphic_popup_conf_pane_g

0x15e9,	// (0x00063c26) list_single_graphic_popup_conf_pane_t1

0x15f7,	// (0x00063c34) linegrid_cams_pane_g1

0x9a5a,	// (0x0006c097) linegrid_cams_pane_g2

0x0d26,	// (0x00063363) linegrid_cams_pane_g3

0x1600,	// (0x00063c3d) linegrid_cams_pane_g4

0x9a63,	// (0x0006c0a0) linegrid_cams_pane_g5

0x9a6c,	// (0x0006c0a9) linegrid_cams_pane_g6

0x0db9,	// (0x000633f6) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000719c2) linegrid_cams_pane_g

0x1609,	// (0x00063c46) popup_clock_analogue_window

0x1609,	// (0x00063c46) popup_clock_digital_window

0x0855,	// (0x00062e92) popup_phob_thumbnail_window

0x0c1c,	// (0x00063259) call_video_uplink_pane_g1

0x1612,	// (0x00063c4f) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000719d1) call_video_uplink_pane_g

0x0d86,	// (0x000633c3) video_uplink_pane

0x161a,	// (0x00063c57) mce_image_pane_g1

0x9a75,	// (0x0006c0b2) mce_image_pane_g2

0x9a7d,	// (0x0006c0ba) mce_image_pane_g3

0x9a85,	// (0x0006c0c2) mce_image_pane_g4

0x9a8d,	// (0x0006c0ca) mce_image_pane_g5

0x0004,

0xf399,	// (0x000719d6) mce_image_pane_g

0x1624,	// (0x00063c61) control_top_pane_stacon_cp01_ParamLimits

0x1624,	// (0x00063c61) control_top_pane_stacon_cp01

0x1634,	// (0x00063c71) uni_indicator_pane_stacon_cp01_ParamLimits

0x1634,	// (0x00063c71) uni_indicator_pane_stacon_cp01

0x1645,	// (0x00063c82) bg_popup_sub_pane_cp03

0x9a95,	// (0x0006c0d2) chi_dic_find_pane

0x9a9d,	// (0x0006c0da) listscroll_chi_dic_pane

0x9aa6,	// (0x0006c0e3) main_pane_chidic_g1

0x9ab7,	// (0x0006c0f4) chi_dic_find_pane_t1

0x164f,	// (0x00063c8c) find_chidic_pane

0x1658,	// (0x00063c95) chi_dic_list_pane_ParamLimits

0x1658,	// (0x00063c95) chi_dic_list_pane

0x1669,	// (0x00063ca6) scroll_pane_cp020

0x9ac5,	// (0x0006c102) find_chidic_pane_t1

0x0855,	// (0x00062e92) input_focus_pane_cp06

0x9ad4,	// (0x0006c111) list_chi_dic_pane_ParamLimits

0x9ad4,	// (0x0006c111) list_chi_dic_pane

0x9ae6,	// (0x0006c123) list_chi_dic_pane_t1_ParamLimits

0x9ae6,	// (0x0006c123) list_chi_dic_pane_t1

0x0855,	// (0x00062e92) list_highlight_pane_cp020

0x1671,	// (0x00063cae) bg_cale_heading_pane_g1

0x9af9,	// (0x0006c136) bg_cale_heading_pane_g2

0x9b01,	// (0x0006c13e) bg_cale_heading_pane_g3

0x9b09,	// (0x0006c146) bg_cale_heading_pane_g4

0x9b11,	// (0x0006c14e) bg_cale_heading_pane_g5

0x9b19,	// (0x0006c156) bg_cale_heading_pane_g6

0x9b21,	// (0x0006c15e) bg_cale_heading_pane_g7

0x9b29,	// (0x0006c166) bg_cale_heading_pane_g8

0x9b31,	// (0x0006c16e) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000719e1) bg_cale_heading_pane_g

0x1671,	// (0x00063cae) bg_cale_side_pane_g1

0x9b39,	// (0x0006c176) bg_cale_side_pane_g2

0x9b41,	// (0x0006c17e) bg_cale_side_pane_g3

0x9b49,	// (0x0006c186) bg_cale_side_pane_g4

0x9b51,	// (0x0006c18e) bg_cale_side_pane_g5

0x9b59,	// (0x0006c196) bg_cale_side_pane_g6

0x9b61,	// (0x0006c19e) bg_cale_side_pane_g7

0x9b69,	// (0x0006c1a6) bg_cale_side_pane_g8

0x9b71,	// (0x0006c1ae) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000719f4) bg_cale_side_pane_g

0x9b79,	// (0x0006c1b6) popup_call_status_window_ParamLimits

0x9b79,	// (0x0006c1b6) popup_call_status_window

0x1679,	// (0x00063cb6) stacon_top_pane

0x1681,	// (0x00063cbe) status_pane_ParamLimits

0x1681,	// (0x00063cbe) status_pane

0x1696,	// (0x00063cd3) status_small_pane

0x169e,	// (0x00063cdb) control_pane

0x0855,	// (0x00062e92) stacon_bottom_pane

0x16a6,	// (0x00063ce3) list_single_mce_smart_pane_t1_ParamLimits

0x16a6,	// (0x00063ce3) list_single_mce_smart_pane_t1

0x16b9,	// (0x00063cf6) list_single_mce_smart_pane_t2_ParamLimits

0x16b9,	// (0x00063cf6) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00071a07) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00071a07) list_single_mce_smart_pane_t

0x9b85,	// (0x0006c1c2) compass_pane

0x9b8e,	// (0x0006c1cb) main_location2_pane_t1

0x9ba0,	// (0x0006c1dd) main_location2_pane_t2

0x9bb2,	// (0x0006c1ef) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00071a0c) main_location2_pane_t

0x16d8,	// (0x00063d15) compass_pane_g1_ParamLimits

0x16d8,	// (0x00063d15) compass_pane_g1

0x9bf6,	// (0x0006c233) compass_pane_t1

0x9c05,	// (0x0006c242) compass_pane_t2

0x0005,

0xf3d8,	// (0x00071a15) compass_pane_t

0x9c4c,	// (0x0006c289) text_secondary_cp61

0x1754,	// (0x00063d91) navi_pane_cams_g5

0x17ce,	// (0x00063e0b) navi_pane_im_t1

0x17dc,	// (0x00063e19) navi_pane_mp_g1_ParamLimits

0x17dc,	// (0x00063e19) navi_pane_mp_g1

0x17f0,	// (0x00063e2d) navi_pane_mp_g2_ParamLimits

0x17f0,	// (0x00063e2d) navi_pane_mp_g2

0x17fc,	// (0x00063e39) navi_pane_mp_g3_ParamLimits

0x17fc,	// (0x00063e39) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00071a29) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00071a29) navi_pane_mp_g

0x1808,	// (0x00063e45) navi_pane_mp_t1

0x1816,	// (0x00063e53) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00071a30) navi_pane_mp_t

0x1881,	// (0x00063ebe) navi_pane_vt_g1

0x1808,	// (0x00063e45) navi_pane_vt_t1

0x1889,	// (0x00063ec6) navi_slider_pane

0x0dca,	// (0x00063407) zooming_pane

0x1899,	// (0x00063ed6) navi_slider_pane_g1

0x9c87,	// (0x0006c2c4) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00071a37) navi_slider_pane_g

0x18cf,	// (0x00063f0c) aid_levels_zoom

0x18d7,	// (0x00063f14) zooming_pane_g1

0x18df,	// (0x00063f1c) zooming_pane_g2

0x18df,	// (0x00063f1c) zooming_pane_g3

0x0002,

0xf409,	// (0x00071a46) zooming_pane_g

0x18e7,	// (0x00063f24) level_10_zoom

0x18f0,	// (0x00063f2d) level_11_zoom

0x18f9,	// (0x00063f36) level_1_zoom

0x1902,	// (0x00063f3f) level_2_zoom

0x190b,	// (0x00063f48) level_3_zoom

0x1914,	// (0x00063f51) level_4_zoom

0x191d,	// (0x00063f5a) level_5_zoom

0x1926,	// (0x00063f63) level_6_zoom

0x192f,	// (0x00063f6c) level_7_zoom

0x1938,	// (0x00063f75) level_8_zoom

0x1941,	// (0x00063f7e) level_9_zoom

0x1952,	// (0x00063f8f) popup_phob_thumbnail_window_g1

0x195a,	// (0x00063f97) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00071a4d) popup_phob_thumbnail_window_g

0x4f9d,	// (0x000675da) level_1_location

0x4fa5,	// (0x000675e2) level_2_location

0x4fad,	// (0x000675ea) level_3_location

0x4fb5,	// (0x000675f2) level_4_location

0x0dca,	// (0x00063407) level_5_location

0x9c99,	// (0x0006c2d6) mce_icon_pane_g1

0x9ca1,	// (0x0006c2de) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00071a52) mce_icon_pane_g

0x9ca9,	// (0x0006c2e6) main_mup_pane_g1_ParamLimits

0x9ca9,	// (0x0006c2e6) main_mup_pane_g1

0x9cc1,	// (0x0006c2fe) main_mup_pane_g2_ParamLimits

0x9cc1,	// (0x0006c2fe) main_mup_pane_g2

0x9cdd,	// (0x0006c31a) main_mup_pane_g3_ParamLimits

0x9cdd,	// (0x0006c31a) main_mup_pane_g3

0x9cf9,	// (0x0006c336) main_mup_pane_g4_ParamLimits

0x9cf9,	// (0x0006c336) main_mup_pane_g4

0x9d15,	// (0x0006c352) main_mup_pane_g5_ParamLimits

0x9d15,	// (0x0006c352) main_mup_pane_g5

0x9d32,	// (0x0006c36f) main_mup_pane_g6_ParamLimits

0x9d32,	// (0x0006c36f) main_mup_pane_g6

0x9d4e,	// (0x0006c38b) main_mup_pane_g7_ParamLimits

0x9d4e,	// (0x0006c38b) main_mup_pane_g7

0x9d6a,	// (0x0006c3a7) main_mup_pane_g8_ParamLimits

0x9d6a,	// (0x0006c3a7) main_mup_pane_g8

0x9d86,	// (0x0006c3c3) main_mup_pane_g9_ParamLimits

0x9d86,	// (0x0006c3c3) main_mup_pane_g9

0x9d9d,	// (0x0006c3da) main_mup_pane_g10_ParamLimits

0x9d9d,	// (0x0006c3da) main_mup_pane_g10

0x9db4,	// (0x0006c3f1) main_mup_pane_g11_ParamLimits

0x9db4,	// (0x0006c3f1) main_mup_pane_g11

0x9dc8,	// (0x0006c405) main_mup_pane_g12_ParamLimits

0x9dc8,	// (0x0006c405) main_mup_pane_g12

0x9dd4,	// (0x0006c411) main_mup_pane_g13_ParamLimits

0x9dd4,	// (0x0006c411) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00071a57) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00071a57) main_mup_pane_g

0x9de8,	// (0x0006c425) main_mup_pane_t1_ParamLimits

0x9de8,	// (0x0006c425) main_mup_pane_t1

0x9e05,	// (0x0006c442) main_mup_pane_t2_ParamLimits

0x9e05,	// (0x0006c442) main_mup_pane_t2

0x9e1f,	// (0x0006c45c) main_mup_pane_t3_ParamLimits

0x9e1f,	// (0x0006c45c) main_mup_pane_t3

0x9e39,	// (0x0006c476) main_mup_pane_t4_ParamLimits

0x9e39,	// (0x0006c476) main_mup_pane_t4

0x9e4b,	// (0x0006c488) main_mup_pane_t5_ParamLimits

0x9e4b,	// (0x0006c488) main_mup_pane_t5

0x9e5d,	// (0x0006c49a) main_mup_pane_t6_ParamLimits

0x9e5d,	// (0x0006c49a) main_mup_pane_t6

0x0005,

0xf435,	// (0x00071a72) main_mup_pane_t_ParamLimits

0xf435,	// (0x00071a72) main_mup_pane_t

0x9e73,	// (0x0006c4b0) mup_progress_pane_ParamLimits

0x9e73,	// (0x0006c4b0) mup_progress_pane

0x9e7f,	// (0x0006c4bc) mup_visualizer_pane_ParamLimits

0x9e7f,	// (0x0006c4bc) mup_visualizer_pane

0x9ead,	// (0x0006c4ea) mup_volume_pane_ParamLimits

0x9ead,	// (0x0006c4ea) mup_volume_pane

0x1962,	// (0x00063f9f) mup_visualizer_pane_g1_ParamLimits

0x1962,	// (0x00063f9f) mup_visualizer_pane_g1

0x1962,	// (0x00063f9f) mup_visualizer_pane_g2_ParamLimits

0x1962,	// (0x00063f9f) mup_visualizer_pane_g2

0x16d8,	// (0x00063d15) mup_visualizer_pane_g3_ParamLimits

0x16d8,	// (0x00063d15) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00071a7f) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00071a7f) mup_visualizer_pane_g

0x0c1c,	// (0x00063259) mup_volume_pane_g1

0x1978,	// (0x00063fb5) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00071a86) mup_volume_pane_g

0x0c1c,	// (0x00063259) mup_progress_pane_g1

0x1981,	// (0x00063fbe) mup_progress_pane_g2

0x198a,	// (0x00063fc7) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00071a8b) mup_progress_pane_g

0x0855,	// (0x00062e92) bg_popup_window_pane_cp05

0x9ed0,	// (0x0006c50d) heading_pane_cp02_ParamLimits

0x9ed0,	// (0x0006c50d) heading_pane_cp02

0x1993,	// (0x00063fd0) list_popup_blid_pane

0x9eea,	// (0x0006c527) list_blid_sat_info_pane_ParamLimits

0x9eea,	// (0x0006c527) list_blid_sat_info_pane

0x19ad,	// (0x00063fea) list_blid_sat_info_pane_g1

0x19b5,	// (0x00063ff2) list_blid_sat_info_pane_t1

0x9fcd,	// (0x0006c60a) mup_equalizer_pane_ParamLimits

0x9fcd,	// (0x0006c60a) mup_equalizer_pane

0x9fe6,	// (0x0006c623) mup_equalizer_pane_cp1_ParamLimits

0x9fe6,	// (0x0006c623) mup_equalizer_pane_cp1

0x9fff,	// (0x0006c63c) mup_equalizer_pane_cp2_ParamLimits

0x9fff,	// (0x0006c63c) mup_equalizer_pane_cp2

0xa018,	// (0x0006c655) mup_equalizer_pane_cp3_ParamLimits

0xa018,	// (0x0006c655) mup_equalizer_pane_cp3

0xa031,	// (0x0006c66e) mup_equalizer_pane_cp4_ParamLimits

0xa031,	// (0x0006c66e) mup_equalizer_pane_cp4

0xa04a,	// (0x0006c687) mup_equalizer_pane_cp5

0xa05c,	// (0x0006c699) mup_equalizer_pane_cp6

0xa06e,	// (0x0006c6ab) mup_equalizer_pane_cp7

0x4e7b,	// (0x000674b8) bg_popup_call_poc_act_pane_g9

0x4e83,	// (0x000674c0) bg_popup_call_poc_act_pane_g10

0x4e8b,	// (0x000674c8) bg_popup_call_poc_act_pane_g11

0x000a,

0x0ab0,	// (0x000630ed) mup_scale_pane

0x0c1c,	// (0x00063259) mup_scale_pane_g1

0x19c3,	// (0x00064000) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00071aa7) mup_scale_pane_g

0x19e7,	// (0x00064024) msg_data_pane

0x19ef,	// (0x0006402c) scroll_pane_cp017

0xa092,	// (0x0006c6cf) bg_list_pane_cp04_ParamLimits

0xa092,	// (0x0006c6cf) bg_list_pane_cp04

0x19f7,	// (0x00064034) msg_data_pane_g1

0xa0aa,	// (0x0006c6e7) msg_data_pane_g2

0xa0b2,	// (0x0006c6ef) msg_data_pane_g3

0xa0ba,	// (0x0006c6f7) msg_data_pane_g4

0xa0c2,	// (0x0006c6ff) msg_data_pane_g5

0x9c99,	// (0x0006c2d6) msg_data_pane_g6

0xa0ca,	// (0x0006c707) msg_data_pane_g7

0x0006,

0xf479,	// (0x00071ab6) msg_data_pane_g

0xa0d2,	// (0x0006c70f) msg_text_pane_ParamLimits

0xa0d2,	// (0x0006c70f) msg_text_pane

0xa0f5,	// (0x0006c732) qrid_highlight_pane_cp011_ParamLimits

0xa0f5,	// (0x0006c732) qrid_highlight_pane_cp011

0x0855,	// (0x00062e92) msg_body_pane

0x0855,	// (0x00062e92) msg_header_pane

0x1a08,	// (0x00064045) input_focus_pane_cp07

0xa10b,	// (0x0006c748) msg_header_pane_t1_ParamLimits

0xa10b,	// (0x0006c748) msg_header_pane_t1

0x6c0f,	// (0x0006924c) msg_header_pane_t2_ParamLimits

0x6c0f,	// (0x0006924c) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00071aca) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00071aca) msg_header_pane_t

0x1a1d,	// (0x0006405a) msg_body_pane_g1

0x6c21,	// (0x0006925e) msg_body_pane_t1_ParamLimits

0x6c21,	// (0x0006925e) msg_body_pane_t1

0x6c52,	// (0x0006928f) msg_body_pane_t2_ParamLimits

0x6c52,	// (0x0006928f) msg_body_pane_t2

0x6c64,	// (0x000692a1) msg_body_pane_t3_ParamLimits

0x6c64,	// (0x000692a1) msg_body_pane_t3

0x0002,

0xf492,	// (0x00071acf) msg_body_pane_t_ParamLimits

0xf492,	// (0x00071acf) msg_body_pane_t

0xa16b,	// (0x0006c7a8) main_viewer_pane_g1_ParamLimits

0xa16b,	// (0x0006c7a8) main_viewer_pane_g1

0xa177,	// (0x0006c7b4) main_viewer_pane_g2_ParamLimits

0xa177,	// (0x0006c7b4) main_viewer_pane_g2

0xa183,	// (0x0006c7c0) main_viewer_pane_g3_ParamLimits

0xa183,	// (0x0006c7c0) main_viewer_pane_g3

0xa192,	// (0x0006c7cf) main_viewer_pane_g4_ParamLimits

0xa192,	// (0x0006c7cf) main_viewer_pane_g4

0xa1a1,	// (0x0006c7de) main_viewer_pane_g5_ParamLimits

0xa1a1,	// (0x0006c7de) main_viewer_pane_g5

0xa1a1,	// (0x0006c7de) main_viewer_pane_g7_ParamLimits

0xa1a1,	// (0x0006c7de) main_viewer_pane_g7

0xa1b3,	// (0x0006c7f0) main_viewer_pane_g8_ParamLimits

0xa1b3,	// (0x0006c7f0) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00071adf) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00071adf) main_viewer_pane_g

0x1a67,	// (0x000640a4) viewer_content_pane_ParamLimits

0x1a67,	// (0x000640a4) viewer_content_pane

0xa1e3,	// (0x0006c820) main_postcard_pane_g1_ParamLimits

0xa1e3,	// (0x0006c820) main_postcard_pane_g1

0xa1ef,	// (0x0006c82c) main_postcard_pane_g2_ParamLimits

0xa1ef,	// (0x0006c82c) main_postcard_pane_g2

0xa1fb,	// (0x0006c838) main_postcard_pane_g3_ParamLimits

0xa1fb,	// (0x0006c838) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00071af0) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00071af0) main_postcard_pane_g

0xa207,	// (0x0006c844) main_postcard_pane_g4

0x508a,	// (0x000676c7) smil_status_volume_pane_g2

0xa22b,	// (0x0006c868) postcard_pane_ParamLimits

0xa22b,	// (0x0006c868) postcard_pane

0x1962,	// (0x00063f9f) postcard_pane_g1_ParamLimits

0x1962,	// (0x00063f9f) postcard_pane_g1

0xa25b,	// (0x0006c898) postcard_pane_g2_ParamLimits

0xa25b,	// (0x0006c898) postcard_pane_g2

0xa267,	// (0x0006c8a4) postcard_pane_g3_ParamLimits

0xa267,	// (0x0006c8a4) postcard_pane_g3

0x1a83,	// (0x000640c0) postcard_pane_g4_ParamLimits

0x1a83,	// (0x000640c0) postcard_pane_g4

0xa273,	// (0x0006c8b0) postcard_pane_g5_ParamLimits

0xa273,	// (0x0006c8b0) postcard_pane_g5

0xa27f,	// (0x0006c8bc) postcard_pane_g6_ParamLimits

0xa27f,	// (0x0006c8bc) postcard_pane_g6

0x1a75,	// (0x000640b2) postcard_pane_g7_ParamLimits

0x1a75,	// (0x000640b2) postcard_pane_g7

0x0006,

0xf4c0,	// (0x00071afd) postcard_pane_g_ParamLimits

0xf4c0,	// (0x00071afd) postcard_pane_g

0xa28b,	// (0x0006c8c8) main_mp2_pane_g1_ParamLimits

0xa28b,	// (0x0006c8c8) main_mp2_pane_g1

0xa297,	// (0x0006c8d4) main_mp2_pane_g2_ParamLimits

0xa297,	// (0x0006c8d4) main_mp2_pane_g2

0xa2a3,	// (0x0006c8e0) main_mp2_pane_g3_ParamLimits

0xa2a3,	// (0x0006c8e0) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x00071b0c) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x00071b0c) main_mp2_pane_g

0xa2af,	// (0x0006c8ec) main_mp2_pane_t1_ParamLimits

0xa2af,	// (0x0006c8ec) main_mp2_pane_t1

0xa2c4,	// (0x0006c901) main_mp2_pane_t2_ParamLimits

0xa2c4,	// (0x0006c901) main_mp2_pane_t2

0xa2d6,	// (0x0006c913) main_mp2_pane_t3_ParamLimits

0xa2d6,	// (0x0006c913) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x00071b13) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x00071b13) main_mp2_pane_t

0x1a91,	// (0x000640ce) pec_content_pane_ParamLimits

0x1a91,	// (0x000640ce) pec_content_pane

0x0f8a,	// (0x000635c7) scroll_pane_cp015

0x1aa3,	// (0x000640e0) pec_attribute_pane_ParamLimits

0x1aa3,	// (0x000640e0) pec_attribute_pane

0xa2e8,	// (0x0006c925) pec_content_pane_g1_ParamLimits

0xa2e8,	// (0x0006c925) pec_content_pane_g1

0x1ab3,	// (0x000640f0) pec_content_pane_t1_ParamLimits

0x1ab3,	// (0x000640f0) pec_content_pane_t1

0x1ac5,	// (0x00064102) pec_content_pane_t2_ParamLimits

0x1ac5,	// (0x00064102) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00071b1a) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00071b1a) pec_content_pane_t

0xa2f4,	// (0x0006c931) list_single_graphic_pane_cp01_ParamLimits

0xa2f4,	// (0x0006c931) list_single_graphic_pane_cp01

0x0ab0,	// (0x000630ed) bg_popup_sub_pane_cp04

0x1ad7,	// (0x00064114) popup_mup_playback_window_g1

0x1ae3,	// (0x00064120) popup_mup_playback_window_t1

0x1af8,	// (0x00064135) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00071b1f) popup_mup_playback_window_t

0x1b2f,	// (0x0006416c) main_image_pane_g1_ParamLimits

0x1b2f,	// (0x0006416c) main_image_pane_g1

0x1b72,	// (0x000641af) scroll_pane_cp018_ParamLimits

0x1b72,	// (0x000641af) scroll_pane_cp018

0x1b8a,	// (0x000641c7) scroll_pane_cp016_ParamLimits

0x1b8a,	// (0x000641c7) scroll_pane_cp016

0xa378,	// (0x0006c9b5) smil2_image_pane_ParamLimits

0xa378,	// (0x0006c9b5) smil2_image_pane

0xa3a0,	// (0x0006c9dd) smil2_root_pane_ParamLimits

0xa3a0,	// (0x0006c9dd) smil2_root_pane

0xa3cc,	// (0x0006ca09) smil2_text_pane_ParamLimits

0xa3cc,	// (0x0006ca09) smil2_text_pane

0x0855,	// (0x00062e92) bg_list_pane_cp06

0xa408,	// (0x0006ca45) grid_radio_pane

0x0855,	// (0x00062e92) bg_popup_window_pane_cp06

0x1bbe,	// (0x000641fb) main_fmradio_pane_t1

0x1560,	// (0x00063b9d) heading_pane_cp04

0x1bcc,	// (0x00064209) main_fmradio_pane_t2

0x4ed3,	// (0x00067510) popup_cale_lunar_info_window_g1

0x1bda,	// (0x00064217) main_fmradio_pane_t3

0x4edb,	// (0x00067518) popup_cale_lunar_info_window_g2

0x1be8,	// (0x00064225) main_fmradio_pane_t4

0x0001,

0x1bf6,	// (0x00064233) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x00071c0d) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00071b34) main_fmradio_pane_t

0x1c04,	// (0x00064241) wait_bar_pane_cp03

0xa410,	// (0x0006ca4d) cell_fmradio_pane_ParamLimits

0xa410,	// (0x0006ca4d) cell_fmradio_pane

0x1a75,	// (0x000640b2) cell_fmradio_pane_g1_ParamLimits

0x1a75,	// (0x000640b2) cell_fmradio_pane_g1

0x0855,	// (0x00062e92) grid_highlight_pane_cp011

0x1c0c,	// (0x00064249) poc_content_pane_ParamLimits

0x1c0c,	// (0x00064249) poc_content_pane

0x1c1e,	// (0x0006425b) scroll_pane_cp019

0xa423,	// (0x0006ca60) popup_call_poc_act_window_ParamLimits

0xa423,	// (0x0006ca60) popup_call_poc_act_window

0xa430,	// (0x0006ca6d) popup_call_poc_inact_window_ParamLimits

0xa430,	// (0x0006ca6d) popup_call_poc_inact_window

0xf594,	// (0x00071bd1) bg_popup_call_poc_act_pane_g

0x4e93,	// (0x000674d0) bg_popup_call_poc_inact_pane_g1

0x4e9b,	// (0x000674d8) bg_popup_call_poc_inact_pane_g2

0x1c26,	// (0x00064263) popup_call_poc_act_window_g2

0x4ea3,	// (0x000674e0) bg_popup_call_poc_inact_pane_g3

0x4e23,	// (0x00067460) bg_popup_call_poc_inact_pane_g4

0x4eab,	// (0x000674e8) bg_popup_call_poc_inact_pane_g5

0x1c2e,	// (0x0006426b) popup_call_poc_act_window_t1_ParamLimits

0x1c2e,	// (0x0006426b) popup_call_poc_act_window_t1

0x1c56,	// (0x00064293) popup_call_poc_act_window_t2_ParamLimits

0x1c56,	// (0x00064293) popup_call_poc_act_window_t2

0x1c7e,	// (0x000642bb) popup_call_poc_act_window_t3_ParamLimits

0x1c7e,	// (0x000642bb) popup_call_poc_act_window_t3

0x1ca6,	// (0x000642e3) popup_call_poc_act_window_t4_ParamLimits

0x1ca6,	// (0x000642e3) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00071b3f) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00071b3f) popup_call_poc_act_window_t

0x4eb3,	// (0x000674f0) bg_popup_call_poc_inact_pane_g6

0x4ebb,	// (0x000674f8) bg_popup_call_poc_inact_pane_g7

0x4ec3,	// (0x00067500) bg_popup_call_poc_inact_pane_g8

0x1cb8,	// (0x000642f5) popup_call_poc_inact_window_g2

0x4ecb,	// (0x00067508) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x00071be8) bg_popup_call_poc_inact_pane_g

0x1cc0,	// (0x000642fd) popup_call_poc_inact_window_t1_ParamLimits

0x1cc0,	// (0x000642fd) popup_call_poc_inact_window_t1

0x1cd5,	// (0x00064312) popup_call_poc_inact_window_t2_ParamLimits

0x1cd5,	// (0x00064312) popup_call_poc_inact_window_t2

0x1cea,	// (0x00064327) popup_call_poc_inact_window_t3_ParamLimits

0x1cea,	// (0x00064327) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00071b48) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00071b48) popup_call_poc_inact_window_t

0x5010,	// (0x0006764d) context_pane_ParamLimits

0xa97c,	// (0x0006cfb9) signal_pane_ParamLimits

0x0dca,	// (0x00063407) main_call2_pane

0xa8f8,	// (0x0006cf35) popup_phob_thumbnail2_window_ParamLimits

0xa8f8,	// (0x0006cf35) popup_phob_thumbnail2_window

0xa11d,	// (0x0006c75a) aid_hotspot_pointer_arrow_pane

0xa125,	// (0x0006c762) aid_hotspot_pointer_hand_pane

0xa6dd,	// (0x0006cd1a) phob_pre_status_pane_g5

0x8afb,	// (0x0006b138) cams_zoom_pane_ParamLimits

0x8b07,	// (0x0006b144) image_vga_pane_ParamLimits

0x8b14,	// (0x0006b151) main_camera_pane_g1_ParamLimits

0x8b20,	// (0x0006b15d) main_camera_pane_g2_ParamLimits

0x8b2c,	// (0x0006b169) main_camera_pane_g3_ParamLimits

0x8b38,	// (0x0006b175) main_camera_pane_g4_ParamLimits

0x8b44,	// (0x0006b181) main_camera_pane_g5_ParamLimits

0x8b50,	// (0x0006b18d) main_camera_pane_g6_ParamLimits

0x8b5c,	// (0x0006b199) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00071847) main_camera_pane_g_ParamLimits

0x8b68,	// (0x0006b1a5) main_camera_pane_t1_ParamLimits

0x8b7a,	// (0x0006b1b7) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00071858) main_camera_pane_t_ParamLimits

0x0ab0,	// (0x000630ed) bg_popup_preview_window_pane_cp01_ParamLimits

0x0ab0,	// (0x000630ed) bg_popup_preview_window_pane_cp01

0x1cff,	// (0x0006433c) popup_phob_thumbnail2_window_g1_ParamLimits

0x1cff,	// (0x0006433c) popup_phob_thumbnail2_window_g1

0x0855,	// (0x00062e92) call2_cli_visual_pane

0xa44c,	// (0x0006ca89) popup_call2_audio_conf_window_ParamLimits

0xa44c,	// (0x0006ca89) popup_call2_audio_conf_window

0xa45f,	// (0x0006ca9c) popup_call2_audio_first_window_ParamLimits

0xa45f,	// (0x0006ca9c) popup_call2_audio_first_window

0xa4db,	// (0x0006cb18) popup_call2_audio_in_window_ParamLimits

0xa4db,	// (0x0006cb18) popup_call2_audio_in_window

0xa50b,	// (0x0006cb48) popup_call2_audio_out_window_ParamLimits

0xa50b,	// (0x0006cb48) popup_call2_audio_out_window

0xa557,	// (0x0006cb94) popup_call2_audio_second_window_ParamLimits

0xa557,	// (0x0006cb94) popup_call2_audio_second_window

0xa5a3,	// (0x0006cbe0) popup_call2_audio_wait_window_ParamLimits

0xa5a3,	// (0x0006cbe0) popup_call2_audio_wait_window

0x0855,	// (0x00062e92) bg_popup_call2_act_pane_cp03

0x0a92,	// (0x000630cf) list_conf_pane_cp

0x1d0b,	// (0x00064348) popup_call2_audio_conf_window_t1

0x15bd,	// (0x00063bfa) list_single_graphic_popup_conf2_pane_ParamLimits

0x15bd,	// (0x00063bfa) list_single_graphic_popup_conf2_pane

0x15d0,	// (0x00063c0d) list_highlight_pane_cp04

0x1d19,	// (0x00064356) list_single_graphic_popup_conf2_pane_g1

0x15e1,	// (0x00063c1e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00071b4f) list_single_graphic_popup_conf2_pane_g

0x1d21,	// (0x0006435e) list_single_graphic_popup_conf2_pane_t1

0x1d2f,	// (0x0006436c) bg_popup_call2_act_pane_cp01_ParamLimits

0x1d2f,	// (0x0006436c) bg_popup_call2_act_pane_cp01

0x1db9,	// (0x000643f6) call_type_pane_cp05_ParamLimits

0x1db9,	// (0x000643f6) call_type_pane_cp05

0x1e0d,	// (0x0006444a) popup_call2_audio_second_window_g1_ParamLimits

0x1e0d,	// (0x0006444a) popup_call2_audio_second_window_g1

0x1e61,	// (0x0006449e) popup_call2_audio_second_window_g2_ParamLimits

0x1e61,	// (0x0006449e) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00071b54) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00071b54) popup_call2_audio_second_window_g

0x1ec6,	// (0x00064503) popup_call2_audio_second_window_t1_ParamLimits

0x1ec6,	// (0x00064503) popup_call2_audio_second_window_t1

0x1f81,	// (0x000645be) popup_call2_audio_second_window_t2_ParamLimits

0x1f81,	// (0x000645be) popup_call2_audio_second_window_t2

0x1fd4,	// (0x00064611) popup_call2_audio_second_window_t3_ParamLimits

0x1fd4,	// (0x00064611) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00071b5b) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00071b5b) popup_call2_audio_second_window_t

0x0855,	// (0x00062e92) bg_popup_call2_in_pane_cp02

0x085f,	// (0x00062e9c) call_type_pane_cp04

0x0867,	// (0x00062ea4) popup_call2_audio_wait_window_g1

0x086f,	// (0x00062eac) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00071736) popup_call2_audio_wait_window_g

0x0877,	// (0x00062eb4) popup_call2_audio_wait_window_t3

0x20c7,	// (0x00064704) bg_popup_call2_act_pane_ParamLimits

0x20c7,	// (0x00064704) bg_popup_call2_act_pane

0x2187,	// (0x000647c4) call_type_pane_cp03_ParamLimits

0x2187,	// (0x000647c4) call_type_pane_cp03

0x21eb,	// (0x00064828) popup_call2_audio_first_window_g1_ParamLimits

0x21eb,	// (0x00064828) popup_call2_audio_first_window_g1

0x4572,	// (0x00066baf) popup_call2_audio_first_window_g2_ParamLimits

0x4572,	// (0x00066baf) popup_call2_audio_first_window_g2

0x1962,	// (0x00063f9f) popup_call2_audio_first_window_g3_ParamLimits

0x1962,	// (0x00063f9f) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00071b64) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00071b64) popup_call2_audio_first_window_g

0x4650,	// (0x00066c8d) popup_call2_audio_first_window_t1_ParamLimits

0x4650,	// (0x00066c8d) popup_call2_audio_first_window_t1

0x4753,	// (0x00066d90) popup_call2_audio_first_window_t4_ParamLimits

0x4753,	// (0x00066d90) popup_call2_audio_first_window_t4

0x4836,	// (0x00066e73) popup_call2_audio_first_window_t5_ParamLimits

0x4836,	// (0x00066e73) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00071b6f) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00071b6f) popup_call2_audio_first_window_t

0x0aa8,	// (0x000630e5) bg_popup_call2_act_pane_g1

0x4ee3,	// (0x00067520) popup_cale_lunar_info_window_t1

0x4ef1,	// (0x0006752e) popup_cale_lunar_info_window_t2

0x4eff,	// (0x0006753c) popup_cale_lunar_info_window_t3

0x0855,	// (0x00062e92) bg_popup_call2_bubble_pane

0x4937,	// (0x00066f74) bg_popup_call2_in_pane_cp01_ParamLimits

0x4937,	// (0x00066f74) bg_popup_call2_in_pane_cp01

0x0531,	// (0x00062b6e) call_type_pane_cp02

0x497f,	// (0x00066fbc) popup_call2_audio_out_window_g1_ParamLimits

0x497f,	// (0x00066fbc) popup_call2_audio_out_window_g1

0x49ab,	// (0x00066fe8) popup_call2_audio_out_window_g2_ParamLimits

0x49ab,	// (0x00066fe8) popup_call2_audio_out_window_g2

0x49d3,	// (0x00067010) popup_call2_audio_out_window_g3_ParamLimits

0x49d3,	// (0x00067010) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00071b78) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00071b78) popup_call2_audio_out_window_g

0x4a0e,	// (0x0006704b) popup_call2_audio_out_window_t1_ParamLimits

0x4a0e,	// (0x0006704b) popup_call2_audio_out_window_t1

0x4a6d,	// (0x000670aa) popup_call2_audio_out_window_t2_ParamLimits

0x4a6d,	// (0x000670aa) popup_call2_audio_out_window_t2

0x4ac1,	// (0x000670fe) popup_call2_audio_out_window_t3_ParamLimits

0x4ac1,	// (0x000670fe) popup_call2_audio_out_window_t3

0x4ad7,	// (0x00067114) popup_call2_audio_out_window_t4_ParamLimits

0x4ad7,	// (0x00067114) popup_call2_audio_out_window_t4

0x4aed,	// (0x0006712a) popup_call2_audio_out_window_t5_ParamLimits

0x4aed,	// (0x0006712a) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00071b81) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00071b81) popup_call2_audio_out_window_t

0x4b51,	// (0x0006718e) bg_popup_call2_in_pane_ParamLimits

0x4b51,	// (0x0006718e) bg_popup_call2_in_pane

0x4bad,	// (0x000671ea) popup_call2_audio_in_window_g1_ParamLimits

0x4bad,	// (0x000671ea) popup_call2_audio_in_window_g1

0x4be5,	// (0x00067222) popup_call2_audio_in_window_g2_ParamLimits

0x4be5,	// (0x00067222) popup_call2_audio_in_window_g2

0x4c1d,	// (0x0006725a) popup_call2_audio_in_window_g3_ParamLimits

0x4c1d,	// (0x0006725a) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00071b8e) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00071b8e) popup_call2_audio_in_window_g

0x4c75,	// (0x000672b2) popup_call2_audio_in_window_t1_ParamLimits

0x4c75,	// (0x000672b2) popup_call2_audio_in_window_t1

0x4cf5,	// (0x00067332) popup_call2_audio_in_window_t2_ParamLimits

0x4cf5,	// (0x00067332) popup_call2_audio_in_window_t2

0x4d75,	// (0x000673b2) popup_call2_audio_in_window_t3_ParamLimits

0x4d75,	// (0x000673b2) popup_call2_audio_in_window_t3

0x4d8f,	// (0x000673cc) popup_call2_audio_in_window_t4_ParamLimits

0x4d8f,	// (0x000673cc) popup_call2_audio_in_window_t4

0x4da1,	// (0x000673de) popup_call2_audio_in_window_t5_ParamLimits

0x4da1,	// (0x000673de) popup_call2_audio_in_window_t5

0x4db6,	// (0x000673f3) popup_call2_audio_in_window_t6_ParamLimits

0x4db6,	// (0x000673f3) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00071b97) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00071b97) popup_call2_audio_in_window_t

0x0aa8,	// (0x000630e5) bg_popup_call2_in_pane_g1

0x4f0d,	// (0x0006754a) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x00071c12) popup_cale_lunar_info_window_t

0x0ab0,	// (0x000630ed) bg_popup_call2_rect_pane_ParamLimits

0x0ab0,	// (0x000630ed) bg_popup_call2_rect_pane

0x0855,	// (0x00062e92) call2_cli_visual_graphic_pane

0x0855,	// (0x00062e92) call2_cli_visual_text_pane

0xaa01,	// (0x0006d03e) smil_status_volume_pane_g3

0x0002,

0x0c1c,	// (0x00063259) call2_cli_visual_graphic_pane_g1

0x0c1c,	// (0x00063259) call2_cli_visual_graphic_pane_g2

0x0c1c,	// (0x00063259) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00071ba4) call2_cli_visual_graphic_pane_g

0x4dcb,	// (0x00067408) bg_popup_call2_rect_pane_g1

0x0cc4,	// (0x00063301) bg_popup_call2_rect_pane_g2

0x4dd3,	// (0x00067410) bg_popup_call2_rect_pane_g3

0x4ddb,	// (0x00067418) bg_popup_call2_rect_pane_g4

0x4de3,	// (0x00067420) bg_popup_call2_rect_pane_g5

0x4deb,	// (0x00067428) bg_popup_call2_rect_pane_g6

0x4df3,	// (0x00067430) bg_popup_call2_rect_pane_g7

0x4dfb,	// (0x00067438) bg_popup_call2_rect_pane_g8

0x4e03,	// (0x00067440) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00071bab) bg_popup_call2_rect_pane_g

0x4e0b,	// (0x00067448) bg_popup_call2_bubble_pane_g1

0x4e13,	// (0x00067450) bg_popup_call2_bubble_pane_g2

0x4e1b,	// (0x00067458) bg_popup_call2_bubble_pane_g3

0x4e23,	// (0x00067460) bg_popup_call2_bubble_pane_g4

0x4e2b,	// (0x00067468) bg_popup_call2_bubble_pane_g5

0x4e33,	// (0x00067470) bg_popup_call2_bubble_pane_g6

0x4e3b,	// (0x00067478) bg_popup_call2_bubble_pane_g7

0x4e43,	// (0x00067480) bg_popup_call2_bubble_pane_g8

0x4e4b,	// (0x00067488) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00071bbe) bg_popup_call2_bubble_pane_g

0x83e3,	// (0x0006aa20) aid_cale_week_size_cell_pane

0x8b8c,	// (0x0006b1c9) aid_cams_cif_uncrop_pane_ParamLimits

0x8b8c,	// (0x0006b1c9) aid_cams_cif_uncrop_pane

0x8ce4,	// (0x0006b321) aid_cams_size_cell_ParamLimits

0x8ce4,	// (0x0006b321) aid_cams_size_cell

0x8cf0,	// (0x0006b32d) grid_cams_pane_ParamLimits

0x8cfc,	// (0x0006b339) linegrid_cams_pane_ParamLimits

0x8dbb,	// (0x0006b3f8) call_video_pane_t1

0x8dd8,	// (0x0006b415) call_video_pane_t2

0x0001,

0xf26e,	// (0x000718ab) call_video_pane_t

0x91a8,	// (0x0006b7e5) aid_cale_month_size_cell_pane_ParamLimits

0x91a8,	// (0x0006b7e5) aid_cale_month_size_cell_pane

0xf61e,	// (0x00071c5b) smil_status_volume_pane_g

0xaa0e,	// (0x0006d04b) volume_smil_pane_ParamLimits

0x7c73,	// (0x0006a2b0) aid_popup2_width_pane

0x8303,	// (0x0006a940) cell_qdial_pane_g4_ParamLimits

0x8303,	// (0x0006a940) cell_qdial_pane_g4

0x9bd6,	// (0x0006c213) aid_blid_cardinal_pane_ParamLimits

0x9be2,	// (0x0006c21f) aid_blid_destination_pane_ParamLimits

0x9be2,	// (0x0006c21f) aid_blid_destination_pane

0x0ab0,	// (0x000630ed) bg_popup_call_poc_act_pane_ParamLimits

0x0ab0,	// (0x000630ed) bg_popup_call_poc_act_pane

0x0ab0,	// (0x000630ed) bg_popup_call_poc_inact_pane_ParamLimits

0x0ab0,	// (0x000630ed) bg_popup_call_poc_inact_pane

0x4e53,	// (0x00067490) bg_popup_call_poc_act_pane_g1

0x4e5b,	// (0x00067498) bg_popup_call_poc_act_pane_g2

0x4e63,	// (0x000674a0) bg_popup_call_poc_act_pane_g3

0x4e23,	// (0x00067460) bg_popup_call_poc_act_pane_g4

0x4e2b,	// (0x00067468) bg_popup_call_poc_act_pane_g5

0x4e6b,	// (0x000674a8) bg_popup_call_poc_act_pane_g6

0x4e3b,	// (0x00067478) bg_popup_call_poc_act_pane_g7

0x4e73,	// (0x000674b0) bg_popup_call_poc_act_pane_g8

0x0855,	// (0x00062e92) main_usb_pane

0xa853,	// (0x0006ce90) popup_cale_lunar_info_window

0x905b,	// (0x0006b698) im_reading_pane_t1_ParamLimits

0x0ed3,	// (0x00063510) list_im_pane_ParamLimits

0x0ee4,	// (0x00063521) scroll_pane_cp07_ParamLimits

0x0855,	// (0x00062e92) grid_highlight_pane_cp012

0x0ab0,	// (0x000630ed) mup_scale_pane_ParamLimits

0x1962,	// (0x00063f9f) main_usb_pane_g1_ParamLimits

0x1962,	// (0x00063f9f) main_usb_pane_g1

0xa602,	// (0x0006cc3f) main_usb_pane_g2_ParamLimits

0xa602,	// (0x0006cc3f) main_usb_pane_g2

0x0001,

0xf5be,	// (0x00071bfb) main_usb_pane_g_ParamLimits

0xf5be,	// (0x00071bfb) main_usb_pane_g

0xa60e,	// (0x0006cc4b) main_usb_pane_t1_ParamLimits

0xa60e,	// (0x0006cc4b) main_usb_pane_t1

0xa620,	// (0x0006cc5d) main_usb_pane_t2_ParamLimits

0xa620,	// (0x0006cc5d) main_usb_pane_t2

0xa632,	// (0x0006cc6f) main_usb_pane_t3_ParamLimits

0xa632,	// (0x0006cc6f) main_usb_pane_t3

0xa644,	// (0x0006cc81) main_usb_pane_t4_ParamLimits

0xa644,	// (0x0006cc81) main_usb_pane_t4

0xa656,	// (0x0006cc93) main_usb_pane_t5_ParamLimits

0xa656,	// (0x0006cc93) main_usb_pane_t5

0xa668,	// (0x0006cca5) main_usb_pane_t6_ParamLimits

0xa668,	// (0x0006cca5) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x00071c00) main_usb_pane_t_ParamLimits

0x9b85,	// (0x0006c1c2) aid_text_placing

0x9b8e,	// (0x0006c1cb) main_location2_pane_t1_ParamLimits

0x9ba0,	// (0x0006c1dd) main_location2_pane_t2_ParamLimits

0x9bb2,	// (0x0006c1ef) main_location2_pane_t3_ParamLimits

0x9bc4,	// (0x0006c201) main_location2_pane_t4_ParamLimits

0x9bc4,	// (0x0006c201) main_location2_pane_t4

0xf3cf,	// (0x00071a0c) main_location2_pane_t_ParamLimits

0x0aec,	// (0x00063129) find_pinb_pane_g2_ParamLimits

0x0aec,	// (0x00063129) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0007175c) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0007175c) find_pinb_pane_g

0x0af8,	// (0x00063135) find_pinb_pane_t1_ParamLimits

0x0b0a,	// (0x00063147) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00071761) find_pinb_pane_t_ParamLimits

0x0855,	// (0x00062e92) main_call3_pane

0x9580,	// (0x0006bbbd) cale_month_day_heading_pane_t1_ParamLimits

0x95b3,	// (0x0006bbf0) cale_month_day_heading_pane_t2_ParamLimits

0x95dd,	// (0x0006bc1a) cale_month_day_heading_pane_t3_ParamLimits

0x9607,	// (0x0006bc44) cale_month_day_heading_pane_t4_ParamLimits

0x9631,	// (0x0006bc6e) cale_month_day_heading_pane_t5_ParamLimits

0x965b,	// (0x0006bc98) cale_month_day_heading_pane_t6_ParamLimits

0x9685,	// (0x0006bcc2) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000718e3) cale_month_day_heading_pane_t_ParamLimits

0x1149,	// (0x00063786) smil_status_volume_pane

0xa243,	// (0x0006c880) postcard_address_pane_ParamLimits

0xa243,	// (0x0006c880) postcard_address_pane

0xa24f,	// (0x0006c88c) postcard_message_pane_ParamLimits

0xa24f,	// (0x0006c88c) postcard_message_pane

0xa5e0,	// (0x0006cc1d) call2_cli_visual_pane_t1_ParamLimits

0xa5e0,	// (0x0006cc1d) call2_cli_visual_pane_t1

0xab5f,	// (0x0006d19c) postcard_message_pane_t1_ParamLimits

0xab5f,	// (0x0006d19c) postcard_message_pane_t1

0xab48,	// (0x0006d185) postcard_address_pane_t1_ParamLimits

0xab48,	// (0x0006d185) postcard_address_pane_t1

0xab3b,	// (0x0006d178) popup_call3_audio_in_window_ParamLimits

0xab3b,	// (0x0006d178) popup_call3_audio_in_window

0xaa23,	// (0x0006d060) bg_popup_call3_in_pane_ParamLimits

0xaa23,	// (0x0006d060) bg_popup_call3_in_pane

0xaa81,	// (0x0006d0be) popup_call3_audio_in_window_g1_ParamLimits

0xaa81,	// (0x0006d0be) popup_call3_audio_in_window_g1

0xaa99,	// (0x0006d0d6) popup_call3_audio_in_window_g2_ParamLimits

0xaa99,	// (0x0006d0d6) popup_call3_audio_in_window_g2

0xaab1,	// (0x0006d0ee) popup_call3_audio_in_window_g3_ParamLimits

0xaab1,	// (0x0006d0ee) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x00071c62) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x00071c62) popup_call3_audio_in_window_g

0xaad9,	// (0x0006d116) popup_call3_audio_in_window_t1_ParamLimits

0xaad9,	// (0x0006d116) popup_call3_audio_in_window_t1

0xab01,	// (0x0006d13e) popup_call3_audio_in_window_t2_ParamLimits

0xab01,	// (0x0006d13e) popup_call3_audio_in_window_t2

0xab29,	// (0x0006d166) popup_call3_audio_in_window_t3_ParamLimits

0xab29,	// (0x0006d166) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x00071c6b) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x00071c6b) popup_call3_audio_in_window_t

0x0dca,	// (0x00063407) bg_popup_call3_rect_pane

0x4dcb,	// (0x00067408) bg_popup_call3_rect_pane_g1

0x0cc4,	// (0x00063301) bg_popup_call3_rect_pane_g2

0x4dd3,	// (0x00067410) bg_popup_call3_rect_pane_g3

0x4ddb,	// (0x00067418) bg_popup_call3_rect_pane_g4

0x4de3,	// (0x00067420) bg_popup_call3_rect_pane_g5

0x4deb,	// (0x00067428) bg_popup_call3_rect_pane_g6

0x4df3,	// (0x00067430) bg_popup_call3_rect_pane_g7

0x9ec8,	// (0x0006c505) mup_visualizer_osc_pane

0x1970,	// (0x00063fad) mup_visualizer_spec_pane

0xaa43,	// (0x0006d080) call3_video_qcif_pane_ParamLimits

0xaa43,	// (0x0006d080) call3_video_qcif_pane

0xaa53,	// (0x0006d090) call3_video_qcif_uncrop_pane_ParamLimits

0xaa53,	// (0x0006d090) call3_video_qcif_uncrop_pane

0xaa5f,	// (0x0006d09c) call3_video_subqcif_pane_ParamLimits

0xaa5f,	// (0x0006d09c) call3_video_subqcif_pane

0xaa71,	// (0x0006d0ae) call3_video_subqcif_uncrop_pane_ParamLimits

0xaa71,	// (0x0006d0ae) call3_video_subqcif_uncrop_pane

0xaac9,	// (0x0006d106) popup_call3_audio_in_window_g4_ParamLimits

0xaac9,	// (0x0006d106) popup_call3_audio_in_window_g4

0xa9f0,	// (0x0006d02d) mup_spec_half_pane

0xa9f9,	// (0x0006d036) mup_spec_half_pane_cp

0x5070,	// (0x000676ad) mup_osc_middle_pane

0x5079,	// (0x000676b6) mup_visualizer_osc_pane_g1

0xa9d1,	// (0x0006d00e) mup_spec_bar_pane_ParamLimits

0xa9d1,	// (0x0006d00e) mup_spec_bar_pane

0x505d,	// (0x0006769a) mup_spec_bar_pane_g1

0x5067,	// (0x000676a4) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00071c56) mup_spec_bar_pane_g

0x83e3,	// (0x0006aa20) aid_cale_week_size_cell_pane_ParamLimits

0x83fd,	// (0x0006aa3a) bg_cale_heading_pane_ParamLimits

0x841a,	// (0x0006aa57) bg_cale_pane_cp01_ParamLimits

0x843c,	// (0x0006aa79) cale_week_corner_pane_ParamLimits

0x845b,	// (0x0006aa98) cale_week_day_heading_pane_ParamLimits

0x847d,	// (0x0006aaba) cale_week_scroll_pane_g1_ParamLimits

0x8495,	// (0x0006aad2) cale_week_scroll_pane_g2_ParamLimits

0x84ad,	// (0x0006aaea) cale_week_scroll_pane_g3_ParamLimits

0x84c5,	// (0x0006ab02) cale_week_scroll_pane_g4_ParamLimits

0x84dd,	// (0x0006ab1a) cale_week_scroll_pane_g5_ParamLimits

0x84f5,	// (0x0006ab32) cale_week_scroll_pane_g6_ParamLimits

0x850d,	// (0x0006ab4a) cale_week_scroll_pane_g7_ParamLimits

0x8525,	// (0x0006ab62) cale_week_scroll_pane_g8_ParamLimits

0x853d,	// (0x0006ab7a) cale_week_scroll_pane_g9_ParamLimits

0x855a,	// (0x0006ab97) cale_week_scroll_pane_g10_ParamLimits

0x8577,	// (0x0006abb4) cale_week_scroll_pane_g11_ParamLimits

0x8594,	// (0x0006abd1) cale_week_scroll_pane_g12_ParamLimits

0x85b1,	// (0x0006abee) cale_week_scroll_pane_g13_ParamLimits

0x85ce,	// (0x0006ac0b) cale_week_scroll_pane_g14_ParamLimits

0x85eb,	// (0x0006ac28) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000717ed) cale_week_scroll_pane_g_ParamLimits

0x8620,	// (0x0006ac5d) cale_week_time_pane_ParamLimits

0x8638,	// (0x0006ac75) grid_cale_week_pane_ParamLimits

0x0d49,	// (0x00063386) listscroll_cale_week_pane_t1

0x0d5b,	// (0x00063398) scroll_pane_cp08_ParamLimits

0x9208,	// (0x0006b845) cale_month_corner_pane_ParamLimits

0x1113,	// (0x00063750) cale_month_pane_t1

0x9537,	// (0x0006bb74) cale_month_week_pane_ParamLimits

0x1962,	// (0x00063f9f) popup_call_status_window_g1_ParamLimits

0x999c,	// (0x0006bfd9) popup_call_status_window_g2_ParamLimits

0x99a8,	// (0x0006bfe5) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00071993) popup_call_status_window_g_ParamLimits

0x14e9,	// (0x00063b26) aid_call2_pane

0x6c03,	// (0x00069240) msg_header_pane_g1

0xa243,	// (0x0006c880) postcard_address2_pane_ParamLimits

0xa243,	// (0x0006c880) postcard_address2_pane

0xa24f,	// (0x0006c88c) postcard_message2_pane_ParamLimits

0xa24f,	// (0x0006c88c) postcard_message2_pane

0xa988,	// (0x0006cfc5) message2_row_pane_ParamLimits

0xa988,	// (0x0006cfc5) message2_row_pane

0xa9a0,	// (0x0006cfdd) address2_row_pane_ParamLimits

0xa9a0,	// (0x0006cfdd) address2_row_pane

0x502b,	// (0x00067668) postcard_message2_row_pane_g1

0x5033,	// (0x00067670) postcard_message2_row_pane_t1

0x502b,	// (0x00067668) address2_row_pane_g1

0x5033,	// (0x00067670) address2_row_pane_t1

0x8a7c,	// (0x0006b0b9) aid_size_cell_vorec

0x0855,	// (0x00062e92) main_rss_pane

0xa9b3,	// (0x0006cff0) rss_list_single_pane_ParamLimits

0xa9b3,	// (0x0006cff0) rss_list_single_pane

0x5041,	// (0x0006767e) rss_list_single_pane_t1

0x504f,	// (0x0006768c) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x00071c51) rss_list_single_pane_t

0x0855,	// (0x00062e92) main_camera2_pane

0x0855,	// (0x00062e92) main_video2_pane

0xabaf,	// (0x0006d1ec) cams_zoom_pane_cp2_ParamLimits

0xabaf,	// (0x0006d1ec) cams_zoom_pane_cp2

0xabbb,	// (0x0006d1f8) image2_vga_pane_ParamLimits

0xabbb,	// (0x0006d1f8) image2_vga_pane

0xabca,	// (0x0006d207) main_camera2_pane_g1_ParamLimits

0xabca,	// (0x0006d207) main_camera2_pane_g1

0xabd6,	// (0x0006d213) main_camera2_pane_g2_ParamLimits

0xabd6,	// (0x0006d213) main_camera2_pane_g2

0xabe2,	// (0x0006d21f) main_camera2_pane_g3_ParamLimits

0xabe2,	// (0x0006d21f) main_camera2_pane_g3

0xabee,	// (0x0006d22b) main_camera2_pane_g4_ParamLimits

0xabee,	// (0x0006d22b) main_camera2_pane_g4

0xabfa,	// (0x0006d237) main_camera2_pane_g5_ParamLimits

0xabfa,	// (0x0006d237) main_camera2_pane_g5

0xac06,	// (0x0006d243) main_camera2_pane_g6_ParamLimits

0xac06,	// (0x0006d243) main_camera2_pane_g6

0xac12,	// (0x0006d24f) main_camera2_pane_g7_ParamLimits

0xac12,	// (0x0006d24f) main_camera2_pane_g7

0xac1e,	// (0x0006d25b) main_camera2_pane_g8_ParamLimits

0xac1e,	// (0x0006d25b) main_camera2_pane_g8

0x0008,

0xf635,	// (0x00071c72) main_camera2_pane_g_ParamLimits

0xf635,	// (0x00071c72) main_camera2_pane_g

0xac36,	// (0x0006d273) main_camera2_pane_t1_ParamLimits

0xac36,	// (0x0006d273) main_camera2_pane_t1

0xac48,	// (0x0006d285) main_camera2_pane_t2_ParamLimits

0xac48,	// (0x0006d285) main_camera2_pane_t2

0xac5a,	// (0x0006d297) main_camera2_pane_t3_ParamLimits

0xac5a,	// (0x0006d297) main_camera2_pane_t3

0xac6c,	// (0x0006d2a9) main_camera2_pane_t4_ParamLimits

0xac6c,	// (0x0006d2a9) main_camera2_pane_t4

0x0006,

0xf648,	// (0x00071c85) main_camera2_pane_t_ParamLimits

0xf648,	// (0x00071c85) main_camera2_pane_t

0xacc7,	// (0x0006d304) cams_zoom_pane_cp4_ParamLimits

0xacc7,	// (0x0006d304) cams_zoom_pane_cp4

0xacd7,	// (0x0006d314) image2_cif_pane_ParamLimits

0xacd7,	// (0x0006d314) image2_cif_pane

0xace8,	// (0x0006d325) image2_subqcif_pane_ParamLimits

0xace8,	// (0x0006d325) image2_subqcif_pane

0xacf5,	// (0x0006d332) main_video2_pane_g1_ParamLimits

0xacf5,	// (0x0006d332) main_video2_pane_g1

0xad07,	// (0x0006d344) main_video2_pane_g2_ParamLimits

0xad07,	// (0x0006d344) main_video2_pane_g2

0xad17,	// (0x0006d354) main_video2_pane_g3_ParamLimits

0xad17,	// (0x0006d354) main_video2_pane_g3

0xad27,	// (0x0006d364) main_video2_pane_g4_ParamLimits

0xad27,	// (0x0006d364) main_video2_pane_g4

0xad37,	// (0x0006d374) main_video2_pane_g5_ParamLimits

0xad37,	// (0x0006d374) main_video2_pane_g5

0xad47,	// (0x0006d384) main_video2_pane_g6_ParamLimits

0xad47,	// (0x0006d384) main_video2_pane_g6

0x0005,

0xf657,	// (0x00071c94) main_video2_pane_g_ParamLimits

0xf657,	// (0x00071c94) main_video2_pane_g

0xad59,	// (0x0006d396) main_video2_pane_t1_ParamLimits

0xad59,	// (0x0006d396) main_video2_pane_t1

0xad73,	// (0x0006d3b0) main_video2_pane_t2_ParamLimits

0xad73,	// (0x0006d3b0) main_video2_pane_t2

0xad99,	// (0x0006d3d6) main_video2_pane_t3_ParamLimits

0xad99,	// (0x0006d3d6) main_video2_pane_t3

0x0002,

0xf664,	// (0x00071ca1) main_video2_pane_t_ParamLimits

0xf664,	// (0x00071ca1) main_video2_pane_t

0xa717,	// (0x0006cd54) call_muted_g2

0x0001,

0xf606,	// (0x00071c43) call_muted_g

0x0855,	// (0x00062e92) main_mup2_pane

0x50de,	// (0x0006771b) main_mup2_pane_g1_ParamLimits

0x50de,	// (0x0006771b) main_mup2_pane_g1

0xadbf,	// (0x0006d3fc) main_mup2_pane_g2_ParamLimits

0xadbf,	// (0x0006d3fc) main_mup2_pane_g2

0xb02b,	// (0x0006d668) main_mup_pane_g13_cp1

0xb033,	// (0x0006d670) mup_volume_pane_cp1

0xaddf,	// (0x0006d41c) main_mup2_pane_g4_ParamLimits

0xaddf,	// (0x0006d41c) main_mup2_pane_g4

0xadf0,	// (0x0006d42d) main_mup2_pane_g5_ParamLimits

0xadf0,	// (0x0006d42d) main_mup2_pane_g5

0xae01,	// (0x0006d43e) main_mup2_pane_g6_ParamLimits

0xae01,	// (0x0006d43e) main_mup2_pane_g6

0xae12,	// (0x0006d44f) main_mup2_pane_g7_ParamLimits

0xae12,	// (0x0006d44f) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x00071ca8) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x00071ca8) main_mup2_pane_g

0xae2e,	// (0x0006d46b) main_mup2_pane_t1_ParamLimits

0xae2e,	// (0x0006d46b) main_mup2_pane_t1

0xae45,	// (0x0006d482) main_mup2_pane_t2_ParamLimits

0xae45,	// (0x0006d482) main_mup2_pane_t2

0xae5c,	// (0x0006d499) main_mup2_pane_t3_ParamLimits

0xae5c,	// (0x0006d499) main_mup2_pane_t3

0xae73,	// (0x0006d4b0) main_mup2_pane_t4_ParamLimits

0xae73,	// (0x0006d4b0) main_mup2_pane_t4

0xae8d,	// (0x0006d4ca) main_mup2_pane_t5_ParamLimits

0xae8d,	// (0x0006d4ca) main_mup2_pane_t5

0xaea7,	// (0x0006d4e4) main_mup2_pane_t6_ParamLimits

0xaea7,	// (0x0006d4e4) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x00071cb7) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x00071cb7) main_mup2_pane_t

0xaedb,	// (0x0006d518) mup2_visualizer_pane_ParamLimits

0xaedb,	// (0x0006d518) mup2_visualizer_pane

0xaf0d,	// (0x0006d54a) mup_progress_pane_cp_ParamLimits

0xaf0d,	// (0x0006d54a) mup_progress_pane_cp

0xb016,	// (0x0006d653) mup_volume_pane_cp_ParamLimits

0xb016,	// (0x0006d653) mup_volume_pane_cp

0xaf24,	// (0x0006d561) mup2_visualizer_pane_g1_ParamLimits

0xaf24,	// (0x0006d561) mup2_visualizer_pane_g1

0x50b0,	// (0x000676ed) mup2_visualizer_pane_g2_ParamLimits

0x50b0,	// (0x000676ed) mup2_visualizer_pane_g2

0xaf39,	// (0x0006d576) mup2_visualizer_pane_g3_ParamLimits

0xaf39,	// (0x0006d576) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x00071cc4) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x00071cc4) mup2_visualizer_pane_g

0xa400,	// (0x0006ca3d) aid_size_cell_fmradio

0xa7f9,	// (0x0006ce36) aid_height_parent_landcape

0x0f71,	// (0x000635ae) wml_content_pane_cp

0x0f79,	// (0x000635b6) wml_tabs_pane

0x0f82,	// (0x000635bf) popup_wml_miniature_window

0x0f8a,	// (0x000635c7) scroll_pane_cp021

0x0f9e,	// (0x000635db) wml_content_pane_comp8

0x0855,	// (0x00062e92) bg_popup_sub_pane_cp05

0x50ce,	// (0x0006770b) popup_wml_miniature_window_g1

0x50d6,	// (0x00067713) wml_miniature_view_pane

0xaf45,	// (0x0006d582) aid_size_wml_view

0xaf4d,	// (0x0006d58a) wml_miniature_view_pane_g1

0xaf56,	// (0x0006d593) wml_miniature_view_pane_g2

0xaf5f,	// (0x0006d59c) wml_miniature_view_pane_g3

0xaf67,	// (0x0006d5a4) wml_miniature_view_pane_g4

0xaf6f,	// (0x0006d5ac) wml_miniature_view_pane_g5

0xaf77,	// (0x0006d5b4) wml_miniature_view_pane_g6

0xaf7f,	// (0x0006d5bc) wml_miniature_view_pane_g7

0xaf87,	// (0x0006d5c4) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x00071ccb) wml_miniature_view_pane_g

0x50de,	// (0x0006771b) background_graphic_ParamLimits

0x50de,	// (0x0006771b) background_graphic

0x50ea,	// (0x00067727) wml_tabs_2_pane

0x50f3,	// (0x00067730) wml_tabs_3_pane_ParamLimits

0x50f3,	// (0x00067730) wml_tabs_3_pane

0x5105,	// (0x00067742) wml_tabs_4_pane_ParamLimits

0x5105,	// (0x00067742) wml_tabs_4_pane

0x511b,	// (0x00067758) wml_tabs_5_pane_ParamLimits

0x511b,	// (0x00067758) wml_tabs_5_pane

0x5135,	// (0x00067772) wml_tabs_pane_g2_ParamLimits

0x5135,	// (0x00067772) wml_tabs_pane_g2

0x5149,	// (0x00067786) wml_tabs_pane_g3_ParamLimits

0x5149,	// (0x00067786) wml_tabs_pane_g3

0xaf8f,	// (0x0006d5cc) wml_tabs_2_active_pane_ParamLimits

0xaf8f,	// (0x0006d5cc) wml_tabs_2_active_pane

0xaf9f,	// (0x0006d5dc) wml_tabs_2_passive_pane_ParamLimits

0xaf9f,	// (0x0006d5dc) wml_tabs_2_passive_pane

0xafaf,	// (0x0006d5ec) wml_tabs_3_active_pane_cp_ParamLimits

0xafaf,	// (0x0006d5ec) wml_tabs_3_active_pane_cp

0xafc0,	// (0x0006d5fd) wml_tabs_3_passive_pane_ParamLimits

0xafc0,	// (0x0006d5fd) wml_tabs_3_passive_pane

0xafd1,	// (0x0006d60e) wml_tabs_3_passive_pane_cp_ParamLimits

0xafd1,	// (0x0006d60e) wml_tabs_3_passive_pane_cp

0xafe2,	// (0x0006d61f) tabs_4_active_pane

0xafea,	// (0x0006d627) tabs_4_passive_pane

0xaff2,	// (0x0006d62f) tabs_4_passive_pane_cp

0xaffa,	// (0x0006d637) tabs_4_passive_pane_cp2

0xa5fa,	// (0x0006cc37) aid_height_text

0x9e95,	// (0x0006c4d2) mup_volume_cont_pane_ParamLimits

0x9e95,	// (0x0006c4d2) mup_volume_cont_pane

0x7fc3,	// (0x0006a600) aid_size_cell_pinb

0x7fcd,	// (0x0006a60a) aid_size_list_pinb

0xaef6,	// (0x0006d533) mup2_volume_cont_pane_ParamLimits

0xaef6,	// (0x0006d533) mup2_volume_cont_pane

0xb002,	// (0x0006d63f) mup2_volume_cont_pane_g1_ParamLimits

0xb002,	// (0x0006d63f) mup2_volume_cont_pane_g1

0x7c7b,	// (0x0006a2b8) aid_size_cell_touch_ParamLimits

0x7c7b,	// (0x0006a2b8) aid_size_cell_touch

0x7ef8,	// (0x0006a535) touch_pane_ParamLimits

0x7ef8,	// (0x0006a535) touch_pane

0x0386,	// (0x000629c3) main_rss2_pane

0x5166,	// (0x000677a3) listscroll_rss2_pane

0x516f,	// (0x000677ac) rss2_navigation_pane

0x5177,	// (0x000677b4) list_rss2_pane

0x1669,	// (0x00063ca6) scroll_pane_cp22

0x517f,	// (0x000677bc) rss2_navigation_pane_g1

0x5188,	// (0x000677c5) rss2_navigation_pane_g2

0x5190,	// (0x000677cd) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x00071cdc) rss2_navigation_pane_g

0x5198,	// (0x000677d5) rss2_navigation_pane_t1

0xb03b,	// (0x0006d678) rss2_list_single_pane_ParamLimits

0xb03b,	// (0x0006d678) rss2_list_single_pane

0x51a6,	// (0x000677e3) rss2_list_single_pane_t2

0x51b4,	// (0x000677f1) rss2_list_single_pane_t3_ParamLimits

0x51b4,	// (0x000677f1) rss2_list_single_pane_t3

0x51d1,	// (0x0006780e) rss2_list_single_pane_t4

0x9874,	// (0x0006beb1) smil_status_pane_g1

0x225b,	// (0x00064898) main_image2_pane_ParamLimits

0x225b,	// (0x00064898) main_image2_pane

0xac2a,	// (0x0006d267) main_camera2_pane_g9_ParamLimits

0xac2a,	// (0x0006d267) main_camera2_pane_g9

0xac7e,	// (0x0006d2bb) main_camera2_pane_t5_ParamLimits

0xac7e,	// (0x0006d2bb) main_camera2_pane_t5

0xac90,	// (0x0006d2cd) main_camera2_pane_t6_ParamLimits

0xac90,	// (0x0006d2cd) main_camera2_pane_t6

0xb051,	// (0x0006d68e) main_image2_pane_g1_ParamLimits

0xb051,	// (0x0006d68e) main_image2_pane_g1

0xa3ee,	// (0x0006ca2b) smil2_video_pane_ParamLimits

0xa3ee,	// (0x0006ca2b) smil2_video_pane

0x7cab,	// (0x0006a2e8) aid_zoom_text_primary_cp

0x7ea7,	// (0x0006a4e4) popup_preview_fixed_window

0x0ecb,	// (0x00063508) im_reading_pane_g1

0xab86,	// (0x0006d1c3) cams2_bc_adjust_pane_cp_ParamLimits

0xab86,	// (0x0006d1c3) cams2_bc_adjust_pane_cp

0xacbb,	// (0x0006d2f8) cams2_bc_adjust_pane_ParamLimits

0xacbb,	// (0x0006d2f8) cams2_bc_adjust_pane

0xb05d,	// (0x0006d69a) cams2_bc_adjust_pane_g1

0xb065,	// (0x0006d6a2) cams2_slider_pane

0xb06e,	// (0x0006d6ab) cams2_slider_pane_g1

0xb077,	// (0x0006d6b4) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x00071ce3) cams2_slider_pane_g

0x809d,	// (0x0006a6da) calc_display_pane_ParamLimits

0x80b7,	// (0x0006a6f4) calc_paper_pane_ParamLimits

0x80cf,	// (0x0006a70c) grid_calc_pane_ParamLimits

0x9a1a,	// (0x0006c057) popup_clock_digital_window_t1_ParamLimits

0x1b5b,	// (0x00064198) main_image_pane_t1

0x8083,	// (0x0006a6c0) aid_size_cell_calc_ParamLimits

0x8083,	// (0x0006a6c0) aid_size_cell_calc

0xa833,	// (0x0006ce70) popup_blid_sat_info2_window_ParamLimits

0xa833,	// (0x0006ce70) popup_blid_sat_info2_window

0x51e7,	// (0x00067824) aid_size_cell_blid

0x51ef,	// (0x0006782c) bg_popup_window_pane_cp07

0x5212,	// (0x0006784f) grid_popup_blid_pane

0x521a,	// (0x00067857) heading_pane_cp05_ParamLimits

0x521a,	// (0x00067857) heading_pane_cp05

0x52e2,	// (0x0006791f) cell_popup_blid_pane_ParamLimits

0x52e2,	// (0x0006791f) cell_popup_blid_pane

0x5302,	// (0x0006793f) cell_popup_blid_pane_g1

0x530a,	// (0x00067947) cell_popup_blid_pane_t1

0xaec4,	// (0x0006d501) mup2_indicator_pane_ParamLimits

0xaec4,	// (0x0006d501) mup2_indicator_pane

0x0dca,	// (0x00063407) mup2_visualizer_osc_pane

0x50bc,	// (0x000676f9) mup2_visualizer_spec_pane_ParamLimits

0x50bc,	// (0x000676f9) mup2_visualizer_spec_pane

0xb091,	// (0x0006d6ce) mup2_spec_half_pane

0xb09a,	// (0x0006d6d7) mup2_spec_half_pane_cp

0xb0a2,	// (0x0006d6df) mup2_spec_bar_pane_ParamLimits

0xb0a2,	// (0x0006d6df) mup2_spec_bar_pane

0x505d,	// (0x0006769a) mup2_spec_bar_pane_g1

0x5067,	// (0x000676a4) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00071c56) mup2_spec_bar_pane_g

0xb0c1,	// (0x0006d6fe) mup2_osc_middle_pane

0x5079,	// (0x000676b6) mup2_visualizer_osc_pane_g1

0x0430,	// (0x00062a6d) popup_number_entry_window_t1_ParamLimits

0x0443,	// (0x00062a80) popup_number_entry_window_t2_ParamLimits

0x0455,	// (0x00062a92) popup_number_entry_window_t3_ParamLimits

0x0467,	// (0x00062aa4) popup_number_entry_window_t5_ParamLimits

0x0467,	// (0x00062aa4) popup_number_entry_window_t5

0xf0ca,	// (0x00071707) popup_number_entry_window_t_ParamLimits

0x049b,	// (0x00062ad8) text_title_cp2_ParamLimits

0xa12d,	// (0x0006c76a) aid_hotspot_pointer_text2_pane

0xa1bf,	// (0x0006c7fc) main_viewer_pane_g9_ParamLimits

0xa1bf,	// (0x0006c7fc) main_viewer_pane_g9

0x1113,	// (0x00063750) cale_month_pane_t1_ParamLimits

0x117e,	// (0x000637bb) bg_cale_pane_ParamLimits

0x1196,	// (0x000637d3) list_cale_pane_ParamLimits

0x11a7,	// (0x000637e4) listscroll_cale_day_pane_t1

0x11b9,	// (0x000637f6) scroll_pane_cp09_ParamLimits

0x9efd,	// (0x0006c53a) main_mup_eq_pane_t1_ParamLimits

0x9efd,	// (0x0006c53a) main_mup_eq_pane_t1

0x9f13,	// (0x0006c550) main_mup_eq_pane_t2_ParamLimits

0x9f13,	// (0x0006c550) main_mup_eq_pane_t2

0x9f29,	// (0x0006c566) main_mup_eq_pane_t3_ParamLimits

0x9f29,	// (0x0006c566) main_mup_eq_pane_t3

0x9f3f,	// (0x0006c57c) main_mup_eq_pane_t4_ParamLimits

0x9f3f,	// (0x0006c57c) main_mup_eq_pane_t4

0x9f55,	// (0x0006c592) main_mup_eq_pane_t5_ParamLimits

0x9f55,	// (0x0006c592) main_mup_eq_pane_t5

0x9f6b,	// (0x0006c5a8) main_mup_eq_pane_t6_ParamLimits

0x9f6b,	// (0x0006c5a8) main_mup_eq_pane_t6

0x9f7d,	// (0x0006c5ba) main_mup_eq_pane_t7_ParamLimits

0x9f7d,	// (0x0006c5ba) main_mup_eq_pane_t7

0x9f8f,	// (0x0006c5cc) main_mup_eq_pane_t8_ParamLimits

0x9f8f,	// (0x0006c5cc) main_mup_eq_pane_t8

0x9fa1,	// (0x0006c5de) main_mup_eq_pane_t9_ParamLimits

0x9fa1,	// (0x0006c5de) main_mup_eq_pane_t9

0x9fb7,	// (0x0006c5f4) main_mup_eq_pane_t10_ParamLimits

0x9fb7,	// (0x0006c5f4) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00071a92) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00071a92) main_mup_eq_pane_t

0xa04a,	// (0x0006c687) mup_equalizer_pane_cp5_ParamLimits

0xa05c,	// (0x0006c699) mup_equalizer_pane_cp6_ParamLimits

0xa06e,	// (0x0006c6ab) mup_equalizer_pane_cp7_ParamLimits

0x0386,	// (0x000629c3) main_gallery_pane

0x5082,	// (0x000676bf) smil2_volume_pane

0x509d,	// (0x000676da) smil_status_volume_pane_g1_ParamLimits

0x508a,	// (0x000676c7) smil_status_volume_pane_g2_ParamLimits

0xaa01,	// (0x0006d03e) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x00071c5b) smil_status_volume_pane_g_ParamLimits

0x51ef,	// (0x0006782c) bg_popup_window_pane_cp07_ParamLimits

0x51fd,	// (0x0006783a) blid_firmament_pane

0xb0ca,	// (0x0006d707) aid_size_cell_gallery_ParamLimits

0xb0ca,	// (0x0006d707) aid_size_cell_gallery

0xb0d8,	// (0x0006d715) grid_gallery_pane_ParamLimits

0xb0d8,	// (0x0006d715) grid_gallery_pane

0xb0e4,	// (0x0006d721) cell_gallery_pane_ParamLimits

0xb0e4,	// (0x0006d721) cell_gallery_pane

0x5318,	// (0x00067955) bg_cell_gallery_focus_pane_ParamLimits

0x5318,	// (0x00067955) bg_cell_gallery_focus_pane

0x532a,	// (0x00067967) cell_gallery_pane_g1_ParamLimits

0x532a,	// (0x00067967) cell_gallery_pane_g1

0xb120,	// (0x0006d75d) cell_gallery_pane_g2_ParamLimits

0xb120,	// (0x0006d75d) cell_gallery_pane_g2

0xb12d,	// (0x0006d76a) cell_gallery_pane_g3_ParamLimits

0xb12d,	// (0x0006d76a) cell_gallery_pane_g3

0x5336,	// (0x00067973) cell_gallery_pane_g4_ParamLimits

0x5336,	// (0x00067973) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x00071d09) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x00071d09) cell_gallery_pane_g

0x5342,	// (0x0006797f) bg_cell_gallery_focus_pane_g1

0x534a,	// (0x00067987) bg_cell_gallery_focus_pane_g2

0x5352,	// (0x0006798f) bg_cell_gallery_focus_pane_g3

0x535a,	// (0x00067997) bg_cell_gallery_focus_pane_g4

0x5362,	// (0x0006799f) bg_cell_gallery_focus_pane_g5

0x536a,	// (0x000679a7) bg_cell_gallery_focus_pane_g6

0x5372,	// (0x000679af) bg_cell_gallery_focus_pane_g7

0x537a,	// (0x000679b7) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x00071d12) bg_cell_gallery_focus_pane_g

0x5382,	// (0x000679bf) aid_firma_cardinal

0x5396,	// (0x000679d3) blid_firmament_pane_t1

0x53ad,	// (0x000679ea) blid_firmament_pane_t2

0x53c4,	// (0x00067a01) blid_firmament_pane_t3

0x53db,	// (0x00067a18) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x00071d23) blid_firmament_pane_t

0x53f2,	// (0x00067a2f) blid_sat_info_pane

0x5402,	// (0x00067a3f) blid_sat_info_pane_g1

0x5402,	// (0x00067a3f) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x00071d2c) blid_sat_info_pane_g

0x540c,	// (0x00067a49) blid_sat_info_pane_t1

0x541a,	// (0x00067a57) smil2_volume_content_pane

0x5423,	// (0x00067a60) smil2_volume_pane_g1

0x542b,	// (0x00067a68) smil2_volume_content_pane_g1

0x5434,	// (0x00067a71) smil2_volume_content_pane_g2

0x543d,	// (0x00067a7a) smil2_volume_content_pane_g3

0x5446,	// (0x00067a83) smil2_volume_content_pane_g4

0x544f,	// (0x00067a8c) smil2_volume_content_pane_g5

0x5458,	// (0x00067a95) smil2_volume_content_pane_g6

0x5461,	// (0x00067a9e) smil2_volume_content_pane_g7

0x546a,	// (0x00067aa7) smil2_volume_content_pane_g8

0x5473,	// (0x00067ab0) smil2_volume_content_pane_g9

0x547c,	// (0x00067ab9) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x00071d31) smil2_volume_content_pane_g

0x86cd,	// (0x0006ad0a) cale_week_day_heading_pane_t1_ParamLimits

0x86f5,	// (0x0006ad32) cale_week_day_heading_pane_t2_ParamLimits

0x8722,	// (0x0006ad5f) cale_week_day_heading_pane_t3_ParamLimits

0x874f,	// (0x0006ad8c) cale_week_day_heading_pane_t4_ParamLimits

0x877c,	// (0x0006adb9) cale_week_day_heading_pane_t5_ParamLimits

0x87a9,	// (0x0006ade6) cale_week_day_heading_pane_t6_ParamLimits

0x87d6,	// (0x0006ae13) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0007180e) cale_week_day_heading_pane_t_ParamLimits

0x0d78,	// (0x000633b5) bg_cale_side_pane_ParamLimits

0x87fe,	// (0x0006ae3b) cale_week_time_pane_t1_ParamLimits

0x8842,	// (0x0006ae7f) cale_week_time_pane_t2_ParamLimits

0x8886,	// (0x0006aec3) cale_week_time_pane_t3_ParamLimits

0x88ca,	// (0x0006af07) cale_week_time_pane_t4_ParamLimits

0x890e,	// (0x0006af4b) cale_week_time_pane_t5_ParamLimits

0x8952,	// (0x0006af8f) cale_week_time_pane_t6_ParamLimits

0x8996,	// (0x0006afd3) cale_week_time_pane_t7_ParamLimits

0x89da,	// (0x0006b017) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0007181d) cale_week_time_pane_t_ParamLimits

0x8a1e,	// (0x0006b05b) cell_cale_week_pane_g2_ParamLimits

0x0d78,	// (0x000633b5) bg_cale_side_pane_cp01_ParamLimits

0x96af,	// (0x0006bcec) cale_month_week_pane_t1_ParamLimits

0x96c8,	// (0x0006bd05) cale_month_week_pane_t2_ParamLimits

0x96e1,	// (0x0006bd1e) cale_month_week_pane_t3_ParamLimits

0x96fa,	// (0x0006bd37) cale_month_week_pane_t4_ParamLimits

0x9713,	// (0x0006bd50) cale_month_week_pane_t5_ParamLimits

0x972c,	// (0x0006bd69) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000718f2) cale_month_week_pane_t_ParamLimits

0x9833,	// (0x0006be70) cell_cale_month_pane_g1_ParamLimits

0x0386,	// (0x000629c3) main_cale_event_viewer_pane

0x0386,	// (0x000629c3) listscroll_cale_event_viewer_pane

0x5485,	// (0x00067ac2) list_cale_ev_pane

0x548d,	// (0x00067aca) scroll_pane_cp023

0xb13a,	// (0x0006d777) field_cale_ev_pane_ParamLimits

0xb13a,	// (0x0006d777) field_cale_ev_pane

0x5499,	// (0x00067ad6) field_cale_ev_content_pane_ParamLimits

0x5499,	// (0x00067ad6) field_cale_ev_content_pane

0x54a5,	// (0x00067ae2) field_cale_ev_pane_g1_ParamLimits

0x54a5,	// (0x00067ae2) field_cale_ev_pane_g1

0x54b1,	// (0x00067aee) field_cale_ev_pane_g2_ParamLimits

0x54b1,	// (0x00067aee) field_cale_ev_pane_g2

0x54c9,	// (0x00067b06) field_cale_ev_pane_g3_ParamLimits

0x54c9,	// (0x00067b06) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x00071d46) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x00071d46) field_cale_ev_pane_g

0x54e1,	// (0x00067b1e) field_cale_ev_pane_t1_ParamLimits

0x54e1,	// (0x00067b1e) field_cale_ev_pane_t1

0xb154,	// (0x0006d791) field_cale_ev_content_pane_t1_ParamLimits

0xb154,	// (0x0006d791) field_cale_ev_content_pane_t1

0x19ff,	// (0x0006403c) bg_button_pane_cp01

0x83d3,	// (0x0006aa10) listscroll_cale_week_pane_ParamLimits

0x0d40,	// (0x0006337d) popup_toolbar_window_cp01

0x0d49,	// (0x00063386) listscroll_cale_week_pane_t1_ParamLimits

0x83d3,	// (0x0006aa10) listscroll_cale_day_pane_ParamLimits

0x0d40,	// (0x0006337d) popup_toolbar_window_cp02

0x11a7,	// (0x000637e4) listscroll_cale_day_pane_t1_ParamLimits

0x83d3,	// (0x0006aa10) main_cale_month_pane_ParamLimits

0xa90a,	// (0x0006cf47) popup_toolbar_window_cp03_ParamLimits

0xa90a,	// (0x0006cf47) popup_toolbar_window_cp03

0xa316,	// (0x0006c953) main_image_pane_g2_ParamLimits

0xa316,	// (0x0006c953) main_image_pane_g2

0xa322,	// (0x0006c95f) main_image_pane_g3_ParamLimits

0xa322,	// (0x0006c95f) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00071b24) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00071b24) main_image_pane_g

0x1b5b,	// (0x00064198) main_image_pane_t1_ParamLimits

0xa32e,	// (0x0006c96b) main_image_pane_t2_ParamLimits

0xa32e,	// (0x0006c96b) main_image_pane_t2

0xa340,	// (0x0006c97d) main_image_pane_t3_ParamLimits

0xa340,	// (0x0006c97d) main_image_pane_t3

0xa352,	// (0x0006c98f) main_image_pane_t4_ParamLimits

0xa352,	// (0x0006c98f) main_image_pane_t4

0x0003,

0xf4ee,	// (0x00071b2b) main_image_pane_t_ParamLimits

0xf4ee,	// (0x00071b2b) main_image_pane_t

0xa364,	// (0x0006c9a1) popup_image_details_window_cp01

0xa36c,	// (0x0006c9a9) popup_toobar_trans_pane_cp01_ParamLimits

0xa36c,	// (0x0006c9a9) popup_toobar_trans_pane_cp01

0xa87a,	// (0x0006ceb7) popup_image_details_window_ParamLimits

0xa87a,	// (0x0006ceb7) popup_image_details_window

0xa886,	// (0x0006cec3) popup_image_focus_window

0xab7a,	// (0x0006d1b7) camera2_autofocus_pane_ParamLimits

0xab7a,	// (0x0006d1b7) camera2_autofocus_pane

0x0386,	// (0x000629c3) bg_popup_sub_pane_cp06

0x54f8,	// (0x00067b35) popup_image_focus_window_g1

0x5500,	// (0x00067b3d) popup_image_focus_window_g2

0x5508,	// (0x00067b45) popup_image_focus_window_g3

0x5510,	// (0x00067b4d) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x00071d4d) popup_image_focus_window_g

0x5518,	// (0x00067b55) popup_image_focus_window_t1

0x5526,	// (0x00067b63) popup_image_focus_window_t2

0x5535,	// (0x00067b72) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x00071d56) popup_image_focus_window_t

0x5543,	// (0x00067b80) camera2_autofocus_pane_g1

0x225b,	// (0x00064898) bg_tb_trans_pane_cp01

0x5551,	// (0x00067b8e) popup_image_details_window_g1

0x5564,	// (0x00067ba1) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x00071d68) popup_image_details_window_g

0x558d,	// (0x00067bca) popup_image_details_window_t1

0x559f,	// (0x00067bdc) popup_image_details_window_t2

0x55b8,	// (0x00067bf5) popup_image_details_window_t3

0x55cc,	// (0x00067c09) popup_image_details_window_t4

0x55e7,	// (0x00067c24) popup_image_details_window_t5

0x0004,

0xf732,	// (0x00071d6f) popup_image_details_window_t

0x0b75,	// (0x000631b2) bg_calc_paper_pane_ParamLimits

0x0386,	// (0x000629c3) grid_highlight_pane_cp013

0x81b8,	// (0x0006a7f5) list_calc_pane_ParamLimits

0x81ca,	// (0x0006a807) scroll_pane_cp024

0x0ba3,	// (0x000631e0) bg_calc_display_pane_ParamLimits

0x81d2,	// (0x0006a80f) calc_display_pane_t1_ParamLimits

0x81e7,	// (0x0006a824) calc_display_pane_t2_ParamLimits

0x81fc,	// (0x0006a839) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0007178e) calc_display_pane_t_ParamLimits

0x82b1,	// (0x0006a8ee) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000717ab) cell_calc_pane_g

0x82ba,	// (0x0006a8f7) cell_calc_pane_t1

0x0c26,	// (0x00063263) grid_highlight_pane_cp02_ParamLimits

0x0c3c,	// (0x00063279) toolbar_button_pane_cp01_ParamLimits

0x0c3c,	// (0x00063279) toolbar_button_pane_cp01

0x1ba0,	// (0x000641dd) temp_image_control_pane_ParamLimits

0x1ba0,	// (0x000641dd) temp_image_control_pane

0x225b,	// (0x00064898) main_mp3_pane

0x5601,	// (0x00067c3e) temp_image_control_pane_g1_ParamLimits

0x5601,	// (0x00067c3e) temp_image_control_pane_g1

0x560f,	// (0x00067c4c) temp_image_control_pane_g2_ParamLimits

0x560f,	// (0x00067c4c) temp_image_control_pane_g2

0x5621,	// (0x00067c5e) temp_image_control_pane_g3_ParamLimits

0x5621,	// (0x00067c5e) temp_image_control_pane_g3

0xb19d,	// (0x0006d7da) temp_image_control_pane_g4_ParamLimits

0xb19d,	// (0x0006d7da) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x00071d7a) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x00071d7a) temp_image_control_pane_g

0x5601,	// (0x00067c3e) main_mp3_pane_g1

0xb1ae,	// (0x0006d7eb) main_mp3_pane_g2

0x0007,

0xf746,	// (0x00071d83) main_mp3_pane_g

0x5664,	// (0x00067ca1) main_mp3_pane_t1

0x0ddc,	// (0x00063419) main_camera_pane_g8_ParamLimits

0x0ddc,	// (0x00063419) main_camera_pane_g8

0x8c9a,	// (0x0006b2d7) main_video_pane_g7_ParamLimits

0x8c9a,	// (0x0006b2d7) main_video_pane_g7

0xaca9,	// (0x0006d2e6) main_camera2_pane_t7_ParamLimits

0xaca9,	// (0x0006d2e6) main_camera2_pane_t7

0x0f31,	// (0x0006356e) scroll_pane_cp025_ParamLimits

0x0f31,	// (0x0006356e) scroll_pane_cp025

0x0f45,	// (0x00063582) scroll_pane_cp026_ParamLimits

0x0f45,	// (0x00063582) scroll_pane_cp026

0x0f54,	// (0x00063591) wml_content_pane_ParamLimits

0x0386,	// (0x000629c3) main_touch_calib_pane

0xb246,	// (0x0006d883) main_touch_calib_pane_g1

0xb252,	// (0x0006d88f) main_touch_calib_pane_g2

0xb25e,	// (0x0006d89b) main_touch_calib_pane_g3

0xb26a,	// (0x0006d8a7) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x00071da1) main_touch_calib_pane_g

0xb276,	// (0x0006d8b3) main_touch_calib_pane_t1

0xb28b,	// (0x0006d8c8) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x00071daa) main_touch_calib_pane_t

0x1736,	// (0x00063d73) mup_progress_pane_cp02

0x176b,	// (0x00063da8) navi_pane_g1

0x1824,	// (0x00063e61) navi_pane_mp_t3

0x225b,	// (0x00064898) main_mp3_pane_ParamLimits

0xa945,	// (0x0006cf82) navi_pane_ParamLimits

0x5601,	// (0x00067c3e) main_mp3_pane_g1_ParamLimits

0xb1ae,	// (0x0006d7eb) main_mp3_pane_g2_ParamLimits

0xb1ba,	// (0x0006d7f7) main_mp3_pane_g3_ParamLimits

0xb1ba,	// (0x0006d7f7) main_mp3_pane_g3

0xb1c6,	// (0x0006d803) main_mp3_pane_g4_ParamLimits

0xb1c6,	// (0x0006d803) main_mp3_pane_g4

0x5631,	// (0x00067c6e) main_mp3_pane_g5_ParamLimits

0x5631,	// (0x00067c6e) main_mp3_pane_g5

0x563f,	// (0x00067c7c) main_mp3_pane_g6_ParamLimits

0x563f,	// (0x00067c7c) main_mp3_pane_g6

0x564c,	// (0x00067c89) main_mp3_pane_g7_ParamLimits

0x564c,	// (0x00067c89) main_mp3_pane_g7

0x5658,	// (0x00067c95) main_mp3_pane_g8_ParamLimits

0x5658,	// (0x00067c95) main_mp3_pane_g8

0xf746,	// (0x00071d83) main_mp3_pane_g_ParamLimits

0xb1d2,	// (0x0006d80f) main_mp3_pane_t2

0xb1e0,	// (0x0006d81d) main_mp3_pane_t3

0x5672,	// (0x00067caf) main_mp3_pane_t4

0x5680,	// (0x00067cbd) main_mp3_pane_t5

0x0005,

0xf757,	// (0x00071d94) main_mp3_pane_t

0x568e,	// (0x00067ccb) mup_progress_pane_cp01

0x7cab,	// (0x0006a2e8) aid_zoom_text_secondary2

0x5485,	// (0x00067ac2) list_cale_ev2_pane

0x548d,	// (0x00067aca) scroll_pane_cp023_ParamLimits

0xb2d6,	// (0x0006d913) field_cale_ev2_pane_ParamLimits

0xb2d6,	// (0x0006d913) field_cale_ev2_pane

0xb2eb,	// (0x0006d928) field_cale_ev2_pane_g1_ParamLimits

0xb2eb,	// (0x0006d928) field_cale_ev2_pane_g1

0xb2f7,	// (0x0006d934) field_cale_ev2_pane_g2_ParamLimits

0xb2f7,	// (0x0006d934) field_cale_ev2_pane_g2

0xb30f,	// (0x0006d94c) field_cale_ev2_pane_g3_ParamLimits

0xb30f,	// (0x0006d94c) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x00071db5) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x00071db5) field_cale_ev2_pane_g

0x6c76,	// (0x000692b3) field_cale_ev2_pane_t1_ParamLimits

0x6c76,	// (0x000692b3) field_cale_ev2_pane_t1

0x6c8d,	// (0x000692ca) field_cale_ev2_pane_t2_ParamLimits

0x6c8d,	// (0x000692ca) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x00071dbe) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x00071dbe) field_cale_ev2_pane_t

0xa213,	// (0x0006c850) main_postcard_pane_g5_ParamLimits

0xa213,	// (0x0006c850) main_postcard_pane_g5

0xa21f,	// (0x0006c85c) main_postcard_pane_g6_ParamLimits

0xa21f,	// (0x0006c85c) main_postcard_pane_g6

0x8aef,	// (0x0006b12c) camera2_autofocus_pane_cp_ParamLimits

0x8aef,	// (0x0006b12c) camera2_autofocus_pane_cp

0x225b,	// (0x00064898) main_mup3_pane

0xb353,	// (0x0006d990) main_mup3_pane_g1_ParamLimits

0xb353,	// (0x0006d990) main_mup3_pane_g1

0xb374,	// (0x0006d9b1) main_mup3_pane_g2_ParamLimits

0xb374,	// (0x0006d9b1) main_mup3_pane_g2

0xb3e1,	// (0x0006da1e) main_mup3_pane_g3_ParamLimits

0xb3e1,	// (0x0006da1e) main_mup3_pane_g3

0xb41c,	// (0x0006da59) main_mup3_pane_g4_ParamLimits

0xb41c,	// (0x0006da59) main_mup3_pane_g4

0xb457,	// (0x0006da94) main_mup3_pane_g5_ParamLimits

0xb457,	// (0x0006da94) main_mup3_pane_g5

0xb492,	// (0x0006dacf) main_mup3_pane_g6_ParamLimits

0xb492,	// (0x0006dacf) main_mup3_pane_g6

0x5696,	// (0x00067cd3) main_mup3_pane_g7_ParamLimits

0x5696,	// (0x00067cd3) main_mup3_pane_g7

0x0007,

0xf791,	// (0x00071dce) main_mup3_pane_g_ParamLimits

0xf791,	// (0x00071dce) main_mup3_pane_g

0xb4fe,	// (0x0006db3b) main_mup3_pane_t1_ParamLimits

0xb4fe,	// (0x0006db3b) main_mup3_pane_t1

0xb55f,	// (0x0006db9c) main_mup3_pane_t2_ParamLimits

0xb55f,	// (0x0006db9c) main_mup3_pane_t2

0xb61a,	// (0x0006dc57) main_mup3_pane_t4_ParamLimits

0xb61a,	// (0x0006dc57) main_mup3_pane_t4

0xb660,	// (0x0006dc9d) main_mup3_pane_t5_ParamLimits

0xb660,	// (0x0006dc9d) main_mup3_pane_t5

0xb704,	// (0x0006dd41) main_mup3_pane_t6_ParamLimits

0xb704,	// (0x0006dd41) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x00071ddf) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x00071ddf) main_mup3_pane_t

0xb7ac,	// (0x0006dde9) mup3_progress_pane_ParamLimits

0xb7ac,	// (0x0006dde9) mup3_progress_pane

0xb810,	// (0x0006de4d) popup_mup3_control_window_ParamLimits

0xb810,	// (0x0006de4d) popup_mup3_control_window

0x56a4,	// (0x00067ce1) popup_mup3_text_window

0xb829,	// (0x0006de66) mup3_progress_pane_t1

0xb847,	// (0x0006de84) mup3_progress_pane_t2

0x56ac,	// (0x00067ce9) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x00071dec) mup3_progress_pane_t

0x56c9,	// (0x00067d06) mup_progress_pane_cp03

0x0386,	// (0x000629c3) bg_tb_trans_pane_cp04

0xb865,	// (0x0006dea2) mup3_volume_pane

0xb86d,	// (0x0006deaa) popup_mup3_control_window_g1

0xb876,	// (0x0006deb3) mup3_volume_pane_g1

0xb87f,	// (0x0006debc) mup3_volume_pane_g2

0xb888,	// (0x0006dec5) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x00071df3) mup3_volume_pane_g

0x0386,	// (0x000629c3) bg_tb_trans_pane_cp03

0x56d9,	// (0x00067d16) popup_mup3_text_window_g1

0x56e1,	// (0x00067d1e) popup_mup3_text_window_t1

0x0bfd,	// (0x0006323a) list_calc_item_pane_g1_ParamLimits

0x515d,	// (0x0006779a) mup_volume_pane_cp_g1

0xb2a0,	// (0x0006d8dd) main_touch_calib_pane_t3

0xb2b2,	// (0x0006d8ef) main_touch_calib_pane_t4

0xb2c4,	// (0x0006d901) main_touch_calib_pane_t5

0x7c6b,	// (0x0006a2a8) aid_cell_size_toolbar2

0x7c73,	// (0x0006a2b0) aid_popup3_width_pane

0x69d0,	// (0x0006900d) aid_zoom_text_msg_primary

0x8ac4,	// (0x0006b101) vorec_t7

0x0bc1,	// (0x000631fe) bg_calc_paper_pane_g1_ParamLimits

0x0bd9,	// (0x00063216) bg_calc_paper_pane_g2_ParamLimits

0x0bcd,	// (0x0006320a) bg_calc_paper_pane_g3_ParamLimits

0x0bf1,	// (0x0006322e) bg_calc_paper_pane_g4_ParamLimits

0x0be5,	// (0x00063222) bg_calc_paper_pane_g5_ParamLimits

0x8235,	// (0x0006a872) bg_calc_paper_pane_g6_ParamLimits

0x8244,	// (0x0006a881) bg_calc_paper_pane_g7_ParamLimits

0x8253,	// (0x0006a890) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00071795) bg_calc_paper_pane_g_ParamLimits

0x8262,	// (0x0006a89f) calc_bg_paper_pane_g9_ParamLimits

0x8bcf,	// (0x0006b20c) image_qvga_pane_ParamLimits

0x8bcf,	// (0x0006b20c) image_qvga_pane

0x0ab0,	// (0x000630ed) bg_popup_sub_pane_cp04_ParamLimits

0x1ad7,	// (0x00064114) popup_mup_playback_window_g1_ParamLimits

0x1ae3,	// (0x00064120) popup_mup_playback_window_t1_ParamLimits

0x1af8,	// (0x00064135) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00071b1f) popup_mup_playback_window_t_ParamLimits

0xadd0,	// (0x0006d40d) main_mup2_pane_g3_ParamLimits

0xadd0,	// (0x0006d40d) main_mup2_pane_g3

0x8e5f,	// (0x0006b49c) popup_toolbar_window_cp04

0x1eb5,	// (0x000644f2) popup_call2_audio_second_window_g3_ParamLimits

0x1eb5,	// (0x000644f2) popup_call2_audio_second_window_g3

0x45d6,	// (0x00066c13) popup_call2_audio_first_window_g4_ParamLimits

0x45d6,	// (0x00066c13) popup_call2_audio_first_window_g4

0x4c55,	// (0x00067292) popup_call2_audio_in_window_g4_ParamLimits

0x4c55,	// (0x00067292) popup_call2_audio_in_window_g4

0xa309,	// (0x0006c946) aid_area_sk_bg_cut_ParamLimits

0xa309,	// (0x0006c946) aid_area_sk_bg_cut

0x1b0d,	// (0x0006414a) aid_area_sk_bg_cut_2_ParamLimits

0x1b0d,	// (0x0006414a) aid_area_sk_bg_cut_2

0xb110,	// (0x0006d74d) aid_placing_details_win

0xb118,	// (0x0006d755) aid_placing_details_win_2

0x5543,	// (0x00067b80) camera2_autofocus_pane_g1_ParamLimits

0x7e98,	// (0x0006a4d5) popup_fixed_preview_cale_window_ParamLimits

0x7e98,	// (0x0006a4d5) popup_fixed_preview_cale_window

0x18bd,	// (0x00063efa) navi_slider_pane_g3

0x18b4,	// (0x00063ef1) navi_slider_pane_g4

0x18ab,	// (0x00063ee8) navi_slider_pane_g5

0x18bd,	// (0x00063efa) navi_slider_pane_g6

0x9c90,	// (0x0006c2cd) navi_slider_pane_g7

0x19cc,	// (0x00064009) mup_scale_pane_g3

0x19d5,	// (0x00064012) mup_scale_pane_g4

0x19de,	// (0x0006401b) mup_scale_pane_g5

0xa080,	// (0x0006c6bd) mup_scale_pane_g6

0xa089,	// (0x0006c6c6) mup_scale_pane_g7

0x18bd,	// (0x00063efa) cams2_slider_pane_g3

0x51df,	// (0x0006781c) cams2_slider_pane_g4

0xb080,	// (0x0006d6bd) cams2_slider_pane_g5

0x18bd,	// (0x00063efa) cams2_slider_pane_g6

0xb088,	// (0x0006d6c5) cams2_slider_pane_g7

0x5402,	// (0x00067a3f) camera2_autofocus_pane_cp_g1

0x4ff6,	// (0x00067633) bg_popup_preview_window_pane_cp02_ParamLimits

0x4ff6,	// (0x00067633) bg_popup_preview_window_pane_cp02

0x56ef,	// (0x00067d2c) list_fp_cale_pane_ParamLimits

0x56ef,	// (0x00067d2c) list_fp_cale_pane

0x56fb,	// (0x00067d38) popup_fixed_preview_cale_window_t1_ParamLimits

0x56fb,	// (0x00067d38) popup_fixed_preview_cale_window_t1

0xb891,	// (0x0006dece) popup_fixed_preview_cale_window_t2_ParamLimits

0xb891,	// (0x0006dece) popup_fixed_preview_cale_window_t2

0xb8a6,	// (0x0006dee3) popup_fixed_preview_cale_window_t3_ParamLimits

0xb8a6,	// (0x0006dee3) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x00071dfa) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x00071dfa) popup_fixed_preview_cale_window_t

0xb8bb,	// (0x0006def8) list_single_fp_cale_pane_ParamLimits

0xb8bb,	// (0x0006def8) list_single_fp_cale_pane

0x5719,	// (0x00067d56) list_single_fp_cale_pane_g1_ParamLimits

0x5719,	// (0x00067d56) list_single_fp_cale_pane_g1

0x5725,	// (0x00067d62) list_single_fp_cale_pane_g2_ParamLimits

0x5725,	// (0x00067d62) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x00071e01) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x00071e01) list_single_fp_cale_pane_g

0x573e,	// (0x00067d7b) list_single_fp_cale_pane_t1_ParamLimits

0x573e,	// (0x00067d7b) list_single_fp_cale_pane_t1

0x5750,	// (0x00067d8d) list_single_fp_cale_pane_t2_ParamLimits

0x5750,	// (0x00067d8d) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x00071e08) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x00071e08) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0386,	// (0x000629c3) main_dialer_pane

0xb8c8,	// (0x0006df05) aid_cell_size_keypad

0xb8d2,	// (0x0006df0f) dialer_ne_pane

0xb8da,	// (0x0006df17) grid_dialer_command_1_pane

0xb8e2,	// (0x0006df1f) grid_dialer_command_2_pane

0xb8ea,	// (0x0006df27) grid_dialer_keypad_pane

0xb8fa,	// (0x0006df37) bg_popup_call_pane_cp06_ParamLimits

0xb8fa,	// (0x0006df37) bg_popup_call_pane_cp06

0xb906,	// (0x0006df43) dialer_ne_clear_pane_ParamLimits

0xb906,	// (0x0006df43) dialer_ne_clear_pane

0x5783,	// (0x00067dc0) dialer_ne_pane_g1

0x578b,	// (0x00067dc8) dialer_ne_pane_t1_ParamLimits

0x578b,	// (0x00067dc8) dialer_ne_pane_t1

0xb912,	// (0x0006df4f) dialer_ne_pane_t2_ParamLimits

0xb912,	// (0x0006df4f) dialer_ne_pane_t2

0xb92f,	// (0x0006df6c) dialer_ne_pane_t3_ParamLimits

0xb92f,	// (0x0006df6c) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x00071e0d) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x00071e0d) dialer_ne_pane_t

0xb953,	// (0x0006df90) dialer_ne_pane_t3_copy1_ParamLimits

0xb953,	// (0x0006df90) dialer_ne_pane_t3_copy1

0xb977,	// (0x0006dfb4) cell_dialer_keypad_pane_ParamLimits

0xb977,	// (0x0006dfb4) cell_dialer_keypad_pane

0xb98c,	// (0x0006dfc9) cell_dialer_command_1_pane_ParamLimits

0xb98c,	// (0x0006dfc9) cell_dialer_command_1_pane

0xb9a2,	// (0x0006dfdf) cell_dialer_command_2_pane_ParamLimits

0xb9a2,	// (0x0006dfdf) cell_dialer_command_2_pane

0x579d,	// (0x00067dda) bg_button_pane_cp02_ParamLimits

0x579d,	// (0x00067dda) bg_button_pane_cp02

0xb9b1,	// (0x0006dfee) cell_dialer_keypad_pane_g1_ParamLimits

0xb9b1,	// (0x0006dfee) cell_dialer_keypad_pane_g1

0x579d,	// (0x00067dda) bg_button_pane_cp03_ParamLimits

0x579d,	// (0x00067dda) bg_button_pane_cp03

0xb9c6,	// (0x0006e003) cell_dialer_command_1_pane_g1_ParamLimits

0xb9c6,	// (0x0006e003) cell_dialer_command_1_pane_g1

0x57a9,	// (0x00067de6) bg_button_pane_cp04

0xb9d9,	// (0x0006e016) cell_dialer_command_2_pane_g1

0x0dca,	// (0x00063407) bg_button_pane_cp06

0x57b1,	// (0x00067dee) dialer_ne_clear_pane_g1

0x1777,	// (0x00063db4) navi_pane_g2

0x17a5,	// (0x00063de2) navi_pane_g3

0x0002,

0xf3e5,	// (0x00071a22) navi_pane_g

0x1832,	// (0x00063e6f) navi_pane_mv_g2

0x1859,	// (0x00063e96) navi_pane_mv_g5

0x9c5b,	// (0x0006c298) navi_pane_mv_t1

0x0ba3,	// (0x000631e0) main_clock2_pane

0xba15,	// (0x0006e052) main_clock2_list_pane_ParamLimits

0xba15,	// (0x0006e052) main_clock2_list_pane

0xba3b,	// (0x0006e078) main_clock2_pane_t1_ParamLimits

0xba3b,	// (0x0006e078) main_clock2_pane_t1

0xba5b,	// (0x0006e098) main_clock2_pane_t2_ParamLimits

0xba5b,	// (0x0006e098) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x00071e19) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x00071e19) main_clock2_pane_t

0xbab4,	// (0x0006e0f1) popup_clock_analogue_window_cp03_ParamLimits

0xbab4,	// (0x0006e0f1) popup_clock_analogue_window_cp03

0xbad1,	// (0x0006e10e) popup_clock_digital_window_cp02_ParamLimits

0xbad1,	// (0x0006e10e) popup_clock_digital_window_cp02

0xbb3e,	// (0x0006e17b) main_clock2_list_single_pane_ParamLimits

0xbb3e,	// (0x0006e17b) main_clock2_list_single_pane

0x0dca,	// (0x00063407) list_highlight_pane_cp05

0x57e9,	// (0x00067e26) main_clock2_list_single_pane_t1

0x8e5f,	// (0x0006b49c) popup_toolbar_window_cp04_ParamLimits

0xb16d,	// (0x0006d7aa) camera2_autofocus_pane_g2_ParamLimits

0xb16d,	// (0x0006d7aa) camera2_autofocus_pane_g2

0xb179,	// (0x0006d7b6) camera2_autofocus_pane_g3_ParamLimits

0xb179,	// (0x0006d7b6) camera2_autofocus_pane_g3

0xb185,	// (0x0006d7c2) camera2_autofocus_pane_g4_ParamLimits

0xb185,	// (0x0006d7c2) camera2_autofocus_pane_g4

0xb191,	// (0x0006d7ce) camera2_autofocus_pane_g5_ParamLimits

0xb191,	// (0x0006d7ce) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x00071d5d) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x00071d5d) camera2_autofocus_pane_g

0xb333,	// (0x0006d970) camera2_autofocus_pane_cp_g2

0xb33b,	// (0x0006d978) camera2_autofocus_pane_cp_g3

0xb343,	// (0x0006d980) camera2_autofocus_pane_cp_g4

0xb34b,	// (0x0006d988) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x00071dc3) camera2_autofocus_pane_cp_g

0xb8f2,	// (0x0006df2f) popup_dialer_spcha_window

0x0386,	// (0x000629c3) bg_popup_sub_pane_cp07

0x57f7,	// (0x00067e34) list_spcha_pane

0x57ff,	// (0x00067e3c) list_single_spcha_pane_ParamLimits

0x57ff,	// (0x00067e3c) list_single_spcha_pane

0x0386,	// (0x000629c3) list_highlight_pane_cp06

0x5810,	// (0x00067e4d) list_single_spcha_pane_t1

0x49ff,	// (0x0006703c) popup_call2_audio_out_window_g4_ParamLimits

0x49ff,	// (0x0006703c) popup_call2_audio_out_window_g4

0x0386,	// (0x000629c3) main_imed2_pane

0xa88e,	// (0x0006cecb) popup_imed_adjust2_window

0xa89f,	// (0x0006cedc) popup_imed_trans_window_ParamLimits

0xa89f,	// (0x0006cedc) popup_imed_trans_window

0x5246,	// (0x00067883) popup_blid_sat_info2_window_t1

0x5254,	// (0x00067891) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x00071cf2) popup_blid_sat_info2_window_t

0xbbe8,	// (0x0006e225) aid_size_cell_colour_35

0xbc02,	// (0x0006e23f) aid_size_cell_colour_112

0xbc19,	// (0x0006e256) aid_size_cell_effect

0x225b,	// (0x00064898) bg_tb_trans_pane_cp02

0x135d,	// (0x0006399a) heading_imed_pane

0xbc33,	// (0x0006e270) listscroll_imed_pane

0x581e,	// (0x00067e5b) heading_imed_pane_g1

0x5826,	// (0x00067e63) heading_imed_pane_t1

0x5834,	// (0x00067e71) grid_imed_colour_35_pane_ParamLimits

0x5834,	// (0x00067e71) grid_imed_colour_35_pane

0xbc3f,	// (0x0006e27c) grid_imed_effect_pane

0x5847,	// (0x00067e84) list_imed_aspect_pane

0xbc4b,	// (0x0006e288) scroll_pane_cp027_ParamLimits

0xbc4b,	// (0x0006e288) scroll_pane_cp027

0xbc57,	// (0x0006e294) cell_imed_effect_pane_ParamLimits

0xbc57,	// (0x0006e294) cell_imed_effect_pane

0x584f,	// (0x00067e8c) cell_imed_colour_pane_ParamLimits

0x584f,	// (0x00067e8c) cell_imed_colour_pane

0x5889,	// (0x00067ec6) cell_imed_colour_pane_g1_ParamLimits

0x5889,	// (0x00067ec6) cell_imed_colour_pane_g1

0x589a,	// (0x00067ed7) hgihlgiht_grid_pane_cp016_ParamLimits

0x589a,	// (0x00067ed7) hgihlgiht_grid_pane_cp016

0xbc6d,	// (0x0006e2aa) cell_imed_effect_pane_g1

0xbc75,	// (0x0006e2b2) grid_highlight_pane_cp017

0x58aa,	// (0x00067ee7) list_imed_single_pane_ParamLimits

0x58aa,	// (0x00067ee7) list_imed_single_pane

0x0386,	// (0x000629c3) list_highlight_pane_cp07

0x58bd,	// (0x00067efa) list_imed_aspect_pane_comp1_t1

0x5002,	// (0x0006763f) bg_tb_trans_pane_cp05

0x58dd,	// (0x00067f1a) popup_imed_adjust2_window_g1

0x5904,	// (0x00067f41) popup_imed_adjust2_window_t1

0x591c,	// (0x00067f59) slider_imed_adjust_pane

0x5930,	// (0x00067f6d) slider_imed_adjust_pane_g1

0x5940,	// (0x00067f7d) slider_imed_adjust_pane_g2

0x5950,	// (0x00067f8d) slider_imed_adjust_pane_g3

0x5961,	// (0x00067f9e) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x00071e36) slider_imed_adjust_pane_g

0xbc7e,	// (0x0006e2bb) aid_size_cell_clipart2

0xbc8a,	// (0x0006e2c7) grid_imed_clipart_pane

0x5972,	// (0x00067faf) scroll_pane_cp031

0xbc94,	// (0x0006e2d1) cell_imed_clipart_pane_ParamLimits

0xbc94,	// (0x0006e2d1) cell_imed_clipart_pane

0xbca8,	// (0x0006e2e5) cell_imed_clipart_pane_g1

0x0386,	// (0x000629c3) grid_highlight_pane_cp014

0xba21,	// (0x0006e05e) main_clock2_pane_g1_ParamLimits

0xba21,	// (0x0006e05e) main_clock2_pane_g1

0xbae9,	// (0x0006e126) aid_call2_pane_cp10

0xbafb,	// (0x0006e138) aid_call_pane_cp10

0x16d8,	// (0x00063d15) popup_clock_analogue_window_cp10_g1

0x16d8,	// (0x00063d15) popup_clock_analogue_window_cp10_g2

0xbb0d,	// (0x0006e14a) popup_clock_analogue_window_cp10_g3

0xbb0d,	// (0x0006e14a) popup_clock_analogue_window_cp10_g4

0x16d8,	// (0x00063d15) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x00071e24) popup_clock_analogue_window_cp10_g

0xbb1f,	// (0x0006e15c) popup_clock_analogue_window_cp10_t1

0xbb50,	// (0x0006e18d) clock_digital_number_pane_cp10_ParamLimits

0xbb50,	// (0x0006e18d) clock_digital_number_pane_cp10

0xbb68,	// (0x0006e1a5) clock_digital_number_pane_cp11_ParamLimits

0xbb68,	// (0x0006e1a5) clock_digital_number_pane_cp11

0xbb80,	// (0x0006e1bd) clock_digital_number_pane_cp12_ParamLimits

0xbb80,	// (0x0006e1bd) clock_digital_number_pane_cp12

0xbb98,	// (0x0006e1d5) clock_digital_number_pane_cp13_ParamLimits

0xbb98,	// (0x0006e1d5) clock_digital_number_pane_cp13

0xbbb0,	// (0x0006e1ed) clock_digital_separator_pane_cp10_ParamLimits

0xbbb0,	// (0x0006e1ed) clock_digital_separator_pane_cp10

0xbbc8,	// (0x0006e205) popup_clock_digital_window_cp02_t1_ParamLimits

0xbbc8,	// (0x0006e205) popup_clock_digital_window_cp02_t1

0x0aa8,	// (0x000630e5) clock_digital_number_pane_cp10_g1

0x0aa8,	// (0x000630e5) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x00071e3f) clock_digital_number_pane_cp10_g

0x0aa8,	// (0x000630e5) clock_digital_separator_pane_cp10_g1

0x0aa8,	// (0x000630e5) clock_digital_separator_pane_g2_cp10

0x1861,	// (0x00063e9e) navi_pane_vded_g4

0x186a,	// (0x00063ea7) navi_pane_vded_g5

0x1873,	// (0x00063eb0) navi_pane_vded_t1

0x0386,	// (0x000629c3) main_vded_pane

0xbcb1,	// (0x0006e2ee) main_vded_pane_g1

0xbcb9,	// (0x0006e2f6) main_vded_pane_g2

0xbcc1,	// (0x0006e2fe) main_vded_pane_g3

0x0002,

0xf807,	// (0x00071e44) main_vded_pane_g

0xbcc9,	// (0x0006e306) main_vded_pane_t1

0xbcd7,	// (0x0006e314) main_vded_pane_t2

0x0001,

0xf80e,	// (0x00071e4b) main_vded_pane_t

0xbce5,	// (0x0006e322) vded_slider_pane

0xbced,	// (0x0006e32a) vded_video_pane

0x597a,	// (0x00067fb7) vded_video_pane_g1

0xbcf5,	// (0x0006e332) vded_video_pane_g2

0x5402,	// (0x00067a3f) vded_video_pane_g3

0x0002,

0xf813,	// (0x00071e50) vded_video_pane_g

0x5984,	// (0x00067fc1) vded_slider_pane_g1

0x515d,	// (0x0006779a) vded_slider_pane_g2

0x598d,	// (0x00067fca) vded_slider_pane_g3

0x5996,	// (0x00067fd3) vded_slider_pane_g4

0x599f,	// (0x00067fdc) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x00071e57) vded_slider_pane_g

0xb804,	// (0x0006de41) mup3_rocker_pane_ParamLimits

0xb804,	// (0x0006de41) mup3_rocker_pane

0xbcfe,	// (0x0006e33b) mup3_control_keys_pane_g1

0xbd06,	// (0x0006e343) mup3_control_keys_pane_g2

0xbd0e,	// (0x0006e34b) mup3_control_keys_pane_g3

0xbd16,	// (0x0006e353) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x00071e62) mup3_control_keys_pane_g

0x7ebe,	// (0x0006a4fb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7ebe,	// (0x0006a4fb) popup_toolbar2_fixed_window_cp01

0xb81c,	// (0x0006de59) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb81c,	// (0x0006de59) popup_toolbar2_fixed_window_cp02

0x2027,	// (0x00064664) popup_call2_audio_second_window_t4_ParamLimits

0x2027,	// (0x00064664) popup_call2_audio_second_window_t4

0x486c,	// (0x00066ea9) popup_call2_audio_first_window_t6_ParamLimits

0x486c,	// (0x00066ea9) popup_call2_audio_first_window_t6

0x4b02,	// (0x0006713f) popup_call2_audio_out_window_t6_ParamLimits

0x4b02,	// (0x0006713f) popup_call2_audio_out_window_t6

0x0386,	// (0x000629c3) main_vitu_pane

0xbd26,	// (0x0006e363) aid_size_cell_itu_ParamLimits

0xbd26,	// (0x0006e363) aid_size_cell_itu

0x40b3,	// (0x000666f0) bg_popup_window_pane_cp08_ParamLimits

0x40b3,	// (0x000666f0) bg_popup_window_pane_cp08

0xbd34,	// (0x0006e371) field_vitu_entry_pane_ParamLimits

0xbd34,	// (0x0006e371) field_vitu_entry_pane

0xbd41,	// (0x0006e37e) grid_vitu_function_pane_ParamLimits

0xbd41,	// (0x0006e37e) grid_vitu_function_pane

0xbd4d,	// (0x0006e38a) grid_vitu_itu_pane_ParamLimits

0xbd4d,	// (0x0006e38a) grid_vitu_itu_pane

0xbd59,	// (0x0006e396) cell_vitu_itu_pane_ParamLimits

0xbd59,	// (0x0006e396) cell_vitu_itu_pane

0xbd6e,	// (0x0006e3ab) cell_vitu_function_pane_ParamLimits

0xbd6e,	// (0x0006e3ab) cell_vitu_function_pane

0x225b,	// (0x00064898) bg_popup_sub_pane_cp08_ParamLimits

0x225b,	// (0x00064898) bg_popup_sub_pane_cp08

0xbd80,	// (0x0006e3bd) field_vitu_entry_pane_t1_ParamLimits

0xbd80,	// (0x0006e3bd) field_vitu_entry_pane_t1

0x59c0,	// (0x00067ffd) field_vitu_entry_pane_t2_ParamLimits

0x59c0,	// (0x00067ffd) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x00071e70) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x00071e70) field_vitu_entry_pane_t

0x59dd,	// (0x0006801a) bg_button_pane_cp05_ParamLimits

0x59dd,	// (0x0006801a) bg_button_pane_cp05

0xbd99,	// (0x0006e3d6) cell_vitu_itu_pane_g1

0xbdb1,	// (0x0006e3ee) cell_vitu_itu_pane_t1_ParamLimits

0xbdb1,	// (0x0006e3ee) cell_vitu_itu_pane_t1

0xbdc3,	// (0x0006e400) cell_vitu_itu_pane_t2_ParamLimits

0xbdc3,	// (0x0006e400) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x00071e75) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x00071e75) cell_vitu_itu_pane_t

0x59eb,	// (0x00068028) bg_button_pane_cp07

0xbdf8,	// (0x0006e435) cell_vitu_function_pane_g1

0x80eb,	// (0x0006a728) main_calc_pane_g1

0x7ca3,	// (0x0006a2e0) aid_visual_content_pane

0x0386,	// (0x000629c3) main_vradio_pane

0xbe01,	// (0x0006e43e) main_vradio_pane_g1_ParamLimits

0xbe01,	// (0x0006e43e) main_vradio_pane_g1

0x59f5,	// (0x00068032) main_vradio_pane_g2_ParamLimits

0x59f5,	// (0x00068032) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x00071e7c) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x00071e7c) main_vradio_pane_g

0xbe0f,	// (0x0006e44c) main_vradio_pane_t1_ParamLimits

0xbe0f,	// (0x0006e44c) main_vradio_pane_t1

0xbe21,	// (0x0006e45e) main_vradio_pane_t2_ParamLimits

0xbe21,	// (0x0006e45e) main_vradio_pane_t2

0x5a02,	// (0x0006803f) main_vradio_pane_t3_ParamLimits

0x5a02,	// (0x0006803f) main_vradio_pane_t3

0x0002,

0xf844,	// (0x00071e81) main_vradio_pane_t_ParamLimits

0xf844,	// (0x00071e81) main_vradio_pane_t

0xbe33,	// (0x0006e470) vradio_rocker_control_pane_ParamLimits

0xbe33,	// (0x0006e470) vradio_rocker_control_pane

0xbe3f,	// (0x0006e47c) vradio_station_info_pane_ParamLimits

0xbe3f,	// (0x0006e47c) vradio_station_info_pane

0x5a14,	// (0x00068051) vradio_frequency_info_pane_ParamLimits

0x5a14,	// (0x00068051) vradio_frequency_info_pane

0x5402,	// (0x00067a3f) vradio_station_info_pane_g1

0x5a23,	// (0x00068060) vradio_station_info_pane_t1_ParamLimits

0x5a23,	// (0x00068060) vradio_station_info_pane_t1

0x5a45,	// (0x00068082) vradio_station_info_pane_t2_ParamLimits

0x5a45,	// (0x00068082) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x00071e88) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x00071e88) vradio_station_info_pane_t

0x5a57,	// (0x00068094) vradio_tuning_pane

0x5a5f,	// (0x0006809c) vradio_rocker_control_pane_g1

0x5a67,	// (0x000680a4) vradio_rocker_control_pane_g2

0x5a6f,	// (0x000680ac) vradio_rocker_control_pane_g3

0x5a77,	// (0x000680b4) vradio_rocker_control_pane_g4

0x5a7f,	// (0x000680bc) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x00071e8d) vradio_rocker_control_pane_g

0xbe4c,	// (0x0006e489) vradio_frequency_info_pane_g1

0x5a87,	// (0x000680c4) vradio_frequency_info_pane_t1_ParamLimits

0x5a87,	// (0x000680c4) vradio_frequency_info_pane_t1

0xbe54,	// (0x0006e491) vradio_tuning_pane_g1

0xbe5d,	// (0x0006e49a) vradio_tuning_pane_t1

0x7ce0,	// (0x0006a31d) area_side_right_pane_ParamLimits

0x7ce0,	// (0x0006a31d) area_side_right_pane

0x4fbd,	// (0x000675fa) status_small_pane_g1

0x4fc5,	// (0x00067602) status_small_pane_g2

0x4fce,	// (0x0006760b) status_small_pane_g3

0x4fd7,	// (0x00067614) status_small_pane_g4

0x0003,

0xf60b,	// (0x00071c48) status_small_pane_g

0x4fe0,	// (0x0006761d) status_small_pane_t1

0x0386,	// (0x000629c3) main_video3_pane

0x5a9b,	// (0x000680d8) cams_zoom_vslider_pane

0x5aa3,	// (0x000680e0) image3_wide_pane_ParamLimits

0x5aa3,	// (0x000680e0) image3_wide_pane

0x5abd,	// (0x000680fa) image3_wide_small_pane

0x5ac7,	// (0x00068104) main_video3_pane_g1_ParamLimits

0x5ac7,	// (0x00068104) main_video3_pane_g1

0x5ae3,	// (0x00068120) main_video3_pane_g2_ParamLimits

0x5ae3,	// (0x00068120) main_video3_pane_g2

0x0001,

0xf85b,	// (0x00071e98) main_video3_pane_g_ParamLimits

0xf85b,	// (0x00071e98) main_video3_pane_g

0x5aff,	// (0x0006813c) main_video3_pane_t1_ParamLimits

0x5aff,	// (0x0006813c) main_video3_pane_t1

0x5b2a,	// (0x00068167) main_video3_pane_t2_ParamLimits

0x5b2a,	// (0x00068167) main_video3_pane_t2

0x5b84,	// (0x000681c1) main_video3_pane_t3_ParamLimits

0x5b84,	// (0x000681c1) main_video3_pane_t3

0x0002,

0xf860,	// (0x00071e9d) main_video3_pane_t_ParamLimits

0xf860,	// (0x00071e9d) main_video3_pane_t

0x5baf,	// (0x000681ec) cams_zoom_vslider_pane_g1

0x5bb8,	// (0x000681f5) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x00071ea4) cams_zoom_vslider_pane_g

0x5bc0,	// (0x000681fd) small_slider_vertical_pane

0x5402,	// (0x00067a3f) small_slider_vertical_pane_g1

0x5402,	// (0x00067a3f) small_slider_vertical_pane_g2

0x5bc8,	// (0x00068205) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x00071ea9) small_slider_vertical_pane_g

0x0386,	// (0x000629c3) main_hwr_training_pane

0x5bd1,	// (0x0006820e) hwr_training_instruct_pane_ParamLimits

0x5bd1,	// (0x0006820e) hwr_training_instruct_pane

0xbe6c,	// (0x0006e4a9) hwr_training_navi_pane_ParamLimits

0xbe6c,	// (0x0006e4a9) hwr_training_navi_pane

0xbe80,	// (0x0006e4bd) hwr_training_write_pane_ParamLimits

0xbe80,	// (0x0006e4bd) hwr_training_write_pane

0x0386,	// (0x000629c3) bg_frame_shadow_pane

0x5c00,	// (0x0006823d) hwr_training_write_pane_g1

0x5c08,	// (0x00068245) hwr_training_write_pane_g2

0x5c10,	// (0x0006824d) hwr_training_write_pane_g3

0x5c18,	// (0x00068255) hwr_training_write_pane_g4

0x5c20,	// (0x0006825d) hwr_training_write_pane_g5

0x5c28,	// (0x00068265) hwr_training_write_pane_g6

0x5c30,	// (0x0006826d) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x00071eb0) hwr_training_write_pane_g

0xbeae,	// (0x0006e4eb) hwr_training_navi_pane_g1_ParamLimits

0xbeae,	// (0x0006e4eb) hwr_training_navi_pane_g1

0xbec0,	// (0x0006e4fd) hwr_training_navi_pane_g2_ParamLimits

0xbec0,	// (0x0006e4fd) hwr_training_navi_pane_g2

0xbed2,	// (0x0006e50f) hwr_training_navi_pane_g3_ParamLimits

0xbed2,	// (0x0006e50f) hwr_training_navi_pane_g3

0xbee2,	// (0x0006e51f) hwr_training_navi_pane_g4_ParamLimits

0xbee2,	// (0x0006e51f) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x00071ebf) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x00071ebf) hwr_training_navi_pane_g

0xbefc,	// (0x0006e539) hwr_training_navi_pane_t1

0xbf0a,	// (0x0006e547) list_single_hwr_training_instruct_pane_ParamLimits

0xbf0a,	// (0x0006e547) list_single_hwr_training_instruct_pane

0x5c38,	// (0x00068275) list_single_hwr_training_instruct_pane_t1

0x5342,	// (0x0006797f) bg_frame_shadow_pane_g1

0x5c47,	// (0x00068284) bg_frame_shadow_pane_g2

0x5c4f,	// (0x0006828c) bg_frame_shadow_pane_g3

0x5c57,	// (0x00068294) bg_frame_shadow_pane_g4

0x5c5f,	// (0x0006829c) bg_frame_shadow_pane_g5

0x5c67,	// (0x000682a4) bg_frame_shadow_pane_g6

0x5c6f,	// (0x000682ac) bg_frame_shadow_pane_g7

0x0c9c,	// (0x000632d9) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x00071eca) bg_frame_shadow_pane_g

0x0386,	// (0x000629c3) main_video_tele_dialer_pane

0xbf21,	// (0x0006e55e) aid_size_cell_video_keypad_ParamLimits

0xbf21,	// (0x0006e55e) aid_size_cell_video_keypad

0xbf31,	// (0x0006e56e) grid_video_dialer_keypad_pane_ParamLimits

0xbf31,	// (0x0006e56e) grid_video_dialer_keypad_pane

0xbf61,	// (0x0006e59e) video_down_pane_cp_ParamLimits

0xbf61,	// (0x0006e59e) video_down_pane_cp

0xbf89,	// (0x0006e5c6) cell_video_dialer_keypad_pane_ParamLimits

0xbf89,	// (0x0006e5c6) cell_video_dialer_keypad_pane

0x5c77,	// (0x000682b4) bg_button_pane_cp08_ParamLimits

0x5c77,	// (0x000682b4) bg_button_pane_cp08

0xbf9e,	// (0x0006e5db) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbf9e,	// (0x0006e5db) cell_video_dialer_keypad_pane_g1

0xb7f8,	// (0x0006de35) mup3_rocker2_pane_ParamLimits

0xb7f8,	// (0x0006de35) mup3_rocker2_pane

0x5402,	// (0x00067a3f) mup3_rocker2_pane_g1

0xa810,	// (0x0006ce4d) main_dialer2_pane

0x0386,	// (0x000629c3) main_mp4_pane

0xbfe1,	// (0x0006e61e) main_mp4_pane_g1_ParamLimits

0xbfe1,	// (0x0006e61e) main_mp4_pane_g1

0xbfef,	// (0x0006e62c) main_mp4_pane_g2_ParamLimits

0xbfef,	// (0x0006e62c) main_mp4_pane_g2

0xbffd,	// (0x0006e63a) main_mp4_pane_g3_ParamLimits

0xbffd,	// (0x0006e63a) main_mp4_pane_g3

0xc032,	// (0x0006e66f) main_mp4_pane_g4_ParamLimits

0xc032,	// (0x0006e66f) main_mp4_pane_g4

0xc05a,	// (0x0006e697) main_mp4_pane_g5_ParamLimits

0xc05a,	// (0x0006e697) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x00071eea) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x00071eea) main_mp4_pane_g

0xc0aa,	// (0x0006e6e7) main_mp4_pane_t1_ParamLimits

0xc0aa,	// (0x0006e6e7) main_mp4_pane_t1

0xc102,	// (0x0006e73f) main_mp4_pane_t2_ParamLimits

0xc102,	// (0x0006e73f) main_mp4_pane_t2

0xee76,	// (0x000714b3) main_mp4_pane_t3_ParamLimits

0xee76,	// (0x000714b3) main_mp4_pane_t3

0xc154,	// (0x0006e791) main_mp4_pane_t4_ParamLimits

0xc154,	// (0x0006e791) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x00071ef7) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x00071ef7) main_mp4_pane_t

0xc194,	// (0x0006e7d1) mp4_progress_pane_ParamLimits

0xc194,	// (0x0006e7d1) mp4_progress_pane

0xc1de,	// (0x0006e81b) mp4_rocker_pane_ParamLimits

0xc1de,	// (0x0006e81b) mp4_rocker_pane

0xee9e,	// (0x000714db) mp4_progress_pane_t1

0xeeb5,	// (0x000714f2) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00071f00) mp4_progress_pane_t

0xeecc,	// (0x00071509) mup_progress_pane_cp04

0x5402,	// (0x00067a3f) mp4_rocker_pane_g1

0xc1fc,	// (0x0006e839) aid_cell_size_keypad2_ParamLimits

0xc1fc,	// (0x0006e839) aid_cell_size_keypad2

0xc20c,	// (0x0006e849) dialer2_ne_pane_ParamLimits

0xc20c,	// (0x0006e849) dialer2_ne_pane

0xc218,	// (0x0006e855) grid_dialer2_keypad_pane_ParamLimits

0xc218,	// (0x0006e855) grid_dialer2_keypad_pane

0x29c3,	// (0x00065000) bg_popup_call_pane_cp07_ParamLimits

0x29c3,	// (0x00065000) bg_popup_call_pane_cp07

0xc224,	// (0x0006e861) dialer2_ne_pane_t1_ParamLimits

0xc224,	// (0x0006e861) dialer2_ne_pane_t1

0xc249,	// (0x0006e886) cell_dialer2_keypad_pane_ParamLimits

0xc249,	// (0x0006e886) cell_dialer2_keypad_pane

0xeeea,	// (0x00071527) bg_button_pane_pane_cp04_ParamLimits

0xeeea,	// (0x00071527) bg_button_pane_pane_cp04

0xc25e,	// (0x0006e89b) cell_dialer2_keypad_pane_g1_ParamLimits

0xc25e,	// (0x0006e89b) cell_dialer2_keypad_pane_g1

0x8d3b,	// (0x0006b378) aid_placing_vt_set_content_ParamLimits

0x8d3b,	// (0x0006b378) aid_placing_vt_set_content

0x8d61,	// (0x0006b39e) aid_placing_vt_set_title_ParamLimits

0x8d61,	// (0x0006b39e) aid_placing_vt_set_title

0x0386,	// (0x000629c3) main_image3_pane

0xc2ee,	// (0x0006e92b) area_side_right_pane_cp01_ParamLimits

0xc2ee,	// (0x0006e92b) area_side_right_pane_cp01

0x2e9c,	// (0x000654d9) main_image3_pane_g1_ParamLimits

0x2e9c,	// (0x000654d9) main_image3_pane_g1

0xc31b,	// (0x0006e958) main_image3_pane_g2_ParamLimits

0xc31b,	// (0x0006e958) main_image3_pane_g2

0xc332,	// (0x0006e96f) main_image3_pane_g3_ParamLimits

0xc332,	// (0x0006e96f) main_image3_pane_g3

0xc349,	// (0x0006e986) main_image3_pane_g4_ParamLimits

0xc349,	// (0x0006e986) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00071f0f) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00071f0f) main_image3_pane_g

0xc360,	// (0x0006e99d) main_image3_pane_t1_ParamLimits

0xc360,	// (0x0006e99d) main_image3_pane_t1

0xc385,	// (0x0006e9c2) main_image3_pane_t2_ParamLimits

0xc385,	// (0x0006e9c2) main_image3_pane_t2

0xc3a4,	// (0x0006e9e1) main_image3_pane_t3_ParamLimits

0xc3a4,	// (0x0006e9e1) main_image3_pane_t3

0x0003,

0xf8db,	// (0x00071f18) main_image3_pane_t_ParamLimits

0xf8db,	// (0x00071f18) main_image3_pane_t

0x40b3,	// (0x000666f0) grid_sctrl_middle_pane_cp01_ParamLimits

0x40b3,	// (0x000666f0) grid_sctrl_middle_pane_cp01

0xc3ff,	// (0x0006ea3c) cell_sctrl_middle_pane_cp01_ParamLimits

0xc3ff,	// (0x0006ea3c) cell_sctrl_middle_pane_cp01

0xc410,	// (0x0006ea4d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc410,	// (0x0006ea4d) cell_sctrl_middle_pane_cp01_g1

0x0386,	// (0x000629c3) main_call4_pane

0xc41d,	// (0x0006ea5a) aid_size_button_call4_ParamLimits

0xc41d,	// (0x0006ea5a) aid_size_button_call4

0xc44b,	// (0x0006ea88) call4_windows_pane_ParamLimits

0xc44b,	// (0x0006ea88) call4_windows_pane

0xc463,	// (0x0006eaa0) grid_call4_button_pane_ParamLimits

0xc463,	// (0x0006eaa0) grid_call4_button_pane

0xeef6,	// (0x00071533) call4_windows_conf_pane

0xc47d,	// (0x0006eaba) popup_call4_audio_first_window_ParamLimits

0xc47d,	// (0x0006eaba) popup_call4_audio_first_window

0xc49d,	// (0x0006eada) popup_call4_audio_second_window_ParamLimits

0xc49d,	// (0x0006eada) popup_call4_audio_second_window

0xef29,	// (0x00071566) popup_call4_audio_wait_window_ParamLimits

0xef29,	// (0x00071566) popup_call4_audio_wait_window

0xc4af,	// (0x0006eaec) cell_call4_button_pane_ParamLimits

0xc4af,	// (0x0006eaec) cell_call4_button_pane

0xc4d2,	// (0x0006eb0f) bg_button_pane_cp09_ParamLimits

0xc4d2,	// (0x0006eb0f) bg_button_pane_cp09

0xc4de,	// (0x0006eb1b) cell_call4_button_pane_g1_ParamLimits

0xc4de,	// (0x0006eb1b) cell_call4_button_pane_g1

0xc4eb,	// (0x0006eb28) cell_call4_button_pane_t1_ParamLimits

0xc4eb,	// (0x0006eb28) cell_call4_button_pane_t1

0xef6f,	// (0x000715ac) popup_call4_audio_conf_window_ParamLimits

0xef6f,	// (0x000715ac) popup_call4_audio_conf_window

0xb829,	// (0x0006de66) mup3_progress_pane_t1_ParamLimits

0xb847,	// (0x0006de84) mup3_progress_pane_t2_ParamLimits

0x56ac,	// (0x00067ce9) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x00071dec) mup3_progress_pane_t_ParamLimits

0x56c9,	// (0x00067d06) mup_progress_pane_cp03_ParamLimits

0xbd1e,	// (0x0006e35b) mup3_control_keys_pane_g4_copy1

0xc1c2,	// (0x0006e7ff) mp4_rocker2_pane_ParamLimits

0xc1c2,	// (0x0006e7ff) mp4_rocker2_pane

0xef83,	// (0x000715c0) mp4_rocker2_pane_g1

0xef8b,	// (0x000715c8) mp4_rocker2_pane_g2

0xc4fd,	// (0x0006eb3a) mp4_rocker2_pane_g3

0xc505,	// (0x0006eb42) mp4_rocker2_pane_g4

0xc50d,	// (0x0006eb4a) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x00071f21) mp4_rocker2_pane_g

0x0386,	// (0x000629c3) main_camera4_pane

0x0386,	// (0x000629c3) main_video4_pane

0xbf3d,	// (0x0006e57a) main_video_tele_dialer_pane_t1_ParamLimits

0xbf3d,	// (0x0006e57a) main_video_tele_dialer_pane_t1

0xbf4f,	// (0x0006e58c) main_video_tele_dialer_pane_t2_ParamLimits

0xbf4f,	// (0x0006e58c) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x00071edb) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x00071edb) main_video_tele_dialer_pane_t

0xc52b,	// (0x0006eb68) cam4_autofocus_pane_ParamLimits

0xc52b,	// (0x0006eb68) cam4_autofocus_pane

0xc541,	// (0x0006eb7e) cam4_image_uncrop_pane_ParamLimits

0xc541,	// (0x0006eb7e) cam4_image_uncrop_pane

0xc556,	// (0x0006eb93) cam4_indicators_pane_ParamLimits

0xc556,	// (0x0006eb93) cam4_indicators_pane

0xc570,	// (0x0006ebad) main_camera4_pane_g1_ParamLimits

0xc570,	// (0x0006ebad) main_camera4_pane_g1

0xc57c,	// (0x0006ebb9) main_camera4_pane_g2_ParamLimits

0xc57c,	// (0x0006ebb9) main_camera4_pane_g2

0xc57c,	// (0x0006ebb9) main_camera4_pane_g3_ParamLimits

0xc57c,	// (0x0006ebb9) main_camera4_pane_g3

0xc588,	// (0x0006ebc5) main_camera4_pane_g4_ParamLimits

0xc588,	// (0x0006ebc5) main_camera4_pane_g4

0xc594,	// (0x0006ebd1) main_camera4_pane_g5_ParamLimits

0xc594,	// (0x0006ebd1) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00071f2c) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00071f2c) main_camera4_pane_g

0xc5ae,	// (0x0006ebeb) main_camera4_pane_t1_ParamLimits

0xc5ae,	// (0x0006ebeb) main_camera4_pane_t1

0x5631,	// (0x00067c6e) bg_tb_trans_pane_cp06

0xc5fe,	// (0x0006ec3b) cam4_indicators_pane_g1

0xc60f,	// (0x0006ec4c) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x00071f47) cam4_indicators_pane_g

0xc627,	// (0x0006ec64) cam4_indicators_pane_t1

0xc64f,	// (0x0006ec8c) main_video4_pane_g1_ParamLimits

0xc64f,	// (0x0006ec8c) main_video4_pane_g1

0xc65b,	// (0x0006ec98) main_video4_pane_g2_ParamLimits

0xc65b,	// (0x0006ec98) main_video4_pane_g2

0xc667,	// (0x0006eca4) main_video4_pane_g3_ParamLimits

0xc667,	// (0x0006eca4) main_video4_pane_g3

0xc673,	// (0x0006ecb0) main_video4_pane_g4_ParamLimits

0xc673,	// (0x0006ecb0) main_video4_pane_g4

0x0004,

0xf911,	// (0x00071f4e) main_video4_pane_g_ParamLimits

0xf911,	// (0x00071f4e) main_video4_pane_g

0xc693,	// (0x0006ecd0) vid4_indicators_pane_ParamLimits

0xc693,	// (0x0006ecd0) vid4_indicators_pane

0xc6b0,	// (0x0006eced) video4_image_uncrop_cif_pane_ParamLimits

0xc6b0,	// (0x0006eced) video4_image_uncrop_cif_pane

0xc6bd,	// (0x0006ecfa) video4_image_uncrop_nhd_pane_ParamLimits

0xc6bd,	// (0x0006ecfa) video4_image_uncrop_nhd_pane

0xc541,	// (0x0006eb7e) video4_image_uncrop_vga_pane_ParamLimits

0xc541,	// (0x0006eb7e) video4_image_uncrop_vga_pane

0x225b,	// (0x00064898) bg_tb_trans_pane_cp07

0xc6d2,	// (0x0006ed0f) vid4_indicators_pane_g1

0xc6e6,	// (0x0006ed23) vid4_indicators_pane_g2

0xc6fa,	// (0x0006ed37) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x00071f59) vid4_indicators_pane_g

0xc727,	// (0x0006ed64) vid4_indicators_pane_t1

0xc73e,	// (0x0006ed7b) cam4_autofocus_pane_g1

0xc746,	// (0x0006ed83) cam4_autofocus_pane_g2

0xc74e,	// (0x0006ed8b) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x00071f64) cam4_autofocus_pane_g

0xc756,	// (0x0006ed93) cam4_autofocus_pane_g3_copy1

0xbf6d,	// (0x0006e5aa) video_down_pane_cp_t1

0xbf7b,	// (0x0006e5b8) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x00071ee0) video_down_pane_cp_t

0x40b3,	// (0x000666f0) popup_vitu2_window_ParamLimits

0x40b3,	// (0x000666f0) popup_vitu2_window

0xc75e,	// (0x0006ed9b) aid_size_cell2_itu2_ParamLimits

0xc75e,	// (0x0006ed9b) aid_size_cell2_itu2

0xc780,	// (0x0006edbd) aid_size_cell_itu2_ParamLimits

0xc780,	// (0x0006edbd) aid_size_cell_itu2

0x29c3,	// (0x00065000) bg_popup_window_pane_cp09_ParamLimits

0x29c3,	// (0x00065000) bg_popup_window_pane_cp09

0xc7be,	// (0x0006edfb) field_vitu2_entry_pane_ParamLimits

0xc7be,	// (0x0006edfb) field_vitu2_entry_pane

0xc7d2,	// (0x0006ee0f) grid_vitu2_function_pane_ParamLimits

0xc7d2,	// (0x0006ee0f) grid_vitu2_function_pane

0xc800,	// (0x0006ee3d) grid_vitu2_itu_pane_ParamLimits

0xc800,	// (0x0006ee3d) grid_vitu2_itu_pane

0xc858,	// (0x0006ee95) cell_vitu2_itu_pane_ParamLimits

0xc858,	// (0x0006ee95) cell_vitu2_itu_pane

0xc870,	// (0x0006eead) cell_vitu2_function_pane_ParamLimits

0xc870,	// (0x0006eead) cell_vitu2_function_pane

0xef93,	// (0x000715d0) bg_popup_call_pane_cp08_ParamLimits

0xef93,	// (0x000715d0) bg_popup_call_pane_cp08

0xefaa,	// (0x000715e7) field_vitu2_entry_pane_g1

0xefb6,	// (0x000715f3) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x00071f6b) field_vitu2_entry_pane_g

0x6ca2,	// (0x000692df) field_vitu2_entry_pane_t1_ParamLimits

0x6ca2,	// (0x000692df) field_vitu2_entry_pane_t1

0x6cd0,	// (0x0006930d) field_vitu2_entry_pane_t2_ParamLimits

0x6cd0,	// (0x0006930d) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x00071f72) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x00071f72) field_vitu2_entry_pane_t

0xc8af,	// (0x0006eeec) bg_button_pane_cp010_ParamLimits

0xc8af,	// (0x0006eeec) bg_button_pane_cp010

0xc8bd,	// (0x0006eefa) cell_vitu2_itu_pane_g1

0xc8dd,	// (0x0006ef1a) cell_vitu2_itu_pane_t1_ParamLimits

0xc8dd,	// (0x0006ef1a) cell_vitu2_itu_pane_t1

0x6ced,	// (0x0006932a) cell_vitu2_itu_pane_t2_ParamLimits

0x6ced,	// (0x0006932a) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x00071f7c) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x00071f7c) cell_vitu2_itu_pane_t

0x225b,	// (0x00064898) bg_button_pane_cp011

0xc929,	// (0x0006ef66) cell_vitu2_function_pane_g1

0x0386,	// (0x000629c3) main_myfav_hc_pane

0xc3e4,	// (0x0006ea21) popup_image3_note_pane_ParamLimits

0xc3e4,	// (0x0006ea21) popup_image3_note_pane

0xc3f0,	// (0x0006ea2d) popup_image3_tool_bar_pane_ParamLimits

0xc3f0,	// (0x0006ea2d) popup_image3_tool_bar_pane

0x6d63,	// (0x000693a0) cell_vitu2_itu_pane_t3_ParamLimits

0x6d63,	// (0x000693a0) cell_vitu2_itu_pane_t3

0x0386,	// (0x000629c3) bg_popup_trans_pane

0xefd8,	// (0x00071615) grid_image3_tool_bar_pane

0xefe2,	// (0x0007161f) bg_popup_trans_pane_g1

0x103a,	// (0x00063677) bg_popup_trans_pane_g2

0xefea,	// (0x00071627) bg_popup_trans_pane_g3

0xeff2,	// (0x0007162f) bg_popup_trans_pane_g4

0xeffa,	// (0x00071637) bg_popup_trans_pane_g5

0xf002,	// (0x0007163f) bg_popup_trans_pane_g6

0xf00a,	// (0x00071647) bg_popup_trans_pane_g7

0xf012,	// (0x0007164f) bg_popup_trans_pane_g8

0x101a,	// (0x00063657) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x00071f83) bg_popup_trans_pane_g

0xf01a,	// (0x00071657) cell_image3_tool_bar_pane_ParamLimits

0xf01a,	// (0x00071657) cell_image3_tool_bar_pane

0x5402,	// (0x00067a3f) cell_image3_tool_bar_pane_g1

0x0386,	// (0x000629c3) bg_popup_trans_pane_cp1

0xf02e,	// (0x0007166b) popup_image3_note_pane_t1

0xf03c,	// (0x00071679) popup_image3_note_pane_t2

0xf04a,	// (0x00071687) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x00071f96) popup_image3_note_pane_t

0xf058,	// (0x00071695) popup_image3_note_pane_t3_copy1

0xc93d,	// (0x0006ef7a) bg_myfav_hc_instruction_pane_ParamLimits

0xc93d,	// (0x0006ef7a) bg_myfav_hc_instruction_pane

0xc94f,	// (0x0006ef8c) cell_myfav_contact_pane_ParamLimits

0xc94f,	// (0x0006ef8c) cell_myfav_contact_pane

0xc969,	// (0x0006efa6) cell_myfav_contact_pane_cp1_ParamLimits

0xc969,	// (0x0006efa6) cell_myfav_contact_pane_cp1

0xc97f,	// (0x0006efbc) cell_myfav_contact_pane_cp2_ParamLimits

0xc97f,	// (0x0006efbc) cell_myfav_contact_pane_cp2

0xc995,	// (0x0006efd2) cell_myfav_contact_pane_cp3_ParamLimits

0xc995,	// (0x0006efd2) cell_myfav_contact_pane_cp3

0xc9aa,	// (0x0006efe7) cell_myfav_contact_pane_cp4_ParamLimits

0xc9aa,	// (0x0006efe7) cell_myfav_contact_pane_cp4

0xc9be,	// (0x0006effb) cell_myfav_contact_pane_cp5_ParamLimits

0xc9be,	// (0x0006effb) cell_myfav_contact_pane_cp5

0xc9d2,	// (0x0006f00f) cell_myfav_contact_pane_cp6_ParamLimits

0xc9d2,	// (0x0006f00f) cell_myfav_contact_pane_cp6

0xc9e6,	// (0x0006f023) cell_myfav_contact_pane_cp7_ParamLimits

0xc9e6,	// (0x0006f023) cell_myfav_contact_pane_cp7

0xf066,	// (0x000716a3) listscroll_gen_pane_cp05

0xc9fe,	// (0x0006f03b) main_myfav_hc_pane_g1_ParamLimits

0xc9fe,	// (0x0006f03b) main_myfav_hc_pane_g1

0xca14,	// (0x0006f051) main_myfav_hc_pane_g2_ParamLimits

0xca14,	// (0x0006f051) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x00071f9d) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x00071f9d) main_myfav_hc_pane_g

0xca3e,	// (0x0006f07b) main_myfav_hc_pane_t1_ParamLimits

0xca3e,	// (0x0006f07b) main_myfav_hc_pane_t1

0xf06f,	// (0x000716ac) main_myfav_hc_pane_t2_ParamLimits

0xf06f,	// (0x000716ac) main_myfav_hc_pane_t2

0xf081,	// (0x000716be) main_myfav_hc_pane_t3_ParamLimits

0xf081,	// (0x000716be) main_myfav_hc_pane_t3

0xca53,	// (0x0006f090) main_myfav_hc_pane_t4_ParamLimits

0xca53,	// (0x0006f090) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x00071fa4) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x00071fa4) main_myfav_hc_pane_t

0x5402,	// (0x00067a3f) bg_myfav_hc_instruction_pane_g1

0xf093,	// (0x000716d0) cell_myfav_contact_pane_g1_ParamLimits

0xf093,	// (0x000716d0) cell_myfav_contact_pane_g1

0xf093,	// (0x000716d0) cell_myfav_contact_pane_g2_ParamLimits

0xf093,	// (0x000716d0) cell_myfav_contact_pane_g2

0xf09f,	// (0x000716dc) cell_myfav_contact_pane_g3_ParamLimits

0xf09f,	// (0x000716dc) cell_myfav_contact_pane_g3

0x5696,	// (0x00067cd3) cell_myfav_contact_pane_g4_ParamLimits

0x5696,	// (0x00067cd3) cell_myfav_contact_pane_g4

0xf0ac,	// (0x000716e9) cell_myfav_contact_pane_g5_ParamLimits

0xf0ac,	// (0x000716e9) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x00071faf) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x00071faf) cell_myfav_contact_pane_g

0xca2a,	// (0x0006f067) main_myfav_hc_pane_g3_ParamLimits

0xca2a,	// (0x0006f067) main_myfav_hc_pane_g3

0x7e01,	// (0x0006a43e) popup_adpt_find_window

0xca77,	// (0x0006f0b4) afind_page_pane_ParamLimits

0xca77,	// (0x0006f0b4) afind_page_pane

0xca84,	// (0x0006f0c1) aid_size_cell_afind_ParamLimits

0xca84,	// (0x0006f0c1) aid_size_cell_afind

0xca9e,	// (0x0006f0db) bg_popup_sub_pane_cp09_ParamLimits

0xca9e,	// (0x0006f0db) bg_popup_sub_pane_cp09

0xcaab,	// (0x0006f0e8) find_pane_cp01_ParamLimits

0xcaab,	// (0x0006f0e8) find_pane_cp01

0x236d,	// (0x000649aa) grid_afind_control_pane_ParamLimits

0x236d,	// (0x000649aa) grid_afind_control_pane

0xcab8,	// (0x0006f0f5) grid_afind_pane_ParamLimits

0xcab8,	// (0x0006f0f5) grid_afind_pane

0xcad0,	// (0x0006f10d) cell_afind_pane_ParamLimits

0xcad0,	// (0x0006f10d) cell_afind_pane

0x5402,	// (0x00067a3f) afind_page_pane_g1

0xcb06,	// (0x0006f143) afind_page_pane_g2

0xcb0f,	// (0x0006f14c) afind_page_pane_g3

0x0002,

0xf97d,	// (0x00071fba) afind_page_pane_g

0xcb18,	// (0x0006f155) afind_page_pane_t1

0x2381,	// (0x000649be) cell_afind_grid_control_pane_ParamLimits

0x2381,	// (0x000649be) cell_afind_grid_control_pane

0xeeea,	// (0x00071527) bg_button_pane_cp69_ParamLimits

0xeeea,	// (0x00071527) bg_button_pane_cp69

0xcb38,	// (0x0006f175) cell_afind_pane_g1_ParamLimits

0xcb38,	// (0x0006f175) cell_afind_pane_g1

0xcb45,	// (0x0006f182) cell_afind_pane_t1_ParamLimits

0xcb45,	// (0x0006f182) cell_afind_pane_t1

0x0e26,	// (0x00063463) bg_button_pane_cp72

0x2390,	// (0x000649cd) cell_afind_grid_control_pane_g1

0xa43d,	// (0x0006ca7a) aid_image_placing_area_ParamLimits

0xa43d,	// (0x0006ca7a) aid_image_placing_area

0x59a8,	// (0x00067fe5) field_vitu_entry_pane_g1_ParamLimits

0x59a8,	// (0x00067fe5) field_vitu_entry_pane_g1

0x59b4,	// (0x00067ff1) field_vitu_entry_pane_g2_ParamLimits

0x59b4,	// (0x00067ff1) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x00071e6b) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x00071e6b) field_vitu_entry_pane_g

0xbd99,	// (0x0006e3d6) cell_vitu_itu_pane_g1_ParamLimits

0xbddb,	// (0x0006e418) cell_vitu_itu_pane_t3_ParamLimits

0xbddb,	// (0x0006e418) cell_vitu_itu_pane_t3

0xee9e,	// (0x000714db) mp4_progress_pane_t1_ParamLimits

0xeeb5,	// (0x000714f2) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00071f00) mp4_progress_pane_t_ParamLimits

0xeecc,	// (0x00071509) mup_progress_pane_cp04_ParamLimits

0xca65,	// (0x0006f0a2) main_myfav_hc_pane_t5_ParamLimits

0xca65,	// (0x0006f0a2) main_myfav_hc_pane_t5

0x69d8,	// (0x00069015) aid_zoom_text_primary

0x7e01,	// (0x0006a43e) popup_adpt_find_window_ParamLimits

0x225b,	// (0x00064898) main_cam_set_pane

0xc564,	// (0x0006eba1) cam4_zoom_pane_ParamLimits

0xc564,	// (0x0006eba1) cam4_zoom_pane

0xcb57,	// (0x0006f194) main_cam_set_pane_g1_ParamLimits

0xcb57,	// (0x0006f194) main_cam_set_pane_g1

0xcb65,	// (0x0006f1a2) main_cam_set_pane_g2_ParamLimits

0xcb65,	// (0x0006f1a2) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x00071fc1) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x00071fc1) main_cam_set_pane_g

0xcb71,	// (0x0006f1ae) main_cam_set_pane_t1_ParamLimits

0xcb71,	// (0x0006f1ae) main_cam_set_pane_t1

0xcb8d,	// (0x0006f1ca) main_cset_listscroll_pane_ParamLimits

0xcb8d,	// (0x0006f1ca) main_cset_listscroll_pane

0xcbb6,	// (0x0006f1f3) main_cset_slider_pane_ParamLimits

0xcbb6,	// (0x0006f1f3) main_cset_slider_pane

0x23a1,	// (0x000649de) main_cset_list_pane_ParamLimits

0x23a1,	// (0x000649de) main_cset_list_pane

0x23b1,	// (0x000649ee) scroll_pane_cp028

0xcbd5,	// (0x0006f212) aid_area_touch_slider

0x23ba,	// (0x000649f7) cset_slider_pane

0xcbf1,	// (0x0006f22e) main_cset_slider_pane_g1

0xcc06,	// (0x0006f243) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x00071fc6) main_cset_slider_pane_g

0x242c,	// (0x00064a69) main_cset_slider_pane_t1

0xccaa,	// (0x0006f2e7) main_cset_slider_pane_t2

0xccc4,	// (0x0006f301) main_cset_slider_pane_t3

0xccde,	// (0x0006f31b) main_cset_slider_pane_t4

0xccf8,	// (0x0006f335) main_cset_slider_pane_t5

0xcd12,	// (0x0006f34f) main_cset_slider_pane_t6

0xcd27,	// (0x0006f364) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x00071feb) main_cset_slider_pane_t

0xce2b,	// (0x0006f468) cset_list_set_pane_ParamLimits

0xce2b,	// (0x0006f468) cset_list_set_pane

0xce3a,	// (0x0006f477) aid_position_infowindow_above

0xce42,	// (0x0006f47f) aid_position_infowindow_below

0xce4a,	// (0x0006f487) cset_list_set_pane_g1_ParamLimits

0xce4a,	// (0x0006f487) cset_list_set_pane_g1

0x6db5,	// (0x000693f2) cset_list_set_pane_g3_ParamLimits

0x6db5,	// (0x000693f2) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0007200a) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0007200a) cset_list_set_pane_g

0x6dc4,	// (0x00069401) cset_list_set_pane_t1_ParamLimits

0x6dc4,	// (0x00069401) cset_list_set_pane_t1

0x225b,	// (0x00064898) list_highlight_pane_cp021_ParamLimits

0x225b,	// (0x00064898) list_highlight_pane_cp021

0x19cc,	// (0x00064009) cset_slider_pane_g1

0x19de,	// (0x0006401b) cset_slider_pane_g2

0x19d5,	// (0x00064012) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0007200f) cset_slider_pane_g

0xce56,	// (0x0006f493) aid_area_touch_cam4_zoom

0xce5e,	// (0x0006f49b) cam4_zoom_cont_pane

0xce66,	// (0x0006f4a3) cam4_zoom_pane_g1

0xce6e,	// (0x0006f4ab) cam4_zoom_pane_g2

0xce76,	// (0x0006f4b3) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x00072016) cam4_zoom_pane_g

0x2d02,	// (0x0006533f) cam4_zoom_cont_pane_g1

0x2d0b,	// (0x00065348) cam4_zoom_cont_pane_g2

0x2d14,	// (0x00065351) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0007201d) cam4_zoom_cont_pane_g

0xc437,	// (0x0006ea74) call4_image_pane_ParamLimits

0xc437,	// (0x0006ea74) call4_image_pane

0xeef6,	// (0x00071533) call4_windows_conf_pane_ParamLimits

0xef09,	// (0x00071546) popup_call4_audio_in_window_ParamLimits

0xef09,	// (0x00071546) popup_call4_audio_in_window

0x0386,	// (0x000629c3) bg_popup_call2_act_pane_cp02

0xef67,	// (0x000715a4) call4_list_conf_pane

0x5402,	// (0x00067a3f) call4_image_pane_g1

0x5402,	// (0x00067a3f) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x00071d2c) call4_image_pane_g

0x24cc,	// (0x00064b09) list_single_graphic_popup_conf4_pane_ParamLimits

0x24cc,	// (0x00064b09) list_single_graphic_popup_conf4_pane

0x0386,	// (0x000629c3) list_highlight_pane_cp022

0x24df,	// (0x00064b1c) list_single_graphic_popup_conf4_pane_g1

0x15e1,	// (0x00063c1e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x00072024) list_single_graphic_popup_conf4_pane_g

0x24e7,	// (0x00064b24) list_single_graphic_popup_conf4_pane_t1

0x8ea5,	// (0x0006b4e2) popup_vtel_slider_window_ParamLimits

0x8ea5,	// (0x0006b4e2) popup_vtel_slider_window

0xeed8,	// (0x00071515) dialer2_ne_pane_t2_ParamLimits

0xeed8,	// (0x00071515) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x00071f05) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x00071f05) dialer2_ne_pane_t

0x225b,	// (0x00064898) bg_popup_sub_pane_cp010_ParamLimits

0x225b,	// (0x00064898) bg_popup_sub_pane_cp010

0xce7e,	// (0x0006f4bb) popup_vtel_slider_window_g1_ParamLimits

0xce7e,	// (0x0006f4bb) popup_vtel_slider_window_g1

0xce8a,	// (0x0006f4c7) popup_vtel_slider_window_g2_ParamLimits

0xce8a,	// (0x0006f4c7) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x00072029) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x00072029) popup_vtel_slider_window_g

0xced0,	// (0x0006f50d) vtel_slider_pane_ParamLimits

0xced0,	// (0x0006f50d) vtel_slider_pane

0xcedf,	// (0x0006f51c) vtel_slider_pane_g1_ParamLimits

0xcedf,	// (0x0006f51c) vtel_slider_pane_g1

0xceec,	// (0x0006f529) vtel_slider_pane_g2_ParamLimits

0xceec,	// (0x0006f529) vtel_slider_pane_g2

0xcef9,	// (0x0006f536) vtel_slider_pane_g3_ParamLimits

0xcef9,	// (0x0006f536) vtel_slider_pane_g3

0xcedf,	// (0x0006f51c) vtel_slider_pane_g4_ParamLimits

0xcedf,	// (0x0006f51c) vtel_slider_pane_g4

0xcf06,	// (0x0006f543) vtel_slider_pane_g5_ParamLimits

0xcf06,	// (0x0006f543) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x00072032) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x00072032) vtel_slider_pane_g

0x225b,	// (0x00064898) main_gallery2_pane

0xc7a6,	// (0x0006ede3) aid_size_row_itut2_dropdow_list_ParamLimits

0xc7a6,	// (0x0006ede3) aid_size_row_itut2_dropdow_list

0xc7e8,	// (0x0006ee25) grid_vitu2_function_top_pane_ParamLimits

0xc7e8,	// (0x0006ee25) grid_vitu2_function_top_pane

0xc824,	// (0x0006ee61) popup_vitu2_dropdown_list_window_ParamLimits

0xc824,	// (0x0006ee61) popup_vitu2_dropdown_list_window

0xc83c,	// (0x0006ee79) popup_vitu2_match_list_window

0xcf13,	// (0x0006f550) cell_vitu2_function_top_pane_ParamLimits

0xcf13,	// (0x0006f550) cell_vitu2_function_top_pane

0xcf2b,	// (0x0006f568) cell_vitu2_function_top_pane_cp01_ParamLimits

0xcf2b,	// (0x0006f568) cell_vitu2_function_top_pane_cp01

0xcf47,	// (0x0006f584) cell_vitu2_function_top_wide_pane_ParamLimits

0xcf47,	// (0x0006f584) cell_vitu2_function_top_wide_pane

0x225b,	// (0x00064898) bg_button_pane_cp012

0xcf63,	// (0x0006f5a0) cell_vitu2_function_top_pane_g1

0xcf77,	// (0x0006f5b4) bg_button_pane_cp013_ParamLimits

0xcf77,	// (0x0006f5b4) bg_button_pane_cp013

0xcf93,	// (0x0006f5d0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcf93,	// (0x0006f5d0) cell_vitu2_function_top_wide_pane_g1

0x40b3,	// (0x000666f0) bg_popup_sub_pane_cp20

0xcfab,	// (0x0006f5e8) list_vitu2_match_list_pane

0xefe2,	// (0x0007161f) bg_popup_sub_pane_cp20_g1

0xefea,	// (0x00071627) bg_popup_sub_pane_cp20_g2

0x103a,	// (0x00063677) bg_popup_sub_pane_cp20_g3

0xeff2,	// (0x0007162f) bg_popup_sub_pane_cp20_g4

0x101a,	// (0x00063657) bg_popup_sub_pane_cp20_g5

0x24fd,	// (0x00064b3a) bg_popup_sub_pane_cp20_g6

0xf002,	// (0x0007163f) bg_popup_sub_pane_cp20_g7

0xf00a,	// (0x00071647) bg_popup_sub_pane_cp20_g8

0xf012,	// (0x0007164f) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0007203d) bg_popup_sub_pane_cp20_g

0xcfc3,	// (0x0006f600) list_vitu2_match_list_item_pane_ParamLimits

0xcfc3,	// (0x0006f600) list_vitu2_match_list_item_pane

0xcfd5,	// (0x0006f612) list_vitu2_match_list_item_pane_t1

0x0386,	// (0x000629c3) bg_popup_sub_pane_cp21

0x14b0,	// (0x00063aed) grid_vitu2_dropdown_list_pane

0xcfef,	// (0x0006f62c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xcfef,	// (0x0006f62c) cell_vitu2_dropdown_list_char_pane

0xd010,	// (0x0006f64d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xd010,	// (0x0006f64d) cell_vitu2_dropdown_list_ctrl_pane

0x2517,	// (0x00064b54) cell_vitu2_dropdown_list_char_pane_g1

0x250e,	// (0x00064b4b) cell_vitu2_dropdown_list_char_pane_g2

0x2505,	// (0x00064b42) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0007205a) cell_vitu2_dropdown_list_char_pane_g

0xd03c,	// (0x0006f679) cell_vitu2_dropdown_list_char_pane_t1

0xd04a,	// (0x0006f687) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xd04a,	// (0x0006f687) cell_vitu2_dropdown_list_ctrl_pane_g1

0xd05a,	// (0x0006f697) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xd05a,	// (0x0006f697) cell_vitu2_dropdown_list_ctrl_pane_g2

0xd06b,	// (0x0006f6a8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xd06b,	// (0x0006f6a8) cell_vitu2_dropdown_list_ctrl_pane_g3

0xd07b,	// (0x0006f6b8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xd07b,	// (0x0006f6b8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x5631,	// (0x00067c6e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x5631,	// (0x00067c6e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x00072061) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x00072061) cell_vitu2_dropdown_list_ctrl_pane_g

0xd094,	// (0x0006f6d1) aid_size_cell_gallery2_ParamLimits

0xd094,	// (0x0006f6d1) aid_size_cell_gallery2

0xd0ae,	// (0x0006f6eb) grid_gallery2_pane_ParamLimits

0xd0ae,	// (0x0006f6eb) grid_gallery2_pane

0xbc4b,	// (0x0006e288) scroll_pane_cp029_ParamLimits

0xbc4b,	// (0x0006e288) scroll_pane_cp029

0xd0bf,	// (0x0006f6fc) cell_gallery2_pane_ParamLimits

0xd0bf,	// (0x0006f6fc) cell_gallery2_pane

0x2520,	// (0x00064b5d) cell_gallery2_pane_g2

0xd107,	// (0x0006f744) cell_gallery2_pane_g3

0x2528,	// (0x00064b65) cell_gallery2_pane_g4

0x2530,	// (0x00064b6d) cell_gallery2_pane_g5

0x0dca,	// (0x00063407) grid_highlight_pane_cp10

0xc83c,	// (0x0006ee79) popup_vitu2_match_list_window_ParamLimits

0xc84c,	// (0x0006ee89) popup_vitu2_query_window_ParamLimits

0xc84c,	// (0x0006ee89) popup_vitu2_query_window

0x0386,	// (0x000629c3) bg_vitu2_candi_button_pane

0x2517,	// (0x00064b54) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x250e,	// (0x00064b4b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2505,	// (0x00064b42) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6e23,	// (0x00069460) bg_button_pane_cp015

0xd10f,	// (0x0006f74c) bg_button_pane_cp016

0xd122,	// (0x0006f75f) bg_button_pane_cp017

0x5002,	// (0x0006763f) bg_popup_sub_pane_cp22

0x2538,	// (0x00064b75) popup_vitu2_query_window_g1

0x6e52,	// (0x0006948f) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0007206c) popup_vitu2_query_window_g

0x6e6d,	// (0x000694aa) popup_vitu2_query_window_t1_ParamLimits

0x6e6d,	// (0x000694aa) popup_vitu2_query_window_t1

0x6ea0,	// (0x000694dd) popup_vitu2_query_window_t2_ParamLimits

0x6ea0,	// (0x000694dd) popup_vitu2_query_window_t2

0x6eb2,	// (0x000694ef) popup_vitu2_query_window_t3_ParamLimits

0x6eb2,	// (0x000694ef) popup_vitu2_query_window_t3

0xd146,	// (0x0006f783) popup_vitu2_query_window_t4_ParamLimits

0xd146,	// (0x0006f783) popup_vitu2_query_window_t4

0xd163,	// (0x0006f7a0) popup_vitu2_query_window_t5_ParamLimits

0xd163,	// (0x0006f7a0) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x00072073) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x00072073) popup_vitu2_query_window_t

0x2399,	// (0x000649d6) main_cset_text_pane

0xcbd5,	// (0x0006f212) aid_area_touch_slider_ParamLimits

0x23ba,	// (0x000649f7) cset_slider_pane_ParamLimits

0xcbf1,	// (0x0006f22e) main_cset_slider_pane_g1_ParamLimits

0xcc06,	// (0x0006f243) main_cset_slider_pane_g2_ParamLimits

0x23e4,	// (0x00064a21) main_cset_slider_pane_g3_ParamLimits

0x23e4,	// (0x00064a21) main_cset_slider_pane_g3

0xcc1b,	// (0x0006f258) main_cset_slider_pane_g4_ParamLimits

0xcc1b,	// (0x0006f258) main_cset_slider_pane_g4

0xcc2a,	// (0x0006f267) main_cset_slider_pane_g5_ParamLimits

0xcc2a,	// (0x0006f267) main_cset_slider_pane_g5

0xcc36,	// (0x0006f273) main_cset_slider_pane_g6_ParamLimits

0xcc36,	// (0x0006f273) main_cset_slider_pane_g6

0xf989,	// (0x00071fc6) main_cset_slider_pane_g_ParamLimits

0x242c,	// (0x00064a69) main_cset_slider_pane_t1_ParamLimits

0xccaa,	// (0x0006f2e7) main_cset_slider_pane_t2_ParamLimits

0xccc4,	// (0x0006f301) main_cset_slider_pane_t3_ParamLimits

0xccde,	// (0x0006f31b) main_cset_slider_pane_t4_ParamLimits

0xccf8,	// (0x0006f335) main_cset_slider_pane_t5_ParamLimits

0xcd12,	// (0x0006f34f) main_cset_slider_pane_t6_ParamLimits

0xcd27,	// (0x0006f364) main_cset_slider_pane_t7_ParamLimits

0xcd51,	// (0x0006f38e) main_cset_slider_pane_t8_ParamLimits

0xcd51,	// (0x0006f38e) main_cset_slider_pane_t8

0xcd79,	// (0x0006f3b6) main_cset_slider_pane_t9_ParamLimits

0xcd79,	// (0x0006f3b6) main_cset_slider_pane_t9

0xcda1,	// (0x0006f3de) main_cset_slider_pane_t10_ParamLimits

0xcda1,	// (0x0006f3de) main_cset_slider_pane_t10

0xcdc9,	// (0x0006f406) main_cset_slider_pane_t11_ParamLimits

0xcdc9,	// (0x0006f406) main_cset_slider_pane_t11

0xcdf1,	// (0x0006f42e) main_cset_slider_pane_t12_ParamLimits

0xcdf1,	// (0x0006f42e) main_cset_slider_pane_t12

0xce0e,	// (0x0006f44b) main_cset_slider_pane_t13_ParamLimits

0xce0e,	// (0x0006f44b) main_cset_slider_pane_t13

0xf9ae,	// (0x00071feb) main_cset_slider_pane_t_ParamLimits

0x0386,	// (0x000629c3) bg_popup_sub_pane_cp011

0x2544,	// (0x00064b81) main_cset_text_pane_g1

0x254c,	// (0x00064b89) main_cset_text_pane_t1

0x255a,	// (0x00064b97) main_cset_text_pane_t2

0x2568,	// (0x00064ba5) main_cset_text_pane_t3

0x2576,	// (0x00064bb3) main_cset_text_pane_t4

0x2584,	// (0x00064bc1) main_cset_text_pane_t5

0x2592,	// (0x00064bcf) main_cset_text_pane_t6

0x25a0,	// (0x00064bdd) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x00072082) main_cset_text_pane_t

0x0386,	// (0x000629c3) main_cam4_burst_pane

0x0386,	// (0x000629c3) main_cam5_pane

0xcb26,	// (0x0006f163) bg_button_pane_cp019

0xcb2f,	// (0x0006f16c) bg_button_pane_cp020

0x23f0,	// (0x00064a2d) main_cset_slider_pane_g7_ParamLimits

0x23f0,	// (0x00064a2d) main_cset_slider_pane_g7

0x23fc,	// (0x00064a39) main_cset_slider_pane_g8_ParamLimits

0x23fc,	// (0x00064a39) main_cset_slider_pane_g8

0xcc4a,	// (0x0006f287) main_cset_slider_pane_g9_ParamLimits

0xcc4a,	// (0x0006f287) main_cset_slider_pane_g9

0xcc56,	// (0x0006f293) main_cset_slider_pane_g10_ParamLimits

0xcc56,	// (0x0006f293) main_cset_slider_pane_g10

0xcc62,	// (0x0006f29f) main_cset_slider_pane_g11_ParamLimits

0xcc62,	// (0x0006f29f) main_cset_slider_pane_g11

0xcc6e,	// (0x0006f2ab) main_cset_slider_pane_g12_ParamLimits

0xcc6e,	// (0x0006f2ab) main_cset_slider_pane_g12

0xcc7a,	// (0x0006f2b7) main_cset_slider_pane_g13_ParamLimits

0xcc7a,	// (0x0006f2b7) main_cset_slider_pane_g13

0xcc86,	// (0x0006f2c3) main_cset_slider_pane_g14_ParamLimits

0xcc86,	// (0x0006f2c3) main_cset_slider_pane_g14

0xcc92,	// (0x0006f2cf) main_cset_slider_pane_g15_ParamLimits

0xcc92,	// (0x0006f2cf) main_cset_slider_pane_g15

0x245a,	// (0x00064a97) main_cset_slider_pane_t14_ParamLimits

0x245a,	// (0x00064a97) main_cset_slider_pane_t14

0x2493,	// (0x00064ad0) main_cset_slider_pane_t15_ParamLimits

0x2493,	// (0x00064ad0) main_cset_slider_pane_t15

0xd180,	// (0x0006f7bd) aid_cam4_burst_size_cell_ParamLimits

0xd180,	// (0x0006f7bd) aid_cam4_burst_size_cell

0xd19c,	// (0x0006f7d9) grid_cam4_burst_pane_ParamLimits

0xd19c,	// (0x0006f7d9) grid_cam4_burst_pane

0xd1c0,	// (0x0006f7fd) linegrid_cam4_burst_pane_ParamLimits

0xd1c0,	// (0x0006f7fd) linegrid_cam4_burst_pane

0xd1de,	// (0x0006f81b) scroll_pane_cp30_ParamLimits

0xd1de,	// (0x0006f81b) scroll_pane_cp30

0xd1ea,	// (0x0006f827) cell_cam4_burst_pane_ParamLimits

0xd1ea,	// (0x0006f827) cell_cam4_burst_pane

0x25ba,	// (0x00064bf7) linegrid_cam4_burst_pane_g1_ParamLimits

0x25ba,	// (0x00064bf7) linegrid_cam4_burst_pane_g1

0xd222,	// (0x0006f85f) linegrid_cam4_burst_pane_g2_ParamLimits

0xd222,	// (0x0006f85f) linegrid_cam4_burst_pane_g2

0x25c7,	// (0x00064c04) linegrid_cam4_burst_pane_g3_ParamLimits

0x25c7,	// (0x00064c04) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x00072091) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x00072091) linegrid_cam4_burst_pane_g

0xd233,	// (0x0006f870) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xd233,	// (0x0006f870) linegrid_cam4_burst_pane_g3_copy1

0x25d4,	// (0x00064c11) linegrid_cam4_burst_pane_g4_ParamLimits

0x25d4,	// (0x00064c11) linegrid_cam4_burst_pane_g4

0xd24d,	// (0x0006f88a) linegrid_cam4_burst_pane_g5_ParamLimits

0xd24d,	// (0x0006f88a) linegrid_cam4_burst_pane_g5

0xd25e,	// (0x0006f89b) linegrid_cam4_burst_pane_g6_ParamLimits

0xd25e,	// (0x0006f89b) linegrid_cam4_burst_pane_g6

0x25e1,	// (0x00064c1e) linegrid_cam4_burst_pane_g7_ParamLimits

0x25e1,	// (0x00064c1e) linegrid_cam4_burst_pane_g7

0xd26f,	// (0x0006f8ac) cell_cam4_burst_pane_g1

0x25fa,	// (0x00064c37) main_cam5_pane_t1_ParamLimits

0x25fa,	// (0x00064c37) main_cam5_pane_t1

0x260c,	// (0x00064c49) main_cam5_pane_t2_ParamLimits

0x260c,	// (0x00064c49) main_cam5_pane_t2

0x261e,	// (0x00064c5b) main_cam5_pane_t3_ParamLimits

0x261e,	// (0x00064c5b) main_cam5_pane_t3

0x2630,	// (0x00064c6d) main_cam5_pane_t4_ParamLimits

0x2630,	// (0x00064c6d) main_cam5_pane_t4

0x2646,	// (0x00064c83) main_cam5_pane_t5_ParamLimits

0x2646,	// (0x00064c83) main_cam5_pane_t5

0x2658,	// (0x00064c95) main_cam5_pane_t6_ParamLimits

0x2658,	// (0x00064c95) main_cam5_pane_t6

0x266a,	// (0x00064ca7) main_cam5_pane_t7_ParamLimits

0x266a,	// (0x00064ca7) main_cam5_pane_t7

0x267c,	// (0x00064cb9) main_cam5_pane_t8_ParamLimits

0x267c,	// (0x00064cb9) main_cam5_pane_t8

0x2698,	// (0x00064cd5) main_cam5_pane_t9_ParamLimits

0x2698,	// (0x00064cd5) main_cam5_pane_t9

0x26aa,	// (0x00064ce7) main_cam5_pane_t10_ParamLimits

0x26aa,	// (0x00064ce7) main_cam5_pane_t10

0x26bc,	// (0x00064cf9) main_cam5_pane_t11_ParamLimits

0x26bc,	// (0x00064cf9) main_cam5_pane_t11

0x26ce,	// (0x00064d0b) main_cam5_pane_t12_ParamLimits

0x26ce,	// (0x00064d0b) main_cam5_pane_t12

0x26e3,	// (0x00064d20) main_cam5_pane_t13_ParamLimits

0x26e3,	// (0x00064d20) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0007209d) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0007209d) main_cam5_pane_t

0x7eaf,	// (0x0006a4ec) popup_scut_keymap_window_ParamLimits

0x7eaf,	// (0x0006a4ec) popup_scut_keymap_window

0xd282,	// (0x0006f8bf) aid_size_cell_brow_shortcut

0x0dca,	// (0x00063407) bg_popup_window_pane_cp010

0xd28e,	// (0x0006f8cb) grid_scut_pane

0xd298,	// (0x0006f8d5) cell_scut_pane_ParamLimits

0xd298,	// (0x0006f8d5) cell_scut_pane

0xd2ad,	// (0x0006f8ea) cell_scut_pane_g1

0x2700,	// (0x00064d3d) cell_scut_pane_t1

0x270f,	// (0x00064d4c) cell_scut_pane_t2

0xd2b6,	// (0x0006f8f3) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000720b8) cell_scut_pane_t

0xb49e,	// (0x0006dadb) main_mup3_pane_g8_ParamLimits

0xb49e,	// (0x0006dadb) main_mup3_pane_g8

0xc7b2,	// (0x0006edef) area_vitu2_query_pane_ParamLimits

0xc7b2,	// (0x0006edef) area_vitu2_query_pane

0x6e33,	// (0x00069470) input_focus_pane_cp08

0x271e,	// (0x00064d5b) area_vitu2_query_pane_g1

0x6f30,	// (0x0006956d) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x000720bf) area_vitu2_query_pane_g

0xd2c4,	// (0x0006f901) area_vitu2_query_pane_t1_ParamLimits

0xd2c4,	// (0x0006f901) area_vitu2_query_pane_t1

0xd2d6,	// (0x0006f913) area_vitu2_query_pane_t2_ParamLimits

0xd2d6,	// (0x0006f913) area_vitu2_query_pane_t2

0x6f3f,	// (0x0006957c) area_vitu2_query_pane_t3_ParamLimits

0x6f3f,	// (0x0006957c) area_vitu2_query_pane_t3

0x6f67,	// (0x000695a4) area_vitu2_query_pane_t4_ParamLimits

0x6f67,	// (0x000695a4) area_vitu2_query_pane_t4

0x6f8f,	// (0x000695cc) area_vitu2_query_pane_t5_ParamLimits

0x6f8f,	// (0x000695cc) area_vitu2_query_pane_t5

0x6fb7,	// (0x000695f4) area_vitu2_query_pane_t6_ParamLimits

0x6fb7,	// (0x000695f4) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x000720c4) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x000720c4) area_vitu2_query_pane_t

0xd2e8,	// (0x0006f925) bg_button_pane_cp018

0xd2f5,	// (0x0006f932) bg_button_pane_cp021

0x7003,	// (0x00069640) bg_button_pane_cp022

0x7012,	// (0x0006964f) input_focus_pane_cp09

0x16e4,	// (0x00063d21) aid_size_touch_mv_arrow_left

0x170d,	// (0x00063d4a) aid_size_touch_mv_arrow_right

0x2408,	// (0x00064a45) main_cset_slider_pane_g16_ParamLimits

0x2408,	// (0x00064a45) main_cset_slider_pane_g16

0x2414,	// (0x00064a51) main_cset_slider_pane_g17_ParamLimits

0x2414,	// (0x00064a51) main_cset_slider_pane_g17

0xd26f,	// (0x0006f8ac) cell_cam4_burst_pane_g1_ParamLimits

0x0386,	// (0x000629c3) compa_mode_pane

0xce96,	// (0x0006f4d3) popup_vtel_slider_window_g3_ParamLimits

0xce96,	// (0x0006f4d3) popup_vtel_slider_window_g3

0xceaa,	// (0x0006f4e7) popup_vtel_slider_window_g4_ParamLimits

0xceaa,	// (0x0006f4e7) popup_vtel_slider_window_g4

0xcebe,	// (0x0006f4fb) popup_vtel_slider_window_t1_ParamLimits

0xcebe,	// (0x0006f4fb) popup_vtel_slider_window_t1

0x0386,	// (0x000629c3) main_cl_pane

0xa88e,	// (0x0006cecb) popup_imed_adjust2_window_ParamLimits

0x5002,	// (0x0006763f) bg_tb_trans_pane_cp05_ParamLimits

0x58dd,	// (0x00067f1a) popup_imed_adjust2_window_g1_ParamLimits

0x58ec,	// (0x00067f29) popup_imed_adjust2_window_g2_ParamLimits

0x58ec,	// (0x00067f29) popup_imed_adjust2_window_g2

0x58f8,	// (0x00067f35) popup_imed_adjust2_window_g3_ParamLimits

0x58f8,	// (0x00067f35) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x00071e2f) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x00071e2f) popup_imed_adjust2_window_g

0x5904,	// (0x00067f41) popup_imed_adjust2_window_t1_ParamLimits

0x591c,	// (0x00067f59) slider_imed_adjust_pane_ParamLimits

0x5930,	// (0x00067f6d) slider_imed_adjust_pane_g1_ParamLimits

0x5940,	// (0x00067f7d) slider_imed_adjust_pane_g2_ParamLimits

0x5950,	// (0x00067f8d) slider_imed_adjust_pane_g3_ParamLimits

0x5961,	// (0x00067f9e) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x00071e36) slider_imed_adjust_pane_g_ParamLimits

0xc515,	// (0x0006eb52) aid_touch_area_cam4_ParamLimits

0xc515,	// (0x0006eb52) aid_touch_area_cam4

0xc523,	// (0x0006eb60) battery_pane_cp01

0xc5a2,	// (0x0006ebdf) main_camera4_pane_g6_ParamLimits

0xc5a2,	// (0x0006ebdf) main_camera4_pane_g6

0xc5c0,	// (0x0006ebfd) main_camera4_pane_t2_ParamLimits

0xc5c0,	// (0x0006ebfd) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x00071f39) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x00071f39) main_camera4_pane_t

0xc641,	// (0x0006ec7e) aid_touch_area_vid4_ParamLimits

0xc641,	// (0x0006ec7e) aid_touch_area_vid4

0xc67f,	// (0x0006ecbc) main_video4_pane_g5_ParamLimits

0xc67f,	// (0x0006ecbc) main_video4_pane_g5

0xc6a1,	// (0x0006ecde) vid4_progress_pane_ParamLimits

0xc6a1,	// (0x0006ecde) vid4_progress_pane

0x2420,	// (0x00064a5d) main_cset_slider_pane_g18_ParamLimits

0x2420,	// (0x00064a5d) main_cset_slider_pane_g18

0x25ee,	// (0x00064c2b) cell_cam4_burst_pane_g2_ParamLimits

0x25ee,	// (0x00064c2b) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x00072098) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00072098) cell_cam4_burst_pane_g

0xd301,	// (0x0006f93e) bg_cl_pane_ParamLimits

0xd301,	// (0x0006f93e) bg_cl_pane

0xd30d,	// (0x0006f94a) cl_header_pane_ParamLimits

0xd30d,	// (0x0006f94a) cl_header_pane

0xd319,	// (0x0006f956) cl_listscroll_pane_ParamLimits

0xd319,	// (0x0006f956) cl_listscroll_pane

0x27c6,	// (0x00064e03) bg_cl_pane_g1

0x27ce,	// (0x00064e0b) bg_cl_pane_g2

0x27d6,	// (0x00064e13) bg_cl_pane_g3

0x27de,	// (0x00064e1b) bg_cl_pane_g4

0x27e6,	// (0x00064e23) bg_cl_pane_g5

0x27ee,	// (0x00064e2b) bg_cl_pane_g6

0x27f6,	// (0x00064e33) bg_cl_pane_g7

0x27fe,	// (0x00064e3b) bg_cl_pane_g8

0x2806,	// (0x00064e43) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000720d3) bg_cl_pane_g

0xd325,	// (0x0006f962) aid_height_cl_leading_ParamLimits

0xd325,	// (0x0006f962) aid_height_cl_leading

0xd331,	// (0x0006f96e) aid_height_cl_text_ParamLimits

0xd331,	// (0x0006f96e) aid_height_cl_text

0x40b3,	// (0x000666f0) bg_cl_header_pane_ParamLimits

0x40b3,	// (0x000666f0) bg_cl_header_pane

0xd349,	// (0x0006f986) cl_header_pane_g1_ParamLimits

0xd349,	// (0x0006f986) cl_header_pane_g1

0xd356,	// (0x0006f993) cl_header_pane_t1_ParamLimits

0xd356,	// (0x0006f993) cl_header_pane_t1

0x280e,	// (0x00064e4b) cl_list_pane

0x23b1,	// (0x000649ee) hc_scroll_pane_cp01

0x101a,	// (0x00063657) bg_cl_header_pane_g1

0xefe2,	// (0x0007161f) bg_cl_header_pane_g2

0x103a,	// (0x00063677) bg_cl_header_pane_g3

0xeff2,	// (0x0007162f) bg_cl_header_pane_g4

0xefea,	// (0x00071627) bg_cl_header_pane_g5

0x24fd,	// (0x00064b3a) bg_cl_header_pane_g6

0xf00a,	// (0x00071647) bg_cl_header_pane_g7

0xf012,	// (0x0007164f) bg_cl_header_pane_g8

0xf002,	// (0x0007163f) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x000720e6) bg_cl_header_pane_g

0xd368,	// (0x0006f9a5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd368,	// (0x0006f9a5) hc_cl_list_double_graphic_heading_pane

0xd375,	// (0x0006f9b2) hc_cl_list_single_graphic_pane_ParamLimits

0xd375,	// (0x0006f9b2) hc_cl_list_single_graphic_pane

0xd386,	// (0x0006f9c3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd386,	// (0x0006f9c3) hc_cl_list_single_graphic_pane_g1

0xd392,	// (0x0006f9cf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd392,	// (0x0006f9cf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x000720f9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x000720f9) hc_cl_list_single_graphic_pane_g

0xd3a6,	// (0x0006f9e3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd3a6,	// (0x0006f9e3) hc_cl_list_single_graphic_pane_t1

0xd386,	// (0x0006f9c3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd386,	// (0x0006f9c3) hc_cl_list_double_graphic_heading_pane_g1

0xd3bb,	// (0x0006f9f8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd3bb,	// (0x0006f9f8) hc_cl_list_double_graphic_heading_pane_g2

0xd3cf,	// (0x0006fa0c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd3cf,	// (0x0006fa0c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x000720fe) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x000720fe) hc_cl_list_double_graphic_heading_pane_g

0xd3e3,	// (0x0006fa20) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd3e3,	// (0x0006fa20) hc_cl_list_double_graphic_heading_pane_t1

0xd3f8,	// (0x0006fa35) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd3f8,	// (0x0006fa35) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x00072105) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x00072105) hc_cl_list_double_graphic_heading_pane_t

0xd415,	// (0x0006fa52) vid4_progress_pane_g1

0xd425,	// (0x0006fa62) vid4_progress_pane_g2

0xd435,	// (0x0006fa72) vid4_progress_pane_g3

0xd445,	// (0x0006fa82) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0007210a) vid4_progress_pane_g

0xd463,	// (0x0006faa0) vid4_progress_pane_t1

0xd479,	// (0x0006fab6) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x00072115) vid4_progress_pane_t

0xd4a4,	// (0x0006fae1) wait_bar_pane_cp07

0x51fd,	// (0x0006783a) blid_firmament_pane_ParamLimits

0x523e,	// (0x0006787b) popup_blid_sat_info2_window_g1

0x5262,	// (0x0006789f) popup_blid_sat_info2_window_t3

0x5270,	// (0x000678ad) popup_blid_sat_info2_window_t4

0x527e,	// (0x000678bb) popup_blid_sat_info2_window_t5

0x528c,	// (0x000678c9) popup_blid_sat_info2_window_t6

0x529c,	// (0x000678d9) popup_blid_sat_info2_window_t7

0x52aa,	// (0x000678e7) popup_blid_sat_info2_window_t8

0x52b8,	// (0x000678f5) popup_blid_sat_info2_window_t9

0x52c6,	// (0x00067903) popup_blid_sat_info2_window_t10

0x5382,	// (0x000679bf) aid_firma_cardinal_ParamLimits

0x5396,	// (0x000679d3) blid_firmament_pane_t1_ParamLimits

0x53ad,	// (0x000679ea) blid_firmament_pane_t2_ParamLimits

0x53c4,	// (0x00067a01) blid_firmament_pane_t3_ParamLimits

0x53db,	// (0x00067a18) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x00071d23) blid_firmament_pane_t_ParamLimits

0x53f2,	// (0x00067a2f) blid_sat_info_pane_ParamLimits

0x225b,	// (0x00064898) main_cam_set_pane_ParamLimits

0xbbe8,	// (0x0006e225) aid_size_cell_colour_35_ParamLimits

0xbc02,	// (0x0006e23f) aid_size_cell_colour_112_ParamLimits

0xbc19,	// (0x0006e256) aid_size_cell_effect_ParamLimits

0x225b,	// (0x00064898) bg_tb_trans_pane_cp02_ParamLimits

0x135d,	// (0x0006399a) heading_imed_pane_ParamLimits

0xbc33,	// (0x0006e270) listscroll_imed_pane_ParamLimits

0x45e8,	// (0x00066c25) popup_call2_audio_first_window_g5_ParamLimits

0x45e8,	// (0x00066c25) popup_call2_audio_first_window_g5

0xc2c6,	// (0x0006e903) aid_size_touch_image3_arrow_left_ParamLimits

0xc2c6,	// (0x0006e903) aid_size_touch_image3_arrow_left

0xc2da,	// (0x0006e917) aid_size_touch_image3_arrow_right_ParamLimits

0xc2da,	// (0x0006e917) aid_size_touch_image3_arrow_right

0xd48e,	// (0x0006facb) vid4_progress_pane_t3

0xbe94,	// (0x0006e4d1) main_hwr_training_symbol_option_pane_ParamLimits

0xbe94,	// (0x0006e4d1) main_hwr_training_symbol_option_pane

0x5beb,	// (0x00068228) popup_hwr_training_preview_window_ParamLimits

0x5beb,	// (0x00068228) popup_hwr_training_preview_window

0xbeef,	// (0x0006e52c) hwr_training_navi_pane_g5_ParamLimits

0xbeef,	// (0x0006e52c) hwr_training_navi_pane_g5

0xefd0,	// (0x0007160d) popup_char_count_window

0x40b3,	// (0x000666f0) bg_popup_sub_pane_cp20_ParamLimits

0xcfab,	// (0x0006f5e8) list_vitu2_match_list_pane_ParamLimits

0xcfb7,	// (0x0006f5f4) vitu2_page_scroll_pane_ParamLimits

0xcfb7,	// (0x0006f5f4) vitu2_page_scroll_pane

0x2842,	// (0x00064e7f) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2842,	// (0x00064e7f) list_single_hwr_training_symbol_option_pane

0x2855,	// (0x00064e92) list_single_hwr_training_symbol_option_pane_g1

0x285d,	// (0x00064e9a) list_single_hwr_training_symbol_option_pane_t1

0x2839,	// (0x00064e76) bg_button_pane_cp023

0x286b,	// (0x00064ea8) bg_button_pane_cp024

0xd4c6,	// (0x0006fb03) vitu2_page_scroll_pane_g1

0xd4ce,	// (0x0006fb0b) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0007211c) vitu2_page_scroll_pane_g

0xd4d6,	// (0x0006fb13) vitu2_page_scroll_pane_t1

0x542b,	// (0x00067a68) popup_char_count_window_g1

0x289e,	// (0x00064edb) popup_char_count_window_g2

0x28a7,	// (0x00064ee4) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x00072121) popup_char_count_window_g

0x28b0,	// (0x00064eed) popup_char_count_window_t1

0x0386,	// (0x000629c3) main_vded2_pane

0x58cb,	// (0x00067f08) aid_size_cell_imed_line

0x58d5,	// (0x00067f12) grid_imed_line_width_pane

0xc70b,	// (0x0006ed48) vid4_indicators_pane_g4

0x28be,	// (0x00064efb) cell_imed_line_width_pane_ParamLimits

0x28be,	// (0x00064efb) cell_imed_line_width_pane

0x28d0,	// (0x00064f0d) cell_imed_line_width_pane_g1

0x5b61,	// (0x0006819e) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x00072128) cell_imed_line_width_pane_g

0xd4e5,	// (0x0006fb22) main_vded2_pane_g1_ParamLimits

0xd4e5,	// (0x0006fb22) main_vded2_pane_g1

0xd4f2,	// (0x0006fb2f) main_vded2_pane_g2_ParamLimits

0xd4f2,	// (0x0006fb2f) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0007212d) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0007212d) main_vded2_pane_g

0xd4fe,	// (0x0006fb3b) vded2_slider_pane_ParamLimits

0xd4fe,	// (0x0006fb3b) vded2_slider_pane

0xd50b,	// (0x0006fb48) aid_size_touch_vded2_end

0xd513,	// (0x0006fb50) aid_size_touch_vded2_playhead

0x28d9,	// (0x00064f16) aid_size_touch_vded2_start

0x28e1,	// (0x00064f1e) vded2_slider_bg_pane

0x28ea,	// (0x00064f27) vded2_slider_pane_g1

0x28f3,	// (0x00064f30) vded2_slider_pane_g2

0xd51b,	// (0x0006fb58) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x00072132) vded2_slider_pane_g

0x28fb,	// (0x00064f38) vded2_slider_bg_pane_g1

0x2904,	// (0x00064f41) vded2_slider_bg_pane_g2

0x290d,	// (0x00064f4a) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x00072139) vded2_slider_bg_pane_g

0xa1cb,	// (0x0006c808) aid_postcard_touch_down_pane_ParamLimits

0xa1cb,	// (0x0006c808) aid_postcard_touch_down_pane

0xa1d7,	// (0x0006c814) aid_postcard_touch_up_pane_ParamLimits

0xa1d7,	// (0x0006c814) aid_postcard_touch_up_pane

0x0386,	// (0x000629c3) main_blid2_pane

0xa82b,	// (0x0006ce68) popup_blid2_search_window

0x0386,	// (0x000629c3) blid2_gps_pane

0x0386,	// (0x000629c3) blid2_navig_pane

0x0386,	// (0x000629c3) blid2_search_pane

0x0386,	// (0x000629c3) blid2_tripm_pane

0xd524,	// (0x0006fb61) blid2_search_pane_g1_ParamLimits

0xd524,	// (0x0006fb61) blid2_search_pane_g1

0xd530,	// (0x0006fb6d) blid2_search_pane_t1_ParamLimits

0xd530,	// (0x0006fb6d) blid2_search_pane_t1

0xd542,	// (0x0006fb7f) aid_size_cell_blid2_gps_ParamLimits

0xd542,	// (0x0006fb7f) aid_size_cell_blid2_gps

0xd552,	// (0x0006fb8f) blid2_gps_pane_g1_ParamLimits

0xd552,	// (0x0006fb8f) blid2_gps_pane_g1

0xd55e,	// (0x0006fb9b) grid_blid2_satellite_pane_ParamLimits

0xd55e,	// (0x0006fb9b) grid_blid2_satellite_pane

0xd56a,	// (0x0006fba7) blid2_navig_pane_g1_ParamLimits

0xd56a,	// (0x0006fba7) blid2_navig_pane_g1

0xd576,	// (0x0006fbb3) blid2_navig_pane_t1_ParamLimits

0xd576,	// (0x0006fbb3) blid2_navig_pane_t1

0xd588,	// (0x0006fbc5) blid2_navig_pane_t2_ParamLimits

0xd588,	// (0x0006fbc5) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00072140) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00072140) blid2_navig_pane_t

0xd59a,	// (0x0006fbd7) blid2_navig_ring_pane_ParamLimits

0xd59a,	// (0x0006fbd7) blid2_navig_ring_pane

0xd5a6,	// (0x0006fbe3) blid2_speed_pane_ParamLimits

0xd5a6,	// (0x0006fbe3) blid2_speed_pane

0xd5b2,	// (0x0006fbef) blid2_tripm_pane_g1_ParamLimits

0xd5b2,	// (0x0006fbef) blid2_tripm_pane_g1

0xd5be,	// (0x0006fbfb) blid2_tripm_pane_g2_ParamLimits

0xd5be,	// (0x0006fbfb) blid2_tripm_pane_g2

0xd5ca,	// (0x0006fc07) blid2_tripm_pane_g3_ParamLimits

0xd5ca,	// (0x0006fc07) blid2_tripm_pane_g3

0xd5d6,	// (0x0006fc13) blid2_tripm_pane_g4_ParamLimits

0xd5d6,	// (0x0006fc13) blid2_tripm_pane_g4

0xd5e2,	// (0x0006fc1f) blid2_tripm_pane_g5_ParamLimits

0xd5e2,	// (0x0006fc1f) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x00072145) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x00072145) blid2_tripm_pane_g

0xd5fa,	// (0x0006fc37) blid2_tripm_pane_t1_ParamLimits

0xd5fa,	// (0x0006fc37) blid2_tripm_pane_t1

0xd60c,	// (0x0006fc49) blid2_tripm_pane_t2_ParamLimits

0xd60c,	// (0x0006fc49) blid2_tripm_pane_t2

0xd61e,	// (0x0006fc5b) blid2_tripm_pane_t3_ParamLimits

0xd61e,	// (0x0006fc5b) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00072152) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00072152) blid2_tripm_pane_t

0xd64e,	// (0x0006fc8b) cell_blid2_satellite_pane_ParamLimits

0xd64e,	// (0x0006fc8b) cell_blid2_satellite_pane

0xd666,	// (0x0006fca3) cell_blid2_satellite_pane_g1

0x2916,	// (0x00064f53) cell_blid2_satellite_pane_t1

0x5402,	// (0x00067a3f) blid2_speed_pane_g1

0x2924,	// (0x00064f61) blid2_speed_pane_t1

0x2932,	// (0x00064f6f) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0007215b) blid2_speed_pane_t

0x5402,	// (0x00067a3f) blid2_navig_ring_pane_g1

0xd66f,	// (0x0006fcac) blid2_navig_ring_pane_g2

0xd677,	// (0x0006fcb4) blid2_navig_ring_pane_g3

0xd67f,	// (0x0006fcbc) blid2_navig_ring_pane_g4

0xd687,	// (0x0006fcc4) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x00072160) blid2_navig_ring_pane_g

0x0386,	// (0x000629c3) bg_popup_window_pane_cp011

0x2940,	// (0x00064f7d) popup_blid2_search_window_g1

0x2948,	// (0x00064f85) popup_blid2_search_window_t1

0x2956,	// (0x00064f93) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0007216b) popup_blid2_search_window_t

0x0f29,	// (0x00063566) main_browser_pane_g1

0x0ba3,	// (0x000631e0) main_browser_pane_ParamLimits

0x225b,	// (0x00064898) bg_button_pane_cp011_ParamLimits

0xc929,	// (0x0006ef66) cell_vitu2_function_pane_g1_ParamLimits

0x5002,	// (0x0006763f) bg_popup_sub_pane_cp22_ParamLimits

0x6e33,	// (0x00069470) input_focus_pane_cp08_ParamLimits

0xd135,	// (0x0006f772) popup_vitu2_query_button_pane_ParamLimits

0xd135,	// (0x0006f772) popup_vitu2_query_button_pane

0x6e4a,	// (0x00069487) popup_vitu2_query_input_button_pane

0x2538,	// (0x00064b75) popup_vitu2_query_window_g1_ParamLimits

0x6e52,	// (0x0006948f) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0007206c) popup_vitu2_query_window_g_ParamLimits

0x0386,	// (0x000629c3) bg_button_pane_cp026

0xd68f,	// (0x0006fccc) popup_vitu2_query_input_button_pane_g1

0x0386,	// (0x000629c3) bg_button_pane_cp025

0x2964,	// (0x00064fa1) popup_vitu2_query_button_pane_t1

0xb1ee,	// (0x0006d82b) main_mp3_pane_t6

0xb1fc,	// (0x0006d839) popup_slider_window_cp01

0xc5f6,	// (0x0006ec33) cam4_battery_pane

0xc6ca,	// (0x0006ed07) cam4_battery_pane_cp02

0xd40d,	// (0x0006fa4a) cam4_battery_pane_cp01

0xd40d,	// (0x0006fa4a) cam4_battery_pane_cp03

0x5402,	// (0x00067a3f) cam4_battery_pane_g1

0x2363,	// (0x000649a0) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x00072170) cam4_battery_pane_g

0x52d4,	// (0x00067911) popup_blid_sat_info2_window_t11

0x16e4,	// (0x00063d21) aid_size_touch_mv_arrow_left_ParamLimits

0x170d,	// (0x00063d4a) aid_size_touch_mv_arrow_right_ParamLimits

0x176b,	// (0x00063da8) navi_pane_g1_ParamLimits

0x1777,	// (0x00063db4) navi_pane_g2_ParamLimits

0x17a5,	// (0x00063de2) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00071a22) navi_pane_g_ParamLimits

0x9c5b,	// (0x0006c298) navi_pane_mv_t1_ParamLimits

0xbc3f,	// (0x0006e27c) grid_imed_effect_pane_ParamLimits

0x8d81,	// (0x0006b3be) aid_placing_vt_slider_lsc

0x0e6b,	// (0x000634a8) aid_placing_vt_slider_prt

0x225b,	// (0x00064898) bg_tb_trans_pane_cp01_ParamLimits

0x5551,	// (0x00067b8e) popup_image_details_window_g1_ParamLimits

0x5564,	// (0x00067ba1) popup_image_details_window_g2_ParamLimits

0x5579,	// (0x00067bb6) popup_image_details_window_g3_ParamLimits

0x5579,	// (0x00067bb6) popup_image_details_window_g3

0xf72b,	// (0x00071d68) popup_image_details_window_g_ParamLimits

0x558d,	// (0x00067bca) popup_image_details_window_t1_ParamLimits

0x559f,	// (0x00067bdc) popup_image_details_window_t2_ParamLimits

0x55b8,	// (0x00067bf5) popup_image_details_window_t3_ParamLimits

0x55cc,	// (0x00067c09) popup_image_details_window_t4_ParamLimits

0x55e7,	// (0x00067c24) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x00071d6f) popup_image_details_window_t_ParamLimits

0xd33d,	// (0x0006f97a) cl_header_name_pane_ParamLimits

0xd33d,	// (0x0006f97a) cl_header_name_pane

0xd697,	// (0x0006fcd4) cl_header_name_pane_t1_ParamLimits

0xd697,	// (0x0006fcd4) cl_header_name_pane_t1

0xd6ae,	// (0x0006fceb) cl_header_name_pane_t2_ParamLimits

0xd6ae,	// (0x0006fceb) cl_header_name_pane_t2

0xd6d8,	// (0x0006fd15) cl_header_name_pane_t3_ParamLimits

0xd6d8,	// (0x0006fd15) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00072175) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00072175) cl_header_name_pane_t

0x1832,	// (0x00063e6f) navi_pane_mv_g2_ParamLimits

0xefaa,	// (0x000715e7) field_vitu2_entry_pane_g1_ParamLimits

0xefb6,	// (0x000715f3) field_vitu2_entry_pane_g2_ParamLimits

0xefc2,	// (0x000715ff) field_vitu2_entry_pane_g3_ParamLimits

0xefc2,	// (0x000715ff) field_vitu2_entry_pane_g3

0xf92e,	// (0x00071f6b) field_vitu2_entry_pane_g_ParamLimits

0xc8bd,	// (0x0006eefa) cell_vitu2_itu_pane_g1_ParamLimits

0xc8cf,	// (0x0006ef0c) cell_vitu2_itu_pane_g2_ParamLimits

0xc8cf,	// (0x0006ef0c) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x00071f77) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x00071f77) cell_vitu2_itu_pane_g

0x225b,	// (0x00064898) bg_vkb2_func_pane_cp05_ParamLimits

0x225b,	// (0x00064898) bg_vkb2_func_pane_cp05

0x225b,	// (0x00064898) bg_vkb2_func_pane_cp03

0x225b,	// (0x00064898) bg_vkb2_func_pane_cp04

0x225b,	// (0x00064898) bg_vkb2_func_pane_cp10_ParamLimits

0x225b,	// (0x00064898) bg_vkb2_func_pane_cp10

0x7003,	// (0x00069640) bg_vkb2_func_pane_cp08

0xd2e8,	// (0x0006f925) bg_vkb2_func_pane_cp06

0xd2f5,	// (0x0006f932) bg_vkb2_func_pane_cp07

0x2874,	// (0x00064eb1) bg_vkb2_func_pane_cp11_ParamLimits

0x2874,	// (0x00064eb1) bg_vkb2_func_pane_cp11

0x2889,	// (0x00064ec6) bg_vkb2_func_pane_cp12_ParamLimits

0x2889,	// (0x00064ec6) bg_vkb2_func_pane_cp12

0x0386,	// (0x000629c3) bg_vkb2_func_pane_cp09

0xefe2,	// (0x0007161f) bg_vkb2_func_pane_g1

0x103a,	// (0x00063677) bg_vkb2_func_pane_g2

0xefea,	// (0x00071627) bg_vkb2_func_pane_g3

0xeff2,	// (0x0007162f) bg_vkb2_func_pane_g4

0x24fd,	// (0x00064b3a) bg_vkb2_func_pane_g5

0xf00a,	// (0x00071647) bg_vkb2_func_pane_g6

0xf012,	// (0x0007164f) bg_vkb2_func_pane_g7

0xf002,	// (0x0007163f) bg_vkb2_func_pane_g8

0x101a,	// (0x00063657) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0007217c) bg_vkb2_func_pane_g

0xd5ee,	// (0x0006fc2b) blid2_tripm_pane_g6_ParamLimits

0xd5ee,	// (0x0006fc2b) blid2_tripm_pane_g6

0xee96,	// (0x000714d3) mp4_progress_pane_g1

0xd642,	// (0x0006fc7f) blid2_tripm_values_pane_ParamLimits

0xd642,	// (0x0006fc7f) blid2_tripm_values_pane

0xd6fd,	// (0x0006fd3a) blid2_tripm_values_pane_t1

0xd70b,	// (0x0006fd48) blid2_tripm_values_pane_t2

0xd719,	// (0x0006fd56) blid2_tripm_values_pane_t3

0xd727,	// (0x0006fd64) blid2_tripm_values_pane_t4

0xd735,	// (0x0006fd72) blid2_tripm_values_pane_t5

0xd743,	// (0x0006fd80) blid2_tripm_values_pane_t6

0xd751,	// (0x0006fd8e) blid2_tripm_values_pane_t7

0xd75f,	// (0x0006fd9c) blid2_tripm_values_pane_t8

0xd76d,	// (0x0006fdaa) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0007218f) blid2_tripm_values_pane_t

0x8dbb,	// (0x0006b3f8) call_video_pane_t1_ParamLimits

0x8dd8,	// (0x0006b415) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000718ab) call_video_pane_t_ParamLimits

0x6c03,	// (0x00069240) msg_header_pane_g1_ParamLimits

0x1a11,	// (0x0006404e) msg_header_pane_g2_ParamLimits

0x1a11,	// (0x0006404e) msg_header_pane_g2

0x0001,

0xf488,	// (0x00071ac5) msg_header_pane_g_ParamLimits

0xf488,	// (0x00071ac5) msg_header_pane_g

0x0ba3,	// (0x000631e0) main_clock2_pane_ParamLimits

0xb9e1,	// (0x0006e01e) grid_clock2_toolbar_pane_ParamLimits

0xb9e1,	// (0x0006e01e) grid_clock2_toolbar_pane

0xb9e1,	// (0x0006e01e) listscroll_clock2_pane_ParamLimits

0xb9e1,	// (0x0006e01e) listscroll_clock2_pane

0xba7d,	// (0x0006e0ba) main_clock2_pane_t3_ParamLimits

0xba7d,	// (0x0006e0ba) main_clock2_pane_t3

0xba8f,	// (0x0006e0cc) main_clock2_pane_t4_ParamLimits

0xba8f,	// (0x0006e0cc) main_clock2_pane_t4

0x2972,	// (0x00064faf) cell_clock2_toolbar_pane

0x297a,	// (0x00064fb7) cell_clock2_toolbar_pane_cp01

0x297a,	// (0x00064fb7) cell_clock2_toolbar_pane_cp02

0x2982,	// (0x00064fbf) cell_clock2_toolbar_pane_cp03

0x298a,	// (0x00064fc7) list_clock2_pane

0x1669,	// (0x00063ca6) scroll_pane_cp10

0x2992,	// (0x00064fcf) list_single_clock2_pane_ParamLimits

0x2992,	// (0x00064fcf) list_single_clock2_pane

0x0dca,	// (0x00063407) list_highlight_pane_cp08

0x299f,	// (0x00064fdc) list_single_clock2_pane_t1

0x29ad,	// (0x00064fea) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000721a2) list_single_clock2_pane_t

0x0386,	// (0x000629c3) bg_button_pane_cp10

0x29bb,	// (0x00064ff8) cell_clock2_toolbar_pane_g1

0xa135,	// (0x0006c772) aid_main_viewer_pane_g1_ParamLimits

0xa135,	// (0x0006c772) aid_main_viewer_pane_g1

0xa141,	// (0x0006c77e) aid_main_viewer_pane_g2_ParamLimits

0xa141,	// (0x0006c77e) aid_main_viewer_pane_g2

0xa14d,	// (0x0006c78a) aid_main_viewer_pane_g3_ParamLimits

0xa14d,	// (0x0006c78a) aid_main_viewer_pane_g3

0xa15c,	// (0x0006c799) aid_main_viewer_pane_g4_ParamLimits

0xa15c,	// (0x0006c799) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x00071ad6) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x00071ad6) aid_main_viewer_pane_g

0xa803,	// (0x0006ce40) main_calc_pane_ParamLimits

0xa810,	// (0x0006ce4d) main_dialer2_pane_ParamLimits

0x0386,	// (0x000629c3) main_cam6_pane

0x0386,	// (0x000629c3) main_vid6_pane

0xb9ed,	// (0x0006e02a) listscroll_gen_pane_cp06_ParamLimits

0xb9ed,	// (0x0006e02a) listscroll_gen_pane_cp06

0xbaa1,	// (0x0006e0de) main_clock2_pane_t5_ParamLimits

0xbaa1,	// (0x0006e0de) main_clock2_pane_t5

0xbae9,	// (0x0006e126) aid_call2_pane_cp10_ParamLimits

0xbafb,	// (0x0006e138) aid_call_pane_cp10_ParamLimits

0x16d8,	// (0x00063d15) popup_clock_analogue_window_cp10_g1_ParamLimits

0x16d8,	// (0x00063d15) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbb0d,	// (0x0006e14a) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbb0d,	// (0x0006e14a) popup_clock_analogue_window_cp10_g4_ParamLimits

0x16d8,	// (0x00063d15) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x00071e24) popup_clock_analogue_window_cp10_g_ParamLimits

0xbb1f,	// (0x0006e15c) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc273,	// (0x0006e8b0) cell_dialer2_keypad_pane_g2_ParamLimits

0xc273,	// (0x0006e8b0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x00071f0a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x00071f0a) cell_dialer2_keypad_pane_g

0xc28f,	// (0x0006e8cc) cell_dialer2_keypad_pane_t1

0xcbc2,	// (0x0006f1ff) main_cset_text2_pane_ParamLimits

0xcbc2,	// (0x0006f1ff) main_cset_text2_pane

0x271e,	// (0x00064d5b) area_vitu2_query_pane_g1_ParamLimits

0x6f30,	// (0x0006956d) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x000720bf) area_vitu2_query_pane_g_ParamLimits

0x6fdf,	// (0x0006961c) area_vitu2_query_pane_t7_ParamLimits

0x6fdf,	// (0x0006961c) area_vitu2_query_pane_t7

0xd2e8,	// (0x0006f925) bg_button_pane_cp018_ParamLimits

0xd2f5,	// (0x0006f932) bg_button_pane_cp021_ParamLimits

0x7003,	// (0x00069640) bg_button_pane_cp022_ParamLimits

0x7003,	// (0x00069640) bg_vkb2_func_pane_cp08_ParamLimits

0xd2e8,	// (0x0006f925) bg_vkb2_func_pane_cp06_ParamLimits

0xd2f5,	// (0x0006f932) bg_vkb2_func_pane_cp07_ParamLimits

0x7012,	// (0x0006964f) input_focus_pane_cp09_ParamLimits

0xd77b,	// (0x0006fdb8) cam6_autofocus_pane_ParamLimits

0xd77b,	// (0x0006fdb8) cam6_autofocus_pane

0xd797,	// (0x0006fdd4) cam6_image_uncrop_pane_ParamLimits

0xd797,	// (0x0006fdd4) cam6_image_uncrop_pane

0xd7ba,	// (0x0006fdf7) cam6_indi_pane_ParamLimits

0xd7ba,	// (0x0006fdf7) cam6_indi_pane

0xd7d4,	// (0x0006fe11) cam6_mode_pane_ParamLimits

0xd7d4,	// (0x0006fe11) cam6_mode_pane

0xd7e8,	// (0x0006fe25) cam6_timer_pane_ParamLimits

0xd7e8,	// (0x0006fe25) cam6_timer_pane

0xd7f4,	// (0x0006fe31) cam6_zoom_pane_ParamLimits

0xd7f4,	// (0x0006fe31) cam6_zoom_pane

0xd80a,	// (0x0006fe47) cam6_mode_pane_g1_ParamLimits

0xd80a,	// (0x0006fe47) cam6_mode_pane_g1

0xd816,	// (0x0006fe53) cam6_mode_pane_g2_ParamLimits

0xd816,	// (0x0006fe53) cam6_mode_pane_g2

0xd822,	// (0x0006fe5f) cam6_mode_pane_g3_ParamLimits

0xd822,	// (0x0006fe5f) cam6_mode_pane_g3

0xd82e,	// (0x0006fe6b) cam6_mode_pane_g4_ParamLimits

0xd82e,	// (0x0006fe6b) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000721a7) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000721a7) cam6_mode_pane_g

0x29c3,	// (0x00065000) bg_tb_trans_pane_cp08_ParamLimits

0x29c3,	// (0x00065000) bg_tb_trans_pane_cp08

0x29d1,	// (0x0006500e) cam6_battery_pane_ParamLimits

0x29d1,	// (0x0006500e) cam6_battery_pane

0x29e7,	// (0x00065024) cam6_indi_pane_g1_ParamLimits

0x29e7,	// (0x00065024) cam6_indi_pane_g1

0x29f9,	// (0x00065036) cam6_indi_pane_g2_ParamLimits

0x29f9,	// (0x00065036) cam6_indi_pane_g2

0x2a0b,	// (0x00065048) cam6_indi_pane_g3_ParamLimits

0x2a0b,	// (0x00065048) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000721b0) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000721b0) cam6_indi_pane_g

0x2a1d,	// (0x0006505a) cam6_indi_pane_t1_ParamLimits

0x2a1d,	// (0x0006505a) cam6_indi_pane_t1

0xc73e,	// (0x0006ed7b) cam6_autofocus_pane_g1

0xc746,	// (0x0006ed83) cam6_autofocus_pane_g2

0xc74e,	// (0x0006ed8b) cam6_autofocus_pane_g3

0xc756,	// (0x0006ed93) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000721b7) cam6_autofocus_pane_g

0x2a43,	// (0x00065080) cam6_timer_pane_g1

0x2a4b,	// (0x00065088) cam6_timer_pane_t1

0x2a59,	// (0x00065096) cam6_zoom_cont_pane

0x2a61,	// (0x0006509e) cam6_zoom_pane_g1

0x2a69,	// (0x000650a6) cam6_zoom_pane_g2

0xd83a,	// (0x0006fe77) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x000721c0) cam6_zoom_pane_g

0x5402,	// (0x00067a3f) cam6_battery_pane_g1

0x5402,	// (0x00067a3f) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x00071d2c) cam6_battery_pane_g

0x2a71,	// (0x000650ae) cam6_zoom_cont_pane_g1

0x2a7a,	// (0x000650b7) cam6_zoom_cont_pane_g2

0x2a83,	// (0x000650c0) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x000721c7) cam6_zoom_cont_pane_g

0xd857,	// (0x0006fe94) cam6_mode_pane_cp_ParamLimits

0xd857,	// (0x0006fe94) cam6_mode_pane_cp

0xd7f4,	// (0x0006fe31) cam6_zoom_pane_cp_ParamLimits

0xd7f4,	// (0x0006fe31) cam6_zoom_pane_cp

0xd86b,	// (0x0006fea8) vid6_image_uncrop_cif_pane_ParamLimits

0xd86b,	// (0x0006fea8) vid6_image_uncrop_cif_pane

0xd88d,	// (0x0006feca) vid6_image_uncrop_nhd_pane_ParamLimits

0xd88d,	// (0x0006feca) vid6_image_uncrop_nhd_pane

0xd797,	// (0x0006fdd4) vid6_image_uncrop_vga_pane_ParamLimits

0xd797,	// (0x0006fdd4) vid6_image_uncrop_vga_pane

0xd8a4,	// (0x0006fee1) vid6_image_uncrop_wvga_pane_ParamLimits

0xd8a4,	// (0x0006fee1) vid6_image_uncrop_wvga_pane

0xd8bb,	// (0x0006fef8) vid6_indi_pane_ParamLimits

0xd8bb,	// (0x0006fef8) vid6_indi_pane

0x29c3,	// (0x00065000) bg_tb_trans_pane_cp09_ParamLimits

0x29c3,	// (0x00065000) bg_tb_trans_pane_cp09

0x2a97,	// (0x000650d4) cam6_battery_pane_cp_ParamLimits

0x2a97,	// (0x000650d4) cam6_battery_pane_cp

0x2aa3,	// (0x000650e0) vid6_indi_pane_g1_ParamLimits

0x2aa3,	// (0x000650e0) vid6_indi_pane_g1

0x2ab5,	// (0x000650f2) vid6_indi_pane_g2_ParamLimits

0x2ab5,	// (0x000650f2) vid6_indi_pane_g2

0x2ac7,	// (0x00065104) vid6_indi_pane_g3_ParamLimits

0x2ac7,	// (0x00065104) vid6_indi_pane_g3

0x2adc,	// (0x00065119) vid6_indi_pane_g4_ParamLimits

0x2adc,	// (0x00065119) vid6_indi_pane_g4

0x2af1,	// (0x0006512e) vid6_indi_pane_g5_ParamLimits

0x2af1,	// (0x0006512e) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x000721ce) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x000721ce) vid6_indi_pane_g

0x2b0b,	// (0x00065148) vid6_indi_pane_t1_ParamLimits

0x2b0b,	// (0x00065148) vid6_indi_pane_t1

0x2b21,	// (0x0006515e) vid6_indi_pane_t2_ParamLimits

0x2b21,	// (0x0006515e) vid6_indi_pane_t2

0x2b49,	// (0x00065186) vid6_indi_pane_t3_ParamLimits

0x2b49,	// (0x00065186) vid6_indi_pane_t3

0x2b71,	// (0x000651ae) vid6_indi_pane_t4_ParamLimits

0x2b71,	// (0x000651ae) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x000721d9) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x000721d9) vid6_indi_pane_t

0x2b95,	// (0x000651d2) wait_bar_pane_cp08

0xd8db,	// (0x0006ff18) main_cset_text2_pane_t1_ParamLimits

0xd8db,	// (0x0006ff18) main_cset_text2_pane_t1

0xd842,	// (0x0006fe7f) listscroll_gen_pane_cp06_t1_ParamLimits

0xd842,	// (0x0006fe7f) listscroll_gen_pane_cp06_t1

0x0386,	// (0x000629c3) main_cam6_set_pane

0x5631,	// (0x00067c6e) bg_tb_trans_pane_cp06_ParamLimits

0xc5fe,	// (0x0006ec3b) cam4_indicators_pane_g1_ParamLimits

0xc60f,	// (0x0006ec4c) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x00071f47) cam4_indicators_pane_g_ParamLimits

0xc627,	// (0x0006ec64) cam4_indicators_pane_t1_ParamLimits

0x225b,	// (0x00064898) bg_tb_trans_pane_cp07_ParamLimits

0xc6d2,	// (0x0006ed0f) vid4_indicators_pane_g1_ParamLimits

0xc6e6,	// (0x0006ed23) vid4_indicators_pane_g2_ParamLimits

0xc6fa,	// (0x0006ed37) vid4_indicators_pane_g3_ParamLimits

0xc70b,	// (0x0006ed48) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x00071f59) vid4_indicators_pane_g_ParamLimits

0xc727,	// (0x0006ed64) vid4_indicators_pane_t1_ParamLimits

0xd415,	// (0x0006fa52) vid4_progress_pane_g1_ParamLimits

0xd425,	// (0x0006fa62) vid4_progress_pane_g2_ParamLimits

0xd435,	// (0x0006fa72) vid4_progress_pane_g3_ParamLimits

0xd445,	// (0x0006fa82) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0007210a) vid4_progress_pane_g_ParamLimits

0xd463,	// (0x0006faa0) vid4_progress_pane_t1_ParamLimits

0xd479,	// (0x0006fab6) vid4_progress_pane_t2_ParamLimits

0xd48e,	// (0x0006facb) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x00072115) vid4_progress_pane_t_ParamLimits

0xd4a4,	// (0x0006fae1) wait_bar_pane_cp07_ParamLimits

0xd8f7,	// (0x0006ff34) main_cam6_set_pane_g2_ParamLimits

0xd8f7,	// (0x0006ff34) main_cam6_set_pane_g2

0xd903,	// (0x0006ff40) main_cset6_listscroll_pane_ParamLimits

0xd903,	// (0x0006ff40) main_cset6_listscroll_pane

0xd92c,	// (0x0006ff69) main_cset6_slider_pane_ParamLimits

0xd92c,	// (0x0006ff69) main_cset6_slider_pane

0xd938,	// (0x0006ff75) main_cset6_text2_pane_ParamLimits

0xd938,	// (0x0006ff75) main_cset6_text2_pane

0x2ba4,	// (0x000651e1) main_cset6_text_pane

0x2bac,	// (0x000651e9) main_cset_list_pane_copy1_ParamLimits

0x2bac,	// (0x000651e9) main_cset_list_pane_copy1

0x2bbc,	// (0x000651f9) scroll_pane_cp028_copy1

0xd94b,	// (0x0006ff88) cset_list_set_pane_copy1

0xd957,	// (0x0006ff94) aid_position_infowindow_above_copy1

0xd95f,	// (0x0006ff9c) aid_position_infowindow_below_copy1

0xd967,	// (0x0006ffa4) cset_list_set_pane_g1_copy1

0x7061,	// (0x0006969e) cset_list_set_pane_g3_copy1_ParamLimits

0x7061,	// (0x0006969e) cset_list_set_pane_g3_copy1

0x7070,	// (0x000696ad) cset_list_set_pane_t1_copy1_ParamLimits

0x7070,	// (0x000696ad) cset_list_set_pane_t1_copy1

0x225b,	// (0x00064898) list_highlight_pane_cp021_copy1_ParamLimits

0x225b,	// (0x00064898) list_highlight_pane_cp021_copy1

0x2bc5,	// (0x00065202) cset6_slider_pane_ParamLimits

0x2bc5,	// (0x00065202) cset6_slider_pane

0x2bf1,	// (0x0006522e) main_cset6_slider_pane_g1_ParamLimits

0x2bf1,	// (0x0006522e) main_cset6_slider_pane_g1

0xd96f,	// (0x0006ffac) main_cset6_slider_pane_g2_ParamLimits

0xd96f,	// (0x0006ffac) main_cset6_slider_pane_g2

0x23f0,	// (0x00064a2d) main_cset6_slider_pane_g3_ParamLimits

0x23f0,	// (0x00064a2d) main_cset6_slider_pane_g3

0xd997,	// (0x0006ffd4) main_cset6_slider_pane_g4_ParamLimits

0xd997,	// (0x0006ffd4) main_cset6_slider_pane_g4

0xd9a3,	// (0x0006ffe0) main_cset6_slider_pane_g5_ParamLimits

0xd9a3,	// (0x0006ffe0) main_cset6_slider_pane_g5

0x23f0,	// (0x00064a2d) main_cset6_slider_pane_g7_ParamLimits

0x23f0,	// (0x00064a2d) main_cset6_slider_pane_g7

0x23fc,	// (0x00064a39) main_cset6_slider_pane_g8_ParamLimits

0x23fc,	// (0x00064a39) main_cset6_slider_pane_g8

0xd9af,	// (0x0006ffec) main_cset6_slider_pane_g9_ParamLimits

0xd9af,	// (0x0006ffec) main_cset6_slider_pane_g9

0xd9bb,	// (0x0006fff8) main_cset6_slider_pane_g10_ParamLimits

0xd9bb,	// (0x0006fff8) main_cset6_slider_pane_g10

0xd9c7,	// (0x00070004) main_cset6_slider_pane_g11_ParamLimits

0xd9c7,	// (0x00070004) main_cset6_slider_pane_g11

0xd9d3,	// (0x00070010) main_cset6_slider_pane_g12_ParamLimits

0xd9d3,	// (0x00070010) main_cset6_slider_pane_g12

0xcc4a,	// (0x0006f287) main_cset6_slider_pane_g13_ParamLimits

0xcc4a,	// (0x0006f287) main_cset6_slider_pane_g13

0xcc56,	// (0x0006f293) main_cset6_slider_pane_g14_ParamLimits

0xcc56,	// (0x0006f293) main_cset6_slider_pane_g14

0xd9df,	// (0x0007001c) main_cset6_slider_pane_g15_ParamLimits

0xd9df,	// (0x0007001c) main_cset6_slider_pane_g15

0xd9a3,	// (0x0006ffe0) main_cset6_slider_pane_g16_ParamLimits

0xd9a3,	// (0x0006ffe0) main_cset6_slider_pane_g16

0xd9f7,	// (0x00070034) main_cset6_slider_pane_g17_ParamLimits

0xd9f7,	// (0x00070034) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x000721e2) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x000721e2) main_cset6_slider_pane_g

0x2c19,	// (0x00065256) main_cset6_slider_pane_t1_ParamLimits

0x2c19,	// (0x00065256) main_cset6_slider_pane_t1

0xda0f,	// (0x0007004c) main_cset6_slider_pane_t2_ParamLimits

0xda0f,	// (0x0007004c) main_cset6_slider_pane_t2

0xda3a,	// (0x00070077) main_cset6_slider_pane_t3_ParamLimits

0xda3a,	// (0x00070077) main_cset6_slider_pane_t3

0xda65,	// (0x000700a2) main_cset6_slider_pane_t4_ParamLimits

0xda65,	// (0x000700a2) main_cset6_slider_pane_t4

0xda90,	// (0x000700cd) main_cset6_slider_pane_t5_ParamLimits

0xda90,	// (0x000700cd) main_cset6_slider_pane_t5

0x2c5a,	// (0x00065297) main_cset6_slider_pane_t7_ParamLimits

0x2c5a,	// (0x00065297) main_cset6_slider_pane_t7

0xdabb,	// (0x000700f8) main_cset6_slider_pane_t8_ParamLimits

0xdabb,	// (0x000700f8) main_cset6_slider_pane_t8

0xdadf,	// (0x0007011c) main_cset6_slider_pane_t9_ParamLimits

0xdadf,	// (0x0007011c) main_cset6_slider_pane_t9

0xdb03,	// (0x00070140) main_cset6_slider_pane_t10_ParamLimits

0xdb03,	// (0x00070140) main_cset6_slider_pane_t10

0xdb27,	// (0x00070164) main_cset6_slider_pane_t11_ParamLimits

0xdb27,	// (0x00070164) main_cset6_slider_pane_t11

0x2c90,	// (0x000652cd) main_cset6_slider_pane_t14_ParamLimits

0x2c90,	// (0x000652cd) main_cset6_slider_pane_t14

0x2cc9,	// (0x00065306) main_cset6_slider_pane_t15_ParamLimits

0x2cc9,	// (0x00065306) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00072207) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00072207) main_cset6_slider_pane_t

0x2d02,	// (0x0006533f) cset_slider_pane_g1_copy1

0x2d0b,	// (0x00065348) cset_slider_pane_g2_copy1

0x2d14,	// (0x00065351) cset_slider_pane_g3_copy1

0x0386,	// (0x000629c3) bg_popup_sub_pane_cp011_copy1

0x2d1d,	// (0x0006535a) main_cset_text_pane_g1_copy1

0x254c,	// (0x00064b89) main_cset_text_pane_t1_copy1

0x255a,	// (0x00064b97) main_cset_text_pane_t2_copy1

0x2568,	// (0x00064ba5) main_cset_text_pane_t3_copy1

0x2576,	// (0x00064bb3) main_cset_text_pane_t4_copy1

0x2d25,	// (0x00065362) main_cset_text_pane_t5_copy1

0x2d33,	// (0x00065370) main_cset_text_pane_t6_copy1

0x2d41,	// (0x0006537e) main_cset_text_pane_t7_copy1

0x3fb0,	// (0x000665ed) main_cset_text2_pane_t1_copy1

0x225b,	// (0x00064898) main_ncimui_pane

0xa85b,	// (0x0006ce98) popup_query_ncimui_window_ParamLimits

0xa85b,	// (0x0006ce98) popup_query_ncimui_window

0xb327,	// (0x0006d964) field_cale_ev2_pane_g4_ParamLimits

0xb327,	// (0x0006d964) field_cale_ev2_pane_g4

0xbfb3,	// (0x0006e5f0) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbfb3,	// (0x0006e5f0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x00071ee5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x00071ee5) cell_video_dialer_keypad_pane_g

0xbfcb,	// (0x0006e608) cell_video_dialer_keypad_pane_t1

0x0386,	// (0x000629c3) bg_popup_window_pane_cp012

0x1560,	// (0x00063b9d) heading_pane_cp06

0x2d6d,	// (0x000653aa) ncim_query_content_pane

0x0386,	// (0x000629c3) bg_popup_heading_pane_cp01

0x2d75,	// (0x000653b2) ncim_heading_pane_t1

0x2d83,	// (0x000653c0) ncim_indicator_popup_pane

0x2d95,	// (0x000653d2) ncim_query_button_pane

0x2da9,	// (0x000653e6) ncim_query_content_pane_t1

0x2dbb,	// (0x000653f8) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0007224b) ncim_query_content_pane_t

0x2df5,	// (0x00065432) ncim_query_list_pane

0x2e07,	// (0x00065444) ncim_query_popup_pane

0x2d83,	// (0x000653c0) ncim_indicator_popup_pane_ParamLimits

0xdc72,	// (0x000702af) ncim_query_content_pane_g1_ParamLimits

0xdc72,	// (0x000702af) ncim_query_content_pane_g1

0x2da9,	// (0x000653e6) ncim_query_content_pane_t1_ParamLimits

0x2dbb,	// (0x000653f8) ncim_query_content_pane_t2_ParamLimits

0xdc7e,	// (0x000702bb) ncim_query_content_pane_t3_ParamLimits

0xdc7e,	// (0x000702bb) ncim_query_content_pane_t3

0xdc9b,	// (0x000702d8) ncim_query_content_pane_t4_ParamLimits

0xdc9b,	// (0x000702d8) ncim_query_content_pane_t4

0xdcb8,	// (0x000702f5) ncim_query_content_pane_t5_ParamLimits

0xdcb8,	// (0x000702f5) ncim_query_content_pane_t5

0x2dcd,	// (0x0006540a) ncim_query_content_pane_t6_ParamLimits

0x2dcd,	// (0x0006540a) ncim_query_content_pane_t6

0xfc0e,	// (0x0007224b) ncim_query_content_pane_t_ParamLimits

0x2df5,	// (0x00065432) ncim_query_list_pane_ParamLimits

0x2e07,	// (0x00065444) ncim_query_popup_pane_ParamLimits

0x2e1b,	// (0x00065458) wait_bar_pane_cp04

0x0386,	// (0x000629c3) input_focus_pane_cp011

0x2e23,	// (0x00065460) ncim_query_popup_pane_t1

0x2e31,	// (0x0006546e) ncim_list_query_list_pane_ParamLimits

0x2e31,	// (0x0006546e) ncim_list_query_list_pane

0x0386,	// (0x000629c3) bg_button_pane_cp027

0x2e44,	// (0x00065481) ncim_query_button_pane_g1

0x0386,	// (0x000629c3) list_highlight_pane_cp012

0x2e4e,	// (0x0006548b) ncim_list_query_list_pane_g1

0x2e56,	// (0x00065493) ncim_list_query_list_pane_t1

0xc61b,	// (0x0006ec58) cam4_indicators_pane_g3_ParamLimits

0xc61b,	// (0x0006ec58) cam4_indicators_pane_g3

0xc717,	// (0x0006ed54) vid4_indicators_pane_g5_ParamLimits

0xc717,	// (0x0006ed54) vid4_indicators_pane_g5

0xd454,	// (0x0006fa91) vid4_progress_pane_g5_ParamLimits

0xd454,	// (0x0006fa91) vid4_progress_pane_g5

0xdb61,	// (0x0007019e) main_ncimui_pane_g1

0xdbc7,	// (0x00070204) ncimui_group_query_pane_ParamLimits

0xdbc7,	// (0x00070204) ncimui_group_query_pane

0xdc0f,	// (0x0007024c) ncimui_list_pane_ParamLimits

0xdc0f,	// (0x0007024c) ncimui_list_pane

0xdc35,	// (0x00070272) ncimui_text_pane_ParamLimits

0xdc35,	// (0x00070272) ncimui_text_pane

0xdcd5,	// (0x00070312) ncimui_text_pane_t1_ParamLimits

0xdcd5,	// (0x00070312) ncimui_text_pane_t1

0x2e64,	// (0x000654a1) ncimui_list_single_graphic_pane_ParamLimits

0x2e64,	// (0x000654a1) ncimui_list_single_graphic_pane

0xdcf4,	// (0x00070331) ncimui_query_pane_ParamLimits

0xdcf4,	// (0x00070331) ncimui_query_pane

0x0386,	// (0x000629c3) list_highlight_pane_cp013

0x2e74,	// (0x000654b1) ncim_list_query_list_pane_t1_copy1

0x2e82,	// (0x000654bf) ncim_list_single_graphic_pane_g1

0xdd07,	// (0x00070344) ncim_query_button_pane_cp01

0xdd13,	// (0x00070350) ncim_query_entry_pane_ParamLimits

0xdd13,	// (0x00070350) ncim_query_entry_pane

0xdd26,	// (0x00070363) ncimui_query_pane_g1

0xdd32,	// (0x0007036f) ncimui_query_pane_t1_ParamLimits

0xdd32,	// (0x0007036f) ncimui_query_pane_t1

0x225b,	// (0x00064898) input_focus_pane_cp012

0x2e8a,	// (0x000654c7) ncim_query_entry_pane_t1

0x0ba3,	// (0x000631e0) main_im_pane_ParamLimits

0x225b,	// (0x00064898) main_mobtv_pane_ParamLimits

0x225b,	// (0x00064898) main_mobtv_pane

0xd9af,	// (0x0006ffec) main_cset6_slider_pane_g18_ParamLimits

0xd9af,	// (0x0006ffec) main_cset6_slider_pane_g18

0xda03,	// (0x00070040) main_cset6_slider_pane_g19_ParamLimits

0xda03,	// (0x00070040) main_cset6_slider_pane_g19

0xefc2,	// (0x000715ff) bg_main_mobtv_pane_ParamLimits

0xefc2,	// (0x000715ff) bg_main_mobtv_pane

0xdd4b,	// (0x00070388) main_mobtv_info_pane

0xdd54,	// (0x00070391) main_mobtv_loading_pane_ParamLimits

0xdd54,	// (0x00070391) main_mobtv_loading_pane

0x2eaa,	// (0x000654e7) main_mobtv_pg_channel_list_pane

0x2eb4,	// (0x000654f1) main_mobtv_pg_hdr_pane

0xdd61,	// (0x0007039e) main_mobtv_programe_curr_pane_ParamLimits

0xdd61,	// (0x0007039e) main_mobtv_programe_curr_pane

0xdd6e,	// (0x000703ab) main_mobtv_programe_next_pane_ParamLimits

0xdd6e,	// (0x000703ab) main_mobtv_programe_next_pane

0x2ebd,	// (0x000654fa) popup_mobtv_noti_window

0x5402,	// (0x00067a3f) main_tv_pg_hdr_pane_g1

0x2ec5,	// (0x00065502) main_tv_pg_hdr_pane_g2

0x2ecd,	// (0x0006550a) main_tv_pg_hdr_pane_g3

0x2ed5,	// (0x00065512) main_tv_pg_hdr_pane_g4

0x2edd,	// (0x0006551a) main_tv_pg_hdr_pane_g5

0x2ee5,	// (0x00065522) main_tv_pg_hdr_pane_g6

0x2eed,	// (0x0006552a) main_tv_pg_hdr_pane_g7

0x2ef5,	// (0x00065532) main_tv_pg_hdr_pane_g8

0x2efd,	// (0x0006553a) main_tv_pg_hdr_pane_g9

0x2f05,	// (0x00065542) main_tv_pg_hdr_pane_g10

0x2f0f,	// (0x0006554c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00072258) main_tv_pg_hdr_pane_g

0x2f19,	// (0x00065556) main_tv_pg_hdr_pane_t1

0x2f27,	// (0x00065564) main_tv_pg_hdr_pane_t2

0x2f35,	// (0x00065572) main_tv_pg_hdr_pane_t3

0x2f43,	// (0x00065580) main_tv_pg_hdr_pane_t4

0x2f51,	// (0x0006558e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0007226f) main_tv_pg_hdr_pane_t

0x2f5f,	// (0x0006559c) single_mobtv_pg_channel_pane_ParamLimits

0x2f5f,	// (0x0006559c) single_mobtv_pg_channel_pane

0x2f71,	// (0x000655ae) single_mobtv_pg_channel_table_pane

0x2f7a,	// (0x000655b7) single_mobtv_pg_channel_thumb_pane

0x2f83,	// (0x000655c0) single_tv_pg_channel_pane_g1

0x2f8c,	// (0x000655c9) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0007227a) single_tv_pg_channel_pane_g

0x5631,	// (0x00067c6e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x5631,	// (0x00067c6e) bg_single_mobtv_pg_channel_thumb_pane

0x2f95,	// (0x000655d2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2f95,	// (0x000655d2) single_mobtv_pg_channel_thumb_pane_g1

0x2fa3,	// (0x000655e0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2fa3,	// (0x000655e0) single_mobtv_pg_channel_thumb_pane_g2

0x2faf,	// (0x000655ec) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2faf,	// (0x000655ec) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0007227f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0007227f) single_mobtv_pg_channel_thumb_pane_g

0x2fbb,	// (0x000655f8) single_mobtv_pg_channel_thumb_pane_t1

0x2fc9,	// (0x00065606) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00072286) single_mobtv_pg_channel_thumb_pane_t

0x5402,	// (0x00067a3f) bg_single_mobtv_pg_channel_table_pane_g1

0x5402,	// (0x00067a3f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x00071d2c) bg_single_mobtv_pg_channel_table_pane_g

0x2fd7,	// (0x00065614) single_mobtv_pg_channel_table_pane_t1

0x2fe5,	// (0x00065622) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0007228b) single_mobtv_pg_channel_table_pane_t

0xdd83,	// (0x000703c0) main_mobtv_info_pane_g1_ParamLimits

0xdd83,	// (0x000703c0) main_mobtv_info_pane_g1

0xdd9f,	// (0x000703dc) main_mobtv_info_pane_t1_ParamLimits

0xdd9f,	// (0x000703dc) main_mobtv_info_pane_t1

0xde05,	// (0x00070442) main_mobtv_info_pane_t2_ParamLimits

0xde05,	// (0x00070442) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00072295) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00072295) main_mobtv_info_pane_t

0xde88,	// (0x000704c5) wait_bar_pane_cp05

0xde98,	// (0x000704d5) main_mobtv_loading_pane_g1_ParamLimits

0xde98,	// (0x000704d5) main_mobtv_loading_pane_g1

0xdea4,	// (0x000704e1) main_mobtv_loading_pane_g2_ParamLimits

0xdea4,	// (0x000704e1) main_mobtv_loading_pane_g2

0xdeb0,	// (0x000704ed) main_mobtv_loading_pane_g3_ParamLimits

0xdeb0,	// (0x000704ed) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0007229c) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0007229c) main_mobtv_loading_pane_g

0x2ff3,	// (0x00065630) main_mobtv_loading_pane_t1_ParamLimits

0x2ff3,	// (0x00065630) main_mobtv_loading_pane_t1

0x300b,	// (0x00065648) main_mobtv_loading_pane_t2_ParamLimits

0x300b,	// (0x00065648) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x000722a3) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x000722a3) main_mobtv_loading_pane_t

0xdebc,	// (0x000704f9) wait_bar_pane_cp06_ParamLimits

0xdebc,	// (0x000704f9) wait_bar_pane_cp06

0x302f,	// (0x0006566c) main_mobtv_programe_curr_pane_t1

0x303d,	// (0x0006567a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x000722a8) main_mobtv_programe_curr_pane_t

0x304b,	// (0x00065688) main_mobtv_programe_next_pane_t1

0x3059,	// (0x00065696) main_mobtv_programe_next_pane_t2

0x3067,	// (0x000656a4) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x000722ad) main_mobtv_programe_next_pane_t

0x0386,	// (0x000629c3) bg_popup_mobtv_noti_window_pane

0x3075,	// (0x000656b2) popup_mobtv_noti_window_g1

0x307d,	// (0x000656ba) popup_mobtv_noti_window_t1

0x308b,	// (0x000656c8) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x000722b4) popup_mobtv_noti_window_t

0x5402,	// (0x00067a3f) bg_popup_mobtv_noti_window_pane_g1

0x0386,	// (0x000629c3) sc_clock_pane

0x0386,	// (0x000629c3) main_fs_bigclock_pane

0xd630,	// (0x0006fc6d) blid2_tripm_pane_t4_ParamLimits

0xd630,	// (0x0006fc6d) blid2_tripm_pane_t4

0xdec8,	// (0x00070505) sc_clock_pane_g1_ParamLimits

0xdec8,	// (0x00070505) sc_clock_pane_g1

0xded6,	// (0x00070513) sc_clock_pane_t1_ParamLimits

0xded6,	// (0x00070513) sc_clock_pane_t1

0xdee9,	// (0x00070526) sc_clock_pane_t2_ParamLimits

0xdee9,	// (0x00070526) sc_clock_pane_t2

0xdefb,	// (0x00070538) sc_clock_pane_t3_ParamLimits

0xdefb,	// (0x00070538) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x000722b9) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x000722b9) sc_clock_pane_t

0xe647,	// (0x00070c84) main_fs_bigclock_indicator_pane_ParamLimits

0xe647,	// (0x00070c84) main_fs_bigclock_indicator_pane

0xdf70,	// (0x000705ad) main_fs_bigclock_pane_g1_ParamLimits

0xdf70,	// (0x000705ad) main_fs_bigclock_pane_g1

0xe653,	// (0x00070c90) main_fs_bigclock_pane_t1_ParamLimits

0xe653,	// (0x00070c90) main_fs_bigclock_pane_t1

0xe665,	// (0x00070ca2) main_fs_bigclock_pane_t2_ParamLimits

0xe665,	// (0x00070ca2) main_fs_bigclock_pane_t2

0xe677,	// (0x00070cb4) main_fs_bigclock_pane_t3_ParamLimits

0xe677,	// (0x00070cb4) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x000724c3) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x000724c3) main_fs_bigclock_pane_t

0x3ca2,	// (0x000662df) main_fs_bigclock_indicator_pane_g1

0x2d9d,	// (0x000653da) ncim_query_content_pane_g2_ParamLimits

0x2d9d,	// (0x000653da) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00072246) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00072246) ncim_query_content_pane_g

0xdf0d,	// (0x0007054a) sc_clock_pane_t4_ParamLimits

0xdf0d,	// (0x0007054a) sc_clock_pane_t4

0x225b,	// (0x00064898) main_radioblah_pane

0xef35,	// (0x00071572) cell_call4_button_pane_t1_copy1_ParamLimits

0xef35,	// (0x00071572) cell_call4_button_pane_t1_copy1

0xdb79,	// (0x000701b6) main_ncimui_pane_t1_ParamLimits

0xdb79,	// (0x000701b6) main_ncimui_pane_t1

0xdb93,	// (0x000701d0) main_ncimui_pane_t2_ParamLimits

0xdb93,	// (0x000701d0) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0007223f) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0007223f) main_ncimui_pane_t

0x31cc,	// (0x00065809) main_radioblah_anim_pane_ParamLimits

0x31cc,	// (0x00065809) main_radioblah_anim_pane

0x31dd,	// (0x0006581a) main_radioblah_info_pane_ParamLimits

0x31dd,	// (0x0006581a) main_radioblah_info_pane

0x31f1,	// (0x0006582e) main_radioblah_pane_t1_ParamLimits

0x31f1,	// (0x0006582e) main_radioblah_pane_t1

0x320d,	// (0x0006584a) main_radioblah_pane_t2_ParamLimits

0x320d,	// (0x0006584a) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x000722da) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x000722da) main_radioblah_pane_t

0xdfba,	// (0x000705f7) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdfba,	// (0x000705f7) main_radioblah_rocker_ctrl_pane

0x3255,	// (0x00065892) main_radioblah_info_pane_t1_ParamLimits

0x3255,	// (0x00065892) main_radioblah_info_pane_t1

0xdfff,	// (0x0007063c) main_radioblah_info_pane_t2_ParamLimits

0xdfff,	// (0x0007063c) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x000722e3) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x000722e3) main_radioblah_info_pane_t

0x5402,	// (0x00067a3f) main_radioblah_rocker_ctrl_pane_g1

0xe0a7,	// (0x000706e4) main_radioblah_rocker_ctrl_pane_g2

0xe0af,	// (0x000706ec) main_radioblah_rocker_ctrl_pane_g3

0xe0b7,	// (0x000706f4) main_radioblah_rocker_ctrl_pane_g4

0xe0bf,	// (0x000706fc) main_radioblah_rocker_ctrl_pane_g5

0xe0c7,	// (0x00070704) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x000722ec) main_radioblah_rocker_ctrl_pane_g

0x3fb0,	// (0x000665ed) main_cset_text2_pane_t1_copy1_ParamLimits

0xc54e,	// (0x0006eb8b) cam4_image_uncrop_qvga_pane

0xc68b,	// (0x0006ecc8) vid4_image_uncrop_qcif_pane

0xd7ae,	// (0x0006fdeb) cam6_image_uncrop_qvga_pane_ParamLimits

0xd7ae,	// (0x0006fdeb) cam6_image_uncrop_qvga_pane

0x2a8b,	// (0x000650c8) vid6_image_uncrop_qcif_pane_ParamLimits

0x2a8b,	// (0x000650c8) vid6_image_uncrop_qcif_pane

0x0386,	// (0x000629c3) bg_popup_preview_window_pane_cp03

0x2d4f,	// (0x0006538c) list_cset_text2_pane

0x2d57,	// (0x00065394) main_cset6_text2_pane_g1

0x2d5f,	// (0x0006539c) main_cset6_text2_pane_t1

0xe0cf,	// (0x0007070c) list_cset_text2_pane_t1_ParamLimits

0xe0cf,	// (0x0007070c) list_cset_text2_pane_t1

0x225b,	// (0x00064898) main_radioblah_pane_ParamLimits

0xde76,	// (0x000704b3) main_mobtv_info_pane_t3_ParamLimits

0xde76,	// (0x000704b3) main_mobtv_info_pane_t3

0xdfa8,	// (0x000705e5) main_radioblah_pane_g1

0xdfd3,	// (0x00070610) main_radioblah_info_pane_g1

0xe04e,	// (0x0007068b) main_radioblah_info_pane_t3_ParamLimits

0xe04e,	// (0x0007068b) main_radioblah_info_pane_t3

0x980d,	// (0x0006be4a) highlight_cell_cale_month_pane_ParamLimits

0x980d,	// (0x0006be4a) highlight_cell_cale_month_pane

0x0386,	// (0x000629c3) main_phob_fisheye_pane

0x570d,	// (0x00067d4a) scroll_pane_cp0031_ParamLimits

0x570d,	// (0x00067d4a) scroll_pane_cp0031

0x2b95,	// (0x000651d2) wait_bar_pane_cp08_ParamLimits

0xd94b,	// (0x0006ff88) cset_list_set_pane_copy1_ParamLimits

0x32a6,	// (0x000658e3) highlight_cell_cale_month_pane_g1

0xe0e4,	// (0x00070721) highlight_cell_cale_month_pane_t1

0x280e,	// (0x00064e4b) list_gen_pane_cp01

0x23b1,	// (0x000649ee) scroll_pane_01

0x7156,	// (0x00069793) list_single_double_fisheye_pane

0x715f,	// (0x0006979c) list_double_fisheye_pane_g1_ParamLimits

0x715f,	// (0x0006979c) list_double_fisheye_pane_g1

0x716b,	// (0x000697a8) list_double_fisheye_pane_g2_ParamLimits

0x716b,	// (0x000697a8) list_double_fisheye_pane_g2

0x717f,	// (0x000697bc) list_double_fisheye_pane_g3_ParamLimits

0x717f,	// (0x000697bc) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x000722f9) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x000722f9) list_double_fisheye_pane_g

0x71a8,	// (0x000697e5) list_double_fisheye_pane_t1_ParamLimits

0x71a8,	// (0x000697e5) list_double_fisheye_pane_t1

0x71c3,	// (0x00069800) list_double_fisheye_pane_t2_ParamLimits

0x71c3,	// (0x00069800) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00072304) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00072304) list_double_fisheye_pane_t

0x0386,	// (0x000629c3) main_call5_pane

0xdf33,	// (0x00070570) sc_swipe_pane_ParamLimits

0xdf33,	// (0x00070570) sc_swipe_pane

0xe0fe,	// (0x0007073b) call5_image_pane_ParamLimits

0xe0fe,	// (0x0007073b) call5_image_pane

0xe10a,	// (0x00070747) call5_swipe_1_pane_ParamLimits

0xe10a,	// (0x00070747) call5_swipe_1_pane

0xe116,	// (0x00070753) call5_swipe_2_pane_ParamLimits

0xe116,	// (0x00070753) call5_swipe_2_pane

0xe12e,	// (0x0007076b) popup_call5_audio_first_window_ParamLimits

0xe12e,	// (0x0007076b) popup_call5_audio_first_window

0x5631,	// (0x00067c6e) call5_swipe_1_pane_g1_ParamLimits

0x5631,	// (0x00067c6e) call5_swipe_1_pane_g1

0x32ae,	// (0x000658eb) call5_swipe_1_pane_g2_ParamLimits

0x32ae,	// (0x000658eb) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00072309) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00072309) call5_swipe_1_pane_g

0x32ba,	// (0x000658f7) call5_swipe_1_pane_t1_ParamLimits

0x32ba,	// (0x000658f7) call5_swipe_1_pane_t1

0x5631,	// (0x00067c6e) call5_swipe_2_pane_g1_ParamLimits

0x5631,	// (0x00067c6e) call5_swipe_2_pane_g1

0x32cf,	// (0x0006590c) call5_swipe_2_pane_g2_ParamLimits

0x32cf,	// (0x0006590c) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0007230e) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0007230e) call5_swipe_2_pane_g

0x32db,	// (0x00065918) call5_swipe_2_pane_t1_ParamLimits

0x32db,	// (0x00065918) call5_swipe_2_pane_t1

0x32f0,	// (0x0006592d) sc_swipe_pane_g1_ParamLimits

0x32f0,	// (0x0006592d) sc_swipe_pane_g1

0x32fd,	// (0x0006593a) sc_swipe_pane_g2_ParamLimits

0x32fd,	// (0x0006593a) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00072313) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00072313) sc_swipe_pane_g

0x3309,	// (0x00065946) sc_swipe_pane_t1_ParamLimits

0x3309,	// (0x00065946) sc_swipe_pane_t1

0x0386,	// (0x000629c3) main_cmail_launcher_pane

0xe13a,	// (0x00070777) aid_size_cell_cmail_l_ParamLimits

0xe13a,	// (0x00070777) aid_size_cell_cmail_l

0xe14a,	// (0x00070787) grid_cmail_l_pane_ParamLimits

0xe14a,	// (0x00070787) grid_cmail_l_pane

0xe156,	// (0x00070793) cell_cmail_l_pane_ParamLimits

0xe156,	// (0x00070793) cell_cmail_l_pane

0xe168,	// (0x000707a5) cell_cmail_l_pane_g1_ParamLimits

0xe168,	// (0x000707a5) cell_cmail_l_pane_g1

0xe179,	// (0x000707b6) cell_cmail_l_pane_t1_ParamLimits

0xe179,	// (0x000707b6) cell_cmail_l_pane_t1

0x331e,	// (0x0006595b) cell_cmail_l_pane_t2_ParamLimits

0x331e,	// (0x0006595b) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00072318) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00072318) cell_cmail_l_pane_t

0x225b,	// (0x00064898) grid_highlight_pane_cp018_ParamLimits

0x225b,	// (0x00064898) grid_highlight_pane_cp018

0x7d6e,	// (0x0006a3ab) main2_pane_ParamLimits

0x7d6e,	// (0x0006a3ab) main2_pane

0x0c7c,	// (0x000632b9) popup_sp_fs_action_menu_bg_pane_g1

0x0c84,	// (0x000632c1) popup_sp_fs_action_menu_bg_pane_g2

0x0c8c,	// (0x000632c9) popup_sp_fs_action_menu_bg_pane_g3

0x0c94,	// (0x000632d1) popup_sp_fs_action_menu_bg_pane_g4

0x0c9c,	// (0x000632d9) popup_sp_fs_action_menu_bg_pane_g5

0x0ca4,	// (0x000632e1) popup_sp_fs_action_menu_bg_pane_g6

0x0cac,	// (0x000632e9) popup_sp_fs_action_menu_bg_pane_g7

0x0cb4,	// (0x000632f1) popup_sp_fs_action_menu_bg_pane_g8

0x0cbc,	// (0x000632f9) popup_sp_fs_action_menu_bg_pane_g9

0x0cc4,	// (0x00063301) popup_sp_fs_action_menu_bg_pane_g10

0x0cc4,	// (0x00063301) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000717c7) popup_sp_fs_action_menu_bg_pane_g

0x69ee,	// (0x0006902b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x2_t3_g3_g1

0x69fa,	// (0x00069037) list_medium_line_x2_t3_g3_g2_ParamLimits

0x69fa,	// (0x00069037) list_medium_line_x2_t3_g3_g2

0x6a06,	// (0x00069043) list_medium_line_x2_t3_g3_g3_ParamLimits

0x6a06,	// (0x00069043) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00071875) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00071875) list_medium_line_x2_t3_g3_g

0x6a12,	// (0x0006904f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x6a12,	// (0x0006904f) list_medium_line_x2_t3_g3_t1

0x6a27,	// (0x00069064) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6a27,	// (0x00069064) list_medium_line_x2_t3_g3_t2

0x6a39,	// (0x00069076) list_medium_line_x2_t3_g3_t3_ParamLimits

0x6a39,	// (0x00069076) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007187c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007187c) list_medium_line_x2_t3_g3_t

0x69ee,	// (0x0006902b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x2_t3_g2_g1

0x6a06,	// (0x00069043) list_medium_line_x2_t3_g2_g2_ParamLimits

0x6a06,	// (0x00069043) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x00071883) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x00071883) list_medium_line_x2_t3_g2_g

0x6a4e,	// (0x0006908b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x6a4e,	// (0x0006908b) list_medium_line_x2_t3_g2_t1

0x6a64,	// (0x000690a1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6a64,	// (0x000690a1) list_medium_line_x2_t3_g2_t2

0x6a76,	// (0x000690b3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6a76,	// (0x000690b3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00071888) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00071888) list_medium_line_x2_t3_g2_t

0x69ee,	// (0x0006902b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x2_t4_g4_g1

0x6a93,	// (0x000690d0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x6a93,	// (0x000690d0) list_medium_line_x2_t4_g4_g2

0x69fa,	// (0x00069037) list_medium_line_x2_t4_g4_g3_ParamLimits

0x69fa,	// (0x00069037) list_medium_line_x2_t4_g4_g3

0x6a9f,	// (0x000690dc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x6a9f,	// (0x000690dc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007188f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007188f) list_medium_line_x2_t4_g4_g

0x6aab,	// (0x000690e8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6aab,	// (0x000690e8) list_medium_line_x2_t4_g4_t1

0x6ac5,	// (0x00069102) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6ac5,	// (0x00069102) list_medium_line_x2_t4_g4_t2

0x6adb,	// (0x00069118) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6adb,	// (0x00069118) list_medium_line_x2_t4_g4_t3

0x6af0,	// (0x0006912d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x6af0,	// (0x0006912d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00071898) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00071898) list_medium_line_x2_t4_g4_t

0x69ee,	// (0x0006902b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x2_t2_g4_g1

0x6a93,	// (0x000690d0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x6a93,	// (0x000690d0) list_medium_line_x2_t2_g4_g2

0x69fa,	// (0x00069037) list_medium_line_x2_t2_g4_g3_ParamLimits

0x69fa,	// (0x00069037) list_medium_line_x2_t2_g4_g3

0x6a06,	// (0x00069043) list_medium_line_x2_t2_g4_g4_ParamLimits

0x6a06,	// (0x00069043) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000718ff) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000718ff) list_medium_line_x2_t2_g4_g

0x6b02,	// (0x0006913f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x6b02,	// (0x0006913f) list_medium_line_x2_t2_g4_t1

0x6a39,	// (0x00069076) list_medium_line_x2_t2_g4_t2_ParamLimits

0x6a39,	// (0x00069076) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00071908) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00071908) list_medium_line_x2_t2_g4_t

0x69ee,	// (0x0006902b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x2_t2_g3_g1

0x69fa,	// (0x00069037) list_medium_line_x2_t2_g3_g2_ParamLimits

0x69fa,	// (0x00069037) list_medium_line_x2_t2_g3_g2

0x6a06,	// (0x00069043) list_medium_line_x2_t2_g3_g3_ParamLimits

0x6a06,	// (0x00069043) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00071875) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00071875) list_medium_line_x2_t2_g3_g

0x6b17,	// (0x00069154) list_medium_line_x2_t2_g3_t1_ParamLimits

0x6b17,	// (0x00069154) list_medium_line_x2_t2_g3_t1

0x6a39,	// (0x00069076) list_medium_line_x2_t2_g3_t2_ParamLimits

0x6a39,	// (0x00069076) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007190d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007190d) list_medium_line_x2_t2_g3_t

0x9978,	// (0x0006bfb5) main_sp_fs_list_pane_ParamLimits

0x9978,	// (0x0006bfb5) main_sp_fs_list_pane

0x9984,	// (0x0006bfc1) sp_fs_scroll_pane_ParamLimits

0x9984,	// (0x0006bfc1) sp_fs_scroll_pane

0x6b2c,	// (0x00069169) list_medium_line_x2_t3_t1

0x6b3c,	// (0x00069179) list_medium_line_x2_t3_t2

0x6b4a,	// (0x00069187) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00071958) list_medium_line_x2_t3_t

0x6b58,	// (0x00069195) list_medium_line_x3_t4_t1

0x6b68,	// (0x000691a5) list_medium_line_x3_t4_t2

0x6b76,	// (0x000691b3) list_medium_line_x3_t4_t3

0x6b4a,	// (0x00069187) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007195f) list_medium_line_x3_t4_t

0x6b84,	// (0x000691c1) list_medium_line_x4_t5_t1

0x6b94,	// (0x000691d1) list_medium_line_x4_t5_t2

0x6b76,	// (0x000691b3) list_medium_line_x4_t5_t3

0x6ba2,	// (0x000691df) list_medium_line_x4_t5_t4

0x6b4a,	// (0x00069187) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00071968) list_medium_line_x4_t5_t

0x69ee,	// (0x0006902b) list_medium_line_t4_g4_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_t4_g4_g1

0x6a9f,	// (0x000690dc) list_medium_line_t4_g4_g2_ParamLimits

0x6a9f,	// (0x000690dc) list_medium_line_t4_g4_g2

0x6bb0,	// (0x000691ed) list_medium_line_t4_g4_g3_ParamLimits

0x6bb0,	// (0x000691ed) list_medium_line_t4_g4_g3

0x6a06,	// (0x00069043) list_medium_line_t4_g4_g4_ParamLimits

0x6a06,	// (0x00069043) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00071973) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00071973) list_medium_line_t4_g4_g

0x6bbc,	// (0x000691f9) list_medium_line_t4_g4_t1_ParamLimits

0x6bbc,	// (0x000691f9) list_medium_line_t4_g4_t1

0x6bd1,	// (0x0006920e) list_medium_line_t4_g4_t2_ParamLimits

0x6bd1,	// (0x0006920e) list_medium_line_t4_g4_t2

0x6be6,	// (0x00069223) list_medium_line_t4_g4_t3_ParamLimits

0x6be6,	// (0x00069223) list_medium_line_t4_g4_t3

0x6a39,	// (0x00069076) list_medium_line_t4_g4_t4_ParamLimits

0x6a39,	// (0x00069076) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007197c) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007197c) list_medium_line_t4_g4_t

0x9aae,	// (0x0006c0eb) chi_dic_find_pane_g1

0xa81e,	// (0x0006ce5b) main_tport_pane

0x6dd9,	// (0x00069416) list_medium_line_plain_t1

0x6de7,	// (0x00069424) list_medium_line_t2_g2_g1_ParamLimits

0x6de7,	// (0x00069424) list_medium_line_t2_g2_g1

0xcfe3,	// (0x0006f620) list_medium_line_t2_g2_g2_ParamLimits

0xcfe3,	// (0x0006f620) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x00072050) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x00072050) list_medium_line_t2_g2_g

0x6df3,	// (0x00069430) list_medium_line_t2_g2_t1_ParamLimits

0x6df3,	// (0x00069430) list_medium_line_t2_g2_t1

0x6e0d,	// (0x0006944a) list_medium_line_t2_g2_t2_ParamLimits

0x6e0d,	// (0x0006944a) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x00072055) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x00072055) list_medium_line_t2_g2_t

0x7021,	// (0x0006965e) aid_sp_fs_list_icon_a_sm

0xd4b5,	// (0x0006faf2) aid_sp_fs_list_icon_d

0x3d41,	// (0x0006637e) aid_sp_fs_text_primary

0x7029,	// (0x00069666) aid_sp_fs_text_secondary

0xd4bd,	// (0x0006fafa) list_medium_line

0xd4bd,	// (0x0006fafa) list_medium_line_g2

0xd4bd,	// (0x0006fafa) list_medium_line_g3

0xd4bd,	// (0x0006fafa) list_medium_line_plain

0xd4bd,	// (0x0006fafa) list_medium_line_plain_t2

0xd4bd,	// (0x0006fafa) list_medium_line_plain_t3

0xd4bd,	// (0x0006fafa) list_medium_line_right_icon

0xd4bd,	// (0x0006fafa) list_medium_line_right_iconx2

0xd4bd,	// (0x0006fafa) list_medium_line_t2

0xd4bd,	// (0x0006fafa) list_medium_line_t2_g2

0xd4bd,	// (0x0006fafa) list_medium_line_t2_g3

0xd4bd,	// (0x0006fafa) list_medium_line_t2_right_icon

0xd4bd,	// (0x0006fafa) list_medium_line_t2_right_iconx2

0xd4bd,	// (0x0006fafa) list_medium_line_t3

0xd4bd,	// (0x0006fafa) list_medium_line_t3_g2

0xd4bd,	// (0x0006fafa) list_medium_line_t3_g3

0xd4bd,	// (0x0006fafa) list_medium_line_t3_right_iconx2

0x7032,	// (0x0006966f) list_medium_line_t4_g4

0x703b,	// (0x00069678) list_medium_line_x2

0x703b,	// (0x00069678) list_medium_line_x2_t2_g2

0x703b,	// (0x00069678) list_medium_line_x2_t2_g3

0x703b,	// (0x00069678) list_medium_line_x2_t2_g4

0x703b,	// (0x00069678) list_medium_line_x2_t3

0x703b,	// (0x00069678) list_medium_line_x2_t3_g2

0x703b,	// (0x00069678) list_medium_line_x2_t3_g3

0x703b,	// (0x00069678) list_medium_line_x2_t3_g4

0x703b,	// (0x00069678) list_medium_line_x2_t4_g2

0x703b,	// (0x00069678) list_medium_line_x2_t4_g4

0x7044,	// (0x00069681) list_medium_line_x3

0x7044,	// (0x00069681) list_medium_line_x3_t4

0x7044,	// (0x00069681) list_medium_line_x3_t4_g4

0x7032,	// (0x0006966f) list_medium_line_x4_t4

0x7032,	// (0x0006966f) list_medium_line_x4_t4_g7

0x7032,	// (0x0006966f) list_medium_line_x4_t5

0x704d,	// (0x0006968a) list_single_fs_dyc_pane_ParamLimits

0x704d,	// (0x0006968a) list_single_fs_dyc_pane

0x69ee,	// (0x0006902b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x4_t4_g7_g1

0x7085,	// (0x000696c2) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7085,	// (0x000696c2) list_medium_line_x4_t4_g7_g2

0x7091,	// (0x000696ce) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7091,	// (0x000696ce) list_medium_line_x4_t4_g7_g3

0x70a0,	// (0x000696dd) list_medium_line_x4_t4_g7_g4_ParamLimits

0x70a0,	// (0x000696dd) list_medium_line_x4_t4_g7_g4

0x70ac,	// (0x000696e9) list_medium_line_x4_t4_g7_g5_ParamLimits

0x70ac,	// (0x000696e9) list_medium_line_x4_t4_g7_g5

0x70bb,	// (0x000696f8) list_medium_line_x4_t4_g7_g6_ParamLimits

0x70bb,	// (0x000696f8) list_medium_line_x4_t4_g7_g6

0x70ca,	// (0x00069707) list_medium_line_x4_t4_g7_g7_ParamLimits

0x70ca,	// (0x00069707) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x00072220) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x00072220) list_medium_line_x4_t4_g7_g

0x70d6,	// (0x00069713) list_medium_line_x4_t4_g7_t1_ParamLimits

0x70d6,	// (0x00069713) list_medium_line_x4_t4_g7_t1

0x70eb,	// (0x00069728) list_medium_line_x4_t4_g7_t2_ParamLimits

0x70eb,	// (0x00069728) list_medium_line_x4_t4_g7_t2

0x7100,	// (0x0006973d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7100,	// (0x0006973d) list_medium_line_x4_t4_g7_t3

0x7115,	// (0x00069752) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7115,	// (0x00069752) list_medium_line_x4_t4_g7_t4

0x7127,	// (0x00069764) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7127,	// (0x00069764) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0007222f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0007222f) list_medium_line_x4_t4_g7_t

0x7139,	// (0x00069776) list_single_dyc_row_pane_ParamLimits

0x7139,	// (0x00069776) list_single_dyc_row_pane

0xe0f2,	// (0x0007072f) call5_gesture_pane_ParamLimits

0xe0f2,	// (0x0007072f) call5_gesture_pane

0xe122,	// (0x0007075f) call5_windows_pane_ParamLimits

0xe122,	// (0x0007075f) call5_windows_pane

0xe18f,	// (0x000707cc) call5_swipe_1_pane_cp_ParamLimits

0xe18f,	// (0x000707cc) call5_swipe_1_pane_cp

0xe19b,	// (0x000707d8) call5_swipe_2_pane_cp_ParamLimits

0xe19b,	// (0x000707d8) call5_swipe_2_pane_cp

0x0dca,	// (0x00063407) call5_image_pane_cp

0xe1a7,	// (0x000707e4) popup_call5_audio_first_window_cp_ParamLimits

0xe1a7,	// (0x000707e4) popup_call5_audio_first_window_cp

0x32f0,	// (0x0006592d) call5_swipe_1_pane_g1_cp_ParamLimits

0x32f0,	// (0x0006592d) call5_swipe_1_pane_g1_cp

0x3330,	// (0x0006596d) call5_swipe_1_pane_g2_cp

0x3309,	// (0x00065946) call5_swipe_1_pane_t1_cp_ParamLimits

0x3309,	// (0x00065946) call5_swipe_1_pane_t1_cp

0x32f0,	// (0x0006592d) call5_swipe_2_pane_g1_cp_ParamLimits

0x32f0,	// (0x0006592d) call5_swipe_2_pane_g1_cp

0x3338,	// (0x00065975) call5_swipe_2_pane_g2_cp

0x3340,	// (0x0006597d) call5_swipe_2_pane_t1_cp_ParamLimits

0x3340,	// (0x0006597d) call5_swipe_2_pane_t1_cp

0x225b,	// (0x00064898) main_sp_fs_email_pane

0x3355,	// (0x00065992) main_sp_fs_listscroll_pane_te

0x71e5,	// (0x00069822) popup_sp_fs_action_menu_pane_ParamLimits

0x71e5,	// (0x00069822) popup_sp_fs_action_menu_pane

0x5402,	// (0x00067a3f) bg_sp_fs_ctrlbar_pane_g1

0x5b69,	// (0x000681a6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x5b7b,	// (0x000681b8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5b72,	// (0x000681af) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x5402,	// (0x00067a3f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0007231d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x51ef,	// (0x0006782c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x51ef,	// (0x0006782c) bg_sp_fs_ctrlbar_ddmenu_pane

0x335e,	// (0x0006599b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x335e,	// (0x0006599b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x336a,	// (0x000659a7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x336a,	// (0x000659a7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00072326) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00072326) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3376,	// (0x000659b3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3376,	// (0x000659b3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe1b3,	// (0x000707f0) list_medium_line_t2_right_icon_g1

0x7219,	// (0x00069856) list_medium_line_t2_right_icon_t1

0x7228,	// (0x00069865) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0007232b) list_medium_line_t2_right_icon_t

0x5002,	// (0x0006763f) bg_sp_fs_ctrlbar_pane_ParamLimits

0x5002,	// (0x0006763f) bg_sp_fs_ctrlbar_pane

0xe210,	// (0x0007084d) main_sp_fs_ctrlbar_button_pane_cp01

0xe218,	// (0x00070855) main_sp_fs_ctrlbar_ddmenu_pane

0x33c8,	// (0x00065a05) main_sp_fs_ctrlbar_pane_g1

0x33d4,	// (0x00065a11) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x00072330) main_sp_fs_ctrlbar_pane_g

0x33e0,	// (0x00065a1d) main_sp_fs_ctrlbar_pane_t1

0xe222,	// (0x0007085f) main_sp_fs_ctrlbar_pane

0xe238,	// (0x00070875) main_sp_fs_listscroll_pane_te_cp01

0x7236,	// (0x00069873) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7236,	// (0x00069873) popup_sp_fs_action_menu_pane_cp01

0x225b,	// (0x00064898) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x225b,	// (0x00064898) bg_sp_fs_highlight_list_pane_cp01

0x725c,	// (0x00069899) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x725c,	// (0x00069899) sp_fs_action_menu_list_gene_pane_g1

0x341f,	// (0x00065a5c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x341f,	// (0x00065a5c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0007233a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0007233a) sp_fs_action_menu_list_gene_pane_g

0x726b,	// (0x000698a8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x726b,	// (0x000698a8) sp_fs_action_menu_list_gene_pane_t1

0x7283,	// (0x000698c0) sp_fs_action_menu_list_gene_pane_ParamLimits

0x7283,	// (0x000698c0) sp_fs_action_menu_list_gene_pane

0x3461,	// (0x00065a9e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3461,	// (0x00065a9e) popup_sp_fs_action_menu_bg_pane

0x72a2,	// (0x000698df) sp_fs_action_menu_list_pane_ParamLimits

0x72a2,	// (0x000698df) sp_fs_action_menu_list_pane

0x72c2,	// (0x000698ff) sp_fs_scroll_pane_cp01_ParamLimits

0x72c2,	// (0x000698ff) sp_fs_scroll_pane_cp01

0x72e8,	// (0x00069925) list_medium_line_plain_t2_t1

0x72f7,	// (0x00069934) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0007233f) list_medium_line_plain_t2_t

0x7305,	// (0x00069942) list_medium_line_plain_t3_t1

0x7315,	// (0x00069952) list_medium_line_plain_t3_t2

0x7323,	// (0x00069960) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x00072344) list_medium_line_plain_t3_t

0x69ee,	// (0x0006902b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x2_t2_g2_g1

0x6a06,	// (0x00069043) list_medium_line_x2_t2_g2_g2_ParamLimits

0x6a06,	// (0x00069043) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x00071883) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x00071883) list_medium_line_x2_t2_g2_g

0x6bbc,	// (0x000691f9) list_medium_line_x2_t2_g2_t1_ParamLimits

0x6bbc,	// (0x000691f9) list_medium_line_x2_t2_g2_t1

0x6a39,	// (0x00069076) list_medium_line_x2_t2_g2_t2_ParamLimits

0x6a39,	// (0x00069076) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0007234b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0007234b) list_medium_line_x2_t2_g2_t

0x69ee,	// (0x0006902b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x2_t4_g2_g1

0x7331,	// (0x0006996e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7331,	// (0x0006996e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x00072350) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x00072350) list_medium_line_x2_t4_g2_g

0x7342,	// (0x0006997f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7342,	// (0x0006997f) list_medium_line_x2_t4_g2_t1

0x735c,	// (0x00069999) list_medium_line_x2_t4_g2_t2_ParamLimits

0x735c,	// (0x00069999) list_medium_line_x2_t4_g2_t2

0x7372,	// (0x000699af) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7372,	// (0x000699af) list_medium_line_x2_t4_g2_t3

0x6a39,	// (0x00069076) list_medium_line_x2_t4_g2_t4_ParamLimits

0x6a39,	// (0x00069076) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x00072355) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x00072355) list_medium_line_x2_t4_g2_t

0xe249,	// (0x00070886) list_medium_line_t3_right_iconx2_g1

0xe1b3,	// (0x000707f0) list_medium_line_t3_right_iconx2_g2

0x7387,	// (0x000699c4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0007235e) list_medium_line_t3_right_iconx2_g

0x738f,	// (0x000699cc) list_medium_line_t3_right_iconx2_t1

0x739f,	// (0x000699dc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x00072365) list_medium_line_t3_right_iconx2_t

0x69ee,	// (0x0006902b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x3_t4_g4_g1

0x69fa,	// (0x00069037) list_medium_line_x3_t4_g4_g2_ParamLimits

0x69fa,	// (0x00069037) list_medium_line_x3_t4_g4_g2

0x6a9f,	// (0x000690dc) list_medium_line_x3_t4_g4_g3_ParamLimits

0x6a9f,	// (0x000690dc) list_medium_line_x3_t4_g4_g3

0x73ad,	// (0x000699ea) list_medium_line_x3_t4_g4_g4_ParamLimits

0x73ad,	// (0x000699ea) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0007236a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0007236a) list_medium_line_x3_t4_g4_g

0x73b9,	// (0x000699f6) list_medium_line_x3_t4_g4_t1_ParamLimits

0x73b9,	// (0x000699f6) list_medium_line_x3_t4_g4_t1

0x73d0,	// (0x00069a0d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x73d0,	// (0x00069a0d) list_medium_line_x3_t4_g4_t2

0x6bd1,	// (0x0006920e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6bd1,	// (0x0006920e) list_medium_line_x3_t4_g4_t3

0x73e5,	// (0x00069a22) list_medium_line_x3_t4_g4_t4_ParamLimits

0x73e5,	// (0x00069a22) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x00072373) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x00072373) list_medium_line_x3_t4_g4_t

0x7402,	// (0x00069a3f) list_single_dyc_row_text_pane_t1_ParamLimits

0x7402,	// (0x00069a3f) list_single_dyc_row_text_pane_t1

0x7439,	// (0x00069a76) list_single_dyc_row_text_pane_t2_ParamLimits

0x7439,	// (0x00069a76) list_single_dyc_row_text_pane_t2

0x74ac,	// (0x00069ae9) list_single_dyc_row_text_pane_t3_ParamLimits

0x74ac,	// (0x00069ae9) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0007237c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0007237c) list_single_dyc_row_text_pane_t

0x757b,	// (0x00069bb8) list_single_dyc_row_pane_g1_ParamLimits

0x757b,	// (0x00069bb8) list_single_dyc_row_pane_g1

0x7587,	// (0x00069bc4) list_single_dyc_row_pane_g2_ParamLimits

0x7587,	// (0x00069bc4) list_single_dyc_row_pane_g2

0x7593,	// (0x00069bd0) list_single_dyc_row_pane_g3_ParamLimits

0x7593,	// (0x00069bd0) list_single_dyc_row_pane_g3

0x759f,	// (0x00069bdc) list_single_dyc_row_pane_g4_ParamLimits

0x759f,	// (0x00069bdc) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x00072389) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x00072389) list_single_dyc_row_pane_g

0x75ab,	// (0x00069be8) list_single_dyc_row_text_pane_ParamLimits

0x75ab,	// (0x00069be8) list_single_dyc_row_text_pane

0x0386,	// (0x000629c3) bg_sp_fs_scroll_pane

0x3526,	// (0x00065b63) thumb_sp_fs_scroll_pane

0x6de7,	// (0x00069424) list_medium_line_g1_ParamLimits

0x6de7,	// (0x00069424) list_medium_line_g1

0x75ca,	// (0x00069c07) list_medium_line_t1_ParamLimits

0x75ca,	// (0x00069c07) list_medium_line_t1

0x69ee,	// (0x0006902b) list_medium_line_x2_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x2_g1

0x69fa,	// (0x00069037) list_medium_line_x2_g2_ParamLimits

0x69fa,	// (0x00069037) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x00072392) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x00072392) list_medium_line_x2_g

0x75df,	// (0x00069c1c) list_medium_line_x2_t1_ParamLimits

0x75df,	// (0x00069c1c) list_medium_line_x2_t1

0x69ee,	// (0x0006902b) list_medium_line_x3_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x3_g1

0x69fa,	// (0x00069037) list_medium_line_x3_g2_ParamLimits

0x69fa,	// (0x00069037) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x00072392) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x00072392) list_medium_line_x3_g

0x75df,	// (0x00069c1c) list_medium_line_x3_t1_ParamLimits

0x75df,	// (0x00069c1c) list_medium_line_x3_t1

0x3545,	// (0x00065b82) thumb_sp_fs_scroll_pane_g1

0x354e,	// (0x00065b8b) thumb_sp_fs_scroll_pane_g2

0x3557,	// (0x00065b94) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00072397) thumb_sp_fs_scroll_pane_g

0x3545,	// (0x00065b82) bg_sp_fs_scroll_pane_g1

0x354e,	// (0x00065b8b) bg_sp_fs_scroll_pane_g2

0x3557,	// (0x00065b94) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00072397) bg_sp_fs_scroll_pane_g

0x69ee,	// (0x0006902b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x69ee,	// (0x0006902b) list_medium_line_x2_t3_g4_g1

0x6a93,	// (0x000690d0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x6a93,	// (0x000690d0) list_medium_line_x2_t3_g4_g2

0x69fa,	// (0x00069037) list_medium_line_x2_t3_g4_g3_ParamLimits

0x69fa,	// (0x00069037) list_medium_line_x2_t3_g4_g3

0x6a06,	// (0x00069043) list_medium_line_x2_t3_g4_g4_ParamLimits

0x6a06,	// (0x00069043) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000718ff) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000718ff) list_medium_line_x2_t3_g4_g

0x75f5,	// (0x00069c32) list_medium_line_x2_t3_g4_t1_ParamLimits

0x75f5,	// (0x00069c32) list_medium_line_x2_t3_g4_t1

0x760b,	// (0x00069c48) list_medium_line_x2_t3_g4_t2_ParamLimits

0x760b,	// (0x00069c48) list_medium_line_x2_t3_g4_t2

0x6a39,	// (0x00069076) list_medium_line_x2_t3_g4_t3_ParamLimits

0x6a39,	// (0x00069076) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0007239e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0007239e) list_medium_line_x2_t3_g4_t

0x6de7,	// (0x00069424) list_medium_line_g2_g1_ParamLimits

0x6de7,	// (0x00069424) list_medium_line_g2_g1

0xcfe3,	// (0x0006f620) list_medium_line_g2_g2_ParamLimits

0xcfe3,	// (0x0006f620) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x00072050) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x00072050) list_medium_line_g2_g

0x7625,	// (0x00069c62) list_medium_line_g2_t1_ParamLimits

0x7625,	// (0x00069c62) list_medium_line_g2_t1

0x6de7,	// (0x00069424) list_medium_line_t3_g2_g1_ParamLimits

0x6de7,	// (0x00069424) list_medium_line_t3_g2_g1

0xcfe3,	// (0x0006f620) list_medium_line_t3_g2_g2_ParamLimits

0xcfe3,	// (0x0006f620) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x00072050) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x00072050) list_medium_line_t3_g2_g

0x763a,	// (0x00069c77) list_medium_line_t3_g2_t1_ParamLimits

0x763a,	// (0x00069c77) list_medium_line_t3_g2_t1

0x7654,	// (0x00069c91) list_medium_line_t3_g2_t2_ParamLimits

0x7654,	// (0x00069c91) list_medium_line_t3_g2_t2

0x766a,	// (0x00069ca7) list_medium_line_t3_g2_t3_ParamLimits

0x766a,	// (0x00069ca7) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x000723a5) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x000723a5) list_medium_line_t3_g2_t

0xe1b3,	// (0x000707f0) list_medium_line_right_icon_g1

0x7680,	// (0x00069cbd) list_medium_line_right_icon_t1

0x6de7,	// (0x00069424) list_medium_line_t2_g1_ParamLimits

0x6de7,	// (0x00069424) list_medium_line_t2_g1

0x768e,	// (0x00069ccb) list_medium_line_t2_t1_ParamLimits

0x768e,	// (0x00069ccb) list_medium_line_t2_t1

0x76a7,	// (0x00069ce4) list_medium_line_t2_t2_ParamLimits

0x76a7,	// (0x00069ce4) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x000723ac) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x000723ac) list_medium_line_t2_t

0x6de7,	// (0x00069424) list_medium_line_t3_g1_ParamLimits

0x6de7,	// (0x00069424) list_medium_line_t3_g1

0x76bc,	// (0x00069cf9) list_medium_line_t3_t1_ParamLimits

0x76bc,	// (0x00069cf9) list_medium_line_t3_t1

0x76d6,	// (0x00069d13) list_medium_line_t3_t2_ParamLimits

0x76d6,	// (0x00069d13) list_medium_line_t3_t2

0x76ec,	// (0x00069d29) list_medium_line_t3_t3_ParamLimits

0x76ec,	// (0x00069d29) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x000723b1) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x000723b1) list_medium_line_t3_t

0x6de7,	// (0x00069424) list_medium_line_g3_g1_ParamLimits

0x6de7,	// (0x00069424) list_medium_line_g3_g1

0xe251,	// (0x0007088e) list_medium_line_g3_g2_ParamLimits

0xe251,	// (0x0007088e) list_medium_line_g3_g2

0xcfe3,	// (0x0006f620) list_medium_line_g3_g3_ParamLimits

0xcfe3,	// (0x0006f620) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x000723b8) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x000723b8) list_medium_line_g3_g

0x7701,	// (0x00069d3e) list_medium_line_g3_t1_ParamLimits

0x7701,	// (0x00069d3e) list_medium_line_g3_t1

0x6de7,	// (0x00069424) list_medium_line_t2_g3_g1_ParamLimits

0x6de7,	// (0x00069424) list_medium_line_t2_g3_g1

0xe251,	// (0x0007088e) list_medium_line_t2_g3_g2_ParamLimits

0xe251,	// (0x0007088e) list_medium_line_t2_g3_g2

0xcfe3,	// (0x0006f620) list_medium_line_t2_g3_g3_ParamLimits

0xcfe3,	// (0x0006f620) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x000723b8) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x000723b8) list_medium_line_t2_g3_g

0x7716,	// (0x00069d53) list_medium_line_t2_g3_t1_ParamLimits

0x7716,	// (0x00069d53) list_medium_line_t2_g3_t1

0x7730,	// (0x00069d6d) list_medium_line_t2_g3_t2_ParamLimits

0x7730,	// (0x00069d6d) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x000723bf) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x000723bf) list_medium_line_t2_g3_t

0x6de7,	// (0x00069424) list_medium_line_t3_g3_g1_ParamLimits

0x6de7,	// (0x00069424) list_medium_line_t3_g3_g1

0xe251,	// (0x0007088e) list_medium_line_t3_g3_g2_ParamLimits

0xe251,	// (0x0007088e) list_medium_line_t3_g3_g2

0xcfe3,	// (0x0006f620) list_medium_line_t3_g3_g3_ParamLimits

0xcfe3,	// (0x0006f620) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x000723b8) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x000723b8) list_medium_line_t3_g3_g

0x7746,	// (0x00069d83) list_medium_line_t3_g3_t1_ParamLimits

0x7746,	// (0x00069d83) list_medium_line_t3_g3_t1

0x775f,	// (0x00069d9c) list_medium_line_t3_g3_t2_ParamLimits

0x775f,	// (0x00069d9c) list_medium_line_t3_g3_t2

0x7775,	// (0x00069db2) list_medium_line_t3_g3_t3_ParamLimits

0x7775,	// (0x00069db2) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x000723c4) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x000723c4) list_medium_line_t3_g3_t

0xe249,	// (0x00070886) list_medium_line_right_iconx2_g1

0xe1b3,	// (0x000707f0) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000723cb) list_medium_line_right_iconx2_g

0xe25d,	// (0x0007089a) list_medium_line_right_iconx2_t1

0xe249,	// (0x00070886) list_medium_line_t2_right_iconx2_g1

0xe1b3,	// (0x000707f0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000723cb) list_medium_line_t2_right_iconx2_g

0x778b,	// (0x00069dc8) list_medium_line_t2_right_iconx2_t1

0x779b,	// (0x00069dd8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x000723d0) list_medium_line_t2_right_iconx2_t

0x77a9,	// (0x00069de6) list_medium_line_x4_t4_t1

0x77b7,	// (0x00069df4) list_medium_line_x4_t4_t2

0x77c5,	// (0x00069e02) list_medium_line_x4_t4_t3

0x77d3,	// (0x00069e10) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x000723d5) list_medium_line_x4_t4_t

0xe28f,	// (0x000708cc) tport_appsw_pane_ParamLimits

0xe28f,	// (0x000708cc) tport_appsw_pane

0xe29b,	// (0x000708d8) tport_contact_pane_ParamLimits

0xe29b,	// (0x000708d8) tport_contact_pane

0xe2a9,	// (0x000708e6) tport_listscroll_pane_ParamLimits

0xe2a9,	// (0x000708e6) tport_listscroll_pane

0xe2b7,	// (0x000708f4) cell_tport_appsw_pane_ParamLimits

0xe2b7,	// (0x000708f4) cell_tport_appsw_pane

0x5696,	// (0x00067cd3) tport_appsw_pane_g1_ParamLimits

0x5696,	// (0x00067cd3) tport_appsw_pane_g1

0x3560,	// (0x00065b9d) tport_contact_pane_g1

0x3569,	// (0x00065ba6) tport_contact_pane_t1

0x3577,	// (0x00065bb4) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x000723de) tport_contact_pane_t

0x3585,	// (0x00065bc2) list_tport_pane

0x358e,	// (0x00065bcb) scroll_pane_cp_030

0x359f,	// (0x00065bdc) cell_tport_appsw_pane_g1

0x35af,	// (0x00065bec) cell_tport_appsw_pane_t1

0x35bd,	// (0x00065bfa) grid_highlight_pane_cp019

0xe2de,	// (0x0007091b) list_tport_double_graphic_pane_ParamLimits

0xe2de,	// (0x0007091b) list_tport_double_graphic_pane

0x225b,	// (0x00064898) list_highlight_pane_cp023_ParamLimits

0x225b,	// (0x00064898) list_highlight_pane_cp023

0xe2eb,	// (0x00070928) list_tport_double_graphic_pane_g1_ParamLimits

0xe2eb,	// (0x00070928) list_tport_double_graphic_pane_g1

0xe2f8,	// (0x00070935) list_tport_double_graphic_pane_t1_ParamLimits

0xe2f8,	// (0x00070935) list_tport_double_graphic_pane_t1

0xe30d,	// (0x0007094a) list_tport_double_graphic_pane_t2_ParamLimits

0xe30d,	// (0x0007094a) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x000723ea) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x000723ea) list_tport_double_graphic_pane_t

0x0386,	// (0x000629c3) main_cale_note_pane

0xc895,	// (0x0006eed2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc895,	// (0x0006eed2) cell_vitu2_function_top_wide_pane_cp01

0xde88,	// (0x000704c5) wait_bar_pane_cp05_ParamLimits

0x225b,	// (0x00064898) listscroll_cmail_pane

0x35c5,	// (0x00065c02) list_cmail_pane

0xe31f,	// (0x0007095c) list_cmail_body_pane

0xe334,	// (0x00070971) list_single_cmail_header_caption_pane

0xe34a,	// (0x00070987) list_single_cmail_header_detail_pane_ParamLimits

0xe34a,	// (0x00070987) list_single_cmail_header_detail_pane

0x35d5,	// (0x00065c12) list_single_cmail_header_caption_pane_t1

0x77e1,	// (0x00069e1e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x77e1,	// (0x00069e1e) list_single_cmail_header_detail_pane_g1

0xe371,	// (0x000709ae) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe371,	// (0x000709ae) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x000723ef) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x000723ef) list_single_cmail_header_detail_pane_g

0x77f7,	// (0x00069e34) list_single_cmail_header_detail_pane_t1_ParamLimits

0x77f7,	// (0x00069e34) list_single_cmail_header_detail_pane_t1

0x7857,	// (0x00069e94) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7857,	// (0x00069e94) list_single_cmail_header_editor_pane_bg

0x367c,	// (0x00065cb9) list_cmail_body_pane_g1

0x3685,	// (0x00065cc2) list_cmail_body_pane_t1

0xefe2,	// (0x0007161f) list_single_cmail_header_editor_pane_bg_g1

0x103a,	// (0x00063677) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeff2,	// (0x0007162f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xefea,	// (0x00071627) list_single_cmail_header_editor_pane_bg_g1_copy3

0x24fd,	// (0x00064b3a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xf012,	// (0x0007164f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xf002,	// (0x0007163f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xf00a,	// (0x00071647) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x101a,	// (0x00063657) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe37d,	// (0x000709ba) calenote_gesture_pane_ParamLimits

0xe37d,	// (0x000709ba) calenote_gesture_pane

0xe395,	// (0x000709d2) calenote_window_pane_ParamLimits

0xe395,	// (0x000709d2) calenote_window_pane

0x3693,	// (0x00065cd0) popup_note_window_cp01

0xe3ad,	// (0x000709ea) calenote_swipe_1_pane_ParamLimits

0xe3ad,	// (0x000709ea) calenote_swipe_1_pane

0xe19b,	// (0x000707d8) calenote_swipe_2_pane_ParamLimits

0xe19b,	// (0x000707d8) calenote_swipe_2_pane

0x32f0,	// (0x0006592d) calenote_swipe_1_pane_g1_ParamLimits

0x32f0,	// (0x0006592d) calenote_swipe_1_pane_g1

0x32fd,	// (0x0006593a) calenote_swipe_1_pane_g2_ParamLimits

0x32fd,	// (0x0006593a) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00072313) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00072313) calenote_swipe_1_pane_g

0x36a5,	// (0x00065ce2) calenote_swipe_1_pane_t1_ParamLimits

0x36a5,	// (0x00065ce2) calenote_swipe_1_pane_t1

0x32f0,	// (0x0006592d) calenote_swipe_2_pane_g1_ParamLimits

0x32f0,	// (0x0006592d) calenote_swipe_2_pane_g1

0x36c4,	// (0x00065d01) calenote_swipe_2_pane_g2_ParamLimits

0x36c4,	// (0x00065d01) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x000723fb) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x000723fb) calenote_swipe_2_pane_g

0x36d0,	// (0x00065d0d) calenote_swipe_2_pane_t1_ParamLimits

0x36d0,	// (0x00065d0d) calenote_swipe_2_pane_t1

0x0386,	// (0x000629c3) main_mup_navstr_pane

0xb716,	// (0x0006dd53) main_mup3_pane_t7_ParamLimits

0xb716,	// (0x0006dd53) main_mup3_pane_t7

0xc082,	// (0x0006e6bf) main_mp4_pane_g6_ParamLimits

0xc082,	// (0x0006e6bf) main_mp4_pane_g6

0xc3d2,	// (0x0006ea0f) main_image3_pane_t4_ParamLimits

0xc3d2,	// (0x0006ea0f) main_image3_pane_t4

0xe3c0,	// (0x000709fd) popup_navstr_preview_pane_ParamLimits

0xe3c0,	// (0x000709fd) popup_navstr_preview_pane

0xe3cc,	// (0x00070a09) scroll_navstr_pane_ParamLimits

0xe3cc,	// (0x00070a09) scroll_navstr_pane

0x0386,	// (0x000629c3) bg_popup_preview_window_pane_cp04

0x36f7,	// (0x00065d34) popup_navstr_preview_pane_t1

0xe3d8,	// (0x00070a15) scroll_navstr_pane_g1_ParamLimits

0xe3d8,	// (0x00070a15) scroll_navstr_pane_g1

0xe3e5,	// (0x00070a22) scroll_navstr_pane_t1_ParamLimits

0xe3e5,	// (0x00070a22) scroll_navstr_pane_t1

0x369c,	// (0x00065cd9) bg_button_pane_cp014

0x369c,	// (0x00065cd9) bg_button_pane_cp030

0x718b,	// (0x000697c8) list_double_fisheye_pane_g4_ParamLimits

0x718b,	// (0x000697c8) list_double_fisheye_pane_g4

0x7197,	// (0x000697d4) list_double_fisheye_pane_g5_ParamLimits

0x7197,	// (0x000697d4) list_double_fisheye_pane_g5

0x5b55,	// (0x00068192) sp_fs_scroll_pane_cp03

0x33c8,	// (0x00065a05) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x33d4,	// (0x00065a11) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x00072330) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x33e0,	// (0x00065a1d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x35cd,	// (0x00065c0a) sp_fs_scroll_pane_cp02

0x0d2f,	// (0x0006336c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0d2f,	// (0x0006336c) popup_sp_fs_calendar_preview_list_single_pane

0x0386,	// (0x000629c3) main_cam6_pano_pane

0x225b,	// (0x00064898) main_mup3_pane_ParamLimits

0x0386,	// (0x000629c3) main_phacti_pane

0xdd7b,	// (0x000703b8) bg_button_pane_cp11

0xdd93,	// (0x000703d0) main_mobtv_info_pane_g2_ParamLimits

0xdd93,	// (0x000703d0) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x00072290) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x00072290) main_mobtv_info_pane_g

0xdf1f,	// (0x0007055c) sc_clock_pane_t5_ParamLimits

0xdf1f,	// (0x0007055c) sc_clock_pane_t5

0xdfa8,	// (0x000705e5) main_radioblah_pane_g1_ParamLimits

0x3225,	// (0x00065862) main_radioblah_pane_t3_ParamLimits

0x3225,	// (0x00065862) main_radioblah_pane_t3

0x323d,	// (0x0006587a) main_radioblah_pane_t4_ParamLimits

0x323d,	// (0x0006587a) main_radioblah_pane_t4

0xdfc6,	// (0x00070603) main_radioblah_text_pane_ParamLimits

0xdfc6,	// (0x00070603) main_radioblah_text_pane

0xdfd3,	// (0x00070610) main_radioblah_info_pane_g1_ParamLimits

0xe060,	// (0x0007069d) main_radioblah_info_pane_t4_ParamLimits

0xe060,	// (0x0007069d) main_radioblah_info_pane_t4

0x225b,	// (0x00064898) main_sp_fs_calendar_pane

0xe3f7,	// (0x00070a34) main_phacti_pane_g1

0xe3ff,	// (0x00070a3c) phacti_note_pane_ParamLimits

0xe3ff,	// (0x00070a3c) phacti_note_pane

0x370e,	// (0x00065d4b) phacti_term_pane_ParamLimits

0x370e,	// (0x00065d4b) phacti_term_pane

0x3723,	// (0x00065d60) phacti_note_pane_t1_ParamLimits

0x3723,	// (0x00065d60) phacti_note_pane_t1

0x786e,	// (0x00069eab) phacti_term_pane_g1

0x7876,	// (0x00069eb3) phacti_term_pane_t1_ParamLimits

0x7876,	// (0x00069eb3) phacti_term_pane_t1

0x376c,	// (0x00065da9) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3774,	// (0x00065db1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x00072405) popup_sp_fs_calendar_preview_list_single_pane_g

0x377c,	// (0x00065db9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x377c,	// (0x00065db9) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3792,	// (0x00065dcf) aid_popup_sp_fs_bg_corner_pane

0x5402,	// (0x00067a3f) popup_sp_fs_calendar_preview_bg_pane_g1

0x0386,	// (0x000629c3) popup_sp_fs_calendar_preview_bg_pane

0x379a,	// (0x00065dd7) popup_sp_fs_calendar_preview_list_pane

0x5002,	// (0x0006763f) bg_main_sp_fs_cale_pane_ParamLimits

0x5002,	// (0x0006763f) bg_main_sp_fs_cale_pane

0x78a0,	// (0x00069edd) listscroll_cale_mrui_pane_ParamLimits

0x78a0,	// (0x00069edd) listscroll_cale_mrui_pane

0x78b5,	// (0x00069ef2) listscroll_sp_fs_schedule_track_pane

0x78be,	// (0x00069efb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x78be,	// (0x00069efb) main_sp_fs_ctrlbar_pane_cp01

0x37dc,	// (0x00065e19) main_sp_fs_ribbon_pane

0x78d1,	// (0x00069f0e) popup_sp_fs_cale_preview_window

0x40a0,	// (0x000666dd) list_single_sp_fs_schedule_track_pane_ParamLimits

0x40a0,	// (0x000666dd) list_single_sp_fs_schedule_track_pane

0x40b3,	// (0x000666f0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x40b3,	// (0x000666f0) bg_sp_fs_highlight_list_pane_cp03

0xe45e,	// (0x00070a9b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe45e,	// (0x00070a9b) list_single_sp_fs_schedule_track_pane_g1

0xe46a,	// (0x00070aa7) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe46a,	// (0x00070aa7) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0007240a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0007240a) list_single_sp_fs_schedule_track_pane_g

0xe476,	// (0x00070ab3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe476,	// (0x00070ab3) list_single_sp_fs_schedule_track_pane_t1

0xe48e,	// (0x00070acb) sp_fs_schedule_track_pane_ParamLimits

0xe48e,	// (0x00070acb) sp_fs_schedule_track_pane

0x37f3,	// (0x00065e30) sp_fs_schedule_track_pane_g1

0x37fb,	// (0x00065e38) sp_fs_schedule_track_pane_g2

0x3803,	// (0x00065e40) sp_fs_schedule_track_pane_g3

0x380b,	// (0x00065e48) sp_fs_schedule_track_pane_g4

0x3813,	// (0x00065e50) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0007240f) sp_fs_schedule_track_pane_g

0xefe2,	// (0x0007161f) bg_sp_fs_schedule_viewer_highlight_g1

0x103a,	// (0x00063677) bg_sp_fs_schedule_viewer_highlight_g2

0xefea,	// (0x00071627) bg_sp_fs_schedule_viewer_highlight_g3

0xeff2,	// (0x0007162f) bg_sp_fs_schedule_viewer_highlight_g4

0x24fd,	// (0x00064b3a) bg_sp_fs_schedule_viewer_highlight_g5

0xf002,	// (0x0007163f) bg_sp_fs_schedule_viewer_highlight_g6

0xf00a,	// (0x00071647) bg_sp_fs_schedule_viewer_highlight_g7

0xf012,	// (0x0007164f) bg_sp_fs_schedule_viewer_highlight_g8

0x101a,	// (0x00063657) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0007241a) bg_sp_fs_schedule_viewer_highlight_g

0x0386,	// (0x000629c3) bg_main_sp_fs_ribbon_pane

0xe49e,	// (0x00070adb) main_sp_fs_ribbon_pane_g1

0x381b,	// (0x00065e58) main_sp_fs_ribbon_pane_t1

0xe4a7,	// (0x00070ae4) main_sp_fs_ribbon_pane_t2

0x382a,	// (0x00065e67) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0007242d) main_sp_fs_ribbon_pane_t

0x3839,	// (0x00065e76) main_sp_fs_ribbon_scheduler_pane

0x3841,	// (0x00065e7e) bg_main_sp_fs_ribbon_pane_g1

0x384a,	// (0x00065e87) bg_main_sp_fs_ribbon_pane_g2

0x3853,	// (0x00065e90) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x00072434) bg_main_sp_fs_ribbon_pane_g

0x385b,	// (0x00065e98) main_sp_fs_ribbon_scheduler_pane_g1

0x3864,	// (0x00065ea1) main_sp_fs_ribbon_scheduler_pane_g2

0x386d,	// (0x00065eaa) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0007243b) main_sp_fs_ribbon_scheduler_pane_g

0x3876,	// (0x00065eb3) list_cale_mrui_pane

0xe4b6,	// (0x00070af3) sp_fs_scroll_pane_cp07_ParamLimits

0xe4b6,	// (0x00070af3) sp_fs_scroll_pane_cp07

0xe4ce,	// (0x00070b0b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe4ce,	// (0x00070b0b) bg_sp_fs_schedule_viewer_highlight

0x3883,	// (0x00065ec0) list_single_sp_fs_schedule_track_pane_cp01

0x388b,	// (0x00065ec8) list_sp_fs_schedule_track_pane

0x3893,	// (0x00065ed0) sp_fs_scroll_pane_cp06_ParamLimits

0x3893,	// (0x00065ed0) sp_fs_scroll_pane_cp06

0x5402,	// (0x00067a3f) bgmain_sp_fs_calendar_pane_g1

0x78e3,	// (0x00069f20) list_single_cale_mrui_pane_ParamLimits

0x78e3,	// (0x00069f20) list_single_cale_mrui_pane

0x7903,	// (0x00069f40) list_single_cale_mrui_row_pane_ParamLimits

0x7903,	// (0x00069f40) list_single_cale_mrui_row_pane

0x7910,	// (0x00069f4d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7910,	// (0x00069f4d) list_single_cale_mrui_row_pane_g1

0x7948,	// (0x00069f85) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7948,	// (0x00069f85) list_single_cale_mrui_row_pane_t1

0x795a,	// (0x00069f97) list_single_cale_mrui_row_pane_t2_ParamLimits

0x795a,	// (0x00069f97) list_single_cale_mrui_row_pane_t2

0x79c0,	// (0x00069ffd) list_single_cale_mrui_row_pane_t3_ParamLimits

0x79c0,	// (0x00069ffd) list_single_cale_mrui_row_pane_t3

0x79ef,	// (0x0006a02c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x79ef,	// (0x0006a02c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x00072449) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x00072449) list_single_cale_mrui_row_pane_t

0x7a1e,	// (0x0006a05b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7a1e,	// (0x0006a05b) list_single_cmail_header_editor_pane_bg_cp01

0x7a3e,	// (0x0006a07b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7a3e,	// (0x0006a07b) list_single_cmail_header_editor_pane_bg_cp02

0xe4db,	// (0x00070b18) main_radioblah_text_pane_t1_ParamLimits

0xe4db,	// (0x00070b18) main_radioblah_text_pane_t1

0x3967,	// (0x00065fa4) cam6_indi_pane_cp01

0x396f,	// (0x00065fac) cam6_mode_pane_cp01

0x3977,	// (0x00065fb4) cam6_pano_pane

0x3980,	// (0x00065fbd) cam6_zoom_pane_cp01

0x3988,	// (0x00065fc5) cam6_pano_image_pane

0x3991,	// (0x00065fce) cam6_pano_pane_g1

0x2f8c,	// (0x000655c9) cam6_pano_pane_g2

0x399a,	// (0x00065fd7) cam6_pano_pane_g3

0x39a3,	// (0x00065fe0) cam6_pano_pane_g4

0x597a,	// (0x00067fb7) cam6_pano_pane_g5

0x39ac,	// (0x00065fe9) cam6_pano_pane_g6

0x39b4,	// (0x00065ff1) cam6_pano_pane_g7

0x39bc,	// (0x00065ff9) cam6_pano_pane_g8

0x39c5,	// (0x00066002) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x00072452) cam6_pano_pane_g

0x0386,	// (0x000629c3) main_browser_tag_pane

0x36ef,	// (0x00065d2c) grid_navstr_albumart_pane

0x39ce,	// (0x0006600b) cell_navstr_albumart_pane_ParamLimits

0x39ce,	// (0x0006600b) cell_navstr_albumart_pane

0x19f7,	// (0x00064034) cell_navstr_albumart_pane_g1

0x4dd3,	// (0x00067410) cell_navstr_albumart_pane_g2

0x4de3,	// (0x00067420) cell_navstr_albumart_pane_g3

0x4ddb,	// (0x00067418) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x00072465) cell_navstr_albumart_pane_g

0xe4f5,	// (0x00070b32) bt_list_pane_ParamLimits

0xe4f5,	// (0x00070b32) bt_list_pane

0xe508,	// (0x00070b45) bt_list_pane_t1

0xe517,	// (0x00070b54) bt_list_pane_t2

0x0001,

0xfe31,	// (0x0007246e) bt_list_pane_t

0x0386,	// (0x000629c3) main_cale_prevew_pane

0xe526,	// (0x00070b63) popup_cale_preview_window_ParamLimits

0xe526,	// (0x00070b63) popup_cale_preview_window

0x225b,	// (0x00064898) bg_popup_preview_window_pane_cp05_ParamLimits

0x225b,	// (0x00064898) bg_popup_preview_window_pane_cp05

0x39e6,	// (0x00066023) list_cale_preview_pane_ParamLimits

0x39e6,	// (0x00066023) list_cale_preview_pane

0x39f2,	// (0x0006602f) list_double_cale_preview_pane_ParamLimits

0x39f2,	// (0x0006602f) list_double_cale_preview_pane

0x3a04,	// (0x00066041) list_single_cale_preview_pane_ParamLimits

0x3a04,	// (0x00066041) list_single_cale_preview_pane

0x3a18,	// (0x00066055) list_single_cale_preview_pane_g1

0x3a20,	// (0x0006605d) list_single_cale_preview_pane_t1_ParamLimits

0x3a20,	// (0x0006605d) list_single_cale_preview_pane_t1

0x3a35,	// (0x00066072) list_double_cale_preview_pane_g1

0x3a3d,	// (0x0006607a) list_double_cale_preview_pane_t1_ParamLimits

0x3a3d,	// (0x0006607a) list_double_cale_preview_pane_t1

0x3a52,	// (0x0006608f) list_double_cale_preview_pane_t2_ParamLimits

0x3a52,	// (0x0006608f) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x00072473) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x00072473) list_double_cale_preview_pane_t

0x0386,	// (0x000629c3) main_ezdial_pane

0x225b,	// (0x00064898) main_sp_fs_email_pane_ParamLimits

0xe1bb,	// (0x000707f8) cmail_ddmenu_btn01_pane_ParamLimits

0xe1bb,	// (0x000707f8) cmail_ddmenu_btn01_pane

0xe1d8,	// (0x00070815) cmail_ddmenu_btn02_pane_ParamLimits

0xe1d8,	// (0x00070815) cmail_ddmenu_btn02_pane

0xe1f6,	// (0x00070833) cmail_ddmenu_btn03_pane_ParamLimits

0xe1f6,	// (0x00070833) cmail_ddmenu_btn03_pane

0xe222,	// (0x0007085f) main_sp_fs_ctrlbar_pane_ParamLimits

0xe238,	// (0x00070875) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe31f,	// (0x0007095c) list_cmail_body_pane_ParamLimits

0x35e3,	// (0x00065c20) bg_button_pane_cp12

0x35f8,	// (0x00065c35) list_single_cmail_header_detail_pane_g3_ParamLimits

0x35f8,	// (0x00065c35) list_single_cmail_header_detail_pane_g3

0x7833,	// (0x00069e70) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7833,	// (0x00069e70) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x000723f6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x000723f6) list_single_cmail_header_detail_pane_t

0x788b,	// (0x00069ec8) phacti_term_pane_t2_ParamLimits

0x788b,	// (0x00069ec8) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x00072400) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x00072400) phacti_term_pane_t

0x3a6a,	// (0x000660a7) aid_size_list_single_double

0xe53b,	// (0x00070b78) popup_ezdial_listscroll_window

0xe554,	// (0x00070b91) popup_number_entry_window_cp01

0x0dca,	// (0x00063407) bg_popup_call_pane_cp09

0x3a76,	// (0x000660b3) ezdial_list_pane

0x3a7e,	// (0x000660bb) scroll_pane_cp23

0x51ef,	// (0x0006782c) bg_button_pane_cp028_ParamLimits

0x51ef,	// (0x0006782c) bg_button_pane_cp028

0xe560,	// (0x00070b9d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe560,	// (0x00070b9d) cmail_ddmenu_btn01_pane_g1

0xe570,	// (0x00070bad) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe570,	// (0x00070bad) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x00072478) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x00072478) cmail_ddmenu_btn01_pane_g

0x3a86,	// (0x000660c3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3a86,	// (0x000660c3) cmail_ddmenu_btn01_pane_t1

0x5002,	// (0x0006763f) bg_button_pane_cp029_ParamLimits

0x5002,	// (0x0006763f) bg_button_pane_cp029

0xe57c,	// (0x00070bb9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe57c,	// (0x00070bb9) cmail_ddmenu_btn02_pane_g1

0xe595,	// (0x00070bd2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe595,	// (0x00070bd2) cmail_ddmenu_btn02_pane_t1

0x40b3,	// (0x000666f0) bg_button_pane_cp031_ParamLimits

0x40b3,	// (0x000666f0) bg_button_pane_cp031

0xe57c,	// (0x00070bb9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe57c,	// (0x00070bb9) cmail_ddmenu_btn03_pane_g1

0xe595,	// (0x00070bd2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe595,	// (0x00070bd2) cmail_ddmenu_btn03_pane_t1

0xc28f,	// (0x0006e8cc) cell_dialer2_keypad_pane_t1_ParamLimits

0xc2a9,	// (0x0006e8e6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc2a9,	// (0x0006e8e6) cell_dialer2_keypad_pane_t1_copy1

0xdbbf,	// (0x000701fc) ncimui_group_button_pane

0x225b,	// (0x00064898) main_sp_fs_calendar_pane_ParamLimits

0xe334,	// (0x00070971) list_single_cmail_header_caption_pane_ParamLimits

0xe431,	// (0x00070a6e) aid_recal_txt_sm_pane

0x0386,	// (0x000629c3) mian_recal_day_pane

0x78d1,	// (0x00069f0e) popup_sp_fs_cale_preview_window_ParamLimits

0x3a9c,	// (0x000660d9) list_recal_day_pane

0x7a75,	// (0x0006a0b2) list_single_recal_day_pane_ParamLimits

0x7a75,	// (0x0006a0b2) list_single_recal_day_pane

0x3af0,	// (0x0006612d) list_single_recal_day_pane_g1_ParamLimits

0x3af0,	// (0x0006612d) list_single_recal_day_pane_g1

0x7a87,	// (0x0006a0c4) list_single_recal_day_pane_g2_ParamLimits

0x7a87,	// (0x0006a0c4) list_single_recal_day_pane_g2

0x7a93,	// (0x0006a0d0) list_single_recal_day_pane_g3_ParamLimits

0x7a93,	// (0x0006a0d0) list_single_recal_day_pane_g3

0x7a9f,	// (0x0006a0dc) list_single_recal_day_pane_g4_ParamLimits

0x7a9f,	// (0x0006a0dc) list_single_recal_day_pane_g4

0x7aab,	// (0x0006a0e8) list_single_recal_day_pane_g5_ParamLimits

0x7aab,	// (0x0006a0e8) list_single_recal_day_pane_g5

0x7abf,	// (0x0006a0fc) list_single_recal_day_pane_g6_ParamLimits

0x7abf,	// (0x0006a0fc) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x00072487) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x00072487) list_single_recal_day_pane_g

0x7ad3,	// (0x0006a110) list_single_recal_day_pane_t1

0x7ae5,	// (0x0006a122) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x00072492) list_single_recal_day_pane_t

0xe5b9,	// (0x00070bf6) ncimui_query_button_pane_ParamLimits

0xe5b9,	// (0x00070bf6) ncimui_query_button_pane

0xe5c9,	// (0x00070c06) ncimui_query_button_pane_t1_ParamLimits

0xe5c9,	// (0x00070c06) ncimui_query_button_pane_t1

0x3b58,	// (0x00066195) ncimui_query_button_pane_t2_ParamLimits

0x3b58,	// (0x00066195) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x00072497) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x00072497) ncimui_query_button_pane_t

0xe5dc,	// (0x00070c19) query_button_pane_ParamLimits

0xe5dc,	// (0x00070c19) query_button_pane

0x0386,	// (0x000629c3) bg_button_pane_cp0028

0x3b6b,	// (0x000661a8) query_button_pane_t1

0xa81e,	// (0x0006ce5b) main_tport_pane_ParamLimits

0xe26b,	// (0x000708a8) bg_popup_window_pane_cp01_ParamLimits

0xe26b,	// (0x000708a8) bg_popup_window_pane_cp01

0xe277,	// (0x000708b4) heading_pane_cp08_ParamLimits

0xe277,	// (0x000708b4) heading_pane_cp08

0xe283,	// (0x000708c0) heading_pane_cp07_ParamLimits

0xe283,	// (0x000708c0) heading_pane_cp07

0x359f,	// (0x00065bdc) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x000723e3) cell_tport_appsw_pane_g

0x6bfb,	// (0x00069238) input_candi_list_open_g1

0x1233,	// (0x00063870) list_cale_time_pane_g6_ParamLimits

0x1233,	// (0x00063870) list_cale_time_pane_g6

0xb204,	// (0x0006d841) aid_size_touch_calib_1_ParamLimits

0xb204,	// (0x0006d841) aid_size_touch_calib_1

0xb210,	// (0x0006d84d) aid_size_touch_calib_2_ParamLimits

0xb210,	// (0x0006d84d) aid_size_touch_calib_2

0xb21c,	// (0x0006d859) aid_size_touch_calib_3_ParamLimits

0xb21c,	// (0x0006d859) aid_size_touch_calib_3

0xb22a,	// (0x0006d867) aid_size_touch_calib_4_ParamLimits

0xb22a,	// (0x0006d867) aid_size_touch_calib_4

0xb238,	// (0x0006d875) main_touch_calib_button_group_pane_ParamLimits

0xb238,	// (0x0006d875) main_touch_calib_button_group_pane

0xb246,	// (0x0006d883) main_touch_calib_pane_g1_ParamLimits

0xb252,	// (0x0006d88f) main_touch_calib_pane_g2_ParamLimits

0xb25e,	// (0x0006d89b) main_touch_calib_pane_g3_ParamLimits

0xb26a,	// (0x0006d8a7) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x00071da1) main_touch_calib_pane_g_ParamLimits

0xb276,	// (0x0006d8b3) main_touch_calib_pane_t1_ParamLimits

0xb28b,	// (0x0006d8c8) main_touch_calib_pane_t2_ParamLimits

0xb2a0,	// (0x0006d8dd) main_touch_calib_pane_t3_ParamLimits

0xb2b2,	// (0x0006d8ef) main_touch_calib_pane_t4_ParamLimits

0xb2c4,	// (0x0006d901) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x00071daa) main_touch_calib_pane_t_ParamLimits

0x5731,	// (0x00067d6e) list_single_fp_cale_pane_g3_ParamLimits

0x5731,	// (0x00067d6e) list_single_fp_cale_pane_g3

0x225b,	// (0x00064898) bg_button_pane_cp012_ParamLimits

0x225b,	// (0x00064898) bg_vkb2_func_pane_cp03_ParamLimits

0xcf63,	// (0x0006f5a0) cell_vitu2_function_top_pane_g1_ParamLimits

0x225b,	// (0x00064898) bg_vkb2_func_pane_cp04_ParamLimits

0xdb4b,	// (0x00070188) main_ncimui_button_group_pane_ParamLimits

0xdb4b,	// (0x00070188) main_ncimui_button_group_pane

0xdbad,	// (0x000701ea) main_ncimui_pane_t3_ParamLimits

0xdbad,	// (0x000701ea) main_ncimui_pane_t3

0x3705,	// (0x00065d42) phacti_button_group_pane

0x3a6a,	// (0x000660a7) aid_size_list_single_double_ParamLimits

0xe53b,	// (0x00070b78) popup_ezdial_listscroll_window_ParamLimits

0xe554,	// (0x00070b91) popup_number_entry_window_cp01_ParamLimits

0xe5e9,	// (0x00070c26) phacti_button_pane_ParamLimits

0xe5e9,	// (0x00070c26) phacti_button_pane

0x0386,	// (0x000629c3) bg_button_pane_cp14

0x3b79,	// (0x000661b6) phacti_button_pane_t1

0xe5f8,	// (0x00070c35) main_touch_calib_button_pane_ParamLimits

0xe5f8,	// (0x00070c35) main_touch_calib_button_pane

0x0ba3,	// (0x000631e0) bg_button_pane_cp18_ParamLimits

0x0ba3,	// (0x000631e0) bg_button_pane_cp18

0x3b87,	// (0x000661c4) main_touch_calib_button_pane_t1_ParamLimits

0x3b87,	// (0x000661c4) main_touch_calib_button_pane_t1

0x3b9d,	// (0x000661da) main_touch_calib_button_pane_t2_ParamLimits

0x3b9d,	// (0x000661da) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0007249c) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0007249c) main_touch_calib_button_pane_t

0x0386,	// (0x000629c3) cell_ncimui_button_pane

0x0386,	// (0x000629c3) bg_button_pane_cp032

0x3bbb,	// (0x000661f8) cell_ncimui_button_pane_t1

0xc2fb,	// (0x0006e938) image3_infobar_pane_ParamLimits

0xc2fb,	// (0x0006e938) image3_infobar_pane

0xdf3f,	// (0x0007057c) fs_bigclock_status_pane_ParamLimits

0xdf3f,	// (0x0007057c) fs_bigclock_status_pane

0xdf4c,	// (0x00070589) main_fs_bigclock_clock_pane_ParamLimits

0xdf4c,	// (0x00070589) main_fs_bigclock_clock_pane

0xdf5e,	// (0x0007059b) main_fs_bigclock_indi_pane_ParamLimits

0xdf5e,	// (0x0007059b) main_fs_bigclock_indi_pane

0xdf7e,	// (0x000705bb) main_fs_bigclock_swipe_pane_ParamLimits

0xdf7e,	// (0x000705bb) main_fs_bigclock_swipe_pane

0x0386,	// (0x000629c3) main_fs_clock_dumped_data

0x3099,	// (0x000656d6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3099,	// (0x000656d6) list_single_fs_bigclock_indicator_pane_g1

0x30b3,	// (0x000656f0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x30b3,	// (0x000656f0) list_single_fs_bigclock_indicator_pane_g2

0x30cd,	// (0x0006570a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x30cd,	// (0x0006570a) list_single_fs_bigclock_indicator_pane_g3

0x30e7,	// (0x00065724) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x30e7,	// (0x00065724) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x000722c4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x000722c4) list_single_fs_bigclock_indicator_pane_g

0x3110,	// (0x0006574d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3110,	// (0x0006574d) list_single_fs_bigclock_indicator_pane_t1

0x3138,	// (0x00065775) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3138,	// (0x00065775) list_single_fs_bigclock_indicator_pane_t2

0x3160,	// (0x0006579d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3160,	// (0x0006579d) list_single_fs_bigclock_indicator_pane_t3

0x3188,	// (0x000657c5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3188,	// (0x000657c5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x000722cf) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x000722cf) list_single_fs_bigclock_indicator_pane_t

0x3bc9,	// (0x00066206) image3_infobar_fav_pane_ParamLimits

0x3bc9,	// (0x00066206) image3_infobar_fav_pane

0x3bd9,	// (0x00066216) image3_infobar_loc_pane_ParamLimits

0x3bd9,	// (0x00066216) image3_infobar_loc_pane

0x3bed,	// (0x0006622a) image3_infobar_time_pane_ParamLimits

0x3bed,	// (0x0006622a) image3_infobar_time_pane

0x5402,	// (0x00067a3f) image3_infobar_time_pane_g1

0x3bfd,	// (0x0006623a) image3_infobar_time_pane_t1

0x5402,	// (0x00067a3f) image3_infobar_loc_pane_g1

0x3c0b,	// (0x00066248) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x000724a1) image3_infobar_loc_pane_g

0x3c13,	// (0x00066250) image3_infobar_loc_pane_t1

0x5402,	// (0x00067a3f) image3_infobar_fav_pane_g1

0x3c21,	// (0x0006625e) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x000724a6) image3_infobar_fav_pane_g

0x3c29,	// (0x00066266) fs_bigclock_status_battery_pane

0x3c32,	// (0x0006626f) fs_bigclock_status_signal_pane

0x3c3b,	// (0x00066278) fs_bigclock_status_title_pane

0x3c44,	// (0x00066281) fs_bigclock_status_signal_pane_g1

0x3c4d,	// (0x0006628a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x000724ab) fs_bigclock_status_signal_pane_g

0x3c55,	// (0x00066292) fs_bigclock_status_battery_pane_g1

0x3c5e,	// (0x0006629b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x000724b0) fs_bigclock_status_battery_pane_g

0x3c66,	// (0x000662a3) fs_bigclock_status_title_pane_t1

0xe608,	// (0x00070c45) main_fs_bigclock_clock_pane_g1

0xe608,	// (0x00070c45) main_fs_bigclock_clock_pane_g2

0xe615,	// (0x00070c52) main_fs_bigclock_clock_pane_g3

0xe615,	// (0x00070c52) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x000724b5) main_fs_bigclock_clock_pane_g

0xe621,	// (0x00070c5e) main_fs_bigclock_clock_pane_t1

0xe634,	// (0x00070c71) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x000724be) main_fs_bigclock_clock_pane_t

0x3c74,	// (0x000662b1) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3c74,	// (0x000662b1) list_single_fs_bigclock_indicator_pane

0x3c85,	// (0x000662c2) list_single_fs_bigclock_pane_ParamLimits

0x3c85,	// (0x000662c2) list_single_fs_bigclock_pane

0x3cab,	// (0x000662e8) main_fs_bigclock_indicator_pane_t1

0x3cba,	// (0x000662f7) list_single_fs_bigclock_pane_g1

0x3cc2,	// (0x000662ff) list_single_fs_bigclock_pane_t1

0x5402,	// (0x00067a3f) main_fs_bigclock_swipe_pane_g1

0x3d05,	// (0x00066342) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x000724cf) main_fs_bigclock_swipe_pane_g

0x3d0d,	// (0x0006634a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3d0d,	// (0x0006634a) main_fs_bigclock_swipe_pane_t1

0x9990,	// (0x0006bfcd) call_type_pane_ParamLimits

0x0386,	// (0x000629c3) main_btmg_pane

0x793c,	// (0x00069f79) list_single_cale_mrui_row_pane_g2_ParamLimits

0x793c,	// (0x00069f79) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x00072442) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x00072442) list_single_cale_mrui_row_pane_g

0x7a64,	// (0x0006a0a1) list_recal_vselct_arw_lo_pane

0x3acd,	// (0x0006610a) list_recal_vselct_arw_up_pane

0x7a6c,	// (0x0006a0a9) list_recal_vselct_pane

0xe689,	// (0x00070cc6) btmg_button_pane

0xe691,	// (0x00070cce) main_btmg_pane_g1

0x0386,	// (0x000629c3) bg_button_pane_cp044

0x3d2a,	// (0x00066367) btmg_button_pane_t1

0x4fee,	// (0x0006762b) aid_listscroll_gen

0x225b,	// (0x00064898) main_cntbar_detail_pane

0x35c5,	// (0x00065c02) list_cmail_folder_pane

0x5b55,	// (0x00068192) sp_fs_scroll_pane_cp03_ParamLimits

0xe31f,	// (0x0007095c) list_single_fs_dyc_pane_cp01_ParamLimits

0xe31f,	// (0x0007095c) list_single_fs_dyc_pane_cp01

0x3d38,	// (0x00066375) aid_size_cmail_indent

0x7af7,	// (0x0006a134) list_single_dyc_row_pane_cp01

0xe6b3,	// (0x00070cf0) cntbar_detail_list_pane_ParamLimits

0xe6b3,	// (0x00070cf0) cntbar_detail_list_pane

0xe6e9,	// (0x00070d26) main_cntbar_detail_cont_pane_ParamLimits

0xe6e9,	// (0x00070d26) main_cntbar_detail_cont_pane

0x9984,	// (0x0006bfc1) scroll_pane_cp032_ParamLimits

0x9984,	// (0x0006bfc1) scroll_pane_cp032

0xe6f5,	// (0x00070d32) cntbar_detail_list_event_pane_ParamLimits

0xe6f5,	// (0x00070d32) cntbar_detail_list_event_pane

0xe6bf,	// (0x00070cfc) cntbar_detail_list_shct_pane

0x1088,	// (0x000636c5) aid_list_gen

0x3d4a,	// (0x00066387) aid_scroll

0x3d53,	// (0x00066390) aid_size_touch_scroll_bar

0x703b,	// (0x00069678) aid_list_double

0xd4bd,	// (0x0006fafa) aid_list_single

0xd4bd,	// (0x0006fafa) aid_list_single_lg

0x7b00,	// (0x0006a13d) aid_list_z_g_a_sm

0x80f3,	// (0x0006a730) aid_list_z_g_d

0x7b08,	// (0x0006a145) aid_txt_z_prm

0x7b16,	// (0x0006a153) aid_txt_z_prm_cp01

0x7b24,	// (0x0006a161) aid_txt_z_sec

0xe705,	// (0x00070d42) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe705,	// (0x00070d42) main_cntbar_detail_cont_pane_g1

0xe712,	// (0x00070d4f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe712,	// (0x00070d4f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x000724d4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x000724d4) main_cntbar_detail_cont_pane_g

0x3d64,	// (0x000663a1) main_cntbar_detail_cont_pane_t1

0x3d72,	// (0x000663af) main_cntbar_detail_cont_pane_t2

0x3d80,	// (0x000663bd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x000724d9) main_cntbar_detail_cont_pane_t

0xe71e,	// (0x00070d5b) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe71e,	// (0x00070d5b) cell_cntbar_detail_list_shct_pane

0x3d8e,	// (0x000663cb) cntbar_detail_list_shct_pane_g1

0x3d97,	// (0x000663d4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x000724e0) cntbar_detail_list_shct_pane_g

0xe730,	// (0x00070d6d) cntbar_detail_list_event_pane_g1_ParamLimits

0xe730,	// (0x00070d6d) cntbar_detail_list_event_pane_g1

0xe73c,	// (0x00070d79) cntbar_detail_list_event_pane_g2_ParamLimits

0xe73c,	// (0x00070d79) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x000724e5) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x000724e5) cntbar_detail_list_event_pane_g

0xe7a8,	// (0x00070de5) cntbar_detail_list_event_pane_t1_ParamLimits

0xe7a8,	// (0x00070de5) cntbar_detail_list_event_pane_t1

0xe7bd,	// (0x00070dfa) cntbar_detail_list_event_pane_t2_ParamLimits

0xe7bd,	// (0x00070dfa) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x000724f2) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x000724f2) cntbar_detail_list_event_pane_t

0x5402,	// (0x00067a3f) cell_cntbar_detail_list_shct_pane_g1

0x1851,	// (0x00063e8e) navi_pane_mv_g3

0x225b,	// (0x00064898) main_cntbar_detail_pane_ParamLimits

0x0386,	// (0x000629c3) main_notif_wgt_pane

0xbfd9,	// (0x0006e616) aid_tch_main_mp4_pane_g4

0xc1f4,	// (0x0006e831) popup_slider_window_cp02

0x7a5a,	// (0x0006a097) list_recal_day_event_pane

0xe699,	// (0x00070cd6) cntbar_detail_btn_pane_ParamLimits

0xe699,	// (0x00070cd6) cntbar_detail_btn_pane

0xe6a5,	// (0x00070ce2) cntbar_detail_btn_pane_cp01_ParamLimits

0xe6a5,	// (0x00070ce2) cntbar_detail_btn_pane_cp01

0xe6bf,	// (0x00070cfc) cntbar_detail_list_shct_pane_ParamLimits

0xe6cb,	// (0x00070d08) cntbar_detail_pane_g1_ParamLimits

0xe6cb,	// (0x00070d08) cntbar_detail_pane_g1

0xe6d7,	// (0x00070d14) cntbar_detail_pane_t1_ParamLimits

0xe6d7,	// (0x00070d14) cntbar_detail_pane_t1

0xe748,	// (0x00070d85) cntbar_detail_list_event_pane_g3_ParamLimits

0xe748,	// (0x00070d85) cntbar_detail_list_event_pane_g3

0xe760,	// (0x00070d9d) cntbar_detail_list_event_pane_g4_ParamLimits

0xe760,	// (0x00070d9d) cntbar_detail_list_event_pane_g4

0xe778,	// (0x00070db5) cntbar_detail_list_event_pane_g5_ParamLimits

0xe778,	// (0x00070db5) cntbar_detail_list_event_pane_g5

0xe790,	// (0x00070dcd) cntbar_detail_list_event_pane_g6_ParamLimits

0xe790,	// (0x00070dcd) cntbar_detail_list_event_pane_g6

0xe7d2,	// (0x00070e0f) cntbar_detail_list_event_pane_t3_ParamLimits

0xe7d2,	// (0x00070e0f) cntbar_detail_list_event_pane_t3

0xe7e4,	// (0x00070e21) popup_notif_wgt_window_ParamLimits

0xe7e4,	// (0x00070e21) popup_notif_wgt_window

0xe7f2,	// (0x00070e2f) popup_submenu_window_cp01_ParamLimits

0xe7f2,	// (0x00070e2f) popup_submenu_window_cp01

0x0dca,	// (0x00063407) bg_popup_window_pane_cp10

0x3da0,	// (0x000663dd) listscroll_notif_wgt_pane

0x3db1,	// (0x000663ee) list_notif_wgt_window

0x3dba,	// (0x000663f7) scroll_pane_cp033

0xe7fe,	// (0x00070e3b) list_notif_wgt_row_pane_ParamLimits

0xe7fe,	// (0x00070e3b) list_notif_wgt_row_pane

0x3dc3,	// (0x00066400) aid_size_list_notif_wgt_del

0x3dd0,	// (0x0006640d) list_notif_wgt_row_pane_g1

0x3ddc,	// (0x00066419) list_notif_wgt_row_pane_g2

0x3deb,	// (0x00066428) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x000724f9) list_notif_wgt_row_pane_g

0x3df8,	// (0x00066435) list_notif_wgt_row_pane_t1

0x3e0e,	// (0x0006644b) list_notif_wgt_row_pane_t2

0x3e20,	// (0x0006645d) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x00072500) list_notif_wgt_row_pane_t

0x2517,	// (0x00064b54) list_recal_day_event_pane_g1

0x3e32,	// (0x0006646f) list_recal_day_event_pane_t1

0x0386,	// (0x000629c3) bg_button_pane_cp045

0xe810,	// (0x00070e4d) cntbar_detail_btn_pane_t1

0x5002,	// (0x0006763f) main_callh_pane_ParamLimits

0x5002,	// (0x0006763f) main_callh_pane

0x0386,	// (0x000629c3) main_coverflow0_pane

0x0386,	// (0x000629c3) main_wgtman_pane

0xdf90,	// (0x000705cd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdf90,	// (0x000705cd) main_fs_bigclock_unlock_btn_pane

0x3597,	// (0x00065bd4) bg_button_pane_cp16

0x35a7,	// (0x00065be4) cell_tport_appsw_pane_g3

0xe81e,	// (0x00070e5b) cf0_flow_pane_ParamLimits

0xe81e,	// (0x00070e5b) cf0_flow_pane

0x3e41,	// (0x0006647e) listscroll_cf0_pane

0x3e4a,	// (0x00066487) main_cf0_pane_g1

0xe82d,	// (0x00070e6a) main_cf0_pane_t1_ParamLimits

0xe82d,	// (0x00070e6a) main_cf0_pane_t1

0xe83f,	// (0x00070e7c) main_cf0_pane_t2_ParamLimits

0xe83f,	// (0x00070e7c) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0007250c) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0007250c) main_cf0_pane_t

0x3e5c,	// (0x00066499) scroll_pane_cp11

0xe851,	// (0x00070e8e) cf0_flow_pane_g1

0xe859,	// (0x00070e96) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00072511) cf0_flow_pane_g

0xe861,	// (0x00070e9e) cf0_flow_pane_t1

0x0386,	// (0x000629c3) main_call6_pane

0x0386,	// (0x000629c3) main_calllock_pane

0xe86f,	// (0x00070eac) call6_btn_grp_pane_ParamLimits

0xe86f,	// (0x00070eac) call6_btn_grp_pane

0xe87c,	// (0x00070eb9) call6_pane_g1_ParamLimits

0xe87c,	// (0x00070eb9) call6_pane_g1

0xe889,	// (0x00070ec6) popup_call6_1st_window_ParamLimits

0xe889,	// (0x00070ec6) popup_call6_1st_window

0xe895,	// (0x00070ed2) popup_call6_2nd_window_ParamLimits

0xe895,	// (0x00070ed2) popup_call6_2nd_window

0xe8a1,	// (0x00070ede) cell_call6_btn_pane_ParamLimits

0xe8a1,	// (0x00070ede) cell_call6_btn_pane

0x0dca,	// (0x00063407) bg_popup_call2_in_pane_cp03

0x3e65,	// (0x000664a2) popup_call6_1st_window_g1

0x3e6d,	// (0x000664aa) popup_call6_1st_window_g2

0x3e75,	// (0x000664b2) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00072516) popup_call6_1st_window_g

0x3e7d,	// (0x000664ba) popup_call6_1st_window_t1

0x3e8c,	// (0x000664c9) popup_call6_1st_window_t2

0x3e9a,	// (0x000664d7) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0007251d) popup_call6_1st_window_t

0x0dca,	// (0x00063407) bg_popup_call2_in_pane_cp04

0x3e65,	// (0x000664a2) popup_call6_2nd_window_g1

0x3e6d,	// (0x000664aa) popup_call6_2nd_window_g2

0x3e75,	// (0x000664b2) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00072516) popup_call6_2nd_window_g

0x3e7d,	// (0x000664ba) popup_call6_2nd_window_t1

0x0386,	// (0x000629c3) bg_button_pane_cp15

0x3ea8,	// (0x000664e5) cell_call6_btn_pane_g1

0x3eb1,	// (0x000664ee) cell_call6_btn_pane_t1

0xe8b0,	// (0x00070eed) listscroll_wgtman_pane_ParamLimits

0xe8b0,	// (0x00070eed) listscroll_wgtman_pane

0xe8cc,	// (0x00070f09) wgtman_btn_pane_ParamLimits

0xe8cc,	// (0x00070f09) wgtman_btn_pane

0x1669,	// (0x00063ca6) aid_scroll_copy1

0x3ec0,	// (0x000664fd) list_wgtman_pane

0xe8ff,	// (0x00070f3c) wgtman_btn_pane_g1_ParamLimits

0xe8ff,	// (0x00070f3c) wgtman_btn_pane_g1

0xe927,	// (0x00070f64) wgtman_btn_pane_t1_ParamLimits

0xe927,	// (0x00070f64) wgtman_btn_pane_t1

0x3eca,	// (0x00066507) wgtman_btn_pane_t2_ParamLimits

0x3eca,	// (0x00066507) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00072524) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00072524) wgtman_btn_pane_t

0xe7fe,	// (0x00070e3b) listrow_wgtman_pane_ParamLimits

0xe7fe,	// (0x00070e3b) listrow_wgtman_pane

0xe95e,	// (0x00070f9b) listrow_wgtman_pane_g1

0xe96b,	// (0x00070fa8) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00072529) listrow_wgtman_pane_g

0x7b32,	// (0x0006a16f) listrow_wgtman_pane_t1

0x7b4a,	// (0x0006a187) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0007252e) listrow_wgtman_pane_t

0x7b70,	// (0x0006a1ad) wait_bar_pane_cp09

0x3ee1,	// (0x0006651e) main_calllock_btn_pane

0x3ee9,	// (0x00066526) main_calllock_pane_g1

0x0386,	// (0x000629c3) bg_button_pane_cp17

0x3ef2,	// (0x0006652f) main_calllock_btn_pane_g1

0x3efb,	// (0x00066538) main_calllock_btn_pane_t1

0x0386,	// (0x000629c3) main_dialer3_pane

0x0386,	// (0x000629c3) main_fmrd2_pane

0x5402,	// (0x00067a3f) main_fs_bigclock_unlock_btn_pane_g1

0x3f12,	// (0x0006654f) main_fs_bigclock_unlock_btn_pane_t1

0xe983,	// (0x00070fc0) area_fmrd2_info_pane_ParamLimits

0xe983,	// (0x00070fc0) area_fmrd2_info_pane

0xe98f,	// (0x00070fcc) area_fmrd2_visual_pane_ParamLimits

0xe98f,	// (0x00070fcc) area_fmrd2_visual_pane

0xe99d,	// (0x00070fda) fmrd2_indi_pane_ParamLimits

0xe99d,	// (0x00070fda) fmrd2_indi_pane

0xe9aa,	// (0x00070fe7) area_fmrd2_visual_pane_g1

0xe9b2,	// (0x00070fef) area_fmrd2_visual_pane_t1

0xe9c0,	// (0x00070ffd) area_fmrd2_visual_pane_t2

0xe9ce,	// (0x0007100b) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00072538) area_fmrd2_visual_pane_t

0xe9dc,	// (0x00071019) area_fmrd2_info_pane_g1

0xe9e4,	// (0x00071021) area_fmrd2_info_pane_t1

0xe9f2,	// (0x0007102f) area_fmrd2_info_pane_t2

0xea00,	// (0x0007103d) area_fmrd2_info_pane_t3

0xea0e,	// (0x0007104b) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0007253f) area_fmrd2_info_pane_t

0xea1c,	// (0x00071059) fmrd2_indi_pane_t1

0xea2a,	// (0x00071067) fmrd2_indi_pane_t2

0xea38,	// (0x00071075) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00072548) fmrd2_indi_pane_t

0x30f6,	// (0x00065733) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x30f6,	// (0x00065733) list_single_fs_bigclock_indicator_pane_g5

0x31a4,	// (0x000657e1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x31a4,	// (0x000657e1) list_single_fs_bigclock_indicator_pane_t5

0xe413,	// (0x00070a50) aid_cell_bcale_month_pane_ParamLimits

0xe413,	// (0x00070a50) aid_cell_bcale_month_pane

0xe43a,	// (0x00070a77) bcale_month_pane_ParamLimits

0xe43a,	// (0x00070a77) bcale_month_pane

0xe450,	// (0x00070a8d) bcale_preview_pane_ParamLimits

0xe450,	// (0x00070a8d) bcale_preview_pane

0x3cc2,	// (0x000662ff) list_single_fs_bigclock_pane_t1_ParamLimits

0x3ce1,	// (0x0006631e) list_single_fs_bigclock_pane_t2_ParamLimits

0x3ce1,	// (0x0006631e) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x000724ca) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x000724ca) list_single_fs_bigclock_pane_t

0x3f0a,	// (0x00066547) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x00072533) main_fs_bigclock_unlock_btn_pane_g

0xea46,	// (0x00071083) aid_dia3_key_size_ParamLimits

0xea46,	// (0x00071083) aid_dia3_key_size

0xea52,	// (0x0007108f) aid_dia3_listrow_size_ParamLimits

0xea52,	// (0x0007108f) aid_dia3_listrow_size

0xea60,	// (0x0007109d) dia3_keypad_fun_pane_ParamLimits

0xea60,	// (0x0007109d) dia3_keypad_fun_pane

0xea6c,	// (0x000710a9) dia3_keypad_num_pane_ParamLimits

0xea6c,	// (0x000710a9) dia3_keypad_num_pane

0xea78,	// (0x000710b5) dia3_listscroll_pane_ParamLimits

0xea78,	// (0x000710b5) dia3_listscroll_pane

0xea84,	// (0x000710c1) dia3_numentry_pane_ParamLimits

0xea84,	// (0x000710c1) dia3_numentry_pane

0x3f20,	// (0x0006655d) dia3_list_pane

0x3f29,	// (0x00066566) scroll_pane_cp12

0x0386,	// (0x000629c3) bg_dia3_numentry_pane

0xea90,	// (0x000710cd) dia3_numentry_pane_t1

0xea9f,	// (0x000710dc) cell_dia3_key_num_pane

0xeaa7,	// (0x000710e4) cell_dia3_key0_fun_pane_ParamLimits

0xeaa7,	// (0x000710e4) cell_dia3_key0_fun_pane

0xeab4,	// (0x000710f1) cell_dia3_key1_fun_pane_ParamLimits

0xeab4,	// (0x000710f1) cell_dia3_key1_fun_pane

0xeac1,	// (0x000710fe) dia3_listrow_pane

0x2e44,	// (0x00065481) bg_dia3_numentry_pane_g1

0x0386,	// (0x000629c3) bg_button_pane_cp21

0x3f32,	// (0x0006656f) cell_dia3_key_num_pane_t1

0x3f40,	// (0x0006657d) cell_dia3_key_num_pane_t2

0x3f4f,	// (0x0006658c) cell_dia3_key_num_pane_t3

0x3f5e,	// (0x0006659b) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0007254f) cell_dia3_key_num_pane_t

0x0386,	// (0x000629c3) bg_button_pane_cp19

0x3f6d,	// (0x000665aa) cell_dia3_key0_fun_pane_g1

0x0386,	// (0x000629c3) bg_button_pane_cp20

0xeace,	// (0x0007110b) cell_dia3_key1_fun_pane_g1

0xead6,	// (0x00071113) area_left_week_number_pane

0xeae7,	// (0x00071124) area_top_day_name_pane

0xeaf3,	// (0x00071130) frame_month_view_pane

0x3f75,	// (0x000665b2) grid_month_view_pane

0xeb04,	// (0x00071141) cell_top_day_name_pane_ParamLimits

0xeb04,	// (0x00071141) cell_top_day_name_pane

0xeb1a,	// (0x00071157) cell_area_left_week_number_pane_ParamLimits

0xeb1a,	// (0x00071157) cell_area_left_week_number_pane

0xeb39,	// (0x00071176) cell_month_view_pane_ParamLimits

0xeb39,	// (0x00071176) cell_month_view_pane

0x3f83,	// (0x000665c0) frm_month_g1

0xeb5f,	// (0x0007119c) frm_month_g2

0xeb6e,	// (0x000711ab) frm_month_g3

0xeb7d,	// (0x000711ba) frm_month_g4

0xeb8c,	// (0x000711c9) frm_month_g5

0xeb9b,	// (0x000711d8) frm_month_g6

0xebaa,	// (0x000711e7) frm_month_g7

0x3f90,	// (0x000665cd) frm_month_g8

0xebb9,	// (0x000711f6) frm_month_g9

0xebc6,	// (0x00071203) frm_month_g10

0xebd3,	// (0x00071210) frm_month_g11

0xebe0,	// (0x0007121d) frm_month_g12

0xebed,	// (0x0007122a) frm_month_g13

0xebfa,	// (0x00071237) frm_month_g14

0xec07,	// (0x00071244) frm_month_g15

0xec14,	// (0x00071251) frm_month_g16

0x000f,

0xff1b,	// (0x00072558) frm_month_g

0x3f9d,	// (0x000665da) cell_top_day_name_pane_t1

0xec21,	// (0x0007125e) cell_area_left_week_number_pane_g1

0xec30,	// (0x0007126d) cell_area_left_week_number_pane_t1

0x5631,	// (0x00067c6e) cell_month_view_pane_g1

0xec46,	// (0x00071283) cell_month_view_pane_t1

0x0386,	// (0x000629c3) main_fps_pane

0x3390,	// (0x000659cd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3390,	// (0x000659cd) cmail_ddmenu_btn02_pane_cp1

0x33ac,	// (0x000659e9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x33ac,	// (0x000659e9) cmail_ddmenu_btn02_pane_cp2

0xe588,	// (0x00070bc5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe588,	// (0x00070bc5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x0007247d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x0007247d) cmail_ddmenu_btn02_pane_g

0xe5a7,	// (0x00070be4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe5a7,	// (0x00070be4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x00072482) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x00072482) cmail_ddmenu_btn02_pane_t

0xec5c,	// (0x00071299) fps_text_pane_ParamLimits

0xec5c,	// (0x00071299) fps_text_pane

0xec69,	// (0x000712a6) main_fps_pane_g1_ParamLimits

0xec69,	// (0x000712a6) main_fps_pane_g1

0xec75,	// (0x000712b2) wait_bar_pane_cp010_ParamLimits

0xec75,	// (0x000712b2) wait_bar_pane_cp010

0xec81,	// (0x000712be) fps_text_pane_t1_ParamLimits

0xec81,	// (0x000712be) fps_text_pane_t1

0xc5d2,	// (0x0006ec0f) cam4_image_uncrop_pane_g1

0xc5db,	// (0x0006ec18) cam4_image_uncrop_pane_g2

0xc5e4,	// (0x0006ec21) cam4_image_uncrop_pane_g3

0xc5ed,	// (0x0006ec2a) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00071f3e) cam4_image_uncrop_pane_g

0xeac1,	// (0x000710fe) dia3_listrow_pane_ParamLimits

0x0386,	// (0x000629c3) main_phob2_pane

0xe2c4,	// (0x00070901) cell_tport_appsw_pane_cp02_ParamLimits

0xe2c4,	// (0x00070901) cell_tport_appsw_pane_cp02

0xe2d1,	// (0x0007090e) cell_tport_appsw_pane_cp03_ParamLimits

0xe2d1,	// (0x0007090e) cell_tport_appsw_pane_cp03

0x0386,	// (0x000629c3) phob2_contact_card_pane

0x0386,	// (0x000629c3) phob2_listscroll_pane

0x3fc8,	// (0x00066605) phob2_list_pane

0x3fd0,	// (0x0006660d) scroll_pane_cp034

0xec9a,	// (0x000712d7) phob2_cc_data_pane_ParamLimits

0xec9a,	// (0x000712d7) phob2_cc_data_pane

0xecb2,	// (0x000712ef) phob2_cc_listscroll_pane_ParamLimits

0xecb2,	// (0x000712ef) phob2_cc_listscroll_pane

0xecca,	// (0x00071307) list_double_large_graphic_phob2_pane_ParamLimits

0xecca,	// (0x00071307) list_double_large_graphic_phob2_pane

0xecdd,	// (0x0007131a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xecdd,	// (0x0007131a) list_double_large_graphic_phob2_pane_g1

0x7b82,	// (0x0006a1bf) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7b82,	// (0x0006a1bf) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x00072579) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x00072579) list_double_large_graphic_phob2_pane_g

0x7b8e,	// (0x0006a1cb) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x7b8e,	// (0x0006a1cb) list_double_large_graphic_phob2_pane_t1

0x7ba4,	// (0x0006a1e1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7ba4,	// (0x0006a1e1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0007257e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0007257e) list_double_large_graphic_phob2_pane_t

0x0386,	// (0x000629c3) list_highlight_pane_cp024

0xecf3,	// (0x00071330) phob2_cc_button_pane

0xecfb,	// (0x00071338) phob2_cc_data_pane_g1_ParamLimits

0xecfb,	// (0x00071338) phob2_cc_data_pane_g1

0xed07,	// (0x00071344) phob2_cc_data_pane_g2_ParamLimits

0xed07,	// (0x00071344) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x00072583) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x00072583) phob2_cc_data_pane_g

0xed13,	// (0x00071350) phob2_cc_data_pane_t1_ParamLimits

0xed13,	// (0x00071350) phob2_cc_data_pane_t1

0xed25,	// (0x00071362) phob2_cc_data_pane_t2_ParamLimits

0xed25,	// (0x00071362) phob2_cc_data_pane_t2

0xed37,	// (0x00071374) phob2_cc_data_pane_t3_ParamLimits

0xed37,	// (0x00071374) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x00072588) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x00072588) phob2_cc_data_pane_t

0x3fd8,	// (0x00066615) phob2_cc_list_pane_ParamLimits

0x3fd8,	// (0x00066615) phob2_cc_list_pane

0x25ae,	// (0x00064beb) scroll_pane_cp035_ParamLimits

0x25ae,	// (0x00064beb) scroll_pane_cp035

0x225b,	// (0x00064898) bg_button_pane_cp033

0x3fe4,	// (0x00066621) phob2_cc_button_pane_g1

0x3ff0,	// (0x0006662d) phob2_cc_button_pane_t1

0x4005,	// (0x00066642) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0007258f) phob2_cc_button_pane_t

0xed49,	// (0x00071386) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xed49,	// (0x00071386) list_double_large_graphic_phob2_cc_pane

0xed62,	// (0x0007139f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xed62,	// (0x0007139f) list_double_large_graphic_phob2_cc_pane_g1

0x7bb9,	// (0x0006a1f6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x7bb9,	// (0x0006a1f6) list_double_large_graphic_phob2_cc_pane_g2

0x7bc8,	// (0x0006a205) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x7bc8,	// (0x0006a205) list_double_large_graphic_phob2_cc_pane_g3

0x7bd7,	// (0x0006a214) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x7bd7,	// (0x0006a214) list_double_large_graphic_phob2_cc_pane_g4

0x7be8,	// (0x0006a225) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x7be8,	// (0x0006a225) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x00072594) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x00072594) list_double_large_graphic_phob2_cc_pane_g

0x7bf7,	// (0x0006a234) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x7bf7,	// (0x0006a234) list_double_large_graphic_phob2_cc_pane_t1

0x7c20,	// (0x0006a25d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x7c20,	// (0x0006a25d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0007259f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0007259f) list_double_large_graphic_phob2_cc_pane_t

0x4017,	// (0x00066654) list_highlight_pane_cp025_ParamLimits

0x4017,	// (0x00066654) list_highlight_pane_cp025

0x225b,	// (0x00064898) bg_button_pane_cp033_ParamLimits

0x3fe4,	// (0x00066621) phob2_cc_button_pane_g1_ParamLimits

0x3ff0,	// (0x0006662d) phob2_cc_button_pane_t1_ParamLimits

0x4005,	// (0x00066642) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0007258f) phob2_cc_button_pane_t_ParamLimits

0x7ef0,	// (0x0006a52d) popup_wgtman_window

0x23b1,	// (0x000649ee) scroll_pane_cp038

0xe8e7,	// (0x00070f24) wgtman_btn_pane_cp_01_ParamLimits

0xe8e7,	// (0x00070f24) wgtman_btn_pane_cp_01

0x4025,	// (0x00066662) wgtman_content_pane

0x402e,	// (0x0006666b) wgtman_heading_pane

0x0386,	// (0x000629c3) bg_heading_pane_cp02

0x4037,	// (0x00066674) wgtman_heading_pane_g1

0x403f,	// (0x0006667c) wgtman_heading_pane_t1

0x404d,	// (0x0006668a) scroll_pane_cp036

0x4055,	// (0x00066692) wgtman_list_pane

0x328f,	// (0x000658cc) wgtman_list_pane_t1_ParamLimits

0x328f,	// (0x000658cc) wgtman_list_pane_t1

0xc537,	// (0x0006eb74) cam4_grid_pane

0x6e23,	// (0x00069460) bg_button_pane_cp015_ParamLimits

0xd10f,	// (0x0006f74c) bg_button_pane_cp016_ParamLimits

0xd122,	// (0x0006f75f) bg_button_pane_cp017_ParamLimits

0x6e61,	// (0x0006949e) popup_vitu2_query_window_g3_ParamLimits

0x6e61,	// (0x0006949e) popup_vitu2_query_window_g3

0x6eda,	// (0x00069517) popup_vitu2_query_window_t6_ParamLimits

0x6eda,	// (0x00069517) popup_vitu2_query_window_t6

0x6f05,	// (0x00069542) popup_vitu2_query_window_t7_ParamLimits

0x6f05,	// (0x00069542) popup_vitu2_query_window_t7

0xf0b8,	// (0x000716f5) cam4_grid_pane_g1

0xf0c1,	// (0x000716fe) cam4_grid_pane_g2

0x405d,	// (0x0006669a) cam4_grid_pane_g3

0x4066,	// (0x000666a3) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x000725a4) cam4_grid_pane_g

0x8d81,	// (0x0006b3be) aid_placing_vt_slider_lsc_ParamLimits

0x902b,	// (0x0006b668) vidtel_button_pane_ParamLimits

0x902b,	// (0x0006b668) vidtel_button_pane

0x0386,	// (0x000629c3) bg_button_pane_cp034

0xed73,	// (0x000713b0) vidtel_button_pane_g1

0xed7b,	// (0x000713b8) vidtel_button_pane_t1

0x24f5,	// (0x00064b32) aid_size_vtel_slider_touch

0x25ae,	// (0x00064beb) scroll_pane_cp039

0xdd07,	// (0x00070344) ncim_query_button_pane_cp01_ParamLimits

0xdd26,	// (0x00070363) ncimui_query_pane_g1_ParamLimits

0x225b,	// (0x00064898) input_focus_pane_cp012_ParamLimits

0x2e8a,	// (0x000654c7) ncim_query_entry_pane_t1_ParamLimits

0x25ae,	// (0x00064beb) scroll_pane_cp039_ParamLimits

0x173e,	// (0x00063d7b) navi_pane_bcale_mc_g1

0x1746,	// (0x00063d83) navi_pane_bcale_mc_t1

0x33f5,	// (0x00065a32) main_sp_fs_email_pane_g1

0x3401,	// (0x00065a3e) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x00072335) main_sp_fs_email_pane_g

0x38ea,	// (0x00065f27) list_single_cale_mrui_row_pane_g3_ParamLimits

0x38ea,	// (0x00065f27) list_single_cale_mrui_row_pane_g3

0x7ab7,	// (0x0006a0f4) list_single_recal_day_pane_g5_event_pane

0x7acb,	// (0x0006a108) list_single_recal_day_pane_g7

0x406f,	// (0x000666ac) list_recal_day_event_pane_cp01

0x4078,	// (0x000666b5) list_recal_vselct_arw_lo_pane_cp01

0x4080,	// (0x000666bd) list_recal_vselct_arw_up_pane_cp01

0x4088,	// (0x000666c5) list_recal_vselct_pane_cp01

0x2517,	// (0x00064b54) list_recal_day_event_pane_cp01_g1

0x7c49,	// (0x0006a286) list_recal_day_event_pane_cp01_t1

0x7ad3,	// (0x0006a110) list_single_recal_day_pane_t1_ParamLimits

0x7ae5,	// (0x0006a122) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x00072492) list_single_recal_day_pane_t_ParamLimits

0x0ab0,	// (0x000630ed) bg_notes_pane_ParamLimits

0x0b67,	// (0x000631a4) list_notes_pane_ParamLimits

0x81ab,	// (0x0006a7e8) scroll_pane_cp06_ParamLimits

0x0ba3,	// (0x000631e0) main_notes_pane_ParamLimits

0x0386,	// (0x000629c3) main_welc_pane

0xed91,	// (0x000713ce) main_welc_body_pane_ParamLimits

0xed91,	// (0x000713ce) main_welc_body_pane

0xedaa,	// (0x000713e7) main_welc_opti_pane_ParamLimits

0xedaa,	// (0x000713e7) main_welc_opti_pane

0xedd7,	// (0x00071414) main_welc_pane_t1_ParamLimits

0xedd7,	// (0x00071414) main_welc_pane_t1

0xedef,	// (0x0007142c) main_welc_body_row_pane_ParamLimits

0xedef,	// (0x0007142c) main_welc_body_row_pane

0x40b3,	// (0x000666f0) main_welc_opti_row_pane_ParamLimits

0x40b3,	// (0x000666f0) main_welc_opti_row_pane

0x40c1,	// (0x000666fe) main_welc_opti_row_pane_g1

0xee03,	// (0x00071440) main_welc_opti_row_pane_t1

0x40c9,	// (0x00066706) main_welc_body_row_pane_t1

0x3da9,	// (0x000663e6) popup_notif_wgt_heading_pane

0x3dc3,	// (0x00066400) aid_size_list_notif_wgt_del_ParamLimits

0x3dd0,	// (0x0006640d) list_notif_wgt_row_pane_g1_ParamLimits

0x3ddc,	// (0x00066419) list_notif_wgt_row_pane_g2_ParamLimits

0x3deb,	// (0x00066428) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x000724f9) list_notif_wgt_row_pane_g_ParamLimits

0x3df8,	// (0x00066435) list_notif_wgt_row_pane_t1_ParamLimits

0x3e0e,	// (0x0006644b) list_notif_wgt_row_pane_t2_ParamLimits

0x3e20,	// (0x0006645d) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x00072500) list_notif_wgt_row_pane_t_ParamLimits

0xe95e,	// (0x00070f9b) listrow_wgtman_pane_g1_ParamLimits

0xe96b,	// (0x00070fa8) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x00072529) listrow_wgtman_pane_g_ParamLimits

0x7b32,	// (0x0006a16f) listrow_wgtman_pane_t1_ParamLimits

0x7b4a,	// (0x0006a187) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x0007252e) listrow_wgtman_pane_t_ParamLimits

0x7b70,	// (0x0006a1ad) wait_bar_pane_cp09_ParamLimits

0x0386,	// (0x000629c3) bg_popup_heading_pane_cp02

0x40d8,	// (0x00066715) popup_notif_wgt_heading_pane_g1

0x40e0,	// (0x0006671d) popup_notif_wgt_heading_pane_t1

0x0386,	// (0x000629c3) main_vids_pane

0x0386,	// (0x000629c3) vids_listscroll_pane

0xee12,	// (0x0007144f) scroll_pane_cp040

0x0386,	// (0x000629c3) vids_list_pane

0xee1b,	// (0x00071458) vids_list_double_pane_ParamLimits

0xee1b,	// (0x00071458) vids_list_double_pane

0xee2c,	// (0x00071469) vids_list_double_pane_g1

0xee35,	// (0x00071472) vids_list_double_pane_t1

0xee44,	// (0x00071481) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x000725b2) vids_list_double_pane_t

0x225b,	// (0x00064898) main_ncimui_pane_ParamLimits

0xdb61,	// (0x0007019e) main_ncimui_pane_g1_ParamLimits

0xdb6d,	// (0x000701aa) main_ncimui_pane_g2_ParamLimits

0xdb6d,	// (0x000701aa) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0007223a) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0007223a) main_ncimui_pane_g

0xedbf,	// (0x000713fc) main_welc_pane_g1_ParamLimits

0xedbf,	// (0x000713fc) main_welc_pane_g1

0xedcb,	// (0x00071408) main_welc_pane_g2_ParamLimits

0xedcb,	// (0x00071408) main_welc_pane_g2

0x0001,

0xff70,	// (0x000725ad) main_welc_pane_g_ParamLimits

0xff70,	// (0x000725ad) main_welc_pane_g

0x0ab0,	// (0x000630ed) listscroll_mce_pane_ParamLimits

0x1891,	// (0x00063ece) wait_bar_pane_cp10

0x4ff6,	// (0x00067633) main_cale_day_pane_ParamLimits

0x4ff6,	// (0x00067633) main_cale_week_pane_ParamLimits

0x0ab0,	// (0x000630ed) main_messa_pane_ParamLimits

0xba09,	// (0x0006e046) main_clock2_btn_pane_ParamLimits

0xba09,	// (0x0006e046) main_clock2_btn_pane

0x57b9,	// (0x00067df6) main_clock2_btn_pane_cp01_ParamLimits

0x57b9,	// (0x00067df6) main_clock2_btn_pane_cp01

0x3876,	// (0x00065eb3) list_cale_mrui_pane_ParamLimits

0x3e54,	// (0x00066491) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x00072507) main_cf0_pane_g

0xead6,	// (0x00071113) area_left_week_number_pane_ParamLimits

0xeae7,	// (0x00071124) area_top_day_name_pane_ParamLimits

0xeaf3,	// (0x00071130) frame_month_view_pane_ParamLimits

0x3f75,	// (0x000665b2) grid_month_view_pane_ParamLimits

0x3f83,	// (0x000665c0) frm_month_g1_ParamLimits

0xeb5f,	// (0x0007119c) frm_month_g2_ParamLimits

0xeb6e,	// (0x000711ab) frm_month_g3_ParamLimits

0xeb7d,	// (0x000711ba) frm_month_g4_ParamLimits

0xeb8c,	// (0x000711c9) frm_month_g5_ParamLimits

0xeb9b,	// (0x000711d8) frm_month_g6_ParamLimits

0xebaa,	// (0x000711e7) frm_month_g7_ParamLimits

0x3f90,	// (0x000665cd) frm_month_g8_ParamLimits

0xebb9,	// (0x000711f6) frm_month_g9_ParamLimits

0xebc6,	// (0x00071203) frm_month_g10_ParamLimits

0xebd3,	// (0x00071210) frm_month_g11_ParamLimits

0xebe0,	// (0x0007121d) frm_month_g12_ParamLimits

0xebed,	// (0x0007122a) frm_month_g13_ParamLimits

0xebfa,	// (0x00071237) frm_month_g14_ParamLimits

0xec07,	// (0x00071244) frm_month_g15_ParamLimits

0xec14,	// (0x00071251) frm_month_g16_ParamLimits

0xff1b,	// (0x00072558) frm_month_g_ParamLimits

0x3f9d,	// (0x000665da) cell_top_day_name_pane_t1_ParamLimits

0xec21,	// (0x0007125e) cell_area_left_week_number_pane_g1_ParamLimits

0xec30,	// (0x0007126d) cell_area_left_week_number_pane_t1_ParamLimits

0x5631,	// (0x00067c6e) cell_month_view_pane_g1_ParamLimits

0xec46,	// (0x00071283) cell_month_view_pane_t1_ParamLimits

0x0aa8,	// (0x000630e5) main_clock2_btn_pane_g1

0x40ee,	// (0x0006672b) main_clock2_btn_pane_t1

0x225b,	// (0x00064898) listscroll_cmail_pane_ParamLimits

0x33f5,	// (0x00065a32) main_sp_fs_email_pane_g1_ParamLimits

0x3401,	// (0x00065a3e) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x00072335) main_sp_fs_email_pane_g_ParamLimits

0x3a9c,	// (0x000660d9) list_recal_day_pane_ParamLimits

0x3aad,	// (0x000660ea) mian_recal_day_pane_t1

0x74be,	// (0x00069afb) list_single_dyc_row_text_pane_t4_ParamLimits

0x74be,	// (0x00069afb) list_single_dyc_row_text_pane_t4

0x74f5,	// (0x00069b32) list_single_dyc_row_text_pane_t5_ParamLimits

0x74f5,	// (0x00069b32) list_single_dyc_row_text_pane_t5

0x7569,	// (0x00069ba6) list_single_dyc_row_text_pane_t6_ParamLimits

0x7569,	// (0x00069ba6) list_single_dyc_row_text_pane_t6

0x1212,	// (0x0006384f) aid_mgn_list_cale_time_pane

0x225b,	// (0x00064898) main_gallery2_pane_ParamLimits

0x57cd,	// (0x00067e0a) main_clock2_pane_cp01_t1

0x57db,	// (0x00067e18) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x00071e14) main_clock2_pane_cp01_t

0x8608,	// (0x0006ac45) cale_week_scroll_pane_g16_ParamLimits

0x8608,	// (0x0006ac45) cale_week_scroll_pane_g16

0x0dca,	// (0x00063407) vorec_slider_pane

0xed7b,	// (0x000713b8) vidtel_button_pane_t1_ParamLimits

0xe608,	// (0x00070c45) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe608,	// (0x00070c45) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe615,	// (0x00070c52) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe615,	// (0x00070c52) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x000724b5) main_fs_bigclock_clock_pane_g_ParamLimits

0xe621,	// (0x00070c5e) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe634,	// (0x00070c71) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x000724be) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large

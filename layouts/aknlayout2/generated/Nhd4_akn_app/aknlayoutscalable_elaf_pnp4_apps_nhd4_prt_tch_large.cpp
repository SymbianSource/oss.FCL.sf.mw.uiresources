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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006590a };

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
0x75d6,	// (0x0006cee0) Screen

0x75e2,	// (0x0006ceec) application_window

0x7648,	// (0x0006cf52) area_bottom_pane_ParamLimits

0x7648,	// (0x0006cf52) area_bottom_pane

0x76a1,	// (0x0006cfab) area_top_pane_ParamLimits

0x76a1,	// (0x0006cfab) area_top_pane

0x7705,	// (0x0006d00f) call_video_uplink_pane_ParamLimits

0x7705,	// (0x0006d00f) call_video_uplink_pane

0x7742,	// (0x0006d04c) main_pane_ParamLimits

0x7742,	// (0x0006d04c) main_pane

0x28ca,	// (0x000681d4) context_pane

0xa7ca,	// (0x000700d4) navi_pane

0xa7ea,	// (0x000700f4) popup_cale_events_window_ParamLimits

0xa7ea,	// (0x000700f4) popup_cale_events_window

0x28dd,	// (0x000681e7) popup_mup_playback_window

0xa802,	// (0x0007010c) signal_pane

0x07ff,	// (0x00066109) main_browser_pane

0x1414,	// (0x00066d1e) main_burst_pane

0xa692,	// (0x0006ff9c) main_calc_pane

0x1414,	// (0x00066d1e) main_cale_day_pane

0x07ff,	// (0x00066109) main_cale_month_pane

0x1414,	// (0x00066d1e) main_cale_week_pane

0x1414,	// (0x00066d1e) main_call_pane

0x0461,	// (0x00065d6b) main_call_poc_pane

0x1414,	// (0x00066d1e) main_camera_pane

0x1414,	// (0x00066d1e) main_chi_dic_pane

0x12a3,	// (0x00066bad) main_clock_pane

0x0461,	// (0x00065d6b) main_fmradio_pane

0x1414,	// (0x00066d1e) main_graph_messa_pane

0x0461,	// (0x00065d6b) main_help_pane

0x07ff,	// (0x00066109) main_im_pane

0x06bc,	// (0x00065fc6) main_image_pane_ParamLimits

0x06bc,	// (0x00065fc6) main_image_pane

0x0461,	// (0x00065d6b) main_location2_pane

0x1414,	// (0x00066d1e) main_location_pane

0x0461,	// (0x00065d6b) main_messa_pane

0x0461,	// (0x00065d6b) main_mp2_pane

0x1414,	// (0x00066d1e) main_mp_pane

0x0461,	// (0x00065d6b) main_msg_pane

0x0461,	// (0x00065d6b) main_mup_eq_pane

0x0461,	// (0x00065d6b) main_mup_pane

0x07ff,	// (0x00066109) main_notes_pane

0x0461,	// (0x00065d6b) main_pec_pane

0x0461,	// (0x00065d6b) main_phob_pane

0x0461,	// (0x00065d6b) main_pinb_pane

0x0461,	// (0x00065d6b) main_postcard_pane

0x0461,	// (0x00065d6b) main_qdial_pane

0x1414,	// (0x00066d1e) main_skin_pane

0x0461,	// (0x00065d6b) main_smil2_pane

0x1414,	// (0x00066d1e) main_smil_pane

0x1414,	// (0x00066d1e) main_video_pane

0x1414,	// (0x00066d1e) main_video_tele_pane

0x06bc,	// (0x00065fc6) main_viewer_pane_ParamLimits

0x06bc,	// (0x00065fc6) main_viewer_pane

0x1414,	// (0x00066d1e) main_vorec_pane

0xa6d6,	// (0x0006ffe0) popup_blid_sat_info_window_ParamLimits

0xa6d6,	// (0x0006ffe0) popup_blid_sat_info_window

0xa6ec,	// (0x0006fff6) popup_dyc_status_message_window_ParamLimits

0xa6ec,	// (0x0006fff6) popup_dyc_status_message_window

0xa6fa,	// (0x00070004) popup_grid_large_graphic_window_ParamLimits

0xa6fa,	// (0x00070004) popup_grid_large_graphic_window

0xa76e,	// (0x00070078) popup_loc_request_window_ParamLimits

0xa76e,	// (0x00070078) popup_loc_request_window

0xa7a2,	// (0x000700ac) popup_wml_address_window_ParamLimits

0xa7a2,	// (0x000700ac) popup_wml_address_window

0xa56a,	// (0x0006fe74) call_muted_g1

0xa229,	// (0x0006fb33) popup_call_audio_conf_window_ParamLimits

0xa229,	// (0x0006fb33) popup_call_audio_conf_window

0xa57a,	// (0x0006fe84) popup_call_audio_first_window_ParamLimits

0xa57a,	// (0x0006fe84) popup_call_audio_first_window

0xa5ba,	// (0x0006fec4) popup_call_audio_in_window_ParamLimits

0xa5ba,	// (0x0006fec4) popup_call_audio_in_window

0xa5de,	// (0x0006fee8) popup_call_audio_out_window_ParamLimits

0xa5de,	// (0x0006fee8) popup_call_audio_out_window

0xa600,	// (0x0006ff0a) popup_call_audio_second_window_ParamLimits

0xa600,	// (0x0006ff0a) popup_call_audio_second_window

0xa630,	// (0x0006ff3a) popup_call_audio_wait_window_ParamLimits

0xa630,	// (0x0006ff3a) popup_call_audio_wait_window

0xa651,	// (0x0006ff5b) popup_number_entry_window_ParamLimits

0xa651,	// (0x0006ff5b) popup_number_entry_window

0x0050,	// (0x0006595a) bg_popup_call_pane_cp05_ParamLimits

0x0050,	// (0x0006595a) bg_popup_call_pane_cp05

0x0070,	// (0x0006597a) popup_number_entry_window_t1

0x0083,	// (0x0006598d) popup_number_entry_window_t2

0x0095,	// (0x0006599f) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x000749f1) popup_number_entry_window_t

0x00a7,	// (0x000659b1) text_title_cp2

0x00ba,	// (0x000659c4) bg_popup_call_pane_cp_ParamLimits

0x00ba,	// (0x000659c4) bg_popup_call_pane_cp

0x00c8,	// (0x000659d2) call_thumbnail_pane

0x00d0,	// (0x000659da) popup_call_audio_in_window_g1_ParamLimits

0x00d0,	// (0x000659da) popup_call_audio_in_window_g1

0x00dc,	// (0x000659e6) popup_call_audio_in_window_g2_ParamLimits

0x00dc,	// (0x000659e6) popup_call_audio_in_window_g2

0x00e8,	// (0x000659f2) popup_call_audio_in_window_g3_ParamLimits

0x00e8,	// (0x000659f2) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x000749fa) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x000749fa) popup_call_audio_in_window_g

0x00f4,	// (0x000659fe) popup_call_audio_in_window_t1_ParamLimits

0x00f4,	// (0x000659fe) popup_call_audio_in_window_t1

0x010f,	// (0x00065a19) popup_call_audio_in_window_t2_ParamLimits

0x010f,	// (0x00065a19) popup_call_audio_in_window_t2

0x012a,	// (0x00065a34) popup_call_audio_in_window_t3_ParamLimits

0x012a,	// (0x00065a34) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00074a01) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00074a01) popup_call_audio_in_window_t

0x00ba,	// (0x000659c4) bg_popup_call_pane_cp01_ParamLimits

0x00ba,	// (0x000659c4) bg_popup_call_pane_cp01

0x00c8,	// (0x000659d2) call_thumbnail_pane_cp02

0x013d,	// (0x00065a47) call_type_pane_cp022

0x0145,	// (0x00065a4f) popup_call_audio_out_window_g1_ParamLimits

0x0145,	// (0x00065a4f) popup_call_audio_out_window_g1

0x0157,	// (0x00065a61) popup_call_audio_out_window_g2_ParamLimits

0x0157,	// (0x00065a61) popup_call_audio_out_window_g2

0x0163,	// (0x00065a6d) popup_call_audio_out_window_g3_ParamLimits

0x0163,	// (0x00065a6d) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x00074a08) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x00074a08) popup_call_audio_out_window_g

0x0175,	// (0x00065a7f) popup_call_audio_out_window_t1_ParamLimits

0x0175,	// (0x00065a7f) popup_call_audio_out_window_t1

0x018d,	// (0x00065a97) popup_call_audio_out_window_t2_ParamLimits

0x018d,	// (0x00065a97) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00074a0f) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00074a0f) popup_call_audio_out_window_t

0x01a2,	// (0x00065aac) bg_popup_call_pane_ParamLimits

0x01a2,	// (0x00065aac) bg_popup_call_pane

0x794d,	// (0x0006d257) call_thumbnail_pane_cp_ParamLimits

0x794d,	// (0x0006d257) call_thumbnail_pane_cp

0x0226,	// (0x00065b30) call_type_pane_cp01_ParamLimits

0x0226,	// (0x00065b30) call_type_pane_cp01

0x026a,	// (0x00065b74) popup_call_audio_first_window_g1_ParamLimits

0x026a,	// (0x00065b74) popup_call_audio_first_window_g1

0x02b6,	// (0x00065bc0) popup_call_audio_first_window_g2_ParamLimits

0x02b6,	// (0x00065bc0) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00074a14) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00074a14) popup_call_audio_first_window_g

0x02fa,	// (0x00065c04) popup_call_audio_first_window_t1_ParamLimits

0x02fa,	// (0x00065c04) popup_call_audio_first_window_t1

0x03a6,	// (0x00065cb0) popup_call_audio_first_window_t4_ParamLimits

0x03a6,	// (0x00065cb0) popup_call_audio_first_window_t4

0x0432,	// (0x00065d3c) popup_call_audio_first_window_t5_ParamLimits

0x0432,	// (0x00065d3c) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00074a19) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00074a19) popup_call_audio_first_window_t

0x0461,	// (0x00065d6b) bg_popup_call_pane_cp02

0x046b,	// (0x00065d75) call_type_pane_cp023

0x0473,	// (0x00065d7d) popup_call_audio_wait_window_g1

0x047b,	// (0x00065d85) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00074a20) popup_call_audio_wait_window_g

0x0483,	// (0x00065d8d) popup_call_audio_wait_window_t3

0x0491,	// (0x00065d9b) bg_popup_call_pane_cp03_ParamLimits

0x0491,	// (0x00065d9b) bg_popup_call_pane_cp03

0x04f1,	// (0x00065dfb) call_thumbnail_pane_cp011_ParamLimits

0x04f1,	// (0x00065dfb) call_thumbnail_pane_cp011

0x04fd,	// (0x00065e07) call_type_pane_cp034_ParamLimits

0x04fd,	// (0x00065e07) call_type_pane_cp034

0x0539,	// (0x00065e43) popup_call_audio_second_window_g1_ParamLimits

0x0539,	// (0x00065e43) popup_call_audio_second_window_g1

0x0575,	// (0x00065e7f) popup_call_audio_second_window_g2_ParamLimits

0x0575,	// (0x00065e7f) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00074a25) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00074a25) popup_call_audio_second_window_g

0x05b1,	// (0x00065ebb) popup_call_audio_second_window_t1_ParamLimits

0x05b1,	// (0x00065ebb) popup_call_audio_second_window_t1

0x0632,	// (0x00065f3c) popup_call_audio_second_window_t2_ParamLimits

0x0632,	// (0x00065f3c) popup_call_audio_second_window_t2

0x0668,	// (0x00065f72) popup_call_audio_second_window_t3_ParamLimits

0x0668,	// (0x00065f72) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00074a2a) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00074a2a) popup_call_audio_second_window_t

0x0461,	// (0x00065d6b) bg_popup_call_pane_cp04

0x069e,	// (0x00065fa8) list_conf_pane

0x06a6,	// (0x00065fb0) popup_call_audio_conf_window_t1

0x06b4,	// (0x00065fbe) call_thumbnail_pane_g1

0x06bc,	// (0x00065fc6) bg_pinb_pane_ParamLimits

0x06bc,	// (0x00065fc6) bg_pinb_pane

0x06ca,	// (0x00065fd4) find_pinb_pane

0x06d3,	// (0x00065fdd) listscroll_pinb_pane_ParamLimits

0x06d3,	// (0x00065fdd) listscroll_pinb_pane

0x06e2,	// (0x00065fec) pinb_bg_pane_g1

0x7971,	// (0x0006d27b) pinb_bg_pane_g2

0x797d,	// (0x0006d287) pinb_bg_pane_g3

0x7989,	// (0x0006d293) pinb_bg_pane_g4

0x7995,	// (0x0006d29f) pinb_bg_pane_g5

0x79a1,	// (0x0006d2ab) pinb_bg_pane_g6

0x79ac,	// (0x0006d2b6) pinb_bg_pane_g7

0x79b7,	// (0x0006d2c1) pinb_bg_pane_g8

0x79c2,	// (0x0006d2cc) pinb_bg_pane_g9

0x79cc,	// (0x0006d2d6) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00074a31) pinb_bg_pane_g

0x79e1,	// (0x0006d2eb) grid_pinb_pane

0x79ec,	// (0x0006d2f6) list_pinb_pane

0x79f7,	// (0x0006d301) scroll_pane_cp01_ParamLimits

0x79f7,	// (0x0006d301) scroll_pane_cp01

0x06f4,	// (0x00065ffe) find_pinb_pane_g1_ParamLimits

0x06f4,	// (0x00065ffe) find_pinb_pane_g1

0x070c,	// (0x00066016) find_pinb_pane_t1

0x071e,	// (0x00066028) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00074a4b) find_pinb_pane_t

0x0733,	// (0x0006603d) input_focus_pane_cp01_ParamLimits

0x0733,	// (0x0006603d) input_focus_pane_cp01

0x7a09,	// (0x0006d313) cell_pinb_pane_ParamLimits

0x7a09,	// (0x0006d313) cell_pinb_pane

0x7a3d,	// (0x0006d347) cell_pinb_pane_g1_ParamLimits

0x7a3d,	// (0x0006d347) cell_pinb_pane_g1

0x7a52,	// (0x0006d35c) cell_pinb_pane_g2_ParamLimits

0x7a52,	// (0x0006d35c) cell_pinb_pane_g2

0x073f,	// (0x00066049) cell_pinb_pane_g3_ParamLimits

0x073f,	// (0x00066049) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00074a50) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00074a50) cell_pinb_pane_g

0x0461,	// (0x00065d6b) grid_highlight_pane_cp01

0x7a5e,	// (0x0006d368) list_pinb_item_pane_ParamLimits

0x7a5e,	// (0x0006d368) list_pinb_item_pane

0x0461,	// (0x00065d6b) list_highlight_pane_cp02

0x074b,	// (0x00066055) list_pinb_item_pane_g1_ParamLimits

0x074b,	// (0x00066055) list_pinb_item_pane_g1

0x0758,	// (0x00066062) list_pinb_item_pane_g2_ParamLimits

0x0758,	// (0x00066062) list_pinb_item_pane_g2

0x7a8b,	// (0x0006d395) list_pinb_item_pane_g3_ParamLimits

0x7a8b,	// (0x0006d395) list_pinb_item_pane_g3

0x0764,	// (0x0006606e) list_pinb_item_pane_g4_ParamLimits

0x0764,	// (0x0006606e) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x00074a57) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x00074a57) list_pinb_item_pane_g

0x0770,	// (0x0006607a) list_pinb_item_pane_t1_ParamLimits

0x0770,	// (0x0006607a) list_pinb_item_pane_t1

0x7ab6,	// (0x0006d3c0) calc_display_pane

0x7ad4,	// (0x0006d3de) calc_paper_pane

0x7af0,	// (0x0006d3fa) grid_calc_pane

0x0461,	// (0x00065d6b) bg_list_pane_cp01

0x7b1c,	// (0x0006d426) clock_g1

0x7b24,	// (0x0006d42e) clock_g2

0x0001,

0xf156,	// (0x00074a60) clock_g

0x7b2e,	// (0x0006d438) clock_t1_ParamLimits

0x7b2e,	// (0x0006d438) clock_t1

0x7b43,	// (0x0006d44d) clock_t2_ParamLimits

0x7b43,	// (0x0006d44d) clock_t2

0x7b55,	// (0x0006d45f) clock_t3_ParamLimits

0x7b55,	// (0x0006d45f) clock_t3

0x7b67,	// (0x0006d471) clock_t4_ParamLimits

0x7b67,	// (0x0006d471) clock_t4

0x7b79,	// (0x0006d483) clock_t5_ParamLimits

0x7b79,	// (0x0006d483) clock_t5

0x7b8e,	// (0x0006d498) clock_t6_ParamLimits

0x7b8e,	// (0x0006d498) clock_t6

0x7ba0,	// (0x0006d4aa) clock_t7_ParamLimits

0x7ba0,	// (0x0006d4aa) clock_t7

0x7bb2,	// (0x0006d4bc) clock_t8_ParamLimits

0x7bb2,	// (0x0006d4bc) clock_t8

0x7bc8,	// (0x0006d4d2) clock_t9_ParamLimits

0x7bc8,	// (0x0006d4d2) clock_t9

0x0008,

0xf15b,	// (0x00074a65) clock_t_ParamLimits

0xf15b,	// (0x00074a65) clock_t

0x078f,	// (0x00066099) popup_clock_analogue_window_cp02

0x078f,	// (0x00066099) popup_clock_digital_window_cp01

0x0797,	// (0x000660a1) listscroll_help_pane

0x0461,	// (0x00065d6b) phob_pre_status_pane

0x07a1,	// (0x000660ab) grid_qdial_pane

0x0461,	// (0x00065d6b) listscroll_mce_pane

0x07ab,	// (0x000660b5) bg_notes_pane

0x07b9,	// (0x000660c3) list_notes_pane

0x7bde,	// (0x0006d4e8) scroll_pane_cp06

0x07c7,	// (0x000660d1) bg_calc_paper_pane

0x7bed,	// (0x0006d4f7) list_calc_pane

0x07ff,	// (0x00066109) bg_calc_display_pane

0x7c07,	// (0x0006d511) calc_display_pane_t1

0x7c1c,	// (0x0006d526) calc_display_pane_t2

0x7c31,	// (0x0006d53b) calc_display_pane_t3

0x0002,

0xf16e,	// (0x00074a78) calc_display_pane_t

0x7c43,	// (0x0006d54d) cell_calc_pane_ParamLimits

0x7c43,	// (0x0006d54d) cell_calc_pane

0x081d,	// (0x00066127) bg_calc_paper_pane_g1

0x0835,	// (0x0006613f) bg_calc_paper_pane_g2

0x0829,	// (0x00066133) bg_calc_paper_pane_g3

0x084d,	// (0x00066157) bg_calc_paper_pane_g4

0x0841,	// (0x0006614b) bg_calc_paper_pane_g5

0x7c70,	// (0x0006d57a) bg_calc_paper_pane_g6

0x7c81,	// (0x0006d58b) bg_calc_paper_pane_g7

0x7c92,	// (0x0006d59c) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x00074a7f) bg_calc_paper_pane_g

0x7ca3,	// (0x0006d5ad) calc_bg_paper_pane_g9

0x7cb4,	// (0x0006d5be) list_calc_item_pane_ParamLimits

0x7cb4,	// (0x0006d5be) list_calc_item_pane

0x0859,	// (0x00066163) list_calc_item_pane_g1

0x7cee,	// (0x0006d5f8) list_calc_item_pane_t1_ParamLimits

0x7cee,	// (0x0006d5f8) list_calc_item_pane_t1

0x7d00,	// (0x0006d60a) list_calc_item_pane_t2_ParamLimits

0x7d00,	// (0x0006d60a) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x00074a90) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x00074a90) list_calc_item_pane_t

0x0878,	// (0x00066182) cell_calc_pane_g1

0x0882,	// (0x0006618c) grid_highlight_pane_cp02

0x08b7,	// (0x000661c1) bg_calc_display_pane_g1

0x7d30,	// (0x0006d63a) bg_calc_display_pane_g2

0x08a4,	// (0x000661ae) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x00074a9a) bg_calc_display_pane_g

0x7d3a,	// (0x0006d644) cell_qdial_pane_ParamLimits

0x7d3a,	// (0x0006d644) cell_qdial_pane

0x7d4e,	// (0x0006d658) cell_qdial_pane_g1_ParamLimits

0x7d4e,	// (0x0006d658) cell_qdial_pane_g1

0x7d5b,	// (0x0006d665) cell_qdial_pane_g2_ParamLimits

0x7d5b,	// (0x0006d665) cell_qdial_pane_g2

0x08c0,	// (0x000661ca) cell_qdial_pane_g3_ParamLimits

0x08c0,	// (0x000661ca) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x00074aa1) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x00074aa1) cell_qdial_pane_g

0x7d79,	// (0x0006d683) cell_qdial_pane_t1_ParamLimits

0x7d79,	// (0x0006d683) cell_qdial_pane_t1

0x7d91,	// (0x0006d69b) cell_qdial_pane_t2_ParamLimits

0x7d91,	// (0x0006d69b) cell_qdial_pane_t2

0x7da4,	// (0x0006d6ae) cell_qdial_pane_t3_ParamLimits

0x7da4,	// (0x0006d6ae) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x00074aaa) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x00074aaa) cell_qdial_pane_t

0x0461,	// (0x00065d6b) grid_highlight_pane_cp04

0x08cc,	// (0x000661d6) thumbnail_qdial_pane_ParamLimits

0x08cc,	// (0x000661d6) thumbnail_qdial_pane

0x0928,	// (0x00066232) list_help_pane

0x0931,	// (0x0006623b) scroll_pane_cp02

0x7db7,	// (0x0006d6c1) help_list_pane_t1_ParamLimits

0x7db7,	// (0x0006d6c1) help_list_pane_t1

0x7df5,	// (0x0006d6ff) bg_notes_pane_g2

0x7dfd,	// (0x0006d707) bg_notes_pane_g3

0x7e05,	// (0x0006d70f) notes_bg_pane_g1

0x7e0d,	// (0x0006d717) notes_bg_pane_g4

0x7e15,	// (0x0006d71f) notes_bg_pane_g5

0x7e1d,	// (0x0006d727) notes_bg_pane_g6

0x7e25,	// (0x0006d72f) notes_bg_pane_g7

0x7e2d,	// (0x0006d737) notes_bg_pane_g8

0x7e35,	// (0x0006d73f) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x00074ac8) notes_bg_pane_g

0x7e3d,	// (0x0006d747) list_notes_text_pane_ParamLimits

0x7e3d,	// (0x0006d747) list_notes_text_pane

0x0982,	// (0x0006628c) list_notes_text_pane_g1

0x64df,	// (0x0006bde9) list_notes_text_pane_t1

0x07ff,	// (0x00066109) listscroll_cale_week_pane

0x7eae,	// (0x0006d7b8) bg_cale_heading_pane

0x099c,	// (0x000662a6) bg_cale_pane_cp01

0x7eca,	// (0x0006d7d4) cale_week_corner_pane

0x7edb,	// (0x0006d7e5) cale_week_day_heading_pane

0x7ef7,	// (0x0006d801) cale_week_scroll_pane_g1

0x7f10,	// (0x0006d81a) cale_week_scroll_pane_g2

0x7f21,	// (0x0006d82b) cale_week_scroll_pane_g3

0x7f32,	// (0x0006d83c) cale_week_scroll_pane_g4

0x7f43,	// (0x0006d84d) cale_week_scroll_pane_g5

0x7f54,	// (0x0006d85e) cale_week_scroll_pane_g6

0x7f65,	// (0x0006d86f) cale_week_scroll_pane_g7

0x7f78,	// (0x0006d882) cale_week_scroll_pane_g8

0x7f8b,	// (0x0006d895) cale_week_scroll_pane_g9

0x7f9c,	// (0x0006d8a6) cale_week_scroll_pane_g10

0x7fad,	// (0x0006d8b7) cale_week_scroll_pane_g11

0x7fbe,	// (0x0006d8c8) cale_week_scroll_pane_g12

0x7fd7,	// (0x0006d8e1) cale_week_scroll_pane_g13

0x7ff0,	// (0x0006d8fa) cale_week_scroll_pane_g14

0x8009,	// (0x0006d913) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x00074ad7) cale_week_scroll_pane_g

0x8022,	// (0x0006d92c) cale_week_time_pane

0x8035,	// (0x0006d93f) grid_cale_week_pane

0x8052,	// (0x0006d95c) scroll_pane_cp08

0x806c,	// (0x0006d976) cell_cale_week_pane_ParamLimits

0x806c,	// (0x0006d976) cell_cale_week_pane

0x80bc,	// (0x0006d9c6) cale_week_day_heading_pane_t1

0x80d0,	// (0x0006d9da) cale_week_day_heading_pane_t2

0x80e4,	// (0x0006d9ee) cale_week_day_heading_pane_t3

0x80f8,	// (0x0006da02) cale_week_day_heading_pane_t4

0x810c,	// (0x0006da16) cale_week_day_heading_pane_t5

0x8120,	// (0x0006da2a) cale_week_day_heading_pane_t6

0x8134,	// (0x0006da3e) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x00074af6) cale_week_day_heading_pane_t

0x09c7,	// (0x000662d1) bg_cale_side_pane

0x8148,	// (0x0006da52) cale_week_time_pane_t1

0x8160,	// (0x0006da6a) cale_week_time_pane_t2

0x8178,	// (0x0006da82) cale_week_time_pane_t3

0x8190,	// (0x0006da9a) cale_week_time_pane_t4

0x81a8,	// (0x0006dab2) cale_week_time_pane_t5

0x81c0,	// (0x0006daca) cale_week_time_pane_t6

0x81e0,	// (0x0006daea) cale_week_time_pane_t7

0x8200,	// (0x0006db0a) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x00074b05) cale_week_time_pane_t

0x8220,	// (0x0006db2a) cell_cale_week_pane_g2

0x8231,	// (0x0006db3b) cell_cale_week_pane_g3_ParamLimits

0x8231,	// (0x0006db3b) cell_cale_week_pane_g3

0x09d5,	// (0x000662df) grid_highlight_pane_cp07

0x09dd,	// (0x000662e7) listscroll_gms_pane

0x09e7,	// (0x000662f1) grid_gms_pane

0x09f0,	// (0x000662fa) listscroll_gms_pane_g1

0x09f8,	// (0x00066302) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x00074b16) listscroll_gms_pane_g

0x8249,	// (0x0006db53) scroll_pane_cp010

0x8254,	// (0x0006db5e) cell_gms_pane_ParamLimits

0x8254,	// (0x0006db5e) cell_gms_pane

0x8266,	// (0x0006db70) cell_gms_pane_g1

0x0a00,	// (0x0006630a) cell_gms_pane_g2

0x0982,	// (0x0006628c) cell_gms_pane_g3

0x0a08,	// (0x00066312) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00074b1b) cell_gms_pane_g

0x0a11,	// (0x0006631b) grid_highlight_pane_cp09

0xa512,	// (0x0006fe1c) phob_pre_status_pane_g1

0xa51a,	// (0x0006fe24) phob_pre_status_pane_g2

0xa522,	// (0x0006fe2c) phob_pre_status_pane_g3

0xa52a,	// (0x0006fe34) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00074f0a) phob_pre_status_pane_g

0xa53a,	// (0x0006fe44) phob_pre_status_pane_t1

0xa54a,	// (0x0006fe54) phob_pre_status_pane_t2

0xa55a,	// (0x0006fe64) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x00074f15) phob_pre_status_pane_t

0x0461,	// (0x00065d6b) bg_list_pane_cp05

0x8276,	// (0x0006db80) grid_vorec_pane

0x827e,	// (0x0006db88) vorec_t1

0x828c,	// (0x0006db96) vorec_t2

0x829a,	// (0x0006dba4) vorec_t3

0x82a8,	// (0x0006dbb2) vorec_t4

0x82b6,	// (0x0006dbc0) vorec_t5

0x82c4,	// (0x0006dbce) vorec_t6

0x0006,

0xf21a,	// (0x00074b24) vorec_t

0x82e0,	// (0x0006dbea) wait_bar_pane_cp01

0x0a93,	// (0x0006639d) cell_vorec_pane_ParamLimits

0x0a93,	// (0x0006639d) cell_vorec_pane

0x0aa6,	// (0x000663b0) cell_vorec_pane_g1

0x0461,	// (0x00065d6b) grid_highlight_pane_cp05

0x82f8,	// (0x0006dc02) cams_zoom_pane

0x8304,	// (0x0006dc0e) image_vga_pane

0x8313,	// (0x0006dc1d) main_camera_pane_g1

0x8321,	// (0x0006dc2b) main_camera_pane_g2

0x832f,	// (0x0006dc39) main_camera_pane_g3

0x833b,	// (0x0006dc45) main_camera_pane_g4

0x8347,	// (0x0006dc51) main_camera_pane_g5

0x8353,	// (0x0006dc5d) main_camera_pane_g6

0x835f,	// (0x0006dc69) main_camera_pane_g7

0x0007,

0xf229,	// (0x00074b33) main_camera_pane_g

0x836b,	// (0x0006dc75) main_camera_pane_t1

0x837d,	// (0x0006dc87) main_camera_pane_t2

0x0001,

0xf23a,	// (0x00074b44) main_camera_pane_t

0x839e,	// (0x0006dca8) cams_zoom_pane_cp_ParamLimits

0x839e,	// (0x0006dca8) cams_zoom_pane_cp

0x83c2,	// (0x0006dccc) image_cif_pane_ParamLimits

0x83c2,	// (0x0006dccc) image_cif_pane

0x83e0,	// (0x0006dcea) image_subqcif_pane

0x83e8,	// (0x0006dcf2) main_video_pane_g1_ParamLimits

0x83e8,	// (0x0006dcf2) main_video_pane_g1

0x8408,	// (0x0006dd12) main_video_pane_g2_ParamLimits

0x8408,	// (0x0006dd12) main_video_pane_g2

0x843a,	// (0x0006dd44) main_video_pane_g3_ParamLimits

0x843a,	// (0x0006dd44) main_video_pane_g3

0x8465,	// (0x0006dd6f) main_video_pane_g4_ParamLimits

0x8465,	// (0x0006dd6f) main_video_pane_g4

0x8490,	// (0x0006dd9a) main_video_pane_g5_ParamLimits

0x8490,	// (0x0006dd9a) main_video_pane_g5

0x0abc,	// (0x000663c6) main_video_pane_g6_ParamLimits

0x0abc,	// (0x000663c6) main_video_pane_g6

0x0006,

0xf23f,	// (0x00074b49) main_video_pane_g_ParamLimits

0xf23f,	// (0x00074b49) main_video_pane_g

0x84b4,	// (0x0006ddbe) main_video_pane_t1_ParamLimits

0x84b4,	// (0x0006ddbe) main_video_pane_t1

0x0ad6,	// (0x000663e0) cams_zoom_pane_g1

0x0adf,	// (0x000663e9) cams_zoom_pane_g2

0x0ae8,	// (0x000663f2) cams_zoom_pane_g3

0x0af1,	// (0x000663fb) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x00074b58) cams_zoom_pane_g

0x84fe,	// (0x0006de08) grid_cams_pane

0x850c,	// (0x0006de16) linegrid_cams_pane

0x851a,	// (0x0006de24) cell_cams_pane_ParamLimits

0x851a,	// (0x0006de24) cell_cams_pane

0x0afa,	// (0x00066404) cams_burst_image_pane

0x0b02,	// (0x0006640c) cell_cams_pane_g1

0x0461,	// (0x00065d6b) grid_highlight_pane_cp03

0x0878,	// (0x00066182) mp_bg_pane_g1

0x0461,	// (0x00065d6b) bg_list_pane_cp03

0x27a2,	// (0x000680ac) bg_mp_pane

0x27aa,	// (0x000680b4) grid_mp_pane

0x27b2,	// (0x000680bc) media_player_g1

0x27ba,	// (0x000680c4) media_player_t1

0x27c8,	// (0x000680d2) media_player_t2

0x27d6,	// (0x000680e0) media_player_t3

0x27e4,	// (0x000680ee) media_player_t4

0x27f2,	// (0x000680fc) media_player_t5

0x2800,	// (0x0006810a) media_player_t6

0x280e,	// (0x00068118) media_player_t7

0x0006,

0xf5ea,	// (0x00074ef4) media_player_t

0x281c,	// (0x00068126) wait_bar_pane_cp02

0xf5cf,	// (0x00074ed9) main_usb_pane_t

0xa509,	// (0x0006fe13) cell_mp_pane

0x0878,	// (0x00066182) cell_mp_pane_g1

0x0461,	// (0x00065d6b) grid_highlight_pane_cp06

0x0b0a,	// (0x00066414) grid_skin_colour_pane

0x0b12,	// (0x0006641c) list_highlight_pane_cp03

0x852d,	// (0x0006de37) skin_g1

0x0b1a,	// (0x00066424) skin_t1

0x0b29,	// (0x00066433) skin_t2

0x0001,

0xf283,	// (0x00074b8d) skin_t

0x8537,	// (0x0006de41) cell_skin_colour_pane_ParamLimits

0x8537,	// (0x0006de41) cell_skin_colour_pane

0x0b37,	// (0x00066441) cell_skin_colour_pane_g1

0x85bb,	// (0x0006dec5) call_video_g1_ParamLimits

0x85bb,	// (0x0006dec5) call_video_g1

0x85cb,	// (0x0006ded5) call_video_g2_ParamLimits

0x85cb,	// (0x0006ded5) call_video_g2

0x0001,

0xf288,	// (0x00074b92) call_video_g_ParamLimits

0xf288,	// (0x00074b92) call_video_g

0x8625,	// (0x0006df2f) call_video_uplink_pane_cp1_ParamLimits

0x8625,	// (0x0006df2f) call_video_uplink_pane_cp1

0x0b49,	// (0x00066453) call_video_uplink_pane_cp2

0x86f1,	// (0x0006dffb) video_down_crop_pane_ParamLimits

0x86f1,	// (0x0006dffb) video_down_crop_pane

0x87e3,	// (0x0006e0ed) video_down_pane_ParamLimits

0x87e3,	// (0x0006e0ed) video_down_pane

0x0b51,	// (0x0006645b) video_down_subqcif_pane_ParamLimits

0x0b51,	// (0x0006645b) video_down_subqcif_pane

0x0b69,	// (0x00066473) video_down_subqcif_pane_cp_ParamLimits

0x0b69,	// (0x00066473) video_down_subqcif_pane_cp

0x0b8f,	// (0x00066499) im_reading_pane_ParamLimits

0x0b8f,	// (0x00066499) im_reading_pane

0x8905,	// (0x0006e20f) im_writing_pane_ParamLimits

0x8905,	// (0x0006e20f) im_writing_pane

0x8923,	// (0x0006e22d) im_reading_pane_t1

0x0ba9,	// (0x000664b3) list_im_pane

0x0bba,	// (0x000664c4) scroll_pane_cp07

0x8983,	// (0x0006e28d) im_writing_pane_t1_ParamLimits

0x8983,	// (0x0006e28d) im_writing_pane_t1

0x0bd3,	// (0x000664dd) im_writing_pane_t2_ParamLimits

0x0bd3,	// (0x000664dd) im_writing_pane_t2

0x0001,

0xf292,	// (0x00074b9c) im_writing_pane_t_ParamLimits

0xf292,	// (0x00074b9c) im_writing_pane_t

0x0461,	// (0x00065d6b) input_focus_pane_cp04

0x0461,	// (0x00065d6b) input_focus_pane_cp05

0x8995,	// (0x0006e29f) list_im_single_pane_ParamLimits

0x8995,	// (0x0006e29f) list_im_single_pane

0x89c1,	// (0x0006e2cb) list_single_im_pane_t1

0xa4cd,	// (0x0006fdd7) blid_accuracy_pane

0xa4d5,	// (0x0006fddf) blid_compass_pane

0xa4df,	// (0x0006fde9) main_location_t1

0xa4ed,	// (0x0006fdf7) main_location_t2

0xa4fb,	// (0x0006fe05) main_location_t3

0x0002,

0xf5f9,	// (0x00074f03) main_location_t

0x0461,	// (0x00065d6b) aid_levels_location

0x0878,	// (0x00066182) blid_accuracy_pane_g1

0x0878,	// (0x00066182) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00074bfe) blid_accuracy_pane_g

0x0c1b,	// (0x00066525) wml_content_pane

0x0c59,	// (0x00066563) wml_button_pane_ParamLimits

0x0c59,	// (0x00066563) wml_button_pane

0x89d0,	// (0x0006e2da) wml_list_single_large_pane_ParamLimits

0x89d0,	// (0x0006e2da) wml_list_single_large_pane

0x8a02,	// (0x0006e30c) wml_list_single_medium_pane_ParamLimits

0x8a02,	// (0x0006e30c) wml_list_single_medium_pane

0x8a3b,	// (0x0006e345) wml_list_single_small_pane_ParamLimits

0x8a3b,	// (0x0006e345) wml_list_single_small_pane

0x0c6d,	// (0x00066577) wml_selection_box_pane_ParamLimits

0x0c6d,	// (0x00066577) wml_selection_box_pane

0x0c80,	// (0x0006658a) wml_list_single_pane_t1

0x0c8f,	// (0x00066599) wml_list_single_medium_pane_t1

0x0c9e,	// (0x000665a8) wml_list_single_large_pane_t1

0x0cad,	// (0x000665b7) input_focus_pane_cp02_ParamLimits

0x0cad,	// (0x000665b7) input_focus_pane_cp02

0x0cc0,	// (0x000665ca) wml_selection_box_pane_g1

0x0cc9,	// (0x000665d3) wml_selection_box_pane_t1_ParamLimits

0x0cc9,	// (0x000665d3) wml_selection_box_pane_t1

0x06bc,	// (0x00065fc6) bg_wml_button_pane_ParamLimits

0x06bc,	// (0x00065fc6) bg_wml_button_pane

0x0ce1,	// (0x000665eb) wml_button_pane_g1

0x0ce9,	// (0x000665f3) wml_button_pane_t1

0x0ce1,	// (0x000665eb) wml_button_bg_pane_g1

0x0cf9,	// (0x00066603) wml_button_bg_pane_g2

0x0d01,	// (0x0006660b) wml_button_bg_pane_g3

0x0d09,	// (0x00066613) wml_button_bg_pane_g4

0x0d11,	// (0x0006661b) wml_button_bg_pane_g5

0x0d19,	// (0x00066623) wml_button_bg_pane_g6

0x0d21,	// (0x0006662b) wml_button_bg_pane_g7

0x0d29,	// (0x00066633) wml_button_bg_pane_g8

0x0d31,	// (0x0006663b) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x00074ba1) wml_button_bg_pane_g

0x8a83,	// (0x0006e38d) bg_list_pane_cp02

0x0d39,	// (0x00066643) mce_header_pane_ParamLimits

0x0d39,	// (0x00066643) mce_header_pane

0x0d4f,	// (0x00066659) mce_icon_pane

0x0d4f,	// (0x00066659) mce_image_pane

0x0d58,	// (0x00066662) mce_text_pane_ParamLimits

0x0d58,	// (0x00066662) mce_text_pane

0x8a8d,	// (0x0006e397) scroll_pane_cp03

0x0c51,	// (0x0006655b) scroll_pane_cp04

0x0d6b,	// (0x00066675) scroll_pane_cp05_ParamLimits

0x0d6b,	// (0x00066675) scroll_pane_cp05

0x8a97,	// (0x0006e3a1) mce_header_field_pane_ParamLimits

0x8a97,	// (0x0006e3a1) mce_header_field_pane

0x8ab7,	// (0x0006e3c1) mce_header_field_pane_2_ParamLimits

0x8ab7,	// (0x0006e3c1) mce_header_field_pane_2

0x8acd,	// (0x0006e3d7) mce_header_field_pane_3

0x8ad5,	// (0x0006e3df) list_single_mce_message_pane_ParamLimits

0x8ad5,	// (0x0006e3df) list_single_mce_message_pane

0x8b05,	// (0x0006e40f) list_single_mce_smart_pane_ParamLimits

0x8b05,	// (0x0006e40f) list_single_mce_smart_pane

0x0d77,	// (0x00066681) input_focus_pane_cp03

0x0d80,	// (0x0006668a) list_header_data_pane

0x8b40,	// (0x0006e44a) mce_header_field_pane_t1

0x8b50,	// (0x0006e45a) list_single_mce_header_pane_ParamLimits

0x8b50,	// (0x0006e45a) list_single_mce_header_pane

0x0d88,	// (0x00066692) list_single_mce_header_pane_t1

0x0d97,	// (0x000666a1) list_single_mce_message_pane_g1

0x0d9f,	// (0x000666a9) list_single_mce_message_pane_t1

0x8ba2,	// (0x0006e4ac) bg_cale_heading_pane_cp01_ParamLimits

0x8ba2,	// (0x0006e4ac) bg_cale_heading_pane_cp01

0x0dad,	// (0x000666b7) bg_cale_pane_cp02_ParamLimits

0x0dad,	// (0x000666b7) bg_cale_pane_cp02

0x8bd5,	// (0x0006e4df) cale_month_corner_pane

0x8beb,	// (0x0006e4f5) cale_month_day_heading_pane_ParamLimits

0x8beb,	// (0x0006e4f5) cale_month_day_heading_pane

0x8c2e,	// (0x0006e538) cale_month_pane_g1_ParamLimits

0x8c2e,	// (0x0006e538) cale_month_pane_g1

0x8c5a,	// (0x0006e564) cale_month_pane_g2_ParamLimits

0x8c5a,	// (0x0006e564) cale_month_pane_g2

0x8c7d,	// (0x0006e587) cale_month_pane_g3_ParamLimits

0x8c7d,	// (0x0006e587) cale_month_pane_g3

0x8cb9,	// (0x0006e5c3) cale_month_pane_g4_ParamLimits

0x8cb9,	// (0x0006e5c3) cale_month_pane_g4

0x8cf5,	// (0x0006e5ff) cale_month_pane_g5_ParamLimits

0x8cf5,	// (0x0006e5ff) cale_month_pane_g5

0x8d31,	// (0x0006e63b) cale_month_pane_g6_ParamLimits

0x8d31,	// (0x0006e63b) cale_month_pane_g6

0x8d6d,	// (0x0006e677) cale_month_pane_g7_ParamLimits

0x8d6d,	// (0x0006e677) cale_month_pane_g7

0x8db9,	// (0x0006e6c3) cale_month_pane_g8_ParamLimits

0x8db9,	// (0x0006e6c3) cale_month_pane_g8

0x8e05,	// (0x0006e70f) cale_month_pane_g9_ParamLimits

0x8e05,	// (0x0006e70f) cale_month_pane_g9

0x8e4b,	// (0x0006e755) cale_month_pane_g10_ParamLimits

0x8e4b,	// (0x0006e755) cale_month_pane_g10

0x8e91,	// (0x0006e79b) cale_month_pane_g11_ParamLimits

0x8e91,	// (0x0006e79b) cale_month_pane_g11

0x8ecf,	// (0x0006e7d9) cale_month_pane_g12_ParamLimits

0x8ecf,	// (0x0006e7d9) cale_month_pane_g12

0x8f0d,	// (0x0006e817) cale_month_pane_g13_ParamLimits

0x8f0d,	// (0x0006e817) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x00074bb4) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x00074bb4) cale_month_pane_g

0x8f4b,	// (0x0006e855) cale_month_week_pane

0x8f5e,	// (0x0006e868) grid_cale_month_pane_ParamLimits

0x8f5e,	// (0x0006e868) grid_cale_month_pane

0x8f9c,	// (0x0006e8a6) cale_month_day_heading_pane_t1

0x8ffa,	// (0x0006e904) cale_month_day_heading_pane_t2

0x905f,	// (0x0006e969) cale_month_day_heading_pane_t3

0x90c4,	// (0x0006e9ce) cale_month_day_heading_pane_t4

0x9129,	// (0x0006ea33) cale_month_day_heading_pane_t5

0x918e,	// (0x0006ea98) cale_month_day_heading_pane_t6

0x91fb,	// (0x0006eb05) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x00074bcf) cale_month_day_heading_pane_t

0x09c7,	// (0x000662d1) bg_cale_side_pane_cp01

0x9270,	// (0x0006eb7a) cale_month_week_pane_t1

0x9287,	// (0x0006eb91) cale_month_week_pane_t2

0x929e,	// (0x0006eba8) cale_month_week_pane_t3

0x92b5,	// (0x0006ebbf) cale_month_week_pane_t4

0x92cc,	// (0x0006ebd6) cale_month_week_pane_t5

0x92eb,	// (0x0006ebf5) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x00074bde) cale_month_week_pane_t

0x930a,	// (0x0006ec14) cell_cale_month_pane_ParamLimits

0x930a,	// (0x0006ec14) cell_cale_month_pane

0x93d8,	// (0x0006ece2) cell_cale_month_pane_g1

0x93e4,	// (0x0006ecee) cell_cale_month_pane_t1_ParamLimits

0x93e4,	// (0x0006ecee) cell_cale_month_pane_t1

0x09d5,	// (0x000662df) grid_highlight_pane_cp08

0x0878,	// (0x00066182) main_smil_g1

0x9400,	// (0x0006ed0a) smil_status_pane

0x0dee,	// (0x000666f8) smil_text_pane

0x26ba,	// (0x00067fc4) bg_popup_call3_rect_pane_g8

0x26c2,	// (0x00067fcc) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x00074e97) bg_popup_call3_rect_pane_g

0x2957,	// (0x00068261) smil_status_volume_pane_g1

0x0df8,	// (0x00066702) smil_status_pane_t1

0xa8c1,	// (0x000701cb) volume_smil_pane

0x0e0f,	// (0x00066719) list_smil_text_pane

0x9413,	// (0x0006ed1d) scroll_pane_cp011

0x941e,	// (0x0006ed28) smil_text_list_pane_t1_ParamLimits

0x941e,	// (0x0006ed28) smil_text_list_pane_t1

0x94c9,	// (0x0006edd3) aid_volume_smil_ParamLimits

0x94c9,	// (0x0006edd3) aid_volume_smil

0x0878,	// (0x00066182) smil_volume_pane_g1

0x0878,	// (0x00066182) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00074bfe) smil_volume_pane_g

0x07ff,	// (0x00066109) listscroll_cale_day_pane

0x0e3b,	// (0x00066745) bg_cale_pane

0x0e53,	// (0x0006675d) list_cale_pane

0x0e64,	// (0x0006676e) scroll_pane_cp09

0x0e75,	// (0x0006677f) cale_bg_pane_g1

0x0e7d,	// (0x00066787) cale_bg_pane_g2

0x0e85,	// (0x0006678f) cale_bg_pane_g3

0x0e8d,	// (0x00066797) cale_bg_pane_g4

0x0e95,	// (0x0006679f) cale_bg_pane_g5

0x0e9d,	// (0x000667a7) cale_bg_pane_g6

0x0ea5,	// (0x000667af) cale_bg_pane_g7

0x0ead,	// (0x000667b7) cale_bg_pane_g8

0x0eb5,	// (0x000667bf) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00074c03) cale_bg_pane_g

0x94eb,	// (0x0006edf5) list_cale_time_pane_ParamLimits

0x94eb,	// (0x0006edf5) list_cale_time_pane

0x950c,	// (0x0006ee16) list_cale_time_pane_g1_ParamLimits

0x950c,	// (0x0006ee16) list_cale_time_pane_g1

0x0ebd,	// (0x000667c7) list_cale_time_pane_g2_ParamLimits

0x0ebd,	// (0x000667c7) list_cale_time_pane_g2

0x9518,	// (0x0006ee22) list_cale_time_pane_g3_ParamLimits

0x9518,	// (0x0006ee22) list_cale_time_pane_g3

0x9534,	// (0x0006ee3e) list_cale_time_pane_g4_ParamLimits

0x9534,	// (0x0006ee3e) list_cale_time_pane_g4

0x9542,	// (0x0006ee4c) list_cale_time_pane_g5_ParamLimits

0x9542,	// (0x0006ee4c) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00074c16) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00074c16) list_cale_time_pane_g

0x9550,	// (0x0006ee5a) list_cale_time_pane_t1_ParamLimits

0x9550,	// (0x0006ee5a) list_cale_time_pane_t1

0x9578,	// (0x0006ee82) list_cale_time_pane_t2_ParamLimits

0x9578,	// (0x0006ee82) list_cale_time_pane_t2

0x9878,	// (0x0006f182) aid_blid_cardinal_pane

0x98ba,	// (0x0006f1c4) compass_pane_t4

0x95a0,	// (0x0006eeaa) list_cale_time_pane_t4_ParamLimits

0x95a0,	// (0x0006eeaa) list_cale_time_pane_t4

0x98c8,	// (0x0006f1d2) compass_pane_t5

0x98d8,	// (0x0006f1e2) compass_pane_t6

0x98e6,	// (0x0006f1f0) compass_pane_t7

0x1366,	// (0x00066c70) navi_pane_cc_t1

0x14cd,	// (0x00066dd7) aid_phob_thumbnail_center_pane

0x9fc3,	// (0x0006f8cd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00074c23) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00074c23) list_cale_time_pane_t

0x00ba,	// (0x000659c4) bg_popup_window_pane_cp02_ParamLimits

0x00ba,	// (0x000659c4) bg_popup_window_pane_cp02

0x0ed7,	// (0x000667e1) heading_pane_cp01_ParamLimits

0x0ed7,	// (0x000667e1) heading_pane_cp01

0x0ee3,	// (0x000667ed) loc_req_pane_ParamLimits

0x0ee3,	// (0x000667ed) loc_req_pane

0x0ef3,	// (0x000667fd) loc_type_pane_ParamLimits

0x0ef3,	// (0x000667fd) loc_type_pane

0x0f05,	// (0x0006680f) loc_type_pane_t1_ParamLimits

0x0f05,	// (0x0006680f) loc_type_pane_t1

0x0f17,	// (0x00066821) loc_type_pane_t2_ParamLimits

0x0f17,	// (0x00066821) loc_type_pane_t2

0x0f29,	// (0x00066833) loc_type_pane_t3_ParamLimits

0x0f29,	// (0x00066833) loc_type_pane_t3

0x0002,

0xf320,	// (0x00074c2a) loc_type_pane_t_ParamLimits

0xf320,	// (0x00074c2a) loc_type_pane_t

0x0f3b,	// (0x00066845) list_loc_req_pane

0x0f45,	// (0x0006684f) scroll_pane_cp012

0x95c8,	// (0x0006eed2) list_single_loc_request_popup_menu_pane_ParamLimits

0x95c8,	// (0x0006eed2) list_single_loc_request_popup_menu_pane

0x0f50,	// (0x0006685a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0f50,	// (0x0006685a) list_single_loc_request_popup_menu_pane_g1

0x0f5c,	// (0x00066866) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0f5c,	// (0x00066866) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00074c31) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00074c31) list_single_loc_request_popup_menu_pane_g

0x0f68,	// (0x00066872) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0f68,	// (0x00066872) list_single_loc_request_popup_menu_pane_t1

0x95da,	// (0x0006eee4) bg_popup_window_pane_cp03_ParamLimits

0x95da,	// (0x0006eee4) bg_popup_window_pane_cp03

0x95e8,	// (0x0006eef2) heading_loc_req_pane_ParamLimits

0x95e8,	// (0x0006eef2) heading_loc_req_pane

0x95f4,	// (0x0006eefe) popup_dyc_status_message_window_g1_ParamLimits

0x95f4,	// (0x0006eefe) popup_dyc_status_message_window_g1

0x9600,	// (0x0006ef0a) popup_dyc_status_message_window_t1_ParamLimits

0x9600,	// (0x0006ef0a) popup_dyc_status_message_window_t1

0x9612,	// (0x0006ef1c) popup_dyc_status_message_window_t2_ParamLimits

0x9612,	// (0x0006ef1c) popup_dyc_status_message_window_t2

0x9624,	// (0x0006ef2e) popup_dyc_status_message_window_t3_ParamLimits

0x9624,	// (0x0006ef2e) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00074c36) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00074c36) popup_dyc_status_message_window_t

0x0461,	// (0x00065d6b) bg_heading_pane_cp01

0x0f8a,	// (0x00066894) heading_loc_req_pane_g1

0x0f92,	// (0x0006689c) heading_loc_req_pane_g2

0x0f9a,	// (0x000668a4) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00074c3d) heading_loc_req_pane_g

0x0fa2,	// (0x000668ac) heading_loc_req_pane_t1

0x0fb1,	// (0x000668bb) bg_popup_sub_pane_cp01_ParamLimits

0x0fb1,	// (0x000668bb) bg_popup_sub_pane_cp01

0x0fbf,	// (0x000668c9) popup_cale_events_window_g1_ParamLimits

0x0fbf,	// (0x000668c9) popup_cale_events_window_g1

0x0fdf,	// (0x000668e9) popup_cale_events_window_g2_ParamLimits

0x0fdf,	// (0x000668e9) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x00074c71) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x00074c71) popup_cale_events_window_g

0x0fff,	// (0x00066909) popup_cale_events_window_t1_ParamLimits

0x0fff,	// (0x00066909) popup_cale_events_window_t1

0x1011,	// (0x0006691b) popup_cale_events_window_t2_ParamLimits

0x1011,	// (0x0006691b) popup_cale_events_window_t2

0x104f,	// (0x00066959) popup_cale_events_window_t3_ParamLimits

0x104f,	// (0x00066959) popup_cale_events_window_t3

0x1089,	// (0x00066993) popup_cale_events_window_t4_ParamLimits

0x1089,	// (0x00066993) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x00074c76) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x00074c76) popup_cale_events_window_t

0x964e,	// (0x0006ef58) call_type_pane

0x14e5,	// (0x00066def) popup_call_status_window_g1

0x965a,	// (0x0006ef64) popup_call_status_window_g2

0x9666,	// (0x0006ef70) popup_call_status_window_g3

0x0002,

0xf375,	// (0x00074c7f) popup_call_status_window_g

0x10bf,	// (0x000669c9) call_type_pane_g1

0x10c8,	// (0x000669d2) call_type_pane_g2

0x0001,

0xf37c,	// (0x00074c86) call_type_pane_g

0x0461,	// (0x00065d6b) bg_popup_sub_pane_cp02

0x10d1,	// (0x000669db) listscroll_popup_wml_pane

0x10d9,	// (0x000669e3) list_wml_pane

0x10e3,	// (0x000669ed) scroll_pane_cp013

0x10ee,	// (0x000669f8) list_single_graphic_popup_wml_pane_ParamLimits

0x10ee,	// (0x000669f8) list_single_graphic_popup_wml_pane

0x0878,	// (0x00066182) list_single_graphic_popup_wml_pane_g1

0x1102,	// (0x00066a0c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x00074c8b) list_single_graphic_popup_wml_pane_g

0x110a,	// (0x00066a14) list_single_graphic_popup_wml_pane_t1

0x1118,	// (0x00066a22) aid_call_pane

0x06b4,	// (0x00065fbe) popup_clock_analogue_window_g1

0x06b4,	// (0x00065fbe) popup_clock_analogue_window_g2

0x9672,	// (0x0006ef7c) popup_clock_analogue_window_g3

0x9672,	// (0x0006ef7c) popup_clock_analogue_window_g4

0x0878,	// (0x00066182) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x00074c90) popup_clock_analogue_window_g

0x967a,	// (0x0006ef84) popup_clock_analogue_window_t1

0x9688,	// (0x0006ef92) clock_digital_number_pane_ParamLimits

0x9688,	// (0x0006ef92) clock_digital_number_pane

0x9694,	// (0x0006ef9e) clock_digital_number_pane_cp02_ParamLimits

0x9694,	// (0x0006ef9e) clock_digital_number_pane_cp02

0x96a0,	// (0x0006efaa) clock_digital_number_pane_cp03_ParamLimits

0x96a0,	// (0x0006efaa) clock_digital_number_pane_cp03

0x96ac,	// (0x0006efb6) clock_digital_number_pane_cp04_ParamLimits

0x96ac,	// (0x0006efb6) clock_digital_number_pane_cp04

0x96b8,	// (0x0006efc2) clock_digital_separator_pane_ParamLimits

0x96b8,	// (0x0006efc2) clock_digital_separator_pane

0x96c4,	// (0x0006efce) popup_clock_digital_window_t1

0x0878,	// (0x00066182) clock_digital_number_pane_g1

0x0878,	// (0x00066182) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00074bfe) clock_digital_number_pane_g

0x0878,	// (0x00066182) clock_digital_separator_pane_g1

0x0878,	// (0x00066182) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00074bfe) clock_digital_separator_pane_g

0x0461,	// (0x00065d6b) bg_popup_window_pane_cp04

0x1197,	// (0x00066aa1) heading_pane_cp03

0x119f,	// (0x00066aa9) listscroll_popup_gms_pane

0x11a7,	// (0x00066ab1) grid_large_graphic_popup_pane

0x11b1,	// (0x00066abb) listscroll_popup_gms_pane_g1

0x11b9,	// (0x00066ac3) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x00074c9b) listscroll_popup_gms_pane_g

0x0c51,	// (0x0006655b) scroll_pane_cp014

0x11c1,	// (0x00066acb) cell_large_graphic_popup_pane_ParamLimits

0x11c1,	// (0x00066acb) cell_large_graphic_popup_pane

0x11d9,	// (0x00066ae3) cell_large_graphic_popup_pane_g1_ParamLimits

0x11d9,	// (0x00066ae3) cell_large_graphic_popup_pane_g1

0x11e5,	// (0x00066aef) cell_large_graphic_popup_pane_g2_ParamLimits

0x11e5,	// (0x00066aef) cell_large_graphic_popup_pane_g2

0x11f1,	// (0x00066afb) cell_large_graphic_popup_pane_g3_ParamLimits

0x11f1,	// (0x00066afb) cell_large_graphic_popup_pane_g3

0x11fe,	// (0x00066b08) cell_large_graphic_popup_pane_g4_ParamLimits

0x11fe,	// (0x00066b08) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x00074ca0) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x00074ca0) cell_large_graphic_popup_pane_g

0x120e,	// (0x00066b18) grid_highlight_pane_cp010

0x0878,	// (0x00066182) bg_popup_call_pane_g1

0x1218,	// (0x00066b22) list_single_graphic_popup_conf_pane_ParamLimits

0x1218,	// (0x00066b22) list_single_graphic_popup_conf_pane

0x122a,	// (0x00066b34) list_highlight_pane_cp01

0x1233,	// (0x00066b3d) list_single_graphic_popup_conf_pane_g1

0x123b,	// (0x00066b45) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x00074ca9) list_single_graphic_popup_conf_pane_g

0x1243,	// (0x00066b4d) list_single_graphic_popup_conf_pane_t1

0x1251,	// (0x00066b5b) linegrid_cams_pane_g1

0x96e1,	// (0x0006efeb) linegrid_cams_pane_g2

0x0982,	// (0x0006628c) linegrid_cams_pane_g3

0x125a,	// (0x00066b64) linegrid_cams_pane_g4

0x96ea,	// (0x0006eff4) linegrid_cams_pane_g5

0x96f3,	// (0x0006effd) linegrid_cams_pane_g6

0x0a08,	// (0x00066312) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x00074cae) linegrid_cams_pane_g

0x1263,	// (0x00066b6d) popup_clock_analogue_window

0x1263,	// (0x00066b6d) popup_clock_digital_window

0x0461,	// (0x00065d6b) popup_phob_thumbnail_window

0x0878,	// (0x00066182) call_video_uplink_pane_g1

0x126c,	// (0x00066b76) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00074cbd) call_video_uplink_pane_g

0x09d5,	// (0x000662df) video_uplink_pane

0x1274,	// (0x00066b7e) mce_image_pane_g1

0x96fc,	// (0x0006f006) mce_image_pane_g2

0x9704,	// (0x0006f00e) mce_image_pane_g3

0x970c,	// (0x0006f016) mce_image_pane_g4

0x9714,	// (0x0006f01e) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x00074cc2) mce_image_pane_g

0x127e,	// (0x00066b88) control_top_pane_stacon_cp01_ParamLimits

0x127e,	// (0x00066b88) control_top_pane_stacon_cp01

0x1292,	// (0x00066b9c) uni_indicator_pane_stacon_cp01_ParamLimits

0x1292,	// (0x00066b9c) uni_indicator_pane_stacon_cp01

0x12a3,	// (0x00066bad) bg_popup_sub_pane_cp03

0x971c,	// (0x0006f026) chi_dic_find_pane

0x9724,	// (0x0006f02e) listscroll_chi_dic_pane

0x972d,	// (0x0006f037) main_pane_chidic_g1

0x9740,	// (0x0006f04a) chi_dic_find_pane_t1

0x12ad,	// (0x00066bb7) find_chidic_pane

0x12b6,	// (0x00066bc0) chi_dic_list_pane_ParamLimits

0x12b6,	// (0x00066bc0) chi_dic_list_pane

0x12c7,	// (0x00066bd1) scroll_pane_cp020

0x974e,	// (0x0006f058) find_chidic_pane_t1

0x0461,	// (0x00065d6b) input_focus_pane_cp06

0x975d,	// (0x0006f067) list_chi_dic_pane_ParamLimits

0x975d,	// (0x0006f067) list_chi_dic_pane

0x12cf,	// (0x00066bd9) list_chi_dic_pane_t1_ParamLimits

0x12cf,	// (0x00066bd9) list_chi_dic_pane_t1

0x0461,	// (0x00065d6b) list_highlight_pane_cp020

0x12e2,	// (0x00066bec) bg_cale_heading_pane_g1

0x977e,	// (0x0006f088) bg_cale_heading_pane_g2

0x9786,	// (0x0006f090) bg_cale_heading_pane_g3

0x978e,	// (0x0006f098) bg_cale_heading_pane_g4

0x9798,	// (0x0006f0a2) bg_cale_heading_pane_g5

0x97a2,	// (0x0006f0ac) bg_cale_heading_pane_g6

0x97aa,	// (0x0006f0b4) bg_cale_heading_pane_g7

0x97b2,	// (0x0006f0bc) bg_cale_heading_pane_g8

0x97bc,	// (0x0006f0c6) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00074ccd) bg_cale_heading_pane_g

0x12e2,	// (0x00066bec) bg_cale_side_pane_g1

0x97c6,	// (0x0006f0d0) bg_cale_side_pane_g2

0x97d0,	// (0x0006f0da) bg_cale_side_pane_g3

0x97da,	// (0x0006f0e4) bg_cale_side_pane_g4

0x97e4,	// (0x0006f0ee) bg_cale_side_pane_g5

0x97ee,	// (0x0006f0f8) bg_cale_side_pane_g6

0x97f8,	// (0x0006f102) bg_cale_side_pane_g7

0x9802,	// (0x0006f10c) bg_cale_side_pane_g8

0x980a,	// (0x0006f114) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00074ce0) bg_cale_side_pane_g

0x9812,	// (0x0006f11c) popup_call_status_window_ParamLimits

0x9812,	// (0x0006f11c) popup_call_status_window

0x12ea,	// (0x00066bf4) stacon_top_pane

0x12f2,	// (0x00066bfc) status_pane_ParamLimits

0x12f2,	// (0x00066bfc) status_pane

0x1307,	// (0x00066c11) status_small_pane

0x130f,	// (0x00066c19) control_pane

0x0461,	// (0x00065d6b) stacon_bottom_pane

0x1317,	// (0x00066c21) list_single_mce_smart_pane_t1_ParamLimits

0x1317,	// (0x00066c21) list_single_mce_smart_pane_t1

0x132a,	// (0x00066c34) list_single_mce_smart_pane_t2_ParamLimits

0x132a,	// (0x00066c34) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00074cf3) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00074cf3) list_single_mce_smart_pane_t

0x981e,	// (0x0006f128) compass_pane

0x982a,	// (0x0006f134) main_location2_pane_t1

0x983e,	// (0x0006f148) main_location2_pane_t2

0x9852,	// (0x0006f15c) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00074cf8) main_location2_pane_t

0x1349,	// (0x00066c53) compass_pane_g1_ParamLimits

0x1349,	// (0x00066c53) compass_pane_g1

0x989c,	// (0x0006f1a6) compass_pane_t1

0x98ab,	// (0x0006f1b5) compass_pane_t2

0x0005,

0xf3f7,	// (0x00074d01) compass_pane_t

0x98f6,	// (0x0006f200) text_secondary_cp61

0x135d,	// (0x00066c67) navi_pane_cams_g5

0x1380,	// (0x00066c8a) navi_pane_im_t1

0x138e,	// (0x00066c98) navi_pane_mp_g1_ParamLimits

0x138e,	// (0x00066c98) navi_pane_mp_g1

0x13a2,	// (0x00066cac) navi_pane_mp_g2_ParamLimits

0x13a2,	// (0x00066cac) navi_pane_mp_g2

0x13ae,	// (0x00066cb8) navi_pane_mp_g3_ParamLimits

0x13ae,	// (0x00066cb8) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00074d15) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00074d15) navi_pane_mp_g

0x13ba,	// (0x00066cc4) navi_pane_mp_t1

0x13c8,	// (0x00066cd2) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00074d1c) navi_pane_mp_t

0x1404,	// (0x00066d0e) navi_pane_vt_g1

0x13ba,	// (0x00066cc4) navi_pane_vt_t1

0x140c,	// (0x00066d16) navi_slider_pane

0x1414,	// (0x00066d1e) zooming_pane

0x141c,	// (0x00066d26) navi_slider_pane_g1

0x9a23,	// (0x0006f32d) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00074d23) navi_slider_pane_g

0x1452,	// (0x00066d5c) aid_levels_zoom

0x145a,	// (0x00066d64) zooming_pane_g1

0x1462,	// (0x00066d6c) zooming_pane_g2

0x1462,	// (0x00066d6c) zooming_pane_g3

0x0002,

0xf428,	// (0x00074d32) zooming_pane_g

0x146a,	// (0x00066d74) level_10_zoom

0x1473,	// (0x00066d7d) level_11_zoom

0x147c,	// (0x00066d86) level_1_zoom

0x1485,	// (0x00066d8f) level_2_zoom

0x148e,	// (0x00066d98) level_3_zoom

0x1497,	// (0x00066da1) level_4_zoom

0x14a0,	// (0x00066daa) level_5_zoom

0x14a9,	// (0x00066db3) level_6_zoom

0x14b2,	// (0x00066dbc) level_7_zoom

0x14bb,	// (0x00066dc5) level_8_zoom

0x14c4,	// (0x00066dce) level_9_zoom

0x14d5,	// (0x00066ddf) popup_phob_thumbnail_window_g1

0x14dd,	// (0x00066de7) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00074d39) popup_phob_thumbnail_window_g

0x2824,	// (0x0006812e) level_1_location

0x282c,	// (0x00068136) level_2_location

0x2834,	// (0x0006813e) level_3_location

0x283c,	// (0x00068146) level_4_location

0x1414,	// (0x00066d1e) level_5_location

0x9a35,	// (0x0006f33f) mce_icon_pane_g1

0x9a3d,	// (0x0006f347) mce_icon_pane_g2

0x0001,

0xf434,	// (0x00074d3e) mce_icon_pane_g

0x9a45,	// (0x0006f34f) main_mup_pane_g1_ParamLimits

0x9a45,	// (0x0006f34f) main_mup_pane_g1

0x9a5d,	// (0x0006f367) main_mup_pane_g2_ParamLimits

0x9a5d,	// (0x0006f367) main_mup_pane_g2

0x9a79,	// (0x0006f383) main_mup_pane_g3_ParamLimits

0x9a79,	// (0x0006f383) main_mup_pane_g3

0x9a95,	// (0x0006f39f) main_mup_pane_g4_ParamLimits

0x9a95,	// (0x0006f39f) main_mup_pane_g4

0x9ab1,	// (0x0006f3bb) main_mup_pane_g5_ParamLimits

0x9ab1,	// (0x0006f3bb) main_mup_pane_g5

0x9ad2,	// (0x0006f3dc) main_mup_pane_g6_ParamLimits

0x9ad2,	// (0x0006f3dc) main_mup_pane_g6

0x9aee,	// (0x0006f3f8) main_mup_pane_g7_ParamLimits

0x9aee,	// (0x0006f3f8) main_mup_pane_g7

0x9b0a,	// (0x0006f414) main_mup_pane_g8_ParamLimits

0x9b0a,	// (0x0006f414) main_mup_pane_g8

0x9b26,	// (0x0006f430) main_mup_pane_g9_ParamLimits

0x9b26,	// (0x0006f430) main_mup_pane_g9

0x9b45,	// (0x0006f44f) main_mup_pane_g10_ParamLimits

0x9b45,	// (0x0006f44f) main_mup_pane_g10

0x9b64,	// (0x0006f46e) main_mup_pane_g11_ParamLimits

0x9b64,	// (0x0006f46e) main_mup_pane_g11

0x9b7c,	// (0x0006f486) main_mup_pane_g12_ParamLimits

0x9b7c,	// (0x0006f486) main_mup_pane_g12

0x9b8a,	// (0x0006f494) main_mup_pane_g13_ParamLimits

0x9b8a,	// (0x0006f494) main_mup_pane_g13

0x000c,

0xf439,	// (0x00074d43) main_mup_pane_g_ParamLimits

0xf439,	// (0x00074d43) main_mup_pane_g

0x9ba0,	// (0x0006f4aa) main_mup_pane_t1_ParamLimits

0x9ba0,	// (0x0006f4aa) main_mup_pane_t1

0x9bbd,	// (0x0006f4c7) main_mup_pane_t2_ParamLimits

0x9bbd,	// (0x0006f4c7) main_mup_pane_t2

0x9bd7,	// (0x0006f4e1) main_mup_pane_t3_ParamLimits

0x9bd7,	// (0x0006f4e1) main_mup_pane_t3

0x9bf1,	// (0x0006f4fb) main_mup_pane_t4_ParamLimits

0x9bf1,	// (0x0006f4fb) main_mup_pane_t4

0x9c03,	// (0x0006f50d) main_mup_pane_t5_ParamLimits

0x9c03,	// (0x0006f50d) main_mup_pane_t5

0x9c15,	// (0x0006f51f) main_mup_pane_t6_ParamLimits

0x9c15,	// (0x0006f51f) main_mup_pane_t6

0x0005,

0xf454,	// (0x00074d5e) main_mup_pane_t_ParamLimits

0xf454,	// (0x00074d5e) main_mup_pane_t

0x9c2b,	// (0x0006f535) mup_progress_pane_ParamLimits

0x9c2b,	// (0x0006f535) mup_progress_pane

0x9c37,	// (0x0006f541) mup_visualizer_pane_ParamLimits

0x9c37,	// (0x0006f541) mup_visualizer_pane

0x9c75,	// (0x0006f57f) mup_volume_pane_ParamLimits

0x9c75,	// (0x0006f57f) mup_volume_pane

0x14e5,	// (0x00066def) mup_visualizer_pane_g1_ParamLimits

0x14e5,	// (0x00066def) mup_visualizer_pane_g1

0x14e5,	// (0x00066def) mup_visualizer_pane_g2_ParamLimits

0x14e5,	// (0x00066def) mup_visualizer_pane_g2

0x1349,	// (0x00066c53) mup_visualizer_pane_g3_ParamLimits

0x1349,	// (0x00066c53) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x00074d6b) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x00074d6b) mup_visualizer_pane_g

0x0878,	// (0x00066182) mup_volume_pane_g1

0x14fb,	// (0x00066e05) mup_volume_pane_g2

0x0001,

0xf468,	// (0x00074d72) mup_volume_pane_g

0x0878,	// (0x00066182) mup_progress_pane_g1

0x1504,	// (0x00066e0e) mup_progress_pane_g2

0x150d,	// (0x00066e17) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x00074d77) mup_progress_pane_g

0x0461,	// (0x00065d6b) bg_popup_window_pane_cp05

0x1516,	// (0x00066e20) heading_pane_cp02_ParamLimits

0x1516,	// (0x00066e20) heading_pane_cp02

0x1530,	// (0x00066e3a) list_popup_blid_pane

0x1538,	// (0x00066e42) list_blid_sat_info_pane_ParamLimits

0x1538,	// (0x00066e42) list_blid_sat_info_pane

0x154b,	// (0x00066e55) list_blid_sat_info_pane_g1

0x1553,	// (0x00066e5d) list_blid_sat_info_pane_t1

0x9d80,	// (0x0006f68a) mup_equalizer_pane_ParamLimits

0x9d80,	// (0x0006f68a) mup_equalizer_pane

0x9da1,	// (0x0006f6ab) mup_equalizer_pane_cp1_ParamLimits

0x9da1,	// (0x0006f6ab) mup_equalizer_pane_cp1

0x9dc2,	// (0x0006f6cc) mup_equalizer_pane_cp2_ParamLimits

0x9dc2,	// (0x0006f6cc) mup_equalizer_pane_cp2

0x9de3,	// (0x0006f6ed) mup_equalizer_pane_cp3_ParamLimits

0x9de3,	// (0x0006f6ed) mup_equalizer_pane_cp3

0x9e04,	// (0x0006f70e) mup_equalizer_pane_cp4_ParamLimits

0x9e04,	// (0x0006f70e) mup_equalizer_pane_cp4

0x9e25,	// (0x0006f72f) mup_equalizer_pane_cp5

0x9e3b,	// (0x0006f745) mup_equalizer_pane_cp6

0x9e53,	// (0x0006f75d) mup_equalizer_pane_cp7

0x2742,	// (0x0006804c) bg_popup_call_poc_act_pane_g9

0x274a,	// (0x00068054) bg_popup_call_poc_act_pane_g10

0x2752,	// (0x0006805c) bg_popup_call_poc_act_pane_g11

0x000a,

0x06bc,	// (0x00065fc6) mup_scale_pane

0x0878,	// (0x00066182) mup_scale_pane_g1

0x1561,	// (0x00066e6b) mup_scale_pane_g2

0x0006,

0xf489,	// (0x00074d93) mup_scale_pane_g

0x1585,	// (0x00066e8f) msg_data_pane

0x158d,	// (0x00066e97) scroll_pane_cp017

0x66f6,	// (0x0006c000) bg_list_pane_cp04_ParamLimits

0x66f6,	// (0x0006c000) bg_list_pane_cp04

0x1595,	// (0x00066e9f) msg_data_pane_g1

0x9e7d,	// (0x0006f787) msg_data_pane_g2

0x9704,	// (0x0006f00e) msg_data_pane_g3

0x9e85,	// (0x0006f78f) msg_data_pane_g4

0x9e8d,	// (0x0006f797) msg_data_pane_g5

0x9e95,	// (0x0006f79f) msg_data_pane_g6

0x9e9d,	// (0x0006f7a7) msg_data_pane_g7

0x0006,

0xf498,	// (0x00074da2) msg_data_pane_g

0x6716,	// (0x0006c020) msg_text_pane_ParamLimits

0x6716,	// (0x0006c020) msg_text_pane

0x9ea5,	// (0x0006f7af) qrid_highlight_pane_cp011_ParamLimits

0x9ea5,	// (0x0006f7af) qrid_highlight_pane_cp011

0x0461,	// (0x00065d6b) msg_body_pane

0x0461,	// (0x00065d6b) msg_header_pane

0x15a6,	// (0x00066eb0) input_focus_pane_cp07

0x676e,	// (0x0006c078) msg_header_pane_t1_ParamLimits

0x676e,	// (0x0006c078) msg_header_pane_t1

0x6782,	// (0x0006c08c) msg_header_pane_t2_ParamLimits

0x6782,	// (0x0006c08c) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x00074db6) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x00074db6) msg_header_pane_t

0x15bb,	// (0x00066ec5) msg_body_pane_g1

0x6794,	// (0x0006c09e) msg_body_pane_t1_ParamLimits

0x6794,	// (0x0006c09e) msg_body_pane_t1

0x67c5,	// (0x0006c0cf) msg_body_pane_t2_ParamLimits

0x67c5,	// (0x0006c0cf) msg_body_pane_t2

0x67d7,	// (0x0006c0e1) msg_body_pane_t3_ParamLimits

0x67d7,	// (0x0006c0e1) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x00074dbb) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x00074dbb) msg_body_pane_t

0x9f13,	// (0x0006f81d) main_viewer_pane_g1_ParamLimits

0x9f13,	// (0x0006f81d) main_viewer_pane_g1

0x9f1f,	// (0x0006f829) main_viewer_pane_g2_ParamLimits

0x9f1f,	// (0x0006f829) main_viewer_pane_g2

0x9f2b,	// (0x0006f835) main_viewer_pane_g3_ParamLimits

0x9f2b,	// (0x0006f835) main_viewer_pane_g3

0x9f3c,	// (0x0006f846) main_viewer_pane_g4_ParamLimits

0x9f3c,	// (0x0006f846) main_viewer_pane_g4

0x9f4d,	// (0x0006f857) main_viewer_pane_g5_ParamLimits

0x9f4d,	// (0x0006f857) main_viewer_pane_g5

0x9f4d,	// (0x0006f857) main_viewer_pane_g7_ParamLimits

0x9f4d,	// (0x0006f857) main_viewer_pane_g7

0x9f5f,	// (0x0006f869) main_viewer_pane_g8_ParamLimits

0x9f5f,	// (0x0006f869) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x00074dcb) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x00074dcb) main_viewer_pane_g

0x1605,	// (0x00066f0f) viewer_content_pane_ParamLimits

0x1605,	// (0x00066f0f) viewer_content_pane

0x9f97,	// (0x0006f8a1) main_postcard_pane_g1_ParamLimits

0x9f97,	// (0x0006f8a1) main_postcard_pane_g1

0x9fa5,	// (0x0006f8af) main_postcard_pane_g2_ParamLimits

0x9fa5,	// (0x0006f8af) main_postcard_pane_g2

0x9fb3,	// (0x0006f8bd) main_postcard_pane_g3_ParamLimits

0x9fb3,	// (0x0006f8bd) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x00074ddc) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x00074ddc) main_postcard_pane_g

0x9fc3,	// (0x0006f8cd) main_postcard_pane_g4

0x2944,	// (0x0006824e) smil_status_volume_pane_g2

0x9fef,	// (0x0006f8f9) postcard_pane_ParamLimits

0x9fef,	// (0x0006f8f9) postcard_pane

0x14e5,	// (0x00066def) postcard_pane_g1_ParamLimits

0x14e5,	// (0x00066def) postcard_pane_g1

0xa021,	// (0x0006f92b) postcard_pane_g2_ParamLimits

0xa021,	// (0x0006f92b) postcard_pane_g2

0xa02d,	// (0x0006f937) postcard_pane_g3_ParamLimits

0xa02d,	// (0x0006f937) postcard_pane_g3

0x1621,	// (0x00066f2b) postcard_pane_g4_ParamLimits

0x1621,	// (0x00066f2b) postcard_pane_g4

0xa039,	// (0x0006f943) postcard_pane_g5_ParamLimits

0xa039,	// (0x0006f943) postcard_pane_g5

0xa045,	// (0x0006f94f) postcard_pane_g6_ParamLimits

0xa045,	// (0x0006f94f) postcard_pane_g6

0x1613,	// (0x00066f1d) postcard_pane_g7_ParamLimits

0x1613,	// (0x00066f1d) postcard_pane_g7

0x0006,

0xf4df,	// (0x00074de9) postcard_pane_g_ParamLimits

0xf4df,	// (0x00074de9) postcard_pane_g

0xa051,	// (0x0006f95b) main_mp2_pane_g1_ParamLimits

0xa051,	// (0x0006f95b) main_mp2_pane_g1

0xa05d,	// (0x0006f967) main_mp2_pane_g2_ParamLimits

0xa05d,	// (0x0006f967) main_mp2_pane_g2

0xa069,	// (0x0006f973) main_mp2_pane_g3_ParamLimits

0xa069,	// (0x0006f973) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x00074df8) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x00074df8) main_mp2_pane_g

0xa075,	// (0x0006f97f) main_mp2_pane_t1_ParamLimits

0xa075,	// (0x0006f97f) main_mp2_pane_t1

0xa08c,	// (0x0006f996) main_mp2_pane_t2_ParamLimits

0xa08c,	// (0x0006f996) main_mp2_pane_t2

0xa09e,	// (0x0006f9a8) main_mp2_pane_t3_ParamLimits

0xa09e,	// (0x0006f9a8) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x00074dff) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x00074dff) main_mp2_pane_t

0x162f,	// (0x00066f39) pec_content_pane_ParamLimits

0x162f,	// (0x00066f39) pec_content_pane

0x0c51,	// (0x0006655b) scroll_pane_cp015

0x1641,	// (0x00066f4b) pec_attribute_pane_ParamLimits

0x1641,	// (0x00066f4b) pec_attribute_pane

0xa0b0,	// (0x0006f9ba) pec_content_pane_g1_ParamLimits

0xa0b0,	// (0x0006f9ba) pec_content_pane_g1

0x1651,	// (0x00066f5b) pec_content_pane_t1_ParamLimits

0x1651,	// (0x00066f5b) pec_content_pane_t1

0x1663,	// (0x00066f6d) pec_content_pane_t2_ParamLimits

0x1663,	// (0x00066f6d) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x00074e06) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x00074e06) pec_content_pane_t

0xa0bc,	// (0x0006f9c6) list_single_graphic_pane_cp01_ParamLimits

0xa0bc,	// (0x0006f9c6) list_single_graphic_pane_cp01

0x06bc,	// (0x00065fc6) bg_popup_sub_pane_cp04

0x1675,	// (0x00066f7f) popup_mup_playback_window_g1

0x1681,	// (0x00066f8b) popup_mup_playback_window_t1

0x1696,	// (0x00066fa0) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00074e0b) popup_mup_playback_window_t

0x16cd,	// (0x00066fd7) main_image_pane_g1_ParamLimits

0x16cd,	// (0x00066fd7) main_image_pane_g1

0x1710,	// (0x0006701a) scroll_pane_cp018_ParamLimits

0x1710,	// (0x0006701a) scroll_pane_cp018

0x1728,	// (0x00067032) scroll_pane_cp016_ParamLimits

0x1728,	// (0x00067032) scroll_pane_cp016

0xa160,	// (0x0006fa6a) smil2_image_pane_ParamLimits

0xa160,	// (0x0006fa6a) smil2_image_pane

0xa194,	// (0x0006fa9e) smil2_root_pane_ParamLimits

0xa194,	// (0x0006fa9e) smil2_root_pane

0xa1c0,	// (0x0006faca) smil2_text_pane_ParamLimits

0xa1c0,	// (0x0006faca) smil2_text_pane

0x0461,	// (0x00065d6b) bg_list_pane_cp06

0x1764,	// (0x0006706e) grid_radio_pane

0x0461,	// (0x00065d6b) bg_popup_window_pane_cp06

0x176c,	// (0x00067076) main_fmradio_pane_t1

0x1197,	// (0x00066aa1) heading_pane_cp04

0x177a,	// (0x00067084) main_fmradio_pane_t2

0x275a,	// (0x00068064) popup_cale_lunar_info_window_g1

0x1788,	// (0x00067092) main_fmradio_pane_t3

0x2762,	// (0x0006806c) popup_cale_lunar_info_window_g2

0x1796,	// (0x000670a0) main_fmradio_pane_t4

0x0001,

0x17a4,	// (0x000670ae) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x00074ee6) popup_cale_lunar_info_window_g

0xf516,	// (0x00074e20) main_fmradio_pane_t

0x17b2,	// (0x000670bc) wait_bar_pane_cp03

0x17ba,	// (0x000670c4) cell_fmradio_pane_ParamLimits

0x17ba,	// (0x000670c4) cell_fmradio_pane

0x1613,	// (0x00066f1d) cell_fmradio_pane_g1_ParamLimits

0x1613,	// (0x00066f1d) cell_fmradio_pane_g1

0x0461,	// (0x00065d6b) grid_highlight_pane_cp011

0x17cd,	// (0x000670d7) poc_content_pane_ParamLimits

0x17cd,	// (0x000670d7) poc_content_pane

0x17df,	// (0x000670e9) scroll_pane_cp019

0xa200,	// (0x0006fb0a) popup_call_poc_act_window_ParamLimits

0xa200,	// (0x0006fb0a) popup_call_poc_act_window

0xa20d,	// (0x0006fb17) popup_call_poc_inact_window_ParamLimits

0xa20d,	// (0x0006fb17) popup_call_poc_inact_window

0xf5b3,	// (0x00074ebd) bg_popup_call_poc_act_pane_g

0x26ca,	// (0x00067fd4) bg_popup_call_poc_inact_pane_g1

0x26d2,	// (0x00067fdc) bg_popup_call_poc_inact_pane_g2

0x17e7,	// (0x000670f1) popup_call_poc_act_window_g2

0x26da,	// (0x00067fe4) bg_popup_call_poc_inact_pane_g3

0x26e2,	// (0x00067fec) bg_popup_call_poc_inact_pane_g4

0x26ea,	// (0x00067ff4) bg_popup_call_poc_inact_pane_g5

0x17ef,	// (0x000670f9) popup_call_poc_act_window_t1_ParamLimits

0x17ef,	// (0x000670f9) popup_call_poc_act_window_t1

0x1817,	// (0x00067121) popup_call_poc_act_window_t2_ParamLimits

0x1817,	// (0x00067121) popup_call_poc_act_window_t2

0x183f,	// (0x00067149) popup_call_poc_act_window_t3_ParamLimits

0x183f,	// (0x00067149) popup_call_poc_act_window_t3

0x1867,	// (0x00067171) popup_call_poc_act_window_t4_ParamLimits

0x1867,	// (0x00067171) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00074e2b) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00074e2b) popup_call_poc_act_window_t

0x26f2,	// (0x00067ffc) bg_popup_call_poc_inact_pane_g6

0x26fa,	// (0x00068004) bg_popup_call_poc_inact_pane_g7

0x2702,	// (0x0006800c) bg_popup_call_poc_inact_pane_g8

0x1879,	// (0x00067183) popup_call_poc_inact_window_g2

0x270a,	// (0x00068014) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x00074eaa) bg_popup_call_poc_inact_pane_g

0x1881,	// (0x0006718b) popup_call_poc_inact_window_t1_ParamLimits

0x1881,	// (0x0006718b) popup_call_poc_inact_window_t1

0x1896,	// (0x000671a0) popup_call_poc_inact_window_t2_ParamLimits

0x1896,	// (0x000671a0) popup_call_poc_inact_window_t2

0x18ab,	// (0x000671b5) popup_call_poc_inact_window_t3_ParamLimits

0x18ab,	// (0x000671b5) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x00074e34) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x00074e34) popup_call_poc_inact_window_t

0x28ca,	// (0x000681d4) context_pane_ParamLimits

0xa802,	// (0x0007010c) signal_pane_ParamLimits

0x1414,	// (0x00066d1e) main_call2_pane

0x28b8,	// (0x000681c2) popup_phob_thumbnail2_window_ParamLimits

0x28b8,	// (0x000681c2) popup_phob_thumbnail2_window

0x9ec1,	// (0x0006f7cb) aid_hotspot_pointer_arrow_pane

0x9ec9,	// (0x0006f7d3) aid_hotspot_pointer_hand_pane

0xa532,	// (0x0006fe3c) phob_pre_status_pane_g5

0x82f8,	// (0x0006dc02) cams_zoom_pane_ParamLimits

0x8304,	// (0x0006dc0e) image_vga_pane_ParamLimits

0x8313,	// (0x0006dc1d) main_camera_pane_g1_ParamLimits

0x8321,	// (0x0006dc2b) main_camera_pane_g2_ParamLimits

0x832f,	// (0x0006dc39) main_camera_pane_g3_ParamLimits

0x833b,	// (0x0006dc45) main_camera_pane_g4_ParamLimits

0x8347,	// (0x0006dc51) main_camera_pane_g5_ParamLimits

0x8353,	// (0x0006dc5d) main_camera_pane_g6_ParamLimits

0x835f,	// (0x0006dc69) main_camera_pane_g7_ParamLimits

0xf229,	// (0x00074b33) main_camera_pane_g_ParamLimits

0x836b,	// (0x0006dc75) main_camera_pane_t1_ParamLimits

0x837d,	// (0x0006dc87) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x00074b44) main_camera_pane_t_ParamLimits

0x06bc,	// (0x00065fc6) bg_popup_preview_window_pane_cp01_ParamLimits

0x06bc,	// (0x00065fc6) bg_popup_preview_window_pane_cp01

0x18c0,	// (0x000671ca) popup_phob_thumbnail2_window_g1_ParamLimits

0x18c0,	// (0x000671ca) popup_phob_thumbnail2_window_g1

0x0461,	// (0x00065d6b) call2_cli_visual_pane

0xa229,	// (0x0006fb33) popup_call2_audio_conf_window_ParamLimits

0xa229,	// (0x0006fb33) popup_call2_audio_conf_window

0xa23e,	// (0x0006fb48) popup_call2_audio_first_window_ParamLimits

0xa23e,	// (0x0006fb48) popup_call2_audio_first_window

0xa2dc,	// (0x0006fbe6) popup_call2_audio_in_window_ParamLimits

0xa2dc,	// (0x0006fbe6) popup_call2_audio_in_window

0xa31e,	// (0x0006fc28) popup_call2_audio_out_window_ParamLimits

0xa31e,	// (0x0006fc28) popup_call2_audio_out_window

0xa380,	// (0x0006fc8a) popup_call2_audio_second_window_ParamLimits

0xa380,	// (0x0006fc8a) popup_call2_audio_second_window

0xa3de,	// (0x0006fce8) popup_call2_audio_wait_window_ParamLimits

0xa3de,	// (0x0006fce8) popup_call2_audio_wait_window

0x0461,	// (0x00065d6b) bg_popup_call2_act_pane_cp03

0x069e,	// (0x00065fa8) list_conf_pane_cp

0x18cc,	// (0x000671d6) popup_call2_audio_conf_window_t1

0x18da,	// (0x000671e4) list_single_graphic_popup_conf2_pane_ParamLimits

0x18da,	// (0x000671e4) list_single_graphic_popup_conf2_pane

0x122a,	// (0x00066b34) list_highlight_pane_cp04

0x18ed,	// (0x000671f7) list_single_graphic_popup_conf2_pane_g1

0x123b,	// (0x00066b45) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00074e3b) list_single_graphic_popup_conf2_pane_g

0x18f7,	// (0x00067201) list_single_graphic_popup_conf2_pane_t1

0x1905,	// (0x0006720f) bg_popup_call2_act_pane_cp01_ParamLimits

0x1905,	// (0x0006720f) bg_popup_call2_act_pane_cp01

0x198f,	// (0x00067299) call_type_pane_cp05_ParamLimits

0x198f,	// (0x00067299) call_type_pane_cp05

0x19e3,	// (0x000672ed) popup_call2_audio_second_window_g1_ParamLimits

0x19e3,	// (0x000672ed) popup_call2_audio_second_window_g1

0x1a37,	// (0x00067341) popup_call2_audio_second_window_g2_ParamLimits

0x1a37,	// (0x00067341) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x00074e40) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x00074e40) popup_call2_audio_second_window_g

0x1a9c,	// (0x000673a6) popup_call2_audio_second_window_t1_ParamLimits

0x1a9c,	// (0x000673a6) popup_call2_audio_second_window_t1

0x1b57,	// (0x00067461) popup_call2_audio_second_window_t2_ParamLimits

0x1b57,	// (0x00067461) popup_call2_audio_second_window_t2

0x1baa,	// (0x000674b4) popup_call2_audio_second_window_t3_ParamLimits

0x1baa,	// (0x000674b4) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x00074e47) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x00074e47) popup_call2_audio_second_window_t

0x0461,	// (0x00065d6b) bg_popup_call2_in_pane_cp02

0x046b,	// (0x00065d75) call_type_pane_cp04

0x0473,	// (0x00065d7d) popup_call2_audio_wait_window_g1

0x047b,	// (0x00065d85) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00074a20) popup_call2_audio_wait_window_g

0x0483,	// (0x00065d8d) popup_call2_audio_wait_window_t3

0x1c9d,	// (0x000675a7) bg_popup_call2_act_pane_ParamLimits

0x1c9d,	// (0x000675a7) bg_popup_call2_act_pane

0x1d5d,	// (0x00067667) call_type_pane_cp03_ParamLimits

0x1d5d,	// (0x00067667) call_type_pane_cp03

0x1dc1,	// (0x000676cb) popup_call2_audio_first_window_g1_ParamLimits

0x1dc1,	// (0x000676cb) popup_call2_audio_first_window_g1

0x1e31,	// (0x0006773b) popup_call2_audio_first_window_g2_ParamLimits

0x1e31,	// (0x0006773b) popup_call2_audio_first_window_g2

0x14e5,	// (0x00066def) popup_call2_audio_first_window_g3_ParamLimits

0x14e5,	// (0x00066def) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x00074e50) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x00074e50) popup_call2_audio_first_window_g

0x1f0f,	// (0x00067819) popup_call2_audio_first_window_t1_ParamLimits

0x1f0f,	// (0x00067819) popup_call2_audio_first_window_t1

0x2012,	// (0x0006791c) popup_call2_audio_first_window_t4_ParamLimits

0x2012,	// (0x0006791c) popup_call2_audio_first_window_t4

0x20f5,	// (0x000679ff) popup_call2_audio_first_window_t5_ParamLimits

0x20f5,	// (0x000679ff) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x00074e5b) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x00074e5b) popup_call2_audio_first_window_t

0x06b4,	// (0x00065fbe) bg_popup_call2_act_pane_g1

0x276a,	// (0x00068074) popup_cale_lunar_info_window_t1

0x2778,	// (0x00068082) popup_cale_lunar_info_window_t2

0x2786,	// (0x00068090) popup_cale_lunar_info_window_t3

0x0461,	// (0x00065d6b) bg_popup_call2_bubble_pane

0x21f6,	// (0x00067b00) bg_popup_call2_in_pane_cp01_ParamLimits

0x21f6,	// (0x00067b00) bg_popup_call2_in_pane_cp01

0x013d,	// (0x00065a47) call_type_pane_cp02

0x223e,	// (0x00067b48) popup_call2_audio_out_window_g1_ParamLimits

0x223e,	// (0x00067b48) popup_call2_audio_out_window_g1

0x226a,	// (0x00067b74) popup_call2_audio_out_window_g2_ParamLimits

0x226a,	// (0x00067b74) popup_call2_audio_out_window_g2

0x2292,	// (0x00067b9c) popup_call2_audio_out_window_g3_ParamLimits

0x2292,	// (0x00067b9c) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x00074e64) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x00074e64) popup_call2_audio_out_window_g

0x22cd,	// (0x00067bd7) popup_call2_audio_out_window_t1_ParamLimits

0x22cd,	// (0x00067bd7) popup_call2_audio_out_window_t1

0x232c,	// (0x00067c36) popup_call2_audio_out_window_t2_ParamLimits

0x232c,	// (0x00067c36) popup_call2_audio_out_window_t2

0x2380,	// (0x00067c8a) popup_call2_audio_out_window_t3_ParamLimits

0x2380,	// (0x00067c8a) popup_call2_audio_out_window_t3

0x2396,	// (0x00067ca0) popup_call2_audio_out_window_t4_ParamLimits

0x2396,	// (0x00067ca0) popup_call2_audio_out_window_t4

0x23ac,	// (0x00067cb6) popup_call2_audio_out_window_t5_ParamLimits

0x23ac,	// (0x00067cb6) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x00074e6d) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x00074e6d) popup_call2_audio_out_window_t

0x2410,	// (0x00067d1a) bg_popup_call2_in_pane_ParamLimits

0x2410,	// (0x00067d1a) bg_popup_call2_in_pane

0x246c,	// (0x00067d76) popup_call2_audio_in_window_g1_ParamLimits

0x246c,	// (0x00067d76) popup_call2_audio_in_window_g1

0x24a4,	// (0x00067dae) popup_call2_audio_in_window_g2_ParamLimits

0x24a4,	// (0x00067dae) popup_call2_audio_in_window_g2

0x24dc,	// (0x00067de6) popup_call2_audio_in_window_g3_ParamLimits

0x24dc,	// (0x00067de6) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x00074e7a) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x00074e7a) popup_call2_audio_in_window_g

0x2534,	// (0x00067e3e) popup_call2_audio_in_window_t1_ParamLimits

0x2534,	// (0x00067e3e) popup_call2_audio_in_window_t1

0x25b4,	// (0x00067ebe) popup_call2_audio_in_window_t2_ParamLimits

0x25b4,	// (0x00067ebe) popup_call2_audio_in_window_t2

0x2634,	// (0x00067f3e) popup_call2_audio_in_window_t3_ParamLimits

0x2634,	// (0x00067f3e) popup_call2_audio_in_window_t3

0x264e,	// (0x00067f58) popup_call2_audio_in_window_t4_ParamLimits

0x264e,	// (0x00067f58) popup_call2_audio_in_window_t4

0x2660,	// (0x00067f6a) popup_call2_audio_in_window_t5_ParamLimits

0x2660,	// (0x00067f6a) popup_call2_audio_in_window_t5

0x2675,	// (0x00067f7f) popup_call2_audio_in_window_t6_ParamLimits

0x2675,	// (0x00067f7f) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x00074e83) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x00074e83) popup_call2_audio_in_window_t

0x06b4,	// (0x00065fbe) bg_popup_call2_in_pane_g1

0x2794,	// (0x0006809e) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00074eeb) popup_cale_lunar_info_window_t

0x06bc,	// (0x00065fc6) bg_popup_call2_rect_pane_ParamLimits

0x06bc,	// (0x00065fc6) bg_popup_call2_rect_pane

0x0461,	// (0x00065d6b) call2_cli_visual_graphic_pane

0x0461,	// (0x00065d6b) call2_cli_visual_text_pane

0xa8b4,	// (0x000701be) smil_status_volume_pane_g3

0x0002,

0x0878,	// (0x00066182) call2_cli_visual_graphic_pane_g1

0x0878,	// (0x00066182) call2_cli_visual_graphic_pane_g2

0x0878,	// (0x00066182) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x00074e90) call2_cli_visual_graphic_pane_g

0x268a,	// (0x00067f94) bg_popup_call2_rect_pane_g1

0x0920,	// (0x0006622a) bg_popup_call2_rect_pane_g2

0x2692,	// (0x00067f9c) bg_popup_call2_rect_pane_g3

0x269a,	// (0x00067fa4) bg_popup_call2_rect_pane_g4

0x26a2,	// (0x00067fac) bg_popup_call2_rect_pane_g5

0x26aa,	// (0x00067fb4) bg_popup_call2_rect_pane_g6

0x26b2,	// (0x00067fbc) bg_popup_call2_rect_pane_g7

0x26ba,	// (0x00067fc4) bg_popup_call2_rect_pane_g8

0x26c2,	// (0x00067fcc) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x00074e97) bg_popup_call2_rect_pane_g

0x26ca,	// (0x00067fd4) bg_popup_call2_bubble_pane_g1

0x26d2,	// (0x00067fdc) bg_popup_call2_bubble_pane_g2

0x26da,	// (0x00067fe4) bg_popup_call2_bubble_pane_g3

0x26e2,	// (0x00067fec) bg_popup_call2_bubble_pane_g4

0x26ea,	// (0x00067ff4) bg_popup_call2_bubble_pane_g5

0x26f2,	// (0x00067ffc) bg_popup_call2_bubble_pane_g6

0x26fa,	// (0x00068004) bg_popup_call2_bubble_pane_g7

0x2702,	// (0x0006800c) bg_popup_call2_bubble_pane_g8

0x270a,	// (0x00068014) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x00074eaa) bg_popup_call2_bubble_pane_g

0x7e9b,	// (0x0006d7a5) aid_cale_week_size_cell_pane

0x838f,	// (0x0006dc99) aid_cams_cif_uncrop_pane_ParamLimits

0x838f,	// (0x0006dc99) aid_cams_cif_uncrop_pane

0x84f2,	// (0x0006ddfc) aid_cams_size_cell_ParamLimits

0x84f2,	// (0x0006ddfc) aid_cams_size_cell

0x84fe,	// (0x0006de08) grid_cams_pane_ParamLimits

0x850c,	// (0x0006de16) linegrid_cams_pane_ParamLimits

0x85e3,	// (0x0006deed) call_video_pane_t1

0x8604,	// (0x0006df0e) call_video_pane_t2

0x0001,

0xf28d,	// (0x00074b97) call_video_pane_t

0x8b84,	// (0x0006e48e) aid_cale_month_size_cell_pane_ParamLimits

0x8b84,	// (0x0006e48e) aid_cale_month_size_cell_pane

0xf62a,	// (0x00074f34) smil_status_volume_pane_g

0xa8c1,	// (0x000701cb) volume_smil_pane_ParamLimits

0x7600,	// (0x0006cf0a) aid_popup2_width_pane

0x7d6c,	// (0x0006d676) cell_qdial_pane_g4_ParamLimits

0x7d6c,	// (0x0006d676) cell_qdial_pane_g4

0x9878,	// (0x0006f182) aid_blid_cardinal_pane_ParamLimits

0x9888,	// (0x0006f192) aid_blid_destination_pane_ParamLimits

0x9888,	// (0x0006f192) aid_blid_destination_pane

0x06bc,	// (0x00065fc6) bg_popup_call_poc_act_pane_ParamLimits

0x06bc,	// (0x00065fc6) bg_popup_call_poc_act_pane

0x06bc,	// (0x00065fc6) bg_popup_call_poc_inact_pane_ParamLimits

0x06bc,	// (0x00065fc6) bg_popup_call_poc_inact_pane

0x271a,	// (0x00068024) bg_popup_call_poc_act_pane_g1

0x2722,	// (0x0006802c) bg_popup_call_poc_act_pane_g2

0x272a,	// (0x00068034) bg_popup_call_poc_act_pane_g3

0x26e2,	// (0x00067fec) bg_popup_call_poc_act_pane_g4

0x26ea,	// (0x00067ff4) bg_popup_call_poc_act_pane_g5

0x2732,	// (0x0006803c) bg_popup_call_poc_act_pane_g6

0x26fa,	// (0x00068004) bg_popup_call_poc_act_pane_g7

0x273a,	// (0x00068044) bg_popup_call_poc_act_pane_g8

0x0461,	// (0x00065d6b) main_usb_pane

0x2893,	// (0x0006819d) popup_cale_lunar_info_window

0x8923,	// (0x0006e22d) im_reading_pane_t1_ParamLimits

0x0ba9,	// (0x000664b3) list_im_pane_ParamLimits

0x0bba,	// (0x000664c4) scroll_pane_cp07_ParamLimits

0x0461,	// (0x00065d6b) grid_highlight_pane_cp012

0x06bc,	// (0x00065fc6) mup_scale_pane_ParamLimits

0x14e5,	// (0x00066def) main_usb_pane_g1_ParamLimits

0x14e5,	// (0x00066def) main_usb_pane_g1

0xa455,	// (0x0006fd5f) main_usb_pane_g2_ParamLimits

0xa455,	// (0x0006fd5f) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x00074ed4) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x00074ed4) main_usb_pane_g

0xa461,	// (0x0006fd6b) main_usb_pane_t1_ParamLimits

0xa461,	// (0x0006fd6b) main_usb_pane_t1

0xa473,	// (0x0006fd7d) main_usb_pane_t2_ParamLimits

0xa473,	// (0x0006fd7d) main_usb_pane_t2

0xa485,	// (0x0006fd8f) main_usb_pane_t3_ParamLimits

0xa485,	// (0x0006fd8f) main_usb_pane_t3

0xa497,	// (0x0006fda1) main_usb_pane_t4_ParamLimits

0xa497,	// (0x0006fda1) main_usb_pane_t4

0xa4a9,	// (0x0006fdb3) main_usb_pane_t5_ParamLimits

0xa4a9,	// (0x0006fdb3) main_usb_pane_t5

0xa4bb,	// (0x0006fdc5) main_usb_pane_t6_ParamLimits

0xa4bb,	// (0x0006fdc5) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x00074ed9) main_usb_pane_t_ParamLimits

0x981e,	// (0x0006f128) aid_text_placing

0x982a,	// (0x0006f134) main_location2_pane_t1_ParamLimits

0x983e,	// (0x0006f148) main_location2_pane_t2_ParamLimits

0x9852,	// (0x0006f15c) main_location2_pane_t3_ParamLimits

0x9866,	// (0x0006f170) main_location2_pane_t4_ParamLimits

0x9866,	// (0x0006f170) main_location2_pane_t4

0xf3ee,	// (0x00074cf8) main_location2_pane_t_ParamLimits

0x0700,	// (0x0006600a) find_pinb_pane_g2_ParamLimits

0x0700,	// (0x0006600a) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x00074a46) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x00074a46) find_pinb_pane_g

0x070c,	// (0x00066016) find_pinb_pane_t1_ParamLimits

0x071e,	// (0x00066028) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00074a4b) find_pinb_pane_t_ParamLimits

0x0461,	// (0x00065d6b) main_call3_pane

0x8f9c,	// (0x0006e8a6) cale_month_day_heading_pane_t1_ParamLimits

0x8ffa,	// (0x0006e904) cale_month_day_heading_pane_t2_ParamLimits

0x905f,	// (0x0006e969) cale_month_day_heading_pane_t3_ParamLimits

0x90c4,	// (0x0006e9ce) cale_month_day_heading_pane_t4_ParamLimits

0x9129,	// (0x0006ea33) cale_month_day_heading_pane_t5_ParamLimits

0x918e,	// (0x0006ea98) cale_month_day_heading_pane_t6_ParamLimits

0x91fb,	// (0x0006eb05) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x00074bcf) cale_month_day_heading_pane_t_ParamLimits

0x0e06,	// (0x00066710) smil_status_volume_pane

0xa009,	// (0x0006f913) postcard_address_pane_ParamLimits

0xa009,	// (0x0006f913) postcard_address_pane

0xa015,	// (0x0006f91f) postcard_message_pane_ParamLimits

0xa015,	// (0x0006f91f) postcard_message_pane

0xa41d,	// (0x0006fd27) call2_cli_visual_pane_t1_ParamLimits

0xa41d,	// (0x0006fd27) call2_cli_visual_pane_t1

0xaa14,	// (0x0007031e) postcard_message_pane_t1_ParamLimits

0xaa14,	// (0x0007031e) postcard_message_pane_t1

0xa9fd,	// (0x00070307) postcard_address_pane_t1_ParamLimits

0xa9fd,	// (0x00070307) postcard_address_pane_t1

0xa9ee,	// (0x000702f8) popup_call3_audio_in_window_ParamLimits

0xa9ee,	// (0x000702f8) popup_call3_audio_in_window

0xa8d6,	// (0x000701e0) bg_popup_call3_in_pane_ParamLimits

0xa8d6,	// (0x000701e0) bg_popup_call3_in_pane

0xa934,	// (0x0007023e) popup_call3_audio_in_window_g1_ParamLimits

0xa934,	// (0x0007023e) popup_call3_audio_in_window_g1

0xa94c,	// (0x00070256) popup_call3_audio_in_window_g2_ParamLimits

0xa94c,	// (0x00070256) popup_call3_audio_in_window_g2

0xa964,	// (0x0007026e) popup_call3_audio_in_window_g3_ParamLimits

0xa964,	// (0x0007026e) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00074f3b) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00074f3b) popup_call3_audio_in_window_g

0xa98c,	// (0x00070296) popup_call3_audio_in_window_t1_ParamLimits

0xa98c,	// (0x00070296) popup_call3_audio_in_window_t1

0xa9b4,	// (0x000702be) popup_call3_audio_in_window_t2_ParamLimits

0xa9b4,	// (0x000702be) popup_call3_audio_in_window_t2

0xa9dc,	// (0x000702e6) popup_call3_audio_in_window_t3_ParamLimits

0xa9dc,	// (0x000702e6) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x00074f44) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x00074f44) popup_call3_audio_in_window_t

0x1414,	// (0x00066d1e) bg_popup_call3_rect_pane

0x268a,	// (0x00067f94) bg_popup_call3_rect_pane_g1

0x0920,	// (0x0006622a) bg_popup_call3_rect_pane_g2

0x2692,	// (0x00067f9c) bg_popup_call3_rect_pane_g3

0x269a,	// (0x00067fa4) bg_popup_call3_rect_pane_g4

0x26a2,	// (0x00067fac) bg_popup_call3_rect_pane_g5

0x26aa,	// (0x00067fb4) bg_popup_call3_rect_pane_g6

0x26b2,	// (0x00067fbc) bg_popup_call3_rect_pane_g7

0x9c90,	// (0x0006f59a) mup_visualizer_osc_pane

0x14f3,	// (0x00066dfd) mup_visualizer_spec_pane

0xa8f6,	// (0x00070200) call3_video_qcif_pane_ParamLimits

0xa8f6,	// (0x00070200) call3_video_qcif_pane

0xa906,	// (0x00070210) call3_video_qcif_uncrop_pane_ParamLimits

0xa906,	// (0x00070210) call3_video_qcif_uncrop_pane

0xa912,	// (0x0007021c) call3_video_subqcif_pane_ParamLimits

0xa912,	// (0x0007021c) call3_video_subqcif_pane

0xa924,	// (0x0007022e) call3_video_subqcif_uncrop_pane_ParamLimits

0xa924,	// (0x0007022e) call3_video_subqcif_uncrop_pane

0xa97c,	// (0x00070286) popup_call3_audio_in_window_g4_ParamLimits

0xa97c,	// (0x00070286) popup_call3_audio_in_window_g4

0xa8a1,	// (0x000701ab) mup_spec_half_pane

0xa8aa,	// (0x000701b4) mup_spec_half_pane_cp

0x292a,	// (0x00068234) mup_osc_middle_pane

0x2933,	// (0x0006823d) mup_visualizer_osc_pane_g1

0xa882,	// (0x0007018c) mup_spec_bar_pane_ParamLimits

0xa882,	// (0x0007018c) mup_spec_bar_pane

0x2917,	// (0x00068221) mup_spec_bar_pane_g1

0x2921,	// (0x0006822b) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00074f2f) mup_spec_bar_pane_g

0x7e9b,	// (0x0006d7a5) aid_cale_week_size_cell_pane_ParamLimits

0x7eae,	// (0x0006d7b8) bg_cale_heading_pane_ParamLimits

0x099c,	// (0x000662a6) bg_cale_pane_cp01_ParamLimits

0x7eca,	// (0x0006d7d4) cale_week_corner_pane_ParamLimits

0x7edb,	// (0x0006d7e5) cale_week_day_heading_pane_ParamLimits

0x7ef7,	// (0x0006d801) cale_week_scroll_pane_g1_ParamLimits

0x7f10,	// (0x0006d81a) cale_week_scroll_pane_g2_ParamLimits

0x7f21,	// (0x0006d82b) cale_week_scroll_pane_g3_ParamLimits

0x7f32,	// (0x0006d83c) cale_week_scroll_pane_g4_ParamLimits

0x7f43,	// (0x0006d84d) cale_week_scroll_pane_g5_ParamLimits

0x7f54,	// (0x0006d85e) cale_week_scroll_pane_g6_ParamLimits

0x7f65,	// (0x0006d86f) cale_week_scroll_pane_g7_ParamLimits

0x7f78,	// (0x0006d882) cale_week_scroll_pane_g8_ParamLimits

0x7f8b,	// (0x0006d895) cale_week_scroll_pane_g9_ParamLimits

0x7f9c,	// (0x0006d8a6) cale_week_scroll_pane_g10_ParamLimits

0x7fad,	// (0x0006d8b7) cale_week_scroll_pane_g11_ParamLimits

0x7fbe,	// (0x0006d8c8) cale_week_scroll_pane_g12_ParamLimits

0x7fd7,	// (0x0006d8e1) cale_week_scroll_pane_g13_ParamLimits

0x7ff0,	// (0x0006d8fa) cale_week_scroll_pane_g14_ParamLimits

0x8009,	// (0x0006d913) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x00074ad7) cale_week_scroll_pane_g_ParamLimits

0x8022,	// (0x0006d92c) cale_week_time_pane_ParamLimits

0x8035,	// (0x0006d93f) grid_cale_week_pane_ParamLimits

0x09b5,	// (0x000662bf) listscroll_cale_week_pane_t1

0x8052,	// (0x0006d95c) scroll_pane_cp08_ParamLimits

0x8bd5,	// (0x0006e4df) cale_month_corner_pane_ParamLimits

0x0dd0,	// (0x000666da) cale_month_pane_t1

0x8f4b,	// (0x0006e855) cale_month_week_pane_ParamLimits

0x14e5,	// (0x00066def) popup_call_status_window_g1_ParamLimits

0x965a,	// (0x0006ef64) popup_call_status_window_g2_ParamLimits

0x9666,	// (0x0006ef70) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x00074c7f) popup_call_status_window_g_ParamLimits

0x1120,	// (0x00066a2a) aid_call2_pane

0x6760,	// (0x0006c06a) msg_header_pane_g1

0xa009,	// (0x0006f913) postcard_address2_pane_ParamLimits

0xa009,	// (0x0006f913) postcard_address2_pane

0xa015,	// (0x0006f91f) postcard_message2_pane_ParamLimits

0xa015,	// (0x0006f91f) postcard_message2_pane

0xa810,	// (0x0007011a) message2_row_pane_ParamLimits

0xa810,	// (0x0007011a) message2_row_pane

0xa82d,	// (0x00070137) address2_row_pane_ParamLimits

0xa82d,	// (0x00070137) address2_row_pane

0x28e5,	// (0x000681ef) postcard_message2_row_pane_g1

0x28ed,	// (0x000681f7) postcard_message2_row_pane_t1

0x28e5,	// (0x000681ef) address2_row_pane_g1

0x28ed,	// (0x000681f7) address2_row_pane_t1

0x826e,	// (0x0006db78) aid_size_cell_vorec

0x0461,	// (0x00065d6b) main_rss_pane

0xa840,	// (0x0007014a) rss_list_single_pane_ParamLimits

0xa840,	// (0x0007014a) rss_list_single_pane

0x28fb,	// (0x00068205) rss_list_single_pane_t1

0x2909,	// (0x00068213) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00074f2a) rss_list_single_pane_t

0x0461,	// (0x00065d6b) main_camera2_pane

0x0461,	// (0x00065d6b) main_video2_pane

0xaa78,	// (0x00070382) cams_zoom_pane_cp2_ParamLimits

0xaa78,	// (0x00070382) cams_zoom_pane_cp2

0xaa84,	// (0x0007038e) image2_vga_pane_ParamLimits

0xaa84,	// (0x0007038e) image2_vga_pane

0xaa93,	// (0x0007039d) main_camera2_pane_g1_ParamLimits

0xaa93,	// (0x0007039d) main_camera2_pane_g1

0xaa9f,	// (0x000703a9) main_camera2_pane_g2_ParamLimits

0xaa9f,	// (0x000703a9) main_camera2_pane_g2

0xaaab,	// (0x000703b5) main_camera2_pane_g3_ParamLimits

0xaaab,	// (0x000703b5) main_camera2_pane_g3

0xaab7,	// (0x000703c1) main_camera2_pane_g4_ParamLimits

0xaab7,	// (0x000703c1) main_camera2_pane_g4

0xaac3,	// (0x000703cd) main_camera2_pane_g5_ParamLimits

0xaac3,	// (0x000703cd) main_camera2_pane_g5

0xaacf,	// (0x000703d9) main_camera2_pane_g6_ParamLimits

0xaacf,	// (0x000703d9) main_camera2_pane_g6

0xaadb,	// (0x000703e5) main_camera2_pane_g7_ParamLimits

0xaadb,	// (0x000703e5) main_camera2_pane_g7

0xaae7,	// (0x000703f1) main_camera2_pane_g8_ParamLimits

0xaae7,	// (0x000703f1) main_camera2_pane_g8

0x0008,

0xf641,	// (0x00074f4b) main_camera2_pane_g_ParamLimits

0xf641,	// (0x00074f4b) main_camera2_pane_g

0xaaff,	// (0x00070409) main_camera2_pane_t1_ParamLimits

0xaaff,	// (0x00070409) main_camera2_pane_t1

0xab11,	// (0x0007041b) main_camera2_pane_t2_ParamLimits

0xab11,	// (0x0007041b) main_camera2_pane_t2

0xab23,	// (0x0007042d) main_camera2_pane_t3_ParamLimits

0xab23,	// (0x0007042d) main_camera2_pane_t3

0xab35,	// (0x0007043f) main_camera2_pane_t4_ParamLimits

0xab35,	// (0x0007043f) main_camera2_pane_t4

0x0006,

0xf654,	// (0x00074f5e) main_camera2_pane_t_ParamLimits

0xf654,	// (0x00074f5e) main_camera2_pane_t

0xab97,	// (0x000704a1) cams_zoom_pane_cp4_ParamLimits

0xab97,	// (0x000704a1) cams_zoom_pane_cp4

0xaba7,	// (0x000704b1) image2_cif_pane_ParamLimits

0xaba7,	// (0x000704b1) image2_cif_pane

0xabbc,	// (0x000704c6) image2_subqcif_pane_ParamLimits

0xabbc,	// (0x000704c6) image2_subqcif_pane

0xabcb,	// (0x000704d5) main_video2_pane_g1_ParamLimits

0xabcb,	// (0x000704d5) main_video2_pane_g1

0xabdd,	// (0x000704e7) main_video2_pane_g2_ParamLimits

0xabdd,	// (0x000704e7) main_video2_pane_g2

0xabed,	// (0x000704f7) main_video2_pane_g3_ParamLimits

0xabed,	// (0x000704f7) main_video2_pane_g3

0xabfd,	// (0x00070507) main_video2_pane_g4_ParamLimits

0xabfd,	// (0x00070507) main_video2_pane_g4

0xac0d,	// (0x00070517) main_video2_pane_g5_ParamLimits

0xac0d,	// (0x00070517) main_video2_pane_g5

0xac1d,	// (0x00070527) main_video2_pane_g6_ParamLimits

0xac1d,	// (0x00070527) main_video2_pane_g6

0x0005,

0xf663,	// (0x00074f6d) main_video2_pane_g_ParamLimits

0xf663,	// (0x00074f6d) main_video2_pane_g

0xac2f,	// (0x00070539) main_video2_pane_t1_ParamLimits

0xac2f,	// (0x00070539) main_video2_pane_t1

0xac49,	// (0x00070553) main_video2_pane_t2_ParamLimits

0xac49,	// (0x00070553) main_video2_pane_t2

0xac6f,	// (0x00070579) main_video2_pane_t3_ParamLimits

0xac6f,	// (0x00070579) main_video2_pane_t3

0x0002,

0xf670,	// (0x00074f7a) main_video2_pane_t_ParamLimits

0xf670,	// (0x00074f7a) main_video2_pane_t

0xa572,	// (0x0006fe7c) call_muted_g2

0x0001,

0xf612,	// (0x00074f1c) call_muted_g

0x0461,	// (0x00065d6b) main_mup2_pane

0x29ea,	// (0x000682f4) main_mup2_pane_g1_ParamLimits

0x29ea,	// (0x000682f4) main_mup2_pane_g1

0xac95,	// (0x0007059f) main_mup2_pane_g2_ParamLimits

0xac95,	// (0x0007059f) main_mup2_pane_g2

0xaf17,	// (0x00070821) main_mup_pane_g13_cp1

0xaf1f,	// (0x00070829) mup_volume_pane_cp1

0xacb5,	// (0x000705bf) main_mup2_pane_g4_ParamLimits

0xacb5,	// (0x000705bf) main_mup2_pane_g4

0xacca,	// (0x000705d4) main_mup2_pane_g5_ParamLimits

0xacca,	// (0x000705d4) main_mup2_pane_g5

0xacdf,	// (0x000705e9) main_mup2_pane_g6_ParamLimits

0xacdf,	// (0x000705e9) main_mup2_pane_g6

0xacf4,	// (0x000705fe) main_mup2_pane_g7_ParamLimits

0xacf4,	// (0x000705fe) main_mup2_pane_g7

0x0006,

0xf677,	// (0x00074f81) main_mup2_pane_g_ParamLimits

0xf677,	// (0x00074f81) main_mup2_pane_g

0xad10,	// (0x0007061a) main_mup2_pane_t1_ParamLimits

0xad10,	// (0x0007061a) main_mup2_pane_t1

0xad27,	// (0x00070631) main_mup2_pane_t2_ParamLimits

0xad27,	// (0x00070631) main_mup2_pane_t2

0xad3e,	// (0x00070648) main_mup2_pane_t3_ParamLimits

0xad3e,	// (0x00070648) main_mup2_pane_t3

0xad55,	// (0x0007065f) main_mup2_pane_t4_ParamLimits

0xad55,	// (0x0007065f) main_mup2_pane_t4

0xad6f,	// (0x00070679) main_mup2_pane_t5_ParamLimits

0xad6f,	// (0x00070679) main_mup2_pane_t5

0xad89,	// (0x00070693) main_mup2_pane_t6_ParamLimits

0xad89,	// (0x00070693) main_mup2_pane_t6

0x0005,

0xf686,	// (0x00074f90) main_mup2_pane_t_ParamLimits

0xf686,	// (0x00074f90) main_mup2_pane_t

0xadc1,	// (0x000706cb) mup2_visualizer_pane_ParamLimits

0xadc1,	// (0x000706cb) mup2_visualizer_pane

0xadf7,	// (0x00070701) mup_progress_pane_cp_ParamLimits

0xadf7,	// (0x00070701) mup_progress_pane_cp

0xaf02,	// (0x0007080c) mup_volume_pane_cp_ParamLimits

0xaf02,	// (0x0007080c) mup_volume_pane_cp

0xae0e,	// (0x00070718) mup2_visualizer_pane_g1_ParamLimits

0xae0e,	// (0x00070718) mup2_visualizer_pane_g1

0x29bc,	// (0x000682c6) mup2_visualizer_pane_g2_ParamLimits

0x29bc,	// (0x000682c6) mup2_visualizer_pane_g2

0xae23,	// (0x0007072d) mup2_visualizer_pane_g3_ParamLimits

0xae23,	// (0x0007072d) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x00074f9d) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x00074f9d) mup2_visualizer_pane_g

0x175c,	// (0x00067066) aid_size_cell_fmradio

0xa688,	// (0x0006ff92) aid_height_parent_landcape

0x0c38,	// (0x00066542) wml_content_pane_cp

0x0c40,	// (0x0006654a) wml_tabs_pane

0x0c49,	// (0x00066553) popup_wml_miniature_window

0x0c51,	// (0x0006655b) scroll_pane_cp021

0x0c65,	// (0x0006656f) wml_content_pane_comp8

0x0461,	// (0x00065d6b) bg_popup_sub_pane_cp05

0x29da,	// (0x000682e4) popup_wml_miniature_window_g1

0x29e2,	// (0x000682ec) wml_miniature_view_pane

0xae31,	// (0x0007073b) aid_size_wml_view

0xae39,	// (0x00070743) wml_miniature_view_pane_g1

0xae42,	// (0x0007074c) wml_miniature_view_pane_g2

0xae4b,	// (0x00070755) wml_miniature_view_pane_g3

0xae53,	// (0x0007075d) wml_miniature_view_pane_g4

0xae5b,	// (0x00070765) wml_miniature_view_pane_g5

0xae63,	// (0x0007076d) wml_miniature_view_pane_g6

0xae6b,	// (0x00070775) wml_miniature_view_pane_g7

0xae73,	// (0x0007077d) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x00074fa4) wml_miniature_view_pane_g

0x29ea,	// (0x000682f4) background_graphic_ParamLimits

0x29ea,	// (0x000682f4) background_graphic

0x29f6,	// (0x00068300) wml_tabs_2_pane

0x29ff,	// (0x00068309) wml_tabs_3_pane_ParamLimits

0x29ff,	// (0x00068309) wml_tabs_3_pane

0x2a11,	// (0x0006831b) wml_tabs_4_pane_ParamLimits

0x2a11,	// (0x0006831b) wml_tabs_4_pane

0x2a27,	// (0x00068331) wml_tabs_5_pane_ParamLimits

0x2a27,	// (0x00068331) wml_tabs_5_pane

0x2a41,	// (0x0006834b) wml_tabs_pane_g2_ParamLimits

0x2a41,	// (0x0006834b) wml_tabs_pane_g2

0x2a55,	// (0x0006835f) wml_tabs_pane_g3_ParamLimits

0x2a55,	// (0x0006835f) wml_tabs_pane_g3

0xae7b,	// (0x00070785) wml_tabs_2_active_pane_ParamLimits

0xae7b,	// (0x00070785) wml_tabs_2_active_pane

0xae8b,	// (0x00070795) wml_tabs_2_passive_pane_ParamLimits

0xae8b,	// (0x00070795) wml_tabs_2_passive_pane

0xae9b,	// (0x000707a5) wml_tabs_3_active_pane_cp_ParamLimits

0xae9b,	// (0x000707a5) wml_tabs_3_active_pane_cp

0xaeac,	// (0x000707b6) wml_tabs_3_passive_pane_ParamLimits

0xaeac,	// (0x000707b6) wml_tabs_3_passive_pane

0xaebd,	// (0x000707c7) wml_tabs_3_passive_pane_cp_ParamLimits

0xaebd,	// (0x000707c7) wml_tabs_3_passive_pane_cp

0xaece,	// (0x000707d8) tabs_4_active_pane

0xaed6,	// (0x000707e0) tabs_4_passive_pane

0xaede,	// (0x000707e8) tabs_4_passive_pane_cp

0xaee6,	// (0x000707f0) tabs_4_passive_pane_cp2

0x2712,	// (0x0006801c) aid_height_text

0x9c59,	// (0x0006f563) mup_volume_cont_pane_ParamLimits

0x9c59,	// (0x0006f563) mup_volume_cont_pane

0x79d7,	// (0x0006d2e1) aid_size_cell_pinb

0x06ec,	// (0x00065ff6) aid_size_list_pinb

0xade0,	// (0x000706ea) mup2_volume_cont_pane_ParamLimits

0xade0,	// (0x000706ea) mup2_volume_cont_pane

0xaeee,	// (0x000707f8) mup2_volume_cont_pane_g1_ParamLimits

0xaeee,	// (0x000707f8) mup2_volume_cont_pane_g1

0x760c,	// (0x0006cf16) aid_size_cell_touch_ParamLimits

0x760c,	// (0x0006cf16) aid_size_cell_touch

0x78b7,	// (0x0006d1c1) touch_pane_ParamLimits

0x78b7,	// (0x0006d1c1) touch_pane

0x75ee,	// (0x0006cef8) main_rss2_pane

0x2aab,	// (0x000683b5) listscroll_rss2_pane

0x2ab4,	// (0x000683be) rss2_navigation_pane

0x2abc,	// (0x000683c6) list_rss2_pane

0x12c7,	// (0x00066bd1) scroll_pane_cp22

0x2ac4,	// (0x000683ce) rss2_navigation_pane_g1

0x2acd,	// (0x000683d7) rss2_navigation_pane_g2

0x2ad5,	// (0x000683df) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x00074fb5) rss2_navigation_pane_g

0x2add,	// (0x000683e7) rss2_navigation_pane_t1

0xaf27,	// (0x00070831) rss2_list_single_pane_ParamLimits

0xaf27,	// (0x00070831) rss2_list_single_pane

0x2aeb,	// (0x000683f5) rss2_list_single_pane_t2

0x2af9,	// (0x00068403) rss2_list_single_pane_t3_ParamLimits

0x2af9,	// (0x00068403) rss2_list_single_pane_t3

0x2b16,	// (0x00068420) rss2_list_single_pane_t4

0x940b,	// (0x0006ed15) smil_status_pane_g1

0xa69f,	// (0x0006ffa9) main_image2_pane_ParamLimits

0xa69f,	// (0x0006ffa9) main_image2_pane

0xaaf3,	// (0x000703fd) main_camera2_pane_g9_ParamLimits

0xaaf3,	// (0x000703fd) main_camera2_pane_g9

0xab47,	// (0x00070451) main_camera2_pane_t5_ParamLimits

0xab47,	// (0x00070451) main_camera2_pane_t5

0xab59,	// (0x00070463) main_camera2_pane_t6_ParamLimits

0xab59,	// (0x00070463) main_camera2_pane_t6

0xaf63,	// (0x0007086d) main_image2_pane_g1_ParamLimits

0xaf63,	// (0x0007086d) main_image2_pane_g1

0xa1ea,	// (0x0006faf4) smil2_video_pane_ParamLimits

0xa1ea,	// (0x0006faf4) smil2_video_pane

0x64d7,	// (0x0006bde1) aid_zoom_text_primary_cp

0x785c,	// (0x0006d166) popup_preview_fixed_window

0x0ba1,	// (0x000664ab) im_reading_pane_g1

0xaa3d,	// (0x00070347) cams2_bc_adjust_pane_cp_ParamLimits

0xaa3d,	// (0x00070347) cams2_bc_adjust_pane_cp

0xab89,	// (0x00070493) cams2_bc_adjust_pane_ParamLimits

0xab89,	// (0x00070493) cams2_bc_adjust_pane

0xaf6f,	// (0x00070879) cams2_bc_adjust_pane_g1

0xaf77,	// (0x00070881) cams2_slider_pane

0xaf80,	// (0x0007088a) cams2_slider_pane_g1

0xaf89,	// (0x00070893) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x00074fbc) cams2_slider_pane_g

0x7ab6,	// (0x0006d3c0) calc_display_pane_ParamLimits

0x7ad4,	// (0x0006d3de) calc_paper_pane_ParamLimits

0x7af0,	// (0x0006d3fa) grid_calc_pane_ParamLimits

0x96c4,	// (0x0006efce) popup_clock_digital_window_t1_ParamLimits

0x16f9,	// (0x00067003) main_image_pane_t1

0x7a9c,	// (0x0006d3a6) aid_size_cell_calc_ParamLimits

0x7a9c,	// (0x0006d3a6) aid_size_cell_calc

0xa6c8,	// (0x0006ffd2) popup_blid_sat_info2_window_ParamLimits

0xa6c8,	// (0x0006ffd2) popup_blid_sat_info2_window

0x2b60,	// (0x0006846a) aid_size_cell_blid

0x2b68,	// (0x00068472) bg_popup_window_pane_cp07

0x2b8b,	// (0x00068495) grid_popup_blid_pane

0x2b95,	// (0x0006849f) heading_pane_cp05_ParamLimits

0x2b95,	// (0x0006849f) heading_pane_cp05

0x2c5f,	// (0x00068569) cell_popup_blid_pane_ParamLimits

0x2c5f,	// (0x00068569) cell_popup_blid_pane

0x2c85,	// (0x0006858f) cell_popup_blid_pane_g1

0x2c8d,	// (0x00068597) cell_popup_blid_pane_t1

0xada6,	// (0x000706b0) mup2_indicator_pane_ParamLimits

0xada6,	// (0x000706b0) mup2_indicator_pane

0x1414,	// (0x00066d1e) mup2_visualizer_osc_pane

0x29c8,	// (0x000682d2) mup2_visualizer_spec_pane_ParamLimits

0x29c8,	// (0x000682d2) mup2_visualizer_spec_pane

0xafa3,	// (0x000708ad) mup2_spec_half_pane

0xafac,	// (0x000708b6) mup2_spec_half_pane_cp

0xafb6,	// (0x000708c0) mup2_spec_bar_pane_ParamLimits

0xafb6,	// (0x000708c0) mup2_spec_bar_pane

0x2917,	// (0x00068221) mup2_spec_bar_pane_g1

0x2921,	// (0x0006822b) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00074f2f) mup2_spec_bar_pane_g

0xafd5,	// (0x000708df) mup2_osc_middle_pane

0x2933,	// (0x0006823d) mup2_visualizer_osc_pane_g1

0x0070,	// (0x0006597a) popup_number_entry_window_t1_ParamLimits

0x0083,	// (0x0006598d) popup_number_entry_window_t2_ParamLimits

0x0095,	// (0x0006599f) popup_number_entry_window_t3_ParamLimits

0x790e,	// (0x0006d218) popup_number_entry_window_t5_ParamLimits

0x790e,	// (0x0006d218) popup_number_entry_window_t5

0xf0e7,	// (0x000749f1) popup_number_entry_window_t_ParamLimits

0x00a7,	// (0x000659b1) text_title_cp2_ParamLimits

0x9ed1,	// (0x0006f7db) aid_hotspot_pointer_text2_pane

0x9f6b,	// (0x0006f875) main_viewer_pane_g9_ParamLimits

0x9f6b,	// (0x0006f875) main_viewer_pane_g9

0x0dd0,	// (0x000666da) cale_month_pane_t1_ParamLimits

0x0e3b,	// (0x00066745) bg_cale_pane_ParamLimits

0x0e53,	// (0x0006675d) list_cale_pane_ParamLimits

0x09b5,	// (0x000662bf) listscroll_cale_day_pane_t1

0x0e64,	// (0x0006676e) scroll_pane_cp09_ParamLimits

0x9c98,	// (0x0006f5a2) main_mup_eq_pane_t1_ParamLimits

0x9c98,	// (0x0006f5a2) main_mup_eq_pane_t1

0x9cb2,	// (0x0006f5bc) main_mup_eq_pane_t2_ParamLimits

0x9cb2,	// (0x0006f5bc) main_mup_eq_pane_t2

0x9cca,	// (0x0006f5d4) main_mup_eq_pane_t3_ParamLimits

0x9cca,	// (0x0006f5d4) main_mup_eq_pane_t3

0x9ce2,	// (0x0006f5ec) main_mup_eq_pane_t4_ParamLimits

0x9ce2,	// (0x0006f5ec) main_mup_eq_pane_t4

0x9cfa,	// (0x0006f604) main_mup_eq_pane_t5_ParamLimits

0x9cfa,	// (0x0006f604) main_mup_eq_pane_t5

0x9d12,	// (0x0006f61c) main_mup_eq_pane_t6_ParamLimits

0x9d12,	// (0x0006f61c) main_mup_eq_pane_t6

0x9d26,	// (0x0006f630) main_mup_eq_pane_t7_ParamLimits

0x9d26,	// (0x0006f630) main_mup_eq_pane_t7

0x9d3a,	// (0x0006f644) main_mup_eq_pane_t8_ParamLimits

0x9d3a,	// (0x0006f644) main_mup_eq_pane_t8

0x9d50,	// (0x0006f65a) main_mup_eq_pane_t9_ParamLimits

0x9d50,	// (0x0006f65a) main_mup_eq_pane_t9

0x9d68,	// (0x0006f672) main_mup_eq_pane_t10_ParamLimits

0x9d68,	// (0x0006f672) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x00074d7e) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x00074d7e) main_mup_eq_pane_t

0x9e25,	// (0x0006f72f) mup_equalizer_pane_cp5_ParamLimits

0x9e3b,	// (0x0006f745) mup_equalizer_pane_cp6_ParamLimits

0x9e53,	// (0x0006f75d) mup_equalizer_pane_cp7_ParamLimits

0x75ee,	// (0x0006cef8) main_gallery_pane

0x293c,	// (0x00068246) smil2_volume_pane

0x2957,	// (0x00068261) smil_status_volume_pane_g1_ParamLimits

0x2944,	// (0x0006824e) smil_status_volume_pane_g2_ParamLimits

0xa8b4,	// (0x000701be) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x00074f34) smil_status_volume_pane_g_ParamLimits

0x2b68,	// (0x00068472) bg_popup_window_pane_cp07_ParamLimits

0x2b76,	// (0x00068480) blid_firmament_pane

0xafde,	// (0x000708e8) aid_size_cell_gallery_ParamLimits

0xafde,	// (0x000708e8) aid_size_cell_gallery

0xafec,	// (0x000708f6) grid_gallery_pane_ParamLimits

0xafec,	// (0x000708f6) grid_gallery_pane

0xaffc,	// (0x00070906) cell_gallery_pane_ParamLimits

0xaffc,	// (0x00070906) cell_gallery_pane

0x2c9b,	// (0x000685a5) bg_cell_gallery_focus_pane_ParamLimits

0x2c9b,	// (0x000685a5) bg_cell_gallery_focus_pane

0x2cad,	// (0x000685b7) cell_gallery_pane_g1_ParamLimits

0x2cad,	// (0x000685b7) cell_gallery_pane_g1

0xb04a,	// (0x00070954) cell_gallery_pane_g2_ParamLimits

0xb04a,	// (0x00070954) cell_gallery_pane_g2

0xb057,	// (0x00070961) cell_gallery_pane_g3_ParamLimits

0xb057,	// (0x00070961) cell_gallery_pane_g3

0x2cb9,	// (0x000685c3) cell_gallery_pane_g4_ParamLimits

0x2cb9,	// (0x000685c3) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x00074fe2) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x00074fe2) cell_gallery_pane_g

0x2cc5,	// (0x000685cf) bg_cell_gallery_focus_pane_g1

0x2ccd,	// (0x000685d7) bg_cell_gallery_focus_pane_g2

0x2cd5,	// (0x000685df) bg_cell_gallery_focus_pane_g3

0x2cdd,	// (0x000685e7) bg_cell_gallery_focus_pane_g4

0x2ce5,	// (0x000685ef) bg_cell_gallery_focus_pane_g5

0x2ced,	// (0x000685f7) bg_cell_gallery_focus_pane_g6

0x2cf5,	// (0x000685ff) bg_cell_gallery_focus_pane_g7

0x2cfd,	// (0x00068607) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00074feb) bg_cell_gallery_focus_pane_g

0x2d05,	// (0x0006860f) aid_firma_cardinal

0x2d19,	// (0x00068623) blid_firmament_pane_t1

0x2d30,	// (0x0006863a) blid_firmament_pane_t2

0x2d47,	// (0x00068651) blid_firmament_pane_t3

0x2d5e,	// (0x00068668) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00074ffc) blid_firmament_pane_t

0x2d75,	// (0x0006867f) blid_sat_info_pane

0x2d85,	// (0x0006868f) blid_sat_info_pane_g1

0x2d85,	// (0x0006868f) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x00075005) blid_sat_info_pane_g

0x2d8f,	// (0x00068699) blid_sat_info_pane_t1

0x2d9d,	// (0x000686a7) smil2_volume_content_pane

0x2da6,	// (0x000686b0) smil2_volume_pane_g1

0x2dae,	// (0x000686b8) smil2_volume_content_pane_g1

0x2db7,	// (0x000686c1) smil2_volume_content_pane_g2

0x2dc0,	// (0x000686ca) smil2_volume_content_pane_g3

0x2dc9,	// (0x000686d3) smil2_volume_content_pane_g4

0x2dd2,	// (0x000686dc) smil2_volume_content_pane_g5

0x2ddb,	// (0x000686e5) smil2_volume_content_pane_g6

0x2de4,	// (0x000686ee) smil2_volume_content_pane_g7

0x2ded,	// (0x000686f7) smil2_volume_content_pane_g8

0x2df6,	// (0x00068700) smil2_volume_content_pane_g9

0x2dff,	// (0x00068709) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0007500a) smil2_volume_content_pane_g

0x80bc,	// (0x0006d9c6) cale_week_day_heading_pane_t1_ParamLimits

0x80d0,	// (0x0006d9da) cale_week_day_heading_pane_t2_ParamLimits

0x80e4,	// (0x0006d9ee) cale_week_day_heading_pane_t3_ParamLimits

0x80f8,	// (0x0006da02) cale_week_day_heading_pane_t4_ParamLimits

0x810c,	// (0x0006da16) cale_week_day_heading_pane_t5_ParamLimits

0x8120,	// (0x0006da2a) cale_week_day_heading_pane_t6_ParamLimits

0x8134,	// (0x0006da3e) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x00074af6) cale_week_day_heading_pane_t_ParamLimits

0x09c7,	// (0x000662d1) bg_cale_side_pane_ParamLimits

0x8148,	// (0x0006da52) cale_week_time_pane_t1_ParamLimits

0x8160,	// (0x0006da6a) cale_week_time_pane_t2_ParamLimits

0x8178,	// (0x0006da82) cale_week_time_pane_t3_ParamLimits

0x8190,	// (0x0006da9a) cale_week_time_pane_t4_ParamLimits

0x81a8,	// (0x0006dab2) cale_week_time_pane_t5_ParamLimits

0x81c0,	// (0x0006daca) cale_week_time_pane_t6_ParamLimits

0x81e0,	// (0x0006daea) cale_week_time_pane_t7_ParamLimits

0x8200,	// (0x0006db0a) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x00074b05) cale_week_time_pane_t_ParamLimits

0x8220,	// (0x0006db2a) cell_cale_week_pane_g2_ParamLimits

0x09c7,	// (0x000662d1) bg_cale_side_pane_cp01_ParamLimits

0x9270,	// (0x0006eb7a) cale_month_week_pane_t1_ParamLimits

0x9287,	// (0x0006eb91) cale_month_week_pane_t2_ParamLimits

0x929e,	// (0x0006eba8) cale_month_week_pane_t3_ParamLimits

0x92b5,	// (0x0006ebbf) cale_month_week_pane_t4_ParamLimits

0x92cc,	// (0x0006ebd6) cale_month_week_pane_t5_ParamLimits

0x92eb,	// (0x0006ebf5) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x00074bde) cale_month_week_pane_t_ParamLimits

0x93d8,	// (0x0006ece2) cell_cale_month_pane_g1_ParamLimits

0x75ee,	// (0x0006cef8) main_cale_event_viewer_pane

0x75ee,	// (0x0006cef8) listscroll_cale_event_viewer_pane

0x2e08,	// (0x00068712) list_cale_ev_pane

0x2e10,	// (0x0006871a) scroll_pane_cp023

0x2e1c,	// (0x00068726) field_cale_ev_pane_ParamLimits

0x2e1c,	// (0x00068726) field_cale_ev_pane

0x2e36,	// (0x00068740) field_cale_ev_content_pane_ParamLimits

0x2e36,	// (0x00068740) field_cale_ev_content_pane

0x2e42,	// (0x0006874c) field_cale_ev_pane_g1_ParamLimits

0x2e42,	// (0x0006874c) field_cale_ev_pane_g1

0x2e4e,	// (0x00068758) field_cale_ev_pane_g2_ParamLimits

0x2e4e,	// (0x00068758) field_cale_ev_pane_g2

0x2e66,	// (0x00068770) field_cale_ev_pane_g3_ParamLimits

0x2e66,	// (0x00068770) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0007501f) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0007501f) field_cale_ev_pane_g

0x2e7e,	// (0x00068788) field_cale_ev_pane_t1_ParamLimits

0x2e7e,	// (0x00068788) field_cale_ev_pane_t1

0x2e95,	// (0x0006879f) field_cale_ev_content_pane_t1_ParamLimits

0x2e95,	// (0x0006879f) field_cale_ev_content_pane_t1

0x159d,	// (0x00066ea7) bg_button_pane_cp01

0x07ff,	// (0x00066109) listscroll_cale_week_pane_ParamLimits

0x7e91,	// (0x0006d79b) popup_toolbar_window_cp01

0x09b5,	// (0x000662bf) listscroll_cale_week_pane_t1_ParamLimits

0x07ff,	// (0x00066109) listscroll_cale_day_pane_ParamLimits

0x7e91,	// (0x0006d79b) popup_toolbar_window_cp02

0x09b5,	// (0x000662bf) listscroll_cale_day_pane_t1_ParamLimits

0x07ff,	// (0x00066109) main_cale_month_pane_ParamLimits

0xa78c,	// (0x00070096) popup_toolbar_window_cp03_ParamLimits

0xa78c,	// (0x00070096) popup_toolbar_window_cp03

0xa0fc,	// (0x0006fa06) main_image_pane_g2_ParamLimits

0xa0fc,	// (0x0006fa06) main_image_pane_g2

0xa108,	// (0x0006fa12) main_image_pane_g3_ParamLimits

0xa108,	// (0x0006fa12) main_image_pane_g3

0x0002,

0xf506,	// (0x00074e10) main_image_pane_g_ParamLimits

0xf506,	// (0x00074e10) main_image_pane_g

0x16f9,	// (0x00067003) main_image_pane_t1_ParamLimits

0xa114,	// (0x0006fa1e) main_image_pane_t2_ParamLimits

0xa114,	// (0x0006fa1e) main_image_pane_t2

0xa126,	// (0x0006fa30) main_image_pane_t3_ParamLimits

0xa126,	// (0x0006fa30) main_image_pane_t3

0xa138,	// (0x0006fa42) main_image_pane_t4_ParamLimits

0xa138,	// (0x0006fa42) main_image_pane_t4

0x0003,

0xf50d,	// (0x00074e17) main_image_pane_t_ParamLimits

0xf50d,	// (0x00074e17) main_image_pane_t

0xa14a,	// (0x0006fa54) popup_image_details_window_cp01

0xa154,	// (0x0006fa5e) popup_toobar_trans_pane_cp01_ParamLimits

0xa154,	// (0x0006fa5e) popup_toobar_trans_pane_cp01

0xa711,	// (0x0007001b) popup_image_details_window_ParamLimits

0xa711,	// (0x0007001b) popup_image_details_window

0x289d,	// (0x000681a7) popup_image_focus_window

0xaa2f,	// (0x00070339) camera2_autofocus_pane_ParamLimits

0xaa2f,	// (0x00070339) camera2_autofocus_pane

0x75ee,	// (0x0006cef8) bg_popup_sub_pane_cp06

0x2eb2,	// (0x000687bc) popup_image_focus_window_g1

0x2eba,	// (0x000687c4) popup_image_focus_window_g2

0x2ec2,	// (0x000687cc) popup_image_focus_window_g3

0x2eca,	// (0x000687d4) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x00075026) popup_image_focus_window_g

0x2ed2,	// (0x000687dc) popup_image_focus_window_t1

0x2ee0,	// (0x000687ea) popup_image_focus_window_t2

0x2ef0,	// (0x000687fa) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0007502f) popup_image_focus_window_t

0x2efe,	// (0x00068808) camera2_autofocus_pane_g1

0xa69f,	// (0x0006ffa9) bg_tb_trans_pane_cp01

0x2f0c,	// (0x00068816) popup_image_details_window_g1

0x2f1f,	// (0x00068829) popup_image_details_window_g2

0x0002,

0xf737,	// (0x00075041) popup_image_details_window_g

0x2f48,	// (0x00068852) popup_image_details_window_t1

0x2f5a,	// (0x00068864) popup_image_details_window_t2

0x2f73,	// (0x0006887d) popup_image_details_window_t3

0x2f87,	// (0x00068891) popup_image_details_window_t4

0x2fa2,	// (0x000688ac) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x00075048) popup_image_details_window_t

0x07c7,	// (0x000660d1) bg_calc_paper_pane_ParamLimits

0x75ee,	// (0x0006cef8) grid_highlight_pane_cp013

0x7bed,	// (0x0006d4f7) list_calc_pane_ParamLimits

0x7bff,	// (0x0006d509) scroll_pane_cp024

0x07ff,	// (0x00066109) bg_calc_display_pane_ParamLimits

0x7c07,	// (0x0006d511) calc_display_pane_t1_ParamLimits

0x7c1c,	// (0x0006d526) calc_display_pane_t2_ParamLimits

0x7c31,	// (0x0006d53b) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x00074a78) calc_display_pane_t_ParamLimits

0x7d18,	// (0x0006d622) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x00074a95) cell_calc_pane_g

0x7d21,	// (0x0006d62b) cell_calc_pane_t1

0x0882,	// (0x0006618c) grid_highlight_pane_cp02_ParamLimits

0x0898,	// (0x000661a2) toolbar_button_pane_cp01_ParamLimits

0x0898,	// (0x000661a2) toolbar_button_pane_cp01

0x173e,	// (0x00067048) temp_image_control_pane_ParamLimits

0x173e,	// (0x00067048) temp_image_control_pane

0xa69f,	// (0x0006ffa9) main_mp3_pane

0x2fbc,	// (0x000688c6) temp_image_control_pane_g1_ParamLimits

0x2fbc,	// (0x000688c6) temp_image_control_pane_g1

0x2fca,	// (0x000688d4) temp_image_control_pane_g2_ParamLimits

0x2fca,	// (0x000688d4) temp_image_control_pane_g2

0x2fdc,	// (0x000688e6) temp_image_control_pane_g3_ParamLimits

0x2fdc,	// (0x000688e6) temp_image_control_pane_g3

0xb094,	// (0x0007099e) temp_image_control_pane_g4_ParamLimits

0xb094,	// (0x0007099e) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x00075053) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x00075053) temp_image_control_pane_g

0x2fbc,	// (0x000688c6) main_mp3_pane_g1

0xb0a5,	// (0x000709af) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0007505c) main_mp3_pane_g

0x301f,	// (0x00068929) main_mp3_pane_t1

0x0ab0,	// (0x000663ba) main_camera_pane_g8_ParamLimits

0x0ab0,	// (0x000663ba) main_camera_pane_g8

0x84a8,	// (0x0006ddb2) main_video_pane_g7_ParamLimits

0x84a8,	// (0x0006ddb2) main_video_pane_g7

0xab77,	// (0x00070481) main_camera2_pane_t7_ParamLimits

0xab77,	// (0x00070481) main_camera2_pane_t7

0x0bf8,	// (0x00066502) scroll_pane_cp025_ParamLimits

0x0bf8,	// (0x00066502) scroll_pane_cp025

0x0c0c,	// (0x00066516) scroll_pane_cp026_ParamLimits

0x0c0c,	// (0x00066516) scroll_pane_cp026

0x0c1b,	// (0x00066525) wml_content_pane_ParamLimits

0x75ee,	// (0x0006cef8) main_touch_calib_pane

0xb149,	// (0x00070a53) main_touch_calib_pane_g1

0xb155,	// (0x00070a5f) main_touch_calib_pane_g2

0xb161,	// (0x00070a6b) main_touch_calib_pane_g3

0xb16d,	// (0x00070a77) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0007507a) main_touch_calib_pane_g

0xb179,	// (0x00070a83) main_touch_calib_pane_t1

0xb190,	// (0x00070a9a) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x00075083) main_touch_calib_pane_t

0x1355,	// (0x00066c5f) mup_progress_pane_cp02

0x1374,	// (0x00066c7e) navi_pane_g1

0x13d6,	// (0x00066ce0) navi_pane_mp_t3

0xa69f,	// (0x0006ffa9) main_mp3_pane_ParamLimits

0xa7ca,	// (0x000700d4) navi_pane_ParamLimits

0x2fbc,	// (0x000688c6) main_mp3_pane_g1_ParamLimits

0xb0a5,	// (0x000709af) main_mp3_pane_g2_ParamLimits

0xb0b1,	// (0x000709bb) main_mp3_pane_g3_ParamLimits

0xb0b1,	// (0x000709bb) main_mp3_pane_g3

0xb0bd,	// (0x000709c7) main_mp3_pane_g4_ParamLimits

0xb0bd,	// (0x000709c7) main_mp3_pane_g4

0x2fec,	// (0x000688f6) main_mp3_pane_g5_ParamLimits

0x2fec,	// (0x000688f6) main_mp3_pane_g5

0x2ffa,	// (0x00068904) main_mp3_pane_g6_ParamLimits

0x2ffa,	// (0x00068904) main_mp3_pane_g6

0x3007,	// (0x00068911) main_mp3_pane_g7_ParamLimits

0x3007,	// (0x00068911) main_mp3_pane_g7

0x3013,	// (0x0006891d) main_mp3_pane_g8_ParamLimits

0x3013,	// (0x0006891d) main_mp3_pane_g8

0xf752,	// (0x0007505c) main_mp3_pane_g_ParamLimits

0xb0c9,	// (0x000709d3) main_mp3_pane_t2

0xb0d9,	// (0x000709e3) main_mp3_pane_t3

0x302d,	// (0x00068937) main_mp3_pane_t4

0x303b,	// (0x00068945) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0007506d) main_mp3_pane_t

0x3049,	// (0x00068953) mup_progress_pane_cp01

0x64d7,	// (0x0006bde1) aid_zoom_text_secondary2

0x2e08,	// (0x00068712) list_cale_ev2_pane

0x2e10,	// (0x0006871a) scroll_pane_cp023_ParamLimits

0xb1e3,	// (0x00070aed) field_cale_ev2_pane_ParamLimits

0xb1e3,	// (0x00070aed) field_cale_ev2_pane

0xb217,	// (0x00070b21) field_cale_ev2_pane_g1_ParamLimits

0xb217,	// (0x00070b21) field_cale_ev2_pane_g1

0xb223,	// (0x00070b2d) field_cale_ev2_pane_g2_ParamLimits

0xb223,	// (0x00070b2d) field_cale_ev2_pane_g2

0xb23b,	// (0x00070b45) field_cale_ev2_pane_g3_ParamLimits

0xb23b,	// (0x00070b45) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0007508e) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0007508e) field_cale_ev2_pane_g

0x67e9,	// (0x0006c0f3) field_cale_ev2_pane_t1_ParamLimits

0x67e9,	// (0x0006c0f3) field_cale_ev2_pane_t1

0x6800,	// (0x0006c10a) field_cale_ev2_pane_t2_ParamLimits

0x6800,	// (0x0006c10a) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x00075097) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x00075097) field_cale_ev2_pane_t

0x9fd3,	// (0x0006f8dd) main_postcard_pane_g5_ParamLimits

0x9fd3,	// (0x0006f8dd) main_postcard_pane_g5

0x9fe1,	// (0x0006f8eb) main_postcard_pane_g6_ParamLimits

0x9fe1,	// (0x0006f8eb) main_postcard_pane_g6

0x82e8,	// (0x0006dbf2) camera2_autofocus_pane_cp_ParamLimits

0x82e8,	// (0x0006dbf2) camera2_autofocus_pane_cp

0xa69f,	// (0x0006ffa9) main_mup3_pane

0xb27f,	// (0x00070b89) main_mup3_pane_g1_ParamLimits

0xb27f,	// (0x00070b89) main_mup3_pane_g1

0xb2a0,	// (0x00070baa) main_mup3_pane_g2_ParamLimits

0xb2a0,	// (0x00070baa) main_mup3_pane_g2

0xb31f,	// (0x00070c29) main_mup3_pane_g3_ParamLimits

0xb31f,	// (0x00070c29) main_mup3_pane_g3

0xb362,	// (0x00070c6c) main_mup3_pane_g4_ParamLimits

0xb362,	// (0x00070c6c) main_mup3_pane_g4

0xb3a5,	// (0x00070caf) main_mup3_pane_g5_ParamLimits

0xb3a5,	// (0x00070caf) main_mup3_pane_g5

0xb3ea,	// (0x00070cf4) main_mup3_pane_g6_ParamLimits

0xb3ea,	// (0x00070cf4) main_mup3_pane_g6

0x3051,	// (0x0006895b) main_mup3_pane_g7_ParamLimits

0x3051,	// (0x0006895b) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x000750a7) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x000750a7) main_mup3_pane_g

0xb460,	// (0x00070d6a) main_mup3_pane_t1_ParamLimits

0xb460,	// (0x00070d6a) main_mup3_pane_t1

0xb4cf,	// (0x00070dd9) main_mup3_pane_t2_ParamLimits

0xb4cf,	// (0x00070dd9) main_mup3_pane_t2

0xb598,	// (0x00070ea2) main_mup3_pane_t4_ParamLimits

0xb598,	// (0x00070ea2) main_mup3_pane_t4

0xb5ec,	// (0x00070ef6) main_mup3_pane_t5_ParamLimits

0xb5ec,	// (0x00070ef6) main_mup3_pane_t5

0xb69c,	// (0x00070fa6) main_mup3_pane_t6_ParamLimits

0xb69c,	// (0x00070fa6) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x000750b8) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x000750b8) main_mup3_pane_t

0xb748,	// (0x00071052) mup3_progress_pane_ParamLimits

0xb748,	// (0x00071052) mup3_progress_pane

0xb7bc,	// (0x000710c6) popup_mup3_control_window_ParamLimits

0xb7bc,	// (0x000710c6) popup_mup3_control_window

0x305f,	// (0x00068969) popup_mup3_text_window

0xb7d5,	// (0x000710df) mup3_progress_pane_t1

0xb7f4,	// (0x000710fe) mup3_progress_pane_t2

0x3067,	// (0x00068971) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x000750c5) mup3_progress_pane_t

0x3084,	// (0x0006898e) mup_progress_pane_cp03

0x75ee,	// (0x0006cef8) bg_tb_trans_pane_cp04

0xb813,	// (0x0007111d) mup3_volume_pane

0xb81b,	// (0x00071125) popup_mup3_control_window_g1

0xb824,	// (0x0007112e) mup3_volume_pane_g1

0xb82d,	// (0x00071137) mup3_volume_pane_g2

0xb836,	// (0x00071140) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x000750cc) mup3_volume_pane_g

0x75ee,	// (0x0006cef8) bg_tb_trans_pane_cp03

0x3094,	// (0x0006899e) popup_mup3_text_window_g1

0x309c,	// (0x000689a6) popup_mup3_text_window_t1

0x0859,	// (0x00066163) list_calc_item_pane_g1_ParamLimits

0x2a92,	// (0x0006839c) mup_volume_pane_cp_g1

0xb1a7,	// (0x00070ab1) main_touch_calib_pane_t3

0xb1bb,	// (0x00070ac5) main_touch_calib_pane_t4

0xb1cf,	// (0x00070ad9) main_touch_calib_pane_t5

0x75f8,	// (0x0006cf02) aid_cell_size_toolbar2

0x7600,	// (0x0006cf0a) aid_popup3_width_pane

0x7640,	// (0x0006cf4a) aid_zoom_text_msg_primary

0x82d2,	// (0x0006dbdc) vorec_t7

0x081d,	// (0x00066127) bg_calc_paper_pane_g1_ParamLimits

0x0835,	// (0x0006613f) bg_calc_paper_pane_g2_ParamLimits

0x0829,	// (0x00066133) bg_calc_paper_pane_g3_ParamLimits

0x084d,	// (0x00066157) bg_calc_paper_pane_g4_ParamLimits

0x0841,	// (0x0006614b) bg_calc_paper_pane_g5_ParamLimits

0x7c70,	// (0x0006d57a) bg_calc_paper_pane_g6_ParamLimits

0x7c81,	// (0x0006d58b) bg_calc_paper_pane_g7_ParamLimits

0x7c92,	// (0x0006d59c) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x00074a7f) bg_calc_paper_pane_g_ParamLimits

0x7ca3,	// (0x0006d5ad) calc_bg_paper_pane_g9_ParamLimits

0x83d1,	// (0x0006dcdb) image_qvga_pane_ParamLimits

0x83d1,	// (0x0006dcdb) image_qvga_pane

0x06bc,	// (0x00065fc6) bg_popup_sub_pane_cp04_ParamLimits

0x1675,	// (0x00066f7f) popup_mup_playback_window_g1_ParamLimits

0x1681,	// (0x00066f8b) popup_mup_playback_window_t1_ParamLimits

0x1696,	// (0x00066fa0) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00074e0b) popup_mup_playback_window_t_ParamLimits

0xaca6,	// (0x000705b0) main_mup2_pane_g3_ParamLimits

0xaca6,	// (0x000705b0) main_mup2_pane_g3

0x8691,	// (0x0006df9b) popup_toolbar_window_cp04

0x1a8b,	// (0x00067395) popup_call2_audio_second_window_g3_ParamLimits

0x1a8b,	// (0x00067395) popup_call2_audio_second_window_g3

0x1e95,	// (0x0006779f) popup_call2_audio_first_window_g4_ParamLimits

0x1e95,	// (0x0006779f) popup_call2_audio_first_window_g4

0x2514,	// (0x00067e1e) popup_call2_audio_in_window_g4_ParamLimits

0x2514,	// (0x00067e1e) popup_call2_audio_in_window_g4

0xa0ef,	// (0x0006f9f9) aid_area_sk_bg_cut_ParamLimits

0xa0ef,	// (0x0006f9f9) aid_area_sk_bg_cut

0x16ab,	// (0x00066fb5) aid_area_sk_bg_cut_2_ParamLimits

0x16ab,	// (0x00066fb5) aid_area_sk_bg_cut_2

0xb03a,	// (0x00070944) aid_placing_details_win

0xb042,	// (0x0007094c) aid_placing_details_win_2

0x2efe,	// (0x00068808) camera2_autofocus_pane_g1_ParamLimits

0x784d,	// (0x0006d157) popup_fixed_preview_cale_window_ParamLimits

0x784d,	// (0x0006d157) popup_fixed_preview_cale_window

0x1440,	// (0x00066d4a) navi_slider_pane_g3

0x1437,	// (0x00066d41) navi_slider_pane_g4

0x142e,	// (0x00066d38) navi_slider_pane_g5

0x1440,	// (0x00066d4a) navi_slider_pane_g6

0x9a2c,	// (0x0006f336) navi_slider_pane_g7

0x156a,	// (0x00066e74) mup_scale_pane_g3

0x1573,	// (0x00066e7d) mup_scale_pane_g4

0x157c,	// (0x00066e86) mup_scale_pane_g5

0x9e6b,	// (0x0006f775) mup_scale_pane_g6

0x9e74,	// (0x0006f77e) mup_scale_pane_g7

0x1440,	// (0x00066d4a) cams2_slider_pane_g3

0x2b47,	// (0x00068451) cams2_slider_pane_g4

0xaf92,	// (0x0007089c) cams2_slider_pane_g5

0x1440,	// (0x00066d4a) cams2_slider_pane_g6

0xaf9a,	// (0x000708a4) cams2_slider_pane_g7

0x2d85,	// (0x0006868f) camera2_autofocus_pane_cp_g1

0x30aa,	// (0x000689b4) bg_popup_preview_window_pane_cp02_ParamLimits

0x30aa,	// (0x000689b4) bg_popup_preview_window_pane_cp02

0x30b6,	// (0x000689c0) list_fp_cale_pane_ParamLimits

0x30b6,	// (0x000689c0) list_fp_cale_pane

0x30c2,	// (0x000689cc) popup_fixed_preview_cale_window_t1_ParamLimits

0x30c2,	// (0x000689cc) popup_fixed_preview_cale_window_t1

0xb83f,	// (0x00071149) popup_fixed_preview_cale_window_t2_ParamLimits

0xb83f,	// (0x00071149) popup_fixed_preview_cale_window_t2

0xb854,	// (0x0007115e) popup_fixed_preview_cale_window_t3_ParamLimits

0xb854,	// (0x0007115e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x000750d3) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x000750d3) popup_fixed_preview_cale_window_t

0xb869,	// (0x00071173) list_single_fp_cale_pane_ParamLimits

0xb869,	// (0x00071173) list_single_fp_cale_pane

0x30e0,	// (0x000689ea) list_single_fp_cale_pane_g1_ParamLimits

0x30e0,	// (0x000689ea) list_single_fp_cale_pane_g1

0x30ec,	// (0x000689f6) list_single_fp_cale_pane_g2_ParamLimits

0x30ec,	// (0x000689f6) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x000750da) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x000750da) list_single_fp_cale_pane_g

0x3105,	// (0x00068a0f) list_single_fp_cale_pane_t1_ParamLimits

0x3105,	// (0x00068a0f) list_single_fp_cale_pane_t1

0x3117,	// (0x00068a21) list_single_fp_cale_pane_t2_ParamLimits

0x3117,	// (0x00068a21) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x000750e1) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x000750e1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x75ee,	// (0x0006cef8) main_dialer_pane

0xb87e,	// (0x00071188) aid_cell_size_keypad

0xb888,	// (0x00071192) dialer_ne_pane

0xb892,	// (0x0007119c) grid_dialer_command_1_pane

0xb89a,	// (0x000711a4) grid_dialer_command_2_pane

0xb8a2,	// (0x000711ac) grid_dialer_keypad_pane

0xb8b6,	// (0x000711c0) bg_popup_call_pane_cp06_ParamLimits

0xb8b6,	// (0x000711c0) bg_popup_call_pane_cp06

0xb8c2,	// (0x000711cc) dialer_ne_clear_pane_ParamLimits

0xb8c2,	// (0x000711cc) dialer_ne_clear_pane

0x314a,	// (0x00068a54) dialer_ne_pane_g1

0x3152,	// (0x00068a5c) dialer_ne_pane_t1_ParamLimits

0x3152,	// (0x00068a5c) dialer_ne_pane_t1

0xb8ce,	// (0x000711d8) dialer_ne_pane_t2_ParamLimits

0xb8ce,	// (0x000711d8) dialer_ne_pane_t2

0xb8eb,	// (0x000711f5) dialer_ne_pane_t3_ParamLimits

0xb8eb,	// (0x000711f5) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x000750e6) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x000750e6) dialer_ne_pane_t

0xb90f,	// (0x00071219) dialer_ne_pane_t3_copy1_ParamLimits

0xb90f,	// (0x00071219) dialer_ne_pane_t3_copy1

0xb933,	// (0x0007123d) cell_dialer_keypad_pane_ParamLimits

0xb933,	// (0x0007123d) cell_dialer_keypad_pane

0xb94a,	// (0x00071254) cell_dialer_command_1_pane_ParamLimits

0xb94a,	// (0x00071254) cell_dialer_command_1_pane

0xb960,	// (0x0007126a) cell_dialer_command_2_pane_ParamLimits

0xb960,	// (0x0007126a) cell_dialer_command_2_pane

0x3164,	// (0x00068a6e) bg_button_pane_cp02_ParamLimits

0x3164,	// (0x00068a6e) bg_button_pane_cp02

0xb96f,	// (0x00071279) cell_dialer_keypad_pane_g1_ParamLimits

0xb96f,	// (0x00071279) cell_dialer_keypad_pane_g1

0x3164,	// (0x00068a6e) bg_button_pane_cp03_ParamLimits

0x3164,	// (0x00068a6e) bg_button_pane_cp03

0xb984,	// (0x0007128e) cell_dialer_command_1_pane_g1_ParamLimits

0xb984,	// (0x0007128e) cell_dialer_command_1_pane_g1

0x3170,	// (0x00068a7a) bg_button_pane_cp04

0xb998,	// (0x000712a2) cell_dialer_command_2_pane_g1

0x1414,	// (0x00066d1e) bg_button_pane_cp06

0x3178,	// (0x00068a82) dialer_ne_clear_pane_g1

0x996f,	// (0x0006f279) navi_pane_g2

0x999d,	// (0x0006f2a7) navi_pane_g3

0x0002,

0xf404,	// (0x00074d0e) navi_pane_g

0x99c8,	// (0x0006f2d2) navi_pane_mv_g2

0x99ef,	// (0x0006f2f9) navi_pane_mv_g5

0x99f7,	// (0x0006f301) navi_pane_mv_t1

0x07ff,	// (0x00066109) main_clock2_pane

0xb9cb,	// (0x000712d5) main_clock2_list_pane_ParamLimits

0xb9cb,	// (0x000712d5) main_clock2_list_pane

0xb9f5,	// (0x000712ff) main_clock2_pane_t1_ParamLimits

0xb9f5,	// (0x000712ff) main_clock2_pane_t1

0xba19,	// (0x00071323) main_clock2_pane_t2_ParamLimits

0xba19,	// (0x00071323) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x000750ed) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x000750ed) main_clock2_pane_t

0xba74,	// (0x0007137e) popup_clock_analogue_window_cp03_ParamLimits

0xba74,	// (0x0007137e) popup_clock_analogue_window_cp03

0xba94,	// (0x0007139e) popup_clock_digital_window_cp02_ParamLimits

0xba94,	// (0x0007139e) popup_clock_digital_window_cp02

0xbb09,	// (0x00071413) main_clock2_list_single_pane_ParamLimits

0xbb09,	// (0x00071413) main_clock2_list_single_pane

0x1414,	// (0x00066d1e) list_highlight_pane_cp05

0x3180,	// (0x00068a8a) main_clock2_list_single_pane_t1

0x8691,	// (0x0006df9b) popup_toolbar_window_cp04_ParamLimits

0xb064,	// (0x0007096e) camera2_autofocus_pane_g2_ParamLimits

0xb064,	// (0x0007096e) camera2_autofocus_pane_g2

0xb070,	// (0x0007097a) camera2_autofocus_pane_g3_ParamLimits

0xb070,	// (0x0007097a) camera2_autofocus_pane_g3

0xb07c,	// (0x00070986) camera2_autofocus_pane_g4_ParamLimits

0xb07c,	// (0x00070986) camera2_autofocus_pane_g4

0xb088,	// (0x00070992) camera2_autofocus_pane_g5_ParamLimits

0xb088,	// (0x00070992) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x00075036) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x00075036) camera2_autofocus_pane_g

0xb25f,	// (0x00070b69) camera2_autofocus_pane_cp_g2

0xb267,	// (0x00070b71) camera2_autofocus_pane_cp_g3

0xb26f,	// (0x00070b79) camera2_autofocus_pane_cp_g4

0xb277,	// (0x00070b81) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0007509c) camera2_autofocus_pane_cp_g

0xb8ae,	// (0x000711b8) popup_dialer_spcha_window

0x75ee,	// (0x0006cef8) bg_popup_sub_pane_cp07

0x318e,	// (0x00068a98) list_spcha_pane

0x3196,	// (0x00068aa0) list_single_spcha_pane_ParamLimits

0x3196,	// (0x00068aa0) list_single_spcha_pane

0x75ee,	// (0x0006cef8) list_highlight_pane_cp06

0x31a7,	// (0x00068ab1) list_single_spcha_pane_t1

0x22be,	// (0x00067bc8) popup_call2_audio_out_window_g4_ParamLimits

0x22be,	// (0x00067bc8) popup_call2_audio_out_window_g4

0x75ee,	// (0x0006cef8) main_imed2_pane

0x28a5,	// (0x000681af) popup_imed_adjust2_window

0xa71f,	// (0x00070029) popup_imed_trans_window_ParamLimits

0xa71f,	// (0x00070029) popup_imed_trans_window

0x2bc1,	// (0x000684cb) popup_blid_sat_info2_window_t1

0x2bcf,	// (0x000684d9) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x00074fcb) popup_blid_sat_info2_window_t

0xbbb3,	// (0x000714bd) aid_size_cell_colour_35

0xbbcd,	// (0x000714d7) aid_size_cell_colour_112

0xbbe4,	// (0x000714ee) aid_size_cell_effect

0xa69f,	// (0x0006ffa9) bg_tb_trans_pane_cp02

0x0f7e,	// (0x00066888) heading_imed_pane

0xbbfe,	// (0x00071508) listscroll_imed_pane

0x31b5,	// (0x00068abf) heading_imed_pane_g1

0x31bd,	// (0x00068ac7) heading_imed_pane_t1

0x31cb,	// (0x00068ad5) grid_imed_colour_35_pane_ParamLimits

0x31cb,	// (0x00068ad5) grid_imed_colour_35_pane

0xbc0a,	// (0x00071514) grid_imed_effect_pane

0x31e6,	// (0x00068af0) list_imed_aspect_pane

0xbc1a,	// (0x00071524) scroll_pane_cp027_ParamLimits

0xbc1a,	// (0x00071524) scroll_pane_cp027

0xbc26,	// (0x00071530) cell_imed_effect_pane_ParamLimits

0xbc26,	// (0x00071530) cell_imed_effect_pane

0x31ee,	// (0x00068af8) cell_imed_colour_pane_ParamLimits

0x31ee,	// (0x00068af8) cell_imed_colour_pane

0x3230,	// (0x00068b3a) cell_imed_colour_pane_g1_ParamLimits

0x3230,	// (0x00068b3a) cell_imed_colour_pane_g1

0x3241,	// (0x00068b4b) hgihlgiht_grid_pane_cp016_ParamLimits

0x3241,	// (0x00068b4b) hgihlgiht_grid_pane_cp016

0xbc3e,	// (0x00071548) cell_imed_effect_pane_g1

0xbc46,	// (0x00071550) grid_highlight_pane_cp017

0x3252,	// (0x00068b5c) list_imed_single_pane_ParamLimits

0x3252,	// (0x00068b5c) list_imed_single_pane

0x75ee,	// (0x0006cef8) list_highlight_pane_cp07

0x3269,	// (0x00068b73) list_imed_aspect_pane_comp1_t1

0x287d,	// (0x00068187) bg_tb_trans_pane_cp05

0x328b,	// (0x00068b95) popup_imed_adjust2_window_g1

0x32b2,	// (0x00068bbc) popup_imed_adjust2_window_t1

0x32ca,	// (0x00068bd4) slider_imed_adjust_pane

0x32de,	// (0x00068be8) slider_imed_adjust_pane_g1

0x32ee,	// (0x00068bf8) slider_imed_adjust_pane_g2

0x32fe,	// (0x00068c08) slider_imed_adjust_pane_g3

0x330f,	// (0x00068c19) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0007510a) slider_imed_adjust_pane_g

0xbc4f,	// (0x00071559) aid_size_cell_clipart2

0xbc5b,	// (0x00071565) grid_imed_clipart_pane

0x3320,	// (0x00068c2a) scroll_pane_cp031

0xbc65,	// (0x0007156f) cell_imed_clipart_pane_ParamLimits

0xbc65,	// (0x0007156f) cell_imed_clipart_pane

0xbc8c,	// (0x00071596) cell_imed_clipart_pane_g1

0x75ee,	// (0x0006cef8) grid_highlight_pane_cp014

0xb9d7,	// (0x000712e1) main_clock2_pane_g1_ParamLimits

0xb9d7,	// (0x000712e1) main_clock2_pane_g1

0xbab0,	// (0x000713ba) aid_call2_pane_cp10

0xbac2,	// (0x000713cc) aid_call_pane_cp10

0x1349,	// (0x00066c53) popup_clock_analogue_window_cp10_g1

0x1349,	// (0x00066c53) popup_clock_analogue_window_cp10_g2

0xbad4,	// (0x000713de) popup_clock_analogue_window_cp10_g3

0xbad4,	// (0x000713de) popup_clock_analogue_window_cp10_g4

0x1349,	// (0x00066c53) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x000750f8) popup_clock_analogue_window_cp10_g

0xbaea,	// (0x000713f4) popup_clock_analogue_window_cp10_t1

0xbb1b,	// (0x00071425) clock_digital_number_pane_cp10_ParamLimits

0xbb1b,	// (0x00071425) clock_digital_number_pane_cp10

0xbb33,	// (0x0007143d) clock_digital_number_pane_cp11_ParamLimits

0xbb33,	// (0x0007143d) clock_digital_number_pane_cp11

0xbb4b,	// (0x00071455) clock_digital_number_pane_cp12_ParamLimits

0xbb4b,	// (0x00071455) clock_digital_number_pane_cp12

0xbb63,	// (0x0007146d) clock_digital_number_pane_cp13_ParamLimits

0xbb63,	// (0x0007146d) clock_digital_number_pane_cp13

0xbb7b,	// (0x00071485) clock_digital_separator_pane_cp10_ParamLimits

0xbb7b,	// (0x00071485) clock_digital_separator_pane_cp10

0xbb93,	// (0x0007149d) popup_clock_digital_window_cp02_t1_ParamLimits

0xbb93,	// (0x0007149d) popup_clock_digital_window_cp02_t1

0x06b4,	// (0x00065fbe) clock_digital_number_pane_cp10_g1

0x06b4,	// (0x00065fbe) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00075113) clock_digital_number_pane_cp10_g

0x06b4,	// (0x00065fbe) clock_digital_separator_pane_cp10_g1

0x06b4,	// (0x00065fbe) clock_digital_separator_pane_g2_cp10

0x13e4,	// (0x00066cee) navi_pane_vded_g4

0x13ed,	// (0x00066cf7) navi_pane_vded_g5

0x13f6,	// (0x00066d00) navi_pane_vded_t1

0x75ee,	// (0x0006cef8) main_vded_pane

0xbc95,	// (0x0007159f) main_vded_pane_g1

0xbca1,	// (0x000715ab) main_vded_pane_g2

0xbcab,	// (0x000715b5) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00075118) main_vded_pane_g

0xbcb5,	// (0x000715bf) main_vded_pane_t1

0xbcc3,	// (0x000715cd) main_vded_pane_t2

0x0001,

0xf815,	// (0x0007511f) main_vded_pane_t

0xbcd1,	// (0x000715db) vded_slider_pane

0xbcdb,	// (0x000715e5) vded_video_pane

0x3328,	// (0x00068c32) vded_video_pane_g1

0xbce5,	// (0x000715ef) vded_video_pane_g2

0x2d85,	// (0x0006868f) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00075124) vded_video_pane_g

0x3332,	// (0x00068c3c) vded_slider_pane_g1

0x2a92,	// (0x0006839c) vded_slider_pane_g2

0x333b,	// (0x00068c45) vded_slider_pane_g3

0x3344,	// (0x00068c4e) vded_slider_pane_g4

0x334d,	// (0x00068c57) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0007512b) vded_slider_pane_g

0xb7ae,	// (0x000710b8) mup3_rocker_pane_ParamLimits

0xb7ae,	// (0x000710b8) mup3_rocker_pane

0xbcee,	// (0x000715f8) mup3_control_keys_pane_g1

0xbcf6,	// (0x00071600) mup3_control_keys_pane_g2

0xbcfe,	// (0x00071608) mup3_control_keys_pane_g3

0xbd06,	// (0x00071610) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00075136) mup3_control_keys_pane_g

0x7875,	// (0x0006d17f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7875,	// (0x0006d17f) popup_toolbar2_fixed_window_cp01

0xb7c8,	// (0x000710d2) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb7c8,	// (0x000710d2) popup_toolbar2_fixed_window_cp02

0x1bfd,	// (0x00067507) popup_call2_audio_second_window_t4_ParamLimits

0x1bfd,	// (0x00067507) popup_call2_audio_second_window_t4

0x212b,	// (0x00067a35) popup_call2_audio_first_window_t6_ParamLimits

0x212b,	// (0x00067a35) popup_call2_audio_first_window_t6

0x23c1,	// (0x00067ccb) popup_call2_audio_out_window_t6_ParamLimits

0x23c1,	// (0x00067ccb) popup_call2_audio_out_window_t6

0x75ee,	// (0x0006cef8) main_vitu_pane

0xbd16,	// (0x00071620) aid_size_cell_itu_ParamLimits

0xbd16,	// (0x00071620) aid_size_cell_itu

0x789d,	// (0x0006d1a7) bg_popup_window_pane_cp08_ParamLimits

0x789d,	// (0x0006d1a7) bg_popup_window_pane_cp08

0xbd24,	// (0x0007162e) field_vitu_entry_pane_ParamLimits

0xbd24,	// (0x0007162e) field_vitu_entry_pane

0xbd33,	// (0x0007163d) grid_vitu_function_pane_ParamLimits

0xbd33,	// (0x0007163d) grid_vitu_function_pane

0xbd43,	// (0x0007164d) grid_vitu_itu_pane_ParamLimits

0xbd43,	// (0x0007164d) grid_vitu_itu_pane

0xbd53,	// (0x0007165d) cell_vitu_itu_pane_ParamLimits

0xbd53,	// (0x0007165d) cell_vitu_itu_pane

0xbd68,	// (0x00071672) cell_vitu_function_pane_ParamLimits

0xbd68,	// (0x00071672) cell_vitu_function_pane

0xa69f,	// (0x0006ffa9) bg_popup_sub_pane_cp08_ParamLimits

0xa69f,	// (0x0006ffa9) bg_popup_sub_pane_cp08

0xbd7c,	// (0x00071686) field_vitu_entry_pane_t1_ParamLimits

0xbd7c,	// (0x00071686) field_vitu_entry_pane_t1

0x336e,	// (0x00068c78) field_vitu_entry_pane_t2_ParamLimits

0x336e,	// (0x00068c78) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x00075144) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x00075144) field_vitu_entry_pane_t

0x338b,	// (0x00068c95) bg_button_pane_cp05_ParamLimits

0x338b,	// (0x00068c95) bg_button_pane_cp05

0xbd9a,	// (0x000716a4) cell_vitu_itu_pane_g1

0xbdb2,	// (0x000716bc) cell_vitu_itu_pane_t1_ParamLimits

0xbdb2,	// (0x000716bc) cell_vitu_itu_pane_t1

0xbdc4,	// (0x000716ce) cell_vitu_itu_pane_t2_ParamLimits

0xbdc4,	// (0x000716ce) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x00075149) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x00075149) cell_vitu_itu_pane_t

0x3399,	// (0x00068ca3) bg_button_pane_cp07

0xbdf9,	// (0x00071703) cell_vitu_function_pane_g1

0x7b14,	// (0x0006d41e) main_calc_pane_g1

0x7634,	// (0x0006cf3e) aid_visual_content_pane

0x75ee,	// (0x0006cef8) main_vradio_pane

0xbe02,	// (0x0007170c) main_vradio_pane_g1_ParamLimits

0xbe02,	// (0x0007170c) main_vradio_pane_g1

0x33a3,	// (0x00068cad) main_vradio_pane_g2_ParamLimits

0x33a3,	// (0x00068cad) main_vradio_pane_g2

0x0001,

0xf846,	// (0x00075150) main_vradio_pane_g_ParamLimits

0xf846,	// (0x00075150) main_vradio_pane_g

0xbe12,	// (0x0007171c) main_vradio_pane_t1_ParamLimits

0xbe12,	// (0x0007171c) main_vradio_pane_t1

0xbe24,	// (0x0007172e) main_vradio_pane_t2_ParamLimits

0xbe24,	// (0x0007172e) main_vradio_pane_t2

0x33b0,	// (0x00068cba) main_vradio_pane_t3_ParamLimits

0x33b0,	// (0x00068cba) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x00075155) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x00075155) main_vradio_pane_t

0xbe36,	// (0x00071740) vradio_rocker_control_pane_ParamLimits

0xbe36,	// (0x00071740) vradio_rocker_control_pane

0xbe42,	// (0x0007174c) vradio_station_info_pane_ParamLimits

0xbe42,	// (0x0007174c) vradio_station_info_pane

0x33c4,	// (0x00068cce) vradio_frequency_info_pane_ParamLimits

0x33c4,	// (0x00068cce) vradio_frequency_info_pane

0x2d85,	// (0x0006868f) vradio_station_info_pane_g1

0x33d3,	// (0x00068cdd) vradio_station_info_pane_t1_ParamLimits

0x33d3,	// (0x00068cdd) vradio_station_info_pane_t1

0x33f5,	// (0x00068cff) vradio_station_info_pane_t2_ParamLimits

0x33f5,	// (0x00068cff) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0007515c) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0007515c) vradio_station_info_pane_t

0x3407,	// (0x00068d11) vradio_tuning_pane

0x340f,	// (0x00068d19) vradio_rocker_control_pane_g1

0x3417,	// (0x00068d21) vradio_rocker_control_pane_g2

0x341f,	// (0x00068d29) vradio_rocker_control_pane_g3

0x3427,	// (0x00068d31) vradio_rocker_control_pane_g4

0x342f,	// (0x00068d39) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x00075161) vradio_rocker_control_pane_g

0xbe51,	// (0x0007175b) vradio_frequency_info_pane_g1

0x3437,	// (0x00068d41) vradio_frequency_info_pane_t1_ParamLimits

0x3437,	// (0x00068d41) vradio_frequency_info_pane_t1

0xbe5b,	// (0x00071765) vradio_tuning_pane_g1

0xbe64,	// (0x0007176e) vradio_tuning_pane_t1

0x767d,	// (0x0006cf87) area_side_right_pane_ParamLimits

0x767d,	// (0x0006cf87) area_side_right_pane

0x2844,	// (0x0006814e) status_small_pane_g1

0x284c,	// (0x00068156) status_small_pane_g2

0x2855,	// (0x0006815f) status_small_pane_g3

0x285e,	// (0x00068168) status_small_pane_g4

0x0003,

0xf617,	// (0x00074f21) status_small_pane_g

0x2867,	// (0x00068171) status_small_pane_t1

0x75ee,	// (0x0006cef8) main_video3_pane

0x344b,	// (0x00068d55) cams_zoom_vslider_pane

0x3453,	// (0x00068d5d) image3_wide_pane_ParamLimits

0x3453,	// (0x00068d5d) image3_wide_pane

0x346d,	// (0x00068d77) image3_wide_small_pane

0x3479,	// (0x00068d83) main_video3_pane_g1_ParamLimits

0x3479,	// (0x00068d83) main_video3_pane_g1

0x3495,	// (0x00068d9f) main_video3_pane_g2_ParamLimits

0x3495,	// (0x00068d9f) main_video3_pane_g2

0x0001,

0xf862,	// (0x0007516c) main_video3_pane_g_ParamLimits

0xf862,	// (0x0007516c) main_video3_pane_g

0x34b1,	// (0x00068dbb) main_video3_pane_t1_ParamLimits

0x34b1,	// (0x00068dbb) main_video3_pane_t1

0x34dc,	// (0x00068de6) main_video3_pane_t2_ParamLimits

0x34dc,	// (0x00068de6) main_video3_pane_t2

0x3507,	// (0x00068e11) main_video3_pane_t3_ParamLimits

0x3507,	// (0x00068e11) main_video3_pane_t3

0x0002,

0xf867,	// (0x00075171) main_video3_pane_t_ParamLimits

0xf867,	// (0x00075171) main_video3_pane_t

0x3534,	// (0x00068e3e) cams_zoom_vslider_pane_g1

0x353d,	// (0x00068e47) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x00075178) cams_zoom_vslider_pane_g

0x3545,	// (0x00068e4f) small_slider_vertical_pane

0x2d85,	// (0x0006868f) small_slider_vertical_pane_g1

0x2d85,	// (0x0006868f) small_slider_vertical_pane_g2

0x354d,	// (0x00068e57) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0007517d) small_slider_vertical_pane_g

0x75ee,	// (0x0006cef8) main_hwr_training_pane

0x3556,	// (0x00068e60) hwr_training_instruct_pane_ParamLimits

0x3556,	// (0x00068e60) hwr_training_instruct_pane

0xbe73,	// (0x0007177d) hwr_training_navi_pane_ParamLimits

0xbe73,	// (0x0007177d) hwr_training_navi_pane

0xbe8d,	// (0x00071797) hwr_training_write_pane_ParamLimits

0xbe8d,	// (0x00071797) hwr_training_write_pane

0x75ee,	// (0x0006cef8) bg_frame_shadow_pane

0x358d,	// (0x00068e97) hwr_training_write_pane_g1

0x3595,	// (0x00068e9f) hwr_training_write_pane_g2

0x359d,	// (0x00068ea7) hwr_training_write_pane_g3

0x35a5,	// (0x00068eaf) hwr_training_write_pane_g4

0x35ad,	// (0x00068eb7) hwr_training_write_pane_g5

0x35b5,	// (0x00068ebf) hwr_training_write_pane_g6

0x35bd,	// (0x00068ec7) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x00075184) hwr_training_write_pane_g

0xbec5,	// (0x000717cf) hwr_training_navi_pane_g1_ParamLimits

0xbec5,	// (0x000717cf) hwr_training_navi_pane_g1

0xbed7,	// (0x000717e1) hwr_training_navi_pane_g2_ParamLimits

0xbed7,	// (0x000717e1) hwr_training_navi_pane_g2

0xbee9,	// (0x000717f3) hwr_training_navi_pane_g3_ParamLimits

0xbee9,	// (0x000717f3) hwr_training_navi_pane_g3

0xbef9,	// (0x00071803) hwr_training_navi_pane_g4_ParamLimits

0xbef9,	// (0x00071803) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x00075193) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x00075193) hwr_training_navi_pane_g

0xbf13,	// (0x0007181d) hwr_training_navi_pane_t1

0xbf21,	// (0x0007182b) list_single_hwr_training_instruct_pane_ParamLimits

0xbf21,	// (0x0007182b) list_single_hwr_training_instruct_pane

0x35c5,	// (0x00068ecf) list_single_hwr_training_instruct_pane_t1

0x2cc5,	// (0x000685cf) bg_frame_shadow_pane_g1

0x35d4,	// (0x00068ede) bg_frame_shadow_pane_g2

0x35dc,	// (0x00068ee6) bg_frame_shadow_pane_g3

0x35e4,	// (0x00068eee) bg_frame_shadow_pane_g4

0x35ec,	// (0x00068ef6) bg_frame_shadow_pane_g5

0x35f4,	// (0x00068efe) bg_frame_shadow_pane_g6

0x35fc,	// (0x00068f06) bg_frame_shadow_pane_g7

0x08f8,	// (0x00066202) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0007519e) bg_frame_shadow_pane_g

0x75ee,	// (0x0006cef8) main_video_tele_dialer_pane

0xbf57,	// (0x00071861) aid_size_cell_video_keypad_ParamLimits

0xbf57,	// (0x00071861) aid_size_cell_video_keypad

0xbf67,	// (0x00071871) grid_video_dialer_keypad_pane_ParamLimits

0xbf67,	// (0x00071871) grid_video_dialer_keypad_pane

0xbf99,	// (0x000718a3) video_down_pane_cp_ParamLimits

0xbf99,	// (0x000718a3) video_down_pane_cp

0xbfc1,	// (0x000718cb) cell_video_dialer_keypad_pane_ParamLimits

0xbfc1,	// (0x000718cb) cell_video_dialer_keypad_pane

0x3604,	// (0x00068f0e) bg_button_pane_cp08_ParamLimits

0x3604,	// (0x00068f0e) bg_button_pane_cp08

0xbfd6,	// (0x000718e0) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbfd6,	// (0x000718e0) cell_video_dialer_keypad_pane_g1

0xb7a2,	// (0x000710ac) mup3_rocker2_pane_ParamLimits

0xb7a2,	// (0x000710ac) mup3_rocker2_pane

0x2d85,	// (0x0006868f) mup3_rocker2_pane_g1

0xa6ad,	// (0x0006ffb7) main_dialer2_pane

0x75ee,	// (0x0006cef8) main_mp4_pane

0xc015,	// (0x0007191f) main_mp4_pane_g1_ParamLimits

0xc015,	// (0x0007191f) main_mp4_pane_g1

0xc023,	// (0x0007192d) main_mp4_pane_g2_ParamLimits

0xc023,	// (0x0007192d) main_mp4_pane_g2

0xc031,	// (0x0007193b) main_mp4_pane_g3_ParamLimits

0xc031,	// (0x0007193b) main_mp4_pane_g3

0xc076,	// (0x00071980) main_mp4_pane_g4_ParamLimits

0xc076,	// (0x00071980) main_mp4_pane_g4

0xc09e,	// (0x000719a8) main_mp4_pane_g5_ParamLimits

0xc09e,	// (0x000719a8) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x000751be) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x000751be) main_mp4_pane_g

0xc0ee,	// (0x000719f8) main_mp4_pane_t1_ParamLimits

0xc0ee,	// (0x000719f8) main_mp4_pane_t1

0xc14a,	// (0x00071a54) main_mp4_pane_t2_ParamLimits

0xc14a,	// (0x00071a54) main_mp4_pane_t2

0x3610,	// (0x00068f1a) main_mp4_pane_t3_ParamLimits

0x3610,	// (0x00068f1a) main_mp4_pane_t3

0xc19c,	// (0x00071aa6) main_mp4_pane_t4_ParamLimits

0xc19c,	// (0x00071aa6) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x000751cb) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x000751cb) main_mp4_pane_t

0xc1e0,	// (0x00071aea) mp4_progress_pane_ParamLimits

0xc1e0,	// (0x00071aea) mp4_progress_pane

0xc22a,	// (0x00071b34) mp4_rocker_pane_ParamLimits

0xc22a,	// (0x00071b34) mp4_rocker_pane

0x3638,	// (0x00068f42) mp4_progress_pane_t1

0x3651,	// (0x00068f5b) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x000751d4) mp4_progress_pane_t

0x366a,	// (0x00068f74) mup_progress_pane_cp04

0x2d85,	// (0x0006868f) mp4_rocker_pane_g1

0xc24a,	// (0x00071b54) aid_cell_size_keypad2_ParamLimits

0xc24a,	// (0x00071b54) aid_cell_size_keypad2

0xc25a,	// (0x00071b64) dialer2_ne_pane_ParamLimits

0xc25a,	// (0x00071b64) dialer2_ne_pane

0xc268,	// (0x00071b72) grid_dialer2_keypad_pane_ParamLimits

0xc268,	// (0x00071b72) grid_dialer2_keypad_pane

0x47d6,	// (0x0006a0e0) bg_popup_call_pane_cp07_ParamLimits

0x47d6,	// (0x0006a0e0) bg_popup_call_pane_cp07

0xc278,	// (0x00071b82) dialer2_ne_pane_t1_ParamLimits

0xc278,	// (0x00071b82) dialer2_ne_pane_t1

0xc29d,	// (0x00071ba7) cell_dialer2_keypad_pane_ParamLimits

0xc29d,	// (0x00071ba7) cell_dialer2_keypad_pane

0x3692,	// (0x00068f9c) bg_button_pane_pane_cp04_ParamLimits

0x3692,	// (0x00068f9c) bg_button_pane_pane_cp04

0xc2b4,	// (0x00071bbe) cell_dialer2_keypad_pane_g1_ParamLimits

0xc2b4,	// (0x00071bbe) cell_dialer2_keypad_pane_g1

0x8553,	// (0x0006de5d) aid_placing_vt_set_content_ParamLimits

0x8553,	// (0x0006de5d) aid_placing_vt_set_content

0x857f,	// (0x0006de89) aid_placing_vt_set_title_ParamLimits

0x857f,	// (0x0006de89) aid_placing_vt_set_title

0x75ee,	// (0x0006cef8) main_image3_pane

0xc34e,	// (0x00071c58) area_side_right_pane_cp01_ParamLimits

0xc34e,	// (0x00071c58) area_side_right_pane_cp01

0xf0bb,	// (0x000749c5) main_image3_pane_g1_ParamLimits

0xf0bb,	// (0x000749c5) main_image3_pane_g1

0xc37b,	// (0x00071c85) main_image3_pane_g2_ParamLimits

0xc37b,	// (0x00071c85) main_image3_pane_g2

0xc394,	// (0x00071c9e) main_image3_pane_g3_ParamLimits

0xc394,	// (0x00071c9e) main_image3_pane_g3

0xc3ad,	// (0x00071cb7) main_image3_pane_g4_ParamLimits

0xc3ad,	// (0x00071cb7) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x000751e3) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x000751e3) main_image3_pane_g

0xc3c6,	// (0x00071cd0) main_image3_pane_t1_ParamLimits

0xc3c6,	// (0x00071cd0) main_image3_pane_t1

0xc3eb,	// (0x00071cf5) main_image3_pane_t2_ParamLimits

0xc3eb,	// (0x00071cf5) main_image3_pane_t2

0xc40a,	// (0x00071d14) main_image3_pane_t3_ParamLimits

0xc40a,	// (0x00071d14) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x000751ec) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x000751ec) main_image3_pane_t

0x789d,	// (0x0006d1a7) grid_sctrl_middle_pane_cp01_ParamLimits

0x789d,	// (0x0006d1a7) grid_sctrl_middle_pane_cp01

0xc46b,	// (0x00071d75) cell_sctrl_middle_pane_cp01_ParamLimits

0xc46b,	// (0x00071d75) cell_sctrl_middle_pane_cp01

0xc47c,	// (0x00071d86) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc47c,	// (0x00071d86) cell_sctrl_middle_pane_cp01_g1

0x75ee,	// (0x0006cef8) main_call4_pane

0xc489,	// (0x00071d93) aid_size_button_call4_ParamLimits

0xc489,	// (0x00071d93) aid_size_button_call4

0xc4b9,	// (0x00071dc3) call4_windows_pane_ParamLimits

0xc4b9,	// (0x00071dc3) call4_windows_pane

0xc4d3,	// (0x00071ddd) grid_call4_button_pane_ParamLimits

0xc4d3,	// (0x00071ddd) grid_call4_button_pane

0x369e,	// (0x00068fa8) call4_windows_conf_pane

0x36b3,	// (0x00068fbd) popup_call4_audio_first_window_ParamLimits

0x36b3,	// (0x00068fbd) popup_call4_audio_first_window

0x36ff,	// (0x00069009) popup_call4_audio_second_window_ParamLimits

0x36ff,	// (0x00069009) popup_call4_audio_second_window

0x3713,	// (0x0006901d) popup_call4_audio_wait_window_ParamLimits

0x3713,	// (0x0006901d) popup_call4_audio_wait_window

0xc4f7,	// (0x00071e01) cell_call4_button_pane_ParamLimits

0xc4f7,	// (0x00071e01) cell_call4_button_pane

0xc51c,	// (0x00071e26) bg_button_pane_cp09_ParamLimits

0xc51c,	// (0x00071e26) bg_button_pane_cp09

0xc528,	// (0x00071e32) cell_call4_button_pane_g1_ParamLimits

0xc528,	// (0x00071e32) cell_call4_button_pane_g1

0xc535,	// (0x00071e3f) cell_call4_button_pane_t1_ParamLimits

0xc535,	// (0x00071e3f) cell_call4_button_pane_t1

0x375b,	// (0x00069065) popup_call4_audio_conf_window_ParamLimits

0x375b,	// (0x00069065) popup_call4_audio_conf_window

0xb7d5,	// (0x000710df) mup3_progress_pane_t1_ParamLimits

0xb7f4,	// (0x000710fe) mup3_progress_pane_t2_ParamLimits

0x3067,	// (0x00068971) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x000750c5) mup3_progress_pane_t_ParamLimits

0x3084,	// (0x0006898e) mup_progress_pane_cp03_ParamLimits

0xbd0e,	// (0x00071618) mup3_control_keys_pane_g4_copy1

0xc20e,	// (0x00071b18) mp4_rocker2_pane_ParamLimits

0xc20e,	// (0x00071b18) mp4_rocker2_pane

0x3777,	// (0x00069081) mp4_rocker2_pane_g1

0x376f,	// (0x00069079) mp4_rocker2_pane_g2

0xc547,	// (0x00071e51) mp4_rocker2_pane_g3

0xc54f,	// (0x00071e59) mp4_rocker2_pane_g4

0xc557,	// (0x00071e61) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x000751f5) mp4_rocker2_pane_g

0x75ee,	// (0x0006cef8) main_camera4_pane

0x75ee,	// (0x0006cef8) main_video4_pane

0xbf75,	// (0x0007187f) main_video_tele_dialer_pane_t1_ParamLimits

0xbf75,	// (0x0007187f) main_video_tele_dialer_pane_t1

0xbf87,	// (0x00071891) main_video_tele_dialer_pane_t2_ParamLimits

0xbf87,	// (0x00071891) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x000751af) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x000751af) main_video_tele_dialer_pane_t

0xc577,	// (0x00071e81) cam4_autofocus_pane_ParamLimits

0xc577,	// (0x00071e81) cam4_autofocus_pane

0xc591,	// (0x00071e9b) cam4_image_uncrop_pane_ParamLimits

0xc591,	// (0x00071e9b) cam4_image_uncrop_pane

0xc5a8,	// (0x00071eb2) cam4_indicators_pane_ParamLimits

0xc5a8,	// (0x00071eb2) cam4_indicators_pane

0xc5c4,	// (0x00071ece) main_camera4_pane_g1_ParamLimits

0xc5c4,	// (0x00071ece) main_camera4_pane_g1

0xc5d0,	// (0x00071eda) main_camera4_pane_g2_ParamLimits

0xc5d0,	// (0x00071eda) main_camera4_pane_g2

0xc5d0,	// (0x00071eda) main_camera4_pane_g3_ParamLimits

0xc5d0,	// (0x00071eda) main_camera4_pane_g3

0xc5dc,	// (0x00071ee6) main_camera4_pane_g4_ParamLimits

0xc5dc,	// (0x00071ee6) main_camera4_pane_g4

0xc5e8,	// (0x00071ef2) main_camera4_pane_g5_ParamLimits

0xc5e8,	// (0x00071ef2) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00075200) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00075200) main_camera4_pane_g

0xc602,	// (0x00071f0c) main_camera4_pane_t1_ParamLimits

0xc602,	// (0x00071f0c) main_camera4_pane_t1

0x2fec,	// (0x000688f6) bg_tb_trans_pane_cp06

0xc652,	// (0x00071f5c) cam4_indicators_pane_g1

0xc663,	// (0x00071f6d) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0007521b) cam4_indicators_pane_g

0xc681,	// (0x00071f8b) cam4_indicators_pane_t1

0xc6ab,	// (0x00071fb5) main_video4_pane_g1_ParamLimits

0xc6ab,	// (0x00071fb5) main_video4_pane_g1

0xc6b7,	// (0x00071fc1) main_video4_pane_g2_ParamLimits

0xc6b7,	// (0x00071fc1) main_video4_pane_g2

0xc6c3,	// (0x00071fcd) main_video4_pane_g3_ParamLimits

0xc6c3,	// (0x00071fcd) main_video4_pane_g3

0xc6cf,	// (0x00071fd9) main_video4_pane_g4_ParamLimits

0xc6cf,	// (0x00071fd9) main_video4_pane_g4

0x0004,

0xf918,	// (0x00075222) main_video4_pane_g_ParamLimits

0xf918,	// (0x00075222) main_video4_pane_g

0xc6ef,	// (0x00071ff9) vid4_indicators_pane_ParamLimits

0xc6ef,	// (0x00071ff9) vid4_indicators_pane

0xc70d,	// (0x00072017) video4_image_uncrop_cif_pane_ParamLimits

0xc70d,	// (0x00072017) video4_image_uncrop_cif_pane

0xc71c,	// (0x00072026) video4_image_uncrop_nhd_pane_ParamLimits

0xc71c,	// (0x00072026) video4_image_uncrop_nhd_pane

0xc591,	// (0x00071e9b) video4_image_uncrop_vga_pane_ParamLimits

0xc591,	// (0x00071e9b) video4_image_uncrop_vga_pane

0xa69f,	// (0x0006ffa9) bg_tb_trans_pane_cp07

0xc652,	// (0x00071f5c) vid4_indicators_pane_g1

0xc731,	// (0x0007203b) vid4_indicators_pane_g2

0xc742,	// (0x0007204c) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0007522d) vid4_indicators_pane_g

0xc76f,	// (0x00072079) vid4_indicators_pane_t1

0xc788,	// (0x00072092) cam4_autofocus_pane_g1

0xc790,	// (0x0007209a) cam4_autofocus_pane_g2

0xc798,	// (0x000720a2) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00075238) cam4_autofocus_pane_g

0xc7a0,	// (0x000720aa) cam4_autofocus_pane_g3_copy1

0xbfa5,	// (0x000718af) video_down_pane_cp_t1

0xbfb3,	// (0x000718bd) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x000751b4) video_down_pane_cp_t

0x789d,	// (0x0006d1a7) popup_vitu2_window_ParamLimits

0x789d,	// (0x0006d1a7) popup_vitu2_window

0xc7a8,	// (0x000720b2) aid_size_cell2_itu2_ParamLimits

0xc7a8,	// (0x000720b2) aid_size_cell2_itu2

0xc7ca,	// (0x000720d4) aid_size_cell_itu2_ParamLimits

0xc7ca,	// (0x000720d4) aid_size_cell_itu2

0x47d6,	// (0x0006a0e0) bg_popup_window_pane_cp09_ParamLimits

0x47d6,	// (0x0006a0e0) bg_popup_window_pane_cp09

0xc80e,	// (0x00072118) field_vitu2_entry_pane_ParamLimits

0xc80e,	// (0x00072118) field_vitu2_entry_pane

0xc82e,	// (0x00072138) grid_vitu2_function_pane_ParamLimits

0xc82e,	// (0x00072138) grid_vitu2_function_pane

0xc872,	// (0x0007217c) grid_vitu2_itu_pane_ParamLimits

0xc872,	// (0x0007217c) grid_vitu2_itu_pane

0xc8e8,	// (0x000721f2) cell_vitu2_itu_pane_ParamLimits

0xc8e8,	// (0x000721f2) cell_vitu2_itu_pane

0xc8fd,	// (0x00072207) cell_vitu2_function_pane_ParamLimits

0xc8fd,	// (0x00072207) cell_vitu2_function_pane

0x3791,	// (0x0006909b) bg_popup_call_pane_cp08_ParamLimits

0x3791,	// (0x0006909b) bg_popup_call_pane_cp08

0x37aa,	// (0x000690b4) field_vitu2_entry_pane_g1

0x37b6,	// (0x000690c0) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0007523f) field_vitu2_entry_pane_g

0x6815,	// (0x0006c11f) field_vitu2_entry_pane_t1_ParamLimits

0x6815,	// (0x0006c11f) field_vitu2_entry_pane_t1

0x6845,	// (0x0006c14f) field_vitu2_entry_pane_t2_ParamLimits

0x6845,	// (0x0006c14f) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00075246) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00075246) field_vitu2_entry_pane_t

0xc93e,	// (0x00072248) bg_button_pane_cp010_ParamLimits

0xc93e,	// (0x00072248) bg_button_pane_cp010

0xc94c,	// (0x00072256) cell_vitu2_itu_pane_g1

0xc96a,	// (0x00072274) cell_vitu2_itu_pane_t1_ParamLimits

0xc96a,	// (0x00072274) cell_vitu2_itu_pane_t1

0x6862,	// (0x0006c16c) cell_vitu2_itu_pane_t2_ParamLimits

0x6862,	// (0x0006c16c) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00075250) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00075250) cell_vitu2_itu_pane_t

0xa69f,	// (0x0006ffa9) bg_button_pane_cp011

0xc9bc,	// (0x000722c6) cell_vitu2_function_pane_g1

0x75ee,	// (0x0006cef8) main_myfav_hc_pane

0xc44c,	// (0x00071d56) popup_image3_note_pane_ParamLimits

0xc44c,	// (0x00071d56) popup_image3_note_pane

0xc45a,	// (0x00071d64) popup_image3_tool_bar_pane_ParamLimits

0xc45a,	// (0x00071d64) popup_image3_tool_bar_pane

0x68d0,	// (0x0006c1da) cell_vitu2_itu_pane_t3_ParamLimits

0x68d0,	// (0x0006c1da) cell_vitu2_itu_pane_t3

0x75ee,	// (0x0006cef8) bg_popup_trans_pane

0x44b5,	// (0x00069dbf) grid_image3_tool_bar_pane

0x44bf,	// (0x00069dc9) bg_popup_trans_pane_g1

0x0d01,	// (0x0006660b) bg_popup_trans_pane_g2

0x44c7,	// (0x00069dd1) bg_popup_trans_pane_g3

0x44cf,	// (0x00069dd9) bg_popup_trans_pane_g4

0x44d7,	// (0x00069de1) bg_popup_trans_pane_g5

0x44df,	// (0x00069de9) bg_popup_trans_pane_g6

0x44e7,	// (0x00069df1) bg_popup_trans_pane_g7

0x44ef,	// (0x00069df9) bg_popup_trans_pane_g8

0x0ce1,	// (0x000665eb) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x00075257) bg_popup_trans_pane_g

0x44f7,	// (0x00069e01) cell_image3_tool_bar_pane_ParamLimits

0x44f7,	// (0x00069e01) cell_image3_tool_bar_pane

0x2d85,	// (0x0006868f) cell_image3_tool_bar_pane_g1

0x75ee,	// (0x0006cef8) bg_popup_trans_pane_cp1

0x450b,	// (0x00069e15) popup_image3_note_pane_t1

0x4519,	// (0x00069e23) popup_image3_note_pane_t2

0x4527,	// (0x00069e31) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0007526a) popup_image3_note_pane_t

0x4535,	// (0x00069e3f) popup_image3_note_pane_t3_copy1

0xc9d0,	// (0x000722da) bg_myfav_hc_instruction_pane_ParamLimits

0xc9d0,	// (0x000722da) bg_myfav_hc_instruction_pane

0xc9e8,	// (0x000722f2) cell_myfav_contact_pane_ParamLimits

0xc9e8,	// (0x000722f2) cell_myfav_contact_pane

0xca02,	// (0x0007230c) cell_myfav_contact_pane_cp1_ParamLimits

0xca02,	// (0x0007230c) cell_myfav_contact_pane_cp1

0xca1a,	// (0x00072324) cell_myfav_contact_pane_cp2_ParamLimits

0xca1a,	// (0x00072324) cell_myfav_contact_pane_cp2

0xca32,	// (0x0007233c) cell_myfav_contact_pane_cp3_ParamLimits

0xca32,	// (0x0007233c) cell_myfav_contact_pane_cp3

0xca49,	// (0x00072353) cell_myfav_contact_pane_cp4_ParamLimits

0xca49,	// (0x00072353) cell_myfav_contact_pane_cp4

0xca5f,	// (0x00072369) cell_myfav_contact_pane_cp5_ParamLimits

0xca5f,	// (0x00072369) cell_myfav_contact_pane_cp5

0xca73,	// (0x0007237d) cell_myfav_contact_pane_cp6_ParamLimits

0xca73,	// (0x0007237d) cell_myfav_contact_pane_cp6

0xca87,	// (0x00072391) cell_myfav_contact_pane_cp7_ParamLimits

0xca87,	// (0x00072391) cell_myfav_contact_pane_cp7

0x4543,	// (0x00069e4d) listscroll_gen_pane_cp05

0xca9f,	// (0x000723a9) main_myfav_hc_pane_g1_ParamLimits

0xca9f,	// (0x000723a9) main_myfav_hc_pane_g1

0xcab7,	// (0x000723c1) main_myfav_hc_pane_g2_ParamLimits

0xcab7,	// (0x000723c1) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00075271) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00075271) main_myfav_hc_pane_g

0xcae7,	// (0x000723f1) main_myfav_hc_pane_t1_ParamLimits

0xcae7,	// (0x000723f1) main_myfav_hc_pane_t1

0x454c,	// (0x00069e56) main_myfav_hc_pane_t2_ParamLimits

0x454c,	// (0x00069e56) main_myfav_hc_pane_t2

0x455e,	// (0x00069e68) main_myfav_hc_pane_t3_ParamLimits

0x455e,	// (0x00069e68) main_myfav_hc_pane_t3

0xcafe,	// (0x00072408) main_myfav_hc_pane_t4_ParamLimits

0xcafe,	// (0x00072408) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x00075278) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x00075278) main_myfav_hc_pane_t

0x2d85,	// (0x0006868f) bg_myfav_hc_instruction_pane_g1

0x4570,	// (0x00069e7a) cell_myfav_contact_pane_g1_ParamLimits

0x4570,	// (0x00069e7a) cell_myfav_contact_pane_g1

0x4570,	// (0x00069e7a) cell_myfav_contact_pane_g2_ParamLimits

0x4570,	// (0x00069e7a) cell_myfav_contact_pane_g2

0x457c,	// (0x00069e86) cell_myfav_contact_pane_g3_ParamLimits

0x457c,	// (0x00069e86) cell_myfav_contact_pane_g3

0x3051,	// (0x0006895b) cell_myfav_contact_pane_g4_ParamLimits

0x3051,	// (0x0006895b) cell_myfav_contact_pane_g4

0x4589,	// (0x00069e93) cell_myfav_contact_pane_g5_ParamLimits

0x4589,	// (0x00069e93) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x00075283) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x00075283) cell_myfav_contact_pane_g

0xcacf,	// (0x000723d9) main_myfav_hc_pane_g3_ParamLimits

0xcacf,	// (0x000723d9) main_myfav_hc_pane_g3

0x77b0,	// (0x0006d0ba) popup_adpt_find_window

0xcb28,	// (0x00072432) afind_page_pane_ParamLimits

0xcb28,	// (0x00072432) afind_page_pane

0xcb35,	// (0x0007243f) aid_size_cell_afind_ParamLimits

0xcb35,	// (0x0007243f) aid_size_cell_afind

0xcb4f,	// (0x00072459) bg_popup_sub_pane_cp09_ParamLimits

0xcb4f,	// (0x00072459) bg_popup_sub_pane_cp09

0xcb5c,	// (0x00072466) find_pane_cp01_ParamLimits

0xcb5c,	// (0x00072466) find_pane_cp01

0x4595,	// (0x00069e9f) grid_afind_control_pane_ParamLimits

0x4595,	// (0x00069e9f) grid_afind_control_pane

0xcb69,	// (0x00072473) grid_afind_pane_ParamLimits

0xcb69,	// (0x00072473) grid_afind_pane

0xcb85,	// (0x0007248f) cell_afind_pane_ParamLimits

0xcb85,	// (0x0007248f) cell_afind_pane

0x2d85,	// (0x0006868f) afind_page_pane_g1

0xcbcd,	// (0x000724d7) afind_page_pane_g2

0xcbd6,	// (0x000724e0) afind_page_pane_g3

0x0002,

0xf984,	// (0x0007528e) afind_page_pane_g

0xcbdf,	// (0x000724e9) afind_page_pane_t1

0x45a9,	// (0x00069eb3) cell_afind_grid_control_pane_ParamLimits

0x45a9,	// (0x00069eb3) cell_afind_grid_control_pane

0x3692,	// (0x00068f9c) bg_button_pane_cp69_ParamLimits

0x3692,	// (0x00068f9c) bg_button_pane_cp69

0xcbf6,	// (0x00072500) cell_afind_pane_g1_ParamLimits

0xcbf6,	// (0x00072500) cell_afind_pane_g1

0xcc03,	// (0x0007250d) cell_afind_pane_t1_ParamLimits

0xcc03,	// (0x0007250d) cell_afind_pane_t1

0x0afa,	// (0x00066404) bg_button_pane_cp72

0x45b8,	// (0x00069ec2) cell_afind_grid_control_pane_g1

0xa21a,	// (0x0006fb24) aid_image_placing_area_ParamLimits

0xa21a,	// (0x0006fb24) aid_image_placing_area

0x3356,	// (0x00068c60) field_vitu_entry_pane_g1_ParamLimits

0x3356,	// (0x00068c60) field_vitu_entry_pane_g1

0x3362,	// (0x00068c6c) field_vitu_entry_pane_g2_ParamLimits

0x3362,	// (0x00068c6c) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0007513f) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0007513f) field_vitu_entry_pane_g

0xbd9a,	// (0x000716a4) cell_vitu_itu_pane_g1_ParamLimits

0xbddc,	// (0x000716e6) cell_vitu_itu_pane_t3_ParamLimits

0xbddc,	// (0x000716e6) cell_vitu_itu_pane_t3

0x3638,	// (0x00068f42) mp4_progress_pane_t1_ParamLimits

0x3651,	// (0x00068f5b) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x000751d4) mp4_progress_pane_t_ParamLimits

0x366a,	// (0x00068f74) mup_progress_pane_cp04_ParamLimits

0xcb12,	// (0x0007241c) main_myfav_hc_pane_t5_ParamLimits

0xcb12,	// (0x0007241c) main_myfav_hc_pane_t5

0x64cf,	// (0x0006bdd9) aid_zoom_text_primary

0x77b0,	// (0x0006d0ba) popup_adpt_find_window_ParamLimits

0xa69f,	// (0x0006ffa9) main_cam_set_pane

0xc5b6,	// (0x00071ec0) cam4_zoom_pane_ParamLimits

0xc5b6,	// (0x00071ec0) cam4_zoom_pane

0xcc15,	// (0x0007251f) main_cam_set_pane_g1_ParamLimits

0xcc15,	// (0x0007251f) main_cam_set_pane_g1

0xcc23,	// (0x0007252d) main_cam_set_pane_g2_ParamLimits

0xcc23,	// (0x0007252d) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x00075295) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x00075295) main_cam_set_pane_g

0xcc2f,	// (0x00072539) main_cam_set_pane_t1_ParamLimits

0xcc2f,	// (0x00072539) main_cam_set_pane_t1

0xcc4b,	// (0x00072555) main_cset_listscroll_pane_ParamLimits

0xcc4b,	// (0x00072555) main_cset_listscroll_pane

0xcc76,	// (0x00072580) main_cset_slider_pane_ParamLimits

0xcc76,	// (0x00072580) main_cset_slider_pane

0x45c9,	// (0x00069ed3) main_cset_list_pane_ParamLimits

0x45c9,	// (0x00069ed3) main_cset_list_pane

0x45d9,	// (0x00069ee3) scroll_pane_cp028

0xcc95,	// (0x0007259f) aid_area_touch_slider

0xccb1,	// (0x000725bb) cset_slider_pane

0xccdb,	// (0x000725e5) main_cset_slider_pane_g1

0xccf0,	// (0x000725fa) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0007529a) main_cset_slider_pane_g

0x4612,	// (0x00069f1c) main_cset_slider_pane_t1

0xcdb8,	// (0x000726c2) main_cset_slider_pane_t2

0xcdd2,	// (0x000726dc) main_cset_slider_pane_t3

0xcdec,	// (0x000726f6) main_cset_slider_pane_t4

0xce0a,	// (0x00072714) main_cset_slider_pane_t5

0xce2c,	// (0x00072736) main_cset_slider_pane_t6

0xce43,	// (0x0007274d) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x000752bf) main_cset_slider_pane_t

0xcf51,	// (0x0007285b) cset_list_set_pane_ParamLimits

0xcf51,	// (0x0007285b) cset_list_set_pane

0xcf6e,	// (0x00072878) aid_position_infowindow_above

0xcf76,	// (0x00072880) aid_position_infowindow_below

0xcf7e,	// (0x00072888) cset_list_set_pane_g1_ParamLimits

0xcf7e,	// (0x00072888) cset_list_set_pane_g1

0x691d,	// (0x0006c227) cset_list_set_pane_g3_ParamLimits

0x691d,	// (0x0006c227) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x000752de) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x000752de) cset_list_set_pane_g

0x692c,	// (0x0006c236) cset_list_set_pane_t1_ParamLimits

0x692c,	// (0x0006c236) cset_list_set_pane_t1

0xa69f,	// (0x0006ffa9) list_highlight_pane_cp021_ParamLimits

0xa69f,	// (0x0006ffa9) list_highlight_pane_cp021

0x156a,	// (0x00066e74) cset_slider_pane_g1

0x157c,	// (0x00066e86) cset_slider_pane_g2

0x1573,	// (0x00066e7d) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x000752e3) cset_slider_pane_g

0xcf8a,	// (0x00072894) aid_area_touch_cam4_zoom

0xcf92,	// (0x0007289c) cam4_zoom_cont_pane

0xcf9a,	// (0x000728a4) cam4_zoom_pane_g1

0xcfa2,	// (0x000728ac) cam4_zoom_pane_g2

0xcfaa,	// (0x000728b4) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x000752ea) cam4_zoom_pane_g

0x4e31,	// (0x0006a73b) cam4_zoom_cont_pane_g1

0x4e3a,	// (0x0006a744) cam4_zoom_cont_pane_g2

0x4e43,	// (0x0006a74d) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x000752f1) cam4_zoom_cont_pane_g

0xc4a3,	// (0x00071dad) call4_image_pane_ParamLimits

0xc4a3,	// (0x00071dad) call4_image_pane

0x369e,	// (0x00068fa8) call4_windows_conf_pane_ParamLimits

0x36dd,	// (0x00068fe7) popup_call4_audio_in_window_ParamLimits

0x36dd,	// (0x00068fe7) popup_call4_audio_in_window

0x75ee,	// (0x0006cef8) bg_popup_call2_act_pane_cp02

0x3753,	// (0x0006905d) call4_list_conf_pane

0x2d85,	// (0x0006868f) call4_image_pane_g1

0x2d85,	// (0x0006868f) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x00075005) call4_image_pane_g

0x46b2,	// (0x00069fbc) list_single_graphic_popup_conf4_pane_ParamLimits

0x46b2,	// (0x00069fbc) list_single_graphic_popup_conf4_pane

0x75ee,	// (0x0006cef8) list_highlight_pane_cp022

0x46c5,	// (0x00069fcf) list_single_graphic_popup_conf4_pane_g1

0x123b,	// (0x00066b45) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x000752f8) list_single_graphic_popup_conf4_pane_g

0x46cd,	// (0x00069fd7) list_single_graphic_popup_conf4_pane_t1

0x86e3,	// (0x0006dfed) popup_vtel_slider_window_ParamLimits

0x86e3,	// (0x0006dfed) popup_vtel_slider_window

0x3680,	// (0x00068f8a) dialer2_ne_pane_t2_ParamLimits

0x3680,	// (0x00068f8a) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x000751d9) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x000751d9) dialer2_ne_pane_t

0xa69f,	// (0x0006ffa9) bg_popup_sub_pane_cp010_ParamLimits

0xa69f,	// (0x0006ffa9) bg_popup_sub_pane_cp010

0xcfb2,	// (0x000728bc) popup_vtel_slider_window_g1_ParamLimits

0xcfb2,	// (0x000728bc) popup_vtel_slider_window_g1

0xcfbe,	// (0x000728c8) popup_vtel_slider_window_g2_ParamLimits

0xcfbe,	// (0x000728c8) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x000752fd) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x000752fd) popup_vtel_slider_window_g

0xd006,	// (0x00072910) vtel_slider_pane_ParamLimits

0xd006,	// (0x00072910) vtel_slider_pane

0xd015,	// (0x0007291f) vtel_slider_pane_g1_ParamLimits

0xd015,	// (0x0007291f) vtel_slider_pane_g1

0xd022,	// (0x0007292c) vtel_slider_pane_g2_ParamLimits

0xd022,	// (0x0007292c) vtel_slider_pane_g2

0xd02f,	// (0x00072939) vtel_slider_pane_g3_ParamLimits

0xd02f,	// (0x00072939) vtel_slider_pane_g3

0xd015,	// (0x0007291f) vtel_slider_pane_g4_ParamLimits

0xd015,	// (0x0007291f) vtel_slider_pane_g4

0xd03c,	// (0x00072946) vtel_slider_pane_g5_ParamLimits

0xd03c,	// (0x00072946) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00075306) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00075306) vtel_slider_pane_g

0x75ee,	// (0x0006cef8) main_gallery2_pane

0xc7f0,	// (0x000720fa) aid_size_row_itut2_dropdow_list_ParamLimits

0xc7f0,	// (0x000720fa) aid_size_row_itut2_dropdow_list

0xc850,	// (0x0007215a) grid_vitu2_function_top_pane_ParamLimits

0xc850,	// (0x0007215a) grid_vitu2_function_top_pane

0xc8a6,	// (0x000721b0) popup_vitu2_dropdown_list_window_ParamLimits

0xc8a6,	// (0x000721b0) popup_vitu2_dropdown_list_window

0xc8c6,	// (0x000721d0) popup_vitu2_match_list_window

0xd049,	// (0x00072953) cell_vitu2_function_top_pane_ParamLimits

0xd049,	// (0x00072953) cell_vitu2_function_top_pane

0xd069,	// (0x00072973) cell_vitu2_function_top_pane_cp01_ParamLimits

0xd069,	// (0x00072973) cell_vitu2_function_top_pane_cp01

0xd087,	// (0x00072991) cell_vitu2_function_top_wide_pane_ParamLimits

0xd087,	// (0x00072991) cell_vitu2_function_top_wide_pane

0xa69f,	// (0x0006ffa9) bg_button_pane_cp012

0xd0a5,	// (0x000729af) cell_vitu2_function_top_pane_g1

0xd0b4,	// (0x000729be) bg_button_pane_cp013_ParamLimits

0xd0b4,	// (0x000729be) bg_button_pane_cp013

0xd0d0,	// (0x000729da) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xd0d0,	// (0x000729da) cell_vitu2_function_top_wide_pane_g1

0x789d,	// (0x0006d1a7) bg_popup_sub_pane_cp20

0xd0e8,	// (0x000729f2) list_vitu2_match_list_pane

0x44bf,	// (0x00069dc9) bg_popup_sub_pane_cp20_g1

0x44c7,	// (0x00069dd1) bg_popup_sub_pane_cp20_g2

0x0d01,	// (0x0006660b) bg_popup_sub_pane_cp20_g3

0x44cf,	// (0x00069dd9) bg_popup_sub_pane_cp20_g4

0x0ce1,	// (0x000665eb) bg_popup_sub_pane_cp20_g5

0x46e3,	// (0x00069fed) bg_popup_sub_pane_cp20_g6

0x44df,	// (0x00069de9) bg_popup_sub_pane_cp20_g7

0x44e7,	// (0x00069df1) bg_popup_sub_pane_cp20_g8

0x44ef,	// (0x00069df9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00075311) bg_popup_sub_pane_cp20_g

0xd100,	// (0x00072a0a) list_vitu2_match_list_item_pane_ParamLimits

0xd100,	// (0x00072a0a) list_vitu2_match_list_item_pane

0xd112,	// (0x00072a1c) list_vitu2_match_list_item_pane_t1

0x75ee,	// (0x0006cef8) bg_popup_sub_pane_cp21

0x10d1,	// (0x000669db) grid_vitu2_dropdown_list_pane

0xd120,	// (0x00072a2a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xd120,	// (0x00072a2a) cell_vitu2_dropdown_list_char_pane

0xd141,	// (0x00072a4b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xd141,	// (0x00072a4b) cell_vitu2_dropdown_list_ctrl_pane

0x46fd,	// (0x0006a007) cell_vitu2_dropdown_list_char_pane_g1

0x46f4,	// (0x00069ffe) cell_vitu2_dropdown_list_char_pane_g2

0x46eb,	// (0x00069ff5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0007532e) cell_vitu2_dropdown_list_char_pane_g

0xd16d,	// (0x00072a77) cell_vitu2_dropdown_list_char_pane_t1

0xd17b,	// (0x00072a85) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xd17b,	// (0x00072a85) cell_vitu2_dropdown_list_ctrl_pane_g1

0xd18b,	// (0x00072a95) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xd18b,	// (0x00072a95) cell_vitu2_dropdown_list_ctrl_pane_g2

0xd19c,	// (0x00072aa6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xd19c,	// (0x00072aa6) cell_vitu2_dropdown_list_ctrl_pane_g3

0xd1ac,	// (0x00072ab6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xd1ac,	// (0x00072ab6) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2fec,	// (0x000688f6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2fec,	// (0x000688f6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00075335) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00075335) cell_vitu2_dropdown_list_ctrl_pane_g

0xd1c8,	// (0x00072ad2) aid_size_cell_gallery2_ParamLimits

0xd1c8,	// (0x00072ad2) aid_size_cell_gallery2

0xd1d6,	// (0x00072ae0) grid_gallery2_pane_ParamLimits

0xd1d6,	// (0x00072ae0) grid_gallery2_pane

0xd1e5,	// (0x00072aef) scroll_pane_cp029_ParamLimits

0xd1e5,	// (0x00072aef) scroll_pane_cp029

0xd1f1,	// (0x00072afb) cell_gallery2_pane_ParamLimits

0xd1f1,	// (0x00072afb) cell_gallery2_pane

0x4706,	// (0x0006a010) cell_gallery2_pane_g2

0xd222,	// (0x00072b2c) cell_gallery2_pane_g3

0x4710,	// (0x0006a01a) cell_gallery2_pane_g4

0x4718,	// (0x0006a022) cell_gallery2_pane_g5

0x1414,	// (0x00066d1e) grid_highlight_pane_cp10

0xc8c6,	// (0x000721d0) popup_vitu2_match_list_window_ParamLimits

0xc8d8,	// (0x000721e2) popup_vitu2_query_window_ParamLimits

0xc8d8,	// (0x000721e2) popup_vitu2_query_window

0x75ee,	// (0x0006cef8) bg_vitu2_candi_button_pane

0x46fd,	// (0x0006a007) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x46f4,	// (0x00069ffe) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x46eb,	// (0x00069ff5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6996,	// (0x0006c2a0) bg_button_pane_cp015

0xd22a,	// (0x00072b34) bg_button_pane_cp016

0xd23d,	// (0x00072b47) bg_button_pane_cp017

0x287d,	// (0x00068187) bg_popup_sub_pane_cp22

0x4720,	// (0x0006a02a) popup_vitu2_query_window_g1

0xd261,	// (0x00072b6b) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00075340) popup_vitu2_query_window_g

0x69d5,	// (0x0006c2df) popup_vitu2_query_window_t1_ParamLimits

0x69d5,	// (0x0006c2df) popup_vitu2_query_window_t1

0x6a08,	// (0x0006c312) popup_vitu2_query_window_t2_ParamLimits

0x6a08,	// (0x0006c312) popup_vitu2_query_window_t2

0x6a1a,	// (0x0006c324) popup_vitu2_query_window_t3_ParamLimits

0x6a1a,	// (0x0006c324) popup_vitu2_query_window_t3

0xd272,	// (0x00072b7c) popup_vitu2_query_window_t4_ParamLimits

0xd272,	// (0x00072b7c) popup_vitu2_query_window_t4

0xd293,	// (0x00072b9d) popup_vitu2_query_window_t5_ParamLimits

0xd293,	// (0x00072b9d) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00075347) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00075347) popup_vitu2_query_window_t

0x45c1,	// (0x00069ecb) main_cset_text_pane

0xcc95,	// (0x0007259f) aid_area_touch_slider_ParamLimits

0xccb1,	// (0x000725bb) cset_slider_pane_ParamLimits

0xccdb,	// (0x000725e5) main_cset_slider_pane_g1_ParamLimits

0xccf0,	// (0x000725fa) main_cset_slider_pane_g2_ParamLimits

0x45e2,	// (0x00069eec) main_cset_slider_pane_g3_ParamLimits

0x45e2,	// (0x00069eec) main_cset_slider_pane_g3

0xcd05,	// (0x0007260f) main_cset_slider_pane_g4_ParamLimits

0xcd05,	// (0x0007260f) main_cset_slider_pane_g4

0xcd14,	// (0x0007261e) main_cset_slider_pane_g5_ParamLimits

0xcd14,	// (0x0007261e) main_cset_slider_pane_g5

0xcd22,	// (0x0007262c) main_cset_slider_pane_g6_ParamLimits

0xcd22,	// (0x0007262c) main_cset_slider_pane_g6

0xf990,	// (0x0007529a) main_cset_slider_pane_g_ParamLimits

0x4612,	// (0x00069f1c) main_cset_slider_pane_t1_ParamLimits

0xcdb8,	// (0x000726c2) main_cset_slider_pane_t2_ParamLimits

0xcdd2,	// (0x000726dc) main_cset_slider_pane_t3_ParamLimits

0xcdec,	// (0x000726f6) main_cset_slider_pane_t4_ParamLimits

0xce0a,	// (0x00072714) main_cset_slider_pane_t5_ParamLimits

0xce2c,	// (0x00072736) main_cset_slider_pane_t6_ParamLimits

0xce43,	// (0x0007274d) main_cset_slider_pane_t7_ParamLimits

0xce71,	// (0x0007277b) main_cset_slider_pane_t8_ParamLimits

0xce71,	// (0x0007277b) main_cset_slider_pane_t8

0xce99,	// (0x000727a3) main_cset_slider_pane_t9_ParamLimits

0xce99,	// (0x000727a3) main_cset_slider_pane_t9

0xcec1,	// (0x000727cb) main_cset_slider_pane_t10_ParamLimits

0xcec1,	// (0x000727cb) main_cset_slider_pane_t10

0xcee9,	// (0x000727f3) main_cset_slider_pane_t11_ParamLimits

0xcee9,	// (0x000727f3) main_cset_slider_pane_t11

0xcf13,	// (0x0007281d) main_cset_slider_pane_t12_ParamLimits

0xcf13,	// (0x0007281d) main_cset_slider_pane_t12

0xcf32,	// (0x0007283c) main_cset_slider_pane_t13_ParamLimits

0xcf32,	// (0x0007283c) main_cset_slider_pane_t13

0xf9b5,	// (0x000752bf) main_cset_slider_pane_t_ParamLimits

0x75ee,	// (0x0006cef8) bg_popup_sub_pane_cp011

0x472c,	// (0x0006a036) main_cset_text_pane_g1

0x4734,	// (0x0006a03e) main_cset_text_pane_t1

0x4742,	// (0x0006a04c) main_cset_text_pane_t2

0x4750,	// (0x0006a05a) main_cset_text_pane_t3

0x475e,	// (0x0006a068) main_cset_text_pane_t4

0x476c,	// (0x0006a076) main_cset_text_pane_t5

0x477a,	// (0x0006a084) main_cset_text_pane_t6

0x4788,	// (0x0006a092) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x00075356) main_cset_text_pane_t

0x75ee,	// (0x0006cef8) main_cam4_burst_pane

0x75ee,	// (0x0006cef8) main_cam5_pane

0x0e06,	// (0x00066710) bg_button_pane_cp019

0xcbed,	// (0x000724f7) bg_button_pane_cp020

0x45ee,	// (0x00069ef8) main_cset_slider_pane_g7_ParamLimits

0x45ee,	// (0x00069ef8) main_cset_slider_pane_g7

0x45fa,	// (0x00069f04) main_cset_slider_pane_g8_ParamLimits

0x45fa,	// (0x00069f04) main_cset_slider_pane_g8

0xcd38,	// (0x00072642) main_cset_slider_pane_g9_ParamLimits

0xcd38,	// (0x00072642) main_cset_slider_pane_g9

0xcd44,	// (0x0007264e) main_cset_slider_pane_g10_ParamLimits

0xcd44,	// (0x0007264e) main_cset_slider_pane_g10

0xcd50,	// (0x0007265a) main_cset_slider_pane_g11_ParamLimits

0xcd50,	// (0x0007265a) main_cset_slider_pane_g11

0xcd5c,	// (0x00072666) main_cset_slider_pane_g12_ParamLimits

0xcd5c,	// (0x00072666) main_cset_slider_pane_g12

0xcd68,	// (0x00072672) main_cset_slider_pane_g13_ParamLimits

0xcd68,	// (0x00072672) main_cset_slider_pane_g13

0xcd76,	// (0x00072680) main_cset_slider_pane_g14_ParamLimits

0xcd76,	// (0x00072680) main_cset_slider_pane_g14

0xcd84,	// (0x0007268e) main_cset_slider_pane_g15_ParamLimits

0xcd84,	// (0x0007268e) main_cset_slider_pane_g15

0x4640,	// (0x00069f4a) main_cset_slider_pane_t14_ParamLimits

0x4640,	// (0x00069f4a) main_cset_slider_pane_t14

0x4679,	// (0x00069f83) main_cset_slider_pane_t15_ParamLimits

0x4679,	// (0x00069f83) main_cset_slider_pane_t15

0xd2b4,	// (0x00072bbe) aid_cam4_burst_size_cell_ParamLimits

0xd2b4,	// (0x00072bbe) aid_cam4_burst_size_cell

0xd2d0,	// (0x00072bda) grid_cam4_burst_pane_ParamLimits

0xd2d0,	// (0x00072bda) grid_cam4_burst_pane

0xd300,	// (0x00072c0a) linegrid_cam4_burst_pane_ParamLimits

0xd300,	// (0x00072c0a) linegrid_cam4_burst_pane

0xd322,	// (0x00072c2c) scroll_pane_cp30_ParamLimits

0xd322,	// (0x00072c2c) scroll_pane_cp30

0xd32e,	// (0x00072c38) cell_cam4_burst_pane_ParamLimits

0xd32e,	// (0x00072c38) cell_cam4_burst_pane

0x4796,	// (0x0006a0a0) linegrid_cam4_burst_pane_g1_ParamLimits

0x4796,	// (0x0006a0a0) linegrid_cam4_burst_pane_g1

0xd36a,	// (0x00072c74) linegrid_cam4_burst_pane_g2_ParamLimits

0xd36a,	// (0x00072c74) linegrid_cam4_burst_pane_g2

0x47a3,	// (0x0006a0ad) linegrid_cam4_burst_pane_g3_ParamLimits

0x47a3,	// (0x0006a0ad) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x00075365) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00075365) linegrid_cam4_burst_pane_g

0xd37b,	// (0x00072c85) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xd37b,	// (0x00072c85) linegrid_cam4_burst_pane_g3_copy1

0x47b0,	// (0x0006a0ba) linegrid_cam4_burst_pane_g4_ParamLimits

0x47b0,	// (0x0006a0ba) linegrid_cam4_burst_pane_g4

0xd395,	// (0x00072c9f) linegrid_cam4_burst_pane_g5_ParamLimits

0xd395,	// (0x00072c9f) linegrid_cam4_burst_pane_g5

0xd3a6,	// (0x00072cb0) linegrid_cam4_burst_pane_g6_ParamLimits

0xd3a6,	// (0x00072cb0) linegrid_cam4_burst_pane_g6

0x47bd,	// (0x0006a0c7) linegrid_cam4_burst_pane_g7_ParamLimits

0x47bd,	// (0x0006a0c7) linegrid_cam4_burst_pane_g7

0xd3b7,	// (0x00072cc1) cell_cam4_burst_pane_g1

0x47e4,	// (0x0006a0ee) main_cam5_pane_t1_ParamLimits

0x47e4,	// (0x0006a0ee) main_cam5_pane_t1

0x47f6,	// (0x0006a100) main_cam5_pane_t2_ParamLimits

0x47f6,	// (0x0006a100) main_cam5_pane_t2

0x4808,	// (0x0006a112) main_cam5_pane_t3_ParamLimits

0x4808,	// (0x0006a112) main_cam5_pane_t3

0x481a,	// (0x0006a124) main_cam5_pane_t4_ParamLimits

0x481a,	// (0x0006a124) main_cam5_pane_t4

0x4830,	// (0x0006a13a) main_cam5_pane_t5_ParamLimits

0x4830,	// (0x0006a13a) main_cam5_pane_t5

0x4842,	// (0x0006a14c) main_cam5_pane_t6_ParamLimits

0x4842,	// (0x0006a14c) main_cam5_pane_t6

0x4856,	// (0x0006a160) main_cam5_pane_t7_ParamLimits

0x4856,	// (0x0006a160) main_cam5_pane_t7

0x4868,	// (0x0006a172) main_cam5_pane_t8_ParamLimits

0x4868,	// (0x0006a172) main_cam5_pane_t8

0x4884,	// (0x0006a18e) main_cam5_pane_t9_ParamLimits

0x4884,	// (0x0006a18e) main_cam5_pane_t9

0x4896,	// (0x0006a1a0) main_cam5_pane_t10_ParamLimits

0x4896,	// (0x0006a1a0) main_cam5_pane_t10

0x48a8,	// (0x0006a1b2) main_cam5_pane_t11_ParamLimits

0x48a8,	// (0x0006a1b2) main_cam5_pane_t11

0x48ba,	// (0x0006a1c4) main_cam5_pane_t12_ParamLimits

0x48ba,	// (0x0006a1c4) main_cam5_pane_t12

0x48cf,	// (0x0006a1d9) main_cam5_pane_t13_ParamLimits

0x48cf,	// (0x0006a1d9) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00075371) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00075371) main_cam5_pane_t

0x7866,	// (0x0006d170) popup_scut_keymap_window_ParamLimits

0x7866,	// (0x0006d170) popup_scut_keymap_window

0xd3ca,	// (0x00072cd4) aid_size_cell_brow_shortcut

0x1414,	// (0x00066d1e) bg_popup_window_pane_cp010

0xd3d6,	// (0x00072ce0) grid_scut_pane

0xd3e2,	// (0x00072cec) cell_scut_pane_ParamLimits

0xd3e2,	// (0x00072cec) cell_scut_pane

0xd3f9,	// (0x00072d03) cell_scut_pane_g1

0x48ec,	// (0x0006a1f6) cell_scut_pane_t1

0x48fb,	// (0x0006a205) cell_scut_pane_t2

0xd402,	// (0x00072d0c) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x0007538c) cell_scut_pane_t

0xb3f8,	// (0x00070d02) main_mup3_pane_g8_ParamLimits

0xb3f8,	// (0x00070d02) main_mup3_pane_g8

0xc7fe,	// (0x00072108) area_vitu2_query_pane_ParamLimits

0xc7fe,	// (0x00072108) area_vitu2_query_pane

0x69a8,	// (0x0006c2b2) input_focus_pane_cp08

0x490a,	// (0x0006a214) area_vitu2_query_pane_g1

0x6a98,	// (0x0006c3a2) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x00075393) area_vitu2_query_pane_g

0xd410,	// (0x00072d1a) area_vitu2_query_pane_t1_ParamLimits

0xd410,	// (0x00072d1a) area_vitu2_query_pane_t1

0xd424,	// (0x00072d2e) area_vitu2_query_pane_t2_ParamLimits

0xd424,	// (0x00072d2e) area_vitu2_query_pane_t2

0x6aa9,	// (0x0006c3b3) area_vitu2_query_pane_t3_ParamLimits

0x6aa9,	// (0x0006c3b3) area_vitu2_query_pane_t3

0x6ad1,	// (0x0006c3db) area_vitu2_query_pane_t4_ParamLimits

0x6ad1,	// (0x0006c3db) area_vitu2_query_pane_t4

0x6af9,	// (0x0006c403) area_vitu2_query_pane_t5_ParamLimits

0x6af9,	// (0x0006c403) area_vitu2_query_pane_t5

0x6b21,	// (0x0006c42b) area_vitu2_query_pane_t6_ParamLimits

0x6b21,	// (0x0006c42b) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x00075398) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x00075398) area_vitu2_query_pane_t

0xd438,	// (0x00072d42) bg_button_pane_cp018

0xd446,	// (0x00072d50) bg_button_pane_cp021

0x6b6d,	// (0x0006c477) bg_button_pane_cp022

0x6b7e,	// (0x0006c488) input_focus_pane_cp09

0x9905,	// (0x0006f20f) aid_size_touch_mv_arrow_left

0x9930,	// (0x0006f23a) aid_size_touch_mv_arrow_right

0xcd9c,	// (0x000726a6) main_cset_slider_pane_g16_ParamLimits

0xcd9c,	// (0x000726a6) main_cset_slider_pane_g16

0xcdaa,	// (0x000726b4) main_cset_slider_pane_g17_ParamLimits

0xcdaa,	// (0x000726b4) main_cset_slider_pane_g17

0xd3b7,	// (0x00072cc1) cell_cam4_burst_pane_g1_ParamLimits

0x75ee,	// (0x0006cef8) compa_mode_pane

0xcfca,	// (0x000728d4) popup_vtel_slider_window_g3_ParamLimits

0xcfca,	// (0x000728d4) popup_vtel_slider_window_g3

0xcfde,	// (0x000728e8) popup_vtel_slider_window_g4_ParamLimits

0xcfde,	// (0x000728e8) popup_vtel_slider_window_g4

0xcff2,	// (0x000728fc) popup_vtel_slider_window_t1_ParamLimits

0xcff2,	// (0x000728fc) popup_vtel_slider_window_t1

0x75ee,	// (0x0006cef8) main_cl_pane

0x28a5,	// (0x000681af) popup_imed_adjust2_window_ParamLimits

0x287d,	// (0x00068187) bg_tb_trans_pane_cp05_ParamLimits

0x328b,	// (0x00068b95) popup_imed_adjust2_window_g1_ParamLimits

0x329a,	// (0x00068ba4) popup_imed_adjust2_window_g2_ParamLimits

0x329a,	// (0x00068ba4) popup_imed_adjust2_window_g2

0x32a6,	// (0x00068bb0) popup_imed_adjust2_window_g3_ParamLimits

0x32a6,	// (0x00068bb0) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00075103) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00075103) popup_imed_adjust2_window_g

0x32b2,	// (0x00068bbc) popup_imed_adjust2_window_t1_ParamLimits

0x32ca,	// (0x00068bd4) slider_imed_adjust_pane_ParamLimits

0x32de,	// (0x00068be8) slider_imed_adjust_pane_g1_ParamLimits

0x32ee,	// (0x00068bf8) slider_imed_adjust_pane_g2_ParamLimits

0x32fe,	// (0x00068c08) slider_imed_adjust_pane_g3_ParamLimits

0x330f,	// (0x00068c19) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0007510a) slider_imed_adjust_pane_g_ParamLimits

0xc55f,	// (0x00071e69) aid_touch_area_cam4_ParamLimits

0xc55f,	// (0x00071e69) aid_touch_area_cam4

0xc56f,	// (0x00071e79) battery_pane_cp01

0xc5f6,	// (0x00071f00) main_camera4_pane_g6_ParamLimits

0xc5f6,	// (0x00071f00) main_camera4_pane_g6

0xc614,	// (0x00071f1e) main_camera4_pane_t2_ParamLimits

0xc614,	// (0x00071f1e) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0007520d) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0007520d) main_camera4_pane_t

0xc69b,	// (0x00071fa5) aid_touch_area_vid4_ParamLimits

0xc69b,	// (0x00071fa5) aid_touch_area_vid4

0xc6db,	// (0x00071fe5) main_video4_pane_g5_ParamLimits

0xc6db,	// (0x00071fe5) main_video4_pane_g5

0xc6fd,	// (0x00072007) vid4_progress_pane_ParamLimits

0xc6fd,	// (0x00072007) vid4_progress_pane

0x4606,	// (0x00069f10) main_cset_slider_pane_g18_ParamLimits

0x4606,	// (0x00069f10) main_cset_slider_pane_g18

0x47ca,	// (0x0006a0d4) cell_cam4_burst_pane_g2_ParamLimits

0x47ca,	// (0x0006a0d4) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0007536c) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0007536c) cell_cam4_burst_pane_g

0xd452,	// (0x00072d5c) bg_cl_pane_ParamLimits

0xd452,	// (0x00072d5c) bg_cl_pane

0xd45e,	// (0x00072d68) cl_header_pane_ParamLimits

0xd45e,	// (0x00072d68) cl_header_pane

0xd46a,	// (0x00072d74) cl_listscroll_pane_ParamLimits

0xd46a,	// (0x00072d74) cl_listscroll_pane

0x4916,	// (0x0006a220) bg_cl_pane_g1

0x491e,	// (0x0006a228) bg_cl_pane_g2

0x4926,	// (0x0006a230) bg_cl_pane_g3

0x492e,	// (0x0006a238) bg_cl_pane_g4

0x4936,	// (0x0006a240) bg_cl_pane_g5

0x493e,	// (0x0006a248) bg_cl_pane_g6

0x4946,	// (0x0006a250) bg_cl_pane_g7

0x494e,	// (0x0006a258) bg_cl_pane_g8

0x4956,	// (0x0006a260) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x000753a7) bg_cl_pane_g

0xd476,	// (0x00072d80) aid_height_cl_leading_ParamLimits

0xd476,	// (0x00072d80) aid_height_cl_leading

0xd482,	// (0x00072d8c) aid_height_cl_text_ParamLimits

0xd482,	// (0x00072d8c) aid_height_cl_text

0x789d,	// (0x0006d1a7) bg_cl_header_pane_ParamLimits

0x789d,	// (0x0006d1a7) bg_cl_header_pane

0xd49a,	// (0x00072da4) cl_header_pane_g1_ParamLimits

0xd49a,	// (0x00072da4) cl_header_pane_g1

0xd4a7,	// (0x00072db1) cl_header_pane_t1_ParamLimits

0xd4a7,	// (0x00072db1) cl_header_pane_t1

0x495e,	// (0x0006a268) cl_list_pane

0x45d9,	// (0x00069ee3) hc_scroll_pane_cp01

0x0ce1,	// (0x000665eb) bg_cl_header_pane_g1

0x44bf,	// (0x00069dc9) bg_cl_header_pane_g2

0x0d01,	// (0x0006660b) bg_cl_header_pane_g3

0x44cf,	// (0x00069dd9) bg_cl_header_pane_g4

0x44c7,	// (0x00069dd1) bg_cl_header_pane_g5

0x46e3,	// (0x00069fed) bg_cl_header_pane_g6

0x44e7,	// (0x00069df1) bg_cl_header_pane_g7

0x44ef,	// (0x00069df9) bg_cl_header_pane_g8

0x44df,	// (0x00069de9) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x000753ba) bg_cl_header_pane_g

0xd4b9,	// (0x00072dc3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd4b9,	// (0x00072dc3) hc_cl_list_double_graphic_heading_pane

0xd4d0,	// (0x00072dda) hc_cl_list_single_graphic_pane_ParamLimits

0xd4d0,	// (0x00072dda) hc_cl_list_single_graphic_pane

0xd4f0,	// (0x00072dfa) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd4f0,	// (0x00072dfa) hc_cl_list_single_graphic_pane_g1

0xd4fc,	// (0x00072e06) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd4fc,	// (0x00072e06) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x000753cd) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x000753cd) hc_cl_list_single_graphic_pane_g

0xd510,	// (0x00072e1a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd510,	// (0x00072e1a) hc_cl_list_single_graphic_pane_t1

0xd4f0,	// (0x00072dfa) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd4f0,	// (0x00072dfa) hc_cl_list_double_graphic_heading_pane_g1

0xd525,	// (0x00072e2f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd525,	// (0x00072e2f) hc_cl_list_double_graphic_heading_pane_g2

0xd539,	// (0x00072e43) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd539,	// (0x00072e43) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x000753d2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x000753d2) hc_cl_list_double_graphic_heading_pane_g

0xd54d,	// (0x00072e57) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd54d,	// (0x00072e57) hc_cl_list_double_graphic_heading_pane_t1

0xd562,	// (0x00072e6c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd562,	// (0x00072e6c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x000753d9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x000753d9) hc_cl_list_double_graphic_heading_pane_t

0xd57f,	// (0x00072e89) vid4_progress_pane_g1

0xd58f,	// (0x00072e99) vid4_progress_pane_g2

0xd59f,	// (0x00072ea9) vid4_progress_pane_g3

0xc663,	// (0x00071f6d) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x000753de) vid4_progress_pane_g

0xd5ab,	// (0x00072eb5) vid4_progress_pane_t1

0xd5c0,	// (0x00072eca) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x000753e9) vid4_progress_pane_t

0xd5eb,	// (0x00072ef5) wait_bar_pane_cp07

0x2b76,	// (0x00068480) blid_firmament_pane_ParamLimits

0x2bb9,	// (0x000684c3) popup_blid_sat_info2_window_g1

0x2bdd,	// (0x000684e7) popup_blid_sat_info2_window_t3

0x2beb,	// (0x000684f5) popup_blid_sat_info2_window_t4

0x2bf9,	// (0x00068503) popup_blid_sat_info2_window_t5

0x2c07,	// (0x00068511) popup_blid_sat_info2_window_t6

0x2c17,	// (0x00068521) popup_blid_sat_info2_window_t7

0x2c25,	// (0x0006852f) popup_blid_sat_info2_window_t8

0x2c33,	// (0x0006853d) popup_blid_sat_info2_window_t9

0x2c41,	// (0x0006854b) popup_blid_sat_info2_window_t10

0x2d05,	// (0x0006860f) aid_firma_cardinal_ParamLimits

0x2d19,	// (0x00068623) blid_firmament_pane_t1_ParamLimits

0x2d30,	// (0x0006863a) blid_firmament_pane_t2_ParamLimits

0x2d47,	// (0x00068651) blid_firmament_pane_t3_ParamLimits

0x2d5e,	// (0x00068668) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00074ffc) blid_firmament_pane_t_ParamLimits

0x2d75,	// (0x0006867f) blid_sat_info_pane_ParamLimits

0xa69f,	// (0x0006ffa9) main_cam_set_pane_ParamLimits

0xbbb3,	// (0x000714bd) aid_size_cell_colour_35_ParamLimits

0xbbcd,	// (0x000714d7) aid_size_cell_colour_112_ParamLimits

0xbbe4,	// (0x000714ee) aid_size_cell_effect_ParamLimits

0xa69f,	// (0x0006ffa9) bg_tb_trans_pane_cp02_ParamLimits

0x0f7e,	// (0x00066888) heading_imed_pane_ParamLimits

0xbbfe,	// (0x00071508) listscroll_imed_pane_ParamLimits

0x1ea7,	// (0x000677b1) popup_call2_audio_first_window_g5_ParamLimits

0x1ea7,	// (0x000677b1) popup_call2_audio_first_window_g5

0xc31c,	// (0x00071c26) aid_size_touch_image3_arrow_left_ParamLimits

0xc31c,	// (0x00071c26) aid_size_touch_image3_arrow_left

0xc332,	// (0x00071c3c) aid_size_touch_image3_arrow_right_ParamLimits

0xc332,	// (0x00071c3c) aid_size_touch_image3_arrow_right

0xd5d6,	// (0x00072ee0) vid4_progress_pane_t3

0xbea5,	// (0x000717af) main_hwr_training_symbol_option_pane_ParamLimits

0xbea5,	// (0x000717af) main_hwr_training_symbol_option_pane

0x3578,	// (0x00068e82) popup_hwr_training_preview_window_ParamLimits

0x3578,	// (0x00068e82) popup_hwr_training_preview_window

0xbf06,	// (0x00071810) hwr_training_navi_pane_g5_ParamLimits

0xbf06,	// (0x00071810) hwr_training_navi_pane_g5

0x44ad,	// (0x00069db7) popup_char_count_window

0x789d,	// (0x0006d1a7) bg_popup_sub_pane_cp20_ParamLimits

0xd0e8,	// (0x000729f2) list_vitu2_match_list_pane_ParamLimits

0xd0f4,	// (0x000729fe) vitu2_page_scroll_pane_ParamLimits

0xd0f4,	// (0x000729fe) vitu2_page_scroll_pane

0x4970,	// (0x0006a27a) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4970,	// (0x0006a27a) list_single_hwr_training_symbol_option_pane

0x4983,	// (0x0006a28d) list_single_hwr_training_symbol_option_pane_g1

0x498b,	// (0x0006a295) list_single_hwr_training_symbol_option_pane_t1

0x4999,	// (0x0006a2a3) bg_button_pane_cp023

0x49a2,	// (0x0006a2ac) bg_button_pane_cp024

0xd60c,	// (0x00072f16) vitu2_page_scroll_pane_g1

0xd614,	// (0x00072f1e) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x000753f0) vitu2_page_scroll_pane_g

0xd61c,	// (0x00072f26) vitu2_page_scroll_pane_t1

0x2a92,	// (0x0006839c) popup_char_count_window_g1

0x49d5,	// (0x0006a2df) popup_char_count_window_g2

0x49de,	// (0x0006a2e8) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x000753f5) popup_char_count_window_g

0x49e7,	// (0x0006a2f1) popup_char_count_window_t1

0x75ee,	// (0x0006cef8) main_vded2_pane

0x3277,	// (0x00068b81) aid_size_cell_imed_line

0x3281,	// (0x00068b8b) grid_imed_line_width_pane

0xc753,	// (0x0007205d) vid4_indicators_pane_g4

0x49f5,	// (0x0006a2ff) cell_imed_line_width_pane_ParamLimits

0x49f5,	// (0x0006a2ff) cell_imed_line_width_pane

0x4a09,	// (0x0006a313) cell_imed_line_width_pane_g1

0x2b24,	// (0x0006842e) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x000753fc) cell_imed_line_width_pane_g

0xd62b,	// (0x00072f35) main_vded2_pane_g1_ParamLimits

0xd62b,	// (0x00072f35) main_vded2_pane_g1

0xd638,	// (0x00072f42) main_vded2_pane_g2_ParamLimits

0xd638,	// (0x00072f42) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00075401) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00075401) main_vded2_pane_g

0xd646,	// (0x00072f50) vded2_slider_pane_ParamLimits

0xd646,	// (0x00072f50) vded2_slider_pane

0xd653,	// (0x00072f5d) aid_size_touch_vded2_end

0xd65d,	// (0x00072f67) aid_size_touch_vded2_playhead

0x4a12,	// (0x0006a31c) aid_size_touch_vded2_start

0x4a1a,	// (0x0006a324) vded2_slider_bg_pane

0x4a23,	// (0x0006a32d) vded2_slider_pane_g1

0x4a2c,	// (0x0006a336) vded2_slider_pane_g2

0xd665,	// (0x00072f6f) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00075406) vded2_slider_pane_g

0x4a34,	// (0x0006a33e) vded2_slider_bg_pane_g1

0x4a3d,	// (0x0006a347) vded2_slider_bg_pane_g2

0x4a46,	// (0x0006a350) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x0007540d) vded2_slider_bg_pane_g

0x9f77,	// (0x0006f881) aid_postcard_touch_down_pane_ParamLimits

0x9f77,	// (0x0006f881) aid_postcard_touch_down_pane

0x9f87,	// (0x0006f891) aid_postcard_touch_up_pane_ParamLimits

0x9f87,	// (0x0006f891) aid_postcard_touch_up_pane

0x75ee,	// (0x0006cef8) main_blid2_pane

0x288b,	// (0x00068195) popup_blid2_search_window

0x75ee,	// (0x0006cef8) blid2_gps_pane

0x75ee,	// (0x0006cef8) blid2_navig_pane

0x75ee,	// (0x0006cef8) blid2_search_pane

0x75ee,	// (0x0006cef8) blid2_tripm_pane

0xd66e,	// (0x00072f78) blid2_search_pane_g1_ParamLimits

0xd66e,	// (0x00072f78) blid2_search_pane_g1

0xd67e,	// (0x00072f88) blid2_search_pane_t1_ParamLimits

0xd67e,	// (0x00072f88) blid2_search_pane_t1

0xd690,	// (0x00072f9a) aid_size_cell_blid2_gps_ParamLimits

0xd690,	// (0x00072f9a) aid_size_cell_blid2_gps

0xd6a0,	// (0x00072faa) blid2_gps_pane_g1_ParamLimits

0xd6a0,	// (0x00072faa) blid2_gps_pane_g1

0xd6ac,	// (0x00072fb6) grid_blid2_satellite_pane_ParamLimits

0xd6ac,	// (0x00072fb6) grid_blid2_satellite_pane

0xd6bc,	// (0x00072fc6) blid2_navig_pane_g1_ParamLimits

0xd6bc,	// (0x00072fc6) blid2_navig_pane_g1

0xd6c8,	// (0x00072fd2) blid2_navig_pane_t1_ParamLimits

0xd6c8,	// (0x00072fd2) blid2_navig_pane_t1

0xd6da,	// (0x00072fe4) blid2_navig_pane_t2_ParamLimits

0xd6da,	// (0x00072fe4) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x00075414) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x00075414) blid2_navig_pane_t

0xd6ec,	// (0x00072ff6) blid2_navig_ring_pane_ParamLimits

0xd6ec,	// (0x00072ff6) blid2_navig_ring_pane

0xd6fc,	// (0x00073006) blid2_speed_pane_ParamLimits

0xd6fc,	// (0x00073006) blid2_speed_pane

0xd708,	// (0x00073012) blid2_tripm_pane_g1_ParamLimits

0xd708,	// (0x00073012) blid2_tripm_pane_g1

0xd718,	// (0x00073022) blid2_tripm_pane_g2_ParamLimits

0xd718,	// (0x00073022) blid2_tripm_pane_g2

0xd724,	// (0x0007302e) blid2_tripm_pane_g3_ParamLimits

0xd724,	// (0x0007302e) blid2_tripm_pane_g3

0xd730,	// (0x0007303a) blid2_tripm_pane_g4_ParamLimits

0xd730,	// (0x0007303a) blid2_tripm_pane_g4

0xd73c,	// (0x00073046) blid2_tripm_pane_g5_ParamLimits

0xd73c,	// (0x00073046) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x00075419) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x00075419) blid2_tripm_pane_g

0xd758,	// (0x00073062) blid2_tripm_pane_t1_ParamLimits

0xd758,	// (0x00073062) blid2_tripm_pane_t1

0xd76c,	// (0x00073076) blid2_tripm_pane_t2_ParamLimits

0xd76c,	// (0x00073076) blid2_tripm_pane_t2

0xd780,	// (0x0007308a) blid2_tripm_pane_t3_ParamLimits

0xd780,	// (0x0007308a) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x00075426) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x00075426) blid2_tripm_pane_t

0xd7b2,	// (0x000730bc) cell_blid2_satellite_pane_ParamLimits

0xd7b2,	// (0x000730bc) cell_blid2_satellite_pane

0xd7cc,	// (0x000730d6) cell_blid2_satellite_pane_g1

0x4a4f,	// (0x0006a359) cell_blid2_satellite_pane_t1

0x2d85,	// (0x0006868f) blid2_speed_pane_g1

0x4a5d,	// (0x0006a367) blid2_speed_pane_t1

0x4a6b,	// (0x0006a375) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x0007542f) blid2_speed_pane_t

0x2d85,	// (0x0006868f) blid2_navig_ring_pane_g1

0xd7d5,	// (0x000730df) blid2_navig_ring_pane_g2

0xd7dd,	// (0x000730e7) blid2_navig_ring_pane_g3

0xd7e5,	// (0x000730ef) blid2_navig_ring_pane_g4

0xd7ed,	// (0x000730f7) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x00075434) blid2_navig_ring_pane_g

0x75ee,	// (0x0006cef8) bg_popup_window_pane_cp011

0x4a79,	// (0x0006a383) popup_blid2_search_window_g1

0x4a81,	// (0x0006a38b) popup_blid2_search_window_t1

0x4a8f,	// (0x0006a399) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x0007543f) popup_blid2_search_window_t

0x0bf0,	// (0x000664fa) main_browser_pane_g1

0x07ff,	// (0x00066109) main_browser_pane_ParamLimits

0xa69f,	// (0x0006ffa9) bg_button_pane_cp011_ParamLimits

0xc9bc,	// (0x000722c6) cell_vitu2_function_pane_g1_ParamLimits

0x287d,	// (0x00068187) bg_popup_sub_pane_cp22_ParamLimits

0x69a8,	// (0x0006c2b2) input_focus_pane_cp08_ParamLimits

0xd250,	// (0x00072b5a) popup_vitu2_query_button_pane_ParamLimits

0xd250,	// (0x00072b5a) popup_vitu2_query_button_pane

0x69bf,	// (0x0006c2c9) popup_vitu2_query_input_button_pane

0x4720,	// (0x0006a02a) popup_vitu2_query_window_g1_ParamLimits

0xd261,	// (0x00072b6b) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00075340) popup_vitu2_query_window_g_ParamLimits

0x75ee,	// (0x0006cef8) bg_button_pane_cp026

0xd7f5,	// (0x000730ff) popup_vitu2_query_input_button_pane_g1

0x75ee,	// (0x0006cef8) bg_button_pane_cp025

0x4a9d,	// (0x0006a3a7) popup_vitu2_query_button_pane_t1

0xb0e9,	// (0x000709f3) main_mp3_pane_t6

0xb0f9,	// (0x00070a03) popup_slider_window_cp01

0xc64a,	// (0x00071f54) cam4_battery_pane

0xc729,	// (0x00072033) cam4_battery_pane_cp02

0xd577,	// (0x00072e81) cam4_battery_pane_cp01

0xd577,	// (0x00072e81) cam4_battery_pane_cp03

0x2d85,	// (0x0006868f) cam4_battery_pane_g1

0x3676,	// (0x00068f80) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x00075444) cam4_battery_pane_g

0x2c4f,	// (0x00068559) popup_blid_sat_info2_window_t11

0x9905,	// (0x0006f20f) aid_size_touch_mv_arrow_left_ParamLimits

0x9930,	// (0x0006f23a) aid_size_touch_mv_arrow_right_ParamLimits

0x1374,	// (0x00066c7e) navi_pane_g1_ParamLimits

0x996f,	// (0x0006f279) navi_pane_g2_ParamLimits

0x999d,	// (0x0006f2a7) navi_pane_g3_ParamLimits

0xf404,	// (0x00074d0e) navi_pane_g_ParamLimits

0x99f7,	// (0x0006f301) navi_pane_mv_t1_ParamLimits

0xbc0a,	// (0x00071514) grid_imed_effect_pane_ParamLimits

0x85a3,	// (0x0006dead) aid_placing_vt_slider_lsc

0x0b3f,	// (0x00066449) aid_placing_vt_slider_prt

0xa69f,	// (0x0006ffa9) bg_tb_trans_pane_cp01_ParamLimits

0x2f0c,	// (0x00068816) popup_image_details_window_g1_ParamLimits

0x2f1f,	// (0x00068829) popup_image_details_window_g2_ParamLimits

0x2f34,	// (0x0006883e) popup_image_details_window_g3_ParamLimits

0x2f34,	// (0x0006883e) popup_image_details_window_g3

0xf737,	// (0x00075041) popup_image_details_window_g_ParamLimits

0x2f48,	// (0x00068852) popup_image_details_window_t1_ParamLimits

0x2f5a,	// (0x00068864) popup_image_details_window_t2_ParamLimits

0x2f73,	// (0x0006887d) popup_image_details_window_t3_ParamLimits

0x2f87,	// (0x00068891) popup_image_details_window_t4_ParamLimits

0x2fa2,	// (0x000688ac) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x00075048) popup_image_details_window_t_ParamLimits

0xd48e,	// (0x00072d98) cl_header_name_pane_ParamLimits

0xd48e,	// (0x00072d98) cl_header_name_pane

0xd7fd,	// (0x00073107) cl_header_name_pane_t1_ParamLimits

0xd7fd,	// (0x00073107) cl_header_name_pane_t1

0xd814,	// (0x0007311e) cl_header_name_pane_t2_ParamLimits

0xd814,	// (0x0007311e) cl_header_name_pane_t2

0xd83e,	// (0x00073148) cl_header_name_pane_t3_ParamLimits

0xd83e,	// (0x00073148) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x00075449) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x00075449) cl_header_name_pane_t

0x99c8,	// (0x0006f2d2) navi_pane_mv_g2_ParamLimits

0x37aa,	// (0x000690b4) field_vitu2_entry_pane_g1_ParamLimits

0x37b6,	// (0x000690c0) field_vitu2_entry_pane_g2_ParamLimits

0x37c2,	// (0x000690cc) field_vitu2_entry_pane_g3_ParamLimits

0x37c2,	// (0x000690cc) field_vitu2_entry_pane_g3

0xf935,	// (0x0007523f) field_vitu2_entry_pane_g_ParamLimits

0xc94c,	// (0x00072256) cell_vitu2_itu_pane_g1_ParamLimits

0xc95c,	// (0x00072266) cell_vitu2_itu_pane_g2_ParamLimits

0xc95c,	// (0x00072266) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0007524b) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0007524b) cell_vitu2_itu_pane_g

0xa69f,	// (0x0006ffa9) bg_vkb2_func_pane_cp05_ParamLimits

0xa69f,	// (0x0006ffa9) bg_vkb2_func_pane_cp05

0xa69f,	// (0x0006ffa9) bg_vkb2_func_pane_cp03

0xa69f,	// (0x0006ffa9) bg_vkb2_func_pane_cp04

0xa69f,	// (0x0006ffa9) bg_vkb2_func_pane_cp10_ParamLimits

0xa69f,	// (0x0006ffa9) bg_vkb2_func_pane_cp10

0x6b6d,	// (0x0006c477) bg_vkb2_func_pane_cp08

0xd438,	// (0x00072d42) bg_vkb2_func_pane_cp06

0xd446,	// (0x00072d50) bg_vkb2_func_pane_cp07

0x49ab,	// (0x0006a2b5) bg_vkb2_func_pane_cp11_ParamLimits

0x49ab,	// (0x0006a2b5) bg_vkb2_func_pane_cp11

0x49c0,	// (0x0006a2ca) bg_vkb2_func_pane_cp12_ParamLimits

0x49c0,	// (0x0006a2ca) bg_vkb2_func_pane_cp12

0x75ee,	// (0x0006cef8) bg_vkb2_func_pane_cp09

0x44bf,	// (0x00069dc9) bg_vkb2_func_pane_g1

0x0d01,	// (0x0006660b) bg_vkb2_func_pane_g2

0x44c7,	// (0x00069dd1) bg_vkb2_func_pane_g3

0x44cf,	// (0x00069dd9) bg_vkb2_func_pane_g4

0x46e3,	// (0x00069fed) bg_vkb2_func_pane_g5

0x44e7,	// (0x00069df1) bg_vkb2_func_pane_g6

0x44ef,	// (0x00069df9) bg_vkb2_func_pane_g7

0x44df,	// (0x00069de9) bg_vkb2_func_pane_g8

0x0ce1,	// (0x000665eb) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x00075450) bg_vkb2_func_pane_g

0xd74a,	// (0x00073054) blid2_tripm_pane_g6_ParamLimits

0xd74a,	// (0x00073054) blid2_tripm_pane_g6

0x3630,	// (0x00068f3a) mp4_progress_pane_g1

0xd7a6,	// (0x000730b0) blid2_tripm_values_pane_ParamLimits

0xd7a6,	// (0x000730b0) blid2_tripm_values_pane

0xd863,	// (0x0007316d) blid2_tripm_values_pane_t1

0xd871,	// (0x0007317b) blid2_tripm_values_pane_t2

0xd87f,	// (0x00073189) blid2_tripm_values_pane_t3

0xd88d,	// (0x00073197) blid2_tripm_values_pane_t4

0xd89b,	// (0x000731a5) blid2_tripm_values_pane_t5

0xd8a9,	// (0x000731b3) blid2_tripm_values_pane_t6

0xd8b7,	// (0x000731c1) blid2_tripm_values_pane_t7

0xd8c5,	// (0x000731cf) blid2_tripm_values_pane_t8

0xd8d3,	// (0x000731dd) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x00075463) blid2_tripm_values_pane_t

0x85e3,	// (0x0006deed) call_video_pane_t1_ParamLimits

0x8604,	// (0x0006df0e) call_video_pane_t2_ParamLimits

0xf28d,	// (0x00074b97) call_video_pane_t_ParamLimits

0x6760,	// (0x0006c06a) msg_header_pane_g1_ParamLimits

0x15af,	// (0x00066eb9) msg_header_pane_g2_ParamLimits

0x15af,	// (0x00066eb9) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x00074db1) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x00074db1) msg_header_pane_g

0x07ff,	// (0x00066109) main_clock2_pane_ParamLimits

0xb9a0,	// (0x000712aa) grid_clock2_toolbar_pane_ParamLimits

0xb9a0,	// (0x000712aa) grid_clock2_toolbar_pane

0xb9a0,	// (0x000712aa) listscroll_clock2_pane_ParamLimits

0xb9a0,	// (0x000712aa) listscroll_clock2_pane

0xba3d,	// (0x00071347) main_clock2_pane_t3_ParamLimits

0xba3d,	// (0x00071347) main_clock2_pane_t3

0xba4f,	// (0x00071359) main_clock2_pane_t4_ParamLimits

0xba4f,	// (0x00071359) main_clock2_pane_t4

0x4aab,	// (0x0006a3b5) cell_clock2_toolbar_pane

0x4ab3,	// (0x0006a3bd) cell_clock2_toolbar_pane_cp01

0x4ab3,	// (0x0006a3bd) cell_clock2_toolbar_pane_cp02

0x4abb,	// (0x0006a3c5) cell_clock2_toolbar_pane_cp03

0x4ac3,	// (0x0006a3cd) list_clock2_pane

0x12c7,	// (0x00066bd1) scroll_pane_cp10

0x4acb,	// (0x0006a3d5) list_single_clock2_pane_ParamLimits

0x4acb,	// (0x0006a3d5) list_single_clock2_pane

0x1414,	// (0x00066d1e) list_highlight_pane_cp08

0x4ad8,	// (0x0006a3e2) list_single_clock2_pane_t1

0x4ae6,	// (0x0006a3f0) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x00075476) list_single_clock2_pane_t

0x75ee,	// (0x0006cef8) bg_button_pane_cp10

0x4af4,	// (0x0006a3fe) cell_clock2_toolbar_pane_g1

0x9ed9,	// (0x0006f7e3) aid_main_viewer_pane_g1_ParamLimits

0x9ed9,	// (0x0006f7e3) aid_main_viewer_pane_g1

0x9ee5,	// (0x0006f7ef) aid_main_viewer_pane_g2_ParamLimits

0x9ee5,	// (0x0006f7ef) aid_main_viewer_pane_g2

0x9ef1,	// (0x0006f7fb) aid_main_viewer_pane_g3_ParamLimits

0x9ef1,	// (0x0006f7fb) aid_main_viewer_pane_g3

0x9f02,	// (0x0006f80c) aid_main_viewer_pane_g4_ParamLimits

0x9f02,	// (0x0006f80c) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x00074dc2) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x00074dc2) aid_main_viewer_pane_g

0xa692,	// (0x0006ff9c) main_calc_pane_ParamLimits

0xa6ad,	// (0x0006ffb7) main_dialer2_pane_ParamLimits

0x75ee,	// (0x0006cef8) main_cam6_pane

0x75ee,	// (0x0006cef8) main_vid6_pane

0xb9ac,	// (0x000712b6) listscroll_gen_pane_cp06_ParamLimits

0xb9ac,	// (0x000712b6) listscroll_gen_pane_cp06

0xba61,	// (0x0007136b) main_clock2_pane_t5_ParamLimits

0xba61,	// (0x0007136b) main_clock2_pane_t5

0xbab0,	// (0x000713ba) aid_call2_pane_cp10_ParamLimits

0xbac2,	// (0x000713cc) aid_call_pane_cp10_ParamLimits

0x1349,	// (0x00066c53) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1349,	// (0x00066c53) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbad4,	// (0x000713de) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbad4,	// (0x000713de) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1349,	// (0x00066c53) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x000750f8) popup_clock_analogue_window_cp10_g_ParamLimits

0xbaea,	// (0x000713f4) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc2c9,	// (0x00071bd3) cell_dialer2_keypad_pane_g2_ParamLimits

0xc2c9,	// (0x00071bd3) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x000751de) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x000751de) cell_dialer2_keypad_pane_g

0xc2e5,	// (0x00071bef) cell_dialer2_keypad_pane_t1

0xcc82,	// (0x0007258c) main_cset_text2_pane_ParamLimits

0xcc82,	// (0x0007258c) main_cset_text2_pane

0x490a,	// (0x0006a214) area_vitu2_query_pane_g1_ParamLimits

0x6a98,	// (0x0006c3a2) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x00075393) area_vitu2_query_pane_g_ParamLimits

0x6b49,	// (0x0006c453) area_vitu2_query_pane_t7_ParamLimits

0x6b49,	// (0x0006c453) area_vitu2_query_pane_t7

0xd438,	// (0x00072d42) bg_button_pane_cp018_ParamLimits

0xd446,	// (0x00072d50) bg_button_pane_cp021_ParamLimits

0x6b6d,	// (0x0006c477) bg_button_pane_cp022_ParamLimits

0x6b6d,	// (0x0006c477) bg_vkb2_func_pane_cp08_ParamLimits

0xd438,	// (0x00072d42) bg_vkb2_func_pane_cp06_ParamLimits

0xd446,	// (0x00072d50) bg_vkb2_func_pane_cp07_ParamLimits

0x6b7e,	// (0x0006c488) input_focus_pane_cp09_ParamLimits

0xd8e1,	// (0x000731eb) cam6_autofocus_pane_ParamLimits

0xd8e1,	// (0x000731eb) cam6_autofocus_pane

0xd903,	// (0x0007320d) cam6_image_uncrop_pane_ParamLimits

0xd903,	// (0x0007320d) cam6_image_uncrop_pane

0xd930,	// (0x0007323a) cam6_indi_pane_ParamLimits

0xd930,	// (0x0007323a) cam6_indi_pane

0xd94a,	// (0x00073254) cam6_mode_pane_ParamLimits

0xd94a,	// (0x00073254) cam6_mode_pane

0xd95e,	// (0x00073268) cam6_timer_pane_ParamLimits

0xd95e,	// (0x00073268) cam6_timer_pane

0xd96a,	// (0x00073274) cam6_zoom_pane_ParamLimits

0xd96a,	// (0x00073274) cam6_zoom_pane

0xc6ab,	// (0x00071fb5) cam6_mode_pane_g1_ParamLimits

0xc6ab,	// (0x00071fb5) cam6_mode_pane_g1

0xc6c3,	// (0x00071fcd) cam6_mode_pane_g2_ParamLimits

0xc6c3,	// (0x00071fcd) cam6_mode_pane_g2

0xc6cf,	// (0x00071fd9) cam6_mode_pane_g3_ParamLimits

0xc6cf,	// (0x00071fd9) cam6_mode_pane_g3

0xc6db,	// (0x00071fe5) cam6_mode_pane_g4_ParamLimits

0xc6db,	// (0x00071fe5) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x0007547b) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x0007547b) cam6_mode_pane_g

0x47d6,	// (0x0006a0e0) bg_tb_trans_pane_cp08_ParamLimits

0x47d6,	// (0x0006a0e0) bg_tb_trans_pane_cp08

0x4afc,	// (0x0006a406) cam6_battery_pane_ParamLimits

0x4afc,	// (0x0006a406) cam6_battery_pane

0x4b12,	// (0x0006a41c) cam6_indi_pane_g1_ParamLimits

0x4b12,	// (0x0006a41c) cam6_indi_pane_g1

0x4b24,	// (0x0006a42e) cam6_indi_pane_g2_ParamLimits

0x4b24,	// (0x0006a42e) cam6_indi_pane_g2

0x4b36,	// (0x0006a440) cam6_indi_pane_g3_ParamLimits

0x4b36,	// (0x0006a440) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x00075484) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x00075484) cam6_indi_pane_g

0x4b48,	// (0x0006a452) cam6_indi_pane_t1_ParamLimits

0x4b48,	// (0x0006a452) cam6_indi_pane_t1

0xc788,	// (0x00072092) cam6_autofocus_pane_g1

0xc790,	// (0x0007209a) cam6_autofocus_pane_g2

0xc798,	// (0x000720a2) cam6_autofocus_pane_g3

0xc7a0,	// (0x000720aa) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x0007548b) cam6_autofocus_pane_g

0x4b6e,	// (0x0006a478) cam6_timer_pane_g1

0x4b76,	// (0x0006a480) cam6_timer_pane_t1

0x4b84,	// (0x0006a48e) cam6_zoom_cont_pane

0x4b8c,	// (0x0006a496) cam6_zoom_pane_g1

0x4b94,	// (0x0006a49e) cam6_zoom_pane_g2

0xd982,	// (0x0007328c) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x00075494) cam6_zoom_pane_g

0x2d85,	// (0x0006868f) cam6_battery_pane_g1

0x2d85,	// (0x0006868f) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x00075005) cam6_battery_pane_g

0x4b9c,	// (0x0006a4a6) cam6_zoom_cont_pane_g1

0x4ba5,	// (0x0006a4af) cam6_zoom_cont_pane_g2

0x4bae,	// (0x0006a4b8) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x0007549b) cam6_zoom_cont_pane_g

0xd99f,	// (0x000732a9) cam6_mode_pane_cp_ParamLimits

0xd99f,	// (0x000732a9) cam6_mode_pane_cp

0xd96a,	// (0x00073274) cam6_zoom_pane_cp_ParamLimits

0xd96a,	// (0x00073274) cam6_zoom_pane_cp

0xd9b3,	// (0x000732bd) vid6_image_uncrop_cif_pane_ParamLimits

0xd9b3,	// (0x000732bd) vid6_image_uncrop_cif_pane

0xd9df,	// (0x000732e9) vid6_image_uncrop_nhd_pane_ParamLimits

0xd9df,	// (0x000732e9) vid6_image_uncrop_nhd_pane

0xd903,	// (0x0007320d) vid6_image_uncrop_vga_pane_ParamLimits

0xd903,	// (0x0007320d) vid6_image_uncrop_vga_pane

0xd9fc,	// (0x00073306) vid6_image_uncrop_wvga_pane_ParamLimits

0xd9fc,	// (0x00073306) vid6_image_uncrop_wvga_pane

0xda19,	// (0x00073323) vid6_indi_pane_ParamLimits

0xda19,	// (0x00073323) vid6_indi_pane

0x47d6,	// (0x0006a0e0) bg_tb_trans_pane_cp09_ParamLimits

0x47d6,	// (0x0006a0e0) bg_tb_trans_pane_cp09

0x4bc6,	// (0x0006a4d0) cam6_battery_pane_cp_ParamLimits

0x4bc6,	// (0x0006a4d0) cam6_battery_pane_cp

0x4bd2,	// (0x0006a4dc) vid6_indi_pane_g1_ParamLimits

0x4bd2,	// (0x0006a4dc) vid6_indi_pane_g1

0x4be4,	// (0x0006a4ee) vid6_indi_pane_g2_ParamLimits

0x4be4,	// (0x0006a4ee) vid6_indi_pane_g2

0x4bf6,	// (0x0006a500) vid6_indi_pane_g3_ParamLimits

0x4bf6,	// (0x0006a500) vid6_indi_pane_g3

0x4c0b,	// (0x0006a515) vid6_indi_pane_g4_ParamLimits

0x4c0b,	// (0x0006a515) vid6_indi_pane_g4

0x4c20,	// (0x0006a52a) vid6_indi_pane_g5_ParamLimits

0x4c20,	// (0x0006a52a) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x000754a2) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x000754a2) vid6_indi_pane_g

0x4c3a,	// (0x0006a544) vid6_indi_pane_t1_ParamLimits

0x4c3a,	// (0x0006a544) vid6_indi_pane_t1

0x4c50,	// (0x0006a55a) vid6_indi_pane_t2_ParamLimits

0x4c50,	// (0x0006a55a) vid6_indi_pane_t2

0x4c78,	// (0x0006a582) vid6_indi_pane_t3_ParamLimits

0x4c78,	// (0x0006a582) vid6_indi_pane_t3

0x4ca0,	// (0x0006a5aa) vid6_indi_pane_t4_ParamLimits

0x4ca0,	// (0x0006a5aa) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x000754ad) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x000754ad) vid6_indi_pane_t

0x4cc4,	// (0x0006a5ce) wait_bar_pane_cp08

0xda3c,	// (0x00073346) main_cset_text2_pane_t1_ParamLimits

0xda3c,	// (0x00073346) main_cset_text2_pane_t1

0xd98a,	// (0x00073294) listscroll_gen_pane_cp06_t1_ParamLimits

0xd98a,	// (0x00073294) listscroll_gen_pane_cp06_t1

0x75ee,	// (0x0006cef8) main_cam6_set_pane

0x2fec,	// (0x000688f6) bg_tb_trans_pane_cp06_ParamLimits

0xc652,	// (0x00071f5c) cam4_indicators_pane_g1_ParamLimits

0xc663,	// (0x00071f6d) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0007521b) cam4_indicators_pane_g_ParamLimits

0xc681,	// (0x00071f8b) cam4_indicators_pane_t1_ParamLimits

0xa69f,	// (0x0006ffa9) bg_tb_trans_pane_cp07_ParamLimits

0xc652,	// (0x00071f5c) vid4_indicators_pane_g1_ParamLimits

0xc731,	// (0x0007203b) vid4_indicators_pane_g2_ParamLimits

0xc742,	// (0x0007204c) vid4_indicators_pane_g3_ParamLimits

0xc753,	// (0x0007205d) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0007522d) vid4_indicators_pane_g_ParamLimits

0xc76f,	// (0x00072079) vid4_indicators_pane_t1_ParamLimits

0xd57f,	// (0x00072e89) vid4_progress_pane_g1_ParamLimits

0xd58f,	// (0x00072e99) vid4_progress_pane_g2_ParamLimits

0xd59f,	// (0x00072ea9) vid4_progress_pane_g3_ParamLimits

0xc663,	// (0x00071f6d) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x000753de) vid4_progress_pane_g_ParamLimits

0xd5ab,	// (0x00072eb5) vid4_progress_pane_t1_ParamLimits

0xd5c0,	// (0x00072eca) vid4_progress_pane_t2_ParamLimits

0xd5d6,	// (0x00072ee0) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x000753e9) vid4_progress_pane_t_ParamLimits

0xd5eb,	// (0x00072ef5) wait_bar_pane_cp07_ParamLimits

0xda7a,	// (0x00073384) main_cam6_set_pane_g2_ParamLimits

0xda7a,	// (0x00073384) main_cam6_set_pane_g2

0xda86,	// (0x00073390) main_cset6_listscroll_pane_ParamLimits

0xda86,	// (0x00073390) main_cset6_listscroll_pane

0xdab1,	// (0x000733bb) main_cset6_slider_pane_ParamLimits

0xdab1,	// (0x000733bb) main_cset6_slider_pane

0xdabd,	// (0x000733c7) main_cset6_text2_pane_ParamLimits

0xdabd,	// (0x000733c7) main_cset6_text2_pane

0x4cd3,	// (0x0006a5dd) main_cset6_text_pane

0x4cdb,	// (0x0006a5e5) main_cset_list_pane_copy1_ParamLimits

0x4cdb,	// (0x0006a5e5) main_cset_list_pane_copy1

0x4ceb,	// (0x0006a5f5) scroll_pane_cp028_copy1

0xdad0,	// (0x000733da) cset_list_set_pane_copy1

0xdaea,	// (0x000733f4) aid_position_infowindow_above_copy1

0xdaf2,	// (0x000733fc) aid_position_infowindow_below_copy1

0xdafa,	// (0x00073404) cset_list_set_pane_g1_copy1

0x691d,	// (0x0006c227) cset_list_set_pane_g3_copy1_ParamLimits

0x691d,	// (0x0006c227) cset_list_set_pane_g3_copy1

0x692c,	// (0x0006c236) cset_list_set_pane_t1_copy1_ParamLimits

0x692c,	// (0x0006c236) cset_list_set_pane_t1_copy1

0xa69f,	// (0x0006ffa9) list_highlight_pane_cp021_copy1_ParamLimits

0xa69f,	// (0x0006ffa9) list_highlight_pane_cp021_copy1

0x4cf4,	// (0x0006a5fe) cset6_slider_pane_ParamLimits

0x4cf4,	// (0x0006a5fe) cset6_slider_pane

0x4d20,	// (0x0006a62a) main_cset6_slider_pane_g1_ParamLimits

0x4d20,	// (0x0006a62a) main_cset6_slider_pane_g1

0xdb02,	// (0x0007340c) main_cset6_slider_pane_g2_ParamLimits

0xdb02,	// (0x0007340c) main_cset6_slider_pane_g2

0x45ee,	// (0x00069ef8) main_cset6_slider_pane_g3_ParamLimits

0x45ee,	// (0x00069ef8) main_cset6_slider_pane_g3

0xdb2a,	// (0x00073434) main_cset6_slider_pane_g4_ParamLimits

0xdb2a,	// (0x00073434) main_cset6_slider_pane_g4

0xdb36,	// (0x00073440) main_cset6_slider_pane_g5_ParamLimits

0xdb36,	// (0x00073440) main_cset6_slider_pane_g5

0x45ee,	// (0x00069ef8) main_cset6_slider_pane_g7_ParamLimits

0x45ee,	// (0x00069ef8) main_cset6_slider_pane_g7

0x45fa,	// (0x00069f04) main_cset6_slider_pane_g8_ParamLimits

0x45fa,	// (0x00069f04) main_cset6_slider_pane_g8

0xdb44,	// (0x0007344e) main_cset6_slider_pane_g9_ParamLimits

0xdb44,	// (0x0007344e) main_cset6_slider_pane_g9

0xdb50,	// (0x0007345a) main_cset6_slider_pane_g10_ParamLimits

0xdb50,	// (0x0007345a) main_cset6_slider_pane_g10

0xdb2a,	// (0x00073434) main_cset6_slider_pane_g11_ParamLimits

0xdb2a,	// (0x00073434) main_cset6_slider_pane_g11

0xdb5c,	// (0x00073466) main_cset6_slider_pane_g12_ParamLimits

0xdb5c,	// (0x00073466) main_cset6_slider_pane_g12

0xdb68,	// (0x00073472) main_cset6_slider_pane_g13_ParamLimits

0xdb68,	// (0x00073472) main_cset6_slider_pane_g13

0xdb76,	// (0x00073480) main_cset6_slider_pane_g14_ParamLimits

0xdb76,	// (0x00073480) main_cset6_slider_pane_g14

0xdb84,	// (0x0007348e) main_cset6_slider_pane_g15_ParamLimits

0xdb84,	// (0x0007348e) main_cset6_slider_pane_g15

0xdb36,	// (0x00073440) main_cset6_slider_pane_g16_ParamLimits

0xdb36,	// (0x00073440) main_cset6_slider_pane_g16

0xdb9c,	// (0x000734a6) main_cset6_slider_pane_g17_ParamLimits

0xdb9c,	// (0x000734a6) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x000754b6) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x000754b6) main_cset6_slider_pane_g

0x4d48,	// (0x0006a652) main_cset6_slider_pane_t1_ParamLimits

0x4d48,	// (0x0006a652) main_cset6_slider_pane_t1

0xdbaa,	// (0x000734b4) main_cset6_slider_pane_t2_ParamLimits

0xdbaa,	// (0x000734b4) main_cset6_slider_pane_t2

0xdbd5,	// (0x000734df) main_cset6_slider_pane_t3_ParamLimits

0xdbd5,	// (0x000734df) main_cset6_slider_pane_t3

0xdc00,	// (0x0007350a) main_cset6_slider_pane_t4_ParamLimits

0xdc00,	// (0x0007350a) main_cset6_slider_pane_t4

0xdc2d,	// (0x00073537) main_cset6_slider_pane_t5_ParamLimits

0xdc2d,	// (0x00073537) main_cset6_slider_pane_t5

0x4d89,	// (0x0006a693) main_cset6_slider_pane_t7_ParamLimits

0x4d89,	// (0x0006a693) main_cset6_slider_pane_t7

0xdc5a,	// (0x00073564) main_cset6_slider_pane_t8_ParamLimits

0xdc5a,	// (0x00073564) main_cset6_slider_pane_t8

0xdc7e,	// (0x00073588) main_cset6_slider_pane_t9_ParamLimits

0xdc7e,	// (0x00073588) main_cset6_slider_pane_t9

0xdca2,	// (0x000735ac) main_cset6_slider_pane_t10_ParamLimits

0xdca2,	// (0x000735ac) main_cset6_slider_pane_t10

0xdcc6,	// (0x000735d0) main_cset6_slider_pane_t11_ParamLimits

0xdcc6,	// (0x000735d0) main_cset6_slider_pane_t11

0x4dbf,	// (0x0006a6c9) main_cset6_slider_pane_t14_ParamLimits

0x4dbf,	// (0x0006a6c9) main_cset6_slider_pane_t14

0x4df8,	// (0x0006a702) main_cset6_slider_pane_t15_ParamLimits

0x4df8,	// (0x0006a702) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x000754db) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x000754db) main_cset6_slider_pane_t

0x4e31,	// (0x0006a73b) cset_slider_pane_g1_copy1

0x4e3a,	// (0x0006a744) cset_slider_pane_g2_copy1

0x4e43,	// (0x0006a74d) cset_slider_pane_g3_copy1

0x75ee,	// (0x0006cef8) bg_popup_sub_pane_cp011_copy1

0x472c,	// (0x0006a036) main_cset_text_pane_g1_copy1

0x4734,	// (0x0006a03e) main_cset_text_pane_t1_copy1

0x4742,	// (0x0006a04c) main_cset_text_pane_t2_copy1

0x4750,	// (0x0006a05a) main_cset_text_pane_t3_copy1

0x475e,	// (0x0006a068) main_cset_text_pane_t4_copy1

0x476c,	// (0x0006a076) main_cset_text_pane_t5_copy1

0x477a,	// (0x0006a084) main_cset_text_pane_t6_copy1

0x4788,	// (0x0006a092) main_cset_text_pane_t7_copy1

0xdcec,	// (0x000735f6) main_cset_text2_pane_t1_copy1

0x75ee,	// (0x0006cef8) main_ncimui_pane

0xa6ec,	// (0x0006fff6) popup_query_ncimui_window_ParamLimits

0xa6ec,	// (0x0006fff6) popup_query_ncimui_window

0xb253,	// (0x00070b5d) field_cale_ev2_pane_g4_ParamLimits

0xb253,	// (0x00070b5d) field_cale_ev2_pane_g4

0xbfe7,	// (0x000718f1) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbfe7,	// (0x000718f1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x000751b9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x000751b9) cell_video_dialer_keypad_pane_g

0xbfff,	// (0x00071909) cell_video_dialer_keypad_pane_t1

0x75ee,	// (0x0006cef8) bg_popup_window_pane_cp012

0x1197,	// (0x00066aa1) heading_pane_cp06

0x4e76,	// (0x0006a780) ncim_query_content_pane

0x75ee,	// (0x0006cef8) bg_popup_heading_pane_cp01

0x4e7e,	// (0x0006a788) ncim_heading_pane_t1

0x4e8c,	// (0x0006a796) ncim_indicator_popup_pane

0x4e9e,	// (0x0006a7a8) ncim_query_button_pane

0x4eb2,	// (0x0006a7bc) ncim_query_content_pane_t1

0x4ec4,	// (0x0006a7ce) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x0007551a) ncim_query_content_pane_t

0x4efe,	// (0x0006a808) ncim_query_list_pane

0x4f10,	// (0x0006a81a) ncim_query_popup_pane

0x4e8c,	// (0x0006a796) ncim_indicator_popup_pane_ParamLimits

0xde19,	// (0x00073723) ncim_query_content_pane_g1_ParamLimits

0xde19,	// (0x00073723) ncim_query_content_pane_g1

0x4eb2,	// (0x0006a7bc) ncim_query_content_pane_t1_ParamLimits

0x4ec4,	// (0x0006a7ce) ncim_query_content_pane_t2_ParamLimits

0xde25,	// (0x0007372f) ncim_query_content_pane_t3_ParamLimits

0xde25,	// (0x0007372f) ncim_query_content_pane_t3

0xde42,	// (0x0007374c) ncim_query_content_pane_t4_ParamLimits

0xde42,	// (0x0007374c) ncim_query_content_pane_t4

0xde5f,	// (0x00073769) ncim_query_content_pane_t5_ParamLimits

0xde5f,	// (0x00073769) ncim_query_content_pane_t5

0x4ed6,	// (0x0006a7e0) ncim_query_content_pane_t6_ParamLimits

0x4ed6,	// (0x0006a7e0) ncim_query_content_pane_t6

0xfc10,	// (0x0007551a) ncim_query_content_pane_t_ParamLimits

0x4efe,	// (0x0006a808) ncim_query_list_pane_ParamLimits

0x4f10,	// (0x0006a81a) ncim_query_popup_pane_ParamLimits

0x4f24,	// (0x0006a82e) wait_bar_pane_cp04

0x75ee,	// (0x0006cef8) input_focus_pane_cp011

0x4f2c,	// (0x0006a836) ncim_query_popup_pane_t1

0x4f3a,	// (0x0006a844) ncim_list_query_list_pane_ParamLimits

0x4f3a,	// (0x0006a844) ncim_list_query_list_pane

0x75ee,	// (0x0006cef8) bg_button_pane_cp027

0x4f4d,	// (0x0006a857) ncim_query_button_pane_g1

0x75ee,	// (0x0006cef8) list_highlight_pane_cp012

0x4f57,	// (0x0006a861) ncim_list_query_list_pane_g1

0x4f5f,	// (0x0006a869) ncim_list_query_list_pane_t1

0xc672,	// (0x00071f7c) cam4_indicators_pane_g3_ParamLimits

0xc672,	// (0x00071f7c) cam4_indicators_pane_g3

0xc75f,	// (0x00072069) vid4_indicators_pane_g5_ParamLimits

0xc75f,	// (0x00072069) vid4_indicators_pane_g5

0xc672,	// (0x00071f7c) vid4_progress_pane_g5_ParamLimits

0xc672,	// (0x00071f7c) vid4_progress_pane_g5

0xdd32,	// (0x0007363c) main_ncimui_pane_g1

0xdd88,	// (0x00073692) ncimui_group_query_pane_ParamLimits

0xdd88,	// (0x00073692) ncimui_group_query_pane

0xddc4,	// (0x000736ce) ncimui_list_pane_ParamLimits

0xddc4,	// (0x000736ce) ncimui_list_pane

0xdde5,	// (0x000736ef) ncimui_text_pane_ParamLimits

0xdde5,	// (0x000736ef) ncimui_text_pane

0xde7c,	// (0x00073786) ncimui_text_pane_t1_ParamLimits

0xde7c,	// (0x00073786) ncimui_text_pane_t1

0x4f6d,	// (0x0006a877) ncimui_list_single_graphic_pane_ParamLimits

0x4f6d,	// (0x0006a877) ncimui_list_single_graphic_pane

0xde9b,	// (0x000737a5) ncimui_query_pane_ParamLimits

0xde9b,	// (0x000737a5) ncimui_query_pane

0x75ee,	// (0x0006cef8) list_highlight_pane_cp013

0x4f7d,	// (0x0006a887) ncim_list_query_list_pane_t1_copy1

0x4f57,	// (0x0006a861) ncim_list_single_graphic_pane_g1

0x4f8b,	// (0x0006a895) ncim_query_button_pane_cp01

0x4f97,	// (0x0006a8a1) ncim_query_entry_pane_ParamLimits

0x4f97,	// (0x0006a8a1) ncim_query_entry_pane

0x4faa,	// (0x0006a8b4) ncimui_query_pane_g1

0x4fb6,	// (0x0006a8c0) ncimui_query_pane_t1_ParamLimits

0x4fb6,	// (0x0006a8c0) ncimui_query_pane_t1

0xa69f,	// (0x0006ffa9) input_focus_pane_cp012

0x4fcf,	// (0x0006a8d9) ncim_query_entry_pane_t1

0x07ff,	// (0x00066109) main_im_pane_ParamLimits

0xa69f,	// (0x0006ffa9) main_mobtv_pane_ParamLimits

0xa69f,	// (0x0006ffa9) main_mobtv_pane

0xdb44,	// (0x0007344e) main_cset6_slider_pane_g18_ParamLimits

0xdb44,	// (0x0007344e) main_cset6_slider_pane_g18

0xdb68,	// (0x00073472) main_cset6_slider_pane_g19_ParamLimits

0xdb68,	// (0x00073472) main_cset6_slider_pane_g19

0x37c2,	// (0x000690cc) bg_main_mobtv_pane_ParamLimits

0x37c2,	// (0x000690cc) bg_main_mobtv_pane

0xdeae,	// (0x000737b8) main_mobtv_info_pane

0xdeb9,	// (0x000737c3) main_mobtv_loading_pane_ParamLimits

0xdeb9,	// (0x000737c3) main_mobtv_loading_pane

0x4fe1,	// (0x0006a8eb) main_mobtv_pg_channel_list_pane

0x4feb,	// (0x0006a8f5) main_mobtv_pg_hdr_pane

0xdec6,	// (0x000737d0) main_mobtv_programe_curr_pane_ParamLimits

0xdec6,	// (0x000737d0) main_mobtv_programe_curr_pane

0xded3,	// (0x000737dd) main_mobtv_programe_next_pane_ParamLimits

0xded3,	// (0x000737dd) main_mobtv_programe_next_pane

0x4ff4,	// (0x0006a8fe) popup_mobtv_noti_window

0x2d85,	// (0x0006868f) main_tv_pg_hdr_pane_g1

0x4ffc,	// (0x0006a906) main_tv_pg_hdr_pane_g2

0x5004,	// (0x0006a90e) main_tv_pg_hdr_pane_g3

0x500c,	// (0x0006a916) main_tv_pg_hdr_pane_g4

0x5014,	// (0x0006a91e) main_tv_pg_hdr_pane_g5

0x501e,	// (0x0006a928) main_tv_pg_hdr_pane_g6

0x5028,	// (0x0006a932) main_tv_pg_hdr_pane_g7

0x5032,	// (0x0006a93c) main_tv_pg_hdr_pane_g8

0x503c,	// (0x0006a946) main_tv_pg_hdr_pane_g9

0x5046,	// (0x0006a950) main_tv_pg_hdr_pane_g10

0x5050,	// (0x0006a95a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00075527) main_tv_pg_hdr_pane_g

0x505a,	// (0x0006a964) main_tv_pg_hdr_pane_t1

0x5068,	// (0x0006a972) main_tv_pg_hdr_pane_t2

0x5076,	// (0x0006a980) main_tv_pg_hdr_pane_t3

0x5086,	// (0x0006a990) main_tv_pg_hdr_pane_t4

0x5096,	// (0x0006a9a0) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x0007553e) main_tv_pg_hdr_pane_t

0x50a6,	// (0x0006a9b0) single_mobtv_pg_channel_pane_ParamLimits

0x50a6,	// (0x0006a9b0) single_mobtv_pg_channel_pane

0x50b8,	// (0x0006a9c2) single_mobtv_pg_channel_table_pane

0x50c1,	// (0x0006a9cb) single_mobtv_pg_channel_thumb_pane

0x50ca,	// (0x0006a9d4) single_tv_pg_channel_pane_g1

0x50d3,	// (0x0006a9dd) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x00075549) single_tv_pg_channel_pane_g

0x2fec,	// (0x000688f6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2fec,	// (0x000688f6) bg_single_mobtv_pg_channel_thumb_pane

0x50dc,	// (0x0006a9e6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x50dc,	// (0x0006a9e6) single_mobtv_pg_channel_thumb_pane_g1

0x50ea,	// (0x0006a9f4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x50ea,	// (0x0006a9f4) single_mobtv_pg_channel_thumb_pane_g2

0x50f6,	// (0x0006aa00) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x50f6,	// (0x0006aa00) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x0007554e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x0007554e) single_mobtv_pg_channel_thumb_pane_g

0x5102,	// (0x0006aa0c) single_mobtv_pg_channel_thumb_pane_t1

0x5110,	// (0x0006aa1a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x00075555) single_mobtv_pg_channel_thumb_pane_t

0x2d85,	// (0x0006868f) bg_single_mobtv_pg_channel_table_pane_g1

0x2d85,	// (0x0006868f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x00075005) bg_single_mobtv_pg_channel_table_pane_g

0x511e,	// (0x0006aa28) single_mobtv_pg_channel_table_pane_t1

0x512c,	// (0x0006aa36) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x0007555a) single_mobtv_pg_channel_table_pane_t

0xdee8,	// (0x000737f2) main_mobtv_info_pane_g1_ParamLimits

0xdee8,	// (0x000737f2) main_mobtv_info_pane_g1

0xdf04,	// (0x0007380e) main_mobtv_info_pane_t1_ParamLimits

0xdf04,	// (0x0007380e) main_mobtv_info_pane_t1

0xdf7c,	// (0x00073886) main_mobtv_info_pane_t2_ParamLimits

0xdf7c,	// (0x00073886) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x00075564) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x00075564) main_mobtv_info_pane_t

0xe00b,	// (0x00073915) wait_bar_pane_cp05

0xe01d,	// (0x00073927) main_mobtv_loading_pane_g1_ParamLimits

0xe01d,	// (0x00073927) main_mobtv_loading_pane_g1

0xe02b,	// (0x00073935) main_mobtv_loading_pane_g2_ParamLimits

0xe02b,	// (0x00073935) main_mobtv_loading_pane_g2

0xe037,	// (0x00073941) main_mobtv_loading_pane_g3_ParamLimits

0xe037,	// (0x00073941) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x0007556b) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x0007556b) main_mobtv_loading_pane_g

0x513a,	// (0x0006aa44) main_mobtv_loading_pane_t1_ParamLimits

0x513a,	// (0x0006aa44) main_mobtv_loading_pane_t1

0x5152,	// (0x0006aa5c) main_mobtv_loading_pane_t2_ParamLimits

0x5152,	// (0x0006aa5c) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x00075572) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x00075572) main_mobtv_loading_pane_t

0xe045,	// (0x0007394f) wait_bar_pane_cp06_ParamLimits

0xe045,	// (0x0007394f) wait_bar_pane_cp06

0x5176,	// (0x0006aa80) main_mobtv_programe_curr_pane_t1

0x5184,	// (0x0006aa8e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x00075577) main_mobtv_programe_curr_pane_t

0x5192,	// (0x0006aa9c) main_mobtv_programe_next_pane_t1

0x51a0,	// (0x0006aaaa) main_mobtv_programe_next_pane_t2

0x51ae,	// (0x0006aab8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x0007557c) main_mobtv_programe_next_pane_t

0x75ee,	// (0x0006cef8) bg_popup_mobtv_noti_window_pane

0x51bc,	// (0x0006aac6) popup_mobtv_noti_window_g1

0x51c4,	// (0x0006aace) popup_mobtv_noti_window_t1

0x51d2,	// (0x0006aadc) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x00075583) popup_mobtv_noti_window_t

0x2d85,	// (0x0006868f) bg_popup_mobtv_noti_window_pane_g1

0x75ee,	// (0x0006cef8) sc_clock_pane

0x75ee,	// (0x0006cef8) main_fs_bigclock_pane

0xd794,	// (0x0007309e) blid2_tripm_pane_t4_ParamLimits

0xd794,	// (0x0007309e) blid2_tripm_pane_t4

0xe051,	// (0x0007395b) sc_clock_pane_g1_ParamLimits

0xe051,	// (0x0007395b) sc_clock_pane_g1

0xe05f,	// (0x00073969) sc_clock_pane_t1_ParamLimits

0xe05f,	// (0x00073969) sc_clock_pane_t1

0xe072,	// (0x0007397c) sc_clock_pane_t2_ParamLimits

0xe072,	// (0x0007397c) sc_clock_pane_t2

0xe084,	// (0x0007398e) sc_clock_pane_t3_ParamLimits

0xe084,	// (0x0007398e) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x00075588) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x00075588) sc_clock_pane_t

0xe8f7,	// (0x00074201) main_fs_bigclock_indicator_pane_ParamLimits

0xe8f7,	// (0x00074201) main_fs_bigclock_indicator_pane

0xe110,	// (0x00073a1a) main_fs_bigclock_pane_g1_ParamLimits

0xe110,	// (0x00073a1a) main_fs_bigclock_pane_g1

0xe903,	// (0x0007420d) main_fs_bigclock_pane_t1_ParamLimits

0xe903,	// (0x0007420d) main_fs_bigclock_pane_t1

0xe915,	// (0x0007421f) main_fs_bigclock_pane_t2_ParamLimits

0xe915,	// (0x0007421f) main_fs_bigclock_pane_t2

0xe927,	// (0x00074231) main_fs_bigclock_pane_t3_ParamLimits

0xe927,	// (0x00074231) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0007578c) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0007578c) main_fs_bigclock_pane_t

0x3c2f,	// (0x00069539) main_fs_bigclock_indicator_pane_g1

0x4ea6,	// (0x0006a7b0) ncim_query_content_pane_g2_ParamLimits

0x4ea6,	// (0x0006a7b0) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x00075515) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x00075515) ncim_query_content_pane_g

0xe098,	// (0x000739a2) sc_clock_pane_t4_ParamLimits

0xe098,	// (0x000739a2) sc_clock_pane_t4

0xa69f,	// (0x0006ffa9) main_radioblah_pane

0x3721,	// (0x0006902b) cell_call4_button_pane_t1_copy1_ParamLimits

0x3721,	// (0x0006902b) cell_call4_button_pane_t1_copy1

0xdd3a,	// (0x00073644) main_ncimui_pane_t1_ParamLimits

0xdd3a,	// (0x00073644) main_ncimui_pane_t1

0xdd54,	// (0x0007365e) main_ncimui_pane_t2_ParamLimits

0xdd54,	// (0x0007365e) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x0007550e) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x0007550e) main_ncimui_pane_t

0x531b,	// (0x0006ac25) main_radioblah_anim_pane_ParamLimits

0x531b,	// (0x0006ac25) main_radioblah_anim_pane

0x532c,	// (0x0006ac36) main_radioblah_info_pane_ParamLimits

0x532c,	// (0x0006ac36) main_radioblah_info_pane

0x5340,	// (0x0006ac4a) main_radioblah_pane_t1_ParamLimits

0x5340,	// (0x0006ac4a) main_radioblah_pane_t1

0x535c,	// (0x0006ac66) main_radioblah_pane_t2_ParamLimits

0x535c,	// (0x0006ac66) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x000755a9) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x000755a9) main_radioblah_pane_t

0xe162,	// (0x00073a6c) main_radioblah_rocker_ctrl_pane_ParamLimits

0xe162,	// (0x00073a6c) main_radioblah_rocker_ctrl_pane

0x53a4,	// (0x0006acae) main_radioblah_info_pane_t1_ParamLimits

0x53a4,	// (0x0006acae) main_radioblah_info_pane_t1

0xe1a7,	// (0x00073ab1) main_radioblah_info_pane_t2_ParamLimits

0xe1a7,	// (0x00073ab1) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x000755b2) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x000755b2) main_radioblah_info_pane_t

0x2d85,	// (0x0006868f) main_radioblah_rocker_ctrl_pane_g1

0xe257,	// (0x00073b61) main_radioblah_rocker_ctrl_pane_g2

0xe25f,	// (0x00073b69) main_radioblah_rocker_ctrl_pane_g3

0xe267,	// (0x00073b71) main_radioblah_rocker_ctrl_pane_g4

0xe26f,	// (0x00073b79) main_radioblah_rocker_ctrl_pane_g5

0xe277,	// (0x00073b81) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x000755bb) main_radioblah_rocker_ctrl_pane_g

0xdcec,	// (0x000735f6) main_cset_text2_pane_t1_copy1_ParamLimits

0xc5a0,	// (0x00071eaa) cam4_image_uncrop_qvga_pane

0xc6e7,	// (0x00071ff1) vid4_image_uncrop_qcif_pane

0xd922,	// (0x0007322c) cam6_image_uncrop_qvga_pane_ParamLimits

0xd922,	// (0x0007322c) cam6_image_uncrop_qvga_pane

0x4bb6,	// (0x0006a4c0) vid6_image_uncrop_qcif_pane_ParamLimits

0x4bb6,	// (0x0006a4c0) vid6_image_uncrop_qcif_pane

0x75ee,	// (0x0006cef8) bg_popup_preview_window_pane_cp03

0x4e4c,	// (0x0006a756) list_cset_text2_pane

0x4e54,	// (0x0006a75e) main_cset6_text2_pane_g1

0x4e68,	// (0x0006a772) main_cset6_text2_pane_t1

0xe27f,	// (0x00073b89) list_cset_text2_pane_t1_ParamLimits

0xe27f,	// (0x00073b89) list_cset_text2_pane_t1

0xa69f,	// (0x0006ffa9) main_radioblah_pane_ParamLimits

0xdff7,	// (0x00073901) main_mobtv_info_pane_t3_ParamLimits

0xdff7,	// (0x00073901) main_mobtv_info_pane_t3

0xe150,	// (0x00073a5a) main_radioblah_pane_g1

0xe17b,	// (0x00073a85) main_radioblah_info_pane_g1

0xe1fc,	// (0x00073b06) main_radioblah_info_pane_t3_ParamLimits

0xe1fc,	// (0x00073b06) main_radioblah_info_pane_t3

0x93ba,	// (0x0006ecc4) highlight_cell_cale_month_pane_ParamLimits

0x93ba,	// (0x0006ecc4) highlight_cell_cale_month_pane

0x75ee,	// (0x0006cef8) main_phob_fisheye_pane

0x30d4,	// (0x000689de) scroll_pane_cp0031_ParamLimits

0x30d4,	// (0x000689de) scroll_pane_cp0031

0x4cc4,	// (0x0006a5ce) wait_bar_pane_cp08_ParamLimits

0xdad0,	// (0x000733da) cset_list_set_pane_copy1_ParamLimits

0x53de,	// (0x0006ace8) highlight_cell_cale_month_pane_g1

0xe2aa,	// (0x00073bb4) highlight_cell_cale_month_pane_t1

0x495e,	// (0x0006a268) list_gen_pane_cp01

0x45d9,	// (0x00069ee3) scroll_pane_01

0xf0c9,	// (0x000749d3) list_single_double_fisheye_pane

0x6ca0,	// (0x0006c5aa) list_double_fisheye_pane_g1_ParamLimits

0x6ca0,	// (0x0006c5aa) list_double_fisheye_pane_g1

0xe2b8,	// (0x00073bc2) list_double_fisheye_pane_g2_ParamLimits

0xe2b8,	// (0x00073bc2) list_double_fisheye_pane_g2

0xf0d2,	// (0x000749dc) list_double_fisheye_pane_g3_ParamLimits

0xf0d2,	// (0x000749dc) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x000755c8) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x000755c8) list_double_fisheye_pane_g

0x6cb8,	// (0x0006c5c2) list_double_fisheye_pane_t1_ParamLimits

0x6cb8,	// (0x0006c5c2) list_double_fisheye_pane_t1

0x6cd3,	// (0x0006c5dd) list_double_fisheye_pane_t2_ParamLimits

0x6cd3,	// (0x0006c5dd) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x000755d3) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x000755d3) list_double_fisheye_pane_t

0x75ee,	// (0x0006cef8) main_call5_pane

0xe0be,	// (0x000739c8) sc_swipe_pane_ParamLimits

0xe0be,	// (0x000739c8) sc_swipe_pane

0xe2e9,	// (0x00073bf3) call5_image_pane_ParamLimits

0xe2e9,	// (0x00073bf3) call5_image_pane

0xe2f9,	// (0x00073c03) call5_swipe_1_pane_ParamLimits

0xe2f9,	// (0x00073c03) call5_swipe_1_pane

0xe305,	// (0x00073c0f) call5_swipe_2_pane_ParamLimits

0xe305,	// (0x00073c0f) call5_swipe_2_pane

0xe31f,	// (0x00073c29) popup_call5_audio_first_window_ParamLimits

0xe31f,	// (0x00073c29) popup_call5_audio_first_window

0x2fec,	// (0x000688f6) call5_swipe_1_pane_g1_ParamLimits

0x2fec,	// (0x000688f6) call5_swipe_1_pane_g1

0x53e6,	// (0x0006acf0) call5_swipe_1_pane_g2_ParamLimits

0x53e6,	// (0x0006acf0) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x000755d8) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x000755d8) call5_swipe_1_pane_g

0x53f2,	// (0x0006acfc) call5_swipe_1_pane_t1_ParamLimits

0x53f2,	// (0x0006acfc) call5_swipe_1_pane_t1

0x2fec,	// (0x000688f6) call5_swipe_2_pane_g1_ParamLimits

0x2fec,	// (0x000688f6) call5_swipe_2_pane_g1

0x5407,	// (0x0006ad11) call5_swipe_2_pane_g2_ParamLimits

0x5407,	// (0x0006ad11) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x000755dd) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x000755dd) call5_swipe_2_pane_g

0x5413,	// (0x0006ad1d) call5_swipe_2_pane_t1_ParamLimits

0x5413,	// (0x0006ad1d) call5_swipe_2_pane_t1

0x5428,	// (0x0006ad32) sc_swipe_pane_g1_ParamLimits

0x5428,	// (0x0006ad32) sc_swipe_pane_g1

0x5435,	// (0x0006ad3f) sc_swipe_pane_g2_ParamLimits

0x5435,	// (0x0006ad3f) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x000755e2) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x000755e2) sc_swipe_pane_g

0x5441,	// (0x0006ad4b) sc_swipe_pane_t1_ParamLimits

0x5441,	// (0x0006ad4b) sc_swipe_pane_t1

0x75ee,	// (0x0006cef8) main_cmail_launcher_pane

0xe32d,	// (0x00073c37) aid_size_cell_cmail_l_ParamLimits

0xe32d,	// (0x00073c37) aid_size_cell_cmail_l

0xe33d,	// (0x00073c47) grid_cmail_l_pane_ParamLimits

0xe33d,	// (0x00073c47) grid_cmail_l_pane

0xe34d,	// (0x00073c57) cell_cmail_l_pane_ParamLimits

0xe34d,	// (0x00073c57) cell_cmail_l_pane

0xe361,	// (0x00073c6b) cell_cmail_l_pane_g1_ParamLimits

0xe361,	// (0x00073c6b) cell_cmail_l_pane_g1

0xe36d,	// (0x00073c77) cell_cmail_l_pane_t1_ParamLimits

0xe36d,	// (0x00073c77) cell_cmail_l_pane_t1

0x5456,	// (0x0006ad60) cell_cmail_l_pane_t2_ParamLimits

0x5456,	// (0x0006ad60) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x000755e7) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x000755e7) cell_cmail_l_pane_t

0xa69f,	// (0x0006ffa9) grid_highlight_pane_cp018_ParamLimits

0xa69f,	// (0x0006ffa9) grid_highlight_pane_cp018

0x7719,	// (0x0006d023) main2_pane_ParamLimits

0x7719,	// (0x0006d023) main2_pane

0x08d8,	// (0x000661e2) popup_sp_fs_action_menu_bg_pane_g1

0x08e0,	// (0x000661ea) popup_sp_fs_action_menu_bg_pane_g2

0x08e8,	// (0x000661f2) popup_sp_fs_action_menu_bg_pane_g3

0x08f0,	// (0x000661fa) popup_sp_fs_action_menu_bg_pane_g4

0x08f8,	// (0x00066202) popup_sp_fs_action_menu_bg_pane_g5

0x0900,	// (0x0006620a) popup_sp_fs_action_menu_bg_pane_g6

0x0908,	// (0x00066212) popup_sp_fs_action_menu_bg_pane_g7

0x0910,	// (0x0006621a) popup_sp_fs_action_menu_bg_pane_g8

0x0918,	// (0x00066222) popup_sp_fs_action_menu_bg_pane_g9

0x0920,	// (0x0006622a) popup_sp_fs_action_menu_bg_pane_g10

0x0920,	// (0x0006622a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x00074ab1) popup_sp_fs_action_menu_bg_pane_g

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t3_g3_g1

0x64f9,	// (0x0006be03) list_medium_line_x2_t3_g3_g2_ParamLimits

0x64f9,	// (0x0006be03) list_medium_line_x2_t3_g3_g2

0x6505,	// (0x0006be0f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x6505,	// (0x0006be0f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x00074b61) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x00074b61) list_medium_line_x2_t3_g3_g

0x6511,	// (0x0006be1b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x6511,	// (0x0006be1b) list_medium_line_x2_t3_g3_t1

0x6526,	// (0x0006be30) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6526,	// (0x0006be30) list_medium_line_x2_t3_g3_t2

0x6538,	// (0x0006be42) list_medium_line_x2_t3_g3_t3_ParamLimits

0x6538,	// (0x0006be42) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x00074b68) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x00074b68) list_medium_line_x2_t3_g3_t

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t3_g2_g1

0x6505,	// (0x0006be0f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x6505,	// (0x0006be0f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00074b6f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00074b6f) list_medium_line_x2_t3_g2_g

0x654d,	// (0x0006be57) list_medium_line_x2_t3_g2_t1_ParamLimits

0x654d,	// (0x0006be57) list_medium_line_x2_t3_g2_t1

0x6563,	// (0x0006be6d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6563,	// (0x0006be6d) list_medium_line_x2_t3_g2_t2

0x6575,	// (0x0006be7f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6575,	// (0x0006be7f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x00074b74) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x00074b74) list_medium_line_x2_t3_g2_t

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t4_g4_g1

0x6593,	// (0x0006be9d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x6593,	// (0x0006be9d) list_medium_line_x2_t4_g4_g2

0x64f9,	// (0x0006be03) list_medium_line_x2_t4_g4_g3_ParamLimits

0x64f9,	// (0x0006be03) list_medium_line_x2_t4_g4_g3

0x659f,	// (0x0006bea9) list_medium_line_x2_t4_g4_g4_ParamLimits

0x659f,	// (0x0006bea9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00074b7b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00074b7b) list_medium_line_x2_t4_g4_g

0x65ab,	// (0x0006beb5) list_medium_line_x2_t4_g4_t1_ParamLimits

0x65ab,	// (0x0006beb5) list_medium_line_x2_t4_g4_t1

0x65c2,	// (0x0006becc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x65c2,	// (0x0006becc) list_medium_line_x2_t4_g4_t2

0x65d7,	// (0x0006bee1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x65d7,	// (0x0006bee1) list_medium_line_x2_t4_g4_t3

0x65e9,	// (0x0006bef3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x65e9,	// (0x0006bef3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x00074b84) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x00074b84) list_medium_line_x2_t4_g4_t

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t2_g4_g1

0x6593,	// (0x0006be9d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x6593,	// (0x0006be9d) list_medium_line_x2_t2_g4_g2

0x64f9,	// (0x0006be03) list_medium_line_x2_t2_g4_g3_ParamLimits

0x64f9,	// (0x0006be03) list_medium_line_x2_t2_g4_g3

0x6505,	// (0x0006be0f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x6505,	// (0x0006be0f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00074beb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00074beb) list_medium_line_x2_t2_g4_g

0x65fb,	// (0x0006bf05) list_medium_line_x2_t2_g4_t1_ParamLimits

0x65fb,	// (0x0006bf05) list_medium_line_x2_t2_g4_t1

0x6538,	// (0x0006be42) list_medium_line_x2_t2_g4_t2_ParamLimits

0x6538,	// (0x0006be42) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00074bf4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00074bf4) list_medium_line_x2_t2_g4_t

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t2_g3_g1

0x64f9,	// (0x0006be03) list_medium_line_x2_t2_g3_g2_ParamLimits

0x64f9,	// (0x0006be03) list_medium_line_x2_t2_g3_g2

0x6505,	// (0x0006be0f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x6505,	// (0x0006be0f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x00074b61) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x00074b61) list_medium_line_x2_t2_g3_g

0x6610,	// (0x0006bf1a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x6610,	// (0x0006bf1a) list_medium_line_x2_t2_g3_t1

0x6538,	// (0x0006be42) list_medium_line_x2_t2_g3_t2_ParamLimits

0x6538,	// (0x0006be42) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00074bf9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00074bf9) list_medium_line_x2_t2_g3_t

0x9636,	// (0x0006ef40) main_sp_fs_list_pane_ParamLimits

0x9636,	// (0x0006ef40) main_sp_fs_list_pane

0x9642,	// (0x0006ef4c) sp_fs_scroll_pane_ParamLimits

0x9642,	// (0x0006ef4c) sp_fs_scroll_pane

0x6625,	// (0x0006bf2f) list_medium_line_x2_t3_t1

0x6635,	// (0x0006bf3f) list_medium_line_x2_t3_t2

0x6643,	// (0x0006bf4d) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x00074c44) list_medium_line_x2_t3_t

0x6651,	// (0x0006bf5b) list_medium_line_x3_t4_t1

0x6661,	// (0x0006bf6b) list_medium_line_x3_t4_t2

0x666f,	// (0x0006bf79) list_medium_line_x3_t4_t3

0x6643,	// (0x0006bf4d) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00074c4b) list_medium_line_x3_t4_t

0x667d,	// (0x0006bf87) list_medium_line_x4_t5_t1

0x668d,	// (0x0006bf97) list_medium_line_x4_t5_t2

0x666f,	// (0x0006bf79) list_medium_line_x4_t5_t3

0x669b,	// (0x0006bfa5) list_medium_line_x4_t5_t4

0x6643,	// (0x0006bf4d) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x00074c54) list_medium_line_x4_t5_t

0x64ed,	// (0x0006bdf7) list_medium_line_t4_g4_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_t4_g4_g1

0x659f,	// (0x0006bea9) list_medium_line_t4_g4_g2_ParamLimits

0x659f,	// (0x0006bea9) list_medium_line_t4_g4_g2

0x66a9,	// (0x0006bfb3) list_medium_line_t4_g4_g3_ParamLimits

0x66a9,	// (0x0006bfb3) list_medium_line_t4_g4_g3

0x6505,	// (0x0006be0f) list_medium_line_t4_g4_g4_ParamLimits

0x6505,	// (0x0006be0f) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x00074c5f) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x00074c5f) list_medium_line_t4_g4_g

0x66b5,	// (0x0006bfbf) list_medium_line_t4_g4_t1_ParamLimits

0x66b5,	// (0x0006bfbf) list_medium_line_t4_g4_t1

0x66ca,	// (0x0006bfd4) list_medium_line_t4_g4_t2_ParamLimits

0x66ca,	// (0x0006bfd4) list_medium_line_t4_g4_t2

0x66e0,	// (0x0006bfea) list_medium_line_t4_g4_t3_ParamLimits

0x66e0,	// (0x0006bfea) list_medium_line_t4_g4_t3

0x6538,	// (0x0006be42) list_medium_line_t4_g4_t4_ParamLimits

0x6538,	// (0x0006be42) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00074c68) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00074c68) list_medium_line_t4_g4_t

0x9735,	// (0x0006f03f) chi_dic_find_pane_g1

0xa6bb,	// (0x0006ffc5) main_tport_pane

0x6941,	// (0x0006c24b) list_medium_line_plain_t1

0x694f,	// (0x0006c259) list_medium_line_t2_g2_g1_ParamLimits

0x694f,	// (0x0006c259) list_medium_line_t2_g2_g1

0x695b,	// (0x0006c265) list_medium_line_t2_g2_g2_ParamLimits

0x695b,	// (0x0006c265) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00075324) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00075324) list_medium_line_t2_g2_g

0x6967,	// (0x0006c271) list_medium_line_t2_g2_t1_ParamLimits

0x6967,	// (0x0006c271) list_medium_line_t2_g2_t1

0x6981,	// (0x0006c28b) list_medium_line_t2_g2_t2_ParamLimits

0x6981,	// (0x0006c28b) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00075329) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00075329) list_medium_line_t2_g2_t

0x6b8f,	// (0x0006c499) aid_sp_fs_list_icon_a_sm

0xd5fb,	// (0x00072f05) aid_sp_fs_list_icon_d

0x3cd8,	// (0x000695e2) aid_sp_fs_text_primary

0x6b97,	// (0x0006c4a1) aid_sp_fs_text_secondary

0x6ba0,	// (0x0006c4aa) list_medium_line

0x6ba0,	// (0x0006c4aa) list_medium_line_g2

0x6ba0,	// (0x0006c4aa) list_medium_line_g3

0x6ba0,	// (0x0006c4aa) list_medium_line_plain

0x6ba0,	// (0x0006c4aa) list_medium_line_plain_t2

0x6ba0,	// (0x0006c4aa) list_medium_line_plain_t3

0x6ba0,	// (0x0006c4aa) list_medium_line_right_icon

0x6ba0,	// (0x0006c4aa) list_medium_line_right_iconx2

0x6ba0,	// (0x0006c4aa) list_medium_line_t2

0x6ba0,	// (0x0006c4aa) list_medium_line_t2_g2

0x6ba0,	// (0x0006c4aa) list_medium_line_t2_g3

0x6ba0,	// (0x0006c4aa) list_medium_line_t2_right_icon

0x6ba0,	// (0x0006c4aa) list_medium_line_t2_right_iconx2

0x6ba0,	// (0x0006c4aa) list_medium_line_t3

0x6ba0,	// (0x0006c4aa) list_medium_line_t3_g2

0x6ba0,	// (0x0006c4aa) list_medium_line_t3_g3

0x6ba0,	// (0x0006c4aa) list_medium_line_t3_right_iconx2

0x6ba9,	// (0x0006c4b3) list_medium_line_t4_g4

0xd603,	// (0x00072f0d) list_medium_line_x2

0xd603,	// (0x00072f0d) list_medium_line_x2_t2_g2

0xd603,	// (0x00072f0d) list_medium_line_x2_t2_g3

0xd603,	// (0x00072f0d) list_medium_line_x2_t2_g4

0xd603,	// (0x00072f0d) list_medium_line_x2_t3

0xd603,	// (0x00072f0d) list_medium_line_x2_t3_g2

0xd603,	// (0x00072f0d) list_medium_line_x2_t3_g3

0xd603,	// (0x00072f0d) list_medium_line_x2_t3_g4

0xd603,	// (0x00072f0d) list_medium_line_x2_t4_g2

0xd603,	// (0x00072f0d) list_medium_line_x2_t4_g4

0x6bb2,	// (0x0006c4bc) list_medium_line_x3

0x6bb2,	// (0x0006c4bc) list_medium_line_x3_t4

0x6bb2,	// (0x0006c4bc) list_medium_line_x3_t4_g4

0x6ba9,	// (0x0006c4b3) list_medium_line_x4_t4

0x6ba9,	// (0x0006c4b3) list_medium_line_x4_t4_g7

0x6ba9,	// (0x0006c4b3) list_medium_line_x4_t5

0x6bbb,	// (0x0006c4c5) list_single_fs_dyc_pane_ParamLimits

0x6bbb,	// (0x0006c4c5) list_single_fs_dyc_pane

0x64ed,	// (0x0006bdf7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x4_t4_g7_g1

0x6bcf,	// (0x0006c4d9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6bcf,	// (0x0006c4d9) list_medium_line_x4_t4_g7_g2

0x6bdb,	// (0x0006c4e5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x6bdb,	// (0x0006c4e5) list_medium_line_x4_t4_g7_g3

0x6bea,	// (0x0006c4f4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x6bea,	// (0x0006c4f4) list_medium_line_x4_t4_g7_g4

0x6bf6,	// (0x0006c500) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6bf6,	// (0x0006c500) list_medium_line_x4_t4_g7_g5

0x6c05,	// (0x0006c50f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6c05,	// (0x0006c50f) list_medium_line_x4_t4_g7_g6

0x6c14,	// (0x0006c51e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6c14,	// (0x0006c51e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x000754f4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x000754f4) list_medium_line_x4_t4_g7_g

0x6c20,	// (0x0006c52a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6c20,	// (0x0006c52a) list_medium_line_x4_t4_g7_t1

0x6c35,	// (0x0006c53f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6c35,	// (0x0006c53f) list_medium_line_x4_t4_g7_t2

0x6c4a,	// (0x0006c554) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6c4a,	// (0x0006c554) list_medium_line_x4_t4_g7_t3

0x6c5f,	// (0x0006c569) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6c5f,	// (0x0006c569) list_medium_line_x4_t4_g7_t4

0x6c71,	// (0x0006c57b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6c71,	// (0x0006c57b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x00075503) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x00075503) list_medium_line_x4_t4_g7_t

0x6c83,	// (0x0006c58d) list_single_dyc_row_pane_ParamLimits

0x6c83,	// (0x0006c58d) list_single_dyc_row_pane

0xe2dd,	// (0x00073be7) call5_gesture_pane_ParamLimits

0xe2dd,	// (0x00073be7) call5_gesture_pane

0xe311,	// (0x00073c1b) call5_windows_pane_ParamLimits

0xe311,	// (0x00073c1b) call5_windows_pane

0xe383,	// (0x00073c8d) call5_swipe_1_pane_cp_ParamLimits

0xe383,	// (0x00073c8d) call5_swipe_1_pane_cp

0xe38f,	// (0x00073c99) call5_swipe_2_pane_cp_ParamLimits

0xe38f,	// (0x00073c99) call5_swipe_2_pane_cp

0x1414,	// (0x00066d1e) call5_image_pane_cp

0xe39b,	// (0x00073ca5) popup_call5_audio_first_window_cp_ParamLimits

0xe39b,	// (0x00073ca5) popup_call5_audio_first_window_cp

0x5428,	// (0x0006ad32) call5_swipe_1_pane_g1_cp_ParamLimits

0x5428,	// (0x0006ad32) call5_swipe_1_pane_g1_cp

0x5468,	// (0x0006ad72) call5_swipe_1_pane_g2_cp

0x5441,	// (0x0006ad4b) call5_swipe_1_pane_t1_cp_ParamLimits

0x5441,	// (0x0006ad4b) call5_swipe_1_pane_t1_cp

0x5428,	// (0x0006ad32) call5_swipe_2_pane_g1_cp_ParamLimits

0x5428,	// (0x0006ad32) call5_swipe_2_pane_g1_cp

0x5470,	// (0x0006ad7a) call5_swipe_2_pane_g2_cp

0x5478,	// (0x0006ad82) call5_swipe_2_pane_t1_cp_ParamLimits

0x5478,	// (0x0006ad82) call5_swipe_2_pane_t1_cp

0xa69f,	// (0x0006ffa9) main_sp_fs_email_pane

0x548d,	// (0x0006ad97) main_sp_fs_listscroll_pane_te

0x6cf5,	// (0x0006c5ff) popup_sp_fs_action_menu_pane_ParamLimits

0x6cf5,	// (0x0006c5ff) popup_sp_fs_action_menu_pane

0x2d85,	// (0x0006868f) bg_sp_fs_ctrlbar_pane_g1

0x5496,	// (0x0006ada0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x549f,	// (0x0006ada9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x54a8,	// (0x0006adb2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2d85,	// (0x0006868f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x000755ec) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2b68,	// (0x00068472) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2b68,	// (0x00068472) bg_sp_fs_ctrlbar_ddmenu_pane

0x54b1,	// (0x0006adbb) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x54b1,	// (0x0006adbb) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x54bd,	// (0x0006adc7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x54bd,	// (0x0006adc7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x000755f5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x000755f5) main_sp_fs_ctrlbar_ddmenu_pane_g

0x54c9,	// (0x0006add3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x54c9,	// (0x0006add3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x6d37,	// (0x0006c641) list_medium_line_t2_right_icon_g1

0x6d3f,	// (0x0006c649) list_medium_line_t2_right_icon_t1

0x6d4f,	// (0x0006c659) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x000755fa) list_medium_line_t2_right_icon_t

0x287d,	// (0x00068187) bg_sp_fs_ctrlbar_pane_ParamLimits

0x287d,	// (0x00068187) bg_sp_fs_ctrlbar_pane

0xe3fe,	// (0x00073d08) main_sp_fs_ctrlbar_button_pane_cp01

0xe406,	// (0x00073d10) main_sp_fs_ctrlbar_ddmenu_pane

0x37d9,	// (0x000690e3) main_sp_fs_ctrlbar_pane_g1

0x551b,	// (0x0006ae25) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x000755ff) main_sp_fs_ctrlbar_pane_g

0x5527,	// (0x0006ae31) main_sp_fs_ctrlbar_pane_t1

0x6d5d,	// (0x0006c667) main_sp_fs_ctrlbar_pane

0x6d77,	// (0x0006c681) main_sp_fs_listscroll_pane_te_cp01

0x6d88,	// (0x0006c692) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6d88,	// (0x0006c692) popup_sp_fs_action_menu_pane_cp01

0xa69f,	// (0x0006ffa9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa69f,	// (0x0006ffa9) bg_sp_fs_highlight_list_pane_cp01

0x6da0,	// (0x0006c6aa) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6da0,	// (0x0006c6aa) sp_fs_action_menu_list_gene_pane_g1

0x554c,	// (0x0006ae56) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x554c,	// (0x0006ae56) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00075609) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00075609) sp_fs_action_menu_list_gene_pane_g

0x6daf,	// (0x0006c6b9) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6daf,	// (0x0006c6b9) sp_fs_action_menu_list_gene_pane_t1

0x6dc7,	// (0x0006c6d1) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6dc7,	// (0x0006c6d1) sp_fs_action_menu_list_gene_pane

0x5559,	// (0x0006ae63) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5559,	// (0x0006ae63) popup_sp_fs_action_menu_bg_pane

0x6de6,	// (0x0006c6f0) sp_fs_action_menu_list_pane_ParamLimits

0x6de6,	// (0x0006c6f0) sp_fs_action_menu_list_pane

0x5567,	// (0x0006ae71) sp_fs_scroll_pane_cp01_ParamLimits

0x5567,	// (0x0006ae71) sp_fs_scroll_pane_cp01

0x6e06,	// (0x0006c710) list_medium_line_plain_t2_t1

0x6e16,	// (0x0006c720) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0007560e) list_medium_line_plain_t2_t

0x6e24,	// (0x0006c72e) list_medium_line_plain_t3_t1

0x6e34,	// (0x0006c73e) list_medium_line_plain_t3_t2

0x6e42,	// (0x0006c74c) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00075613) list_medium_line_plain_t3_t

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t2_g2_g1

0x6505,	// (0x0006be0f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x6505,	// (0x0006be0f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00074b6f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00074b6f) list_medium_line_x2_t2_g2_g

0x66b5,	// (0x0006bfbf) list_medium_line_x2_t2_g2_t1_ParamLimits

0x66b5,	// (0x0006bfbf) list_medium_line_x2_t2_g2_t1

0x6538,	// (0x0006be42) list_medium_line_x2_t2_g2_t2_ParamLimits

0x6538,	// (0x0006be42) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0007561a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0007561a) list_medium_line_x2_t2_g2_t

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t4_g2_g1

0x6e50,	// (0x0006c75a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6e50,	// (0x0006c75a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0007561f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0007561f) list_medium_line_x2_t4_g2_g

0x6e62,	// (0x0006c76c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6e62,	// (0x0006c76c) list_medium_line_x2_t4_g2_t1

0x6e79,	// (0x0006c783) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6e79,	// (0x0006c783) list_medium_line_x2_t4_g2_t2

0x6e8e,	// (0x0006c798) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6e8e,	// (0x0006c798) list_medium_line_x2_t4_g2_t3

0x6538,	// (0x0006be42) list_medium_line_x2_t4_g2_t4_ParamLimits

0x6538,	// (0x0006be42) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x00075624) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x00075624) list_medium_line_x2_t4_g2_t

0x6ea0,	// (0x0006c7aa) list_medium_line_t3_right_iconx2_g1

0x6d37,	// (0x0006c641) list_medium_line_t3_right_iconx2_g2

0x6ea8,	// (0x0006c7b2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0007562d) list_medium_line_t3_right_iconx2_g

0x6eb0,	// (0x0006c7ba) list_medium_line_t3_right_iconx2_t1

0x6ec0,	// (0x0006c7ca) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x00075634) list_medium_line_t3_right_iconx2_t

0x64ed,	// (0x0006bdf7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x3_t4_g4_g1

0x64f9,	// (0x0006be03) list_medium_line_x3_t4_g4_g2_ParamLimits

0x64f9,	// (0x0006be03) list_medium_line_x3_t4_g4_g2

0x659f,	// (0x0006bea9) list_medium_line_x3_t4_g4_g3_ParamLimits

0x659f,	// (0x0006bea9) list_medium_line_x3_t4_g4_g3

0x6ece,	// (0x0006c7d8) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6ece,	// (0x0006c7d8) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x00075639) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x00075639) list_medium_line_x3_t4_g4_g

0x6eda,	// (0x0006c7e4) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6eda,	// (0x0006c7e4) list_medium_line_x3_t4_g4_t1

0x6ef1,	// (0x0006c7fb) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6ef1,	// (0x0006c7fb) list_medium_line_x3_t4_g4_t2

0x6f06,	// (0x0006c810) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6f06,	// (0x0006c810) list_medium_line_x3_t4_g4_t3

0x6f1b,	// (0x0006c825) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6f1b,	// (0x0006c825) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x00075642) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x00075642) list_medium_line_x3_t4_g4_t

0x6f38,	// (0x0006c842) list_single_dyc_row_text_pane_t1_ParamLimits

0x6f38,	// (0x0006c842) list_single_dyc_row_text_pane_t1

0x6f6f,	// (0x0006c879) list_single_dyc_row_text_pane_t2_ParamLimits

0x6f6f,	// (0x0006c879) list_single_dyc_row_text_pane_t2

0x6fc9,	// (0x0006c8d3) list_single_dyc_row_text_pane_t3_ParamLimits

0x6fc9,	// (0x0006c8d3) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0007564b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0007564b) list_single_dyc_row_text_pane_t

0x6fdb,	// (0x0006c8e5) list_single_dyc_row_pane_g1_ParamLimits

0x6fdb,	// (0x0006c8e5) list_single_dyc_row_pane_g1

0x6fe7,	// (0x0006c8f1) list_single_dyc_row_pane_g2_ParamLimits

0x6fe7,	// (0x0006c8f1) list_single_dyc_row_pane_g2

0x6ff3,	// (0x0006c8fd) list_single_dyc_row_pane_g3_ParamLimits

0x6ff3,	// (0x0006c8fd) list_single_dyc_row_pane_g3

0x6fff,	// (0x0006c909) list_single_dyc_row_pane_g4_ParamLimits

0x6fff,	// (0x0006c909) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x00075652) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x00075652) list_single_dyc_row_pane_g

0x700b,	// (0x0006c915) list_single_dyc_row_text_pane_ParamLimits

0x700b,	// (0x0006c915) list_single_dyc_row_text_pane

0x75ee,	// (0x0006cef8) bg_sp_fs_scroll_pane

0x558d,	// (0x0006ae97) thumb_sp_fs_scroll_pane

0x694f,	// (0x0006c259) list_medium_line_g1_ParamLimits

0x694f,	// (0x0006c259) list_medium_line_g1

0x702a,	// (0x0006c934) list_medium_line_t1_ParamLimits

0x702a,	// (0x0006c934) list_medium_line_t1

0x64ed,	// (0x0006bdf7) list_medium_line_x2_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x2_g1

0x64f9,	// (0x0006be03) list_medium_line_x2_g2_ParamLimits

0x64f9,	// (0x0006be03) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0007565b) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0007565b) list_medium_line_x2_g

0x703f,	// (0x0006c949) list_medium_line_x2_t1_ParamLimits

0x703f,	// (0x0006c949) list_medium_line_x2_t1

0x64ed,	// (0x0006bdf7) list_medium_line_x3_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x3_g1

0x64f9,	// (0x0006be03) list_medium_line_x3_g2_ParamLimits

0x64f9,	// (0x0006be03) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0007565b) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0007565b) list_medium_line_x3_g

0x703f,	// (0x0006c949) list_medium_line_x3_t1_ParamLimits

0x703f,	// (0x0006c949) list_medium_line_x3_t1

0x5596,	// (0x0006aea0) thumb_sp_fs_scroll_pane_g1

0x559f,	// (0x0006aea9) thumb_sp_fs_scroll_pane_g2

0x55a8,	// (0x0006aeb2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00075660) thumb_sp_fs_scroll_pane_g

0x5596,	// (0x0006aea0) bg_sp_fs_scroll_pane_g1

0x559f,	// (0x0006aea9) bg_sp_fs_scroll_pane_g2

0x55a8,	// (0x0006aeb2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00075660) bg_sp_fs_scroll_pane_g

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x64ed,	// (0x0006bdf7) list_medium_line_x2_t3_g4_g1

0x6593,	// (0x0006be9d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x6593,	// (0x0006be9d) list_medium_line_x2_t3_g4_g2

0x64f9,	// (0x0006be03) list_medium_line_x2_t3_g4_g3_ParamLimits

0x64f9,	// (0x0006be03) list_medium_line_x2_t3_g4_g3

0x6505,	// (0x0006be0f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x6505,	// (0x0006be0f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00074beb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00074beb) list_medium_line_x2_t3_g4_g

0x7055,	// (0x0006c95f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x7055,	// (0x0006c95f) list_medium_line_x2_t3_g4_t1

0x706b,	// (0x0006c975) list_medium_line_x2_t3_g4_t2_ParamLimits

0x706b,	// (0x0006c975) list_medium_line_x2_t3_g4_t2

0x6538,	// (0x0006be42) list_medium_line_x2_t3_g4_t3_ParamLimits

0x6538,	// (0x0006be42) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x00075667) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x00075667) list_medium_line_x2_t3_g4_t

0x694f,	// (0x0006c259) list_medium_line_g2_g1_ParamLimits

0x694f,	// (0x0006c259) list_medium_line_g2_g1

0x695b,	// (0x0006c265) list_medium_line_g2_g2_ParamLimits

0x695b,	// (0x0006c265) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00075324) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00075324) list_medium_line_g2_g

0x7084,	// (0x0006c98e) list_medium_line_g2_t1_ParamLimits

0x7084,	// (0x0006c98e) list_medium_line_g2_t1

0x694f,	// (0x0006c259) list_medium_line_t3_g2_g1_ParamLimits

0x694f,	// (0x0006c259) list_medium_line_t3_g2_g1

0x695b,	// (0x0006c265) list_medium_line_t3_g2_g2_ParamLimits

0x695b,	// (0x0006c265) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00075324) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00075324) list_medium_line_t3_g2_g

0x7099,	// (0x0006c9a3) list_medium_line_t3_g2_t1_ParamLimits

0x7099,	// (0x0006c9a3) list_medium_line_t3_g2_t1

0x70b3,	// (0x0006c9bd) list_medium_line_t3_g2_t2_ParamLimits

0x70b3,	// (0x0006c9bd) list_medium_line_t3_g2_t2

0x70c8,	// (0x0006c9d2) list_medium_line_t3_g2_t3_ParamLimits

0x70c8,	// (0x0006c9d2) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0007566e) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0007566e) list_medium_line_t3_g2_t

0x6d37,	// (0x0006c641) list_medium_line_right_icon_g1

0x70de,	// (0x0006c9e8) list_medium_line_right_icon_t1

0x694f,	// (0x0006c259) list_medium_line_t2_g1_ParamLimits

0x694f,	// (0x0006c259) list_medium_line_t2_g1

0x70ec,	// (0x0006c9f6) list_medium_line_t2_t1_ParamLimits

0x70ec,	// (0x0006c9f6) list_medium_line_t2_t1

0x7106,	// (0x0006ca10) list_medium_line_t2_t2_ParamLimits

0x7106,	// (0x0006ca10) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x00075675) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x00075675) list_medium_line_t2_t

0x694f,	// (0x0006c259) list_medium_line_t3_g1_ParamLimits

0x694f,	// (0x0006c259) list_medium_line_t3_g1

0x711b,	// (0x0006ca25) list_medium_line_t3_t1_ParamLimits

0x711b,	// (0x0006ca25) list_medium_line_t3_t1

0x7132,	// (0x0006ca3c) list_medium_line_t3_t2_ParamLimits

0x7132,	// (0x0006ca3c) list_medium_line_t3_t2

0x7147,	// (0x0006ca51) list_medium_line_t3_t3_ParamLimits

0x7147,	// (0x0006ca51) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0007567a) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0007567a) list_medium_line_t3_t

0x694f,	// (0x0006c259) list_medium_line_g3_g1_ParamLimits

0x694f,	// (0x0006c259) list_medium_line_g3_g1

0x7159,	// (0x0006ca63) list_medium_line_g3_g2_ParamLimits

0x7159,	// (0x0006ca63) list_medium_line_g3_g2

0x695b,	// (0x0006c265) list_medium_line_g3_g3_ParamLimits

0x695b,	// (0x0006c265) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x00075681) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x00075681) list_medium_line_g3_g

0x7165,	// (0x0006ca6f) list_medium_line_g3_t1_ParamLimits

0x7165,	// (0x0006ca6f) list_medium_line_g3_t1

0x694f,	// (0x0006c259) list_medium_line_t2_g3_g1_ParamLimits

0x694f,	// (0x0006c259) list_medium_line_t2_g3_g1

0x7159,	// (0x0006ca63) list_medium_line_t2_g3_g2_ParamLimits

0x7159,	// (0x0006ca63) list_medium_line_t2_g3_g2

0x695b,	// (0x0006c265) list_medium_line_t2_g3_g3_ParamLimits

0x695b,	// (0x0006c265) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x00075681) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x00075681) list_medium_line_t2_g3_g

0x717a,	// (0x0006ca84) list_medium_line_t2_g3_t1_ParamLimits

0x717a,	// (0x0006ca84) list_medium_line_t2_g3_t1

0x7191,	// (0x0006ca9b) list_medium_line_t2_g3_t2_ParamLimits

0x7191,	// (0x0006ca9b) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x00075688) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x00075688) list_medium_line_t2_g3_t

0x694f,	// (0x0006c259) list_medium_line_t3_g3_g1_ParamLimits

0x694f,	// (0x0006c259) list_medium_line_t3_g3_g1

0x7159,	// (0x0006ca63) list_medium_line_t3_g3_g2_ParamLimits

0x7159,	// (0x0006ca63) list_medium_line_t3_g3_g2

0x695b,	// (0x0006c265) list_medium_line_t3_g3_g3_ParamLimits

0x695b,	// (0x0006c265) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x00075681) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x00075681) list_medium_line_t3_g3_g

0x71a6,	// (0x0006cab0) list_medium_line_t3_g3_t1_ParamLimits

0x71a6,	// (0x0006cab0) list_medium_line_t3_g3_t1

0x71ba,	// (0x0006cac4) list_medium_line_t3_g3_t2_ParamLimits

0x71ba,	// (0x0006cac4) list_medium_line_t3_g3_t2

0x71cc,	// (0x0006cad6) list_medium_line_t3_g3_t3_ParamLimits

0x71cc,	// (0x0006cad6) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0007568d) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0007568d) list_medium_line_t3_g3_t

0x6ea0,	// (0x0006c7aa) list_medium_line_right_iconx2_g1

0x6d37,	// (0x0006c641) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00075694) list_medium_line_right_iconx2_g

0x71de,	// (0x0006cae8) list_medium_line_right_iconx2_t1

0x6ea0,	// (0x0006c7aa) list_medium_line_t2_right_iconx2_g1

0x6d37,	// (0x0006c641) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00075694) list_medium_line_t2_right_iconx2_g

0x71ec,	// (0x0006caf6) list_medium_line_t2_right_iconx2_t1

0x71fc,	// (0x0006cb06) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x00075699) list_medium_line_t2_right_iconx2_t

0x720a,	// (0x0006cb14) list_medium_line_x4_t4_t1

0x7218,	// (0x0006cb22) list_medium_line_x4_t4_t2

0x7228,	// (0x0006cb32) list_medium_line_x4_t4_t3

0x7238,	// (0x0006cb42) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0007569e) list_medium_line_x4_t4_t

0xe439,	// (0x00073d43) tport_appsw_pane_ParamLimits

0xe439,	// (0x00073d43) tport_appsw_pane

0xe445,	// (0x00073d4f) tport_contact_pane_ParamLimits

0xe445,	// (0x00073d4f) tport_contact_pane

0xe455,	// (0x00073d5f) tport_listscroll_pane_ParamLimits

0xe455,	// (0x00073d5f) tport_listscroll_pane

0xe465,	// (0x00073d6f) cell_tport_appsw_pane_ParamLimits

0xe465,	// (0x00073d6f) cell_tport_appsw_pane

0x3051,	// (0x0006895b) tport_appsw_pane_g1_ParamLimits

0x3051,	// (0x0006895b) tport_appsw_pane_g1

0x55b1,	// (0x0006aebb) tport_contact_pane_g1

0x55ba,	// (0x0006aec4) tport_contact_pane_t1

0x55c8,	// (0x0006aed2) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x000756a7) tport_contact_pane_t

0x55d6,	// (0x0006aee0) list_tport_pane

0x55df,	// (0x0006aee9) scroll_pane_cp_030

0x55f0,	// (0x0006aefa) cell_tport_appsw_pane_g1

0x5600,	// (0x0006af0a) cell_tport_appsw_pane_t1

0x75ee,	// (0x0006cef8) grid_highlight_pane_cp019

0xe490,	// (0x00073d9a) list_tport_double_graphic_pane_ParamLimits

0xe490,	// (0x00073d9a) list_tport_double_graphic_pane

0xa69f,	// (0x0006ffa9) list_highlight_pane_cp023_ParamLimits

0xa69f,	// (0x0006ffa9) list_highlight_pane_cp023

0xe4a3,	// (0x00073dad) list_tport_double_graphic_pane_g1_ParamLimits

0xe4a3,	// (0x00073dad) list_tport_double_graphic_pane_g1

0xe4b0,	// (0x00073dba) list_tport_double_graphic_pane_t1_ParamLimits

0xe4b0,	// (0x00073dba) list_tport_double_graphic_pane_t1

0xe4c5,	// (0x00073dcf) list_tport_double_graphic_pane_t2_ParamLimits

0xe4c5,	// (0x00073dcf) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x000756b3) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x000756b3) list_tport_double_graphic_pane_t

0x75ee,	// (0x0006cef8) main_cale_note_pane

0xc924,	// (0x0007222e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc924,	// (0x0007222e) cell_vitu2_function_top_wide_pane_cp01

0xe00b,	// (0x00073915) wait_bar_pane_cp05_ParamLimits

0x75ee,	// (0x0006cef8) listscroll_cmail_pane

0x5616,	// (0x0006af20) list_cmail_pane

0xe4e1,	// (0x00073deb) list_cmail_body_pane

0xe505,	// (0x00073e0f) list_single_cmail_header_caption_pane

0xe533,	// (0x00073e3d) list_single_cmail_header_detail_pane_ParamLimits

0xe533,	// (0x00073e3d) list_single_cmail_header_detail_pane

0xe56b,	// (0x00073e75) list_single_cmail_header_caption_pane_t1

0x7248,	// (0x0006cb52) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7248,	// (0x0006cb52) list_single_cmail_header_detail_pane_g1

0xe57b,	// (0x00073e85) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe57b,	// (0x00073e85) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x000756b8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x000756b8) list_single_cmail_header_detail_pane_g

0x7260,	// (0x0006cb6a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7260,	// (0x0006cb6a) list_single_cmail_header_detail_pane_t1

0x72b8,	// (0x0006cbc2) list_single_cmail_header_editor_pane_bg_ParamLimits

0x72b8,	// (0x0006cbc2) list_single_cmail_header_editor_pane_bg

0x5643,	// (0x0006af4d) list_cmail_body_pane_g1

0x564c,	// (0x0006af56) list_cmail_body_pane_t1

0x44bf,	// (0x00069dc9) list_single_cmail_header_editor_pane_bg_g1

0x0d01,	// (0x0006660b) list_single_cmail_header_editor_pane_bg_g1_copy1

0x44cf,	// (0x00069dd9) list_single_cmail_header_editor_pane_bg_g1_copy2

0x44c7,	// (0x00069dd1) list_single_cmail_header_editor_pane_bg_g1_copy3

0x46e3,	// (0x00069fed) list_single_cmail_header_editor_pane_bg_g1_copy4

0x44ef,	// (0x00069df9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x44df,	// (0x00069de9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x44e7,	// (0x00069df1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0ce1,	// (0x000665eb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe587,	// (0x00073e91) calenote_gesture_pane_ParamLimits

0xe587,	// (0x00073e91) calenote_gesture_pane

0xe5a1,	// (0x00073eab) calenote_window_pane_ParamLimits

0xe5a1,	// (0x00073eab) calenote_window_pane

0x565a,	// (0x0006af64) popup_note_window_cp01

0xe5b9,	// (0x00073ec3) calenote_swipe_1_pane_ParamLimits

0xe5b9,	// (0x00073ec3) calenote_swipe_1_pane

0xe38f,	// (0x00073c99) calenote_swipe_2_pane_ParamLimits

0xe38f,	// (0x00073c99) calenote_swipe_2_pane

0x5428,	// (0x0006ad32) calenote_swipe_1_pane_g1_ParamLimits

0x5428,	// (0x0006ad32) calenote_swipe_1_pane_g1

0x5435,	// (0x0006ad3f) calenote_swipe_1_pane_g2_ParamLimits

0x5435,	// (0x0006ad3f) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x000755e2) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x000755e2) calenote_swipe_1_pane_g

0x566c,	// (0x0006af76) calenote_swipe_1_pane_t1_ParamLimits

0x566c,	// (0x0006af76) calenote_swipe_1_pane_t1

0x5428,	// (0x0006ad32) calenote_swipe_2_pane_g1_ParamLimits

0x5428,	// (0x0006ad32) calenote_swipe_2_pane_g1

0x568b,	// (0x0006af95) calenote_swipe_2_pane_g2_ParamLimits

0x568b,	// (0x0006af95) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x000756c4) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x000756c4) calenote_swipe_2_pane_g

0x5697,	// (0x0006afa1) calenote_swipe_2_pane_t1_ParamLimits

0x5697,	// (0x0006afa1) calenote_swipe_2_pane_t1

0x75ee,	// (0x0006cef8) main_mup_navstr_pane

0xb6ae,	// (0x00070fb8) main_mup3_pane_t7_ParamLimits

0xb6ae,	// (0x00070fb8) main_mup3_pane_t7

0xc0c6,	// (0x000719d0) main_mp4_pane_g6_ParamLimits

0xc0c6,	// (0x000719d0) main_mp4_pane_g6

0xc43a,	// (0x00071d44) main_image3_pane_t4_ParamLimits

0xc43a,	// (0x00071d44) main_image3_pane_t4

0xe5cc,	// (0x00073ed6) popup_navstr_preview_pane_ParamLimits

0xe5cc,	// (0x00073ed6) popup_navstr_preview_pane

0xe5d8,	// (0x00073ee2) scroll_navstr_pane_ParamLimits

0xe5d8,	// (0x00073ee2) scroll_navstr_pane

0x75ee,	// (0x0006cef8) bg_popup_preview_window_pane_cp04

0x56be,	// (0x0006afc8) popup_navstr_preview_pane_t1

0xe5e4,	// (0x00073eee) scroll_navstr_pane_g1_ParamLimits

0xe5e4,	// (0x00073eee) scroll_navstr_pane_g1

0xe5f1,	// (0x00073efb) scroll_navstr_pane_t1_ParamLimits

0xe5f1,	// (0x00073efb) scroll_navstr_pane_t1

0x5663,	// (0x0006af6d) bg_button_pane_cp014

0x5663,	// (0x0006af6d) bg_button_pane_cp030

0x6cac,	// (0x0006c5b6) list_double_fisheye_pane_g4_ParamLimits

0x6cac,	// (0x0006c5b6) list_double_fisheye_pane_g4

0xe2cc,	// (0x00073bd6) list_double_fisheye_pane_g5_ParamLimits

0xe2cc,	// (0x00073bd6) list_double_fisheye_pane_g5

0x561e,	// (0x0006af28) sp_fs_scroll_pane_cp03

0x37d9,	// (0x000690e3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x551b,	// (0x0006ae25) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x000755ff) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5527,	// (0x0006ae31) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe4d7,	// (0x00073de1) sp_fs_scroll_pane_cp02

0x098b,	// (0x00066295) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x098b,	// (0x00066295) popup_sp_fs_calendar_preview_list_single_pane

0x75ee,	// (0x0006cef8) main_cam6_pano_pane

0xa69f,	// (0x0006ffa9) main_mup3_pane_ParamLimits

0x75ee,	// (0x0006cef8) main_phacti_pane

0xdee0,	// (0x000737ea) bg_button_pane_cp11

0xdef8,	// (0x00073802) main_mobtv_info_pane_g2_ParamLimits

0xdef8,	// (0x00073802) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x0007555f) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x0007555f) main_mobtv_info_pane_g

0xe0aa,	// (0x000739b4) sc_clock_pane_t5_ParamLimits

0xe0aa,	// (0x000739b4) sc_clock_pane_t5

0xe150,	// (0x00073a5a) main_radioblah_pane_g1_ParamLimits

0x5374,	// (0x0006ac7e) main_radioblah_pane_t3_ParamLimits

0x5374,	// (0x0006ac7e) main_radioblah_pane_t3

0x538c,	// (0x0006ac96) main_radioblah_pane_t4_ParamLimits

0x538c,	// (0x0006ac96) main_radioblah_pane_t4

0xe16e,	// (0x00073a78) main_radioblah_text_pane_ParamLimits

0xe16e,	// (0x00073a78) main_radioblah_text_pane

0xe17b,	// (0x00073a85) main_radioblah_info_pane_g1_ParamLimits

0xe210,	// (0x00073b1a) main_radioblah_info_pane_t4_ParamLimits

0xe210,	// (0x00073b1a) main_radioblah_info_pane_t4

0xa69f,	// (0x0006ffa9) main_sp_fs_calendar_pane

0xe603,	// (0x00073f0d) main_phacti_pane_g1

0xe60b,	// (0x00073f15) phacti_note_pane_ParamLimits

0xe60b,	// (0x00073f15) phacti_note_pane

0x56d5,	// (0x0006afdf) phacti_term_pane_ParamLimits

0x56d5,	// (0x0006afdf) phacti_term_pane

0x56ea,	// (0x0006aff4) phacti_note_pane_t1_ParamLimits

0x56ea,	// (0x0006aff4) phacti_note_pane_t1

0x72ca,	// (0x0006cbd4) phacti_term_pane_g1

0x72d2,	// (0x0006cbdc) phacti_term_pane_t1_ParamLimits

0x72d2,	// (0x0006cbdc) phacti_term_pane_t1

0x5701,	// (0x0006b00b) popup_sp_fs_calendar_preview_list_single_pane_g1

0x5709,	// (0x0006b013) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x000756ce) popup_sp_fs_calendar_preview_list_single_pane_g

0x5711,	// (0x0006b01b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x5711,	// (0x0006b01b) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5727,	// (0x0006b031) aid_popup_sp_fs_bg_corner_pane

0x2d85,	// (0x0006868f) popup_sp_fs_calendar_preview_bg_pane_g1

0x75ee,	// (0x0006cef8) popup_sp_fs_calendar_preview_bg_pane

0x572f,	// (0x0006b039) popup_sp_fs_calendar_preview_list_pane

0xa69f,	// (0x0006ffa9) bg_main_sp_fs_cale_pane_ParamLimits

0xa69f,	// (0x0006ffa9) bg_main_sp_fs_cale_pane

0x72fc,	// (0x0006cc06) listscroll_cale_mrui_pane_ParamLimits

0x72fc,	// (0x0006cc06) listscroll_cale_mrui_pane

0x7310,	// (0x0006cc1a) listscroll_sp_fs_schedule_track_pane

0x7319,	// (0x0006cc23) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7319,	// (0x0006cc23) main_sp_fs_ctrlbar_pane_cp01

0x37e5,	// (0x000690ef) main_sp_fs_ribbon_pane

0x37ed,	// (0x000690f7) popup_sp_fs_cale_preview_window

0xe64e,	// (0x00073f58) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe64e,	// (0x00073f58) list_single_sp_fs_schedule_track_pane

0x789d,	// (0x0006d1a7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x789d,	// (0x0006d1a7) bg_sp_fs_highlight_list_pane_cp03

0xe676,	// (0x00073f80) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe676,	// (0x00073f80) list_single_sp_fs_schedule_track_pane_g1

0xe682,	// (0x00073f8c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe682,	// (0x00073f8c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x000756d3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x000756d3) list_single_sp_fs_schedule_track_pane_g

0xe68e,	// (0x00073f98) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe68e,	// (0x00073f98) list_single_sp_fs_schedule_track_pane_t1

0xe6a6,	// (0x00073fb0) sp_fs_schedule_track_pane_ParamLimits

0xe6a6,	// (0x00073fb0) sp_fs_schedule_track_pane

0x37ff,	// (0x00069109) sp_fs_schedule_track_pane_g1

0x3807,	// (0x00069111) sp_fs_schedule_track_pane_g2

0x380f,	// (0x00069119) sp_fs_schedule_track_pane_g3

0x3817,	// (0x00069121) sp_fs_schedule_track_pane_g4

0x381f,	// (0x00069129) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x000756d8) sp_fs_schedule_track_pane_g

0x44bf,	// (0x00069dc9) bg_sp_fs_schedule_viewer_highlight_g1

0x0d01,	// (0x0006660b) bg_sp_fs_schedule_viewer_highlight_g2

0x44c7,	// (0x00069dd1) bg_sp_fs_schedule_viewer_highlight_g3

0x44cf,	// (0x00069dd9) bg_sp_fs_schedule_viewer_highlight_g4

0x46e3,	// (0x00069fed) bg_sp_fs_schedule_viewer_highlight_g5

0x44df,	// (0x00069de9) bg_sp_fs_schedule_viewer_highlight_g6

0x44e7,	// (0x00069df1) bg_sp_fs_schedule_viewer_highlight_g7

0x44ef,	// (0x00069df9) bg_sp_fs_schedule_viewer_highlight_g8

0x0ce1,	// (0x000665eb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x000756e3) bg_sp_fs_schedule_viewer_highlight_g

0x75ee,	// (0x0006cef8) bg_main_sp_fs_ribbon_pane

0xe6b6,	// (0x00073fc0) main_sp_fs_ribbon_pane_g1

0x3827,	// (0x00069131) main_sp_fs_ribbon_pane_t1

0xe6c1,	// (0x00073fcb) main_sp_fs_ribbon_pane_t2

0x3836,	// (0x00069140) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x000756f6) main_sp_fs_ribbon_pane_t

0x3845,	// (0x0006914f) main_sp_fs_ribbon_scheduler_pane

0x384d,	// (0x00069157) bg_main_sp_fs_ribbon_pane_g1

0x3856,	// (0x00069160) bg_main_sp_fs_ribbon_pane_g2

0x385f,	// (0x00069169) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x000756fd) bg_main_sp_fs_ribbon_pane_g

0x3867,	// (0x00069171) main_sp_fs_ribbon_scheduler_pane_g1

0x3870,	// (0x0006917a) main_sp_fs_ribbon_scheduler_pane_g2

0x3879,	// (0x00069183) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x00075704) main_sp_fs_ribbon_scheduler_pane_g

0x3882,	// (0x0006918c) list_cale_mrui_pane

0xe6d2,	// (0x00073fdc) sp_fs_scroll_pane_cp07_ParamLimits

0xe6d2,	// (0x00073fdc) sp_fs_scroll_pane_cp07

0xe6e8,	// (0x00073ff2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe6e8,	// (0x00073ff2) bg_sp_fs_schedule_viewer_highlight

0x388b,	// (0x00069195) list_single_sp_fs_schedule_track_pane_cp01

0x3893,	// (0x0006919d) list_sp_fs_schedule_track_pane

0x389b,	// (0x000691a5) sp_fs_scroll_pane_cp06_ParamLimits

0x389b,	// (0x000691a5) sp_fs_scroll_pane_cp06

0x2d85,	// (0x0006868f) bgmain_sp_fs_calendar_pane_g1

0x732a,	// (0x0006cc34) list_single_cale_mrui_pane_ParamLimits

0x732a,	// (0x0006cc34) list_single_cale_mrui_pane

0x7359,	// (0x0006cc63) list_single_cale_mrui_row_pane_ParamLimits

0x7359,	// (0x0006cc63) list_single_cale_mrui_row_pane

0x7366,	// (0x0006cc70) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7366,	// (0x0006cc70) list_single_cale_mrui_row_pane_g1

0x739e,	// (0x0006cca8) list_single_cale_mrui_row_pane_t1_ParamLimits

0x739e,	// (0x0006cca8) list_single_cale_mrui_row_pane_t1

0x73b0,	// (0x0006ccba) list_single_cale_mrui_row_pane_t2_ParamLimits

0x73b0,	// (0x0006ccba) list_single_cale_mrui_row_pane_t2

0x7416,	// (0x0006cd20) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7416,	// (0x0006cd20) list_single_cale_mrui_row_pane_t3

0x7445,	// (0x0006cd4f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7445,	// (0x0006cd4f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x00075712) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x00075712) list_single_cale_mrui_row_pane_t

0x7474,	// (0x0006cd7e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7474,	// (0x0006cd7e) list_single_cmail_header_editor_pane_bg_cp01

0x7496,	// (0x0006cda0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7496,	// (0x0006cda0) list_single_cmail_header_editor_pane_bg_cp02

0xe6f5,	// (0x00073fff) main_radioblah_text_pane_t1_ParamLimits

0xe6f5,	// (0x00073fff) main_radioblah_text_pane_t1

0x396f,	// (0x00069279) cam6_indi_pane_cp01

0x3977,	// (0x00069281) cam6_mode_pane_cp01

0x397f,	// (0x00069289) cam6_pano_pane

0x3988,	// (0x00069292) cam6_zoom_pane_cp01

0x3990,	// (0x0006929a) cam6_pano_image_pane

0x399b,	// (0x000692a5) cam6_pano_pane_g1

0x50d3,	// (0x0006a9dd) cam6_pano_pane_g2

0x39a4,	// (0x000692ae) cam6_pano_pane_g3

0x39ad,	// (0x000692b7) cam6_pano_pane_g4

0x3328,	// (0x00068c32) cam6_pano_pane_g5

0x39b6,	// (0x000692c0) cam6_pano_pane_g6

0x39c0,	// (0x000692ca) cam6_pano_pane_g7

0x39c8,	// (0x000692d2) cam6_pano_pane_g8

0x39d1,	// (0x000692db) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x0007571b) cam6_pano_pane_g

0x75ee,	// (0x0006cef8) main_browser_tag_pane

0x56b6,	// (0x0006afc0) grid_navstr_albumart_pane

0x39dc,	// (0x000692e6) cell_navstr_albumart_pane_ParamLimits

0x39dc,	// (0x000692e6) cell_navstr_albumart_pane

0x1595,	// (0x00066e9f) cell_navstr_albumart_pane_g1

0x2692,	// (0x00067f9c) cell_navstr_albumart_pane_g2

0x26a2,	// (0x00067fac) cell_navstr_albumart_pane_g3

0x269a,	// (0x00067fa4) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x0007572e) cell_navstr_albumart_pane_g

0xe712,	// (0x0007401c) bt_list_pane_ParamLimits

0xe712,	// (0x0007401c) bt_list_pane

0xe739,	// (0x00074043) bt_list_pane_t1

0xe748,	// (0x00074052) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x00075737) bt_list_pane_t

0x75ee,	// (0x0006cef8) main_cale_prevew_pane

0xe757,	// (0x00074061) popup_cale_preview_window_ParamLimits

0xe757,	// (0x00074061) popup_cale_preview_window

0xa69f,	// (0x0006ffa9) bg_popup_preview_window_pane_cp05_ParamLimits

0xa69f,	// (0x0006ffa9) bg_popup_preview_window_pane_cp05

0x39fe,	// (0x00069308) list_cale_preview_pane_ParamLimits

0x39fe,	// (0x00069308) list_cale_preview_pane

0xe76e,	// (0x00074078) list_double_cale_preview_pane_ParamLimits

0xe76e,	// (0x00074078) list_double_cale_preview_pane

0xe780,	// (0x0007408a) list_single_cale_preview_pane_ParamLimits

0xe780,	// (0x0007408a) list_single_cale_preview_pane

0xe794,	// (0x0007409e) list_single_cale_preview_pane_g1

0xe79c,	// (0x000740a6) list_single_cale_preview_pane_t1_ParamLimits

0xe79c,	// (0x000740a6) list_single_cale_preview_pane_t1

0xe7b1,	// (0x000740bb) list_double_cale_preview_pane_g1

0xe7b9,	// (0x000740c3) list_double_cale_preview_pane_t1_ParamLimits

0xe7b9,	// (0x000740c3) list_double_cale_preview_pane_t1

0xe7ce,	// (0x000740d8) list_double_cale_preview_pane_t2_ParamLimits

0xe7ce,	// (0x000740d8) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x0007573c) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x0007573c) list_double_cale_preview_pane_t

0x75ee,	// (0x0006cef8) main_ezdial_pane

0xa69f,	// (0x0006ffa9) main_sp_fs_email_pane_ParamLimits

0xe3a7,	// (0x00073cb1) cmail_ddmenu_btn01_pane_ParamLimits

0xe3a7,	// (0x00073cb1) cmail_ddmenu_btn01_pane

0xe3c4,	// (0x00073cce) cmail_ddmenu_btn02_pane_ParamLimits

0xe3c4,	// (0x00073cce) cmail_ddmenu_btn02_pane

0xe3e2,	// (0x00073cec) cmail_ddmenu_btn03_pane_ParamLimits

0xe3e2,	// (0x00073cec) cmail_ddmenu_btn03_pane

0x6d5d,	// (0x0006c667) main_sp_fs_ctrlbar_pane_ParamLimits

0x6d77,	// (0x0006c681) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe4e1,	// (0x00073deb) list_cmail_body_pane_ParamLimits

0x562d,	// (0x0006af37) bg_button_pane_cp12

0x5636,	// (0x0006af40) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5636,	// (0x0006af40) list_single_cmail_header_detail_pane_g3

0x7292,	// (0x0006cb9c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7292,	// (0x0006cb9c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x000756bf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x000756bf) list_single_cmail_header_detail_pane_t

0x72e7,	// (0x0006cbf1) phacti_term_pane_t2_ParamLimits

0x72e7,	// (0x0006cbf1) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x000756c9) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x000756c9) phacti_term_pane_t

0x3a0a,	// (0x00069314) aid_size_list_single_double

0xe7e6,	// (0x000740f0) popup_ezdial_listscroll_window

0xe809,	// (0x00074113) popup_number_entry_window_cp01

0x1414,	// (0x00066d1e) bg_popup_call_pane_cp09

0x3a16,	// (0x00069320) ezdial_list_pane

0x3a1e,	// (0x00069328) scroll_pane_cp23

0x2b68,	// (0x00068472) bg_button_pane_cp028_ParamLimits

0x2b68,	// (0x00068472) bg_button_pane_cp028

0xe817,	// (0x00074121) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe817,	// (0x00074121) cmail_ddmenu_btn01_pane_g1

0xe829,	// (0x00074133) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe829,	// (0x00074133) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x00075741) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x00075741) cmail_ddmenu_btn01_pane_g

0x3a26,	// (0x00069330) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3a26,	// (0x00069330) cmail_ddmenu_btn01_pane_t1

0x287d,	// (0x00068187) bg_button_pane_cp029_ParamLimits

0x287d,	// (0x00068187) bg_button_pane_cp029

0xe829,	// (0x00074133) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe829,	// (0x00074133) cmail_ddmenu_btn02_pane_g1

0xe841,	// (0x0007414b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe841,	// (0x0007414b) cmail_ddmenu_btn02_pane_t1

0x789d,	// (0x0006d1a7) bg_button_pane_cp031_ParamLimits

0x789d,	// (0x0006d1a7) bg_button_pane_cp031

0xe829,	// (0x00074133) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe829,	// (0x00074133) cmail_ddmenu_btn03_pane_g1

0xe841,	// (0x0007414b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe841,	// (0x0007414b) cmail_ddmenu_btn03_pane_t1

0xc2e5,	// (0x00071bef) cell_dialer2_keypad_pane_t1_ParamLimits

0xc2ff,	// (0x00071c09) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc2ff,	// (0x00071c09) cell_dialer2_keypad_pane_t1_copy1

0xdd80,	// (0x0007368a) ncimui_group_button_pane

0xa69f,	// (0x0006ffa9) main_sp_fs_calendar_pane_ParamLimits

0xe505,	// (0x00073e0f) list_single_cmail_header_caption_pane_ParamLimits

0x4967,	// (0x0006a271) aid_recal_txt_sm_pane

0x75ee,	// (0x0006cef8) mian_recal_day_pane

0x37ed,	// (0x000690f7) popup_sp_fs_cale_preview_window_ParamLimits

0x75ee,	// (0x0006cef8) list_recal_day_pane

0x3a55,	// (0x0006935f) list_single_recal_day_pane_ParamLimits

0x3a55,	// (0x0006935f) list_single_recal_day_pane

0x3a67,	// (0x00069371) list_single_recal_day_pane_g1_ParamLimits

0x3a67,	// (0x00069371) list_single_recal_day_pane_g1

0x3a73,	// (0x0006937d) list_single_recal_day_pane_g2_ParamLimits

0x3a73,	// (0x0006937d) list_single_recal_day_pane_g2

0x3a83,	// (0x0006938d) list_single_recal_day_pane_g3_ParamLimits

0x3a83,	// (0x0006938d) list_single_recal_day_pane_g3

0xe865,	// (0x0007416f) list_single_recal_day_pane_g4_ParamLimits

0xe865,	// (0x0007416f) list_single_recal_day_pane_g4

0x3a8f,	// (0x00069399) list_single_recal_day_pane_g5_ParamLimits

0x3a8f,	// (0x00069399) list_single_recal_day_pane_g5

0x3a9f,	// (0x000693a9) list_single_recal_day_pane_g6_ParamLimits

0x3a9f,	// (0x000693a9) list_single_recal_day_pane_g6

0x0004,

0xfe46,	// (0x00075750) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x00075750) list_single_recal_day_pane_g

0x3ab6,	// (0x000693c0) list_single_recal_day_pane_t1

0x3ac8,	// (0x000693d2) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0007575b) list_single_recal_day_pane_t

0xe885,	// (0x0007418f) ncimui_query_button_pane_ParamLimits

0xe885,	// (0x0007418f) ncimui_query_button_pane

0xe895,	// (0x0007419f) ncimui_query_button_pane_t1_ParamLimits

0xe895,	// (0x0007419f) ncimui_query_button_pane_t1

0x3add,	// (0x000693e7) ncimui_query_button_pane_t2_ParamLimits

0x3add,	// (0x000693e7) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x00075760) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x00075760) ncimui_query_button_pane_t

0xe8a8,	// (0x000741b2) query_button_pane_ParamLimits

0xe8a8,	// (0x000741b2) query_button_pane

0x75ee,	// (0x0006cef8) bg_button_pane_cp0028

0x3af0,	// (0x000693fa) query_button_pane_t1

0xa6bb,	// (0x0006ffc5) main_tport_pane_ParamLimits

0xe410,	// (0x00073d1a) bg_popup_window_pane_cp01_ParamLimits

0xe410,	// (0x00073d1a) bg_popup_window_pane_cp01

0xe41d,	// (0x00073d27) heading_pane_cp08_ParamLimits

0xe41d,	// (0x00073d27) heading_pane_cp08

0xe42b,	// (0x00073d35) heading_pane_cp07_ParamLimits

0xe42b,	// (0x00073d35) heading_pane_cp07

0x55f0,	// (0x0006aefa) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x000756ac) cell_tport_appsw_pane_g

0x670e,	// (0x0006c018) input_candi_list_open_g1

0x0eca,	// (0x000667d4) list_cale_time_pane_g6_ParamLimits

0x0eca,	// (0x000667d4) list_cale_time_pane_g6

0xb103,	// (0x00070a0d) aid_size_touch_calib_1_ParamLimits

0xb103,	// (0x00070a0d) aid_size_touch_calib_1

0xb10f,	// (0x00070a19) aid_size_touch_calib_2_ParamLimits

0xb10f,	// (0x00070a19) aid_size_touch_calib_2

0xb11d,	// (0x00070a27) aid_size_touch_calib_3_ParamLimits

0xb11d,	// (0x00070a27) aid_size_touch_calib_3

0xb12d,	// (0x00070a37) aid_size_touch_calib_4_ParamLimits

0xb12d,	// (0x00070a37) aid_size_touch_calib_4

0xb13b,	// (0x00070a45) main_touch_calib_button_group_pane_ParamLimits

0xb13b,	// (0x00070a45) main_touch_calib_button_group_pane

0xb149,	// (0x00070a53) main_touch_calib_pane_g1_ParamLimits

0xb155,	// (0x00070a5f) main_touch_calib_pane_g2_ParamLimits

0xb161,	// (0x00070a6b) main_touch_calib_pane_g3_ParamLimits

0xb16d,	// (0x00070a77) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0007507a) main_touch_calib_pane_g_ParamLimits

0xb179,	// (0x00070a83) main_touch_calib_pane_t1_ParamLimits

0xb190,	// (0x00070a9a) main_touch_calib_pane_t2_ParamLimits

0xb1a7,	// (0x00070ab1) main_touch_calib_pane_t3_ParamLimits

0xb1bb,	// (0x00070ac5) main_touch_calib_pane_t4_ParamLimits

0xb1cf,	// (0x00070ad9) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x00075083) main_touch_calib_pane_t_ParamLimits

0x30f8,	// (0x00068a02) list_single_fp_cale_pane_g3_ParamLimits

0x30f8,	// (0x00068a02) list_single_fp_cale_pane_g3

0xa69f,	// (0x0006ffa9) bg_button_pane_cp012_ParamLimits

0xa69f,	// (0x0006ffa9) bg_vkb2_func_pane_cp03_ParamLimits

0xd0a5,	// (0x000729af) cell_vitu2_function_top_pane_g1_ParamLimits

0xa69f,	// (0x0006ffa9) bg_vkb2_func_pane_cp04_ParamLimits

0xdd1e,	// (0x00073628) main_ncimui_button_group_pane_ParamLimits

0xdd1e,	// (0x00073628) main_ncimui_button_group_pane

0xdd6e,	// (0x00073678) main_ncimui_pane_t3_ParamLimits

0xdd6e,	// (0x00073678) main_ncimui_pane_t3

0x56cc,	// (0x0006afd6) phacti_button_group_pane

0x3a0a,	// (0x00069314) aid_size_list_single_double_ParamLimits

0xe7e6,	// (0x000740f0) popup_ezdial_listscroll_window_ParamLimits

0xe809,	// (0x00074113) popup_number_entry_window_cp01_ParamLimits

0xe8b5,	// (0x000741bf) phacti_button_pane_ParamLimits

0xe8b5,	// (0x000741bf) phacti_button_pane

0x75ee,	// (0x0006cef8) bg_button_pane_cp14

0x3afe,	// (0x00069408) phacti_button_pane_t1

0xe8c6,	// (0x000741d0) main_touch_calib_button_pane_ParamLimits

0xe8c6,	// (0x000741d0) main_touch_calib_button_pane

0x07ff,	// (0x00066109) bg_button_pane_cp18_ParamLimits

0x07ff,	// (0x00066109) bg_button_pane_cp18

0x3b0c,	// (0x00069416) main_touch_calib_button_pane_t1_ParamLimits

0x3b0c,	// (0x00069416) main_touch_calib_button_pane_t1

0x3b22,	// (0x0006942c) main_touch_calib_button_pane_t2_ParamLimits

0x3b22,	// (0x0006942c) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x00075765) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x00075765) main_touch_calib_button_pane_t

0x75ee,	// (0x0006cef8) cell_ncimui_button_pane

0x75ee,	// (0x0006cef8) bg_button_pane_cp032

0x3b40,	// (0x0006944a) cell_ncimui_button_pane_t1

0xc35b,	// (0x00071c65) image3_infobar_pane_ParamLimits

0xc35b,	// (0x00071c65) image3_infobar_pane

0xe0cc,	// (0x000739d6) fs_bigclock_status_pane_ParamLimits

0xe0cc,	// (0x000739d6) fs_bigclock_status_pane

0xe0d9,	// (0x000739e3) main_fs_bigclock_clock_pane_ParamLimits

0xe0d9,	// (0x000739e3) main_fs_bigclock_clock_pane

0xe0ef,	// (0x000739f9) main_fs_bigclock_indi_pane_ParamLimits

0xe0ef,	// (0x000739f9) main_fs_bigclock_indi_pane

0xe11e,	// (0x00073a28) main_fs_bigclock_swipe_pane_ParamLimits

0xe11e,	// (0x00073a28) main_fs_bigclock_swipe_pane

0x75ee,	// (0x0006cef8) main_fs_clock_dumped_data

0x51e0,	// (0x0006aaea) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x51e0,	// (0x0006aaea) list_single_fs_bigclock_indicator_pane_g1

0x5209,	// (0x0006ab13) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x5209,	// (0x0006ab13) list_single_fs_bigclock_indicator_pane_g2

0x5223,	// (0x0006ab2d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x5223,	// (0x0006ab2d) list_single_fs_bigclock_indicator_pane_g3

0x523d,	// (0x0006ab47) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x523d,	// (0x0006ab47) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x00075593) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x00075593) list_single_fs_bigclock_indicator_pane_g

0x5266,	// (0x0006ab70) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5266,	// (0x0006ab70) list_single_fs_bigclock_indicator_pane_t1

0x528e,	// (0x0006ab98) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x528e,	// (0x0006ab98) list_single_fs_bigclock_indicator_pane_t2

0x52b6,	// (0x0006abc0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x52b6,	// (0x0006abc0) list_single_fs_bigclock_indicator_pane_t3

0x52de,	// (0x0006abe8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x52de,	// (0x0006abe8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x0007559e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x0007559e) list_single_fs_bigclock_indicator_pane_t

0x3b4e,	// (0x00069458) image3_infobar_fav_pane_ParamLimits

0x3b4e,	// (0x00069458) image3_infobar_fav_pane

0x3b5e,	// (0x00069468) image3_infobar_loc_pane_ParamLimits

0x3b5e,	// (0x00069468) image3_infobar_loc_pane

0x3b72,	// (0x0006947c) image3_infobar_time_pane_ParamLimits

0x3b72,	// (0x0006947c) image3_infobar_time_pane

0x2d85,	// (0x0006868f) image3_infobar_time_pane_g1

0x3b82,	// (0x0006948c) image3_infobar_time_pane_t1

0x2d85,	// (0x0006868f) image3_infobar_loc_pane_g1

0x3b90,	// (0x0006949a) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0007576a) image3_infobar_loc_pane_g

0x3b98,	// (0x000694a2) image3_infobar_loc_pane_t1

0x2d85,	// (0x0006868f) image3_infobar_fav_pane_g1

0x3ba6,	// (0x000694b0) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0007576f) image3_infobar_fav_pane_g

0x3bae,	// (0x000694b8) fs_bigclock_status_battery_pane

0x3bb7,	// (0x000694c1) fs_bigclock_status_signal_pane

0x3bc0,	// (0x000694ca) fs_bigclock_status_title_pane

0x3bc9,	// (0x000694d3) fs_bigclock_status_signal_pane_g1

0x3bd2,	// (0x000694dc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x00075774) fs_bigclock_status_signal_pane_g

0x3bda,	// (0x000694e4) fs_bigclock_status_battery_pane_g1

0x3be3,	// (0x000694ed) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x00075779) fs_bigclock_status_battery_pane_g

0x3beb,	// (0x000694f5) fs_bigclock_status_title_pane_t1

0x2d85,	// (0x0006868f) main_fs_bigclock_clock_pane_g1

0x3bf9,	// (0x00069503) main_fs_bigclock_clock_pane_g2

0x3bf9,	// (0x00069503) main_fs_bigclock_clock_pane_g3

0x3bf9,	// (0x00069503) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0007577e) main_fs_bigclock_clock_pane_g

0x3c01,	// (0x0006950b) main_fs_bigclock_clock_pane_t1

0x3c0f,	// (0x00069519) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x00075787) main_fs_bigclock_clock_pane_t

0x3c1e,	// (0x00069528) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3c1e,	// (0x00069528) list_single_fs_bigclock_indicator_pane

0xe8d6,	// (0x000741e0) list_single_fs_bigclock_pane_ParamLimits

0xe8d6,	// (0x000741e0) list_single_fs_bigclock_pane

0x3c38,	// (0x00069542) main_fs_bigclock_indicator_pane_t1

0x3c47,	// (0x00069551) list_single_fs_bigclock_pane_g1

0x3c4f,	// (0x00069559) list_single_fs_bigclock_pane_t1

0x2d85,	// (0x0006868f) main_fs_bigclock_swipe_pane_g1

0x3c92,	// (0x0006959c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x00075798) main_fs_bigclock_swipe_pane_g

0x3c9a,	// (0x000695a4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3c9a,	// (0x000695a4) main_fs_bigclock_swipe_pane_t1

0x964e,	// (0x0006ef58) call_type_pane_ParamLimits

0x75ee,	// (0x0006cef8) main_btmg_pane

0x7392,	// (0x0006cc9c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7392,	// (0x0006cc9c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe01,	// (0x0007570b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0007570b) list_single_cale_mrui_row_pane_g

0x3a45,	// (0x0006934f) list_recal_vselct_arw_lo_pane

0x3a4d,	// (0x00069357) list_recal_vselct_arw_up_pane

0xf0de,	// (0x000749e8) list_recal_vselct_pane

0x3cb7,	// (0x000695c1) btmg_button_pane

0xe939,	// (0x00074243) main_btmg_pane_g1

0x75ee,	// (0x0006cef8) bg_button_pane_cp044

0x3cc1,	// (0x000695cb) btmg_button_pane_t1

0x2875,	// (0x0006817f) aid_listscroll_gen

0xa69f,	// (0x0006ffa9) main_cntbar_detail_pane

0x560e,	// (0x0006af18) list_cmail_folder_pane

0x561e,	// (0x0006af28) sp_fs_scroll_pane_cp03_ParamLimits

0x74b2,	// (0x0006cdbc) list_single_fs_dyc_pane_cp01_ParamLimits

0x74b2,	// (0x0006cdbc) list_single_fs_dyc_pane_cp01

0x3ccf,	// (0x000695d9) aid_size_cmail_indent

0x74de,	// (0x0006cde8) list_single_dyc_row_pane_cp01

0xe961,	// (0x0007426b) cntbar_detail_list_pane_ParamLimits

0xe961,	// (0x0007426b) cntbar_detail_list_pane

0xe99b,	// (0x000742a5) main_cntbar_detail_cont_pane_ParamLimits

0xe99b,	// (0x000742a5) main_cntbar_detail_cont_pane

0x9642,	// (0x0006ef4c) scroll_pane_cp032_ParamLimits

0x9642,	// (0x0006ef4c) scroll_pane_cp032

0xe9a7,	// (0x000742b1) cntbar_detail_list_event_pane_ParamLimits

0xe9a7,	// (0x000742b1) cntbar_detail_list_event_pane

0xe96d,	// (0x00074277) cntbar_detail_list_shct_pane

0x0d4f,	// (0x00066659) aid_list_gen

0x3ce1,	// (0x000695eb) aid_scroll

0x3cea,	// (0x000695f4) aid_size_touch_scroll_bar

0xd603,	// (0x00072f0d) aid_list_double

0x3cfc,	// (0x00069606) aid_list_single

0x3d05,	// (0x0006960f) aid_list_single_lg

0x74e7,	// (0x0006cdf1) aid_list_z_g_a_sm

0xe9bb,	// (0x000742c5) aid_list_z_g_d

0x74ef,	// (0x0006cdf9) aid_txt_z_prm

0x74fd,	// (0x0006ce07) aid_txt_z_prm_cp01

0x750b,	// (0x0006ce15) aid_txt_z_sec

0xe9c3,	// (0x000742cd) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe9c3,	// (0x000742cd) main_cntbar_detail_cont_pane_g1

0xe9d0,	// (0x000742da) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe9d0,	// (0x000742da) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0007579d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0007579d) main_cntbar_detail_cont_pane_g

0x3d2c,	// (0x00069636) main_cntbar_detail_cont_pane_t1

0x3d3a,	// (0x00069644) main_cntbar_detail_cont_pane_t2

0x3d48,	// (0x00069652) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x000757a2) main_cntbar_detail_cont_pane_t

0xe9dc,	// (0x000742e6) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe9dc,	// (0x000742e6) cell_cntbar_detail_list_shct_pane

0x3d56,	// (0x00069660) cntbar_detail_list_shct_pane_g1

0x3d5f,	// (0x00069669) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x000757a9) cntbar_detail_list_shct_pane_g

0xe9f0,	// (0x000742fa) cntbar_detail_list_event_pane_g1_ParamLimits

0xe9f0,	// (0x000742fa) cntbar_detail_list_event_pane_g1

0xe9fc,	// (0x00074306) cntbar_detail_list_event_pane_g2_ParamLimits

0xe9fc,	// (0x00074306) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x000757ae) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x000757ae) cntbar_detail_list_event_pane_g

0xea68,	// (0x00074372) cntbar_detail_list_event_pane_t1_ParamLimits

0xea68,	// (0x00074372) cntbar_detail_list_event_pane_t1

0xea7d,	// (0x00074387) cntbar_detail_list_event_pane_t2_ParamLimits

0xea7d,	// (0x00074387) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x000757bb) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x000757bb) cntbar_detail_list_event_pane_t

0x2d85,	// (0x0006868f) cell_cntbar_detail_list_shct_pane_g1

0x99e7,	// (0x0006f2f1) navi_pane_mv_g3

0xa69f,	// (0x0006ffa9) main_cntbar_detail_pane_ParamLimits

0x75ee,	// (0x0006cef8) main_notif_wgt_pane

0xc00d,	// (0x00071917) aid_tch_main_mp4_pane_g4

0xc242,	// (0x00071b4c) popup_slider_window_cp02

0x3a3b,	// (0x00069345) list_recal_day_event_pane

0xe941,	// (0x0007424b) cntbar_detail_btn_pane_ParamLimits

0xe941,	// (0x0007424b) cntbar_detail_btn_pane

0xe951,	// (0x0007425b) cntbar_detail_btn_pane_cp01_ParamLimits

0xe951,	// (0x0007425b) cntbar_detail_btn_pane_cp01

0xe96d,	// (0x00074277) cntbar_detail_list_shct_pane_ParamLimits

0xe979,	// (0x00074283) cntbar_detail_pane_g1_ParamLimits

0xe979,	// (0x00074283) cntbar_detail_pane_g1

0xe985,	// (0x0007428f) cntbar_detail_pane_t1_ParamLimits

0xe985,	// (0x0007428f) cntbar_detail_pane_t1

0xea08,	// (0x00074312) cntbar_detail_list_event_pane_g3_ParamLimits

0xea08,	// (0x00074312) cntbar_detail_list_event_pane_g3

0xea20,	// (0x0007432a) cntbar_detail_list_event_pane_g4_ParamLimits

0xea20,	// (0x0007432a) cntbar_detail_list_event_pane_g4

0xea38,	// (0x00074342) cntbar_detail_list_event_pane_g5_ParamLimits

0xea38,	// (0x00074342) cntbar_detail_list_event_pane_g5

0xea50,	// (0x0007435a) cntbar_detail_list_event_pane_g6_ParamLimits

0xea50,	// (0x0007435a) cntbar_detail_list_event_pane_g6

0xea92,	// (0x0007439c) cntbar_detail_list_event_pane_t3_ParamLimits

0xea92,	// (0x0007439c) cntbar_detail_list_event_pane_t3

0xeaa4,	// (0x000743ae) popup_notif_wgt_window_ParamLimits

0xeaa4,	// (0x000743ae) popup_notif_wgt_window

0xeab4,	// (0x000743be) popup_submenu_window_cp01_ParamLimits

0xeab4,	// (0x000743be) popup_submenu_window_cp01

0x1414,	// (0x00066d1e) bg_popup_window_pane_cp10

0x3d68,	// (0x00069672) listscroll_notif_wgt_pane

0x3d72,	// (0x0006967c) list_notif_wgt_window

0x3d7b,	// (0x00069685) scroll_pane_cp033

0x3d84,	// (0x0006968e) list_notif_wgt_row_pane_ParamLimits

0x3d84,	// (0x0006968e) list_notif_wgt_row_pane

0x3d98,	// (0x000696a2) aid_size_list_notif_wgt_del

0x3da1,	// (0x000696ab) list_notif_wgt_row_pane_g1

0x3da9,	// (0x000696b3) list_notif_wgt_row_pane_g2

0x3db1,	// (0x000696bb) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x000757c2) list_notif_wgt_row_pane_g

0x3dba,	// (0x000696c4) list_notif_wgt_row_pane_t1

0x3dc8,	// (0x000696d2) list_notif_wgt_row_pane_t2

0x3dd6,	// (0x000696e0) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x000757c9) list_notif_wgt_row_pane_t

0x46fd,	// (0x0006a007) list_recal_day_event_pane_g1

0x3de4,	// (0x000696ee) list_recal_day_event_pane_t1

0x75ee,	// (0x0006cef8) bg_button_pane_cp045

0x3df3,	// (0x000696fd) cntbar_detail_btn_pane_t1

0x287d,	// (0x00068187) main_callh_pane_ParamLimits

0x287d,	// (0x00068187) main_callh_pane

0x75ee,	// (0x0006cef8) main_coverflow0_pane

0x75ee,	// (0x0006cef8) main_wgtman_pane

0xe136,	// (0x00073a40) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xe136,	// (0x00073a40) main_fs_bigclock_unlock_btn_pane

0x55e8,	// (0x0006aef2) bg_button_pane_cp16

0x55f8,	// (0x0006af02) cell_tport_appsw_pane_g3

0xeac2,	// (0x000743cc) cf0_flow_pane_ParamLimits

0xeac2,	// (0x000743cc) cf0_flow_pane

0x3e01,	// (0x0006970b) listscroll_cf0_pane

0x3e0a,	// (0x00069714) main_cf0_pane_g1

0xead1,	// (0x000743db) main_cf0_pane_t1_ParamLimits

0xead1,	// (0x000743db) main_cf0_pane_t1

0xeae5,	// (0x000743ef) main_cf0_pane_t2_ParamLimits

0xeae5,	// (0x000743ef) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x000757d0) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x000757d0) main_cf0_pane_t

0x3e14,	// (0x0006971e) scroll_pane_cp11

0xeaf9,	// (0x00074403) cf0_flow_pane_g1

0xeb01,	// (0x0007440b) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x000757d5) cf0_flow_pane_g

0xeb09,	// (0x00074413) cf0_flow_pane_t1

0x75ee,	// (0x0006cef8) main_call6_pane

0x75ee,	// (0x0006cef8) main_calllock_pane

0xeb17,	// (0x00074421) call6_btn_grp_pane_ParamLimits

0xeb17,	// (0x00074421) call6_btn_grp_pane

0xeb26,	// (0x00074430) call6_pane_g1_ParamLimits

0xeb26,	// (0x00074430) call6_pane_g1

0xeb35,	// (0x0007443f) popup_call6_1st_window_ParamLimits

0xeb35,	// (0x0007443f) popup_call6_1st_window

0xeb43,	// (0x0007444d) popup_call6_2nd_window_ParamLimits

0xeb43,	// (0x0007444d) popup_call6_2nd_window

0xeb51,	// (0x0007445b) cell_call6_btn_pane_ParamLimits

0xeb51,	// (0x0007445b) cell_call6_btn_pane

0x1414,	// (0x00066d1e) bg_popup_call2_in_pane_cp03

0x3e1f,	// (0x00069729) popup_call6_1st_window_g1

0x3e27,	// (0x00069731) popup_call6_1st_window_g2

0x3e2f,	// (0x00069739) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x000757da) popup_call6_1st_window_g

0x3e37,	// (0x00069741) popup_call6_1st_window_t1

0x3e46,	// (0x00069750) popup_call6_1st_window_t2

0x3e56,	// (0x00069760) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x000757e1) popup_call6_1st_window_t

0x1414,	// (0x00066d1e) bg_popup_call2_in_pane_cp04

0x3e1f,	// (0x00069729) popup_call6_2nd_window_g1

0x3e27,	// (0x00069731) popup_call6_2nd_window_g2

0x3e2f,	// (0x00069739) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x000757da) popup_call6_2nd_window_g

0x3e37,	// (0x00069741) popup_call6_2nd_window_t1

0x75ee,	// (0x0006cef8) bg_button_pane_cp15

0x3e66,	// (0x00069770) cell_call6_btn_pane_g1

0x3e6f,	// (0x00069779) cell_call6_btn_pane_t1

0xeb60,	// (0x0007446a) listscroll_wgtman_pane_ParamLimits

0xeb60,	// (0x0007446a) listscroll_wgtman_pane

0xeb7e,	// (0x00074488) wgtman_btn_pane_ParamLimits

0xeb7e,	// (0x00074488) wgtman_btn_pane

0x12c7,	// (0x00066bd1) aid_scroll_copy1

0x3e7e,	// (0x00069788) list_wgtman_pane

0xebb3,	// (0x000744bd) wgtman_btn_pane_g1_ParamLimits

0xebb3,	// (0x000744bd) wgtman_btn_pane_g1

0xebdb,	// (0x000744e5) wgtman_btn_pane_t1_ParamLimits

0xebdb,	// (0x000744e5) wgtman_btn_pane_t1

0x3e88,	// (0x00069792) wgtman_btn_pane_t2_ParamLimits

0x3e88,	// (0x00069792) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x000757e8) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x000757e8) wgtman_btn_pane_t

0xec12,	// (0x0007451c) listrow_wgtman_pane_ParamLimits

0xec12,	// (0x0007451c) listrow_wgtman_pane

0xec2e,	// (0x00074538) listrow_wgtman_pane_g1

0xec37,	// (0x00074541) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x000757ed) listrow_wgtman_pane_g

0x7519,	// (0x0006ce23) listrow_wgtman_pane_t1

0x7527,	// (0x0006ce31) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x000757f2) listrow_wgtman_pane_t

0x7535,	// (0x0006ce3f) wait_bar_pane_cp09

0x3e9f,	// (0x000697a9) main_calllock_btn_pane

0x3ea9,	// (0x000697b3) main_calllock_pane_g1

0x75ee,	// (0x0006cef8) bg_button_pane_cp17

0x3eb4,	// (0x000697be) main_calllock_btn_pane_g1

0x3ebd,	// (0x000697c7) main_calllock_btn_pane_t1

0x75ee,	// (0x0006cef8) main_dialer3_pane

0x75ee,	// (0x0006cef8) main_fmrd2_pane

0x2d85,	// (0x0006868f) main_fs_bigclock_unlock_btn_pane_g1

0x3ed4,	// (0x000697de) main_fs_bigclock_unlock_btn_pane_t1

0xec41,	// (0x0007454b) area_fmrd2_info_pane_ParamLimits

0xec41,	// (0x0007454b) area_fmrd2_info_pane

0xec4f,	// (0x00074559) area_fmrd2_visual_pane_ParamLimits

0xec4f,	// (0x00074559) area_fmrd2_visual_pane

0xec5d,	// (0x00074567) fmrd2_indi_pane_ParamLimits

0xec5d,	// (0x00074567) fmrd2_indi_pane

0xec6a,	// (0x00074574) area_fmrd2_visual_pane_g1

0xec72,	// (0x0007457c) area_fmrd2_visual_pane_t1

0xec82,	// (0x0007458c) area_fmrd2_visual_pane_t2

0xec92,	// (0x0007459c) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x000757fc) area_fmrd2_visual_pane_t

0xeca2,	// (0x000745ac) area_fmrd2_info_pane_g1

0xecaa,	// (0x000745b4) area_fmrd2_info_pane_t1

0xecba,	// (0x000745c4) area_fmrd2_info_pane_t2

0xecca,	// (0x000745d4) area_fmrd2_info_pane_t3

0xecda,	// (0x000745e4) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x00075803) area_fmrd2_info_pane_t

0xece8,	// (0x000745f2) fmrd2_indi_pane_t1

0xecf8,	// (0x00074602) fmrd2_indi_pane_t2

0xed08,	// (0x00074612) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0007580c) fmrd2_indi_pane_t

0x524c,	// (0x0006ab56) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x524c,	// (0x0006ab56) list_single_fs_bigclock_indicator_pane_g5

0x52f3,	// (0x0006abfd) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x52f3,	// (0x0006abfd) list_single_fs_bigclock_indicator_pane_t5

0xe621,	// (0x00073f2b) aid_cell_bcale_month_pane_ParamLimits

0xe621,	// (0x00073f2b) aid_cell_bcale_month_pane

0xe62d,	// (0x00073f37) bcale_month_pane_ParamLimits

0xe62d,	// (0x00073f37) bcale_month_pane

0xe63d,	// (0x00073f47) bcale_preview_pane_ParamLimits

0xe63d,	// (0x00073f47) bcale_preview_pane

0x3c4f,	// (0x00069559) list_single_fs_bigclock_pane_t1_ParamLimits

0x3c6e,	// (0x00069578) list_single_fs_bigclock_pane_t2_ParamLimits

0x3c6e,	// (0x00069578) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x00075793) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x00075793) list_single_fs_bigclock_pane_t

0x3ecc,	// (0x000697d6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x000757f7) main_fs_bigclock_unlock_btn_pane_g

0xed16,	// (0x00074620) aid_dia3_key_size_ParamLimits

0xed16,	// (0x00074620) aid_dia3_key_size

0xed22,	// (0x0007462c) aid_dia3_listrow_size_ParamLimits

0xed22,	// (0x0007462c) aid_dia3_listrow_size

0xed32,	// (0x0007463c) dia3_keypad_fun_pane_ParamLimits

0xed32,	// (0x0007463c) dia3_keypad_fun_pane

0xed44,	// (0x0007464e) dia3_keypad_num_pane_ParamLimits

0xed44,	// (0x0007464e) dia3_keypad_num_pane

0xed56,	// (0x00074660) dia3_listscroll_pane_ParamLimits

0xed56,	// (0x00074660) dia3_listscroll_pane

0xed64,	// (0x0007466e) dia3_numentry_pane_ParamLimits

0xed64,	// (0x0007466e) dia3_numentry_pane

0x3ee2,	// (0x000697ec) dia3_list_pane

0x3eed,	// (0x000697f7) scroll_pane_cp12

0x75ee,	// (0x0006cef8) bg_dia3_numentry_pane

0xed72,	// (0x0007467c) dia3_numentry_pane_t1

0xed81,	// (0x0007468b) cell_dia3_key_num_pane

0xed89,	// (0x00074693) cell_dia3_key0_fun_pane_ParamLimits

0xed89,	// (0x00074693) cell_dia3_key0_fun_pane

0xed96,	// (0x000746a0) cell_dia3_key1_fun_pane_ParamLimits

0xed96,	// (0x000746a0) cell_dia3_key1_fun_pane

0xeda3,	// (0x000746ad) dia3_listrow_pane

0x4f4d,	// (0x0006a857) bg_dia3_numentry_pane_g1

0x75ee,	// (0x0006cef8) bg_button_pane_cp21

0x3ef8,	// (0x00069802) cell_dia3_key_num_pane_t1

0x3f06,	// (0x00069810) cell_dia3_key_num_pane_t2

0x3f15,	// (0x0006981f) cell_dia3_key_num_pane_t3

0x3f24,	// (0x0006982e) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x00075813) cell_dia3_key_num_pane_t

0x75ee,	// (0x0006cef8) bg_button_pane_cp19

0xedb0,	// (0x000746ba) cell_dia3_key0_fun_pane_g1

0x75ee,	// (0x0006cef8) bg_button_pane_cp20

0xedb8,	// (0x000746c2) cell_dia3_key1_fun_pane_g1

0xedc0,	// (0x000746ca) area_left_week_number_pane

0xedc9,	// (0x000746d3) area_top_day_name_pane

0xedd2,	// (0x000746dc) frame_month_view_pane

0xedde,	// (0x000746e8) grid_month_view_pane

0xede8,	// (0x000746f2) cell_top_day_name_pane_ParamLimits

0xede8,	// (0x000746f2) cell_top_day_name_pane

0xee02,	// (0x0007470c) cell_area_left_week_number_pane_ParamLimits

0xee02,	// (0x0007470c) cell_area_left_week_number_pane

0xee16,	// (0x00074720) cell_month_view_pane_ParamLimits

0xee16,	// (0x00074720) cell_month_view_pane

0x3f33,	// (0x0006983d) frm_month_g1

0xee33,	// (0x0007473d) frm_month_g2

0xee3d,	// (0x00074747) frm_month_g3

0xee47,	// (0x00074751) frm_month_g4

0xee51,	// (0x0007475b) frm_month_g5

0xee5b,	// (0x00074765) frm_month_g6

0xee65,	// (0x0007476f) frm_month_g7

0x3f3c,	// (0x00069846) frm_month_g8

0xee71,	// (0x0007477b) frm_month_g9

0xee7a,	// (0x00074784) frm_month_g10

0xee83,	// (0x0007478d) frm_month_g11

0xee8c,	// (0x00074796) frm_month_g12

0xee95,	// (0x0007479f) frm_month_g13

0xee9e,	// (0x000747a8) frm_month_g14

0xeea7,	// (0x000747b1) frm_month_g15

0xeeb2,	// (0x000747bc) frm_month_g16

0x000f,

0xff12,	// (0x0007581c) frm_month_g

0xeebd,	// (0x000747c7) cell_top_day_name_pane_t1

0xeecc,	// (0x000747d6) cell_area_left_week_number_pane_g1

0xeebd,	// (0x000747c7) cell_area_left_week_number_pane_t1

0x2d85,	// (0x0006868f) cell_month_view_pane_g1

0xeed4,	// (0x000747de) cell_month_view_pane_t1

0x75ee,	// (0x0006cef8) main_fps_pane

0x54e3,	// (0x0006aded) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x54e3,	// (0x0006aded) cmail_ddmenu_btn02_pane_cp1

0x54ff,	// (0x0006ae09) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x54ff,	// (0x0006ae09) cmail_ddmenu_btn02_pane_cp2

0xe835,	// (0x0007413f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe835,	// (0x0007413f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x00075746) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x00075746) cmail_ddmenu_btn02_pane_g

0xe853,	// (0x0007415d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe853,	// (0x0007415d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x0007574b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x0007574b) cmail_ddmenu_btn02_pane_t

0xeee3,	// (0x000747ed) fps_text_pane_ParamLimits

0xeee3,	// (0x000747ed) fps_text_pane

0xeef0,	// (0x000747fa) main_fps_pane_g1_ParamLimits

0xeef0,	// (0x000747fa) main_fps_pane_g1

0xeefe,	// (0x00074808) wait_bar_pane_cp010_ParamLimits

0xeefe,	// (0x00074808) wait_bar_pane_cp010

0xef0a,	// (0x00074814) fps_text_pane_t1_ParamLimits

0xef0a,	// (0x00074814) fps_text_pane_t1

0xc626,	// (0x00071f30) cam4_image_uncrop_pane_g1

0xc62f,	// (0x00071f39) cam4_image_uncrop_pane_g2

0xc638,	// (0x00071f42) cam4_image_uncrop_pane_g3

0xc641,	// (0x00071f4b) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00075212) cam4_image_uncrop_pane_g

0xeda3,	// (0x000746ad) dia3_listrow_pane_ParamLimits

0x75ee,	// (0x0006cef8) main_phob2_pane

0xe472,	// (0x00073d7c) cell_tport_appsw_pane_cp02_ParamLimits

0xe472,	// (0x00073d7c) cell_tport_appsw_pane_cp02

0xe481,	// (0x00073d8b) cell_tport_appsw_pane_cp03_ParamLimits

0xe481,	// (0x00073d8b) cell_tport_appsw_pane_cp03

0x75ee,	// (0x0006cef8) phob2_contact_card_pane

0x75ee,	// (0x0006cef8) phob2_listscroll_pane

0x3f45,	// (0x0006984f) phob2_list_pane

0x3f4d,	// (0x00069857) scroll_pane_cp034

0xef23,	// (0x0007482d) phob2_cc_data_pane_ParamLimits

0xef23,	// (0x0007482d) phob2_cc_data_pane

0xef3d,	// (0x00074847) phob2_cc_listscroll_pane_ParamLimits

0xef3d,	// (0x00074847) phob2_cc_listscroll_pane

0xef57,	// (0x00074861) list_double_large_graphic_phob2_pane_ParamLimits

0xef57,	// (0x00074861) list_double_large_graphic_phob2_pane

0xef7a,	// (0x00074884) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xef7a,	// (0x00074884) list_double_large_graphic_phob2_pane_g1

0xef87,	// (0x00074891) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef87,	// (0x00074891) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0007583d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0007583d) list_double_large_graphic_phob2_pane_g

0x753d,	// (0x0006ce47) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x753d,	// (0x0006ce47) list_double_large_graphic_phob2_pane_t1

0x7552,	// (0x0006ce5c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7552,	// (0x0006ce5c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x00075842) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x00075842) list_double_large_graphic_phob2_pane_t

0x75ee,	// (0x0006cef8) list_highlight_pane_cp024

0x3f55,	// (0x0006985f) phob2_cc_button_pane

0xef93,	// (0x0007489d) phob2_cc_data_pane_g1_ParamLimits

0xef93,	// (0x0007489d) phob2_cc_data_pane_g1

0xef9f,	// (0x000748a9) phob2_cc_data_pane_g2_ParamLimits

0xef9f,	// (0x000748a9) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x00075847) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x00075847) phob2_cc_data_pane_g

0xefab,	// (0x000748b5) phob2_cc_data_pane_t1_ParamLimits

0xefab,	// (0x000748b5) phob2_cc_data_pane_t1

0xefbd,	// (0x000748c7) phob2_cc_data_pane_t2_ParamLimits

0xefbd,	// (0x000748c7) phob2_cc_data_pane_t2

0xefcf,	// (0x000748d9) phob2_cc_data_pane_t3_ParamLimits

0xefcf,	// (0x000748d9) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0007584c) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0007584c) phob2_cc_data_pane_t

0x3f5d,	// (0x00069867) phob2_cc_list_pane_ParamLimits

0x3f5d,	// (0x00069867) phob2_cc_list_pane

0x4e5c,	// (0x0006a766) scroll_pane_cp035_ParamLimits

0x4e5c,	// (0x0006a766) scroll_pane_cp035

0xa69f,	// (0x0006ffa9) bg_button_pane_cp033

0x3f69,	// (0x00069873) phob2_cc_button_pane_g1

0x3f75,	// (0x0006987f) phob2_cc_button_pane_t1

0x3f8a,	// (0x00069894) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x00075853) phob2_cc_button_pane_t

0xefe1,	// (0x000748eb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xefe1,	// (0x000748eb) list_double_large_graphic_phob2_cc_pane

0xf011,	// (0x0007491b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf011,	// (0x0007491b) list_double_large_graphic_phob2_cc_pane_g1

0xf022,	// (0x0007492c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf022,	// (0x0007492c) list_double_large_graphic_phob2_cc_pane_g2

0xf031,	// (0x0007493b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf031,	// (0x0007493b) list_double_large_graphic_phob2_cc_pane_g3

0x7564,	// (0x0006ce6e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x7564,	// (0x0006ce6e) list_double_large_graphic_phob2_cc_pane_g4

0x7575,	// (0x0006ce7f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x7575,	// (0x0006ce7f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x00075858) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x00075858) list_double_large_graphic_phob2_cc_pane_g

0x7584,	// (0x0006ce8e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x7584,	// (0x0006ce8e) list_double_large_graphic_phob2_cc_pane_t1

0x75ad,	// (0x0006ceb7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x75ad,	// (0x0006ceb7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x00075863) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x00075863) list_double_large_graphic_phob2_cc_pane_t

0x3f9c,	// (0x000698a6) list_highlight_pane_cp025_ParamLimits

0x3f9c,	// (0x000698a6) list_highlight_pane_cp025

0xa69f,	// (0x0006ffa9) bg_button_pane_cp033_ParamLimits

0x3f69,	// (0x00069873) phob2_cc_button_pane_g1_ParamLimits

0x3f75,	// (0x0006987f) phob2_cc_button_pane_t1_ParamLimits

0x3f8a,	// (0x00069894) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x00075853) phob2_cc_button_pane_t_ParamLimits

0x78ab,	// (0x0006d1b5) popup_wgtman_window

0x45d9,	// (0x00069ee3) scroll_pane_cp038

0xeb9b,	// (0x000744a5) wgtman_btn_pane_cp_01_ParamLimits

0xeb9b,	// (0x000744a5) wgtman_btn_pane_cp_01

0x3faa,	// (0x000698b4) wgtman_content_pane

0x3cf3,	// (0x000695fd) wgtman_heading_pane

0x75ee,	// (0x0006cef8) bg_heading_pane_cp02

0x3fb3,	// (0x000698bd) wgtman_heading_pane_g1

0x3fbb,	// (0x000698c5) wgtman_heading_pane_t1

0x3fc9,	// (0x000698d3) scroll_pane_cp036

0x3fd1,	// (0x000698db) wgtman_list_pane

0x3fd9,	// (0x000698e3) wgtman_list_pane_t1_ParamLimits

0x3fd9,	// (0x000698e3) wgtman_list_pane_t1

0xc585,	// (0x00071e8f) cam4_grid_pane

0x6996,	// (0x0006c2a0) bg_button_pane_cp015_ParamLimits

0xd22a,	// (0x00072b34) bg_button_pane_cp016_ParamLimits

0xd23d,	// (0x00072b47) bg_button_pane_cp017_ParamLimits

0x69c9,	// (0x0006c2d3) popup_vitu2_query_window_g3_ParamLimits

0x69c9,	// (0x0006c2d3) popup_vitu2_query_window_g3

0x6a42,	// (0x0006c34c) popup_vitu2_query_window_t6_ParamLimits

0x6a42,	// (0x0006c34c) popup_vitu2_query_window_t6

0x6a6d,	// (0x0006c377) popup_vitu2_query_window_t7_ParamLimits

0x6a6d,	// (0x0006c377) popup_vitu2_query_window_t7

0x377f,	// (0x00069089) cam4_grid_pane_g1

0x3788,	// (0x00069092) cam4_grid_pane_g2

0x3ffb,	// (0x00069905) cam4_grid_pane_g3

0x4004,	// (0x0006990e) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x00075868) cam4_grid_pane_g

0x85a3,	// (0x0006dead) aid_placing_vt_slider_lsc_ParamLimits

0x88e3,	// (0x0006e1ed) vidtel_button_pane_ParamLimits

0x88e3,	// (0x0006e1ed) vidtel_button_pane

0x400f,	// (0x00069919) bg_button_pane_cp034

0xf040,	// (0x0007494a) vidtel_button_pane_g1

0x4019,	// (0x00069923) vidtel_button_pane_t1

0x46db,	// (0x00069fe5) aid_size_vtel_slider_touch

0x4e5c,	// (0x0006a766) scroll_pane_cp039

0x4f8b,	// (0x0006a895) ncim_query_button_pane_cp01_ParamLimits

0x4faa,	// (0x0006a8b4) ncimui_query_pane_g1_ParamLimits

0xa69f,	// (0x0006ffa9) input_focus_pane_cp012_ParamLimits

0x4fcf,	// (0x0006a8d9) ncim_query_entry_pane_t1_ParamLimits

0x4e5c,	// (0x0006a766) scroll_pane_cp039_ParamLimits

0x9959,	// (0x0006f263) navi_pane_bcale_mc_g1

0x9961,	// (0x0006f26b) navi_pane_bcale_mc_t1

0x553c,	// (0x0006ae46) main_sp_fs_email_pane_g1

0x5544,	// (0x0006ae4e) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x00075604) main_sp_fs_email_pane_g

0x38f2,	// (0x000691fc) list_single_cale_mrui_row_pane_g3_ParamLimits

0x38f2,	// (0x000691fc) list_single_cale_mrui_row_pane_g3

0xe87b,	// (0x00074185) list_single_recal_day_pane_g5_event_pane

0x3aae,	// (0x000693b8) list_single_recal_day_pane_g7

0x4027,	// (0x00069931) list_recal_day_event_pane_cp01

0x4030,	// (0x0006993a) list_recal_vselct_arw_lo_pane_cp01

0x4038,	// (0x00069942) list_recal_vselct_arw_up_pane_cp01

0x4040,	// (0x0006994a) list_recal_vselct_pane_cp01

0x46fd,	// (0x0006a007) list_recal_day_event_pane_cp01_g1

0x404a,	// (0x00069954) list_recal_day_event_pane_cp01_t1

0x3ab6,	// (0x000693c0) list_single_recal_day_pane_t1_ParamLimits

0x3ac8,	// (0x000693d2) list_single_recal_day_pane_t2_ParamLimits

0xfe51,	// (0x0007575b) list_single_recal_day_pane_t_ParamLimits

0x07ab,	// (0x000660b5) bg_notes_pane_ParamLimits

0x07b9,	// (0x000660c3) list_notes_pane_ParamLimits

0x7bde,	// (0x0006d4e8) scroll_pane_cp06_ParamLimits

0x07ff,	// (0x00066109) main_notes_pane_ParamLimits

0x75ee,	// (0x0006cef8) main_welc_pane

0xf048,	// (0x00074952) main_welc_body_pane_ParamLimits

0xf048,	// (0x00074952) main_welc_body_pane

0xf056,	// (0x00074960) main_welc_opti_pane_ParamLimits

0xf056,	// (0x00074960) main_welc_opti_pane

0xf065,	// (0x0007496f) main_welc_pane_t1_ParamLimits

0xf065,	// (0x0007496f) main_welc_pane_t1

0xf079,	// (0x00074983) main_welc_body_row_pane_ParamLimits

0xf079,	// (0x00074983) main_welc_body_row_pane

0xf0aa,	// (0x000749b4) main_welc_opti_row_pane_ParamLimits

0xf0aa,	// (0x000749b4) main_welc_opti_row_pane

0x4058,	// (0x00069962) main_welc_opti_row_pane_g1

0x4060,	// (0x0006996a) main_welc_opti_row_pane_t1

0x406f,	// (0x00069979) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large

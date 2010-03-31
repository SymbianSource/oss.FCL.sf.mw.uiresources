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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006af4b };

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
0x029b,	// (0x0006b1e6) Screen

0x02a7,	// (0x0006b1f2) application_window

0x02e3,	// (0x0006b22e) area_bottom_pane_ParamLimits

0x02e3,	// (0x0006b22e) area_bottom_pane

0x031c,	// (0x0006b267) area_top_pane_ParamLimits

0x031c,	// (0x0006b267) area_top_pane

0x957c,	// (0x000744c7) call_video_uplink_pane_ParamLimits

0x957c,	// (0x000744c7) call_video_uplink_pane

0x03aa,	// (0x0006b2f5) main_pane_ParamLimits

0x03aa,	// (0x0006b2f5) main_pane

0xce5b,	// (0x00077da6) context_pane

0x39ec,	// (0x0006e937) navi_pane

0x3a1e,	// (0x0006e969) popup_cale_events_window_ParamLimits

0x3a1e,	// (0x0006e969) popup_cale_events_window

0xce6e,	// (0x00077db9) popup_mup_playback_window

0x3a36,	// (0x0006e981) signal_pane

0xadb7,	// (0x00075d02) main_browser_pane

0xba44,	// (0x0007698f) main_burst_pane

0x373a,	// (0x0006e685) main_calc_pane

0xce41,	// (0x00077d8c) main_cale_day_pane

0x374e,	// (0x0006e699) main_cale_month_pane

0xce41,	// (0x00077d8c) main_cale_week_pane

0xba44,	// (0x0007698f) main_call_pane

0xaa97,	// (0x000759e2) main_call_poc_pane

0xba44,	// (0x0007698f) main_camera_pane

0xba44,	// (0x0007698f) main_chi_dic_pane

0xb7c1,	// (0x0007670c) main_clock_pane

0xaa97,	// (0x000759e2) main_fmradio_pane

0xba44,	// (0x0007698f) main_graph_messa_pane

0xaa97,	// (0x000759e2) main_help_pane

0xadb7,	// (0x00075d02) main_im_pane

0xacf2,	// (0x00075c3d) main_image_pane_ParamLimits

0xacf2,	// (0x00075c3d) main_image_pane

0xaa97,	// (0x000759e2) main_location2_pane

0xba44,	// (0x0007698f) main_location_pane

0xacf2,	// (0x00075c3d) main_messa_pane

0xaa97,	// (0x000759e2) main_mp2_pane

0xba44,	// (0x0007698f) main_mp_pane

0xaa97,	// (0x000759e2) main_msg_pane

0xaa97,	// (0x000759e2) main_mup_eq_pane

0xaa97,	// (0x000759e2) main_mup_pane

0xadb7,	// (0x00075d02) main_notes_pane

0xaa97,	// (0x000759e2) main_pec_pane

0xaa97,	// (0x000759e2) main_phob_pane

0xaa97,	// (0x000759e2) main_pinb_pane

0xaa97,	// (0x000759e2) main_postcard_pane

0xaa97,	// (0x000759e2) main_qdial_pane

0xba44,	// (0x0007698f) main_skin_pane

0xaa97,	// (0x000759e2) main_smil2_pane

0xba44,	// (0x0007698f) main_smil_pane

0xba44,	// (0x0007698f) main_video_pane

0xba44,	// (0x0007698f) main_video_tele_pane

0xacf2,	// (0x00075c3d) main_viewer_pane_ParamLimits

0xacf2,	// (0x00075c3d) main_viewer_pane

0xba44,	// (0x0007698f) main_vorec_pane

0x37a0,	// (0x0006e6eb) popup_blid_sat_info_window_ParamLimits

0x37a0,	// (0x0006e6eb) popup_blid_sat_info_window

0x37f8,	// (0x0006e743) popup_dyc_status_message_window_ParamLimits

0x37f8,	// (0x0006e743) popup_dyc_status_message_window

0x3812,	// (0x0006e75d) popup_grid_large_graphic_window_ParamLimits

0x3812,	// (0x0006e75d) popup_grid_large_graphic_window

0x38ce,	// (0x0006e819) popup_loc_request_window_ParamLimits

0x38ce,	// (0x0006e819) popup_loc_request_window

0x39c4,	// (0x0006e90f) popup_wml_address_window_ParamLimits

0x39c4,	// (0x0006e90f) popup_wml_address_window

0x3574,	// (0x0006e4bf) call_muted_g1

0x3229,	// (0x0006e174) popup_call_audio_conf_window_ParamLimits

0x3229,	// (0x0006e174) popup_call_audio_conf_window

0x3588,	// (0x0006e4d3) popup_call_audio_first_window_ParamLimits

0x3588,	// (0x0006e4d3) popup_call_audio_first_window

0x35fe,	// (0x0006e549) popup_call_audio_in_window_ParamLimits

0x35fe,	// (0x0006e549) popup_call_audio_in_window

0x363a,	// (0x0006e585) popup_call_audio_out_window_ParamLimits

0x363a,	// (0x0006e585) popup_call_audio_out_window

0x3674,	// (0x0006e5bf) popup_call_audio_second_window_ParamLimits

0x3674,	// (0x0006e5bf) popup_call_audio_second_window

0x36ca,	// (0x0006e615) popup_call_audio_wait_window_ParamLimits

0x36ca,	// (0x0006e615) popup_call_audio_wait_window

0x36ff,	// (0x0006e64a) popup_number_entry_window_ParamLimits

0x36ff,	// (0x0006e64a) popup_number_entry_window

0x9f09,	// (0x00074e54) bg_popup_call_pane_cp05_ParamLimits

0x9f09,	// (0x00074e54) bg_popup_call_pane_cp05

0x9f29,	// (0x00074e74) popup_number_entry_window_t1

0x9f3c,	// (0x00074e87) popup_number_entry_window_t2

0x9f4e,	// (0x00074e99) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0007a018) popup_number_entry_window_t

0x9f60,	// (0x00074eab) text_title_cp2

0x9f73,	// (0x00074ebe) bg_popup_call_pane_cp_ParamLimits

0x9f73,	// (0x00074ebe) bg_popup_call_pane_cp

0x9f81,	// (0x00074ecc) call_thumbnail_pane

0x9f89,	// (0x00074ed4) popup_call_audio_in_window_g1_ParamLimits

0x9f89,	// (0x00074ed4) popup_call_audio_in_window_g1

0x9f95,	// (0x00074ee0) popup_call_audio_in_window_g2_ParamLimits

0x9f95,	// (0x00074ee0) popup_call_audio_in_window_g2

0x9fa1,	// (0x00074eec) popup_call_audio_in_window_g3_ParamLimits

0x9fa1,	// (0x00074eec) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0007a021) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0007a021) popup_call_audio_in_window_g

0x9fad,	// (0x00074ef8) popup_call_audio_in_window_t1_ParamLimits

0x9fad,	// (0x00074ef8) popup_call_audio_in_window_t1

0x9fc9,	// (0x00074f14) popup_call_audio_in_window_t2_ParamLimits

0x9fc9,	// (0x00074f14) popup_call_audio_in_window_t2

0x9fe5,	// (0x00074f30) popup_call_audio_in_window_t3_ParamLimits

0x9fe5,	// (0x00074f30) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0007a028) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0007a028) popup_call_audio_in_window_t

0x9f73,	// (0x00074ebe) bg_popup_call_pane_cp01_ParamLimits

0x9f73,	// (0x00074ebe) bg_popup_call_pane_cp01

0x9f81,	// (0x00074ecc) call_thumbnail_pane_cp02

0x9ff8,	// (0x00074f43) call_type_pane_cp022

0xa000,	// (0x00074f4b) popup_call_audio_out_window_g1_ParamLimits

0xa000,	// (0x00074f4b) popup_call_audio_out_window_g1

0xa012,	// (0x00074f5d) popup_call_audio_out_window_g2_ParamLimits

0xa012,	// (0x00074f5d) popup_call_audio_out_window_g2

0xa01e,	// (0x00074f69) popup_call_audio_out_window_g3_ParamLimits

0xa01e,	// (0x00074f69) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0007a02f) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0007a02f) popup_call_audio_out_window_g

0xa030,	// (0x00074f7b) popup_call_audio_out_window_t1_ParamLimits

0xa030,	// (0x00074f7b) popup_call_audio_out_window_t1

0xa048,	// (0x00074f93) popup_call_audio_out_window_t2_ParamLimits

0xa048,	// (0x00074f93) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0007a036) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0007a036) popup_call_audio_out_window_t

0xa05d,	// (0x00074fa8) bg_popup_call_pane_ParamLimits

0xa05d,	// (0x00074fa8) bg_popup_call_pane

0x0566,	// (0x0006b4b1) call_thumbnail_pane_cp_ParamLimits

0x0566,	// (0x0006b4b1) call_thumbnail_pane_cp

0xa0e1,	// (0x0007502c) call_type_pane_cp01_ParamLimits

0xa0e1,	// (0x0007502c) call_type_pane_cp01

0xa125,	// (0x00075070) popup_call_audio_first_window_g1_ParamLimits

0xa125,	// (0x00075070) popup_call_audio_first_window_g1

0xa8ec,	// (0x00075837) popup_call_audio_first_window_g2_ParamLimits

0xa8ec,	// (0x00075837) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0007a03b) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0007a03b) popup_call_audio_first_window_g

0xa930,	// (0x0007587b) popup_call_audio_first_window_t1_ParamLimits

0xa930,	// (0x0007587b) popup_call_audio_first_window_t1

0xa9dc,	// (0x00075927) popup_call_audio_first_window_t4_ParamLimits

0xa9dc,	// (0x00075927) popup_call_audio_first_window_t4

0xaa68,	// (0x000759b3) popup_call_audio_first_window_t5_ParamLimits

0xaa68,	// (0x000759b3) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0007a040) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0007a040) popup_call_audio_first_window_t

0xaa97,	// (0x000759e2) bg_popup_call_pane_cp02

0xaaa1,	// (0x000759ec) call_type_pane_cp023

0xaaa9,	// (0x000759f4) popup_call_audio_wait_window_g1

0xaab1,	// (0x000759fc) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0007a047) popup_call_audio_wait_window_g

0xaab9,	// (0x00075a04) popup_call_audio_wait_window_t3

0xaac7,	// (0x00075a12) bg_popup_call_pane_cp03_ParamLimits

0xaac7,	// (0x00075a12) bg_popup_call_pane_cp03

0xab27,	// (0x00075a72) call_thumbnail_pane_cp011_ParamLimits

0xab27,	// (0x00075a72) call_thumbnail_pane_cp011

0xab33,	// (0x00075a7e) call_type_pane_cp034_ParamLimits

0xab33,	// (0x00075a7e) call_type_pane_cp034

0xab6f,	// (0x00075aba) popup_call_audio_second_window_g1_ParamLimits

0xab6f,	// (0x00075aba) popup_call_audio_second_window_g1

0xabab,	// (0x00075af6) popup_call_audio_second_window_g2_ParamLimits

0xabab,	// (0x00075af6) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0007a04c) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0007a04c) popup_call_audio_second_window_g

0xabe7,	// (0x00075b32) popup_call_audio_second_window_t1_ParamLimits

0xabe7,	// (0x00075b32) popup_call_audio_second_window_t1

0xac68,	// (0x00075bb3) popup_call_audio_second_window_t2_ParamLimits

0xac68,	// (0x00075bb3) popup_call_audio_second_window_t2

0xac9e,	// (0x00075be9) popup_call_audio_second_window_t3_ParamLimits

0xac9e,	// (0x00075be9) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0007a051) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0007a051) popup_call_audio_second_window_t

0xaa97,	// (0x000759e2) bg_popup_call_pane_cp04

0xacd4,	// (0x00075c1f) list_conf_pane

0xacdc,	// (0x00075c27) popup_call_audio_conf_window_t1

0xacea,	// (0x00075c35) call_thumbnail_pane_g1

0xacf2,	// (0x00075c3d) bg_pinb_pane_ParamLimits

0xacf2,	// (0x00075c3d) bg_pinb_pane

0xad00,	// (0x00075c4b) find_pinb_pane

0xad09,	// (0x00075c54) listscroll_pinb_pane_ParamLimits

0xad09,	// (0x00075c54) listscroll_pinb_pane

0xad18,	// (0x00075c63) pinb_bg_pane_g1

0x058a,	// (0x0006b4d5) pinb_bg_pane_g2

0x0596,	// (0x0006b4e1) pinb_bg_pane_g3

0x05a2,	// (0x0006b4ed) pinb_bg_pane_g4

0x05ae,	// (0x0006b4f9) pinb_bg_pane_g5

0x05ba,	// (0x0006b505) pinb_bg_pane_g6

0x05c5,	// (0x0006b510) pinb_bg_pane_g7

0x05d0,	// (0x0006b51b) pinb_bg_pane_g8

0x05db,	// (0x0006b526) pinb_bg_pane_g9

0x05e5,	// (0x0006b530) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0007a058) pinb_bg_pane_g

0x0602,	// (0x0006b54d) grid_pinb_pane

0x060b,	// (0x0006b556) list_pinb_pane

0x0614,	// (0x0006b55f) scroll_pane_cp01_ParamLimits

0x0614,	// (0x0006b55f) scroll_pane_cp01

0xad22,	// (0x00075c6d) find_pinb_pane_g1_ParamLimits

0xad22,	// (0x00075c6d) find_pinb_pane_g1

0xad3a,	// (0x00075c85) find_pinb_pane_t1

0xad4c,	// (0x00075c97) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0007a072) find_pinb_pane_t

0xad61,	// (0x00075cac) input_focus_pane_cp01_ParamLimits

0xad61,	// (0x00075cac) input_focus_pane_cp01

0x0626,	// (0x0006b571) cell_pinb_pane_ParamLimits

0x0626,	// (0x0006b571) cell_pinb_pane

0x064f,	// (0x0006b59a) cell_pinb_pane_g1_ParamLimits

0x064f,	// (0x0006b59a) cell_pinb_pane_g1

0x065f,	// (0x0006b5aa) cell_pinb_pane_g2_ParamLimits

0x065f,	// (0x0006b5aa) cell_pinb_pane_g2

0xad6d,	// (0x00075cb8) cell_pinb_pane_g3_ParamLimits

0xad6d,	// (0x00075cb8) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0007a077) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0007a077) cell_pinb_pane_g

0xaa97,	// (0x000759e2) grid_highlight_pane_cp01

0x066b,	// (0x0006b5b6) list_pinb_item_pane_ParamLimits

0x066b,	// (0x0006b5b6) list_pinb_item_pane

0xaa97,	// (0x000759e2) list_highlight_pane_cp02

0x067d,	// (0x0006b5c8) list_pinb_item_pane_g1_ParamLimits

0x067d,	// (0x0006b5c8) list_pinb_item_pane_g1

0x068a,	// (0x0006b5d5) list_pinb_item_pane_g2_ParamLimits

0x068a,	// (0x0006b5d5) list_pinb_item_pane_g2

0x0696,	// (0x0006b5e1) list_pinb_item_pane_g3_ParamLimits

0x0696,	// (0x0006b5e1) list_pinb_item_pane_g3

0x06a7,	// (0x0006b5f2) list_pinb_item_pane_g4_ParamLimits

0x06a7,	// (0x0006b5f2) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0007a07e) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0007a07e) list_pinb_item_pane_g

0x06b3,	// (0x0006b5fe) list_pinb_item_pane_t1_ParamLimits

0x06b3,	// (0x0006b5fe) list_pinb_item_pane_t1

0x06e8,	// (0x0006b633) calc_display_pane

0x0710,	// (0x0006b65b) calc_paper_pane

0x0733,	// (0x0006b67e) grid_calc_pane

0xaa97,	// (0x000759e2) bg_list_pane_cp01

0x0761,	// (0x0006b6ac) clock_g1

0x0769,	// (0x0006b6b4) clock_g2

0x0001,

0xf13c,	// (0x0007a087) clock_g

0x0771,	// (0x0006b6bc) clock_t1_ParamLimits

0x0771,	// (0x0006b6bc) clock_t1

0x0786,	// (0x0006b6d1) clock_t2_ParamLimits

0x0786,	// (0x0006b6d1) clock_t2

0x0798,	// (0x0006b6e3) clock_t3_ParamLimits

0x0798,	// (0x0006b6e3) clock_t3

0x07aa,	// (0x0006b6f5) clock_t4_ParamLimits

0x07aa,	// (0x0006b6f5) clock_t4

0x07bc,	// (0x0006b707) clock_t5_ParamLimits

0x07bc,	// (0x0006b707) clock_t5

0x07d1,	// (0x0006b71c) clock_t6_ParamLimits

0x07d1,	// (0x0006b71c) clock_t6

0x07e3,	// (0x0006b72e) clock_t7_ParamLimits

0x07e3,	// (0x0006b72e) clock_t7

0x07f5,	// (0x0006b740) clock_t8_ParamLimits

0x07f5,	// (0x0006b740) clock_t8

0x0809,	// (0x0006b754) clock_t9_ParamLimits

0x0809,	// (0x0006b754) clock_t9

0x0008,

0xf141,	// (0x0007a08c) clock_t_ParamLimits

0xf141,	// (0x0007a08c) clock_t

0xad79,	// (0x00075cc4) popup_clock_analogue_window_cp02

0xad79,	// (0x00075cc4) popup_clock_digital_window_cp01

0xad81,	// (0x00075ccc) listscroll_help_pane

0xaa97,	// (0x000759e2) phob_pre_status_pane

0xad8b,	// (0x00075cd6) grid_qdial_pane

0xacf2,	// (0x00075c3d) listscroll_mce_pane

0xacf2,	// (0x00075c3d) bg_notes_pane

0xad95,	// (0x00075ce0) list_notes_pane

0x081d,	// (0x0006b768) scroll_pane_cp06

0xada3,	// (0x00075cee) bg_calc_paper_pane

0x95ba,	// (0x00074505) list_calc_pane

0xadb7,	// (0x00075d02) bg_calc_display_pane

0x0831,	// (0x0006b77c) calc_display_pane_t1

0x0843,	// (0x0006b78e) calc_display_pane_t2

0x95d4,	// (0x0007451f) calc_display_pane_t3

0x0002,

0xf154,	// (0x0007a09f) calc_display_pane_t

0x0855,	// (0x0006b7a0) cell_calc_pane_ParamLimits

0x0855,	// (0x0006b7a0) cell_calc_pane

0xadc3,	// (0x00075d0e) bg_calc_paper_pane_g1

0xadcf,	// (0x00075d1a) bg_calc_paper_pane_g2

0xaddb,	// (0x00075d26) bg_calc_paper_pane_g3

0xade7,	// (0x00075d32) bg_calc_paper_pane_g4

0xadf3,	// (0x00075d3e) bg_calc_paper_pane_g5

0x088a,	// (0x0006b7d5) bg_calc_paper_pane_g6

0x0899,	// (0x0006b7e4) bg_calc_paper_pane_g7

0x08a8,	// (0x0006b7f3) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0007a0a6) bg_calc_paper_pane_g

0x08bb,	// (0x0006b806) calc_bg_paper_pane_g9

0x08ce,	// (0x0006b819) list_calc_item_pane_ParamLimits

0x08ce,	// (0x0006b819) list_calc_item_pane

0xadff,	// (0x00075d4a) list_calc_item_pane_g1

0x95e6,	// (0x00074531) list_calc_item_pane_t1_ParamLimits

0x95e6,	// (0x00074531) list_calc_item_pane_t1

0x08e3,	// (0x0006b82e) list_calc_item_pane_t2_ParamLimits

0x08e3,	// (0x0006b82e) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0007a0b7) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0007a0b7) list_calc_item_pane_t

0xae0c,	// (0x00075d57) cell_calc_pane_g1

0xae16,	// (0x00075d61) grid_highlight_pane_cp02

0x0915,	// (0x0006b860) bg_calc_display_pane_g1

0x091e,	// (0x0006b869) bg_calc_display_pane_g2

0x0928,	// (0x0006b873) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0007a0c1) bg_calc_display_pane_g

0x0931,	// (0x0006b87c) cell_qdial_pane_ParamLimits

0x0931,	// (0x0006b87c) cell_qdial_pane

0x0945,	// (0x0006b890) cell_qdial_pane_g1_ParamLimits

0x0945,	// (0x0006b890) cell_qdial_pane_g1

0x095b,	// (0x0006b8a6) cell_qdial_pane_g2_ParamLimits

0x095b,	// (0x0006b8a6) cell_qdial_pane_g2

0xae38,	// (0x00075d83) cell_qdial_pane_g3_ParamLimits

0xae38,	// (0x00075d83) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0007a0c8) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0007a0c8) cell_qdial_pane_g

0x0982,	// (0x0006b8cd) cell_qdial_pane_t1_ParamLimits

0x0982,	// (0x0006b8cd) cell_qdial_pane_t1

0x099a,	// (0x0006b8e5) cell_qdial_pane_t2_ParamLimits

0x099a,	// (0x0006b8e5) cell_qdial_pane_t2

0x09ad,	// (0x0006b8f8) cell_qdial_pane_t3_ParamLimits

0x09ad,	// (0x0006b8f8) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0007a0d1) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0007a0d1) cell_qdial_pane_t

0xaa97,	// (0x000759e2) grid_highlight_pane_cp04

0xae44,	// (0x00075d8f) thumbnail_qdial_pane_ParamLimits

0xae44,	// (0x00075d8f) thumbnail_qdial_pane

0xaea0,	// (0x00075deb) list_help_pane

0xaea9,	// (0x00075df4) scroll_pane_cp02

0x09c0,	// (0x0006b90b) help_list_pane_t1_ParamLimits

0x09c0,	// (0x0006b90b) help_list_pane_t1

0x95f8,	// (0x00074543) bg_notes_pane_g2

0x9600,	// (0x0007454b) bg_notes_pane_g3

0x9608,	// (0x00074553) notes_bg_pane_g1

0x9610,	// (0x0007455b) notes_bg_pane_g4

0x9618,	// (0x00074563) notes_bg_pane_g5

0x9620,	// (0x0007456b) notes_bg_pane_g6

0x9628,	// (0x00074573) notes_bg_pane_g7

0x9630,	// (0x0007457b) notes_bg_pane_g8

0x9638,	// (0x00074583) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0007a0ef) notes_bg_pane_g

0x09dd,	// (0x0006b928) list_notes_text_pane_ParamLimits

0x09dd,	// (0x0006b928) list_notes_text_pane

0xaeb2,	// (0x00075dfd) list_notes_text_pane_g1

0x09f2,	// (0x0006b93d) list_notes_text_pane_t1

0x0a00,	// (0x0006b94b) listscroll_cale_week_pane

0x0a2c,	// (0x0006b977) bg_cale_heading_pane

0xaed5,	// (0x00075e20) bg_cale_pane_cp01

0x0a44,	// (0x0006b98f) cale_week_corner_pane

0x0a63,	// (0x0006b9ae) cale_week_day_heading_pane

0x0a80,	// (0x0006b9cb) cale_week_scroll_pane_g1

0x0a93,	// (0x0006b9de) cale_week_scroll_pane_g2

0x0aab,	// (0x0006b9f6) cale_week_scroll_pane_g3

0x0ac3,	// (0x0006ba0e) cale_week_scroll_pane_g4

0x0adb,	// (0x0006ba26) cale_week_scroll_pane_g5

0x0afb,	// (0x0006ba46) cale_week_scroll_pane_g6

0x0b1b,	// (0x0006ba66) cale_week_scroll_pane_g7

0x0b3b,	// (0x0006ba86) cale_week_scroll_pane_g8

0x0b5f,	// (0x0006baaa) cale_week_scroll_pane_g9

0x0b77,	// (0x0006bac2) cale_week_scroll_pane_g10

0x0b8f,	// (0x0006bada) cale_week_scroll_pane_g11

0x0ba7,	// (0x0006baf2) cale_week_scroll_pane_g12

0x0bbf,	// (0x0006bb0a) cale_week_scroll_pane_g13

0x0bbf,	// (0x0006bb0a) cale_week_scroll_pane_g14

0x0bbf,	// (0x0006bb0a) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0007a0fe) cale_week_scroll_pane_g

0x0bd7,	// (0x0006bb22) cale_week_time_pane

0x0bfb,	// (0x0006bb46) grid_cale_week_pane

0xaf05,	// (0x00075e50) scroll_pane_cp08

0x0c21,	// (0x0006bb6c) cell_cale_week_pane_ParamLimits

0x0c21,	// (0x0006bb6c) cell_cale_week_pane

0x0caf,	// (0x0006bbfa) cale_week_day_heading_pane_t1

0x0cf4,	// (0x0006bc3f) cale_week_day_heading_pane_t2

0x0d3e,	// (0x0006bc89) cale_week_day_heading_pane_t3

0x0d88,	// (0x0006bcd3) cale_week_day_heading_pane_t4

0x0dd2,	// (0x0006bd1d) cale_week_day_heading_pane_t5

0x0e24,	// (0x0006bd6f) cale_week_day_heading_pane_t6

0x0e76,	// (0x0006bdc1) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0007a11d) cale_week_day_heading_pane_t

0xaf22,	// (0x00075e6d) bg_cale_side_pane

0x0ebb,	// (0x0006be06) cale_week_time_pane_t1

0x0ed5,	// (0x0006be20) cale_week_time_pane_t2

0x0eef,	// (0x0006be3a) cale_week_time_pane_t3

0x0f09,	// (0x0006be54) cale_week_time_pane_t4

0x0f23,	// (0x0006be6e) cale_week_time_pane_t5

0x0f3d,	// (0x0006be88) cale_week_time_pane_t6

0x0f57,	// (0x0006bea2) cale_week_time_pane_t7

0x0f71,	// (0x0006bebc) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0007a12c) cale_week_time_pane_t

0x0f91,	// (0x0006bedc) cell_cale_week_pane_g2

0x0fb0,	// (0x0006befb) cell_cale_week_pane_g3_ParamLimits

0x0fb0,	// (0x0006befb) cell_cale_week_pane_g3

0xaf30,	// (0x00075e7b) grid_highlight_pane_cp07

0xaf38,	// (0x00075e83) listscroll_gms_pane

0xaf42,	// (0x00075e8d) grid_gms_pane

0xaf4b,	// (0x00075e96) listscroll_gms_pane_g1

0xaf53,	// (0x00075e9e) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0007a13d) listscroll_gms_pane_g

0x0fc8,	// (0x0006bf13) scroll_pane_cp010

0x0fd3,	// (0x0006bf1e) cell_gms_pane_ParamLimits

0x0fd3,	// (0x0006bf1e) cell_gms_pane

0x0fe6,	// (0x0006bf31) cell_gms_pane_g1

0xaf5b,	// (0x00075ea6) cell_gms_pane_g2

0xaf63,	// (0x00075eae) cell_gms_pane_g3

0xaf6c,	// (0x00075eb7) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0007a142) cell_gms_pane_g

0xaf75,	// (0x00075ec0) grid_highlight_pane_cp09

0x351e,	// (0x0006e469) phob_pre_status_pane_g1

0x3526,	// (0x0006e471) phob_pre_status_pane_g2

0x352e,	// (0x0006e479) phob_pre_status_pane_g3

0x3536,	// (0x0006e481) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0007a531) phob_pre_status_pane_g

0x3546,	// (0x0006e491) phob_pre_status_pane_t1

0x3554,	// (0x0006e49f) phob_pre_status_pane_t2

0x3564,	// (0x0006e4af) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0007a53c) phob_pre_status_pane_t

0xaa97,	// (0x000759e2) bg_list_pane_cp05

0x0ff6,	// (0x0006bf41) grid_vorec_pane

0x0ffe,	// (0x0006bf49) vorec_t1

0x100c,	// (0x0006bf57) vorec_t2

0x101a,	// (0x0006bf65) vorec_t3

0x1028,	// (0x0006bf73) vorec_t4

0x9640,	// (0x0007458b) vorec_t5

0x1036,	// (0x0006bf81) vorec_t6

0x0006,

0xf200,	// (0x0007a14b) vorec_t

0x1052,	// (0x0006bf9d) wait_bar_pane_cp01

0x105a,	// (0x0006bfa5) cell_vorec_pane_ParamLimits

0x105a,	// (0x0006bfa5) cell_vorec_pane

0x964e,	// (0x00074599) cell_vorec_pane_g1

0xaa97,	// (0x000759e2) grid_highlight_pane_cp05

0x1082,	// (0x0006bfcd) cams_zoom_pane

0x1091,	// (0x0006bfdc) image_vga_pane

0x10ab,	// (0x0006bff6) main_camera_pane_g1

0x10bd,	// (0x0006c008) main_camera_pane_g2

0x10cd,	// (0x0006c018) main_camera_pane_g3

0x10dd,	// (0x0006c028) main_camera_pane_g4

0x10ed,	// (0x0006c038) main_camera_pane_g5

0x10fd,	// (0x0006c048) main_camera_pane_g6

0x110f,	// (0x0006c05a) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0007a15a) main_camera_pane_g

0x111f,	// (0x0006c06a) main_camera_pane_t1

0x1135,	// (0x0006c080) main_camera_pane_t2

0x0001,

0xf220,	// (0x0007a16b) main_camera_pane_t

0x116f,	// (0x0006c0ba) cams_zoom_pane_cp_ParamLimits

0x116f,	// (0x0006c0ba) cams_zoom_pane_cp

0x1197,	// (0x0006c0e2) image_cif_pane_ParamLimits

0x1197,	// (0x0006c0e2) image_cif_pane

0x11cd,	// (0x0006c118) image_subqcif_pane

0x11d5,	// (0x0006c120) main_video_pane_g1_ParamLimits

0x11d5,	// (0x0006c120) main_video_pane_g1

0x11f9,	// (0x0006c144) main_video_pane_g2_ParamLimits

0x11f9,	// (0x0006c144) main_video_pane_g2

0x122d,	// (0x0006c178) main_video_pane_g3_ParamLimits

0x122d,	// (0x0006c178) main_video_pane_g3

0x125b,	// (0x0006c1a6) main_video_pane_g4_ParamLimits

0x125b,	// (0x0006c1a6) main_video_pane_g4

0x1289,	// (0x0006c1d4) main_video_pane_g5_ParamLimits

0x1289,	// (0x0006c1d4) main_video_pane_g5

0xaf89,	// (0x00075ed4) main_video_pane_g6_ParamLimits

0xaf89,	// (0x00075ed4) main_video_pane_g6

0x0006,

0xf225,	// (0x0007a170) main_video_pane_g_ParamLimits

0xf225,	// (0x0007a170) main_video_pane_g

0x12b2,	// (0x0006c1fd) main_video_pane_t1_ParamLimits

0x12b2,	// (0x0006c1fd) main_video_pane_t1

0xafa3,	// (0x00075eee) cams_zoom_pane_g1

0xafac,	// (0x00075ef7) cams_zoom_pane_g2

0xafb5,	// (0x00075f00) cams_zoom_pane_g3

0xafbe,	// (0x00075f09) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0007a17f) cams_zoom_pane_g

0x130f,	// (0x0006c25a) grid_cams_pane

0x1329,	// (0x0006c274) linegrid_cams_pane

0x133d,	// (0x0006c288) cell_cams_pane_ParamLimits

0x133d,	// (0x0006c288) cell_cams_pane

0xafc7,	// (0x00075f12) cams_burst_image_pane

0xafcf,	// (0x00075f1a) cell_cams_pane_g1

0xaa97,	// (0x000759e2) grid_highlight_pane_cp03

0xae0c,	// (0x00075d57) mp_bg_pane_g1

0xaa97,	// (0x000759e2) bg_list_pane_cp03

0xcd66,	// (0x00077cb1) bg_mp_pane

0xcd6e,	// (0x00077cb9) grid_mp_pane

0xcd76,	// (0x00077cc1) media_player_g1

0xcd7e,	// (0x00077cc9) media_player_t1

0xcd8c,	// (0x00077cd7) media_player_t2

0xcd9a,	// (0x00077ce5) media_player_t3

0xcda8,	// (0x00077cf3) media_player_t4

0xcdb6,	// (0x00077d01) media_player_t5

0xcdc4,	// (0x00077d0f) media_player_t6

0xcdd2,	// (0x00077d1d) media_player_t7

0x0006,

0xf5d0,	// (0x0007a51b) media_player_t

0xcde0,	// (0x00077d2b) wait_bar_pane_cp02

0xf5b5,	// (0x0007a500) main_usb_pane_t

0x3515,	// (0x0006e460) cell_mp_pane

0xae0c,	// (0x00075d57) cell_mp_pane_g1

0xaa97,	// (0x000759e2) grid_highlight_pane_cp06

0xafd7,	// (0x00075f22) grid_skin_colour_pane

0xafdf,	// (0x00075f2a) list_highlight_pane_cp03

0x1473,	// (0x0006c3be) skin_g1

0xafe7,	// (0x00075f32) skin_t1

0xaff6,	// (0x00075f41) skin_t2

0x0001,

0xf269,	// (0x0007a1b4) skin_t

0x147b,	// (0x0006c3c6) cell_skin_colour_pane_ParamLimits

0x147b,	// (0x0006c3c6) cell_skin_colour_pane

0xb004,	// (0x00075f4f) cell_skin_colour_pane_g1

0x14f4,	// (0x0006c43f) call_video_g1_ParamLimits

0x14f4,	// (0x0006c43f) call_video_g1

0x1510,	// (0x0006c45b) call_video_g2_ParamLimits

0x1510,	// (0x0006c45b) call_video_g2

0x0001,

0xf26e,	// (0x0007a1b9) call_video_g_ParamLimits

0xf26e,	// (0x0007a1b9) call_video_g

0x1562,	// (0x0006c4ad) call_video_uplink_pane_cp1_ParamLimits

0x1562,	// (0x0006c4ad) call_video_uplink_pane_cp1

0xb016,	// (0x00075f61) call_video_uplink_pane_cp2

0x1601,	// (0x0006c54c) video_down_crop_pane_ParamLimits

0x1601,	// (0x0006c54c) video_down_crop_pane

0x16f8,	// (0x0006c643) video_down_pane_ParamLimits

0x16f8,	// (0x0006c643) video_down_pane

0xb01e,	// (0x00075f69) video_down_subqcif_pane_ParamLimits

0xb01e,	// (0x00075f69) video_down_subqcif_pane

0xb036,	// (0x00075f81) video_down_subqcif_pane_cp_ParamLimits

0xb036,	// (0x00075f81) video_down_subqcif_pane_cp

0xb05c,	// (0x00075fa7) im_reading_pane_ParamLimits

0xb05c,	// (0x00075fa7) im_reading_pane

0x1806,	// (0x0006c751) im_writing_pane_ParamLimits

0x1806,	// (0x0006c751) im_writing_pane

0x181c,	// (0x0006c767) im_reading_pane_t1

0xb076,	// (0x00075fc1) list_im_pane

0xb087,	// (0x00075fd2) scroll_pane_cp07

0x1855,	// (0x0006c7a0) im_writing_pane_t1_ParamLimits

0x1855,	// (0x0006c7a0) im_writing_pane_t1

0xb0a0,	// (0x00075feb) im_writing_pane_t2_ParamLimits

0xb0a0,	// (0x00075feb) im_writing_pane_t2

0x0001,

0xf278,	// (0x0007a1c3) im_writing_pane_t_ParamLimits

0xf278,	// (0x0007a1c3) im_writing_pane_t

0xaa97,	// (0x000759e2) input_focus_pane_cp04

0xaa97,	// (0x000759e2) input_focus_pane_cp05

0x186a,	// (0x0006c7b5) list_im_single_pane_ParamLimits

0x186a,	// (0x0006c7b5) list_im_single_pane

0x187e,	// (0x0006c7c9) list_single_im_pane_t1

0x34d5,	// (0x0006e420) blid_accuracy_pane

0x34dd,	// (0x0006e428) blid_compass_pane

0x34e7,	// (0x0006e432) main_location_t1

0x34f7,	// (0x0006e442) main_location_t2

0x3507,	// (0x0006e452) main_location_t3

0x0002,

0xf5df,	// (0x0007a52a) main_location_t

0xaa97,	// (0x000759e2) aid_levels_location

0xae0c,	// (0x00075d57) blid_accuracy_pane_g1

0xae0c,	// (0x00075d57) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0007a225) blid_accuracy_pane_g

0xb0e8,	// (0x00076033) wml_content_pane

0xb126,	// (0x00076071) wml_button_pane_ParamLimits

0xb126,	// (0x00076071) wml_button_pane

0x188d,	// (0x0006c7d8) wml_list_single_large_pane_ParamLimits

0x188d,	// (0x0006c7d8) wml_list_single_large_pane

0x18a2,	// (0x0006c7ed) wml_list_single_medium_pane_ParamLimits

0x18a2,	// (0x0006c7ed) wml_list_single_medium_pane

0x18b8,	// (0x0006c803) wml_list_single_small_pane_ParamLimits

0x18b8,	// (0x0006c803) wml_list_single_small_pane

0xb13a,	// (0x00076085) wml_selection_box_pane_ParamLimits

0xb13a,	// (0x00076085) wml_selection_box_pane

0xb14d,	// (0x00076098) wml_list_single_pane_t1

0xb15c,	// (0x000760a7) wml_list_single_medium_pane_t1

0xb16b,	// (0x000760b6) wml_list_single_large_pane_t1

0xb17a,	// (0x000760c5) input_focus_pane_cp02_ParamLimits

0xb17a,	// (0x000760c5) input_focus_pane_cp02

0xb18d,	// (0x000760d8) wml_selection_box_pane_g1

0xb196,	// (0x000760e1) wml_selection_box_pane_t1_ParamLimits

0xb196,	// (0x000760e1) wml_selection_box_pane_t1

0xacf2,	// (0x00075c3d) bg_wml_button_pane_ParamLimits

0xacf2,	// (0x00075c3d) bg_wml_button_pane

0xb1ae,	// (0x000760f9) wml_button_pane_g1

0xb1b6,	// (0x00076101) wml_button_pane_t1

0xb1ae,	// (0x000760f9) wml_button_bg_pane_g1

0xb1c6,	// (0x00076111) wml_button_bg_pane_g2

0xb1ce,	// (0x00076119) wml_button_bg_pane_g3

0xb1d6,	// (0x00076121) wml_button_bg_pane_g4

0xb1de,	// (0x00076129) wml_button_bg_pane_g5

0xb1e6,	// (0x00076131) wml_button_bg_pane_g6

0xb1ee,	// (0x00076139) wml_button_bg_pane_g7

0xb1f6,	// (0x00076141) wml_button_bg_pane_g8

0xb1fe,	// (0x00076149) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0007a1c8) wml_button_bg_pane_g

0x18d0,	// (0x0006c81b) bg_list_pane_cp02

0xb206,	// (0x00076151) mce_header_pane_ParamLimits

0xb206,	// (0x00076151) mce_header_pane

0xb21c,	// (0x00076167) mce_icon_pane

0xb21c,	// (0x00076167) mce_image_pane

0xb225,	// (0x00076170) mce_text_pane_ParamLimits

0xb225,	// (0x00076170) mce_text_pane

0x18d8,	// (0x0006c823) scroll_pane_cp03

0xb11e,	// (0x00076069) scroll_pane_cp04

0xb238,	// (0x00076183) scroll_pane_cp05_ParamLimits

0xb238,	// (0x00076183) scroll_pane_cp05

0x18e2,	// (0x0006c82d) mce_header_field_pane_ParamLimits

0x18e2,	// (0x0006c82d) mce_header_field_pane

0x18f9,	// (0x0006c844) mce_header_field_pane_2_ParamLimits

0x18f9,	// (0x0006c844) mce_header_field_pane_2

0x190f,	// (0x0006c85a) mce_header_field_pane_3

0x1917,	// (0x0006c862) list_single_mce_message_pane_ParamLimits

0x1917,	// (0x0006c862) list_single_mce_message_pane

0x192c,	// (0x0006c877) list_single_mce_smart_pane_ParamLimits

0x192c,	// (0x0006c877) list_single_mce_smart_pane

0xb244,	// (0x0007618f) input_focus_pane_cp03

0xb24d,	// (0x00076198) list_header_data_pane

0x194c,	// (0x0006c897) mce_header_field_pane_t1

0x195c,	// (0x0006c8a7) list_single_mce_header_pane_ParamLimits

0x195c,	// (0x0006c8a7) list_single_mce_header_pane

0xb255,	// (0x000761a0) list_single_mce_header_pane_t1

0xb264,	// (0x000761af) list_single_mce_message_pane_g1

0xb2d5,	// (0x00076220) list_single_mce_message_pane_t1

0x1996,	// (0x0006c8e1) bg_cale_heading_pane_cp01_ParamLimits

0x1996,	// (0x0006c8e1) bg_cale_heading_pane_cp01

0xb2e3,	// (0x0007622e) bg_cale_pane_cp02_ParamLimits

0xb2e3,	// (0x0007622e) bg_cale_pane_cp02

0x19c5,	// (0x0006c910) cale_month_corner_pane

0x19e4,	// (0x0006c92f) cale_month_day_heading_pane_ParamLimits

0x19e4,	// (0x0006c92f) cale_month_day_heading_pane

0x1a2b,	// (0x0006c976) cale_month_pane_g1_ParamLimits

0x1a2b,	// (0x0006c976) cale_month_pane_g1

0x1a4f,	// (0x0006c99a) cale_month_pane_g2_ParamLimits

0x1a4f,	// (0x0006c99a) cale_month_pane_g2

0x1a7f,	// (0x0006c9ca) cale_month_pane_g3_ParamLimits

0x1a7f,	// (0x0006c9ca) cale_month_pane_g3

0x1abb,	// (0x0006ca06) cale_month_pane_g4_ParamLimits

0x1abb,	// (0x0006ca06) cale_month_pane_g4

0x1af7,	// (0x0006ca42) cale_month_pane_g5_ParamLimits

0x1af7,	// (0x0006ca42) cale_month_pane_g5

0x1b3f,	// (0x0006ca8a) cale_month_pane_g6_ParamLimits

0x1b3f,	// (0x0006ca8a) cale_month_pane_g6

0x1b8b,	// (0x0006cad6) cale_month_pane_g7_ParamLimits

0x1b8b,	// (0x0006cad6) cale_month_pane_g7

0x1bdf,	// (0x0006cb2a) cale_month_pane_g8_ParamLimits

0x1bdf,	// (0x0006cb2a) cale_month_pane_g8

0x1c33,	// (0x0006cb7e) cale_month_pane_g9_ParamLimits

0x1c33,	// (0x0006cb7e) cale_month_pane_g9

0x1c85,	// (0x0006cbd0) cale_month_pane_g10_ParamLimits

0x1c85,	// (0x0006cbd0) cale_month_pane_g10

0x1cd7,	// (0x0006cc22) cale_month_pane_g11_ParamLimits

0x1cd7,	// (0x0006cc22) cale_month_pane_g11

0x1d29,	// (0x0006cc74) cale_month_pane_g12_ParamLimits

0x1d29,	// (0x0006cc74) cale_month_pane_g12

0x1d7b,	// (0x0006ccc6) cale_month_pane_g13_ParamLimits

0x1d7b,	// (0x0006ccc6) cale_month_pane_g13

0x000c,

0xf290,	// (0x0007a1db) cale_month_pane_g_ParamLimits

0xf290,	// (0x0007a1db) cale_month_pane_g

0x1dcd,	// (0x0006cd18) cale_month_week_pane

0x1df1,	// (0x0006cd3c) grid_cale_month_pane_ParamLimits

0x1df1,	// (0x0006cd3c) grid_cale_month_pane

0x1e2f,	// (0x0006cd7a) cale_month_day_heading_pane_t1

0x1eb5,	// (0x0006ce00) cale_month_day_heading_pane_t2

0x1f46,	// (0x0006ce91) cale_month_day_heading_pane_t3

0x1fd7,	// (0x0006cf22) cale_month_day_heading_pane_t4

0x206c,	// (0x0006cfb7) cale_month_day_heading_pane_t5

0x210d,	// (0x0006d058) cale_month_day_heading_pane_t6

0x21ae,	// (0x0006d0f9) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0007a1f6) cale_month_day_heading_pane_t

0xaf22,	// (0x00075e6d) bg_cale_side_pane_cp01

0x2257,	// (0x0006d1a2) cale_month_week_pane_t1

0x2270,	// (0x0006d1bb) cale_month_week_pane_t2

0x2289,	// (0x0006d1d4) cale_month_week_pane_t3

0x22a2,	// (0x0006d1ed) cale_month_week_pane_t4

0x22bb,	// (0x0006d206) cale_month_week_pane_t5

0x22d4,	// (0x0006d21f) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0007a205) cale_month_week_pane_t

0x22ed,	// (0x0006d238) cell_cale_month_pane_ParamLimits

0x22ed,	// (0x0006d238) cell_cale_month_pane

0x9658,	// (0x000745a3) cell_cale_month_pane_g1

0x2441,	// (0x0006d38c) cell_cale_month_pane_t1_ParamLimits

0x2441,	// (0x0006d38c) cell_cale_month_pane_t1

0xaf30,	// (0x00075e7b) grid_highlight_pane_cp08

0xae0c,	// (0x00075d57) main_smil_g1

0x2461,	// (0x0006d3ac) smil_status_pane

0xb322,	// (0x0007626d) smil_text_pane

0xcc86,	// (0x00077bd1) bg_popup_call3_rect_pane_g8

0xcc8e,	// (0x00077bd9) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0007a4be) bg_popup_call3_rect_pane_g

0xced5,	// (0x00077e20) smil_status_volume_pane_g1

0xb32c,	// (0x00076277) smil_status_pane_t1

0x97e0,	// (0x0007472b) volume_smil_pane

0xb343,	// (0x0007628e) list_smil_text_pane

0x2474,	// (0x0006d3bf) scroll_pane_cp011

0x247f,	// (0x0006d3ca) smil_text_list_pane_t1_ParamLimits

0x247f,	// (0x0006d3ca) smil_text_list_pane_t1

0x9664,	// (0x000745af) aid_volume_smil_ParamLimits

0x9664,	// (0x000745af) aid_volume_smil

0xae0c,	// (0x00075d57) smil_volume_pane_g1

0xae0c,	// (0x00075d57) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0007a225) smil_volume_pane_g

0x0a00,	// (0x0006b94b) listscroll_cale_day_pane

0xb34d,	// (0x00076298) bg_cale_pane

0xb365,	// (0x000762b0) list_cale_pane

0xb388,	// (0x000762d3) scroll_pane_cp09

0xb399,	// (0x000762e4) cale_bg_pane_g1

0xb3a1,	// (0x000762ec) cale_bg_pane_g2

0xb3a9,	// (0x000762f4) cale_bg_pane_g3

0xb3b1,	// (0x000762fc) cale_bg_pane_g4

0xb3b9,	// (0x00076304) cale_bg_pane_g5

0xb3c1,	// (0x0007630c) cale_bg_pane_g6

0xb3c9,	// (0x00076314) cale_bg_pane_g7

0xb3d1,	// (0x0007631c) cale_bg_pane_g8

0xb3d9,	// (0x00076324) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0007a22a) cale_bg_pane_g

0x24c3,	// (0x0006d40e) list_cale_time_pane_ParamLimits

0x24c3,	// (0x0006d40e) list_cale_time_pane

0xb3e1,	// (0x0007632c) list_cale_time_pane_g1_ParamLimits

0xb3e1,	// (0x0007632c) list_cale_time_pane_g1

0xb3ed,	// (0x00076338) list_cale_time_pane_g2_ParamLimits

0xb3ed,	// (0x00076338) list_cale_time_pane_g2

0x24d8,	// (0x0006d423) list_cale_time_pane_g3_ParamLimits

0x24d8,	// (0x0006d423) list_cale_time_pane_g3

0x24e6,	// (0x0006d431) list_cale_time_pane_g4_ParamLimits

0x24e6,	// (0x0006d431) list_cale_time_pane_g4

0x24f4,	// (0x0006d43f) list_cale_time_pane_g5_ParamLimits

0x24f4,	// (0x0006d43f) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0007a23d) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0007a23d) list_cale_time_pane_g

0xb407,	// (0x00076352) list_cale_time_pane_t1_ParamLimits

0xb407,	// (0x00076352) list_cale_time_pane_t1

0xb42f,	// (0x0007637a) list_cale_time_pane_t2_ParamLimits

0xb42f,	// (0x0007637a) list_cale_time_pane_t2

0x2855,	// (0x0006d7a0) aid_blid_cardinal_pane

0x2893,	// (0x0006d7de) compass_pane_t4

0xb457,	// (0x000763a2) list_cale_time_pane_t4_ParamLimits

0xb457,	// (0x000763a2) list_cale_time_pane_t4

0x28a1,	// (0x0006d7ec) compass_pane_t5

0x28af,	// (0x0006d7fa) compass_pane_t6

0x28bd,	// (0x0006d808) compass_pane_t7

0xb906,	// (0x00076851) navi_pane_cc_t1

0xbaeb,	// (0x00076a36) aid_phob_thumbnail_center_pane

0x2eed,	// (0x0006de38) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0007a24a) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0007a24a) list_cale_time_pane_t

0x9f73,	// (0x00074ebe) bg_popup_window_pane_cp02_ParamLimits

0x9f73,	// (0x00074ebe) bg_popup_window_pane_cp02

0xb47f,	// (0x000763ca) heading_pane_cp01_ParamLimits

0xb47f,	// (0x000763ca) heading_pane_cp01

0xb48b,	// (0x000763d6) loc_req_pane_ParamLimits

0xb48b,	// (0x000763d6) loc_req_pane

0xb49b,	// (0x000763e6) loc_type_pane_ParamLimits

0xb49b,	// (0x000763e6) loc_type_pane

0xb4ad,	// (0x000763f8) loc_type_pane_t1_ParamLimits

0xb4ad,	// (0x000763f8) loc_type_pane_t1

0xb4bf,	// (0x0007640a) loc_type_pane_t2_ParamLimits

0xb4bf,	// (0x0007640a) loc_type_pane_t2

0xb4d1,	// (0x0007641c) loc_type_pane_t3_ParamLimits

0xb4d1,	// (0x0007641c) loc_type_pane_t3

0x0002,

0xf306,	// (0x0007a251) loc_type_pane_t_ParamLimits

0xf306,	// (0x0007a251) loc_type_pane_t

0xb4e3,	// (0x0007642e) list_loc_req_pane

0xb4ed,	// (0x00076438) scroll_pane_cp012

0x2502,	// (0x0006d44d) list_single_loc_request_popup_menu_pane_ParamLimits

0x2502,	// (0x0006d44d) list_single_loc_request_popup_menu_pane

0xb4f8,	// (0x00076443) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb4f8,	// (0x00076443) list_single_loc_request_popup_menu_pane_g1

0xb504,	// (0x0007644f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb504,	// (0x0007644f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0007a258) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0007a258) list_single_loc_request_popup_menu_pane_g

0xb510,	// (0x0007645b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb510,	// (0x0007645b) list_single_loc_request_popup_menu_pane_t1

0xacf2,	// (0x00075c3d) bg_popup_window_pane_cp03_ParamLimits

0xacf2,	// (0x00075c3d) bg_popup_window_pane_cp03

0xb526,	// (0x00076471) heading_loc_req_pane_ParamLimits

0xb526,	// (0x00076471) heading_loc_req_pane

0x250f,	// (0x0006d45a) popup_dyc_status_message_window_g1_ParamLimits

0x250f,	// (0x0006d45a) popup_dyc_status_message_window_g1

0x2523,	// (0x0006d46e) popup_dyc_status_message_window_t1_ParamLimits

0x2523,	// (0x0006d46e) popup_dyc_status_message_window_t1

0x2538,	// (0x0006d483) popup_dyc_status_message_window_t2_ParamLimits

0x2538,	// (0x0006d483) popup_dyc_status_message_window_t2

0x254d,	// (0x0006d498) popup_dyc_status_message_window_t3_ParamLimits

0x254d,	// (0x0006d498) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0007a25d) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0007a25d) popup_dyc_status_message_window_t

0xaa97,	// (0x000759e2) bg_heading_pane_cp01

0xb532,	// (0x0007647d) heading_loc_req_pane_g1

0xb53a,	// (0x00076485) heading_loc_req_pane_g2

0xb542,	// (0x0007648d) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0007a264) heading_loc_req_pane_g

0xb54a,	// (0x00076495) heading_loc_req_pane_t1

0xb559,	// (0x000764a4) bg_popup_sub_pane_cp01_ParamLimits

0xb559,	// (0x000764a4) bg_popup_sub_pane_cp01

0xb567,	// (0x000764b2) popup_cale_events_window_g1_ParamLimits

0xb567,	// (0x000764b2) popup_cale_events_window_g1

0xb587,	// (0x000764d2) popup_cale_events_window_g2_ParamLimits

0xb587,	// (0x000764d2) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0007a298) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0007a298) popup_cale_events_window_g

0xb5a7,	// (0x000764f2) popup_cale_events_window_t1_ParamLimits

0xb5a7,	// (0x000764f2) popup_cale_events_window_t1

0xb5b9,	// (0x00076504) popup_cale_events_window_t2_ParamLimits

0xb5b9,	// (0x00076504) popup_cale_events_window_t2

0xb5f7,	// (0x00076542) popup_cale_events_window_t3_ParamLimits

0xb5f7,	// (0x00076542) popup_cale_events_window_t3

0xb631,	// (0x0007657c) popup_cale_events_window_t4_ParamLimits

0xb631,	// (0x0007657c) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0007a29d) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0007a29d) popup_cale_events_window_t

0x2650,	// (0x0006d59b) call_type_pane

0x2660,	// (0x0006d5ab) popup_call_status_window_g1

0x2674,	// (0x0006d5bf) popup_call_status_window_g2

0x2688,	// (0x0006d5d3) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0007a2a6) popup_call_status_window_g

0xb667,	// (0x000765b2) call_type_pane_g1

0xb670,	// (0x000765bb) call_type_pane_g2

0x0001,

0xf362,	// (0x0007a2ad) call_type_pane_g

0xaa97,	// (0x000759e2) bg_popup_sub_pane_cp02

0xb679,	// (0x000765c4) listscroll_popup_wml_pane

0xb681,	// (0x000765cc) list_wml_pane

0xb68b,	// (0x000765d6) scroll_pane_cp013

0xb696,	// (0x000765e1) list_single_graphic_popup_wml_pane_ParamLimits

0xb696,	// (0x000765e1) list_single_graphic_popup_wml_pane

0xae0c,	// (0x00075d57) list_single_graphic_popup_wml_pane_g1

0xb6aa,	// (0x000765f5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0007a2b2) list_single_graphic_popup_wml_pane_g

0xb6b2,	// (0x000765fd) list_single_graphic_popup_wml_pane_t1

0xb6c8,	// (0x00076613) aid_call_pane

0xacea,	// (0x00075c35) popup_clock_analogue_window_g1

0xacea,	// (0x00075c35) popup_clock_analogue_window_g2

0x9686,	// (0x000745d1) popup_clock_analogue_window_g3

0x9686,	// (0x000745d1) popup_clock_analogue_window_g4

0xae0c,	// (0x00075d57) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0007a2b7) popup_clock_analogue_window_g

0x968e,	// (0x000745d9) popup_clock_analogue_window_t1

0x969c,	// (0x000745e7) clock_digital_number_pane_ParamLimits

0x969c,	// (0x000745e7) clock_digital_number_pane

0x96a8,	// (0x000745f3) clock_digital_number_pane_cp02_ParamLimits

0x96a8,	// (0x000745f3) clock_digital_number_pane_cp02

0x96b4,	// (0x000745ff) clock_digital_number_pane_cp03_ParamLimits

0x96b4,	// (0x000745ff) clock_digital_number_pane_cp03

0x96c0,	// (0x0007460b) clock_digital_number_pane_cp04_ParamLimits

0x96c0,	// (0x0007460b) clock_digital_number_pane_cp04

0x96d0,	// (0x0007461b) clock_digital_separator_pane_ParamLimits

0x96d0,	// (0x0007461b) clock_digital_separator_pane

0x96dc,	// (0x00074627) popup_clock_digital_window_t1

0xae0c,	// (0x00075d57) clock_digital_number_pane_g1

0xae0c,	// (0x00075d57) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0007a225) clock_digital_number_pane_g

0xae0c,	// (0x00075d57) clock_digital_separator_pane_g1

0xae0c,	// (0x00075d57) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0007a225) clock_digital_separator_pane_g

0xaa97,	// (0x000759e2) bg_popup_window_pane_cp04

0xb6d0,	// (0x0007661b) heading_pane_cp03

0xb6d8,	// (0x00076623) listscroll_popup_gms_pane

0xb6e0,	// (0x0007662b) grid_large_graphic_popup_pane

0xb6ea,	// (0x00076635) listscroll_popup_gms_pane_g1

0xb6f2,	// (0x0007663d) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0007a2c2) listscroll_popup_gms_pane_g

0xb11e,	// (0x00076069) scroll_pane_cp014

0x2697,	// (0x0006d5e2) cell_large_graphic_popup_pane_ParamLimits

0x2697,	// (0x0006d5e2) cell_large_graphic_popup_pane

0x26af,	// (0x0006d5fa) cell_large_graphic_popup_pane_g1_ParamLimits

0x26af,	// (0x0006d5fa) cell_large_graphic_popup_pane_g1

0xb6fa,	// (0x00076645) cell_large_graphic_popup_pane_g2_ParamLimits

0xb6fa,	// (0x00076645) cell_large_graphic_popup_pane_g2

0xb706,	// (0x00076651) cell_large_graphic_popup_pane_g3_ParamLimits

0xb706,	// (0x00076651) cell_large_graphic_popup_pane_g3

0xb713,	// (0x0007665e) cell_large_graphic_popup_pane_g4_ParamLimits

0xb713,	// (0x0007665e) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0007a2c7) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0007a2c7) cell_large_graphic_popup_pane_g

0xb723,	// (0x0007666e) grid_highlight_pane_cp010

0xae0c,	// (0x00075d57) bg_popup_call_pane_g1

0xb72d,	// (0x00076678) list_single_graphic_popup_conf_pane_ParamLimits

0xb72d,	// (0x00076678) list_single_graphic_popup_conf_pane

0xb740,	// (0x0007668b) list_highlight_pane_cp01

0xb749,	// (0x00076694) list_single_graphic_popup_conf_pane_g1

0xb751,	// (0x0007669c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0007a2d0) list_single_graphic_popup_conf_pane_g

0xb759,	// (0x000766a4) list_single_graphic_popup_conf_pane_t1

0xb767,	// (0x000766b2) linegrid_cams_pane_g1

0x26bb,	// (0x0006d606) linegrid_cams_pane_g2

0xaf63,	// (0x00075eae) linegrid_cams_pane_g3

0xb770,	// (0x000766bb) linegrid_cams_pane_g4

0x26c4,	// (0x0006d60f) linegrid_cams_pane_g5

0x26cd,	// (0x0006d618) linegrid_cams_pane_g6

0xaf6c,	// (0x00075eb7) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0007a2d5) linegrid_cams_pane_g

0xb779,	// (0x000766c4) popup_clock_analogue_window

0xb779,	// (0x000766c4) popup_clock_digital_window

0xaa97,	// (0x000759e2) popup_phob_thumbnail_window

0xae0c,	// (0x00075d57) call_video_uplink_pane_g1

0xb782,	// (0x000766cd) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0007a2e4) call_video_uplink_pane_g

0xb78a,	// (0x000766d5) video_uplink_pane

0xb792,	// (0x000766dd) mce_image_pane_g1

0x26d8,	// (0x0006d623) mce_image_pane_g2

0x26e2,	// (0x0006d62d) mce_image_pane_g3

0x26ea,	// (0x0006d635) mce_image_pane_g4

0x26f2,	// (0x0006d63d) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0007a2e9) mce_image_pane_g

0xb79c,	// (0x000766e7) control_top_pane_stacon_cp01_ParamLimits

0xb79c,	// (0x000766e7) control_top_pane_stacon_cp01

0xb7b0,	// (0x000766fb) uni_indicator_pane_stacon_cp01_ParamLimits

0xb7b0,	// (0x000766fb) uni_indicator_pane_stacon_cp01

0xb7c1,	// (0x0007670c) bg_popup_sub_pane_cp03

0xb7cb,	// (0x00076716) chi_dic_find_pane

0x26fa,	// (0x0006d645) listscroll_chi_dic_pane

0xb7d3,	// (0x0007671e) main_pane_chidic_g1

0xb7db,	// (0x00076726) chi_dic_find_pane_t1

0xb7e9,	// (0x00076734) find_chidic_pane

0xb7f2,	// (0x0007673d) chi_dic_list_pane_ParamLimits

0xb7f2,	// (0x0007673d) chi_dic_list_pane

0xb803,	// (0x0007674e) scroll_pane_cp020

0xb80b,	// (0x00076756) find_chidic_pane_t1

0xaa97,	// (0x000759e2) input_focus_pane_cp06

0x270e,	// (0x0006d659) list_chi_dic_pane_ParamLimits

0x270e,	// (0x0006d659) list_chi_dic_pane

0x2720,	// (0x0006d66b) list_chi_dic_pane_t1_ParamLimits

0x2720,	// (0x0006d66b) list_chi_dic_pane_t1

0xaa97,	// (0x000759e2) list_highlight_pane_cp020

0xb81a,	// (0x00076765) bg_cale_heading_pane_g1

0x2733,	// (0x0006d67e) bg_cale_heading_pane_g2

0x273b,	// (0x0006d686) bg_cale_heading_pane_g3

0x2743,	// (0x0006d68e) bg_cale_heading_pane_g4

0x274d,	// (0x0006d698) bg_cale_heading_pane_g5

0x2757,	// (0x0006d6a2) bg_cale_heading_pane_g6

0x275f,	// (0x0006d6aa) bg_cale_heading_pane_g7

0x2767,	// (0x0006d6b2) bg_cale_heading_pane_g8

0x2771,	// (0x0006d6bc) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0007a2f4) bg_cale_heading_pane_g

0xb81a,	// (0x00076765) bg_cale_side_pane_g1

0x277b,	// (0x0006d6c6) bg_cale_side_pane_g2

0x2783,	// (0x0006d6ce) bg_cale_side_pane_g3

0x278b,	// (0x0006d6d6) bg_cale_side_pane_g4

0x2793,	// (0x0006d6de) bg_cale_side_pane_g5

0x279b,	// (0x0006d6e6) bg_cale_side_pane_g6

0x27a3,	// (0x0006d6ee) bg_cale_side_pane_g7

0x27ab,	// (0x0006d6f6) bg_cale_side_pane_g8

0x27b3,	// (0x0006d6fe) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0007a307) bg_cale_side_pane_g

0x27bb,	// (0x0006d706) popup_call_status_window_ParamLimits

0x27bb,	// (0x0006d706) popup_call_status_window

0xb822,	// (0x0007676d) stacon_top_pane

0xb82a,	// (0x00076775) status_pane_ParamLimits

0xb82a,	// (0x00076775) status_pane

0xb83f,	// (0x0007678a) status_small_pane

0xb847,	// (0x00076792) control_pane

0xaa97,	// (0x000759e2) stacon_bottom_pane

0xb84f,	// (0x0007679a) list_single_mce_smart_pane_t1_ParamLimits

0xb84f,	// (0x0007679a) list_single_mce_smart_pane_t1

0xb862,	// (0x000767ad) list_single_mce_smart_pane_t2_ParamLimits

0xb862,	// (0x000767ad) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0007a31a) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0007a31a) list_single_mce_smart_pane_t

0x2804,	// (0x0006d74f) compass_pane

0x280d,	// (0x0006d758) main_location2_pane_t1

0x281f,	// (0x0006d76a) main_location2_pane_t2

0x2831,	// (0x0006d77c) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0007a31f) main_location2_pane_t

0xb881,	// (0x000767cc) compass_pane_g1_ParamLimits

0xb881,	// (0x000767cc) compass_pane_g1

0x2875,	// (0x0006d7c0) compass_pane_t1

0x2884,	// (0x0006d7cf) compass_pane_t2

0x0005,

0xf3dd,	// (0x0007a328) compass_pane_t

0x28cb,	// (0x0006d816) text_secondary_cp61

0xb8fd,	// (0x00076848) navi_pane_cams_g5

0xb979,	// (0x000768c4) navi_pane_im_t1

0xb987,	// (0x000768d2) navi_pane_mp_g1_ParamLimits

0xb987,	// (0x000768d2) navi_pane_mp_g1

0xb99b,	// (0x000768e6) navi_pane_mp_g2_ParamLimits

0xb99b,	// (0x000768e6) navi_pane_mp_g2

0xb9a7,	// (0x000768f2) navi_pane_mp_g3_ParamLimits

0xb9a7,	// (0x000768f2) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0007a33c) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0007a33c) navi_pane_mp_g

0xb9b3,	// (0x000768fe) navi_pane_mp_t1

0xb9c1,	// (0x0007690c) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0007a343) navi_pane_mp_t

0xba2c,	// (0x00076977) navi_pane_vt_g1

0xb9b3,	// (0x000768fe) navi_pane_vt_t1

0xba34,	// (0x0007697f) navi_slider_pane

0xba44,	// (0x0007698f) zooming_pane

0xba4c,	// (0x00076997) navi_slider_pane_g1

0x96f9,	// (0x00074644) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0007a34a) navi_slider_pane_g

0xba70,	// (0x000769bb) aid_levels_zoom

0xba78,	// (0x000769c3) zooming_pane_g1

0xba80,	// (0x000769cb) zooming_pane_g2

0xba80,	// (0x000769cb) zooming_pane_g3

0x0002,

0xf40e,	// (0x0007a359) zooming_pane_g

0xba88,	// (0x000769d3) level_10_zoom

0xba91,	// (0x000769dc) level_11_zoom

0xba9a,	// (0x000769e5) level_1_zoom

0xbaa3,	// (0x000769ee) level_2_zoom

0xbaac,	// (0x000769f7) level_3_zoom

0xbab5,	// (0x00076a00) level_4_zoom

0xbabe,	// (0x00076a09) level_5_zoom

0xbac7,	// (0x00076a12) level_6_zoom

0xbad0,	// (0x00076a1b) level_7_zoom

0xbad9,	// (0x00076a24) level_8_zoom

0xbae2,	// (0x00076a2d) level_9_zoom

0xbaf3,	// (0x00076a3e) popup_phob_thumbnail_window_g1

0xbafb,	// (0x00076a46) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0007a360) popup_phob_thumbnail_window_g

0xcde8,	// (0x00077d33) level_1_location

0xcdf0,	// (0x00077d3b) level_2_location

0xcdf8,	// (0x00077d43) level_3_location

0xce00,	// (0x00077d4b) level_4_location

0xba44,	// (0x0007698f) level_5_location

0x291c,	// (0x0006d867) mce_icon_pane_g1

0x2926,	// (0x0006d871) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0007a365) mce_icon_pane_g

0x292e,	// (0x0006d879) main_mup_pane_g1_ParamLimits

0x292e,	// (0x0006d879) main_mup_pane_g1

0x2944,	// (0x0006d88f) main_mup_pane_g2_ParamLimits

0x2944,	// (0x0006d88f) main_mup_pane_g2

0x295c,	// (0x0006d8a7) main_mup_pane_g3_ParamLimits

0x295c,	// (0x0006d8a7) main_mup_pane_g3

0x2974,	// (0x0006d8bf) main_mup_pane_g4_ParamLimits

0x2974,	// (0x0006d8bf) main_mup_pane_g4

0x298c,	// (0x0006d8d7) main_mup_pane_g5_ParamLimits

0x298c,	// (0x0006d8d7) main_mup_pane_g5

0x29a8,	// (0x0006d8f3) main_mup_pane_g6_ParamLimits

0x29a8,	// (0x0006d8f3) main_mup_pane_g6

0x29c0,	// (0x0006d90b) main_mup_pane_g7_ParamLimits

0x29c0,	// (0x0006d90b) main_mup_pane_g7

0x29d8,	// (0x0006d923) main_mup_pane_g8_ParamLimits

0x29d8,	// (0x0006d923) main_mup_pane_g8

0x29f2,	// (0x0006d93d) main_mup_pane_g9_ParamLimits

0x29f2,	// (0x0006d93d) main_mup_pane_g9

0x2a0c,	// (0x0006d957) main_mup_pane_g10_ParamLimits

0x2a0c,	// (0x0006d957) main_mup_pane_g10

0x2a26,	// (0x0006d971) main_mup_pane_g11_ParamLimits

0x2a26,	// (0x0006d971) main_mup_pane_g11

0x2a3a,	// (0x0006d985) main_mup_pane_g12_ParamLimits

0x2a3a,	// (0x0006d985) main_mup_pane_g12

0x2a50,	// (0x0006d99b) main_mup_pane_g13_ParamLimits

0x2a50,	// (0x0006d99b) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0007a36a) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0007a36a) main_mup_pane_g

0x2a64,	// (0x0006d9af) main_mup_pane_t1_ParamLimits

0x2a64,	// (0x0006d9af) main_mup_pane_t1

0x2a7e,	// (0x0006d9c9) main_mup_pane_t2_ParamLimits

0x2a7e,	// (0x0006d9c9) main_mup_pane_t2

0x2a96,	// (0x0006d9e1) main_mup_pane_t3_ParamLimits

0x2a96,	// (0x0006d9e1) main_mup_pane_t3

0x2aae,	// (0x0006d9f9) main_mup_pane_t4_ParamLimits

0x2aae,	// (0x0006d9f9) main_mup_pane_t4

0x2acc,	// (0x0006da17) main_mup_pane_t5_ParamLimits

0x2acc,	// (0x0006da17) main_mup_pane_t5

0x2ae1,	// (0x0006da2c) main_mup_pane_t6_ParamLimits

0x2ae1,	// (0x0006da2c) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0007a385) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0007a385) main_mup_pane_t

0x2af3,	// (0x0006da3e) mup_progress_pane_ParamLimits

0x2af3,	// (0x0006da3e) mup_progress_pane

0x2aff,	// (0x0006da4a) mup_visualizer_pane_ParamLimits

0x2aff,	// (0x0006da4a) mup_visualizer_pane

0x2b2f,	// (0x0006da7a) mup_volume_pane_ParamLimits

0x2b2f,	// (0x0006da7a) mup_volume_pane

0xbb03,	// (0x00076a4e) mup_visualizer_pane_g1_ParamLimits

0xbb03,	// (0x00076a4e) mup_visualizer_pane_g1

0xbb03,	// (0x00076a4e) mup_visualizer_pane_g2_ParamLimits

0xbb03,	// (0x00076a4e) mup_visualizer_pane_g2

0xb881,	// (0x000767cc) mup_visualizer_pane_g3_ParamLimits

0xb881,	// (0x000767cc) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0007a392) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0007a392) mup_visualizer_pane_g

0xae0c,	// (0x00075d57) mup_volume_pane_g1

0xbb19,	// (0x00076a64) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0007a399) mup_volume_pane_g

0xae0c,	// (0x00075d57) mup_progress_pane_g1

0xbb22,	// (0x00076a6d) mup_progress_pane_g2

0xbb2b,	// (0x00076a76) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0007a39e) mup_progress_pane_g

0xaa97,	// (0x000759e2) bg_popup_window_pane_cp05

0xbb34,	// (0x00076a7f) heading_pane_cp02_ParamLimits

0xbb34,	// (0x00076a7f) heading_pane_cp02

0xbb4e,	// (0x00076a99) list_popup_blid_pane

0xbb56,	// (0x00076aa1) list_blid_sat_info_pane_ParamLimits

0xbb56,	// (0x00076aa1) list_blid_sat_info_pane

0xbb69,	// (0x00076ab4) list_blid_sat_info_pane_g1

0xbb71,	// (0x00076abc) list_blid_sat_info_pane_t1

0x2c45,	// (0x0006db90) mup_equalizer_pane_ParamLimits

0x2c45,	// (0x0006db90) mup_equalizer_pane

0x2c5e,	// (0x0006dba9) mup_equalizer_pane_cp1_ParamLimits

0x2c5e,	// (0x0006dba9) mup_equalizer_pane_cp1

0x2c7b,	// (0x0006dbc6) mup_equalizer_pane_cp2_ParamLimits

0x2c7b,	// (0x0006dbc6) mup_equalizer_pane_cp2

0x2c98,	// (0x0006dbe3) mup_equalizer_pane_cp3_ParamLimits

0x2c98,	// (0x0006dbe3) mup_equalizer_pane_cp3

0x2cb9,	// (0x0006dc04) mup_equalizer_pane_cp4_ParamLimits

0x2cb9,	// (0x0006dc04) mup_equalizer_pane_cp4

0x2cda,	// (0x0006dc25) mup_equalizer_pane_cp5

0x2cee,	// (0x0006dc39) mup_equalizer_pane_cp6

0x2d02,	// (0x0006dc4d) mup_equalizer_pane_cp7

0xcd06,	// (0x00077c51) bg_popup_call_poc_act_pane_g9

0xcd0e,	// (0x00077c59) bg_popup_call_poc_act_pane_g10

0xcd16,	// (0x00077c61) bg_popup_call_poc_act_pane_g11

0x000a,

0xacf2,	// (0x00075c3d) mup_scale_pane

0xae0c,	// (0x00075d57) mup_scale_pane_g1

0xbb7f,	// (0x00076aca) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0007a3ba) mup_scale_pane_g

0xbba3,	// (0x00076aee) msg_data_pane

0xbbab,	// (0x00076af6) scroll_pane_cp017

0x2d28,	// (0x0006dc73) bg_list_pane_cp04_ParamLimits

0x2d28,	// (0x0006dc73) bg_list_pane_cp04

0xbbb3,	// (0x00076afe) msg_data_pane_g1

0x2d40,	// (0x0006dc8b) msg_data_pane_g2

0x2d4a,	// (0x0006dc95) msg_data_pane_g3

0x2d52,	// (0x0006dc9d) msg_data_pane_g4

0x2d5a,	// (0x0006dca5) msg_data_pane_g5

0x2d62,	// (0x0006dcad) msg_data_pane_g6

0x2d6a,	// (0x0006dcb5) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0007a3c9) msg_data_pane_g

0x2d72,	// (0x0006dcbd) msg_text_pane_ParamLimits

0x2d72,	// (0x0006dcbd) msg_text_pane

0x2d97,	// (0x0006dce2) qrid_highlight_pane_cp011_ParamLimits

0x2d97,	// (0x0006dce2) qrid_highlight_pane_cp011

0xaa97,	// (0x000759e2) msg_body_pane

0xaa97,	// (0x000759e2) msg_header_pane

0xbbbb,	// (0x00076b06) input_focus_pane_cp07

0x2dc6,	// (0x0006dd11) msg_header_pane_t1_ParamLimits

0x2dc6,	// (0x0006dd11) msg_header_pane_t1

0x9713,	// (0x0007465e) msg_header_pane_t2_ParamLimits

0x9713,	// (0x0007465e) msg_header_pane_t2

0x0001,

0xf492,	// (0x0007a3dd) msg_header_pane_t_ParamLimits

0xf492,	// (0x0007a3dd) msg_header_pane_t

0xbbd0,	// (0x00076b1b) msg_body_pane_g1

0x2dd8,	// (0x0006dd23) msg_body_pane_t1_ParamLimits

0x2dd8,	// (0x0006dd23) msg_body_pane_t1

0x9725,	// (0x00074670) msg_body_pane_t2_ParamLimits

0x9725,	// (0x00074670) msg_body_pane_t2

0x9737,	// (0x00074682) msg_body_pane_t3_ParamLimits

0x9737,	// (0x00074682) msg_body_pane_t3

0x0002,

0xf497,	// (0x0007a3e2) msg_body_pane_t_ParamLimits

0xf497,	// (0x0007a3e2) msg_body_pane_t

0x2e43,	// (0x0006dd8e) main_viewer_pane_g1_ParamLimits

0x2e43,	// (0x0006dd8e) main_viewer_pane_g1

0x2e51,	// (0x0006dd9c) main_viewer_pane_g2_ParamLimits

0x2e51,	// (0x0006dd9c) main_viewer_pane_g2

0x2e5f,	// (0x0006ddaa) main_viewer_pane_g3_ParamLimits

0x2e5f,	// (0x0006ddaa) main_viewer_pane_g3

0x2e6e,	// (0x0006ddb9) main_viewer_pane_g4_ParamLimits

0x2e6e,	// (0x0006ddb9) main_viewer_pane_g4

0x9761,	// (0x000746ac) main_viewer_pane_g5_ParamLimits

0x9761,	// (0x000746ac) main_viewer_pane_g5

0x9761,	// (0x000746ac) main_viewer_pane_g7_ParamLimits

0x9761,	// (0x000746ac) main_viewer_pane_g7

0xb4f8,	// (0x00076443) main_viewer_pane_g8_ParamLimits

0xb4f8,	// (0x00076443) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0007a3f2) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0007a3f2) main_viewer_pane_g

0xbbd8,	// (0x00076b23) viewer_content_pane_ParamLimits

0xbbd8,	// (0x00076b23) viewer_content_pane

0x2eaa,	// (0x0006ddf5) main_postcard_pane_g1_ParamLimits

0x2eaa,	// (0x0006ddf5) main_postcard_pane_g1

0x2ec0,	// (0x0006de0b) main_postcard_pane_g2_ParamLimits

0x2ec0,	// (0x0006de0b) main_postcard_pane_g2

0x2ed6,	// (0x0006de21) main_postcard_pane_g3_ParamLimits

0x2ed6,	// (0x0006de21) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0007a403) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0007a403) main_postcard_pane_g

0x2eed,	// (0x0006de38) main_postcard_pane_g4

0xcee8,	// (0x00077e33) smil_status_volume_pane_g2

0x2f30,	// (0x0006de7b) postcard_pane_ParamLimits

0x2f30,	// (0x0006de7b) postcard_pane

0xbbe6,	// (0x00076b31) postcard_pane_g1_ParamLimits

0xbbe6,	// (0x00076b31) postcard_pane_g1

0x2f72,	// (0x0006debd) postcard_pane_g2_ParamLimits

0x2f72,	// (0x0006debd) postcard_pane_g2

0x2f7e,	// (0x0006dec9) postcard_pane_g3_ParamLimits

0x2f7e,	// (0x0006dec9) postcard_pane_g3

0xbbf4,	// (0x00076b3f) postcard_pane_g4_ParamLimits

0xbbf4,	// (0x00076b3f) postcard_pane_g4

0x2f8a,	// (0x0006ded5) postcard_pane_g5_ParamLimits

0x2f8a,	// (0x0006ded5) postcard_pane_g5

0x2f9f,	// (0x0006deea) postcard_pane_g6_ParamLimits

0x2f9f,	// (0x0006deea) postcard_pane_g6

0xbbe6,	// (0x00076b31) postcard_pane_g7_ParamLimits

0xbbe6,	// (0x00076b31) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0007a410) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0007a410) postcard_pane_g

0x2fb3,	// (0x0006defe) main_mp2_pane_g1_ParamLimits

0x2fb3,	// (0x0006defe) main_mp2_pane_g1

0x2fbf,	// (0x0006df0a) main_mp2_pane_g2_ParamLimits

0x2fbf,	// (0x0006df0a) main_mp2_pane_g2

0x2fcb,	// (0x0006df16) main_mp2_pane_g3_ParamLimits

0x2fcb,	// (0x0006df16) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0007a41f) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0007a41f) main_mp2_pane_g

0x2fd7,	// (0x0006df22) main_mp2_pane_t1_ParamLimits

0x2fd7,	// (0x0006df22) main_mp2_pane_t1

0x2fec,	// (0x0006df37) main_mp2_pane_t2_ParamLimits

0x2fec,	// (0x0006df37) main_mp2_pane_t2

0x2ffe,	// (0x0006df49) main_mp2_pane_t3_ParamLimits

0x2ffe,	// (0x0006df49) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0007a426) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0007a426) main_mp2_pane_t

0xbc02,	// (0x00076b4d) pec_content_pane_ParamLimits

0xbc02,	// (0x00076b4d) pec_content_pane

0xb11e,	// (0x00076069) scroll_pane_cp015

0xbc14,	// (0x00076b5f) pec_attribute_pane_ParamLimits

0xbc14,	// (0x00076b5f) pec_attribute_pane

0x3010,	// (0x0006df5b) pec_content_pane_g1_ParamLimits

0x3010,	// (0x0006df5b) pec_content_pane_g1

0xbc24,	// (0x00076b6f) pec_content_pane_t1_ParamLimits

0xbc24,	// (0x00076b6f) pec_content_pane_t1

0xbc36,	// (0x00076b81) pec_content_pane_t2_ParamLimits

0xbc36,	// (0x00076b81) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0007a42d) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0007a42d) pec_content_pane_t

0x301c,	// (0x0006df67) list_single_graphic_pane_cp01_ParamLimits

0x301c,	// (0x0006df67) list_single_graphic_pane_cp01

0xacf2,	// (0x00075c3d) bg_popup_sub_pane_cp04

0xbc48,	// (0x00076b93) popup_mup_playback_window_g1

0xbc54,	// (0x00076b9f) popup_mup_playback_window_t1

0xbc69,	// (0x00076bb4) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0007a432) popup_mup_playback_window_t

0xbca0,	// (0x00076beb) main_image_pane_g1_ParamLimits

0xbca0,	// (0x00076beb) main_image_pane_g1

0xbce3,	// (0x00076c2e) scroll_pane_cp018_ParamLimits

0xbce3,	// (0x00076c2e) scroll_pane_cp018

0xbcfb,	// (0x00076c46) scroll_pane_cp016_ParamLimits

0xbcfb,	// (0x00076c46) scroll_pane_cp016

0x30e9,	// (0x0006e034) smil2_image_pane_ParamLimits

0x30e9,	// (0x0006e034) smil2_image_pane

0x3119,	// (0x0006e064) smil2_root_pane_ParamLimits

0x3119,	// (0x0006e064) smil2_root_pane

0x3151,	// (0x0006e09c) smil2_text_pane_ParamLimits

0x3151,	// (0x0006e09c) smil2_text_pane

0xaa97,	// (0x000759e2) bg_list_pane_cp06

0xbd37,	// (0x00076c82) grid_radio_pane

0xaa97,	// (0x000759e2) bg_popup_window_pane_cp06

0xbd3f,	// (0x00076c8a) main_fmradio_pane_t1

0xb6d0,	// (0x0007661b) heading_pane_cp04

0xbd4d,	// (0x00076c98) main_fmradio_pane_t2

0xcd1e,	// (0x00077c69) popup_cale_lunar_info_window_g1

0xbd5b,	// (0x00076ca6) main_fmradio_pane_t3

0xcd26,	// (0x00077c71) popup_cale_lunar_info_window_g2

0xbd69,	// (0x00076cb4) main_fmradio_pane_t4

0x0001,

0xbd77,	// (0x00076cc2) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0007a50d) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0007a447) main_fmradio_pane_t

0xbd85,	// (0x00076cd0) wait_bar_pane_cp03

0xbd8d,	// (0x00076cd8) cell_fmradio_pane_ParamLimits

0xbd8d,	// (0x00076cd8) cell_fmradio_pane

0xbbe6,	// (0x00076b31) cell_fmradio_pane_g1_ParamLimits

0xbbe6,	// (0x00076b31) cell_fmradio_pane_g1

0xaa97,	// (0x000759e2) grid_highlight_pane_cp011

0xbda0,	// (0x00076ceb) poc_content_pane_ParamLimits

0xbda0,	// (0x00076ceb) poc_content_pane

0xbdb2,	// (0x00076cfd) scroll_pane_cp019

0x31d1,	// (0x0006e11c) popup_call_poc_act_window_ParamLimits

0x31d1,	// (0x0006e11c) popup_call_poc_act_window

0x31f5,	// (0x0006e140) popup_call_poc_inact_window_ParamLimits

0x31f5,	// (0x0006e140) popup_call_poc_inact_window

0xf599,	// (0x0007a4e4) bg_popup_call_poc_act_pane_g

0xcc96,	// (0x00077be1) bg_popup_call_poc_inact_pane_g1

0xcc9e,	// (0x00077be9) bg_popup_call_poc_inact_pane_g2

0xbdba,	// (0x00076d05) popup_call_poc_act_window_g2

0xcca6,	// (0x00077bf1) bg_popup_call_poc_inact_pane_g3

0xccae,	// (0x00077bf9) bg_popup_call_poc_inact_pane_g4

0xccb6,	// (0x00077c01) bg_popup_call_poc_inact_pane_g5

0xbdc2,	// (0x00076d0d) popup_call_poc_act_window_t1_ParamLimits

0xbdc2,	// (0x00076d0d) popup_call_poc_act_window_t1

0xbdea,	// (0x00076d35) popup_call_poc_act_window_t2_ParamLimits

0xbdea,	// (0x00076d35) popup_call_poc_act_window_t2

0xbe12,	// (0x00076d5d) popup_call_poc_act_window_t3_ParamLimits

0xbe12,	// (0x00076d5d) popup_call_poc_act_window_t3

0xbe3a,	// (0x00076d85) popup_call_poc_act_window_t4_ParamLimits

0xbe3a,	// (0x00076d85) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0007a452) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0007a452) popup_call_poc_act_window_t

0xccbe,	// (0x00077c09) bg_popup_call_poc_inact_pane_g6

0xccc6,	// (0x00077c11) bg_popup_call_poc_inact_pane_g7

0xccce,	// (0x00077c19) bg_popup_call_poc_inact_pane_g8

0xbe4c,	// (0x00076d97) popup_call_poc_inact_window_g2

0xccd6,	// (0x00077c21) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0007a4d1) bg_popup_call_poc_inact_pane_g

0xbe54,	// (0x00076d9f) popup_call_poc_inact_window_t1_ParamLimits

0xbe54,	// (0x00076d9f) popup_call_poc_inact_window_t1

0xbe69,	// (0x00076db4) popup_call_poc_inact_window_t2_ParamLimits

0xbe69,	// (0x00076db4) popup_call_poc_inact_window_t2

0xbe7e,	// (0x00076dc9) popup_call_poc_inact_window_t3_ParamLimits

0xbe7e,	// (0x00076dc9) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0007a45b) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0007a45b) popup_call_poc_inact_window_t

0xce5b,	// (0x00077da6) context_pane_ParamLimits

0x3a36,	// (0x0006e981) signal_pane_ParamLimits

0xba44,	// (0x0007698f) main_call2_pane

0x97ac,	// (0x000746f7) popup_phob_thumbnail2_window_ParamLimits

0x97ac,	// (0x000746f7) popup_phob_thumbnail2_window

0x9749,	// (0x00074694) aid_hotspot_pointer_arrow_pane

0x9751,	// (0x0007469c) aid_hotspot_pointer_hand_pane

0x353e,	// (0x0006e489) phob_pre_status_pane_g5

0x1082,	// (0x0006bfcd) cams_zoom_pane_ParamLimits

0x1091,	// (0x0006bfdc) image_vga_pane_ParamLimits

0x10ab,	// (0x0006bff6) main_camera_pane_g1_ParamLimits

0x10bd,	// (0x0006c008) main_camera_pane_g2_ParamLimits

0x10cd,	// (0x0006c018) main_camera_pane_g3_ParamLimits

0x10dd,	// (0x0006c028) main_camera_pane_g4_ParamLimits

0x10ed,	// (0x0006c038) main_camera_pane_g5_ParamLimits

0x10fd,	// (0x0006c048) main_camera_pane_g6_ParamLimits

0x110f,	// (0x0006c05a) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0007a15a) main_camera_pane_g_ParamLimits

0x111f,	// (0x0006c06a) main_camera_pane_t1_ParamLimits

0x1135,	// (0x0006c080) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0007a16b) main_camera_pane_t_ParamLimits

0xacf2,	// (0x00075c3d) bg_popup_preview_window_pane_cp01_ParamLimits

0xacf2,	// (0x00075c3d) bg_popup_preview_window_pane_cp01

0xbe93,	// (0x00076dde) popup_phob_thumbnail2_window_g1_ParamLimits

0xbe93,	// (0x00076dde) popup_phob_thumbnail2_window_g1

0xaa97,	// (0x000759e2) call2_cli_visual_pane

0x3229,	// (0x0006e174) popup_call2_audio_conf_window_ParamLimits

0x3229,	// (0x0006e174) popup_call2_audio_conf_window

0x3249,	// (0x0006e194) popup_call2_audio_first_window_ParamLimits

0x3249,	// (0x0006e194) popup_call2_audio_first_window

0x32df,	// (0x0006e22a) popup_call2_audio_in_window_ParamLimits

0x32df,	// (0x0006e22a) popup_call2_audio_in_window

0x3327,	// (0x0006e272) popup_call2_audio_out_window_ParamLimits

0x3327,	// (0x0006e272) popup_call2_audio_out_window

0x3391,	// (0x0006e2dc) popup_call2_audio_second_window_ParamLimits

0x3391,	// (0x0006e2dc) popup_call2_audio_second_window

0x33f7,	// (0x0006e342) popup_call2_audio_wait_window_ParamLimits

0x33f7,	// (0x0006e342) popup_call2_audio_wait_window

0xaa97,	// (0x000759e2) bg_popup_call2_act_pane_cp03

0xacd4,	// (0x00075c1f) list_conf_pane_cp

0xbe9f,	// (0x00076dea) popup_call2_audio_conf_window_t1

0xb72d,	// (0x00076678) list_single_graphic_popup_conf2_pane_ParamLimits

0xb72d,	// (0x00076678) list_single_graphic_popup_conf2_pane

0xb740,	// (0x0007668b) list_highlight_pane_cp04

0xbead,	// (0x00076df8) list_single_graphic_popup_conf2_pane_g1

0xb751,	// (0x0007669c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0007a462) list_single_graphic_popup_conf2_pane_g

0xbeb7,	// (0x00076e02) list_single_graphic_popup_conf2_pane_t1

0xbec5,	// (0x00076e10) bg_popup_call2_act_pane_cp01_ParamLimits

0xbec5,	// (0x00076e10) bg_popup_call2_act_pane_cp01

0xbf4f,	// (0x00076e9a) call_type_pane_cp05_ParamLimits

0xbf4f,	// (0x00076e9a) call_type_pane_cp05

0xbfa3,	// (0x00076eee) popup_call2_audio_second_window_g1_ParamLimits

0xbfa3,	// (0x00076eee) popup_call2_audio_second_window_g1

0xbff7,	// (0x00076f42) popup_call2_audio_second_window_g2_ParamLimits

0xbff7,	// (0x00076f42) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0007a467) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0007a467) popup_call2_audio_second_window_g

0xc05c,	// (0x00076fa7) popup_call2_audio_second_window_t1_ParamLimits

0xc05c,	// (0x00076fa7) popup_call2_audio_second_window_t1

0xc117,	// (0x00077062) popup_call2_audio_second_window_t2_ParamLimits

0xc117,	// (0x00077062) popup_call2_audio_second_window_t2

0xc16a,	// (0x000770b5) popup_call2_audio_second_window_t3_ParamLimits

0xc16a,	// (0x000770b5) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0007a46e) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0007a46e) popup_call2_audio_second_window_t

0xaa97,	// (0x000759e2) bg_popup_call2_in_pane_cp02

0xaaa1,	// (0x000759ec) call_type_pane_cp04

0xaaa9,	// (0x000759f4) popup_call2_audio_wait_window_g1

0xaab1,	// (0x000759fc) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0007a047) popup_call2_audio_wait_window_g

0xaab9,	// (0x00075a04) popup_call2_audio_wait_window_t3

0xc25d,	// (0x000771a8) bg_popup_call2_act_pane_ParamLimits

0xc25d,	// (0x000771a8) bg_popup_call2_act_pane

0xc31d,	// (0x00077268) call_type_pane_cp03_ParamLimits

0xc31d,	// (0x00077268) call_type_pane_cp03

0xc381,	// (0x000772cc) popup_call2_audio_first_window_g1_ParamLimits

0xc381,	// (0x000772cc) popup_call2_audio_first_window_g1

0xc3f1,	// (0x0007733c) popup_call2_audio_first_window_g2_ParamLimits

0xc3f1,	// (0x0007733c) popup_call2_audio_first_window_g2

0xbb03,	// (0x00076a4e) popup_call2_audio_first_window_g3_ParamLimits

0xbb03,	// (0x00076a4e) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0007a477) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0007a477) popup_call2_audio_first_window_g

0xc4cf,	// (0x0007741a) popup_call2_audio_first_window_t1_ParamLimits

0xc4cf,	// (0x0007741a) popup_call2_audio_first_window_t1

0xc5d2,	// (0x0007751d) popup_call2_audio_first_window_t4_ParamLimits

0xc5d2,	// (0x0007751d) popup_call2_audio_first_window_t4

0xc6c1,	// (0x0007760c) popup_call2_audio_first_window_t5_ParamLimits

0xc6c1,	// (0x0007760c) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0007a482) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0007a482) popup_call2_audio_first_window_t

0xacea,	// (0x00075c35) bg_popup_call2_act_pane_g1

0xcd2e,	// (0x00077c79) popup_cale_lunar_info_window_t1

0xcd3c,	// (0x00077c87) popup_cale_lunar_info_window_t2

0xcd4a,	// (0x00077c95) popup_cale_lunar_info_window_t3

0xaa97,	// (0x000759e2) bg_popup_call2_bubble_pane

0xc7c2,	// (0x0007770d) bg_popup_call2_in_pane_cp01_ParamLimits

0xc7c2,	// (0x0007770d) bg_popup_call2_in_pane_cp01

0x9ff8,	// (0x00074f43) call_type_pane_cp02

0xc80a,	// (0x00077755) popup_call2_audio_out_window_g1_ParamLimits

0xc80a,	// (0x00077755) popup_call2_audio_out_window_g1

0xc836,	// (0x00077781) popup_call2_audio_out_window_g2_ParamLimits

0xc836,	// (0x00077781) popup_call2_audio_out_window_g2

0xc85e,	// (0x000777a9) popup_call2_audio_out_window_g3_ParamLimits

0xc85e,	// (0x000777a9) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0007a48b) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0007a48b) popup_call2_audio_out_window_g

0xc899,	// (0x000777e4) popup_call2_audio_out_window_t1_ParamLimits

0xc899,	// (0x000777e4) popup_call2_audio_out_window_t1

0xc8f8,	// (0x00077843) popup_call2_audio_out_window_t2_ParamLimits

0xc8f8,	// (0x00077843) popup_call2_audio_out_window_t2

0xc94c,	// (0x00077897) popup_call2_audio_out_window_t3_ParamLimits

0xc94c,	// (0x00077897) popup_call2_audio_out_window_t3

0xc962,	// (0x000778ad) popup_call2_audio_out_window_t4_ParamLimits

0xc962,	// (0x000778ad) popup_call2_audio_out_window_t4

0xc978,	// (0x000778c3) popup_call2_audio_out_window_t5_ParamLimits

0xc978,	// (0x000778c3) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0007a494) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0007a494) popup_call2_audio_out_window_t

0xc9dc,	// (0x00077927) bg_popup_call2_in_pane_ParamLimits

0xc9dc,	// (0x00077927) bg_popup_call2_in_pane

0xca38,	// (0x00077983) popup_call2_audio_in_window_g1_ParamLimits

0xca38,	// (0x00077983) popup_call2_audio_in_window_g1

0xca70,	// (0x000779bb) popup_call2_audio_in_window_g2_ParamLimits

0xca70,	// (0x000779bb) popup_call2_audio_in_window_g2

0xcaa8,	// (0x000779f3) popup_call2_audio_in_window_g3_ParamLimits

0xcaa8,	// (0x000779f3) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0007a4a1) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0007a4a1) popup_call2_audio_in_window_g

0xcb00,	// (0x00077a4b) popup_call2_audio_in_window_t1_ParamLimits

0xcb00,	// (0x00077a4b) popup_call2_audio_in_window_t1

0xcb80,	// (0x00077acb) popup_call2_audio_in_window_t2_ParamLimits

0xcb80,	// (0x00077acb) popup_call2_audio_in_window_t2

0xcc00,	// (0x00077b4b) popup_call2_audio_in_window_t3_ParamLimits

0xcc00,	// (0x00077b4b) popup_call2_audio_in_window_t3

0xcc1a,	// (0x00077b65) popup_call2_audio_in_window_t4_ParamLimits

0xcc1a,	// (0x00077b65) popup_call2_audio_in_window_t4

0xcc2c,	// (0x00077b77) popup_call2_audio_in_window_t5_ParamLimits

0xcc2c,	// (0x00077b77) popup_call2_audio_in_window_t5

0xcc41,	// (0x00077b8c) popup_call2_audio_in_window_t6_ParamLimits

0xcc41,	// (0x00077b8c) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0007a4aa) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0007a4aa) popup_call2_audio_in_window_t

0xacea,	// (0x00075c35) bg_popup_call2_in_pane_g1

0xcd58,	// (0x00077ca3) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0007a512) popup_cale_lunar_info_window_t

0xacf2,	// (0x00075c3d) bg_popup_call2_rect_pane_ParamLimits

0xacf2,	// (0x00075c3d) bg_popup_call2_rect_pane

0xaa97,	// (0x000759e2) call2_cli_visual_graphic_pane

0xaa97,	// (0x000759e2) call2_cli_visual_text_pane

0x97d3,	// (0x0007471e) smil_status_volume_pane_g3

0x0002,

0xae0c,	// (0x00075d57) call2_cli_visual_graphic_pane_g1

0xae0c,	// (0x00075d57) call2_cli_visual_graphic_pane_g2

0xae0c,	// (0x00075d57) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0007a4b7) call2_cli_visual_graphic_pane_g

0xcc56,	// (0x00077ba1) bg_popup_call2_rect_pane_g1

0xae98,	// (0x00075de3) bg_popup_call2_rect_pane_g2

0xcc5e,	// (0x00077ba9) bg_popup_call2_rect_pane_g3

0xcc66,	// (0x00077bb1) bg_popup_call2_rect_pane_g4

0xcc6e,	// (0x00077bb9) bg_popup_call2_rect_pane_g5

0xcc76,	// (0x00077bc1) bg_popup_call2_rect_pane_g6

0xcc7e,	// (0x00077bc9) bg_popup_call2_rect_pane_g7

0xcc86,	// (0x00077bd1) bg_popup_call2_rect_pane_g8

0xcc8e,	// (0x00077bd9) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0007a4be) bg_popup_call2_rect_pane_g

0xcc96,	// (0x00077be1) bg_popup_call2_bubble_pane_g1

0xcc9e,	// (0x00077be9) bg_popup_call2_bubble_pane_g2

0xcca6,	// (0x00077bf1) bg_popup_call2_bubble_pane_g3

0xccae,	// (0x00077bf9) bg_popup_call2_bubble_pane_g4

0xccb6,	// (0x00077c01) bg_popup_call2_bubble_pane_g5

0xccbe,	// (0x00077c09) bg_popup_call2_bubble_pane_g6

0xccc6,	// (0x00077c11) bg_popup_call2_bubble_pane_g7

0xccce,	// (0x00077c19) bg_popup_call2_bubble_pane_g8

0xccd6,	// (0x00077c21) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0007a4d1) bg_popup_call2_bubble_pane_g

0x0a12,	// (0x0006b95d) aid_cale_week_size_cell_pane

0x114b,	// (0x0006c096) aid_cams_cif_uncrop_pane_ParamLimits

0x114b,	// (0x0006c096) aid_cams_cif_uncrop_pane

0x12fb,	// (0x0006c246) aid_cams_size_cell_ParamLimits

0x12fb,	// (0x0006c246) aid_cams_size_cell

0x130f,	// (0x0006c25a) grid_cams_pane_ParamLimits

0x1329,	// (0x0006c274) linegrid_cams_pane_ParamLimits

0x1526,	// (0x0006c471) call_video_pane_t1

0x1544,	// (0x0006c48f) call_video_pane_t2

0x0001,

0xf273,	// (0x0007a1be) call_video_pane_t

0x1970,	// (0x0006c8bb) aid_cale_month_size_cell_pane_ParamLimits

0x1970,	// (0x0006c8bb) aid_cale_month_size_cell_pane

0xf610,	// (0x0007a55b) smil_status_volume_pane_g

0x97e0,	// (0x0007472b) volume_smil_pane_ParamLimits

0x9534,	// (0x0007447f) aid_popup2_width_pane

0x096c,	// (0x0006b8b7) cell_qdial_pane_g4_ParamLimits

0x096c,	// (0x0006b8b7) cell_qdial_pane_g4

0x2855,	// (0x0006d7a0) aid_blid_cardinal_pane_ParamLimits

0x2861,	// (0x0006d7ac) aid_blid_destination_pane_ParamLimits

0x2861,	// (0x0006d7ac) aid_blid_destination_pane

0xacf2,	// (0x00075c3d) bg_popup_call_poc_act_pane_ParamLimits

0xacf2,	// (0x00075c3d) bg_popup_call_poc_act_pane

0xacf2,	// (0x00075c3d) bg_popup_call_poc_inact_pane_ParamLimits

0xacf2,	// (0x00075c3d) bg_popup_call_poc_inact_pane

0xccde,	// (0x00077c29) bg_popup_call_poc_act_pane_g1

0xcce6,	// (0x00077c31) bg_popup_call_poc_act_pane_g2

0xccee,	// (0x00077c39) bg_popup_call_poc_act_pane_g3

0xccae,	// (0x00077bf9) bg_popup_call_poc_act_pane_g4

0xccb6,	// (0x00077c01) bg_popup_call_poc_act_pane_g5

0xccf6,	// (0x00077c41) bg_popup_call_poc_act_pane_g6

0xccc6,	// (0x00077c11) bg_popup_call_poc_act_pane_g7

0xccfe,	// (0x00077c49) bg_popup_call_poc_act_pane_g8

0xaa97,	// (0x000759e2) main_usb_pane

0x9787,	// (0x000746d2) popup_cale_lunar_info_window

0x181c,	// (0x0006c767) im_reading_pane_t1_ParamLimits

0xb076,	// (0x00075fc1) list_im_pane_ParamLimits

0xb087,	// (0x00075fd2) scroll_pane_cp07_ParamLimits

0xaa97,	// (0x000759e2) grid_highlight_pane_cp012

0xacf2,	// (0x00075c3d) mup_scale_pane_ParamLimits

0xbbe6,	// (0x00076b31) main_usb_pane_g1_ParamLimits

0xbbe6,	// (0x00076b31) main_usb_pane_g1

0x3453,	// (0x0006e39e) main_usb_pane_g2_ParamLimits

0x3453,	// (0x0006e39e) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0007a4fb) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0007a4fb) main_usb_pane_g

0x3469,	// (0x0006e3b4) main_usb_pane_t1_ParamLimits

0x3469,	// (0x0006e3b4) main_usb_pane_t1

0x347b,	// (0x0006e3c6) main_usb_pane_t2_ParamLimits

0x347b,	// (0x0006e3c6) main_usb_pane_t2

0x348d,	// (0x0006e3d8) main_usb_pane_t3_ParamLimits

0x348d,	// (0x0006e3d8) main_usb_pane_t3

0x349f,	// (0x0006e3ea) main_usb_pane_t4_ParamLimits

0x349f,	// (0x0006e3ea) main_usb_pane_t4

0x34b1,	// (0x0006e3fc) main_usb_pane_t5_ParamLimits

0x34b1,	// (0x0006e3fc) main_usb_pane_t5

0x34c3,	// (0x0006e40e) main_usb_pane_t6_ParamLimits

0x34c3,	// (0x0006e40e) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0007a500) main_usb_pane_t_ParamLimits

0x2804,	// (0x0006d74f) aid_text_placing

0x280d,	// (0x0006d758) main_location2_pane_t1_ParamLimits

0x281f,	// (0x0006d76a) main_location2_pane_t2_ParamLimits

0x2831,	// (0x0006d77c) main_location2_pane_t3_ParamLimits

0x2843,	// (0x0006d78e) main_location2_pane_t4_ParamLimits

0x2843,	// (0x0006d78e) main_location2_pane_t4

0xf3d4,	// (0x0007a31f) main_location2_pane_t_ParamLimits

0xad2e,	// (0x00075c79) find_pinb_pane_g2_ParamLimits

0xad2e,	// (0x00075c79) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0007a06d) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0007a06d) find_pinb_pane_g

0xad3a,	// (0x00075c85) find_pinb_pane_t1_ParamLimits

0xad4c,	// (0x00075c97) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0007a072) find_pinb_pane_t_ParamLimits

0xaa97,	// (0x000759e2) main_call3_pane

0x1e2f,	// (0x0006cd7a) cale_month_day_heading_pane_t1_ParamLimits

0x1eb5,	// (0x0006ce00) cale_month_day_heading_pane_t2_ParamLimits

0x1f46,	// (0x0006ce91) cale_month_day_heading_pane_t3_ParamLimits

0x1fd7,	// (0x0006cf22) cale_month_day_heading_pane_t4_ParamLimits

0x206c,	// (0x0006cfb7) cale_month_day_heading_pane_t5_ParamLimits

0x210d,	// (0x0006d058) cale_month_day_heading_pane_t6_ParamLimits

0x21ae,	// (0x0006d0f9) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0007a1f6) cale_month_day_heading_pane_t_ParamLimits

0xb33a,	// (0x00076285) smil_status_volume_pane

0x2f4e,	// (0x0006de99) postcard_address_pane_ParamLimits

0x2f4e,	// (0x0006de99) postcard_address_pane

0x2f60,	// (0x0006deab) postcard_message_pane_ParamLimits

0x2f60,	// (0x0006deab) postcard_message_pane

0x3431,	// (0x0006e37c) call2_cli_visual_pane_t1_ParamLimits

0x3431,	// (0x0006e37c) call2_cli_visual_pane_t1

0x3c63,	// (0x0006ebae) postcard_message_pane_t1_ParamLimits

0x3c63,	// (0x0006ebae) postcard_message_pane_t1

0x3c4c,	// (0x0006eb97) postcard_address_pane_t1_ParamLimits

0x3c4c,	// (0x0006eb97) postcard_address_pane_t1

0x3c38,	// (0x0006eb83) popup_call3_audio_in_window_ParamLimits

0x3c38,	// (0x0006eb83) popup_call3_audio_in_window

0x3ac3,	// (0x0006ea0e) bg_popup_call3_in_pane_ParamLimits

0x3ac3,	// (0x0006ea0e) bg_popup_call3_in_pane

0x3b39,	// (0x0006ea84) popup_call3_audio_in_window_g1_ParamLimits

0x3b39,	// (0x0006ea84) popup_call3_audio_in_window_g1

0x3b59,	// (0x0006eaa4) popup_call3_audio_in_window_g2_ParamLimits

0x3b59,	// (0x0006eaa4) popup_call3_audio_in_window_g2

0x3b79,	// (0x0006eac4) popup_call3_audio_in_window_g3_ParamLimits

0x3b79,	// (0x0006eac4) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0007a562) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0007a562) popup_call3_audio_in_window_g

0x3baa,	// (0x0006eaf5) popup_call3_audio_in_window_t1_ParamLimits

0x3baa,	// (0x0006eaf5) popup_call3_audio_in_window_t1

0x3be8,	// (0x0006eb33) popup_call3_audio_in_window_t2_ParamLimits

0x3be8,	// (0x0006eb33) popup_call3_audio_in_window_t2

0x3c26,	// (0x0006eb71) popup_call3_audio_in_window_t3_ParamLimits

0x3c26,	// (0x0006eb71) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0007a56b) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0007a56b) popup_call3_audio_in_window_t

0xba44,	// (0x0007698f) bg_popup_call3_rect_pane

0xcc56,	// (0x00077ba1) bg_popup_call3_rect_pane_g1

0xae98,	// (0x00075de3) bg_popup_call3_rect_pane_g2

0xcc5e,	// (0x00077ba9) bg_popup_call3_rect_pane_g3

0xcc66,	// (0x00077bb1) bg_popup_call3_rect_pane_g4

0xcc6e,	// (0x00077bb9) bg_popup_call3_rect_pane_g5

0xcc76,	// (0x00077bc1) bg_popup_call3_rect_pane_g6

0xcc7e,	// (0x00077bc9) bg_popup_call3_rect_pane_g7

0x2b45,	// (0x0006da90) mup_visualizer_osc_pane

0xbb11,	// (0x00076a5c) mup_visualizer_spec_pane

0x3af3,	// (0x0006ea3e) call3_video_qcif_pane_ParamLimits

0x3af3,	// (0x0006ea3e) call3_video_qcif_pane

0x3b06,	// (0x0006ea51) call3_video_qcif_uncrop_pane_ParamLimits

0x3b06,	// (0x0006ea51) call3_video_qcif_uncrop_pane

0x3b14,	// (0x0006ea5f) call3_video_subqcif_pane_ParamLimits

0x3b14,	// (0x0006ea5f) call3_video_subqcif_pane

0x3b28,	// (0x0006ea73) call3_video_subqcif_uncrop_pane_ParamLimits

0x3b28,	// (0x0006ea73) call3_video_subqcif_uncrop_pane

0x3b99,	// (0x0006eae4) popup_call3_audio_in_window_g4_ParamLimits

0x3b99,	// (0x0006eae4) popup_call3_audio_in_window_g4

0x3ab2,	// (0x0006e9fd) mup_spec_half_pane

0x3abb,	// (0x0006ea06) mup_spec_half_pane_cp

0xcebb,	// (0x00077e06) mup_osc_middle_pane

0xcec4,	// (0x00077e0f) mup_visualizer_osc_pane_g1

0x3a92,	// (0x0006e9dd) mup_spec_bar_pane_ParamLimits

0x3a92,	// (0x0006e9dd) mup_spec_bar_pane

0xcea8,	// (0x00077df3) mup_spec_bar_pane_g1

0xceb2,	// (0x00077dfd) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0007a556) mup_spec_bar_pane_g

0x0a12,	// (0x0006b95d) aid_cale_week_size_cell_pane_ParamLimits

0x0a2c,	// (0x0006b977) bg_cale_heading_pane_ParamLimits

0xaed5,	// (0x00075e20) bg_cale_pane_cp01_ParamLimits

0x0a44,	// (0x0006b98f) cale_week_corner_pane_ParamLimits

0x0a63,	// (0x0006b9ae) cale_week_day_heading_pane_ParamLimits

0x0a80,	// (0x0006b9cb) cale_week_scroll_pane_g1_ParamLimits

0x0a93,	// (0x0006b9de) cale_week_scroll_pane_g2_ParamLimits

0x0aab,	// (0x0006b9f6) cale_week_scroll_pane_g3_ParamLimits

0x0ac3,	// (0x0006ba0e) cale_week_scroll_pane_g4_ParamLimits

0x0adb,	// (0x0006ba26) cale_week_scroll_pane_g5_ParamLimits

0x0afb,	// (0x0006ba46) cale_week_scroll_pane_g6_ParamLimits

0x0b1b,	// (0x0006ba66) cale_week_scroll_pane_g7_ParamLimits

0x0b3b,	// (0x0006ba86) cale_week_scroll_pane_g8_ParamLimits

0x0b5f,	// (0x0006baaa) cale_week_scroll_pane_g9_ParamLimits

0x0b77,	// (0x0006bac2) cale_week_scroll_pane_g10_ParamLimits

0x0b8f,	// (0x0006bada) cale_week_scroll_pane_g11_ParamLimits

0x0ba7,	// (0x0006baf2) cale_week_scroll_pane_g12_ParamLimits

0x0bbf,	// (0x0006bb0a) cale_week_scroll_pane_g13_ParamLimits

0x0bbf,	// (0x0006bb0a) cale_week_scroll_pane_g14_ParamLimits

0x0bbf,	// (0x0006bb0a) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0007a0fe) cale_week_scroll_pane_g_ParamLimits

0x0bd7,	// (0x0006bb22) cale_week_time_pane_ParamLimits

0x0bfb,	// (0x0006bb46) grid_cale_week_pane_ParamLimits

0xaef3,	// (0x00075e3e) listscroll_cale_week_pane_t1

0xaf05,	// (0x00075e50) scroll_pane_cp08_ParamLimits

0x19c5,	// (0x0006c910) cale_month_corner_pane_ParamLimits

0xb310,	// (0x0007625b) cale_month_pane_t1

0x1dcd,	// (0x0006cd18) cale_month_week_pane_ParamLimits

0x2660,	// (0x0006d5ab) popup_call_status_window_g1_ParamLimits

0x2674,	// (0x0006d5bf) popup_call_status_window_g2_ParamLimits

0x2688,	// (0x0006d5d3) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0007a2a6) popup_call_status_window_g_ParamLimits

0xb6c0,	// (0x0007660b) aid_call2_pane

0x2db8,	// (0x0006dd03) msg_header_pane_g1

0x2f4e,	// (0x0006de99) postcard_address2_pane_ParamLimits

0x2f4e,	// (0x0006de99) postcard_address2_pane

0x2f60,	// (0x0006deab) postcard_message2_pane_ParamLimits

0x2f60,	// (0x0006deab) postcard_message2_pane

0x3a44,	// (0x0006e98f) message2_row_pane_ParamLimits

0x3a44,	// (0x0006e98f) message2_row_pane

0x3a60,	// (0x0006e9ab) address2_row_pane_ParamLimits

0x3a60,	// (0x0006e9ab) address2_row_pane

0xce76,	// (0x00077dc1) postcard_message2_row_pane_g1

0xce7e,	// (0x00077dc9) postcard_message2_row_pane_t1

0xce76,	// (0x00077dc1) address2_row_pane_g1

0xce7e,	// (0x00077dc9) address2_row_pane_t1

0x0fee,	// (0x0006bf39) aid_size_cell_vorec

0xaa97,	// (0x000759e2) main_rss_pane

0x3a73,	// (0x0006e9be) rss_list_single_pane_ParamLimits

0x3a73,	// (0x0006e9be) rss_list_single_pane

0xce8c,	// (0x00077dd7) rss_list_single_pane_t1

0xce9a,	// (0x00077de5) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0007a551) rss_list_single_pane_t

0xaa97,	// (0x000759e2) main_camera2_pane

0xaa97,	// (0x000759e2) main_video2_pane

0x3cdc,	// (0x0006ec27) cams_zoom_pane_cp2_ParamLimits

0x3cdc,	// (0x0006ec27) cams_zoom_pane_cp2

0x3cfc,	// (0x0006ec47) image2_vga_pane_ParamLimits

0x3cfc,	// (0x0006ec47) image2_vga_pane

0x3d4d,	// (0x0006ec98) main_camera2_pane_g1_ParamLimits

0x3d4d,	// (0x0006ec98) main_camera2_pane_g1

0x3d6d,	// (0x0006ecb8) main_camera2_pane_g2_ParamLimits

0x3d6d,	// (0x0006ecb8) main_camera2_pane_g2

0x3d8d,	// (0x0006ecd8) main_camera2_pane_g3_ParamLimits

0x3d8d,	// (0x0006ecd8) main_camera2_pane_g3

0x3dad,	// (0x0006ecf8) main_camera2_pane_g4_ParamLimits

0x3dad,	// (0x0006ecf8) main_camera2_pane_g4

0x3dcd,	// (0x0006ed18) main_camera2_pane_g5_ParamLimits

0x3dcd,	// (0x0006ed18) main_camera2_pane_g5

0x3ded,	// (0x0006ed38) main_camera2_pane_g6_ParamLimits

0x3ded,	// (0x0006ed38) main_camera2_pane_g6

0x3e0d,	// (0x0006ed58) main_camera2_pane_g7_ParamLimits

0x3e0d,	// (0x0006ed58) main_camera2_pane_g7

0x3e2d,	// (0x0006ed78) main_camera2_pane_g8_ParamLimits

0x3e2d,	// (0x0006ed78) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0007a572) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0007a572) main_camera2_pane_g

0x3e6d,	// (0x0006edb8) main_camera2_pane_t1_ParamLimits

0x3e6d,	// (0x0006edb8) main_camera2_pane_t1

0x3ea2,	// (0x0006eded) main_camera2_pane_t2_ParamLimits

0x3ea2,	// (0x0006eded) main_camera2_pane_t2

0x3ec8,	// (0x0006ee13) main_camera2_pane_t3_ParamLimits

0x3ec8,	// (0x0006ee13) main_camera2_pane_t3

0x3f26,	// (0x0006ee71) main_camera2_pane_t4_ParamLimits

0x3f26,	// (0x0006ee71) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0007a585) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0007a585) main_camera2_pane_t

0x3fb8,	// (0x0006ef03) cams_zoom_pane_cp4_ParamLimits

0x3fb8,	// (0x0006ef03) cams_zoom_pane_cp4

0x3fce,	// (0x0006ef19) image2_cif_pane_ParamLimits

0x3fce,	// (0x0006ef19) image2_cif_pane

0x3ff9,	// (0x0006ef44) image2_subqcif_pane_ParamLimits

0x3ff9,	// (0x0006ef44) image2_subqcif_pane

0x4013,	// (0x0006ef5e) main_video2_pane_g1_ParamLimits

0x4013,	// (0x0006ef5e) main_video2_pane_g1

0x402d,	// (0x0006ef78) main_video2_pane_g2_ParamLimits

0x402d,	// (0x0006ef78) main_video2_pane_g2

0x4043,	// (0x0006ef8e) main_video2_pane_g3_ParamLimits

0x4043,	// (0x0006ef8e) main_video2_pane_g3

0x4059,	// (0x0006efa4) main_video2_pane_g4_ParamLimits

0x4059,	// (0x0006efa4) main_video2_pane_g4

0x406f,	// (0x0006efba) main_video2_pane_g5_ParamLimits

0x406f,	// (0x0006efba) main_video2_pane_g5

0x4085,	// (0x0006efd0) main_video2_pane_g6_ParamLimits

0x4085,	// (0x0006efd0) main_video2_pane_g6

0x0005,

0xf649,	// (0x0007a594) main_video2_pane_g_ParamLimits

0xf649,	// (0x0007a594) main_video2_pane_g

0x409f,	// (0x0006efea) main_video2_pane_t1_ParamLimits

0x409f,	// (0x0006efea) main_video2_pane_t1

0x40c3,	// (0x0006f00e) main_video2_pane_t2_ParamLimits

0x40c3,	// (0x0006f00e) main_video2_pane_t2

0x4111,	// (0x0006f05c) main_video2_pane_t3_ParamLimits

0x4111,	// (0x0006f05c) main_video2_pane_t3

0x0002,

0xf656,	// (0x0007a5a1) main_video2_pane_t_ParamLimits

0xf656,	// (0x0007a5a1) main_video2_pane_t

0x357e,	// (0x0006e4c9) call_muted_g2

0x0001,

0xf5f8,	// (0x0007a543) call_muted_g

0xaa97,	// (0x000759e2) main_mup2_pane

0x4155,	// (0x0006f0a0) main_mup2_pane_g1_ParamLimits

0x4155,	// (0x0006f0a0) main_mup2_pane_g1

0x4161,	// (0x0006f0ac) main_mup2_pane_g2_ParamLimits

0x4161,	// (0x0006f0ac) main_mup2_pane_g2

0x984e,	// (0x00074799) main_mup_pane_g13_cp1

0x9856,	// (0x000747a1) mup_volume_pane_cp1

0x417d,	// (0x0006f0c8) main_mup2_pane_g4_ParamLimits

0x417d,	// (0x0006f0c8) main_mup2_pane_g4

0x418f,	// (0x0006f0da) main_mup2_pane_g5_ParamLimits

0x418f,	// (0x0006f0da) main_mup2_pane_g5

0x41a1,	// (0x0006f0ec) main_mup2_pane_g6_ParamLimits

0x41a1,	// (0x0006f0ec) main_mup2_pane_g6

0x41b3,	// (0x0006f0fe) main_mup2_pane_g7_ParamLimits

0x41b3,	// (0x0006f0fe) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0007a5a8) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0007a5a8) main_mup2_pane_g

0x41cb,	// (0x0006f116) main_mup2_pane_t1_ParamLimits

0x41cb,	// (0x0006f116) main_mup2_pane_t1

0x41e1,	// (0x0006f12c) main_mup2_pane_t2_ParamLimits

0x41e1,	// (0x0006f12c) main_mup2_pane_t2

0x41f7,	// (0x0006f142) main_mup2_pane_t3_ParamLimits

0x41f7,	// (0x0006f142) main_mup2_pane_t3

0x420d,	// (0x0006f158) main_mup2_pane_t4_ParamLimits

0x420d,	// (0x0006f158) main_mup2_pane_t4

0x4225,	// (0x0006f170) main_mup2_pane_t5_ParamLimits

0x4225,	// (0x0006f170) main_mup2_pane_t5

0x423d,	// (0x0006f188) main_mup2_pane_t6_ParamLimits

0x423d,	// (0x0006f188) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0007a5b7) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0007a5b7) main_mup2_pane_t

0x426d,	// (0x0006f1b8) mup2_visualizer_pane_ParamLimits

0x426d,	// (0x0006f1b8) mup2_visualizer_pane

0x429b,	// (0x0006f1e6) mup_progress_pane_cp_ParamLimits

0x429b,	// (0x0006f1e6) mup_progress_pane_cp

0x9839,	// (0x00074784) mup_volume_pane_cp_ParamLimits

0x9839,	// (0x00074784) mup_volume_pane_cp

0x42af,	// (0x0006f1fa) mup2_visualizer_pane_g1_ParamLimits

0x42af,	// (0x0006f1fa) mup2_visualizer_pane_g1

0xcefb,	// (0x00077e46) mup2_visualizer_pane_g2_ParamLimits

0xcefb,	// (0x00077e46) mup2_visualizer_pane_g2

0x42c6,	// (0x0006f211) mup2_visualizer_pane_g3_ParamLimits

0x42c6,	// (0x0006f211) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0007a5c4) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0007a5c4) mup2_visualizer_pane_g

0xbd2f,	// (0x00076c7a) aid_size_cell_fmradio

0x3730,	// (0x0006e67b) aid_height_parent_landcape

0xb105,	// (0x00076050) wml_content_pane_cp

0xb10d,	// (0x00076058) wml_tabs_pane

0xb116,	// (0x00076061) popup_wml_miniature_window

0xb11e,	// (0x00076069) scroll_pane_cp021

0xb132,	// (0x0007607d) wml_content_pane_comp8

0xaa97,	// (0x000759e2) bg_popup_sub_pane_cp05

0xcf19,	// (0x00077e64) popup_wml_miniature_window_g1

0xcf21,	// (0x00077e6c) wml_miniature_view_pane

0x42d2,	// (0x0006f21d) aid_size_wml_view

0x42da,	// (0x0006f225) wml_miniature_view_pane_g1

0x42e3,	// (0x0006f22e) wml_miniature_view_pane_g2

0x42ec,	// (0x0006f237) wml_miniature_view_pane_g3

0x42f4,	// (0x0006f23f) wml_miniature_view_pane_g4

0x42fc,	// (0x0006f247) wml_miniature_view_pane_g5

0x4304,	// (0x0006f24f) wml_miniature_view_pane_g6

0x430c,	// (0x0006f257) wml_miniature_view_pane_g7

0x4314,	// (0x0006f25f) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0007a5cb) wml_miniature_view_pane_g

0xcf29,	// (0x00077e74) background_graphic_ParamLimits

0xcf29,	// (0x00077e74) background_graphic

0xcf35,	// (0x00077e80) wml_tabs_2_pane

0xcf3e,	// (0x00077e89) wml_tabs_3_pane_ParamLimits

0xcf3e,	// (0x00077e89) wml_tabs_3_pane

0xcf50,	// (0x00077e9b) wml_tabs_4_pane_ParamLimits

0xcf50,	// (0x00077e9b) wml_tabs_4_pane

0xcf66,	// (0x00077eb1) wml_tabs_5_pane_ParamLimits

0xcf66,	// (0x00077eb1) wml_tabs_5_pane

0xcf80,	// (0x00077ecb) wml_tabs_pane_g2_ParamLimits

0xcf80,	// (0x00077ecb) wml_tabs_pane_g2

0xcf94,	// (0x00077edf) wml_tabs_pane_g3_ParamLimits

0xcf94,	// (0x00077edf) wml_tabs_pane_g3

0x431c,	// (0x0006f267) wml_tabs_2_active_pane_ParamLimits

0x431c,	// (0x0006f267) wml_tabs_2_active_pane

0x4330,	// (0x0006f27b) wml_tabs_2_passive_pane_ParamLimits

0x4330,	// (0x0006f27b) wml_tabs_2_passive_pane

0x4344,	// (0x0006f28f) wml_tabs_3_active_pane_cp_ParamLimits

0x4344,	// (0x0006f28f) wml_tabs_3_active_pane_cp

0x4359,	// (0x0006f2a4) wml_tabs_3_passive_pane_ParamLimits

0x4359,	// (0x0006f2a4) wml_tabs_3_passive_pane

0x436c,	// (0x0006f2b7) wml_tabs_3_passive_pane_cp_ParamLimits

0x436c,	// (0x0006f2b7) wml_tabs_3_passive_pane_cp

0x4383,	// (0x0006f2ce) tabs_4_active_pane

0x438b,	// (0x0006f2d6) tabs_4_passive_pane

0x4395,	// (0x0006f2e0) tabs_4_passive_pane_cp

0x439d,	// (0x0006f2e8) tabs_4_passive_pane_cp2

0x344b,	// (0x0006e396) aid_height_text

0x2b1b,	// (0x0006da66) mup_volume_cont_pane_ParamLimits

0x2b1b,	// (0x0006da66) mup_volume_cont_pane

0x05f0,	// (0x0006b53b) aid_size_cell_pinb

0x05fa,	// (0x0006b545) aid_size_list_pinb

0x4287,	// (0x0006f1d2) mup2_volume_cont_pane_ParamLimits

0x4287,	// (0x0006f1d2) mup2_volume_cont_pane

0x9825,	// (0x00074770) mup2_volume_cont_pane_g1_ParamLimits

0x9825,	// (0x00074770) mup2_volume_cont_pane_g1

0x02b3,	// (0x0006b1fe) aid_size_cell_touch_ParamLimits

0x02b3,	// (0x0006b1fe) aid_size_cell_touch

0x04e0,	// (0x0006b42b) touch_pane_ParamLimits

0x04e0,	// (0x0006b42b) touch_pane

0x95a8,	// (0x000744f3) main_rss2_pane

0xcfb1,	// (0x00077efc) listscroll_rss2_pane

0xcfba,	// (0x00077f05) rss2_navigation_pane

0xcfc2,	// (0x00077f0d) list_rss2_pane

0xb803,	// (0x0007674e) scroll_pane_cp22

0xcfca,	// (0x00077f15) rss2_navigation_pane_g1

0xcfd3,	// (0x00077f1e) rss2_navigation_pane_g2

0xcfdb,	// (0x00077f26) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0007a5dc) rss2_navigation_pane_g

0xcfe3,	// (0x00077f2e) rss2_navigation_pane_t1

0x43a7,	// (0x0006f2f2) rss2_list_single_pane_ParamLimits

0x43a7,	// (0x0006f2f2) rss2_list_single_pane

0xcff1,	// (0x00077f3c) rss2_list_single_pane_t2

0xcfff,	// (0x00077f4a) rss2_list_single_pane_t3_ParamLimits

0xcfff,	// (0x00077f4a) rss2_list_single_pane_t3

0xd01c,	// (0x00077f67) rss2_list_single_pane_t4

0x246a,	// (0x0006d3b5) smil_status_pane_g1

0x959a,	// (0x000744e5) main_image2_pane_ParamLimits

0x959a,	// (0x000744e5) main_image2_pane

0x3e4d,	// (0x0006ed98) main_camera2_pane_g9_ParamLimits

0x3e4d,	// (0x0006ed98) main_camera2_pane_g9

0x3f7b,	// (0x0006eec6) main_camera2_pane_t5_ParamLimits

0x3f7b,	// (0x0006eec6) main_camera2_pane_t5

0x97f5,	// (0x00074740) main_camera2_pane_t6_ParamLimits

0x97f5,	// (0x00074740) main_camera2_pane_t6

0x43bc,	// (0x0006f307) main_image2_pane_g1_ParamLimits

0x43bc,	// (0x0006f307) main_image2_pane_g1

0x3187,	// (0x0006e0d2) smil2_video_pane_ParamLimits

0x3187,	// (0x0006e0d2) smil2_video_pane

0x9550,	// (0x0007449b) aid_zoom_text_primary_cp

0x9590,	// (0x000744db) popup_preview_fixed_window

0xb06e,	// (0x00075fb9) im_reading_pane_g1

0x3cc4,	// (0x0006ec0f) cams2_bc_adjust_pane_cp_ParamLimits

0x3cc4,	// (0x0006ec0f) cams2_bc_adjust_pane_cp

0x3faa,	// (0x0006eef5) cams2_bc_adjust_pane_ParamLimits

0x3faa,	// (0x0006eef5) cams2_bc_adjust_pane

0xda86,	// (0x000789d1) cams2_bc_adjust_pane_g1

0x985e,	// (0x000747a9) cams2_slider_pane

0x9867,	// (0x000747b2) cams2_slider_pane_g1

0x9870,	// (0x000747bb) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0007a5e3) cams2_slider_pane_g

0x06e8,	// (0x0006b633) calc_display_pane_ParamLimits

0x0710,	// (0x0006b65b) calc_paper_pane_ParamLimits

0x0733,	// (0x0006b67e) grid_calc_pane_ParamLimits

0x96dc,	// (0x00074627) popup_clock_digital_window_t1_ParamLimits

0xbccc,	// (0x00076c17) main_image_pane_t1

0x06ca,	// (0x0006b615) aid_size_cell_calc_ParamLimits

0x06ca,	// (0x0006b615) aid_size_cell_calc

0x3788,	// (0x0006e6d3) popup_blid_sat_info2_window_ParamLimits

0x3788,	// (0x0006e6d3) popup_blid_sat_info2_window

0xd032,	// (0x00077f7d) aid_size_cell_blid

0xd03a,	// (0x00077f85) bg_popup_window_pane_cp07

0xd05d,	// (0x00077fa8) grid_popup_blid_pane

0xd067,	// (0x00077fb2) heading_pane_cp05_ParamLimits

0xd067,	// (0x00077fb2) heading_pane_cp05

0xd131,	// (0x0007807c) cell_popup_blid_pane_ParamLimits

0xd131,	// (0x0007807c) cell_popup_blid_pane

0xd155,	// (0x000780a0) cell_popup_blid_pane_g1

0xd15d,	// (0x000780a8) cell_popup_blid_pane_t1

0x4257,	// (0x0006f1a2) mup2_indicator_pane_ParamLimits

0x4257,	// (0x0006f1a2) mup2_indicator_pane

0xba44,	// (0x0007698f) mup2_visualizer_osc_pane

0xcf07,	// (0x00077e52) mup2_visualizer_spec_pane_ParamLimits

0xcf07,	// (0x00077e52) mup2_visualizer_spec_pane

0x43d2,	// (0x0006f31d) mup2_spec_half_pane

0x43db,	// (0x0006f326) mup2_spec_half_pane_cp

0x43e3,	// (0x0006f32e) mup2_spec_bar_pane_ParamLimits

0x43e3,	// (0x0006f32e) mup2_spec_bar_pane

0xcea8,	// (0x00077df3) mup2_spec_bar_pane_g1

0xceb2,	// (0x00077dfd) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0007a556) mup2_spec_bar_pane_g

0x4403,	// (0x0006f34e) mup2_osc_middle_pane

0xcec4,	// (0x00077e0f) mup2_visualizer_osc_pane_g1

0x9f29,	// (0x00074e74) popup_number_entry_window_t1_ParamLimits

0x9f3c,	// (0x00074e87) popup_number_entry_window_t2_ParamLimits

0x9f4e,	// (0x00074e99) popup_number_entry_window_t3_ParamLimits

0x0532,	// (0x0006b47d) popup_number_entry_window_t5_ParamLimits

0x0532,	// (0x0006b47d) popup_number_entry_window_t5

0xf0cd,	// (0x0007a018) popup_number_entry_window_t_ParamLimits

0x9f60,	// (0x00074eab) text_title_cp2_ParamLimits

0x9759,	// (0x000746a4) aid_hotspot_pointer_text2_pane

0x9773,	// (0x000746be) main_viewer_pane_g9_ParamLimits

0x9773,	// (0x000746be) main_viewer_pane_g9

0xb310,	// (0x0007625b) cale_month_pane_t1_ParamLimits

0xb34d,	// (0x00076298) bg_cale_pane_ParamLimits

0xb365,	// (0x000762b0) list_cale_pane_ParamLimits

0xb376,	// (0x000762c1) listscroll_cale_day_pane_t1

0xb388,	// (0x000762d3) scroll_pane_cp09_ParamLimits

0x2b4d,	// (0x0006da98) main_mup_eq_pane_t1_ParamLimits

0x2b4d,	// (0x0006da98) main_mup_eq_pane_t1

0x2b67,	// (0x0006dab2) main_mup_eq_pane_t2_ParamLimits

0x2b67,	// (0x0006dab2) main_mup_eq_pane_t2

0x2b81,	// (0x0006dacc) main_mup_eq_pane_t3_ParamLimits

0x2b81,	// (0x0006dacc) main_mup_eq_pane_t3

0x2b9d,	// (0x0006dae8) main_mup_eq_pane_t4_ParamLimits

0x2b9d,	// (0x0006dae8) main_mup_eq_pane_t4

0x2bb9,	// (0x0006db04) main_mup_eq_pane_t5_ParamLimits

0x2bb9,	// (0x0006db04) main_mup_eq_pane_t5

0x2bd5,	// (0x0006db20) main_mup_eq_pane_t6_ParamLimits

0x2bd5,	// (0x0006db20) main_mup_eq_pane_t6

0x2be9,	// (0x0006db34) main_mup_eq_pane_t7_ParamLimits

0x2be9,	// (0x0006db34) main_mup_eq_pane_t7

0x2bfd,	// (0x0006db48) main_mup_eq_pane_t8_ParamLimits

0x2bfd,	// (0x0006db48) main_mup_eq_pane_t8

0x2c11,	// (0x0006db5c) main_mup_eq_pane_t9_ParamLimits

0x2c11,	// (0x0006db5c) main_mup_eq_pane_t9

0x2c2b,	// (0x0006db76) main_mup_eq_pane_t10_ParamLimits

0x2c2b,	// (0x0006db76) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0007a3a5) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0007a3a5) main_mup_eq_pane_t

0x2cda,	// (0x0006dc25) mup_equalizer_pane_cp5_ParamLimits

0x2cee,	// (0x0006dc39) mup_equalizer_pane_cp6_ParamLimits

0x2d02,	// (0x0006dc4d) mup_equalizer_pane_cp7_ParamLimits

0x95a8,	// (0x000744f3) main_gallery_pane

0xcecd,	// (0x00077e18) smil2_volume_pane

0xced5,	// (0x00077e20) smil_status_volume_pane_g1_ParamLimits

0xcee8,	// (0x00077e33) smil_status_volume_pane_g2_ParamLimits

0x97d3,	// (0x0007471e) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0007a55b) smil_status_volume_pane_g_ParamLimits

0xd03a,	// (0x00077f85) bg_popup_window_pane_cp07_ParamLimits

0xd048,	// (0x00077f93) blid_firmament_pane

0x440c,	// (0x0006f357) aid_size_cell_gallery_ParamLimits

0x440c,	// (0x0006f357) aid_size_cell_gallery

0x4422,	// (0x0006f36d) grid_gallery_pane_ParamLimits

0x4422,	// (0x0006f36d) grid_gallery_pane

0x443b,	// (0x0006f386) cell_gallery_pane_ParamLimits

0x443b,	// (0x0006f386) cell_gallery_pane

0xd16b,	// (0x000780b6) bg_cell_gallery_focus_pane_ParamLimits

0xd16b,	// (0x000780b6) bg_cell_gallery_focus_pane

0xd17d,	// (0x000780c8) cell_gallery_pane_g1_ParamLimits

0xd17d,	// (0x000780c8) cell_gallery_pane_g1

0x4484,	// (0x0006f3cf) cell_gallery_pane_g2_ParamLimits

0x4484,	// (0x0006f3cf) cell_gallery_pane_g2

0x4491,	// (0x0006f3dc) cell_gallery_pane_g3_ParamLimits

0x4491,	// (0x0006f3dc) cell_gallery_pane_g3

0xd189,	// (0x000780d4) cell_gallery_pane_g4_ParamLimits

0xd189,	// (0x000780d4) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0007a609) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0007a609) cell_gallery_pane_g

0xd195,	// (0x000780e0) bg_cell_gallery_focus_pane_g1

0xd19d,	// (0x000780e8) bg_cell_gallery_focus_pane_g2

0xd1a5,	// (0x000780f0) bg_cell_gallery_focus_pane_g3

0xd1ad,	// (0x000780f8) bg_cell_gallery_focus_pane_g4

0xd1b5,	// (0x00078100) bg_cell_gallery_focus_pane_g5

0xd1bd,	// (0x00078108) bg_cell_gallery_focus_pane_g6

0xd1c5,	// (0x00078110) bg_cell_gallery_focus_pane_g7

0xd1cd,	// (0x00078118) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0007a612) bg_cell_gallery_focus_pane_g

0xd1d5,	// (0x00078120) aid_firma_cardinal

0xd1e9,	// (0x00078134) blid_firmament_pane_t1

0xd200,	// (0x0007814b) blid_firmament_pane_t2

0xd217,	// (0x00078162) blid_firmament_pane_t3

0xd22e,	// (0x00078179) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0007a623) blid_firmament_pane_t

0xd245,	// (0x00078190) blid_sat_info_pane

0xd255,	// (0x000781a0) blid_sat_info_pane_g1

0xd255,	// (0x000781a0) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0007a62c) blid_sat_info_pane_g

0xd25f,	// (0x000781aa) blid_sat_info_pane_t1

0xd26d,	// (0x000781b8) smil2_volume_content_pane

0xd276,	// (0x000781c1) smil2_volume_pane_g1

0xd27e,	// (0x000781c9) smil2_volume_content_pane_g1

0xd287,	// (0x000781d2) smil2_volume_content_pane_g2

0xd290,	// (0x000781db) smil2_volume_content_pane_g3

0xd299,	// (0x000781e4) smil2_volume_content_pane_g4

0xd2a2,	// (0x000781ed) smil2_volume_content_pane_g5

0xd2ab,	// (0x000781f6) smil2_volume_content_pane_g6

0xd2b4,	// (0x000781ff) smil2_volume_content_pane_g7

0xd2bd,	// (0x00078208) smil2_volume_content_pane_g8

0xd2c6,	// (0x00078211) smil2_volume_content_pane_g9

0xd2cf,	// (0x0007821a) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0007a631) smil2_volume_content_pane_g

0x0caf,	// (0x0006bbfa) cale_week_day_heading_pane_t1_ParamLimits

0x0cf4,	// (0x0006bc3f) cale_week_day_heading_pane_t2_ParamLimits

0x0d3e,	// (0x0006bc89) cale_week_day_heading_pane_t3_ParamLimits

0x0d88,	// (0x0006bcd3) cale_week_day_heading_pane_t4_ParamLimits

0x0dd2,	// (0x0006bd1d) cale_week_day_heading_pane_t5_ParamLimits

0x0e24,	// (0x0006bd6f) cale_week_day_heading_pane_t6_ParamLimits

0x0e76,	// (0x0006bdc1) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0007a11d) cale_week_day_heading_pane_t_ParamLimits

0xaf22,	// (0x00075e6d) bg_cale_side_pane_ParamLimits

0x0ebb,	// (0x0006be06) cale_week_time_pane_t1_ParamLimits

0x0ed5,	// (0x0006be20) cale_week_time_pane_t2_ParamLimits

0x0eef,	// (0x0006be3a) cale_week_time_pane_t3_ParamLimits

0x0f09,	// (0x0006be54) cale_week_time_pane_t4_ParamLimits

0x0f23,	// (0x0006be6e) cale_week_time_pane_t5_ParamLimits

0x0f3d,	// (0x0006be88) cale_week_time_pane_t6_ParamLimits

0x0f57,	// (0x0006bea2) cale_week_time_pane_t7_ParamLimits

0x0f71,	// (0x0006bebc) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0007a12c) cale_week_time_pane_t_ParamLimits

0x0f91,	// (0x0006bedc) cell_cale_week_pane_g2_ParamLimits

0xaf22,	// (0x00075e6d) bg_cale_side_pane_cp01_ParamLimits

0x2257,	// (0x0006d1a2) cale_month_week_pane_t1_ParamLimits

0x2270,	// (0x0006d1bb) cale_month_week_pane_t2_ParamLimits

0x2289,	// (0x0006d1d4) cale_month_week_pane_t3_ParamLimits

0x22a2,	// (0x0006d1ed) cale_month_week_pane_t4_ParamLimits

0x22bb,	// (0x0006d206) cale_month_week_pane_t5_ParamLimits

0x22d4,	// (0x0006d21f) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0007a205) cale_month_week_pane_t_ParamLimits

0x9658,	// (0x000745a3) cell_cale_month_pane_g1_ParamLimits

0x95a8,	// (0x000744f3) main_cale_event_viewer_pane

0x9522,	// (0x0007446d) listscroll_cale_event_viewer_pane

0xd2d8,	// (0x00078223) list_cale_ev_pane

0xd2e0,	// (0x0007822b) scroll_pane_cp023

0xd2ec,	// (0x00078237) field_cale_ev_pane_ParamLimits

0xd2ec,	// (0x00078237) field_cale_ev_pane

0xd30a,	// (0x00078255) field_cale_ev_content_pane_ParamLimits

0xd30a,	// (0x00078255) field_cale_ev_content_pane

0xd316,	// (0x00078261) field_cale_ev_pane_g1_ParamLimits

0xd316,	// (0x00078261) field_cale_ev_pane_g1

0xd322,	// (0x0007826d) field_cale_ev_pane_g2_ParamLimits

0xd322,	// (0x0007826d) field_cale_ev_pane_g2

0xd33a,	// (0x00078285) field_cale_ev_pane_g3_ParamLimits

0xd33a,	// (0x00078285) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0007a646) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0007a646) field_cale_ev_pane_g

0xd352,	// (0x0007829d) field_cale_ev_pane_t1_ParamLimits

0xd352,	// (0x0007829d) field_cale_ev_pane_t1

0xd369,	// (0x000782b4) field_cale_ev_content_pane_t1_ParamLimits

0xd369,	// (0x000782b4) field_cale_ev_content_pane_t1

0x2dad,	// (0x0006dcf8) bg_button_pane_cp01

0x0a00,	// (0x0006b94b) listscroll_cale_week_pane_ParamLimits

0xaecc,	// (0x00075e17) popup_toolbar_window_cp01

0xaef3,	// (0x00075e3e) listscroll_cale_week_pane_t1_ParamLimits

0x0a00,	// (0x0006b94b) listscroll_cale_day_pane_ParamLimits

0xaecc,	// (0x00075e17) popup_toolbar_window_cp02

0xb376,	// (0x000762c1) listscroll_cale_day_pane_t1_ParamLimits

0x374e,	// (0x0006e699) main_cale_month_pane_ParamLimits

0x97be,	// (0x00074709) popup_toolbar_window_cp03_ParamLimits

0x97be,	// (0x00074709) popup_toolbar_window_cp03

0x304f,	// (0x0006df9a) main_image_pane_g2_ParamLimits

0x304f,	// (0x0006df9a) main_image_pane_g2

0x3060,	// (0x0006dfab) main_image_pane_g3_ParamLimits

0x3060,	// (0x0006dfab) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0007a437) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0007a437) main_image_pane_g

0xbccc,	// (0x00076c17) main_image_pane_t1_ParamLimits

0x3071,	// (0x0006dfbc) main_image_pane_t2_ParamLimits

0x3071,	// (0x0006dfbc) main_image_pane_t2

0x3083,	// (0x0006dfce) main_image_pane_t3_ParamLimits

0x3083,	// (0x0006dfce) main_image_pane_t3

0x30ab,	// (0x0006dff6) main_image_pane_t4_ParamLimits

0x30ab,	// (0x0006dff6) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0007a43e) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0007a43e) main_image_pane_t

0x30cb,	// (0x0006e016) popup_image_details_window_cp01

0x30d5,	// (0x0006e020) popup_toobar_trans_pane_cp01_ParamLimits

0x30d5,	// (0x0006e020) popup_toobar_trans_pane_cp01

0x3867,	// (0x0006e7b2) popup_image_details_window_ParamLimits

0x3867,	// (0x0006e7b2) popup_image_details_window

0x9791,	// (0x000746dc) popup_image_focus_window

0x3c7e,	// (0x0006ebc9) camera2_autofocus_pane_ParamLimits

0x3c7e,	// (0x0006ebc9) camera2_autofocus_pane

0x9522,	// (0x0007446d) bg_popup_sub_pane_cp06

0xd387,	// (0x000782d2) popup_image_focus_window_g1

0xd38f,	// (0x000782da) popup_image_focus_window_g2

0xd397,	// (0x000782e2) popup_image_focus_window_g3

0xd39f,	// (0x000782ea) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0007a64d) popup_image_focus_window_g

0xd3a7,	// (0x000782f2) popup_image_focus_window_t1

0xd3b5,	// (0x00078300) popup_image_focus_window_t2

0xd3c5,	// (0x00078310) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0007a656) popup_image_focus_window_t

0xd3d3,	// (0x0007831e) camera2_autofocus_pane_g1

0xb26c,	// (0x000761b7) bg_tb_trans_pane_cp01

0xd3e1,	// (0x0007832c) popup_image_details_window_g1

0xd3f4,	// (0x0007833f) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0007a668) popup_image_details_window_g

0xd41d,	// (0x00078368) popup_image_details_window_t1

0xd42f,	// (0x0007837a) popup_image_details_window_t2

0xd448,	// (0x00078393) popup_image_details_window_t3

0xd45c,	// (0x000783a7) popup_image_details_window_t4

0xd477,	// (0x000783c2) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0007a66f) popup_image_details_window_t

0xada3,	// (0x00075cee) bg_calc_paper_pane_ParamLimits

0x95a8,	// (0x000744f3) grid_highlight_pane_cp013

0x95ba,	// (0x00074505) list_calc_pane_ParamLimits

0x95cc,	// (0x00074517) scroll_pane_cp024

0xadb7,	// (0x00075d02) bg_calc_display_pane_ParamLimits

0x0831,	// (0x0006b77c) calc_display_pane_t1_ParamLimits

0x0843,	// (0x0006b78e) calc_display_pane_t2_ParamLimits

0x95d4,	// (0x0007451f) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0007a09f) calc_display_pane_t_ParamLimits

0x08fd,	// (0x0006b848) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0007a0bc) cell_calc_pane_g

0x0906,	// (0x0006b851) cell_calc_pane_t1

0xae16,	// (0x00075d61) grid_highlight_pane_cp02_ParamLimits

0xae2c,	// (0x00075d77) toolbar_button_pane_cp01_ParamLimits

0xae2c,	// (0x00075d77) toolbar_button_pane_cp01

0xbd11,	// (0x00076c5c) temp_image_control_pane_ParamLimits

0xbd11,	// (0x00076c5c) temp_image_control_pane

0x959a,	// (0x000744e5) main_mp3_pane

0xd491,	// (0x000783dc) temp_image_control_pane_g1_ParamLimits

0xd491,	// (0x000783dc) temp_image_control_pane_g1

0xd49f,	// (0x000783ea) temp_image_control_pane_g2_ParamLimits

0xd49f,	// (0x000783ea) temp_image_control_pane_g2

0xd4b1,	// (0x000783fc) temp_image_control_pane_g3_ParamLimits

0xd4b1,	// (0x000783fc) temp_image_control_pane_g3

0x44ce,	// (0x0006f419) temp_image_control_pane_g4_ParamLimits

0x44ce,	// (0x0006f419) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0007a67a) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0007a67a) temp_image_control_pane_g

0xd491,	// (0x000783dc) main_mp3_pane_g1

0x44e1,	// (0x0006f42c) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0007a683) main_mp3_pane_g

0xd4f4,	// (0x0007843f) main_mp3_pane_t1

0xaf7d,	// (0x00075ec8) main_camera_pane_g8_ParamLimits

0xaf7d,	// (0x00075ec8) main_camera_pane_g8

0x12a1,	// (0x0006c1ec) main_video_pane_g7_ParamLimits

0x12a1,	// (0x0006c1ec) main_video_pane_g7

0x9813,	// (0x0007475e) main_camera2_pane_t7_ParamLimits

0x9813,	// (0x0007475e) main_camera2_pane_t7

0xb0c5,	// (0x00076010) scroll_pane_cp025_ParamLimits

0xb0c5,	// (0x00076010) scroll_pane_cp025

0xb0d9,	// (0x00076024) scroll_pane_cp026_ParamLimits

0xb0d9,	// (0x00076024) scroll_pane_cp026

0xb0e8,	// (0x00076033) wml_content_pane_ParamLimits

0x95a8,	// (0x000744f3) main_touch_calib_pane

0x45b5,	// (0x0006f500) main_touch_calib_pane_g1

0x45c7,	// (0x0006f512) main_touch_calib_pane_g2

0x45d9,	// (0x0006f524) main_touch_calib_pane_g3

0x45eb,	// (0x0006f536) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0007a6a1) main_touch_calib_pane_g

0x45fd,	// (0x0006f548) main_touch_calib_pane_t1

0x4617,	// (0x0006f562) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0007a6aa) main_touch_calib_pane_t

0xb8df,	// (0x0007682a) mup_progress_pane_cp02

0xb914,	// (0x0007685f) navi_pane_g1

0xb9cf,	// (0x0007691a) navi_pane_mp_t3

0x959a,	// (0x000744e5) main_mp3_pane_ParamLimits

0x39ec,	// (0x0006e937) navi_pane_ParamLimits

0xd491,	// (0x000783dc) main_mp3_pane_g1_ParamLimits

0x44e1,	// (0x0006f42c) main_mp3_pane_g2_ParamLimits

0x44ef,	// (0x0006f43a) main_mp3_pane_g3_ParamLimits

0x44ef,	// (0x0006f43a) main_mp3_pane_g3

0x44fd,	// (0x0006f448) main_mp3_pane_g4_ParamLimits

0x44fd,	// (0x0006f448) main_mp3_pane_g4

0xd4c1,	// (0x0007840c) main_mp3_pane_g5_ParamLimits

0xd4c1,	// (0x0007840c) main_mp3_pane_g5

0xd4cf,	// (0x0007841a) main_mp3_pane_g6_ParamLimits

0xd4cf,	// (0x0007841a) main_mp3_pane_g6

0xd4dc,	// (0x00078427) main_mp3_pane_g7_ParamLimits

0xd4dc,	// (0x00078427) main_mp3_pane_g7

0xd4e8,	// (0x00078433) main_mp3_pane_g8_ParamLimits

0xd4e8,	// (0x00078433) main_mp3_pane_g8

0xf738,	// (0x0007a683) main_mp3_pane_g_ParamLimits

0x4509,	// (0x0006f454) main_mp3_pane_t2

0x4517,	// (0x0006f462) main_mp3_pane_t3

0xd502,	// (0x0007844d) main_mp3_pane_t4

0xd510,	// (0x0007845b) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0007a694) main_mp3_pane_t

0xd51e,	// (0x00078469) mup_progress_pane_cp01

0x9550,	// (0x0007449b) aid_zoom_text_secondary2

0xd2d8,	// (0x00078223) list_cale_ev2_pane

0xd2e0,	// (0x0007822b) scroll_pane_cp023_ParamLimits

0x466d,	// (0x0006f5b8) field_cale_ev2_pane_ParamLimits

0x466d,	// (0x0006f5b8) field_cale_ev2_pane

0x988a,	// (0x000747d5) field_cale_ev2_pane_g1_ParamLimits

0x988a,	// (0x000747d5) field_cale_ev2_pane_g1

0x9896,	// (0x000747e1) field_cale_ev2_pane_g2_ParamLimits

0x9896,	// (0x000747e1) field_cale_ev2_pane_g2

0x98ae,	// (0x000747f9) field_cale_ev2_pane_g3_ParamLimits

0x98ae,	// (0x000747f9) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0007a6b5) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0007a6b5) field_cale_ev2_pane_g

0x468d,	// (0x0006f5d8) field_cale_ev2_pane_t1_ParamLimits

0x468d,	// (0x0006f5d8) field_cale_ev2_pane_t1

0x46a4,	// (0x0006f5ef) field_cale_ev2_pane_t2_ParamLimits

0x46a4,	// (0x0006f5ef) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0007a6be) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0007a6be) field_cale_ev2_pane_t

0x2f04,	// (0x0006de4f) main_postcard_pane_g5_ParamLimits

0x2f04,	// (0x0006de4f) main_postcard_pane_g5

0x2f1a,	// (0x0006de65) main_postcard_pane_g6_ParamLimits

0x2f1a,	// (0x0006de65) main_postcard_pane_g6

0x106d,	// (0x0006bfb8) camera2_autofocus_pane_cp_ParamLimits

0x106d,	// (0x0006bfb8) camera2_autofocus_pane_cp

0x959a,	// (0x000744e5) main_mup3_pane

0x46b9,	// (0x0006f604) main_mup3_pane_g1_ParamLimits

0x46b9,	// (0x0006f604) main_mup3_pane_g1

0x46db,	// (0x0006f626) main_mup3_pane_g2_ParamLimits

0x46db,	// (0x0006f626) main_mup3_pane_g2

0x4759,	// (0x0006f6a4) main_mup3_pane_g3_ParamLimits

0x4759,	// (0x0006f6a4) main_mup3_pane_g3

0x479f,	// (0x0006f6ea) main_mup3_pane_g4_ParamLimits

0x479f,	// (0x0006f6ea) main_mup3_pane_g4

0x47e5,	// (0x0006f730) main_mup3_pane_g5_ParamLimits

0x47e5,	// (0x0006f730) main_mup3_pane_g5

0x482b,	// (0x0006f776) main_mup3_pane_g6_ParamLimits

0x482b,	// (0x0006f776) main_mup3_pane_g6

0xd546,	// (0x00078491) main_mup3_pane_g7_ParamLimits

0xd546,	// (0x00078491) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0007a6ce) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0007a6ce) main_mup3_pane_g

0x48a9,	// (0x0006f7f4) main_mup3_pane_t1_ParamLimits

0x48a9,	// (0x0006f7f4) main_mup3_pane_t1

0x491d,	// (0x0006f868) main_mup3_pane_t2_ParamLimits

0x491d,	// (0x0006f868) main_mup3_pane_t2

0x49f1,	// (0x0006f93c) main_mup3_pane_t4_ParamLimits

0x49f1,	// (0x0006f93c) main_mup3_pane_t4

0x4a47,	// (0x0006f992) main_mup3_pane_t5_ParamLimits

0x4a47,	// (0x0006f992) main_mup3_pane_t5

0x4b03,	// (0x0006fa4e) main_mup3_pane_t6_ParamLimits

0x4b03,	// (0x0006fa4e) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0007a6df) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0007a6df) main_mup3_pane_t

0x4bbb,	// (0x0006fb06) mup3_progress_pane_ParamLimits

0x4bbb,	// (0x0006fb06) mup3_progress_pane

0x4c51,	// (0x0006fb9c) popup_mup3_control_window_ParamLimits

0x4c51,	// (0x0006fb9c) popup_mup3_control_window

0xd554,	// (0x0007849f) popup_mup3_text_window

0x4c83,	// (0x0006fbce) mup3_progress_pane_t1

0x4ca2,	// (0x0006fbed) mup3_progress_pane_t2

0xd55c,	// (0x000784a7) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0007a6ec) mup3_progress_pane_t

0xd579,	// (0x000784c4) mup_progress_pane_cp03

0x9522,	// (0x0007446d) bg_tb_trans_pane_cp04

0x4cc1,	// (0x0006fc0c) mup3_volume_pane

0x4cc9,	// (0x0006fc14) popup_mup3_control_window_g1

0x4cd2,	// (0x0006fc1d) mup3_volume_pane_g1

0x4cdb,	// (0x0006fc26) mup3_volume_pane_g2

0x4ce4,	// (0x0006fc2f) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0007a6f3) mup3_volume_pane_g

0x9522,	// (0x0007446d) bg_tb_trans_pane_cp03

0xd589,	// (0x000784d4) popup_mup3_text_window_g1

0xd591,	// (0x000784dc) popup_mup3_text_window_t1

0xadff,	// (0x00075d4a) list_calc_item_pane_g1_ParamLimits

0xcfa8,	// (0x00077ef3) mup_volume_pane_cp_g1

0x4631,	// (0x0006f57c) main_touch_calib_pane_t3

0x4645,	// (0x0006f590) main_touch_calib_pane_t4

0x4659,	// (0x0006f5a4) main_touch_calib_pane_t5

0x952c,	// (0x00074477) aid_cell_size_toolbar2

0x9534,	// (0x0007447f) aid_popup3_width_pane

0x9540,	// (0x0007448b) aid_zoom_text_msg_primary

0x1044,	// (0x0006bf8f) vorec_t7

0xadc3,	// (0x00075d0e) bg_calc_paper_pane_g1_ParamLimits

0xadcf,	// (0x00075d1a) bg_calc_paper_pane_g2_ParamLimits

0xaddb,	// (0x00075d26) bg_calc_paper_pane_g3_ParamLimits

0xade7,	// (0x00075d32) bg_calc_paper_pane_g4_ParamLimits

0xadf3,	// (0x00075d3e) bg_calc_paper_pane_g5_ParamLimits

0x088a,	// (0x0006b7d5) bg_calc_paper_pane_g6_ParamLimits

0x0899,	// (0x0006b7e4) bg_calc_paper_pane_g7_ParamLimits

0x08a8,	// (0x0006b7f3) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0007a0a6) bg_calc_paper_pane_g_ParamLimits

0x08bb,	// (0x0006b806) calc_bg_paper_pane_g9_ParamLimits

0x11b8,	// (0x0006c103) image_qvga_pane_ParamLimits

0x11b8,	// (0x0006c103) image_qvga_pane

0xacf2,	// (0x00075c3d) bg_popup_sub_pane_cp04_ParamLimits

0xbc48,	// (0x00076b93) popup_mup_playback_window_g1_ParamLimits

0xbc54,	// (0x00076b9f) popup_mup_playback_window_t1_ParamLimits

0xbc69,	// (0x00076bb4) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0007a432) popup_mup_playback_window_t_ParamLimits

0x4171,	// (0x0006f0bc) main_mup2_pane_g3_ParamLimits

0x4171,	// (0x0006f0bc) main_mup2_pane_g3

0x15c7,	// (0x0006c512) popup_toolbar_window_cp04

0xc04b,	// (0x00076f96) popup_call2_audio_second_window_g3_ParamLimits

0xc04b,	// (0x00076f96) popup_call2_audio_second_window_g3

0xc455,	// (0x000773a0) popup_call2_audio_first_window_g4_ParamLimits

0xc455,	// (0x000773a0) popup_call2_audio_first_window_g4

0xcae0,	// (0x00077a2b) popup_call2_audio_in_window_g4_ParamLimits

0xcae0,	// (0x00077a2b) popup_call2_audio_in_window_g4

0x3031,	// (0x0006df7c) aid_area_sk_bg_cut_ParamLimits

0x3031,	// (0x0006df7c) aid_area_sk_bg_cut

0xbc7e,	// (0x00076bc9) aid_area_sk_bg_cut_2_ParamLimits

0xbc7e,	// (0x00076bc9) aid_area_sk_bg_cut_2

0x4474,	// (0x0006f3bf) aid_placing_details_win

0x447c,	// (0x0006f3c7) aid_placing_details_win_2

0xd3d3,	// (0x0007831e) camera2_autofocus_pane_g1_ParamLimits

0x0479,	// (0x0006b3c4) popup_fixed_preview_cale_window_ParamLimits

0x0479,	// (0x0006b3c4) popup_fixed_preview_cale_window

0xba55,	// (0x000769a0) navi_slider_pane_g3

0xba5e,	// (0x000769a9) navi_slider_pane_g4

0xba67,	// (0x000769b2) navi_slider_pane_g5

0xba55,	// (0x000769a0) navi_slider_pane_g6

0x9702,	// (0x0007464d) navi_slider_pane_g7

0xbb88,	// (0x00076ad3) mup_scale_pane_g3

0xbb91,	// (0x00076adc) mup_scale_pane_g4

0xbb9a,	// (0x00076ae5) mup_scale_pane_g5

0x2d16,	// (0x0006dc61) mup_scale_pane_g6

0x2d1f,	// (0x0006dc6a) mup_scale_pane_g7

0xba55,	// (0x000769a0) cams2_slider_pane_g3

0xd02a,	// (0x00077f75) cams2_slider_pane_g4

0x9879,	// (0x000747c4) cams2_slider_pane_g5

0xba55,	// (0x000769a0) cams2_slider_pane_g6

0x9881,	// (0x000747cc) cams2_slider_pane_g7

0xd255,	// (0x000781a0) camera2_autofocus_pane_cp_g1

0xce41,	// (0x00077d8c) bg_popup_preview_window_pane_cp02_ParamLimits

0xce41,	// (0x00077d8c) bg_popup_preview_window_pane_cp02

0xd59f,	// (0x000784ea) list_fp_cale_pane_ParamLimits

0xd59f,	// (0x000784ea) list_fp_cale_pane

0xd5ab,	// (0x000784f6) popup_fixed_preview_cale_window_t1_ParamLimits

0xd5ab,	// (0x000784f6) popup_fixed_preview_cale_window_t1

0x4ced,	// (0x0006fc38) popup_fixed_preview_cale_window_t2_ParamLimits

0x4ced,	// (0x0006fc38) popup_fixed_preview_cale_window_t2

0x4d02,	// (0x0006fc4d) popup_fixed_preview_cale_window_t3_ParamLimits

0x4d02,	// (0x0006fc4d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0007a6fa) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0007a6fa) popup_fixed_preview_cale_window_t

0x4d17,	// (0x0006fc62) list_single_fp_cale_pane_ParamLimits

0x4d17,	// (0x0006fc62) list_single_fp_cale_pane

0xd5c9,	// (0x00078514) list_single_fp_cale_pane_g1_ParamLimits

0xd5c9,	// (0x00078514) list_single_fp_cale_pane_g1

0xd5d5,	// (0x00078520) list_single_fp_cale_pane_g2_ParamLimits

0xd5d5,	// (0x00078520) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0007a701) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0007a701) list_single_fp_cale_pane_g

0xd5ee,	// (0x00078539) list_single_fp_cale_pane_t1_ParamLimits

0xd5ee,	// (0x00078539) list_single_fp_cale_pane_t1

0xd600,	// (0x0007854b) list_single_fp_cale_pane_t2_ParamLimits

0xd600,	// (0x0007854b) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0007a708) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0007a708) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95a8,	// (0x000744f3) main_dialer_pane

0x4d2c,	// (0x0006fc77) aid_cell_size_keypad

0x4d36,	// (0x0006fc81) dialer_ne_pane

0x4d3e,	// (0x0006fc89) grid_dialer_command_1_pane

0x4d46,	// (0x0006fc91) grid_dialer_command_2_pane

0x4d4e,	// (0x0006fc99) grid_dialer_keypad_pane

0x4d60,	// (0x0006fcab) bg_popup_call_pane_cp06_ParamLimits

0x4d60,	// (0x0006fcab) bg_popup_call_pane_cp06

0x4d6c,	// (0x0006fcb7) dialer_ne_clear_pane_ParamLimits

0x4d6c,	// (0x0006fcb7) dialer_ne_clear_pane

0xd633,	// (0x0007857e) dialer_ne_pane_g1

0xd63b,	// (0x00078586) dialer_ne_pane_t1_ParamLimits

0xd63b,	// (0x00078586) dialer_ne_pane_t1

0x4d78,	// (0x0006fcc3) dialer_ne_pane_t2_ParamLimits

0x4d78,	// (0x0006fcc3) dialer_ne_pane_t2

0x4da2,	// (0x0006fced) dialer_ne_pane_t3_ParamLimits

0x4da2,	// (0x0006fced) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0007a70d) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0007a70d) dialer_ne_pane_t

0x4dd2,	// (0x0006fd1d) dialer_ne_pane_t3_copy1_ParamLimits

0x4dd2,	// (0x0006fd1d) dialer_ne_pane_t3_copy1

0x4e01,	// (0x0006fd4c) cell_dialer_keypad_pane_ParamLimits

0x4e01,	// (0x0006fd4c) cell_dialer_keypad_pane

0x4e18,	// (0x0006fd63) cell_dialer_command_1_pane_ParamLimits

0x4e18,	// (0x0006fd63) cell_dialer_command_1_pane

0x4e2e,	// (0x0006fd79) cell_dialer_command_2_pane_ParamLimits

0x4e2e,	// (0x0006fd79) cell_dialer_command_2_pane

0xd64d,	// (0x00078598) bg_button_pane_cp02_ParamLimits

0xd64d,	// (0x00078598) bg_button_pane_cp02

0x4e3d,	// (0x0006fd88) cell_dialer_keypad_pane_g1_ParamLimits

0x4e3d,	// (0x0006fd88) cell_dialer_keypad_pane_g1

0xd64d,	// (0x00078598) bg_button_pane_cp03_ParamLimits

0xd64d,	// (0x00078598) bg_button_pane_cp03

0x4e51,	// (0x0006fd9c) cell_dialer_command_1_pane_g1_ParamLimits

0x4e51,	// (0x0006fd9c) cell_dialer_command_1_pane_g1

0xd659,	// (0x000785a4) bg_button_pane_cp04

0x4e65,	// (0x0006fdb0) cell_dialer_command_2_pane_g1

0xba44,	// (0x0007698f) bg_button_pane_cp06

0xd661,	// (0x000785ac) dialer_ne_clear_pane_g1

0xb920,	// (0x0007686b) navi_pane_g2

0xb94e,	// (0x00076899) navi_pane_g3

0x0002,

0xf3ea,	// (0x0007a335) navi_pane_g

0xb9dd,	// (0x00076928) navi_pane_mv_g2

0xba04,	// (0x0007694f) navi_pane_mv_g5

0x28da,	// (0x0006d825) navi_pane_mv_t1

0xadb7,	// (0x00075d02) main_clock2_pane

0x4eb0,	// (0x0006fdfb) main_clock2_list_pane_ParamLimits

0x4eb0,	// (0x0006fdfb) main_clock2_list_pane

0x4ee8,	// (0x0006fe33) main_clock2_pane_t1_ParamLimits

0x4ee8,	// (0x0006fe33) main_clock2_pane_t1

0x4f24,	// (0x0006fe6f) main_clock2_pane_t2_ParamLimits

0x4f24,	// (0x0006fe6f) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007a714) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007a714) main_clock2_pane_t

0x4fc2,	// (0x0006ff0d) popup_clock_analogue_window_cp03_ParamLimits

0x4fc2,	// (0x0006ff0d) popup_clock_analogue_window_cp03

0x4fe7,	// (0x0006ff32) popup_clock_digital_window_cp02_ParamLimits

0x4fe7,	// (0x0006ff32) popup_clock_digital_window_cp02

0x5058,	// (0x0006ffa3) main_clock2_list_single_pane_ParamLimits

0x5058,	// (0x0006ffa3) main_clock2_list_single_pane

0xba44,	// (0x0007698f) list_highlight_pane_cp05

0xd67f,	// (0x000785ca) main_clock2_list_single_pane_t1

0x15c7,	// (0x0006c512) popup_toolbar_window_cp04_ParamLimits

0x449e,	// (0x0006f3e9) camera2_autofocus_pane_g2_ParamLimits

0x449e,	// (0x0006f3e9) camera2_autofocus_pane_g2

0x44aa,	// (0x0006f3f5) camera2_autofocus_pane_g3_ParamLimits

0x44aa,	// (0x0006f3f5) camera2_autofocus_pane_g3

0x44b6,	// (0x0006f401) camera2_autofocus_pane_g4_ParamLimits

0x44b6,	// (0x0006f401) camera2_autofocus_pane_g4

0x44c2,	// (0x0006f40d) camera2_autofocus_pane_g5_ParamLimits

0x44c2,	// (0x0006f40d) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0007a65d) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0007a65d) camera2_autofocus_pane_g

0xd526,	// (0x00078471) camera2_autofocus_pane_cp_g2

0xd52e,	// (0x00078479) camera2_autofocus_pane_cp_g3

0xd536,	// (0x00078481) camera2_autofocus_pane_cp_g4

0xd53e,	// (0x00078489) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0007a6c3) camera2_autofocus_pane_cp_g

0x4d58,	// (0x0006fca3) popup_dialer_spcha_window

0x9522,	// (0x0007446d) bg_popup_sub_pane_cp07

0xd68d,	// (0x000785d8) list_spcha_pane

0xd695,	// (0x000785e0) list_single_spcha_pane_ParamLimits

0xd695,	// (0x000785e0) list_single_spcha_pane

0x9522,	// (0x0007446d) list_highlight_pane_cp06

0xd6a6,	// (0x000785f1) list_single_spcha_pane_t1

0xc88a,	// (0x000777d5) popup_call2_audio_out_window_g4_ParamLimits

0xc88a,	// (0x000777d5) popup_call2_audio_out_window_g4

0x95a8,	// (0x000744f3) main_imed2_pane

0x9799,	// (0x000746e4) popup_imed_adjust2_window

0x387f,	// (0x0006e7ca) popup_imed_trans_window_ParamLimits

0x387f,	// (0x0006e7ca) popup_imed_trans_window

0xd093,	// (0x00077fde) popup_blid_sat_info2_window_t1

0xd0a1,	// (0x00077fec) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0007a5f2) popup_blid_sat_info2_window_t

0x5102,	// (0x0007004d) aid_size_cell_colour_35

0x5122,	// (0x0007006d) aid_size_cell_colour_112

0x5142,	// (0x0007008d) aid_size_cell_effect

0xce4d,	// (0x00077d98) bg_tb_trans_pane_cp02

0xb47f,	// (0x000763ca) heading_imed_pane

0x5162,	// (0x000700ad) listscroll_imed_pane

0xd6b4,	// (0x000785ff) heading_imed_pane_g1

0xd6bc,	// (0x00078607) heading_imed_pane_t1

0xd6ca,	// (0x00078615) grid_imed_colour_35_pane_ParamLimits

0xd6ca,	// (0x00078615) grid_imed_colour_35_pane

0x516e,	// (0x000700b9) grid_imed_effect_pane

0xd6e1,	// (0x0007862c) list_imed_aspect_pane

0x5184,	// (0x000700cf) scroll_pane_cp027_ParamLimits

0x5184,	// (0x000700cf) scroll_pane_cp027

0x5195,	// (0x000700e0) cell_imed_effect_pane_ParamLimits

0x5195,	// (0x000700e0) cell_imed_effect_pane

0xd6e9,	// (0x00078634) cell_imed_colour_pane_ParamLimits

0xd6e9,	// (0x00078634) cell_imed_colour_pane

0xd72b,	// (0x00078676) cell_imed_colour_pane_g1_ParamLimits

0xd72b,	// (0x00078676) cell_imed_colour_pane_g1

0xd73c,	// (0x00078687) hgihlgiht_grid_pane_cp016_ParamLimits

0xd73c,	// (0x00078687) hgihlgiht_grid_pane_cp016

0x51bc,	// (0x00070107) cell_imed_effect_pane_g1

0x51c4,	// (0x0007010f) grid_highlight_pane_cp017

0xd74d,	// (0x00078698) list_imed_single_pane_ParamLimits

0xd74d,	// (0x00078698) list_imed_single_pane

0x9522,	// (0x0007446d) list_highlight_pane_cp07

0xd762,	// (0x000786ad) list_imed_aspect_pane_comp1_t1

0xce4d,	// (0x00077d98) bg_tb_trans_pane_cp05

0xd784,	// (0x000786cf) popup_imed_adjust2_window_g1

0xd7ab,	// (0x000786f6) popup_imed_adjust2_window_t1

0xd7c3,	// (0x0007870e) slider_imed_adjust_pane

0xd7d7,	// (0x00078722) slider_imed_adjust_pane_g1

0xd7e7,	// (0x00078732) slider_imed_adjust_pane_g2

0xd7f7,	// (0x00078742) slider_imed_adjust_pane_g3

0xd808,	// (0x00078753) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007a731) slider_imed_adjust_pane_g

0x51cd,	// (0x00070118) aid_size_cell_clipart2

0x51d9,	// (0x00070124) grid_imed_clipart_pane

0xd819,	// (0x00078764) scroll_pane_cp031

0x51e3,	// (0x0007012e) cell_imed_clipart_pane_ParamLimits

0x51e3,	// (0x0007012e) cell_imed_clipart_pane

0x5205,	// (0x00070150) cell_imed_clipart_pane_g1

0x9522,	// (0x0007446d) grid_highlight_pane_cp014

0x4ec5,	// (0x0006fe10) main_clock2_pane_g1_ParamLimits

0x4ec5,	// (0x0006fe10) main_clock2_pane_g1

0x5003,	// (0x0006ff4e) aid_call2_pane_cp10

0x5015,	// (0x0006ff60) aid_call_pane_cp10

0xb881,	// (0x000767cc) popup_clock_analogue_window_cp10_g1

0xb881,	// (0x000767cc) popup_clock_analogue_window_cp10_g2

0x5027,	// (0x0006ff72) popup_clock_analogue_window_cp10_g3

0x5027,	// (0x0006ff72) popup_clock_analogue_window_cp10_g4

0xb881,	// (0x000767cc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007a71f) popup_clock_analogue_window_cp10_g

0x5039,	// (0x0006ff84) popup_clock_analogue_window_cp10_t1

0x506a,	// (0x0006ffb5) clock_digital_number_pane_cp10_ParamLimits

0x506a,	// (0x0006ffb5) clock_digital_number_pane_cp10

0x5082,	// (0x0006ffcd) clock_digital_number_pane_cp11_ParamLimits

0x5082,	// (0x0006ffcd) clock_digital_number_pane_cp11

0x509a,	// (0x0006ffe5) clock_digital_number_pane_cp12_ParamLimits

0x509a,	// (0x0006ffe5) clock_digital_number_pane_cp12

0x50b2,	// (0x0006fffd) clock_digital_number_pane_cp13_ParamLimits

0x50b2,	// (0x0006fffd) clock_digital_number_pane_cp13

0x50ca,	// (0x00070015) clock_digital_separator_pane_cp10_ParamLimits

0x50ca,	// (0x00070015) clock_digital_separator_pane_cp10

0x50e2,	// (0x0007002d) popup_clock_digital_window_cp02_t1_ParamLimits

0x50e2,	// (0x0007002d) popup_clock_digital_window_cp02_t1

0xacea,	// (0x00075c35) clock_digital_number_pane_cp10_g1

0xacea,	// (0x00075c35) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007a73a) clock_digital_number_pane_cp10_g

0xacea,	// (0x00075c35) clock_digital_separator_pane_cp10_g1

0xacea,	// (0x00075c35) clock_digital_separator_pane_g2_cp10

0xba0c,	// (0x00076957) navi_pane_vded_g4

0xba15,	// (0x00076960) navi_pane_vded_g5

0xba1e,	// (0x00076969) navi_pane_vded_t1

0x95a8,	// (0x000744f3) main_vded_pane

0x520e,	// (0x00070159) main_vded_pane_g1

0x5218,	// (0x00070163) main_vded_pane_g2

0x5222,	// (0x0007016d) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007a73f) main_vded_pane_g

0x522c,	// (0x00070177) main_vded_pane_t1

0x523a,	// (0x00070185) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007a746) main_vded_pane_t

0x5248,	// (0x00070193) vded_slider_pane

0x5250,	// (0x0007019b) vded_video_pane

0xd821,	// (0x0007876c) vded_video_pane_g1

0x5258,	// (0x000701a3) vded_video_pane_g2

0xd255,	// (0x000781a0) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007a74b) vded_video_pane_g

0xd82b,	// (0x00078776) vded_slider_pane_g1

0xcfa8,	// (0x00077ef3) vded_slider_pane_g2

0xd834,	// (0x0007877f) vded_slider_pane_g3

0xd83d,	// (0x00078788) vded_slider_pane_g4

0xd846,	// (0x00078791) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007a752) vded_slider_pane_g

0x4c39,	// (0x0006fb84) mup3_rocker_pane_ParamLimits

0x4c39,	// (0x0006fb84) mup3_rocker_pane

0x5261,	// (0x000701ac) mup3_control_keys_pane_g1

0x5269,	// (0x000701b4) mup3_control_keys_pane_g2

0x5271,	// (0x000701bc) mup3_control_keys_pane_g3

0x5279,	// (0x000701c4) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007a75d) mup3_control_keys_pane_g

0x04b0,	// (0x0006b3fb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x04b0,	// (0x0006b3fb) popup_toolbar2_fixed_window_cp01

0x4c6d,	// (0x0006fbb8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4c6d,	// (0x0006fbb8) popup_toolbar2_fixed_window_cp02

0xc1bd,	// (0x00077108) popup_call2_audio_second_window_t4_ParamLimits

0xc1bd,	// (0x00077108) popup_call2_audio_second_window_t4

0xc6f7,	// (0x00077642) popup_call2_audio_first_window_t6_ParamLimits

0xc6f7,	// (0x00077642) popup_call2_audio_first_window_t6

0xc98d,	// (0x000778d8) popup_call2_audio_out_window_t6_ParamLimits

0xc98d,	// (0x000778d8) popup_call2_audio_out_window_t6

0x95a8,	// (0x000744f3) main_vitu_pane

0x5289,	// (0x000701d4) aid_size_cell_itu_ParamLimits

0x5289,	// (0x000701d4) aid_size_cell_itu

0xb26c,	// (0x000761b7) bg_popup_window_pane_cp08_ParamLimits

0xb26c,	// (0x000761b7) bg_popup_window_pane_cp08

0x529f,	// (0x000701ea) field_vitu_entry_pane_ParamLimits

0x529f,	// (0x000701ea) field_vitu_entry_pane

0x52b6,	// (0x00070201) grid_vitu_function_pane_ParamLimits

0x52b6,	// (0x00070201) grid_vitu_function_pane

0x52d1,	// (0x0007021c) grid_vitu_itu_pane_ParamLimits

0x52d1,	// (0x0007021c) grid_vitu_itu_pane

0x52ef,	// (0x0007023a) cell_vitu_itu_pane_ParamLimits

0x52ef,	// (0x0007023a) cell_vitu_itu_pane

0x5311,	// (0x0007025c) cell_vitu_function_pane_ParamLimits

0x5311,	// (0x0007025c) cell_vitu_function_pane

0xb26c,	// (0x000761b7) bg_popup_sub_pane_cp08_ParamLimits

0xb26c,	// (0x000761b7) bg_popup_sub_pane_cp08

0x532a,	// (0x00070275) field_vitu_entry_pane_t1_ParamLimits

0x532a,	// (0x00070275) field_vitu_entry_pane_t1

0xd867,	// (0x000787b2) field_vitu_entry_pane_t2_ParamLimits

0xd867,	// (0x000787b2) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007a76b) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007a76b) field_vitu_entry_pane_t

0xd884,	// (0x000787cf) bg_button_pane_cp05_ParamLimits

0xd884,	// (0x000787cf) bg_button_pane_cp05

0x5348,	// (0x00070293) cell_vitu_itu_pane_g1

0x5360,	// (0x000702ab) cell_vitu_itu_pane_t1_ParamLimits

0x5360,	// (0x000702ab) cell_vitu_itu_pane_t1

0x5372,	// (0x000702bd) cell_vitu_itu_pane_t2_ParamLimits

0x5372,	// (0x000702bd) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007a770) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007a770) cell_vitu_itu_pane_t

0xd892,	// (0x000787dd) bg_button_pane_cp07

0x53a7,	// (0x000702f2) cell_vitu_function_pane_g1

0x95b2,	// (0x000744fd) main_calc_pane_g1

0x02d7,	// (0x0006b222) aid_visual_content_pane

0x95a8,	// (0x000744f3) main_vradio_pane

0x53b0,	// (0x000702fb) main_vradio_pane_g1_ParamLimits

0x53b0,	// (0x000702fb) main_vradio_pane_g1

0xd89c,	// (0x000787e7) main_vradio_pane_g2_ParamLimits

0xd89c,	// (0x000787e7) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007a777) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007a777) main_vradio_pane_g

0x53c9,	// (0x00070314) main_vradio_pane_t1_ParamLimits

0x53c9,	// (0x00070314) main_vradio_pane_t1

0x53de,	// (0x00070329) main_vradio_pane_t2_ParamLimits

0x53de,	// (0x00070329) main_vradio_pane_t2

0xd8a9,	// (0x000787f4) main_vradio_pane_t3_ParamLimits

0xd8a9,	// (0x000787f4) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007a77c) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007a77c) main_vradio_pane_t

0x53f3,	// (0x0007033e) vradio_rocker_control_pane_ParamLimits

0x53f3,	// (0x0007033e) vradio_rocker_control_pane

0x5405,	// (0x00070350) vradio_station_info_pane_ParamLimits

0x5405,	// (0x00070350) vradio_station_info_pane

0xd8bd,	// (0x00078808) vradio_frequency_info_pane_ParamLimits

0xd8bd,	// (0x00078808) vradio_frequency_info_pane

0xd255,	// (0x000781a0) vradio_station_info_pane_g1

0xd8cc,	// (0x00078817) vradio_station_info_pane_t1_ParamLimits

0xd8cc,	// (0x00078817) vradio_station_info_pane_t1

0xd8ee,	// (0x00078839) vradio_station_info_pane_t2_ParamLimits

0xd8ee,	// (0x00078839) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007a783) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007a783) vradio_station_info_pane_t

0xd900,	// (0x0007884b) vradio_tuning_pane

0xd908,	// (0x00078853) vradio_rocker_control_pane_g1

0xd910,	// (0x0007885b) vradio_rocker_control_pane_g2

0xd918,	// (0x00078863) vradio_rocker_control_pane_g3

0xd920,	// (0x0007886b) vradio_rocker_control_pane_g4

0xd928,	// (0x00078873) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007a788) vradio_rocker_control_pane_g

0x5417,	// (0x00070362) vradio_frequency_info_pane_g1

0xd930,	// (0x0007887b) vradio_frequency_info_pane_t1_ParamLimits

0xd930,	// (0x0007887b) vradio_frequency_info_pane_t1

0x5421,	// (0x0007036c) vradio_tuning_pane_g1

0x542c,	// (0x00070377) vradio_tuning_pane_t1

0x9558,	// (0x000744a3) area_side_right_pane_ParamLimits

0x9558,	// (0x000744a3) area_side_right_pane

0xce08,	// (0x00077d53) status_small_pane_g1

0xce10,	// (0x00077d5b) status_small_pane_g2

0xce19,	// (0x00077d64) status_small_pane_g3

0xce22,	// (0x00077d6d) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0007a548) status_small_pane_g

0xce2b,	// (0x00077d76) status_small_pane_t1

0x95a8,	// (0x000744f3) main_video3_pane

0xd944,	// (0x0007888f) cams_zoom_vslider_pane

0xd94c,	// (0x00078897) image3_wide_pane_ParamLimits

0xd94c,	// (0x00078897) image3_wide_pane

0xd966,	// (0x000788b1) image3_wide_small_pane

0xd972,	// (0x000788bd) main_video3_pane_g1_ParamLimits

0xd972,	// (0x000788bd) main_video3_pane_g1

0xd98e,	// (0x000788d9) main_video3_pane_g2_ParamLimits

0xd98e,	// (0x000788d9) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007a793) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007a793) main_video3_pane_g

0xd9aa,	// (0x000788f5) main_video3_pane_t1_ParamLimits

0xd9aa,	// (0x000788f5) main_video3_pane_t1

0xd9d5,	// (0x00078920) main_video3_pane_t2_ParamLimits

0xd9d5,	// (0x00078920) main_video3_pane_t2

0xda00,	// (0x0007894b) main_video3_pane_t3_ParamLimits

0xda00,	// (0x0007894b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007a798) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007a798) main_video3_pane_t

0xda2d,	// (0x00078978) cams_zoom_vslider_pane_g1

0xda36,	// (0x00078981) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007a79f) cams_zoom_vslider_pane_g

0xda3e,	// (0x00078989) small_slider_vertical_pane

0xd255,	// (0x000781a0) small_slider_vertical_pane_g1

0xd255,	// (0x000781a0) small_slider_vertical_pane_g2

0xda46,	// (0x00078991) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007a7a4) small_slider_vertical_pane_g

0x95a8,	// (0x000744f3) main_hwr_training_pane

0xda4f,	// (0x0007899a) hwr_training_instruct_pane_ParamLimits

0xda4f,	// (0x0007899a) hwr_training_instruct_pane

0x543b,	// (0x00070386) hwr_training_navi_pane_ParamLimits

0x543b,	// (0x00070386) hwr_training_navi_pane

0x545a,	// (0x000703a5) hwr_training_write_pane_ParamLimits

0x545a,	// (0x000703a5) hwr_training_write_pane

0x9522,	// (0x0007446d) bg_frame_shadow_pane

0xda8e,	// (0x000789d9) hwr_training_write_pane_g1

0xda96,	// (0x000789e1) hwr_training_write_pane_g2

0xda9e,	// (0x000789e9) hwr_training_write_pane_g3

0xdaa6,	// (0x000789f1) hwr_training_write_pane_g4

0xdaae,	// (0x000789f9) hwr_training_write_pane_g5

0xdab6,	// (0x00078a01) hwr_training_write_pane_g6

0xdabe,	// (0x00078a09) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007a7ab) hwr_training_write_pane_g

0x98d2,	// (0x0007481d) hwr_training_navi_pane_g1_ParamLimits

0x98d2,	// (0x0007481d) hwr_training_navi_pane_g1

0x98e4,	// (0x0007482f) hwr_training_navi_pane_g2_ParamLimits

0x98e4,	// (0x0007482f) hwr_training_navi_pane_g2

0x98f6,	// (0x00074841) hwr_training_navi_pane_g3_ParamLimits

0x98f6,	// (0x00074841) hwr_training_navi_pane_g3

0x9906,	// (0x00074851) hwr_training_navi_pane_g4_ParamLimits

0x9906,	// (0x00074851) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007a7ba) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007a7ba) hwr_training_navi_pane_g

0x9913,	// (0x0007485e) hwr_training_navi_pane_t1

0x54a2,	// (0x000703ed) list_single_hwr_training_instruct_pane_ParamLimits

0x54a2,	// (0x000703ed) list_single_hwr_training_instruct_pane

0xdac6,	// (0x00078a11) list_single_hwr_training_instruct_pane_t1

0xd195,	// (0x000780e0) bg_frame_shadow_pane_g1

0xdad5,	// (0x00078a20) bg_frame_shadow_pane_g2

0xdadd,	// (0x00078a28) bg_frame_shadow_pane_g3

0xdae5,	// (0x00078a30) bg_frame_shadow_pane_g4

0xdaed,	// (0x00078a38) bg_frame_shadow_pane_g5

0xdaf5,	// (0x00078a40) bg_frame_shadow_pane_g6

0xdafd,	// (0x00078a48) bg_frame_shadow_pane_g7

0xae70,	// (0x00075dbb) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007a7c5) bg_frame_shadow_pane_g

0x95a8,	// (0x000744f3) main_video_tele_dialer_pane

0x54b7,	// (0x00070402) aid_size_cell_video_keypad_ParamLimits

0x54b7,	// (0x00070402) aid_size_cell_video_keypad

0x54d1,	// (0x0007041c) grid_video_dialer_keypad_pane_ParamLimits

0x54d1,	// (0x0007041c) grid_video_dialer_keypad_pane

0x551d,	// (0x00070468) video_down_pane_cp_ParamLimits

0x551d,	// (0x00070468) video_down_pane_cp

0x554f,	// (0x0007049a) cell_video_dialer_keypad_pane_ParamLimits

0x554f,	// (0x0007049a) cell_video_dialer_keypad_pane

0xdb05,	// (0x00078a50) bg_button_pane_cp08_ParamLimits

0xdb05,	// (0x00078a50) bg_button_pane_cp08

0x5571,	// (0x000704bc) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5571,	// (0x000704bc) cell_video_dialer_keypad_pane_g1

0x4c23,	// (0x0006fb6e) mup3_rocker2_pane_ParamLimits

0x4c23,	// (0x0006fb6e) mup3_rocker2_pane

0xd255,	// (0x000781a0) mup3_rocker2_pane_g1

0x3760,	// (0x0006e6ab) main_dialer2_pane

0x95a8,	// (0x000744f3) main_mp4_pane

0x9929,	// (0x00074874) main_mp4_pane_g1_ParamLimits

0x9929,	// (0x00074874) main_mp4_pane_g1

0x9929,	// (0x00074874) main_mp4_pane_g2_ParamLimits

0x9929,	// (0x00074874) main_mp4_pane_g2

0x55a8,	// (0x000704f3) main_mp4_pane_g3_ParamLimits

0x55a8,	// (0x000704f3) main_mp4_pane_g3

0x9937,	// (0x00074882) main_mp4_pane_g4_ParamLimits

0x9937,	// (0x00074882) main_mp4_pane_g4

0x995f,	// (0x000748aa) main_mp4_pane_g5_ParamLimits

0x995f,	// (0x000748aa) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007a7e5) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007a7e5) main_mp4_pane_g

0x99af,	// (0x000748fa) main_mp4_pane_t1_ParamLimits

0x99af,	// (0x000748fa) main_mp4_pane_t1

0x9a0b,	// (0x00074956) main_mp4_pane_t2_ParamLimits

0x9a0b,	// (0x00074956) main_mp4_pane_t2

0xdb11,	// (0x00078a5c) main_mp4_pane_t3_ParamLimits

0xdb11,	// (0x00078a5c) main_mp4_pane_t3

0x9a5d,	// (0x000749a8) main_mp4_pane_t4_ParamLimits

0x9a5d,	// (0x000749a8) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007a7f2) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007a7f2) main_mp4_pane_t

0x9aa1,	// (0x000749ec) mp4_progress_pane_ParamLimits

0x9aa1,	// (0x000749ec) mp4_progress_pane

0x9aeb,	// (0x00074a36) mp4_rocker_pane_ParamLimits

0x9aeb,	// (0x00074a36) mp4_rocker_pane

0xdb39,	// (0x00078a84) mp4_progress_pane_t1

0xdb52,	// (0x00078a9d) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007a7fb) mp4_progress_pane_t

0xdb6b,	// (0x00078ab6) mup_progress_pane_cp04

0xdb77,	// (0x00078ac2) mp4_rocker_pane_g1

0x55e4,	// (0x0007052f) aid_cell_size_keypad2_ParamLimits

0x55e4,	// (0x0007052f) aid_cell_size_keypad2

0x55fa,	// (0x00070545) dialer2_ne_pane_ParamLimits

0x55fa,	// (0x00070545) dialer2_ne_pane

0x5614,	// (0x0007055f) grid_dialer2_keypad_pane_ParamLimits

0x5614,	// (0x0007055f) grid_dialer2_keypad_pane

0xd03a,	// (0x00077f85) bg_popup_call_pane_cp07_ParamLimits

0xd03a,	// (0x00077f85) bg_popup_call_pane_cp07

0x5630,	// (0x0007057b) dialer2_ne_pane_t1_ParamLimits

0x5630,	// (0x0007057b) dialer2_ne_pane_t1

0x566b,	// (0x000705b6) cell_dialer2_keypad_pane_ParamLimits

0x566b,	// (0x000705b6) cell_dialer2_keypad_pane

0xdb93,	// (0x00078ade) bg_button_pane_pane_cp04_ParamLimits

0xdb93,	// (0x00078ade) bg_button_pane_pane_cp04

0x568d,	// (0x000705d8) cell_dialer2_keypad_pane_g1_ParamLimits

0x568d,	// (0x000705d8) cell_dialer2_keypad_pane_g1

0x149b,	// (0x0006c3e6) aid_placing_vt_set_content_ParamLimits

0x149b,	// (0x0006c3e6) aid_placing_vt_set_content

0x14c3,	// (0x0006c40e) aid_placing_vt_set_title_ParamLimits

0x14c3,	// (0x0006c40e) aid_placing_vt_set_title

0x95a8,	// (0x000744f3) main_image3_pane

0x5753,	// (0x0007069e) area_side_right_pane_cp01_ParamLimits

0x5753,	// (0x0007069e) area_side_right_pane_cp01

0x9929,	// (0x00074874) main_image3_pane_g1_ParamLimits

0x9929,	// (0x00074874) main_image3_pane_g1

0x576a,	// (0x000706b5) main_image3_pane_g2_ParamLimits

0x576a,	// (0x000706b5) main_image3_pane_g2

0x5792,	// (0x000706dd) main_image3_pane_g3_ParamLimits

0x5792,	// (0x000706dd) main_image3_pane_g3

0x57bc,	// (0x00070707) main_image3_pane_g4_ParamLimits

0x57bc,	// (0x00070707) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007a80a) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007a80a) main_image3_pane_g

0x57e6,	// (0x00070731) main_image3_pane_t1_ParamLimits

0x57e6,	// (0x00070731) main_image3_pane_t1

0x583e,	// (0x00070789) main_image3_pane_t2_ParamLimits

0x583e,	// (0x00070789) main_image3_pane_t2

0x5890,	// (0x000707db) main_image3_pane_t3_ParamLimits

0x5890,	// (0x000707db) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007a813) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007a813) main_image3_pane_t

0xb26c,	// (0x000761b7) grid_sctrl_middle_pane_cp01_ParamLimits

0xb26c,	// (0x000761b7) grid_sctrl_middle_pane_cp01

0x5918,	// (0x00070863) cell_sctrl_middle_pane_cp01_ParamLimits

0x5918,	// (0x00070863) cell_sctrl_middle_pane_cp01

0x5935,	// (0x00070880) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5935,	// (0x00070880) cell_sctrl_middle_pane_cp01_g1

0x95a8,	// (0x000744f3) main_call4_pane

0x594b,	// (0x00070896) aid_size_button_call4_ParamLimits

0x594b,	// (0x00070896) aid_size_button_call4

0x597c,	// (0x000708c7) call4_windows_pane_ParamLimits

0x597c,	// (0x000708c7) call4_windows_pane

0x599c,	// (0x000708e7) grid_call4_button_pane_ParamLimits

0x599c,	// (0x000708e7) grid_call4_button_pane

0xdb9f,	// (0x00078aea) call4_windows_conf_pane

0xdbb6,	// (0x00078b01) popup_call4_audio_first_window_ParamLimits

0xdbb6,	// (0x00078b01) popup_call4_audio_first_window

0xdc02,	// (0x00078b4d) popup_call4_audio_second_window_ParamLimits

0xdc02,	// (0x00078b4d) popup_call4_audio_second_window

0xdc16,	// (0x00078b61) popup_call4_audio_wait_window_ParamLimits

0xdc16,	// (0x00078b61) popup_call4_audio_wait_window

0x59c9,	// (0x00070914) cell_call4_button_pane_ParamLimits

0x59c9,	// (0x00070914) cell_call4_button_pane

0x59f2,	// (0x0007093d) bg_button_pane_cp09_ParamLimits

0x59f2,	// (0x0007093d) bg_button_pane_cp09

0x59fe,	// (0x00070949) cell_call4_button_pane_g1_ParamLimits

0x59fe,	// (0x00070949) cell_call4_button_pane_g1

0x5a24,	// (0x0007096f) cell_call4_button_pane_t1_ParamLimits

0x5a24,	// (0x0007096f) cell_call4_button_pane_t1

0xdc5e,	// (0x00078ba9) popup_call4_audio_conf_window_ParamLimits

0xdc5e,	// (0x00078ba9) popup_call4_audio_conf_window

0x4c83,	// (0x0006fbce) mup3_progress_pane_t1_ParamLimits

0x4ca2,	// (0x0006fbed) mup3_progress_pane_t2_ParamLimits

0xd55c,	// (0x000784a7) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0007a6ec) mup3_progress_pane_t_ParamLimits

0xd579,	// (0x000784c4) mup_progress_pane_cp03_ParamLimits

0x5281,	// (0x000701cc) mup3_control_keys_pane_g4_copy1

0x9acf,	// (0x00074a1a) mp4_rocker2_pane_ParamLimits

0x9acf,	// (0x00074a1a) mp4_rocker2_pane

0xdc72,	// (0x00078bbd) mp4_rocker2_pane_g1

0xdc7a,	// (0x00078bc5) mp4_rocker2_pane_g2

0x9b3d,	// (0x00074a88) mp4_rocker2_pane_g3

0x9b45,	// (0x00074a90) mp4_rocker2_pane_g4

0x9b4d,	// (0x00074a98) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007a81c) mp4_rocker2_pane_g

0x95a8,	// (0x000744f3) main_camera4_pane

0x95a8,	// (0x000744f3) main_video4_pane

0x54eb,	// (0x00070436) main_video_tele_dialer_pane_t1_ParamLimits

0x54eb,	// (0x00070436) main_video_tele_dialer_pane_t1

0x5504,	// (0x0007044f) main_video_tele_dialer_pane_t2_ParamLimits

0x5504,	// (0x0007044f) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007a7d6) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007a7d6) main_video_tele_dialer_pane_t

0x5a62,	// (0x000709ad) cam4_autofocus_pane_ParamLimits

0x5a62,	// (0x000709ad) cam4_autofocus_pane

0x5a78,	// (0x000709c3) cam4_image_uncrop_pane_ParamLimits

0x5a78,	// (0x000709c3) cam4_image_uncrop_pane

0x5a92,	// (0x000709dd) cam4_indicators_pane_ParamLimits

0x5a92,	// (0x000709dd) cam4_indicators_pane

0x5abd,	// (0x00070a08) main_camera4_pane_g1_ParamLimits

0x5abd,	// (0x00070a08) main_camera4_pane_g1

0x5acf,	// (0x00070a1a) main_camera4_pane_g2_ParamLimits

0x5acf,	// (0x00070a1a) main_camera4_pane_g2

0x5ae2,	// (0x00070a2d) main_camera4_pane_g3_ParamLimits

0x5ae2,	// (0x00070a2d) main_camera4_pane_g3

0x5af5,	// (0x00070a40) main_camera4_pane_g4_ParamLimits

0x5af5,	// (0x00070a40) main_camera4_pane_g4

0x5b08,	// (0x00070a53) main_camera4_pane_g5_ParamLimits

0x5b08,	// (0x00070a53) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007a827) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007a827) main_camera4_pane_g

0x5b2c,	// (0x00070a77) main_camera4_pane_t1_ParamLimits

0x5b2c,	// (0x00070a77) main_camera4_pane_t1

0x9b71,	// (0x00074abc) bg_tb_trans_pane_cp06

0x9b87,	// (0x00074ad2) cam4_indicators_pane_g1

0x9b98,	// (0x00074ae3) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007a842) cam4_indicators_pane_g

0x9bb6,	// (0x00074b01) cam4_indicators_pane_t1

0x5b90,	// (0x00070adb) main_video4_pane_g1_ParamLimits

0x5b90,	// (0x00070adb) main_video4_pane_g1

0x5b9f,	// (0x00070aea) main_video4_pane_g2_ParamLimits

0x5b9f,	// (0x00070aea) main_video4_pane_g2

0x5bae,	// (0x00070af9) main_video4_pane_g3_ParamLimits

0x5bae,	// (0x00070af9) main_video4_pane_g3

0x5bbd,	// (0x00070b08) main_video4_pane_g4_ParamLimits

0x5bbd,	// (0x00070b08) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007a849) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007a849) main_video4_pane_g

0x5bdb,	// (0x00070b26) vid4_indicators_pane_ParamLimits

0x5bdb,	// (0x00070b26) vid4_indicators_pane

0x5c09,	// (0x00070b54) video4_image_uncrop_cif_pane_ParamLimits

0x5c09,	// (0x00070b54) video4_image_uncrop_cif_pane

0x5c23,	// (0x00070b6e) video4_image_uncrop_nhd_pane_ParamLimits

0x5c23,	// (0x00070b6e) video4_image_uncrop_nhd_pane

0x5a78,	// (0x000709c3) video4_image_uncrop_vga_pane_ParamLimits

0x5a78,	// (0x000709c3) video4_image_uncrop_vga_pane

0x959a,	// (0x000744e5) bg_tb_trans_pane_cp07

0x9be2,	// (0x00074b2d) vid4_indicators_pane_g1

0x9bf6,	// (0x00074b41) vid4_indicators_pane_g2

0x9c0a,	// (0x00074b55) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007a854) vid4_indicators_pane_g

0x9c39,	// (0x00074b84) vid4_indicators_pane_t1

0x5c37,	// (0x00070b82) cam4_autofocus_pane_g1

0x5c3f,	// (0x00070b8a) cam4_autofocus_pane_g2

0x5c47,	// (0x00070b92) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007a85f) cam4_autofocus_pane_g

0x5c4f,	// (0x00070b9a) cam4_autofocus_pane_g3_copy1

0x5533,	// (0x0007047e) video_down_pane_cp_t1

0x5541,	// (0x0007048c) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007a7db) video_down_pane_cp_t

0x959a,	// (0x000744e5) popup_vitu2_window_ParamLimits

0x959a,	// (0x000744e5) popup_vitu2_window

0x5c57,	// (0x00070ba2) aid_size_cell2_itu2_ParamLimits

0x5c57,	// (0x00070ba2) aid_size_cell2_itu2

0x5c7d,	// (0x00070bc8) aid_size_cell_itu2_ParamLimits

0x5c7d,	// (0x00070bc8) aid_size_cell_itu2

0x5cd9,	// (0x00070c24) bg_popup_window_pane_cp09_ParamLimits

0x5cd9,	// (0x00070c24) bg_popup_window_pane_cp09

0x5ce7,	// (0x00070c32) field_vitu2_entry_pane_ParamLimits

0x5ce7,	// (0x00070c32) field_vitu2_entry_pane

0x5d0d,	// (0x00070c58) grid_vitu2_function_pane_ParamLimits

0x5d0d,	// (0x00070c58) grid_vitu2_function_pane

0x5d5e,	// (0x00070ca9) grid_vitu2_itu_pane_ParamLimits

0x5d5e,	// (0x00070ca9) grid_vitu2_itu_pane

0x5df1,	// (0x00070d3c) cell_vitu2_itu_pane_ParamLimits

0x5df1,	// (0x00070d3c) cell_vitu2_itu_pane

0x5e15,	// (0x00070d60) cell_vitu2_function_pane_ParamLimits

0x5e15,	// (0x00070d60) cell_vitu2_function_pane

0xdc82,	// (0x00078bcd) bg_popup_call_pane_cp08_ParamLimits

0xdc82,	// (0x00078bcd) bg_popup_call_pane_cp08

0xdc9b,	// (0x00078be6) field_vitu2_entry_pane_g1

0xdca7,	// (0x00078bf2) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007a866) field_vitu2_entry_pane_g

0x5e54,	// (0x00070d9f) field_vitu2_entry_pane_t1_ParamLimits

0x5e54,	// (0x00070d9f) field_vitu2_entry_pane_t1

0x9c50,	// (0x00074b9b) field_vitu2_entry_pane_t2_ParamLimits

0x9c50,	// (0x00074b9b) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007a86d) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007a86d) field_vitu2_entry_pane_t

0x5e83,	// (0x00070dce) bg_button_pane_cp010_ParamLimits

0x5e83,	// (0x00070dce) bg_button_pane_cp010

0x5e91,	// (0x00070ddc) cell_vitu2_itu_pane_g1

0x5ebc,	// (0x00070e07) cell_vitu2_itu_pane_t1_ParamLimits

0x5ebc,	// (0x00070e07) cell_vitu2_itu_pane_t1

0x01af,	// (0x0006b0fa) cell_vitu2_itu_pane_t2_ParamLimits

0x01af,	// (0x0006b0fa) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007a877) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007a877) cell_vitu2_itu_pane_t

0x959a,	// (0x000744e5) bg_button_pane_cp011

0x5f1a,	// (0x00070e65) cell_vitu2_function_pane_g1

0x95a8,	// (0x000744f3) main_myfav_hc_pane

0x58e0,	// (0x0007082b) popup_image3_note_pane_ParamLimits

0x58e0,	// (0x0007082b) popup_image3_note_pane

0x58fc,	// (0x00070847) popup_image3_tool_bar_pane_ParamLimits

0x58fc,	// (0x00070847) popup_image3_tool_bar_pane

0x023d,	// (0x0006b188) cell_vitu2_itu_pane_t3_ParamLimits

0x023d,	// (0x0006b188) cell_vitu2_itu_pane_t3

0x9522,	// (0x0007446d) bg_popup_trans_pane

0xdcc9,	// (0x00078c14) grid_image3_tool_bar_pane

0xdcd3,	// (0x00078c1e) bg_popup_trans_pane_g1

0xb1ce,	// (0x00076119) bg_popup_trans_pane_g2

0xdcdb,	// (0x00078c26) bg_popup_trans_pane_g3

0xdce3,	// (0x00078c2e) bg_popup_trans_pane_g4

0xdceb,	// (0x00078c36) bg_popup_trans_pane_g5

0xdcf3,	// (0x00078c3e) bg_popup_trans_pane_g6

0xdcfb,	// (0x00078c46) bg_popup_trans_pane_g7

0xdd03,	// (0x00078c4e) bg_popup_trans_pane_g8

0xb1ae,	// (0x000760f9) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007a87e) bg_popup_trans_pane_g

0xdd0b,	// (0x00078c56) cell_image3_tool_bar_pane_ParamLimits

0xdd0b,	// (0x00078c56) cell_image3_tool_bar_pane

0xd255,	// (0x000781a0) cell_image3_tool_bar_pane_g1

0x9522,	// (0x0007446d) bg_popup_trans_pane_cp1

0xdd1f,	// (0x00078c6a) popup_image3_note_pane_t1

0xdd2d,	// (0x00078c78) popup_image3_note_pane_t2

0xdd3b,	// (0x00078c86) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007a891) popup_image3_note_pane_t

0xdd49,	// (0x00078c94) popup_image3_note_pane_t3_copy1

0x5f2e,	// (0x00070e79) bg_myfav_hc_instruction_pane_ParamLimits

0x5f2e,	// (0x00070e79) bg_myfav_hc_instruction_pane

0x5f42,	// (0x00070e8d) cell_myfav_contact_pane_ParamLimits

0x5f42,	// (0x00070e8d) cell_myfav_contact_pane

0x5f60,	// (0x00070eab) cell_myfav_contact_pane_cp1_ParamLimits

0x5f60,	// (0x00070eab) cell_myfav_contact_pane_cp1

0x5f78,	// (0x00070ec3) cell_myfav_contact_pane_cp2_ParamLimits

0x5f78,	// (0x00070ec3) cell_myfav_contact_pane_cp2

0x5f90,	// (0x00070edb) cell_myfav_contact_pane_cp3_ParamLimits

0x5f90,	// (0x00070edb) cell_myfav_contact_pane_cp3

0x5fa7,	// (0x00070ef2) cell_myfav_contact_pane_cp4_ParamLimits

0x5fa7,	// (0x00070ef2) cell_myfav_contact_pane_cp4

0x5fbf,	// (0x00070f0a) cell_myfav_contact_pane_cp5_ParamLimits

0x5fbf,	// (0x00070f0a) cell_myfav_contact_pane_cp5

0x5fd3,	// (0x00070f1e) cell_myfav_contact_pane_cp6_ParamLimits

0x5fd3,	// (0x00070f1e) cell_myfav_contact_pane_cp6

0x5fe9,	// (0x00070f34) cell_myfav_contact_pane_cp7_ParamLimits

0x5fe9,	// (0x00070f34) cell_myfav_contact_pane_cp7

0xdd57,	// (0x00078ca2) listscroll_gen_pane_cp05

0x6003,	// (0x00070f4e) main_myfav_hc_pane_g1_ParamLimits

0x6003,	// (0x00070f4e) main_myfav_hc_pane_g1

0x601d,	// (0x00070f68) main_myfav_hc_pane_g2_ParamLimits

0x601d,	// (0x00070f68) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007a898) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007a898) main_myfav_hc_pane_g

0x604f,	// (0x00070f9a) main_myfav_hc_pane_t1_ParamLimits

0x604f,	// (0x00070f9a) main_myfav_hc_pane_t1

0xdd60,	// (0x00078cab) main_myfav_hc_pane_t2_ParamLimits

0xdd60,	// (0x00078cab) main_myfav_hc_pane_t2

0xdd72,	// (0x00078cbd) main_myfav_hc_pane_t3_ParamLimits

0xdd72,	// (0x00078cbd) main_myfav_hc_pane_t3

0x6066,	// (0x00070fb1) main_myfav_hc_pane_t4_ParamLimits

0x6066,	// (0x00070fb1) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007a89f) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007a89f) main_myfav_hc_pane_t

0xd255,	// (0x000781a0) bg_myfav_hc_instruction_pane_g1

0xdd84,	// (0x00078ccf) cell_myfav_contact_pane_g1_ParamLimits

0xdd84,	// (0x00078ccf) cell_myfav_contact_pane_g1

0xdd84,	// (0x00078ccf) cell_myfav_contact_pane_g2_ParamLimits

0xdd84,	// (0x00078ccf) cell_myfav_contact_pane_g2

0xdd90,	// (0x00078cdb) cell_myfav_contact_pane_g3_ParamLimits

0xdd90,	// (0x00078cdb) cell_myfav_contact_pane_g3

0xd546,	// (0x00078491) cell_myfav_contact_pane_g4_ParamLimits

0xd546,	// (0x00078491) cell_myfav_contact_pane_g4

0xdd9d,	// (0x00078ce8) cell_myfav_contact_pane_g5_ParamLimits

0xdd9d,	// (0x00078ce8) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007a8aa) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007a8aa) cell_myfav_contact_pane_g

0x6037,	// (0x00070f82) main_myfav_hc_pane_g3_ParamLimits

0x6037,	// (0x00070f82) main_myfav_hc_pane_g3

0x0412,	// (0x0006b35d) popup_adpt_find_window

0x608e,	// (0x00070fd9) afind_page_pane_ParamLimits

0x608e,	// (0x00070fd9) afind_page_pane

0x60a3,	// (0x00070fee) aid_size_cell_afind_ParamLimits

0x60a3,	// (0x00070fee) aid_size_cell_afind

0x60c1,	// (0x0007100c) bg_popup_sub_pane_cp09_ParamLimits

0x60c1,	// (0x0007100c) bg_popup_sub_pane_cp09

0x60ce,	// (0x00071019) find_pane_cp01_ParamLimits

0x60ce,	// (0x00071019) find_pane_cp01

0xdda9,	// (0x00078cf4) grid_afind_control_pane_ParamLimits

0xdda9,	// (0x00078cf4) grid_afind_control_pane

0x60db,	// (0x00071026) grid_afind_pane_ParamLimits

0x60db,	// (0x00071026) grid_afind_pane

0x60fd,	// (0x00071048) cell_afind_pane_ParamLimits

0x60fd,	// (0x00071048) cell_afind_pane

0xd255,	// (0x000781a0) afind_page_pane_g1

0x615e,	// (0x000710a9) afind_page_pane_g2

0x6167,	// (0x000710b2) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007a8b5) afind_page_pane_g

0x6170,	// (0x000710bb) afind_page_pane_t1

0xddbd,	// (0x00078d08) cell_afind_grid_control_pane_ParamLimits

0xddbd,	// (0x00078d08) cell_afind_grid_control_pane

0xdb93,	// (0x00078ade) bg_button_pane_cp69_ParamLimits

0xdb93,	// (0x00078ade) bg_button_pane_cp69

0x6190,	// (0x000710db) cell_afind_pane_g1_ParamLimits

0x6190,	// (0x000710db) cell_afind_pane_g1

0x619d,	// (0x000710e8) cell_afind_pane_t1_ParamLimits

0x619d,	// (0x000710e8) cell_afind_pane_t1

0xafc7,	// (0x00075f12) bg_button_pane_cp72

0xddcc,	// (0x00078d17) cell_afind_grid_control_pane_g1

0x320e,	// (0x0006e159) aid_image_placing_area_ParamLimits

0x320e,	// (0x0006e159) aid_image_placing_area

0xd84f,	// (0x0007879a) field_vitu_entry_pane_g1_ParamLimits

0xd84f,	// (0x0007879a) field_vitu_entry_pane_g1

0xd85b,	// (0x000787a6) field_vitu_entry_pane_g2_ParamLimits

0xd85b,	// (0x000787a6) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007a766) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007a766) field_vitu_entry_pane_g

0x5348,	// (0x00070293) cell_vitu_itu_pane_g1_ParamLimits

0x538a,	// (0x000702d5) cell_vitu_itu_pane_t3_ParamLimits

0x538a,	// (0x000702d5) cell_vitu_itu_pane_t3

0xdb39,	// (0x00078a84) mp4_progress_pane_t1_ParamLimits

0xdb52,	// (0x00078a9d) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007a7fb) mp4_progress_pane_t_ParamLimits

0xdb6b,	// (0x00078ab6) mup_progress_pane_cp04_ParamLimits

0x607a,	// (0x00070fc5) main_myfav_hc_pane_t5_ParamLimits

0x607a,	// (0x00070fc5) main_myfav_hc_pane_t5

0x9548,	// (0x00074493) aid_zoom_text_primary

0x0412,	// (0x0006b35d) popup_adpt_find_window_ParamLimits

0x959a,	// (0x000744e5) main_cam_set_pane

0x5aa9,	// (0x000709f4) cam4_zoom_pane_ParamLimits

0x5aa9,	// (0x000709f4) cam4_zoom_pane

0x61af,	// (0x000710fa) main_cam_set_pane_g1_ParamLimits

0x61af,	// (0x000710fa) main_cam_set_pane_g1

0x61bd,	// (0x00071108) main_cam_set_pane_g2_ParamLimits

0x61bd,	// (0x00071108) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007a8bc) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007a8bc) main_cam_set_pane_g

0x61de,	// (0x00071129) main_cam_set_pane_t1_ParamLimits

0x61de,	// (0x00071129) main_cam_set_pane_t1

0x61f9,	// (0x00071144) main_cset_listscroll_pane_ParamLimits

0x61f9,	// (0x00071144) main_cset_listscroll_pane

0x6219,	// (0x00071164) main_cset_slider_pane_ParamLimits

0x6219,	// (0x00071164) main_cset_slider_pane

0xdddd,	// (0x00078d28) main_cset_list_pane_ParamLimits

0xdddd,	// (0x00078d28) main_cset_list_pane

0xdded,	// (0x00078d38) scroll_pane_cp028

0x623f,	// (0x0007118a) aid_area_touch_slider

0x625b,	// (0x000711a6) cset_slider_pane

0x6285,	// (0x000711d0) main_cset_slider_pane_g1

0x629a,	// (0x000711e5) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007a8c1) main_cset_slider_pane_g

0xde26,	// (0x00078d71) main_cset_slider_pane_t1

0x6356,	// (0x000712a1) main_cset_slider_pane_t2

0x6370,	// (0x000712bb) main_cset_slider_pane_t3

0x638a,	// (0x000712d5) main_cset_slider_pane_t4

0x63a4,	// (0x000712ef) main_cset_slider_pane_t5

0x63be,	// (0x00071309) main_cset_slider_pane_t6

0x63d3,	// (0x0007131e) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007a8e6) main_cset_slider_pane_t

0x64d7,	// (0x00071422) cset_list_set_pane_ParamLimits

0x64d7,	// (0x00071422) cset_list_set_pane

0x64e9,	// (0x00071434) aid_position_infowindow_above

0x64f1,	// (0x0007143c) aid_position_infowindow_below

0x9c6d,	// (0x00074bb8) cset_list_set_pane_g1_ParamLimits

0x9c6d,	// (0x00074bb8) cset_list_set_pane_g1

0x9c79,	// (0x00074bc4) cset_list_set_pane_g3_ParamLimits

0x9c79,	// (0x00074bc4) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007a905) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007a905) cset_list_set_pane_g

0x9c88,	// (0x00074bd3) cset_list_set_pane_t1_ParamLimits

0x9c88,	// (0x00074bd3) cset_list_set_pane_t1

0xb26c,	// (0x000761b7) list_highlight_pane_cp021_ParamLimits

0xb26c,	// (0x000761b7) list_highlight_pane_cp021

0xbb88,	// (0x00076ad3) cset_slider_pane_g1

0xbb9a,	// (0x00076ae5) cset_slider_pane_g2

0xbb91,	// (0x00076adc) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007a90a) cset_slider_pane_g

0x9c9d,	// (0x00074be8) aid_area_touch_cam4_zoom

0x9ca5,	// (0x00074bf0) cam4_zoom_cont_pane

0x9cad,	// (0x00074bf8) cam4_zoom_pane_g1

0x9cb5,	// (0x00074c00) cam4_zoom_pane_g2

0x64f9,	// (0x00071444) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007a911) cam4_zoom_pane_g

0x9cbd,	// (0x00074c08) cam4_zoom_cont_pane_g1

0x9cc6,	// (0x00074c11) cam4_zoom_cont_pane_g2

0x9ccf,	// (0x00074c1a) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007a918) cam4_zoom_cont_pane_g

0x5969,	// (0x000708b4) call4_image_pane_ParamLimits

0x5969,	// (0x000708b4) call4_image_pane

0xdb9f,	// (0x00078aea) call4_windows_conf_pane_ParamLimits

0xdbe0,	// (0x00078b2b) popup_call4_audio_in_window_ParamLimits

0xdbe0,	// (0x00078b2b) popup_call4_audio_in_window

0x9522,	// (0x0007446d) bg_popup_call2_act_pane_cp02

0xdc56,	// (0x00078ba1) call4_list_conf_pane

0xd255,	// (0x000781a0) call4_image_pane_g1

0xd255,	// (0x000781a0) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0007a62c) call4_image_pane_g

0xdec6,	// (0x00078e11) list_single_graphic_popup_conf4_pane_ParamLimits

0xdec6,	// (0x00078e11) list_single_graphic_popup_conf4_pane

0x9522,	// (0x0007446d) list_highlight_pane_cp022

0xded9,	// (0x00078e24) list_single_graphic_popup_conf4_pane_g1

0xb751,	// (0x0007669c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007a91f) list_single_graphic_popup_conf4_pane_g

0xdee1,	// (0x00078e2c) list_single_graphic_popup_conf4_pane_t1

0x15e7,	// (0x0006c532) popup_vtel_slider_window_ParamLimits

0x15e7,	// (0x0006c532) popup_vtel_slider_window

0xdb81,	// (0x00078acc) dialer2_ne_pane_t2_ParamLimits

0xdb81,	// (0x00078acc) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007a800) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007a800) dialer2_ne_pane_t

0xd03a,	// (0x00077f85) bg_popup_sub_pane_cp010_ParamLimits

0xd03a,	// (0x00077f85) bg_popup_sub_pane_cp010

0x6501,	// (0x0007144c) popup_vtel_slider_window_g1_ParamLimits

0x6501,	// (0x0007144c) popup_vtel_slider_window_g1

0x6514,	// (0x0007145f) popup_vtel_slider_window_g2_ParamLimits

0x6514,	// (0x0007145f) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007a924) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007a924) popup_vtel_slider_window_g

0x656a,	// (0x000714b5) vtel_slider_pane_ParamLimits

0x656a,	// (0x000714b5) vtel_slider_pane

0x658c,	// (0x000714d7) vtel_slider_pane_g1_ParamLimits

0x658c,	// (0x000714d7) vtel_slider_pane_g1

0x65a0,	// (0x000714eb) vtel_slider_pane_g2_ParamLimits

0x65a0,	// (0x000714eb) vtel_slider_pane_g2

0x65b8,	// (0x00071503) vtel_slider_pane_g3_ParamLimits

0x65b8,	// (0x00071503) vtel_slider_pane_g3

0x658c,	// (0x000714d7) vtel_slider_pane_g4_ParamLimits

0x658c,	// (0x000714d7) vtel_slider_pane_g4

0x65ce,	// (0x00071519) vtel_slider_pane_g5_ParamLimits

0x65ce,	// (0x00071519) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007a92d) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007a92d) vtel_slider_pane_g

0x959a,	// (0x000744e5) main_gallery2_pane

0x5ca9,	// (0x00070bf4) aid_size_row_itut2_dropdow_list_ParamLimits

0x5ca9,	// (0x00070bf4) aid_size_row_itut2_dropdow_list

0x5d35,	// (0x00070c80) grid_vitu2_function_top_pane_ParamLimits

0x5d35,	// (0x00070c80) grid_vitu2_function_top_pane

0x5d9a,	// (0x00070ce5) popup_vitu2_dropdown_list_window_ParamLimits

0x5d9a,	// (0x00070ce5) popup_vitu2_dropdown_list_window

0x5dc3,	// (0x00070d0e) popup_vitu2_match_list_window

0x65f2,	// (0x0007153d) cell_vitu2_function_top_pane_ParamLimits

0x65f2,	// (0x0007153d) cell_vitu2_function_top_pane

0x6610,	// (0x0007155b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6610,	// (0x0007155b) cell_vitu2_function_top_pane_cp01

0x662e,	// (0x00071579) cell_vitu2_function_top_wide_pane_ParamLimits

0x662e,	// (0x00071579) cell_vitu2_function_top_wide_pane

0x959a,	// (0x000744e5) bg_button_pane_cp012

0x664c,	// (0x00071597) cell_vitu2_function_top_pane_g1

0x9cd8,	// (0x00074c23) bg_button_pane_cp013_ParamLimits

0x9cd8,	// (0x00074c23) bg_button_pane_cp013

0x6660,	// (0x000715ab) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6660,	// (0x000715ab) cell_vitu2_function_top_wide_pane_g1

0x959a,	// (0x000744e5) bg_popup_sub_pane_cp20

0x6678,	// (0x000715c3) list_vitu2_match_list_pane

0xdcd3,	// (0x00078c1e) bg_popup_sub_pane_cp20_g1

0xdcdb,	// (0x00078c26) bg_popup_sub_pane_cp20_g2

0xb1ce,	// (0x00076119) bg_popup_sub_pane_cp20_g3

0xdce3,	// (0x00078c2e) bg_popup_sub_pane_cp20_g4

0xb1ae,	// (0x000760f9) bg_popup_sub_pane_cp20_g5

0xdef7,	// (0x00078e42) bg_popup_sub_pane_cp20_g6

0xdcf3,	// (0x00078c3e) bg_popup_sub_pane_cp20_g7

0xdcfb,	// (0x00078c46) bg_popup_sub_pane_cp20_g8

0xdd03,	// (0x00078c4e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007a938) bg_popup_sub_pane_cp20_g

0x9cf4,	// (0x00074c3f) list_vitu2_match_list_item_pane_ParamLimits

0x9cf4,	// (0x00074c3f) list_vitu2_match_list_item_pane

0x9d06,	// (0x00074c51) list_vitu2_match_list_item_pane_t1

0x95a8,	// (0x000744f3) bg_popup_sub_pane_cp21

0x9d14,	// (0x00074c5f) grid_vitu2_dropdown_list_pane

0x66e0,	// (0x0007162b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x66e0,	// (0x0007162b) cell_vitu2_dropdown_list_char_pane

0x6701,	// (0x0007164c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6701,	// (0x0007164c) cell_vitu2_dropdown_list_ctrl_pane

0xdeff,	// (0x00078e4a) cell_vitu2_dropdown_list_char_pane_g1

0xdf08,	// (0x00078e53) cell_vitu2_dropdown_list_char_pane_g2

0xdf11,	// (0x00078e5c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007a955) cell_vitu2_dropdown_list_char_pane_g

0x672d,	// (0x00071678) cell_vitu2_dropdown_list_char_pane_t1

0x673b,	// (0x00071686) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x673b,	// (0x00071686) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6748,	// (0x00071693) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6748,	// (0x00071693) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6755,	// (0x000716a0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6755,	// (0x000716a0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6762,	// (0x000716ad) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6762,	// (0x000716ad) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9b71,	// (0x00074abc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9b71,	// (0x00074abc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007a95c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007a95c) cell_vitu2_dropdown_list_ctrl_pane_g

0x677e,	// (0x000716c9) aid_size_cell_gallery2_ParamLimits

0x677e,	// (0x000716c9) aid_size_cell_gallery2

0x679c,	// (0x000716e7) grid_gallery2_pane_ParamLimits

0x679c,	// (0x000716e7) grid_gallery2_pane

0x67b6,	// (0x00071701) scroll_pane_cp029_ParamLimits

0x67b6,	// (0x00071701) scroll_pane_cp029

0x67c2,	// (0x0007170d) cell_gallery2_pane_ParamLimits

0x67c2,	// (0x0007170d) cell_gallery2_pane

0xdf1a,	// (0x00078e65) cell_gallery2_pane_g2

0x681d,	// (0x00071768) cell_gallery2_pane_g3

0xdf22,	// (0x00078e6d) cell_gallery2_pane_g4

0xdf2a,	// (0x00078e75) cell_gallery2_pane_g5

0xba44,	// (0x0007698f) grid_highlight_pane_cp10

0x5dc3,	// (0x00070d0e) popup_vitu2_match_list_window_ParamLimits

0x5dda,	// (0x00070d25) popup_vitu2_query_window_ParamLimits

0x5dda,	// (0x00070d25) popup_vitu2_query_window

0x95a8,	// (0x000744f3) bg_vitu2_candi_button_pane

0xdeff,	// (0x00078e4a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdf08,	// (0x00078e53) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdf11,	// (0x00078e5c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6825,	// (0x00071770) bg_button_pane_cp015

0x6837,	// (0x00071782) bg_button_pane_cp016

0x684a,	// (0x00071795) bg_button_pane_cp017

0xce4d,	// (0x00077d98) bg_popup_sub_pane_cp22

0xdf32,	// (0x00078e7d) popup_vitu2_query_window_g1

0x688f,	// (0x000717da) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007a967) popup_vitu2_query_window_g

0x68ae,	// (0x000717f9) popup_vitu2_query_window_t1_ParamLimits

0x68ae,	// (0x000717f9) popup_vitu2_query_window_t1

0x68e3,	// (0x0007182e) popup_vitu2_query_window_t2_ParamLimits

0x68e3,	// (0x0007182e) popup_vitu2_query_window_t2

0x68f5,	// (0x00071840) popup_vitu2_query_window_t3_ParamLimits

0x68f5,	// (0x00071840) popup_vitu2_query_window_t3

0x691d,	// (0x00071868) popup_vitu2_query_window_t4_ParamLimits

0x691d,	// (0x00071868) popup_vitu2_query_window_t4

0x693e,	// (0x00071889) popup_vitu2_query_window_t5_ParamLimits

0x693e,	// (0x00071889) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007a96e) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007a96e) popup_vitu2_query_window_t

0xddd5,	// (0x00078d20) main_cset_text_pane

0x623f,	// (0x0007118a) aid_area_touch_slider_ParamLimits

0x625b,	// (0x000711a6) cset_slider_pane_ParamLimits

0x6285,	// (0x000711d0) main_cset_slider_pane_g1_ParamLimits

0x629a,	// (0x000711e5) main_cset_slider_pane_g2_ParamLimits

0xddf6,	// (0x00078d41) main_cset_slider_pane_g3_ParamLimits

0xddf6,	// (0x00078d41) main_cset_slider_pane_g3

0x62af,	// (0x000711fa) main_cset_slider_pane_g4_ParamLimits

0x62af,	// (0x000711fa) main_cset_slider_pane_g4

0x62be,	// (0x00071209) main_cset_slider_pane_g5_ParamLimits

0x62be,	// (0x00071209) main_cset_slider_pane_g5

0x62ca,	// (0x00071215) main_cset_slider_pane_g6_ParamLimits

0x62ca,	// (0x00071215) main_cset_slider_pane_g6

0xf976,	// (0x0007a8c1) main_cset_slider_pane_g_ParamLimits

0xde26,	// (0x00078d71) main_cset_slider_pane_t1_ParamLimits

0x6356,	// (0x000712a1) main_cset_slider_pane_t2_ParamLimits

0x6370,	// (0x000712bb) main_cset_slider_pane_t3_ParamLimits

0x638a,	// (0x000712d5) main_cset_slider_pane_t4_ParamLimits

0x63a4,	// (0x000712ef) main_cset_slider_pane_t5_ParamLimits

0x63be,	// (0x00071309) main_cset_slider_pane_t6_ParamLimits

0x63d3,	// (0x0007131e) main_cset_slider_pane_t7_ParamLimits

0x63fd,	// (0x00071348) main_cset_slider_pane_t8_ParamLimits

0x63fd,	// (0x00071348) main_cset_slider_pane_t8

0x6425,	// (0x00071370) main_cset_slider_pane_t9_ParamLimits

0x6425,	// (0x00071370) main_cset_slider_pane_t9

0x644d,	// (0x00071398) main_cset_slider_pane_t10_ParamLimits

0x644d,	// (0x00071398) main_cset_slider_pane_t10

0x6475,	// (0x000713c0) main_cset_slider_pane_t11_ParamLimits

0x6475,	// (0x000713c0) main_cset_slider_pane_t11

0x649d,	// (0x000713e8) main_cset_slider_pane_t12_ParamLimits

0x649d,	// (0x000713e8) main_cset_slider_pane_t12

0x64ba,	// (0x00071405) main_cset_slider_pane_t13_ParamLimits

0x64ba,	// (0x00071405) main_cset_slider_pane_t13

0xf99b,	// (0x0007a8e6) main_cset_slider_pane_t_ParamLimits

0x9522,	// (0x0007446d) bg_popup_sub_pane_cp011

0xdf3e,	// (0x00078e89) main_cset_text_pane_g1

0xdf46,	// (0x00078e91) main_cset_text_pane_t1

0xdf54,	// (0x00078e9f) main_cset_text_pane_t2

0xdf62,	// (0x00078ead) main_cset_text_pane_t3

0xdf70,	// (0x00078ebb) main_cset_text_pane_t4

0xdf7e,	// (0x00078ec9) main_cset_text_pane_t5

0xdf8c,	// (0x00078ed7) main_cset_text_pane_t6

0xdf9a,	// (0x00078ee5) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007a97d) main_cset_text_pane_t

0x95a8,	// (0x000744f3) main_cam4_burst_pane

0x95a8,	// (0x000744f3) main_cam5_pane

0x617e,	// (0x000710c9) bg_button_pane_cp019

0x6187,	// (0x000710d2) bg_button_pane_cp020

0xde02,	// (0x00078d4d) main_cset_slider_pane_g7_ParamLimits

0xde02,	// (0x00078d4d) main_cset_slider_pane_g7

0xde0e,	// (0x00078d59) main_cset_slider_pane_g8_ParamLimits

0xde0e,	// (0x00078d59) main_cset_slider_pane_g8

0x62de,	// (0x00071229) main_cset_slider_pane_g9_ParamLimits

0x62de,	// (0x00071229) main_cset_slider_pane_g9

0x62ea,	// (0x00071235) main_cset_slider_pane_g10_ParamLimits

0x62ea,	// (0x00071235) main_cset_slider_pane_g10

0x62f6,	// (0x00071241) main_cset_slider_pane_g11_ParamLimits

0x62f6,	// (0x00071241) main_cset_slider_pane_g11

0x6302,	// (0x0007124d) main_cset_slider_pane_g12_ParamLimits

0x6302,	// (0x0007124d) main_cset_slider_pane_g12

0x630e,	// (0x00071259) main_cset_slider_pane_g13_ParamLimits

0x630e,	// (0x00071259) main_cset_slider_pane_g13

0x631a,	// (0x00071265) main_cset_slider_pane_g14_ParamLimits

0x631a,	// (0x00071265) main_cset_slider_pane_g14

0x6326,	// (0x00071271) main_cset_slider_pane_g15_ParamLimits

0x6326,	// (0x00071271) main_cset_slider_pane_g15

0xde54,	// (0x00078d9f) main_cset_slider_pane_t14_ParamLimits

0xde54,	// (0x00078d9f) main_cset_slider_pane_t14

0xde8d,	// (0x00078dd8) main_cset_slider_pane_t15_ParamLimits

0xde8d,	// (0x00078dd8) main_cset_slider_pane_t15

0x69b5,	// (0x00071900) aid_cam4_burst_size_cell_ParamLimits

0x69b5,	// (0x00071900) aid_cam4_burst_size_cell

0x69d5,	// (0x00071920) grid_cam4_burst_pane_ParamLimits

0x69d5,	// (0x00071920) grid_cam4_burst_pane

0x6a0d,	// (0x00071958) linegrid_cam4_burst_pane_ParamLimits

0x6a0d,	// (0x00071958) linegrid_cam4_burst_pane

0xdfa8,	// (0x00078ef3) scroll_pane_cp30_ParamLimits

0xdfa8,	// (0x00078ef3) scroll_pane_cp30

0x6a31,	// (0x0007197c) cell_cam4_burst_pane_ParamLimits

0x6a31,	// (0x0007197c) cell_cam4_burst_pane

0xdfb4,	// (0x00078eff) linegrid_cam4_burst_pane_g1_ParamLimits

0xdfb4,	// (0x00078eff) linegrid_cam4_burst_pane_g1

0x6a7e,	// (0x000719c9) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a7e,	// (0x000719c9) linegrid_cam4_burst_pane_g2

0xdfc1,	// (0x00078f0c) linegrid_cam4_burst_pane_g3_ParamLimits

0xdfc1,	// (0x00078f0c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007a98c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007a98c) linegrid_cam4_burst_pane_g

0x6a8f,	// (0x000719da) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a8f,	// (0x000719da) linegrid_cam4_burst_pane_g3_copy1

0xdfce,	// (0x00078f19) linegrid_cam4_burst_pane_g4_ParamLimits

0xdfce,	// (0x00078f19) linegrid_cam4_burst_pane_g4

0x6aa9,	// (0x000719f4) linegrid_cam4_burst_pane_g5_ParamLimits

0x6aa9,	// (0x000719f4) linegrid_cam4_burst_pane_g5

0x6aba,	// (0x00071a05) linegrid_cam4_burst_pane_g6_ParamLimits

0x6aba,	// (0x00071a05) linegrid_cam4_burst_pane_g6

0xdfdb,	// (0x00078f26) linegrid_cam4_burst_pane_g7_ParamLimits

0xdfdb,	// (0x00078f26) linegrid_cam4_burst_pane_g7

0x6ad1,	// (0x00071a1c) cell_cam4_burst_pane_g1

0xdff4,	// (0x00078f3f) main_cam5_pane_t1_ParamLimits

0xdff4,	// (0x00078f3f) main_cam5_pane_t1

0xe006,	// (0x00078f51) main_cam5_pane_t2_ParamLimits

0xe006,	// (0x00078f51) main_cam5_pane_t2

0xe018,	// (0x00078f63) main_cam5_pane_t3_ParamLimits

0xe018,	// (0x00078f63) main_cam5_pane_t3

0xe02a,	// (0x00078f75) main_cam5_pane_t4_ParamLimits

0xe02a,	// (0x00078f75) main_cam5_pane_t4

0xe042,	// (0x00078f8d) main_cam5_pane_t5_ParamLimits

0xe042,	// (0x00078f8d) main_cam5_pane_t5

0xe056,	// (0x00078fa1) main_cam5_pane_t6_ParamLimits

0xe056,	// (0x00078fa1) main_cam5_pane_t6

0xe06a,	// (0x00078fb5) main_cam5_pane_t7_ParamLimits

0xe06a,	// (0x00078fb5) main_cam5_pane_t7

0xe07c,	// (0x00078fc7) main_cam5_pane_t8_ParamLimits

0xe07c,	// (0x00078fc7) main_cam5_pane_t8

0xe098,	// (0x00078fe3) main_cam5_pane_t9_ParamLimits

0xe098,	// (0x00078fe3) main_cam5_pane_t9

0xe0aa,	// (0x00078ff5) main_cam5_pane_t10_ParamLimits

0xe0aa,	// (0x00078ff5) main_cam5_pane_t10

0xe0bc,	// (0x00079007) main_cam5_pane_t11_ParamLimits

0xe0bc,	// (0x00079007) main_cam5_pane_t11

0xe0ce,	// (0x00079019) main_cam5_pane_t12_ParamLimits

0xe0ce,	// (0x00079019) main_cam5_pane_t12

0xe0e3,	// (0x0007902e) main_cam5_pane_t13_ParamLimits

0xe0e3,	// (0x0007902e) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007a998) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007a998) main_cam5_pane_t

0x0494,	// (0x0006b3df) popup_scut_keymap_window_ParamLimits

0x0494,	// (0x0006b3df) popup_scut_keymap_window

0x6ae4,	// (0x00071a2f) aid_size_cell_brow_shortcut

0xba44,	// (0x0007698f) bg_popup_window_pane_cp010

0x6af0,	// (0x00071a3b) grid_scut_pane

0x6afc,	// (0x00071a47) cell_scut_pane_ParamLimits

0x6afc,	// (0x00071a47) cell_scut_pane

0x6b13,	// (0x00071a5e) cell_scut_pane_g1

0xe100,	// (0x0007904b) cell_scut_pane_t1

0xe10f,	// (0x0007905a) cell_scut_pane_t2

0x6b1c,	// (0x00071a67) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007a9b3) cell_scut_pane_t

0x483c,	// (0x0006f787) main_mup3_pane_g8_ParamLimits

0x483c,	// (0x0006f787) main_mup3_pane_g8

0x5cc1,	// (0x00070c0c) area_vitu2_query_pane_ParamLimits

0x5cc1,	// (0x00070c0c) area_vitu2_query_pane

0x685d,	// (0x000717a8) input_focus_pane_cp08

0xe11e,	// (0x00079069) area_vitu2_query_pane_g1

0x6b2a,	// (0x00071a75) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007a9ba) area_vitu2_query_pane_g

0x6b3b,	// (0x00071a86) area_vitu2_query_pane_t1_ParamLimits

0x6b3b,	// (0x00071a86) area_vitu2_query_pane_t1

0x6b4f,	// (0x00071a9a) area_vitu2_query_pane_t2_ParamLimits

0x6b4f,	// (0x00071a9a) area_vitu2_query_pane_t2

0x6b63,	// (0x00071aae) area_vitu2_query_pane_t3_ParamLimits

0x6b63,	// (0x00071aae) area_vitu2_query_pane_t3

0x9d1c,	// (0x00074c67) area_vitu2_query_pane_t4_ParamLimits

0x9d1c,	// (0x00074c67) area_vitu2_query_pane_t4

0x9d44,	// (0x00074c8f) area_vitu2_query_pane_t5_ParamLimits

0x9d44,	// (0x00074c8f) area_vitu2_query_pane_t5

0x9d6c,	// (0x00074cb7) area_vitu2_query_pane_t6_ParamLimits

0x9d6c,	// (0x00074cb7) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007a9bf) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007a9bf) area_vitu2_query_pane_t

0x6b8b,	// (0x00071ad6) bg_button_pane_cp018

0x6b99,	// (0x00071ae4) bg_button_pane_cp021

0x6ba5,	// (0x00071af0) bg_button_pane_cp022

0x6bb4,	// (0x00071aff) input_focus_pane_cp09

0xb88d,	// (0x000767d8) aid_size_touch_mv_arrow_left

0xb8b6,	// (0x00076801) aid_size_touch_mv_arrow_right

0x633e,	// (0x00071289) main_cset_slider_pane_g16_ParamLimits

0x633e,	// (0x00071289) main_cset_slider_pane_g16

0x634a,	// (0x00071295) main_cset_slider_pane_g17_ParamLimits

0x634a,	// (0x00071295) main_cset_slider_pane_g17

0x6ad1,	// (0x00071a1c) cell_cam4_burst_pane_g1_ParamLimits

0x9522,	// (0x0007446d) compa_mode_pane

0x6524,	// (0x0007146f) popup_vtel_slider_window_g3_ParamLimits

0x6524,	// (0x0007146f) popup_vtel_slider_window_g3

0x653b,	// (0x00071486) popup_vtel_slider_window_g4_ParamLimits

0x653b,	// (0x00071486) popup_vtel_slider_window_g4

0x6552,	// (0x0007149d) popup_vtel_slider_window_t1_ParamLimits

0x6552,	// (0x0007149d) popup_vtel_slider_window_t1

0x95a8,	// (0x000744f3) main_cl_pane

0x9799,	// (0x000746e4) popup_imed_adjust2_window_ParamLimits

0xce4d,	// (0x00077d98) bg_tb_trans_pane_cp05_ParamLimits

0xd784,	// (0x000786cf) popup_imed_adjust2_window_g1_ParamLimits

0xd793,	// (0x000786de) popup_imed_adjust2_window_g2_ParamLimits

0xd793,	// (0x000786de) popup_imed_adjust2_window_g2

0xd79f,	// (0x000786ea) popup_imed_adjust2_window_g3_ParamLimits

0xd79f,	// (0x000786ea) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007a72a) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007a72a) popup_imed_adjust2_window_g

0xd7ab,	// (0x000786f6) popup_imed_adjust2_window_t1_ParamLimits

0xd7c3,	// (0x0007870e) slider_imed_adjust_pane_ParamLimits

0xd7d7,	// (0x00078722) slider_imed_adjust_pane_g1_ParamLimits

0xd7e7,	// (0x00078732) slider_imed_adjust_pane_g2_ParamLimits

0xd7f7,	// (0x00078742) slider_imed_adjust_pane_g3_ParamLimits

0xd808,	// (0x00078753) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007a731) slider_imed_adjust_pane_g_ParamLimits

0x5a4a,	// (0x00070995) aid_touch_area_cam4_ParamLimits

0x5a4a,	// (0x00070995) aid_touch_area_cam4

0x9b55,	// (0x00074aa0) battery_pane_cp01

0x5b19,	// (0x00070a64) main_camera4_pane_g6_ParamLimits

0x5b19,	// (0x00070a64) main_camera4_pane_g6

0x5b43,	// (0x00070a8e) main_camera4_pane_t2_ParamLimits

0x5b43,	// (0x00070a8e) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007a834) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007a834) main_camera4_pane_t

0x5b78,	// (0x00070ac3) aid_touch_area_vid4_ParamLimits

0x5b78,	// (0x00070ac3) aid_touch_area_vid4

0x5bcc,	// (0x00070b17) main_video4_pane_g5_ParamLimits

0x5bcc,	// (0x00070b17) main_video4_pane_g5

0x5bf1,	// (0x00070b3c) vid4_progress_pane_ParamLimits

0x5bf1,	// (0x00070b3c) vid4_progress_pane

0xde1a,	// (0x00078d65) main_cset_slider_pane_g18_ParamLimits

0xde1a,	// (0x00078d65) main_cset_slider_pane_g18

0xdfe8,	// (0x00078f33) cell_cam4_burst_pane_g2_ParamLimits

0xdfe8,	// (0x00078f33) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007a993) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007a993) cell_cam4_burst_pane_g

0xadb7,	// (0x00075d02) bg_cl_pane_ParamLimits

0xadb7,	// (0x00075d02) bg_cl_pane

0x6bc3,	// (0x00071b0e) cl_header_pane_ParamLimits

0x6bc3,	// (0x00071b0e) cl_header_pane

0x6bd7,	// (0x00071b22) cl_listscroll_pane_ParamLimits

0x6bd7,	// (0x00071b22) cl_listscroll_pane

0xe12a,	// (0x00079075) bg_cl_pane_g1

0xe132,	// (0x0007907d) bg_cl_pane_g2

0xe13a,	// (0x00079085) bg_cl_pane_g3

0xe142,	// (0x0007908d) bg_cl_pane_g4

0xe14a,	// (0x00079095) bg_cl_pane_g5

0xe152,	// (0x0007909d) bg_cl_pane_g6

0xe15a,	// (0x000790a5) bg_cl_pane_g7

0xe162,	// (0x000790ad) bg_cl_pane_g8

0xe16a,	// (0x000790b5) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007a9ce) bg_cl_pane_g

0x6be7,	// (0x00071b32) aid_height_cl_leading_ParamLimits

0x6be7,	// (0x00071b32) aid_height_cl_leading

0x6bf3,	// (0x00071b3e) aid_height_cl_text_ParamLimits

0x6bf3,	// (0x00071b3e) aid_height_cl_text

0xb26c,	// (0x000761b7) bg_cl_header_pane_ParamLimits

0xb26c,	// (0x000761b7) bg_cl_header_pane

0x6c12,	// (0x00071b5d) cl_header_pane_g1_ParamLimits

0x6c12,	// (0x00071b5d) cl_header_pane_g1

0x6c28,	// (0x00071b73) cl_header_pane_t1_ParamLimits

0x6c28,	// (0x00071b73) cl_header_pane_t1

0xe172,	// (0x000790bd) cl_list_pane

0xdded,	// (0x00078d38) hc_scroll_pane_cp01

0xb1ae,	// (0x000760f9) bg_cl_header_pane_g1

0xdcd3,	// (0x00078c1e) bg_cl_header_pane_g2

0xb1ce,	// (0x00076119) bg_cl_header_pane_g3

0xdce3,	// (0x00078c2e) bg_cl_header_pane_g4

0xdcdb,	// (0x00078c26) bg_cl_header_pane_g5

0xdef7,	// (0x00078e42) bg_cl_header_pane_g6

0xdcfb,	// (0x00078c46) bg_cl_header_pane_g7

0xdd03,	// (0x00078c4e) bg_cl_header_pane_g8

0xdcf3,	// (0x00078c3e) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007a9e1) bg_cl_header_pane_g

0x6c41,	// (0x00071b8c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c41,	// (0x00071b8c) hc_cl_list_double_graphic_heading_pane

0x6c52,	// (0x00071b9d) hc_cl_list_single_graphic_pane_ParamLimits

0x6c52,	// (0x00071b9d) hc_cl_list_single_graphic_pane

0x6c68,	// (0x00071bb3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c68,	// (0x00071bb3) hc_cl_list_single_graphic_pane_g1

0x6c74,	// (0x00071bbf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c74,	// (0x00071bbf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007a9f4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007a9f4) hc_cl_list_single_graphic_pane_g

0x6c88,	// (0x00071bd3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c88,	// (0x00071bd3) hc_cl_list_single_graphic_pane_t1

0x6c68,	// (0x00071bb3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c68,	// (0x00071bb3) hc_cl_list_double_graphic_heading_pane_g1

0x6c9d,	// (0x00071be8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c9d,	// (0x00071be8) hc_cl_list_double_graphic_heading_pane_g2

0x6cb1,	// (0x00071bfc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6cb1,	// (0x00071bfc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007a9f9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007a9f9) hc_cl_list_double_graphic_heading_pane_g

0x6cc5,	// (0x00071c10) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6cc5,	// (0x00071c10) hc_cl_list_double_graphic_heading_pane_t1

0x6cda,	// (0x00071c25) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6cda,	// (0x00071c25) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007aa00) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007aa00) hc_cl_list_double_graphic_heading_pane_t

0x6cef,	// (0x00071c3a) vid4_progress_pane_g1

0x6d01,	// (0x00071c4c) vid4_progress_pane_g2

0xb4f8,	// (0x00076443) vid4_progress_pane_g3

0x9dc0,	// (0x00074d0b) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007aa05) vid4_progress_pane_g

0x9dde,	// (0x00074d29) vid4_progress_pane_t1

0x9df3,	// (0x00074d3e) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007aa10) vid4_progress_pane_t

0x9e1e,	// (0x00074d69) wait_bar_pane_cp07

0xd048,	// (0x00077f93) blid_firmament_pane_ParamLimits

0xd08b,	// (0x00077fd6) popup_blid_sat_info2_window_g1

0xd0af,	// (0x00077ffa) popup_blid_sat_info2_window_t3

0xd0bd,	// (0x00078008) popup_blid_sat_info2_window_t4

0xd0cb,	// (0x00078016) popup_blid_sat_info2_window_t5

0xd0d9,	// (0x00078024) popup_blid_sat_info2_window_t6

0xd0e9,	// (0x00078034) popup_blid_sat_info2_window_t7

0xd0f7,	// (0x00078042) popup_blid_sat_info2_window_t8

0xd105,	// (0x00078050) popup_blid_sat_info2_window_t9

0xd113,	// (0x0007805e) popup_blid_sat_info2_window_t10

0xd1d5,	// (0x00078120) aid_firma_cardinal_ParamLimits

0xd1e9,	// (0x00078134) blid_firmament_pane_t1_ParamLimits

0xd200,	// (0x0007814b) blid_firmament_pane_t2_ParamLimits

0xd217,	// (0x00078162) blid_firmament_pane_t3_ParamLimits

0xd22e,	// (0x00078179) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0007a623) blid_firmament_pane_t_ParamLimits

0xd245,	// (0x00078190) blid_sat_info_pane_ParamLimits

0x959a,	// (0x000744e5) main_cam_set_pane_ParamLimits

0x5102,	// (0x0007004d) aid_size_cell_colour_35_ParamLimits

0x5122,	// (0x0007006d) aid_size_cell_colour_112_ParamLimits

0x5142,	// (0x0007008d) aid_size_cell_effect_ParamLimits

0xce4d,	// (0x00077d98) bg_tb_trans_pane_cp02_ParamLimits

0xb47f,	// (0x000763ca) heading_imed_pane_ParamLimits

0x5162,	// (0x000700ad) listscroll_imed_pane_ParamLimits

0xc467,	// (0x000773b2) popup_call2_audio_first_window_g5_ParamLimits

0xc467,	// (0x000773b2) popup_call2_audio_first_window_g5

0x56f5,	// (0x00070640) aid_size_touch_image3_arrow_left_ParamLimits

0x56f5,	// (0x00070640) aid_size_touch_image3_arrow_left

0x5721,	// (0x0007066c) aid_size_touch_image3_arrow_right_ParamLimits

0x5721,	// (0x0007066c) aid_size_touch_image3_arrow_right

0x9e09,	// (0x00074d54) vid4_progress_pane_t3

0x5475,	// (0x000703c0) main_hwr_training_symbol_option_pane_ParamLimits

0x5475,	// (0x000703c0) main_hwr_training_symbol_option_pane

0xda71,	// (0x000789bc) popup_hwr_training_preview_window_ParamLimits

0xda71,	// (0x000789bc) popup_hwr_training_preview_window

0x5495,	// (0x000703e0) hwr_training_navi_pane_g5_ParamLimits

0x5495,	// (0x000703e0) hwr_training_navi_pane_g5

0xdcc1,	// (0x00078c0c) popup_char_count_window

0x959a,	// (0x000744e5) bg_popup_sub_pane_cp20_ParamLimits

0x6678,	// (0x000715c3) list_vitu2_match_list_pane_ParamLimits

0x6687,	// (0x000715d2) vitu2_page_scroll_pane_ParamLimits

0x6687,	// (0x000715d2) vitu2_page_scroll_pane

0xe17b,	// (0x000790c6) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe17b,	// (0x000790c6) list_single_hwr_training_symbol_option_pane

0xe18e,	// (0x000790d9) list_single_hwr_training_symbol_option_pane_g1

0xe196,	// (0x000790e1) list_single_hwr_training_symbol_option_pane_t1

0xe1a4,	// (0x000790ef) bg_button_pane_cp023

0xe1ad,	// (0x000790f8) bg_button_pane_cp024

0x6d4b,	// (0x00071c96) vitu2_page_scroll_pane_g1

0x6d53,	// (0x00071c9e) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007aa17) vitu2_page_scroll_pane_g

0x6d5b,	// (0x00071ca6) vitu2_page_scroll_pane_t1

0xe1e0,	// (0x0007912b) popup_char_count_window_g1

0xe1e9,	// (0x00079134) popup_char_count_window_g2

0xe1f2,	// (0x0007913d) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007aa1c) popup_char_count_window_g

0xe1fb,	// (0x00079146) popup_char_count_window_t1

0x95a8,	// (0x000744f3) main_vded2_pane

0xd770,	// (0x000786bb) aid_size_cell_imed_line

0xd77a,	// (0x000786c5) grid_imed_line_width_pane

0x9c1b,	// (0x00074b66) vid4_indicators_pane_g4

0xe209,	// (0x00079154) cell_imed_line_width_pane_ParamLimits

0xe209,	// (0x00079154) cell_imed_line_width_pane

0xe21d,	// (0x00079168) cell_imed_line_width_pane_g1

0xda86,	// (0x000789d1) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007aa23) cell_imed_line_width_pane_g

0x6d6a,	// (0x00071cb5) main_vded2_pane_g1_ParamLimits

0x6d6a,	// (0x00071cb5) main_vded2_pane_g1

0x6d80,	// (0x00071ccb) main_vded2_pane_g2_ParamLimits

0x6d80,	// (0x00071ccb) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007aa28) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007aa28) main_vded2_pane_g

0x6d92,	// (0x00071cdd) vded2_slider_pane_ParamLimits

0x6d92,	// (0x00071cdd) vded2_slider_pane

0x6da2,	// (0x00071ced) aid_size_touch_vded2_end

0x6dac,	// (0x00071cf7) aid_size_touch_vded2_playhead

0xe226,	// (0x00079171) aid_size_touch_vded2_start

0xe22e,	// (0x00079179) vded2_slider_bg_pane

0xe237,	// (0x00079182) vded2_slider_pane_g1

0xe240,	// (0x0007918b) vded2_slider_pane_g2

0x6db6,	// (0x00071d01) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007aa2d) vded2_slider_pane_g

0xe248,	// (0x00079193) vded2_slider_bg_pane_g1

0xe251,	// (0x0007919c) vded2_slider_bg_pane_g2

0xe25a,	// (0x000791a5) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007aa34) vded2_slider_bg_pane_g

0x2e7d,	// (0x0006ddc8) aid_postcard_touch_down_pane_ParamLimits

0x2e7d,	// (0x0006ddc8) aid_postcard_touch_down_pane

0x2e93,	// (0x0006ddde) aid_postcard_touch_up_pane_ParamLimits

0x2e93,	// (0x0006ddde) aid_postcard_touch_up_pane

0x95a8,	// (0x000744f3) main_blid2_pane

0x977f,	// (0x000746ca) popup_blid2_search_window

0x9522,	// (0x0007446d) blid2_gps_pane

0x9522,	// (0x0007446d) blid2_navig_pane

0x9522,	// (0x0007446d) blid2_search_pane

0x9522,	// (0x0007446d) blid2_tripm_pane

0x6dc1,	// (0x00071d0c) blid2_search_pane_g1_ParamLimits

0x6dc1,	// (0x00071d0c) blid2_search_pane_g1

0x6ddb,	// (0x00071d26) blid2_search_pane_t1_ParamLimits

0x6ddb,	// (0x00071d26) blid2_search_pane_t1

0x6ded,	// (0x00071d38) aid_size_cell_blid2_gps_ParamLimits

0x6ded,	// (0x00071d38) aid_size_cell_blid2_gps

0x6e05,	// (0x00071d50) blid2_gps_pane_g1_ParamLimits

0x6e05,	// (0x00071d50) blid2_gps_pane_g1

0x6e19,	// (0x00071d64) grid_blid2_satellite_pane_ParamLimits

0x6e19,	// (0x00071d64) grid_blid2_satellite_pane

0x6e33,	// (0x00071d7e) blid2_navig_pane_g1_ParamLimits

0x6e33,	// (0x00071d7e) blid2_navig_pane_g1

0x6e3f,	// (0x00071d8a) blid2_navig_pane_t1_ParamLimits

0x6e3f,	// (0x00071d8a) blid2_navig_pane_t1

0x6e5a,	// (0x00071da5) blid2_navig_pane_t2_ParamLimits

0x6e5a,	// (0x00071da5) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007aa3b) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007aa3b) blid2_navig_pane_t

0x6e75,	// (0x00071dc0) blid2_navig_ring_pane_ParamLimits

0x6e75,	// (0x00071dc0) blid2_navig_ring_pane

0x6e8e,	// (0x00071dd9) blid2_speed_pane_ParamLimits

0x6e8e,	// (0x00071dd9) blid2_speed_pane

0x6e9a,	// (0x00071de5) blid2_tripm_pane_g1_ParamLimits

0x6e9a,	// (0x00071de5) blid2_tripm_pane_g1

0x6eb3,	// (0x00071dfe) blid2_tripm_pane_g2_ParamLimits

0x6eb3,	// (0x00071dfe) blid2_tripm_pane_g2

0x6ec7,	// (0x00071e12) blid2_tripm_pane_g3_ParamLimits

0x6ec7,	// (0x00071e12) blid2_tripm_pane_g3

0x6edb,	// (0x00071e26) blid2_tripm_pane_g4_ParamLimits

0x6edb,	// (0x00071e26) blid2_tripm_pane_g4

0x6eef,	// (0x00071e3a) blid2_tripm_pane_g5_ParamLimits

0x6eef,	// (0x00071e3a) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007aa40) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007aa40) blid2_tripm_pane_g

0x6f15,	// (0x00071e60) blid2_tripm_pane_t1_ParamLimits

0x6f15,	// (0x00071e60) blid2_tripm_pane_t1

0x6f30,	// (0x00071e7b) blid2_tripm_pane_t2_ParamLimits

0x6f30,	// (0x00071e7b) blid2_tripm_pane_t2

0x6f49,	// (0x00071e94) blid2_tripm_pane_t3_ParamLimits

0x6f49,	// (0x00071e94) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007aa4d) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007aa4d) blid2_tripm_pane_t

0x6f90,	// (0x00071edb) cell_blid2_satellite_pane_ParamLimits

0x6f90,	// (0x00071edb) cell_blid2_satellite_pane

0x6fae,	// (0x00071ef9) cell_blid2_satellite_pane_g1

0xe263,	// (0x000791ae) cell_blid2_satellite_pane_t1

0xd255,	// (0x000781a0) blid2_speed_pane_g1

0xe271,	// (0x000791bc) blid2_speed_pane_t1

0xe27f,	// (0x000791ca) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007aa56) blid2_speed_pane_t

0xd255,	// (0x000781a0) blid2_navig_ring_pane_g1

0x6fb7,	// (0x00071f02) blid2_navig_ring_pane_g2

0x6fbf,	// (0x00071f0a) blid2_navig_ring_pane_g3

0x6fc7,	// (0x00071f12) blid2_navig_ring_pane_g4

0x6fcf,	// (0x00071f1a) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007aa5b) blid2_navig_ring_pane_g

0x9522,	// (0x0007446d) bg_popup_window_pane_cp011

0xe28d,	// (0x000791d8) popup_blid2_search_window_g1

0xe295,	// (0x000791e0) popup_blid2_search_window_t1

0xe2a3,	// (0x000791ee) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007aa66) popup_blid2_search_window_t

0xb0bd,	// (0x00076008) main_browser_pane_g1

0xadb7,	// (0x00075d02) main_browser_pane_ParamLimits

0x959a,	// (0x000744e5) bg_button_pane_cp011_ParamLimits

0x5f1a,	// (0x00070e65) cell_vitu2_function_pane_g1_ParamLimits

0xce4d,	// (0x00077d98) bg_popup_sub_pane_cp22_ParamLimits

0x685d,	// (0x000717a8) input_focus_pane_cp08_ParamLimits

0x6874,	// (0x000717bf) popup_vitu2_query_button_pane_ParamLimits

0x6874,	// (0x000717bf) popup_vitu2_query_button_pane

0x6885,	// (0x000717d0) popup_vitu2_query_input_button_pane

0xdf32,	// (0x00078e7d) popup_vitu2_query_window_g1_ParamLimits

0x688f,	// (0x000717da) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007a967) popup_vitu2_query_window_g_ParamLimits

0x9522,	// (0x0007446d) bg_button_pane_cp026

0x6fd7,	// (0x00071f22) popup_vitu2_query_input_button_pane_g1

0x9522,	// (0x0007446d) bg_button_pane_cp025

0xe2b1,	// (0x000791fc) popup_vitu2_query_button_pane_t1

0x4525,	// (0x0006f470) main_mp3_pane_t6

0x4533,	// (0x0006f47e) popup_slider_window_cp01

0x9b7f,	// (0x00074aca) cam4_battery_pane

0x9bd8,	// (0x00074b23) cam4_battery_pane_cp02

0x9db8,	// (0x00074d03) cam4_battery_pane_cp01

0x9db8,	// (0x00074d03) cam4_battery_pane_cp03

0xdb77,	// (0x00078ac2) cam4_battery_pane_g1

0xd255,	// (0x000781a0) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007aa6b) cam4_battery_pane_g

0xd121,	// (0x0007806c) popup_blid_sat_info2_window_t11

0xb88d,	// (0x000767d8) aid_size_touch_mv_arrow_left_ParamLimits

0xb8b6,	// (0x00076801) aid_size_touch_mv_arrow_right_ParamLimits

0xb914,	// (0x0007685f) navi_pane_g1_ParamLimits

0xb920,	// (0x0007686b) navi_pane_g2_ParamLimits

0xb94e,	// (0x00076899) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0007a335) navi_pane_g_ParamLimits

0x28da,	// (0x0006d825) navi_pane_mv_t1_ParamLimits

0x516e,	// (0x000700b9) grid_imed_effect_pane_ParamLimits

0x14e4,	// (0x0006c42f) aid_placing_vt_slider_lsc

0xb00c,	// (0x00075f57) aid_placing_vt_slider_prt

0xb26c,	// (0x000761b7) bg_tb_trans_pane_cp01_ParamLimits

0xd3e1,	// (0x0007832c) popup_image_details_window_g1_ParamLimits

0xd3f4,	// (0x0007833f) popup_image_details_window_g2_ParamLimits

0xd409,	// (0x00078354) popup_image_details_window_g3_ParamLimits

0xd409,	// (0x00078354) popup_image_details_window_g3

0xf71d,	// (0x0007a668) popup_image_details_window_g_ParamLimits

0xd41d,	// (0x00078368) popup_image_details_window_t1_ParamLimits

0xd42f,	// (0x0007837a) popup_image_details_window_t2_ParamLimits

0xd448,	// (0x00078393) popup_image_details_window_t3_ParamLimits

0xd45c,	// (0x000783a7) popup_image_details_window_t4_ParamLimits

0xd477,	// (0x000783c2) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0007a66f) popup_image_details_window_t_ParamLimits

0x6bff,	// (0x00071b4a) cl_header_name_pane_ParamLimits

0x6bff,	// (0x00071b4a) cl_header_name_pane

0x6fdf,	// (0x00071f2a) cl_header_name_pane_t1_ParamLimits

0x6fdf,	// (0x00071f2a) cl_header_name_pane_t1

0x7000,	// (0x00071f4b) cl_header_name_pane_t2_ParamLimits

0x7000,	// (0x00071f4b) cl_header_name_pane_t2

0x7042,	// (0x00071f8d) cl_header_name_pane_t3_ParamLimits

0x7042,	// (0x00071f8d) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007aa70) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007aa70) cl_header_name_pane_t

0xb9dd,	// (0x00076928) navi_pane_mv_g2_ParamLimits

0xdc9b,	// (0x00078be6) field_vitu2_entry_pane_g1_ParamLimits

0xdca7,	// (0x00078bf2) field_vitu2_entry_pane_g2_ParamLimits

0xdcb3,	// (0x00078bfe) field_vitu2_entry_pane_g3_ParamLimits

0xdcb3,	// (0x00078bfe) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007a866) field_vitu2_entry_pane_g_ParamLimits

0x5e91,	// (0x00070ddc) cell_vitu2_itu_pane_g1_ParamLimits

0x5ea1,	// (0x00070dec) cell_vitu2_itu_pane_g2_ParamLimits

0x5ea1,	// (0x00070dec) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007a872) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007a872) cell_vitu2_itu_pane_g

0x959a,	// (0x000744e5) bg_vkb2_func_pane_cp05_ParamLimits

0x959a,	// (0x000744e5) bg_vkb2_func_pane_cp05

0x959a,	// (0x000744e5) bg_vkb2_func_pane_cp03

0x959a,	// (0x000744e5) bg_vkb2_func_pane_cp04

0x959a,	// (0x000744e5) bg_vkb2_func_pane_cp10_ParamLimits

0x959a,	// (0x000744e5) bg_vkb2_func_pane_cp10

0x6ba5,	// (0x00071af0) bg_vkb2_func_pane_cp08

0x6b8b,	// (0x00071ad6) bg_vkb2_func_pane_cp06

0x6b99,	// (0x00071ae4) bg_vkb2_func_pane_cp07

0xe1b6,	// (0x00079101) bg_vkb2_func_pane_cp11_ParamLimits

0xe1b6,	// (0x00079101) bg_vkb2_func_pane_cp11

0xe1cb,	// (0x00079116) bg_vkb2_func_pane_cp12_ParamLimits

0xe1cb,	// (0x00079116) bg_vkb2_func_pane_cp12

0x9522,	// (0x0007446d) bg_vkb2_func_pane_cp09

0xdcd3,	// (0x00078c1e) bg_vkb2_func_pane_g1

0xb1ce,	// (0x00076119) bg_vkb2_func_pane_g2

0xdcdb,	// (0x00078c26) bg_vkb2_func_pane_g3

0xdce3,	// (0x00078c2e) bg_vkb2_func_pane_g4

0xdef7,	// (0x00078e42) bg_vkb2_func_pane_g5

0xdcfb,	// (0x00078c46) bg_vkb2_func_pane_g6

0xdd03,	// (0x00078c4e) bg_vkb2_func_pane_g7

0xdcf3,	// (0x00078c3e) bg_vkb2_func_pane_g8

0xb1ae,	// (0x000760f9) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007aa77) bg_vkb2_func_pane_g

0x6f03,	// (0x00071e4e) blid2_tripm_pane_g6_ParamLimits

0x6f03,	// (0x00071e4e) blid2_tripm_pane_g6

0xdb31,	// (0x00078a7c) mp4_progress_pane_g1

0x6f7c,	// (0x00071ec7) blid2_tripm_values_pane_ParamLimits

0x6f7c,	// (0x00071ec7) blid2_tripm_values_pane

0x7073,	// (0x00071fbe) blid2_tripm_values_pane_t1

0x7081,	// (0x00071fcc) blid2_tripm_values_pane_t2

0x708f,	// (0x00071fda) blid2_tripm_values_pane_t3

0x709d,	// (0x00071fe8) blid2_tripm_values_pane_t4

0x70ab,	// (0x00071ff6) blid2_tripm_values_pane_t5

0x70b9,	// (0x00072004) blid2_tripm_values_pane_t6

0x70c7,	// (0x00072012) blid2_tripm_values_pane_t7

0x70d5,	// (0x00072020) blid2_tripm_values_pane_t8

0x70e3,	// (0x0007202e) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007aa8a) blid2_tripm_values_pane_t

0x1526,	// (0x0006c471) call_video_pane_t1_ParamLimits

0x1544,	// (0x0006c48f) call_video_pane_t2_ParamLimits

0xf273,	// (0x0007a1be) call_video_pane_t_ParamLimits

0x2db8,	// (0x0006dd03) msg_header_pane_g1_ParamLimits

0xbbc4,	// (0x00076b0f) msg_header_pane_g2_ParamLimits

0xbbc4,	// (0x00076b0f) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0007a3d8) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0007a3d8) msg_header_pane_g

0xadb7,	// (0x00075d02) main_clock2_pane_ParamLimits

0x4e6d,	// (0x0006fdb8) grid_clock2_toolbar_pane_ParamLimits

0x4e6d,	// (0x0006fdb8) grid_clock2_toolbar_pane

0x4e6d,	// (0x0006fdb8) listscroll_clock2_pane_ParamLimits

0x4e6d,	// (0x0006fdb8) listscroll_clock2_pane

0x4f62,	// (0x0006fead) main_clock2_pane_t3_ParamLimits

0x4f62,	// (0x0006fead) main_clock2_pane_t3

0x4f86,	// (0x0006fed1) main_clock2_pane_t4_ParamLimits

0x4f86,	// (0x0006fed1) main_clock2_pane_t4

0xe2bf,	// (0x0007920a) cell_clock2_toolbar_pane

0xe2c7,	// (0x00079212) cell_clock2_toolbar_pane_cp01

0xe2c7,	// (0x00079212) cell_clock2_toolbar_pane_cp02

0xe2cf,	// (0x0007921a) cell_clock2_toolbar_pane_cp03

0xe2d7,	// (0x00079222) list_clock2_pane

0xb803,	// (0x0007674e) scroll_pane_cp10

0xe2df,	// (0x0007922a) list_single_clock2_pane_ParamLimits

0xe2df,	// (0x0007922a) list_single_clock2_pane

0xba44,	// (0x0007698f) list_highlight_pane_cp08

0xe2ec,	// (0x00079237) list_single_clock2_pane_t1

0xe2fa,	// (0x00079245) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007aa9d) list_single_clock2_pane_t

0x9522,	// (0x0007446d) bg_button_pane_cp10

0xe308,	// (0x00079253) cell_clock2_toolbar_pane_g1

0x2e09,	// (0x0006dd54) aid_main_viewer_pane_g1_ParamLimits

0x2e09,	// (0x0006dd54) aid_main_viewer_pane_g1

0x2e17,	// (0x0006dd62) aid_main_viewer_pane_g2_ParamLimits

0x2e17,	// (0x0006dd62) aid_main_viewer_pane_g2

0x2e25,	// (0x0006dd70) aid_main_viewer_pane_g3_ParamLimits

0x2e25,	// (0x0006dd70) aid_main_viewer_pane_g3

0x2e34,	// (0x0006dd7f) aid_main_viewer_pane_g4_ParamLimits

0x2e34,	// (0x0006dd7f) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0007a3e9) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0007a3e9) aid_main_viewer_pane_g

0x373a,	// (0x0006e685) main_calc_pane_ParamLimits

0x3760,	// (0x0006e6ab) main_dialer2_pane_ParamLimits

0x95a8,	// (0x000744f3) main_cam6_pane

0x95a8,	// (0x000744f3) main_vid6_pane

0x4e79,	// (0x0006fdc4) listscroll_gen_pane_cp06_ParamLimits

0x4e79,	// (0x0006fdc4) listscroll_gen_pane_cp06

0x4fa9,	// (0x0006fef4) main_clock2_pane_t5_ParamLimits

0x4fa9,	// (0x0006fef4) main_clock2_pane_t5

0x5003,	// (0x0006ff4e) aid_call2_pane_cp10_ParamLimits

0x5015,	// (0x0006ff60) aid_call_pane_cp10_ParamLimits

0xb881,	// (0x000767cc) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb881,	// (0x000767cc) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5027,	// (0x0006ff72) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5027,	// (0x0006ff72) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb881,	// (0x000767cc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007a71f) popup_clock_analogue_window_cp10_g_ParamLimits

0x5039,	// (0x0006ff84) popup_clock_analogue_window_cp10_t1_ParamLimits

0x56a2,	// (0x000705ed) cell_dialer2_keypad_pane_g2_ParamLimits

0x56a2,	// (0x000705ed) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007a805) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007a805) cell_dialer2_keypad_pane_g

0x56be,	// (0x00070609) cell_dialer2_keypad_pane_t1

0x6231,	// (0x0007117c) main_cset_text2_pane_ParamLimits

0x6231,	// (0x0007117c) main_cset_text2_pane

0xe11e,	// (0x00079069) area_vitu2_query_pane_g1_ParamLimits

0x6b2a,	// (0x00071a75) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007a9ba) area_vitu2_query_pane_g_ParamLimits

0x9d94,	// (0x00074cdf) area_vitu2_query_pane_t7_ParamLimits

0x9d94,	// (0x00074cdf) area_vitu2_query_pane_t7

0x6b8b,	// (0x00071ad6) bg_button_pane_cp018_ParamLimits

0x6b99,	// (0x00071ae4) bg_button_pane_cp021_ParamLimits

0x6ba5,	// (0x00071af0) bg_button_pane_cp022_ParamLimits

0x6ba5,	// (0x00071af0) bg_vkb2_func_pane_cp08_ParamLimits

0x6b8b,	// (0x00071ad6) bg_vkb2_func_pane_cp06_ParamLimits

0x6b99,	// (0x00071ae4) bg_vkb2_func_pane_cp07_ParamLimits

0x6bb4,	// (0x00071aff) input_focus_pane_cp09_ParamLimits

0x9e52,	// (0x00074d9d) cam6_autofocus_pane_ParamLimits

0x9e52,	// (0x00074d9d) cam6_autofocus_pane

0x70f1,	// (0x0007203c) cam6_image_uncrop_pane_ParamLimits

0x70f1,	// (0x0007203c) cam6_image_uncrop_pane

0x7100,	// (0x0007204b) cam6_indi_pane_ParamLimits

0x7100,	// (0x0007204b) cam6_indi_pane

0x7116,	// (0x00072061) cam6_mode_pane_ParamLimits

0x7116,	// (0x00072061) cam6_mode_pane

0x7128,	// (0x00072073) cam6_timer_pane_ParamLimits

0x7128,	// (0x00072073) cam6_timer_pane

0x7134,	// (0x0007207f) cam6_zoom_pane_ParamLimits

0x7134,	// (0x0007207f) cam6_zoom_pane

0x7140,	// (0x0007208b) cam6_mode_pane_g1_ParamLimits

0x7140,	// (0x0007208b) cam6_mode_pane_g1

0x7150,	// (0x0007209b) cam6_mode_pane_g2_ParamLimits

0x7150,	// (0x0007209b) cam6_mode_pane_g2

0x7160,	// (0x000720ab) cam6_mode_pane_g3_ParamLimits

0x7160,	// (0x000720ab) cam6_mode_pane_g3

0x7170,	// (0x000720bb) cam6_mode_pane_g4_ParamLimits

0x7170,	// (0x000720bb) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007aaa2) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007aaa2) cam6_mode_pane_g

0xe310,	// (0x0007925b) bg_tb_trans_pane_cp08_ParamLimits

0xe310,	// (0x0007925b) bg_tb_trans_pane_cp08

0xe31e,	// (0x00079269) cam6_battery_pane_ParamLimits

0xe31e,	// (0x00079269) cam6_battery_pane

0xe334,	// (0x0007927f) cam6_indi_pane_g1_ParamLimits

0xe334,	// (0x0007927f) cam6_indi_pane_g1

0xe346,	// (0x00079291) cam6_indi_pane_g2_ParamLimits

0xe346,	// (0x00079291) cam6_indi_pane_g2

0xe358,	// (0x000792a3) cam6_indi_pane_g3_ParamLimits

0xe358,	// (0x000792a3) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007aaab) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007aaab) cam6_indi_pane_g

0xe36a,	// (0x000792b5) cam6_indi_pane_t1_ParamLimits

0xe36a,	// (0x000792b5) cam6_indi_pane_t1

0x7180,	// (0x000720cb) cam6_autofocus_pane_g1

0x7188,	// (0x000720d3) cam6_autofocus_pane_g2

0x7190,	// (0x000720db) cam6_autofocus_pane_g3

0x7198,	// (0x000720e3) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007aab2) cam6_autofocus_pane_g

0xe390,	// (0x000792db) cam6_timer_pane_g1

0xe398,	// (0x000792e3) cam6_timer_pane_t1

0xe3a6,	// (0x000792f1) cam6_zoom_cont_pane

0xe3ae,	// (0x000792f9) cam6_zoom_pane_g1

0xe3b6,	// (0x00079301) cam6_zoom_pane_g2

0x71a0,	// (0x000720eb) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007aabb) cam6_zoom_pane_g

0xd255,	// (0x000781a0) cam6_battery_pane_g1

0xd255,	// (0x000781a0) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0007a62c) cam6_battery_pane_g

0xe3be,	// (0x00079309) cam6_zoom_cont_pane_g1

0xe3c7,	// (0x00079312) cam6_zoom_cont_pane_g2

0xe3d0,	// (0x0007931b) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007aac2) cam6_zoom_cont_pane_g

0x71bd,	// (0x00072108) cam6_mode_pane_cp_ParamLimits

0x71bd,	// (0x00072108) cam6_mode_pane_cp

0x71cf,	// (0x0007211a) cam6_zoom_pane_cp_ParamLimits

0x71cf,	// (0x0007211a) cam6_zoom_pane_cp

0x71db,	// (0x00072126) vid6_image_uncrop_cif_pane_ParamLimits

0x71db,	// (0x00072126) vid6_image_uncrop_cif_pane

0x71eb,	// (0x00072136) vid6_image_uncrop_nhd_pane_ParamLimits

0x71eb,	// (0x00072136) vid6_image_uncrop_nhd_pane

0x71fa,	// (0x00072145) vid6_image_uncrop_vga_pane_ParamLimits

0x71fa,	// (0x00072145) vid6_image_uncrop_vga_pane

0x7209,	// (0x00072154) vid6_image_uncrop_wvga_pane_ParamLimits

0x7209,	// (0x00072154) vid6_image_uncrop_wvga_pane

0x7218,	// (0x00072163) vid6_indi_pane_ParamLimits

0x7218,	// (0x00072163) vid6_indi_pane

0xe310,	// (0x0007925b) bg_tb_trans_pane_cp09_ParamLimits

0xe310,	// (0x0007925b) bg_tb_trans_pane_cp09

0xe3e8,	// (0x00079333) cam6_battery_pane_cp_ParamLimits

0xe3e8,	// (0x00079333) cam6_battery_pane_cp

0xe3f4,	// (0x0007933f) vid6_indi_pane_g1_ParamLimits

0xe3f4,	// (0x0007933f) vid6_indi_pane_g1

0xe406,	// (0x00079351) vid6_indi_pane_g2_ParamLimits

0xe406,	// (0x00079351) vid6_indi_pane_g2

0xe418,	// (0x00079363) vid6_indi_pane_g3_ParamLimits

0xe418,	// (0x00079363) vid6_indi_pane_g3

0xe42d,	// (0x00079378) vid6_indi_pane_g4_ParamLimits

0xe42d,	// (0x00079378) vid6_indi_pane_g4

0xe442,	// (0x0007938d) vid6_indi_pane_g5_ParamLimits

0xe442,	// (0x0007938d) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007aac9) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007aac9) vid6_indi_pane_g

0xe489,	// (0x000793d4) vid6_indi_pane_t1_ParamLimits

0xe489,	// (0x000793d4) vid6_indi_pane_t1

0xe49f,	// (0x000793ea) vid6_indi_pane_t2_ParamLimits

0xe49f,	// (0x000793ea) vid6_indi_pane_t2

0xe4c7,	// (0x00079412) vid6_indi_pane_t3_ParamLimits

0xe4c7,	// (0x00079412) vid6_indi_pane_t3

0xe4ef,	// (0x0007943a) vid6_indi_pane_t4_ParamLimits

0xe4ef,	// (0x0007943a) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007aad4) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007aad4) vid6_indi_pane_t

0xe513,	// (0x0007945e) wait_bar_pane_cp08

0x7230,	// (0x0007217b) main_cset_text2_pane_t1_ParamLimits

0x7230,	// (0x0007217b) main_cset_text2_pane_t1

0x71a8,	// (0x000720f3) listscroll_gen_pane_cp06_t1_ParamLimits

0x71a8,	// (0x000720f3) listscroll_gen_pane_cp06_t1

0x95a8,	// (0x000744f3) main_cam6_set_pane

0x9b71,	// (0x00074abc) bg_tb_trans_pane_cp06_ParamLimits

0x9b87,	// (0x00074ad2) cam4_indicators_pane_g1_ParamLimits

0x9b98,	// (0x00074ae3) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007a842) cam4_indicators_pane_g_ParamLimits

0x9bb6,	// (0x00074b01) cam4_indicators_pane_t1_ParamLimits

0x959a,	// (0x000744e5) bg_tb_trans_pane_cp07_ParamLimits

0x9be2,	// (0x00074b2d) vid4_indicators_pane_g1_ParamLimits

0x9bf6,	// (0x00074b41) vid4_indicators_pane_g2_ParamLimits

0x9c0a,	// (0x00074b55) vid4_indicators_pane_g3_ParamLimits

0x9c1b,	// (0x00074b66) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007a854) vid4_indicators_pane_g_ParamLimits

0x9c39,	// (0x00074b84) vid4_indicators_pane_t1_ParamLimits

0x6cef,	// (0x00071c3a) vid4_progress_pane_g1_ParamLimits

0x6d01,	// (0x00071c4c) vid4_progress_pane_g2_ParamLimits

0xb4f8,	// (0x00076443) vid4_progress_pane_g3_ParamLimits

0x9dc0,	// (0x00074d0b) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007aa05) vid4_progress_pane_g_ParamLimits

0x9dde,	// (0x00074d29) vid4_progress_pane_t1_ParamLimits

0x9df3,	// (0x00074d3e) vid4_progress_pane_t2_ParamLimits

0x9e09,	// (0x00074d54) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007aa10) vid4_progress_pane_t_ParamLimits

0x9e1e,	// (0x00074d69) wait_bar_pane_cp07_ParamLimits

0x724d,	// (0x00072198) main_cam6_set_pane_g2_ParamLimits

0x724d,	// (0x00072198) main_cam6_set_pane_g2

0x7271,	// (0x000721bc) main_cset6_listscroll_pane_ParamLimits

0x7271,	// (0x000721bc) main_cset6_listscroll_pane

0x7291,	// (0x000721dc) main_cset6_slider_pane_ParamLimits

0x7291,	// (0x000721dc) main_cset6_slider_pane

0x72a7,	// (0x000721f2) main_cset6_text2_pane_ParamLimits

0x72a7,	// (0x000721f2) main_cset6_text2_pane

0xe522,	// (0x0007946d) main_cset6_text_pane

0xe52a,	// (0x00079475) main_cset_list_pane_copy1_ParamLimits

0xe52a,	// (0x00079475) main_cset_list_pane_copy1

0xe53a,	// (0x00079485) scroll_pane_cp028_copy1

0x72b5,	// (0x00072200) cset_list_set_pane_copy1

0x72c6,	// (0x00072211) aid_position_infowindow_above_copy1

0x72ce,	// (0x00072219) aid_position_infowindow_below_copy1

0x72d6,	// (0x00072221) cset_list_set_pane_g1_copy1

0x72de,	// (0x00072229) cset_list_set_pane_g3_copy1_ParamLimits

0x72de,	// (0x00072229) cset_list_set_pane_g3_copy1

0x72ed,	// (0x00072238) cset_list_set_pane_t1_copy1_ParamLimits

0x72ed,	// (0x00072238) cset_list_set_pane_t1_copy1

0xb26c,	// (0x000761b7) list_highlight_pane_cp021_copy1_ParamLimits

0xb26c,	// (0x000761b7) list_highlight_pane_cp021_copy1

0xe543,	// (0x0007948e) cset6_slider_pane_ParamLimits

0xe543,	// (0x0007948e) cset6_slider_pane

0xe56f,	// (0x000794ba) main_cset6_slider_pane_g1_ParamLimits

0xe56f,	// (0x000794ba) main_cset6_slider_pane_g1

0x7302,	// (0x0007224d) main_cset6_slider_pane_g2_ParamLimits

0x7302,	// (0x0007224d) main_cset6_slider_pane_g2

0xe597,	// (0x000794e2) main_cset6_slider_pane_g3_ParamLimits

0xe597,	// (0x000794e2) main_cset6_slider_pane_g3

0x732a,	// (0x00072275) main_cset6_slider_pane_g4_ParamLimits

0x732a,	// (0x00072275) main_cset6_slider_pane_g4

0x7336,	// (0x00072281) main_cset6_slider_pane_g5_ParamLimits

0x7336,	// (0x00072281) main_cset6_slider_pane_g5

0xde02,	// (0x00078d4d) main_cset6_slider_pane_g7_ParamLimits

0xde02,	// (0x00078d4d) main_cset6_slider_pane_g7

0xde0e,	// (0x00078d59) main_cset6_slider_pane_g8_ParamLimits

0xde0e,	// (0x00078d59) main_cset6_slider_pane_g8

0x62de,	// (0x00071229) main_cset6_slider_pane_g9_ParamLimits

0x62de,	// (0x00071229) main_cset6_slider_pane_g9

0x62ea,	// (0x00071235) main_cset6_slider_pane_g10_ParamLimits

0x62ea,	// (0x00071235) main_cset6_slider_pane_g10

0x62f6,	// (0x00071241) main_cset6_slider_pane_g11_ParamLimits

0x62f6,	// (0x00071241) main_cset6_slider_pane_g11

0x6302,	// (0x0007124d) main_cset6_slider_pane_g12_ParamLimits

0x6302,	// (0x0007124d) main_cset6_slider_pane_g12

0x630e,	// (0x00071259) main_cset6_slider_pane_g13_ParamLimits

0x630e,	// (0x00071259) main_cset6_slider_pane_g13

0x631a,	// (0x00071265) main_cset6_slider_pane_g14_ParamLimits

0x631a,	// (0x00071265) main_cset6_slider_pane_g14

0x7342,	// (0x0007228d) main_cset6_slider_pane_g15_ParamLimits

0x7342,	// (0x0007228d) main_cset6_slider_pane_g15

0x633e,	// (0x00071289) main_cset6_slider_pane_g16_ParamLimits

0x633e,	// (0x00071289) main_cset6_slider_pane_g16

0x634a,	// (0x00071295) main_cset6_slider_pane_g17_ParamLimits

0x634a,	// (0x00071295) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007aadd) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007aadd) main_cset6_slider_pane_g

0xe5a3,	// (0x000794ee) main_cset6_slider_pane_t1_ParamLimits

0xe5a3,	// (0x000794ee) main_cset6_slider_pane_t1

0x7372,	// (0x000722bd) main_cset6_slider_pane_t2_ParamLimits

0x7372,	// (0x000722bd) main_cset6_slider_pane_t2

0x739d,	// (0x000722e8) main_cset6_slider_pane_t3_ParamLimits

0x739d,	// (0x000722e8) main_cset6_slider_pane_t3

0x73c8,	// (0x00072313) main_cset6_slider_pane_t4_ParamLimits

0x73c8,	// (0x00072313) main_cset6_slider_pane_t4

0x73f3,	// (0x0007233e) main_cset6_slider_pane_t5_ParamLimits

0x73f3,	// (0x0007233e) main_cset6_slider_pane_t5

0xe5e4,	// (0x0007952f) main_cset6_slider_pane_t7_ParamLimits

0xe5e4,	// (0x0007952f) main_cset6_slider_pane_t7

0x741e,	// (0x00072369) main_cset6_slider_pane_t8_ParamLimits

0x741e,	// (0x00072369) main_cset6_slider_pane_t8

0x7442,	// (0x0007238d) main_cset6_slider_pane_t9_ParamLimits

0x7442,	// (0x0007238d) main_cset6_slider_pane_t9

0x7466,	// (0x000723b1) main_cset6_slider_pane_t10_ParamLimits

0x7466,	// (0x000723b1) main_cset6_slider_pane_t10

0x748a,	// (0x000723d5) main_cset6_slider_pane_t11_ParamLimits

0x748a,	// (0x000723d5) main_cset6_slider_pane_t11

0xe61a,	// (0x00079565) main_cset6_slider_pane_t14_ParamLimits

0xe61a,	// (0x00079565) main_cset6_slider_pane_t14

0xe653,	// (0x0007959e) main_cset6_slider_pane_t15_ParamLimits

0xe653,	// (0x0007959e) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007ab02) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007ab02) main_cset6_slider_pane_t

0xe45c,	// (0x000793a7) cset_slider_pane_g1_copy1

0xe465,	// (0x000793b0) cset_slider_pane_g2_copy1

0xe46e,	// (0x000793b9) cset_slider_pane_g3_copy1

0x9522,	// (0x0007446d) bg_popup_sub_pane_cp011_copy1

0xe68c,	// (0x000795d7) main_cset_text_pane_g1_copy1

0xdf46,	// (0x00078e91) main_cset_text_pane_t1_copy1

0xdf54,	// (0x00078e9f) main_cset_text_pane_t2_copy1

0xdf62,	// (0x00078ead) main_cset_text_pane_t3_copy1

0xdf70,	// (0x00078ebb) main_cset_text_pane_t4_copy1

0xdf7e,	// (0x00078ec9) main_cset_text_pane_t5_copy1

0xe694,	// (0x000795df) main_cset_text_pane_t6_copy1

0xdf9a,	// (0x00078ee5) main_cset_text_pane_t7_copy1

0x7230,	// (0x0007217b) main_cset_text2_pane_t1_copy1

0x959a,	// (0x000744e5) main_ncimui_pane

0x39aa,	// (0x0006e8f5) popup_query_ncimui_window_ParamLimits

0x39aa,	// (0x0006e8f5) popup_query_ncimui_window

0x98c6,	// (0x00074811) field_cale_ev2_pane_g4_ParamLimits

0x98c6,	// (0x00074811) field_cale_ev2_pane_g4

0x5582,	// (0x000704cd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5582,	// (0x000704cd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007a7e0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007a7e0) cell_video_dialer_keypad_pane_g

0x559a,	// (0x000704e5) cell_video_dialer_keypad_pane_t1

0x9522,	// (0x0007446d) bg_popup_window_pane_cp012

0xb6d0,	// (0x0007661b) heading_pane_cp06

0xe6c0,	// (0x0007960b) ncim_query_content_pane

0x9522,	// (0x0007446d) bg_popup_heading_pane_cp01

0xe6c8,	// (0x00079613) ncim_heading_pane_t1

0xe6d6,	// (0x00079621) ncim_indicator_popup_pane

0xe6e8,	// (0x00079633) ncim_query_button_pane

0xe6fc,	// (0x00079647) ncim_query_content_pane_t1

0xe70e,	// (0x00079659) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007ab46) ncim_query_content_pane_t

0xe748,	// (0x00079693) ncim_query_list_pane

0xe75a,	// (0x000796a5) ncim_query_popup_pane

0xe6d6,	// (0x00079621) ncim_indicator_popup_pane_ParamLimits

0x76a5,	// (0x000725f0) ncim_query_content_pane_g1_ParamLimits

0x76a5,	// (0x000725f0) ncim_query_content_pane_g1

0xe6fc,	// (0x00079647) ncim_query_content_pane_t1_ParamLimits

0xe70e,	// (0x00079659) ncim_query_content_pane_t2_ParamLimits

0x76b1,	// (0x000725fc) ncim_query_content_pane_t3_ParamLimits

0x76b1,	// (0x000725fc) ncim_query_content_pane_t3

0x76d9,	// (0x00072624) ncim_query_content_pane_t4_ParamLimits

0x76d9,	// (0x00072624) ncim_query_content_pane_t4

0x7701,	// (0x0007264c) ncim_query_content_pane_t5_ParamLimits

0x7701,	// (0x0007264c) ncim_query_content_pane_t5

0xe720,	// (0x0007966b) ncim_query_content_pane_t6_ParamLimits

0xe720,	// (0x0007966b) ncim_query_content_pane_t6

0xfbfb,	// (0x0007ab46) ncim_query_content_pane_t_ParamLimits

0xe748,	// (0x00079693) ncim_query_list_pane_ParamLimits

0xe75a,	// (0x000796a5) ncim_query_popup_pane_ParamLimits

0xe76e,	// (0x000796b9) wait_bar_pane_cp04

0x9522,	// (0x0007446d) input_focus_pane_cp011

0xe776,	// (0x000796c1) ncim_query_popup_pane_t1

0xe784,	// (0x000796cf) ncim_list_query_list_pane_ParamLimits

0xe784,	// (0x000796cf) ncim_list_query_list_pane

0x9522,	// (0x0007446d) bg_button_pane_cp027

0xe791,	// (0x000796dc) ncim_query_button_pane_g1

0x9522,	// (0x0007446d) list_highlight_pane_cp012

0xe79b,	// (0x000796e6) ncim_list_query_list_pane_g1

0xe7a3,	// (0x000796ee) ncim_list_query_list_pane_t1

0x9ba7,	// (0x00074af2) cam4_indicators_pane_g3_ParamLimits

0x9ba7,	// (0x00074af2) cam4_indicators_pane_g3

0x9c27,	// (0x00074b72) vid4_indicators_pane_g5_ParamLimits

0x9c27,	// (0x00074b72) vid4_indicators_pane_g5

0x9dcf,	// (0x00074d1a) vid4_progress_pane_g5_ParamLimits

0x9dcf,	// (0x00074d1a) vid4_progress_pane_g5

0x7593,	// (0x000724de) main_ncimui_pane_g1

0x75f9,	// (0x00072544) ncimui_group_query_pane_ParamLimits

0x75f9,	// (0x00072544) ncimui_group_query_pane

0x7641,	// (0x0007258c) ncimui_list_pane_ParamLimits

0x7641,	// (0x0007258c) ncimui_list_pane

0x7668,	// (0x000725b3) ncimui_text_pane_ParamLimits

0x7668,	// (0x000725b3) ncimui_text_pane

0x7729,	// (0x00072674) ncimui_text_pane_t1_ParamLimits

0x7729,	// (0x00072674) ncimui_text_pane_t1

0xe7b1,	// (0x000796fc) ncimui_list_single_graphic_pane_ParamLimits

0xe7b1,	// (0x000796fc) ncimui_list_single_graphic_pane

0x7747,	// (0x00072692) ncimui_query_pane_ParamLimits

0x7747,	// (0x00072692) ncimui_query_pane

0x9522,	// (0x0007446d) list_highlight_pane_cp013

0xe7c1,	// (0x0007970c) ncim_list_query_list_pane_t1_copy1

0xe79b,	// (0x000796e6) ncim_list_single_graphic_pane_g1

0xe7cf,	// (0x0007971a) ncim_query_button_pane_cp01

0xe7db,	// (0x00079726) ncim_query_entry_pane_ParamLimits

0xe7db,	// (0x00079726) ncim_query_entry_pane

0xe7ee,	// (0x00079739) ncimui_query_pane_g1

0xe7fa,	// (0x00079745) ncimui_query_pane_t1_ParamLimits

0xe7fa,	// (0x00079745) ncimui_query_pane_t1

0xb26c,	// (0x000761b7) input_focus_pane_cp012

0xe813,	// (0x0007975e) ncim_query_entry_pane_t1

0xadb7,	// (0x00075d02) main_im_pane_ParamLimits

0x959a,	// (0x000744e5) main_mobtv_pane_ParamLimits

0x959a,	// (0x000744e5) main_mobtv_pane

0x735a,	// (0x000722a5) main_cset6_slider_pane_g18_ParamLimits

0x735a,	// (0x000722a5) main_cset6_slider_pane_g18

0x7366,	// (0x000722b1) main_cset6_slider_pane_g19_ParamLimits

0x7366,	// (0x000722b1) main_cset6_slider_pane_g19

0x775a,	// (0x000726a5) bg_main_mobtv_pane_ParamLimits

0x775a,	// (0x000726a5) bg_main_mobtv_pane

0x7768,	// (0x000726b3) main_mobtv_info_pane

0x7771,	// (0x000726bc) main_mobtv_loading_pane_ParamLimits

0x7771,	// (0x000726bc) main_mobtv_loading_pane

0xe825,	// (0x00079770) main_mobtv_pg_channel_list_pane

0xe82f,	// (0x0007977a) main_mobtv_pg_hdr_pane

0x777e,	// (0x000726c9) main_mobtv_programe_curr_pane_ParamLimits

0x777e,	// (0x000726c9) main_mobtv_programe_curr_pane

0x778b,	// (0x000726d6) main_mobtv_programe_next_pane_ParamLimits

0x778b,	// (0x000726d6) main_mobtv_programe_next_pane

0xe838,	// (0x00079783) popup_mobtv_noti_window

0xd255,	// (0x000781a0) main_tv_pg_hdr_pane_g1

0xe840,	// (0x0007978b) main_tv_pg_hdr_pane_g2

0xe848,	// (0x00079793) main_tv_pg_hdr_pane_g3

0xe850,	// (0x0007979b) main_tv_pg_hdr_pane_g4

0xe858,	// (0x000797a3) main_tv_pg_hdr_pane_g5

0xe862,	// (0x000797ad) main_tv_pg_hdr_pane_g6

0xe86c,	// (0x000797b7) main_tv_pg_hdr_pane_g7

0xe876,	// (0x000797c1) main_tv_pg_hdr_pane_g8

0xe880,	// (0x000797cb) main_tv_pg_hdr_pane_g9

0xe88a,	// (0x000797d5) main_tv_pg_hdr_pane_g10

0xe894,	// (0x000797df) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007ab53) main_tv_pg_hdr_pane_g

0xe89e,	// (0x000797e9) main_tv_pg_hdr_pane_t1

0xe8ac,	// (0x000797f7) main_tv_pg_hdr_pane_t2

0xe8ba,	// (0x00079805) main_tv_pg_hdr_pane_t3

0xe8ca,	// (0x00079815) main_tv_pg_hdr_pane_t4

0xe8da,	// (0x00079825) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007ab6a) main_tv_pg_hdr_pane_t

0xe8ea,	// (0x00079835) single_mobtv_pg_channel_pane_ParamLimits

0xe8ea,	// (0x00079835) single_mobtv_pg_channel_pane

0xe8fc,	// (0x00079847) single_mobtv_pg_channel_table_pane

0xe905,	// (0x00079850) single_mobtv_pg_channel_thumb_pane

0xe90e,	// (0x00079859) single_tv_pg_channel_pane_g1

0xe917,	// (0x00079862) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007ab75) single_tv_pg_channel_pane_g

0xd4c1,	// (0x0007840c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd4c1,	// (0x0007840c) bg_single_mobtv_pg_channel_thumb_pane

0xe920,	// (0x0007986b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe920,	// (0x0007986b) single_mobtv_pg_channel_thumb_pane_g1

0xe92e,	// (0x00079879) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe92e,	// (0x00079879) single_mobtv_pg_channel_thumb_pane_g2

0xe93a,	// (0x00079885) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe93a,	// (0x00079885) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007ab7a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007ab7a) single_mobtv_pg_channel_thumb_pane_g

0xe946,	// (0x00079891) single_mobtv_pg_channel_thumb_pane_t1

0xe954,	// (0x0007989f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007ab81) single_mobtv_pg_channel_thumb_pane_t

0xd255,	// (0x000781a0) bg_single_mobtv_pg_channel_table_pane_g1

0xd255,	// (0x000781a0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0007a62c) bg_single_mobtv_pg_channel_table_pane_g

0xe962,	// (0x000798ad) single_mobtv_pg_channel_table_pane_t1

0xe970,	// (0x000798bb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007ab86) single_mobtv_pg_channel_table_pane_t

0x77a0,	// (0x000726eb) main_mobtv_info_pane_g1_ParamLimits

0x77a0,	// (0x000726eb) main_mobtv_info_pane_g1

0x77be,	// (0x00072709) main_mobtv_info_pane_t1_ParamLimits

0x77be,	// (0x00072709) main_mobtv_info_pane_t1

0x7836,	// (0x00072781) main_mobtv_info_pane_t2_ParamLimits

0x7836,	// (0x00072781) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007ab90) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007ab90) main_mobtv_info_pane_t

0x78c5,	// (0x00072810) wait_bar_pane_cp05

0x78d7,	// (0x00072822) main_mobtv_loading_pane_g1_ParamLimits

0x78d7,	// (0x00072822) main_mobtv_loading_pane_g1

0x78ea,	// (0x00072835) main_mobtv_loading_pane_g2_ParamLimits

0x78ea,	// (0x00072835) main_mobtv_loading_pane_g2

0x78f6,	// (0x00072841) main_mobtv_loading_pane_g3_ParamLimits

0x78f6,	// (0x00072841) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007ab97) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007ab97) main_mobtv_loading_pane_g

0xe97e,	// (0x000798c9) main_mobtv_loading_pane_t1_ParamLimits

0xe97e,	// (0x000798c9) main_mobtv_loading_pane_t1

0xe996,	// (0x000798e1) main_mobtv_loading_pane_t2_ParamLimits

0xe996,	// (0x000798e1) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007ab9e) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007ab9e) main_mobtv_loading_pane_t

0x7909,	// (0x00072854) wait_bar_pane_cp06_ParamLimits

0x7909,	// (0x00072854) wait_bar_pane_cp06

0xe9ba,	// (0x00079905) main_mobtv_programe_curr_pane_t1

0xe9c8,	// (0x00079913) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007aba3) main_mobtv_programe_curr_pane_t

0xe9d6,	// (0x00079921) main_mobtv_programe_next_pane_t1

0xe9e4,	// (0x0007992f) main_mobtv_programe_next_pane_t2

0xe9f2,	// (0x0007993d) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007aba8) main_mobtv_programe_next_pane_t

0x9522,	// (0x0007446d) bg_popup_mobtv_noti_window_pane

0xea00,	// (0x0007994b) popup_mobtv_noti_window_g1

0xea08,	// (0x00079953) popup_mobtv_noti_window_t1

0xea16,	// (0x00079961) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007abaf) popup_mobtv_noti_window_t

0xd255,	// (0x000781a0) bg_popup_mobtv_noti_window_pane_g1

0x95a8,	// (0x000744f3) sc_clock_pane

0x95a8,	// (0x000744f3) main_fs_bigclock_pane

0x6f66,	// (0x00071eb1) blid2_tripm_pane_t4_ParamLimits

0x6f66,	// (0x00071eb1) blid2_tripm_pane_t4

0x7918,	// (0x00072863) sc_clock_pane_g1_ParamLimits

0x7918,	// (0x00072863) sc_clock_pane_g1

0x792a,	// (0x00072875) sc_clock_pane_t1_ParamLimits

0x792a,	// (0x00072875) sc_clock_pane_t1

0x794c,	// (0x00072897) sc_clock_pane_t2_ParamLimits

0x794c,	// (0x00072897) sc_clock_pane_t2

0x7964,	// (0x000728af) sc_clock_pane_t3_ParamLimits

0x7964,	// (0x000728af) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007abb4) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007abb4) sc_clock_pane_t

0x8a0c,	// (0x00073957) main_fs_bigclock_indicator_pane_ParamLimits

0x8a0c,	// (0x00073957) main_fs_bigclock_indicator_pane

0xd491,	// (0x000783dc) main_fs_bigclock_pane_g1_ParamLimits

0xd491,	// (0x000783dc) main_fs_bigclock_pane_g1

0x8a18,	// (0x00073963) main_fs_bigclock_pane_t1_ParamLimits

0x8a18,	// (0x00073963) main_fs_bigclock_pane_t1

0x8a2a,	// (0x00073975) main_fs_bigclock_pane_t2_ParamLimits

0x8a2a,	// (0x00073975) main_fs_bigclock_pane_t2

0x8a3e,	// (0x00073989) main_fs_bigclock_pane_t3_ParamLimits

0x8a3e,	// (0x00073989) main_fs_bigclock_pane_t3

0x0002,

0xfe55,	// (0x0007ada0) main_fs_bigclock_pane_t_ParamLimits

0xfe55,	// (0x0007ada0) main_fs_bigclock_pane_t

0xa4a0,	// (0x000753eb) main_fs_bigclock_indicator_pane_g1

0xe6f0,	// (0x0007963b) ncim_query_content_pane_g2_ParamLimits

0xe6f0,	// (0x0007963b) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007ab41) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007ab41) ncim_query_content_pane_g

0x797d,	// (0x000728c8) sc_clock_pane_t4_ParamLimits

0x797d,	// (0x000728c8) sc_clock_pane_t4

0x959a,	// (0x000744e5) main_radioblah_pane

0xdc24,	// (0x00078b6f) cell_call4_button_pane_t1_copy1_ParamLimits

0xdc24,	// (0x00078b6f) cell_call4_button_pane_t1_copy1

0x75ab,	// (0x000724f6) main_ncimui_pane_t1_ParamLimits

0x75ab,	// (0x000724f6) main_ncimui_pane_t1

0x75c5,	// (0x00072510) main_ncimui_pane_t2_ParamLimits

0x75c5,	// (0x00072510) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007ab3a) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007ab3a) main_ncimui_pane_t

0xeb50,	// (0x00079a9b) main_radioblah_anim_pane_ParamLimits

0xeb50,	// (0x00079a9b) main_radioblah_anim_pane

0xeb61,	// (0x00079aac) main_radioblah_info_pane_ParamLimits

0xeb61,	// (0x00079aac) main_radioblah_info_pane

0xeb75,	// (0x00079ac0) main_radioblah_pane_t1_ParamLimits

0xeb75,	// (0x00079ac0) main_radioblah_pane_t1

0xeb91,	// (0x00079adc) main_radioblah_pane_t2_ParamLimits

0xeb91,	// (0x00079adc) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007abd5) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007abd5) main_radioblah_pane_t

0x7a33,	// (0x0007297e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a33,	// (0x0007297e) main_radioblah_rocker_ctrl_pane

0xebd9,	// (0x00079b24) main_radioblah_info_pane_t1_ParamLimits

0xebd9,	// (0x00079b24) main_radioblah_info_pane_t1

0x7a8b,	// (0x000729d6) main_radioblah_info_pane_t2_ParamLimits

0x7a8b,	// (0x000729d6) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007abde) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007abde) main_radioblah_info_pane_t

0xd255,	// (0x000781a0) main_radioblah_rocker_ctrl_pane_g1

0x7b3b,	// (0x00072a86) main_radioblah_rocker_ctrl_pane_g2

0x7b43,	// (0x00072a8e) main_radioblah_rocker_ctrl_pane_g3

0x7b4b,	// (0x00072a96) main_radioblah_rocker_ctrl_pane_g4

0x7b53,	// (0x00072a9e) main_radioblah_rocker_ctrl_pane_g5

0x7b5b,	// (0x00072aa6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007abe7) main_radioblah_rocker_ctrl_pane_g

0x7230,	// (0x0007217b) main_cset_text2_pane_t1_copy1_ParamLimits

0x9b69,	// (0x00074ab4) cam4_image_uncrop_qvga_pane

0x9bd0,	// (0x00074b1b) vid4_image_uncrop_qcif_pane

0x9e52,	// (0x00074d9d) cam6_image_uncrop_qvga_pane_ParamLimits

0x9e52,	// (0x00074d9d) cam6_image_uncrop_qvga_pane

0xe3d8,	// (0x00079323) vid6_image_uncrop_qcif_pane_ParamLimits

0xe3d8,	// (0x00079323) vid6_image_uncrop_qcif_pane

0x9522,	// (0x0007446d) bg_popup_preview_window_pane_cp03

0xe6a2,	// (0x000795ed) list_cset_text2_pane

0xe6aa,	// (0x000795f5) main_cset6_text2_pane_g1

0xe6b2,	// (0x000795fd) main_cset6_text2_pane_t1

0x7b63,	// (0x00072aae) list_cset_text2_pane_t1_ParamLimits

0x7b63,	// (0x00072aae) list_cset_text2_pane_t1

0x959a,	// (0x000744e5) main_radioblah_pane_ParamLimits

0x78b1,	// (0x000727fc) main_mobtv_info_pane_t3_ParamLimits

0x78b1,	// (0x000727fc) main_mobtv_info_pane_t3

0x7a21,	// (0x0007296c) main_radioblah_pane_g1

0x7a5b,	// (0x000729a6) main_radioblah_info_pane_g1

0x7ae0,	// (0x00072a2b) main_radioblah_info_pane_t3_ParamLimits

0x7ae0,	// (0x00072a2b) main_radioblah_info_pane_t3

0x23f1,	// (0x0006d33c) highlight_cell_cale_month_pane_ParamLimits

0x23f1,	// (0x0006d33c) highlight_cell_cale_month_pane

0x95a8,	// (0x000744f3) main_phob_fisheye_pane

0xd5bd,	// (0x00078508) scroll_pane_cp0031_ParamLimits

0xd5bd,	// (0x00078508) scroll_pane_cp0031

0xe513,	// (0x0007945e) wait_bar_pane_cp08_ParamLimits

0x72b5,	// (0x00072200) cset_list_set_pane_copy1_ParamLimits

0xec13,	// (0x00079b5e) highlight_cell_cale_month_pane_g1

0x7b7c,	// (0x00072ac7) highlight_cell_cale_month_pane_t1

0xe172,	// (0x000790bd) list_gen_pane_cp01

0xdded,	// (0x00078d38) scroll_pane_01

0x7b8a,	// (0x00072ad5) list_single_double_fisheye_pane

0x7b93,	// (0x00072ade) list_double_fisheye_pane_g1_ParamLimits

0x7b93,	// (0x00072ade) list_double_fisheye_pane_g1

0x7b9f,	// (0x00072aea) list_double_fisheye_pane_g2_ParamLimits

0x7b9f,	// (0x00072aea) list_double_fisheye_pane_g2

0x7bb3,	// (0x00072afe) list_double_fisheye_pane_g3_ParamLimits

0x7bb3,	// (0x00072afe) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007abf4) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007abf4) list_double_fisheye_pane_g

0x7bdc,	// (0x00072b27) list_double_fisheye_pane_t1_ParamLimits

0x7bdc,	// (0x00072b27) list_double_fisheye_pane_t1

0x7bf7,	// (0x00072b42) list_double_fisheye_pane_t2_ParamLimits

0x7bf7,	// (0x00072b42) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007abff) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007abff) list_double_fisheye_pane_t

0x95a8,	// (0x000744f3) main_call5_pane

0x79a8,	// (0x000728f3) sc_swipe_pane_ParamLimits

0x79a8,	// (0x000728f3) sc_swipe_pane

0x7c2c,	// (0x00072b77) call5_image_pane_ParamLimits

0x7c2c,	// (0x00072b77) call5_image_pane

0x7c49,	// (0x00072b94) call5_swipe_1_pane_ParamLimits

0x7c49,	// (0x00072b94) call5_swipe_1_pane

0x7c5c,	// (0x00072ba7) call5_swipe_2_pane_ParamLimits

0x7c5c,	// (0x00072ba7) call5_swipe_2_pane

0x7c87,	// (0x00072bd2) popup_call5_audio_first_window_ParamLimits

0x7c87,	// (0x00072bd2) popup_call5_audio_first_window

0xd4c1,	// (0x0007840c) call5_swipe_1_pane_g1_ParamLimits

0xd4c1,	// (0x0007840c) call5_swipe_1_pane_g1

0xec1b,	// (0x00079b66) call5_swipe_1_pane_g2_ParamLimits

0xec1b,	// (0x00079b66) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007ac04) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007ac04) call5_swipe_1_pane_g

0xec27,	// (0x00079b72) call5_swipe_1_pane_t1_ParamLimits

0xec27,	// (0x00079b72) call5_swipe_1_pane_t1

0xd4c1,	// (0x0007840c) call5_swipe_2_pane_g1_ParamLimits

0xd4c1,	// (0x0007840c) call5_swipe_2_pane_g1

0xec3c,	// (0x00079b87) call5_swipe_2_pane_g2_ParamLimits

0xec3c,	// (0x00079b87) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007ac09) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007ac09) call5_swipe_2_pane_g

0xec48,	// (0x00079b93) call5_swipe_2_pane_t1_ParamLimits

0xec48,	// (0x00079b93) call5_swipe_2_pane_t1

0xec5d,	// (0x00079ba8) sc_swipe_pane_g1_ParamLimits

0xec5d,	// (0x00079ba8) sc_swipe_pane_g1

0xec6a,	// (0x00079bb5) sc_swipe_pane_g2_ParamLimits

0xec6a,	// (0x00079bb5) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007ac0e) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007ac0e) sc_swipe_pane_g

0xec76,	// (0x00079bc1) sc_swipe_pane_t1_ParamLimits

0xec76,	// (0x00079bc1) sc_swipe_pane_t1

0x95a8,	// (0x000744f3) main_cmail_launcher_pane

0x7c98,	// (0x00072be3) aid_size_cell_cmail_l_ParamLimits

0x7c98,	// (0x00072be3) aid_size_cell_cmail_l

0x7cb2,	// (0x00072bfd) grid_cmail_l_pane_ParamLimits

0x7cb2,	// (0x00072bfd) grid_cmail_l_pane

0x7ccd,	// (0x00072c18) cell_cmail_l_pane_ParamLimits

0x7ccd,	// (0x00072c18) cell_cmail_l_pane

0x7cf3,	// (0x00072c3e) cell_cmail_l_pane_g1_ParamLimits

0x7cf3,	// (0x00072c3e) cell_cmail_l_pane_g1

0x7cff,	// (0x00072c4a) cell_cmail_l_pane_t1_ParamLimits

0x7cff,	// (0x00072c4a) cell_cmail_l_pane_t1

0xec8b,	// (0x00079bd6) cell_cmail_l_pane_t2_ParamLimits

0xec8b,	// (0x00079bd6) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007ac13) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007ac13) cell_cmail_l_pane_t

0xb26c,	// (0x000761b7) grid_highlight_pane_cp018_ParamLimits

0xb26c,	// (0x000761b7) grid_highlight_pane_cp018

0x0379,	// (0x0006b2c4) main2_pane_ParamLimits

0x0379,	// (0x0006b2c4) main2_pane

0xae50,	// (0x00075d9b) popup_sp_fs_action_menu_bg_pane_g1

0xae58,	// (0x00075da3) popup_sp_fs_action_menu_bg_pane_g2

0xae60,	// (0x00075dab) popup_sp_fs_action_menu_bg_pane_g3

0xae68,	// (0x00075db3) popup_sp_fs_action_menu_bg_pane_g4

0xae70,	// (0x00075dbb) popup_sp_fs_action_menu_bg_pane_g5

0xae78,	// (0x00075dc3) popup_sp_fs_action_menu_bg_pane_g6

0xae80,	// (0x00075dcb) popup_sp_fs_action_menu_bg_pane_g7

0xae88,	// (0x00075dd3) popup_sp_fs_action_menu_bg_pane_g8

0xae90,	// (0x00075ddb) popup_sp_fs_action_menu_bg_pane_g9

0xae98,	// (0x00075de3) popup_sp_fs_action_menu_bg_pane_g10

0xae98,	// (0x00075de3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0007a0d8) popup_sp_fs_action_menu_bg_pane_g

0x135d,	// (0x0006c2a8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x2_t3_g3_g1

0x1369,	// (0x0006c2b4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1369,	// (0x0006c2b4) list_medium_line_x2_t3_g3_g2

0x1375,	// (0x0006c2c0) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1375,	// (0x0006c2c0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0007a188) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0007a188) list_medium_line_x2_t3_g3_g

0x1381,	// (0x0006c2cc) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1381,	// (0x0006c2cc) list_medium_line_x2_t3_g3_t1

0x1396,	// (0x0006c2e1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1396,	// (0x0006c2e1) list_medium_line_x2_t3_g3_t2

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t3_g3_t3_ParamLimits

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0007a18f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0007a18f) list_medium_line_x2_t3_g3_t

0x135d,	// (0x0006c2a8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x2_t3_g2_g1

0x1375,	// (0x0006c2c0) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1375,	// (0x0006c2c0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0007a196) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0007a196) list_medium_line_x2_t3_g2_g

0x13bf,	// (0x0006c30a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x13bf,	// (0x0006c30a) list_medium_line_x2_t3_g2_t1

0x13d5,	// (0x0006c320) list_medium_line_x2_t3_g2_t2_ParamLimits

0x13d5,	// (0x0006c320) list_medium_line_x2_t3_g2_t2

0x13e7,	// (0x0006c332) list_medium_line_x2_t3_g2_t3_ParamLimits

0x13e7,	// (0x0006c332) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0007a19b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0007a19b) list_medium_line_x2_t3_g2_t

0x135d,	// (0x0006c2a8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x2_t4_g4_g1

0x1404,	// (0x0006c34f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1404,	// (0x0006c34f) list_medium_line_x2_t4_g4_g2

0x1369,	// (0x0006c2b4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1369,	// (0x0006c2b4) list_medium_line_x2_t4_g4_g3

0x1410,	// (0x0006c35b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1410,	// (0x0006c35b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0007a1a2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0007a1a2) list_medium_line_x2_t4_g4_g

0x141c,	// (0x0006c367) list_medium_line_x2_t4_g4_t1_ParamLimits

0x141c,	// (0x0006c367) list_medium_line_x2_t4_g4_t1

0x1436,	// (0x0006c381) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1436,	// (0x0006c381) list_medium_line_x2_t4_g4_t2

0x144c,	// (0x0006c397) list_medium_line_x2_t4_g4_t3_ParamLimits

0x144c,	// (0x0006c397) list_medium_line_x2_t4_g4_t3

0x1461,	// (0x0006c3ac) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1461,	// (0x0006c3ac) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0007a1ab) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0007a1ab) list_medium_line_x2_t4_g4_t

0x135d,	// (0x0006c2a8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x2_t2_g4_g1

0x1404,	// (0x0006c34f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1404,	// (0x0006c34f) list_medium_line_x2_t2_g4_g2

0x1369,	// (0x0006c2b4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1369,	// (0x0006c2b4) list_medium_line_x2_t2_g4_g3

0x1375,	// (0x0006c2c0) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1375,	// (0x0006c2c0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0007a212) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0007a212) list_medium_line_x2_t2_g4_g

0x2417,	// (0x0006d362) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2417,	// (0x0006d362) list_medium_line_x2_t2_g4_t1

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t2_g4_t2_ParamLimits

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0007a21b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0007a21b) list_medium_line_x2_t2_g4_t

0x135d,	// (0x0006c2a8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x2_t2_g3_g1

0x1369,	// (0x0006c2b4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1369,	// (0x0006c2b4) list_medium_line_x2_t2_g3_g2

0x1375,	// (0x0006c2c0) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1375,	// (0x0006c2c0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0007a188) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0007a188) list_medium_line_x2_t2_g3_g

0x242c,	// (0x0006d377) list_medium_line_x2_t2_g3_t1_ParamLimits

0x242c,	// (0x0006d377) list_medium_line_x2_t2_g3_t1

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t2_g3_t2_ParamLimits

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0007a220) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0007a220) list_medium_line_x2_t2_g3_t

0x2569,	// (0x0006d4b4) main_sp_fs_list_pane_ParamLimits

0x2569,	// (0x0006d4b4) main_sp_fs_list_pane

0xc6b5,	// (0x00077600) sp_fs_scroll_pane_ParamLimits

0xc6b5,	// (0x00077600) sp_fs_scroll_pane

0x2575,	// (0x0006d4c0) list_medium_line_x2_t3_t1

0x2585,	// (0x0006d4d0) list_medium_line_x2_t3_t2

0x2593,	// (0x0006d4de) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0007a26b) list_medium_line_x2_t3_t

0x25a1,	// (0x0006d4ec) list_medium_line_x3_t4_t1

0x25b1,	// (0x0006d4fc) list_medium_line_x3_t4_t2

0x25bf,	// (0x0006d50a) list_medium_line_x3_t4_t3

0x2593,	// (0x0006d4de) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0007a272) list_medium_line_x3_t4_t

0x25cd,	// (0x0006d518) list_medium_line_x4_t5_t1

0x25dd,	// (0x0006d528) list_medium_line_x4_t5_t2

0x25bf,	// (0x0006d50a) list_medium_line_x4_t5_t3

0x25eb,	// (0x0006d536) list_medium_line_x4_t5_t4

0x2593,	// (0x0006d4de) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0007a27b) list_medium_line_x4_t5_t

0x135d,	// (0x0006c2a8) list_medium_line_t4_g4_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_t4_g4_g1

0x25f9,	// (0x0006d544) list_medium_line_t4_g4_g2_ParamLimits

0x25f9,	// (0x0006d544) list_medium_line_t4_g4_g2

0x2605,	// (0x0006d550) list_medium_line_t4_g4_g3_ParamLimits

0x2605,	// (0x0006d550) list_medium_line_t4_g4_g3

0x1375,	// (0x0006c2c0) list_medium_line_t4_g4_g4_ParamLimits

0x1375,	// (0x0006c2c0) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0007a286) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0007a286) list_medium_line_t4_g4_g

0x2611,	// (0x0006d55c) list_medium_line_t4_g4_t1_ParamLimits

0x2611,	// (0x0006d55c) list_medium_line_t4_g4_t1

0x2626,	// (0x0006d571) list_medium_line_t4_g4_t2_ParamLimits

0x2626,	// (0x0006d571) list_medium_line_t4_g4_t2

0x263b,	// (0x0006d586) list_medium_line_t4_g4_t3_ParamLimits

0x263b,	// (0x0006d586) list_medium_line_t4_g4_t3

0x13aa,	// (0x0006c2f5) list_medium_line_t4_g4_t4_ParamLimits

0x13aa,	// (0x0006c2f5) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0007a28f) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0007a28f) list_medium_line_t4_g4_t

0x2703,	// (0x0006d64e) chi_dic_find_pane_g1

0x3774,	// (0x0006e6bf) main_tport_pane

0x65e4,	// (0x0007152f) list_medium_line_plain_t1

0x6696,	// (0x000715e1) list_medium_line_t2_g2_g1_ParamLimits

0x6696,	// (0x000715e1) list_medium_line_t2_g2_g1

0x66a2,	// (0x000715ed) list_medium_line_t2_g2_g2_ParamLimits

0x66a2,	// (0x000715ed) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007a94b) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007a94b) list_medium_line_t2_g2_g

0x66ae,	// (0x000715f9) list_medium_line_t2_g2_t1_ParamLimits

0x66ae,	// (0x000715f9) list_medium_line_t2_g2_t1

0x66c5,	// (0x00071610) list_medium_line_t2_g2_t2_ParamLimits

0x66c5,	// (0x00071610) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007a950) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007a950) list_medium_line_t2_g2_t

0x9e30,	// (0x00074d7b) aid_sp_fs_list_icon_a_sm

0x9e38,	// (0x00074d83) aid_sp_fs_list_icon_d

0x9e40,	// (0x00074d8b) aid_sp_fs_text_primary

0x9e49,	// (0x00074d94) aid_sp_fs_text_secondary

0x6d13,	// (0x00071c5e) list_medium_line

0x6d13,	// (0x00071c5e) list_medium_line_g2

0x6d13,	// (0x00071c5e) list_medium_line_g3

0x6d13,	// (0x00071c5e) list_medium_line_plain

0x6d13,	// (0x00071c5e) list_medium_line_plain_t2

0x6d13,	// (0x00071c5e) list_medium_line_plain_t3

0x6d13,	// (0x00071c5e) list_medium_line_right_icon

0x6d13,	// (0x00071c5e) list_medium_line_right_iconx2

0x6d13,	// (0x00071c5e) list_medium_line_t2

0x6d13,	// (0x00071c5e) list_medium_line_t2_g2

0x6d13,	// (0x00071c5e) list_medium_line_t2_g3

0x6d13,	// (0x00071c5e) list_medium_line_t2_right_icon

0x6d13,	// (0x00071c5e) list_medium_line_t2_right_iconx2

0x6d13,	// (0x00071c5e) list_medium_line_t3

0x6d13,	// (0x00071c5e) list_medium_line_t3_g2

0x6d13,	// (0x00071c5e) list_medium_line_t3_g3

0x6d13,	// (0x00071c5e) list_medium_line_t3_right_iconx2

0x6d1c,	// (0x00071c67) list_medium_line_t4_g4

0x6d25,	// (0x00071c70) list_medium_line_x2

0x6d25,	// (0x00071c70) list_medium_line_x2_t2_g2

0x6d25,	// (0x00071c70) list_medium_line_x2_t2_g3

0x6d25,	// (0x00071c70) list_medium_line_x2_t2_g4

0x6d25,	// (0x00071c70) list_medium_line_x2_t3

0x6d25,	// (0x00071c70) list_medium_line_x2_t3_g2

0x6d25,	// (0x00071c70) list_medium_line_x2_t3_g3

0x6d25,	// (0x00071c70) list_medium_line_x2_t3_g4

0x6d25,	// (0x00071c70) list_medium_line_x2_t4_g2

0x6d25,	// (0x00071c70) list_medium_line_x2_t4_g4

0x6d2e,	// (0x00071c79) list_medium_line_x3

0x6d2e,	// (0x00071c79) list_medium_line_x3_t4

0x6d2e,	// (0x00071c79) list_medium_line_x3_t4_g4

0x6d1c,	// (0x00071c67) list_medium_line_x4_t4

0x6d1c,	// (0x00071c67) list_medium_line_x4_t4_g7

0x6d1c,	// (0x00071c67) list_medium_line_x4_t5

0x6d37,	// (0x00071c82) list_single_fs_dyc_pane_ParamLimits

0x6d37,	// (0x00071c82) list_single_fs_dyc_pane

0x135d,	// (0x0006c2a8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x4_t4_g7_g1

0x74ae,	// (0x000723f9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x74ae,	// (0x000723f9) list_medium_line_x4_t4_g7_g2

0x74ba,	// (0x00072405) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74ba,	// (0x00072405) list_medium_line_x4_t4_g7_g3

0x74c9,	// (0x00072414) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74c9,	// (0x00072414) list_medium_line_x4_t4_g7_g4

0x74d5,	// (0x00072420) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74d5,	// (0x00072420) list_medium_line_x4_t4_g7_g5

0x74e4,	// (0x0007242f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x74e4,	// (0x0007242f) list_medium_line_x4_t4_g7_g6

0x74f3,	// (0x0007243e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x74f3,	// (0x0007243e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007ab1b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007ab1b) list_medium_line_x4_t4_g7_g

0x74ff,	// (0x0007244a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x74ff,	// (0x0007244a) list_medium_line_x4_t4_g7_t1

0x7514,	// (0x0007245f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7514,	// (0x0007245f) list_medium_line_x4_t4_g7_t2

0x7529,	// (0x00072474) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7529,	// (0x00072474) list_medium_line_x4_t4_g7_t3

0x753e,	// (0x00072489) list_medium_line_x4_t4_g7_t4_ParamLimits

0x753e,	// (0x00072489) list_medium_line_x4_t4_g7_t4

0x7550,	// (0x0007249b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7550,	// (0x0007249b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007ab2a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007ab2a) list_medium_line_x4_t4_g7_t

0x7562,	// (0x000724ad) list_single_dyc_row_pane_ParamLimits

0x7562,	// (0x000724ad) list_single_dyc_row_pane

0x7c19,	// (0x00072b64) call5_gesture_pane_ParamLimits

0x7c19,	// (0x00072b64) call5_gesture_pane

0x7c6f,	// (0x00072bba) call5_windows_pane_ParamLimits

0x7c6f,	// (0x00072bba) call5_windows_pane

0x7d15,	// (0x00072c60) call5_swipe_1_pane_cp_ParamLimits

0x7d15,	// (0x00072c60) call5_swipe_1_pane_cp

0x7d21,	// (0x00072c6c) call5_swipe_2_pane_cp_ParamLimits

0x7d21,	// (0x00072c6c) call5_swipe_2_pane_cp

0xba44,	// (0x0007698f) call5_image_pane_cp

0x7d2d,	// (0x00072c78) popup_call5_audio_first_window_cp_ParamLimits

0x7d2d,	// (0x00072c78) popup_call5_audio_first_window_cp

0xec5d,	// (0x00079ba8) call5_swipe_1_pane_g1_cp_ParamLimits

0xec5d,	// (0x00079ba8) call5_swipe_1_pane_g1_cp

0xec9d,	// (0x00079be8) call5_swipe_1_pane_g2_cp

0xec76,	// (0x00079bc1) call5_swipe_1_pane_t1_cp_ParamLimits

0xec76,	// (0x00079bc1) call5_swipe_1_pane_t1_cp

0xec5d,	// (0x00079ba8) call5_swipe_2_pane_g1_cp_ParamLimits

0xec5d,	// (0x00079ba8) call5_swipe_2_pane_g1_cp

0xeca5,	// (0x00079bf0) call5_swipe_2_pane_g2_cp

0xecad,	// (0x00079bf8) call5_swipe_2_pane_t1_cp_ParamLimits

0xecad,	// (0x00079bf8) call5_swipe_2_pane_t1_cp

0xb26c,	// (0x000761b7) main_sp_fs_email_pane

0xecc2,	// (0x00079c0d) main_sp_fs_listscroll_pane_te

0x7d3b,	// (0x00072c86) popup_sp_fs_action_menu_pane_ParamLimits

0x7d3b,	// (0x00072c86) popup_sp_fs_action_menu_pane

0xd255,	// (0x000781a0) bg_sp_fs_ctrlbar_pane_g1

0xd834,	// (0x0007877f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd846,	// (0x00078791) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd83d,	// (0x00078788) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd255,	// (0x000781a0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007ac18) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd03a,	// (0x00077f85) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd03a,	// (0x00077f85) bg_sp_fs_ctrlbar_ddmenu_pane

0xeccb,	// (0x00079c16) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xeccb,	// (0x00079c16) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xecd7,	// (0x00079c22) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xecd7,	// (0x00079c22) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007ac21) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007ac21) main_sp_fs_ctrlbar_ddmenu_pane_g

0xece3,	// (0x00079c2e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xece3,	// (0x00079c2e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d7f,	// (0x00072cca) list_medium_line_t2_right_icon_g1

0x7d87,	// (0x00072cd2) list_medium_line_t2_right_icon_t1

0x7d97,	// (0x00072ce2) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007ac26) list_medium_line_t2_right_icon_t

0xce4d,	// (0x00077d98) bg_sp_fs_ctrlbar_pane_ParamLimits

0xce4d,	// (0x00077d98) bg_sp_fs_ctrlbar_pane

0x7df1,	// (0x00072d3c) main_sp_fs_ctrlbar_button_pane_cp01

0x7dfb,	// (0x00072d46) main_sp_fs_ctrlbar_ddmenu_pane

0xed35,	// (0x00079c80) main_sp_fs_ctrlbar_pane_g1

0xed41,	// (0x00079c8c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007ac2b) main_sp_fs_ctrlbar_pane_g

0xed4d,	// (0x00079c98) main_sp_fs_ctrlbar_pane_t1

0x7e05,	// (0x00072d50) main_sp_fs_ctrlbar_pane

0x7e29,	// (0x00072d74) main_sp_fs_listscroll_pane_te_cp01

0x7e49,	// (0x00072d94) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e49,	// (0x00072d94) popup_sp_fs_action_menu_pane_cp01

0xb26c,	// (0x000761b7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb26c,	// (0x000761b7) bg_sp_fs_highlight_list_pane_cp01

0x9e60,	// (0x00074dab) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9e60,	// (0x00074dab) sp_fs_action_menu_list_gene_pane_g1

0xed7d,	// (0x00079cc8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xed7d,	// (0x00079cc8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007ac35) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007ac35) sp_fs_action_menu_list_gene_pane_g

0x9e6f,	// (0x00074dba) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x9e6f,	// (0x00074dba) sp_fs_action_menu_list_gene_pane_t1

0x9e87,	// (0x00074dd2) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9e87,	// (0x00074dd2) sp_fs_action_menu_list_gene_pane

0xed8a,	// (0x00079cd5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xed8a,	// (0x00079cd5) popup_sp_fs_action_menu_bg_pane

0xa171,	// (0x000750bc) sp_fs_action_menu_list_pane_ParamLimits

0xa171,	// (0x000750bc) sp_fs_action_menu_list_pane

0x7e79,	// (0x00072dc4) sp_fs_scroll_pane_cp01_ParamLimits

0x7e79,	// (0x00072dc4) sp_fs_scroll_pane_cp01

0x7e9f,	// (0x00072dea) list_medium_line_plain_t2_t1

0x7eaf,	// (0x00072dfa) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007ac3a) list_medium_line_plain_t2_t

0x7ebf,	// (0x00072e0a) list_medium_line_plain_t3_t1

0x7ecf,	// (0x00072e1a) list_medium_line_plain_t3_t2

0x7edd,	// (0x00072e28) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007ac3f) list_medium_line_plain_t3_t

0x135d,	// (0x0006c2a8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x2_t2_g2_g1

0x1375,	// (0x0006c2c0) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1375,	// (0x0006c2c0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0007a196) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0007a196) list_medium_line_x2_t2_g2_g

0x2611,	// (0x0006d55c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2611,	// (0x0006d55c) list_medium_line_x2_t2_g2_t1

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t2_g2_t2_ParamLimits

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007ac46) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007ac46) list_medium_line_x2_t2_g2_t

0x135d,	// (0x0006c2a8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x2_t4_g2_g1

0x7eeb,	// (0x00072e36) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7eeb,	// (0x00072e36) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007ac4b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007ac4b) list_medium_line_x2_t4_g2_g

0x7efc,	// (0x00072e47) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7efc,	// (0x00072e47) list_medium_line_x2_t4_g2_t1

0x7f13,	// (0x00072e5e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f13,	// (0x00072e5e) list_medium_line_x2_t4_g2_t2

0x7f28,	// (0x00072e73) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f28,	// (0x00072e73) list_medium_line_x2_t4_g2_t3

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t4_g2_t4_ParamLimits

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007ac50) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007ac50) list_medium_line_x2_t4_g2_t

0x7f3a,	// (0x00072e85) list_medium_line_t3_right_iconx2_g1

0x7d7f,	// (0x00072cca) list_medium_line_t3_right_iconx2_g2

0x7f42,	// (0x00072e8d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007ac59) list_medium_line_t3_right_iconx2_g

0x7f4c,	// (0x00072e97) list_medium_line_t3_right_iconx2_t1

0x7f5c,	// (0x00072ea7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007ac60) list_medium_line_t3_right_iconx2_t

0x135d,	// (0x0006c2a8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x3_t4_g4_g1

0x1369,	// (0x0006c2b4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1369,	// (0x0006c2b4) list_medium_line_x3_t4_g4_g2

0x25f9,	// (0x0006d544) list_medium_line_x3_t4_g4_g3_ParamLimits

0x25f9,	// (0x0006d544) list_medium_line_x3_t4_g4_g3

0x7f6a,	// (0x00072eb5) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f6a,	// (0x00072eb5) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007ac65) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007ac65) list_medium_line_x3_t4_g4_g

0x7f76,	// (0x00072ec1) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f76,	// (0x00072ec1) list_medium_line_x3_t4_g4_t1

0x7f8d,	// (0x00072ed8) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f8d,	// (0x00072ed8) list_medium_line_x3_t4_g4_t2

0x2626,	// (0x0006d571) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2626,	// (0x0006d571) list_medium_line_x3_t4_g4_t3

0x7fa8,	// (0x00072ef3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7fa8,	// (0x00072ef3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007ac6e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007ac6e) list_medium_line_x3_t4_g4_t

0x7fc5,	// (0x00072f10) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fc5,	// (0x00072f10) list_single_dyc_row_text_pane_t1

0x800e,	// (0x00072f59) list_single_dyc_row_text_pane_t2_ParamLimits

0x800e,	// (0x00072f59) list_single_dyc_row_text_pane_t2

0xa191,	// (0x000750dc) list_single_dyc_row_text_pane_t3_ParamLimits

0xa191,	// (0x000750dc) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007ac77) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007ac77) list_single_dyc_row_text_pane_t

0xa1b5,	// (0x00075100) list_single_dyc_row_pane_g1_ParamLimits

0xa1b5,	// (0x00075100) list_single_dyc_row_pane_g1

0xa1c1,	// (0x0007510c) list_single_dyc_row_pane_g2_ParamLimits

0xa1c1,	// (0x0007510c) list_single_dyc_row_pane_g2

0xa1cd,	// (0x00075118) list_single_dyc_row_pane_g3_ParamLimits

0xa1cd,	// (0x00075118) list_single_dyc_row_pane_g3

0xa1d9,	// (0x00075124) list_single_dyc_row_pane_g4_ParamLimits

0xa1d9,	// (0x00075124) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007ac84) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007ac84) list_single_dyc_row_pane_g

0xa1e5,	// (0x00075130) list_single_dyc_row_text_pane_ParamLimits

0xa1e5,	// (0x00075130) list_single_dyc_row_text_pane

0x9522,	// (0x0007446d) bg_sp_fs_scroll_pane

0xed98,	// (0x00079ce3) thumb_sp_fs_scroll_pane

0x6696,	// (0x000715e1) list_medium_line_g1_ParamLimits

0x6696,	// (0x000715e1) list_medium_line_g1

0x8143,	// (0x0007308e) list_medium_line_t1_ParamLimits

0x8143,	// (0x0007308e) list_medium_line_t1

0x135d,	// (0x0006c2a8) list_medium_line_x2_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x2_g1

0x1369,	// (0x0006c2b4) list_medium_line_x2_g2_ParamLimits

0x1369,	// (0x0006c2b4) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007ac8d) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007ac8d) list_medium_line_x2_g

0xa204,	// (0x0007514f) list_medium_line_x2_t1_ParamLimits

0xa204,	// (0x0007514f) list_medium_line_x2_t1

0x135d,	// (0x0006c2a8) list_medium_line_x3_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x3_g1

0x1369,	// (0x0006c2b4) list_medium_line_x3_g2_ParamLimits

0x1369,	// (0x0006c2b4) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007ac8d) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007ac8d) list_medium_line_x3_g

0xa204,	// (0x0007514f) list_medium_line_x3_t1_ParamLimits

0xa204,	// (0x0007514f) list_medium_line_x3_t1

0xeda1,	// (0x00079cec) thumb_sp_fs_scroll_pane_g1

0xedaa,	// (0x00079cf5) thumb_sp_fs_scroll_pane_g2

0xedb3,	// (0x00079cfe) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007ac92) thumb_sp_fs_scroll_pane_g

0xeda1,	// (0x00079cec) bg_sp_fs_scroll_pane_g1

0xedaa,	// (0x00079cf5) bg_sp_fs_scroll_pane_g2

0xedb3,	// (0x00079cfe) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007ac92) bg_sp_fs_scroll_pane_g

0x135d,	// (0x0006c2a8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x135d,	// (0x0006c2a8) list_medium_line_x2_t3_g4_g1

0x1404,	// (0x0006c34f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1404,	// (0x0006c34f) list_medium_line_x2_t3_g4_g2

0x1369,	// (0x0006c2b4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1369,	// (0x0006c2b4) list_medium_line_x2_t3_g4_g3

0x1375,	// (0x0006c2c0) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1375,	// (0x0006c2c0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0007a212) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0007a212) list_medium_line_x2_t3_g4_g

0x8158,	// (0x000730a3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8158,	// (0x000730a3) list_medium_line_x2_t3_g4_t1

0x8172,	// (0x000730bd) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8172,	// (0x000730bd) list_medium_line_x2_t3_g4_t2

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t3_g4_t3_ParamLimits

0x13aa,	// (0x0006c2f5) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007ac99) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007ac99) list_medium_line_x2_t3_g4_t

0x6696,	// (0x000715e1) list_medium_line_g2_g1_ParamLimits

0x6696,	// (0x000715e1) list_medium_line_g2_g1

0x66a2,	// (0x000715ed) list_medium_line_g2_g2_ParamLimits

0x66a2,	// (0x000715ed) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007a94b) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007a94b) list_medium_line_g2_g

0x818c,	// (0x000730d7) list_medium_line_g2_t1_ParamLimits

0x818c,	// (0x000730d7) list_medium_line_g2_t1

0x6696,	// (0x000715e1) list_medium_line_t3_g2_g1_ParamLimits

0x6696,	// (0x000715e1) list_medium_line_t3_g2_g1

0x66a2,	// (0x000715ed) list_medium_line_t3_g2_g2_ParamLimits

0x66a2,	// (0x000715ed) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007a94b) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007a94b) list_medium_line_t3_g2_g

0x81a1,	// (0x000730ec) list_medium_line_t3_g2_t1_ParamLimits

0x81a1,	// (0x000730ec) list_medium_line_t3_g2_t1

0x81b8,	// (0x00073103) list_medium_line_t3_g2_t2_ParamLimits

0x81b8,	// (0x00073103) list_medium_line_t3_g2_t2

0x81cd,	// (0x00073118) list_medium_line_t3_g2_t3_ParamLimits

0x81cd,	// (0x00073118) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007aca0) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007aca0) list_medium_line_t3_g2_t

0x7d7f,	// (0x00072cca) list_medium_line_right_icon_g1

0x81e6,	// (0x00073131) list_medium_line_right_icon_t1

0x6696,	// (0x000715e1) list_medium_line_t2_g1_ParamLimits

0x6696,	// (0x000715e1) list_medium_line_t2_g1

0x81f4,	// (0x0007313f) list_medium_line_t2_t1_ParamLimits

0x81f4,	// (0x0007313f) list_medium_line_t2_t1

0x820e,	// (0x00073159) list_medium_line_t2_t2_ParamLimits

0x820e,	// (0x00073159) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007aca7) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007aca7) list_medium_line_t2_t

0x6696,	// (0x000715e1) list_medium_line_t3_g1_ParamLimits

0x6696,	// (0x000715e1) list_medium_line_t3_g1

0x8227,	// (0x00073172) list_medium_line_t3_t1_ParamLimits

0x8227,	// (0x00073172) list_medium_line_t3_t1

0x823e,	// (0x00073189) list_medium_line_t3_t2_ParamLimits

0x823e,	// (0x00073189) list_medium_line_t3_t2

0x8253,	// (0x0007319e) list_medium_line_t3_t3_ParamLimits

0x8253,	// (0x0007319e) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007acac) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007acac) list_medium_line_t3_t

0x6696,	// (0x000715e1) list_medium_line_g3_g1_ParamLimits

0x6696,	// (0x000715e1) list_medium_line_g3_g1

0x8265,	// (0x000731b0) list_medium_line_g3_g2_ParamLimits

0x8265,	// (0x000731b0) list_medium_line_g3_g2

0x66a2,	// (0x000715ed) list_medium_line_g3_g3_ParamLimits

0x66a2,	// (0x000715ed) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007acb3) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007acb3) list_medium_line_g3_g

0x8271,	// (0x000731bc) list_medium_line_g3_t1_ParamLimits

0x8271,	// (0x000731bc) list_medium_line_g3_t1

0x6696,	// (0x000715e1) list_medium_line_t2_g3_g1_ParamLimits

0x6696,	// (0x000715e1) list_medium_line_t2_g3_g1

0x8265,	// (0x000731b0) list_medium_line_t2_g3_g2_ParamLimits

0x8265,	// (0x000731b0) list_medium_line_t2_g3_g2

0x66a2,	// (0x000715ed) list_medium_line_t2_g3_g3_ParamLimits

0x66a2,	// (0x000715ed) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007acb3) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007acb3) list_medium_line_t2_g3_g

0x8286,	// (0x000731d1) list_medium_line_t2_g3_t1_ParamLimits

0x8286,	// (0x000731d1) list_medium_line_t2_g3_t1

0x82a0,	// (0x000731eb) list_medium_line_t2_g3_t2_ParamLimits

0x82a0,	// (0x000731eb) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007acba) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007acba) list_medium_line_t2_g3_t

0x6696,	// (0x000715e1) list_medium_line_t3_g3_g1_ParamLimits

0x6696,	// (0x000715e1) list_medium_line_t3_g3_g1

0x8265,	// (0x000731b0) list_medium_line_t3_g3_g2_ParamLimits

0x8265,	// (0x000731b0) list_medium_line_t3_g3_g2

0x66a2,	// (0x000715ed) list_medium_line_t3_g3_g3_ParamLimits

0x66a2,	// (0x000715ed) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007acb3) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007acb3) list_medium_line_t3_g3_g

0x82bb,	// (0x00073206) list_medium_line_t3_g3_t1_ParamLimits

0x82bb,	// (0x00073206) list_medium_line_t3_g3_t1

0x82cf,	// (0x0007321a) list_medium_line_t3_g3_t2_ParamLimits

0x82cf,	// (0x0007321a) list_medium_line_t3_g3_t2

0x82e1,	// (0x0007322c) list_medium_line_t3_g3_t3_ParamLimits

0x82e1,	// (0x0007322c) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007acbf) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007acbf) list_medium_line_t3_g3_t

0x7f3a,	// (0x00072e85) list_medium_line_right_iconx2_g1

0x7d7f,	// (0x00072cca) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007acc6) list_medium_line_right_iconx2_g

0x82f5,	// (0x00073240) list_medium_line_right_iconx2_t1

0x7f3a,	// (0x00072e85) list_medium_line_t2_right_iconx2_g1

0x7d7f,	// (0x00072cca) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007acc6) list_medium_line_t2_right_iconx2_g

0x8303,	// (0x0007324e) list_medium_line_t2_right_iconx2_t1

0x8313,	// (0x0007325e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007accb) list_medium_line_t2_right_iconx2_t

0x8325,	// (0x00073270) list_medium_line_x4_t4_t1

0x8333,	// (0x0007327e) list_medium_line_x4_t4_t2

0x8343,	// (0x0007328e) list_medium_line_x4_t4_t3

0x8353,	// (0x0007329e) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007acd0) list_medium_line_x4_t4_t

0x83a6,	// (0x000732f1) tport_appsw_pane_ParamLimits

0x83a6,	// (0x000732f1) tport_appsw_pane

0x83be,	// (0x00073309) tport_contact_pane_ParamLimits

0x83be,	// (0x00073309) tport_contact_pane

0x83d6,	// (0x00073321) tport_listscroll_pane_ParamLimits

0x83d6,	// (0x00073321) tport_listscroll_pane

0x83f0,	// (0x0007333b) cell_tport_appsw_pane_ParamLimits

0x83f0,	// (0x0007333b) cell_tport_appsw_pane

0xdcb3,	// (0x00078bfe) tport_appsw_pane_g1_ParamLimits

0xdcb3,	// (0x00078bfe) tport_appsw_pane_g1

0xedbc,	// (0x00079d07) tport_contact_pane_g1

0xe776,	// (0x000796c1) tport_contact_pane_t1

0xedc5,	// (0x00079d10) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007acd9) tport_contact_pane_t

0xedd3,	// (0x00079d1e) list_tport_pane

0xeddc,	// (0x00079d27) scroll_pane_cp_030

0x8438,	// (0x00073383) cell_tport_appsw_pane_g1

0x8448,	// (0x00073393) cell_tport_appsw_pane_t1

0x8456,	// (0x000733a1) grid_highlight_pane_cp019

0x845e,	// (0x000733a9) list_tport_double_graphic_pane_ParamLimits

0x845e,	// (0x000733a9) list_tport_double_graphic_pane

0xb26c,	// (0x000761b7) list_highlight_pane_cp023_ParamLimits

0xb26c,	// (0x000761b7) list_highlight_pane_cp023

0x846b,	// (0x000733b6) list_tport_double_graphic_pane_g1_ParamLimits

0x846b,	// (0x000733b6) list_tport_double_graphic_pane_g1

0x8478,	// (0x000733c3) list_tport_double_graphic_pane_t1_ParamLimits

0x8478,	// (0x000733c3) list_tport_double_graphic_pane_t1

0x848d,	// (0x000733d8) list_tport_double_graphic_pane_t2_ParamLimits

0x848d,	// (0x000733d8) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007ace5) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007ace5) list_tport_double_graphic_pane_t

0x9522,	// (0x0007446d) main_cale_note_pane

0x5e3a,	// (0x00070d85) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e3a,	// (0x00070d85) cell_vitu2_function_top_wide_pane_cp01

0x78c5,	// (0x00072810) wait_bar_pane_cp05_ParamLimits

0xb26c,	// (0x000761b7) listscroll_cmail_pane

0xede5,	// (0x00079d30) list_cmail_pane

0xdd0b,	// (0x00078c56) list_cmail_body_pane

0x849f,	// (0x000733ea) list_single_cmail_header_caption_pane

0x84b6,	// (0x00073401) list_single_cmail_header_detail_pane_ParamLimits

0x84b6,	// (0x00073401) list_single_cmail_header_detail_pane

0xedf5,	// (0x00079d40) list_single_cmail_header_caption_pane_t1

0x84eb,	// (0x00073436) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84eb,	// (0x00073436) list_single_cmail_header_detail_pane_g1

0xa21a,	// (0x00075165) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa21a,	// (0x00075165) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007acea) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007acea) list_single_cmail_header_detail_pane_g

0x8503,	// (0x0007344e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8503,	// (0x0007344e) list_single_cmail_header_detail_pane_t1

0x8541,	// (0x0007348c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8541,	// (0x0007348c) list_single_cmail_header_editor_pane_bg

0xe917,	// (0x00079862) list_cmail_body_pane_g1

0xee10,	// (0x00079d5b) list_cmail_body_pane_t1

0xdcd3,	// (0x00078c1e) list_single_cmail_header_editor_pane_bg_g1

0xb1ce,	// (0x00076119) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdce3,	// (0x00078c2e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdcdb,	// (0x00078c26) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdef7,	// (0x00078e42) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdd03,	// (0x00078c4e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdcf3,	// (0x00078c3e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdcfb,	// (0x00078c46) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb1ae,	// (0x000760f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x855a,	// (0x000734a5) calenote_gesture_pane_ParamLimits

0x855a,	// (0x000734a5) calenote_gesture_pane

0x857a,	// (0x000734c5) calenote_window_pane_ParamLimits

0x857a,	// (0x000734c5) calenote_window_pane

0xee1e,	// (0x00079d69) popup_note_window_cp01

0x8596,	// (0x000734e1) calenote_swipe_1_pane_ParamLimits

0x8596,	// (0x000734e1) calenote_swipe_1_pane

0x7d21,	// (0x00072c6c) calenote_swipe_2_pane_ParamLimits

0x7d21,	// (0x00072c6c) calenote_swipe_2_pane

0xec5d,	// (0x00079ba8) calenote_swipe_1_pane_g1_ParamLimits

0xec5d,	// (0x00079ba8) calenote_swipe_1_pane_g1

0xec6a,	// (0x00079bb5) calenote_swipe_1_pane_g2_ParamLimits

0xec6a,	// (0x00079bb5) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007ac0e) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007ac0e) calenote_swipe_1_pane_g

0xee30,	// (0x00079d7b) calenote_swipe_1_pane_t1_ParamLimits

0xee30,	// (0x00079d7b) calenote_swipe_1_pane_t1

0xec5d,	// (0x00079ba8) calenote_swipe_2_pane_g1_ParamLimits

0xec5d,	// (0x00079ba8) calenote_swipe_2_pane_g1

0xee5d,	// (0x00079da8) calenote_swipe_2_pane_g2_ParamLimits

0xee5d,	// (0x00079da8) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007acf6) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007acf6) calenote_swipe_2_pane_g

0xee69,	// (0x00079db4) calenote_swipe_2_pane_t1_ParamLimits

0xee69,	// (0x00079db4) calenote_swipe_2_pane_t1

0x9522,	// (0x0007446d) main_mup_navstr_pane

0x4b15,	// (0x0006fa60) main_mup3_pane_t7_ParamLimits

0x4b15,	// (0x0006fa60) main_mup3_pane_t7

0x9987,	// (0x000748d2) main_mp4_pane_g6_ParamLimits

0x9987,	// (0x000748d2) main_mp4_pane_g6

0x9b2b,	// (0x00074a76) main_image3_pane_t4_ParamLimits

0x9b2b,	// (0x00074a76) main_image3_pane_t4

0x85ab,	// (0x000734f6) popup_navstr_preview_pane_ParamLimits

0x85ab,	// (0x000734f6) popup_navstr_preview_pane

0x85bf,	// (0x0007350a) scroll_navstr_pane_ParamLimits

0x85bf,	// (0x0007350a) scroll_navstr_pane

0x9522,	// (0x0007446d) bg_popup_preview_window_pane_cp04

0xee90,	// (0x00079ddb) popup_navstr_preview_pane_t1

0x85d3,	// (0x0007351e) scroll_navstr_pane_g1_ParamLimits

0x85d3,	// (0x0007351e) scroll_navstr_pane_g1

0x85e7,	// (0x00073532) scroll_navstr_pane_t1_ParamLimits

0x85e7,	// (0x00073532) scroll_navstr_pane_t1

0xee27,	// (0x00079d72) bg_button_pane_cp014

0xee27,	// (0x00079d72) bg_button_pane_cp030

0x7bbf,	// (0x00072b0a) list_double_fisheye_pane_g4_ParamLimits

0x7bbf,	// (0x00072b0a) list_double_fisheye_pane_g4

0x7bcb,	// (0x00072b16) list_double_fisheye_pane_g5_ParamLimits

0x7bcb,	// (0x00072b16) list_double_fisheye_pane_g5

0xc6b5,	// (0x00077600) sp_fs_scroll_pane_cp03

0xed35,	// (0x00079c80) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xed41,	// (0x00079c8c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007ac2b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xed4d,	// (0x00079c98) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xeded,	// (0x00079d38) sp_fs_scroll_pane_cp02

0xaebb,	// (0x00075e06) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaebb,	// (0x00075e06) popup_sp_fs_calendar_preview_list_single_pane

0x9522,	// (0x0007446d) main_cam6_pano_pane

0x959a,	// (0x000744e5) main_mup3_pane_ParamLimits

0x9522,	// (0x0007446d) main_phacti_pane

0x7798,	// (0x000726e3) bg_button_pane_cp11

0x77b2,	// (0x000726fd) main_mobtv_info_pane_g2_ParamLimits

0x77b2,	// (0x000726fd) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007ab8b) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007ab8b) main_mobtv_info_pane_g

0x798f,	// (0x000728da) sc_clock_pane_t5_ParamLimits

0x798f,	// (0x000728da) sc_clock_pane_t5

0x7a21,	// (0x0007296c) main_radioblah_pane_g1_ParamLimits

0xeba9,	// (0x00079af4) main_radioblah_pane_t3_ParamLimits

0xeba9,	// (0x00079af4) main_radioblah_pane_t3

0xebc1,	// (0x00079b0c) main_radioblah_pane_t4_ParamLimits

0xebc1,	// (0x00079b0c) main_radioblah_pane_t4

0x7a49,	// (0x00072994) main_radioblah_text_pane_ParamLimits

0x7a49,	// (0x00072994) main_radioblah_text_pane

0x7a5b,	// (0x000729a6) main_radioblah_info_pane_g1_ParamLimits

0x7af4,	// (0x00072a3f) main_radioblah_info_pane_t4_ParamLimits

0x7af4,	// (0x00072a3f) main_radioblah_info_pane_t4

0xb26c,	// (0x000761b7) main_sp_fs_calendar_pane

0x85fe,	// (0x00073549) main_phacti_pane_g1

0x8606,	// (0x00073551) phacti_note_pane_ParamLimits

0x8606,	// (0x00073551) phacti_note_pane

0xeea7,	// (0x00079df2) phacti_term_pane_ParamLimits

0xeea7,	// (0x00079df2) phacti_term_pane

0xeebc,	// (0x00079e07) phacti_note_pane_t1_ParamLimits

0xeebc,	// (0x00079e07) phacti_note_pane_t1

0xa24a,	// (0x00075195) phacti_term_pane_g1

0xa252,	// (0x0007519d) phacti_term_pane_t1_ParamLimits

0xa252,	// (0x0007519d) phacti_term_pane_t1

0xeed3,	// (0x00079e1e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xafcf,	// (0x00075f1a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007ad00) popup_sp_fs_calendar_preview_list_single_pane_g

0xeedb,	// (0x00079e26) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xeedb,	// (0x00079e26) popup_sp_fs_calendar_preview_list_single_pane_t1

0xeef0,	// (0x00079e3b) aid_popup_sp_fs_bg_corner_pane

0xd255,	// (0x000781a0) popup_sp_fs_calendar_preview_bg_pane_g1

0x9522,	// (0x0007446d) popup_sp_fs_calendar_preview_bg_pane

0xeef8,	// (0x00079e43) popup_sp_fs_calendar_preview_list_pane

0xce4d,	// (0x00077d98) bg_main_sp_fs_cale_pane_ParamLimits

0xce4d,	// (0x00077d98) bg_main_sp_fs_cale_pane

0xa285,	// (0x000751d0) listscroll_cale_mrui_pane_ParamLimits

0xa285,	// (0x000751d0) listscroll_cale_mrui_pane

0xa29a,	// (0x000751e5) listscroll_sp_fs_schedule_track_pane

0xa2a3,	// (0x000751ee) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa2a3,	// (0x000751ee) main_sp_fs_ctrlbar_pane_cp01

0xef00,	// (0x00079e4b) main_sp_fs_ribbon_pane

0xa2b6,	// (0x00075201) popup_sp_fs_cale_preview_window

0x867b,	// (0x000735c6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x867b,	// (0x000735c6) list_single_sp_fs_schedule_track_pane

0xb26c,	// (0x000761b7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb26c,	// (0x000761b7) bg_sp_fs_highlight_list_pane_cp03

0x868f,	// (0x000735da) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x868f,	// (0x000735da) list_single_sp_fs_schedule_track_pane_g1

0x869b,	// (0x000735e6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x869b,	// (0x000735e6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007ad05) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007ad05) list_single_sp_fs_schedule_track_pane_g

0x86a7,	// (0x000735f2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x86a7,	// (0x000735f2) list_single_sp_fs_schedule_track_pane_t1

0x86c1,	// (0x0007360c) sp_fs_schedule_track_pane_ParamLimits

0x86c1,	// (0x0007360c) sp_fs_schedule_track_pane

0xef08,	// (0x00079e53) sp_fs_schedule_track_pane_g1

0xef10,	// (0x00079e5b) sp_fs_schedule_track_pane_g2

0xef18,	// (0x00079e63) sp_fs_schedule_track_pane_g3

0xef20,	// (0x00079e6b) sp_fs_schedule_track_pane_g4

0xef28,	// (0x00079e73) sp_fs_schedule_track_pane_g5

0x0004,

0x0007,	// (0x0006af52) sp_fs_schedule_track_pane_g

0xdcd3,	// (0x00078c1e) bg_sp_fs_schedule_viewer_highlight_g1

0xb1ce,	// (0x00076119) bg_sp_fs_schedule_viewer_highlight_g2

0xdcdb,	// (0x00078c26) bg_sp_fs_schedule_viewer_highlight_g3

0xdce3,	// (0x00078c2e) bg_sp_fs_schedule_viewer_highlight_g4

0xdef7,	// (0x00078e42) bg_sp_fs_schedule_viewer_highlight_g5

0xdcf3,	// (0x00078c3e) bg_sp_fs_schedule_viewer_highlight_g6

0xdcfb,	// (0x00078c46) bg_sp_fs_schedule_viewer_highlight_g7

0xdd03,	// (0x00078c4e) bg_sp_fs_schedule_viewer_highlight_g8

0xb1ae,	// (0x000760f9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdbf,	// (0x0007ad0a) bg_sp_fs_schedule_viewer_highlight_g

0x9522,	// (0x0007446d) bg_main_sp_fs_ribbon_pane

0x86d2,	// (0x0007361d) main_sp_fs_ribbon_pane_g1

0xef30,	// (0x00079e7b) main_sp_fs_ribbon_pane_t1

0x86db,	// (0x00073626) main_sp_fs_ribbon_pane_t2

0xef3f,	// (0x00079e8a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd2,	// (0x0007ad1d) main_sp_fs_ribbon_pane_t

0xef4e,	// (0x00079e99) main_sp_fs_ribbon_scheduler_pane

0xef56,	// (0x00079ea1) bg_main_sp_fs_ribbon_pane_g1

0xef5f,	// (0x00079eaa) bg_main_sp_fs_ribbon_pane_g2

0xef68,	// (0x00079eb3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x002c,	// (0x0006af77) bg_main_sp_fs_ribbon_pane_g

0xef70,	// (0x00079ebb) main_sp_fs_ribbon_scheduler_pane_g1

0xef79,	// (0x00079ec4) main_sp_fs_ribbon_scheduler_pane_g2

0xef82,	// (0x00079ecd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0033,	// (0x0006af7e) main_sp_fs_ribbon_scheduler_pane_g

0xef8b,	// (0x00079ed6) list_cale_mrui_pane

0x86ea,	// (0x00073635) sp_fs_scroll_pane_cp07_ParamLimits

0x86ea,	// (0x00073635) sp_fs_scroll_pane_cp07

0x8706,	// (0x00073651) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8706,	// (0x00073651) bg_sp_fs_schedule_viewer_highlight

0xef98,	// (0x00079ee3) list_single_sp_fs_schedule_track_pane_cp01

0xefa0,	// (0x00079eeb) list_sp_fs_schedule_track_pane

0xefa8,	// (0x00079ef3) sp_fs_scroll_pane_cp06_ParamLimits

0xefa8,	// (0x00079ef3) sp_fs_scroll_pane_cp06

0xd255,	// (0x000781a0) bgmain_sp_fs_calendar_pane_g1

0x8716,	// (0x00073661) list_single_cale_mrui_pane_ParamLimits

0x8716,	// (0x00073661) list_single_cale_mrui_pane

0xa2c8,	// (0x00075213) list_single_cale_mrui_row_pane_ParamLimits

0xa2c8,	// (0x00075213) list_single_cale_mrui_row_pane

0xa2d5,	// (0x00075220) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa2d5,	// (0x00075220) list_single_cale_mrui_row_pane_g1

0xa30d,	// (0x00075258) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa30d,	// (0x00075258) list_single_cale_mrui_row_pane_t1

0x8737,	// (0x00073682) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8737,	// (0x00073682) list_single_cale_mrui_row_pane_t2

0xa31f,	// (0x0007526a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa31f,	// (0x0007526a) list_single_cale_mrui_row_pane_t3

0xa34e,	// (0x00075299) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa34e,	// (0x00075299) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde0,	// (0x0007ad2b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde0,	// (0x0007ad2b) list_single_cale_mrui_row_pane_t

0x879f,	// (0x000736ea) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x879f,	// (0x000736ea) list_single_cmail_header_editor_pane_bg_cp01

0x87c5,	// (0x00073710) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x87c5,	// (0x00073710) list_single_cmail_header_editor_pane_bg_cp02

0x87e5,	// (0x00073730) main_radioblah_text_pane_t1_ParamLimits

0x87e5,	// (0x00073730) main_radioblah_text_pane_t1

0xefc7,	// (0x00079f12) cam6_indi_pane_cp01

0xefcf,	// (0x00079f1a) cam6_mode_pane_cp01

0xefd7,	// (0x00079f22) cam6_pano_pane

0xefe0,	// (0x00079f2b) cam6_zoom_pane_cp01

0xefe8,	// (0x00079f33) cam6_pano_image_pane

0xeff3,	// (0x00079f3e) cam6_pano_pane_g1

0xe917,	// (0x00079862) cam6_pano_pane_g2

0xeffc,	// (0x00079f47) cam6_pano_pane_g3

0xf005,	// (0x00079f50) cam6_pano_pane_g4

0xd821,	// (0x0007876c) cam6_pano_pane_g5

0xf00e,	// (0x00079f59) cam6_pano_pane_g6

0xf018,	// (0x00079f63) cam6_pano_pane_g7

0xf020,	// (0x00079f6b) cam6_pano_pane_g8

0xf029,	// (0x00079f74) cam6_pano_pane_g9

0x0008,

0xfde9,	// (0x0007ad34) cam6_pano_pane_g

0x9522,	// (0x0007446d) main_browser_tag_pane

0xee88,	// (0x00079dd3) grid_navstr_albumart_pane

0xf034,	// (0x00079f7f) cell_navstr_albumart_pane_ParamLimits

0xf034,	// (0x00079f7f) cell_navstr_albumart_pane

0xf054,	// (0x00079f9f) cell_navstr_albumart_pane_g1

0xcc5e,	// (0x00077ba9) cell_navstr_albumart_pane_g2

0xcc6e,	// (0x00077bb9) cell_navstr_albumart_pane_g3

0xcc66,	// (0x00077bb1) cell_navstr_albumart_pane_g4

0x0003,

0xfdfc,	// (0x0007ad47) cell_navstr_albumart_pane_g

0x87ff,	// (0x0007374a) bt_list_pane_ParamLimits

0x87ff,	// (0x0007374a) bt_list_pane

0x8813,	// (0x0007375e) bt_list_pane_t1

0x8822,	// (0x0007376d) bt_list_pane_t2

0x0001,

0xfe05,	// (0x0007ad50) bt_list_pane_t

0x9522,	// (0x0007446d) main_cale_prevew_pane

0x8831,	// (0x0007377c) popup_cale_preview_window_ParamLimits

0x8831,	// (0x0007377c) popup_cale_preview_window

0xb26c,	// (0x000761b7) bg_popup_preview_window_pane_cp05_ParamLimits

0xb26c,	// (0x000761b7) bg_popup_preview_window_pane_cp05

0xf05c,	// (0x00079fa7) list_cale_preview_pane_ParamLimits

0xf05c,	// (0x00079fa7) list_cale_preview_pane

0x884c,	// (0x00073797) list_double_cale_preview_pane_ParamLimits

0x884c,	// (0x00073797) list_double_cale_preview_pane

0x885e,	// (0x000737a9) list_single_cale_preview_pane_ParamLimits

0x885e,	// (0x000737a9) list_single_cale_preview_pane

0x8874,	// (0x000737bf) list_single_cale_preview_pane_g1

0x887c,	// (0x000737c7) list_single_cale_preview_pane_t1_ParamLimits

0x887c,	// (0x000737c7) list_single_cale_preview_pane_t1

0x8891,	// (0x000737dc) list_double_cale_preview_pane_g1

0x8899,	// (0x000737e4) list_double_cale_preview_pane_t1_ParamLimits

0x8899,	// (0x000737e4) list_double_cale_preview_pane_t1

0x88ae,	// (0x000737f9) list_double_cale_preview_pane_t2_ParamLimits

0x88ae,	// (0x000737f9) list_double_cale_preview_pane_t2

0x0001,

0xfe0a,	// (0x0007ad55) list_double_cale_preview_pane_t_ParamLimits

0xfe0a,	// (0x0007ad55) list_double_cale_preview_pane_t

0x9522,	// (0x0007446d) main_ezdial_pane

0xb26c,	// (0x000761b7) main_sp_fs_email_pane_ParamLimits

0x7da9,	// (0x00072cf4) cmail_ddmenu_btn01_pane_ParamLimits

0x7da9,	// (0x00072cf4) cmail_ddmenu_btn01_pane

0x7dbc,	// (0x00072d07) cmail_ddmenu_btn02_pane_ParamLimits

0x7dbc,	// (0x00072d07) cmail_ddmenu_btn02_pane

0x7ddf,	// (0x00072d2a) cmail_ddmenu_btn03_pane_ParamLimits

0x7ddf,	// (0x00072d2a) cmail_ddmenu_btn03_pane

0x7e05,	// (0x00072d50) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e29,	// (0x00072d74) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdd0b,	// (0x00078c56) list_cmail_body_pane_ParamLimits

0x84e0,	// (0x0007342b) bg_button_pane_cp12

0xee03,	// (0x00079d4e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xee03,	// (0x00079d4e) list_single_cmail_header_detail_pane_g3

0xa226,	// (0x00075171) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa226,	// (0x00075171) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007acf1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007acf1) list_single_cmail_header_detail_pane_t

0xa267,	// (0x000751b2) phacti_term_pane_t2_ParamLimits

0xa267,	// (0x000751b2) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007acfb) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007acfb) phacti_term_pane_t

0xf068,	// (0x00079fb3) aid_size_list_single_double

0x88c6,	// (0x00073811) popup_ezdial_listscroll_window

0x88e2,	// (0x0007382d) popup_number_entry_window_cp01

0xba44,	// (0x0007698f) bg_popup_call_pane_cp09

0xf074,	// (0x00079fbf) ezdial_list_pane

0xf07c,	// (0x00079fc7) scroll_pane_cp23

0xce4d,	// (0x00077d98) bg_button_pane_cp028_ParamLimits

0xce4d,	// (0x00077d98) bg_button_pane_cp028

0x88f0,	// (0x0007383b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88f0,	// (0x0007383b) cmail_ddmenu_btn01_pane_g1

0x88fc,	// (0x00073847) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88fc,	// (0x00073847) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe0f,	// (0x0007ad5a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe0f,	// (0x0007ad5a) cmail_ddmenu_btn01_pane_g

0xf084,	// (0x00079fcf) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xf084,	// (0x00079fcf) cmail_ddmenu_btn01_pane_t1

0xce4d,	// (0x00077d98) bg_button_pane_cp029_ParamLimits

0xce4d,	// (0x00077d98) bg_button_pane_cp029

0x8910,	// (0x0007385b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8910,	// (0x0007385b) cmail_ddmenu_btn02_pane_g1

0x8928,	// (0x00073873) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8928,	// (0x00073873) cmail_ddmenu_btn02_pane_t1

0xb26c,	// (0x000761b7) bg_button_pane_cp031_ParamLimits

0xb26c,	// (0x000761b7) bg_button_pane_cp031

0x8910,	// (0x0007385b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8910,	// (0x0007385b) cmail_ddmenu_btn03_pane_g1

0x8928,	// (0x00073873) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8928,	// (0x00073873) cmail_ddmenu_btn03_pane_t1

0x56be,	// (0x00070609) cell_dialer2_keypad_pane_t1_ParamLimits

0x56d8,	// (0x00070623) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x56d8,	// (0x00070623) cell_dialer2_keypad_pane_t1_copy1

0x75f1,	// (0x0007253c) ncimui_group_button_pane

0xb26c,	// (0x000761b7) main_sp_fs_calendar_pane_ParamLimits

0x849f,	// (0x000733ea) list_single_cmail_header_caption_pane_ParamLimits

0xa27c,	// (0x000751c7) aid_recal_txt_sm_pane

0x9522,	// (0x0007446d) mian_recal_day_pane

0xa2b6,	// (0x00075201) popup_sp_fs_cale_preview_window_ParamLimits

0xf09a,	// (0x00079fe5) list_recal_day_pane

0xa398,	// (0x000752e3) list_single_recal_day_pane_ParamLimits

0xa398,	// (0x000752e3) list_single_recal_day_pane

0xf0c1,	// (0x0007a00c) list_single_recal_day_pane_g1_ParamLimits

0xf0c1,	// (0x0007a00c) list_single_recal_day_pane_g1

0xa3aa,	// (0x000752f5) list_single_recal_day_pane_g2_ParamLimits

0xa3aa,	// (0x000752f5) list_single_recal_day_pane_g2

0xa3ba,	// (0x00075305) list_single_recal_day_pane_g3_ParamLimits

0xa3ba,	// (0x00075305) list_single_recal_day_pane_g3

0x894c,	// (0x00073897) list_single_recal_day_pane_g4_ParamLimits

0x894c,	// (0x00073897) list_single_recal_day_pane_g4

0xa3c6,	// (0x00075311) list_single_recal_day_pane_g5_ParamLimits

0xa3c6,	// (0x00075311) list_single_recal_day_pane_g5

0xb27a,	// (0x000761c5) list_single_recal_day_pane_g6_ParamLimits

0xb27a,	// (0x000761c5) list_single_recal_day_pane_g6

0x0004,

0xfe1e,	// (0x0007ad69) list_single_recal_day_pane_g_ParamLimits

0xfe1e,	// (0x0007ad69) list_single_recal_day_pane_g

0xb28e,	// (0x000761d9) list_single_recal_day_pane_t1

0xb2a0,	// (0x000761eb) list_single_recal_day_pane_t2

0x0001,

0xfe29,	// (0x0007ad74) list_single_recal_day_pane_t

0x896c,	// (0x000738b7) ncimui_query_button_pane_ParamLimits

0x896c,	// (0x000738b7) ncimui_query_button_pane

0x897c,	// (0x000738c7) ncimui_query_button_pane_t1_ParamLimits

0x897c,	// (0x000738c7) ncimui_query_button_pane_t1

0x9ea6,	// (0x00074df1) ncimui_query_button_pane_t2_ParamLimits

0x9ea6,	// (0x00074df1) ncimui_query_button_pane_t2

0x0001,

0xfe2e,	// (0x0007ad79) ncimui_query_button_pane_t_ParamLimits

0xfe2e,	// (0x0007ad79) ncimui_query_button_pane_t

0x898f,	// (0x000738da) query_button_pane_ParamLimits

0x898f,	// (0x000738da) query_button_pane

0x9522,	// (0x0007446d) bg_button_pane_cp0028

0x9eb9,	// (0x00074e04) query_button_pane_t1

0x3774,	// (0x0006e6bf) main_tport_pane_ParamLimits

0x8363,	// (0x000732ae) bg_popup_window_pane_cp01_ParamLimits

0x8363,	// (0x000732ae) bg_popup_window_pane_cp01

0x837e,	// (0x000732c9) heading_pane_cp08_ParamLimits

0x837e,	// (0x000732c9) heading_pane_cp08

0x8391,	// (0x000732dc) heading_pane_cp07_ParamLimits

0x8391,	// (0x000732dc) heading_pane_cp07

0x8438,	// (0x00073383) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007acde) cell_tport_appsw_pane_g

0x970b,	// (0x00074656) input_candi_list_open_g1

0xb3fa,	// (0x00076345) list_cale_time_pane_g6_ParamLimits

0xb3fa,	// (0x00076345) list_cale_time_pane_g6

0x453d,	// (0x0006f488) aid_size_touch_calib_1_ParamLimits

0x453d,	// (0x0006f488) aid_size_touch_calib_1

0x454f,	// (0x0006f49a) aid_size_touch_calib_2_ParamLimits

0x454f,	// (0x0006f49a) aid_size_touch_calib_2

0x4567,	// (0x0006f4b2) aid_size_touch_calib_3_ParamLimits

0x4567,	// (0x0006f4b2) aid_size_touch_calib_3

0x4585,	// (0x0006f4d0) aid_size_touch_calib_4_ParamLimits

0x4585,	// (0x0006f4d0) aid_size_touch_calib_4

0x459d,	// (0x0006f4e8) main_touch_calib_button_group_pane_ParamLimits

0x459d,	// (0x0006f4e8) main_touch_calib_button_group_pane

0x45b5,	// (0x0006f500) main_touch_calib_pane_g1_ParamLimits

0x45c7,	// (0x0006f512) main_touch_calib_pane_g2_ParamLimits

0x45d9,	// (0x0006f524) main_touch_calib_pane_g3_ParamLimits

0x45eb,	// (0x0006f536) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0007a6a1) main_touch_calib_pane_g_ParamLimits

0x45fd,	// (0x0006f548) main_touch_calib_pane_t1_ParamLimits

0x4617,	// (0x0006f562) main_touch_calib_pane_t2_ParamLimits

0x4631,	// (0x0006f57c) main_touch_calib_pane_t3_ParamLimits

0x4645,	// (0x0006f590) main_touch_calib_pane_t4_ParamLimits

0x4659,	// (0x0006f5a4) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0007a6aa) main_touch_calib_pane_t_ParamLimits

0xd5e1,	// (0x0007852c) list_single_fp_cale_pane_g3_ParamLimits

0xd5e1,	// (0x0007852c) list_single_fp_cale_pane_g3

0x959a,	// (0x000744e5) bg_button_pane_cp012_ParamLimits

0x959a,	// (0x000744e5) bg_vkb2_func_pane_cp03_ParamLimits

0x664c,	// (0x00071597) cell_vitu2_function_top_pane_g1_ParamLimits

0x959a,	// (0x000744e5) bg_vkb2_func_pane_cp04_ParamLimits

0x757f,	// (0x000724ca) main_ncimui_button_group_pane_ParamLimits

0x757f,	// (0x000724ca) main_ncimui_button_group_pane

0x75df,	// (0x0007252a) main_ncimui_pane_t3_ParamLimits

0x75df,	// (0x0007252a) main_ncimui_pane_t3

0xee9e,	// (0x00079de9) phacti_button_group_pane

0xf068,	// (0x00079fb3) aid_size_list_single_double_ParamLimits

0x88c6,	// (0x00073811) popup_ezdial_listscroll_window_ParamLimits

0x88e2,	// (0x0007382d) popup_number_entry_window_cp01_ParamLimits

0x89a2,	// (0x000738ed) phacti_button_pane_ParamLimits

0x89a2,	// (0x000738ed) phacti_button_pane

0x9522,	// (0x0007446d) bg_button_pane_cp14

0x9ec7,	// (0x00074e12) phacti_button_pane_t1

0x89b3,	// (0x000738fe) main_touch_calib_button_pane_ParamLimits

0x89b3,	// (0x000738fe) main_touch_calib_button_pane

0xadb7,	// (0x00075d02) bg_button_pane_cp18_ParamLimits

0xadb7,	// (0x00075d02) bg_button_pane_cp18

0x9ed5,	// (0x00074e20) main_touch_calib_button_pane_t1_ParamLimits

0x9ed5,	// (0x00074e20) main_touch_calib_button_pane_t1

0x9eeb,	// (0x00074e36) main_touch_calib_button_pane_t2_ParamLimits

0x9eeb,	// (0x00074e36) main_touch_calib_button_pane_t2

0x0001,

0x0094,	// (0x0006afdf) main_touch_calib_button_pane_t_ParamLimits

0x0094,	// (0x0006afdf) main_touch_calib_button_pane_t

0x9522,	// (0x0007446d) cell_ncimui_button_pane

0x9522,	// (0x0007446d) bg_button_pane_cp032

0xa3d6,	// (0x00075321) cell_ncimui_button_pane_t1

0x9b0b,	// (0x00074a56) image3_infobar_pane_ParamLimits

0x9b0b,	// (0x00074a56) image3_infobar_pane

0x79bb,	// (0x00072906) fs_bigclock_status_pane_ParamLimits

0x79bb,	// (0x00072906) fs_bigclock_status_pane

0x79c8,	// (0x00072913) main_fs_bigclock_clock_pane_ParamLimits

0x79c8,	// (0x00072913) main_fs_bigclock_clock_pane

0x79e4,	// (0x0007292f) main_fs_bigclock_indi_pane_ParamLimits

0x79e4,	// (0x0007292f) main_fs_bigclock_indi_pane

0x79fd,	// (0x00072948) main_fs_bigclock_swipe_pane_ParamLimits

0x79fd,	// (0x00072948) main_fs_bigclock_swipe_pane

0x9522,	// (0x0007446d) main_fs_clock_dumped_data

0xea24,	// (0x0007996f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xea24,	// (0x0007996f) list_single_fs_bigclock_indicator_pane_g1

0xea3e,	// (0x00079989) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xea3e,	// (0x00079989) list_single_fs_bigclock_indicator_pane_g2

0xea58,	// (0x000799a3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xea58,	// (0x000799a3) list_single_fs_bigclock_indicator_pane_g3

0xea72,	// (0x000799bd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xea72,	// (0x000799bd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007abbf) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007abbf) list_single_fs_bigclock_indicator_pane_g

0xea9b,	// (0x000799e6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xea9b,	// (0x000799e6) list_single_fs_bigclock_indicator_pane_t1

0xeac3,	// (0x00079a0e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xeac3,	// (0x00079a0e) list_single_fs_bigclock_indicator_pane_t2

0xeaeb,	// (0x00079a36) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xeaeb,	// (0x00079a36) list_single_fs_bigclock_indicator_pane_t3

0xeb13,	// (0x00079a5e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xeb13,	// (0x00079a5e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007abca) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007abca) list_single_fs_bigclock_indicator_pane_t

0xa3e4,	// (0x0007532f) image3_infobar_fav_pane_ParamLimits

0xa3e4,	// (0x0007532f) image3_infobar_fav_pane

0xa3f4,	// (0x0007533f) image3_infobar_loc_pane_ParamLimits

0xa3f4,	// (0x0007533f) image3_infobar_loc_pane

0xa408,	// (0x00075353) image3_infobar_time_pane_ParamLimits

0xa408,	// (0x00075353) image3_infobar_time_pane

0xd255,	// (0x000781a0) image3_infobar_time_pane_g1

0xa418,	// (0x00075363) image3_infobar_time_pane_t1

0xd255,	// (0x000781a0) image3_infobar_loc_pane_g1

0xa426,	// (0x00075371) image3_infobar_loc_pane_g2

0x0001,

0xfe33,	// (0x0007ad7e) image3_infobar_loc_pane_g

0xa42e,	// (0x00075379) image3_infobar_loc_pane_t1

0xd255,	// (0x000781a0) image3_infobar_fav_pane_g1

0xa43c,	// (0x00075387) image3_infobar_fav_pane_g2

0x0001,

0xfe38,	// (0x0007ad83) image3_infobar_fav_pane_g

0xa444,	// (0x0007538f) fs_bigclock_status_battery_pane

0xa44d,	// (0x00075398) fs_bigclock_status_signal_pane

0xa456,	// (0x000753a1) fs_bigclock_status_title_pane

0xa45f,	// (0x000753aa) fs_bigclock_status_signal_pane_g1

0xa468,	// (0x000753b3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe3d,	// (0x0007ad88) fs_bigclock_status_signal_pane_g

0xa470,	// (0x000753bb) fs_bigclock_status_battery_pane_g1

0xa479,	// (0x000753c4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe42,	// (0x0007ad8d) fs_bigclock_status_battery_pane_g

0xa481,	// (0x000753cc) fs_bigclock_status_title_pane_t1

0xd255,	// (0x000781a0) main_fs_bigclock_clock_pane_g1

0x89c8,	// (0x00073913) main_fs_bigclock_clock_pane_g2

0x89c8,	// (0x00073913) main_fs_bigclock_clock_pane_g3

0x89c8,	// (0x00073913) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe47,	// (0x0007ad92) main_fs_bigclock_clock_pane_g

0x89d0,	// (0x0007391b) main_fs_bigclock_clock_pane_t1

0x89de,	// (0x00073929) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe50,	// (0x0007ad9b) main_fs_bigclock_clock_pane_t

0xa48f,	// (0x000753da) list_single_fs_bigclock_indicator_pane_ParamLimits

0xa48f,	// (0x000753da) list_single_fs_bigclock_indicator_pane

0x89ed,	// (0x00073938) list_single_fs_bigclock_pane_ParamLimits

0x89ed,	// (0x00073938) list_single_fs_bigclock_pane

0xa4a9,	// (0x000753f4) main_fs_bigclock_indicator_pane_t1

0xa4b8,	// (0x00075403) list_single_fs_bigclock_pane_g1

0xa4c0,	// (0x0007540b) list_single_fs_bigclock_pane_t1

0xd255,	// (0x000781a0) main_fs_bigclock_swipe_pane_g1

0xa503,	// (0x0007544e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe61,	// (0x0007adac) main_fs_bigclock_swipe_pane_g

0xa50b,	// (0x00075456) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xa50b,	// (0x00075456) main_fs_bigclock_swipe_pane_t1

0x2650,	// (0x0006d59b) call_type_pane_ParamLimits

0x9522,	// (0x0007446d) main_btmg_pane

0xa301,	// (0x0007524c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa301,	// (0x0007524c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdd9,	// (0x0007ad24) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdd9,	// (0x0007ad24) list_single_cale_mrui_row_pane_g

0xa387,	// (0x000752d2) list_recal_vselct_arw_lo_pane

0xf0b9,	// (0x0007a004) list_recal_vselct_arw_up_pane

0xa38f,	// (0x000752da) list_recal_vselct_pane

0x8a50,	// (0x0007399b) btmg_button_pane

0x8a5a,	// (0x000739a5) main_btmg_pane_g1

0x9522,	// (0x0007446d) bg_button_pane_cp044

0xa528,	// (0x00075473) btmg_button_pane_t1

0xce39,	// (0x00077d84) aid_listscroll_gen

0xb26c,	// (0x000761b7) main_cntbar_detail_pane

0xede5,	// (0x00079d30) list_cmail_folder_pane

0xc6b5,	// (0x00077600) sp_fs_scroll_pane_cp03_ParamLimits

0x8a64,	// (0x000739af) list_single_fs_dyc_pane_cp01_ParamLimits

0x8a64,	// (0x000739af) list_single_fs_dyc_pane_cp01

0xa536,	// (0x00075481) aid_size_cmail_indent

0xb2b2,	// (0x000761fd) list_single_dyc_row_pane_cp01

0x8aad,	// (0x000739f8) cntbar_detail_list_pane_ParamLimits

0x8aad,	// (0x000739f8) cntbar_detail_list_pane

0x8af9,	// (0x00073a44) main_cntbar_detail_cont_pane_ParamLimits

0x8af9,	// (0x00073a44) main_cntbar_detail_cont_pane

0xc6b5,	// (0x00077600) scroll_pane_cp032_ParamLimits

0xc6b5,	// (0x00077600) scroll_pane_cp032

0x8b0d,	// (0x00073a58) cntbar_detail_list_event_pane_ParamLimits

0x8b0d,	// (0x00073a58) cntbar_detail_list_event_pane

0x8abd,	// (0x00073a08) cntbar_detail_list_shct_pane

0xb21c,	// (0x00076167) aid_list_gen

0xa53f,	// (0x0007548a) aid_scroll

0xa548,	// (0x00075493) aid_size_touch_scroll_bar

0x6d25,	// (0x00071c70) aid_list_double

0x6d13,	// (0x00071c5e) aid_list_single

0x6d13,	// (0x00071c5e) aid_list_single_lg

0x8b1d,	// (0x00073a68) aid_list_z_g_a_sm

0x8b25,	// (0x00073a70) aid_list_z_g_d

0x8b2d,	// (0x00073a78) aid_txt_z_prm

0x8b3b,	// (0x00073a86) aid_txt_z_prm_cp01

0x8b49,	// (0x00073a94) aid_txt_z_sec

0x8b57,	// (0x00073aa2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b57,	// (0x00073aa2) main_cntbar_detail_cont_pane_g1

0x8b6b,	// (0x00073ab6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b6b,	// (0x00073ab6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe66,	// (0x0007adb1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe66,	// (0x0007adb1) main_cntbar_detail_cont_pane_g

0xa551,	// (0x0007549c) main_cntbar_detail_cont_pane_t1

0xa55f,	// (0x000754aa) main_cntbar_detail_cont_pane_t2

0xa56d,	// (0x000754b8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe6b,	// (0x0007adb6) main_cntbar_detail_cont_pane_t

0x8b7b,	// (0x00073ac6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b7b,	// (0x00073ac6) cell_cntbar_detail_list_shct_pane

0xa57b,	// (0x000754c6) cntbar_detail_list_shct_pane_g1

0xa584,	// (0x000754cf) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe72,	// (0x0007adbd) cntbar_detail_list_shct_pane_g

0x8b8f,	// (0x00073ada) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b8f,	// (0x00073ada) cntbar_detail_list_event_pane_g1

0x8b9b,	// (0x00073ae6) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b9b,	// (0x00073ae6) cntbar_detail_list_event_pane_g2

0x0005,

0xfe77,	// (0x0007adc2) cntbar_detail_list_event_pane_g_ParamLimits

0xfe77,	// (0x0007adc2) cntbar_detail_list_event_pane_g

0x8c07,	// (0x00073b52) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c07,	// (0x00073b52) cntbar_detail_list_event_pane_t1

0x8c1c,	// (0x00073b67) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c1c,	// (0x00073b67) cntbar_detail_list_event_pane_t2

0x0002,

0xfe84,	// (0x0007adcf) cntbar_detail_list_event_pane_t_ParamLimits

0xfe84,	// (0x0007adcf) cntbar_detail_list_event_pane_t

0xd255,	// (0x000781a0) cell_cntbar_detail_list_shct_pane_g1

0xb9fc,	// (0x00076947) navi_pane_mv_g3

0xb26c,	// (0x000761b7) main_cntbar_detail_pane_ParamLimits

0x9522,	// (0x0007446d) main_notif_wgt_pane

0x9921,	// (0x0007486c) aid_tch_main_mp4_pane_g4

0x9b03,	// (0x00074a4e) popup_slider_window_cp02

0xa37d,	// (0x000752c8) list_recal_day_event_pane

0x8a7b,	// (0x000739c6) cntbar_detail_btn_pane_ParamLimits

0x8a7b,	// (0x000739c6) cntbar_detail_btn_pane

0x8a94,	// (0x000739df) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a94,	// (0x000739df) cntbar_detail_btn_pane_cp01

0x8abd,	// (0x00073a08) cntbar_detail_list_shct_pane_ParamLimits

0x8acd,	// (0x00073a18) cntbar_detail_pane_g1_ParamLimits

0x8acd,	// (0x00073a18) cntbar_detail_pane_g1

0x8add,	// (0x00073a28) cntbar_detail_pane_t1_ParamLimits

0x8add,	// (0x00073a28) cntbar_detail_pane_t1

0x8ba7,	// (0x00073af2) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ba7,	// (0x00073af2) cntbar_detail_list_event_pane_g3

0x8bbf,	// (0x00073b0a) cntbar_detail_list_event_pane_g4_ParamLimits

0x8bbf,	// (0x00073b0a) cntbar_detail_list_event_pane_g4

0x8bd7,	// (0x00073b22) cntbar_detail_list_event_pane_g5_ParamLimits

0x8bd7,	// (0x00073b22) cntbar_detail_list_event_pane_g5

0x8bef,	// (0x00073b3a) cntbar_detail_list_event_pane_g6_ParamLimits

0x8bef,	// (0x00073b3a) cntbar_detail_list_event_pane_g6

0x8c31,	// (0x00073b7c) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c31,	// (0x00073b7c) cntbar_detail_list_event_pane_t3

0x8c43,	// (0x00073b8e) popup_notif_wgt_window_ParamLimits

0x8c43,	// (0x00073b8e) popup_notif_wgt_window

0x8c5c,	// (0x00073ba7) popup_submenu_window_cp01_ParamLimits

0x8c5c,	// (0x00073ba7) popup_submenu_window_cp01

0xba44,	// (0x0007698f) bg_popup_window_pane_cp10

0xa58d,	// (0x000754d8) listscroll_notif_wgt_pane

0xa59f,	// (0x000754ea) list_notif_wgt_window

0xa5a8,	// (0x000754f3) scroll_pane_cp033

0x8c72,	// (0x00073bbd) list_notif_wgt_row_pane_ParamLimits

0x8c72,	// (0x00073bbd) list_notif_wgt_row_pane

0xa5b1,	// (0x000754fc) aid_size_list_notif_wgt_del

0xa5be,	// (0x00075509) list_notif_wgt_row_pane_g1

0xa5ca,	// (0x00075515) list_notif_wgt_row_pane_g2

0xa5d6,	// (0x00075521) list_notif_wgt_row_pane_g3

0x0002,

0xfe8b,	// (0x0007add6) list_notif_wgt_row_pane_g

0xa5e3,	// (0x0007552e) list_notif_wgt_row_pane_t1

0xa5f8,	// (0x00075543) list_notif_wgt_row_pane_t2

0xa60a,	// (0x00075555) list_notif_wgt_row_pane_t3

0x0002,

0xfe92,	// (0x0007addd) list_notif_wgt_row_pane_t

0xdf11,	// (0x00078e5c) list_recal_day_event_pane_g1

0xa61c,	// (0x00075567) list_recal_day_event_pane_t1

0x9522,	// (0x0007446d) bg_button_pane_cp045

0x8c82,	// (0x00073bcd) cntbar_detail_btn_pane_t1

0xce4d,	// (0x00077d98) main_callh_pane_ParamLimits

0xce4d,	// (0x00077d98) main_callh_pane

0x9522,	// (0x0007446d) main_coverflow0_pane

0x9522,	// (0x0007446d) main_wgtman_pane

0x7a0b,	// (0x00072956) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a0b,	// (0x00072956) main_fs_bigclock_unlock_btn_pane

0x8430,	// (0x0007337b) bg_button_pane_cp16

0x8440,	// (0x0007338b) cell_tport_appsw_pane_g3

0x8c90,	// (0x00073bdb) cf0_flow_pane_ParamLimits

0x8c90,	// (0x00073bdb) cf0_flow_pane

0xa62b,	// (0x00075576) listscroll_cf0_pane

0xa636,	// (0x00075581) main_cf0_pane_g1

0x8ca5,	// (0x00073bf0) main_cf0_pane_t1_ParamLimits

0x8ca5,	// (0x00073bf0) main_cf0_pane_t1

0x8cbc,	// (0x00073c07) main_cf0_pane_t2_ParamLimits

0x8cbc,	// (0x00073c07) main_cf0_pane_t2

0x0001,

0xfe9e,	// (0x0007ade9) main_cf0_pane_t_ParamLimits

0xfe9e,	// (0x0007ade9) main_cf0_pane_t

0xa648,	// (0x00075593) scroll_pane_cp11

0x8cd3,	// (0x00073c1e) cf0_flow_pane_g1

0x8cdb,	// (0x00073c26) cf0_flow_pane_g2

0x0001,

0xfea3,	// (0x0007adee) cf0_flow_pane_g

0x8ce3,	// (0x00073c2e) cf0_flow_pane_t1

0x9522,	// (0x0007446d) main_call6_pane

0x9522,	// (0x0007446d) main_calllock_pane

0x8cf1,	// (0x00073c3c) call6_btn_grp_pane_ParamLimits

0x8cf1,	// (0x00073c3c) call6_btn_grp_pane

0x8d0b,	// (0x00073c56) call6_pane_g1_ParamLimits

0x8d0b,	// (0x00073c56) call6_pane_g1

0x8d20,	// (0x00073c6b) popup_call6_1st_window_ParamLimits

0x8d20,	// (0x00073c6b) popup_call6_1st_window

0x8d31,	// (0x00073c7c) popup_call6_2nd_window_ParamLimits

0x8d31,	// (0x00073c7c) popup_call6_2nd_window

0x8d42,	// (0x00073c8d) cell_call6_btn_pane_ParamLimits

0x8d42,	// (0x00073c8d) cell_call6_btn_pane

0xba44,	// (0x0007698f) bg_popup_call2_in_pane_cp03

0xa653,	// (0x0007559e) popup_call6_1st_window_g1

0xa65b,	// (0x000755a6) popup_call6_1st_window_g2

0xa663,	// (0x000755ae) popup_call6_1st_window_g3

0x0002,

0xfea8,	// (0x0007adf3) popup_call6_1st_window_g

0xa66b,	// (0x000755b6) popup_call6_1st_window_t1

0xa67a,	// (0x000755c5) popup_call6_1st_window_t2

0xa68a,	// (0x000755d5) popup_call6_1st_window_t3

0x0002,

0xfeaf,	// (0x0007adfa) popup_call6_1st_window_t

0xba44,	// (0x0007698f) bg_popup_call2_in_pane_cp04

0xa653,	// (0x0007559e) popup_call6_2nd_window_g1

0xa65b,	// (0x000755a6) popup_call6_2nd_window_g2

0xa663,	// (0x000755ae) popup_call6_2nd_window_g3

0x0002,

0xfea8,	// (0x0007adf3) popup_call6_2nd_window_g

0xa66b,	// (0x000755b6) popup_call6_2nd_window_t1

0x9522,	// (0x0007446d) bg_button_pane_cp15

0xa69a,	// (0x000755e5) cell_call6_btn_pane_g1

0xa6a3,	// (0x000755ee) cell_call6_btn_pane_t1

0x8d56,	// (0x00073ca1) listscroll_wgtman_pane_ParamLimits

0x8d56,	// (0x00073ca1) listscroll_wgtman_pane

0x8d77,	// (0x00073cc2) wgtman_btn_pane_ParamLimits

0x8d77,	// (0x00073cc2) wgtman_btn_pane

0xb803,	// (0x0007674e) aid_scroll_copy1

0xa6b2,	// (0x000755fd) list_wgtman_pane

0x8dba,	// (0x00073d05) wgtman_btn_pane_g1_ParamLimits

0x8dba,	// (0x00073d05) wgtman_btn_pane_g1

0x8de6,	// (0x00073d31) wgtman_btn_pane_t1_ParamLimits

0x8de6,	// (0x00073d31) wgtman_btn_pane_t1

0xa6bc,	// (0x00075607) wgtman_btn_pane_t2_ParamLimits

0xa6bc,	// (0x00075607) wgtman_btn_pane_t2

0x0001,

0xfeb6,	// (0x0007ae01) wgtman_btn_pane_t_ParamLimits

0xfeb6,	// (0x0007ae01) wgtman_btn_pane_t

0x8e23,	// (0x00073d6e) listrow_wgtman_pane_ParamLimits

0x8e23,	// (0x00073d6e) listrow_wgtman_pane

0x8e35,	// (0x00073d80) listrow_wgtman_pane_g1

0x8e42,	// (0x00073d8d) listrow_wgtman_pane_g2

0x0001,

0xfebb,	// (0x0007ae06) listrow_wgtman_pane_g

0x8e60,	// (0x00073dab) listrow_wgtman_pane_t1

0x8e78,	// (0x00073dc3) listrow_wgtman_pane_t2

0x0001,

0xfec0,	// (0x0007ae0b) listrow_wgtman_pane_t

0x8e9e,	// (0x00073de9) wait_bar_pane_cp09

0xa6d3,	// (0x0007561e) main_calllock_btn_pane

0xa6dd,	// (0x00075628) main_calllock_pane_g1

0x9522,	// (0x0007446d) bg_button_pane_cp17

0xa6e9,	// (0x00075634) main_calllock_btn_pane_g1

0xa6f2,	// (0x0007563d) main_calllock_btn_pane_t1

0x9522,	// (0x0007446d) main_dialer3_pane

0x9522,	// (0x0007446d) main_fmrd2_pane

0xd255,	// (0x000781a0) main_fs_bigclock_unlock_btn_pane_g1

0xa709,	// (0x00075654) main_fs_bigclock_unlock_btn_pane_t1

0x8eb0,	// (0x00073dfb) area_fmrd2_info_pane_ParamLimits

0x8eb0,	// (0x00073dfb) area_fmrd2_info_pane

0x8ec1,	// (0x00073e0c) area_fmrd2_visual_pane_ParamLimits

0x8ec1,	// (0x00073e0c) area_fmrd2_visual_pane

0x8ecf,	// (0x00073e1a) fmrd2_indi_pane_ParamLimits

0x8ecf,	// (0x00073e1a) fmrd2_indi_pane

0x8edc,	// (0x00073e27) area_fmrd2_visual_pane_g1

0x8ee4,	// (0x00073e2f) area_fmrd2_visual_pane_t1

0x8ef4,	// (0x00073e3f) area_fmrd2_visual_pane_t2

0x8f04,	// (0x00073e4f) area_fmrd2_visual_pane_t3

0x0002,

0xfeca,	// (0x0007ae15) area_fmrd2_visual_pane_t

0x8f14,	// (0x00073e5f) area_fmrd2_info_pane_g1

0x8f1c,	// (0x00073e67) area_fmrd2_info_pane_t1

0x8f2c,	// (0x00073e77) area_fmrd2_info_pane_t2

0x8f3c,	// (0x00073e87) area_fmrd2_info_pane_t3

0x8f4c,	// (0x00073e97) area_fmrd2_info_pane_t4

0x0003,

0xfed1,	// (0x0007ae1c) area_fmrd2_info_pane_t

0x8f5a,	// (0x00073ea5) fmrd2_indi_pane_t1

0x8f6a,	// (0x00073eb5) fmrd2_indi_pane_t2

0x8f7a,	// (0x00073ec5) fmrd2_indi_pane_t3

0x0002,

0xfeda,	// (0x0007ae25) fmrd2_indi_pane_t

0xea81,	// (0x000799cc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xea81,	// (0x000799cc) list_single_fs_bigclock_indicator_pane_g5

0xeb28,	// (0x00079a73) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xeb28,	// (0x00079a73) list_single_fs_bigclock_indicator_pane_t5

0x861a,	// (0x00073565) aid_cell_bcale_month_pane_ParamLimits

0x861a,	// (0x00073565) aid_cell_bcale_month_pane

0x8638,	// (0x00073583) bcale_month_pane_ParamLimits

0x8638,	// (0x00073583) bcale_month_pane

0x865c,	// (0x000735a7) bcale_preview_pane_ParamLimits

0x865c,	// (0x000735a7) bcale_preview_pane

0xa4c0,	// (0x0007540b) list_single_fs_bigclock_pane_t1_ParamLimits

0xa4df,	// (0x0007542a) list_single_fs_bigclock_pane_t2_ParamLimits

0xa4df,	// (0x0007542a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe5c,	// (0x0007ada7) list_single_fs_bigclock_pane_t_ParamLimits

0xfe5c,	// (0x0007ada7) list_single_fs_bigclock_pane_t

0xa701,	// (0x0007564c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfec5,	// (0x0007ae10) main_fs_bigclock_unlock_btn_pane_g

0x8f8a,	// (0x00073ed5) aid_dia3_key_size_ParamLimits

0x8f8a,	// (0x00073ed5) aid_dia3_key_size

0x8f99,	// (0x00073ee4) aid_dia3_listrow_size_ParamLimits

0x8f99,	// (0x00073ee4) aid_dia3_listrow_size

0x8fae,	// (0x00073ef9) dia3_keypad_fun_pane_ParamLimits

0x8fae,	// (0x00073ef9) dia3_keypad_fun_pane

0x8fca,	// (0x00073f15) dia3_keypad_num_pane_ParamLimits

0x8fca,	// (0x00073f15) dia3_keypad_num_pane

0x8fe5,	// (0x00073f30) dia3_listscroll_pane_ParamLimits

0x8fe5,	// (0x00073f30) dia3_listscroll_pane

0x8ff8,	// (0x00073f43) dia3_numentry_pane_ParamLimits

0x8ff8,	// (0x00073f43) dia3_numentry_pane

0xa717,	// (0x00075662) dia3_list_pane

0xa722,	// (0x0007566d) scroll_pane_cp12

0x9522,	// (0x0007446d) bg_dia3_numentry_pane

0x900c,	// (0x00073f57) dia3_numentry_pane_t1

0x901b,	// (0x00073f66) cell_dia3_key_num_pane

0x9023,	// (0x00073f6e) cell_dia3_key0_fun_pane_ParamLimits

0x9023,	// (0x00073f6e) cell_dia3_key0_fun_pane

0x9037,	// (0x00073f82) cell_dia3_key1_fun_pane_ParamLimits

0x9037,	// (0x00073f82) cell_dia3_key1_fun_pane

0x904f,	// (0x00073f9a) dia3_listrow_pane

0xe791,	// (0x000796dc) bg_dia3_numentry_pane_g1

0x9522,	// (0x0007446d) bg_button_pane_cp21

0xa72d,	// (0x00075678) cell_dia3_key_num_pane_t1

0xa73b,	// (0x00075686) cell_dia3_key_num_pane_t2

0xa74a,	// (0x00075695) cell_dia3_key_num_pane_t3

0xa759,	// (0x000756a4) cell_dia3_key_num_pane_t4

0x0003,

0xfee1,	// (0x0007ae2c) cell_dia3_key_num_pane_t

0x9522,	// (0x0007446d) bg_button_pane_cp19

0x9061,	// (0x00073fac) cell_dia3_key0_fun_pane_g1

0x9522,	// (0x0007446d) bg_button_pane_cp20

0x9069,	// (0x00073fb4) cell_dia3_key1_fun_pane_g1

0x9071,	// (0x00073fbc) area_left_week_number_pane

0x907d,	// (0x00073fc8) area_top_day_name_pane

0x9090,	// (0x00073fdb) frame_month_view_pane

0xa768,	// (0x000756b3) grid_month_view_pane

0x90a3,	// (0x00073fee) cell_top_day_name_pane_ParamLimits

0x90a3,	// (0x00073fee) cell_top_day_name_pane

0x90d0,	// (0x0007401b) cell_area_left_week_number_pane_ParamLimits

0x90d0,	// (0x0007401b) cell_area_left_week_number_pane

0x90e4,	// (0x0007402f) cell_month_view_pane_ParamLimits

0x90e4,	// (0x0007402f) cell_month_view_pane

0xa776,	// (0x000756c1) frm_month_g1

0x9111,	// (0x0007405c) frm_month_g2

0x9124,	// (0x0007406f) frm_month_g3

0x9137,	// (0x00074082) frm_month_g4

0x914a,	// (0x00074095) frm_month_g5

0x915d,	// (0x000740a8) frm_month_g6

0x9170,	// (0x000740bb) frm_month_g7

0xa783,	// (0x000756ce) frm_month_g8

0x9183,	// (0x000740ce) frm_month_g9

0x9193,	// (0x000740de) frm_month_g10

0x91a3,	// (0x000740ee) frm_month_g11

0x91b3,	// (0x000740fe) frm_month_g12

0x91c5,	// (0x00074110) frm_month_g13

0x91d7,	// (0x00074122) frm_month_g14

0x91eb,	// (0x00074136) frm_month_g15

0x91ff,	// (0x0007414a) frm_month_g16

0x000f,

0xfeea,	// (0x0007ae35) frm_month_g

0xa790,	// (0x000756db) cell_top_day_name_pane_t1

0x9213,	// (0x0007415e) cell_area_left_week_number_pane_g1

0x921f,	// (0x0007416a) cell_area_left_week_number_pane_t1

0xd4c1,	// (0x0007840c) cell_month_view_pane_g1

0x9232,	// (0x0007417d) cell_month_view_pane_t1

0x9522,	// (0x0007446d) main_fps_pane

0xecfd,	// (0x00079c48) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xecfd,	// (0x00079c48) cmail_ddmenu_btn02_pane_cp1

0xed19,	// (0x00079c64) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xed19,	// (0x00079c64) cmail_ddmenu_btn02_pane_cp2

0x891c,	// (0x00073867) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x891c,	// (0x00073867) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe14,	// (0x0007ad5f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe14,	// (0x0007ad5f) cmail_ddmenu_btn02_pane_g

0x893a,	// (0x00073885) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x893a,	// (0x00073885) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe19,	// (0x0007ad64) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe19,	// (0x0007ad64) cmail_ddmenu_btn02_pane_t

0x9245,	// (0x00074190) fps_text_pane_ParamLimits

0x9245,	// (0x00074190) fps_text_pane

0x925c,	// (0x000741a7) main_fps_pane_g1_ParamLimits

0x925c,	// (0x000741a7) main_fps_pane_g1

0x9276,	// (0x000741c1) wait_bar_pane_cp010_ParamLimits

0x9276,	// (0x000741c1) wait_bar_pane_cp010

0x9287,	// (0x000741d2) fps_text_pane_t1_ParamLimits

0x9287,	// (0x000741d2) fps_text_pane_t1

0xe477,	// (0x000793c2) cam4_image_uncrop_pane_g1

0xe480,	// (0x000793cb) cam4_image_uncrop_pane_g2

0x5b64,	// (0x00070aaf) cam4_image_uncrop_pane_g3

0x5b6d,	// (0x00070ab8) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007a839) cam4_image_uncrop_pane_g

0x904f,	// (0x00073f9a) dia3_listrow_pane_ParamLimits

0x9522,	// (0x0007446d) main_phob2_pane

0x8401,	// (0x0007334c) cell_tport_appsw_pane_cp02_ParamLimits

0x8401,	// (0x0007334c) cell_tport_appsw_pane_cp02

0x8415,	// (0x00073360) cell_tport_appsw_pane_cp03_ParamLimits

0x8415,	// (0x00073360) cell_tport_appsw_pane_cp03

0x9522,	// (0x0007446d) phob2_contact_card_pane

0x9522,	// (0x0007446d) phob2_listscroll_pane

0xa7a3,	// (0x000756ee) phob2_list_pane

0xa7ab,	// (0x000756f6) scroll_pane_cp034

0x929f,	// (0x000741ea) phob2_cc_data_pane_ParamLimits

0x929f,	// (0x000741ea) phob2_cc_data_pane

0x92be,	// (0x00074209) phob2_cc_listscroll_pane_ParamLimits

0x92be,	// (0x00074209) phob2_cc_listscroll_pane

0x92dc,	// (0x00074227) list_double_large_graphic_phob2_pane_ParamLimits

0x92dc,	// (0x00074227) list_double_large_graphic_phob2_pane

0x92ee,	// (0x00074239) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x92ee,	// (0x00074239) list_double_large_graphic_phob2_pane_g1

0x9304,	// (0x0007424f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9304,	// (0x0007424f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff0b,	// (0x0007ae56) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff0b,	// (0x0007ae56) list_double_large_graphic_phob2_pane_g

0x9310,	// (0x0007425b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9310,	// (0x0007425b) list_double_large_graphic_phob2_pane_t1

0x9325,	// (0x00074270) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9325,	// (0x00074270) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff10,	// (0x0007ae5b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff10,	// (0x0007ae5b) list_double_large_graphic_phob2_pane_t

0x9522,	// (0x0007446d) list_highlight_pane_cp024

0x9337,	// (0x00074282) phob2_cc_button_pane

0x933f,	// (0x0007428a) phob2_cc_data_pane_g1_ParamLimits

0x933f,	// (0x0007428a) phob2_cc_data_pane_g1

0x9354,	// (0x0007429f) phob2_cc_data_pane_g2_ParamLimits

0x9354,	// (0x0007429f) phob2_cc_data_pane_g2

0x0001,

0xff15,	// (0x0007ae60) phob2_cc_data_pane_g_ParamLimits

0xff15,	// (0x0007ae60) phob2_cc_data_pane_g

0x9364,	// (0x000742af) phob2_cc_data_pane_t1_ParamLimits

0x9364,	// (0x000742af) phob2_cc_data_pane_t1

0x937c,	// (0x000742c7) phob2_cc_data_pane_t2_ParamLimits

0x937c,	// (0x000742c7) phob2_cc_data_pane_t2

0x9394,	// (0x000742df) phob2_cc_data_pane_t3_ParamLimits

0x9394,	// (0x000742df) phob2_cc_data_pane_t3

0x0002,

0xff1a,	// (0x0007ae65) phob2_cc_data_pane_t_ParamLimits

0xff1a,	// (0x0007ae65) phob2_cc_data_pane_t

0xa7b3,	// (0x000756fe) phob2_cc_list_pane_ParamLimits

0xa7b3,	// (0x000756fe) phob2_cc_list_pane

0xdfa8,	// (0x00078ef3) scroll_pane_cp035_ParamLimits

0xdfa8,	// (0x00078ef3) scroll_pane_cp035

0xb26c,	// (0x000761b7) bg_button_pane_cp033

0xa7bf,	// (0x0007570a) phob2_cc_button_pane_g1

0xa7cb,	// (0x00075716) phob2_cc_button_pane_t1

0xa7e0,	// (0x0007572b) phob2_cc_button_pane_t2

0x0001,

0xff21,	// (0x0007ae6c) phob2_cc_button_pane_t

0x93ac,	// (0x000742f7) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x93ac,	// (0x000742f7) list_double_large_graphic_phob2_cc_pane

0x93be,	// (0x00074309) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x93be,	// (0x00074309) list_double_large_graphic_phob2_cc_pane_g1

0x93ca,	// (0x00074315) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x93ca,	// (0x00074315) list_double_large_graphic_phob2_cc_pane_g2

0x93d6,	// (0x00074321) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x93d6,	// (0x00074321) list_double_large_graphic_phob2_cc_pane_g3

0x93e2,	// (0x0007432d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x93e2,	// (0x0007432d) list_double_large_graphic_phob2_cc_pane_g4

0xb2bb,	// (0x00076206) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb2bb,	// (0x00076206) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff26,	// (0x0007ae71) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff26,	// (0x0007ae71) list_double_large_graphic_phob2_cc_pane_g

0x93ee,	// (0x00074339) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x93ee,	// (0x00074339) list_double_large_graphic_phob2_cc_pane_t1

0x9417,	// (0x00074362) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9417,	// (0x00074362) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff31,	// (0x0007ae7c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff31,	// (0x0007ae7c) list_double_large_graphic_phob2_cc_pane_t

0xa7f2,	// (0x0007573d) list_highlight_pane_cp025_ParamLimits

0xa7f2,	// (0x0007573d) list_highlight_pane_cp025

0xb26c,	// (0x000761b7) bg_button_pane_cp033_ParamLimits

0xa7bf,	// (0x0007570a) phob2_cc_button_pane_g1_ParamLimits

0xa7cb,	// (0x00075716) phob2_cc_button_pane_t1_ParamLimits

0xa7e0,	// (0x0007572b) phob2_cc_button_pane_t2_ParamLimits

0xff21,	// (0x0007ae6c) phob2_cc_button_pane_t_ParamLimits

0x04d4,	// (0x0006b41f) popup_wgtman_window

0xdded,	// (0x00078d38) scroll_pane_cp038

0x8d9c,	// (0x00073ce7) wgtman_btn_pane_cp_01_ParamLimits

0x8d9c,	// (0x00073ce7) wgtman_btn_pane_cp_01

0xa800,	// (0x0007574b) wgtman_content_pane

0xa809,	// (0x00075754) wgtman_heading_pane

0x9522,	// (0x0007446d) bg_heading_pane_cp02

0xa812,	// (0x0007575d) wgtman_heading_pane_g1

0xa81a,	// (0x00075765) wgtman_heading_pane_t1

0xa828,	// (0x00075773) scroll_pane_cp036

0xa830,	// (0x0007577b) wgtman_list_pane

0xa838,	// (0x00075783) wgtman_list_pane_t1_ParamLimits

0xa838,	// (0x00075783) wgtman_list_pane_t1

0x9b5d,	// (0x00074aa8) cam4_grid_pane

0x6825,	// (0x00071770) bg_button_pane_cp015_ParamLimits

0x6837,	// (0x00071782) bg_button_pane_cp016_ParamLimits

0x684a,	// (0x00071795) bg_button_pane_cp017_ParamLimits

0x68a2,	// (0x000717ed) popup_vitu2_query_window_g3_ParamLimits

0x68a2,	// (0x000717ed) popup_vitu2_query_window_g3

0x695f,	// (0x000718aa) popup_vitu2_query_window_t6_ParamLimits

0x695f,	// (0x000718aa) popup_vitu2_query_window_t6

0x698a,	// (0x000718d5) popup_vitu2_query_window_t7_ParamLimits

0x698a,	// (0x000718d5) popup_vitu2_query_window_t7

0xe477,	// (0x000793c2) cam4_grid_pane_g1

0xe480,	// (0x000793cb) cam4_grid_pane_g2

0xa852,	// (0x0007579d) cam4_grid_pane_g3

0xa85b,	// (0x000757a6) cam4_grid_pane_g4

0x0003,

0xff36,	// (0x0007ae81) cam4_grid_pane_g

0x14e4,	// (0x0006c42f) aid_placing_vt_slider_lsc_ParamLimits

0x17ef,	// (0x0006c73a) vidtel_button_pane_ParamLimits

0x17ef,	// (0x0006c73a) vidtel_button_pane

0xa866,	// (0x000757b1) bg_button_pane_cp034

0x9440,	// (0x0007438b) vidtel_button_pane_g1

0xa870,	// (0x000757bb) vidtel_button_pane_t1

0xdeef,	// (0x00078e3a) aid_size_vtel_slider_touch

0xdfa8,	// (0x00078ef3) scroll_pane_cp039

0xe7cf,	// (0x0007971a) ncim_query_button_pane_cp01_ParamLimits

0xe7ee,	// (0x00079739) ncimui_query_pane_g1_ParamLimits

0xb26c,	// (0x000761b7) input_focus_pane_cp012_ParamLimits

0xe813,	// (0x0007975e) ncim_query_entry_pane_t1_ParamLimits

0xdfa8,	// (0x00078ef3) scroll_pane_cp039_ParamLimits

0xb8e7,	// (0x00076832) navi_pane_bcale_mc_g1

0xb8ef,	// (0x0007683a) navi_pane_bcale_mc_t1

0xed62,	// (0x00079cad) main_sp_fs_email_pane_g1

0xed6e,	// (0x00079cb9) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007ac30) main_sp_fs_email_pane_g

0xefba,	// (0x00079f05) list_single_cale_mrui_row_pane_g3_ParamLimits

0xefba,	// (0x00079f05) list_single_cale_mrui_row_pane_g3

0x8962,	// (0x000738ad) list_single_recal_day_pane_g5_event_pane

0xb286,	// (0x000761d1) list_single_recal_day_pane_g7

0xa87e,	// (0x000757c9) list_recal_day_event_pane_cp01

0xa887,	// (0x000757d2) list_recal_vselct_arw_lo_pane_cp01

0xa88f,	// (0x000757da) list_recal_vselct_arw_up_pane_cp01

0xa897,	// (0x000757e2) list_recal_vselct_pane_cp01

0xdf11,	// (0x00078e5c) list_recal_day_event_pane_cp01_g1

0xb2c7,	// (0x00076212) list_recal_day_event_pane_cp01_t1

0xb28e,	// (0x000761d9) list_single_recal_day_pane_t1_ParamLimits

0xb2a0,	// (0x000761eb) list_single_recal_day_pane_t2_ParamLimits

0xfe29,	// (0x0007ad74) list_single_recal_day_pane_t_ParamLimits

0xacf2,	// (0x00075c3d) bg_notes_pane_ParamLimits

0xad95,	// (0x00075ce0) list_notes_pane_ParamLimits

0x081d,	// (0x0006b768) scroll_pane_cp06_ParamLimits

0xadb7,	// (0x00075d02) main_notes_pane_ParamLimits

0x9522,	// (0x0007446d) main_welc_pane

0x9448,	// (0x00074393) main_welc_body_pane_ParamLimits

0x9448,	// (0x00074393) main_welc_body_pane

0x9466,	// (0x000743b1) main_welc_opti_pane_ParamLimits

0x9466,	// (0x000743b1) main_welc_opti_pane

0x94ab,	// (0x000743f6) main_welc_pane_t1_ParamLimits

0x94ab,	// (0x000743f6) main_welc_pane_t1

0x94c9,	// (0x00074414) main_welc_body_row_pane_ParamLimits

0x94c9,	// (0x00074414) main_welc_body_row_pane

0xee4f,	// (0x00079d9a) main_welc_opti_row_pane_ParamLimits

0xee4f,	// (0x00079d9a) main_welc_opti_row_pane

0xa8a1,	// (0x000757ec) main_welc_opti_row_pane_g1

0xa8a9,	// (0x000757f4) main_welc_opti_row_pane_t1

0xa8b9,	// (0x00075804) main_welc_body_row_pane_t1

0xa597,	// (0x000754e2) popup_notif_wgt_heading_pane

0xa5b1,	// (0x000754fc) aid_size_list_notif_wgt_del_ParamLimits

0xa5be,	// (0x00075509) list_notif_wgt_row_pane_g1_ParamLimits

0xa5ca,	// (0x00075515) list_notif_wgt_row_pane_g2_ParamLimits

0xa5d6,	// (0x00075521) list_notif_wgt_row_pane_g3_ParamLimits

0xfe8b,	// (0x0007add6) list_notif_wgt_row_pane_g_ParamLimits

0xa5e3,	// (0x0007552e) list_notif_wgt_row_pane_t1_ParamLimits

0xa5f8,	// (0x00075543) list_notif_wgt_row_pane_t2_ParamLimits

0xa60a,	// (0x00075555) list_notif_wgt_row_pane_t3_ParamLimits

0xfe92,	// (0x0007addd) list_notif_wgt_row_pane_t_ParamLimits

0x8e35,	// (0x00073d80) listrow_wgtman_pane_g1_ParamLimits

0x8e42,	// (0x00073d8d) listrow_wgtman_pane_g2_ParamLimits

0xfebb,	// (0x0007ae06) listrow_wgtman_pane_g_ParamLimits

0x8e60,	// (0x00073dab) listrow_wgtman_pane_t1_ParamLimits

0x8e78,	// (0x00073dc3) listrow_wgtman_pane_t2_ParamLimits

0xfec0,	// (0x0007ae0b) listrow_wgtman_pane_t_ParamLimits

0x8e9e,	// (0x00073de9) wait_bar_pane_cp09_ParamLimits

0x9522,	// (0x0007446d) bg_popup_heading_pane_cp02

0xa8c8,	// (0x00075813) popup_notif_wgt_heading_pane_g1

0xa8d0,	// (0x0007581b) popup_notif_wgt_heading_pane_t1

0x9522,	// (0x0007446d) main_vids_pane

0x9522,	// (0x0007446d) vids_listscroll_pane

0x94dd,	// (0x00074428) scroll_pane_cp040

0x9522,	// (0x0007446d) vids_list_pane

0x94e8,	// (0x00074433) vids_list_double_pane_ParamLimits

0x94e8,	// (0x00074433) vids_list_double_pane

0x94f9,	// (0x00074444) vids_list_double_pane_g1

0x9502,	// (0x0007444d) vids_list_double_pane_t1

0x9512,	// (0x0007445d) vids_list_double_pane_t2

0x0001,

0xff44,	// (0x0007ae8f) vids_list_double_pane_t

0x959a,	// (0x000744e5) main_ncimui_pane_ParamLimits

0x7593,	// (0x000724de) main_ncimui_pane_g1_ParamLimits

0x759f,	// (0x000724ea) main_ncimui_pane_g2_ParamLimits

0x759f,	// (0x000724ea) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007ab35) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007ab35) main_ncimui_pane_g

0x9481,	// (0x000743cc) main_welc_pane_g1_ParamLimits

0x9481,	// (0x000743cc) main_welc_pane_g1

0x9496,	// (0x000743e1) main_welc_pane_g2_ParamLimits

0x9496,	// (0x000743e1) main_welc_pane_g2

0x0001,

0xff3f,	// (0x0007ae8a) main_welc_pane_g_ParamLimits

0xff3f,	// (0x0007ae8a) main_welc_pane_g

0xacf2,	// (0x00075c3d) listscroll_mce_pane_ParamLimits

0xba3c,	// (0x00076987) wait_bar_pane_cp10

0xce41,	// (0x00077d8c) main_cale_day_pane_ParamLimits

0xce41,	// (0x00077d8c) main_cale_week_pane_ParamLimits

0xacf2,	// (0x00075c3d) main_messa_pane_ParamLimits

0x4e9e,	// (0x0006fde9) main_clock2_btn_pane_ParamLimits

0x4e9e,	// (0x0006fde9) main_clock2_btn_pane

0xd669,	// (0x000785b4) main_clock2_btn_pane_cp01_ParamLimits

0xd669,	// (0x000785b4) main_clock2_btn_pane_cp01

0xef8b,	// (0x00079ed6) list_cale_mrui_pane_ParamLimits

0xa640,	// (0x0007558b) main_cf0_pane_g2

0x0001,

0xfe99,	// (0x0007ade4) main_cf0_pane_g

0x9071,	// (0x00073fbc) area_left_week_number_pane_ParamLimits

0x907d,	// (0x00073fc8) area_top_day_name_pane_ParamLimits

0x9090,	// (0x00073fdb) frame_month_view_pane_ParamLimits

0xa768,	// (0x000756b3) grid_month_view_pane_ParamLimits

0xa776,	// (0x000756c1) frm_month_g1_ParamLimits

0x9111,	// (0x0007405c) frm_month_g2_ParamLimits

0x9124,	// (0x0007406f) frm_month_g3_ParamLimits

0x9137,	// (0x00074082) frm_month_g4_ParamLimits

0x914a,	// (0x00074095) frm_month_g5_ParamLimits

0x915d,	// (0x000740a8) frm_month_g6_ParamLimits

0x9170,	// (0x000740bb) frm_month_g7_ParamLimits

0xa783,	// (0x000756ce) frm_month_g8_ParamLimits

0x9183,	// (0x000740ce) frm_month_g9_ParamLimits

0x9193,	// (0x000740de) frm_month_g10_ParamLimits

0x91a3,	// (0x000740ee) frm_month_g11_ParamLimits

0x91b3,	// (0x000740fe) frm_month_g12_ParamLimits

0x91c5,	// (0x00074110) frm_month_g13_ParamLimits

0x91d7,	// (0x00074122) frm_month_g14_ParamLimits

0x91eb,	// (0x00074136) frm_month_g15_ParamLimits

0x91ff,	// (0x0007414a) frm_month_g16_ParamLimits

0xfeea,	// (0x0007ae35) frm_month_g_ParamLimits

0xa790,	// (0x000756db) cell_top_day_name_pane_t1_ParamLimits

0x9213,	// (0x0007415e) cell_area_left_week_number_pane_g1_ParamLimits

0x921f,	// (0x0007416a) cell_area_left_week_number_pane_t1_ParamLimits

0xd4c1,	// (0x0007840c) cell_month_view_pane_g1_ParamLimits

0x9232,	// (0x0007417d) cell_month_view_pane_t1_ParamLimits

0xacea,	// (0x00075c35) main_clock2_btn_pane_g1

0xa8de,	// (0x00075829) main_clock2_btn_pane_t1

0xb26c,	// (0x000761b7) listscroll_cmail_pane_ParamLimits

0xed62,	// (0x00079cad) main_sp_fs_email_pane_g1_ParamLimits

0xed6e,	// (0x00079cb9) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007ac30) main_sp_fs_email_pane_g_ParamLimits

0xf09a,	// (0x00079fe5) list_recal_day_pane_ParamLimits

0xf0ab,	// (0x00079ff6) mian_recal_day_pane_t1

0x8084,	// (0x00072fcf) list_single_dyc_row_text_pane_t4_ParamLimits

0x8084,	// (0x00072fcf) list_single_dyc_row_text_pane_t4

0x80cd,	// (0x00073018) list_single_dyc_row_text_pane_t5_ParamLimits

0x80cd,	// (0x00073018) list_single_dyc_row_text_pane_t5

0xa1a3,	// (0x000750ee) list_single_dyc_row_text_pane_t6_ParamLimits

0xa1a3,	// (0x000750ee) list_single_dyc_row_text_pane_t6

0x24bb,	// (0x0006d406) aid_mgn_list_cale_time_pane

0x959a,	// (0x000744e5) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small

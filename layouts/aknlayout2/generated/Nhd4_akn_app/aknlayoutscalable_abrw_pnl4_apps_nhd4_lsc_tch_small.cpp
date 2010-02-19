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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005bf5a };

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
0x0c29,	// (0x0005cb83) Screen

0x0c35,	// (0x0005cb8f) application_window

0x0ca7,	// (0x0005cc01) area_bottom_pane_ParamLimits

0x0ca7,	// (0x0005cc01) area_bottom_pane

0x0d04,	// (0x0005cc5e) area_top_pane_ParamLimits

0x0d04,	// (0x0005cc5e) area_top_pane

0x0d61,	// (0x0005ccbb) call_video_uplink_pane_ParamLimits

0x0d61,	// (0x0005ccbb) call_video_uplink_pane

0x0d8d,	// (0x0005cce7) main_pane_ParamLimits

0x0d8d,	// (0x0005cce7) main_pane

0xc27a,	// (0x000681d4) context_pane

0x3f91,	// (0x0005feeb) navi_pane

0x3fb9,	// (0x0005ff13) popup_cale_events_window_ParamLimits

0x3fb9,	// (0x0005ff13) popup_cale_events_window

0xc28d,	// (0x000681e7) popup_mup_playback_window

0x3fd1,	// (0x0005ff2b) signal_pane

0xa1af,	// (0x00066109) main_browser_pane

0xadc4,	// (0x00066d1e) main_burst_pane

0x3cf1,	// (0x0005fc4b) main_calc_pane

0xadc4,	// (0x00066d1e) main_cale_day_pane

0xa1af,	// (0x00066109) main_cale_month_pane

0xadc4,	// (0x00066d1e) main_cale_week_pane

0xadc4,	// (0x00066d1e) main_call_pane

0x9e11,	// (0x00065d6b) main_call_poc_pane

0xadc4,	// (0x00066d1e) main_camera_pane

0xadc4,	// (0x00066d1e) main_chi_dic_pane

0xac53,	// (0x00066bad) main_clock_pane

0x9e11,	// (0x00065d6b) main_fmradio_pane

0xadc4,	// (0x00066d1e) main_graph_messa_pane

0x9e11,	// (0x00065d6b) main_help_pane

0xa1af,	// (0x00066109) main_im_pane

0xa06c,	// (0x00065fc6) main_image_pane_ParamLimits

0xa06c,	// (0x00065fc6) main_image_pane

0x9e11,	// (0x00065d6b) main_location2_pane

0xadc4,	// (0x00066d1e) main_location_pane

0x9e11,	// (0x00065d6b) main_messa_pane

0x9e11,	// (0x00065d6b) main_mp2_pane

0xadc4,	// (0x00066d1e) main_mp_pane

0x9e11,	// (0x00065d6b) main_msg_pane

0x9e11,	// (0x00065d6b) main_mup_eq_pane

0x9e11,	// (0x00065d6b) main_mup_pane

0xa1af,	// (0x00066109) main_notes_pane

0x9e11,	// (0x00065d6b) main_pec_pane

0x9e11,	// (0x00065d6b) main_phob_pane

0x9e11,	// (0x00065d6b) main_pinb_pane

0x9e11,	// (0x00065d6b) main_postcard_pane

0x9e11,	// (0x00065d6b) main_qdial_pane

0xadc4,	// (0x00066d1e) main_skin_pane

0x9e11,	// (0x00065d6b) main_smil2_pane

0xadc4,	// (0x00066d1e) main_smil_pane

0xadc4,	// (0x00066d1e) main_video_pane

0xadc4,	// (0x00066d1e) main_video_tele_pane

0xa06c,	// (0x00065fc6) main_viewer_pane_ParamLimits

0xa06c,	// (0x00065fc6) main_viewer_pane

0xadc4,	// (0x00066d1e) main_vorec_pane

0x3d45,	// (0x0005fc9f) popup_blid_sat_info_window_ParamLimits

0x3d45,	// (0x0005fc9f) popup_blid_sat_info_window

0x3d9d,	// (0x0005fcf7) popup_dyc_status_message_window_ParamLimits

0x3d9d,	// (0x0005fcf7) popup_dyc_status_message_window

0x3db5,	// (0x0005fd0f) popup_grid_large_graphic_window_ParamLimits

0x3db5,	// (0x0005fd0f) popup_grid_large_graphic_window

0x3e6b,	// (0x0005fdc5) popup_loc_request_window_ParamLimits

0x3e6b,	// (0x0005fdc5) popup_loc_request_window

0x3f69,	// (0x0005fec3) popup_wml_address_window_ParamLimits

0x3f69,	// (0x0005fec3) popup_wml_address_window

0x3b2b,	// (0x0005fa85) call_muted_g1

0x37e3,	// (0x0005f73d) popup_call_audio_conf_window_ParamLimits

0x37e3,	// (0x0005f73d) popup_call_audio_conf_window

0x3b3f,	// (0x0005fa99) popup_call_audio_first_window_ParamLimits

0x3b3f,	// (0x0005fa99) popup_call_audio_first_window

0x3bb5,	// (0x0005fb0f) popup_call_audio_in_window_ParamLimits

0x3bb5,	// (0x0005fb0f) popup_call_audio_in_window

0x3bf1,	// (0x0005fb4b) popup_call_audio_out_window_ParamLimits

0x3bf1,	// (0x0005fb4b) popup_call_audio_out_window

0x3c2b,	// (0x0005fb85) popup_call_audio_second_window_ParamLimits

0x3c2b,	// (0x0005fb85) popup_call_audio_second_window

0x3c81,	// (0x0005fbdb) popup_call_audio_wait_window_ParamLimits

0x3c81,	// (0x0005fbdb) popup_call_audio_wait_window

0x3cb6,	// (0x0005fc10) popup_number_entry_window_ParamLimits

0x3cb6,	// (0x0005fc10) popup_number_entry_window

0x9a00,	// (0x0006595a) bg_popup_call_pane_cp05_ParamLimits

0x9a00,	// (0x0006595a) bg_popup_call_pane_cp05

0x9a20,	// (0x0006597a) popup_number_entry_window_t1

0x9a33,	// (0x0006598d) popup_number_entry_window_t2

0x9a45,	// (0x0006599f) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0006b041) popup_number_entry_window_t

0x9a57,	// (0x000659b1) text_title_cp2

0x9a6a,	// (0x000659c4) bg_popup_call_pane_cp_ParamLimits

0x9a6a,	// (0x000659c4) bg_popup_call_pane_cp

0x9a78,	// (0x000659d2) call_thumbnail_pane

0x9a80,	// (0x000659da) popup_call_audio_in_window_g1_ParamLimits

0x9a80,	// (0x000659da) popup_call_audio_in_window_g1

0x9a8c,	// (0x000659e6) popup_call_audio_in_window_g2_ParamLimits

0x9a8c,	// (0x000659e6) popup_call_audio_in_window_g2

0x9a98,	// (0x000659f2) popup_call_audio_in_window_g3_ParamLimits

0x9a98,	// (0x000659f2) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0006b04a) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0006b04a) popup_call_audio_in_window_g

0x9aa4,	// (0x000659fe) popup_call_audio_in_window_t1_ParamLimits

0x9aa4,	// (0x000659fe) popup_call_audio_in_window_t1

0x9abf,	// (0x00065a19) popup_call_audio_in_window_t2_ParamLimits

0x9abf,	// (0x00065a19) popup_call_audio_in_window_t2

0x9ada,	// (0x00065a34) popup_call_audio_in_window_t3_ParamLimits

0x9ada,	// (0x00065a34) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0006b051) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0006b051) popup_call_audio_in_window_t

0x9a6a,	// (0x000659c4) bg_popup_call_pane_cp01_ParamLimits

0x9a6a,	// (0x000659c4) bg_popup_call_pane_cp01

0x9a78,	// (0x000659d2) call_thumbnail_pane_cp02

0x9aed,	// (0x00065a47) call_type_pane_cp022

0x9af5,	// (0x00065a4f) popup_call_audio_out_window_g1_ParamLimits

0x9af5,	// (0x00065a4f) popup_call_audio_out_window_g1

0x9b07,	// (0x00065a61) popup_call_audio_out_window_g2_ParamLimits

0x9b07,	// (0x00065a61) popup_call_audio_out_window_g2

0x9b13,	// (0x00065a6d) popup_call_audio_out_window_g3_ParamLimits

0x9b13,	// (0x00065a6d) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0006b058) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0006b058) popup_call_audio_out_window_g

0x9b25,	// (0x00065a7f) popup_call_audio_out_window_t1_ParamLimits

0x9b25,	// (0x00065a7f) popup_call_audio_out_window_t1

0x9b3d,	// (0x00065a97) popup_call_audio_out_window_t2_ParamLimits

0x9b3d,	// (0x00065a97) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0006b05f) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0006b05f) popup_call_audio_out_window_t

0x9b52,	// (0x00065aac) bg_popup_call_pane_ParamLimits

0x9b52,	// (0x00065aac) bg_popup_call_pane

0x0f5d,	// (0x0005ceb7) call_thumbnail_pane_cp_ParamLimits

0x0f5d,	// (0x0005ceb7) call_thumbnail_pane_cp

0x9bd6,	// (0x00065b30) call_type_pane_cp01_ParamLimits

0x9bd6,	// (0x00065b30) call_type_pane_cp01

0x9c1a,	// (0x00065b74) popup_call_audio_first_window_g1_ParamLimits

0x9c1a,	// (0x00065b74) popup_call_audio_first_window_g1

0x9c66,	// (0x00065bc0) popup_call_audio_first_window_g2_ParamLimits

0x9c66,	// (0x00065bc0) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0006b064) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0006b064) popup_call_audio_first_window_g

0x9caa,	// (0x00065c04) popup_call_audio_first_window_t1_ParamLimits

0x9caa,	// (0x00065c04) popup_call_audio_first_window_t1

0x9d56,	// (0x00065cb0) popup_call_audio_first_window_t4_ParamLimits

0x9d56,	// (0x00065cb0) popup_call_audio_first_window_t4

0x9de2,	// (0x00065d3c) popup_call_audio_first_window_t5_ParamLimits

0x9de2,	// (0x00065d3c) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0006b069) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0006b069) popup_call_audio_first_window_t

0x9e11,	// (0x00065d6b) bg_popup_call_pane_cp02

0x9e1b,	// (0x00065d75) call_type_pane_cp023

0x9e23,	// (0x00065d7d) popup_call_audio_wait_window_g1

0x9e2b,	// (0x00065d85) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0006b070) popup_call_audio_wait_window_g

0x9e33,	// (0x00065d8d) popup_call_audio_wait_window_t3

0x9e41,	// (0x00065d9b) bg_popup_call_pane_cp03_ParamLimits

0x9e41,	// (0x00065d9b) bg_popup_call_pane_cp03

0x9ea1,	// (0x00065dfb) call_thumbnail_pane_cp011_ParamLimits

0x9ea1,	// (0x00065dfb) call_thumbnail_pane_cp011

0x9ead,	// (0x00065e07) call_type_pane_cp034_ParamLimits

0x9ead,	// (0x00065e07) call_type_pane_cp034

0x9ee9,	// (0x00065e43) popup_call_audio_second_window_g1_ParamLimits

0x9ee9,	// (0x00065e43) popup_call_audio_second_window_g1

0x9f25,	// (0x00065e7f) popup_call_audio_second_window_g2_ParamLimits

0x9f25,	// (0x00065e7f) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0006b075) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0006b075) popup_call_audio_second_window_g

0x9f61,	// (0x00065ebb) popup_call_audio_second_window_t1_ParamLimits

0x9f61,	// (0x00065ebb) popup_call_audio_second_window_t1

0x9fe2,	// (0x00065f3c) popup_call_audio_second_window_t2_ParamLimits

0x9fe2,	// (0x00065f3c) popup_call_audio_second_window_t2

0xa018,	// (0x00065f72) popup_call_audio_second_window_t3_ParamLimits

0xa018,	// (0x00065f72) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0006b07a) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0006b07a) popup_call_audio_second_window_t

0x9e11,	// (0x00065d6b) bg_popup_call_pane_cp04

0xa04e,	// (0x00065fa8) list_conf_pane

0xa056,	// (0x00065fb0) popup_call_audio_conf_window_t1

0xa064,	// (0x00065fbe) call_thumbnail_pane_g1

0xa06c,	// (0x00065fc6) bg_pinb_pane_ParamLimits

0xa06c,	// (0x00065fc6) bg_pinb_pane

0xa07a,	// (0x00065fd4) find_pinb_pane

0xa083,	// (0x00065fdd) listscroll_pinb_pane_ParamLimits

0xa083,	// (0x00065fdd) listscroll_pinb_pane

0xa092,	// (0x00065fec) pinb_bg_pane_g1

0x0f81,	// (0x0005cedb) pinb_bg_pane_g2

0x0f8d,	// (0x0005cee7) pinb_bg_pane_g3

0x0f99,	// (0x0005cef3) pinb_bg_pane_g4

0x0fa5,	// (0x0005ceff) pinb_bg_pane_g5

0x0fb1,	// (0x0005cf0b) pinb_bg_pane_g6

0x0fbc,	// (0x0005cf16) pinb_bg_pane_g7

0x0fc7,	// (0x0005cf21) pinb_bg_pane_g8

0x0fd2,	// (0x0005cf2c) pinb_bg_pane_g9

0x0fdc,	// (0x0005cf36) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0006b081) pinb_bg_pane_g

0x0ff1,	// (0x0005cf4b) grid_pinb_pane

0x0ffa,	// (0x0005cf54) list_pinb_pane

0x1003,	// (0x0005cf5d) scroll_pane_cp01_ParamLimits

0x1003,	// (0x0005cf5d) scroll_pane_cp01

0xa0a4,	// (0x00065ffe) find_pinb_pane_g1_ParamLimits

0xa0a4,	// (0x00065ffe) find_pinb_pane_g1

0xa0bc,	// (0x00066016) find_pinb_pane_t1

0xa0ce,	// (0x00066028) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0006b09b) find_pinb_pane_t

0xa0e3,	// (0x0006603d) input_focus_pane_cp01_ParamLimits

0xa0e3,	// (0x0006603d) input_focus_pane_cp01

0x1015,	// (0x0005cf6f) cell_pinb_pane_ParamLimits

0x1015,	// (0x0005cf6f) cell_pinb_pane

0x1047,	// (0x0005cfa1) cell_pinb_pane_g1_ParamLimits

0x1047,	// (0x0005cfa1) cell_pinb_pane_g1

0x1057,	// (0x0005cfb1) cell_pinb_pane_g2_ParamLimits

0x1057,	// (0x0005cfb1) cell_pinb_pane_g2

0xa0ef,	// (0x00066049) cell_pinb_pane_g3_ParamLimits

0xa0ef,	// (0x00066049) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0006b0a0) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0006b0a0) cell_pinb_pane_g

0x9e11,	// (0x00065d6b) grid_highlight_pane_cp01

0x1063,	// (0x0005cfbd) list_pinb_item_pane_ParamLimits

0x1063,	// (0x0005cfbd) list_pinb_item_pane

0x9e11,	// (0x00065d6b) list_highlight_pane_cp02

0xa0fb,	// (0x00066055) list_pinb_item_pane_g1_ParamLimits

0xa0fb,	// (0x00066055) list_pinb_item_pane_g1

0xa108,	// (0x00066062) list_pinb_item_pane_g2_ParamLimits

0xa108,	// (0x00066062) list_pinb_item_pane_g2

0x1077,	// (0x0005cfd1) list_pinb_item_pane_g3_ParamLimits

0x1077,	// (0x0005cfd1) list_pinb_item_pane_g3

0xa114,	// (0x0006606e) list_pinb_item_pane_g4_ParamLimits

0xa114,	// (0x0006606e) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0006b0a7) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0006b0a7) list_pinb_item_pane_g

0xa120,	// (0x0006607a) list_pinb_item_pane_t1_ParamLimits

0xa120,	// (0x0006607a) list_pinb_item_pane_t1

0x10a6,	// (0x0005d000) calc_display_pane

0x10ce,	// (0x0005d028) calc_paper_pane

0x10f1,	// (0x0005d04b) grid_calc_pane

0x9e11,	// (0x00065d6b) bg_list_pane_cp01

0x111f,	// (0x0005d079) clock_g1

0x1127,	// (0x0005d081) clock_g2

0x0001,

0xf156,	// (0x0006b0b0) clock_g

0x112f,	// (0x0005d089) clock_t1_ParamLimits

0x112f,	// (0x0005d089) clock_t1

0x1144,	// (0x0005d09e) clock_t2_ParamLimits

0x1144,	// (0x0005d09e) clock_t2

0x1156,	// (0x0005d0b0) clock_t3_ParamLimits

0x1156,	// (0x0005d0b0) clock_t3

0x1168,	// (0x0005d0c2) clock_t4_ParamLimits

0x1168,	// (0x0005d0c2) clock_t4

0x117a,	// (0x0005d0d4) clock_t5_ParamLimits

0x117a,	// (0x0005d0d4) clock_t5

0x118f,	// (0x0005d0e9) clock_t6_ParamLimits

0x118f,	// (0x0005d0e9) clock_t6

0x11a1,	// (0x0005d0fb) clock_t7_ParamLimits

0x11a1,	// (0x0005d0fb) clock_t7

0x11b3,	// (0x0005d10d) clock_t8_ParamLimits

0x11b3,	// (0x0005d10d) clock_t8

0x11c7,	// (0x0005d121) clock_t9_ParamLimits

0x11c7,	// (0x0005d121) clock_t9

0x0008,

0xf15b,	// (0x0006b0b5) clock_t_ParamLimits

0xf15b,	// (0x0006b0b5) clock_t

0xa13f,	// (0x00066099) popup_clock_analogue_window_cp02

0xa13f,	// (0x00066099) popup_clock_digital_window_cp01

0xa147,	// (0x000660a1) listscroll_help_pane

0x9e11,	// (0x00065d6b) phob_pre_status_pane

0xa151,	// (0x000660ab) grid_qdial_pane

0x9e11,	// (0x00065d6b) listscroll_mce_pane

0xa15b,	// (0x000660b5) bg_notes_pane

0xa169,	// (0x000660c3) list_notes_pane

0x11db,	// (0x0005d135) scroll_pane_cp06

0xa177,	// (0x000660d1) bg_calc_paper_pane

0xa195,	// (0x000660ef) list_calc_pane

0xa1af,	// (0x00066109) bg_calc_display_pane

0x11ef,	// (0x0005d149) calc_display_pane_t1

0x1201,	// (0x0005d15b) calc_display_pane_t2

0xa1bb,	// (0x00066115) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0006b0c8) calc_display_pane_t

0x1213,	// (0x0005d16d) cell_calc_pane_ParamLimits

0x1213,	// (0x0005d16d) cell_calc_pane

0xa1cd,	// (0x00066127) bg_calc_paper_pane_g1

0xa1d9,	// (0x00066133) bg_calc_paper_pane_g2

0xa1e5,	// (0x0006613f) bg_calc_paper_pane_g3

0xa1f1,	// (0x0006614b) bg_calc_paper_pane_g4

0xa1fd,	// (0x00066157) bg_calc_paper_pane_g5

0x124a,	// (0x0005d1a4) bg_calc_paper_pane_g6

0x125b,	// (0x0005d1b5) bg_calc_paper_pane_g7

0x126c,	// (0x0005d1c6) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0006b0cf) bg_calc_paper_pane_g

0x127f,	// (0x0005d1d9) calc_bg_paper_pane_g9

0x1292,	// (0x0005d1ec) list_calc_item_pane_ParamLimits

0x1292,	// (0x0005d1ec) list_calc_item_pane

0xa209,	// (0x00066163) list_calc_item_pane_g1

0xa216,	// (0x00066170) list_calc_item_pane_t1_ParamLimits

0xa216,	// (0x00066170) list_calc_item_pane_t1

0x12aa,	// (0x0005d204) list_calc_item_pane_t2_ParamLimits

0x12aa,	// (0x0005d204) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0006b0e0) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0006b0e0) list_calc_item_pane_t

0xa228,	// (0x00066182) cell_calc_pane_g1

0xa232,	// (0x0006618c) grid_highlight_pane_cp02

0xa254,	// (0x000661ae) bg_calc_display_pane_g1

0xa25d,	// (0x000661b7) bg_calc_display_pane_g2

0xa267,	// (0x000661c1) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0006b0ea) bg_calc_display_pane_g

0x12dc,	// (0x0005d236) cell_qdial_pane_ParamLimits

0x12dc,	// (0x0005d236) cell_qdial_pane

0x12f0,	// (0x0005d24a) cell_qdial_pane_g1_ParamLimits

0x12f0,	// (0x0005d24a) cell_qdial_pane_g1

0x1306,	// (0x0005d260) cell_qdial_pane_g2_ParamLimits

0x1306,	// (0x0005d260) cell_qdial_pane_g2

0xa270,	// (0x000661ca) cell_qdial_pane_g3_ParamLimits

0xa270,	// (0x000661ca) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0006b0f1) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0006b0f1) cell_qdial_pane_g

0x132d,	// (0x0005d287) cell_qdial_pane_t1_ParamLimits

0x132d,	// (0x0005d287) cell_qdial_pane_t1

0x1345,	// (0x0005d29f) cell_qdial_pane_t2_ParamLimits

0x1345,	// (0x0005d29f) cell_qdial_pane_t2

0x1358,	// (0x0005d2b2) cell_qdial_pane_t3_ParamLimits

0x1358,	// (0x0005d2b2) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0006b0fa) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0006b0fa) cell_qdial_pane_t

0x9e11,	// (0x00065d6b) grid_highlight_pane_cp04

0xa27c,	// (0x000661d6) thumbnail_qdial_pane_ParamLimits

0xa27c,	// (0x000661d6) thumbnail_qdial_pane

0xa2d8,	// (0x00066232) list_help_pane

0xa2e1,	// (0x0006623b) scroll_pane_cp02

0x136b,	// (0x0005d2c5) help_list_pane_t1_ParamLimits

0x136b,	// (0x0005d2c5) help_list_pane_t1

0xa2ea,	// (0x00066244) bg_notes_pane_g2

0xa2f2,	// (0x0006624c) bg_notes_pane_g3

0xa2fa,	// (0x00066254) notes_bg_pane_g1

0xa302,	// (0x0006625c) notes_bg_pane_g4

0xa30a,	// (0x00066264) notes_bg_pane_g5

0xa312,	// (0x0006626c) notes_bg_pane_g6

0xa31a,	// (0x00066274) notes_bg_pane_g7

0xa322,	// (0x0006627c) notes_bg_pane_g8

0xa32a,	// (0x00066284) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0006b118) notes_bg_pane_g

0x138b,	// (0x0005d2e5) list_notes_text_pane_ParamLimits

0x138b,	// (0x0005d2e5) list_notes_text_pane

0xa332,	// (0x0006628c) list_notes_text_pane_g1

0x13a2,	// (0x0005d2fc) list_notes_text_pane_t1

0xa1af,	// (0x00066109) listscroll_cale_week_pane

0x13cd,	// (0x0005d327) bg_cale_heading_pane

0xa34c,	// (0x000662a6) bg_cale_pane_cp01

0x13e5,	// (0x0005d33f) cale_week_corner_pane

0x13f6,	// (0x0005d350) cale_week_day_heading_pane

0x140e,	// (0x0005d368) cale_week_scroll_pane_g1

0x1423,	// (0x0005d37d) cale_week_scroll_pane_g2

0x1434,	// (0x0005d38e) cale_week_scroll_pane_g3

0x1445,	// (0x0005d39f) cale_week_scroll_pane_g4

0x1456,	// (0x0005d3b0) cale_week_scroll_pane_g5

0x1469,	// (0x0005d3c3) cale_week_scroll_pane_g6

0x147c,	// (0x0005d3d6) cale_week_scroll_pane_g7

0x148f,	// (0x0005d3e9) cale_week_scroll_pane_g8

0x14a2,	// (0x0005d3fc) cale_week_scroll_pane_g9

0x14b3,	// (0x0005d40d) cale_week_scroll_pane_g10

0x14c4,	// (0x0005d41e) cale_week_scroll_pane_g11

0x14d5,	// (0x0005d42f) cale_week_scroll_pane_g12

0x14e6,	// (0x0005d440) cale_week_scroll_pane_g13

0x14f7,	// (0x0005d451) cale_week_scroll_pane_g14

0x1508,	// (0x0005d462) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0006b127) cale_week_scroll_pane_g

0x151d,	// (0x0005d477) cale_week_time_pane

0x1530,	// (0x0005d48a) grid_cale_week_pane

0x1545,	// (0x0005d49f) scroll_pane_cp08

0x155f,	// (0x0005d4b9) cell_cale_week_pane_ParamLimits

0x155f,	// (0x0005d4b9) cell_cale_week_pane

0x159f,	// (0x0005d4f9) cale_week_day_heading_pane_t1

0x15b3,	// (0x0005d50d) cale_week_day_heading_pane_t2

0x15c7,	// (0x0005d521) cale_week_day_heading_pane_t3

0x15db,	// (0x0005d535) cale_week_day_heading_pane_t4

0x15ef,	// (0x0005d549) cale_week_day_heading_pane_t5

0x1603,	// (0x0005d55d) cale_week_day_heading_pane_t6

0x1619,	// (0x0005d573) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0006b146) cale_week_day_heading_pane_t

0xa377,	// (0x000662d1) bg_cale_side_pane

0x162d,	// (0x0005d587) cale_week_time_pane_t1

0x1645,	// (0x0005d59f) cale_week_time_pane_t2

0x165d,	// (0x0005d5b7) cale_week_time_pane_t3

0x1675,	// (0x0005d5cf) cale_week_time_pane_t4

0x168d,	// (0x0005d5e7) cale_week_time_pane_t5

0x16a5,	// (0x0005d5ff) cale_week_time_pane_t6

0x16bd,	// (0x0005d617) cale_week_time_pane_t7

0x16d5,	// (0x0005d62f) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0006b155) cale_week_time_pane_t

0x16ed,	// (0x0005d647) cell_cale_week_pane_g2

0x1706,	// (0x0005d660) cell_cale_week_pane_g3_ParamLimits

0x1706,	// (0x0005d660) cell_cale_week_pane_g3

0xa385,	// (0x000662df) grid_highlight_pane_cp07

0xa38d,	// (0x000662e7) listscroll_gms_pane

0xa397,	// (0x000662f1) grid_gms_pane

0xa3a0,	// (0x000662fa) listscroll_gms_pane_g1

0xa3a8,	// (0x00066302) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0006b166) listscroll_gms_pane_g

0x171e,	// (0x0005d678) scroll_pane_cp010

0x1729,	// (0x0005d683) cell_gms_pane_ParamLimits

0x1729,	// (0x0005d683) cell_gms_pane

0x173b,	// (0x0005d695) cell_gms_pane_g1

0xa3b0,	// (0x0006630a) cell_gms_pane_g2

0xa332,	// (0x0006628c) cell_gms_pane_g3

0xa3b8,	// (0x00066312) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0006b16b) cell_gms_pane_g

0xa3c1,	// (0x0006631b) grid_highlight_pane_cp09

0x3ad3,	// (0x0005fa2d) phob_pre_status_pane_g1

0x3adb,	// (0x0005fa35) phob_pre_status_pane_g2

0x3ae3,	// (0x0005fa3d) phob_pre_status_pane_g3

0x3aeb,	// (0x0005fa45) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0006b55a) phob_pre_status_pane_g

0x3afd,	// (0x0005fa57) phob_pre_status_pane_t1

0x3b0b,	// (0x0005fa65) phob_pre_status_pane_t2

0x3b1b,	// (0x0005fa75) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0006b565) phob_pre_status_pane_t

0x9e11,	// (0x00065d6b) bg_list_pane_cp05

0xa3d1,	// (0x0006632b) grid_vorec_pane

0xa3d9,	// (0x00066333) vorec_t1

0xa3e7,	// (0x00066341) vorec_t2

0xa3f5,	// (0x0006634f) vorec_t3

0xa403,	// (0x0006635d) vorec_t4

0xa411,	// (0x0006636b) vorec_t5

0xa41f,	// (0x00066379) vorec_t6

0x0006,

0xf21a,	// (0x0006b174) vorec_t

0xa43b,	// (0x00066395) wait_bar_pane_cp01

0xa443,	// (0x0006639d) cell_vorec_pane_ParamLimits

0xa443,	// (0x0006639d) cell_vorec_pane

0xa456,	// (0x000663b0) cell_vorec_pane_g1

0x9e11,	// (0x00065d6b) grid_highlight_pane_cp05

0x175b,	// (0x0005d6b5) cams_zoom_pane

0x176a,	// (0x0005d6c4) image_vga_pane

0x1784,	// (0x0005d6de) main_camera_pane_g1

0x1796,	// (0x0005d6f0) main_camera_pane_g2

0x17a8,	// (0x0005d702) main_camera_pane_g3

0x17ba,	// (0x0005d714) main_camera_pane_g4

0x17cc,	// (0x0005d726) main_camera_pane_g5

0x17de,	// (0x0005d738) main_camera_pane_g6

0x17f0,	// (0x0005d74a) main_camera_pane_g7

0x0007,

0xf229,	// (0x0006b183) main_camera_pane_g

0x1802,	// (0x0005d75c) main_camera_pane_t1

0x1818,	// (0x0005d772) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0006b194) main_camera_pane_t

0x1854,	// (0x0005d7ae) cams_zoom_pane_cp_ParamLimits

0x1854,	// (0x0005d7ae) cams_zoom_pane_cp

0x187c,	// (0x0005d7d6) image_cif_pane_ParamLimits

0x187c,	// (0x0005d7d6) image_cif_pane

0x18b7,	// (0x0005d811) image_subqcif_pane

0x18bf,	// (0x0005d819) main_video_pane_g1_ParamLimits

0x18bf,	// (0x0005d819) main_video_pane_g1

0x18e3,	// (0x0005d83d) main_video_pane_g2_ParamLimits

0x18e3,	// (0x0005d83d) main_video_pane_g2

0x1919,	// (0x0005d873) main_video_pane_g3_ParamLimits

0x1919,	// (0x0005d873) main_video_pane_g3

0x1949,	// (0x0005d8a3) main_video_pane_g4_ParamLimits

0x1949,	// (0x0005d8a3) main_video_pane_g4

0x1979,	// (0x0005d8d3) main_video_pane_g5_ParamLimits

0x1979,	// (0x0005d8d3) main_video_pane_g5

0xa46c,	// (0x000663c6) main_video_pane_g6_ParamLimits

0xa46c,	// (0x000663c6) main_video_pane_g6

0x0006,

0xf23f,	// (0x0006b199) main_video_pane_g_ParamLimits

0xf23f,	// (0x0006b199) main_video_pane_g

0x19a4,	// (0x0005d8fe) main_video_pane_t1_ParamLimits

0x19a4,	// (0x0005d8fe) main_video_pane_t1

0xa486,	// (0x000663e0) cams_zoom_pane_g1

0xa48f,	// (0x000663e9) cams_zoom_pane_g2

0xa498,	// (0x000663f2) cams_zoom_pane_g3

0xa4a1,	// (0x000663fb) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0006b1a8) cams_zoom_pane_g

0x1a01,	// (0x0005d95b) grid_cams_pane

0x1a1b,	// (0x0005d975) linegrid_cams_pane

0x1a2e,	// (0x0005d988) cell_cams_pane_ParamLimits

0x1a2e,	// (0x0005d988) cell_cams_pane

0xa4aa,	// (0x00066404) cams_burst_image_pane

0xa4b2,	// (0x0006640c) cell_cams_pane_g1

0x9e11,	// (0x00065d6b) grid_highlight_pane_cp03

0xa228,	// (0x00066182) mp_bg_pane_g1

0x9e11,	// (0x00065d6b) bg_list_pane_cp03

0xc152,	// (0x000680ac) bg_mp_pane

0xc15a,	// (0x000680b4) grid_mp_pane

0xc162,	// (0x000680bc) media_player_g1

0xc16a,	// (0x000680c4) media_player_t1

0xc178,	// (0x000680d2) media_player_t2

0xc186,	// (0x000680e0) media_player_t3

0xc194,	// (0x000680ee) media_player_t4

0xc1a2,	// (0x000680fc) media_player_t5

0xc1b0,	// (0x0006810a) media_player_t6

0xc1be,	// (0x00068118) media_player_t7

0x0006,

0xf5ea,	// (0x0006b544) media_player_t

0xc1cc,	// (0x00068126) wait_bar_pane_cp02

0xf5cf,	// (0x0006b529) main_usb_pane_t

0x3aca,	// (0x0005fa24) cell_mp_pane

0xa228,	// (0x00066182) cell_mp_pane_g1

0x9e11,	// (0x00065d6b) grid_highlight_pane_cp06

0xa4ba,	// (0x00066414) grid_skin_colour_pane

0xa4c2,	// (0x0006641c) list_highlight_pane_cp03

0x1b46,	// (0x0005daa0) skin_g1

0xa4ca,	// (0x00066424) skin_t1

0xa4d9,	// (0x00066433) skin_t2

0x0001,

0xf283,	// (0x0006b1dd) skin_t

0x1b4e,	// (0x0005daa8) cell_skin_colour_pane_ParamLimits

0x1b4e,	// (0x0005daa8) cell_skin_colour_pane

0xa4e7,	// (0x00066441) cell_skin_colour_pane_g1

0x1bc7,	// (0x0005db21) call_video_g1_ParamLimits

0x1bc7,	// (0x0005db21) call_video_g1

0x1be3,	// (0x0005db3d) call_video_g2_ParamLimits

0x1be3,	// (0x0005db3d) call_video_g2

0x0001,

0xf288,	// (0x0006b1e2) call_video_g_ParamLimits

0xf288,	// (0x0006b1e2) call_video_g

0x1c35,	// (0x0005db8f) call_video_uplink_pane_cp1_ParamLimits

0x1c35,	// (0x0005db8f) call_video_uplink_pane_cp1

0xa4f9,	// (0x00066453) call_video_uplink_pane_cp2

0x1cd4,	// (0x0005dc2e) video_down_crop_pane_ParamLimits

0x1cd4,	// (0x0005dc2e) video_down_crop_pane

0x1dbd,	// (0x0005dd17) video_down_pane_ParamLimits

0x1dbd,	// (0x0005dd17) video_down_pane

0xa501,	// (0x0006645b) video_down_subqcif_pane_ParamLimits

0xa501,	// (0x0006645b) video_down_subqcif_pane

0xa519,	// (0x00066473) video_down_subqcif_pane_cp_ParamLimits

0xa519,	// (0x00066473) video_down_subqcif_pane_cp

0xa53f,	// (0x00066499) im_reading_pane_ParamLimits

0xa53f,	// (0x00066499) im_reading_pane

0x1ecb,	// (0x0005de25) im_writing_pane_ParamLimits

0x1ecb,	// (0x0005de25) im_writing_pane

0x1ee1,	// (0x0005de3b) im_reading_pane_t1

0xa559,	// (0x000664b3) list_im_pane

0xa56a,	// (0x000664c4) scroll_pane_cp07

0x1f1d,	// (0x0005de77) im_writing_pane_t1_ParamLimits

0x1f1d,	// (0x0005de77) im_writing_pane_t1

0xa583,	// (0x000664dd) im_writing_pane_t2_ParamLimits

0xa583,	// (0x000664dd) im_writing_pane_t2

0x0001,

0xf292,	// (0x0006b1ec) im_writing_pane_t_ParamLimits

0xf292,	// (0x0006b1ec) im_writing_pane_t

0x9e11,	// (0x00065d6b) input_focus_pane_cp04

0x9e11,	// (0x00065d6b) input_focus_pane_cp05

0x1f32,	// (0x0005de8c) list_im_single_pane_ParamLimits

0x1f32,	// (0x0005de8c) list_im_single_pane

0x1f48,	// (0x0005dea2) list_single_im_pane_t1

0x3a8a,	// (0x0005f9e4) blid_accuracy_pane

0x3a92,	// (0x0005f9ec) blid_compass_pane

0x3a9c,	// (0x0005f9f6) main_location_t1

0x3aac,	// (0x0005fa06) main_location_t2

0x3abc,	// (0x0005fa16) main_location_t3

0x0002,

0xf5f9,	// (0x0006b553) main_location_t

0x9e11,	// (0x00065d6b) aid_levels_location

0xa228,	// (0x00066182) blid_accuracy_pane_g1

0xa228,	// (0x00066182) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0006b24e) blid_accuracy_pane_g

0xa5cb,	// (0x00066525) wml_content_pane

0xa609,	// (0x00066563) wml_button_pane_ParamLimits

0xa609,	// (0x00066563) wml_button_pane

0x1f57,	// (0x0005deb1) wml_list_single_large_pane_ParamLimits

0x1f57,	// (0x0005deb1) wml_list_single_large_pane

0x1f6e,	// (0x0005dec8) wml_list_single_medium_pane_ParamLimits

0x1f6e,	// (0x0005dec8) wml_list_single_medium_pane

0x1f86,	// (0x0005dee0) wml_list_single_small_pane_ParamLimits

0x1f86,	// (0x0005dee0) wml_list_single_small_pane

0xa61d,	// (0x00066577) wml_selection_box_pane_ParamLimits

0xa61d,	// (0x00066577) wml_selection_box_pane

0xa630,	// (0x0006658a) wml_list_single_pane_t1

0xa63f,	// (0x00066599) wml_list_single_medium_pane_t1

0xa64e,	// (0x000665a8) wml_list_single_large_pane_t1

0xa65d,	// (0x000665b7) input_focus_pane_cp02_ParamLimits

0xa65d,	// (0x000665b7) input_focus_pane_cp02

0xa670,	// (0x000665ca) wml_selection_box_pane_g1

0xa679,	// (0x000665d3) wml_selection_box_pane_t1_ParamLimits

0xa679,	// (0x000665d3) wml_selection_box_pane_t1

0xa06c,	// (0x00065fc6) bg_wml_button_pane_ParamLimits

0xa06c,	// (0x00065fc6) bg_wml_button_pane

0xa691,	// (0x000665eb) wml_button_pane_g1

0xa699,	// (0x000665f3) wml_button_pane_t1

0xa691,	// (0x000665eb) wml_button_bg_pane_g1

0xa6a9,	// (0x00066603) wml_button_bg_pane_g2

0xa6b1,	// (0x0006660b) wml_button_bg_pane_g3

0xa6b9,	// (0x00066613) wml_button_bg_pane_g4

0xa6c1,	// (0x0006661b) wml_button_bg_pane_g5

0xa6c9,	// (0x00066623) wml_button_bg_pane_g6

0xa6d1,	// (0x0006662b) wml_button_bg_pane_g7

0xa6d9,	// (0x00066633) wml_button_bg_pane_g8

0xa6e1,	// (0x0006663b) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0006b1f1) wml_button_bg_pane_g

0x1fa4,	// (0x0005defe) bg_list_pane_cp02

0xa6e9,	// (0x00066643) mce_header_pane_ParamLimits

0xa6e9,	// (0x00066643) mce_header_pane

0xa6ff,	// (0x00066659) mce_icon_pane

0xa6ff,	// (0x00066659) mce_image_pane

0xa708,	// (0x00066662) mce_text_pane_ParamLimits

0xa708,	// (0x00066662) mce_text_pane

0x1fac,	// (0x0005df06) scroll_pane_cp03

0xa601,	// (0x0006655b) scroll_pane_cp04

0xa71b,	// (0x00066675) scroll_pane_cp05_ParamLimits

0xa71b,	// (0x00066675) scroll_pane_cp05

0x1fb6,	// (0x0005df10) mce_header_field_pane_ParamLimits

0x1fb6,	// (0x0005df10) mce_header_field_pane

0x1fcd,	// (0x0005df27) mce_header_field_pane_2_ParamLimits

0x1fcd,	// (0x0005df27) mce_header_field_pane_2

0x1fe3,	// (0x0005df3d) mce_header_field_pane_3

0x1feb,	// (0x0005df45) list_single_mce_message_pane_ParamLimits

0x1feb,	// (0x0005df45) list_single_mce_message_pane

0x2003,	// (0x0005df5d) list_single_mce_smart_pane_ParamLimits

0x2003,	// (0x0005df5d) list_single_mce_smart_pane

0xa727,	// (0x00066681) input_focus_pane_cp03

0xa730,	// (0x0006668a) list_header_data_pane

0x2026,	// (0x0005df80) mce_header_field_pane_t1

0x2036,	// (0x0005df90) list_single_mce_header_pane_ParamLimits

0x2036,	// (0x0005df90) list_single_mce_header_pane

0xa738,	// (0x00066692) list_single_mce_header_pane_t1

0xa747,	// (0x000666a1) list_single_mce_message_pane_g1

0xa74f,	// (0x000666a9) list_single_mce_message_pane_t1

0x2068,	// (0x0005dfc2) bg_cale_heading_pane_cp01_ParamLimits

0x2068,	// (0x0005dfc2) bg_cale_heading_pane_cp01

0xa75d,	// (0x000666b7) bg_cale_pane_cp02_ParamLimits

0xa75d,	// (0x000666b7) bg_cale_pane_cp02

0x208b,	// (0x0005dfe5) cale_month_corner_pane

0x20a1,	// (0x0005dffb) cale_month_day_heading_pane_ParamLimits

0x20a1,	// (0x0005dffb) cale_month_day_heading_pane

0x20d4,	// (0x0005e02e) cale_month_pane_g1_ParamLimits

0x20d4,	// (0x0005e02e) cale_month_pane_g1

0x20f0,	// (0x0005e04a) cale_month_pane_g2_ParamLimits

0x20f0,	// (0x0005e04a) cale_month_pane_g2

0x210b,	// (0x0005e065) cale_month_pane_g3_ParamLimits

0x210b,	// (0x0005e065) cale_month_pane_g3

0x2137,	// (0x0005e091) cale_month_pane_g4_ParamLimits

0x2137,	// (0x0005e091) cale_month_pane_g4

0x2163,	// (0x0005e0bd) cale_month_pane_g5_ParamLimits

0x2163,	// (0x0005e0bd) cale_month_pane_g5

0x2197,	// (0x0005e0f1) cale_month_pane_g6_ParamLimits

0x2197,	// (0x0005e0f1) cale_month_pane_g6

0x21d3,	// (0x0005e12d) cale_month_pane_g7_ParamLimits

0x21d3,	// (0x0005e12d) cale_month_pane_g7

0x220f,	// (0x0005e169) cale_month_pane_g8_ParamLimits

0x220f,	// (0x0005e169) cale_month_pane_g8

0x224b,	// (0x0005e1a5) cale_month_pane_g9_ParamLimits

0x224b,	// (0x0005e1a5) cale_month_pane_g9

0x2285,	// (0x0005e1df) cale_month_pane_g10_ParamLimits

0x2285,	// (0x0005e1df) cale_month_pane_g10

0x22bf,	// (0x0005e219) cale_month_pane_g11_ParamLimits

0x22bf,	// (0x0005e219) cale_month_pane_g11

0x22f9,	// (0x0005e253) cale_month_pane_g12_ParamLimits

0x22f9,	// (0x0005e253) cale_month_pane_g12

0x2333,	// (0x0005e28d) cale_month_pane_g13_ParamLimits

0x2333,	// (0x0005e28d) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0006b204) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0006b204) cale_month_pane_g

0x236d,	// (0x0005e2c7) cale_month_week_pane

0x2380,	// (0x0005e2da) grid_cale_month_pane_ParamLimits

0x2380,	// (0x0005e2da) grid_cale_month_pane

0x23ae,	// (0x0005e308) cale_month_day_heading_pane_t1

0x240c,	// (0x0005e366) cale_month_day_heading_pane_t2

0x2471,	// (0x0005e3cb) cale_month_day_heading_pane_t3

0x24d6,	// (0x0005e430) cale_month_day_heading_pane_t4

0x253b,	// (0x0005e495) cale_month_day_heading_pane_t5

0x25b0,	// (0x0005e50a) cale_month_day_heading_pane_t6

0x2625,	// (0x0005e57f) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0006b21f) cale_month_day_heading_pane_t

0xa377,	// (0x000662d1) bg_cale_side_pane_cp01

0x269a,	// (0x0005e5f4) cale_month_week_pane_t1

0x26b1,	// (0x0005e60b) cale_month_week_pane_t2

0x26c8,	// (0x0005e622) cale_month_week_pane_t3

0x26df,	// (0x0005e639) cale_month_week_pane_t4

0x26f6,	// (0x0005e650) cale_month_week_pane_t5

0x270d,	// (0x0005e667) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0006b22e) cale_month_week_pane_t

0x2724,	// (0x0005e67e) cell_cale_month_pane_ParamLimits

0x2724,	// (0x0005e67e) cell_cale_month_pane

0xa792,	// (0x000666ec) cell_cale_month_pane_g1

0x2824,	// (0x0005e77e) cell_cale_month_pane_t1_ParamLimits

0x2824,	// (0x0005e77e) cell_cale_month_pane_t1

0xa385,	// (0x000662df) grid_highlight_pane_cp08

0xa228,	// (0x00066182) main_smil_g1

0x2840,	// (0x0005e79a) smil_status_pane

0xa79e,	// (0x000666f8) smil_text_pane

0xc06a,	// (0x00067fc4) bg_popup_call3_rect_pane_g8

0xc072,	// (0x00067fcc) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0006b4e7) bg_popup_call3_rect_pane_g

0xc2f4,	// (0x0006824e) smil_status_volume_pane_g1

0xa7a8,	// (0x00066702) smil_status_pane_t1

0xc327,	// (0x00068281) volume_smil_pane

0xa7bf,	// (0x00066719) list_smil_text_pane

0x2855,	// (0x0005e7af) scroll_pane_cp011

0x2860,	// (0x0005e7ba) smil_text_list_pane_t1_ParamLimits

0x2860,	// (0x0005e7ba) smil_text_list_pane_t1

0xa7c9,	// (0x00066723) aid_volume_smil_ParamLimits

0xa7c9,	// (0x00066723) aid_volume_smil

0xa228,	// (0x00066182) smil_volume_pane_g1

0xa228,	// (0x00066182) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0006b24e) smil_volume_pane_g

0xa1af,	// (0x00066109) listscroll_cale_day_pane

0xa7eb,	// (0x00066745) bg_cale_pane

0xa803,	// (0x0006675d) list_cale_pane

0xa814,	// (0x0006676e) scroll_pane_cp09

0xa825,	// (0x0006677f) cale_bg_pane_g1

0xa82d,	// (0x00066787) cale_bg_pane_g2

0xa835,	// (0x0006678f) cale_bg_pane_g3

0xa83d,	// (0x00066797) cale_bg_pane_g4

0xa845,	// (0x0006679f) cale_bg_pane_g5

0xa84d,	// (0x000667a7) cale_bg_pane_g6

0xa855,	// (0x000667af) cale_bg_pane_g7

0xa85d,	// (0x000667b7) cale_bg_pane_g8

0xa865,	// (0x000667bf) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0006b253) cale_bg_pane_g

0x28b4,	// (0x0005e80e) list_cale_time_pane_ParamLimits

0x28b4,	// (0x0005e80e) list_cale_time_pane

0x28c9,	// (0x0005e823) list_cale_time_pane_g1_ParamLimits

0x28c9,	// (0x0005e823) list_cale_time_pane_g1

0xa86d,	// (0x000667c7) list_cale_time_pane_g2_ParamLimits

0xa86d,	// (0x000667c7) list_cale_time_pane_g2

0x28d5,	// (0x0005e82f) list_cale_time_pane_g3_ParamLimits

0x28d5,	// (0x0005e82f) list_cale_time_pane_g3

0x28f1,	// (0x0005e84b) list_cale_time_pane_g4_ParamLimits

0x28f1,	// (0x0005e84b) list_cale_time_pane_g4

0x28ff,	// (0x0005e859) list_cale_time_pane_g5_ParamLimits

0x28ff,	// (0x0005e859) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0006b266) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0006b266) list_cale_time_pane_g

0x290d,	// (0x0005e867) list_cale_time_pane_t1_ParamLimits

0x290d,	// (0x0005e867) list_cale_time_pane_t1

0x2935,	// (0x0005e88f) list_cale_time_pane_t2_ParamLimits

0x2935,	// (0x0005e88f) list_cale_time_pane_t2

0x2cd7,	// (0x0005ec31) aid_blid_cardinal_pane

0x2d15,	// (0x0005ec6f) compass_pane_t4

0x295d,	// (0x0005e8b7) list_cale_time_pane_t4_ParamLimits

0x295d,	// (0x0005e8b7) list_cale_time_pane_t4

0x2d23,	// (0x0005ec7d) compass_pane_t5

0x2d31,	// (0x0005ec8b) compass_pane_t6

0x2d3f,	// (0x0005ec99) compass_pane_t7

0xad16,	// (0x00066c70) navi_pane_cc_t1

0xae7d,	// (0x00066dd7) aid_phob_thumbnail_center_pane

0x349e,	// (0x0005f3f8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0006b273) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0006b273) list_cale_time_pane_t

0x9a6a,	// (0x000659c4) bg_popup_window_pane_cp02_ParamLimits

0x9a6a,	// (0x000659c4) bg_popup_window_pane_cp02

0xa887,	// (0x000667e1) heading_pane_cp01_ParamLimits

0xa887,	// (0x000667e1) heading_pane_cp01

0xa893,	// (0x000667ed) loc_req_pane_ParamLimits

0xa893,	// (0x000667ed) loc_req_pane

0xa8a3,	// (0x000667fd) loc_type_pane_ParamLimits

0xa8a3,	// (0x000667fd) loc_type_pane

0xa8b5,	// (0x0006680f) loc_type_pane_t1_ParamLimits

0xa8b5,	// (0x0006680f) loc_type_pane_t1

0xa8c7,	// (0x00066821) loc_type_pane_t2_ParamLimits

0xa8c7,	// (0x00066821) loc_type_pane_t2

0xa8d9,	// (0x00066833) loc_type_pane_t3_ParamLimits

0xa8d9,	// (0x00066833) loc_type_pane_t3

0x0002,

0xf320,	// (0x0006b27a) loc_type_pane_t_ParamLimits

0xf320,	// (0x0006b27a) loc_type_pane_t

0xa8eb,	// (0x00066845) list_loc_req_pane

0xa8f5,	// (0x0006684f) scroll_pane_cp012

0x2985,	// (0x0005e8df) list_single_loc_request_popup_menu_pane_ParamLimits

0x2985,	// (0x0005e8df) list_single_loc_request_popup_menu_pane

0xa900,	// (0x0006685a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa900,	// (0x0006685a) list_single_loc_request_popup_menu_pane_g1

0xa90c,	// (0x00066866) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa90c,	// (0x00066866) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0006b281) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0006b281) list_single_loc_request_popup_menu_pane_g

0xa918,	// (0x00066872) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa918,	// (0x00066872) list_single_loc_request_popup_menu_pane_t1

0xa06c,	// (0x00065fc6) bg_popup_window_pane_cp03_ParamLimits

0xa06c,	// (0x00065fc6) bg_popup_window_pane_cp03

0xa92e,	// (0x00066888) heading_loc_req_pane_ParamLimits

0xa92e,	// (0x00066888) heading_loc_req_pane

0x2992,	// (0x0005e8ec) popup_dyc_status_message_window_g1_ParamLimits

0x2992,	// (0x0005e8ec) popup_dyc_status_message_window_g1

0x29a6,	// (0x0005e900) popup_dyc_status_message_window_t1_ParamLimits

0x29a6,	// (0x0005e900) popup_dyc_status_message_window_t1

0x29bb,	// (0x0005e915) popup_dyc_status_message_window_t2_ParamLimits

0x29bb,	// (0x0005e915) popup_dyc_status_message_window_t2

0x29d0,	// (0x0005e92a) popup_dyc_status_message_window_t3_ParamLimits

0x29d0,	// (0x0005e92a) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0006b286) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0006b286) popup_dyc_status_message_window_t

0x9e11,	// (0x00065d6b) bg_heading_pane_cp01

0xa93a,	// (0x00066894) heading_loc_req_pane_g1

0xa942,	// (0x0006689c) heading_loc_req_pane_g2

0xa94a,	// (0x000668a4) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0006b28d) heading_loc_req_pane_g

0xa952,	// (0x000668ac) heading_loc_req_pane_t1

0xa961,	// (0x000668bb) bg_popup_sub_pane_cp01_ParamLimits

0xa961,	// (0x000668bb) bg_popup_sub_pane_cp01

0xa96f,	// (0x000668c9) popup_cale_events_window_g1_ParamLimits

0xa96f,	// (0x000668c9) popup_cale_events_window_g1

0xa98f,	// (0x000668e9) popup_cale_events_window_g2_ParamLimits

0xa98f,	// (0x000668e9) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0006b2c1) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0006b2c1) popup_cale_events_window_g

0xa9af,	// (0x00066909) popup_cale_events_window_t1_ParamLimits

0xa9af,	// (0x00066909) popup_cale_events_window_t1

0xa9c1,	// (0x0006691b) popup_cale_events_window_t2_ParamLimits

0xa9c1,	// (0x0006691b) popup_cale_events_window_t2

0xa9ff,	// (0x00066959) popup_cale_events_window_t3_ParamLimits

0xa9ff,	// (0x00066959) popup_cale_events_window_t3

0xaa39,	// (0x00066993) popup_cale_events_window_t4_ParamLimits

0xaa39,	// (0x00066993) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0006b2c6) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0006b2c6) popup_cale_events_window_t

0x2ad3,	// (0x0005ea2d) call_type_pane

0x2ae3,	// (0x0005ea3d) popup_call_status_window_g1

0x2af7,	// (0x0005ea51) popup_call_status_window_g2

0x2b0b,	// (0x0005ea65) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0006b2cf) popup_call_status_window_g

0xaa6f,	// (0x000669c9) call_type_pane_g1

0xaa78,	// (0x000669d2) call_type_pane_g2

0x0001,

0xf37c,	// (0x0006b2d6) call_type_pane_g

0x9e11,	// (0x00065d6b) bg_popup_sub_pane_cp02

0xaa81,	// (0x000669db) listscroll_popup_wml_pane

0xaa89,	// (0x000669e3) list_wml_pane

0xaa93,	// (0x000669ed) scroll_pane_cp013

0xaa9e,	// (0x000669f8) list_single_graphic_popup_wml_pane_ParamLimits

0xaa9e,	// (0x000669f8) list_single_graphic_popup_wml_pane

0xa228,	// (0x00066182) list_single_graphic_popup_wml_pane_g1

0xaab2,	// (0x00066a0c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0006b2db) list_single_graphic_popup_wml_pane_g

0xaaba,	// (0x00066a14) list_single_graphic_popup_wml_pane_t1

0xaad0,	// (0x00066a2a) aid_call_pane

0xa064,	// (0x00065fbe) popup_clock_analogue_window_g1

0xa064,	// (0x00065fbe) popup_clock_analogue_window_g2

0xaad8,	// (0x00066a32) popup_clock_analogue_window_g3

0xaad8,	// (0x00066a32) popup_clock_analogue_window_g4

0xa228,	// (0x00066182) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0006b2e0) popup_clock_analogue_window_g

0xaae0,	// (0x00066a3a) popup_clock_analogue_window_t1

0xaaee,	// (0x00066a48) clock_digital_number_pane_ParamLimits

0xaaee,	// (0x00066a48) clock_digital_number_pane

0xaafa,	// (0x00066a54) clock_digital_number_pane_cp02_ParamLimits

0xaafa,	// (0x00066a54) clock_digital_number_pane_cp02

0xab06,	// (0x00066a60) clock_digital_number_pane_cp03_ParamLimits

0xab06,	// (0x00066a60) clock_digital_number_pane_cp03

0xab12,	// (0x00066a6c) clock_digital_number_pane_cp04_ParamLimits

0xab12,	// (0x00066a6c) clock_digital_number_pane_cp04

0xab1e,	// (0x00066a78) clock_digital_separator_pane_ParamLimits

0xab1e,	// (0x00066a78) clock_digital_separator_pane

0xab2a,	// (0x00066a84) popup_clock_digital_window_t1

0xa228,	// (0x00066182) clock_digital_number_pane_g1

0xa228,	// (0x00066182) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0006b24e) clock_digital_number_pane_g

0xa228,	// (0x00066182) clock_digital_separator_pane_g1

0xa228,	// (0x00066182) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0006b24e) clock_digital_separator_pane_g

0x9e11,	// (0x00065d6b) bg_popup_window_pane_cp04

0xab47,	// (0x00066aa1) heading_pane_cp03

0xab4f,	// (0x00066aa9) listscroll_popup_gms_pane

0xab57,	// (0x00066ab1) grid_large_graphic_popup_pane

0xab61,	// (0x00066abb) listscroll_popup_gms_pane_g1

0xab69,	// (0x00066ac3) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0006b2eb) listscroll_popup_gms_pane_g

0xa601,	// (0x0006655b) scroll_pane_cp014

0xab71,	// (0x00066acb) cell_large_graphic_popup_pane_ParamLimits

0xab71,	// (0x00066acb) cell_large_graphic_popup_pane

0xab89,	// (0x00066ae3) cell_large_graphic_popup_pane_g1_ParamLimits

0xab89,	// (0x00066ae3) cell_large_graphic_popup_pane_g1

0xab95,	// (0x00066aef) cell_large_graphic_popup_pane_g2_ParamLimits

0xab95,	// (0x00066aef) cell_large_graphic_popup_pane_g2

0xaba1,	// (0x00066afb) cell_large_graphic_popup_pane_g3_ParamLimits

0xaba1,	// (0x00066afb) cell_large_graphic_popup_pane_g3

0xabae,	// (0x00066b08) cell_large_graphic_popup_pane_g4_ParamLimits

0xabae,	// (0x00066b08) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0006b2f0) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0006b2f0) cell_large_graphic_popup_pane_g

0xabbe,	// (0x00066b18) grid_highlight_pane_cp010

0xa228,	// (0x00066182) bg_popup_call_pane_g1

0xabc8,	// (0x00066b22) list_single_graphic_popup_conf_pane_ParamLimits

0xabc8,	// (0x00066b22) list_single_graphic_popup_conf_pane

0xabda,	// (0x00066b34) list_highlight_pane_cp01

0xabe3,	// (0x00066b3d) list_single_graphic_popup_conf_pane_g1

0xabeb,	// (0x00066b45) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0006b2f9) list_single_graphic_popup_conf_pane_g

0xabf3,	// (0x00066b4d) list_single_graphic_popup_conf_pane_t1

0xac01,	// (0x00066b5b) linegrid_cams_pane_g1

0x2b1b,	// (0x0005ea75) linegrid_cams_pane_g2

0xa332,	// (0x0006628c) linegrid_cams_pane_g3

0xac0a,	// (0x00066b64) linegrid_cams_pane_g4

0x2b24,	// (0x0005ea7e) linegrid_cams_pane_g5

0x2b2d,	// (0x0005ea87) linegrid_cams_pane_g6

0xa3b8,	// (0x00066312) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0006b2fe) linegrid_cams_pane_g

0xac13,	// (0x00066b6d) popup_clock_analogue_window

0xac13,	// (0x00066b6d) popup_clock_digital_window

0x9e11,	// (0x00065d6b) popup_phob_thumbnail_window

0xa228,	// (0x00066182) call_video_uplink_pane_g1

0xac1c,	// (0x00066b76) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0006b30d) call_video_uplink_pane_g

0xa385,	// (0x000662df) video_uplink_pane

0xac24,	// (0x00066b7e) mce_image_pane_g1

0x2b38,	// (0x0005ea92) mce_image_pane_g2

0x2b40,	// (0x0005ea9a) mce_image_pane_g3

0x2b48,	// (0x0005eaa2) mce_image_pane_g4

0x2b50,	// (0x0005eaaa) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0006b312) mce_image_pane_g

0xac2e,	// (0x00066b88) control_top_pane_stacon_cp01_ParamLimits

0xac2e,	// (0x00066b88) control_top_pane_stacon_cp01

0xac42,	// (0x00066b9c) uni_indicator_pane_stacon_cp01_ParamLimits

0xac42,	// (0x00066b9c) uni_indicator_pane_stacon_cp01

0xac53,	// (0x00066bad) bg_popup_sub_pane_cp03

0x2b58,	// (0x0005eab2) chi_dic_find_pane

0x2b60,	// (0x0005eaba) listscroll_chi_dic_pane

0x2b69,	// (0x0005eac3) main_pane_chidic_g1

0x2b7c,	// (0x0005ead6) chi_dic_find_pane_t1

0xac5d,	// (0x00066bb7) find_chidic_pane

0xac66,	// (0x00066bc0) chi_dic_list_pane_ParamLimits

0xac66,	// (0x00066bc0) chi_dic_list_pane

0xac77,	// (0x00066bd1) scroll_pane_cp020

0x2b8a,	// (0x0005eae4) find_chidic_pane_t1

0x9e11,	// (0x00065d6b) input_focus_pane_cp06

0x2b99,	// (0x0005eaf3) list_chi_dic_pane_ParamLimits

0x2b99,	// (0x0005eaf3) list_chi_dic_pane

0xac7f,	// (0x00066bd9) list_chi_dic_pane_t1_ParamLimits

0xac7f,	// (0x00066bd9) list_chi_dic_pane_t1

0x9e11,	// (0x00065d6b) list_highlight_pane_cp020

0xac92,	// (0x00066bec) bg_cale_heading_pane_g1

0x2bad,	// (0x0005eb07) bg_cale_heading_pane_g2

0x2bb5,	// (0x0005eb0f) bg_cale_heading_pane_g3

0x2bbd,	// (0x0005eb17) bg_cale_heading_pane_g4

0x2bc7,	// (0x0005eb21) bg_cale_heading_pane_g5

0x2bd1,	// (0x0005eb2b) bg_cale_heading_pane_g6

0x2bd9,	// (0x0005eb33) bg_cale_heading_pane_g7

0x2be1,	// (0x0005eb3b) bg_cale_heading_pane_g8

0x2beb,	// (0x0005eb45) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0006b31d) bg_cale_heading_pane_g

0xac92,	// (0x00066bec) bg_cale_side_pane_g1

0x2bf5,	// (0x0005eb4f) bg_cale_side_pane_g2

0x2bfd,	// (0x0005eb57) bg_cale_side_pane_g3

0x2c05,	// (0x0005eb5f) bg_cale_side_pane_g4

0x2c0d,	// (0x0005eb67) bg_cale_side_pane_g5

0x2c15,	// (0x0005eb6f) bg_cale_side_pane_g6

0x2c1d,	// (0x0005eb77) bg_cale_side_pane_g7

0x2c25,	// (0x0005eb7f) bg_cale_side_pane_g8

0x2c2d,	// (0x0005eb87) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0006b330) bg_cale_side_pane_g

0x2c35,	// (0x0005eb8f) popup_call_status_window_ParamLimits

0x2c35,	// (0x0005eb8f) popup_call_status_window

0xac9a,	// (0x00066bf4) stacon_top_pane

0xaca2,	// (0x00066bfc) status_pane_ParamLimits

0xaca2,	// (0x00066bfc) status_pane

0xacb7,	// (0x00066c11) status_small_pane

0xacbf,	// (0x00066c19) control_pane

0x9e11,	// (0x00065d6b) stacon_bottom_pane

0xacc7,	// (0x00066c21) list_single_mce_smart_pane_t1_ParamLimits

0xacc7,	// (0x00066c21) list_single_mce_smart_pane_t1

0xacda,	// (0x00066c34) list_single_mce_smart_pane_t2_ParamLimits

0xacda,	// (0x00066c34) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0006b343) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0006b343) list_single_mce_smart_pane_t

0x2c7c,	// (0x0005ebd6) compass_pane

0x2c85,	// (0x0005ebdf) main_location2_pane_t1

0x2c99,	// (0x0005ebf3) main_location2_pane_t2

0x2cad,	// (0x0005ec07) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0006b348) main_location2_pane_t

0xacf9,	// (0x00066c53) compass_pane_g1_ParamLimits

0xacf9,	// (0x00066c53) compass_pane_g1

0x2cf7,	// (0x0005ec51) compass_pane_t1

0x2d06,	// (0x0005ec60) compass_pane_t2

0x0005,

0xf3f7,	// (0x0006b351) compass_pane_t

0x2d4d,	// (0x0005eca7) text_secondary_cp61

0xad0d,	// (0x00066c67) navi_pane_cams_g5

0xad30,	// (0x00066c8a) navi_pane_im_t1

0xad3e,	// (0x00066c98) navi_pane_mp_g1_ParamLimits

0xad3e,	// (0x00066c98) navi_pane_mp_g1

0xad52,	// (0x00066cac) navi_pane_mp_g2_ParamLimits

0xad52,	// (0x00066cac) navi_pane_mp_g2

0xad5e,	// (0x00066cb8) navi_pane_mp_g3_ParamLimits

0xad5e,	// (0x00066cb8) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0006b365) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0006b365) navi_pane_mp_g

0xad6a,	// (0x00066cc4) navi_pane_mp_t1

0xad78,	// (0x00066cd2) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0006b36c) navi_pane_mp_t

0xadb4,	// (0x00066d0e) navi_pane_vt_g1

0xad6a,	// (0x00066cc4) navi_pane_vt_t1

0xadbc,	// (0x00066d16) navi_slider_pane

0xadc4,	// (0x00066d1e) zooming_pane

0xadcc,	// (0x00066d26) navi_slider_pane_g1

0xadd5,	// (0x00066d2f) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0006b373) navi_slider_pane_g

0xae02,	// (0x00066d5c) aid_levels_zoom

0xae0a,	// (0x00066d64) zooming_pane_g1

0xae12,	// (0x00066d6c) zooming_pane_g2

0xae12,	// (0x00066d6c) zooming_pane_g3

0x0002,

0xf428,	// (0x0006b382) zooming_pane_g

0xae1a,	// (0x00066d74) level_10_zoom

0xae23,	// (0x00066d7d) level_11_zoom

0xae2c,	// (0x00066d86) level_1_zoom

0xae35,	// (0x00066d8f) level_2_zoom

0xae3e,	// (0x00066d98) level_3_zoom

0xae47,	// (0x00066da1) level_4_zoom

0xae50,	// (0x00066daa) level_5_zoom

0xae59,	// (0x00066db3) level_6_zoom

0xae62,	// (0x00066dbc) level_7_zoom

0xae6b,	// (0x00066dc5) level_8_zoom

0xae74,	// (0x00066dce) level_9_zoom

0xae85,	// (0x00066ddf) popup_phob_thumbnail_window_g1

0xae8d,	// (0x00066de7) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0006b389) popup_phob_thumbnail_window_g

0xc1d4,	// (0x0006812e) level_1_location

0xc1dc,	// (0x00068136) level_2_location

0xc1e4,	// (0x0006813e) level_3_location

0xc1ec,	// (0x00068146) level_4_location

0xadc4,	// (0x00066d1e) level_5_location

0x2e8c,	// (0x0005ede6) mce_icon_pane_g1

0x2e94,	// (0x0005edee) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0006b38e) mce_icon_pane_g

0x2e9c,	// (0x0005edf6) main_mup_pane_g1_ParamLimits

0x2e9c,	// (0x0005edf6) main_mup_pane_g1

0x2eb2,	// (0x0005ee0c) main_mup_pane_g2_ParamLimits

0x2eb2,	// (0x0005ee0c) main_mup_pane_g2

0x2eca,	// (0x0005ee24) main_mup_pane_g3_ParamLimits

0x2eca,	// (0x0005ee24) main_mup_pane_g3

0x2ee2,	// (0x0005ee3c) main_mup_pane_g4_ParamLimits

0x2ee2,	// (0x0005ee3c) main_mup_pane_g4

0x2efa,	// (0x0005ee54) main_mup_pane_g5_ParamLimits

0x2efa,	// (0x0005ee54) main_mup_pane_g5

0x2f16,	// (0x0005ee70) main_mup_pane_g6_ParamLimits

0x2f16,	// (0x0005ee70) main_mup_pane_g6

0x2f2e,	// (0x0005ee88) main_mup_pane_g7_ParamLimits

0x2f2e,	// (0x0005ee88) main_mup_pane_g7

0x2f46,	// (0x0005eea0) main_mup_pane_g8_ParamLimits

0x2f46,	// (0x0005eea0) main_mup_pane_g8

0x2f5e,	// (0x0005eeb8) main_mup_pane_g9_ParamLimits

0x2f5e,	// (0x0005eeb8) main_mup_pane_g9

0x2f78,	// (0x0005eed2) main_mup_pane_g10_ParamLimits

0x2f78,	// (0x0005eed2) main_mup_pane_g10

0x2f92,	// (0x0005eeec) main_mup_pane_g11_ParamLimits

0x2f92,	// (0x0005eeec) main_mup_pane_g11

0x2fa6,	// (0x0005ef00) main_mup_pane_g12_ParamLimits

0x2fa6,	// (0x0005ef00) main_mup_pane_g12

0x2fbc,	// (0x0005ef16) main_mup_pane_g13_ParamLimits

0x2fbc,	// (0x0005ef16) main_mup_pane_g13

0x000c,

0xf439,	// (0x0006b393) main_mup_pane_g_ParamLimits

0xf439,	// (0x0006b393) main_mup_pane_g

0x2fd0,	// (0x0005ef2a) main_mup_pane_t1_ParamLimits

0x2fd0,	// (0x0005ef2a) main_mup_pane_t1

0x2fea,	// (0x0005ef44) main_mup_pane_t2_ParamLimits

0x2fea,	// (0x0005ef44) main_mup_pane_t2

0x3002,	// (0x0005ef5c) main_mup_pane_t3_ParamLimits

0x3002,	// (0x0005ef5c) main_mup_pane_t3

0x301a,	// (0x0005ef74) main_mup_pane_t4_ParamLimits

0x301a,	// (0x0005ef74) main_mup_pane_t4

0x3038,	// (0x0005ef92) main_mup_pane_t5_ParamLimits

0x3038,	// (0x0005ef92) main_mup_pane_t5

0x304d,	// (0x0005efa7) main_mup_pane_t6_ParamLimits

0x304d,	// (0x0005efa7) main_mup_pane_t6

0x0005,

0xf454,	// (0x0006b3ae) main_mup_pane_t_ParamLimits

0xf454,	// (0x0006b3ae) main_mup_pane_t

0x305f,	// (0x0005efb9) mup_progress_pane_ParamLimits

0x305f,	// (0x0005efb9) mup_progress_pane

0x306b,	// (0x0005efc5) mup_visualizer_pane_ParamLimits

0x306b,	// (0x0005efc5) mup_visualizer_pane

0x309f,	// (0x0005eff9) mup_volume_pane_ParamLimits

0x309f,	// (0x0005eff9) mup_volume_pane

0xae95,	// (0x00066def) mup_visualizer_pane_g1_ParamLimits

0xae95,	// (0x00066def) mup_visualizer_pane_g1

0xae95,	// (0x00066def) mup_visualizer_pane_g2_ParamLimits

0xae95,	// (0x00066def) mup_visualizer_pane_g2

0xacf9,	// (0x00066c53) mup_visualizer_pane_g3_ParamLimits

0xacf9,	// (0x00066c53) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0006b3bb) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0006b3bb) mup_visualizer_pane_g

0xa228,	// (0x00066182) mup_volume_pane_g1

0xaeab,	// (0x00066e05) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0006b3c2) mup_volume_pane_g

0xa228,	// (0x00066182) mup_progress_pane_g1

0xaeb4,	// (0x00066e0e) mup_progress_pane_g2

0xaebd,	// (0x00066e17) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0006b3c7) mup_progress_pane_g

0x9e11,	// (0x00065d6b) bg_popup_window_pane_cp05

0xaec6,	// (0x00066e20) heading_pane_cp02_ParamLimits

0xaec6,	// (0x00066e20) heading_pane_cp02

0xaee0,	// (0x00066e3a) list_popup_blid_pane

0xaee8,	// (0x00066e42) list_blid_sat_info_pane_ParamLimits

0xaee8,	// (0x00066e42) list_blid_sat_info_pane

0xaefb,	// (0x00066e55) list_blid_sat_info_pane_g1

0xaf03,	// (0x00066e5d) list_blid_sat_info_pane_t1

0x31c5,	// (0x0005f11f) mup_equalizer_pane_ParamLimits

0x31c5,	// (0x0005f11f) mup_equalizer_pane

0x31de,	// (0x0005f138) mup_equalizer_pane_cp1_ParamLimits

0x31de,	// (0x0005f138) mup_equalizer_pane_cp1

0x31fb,	// (0x0005f155) mup_equalizer_pane_cp2_ParamLimits

0x31fb,	// (0x0005f155) mup_equalizer_pane_cp2

0x3218,	// (0x0005f172) mup_equalizer_pane_cp3_ParamLimits

0x3218,	// (0x0005f172) mup_equalizer_pane_cp3

0x3239,	// (0x0005f193) mup_equalizer_pane_cp4_ParamLimits

0x3239,	// (0x0005f193) mup_equalizer_pane_cp4

0x325a,	// (0x0005f1b4) mup_equalizer_pane_cp5

0x326e,	// (0x0005f1c8) mup_equalizer_pane_cp6

0x3282,	// (0x0005f1dc) mup_equalizer_pane_cp7

0xc0f2,	// (0x0006804c) bg_popup_call_poc_act_pane_g9

0xc0fa,	// (0x00068054) bg_popup_call_poc_act_pane_g10

0xc102,	// (0x0006805c) bg_popup_call_poc_act_pane_g11

0x000a,

0xa06c,	// (0x00065fc6) mup_scale_pane

0xa228,	// (0x00066182) mup_scale_pane_g1

0xaf11,	// (0x00066e6b) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0006b3e3) mup_scale_pane_g

0xaf35,	// (0x00066e8f) msg_data_pane

0xaf3d,	// (0x00066e97) scroll_pane_cp017

0x32a8,	// (0x0005f202) bg_list_pane_cp04_ParamLimits

0x32a8,	// (0x0005f202) bg_list_pane_cp04

0xaf45,	// (0x00066e9f) msg_data_pane_g1

0x32c8,	// (0x0005f222) msg_data_pane_g2

0x2b40,	// (0x0005ea9a) msg_data_pane_g3

0x32d0,	// (0x0005f22a) msg_data_pane_g4

0x32d8,	// (0x0005f232) msg_data_pane_g5

0x32e0,	// (0x0005f23a) msg_data_pane_g6

0x32e8,	// (0x0005f242) msg_data_pane_g7

0x0006,

0xf498,	// (0x0006b3f2) msg_data_pane_g

0x32f0,	// (0x0005f24a) msg_text_pane_ParamLimits

0x32f0,	// (0x0005f24a) msg_text_pane

0x331b,	// (0x0005f275) qrid_highlight_pane_cp011_ParamLimits

0x331b,	// (0x0005f275) qrid_highlight_pane_cp011

0x9e11,	// (0x00065d6b) msg_body_pane

0x9e11,	// (0x00065d6b) msg_header_pane

0xaf56,	// (0x00066eb0) input_focus_pane_cp07

0x333f,	// (0x0005f299) msg_header_pane_t1_ParamLimits

0x333f,	// (0x0005f299) msg_header_pane_t1

0x3353,	// (0x0005f2ad) msg_header_pane_t2_ParamLimits

0x3353,	// (0x0005f2ad) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0006b406) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0006b406) msg_header_pane_t

0xaf6b,	// (0x00066ec5) msg_body_pane_g1

0x3365,	// (0x0005f2bf) msg_body_pane_t1_ParamLimits

0x3365,	// (0x0005f2bf) msg_body_pane_t1

0x3396,	// (0x0005f2f0) msg_body_pane_t2_ParamLimits

0x3396,	// (0x0005f2f0) msg_body_pane_t2

0x33a8,	// (0x0005f302) msg_body_pane_t3_ParamLimits

0x33a8,	// (0x0005f302) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0006b40b) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0006b40b) msg_body_pane_t

0x33f4,	// (0x0005f34e) main_viewer_pane_g1_ParamLimits

0x33f4,	// (0x0005f34e) main_viewer_pane_g1

0x3402,	// (0x0005f35c) main_viewer_pane_g2_ParamLimits

0x3402,	// (0x0005f35c) main_viewer_pane_g2

0x3410,	// (0x0005f36a) main_viewer_pane_g3_ParamLimits

0x3410,	// (0x0005f36a) main_viewer_pane_g3

0x341f,	// (0x0005f379) main_viewer_pane_g4_ParamLimits

0x341f,	// (0x0005f379) main_viewer_pane_g4

0xaf8b,	// (0x00066ee5) main_viewer_pane_g5_ParamLimits

0xaf8b,	// (0x00066ee5) main_viewer_pane_g5

0xaf8b,	// (0x00066ee5) main_viewer_pane_g7_ParamLimits

0xaf8b,	// (0x00066ee5) main_viewer_pane_g7

0xaf9d,	// (0x00066ef7) main_viewer_pane_g8_ParamLimits

0xaf9d,	// (0x00066ef7) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0006b41b) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0006b41b) main_viewer_pane_g

0xafb5,	// (0x00066f0f) viewer_content_pane_ParamLimits

0xafb5,	// (0x00066f0f) viewer_content_pane

0x345b,	// (0x0005f3b5) main_postcard_pane_g1_ParamLimits

0x345b,	// (0x0005f3b5) main_postcard_pane_g1

0x3471,	// (0x0005f3cb) main_postcard_pane_g2_ParamLimits

0x3471,	// (0x0005f3cb) main_postcard_pane_g2

0x3487,	// (0x0005f3e1) main_postcard_pane_g3_ParamLimits

0x3487,	// (0x0005f3e1) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0006b42c) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0006b42c) main_postcard_pane_g

0x349e,	// (0x0005f3f8) main_postcard_pane_g4

0xc307,	// (0x00068261) smil_status_volume_pane_g2

0x34e1,	// (0x0005f43b) postcard_pane_ParamLimits

0x34e1,	// (0x0005f43b) postcard_pane

0xafc3,	// (0x00066f1d) postcard_pane_g1_ParamLimits

0xafc3,	// (0x00066f1d) postcard_pane_g1

0x3523,	// (0x0005f47d) postcard_pane_g2_ParamLimits

0x3523,	// (0x0005f47d) postcard_pane_g2

0x352f,	// (0x0005f489) postcard_pane_g3_ParamLimits

0x352f,	// (0x0005f489) postcard_pane_g3

0xafd1,	// (0x00066f2b) postcard_pane_g4_ParamLimits

0xafd1,	// (0x00066f2b) postcard_pane_g4

0x353b,	// (0x0005f495) postcard_pane_g5_ParamLimits

0x353b,	// (0x0005f495) postcard_pane_g5

0x3550,	// (0x0005f4aa) postcard_pane_g6_ParamLimits

0x3550,	// (0x0005f4aa) postcard_pane_g6

0xafc3,	// (0x00066f1d) postcard_pane_g7_ParamLimits

0xafc3,	// (0x00066f1d) postcard_pane_g7

0x0006,

0xf4df,	// (0x0006b439) postcard_pane_g_ParamLimits

0xf4df,	// (0x0006b439) postcard_pane_g

0x3564,	// (0x0005f4be) main_mp2_pane_g1_ParamLimits

0x3564,	// (0x0005f4be) main_mp2_pane_g1

0x3570,	// (0x0005f4ca) main_mp2_pane_g2_ParamLimits

0x3570,	// (0x0005f4ca) main_mp2_pane_g2

0x357c,	// (0x0005f4d6) main_mp2_pane_g3_ParamLimits

0x357c,	// (0x0005f4d6) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0006b448) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0006b448) main_mp2_pane_g

0x3588,	// (0x0005f4e2) main_mp2_pane_t1_ParamLimits

0x3588,	// (0x0005f4e2) main_mp2_pane_t1

0x359d,	// (0x0005f4f7) main_mp2_pane_t2_ParamLimits

0x359d,	// (0x0005f4f7) main_mp2_pane_t2

0x35af,	// (0x0005f509) main_mp2_pane_t3_ParamLimits

0x35af,	// (0x0005f509) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0006b44f) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0006b44f) main_mp2_pane_t

0xafdf,	// (0x00066f39) pec_content_pane_ParamLimits

0xafdf,	// (0x00066f39) pec_content_pane

0xa601,	// (0x0006655b) scroll_pane_cp015

0xaff1,	// (0x00066f4b) pec_attribute_pane_ParamLimits

0xaff1,	// (0x00066f4b) pec_attribute_pane

0x35c1,	// (0x0005f51b) pec_content_pane_g1_ParamLimits

0x35c1,	// (0x0005f51b) pec_content_pane_g1

0xb001,	// (0x00066f5b) pec_content_pane_t1_ParamLimits

0xb001,	// (0x00066f5b) pec_content_pane_t1

0xb013,	// (0x00066f6d) pec_content_pane_t2_ParamLimits

0xb013,	// (0x00066f6d) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0006b456) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0006b456) pec_content_pane_t

0x35cf,	// (0x0005f529) list_single_graphic_pane_cp01_ParamLimits

0x35cf,	// (0x0005f529) list_single_graphic_pane_cp01

0xa06c,	// (0x00065fc6) bg_popup_sub_pane_cp04

0xb025,	// (0x00066f7f) popup_mup_playback_window_g1

0xb031,	// (0x00066f8b) popup_mup_playback_window_t1

0xb046,	// (0x00066fa0) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0006b45b) popup_mup_playback_window_t

0xb07d,	// (0x00066fd7) main_image_pane_g1_ParamLimits

0xb07d,	// (0x00066fd7) main_image_pane_g1

0xb0c0,	// (0x0006701a) scroll_pane_cp018_ParamLimits

0xb0c0,	// (0x0006701a) scroll_pane_cp018

0xb0d8,	// (0x00067032) scroll_pane_cp016_ParamLimits

0xb0d8,	// (0x00067032) scroll_pane_cp016

0x369f,	// (0x0005f5f9) smil2_image_pane_ParamLimits

0x369f,	// (0x0005f5f9) smil2_image_pane

0x36d3,	// (0x0005f62d) smil2_root_pane_ParamLimits

0x36d3,	// (0x0005f62d) smil2_root_pane

0x370b,	// (0x0005f665) smil2_text_pane_ParamLimits

0x370b,	// (0x0005f665) smil2_text_pane

0x9e11,	// (0x00065d6b) bg_list_pane_cp06

0xb114,	// (0x0006706e) grid_radio_pane

0x9e11,	// (0x00065d6b) bg_popup_window_pane_cp06

0xb11c,	// (0x00067076) main_fmradio_pane_t1

0xab47,	// (0x00066aa1) heading_pane_cp04

0xb12a,	// (0x00067084) main_fmradio_pane_t2

0xc10a,	// (0x00068064) popup_cale_lunar_info_window_g1

0xb138,	// (0x00067092) main_fmradio_pane_t3

0xc112,	// (0x0006806c) popup_cale_lunar_info_window_g2

0xb146,	// (0x000670a0) main_fmradio_pane_t4

0x0001,

0xb154,	// (0x000670ae) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0006b536) popup_cale_lunar_info_window_g

0xf516,	// (0x0006b470) main_fmradio_pane_t

0xb162,	// (0x000670bc) wait_bar_pane_cp03

0xb16a,	// (0x000670c4) cell_fmradio_pane_ParamLimits

0xb16a,	// (0x000670c4) cell_fmradio_pane

0xafc3,	// (0x00066f1d) cell_fmradio_pane_g1_ParamLimits

0xafc3,	// (0x00066f1d) cell_fmradio_pane_g1

0x9e11,	// (0x00065d6b) grid_highlight_pane_cp011

0xb17d,	// (0x000670d7) poc_content_pane_ParamLimits

0xb17d,	// (0x000670d7) poc_content_pane

0xb18f,	// (0x000670e9) scroll_pane_cp019

0x378b,	// (0x0005f6e5) popup_call_poc_act_window_ParamLimits

0x378b,	// (0x0005f6e5) popup_call_poc_act_window

0x37af,	// (0x0005f709) popup_call_poc_inact_window_ParamLimits

0x37af,	// (0x0005f709) popup_call_poc_inact_window

0xf5b3,	// (0x0006b50d) bg_popup_call_poc_act_pane_g

0xc07a,	// (0x00067fd4) bg_popup_call_poc_inact_pane_g1

0xc082,	// (0x00067fdc) bg_popup_call_poc_inact_pane_g2

0xb197,	// (0x000670f1) popup_call_poc_act_window_g2

0xc08a,	// (0x00067fe4) bg_popup_call_poc_inact_pane_g3

0xc092,	// (0x00067fec) bg_popup_call_poc_inact_pane_g4

0xc09a,	// (0x00067ff4) bg_popup_call_poc_inact_pane_g5

0xb19f,	// (0x000670f9) popup_call_poc_act_window_t1_ParamLimits

0xb19f,	// (0x000670f9) popup_call_poc_act_window_t1

0xb1c7,	// (0x00067121) popup_call_poc_act_window_t2_ParamLimits

0xb1c7,	// (0x00067121) popup_call_poc_act_window_t2

0xb1ef,	// (0x00067149) popup_call_poc_act_window_t3_ParamLimits

0xb1ef,	// (0x00067149) popup_call_poc_act_window_t3

0xb217,	// (0x00067171) popup_call_poc_act_window_t4_ParamLimits

0xb217,	// (0x00067171) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0006b47b) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0006b47b) popup_call_poc_act_window_t

0xc0a2,	// (0x00067ffc) bg_popup_call_poc_inact_pane_g6

0xc0aa,	// (0x00068004) bg_popup_call_poc_inact_pane_g7

0xc0b2,	// (0x0006800c) bg_popup_call_poc_inact_pane_g8

0xb229,	// (0x00067183) popup_call_poc_inact_window_g2

0xc0ba,	// (0x00068014) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0006b4fa) bg_popup_call_poc_inact_pane_g

0xb231,	// (0x0006718b) popup_call_poc_inact_window_t1_ParamLimits

0xb231,	// (0x0006718b) popup_call_poc_inact_window_t1

0xb246,	// (0x000671a0) popup_call_poc_inact_window_t2_ParamLimits

0xb246,	// (0x000671a0) popup_call_poc_inact_window_t2

0xb25b,	// (0x000671b5) popup_call_poc_inact_window_t3_ParamLimits

0xb25b,	// (0x000671b5) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0006b484) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0006b484) popup_call_poc_inact_window_t

0xc27a,	// (0x000681d4) context_pane_ParamLimits

0x3fd1,	// (0x0005ff2b) signal_pane_ParamLimits

0xadc4,	// (0x00066d1e) main_call2_pane

0xc268,	// (0x000681c2) popup_phob_thumbnail2_window_ParamLimits

0xc268,	// (0x000681c2) popup_phob_thumbnail2_window

0xaf73,	// (0x00066ecd) aid_hotspot_pointer_arrow_pane

0xaf7b,	// (0x00066ed5) aid_hotspot_pointer_hand_pane

0x3af5,	// (0x0005fa4f) phob_pre_status_pane_g5

0x175b,	// (0x0005d6b5) cams_zoom_pane_ParamLimits

0x176a,	// (0x0005d6c4) image_vga_pane_ParamLimits

0x1784,	// (0x0005d6de) main_camera_pane_g1_ParamLimits

0x1796,	// (0x0005d6f0) main_camera_pane_g2_ParamLimits

0x17a8,	// (0x0005d702) main_camera_pane_g3_ParamLimits

0x17ba,	// (0x0005d714) main_camera_pane_g4_ParamLimits

0x17cc,	// (0x0005d726) main_camera_pane_g5_ParamLimits

0x17de,	// (0x0005d738) main_camera_pane_g6_ParamLimits

0x17f0,	// (0x0005d74a) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0006b183) main_camera_pane_g_ParamLimits

0x1802,	// (0x0005d75c) main_camera_pane_t1_ParamLimits

0x1818,	// (0x0005d772) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0006b194) main_camera_pane_t_ParamLimits

0xa06c,	// (0x00065fc6) bg_popup_preview_window_pane_cp01_ParamLimits

0xa06c,	// (0x00065fc6) bg_popup_preview_window_pane_cp01

0xb270,	// (0x000671ca) popup_phob_thumbnail2_window_g1_ParamLimits

0xb270,	// (0x000671ca) popup_phob_thumbnail2_window_g1

0x9e11,	// (0x00065d6b) call2_cli_visual_pane

0x37e3,	// (0x0005f73d) popup_call2_audio_conf_window_ParamLimits

0x37e3,	// (0x0005f73d) popup_call2_audio_conf_window

0x3803,	// (0x0005f75d) popup_call2_audio_first_window_ParamLimits

0x3803,	// (0x0005f75d) popup_call2_audio_first_window

0x3899,	// (0x0005f7f3) popup_call2_audio_in_window_ParamLimits

0x3899,	// (0x0005f7f3) popup_call2_audio_in_window

0x38e1,	// (0x0005f83b) popup_call2_audio_out_window_ParamLimits

0x38e1,	// (0x0005f83b) popup_call2_audio_out_window

0x394b,	// (0x0005f8a5) popup_call2_audio_second_window_ParamLimits

0x394b,	// (0x0005f8a5) popup_call2_audio_second_window

0x39b1,	// (0x0005f90b) popup_call2_audio_wait_window_ParamLimits

0x39b1,	// (0x0005f90b) popup_call2_audio_wait_window

0x9e11,	// (0x00065d6b) bg_popup_call2_act_pane_cp03

0xa04e,	// (0x00065fa8) list_conf_pane_cp

0xb27c,	// (0x000671d6) popup_call2_audio_conf_window_t1

0xb28a,	// (0x000671e4) list_single_graphic_popup_conf2_pane_ParamLimits

0xb28a,	// (0x000671e4) list_single_graphic_popup_conf2_pane

0xabda,	// (0x00066b34) list_highlight_pane_cp04

0xb29d,	// (0x000671f7) list_single_graphic_popup_conf2_pane_g1

0xabeb,	// (0x00066b45) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0006b48b) list_single_graphic_popup_conf2_pane_g

0xb2a7,	// (0x00067201) list_single_graphic_popup_conf2_pane_t1

0xb2b5,	// (0x0006720f) bg_popup_call2_act_pane_cp01_ParamLimits

0xb2b5,	// (0x0006720f) bg_popup_call2_act_pane_cp01

0xb33f,	// (0x00067299) call_type_pane_cp05_ParamLimits

0xb33f,	// (0x00067299) call_type_pane_cp05

0xb393,	// (0x000672ed) popup_call2_audio_second_window_g1_ParamLimits

0xb393,	// (0x000672ed) popup_call2_audio_second_window_g1

0xb3e7,	// (0x00067341) popup_call2_audio_second_window_g2_ParamLimits

0xb3e7,	// (0x00067341) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0006b490) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0006b490) popup_call2_audio_second_window_g

0xb44c,	// (0x000673a6) popup_call2_audio_second_window_t1_ParamLimits

0xb44c,	// (0x000673a6) popup_call2_audio_second_window_t1

0xb507,	// (0x00067461) popup_call2_audio_second_window_t2_ParamLimits

0xb507,	// (0x00067461) popup_call2_audio_second_window_t2

0xb55a,	// (0x000674b4) popup_call2_audio_second_window_t3_ParamLimits

0xb55a,	// (0x000674b4) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0006b497) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0006b497) popup_call2_audio_second_window_t

0x9e11,	// (0x00065d6b) bg_popup_call2_in_pane_cp02

0x9e1b,	// (0x00065d75) call_type_pane_cp04

0x9e23,	// (0x00065d7d) popup_call2_audio_wait_window_g1

0x9e2b,	// (0x00065d85) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0006b070) popup_call2_audio_wait_window_g

0x9e33,	// (0x00065d8d) popup_call2_audio_wait_window_t3

0xb64d,	// (0x000675a7) bg_popup_call2_act_pane_ParamLimits

0xb64d,	// (0x000675a7) bg_popup_call2_act_pane

0xb70d,	// (0x00067667) call_type_pane_cp03_ParamLimits

0xb70d,	// (0x00067667) call_type_pane_cp03

0xb771,	// (0x000676cb) popup_call2_audio_first_window_g1_ParamLimits

0xb771,	// (0x000676cb) popup_call2_audio_first_window_g1

0xb7e1,	// (0x0006773b) popup_call2_audio_first_window_g2_ParamLimits

0xb7e1,	// (0x0006773b) popup_call2_audio_first_window_g2

0xae95,	// (0x00066def) popup_call2_audio_first_window_g3_ParamLimits

0xae95,	// (0x00066def) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0006b4a0) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0006b4a0) popup_call2_audio_first_window_g

0xb8bf,	// (0x00067819) popup_call2_audio_first_window_t1_ParamLimits

0xb8bf,	// (0x00067819) popup_call2_audio_first_window_t1

0xb9c2,	// (0x0006791c) popup_call2_audio_first_window_t4_ParamLimits

0xb9c2,	// (0x0006791c) popup_call2_audio_first_window_t4

0xbaa5,	// (0x000679ff) popup_call2_audio_first_window_t5_ParamLimits

0xbaa5,	// (0x000679ff) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0006b4ab) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0006b4ab) popup_call2_audio_first_window_t

0xa064,	// (0x00065fbe) bg_popup_call2_act_pane_g1

0xc11a,	// (0x00068074) popup_cale_lunar_info_window_t1

0xc128,	// (0x00068082) popup_cale_lunar_info_window_t2

0xc136,	// (0x00068090) popup_cale_lunar_info_window_t3

0x9e11,	// (0x00065d6b) bg_popup_call2_bubble_pane

0xbba6,	// (0x00067b00) bg_popup_call2_in_pane_cp01_ParamLimits

0xbba6,	// (0x00067b00) bg_popup_call2_in_pane_cp01

0x9aed,	// (0x00065a47) call_type_pane_cp02

0xbbee,	// (0x00067b48) popup_call2_audio_out_window_g1_ParamLimits

0xbbee,	// (0x00067b48) popup_call2_audio_out_window_g1

0xbc1a,	// (0x00067b74) popup_call2_audio_out_window_g2_ParamLimits

0xbc1a,	// (0x00067b74) popup_call2_audio_out_window_g2

0xbc42,	// (0x00067b9c) popup_call2_audio_out_window_g3_ParamLimits

0xbc42,	// (0x00067b9c) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0006b4b4) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0006b4b4) popup_call2_audio_out_window_g

0xbc7d,	// (0x00067bd7) popup_call2_audio_out_window_t1_ParamLimits

0xbc7d,	// (0x00067bd7) popup_call2_audio_out_window_t1

0xbcdc,	// (0x00067c36) popup_call2_audio_out_window_t2_ParamLimits

0xbcdc,	// (0x00067c36) popup_call2_audio_out_window_t2

0xbd30,	// (0x00067c8a) popup_call2_audio_out_window_t3_ParamLimits

0xbd30,	// (0x00067c8a) popup_call2_audio_out_window_t3

0xbd46,	// (0x00067ca0) popup_call2_audio_out_window_t4_ParamLimits

0xbd46,	// (0x00067ca0) popup_call2_audio_out_window_t4

0xbd5c,	// (0x00067cb6) popup_call2_audio_out_window_t5_ParamLimits

0xbd5c,	// (0x00067cb6) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0006b4bd) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0006b4bd) popup_call2_audio_out_window_t

0xbdc0,	// (0x00067d1a) bg_popup_call2_in_pane_ParamLimits

0xbdc0,	// (0x00067d1a) bg_popup_call2_in_pane

0xbe1c,	// (0x00067d76) popup_call2_audio_in_window_g1_ParamLimits

0xbe1c,	// (0x00067d76) popup_call2_audio_in_window_g1

0xbe54,	// (0x00067dae) popup_call2_audio_in_window_g2_ParamLimits

0xbe54,	// (0x00067dae) popup_call2_audio_in_window_g2

0xbe8c,	// (0x00067de6) popup_call2_audio_in_window_g3_ParamLimits

0xbe8c,	// (0x00067de6) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0006b4ca) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0006b4ca) popup_call2_audio_in_window_g

0xbee4,	// (0x00067e3e) popup_call2_audio_in_window_t1_ParamLimits

0xbee4,	// (0x00067e3e) popup_call2_audio_in_window_t1

0xbf64,	// (0x00067ebe) popup_call2_audio_in_window_t2_ParamLimits

0xbf64,	// (0x00067ebe) popup_call2_audio_in_window_t2

0xbfe4,	// (0x00067f3e) popup_call2_audio_in_window_t3_ParamLimits

0xbfe4,	// (0x00067f3e) popup_call2_audio_in_window_t3

0xbffe,	// (0x00067f58) popup_call2_audio_in_window_t4_ParamLimits

0xbffe,	// (0x00067f58) popup_call2_audio_in_window_t4

0xc010,	// (0x00067f6a) popup_call2_audio_in_window_t5_ParamLimits

0xc010,	// (0x00067f6a) popup_call2_audio_in_window_t5

0xc025,	// (0x00067f7f) popup_call2_audio_in_window_t6_ParamLimits

0xc025,	// (0x00067f7f) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0006b4d3) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0006b4d3) popup_call2_audio_in_window_t

0xa064,	// (0x00065fbe) bg_popup_call2_in_pane_g1

0xc144,	// (0x0006809e) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0006b53b) popup_cale_lunar_info_window_t

0xa06c,	// (0x00065fc6) bg_popup_call2_rect_pane_ParamLimits

0xa06c,	// (0x00065fc6) bg_popup_call2_rect_pane

0x9e11,	// (0x00065d6b) call2_cli_visual_graphic_pane

0x9e11,	// (0x00065d6b) call2_cli_visual_text_pane

0xc31a,	// (0x00068274) smil_status_volume_pane_g3

0x0002,

0xa228,	// (0x00066182) call2_cli_visual_graphic_pane_g1

0xa228,	// (0x00066182) call2_cli_visual_graphic_pane_g2

0xa228,	// (0x00066182) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0006b4e0) call2_cli_visual_graphic_pane_g

0xc03a,	// (0x00067f94) bg_popup_call2_rect_pane_g1

0xa2d0,	// (0x0006622a) bg_popup_call2_rect_pane_g2

0xc042,	// (0x00067f9c) bg_popup_call2_rect_pane_g3

0xc04a,	// (0x00067fa4) bg_popup_call2_rect_pane_g4

0xc052,	// (0x00067fac) bg_popup_call2_rect_pane_g5

0xc05a,	// (0x00067fb4) bg_popup_call2_rect_pane_g6

0xc062,	// (0x00067fbc) bg_popup_call2_rect_pane_g7

0xc06a,	// (0x00067fc4) bg_popup_call2_rect_pane_g8

0xc072,	// (0x00067fcc) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0006b4e7) bg_popup_call2_rect_pane_g

0xc07a,	// (0x00067fd4) bg_popup_call2_bubble_pane_g1

0xc082,	// (0x00067fdc) bg_popup_call2_bubble_pane_g2

0xc08a,	// (0x00067fe4) bg_popup_call2_bubble_pane_g3

0xc092,	// (0x00067fec) bg_popup_call2_bubble_pane_g4

0xc09a,	// (0x00067ff4) bg_popup_call2_bubble_pane_g5

0xc0a2,	// (0x00067ffc) bg_popup_call2_bubble_pane_g6

0xc0aa,	// (0x00068004) bg_popup_call2_bubble_pane_g7

0xc0b2,	// (0x0006800c) bg_popup_call2_bubble_pane_g8

0xc0ba,	// (0x00068014) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0006b4fa) bg_popup_call2_bubble_pane_g

0x13ba,	// (0x0005d314) aid_cale_week_size_cell_pane

0x1830,	// (0x0005d78a) aid_cams_cif_uncrop_pane_ParamLimits

0x1830,	// (0x0005d78a) aid_cams_cif_uncrop_pane

0x19ed,	// (0x0005d947) aid_cams_size_cell_ParamLimits

0x19ed,	// (0x0005d947) aid_cams_size_cell

0x1a01,	// (0x0005d95b) grid_cams_pane_ParamLimits

0x1a1b,	// (0x0005d975) linegrid_cams_pane_ParamLimits

0x1bf9,	// (0x0005db53) call_video_pane_t1

0x1c17,	// (0x0005db71) call_video_pane_t2

0x0001,

0xf28d,	// (0x0006b1e7) call_video_pane_t

0x204a,	// (0x0005dfa4) aid_cale_month_size_cell_pane_ParamLimits

0x204a,	// (0x0005dfa4) aid_cale_month_size_cell_pane

0xf62a,	// (0x0006b584) smil_status_volume_pane_g

0xc327,	// (0x00068281) volume_smil_pane_ParamLimits

0x0c53,	// (0x0005cbad) aid_popup2_width_pane

0x1317,	// (0x0005d271) cell_qdial_pane_g4_ParamLimits

0x1317,	// (0x0005d271) cell_qdial_pane_g4

0x2cd7,	// (0x0005ec31) aid_blid_cardinal_pane_ParamLimits

0x2ce3,	// (0x0005ec3d) aid_blid_destination_pane_ParamLimits

0x2ce3,	// (0x0005ec3d) aid_blid_destination_pane

0xa06c,	// (0x00065fc6) bg_popup_call_poc_act_pane_ParamLimits

0xa06c,	// (0x00065fc6) bg_popup_call_poc_act_pane

0xa06c,	// (0x00065fc6) bg_popup_call_poc_inact_pane_ParamLimits

0xa06c,	// (0x00065fc6) bg_popup_call_poc_inact_pane

0xc0ca,	// (0x00068024) bg_popup_call_poc_act_pane_g1

0xc0d2,	// (0x0006802c) bg_popup_call_poc_act_pane_g2

0xc0da,	// (0x00068034) bg_popup_call_poc_act_pane_g3

0xc092,	// (0x00067fec) bg_popup_call_poc_act_pane_g4

0xc09a,	// (0x00067ff4) bg_popup_call_poc_act_pane_g5

0xc0e2,	// (0x0006803c) bg_popup_call_poc_act_pane_g6

0xc0aa,	// (0x00068004) bg_popup_call_poc_act_pane_g7

0xc0ea,	// (0x00068044) bg_popup_call_poc_act_pane_g8

0x9e11,	// (0x00065d6b) main_usb_pane

0xc243,	// (0x0006819d) popup_cale_lunar_info_window

0x1ee1,	// (0x0005de3b) im_reading_pane_t1_ParamLimits

0xa559,	// (0x000664b3) list_im_pane_ParamLimits

0xa56a,	// (0x000664c4) scroll_pane_cp07_ParamLimits

0x9e11,	// (0x00065d6b) grid_highlight_pane_cp012

0xa06c,	// (0x00065fc6) mup_scale_pane_ParamLimits

0xafc3,	// (0x00066f1d) main_usb_pane_g1_ParamLimits

0xafc3,	// (0x00066f1d) main_usb_pane_g1

0x3a08,	// (0x0005f962) main_usb_pane_g2_ParamLimits

0x3a08,	// (0x0005f962) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0006b524) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0006b524) main_usb_pane_g

0x3a1e,	// (0x0005f978) main_usb_pane_t1_ParamLimits

0x3a1e,	// (0x0005f978) main_usb_pane_t1

0x3a30,	// (0x0005f98a) main_usb_pane_t2_ParamLimits

0x3a30,	// (0x0005f98a) main_usb_pane_t2

0x3a42,	// (0x0005f99c) main_usb_pane_t3_ParamLimits

0x3a42,	// (0x0005f99c) main_usb_pane_t3

0x3a54,	// (0x0005f9ae) main_usb_pane_t4_ParamLimits

0x3a54,	// (0x0005f9ae) main_usb_pane_t4

0x3a66,	// (0x0005f9c0) main_usb_pane_t5_ParamLimits

0x3a66,	// (0x0005f9c0) main_usb_pane_t5

0x3a78,	// (0x0005f9d2) main_usb_pane_t6_ParamLimits

0x3a78,	// (0x0005f9d2) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0006b529) main_usb_pane_t_ParamLimits

0x2c7c,	// (0x0005ebd6) aid_text_placing

0x2c85,	// (0x0005ebdf) main_location2_pane_t1_ParamLimits

0x2c99,	// (0x0005ebf3) main_location2_pane_t2_ParamLimits

0x2cad,	// (0x0005ec07) main_location2_pane_t3_ParamLimits

0x2cc3,	// (0x0005ec1d) main_location2_pane_t4_ParamLimits

0x2cc3,	// (0x0005ec1d) main_location2_pane_t4

0xf3ee,	// (0x0006b348) main_location2_pane_t_ParamLimits

0xa0b0,	// (0x0006600a) find_pinb_pane_g2_ParamLimits

0xa0b0,	// (0x0006600a) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0006b096) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0006b096) find_pinb_pane_g

0xa0bc,	// (0x00066016) find_pinb_pane_t1_ParamLimits

0xa0ce,	// (0x00066028) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0006b09b) find_pinb_pane_t_ParamLimits

0x9e11,	// (0x00065d6b) main_call3_pane

0x23ae,	// (0x0005e308) cale_month_day_heading_pane_t1_ParamLimits

0x240c,	// (0x0005e366) cale_month_day_heading_pane_t2_ParamLimits

0x2471,	// (0x0005e3cb) cale_month_day_heading_pane_t3_ParamLimits

0x24d6,	// (0x0005e430) cale_month_day_heading_pane_t4_ParamLimits

0x253b,	// (0x0005e495) cale_month_day_heading_pane_t5_ParamLimits

0x25b0,	// (0x0005e50a) cale_month_day_heading_pane_t6_ParamLimits

0x2625,	// (0x0005e57f) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0006b21f) cale_month_day_heading_pane_t_ParamLimits

0xa7b6,	// (0x00066710) smil_status_volume_pane

0x34ff,	// (0x0005f459) postcard_address_pane_ParamLimits

0x34ff,	// (0x0005f459) postcard_address_pane

0x3511,	// (0x0005f46b) postcard_message_pane_ParamLimits

0x3511,	// (0x0005f46b) postcard_message_pane

0x39eb,	// (0x0005f945) call2_cli_visual_pane_t1_ParamLimits

0x39eb,	// (0x0005f945) call2_cli_visual_pane_t1

0x41ff,	// (0x00060159) postcard_message_pane_t1_ParamLimits

0x41ff,	// (0x00060159) postcard_message_pane_t1

0x41e8,	// (0x00060142) postcard_address_pane_t1_ParamLimits

0x41e8,	// (0x00060142) postcard_address_pane_t1

0x41d4,	// (0x0006012e) popup_call3_audio_in_window_ParamLimits

0x41d4,	// (0x0006012e) popup_call3_audio_in_window

0x4063,	// (0x0005ffbd) bg_popup_call3_in_pane_ParamLimits

0x4063,	// (0x0005ffbd) bg_popup_call3_in_pane

0x40d5,	// (0x0006002f) popup_call3_audio_in_window_g1_ParamLimits

0x40d5,	// (0x0006002f) popup_call3_audio_in_window_g1

0x40f5,	// (0x0006004f) popup_call3_audio_in_window_g2_ParamLimits

0x40f5,	// (0x0006004f) popup_call3_audio_in_window_g2

0x4115,	// (0x0006006f) popup_call3_audio_in_window_g3_ParamLimits

0x4115,	// (0x0006006f) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0006b58b) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0006b58b) popup_call3_audio_in_window_g

0x4146,	// (0x000600a0) popup_call3_audio_in_window_t1_ParamLimits

0x4146,	// (0x000600a0) popup_call3_audio_in_window_t1

0x4184,	// (0x000600de) popup_call3_audio_in_window_t2_ParamLimits

0x4184,	// (0x000600de) popup_call3_audio_in_window_t2

0x41c2,	// (0x0006011c) popup_call3_audio_in_window_t3_ParamLimits

0x41c2,	// (0x0006011c) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0006b594) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0006b594) popup_call3_audio_in_window_t

0xadc4,	// (0x00066d1e) bg_popup_call3_rect_pane

0xc03a,	// (0x00067f94) bg_popup_call3_rect_pane_g1

0xa2d0,	// (0x0006622a) bg_popup_call3_rect_pane_g2

0xc042,	// (0x00067f9c) bg_popup_call3_rect_pane_g3

0xc04a,	// (0x00067fa4) bg_popup_call3_rect_pane_g4

0xc052,	// (0x00067fac) bg_popup_call3_rect_pane_g5

0xc05a,	// (0x00067fb4) bg_popup_call3_rect_pane_g6

0xc062,	// (0x00067fbc) bg_popup_call3_rect_pane_g7

0x30b5,	// (0x0005f00f) mup_visualizer_osc_pane

0xaea3,	// (0x00066dfd) mup_visualizer_spec_pane

0x4093,	// (0x0005ffed) call3_video_qcif_pane_ParamLimits

0x4093,	// (0x0005ffed) call3_video_qcif_pane

0x40a4,	// (0x0005fffe) call3_video_qcif_uncrop_pane_ParamLimits

0x40a4,	// (0x0005fffe) call3_video_qcif_uncrop_pane

0x40b0,	// (0x0006000a) call3_video_subqcif_pane_ParamLimits

0x40b0,	// (0x0006000a) call3_video_subqcif_pane

0x40c4,	// (0x0006001e) call3_video_subqcif_uncrop_pane_ParamLimits

0x40c4,	// (0x0006001e) call3_video_subqcif_uncrop_pane

0x4135,	// (0x0006008f) popup_call3_audio_in_window_g4_ParamLimits

0x4135,	// (0x0006008f) popup_call3_audio_in_window_g4

0x4052,	// (0x0005ffac) mup_spec_half_pane

0x405b,	// (0x0005ffb5) mup_spec_half_pane_cp

0xc2da,	// (0x00068234) mup_osc_middle_pane

0xc2e3,	// (0x0006823d) mup_visualizer_osc_pane_g1

0x4032,	// (0x0005ff8c) mup_spec_bar_pane_ParamLimits

0x4032,	// (0x0005ff8c) mup_spec_bar_pane

0xc2c7,	// (0x00068221) mup_spec_bar_pane_g1

0xc2d1,	// (0x0006822b) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0006b57f) mup_spec_bar_pane_g

0x13ba,	// (0x0005d314) aid_cale_week_size_cell_pane_ParamLimits

0x13cd,	// (0x0005d327) bg_cale_heading_pane_ParamLimits

0xa34c,	// (0x000662a6) bg_cale_pane_cp01_ParamLimits

0x13e5,	// (0x0005d33f) cale_week_corner_pane_ParamLimits

0x13f6,	// (0x0005d350) cale_week_day_heading_pane_ParamLimits

0x140e,	// (0x0005d368) cale_week_scroll_pane_g1_ParamLimits

0x1423,	// (0x0005d37d) cale_week_scroll_pane_g2_ParamLimits

0x1434,	// (0x0005d38e) cale_week_scroll_pane_g3_ParamLimits

0x1445,	// (0x0005d39f) cale_week_scroll_pane_g4_ParamLimits

0x1456,	// (0x0005d3b0) cale_week_scroll_pane_g5_ParamLimits

0x1469,	// (0x0005d3c3) cale_week_scroll_pane_g6_ParamLimits

0x147c,	// (0x0005d3d6) cale_week_scroll_pane_g7_ParamLimits

0x148f,	// (0x0005d3e9) cale_week_scroll_pane_g8_ParamLimits

0x14a2,	// (0x0005d3fc) cale_week_scroll_pane_g9_ParamLimits

0x14b3,	// (0x0005d40d) cale_week_scroll_pane_g10_ParamLimits

0x14c4,	// (0x0005d41e) cale_week_scroll_pane_g11_ParamLimits

0x14d5,	// (0x0005d42f) cale_week_scroll_pane_g12_ParamLimits

0x14e6,	// (0x0005d440) cale_week_scroll_pane_g13_ParamLimits

0x14f7,	// (0x0005d451) cale_week_scroll_pane_g14_ParamLimits

0x1508,	// (0x0005d462) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0006b127) cale_week_scroll_pane_g_ParamLimits

0x151d,	// (0x0005d477) cale_week_time_pane_ParamLimits

0x1530,	// (0x0005d48a) grid_cale_week_pane_ParamLimits

0xa365,	// (0x000662bf) listscroll_cale_week_pane_t1

0x1545,	// (0x0005d49f) scroll_pane_cp08_ParamLimits

0x208b,	// (0x0005dfe5) cale_month_corner_pane_ParamLimits

0xa780,	// (0x000666da) cale_month_pane_t1

0x236d,	// (0x0005e2c7) cale_month_week_pane_ParamLimits

0x2ae3,	// (0x0005ea3d) popup_call_status_window_g1_ParamLimits

0x2af7,	// (0x0005ea51) popup_call_status_window_g2_ParamLimits

0x2b0b,	// (0x0005ea65) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0006b2cf) popup_call_status_window_g_ParamLimits

0xaac8,	// (0x00066a22) aid_call2_pane

0x3331,	// (0x0005f28b) msg_header_pane_g1

0x34ff,	// (0x0005f459) postcard_address2_pane_ParamLimits

0x34ff,	// (0x0005f459) postcard_address2_pane

0x3511,	// (0x0005f46b) postcard_message2_pane_ParamLimits

0x3511,	// (0x0005f46b) postcard_message2_pane

0x3fdf,	// (0x0005ff39) message2_row_pane_ParamLimits

0x3fdf,	// (0x0005ff39) message2_row_pane

0x3ffe,	// (0x0005ff58) address2_row_pane_ParamLimits

0x3ffe,	// (0x0005ff58) address2_row_pane

0xc295,	// (0x000681ef) postcard_message2_row_pane_g1

0xc29d,	// (0x000681f7) postcard_message2_row_pane_t1

0xc295,	// (0x000681ef) address2_row_pane_g1

0xc29d,	// (0x000681f7) address2_row_pane_t1

0xa3c9,	// (0x00066323) aid_size_cell_vorec

0x9e11,	// (0x00065d6b) main_rss_pane

0x4011,	// (0x0005ff6b) rss_list_single_pane_ParamLimits

0x4011,	// (0x0005ff6b) rss_list_single_pane

0xc2ab,	// (0x00068205) rss_list_single_pane_t1

0xc2b9,	// (0x00068213) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0006b57a) rss_list_single_pane_t

0x9e11,	// (0x00065d6b) main_camera2_pane

0x9e11,	// (0x00065d6b) main_video2_pane

0x4278,	// (0x000601d2) cams_zoom_pane_cp2_ParamLimits

0x4278,	// (0x000601d2) cams_zoom_pane_cp2

0x4298,	// (0x000601f2) image2_vga_pane_ParamLimits

0x4298,	// (0x000601f2) image2_vga_pane

0x42e9,	// (0x00060243) main_camera2_pane_g1_ParamLimits

0x42e9,	// (0x00060243) main_camera2_pane_g1

0x4309,	// (0x00060263) main_camera2_pane_g2_ParamLimits

0x4309,	// (0x00060263) main_camera2_pane_g2

0x4329,	// (0x00060283) main_camera2_pane_g3_ParamLimits

0x4329,	// (0x00060283) main_camera2_pane_g3

0x4349,	// (0x000602a3) main_camera2_pane_g4_ParamLimits

0x4349,	// (0x000602a3) main_camera2_pane_g4

0x4369,	// (0x000602c3) main_camera2_pane_g5_ParamLimits

0x4369,	// (0x000602c3) main_camera2_pane_g5

0x4389,	// (0x000602e3) main_camera2_pane_g6_ParamLimits

0x4389,	// (0x000602e3) main_camera2_pane_g6

0x43a9,	// (0x00060303) main_camera2_pane_g7_ParamLimits

0x43a9,	// (0x00060303) main_camera2_pane_g7

0x43c9,	// (0x00060323) main_camera2_pane_g8_ParamLimits

0x43c9,	// (0x00060323) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0006b59b) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0006b59b) main_camera2_pane_g

0x4409,	// (0x00060363) main_camera2_pane_t1_ParamLimits

0x4409,	// (0x00060363) main_camera2_pane_t1

0x443e,	// (0x00060398) main_camera2_pane_t2_ParamLimits

0x443e,	// (0x00060398) main_camera2_pane_t2

0x4464,	// (0x000603be) main_camera2_pane_t3_ParamLimits

0x4464,	// (0x000603be) main_camera2_pane_t3

0x44c2,	// (0x0006041c) main_camera2_pane_t4_ParamLimits

0x44c2,	// (0x0006041c) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0006b5ae) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0006b5ae) main_camera2_pane_t

0x4554,	// (0x000604ae) cams_zoom_pane_cp4_ParamLimits

0x4554,	// (0x000604ae) cams_zoom_pane_cp4

0x456a,	// (0x000604c4) image2_cif_pane_ParamLimits

0x456a,	// (0x000604c4) image2_cif_pane

0x4595,	// (0x000604ef) image2_subqcif_pane_ParamLimits

0x4595,	// (0x000604ef) image2_subqcif_pane

0x45af,	// (0x00060509) main_video2_pane_g1_ParamLimits

0x45af,	// (0x00060509) main_video2_pane_g1

0x45c9,	// (0x00060523) main_video2_pane_g2_ParamLimits

0x45c9,	// (0x00060523) main_video2_pane_g2

0x45df,	// (0x00060539) main_video2_pane_g3_ParamLimits

0x45df,	// (0x00060539) main_video2_pane_g3

0x45f5,	// (0x0006054f) main_video2_pane_g4_ParamLimits

0x45f5,	// (0x0006054f) main_video2_pane_g4

0x460b,	// (0x00060565) main_video2_pane_g5_ParamLimits

0x460b,	// (0x00060565) main_video2_pane_g5

0x4621,	// (0x0006057b) main_video2_pane_g6_ParamLimits

0x4621,	// (0x0006057b) main_video2_pane_g6

0x0005,

0xf663,	// (0x0006b5bd) main_video2_pane_g_ParamLimits

0xf663,	// (0x0006b5bd) main_video2_pane_g

0x463b,	// (0x00060595) main_video2_pane_t1_ParamLimits

0x463b,	// (0x00060595) main_video2_pane_t1

0x465f,	// (0x000605b9) main_video2_pane_t2_ParamLimits

0x465f,	// (0x000605b9) main_video2_pane_t2

0x46ad,	// (0x00060607) main_video2_pane_t3_ParamLimits

0x46ad,	// (0x00060607) main_video2_pane_t3

0x0002,

0xf670,	// (0x0006b5ca) main_video2_pane_t_ParamLimits

0xf670,	// (0x0006b5ca) main_video2_pane_t

0x3b35,	// (0x0005fa8f) call_muted_g2

0x0001,

0xf612,	// (0x0006b56c) call_muted_g

0x9e11,	// (0x00065d6b) main_mup2_pane

0x46f5,	// (0x0006064f) main_mup2_pane_g1_ParamLimits

0x46f5,	// (0x0006064f) main_mup2_pane_g1

0x4701,	// (0x0006065b) main_mup2_pane_g2_ParamLimits

0x4701,	// (0x0006065b) main_mup2_pane_g2

0xc44b,	// (0x000683a5) main_mup_pane_g13_cp1

0xc453,	// (0x000683ad) mup_volume_pane_cp1

0x471d,	// (0x00060677) main_mup2_pane_g4_ParamLimits

0x471d,	// (0x00060677) main_mup2_pane_g4

0x472f,	// (0x00060689) main_mup2_pane_g5_ParamLimits

0x472f,	// (0x00060689) main_mup2_pane_g5

0x4741,	// (0x0006069b) main_mup2_pane_g6_ParamLimits

0x4741,	// (0x0006069b) main_mup2_pane_g6

0x4753,	// (0x000606ad) main_mup2_pane_g7_ParamLimits

0x4753,	// (0x000606ad) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0006b5d1) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0006b5d1) main_mup2_pane_g

0x476b,	// (0x000606c5) main_mup2_pane_t1_ParamLimits

0x476b,	// (0x000606c5) main_mup2_pane_t1

0x4781,	// (0x000606db) main_mup2_pane_t2_ParamLimits

0x4781,	// (0x000606db) main_mup2_pane_t2

0x4797,	// (0x000606f1) main_mup2_pane_t3_ParamLimits

0x4797,	// (0x000606f1) main_mup2_pane_t3

0x47ad,	// (0x00060707) main_mup2_pane_t4_ParamLimits

0x47ad,	// (0x00060707) main_mup2_pane_t4

0x47c5,	// (0x0006071f) main_mup2_pane_t5_ParamLimits

0x47c5,	// (0x0006071f) main_mup2_pane_t5

0x47dd,	// (0x00060737) main_mup2_pane_t6_ParamLimits

0x47dd,	// (0x00060737) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0006b5e0) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0006b5e0) main_mup2_pane_t

0x480d,	// (0x00060767) mup2_visualizer_pane_ParamLimits

0x480d,	// (0x00060767) mup2_visualizer_pane

0x483b,	// (0x00060795) mup_progress_pane_cp_ParamLimits

0x483b,	// (0x00060795) mup_progress_pane_cp

0xc42d,	// (0x00068387) mup_volume_pane_cp_ParamLimits

0xc42d,	// (0x00068387) mup_volume_pane_cp

0x484f,	// (0x000607a9) mup2_visualizer_pane_g1_ParamLimits

0x484f,	// (0x000607a9) mup2_visualizer_pane_g1

0xc36c,	// (0x000682c6) mup2_visualizer_pane_g2_ParamLimits

0xc36c,	// (0x000682c6) mup2_visualizer_pane_g2

0x4866,	// (0x000607c0) mup2_visualizer_pane_g3_ParamLimits

0x4866,	// (0x000607c0) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0006b5ed) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0006b5ed) mup2_visualizer_pane_g

0xb10c,	// (0x00067066) aid_size_cell_fmradio

0x3ce7,	// (0x0005fc41) aid_height_parent_landcape

0xa5e8,	// (0x00066542) wml_content_pane_cp

0xa5f0,	// (0x0006654a) wml_tabs_pane

0xa5f9,	// (0x00066553) popup_wml_miniature_window

0xa601,	// (0x0006655b) scroll_pane_cp021

0xa615,	// (0x0006656f) wml_content_pane_comp8

0x9e11,	// (0x00065d6b) bg_popup_sub_pane_cp05

0xc38a,	// (0x000682e4) popup_wml_miniature_window_g1

0xc392,	// (0x000682ec) wml_miniature_view_pane

0x4872,	// (0x000607cc) aid_size_wml_view

0x487a,	// (0x000607d4) wml_miniature_view_pane_g1

0x4883,	// (0x000607dd) wml_miniature_view_pane_g2

0x488c,	// (0x000607e6) wml_miniature_view_pane_g3

0x4894,	// (0x000607ee) wml_miniature_view_pane_g4

0x489c,	// (0x000607f6) wml_miniature_view_pane_g5

0x48a4,	// (0x000607fe) wml_miniature_view_pane_g6

0x48ac,	// (0x00060806) wml_miniature_view_pane_g7

0x48b4,	// (0x0006080e) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0006b5f4) wml_miniature_view_pane_g

0xc39a,	// (0x000682f4) background_graphic_ParamLimits

0xc39a,	// (0x000682f4) background_graphic

0xc3a6,	// (0x00068300) wml_tabs_2_pane

0xc3af,	// (0x00068309) wml_tabs_3_pane_ParamLimits

0xc3af,	// (0x00068309) wml_tabs_3_pane

0xc3c1,	// (0x0006831b) wml_tabs_4_pane_ParamLimits

0xc3c1,	// (0x0006831b) wml_tabs_4_pane

0xc3d7,	// (0x00068331) wml_tabs_5_pane_ParamLimits

0xc3d7,	// (0x00068331) wml_tabs_5_pane

0xc3f1,	// (0x0006834b) wml_tabs_pane_g2_ParamLimits

0xc3f1,	// (0x0006834b) wml_tabs_pane_g2

0xc405,	// (0x0006835f) wml_tabs_pane_g3_ParamLimits

0xc405,	// (0x0006835f) wml_tabs_pane_g3

0x48bc,	// (0x00060816) wml_tabs_2_active_pane_ParamLimits

0x48bc,	// (0x00060816) wml_tabs_2_active_pane

0x48d0,	// (0x0006082a) wml_tabs_2_passive_pane_ParamLimits

0x48d0,	// (0x0006082a) wml_tabs_2_passive_pane

0x48e4,	// (0x0006083e) wml_tabs_3_active_pane_cp_ParamLimits

0x48e4,	// (0x0006083e) wml_tabs_3_active_pane_cp

0x48f9,	// (0x00060853) wml_tabs_3_passive_pane_ParamLimits

0x48f9,	// (0x00060853) wml_tabs_3_passive_pane

0x490c,	// (0x00060866) wml_tabs_3_passive_pane_cp_ParamLimits

0x490c,	// (0x00060866) wml_tabs_3_passive_pane_cp

0x4923,	// (0x0006087d) tabs_4_active_pane

0x492b,	// (0x00060885) tabs_4_passive_pane

0x4935,	// (0x0006088f) tabs_4_passive_pane_cp

0x493d,	// (0x00060897) tabs_4_passive_pane_cp2

0xc0c2,	// (0x0006801c) aid_height_text

0x3087,	// (0x0005efe1) mup_volume_cont_pane_ParamLimits

0x3087,	// (0x0005efe1) mup_volume_cont_pane

0x0fe7,	// (0x0005cf41) aid_size_cell_pinb

0xa09c,	// (0x00065ff6) aid_size_list_pinb

0x4827,	// (0x00060781) mup2_volume_cont_pane_ParamLimits

0x4827,	// (0x00060781) mup2_volume_cont_pane

0xc419,	// (0x00068373) mup2_volume_cont_pane_g1_ParamLimits

0xc419,	// (0x00068373) mup2_volume_cont_pane_g1

0x0c5f,	// (0x0005cbb9) aid_size_cell_touch_ParamLimits

0x0c5f,	// (0x0005cbb9) aid_size_cell_touch

0x0ed5,	// (0x0005ce2f) touch_pane_ParamLimits

0x0ed5,	// (0x0005ce2f) touch_pane

0x0c41,	// (0x0005cb9b) main_rss2_pane

0xc45b,	// (0x000683b5) listscroll_rss2_pane

0xc464,	// (0x000683be) rss2_navigation_pane

0xc46c,	// (0x000683c6) list_rss2_pane

0xac77,	// (0x00066bd1) scroll_pane_cp22

0xc474,	// (0x000683ce) rss2_navigation_pane_g1

0xc47d,	// (0x000683d7) rss2_navigation_pane_g2

0xc485,	// (0x000683df) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0006b605) rss2_navigation_pane_g

0xc48d,	// (0x000683e7) rss2_navigation_pane_t1

0x4947,	// (0x000608a1) rss2_list_single_pane_ParamLimits

0x4947,	// (0x000608a1) rss2_list_single_pane

0xc49b,	// (0x000683f5) rss2_list_single_pane_t2

0xc4a9,	// (0x00068403) rss2_list_single_pane_t3_ParamLimits

0xc4a9,	// (0x00068403) rss2_list_single_pane_t3

0xc4c6,	// (0x00068420) rss2_list_single_pane_t4

0x284b,	// (0x0005e7a5) smil_status_pane_g1

0x0ebb,	// (0x0005ce15) main_image2_pane_ParamLimits

0x0ebb,	// (0x0005ce15) main_image2_pane

0x43e9,	// (0x00060343) main_camera2_pane_g9_ParamLimits

0x43e9,	// (0x00060343) main_camera2_pane_g9

0x4517,	// (0x00060471) main_camera2_pane_t5_ParamLimits

0x4517,	// (0x00060471) main_camera2_pane_t5

0xc33c,	// (0x00068296) main_camera2_pane_t6_ParamLimits

0xc33c,	// (0x00068296) main_camera2_pane_t6

0x495f,	// (0x000608b9) main_image2_pane_g1_ParamLimits

0x495f,	// (0x000608b9) main_image2_pane_g1

0x3741,	// (0x0005f69b) smil2_video_pane_ParamLimits

0x3741,	// (0x0005f69b) smil2_video_pane

0x0c9f,	// (0x0005cbf9) aid_zoom_text_primary_cp

0x0e77,	// (0x0005cdd1) popup_preview_fixed_window

0xa551,	// (0x000664ab) im_reading_pane_g1

0x4260,	// (0x000601ba) cams2_bc_adjust_pane_cp_ParamLimits

0x4260,	// (0x000601ba) cams2_bc_adjust_pane_cp

0x4546,	// (0x000604a0) cams2_bc_adjust_pane_ParamLimits

0x4546,	// (0x000604a0) cams2_bc_adjust_pane

0xc4d4,	// (0x0006842e) cams2_bc_adjust_pane_g1

0xc4dc,	// (0x00068436) cams2_slider_pane

0xc4e5,	// (0x0006843f) cams2_slider_pane_g1

0xc4ee,	// (0x00068448) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0006b60c) cams2_slider_pane_g

0x10a6,	// (0x0005d000) calc_display_pane_ParamLimits

0x10ce,	// (0x0005d028) calc_paper_pane_ParamLimits

0x10f1,	// (0x0005d04b) grid_calc_pane_ParamLimits

0xab2a,	// (0x00066a84) popup_clock_digital_window_t1_ParamLimits

0xb0a9,	// (0x00067003) main_image_pane_t1

0x1088,	// (0x0005cfe2) aid_size_cell_calc_ParamLimits

0x1088,	// (0x0005cfe2) aid_size_cell_calc

0x3d2d,	// (0x0005fc87) popup_blid_sat_info2_window_ParamLimits

0x3d2d,	// (0x0005fc87) popup_blid_sat_info2_window

0xc510,	// (0x0006846a) aid_size_cell_blid

0xc518,	// (0x00068472) bg_popup_window_pane_cp07

0xc53b,	// (0x00068495) grid_popup_blid_pane

0xc545,	// (0x0006849f) heading_pane_cp05_ParamLimits

0xc545,	// (0x0006849f) heading_pane_cp05

0xc60f,	// (0x00068569) cell_popup_blid_pane_ParamLimits

0xc60f,	// (0x00068569) cell_popup_blid_pane

0xc635,	// (0x0006858f) cell_popup_blid_pane_g1

0xc63d,	// (0x00068597) cell_popup_blid_pane_t1

0x47f7,	// (0x00060751) mup2_indicator_pane_ParamLimits

0x47f7,	// (0x00060751) mup2_indicator_pane

0xadc4,	// (0x00066d1e) mup2_visualizer_osc_pane

0xc378,	// (0x000682d2) mup2_visualizer_spec_pane_ParamLimits

0xc378,	// (0x000682d2) mup2_visualizer_spec_pane

0x4975,	// (0x000608cf) mup2_spec_half_pane

0x497e,	// (0x000608d8) mup2_spec_half_pane_cp

0x4986,	// (0x000608e0) mup2_spec_bar_pane_ParamLimits

0x4986,	// (0x000608e0) mup2_spec_bar_pane

0xc2c7,	// (0x00068221) mup2_spec_bar_pane_g1

0xc2d1,	// (0x0006822b) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0006b57f) mup2_spec_bar_pane_g

0x49a6,	// (0x00060900) mup2_osc_middle_pane

0xc2e3,	// (0x0006823d) mup2_visualizer_osc_pane_g1

0x9a20,	// (0x0006597a) popup_number_entry_window_t1_ParamLimits

0x9a33,	// (0x0006598d) popup_number_entry_window_t2_ParamLimits

0x9a45,	// (0x0006599f) popup_number_entry_window_t3_ParamLimits

0x0f27,	// (0x0005ce81) popup_number_entry_window_t5_ParamLimits

0x0f27,	// (0x0005ce81) popup_number_entry_window_t5

0xf0e7,	// (0x0006b041) popup_number_entry_window_t_ParamLimits

0x9a57,	// (0x000659b1) text_title_cp2_ParamLimits

0xaf83,	// (0x00066edd) aid_hotspot_pointer_text2_pane

0xafa9,	// (0x00066f03) main_viewer_pane_g9_ParamLimits

0xafa9,	// (0x00066f03) main_viewer_pane_g9

0xa780,	// (0x000666da) cale_month_pane_t1_ParamLimits

0xa7eb,	// (0x00066745) bg_cale_pane_ParamLimits

0xa803,	// (0x0006675d) list_cale_pane_ParamLimits

0xa365,	// (0x000662bf) listscroll_cale_day_pane_t1

0xa814,	// (0x0006676e) scroll_pane_cp09_ParamLimits

0x30bd,	// (0x0005f017) main_mup_eq_pane_t1_ParamLimits

0x30bd,	// (0x0005f017) main_mup_eq_pane_t1

0x30d9,	// (0x0005f033) main_mup_eq_pane_t2_ParamLimits

0x30d9,	// (0x0005f033) main_mup_eq_pane_t2

0x30f5,	// (0x0005f04f) main_mup_eq_pane_t3_ParamLimits

0x30f5,	// (0x0005f04f) main_mup_eq_pane_t3

0x3113,	// (0x0005f06d) main_mup_eq_pane_t4_ParamLimits

0x3113,	// (0x0005f06d) main_mup_eq_pane_t4

0x3131,	// (0x0005f08b) main_mup_eq_pane_t5_ParamLimits

0x3131,	// (0x0005f08b) main_mup_eq_pane_t5

0x314f,	// (0x0005f0a9) main_mup_eq_pane_t6_ParamLimits

0x314f,	// (0x0005f0a9) main_mup_eq_pane_t6

0x3165,	// (0x0005f0bf) main_mup_eq_pane_t7_ParamLimits

0x3165,	// (0x0005f0bf) main_mup_eq_pane_t7

0x317b,	// (0x0005f0d5) main_mup_eq_pane_t8_ParamLimits

0x317b,	// (0x0005f0d5) main_mup_eq_pane_t8

0x3191,	// (0x0005f0eb) main_mup_eq_pane_t9_ParamLimits

0x3191,	// (0x0005f0eb) main_mup_eq_pane_t9

0x31ab,	// (0x0005f105) main_mup_eq_pane_t10_ParamLimits

0x31ab,	// (0x0005f105) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0006b3ce) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0006b3ce) main_mup_eq_pane_t

0x325a,	// (0x0005f1b4) mup_equalizer_pane_cp5_ParamLimits

0x326e,	// (0x0005f1c8) mup_equalizer_pane_cp6_ParamLimits

0x3282,	// (0x0005f1dc) mup_equalizer_pane_cp7_ParamLimits

0x0c41,	// (0x0005cb9b) main_gallery_pane

0xc2ec,	// (0x00068246) smil2_volume_pane

0xc2f4,	// (0x0006824e) smil_status_volume_pane_g1_ParamLimits

0xc307,	// (0x00068261) smil_status_volume_pane_g2_ParamLimits

0xc31a,	// (0x00068274) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0006b584) smil_status_volume_pane_g_ParamLimits

0xc518,	// (0x00068472) bg_popup_window_pane_cp07_ParamLimits

0xc526,	// (0x00068480) blid_firmament_pane

0x49af,	// (0x00060909) aid_size_cell_gallery_ParamLimits

0x49af,	// (0x00060909) aid_size_cell_gallery

0x49c5,	// (0x0006091f) grid_gallery_pane_ParamLimits

0x49c5,	// (0x0006091f) grid_gallery_pane

0x49de,	// (0x00060938) cell_gallery_pane_ParamLimits

0x49de,	// (0x00060938) cell_gallery_pane

0xc64b,	// (0x000685a5) bg_cell_gallery_focus_pane_ParamLimits

0xc64b,	// (0x000685a5) bg_cell_gallery_focus_pane

0xc65d,	// (0x000685b7) cell_gallery_pane_g1_ParamLimits

0xc65d,	// (0x000685b7) cell_gallery_pane_g1

0x4a27,	// (0x00060981) cell_gallery_pane_g2_ParamLimits

0x4a27,	// (0x00060981) cell_gallery_pane_g2

0x4a34,	// (0x0006098e) cell_gallery_pane_g3_ParamLimits

0x4a34,	// (0x0006098e) cell_gallery_pane_g3

0xc669,	// (0x000685c3) cell_gallery_pane_g4_ParamLimits

0xc669,	// (0x000685c3) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0006b632) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0006b632) cell_gallery_pane_g

0xc675,	// (0x000685cf) bg_cell_gallery_focus_pane_g1

0xc67d,	// (0x000685d7) bg_cell_gallery_focus_pane_g2

0xc685,	// (0x000685df) bg_cell_gallery_focus_pane_g3

0xc68d,	// (0x000685e7) bg_cell_gallery_focus_pane_g4

0xc695,	// (0x000685ef) bg_cell_gallery_focus_pane_g5

0xc69d,	// (0x000685f7) bg_cell_gallery_focus_pane_g6

0xc6a5,	// (0x000685ff) bg_cell_gallery_focus_pane_g7

0xc6ad,	// (0x00068607) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0006b63b) bg_cell_gallery_focus_pane_g

0xc6b5,	// (0x0006860f) aid_firma_cardinal

0xc6c9,	// (0x00068623) blid_firmament_pane_t1

0xc6e0,	// (0x0006863a) blid_firmament_pane_t2

0xc6f7,	// (0x00068651) blid_firmament_pane_t3

0xc70e,	// (0x00068668) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0006b64c) blid_firmament_pane_t

0xc725,	// (0x0006867f) blid_sat_info_pane

0xc735,	// (0x0006868f) blid_sat_info_pane_g1

0xc735,	// (0x0006868f) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0006b655) blid_sat_info_pane_g

0xc73f,	// (0x00068699) blid_sat_info_pane_t1

0xc74d,	// (0x000686a7) smil2_volume_content_pane

0xc756,	// (0x000686b0) smil2_volume_pane_g1

0xc75e,	// (0x000686b8) smil2_volume_content_pane_g1

0xc767,	// (0x000686c1) smil2_volume_content_pane_g2

0xc770,	// (0x000686ca) smil2_volume_content_pane_g3

0xc779,	// (0x000686d3) smil2_volume_content_pane_g4

0xc782,	// (0x000686dc) smil2_volume_content_pane_g5

0xc78b,	// (0x000686e5) smil2_volume_content_pane_g6

0xc794,	// (0x000686ee) smil2_volume_content_pane_g7

0xc79d,	// (0x000686f7) smil2_volume_content_pane_g8

0xc7a6,	// (0x00068700) smil2_volume_content_pane_g9

0xc7af,	// (0x00068709) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0006b65a) smil2_volume_content_pane_g

0x159f,	// (0x0005d4f9) cale_week_day_heading_pane_t1_ParamLimits

0x15b3,	// (0x0005d50d) cale_week_day_heading_pane_t2_ParamLimits

0x15c7,	// (0x0005d521) cale_week_day_heading_pane_t3_ParamLimits

0x15db,	// (0x0005d535) cale_week_day_heading_pane_t4_ParamLimits

0x15ef,	// (0x0005d549) cale_week_day_heading_pane_t5_ParamLimits

0x1603,	// (0x0005d55d) cale_week_day_heading_pane_t6_ParamLimits

0x1619,	// (0x0005d573) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0006b146) cale_week_day_heading_pane_t_ParamLimits

0xa377,	// (0x000662d1) bg_cale_side_pane_ParamLimits

0x162d,	// (0x0005d587) cale_week_time_pane_t1_ParamLimits

0x1645,	// (0x0005d59f) cale_week_time_pane_t2_ParamLimits

0x165d,	// (0x0005d5b7) cale_week_time_pane_t3_ParamLimits

0x1675,	// (0x0005d5cf) cale_week_time_pane_t4_ParamLimits

0x168d,	// (0x0005d5e7) cale_week_time_pane_t5_ParamLimits

0x16a5,	// (0x0005d5ff) cale_week_time_pane_t6_ParamLimits

0x16bd,	// (0x0005d617) cale_week_time_pane_t7_ParamLimits

0x16d5,	// (0x0005d62f) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0006b155) cale_week_time_pane_t_ParamLimits

0x16ed,	// (0x0005d647) cell_cale_week_pane_g2_ParamLimits

0xa377,	// (0x000662d1) bg_cale_side_pane_cp01_ParamLimits

0x269a,	// (0x0005e5f4) cale_month_week_pane_t1_ParamLimits

0x26b1,	// (0x0005e60b) cale_month_week_pane_t2_ParamLimits

0x26c8,	// (0x0005e622) cale_month_week_pane_t3_ParamLimits

0x26df,	// (0x0005e639) cale_month_week_pane_t4_ParamLimits

0x26f6,	// (0x0005e650) cale_month_week_pane_t5_ParamLimits

0x270d,	// (0x0005e667) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0006b22e) cale_month_week_pane_t_ParamLimits

0xa792,	// (0x000666ec) cell_cale_month_pane_g1_ParamLimits

0x0c41,	// (0x0005cb9b) main_cale_event_viewer_pane

0x0c41,	// (0x0005cb9b) listscroll_cale_event_viewer_pane

0xc7b8,	// (0x00068712) list_cale_ev_pane

0xc7c0,	// (0x0006871a) scroll_pane_cp023

0xc7cc,	// (0x00068726) field_cale_ev_pane_ParamLimits

0xc7cc,	// (0x00068726) field_cale_ev_pane

0xc7e6,	// (0x00068740) field_cale_ev_content_pane_ParamLimits

0xc7e6,	// (0x00068740) field_cale_ev_content_pane

0xc7f2,	// (0x0006874c) field_cale_ev_pane_g1_ParamLimits

0xc7f2,	// (0x0006874c) field_cale_ev_pane_g1

0xc7fe,	// (0x00068758) field_cale_ev_pane_g2_ParamLimits

0xc7fe,	// (0x00068758) field_cale_ev_pane_g2

0xc816,	// (0x00068770) field_cale_ev_pane_g3_ParamLimits

0xc816,	// (0x00068770) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0006b66f) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0006b66f) field_cale_ev_pane_g

0xc82e,	// (0x00068788) field_cale_ev_pane_t1_ParamLimits

0xc82e,	// (0x00068788) field_cale_ev_pane_t1

0xc845,	// (0x0006879f) field_cale_ev_content_pane_t1_ParamLimits

0xc845,	// (0x0006879f) field_cale_ev_content_pane_t1

0xaf4d,	// (0x00066ea7) bg_button_pane_cp01

0xa1af,	// (0x00066109) listscroll_cale_week_pane_ParamLimits

0x13b0,	// (0x0005d30a) popup_toolbar_window_cp01

0xa365,	// (0x000662bf) listscroll_cale_week_pane_t1_ParamLimits

0xa1af,	// (0x00066109) listscroll_cale_day_pane_ParamLimits

0x28aa,	// (0x0005e804) popup_toolbar_window_cp02

0xa365,	// (0x000662bf) listscroll_cale_day_pane_t1_ParamLimits

0xa1af,	// (0x00066109) main_cale_month_pane_ParamLimits

0x3f53,	// (0x0005fead) popup_toolbar_window_cp03_ParamLimits

0x3f53,	// (0x0005fead) popup_toolbar_window_cp03

0x3605,	// (0x0005f55f) main_image_pane_g2_ParamLimits

0x3605,	// (0x0005f55f) main_image_pane_g2

0x3616,	// (0x0005f570) main_image_pane_g3_ParamLimits

0x3616,	// (0x0005f570) main_image_pane_g3

0x0002,

0xf506,	// (0x0006b460) main_image_pane_g_ParamLimits

0xf506,	// (0x0006b460) main_image_pane_g

0xb0a9,	// (0x00067003) main_image_pane_t1_ParamLimits

0x3627,	// (0x0005f581) main_image_pane_t2_ParamLimits

0x3627,	// (0x0005f581) main_image_pane_t2

0x3639,	// (0x0005f593) main_image_pane_t3_ParamLimits

0x3639,	// (0x0005f593) main_image_pane_t3

0x3661,	// (0x0005f5bb) main_image_pane_t4_ParamLimits

0x3661,	// (0x0005f5bb) main_image_pane_t4

0x0003,

0xf50d,	// (0x0006b467) main_image_pane_t_ParamLimits

0xf50d,	// (0x0006b467) main_image_pane_t

0x3681,	// (0x0005f5db) popup_image_details_window_cp01

0x368b,	// (0x0005f5e5) popup_toobar_trans_pane_cp01_ParamLimits

0x368b,	// (0x0005f5e5) popup_toobar_trans_pane_cp01

0x3e04,	// (0x0005fd5e) popup_image_details_window_ParamLimits

0x3e04,	// (0x0005fd5e) popup_image_details_window

0xc24d,	// (0x000681a7) popup_image_focus_window

0x421a,	// (0x00060174) camera2_autofocus_pane_ParamLimits

0x421a,	// (0x00060174) camera2_autofocus_pane

0x0c41,	// (0x0005cb9b) bg_popup_sub_pane_cp06

0xc862,	// (0x000687bc) popup_image_focus_window_g1

0xc86a,	// (0x000687c4) popup_image_focus_window_g2

0xc872,	// (0x000687cc) popup_image_focus_window_g3

0xc87a,	// (0x000687d4) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0006b676) popup_image_focus_window_g

0xc882,	// (0x000687dc) popup_image_focus_window_t1

0xc890,	// (0x000687ea) popup_image_focus_window_t2

0xc8a0,	// (0x000687fa) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0006b67f) popup_image_focus_window_t

0xc8ae,	// (0x00068808) camera2_autofocus_pane_g1

0x0ebb,	// (0x0005ce15) bg_tb_trans_pane_cp01

0xc8bc,	// (0x00068816) popup_image_details_window_g1

0xc8cf,	// (0x00068829) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0006b691) popup_image_details_window_g

0xc8f8,	// (0x00068852) popup_image_details_window_t1

0xc90a,	// (0x00068864) popup_image_details_window_t2

0xc923,	// (0x0006887d) popup_image_details_window_t3

0xc937,	// (0x00068891) popup_image_details_window_t4

0xc952,	// (0x000688ac) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0006b698) popup_image_details_window_t

0xa177,	// (0x000660d1) bg_calc_paper_pane_ParamLimits

0xa18b,	// (0x000660e5) grid_highlight_pane_cp013

0xa195,	// (0x000660ef) list_calc_pane_ParamLimits

0xa1a7,	// (0x00066101) scroll_pane_cp024

0xa1af,	// (0x00066109) bg_calc_display_pane_ParamLimits

0x11ef,	// (0x0005d149) calc_display_pane_t1_ParamLimits

0x1201,	// (0x0005d15b) calc_display_pane_t2_ParamLimits

0xa1bb,	// (0x00066115) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0006b0c8) calc_display_pane_t_ParamLimits

0x12c4,	// (0x0005d21e) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0006b0e5) cell_calc_pane_g

0x12cd,	// (0x0005d227) cell_calc_pane_t1

0xa232,	// (0x0006618c) grid_highlight_pane_cp02_ParamLimits

0xa248,	// (0x000661a2) toolbar_button_pane_cp01_ParamLimits

0xa248,	// (0x000661a2) toolbar_button_pane_cp01

0xb0ee,	// (0x00067048) temp_image_control_pane_ParamLimits

0xb0ee,	// (0x00067048) temp_image_control_pane

0x0ebb,	// (0x0005ce15) main_mp3_pane

0xc96c,	// (0x000688c6) temp_image_control_pane_g1_ParamLimits

0xc96c,	// (0x000688c6) temp_image_control_pane_g1

0xc97a,	// (0x000688d4) temp_image_control_pane_g2_ParamLimits

0xc97a,	// (0x000688d4) temp_image_control_pane_g2

0xc98c,	// (0x000688e6) temp_image_control_pane_g3_ParamLimits

0xc98c,	// (0x000688e6) temp_image_control_pane_g3

0x4a71,	// (0x000609cb) temp_image_control_pane_g4_ParamLimits

0x4a71,	// (0x000609cb) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0006b6a3) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0006b6a3) temp_image_control_pane_g

0xc96c,	// (0x000688c6) main_mp3_pane_g1

0x4a84,	// (0x000609de) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0006b6ac) main_mp3_pane_g

0xc9cf,	// (0x00068929) main_mp3_pane_t1

0xa460,	// (0x000663ba) main_camera_pane_g8_ParamLimits

0xa460,	// (0x000663ba) main_camera_pane_g8

0x1993,	// (0x0005d8ed) main_video_pane_g7_ParamLimits

0x1993,	// (0x0005d8ed) main_video_pane_g7

0xc35a,	// (0x000682b4) main_camera2_pane_t7_ParamLimits

0xc35a,	// (0x000682b4) main_camera2_pane_t7

0xa5a8,	// (0x00066502) scroll_pane_cp025_ParamLimits

0xa5a8,	// (0x00066502) scroll_pane_cp025

0xa5bc,	// (0x00066516) scroll_pane_cp026_ParamLimits

0xa5bc,	// (0x00066516) scroll_pane_cp026

0xa5cb,	// (0x00066525) wml_content_pane_ParamLimits

0x0c41,	// (0x0005cb9b) main_touch_calib_pane

0x4b50,	// (0x00060aaa) main_touch_calib_pane_g1

0x4b5c,	// (0x00060ab6) main_touch_calib_pane_g2

0x4b68,	// (0x00060ac2) main_touch_calib_pane_g3

0x4b74,	// (0x00060ace) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0006b6ca) main_touch_calib_pane_g

0x4b80,	// (0x00060ada) main_touch_calib_pane_t1

0x4b9a,	// (0x00060af4) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0006b6d3) main_touch_calib_pane_t

0xad05,	// (0x00066c5f) mup_progress_pane_cp02

0xad24,	// (0x00066c7e) navi_pane_g1

0xad86,	// (0x00066ce0) navi_pane_mp_t3

0x0ebb,	// (0x0005ce15) main_mp3_pane_ParamLimits

0x3f91,	// (0x0005feeb) navi_pane_ParamLimits

0xc96c,	// (0x000688c6) main_mp3_pane_g1_ParamLimits

0x4a84,	// (0x000609de) main_mp3_pane_g2_ParamLimits

0x4a92,	// (0x000609ec) main_mp3_pane_g3_ParamLimits

0x4a92,	// (0x000609ec) main_mp3_pane_g3

0x4aa0,	// (0x000609fa) main_mp3_pane_g4_ParamLimits

0x4aa0,	// (0x000609fa) main_mp3_pane_g4

0xc99c,	// (0x000688f6) main_mp3_pane_g5_ParamLimits

0xc99c,	// (0x000688f6) main_mp3_pane_g5

0xc9aa,	// (0x00068904) main_mp3_pane_g6_ParamLimits

0xc9aa,	// (0x00068904) main_mp3_pane_g6

0xc9b7,	// (0x00068911) main_mp3_pane_g7_ParamLimits

0xc9b7,	// (0x00068911) main_mp3_pane_g7

0xc9c3,	// (0x0006891d) main_mp3_pane_g8_ParamLimits

0xc9c3,	// (0x0006891d) main_mp3_pane_g8

0xf752,	// (0x0006b6ac) main_mp3_pane_g_ParamLimits

0x4aae,	// (0x00060a08) main_mp3_pane_t2

0x4abc,	// (0x00060a16) main_mp3_pane_t3

0xc9dd,	// (0x00068937) main_mp3_pane_t4

0xc9eb,	// (0x00068945) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0006b6bd) main_mp3_pane_t

0xc9f9,	// (0x00068953) mup_progress_pane_cp01

0x0c9f,	// (0x0005cbf9) aid_zoom_text_secondary2

0xc7b8,	// (0x00068712) list_cale_ev2_pane

0xc7c0,	// (0x0006871a) scroll_pane_cp023_ParamLimits

0x4bf0,	// (0x00060b4a) field_cale_ev2_pane_ParamLimits

0x4bf0,	// (0x00060b4a) field_cale_ev2_pane

0x4c16,	// (0x00060b70) field_cale_ev2_pane_g1_ParamLimits

0x4c16,	// (0x00060b70) field_cale_ev2_pane_g1

0x4c22,	// (0x00060b7c) field_cale_ev2_pane_g2_ParamLimits

0x4c22,	// (0x00060b7c) field_cale_ev2_pane_g2

0x4c3a,	// (0x00060b94) field_cale_ev2_pane_g3_ParamLimits

0x4c3a,	// (0x00060b94) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0006b6de) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0006b6de) field_cale_ev2_pane_g

0x4c5e,	// (0x00060bb8) field_cale_ev2_pane_t1_ParamLimits

0x4c5e,	// (0x00060bb8) field_cale_ev2_pane_t1

0x4c75,	// (0x00060bcf) field_cale_ev2_pane_t2_ParamLimits

0x4c75,	// (0x00060bcf) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0006b6e7) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0006b6e7) field_cale_ev2_pane_t

0x34b5,	// (0x0005f40f) main_postcard_pane_g5_ParamLimits

0x34b5,	// (0x0005f40f) main_postcard_pane_g5

0x34cb,	// (0x0005f425) main_postcard_pane_g6_ParamLimits

0x34cb,	// (0x0005f425) main_postcard_pane_g6

0x1743,	// (0x0005d69d) camera2_autofocus_pane_cp_ParamLimits

0x1743,	// (0x0005d69d) camera2_autofocus_pane_cp

0x0ebb,	// (0x0005ce15) main_mup3_pane

0x4caa,	// (0x00060c04) main_mup3_pane_g1_ParamLimits

0x4caa,	// (0x00060c04) main_mup3_pane_g1

0x4ccc,	// (0x00060c26) main_mup3_pane_g2_ParamLimits

0x4ccc,	// (0x00060c26) main_mup3_pane_g2

0x4d51,	// (0x00060cab) main_mup3_pane_g3_ParamLimits

0x4d51,	// (0x00060cab) main_mup3_pane_g3

0x4d97,	// (0x00060cf1) main_mup3_pane_g4_ParamLimits

0x4d97,	// (0x00060cf1) main_mup3_pane_g4

0x4ddd,	// (0x00060d37) main_mup3_pane_g5_ParamLimits

0x4ddd,	// (0x00060d37) main_mup3_pane_g5

0x4e25,	// (0x00060d7f) main_mup3_pane_g6_ParamLimits

0x4e25,	// (0x00060d7f) main_mup3_pane_g6

0xca01,	// (0x0006895b) main_mup3_pane_g7_ParamLimits

0xca01,	// (0x0006895b) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0006b6f7) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0006b6f7) main_mup3_pane_g

0x4ea5,	// (0x00060dff) main_mup3_pane_t1_ParamLimits

0x4ea5,	// (0x00060dff) main_mup3_pane_t1

0x4f19,	// (0x00060e73) main_mup3_pane_t2_ParamLimits

0x4f19,	// (0x00060e73) main_mup3_pane_t2

0x4fed,	// (0x00060f47) main_mup3_pane_t4_ParamLimits

0x4fed,	// (0x00060f47) main_mup3_pane_t4

0x504b,	// (0x00060fa5) main_mup3_pane_t5_ParamLimits

0x504b,	// (0x00060fa5) main_mup3_pane_t5

0x5107,	// (0x00061061) main_mup3_pane_t6_ParamLimits

0x5107,	// (0x00061061) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0006b708) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0006b708) main_mup3_pane_t

0x51bf,	// (0x00061119) mup3_progress_pane_ParamLimits

0x51bf,	// (0x00061119) mup3_progress_pane

0x524b,	// (0x000611a5) popup_mup3_control_window_ParamLimits

0x524b,	// (0x000611a5) popup_mup3_control_window

0xca0f,	// (0x00068969) popup_mup3_text_window

0x527d,	// (0x000611d7) mup3_progress_pane_t1

0x529c,	// (0x000611f6) mup3_progress_pane_t2

0xca17,	// (0x00068971) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0006b715) mup3_progress_pane_t

0xca34,	// (0x0006898e) mup_progress_pane_cp03

0x0c41,	// (0x0005cb9b) bg_tb_trans_pane_cp04

0x52bb,	// (0x00061215) mup3_volume_pane

0x52c3,	// (0x0006121d) popup_mup3_control_window_g1

0x52cc,	// (0x00061226) mup3_volume_pane_g1

0x52d5,	// (0x0006122f) mup3_volume_pane_g2

0x52de,	// (0x00061238) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0006b71c) mup3_volume_pane_g

0x0c41,	// (0x0005cb9b) bg_tb_trans_pane_cp03

0xca44,	// (0x0006899e) popup_mup3_text_window_g1

0xca4c,	// (0x000689a6) popup_mup3_text_window_t1

0xa209,	// (0x00066163) list_calc_item_pane_g1_ParamLimits

0xc442,	// (0x0006839c) mup_volume_pane_cp_g1

0x4bb4,	// (0x00060b0e) main_touch_calib_pane_t3

0x4bc8,	// (0x00060b22) main_touch_calib_pane_t4

0x4bdc,	// (0x00060b36) main_touch_calib_pane_t5

0x0c4b,	// (0x0005cba5) aid_cell_size_toolbar2

0x0c53,	// (0x0005cbad) aid_popup3_width_pane

0x0c8f,	// (0x0005cbe9) aid_zoom_text_msg_primary

0xa42d,	// (0x00066387) vorec_t7

0xa1cd,	// (0x00066127) bg_calc_paper_pane_g1_ParamLimits

0xa1d9,	// (0x00066133) bg_calc_paper_pane_g2_ParamLimits

0xa1e5,	// (0x0006613f) bg_calc_paper_pane_g3_ParamLimits

0xa1f1,	// (0x0006614b) bg_calc_paper_pane_g4_ParamLimits

0xa1fd,	// (0x00066157) bg_calc_paper_pane_g5_ParamLimits

0x124a,	// (0x0005d1a4) bg_calc_paper_pane_g6_ParamLimits

0x125b,	// (0x0005d1b5) bg_calc_paper_pane_g7_ParamLimits

0x126c,	// (0x0005d1c6) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0006b0cf) bg_calc_paper_pane_g_ParamLimits

0x127f,	// (0x0005d1d9) calc_bg_paper_pane_g9_ParamLimits

0x189d,	// (0x0005d7f7) image_qvga_pane_ParamLimits

0x189d,	// (0x0005d7f7) image_qvga_pane

0xa06c,	// (0x00065fc6) bg_popup_sub_pane_cp04_ParamLimits

0xb025,	// (0x00066f7f) popup_mup_playback_window_g1_ParamLimits

0xb031,	// (0x00066f8b) popup_mup_playback_window_t1_ParamLimits

0xb046,	// (0x00066fa0) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0006b45b) popup_mup_playback_window_t_ParamLimits

0x4711,	// (0x0006066b) main_mup2_pane_g3_ParamLimits

0x4711,	// (0x0006066b) main_mup2_pane_g3

0x1c9a,	// (0x0005dbf4) popup_toolbar_window_cp04

0xb43b,	// (0x00067395) popup_call2_audio_second_window_g3_ParamLimits

0xb43b,	// (0x00067395) popup_call2_audio_second_window_g3

0xb845,	// (0x0006779f) popup_call2_audio_first_window_g4_ParamLimits

0xb845,	// (0x0006779f) popup_call2_audio_first_window_g4

0xbec4,	// (0x00067e1e) popup_call2_audio_in_window_g4_ParamLimits

0xbec4,	// (0x00067e1e) popup_call2_audio_in_window_g4

0x35e7,	// (0x0005f541) aid_area_sk_bg_cut_ParamLimits

0x35e7,	// (0x0005f541) aid_area_sk_bg_cut

0xb05b,	// (0x00066fb5) aid_area_sk_bg_cut_2_ParamLimits

0xb05b,	// (0x00066fb5) aid_area_sk_bg_cut_2

0x4a17,	// (0x00060971) aid_placing_details_win

0x4a1f,	// (0x00060979) aid_placing_details_win_2

0xc8ae,	// (0x00068808) camera2_autofocus_pane_g1_ParamLimits

0x0e5c,	// (0x0005cdb6) popup_fixed_preview_cale_window_ParamLimits

0x0e5c,	// (0x0005cdb6) popup_fixed_preview_cale_window

0xadde,	// (0x00066d38) navi_slider_pane_g3

0xade7,	// (0x00066d41) navi_slider_pane_g4

0xadf0,	// (0x00066d4a) navi_slider_pane_g5

0xadde,	// (0x00066d38) navi_slider_pane_g6

0xadf9,	// (0x00066d53) navi_slider_pane_g7

0xaf1a,	// (0x00066e74) mup_scale_pane_g3

0xaf23,	// (0x00066e7d) mup_scale_pane_g4

0xaf2c,	// (0x00066e86) mup_scale_pane_g5

0x3296,	// (0x0005f1f0) mup_scale_pane_g6

0x329f,	// (0x0005f1f9) mup_scale_pane_g7

0xadde,	// (0x00066d38) cams2_slider_pane_g3

0xc4f7,	// (0x00068451) cams2_slider_pane_g4

0xc4ff,	// (0x00068459) cams2_slider_pane_g5

0xadde,	// (0x00066d38) cams2_slider_pane_g6

0xc507,	// (0x00068461) cams2_slider_pane_g7

0xc735,	// (0x0006868f) camera2_autofocus_pane_cp_g1

0xca5a,	// (0x000689b4) bg_popup_preview_window_pane_cp02_ParamLimits

0xca5a,	// (0x000689b4) bg_popup_preview_window_pane_cp02

0xca66,	// (0x000689c0) list_fp_cale_pane_ParamLimits

0xca66,	// (0x000689c0) list_fp_cale_pane

0xca72,	// (0x000689cc) popup_fixed_preview_cale_window_t1_ParamLimits

0xca72,	// (0x000689cc) popup_fixed_preview_cale_window_t1

0x52e7,	// (0x00061241) popup_fixed_preview_cale_window_t2_ParamLimits

0x52e7,	// (0x00061241) popup_fixed_preview_cale_window_t2

0x52fc,	// (0x00061256) popup_fixed_preview_cale_window_t3_ParamLimits

0x52fc,	// (0x00061256) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0006b723) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0006b723) popup_fixed_preview_cale_window_t

0x5311,	// (0x0006126b) list_single_fp_cale_pane_ParamLimits

0x5311,	// (0x0006126b) list_single_fp_cale_pane

0xca90,	// (0x000689ea) list_single_fp_cale_pane_g1_ParamLimits

0xca90,	// (0x000689ea) list_single_fp_cale_pane_g1

0xca9c,	// (0x000689f6) list_single_fp_cale_pane_g2_ParamLimits

0xca9c,	// (0x000689f6) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0006b72a) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0006b72a) list_single_fp_cale_pane_g

0xcab5,	// (0x00068a0f) list_single_fp_cale_pane_t1_ParamLimits

0xcab5,	// (0x00068a0f) list_single_fp_cale_pane_t1

0xcac7,	// (0x00068a21) list_single_fp_cale_pane_t2_ParamLimits

0xcac7,	// (0x00068a21) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0006b731) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0006b731) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0c41,	// (0x0005cb9b) main_dialer_pane

0x5329,	// (0x00061283) aid_cell_size_keypad

0x5333,	// (0x0006128d) dialer_ne_pane

0x533b,	// (0x00061295) grid_dialer_command_1_pane

0x5343,	// (0x0006129d) grid_dialer_command_2_pane

0x534b,	// (0x000612a5) grid_dialer_keypad_pane

0x535d,	// (0x000612b7) bg_popup_call_pane_cp06_ParamLimits

0x535d,	// (0x000612b7) bg_popup_call_pane_cp06

0x5369,	// (0x000612c3) dialer_ne_clear_pane_ParamLimits

0x5369,	// (0x000612c3) dialer_ne_clear_pane

0xcafa,	// (0x00068a54) dialer_ne_pane_g1

0xcb02,	// (0x00068a5c) dialer_ne_pane_t1_ParamLimits

0xcb02,	// (0x00068a5c) dialer_ne_pane_t1

0x5375,	// (0x000612cf) dialer_ne_pane_t2_ParamLimits

0x5375,	// (0x000612cf) dialer_ne_pane_t2

0x539f,	// (0x000612f9) dialer_ne_pane_t3_ParamLimits

0x539f,	// (0x000612f9) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0006b736) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0006b736) dialer_ne_pane_t

0x53cf,	// (0x00061329) dialer_ne_pane_t3_copy1_ParamLimits

0x53cf,	// (0x00061329) dialer_ne_pane_t3_copy1

0x53fe,	// (0x00061358) cell_dialer_keypad_pane_ParamLimits

0x53fe,	// (0x00061358) cell_dialer_keypad_pane

0x5415,	// (0x0006136f) cell_dialer_command_1_pane_ParamLimits

0x5415,	// (0x0006136f) cell_dialer_command_1_pane

0x542b,	// (0x00061385) cell_dialer_command_2_pane_ParamLimits

0x542b,	// (0x00061385) cell_dialer_command_2_pane

0xcb14,	// (0x00068a6e) bg_button_pane_cp02_ParamLimits

0xcb14,	// (0x00068a6e) bg_button_pane_cp02

0x543a,	// (0x00061394) cell_dialer_keypad_pane_g1_ParamLimits

0x543a,	// (0x00061394) cell_dialer_keypad_pane_g1

0xcb14,	// (0x00068a6e) bg_button_pane_cp03_ParamLimits

0xcb14,	// (0x00068a6e) bg_button_pane_cp03

0x544f,	// (0x000613a9) cell_dialer_command_1_pane_g1_ParamLimits

0x544f,	// (0x000613a9) cell_dialer_command_1_pane_g1

0xcb20,	// (0x00068a7a) bg_button_pane_cp04

0x5463,	// (0x000613bd) cell_dialer_command_2_pane_g1

0xadc4,	// (0x00066d1e) bg_button_pane_cp06

0xcb28,	// (0x00068a82) dialer_ne_clear_pane_g1

0x2dc4,	// (0x0005ed1e) navi_pane_g2

0x2df2,	// (0x0005ed4c) navi_pane_g3

0x0002,

0xf404,	// (0x0006b35e) navi_pane_g

0x2e1b,	// (0x0005ed75) navi_pane_mv_g2

0x2e42,	// (0x0005ed9c) navi_pane_mv_g5

0x2e4a,	// (0x0005eda4) navi_pane_mv_t1

0xa1af,	// (0x00066109) main_clock2_pane

0x549d,	// (0x000613f7) main_clock2_list_pane_ParamLimits

0x549d,	// (0x000613f7) main_clock2_list_pane

0x54d7,	// (0x00061431) main_clock2_pane_t1_ParamLimits

0x54d7,	// (0x00061431) main_clock2_pane_t1

0x5515,	// (0x0006146f) main_clock2_pane_t2_ParamLimits

0x5515,	// (0x0006146f) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0006b73d) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0006b73d) main_clock2_pane_t

0x55b2,	// (0x0006150c) popup_clock_analogue_window_cp03_ParamLimits

0x55b2,	// (0x0006150c) popup_clock_analogue_window_cp03

0x55d9,	// (0x00061533) popup_clock_digital_window_cp02_ParamLimits

0x55d9,	// (0x00061533) popup_clock_digital_window_cp02

0x564e,	// (0x000615a8) main_clock2_list_single_pane_ParamLimits

0x564e,	// (0x000615a8) main_clock2_list_single_pane

0xadc4,	// (0x00066d1e) list_highlight_pane_cp05

0xcb30,	// (0x00068a8a) main_clock2_list_single_pane_t1

0x1c9a,	// (0x0005dbf4) popup_toolbar_window_cp04_ParamLimits

0x4a41,	// (0x0006099b) camera2_autofocus_pane_g2_ParamLimits

0x4a41,	// (0x0006099b) camera2_autofocus_pane_g2

0x4a4d,	// (0x000609a7) camera2_autofocus_pane_g3_ParamLimits

0x4a4d,	// (0x000609a7) camera2_autofocus_pane_g3

0x4a59,	// (0x000609b3) camera2_autofocus_pane_g4_ParamLimits

0x4a59,	// (0x000609b3) camera2_autofocus_pane_g4

0x4a65,	// (0x000609bf) camera2_autofocus_pane_g5_ParamLimits

0x4a65,	// (0x000609bf) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0006b686) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0006b686) camera2_autofocus_pane_g

0x4c8a,	// (0x00060be4) camera2_autofocus_pane_cp_g2

0x4c92,	// (0x00060bec) camera2_autofocus_pane_cp_g3

0x4c9a,	// (0x00060bf4) camera2_autofocus_pane_cp_g4

0x4ca2,	// (0x00060bfc) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0006b6ec) camera2_autofocus_pane_cp_g

0x5355,	// (0x000612af) popup_dialer_spcha_window

0x0c41,	// (0x0005cb9b) bg_popup_sub_pane_cp07

0xcb3e,	// (0x00068a98) list_spcha_pane

0xcb46,	// (0x00068aa0) list_single_spcha_pane_ParamLimits

0xcb46,	// (0x00068aa0) list_single_spcha_pane

0x0c41,	// (0x0005cb9b) list_highlight_pane_cp06

0xcb57,	// (0x00068ab1) list_single_spcha_pane_t1

0xbc6e,	// (0x00067bc8) popup_call2_audio_out_window_g4_ParamLimits

0xbc6e,	// (0x00067bc8) popup_call2_audio_out_window_g4

0x0c41,	// (0x0005cb9b) main_imed2_pane

0xc255,	// (0x000681af) popup_imed_adjust2_window

0x3e1c,	// (0x0005fd76) popup_imed_trans_window_ParamLimits

0x3e1c,	// (0x0005fd76) popup_imed_trans_window

0xc571,	// (0x000684cb) popup_blid_sat_info2_window_t1

0xc57f,	// (0x000684d9) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0006b61b) popup_blid_sat_info2_window_t

0x56f6,	// (0x00061650) aid_size_cell_colour_35

0x5716,	// (0x00061670) aid_size_cell_colour_112

0x5736,	// (0x00061690) aid_size_cell_effect

0xc22d,	// (0x00068187) bg_tb_trans_pane_cp02

0xa887,	// (0x000667e1) heading_imed_pane

0x5756,	// (0x000616b0) listscroll_imed_pane

0xcb65,	// (0x00068abf) heading_imed_pane_g1

0xcb6d,	// (0x00068ac7) heading_imed_pane_t1

0xcb7b,	// (0x00068ad5) grid_imed_colour_35_pane_ParamLimits

0xcb7b,	// (0x00068ad5) grid_imed_colour_35_pane

0x5762,	// (0x000616bc) grid_imed_effect_pane

0xcb96,	// (0x00068af0) list_imed_aspect_pane

0x5777,	// (0x000616d1) scroll_pane_cp027_ParamLimits

0x5777,	// (0x000616d1) scroll_pane_cp027

0x5788,	// (0x000616e2) cell_imed_effect_pane_ParamLimits

0x5788,	// (0x000616e2) cell_imed_effect_pane

0xcb9e,	// (0x00068af8) cell_imed_colour_pane_ParamLimits

0xcb9e,	// (0x00068af8) cell_imed_colour_pane

0xcbe0,	// (0x00068b3a) cell_imed_colour_pane_g1_ParamLimits

0xcbe0,	// (0x00068b3a) cell_imed_colour_pane_g1

0xcbf1,	// (0x00068b4b) hgihlgiht_grid_pane_cp016_ParamLimits

0xcbf1,	// (0x00068b4b) hgihlgiht_grid_pane_cp016

0x57af,	// (0x00061709) cell_imed_effect_pane_g1

0x57b7,	// (0x00061711) grid_highlight_pane_cp017

0xcc02,	// (0x00068b5c) list_imed_single_pane_ParamLimits

0xcc02,	// (0x00068b5c) list_imed_single_pane

0x0c41,	// (0x0005cb9b) list_highlight_pane_cp07

0xcc19,	// (0x00068b73) list_imed_aspect_pane_comp1_t1

0xc22d,	// (0x00068187) bg_tb_trans_pane_cp05

0xcc3b,	// (0x00068b95) popup_imed_adjust2_window_g1

0xcc62,	// (0x00068bbc) popup_imed_adjust2_window_t1

0xcc7a,	// (0x00068bd4) slider_imed_adjust_pane

0xcc8e,	// (0x00068be8) slider_imed_adjust_pane_g1

0xcc9e,	// (0x00068bf8) slider_imed_adjust_pane_g2

0xccae,	// (0x00068c08) slider_imed_adjust_pane_g3

0xccbf,	// (0x00068c19) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0006b75a) slider_imed_adjust_pane_g

0x57c0,	// (0x0006171a) aid_size_cell_clipart2

0x57cc,	// (0x00061726) grid_imed_clipart_pane

0xccd0,	// (0x00068c2a) scroll_pane_cp031

0x57d6,	// (0x00061730) cell_imed_clipart_pane_ParamLimits

0x57d6,	// (0x00061730) cell_imed_clipart_pane

0x57fd,	// (0x00061757) cell_imed_clipart_pane_g1

0x0c41,	// (0x0005cb9b) grid_highlight_pane_cp014

0x54b2,	// (0x0006140c) main_clock2_pane_g1_ParamLimits

0x54b2,	// (0x0006140c) main_clock2_pane_g1

0x55f9,	// (0x00061553) aid_call2_pane_cp10

0x560b,	// (0x00061565) aid_call_pane_cp10

0xacf9,	// (0x00066c53) popup_clock_analogue_window_cp10_g1

0xacf9,	// (0x00066c53) popup_clock_analogue_window_cp10_g2

0x561d,	// (0x00061577) popup_clock_analogue_window_cp10_g3

0x561d,	// (0x00061577) popup_clock_analogue_window_cp10_g4

0xacf9,	// (0x00066c53) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0006b748) popup_clock_analogue_window_cp10_g

0x562f,	// (0x00061589) popup_clock_analogue_window_cp10_t1

0x5660,	// (0x000615ba) clock_digital_number_pane_cp10_ParamLimits

0x5660,	// (0x000615ba) clock_digital_number_pane_cp10

0x5678,	// (0x000615d2) clock_digital_number_pane_cp11_ParamLimits

0x5678,	// (0x000615d2) clock_digital_number_pane_cp11

0x5690,	// (0x000615ea) clock_digital_number_pane_cp12_ParamLimits

0x5690,	// (0x000615ea) clock_digital_number_pane_cp12

0x56a8,	// (0x00061602) clock_digital_number_pane_cp13_ParamLimits

0x56a8,	// (0x00061602) clock_digital_number_pane_cp13

0x56c0,	// (0x0006161a) clock_digital_separator_pane_cp10_ParamLimits

0x56c0,	// (0x0006161a) clock_digital_separator_pane_cp10

0x56d8,	// (0x00061632) popup_clock_digital_window_cp02_t1_ParamLimits

0x56d8,	// (0x00061632) popup_clock_digital_window_cp02_t1

0xa064,	// (0x00065fbe) clock_digital_number_pane_cp10_g1

0xa064,	// (0x00065fbe) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0006b763) clock_digital_number_pane_cp10_g

0xa064,	// (0x00065fbe) clock_digital_separator_pane_cp10_g1

0xa064,	// (0x00065fbe) clock_digital_separator_pane_g2_cp10

0xad94,	// (0x00066cee) navi_pane_vded_g4

0xad9d,	// (0x00066cf7) navi_pane_vded_g5

0xada6,	// (0x00066d00) navi_pane_vded_t1

0x0c41,	// (0x0005cb9b) main_vded_pane

0x5806,	// (0x00061760) main_vded_pane_g1

0x5812,	// (0x0006176c) main_vded_pane_g2

0x581c,	// (0x00061776) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0006b768) main_vded_pane_g

0x5826,	// (0x00061780) main_vded_pane_t1

0x5834,	// (0x0006178e) main_vded_pane_t2

0x0001,

0xf815,	// (0x0006b76f) main_vded_pane_t

0x5842,	// (0x0006179c) vded_slider_pane

0x584c,	// (0x000617a6) vded_video_pane

0xccd8,	// (0x00068c32) vded_video_pane_g1

0x5856,	// (0x000617b0) vded_video_pane_g2

0xc735,	// (0x0006868f) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0006b774) vded_video_pane_g

0xcce2,	// (0x00068c3c) vded_slider_pane_g1

0xc442,	// (0x0006839c) vded_slider_pane_g2

0xcceb,	// (0x00068c45) vded_slider_pane_g3

0xccf4,	// (0x00068c4e) vded_slider_pane_g4

0xccfd,	// (0x00068c57) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0006b77b) vded_slider_pane_g

0x5233,	// (0x0006118d) mup3_rocker_pane_ParamLimits

0x5233,	// (0x0006118d) mup3_rocker_pane

0x585f,	// (0x000617b9) mup3_control_keys_pane_g1

0x5867,	// (0x000617c1) mup3_control_keys_pane_g2

0x586f,	// (0x000617c9) mup3_control_keys_pane_g3

0x5877,	// (0x000617d1) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0006b786) mup3_control_keys_pane_g

0x0e9d,	// (0x0005cdf7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0e9d,	// (0x0005cdf7) popup_toolbar2_fixed_window_cp01

0x5267,	// (0x000611c1) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5267,	// (0x000611c1) popup_toolbar2_fixed_window_cp02

0xb5ad,	// (0x00067507) popup_call2_audio_second_window_t4_ParamLimits

0xb5ad,	// (0x00067507) popup_call2_audio_second_window_t4

0xbadb,	// (0x00067a35) popup_call2_audio_first_window_t6_ParamLimits

0xbadb,	// (0x00067a35) popup_call2_audio_first_window_t6

0xbd71,	// (0x00067ccb) popup_call2_audio_out_window_t6_ParamLimits

0xbd71,	// (0x00067ccb) popup_call2_audio_out_window_t6

0x0c41,	// (0x0005cb9b) main_vitu_pane

0x5887,	// (0x000617e1) aid_size_cell_itu_ParamLimits

0x5887,	// (0x000617e1) aid_size_cell_itu

0x0ebb,	// (0x0005ce15) bg_popup_window_pane_cp08_ParamLimits

0x0ebb,	// (0x0005ce15) bg_popup_window_pane_cp08

0x589d,	// (0x000617f7) field_vitu_entry_pane_ParamLimits

0x589d,	// (0x000617f7) field_vitu_entry_pane

0x58b4,	// (0x0006180e) grid_vitu_function_pane_ParamLimits

0x58b4,	// (0x0006180e) grid_vitu_function_pane

0x58cf,	// (0x00061829) grid_vitu_itu_pane_ParamLimits

0x58cf,	// (0x00061829) grid_vitu_itu_pane

0x58ed,	// (0x00061847) cell_vitu_itu_pane_ParamLimits

0x58ed,	// (0x00061847) cell_vitu_itu_pane

0x5911,	// (0x0006186b) cell_vitu_function_pane_ParamLimits

0x5911,	// (0x0006186b) cell_vitu_function_pane

0x0ebb,	// (0x0005ce15) bg_popup_sub_pane_cp08_ParamLimits

0x0ebb,	// (0x0005ce15) bg_popup_sub_pane_cp08

0x592c,	// (0x00061886) field_vitu_entry_pane_t1_ParamLimits

0x592c,	// (0x00061886) field_vitu_entry_pane_t1

0xcd1e,	// (0x00068c78) field_vitu_entry_pane_t2_ParamLimits

0xcd1e,	// (0x00068c78) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0006b794) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0006b794) field_vitu_entry_pane_t

0xcd3b,	// (0x00068c95) bg_button_pane_cp05_ParamLimits

0xcd3b,	// (0x00068c95) bg_button_pane_cp05

0x594c,	// (0x000618a6) cell_vitu_itu_pane_g1

0x5964,	// (0x000618be) cell_vitu_itu_pane_t1_ParamLimits

0x5964,	// (0x000618be) cell_vitu_itu_pane_t1

0x5976,	// (0x000618d0) cell_vitu_itu_pane_t2_ParamLimits

0x5976,	// (0x000618d0) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0006b799) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0006b799) cell_vitu_itu_pane_t

0xcd49,	// (0x00068ca3) bg_button_pane_cp07

0x59ab,	// (0x00061905) cell_vitu_function_pane_g1

0xa137,	// (0x00066091) main_calc_pane_g1

0x0c83,	// (0x0005cbdd) aid_visual_content_pane

0x0c41,	// (0x0005cb9b) main_vradio_pane

0x59b4,	// (0x0006190e) main_vradio_pane_g1_ParamLimits

0x59b4,	// (0x0006190e) main_vradio_pane_g1

0xcd53,	// (0x00068cad) main_vradio_pane_g2_ParamLimits

0xcd53,	// (0x00068cad) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0006b7a0) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0006b7a0) main_vradio_pane_g

0x59cd,	// (0x00061927) main_vradio_pane_t1_ParamLimits

0x59cd,	// (0x00061927) main_vradio_pane_t1

0x59e2,	// (0x0006193c) main_vradio_pane_t2_ParamLimits

0x59e2,	// (0x0006193c) main_vradio_pane_t2

0xcd60,	// (0x00068cba) main_vradio_pane_t3_ParamLimits

0xcd60,	// (0x00068cba) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0006b7a5) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0006b7a5) main_vradio_pane_t

0x59f7,	// (0x00061951) vradio_rocker_control_pane_ParamLimits

0x59f7,	// (0x00061951) vradio_rocker_control_pane

0x5a09,	// (0x00061963) vradio_station_info_pane_ParamLimits

0x5a09,	// (0x00061963) vradio_station_info_pane

0xcd74,	// (0x00068cce) vradio_frequency_info_pane_ParamLimits

0xcd74,	// (0x00068cce) vradio_frequency_info_pane

0xc735,	// (0x0006868f) vradio_station_info_pane_g1

0xcd83,	// (0x00068cdd) vradio_station_info_pane_t1_ParamLimits

0xcd83,	// (0x00068cdd) vradio_station_info_pane_t1

0xcda5,	// (0x00068cff) vradio_station_info_pane_t2_ParamLimits

0xcda5,	// (0x00068cff) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0006b7ac) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0006b7ac) vradio_station_info_pane_t

0xcdb7,	// (0x00068d11) vradio_tuning_pane

0xcdbf,	// (0x00068d19) vradio_rocker_control_pane_g1

0xcdc7,	// (0x00068d21) vradio_rocker_control_pane_g2

0xcdcf,	// (0x00068d29) vradio_rocker_control_pane_g3

0xcdd7,	// (0x00068d31) vradio_rocker_control_pane_g4

0xcddf,	// (0x00068d39) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0006b7b1) vradio_rocker_control_pane_g

0x5a1b,	// (0x00061975) vradio_frequency_info_pane_g1

0xcde7,	// (0x00068d41) vradio_frequency_info_pane_t1_ParamLimits

0xcde7,	// (0x00068d41) vradio_frequency_info_pane_t1

0x5a25,	// (0x0006197f) vradio_tuning_pane_g1

0x5a30,	// (0x0006198a) vradio_tuning_pane_t1

0x0ce0,	// (0x0005cc3a) area_side_right_pane_ParamLimits

0x0ce0,	// (0x0005cc3a) area_side_right_pane

0xc1f4,	// (0x0006814e) status_small_pane_g1

0xc1fc,	// (0x00068156) status_small_pane_g2

0xc205,	// (0x0006815f) status_small_pane_g3

0xc20e,	// (0x00068168) status_small_pane_g4

0x0003,

0xf617,	// (0x0006b571) status_small_pane_g

0xc217,	// (0x00068171) status_small_pane_t1

0x0c41,	// (0x0005cb9b) main_video3_pane

0xcdfb,	// (0x00068d55) cams_zoom_vslider_pane

0xce03,	// (0x00068d5d) image3_wide_pane_ParamLimits

0xce03,	// (0x00068d5d) image3_wide_pane

0xce1d,	// (0x00068d77) image3_wide_small_pane

0xce29,	// (0x00068d83) main_video3_pane_g1_ParamLimits

0xce29,	// (0x00068d83) main_video3_pane_g1

0xce45,	// (0x00068d9f) main_video3_pane_g2_ParamLimits

0xce45,	// (0x00068d9f) main_video3_pane_g2

0x0001,

0xf862,	// (0x0006b7bc) main_video3_pane_g_ParamLimits

0xf862,	// (0x0006b7bc) main_video3_pane_g

0xce61,	// (0x00068dbb) main_video3_pane_t1_ParamLimits

0xce61,	// (0x00068dbb) main_video3_pane_t1

0xce8c,	// (0x00068de6) main_video3_pane_t2_ParamLimits

0xce8c,	// (0x00068de6) main_video3_pane_t2

0xceb7,	// (0x00068e11) main_video3_pane_t3_ParamLimits

0xceb7,	// (0x00068e11) main_video3_pane_t3

0x0002,

0xf867,	// (0x0006b7c1) main_video3_pane_t_ParamLimits

0xf867,	// (0x0006b7c1) main_video3_pane_t

0xcee4,	// (0x00068e3e) cams_zoom_vslider_pane_g1

0xceed,	// (0x00068e47) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0006b7c8) cams_zoom_vslider_pane_g

0xcef5,	// (0x00068e4f) small_slider_vertical_pane

0xc735,	// (0x0006868f) small_slider_vertical_pane_g1

0xc735,	// (0x0006868f) small_slider_vertical_pane_g2

0xcefd,	// (0x00068e57) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0006b7cd) small_slider_vertical_pane_g

0x0c41,	// (0x0005cb9b) main_hwr_training_pane

0xcf06,	// (0x00068e60) hwr_training_instruct_pane_ParamLimits

0xcf06,	// (0x00068e60) hwr_training_instruct_pane

0x5a3f,	// (0x00061999) hwr_training_navi_pane_ParamLimits

0x5a3f,	// (0x00061999) hwr_training_navi_pane

0x5a5e,	// (0x000619b8) hwr_training_write_pane_ParamLimits

0x5a5e,	// (0x000619b8) hwr_training_write_pane

0x0c41,	// (0x0005cb9b) bg_frame_shadow_pane

0xcf3d,	// (0x00068e97) hwr_training_write_pane_g1

0xcf45,	// (0x00068e9f) hwr_training_write_pane_g2

0xcf4d,	// (0x00068ea7) hwr_training_write_pane_g3

0xcf55,	// (0x00068eaf) hwr_training_write_pane_g4

0xcf5d,	// (0x00068eb7) hwr_training_write_pane_g5

0xcf65,	// (0x00068ebf) hwr_training_write_pane_g6

0xcf6d,	// (0x00068ec7) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0006b7d4) hwr_training_write_pane_g

0xda2e,	// (0x00069988) hwr_training_navi_pane_g1_ParamLimits

0xda2e,	// (0x00069988) hwr_training_navi_pane_g1

0xda40,	// (0x0006999a) hwr_training_navi_pane_g2_ParamLimits

0xda40,	// (0x0006999a) hwr_training_navi_pane_g2

0xda52,	// (0x000699ac) hwr_training_navi_pane_g3_ParamLimits

0xda52,	// (0x000699ac) hwr_training_navi_pane_g3

0xda62,	// (0x000699bc) hwr_training_navi_pane_g4_ParamLimits

0xda62,	// (0x000699bc) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0006b7e3) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0006b7e3) hwr_training_navi_pane_g

0xda6f,	// (0x000699c9) hwr_training_navi_pane_t1

0x5aa8,	// (0x00061a02) list_single_hwr_training_instruct_pane_ParamLimits

0x5aa8,	// (0x00061a02) list_single_hwr_training_instruct_pane

0xcf75,	// (0x00068ecf) list_single_hwr_training_instruct_pane_t1

0xc675,	// (0x000685cf) bg_frame_shadow_pane_g1

0xcf84,	// (0x00068ede) bg_frame_shadow_pane_g2

0xcf8c,	// (0x00068ee6) bg_frame_shadow_pane_g3

0xcf94,	// (0x00068eee) bg_frame_shadow_pane_g4

0xcf9c,	// (0x00068ef6) bg_frame_shadow_pane_g5

0xcfa4,	// (0x00068efe) bg_frame_shadow_pane_g6

0xcfac,	// (0x00068f06) bg_frame_shadow_pane_g7

0xa2a8,	// (0x00066202) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0006b7ee) bg_frame_shadow_pane_g

0x0c41,	// (0x0005cb9b) main_video_tele_dialer_pane

0x5ac5,	// (0x00061a1f) aid_size_cell_video_keypad_ParamLimits

0x5ac5,	// (0x00061a1f) aid_size_cell_video_keypad

0x5adf,	// (0x00061a39) grid_video_dialer_keypad_pane_ParamLimits

0x5adf,	// (0x00061a39) grid_video_dialer_keypad_pane

0x5b2b,	// (0x00061a85) video_down_pane_cp_ParamLimits

0x5b2b,	// (0x00061a85) video_down_pane_cp

0x5b5b,	// (0x00061ab5) cell_video_dialer_keypad_pane_ParamLimits

0x5b5b,	// (0x00061ab5) cell_video_dialer_keypad_pane

0xcfb4,	// (0x00068f0e) bg_button_pane_cp08_ParamLimits

0xcfb4,	// (0x00068f0e) bg_button_pane_cp08

0x5b7d,	// (0x00061ad7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5b7d,	// (0x00061ad7) cell_video_dialer_keypad_pane_g1

0x521d,	// (0x00061177) mup3_rocker2_pane_ParamLimits

0x521d,	// (0x00061177) mup3_rocker2_pane

0xc735,	// (0x0006868f) mup3_rocker2_pane_g1

0x3d05,	// (0x0005fc5f) main_dialer2_pane

0x0c41,	// (0x0005cb9b) main_mp4_pane

0xda85,	// (0x000699df) main_mp4_pane_g1_ParamLimits

0xda85,	// (0x000699df) main_mp4_pane_g1

0xda85,	// (0x000699df) main_mp4_pane_g2_ParamLimits

0xda85,	// (0x000699df) main_mp4_pane_g2

0x5bb8,	// (0x00061b12) main_mp4_pane_g3_ParamLimits

0x5bb8,	// (0x00061b12) main_mp4_pane_g3

0xda93,	// (0x000699ed) main_mp4_pane_g4_ParamLimits

0xda93,	// (0x000699ed) main_mp4_pane_g4

0xdabb,	// (0x00069a15) main_mp4_pane_g5_ParamLimits

0xdabb,	// (0x00069a15) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0006b80e) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0006b80e) main_mp4_pane_g

0xdb0b,	// (0x00069a65) main_mp4_pane_t1_ParamLimits

0xdb0b,	// (0x00069a65) main_mp4_pane_t1

0xdb67,	// (0x00069ac1) main_mp4_pane_t2_ParamLimits

0xdb67,	// (0x00069ac1) main_mp4_pane_t2

0xcfc0,	// (0x00068f1a) main_mp4_pane_t3_ParamLimits

0xcfc0,	// (0x00068f1a) main_mp4_pane_t3

0xdbb9,	// (0x00069b13) main_mp4_pane_t4_ParamLimits

0xdbb9,	// (0x00069b13) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0006b81b) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0006b81b) main_mp4_pane_t

0xdbfd,	// (0x00069b57) mp4_progress_pane_ParamLimits

0xdbfd,	// (0x00069b57) mp4_progress_pane

0xdc47,	// (0x00069ba1) mp4_rocker_pane_ParamLimits

0xdc47,	// (0x00069ba1) mp4_rocker_pane

0xcfe8,	// (0x00068f42) mp4_progress_pane_t1

0xd001,	// (0x00068f5b) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0006b824) mp4_progress_pane_t

0xd01a,	// (0x00068f74) mup_progress_pane_cp04

0xd026,	// (0x00068f80) mp4_rocker_pane_g1

0x5bf4,	// (0x00061b4e) aid_cell_size_keypad2_ParamLimits

0x5bf4,	// (0x00061b4e) aid_cell_size_keypad2

0x5c0a,	// (0x00061b64) dialer2_ne_pane_ParamLimits

0x5c0a,	// (0x00061b64) dialer2_ne_pane

0x5c24,	// (0x00061b7e) grid_dialer2_keypad_pane_ParamLimits

0x5c24,	// (0x00061b7e) grid_dialer2_keypad_pane

0xc518,	// (0x00068472) bg_popup_call_pane_cp07_ParamLimits

0xc518,	// (0x00068472) bg_popup_call_pane_cp07

0x5c42,	// (0x00061b9c) dialer2_ne_pane_t1_ParamLimits

0x5c42,	// (0x00061b9c) dialer2_ne_pane_t1

0x5c81,	// (0x00061bdb) cell_dialer2_keypad_pane_ParamLimits

0x5c81,	// (0x00061bdb) cell_dialer2_keypad_pane

0xd042,	// (0x00068f9c) bg_button_pane_pane_cp04_ParamLimits

0xd042,	// (0x00068f9c) bg_button_pane_pane_cp04

0x5ca5,	// (0x00061bff) cell_dialer2_keypad_pane_g1_ParamLimits

0x5ca5,	// (0x00061bff) cell_dialer2_keypad_pane_g1

0x1b6e,	// (0x0005dac8) aid_placing_vt_set_content_ParamLimits

0x1b6e,	// (0x0005dac8) aid_placing_vt_set_content

0x1b96,	// (0x0005daf0) aid_placing_vt_set_title_ParamLimits

0x1b96,	// (0x0005daf0) aid_placing_vt_set_title

0x0c41,	// (0x0005cb9b) main_image3_pane

0x5d6b,	// (0x00061cc5) area_side_right_pane_cp01_ParamLimits

0x5d6b,	// (0x00061cc5) area_side_right_pane_cp01

0xda85,	// (0x000699df) main_image3_pane_g1_ParamLimits

0xda85,	// (0x000699df) main_image3_pane_g1

0x5d82,	// (0x00061cdc) main_image3_pane_g2_ParamLimits

0x5d82,	// (0x00061cdc) main_image3_pane_g2

0x5daa,	// (0x00061d04) main_image3_pane_g3_ParamLimits

0x5daa,	// (0x00061d04) main_image3_pane_g3

0x5dd4,	// (0x00061d2e) main_image3_pane_g4_ParamLimits

0x5dd4,	// (0x00061d2e) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0006b833) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0006b833) main_image3_pane_g

0x5dfe,	// (0x00061d58) main_image3_pane_t1_ParamLimits

0x5dfe,	// (0x00061d58) main_image3_pane_t1

0x5e56,	// (0x00061db0) main_image3_pane_t2_ParamLimits

0x5e56,	// (0x00061db0) main_image3_pane_t2

0x5ea8,	// (0x00061e02) main_image3_pane_t3_ParamLimits

0x5ea8,	// (0x00061e02) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0006b83c) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0006b83c) main_image3_pane_t

0x0ebb,	// (0x0005ce15) grid_sctrl_middle_pane_cp01_ParamLimits

0x0ebb,	// (0x0005ce15) grid_sctrl_middle_pane_cp01

0x5f30,	// (0x00061e8a) cell_sctrl_middle_pane_cp01_ParamLimits

0x5f30,	// (0x00061e8a) cell_sctrl_middle_pane_cp01

0x5f4d,	// (0x00061ea7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5f4d,	// (0x00061ea7) cell_sctrl_middle_pane_cp01_g1

0x0c41,	// (0x0005cb9b) main_call4_pane

0x5f63,	// (0x00061ebd) aid_size_button_call4_ParamLimits

0x5f63,	// (0x00061ebd) aid_size_button_call4

0x5f94,	// (0x00061eee) call4_windows_pane_ParamLimits

0x5f94,	// (0x00061eee) call4_windows_pane

0x5fb4,	// (0x00061f0e) grid_call4_button_pane_ParamLimits

0x5fb4,	// (0x00061f0e) grid_call4_button_pane

0xd04e,	// (0x00068fa8) call4_windows_conf_pane

0xd063,	// (0x00068fbd) popup_call4_audio_first_window_ParamLimits

0xd063,	// (0x00068fbd) popup_call4_audio_first_window

0xd0af,	// (0x00069009) popup_call4_audio_second_window_ParamLimits

0xd0af,	// (0x00069009) popup_call4_audio_second_window

0xd0c3,	// (0x0006901d) popup_call4_audio_wait_window_ParamLimits

0xd0c3,	// (0x0006901d) popup_call4_audio_wait_window

0x5fe1,	// (0x00061f3b) cell_call4_button_pane_ParamLimits

0x5fe1,	// (0x00061f3b) cell_call4_button_pane

0x600a,	// (0x00061f64) bg_button_pane_cp09_ParamLimits

0x600a,	// (0x00061f64) bg_button_pane_cp09

0x6016,	// (0x00061f70) cell_call4_button_pane_g1_ParamLimits

0x6016,	// (0x00061f70) cell_call4_button_pane_g1

0x603c,	// (0x00061f96) cell_call4_button_pane_t1_ParamLimits

0x603c,	// (0x00061f96) cell_call4_button_pane_t1

0xd10b,	// (0x00069065) popup_call4_audio_conf_window_ParamLimits

0xd10b,	// (0x00069065) popup_call4_audio_conf_window

0x527d,	// (0x000611d7) mup3_progress_pane_t1_ParamLimits

0x529c,	// (0x000611f6) mup3_progress_pane_t2_ParamLimits

0xca17,	// (0x00068971) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0006b715) mup3_progress_pane_t_ParamLimits

0xca34,	// (0x0006898e) mup_progress_pane_cp03_ParamLimits

0x587f,	// (0x000617d9) mup3_control_keys_pane_g4_copy1

0xdc2b,	// (0x00069b85) mp4_rocker2_pane_ParamLimits

0xdc2b,	// (0x00069b85) mp4_rocker2_pane

0xd11f,	// (0x00069079) mp4_rocker2_pane_g1

0xd127,	// (0x00069081) mp4_rocker2_pane_g2

0xdc99,	// (0x00069bf3) mp4_rocker2_pane_g3

0xdca1,	// (0x00069bfb) mp4_rocker2_pane_g4

0xdca9,	// (0x00069c03) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0006b845) mp4_rocker2_pane_g

0x0c41,	// (0x0005cb9b) main_camera4_pane

0x0c41,	// (0x0005cb9b) main_video4_pane

0x5af9,	// (0x00061a53) main_video_tele_dialer_pane_t1_ParamLimits

0x5af9,	// (0x00061a53) main_video_tele_dialer_pane_t1

0x5b12,	// (0x00061a6c) main_video_tele_dialer_pane_t2_ParamLimits

0x5b12,	// (0x00061a6c) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0006b7ff) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0006b7ff) main_video_tele_dialer_pane_t

0x607e,	// (0x00061fd8) cam4_autofocus_pane_ParamLimits

0x607e,	// (0x00061fd8) cam4_autofocus_pane

0x6094,	// (0x00061fee) cam4_image_uncrop_pane_ParamLimits

0x6094,	// (0x00061fee) cam4_image_uncrop_pane

0x60ae,	// (0x00062008) cam4_indicators_pane_ParamLimits

0x60ae,	// (0x00062008) cam4_indicators_pane

0x60d9,	// (0x00062033) main_camera4_pane_g1_ParamLimits

0x60d9,	// (0x00062033) main_camera4_pane_g1

0x60ec,	// (0x00062046) main_camera4_pane_g2_ParamLimits

0x60ec,	// (0x00062046) main_camera4_pane_g2

0x60ff,	// (0x00062059) main_camera4_pane_g3_ParamLimits

0x60ff,	// (0x00062059) main_camera4_pane_g3

0x6112,	// (0x0006206c) main_camera4_pane_g4_ParamLimits

0x6112,	// (0x0006206c) main_camera4_pane_g4

0x6125,	// (0x0006207f) main_camera4_pane_g5_ParamLimits

0x6125,	// (0x0006207f) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0006b850) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0006b850) main_camera4_pane_g

0x6149,	// (0x000620a3) main_camera4_pane_t1_ParamLimits

0x6149,	// (0x000620a3) main_camera4_pane_t1

0xdccd,	// (0x00069c27) bg_tb_trans_pane_cp06

0xdce3,	// (0x00069c3d) cam4_indicators_pane_g1

0xdcf4,	// (0x00069c4e) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0006b86b) cam4_indicators_pane_g

0xdd12,	// (0x00069c6c) cam4_indicators_pane_t1

0x61ad,	// (0x00062107) main_video4_pane_g1_ParamLimits

0x61ad,	// (0x00062107) main_video4_pane_g1

0x61c0,	// (0x0006211a) main_video4_pane_g2_ParamLimits

0x61c0,	// (0x0006211a) main_video4_pane_g2

0x61d4,	// (0x0006212e) main_video4_pane_g3_ParamLimits

0x61d4,	// (0x0006212e) main_video4_pane_g3

0x61e8,	// (0x00062142) main_video4_pane_g4_ParamLimits

0x61e8,	// (0x00062142) main_video4_pane_g4

0x0004,

0xf918,	// (0x0006b872) main_video4_pane_g_ParamLimits

0xf918,	// (0x0006b872) main_video4_pane_g

0x6210,	// (0x0006216a) vid4_indicators_pane_ParamLimits

0x6210,	// (0x0006216a) vid4_indicators_pane

0x6242,	// (0x0006219c) video4_image_uncrop_cif_pane_ParamLimits

0x6242,	// (0x0006219c) video4_image_uncrop_cif_pane

0x625c,	// (0x000621b6) video4_image_uncrop_nhd_pane_ParamLimits

0x625c,	// (0x000621b6) video4_image_uncrop_nhd_pane

0x6094,	// (0x00061fee) video4_image_uncrop_vga_pane_ParamLimits

0x6094,	// (0x00061fee) video4_image_uncrop_vga_pane

0xdd34,	// (0x00069c8e) bg_tb_trans_pane_cp07

0x6270,	// (0x000621ca) vid4_indicators_pane_g1

0x627d,	// (0x000621d7) vid4_indicators_pane_g2

0x628a,	// (0x000621e4) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0006b87d) vid4_indicators_pane_g

0x62af,	// (0x00062209) vid4_indicators_pane_t1

0x62c1,	// (0x0006221b) cam4_autofocus_pane_g1

0x62c9,	// (0x00062223) cam4_autofocus_pane_g2

0x62d1,	// (0x0006222b) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0006b888) cam4_autofocus_pane_g

0x62d9,	// (0x00062233) cam4_autofocus_pane_g3_copy1

0x5b3f,	// (0x00061a99) video_down_pane_cp_t1

0x5b4d,	// (0x00061aa7) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0006b804) video_down_pane_cp_t

0x0ebb,	// (0x0005ce15) popup_vitu2_window_ParamLimits

0x0ebb,	// (0x0005ce15) popup_vitu2_window

0x62e1,	// (0x0006223b) aid_size_cell2_itu2_ParamLimits

0x62e1,	// (0x0006223b) aid_size_cell2_itu2

0x6307,	// (0x00062261) aid_size_cell_itu2_ParamLimits

0x6307,	// (0x00062261) aid_size_cell_itu2

0x6363,	// (0x000622bd) bg_popup_window_pane_cp09_ParamLimits

0x6363,	// (0x000622bd) bg_popup_window_pane_cp09

0x6371,	// (0x000622cb) field_vitu2_entry_pane_ParamLimits

0x6371,	// (0x000622cb) field_vitu2_entry_pane

0x6397,	// (0x000622f1) grid_vitu2_function_pane_ParamLimits

0x6397,	// (0x000622f1) grid_vitu2_function_pane

0x63e8,	// (0x00062342) grid_vitu2_itu_pane_ParamLimits

0x63e8,	// (0x00062342) grid_vitu2_itu_pane

0x6479,	// (0x000623d3) cell_vitu2_itu_pane_ParamLimits

0x6479,	// (0x000623d3) cell_vitu2_itu_pane

0x649d,	// (0x000623f7) cell_vitu2_function_pane_ParamLimits

0x649d,	// (0x000623f7) cell_vitu2_function_pane

0xd141,	// (0x0006909b) bg_popup_call_pane_cp08_ParamLimits

0xd141,	// (0x0006909b) bg_popup_call_pane_cp08

0xd15a,	// (0x000690b4) field_vitu2_entry_pane_g1

0xd166,	// (0x000690c0) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0006b88f) field_vitu2_entry_pane_g

0x64dc,	// (0x00062436) field_vitu2_entry_pane_t1_ParamLimits

0x64dc,	// (0x00062436) field_vitu2_entry_pane_t1

0x650e,	// (0x00062468) field_vitu2_entry_pane_t2_ParamLimits

0x650e,	// (0x00062468) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0006b896) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0006b896) field_vitu2_entry_pane_t

0x652b,	// (0x00062485) bg_button_pane_cp010_ParamLimits

0x652b,	// (0x00062485) bg_button_pane_cp010

0x6539,	// (0x00062493) cell_vitu2_itu_pane_g1

0x6557,	// (0x000624b1) cell_vitu2_itu_pane_t1_ParamLimits

0x6557,	// (0x000624b1) cell_vitu2_itu_pane_t1

0x0b4d,	// (0x0005caa7) cell_vitu2_itu_pane_t2_ParamLimits

0x0b4d,	// (0x0005caa7) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0006b8a0) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0006b8a0) cell_vitu2_itu_pane_t

0xdd4a,	// (0x00069ca4) bg_button_pane_cp011

0x65bd,	// (0x00062517) cell_vitu2_function_pane_g1

0x0c41,	// (0x0005cb9b) main_myfav_hc_pane

0x5ef8,	// (0x00061e52) popup_image3_note_pane_ParamLimits

0x5ef8,	// (0x00061e52) popup_image3_note_pane

0x5f14,	// (0x00061e6e) popup_image3_tool_bar_pane_ParamLimits

0x5f14,	// (0x00061e6e) popup_image3_tool_bar_pane

0x0bd1,	// (0x0005cb2b) cell_vitu2_itu_pane_t3_ParamLimits

0x0bd1,	// (0x0005cb2b) cell_vitu2_itu_pane_t3

0x0c41,	// (0x0005cb9b) bg_popup_trans_pane

0xde65,	// (0x00069dbf) grid_image3_tool_bar_pane

0xde6f,	// (0x00069dc9) bg_popup_trans_pane_g1

0xa6b1,	// (0x0006660b) bg_popup_trans_pane_g2

0xde77,	// (0x00069dd1) bg_popup_trans_pane_g3

0xde7f,	// (0x00069dd9) bg_popup_trans_pane_g4

0xde87,	// (0x00069de1) bg_popup_trans_pane_g5

0xde8f,	// (0x00069de9) bg_popup_trans_pane_g6

0xde97,	// (0x00069df1) bg_popup_trans_pane_g7

0xde9f,	// (0x00069df9) bg_popup_trans_pane_g8

0xa691,	// (0x000665eb) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0006b8a7) bg_popup_trans_pane_g

0xdea7,	// (0x00069e01) cell_image3_tool_bar_pane_ParamLimits

0xdea7,	// (0x00069e01) cell_image3_tool_bar_pane

0xc735,	// (0x0006868f) cell_image3_tool_bar_pane_g1

0x0c41,	// (0x0005cb9b) bg_popup_trans_pane_cp1

0xdebb,	// (0x00069e15) popup_image3_note_pane_t1

0xdec9,	// (0x00069e23) popup_image3_note_pane_t2

0xded7,	// (0x00069e31) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0006b8ba) popup_image3_note_pane_t

0xdee5,	// (0x00069e3f) popup_image3_note_pane_t3_copy1

0x65d1,	// (0x0006252b) bg_myfav_hc_instruction_pane_ParamLimits

0x65d1,	// (0x0006252b) bg_myfav_hc_instruction_pane

0x65e7,	// (0x00062541) cell_myfav_contact_pane_ParamLimits

0x65e7,	// (0x00062541) cell_myfav_contact_pane

0x6603,	// (0x0006255d) cell_myfav_contact_pane_cp1_ParamLimits

0x6603,	// (0x0006255d) cell_myfav_contact_pane_cp1

0x661b,	// (0x00062575) cell_myfav_contact_pane_cp2_ParamLimits

0x661b,	// (0x00062575) cell_myfav_contact_pane_cp2

0x6633,	// (0x0006258d) cell_myfav_contact_pane_cp3_ParamLimits

0x6633,	// (0x0006258d) cell_myfav_contact_pane_cp3

0x664a,	// (0x000625a4) cell_myfav_contact_pane_cp4_ParamLimits

0x664a,	// (0x000625a4) cell_myfav_contact_pane_cp4

0x6662,	// (0x000625bc) cell_myfav_contact_pane_cp5_ParamLimits

0x6662,	// (0x000625bc) cell_myfav_contact_pane_cp5

0x6676,	// (0x000625d0) cell_myfav_contact_pane_cp6_ParamLimits

0x6676,	// (0x000625d0) cell_myfav_contact_pane_cp6

0x668c,	// (0x000625e6) cell_myfav_contact_pane_cp7_ParamLimits

0x668c,	// (0x000625e6) cell_myfav_contact_pane_cp7

0xdef3,	// (0x00069e4d) listscroll_gen_pane_cp05

0x66a6,	// (0x00062600) main_myfav_hc_pane_g1_ParamLimits

0x66a6,	// (0x00062600) main_myfav_hc_pane_g1

0x66c0,	// (0x0006261a) main_myfav_hc_pane_g2_ParamLimits

0x66c0,	// (0x0006261a) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0006b8c1) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0006b8c1) main_myfav_hc_pane_g

0x66f2,	// (0x0006264c) main_myfav_hc_pane_t1_ParamLimits

0x66f2,	// (0x0006264c) main_myfav_hc_pane_t1

0xdefc,	// (0x00069e56) main_myfav_hc_pane_t2_ParamLimits

0xdefc,	// (0x00069e56) main_myfav_hc_pane_t2

0xdf0e,	// (0x00069e68) main_myfav_hc_pane_t3_ParamLimits

0xdf0e,	// (0x00069e68) main_myfav_hc_pane_t3

0x6709,	// (0x00062663) main_myfav_hc_pane_t4_ParamLimits

0x6709,	// (0x00062663) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0006b8c8) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0006b8c8) main_myfav_hc_pane_t

0xc735,	// (0x0006868f) bg_myfav_hc_instruction_pane_g1

0xdf20,	// (0x00069e7a) cell_myfav_contact_pane_g1_ParamLimits

0xdf20,	// (0x00069e7a) cell_myfav_contact_pane_g1

0xdf20,	// (0x00069e7a) cell_myfav_contact_pane_g2_ParamLimits

0xdf20,	// (0x00069e7a) cell_myfav_contact_pane_g2

0xdf2c,	// (0x00069e86) cell_myfav_contact_pane_g3_ParamLimits

0xdf2c,	// (0x00069e86) cell_myfav_contact_pane_g3

0xca01,	// (0x0006895b) cell_myfav_contact_pane_g4_ParamLimits

0xca01,	// (0x0006895b) cell_myfav_contact_pane_g4

0xdf39,	// (0x00069e93) cell_myfav_contact_pane_g5_ParamLimits

0xdf39,	// (0x00069e93) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0006b8d3) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0006b8d3) cell_myfav_contact_pane_g

0x66da,	// (0x00062634) main_myfav_hc_pane_g3_ParamLimits

0x66da,	// (0x00062634) main_myfav_hc_pane_g3

0x0df5,	// (0x0005cd4f) popup_adpt_find_window

0x6731,	// (0x0006268b) afind_page_pane_ParamLimits

0x6731,	// (0x0006268b) afind_page_pane

0x6746,	// (0x000626a0) aid_size_cell_afind_ParamLimits

0x6746,	// (0x000626a0) aid_size_cell_afind

0x6764,	// (0x000626be) bg_popup_sub_pane_cp09_ParamLimits

0x6764,	// (0x000626be) bg_popup_sub_pane_cp09

0x6771,	// (0x000626cb) find_pane_cp01_ParamLimits

0x6771,	// (0x000626cb) find_pane_cp01

0xdf45,	// (0x00069e9f) grid_afind_control_pane_ParamLimits

0xdf45,	// (0x00069e9f) grid_afind_control_pane

0x677e,	// (0x000626d8) grid_afind_pane_ParamLimits

0x677e,	// (0x000626d8) grid_afind_pane

0x67a0,	// (0x000626fa) cell_afind_pane_ParamLimits

0x67a0,	// (0x000626fa) cell_afind_pane

0xc735,	// (0x0006868f) afind_page_pane_g1

0x6801,	// (0x0006275b) afind_page_pane_g2

0x680a,	// (0x00062764) afind_page_pane_g3

0x0002,

0xf984,	// (0x0006b8de) afind_page_pane_g

0x6813,	// (0x0006276d) afind_page_pane_t1

0xdf59,	// (0x00069eb3) cell_afind_grid_control_pane_ParamLimits

0xdf59,	// (0x00069eb3) cell_afind_grid_control_pane

0xd042,	// (0x00068f9c) bg_button_pane_cp69_ParamLimits

0xd042,	// (0x00068f9c) bg_button_pane_cp69

0x6833,	// (0x0006278d) cell_afind_pane_g1_ParamLimits

0x6833,	// (0x0006278d) cell_afind_pane_g1

0x6840,	// (0x0006279a) cell_afind_pane_t1_ParamLimits

0x6840,	// (0x0006279a) cell_afind_pane_t1

0xa4aa,	// (0x00066404) bg_button_pane_cp72

0xdf68,	// (0x00069ec2) cell_afind_grid_control_pane_g1

0x37c8,	// (0x0005f722) aid_image_placing_area_ParamLimits

0x37c8,	// (0x0005f722) aid_image_placing_area

0xcd06,	// (0x00068c60) field_vitu_entry_pane_g1_ParamLimits

0xcd06,	// (0x00068c60) field_vitu_entry_pane_g1

0xcd12,	// (0x00068c6c) field_vitu_entry_pane_g2_ParamLimits

0xcd12,	// (0x00068c6c) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0006b78f) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0006b78f) field_vitu_entry_pane_g

0x594c,	// (0x000618a6) cell_vitu_itu_pane_g1_ParamLimits

0x598e,	// (0x000618e8) cell_vitu_itu_pane_t3_ParamLimits

0x598e,	// (0x000618e8) cell_vitu_itu_pane_t3

0xcfe8,	// (0x00068f42) mp4_progress_pane_t1_ParamLimits

0xd001,	// (0x00068f5b) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0006b824) mp4_progress_pane_t_ParamLimits

0xd01a,	// (0x00068f74) mup_progress_pane_cp04_ParamLimits

0x671d,	// (0x00062677) main_myfav_hc_pane_t5_ParamLimits

0x671d,	// (0x00062677) main_myfav_hc_pane_t5

0x0c97,	// (0x0005cbf1) aid_zoom_text_primary

0x0df5,	// (0x0005cd4f) popup_adpt_find_window_ParamLimits

0x0ebb,	// (0x0005ce15) main_cam_set_pane

0x60c5,	// (0x0006201f) cam4_zoom_pane_ParamLimits

0x60c5,	// (0x0006201f) cam4_zoom_pane

0x6852,	// (0x000627ac) main_cam_set_pane_g1_ParamLimits

0x6852,	// (0x000627ac) main_cam_set_pane_g1

0x6860,	// (0x000627ba) main_cam_set_pane_g2_ParamLimits

0x6860,	// (0x000627ba) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0006b8e5) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0006b8e5) main_cam_set_pane_g

0x6881,	// (0x000627db) main_cam_set_pane_t1_ParamLimits

0x6881,	// (0x000627db) main_cam_set_pane_t1

0x689c,	// (0x000627f6) main_cset_listscroll_pane_ParamLimits

0x689c,	// (0x000627f6) main_cset_listscroll_pane

0x68bc,	// (0x00062816) main_cset_slider_pane_ParamLimits

0x68bc,	// (0x00062816) main_cset_slider_pane

0xdf79,	// (0x00069ed3) main_cset_list_pane_ParamLimits

0xdf79,	// (0x00069ed3) main_cset_list_pane

0xdf89,	// (0x00069ee3) scroll_pane_cp028

0x68e2,	// (0x0006283c) aid_area_touch_slider

0x68fe,	// (0x00062858) cset_slider_pane

0x6928,	// (0x00062882) main_cset_slider_pane_g1

0x693d,	// (0x00062897) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0006b8ea) main_cset_slider_pane_g

0xdfc2,	// (0x00069f1c) main_cset_slider_pane_t1

0x69f9,	// (0x00062953) main_cset_slider_pane_t2

0x6a13,	// (0x0006296d) main_cset_slider_pane_t3

0x6a2d,	// (0x00062987) main_cset_slider_pane_t4

0x6a47,	// (0x000629a1) main_cset_slider_pane_t5

0x6a63,	// (0x000629bd) main_cset_slider_pane_t6

0x6a78,	// (0x000629d2) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0006b90f) main_cset_slider_pane_t

0x6b7c,	// (0x00062ad6) cset_list_set_pane_ParamLimits

0x6b7c,	// (0x00062ad6) cset_list_set_pane

0x6b90,	// (0x00062aea) aid_position_infowindow_above

0x6b98,	// (0x00062af2) aid_position_infowindow_below

0x6ba0,	// (0x00062afa) cset_list_set_pane_g1_ParamLimits

0x6ba0,	// (0x00062afa) cset_list_set_pane_g1

0x6bac,	// (0x00062b06) cset_list_set_pane_g3_ParamLimits

0x6bac,	// (0x00062b06) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0006b92e) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0006b92e) cset_list_set_pane_g

0x6bbb,	// (0x00062b15) cset_list_set_pane_t1_ParamLimits

0x6bbb,	// (0x00062b15) cset_list_set_pane_t1

0x0ebb,	// (0x0005ce15) list_highlight_pane_cp021_ParamLimits

0x0ebb,	// (0x0005ce15) list_highlight_pane_cp021

0xaf1a,	// (0x00066e74) cset_slider_pane_g1

0xaf2c,	// (0x00066e86) cset_slider_pane_g2

0xaf23,	// (0x00066e7d) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x0006b933) cset_slider_pane_g

0xdd58,	// (0x00069cb2) aid_area_touch_cam4_zoom

0xdd60,	// (0x00069cba) cam4_zoom_cont_pane

0xdd68,	// (0x00069cc2) cam4_zoom_pane_g1

0xdd70,	// (0x00069cca) cam4_zoom_pane_g2

0x6bd0,	// (0x00062b2a) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0006b93a) cam4_zoom_pane_g

0xdd78,	// (0x00069cd2) cam4_zoom_cont_pane_g1

0xdd81,	// (0x00069cdb) cam4_zoom_cont_pane_g2

0xdd8a,	// (0x00069ce4) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0006b941) cam4_zoom_cont_pane_g

0x5f81,	// (0x00061edb) call4_image_pane_ParamLimits

0x5f81,	// (0x00061edb) call4_image_pane

0xd04e,	// (0x00068fa8) call4_windows_conf_pane_ParamLimits

0xd08d,	// (0x00068fe7) popup_call4_audio_in_window_ParamLimits

0xd08d,	// (0x00068fe7) popup_call4_audio_in_window

0x0c41,	// (0x0005cb9b) bg_popup_call2_act_pane_cp02

0xd103,	// (0x0006905d) call4_list_conf_pane

0xc735,	// (0x0006868f) call4_image_pane_g1

0xc735,	// (0x0006868f) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0006b655) call4_image_pane_g

0xe062,	// (0x00069fbc) list_single_graphic_popup_conf4_pane_ParamLimits

0xe062,	// (0x00069fbc) list_single_graphic_popup_conf4_pane

0x0c41,	// (0x0005cb9b) list_highlight_pane_cp022

0xe075,	// (0x00069fcf) list_single_graphic_popup_conf4_pane_g1

0xabeb,	// (0x00066b45) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0006b948) list_single_graphic_popup_conf4_pane_g

0xe07d,	// (0x00069fd7) list_single_graphic_popup_conf4_pane_t1

0x1cba,	// (0x0005dc14) popup_vtel_slider_window_ParamLimits

0x1cba,	// (0x0005dc14) popup_vtel_slider_window

0xd030,	// (0x00068f8a) dialer2_ne_pane_t2_ParamLimits

0xd030,	// (0x00068f8a) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0006b829) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0006b829) dialer2_ne_pane_t

0xc518,	// (0x00068472) bg_popup_sub_pane_cp010_ParamLimits

0xc518,	// (0x00068472) bg_popup_sub_pane_cp010

0x6bd8,	// (0x00062b32) popup_vtel_slider_window_g1_ParamLimits

0x6bd8,	// (0x00062b32) popup_vtel_slider_window_g1

0x6beb,	// (0x00062b45) popup_vtel_slider_window_g2_ParamLimits

0x6beb,	// (0x00062b45) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0006b94d) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0006b94d) popup_vtel_slider_window_g

0x6c41,	// (0x00062b9b) vtel_slider_pane_ParamLimits

0x6c41,	// (0x00062b9b) vtel_slider_pane

0x6c63,	// (0x00062bbd) vtel_slider_pane_g1_ParamLimits

0x6c63,	// (0x00062bbd) vtel_slider_pane_g1

0x6c77,	// (0x00062bd1) vtel_slider_pane_g2_ParamLimits

0x6c77,	// (0x00062bd1) vtel_slider_pane_g2

0x6c8f,	// (0x00062be9) vtel_slider_pane_g3_ParamLimits

0x6c8f,	// (0x00062be9) vtel_slider_pane_g3

0x6c63,	// (0x00062bbd) vtel_slider_pane_g4_ParamLimits

0x6c63,	// (0x00062bbd) vtel_slider_pane_g4

0x6ca5,	// (0x00062bff) vtel_slider_pane_g5_ParamLimits

0x6ca5,	// (0x00062bff) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x0006b956) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x0006b956) vtel_slider_pane_g

0x0c41,	// (0x0005cb9b) main_gallery2_pane

0x6333,	// (0x0006228d) aid_size_row_itut2_dropdow_list_ParamLimits

0x6333,	// (0x0006228d) aid_size_row_itut2_dropdow_list

0x63bf,	// (0x00062319) grid_vitu2_function_top_pane_ParamLimits

0x63bf,	// (0x00062319) grid_vitu2_function_top_pane

0x6424,	// (0x0006237e) popup_vitu2_dropdown_list_window_ParamLimits

0x6424,	// (0x0006237e) popup_vitu2_dropdown_list_window

0x644d,	// (0x000623a7) popup_vitu2_match_list_window

0x6cc9,	// (0x00062c23) cell_vitu2_function_top_pane_ParamLimits

0x6cc9,	// (0x00062c23) cell_vitu2_function_top_pane

0x6ce7,	// (0x00062c41) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ce7,	// (0x00062c41) cell_vitu2_function_top_pane_cp01

0x6d05,	// (0x00062c5f) cell_vitu2_function_top_wide_pane_ParamLimits

0x6d05,	// (0x00062c5f) cell_vitu2_function_top_wide_pane

0xdd4a,	// (0x00069ca4) bg_button_pane_cp012

0x6d23,	// (0x00062c7d) cell_vitu2_function_top_pane_g1

0xdd93,	// (0x00069ced) bg_button_pane_cp013_ParamLimits

0xdd93,	// (0x00069ced) bg_button_pane_cp013

0x6d37,	// (0x00062c91) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6d37,	// (0x00062c91) cell_vitu2_function_top_wide_pane_g1

0xdd4a,	// (0x00069ca4) bg_popup_sub_pane_cp20

0x6d4f,	// (0x00062ca9) list_vitu2_match_list_pane

0xde6f,	// (0x00069dc9) bg_popup_sub_pane_cp20_g1

0xde77,	// (0x00069dd1) bg_popup_sub_pane_cp20_g2

0xa6b1,	// (0x0006660b) bg_popup_sub_pane_cp20_g3

0xde7f,	// (0x00069dd9) bg_popup_sub_pane_cp20_g4

0xa691,	// (0x000665eb) bg_popup_sub_pane_cp20_g5

0xe093,	// (0x00069fed) bg_popup_sub_pane_cp20_g6

0xde8f,	// (0x00069de9) bg_popup_sub_pane_cp20_g7

0xde97,	// (0x00069df1) bg_popup_sub_pane_cp20_g8

0xde9f,	// (0x00069df9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0006b961) bg_popup_sub_pane_cp20_g

0xddaf,	// (0x00069d09) list_vitu2_match_list_item_pane_ParamLimits

0xddaf,	// (0x00069d09) list_vitu2_match_list_item_pane

0xddc1,	// (0x00069d1b) list_vitu2_match_list_item_pane_t1

0xa18b,	// (0x000660e5) bg_popup_sub_pane_cp21

0xddcf,	// (0x00069d29) grid_vitu2_dropdown_list_pane

0x6dba,	// (0x00062d14) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6dba,	// (0x00062d14) cell_vitu2_dropdown_list_char_pane

0x6ddb,	// (0x00062d35) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ddb,	// (0x00062d35) cell_vitu2_dropdown_list_ctrl_pane

0xe09b,	// (0x00069ff5) cell_vitu2_dropdown_list_char_pane_g1

0xe0a4,	// (0x00069ffe) cell_vitu2_dropdown_list_char_pane_g2

0xe0ad,	// (0x0006a007) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0006b97e) cell_vitu2_dropdown_list_char_pane_g

0x6e07,	// (0x00062d61) cell_vitu2_dropdown_list_char_pane_t1

0x6e15,	// (0x00062d6f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e15,	// (0x00062d6f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e25,	// (0x00062d7f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e25,	// (0x00062d7f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e36,	// (0x00062d90) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e36,	// (0x00062d90) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6e46,	// (0x00062da0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6e46,	// (0x00062da0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdccd,	// (0x00069c27) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdccd,	// (0x00069c27) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x0006b985) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x0006b985) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e62,	// (0x00062dbc) aid_size_cell_gallery2_ParamLimits

0x6e62,	// (0x00062dbc) aid_size_cell_gallery2

0x6e78,	// (0x00062dd2) grid_gallery2_pane_ParamLimits

0x6e78,	// (0x00062dd2) grid_gallery2_pane

0x6e8c,	// (0x00062de6) scroll_pane_cp029_ParamLimits

0x6e8c,	// (0x00062de6) scroll_pane_cp029

0x6e98,	// (0x00062df2) cell_gallery2_pane_ParamLimits

0x6e98,	// (0x00062df2) cell_gallery2_pane

0xe0b6,	// (0x0006a010) cell_gallery2_pane_g2

0x6ece,	// (0x00062e28) cell_gallery2_pane_g3

0xe0c0,	// (0x0006a01a) cell_gallery2_pane_g4

0xe0c8,	// (0x0006a022) cell_gallery2_pane_g5

0xadc4,	// (0x00066d1e) grid_highlight_pane_cp10

0x644d,	// (0x000623a7) popup_vitu2_match_list_window_ParamLimits

0x6462,	// (0x000623bc) popup_vitu2_query_window_ParamLimits

0x6462,	// (0x000623bc) popup_vitu2_query_window

0xa18b,	// (0x000660e5) bg_vitu2_candi_button_pane

0xe09b,	// (0x00069ff5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe0a4,	// (0x00069ffe) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe0ad,	// (0x0006a007) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6ed6,	// (0x00062e30) bg_button_pane_cp015

0x6eea,	// (0x00062e44) bg_button_pane_cp016

0x6efd,	// (0x00062e57) bg_button_pane_cp017

0xc22d,	// (0x00068187) bg_popup_sub_pane_cp22

0xe0d0,	// (0x0006a02a) popup_vitu2_query_window_g1

0x6f42,	// (0x00062e9c) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x0006b990) popup_vitu2_query_window_g

0x6f61,	// (0x00062ebb) popup_vitu2_query_window_t1_ParamLimits

0x6f61,	// (0x00062ebb) popup_vitu2_query_window_t1

0x6f96,	// (0x00062ef0) popup_vitu2_query_window_t2_ParamLimits

0x6f96,	// (0x00062ef0) popup_vitu2_query_window_t2

0x6fa8,	// (0x00062f02) popup_vitu2_query_window_t3_ParamLimits

0x6fa8,	// (0x00062f02) popup_vitu2_query_window_t3

0x6fd0,	// (0x00062f2a) popup_vitu2_query_window_t4_ParamLimits

0x6fd0,	// (0x00062f2a) popup_vitu2_query_window_t4

0x6ff1,	// (0x00062f4b) popup_vitu2_query_window_t5_ParamLimits

0x6ff1,	// (0x00062f4b) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0006b997) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0006b997) popup_vitu2_query_window_t

0xdf71,	// (0x00069ecb) main_cset_text_pane

0x68e2,	// (0x0006283c) aid_area_touch_slider_ParamLimits

0x68fe,	// (0x00062858) cset_slider_pane_ParamLimits

0x6928,	// (0x00062882) main_cset_slider_pane_g1_ParamLimits

0x693d,	// (0x00062897) main_cset_slider_pane_g2_ParamLimits

0xdf92,	// (0x00069eec) main_cset_slider_pane_g3_ParamLimits

0xdf92,	// (0x00069eec) main_cset_slider_pane_g3

0x6952,	// (0x000628ac) main_cset_slider_pane_g4_ParamLimits

0x6952,	// (0x000628ac) main_cset_slider_pane_g4

0x6961,	// (0x000628bb) main_cset_slider_pane_g5_ParamLimits

0x6961,	// (0x000628bb) main_cset_slider_pane_g5

0x696d,	// (0x000628c7) main_cset_slider_pane_g6_ParamLimits

0x696d,	// (0x000628c7) main_cset_slider_pane_g6

0xf990,	// (0x0006b8ea) main_cset_slider_pane_g_ParamLimits

0xdfc2,	// (0x00069f1c) main_cset_slider_pane_t1_ParamLimits

0x69f9,	// (0x00062953) main_cset_slider_pane_t2_ParamLimits

0x6a13,	// (0x0006296d) main_cset_slider_pane_t3_ParamLimits

0x6a2d,	// (0x00062987) main_cset_slider_pane_t4_ParamLimits

0x6a47,	// (0x000629a1) main_cset_slider_pane_t5_ParamLimits

0x6a63,	// (0x000629bd) main_cset_slider_pane_t6_ParamLimits

0x6a78,	// (0x000629d2) main_cset_slider_pane_t7_ParamLimits

0x6aa2,	// (0x000629fc) main_cset_slider_pane_t8_ParamLimits

0x6aa2,	// (0x000629fc) main_cset_slider_pane_t8

0x6aca,	// (0x00062a24) main_cset_slider_pane_t9_ParamLimits

0x6aca,	// (0x00062a24) main_cset_slider_pane_t9

0x6af2,	// (0x00062a4c) main_cset_slider_pane_t10_ParamLimits

0x6af2,	// (0x00062a4c) main_cset_slider_pane_t10

0x6b1a,	// (0x00062a74) main_cset_slider_pane_t11_ParamLimits

0x6b1a,	// (0x00062a74) main_cset_slider_pane_t11

0x6b42,	// (0x00062a9c) main_cset_slider_pane_t12_ParamLimits

0x6b42,	// (0x00062a9c) main_cset_slider_pane_t12

0x6b5f,	// (0x00062ab9) main_cset_slider_pane_t13_ParamLimits

0x6b5f,	// (0x00062ab9) main_cset_slider_pane_t13

0xf9b5,	// (0x0006b90f) main_cset_slider_pane_t_ParamLimits

0x0c41,	// (0x0005cb9b) bg_popup_sub_pane_cp011

0xe0dc,	// (0x0006a036) main_cset_text_pane_g1

0xe0e4,	// (0x0006a03e) main_cset_text_pane_t1

0xe0f2,	// (0x0006a04c) main_cset_text_pane_t2

0xe100,	// (0x0006a05a) main_cset_text_pane_t3

0xe10e,	// (0x0006a068) main_cset_text_pane_t4

0xe11c,	// (0x0006a076) main_cset_text_pane_t5

0xe12a,	// (0x0006a084) main_cset_text_pane_t6

0xe138,	// (0x0006a092) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0006b9a6) main_cset_text_pane_t

0x0c41,	// (0x0005cb9b) main_cam4_burst_pane

0x0c41,	// (0x0005cb9b) main_cam5_pane

0x6821,	// (0x0006277b) bg_button_pane_cp019

0x682a,	// (0x00062784) bg_button_pane_cp020

0xdf9e,	// (0x00069ef8) main_cset_slider_pane_g7_ParamLimits

0xdf9e,	// (0x00069ef8) main_cset_slider_pane_g7

0xdfaa,	// (0x00069f04) main_cset_slider_pane_g8_ParamLimits

0xdfaa,	// (0x00069f04) main_cset_slider_pane_g8

0x6981,	// (0x000628db) main_cset_slider_pane_g9_ParamLimits

0x6981,	// (0x000628db) main_cset_slider_pane_g9

0x698d,	// (0x000628e7) main_cset_slider_pane_g10_ParamLimits

0x698d,	// (0x000628e7) main_cset_slider_pane_g10

0x6999,	// (0x000628f3) main_cset_slider_pane_g11_ParamLimits

0x6999,	// (0x000628f3) main_cset_slider_pane_g11

0x69a5,	// (0x000628ff) main_cset_slider_pane_g12_ParamLimits

0x69a5,	// (0x000628ff) main_cset_slider_pane_g12

0x69b1,	// (0x0006290b) main_cset_slider_pane_g13_ParamLimits

0x69b1,	// (0x0006290b) main_cset_slider_pane_g13

0x69bd,	// (0x00062917) main_cset_slider_pane_g14_ParamLimits

0x69bd,	// (0x00062917) main_cset_slider_pane_g14

0x69c9,	// (0x00062923) main_cset_slider_pane_g15_ParamLimits

0x69c9,	// (0x00062923) main_cset_slider_pane_g15

0xdff0,	// (0x00069f4a) main_cset_slider_pane_t14_ParamLimits

0xdff0,	// (0x00069f4a) main_cset_slider_pane_t14

0xe029,	// (0x00069f83) main_cset_slider_pane_t15_ParamLimits

0xe029,	// (0x00069f83) main_cset_slider_pane_t15

0x7068,	// (0x00062fc2) aid_cam4_burst_size_cell_ParamLimits

0x7068,	// (0x00062fc2) aid_cam4_burst_size_cell

0x7088,	// (0x00062fe2) grid_cam4_burst_pane_ParamLimits

0x7088,	// (0x00062fe2) grid_cam4_burst_pane

0x70c0,	// (0x0006301a) linegrid_cam4_burst_pane_ParamLimits

0x70c0,	// (0x0006301a) linegrid_cam4_burst_pane

0xe80c,	// (0x0006a766) scroll_pane_cp30_ParamLimits

0xe80c,	// (0x0006a766) scroll_pane_cp30

0x70e6,	// (0x00063040) cell_cam4_burst_pane_ParamLimits

0x70e6,	// (0x00063040) cell_cam4_burst_pane

0xe146,	// (0x0006a0a0) linegrid_cam4_burst_pane_g1_ParamLimits

0xe146,	// (0x0006a0a0) linegrid_cam4_burst_pane_g1

0x7133,	// (0x0006308d) linegrid_cam4_burst_pane_g2_ParamLimits

0x7133,	// (0x0006308d) linegrid_cam4_burst_pane_g2

0xe153,	// (0x0006a0ad) linegrid_cam4_burst_pane_g3_ParamLimits

0xe153,	// (0x0006a0ad) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0006b9b5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0006b9b5) linegrid_cam4_burst_pane_g

0x7144,	// (0x0006309e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7144,	// (0x0006309e) linegrid_cam4_burst_pane_g3_copy1

0xe160,	// (0x0006a0ba) linegrid_cam4_burst_pane_g4_ParamLimits

0xe160,	// (0x0006a0ba) linegrid_cam4_burst_pane_g4

0x715e,	// (0x000630b8) linegrid_cam4_burst_pane_g5_ParamLimits

0x715e,	// (0x000630b8) linegrid_cam4_burst_pane_g5

0x716f,	// (0x000630c9) linegrid_cam4_burst_pane_g6_ParamLimits

0x716f,	// (0x000630c9) linegrid_cam4_burst_pane_g6

0xe16d,	// (0x0006a0c7) linegrid_cam4_burst_pane_g7_ParamLimits

0xe16d,	// (0x0006a0c7) linegrid_cam4_burst_pane_g7

0x7186,	// (0x000630e0) cell_cam4_burst_pane_g1

0xe194,	// (0x0006a0ee) main_cam5_pane_t1_ParamLimits

0xe194,	// (0x0006a0ee) main_cam5_pane_t1

0xe1a6,	// (0x0006a100) main_cam5_pane_t2_ParamLimits

0xe1a6,	// (0x0006a100) main_cam5_pane_t2

0xe1b8,	// (0x0006a112) main_cam5_pane_t3_ParamLimits

0xe1b8,	// (0x0006a112) main_cam5_pane_t3

0xe1ca,	// (0x0006a124) main_cam5_pane_t4_ParamLimits

0xe1ca,	// (0x0006a124) main_cam5_pane_t4

0xe1e0,	// (0x0006a13a) main_cam5_pane_t5_ParamLimits

0xe1e0,	// (0x0006a13a) main_cam5_pane_t5

0xe1f2,	// (0x0006a14c) main_cam5_pane_t6_ParamLimits

0xe1f2,	// (0x0006a14c) main_cam5_pane_t6

0xe206,	// (0x0006a160) main_cam5_pane_t7_ParamLimits

0xe206,	// (0x0006a160) main_cam5_pane_t7

0xe218,	// (0x0006a172) main_cam5_pane_t8_ParamLimits

0xe218,	// (0x0006a172) main_cam5_pane_t8

0xe234,	// (0x0006a18e) main_cam5_pane_t9_ParamLimits

0xe234,	// (0x0006a18e) main_cam5_pane_t9

0xe246,	// (0x0006a1a0) main_cam5_pane_t10_ParamLimits

0xe246,	// (0x0006a1a0) main_cam5_pane_t10

0xe258,	// (0x0006a1b2) main_cam5_pane_t11_ParamLimits

0xe258,	// (0x0006a1b2) main_cam5_pane_t11

0xe26a,	// (0x0006a1c4) main_cam5_pane_t12_ParamLimits

0xe26a,	// (0x0006a1c4) main_cam5_pane_t12

0xe27f,	// (0x0006a1d9) main_cam5_pane_t13_ParamLimits

0xe27f,	// (0x0006a1d9) main_cam5_pane_t13

0x000c,

0x064d,	// (0x0005c5a7) main_cam5_pane_t_ParamLimits

0x064d,	// (0x0005c5a7) main_cam5_pane_t

0x0e81,	// (0x0005cddb) popup_scut_keymap_window_ParamLimits

0x0e81,	// (0x0005cddb) popup_scut_keymap_window

0x719b,	// (0x000630f5) aid_size_cell_brow_shortcut

0xadc4,	// (0x00066d1e) bg_popup_window_pane_cp010

0x71a7,	// (0x00063101) grid_scut_pane

0x71b3,	// (0x0006310d) cell_scut_pane_ParamLimits

0x71b3,	// (0x0006310d) cell_scut_pane

0x71ca,	// (0x00063124) cell_scut_pane_g1

0xe29c,	// (0x0006a1f6) cell_scut_pane_t1

0xe2ab,	// (0x0006a205) cell_scut_pane_t2

0x71d3,	// (0x0006312d) cell_scut_pane_t3

0x0002,

0xfa67,	// (0x0006b9c1) cell_scut_pane_t

0x4e38,	// (0x00060d92) main_mup3_pane_g8_ParamLimits

0x4e38,	// (0x00060d92) main_mup3_pane_g8

0x634b,	// (0x000622a5) area_vitu2_query_pane_ParamLimits

0x634b,	// (0x000622a5) area_vitu2_query_pane

0x6f10,	// (0x00062e6a) input_focus_pane_cp08

0xe2ba,	// (0x0006a214) area_vitu2_query_pane_g1

0x71e1,	// (0x0006313b) area_vitu2_query_pane_g2

0x0001,

0xfa6e,	// (0x0006b9c8) area_vitu2_query_pane_g

0x71f2,	// (0x0006314c) area_vitu2_query_pane_t1_ParamLimits

0x71f2,	// (0x0006314c) area_vitu2_query_pane_t1

0x7206,	// (0x00063160) area_vitu2_query_pane_t2_ParamLimits

0x7206,	// (0x00063160) area_vitu2_query_pane_t2

0x721a,	// (0x00063174) area_vitu2_query_pane_t3_ParamLimits

0x721a,	// (0x00063174) area_vitu2_query_pane_t3

0x7242,	// (0x0006319c) area_vitu2_query_pane_t4_ParamLimits

0x7242,	// (0x0006319c) area_vitu2_query_pane_t4

0x726a,	// (0x000631c4) area_vitu2_query_pane_t5_ParamLimits

0x726a,	// (0x000631c4) area_vitu2_query_pane_t5

0x7292,	// (0x000631ec) area_vitu2_query_pane_t6_ParamLimits

0x7292,	// (0x000631ec) area_vitu2_query_pane_t6

0x0006,

0xfa73,	// (0x0006b9cd) area_vitu2_query_pane_t_ParamLimits

0xfa73,	// (0x0006b9cd) area_vitu2_query_pane_t

0x72de,	// (0x00063238) bg_button_pane_cp018

0x72ec,	// (0x00063246) bg_button_pane_cp021

0x72f8,	// (0x00063252) bg_button_pane_cp022

0x7309,	// (0x00063263) input_focus_pane_cp09

0x2d5c,	// (0x0005ecb6) aid_size_touch_mv_arrow_left

0x2d85,	// (0x0005ecdf) aid_size_touch_mv_arrow_right

0x69e1,	// (0x0006293b) main_cset_slider_pane_g16_ParamLimits

0x69e1,	// (0x0006293b) main_cset_slider_pane_g16

0x69ed,	// (0x00062947) main_cset_slider_pane_g17_ParamLimits

0x69ed,	// (0x00062947) main_cset_slider_pane_g17

0x7186,	// (0x000630e0) cell_cam4_burst_pane_g1_ParamLimits

0x0c41,	// (0x0005cb9b) compa_mode_pane

0x6bfb,	// (0x00062b55) popup_vtel_slider_window_g3_ParamLimits

0x6bfb,	// (0x00062b55) popup_vtel_slider_window_g3

0x6c12,	// (0x00062b6c) popup_vtel_slider_window_g4_ParamLimits

0x6c12,	// (0x00062b6c) popup_vtel_slider_window_g4

0x6c29,	// (0x00062b83) popup_vtel_slider_window_t1_ParamLimits

0x6c29,	// (0x00062b83) popup_vtel_slider_window_t1

0x0c41,	// (0x0005cb9b) main_cl_pane

0xc255,	// (0x000681af) popup_imed_adjust2_window_ParamLimits

0xc22d,	// (0x00068187) bg_tb_trans_pane_cp05_ParamLimits

0xcc3b,	// (0x00068b95) popup_imed_adjust2_window_g1_ParamLimits

0xcc4a,	// (0x00068ba4) popup_imed_adjust2_window_g2_ParamLimits

0xcc4a,	// (0x00068ba4) popup_imed_adjust2_window_g2

0xcc56,	// (0x00068bb0) popup_imed_adjust2_window_g3_ParamLimits

0xcc56,	// (0x00068bb0) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0006b753) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0006b753) popup_imed_adjust2_window_g

0xcc62,	// (0x00068bbc) popup_imed_adjust2_window_t1_ParamLimits

0xcc7a,	// (0x00068bd4) slider_imed_adjust_pane_ParamLimits

0xcc8e,	// (0x00068be8) slider_imed_adjust_pane_g1_ParamLimits

0xcc9e,	// (0x00068bf8) slider_imed_adjust_pane_g2_ParamLimits

0xccae,	// (0x00068c08) slider_imed_adjust_pane_g3_ParamLimits

0xccbf,	// (0x00068c19) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0006b75a) slider_imed_adjust_pane_g_ParamLimits

0x6066,	// (0x00061fc0) aid_touch_area_cam4_ParamLimits

0x6066,	// (0x00061fc0) aid_touch_area_cam4

0xdcb1,	// (0x00069c0b) battery_pane_cp01

0x6136,	// (0x00062090) main_camera4_pane_g6_ParamLimits

0x6136,	// (0x00062090) main_camera4_pane_g6

0x6160,	// (0x000620ba) main_camera4_pane_t2_ParamLimits

0x6160,	// (0x000620ba) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0006b85d) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0006b85d) main_camera4_pane_t

0x6195,	// (0x000620ef) aid_touch_area_vid4_ParamLimits

0x6195,	// (0x000620ef) aid_touch_area_vid4

0x61fc,	// (0x00062156) main_video4_pane_g5_ParamLimits

0x61fc,	// (0x00062156) main_video4_pane_g5

0x6227,	// (0x00062181) vid4_progress_pane_ParamLimits

0x6227,	// (0x00062181) vid4_progress_pane

0xdfb6,	// (0x00069f10) main_cset_slider_pane_g18_ParamLimits

0xdfb6,	// (0x00069f10) main_cset_slider_pane_g18

0xe17a,	// (0x0006a0d4) cell_cam4_burst_pane_g2_ParamLimits

0xe17a,	// (0x0006a0d4) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0006b9bc) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0006b9bc) cell_cam4_burst_pane_g

0xa1af,	// (0x00066109) bg_cl_pane_ParamLimits

0xa1af,	// (0x00066109) bg_cl_pane

0x731a,	// (0x00063274) cl_header_pane_ParamLimits

0x731a,	// (0x00063274) cl_header_pane

0x732e,	// (0x00063288) cl_listscroll_pane_ParamLimits

0x732e,	// (0x00063288) cl_listscroll_pane

0xe2c6,	// (0x0006a220) bg_cl_pane_g1

0xe2ce,	// (0x0006a228) bg_cl_pane_g2

0xe2d6,	// (0x0006a230) bg_cl_pane_g3

0xe2de,	// (0x0006a238) bg_cl_pane_g4

0xe2e6,	// (0x0006a240) bg_cl_pane_g5

0xe2ee,	// (0x0006a248) bg_cl_pane_g6

0xe2f6,	// (0x0006a250) bg_cl_pane_g7

0xe2fe,	// (0x0006a258) bg_cl_pane_g8

0xe306,	// (0x0006a260) bg_cl_pane_g9

0x0008,

0x0683,	// (0x0005c5dd) bg_cl_pane_g

0x733e,	// (0x00063298) aid_height_cl_leading_ParamLimits

0x733e,	// (0x00063298) aid_height_cl_leading

0x734a,	// (0x000632a4) aid_height_cl_text_ParamLimits

0x734a,	// (0x000632a4) aid_height_cl_text

0x0ebb,	// (0x0005ce15) bg_cl_header_pane_ParamLimits

0x0ebb,	// (0x0005ce15) bg_cl_header_pane

0x7369,	// (0x000632c3) cl_header_pane_g1_ParamLimits

0x7369,	// (0x000632c3) cl_header_pane_g1

0x737f,	// (0x000632d9) cl_header_pane_t1_ParamLimits

0x737f,	// (0x000632d9) cl_header_pane_t1

0xe30e,	// (0x0006a268) cl_list_pane

0xdf89,	// (0x00069ee3) hc_scroll_pane_cp01

0xa691,	// (0x000665eb) bg_cl_header_pane_g1

0xde6f,	// (0x00069dc9) bg_cl_header_pane_g2

0xa6b1,	// (0x0006660b) bg_cl_header_pane_g3

0xde7f,	// (0x00069dd9) bg_cl_header_pane_g4

0xde77,	// (0x00069dd1) bg_cl_header_pane_g5

0xe093,	// (0x00069fed) bg_cl_header_pane_g6

0xde97,	// (0x00069df1) bg_cl_header_pane_g7

0xde9f,	// (0x00069df9) bg_cl_header_pane_g8

0xde8f,	// (0x00069de9) bg_cl_header_pane_g9

0x0008,

0xfa82,	// (0x0006b9dc) bg_cl_header_pane_g

0x7398,	// (0x000632f2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7398,	// (0x000632f2) hc_cl_list_double_graphic_heading_pane

0x73ac,	// (0x00063306) hc_cl_list_single_graphic_pane_ParamLimits

0x73ac,	// (0x00063306) hc_cl_list_single_graphic_pane

0x73c6,	// (0x00063320) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x73c6,	// (0x00063320) hc_cl_list_single_graphic_pane_g1

0x73d2,	// (0x0006332c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x73d2,	// (0x0006332c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa95,	// (0x0006b9ef) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa95,	// (0x0006b9ef) hc_cl_list_single_graphic_pane_g

0x73e6,	// (0x00063340) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x73e6,	// (0x00063340) hc_cl_list_single_graphic_pane_t1

0x73c6,	// (0x00063320) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x73c6,	// (0x00063320) hc_cl_list_double_graphic_heading_pane_g1

0x73fb,	// (0x00063355) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x73fb,	// (0x00063355) hc_cl_list_double_graphic_heading_pane_g2

0x740f,	// (0x00063369) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x740f,	// (0x00063369) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa9a,	// (0x0006b9f4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa9a,	// (0x0006b9f4) hc_cl_list_double_graphic_heading_pane_g

0x7423,	// (0x0006337d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7423,	// (0x0006337d) hc_cl_list_double_graphic_heading_pane_t1

0x7438,	// (0x00063392) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7438,	// (0x00063392) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaa1,	// (0x0006b9fb) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaa1,	// (0x0006b9fb) hc_cl_list_double_graphic_heading_pane_t

0xdddf,	// (0x00069d39) vid4_progress_pane_g1

0xddef,	// (0x00069d49) vid4_progress_pane_g2

0xa900,	// (0x0006685a) vid4_progress_pane_g3

0xdcf4,	// (0x00069c4e) vid4_progress_pane_g4

0x0004,

0xfaa6,	// (0x0006ba00) vid4_progress_pane_g

0xddff,	// (0x00069d59) vid4_progress_pane_t1

0xde14,	// (0x00069d6e) vid4_progress_pane_t2

0x0002,

0xfab1,	// (0x0006ba0b) vid4_progress_pane_t

0xde3f,	// (0x00069d99) wait_bar_pane_cp07

0xc526,	// (0x00068480) blid_firmament_pane_ParamLimits

0xc569,	// (0x000684c3) popup_blid_sat_info2_window_g1

0xc58d,	// (0x000684e7) popup_blid_sat_info2_window_t3

0xc59b,	// (0x000684f5) popup_blid_sat_info2_window_t4

0xc5a9,	// (0x00068503) popup_blid_sat_info2_window_t5

0xc5b7,	// (0x00068511) popup_blid_sat_info2_window_t6

0xc5c7,	// (0x00068521) popup_blid_sat_info2_window_t7

0xc5d5,	// (0x0006852f) popup_blid_sat_info2_window_t8

0xc5e3,	// (0x0006853d) popup_blid_sat_info2_window_t9

0xc5f1,	// (0x0006854b) popup_blid_sat_info2_window_t10

0xc6b5,	// (0x0006860f) aid_firma_cardinal_ParamLimits

0xc6c9,	// (0x00068623) blid_firmament_pane_t1_ParamLimits

0xc6e0,	// (0x0006863a) blid_firmament_pane_t2_ParamLimits

0xc6f7,	// (0x00068651) blid_firmament_pane_t3_ParamLimits

0xc70e,	// (0x00068668) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0006b64c) blid_firmament_pane_t_ParamLimits

0xc725,	// (0x0006867f) blid_sat_info_pane_ParamLimits

0x0ebb,	// (0x0005ce15) main_cam_set_pane_ParamLimits

0x56f6,	// (0x00061650) aid_size_cell_colour_35_ParamLimits

0x5716,	// (0x00061670) aid_size_cell_colour_112_ParamLimits

0x5736,	// (0x00061690) aid_size_cell_effect_ParamLimits

0xc22d,	// (0x00068187) bg_tb_trans_pane_cp02_ParamLimits

0xa887,	// (0x000667e1) heading_imed_pane_ParamLimits

0x5756,	// (0x000616b0) listscroll_imed_pane_ParamLimits

0xb857,	// (0x000677b1) popup_call2_audio_first_window_g5_ParamLimits

0xb857,	// (0x000677b1) popup_call2_audio_first_window_g5

0x5d0d,	// (0x00061c67) aid_size_touch_image3_arrow_left_ParamLimits

0x5d0d,	// (0x00061c67) aid_size_touch_image3_arrow_left

0x5d39,	// (0x00061c93) aid_size_touch_image3_arrow_right_ParamLimits

0x5d39,	// (0x00061c93) aid_size_touch_image3_arrow_right

0xde2a,	// (0x00069d84) vid4_progress_pane_t3

0x5a79,	// (0x000619d3) main_hwr_training_symbol_option_pane_ParamLimits

0x5a79,	// (0x000619d3) main_hwr_training_symbol_option_pane

0xcf28,	// (0x00068e82) popup_hwr_training_preview_window_ParamLimits

0xcf28,	// (0x00068e82) popup_hwr_training_preview_window

0x5a99,	// (0x000619f3) hwr_training_navi_pane_g5_ParamLimits

0x5a99,	// (0x000619f3) hwr_training_navi_pane_g5

0xde5d,	// (0x00069db7) popup_char_count_window

0xdd4a,	// (0x00069ca4) bg_popup_sub_pane_cp20_ParamLimits

0x6d4f,	// (0x00062ca9) list_vitu2_match_list_pane_ParamLimits

0x6d5e,	// (0x00062cb8) vitu2_page_scroll_pane_ParamLimits

0x6d5e,	// (0x00062cb8) vitu2_page_scroll_pane

0xe320,	// (0x0006a27a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe320,	// (0x0006a27a) list_single_hwr_training_symbol_option_pane

0xe333,	// (0x0006a28d) list_single_hwr_training_symbol_option_pane_g1

0xe33b,	// (0x0006a295) list_single_hwr_training_symbol_option_pane_t1

0xe349,	// (0x0006a2a3) bg_button_pane_cp023

0xe352,	// (0x0006a2ac) bg_button_pane_cp024

0x7495,	// (0x000633ef) vitu2_page_scroll_pane_g1

0x749d,	// (0x000633f7) vitu2_page_scroll_pane_g2

0x0001,

0xfab8,	// (0x0006ba12) vitu2_page_scroll_pane_g

0x74a5,	// (0x000633ff) vitu2_page_scroll_pane_t1

0xc442,	// (0x0006839c) popup_char_count_window_g1

0xe385,	// (0x0006a2df) popup_char_count_window_g2

0xe38e,	// (0x0006a2e8) popup_char_count_window_g3

0x0002,

0xfabd,	// (0x0006ba17) popup_char_count_window_g

0xe397,	// (0x0006a2f1) popup_char_count_window_t1

0x0c41,	// (0x0005cb9b) main_vded2_pane

0xcc27,	// (0x00068b81) aid_size_cell_imed_line

0xcc31,	// (0x00068b8b) grid_imed_line_width_pane

0x6297,	// (0x000621f1) vid4_indicators_pane_g4

0xe3a5,	// (0x0006a2ff) cell_imed_line_width_pane_ParamLimits

0xe3a5,	// (0x0006a2ff) cell_imed_line_width_pane

0xe3b9,	// (0x0006a313) cell_imed_line_width_pane_g1

0xc4d4,	// (0x0006842e) cell_imed_line_width_pane_g2

0x0001,

0xfac4,	// (0x0006ba1e) cell_imed_line_width_pane_g

0x74b4,	// (0x0006340e) main_vded2_pane_g1_ParamLimits

0x74b4,	// (0x0006340e) main_vded2_pane_g1

0x74cc,	// (0x00063426) main_vded2_pane_g2_ParamLimits

0x74cc,	// (0x00063426) main_vded2_pane_g2

0x0001,

0xfac9,	// (0x0006ba23) main_vded2_pane_g_ParamLimits

0xfac9,	// (0x0006ba23) main_vded2_pane_g

0x74de,	// (0x00063438) vded2_slider_pane_ParamLimits

0x74de,	// (0x00063438) vded2_slider_pane

0x74ee,	// (0x00063448) aid_size_touch_vded2_end

0x74f8,	// (0x00063452) aid_size_touch_vded2_playhead

0xe3c2,	// (0x0006a31c) aid_size_touch_vded2_start

0xe3ca,	// (0x0006a324) vded2_slider_bg_pane

0xe3d3,	// (0x0006a32d) vded2_slider_pane_g1

0xe3dc,	// (0x0006a336) vded2_slider_pane_g2

0x7502,	// (0x0006345c) vded2_slider_pane_g3

0x0002,

0xface,	// (0x0006ba28) vded2_slider_pane_g

0xe3e4,	// (0x0006a33e) vded2_slider_bg_pane_g1

0xe3ed,	// (0x0006a347) vded2_slider_bg_pane_g2

0xe3f6,	// (0x0006a350) vded2_slider_bg_pane_g3

0x0002,

0x06e9,	// (0x0005c643) vded2_slider_bg_pane_g

0x342e,	// (0x0005f388) aid_postcard_touch_down_pane_ParamLimits

0x342e,	// (0x0005f388) aid_postcard_touch_down_pane

0x3444,	// (0x0005f39e) aid_postcard_touch_up_pane_ParamLimits

0x3444,	// (0x0005f39e) aid_postcard_touch_up_pane

0x0c41,	// (0x0005cb9b) main_blid2_pane

0xc23b,	// (0x00068195) popup_blid2_search_window

0x0c41,	// (0x0005cb9b) blid2_gps_pane

0x0c41,	// (0x0005cb9b) blid2_navig_pane

0x0c41,	// (0x0005cb9b) blid2_search_pane

0x0c41,	// (0x0005cb9b) blid2_tripm_pane

0x750d,	// (0x00063467) blid2_search_pane_g1_ParamLimits

0x750d,	// (0x00063467) blid2_search_pane_g1

0x7525,	// (0x0006347f) blid2_search_pane_t1_ParamLimits

0x7525,	// (0x0006347f) blid2_search_pane_t1

0x7537,	// (0x00063491) aid_size_cell_blid2_gps_ParamLimits

0x7537,	// (0x00063491) aid_size_cell_blid2_gps

0x754f,	// (0x000634a9) blid2_gps_pane_g1_ParamLimits

0x754f,	// (0x000634a9) blid2_gps_pane_g1

0x7563,	// (0x000634bd) grid_blid2_satellite_pane_ParamLimits

0x7563,	// (0x000634bd) grid_blid2_satellite_pane

0x757d,	// (0x000634d7) blid2_navig_pane_g1_ParamLimits

0x757d,	// (0x000634d7) blid2_navig_pane_g1

0x7589,	// (0x000634e3) blid2_navig_pane_t1_ParamLimits

0x7589,	// (0x000634e3) blid2_navig_pane_t1

0x75a4,	// (0x000634fe) blid2_navig_pane_t2_ParamLimits

0x75a4,	// (0x000634fe) blid2_navig_pane_t2

0x0001,

0xfad5,	// (0x0006ba2f) blid2_navig_pane_t_ParamLimits

0xfad5,	// (0x0006ba2f) blid2_navig_pane_t

0x75bf,	// (0x00063519) blid2_navig_ring_pane_ParamLimits

0x75bf,	// (0x00063519) blid2_navig_ring_pane

0x75d8,	// (0x00063532) blid2_speed_pane_ParamLimits

0x75d8,	// (0x00063532) blid2_speed_pane

0x75e4,	// (0x0006353e) blid2_tripm_pane_g1_ParamLimits

0x75e4,	// (0x0006353e) blid2_tripm_pane_g1

0x75ff,	// (0x00063559) blid2_tripm_pane_g2_ParamLimits

0x75ff,	// (0x00063559) blid2_tripm_pane_g2

0x7613,	// (0x0006356d) blid2_tripm_pane_g3_ParamLimits

0x7613,	// (0x0006356d) blid2_tripm_pane_g3

0x7627,	// (0x00063581) blid2_tripm_pane_g4_ParamLimits

0x7627,	// (0x00063581) blid2_tripm_pane_g4

0x763b,	// (0x00063595) blid2_tripm_pane_g5_ParamLimits

0x763b,	// (0x00063595) blid2_tripm_pane_g5

0x0005,

0xfada,	// (0x0006ba34) blid2_tripm_pane_g_ParamLimits

0xfada,	// (0x0006ba34) blid2_tripm_pane_g

0x7661,	// (0x000635bb) blid2_tripm_pane_t1_ParamLimits

0x7661,	// (0x000635bb) blid2_tripm_pane_t1

0x767c,	// (0x000635d6) blid2_tripm_pane_t2_ParamLimits

0x767c,	// (0x000635d6) blid2_tripm_pane_t2

0x7697,	// (0x000635f1) blid2_tripm_pane_t3_ParamLimits

0x7697,	// (0x000635f1) blid2_tripm_pane_t3

0x0003,

0xfae7,	// (0x0006ba41) blid2_tripm_pane_t_ParamLimits

0xfae7,	// (0x0006ba41) blid2_tripm_pane_t

0x76de,	// (0x00063638) cell_blid2_satellite_pane_ParamLimits

0x76de,	// (0x00063638) cell_blid2_satellite_pane

0x76fc,	// (0x00063656) cell_blid2_satellite_pane_g1

0xe3ff,	// (0x0006a359) cell_blid2_satellite_pane_t1

0xc735,	// (0x0006868f) blid2_speed_pane_g1

0xe40d,	// (0x0006a367) blid2_speed_pane_t1

0xe41b,	// (0x0006a375) blid2_speed_pane_t2

0x0001,

0x070b,	// (0x0005c665) blid2_speed_pane_t

0xc735,	// (0x0006868f) blid2_navig_ring_pane_g1

0x7705,	// (0x0006365f) blid2_navig_ring_pane_g2

0x770d,	// (0x00063667) blid2_navig_ring_pane_g3

0x7715,	// (0x0006366f) blid2_navig_ring_pane_g4

0x771d,	// (0x00063677) blid2_navig_ring_pane_g5

0x0004,

0xfaf0,	// (0x0006ba4a) blid2_navig_ring_pane_g

0x0c41,	// (0x0005cb9b) bg_popup_window_pane_cp011

0xe429,	// (0x0006a383) popup_blid2_search_window_g1

0xe431,	// (0x0006a38b) popup_blid2_search_window_t1

0xe43f,	// (0x0006a399) popup_blid2_search_window_t2

0x0001,

0x071b,	// (0x0005c675) popup_blid2_search_window_t

0xa5a0,	// (0x000664fa) main_browser_pane_g1

0xa1af,	// (0x00066109) main_browser_pane_ParamLimits

0xdd4a,	// (0x00069ca4) bg_button_pane_cp011_ParamLimits

0x65bd,	// (0x00062517) cell_vitu2_function_pane_g1_ParamLimits

0xc22d,	// (0x00068187) bg_popup_sub_pane_cp22_ParamLimits

0x6f10,	// (0x00062e6a) input_focus_pane_cp08_ParamLimits

0x6f27,	// (0x00062e81) popup_vitu2_query_button_pane_ParamLimits

0x6f27,	// (0x00062e81) popup_vitu2_query_button_pane

0x6f38,	// (0x00062e92) popup_vitu2_query_input_button_pane

0xe0d0,	// (0x0006a02a) popup_vitu2_query_window_g1_ParamLimits

0x6f42,	// (0x00062e9c) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x0006b990) popup_vitu2_query_window_g_ParamLimits

0x0c41,	// (0x0005cb9b) bg_button_pane_cp026

0x7725,	// (0x0006367f) popup_vitu2_query_input_button_pane_g1

0x0c41,	// (0x0005cb9b) bg_button_pane_cp025

0xe44d,	// (0x0006a3a7) popup_vitu2_query_button_pane_t1

0x4aca,	// (0x00060a24) main_mp3_pane_t6

0x4ad8,	// (0x00060a32) popup_slider_window_cp01

0xdcdb,	// (0x00069c35) cam4_battery_pane

0xdd42,	// (0x00069c9c) cam4_battery_pane_cp02

0xddd7,	// (0x00069d31) cam4_battery_pane_cp01

0xddd7,	// (0x00069d31) cam4_battery_pane_cp03

0xd026,	// (0x00068f80) cam4_battery_pane_g1

0xc735,	// (0x0006868f) cam4_battery_pane_g2

0x0001,

0xfafb,	// (0x0006ba55) cam4_battery_pane_g

0xc5ff,	// (0x00068559) popup_blid_sat_info2_window_t11

0x2d5c,	// (0x0005ecb6) aid_size_touch_mv_arrow_left_ParamLimits

0x2d85,	// (0x0005ecdf) aid_size_touch_mv_arrow_right_ParamLimits

0xad24,	// (0x00066c7e) navi_pane_g1_ParamLimits

0x2dc4,	// (0x0005ed1e) navi_pane_g2_ParamLimits

0x2df2,	// (0x0005ed4c) navi_pane_g3_ParamLimits

0xf404,	// (0x0006b35e) navi_pane_g_ParamLimits

0x2e4a,	// (0x0005eda4) navi_pane_mv_t1_ParamLimits

0x5762,	// (0x000616bc) grid_imed_effect_pane_ParamLimits

0x1bb7,	// (0x0005db11) aid_placing_vt_slider_lsc

0xa4ef,	// (0x00066449) aid_placing_vt_slider_prt

0x0ebb,	// (0x0005ce15) bg_tb_trans_pane_cp01_ParamLimits

0xc8bc,	// (0x00068816) popup_image_details_window_g1_ParamLimits

0xc8cf,	// (0x00068829) popup_image_details_window_g2_ParamLimits

0xc8e4,	// (0x0006883e) popup_image_details_window_g3_ParamLimits

0xc8e4,	// (0x0006883e) popup_image_details_window_g3

0xf737,	// (0x0006b691) popup_image_details_window_g_ParamLimits

0xc8f8,	// (0x00068852) popup_image_details_window_t1_ParamLimits

0xc90a,	// (0x00068864) popup_image_details_window_t2_ParamLimits

0xc923,	// (0x0006887d) popup_image_details_window_t3_ParamLimits

0xc937,	// (0x00068891) popup_image_details_window_t4_ParamLimits

0xc952,	// (0x000688ac) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0006b698) popup_image_details_window_t_ParamLimits

0x7356,	// (0x000632b0) cl_header_name_pane_ParamLimits

0x7356,	// (0x000632b0) cl_header_name_pane

0x772d,	// (0x00063687) cl_header_name_pane_t1_ParamLimits

0x772d,	// (0x00063687) cl_header_name_pane_t1

0x774e,	// (0x000636a8) cl_header_name_pane_t2_ParamLimits

0x774e,	// (0x000636a8) cl_header_name_pane_t2

0x7790,	// (0x000636ea) cl_header_name_pane_t3_ParamLimits

0x7790,	// (0x000636ea) cl_header_name_pane_t3

0x0002,

0xfb00,	// (0x0006ba5a) cl_header_name_pane_t_ParamLimits

0xfb00,	// (0x0006ba5a) cl_header_name_pane_t

0x2e1b,	// (0x0005ed75) navi_pane_mv_g2_ParamLimits

0xd15a,	// (0x000690b4) field_vitu2_entry_pane_g1_ParamLimits

0xd166,	// (0x000690c0) field_vitu2_entry_pane_g2_ParamLimits

0xd172,	// (0x000690cc) field_vitu2_entry_pane_g3_ParamLimits

0xd172,	// (0x000690cc) field_vitu2_entry_pane_g3

0xf935,	// (0x0006b88f) field_vitu2_entry_pane_g_ParamLimits

0x6539,	// (0x00062493) cell_vitu2_itu_pane_g1_ParamLimits

0x6549,	// (0x000624a3) cell_vitu2_itu_pane_g2_ParamLimits

0x6549,	// (0x000624a3) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0006b89b) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0006b89b) cell_vitu2_itu_pane_g

0xdd4a,	// (0x00069ca4) bg_vkb2_func_pane_cp05_ParamLimits

0xdd4a,	// (0x00069ca4) bg_vkb2_func_pane_cp05

0xdd4a,	// (0x00069ca4) bg_vkb2_func_pane_cp03

0xdd4a,	// (0x00069ca4) bg_vkb2_func_pane_cp04

0xdd4a,	// (0x00069ca4) bg_vkb2_func_pane_cp10_ParamLimits

0xdd4a,	// (0x00069ca4) bg_vkb2_func_pane_cp10

0x72f8,	// (0x00063252) bg_vkb2_func_pane_cp08

0x72de,	// (0x00063238) bg_vkb2_func_pane_cp06

0x72ec,	// (0x00063246) bg_vkb2_func_pane_cp07

0xe35b,	// (0x0006a2b5) bg_vkb2_func_pane_cp11_ParamLimits

0xe35b,	// (0x0006a2b5) bg_vkb2_func_pane_cp11

0xe370,	// (0x0006a2ca) bg_vkb2_func_pane_cp12_ParamLimits

0xe370,	// (0x0006a2ca) bg_vkb2_func_pane_cp12

0x0c41,	// (0x0005cb9b) bg_vkb2_func_pane_cp09

0xde6f,	// (0x00069dc9) bg_vkb2_func_pane_g1

0xa6b1,	// (0x0006660b) bg_vkb2_func_pane_g2

0xde77,	// (0x00069dd1) bg_vkb2_func_pane_g3

0xde7f,	// (0x00069dd9) bg_vkb2_func_pane_g4

0xe093,	// (0x00069fed) bg_vkb2_func_pane_g5

0xde97,	// (0x00069df1) bg_vkb2_func_pane_g6

0xde9f,	// (0x00069df9) bg_vkb2_func_pane_g7

0xde8f,	// (0x00069de9) bg_vkb2_func_pane_g8

0xa691,	// (0x000665eb) bg_vkb2_func_pane_g9

0x0008,

0xfb07,	// (0x0006ba61) bg_vkb2_func_pane_g

0x764f,	// (0x000635a9) blid2_tripm_pane_g6_ParamLimits

0x764f,	// (0x000635a9) blid2_tripm_pane_g6

0xcfe0,	// (0x00068f3a) mp4_progress_pane_g1

0x76ca,	// (0x00063624) blid2_tripm_values_pane_ParamLimits

0x76ca,	// (0x00063624) blid2_tripm_values_pane

0x77c1,	// (0x0006371b) blid2_tripm_values_pane_t1

0x77cf,	// (0x00063729) blid2_tripm_values_pane_t2

0x77dd,	// (0x00063737) blid2_tripm_values_pane_t3

0x77eb,	// (0x00063745) blid2_tripm_values_pane_t4

0x77f9,	// (0x00063753) blid2_tripm_values_pane_t5

0x7807,	// (0x00063761) blid2_tripm_values_pane_t6

0x7815,	// (0x0006376f) blid2_tripm_values_pane_t7

0x7823,	// (0x0006377d) blid2_tripm_values_pane_t8

0x7831,	// (0x0006378b) blid2_tripm_values_pane_t9

0x0008,

0xfb1a,	// (0x0006ba74) blid2_tripm_values_pane_t

0x1bf9,	// (0x0005db53) call_video_pane_t1_ParamLimits

0x1c17,	// (0x0005db71) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0006b1e7) call_video_pane_t_ParamLimits

0x3331,	// (0x0005f28b) msg_header_pane_g1_ParamLimits

0xaf5f,	// (0x00066eb9) msg_header_pane_g2_ParamLimits

0xaf5f,	// (0x00066eb9) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0006b401) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0006b401) msg_header_pane_g

0xa1af,	// (0x00066109) main_clock2_pane_ParamLimits

0x546b,	// (0x000613c5) grid_clock2_toolbar_pane_ParamLimits

0x546b,	// (0x000613c5) grid_clock2_toolbar_pane

0x546b,	// (0x000613c5) listscroll_clock2_pane_ParamLimits

0x546b,	// (0x000613c5) listscroll_clock2_pane

0x5553,	// (0x000614ad) main_clock2_pane_t3_ParamLimits

0x5553,	// (0x000614ad) main_clock2_pane_t3

0x5576,	// (0x000614d0) main_clock2_pane_t4_ParamLimits

0x5576,	// (0x000614d0) main_clock2_pane_t4

0xe45b,	// (0x0006a3b5) cell_clock2_toolbar_pane

0xe463,	// (0x0006a3bd) cell_clock2_toolbar_pane_cp01

0xe463,	// (0x0006a3bd) cell_clock2_toolbar_pane_cp02

0xe46b,	// (0x0006a3c5) cell_clock2_toolbar_pane_cp03

0xe473,	// (0x0006a3cd) list_clock2_pane

0xac77,	// (0x00066bd1) scroll_pane_cp10

0xe47b,	// (0x0006a3d5) list_single_clock2_pane_ParamLimits

0xe47b,	// (0x0006a3d5) list_single_clock2_pane

0xadc4,	// (0x00066d1e) list_highlight_pane_cp08

0xe488,	// (0x0006a3e2) list_single_clock2_pane_t1

0xe496,	// (0x0006a3f0) list_single_clock2_pane_t2

0x0001,

0x0752,	// (0x0005c6ac) list_single_clock2_pane_t

0x0c41,	// (0x0005cb9b) bg_button_pane_cp10

0xe4a4,	// (0x0006a3fe) cell_clock2_toolbar_pane_g1

0x33ba,	// (0x0005f314) aid_main_viewer_pane_g1_ParamLimits

0x33ba,	// (0x0005f314) aid_main_viewer_pane_g1

0x33c8,	// (0x0005f322) aid_main_viewer_pane_g2_ParamLimits

0x33c8,	// (0x0005f322) aid_main_viewer_pane_g2

0x33d6,	// (0x0005f330) aid_main_viewer_pane_g3_ParamLimits

0x33d6,	// (0x0005f330) aid_main_viewer_pane_g3

0x33e5,	// (0x0005f33f) aid_main_viewer_pane_g4_ParamLimits

0x33e5,	// (0x0005f33f) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0006b412) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0006b412) aid_main_viewer_pane_g

0x3cf1,	// (0x0005fc4b) main_calc_pane_ParamLimits

0x3d05,	// (0x0005fc5f) main_dialer2_pane_ParamLimits

0x0c41,	// (0x0005cb9b) main_cam6_pane

0x0c41,	// (0x0005cb9b) main_vid6_pane

0x5477,	// (0x000613d1) listscroll_gen_pane_cp06_ParamLimits

0x5477,	// (0x000613d1) listscroll_gen_pane_cp06

0x5599,	// (0x000614f3) main_clock2_pane_t5_ParamLimits

0x5599,	// (0x000614f3) main_clock2_pane_t5

0x55f9,	// (0x00061553) aid_call2_pane_cp10_ParamLimits

0x560b,	// (0x00061565) aid_call_pane_cp10_ParamLimits

0xacf9,	// (0x00066c53) popup_clock_analogue_window_cp10_g1_ParamLimits

0xacf9,	// (0x00066c53) popup_clock_analogue_window_cp10_g2_ParamLimits

0x561d,	// (0x00061577) popup_clock_analogue_window_cp10_g3_ParamLimits

0x561d,	// (0x00061577) popup_clock_analogue_window_cp10_g4_ParamLimits

0xacf9,	// (0x00066c53) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0006b748) popup_clock_analogue_window_cp10_g_ParamLimits

0x562f,	// (0x00061589) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5cba,	// (0x00061c14) cell_dialer2_keypad_pane_g2_ParamLimits

0x5cba,	// (0x00061c14) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0006b82e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0006b82e) cell_dialer2_keypad_pane_g

0x5cd6,	// (0x00061c30) cell_dialer2_keypad_pane_t1

0x68d4,	// (0x0006282e) main_cset_text2_pane_ParamLimits

0x68d4,	// (0x0006282e) main_cset_text2_pane

0xe2ba,	// (0x0006a214) area_vitu2_query_pane_g1_ParamLimits

0x71e1,	// (0x0006313b) area_vitu2_query_pane_g2_ParamLimits

0xfa6e,	// (0x0006b9c8) area_vitu2_query_pane_g_ParamLimits

0x72ba,	// (0x00063214) area_vitu2_query_pane_t7_ParamLimits

0x72ba,	// (0x00063214) area_vitu2_query_pane_t7

0x72de,	// (0x00063238) bg_button_pane_cp018_ParamLimits

0x72ec,	// (0x00063246) bg_button_pane_cp021_ParamLimits

0x72f8,	// (0x00063252) bg_button_pane_cp022_ParamLimits

0x72f8,	// (0x00063252) bg_vkb2_func_pane_cp08_ParamLimits

0x72de,	// (0x00063238) bg_vkb2_func_pane_cp06_ParamLimits

0x72ec,	// (0x00063246) bg_vkb2_func_pane_cp07_ParamLimits

0x7309,	// (0x00063263) input_focus_pane_cp09_ParamLimits

0xde4f,	// (0x00069da9) cam6_autofocus_pane_ParamLimits

0xde4f,	// (0x00069da9) cam6_autofocus_pane

0x783f,	// (0x00063799) cam6_image_uncrop_pane_ParamLimits

0x783f,	// (0x00063799) cam6_image_uncrop_pane

0x784e,	// (0x000637a8) cam6_indi_pane_ParamLimits

0x784e,	// (0x000637a8) cam6_indi_pane

0x7864,	// (0x000637be) cam6_mode_pane_ParamLimits

0x7864,	// (0x000637be) cam6_mode_pane

0x7876,	// (0x000637d0) cam6_timer_pane_ParamLimits

0x7876,	// (0x000637d0) cam6_timer_pane

0x7882,	// (0x000637dc) cam6_zoom_pane_ParamLimits

0x7882,	// (0x000637dc) cam6_zoom_pane

0x788e,	// (0x000637e8) cam6_mode_pane_g1_ParamLimits

0x788e,	// (0x000637e8) cam6_mode_pane_g1

0x789e,	// (0x000637f8) cam6_mode_pane_g2_ParamLimits

0x789e,	// (0x000637f8) cam6_mode_pane_g2

0x78ae,	// (0x00063808) cam6_mode_pane_g3_ParamLimits

0x78ae,	// (0x00063808) cam6_mode_pane_g3

0x78be,	// (0x00063818) cam6_mode_pane_g4_ParamLimits

0x78be,	// (0x00063818) cam6_mode_pane_g4

0x0003,

0xfb2d,	// (0x0006ba87) cam6_mode_pane_g_ParamLimits

0xfb2d,	// (0x0006ba87) cam6_mode_pane_g

0xe186,	// (0x0006a0e0) bg_tb_trans_pane_cp08_ParamLimits

0xe186,	// (0x0006a0e0) bg_tb_trans_pane_cp08

0xe4ac,	// (0x0006a406) cam6_battery_pane_ParamLimits

0xe4ac,	// (0x0006a406) cam6_battery_pane

0xe4c2,	// (0x0006a41c) cam6_indi_pane_g1_ParamLimits

0xe4c2,	// (0x0006a41c) cam6_indi_pane_g1

0xe4d4,	// (0x0006a42e) cam6_indi_pane_g2_ParamLimits

0xe4d4,	// (0x0006a42e) cam6_indi_pane_g2

0xe4e6,	// (0x0006a440) cam6_indi_pane_g3_ParamLimits

0xe4e6,	// (0x0006a440) cam6_indi_pane_g3

0x0002,

0x0760,	// (0x0005c6ba) cam6_indi_pane_g_ParamLimits

0x0760,	// (0x0005c6ba) cam6_indi_pane_g

0xe4f8,	// (0x0006a452) cam6_indi_pane_t1_ParamLimits

0xe4f8,	// (0x0006a452) cam6_indi_pane_t1

0x78ce,	// (0x00063828) cam6_autofocus_pane_g1

0x78d6,	// (0x00063830) cam6_autofocus_pane_g2

0x78de,	// (0x00063838) cam6_autofocus_pane_g3

0x78e6,	// (0x00063840) cam6_autofocus_pane_g4

0x0003,

0xfb36,	// (0x0006ba90) cam6_autofocus_pane_g

0xe51e,	// (0x0006a478) cam6_timer_pane_g1

0xe526,	// (0x0006a480) cam6_timer_pane_t1

0xe534,	// (0x0006a48e) cam6_zoom_cont_pane

0xe53c,	// (0x0006a496) cam6_zoom_pane_g1

0xe544,	// (0x0006a49e) cam6_zoom_pane_g2

0x78ee,	// (0x00063848) cam6_zoom_pane_g3

0x0002,

0xfb3f,	// (0x0006ba99) cam6_zoom_pane_g

0xc735,	// (0x0006868f) cam6_battery_pane_g1

0xc735,	// (0x0006868f) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0006b655) cam6_battery_pane_g

0xe54c,	// (0x0006a4a6) cam6_zoom_cont_pane_g1

0xe555,	// (0x0006a4af) cam6_zoom_cont_pane_g2

0xe55e,	// (0x0006a4b8) cam6_zoom_cont_pane_g3

0x0002,

0x0777,	// (0x0005c6d1) cam6_zoom_cont_pane_g

0x790b,	// (0x00063865) cam6_mode_pane_cp_ParamLimits

0x790b,	// (0x00063865) cam6_mode_pane_cp

0x791d,	// (0x00063877) cam6_zoom_pane_cp_ParamLimits

0x791d,	// (0x00063877) cam6_zoom_pane_cp

0x7929,	// (0x00063883) vid6_image_uncrop_cif_pane_ParamLimits

0x7929,	// (0x00063883) vid6_image_uncrop_cif_pane

0x7939,	// (0x00063893) vid6_image_uncrop_nhd_pane_ParamLimits

0x7939,	// (0x00063893) vid6_image_uncrop_nhd_pane

0x7948,	// (0x000638a2) vid6_image_uncrop_vga_pane_ParamLimits

0x7948,	// (0x000638a2) vid6_image_uncrop_vga_pane

0x7957,	// (0x000638b1) vid6_image_uncrop_wvga_pane_ParamLimits

0x7957,	// (0x000638b1) vid6_image_uncrop_wvga_pane

0x7966,	// (0x000638c0) vid6_indi_pane_ParamLimits

0x7966,	// (0x000638c0) vid6_indi_pane

0xe186,	// (0x0006a0e0) bg_tb_trans_pane_cp09_ParamLimits

0xe186,	// (0x0006a0e0) bg_tb_trans_pane_cp09

0xe576,	// (0x0006a4d0) cam6_battery_pane_cp_ParamLimits

0xe576,	// (0x0006a4d0) cam6_battery_pane_cp

0xe582,	// (0x0006a4dc) vid6_indi_pane_g1_ParamLimits

0xe582,	// (0x0006a4dc) vid6_indi_pane_g1

0xe594,	// (0x0006a4ee) vid6_indi_pane_g2_ParamLimits

0xe594,	// (0x0006a4ee) vid6_indi_pane_g2

0xe5a6,	// (0x0006a500) vid6_indi_pane_g3_ParamLimits

0xe5a6,	// (0x0006a500) vid6_indi_pane_g3

0xe5bb,	// (0x0006a515) vid6_indi_pane_g4_ParamLimits

0xe5bb,	// (0x0006a515) vid6_indi_pane_g4

0xe5d0,	// (0x0006a52a) vid6_indi_pane_g5_ParamLimits

0xe5d0,	// (0x0006a52a) vid6_indi_pane_g5

0x0004,

0x077e,	// (0x0005c6d8) vid6_indi_pane_g_ParamLimits

0x077e,	// (0x0005c6d8) vid6_indi_pane_g

0xe5ea,	// (0x0006a544) vid6_indi_pane_t1_ParamLimits

0xe5ea,	// (0x0006a544) vid6_indi_pane_t1

0xe600,	// (0x0006a55a) vid6_indi_pane_t2_ParamLimits

0xe600,	// (0x0006a55a) vid6_indi_pane_t2

0xe628,	// (0x0006a582) vid6_indi_pane_t3_ParamLimits

0xe628,	// (0x0006a582) vid6_indi_pane_t3

0xe650,	// (0x0006a5aa) vid6_indi_pane_t4_ParamLimits

0xe650,	// (0x0006a5aa) vid6_indi_pane_t4

0x0003,

0x0789,	// (0x0005c6e3) vid6_indi_pane_t_ParamLimits

0x0789,	// (0x0005c6e3) vid6_indi_pane_t

0xe674,	// (0x0006a5ce) wait_bar_pane_cp08

0x797e,	// (0x000638d8) main_cset_text2_pane_t1_ParamLimits

0x797e,	// (0x000638d8) main_cset_text2_pane_t1

0x78f6,	// (0x00063850) listscroll_gen_pane_cp06_t1_ParamLimits

0x78f6,	// (0x00063850) listscroll_gen_pane_cp06_t1

0x0c41,	// (0x0005cb9b) main_cam6_set_pane

0xdccd,	// (0x00069c27) bg_tb_trans_pane_cp06_ParamLimits

0xdce3,	// (0x00069c3d) cam4_indicators_pane_g1_ParamLimits

0xdcf4,	// (0x00069c4e) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0006b86b) cam4_indicators_pane_g_ParamLimits

0xdd12,	// (0x00069c6c) cam4_indicators_pane_t1_ParamLimits

0xdd34,	// (0x00069c8e) bg_tb_trans_pane_cp07_ParamLimits

0x6270,	// (0x000621ca) vid4_indicators_pane_g1_ParamLimits

0x627d,	// (0x000621d7) vid4_indicators_pane_g2_ParamLimits

0x628a,	// (0x000621e4) vid4_indicators_pane_g3_ParamLimits

0x6297,	// (0x000621f1) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0006b87d) vid4_indicators_pane_g_ParamLimits

0x62af,	// (0x00062209) vid4_indicators_pane_t1_ParamLimits

0xdddf,	// (0x00069d39) vid4_progress_pane_g1_ParamLimits

0xddef,	// (0x00069d49) vid4_progress_pane_g2_ParamLimits

0xa900,	// (0x0006685a) vid4_progress_pane_g3_ParamLimits

0xdcf4,	// (0x00069c4e) vid4_progress_pane_g4_ParamLimits

0xfaa6,	// (0x0006ba00) vid4_progress_pane_g_ParamLimits

0xddff,	// (0x00069d59) vid4_progress_pane_t1_ParamLimits

0xde14,	// (0x00069d6e) vid4_progress_pane_t2_ParamLimits

0xde2a,	// (0x00069d84) vid4_progress_pane_t3_ParamLimits

0xfab1,	// (0x0006ba0b) vid4_progress_pane_t_ParamLimits

0xde3f,	// (0x00069d99) wait_bar_pane_cp07_ParamLimits

0x799e,	// (0x000638f8) main_cam6_set_pane_g2_ParamLimits

0x799e,	// (0x000638f8) main_cam6_set_pane_g2

0x79c2,	// (0x0006391c) main_cset6_listscroll_pane_ParamLimits

0x79c2,	// (0x0006391c) main_cset6_listscroll_pane

0x79de,	// (0x00063938) main_cset6_slider_pane_ParamLimits

0x79de,	// (0x00063938) main_cset6_slider_pane

0x79f4,	// (0x0006394e) main_cset6_text2_pane_ParamLimits

0x79f4,	// (0x0006394e) main_cset6_text2_pane

0xe683,	// (0x0006a5dd) main_cset6_text_pane

0xe68b,	// (0x0006a5e5) main_cset_list_pane_copy1_ParamLimits

0xe68b,	// (0x0006a5e5) main_cset_list_pane_copy1

0xe69b,	// (0x0006a5f5) scroll_pane_cp028_copy1

0x7a02,	// (0x0006395c) cset_list_set_pane_copy1

0x7a15,	// (0x0006396f) aid_position_infowindow_above_copy1

0x7a1d,	// (0x00063977) aid_position_infowindow_below_copy1

0x7a25,	// (0x0006397f) cset_list_set_pane_g1_copy1

0x7a2d,	// (0x00063987) cset_list_set_pane_g3_copy1_ParamLimits

0x7a2d,	// (0x00063987) cset_list_set_pane_g3_copy1

0x7a3c,	// (0x00063996) cset_list_set_pane_t1_copy1_ParamLimits

0x7a3c,	// (0x00063996) cset_list_set_pane_t1_copy1

0x0ebb,	// (0x0005ce15) list_highlight_pane_cp021_copy1_ParamLimits

0x0ebb,	// (0x0005ce15) list_highlight_pane_cp021_copy1

0xe6a4,	// (0x0006a5fe) cset6_slider_pane_ParamLimits

0xe6a4,	// (0x0006a5fe) cset6_slider_pane

0xe6d0,	// (0x0006a62a) main_cset6_slider_pane_g1_ParamLimits

0xe6d0,	// (0x0006a62a) main_cset6_slider_pane_g1

0x7a51,	// (0x000639ab) main_cset6_slider_pane_g2_ParamLimits

0x7a51,	// (0x000639ab) main_cset6_slider_pane_g2

0xdf9e,	// (0x00069ef8) main_cset6_slider_pane_g3_ParamLimits

0xdf9e,	// (0x00069ef8) main_cset6_slider_pane_g3

0x6999,	// (0x000628f3) main_cset6_slider_pane_g4_ParamLimits

0x6999,	// (0x000628f3) main_cset6_slider_pane_g4

0x69e1,	// (0x0006293b) main_cset6_slider_pane_g5_ParamLimits

0x69e1,	// (0x0006293b) main_cset6_slider_pane_g5

0xdf9e,	// (0x00069ef8) main_cset6_slider_pane_g7_ParamLimits

0xdf9e,	// (0x00069ef8) main_cset6_slider_pane_g7

0xdfaa,	// (0x00069f04) main_cset6_slider_pane_g8_ParamLimits

0xdfaa,	// (0x00069f04) main_cset6_slider_pane_g8

0x6981,	// (0x000628db) main_cset6_slider_pane_g9_ParamLimits

0x6981,	// (0x000628db) main_cset6_slider_pane_g9

0x698d,	// (0x000628e7) main_cset6_slider_pane_g10_ParamLimits

0x698d,	// (0x000628e7) main_cset6_slider_pane_g10

0x6999,	// (0x000628f3) main_cset6_slider_pane_g11_ParamLimits

0x6999,	// (0x000628f3) main_cset6_slider_pane_g11

0x69a5,	// (0x000628ff) main_cset6_slider_pane_g12_ParamLimits

0x69a5,	// (0x000628ff) main_cset6_slider_pane_g12

0x69b1,	// (0x0006290b) main_cset6_slider_pane_g13_ParamLimits

0x69b1,	// (0x0006290b) main_cset6_slider_pane_g13

0x69bd,	// (0x00062917) main_cset6_slider_pane_g14_ParamLimits

0x69bd,	// (0x00062917) main_cset6_slider_pane_g14

0x7a79,	// (0x000639d3) main_cset6_slider_pane_g15_ParamLimits

0x7a79,	// (0x000639d3) main_cset6_slider_pane_g15

0x69e1,	// (0x0006293b) main_cset6_slider_pane_g16_ParamLimits

0x69e1,	// (0x0006293b) main_cset6_slider_pane_g16

0x69ed,	// (0x00062947) main_cset6_slider_pane_g17_ParamLimits

0x69ed,	// (0x00062947) main_cset6_slider_pane_g17

0x0011,

0xfb46,	// (0x0006baa0) main_cset6_slider_pane_g_ParamLimits

0xfb46,	// (0x0006baa0) main_cset6_slider_pane_g

0xe6f8,	// (0x0006a652) main_cset6_slider_pane_t1_ParamLimits

0xe6f8,	// (0x0006a652) main_cset6_slider_pane_t1

0x7a91,	// (0x000639eb) main_cset6_slider_pane_t2_ParamLimits

0x7a91,	// (0x000639eb) main_cset6_slider_pane_t2

0x7abc,	// (0x00063a16) main_cset6_slider_pane_t3_ParamLimits

0x7abc,	// (0x00063a16) main_cset6_slider_pane_t3

0x7ae7,	// (0x00063a41) main_cset6_slider_pane_t4_ParamLimits

0x7ae7,	// (0x00063a41) main_cset6_slider_pane_t4

0x7b12,	// (0x00063a6c) main_cset6_slider_pane_t5_ParamLimits

0x7b12,	// (0x00063a6c) main_cset6_slider_pane_t5

0xe739,	// (0x0006a693) main_cset6_slider_pane_t7_ParamLimits

0xe739,	// (0x0006a693) main_cset6_slider_pane_t7

0x7b3d,	// (0x00063a97) main_cset6_slider_pane_t8_ParamLimits

0x7b3d,	// (0x00063a97) main_cset6_slider_pane_t8

0x7b61,	// (0x00063abb) main_cset6_slider_pane_t9_ParamLimits

0x7b61,	// (0x00063abb) main_cset6_slider_pane_t9

0x7b85,	// (0x00063adf) main_cset6_slider_pane_t10_ParamLimits

0x7b85,	// (0x00063adf) main_cset6_slider_pane_t10

0x7ba9,	// (0x00063b03) main_cset6_slider_pane_t11_ParamLimits

0x7ba9,	// (0x00063b03) main_cset6_slider_pane_t11

0xe76f,	// (0x0006a6c9) main_cset6_slider_pane_t14_ParamLimits

0xe76f,	// (0x0006a6c9) main_cset6_slider_pane_t14

0xe7a8,	// (0x0006a702) main_cset6_slider_pane_t15_ParamLimits

0xe7a8,	// (0x0006a702) main_cset6_slider_pane_t15

0x000b,

0xfb6b,	// (0x0006bac5) main_cset6_slider_pane_t_ParamLimits

0xfb6b,	// (0x0006bac5) main_cset6_slider_pane_t

0xe7e1,	// (0x0006a73b) cset_slider_pane_g1_copy1

0xe7ea,	// (0x0006a744) cset_slider_pane_g2_copy1

0xe7f3,	// (0x0006a74d) cset_slider_pane_g3_copy1

0x0c41,	// (0x0005cb9b) bg_popup_sub_pane_cp011_copy1

0xe0dc,	// (0x0006a036) main_cset_text_pane_g1_copy1

0xe0e4,	// (0x0006a03e) main_cset_text_pane_t1_copy1

0xe0f2,	// (0x0006a04c) main_cset_text_pane_t2_copy1

0xe100,	// (0x0006a05a) main_cset_text_pane_t3_copy1

0xe10e,	// (0x0006a068) main_cset_text_pane_t4_copy1

0xe11c,	// (0x0006a076) main_cset_text_pane_t5_copy1

0xe12a,	// (0x0006a084) main_cset_text_pane_t6_copy1

0xe138,	// (0x0006a092) main_cset_text_pane_t7_copy1

0x797e,	// (0x000638d8) main_cset_text2_pane_t1_copy1

0x0c41,	// (0x0005cb9b) main_ncimui_pane

0x3f3b,	// (0x0005fe95) popup_query_ncimui_window_ParamLimits

0x3f3b,	// (0x0005fe95) popup_query_ncimui_window

0x4c52,	// (0x00060bac) field_cale_ev2_pane_g4_ParamLimits

0x4c52,	// (0x00060bac) field_cale_ev2_pane_g4

0x5b92,	// (0x00061aec) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5b92,	// (0x00061aec) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0006b809) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0006b809) cell_video_dialer_keypad_pane_g

0x5baa,	// (0x00061b04) cell_video_dialer_keypad_pane_t1

0x0c41,	// (0x0005cb9b) bg_popup_window_pane_cp012

0xab47,	// (0x00066aa1) heading_pane_cp06

0xe826,	// (0x0006a780) ncim_query_content_pane

0x0c41,	// (0x0005cb9b) bg_popup_heading_pane_cp01

0xe82e,	// (0x0006a788) ncim_heading_pane_t1

0xe83c,	// (0x0006a796) ncim_indicator_popup_pane

0xe84e,	// (0x0006a7a8) ncim_query_button_pane

0xe862,	// (0x0006a7bc) ncim_query_content_pane_t1

0xe874,	// (0x0006a7ce) ncim_query_content_pane_t2

0x0005,

0xfbaa,	// (0x0006bb04) ncim_query_content_pane_t

0xe8ae,	// (0x0006a808) ncim_query_list_pane

0xe8c0,	// (0x0006a81a) ncim_query_popup_pane

0xe83c,	// (0x0006a796) ncim_indicator_popup_pane_ParamLimits

0x7d97,	// (0x00063cf1) ncim_query_content_pane_g1_ParamLimits

0x7d97,	// (0x00063cf1) ncim_query_content_pane_g1

0xe862,	// (0x0006a7bc) ncim_query_content_pane_t1_ParamLimits

0xe874,	// (0x0006a7ce) ncim_query_content_pane_t2_ParamLimits

0x7da3,	// (0x00063cfd) ncim_query_content_pane_t3_ParamLimits

0x7da3,	// (0x00063cfd) ncim_query_content_pane_t3

0x7dcb,	// (0x00063d25) ncim_query_content_pane_t4_ParamLimits

0x7dcb,	// (0x00063d25) ncim_query_content_pane_t4

0x7df3,	// (0x00063d4d) ncim_query_content_pane_t5_ParamLimits

0x7df3,	// (0x00063d4d) ncim_query_content_pane_t5

0xe886,	// (0x0006a7e0) ncim_query_content_pane_t6_ParamLimits

0xe886,	// (0x0006a7e0) ncim_query_content_pane_t6

0xfbaa,	// (0x0006bb04) ncim_query_content_pane_t_ParamLimits

0xe8ae,	// (0x0006a808) ncim_query_list_pane_ParamLimits

0xe8c0,	// (0x0006a81a) ncim_query_popup_pane_ParamLimits

0xe8d4,	// (0x0006a82e) wait_bar_pane_cp04

0x0c41,	// (0x0005cb9b) input_focus_pane_cp011

0xe8dc,	// (0x0006a836) ncim_query_popup_pane_t1

0xe8ea,	// (0x0006a844) ncim_list_query_list_pane_ParamLimits

0xe8ea,	// (0x0006a844) ncim_list_query_list_pane

0x0c41,	// (0x0005cb9b) bg_button_pane_cp027

0xe8fd,	// (0x0006a857) ncim_query_button_pane_g1

0x0c41,	// (0x0005cb9b) list_highlight_pane_cp012

0xe907,	// (0x0006a861) ncim_list_query_list_pane_g1

0xe90f,	// (0x0006a869) ncim_list_query_list_pane_t1

0xdd03,	// (0x00069c5d) cam4_indicators_pane_g3_ParamLimits

0xdd03,	// (0x00069c5d) cam4_indicators_pane_g3

0x62a3,	// (0x000621fd) vid4_indicators_pane_g5_ParamLimits

0x62a3,	// (0x000621fd) vid4_indicators_pane_g5

0xdd03,	// (0x00069c5d) vid4_progress_pane_g5_ParamLimits

0xdd03,	// (0x00069c5d) vid4_progress_pane_g5

0x7cb0,	// (0x00063c0a) main_ncimui_pane_g1

0x7d06,	// (0x00063c60) ncimui_group_query_pane_ParamLimits

0x7d06,	// (0x00063c60) ncimui_group_query_pane

0x7d42,	// (0x00063c9c) ncimui_list_pane_ParamLimits

0x7d42,	// (0x00063c9c) ncimui_list_pane

0x7d63,	// (0x00063cbd) ncimui_text_pane_ParamLimits

0x7d63,	// (0x00063cbd) ncimui_text_pane

0x7e1b,	// (0x00063d75) ncimui_text_pane_t1_ParamLimits

0x7e1b,	// (0x00063d75) ncimui_text_pane_t1

0xe91d,	// (0x0006a877) ncimui_list_single_graphic_pane_ParamLimits

0xe91d,	// (0x0006a877) ncimui_list_single_graphic_pane

0x7e39,	// (0x00063d93) ncimui_query_pane_ParamLimits

0x7e39,	// (0x00063d93) ncimui_query_pane

0x0c41,	// (0x0005cb9b) list_highlight_pane_cp013

0xe92d,	// (0x0006a887) ncim_list_query_list_pane_t1_copy1

0xe907,	// (0x0006a861) ncim_list_single_graphic_pane_g1

0xe93b,	// (0x0006a895) ncim_query_button_pane_cp01

0xe947,	// (0x0006a8a1) ncim_query_entry_pane_ParamLimits

0xe947,	// (0x0006a8a1) ncim_query_entry_pane

0xe95a,	// (0x0006a8b4) ncimui_query_pane_g1

0xe966,	// (0x0006a8c0) ncimui_query_pane_t1_ParamLimits

0xe966,	// (0x0006a8c0) ncimui_query_pane_t1

0x0ebb,	// (0x0005ce15) input_focus_pane_cp012

0xe97f,	// (0x0006a8d9) ncim_query_entry_pane_t1

0xa1af,	// (0x00066109) main_im_pane_ParamLimits

0x0ebb,	// (0x0005ce15) main_mobtv_pane_ParamLimits

0x0ebb,	// (0x0005ce15) main_mobtv_pane

0x6981,	// (0x000628db) main_cset6_slider_pane_g18_ParamLimits

0x6981,	// (0x000628db) main_cset6_slider_pane_g18

0x69b1,	// (0x0006290b) main_cset6_slider_pane_g19_ParamLimits

0x69b1,	// (0x0006290b) main_cset6_slider_pane_g19

0x7e4c,	// (0x00063da6) bg_main_mobtv_pane_ParamLimits

0x7e4c,	// (0x00063da6) bg_main_mobtv_pane

0x7e5a,	// (0x00063db4) main_mobtv_info_pane

0x7e63,	// (0x00063dbd) main_mobtv_loading_pane_ParamLimits

0x7e63,	// (0x00063dbd) main_mobtv_loading_pane

0xe991,	// (0x0006a8eb) main_mobtv_pg_channel_list_pane

0xe99b,	// (0x0006a8f5) main_mobtv_pg_hdr_pane

0x7e70,	// (0x00063dca) main_mobtv_programe_curr_pane_ParamLimits

0x7e70,	// (0x00063dca) main_mobtv_programe_curr_pane

0x7e7d,	// (0x00063dd7) main_mobtv_programe_next_pane_ParamLimits

0x7e7d,	// (0x00063dd7) main_mobtv_programe_next_pane

0xe9a4,	// (0x0006a8fe) popup_mobtv_noti_window

0xc735,	// (0x0006868f) main_tv_pg_hdr_pane_g1

0xe9ac,	// (0x0006a906) main_tv_pg_hdr_pane_g2

0xe9b4,	// (0x0006a90e) main_tv_pg_hdr_pane_g3

0xe9bc,	// (0x0006a916) main_tv_pg_hdr_pane_g4

0xe9c4,	// (0x0006a91e) main_tv_pg_hdr_pane_g5

0xe9ce,	// (0x0006a928) main_tv_pg_hdr_pane_g6

0xe9d8,	// (0x0006a932) main_tv_pg_hdr_pane_g7

0xe9e2,	// (0x0006a93c) main_tv_pg_hdr_pane_g8

0xe9ec,	// (0x0006a946) main_tv_pg_hdr_pane_g9

0xe9f6,	// (0x0006a950) main_tv_pg_hdr_pane_g10

0xea00,	// (0x0006a95a) main_tv_pg_hdr_pane_g11

0x000a,

0xfbb7,	// (0x0006bb11) main_tv_pg_hdr_pane_g

0xea0a,	// (0x0006a964) main_tv_pg_hdr_pane_t1

0xea18,	// (0x0006a972) main_tv_pg_hdr_pane_t2

0xea26,	// (0x0006a980) main_tv_pg_hdr_pane_t3

0xea36,	// (0x0006a990) main_tv_pg_hdr_pane_t4

0xea46,	// (0x0006a9a0) main_tv_pg_hdr_pane_t5

0x0004,

0x081a,	// (0x0005c774) main_tv_pg_hdr_pane_t

0xea56,	// (0x0006a9b0) single_mobtv_pg_channel_pane_ParamLimits

0xea56,	// (0x0006a9b0) single_mobtv_pg_channel_pane

0xea68,	// (0x0006a9c2) single_mobtv_pg_channel_table_pane

0xea71,	// (0x0006a9cb) single_mobtv_pg_channel_thumb_pane

0xea7a,	// (0x0006a9d4) single_tv_pg_channel_pane_g1

0xea83,	// (0x0006a9dd) single_tv_pg_channel_pane_g2

0x0001,

0x0825,	// (0x0005c77f) single_tv_pg_channel_pane_g

0xc99c,	// (0x000688f6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc99c,	// (0x000688f6) bg_single_mobtv_pg_channel_thumb_pane

0xea8c,	// (0x0006a9e6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xea8c,	// (0x0006a9e6) single_mobtv_pg_channel_thumb_pane_g1

0xea9a,	// (0x0006a9f4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xea9a,	// (0x0006a9f4) single_mobtv_pg_channel_thumb_pane_g2

0xeaa6,	// (0x0006aa00) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xeaa6,	// (0x0006aa00) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x082a,	// (0x0005c784) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x082a,	// (0x0005c784) single_mobtv_pg_channel_thumb_pane_g

0xeab2,	// (0x0006aa0c) single_mobtv_pg_channel_thumb_pane_t1

0xeac0,	// (0x0006aa1a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0831,	// (0x0005c78b) single_mobtv_pg_channel_thumb_pane_t

0xc735,	// (0x0006868f) bg_single_mobtv_pg_channel_table_pane_g1

0xc735,	// (0x0006868f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0006b655) bg_single_mobtv_pg_channel_table_pane_g

0xeace,	// (0x0006aa28) single_mobtv_pg_channel_table_pane_t1

0xeadc,	// (0x0006aa36) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0836,	// (0x0005c790) single_mobtv_pg_channel_table_pane_t

0x7e92,	// (0x00063dec) main_mobtv_info_pane_g1_ParamLimits

0x7e92,	// (0x00063dec) main_mobtv_info_pane_g1

0x7eb0,	// (0x00063e0a) main_mobtv_info_pane_t1_ParamLimits

0x7eb0,	// (0x00063e0a) main_mobtv_info_pane_t1

0x7f28,	// (0x00063e82) main_mobtv_info_pane_t2_ParamLimits

0x7f28,	// (0x00063e82) main_mobtv_info_pane_t2

0x0002,

0xfbd3,	// (0x0006bb2d) main_mobtv_info_pane_t_ParamLimits

0xfbd3,	// (0x0006bb2d) main_mobtv_info_pane_t

0x7fb7,	// (0x00063f11) wait_bar_pane_cp05

0x7fc9,	// (0x00063f23) main_mobtv_loading_pane_g1_ParamLimits

0x7fc9,	// (0x00063f23) main_mobtv_loading_pane_g1

0x7fdc,	// (0x00063f36) main_mobtv_loading_pane_g2_ParamLimits

0x7fdc,	// (0x00063f36) main_mobtv_loading_pane_g2

0x7fe8,	// (0x00063f42) main_mobtv_loading_pane_g3_ParamLimits

0x7fe8,	// (0x00063f42) main_mobtv_loading_pane_g3

0x0002,

0xfbda,	// (0x0006bb34) main_mobtv_loading_pane_g_ParamLimits

0xfbda,	// (0x0006bb34) main_mobtv_loading_pane_g

0xeaea,	// (0x0006aa44) main_mobtv_loading_pane_t1_ParamLimits

0xeaea,	// (0x0006aa44) main_mobtv_loading_pane_t1

0xeb02,	// (0x0006aa5c) main_mobtv_loading_pane_t2_ParamLimits

0xeb02,	// (0x0006aa5c) main_mobtv_loading_pane_t2

0x0001,

0x084e,	// (0x0005c7a8) main_mobtv_loading_pane_t_ParamLimits

0x084e,	// (0x0005c7a8) main_mobtv_loading_pane_t

0x7ffb,	// (0x00063f55) wait_bar_pane_cp06_ParamLimits

0x7ffb,	// (0x00063f55) wait_bar_pane_cp06

0xeb26,	// (0x0006aa80) main_mobtv_programe_curr_pane_t1

0xeb34,	// (0x0006aa8e) main_mobtv_programe_curr_pane_t2

0x0001,

0x0853,	// (0x0005c7ad) main_mobtv_programe_curr_pane_t

0xeb42,	// (0x0006aa9c) main_mobtv_programe_next_pane_t1

0xeb50,	// (0x0006aaaa) main_mobtv_programe_next_pane_t2

0xeb5e,	// (0x0006aab8) main_mobtv_programe_next_pane_t3

0x0002,

0x0858,	// (0x0005c7b2) main_mobtv_programe_next_pane_t

0x0c41,	// (0x0005cb9b) bg_popup_mobtv_noti_window_pane

0xeb6c,	// (0x0006aac6) popup_mobtv_noti_window_g1

0xeb74,	// (0x0006aace) popup_mobtv_noti_window_t1

0xeb82,	// (0x0006aadc) popup_mobtv_noti_window_t2

0x0001,

0x085f,	// (0x0005c7b9) popup_mobtv_noti_window_t

0xc735,	// (0x0006868f) bg_popup_mobtv_noti_window_pane_g1

0x0c41,	// (0x0005cb9b) sc_clock_pane

0x0c41,	// (0x0005cb9b) main_fs_bigclock_pane

0x76b4,	// (0x0006360e) blid2_tripm_pane_t4_ParamLimits

0x76b4,	// (0x0006360e) blid2_tripm_pane_t4

0x800a,	// (0x00063f64) sc_clock_pane_g1_ParamLimits

0x800a,	// (0x00063f64) sc_clock_pane_g1

0x801c,	// (0x00063f76) sc_clock_pane_t1_ParamLimits

0x801c,	// (0x00063f76) sc_clock_pane_t1

0x803e,	// (0x00063f98) sc_clock_pane_t2_ParamLimits

0x803e,	// (0x00063f98) sc_clock_pane_t2

0x8056,	// (0x00063fb0) sc_clock_pane_t3_ParamLimits

0x8056,	// (0x00063fb0) sc_clock_pane_t3

0x0004,

0xfbe1,	// (0x0006bb3b) sc_clock_pane_t_ParamLimits

0xfbe1,	// (0x0006bb3b) sc_clock_pane_t

0x90e5,	// (0x0006503f) main_fs_bigclock_indicator_pane_ParamLimits

0x90e5,	// (0x0006503f) main_fs_bigclock_indicator_pane

0xc96c,	// (0x000688c6) main_fs_bigclock_pane_g1_ParamLimits

0xc96c,	// (0x000688c6) main_fs_bigclock_pane_g1

0x90f1,	// (0x0006504b) main_fs_bigclock_pane_t1_ParamLimits

0x90f1,	// (0x0006504b) main_fs_bigclock_pane_t1

0x9103,	// (0x0006505d) main_fs_bigclock_pane_t2_ParamLimits

0x9103,	// (0x0006505d) main_fs_bigclock_pane_t2

0x9115,	// (0x0006506f) main_fs_bigclock_pane_t3_ParamLimits

0x9115,	// (0x0006506f) main_fs_bigclock_pane_t3

0x0002,

0xfd9a,	// (0x0006bcf4) main_fs_bigclock_pane_t_ParamLimits

0xfd9a,	// (0x0006bcf4) main_fs_bigclock_pane_t

0xd5df,	// (0x00069539) main_fs_bigclock_indicator_pane_g1

0xe856,	// (0x0006a7b0) ncim_query_content_pane_g2_ParamLimits

0xe856,	// (0x0006a7b0) ncim_query_content_pane_g2

0x0001,

0xfba5,	// (0x0006baff) ncim_query_content_pane_g_ParamLimits

0xfba5,	// (0x0006baff) ncim_query_content_pane_g

0x806f,	// (0x00063fc9) sc_clock_pane_t4_ParamLimits

0x806f,	// (0x00063fc9) sc_clock_pane_t4

0x0ebb,	// (0x0005ce15) main_radioblah_pane

0xd0d1,	// (0x0006902b) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0d1,	// (0x0006902b) cell_call4_button_pane_t1_copy1

0x7cb8,	// (0x00063c12) main_ncimui_pane_t1_ParamLimits

0x7cb8,	// (0x00063c12) main_ncimui_pane_t1

0x7cd2,	// (0x00063c2c) main_ncimui_pane_t2_ParamLimits

0x7cd2,	// (0x00063c2c) main_ncimui_pane_t2

0x0002,

0xfb9e,	// (0x0006baf8) main_ncimui_pane_t_ParamLimits

0xfb9e,	// (0x0006baf8) main_ncimui_pane_t

0xeccb,	// (0x0006ac25) main_radioblah_anim_pane_ParamLimits

0xeccb,	// (0x0006ac25) main_radioblah_anim_pane

0xecdc,	// (0x0006ac36) main_radioblah_info_pane_ParamLimits

0xecdc,	// (0x0006ac36) main_radioblah_info_pane

0xecf0,	// (0x0006ac4a) main_radioblah_pane_t1_ParamLimits

0xecf0,	// (0x0006ac4a) main_radioblah_pane_t1

0xed0c,	// (0x0006ac66) main_radioblah_pane_t2_ParamLimits

0xed0c,	// (0x0006ac66) main_radioblah_pane_t2

0x0003,

0x0885,	// (0x0005c7df) main_radioblah_pane_t_ParamLimits

0x0885,	// (0x0005c7df) main_radioblah_pane_t

0x811e,	// (0x00064078) main_radioblah_rocker_ctrl_pane_ParamLimits

0x811e,	// (0x00064078) main_radioblah_rocker_ctrl_pane

0xed54,	// (0x0006acae) main_radioblah_info_pane_t1_ParamLimits

0xed54,	// (0x0006acae) main_radioblah_info_pane_t1

0x8176,	// (0x000640d0) main_radioblah_info_pane_t2_ParamLimits

0x8176,	// (0x000640d0) main_radioblah_info_pane_t2

0x0003,

0xfbec,	// (0x0006bb46) main_radioblah_info_pane_t_ParamLimits

0xfbec,	// (0x0006bb46) main_radioblah_info_pane_t

0xc735,	// (0x0006868f) main_radioblah_rocker_ctrl_pane_g1

0x8228,	// (0x00064182) main_radioblah_rocker_ctrl_pane_g2

0x8230,	// (0x0006418a) main_radioblah_rocker_ctrl_pane_g3

0x8238,	// (0x00064192) main_radioblah_rocker_ctrl_pane_g4

0x8240,	// (0x0006419a) main_radioblah_rocker_ctrl_pane_g5

0x8248,	// (0x000641a2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbf5,	// (0x0006bb4f) main_radioblah_rocker_ctrl_pane_g

0x797e,	// (0x000638d8) main_cset_text2_pane_t1_copy1_ParamLimits

0xdcc5,	// (0x00069c1f) cam4_image_uncrop_qvga_pane

0xdd2c,	// (0x00069c86) vid4_image_uncrop_qcif_pane

0xde4f,	// (0x00069da9) cam6_image_uncrop_qvga_pane_ParamLimits

0xde4f,	// (0x00069da9) cam6_image_uncrop_qvga_pane

0xe566,	// (0x0006a4c0) vid6_image_uncrop_qcif_pane_ParamLimits

0xe566,	// (0x0006a4c0) vid6_image_uncrop_qcif_pane

0x0c41,	// (0x0005cb9b) bg_popup_preview_window_pane_cp03

0xe7fc,	// (0x0006a756) list_cset_text2_pane

0xe804,	// (0x0006a75e) main_cset6_text2_pane_g1

0xe818,	// (0x0006a772) main_cset6_text2_pane_t1

0x8250,	// (0x000641aa) list_cset_text2_pane_t1_ParamLimits

0x8250,	// (0x000641aa) list_cset_text2_pane_t1

0x0ebb,	// (0x0005ce15) main_radioblah_pane_ParamLimits

0x7fa3,	// (0x00063efd) main_mobtv_info_pane_t3_ParamLimits

0x7fa3,	// (0x00063efd) main_mobtv_info_pane_t3

0x810c,	// (0x00064066) main_radioblah_pane_g1

0x8146,	// (0x000640a0) main_radioblah_info_pane_g1

0x81cd,	// (0x00064127) main_radioblah_info_pane_t3_ParamLimits

0x81cd,	// (0x00064127) main_radioblah_info_pane_t3

0x27dc,	// (0x0005e736) highlight_cell_cale_month_pane_ParamLimits

0x27dc,	// (0x0005e736) highlight_cell_cale_month_pane

0x0c41,	// (0x0005cb9b) main_phob_fisheye_pane

0xca84,	// (0x000689de) scroll_pane_cp0031_ParamLimits

0xca84,	// (0x000689de) scroll_pane_cp0031

0xe674,	// (0x0006a5ce) wait_bar_pane_cp08_ParamLimits

0x7a02,	// (0x0006395c) cset_list_set_pane_copy1_ParamLimits

0xed8e,	// (0x0006ace8) highlight_cell_cale_month_pane_g1

0x826d,	// (0x000641c7) highlight_cell_cale_month_pane_t1

0xe30e,	// (0x0006a268) list_gen_pane_cp01

0xdf89,	// (0x00069ee3) scroll_pane_01

0x827b,	// (0x000641d5) list_single_double_fisheye_pane

0x8284,	// (0x000641de) list_double_fisheye_pane_g1_ParamLimits

0x8284,	// (0x000641de) list_double_fisheye_pane_g1

0x8290,	// (0x000641ea) list_double_fisheye_pane_g2_ParamLimits

0x8290,	// (0x000641ea) list_double_fisheye_pane_g2

0x82a4,	// (0x000641fe) list_double_fisheye_pane_g3_ParamLimits

0x82a4,	// (0x000641fe) list_double_fisheye_pane_g3

0x0004,

0xfc02,	// (0x0006bb5c) list_double_fisheye_pane_g_ParamLimits

0xfc02,	// (0x0006bb5c) list_double_fisheye_pane_g

0x82cd,	// (0x00064227) list_double_fisheye_pane_t1_ParamLimits

0x82cd,	// (0x00064227) list_double_fisheye_pane_t1

0x82e8,	// (0x00064242) list_double_fisheye_pane_t2_ParamLimits

0x82e8,	// (0x00064242) list_double_fisheye_pane_t2

0x0001,

0xfc0d,	// (0x0006bb67) list_double_fisheye_pane_t_ParamLimits

0xfc0d,	// (0x0006bb67) list_double_fisheye_pane_t

0x0c41,	// (0x0005cb9b) main_call5_pane

0x809a,	// (0x00063ff4) sc_swipe_pane_ParamLimits

0x809a,	// (0x00063ff4) sc_swipe_pane

0x831d,	// (0x00064277) call5_image_pane_ParamLimits

0x831d,	// (0x00064277) call5_image_pane

0x833a,	// (0x00064294) call5_swipe_1_pane_ParamLimits

0x833a,	// (0x00064294) call5_swipe_1_pane

0x834d,	// (0x000642a7) call5_swipe_2_pane_ParamLimits

0x834d,	// (0x000642a7) call5_swipe_2_pane

0x8378,	// (0x000642d2) popup_call5_audio_first_window_ParamLimits

0x8378,	// (0x000642d2) popup_call5_audio_first_window

0xc99c,	// (0x000688f6) call5_swipe_1_pane_g1_ParamLimits

0xc99c,	// (0x000688f6) call5_swipe_1_pane_g1

0xed96,	// (0x0006acf0) call5_swipe_1_pane_g2_ParamLimits

0xed96,	// (0x0006acf0) call5_swipe_1_pane_g2

0x0001,

0xfc12,	// (0x0006bb6c) call5_swipe_1_pane_g_ParamLimits

0xfc12,	// (0x0006bb6c) call5_swipe_1_pane_g

0xeda2,	// (0x0006acfc) call5_swipe_1_pane_t1_ParamLimits

0xeda2,	// (0x0006acfc) call5_swipe_1_pane_t1

0xc99c,	// (0x000688f6) call5_swipe_2_pane_g1_ParamLimits

0xc99c,	// (0x000688f6) call5_swipe_2_pane_g1

0xedb7,	// (0x0006ad11) call5_swipe_2_pane_g2_ParamLimits

0xedb7,	// (0x0006ad11) call5_swipe_2_pane_g2

0x0001,

0xfc17,	// (0x0006bb71) call5_swipe_2_pane_g_ParamLimits

0xfc17,	// (0x0006bb71) call5_swipe_2_pane_g

0xedc3,	// (0x0006ad1d) call5_swipe_2_pane_t1_ParamLimits

0xedc3,	// (0x0006ad1d) call5_swipe_2_pane_t1

0xedd8,	// (0x0006ad32) sc_swipe_pane_g1_ParamLimits

0xedd8,	// (0x0006ad32) sc_swipe_pane_g1

0xede5,	// (0x0006ad3f) sc_swipe_pane_g2_ParamLimits

0xede5,	// (0x0006ad3f) sc_swipe_pane_g2

0x0001,

0x08be,	// (0x0005c818) sc_swipe_pane_g_ParamLimits

0x08be,	// (0x0005c818) sc_swipe_pane_g

0xedf1,	// (0x0006ad4b) sc_swipe_pane_t1_ParamLimits

0xedf1,	// (0x0006ad4b) sc_swipe_pane_t1

0x0c41,	// (0x0005cb9b) main_cmail_launcher_pane

0x8389,	// (0x000642e3) aid_size_cell_cmail_l_ParamLimits

0x8389,	// (0x000642e3) aid_size_cell_cmail_l

0x83a3,	// (0x000642fd) grid_cmail_l_pane_ParamLimits

0x83a3,	// (0x000642fd) grid_cmail_l_pane

0x83be,	// (0x00064318) cell_cmail_l_pane_ParamLimits

0x83be,	// (0x00064318) cell_cmail_l_pane

0x83e4,	// (0x0006433e) cell_cmail_l_pane_g1_ParamLimits

0x83e4,	// (0x0006433e) cell_cmail_l_pane_g1

0x83f0,	// (0x0006434a) cell_cmail_l_pane_t1_ParamLimits

0x83f0,	// (0x0006434a) cell_cmail_l_pane_t1

0xee06,	// (0x0006ad60) cell_cmail_l_pane_t2_ParamLimits

0xee06,	// (0x0006ad60) cell_cmail_l_pane_t2

0x0001,

0xfc1c,	// (0x0006bb76) cell_cmail_l_pane_t_ParamLimits

0xfc1c,	// (0x0006bb76) cell_cmail_l_pane_t

0x0ebb,	// (0x0005ce15) grid_highlight_pane_cp018_ParamLimits

0x0ebb,	// (0x0005ce15) grid_highlight_pane_cp018

0x0d75,	// (0x0005cccf) main2_pane_ParamLimits

0x0d75,	// (0x0005cccf) main2_pane

0xa288,	// (0x000661e2) popup_sp_fs_action_menu_bg_pane_g1

0xa290,	// (0x000661ea) popup_sp_fs_action_menu_bg_pane_g2

0xa298,	// (0x000661f2) popup_sp_fs_action_menu_bg_pane_g3

0xa2a0,	// (0x000661fa) popup_sp_fs_action_menu_bg_pane_g4

0xa2a8,	// (0x00066202) popup_sp_fs_action_menu_bg_pane_g5

0xa2b0,	// (0x0006620a) popup_sp_fs_action_menu_bg_pane_g6

0xa2b8,	// (0x00066212) popup_sp_fs_action_menu_bg_pane_g7

0xa2c0,	// (0x0006621a) popup_sp_fs_action_menu_bg_pane_g8

0xa2c8,	// (0x00066222) popup_sp_fs_action_menu_bg_pane_g9

0xa2d0,	// (0x0006622a) popup_sp_fs_action_menu_bg_pane_g10

0xa2d0,	// (0x0006622a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0006b101) popup_sp_fs_action_menu_bg_pane_g

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t3_g3_g1

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_t3_g3_g2

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0006b1b1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0006b1b1) list_medium_line_x2_t3_g3_g

0x1a72,	// (0x0005d9cc) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1a72,	// (0x0005d9cc) list_medium_line_x2_t3_g3_t1

0x1a87,	// (0x0005d9e1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1a87,	// (0x0005d9e1) list_medium_line_x2_t3_g3_t2

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0006b1b8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0006b1b8) list_medium_line_x2_t3_g3_t

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t3_g2_g1

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0006b1bf) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0006b1bf) list_medium_line_x2_t3_g2_g

0x1ab0,	// (0x0005da0a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1ab0,	// (0x0005da0a) list_medium_line_x2_t3_g2_t1

0x1ac6,	// (0x0005da20) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1ac6,	// (0x0005da20) list_medium_line_x2_t3_g2_t2

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0006b1c4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0006b1c4) list_medium_line_x2_t3_g2_t

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t4_g4_g1

0x1ad8,	// (0x0005da32) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1ad8,	// (0x0005da32) list_medium_line_x2_t4_g4_g2

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_t4_g4_g3

0x1ae4,	// (0x0005da3e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ae4,	// (0x0005da3e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0006b1cb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0006b1cb) list_medium_line_x2_t4_g4_g

0x1af0,	// (0x0005da4a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1af0,	// (0x0005da4a) list_medium_line_x2_t4_g4_t1

0x1b0a,	// (0x0005da64) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1b0a,	// (0x0005da64) list_medium_line_x2_t4_g4_t2

0x1b1f,	// (0x0005da79) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1b1f,	// (0x0005da79) list_medium_line_x2_t4_g4_t3

0x1b34,	// (0x0005da8e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1b34,	// (0x0005da8e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0006b1d4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0006b1d4) list_medium_line_x2_t4_g4_t

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t2_g4_g1

0x1ad8,	// (0x0005da32) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1ad8,	// (0x0005da32) list_medium_line_x2_t2_g4_g2

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_t2_g4_g3

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0006b23b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0006b23b) list_medium_line_x2_t2_g4_g

0x27fa,	// (0x0005e754) list_medium_line_x2_t2_g4_t1_ParamLimits

0x27fa,	// (0x0005e754) list_medium_line_x2_t2_g4_t1

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0006b244) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0006b244) list_medium_line_x2_t2_g4_t

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t2_g3_g1

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_t2_g3_g2

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0006b1b1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0006b1b1) list_medium_line_x2_t2_g3_g

0x280f,	// (0x0005e769) list_medium_line_x2_t2_g3_t1_ParamLimits

0x280f,	// (0x0005e769) list_medium_line_x2_t2_g3_t1

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0006b249) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0006b249) list_medium_line_x2_t2_g3_t

0x29ec,	// (0x0005e946) main_sp_fs_list_pane_ParamLimits

0x29ec,	// (0x0005e946) main_sp_fs_list_pane

0x29f8,	// (0x0005e952) sp_fs_scroll_pane_ParamLimits

0x29f8,	// (0x0005e952) sp_fs_scroll_pane

0x2a04,	// (0x0005e95e) list_medium_line_x2_t3_t1

0x2a14,	// (0x0005e96e) list_medium_line_x2_t3_t2

0x2a22,	// (0x0005e97c) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0006b294) list_medium_line_x2_t3_t

0x2a30,	// (0x0005e98a) list_medium_line_x3_t4_t1

0x2a40,	// (0x0005e99a) list_medium_line_x3_t4_t2

0x2a4e,	// (0x0005e9a8) list_medium_line_x3_t4_t3

0x2a22,	// (0x0005e97c) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0006b29b) list_medium_line_x3_t4_t

0x2a5c,	// (0x0005e9b6) list_medium_line_x4_t5_t1

0x2a6c,	// (0x0005e9c6) list_medium_line_x4_t5_t2

0x2a4e,	// (0x0005e9a8) list_medium_line_x4_t5_t3

0x2a7a,	// (0x0005e9d4) list_medium_line_x4_t5_t4

0x2a22,	// (0x0005e97c) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0006b2a4) list_medium_line_x4_t5_t

0x1a4e,	// (0x0005d9a8) list_medium_line_t4_g4_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_t4_g4_g1

0x1ae4,	// (0x0005da3e) list_medium_line_t4_g4_g2_ParamLimits

0x1ae4,	// (0x0005da3e) list_medium_line_t4_g4_g2

0x2a88,	// (0x0005e9e2) list_medium_line_t4_g4_g3_ParamLimits

0x2a88,	// (0x0005e9e2) list_medium_line_t4_g4_g3

0x1a66,	// (0x0005d9c0) list_medium_line_t4_g4_g4_ParamLimits

0x1a66,	// (0x0005d9c0) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0006b2af) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0006b2af) list_medium_line_t4_g4_g

0x2a94,	// (0x0005e9ee) list_medium_line_t4_g4_t1_ParamLimits

0x2a94,	// (0x0005e9ee) list_medium_line_t4_g4_t1

0x2aa9,	// (0x0005ea03) list_medium_line_t4_g4_t2_ParamLimits

0x2aa9,	// (0x0005ea03) list_medium_line_t4_g4_t2

0x2abe,	// (0x0005ea18) list_medium_line_t4_g4_t3_ParamLimits

0x2abe,	// (0x0005ea18) list_medium_line_t4_g4_t3

0x1a9b,	// (0x0005d9f5) list_medium_line_t4_g4_t4_ParamLimits

0x1a9b,	// (0x0005d9f5) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0006b2b8) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0006b2b8) list_medium_line_t4_g4_t

0x2b71,	// (0x0005eacb) chi_dic_find_pane_g1

0x3d19,	// (0x0005fc73) main_tport_pane

0x6cbb,	// (0x00062c15) list_medium_line_plain_t1

0x6d6d,	// (0x00062cc7) list_medium_line_t2_g2_g1_ParamLimits

0x6d6d,	// (0x00062cc7) list_medium_line_t2_g2_g1

0x6d79,	// (0x00062cd3) list_medium_line_t2_g2_g2_ParamLimits

0x6d79,	// (0x00062cd3) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0006b974) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0006b974) list_medium_line_t2_g2_g

0x6d85,	// (0x00062cdf) list_medium_line_t2_g2_t1_ParamLimits

0x6d85,	// (0x00062cdf) list_medium_line_t2_g2_t1

0x6d9f,	// (0x00062cf9) list_medium_line_t2_g2_t2_ParamLimits

0x6d9f,	// (0x00062cf9) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x0006b979) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x0006b979) list_medium_line_t2_g2_t

0x744d,	// (0x000633a7) aid_sp_fs_list_icon_a_sm

0x7455,	// (0x000633af) aid_sp_fs_list_icon_d

0x745d,	// (0x000633b7) aid_sp_fs_text_primary

0xe317,	// (0x0006a271) aid_sp_fs_text_secondary

0xd180,	// (0x000690da) list_medium_line

0xd180,	// (0x000690da) list_medium_line_g2

0xd180,	// (0x000690da) list_medium_line_g3

0xd180,	// (0x000690da) list_medium_line_plain

0xd180,	// (0x000690da) list_medium_line_plain_t2

0xd180,	// (0x000690da) list_medium_line_plain_t3

0xd180,	// (0x000690da) list_medium_line_right_icon

0xd180,	// (0x000690da) list_medium_line_right_iconx2

0xd180,	// (0x000690da) list_medium_line_t2

0xd180,	// (0x000690da) list_medium_line_t2_g2

0xd180,	// (0x000690da) list_medium_line_t2_g3

0xd180,	// (0x000690da) list_medium_line_t2_right_icon

0xd180,	// (0x000690da) list_medium_line_t2_right_iconx2

0xd180,	// (0x000690da) list_medium_line_t3

0xd180,	// (0x000690da) list_medium_line_t3_g2

0xd180,	// (0x000690da) list_medium_line_t3_g3

0xd180,	// (0x000690da) list_medium_line_t3_right_iconx2

0x7466,	// (0x000633c0) list_medium_line_t4_g4

0x746f,	// (0x000633c9) list_medium_line_x2

0x746f,	// (0x000633c9) list_medium_line_x2_t2_g2

0x746f,	// (0x000633c9) list_medium_line_x2_t2_g3

0x746f,	// (0x000633c9) list_medium_line_x2_t2_g4

0x746f,	// (0x000633c9) list_medium_line_x2_t3

0x746f,	// (0x000633c9) list_medium_line_x2_t3_g2

0x746f,	// (0x000633c9) list_medium_line_x2_t3_g3

0x746f,	// (0x000633c9) list_medium_line_x2_t3_g4

0x746f,	// (0x000633c9) list_medium_line_x2_t4_g2

0x746f,	// (0x000633c9) list_medium_line_x2_t4_g4

0x7478,	// (0x000633d2) list_medium_line_x3

0x7478,	// (0x000633d2) list_medium_line_x3_t4

0x7478,	// (0x000633d2) list_medium_line_x3_t4_g4

0x7466,	// (0x000633c0) list_medium_line_x4_t4

0x7466,	// (0x000633c0) list_medium_line_x4_t4_g7

0x7466,	// (0x000633c0) list_medium_line_x4_t5

0x7481,	// (0x000633db) list_single_fs_dyc_pane_ParamLimits

0x7481,	// (0x000633db) list_single_fs_dyc_pane

0x1a4e,	// (0x0005d9a8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x4_t4_g7_g1

0x7bcd,	// (0x00063b27) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7bcd,	// (0x00063b27) list_medium_line_x4_t4_g7_g2

0x7bd9,	// (0x00063b33) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7bd9,	// (0x00063b33) list_medium_line_x4_t4_g7_g3

0x7be8,	// (0x00063b42) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7be8,	// (0x00063b42) list_medium_line_x4_t4_g7_g4

0x7bf4,	// (0x00063b4e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7bf4,	// (0x00063b4e) list_medium_line_x4_t4_g7_g5

0x7c03,	// (0x00063b5d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7c03,	// (0x00063b5d) list_medium_line_x4_t4_g7_g6

0x7c12,	// (0x00063b6c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7c12,	// (0x00063b6c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb84,	// (0x0006bade) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb84,	// (0x0006bade) list_medium_line_x4_t4_g7_g

0x7c1e,	// (0x00063b78) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7c1e,	// (0x00063b78) list_medium_line_x4_t4_g7_t1

0x7c33,	// (0x00063b8d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c33,	// (0x00063b8d) list_medium_line_x4_t4_g7_t2

0x7c48,	// (0x00063ba2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c48,	// (0x00063ba2) list_medium_line_x4_t4_g7_t3

0x7c5d,	// (0x00063bb7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c5d,	// (0x00063bb7) list_medium_line_x4_t4_g7_t4

0x7c6f,	// (0x00063bc9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c6f,	// (0x00063bc9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb93,	// (0x0006baed) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb93,	// (0x0006baed) list_medium_line_x4_t4_g7_t

0x7c81,	// (0x00063bdb) list_single_dyc_row_pane_ParamLimits

0x7c81,	// (0x00063bdb) list_single_dyc_row_pane

0x830a,	// (0x00064264) call5_gesture_pane_ParamLimits

0x830a,	// (0x00064264) call5_gesture_pane

0x8360,	// (0x000642ba) call5_windows_pane_ParamLimits

0x8360,	// (0x000642ba) call5_windows_pane

0x8406,	// (0x00064360) call5_swipe_1_pane_cp_ParamLimits

0x8406,	// (0x00064360) call5_swipe_1_pane_cp

0x8412,	// (0x0006436c) call5_swipe_2_pane_cp_ParamLimits

0x8412,	// (0x0006436c) call5_swipe_2_pane_cp

0xadc4,	// (0x00066d1e) call5_image_pane_cp

0x841e,	// (0x00064378) popup_call5_audio_first_window_cp_ParamLimits

0x841e,	// (0x00064378) popup_call5_audio_first_window_cp

0xedd8,	// (0x0006ad32) call5_swipe_1_pane_g1_cp_ParamLimits

0xedd8,	// (0x0006ad32) call5_swipe_1_pane_g1_cp

0xee18,	// (0x0006ad72) call5_swipe_1_pane_g2_cp

0xedf1,	// (0x0006ad4b) call5_swipe_1_pane_t1_cp_ParamLimits

0xedf1,	// (0x0006ad4b) call5_swipe_1_pane_t1_cp

0xedd8,	// (0x0006ad32) call5_swipe_2_pane_g1_cp_ParamLimits

0xedd8,	// (0x0006ad32) call5_swipe_2_pane_g1_cp

0xee20,	// (0x0006ad7a) call5_swipe_2_pane_g2_cp

0xee28,	// (0x0006ad82) call5_swipe_2_pane_t1_cp_ParamLimits

0xee28,	// (0x0006ad82) call5_swipe_2_pane_t1_cp

0x0ebb,	// (0x0005ce15) main_sp_fs_email_pane

0xee3d,	// (0x0006ad97) main_sp_fs_listscroll_pane_te

0x842a,	// (0x00064384) popup_sp_fs_action_menu_pane_ParamLimits

0x842a,	// (0x00064384) popup_sp_fs_action_menu_pane

0xc735,	// (0x0006868f) bg_sp_fs_ctrlbar_pane_g1

0xee46,	// (0x0006ada0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xee4f,	// (0x0006ada9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xee58,	// (0x0006adb2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc735,	// (0x0006868f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc21,	// (0x0006bb7b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc518,	// (0x00068472) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc518,	// (0x00068472) bg_sp_fs_ctrlbar_ddmenu_pane

0xee61,	// (0x0006adbb) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xee61,	// (0x0006adbb) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xee6d,	// (0x0006adc7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xee6d,	// (0x0006adc7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x08d1,	// (0x0005c82b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x08d1,	// (0x0005c82b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xee79,	// (0x0006add3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xee79,	// (0x0006add3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x846a,	// (0x000643c4) list_medium_line_t2_right_icon_g1

0x8472,	// (0x000643cc) list_medium_line_t2_right_icon_t1

0x8482,	// (0x000643dc) list_medium_line_t2_right_icon_t2

0x0001,

0xfc2a,	// (0x0006bb84) list_medium_line_t2_right_icon_t

0xc22d,	// (0x00068187) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc22d,	// (0x00068187) bg_sp_fs_ctrlbar_pane

0x84df,	// (0x00064439) main_sp_fs_ctrlbar_button_pane_cp01

0x84e9,	// (0x00064443) main_sp_fs_ctrlbar_ddmenu_pane

0xd189,	// (0x000690e3) main_sp_fs_ctrlbar_pane_g1

0xeecb,	// (0x0006ae25) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc2f,	// (0x0006bb89) main_sp_fs_ctrlbar_pane_g

0xeed7,	// (0x0006ae31) main_sp_fs_ctrlbar_pane_t1

0x84f3,	// (0x0006444d) main_sp_fs_ctrlbar_pane

0x8517,	// (0x00064471) main_sp_fs_listscroll_pane_te_cp01

0x8537,	// (0x00064491) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8537,	// (0x00064491) popup_sp_fs_action_menu_pane_cp01

0x0ebb,	// (0x0005ce15) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0ebb,	// (0x0005ce15) bg_sp_fs_highlight_list_pane_cp01

0x8551,	// (0x000644ab) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8551,	// (0x000644ab) sp_fs_action_menu_list_gene_pane_g1

0xeefc,	// (0x0006ae56) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xeefc,	// (0x0006ae56) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc34,	// (0x0006bb8e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc34,	// (0x0006bb8e) sp_fs_action_menu_list_gene_pane_g

0x8560,	// (0x000644ba) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8560,	// (0x000644ba) sp_fs_action_menu_list_gene_pane_t1

0x8578,	// (0x000644d2) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8578,	// (0x000644d2) sp_fs_action_menu_list_gene_pane

0xef09,	// (0x0006ae63) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xef09,	// (0x0006ae63) popup_sp_fs_action_menu_bg_pane

0x8595,	// (0x000644ef) sp_fs_action_menu_list_pane_ParamLimits

0x8595,	// (0x000644ef) sp_fs_action_menu_list_pane

0xef17,	// (0x0006ae71) sp_fs_scroll_pane_cp01_ParamLimits

0xef17,	// (0x0006ae71) sp_fs_scroll_pane_cp01

0x85b3,	// (0x0006450d) list_medium_line_plain_t2_t1

0x85c3,	// (0x0006451d) list_medium_line_plain_t2_t2

0x0001,

0xfc39,	// (0x0006bb93) list_medium_line_plain_t2_t

0x85d3,	// (0x0006452d) list_medium_line_plain_t3_t1

0x85e3,	// (0x0006453d) list_medium_line_plain_t3_t2

0x85f1,	// (0x0006454b) list_medium_line_plain_t3_t3

0x0002,

0xfc3e,	// (0x0006bb98) list_medium_line_plain_t3_t

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t2_g2_g1

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0006b1bf) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0006b1bf) list_medium_line_x2_t2_g2_g

0x2a94,	// (0x0005e9ee) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2a94,	// (0x0005e9ee) list_medium_line_x2_t2_g2_t1

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc45,	// (0x0006bb9f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc45,	// (0x0006bb9f) list_medium_line_x2_t2_g2_t

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t4_g2_g1

0x85ff,	// (0x00064559) list_medium_line_x2_t4_g2_g2_ParamLimits

0x85ff,	// (0x00064559) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc4a,	// (0x0006bba4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc4a,	// (0x0006bba4) list_medium_line_x2_t4_g2_g

0x8611,	// (0x0006456b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8611,	// (0x0006456b) list_medium_line_x2_t4_g2_t1

0x8628,	// (0x00064582) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8628,	// (0x00064582) list_medium_line_x2_t4_g2_t2

0x863d,	// (0x00064597) list_medium_line_x2_t4_g2_t3_ParamLimits

0x863d,	// (0x00064597) list_medium_line_x2_t4_g2_t3

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc4f,	// (0x0006bba9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc4f,	// (0x0006bba9) list_medium_line_x2_t4_g2_t

0x864f,	// (0x000645a9) list_medium_line_t3_right_iconx2_g1

0x846a,	// (0x000643c4) list_medium_line_t3_right_iconx2_g2

0x8657,	// (0x000645b1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc58,	// (0x0006bbb2) list_medium_line_t3_right_iconx2_g

0x8661,	// (0x000645bb) list_medium_line_t3_right_iconx2_t1

0x8671,	// (0x000645cb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc5f,	// (0x0006bbb9) list_medium_line_t3_right_iconx2_t

0x1a4e,	// (0x0005d9a8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x3_t4_g4_g1

0x1a5a,	// (0x0005d9b4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1a5a,	// (0x0005d9b4) list_medium_line_x3_t4_g4_g2

0x1ae4,	// (0x0005da3e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ae4,	// (0x0005da3e) list_medium_line_x3_t4_g4_g3

0x867f,	// (0x000645d9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x867f,	// (0x000645d9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc64,	// (0x0006bbbe) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc64,	// (0x0006bbbe) list_medium_line_x3_t4_g4_g

0x868b,	// (0x000645e5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x868b,	// (0x000645e5) list_medium_line_x3_t4_g4_t1

0x86a2,	// (0x000645fc) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86a2,	// (0x000645fc) list_medium_line_x3_t4_g4_t2

0x2aa9,	// (0x0005ea03) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2aa9,	// (0x0005ea03) list_medium_line_x3_t4_g4_t3

0x86bd,	// (0x00064617) list_medium_line_x3_t4_g4_t4_ParamLimits

0x86bd,	// (0x00064617) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc6d,	// (0x0006bbc7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc6d,	// (0x0006bbc7) list_medium_line_x3_t4_g4_t

0x86da,	// (0x00064634) list_single_dyc_row_text_pane_t1_ParamLimits

0x86da,	// (0x00064634) list_single_dyc_row_text_pane_t1

0x8723,	// (0x0006467d) list_single_dyc_row_text_pane_t2_ParamLimits

0x8723,	// (0x0006467d) list_single_dyc_row_text_pane_t2

0x877d,	// (0x000646d7) list_single_dyc_row_text_pane_t3_ParamLimits

0x877d,	// (0x000646d7) list_single_dyc_row_text_pane_t3

0x0002,

0xfc76,	// (0x0006bbd0) list_single_dyc_row_text_pane_t_ParamLimits

0xfc76,	// (0x0006bbd0) list_single_dyc_row_text_pane_t

0x878f,	// (0x000646e9) list_single_dyc_row_pane_g1_ParamLimits

0x878f,	// (0x000646e9) list_single_dyc_row_pane_g1

0x879b,	// (0x000646f5) list_single_dyc_row_pane_g2_ParamLimits

0x879b,	// (0x000646f5) list_single_dyc_row_pane_g2

0x87a7,	// (0x00064701) list_single_dyc_row_pane_g3_ParamLimits

0x87a7,	// (0x00064701) list_single_dyc_row_pane_g3

0x87b3,	// (0x0006470d) list_single_dyc_row_pane_g4_ParamLimits

0x87b3,	// (0x0006470d) list_single_dyc_row_pane_g4

0x0003,

0xfc7d,	// (0x0006bbd7) list_single_dyc_row_pane_g_ParamLimits

0xfc7d,	// (0x0006bbd7) list_single_dyc_row_pane_g

0x87bf,	// (0x00064719) list_single_dyc_row_text_pane_ParamLimits

0x87bf,	// (0x00064719) list_single_dyc_row_text_pane

0x0c41,	// (0x0005cb9b) bg_sp_fs_scroll_pane

0xef3d,	// (0x0006ae97) thumb_sp_fs_scroll_pane

0x6d6d,	// (0x00062cc7) list_medium_line_g1_ParamLimits

0x6d6d,	// (0x00062cc7) list_medium_line_g1

0x87de,	// (0x00064738) list_medium_line_t1_ParamLimits

0x87de,	// (0x00064738) list_medium_line_t1

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_g1

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_g2_ParamLimits

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_g2

0x0001,

0xfc86,	// (0x0006bbe0) list_medium_line_x2_g_ParamLimits

0xfc86,	// (0x0006bbe0) list_medium_line_x2_g

0x87f3,	// (0x0006474d) list_medium_line_x2_t1_ParamLimits

0x87f3,	// (0x0006474d) list_medium_line_x2_t1

0x1a4e,	// (0x0005d9a8) list_medium_line_x3_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x3_g1

0x1a5a,	// (0x0005d9b4) list_medium_line_x3_g2_ParamLimits

0x1a5a,	// (0x0005d9b4) list_medium_line_x3_g2

0x0001,

0xfc86,	// (0x0006bbe0) list_medium_line_x3_g_ParamLimits

0xfc86,	// (0x0006bbe0) list_medium_line_x3_g

0x87f3,	// (0x0006474d) list_medium_line_x3_t1_ParamLimits

0x87f3,	// (0x0006474d) list_medium_line_x3_t1

0xef46,	// (0x0006aea0) thumb_sp_fs_scroll_pane_g1

0xef4f,	// (0x0006aea9) thumb_sp_fs_scroll_pane_g2

0xef58,	// (0x0006aeb2) thumb_sp_fs_scroll_pane_g3

0x0002,

0x093c,	// (0x0005c896) thumb_sp_fs_scroll_pane_g

0xef46,	// (0x0006aea0) bg_sp_fs_scroll_pane_g1

0xef4f,	// (0x0006aea9) bg_sp_fs_scroll_pane_g2

0xef58,	// (0x0006aeb2) bg_sp_fs_scroll_pane_g3

0x0002,

0x093c,	// (0x0005c896) bg_sp_fs_scroll_pane_g

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1a4e,	// (0x0005d9a8) list_medium_line_x2_t3_g4_g1

0x1ad8,	// (0x0005da32) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1ad8,	// (0x0005da32) list_medium_line_x2_t3_g4_g2

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1a5a,	// (0x0005d9b4) list_medium_line_x2_t3_g4_g3

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1a66,	// (0x0005d9c0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0006b23b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0006b23b) list_medium_line_x2_t3_g4_g

0x8809,	// (0x00064763) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8809,	// (0x00064763) list_medium_line_x2_t3_g4_t1

0x8823,	// (0x0006477d) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8823,	// (0x0006477d) list_medium_line_x2_t3_g4_t2

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1a9b,	// (0x0005d9f5) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc8b,	// (0x0006bbe5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc8b,	// (0x0006bbe5) list_medium_line_x2_t3_g4_t

0x6d6d,	// (0x00062cc7) list_medium_line_g2_g1_ParamLimits

0x6d6d,	// (0x00062cc7) list_medium_line_g2_g1

0x6d79,	// (0x00062cd3) list_medium_line_g2_g2_ParamLimits

0x6d79,	// (0x00062cd3) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0006b974) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0006b974) list_medium_line_g2_g

0x883c,	// (0x00064796) list_medium_line_g2_t1_ParamLimits

0x883c,	// (0x00064796) list_medium_line_g2_t1

0x6d6d,	// (0x00062cc7) list_medium_line_t3_g2_g1_ParamLimits

0x6d6d,	// (0x00062cc7) list_medium_line_t3_g2_g1

0x6d79,	// (0x00062cd3) list_medium_line_t3_g2_g2_ParamLimits

0x6d79,	// (0x00062cd3) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0006b974) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0006b974) list_medium_line_t3_g2_g

0x8851,	// (0x000647ab) list_medium_line_t3_g2_t1_ParamLimits

0x8851,	// (0x000647ab) list_medium_line_t3_g2_t1

0x8868,	// (0x000647c2) list_medium_line_t3_g2_t2_ParamLimits

0x8868,	// (0x000647c2) list_medium_line_t3_g2_t2

0x887d,	// (0x000647d7) list_medium_line_t3_g2_t3_ParamLimits

0x887d,	// (0x000647d7) list_medium_line_t3_g2_t3

0x0002,

0xfc92,	// (0x0006bbec) list_medium_line_t3_g2_t_ParamLimits

0xfc92,	// (0x0006bbec) list_medium_line_t3_g2_t

0x846a,	// (0x000643c4) list_medium_line_right_icon_g1

0x8896,	// (0x000647f0) list_medium_line_right_icon_t1

0x6d6d,	// (0x00062cc7) list_medium_line_t2_g1_ParamLimits

0x6d6d,	// (0x00062cc7) list_medium_line_t2_g1

0x88a4,	// (0x000647fe) list_medium_line_t2_t1_ParamLimits

0x88a4,	// (0x000647fe) list_medium_line_t2_t1

0x88bb,	// (0x00064815) list_medium_line_t2_t2_ParamLimits

0x88bb,	// (0x00064815) list_medium_line_t2_t2

0x0001,

0xfc99,	// (0x0006bbf3) list_medium_line_t2_t_ParamLimits

0xfc99,	// (0x0006bbf3) list_medium_line_t2_t

0x6d6d,	// (0x00062cc7) list_medium_line_t3_g1_ParamLimits

0x6d6d,	// (0x00062cc7) list_medium_line_t3_g1

0x88cf,	// (0x00064829) list_medium_line_t3_t1_ParamLimits

0x88cf,	// (0x00064829) list_medium_line_t3_t1

0x88e6,	// (0x00064840) list_medium_line_t3_t2_ParamLimits

0x88e6,	// (0x00064840) list_medium_line_t3_t2

0x88fb,	// (0x00064855) list_medium_line_t3_t3_ParamLimits

0x88fb,	// (0x00064855) list_medium_line_t3_t3

0x0002,

0xfc9e,	// (0x0006bbf8) list_medium_line_t3_t_ParamLimits

0xfc9e,	// (0x0006bbf8) list_medium_line_t3_t

0x6d6d,	// (0x00062cc7) list_medium_line_g3_g1_ParamLimits

0x6d6d,	// (0x00062cc7) list_medium_line_g3_g1

0x890d,	// (0x00064867) list_medium_line_g3_g2_ParamLimits

0x890d,	// (0x00064867) list_medium_line_g3_g2

0x6d79,	// (0x00062cd3) list_medium_line_g3_g3_ParamLimits

0x6d79,	// (0x00062cd3) list_medium_line_g3_g3

0x0002,

0xfca5,	// (0x0006bbff) list_medium_line_g3_g_ParamLimits

0xfca5,	// (0x0006bbff) list_medium_line_g3_g

0x8919,	// (0x00064873) list_medium_line_g3_t1_ParamLimits

0x8919,	// (0x00064873) list_medium_line_g3_t1

0x6d6d,	// (0x00062cc7) list_medium_line_t2_g3_g1_ParamLimits

0x6d6d,	// (0x00062cc7) list_medium_line_t2_g3_g1

0x890d,	// (0x00064867) list_medium_line_t2_g3_g2_ParamLimits

0x890d,	// (0x00064867) list_medium_line_t2_g3_g2

0x6d79,	// (0x00062cd3) list_medium_line_t2_g3_g3_ParamLimits

0x6d79,	// (0x00062cd3) list_medium_line_t2_g3_g3

0x0002,

0xfca5,	// (0x0006bbff) list_medium_line_t2_g3_g_ParamLimits

0xfca5,	// (0x0006bbff) list_medium_line_t2_g3_g

0x892e,	// (0x00064888) list_medium_line_t2_g3_t1_ParamLimits

0x892e,	// (0x00064888) list_medium_line_t2_g3_t1

0x8948,	// (0x000648a2) list_medium_line_t2_g3_t2_ParamLimits

0x8948,	// (0x000648a2) list_medium_line_t2_g3_t2

0x0001,

0xfcac,	// (0x0006bc06) list_medium_line_t2_g3_t_ParamLimits

0xfcac,	// (0x0006bc06) list_medium_line_t2_g3_t

0x6d6d,	// (0x00062cc7) list_medium_line_t3_g3_g1_ParamLimits

0x6d6d,	// (0x00062cc7) list_medium_line_t3_g3_g1

0x890d,	// (0x00064867) list_medium_line_t3_g3_g2_ParamLimits

0x890d,	// (0x00064867) list_medium_line_t3_g3_g2

0x6d79,	// (0x00062cd3) list_medium_line_t3_g3_g3_ParamLimits

0x6d79,	// (0x00062cd3) list_medium_line_t3_g3_g3

0x0002,

0xfca5,	// (0x0006bbff) list_medium_line_t3_g3_g_ParamLimits

0xfca5,	// (0x0006bbff) list_medium_line_t3_g3_g

0x8963,	// (0x000648bd) list_medium_line_t3_g3_t1_ParamLimits

0x8963,	// (0x000648bd) list_medium_line_t3_g3_t1

0x8977,	// (0x000648d1) list_medium_line_t3_g3_t2_ParamLimits

0x8977,	// (0x000648d1) list_medium_line_t3_g3_t2

0x8989,	// (0x000648e3) list_medium_line_t3_g3_t3_ParamLimits

0x8989,	// (0x000648e3) list_medium_line_t3_g3_t3

0x0002,

0xfcb1,	// (0x0006bc0b) list_medium_line_t3_g3_t_ParamLimits

0xfcb1,	// (0x0006bc0b) list_medium_line_t3_g3_t

0x864f,	// (0x000645a9) list_medium_line_right_iconx2_g1

0x846a,	// (0x000643c4) list_medium_line_right_iconx2_g2

0x0001,

0xfcb8,	// (0x0006bc12) list_medium_line_right_iconx2_g

0x899d,	// (0x000648f7) list_medium_line_right_iconx2_t1

0x864f,	// (0x000645a9) list_medium_line_t2_right_iconx2_g1

0x846a,	// (0x000643c4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcb8,	// (0x0006bc12) list_medium_line_t2_right_iconx2_g

0x89ab,	// (0x00064905) list_medium_line_t2_right_iconx2_t1

0x89bb,	// (0x00064915) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcbd,	// (0x0006bc17) list_medium_line_t2_right_iconx2_t

0x89cd,	// (0x00064927) list_medium_line_x4_t4_t1

0x89db,	// (0x00064935) list_medium_line_x4_t4_t2

0x89eb,	// (0x00064945) list_medium_line_x4_t4_t3

0x89fb,	// (0x00064955) list_medium_line_x4_t4_t4

0x0003,

0xfcc2,	// (0x0006bc1c) list_medium_line_x4_t4_t

0x8a4e,	// (0x000649a8) tport_appsw_pane_ParamLimits

0x8a4e,	// (0x000649a8) tport_appsw_pane

0x8a5f,	// (0x000649b9) tport_contact_pane_ParamLimits

0x8a5f,	// (0x000649b9) tport_contact_pane

0x8a78,	// (0x000649d2) tport_listscroll_pane_ParamLimits

0x8a78,	// (0x000649d2) tport_listscroll_pane

0x8a93,	// (0x000649ed) cell_tport_appsw_pane_ParamLimits

0x8a93,	// (0x000649ed) cell_tport_appsw_pane

0xd172,	// (0x000690cc) tport_appsw_pane_g1_ParamLimits

0xd172,	// (0x000690cc) tport_appsw_pane_g1

0xef61,	// (0x0006aebb) tport_contact_pane_g1

0xef6a,	// (0x0006aec4) tport_contact_pane_t1

0xef78,	// (0x0006aed2) tport_contact_pane_t2

0x0001,

0x0983,	// (0x0005c8dd) tport_contact_pane_t

0xef86,	// (0x0006aee0) list_tport_pane

0xef8f,	// (0x0006aee9) scroll_pane_cp_030

0xefa0,	// (0x0006aefa) cell_tport_appsw_pane_g1

0xefb0,	// (0x0006af0a) cell_tport_appsw_pane_t1

0x0c41,	// (0x0005cb9b) grid_highlight_pane_cp019

0x8ad3,	// (0x00064a2d) list_tport_double_graphic_pane_ParamLimits

0x8ad3,	// (0x00064a2d) list_tport_double_graphic_pane

0x0ebb,	// (0x0005ce15) list_highlight_pane_cp023_ParamLimits

0x0ebb,	// (0x0005ce15) list_highlight_pane_cp023

0x8ae0,	// (0x00064a3a) list_tport_double_graphic_pane_g1_ParamLimits

0x8ae0,	// (0x00064a3a) list_tport_double_graphic_pane_g1

0x8aed,	// (0x00064a47) list_tport_double_graphic_pane_t1_ParamLimits

0x8aed,	// (0x00064a47) list_tport_double_graphic_pane_t1

0x8b02,	// (0x00064a5c) list_tport_double_graphic_pane_t2_ParamLimits

0x8b02,	// (0x00064a5c) list_tport_double_graphic_pane_t2

0x0001,

0xfccb,	// (0x0006bc25) list_tport_double_graphic_pane_t_ParamLimits

0xfccb,	// (0x0006bc25) list_tport_double_graphic_pane_t

0x0c41,	// (0x0005cb9b) main_cale_note_pane

0x64c2,	// (0x0006241c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x64c2,	// (0x0006241c) cell_vitu2_function_top_wide_pane_cp01

0x7fb7,	// (0x00063f11) wait_bar_pane_cp05_ParamLimits

0x0c41,	// (0x0005cb9b) listscroll_cmail_pane

0xefc6,	// (0x0006af20) list_cmail_pane

0x8b1e,	// (0x00064a78) list_cmail_body_pane

0x8b33,	// (0x00064a8d) list_single_cmail_header_caption_pane

0x8b4c,	// (0x00064aa6) list_single_cmail_header_detail_pane_ParamLimits

0x8b4c,	// (0x00064aa6) list_single_cmail_header_detail_pane

0x8b75,	// (0x00064acf) list_single_cmail_header_caption_pane_t1

0x8b85,	// (0x00064adf) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8b85,	// (0x00064adf) list_single_cmail_header_detail_pane_g1

0x8b9d,	// (0x00064af7) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8b9d,	// (0x00064af7) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcd0,	// (0x0006bc2a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcd0,	// (0x0006bc2a) list_single_cmail_header_detail_pane_g

0x8ba9,	// (0x00064b03) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8ba9,	// (0x00064b03) list_single_cmail_header_detail_pane_t1

0x8c01,	// (0x00064b5b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8c01,	// (0x00064b5b) list_single_cmail_header_editor_pane_bg

0xeff3,	// (0x0006af4d) list_cmail_body_pane_g1

0xeffc,	// (0x0006af56) list_cmail_body_pane_t1

0xde6f,	// (0x00069dc9) list_single_cmail_header_editor_pane_bg_g1

0xa6b1,	// (0x0006660b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xde7f,	// (0x00069dd9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xde77,	// (0x00069dd1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe093,	// (0x00069fed) list_single_cmail_header_editor_pane_bg_g1_copy4

0xde9f,	// (0x00069df9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xde8f,	// (0x00069de9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xde97,	// (0x00069df1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa691,	// (0x000665eb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c13,	// (0x00064b6d) calenote_gesture_pane_ParamLimits

0x8c13,	// (0x00064b6d) calenote_gesture_pane

0x8c33,	// (0x00064b8d) calenote_window_pane_ParamLimits

0x8c33,	// (0x00064b8d) calenote_window_pane

0xf00a,	// (0x0006af64) popup_note_window_cp01

0x8c4f,	// (0x00064ba9) calenote_swipe_1_pane_ParamLimits

0x8c4f,	// (0x00064ba9) calenote_swipe_1_pane

0x8412,	// (0x0006436c) calenote_swipe_2_pane_ParamLimits

0x8412,	// (0x0006436c) calenote_swipe_2_pane

0xedd8,	// (0x0006ad32) calenote_swipe_1_pane_g1_ParamLimits

0xedd8,	// (0x0006ad32) calenote_swipe_1_pane_g1

0xede5,	// (0x0006ad3f) calenote_swipe_1_pane_g2_ParamLimits

0xede5,	// (0x0006ad3f) calenote_swipe_1_pane_g2

0x0001,

0x08be,	// (0x0005c818) calenote_swipe_1_pane_g_ParamLimits

0x08be,	// (0x0005c818) calenote_swipe_1_pane_g

0xf01c,	// (0x0006af76) calenote_swipe_1_pane_t1_ParamLimits

0xf01c,	// (0x0006af76) calenote_swipe_1_pane_t1

0xedd8,	// (0x0006ad32) calenote_swipe_2_pane_g1_ParamLimits

0xedd8,	// (0x0006ad32) calenote_swipe_2_pane_g1

0xf03b,	// (0x0006af95) calenote_swipe_2_pane_g2_ParamLimits

0xf03b,	// (0x0006af95) calenote_swipe_2_pane_g2

0x0001,

0x09a0,	// (0x0005c8fa) calenote_swipe_2_pane_g_ParamLimits

0x09a0,	// (0x0005c8fa) calenote_swipe_2_pane_g

0xf047,	// (0x0006afa1) calenote_swipe_2_pane_t1_ParamLimits

0xf047,	// (0x0006afa1) calenote_swipe_2_pane_t1

0x0c41,	// (0x0005cb9b) main_mup_navstr_pane

0x5119,	// (0x00061073) main_mup3_pane_t7_ParamLimits

0x5119,	// (0x00061073) main_mup3_pane_t7

0xdae3,	// (0x00069a3d) main_mp4_pane_g6_ParamLimits

0xdae3,	// (0x00069a3d) main_mp4_pane_g6

0xdc87,	// (0x00069be1) main_image3_pane_t4_ParamLimits

0xdc87,	// (0x00069be1) main_image3_pane_t4

0x8c64,	// (0x00064bbe) popup_navstr_preview_pane_ParamLimits

0x8c64,	// (0x00064bbe) popup_navstr_preview_pane

0x8c78,	// (0x00064bd2) scroll_navstr_pane_ParamLimits

0x8c78,	// (0x00064bd2) scroll_navstr_pane

0x0c41,	// (0x0005cb9b) bg_popup_preview_window_pane_cp04

0xf06e,	// (0x0006afc8) popup_navstr_preview_pane_t1

0x8c8c,	// (0x00064be6) scroll_navstr_pane_g1_ParamLimits

0x8c8c,	// (0x00064be6) scroll_navstr_pane_g1

0x8ca0,	// (0x00064bfa) scroll_navstr_pane_t1_ParamLimits

0x8ca0,	// (0x00064bfa) scroll_navstr_pane_t1

0xf013,	// (0x0006af6d) bg_button_pane_cp014

0xf013,	// (0x0006af6d) bg_button_pane_cp030

0x82b0,	// (0x0006420a) list_double_fisheye_pane_g4_ParamLimits

0x82b0,	// (0x0006420a) list_double_fisheye_pane_g4

0x82bc,	// (0x00064216) list_double_fisheye_pane_g5_ParamLimits

0x82bc,	// (0x00064216) list_double_fisheye_pane_g5

0xefce,	// (0x0006af28) sp_fs_scroll_pane_cp03

0xd189,	// (0x000690e3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xeecb,	// (0x0006ae25) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc2f,	// (0x0006bb89) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xeed7,	// (0x0006ae31) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8b14,	// (0x00064a6e) sp_fs_scroll_pane_cp02

0xa33b,	// (0x00066295) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa33b,	// (0x00066295) popup_sp_fs_calendar_preview_list_single_pane

0x0c41,	// (0x0005cb9b) main_cam6_pano_pane

0x0ebb,	// (0x0005ce15) main_mup3_pane_ParamLimits

0x0c41,	// (0x0005cb9b) main_phacti_pane

0x7e8a,	// (0x00063de4) bg_button_pane_cp11

0x7ea4,	// (0x00063dfe) main_mobtv_info_pane_g2_ParamLimits

0x7ea4,	// (0x00063dfe) main_mobtv_info_pane_g2

0x0001,

0xfbce,	// (0x0006bb28) main_mobtv_info_pane_g_ParamLimits

0xfbce,	// (0x0006bb28) main_mobtv_info_pane_g

0x8081,	// (0x00063fdb) sc_clock_pane_t5_ParamLimits

0x8081,	// (0x00063fdb) sc_clock_pane_t5

0x810c,	// (0x00064066) main_radioblah_pane_g1_ParamLimits

0xed24,	// (0x0006ac7e) main_radioblah_pane_t3_ParamLimits

0xed24,	// (0x0006ac7e) main_radioblah_pane_t3

0xed3c,	// (0x0006ac96) main_radioblah_pane_t4_ParamLimits

0xed3c,	// (0x0006ac96) main_radioblah_pane_t4

0x8134,	// (0x0006408e) main_radioblah_text_pane_ParamLimits

0x8134,	// (0x0006408e) main_radioblah_text_pane

0x8146,	// (0x000640a0) main_radioblah_info_pane_g1_ParamLimits

0x81e1,	// (0x0006413b) main_radioblah_info_pane_t4_ParamLimits

0x81e1,	// (0x0006413b) main_radioblah_info_pane_t4

0x0ebb,	// (0x0005ce15) main_sp_fs_calendar_pane

0x8cb6,	// (0x00064c10) main_phacti_pane_g1

0x8cbe,	// (0x00064c18) phacti_note_pane_ParamLimits

0x8cbe,	// (0x00064c18) phacti_note_pane

0xf085,	// (0x0006afdf) phacti_term_pane_ParamLimits

0xf085,	// (0x0006afdf) phacti_term_pane

0xf09a,	// (0x0006aff4) phacti_note_pane_t1_ParamLimits

0xf09a,	// (0x0006aff4) phacti_note_pane_t1

0x8cd2,	// (0x00064c2c) phacti_term_pane_g1

0x8cda,	// (0x00064c34) phacti_term_pane_t1_ParamLimits

0x8cda,	// (0x00064c34) phacti_term_pane_t1

0xf0b1,	// (0x0006b00b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xf0b9,	// (0x0006b013) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x09aa,	// (0x0005c904) popup_sp_fs_calendar_preview_list_single_pane_g

0xf0c1,	// (0x0006b01b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xf0c1,	// (0x0006b01b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xf0d7,	// (0x0006b031) aid_popup_sp_fs_bg_corner_pane

0xc735,	// (0x0006868f) popup_sp_fs_calendar_preview_bg_pane_g1

0x0c41,	// (0x0005cb9b) popup_sp_fs_calendar_preview_bg_pane

0xf0df,	// (0x0006b039) popup_sp_fs_calendar_preview_list_pane

0x0ebb,	// (0x0005ce15) bg_main_sp_fs_cale_pane_ParamLimits

0x0ebb,	// (0x0005ce15) bg_main_sp_fs_cale_pane

0x8d4b,	// (0x00064ca5) listscroll_cale_mrui_pane_ParamLimits

0x8d4b,	// (0x00064ca5) listscroll_cale_mrui_pane

0x8d5f,	// (0x00064cb9) listscroll_sp_fs_schedule_track_pane

0x8d68,	// (0x00064cc2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8d68,	// (0x00064cc2) main_sp_fs_ctrlbar_pane_cp01

0xd195,	// (0x000690ef) main_sp_fs_ribbon_pane

0xd19d,	// (0x000690f7) popup_sp_fs_cale_preview_window

0x8d79,	// (0x00064cd3) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d79,	// (0x00064cd3) list_single_sp_fs_schedule_track_pane

0x0ebb,	// (0x0005ce15) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0ebb,	// (0x0005ce15) bg_sp_fs_highlight_list_pane_cp03

0x8d8e,	// (0x00064ce8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d8e,	// (0x00064ce8) list_single_sp_fs_schedule_track_pane_g1

0x8d9a,	// (0x00064cf4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d9a,	// (0x00064cf4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfce1,	// (0x0006bc3b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfce1,	// (0x0006bc3b) list_single_sp_fs_schedule_track_pane_g

0x8da6,	// (0x00064d00) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8da6,	// (0x00064d00) list_single_sp_fs_schedule_track_pane_t1

0x8dc0,	// (0x00064d1a) sp_fs_schedule_track_pane_ParamLimits

0x8dc0,	// (0x00064d1a) sp_fs_schedule_track_pane

0xd1af,	// (0x00069109) sp_fs_schedule_track_pane_g1

0xd1b7,	// (0x00069111) sp_fs_schedule_track_pane_g2

0xd1bf,	// (0x00069119) sp_fs_schedule_track_pane_g3

0xd1c7,	// (0x00069121) sp_fs_schedule_track_pane_g4

0xd1cf,	// (0x00069129) sp_fs_schedule_track_pane_g5

0x0004,

0xfce6,	// (0x0006bc40) sp_fs_schedule_track_pane_g

0xde6f,	// (0x00069dc9) bg_sp_fs_schedule_viewer_highlight_g1

0xa6b1,	// (0x0006660b) bg_sp_fs_schedule_viewer_highlight_g2

0xde77,	// (0x00069dd1) bg_sp_fs_schedule_viewer_highlight_g3

0xde7f,	// (0x00069dd9) bg_sp_fs_schedule_viewer_highlight_g4

0xe093,	// (0x00069fed) bg_sp_fs_schedule_viewer_highlight_g5

0xde8f,	// (0x00069de9) bg_sp_fs_schedule_viewer_highlight_g6

0xde97,	// (0x00069df1) bg_sp_fs_schedule_viewer_highlight_g7

0xde9f,	// (0x00069df9) bg_sp_fs_schedule_viewer_highlight_g8

0xa691,	// (0x000665eb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcf1,	// (0x0006bc4b) bg_sp_fs_schedule_viewer_highlight_g

0x0c41,	// (0x0005cb9b) bg_main_sp_fs_ribbon_pane

0x8dd1,	// (0x00064d2b) main_sp_fs_ribbon_pane_g1

0xd1d7,	// (0x00069131) main_sp_fs_ribbon_pane_t1

0x8dda,	// (0x00064d34) main_sp_fs_ribbon_pane_t2

0xd1e6,	// (0x00069140) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd04,	// (0x0006bc5e) main_sp_fs_ribbon_pane_t

0xd1f5,	// (0x0006914f) main_sp_fs_ribbon_scheduler_pane

0xd1fd,	// (0x00069157) bg_main_sp_fs_ribbon_pane_g1

0xd206,	// (0x00069160) bg_main_sp_fs_ribbon_pane_g2

0xd20f,	// (0x00069169) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd0b,	// (0x0006bc65) bg_main_sp_fs_ribbon_pane_g

0xd217,	// (0x00069171) main_sp_fs_ribbon_scheduler_pane_g1

0xd220,	// (0x0006917a) main_sp_fs_ribbon_scheduler_pane_g2

0xd229,	// (0x00069183) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd12,	// (0x0006bc6c) main_sp_fs_ribbon_scheduler_pane_g

0xd232,	// (0x0006918c) list_cale_mrui_pane

0x8de9,	// (0x00064d43) sp_fs_scroll_pane_cp07_ParamLimits

0x8de9,	// (0x00064d43) sp_fs_scroll_pane_cp07

0x8dfd,	// (0x00064d57) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8dfd,	// (0x00064d57) bg_sp_fs_schedule_viewer_highlight

0xd23b,	// (0x00069195) list_single_sp_fs_schedule_track_pane_cp01

0xd243,	// (0x0006919d) list_sp_fs_schedule_track_pane

0xd24b,	// (0x000691a5) sp_fs_scroll_pane_cp06_ParamLimits

0xd24b,	// (0x000691a5) sp_fs_scroll_pane_cp06

0xc735,	// (0x0006868f) bgmain_sp_fs_calendar_pane_g1

0x8e0d,	// (0x00064d67) list_single_cale_mrui_pane_ParamLimits

0x8e0d,	// (0x00064d67) list_single_cale_mrui_pane

0xd25d,	// (0x000691b7) list_single_cale_mrui_row_pane_ParamLimits

0xd25d,	// (0x000691b7) list_single_cale_mrui_row_pane

0xd26a,	// (0x000691c4) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd26a,	// (0x000691c4) list_single_cale_mrui_row_pane_g1

0xd2af,	// (0x00069209) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd2af,	// (0x00069209) list_single_cale_mrui_row_pane_t1

0x8e2f,	// (0x00064d89) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e2f,	// (0x00064d89) list_single_cale_mrui_row_pane_t2

0xd2c1,	// (0x0006921b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd2c1,	// (0x0006921b) list_single_cale_mrui_row_pane_t3

0xd2f0,	// (0x0006924a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd2f0,	// (0x0006924a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd20,	// (0x0006bc7a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd20,	// (0x0006bc7a) list_single_cale_mrui_row_pane_t

0x8e97,	// (0x00064df1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e97,	// (0x00064df1) list_single_cmail_header_editor_pane_bg_cp01

0x8ebd,	// (0x00064e17) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ebd,	// (0x00064e17) list_single_cmail_header_editor_pane_bg_cp02

0x8edd,	// (0x00064e37) main_radioblah_text_pane_t1_ParamLimits

0x8edd,	// (0x00064e37) main_radioblah_text_pane_t1

0xd31f,	// (0x00069279) cam6_indi_pane_cp01

0xd327,	// (0x00069281) cam6_mode_pane_cp01

0xd32f,	// (0x00069289) cam6_pano_pane

0xd338,	// (0x00069292) cam6_zoom_pane_cp01

0xd340,	// (0x0006929a) cam6_pano_image_pane

0xd34b,	// (0x000692a5) cam6_pano_pane_g1

0xea83,	// (0x0006a9dd) cam6_pano_pane_g2

0xd354,	// (0x000692ae) cam6_pano_pane_g3

0xd35d,	// (0x000692b7) cam6_pano_pane_g4

0xccd8,	// (0x00068c32) cam6_pano_pane_g5

0xd366,	// (0x000692c0) cam6_pano_pane_g6

0xd370,	// (0x000692ca) cam6_pano_pane_g7

0xd378,	// (0x000692d2) cam6_pano_pane_g8

0xd381,	// (0x000692db) cam6_pano_pane_g9

0x0008,

0xfd29,	// (0x0006bc83) cam6_pano_pane_g

0x0c41,	// (0x0005cb9b) main_browser_tag_pane

0xf066,	// (0x0006afc0) grid_navstr_albumart_pane

0xd38c,	// (0x000692e6) cell_navstr_albumart_pane_ParamLimits

0xd38c,	// (0x000692e6) cell_navstr_albumart_pane

0xaf45,	// (0x00066e9f) cell_navstr_albumart_pane_g1

0xc042,	// (0x00067f9c) cell_navstr_albumart_pane_g2

0xc052,	// (0x00067fac) cell_navstr_albumart_pane_g3

0xc04a,	// (0x00067fa4) cell_navstr_albumart_pane_g4

0x0003,

0xfd3c,	// (0x0006bc96) cell_navstr_albumart_pane_g

0x8ef8,	// (0x00064e52) bt_list_pane_ParamLimits

0x8ef8,	// (0x00064e52) bt_list_pane

0x8f0d,	// (0x00064e67) bt_list_pane_t1

0x8f1c,	// (0x00064e76) bt_list_pane_t2

0x0001,

0xfd45,	// (0x0006bc9f) bt_list_pane_t

0x0c41,	// (0x0005cb9b) main_cale_prevew_pane

0x8f2b,	// (0x00064e85) popup_cale_preview_window_ParamLimits

0x8f2b,	// (0x00064e85) popup_cale_preview_window

0x0ebb,	// (0x0005ce15) bg_popup_preview_window_pane_cp05_ParamLimits

0x0ebb,	// (0x0005ce15) bg_popup_preview_window_pane_cp05

0xd3ae,	// (0x00069308) list_cale_preview_pane_ParamLimits

0xd3ae,	// (0x00069308) list_cale_preview_pane

0x8f42,	// (0x00064e9c) list_double_cale_preview_pane_ParamLimits

0x8f42,	// (0x00064e9c) list_double_cale_preview_pane

0x8f54,	// (0x00064eae) list_single_cale_preview_pane_ParamLimits

0x8f54,	// (0x00064eae) list_single_cale_preview_pane

0x8f68,	// (0x00064ec2) list_single_cale_preview_pane_g1

0x8f70,	// (0x00064eca) list_single_cale_preview_pane_t1_ParamLimits

0x8f70,	// (0x00064eca) list_single_cale_preview_pane_t1

0x8f85,	// (0x00064edf) list_double_cale_preview_pane_g1

0x8f8d,	// (0x00064ee7) list_double_cale_preview_pane_t1_ParamLimits

0x8f8d,	// (0x00064ee7) list_double_cale_preview_pane_t1

0x8fa2,	// (0x00064efc) list_double_cale_preview_pane_t2_ParamLimits

0x8fa2,	// (0x00064efc) list_double_cale_preview_pane_t2

0x0001,

0xfd4a,	// (0x0006bca4) list_double_cale_preview_pane_t_ParamLimits

0xfd4a,	// (0x0006bca4) list_double_cale_preview_pane_t

0x0c41,	// (0x0005cb9b) main_ezdial_pane

0x0ebb,	// (0x0005ce15) main_sp_fs_email_pane_ParamLimits

0x8494,	// (0x000643ee) cmail_ddmenu_btn01_pane_ParamLimits

0x8494,	// (0x000643ee) cmail_ddmenu_btn01_pane

0x84a7,	// (0x00064401) cmail_ddmenu_btn02_pane_ParamLimits

0x84a7,	// (0x00064401) cmail_ddmenu_btn02_pane

0x84ca,	// (0x00064424) cmail_ddmenu_btn03_pane_ParamLimits

0x84ca,	// (0x00064424) cmail_ddmenu_btn03_pane

0x84f3,	// (0x0006444d) main_sp_fs_ctrlbar_pane_ParamLimits

0x8517,	// (0x00064471) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b1e,	// (0x00064a78) list_cmail_body_pane_ParamLimits

0xefdd,	// (0x0006af37) bg_button_pane_cp12

0xefe6,	// (0x0006af40) list_single_cmail_header_detail_pane_g3_ParamLimits

0xefe6,	// (0x0006af40) list_single_cmail_header_detail_pane_g3

0x8bdb,	// (0x00064b35) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8bdb,	// (0x00064b35) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcd7,	// (0x0006bc31) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcd7,	// (0x0006bc31) list_single_cmail_header_detail_pane_t

0x8cef,	// (0x00064c49) phacti_term_pane_t2_ParamLimits

0x8cef,	// (0x00064c49) phacti_term_pane_t2

0x0001,

0xfcdc,	// (0x0006bc36) phacti_term_pane_t_ParamLimits

0xfcdc,	// (0x0006bc36) phacti_term_pane_t

0xd3ba,	// (0x00069314) aid_size_list_single_double

0x8fba,	// (0x00064f14) popup_ezdial_listscroll_window

0x8fd6,	// (0x00064f30) popup_number_entry_window_cp01

0xadc4,	// (0x00066d1e) bg_popup_call_pane_cp09

0xd3c6,	// (0x00069320) ezdial_list_pane

0xd3ce,	// (0x00069328) scroll_pane_cp23

0xc22d,	// (0x00068187) bg_button_pane_cp028_ParamLimits

0xc22d,	// (0x00068187) bg_button_pane_cp028

0x8fe4,	// (0x00064f3e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fe4,	// (0x00064f3e) cmail_ddmenu_btn01_pane_g1

0x8ff3,	// (0x00064f4d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ff3,	// (0x00064f4d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd4f,	// (0x0006bca9) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd4f,	// (0x0006bca9) cmail_ddmenu_btn01_pane_g

0xd3d6,	// (0x00069330) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd3d6,	// (0x00069330) cmail_ddmenu_btn01_pane_t1

0xc22d,	// (0x00068187) bg_button_pane_cp029_ParamLimits

0xc22d,	// (0x00068187) bg_button_pane_cp029

0x9003,	// (0x00064f5d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9003,	// (0x00064f5d) cmail_ddmenu_btn02_pane_g1

0x901e,	// (0x00064f78) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x901e,	// (0x00064f78) cmail_ddmenu_btn02_pane_t1

0x0ebb,	// (0x0005ce15) bg_button_pane_cp031_ParamLimits

0x0ebb,	// (0x0005ce15) bg_button_pane_cp031

0x9003,	// (0x00064f5d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9003,	// (0x00064f5d) cmail_ddmenu_btn03_pane_g1

0x901e,	// (0x00064f78) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x901e,	// (0x00064f78) cmail_ddmenu_btn03_pane_t1

0x5cd6,	// (0x00061c30) cell_dialer2_keypad_pane_t1_ParamLimits

0x5cf0,	// (0x00061c4a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5cf0,	// (0x00061c4a) cell_dialer2_keypad_pane_t1_copy1

0x7cfe,	// (0x00063c58) ncimui_group_button_pane

0x0ebb,	// (0x0005ce15) main_sp_fs_calendar_pane_ParamLimits

0x8b33,	// (0x00064a8d) list_single_cmail_header_caption_pane_ParamLimits

0xe317,	// (0x0006a271) aid_recal_txt_sm_pane

0x0c41,	// (0x0005cb9b) mian_recal_day_pane

0xd19d,	// (0x000690f7) popup_sp_fs_cale_preview_window_ParamLimits

0x0c41,	// (0x0005cb9b) list_recal_day_pane

0xd405,	// (0x0006935f) list_single_recal_day_pane_ParamLimits

0xd405,	// (0x0006935f) list_single_recal_day_pane

0xd417,	// (0x00069371) list_single_recal_day_pane_g1_ParamLimits

0xd417,	// (0x00069371) list_single_recal_day_pane_g1

0xd423,	// (0x0006937d) list_single_recal_day_pane_g2_ParamLimits

0xd423,	// (0x0006937d) list_single_recal_day_pane_g2

0xd433,	// (0x0006938d) list_single_recal_day_pane_g3_ParamLimits

0xd433,	// (0x0006938d) list_single_recal_day_pane_g3

0x9045,	// (0x00064f9f) list_single_recal_day_pane_g4_ParamLimits

0x9045,	// (0x00064f9f) list_single_recal_day_pane_g4

0xd43f,	// (0x00069399) list_single_recal_day_pane_g5_ParamLimits

0xd43f,	// (0x00069399) list_single_recal_day_pane_g5

0xd44f,	// (0x000693a9) list_single_recal_day_pane_g6_ParamLimits

0xd44f,	// (0x000693a9) list_single_recal_day_pane_g6

0x0004,

0xfd5e,	// (0x0006bcb8) list_single_recal_day_pane_g_ParamLimits

0xfd5e,	// (0x0006bcb8) list_single_recal_day_pane_g

0xd466,	// (0x000693c0) list_single_recal_day_pane_t1

0xd478,	// (0x000693d2) list_single_recal_day_pane_t2

0x0001,

0xfd69,	// (0x0006bcc3) list_single_recal_day_pane_t

0x9065,	// (0x00064fbf) ncimui_query_button_pane_ParamLimits

0x9065,	// (0x00064fbf) ncimui_query_button_pane

0x9075,	// (0x00064fcf) ncimui_query_button_pane_t1_ParamLimits

0x9075,	// (0x00064fcf) ncimui_query_button_pane_t1

0xd48d,	// (0x000693e7) ncimui_query_button_pane_t2_ParamLimits

0xd48d,	// (0x000693e7) ncimui_query_button_pane_t2

0x0001,

0xfd6e,	// (0x0006bcc8) ncimui_query_button_pane_t_ParamLimits

0xfd6e,	// (0x0006bcc8) ncimui_query_button_pane_t

0x9088,	// (0x00064fe2) query_button_pane_ParamLimits

0x9088,	// (0x00064fe2) query_button_pane

0x0c41,	// (0x0005cb9b) bg_button_pane_cp0028

0xd4a0,	// (0x000693fa) query_button_pane_t1

0x3d19,	// (0x0005fc73) main_tport_pane_ParamLimits

0x8a0b,	// (0x00064965) bg_popup_window_pane_cp01_ParamLimits

0x8a0b,	// (0x00064965) bg_popup_window_pane_cp01

0x8a25,	// (0x0006497f) heading_pane_cp08_ParamLimits

0x8a25,	// (0x0006497f) heading_pane_cp08

0x8a39,	// (0x00064993) heading_pane_cp07_ParamLimits

0x8a39,	// (0x00064993) heading_pane_cp07

0xefa0,	// (0x0006aefa) cell_tport_appsw_pane_g2

0x0002,

0x0988,	// (0x0005c8e2) cell_tport_appsw_pane_g

0x32c0,	// (0x0005f21a) input_candi_list_open_g1

0xa87a,	// (0x000667d4) list_cale_time_pane_g6_ParamLimits

0xa87a,	// (0x000667d4) list_cale_time_pane_g6

0x4ae2,	// (0x00060a3c) aid_size_touch_calib_1_ParamLimits

0x4ae2,	// (0x00060a3c) aid_size_touch_calib_1

0x4aee,	// (0x00060a48) aid_size_touch_calib_2_ParamLimits

0x4aee,	// (0x00060a48) aid_size_touch_calib_2

0x4b04,	// (0x00060a5e) aid_size_touch_calib_3_ParamLimits

0x4b04,	// (0x00060a5e) aid_size_touch_calib_3

0x4b22,	// (0x00060a7c) aid_size_touch_calib_4_ParamLimits

0x4b22,	// (0x00060a7c) aid_size_touch_calib_4

0x4b38,	// (0x00060a92) main_touch_calib_button_group_pane_ParamLimits

0x4b38,	// (0x00060a92) main_touch_calib_button_group_pane

0x4b50,	// (0x00060aaa) main_touch_calib_pane_g1_ParamLimits

0x4b5c,	// (0x00060ab6) main_touch_calib_pane_g2_ParamLimits

0x4b68,	// (0x00060ac2) main_touch_calib_pane_g3_ParamLimits

0x4b74,	// (0x00060ace) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0006b6ca) main_touch_calib_pane_g_ParamLimits

0x4b80,	// (0x00060ada) main_touch_calib_pane_t1_ParamLimits

0x4b9a,	// (0x00060af4) main_touch_calib_pane_t2_ParamLimits

0x4bb4,	// (0x00060b0e) main_touch_calib_pane_t3_ParamLimits

0x4bc8,	// (0x00060b22) main_touch_calib_pane_t4_ParamLimits

0x4bdc,	// (0x00060b36) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0006b6d3) main_touch_calib_pane_t_ParamLimits

0xcaa8,	// (0x00068a02) list_single_fp_cale_pane_g3_ParamLimits

0xcaa8,	// (0x00068a02) list_single_fp_cale_pane_g3

0xdd4a,	// (0x00069ca4) bg_button_pane_cp012_ParamLimits

0xdd4a,	// (0x00069ca4) bg_vkb2_func_pane_cp03_ParamLimits

0x6d23,	// (0x00062c7d) cell_vitu2_function_top_pane_g1_ParamLimits

0xdd4a,	// (0x00069ca4) bg_vkb2_func_pane_cp04_ParamLimits

0x7c9e,	// (0x00063bf8) main_ncimui_button_group_pane_ParamLimits

0x7c9e,	// (0x00063bf8) main_ncimui_button_group_pane

0x7cec,	// (0x00063c46) main_ncimui_pane_t3_ParamLimits

0x7cec,	// (0x00063c46) main_ncimui_pane_t3

0xf07c,	// (0x0006afd6) phacti_button_group_pane

0xd3ba,	// (0x00069314) aid_size_list_single_double_ParamLimits

0x8fba,	// (0x00064f14) popup_ezdial_listscroll_window_ParamLimits

0x8fd6,	// (0x00064f30) popup_number_entry_window_cp01_ParamLimits

0x909b,	// (0x00064ff5) phacti_button_pane_ParamLimits

0x909b,	// (0x00064ff5) phacti_button_pane

0x0c41,	// (0x0005cb9b) bg_button_pane_cp14

0xd4ae,	// (0x00069408) phacti_button_pane_t1

0x90ac,	// (0x00065006) main_touch_calib_button_pane_ParamLimits

0x90ac,	// (0x00065006) main_touch_calib_button_pane

0xa1af,	// (0x00066109) bg_button_pane_cp18_ParamLimits

0xa1af,	// (0x00066109) bg_button_pane_cp18

0xd4bc,	// (0x00069416) main_touch_calib_button_pane_t1_ParamLimits

0xd4bc,	// (0x00069416) main_touch_calib_button_pane_t1

0xd4d2,	// (0x0006942c) main_touch_calib_button_pane_t2_ParamLimits

0xd4d2,	// (0x0006942c) main_touch_calib_button_pane_t2

0x0001,

0xfd73,	// (0x0006bccd) main_touch_calib_button_pane_t_ParamLimits

0xfd73,	// (0x0006bccd) main_touch_calib_button_pane_t

0x0c41,	// (0x0005cb9b) cell_ncimui_button_pane

0x0c41,	// (0x0005cb9b) bg_button_pane_cp032

0xd4f0,	// (0x0006944a) cell_ncimui_button_pane_t1

0xdc67,	// (0x00069bc1) image3_infobar_pane_ParamLimits

0xdc67,	// (0x00069bc1) image3_infobar_pane

0x80ad,	// (0x00064007) fs_bigclock_status_pane_ParamLimits

0x80ad,	// (0x00064007) fs_bigclock_status_pane

0x80ba,	// (0x00064014) main_fs_bigclock_clock_pane_ParamLimits

0x80ba,	// (0x00064014) main_fs_bigclock_clock_pane

0x80ce,	// (0x00064028) main_fs_bigclock_indi_pane_ParamLimits

0x80ce,	// (0x00064028) main_fs_bigclock_indi_pane

0x80e6,	// (0x00064040) main_fs_bigclock_swipe_pane_ParamLimits

0x80e6,	// (0x00064040) main_fs_bigclock_swipe_pane

0x0c41,	// (0x0005cb9b) main_fs_clock_dumped_data

0xeb90,	// (0x0006aaea) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xeb90,	// (0x0006aaea) list_single_fs_bigclock_indicator_pane_g1

0xebb9,	// (0x0006ab13) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xebb9,	// (0x0006ab13) list_single_fs_bigclock_indicator_pane_g2

0xebd3,	// (0x0006ab2d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xebd3,	// (0x0006ab2d) list_single_fs_bigclock_indicator_pane_g3

0xebed,	// (0x0006ab47) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xebed,	// (0x0006ab47) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x086f,	// (0x0005c7c9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x086f,	// (0x0005c7c9) list_single_fs_bigclock_indicator_pane_g

0xec16,	// (0x0006ab70) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xec16,	// (0x0006ab70) list_single_fs_bigclock_indicator_pane_t1

0xec3e,	// (0x0006ab98) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xec3e,	// (0x0006ab98) list_single_fs_bigclock_indicator_pane_t2

0xec66,	// (0x0006abc0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xec66,	// (0x0006abc0) list_single_fs_bigclock_indicator_pane_t3

0xec8e,	// (0x0006abe8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xec8e,	// (0x0006abe8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x087a,	// (0x0005c7d4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x087a,	// (0x0005c7d4) list_single_fs_bigclock_indicator_pane_t

0xd4fe,	// (0x00069458) image3_infobar_fav_pane_ParamLimits

0xd4fe,	// (0x00069458) image3_infobar_fav_pane

0xd50e,	// (0x00069468) image3_infobar_loc_pane_ParamLimits

0xd50e,	// (0x00069468) image3_infobar_loc_pane

0xd522,	// (0x0006947c) image3_infobar_time_pane_ParamLimits

0xd522,	// (0x0006947c) image3_infobar_time_pane

0xc735,	// (0x0006868f) image3_infobar_time_pane_g1

0xd532,	// (0x0006948c) image3_infobar_time_pane_t1

0xc735,	// (0x0006868f) image3_infobar_loc_pane_g1

0xd540,	// (0x0006949a) image3_infobar_loc_pane_g2

0x0001,

0xfd78,	// (0x0006bcd2) image3_infobar_loc_pane_g

0xd548,	// (0x000694a2) image3_infobar_loc_pane_t1

0xc735,	// (0x0006868f) image3_infobar_fav_pane_g1

0xd556,	// (0x000694b0) image3_infobar_fav_pane_g2

0x0001,

0xfd7d,	// (0x0006bcd7) image3_infobar_fav_pane_g

0xd55e,	// (0x000694b8) fs_bigclock_status_battery_pane

0xd567,	// (0x000694c1) fs_bigclock_status_signal_pane

0xd570,	// (0x000694ca) fs_bigclock_status_title_pane

0xd579,	// (0x000694d3) fs_bigclock_status_signal_pane_g1

0xd582,	// (0x000694dc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd82,	// (0x0006bcdc) fs_bigclock_status_signal_pane_g

0xd58a,	// (0x000694e4) fs_bigclock_status_battery_pane_g1

0xd593,	// (0x000694ed) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd87,	// (0x0006bce1) fs_bigclock_status_battery_pane_g

0xd59b,	// (0x000694f5) fs_bigclock_status_title_pane_t1

0xc735,	// (0x0006868f) main_fs_bigclock_clock_pane_g1

0xd5a9,	// (0x00069503) main_fs_bigclock_clock_pane_g2

0xd5a9,	// (0x00069503) main_fs_bigclock_clock_pane_g3

0xd5a9,	// (0x00069503) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd8c,	// (0x0006bce6) main_fs_bigclock_clock_pane_g

0xd5b1,	// (0x0006950b) main_fs_bigclock_clock_pane_t1

0xd5bf,	// (0x00069519) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd95,	// (0x0006bcef) main_fs_bigclock_clock_pane_t

0xd5ce,	// (0x00069528) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd5ce,	// (0x00069528) list_single_fs_bigclock_indicator_pane

0x90c1,	// (0x0006501b) list_single_fs_bigclock_pane_ParamLimits

0x90c1,	// (0x0006501b) list_single_fs_bigclock_pane

0xd5e8,	// (0x00069542) main_fs_bigclock_indicator_pane_t1

0xd5f7,	// (0x00069551) list_single_fs_bigclock_pane_g1

0xd5ff,	// (0x00069559) list_single_fs_bigclock_pane_t1

0xc735,	// (0x0006868f) main_fs_bigclock_swipe_pane_g1

0xd642,	// (0x0006959c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfda6,	// (0x0006bd00) main_fs_bigclock_swipe_pane_g

0xd64a,	// (0x000695a4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd64a,	// (0x000695a4) main_fs_bigclock_swipe_pane_t1

0x2ad3,	// (0x0005ea2d) call_type_pane_ParamLimits

0x0c41,	// (0x0005cb9b) main_btmg_pane

0xd296,	// (0x000691f0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd296,	// (0x000691f0) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd19,	// (0x0006bc73) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd19,	// (0x0006bc73) list_single_cale_mrui_row_pane_g

0xd3f5,	// (0x0006934f) list_recal_vselct_arw_lo_pane

0xd3fd,	// (0x00069357) list_recal_vselct_arw_up_pane

0x745d,	// (0x000633b7) list_recal_vselct_pane

0xd667,	// (0x000695c1) btmg_button_pane

0x9127,	// (0x00065081) main_btmg_pane_g1

0x0c41,	// (0x0005cb9b) bg_button_pane_cp044

0xd671,	// (0x000695cb) btmg_button_pane_t1

0xc225,	// (0x0006817f) aid_listscroll_gen

0x0ebb,	// (0x0005ce15) main_cntbar_detail_pane

0xefbe,	// (0x0006af18) list_cmail_folder_pane

0xefce,	// (0x0006af28) sp_fs_scroll_pane_cp03_ParamLimits

0x9131,	// (0x0006508b) list_single_fs_dyc_pane_cp01_ParamLimits

0x9131,	// (0x0006508b) list_single_fs_dyc_pane_cp01

0xd67f,	// (0x000695d9) aid_size_cmail_indent

0xd688,	// (0x000695e2) list_single_dyc_row_pane_cp01

0x9176,	// (0x000650d0) cntbar_detail_list_pane_ParamLimits

0x9176,	// (0x000650d0) cntbar_detail_list_pane

0x91c2,	// (0x0006511c) main_cntbar_detail_cont_pane_ParamLimits

0x91c2,	// (0x0006511c) main_cntbar_detail_cont_pane

0x29f8,	// (0x0005e952) scroll_pane_cp032_ParamLimits

0x29f8,	// (0x0005e952) scroll_pane_cp032

0x91d6,	// (0x00065130) cntbar_detail_list_event_pane_ParamLimits

0x91d6,	// (0x00065130) cntbar_detail_list_event_pane

0x9186,	// (0x000650e0) cntbar_detail_list_shct_pane

0xa6ff,	// (0x00066659) aid_list_gen

0xd691,	// (0x000695eb) aid_scroll

0xd69a,	// (0x000695f4) aid_size_touch_scroll_bar

0xd6a3,	// (0x000695fd) aid_list_double

0xd6ac,	// (0x00069606) aid_list_single

0xd6b5,	// (0x0006960f) aid_list_single_lg

0xd6be,	// (0x00069618) aid_list_z_g_a_sm

0xd6c6,	// (0x00069620) aid_list_z_g_d

0xd6ce,	// (0x00069628) aid_txt_z_prm

0x91e6,	// (0x00065140) aid_txt_z_prm_cp01

0x91f4,	// (0x0006514e) aid_txt_z_sec

0x9202,	// (0x0006515c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9202,	// (0x0006515c) main_cntbar_detail_cont_pane_g1

0x9216,	// (0x00065170) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9216,	// (0x00065170) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdab,	// (0x0006bd05) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdab,	// (0x0006bd05) main_cntbar_detail_cont_pane_g

0xd6dc,	// (0x00069636) main_cntbar_detail_cont_pane_t1

0xd6ea,	// (0x00069644) main_cntbar_detail_cont_pane_t2

0xd6f8,	// (0x00069652) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdb0,	// (0x0006bd0a) main_cntbar_detail_cont_pane_t

0x9226,	// (0x00065180) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9226,	// (0x00065180) cell_cntbar_detail_list_shct_pane

0xd706,	// (0x00069660) cntbar_detail_list_shct_pane_g1

0xd70f,	// (0x00069669) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdb7,	// (0x0006bd11) cntbar_detail_list_shct_pane_g

0x923a,	// (0x00065194) cntbar_detail_list_event_pane_g1_ParamLimits

0x923a,	// (0x00065194) cntbar_detail_list_event_pane_g1

0x9246,	// (0x000651a0) cntbar_detail_list_event_pane_g2_ParamLimits

0x9246,	// (0x000651a0) cntbar_detail_list_event_pane_g2

0x0005,

0xfdbc,	// (0x0006bd16) cntbar_detail_list_event_pane_g_ParamLimits

0xfdbc,	// (0x0006bd16) cntbar_detail_list_event_pane_g

0x92b2,	// (0x0006520c) cntbar_detail_list_event_pane_t1_ParamLimits

0x92b2,	// (0x0006520c) cntbar_detail_list_event_pane_t1

0x92c7,	// (0x00065221) cntbar_detail_list_event_pane_t2_ParamLimits

0x92c7,	// (0x00065221) cntbar_detail_list_event_pane_t2

0x0002,

0xfdc9,	// (0x0006bd23) cntbar_detail_list_event_pane_t_ParamLimits

0xfdc9,	// (0x0006bd23) cntbar_detail_list_event_pane_t

0xc735,	// (0x0006868f) cell_cntbar_detail_list_shct_pane_g1

0x2e3a,	// (0x0005ed94) navi_pane_mv_g3

0x0ebb,	// (0x0005ce15) main_cntbar_detail_pane_ParamLimits

0x0c41,	// (0x0005cb9b) main_notif_wgt_pane

0xda7d,	// (0x000699d7) aid_tch_main_mp4_pane_g4

0xdc5f,	// (0x00069bb9) popup_slider_window_cp02

0xd3eb,	// (0x00069345) list_recal_day_event_pane

0x914a,	// (0x000650a4) cntbar_detail_btn_pane_ParamLimits

0x914a,	// (0x000650a4) cntbar_detail_btn_pane

0x9160,	// (0x000650ba) cntbar_detail_btn_pane_cp01_ParamLimits

0x9160,	// (0x000650ba) cntbar_detail_btn_pane_cp01

0x9186,	// (0x000650e0) cntbar_detail_list_shct_pane_ParamLimits

0x9196,	// (0x000650f0) cntbar_detail_pane_g1_ParamLimits

0x9196,	// (0x000650f0) cntbar_detail_pane_g1

0x91a6,	// (0x00065100) cntbar_detail_pane_t1_ParamLimits

0x91a6,	// (0x00065100) cntbar_detail_pane_t1

0x9252,	// (0x000651ac) cntbar_detail_list_event_pane_g3_ParamLimits

0x9252,	// (0x000651ac) cntbar_detail_list_event_pane_g3

0x926a,	// (0x000651c4) cntbar_detail_list_event_pane_g4_ParamLimits

0x926a,	// (0x000651c4) cntbar_detail_list_event_pane_g4

0x9282,	// (0x000651dc) cntbar_detail_list_event_pane_g5_ParamLimits

0x9282,	// (0x000651dc) cntbar_detail_list_event_pane_g5

0x929a,	// (0x000651f4) cntbar_detail_list_event_pane_g6_ParamLimits

0x929a,	// (0x000651f4) cntbar_detail_list_event_pane_g6

0x92dc,	// (0x00065236) cntbar_detail_list_event_pane_t3_ParamLimits

0x92dc,	// (0x00065236) cntbar_detail_list_event_pane_t3

0x92ee,	// (0x00065248) popup_notif_wgt_window_ParamLimits

0x92ee,	// (0x00065248) popup_notif_wgt_window

0x9307,	// (0x00065261) popup_submenu_window_cp01_ParamLimits

0x9307,	// (0x00065261) popup_submenu_window_cp01

0xadc4,	// (0x00066d1e) bg_popup_window_pane_cp10

0xd718,	// (0x00069672) listscroll_notif_wgt_pane

0xd722,	// (0x0006967c) list_notif_wgt_window

0xd72b,	// (0x00069685) scroll_pane_cp033

0xd734,	// (0x0006968e) list_notif_wgt_row_pane_ParamLimits

0xd734,	// (0x0006968e) list_notif_wgt_row_pane

0xd748,	// (0x000696a2) aid_size_list_notif_wgt_del

0xd751,	// (0x000696ab) list_notif_wgt_row_pane_g1

0xd759,	// (0x000696b3) list_notif_wgt_row_pane_g2

0xd761,	// (0x000696bb) list_notif_wgt_row_pane_g3

0x0002,

0xfdd0,	// (0x0006bd2a) list_notif_wgt_row_pane_g

0xd76a,	// (0x000696c4) list_notif_wgt_row_pane_t1

0xd778,	// (0x000696d2) list_notif_wgt_row_pane_t2

0xd786,	// (0x000696e0) list_notif_wgt_row_pane_t3

0x0002,

0xfdd7,	// (0x0006bd31) list_notif_wgt_row_pane_t

0xe0ad,	// (0x0006a007) list_recal_day_event_pane_g1

0xd794,	// (0x000696ee) list_recal_day_event_pane_t1

0x0c41,	// (0x0005cb9b) bg_button_pane_cp045

0xd7a3,	// (0x000696fd) cntbar_detail_btn_pane_t1

0xc22d,	// (0x00068187) main_callh_pane_ParamLimits

0xc22d,	// (0x00068187) main_callh_pane

0x0c41,	// (0x0005cb9b) main_coverflow0_pane

0x0c41,	// (0x0005cb9b) main_wgtman_pane

0x80f4,	// (0x0006404e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x80f4,	// (0x0006404e) main_fs_bigclock_unlock_btn_pane

0xef98,	// (0x0006aef2) bg_button_pane_cp16

0xefa8,	// (0x0006af02) cell_tport_appsw_pane_g3

0x9319,	// (0x00065273) cf0_flow_pane_ParamLimits

0x9319,	// (0x00065273) cf0_flow_pane

0xd7b1,	// (0x0006970b) listscroll_cf0_pane

0xd7ba,	// (0x00069714) main_cf0_pane_g1

0x932e,	// (0x00065288) main_cf0_pane_t1_ParamLimits

0x932e,	// (0x00065288) main_cf0_pane_t1

0x9345,	// (0x0006529f) main_cf0_pane_t2_ParamLimits

0x9345,	// (0x0006529f) main_cf0_pane_t2

0x0001,

0xfdde,	// (0x0006bd38) main_cf0_pane_t_ParamLimits

0xfdde,	// (0x0006bd38) main_cf0_pane_t

0xd7c4,	// (0x0006971e) scroll_pane_cp11

0x935c,	// (0x000652b6) cf0_flow_pane_g1

0x9364,	// (0x000652be) cf0_flow_pane_g2

0x0001,

0xfde3,	// (0x0006bd3d) cf0_flow_pane_g

0x936c,	// (0x000652c6) cf0_flow_pane_t1

0x0c41,	// (0x0005cb9b) main_call6_pane

0x0c41,	// (0x0005cb9b) main_calllock_pane

0x937a,	// (0x000652d4) call6_btn_grp_pane_ParamLimits

0x937a,	// (0x000652d4) call6_btn_grp_pane

0x9394,	// (0x000652ee) call6_pane_g1_ParamLimits

0x9394,	// (0x000652ee) call6_pane_g1

0x93a9,	// (0x00065303) popup_call6_1st_window_ParamLimits

0x93a9,	// (0x00065303) popup_call6_1st_window

0x93ba,	// (0x00065314) popup_call6_2nd_window_ParamLimits

0x93ba,	// (0x00065314) popup_call6_2nd_window

0x93cb,	// (0x00065325) cell_call6_btn_pane_ParamLimits

0x93cb,	// (0x00065325) cell_call6_btn_pane

0xadc4,	// (0x00066d1e) bg_popup_call2_in_pane_cp03

0xd7cf,	// (0x00069729) popup_call6_1st_window_g1

0xd7d7,	// (0x00069731) popup_call6_1st_window_g2

0xd7df,	// (0x00069739) popup_call6_1st_window_g3

0x0002,

0xfde8,	// (0x0006bd42) popup_call6_1st_window_g

0xd7e7,	// (0x00069741) popup_call6_1st_window_t1

0xd7f6,	// (0x00069750) popup_call6_1st_window_t2

0xd806,	// (0x00069760) popup_call6_1st_window_t3

0x0002,

0xfdef,	// (0x0006bd49) popup_call6_1st_window_t

0xadc4,	// (0x00066d1e) bg_popup_call2_in_pane_cp04

0xd7cf,	// (0x00069729) popup_call6_2nd_window_g1

0xd7d7,	// (0x00069731) popup_call6_2nd_window_g2

0xd7df,	// (0x00069739) popup_call6_2nd_window_g3

0x0002,

0xfde8,	// (0x0006bd42) popup_call6_2nd_window_g

0xd7e7,	// (0x00069741) popup_call6_2nd_window_t1

0x0c41,	// (0x0005cb9b) bg_button_pane_cp15

0xd816,	// (0x00069770) cell_call6_btn_pane_g1

0xd81f,	// (0x00069779) cell_call6_btn_pane_t1

0x93df,	// (0x00065339) listscroll_wgtman_pane_ParamLimits

0x93df,	// (0x00065339) listscroll_wgtman_pane

0x9402,	// (0x0006535c) wgtman_btn_pane_ParamLimits

0x9402,	// (0x0006535c) wgtman_btn_pane

0xac77,	// (0x00066bd1) aid_scroll_copy1

0xd82e,	// (0x00069788) list_wgtman_pane

0x9445,	// (0x0006539f) wgtman_btn_pane_g1_ParamLimits

0x9445,	// (0x0006539f) wgtman_btn_pane_g1

0x9471,	// (0x000653cb) wgtman_btn_pane_t1_ParamLimits

0x9471,	// (0x000653cb) wgtman_btn_pane_t1

0xd838,	// (0x00069792) wgtman_btn_pane_t2_ParamLimits

0xd838,	// (0x00069792) wgtman_btn_pane_t2

0x0001,

0xfdf6,	// (0x0006bd50) wgtman_btn_pane_t_ParamLimits

0xfdf6,	// (0x0006bd50) wgtman_btn_pane_t

0x94ae,	// (0x00065408) listrow_wgtman_pane_ParamLimits

0x94ae,	// (0x00065408) listrow_wgtman_pane

0x94c1,	// (0x0006541b) listrow_wgtman_pane_g1

0x94ca,	// (0x00065424) listrow_wgtman_pane_g2

0x0001,

0xfdfb,	// (0x0006bd55) listrow_wgtman_pane_g

0x94d4,	// (0x0006542e) listrow_wgtman_pane_t1

0x94e2,	// (0x0006543c) listrow_wgtman_pane_t2

0x0001,

0xfe00,	// (0x0006bd5a) listrow_wgtman_pane_t

0x94f0,	// (0x0006544a) wait_bar_pane_cp09

0xd84f,	// (0x000697a9) main_calllock_btn_pane

0xd859,	// (0x000697b3) main_calllock_pane_g1

0x0c41,	// (0x0005cb9b) bg_button_pane_cp17

0xd864,	// (0x000697be) main_calllock_btn_pane_g1

0xd86d,	// (0x000697c7) main_calllock_btn_pane_t1

0x0c41,	// (0x0005cb9b) main_dialer3_pane

0x0c41,	// (0x0005cb9b) main_fmrd2_pane

0xc735,	// (0x0006868f) main_fs_bigclock_unlock_btn_pane_g1

0xd884,	// (0x000697de) main_fs_bigclock_unlock_btn_pane_t1

0x94f8,	// (0x00065452) area_fmrd2_info_pane_ParamLimits

0x94f8,	// (0x00065452) area_fmrd2_info_pane

0x9509,	// (0x00065463) area_fmrd2_visual_pane_ParamLimits

0x9509,	// (0x00065463) area_fmrd2_visual_pane

0x9517,	// (0x00065471) fmrd2_indi_pane_ParamLimits

0x9517,	// (0x00065471) fmrd2_indi_pane

0x9524,	// (0x0006547e) area_fmrd2_visual_pane_g1

0x952c,	// (0x00065486) area_fmrd2_visual_pane_t1

0x953c,	// (0x00065496) area_fmrd2_visual_pane_t2

0x954c,	// (0x000654a6) area_fmrd2_visual_pane_t3

0x0002,

0xfe0a,	// (0x0006bd64) area_fmrd2_visual_pane_t

0x955c,	// (0x000654b6) area_fmrd2_info_pane_g1

0x9564,	// (0x000654be) area_fmrd2_info_pane_t1

0x9574,	// (0x000654ce) area_fmrd2_info_pane_t2

0x9584,	// (0x000654de) area_fmrd2_info_pane_t3

0x9594,	// (0x000654ee) area_fmrd2_info_pane_t4

0x0003,

0xfe11,	// (0x0006bd6b) area_fmrd2_info_pane_t

0x95a2,	// (0x000654fc) fmrd2_indi_pane_t1

0x95b2,	// (0x0006550c) fmrd2_indi_pane_t2

0x95c2,	// (0x0006551c) fmrd2_indi_pane_t3

0x0002,

0xfe1a,	// (0x0006bd74) fmrd2_indi_pane_t

0xebfc,	// (0x0006ab56) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xebfc,	// (0x0006ab56) list_single_fs_bigclock_indicator_pane_g5

0xeca3,	// (0x0006abfd) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xeca3,	// (0x0006abfd) list_single_fs_bigclock_indicator_pane_t5

0x8d04,	// (0x00064c5e) aid_cell_bcale_month_pane_ParamLimits

0x8d04,	// (0x00064c5e) aid_cell_bcale_month_pane

0x8d16,	// (0x00064c70) bcale_month_pane_ParamLimits

0x8d16,	// (0x00064c70) bcale_month_pane

0x8d30,	// (0x00064c8a) bcale_preview_pane_ParamLimits

0x8d30,	// (0x00064c8a) bcale_preview_pane

0xd5ff,	// (0x00069559) list_single_fs_bigclock_pane_t1_ParamLimits

0xd61e,	// (0x00069578) list_single_fs_bigclock_pane_t2_ParamLimits

0xd61e,	// (0x00069578) list_single_fs_bigclock_pane_t2

0x0001,

0xfda1,	// (0x0006bcfb) list_single_fs_bigclock_pane_t_ParamLimits

0xfda1,	// (0x0006bcfb) list_single_fs_bigclock_pane_t

0xd87c,	// (0x000697d6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe05,	// (0x0006bd5f) main_fs_bigclock_unlock_btn_pane_g

0x95d2,	// (0x0006552c) aid_dia3_key_size_ParamLimits

0x95d2,	// (0x0006552c) aid_dia3_key_size

0x95e1,	// (0x0006553b) aid_dia3_listrow_size_ParamLimits

0x95e1,	// (0x0006553b) aid_dia3_listrow_size

0x95f6,	// (0x00065550) dia3_keypad_fun_pane_ParamLimits

0x95f6,	// (0x00065550) dia3_keypad_fun_pane

0x9612,	// (0x0006556c) dia3_keypad_num_pane_ParamLimits

0x9612,	// (0x0006556c) dia3_keypad_num_pane

0x962d,	// (0x00065587) dia3_listscroll_pane_ParamLimits

0x962d,	// (0x00065587) dia3_listscroll_pane

0x9640,	// (0x0006559a) dia3_numentry_pane_ParamLimits

0x9640,	// (0x0006559a) dia3_numentry_pane

0xd892,	// (0x000697ec) dia3_list_pane

0xd89d,	// (0x000697f7) scroll_pane_cp12

0x0c41,	// (0x0005cb9b) bg_dia3_numentry_pane

0x9654,	// (0x000655ae) dia3_numentry_pane_t1

0x9663,	// (0x000655bd) cell_dia3_key_num_pane

0x966b,	// (0x000655c5) cell_dia3_key0_fun_pane_ParamLimits

0x966b,	// (0x000655c5) cell_dia3_key0_fun_pane

0x967f,	// (0x000655d9) cell_dia3_key1_fun_pane_ParamLimits

0x967f,	// (0x000655d9) cell_dia3_key1_fun_pane

0x9697,	// (0x000655f1) dia3_listrow_pane

0xe8fd,	// (0x0006a857) bg_dia3_numentry_pane_g1

0x0c41,	// (0x0005cb9b) bg_button_pane_cp21

0xd8a8,	// (0x00069802) cell_dia3_key_num_pane_t1

0xd8b6,	// (0x00069810) cell_dia3_key_num_pane_t2

0xd8c5,	// (0x0006981f) cell_dia3_key_num_pane_t3

0xd8d4,	// (0x0006982e) cell_dia3_key_num_pane_t4

0x0003,

0xfe21,	// (0x0006bd7b) cell_dia3_key_num_pane_t

0x0c41,	// (0x0005cb9b) bg_button_pane_cp19

0x96a9,	// (0x00065603) cell_dia3_key0_fun_pane_g1

0x0c41,	// (0x0005cb9b) bg_button_pane_cp20

0x96b1,	// (0x0006560b) cell_dia3_key1_fun_pane_g1

0x96b9,	// (0x00065613) area_left_week_number_pane

0xd180,	// (0x000690da) area_top_day_name_pane

0x96c2,	// (0x0006561c) frame_month_view_pane

0x96ca,	// (0x00065624) grid_month_view_pane

0x96d4,	// (0x0006562e) cell_top_day_name_pane_ParamLimits

0x96d4,	// (0x0006562e) cell_top_day_name_pane

0x8f54,	// (0x00064eae) cell_area_left_week_number_pane_ParamLimits

0x8f54,	// (0x00064eae) cell_area_left_week_number_pane

0x96ea,	// (0x00065644) cell_month_view_pane_ParamLimits

0x96ea,	// (0x00065644) cell_month_view_pane

0xd8e3,	// (0x0006983d) frm_month_g1

0x9705,	// (0x0006565f) frm_month_g2

0x970d,	// (0x00065667) frm_month_g3

0x9715,	// (0x0006566f) frm_month_g4

0x971d,	// (0x00065677) frm_month_g5

0x9725,	// (0x0006567f) frm_month_g6

0x972d,	// (0x00065687) frm_month_g7

0xd8ec,	// (0x00069846) frm_month_g8

0x9735,	// (0x0006568f) frm_month_g9

0x973e,	// (0x00065698) frm_month_g10

0x9747,	// (0x000656a1) frm_month_g11

0x9750,	// (0x000656aa) frm_month_g12

0x9759,	// (0x000656b3) frm_month_g13

0x9762,	// (0x000656bc) frm_month_g14

0x976b,	// (0x000656c5) frm_month_g15

0x9774,	// (0x000656ce) frm_month_g16

0x000f,

0xfe2a,	// (0x0006bd84) frm_month_g

0x977d,	// (0x000656d7) cell_top_day_name_pane_t1

0x978c,	// (0x000656e6) cell_area_left_week_number_pane_g1

0x977d,	// (0x000656d7) cell_area_left_week_number_pane_t1

0xc735,	// (0x0006868f) cell_month_view_pane_g1

0x9794,	// (0x000656ee) cell_month_view_pane_t1

0x0c41,	// (0x0005cb9b) main_fps_pane

0xee93,	// (0x0006aded) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xee93,	// (0x0006aded) cmail_ddmenu_btn02_pane_cp1

0xeeaf,	// (0x0006ae09) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xeeaf,	// (0x0006ae09) cmail_ddmenu_btn02_pane_cp2

0x9012,	// (0x00064f6c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9012,	// (0x00064f6c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd54,	// (0x0006bcae) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd54,	// (0x0006bcae) cmail_ddmenu_btn02_pane_g

0x9033,	// (0x00064f8d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9033,	// (0x00064f8d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd59,	// (0x0006bcb3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd59,	// (0x0006bcb3) cmail_ddmenu_btn02_pane_t

0x97a3,	// (0x000656fd) fps_text_pane_ParamLimits

0x97a3,	// (0x000656fd) fps_text_pane

0x97ba,	// (0x00065714) main_fps_pane_g1_ParamLimits

0x97ba,	// (0x00065714) main_fps_pane_g1

0x97d4,	// (0x0006572e) wait_bar_pane_cp010_ParamLimits

0x97d4,	// (0x0006572e) wait_bar_pane_cp010

0x97e5,	// (0x0006573f) fps_text_pane_t1_ParamLimits

0x97e5,	// (0x0006573f) fps_text_pane_t1

0xd12f,	// (0x00069089) cam4_image_uncrop_pane_g1

0xd138,	// (0x00069092) cam4_image_uncrop_pane_g2

0x6181,	// (0x000620db) cam4_image_uncrop_pane_g3

0x618a,	// (0x000620e4) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0006b862) cam4_image_uncrop_pane_g

0x9697,	// (0x000655f1) dia3_listrow_pane_ParamLimits

0x0c41,	// (0x0005cb9b) main_phob2_pane

0x8aa4,	// (0x000649fe) cell_tport_appsw_pane_cp02_ParamLimits

0x8aa4,	// (0x000649fe) cell_tport_appsw_pane_cp02

0x8ab8,	// (0x00064a12) cell_tport_appsw_pane_cp03_ParamLimits

0x8ab8,	// (0x00064a12) cell_tport_appsw_pane_cp03

0x0c41,	// (0x0005cb9b) phob2_contact_card_pane

0x0c41,	// (0x0005cb9b) phob2_listscroll_pane

0xd8f5,	// (0x0006984f) phob2_list_pane

0xd8fd,	// (0x00069857) scroll_pane_cp034

0x97fd,	// (0x00065757) phob2_cc_data_pane_ParamLimits

0x97fd,	// (0x00065757) phob2_cc_data_pane

0x981c,	// (0x00065776) phob2_cc_listscroll_pane_ParamLimits

0x981c,	// (0x00065776) phob2_cc_listscroll_pane

0xdea7,	// (0x00069e01) list_double_large_graphic_phob2_pane_ParamLimits

0xdea7,	// (0x00069e01) list_double_large_graphic_phob2_pane

0x983a,	// (0x00065794) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x983a,	// (0x00065794) list_double_large_graphic_phob2_pane_g1

0x9847,	// (0x000657a1) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9847,	// (0x000657a1) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe4b,	// (0x0006bda5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe4b,	// (0x0006bda5) list_double_large_graphic_phob2_pane_g

0x9853,	// (0x000657ad) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9853,	// (0x000657ad) list_double_large_graphic_phob2_pane_t1

0x9868,	// (0x000657c2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9868,	// (0x000657c2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe50,	// (0x0006bdaa) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe50,	// (0x0006bdaa) list_double_large_graphic_phob2_pane_t

0x0c41,	// (0x0005cb9b) list_highlight_pane_cp024

0xd905,	// (0x0006985f) phob2_cc_button_pane

0x987a,	// (0x000657d4) phob2_cc_data_pane_g1_ParamLimits

0x987a,	// (0x000657d4) phob2_cc_data_pane_g1

0x988f,	// (0x000657e9) phob2_cc_data_pane_g2_ParamLimits

0x988f,	// (0x000657e9) phob2_cc_data_pane_g2

0x0001,

0xfe55,	// (0x0006bdaf) phob2_cc_data_pane_g_ParamLimits

0xfe55,	// (0x0006bdaf) phob2_cc_data_pane_g

0x98a1,	// (0x000657fb) phob2_cc_data_pane_t1_ParamLimits

0x98a1,	// (0x000657fb) phob2_cc_data_pane_t1

0x98b9,	// (0x00065813) phob2_cc_data_pane_t2_ParamLimits

0x98b9,	// (0x00065813) phob2_cc_data_pane_t2

0x98d1,	// (0x0006582b) phob2_cc_data_pane_t3_ParamLimits

0x98d1,	// (0x0006582b) phob2_cc_data_pane_t3

0x0002,

0xfe5a,	// (0x0006bdb4) phob2_cc_data_pane_t_ParamLimits

0xfe5a,	// (0x0006bdb4) phob2_cc_data_pane_t

0xd90d,	// (0x00069867) phob2_cc_list_pane_ParamLimits

0xd90d,	// (0x00069867) phob2_cc_list_pane

0xe80c,	// (0x0006a766) scroll_pane_cp035_ParamLimits

0xe80c,	// (0x0006a766) scroll_pane_cp035

0x0ebb,	// (0x0005ce15) bg_button_pane_cp033

0xd919,	// (0x00069873) phob2_cc_button_pane_g1

0xd925,	// (0x0006987f) phob2_cc_button_pane_t1

0xd93a,	// (0x00069894) phob2_cc_button_pane_t2

0x0001,

0xfe61,	// (0x0006bdbb) phob2_cc_button_pane_t

0x98eb,	// (0x00065845) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98eb,	// (0x00065845) list_double_large_graphic_phob2_cc_pane

0x98ff,	// (0x00065859) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x98ff,	// (0x00065859) list_double_large_graphic_phob2_cc_pane_g1

0x990b,	// (0x00065865) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x990b,	// (0x00065865) list_double_large_graphic_phob2_cc_pane_g2

0x9917,	// (0x00065871) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9917,	// (0x00065871) list_double_large_graphic_phob2_cc_pane_g3

0x9923,	// (0x0006587d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9923,	// (0x0006587d) list_double_large_graphic_phob2_cc_pane_g4

0x992f,	// (0x00065889) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x992f,	// (0x00065889) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe66,	// (0x0006bdc0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe66,	// (0x0006bdc0) list_double_large_graphic_phob2_cc_pane_g

0x993b,	// (0x00065895) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x993b,	// (0x00065895) list_double_large_graphic_phob2_cc_pane_t1

0x9964,	// (0x000658be) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9964,	// (0x000658be) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe71,	// (0x0006bdcb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe71,	// (0x0006bdcb) list_double_large_graphic_phob2_cc_pane_t

0xd94c,	// (0x000698a6) list_highlight_pane_cp025_ParamLimits

0xd94c,	// (0x000698a6) list_highlight_pane_cp025

0x0ebb,	// (0x0005ce15) bg_button_pane_cp033_ParamLimits

0xd919,	// (0x00069873) phob2_cc_button_pane_g1_ParamLimits

0xd925,	// (0x0006987f) phob2_cc_button_pane_t1_ParamLimits

0xd93a,	// (0x00069894) phob2_cc_button_pane_t2_ParamLimits

0xfe61,	// (0x0006bdbb) phob2_cc_button_pane_t_ParamLimits

0x0ec9,	// (0x0005ce23) popup_wgtman_window

0xdf89,	// (0x00069ee3) scroll_pane_cp038

0x9427,	// (0x00065381) wgtman_btn_pane_cp_01_ParamLimits

0x9427,	// (0x00065381) wgtman_btn_pane_cp_01

0xd95a,	// (0x000698b4) wgtman_content_pane

0xd6a3,	// (0x000695fd) wgtman_heading_pane

0x0c41,	// (0x0005cb9b) bg_heading_pane_cp02

0xd963,	// (0x000698bd) wgtman_heading_pane_g1

0xd96b,	// (0x000698c5) wgtman_heading_pane_t1

0xd979,	// (0x000698d3) scroll_pane_cp036

0xd981,	// (0x000698db) wgtman_list_pane

0xd989,	// (0x000698e3) wgtman_list_pane_t1_ParamLimits

0xd989,	// (0x000698e3) wgtman_list_pane_t1

0xdcb9,	// (0x00069c13) cam4_grid_pane

0x6ed6,	// (0x00062e30) bg_button_pane_cp015_ParamLimits

0x6eea,	// (0x00062e44) bg_button_pane_cp016_ParamLimits

0x6efd,	// (0x00062e57) bg_button_pane_cp017_ParamLimits

0x6f55,	// (0x00062eaf) popup_vitu2_query_window_g3_ParamLimits

0x6f55,	// (0x00062eaf) popup_vitu2_query_window_g3

0x7012,	// (0x00062f6c) popup_vitu2_query_window_t6_ParamLimits

0x7012,	// (0x00062f6c) popup_vitu2_query_window_t6

0x703d,	// (0x00062f97) popup_vitu2_query_window_t7_ParamLimits

0x703d,	// (0x00062f97) popup_vitu2_query_window_t7

0xd12f,	// (0x00069089) cam4_grid_pane_g1

0xd138,	// (0x00069092) cam4_grid_pane_g2

0xd9ab,	// (0x00069905) cam4_grid_pane_g3

0xd9b4,	// (0x0006990e) cam4_grid_pane_g4

0x0003,

0xfe76,	// (0x0006bdd0) cam4_grid_pane_g

0x1bb7,	// (0x0005db11) aid_placing_vt_slider_lsc_ParamLimits

0x1eb4,	// (0x0005de0e) vidtel_button_pane_ParamLimits

0x1eb4,	// (0x0005de0e) vidtel_button_pane

0xd9bf,	// (0x00069919) bg_button_pane_cp034

0x998d,	// (0x000658e7) vidtel_button_pane_g1

0xd9c9,	// (0x00069923) vidtel_button_pane_t1

0xe08b,	// (0x00069fe5) aid_size_vtel_slider_touch

0xe80c,	// (0x0006a766) scroll_pane_cp039

0xe93b,	// (0x0006a895) ncim_query_button_pane_cp01_ParamLimits

0xe95a,	// (0x0006a8b4) ncimui_query_pane_g1_ParamLimits

0x0ebb,	// (0x0005ce15) input_focus_pane_cp012_ParamLimits

0xe97f,	// (0x0006a8d9) ncim_query_entry_pane_t1_ParamLimits

0xe80c,	// (0x0006a766) scroll_pane_cp039_ParamLimits

0x2dae,	// (0x0005ed08) navi_pane_bcale_mc_g1

0x2db6,	// (0x0005ed10) navi_pane_bcale_mc_t1

0xeeec,	// (0x0006ae46) main_sp_fs_email_pane_g1

0xeef4,	// (0x0006ae4e) main_sp_fs_email_pane_g2

0x0001,

0x08e0,	// (0x0005c83a) main_sp_fs_email_pane_g

0xd2a2,	// (0x000691fc) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd2a2,	// (0x000691fc) list_single_cale_mrui_row_pane_g3

0x905b,	// (0x00064fb5) list_single_recal_day_pane_g5_event_pane

0xd45e,	// (0x000693b8) list_single_recal_day_pane_g7

0xd9d7,	// (0x00069931) list_recal_day_event_pane_cp01

0xd9e0,	// (0x0006993a) list_recal_vselct_arw_lo_pane_cp01

0xd9e8,	// (0x00069942) list_recal_vselct_arw_up_pane_cp01

0xd9f0,	// (0x0006994a) list_recal_vselct_pane_cp01

0xe0ad,	// (0x0006a007) list_recal_day_event_pane_cp01_g1

0xd9fa,	// (0x00069954) list_recal_day_event_pane_cp01_t1

0xd466,	// (0x000693c0) list_single_recal_day_pane_t1_ParamLimits

0xd478,	// (0x000693d2) list_single_recal_day_pane_t2_ParamLimits

0xfd69,	// (0x0006bcc3) list_single_recal_day_pane_t_ParamLimits

0xa15b,	// (0x000660b5) bg_notes_pane_ParamLimits

0xa169,	// (0x000660c3) list_notes_pane_ParamLimits

0x11db,	// (0x0005d135) scroll_pane_cp06_ParamLimits

0xa1af,	// (0x00066109) main_notes_pane_ParamLimits

0x0c41,	// (0x0005cb9b) main_welc_pane

0x9995,	// (0x000658ef) main_welc_body_pane_ParamLimits

0x9995,	// (0x000658ef) main_welc_body_pane

0x99a9,	// (0x00065903) main_welc_opti_pane_ParamLimits

0x99a9,	// (0x00065903) main_welc_opti_pane

0x99c0,	// (0x0006591a) main_welc_pane_t1_ParamLimits

0x99c0,	// (0x0006591a) main_welc_pane_t1

0x99d9,	// (0x00065933) main_welc_body_row_pane_ParamLimits

0x99d9,	// (0x00065933) main_welc_body_row_pane

0x99f0,	// (0x0006594a) main_welc_opti_row_pane_ParamLimits

0x99f0,	// (0x0006594a) main_welc_opti_row_pane

0xda08,	// (0x00069962) main_welc_opti_row_pane_g1

0xda10,	// (0x0006996a) main_welc_opti_row_pane_t1

0xda1f,	// (0x00069979) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small

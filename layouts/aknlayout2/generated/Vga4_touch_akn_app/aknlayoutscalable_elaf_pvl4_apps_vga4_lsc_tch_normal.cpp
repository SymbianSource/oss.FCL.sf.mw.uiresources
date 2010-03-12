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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000e35f };

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
0x06e2,	// (0x0000ea41) Screen

0x06ee,	// (0x0000ea4d) application_window

0x072a,	// (0x0000ea89) area_bottom_pane_ParamLimits

0x072a,	// (0x0000ea89) area_bottom_pane

0x0763,	// (0x0000eac2) area_top_pane_ParamLimits

0x0763,	// (0x0000eac2) area_top_pane

0x932f,	// (0x0001768e) call_video_uplink_pane_ParamLimits

0x932f,	// (0x0001768e) call_video_uplink_pane

0x07d8,	// (0x0000eb37) main_pane_ParamLimits

0x07d8,	// (0x0000eb37) main_pane

0xbcc3,	// (0x0001a022) context_pane

0x3a2d,	// (0x00011d8c) navi_pane

0x3a5d,	// (0x00011dbc) popup_cale_events_window_ParamLimits

0x3a5d,	// (0x00011dbc) popup_cale_events_window

0xbcd6,	// (0x0001a035) popup_mup_playback_window

0x3a75,	// (0x00011dd4) signal_pane

0x9af3,	// (0x00017e52) main_browser_pane

0xa7c7,	// (0x00018b26) main_burst_pane

0x372f,	// (0x00011a8e) main_calc_pane

0xa7c7,	// (0x00018b26) main_cale_day_pane

0x9af3,	// (0x00017e52) main_cale_month_pane

0xa7c7,	// (0x00018b26) main_cale_week_pane

0xa7c7,	// (0x00018b26) main_call_pane

0x97a3,	// (0x00017b02) main_call_poc_pane

0xa7c7,	// (0x00018b26) main_camera_pane

0xa7c7,	// (0x00018b26) main_chi_dic_pane

0xa669,	// (0x000189c8) main_clock_pane

0x97a3,	// (0x00017b02) main_fmradio_pane

0xa7c7,	// (0x00018b26) main_graph_messa_pane

0x97a3,	// (0x00017b02) main_help_pane

0x9af3,	// (0x00017e52) main_im_pane

0x99fe,	// (0x00017d5d) main_image_pane_ParamLimits

0x99fe,	// (0x00017d5d) main_image_pane

0x97a3,	// (0x00017b02) main_location2_pane

0xa7c7,	// (0x00018b26) main_location_pane

0x97a3,	// (0x00017b02) main_messa_pane

0x97a3,	// (0x00017b02) main_mp2_pane

0xa7c7,	// (0x00018b26) main_mp_pane

0x97a3,	// (0x00017b02) main_msg_pane

0x97a3,	// (0x00017b02) main_mup_eq_pane

0x97a3,	// (0x00017b02) main_mup_pane

0x9af3,	// (0x00017e52) main_notes_pane

0x97a3,	// (0x00017b02) main_pec_pane

0x97a3,	// (0x00017b02) main_phob_pane

0x97a3,	// (0x00017b02) main_pinb_pane

0x97a3,	// (0x00017b02) main_postcard_pane

0x97a3,	// (0x00017b02) main_qdial_pane

0xa7c7,	// (0x00018b26) main_skin_pane

0x97a3,	// (0x00017b02) main_smil2_pane

0xa7c7,	// (0x00018b26) main_smil_pane

0xa7c7,	// (0x00018b26) main_video_pane

0xa7c7,	// (0x00018b26) main_video_tele_pane

0x99fe,	// (0x00017d5d) main_viewer_pane_ParamLimits

0x99fe,	// (0x00017d5d) main_viewer_pane

0xa7c7,	// (0x00018b26) main_vorec_pane

0x3785,	// (0x00011ae4) popup_blid_sat_info_window_ParamLimits

0x3785,	// (0x00011ae4) popup_blid_sat_info_window

0x37e9,	// (0x00011b48) popup_dyc_status_message_window_ParamLimits

0x37e9,	// (0x00011b48) popup_dyc_status_message_window

0x3803,	// (0x00011b62) popup_grid_large_graphic_window_ParamLimits

0x3803,	// (0x00011b62) popup_grid_large_graphic_window

0x38c5,	// (0x00011c24) popup_loc_request_window_ParamLimits

0x38c5,	// (0x00011c24) popup_loc_request_window

0x3a01,	// (0x00011d60) popup_wml_address_window_ParamLimits

0x3a01,	// (0x00011d60) popup_wml_address_window

0x356d,	// (0x000118cc) call_muted_g1

0x31fe,	// (0x0001155d) popup_call_audio_conf_window_ParamLimits

0x31fe,	// (0x0001155d) popup_call_audio_conf_window

0x357d,	// (0x000118dc) popup_call_audio_first_window_ParamLimits

0x357d,	// (0x000118dc) popup_call_audio_first_window

0x35f3,	// (0x00011952) popup_call_audio_in_window_ParamLimits

0x35f3,	// (0x00011952) popup_call_audio_in_window

0x362f,	// (0x0001198e) popup_call_audio_out_window_ParamLimits

0x362f,	// (0x0001198e) popup_call_audio_out_window

0x3669,	// (0x000119c8) popup_call_audio_second_window_ParamLimits

0x3669,	// (0x000119c8) popup_call_audio_second_window

0x36bf,	// (0x00011a1e) popup_call_audio_wait_window_ParamLimits

0x36bf,	// (0x00011a1e) popup_call_audio_wait_window

0x36f4,	// (0x00011a53) popup_number_entry_window_ParamLimits

0x36f4,	// (0x00011a53) popup_number_entry_window

0x935b,	// (0x000176ba) bg_popup_call_pane_cp05_ParamLimits

0x935b,	// (0x000176ba) bg_popup_call_pane_cp05

0x937b,	// (0x000176da) popup_number_entry_window_t1

0x938e,	// (0x000176ed) popup_number_entry_window_t2

0x93a0,	// (0x000176ff) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0001d437) popup_number_entry_window_t

0x93e7,	// (0x00017746) text_title_cp2

0x93fa,	// (0x00017759) bg_popup_call_pane_cp_ParamLimits

0x93fa,	// (0x00017759) bg_popup_call_pane_cp

0x9408,	// (0x00017767) call_thumbnail_pane

0x9410,	// (0x0001776f) popup_call_audio_in_window_g1_ParamLimits

0x9410,	// (0x0001776f) popup_call_audio_in_window_g1

0x941c,	// (0x0001777b) popup_call_audio_in_window_g2_ParamLimits

0x941c,	// (0x0001777b) popup_call_audio_in_window_g2

0x9428,	// (0x00017787) popup_call_audio_in_window_g3_ParamLimits

0x9428,	// (0x00017787) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0001d440) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0001d440) popup_call_audio_in_window_g

0x9434,	// (0x00017793) popup_call_audio_in_window_t1_ParamLimits

0x9434,	// (0x00017793) popup_call_audio_in_window_t1

0x9450,	// (0x000177af) popup_call_audio_in_window_t2_ParamLimits

0x9450,	// (0x000177af) popup_call_audio_in_window_t2

0x946c,	// (0x000177cb) popup_call_audio_in_window_t3_ParamLimits

0x946c,	// (0x000177cb) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0001d447) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0001d447) popup_call_audio_in_window_t

0x93fa,	// (0x00017759) bg_popup_call_pane_cp01_ParamLimits

0x93fa,	// (0x00017759) bg_popup_call_pane_cp01

0x9408,	// (0x00017767) call_thumbnail_pane_cp02

0x947f,	// (0x000177de) call_type_pane_cp022

0x9487,	// (0x000177e6) popup_call_audio_out_window_g1_ParamLimits

0x9487,	// (0x000177e6) popup_call_audio_out_window_g1

0x9499,	// (0x000177f8) popup_call_audio_out_window_g2_ParamLimits

0x9499,	// (0x000177f8) popup_call_audio_out_window_g2

0x94a5,	// (0x00017804) popup_call_audio_out_window_g3_ParamLimits

0x94a5,	// (0x00017804) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0001d44e) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0001d44e) popup_call_audio_out_window_g

0x94b7,	// (0x00017816) popup_call_audio_out_window_t1_ParamLimits

0x94b7,	// (0x00017816) popup_call_audio_out_window_t1

0x94cf,	// (0x0001782e) popup_call_audio_out_window_t2_ParamLimits

0x94cf,	// (0x0001782e) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0001d455) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0001d455) popup_call_audio_out_window_t

0x94e4,	// (0x00017843) bg_popup_call_pane_ParamLimits

0x94e4,	// (0x00017843) bg_popup_call_pane

0x095f,	// (0x0000ecbe) call_thumbnail_pane_cp_ParamLimits

0x095f,	// (0x0000ecbe) call_thumbnail_pane_cp

0x9568,	// (0x000178c7) call_type_pane_cp01_ParamLimits

0x9568,	// (0x000178c7) call_type_pane_cp01

0x95ac,	// (0x0001790b) popup_call_audio_first_window_g1_ParamLimits

0x95ac,	// (0x0001790b) popup_call_audio_first_window_g1

0x95f8,	// (0x00017957) popup_call_audio_first_window_g2_ParamLimits

0x95f8,	// (0x00017957) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x0001d45a) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x0001d45a) popup_call_audio_first_window_g

0x963c,	// (0x0001799b) popup_call_audio_first_window_t1_ParamLimits

0x963c,	// (0x0001799b) popup_call_audio_first_window_t1

0x96e8,	// (0x00017a47) popup_call_audio_first_window_t4_ParamLimits

0x96e8,	// (0x00017a47) popup_call_audio_first_window_t4

0x9774,	// (0x00017ad3) popup_call_audio_first_window_t5_ParamLimits

0x9774,	// (0x00017ad3) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0001d45f) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0001d45f) popup_call_audio_first_window_t

0x97a3,	// (0x00017b02) bg_popup_call_pane_cp02

0x97ad,	// (0x00017b0c) call_type_pane_cp023

0x97b5,	// (0x00017b14) popup_call_audio_wait_window_g1

0x97bd,	// (0x00017b1c) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0001d466) popup_call_audio_wait_window_g

0x97c5,	// (0x00017b24) popup_call_audio_wait_window_t3

0x97d3,	// (0x00017b32) bg_popup_call_pane_cp03_ParamLimits

0x97d3,	// (0x00017b32) bg_popup_call_pane_cp03

0x9833,	// (0x00017b92) call_thumbnail_pane_cp011_ParamLimits

0x9833,	// (0x00017b92) call_thumbnail_pane_cp011

0x983f,	// (0x00017b9e) call_type_pane_cp034_ParamLimits

0x983f,	// (0x00017b9e) call_type_pane_cp034

0x987b,	// (0x00017bda) popup_call_audio_second_window_g1_ParamLimits

0x987b,	// (0x00017bda) popup_call_audio_second_window_g1

0x98b7,	// (0x00017c16) popup_call_audio_second_window_g2_ParamLimits

0x98b7,	// (0x00017c16) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0001d46b) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0001d46b) popup_call_audio_second_window_g

0x98f3,	// (0x00017c52) popup_call_audio_second_window_t1_ParamLimits

0x98f3,	// (0x00017c52) popup_call_audio_second_window_t1

0x9974,	// (0x00017cd3) popup_call_audio_second_window_t2_ParamLimits

0x9974,	// (0x00017cd3) popup_call_audio_second_window_t2

0x99aa,	// (0x00017d09) popup_call_audio_second_window_t3_ParamLimits

0x99aa,	// (0x00017d09) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0001d470) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0001d470) popup_call_audio_second_window_t

0x97a3,	// (0x00017b02) bg_popup_call_pane_cp04

0x99e0,	// (0x00017d3f) list_conf_pane

0x99e8,	// (0x00017d47) popup_call_audio_conf_window_t1

0x99f6,	// (0x00017d55) call_thumbnail_pane_g1

0x99fe,	// (0x00017d5d) bg_pinb_pane_ParamLimits

0x99fe,	// (0x00017d5d) bg_pinb_pane

0x9a0c,	// (0x00017d6b) find_pinb_pane

0x9a15,	// (0x00017d74) listscroll_pinb_pane_ParamLimits

0x9a15,	// (0x00017d74) listscroll_pinb_pane

0x9a24,	// (0x00017d83) pinb_bg_pane_g1

0x0983,	// (0x0000ece2) pinb_bg_pane_g2

0x098f,	// (0x0000ecee) pinb_bg_pane_g3

0x099b,	// (0x0000ecfa) pinb_bg_pane_g4

0x09a7,	// (0x0000ed06) pinb_bg_pane_g5

0x09b3,	// (0x0000ed12) pinb_bg_pane_g6

0x09be,	// (0x0000ed1d) pinb_bg_pane_g7

0x09c9,	// (0x0000ed28) pinb_bg_pane_g8

0x09d4,	// (0x0000ed33) pinb_bg_pane_g9

0x09de,	// (0x0000ed3d) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0001d477) pinb_bg_pane_g

0x09fb,	// (0x0000ed5a) grid_pinb_pane

0x0a06,	// (0x0000ed65) list_pinb_pane

0x0a11,	// (0x0000ed70) scroll_pane_cp01_ParamLimits

0x0a11,	// (0x0000ed70) scroll_pane_cp01

0x9a2e,	// (0x00017d8d) find_pinb_pane_g1_ParamLimits

0x9a2e,	// (0x00017d8d) find_pinb_pane_g1

0x9a46,	// (0x00017da5) find_pinb_pane_t1

0x9a58,	// (0x00017db7) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0001d491) find_pinb_pane_t

0x9a6d,	// (0x00017dcc) input_focus_pane_cp01_ParamLimits

0x9a6d,	// (0x00017dcc) input_focus_pane_cp01

0x0a23,	// (0x0000ed82) cell_pinb_pane_ParamLimits

0x0a23,	// (0x0000ed82) cell_pinb_pane

0x0a45,	// (0x0000eda4) cell_pinb_pane_g1_ParamLimits

0x0a45,	// (0x0000eda4) cell_pinb_pane_g1

0x0a59,	// (0x0000edb8) cell_pinb_pane_g2_ParamLimits

0x0a59,	// (0x0000edb8) cell_pinb_pane_g2

0x9a79,	// (0x00017dd8) cell_pinb_pane_g3_ParamLimits

0x9a79,	// (0x00017dd8) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0001d496) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0001d496) cell_pinb_pane_g

0x97a3,	// (0x00017b02) grid_highlight_pane_cp01

0x0a65,	// (0x0000edc4) list_pinb_item_pane_ParamLimits

0x0a65,	// (0x0000edc4) list_pinb_item_pane

0x97a3,	// (0x00017b02) list_highlight_pane_cp02

0x0a78,	// (0x0000edd7) list_pinb_item_pane_g1_ParamLimits

0x0a78,	// (0x0000edd7) list_pinb_item_pane_g1

0x0a85,	// (0x0000ede4) list_pinb_item_pane_g2_ParamLimits

0x0a85,	// (0x0000ede4) list_pinb_item_pane_g2

0x0a91,	// (0x0000edf0) list_pinb_item_pane_g3_ParamLimits

0x0a91,	// (0x0000edf0) list_pinb_item_pane_g3

0x0aa2,	// (0x0000ee01) list_pinb_item_pane_g4_ParamLimits

0x0aa2,	// (0x0000ee01) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0001d49d) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0001d49d) list_pinb_item_pane_g

0x0aae,	// (0x0000ee0d) list_pinb_item_pane_t1_ParamLimits

0x0aae,	// (0x0000ee0d) list_pinb_item_pane_t1

0x0ae3,	// (0x0000ee42) calc_display_pane

0x0b0b,	// (0x0000ee6a) calc_paper_pane

0x0b2e,	// (0x0000ee8d) grid_calc_pane

0x97a3,	// (0x00017b02) bg_list_pane_cp01

0x0b5c,	// (0x0000eebb) clock_g1

0x0b64,	// (0x0000eec3) clock_g2

0x0001,

0xf147,	// (0x0001d4a6) clock_g

0x0b6c,	// (0x0000eecb) clock_t1_ParamLimits

0x0b6c,	// (0x0000eecb) clock_t1

0x0b81,	// (0x0000eee0) clock_t2_ParamLimits

0x0b81,	// (0x0000eee0) clock_t2

0x0b93,	// (0x0000eef2) clock_t3_ParamLimits

0x0b93,	// (0x0000eef2) clock_t3

0x0ba5,	// (0x0000ef04) clock_t4_ParamLimits

0x0ba5,	// (0x0000ef04) clock_t4

0x0bb7,	// (0x0000ef16) clock_t5_ParamLimits

0x0bb7,	// (0x0000ef16) clock_t5

0x0bcc,	// (0x0000ef2b) clock_t6_ParamLimits

0x0bcc,	// (0x0000ef2b) clock_t6

0x0bde,	// (0x0000ef3d) clock_t7_ParamLimits

0x0bde,	// (0x0000ef3d) clock_t7

0x0bf0,	// (0x0000ef4f) clock_t8_ParamLimits

0x0bf0,	// (0x0000ef4f) clock_t8

0x0c04,	// (0x0000ef63) clock_t9_ParamLimits

0x0c04,	// (0x0000ef63) clock_t9

0x0008,

0xf14c,	// (0x0001d4ab) clock_t_ParamLimits

0xf14c,	// (0x0001d4ab) clock_t

0x9a8d,	// (0x00017dec) popup_clock_analogue_window_cp02

0x9a8d,	// (0x00017dec) popup_clock_digital_window_cp01

0x9a95,	// (0x00017df4) listscroll_help_pane

0x97a3,	// (0x00017b02) phob_pre_status_pane

0x9a9f,	// (0x00017dfe) grid_qdial_pane

0x97a3,	// (0x00017b02) listscroll_mce_pane

0x9aa9,	// (0x00017e08) bg_notes_pane

0x9ab7,	// (0x00017e16) list_notes_pane

0x0c1a,	// (0x0000ef79) scroll_pane_cp06

0x9ac5,	// (0x00017e24) bg_calc_paper_pane

0x9ad9,	// (0x00017e38) list_calc_pane

0x9af3,	// (0x00017e52) bg_calc_display_pane

0x0c2e,	// (0x0000ef8d) calc_display_pane_t1

0x0c40,	// (0x0000ef9f) calc_display_pane_t2

0x9aff,	// (0x00017e5e) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0001d4be) calc_display_pane_t

0x0c52,	// (0x0000efb1) cell_calc_pane_ParamLimits

0x0c52,	// (0x0000efb1) cell_calc_pane

0x9b11,	// (0x00017e70) bg_calc_paper_pane_g1

0x9b1d,	// (0x00017e7c) bg_calc_paper_pane_g2

0x9b29,	// (0x00017e88) bg_calc_paper_pane_g3

0x9b35,	// (0x00017e94) bg_calc_paper_pane_g4

0x9b41,	// (0x00017ea0) bg_calc_paper_pane_g5

0x0c91,	// (0x0000eff0) bg_calc_paper_pane_g6

0x0ca4,	// (0x0000f003) bg_calc_paper_pane_g7

0x0cb7,	// (0x0000f016) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x0001d4c5) bg_calc_paper_pane_g

0x0cc8,	// (0x0000f027) calc_bg_paper_pane_g9

0x0cd9,	// (0x0000f038) list_calc_item_pane_ParamLimits

0x0cd9,	// (0x0000f038) list_calc_item_pane

0x9b4d,	// (0x00017eac) list_calc_item_pane_g1

0x9b5a,	// (0x00017eb9) list_calc_item_pane_t1_ParamLimits

0x9b5a,	// (0x00017eb9) list_calc_item_pane_t1

0x0cee,	// (0x0000f04d) list_calc_item_pane_t2_ParamLimits

0x0cee,	// (0x0000f04d) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x0001d4d6) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x0001d4d6) list_calc_item_pane_t

0x9b6c,	// (0x00017ecb) cell_calc_pane_g1

0x9b76,	// (0x00017ed5) grid_highlight_pane_cp02

0x9b98,	// (0x00017ef7) bg_calc_display_pane_g1

0x9ba1,	// (0x00017f00) bg_calc_display_pane_g2

0x9bab,	// (0x00017f0a) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0001d4e0) bg_calc_display_pane_g

0x0d20,	// (0x0000f07f) cell_qdial_pane_ParamLimits

0x0d20,	// (0x0000f07f) cell_qdial_pane

0x0d36,	// (0x0000f095) cell_qdial_pane_g1_ParamLimits

0x0d36,	// (0x0000f095) cell_qdial_pane_g1

0x0d4c,	// (0x0000f0ab) cell_qdial_pane_g2_ParamLimits

0x0d4c,	// (0x0000f0ab) cell_qdial_pane_g2

0x9bb4,	// (0x00017f13) cell_qdial_pane_g3_ParamLimits

0x9bb4,	// (0x00017f13) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0001d4e7) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0001d4e7) cell_qdial_pane_g

0x0d72,	// (0x0000f0d1) cell_qdial_pane_t1_ParamLimits

0x0d72,	// (0x0000f0d1) cell_qdial_pane_t1

0x0d8a,	// (0x0000f0e9) cell_qdial_pane_t2_ParamLimits

0x0d8a,	// (0x0000f0e9) cell_qdial_pane_t2

0x0d9d,	// (0x0000f0fc) cell_qdial_pane_t3_ParamLimits

0x0d9d,	// (0x0000f0fc) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0001d4f0) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0001d4f0) cell_qdial_pane_t

0x97a3,	// (0x00017b02) grid_highlight_pane_cp04

0x9bc0,	// (0x00017f1f) thumbnail_qdial_pane_ParamLimits

0x9bc0,	// (0x00017f1f) thumbnail_qdial_pane

0x9c1c,	// (0x00017f7b) list_help_pane

0x9c25,	// (0x00017f84) scroll_pane_cp02

0x0db0,	// (0x0000f10f) help_list_pane_t1_ParamLimits

0x0db0,	// (0x0000f10f) help_list_pane_t1

0x9c2e,	// (0x00017f8d) bg_notes_pane_g2

0x9c36,	// (0x00017f95) bg_notes_pane_g3

0x9c3e,	// (0x00017f9d) notes_bg_pane_g1

0x9c46,	// (0x00017fa5) notes_bg_pane_g4

0x9c4e,	// (0x00017fad) notes_bg_pane_g5

0x9c56,	// (0x00017fb5) notes_bg_pane_g6

0x9c5e,	// (0x00017fbd) notes_bg_pane_g7

0x9c66,	// (0x00017fc5) notes_bg_pane_g8

0x9c6e,	// (0x00017fcd) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0001d50e) notes_bg_pane_g

0x0dd4,	// (0x0000f133) list_notes_text_pane_ParamLimits

0x0dd4,	// (0x0000f133) list_notes_text_pane

0x9c76,	// (0x00017fd5) list_notes_text_pane_g1

0x0deb,	// (0x0000f14a) list_notes_text_pane_t1

0x9af3,	// (0x00017e52) listscroll_cale_week_pane

0x0e16,	// (0x0000f175) bg_cale_heading_pane

0x9c90,	// (0x00017fef) bg_cale_pane_cp01

0x0e32,	// (0x0000f191) cale_week_corner_pane

0x0e48,	// (0x0000f1a7) cale_week_day_heading_pane

0x0e64,	// (0x0000f1c3) cale_week_scroll_pane_g1

0x0e7d,	// (0x0000f1dc) cale_week_scroll_pane_g2

0x0e8e,	// (0x0000f1ed) cale_week_scroll_pane_g3

0x0e9f,	// (0x0000f1fe) cale_week_scroll_pane_g4

0x0eb0,	// (0x0000f20f) cale_week_scroll_pane_g5

0x0ec1,	// (0x0000f220) cale_week_scroll_pane_g6

0x0ed2,	// (0x0000f231) cale_week_scroll_pane_g7

0x0ee3,	// (0x0000f242) cale_week_scroll_pane_g8

0x0ef4,	// (0x0000f253) cale_week_scroll_pane_g9

0x0f05,	// (0x0000f264) cale_week_scroll_pane_g10

0x0f16,	// (0x0000f275) cale_week_scroll_pane_g11

0x0f27,	// (0x0000f286) cale_week_scroll_pane_g12

0x0f38,	// (0x0000f297) cale_week_scroll_pane_g13

0x0f51,	// (0x0000f2b0) cale_week_scroll_pane_g14

0x0f6a,	// (0x0000f2c9) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0001d51d) cale_week_scroll_pane_g

0x0f83,	// (0x0000f2e2) cale_week_time_pane

0x0f94,	// (0x0000f2f3) grid_cale_week_pane

0x0faf,	// (0x0000f30e) scroll_pane_cp08

0x0fc7,	// (0x0000f326) cell_cale_week_pane_ParamLimits

0x0fc7,	// (0x0000f326) cell_cale_week_pane

0x100f,	// (0x0000f36e) cale_week_day_heading_pane_t1

0x1023,	// (0x0000f382) cale_week_day_heading_pane_t2

0x1037,	// (0x0000f396) cale_week_day_heading_pane_t3

0x104b,	// (0x0000f3aa) cale_week_day_heading_pane_t4

0x105f,	// (0x0000f3be) cale_week_day_heading_pane_t5

0x1073,	// (0x0000f3d2) cale_week_day_heading_pane_t6

0x1087,	// (0x0000f3e6) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0001d53c) cale_week_day_heading_pane_t

0x9cbb,	// (0x0001801a) bg_cale_side_pane

0x109b,	// (0x0000f3fa) cale_week_time_pane_t1

0x10b3,	// (0x0000f412) cale_week_time_pane_t2

0x10cb,	// (0x0000f42a) cale_week_time_pane_t3

0x10e3,	// (0x0000f442) cale_week_time_pane_t4

0x10fb,	// (0x0000f45a) cale_week_time_pane_t5

0x1113,	// (0x0000f472) cale_week_time_pane_t6

0x112b,	// (0x0000f48a) cale_week_time_pane_t7

0x1147,	// (0x0000f4a6) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0001d54b) cale_week_time_pane_t

0x1167,	// (0x0000f4c6) cell_cale_week_pane_g2

0x1178,	// (0x0000f4d7) cell_cale_week_pane_g3_ParamLimits

0x1178,	// (0x0000f4d7) cell_cale_week_pane_g3

0x9cc9,	// (0x00018028) grid_highlight_pane_cp07

0x9cd1,	// (0x00018030) listscroll_gms_pane

0x9cdb,	// (0x0001803a) grid_gms_pane

0x9ce4,	// (0x00018043) listscroll_gms_pane_g1

0x9cec,	// (0x0001804b) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0001d55c) listscroll_gms_pane_g

0x1190,	// (0x0000f4ef) scroll_pane_cp010

0x119b,	// (0x0000f4fa) cell_gms_pane_ParamLimits

0x119b,	// (0x0000f4fa) cell_gms_pane

0x11b5,	// (0x0000f514) cell_gms_pane_g1

0x9cf4,	// (0x00018053) cell_gms_pane_g2

0x9cfc,	// (0x0001805b) cell_gms_pane_g3

0x9d05,	// (0x00018064) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0001d561) cell_gms_pane_g

0x9d0e,	// (0x0001806d) grid_highlight_pane_cp09

0x3515,	// (0x00011874) phob_pre_status_pane_g1

0x351d,	// (0x0001187c) phob_pre_status_pane_g2

0x3525,	// (0x00011884) phob_pre_status_pane_g3

0x352d,	// (0x0001188c) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0001d950) phob_pre_status_pane_g

0x353d,	// (0x0001189c) phob_pre_status_pane_t1

0x354d,	// (0x000118ac) phob_pre_status_pane_t2

0x355d,	// (0x000118bc) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x0001d95b) phob_pre_status_pane_t

0x97a3,	// (0x00017b02) bg_list_pane_cp05

0x11c5,	// (0x0000f524) grid_vorec_pane

0x11d1,	// (0x0000f530) vorec_t1

0x11df,	// (0x0000f53e) vorec_t2

0x11ed,	// (0x0000f54c) vorec_t3

0x11fb,	// (0x0000f55a) vorec_t4

0x1209,	// (0x0000f568) vorec_t5

0x9d16,	// (0x00018075) vorec_t6

0x0006,

0xf20b,	// (0x0001d56a) vorec_t

0x1225,	// (0x0000f584) wait_bar_pane_cp01

0x122d,	// (0x0000f58c) cell_vorec_pane_ParamLimits

0x122d,	// (0x0000f58c) cell_vorec_pane

0x9d24,	// (0x00018083) cell_vorec_pane_g1

0x97a3,	// (0x00017b02) grid_highlight_pane_cp05

0x1258,	// (0x0000f5b7) cams_zoom_pane

0x1267,	// (0x0000f5c6) image_vga_pane

0x1281,	// (0x0000f5e0) main_camera_pane_g1

0x1293,	// (0x0000f5f2) main_camera_pane_g2

0x12a3,	// (0x0000f602) main_camera_pane_g3

0x12b7,	// (0x0000f616) main_camera_pane_g4

0x12cb,	// (0x0000f62a) main_camera_pane_g5

0x12df,	// (0x0000f63e) main_camera_pane_g6

0x12f3,	// (0x0000f652) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0001d579) main_camera_pane_g

0x1307,	// (0x0000f666) main_camera_pane_t1

0x131d,	// (0x0000f67c) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0001d58a) main_camera_pane_t

0x135b,	// (0x0000f6ba) cams_zoom_pane_cp_ParamLimits

0x135b,	// (0x0000f6ba) cams_zoom_pane_cp

0x1383,	// (0x0000f6e2) image_cif_pane_ParamLimits

0x1383,	// (0x0000f6e2) image_cif_pane

0x13be,	// (0x0000f71d) image_subqcif_pane

0x13c8,	// (0x0000f727) main_video_pane_g1_ParamLimits

0x13c8,	// (0x0000f727) main_video_pane_g1

0x13ec,	// (0x0000f74b) main_video_pane_g2_ParamLimits

0x13ec,	// (0x0000f74b) main_video_pane_g2

0x1422,	// (0x0000f781) main_video_pane_g3_ParamLimits

0x1422,	// (0x0000f781) main_video_pane_g3

0x1450,	// (0x0000f7af) main_video_pane_g4_ParamLimits

0x1450,	// (0x0000f7af) main_video_pane_g4

0x147e,	// (0x0000f7dd) main_video_pane_g5_ParamLimits

0x147e,	// (0x0000f7dd) main_video_pane_g5

0x9d3a,	// (0x00018099) main_video_pane_g6_ParamLimits

0x9d3a,	// (0x00018099) main_video_pane_g6

0x0006,

0xf230,	// (0x0001d58f) main_video_pane_g_ParamLimits

0xf230,	// (0x0001d58f) main_video_pane_g

0x14a7,	// (0x0000f806) main_video_pane_t1_ParamLimits

0x14a7,	// (0x0000f806) main_video_pane_t1

0x9d54,	// (0x000180b3) cams_zoom_pane_g1

0x9d5d,	// (0x000180bc) cams_zoom_pane_g2

0x9d66,	// (0x000180c5) cams_zoom_pane_g3

0x9d6f,	// (0x000180ce) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0001d59e) cams_zoom_pane_g

0x1504,	// (0x0000f863) grid_cams_pane

0x151e,	// (0x0000f87d) linegrid_cams_pane

0x1530,	// (0x0000f88f) cell_cams_pane_ParamLimits

0x1530,	// (0x0000f88f) cell_cams_pane

0x9d78,	// (0x000180d7) cams_burst_image_pane

0x9d80,	// (0x000180df) cell_cams_pane_g1

0x97a3,	// (0x00017b02) grid_highlight_pane_cp03

0x9b6c,	// (0x00017ecb) mp_bg_pane_g1

0x97a3,	// (0x00017b02) bg_list_pane_cp03

0xbb95,	// (0x00019ef4) bg_mp_pane

0xbb9d,	// (0x00019efc) grid_mp_pane

0xbba5,	// (0x00019f04) media_player_g1

0xbbaf,	// (0x00019f0e) media_player_t1

0xbbbd,	// (0x00019f1c) media_player_t2

0xbbcb,	// (0x00019f2a) media_player_t3

0xbbd9,	// (0x00019f38) media_player_t4

0xbbe7,	// (0x00019f46) media_player_t5

0xbbf5,	// (0x00019f54) media_player_t6

0xbc03,	// (0x00019f62) media_player_t7

0x0006,

0xf5db,	// (0x0001d93a) media_player_t

0xbc11,	// (0x00019f70) wait_bar_pane_cp02

0xf5c0,	// (0x0001d91f) main_usb_pane_t

0x350c,	// (0x0001186b) cell_mp_pane

0x9b6c,	// (0x00017ecb) cell_mp_pane_g1

0x97a3,	// (0x00017b02) grid_highlight_pane_cp06

0x9e46,	// (0x000181a5) grid_skin_colour_pane

0x9e4e,	// (0x000181ad) list_highlight_pane_cp03

0x15a4,	// (0x0000f903) skin_g1

0x9e56,	// (0x000181b5) skin_t1

0x9e65,	// (0x000181c4) skin_t2

0x0001,

0xf274,	// (0x0001d5d3) skin_t

0x15ae,	// (0x0000f90d) cell_skin_colour_pane_ParamLimits

0x15ae,	// (0x0000f90d) cell_skin_colour_pane

0x9e73,	// (0x000181d2) cell_skin_colour_pane_g1

0x1621,	// (0x0000f980) call_video_g1_ParamLimits

0x1621,	// (0x0000f980) call_video_g1

0x163d,	// (0x0000f99c) call_video_g2_ParamLimits

0x163d,	// (0x0000f99c) call_video_g2

0x0001,

0xf279,	// (0x0001d5d8) call_video_g_ParamLimits

0xf279,	// (0x0001d5d8) call_video_g

0x1682,	// (0x0000f9e1) call_video_uplink_pane_cp1_ParamLimits

0x1682,	// (0x0000f9e1) call_video_uplink_pane_cp1

0x9e85,	// (0x000181e4) call_video_uplink_pane_cp2

0x1723,	// (0x0000fa82) video_down_crop_pane_ParamLimits

0x1723,	// (0x0000fa82) video_down_crop_pane

0x180c,	// (0x0000fb6b) video_down_pane_ParamLimits

0x180c,	// (0x0000fb6b) video_down_pane

0x9e8d,	// (0x000181ec) video_down_subqcif_pane_ParamLimits

0x9e8d,	// (0x000181ec) video_down_subqcif_pane

0x9ea7,	// (0x00018206) video_down_subqcif_pane_cp_ParamLimits

0x9ea7,	// (0x00018206) video_down_subqcif_pane_cp

0x9ecf,	// (0x0001822e) im_reading_pane_ParamLimits

0x9ecf,	// (0x0001822e) im_reading_pane

0x1915,	// (0x0000fc74) im_writing_pane_ParamLimits

0x1915,	// (0x0000fc74) im_writing_pane

0x1933,	// (0x0000fc92) im_reading_pane_t1

0x9ee9,	// (0x00018248) list_im_pane

0x9efa,	// (0x00018259) scroll_pane_cp07

0x1972,	// (0x0000fcd1) im_writing_pane_t1_ParamLimits

0x1972,	// (0x0000fcd1) im_writing_pane_t1

0x9f13,	// (0x00018272) im_writing_pane_t2_ParamLimits

0x9f13,	// (0x00018272) im_writing_pane_t2

0x0001,

0xf283,	// (0x0001d5e2) im_writing_pane_t_ParamLimits

0xf283,	// (0x0001d5e2) im_writing_pane_t

0x97a3,	// (0x00017b02) input_focus_pane_cp04

0x97a3,	// (0x00017b02) input_focus_pane_cp05

0x1987,	// (0x0000fce6) list_im_single_pane_ParamLimits

0x1987,	// (0x0000fce6) list_im_single_pane

0x19a0,	// (0x0000fcff) list_single_im_pane_t1

0x34cc,	// (0x0001182b) blid_accuracy_pane

0x34d4,	// (0x00011833) blid_compass_pane

0x34de,	// (0x0001183d) main_location_t1

0x34ee,	// (0x0001184d) main_location_t2

0x34fe,	// (0x0001185d) main_location_t3

0x0002,

0xf5ea,	// (0x0001d949) main_location_t

0x97a3,	// (0x00017b02) aid_levels_location

0x9b6c,	// (0x00017ecb) blid_accuracy_pane_g1

0x9b6c,	// (0x00017ecb) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0001d644) blid_accuracy_pane_g

0x9f5b,	// (0x000182ba) wml_content_pane

0x9f99,	// (0x000182f8) wml_button_pane_ParamLimits

0x9f99,	// (0x000182f8) wml_button_pane

0x19af,	// (0x0000fd0e) wml_list_single_large_pane_ParamLimits

0x19af,	// (0x0000fd0e) wml_list_single_large_pane

0x19c8,	// (0x0000fd27) wml_list_single_medium_pane_ParamLimits

0x19c8,	// (0x0000fd27) wml_list_single_medium_pane

0x19e2,	// (0x0000fd41) wml_list_single_small_pane_ParamLimits

0x19e2,	// (0x0000fd41) wml_list_single_small_pane

0x9fad,	// (0x0001830c) wml_selection_box_pane_ParamLimits

0x9fad,	// (0x0001830c) wml_selection_box_pane

0x9fc0,	// (0x0001831f) wml_list_single_pane_t1

0x9fcf,	// (0x0001832e) wml_list_single_medium_pane_t1

0x9fde,	// (0x0001833d) wml_list_single_large_pane_t1

0x9fed,	// (0x0001834c) input_focus_pane_cp02_ParamLimits

0x9fed,	// (0x0001834c) input_focus_pane_cp02

0xa000,	// (0x0001835f) wml_selection_box_pane_g1

0xa009,	// (0x00018368) wml_selection_box_pane_t1_ParamLimits

0xa009,	// (0x00018368) wml_selection_box_pane_t1

0x99fe,	// (0x00017d5d) bg_wml_button_pane_ParamLimits

0x99fe,	// (0x00017d5d) bg_wml_button_pane

0xa021,	// (0x00018380) wml_button_pane_g1

0xa029,	// (0x00018388) wml_button_pane_t1

0xa021,	// (0x00018380) wml_button_bg_pane_g1

0xa039,	// (0x00018398) wml_button_bg_pane_g2

0xa041,	// (0x000183a0) wml_button_bg_pane_g3

0xa049,	// (0x000183a8) wml_button_bg_pane_g4

0xa051,	// (0x000183b0) wml_button_bg_pane_g5

0xa059,	// (0x000183b8) wml_button_bg_pane_g6

0xa061,	// (0x000183c0) wml_button_bg_pane_g7

0xa069,	// (0x000183c8) wml_button_bg_pane_g8

0xa071,	// (0x000183d0) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0001d5e7) wml_button_bg_pane_g

0x1a01,	// (0x0000fd60) bg_list_pane_cp02

0xa079,	// (0x000183d8) mce_header_pane_ParamLimits

0xa079,	// (0x000183d8) mce_header_pane

0xa08f,	// (0x000183ee) mce_icon_pane

0xa08f,	// (0x000183ee) mce_image_pane

0xa098,	// (0x000183f7) mce_text_pane_ParamLimits

0xa098,	// (0x000183f7) mce_text_pane

0x1a0b,	// (0x0000fd6a) scroll_pane_cp03

0x9f91,	// (0x000182f0) scroll_pane_cp04

0xa0ab,	// (0x0001840a) scroll_pane_cp05_ParamLimits

0xa0ab,	// (0x0001840a) scroll_pane_cp05

0x1a15,	// (0x0000fd74) mce_header_field_pane_ParamLimits

0x1a15,	// (0x0000fd74) mce_header_field_pane

0x1a2e,	// (0x0000fd8d) mce_header_field_pane_2_ParamLimits

0x1a2e,	// (0x0000fd8d) mce_header_field_pane_2

0x1a44,	// (0x0000fda3) mce_header_field_pane_3

0x1a4c,	// (0x0000fdab) list_single_mce_message_pane_ParamLimits

0x1a4c,	// (0x0000fdab) list_single_mce_message_pane

0x1a68,	// (0x0000fdc7) list_single_mce_smart_pane_ParamLimits

0x1a68,	// (0x0000fdc7) list_single_mce_smart_pane

0xa0b7,	// (0x00018416) input_focus_pane_cp03

0xa0c0,	// (0x0001841f) list_header_data_pane

0x1a8f,	// (0x0000fdee) mce_header_field_pane_t1

0x1a9f,	// (0x0000fdfe) list_single_mce_header_pane_ParamLimits

0x1a9f,	// (0x0000fdfe) list_single_mce_header_pane

0xa0c8,	// (0x00018427) list_single_mce_header_pane_t1

0xa0d7,	// (0x00018436) list_single_mce_message_pane_g1

0xa0df,	// (0x0001843e) list_single_mce_message_pane_t1

0x1ad1,	// (0x0000fe30) bg_cale_heading_pane_cp01_ParamLimits

0x1ad1,	// (0x0000fe30) bg_cale_heading_pane_cp01

0xa0ed,	// (0x0001844c) bg_cale_pane_cp02_ParamLimits

0xa0ed,	// (0x0001844c) bg_cale_pane_cp02

0x1b04,	// (0x0000fe63) cale_month_corner_pane

0x1b1a,	// (0x0000fe79) cale_month_day_heading_pane_ParamLimits

0x1b1a,	// (0x0000fe79) cale_month_day_heading_pane

0x1b4d,	// (0x0000feac) cale_month_pane_g1_ParamLimits

0x1b4d,	// (0x0000feac) cale_month_pane_g1

0x1b79,	// (0x0000fed8) cale_month_pane_g2_ParamLimits

0x1b79,	// (0x0000fed8) cale_month_pane_g2

0x1b9a,	// (0x0000fef9) cale_month_pane_g3_ParamLimits

0x1b9a,	// (0x0000fef9) cale_month_pane_g3

0x1bd6,	// (0x0000ff35) cale_month_pane_g4_ParamLimits

0x1bd6,	// (0x0000ff35) cale_month_pane_g4

0x1c12,	// (0x0000ff71) cale_month_pane_g5_ParamLimits

0x1c12,	// (0x0000ff71) cale_month_pane_g5

0x1c4e,	// (0x0000ffad) cale_month_pane_g6_ParamLimits

0x1c4e,	// (0x0000ffad) cale_month_pane_g6

0x1c8a,	// (0x0000ffe9) cale_month_pane_g7_ParamLimits

0x1c8a,	// (0x0000ffe9) cale_month_pane_g7

0x1cc6,	// (0x00010025) cale_month_pane_g8_ParamLimits

0x1cc6,	// (0x00010025) cale_month_pane_g8

0x1d02,	// (0x00010061) cale_month_pane_g9_ParamLimits

0x1d02,	// (0x00010061) cale_month_pane_g9

0x1d38,	// (0x00010097) cale_month_pane_g10_ParamLimits

0x1d38,	// (0x00010097) cale_month_pane_g10

0x1d62,	// (0x000100c1) cale_month_pane_g11_ParamLimits

0x1d62,	// (0x000100c1) cale_month_pane_g11

0x1d8c,	// (0x000100eb) cale_month_pane_g12_ParamLimits

0x1d8c,	// (0x000100eb) cale_month_pane_g12

0x1dba,	// (0x00010119) cale_month_pane_g13_ParamLimits

0x1dba,	// (0x00010119) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0001d5fa) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0001d5fa) cale_month_pane_g

0x1de8,	// (0x00010147) cale_month_week_pane

0x1df9,	// (0x00010158) grid_cale_month_pane_ParamLimits

0x1df9,	// (0x00010158) grid_cale_month_pane

0x1e27,	// (0x00010186) cale_month_day_heading_pane_t1

0x1e85,	// (0x000101e4) cale_month_day_heading_pane_t2

0x1eea,	// (0x00010249) cale_month_day_heading_pane_t3

0x1f4f,	// (0x000102ae) cale_month_day_heading_pane_t4

0x1fb4,	// (0x00010313) cale_month_day_heading_pane_t5

0x2019,	// (0x00010378) cale_month_day_heading_pane_t6

0x207e,	// (0x000103dd) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0001d615) cale_month_day_heading_pane_t

0x9cbb,	// (0x0001801a) bg_cale_side_pane_cp01

0x20e3,	// (0x00010442) cale_month_week_pane_t1

0x20fa,	// (0x00010459) cale_month_week_pane_t2

0x2111,	// (0x00010470) cale_month_week_pane_t3

0x2128,	// (0x00010487) cale_month_week_pane_t4

0x213f,	// (0x0001049e) cale_month_week_pane_t5

0x2156,	// (0x000104b5) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0001d624) cale_month_week_pane_t

0x2175,	// (0x000104d4) cell_cale_month_pane_ParamLimits

0x2175,	// (0x000104d4) cell_cale_month_pane

0xa14c,	// (0x000184ab) cell_cale_month_pane_g1

0x2223,	// (0x00010582) cell_cale_month_pane_t1_ParamLimits

0x2223,	// (0x00010582) cell_cale_month_pane_t1

0x9cc9,	// (0x00018028) grid_highlight_pane_cp08

0x9b6c,	// (0x00017ecb) main_smil_g1

0x223f,	// (0x0001059e) smil_status_pane

0xa158,	// (0x000184b7) smil_text_pane

0xbab3,	// (0x00019e12) bg_popup_call3_rect_pane_g8

0xbabb,	// (0x00019e1a) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0001d8dd) bg_popup_call3_rect_pane_g

0xbd50,	// (0x0001a0af) smil_status_volume_pane_g1

0xa162,	// (0x000184c1) smil_status_pane_t1

0xbd83,	// (0x0001a0e2) volume_smil_pane

0xa179,	// (0x000184d8) list_smil_text_pane

0x2254,	// (0x000105b3) scroll_pane_cp011

0x225f,	// (0x000105be) smil_text_list_pane_t1_ParamLimits

0x225f,	// (0x000105be) smil_text_list_pane_t1

0xa183,	// (0x000184e2) aid_volume_smil_ParamLimits

0xa183,	// (0x000184e2) aid_volume_smil

0x9b6c,	// (0x00017ecb) smil_volume_pane_g1

0x9b6c,	// (0x00017ecb) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0001d644) smil_volume_pane_g

0x9af3,	// (0x00017e52) listscroll_cale_day_pane

0xa1a5,	// (0x00018504) bg_cale_pane

0xa1bd,	// (0x0001851c) list_cale_pane

0xa1ce,	// (0x0001852d) scroll_pane_cp09

0xa1df,	// (0x0001853e) cale_bg_pane_g1

0xa1e7,	// (0x00018546) cale_bg_pane_g2

0xa1ef,	// (0x0001854e) cale_bg_pane_g3

0xa1f7,	// (0x00018556) cale_bg_pane_g4

0xa1ff,	// (0x0001855e) cale_bg_pane_g5

0xa207,	// (0x00018566) cale_bg_pane_g6

0xa20f,	// (0x0001856e) cale_bg_pane_g7

0xa217,	// (0x00018576) cale_bg_pane_g8

0xa21f,	// (0x0001857e) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0001d649) cale_bg_pane_g

0x22b4,	// (0x00010613) list_cale_time_pane_ParamLimits

0x22b4,	// (0x00010613) list_cale_time_pane

0x22c9,	// (0x00010628) list_cale_time_pane_g1_ParamLimits

0x22c9,	// (0x00010628) list_cale_time_pane_g1

0xa227,	// (0x00018586) list_cale_time_pane_g2_ParamLimits

0xa227,	// (0x00018586) list_cale_time_pane_g2

0x22d5,	// (0x00010634) list_cale_time_pane_g3_ParamLimits

0x22d5,	// (0x00010634) list_cale_time_pane_g3

0x22e3,	// (0x00010642) list_cale_time_pane_g4_ParamLimits

0x22e3,	// (0x00010642) list_cale_time_pane_g4

0x22f1,	// (0x00010650) list_cale_time_pane_g5_ParamLimits

0x22f1,	// (0x00010650) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0001d65c) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0001d65c) list_cale_time_pane_g

0x22ff,	// (0x0001065e) list_cale_time_pane_t1_ParamLimits

0x22ff,	// (0x0001065e) list_cale_time_pane_t1

0x2327,	// (0x00010686) list_cale_time_pane_t2_ParamLimits

0x2327,	// (0x00010686) list_cale_time_pane_t2

0x269d,	// (0x000109fc) aid_blid_cardinal_pane

0x26df,	// (0x00010a3e) compass_pane_t4

0x234f,	// (0x000106ae) list_cale_time_pane_t4_ParamLimits

0x234f,	// (0x000106ae) list_cale_time_pane_t4

0x26ed,	// (0x00010a4c) compass_pane_t5

0x26fd,	// (0x00010a5c) compass_pane_t6

0x270b,	// (0x00010a6a) compass_pane_t7

0xa719,	// (0x00018a78) navi_pane_cc_t1

0xa880,	// (0x00018bdf) aid_phob_thumbnail_center_pane

0x2e92,	// (0x000111f1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0001d669) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0001d669) list_cale_time_pane_t

0x93fa,	// (0x00017759) bg_popup_window_pane_cp02_ParamLimits

0x93fa,	// (0x00017759) bg_popup_window_pane_cp02

0xa241,	// (0x000185a0) heading_pane_cp01_ParamLimits

0xa241,	// (0x000185a0) heading_pane_cp01

0xa24d,	// (0x000185ac) loc_req_pane_ParamLimits

0xa24d,	// (0x000185ac) loc_req_pane

0xa25d,	// (0x000185bc) loc_type_pane_ParamLimits

0xa25d,	// (0x000185bc) loc_type_pane

0xa26f,	// (0x000185ce) loc_type_pane_t1_ParamLimits

0xa26f,	// (0x000185ce) loc_type_pane_t1

0xa281,	// (0x000185e0) loc_type_pane_t2_ParamLimits

0xa281,	// (0x000185e0) loc_type_pane_t2

0xa293,	// (0x000185f2) loc_type_pane_t3_ParamLimits

0xa293,	// (0x000185f2) loc_type_pane_t3

0x0002,

0xf311,	// (0x0001d670) loc_type_pane_t_ParamLimits

0xf311,	// (0x0001d670) loc_type_pane_t

0xa2a5,	// (0x00018604) list_loc_req_pane

0xa2af,	// (0x0001860e) scroll_pane_cp012

0x2377,	// (0x000106d6) list_single_loc_request_popup_menu_pane_ParamLimits

0x2377,	// (0x000106d6) list_single_loc_request_popup_menu_pane

0xa2ba,	// (0x00018619) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa2ba,	// (0x00018619) list_single_loc_request_popup_menu_pane_g1

0xa2c6,	// (0x00018625) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa2c6,	// (0x00018625) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0001d677) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0001d677) list_single_loc_request_popup_menu_pane_g

0xa2d2,	// (0x00018631) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa2d2,	// (0x00018631) list_single_loc_request_popup_menu_pane_t1

0x99fe,	// (0x00017d5d) bg_popup_window_pane_cp03_ParamLimits

0x99fe,	// (0x00017d5d) bg_popup_window_pane_cp03

0xa2e8,	// (0x00018647) heading_loc_req_pane_ParamLimits

0xa2e8,	// (0x00018647) heading_loc_req_pane

0x2384,	// (0x000106e3) popup_dyc_status_message_window_g1_ParamLimits

0x2384,	// (0x000106e3) popup_dyc_status_message_window_g1

0x2398,	// (0x000106f7) popup_dyc_status_message_window_t1_ParamLimits

0x2398,	// (0x000106f7) popup_dyc_status_message_window_t1

0x23ad,	// (0x0001070c) popup_dyc_status_message_window_t2_ParamLimits

0x23ad,	// (0x0001070c) popup_dyc_status_message_window_t2

0x23c2,	// (0x00010721) popup_dyc_status_message_window_t3_ParamLimits

0x23c2,	// (0x00010721) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0001d67c) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0001d67c) popup_dyc_status_message_window_t

0x97a3,	// (0x00017b02) bg_heading_pane_cp01

0xa2f4,	// (0x00018653) heading_loc_req_pane_g1

0xa2fc,	// (0x0001865b) heading_loc_req_pane_g2

0xa304,	// (0x00018663) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0001d683) heading_loc_req_pane_g

0xa30c,	// (0x0001866b) heading_loc_req_pane_t1

0xa393,	// (0x000186f2) bg_popup_sub_pane_cp01_ParamLimits

0xa393,	// (0x000186f2) bg_popup_sub_pane_cp01

0xa3a1,	// (0x00018700) popup_cale_events_window_g1_ParamLimits

0xa3a1,	// (0x00018700) popup_cale_events_window_g1

0xa3c1,	// (0x00018720) popup_cale_events_window_g2_ParamLimits

0xa3c1,	// (0x00018720) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0001d6b7) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0001d6b7) popup_cale_events_window_g

0xa3e1,	// (0x00018740) popup_cale_events_window_t1_ParamLimits

0xa3e1,	// (0x00018740) popup_cale_events_window_t1

0xa3f3,	// (0x00018752) popup_cale_events_window_t2_ParamLimits

0xa3f3,	// (0x00018752) popup_cale_events_window_t2

0xa431,	// (0x00018790) popup_cale_events_window_t3_ParamLimits

0xa431,	// (0x00018790) popup_cale_events_window_t3

0xa46b,	// (0x000187ca) popup_cale_events_window_t4_ParamLimits

0xa46b,	// (0x000187ca) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0001d6bc) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0001d6bc) popup_cale_events_window_t

0x2450,	// (0x000107af) call_type_pane

0x2460,	// (0x000107bf) popup_call_status_window_g1

0x2474,	// (0x000107d3) popup_call_status_window_g2

0x2488,	// (0x000107e7) popup_call_status_window_g3

0x0002,

0xf366,	// (0x0001d6c5) popup_call_status_window_g

0xa4a1,	// (0x00018800) call_type_pane_g1

0xa4aa,	// (0x00018809) call_type_pane_g2

0x0001,

0xf36d,	// (0x0001d6cc) call_type_pane_g

0x97a3,	// (0x00017b02) bg_popup_sub_pane_cp02

0xa4b3,	// (0x00018812) listscroll_popup_wml_pane

0xa4bb,	// (0x0001881a) list_wml_pane

0xa4c5,	// (0x00018824) scroll_pane_cp013

0xa4d0,	// (0x0001882f) list_single_graphic_popup_wml_pane_ParamLimits

0xa4d0,	// (0x0001882f) list_single_graphic_popup_wml_pane

0x9b6c,	// (0x00017ecb) list_single_graphic_popup_wml_pane_g1

0xa4e4,	// (0x00018843) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0001d6d1) list_single_graphic_popup_wml_pane_g

0xa4ec,	// (0x0001884b) list_single_graphic_popup_wml_pane_t1

0xa502,	// (0x00018861) aid_call_pane

0x99f6,	// (0x00017d55) popup_clock_analogue_window_g1

0x99f6,	// (0x00017d55) popup_clock_analogue_window_g2

0xa50a,	// (0x00018869) popup_clock_analogue_window_g3

0xa50a,	// (0x00018869) popup_clock_analogue_window_g4

0x9b6c,	// (0x00017ecb) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x0001d6d6) popup_clock_analogue_window_g

0xa512,	// (0x00018871) popup_clock_analogue_window_t1

0xa520,	// (0x0001887f) clock_digital_number_pane_ParamLimits

0xa520,	// (0x0001887f) clock_digital_number_pane

0xa52c,	// (0x0001888b) clock_digital_number_pane_cp02_ParamLimits

0xa52c,	// (0x0001888b) clock_digital_number_pane_cp02

0xa538,	// (0x00018897) clock_digital_number_pane_cp03_ParamLimits

0xa538,	// (0x00018897) clock_digital_number_pane_cp03

0xa544,	// (0x000188a3) clock_digital_number_pane_cp04_ParamLimits

0xa544,	// (0x000188a3) clock_digital_number_pane_cp04

0xa550,	// (0x000188af) clock_digital_separator_pane_ParamLimits

0xa550,	// (0x000188af) clock_digital_separator_pane

0xa55c,	// (0x000188bb) popup_clock_digital_window_t1

0x9b6c,	// (0x00017ecb) clock_digital_number_pane_g1

0x9b6c,	// (0x00017ecb) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0001d644) clock_digital_number_pane_g

0x9b6c,	// (0x00017ecb) clock_digital_separator_pane_g1

0x9b6c,	// (0x00017ecb) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0001d644) clock_digital_separator_pane_g

0x97a3,	// (0x00017b02) bg_popup_window_pane_cp04

0xa579,	// (0x000188d8) heading_pane_cp03

0xa581,	// (0x000188e0) listscroll_popup_gms_pane

0xa589,	// (0x000188e8) grid_large_graphic_popup_pane

0xa593,	// (0x000188f2) listscroll_popup_gms_pane_g1

0xa59b,	// (0x000188fa) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0001d6e1) listscroll_popup_gms_pane_g

0x9f91,	// (0x000182f0) scroll_pane_cp014

0x2498,	// (0x000107f7) cell_large_graphic_popup_pane_ParamLimits

0x2498,	// (0x000107f7) cell_large_graphic_popup_pane

0x24b0,	// (0x0001080f) cell_large_graphic_popup_pane_g1_ParamLimits

0x24b0,	// (0x0001080f) cell_large_graphic_popup_pane_g1

0xa5a3,	// (0x00018902) cell_large_graphic_popup_pane_g2_ParamLimits

0xa5a3,	// (0x00018902) cell_large_graphic_popup_pane_g2

0xa5af,	// (0x0001890e) cell_large_graphic_popup_pane_g3_ParamLimits

0xa5af,	// (0x0001890e) cell_large_graphic_popup_pane_g3

0xa5bc,	// (0x0001891b) cell_large_graphic_popup_pane_g4_ParamLimits

0xa5bc,	// (0x0001891b) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x0001d6e6) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x0001d6e6) cell_large_graphic_popup_pane_g

0xa5cc,	// (0x0001892b) grid_highlight_pane_cp010

0x9b6c,	// (0x00017ecb) bg_popup_call_pane_g1

0xa5d6,	// (0x00018935) list_single_graphic_popup_conf_pane_ParamLimits

0xa5d6,	// (0x00018935) list_single_graphic_popup_conf_pane

0xa5e8,	// (0x00018947) list_highlight_pane_cp01

0xa5f1,	// (0x00018950) list_single_graphic_popup_conf_pane_g1

0xa5f9,	// (0x00018958) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0001d6ef) list_single_graphic_popup_conf_pane_g

0xa601,	// (0x00018960) list_single_graphic_popup_conf_pane_t1

0xa60f,	// (0x0001896e) linegrid_cams_pane_g1

0x24bc,	// (0x0001081b) linegrid_cams_pane_g2

0x9cfc,	// (0x0001805b) linegrid_cams_pane_g3

0xa618,	// (0x00018977) linegrid_cams_pane_g4

0x24c5,	// (0x00010824) linegrid_cams_pane_g5

0x24ce,	// (0x0001082d) linegrid_cams_pane_g6

0x9d05,	// (0x00018064) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0001d6f4) linegrid_cams_pane_g

0xa621,	// (0x00018980) popup_clock_analogue_window

0xa621,	// (0x00018980) popup_clock_digital_window

0x97a3,	// (0x00017b02) popup_phob_thumbnail_window

0x9b6c,	// (0x00017ecb) call_video_uplink_pane_g1

0xa62a,	// (0x00018989) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0001d703) call_video_uplink_pane_g

0xa632,	// (0x00018991) video_uplink_pane

0xa63a,	// (0x00018999) mce_image_pane_g1

0x24d9,	// (0x00010838) mce_image_pane_g2

0x24e3,	// (0x00010842) mce_image_pane_g3

0x24ed,	// (0x0001084c) mce_image_pane_g4

0x24f5,	// (0x00010854) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0001d708) mce_image_pane_g

0xa644,	// (0x000189a3) control_top_pane_stacon_cp01_ParamLimits

0xa644,	// (0x000189a3) control_top_pane_stacon_cp01

0xa658,	// (0x000189b7) uni_indicator_pane_stacon_cp01_ParamLimits

0xa658,	// (0x000189b7) uni_indicator_pane_stacon_cp01

0xa669,	// (0x000189c8) bg_popup_sub_pane_cp03

0x24fd,	// (0x0001085c) chi_dic_find_pane

0x2505,	// (0x00010864) listscroll_chi_dic_pane

0x250e,	// (0x0001086d) main_pane_chidic_g1

0x2521,	// (0x00010880) chi_dic_find_pane_t1

0xa673,	// (0x000189d2) find_chidic_pane

0xa67c,	// (0x000189db) chi_dic_list_pane_ParamLimits

0xa67c,	// (0x000189db) chi_dic_list_pane

0xa68d,	// (0x000189ec) scroll_pane_cp020

0x252f,	// (0x0001088e) find_chidic_pane_t1

0x97a3,	// (0x00017b02) input_focus_pane_cp06

0x253e,	// (0x0001089d) list_chi_dic_pane_ParamLimits

0x253e,	// (0x0001089d) list_chi_dic_pane

0x2550,	// (0x000108af) list_chi_dic_pane_t1_ParamLimits

0x2550,	// (0x000108af) list_chi_dic_pane_t1

0x97a3,	// (0x00017b02) list_highlight_pane_cp020

0xa695,	// (0x000189f4) bg_cale_heading_pane_g1

0x2563,	// (0x000108c2) bg_cale_heading_pane_g2

0x256b,	// (0x000108ca) bg_cale_heading_pane_g3

0x2573,	// (0x000108d2) bg_cale_heading_pane_g4

0x257b,	// (0x000108da) bg_cale_heading_pane_g5

0x2583,	// (0x000108e2) bg_cale_heading_pane_g6

0x258b,	// (0x000108ea) bg_cale_heading_pane_g7

0x2593,	// (0x000108f2) bg_cale_heading_pane_g8

0x259b,	// (0x000108fa) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0001d713) bg_cale_heading_pane_g

0xa695,	// (0x000189f4) bg_cale_side_pane_g1

0x25a3,	// (0x00010902) bg_cale_side_pane_g2

0x25ad,	// (0x0001090c) bg_cale_side_pane_g3

0x25b7,	// (0x00010916) bg_cale_side_pane_g4

0x25c1,	// (0x00010920) bg_cale_side_pane_g5

0x25cb,	// (0x0001092a) bg_cale_side_pane_g6

0x25d5,	// (0x00010934) bg_cale_side_pane_g7

0x25df,	// (0x0001093e) bg_cale_side_pane_g8

0x25e7,	// (0x00010946) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0001d726) bg_cale_side_pane_g

0x25ef,	// (0x0001094e) popup_call_status_window_ParamLimits

0x25ef,	// (0x0001094e) popup_call_status_window

0xa69d,	// (0x000189fc) stacon_top_pane

0xa6a5,	// (0x00018a04) status_pane_ParamLimits

0xa6a5,	// (0x00018a04) status_pane

0xa6ba,	// (0x00018a19) status_small_pane

0xa6c2,	// (0x00018a21) control_pane

0x97a3,	// (0x00017b02) stacon_bottom_pane

0xa6ca,	// (0x00018a29) list_single_mce_smart_pane_t1_ParamLimits

0xa6ca,	// (0x00018a29) list_single_mce_smart_pane_t1

0xa6dd,	// (0x00018a3c) list_single_mce_smart_pane_t2_ParamLimits

0xa6dd,	// (0x00018a3c) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0001d739) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0001d739) list_single_mce_smart_pane_t

0x263c,	// (0x0001099b) compass_pane

0x2647,	// (0x000109a6) main_location2_pane_t1

0x265d,	// (0x000109bc) main_location2_pane_t2

0x2673,	// (0x000109d2) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0001d73e) main_location2_pane_t

0xa6fc,	// (0x00018a5b) compass_pane_g1_ParamLimits

0xa6fc,	// (0x00018a5b) compass_pane_g1

0x26c1,	// (0x00010a20) compass_pane_t1

0x26d0,	// (0x00010a2f) compass_pane_t2

0x0005,

0xf3e8,	// (0x0001d747) compass_pane_t

0x271b,	// (0x00010a7a) text_secondary_cp61

0xa710,	// (0x00018a6f) navi_pane_cams_g5

0xa733,	// (0x00018a92) navi_pane_im_t1

0xa741,	// (0x00018aa0) navi_pane_mp_g1_ParamLimits

0xa741,	// (0x00018aa0) navi_pane_mp_g1

0xa755,	// (0x00018ab4) navi_pane_mp_g2_ParamLimits

0xa755,	// (0x00018ab4) navi_pane_mp_g2

0xa761,	// (0x00018ac0) navi_pane_mp_g3_ParamLimits

0xa761,	// (0x00018ac0) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0001d75b) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0001d75b) navi_pane_mp_g

0xa76d,	// (0x00018acc) navi_pane_mp_t1

0xa77b,	// (0x00018ada) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0001d762) navi_pane_mp_t

0xa7b7,	// (0x00018b16) navi_pane_vt_g1

0xa76d,	// (0x00018acc) navi_pane_vt_t1

0xa7bf,	// (0x00018b1e) navi_slider_pane

0xa7c7,	// (0x00018b26) zooming_pane

0xa7cf,	// (0x00018b2e) navi_slider_pane_g1

0xa7d8,	// (0x00018b37) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0001d769) navi_slider_pane_g

0xa805,	// (0x00018b64) aid_levels_zoom

0xa80d,	// (0x00018b6c) zooming_pane_g1

0xa815,	// (0x00018b74) zooming_pane_g2

0xa815,	// (0x00018b74) zooming_pane_g3

0x0002,

0xf419,	// (0x0001d778) zooming_pane_g

0xa81d,	// (0x00018b7c) level_10_zoom

0xa826,	// (0x00018b85) level_11_zoom

0xa82f,	// (0x00018b8e) level_1_zoom

0xa838,	// (0x00018b97) level_2_zoom

0xa841,	// (0x00018ba0) level_3_zoom

0xa84a,	// (0x00018ba9) level_4_zoom

0xa853,	// (0x00018bb2) level_5_zoom

0xa85c,	// (0x00018bbb) level_6_zoom

0xa865,	// (0x00018bc4) level_7_zoom

0xa86e,	// (0x00018bcd) level_8_zoom

0xa877,	// (0x00018bd6) level_9_zoom

0xa888,	// (0x00018be7) popup_phob_thumbnail_window_g1

0xa890,	// (0x00018bef) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0001d77f) popup_phob_thumbnail_window_g

0xbc19,	// (0x00019f78) level_1_location

0xbc21,	// (0x00019f80) level_2_location

0xbc29,	// (0x00019f88) level_3_location

0xbc31,	// (0x00019f90) level_4_location

0xa7c7,	// (0x00018b26) level_5_location

0x285c,	// (0x00010bbb) mce_icon_pane_g1

0x2864,	// (0x00010bc3) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0001d784) mce_icon_pane_g

0x286c,	// (0x00010bcb) main_mup_pane_g1_ParamLimits

0x286c,	// (0x00010bcb) main_mup_pane_g1

0x2882,	// (0x00010be1) main_mup_pane_g2_ParamLimits

0x2882,	// (0x00010be1) main_mup_pane_g2

0x289a,	// (0x00010bf9) main_mup_pane_g3_ParamLimits

0x289a,	// (0x00010bf9) main_mup_pane_g3

0x28b2,	// (0x00010c11) main_mup_pane_g4_ParamLimits

0x28b2,	// (0x00010c11) main_mup_pane_g4

0x28c4,	// (0x00010c23) main_mup_pane_g5_ParamLimits

0x28c4,	// (0x00010c23) main_mup_pane_g5

0x28e0,	// (0x00010c3f) main_mup_pane_g6_ParamLimits

0x28e0,	// (0x00010c3f) main_mup_pane_g6

0x28fa,	// (0x00010c59) main_mup_pane_g7_ParamLimits

0x28fa,	// (0x00010c59) main_mup_pane_g7

0x2918,	// (0x00010c77) main_mup_pane_g8_ParamLimits

0x2918,	// (0x00010c77) main_mup_pane_g8

0x2936,	// (0x00010c95) main_mup_pane_g9_ParamLimits

0x2936,	// (0x00010c95) main_mup_pane_g9

0x2952,	// (0x00010cb1) main_mup_pane_g10_ParamLimits

0x2952,	// (0x00010cb1) main_mup_pane_g10

0x2970,	// (0x00010ccf) main_mup_pane_g11_ParamLimits

0x2970,	// (0x00010ccf) main_mup_pane_g11

0x298a,	// (0x00010ce9) main_mup_pane_g12_ParamLimits

0x298a,	// (0x00010ce9) main_mup_pane_g12

0x29a0,	// (0x00010cff) main_mup_pane_g13_ParamLimits

0x29a0,	// (0x00010cff) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0001d789) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0001d789) main_mup_pane_g

0x29b4,	// (0x00010d13) main_mup_pane_t1_ParamLimits

0x29b4,	// (0x00010d13) main_mup_pane_t1

0x29d0,	// (0x00010d2f) main_mup_pane_t2_ParamLimits

0x29d0,	// (0x00010d2f) main_mup_pane_t2

0x29e8,	// (0x00010d47) main_mup_pane_t3_ParamLimits

0x29e8,	// (0x00010d47) main_mup_pane_t3

0x2a00,	// (0x00010d5f) main_mup_pane_t4_ParamLimits

0x2a00,	// (0x00010d5f) main_mup_pane_t4

0x2a1e,	// (0x00010d7d) main_mup_pane_t5_ParamLimits

0x2a1e,	// (0x00010d7d) main_mup_pane_t5

0x2a33,	// (0x00010d92) main_mup_pane_t6_ParamLimits

0x2a33,	// (0x00010d92) main_mup_pane_t6

0x0005,

0xf445,	// (0x0001d7a4) main_mup_pane_t_ParamLimits

0xf445,	// (0x0001d7a4) main_mup_pane_t

0x2a45,	// (0x00010da4) mup_progress_pane_ParamLimits

0x2a45,	// (0x00010da4) mup_progress_pane

0x2a51,	// (0x00010db0) mup_visualizer_pane_ParamLimits

0x2a51,	// (0x00010db0) mup_visualizer_pane

0x2a83,	// (0x00010de2) mup_volume_pane_ParamLimits

0x2a83,	// (0x00010de2) mup_volume_pane

0xa898,	// (0x00018bf7) mup_visualizer_pane_g1_ParamLimits

0xa898,	// (0x00018bf7) mup_visualizer_pane_g1

0xa898,	// (0x00018bf7) mup_visualizer_pane_g2_ParamLimits

0xa898,	// (0x00018bf7) mup_visualizer_pane_g2

0xa6fc,	// (0x00018a5b) mup_visualizer_pane_g3_ParamLimits

0xa6fc,	// (0x00018a5b) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0001d7b1) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0001d7b1) mup_visualizer_pane_g

0x9b6c,	// (0x00017ecb) mup_volume_pane_g1

0xa8ae,	// (0x00018c0d) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0001d7b8) mup_volume_pane_g

0x9b6c,	// (0x00017ecb) mup_progress_pane_g1

0xa8b7,	// (0x00018c16) mup_progress_pane_g2

0xa8c0,	// (0x00018c1f) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0001d7bd) mup_progress_pane_g

0x97a3,	// (0x00017b02) bg_popup_window_pane_cp05

0xa8c9,	// (0x00018c28) heading_pane_cp02_ParamLimits

0xa8c9,	// (0x00018c28) heading_pane_cp02

0xa8e5,	// (0x00018c44) list_popup_blid_pane

0xa8ed,	// (0x00018c4c) list_blid_sat_info_pane_ParamLimits

0xa8ed,	// (0x00018c4c) list_blid_sat_info_pane

0xa900,	// (0x00018c5f) list_blid_sat_info_pane_g1

0xa908,	// (0x00018c67) list_blid_sat_info_pane_t1

0x2bad,	// (0x00010f0c) mup_equalizer_pane_ParamLimits

0x2bad,	// (0x00010f0c) mup_equalizer_pane

0x2bce,	// (0x00010f2d) mup_equalizer_pane_cp1_ParamLimits

0x2bce,	// (0x00010f2d) mup_equalizer_pane_cp1

0x2bef,	// (0x00010f4e) mup_equalizer_pane_cp2_ParamLimits

0x2bef,	// (0x00010f4e) mup_equalizer_pane_cp2

0x2c14,	// (0x00010f73) mup_equalizer_pane_cp3_ParamLimits

0x2c14,	// (0x00010f73) mup_equalizer_pane_cp3

0x2c3d,	// (0x00010f9c) mup_equalizer_pane_cp4_ParamLimits

0x2c3d,	// (0x00010f9c) mup_equalizer_pane_cp4

0x2c66,	// (0x00010fc5) mup_equalizer_pane_cp5

0x2c7e,	// (0x00010fdd) mup_equalizer_pane_cp6

0x2c96,	// (0x00010ff5) mup_equalizer_pane_cp7

0xbb33,	// (0x00019e92) bg_popup_call_poc_act_pane_g9

0xbb3b,	// (0x00019e9a) bg_popup_call_poc_act_pane_g10

0xbb43,	// (0x00019ea2) bg_popup_call_poc_act_pane_g11

0x000a,

0x99fe,	// (0x00017d5d) mup_scale_pane

0x9b6c,	// (0x00017ecb) mup_scale_pane_g1

0xa916,	// (0x00018c75) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0001d7d9) mup_scale_pane_g

0xa93a,	// (0x00018c99) msg_data_pane

0xa942,	// (0x00018ca1) scroll_pane_cp017

0x2cc0,	// (0x0001101f) bg_list_pane_cp04_ParamLimits

0x2cc0,	// (0x0001101f) bg_list_pane_cp04

0xa952,	// (0x00018cb1) msg_data_pane_g1

0x2ce0,	// (0x0001103f) msg_data_pane_g2

0x2cea,	// (0x00011049) msg_data_pane_g3

0x2cf4,	// (0x00011053) msg_data_pane_g4

0x2cfc,	// (0x0001105b) msg_data_pane_g5

0x2d04,	// (0x00011063) msg_data_pane_g6

0x2d0c,	// (0x0001106b) msg_data_pane_g7

0x0006,

0xf489,	// (0x0001d7e8) msg_data_pane_g

0x2d14,	// (0x00011073) msg_text_pane_ParamLimits

0x2d14,	// (0x00011073) msg_text_pane

0x2d43,	// (0x000110a2) qrid_highlight_pane_cp011_ParamLimits

0x2d43,	// (0x000110a2) qrid_highlight_pane_cp011

0x97a3,	// (0x00017b02) msg_body_pane

0x97a3,	// (0x00017b02) msg_header_pane

0xa963,	// (0x00018cc2) input_focus_pane_cp07

0x2d67,	// (0x000110c6) msg_header_pane_t1_ParamLimits

0x2d67,	// (0x000110c6) msg_header_pane_t1

0xa978,	// (0x00018cd7) msg_header_pane_t2_ParamLimits

0xa978,	// (0x00018cd7) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0001d7fc) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0001d7fc) msg_header_pane_t

0xa98a,	// (0x00018ce9) msg_body_pane_g1

0x2d7b,	// (0x000110da) msg_body_pane_t1_ParamLimits

0x2d7b,	// (0x000110da) msg_body_pane_t1

0xa992,	// (0x00018cf1) msg_body_pane_t2_ParamLimits

0xa992,	// (0x00018cf1) msg_body_pane_t2

0xa9a4,	// (0x00018d03) msg_body_pane_t3_ParamLimits

0xa9a4,	// (0x00018d03) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0001d801) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0001d801) msg_body_pane_t

0x2de6,	// (0x00011145) main_viewer_pane_g1_ParamLimits

0x2de6,	// (0x00011145) main_viewer_pane_g1

0x2df4,	// (0x00011153) main_viewer_pane_g2_ParamLimits

0x2df4,	// (0x00011153) main_viewer_pane_g2

0x2e02,	// (0x00011161) main_viewer_pane_g3_ParamLimits

0x2e02,	// (0x00011161) main_viewer_pane_g3

0x2e11,	// (0x00011170) main_viewer_pane_g4_ParamLimits

0x2e11,	// (0x00011170) main_viewer_pane_g4

0xa9ce,	// (0x00018d2d) main_viewer_pane_g5_ParamLimits

0xa9ce,	// (0x00018d2d) main_viewer_pane_g5

0xa9ce,	// (0x00018d2d) main_viewer_pane_g7_ParamLimits

0xa9ce,	// (0x00018d2d) main_viewer_pane_g7

0xa9e0,	// (0x00018d3f) main_viewer_pane_g8_ParamLimits

0xa9e0,	// (0x00018d3f) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0001d811) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0001d811) main_viewer_pane_g

0xa9f8,	// (0x00018d57) viewer_content_pane_ParamLimits

0xa9f8,	// (0x00018d57) viewer_content_pane

0x2e4f,	// (0x000111ae) main_postcard_pane_g1_ParamLimits

0x2e4f,	// (0x000111ae) main_postcard_pane_g1

0x2e65,	// (0x000111c4) main_postcard_pane_g2_ParamLimits

0x2e65,	// (0x000111c4) main_postcard_pane_g2

0x2e7b,	// (0x000111da) main_postcard_pane_g3_ParamLimits

0x2e7b,	// (0x000111da) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0001d822) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0001d822) main_postcard_pane_g

0x2e92,	// (0x000111f1) main_postcard_pane_g4

0xbd63,	// (0x0001a0c2) smil_status_volume_pane_g2

0x2ed5,	// (0x00011234) postcard_pane_ParamLimits

0x2ed5,	// (0x00011234) postcard_pane

0xaa06,	// (0x00018d65) postcard_pane_g1_ParamLimits

0xaa06,	// (0x00018d65) postcard_pane_g1

0x2f25,	// (0x00011284) postcard_pane_g2_ParamLimits

0x2f25,	// (0x00011284) postcard_pane_g2

0x2f31,	// (0x00011290) postcard_pane_g3_ParamLimits

0x2f31,	// (0x00011290) postcard_pane_g3

0xaa14,	// (0x00018d73) postcard_pane_g4_ParamLimits

0xaa14,	// (0x00018d73) postcard_pane_g4

0x2f3d,	// (0x0001129c) postcard_pane_g5_ParamLimits

0x2f3d,	// (0x0001129c) postcard_pane_g5

0x2f4f,	// (0x000112ae) postcard_pane_g6_ParamLimits

0x2f4f,	// (0x000112ae) postcard_pane_g6

0xaa06,	// (0x00018d65) postcard_pane_g7_ParamLimits

0xaa06,	// (0x00018d65) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0001d82f) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0001d82f) postcard_pane_g

0x2f67,	// (0x000112c6) main_mp2_pane_g1_ParamLimits

0x2f67,	// (0x000112c6) main_mp2_pane_g1

0x2f75,	// (0x000112d4) main_mp2_pane_g2_ParamLimits

0x2f75,	// (0x000112d4) main_mp2_pane_g2

0x2f81,	// (0x000112e0) main_mp2_pane_g3_ParamLimits

0x2f81,	// (0x000112e0) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0001d83e) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0001d83e) main_mp2_pane_g

0x2f8d,	// (0x000112ec) main_mp2_pane_t1_ParamLimits

0x2f8d,	// (0x000112ec) main_mp2_pane_t1

0x2fa4,	// (0x00011303) main_mp2_pane_t2_ParamLimits

0x2fa4,	// (0x00011303) main_mp2_pane_t2

0x2fb8,	// (0x00011317) main_mp2_pane_t3_ParamLimits

0x2fb8,	// (0x00011317) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0001d845) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0001d845) main_mp2_pane_t

0xaa22,	// (0x00018d81) pec_content_pane_ParamLimits

0xaa22,	// (0x00018d81) pec_content_pane

0x9f91,	// (0x000182f0) scroll_pane_cp015

0xaa34,	// (0x00018d93) pec_attribute_pane_ParamLimits

0xaa34,	// (0x00018d93) pec_attribute_pane

0x2fca,	// (0x00011329) pec_content_pane_g1_ParamLimits

0x2fca,	// (0x00011329) pec_content_pane_g1

0xaa44,	// (0x00018da3) pec_content_pane_t1_ParamLimits

0xaa44,	// (0x00018da3) pec_content_pane_t1

0xaa56,	// (0x00018db5) pec_content_pane_t2_ParamLimits

0xaa56,	// (0x00018db5) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0001d84c) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0001d84c) pec_content_pane_t

0x2fd6,	// (0x00011335) list_single_graphic_pane_cp01_ParamLimits

0x2fd6,	// (0x00011335) list_single_graphic_pane_cp01

0x99fe,	// (0x00017d5d) bg_popup_sub_pane_cp04

0xaa68,	// (0x00018dc7) popup_mup_playback_window_g1

0xaa74,	// (0x00018dd3) popup_mup_playback_window_t1

0xaa89,	// (0x00018de8) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0001d851) popup_mup_playback_window_t

0xaac0,	// (0x00018e1f) main_image_pane_g1_ParamLimits

0xaac0,	// (0x00018e1f) main_image_pane_g1

0xab03,	// (0x00018e62) scroll_pane_cp018_ParamLimits

0xab03,	// (0x00018e62) scroll_pane_cp018

0xab1b,	// (0x00018e7a) scroll_pane_cp016_ParamLimits

0xab1b,	// (0x00018e7a) scroll_pane_cp016

0x30a8,	// (0x00011407) smil2_image_pane_ParamLimits

0x30a8,	// (0x00011407) smil2_image_pane

0x30de,	// (0x0001143d) smil2_root_pane_ParamLimits

0x30de,	// (0x0001143d) smil2_root_pane

0x3116,	// (0x00011475) smil2_text_pane_ParamLimits

0x3116,	// (0x00011475) smil2_text_pane

0x97a3,	// (0x00017b02) bg_list_pane_cp06

0xab57,	// (0x00018eb6) grid_radio_pane

0x97a3,	// (0x00017b02) bg_popup_window_pane_cp06

0xab61,	// (0x00018ec0) main_fmradio_pane_t1

0xa579,	// (0x000188d8) heading_pane_cp04

0xab6f,	// (0x00018ece) main_fmradio_pane_t2

0xbb4b,	// (0x00019eaa) popup_cale_lunar_info_window_g1

0xab7d,	// (0x00018edc) main_fmradio_pane_t3

0xbb53,	// (0x00019eb2) popup_cale_lunar_info_window_g2

0xab8d,	// (0x00018eec) main_fmradio_pane_t4

0x0001,

0xab9b,	// (0x00018efa) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x0001d92c) popup_cale_lunar_info_window_g

0xf507,	// (0x0001d866) main_fmradio_pane_t

0xaba9,	// (0x00018f08) wait_bar_pane_cp03

0xabb1,	// (0x00018f10) cell_fmradio_pane_ParamLimits

0xabb1,	// (0x00018f10) cell_fmradio_pane

0xaa06,	// (0x00018d65) cell_fmradio_pane_g1_ParamLimits

0xaa06,	// (0x00018d65) cell_fmradio_pane_g1

0x97a3,	// (0x00017b02) grid_highlight_pane_cp011

0xabc6,	// (0x00018f25) poc_content_pane_ParamLimits

0xabc6,	// (0x00018f25) poc_content_pane

0xabd8,	// (0x00018f37) scroll_pane_cp019

0x31a6,	// (0x00011505) popup_call_poc_act_window_ParamLimits

0x31a6,	// (0x00011505) popup_call_poc_act_window

0x31ca,	// (0x00011529) popup_call_poc_inact_window_ParamLimits

0x31ca,	// (0x00011529) popup_call_poc_inact_window

0xf5a4,	// (0x0001d903) bg_popup_call_poc_act_pane_g

0xbac3,	// (0x00019e22) bg_popup_call_poc_inact_pane_g1

0xbacb,	// (0x00019e2a) bg_popup_call_poc_inact_pane_g2

0xabe0,	// (0x00018f3f) popup_call_poc_act_window_g2

0xbad3,	// (0x00019e32) bg_popup_call_poc_inact_pane_g3

0xbadb,	// (0x00019e3a) bg_popup_call_poc_inact_pane_g4

0xbae3,	// (0x00019e42) bg_popup_call_poc_inact_pane_g5

0xabe8,	// (0x00018f47) popup_call_poc_act_window_t1_ParamLimits

0xabe8,	// (0x00018f47) popup_call_poc_act_window_t1

0xac10,	// (0x00018f6f) popup_call_poc_act_window_t2_ParamLimits

0xac10,	// (0x00018f6f) popup_call_poc_act_window_t2

0xac38,	// (0x00018f97) popup_call_poc_act_window_t3_ParamLimits

0xac38,	// (0x00018f97) popup_call_poc_act_window_t3

0xac60,	// (0x00018fbf) popup_call_poc_act_window_t4_ParamLimits

0xac60,	// (0x00018fbf) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0001d871) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0001d871) popup_call_poc_act_window_t

0xbaeb,	// (0x00019e4a) bg_popup_call_poc_inact_pane_g6

0xbaf3,	// (0x00019e52) bg_popup_call_poc_inact_pane_g7

0xbafb,	// (0x00019e5a) bg_popup_call_poc_inact_pane_g8

0xac72,	// (0x00018fd1) popup_call_poc_inact_window_g2

0xbb03,	// (0x00019e62) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0001d8f0) bg_popup_call_poc_inact_pane_g

0xac7a,	// (0x00018fd9) popup_call_poc_inact_window_t1_ParamLimits

0xac7a,	// (0x00018fd9) popup_call_poc_inact_window_t1

0xac8f,	// (0x00018fee) popup_call_poc_inact_window_t2_ParamLimits

0xac8f,	// (0x00018fee) popup_call_poc_inact_window_t2

0xaca4,	// (0x00019003) popup_call_poc_inact_window_t3_ParamLimits

0xaca4,	// (0x00019003) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0001d87a) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0001d87a) popup_call_poc_inact_window_t

0xbcc3,	// (0x0001a022) context_pane_ParamLimits

0x3a75,	// (0x00011dd4) signal_pane_ParamLimits

0xa7c7,	// (0x00018b26) main_call2_pane

0xbcb1,	// (0x0001a010) popup_phob_thumbnail2_window_ParamLimits

0xbcb1,	// (0x0001a010) popup_phob_thumbnail2_window

0xa9b6,	// (0x00018d15) aid_hotspot_pointer_arrow_pane

0xa9be,	// (0x00018d1d) aid_hotspot_pointer_hand_pane

0x3535,	// (0x00011894) phob_pre_status_pane_g5

0x1258,	// (0x0000f5b7) cams_zoom_pane_ParamLimits

0x1267,	// (0x0000f5c6) image_vga_pane_ParamLimits

0x1281,	// (0x0000f5e0) main_camera_pane_g1_ParamLimits

0x1293,	// (0x0000f5f2) main_camera_pane_g2_ParamLimits

0x12a3,	// (0x0000f602) main_camera_pane_g3_ParamLimits

0x12b7,	// (0x0000f616) main_camera_pane_g4_ParamLimits

0x12cb,	// (0x0000f62a) main_camera_pane_g5_ParamLimits

0x12df,	// (0x0000f63e) main_camera_pane_g6_ParamLimits

0x12f3,	// (0x0000f652) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0001d579) main_camera_pane_g_ParamLimits

0x1307,	// (0x0000f666) main_camera_pane_t1_ParamLimits

0x131d,	// (0x0000f67c) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0001d58a) main_camera_pane_t_ParamLimits

0x99fe,	// (0x00017d5d) bg_popup_preview_window_pane_cp01_ParamLimits

0x99fe,	// (0x00017d5d) bg_popup_preview_window_pane_cp01

0xacb9,	// (0x00019018) popup_phob_thumbnail2_window_g1_ParamLimits

0xacb9,	// (0x00019018) popup_phob_thumbnail2_window_g1

0x97a3,	// (0x00017b02) call2_cli_visual_pane

0x31fe,	// (0x0001155d) popup_call2_audio_conf_window_ParamLimits

0x31fe,	// (0x0001155d) popup_call2_audio_conf_window

0x3226,	// (0x00011585) popup_call2_audio_first_window_ParamLimits

0x3226,	// (0x00011585) popup_call2_audio_first_window

0x32bc,	// (0x0001161b) popup_call2_audio_in_window_ParamLimits

0x32bc,	// (0x0001161b) popup_call2_audio_in_window

0x3308,	// (0x00011667) popup_call2_audio_out_window_ParamLimits

0x3308,	// (0x00011667) popup_call2_audio_out_window

0x337a,	// (0x000116d9) popup_call2_audio_second_window_ParamLimits

0x337a,	// (0x000116d9) popup_call2_audio_second_window

0x33e0,	// (0x0001173f) popup_call2_audio_wait_window_ParamLimits

0x33e0,	// (0x0001173f) popup_call2_audio_wait_window

0x97a3,	// (0x00017b02) bg_popup_call2_act_pane_cp03

0x99e0,	// (0x00017d3f) list_conf_pane_cp

0xacc5,	// (0x00019024) popup_call2_audio_conf_window_t1

0xacd3,	// (0x00019032) list_single_graphic_popup_conf2_pane_ParamLimits

0xacd3,	// (0x00019032) list_single_graphic_popup_conf2_pane

0xa5e8,	// (0x00018947) list_highlight_pane_cp04

0xace6,	// (0x00019045) list_single_graphic_popup_conf2_pane_g1

0xa5f9,	// (0x00018958) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0001d881) list_single_graphic_popup_conf2_pane_g

0xacf0,	// (0x0001904f) list_single_graphic_popup_conf2_pane_t1

0xacfe,	// (0x0001905d) bg_popup_call2_act_pane_cp01_ParamLimits

0xacfe,	// (0x0001905d) bg_popup_call2_act_pane_cp01

0xad88,	// (0x000190e7) call_type_pane_cp05_ParamLimits

0xad88,	// (0x000190e7) call_type_pane_cp05

0xaddc,	// (0x0001913b) popup_call2_audio_second_window_g1_ParamLimits

0xaddc,	// (0x0001913b) popup_call2_audio_second_window_g1

0xae30,	// (0x0001918f) popup_call2_audio_second_window_g2_ParamLimits

0xae30,	// (0x0001918f) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0001d886) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0001d886) popup_call2_audio_second_window_g

0xae95,	// (0x000191f4) popup_call2_audio_second_window_t1_ParamLimits

0xae95,	// (0x000191f4) popup_call2_audio_second_window_t1

0xaf50,	// (0x000192af) popup_call2_audio_second_window_t2_ParamLimits

0xaf50,	// (0x000192af) popup_call2_audio_second_window_t2

0xafa3,	// (0x00019302) popup_call2_audio_second_window_t3_ParamLimits

0xafa3,	// (0x00019302) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0001d88d) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0001d88d) popup_call2_audio_second_window_t

0x97a3,	// (0x00017b02) bg_popup_call2_in_pane_cp02

0x97ad,	// (0x00017b0c) call_type_pane_cp04

0x97b5,	// (0x00017b14) popup_call2_audio_wait_window_g1

0x97bd,	// (0x00017b1c) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0001d466) popup_call2_audio_wait_window_g

0x97c5,	// (0x00017b24) popup_call2_audio_wait_window_t3

0xb096,	// (0x000193f5) bg_popup_call2_act_pane_ParamLimits

0xb096,	// (0x000193f5) bg_popup_call2_act_pane

0xb156,	// (0x000194b5) call_type_pane_cp03_ParamLimits

0xb156,	// (0x000194b5) call_type_pane_cp03

0xb1ba,	// (0x00019519) popup_call2_audio_first_window_g1_ParamLimits

0xb1ba,	// (0x00019519) popup_call2_audio_first_window_g1

0xb22a,	// (0x00019589) popup_call2_audio_first_window_g2_ParamLimits

0xb22a,	// (0x00019589) popup_call2_audio_first_window_g2

0xa898,	// (0x00018bf7) popup_call2_audio_first_window_g3_ParamLimits

0xa898,	// (0x00018bf7) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0001d896) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0001d896) popup_call2_audio_first_window_g

0xb308,	// (0x00019667) popup_call2_audio_first_window_t1_ParamLimits

0xb308,	// (0x00019667) popup_call2_audio_first_window_t1

0xb40b,	// (0x0001976a) popup_call2_audio_first_window_t4_ParamLimits

0xb40b,	// (0x0001976a) popup_call2_audio_first_window_t4

0xb4ee,	// (0x0001984d) popup_call2_audio_first_window_t5_ParamLimits

0xb4ee,	// (0x0001984d) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0001d8a1) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0001d8a1) popup_call2_audio_first_window_t

0x99f6,	// (0x00017d55) bg_popup_call2_act_pane_g1

0xbb5d,	// (0x00019ebc) popup_cale_lunar_info_window_t1

0xbb6b,	// (0x00019eca) popup_cale_lunar_info_window_t2

0xbb79,	// (0x00019ed8) popup_cale_lunar_info_window_t3

0x97a3,	// (0x00017b02) bg_popup_call2_bubble_pane

0xb5ef,	// (0x0001994e) bg_popup_call2_in_pane_cp01_ParamLimits

0xb5ef,	// (0x0001994e) bg_popup_call2_in_pane_cp01

0x947f,	// (0x000177de) call_type_pane_cp02

0xb637,	// (0x00019996) popup_call2_audio_out_window_g1_ParamLimits

0xb637,	// (0x00019996) popup_call2_audio_out_window_g1

0xb663,	// (0x000199c2) popup_call2_audio_out_window_g2_ParamLimits

0xb663,	// (0x000199c2) popup_call2_audio_out_window_g2

0xb68b,	// (0x000199ea) popup_call2_audio_out_window_g3_ParamLimits

0xb68b,	// (0x000199ea) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0001d8aa) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0001d8aa) popup_call2_audio_out_window_g

0xb6c6,	// (0x00019a25) popup_call2_audio_out_window_t1_ParamLimits

0xb6c6,	// (0x00019a25) popup_call2_audio_out_window_t1

0xb725,	// (0x00019a84) popup_call2_audio_out_window_t2_ParamLimits

0xb725,	// (0x00019a84) popup_call2_audio_out_window_t2

0xb779,	// (0x00019ad8) popup_call2_audio_out_window_t3_ParamLimits

0xb779,	// (0x00019ad8) popup_call2_audio_out_window_t3

0xb78f,	// (0x00019aee) popup_call2_audio_out_window_t4_ParamLimits

0xb78f,	// (0x00019aee) popup_call2_audio_out_window_t4

0xb7a5,	// (0x00019b04) popup_call2_audio_out_window_t5_ParamLimits

0xb7a5,	// (0x00019b04) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0001d8b3) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0001d8b3) popup_call2_audio_out_window_t

0xb809,	// (0x00019b68) bg_popup_call2_in_pane_ParamLimits

0xb809,	// (0x00019b68) bg_popup_call2_in_pane

0xb865,	// (0x00019bc4) popup_call2_audio_in_window_g1_ParamLimits

0xb865,	// (0x00019bc4) popup_call2_audio_in_window_g1

0xb89d,	// (0x00019bfc) popup_call2_audio_in_window_g2_ParamLimits

0xb89d,	// (0x00019bfc) popup_call2_audio_in_window_g2

0xb8d5,	// (0x00019c34) popup_call2_audio_in_window_g3_ParamLimits

0xb8d5,	// (0x00019c34) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0001d8c0) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0001d8c0) popup_call2_audio_in_window_g

0xb92d,	// (0x00019c8c) popup_call2_audio_in_window_t1_ParamLimits

0xb92d,	// (0x00019c8c) popup_call2_audio_in_window_t1

0xb9ad,	// (0x00019d0c) popup_call2_audio_in_window_t2_ParamLimits

0xb9ad,	// (0x00019d0c) popup_call2_audio_in_window_t2

0xba2d,	// (0x00019d8c) popup_call2_audio_in_window_t3_ParamLimits

0xba2d,	// (0x00019d8c) popup_call2_audio_in_window_t3

0xba47,	// (0x00019da6) popup_call2_audio_in_window_t4_ParamLimits

0xba47,	// (0x00019da6) popup_call2_audio_in_window_t4

0xba59,	// (0x00019db8) popup_call2_audio_in_window_t5_ParamLimits

0xba59,	// (0x00019db8) popup_call2_audio_in_window_t5

0xba6e,	// (0x00019dcd) popup_call2_audio_in_window_t6_ParamLimits

0xba6e,	// (0x00019dcd) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0001d8c9) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0001d8c9) popup_call2_audio_in_window_t

0x99f6,	// (0x00017d55) bg_popup_call2_in_pane_g1

0xbb87,	// (0x00019ee6) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0001d931) popup_cale_lunar_info_window_t

0x99fe,	// (0x00017d5d) bg_popup_call2_rect_pane_ParamLimits

0x99fe,	// (0x00017d5d) bg_popup_call2_rect_pane

0x97a3,	// (0x00017b02) call2_cli_visual_graphic_pane

0x97a3,	// (0x00017b02) call2_cli_visual_text_pane

0xbd76,	// (0x0001a0d5) smil_status_volume_pane_g3

0x0002,

0x9b6c,	// (0x00017ecb) call2_cli_visual_graphic_pane_g1

0x9b6c,	// (0x00017ecb) call2_cli_visual_graphic_pane_g2

0x9b6c,	// (0x00017ecb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x0001d8d6) call2_cli_visual_graphic_pane_g

0xba83,	// (0x00019de2) bg_popup_call2_rect_pane_g1

0x9c14,	// (0x00017f73) bg_popup_call2_rect_pane_g2

0xba8b,	// (0x00019dea) bg_popup_call2_rect_pane_g3

0xba93,	// (0x00019df2) bg_popup_call2_rect_pane_g4

0xba9b,	// (0x00019dfa) bg_popup_call2_rect_pane_g5

0xbaa3,	// (0x00019e02) bg_popup_call2_rect_pane_g6

0xbaab,	// (0x00019e0a) bg_popup_call2_rect_pane_g7

0xbab3,	// (0x00019e12) bg_popup_call2_rect_pane_g8

0xbabb,	// (0x00019e1a) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0001d8dd) bg_popup_call2_rect_pane_g

0xbac3,	// (0x00019e22) bg_popup_call2_bubble_pane_g1

0xbacb,	// (0x00019e2a) bg_popup_call2_bubble_pane_g2

0xbad3,	// (0x00019e32) bg_popup_call2_bubble_pane_g3

0xbadb,	// (0x00019e3a) bg_popup_call2_bubble_pane_g4

0xbae3,	// (0x00019e42) bg_popup_call2_bubble_pane_g5

0xbaeb,	// (0x00019e4a) bg_popup_call2_bubble_pane_g6

0xbaf3,	// (0x00019e52) bg_popup_call2_bubble_pane_g7

0xbafb,	// (0x00019e5a) bg_popup_call2_bubble_pane_g8

0xbb03,	// (0x00019e62) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0001d8f0) bg_popup_call2_bubble_pane_g

0x0e03,	// (0x0000f162) aid_cale_week_size_cell_pane

0x1337,	// (0x0000f696) aid_cams_cif_uncrop_pane_ParamLimits

0x1337,	// (0x0000f696) aid_cams_cif_uncrop_pane

0x14f0,	// (0x0000f84f) aid_cams_size_cell_ParamLimits

0x14f0,	// (0x0000f84f) aid_cams_size_cell

0x1504,	// (0x0000f863) grid_cams_pane_ParamLimits

0x151e,	// (0x0000f87d) linegrid_cams_pane_ParamLimits

0x164e,	// (0x0000f9ad) call_video_pane_t1

0x1668,	// (0x0000f9c7) call_video_pane_t2

0x0001,

0xf27e,	// (0x0001d5dd) call_video_pane_t

0x1ab3,	// (0x0000fe12) aid_cale_month_size_cell_pane_ParamLimits

0x1ab3,	// (0x0000fe12) aid_cale_month_size_cell_pane

0xf61b,	// (0x0001d97a) smil_status_volume_pane_g

0xbd83,	// (0x0001a0e2) volume_smil_pane_ParamLimits

0x92ee,	// (0x0001764d) aid_popup2_width_pane

0x0d5d,	// (0x0000f0bc) cell_qdial_pane_g4_ParamLimits

0x0d5d,	// (0x0000f0bc) cell_qdial_pane_g4

0x269d,	// (0x000109fc) aid_blid_cardinal_pane_ParamLimits

0x26ad,	// (0x00010a0c) aid_blid_destination_pane_ParamLimits

0x26ad,	// (0x00010a0c) aid_blid_destination_pane

0x99fe,	// (0x00017d5d) bg_popup_call_poc_act_pane_ParamLimits

0x99fe,	// (0x00017d5d) bg_popup_call_poc_act_pane

0x99fe,	// (0x00017d5d) bg_popup_call_poc_inact_pane_ParamLimits

0x99fe,	// (0x00017d5d) bg_popup_call_poc_inact_pane

0xbb0b,	// (0x00019e6a) bg_popup_call_poc_act_pane_g1

0xbb13,	// (0x00019e72) bg_popup_call_poc_act_pane_g2

0xbb1b,	// (0x00019e7a) bg_popup_call_poc_act_pane_g3

0xbadb,	// (0x00019e3a) bg_popup_call_poc_act_pane_g4

0xbae3,	// (0x00019e42) bg_popup_call_poc_act_pane_g5

0xbb23,	// (0x00019e82) bg_popup_call_poc_act_pane_g6

0xbaf3,	// (0x00019e52) bg_popup_call_poc_act_pane_g7

0xbb2b,	// (0x00019e8a) bg_popup_call_poc_act_pane_g8

0x97a3,	// (0x00017b02) main_usb_pane

0xbc88,	// (0x00019fe7) popup_cale_lunar_info_window

0x1933,	// (0x0000fc92) im_reading_pane_t1_ParamLimits

0x9ee9,	// (0x00018248) list_im_pane_ParamLimits

0x9efa,	// (0x00018259) scroll_pane_cp07_ParamLimits

0x97a3,	// (0x00017b02) grid_highlight_pane_cp012

0x99fe,	// (0x00017d5d) mup_scale_pane_ParamLimits

0xaa06,	// (0x00018d65) main_usb_pane_g1_ParamLimits

0xaa06,	// (0x00018d65) main_usb_pane_g1

0x3441,	// (0x000117a0) main_usb_pane_g2_ParamLimits

0x3441,	// (0x000117a0) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0001d91a) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0001d91a) main_usb_pane_g

0x3457,	// (0x000117b6) main_usb_pane_t1_ParamLimits

0x3457,	// (0x000117b6) main_usb_pane_t1

0x3469,	// (0x000117c8) main_usb_pane_t2_ParamLimits

0x3469,	// (0x000117c8) main_usb_pane_t2

0x347b,	// (0x000117da) main_usb_pane_t3_ParamLimits

0x347b,	// (0x000117da) main_usb_pane_t3

0x348d,	// (0x000117ec) main_usb_pane_t4_ParamLimits

0x348d,	// (0x000117ec) main_usb_pane_t4

0x34a2,	// (0x00011801) main_usb_pane_t5_ParamLimits

0x34a2,	// (0x00011801) main_usb_pane_t5

0x34b7,	// (0x00011816) main_usb_pane_t6_ParamLimits

0x34b7,	// (0x00011816) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0001d91f) main_usb_pane_t_ParamLimits

0x263c,	// (0x0001099b) aid_text_placing

0x2647,	// (0x000109a6) main_location2_pane_t1_ParamLimits

0x265d,	// (0x000109bc) main_location2_pane_t2_ParamLimits

0x2673,	// (0x000109d2) main_location2_pane_t3_ParamLimits

0x2689,	// (0x000109e8) main_location2_pane_t4_ParamLimits

0x2689,	// (0x000109e8) main_location2_pane_t4

0xf3df,	// (0x0001d73e) main_location2_pane_t_ParamLimits

0x9a3a,	// (0x00017d99) find_pinb_pane_g2_ParamLimits

0x9a3a,	// (0x00017d99) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0001d48c) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0001d48c) find_pinb_pane_g

0x9a46,	// (0x00017da5) find_pinb_pane_t1_ParamLimits

0x9a58,	// (0x00017db7) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0001d491) find_pinb_pane_t_ParamLimits

0x97a3,	// (0x00017b02) main_call3_pane

0x1e27,	// (0x00010186) cale_month_day_heading_pane_t1_ParamLimits

0x1e85,	// (0x000101e4) cale_month_day_heading_pane_t2_ParamLimits

0x1eea,	// (0x00010249) cale_month_day_heading_pane_t3_ParamLimits

0x1f4f,	// (0x000102ae) cale_month_day_heading_pane_t4_ParamLimits

0x1fb4,	// (0x00010313) cale_month_day_heading_pane_t5_ParamLimits

0x2019,	// (0x00010378) cale_month_day_heading_pane_t6_ParamLimits

0x207e,	// (0x000103dd) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0001d615) cale_month_day_heading_pane_t_ParamLimits

0xa170,	// (0x000184cf) smil_status_volume_pane

0x2ef9,	// (0x00011258) postcard_address_pane_ParamLimits

0x2ef9,	// (0x00011258) postcard_address_pane

0x2f0f,	// (0x0001126e) postcard_message_pane_ParamLimits

0x2f0f,	// (0x0001126e) postcard_message_pane

0x341a,	// (0x00011779) call2_cli_visual_pane_t1_ParamLimits

0x341a,	// (0x00011779) call2_cli_visual_pane_t1

0x3c86,	// (0x00011fe5) postcard_message_pane_t1_ParamLimits

0x3c86,	// (0x00011fe5) postcard_message_pane_t1

0xbd98,	// (0x0001a0f7) postcard_address_pane_t1_ParamLimits

0xbd98,	// (0x0001a0f7) postcard_address_pane_t1

0x3c72,	// (0x00011fd1) popup_call3_audio_in_window_ParamLimits

0x3c72,	// (0x00011fd1) popup_call3_audio_in_window

0x3af7,	// (0x00011e56) bg_popup_call3_in_pane_ParamLimits

0x3af7,	// (0x00011e56) bg_popup_call3_in_pane

0x3b73,	// (0x00011ed2) popup_call3_audio_in_window_g1_ParamLimits

0x3b73,	// (0x00011ed2) popup_call3_audio_in_window_g1

0x3b93,	// (0x00011ef2) popup_call3_audio_in_window_g2_ParamLimits

0x3b93,	// (0x00011ef2) popup_call3_audio_in_window_g2

0x3bb3,	// (0x00011f12) popup_call3_audio_in_window_g3_ParamLimits

0x3bb3,	// (0x00011f12) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0001d981) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0001d981) popup_call3_audio_in_window_g

0x3be4,	// (0x00011f43) popup_call3_audio_in_window_t1_ParamLimits

0x3be4,	// (0x00011f43) popup_call3_audio_in_window_t1

0x3c22,	// (0x00011f81) popup_call3_audio_in_window_t2_ParamLimits

0x3c22,	// (0x00011f81) popup_call3_audio_in_window_t2

0x3c60,	// (0x00011fbf) popup_call3_audio_in_window_t3_ParamLimits

0x3c60,	// (0x00011fbf) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0001d98a) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0001d98a) popup_call3_audio_in_window_t

0xa7c7,	// (0x00018b26) bg_popup_call3_rect_pane

0xba83,	// (0x00019de2) bg_popup_call3_rect_pane_g1

0x9c14,	// (0x00017f73) bg_popup_call3_rect_pane_g2

0xba8b,	// (0x00019dea) bg_popup_call3_rect_pane_g3

0xba93,	// (0x00019df2) bg_popup_call3_rect_pane_g4

0xba9b,	// (0x00019dfa) bg_popup_call3_rect_pane_g5

0xbaa3,	// (0x00019e02) bg_popup_call3_rect_pane_g6

0xbaab,	// (0x00019e0a) bg_popup_call3_rect_pane_g7

0x2a99,	// (0x00010df8) mup_visualizer_osc_pane

0xa8a6,	// (0x00018c05) mup_visualizer_spec_pane

0x3b27,	// (0x00011e86) call3_video_qcif_pane_ParamLimits

0x3b27,	// (0x00011e86) call3_video_qcif_pane

0x3b3a,	// (0x00011e99) call3_video_qcif_uncrop_pane_ParamLimits

0x3b3a,	// (0x00011e99) call3_video_qcif_uncrop_pane

0x3b4a,	// (0x00011ea9) call3_video_subqcif_pane_ParamLimits

0x3b4a,	// (0x00011ea9) call3_video_subqcif_pane

0x3b60,	// (0x00011ebf) call3_video_subqcif_uncrop_pane_ParamLimits

0x3b60,	// (0x00011ebf) call3_video_subqcif_uncrop_pane

0x3bd3,	// (0x00011f32) popup_call3_audio_in_window_g4_ParamLimits

0x3bd3,	// (0x00011f32) popup_call3_audio_in_window_g4

0x3ae6,	// (0x00011e45) mup_spec_half_pane

0x3aef,	// (0x00011e4e) mup_spec_half_pane_cp

0xbd36,	// (0x0001a095) mup_osc_middle_pane

0xbd3f,	// (0x0001a09e) mup_visualizer_osc_pane_g1

0x3ac6,	// (0x00011e25) mup_spec_bar_pane_ParamLimits

0x3ac6,	// (0x00011e25) mup_spec_bar_pane

0xbd23,	// (0x0001a082) mup_spec_bar_pane_g1

0xbd2d,	// (0x0001a08c) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0001d975) mup_spec_bar_pane_g

0x0e03,	// (0x0000f162) aid_cale_week_size_cell_pane_ParamLimits

0x0e16,	// (0x0000f175) bg_cale_heading_pane_ParamLimits

0x9c90,	// (0x00017fef) bg_cale_pane_cp01_ParamLimits

0x0e32,	// (0x0000f191) cale_week_corner_pane_ParamLimits

0x0e48,	// (0x0000f1a7) cale_week_day_heading_pane_ParamLimits

0x0e64,	// (0x0000f1c3) cale_week_scroll_pane_g1_ParamLimits

0x0e7d,	// (0x0000f1dc) cale_week_scroll_pane_g2_ParamLimits

0x0e8e,	// (0x0000f1ed) cale_week_scroll_pane_g3_ParamLimits

0x0e9f,	// (0x0000f1fe) cale_week_scroll_pane_g4_ParamLimits

0x0eb0,	// (0x0000f20f) cale_week_scroll_pane_g5_ParamLimits

0x0ec1,	// (0x0000f220) cale_week_scroll_pane_g6_ParamLimits

0x0ed2,	// (0x0000f231) cale_week_scroll_pane_g7_ParamLimits

0x0ee3,	// (0x0000f242) cale_week_scroll_pane_g8_ParamLimits

0x0ef4,	// (0x0000f253) cale_week_scroll_pane_g9_ParamLimits

0x0f05,	// (0x0000f264) cale_week_scroll_pane_g10_ParamLimits

0x0f16,	// (0x0000f275) cale_week_scroll_pane_g11_ParamLimits

0x0f27,	// (0x0000f286) cale_week_scroll_pane_g12_ParamLimits

0x0f38,	// (0x0000f297) cale_week_scroll_pane_g13_ParamLimits

0x0f51,	// (0x0000f2b0) cale_week_scroll_pane_g14_ParamLimits

0x0f6a,	// (0x0000f2c9) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0001d51d) cale_week_scroll_pane_g_ParamLimits

0x0f83,	// (0x0000f2e2) cale_week_time_pane_ParamLimits

0x0f94,	// (0x0000f2f3) grid_cale_week_pane_ParamLimits

0x9ca9,	// (0x00018008) listscroll_cale_week_pane_t1

0x0faf,	// (0x0000f30e) scroll_pane_cp08_ParamLimits

0x1b04,	// (0x0000fe63) cale_month_corner_pane_ParamLimits

0xa110,	// (0x0001846f) cale_month_pane_t1

0x1de8,	// (0x00010147) cale_month_week_pane_ParamLimits

0x2460,	// (0x000107bf) popup_call_status_window_g1_ParamLimits

0x2474,	// (0x000107d3) popup_call_status_window_g2_ParamLimits

0x2488,	// (0x000107e7) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x0001d6c5) popup_call_status_window_g_ParamLimits

0xa4fa,	// (0x00018859) aid_call2_pane

0x2d59,	// (0x000110b8) msg_header_pane_g1

0x2ef9,	// (0x00011258) postcard_address2_pane_ParamLimits

0x2ef9,	// (0x00011258) postcard_address2_pane

0x2f0f,	// (0x0001126e) postcard_message2_pane_ParamLimits

0x2f0f,	// (0x0001126e) postcard_message2_pane

0x3a83,	// (0x00011de2) message2_row_pane_ParamLimits

0x3a83,	// (0x00011de2) message2_row_pane

0xbcde,	// (0x0001a03d) address2_row_pane_ParamLimits

0xbcde,	// (0x0001a03d) address2_row_pane

0xbcf1,	// (0x0001a050) postcard_message2_row_pane_g1

0xbcf9,	// (0x0001a058) postcard_message2_row_pane_t1

0xbcf1,	// (0x0001a050) address2_row_pane_g1

0xbcf9,	// (0x0001a058) address2_row_pane_t1

0x11bd,	// (0x0000f51c) aid_size_cell_vorec

0x97a3,	// (0x00017b02) main_rss_pane

0x3aa6,	// (0x00011e05) rss_list_single_pane_ParamLimits

0x3aa6,	// (0x00011e05) rss_list_single_pane

0xbd07,	// (0x0001a066) rss_list_single_pane_t1

0xbd15,	// (0x0001a074) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0001d970) rss_list_single_pane_t

0x97a3,	// (0x00017b02) main_camera2_pane

0x97a3,	// (0x00017b02) main_video2_pane

0x3cf5,	// (0x00012054) cams_zoom_pane_cp2_ParamLimits

0x3cf5,	// (0x00012054) cams_zoom_pane_cp2

0x3d0c,	// (0x0001206b) image2_vga_pane_ParamLimits

0x3d0c,	// (0x0001206b) image2_vga_pane

0x3d54,	// (0x000120b3) main_camera2_pane_g1_ParamLimits

0x3d54,	// (0x000120b3) main_camera2_pane_g1

0x3d74,	// (0x000120d3) main_camera2_pane_g2_ParamLimits

0x3d74,	// (0x000120d3) main_camera2_pane_g2

0x3d8b,	// (0x000120ea) main_camera2_pane_g3_ParamLimits

0x3d8b,	// (0x000120ea) main_camera2_pane_g3

0x3da2,	// (0x00012101) main_camera2_pane_g4_ParamLimits

0x3da2,	// (0x00012101) main_camera2_pane_g4

0x3db9,	// (0x00012118) main_camera2_pane_g5_ParamLimits

0x3db9,	// (0x00012118) main_camera2_pane_g5

0x3dd0,	// (0x0001212f) main_camera2_pane_g6_ParamLimits

0x3dd0,	// (0x0001212f) main_camera2_pane_g6

0x3de7,	// (0x00012146) main_camera2_pane_g7_ParamLimits

0x3de7,	// (0x00012146) main_camera2_pane_g7

0x3dfe,	// (0x0001215d) main_camera2_pane_g8_ParamLimits

0x3dfe,	// (0x0001215d) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0001d991) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0001d991) main_camera2_pane_g

0x3e2c,	// (0x0001218b) main_camera2_pane_t1_ParamLimits

0x3e2c,	// (0x0001218b) main_camera2_pane_t1

0x3e61,	// (0x000121c0) main_camera2_pane_t2_ParamLimits

0x3e61,	// (0x000121c0) main_camera2_pane_t2

0x3e7e,	// (0x000121dd) main_camera2_pane_t3_ParamLimits

0x3e7e,	// (0x000121dd) main_camera2_pane_t3

0x3edc,	// (0x0001223b) main_camera2_pane_t4_ParamLimits

0x3edc,	// (0x0001223b) main_camera2_pane_t4

0x0006,

0xf645,	// (0x0001d9a4) main_camera2_pane_t_ParamLimits

0xf645,	// (0x0001d9a4) main_camera2_pane_t

0x3f65,	// (0x000122c4) cams_zoom_pane_cp4_ParamLimits

0x3f65,	// (0x000122c4) cams_zoom_pane_cp4

0x3f7b,	// (0x000122da) image2_cif_pane_ParamLimits

0x3f7b,	// (0x000122da) image2_cif_pane

0x3fa6,	// (0x00012305) image2_subqcif_pane_ParamLimits

0x3fa6,	// (0x00012305) image2_subqcif_pane

0x3fc1,	// (0x00012320) main_video2_pane_g1_ParamLimits

0x3fc1,	// (0x00012320) main_video2_pane_g1

0x3fdb,	// (0x0001233a) main_video2_pane_g2_ParamLimits

0x3fdb,	// (0x0001233a) main_video2_pane_g2

0x3ff1,	// (0x00012350) main_video2_pane_g3_ParamLimits

0x3ff1,	// (0x00012350) main_video2_pane_g3

0x4007,	// (0x00012366) main_video2_pane_g4_ParamLimits

0x4007,	// (0x00012366) main_video2_pane_g4

0x401d,	// (0x0001237c) main_video2_pane_g5_ParamLimits

0x401d,	// (0x0001237c) main_video2_pane_g5

0x4033,	// (0x00012392) main_video2_pane_g6_ParamLimits

0x4033,	// (0x00012392) main_video2_pane_g6

0x0005,

0xf654,	// (0x0001d9b3) main_video2_pane_g_ParamLimits

0xf654,	// (0x0001d9b3) main_video2_pane_g

0x404d,	// (0x000123ac) main_video2_pane_t1_ParamLimits

0x404d,	// (0x000123ac) main_video2_pane_t1

0x4071,	// (0x000123d0) main_video2_pane_t2_ParamLimits

0x4071,	// (0x000123d0) main_video2_pane_t2

0x40c1,	// (0x00012420) main_video2_pane_t3_ParamLimits

0x40c1,	// (0x00012420) main_video2_pane_t3

0x0002,

0xf661,	// (0x0001d9c0) main_video2_pane_t_ParamLimits

0xf661,	// (0x0001d9c0) main_video2_pane_t

0x3575,	// (0x000118d4) call_muted_g2

0x0001,

0xf603,	// (0x0001d962) call_muted_g

0x97a3,	// (0x00017b02) main_mup2_pane

0x4109,	// (0x00012468) main_mup2_pane_g1_ParamLimits

0x4109,	// (0x00012468) main_mup2_pane_g1

0x4115,	// (0x00012474) main_mup2_pane_g2_ParamLimits

0x4115,	// (0x00012474) main_mup2_pane_g2

0xbeb9,	// (0x0001a218) main_mup_pane_g13_cp1

0xbec1,	// (0x0001a220) mup_volume_pane_cp1

0x4133,	// (0x00012492) main_mup2_pane_g4_ParamLimits

0x4133,	// (0x00012492) main_mup2_pane_g4

0x4143,	// (0x000124a2) main_mup2_pane_g5_ParamLimits

0x4143,	// (0x000124a2) main_mup2_pane_g5

0x4153,	// (0x000124b2) main_mup2_pane_g6_ParamLimits

0x4153,	// (0x000124b2) main_mup2_pane_g6

0x4163,	// (0x000124c2) main_mup2_pane_g7_ParamLimits

0x4163,	// (0x000124c2) main_mup2_pane_g7

0x0006,

0xf668,	// (0x0001d9c7) main_mup2_pane_g_ParamLimits

0xf668,	// (0x0001d9c7) main_mup2_pane_g

0x417b,	// (0x000124da) main_mup2_pane_t1_ParamLimits

0x417b,	// (0x000124da) main_mup2_pane_t1

0x4191,	// (0x000124f0) main_mup2_pane_t2_ParamLimits

0x4191,	// (0x000124f0) main_mup2_pane_t2

0x41a7,	// (0x00012506) main_mup2_pane_t3_ParamLimits

0x41a7,	// (0x00012506) main_mup2_pane_t3

0x41bd,	// (0x0001251c) main_mup2_pane_t4_ParamLimits

0x41bd,	// (0x0001251c) main_mup2_pane_t4

0x41d5,	// (0x00012534) main_mup2_pane_t5_ParamLimits

0x41d5,	// (0x00012534) main_mup2_pane_t5

0x41ed,	// (0x0001254c) main_mup2_pane_t6_ParamLimits

0x41ed,	// (0x0001254c) main_mup2_pane_t6

0x0005,

0xf677,	// (0x0001d9d6) main_mup2_pane_t_ParamLimits

0xf677,	// (0x0001d9d6) main_mup2_pane_t

0x421d,	// (0x0001257c) mup2_visualizer_pane_ParamLimits

0x421d,	// (0x0001257c) mup2_visualizer_pane

0x424b,	// (0x000125aa) mup_progress_pane_cp_ParamLimits

0x424b,	// (0x000125aa) mup_progress_pane_cp

0xbe9b,	// (0x0001a1fa) mup_volume_pane_cp_ParamLimits

0xbe9b,	// (0x0001a1fa) mup_volume_pane_cp

0x4261,	// (0x000125c0) mup2_visualizer_pane_g1_ParamLimits

0x4261,	// (0x000125c0) mup2_visualizer_pane_g1

0xbdda,	// (0x0001a139) mup2_visualizer_pane_g2_ParamLimits

0xbdda,	// (0x0001a139) mup2_visualizer_pane_g2

0x4276,	// (0x000125d5) mup2_visualizer_pane_g3_ParamLimits

0x4276,	// (0x000125d5) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x0001d9e3) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x0001d9e3) mup2_visualizer_pane_g

0xab4f,	// (0x00018eae) aid_size_cell_fmradio

0x3725,	// (0x00011a84) aid_height_parent_landcape

0x9f78,	// (0x000182d7) wml_content_pane_cp

0x9f80,	// (0x000182df) wml_tabs_pane

0x9f89,	// (0x000182e8) popup_wml_miniature_window

0x9f91,	// (0x000182f0) scroll_pane_cp021

0x9fa5,	// (0x00018304) wml_content_pane_comp8

0x97a3,	// (0x00017b02) bg_popup_sub_pane_cp05

0xbdf8,	// (0x0001a157) popup_wml_miniature_window_g1

0xbe00,	// (0x0001a15f) wml_miniature_view_pane

0x4282,	// (0x000125e1) aid_size_wml_view

0x428a,	// (0x000125e9) wml_miniature_view_pane_g1

0x4293,	// (0x000125f2) wml_miniature_view_pane_g2

0x429c,	// (0x000125fb) wml_miniature_view_pane_g3

0x42a4,	// (0x00012603) wml_miniature_view_pane_g4

0x42ac,	// (0x0001260b) wml_miniature_view_pane_g5

0x42b4,	// (0x00012613) wml_miniature_view_pane_g6

0x42bc,	// (0x0001261b) wml_miniature_view_pane_g7

0x42c4,	// (0x00012623) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x0001d9ea) wml_miniature_view_pane_g

0xbe08,	// (0x0001a167) background_graphic_ParamLimits

0xbe08,	// (0x0001a167) background_graphic

0xbe14,	// (0x0001a173) wml_tabs_2_pane

0xbe1d,	// (0x0001a17c) wml_tabs_3_pane_ParamLimits

0xbe1d,	// (0x0001a17c) wml_tabs_3_pane

0xbe2f,	// (0x0001a18e) wml_tabs_4_pane_ParamLimits

0xbe2f,	// (0x0001a18e) wml_tabs_4_pane

0xbe45,	// (0x0001a1a4) wml_tabs_5_pane_ParamLimits

0xbe45,	// (0x0001a1a4) wml_tabs_5_pane

0xbe5f,	// (0x0001a1be) wml_tabs_pane_g2_ParamLimits

0xbe5f,	// (0x0001a1be) wml_tabs_pane_g2

0xbe73,	// (0x0001a1d2) wml_tabs_pane_g3_ParamLimits

0xbe73,	// (0x0001a1d2) wml_tabs_pane_g3

0x42cc,	// (0x0001262b) wml_tabs_2_active_pane_ParamLimits

0x42cc,	// (0x0001262b) wml_tabs_2_active_pane

0x42e0,	// (0x0001263f) wml_tabs_2_passive_pane_ParamLimits

0x42e0,	// (0x0001263f) wml_tabs_2_passive_pane

0x42f4,	// (0x00012653) wml_tabs_3_active_pane_cp_ParamLimits

0x42f4,	// (0x00012653) wml_tabs_3_active_pane_cp

0x4309,	// (0x00012668) wml_tabs_3_passive_pane_ParamLimits

0x4309,	// (0x00012668) wml_tabs_3_passive_pane

0x431c,	// (0x0001267b) wml_tabs_3_passive_pane_cp_ParamLimits

0x431c,	// (0x0001267b) wml_tabs_3_passive_pane_cp

0x4333,	// (0x00012692) tabs_4_active_pane

0x433b,	// (0x0001269a) tabs_4_passive_pane

0x4345,	// (0x000126a4) tabs_4_passive_pane_cp

0x434d,	// (0x000126ac) tabs_4_passive_pane_cp2

0x3439,	// (0x00011798) aid_height_text

0x2a6b,	// (0x00010dca) mup_volume_cont_pane_ParamLimits

0x2a6b,	// (0x00010dca) mup_volume_cont_pane

0x09e9,	// (0x0000ed48) aid_size_cell_pinb

0x09f3,	// (0x0000ed52) aid_size_list_pinb

0x4237,	// (0x00012596) mup2_volume_cont_pane_ParamLimits

0x4237,	// (0x00012596) mup2_volume_cont_pane

0xbe87,	// (0x0001a1e6) mup2_volume_cont_pane_g1_ParamLimits

0xbe87,	// (0x0001a1e6) mup2_volume_cont_pane_g1

0x06fa,	// (0x0000ea59) aid_size_cell_touch_ParamLimits

0x06fa,	// (0x0000ea59) aid_size_cell_touch

0x090d,	// (0x0000ec6c) touch_pane_ParamLimits

0x090d,	// (0x0000ec6c) touch_pane

0x92dc,	// (0x0001763b) main_rss2_pane

0xbec9,	// (0x0001a228) listscroll_rss2_pane

0xbed2,	// (0x0001a231) rss2_navigation_pane

0xbeda,	// (0x0001a239) list_rss2_pane

0xa68d,	// (0x000189ec) scroll_pane_cp22

0xbee2,	// (0x0001a241) rss2_navigation_pane_g1

0xbeeb,	// (0x0001a24a) rss2_navigation_pane_g2

0xbef3,	// (0x0001a252) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x0001d9fb) rss2_navigation_pane_g

0xbefb,	// (0x0001a25a) rss2_navigation_pane_t1

0x4357,	// (0x000126b6) rss2_list_single_pane_ParamLimits

0x4357,	// (0x000126b6) rss2_list_single_pane

0xbf09,	// (0x0001a268) rss2_list_single_pane_t2

0xbf17,	// (0x0001a276) rss2_list_single_pane_t3_ParamLimits

0xbf17,	// (0x0001a276) rss2_list_single_pane_t3

0xbf34,	// (0x0001a293) rss2_list_single_pane_t4

0x224a,	// (0x000105a9) smil_status_pane_g1

0x934d,	// (0x000176ac) main_image2_pane_ParamLimits

0x934d,	// (0x000176ac) main_image2_pane

0x3e15,	// (0x00012174) main_camera2_pane_g9_ParamLimits

0x3e15,	// (0x00012174) main_camera2_pane_g9

0x3f31,	// (0x00012290) main_camera2_pane_t5_ParamLimits

0x3f31,	// (0x00012290) main_camera2_pane_t5

0xbdaf,	// (0x0001a10e) main_camera2_pane_t6_ParamLimits

0xbdaf,	// (0x0001a10e) main_camera2_pane_t6

0x4371,	// (0x000126d0) main_image2_pane_g1_ParamLimits

0x4371,	// (0x000126d0) main_image2_pane_g1

0x3150,	// (0x000114af) smil2_video_pane_ParamLimits

0x3150,	// (0x000114af) smil2_video_pane

0x92fa,	// (0x00017659) aid_zoom_text_primary_cp

0x9343,	// (0x000176a2) popup_preview_fixed_window

0x9ee1,	// (0x00018240) im_reading_pane_g1

0x3ce7,	// (0x00012046) cams2_bc_adjust_pane_cp_ParamLimits

0x3ce7,	// (0x00012046) cams2_bc_adjust_pane_cp

0x3f57,	// (0x000122b6) cams2_bc_adjust_pane_ParamLimits

0x3f57,	// (0x000122b6) cams2_bc_adjust_pane

0xbf42,	// (0x0001a2a1) cams2_bc_adjust_pane_g1

0xbf4a,	// (0x0001a2a9) cams2_slider_pane

0xbf53,	// (0x0001a2b2) cams2_slider_pane_g1

0xbf5c,	// (0x0001a2bb) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0001da02) cams2_slider_pane_g

0x0ae3,	// (0x0000ee42) calc_display_pane_ParamLimits

0x0b0b,	// (0x0000ee6a) calc_paper_pane_ParamLimits

0x0b2e,	// (0x0000ee8d) grid_calc_pane_ParamLimits

0xa55c,	// (0x000188bb) popup_clock_digital_window_t1_ParamLimits

0xaaec,	// (0x00018e4b) main_image_pane_t1

0x0ac5,	// (0x0000ee24) aid_size_cell_calc_ParamLimits

0x0ac5,	// (0x0000ee24) aid_size_cell_calc

0x376b,	// (0x00011aca) popup_blid_sat_info2_window_ParamLimits

0x376b,	// (0x00011aca) popup_blid_sat_info2_window

0xbf7e,	// (0x0001a2dd) aid_size_cell_blid

0xbf86,	// (0x0001a2e5) bg_popup_window_pane_cp07

0xbfa9,	// (0x0001a308) grid_popup_blid_pane

0xbfb3,	// (0x0001a312) heading_pane_cp05_ParamLimits

0xbfb3,	// (0x0001a312) heading_pane_cp05

0xc07d,	// (0x0001a3dc) cell_popup_blid_pane_ParamLimits

0xc07d,	// (0x0001a3dc) cell_popup_blid_pane

0xc0a7,	// (0x0001a406) cell_popup_blid_pane_g1

0xc0af,	// (0x0001a40e) cell_popup_blid_pane_t1

0x4207,	// (0x00012566) mup2_indicator_pane_ParamLimits

0x4207,	// (0x00012566) mup2_indicator_pane

0xa7c7,	// (0x00018b26) mup2_visualizer_osc_pane

0xbde6,	// (0x0001a145) mup2_visualizer_spec_pane_ParamLimits

0xbde6,	// (0x0001a145) mup2_visualizer_spec_pane

0x4387,	// (0x000126e6) mup2_spec_half_pane

0x4390,	// (0x000126ef) mup2_spec_half_pane_cp

0x4398,	// (0x000126f7) mup2_spec_bar_pane_ParamLimits

0x4398,	// (0x000126f7) mup2_spec_bar_pane

0xbd23,	// (0x0001a082) mup2_spec_bar_pane_g1

0xbd2d,	// (0x0001a08c) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0001d975) mup2_spec_bar_pane_g

0x43b8,	// (0x00012717) mup2_osc_middle_pane

0xbd3f,	// (0x0001a09e) mup2_visualizer_osc_pane_g1

0x937b,	// (0x000176da) popup_number_entry_window_t1_ParamLimits

0x938e,	// (0x000176ed) popup_number_entry_window_t2_ParamLimits

0x93a0,	// (0x000176ff) popup_number_entry_window_t3_ParamLimits

0x93b2,	// (0x00017711) popup_number_entry_window_t5_ParamLimits

0x93b2,	// (0x00017711) popup_number_entry_window_t5

0xf0d8,	// (0x0001d437) popup_number_entry_window_t_ParamLimits

0x93e7,	// (0x00017746) text_title_cp2_ParamLimits

0xa9c6,	// (0x00018d25) aid_hotspot_pointer_text2_pane

0xa9ec,	// (0x00018d4b) main_viewer_pane_g9_ParamLimits

0xa9ec,	// (0x00018d4b) main_viewer_pane_g9

0xa110,	// (0x0001846f) cale_month_pane_t1_ParamLimits

0xa1a5,	// (0x00018504) bg_cale_pane_ParamLimits

0xa1bd,	// (0x0001851c) list_cale_pane_ParamLimits

0x9ca9,	// (0x00018008) listscroll_cale_day_pane_t1

0xa1ce,	// (0x0001852d) scroll_pane_cp09_ParamLimits

0x2aa1,	// (0x00010e00) main_mup_eq_pane_t1_ParamLimits

0x2aa1,	// (0x00010e00) main_mup_eq_pane_t1

0x2abd,	// (0x00010e1c) main_mup_eq_pane_t2_ParamLimits

0x2abd,	// (0x00010e1c) main_mup_eq_pane_t2

0x2ad9,	// (0x00010e38) main_mup_eq_pane_t3_ParamLimits

0x2ad9,	// (0x00010e38) main_mup_eq_pane_t3

0x2af7,	// (0x00010e56) main_mup_eq_pane_t4_ParamLimits

0x2af7,	// (0x00010e56) main_mup_eq_pane_t4

0x2b15,	// (0x00010e74) main_mup_eq_pane_t5_ParamLimits

0x2b15,	// (0x00010e74) main_mup_eq_pane_t5

0x2b33,	// (0x00010e92) main_mup_eq_pane_t6_ParamLimits

0x2b33,	// (0x00010e92) main_mup_eq_pane_t6

0x2b49,	// (0x00010ea8) main_mup_eq_pane_t7_ParamLimits

0x2b49,	// (0x00010ea8) main_mup_eq_pane_t7

0x2b5f,	// (0x00010ebe) main_mup_eq_pane_t8_ParamLimits

0x2b5f,	// (0x00010ebe) main_mup_eq_pane_t8

0x2b75,	// (0x00010ed4) main_mup_eq_pane_t9_ParamLimits

0x2b75,	// (0x00010ed4) main_mup_eq_pane_t9

0x2b91,	// (0x00010ef0) main_mup_eq_pane_t10_ParamLimits

0x2b91,	// (0x00010ef0) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0001d7c4) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0001d7c4) main_mup_eq_pane_t

0x2c66,	// (0x00010fc5) mup_equalizer_pane_cp5_ParamLimits

0x2c7e,	// (0x00010fdd) mup_equalizer_pane_cp6_ParamLimits

0x2c96,	// (0x00010ff5) mup_equalizer_pane_cp7_ParamLimits

0x92dc,	// (0x0001763b) main_gallery_pane

0xbd48,	// (0x0001a0a7) smil2_volume_pane

0xbd50,	// (0x0001a0af) smil_status_volume_pane_g1_ParamLimits

0xbd63,	// (0x0001a0c2) smil_status_volume_pane_g2_ParamLimits

0xbd76,	// (0x0001a0d5) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x0001d97a) smil_status_volume_pane_g_ParamLimits

0xbf86,	// (0x0001a2e5) bg_popup_window_pane_cp07_ParamLimits

0xbf94,	// (0x0001a2f3) blid_firmament_pane

0x43c1,	// (0x00012720) aid_size_cell_gallery_ParamLimits

0x43c1,	// (0x00012720) aid_size_cell_gallery

0x43d7,	// (0x00012736) grid_gallery_pane_ParamLimits

0x43d7,	// (0x00012736) grid_gallery_pane

0x43f2,	// (0x00012751) cell_gallery_pane_ParamLimits

0x43f2,	// (0x00012751) cell_gallery_pane

0xc0bd,	// (0x0001a41c) bg_cell_gallery_focus_pane_ParamLimits

0xc0bd,	// (0x0001a41c) bg_cell_gallery_focus_pane

0xc0cf,	// (0x0001a42e) cell_gallery_pane_g1_ParamLimits

0xc0cf,	// (0x0001a42e) cell_gallery_pane_g1

0x4443,	// (0x000127a2) cell_gallery_pane_g2_ParamLimits

0x4443,	// (0x000127a2) cell_gallery_pane_g2

0x4450,	// (0x000127af) cell_gallery_pane_g3_ParamLimits

0x4450,	// (0x000127af) cell_gallery_pane_g3

0xc0db,	// (0x0001a43a) cell_gallery_pane_g4_ParamLimits

0xc0db,	// (0x0001a43a) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x0001da28) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x0001da28) cell_gallery_pane_g

0xc0e7,	// (0x0001a446) bg_cell_gallery_focus_pane_g1

0xc0ef,	// (0x0001a44e) bg_cell_gallery_focus_pane_g2

0xc0f7,	// (0x0001a456) bg_cell_gallery_focus_pane_g3

0xc0ff,	// (0x0001a45e) bg_cell_gallery_focus_pane_g4

0xc107,	// (0x0001a466) bg_cell_gallery_focus_pane_g5

0xc10f,	// (0x0001a46e) bg_cell_gallery_focus_pane_g6

0xc117,	// (0x0001a476) bg_cell_gallery_focus_pane_g7

0xc11f,	// (0x0001a47e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0001da31) bg_cell_gallery_focus_pane_g

0xc127,	// (0x0001a486) aid_firma_cardinal

0xc13b,	// (0x0001a49a) blid_firmament_pane_t1

0xc152,	// (0x0001a4b1) blid_firmament_pane_t2

0xc169,	// (0x0001a4c8) blid_firmament_pane_t3

0xc180,	// (0x0001a4df) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0001da42) blid_firmament_pane_t

0xc197,	// (0x0001a4f6) blid_sat_info_pane

0xc1a7,	// (0x0001a506) blid_sat_info_pane_g1

0xc1a7,	// (0x0001a506) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x0001da4b) blid_sat_info_pane_g

0xc1b1,	// (0x0001a510) blid_sat_info_pane_t1

0xc1bf,	// (0x0001a51e) smil2_volume_content_pane

0xc1c8,	// (0x0001a527) smil2_volume_pane_g1

0xc1d0,	// (0x0001a52f) smil2_volume_content_pane_g1

0xc1d9,	// (0x0001a538) smil2_volume_content_pane_g2

0xc1e2,	// (0x0001a541) smil2_volume_content_pane_g3

0xc1eb,	// (0x0001a54a) smil2_volume_content_pane_g4

0xc1f4,	// (0x0001a553) smil2_volume_content_pane_g5

0xc1fd,	// (0x0001a55c) smil2_volume_content_pane_g6

0xc206,	// (0x0001a565) smil2_volume_content_pane_g7

0xc20f,	// (0x0001a56e) smil2_volume_content_pane_g8

0xc218,	// (0x0001a577) smil2_volume_content_pane_g9

0xc221,	// (0x0001a580) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0001da50) smil2_volume_content_pane_g

0x100f,	// (0x0000f36e) cale_week_day_heading_pane_t1_ParamLimits

0x1023,	// (0x0000f382) cale_week_day_heading_pane_t2_ParamLimits

0x1037,	// (0x0000f396) cale_week_day_heading_pane_t3_ParamLimits

0x104b,	// (0x0000f3aa) cale_week_day_heading_pane_t4_ParamLimits

0x105f,	// (0x0000f3be) cale_week_day_heading_pane_t5_ParamLimits

0x1073,	// (0x0000f3d2) cale_week_day_heading_pane_t6_ParamLimits

0x1087,	// (0x0000f3e6) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0001d53c) cale_week_day_heading_pane_t_ParamLimits

0x9cbb,	// (0x0001801a) bg_cale_side_pane_ParamLimits

0x109b,	// (0x0000f3fa) cale_week_time_pane_t1_ParamLimits

0x10b3,	// (0x0000f412) cale_week_time_pane_t2_ParamLimits

0x10cb,	// (0x0000f42a) cale_week_time_pane_t3_ParamLimits

0x10e3,	// (0x0000f442) cale_week_time_pane_t4_ParamLimits

0x10fb,	// (0x0000f45a) cale_week_time_pane_t5_ParamLimits

0x1113,	// (0x0000f472) cale_week_time_pane_t6_ParamLimits

0x112b,	// (0x0000f48a) cale_week_time_pane_t7_ParamLimits

0x1147,	// (0x0000f4a6) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0001d54b) cale_week_time_pane_t_ParamLimits

0x1167,	// (0x0000f4c6) cell_cale_week_pane_g2_ParamLimits

0x9cbb,	// (0x0001801a) bg_cale_side_pane_cp01_ParamLimits

0x20e3,	// (0x00010442) cale_month_week_pane_t1_ParamLimits

0x20fa,	// (0x00010459) cale_month_week_pane_t2_ParamLimits

0x2111,	// (0x00010470) cale_month_week_pane_t3_ParamLimits

0x2128,	// (0x00010487) cale_month_week_pane_t4_ParamLimits

0x213f,	// (0x0001049e) cale_month_week_pane_t5_ParamLimits

0x2156,	// (0x000104b5) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0001d624) cale_month_week_pane_t_ParamLimits

0xa14c,	// (0x000184ab) cell_cale_month_pane_g1_ParamLimits

0x92dc,	// (0x0001763b) main_cale_event_viewer_pane

0x92dc,	// (0x0001763b) listscroll_cale_event_viewer_pane

0xc22a,	// (0x0001a589) list_cale_ev_pane

0xc232,	// (0x0001a591) scroll_pane_cp023

0x445d,	// (0x000127bc) field_cale_ev_pane_ParamLimits

0x445d,	// (0x000127bc) field_cale_ev_pane

0xc23e,	// (0x0001a59d) field_cale_ev_content_pane_ParamLimits

0xc23e,	// (0x0001a59d) field_cale_ev_content_pane

0xc24a,	// (0x0001a5a9) field_cale_ev_pane_g1_ParamLimits

0xc24a,	// (0x0001a5a9) field_cale_ev_pane_g1

0xc256,	// (0x0001a5b5) field_cale_ev_pane_g2_ParamLimits

0xc256,	// (0x0001a5b5) field_cale_ev_pane_g2

0xc26e,	// (0x0001a5cd) field_cale_ev_pane_g3_ParamLimits

0xc26e,	// (0x0001a5cd) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x0001da65) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x0001da65) field_cale_ev_pane_g

0xc286,	// (0x0001a5e5) field_cale_ev_pane_t1_ParamLimits

0xc286,	// (0x0001a5e5) field_cale_ev_pane_t1

0x4481,	// (0x000127e0) field_cale_ev_content_pane_t1_ParamLimits

0x4481,	// (0x000127e0) field_cale_ev_content_pane_t1

0xa95a,	// (0x00018cb9) bg_button_pane_cp01

0x9af3,	// (0x00017e52) listscroll_cale_week_pane_ParamLimits

0x0df9,	// (0x0000f158) popup_toolbar_window_cp01

0x9ca9,	// (0x00018008) listscroll_cale_week_pane_t1_ParamLimits

0x9af3,	// (0x00017e52) listscroll_cale_day_pane_ParamLimits

0x22aa,	// (0x00010609) popup_toolbar_window_cp02

0x9ca9,	// (0x00018008) listscroll_cale_day_pane_t1_ParamLimits

0x9af3,	// (0x00017e52) main_cale_month_pane_ParamLimits

0x39eb,	// (0x00011d4a) popup_toolbar_window_cp03_ParamLimits

0x39eb,	// (0x00011d4a) popup_toolbar_window_cp03

0x300e,	// (0x0001136d) main_image_pane_g2_ParamLimits

0x300e,	// (0x0001136d) main_image_pane_g2

0x301f,	// (0x0001137e) main_image_pane_g3_ParamLimits

0x301f,	// (0x0001137e) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0001d856) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0001d856) main_image_pane_g

0xaaec,	// (0x00018e4b) main_image_pane_t1_ParamLimits

0x3030,	// (0x0001138f) main_image_pane_t2_ParamLimits

0x3030,	// (0x0001138f) main_image_pane_t2

0x3042,	// (0x000113a1) main_image_pane_t3_ParamLimits

0x3042,	// (0x000113a1) main_image_pane_t3

0x306a,	// (0x000113c9) main_image_pane_t4_ParamLimits

0x306a,	// (0x000113c9) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0001d85d) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0001d85d) main_image_pane_t

0x308a,	// (0x000113e9) popup_image_details_window_cp01

0x3094,	// (0x000113f3) popup_toobar_trans_pane_cp01_ParamLimits

0x3094,	// (0x000113f3) popup_toobar_trans_pane_cp01

0x385e,	// (0x00011bbd) popup_image_details_window_ParamLimits

0x385e,	// (0x00011bbd) popup_image_details_window

0xbc94,	// (0x00019ff3) popup_image_focus_window

0x3ca1,	// (0x00012000) camera2_autofocus_pane_ParamLimits

0x3ca1,	// (0x00012000) camera2_autofocus_pane

0x92dc,	// (0x0001763b) bg_popup_sub_pane_cp06

0xc29d,	// (0x0001a5fc) popup_image_focus_window_g1

0xc2a5,	// (0x0001a604) popup_image_focus_window_g2

0xc2ad,	// (0x0001a60c) popup_image_focus_window_g3

0xc2b5,	// (0x0001a614) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x0001da6c) popup_image_focus_window_g

0xc2bd,	// (0x0001a61c) popup_image_focus_window_t1

0xc2cb,	// (0x0001a62a) popup_image_focus_window_t2

0xc2db,	// (0x0001a63a) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x0001da75) popup_image_focus_window_t

0xc2e9,	// (0x0001a648) camera2_autofocus_pane_g1

0x934d,	// (0x000176ac) bg_tb_trans_pane_cp01

0xc2f7,	// (0x0001a656) popup_image_details_window_g1

0xc30a,	// (0x0001a669) popup_image_details_window_g2

0x0002,

0xf728,	// (0x0001da87) popup_image_details_window_g

0xc333,	// (0x0001a692) popup_image_details_window_t1

0xc345,	// (0x0001a6a4) popup_image_details_window_t2

0xc35e,	// (0x0001a6bd) popup_image_details_window_t3

0xc372,	// (0x0001a6d1) popup_image_details_window_t4

0xc38d,	// (0x0001a6ec) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0001da8e) popup_image_details_window_t

0x9ac5,	// (0x00017e24) bg_calc_paper_pane_ParamLimits

0x92dc,	// (0x0001763b) grid_highlight_pane_cp013

0x9ad9,	// (0x00017e38) list_calc_pane_ParamLimits

0x9aeb,	// (0x00017e4a) scroll_pane_cp024

0x9af3,	// (0x00017e52) bg_calc_display_pane_ParamLimits

0x0c2e,	// (0x0000ef8d) calc_display_pane_t1_ParamLimits

0x0c40,	// (0x0000ef9f) calc_display_pane_t2_ParamLimits

0x9aff,	// (0x00017e5e) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0001d4be) calc_display_pane_t_ParamLimits

0x0d08,	// (0x0000f067) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0001d4db) cell_calc_pane_g

0x0d11,	// (0x0000f070) cell_calc_pane_t1

0x9b76,	// (0x00017ed5) grid_highlight_pane_cp02_ParamLimits

0x9b8c,	// (0x00017eeb) toolbar_button_pane_cp01_ParamLimits

0x9b8c,	// (0x00017eeb) toolbar_button_pane_cp01

0xab31,	// (0x00018e90) temp_image_control_pane_ParamLimits

0xab31,	// (0x00018e90) temp_image_control_pane

0x934d,	// (0x000176ac) main_mp3_pane

0xc3a7,	// (0x0001a706) temp_image_control_pane_g1_ParamLimits

0xc3a7,	// (0x0001a706) temp_image_control_pane_g1

0xc3b5,	// (0x0001a714) temp_image_control_pane_g2_ParamLimits

0xc3b5,	// (0x0001a714) temp_image_control_pane_g2

0xc3c7,	// (0x0001a726) temp_image_control_pane_g3_ParamLimits

0xc3c7,	// (0x0001a726) temp_image_control_pane_g3

0x44d2,	// (0x00012831) temp_image_control_pane_g4_ParamLimits

0x44d2,	// (0x00012831) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0001da99) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0001da99) temp_image_control_pane_g

0xc3a7,	// (0x0001a706) main_mp3_pane_g1

0x44e5,	// (0x00012844) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0001daa2) main_mp3_pane_g

0xc40a,	// (0x0001a769) main_mp3_pane_t1

0x9d2e,	// (0x0001808d) main_camera_pane_g8_ParamLimits

0x9d2e,	// (0x0001808d) main_camera_pane_g8

0x1496,	// (0x0000f7f5) main_video_pane_g7_ParamLimits

0x1496,	// (0x0000f7f5) main_video_pane_g7

0xbdc8,	// (0x0001a127) main_camera2_pane_t7_ParamLimits

0xbdc8,	// (0x0001a127) main_camera2_pane_t7

0x9f38,	// (0x00018297) scroll_pane_cp025_ParamLimits

0x9f38,	// (0x00018297) scroll_pane_cp025

0x9f4c,	// (0x000182ab) scroll_pane_cp026_ParamLimits

0x9f4c,	// (0x000182ab) scroll_pane_cp026

0x9f5b,	// (0x000182ba) wml_content_pane_ParamLimits

0x92dc,	// (0x0001763b) main_touch_calib_pane

0x45b7,	// (0x00012916) main_touch_calib_pane_g1

0x45c9,	// (0x00012928) main_touch_calib_pane_g2

0x45db,	// (0x0001293a) main_touch_calib_pane_g3

0x45ed,	// (0x0001294c) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0001dac0) main_touch_calib_pane_g

0x45ff,	// (0x0001295e) main_touch_calib_pane_t1

0x4619,	// (0x00012978) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x0001dac9) main_touch_calib_pane_t

0xa708,	// (0x00018a67) mup_progress_pane_cp02

0xa727,	// (0x00018a86) navi_pane_g1

0xa789,	// (0x00018ae8) navi_pane_mp_t3

0x934d,	// (0x000176ac) main_mp3_pane_ParamLimits

0x3a2d,	// (0x00011d8c) navi_pane_ParamLimits

0xc3a7,	// (0x0001a706) main_mp3_pane_g1_ParamLimits

0x44e5,	// (0x00012844) main_mp3_pane_g2_ParamLimits

0x44f1,	// (0x00012850) main_mp3_pane_g3_ParamLimits

0x44f1,	// (0x00012850) main_mp3_pane_g3

0x44ff,	// (0x0001285e) main_mp3_pane_g4_ParamLimits

0x44ff,	// (0x0001285e) main_mp3_pane_g4

0xc3d7,	// (0x0001a736) main_mp3_pane_g5_ParamLimits

0xc3d7,	// (0x0001a736) main_mp3_pane_g5

0xc3e5,	// (0x0001a744) main_mp3_pane_g6_ParamLimits

0xc3e5,	// (0x0001a744) main_mp3_pane_g6

0xc3f2,	// (0x0001a751) main_mp3_pane_g7_ParamLimits

0xc3f2,	// (0x0001a751) main_mp3_pane_g7

0xc3fe,	// (0x0001a75d) main_mp3_pane_g8_ParamLimits

0xc3fe,	// (0x0001a75d) main_mp3_pane_g8

0xf743,	// (0x0001daa2) main_mp3_pane_g_ParamLimits

0x450b,	// (0x0001286a) main_mp3_pane_t2

0x4519,	// (0x00012878) main_mp3_pane_t3

0xc418,	// (0x0001a777) main_mp3_pane_t4

0xc426,	// (0x0001a785) main_mp3_pane_t5

0x0005,

0xf754,	// (0x0001dab3) main_mp3_pane_t

0xc434,	// (0x0001a793) mup_progress_pane_cp01

0x92fa,	// (0x00017659) aid_zoom_text_secondary2

0xc22a,	// (0x0001a589) list_cale_ev2_pane

0xc232,	// (0x0001a591) scroll_pane_cp023_ParamLimits

0x4673,	// (0x000129d2) field_cale_ev2_pane_ParamLimits

0x4673,	// (0x000129d2) field_cale_ev2_pane

0x4697,	// (0x000129f6) field_cale_ev2_pane_g1_ParamLimits

0x4697,	// (0x000129f6) field_cale_ev2_pane_g1

0x46a3,	// (0x00012a02) field_cale_ev2_pane_g2_ParamLimits

0x46a3,	// (0x00012a02) field_cale_ev2_pane_g2

0x46bb,	// (0x00012a1a) field_cale_ev2_pane_g3_ParamLimits

0x46bb,	// (0x00012a1a) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x0001dad4) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x0001dad4) field_cale_ev2_pane_g

0x46d3,	// (0x00012a32) field_cale_ev2_pane_t1_ParamLimits

0x46d3,	// (0x00012a32) field_cale_ev2_pane_t1

0x46ea,	// (0x00012a49) field_cale_ev2_pane_t2_ParamLimits

0x46ea,	// (0x00012a49) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0001dadd) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0001dadd) field_cale_ev2_pane_t

0x2ea9,	// (0x00011208) main_postcard_pane_g5_ParamLimits

0x2ea9,	// (0x00011208) main_postcard_pane_g5

0x2ebf,	// (0x0001121e) main_postcard_pane_g6_ParamLimits

0x2ebf,	// (0x0001121e) main_postcard_pane_g6

0x1242,	// (0x0000f5a1) camera2_autofocus_pane_cp_ParamLimits

0x1242,	// (0x0000f5a1) camera2_autofocus_pane_cp

0x934d,	// (0x000176ac) main_mup3_pane

0x471f,	// (0x00012a7e) main_mup3_pane_g1_ParamLimits

0x471f,	// (0x00012a7e) main_mup3_pane_g1

0x4741,	// (0x00012aa0) main_mup3_pane_g2_ParamLimits

0x4741,	// (0x00012aa0) main_mup3_pane_g2

0x47c4,	// (0x00012b23) main_mup3_pane_g3_ParamLimits

0x47c4,	// (0x00012b23) main_mup3_pane_g3

0x4810,	// (0x00012b6f) main_mup3_pane_g4_ParamLimits

0x4810,	// (0x00012b6f) main_mup3_pane_g4

0x485c,	// (0x00012bbb) main_mup3_pane_g5_ParamLimits

0x485c,	// (0x00012bbb) main_mup3_pane_g5

0x48a8,	// (0x00012c07) main_mup3_pane_g6_ParamLimits

0x48a8,	// (0x00012c07) main_mup3_pane_g6

0xc448,	// (0x0001a7a7) main_mup3_pane_g7_ParamLimits

0xc448,	// (0x0001a7a7) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x0001daed) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x0001daed) main_mup3_pane_g

0x492c,	// (0x00012c8b) main_mup3_pane_t1_ParamLimits

0x492c,	// (0x00012c8b) main_mup3_pane_t1

0x49a4,	// (0x00012d03) main_mup3_pane_t2_ParamLimits

0x49a4,	// (0x00012d03) main_mup3_pane_t2

0x4a7a,	// (0x00012dd9) main_mup3_pane_t4_ParamLimits

0x4a7a,	// (0x00012dd9) main_mup3_pane_t4

0x4ad8,	// (0x00012e37) main_mup3_pane_t5_ParamLimits

0x4ad8,	// (0x00012e37) main_mup3_pane_t5

0x4b9c,	// (0x00012efb) main_mup3_pane_t6_ParamLimits

0x4b9c,	// (0x00012efb) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0001dafe) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0001dafe) main_mup3_pane_t

0x4c56,	// (0x00012fb5) mup3_progress_pane_ParamLimits

0x4c56,	// (0x00012fb5) mup3_progress_pane

0x4cf2,	// (0x00013051) popup_mup3_control_window_ParamLimits

0x4cf2,	// (0x00013051) popup_mup3_control_window

0xc456,	// (0x0001a7b5) popup_mup3_text_window

0x4d28,	// (0x00013087) mup3_progress_pane_t1

0x4d46,	// (0x000130a5) mup3_progress_pane_t2

0xc45e,	// (0x0001a7bd) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0001db0b) mup3_progress_pane_t

0xc47b,	// (0x0001a7da) mup_progress_pane_cp03

0x92dc,	// (0x0001763b) bg_tb_trans_pane_cp04

0x4d64,	// (0x000130c3) mup3_volume_pane

0x4d6c,	// (0x000130cb) popup_mup3_control_window_g1

0x4d75,	// (0x000130d4) mup3_volume_pane_g1

0x4d7e,	// (0x000130dd) mup3_volume_pane_g2

0x4d87,	// (0x000130e6) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0001db12) mup3_volume_pane_g

0x92dc,	// (0x0001763b) bg_tb_trans_pane_cp03

0xc48b,	// (0x0001a7ea) popup_mup3_text_window_g1

0xc493,	// (0x0001a7f2) popup_mup3_text_window_t1

0x9b4d,	// (0x00017eac) list_calc_item_pane_g1_ParamLimits

0xbeb0,	// (0x0001a20f) mup_volume_pane_cp_g1

0x4633,	// (0x00012992) main_touch_calib_pane_t3

0x4647,	// (0x000129a6) main_touch_calib_pane_t4

0x465d,	// (0x000129bc) main_touch_calib_pane_t5

0x92e6,	// (0x00017645) aid_cell_size_toolbar2

0x92ee,	// (0x0001764d) aid_popup3_width_pane

0x92fa,	// (0x00017659) aid_zoom_text_msg_primary

0x1217,	// (0x0000f576) vorec_t7

0x9b11,	// (0x00017e70) bg_calc_paper_pane_g1_ParamLimits

0x9b1d,	// (0x00017e7c) bg_calc_paper_pane_g2_ParamLimits

0x9b29,	// (0x00017e88) bg_calc_paper_pane_g3_ParamLimits

0x9b35,	// (0x00017e94) bg_calc_paper_pane_g4_ParamLimits

0x9b41,	// (0x00017ea0) bg_calc_paper_pane_g5_ParamLimits

0x0c91,	// (0x0000eff0) bg_calc_paper_pane_g6_ParamLimits

0x0ca4,	// (0x0000f003) bg_calc_paper_pane_g7_ParamLimits

0x0cb7,	// (0x0000f016) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x0001d4c5) bg_calc_paper_pane_g_ParamLimits

0x0cc8,	// (0x0000f027) calc_bg_paper_pane_g9_ParamLimits

0x13a4,	// (0x0000f703) image_qvga_pane_ParamLimits

0x13a4,	// (0x0000f703) image_qvga_pane

0x99fe,	// (0x00017d5d) bg_popup_sub_pane_cp04_ParamLimits

0xaa68,	// (0x00018dc7) popup_mup_playback_window_g1_ParamLimits

0xaa74,	// (0x00018dd3) popup_mup_playback_window_t1_ParamLimits

0xaa89,	// (0x00018de8) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0001d851) popup_mup_playback_window_t_ParamLimits

0x4125,	// (0x00012484) main_mup2_pane_g3_ParamLimits

0x4125,	// (0x00012484) main_mup2_pane_g3

0x16e7,	// (0x0000fa46) popup_toolbar_window_cp04

0xae84,	// (0x000191e3) popup_call2_audio_second_window_g3_ParamLimits

0xae84,	// (0x000191e3) popup_call2_audio_second_window_g3

0xb28e,	// (0x000195ed) popup_call2_audio_first_window_g4_ParamLimits

0xb28e,	// (0x000195ed) popup_call2_audio_first_window_g4

0xb90d,	// (0x00019c6c) popup_call2_audio_in_window_g4_ParamLimits

0xb90d,	// (0x00019c6c) popup_call2_audio_in_window_g4

0x2ff0,	// (0x0001134f) aid_area_sk_bg_cut_ParamLimits

0x2ff0,	// (0x0001134f) aid_area_sk_bg_cut

0xaa9e,	// (0x00018dfd) aid_area_sk_bg_cut_2_ParamLimits

0xaa9e,	// (0x00018dfd) aid_area_sk_bg_cut_2

0x4433,	// (0x00012792) aid_placing_details_win

0x443b,	// (0x0001279a) aid_placing_details_win_2

0xc2e9,	// (0x0001a648) camera2_autofocus_pane_g1_ParamLimits

0x08ac,	// (0x0000ec0b) popup_fixed_preview_cale_window_ParamLimits

0x08ac,	// (0x0000ec0b) popup_fixed_preview_cale_window

0xa7e1,	// (0x00018b40) navi_slider_pane_g3

0xa7ea,	// (0x00018b49) navi_slider_pane_g4

0xa7f3,	// (0x00018b52) navi_slider_pane_g5

0xa7e1,	// (0x00018b40) navi_slider_pane_g6

0xa7fc,	// (0x00018b5b) navi_slider_pane_g7

0xa91f,	// (0x00018c7e) mup_scale_pane_g3

0xa928,	// (0x00018c87) mup_scale_pane_g4

0xa931,	// (0x00018c90) mup_scale_pane_g5

0x2cae,	// (0x0001100d) mup_scale_pane_g6

0x2cb7,	// (0x00011016) mup_scale_pane_g7

0xa7e1,	// (0x00018b40) cams2_slider_pane_g3

0xbf65,	// (0x0001a2c4) cams2_slider_pane_g4

0xbf6d,	// (0x0001a2cc) cams2_slider_pane_g5

0xa7e1,	// (0x00018b40) cams2_slider_pane_g6

0xbf75,	// (0x0001a2d4) cams2_slider_pane_g7

0xc1a7,	// (0x0001a506) camera2_autofocus_pane_cp_g1

0xc4a1,	// (0x0001a800) bg_popup_preview_window_pane_cp02_ParamLimits

0xc4a1,	// (0x0001a800) bg_popup_preview_window_pane_cp02

0xc4ad,	// (0x0001a80c) list_fp_cale_pane_ParamLimits

0xc4ad,	// (0x0001a80c) list_fp_cale_pane

0xc4b9,	// (0x0001a818) popup_fixed_preview_cale_window_t1_ParamLimits

0xc4b9,	// (0x0001a818) popup_fixed_preview_cale_window_t1

0x4d90,	// (0x000130ef) popup_fixed_preview_cale_window_t2_ParamLimits

0x4d90,	// (0x000130ef) popup_fixed_preview_cale_window_t2

0x4da5,	// (0x00013104) popup_fixed_preview_cale_window_t3_ParamLimits

0x4da5,	// (0x00013104) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0001db19) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0001db19) popup_fixed_preview_cale_window_t

0x4dbc,	// (0x0001311b) list_single_fp_cale_pane_ParamLimits

0x4dbc,	// (0x0001311b) list_single_fp_cale_pane

0xc4d7,	// (0x0001a836) list_single_fp_cale_pane_g1_ParamLimits

0xc4d7,	// (0x0001a836) list_single_fp_cale_pane_g1

0xc4e3,	// (0x0001a842) list_single_fp_cale_pane_g2_ParamLimits

0xc4e3,	// (0x0001a842) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0001db20) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0001db20) list_single_fp_cale_pane_g

0xc4fc,	// (0x0001a85b) list_single_fp_cale_pane_t1_ParamLimits

0xc4fc,	// (0x0001a85b) list_single_fp_cale_pane_t1

0xc50e,	// (0x0001a86d) list_single_fp_cale_pane_t2_ParamLimits

0xc50e,	// (0x0001a86d) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0001db27) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0001db27) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x92dc,	// (0x0001763b) main_dialer_pane

0x4dd4,	// (0x00013133) aid_cell_size_keypad

0x4dde,	// (0x0001313d) dialer_ne_pane

0x4de8,	// (0x00013147) grid_dialer_command_1_pane

0x4df0,	// (0x0001314f) grid_dialer_command_2_pane

0x4df8,	// (0x00013157) grid_dialer_keypad_pane

0x4e0c,	// (0x0001316b) bg_popup_call_pane_cp06_ParamLimits

0x4e0c,	// (0x0001316b) bg_popup_call_pane_cp06

0x4e18,	// (0x00013177) dialer_ne_clear_pane_ParamLimits

0x4e18,	// (0x00013177) dialer_ne_clear_pane

0xc541,	// (0x0001a8a0) dialer_ne_pane_g1

0xc549,	// (0x0001a8a8) dialer_ne_pane_t1_ParamLimits

0xc549,	// (0x0001a8a8) dialer_ne_pane_t1

0x4e24,	// (0x00013183) dialer_ne_pane_t2_ParamLimits

0x4e24,	// (0x00013183) dialer_ne_pane_t2

0x4e4e,	// (0x000131ad) dialer_ne_pane_t3_ParamLimits

0x4e4e,	// (0x000131ad) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x0001db2c) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x0001db2c) dialer_ne_pane_t

0x4e7e,	// (0x000131dd) dialer_ne_pane_t3_copy1_ParamLimits

0x4e7e,	// (0x000131dd) dialer_ne_pane_t3_copy1

0x4ead,	// (0x0001320c) cell_dialer_keypad_pane_ParamLimits

0x4ead,	// (0x0001320c) cell_dialer_keypad_pane

0x4ec4,	// (0x00013223) cell_dialer_command_1_pane_ParamLimits

0x4ec4,	// (0x00013223) cell_dialer_command_1_pane

0x4eda,	// (0x00013239) cell_dialer_command_2_pane_ParamLimits

0x4eda,	// (0x00013239) cell_dialer_command_2_pane

0xc55b,	// (0x0001a8ba) bg_button_pane_cp02_ParamLimits

0xc55b,	// (0x0001a8ba) bg_button_pane_cp02

0x4ee9,	// (0x00013248) cell_dialer_keypad_pane_g1_ParamLimits

0x4ee9,	// (0x00013248) cell_dialer_keypad_pane_g1

0xc55b,	// (0x0001a8ba) bg_button_pane_cp03_ParamLimits

0xc55b,	// (0x0001a8ba) bg_button_pane_cp03

0x4efe,	// (0x0001325d) cell_dialer_command_1_pane_g1_ParamLimits

0x4efe,	// (0x0001325d) cell_dialer_command_1_pane_g1

0xc567,	// (0x0001a8c6) bg_button_pane_cp04

0x4f12,	// (0x00013271) cell_dialer_command_2_pane_g1

0xa7c7,	// (0x00018b26) bg_button_pane_cp06

0xc56f,	// (0x0001a8ce) dialer_ne_clear_pane_g1

0x2792,	// (0x00010af1) navi_pane_g2

0x27c0,	// (0x00010b1f) navi_pane_g3

0x0002,

0xf3f5,	// (0x0001d754) navi_pane_g

0x27eb,	// (0x00010b4a) navi_pane_mv_g2

0x2812,	// (0x00010b71) navi_pane_mv_g5

0x281a,	// (0x00010b79) navi_pane_mv_t1

0x9af3,	// (0x00017e52) main_clock2_pane

0x4f4b,	// (0x000132aa) main_clock2_list_pane_ParamLimits

0x4f4b,	// (0x000132aa) main_clock2_list_pane

0x4f85,	// (0x000132e4) main_clock2_pane_t1_ParamLimits

0x4f85,	// (0x000132e4) main_clock2_pane_t1

0x4fc1,	// (0x00013320) main_clock2_pane_t2_ParamLimits

0x4fc1,	// (0x00013320) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0001db33) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0001db33) main_clock2_pane_t

0x5060,	// (0x000133bf) popup_clock_analogue_window_cp03_ParamLimits

0x5060,	// (0x000133bf) popup_clock_analogue_window_cp03

0x5087,	// (0x000133e6) popup_clock_digital_window_cp02_ParamLimits

0x5087,	// (0x000133e6) popup_clock_digital_window_cp02

0x5102,	// (0x00013461) main_clock2_list_single_pane_ParamLimits

0x5102,	// (0x00013461) main_clock2_list_single_pane

0xa7c7,	// (0x00018b26) list_highlight_pane_cp05

0xc577,	// (0x0001a8d6) main_clock2_list_single_pane_t1

0x16e7,	// (0x0000fa46) popup_toolbar_window_cp04_ParamLimits

0x44a2,	// (0x00012801) camera2_autofocus_pane_g2_ParamLimits

0x44a2,	// (0x00012801) camera2_autofocus_pane_g2

0x44ae,	// (0x0001280d) camera2_autofocus_pane_g3_ParamLimits

0x44ae,	// (0x0001280d) camera2_autofocus_pane_g3

0x44ba,	// (0x00012819) camera2_autofocus_pane_g4_ParamLimits

0x44ba,	// (0x00012819) camera2_autofocus_pane_g4

0x44c6,	// (0x00012825) camera2_autofocus_pane_g5_ParamLimits

0x44c6,	// (0x00012825) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0001da7c) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0001da7c) camera2_autofocus_pane_g

0x46ff,	// (0x00012a5e) camera2_autofocus_pane_cp_g2

0x4707,	// (0x00012a66) camera2_autofocus_pane_cp_g3

0x470f,	// (0x00012a6e) camera2_autofocus_pane_cp_g4

0x4717,	// (0x00012a76) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x0001dae2) camera2_autofocus_pane_cp_g

0x4e04,	// (0x00013163) popup_dialer_spcha_window

0x92dc,	// (0x0001763b) bg_popup_sub_pane_cp07

0xc585,	// (0x0001a8e4) list_spcha_pane

0xc58d,	// (0x0001a8ec) list_single_spcha_pane_ParamLimits

0xc58d,	// (0x0001a8ec) list_single_spcha_pane

0x92dc,	// (0x0001763b) list_highlight_pane_cp06

0xc59e,	// (0x0001a8fd) list_single_spcha_pane_t1

0xb6b7,	// (0x00019a16) popup_call2_audio_out_window_g4_ParamLimits

0xb6b7,	// (0x00019a16) popup_call2_audio_out_window_g4

0x92dc,	// (0x0001763b) main_imed2_pane

0xbc9e,	// (0x00019ffd) popup_imed_adjust2_window

0x3876,	// (0x00011bd5) popup_imed_trans_window_ParamLimits

0x3876,	// (0x00011bd5) popup_imed_trans_window

0xbfdf,	// (0x0001a33e) popup_blid_sat_info2_window_t1

0xbfed,	// (0x0001a34c) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0001da11) popup_blid_sat_info2_window_t

0x51b8,	// (0x00013517) aid_size_cell_colour_35

0x51d8,	// (0x00013537) aid_size_cell_colour_112

0x51f8,	// (0x00013557) aid_size_cell_effect

0xbc72,	// (0x00019fd1) bg_tb_trans_pane_cp02

0xa241,	// (0x000185a0) heading_imed_pane

0x5218,	// (0x00013577) listscroll_imed_pane

0xc5ac,	// (0x0001a90b) heading_imed_pane_g1

0xc5b4,	// (0x0001a913) heading_imed_pane_t1

0xc5c2,	// (0x0001a921) grid_imed_colour_35_pane_ParamLimits

0xc5c2,	// (0x0001a921) grid_imed_colour_35_pane

0x5224,	// (0x00013583) grid_imed_effect_pane

0xc5de,	// (0x0001a93d) list_imed_aspect_pane

0x523b,	// (0x0001359a) scroll_pane_cp027_ParamLimits

0x523b,	// (0x0001359a) scroll_pane_cp027

0x524c,	// (0x000135ab) cell_imed_effect_pane_ParamLimits

0x524c,	// (0x000135ab) cell_imed_effect_pane

0xc5e6,	// (0x0001a945) cell_imed_colour_pane_ParamLimits

0xc5e6,	// (0x0001a945) cell_imed_colour_pane

0xc630,	// (0x0001a98f) cell_imed_colour_pane_g1_ParamLimits

0xc630,	// (0x0001a98f) cell_imed_colour_pane_g1

0xc641,	// (0x0001a9a0) hgihlgiht_grid_pane_cp016_ParamLimits

0xc641,	// (0x0001a9a0) hgihlgiht_grid_pane_cp016

0x5271,	// (0x000135d0) cell_imed_effect_pane_g1

0x5279,	// (0x000135d8) grid_highlight_pane_cp017

0xc652,	// (0x0001a9b1) list_imed_single_pane_ParamLimits

0xc652,	// (0x0001a9b1) list_imed_single_pane

0x92dc,	// (0x0001763b) list_highlight_pane_cp07

0xc666,	// (0x0001a9c5) list_imed_aspect_pane_comp1_t1

0xbc72,	// (0x00019fd1) bg_tb_trans_pane_cp05

0xc688,	// (0x0001a9e7) popup_imed_adjust2_window_g1

0xc6af,	// (0x0001aa0e) popup_imed_adjust2_window_t1

0xc6c7,	// (0x0001aa26) slider_imed_adjust_pane

0xc6db,	// (0x0001aa3a) slider_imed_adjust_pane_g1

0xc6eb,	// (0x0001aa4a) slider_imed_adjust_pane_g2

0xc6fb,	// (0x0001aa5a) slider_imed_adjust_pane_g3

0xc70c,	// (0x0001aa6b) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0001db50) slider_imed_adjust_pane_g

0x5282,	// (0x000135e1) aid_size_cell_clipart2

0x528e,	// (0x000135ed) grid_imed_clipart_pane

0xc71d,	// (0x0001aa7c) scroll_pane_cp031

0x5298,	// (0x000135f7) cell_imed_clipart_pane_ParamLimits

0x5298,	// (0x000135f7) cell_imed_clipart_pane

0x52b5,	// (0x00013614) cell_imed_clipart_pane_g1

0x92dc,	// (0x0001763b) grid_highlight_pane_cp014

0x4f60,	// (0x000132bf) main_clock2_pane_g1_ParamLimits

0x4f60,	// (0x000132bf) main_clock2_pane_g1

0x50a9,	// (0x00013408) aid_call2_pane_cp10

0x50bb,	// (0x0001341a) aid_call_pane_cp10

0xa6fc,	// (0x00018a5b) popup_clock_analogue_window_cp10_g1

0xa6fc,	// (0x00018a5b) popup_clock_analogue_window_cp10_g2

0x50cd,	// (0x0001342c) popup_clock_analogue_window_cp10_g3

0x50cd,	// (0x0001342c) popup_clock_analogue_window_cp10_g4

0xa6fc,	// (0x00018a5b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0001db3e) popup_clock_analogue_window_cp10_g

0x50e3,	// (0x00013442) popup_clock_analogue_window_cp10_t1

0x5114,	// (0x00013473) clock_digital_number_pane_cp10_ParamLimits

0x5114,	// (0x00013473) clock_digital_number_pane_cp10

0x512e,	// (0x0001348d) clock_digital_number_pane_cp11_ParamLimits

0x512e,	// (0x0001348d) clock_digital_number_pane_cp11

0x5148,	// (0x000134a7) clock_digital_number_pane_cp12_ParamLimits

0x5148,	// (0x000134a7) clock_digital_number_pane_cp12

0x5162,	// (0x000134c1) clock_digital_number_pane_cp13_ParamLimits

0x5162,	// (0x000134c1) clock_digital_number_pane_cp13

0x517c,	// (0x000134db) clock_digital_separator_pane_cp10_ParamLimits

0x517c,	// (0x000134db) clock_digital_separator_pane_cp10

0x5196,	// (0x000134f5) popup_clock_digital_window_cp02_t1_ParamLimits

0x5196,	// (0x000134f5) popup_clock_digital_window_cp02_t1

0x99f6,	// (0x00017d55) clock_digital_number_pane_cp10_g1

0x99f6,	// (0x00017d55) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x0001db59) clock_digital_number_pane_cp10_g

0x99f6,	// (0x00017d55) clock_digital_separator_pane_cp10_g1

0x99f6,	// (0x00017d55) clock_digital_separator_pane_g2_cp10

0xa797,	// (0x00018af6) navi_pane_vded_g4

0xa7a0,	// (0x00018aff) navi_pane_vded_g5

0xa7a9,	// (0x00018b08) navi_pane_vded_t1

0x92dc,	// (0x0001763b) main_vded_pane

0x52be,	// (0x0001361d) main_vded_pane_g1

0x52ca,	// (0x00013629) main_vded_pane_g2

0x52d6,	// (0x00013635) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0001db5e) main_vded_pane_g

0x52e2,	// (0x00013641) main_vded_pane_t1

0x52f0,	// (0x0001364f) main_vded_pane_t2

0x0001,

0xf806,	// (0x0001db65) main_vded_pane_t

0x52fe,	// (0x0001365d) vded_slider_pane

0x5308,	// (0x00013667) vded_video_pane

0xc725,	// (0x0001aa84) vded_video_pane_g1

0x5314,	// (0x00013673) vded_video_pane_g2

0xc1a7,	// (0x0001a506) vded_video_pane_g3

0x0002,

0xf80b,	// (0x0001db6a) vded_video_pane_g

0xc72f,	// (0x0001aa8e) vded_slider_pane_g1

0xbeb0,	// (0x0001a20f) vded_slider_pane_g2

0xc738,	// (0x0001aa97) vded_slider_pane_g3

0xc741,	// (0x0001aaa0) vded_slider_pane_g4

0xc74a,	// (0x0001aaa9) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0001db71) vded_slider_pane_g

0x4cdc,	// (0x0001303b) mup3_rocker_pane_ParamLimits

0x4cdc,	// (0x0001303b) mup3_rocker_pane

0x531d,	// (0x0001367c) mup3_control_keys_pane_g1

0x5325,	// (0x00013684) mup3_control_keys_pane_g2

0x532d,	// (0x0001368c) mup3_control_keys_pane_g3

0x5335,	// (0x00013694) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0001db7c) mup3_control_keys_pane_g

0x08e3,	// (0x0000ec42) popup_toolbar2_fixed_window_cp01_ParamLimits

0x08e3,	// (0x0000ec42) popup_toolbar2_fixed_window_cp01

0x4d12,	// (0x00013071) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4d12,	// (0x00013071) popup_toolbar2_fixed_window_cp02

0xaff6,	// (0x00019355) popup_call2_audio_second_window_t4_ParamLimits

0xaff6,	// (0x00019355) popup_call2_audio_second_window_t4

0xb524,	// (0x00019883) popup_call2_audio_first_window_t6_ParamLimits

0xb524,	// (0x00019883) popup_call2_audio_first_window_t6

0xb7ba,	// (0x00019b19) popup_call2_audio_out_window_t6_ParamLimits

0xb7ba,	// (0x00019b19) popup_call2_audio_out_window_t6

0x92dc,	// (0x0001763b) main_vitu_pane

0x5345,	// (0x000136a4) aid_size_cell_itu_ParamLimits

0x5345,	// (0x000136a4) aid_size_cell_itu

0x934d,	// (0x000176ac) bg_popup_window_pane_cp08_ParamLimits

0x934d,	// (0x000176ac) bg_popup_window_pane_cp08

0x535b,	// (0x000136ba) field_vitu_entry_pane_ParamLimits

0x535b,	// (0x000136ba) field_vitu_entry_pane

0x5372,	// (0x000136d1) grid_vitu_function_pane_ParamLimits

0x5372,	// (0x000136d1) grid_vitu_function_pane

0x538d,	// (0x000136ec) grid_vitu_itu_pane_ParamLimits

0x538d,	// (0x000136ec) grid_vitu_itu_pane

0x53a9,	// (0x00013708) cell_vitu_itu_pane_ParamLimits

0x53a9,	// (0x00013708) cell_vitu_itu_pane

0x53cf,	// (0x0001372e) cell_vitu_function_pane_ParamLimits

0x53cf,	// (0x0001372e) cell_vitu_function_pane

0x934d,	// (0x000176ac) bg_popup_sub_pane_cp08_ParamLimits

0x934d,	// (0x000176ac) bg_popup_sub_pane_cp08

0x53ea,	// (0x00013749) field_vitu_entry_pane_t1_ParamLimits

0x53ea,	// (0x00013749) field_vitu_entry_pane_t1

0xc76b,	// (0x0001aaca) field_vitu_entry_pane_t2_ParamLimits

0xc76b,	// (0x0001aaca) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x0001db8a) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x0001db8a) field_vitu_entry_pane_t

0xc788,	// (0x0001aae7) bg_button_pane_cp05_ParamLimits

0xc788,	// (0x0001aae7) bg_button_pane_cp05

0x540a,	// (0x00013769) cell_vitu_itu_pane_g1

0x5422,	// (0x00013781) cell_vitu_itu_pane_t1_ParamLimits

0x5422,	// (0x00013781) cell_vitu_itu_pane_t1

0x5434,	// (0x00013793) cell_vitu_itu_pane_t2_ParamLimits

0x5434,	// (0x00013793) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0001db8f) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0001db8f) cell_vitu_itu_pane_t

0xc796,	// (0x0001aaf5) bg_button_pane_cp07

0x5469,	// (0x000137c8) cell_vitu_function_pane_g1

0x9a85,	// (0x00017de4) main_calc_pane_g1

0x071e,	// (0x0000ea7d) aid_visual_content_pane

0x92dc,	// (0x0001763b) main_vradio_pane

0x5472,	// (0x000137d1) main_vradio_pane_g1_ParamLimits

0x5472,	// (0x000137d1) main_vradio_pane_g1

0xc7a0,	// (0x0001aaff) main_vradio_pane_g2_ParamLimits

0xc7a0,	// (0x0001aaff) main_vradio_pane_g2

0x0001,

0xf837,	// (0x0001db96) main_vradio_pane_g_ParamLimits

0xf837,	// (0x0001db96) main_vradio_pane_g

0x5489,	// (0x000137e8) main_vradio_pane_t1_ParamLimits

0x5489,	// (0x000137e8) main_vradio_pane_t1

0x549e,	// (0x000137fd) main_vradio_pane_t2_ParamLimits

0x549e,	// (0x000137fd) main_vradio_pane_t2

0xc7ad,	// (0x0001ab0c) main_vradio_pane_t3_ParamLimits

0xc7ad,	// (0x0001ab0c) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x0001db9b) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x0001db9b) main_vradio_pane_t

0x54b3,	// (0x00013812) vradio_rocker_control_pane_ParamLimits

0x54b3,	// (0x00013812) vradio_rocker_control_pane

0x54c5,	// (0x00013824) vradio_station_info_pane_ParamLimits

0x54c5,	// (0x00013824) vradio_station_info_pane

0xc7c1,	// (0x0001ab20) vradio_frequency_info_pane_ParamLimits

0xc7c1,	// (0x0001ab20) vradio_frequency_info_pane

0xc1a7,	// (0x0001a506) vradio_station_info_pane_g1

0xc7d0,	// (0x0001ab2f) vradio_station_info_pane_t1_ParamLimits

0xc7d0,	// (0x0001ab2f) vradio_station_info_pane_t1

0xc7f2,	// (0x0001ab51) vradio_station_info_pane_t2_ParamLimits

0xc7f2,	// (0x0001ab51) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0001dba2) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0001dba2) vradio_station_info_pane_t

0xc804,	// (0x0001ab63) vradio_tuning_pane

0xc80c,	// (0x0001ab6b) vradio_rocker_control_pane_g1

0xc814,	// (0x0001ab73) vradio_rocker_control_pane_g2

0xc81c,	// (0x0001ab7b) vradio_rocker_control_pane_g3

0xc824,	// (0x0001ab83) vradio_rocker_control_pane_g4

0xc82c,	// (0x0001ab8b) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x0001dba7) vradio_rocker_control_pane_g

0x54d5,	// (0x00013834) vradio_frequency_info_pane_g1

0xc834,	// (0x0001ab93) vradio_frequency_info_pane_t1_ParamLimits

0xc834,	// (0x0001ab93) vradio_frequency_info_pane_t1

0x54df,	// (0x0001383e) vradio_tuning_pane_g1

0x54ea,	// (0x00013849) vradio_tuning_pane_t1

0x930a,	// (0x00017669) area_side_right_pane_ParamLimits

0x930a,	// (0x00017669) area_side_right_pane

0xbc39,	// (0x00019f98) status_small_pane_g1

0xbc41,	// (0x00019fa0) status_small_pane_g2

0xbc4a,	// (0x00019fa9) status_small_pane_g3

0xbc53,	// (0x00019fb2) status_small_pane_g4

0x0003,

0xf608,	// (0x0001d967) status_small_pane_g

0xbc5c,	// (0x00019fbb) status_small_pane_t1

0x92dc,	// (0x0001763b) main_video3_pane

0xc848,	// (0x0001aba7) cams_zoom_vslider_pane

0xc850,	// (0x0001abaf) image3_wide_pane_ParamLimits

0xc850,	// (0x0001abaf) image3_wide_pane

0xc86a,	// (0x0001abc9) image3_wide_small_pane

0xc876,	// (0x0001abd5) main_video3_pane_g1_ParamLimits

0xc876,	// (0x0001abd5) main_video3_pane_g1

0xc892,	// (0x0001abf1) main_video3_pane_g2_ParamLimits

0xc892,	// (0x0001abf1) main_video3_pane_g2

0x0001,

0xf853,	// (0x0001dbb2) main_video3_pane_g_ParamLimits

0xf853,	// (0x0001dbb2) main_video3_pane_g

0xc8ae,	// (0x0001ac0d) main_video3_pane_t1_ParamLimits

0xc8ae,	// (0x0001ac0d) main_video3_pane_t1

0xc8d9,	// (0x0001ac38) main_video3_pane_t2_ParamLimits

0xc8d9,	// (0x0001ac38) main_video3_pane_t2

0xc906,	// (0x0001ac65) main_video3_pane_t3_ParamLimits

0xc906,	// (0x0001ac65) main_video3_pane_t3

0x0002,

0xf858,	// (0x0001dbb7) main_video3_pane_t_ParamLimits

0xf858,	// (0x0001dbb7) main_video3_pane_t

0xc933,	// (0x0001ac92) cams_zoom_vslider_pane_g1

0xc93c,	// (0x0001ac9b) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0001dbbe) cams_zoom_vslider_pane_g

0xc944,	// (0x0001aca3) small_slider_vertical_pane

0xc1a7,	// (0x0001a506) small_slider_vertical_pane_g1

0xc1a7,	// (0x0001a506) small_slider_vertical_pane_g2

0xc94c,	// (0x0001acab) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x0001dbc3) small_slider_vertical_pane_g

0x92dc,	// (0x0001763b) main_hwr_training_pane

0xc955,	// (0x0001acb4) hwr_training_instruct_pane_ParamLimits

0xc955,	// (0x0001acb4) hwr_training_instruct_pane

0x54f9,	// (0x00013858) hwr_training_navi_pane_ParamLimits

0x54f9,	// (0x00013858) hwr_training_navi_pane

0x5518,	// (0x00013877) hwr_training_write_pane_ParamLimits

0x5518,	// (0x00013877) hwr_training_write_pane

0x92dc,	// (0x0001763b) bg_frame_shadow_pane

0xc98c,	// (0x0001aceb) hwr_training_write_pane_g1

0xc994,	// (0x0001acf3) hwr_training_write_pane_g2

0xc99c,	// (0x0001acfb) hwr_training_write_pane_g3

0xc9a4,	// (0x0001ad03) hwr_training_write_pane_g4

0xc9ac,	// (0x0001ad0b) hwr_training_write_pane_g5

0xc9b4,	// (0x0001ad13) hwr_training_write_pane_g6

0xc9bc,	// (0x0001ad1b) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x0001dbca) hwr_training_write_pane_g

0xc9c4,	// (0x0001ad23) hwr_training_navi_pane_g1_ParamLimits

0xc9c4,	// (0x0001ad23) hwr_training_navi_pane_g1

0xc9d6,	// (0x0001ad35) hwr_training_navi_pane_g2_ParamLimits

0xc9d6,	// (0x0001ad35) hwr_training_navi_pane_g2

0xc9e8,	// (0x0001ad47) hwr_training_navi_pane_g3_ParamLimits

0xc9e8,	// (0x0001ad47) hwr_training_navi_pane_g3

0xc9f8,	// (0x0001ad57) hwr_training_navi_pane_g4_ParamLimits

0xc9f8,	// (0x0001ad57) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0001dbd9) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0001dbd9) hwr_training_navi_pane_g

0xca05,	// (0x0001ad64) hwr_training_navi_pane_t1

0x5560,	// (0x000138bf) list_single_hwr_training_instruct_pane_ParamLimits

0x5560,	// (0x000138bf) list_single_hwr_training_instruct_pane

0xca13,	// (0x0001ad72) list_single_hwr_training_instruct_pane_t1

0xc0e7,	// (0x0001a446) bg_frame_shadow_pane_g1

0xca22,	// (0x0001ad81) bg_frame_shadow_pane_g2

0xca2a,	// (0x0001ad89) bg_frame_shadow_pane_g3

0xca32,	// (0x0001ad91) bg_frame_shadow_pane_g4

0xca3a,	// (0x0001ad99) bg_frame_shadow_pane_g5

0xca42,	// (0x0001ada1) bg_frame_shadow_pane_g6

0xca4a,	// (0x0001ada9) bg_frame_shadow_pane_g7

0x9bec,	// (0x00017f4b) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x0001dbe4) bg_frame_shadow_pane_g

0x92dc,	// (0x0001763b) main_video_tele_dialer_pane

0x557c,	// (0x000138db) aid_size_cell_video_keypad_ParamLimits

0x557c,	// (0x000138db) aid_size_cell_video_keypad

0x5596,	// (0x000138f5) grid_video_dialer_keypad_pane_ParamLimits

0x5596,	// (0x000138f5) grid_video_dialer_keypad_pane

0x55e2,	// (0x00013941) video_down_pane_cp_ParamLimits

0x55e2,	// (0x00013941) video_down_pane_cp

0x5612,	// (0x00013971) cell_video_dialer_keypad_pane_ParamLimits

0x5612,	// (0x00013971) cell_video_dialer_keypad_pane

0xca52,	// (0x0001adb1) bg_button_pane_cp08_ParamLimits

0xca52,	// (0x0001adb1) bg_button_pane_cp08

0x5638,	// (0x00013997) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5638,	// (0x00013997) cell_video_dialer_keypad_pane_g1

0x4cc6,	// (0x00013025) mup3_rocker2_pane_ParamLimits

0x4cc6,	// (0x00013025) mup3_rocker2_pane

0xc1a7,	// (0x0001a506) mup3_rocker2_pane_g1

0x3743,	// (0x00011aa2) main_dialer2_pane

0x92dc,	// (0x0001763b) main_mp4_pane

0xca66,	// (0x0001adc5) main_mp4_pane_g1_ParamLimits

0xca66,	// (0x0001adc5) main_mp4_pane_g1

0xca66,	// (0x0001adc5) main_mp4_pane_g2_ParamLimits

0xca66,	// (0x0001adc5) main_mp4_pane_g2

0x5673,	// (0x000139d2) main_mp4_pane_g3_ParamLimits

0x5673,	// (0x000139d2) main_mp4_pane_g3

0xca74,	// (0x0001add3) main_mp4_pane_g4_ParamLimits

0xca74,	// (0x0001add3) main_mp4_pane_g4

0xca9c,	// (0x0001adfb) main_mp4_pane_g5_ParamLimits

0xca9c,	// (0x0001adfb) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0001dc04) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0001dc04) main_mp4_pane_g

0xcaec,	// (0x0001ae4b) main_mp4_pane_t1_ParamLimits

0xcaec,	// (0x0001ae4b) main_mp4_pane_t1

0xcb48,	// (0x0001aea7) main_mp4_pane_t2_ParamLimits

0xcb48,	// (0x0001aea7) main_mp4_pane_t2

0xcb9a,	// (0x0001aef9) main_mp4_pane_t3_ParamLimits

0xcb9a,	// (0x0001aef9) main_mp4_pane_t3

0xcbba,	// (0x0001af19) main_mp4_pane_t4_ParamLimits

0xcbba,	// (0x0001af19) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0001dc11) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0001dc11) main_mp4_pane_t

0xcbfa,	// (0x0001af59) mp4_progress_pane_ParamLimits

0xcbfa,	// (0x0001af59) mp4_progress_pane

0xcc44,	// (0x0001afa3) mp4_rocker_pane_ParamLimits

0xcc44,	// (0x0001afa3) mp4_rocker_pane

0xcc6e,	// (0x0001afcd) mp4_progress_pane_t1

0xcc87,	// (0x0001afe6) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x0001dc1a) mp4_progress_pane_t

0xcca0,	// (0x0001afff) mup_progress_pane_cp04

0xc1a7,	// (0x0001a506) mp4_rocker_pane_g1

0x56bd,	// (0x00013a1c) aid_cell_size_keypad2_ParamLimits

0x56bd,	// (0x00013a1c) aid_cell_size_keypad2

0x56d3,	// (0x00013a32) dialer2_ne_pane_ParamLimits

0x56d3,	// (0x00013a32) dialer2_ne_pane

0x56eb,	// (0x00013a4a) grid_dialer2_keypad_pane_ParamLimits

0x56eb,	// (0x00013a4a) grid_dialer2_keypad_pane

0xbf86,	// (0x0001a2e5) bg_popup_call_pane_cp07_ParamLimits

0xbf86,	// (0x0001a2e5) bg_popup_call_pane_cp07

0x5707,	// (0x00013a66) dialer2_ne_pane_t1_ParamLimits

0x5707,	// (0x00013a66) dialer2_ne_pane_t1

0x5747,	// (0x00013aa6) cell_dialer2_keypad_pane_ParamLimits

0x5747,	// (0x00013aa6) cell_dialer2_keypad_pane

0xccbe,	// (0x0001b01d) bg_button_pane_pane_cp04_ParamLimits

0xccbe,	// (0x0001b01d) bg_button_pane_pane_cp04

0x576d,	// (0x00013acc) cell_dialer2_keypad_pane_g1_ParamLimits

0x576d,	// (0x00013acc) cell_dialer2_keypad_pane_g1

0x15ce,	// (0x0000f92d) aid_placing_vt_set_content_ParamLimits

0x15ce,	// (0x0000f92d) aid_placing_vt_set_content

0x15f2,	// (0x0000f951) aid_placing_vt_set_title_ParamLimits

0x15f2,	// (0x0000f951) aid_placing_vt_set_title

0x92dc,	// (0x0001763b) main_image3_pane

0x5833,	// (0x00013b92) area_side_right_pane_cp01_ParamLimits

0x5833,	// (0x00013b92) area_side_right_pane_cp01

0xca66,	// (0x0001adc5) main_image3_pane_g1_ParamLimits

0xca66,	// (0x0001adc5) main_image3_pane_g1

0x584c,	// (0x00013bab) main_image3_pane_g2_ParamLimits

0x584c,	// (0x00013bab) main_image3_pane_g2

0x5874,	// (0x00013bd3) main_image3_pane_g3_ParamLimits

0x5874,	// (0x00013bd3) main_image3_pane_g3

0x589e,	// (0x00013bfd) main_image3_pane_g4_ParamLimits

0x589e,	// (0x00013bfd) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x0001dc29) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x0001dc29) main_image3_pane_g

0x58c8,	// (0x00013c27) main_image3_pane_t1_ParamLimits

0x58c8,	// (0x00013c27) main_image3_pane_t1

0x5920,	// (0x00013c7f) main_image3_pane_t2_ParamLimits

0x5920,	// (0x00013c7f) main_image3_pane_t2

0x5972,	// (0x00013cd1) main_image3_pane_t3_ParamLimits

0x5972,	// (0x00013cd1) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x0001dc32) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x0001dc32) main_image3_pane_t

0x934d,	// (0x000176ac) grid_sctrl_middle_pane_cp01_ParamLimits

0x934d,	// (0x000176ac) grid_sctrl_middle_pane_cp01

0x59fa,	// (0x00013d59) cell_sctrl_middle_pane_cp01_ParamLimits

0x59fa,	// (0x00013d59) cell_sctrl_middle_pane_cp01

0x5a17,	// (0x00013d76) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5a17,	// (0x00013d76) cell_sctrl_middle_pane_cp01_g1

0x92dc,	// (0x0001763b) main_call4_pane

0x5a2c,	// (0x00013d8b) aid_size_button_call4_ParamLimits

0x5a2c,	// (0x00013d8b) aid_size_button_call4

0x5a5f,	// (0x00013dbe) call4_windows_pane_ParamLimits

0x5a5f,	// (0x00013dbe) call4_windows_pane

0x5a81,	// (0x00013de0) grid_call4_button_pane_ParamLimits

0x5a81,	// (0x00013de0) grid_call4_button_pane

0xccfe,	// (0x0001b05d) call4_windows_conf_pane

0x5aac,	// (0x00013e0b) popup_call4_audio_first_window_ParamLimits

0x5aac,	// (0x00013e0b) popup_call4_audio_first_window

0x5ad8,	// (0x00013e37) popup_call4_audio_second_window_ParamLimits

0x5ad8,	// (0x00013e37) popup_call4_audio_second_window

0xcd72,	// (0x0001b0d1) popup_call4_audio_wait_window_ParamLimits

0xcd72,	// (0x0001b0d1) popup_call4_audio_wait_window

0x5aee,	// (0x00013e4d) cell_call4_button_pane_ParamLimits

0x5aee,	// (0x00013e4d) cell_call4_button_pane

0x5b15,	// (0x00013e74) bg_button_pane_cp09_ParamLimits

0x5b15,	// (0x00013e74) bg_button_pane_cp09

0x5b21,	// (0x00013e80) cell_call4_button_pane_g1_ParamLimits

0x5b21,	// (0x00013e80) cell_call4_button_pane_g1

0x5b47,	// (0x00013ea6) cell_call4_button_pane_t1_ParamLimits

0x5b47,	// (0x00013ea6) cell_call4_button_pane_t1

0xcdba,	// (0x0001b119) popup_call4_audio_conf_window_ParamLimits

0xcdba,	// (0x0001b119) popup_call4_audio_conf_window

0x4d28,	// (0x00013087) mup3_progress_pane_t1_ParamLimits

0x4d46,	// (0x000130a5) mup3_progress_pane_t2_ParamLimits

0xc45e,	// (0x0001a7bd) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0001db0b) mup3_progress_pane_t_ParamLimits

0xc47b,	// (0x0001a7da) mup_progress_pane_cp03_ParamLimits

0x533d,	// (0x0001369c) mup3_control_keys_pane_g4_copy1

0xcc28,	// (0x0001af87) mp4_rocker2_pane_ParamLimits

0xcc28,	// (0x0001af87) mp4_rocker2_pane

0xcdd4,	// (0x0001b133) mp4_rocker2_pane_g1

0xcddc,	// (0x0001b13b) mp4_rocker2_pane_g2

0xcde4,	// (0x0001b143) mp4_rocker2_pane_g3

0xcdec,	// (0x0001b14b) mp4_rocker2_pane_g4

0xcdf4,	// (0x0001b153) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x0001dc3b) mp4_rocker2_pane_g

0x92dc,	// (0x0001763b) main_camera4_pane

0x92dc,	// (0x0001763b) main_video4_pane

0x55b0,	// (0x0001390f) main_video_tele_dialer_pane_t1_ParamLimits

0x55b0,	// (0x0001390f) main_video_tele_dialer_pane_t1

0x55c9,	// (0x00013928) main_video_tele_dialer_pane_t2_ParamLimits

0x55c9,	// (0x00013928) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x0001dbf5) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x0001dbf5) main_video_tele_dialer_pane_t

0x5b85,	// (0x00013ee4) cam4_autofocus_pane_ParamLimits

0x5b85,	// (0x00013ee4) cam4_autofocus_pane

0x5b9b,	// (0x00013efa) cam4_image_uncrop_pane_ParamLimits

0x5b9b,	// (0x00013efa) cam4_image_uncrop_pane

0x5bb4,	// (0x00013f13) cam4_indicators_pane_ParamLimits

0x5bb4,	// (0x00013f13) cam4_indicators_pane

0x5be3,	// (0x00013f42) main_camera4_pane_g1_ParamLimits

0x5be3,	// (0x00013f42) main_camera4_pane_g1

0x5bf5,	// (0x00013f54) main_camera4_pane_g2_ParamLimits

0x5bf5,	// (0x00013f54) main_camera4_pane_g2

0x5c08,	// (0x00013f67) main_camera4_pane_g3_ParamLimits

0x5c08,	// (0x00013f67) main_camera4_pane_g3

0x5c1b,	// (0x00013f7a) main_camera4_pane_g4_ParamLimits

0x5c1b,	// (0x00013f7a) main_camera4_pane_g4

0x5c2e,	// (0x00013f8d) main_camera4_pane_g5_ParamLimits

0x5c2e,	// (0x00013f8d) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x0001dc46) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x0001dc46) main_camera4_pane_g

0x5c52,	// (0x00013fb1) main_camera4_pane_t1_ParamLimits

0x5c52,	// (0x00013fb1) main_camera4_pane_t1

0xc3d7,	// (0x0001a736) bg_tb_trans_pane_cp06

0xce22,	// (0x0001b181) cam4_indicators_pane_g1

0xce33,	// (0x0001b192) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0001dc61) cam4_indicators_pane_g

0xce4b,	// (0x0001b1aa) cam4_indicators_pane_t1

0x5cb6,	// (0x00014015) main_video4_pane_g1_ParamLimits

0x5cb6,	// (0x00014015) main_video4_pane_g1

0x5cc5,	// (0x00014024) main_video4_pane_g2_ParamLimits

0x5cc5,	// (0x00014024) main_video4_pane_g2

0x5cd4,	// (0x00014033) main_video4_pane_g3_ParamLimits

0x5cd4,	// (0x00014033) main_video4_pane_g3

0x5ce3,	// (0x00014042) main_video4_pane_g4_ParamLimits

0x5ce3,	// (0x00014042) main_video4_pane_g4

0x0004,

0xf909,	// (0x0001dc68) main_video4_pane_g_ParamLimits

0xf909,	// (0x0001dc68) main_video4_pane_g

0x5d01,	// (0x00014060) vid4_indicators_pane_ParamLimits

0x5d01,	// (0x00014060) vid4_indicators_pane

0x5d2f,	// (0x0001408e) video4_image_uncrop_cif_pane_ParamLimits

0x5d2f,	// (0x0001408e) video4_image_uncrop_cif_pane

0x5d49,	// (0x000140a8) video4_image_uncrop_nhd_pane_ParamLimits

0x5d49,	// (0x000140a8) video4_image_uncrop_nhd_pane

0x5b9b,	// (0x00013efa) video4_image_uncrop_vga_pane_ParamLimits

0x5b9b,	// (0x00013efa) video4_image_uncrop_vga_pane

0x934d,	// (0x000176ac) bg_tb_trans_pane_cp07

0xce79,	// (0x0001b1d8) vid4_indicators_pane_g1

0xce8f,	// (0x0001b1ee) vid4_indicators_pane_g2

0xcea3,	// (0x0001b202) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x0001dc73) vid4_indicators_pane_g

0xced4,	// (0x0001b233) vid4_indicators_pane_t1

0x5d5f,	// (0x000140be) cam4_autofocus_pane_g1

0x5d67,	// (0x000140c6) cam4_autofocus_pane_g2

0x5d6f,	// (0x000140ce) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0001dc7e) cam4_autofocus_pane_g

0x5d77,	// (0x000140d6) cam4_autofocus_pane_g3_copy1

0x55f6,	// (0x00013955) video_down_pane_cp_t1

0x5604,	// (0x00013963) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x0001dbfa) video_down_pane_cp_t

0x934d,	// (0x000176ac) popup_vitu2_window_ParamLimits

0x934d,	// (0x000176ac) popup_vitu2_window

0x5d7f,	// (0x000140de) aid_size_cell2_itu2_ParamLimits

0x5d7f,	// (0x000140de) aid_size_cell2_itu2

0x5da5,	// (0x00014104) aid_size_cell_itu2_ParamLimits

0x5da5,	// (0x00014104) aid_size_cell_itu2

0x5e03,	// (0x00014162) bg_popup_window_pane_cp09_ParamLimits

0x5e03,	// (0x00014162) bg_popup_window_pane_cp09

0x5e11,	// (0x00014170) field_vitu2_entry_pane_ParamLimits

0x5e11,	// (0x00014170) field_vitu2_entry_pane

0x5e39,	// (0x00014198) grid_vitu2_function_pane_ParamLimits

0x5e39,	// (0x00014198) grid_vitu2_function_pane

0x5e8a,	// (0x000141e9) grid_vitu2_itu_pane_ParamLimits

0x5e8a,	// (0x000141e9) grid_vitu2_itu_pane

0x5f15,	// (0x00014274) cell_vitu2_itu_pane_ParamLimits

0x5f15,	// (0x00014274) cell_vitu2_itu_pane

0x5f3b,	// (0x0001429a) cell_vitu2_function_pane_ParamLimits

0x5f3b,	// (0x0001429a) cell_vitu2_function_pane

0xceeb,	// (0x0001b24a) bg_popup_call_pane_cp08_ParamLimits

0xceeb,	// (0x0001b24a) bg_popup_call_pane_cp08

0xcf04,	// (0x0001b263) field_vitu2_entry_pane_g1

0xcf10,	// (0x0001b26f) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x0001dc85) field_vitu2_entry_pane_g

0x5f7f,	// (0x000142de) field_vitu2_entry_pane_t1_ParamLimits

0x5f7f,	// (0x000142de) field_vitu2_entry_pane_t1

0xcf2a,	// (0x0001b289) field_vitu2_entry_pane_t2_ParamLimits

0xcf2a,	// (0x0001b289) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0001dc8c) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0001dc8c) field_vitu2_entry_pane_t

0x5fae,	// (0x0001430d) bg_button_pane_cp010_ParamLimits

0x5fae,	// (0x0001430d) bg_button_pane_cp010

0x5fbc,	// (0x0001431b) cell_vitu2_itu_pane_g1

0x5fda,	// (0x00014339) cell_vitu2_itu_pane_t1_ParamLimits

0x5fda,	// (0x00014339) cell_vitu2_itu_pane_t1

0x6040,	// (0x0001439f) cell_vitu2_itu_pane_t2_ParamLimits

0x6040,	// (0x0001439f) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x0001dc96) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x0001dc96) cell_vitu2_itu_pane_t

0x934d,	// (0x000176ac) bg_button_pane_cp011

0x611c,	// (0x0001447b) cell_vitu2_function_pane_g1

0x92dc,	// (0x0001763b) main_myfav_hc_pane

0x59c2,	// (0x00013d21) popup_image3_note_pane_ParamLimits

0x59c2,	// (0x00013d21) popup_image3_note_pane

0x59de,	// (0x00013d3d) popup_image3_tool_bar_pane_ParamLimits

0x59de,	// (0x00013d3d) popup_image3_tool_bar_pane

0x60c4,	// (0x00014423) cell_vitu2_itu_pane_t3_ParamLimits

0x60c4,	// (0x00014423) cell_vitu2_itu_pane_t3

0x92dc,	// (0x0001763b) bg_popup_trans_pane

0xcf4f,	// (0x0001b2ae) grid_image3_tool_bar_pane

0xcf59,	// (0x0001b2b8) bg_popup_trans_pane_g1

0xa041,	// (0x000183a0) bg_popup_trans_pane_g2

0xcf61,	// (0x0001b2c0) bg_popup_trans_pane_g3

0xcf69,	// (0x0001b2c8) bg_popup_trans_pane_g4

0xcf71,	// (0x0001b2d0) bg_popup_trans_pane_g5

0xcf79,	// (0x0001b2d8) bg_popup_trans_pane_g6

0xcf81,	// (0x0001b2e0) bg_popup_trans_pane_g7

0xcf89,	// (0x0001b2e8) bg_popup_trans_pane_g8

0xa021,	// (0x00018380) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0001dc9d) bg_popup_trans_pane_g

0xcf91,	// (0x0001b2f0) cell_image3_tool_bar_pane_ParamLimits

0xcf91,	// (0x0001b2f0) cell_image3_tool_bar_pane

0xc1a7,	// (0x0001a506) cell_image3_tool_bar_pane_g1

0x92dc,	// (0x0001763b) bg_popup_trans_pane_cp1

0xcfa7,	// (0x0001b306) popup_image3_note_pane_t1

0xcfb5,	// (0x0001b314) popup_image3_note_pane_t2

0xcfc3,	// (0x0001b322) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x0001dcb0) popup_image3_note_pane_t

0xcfd3,	// (0x0001b332) popup_image3_note_pane_t3_copy1

0x6130,	// (0x0001448f) bg_myfav_hc_instruction_pane_ParamLimits

0x6130,	// (0x0001448f) bg_myfav_hc_instruction_pane

0x6148,	// (0x000144a7) cell_myfav_contact_pane_ParamLimits

0x6148,	// (0x000144a7) cell_myfav_contact_pane

0x6164,	// (0x000144c3) cell_myfav_contact_pane_cp1_ParamLimits

0x6164,	// (0x000144c3) cell_myfav_contact_pane_cp1

0x617c,	// (0x000144db) cell_myfav_contact_pane_cp2_ParamLimits

0x617c,	// (0x000144db) cell_myfav_contact_pane_cp2

0x6194,	// (0x000144f3) cell_myfav_contact_pane_cp3_ParamLimits

0x6194,	// (0x000144f3) cell_myfav_contact_pane_cp3

0x61ab,	// (0x0001450a) cell_myfav_contact_pane_cp4_ParamLimits

0x61ab,	// (0x0001450a) cell_myfav_contact_pane_cp4

0x61c3,	// (0x00014522) cell_myfav_contact_pane_cp5_ParamLimits

0x61c3,	// (0x00014522) cell_myfav_contact_pane_cp5

0x61d7,	// (0x00014536) cell_myfav_contact_pane_cp6_ParamLimits

0x61d7,	// (0x00014536) cell_myfav_contact_pane_cp6

0x61ed,	// (0x0001454c) cell_myfav_contact_pane_cp7_ParamLimits

0x61ed,	// (0x0001454c) cell_myfav_contact_pane_cp7

0xcfe1,	// (0x0001b340) listscroll_gen_pane_cp05

0x6205,	// (0x00014564) main_myfav_hc_pane_g1_ParamLimits

0x6205,	// (0x00014564) main_myfav_hc_pane_g1

0x621f,	// (0x0001457e) main_myfav_hc_pane_g2_ParamLimits

0x621f,	// (0x0001457e) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x0001dcb7) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x0001dcb7) main_myfav_hc_pane_g

0x6253,	// (0x000145b2) main_myfav_hc_pane_t1_ParamLimits

0x6253,	// (0x000145b2) main_myfav_hc_pane_t1

0xcfea,	// (0x0001b349) main_myfav_hc_pane_t2_ParamLimits

0xcfea,	// (0x0001b349) main_myfav_hc_pane_t2

0xcffc,	// (0x0001b35b) main_myfav_hc_pane_t3_ParamLimits

0xcffc,	// (0x0001b35b) main_myfav_hc_pane_t3

0x626a,	// (0x000145c9) main_myfav_hc_pane_t4_ParamLimits

0x626a,	// (0x000145c9) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x0001dcbe) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x0001dcbe) main_myfav_hc_pane_t

0xc1a7,	// (0x0001a506) bg_myfav_hc_instruction_pane_g1

0xd00e,	// (0x0001b36d) cell_myfav_contact_pane_g1_ParamLimits

0xd00e,	// (0x0001b36d) cell_myfav_contact_pane_g1

0xd00e,	// (0x0001b36d) cell_myfav_contact_pane_g2_ParamLimits

0xd00e,	// (0x0001b36d) cell_myfav_contact_pane_g2

0xd01a,	// (0x0001b379) cell_myfav_contact_pane_g3_ParamLimits

0xd01a,	// (0x0001b379) cell_myfav_contact_pane_g3

0xc448,	// (0x0001a7a7) cell_myfav_contact_pane_g4_ParamLimits

0xc448,	// (0x0001a7a7) cell_myfav_contact_pane_g4

0xd027,	// (0x0001b386) cell_myfav_contact_pane_g5_ParamLimits

0xd027,	// (0x0001b386) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x0001dcc9) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x0001dcc9) cell_myfav_contact_pane_g

0x6239,	// (0x00014598) main_myfav_hc_pane_g3_ParamLimits

0x6239,	// (0x00014598) main_myfav_hc_pane_g3

0x0844,	// (0x0000eba3) popup_adpt_find_window

0x6294,	// (0x000145f3) afind_page_pane_ParamLimits

0x6294,	// (0x000145f3) afind_page_pane

0x62a9,	// (0x00014608) aid_size_cell_afind_ParamLimits

0x62a9,	// (0x00014608) aid_size_cell_afind

0x62c7,	// (0x00014626) bg_popup_sub_pane_cp09_ParamLimits

0x62c7,	// (0x00014626) bg_popup_sub_pane_cp09

0x62d4,	// (0x00014633) find_pane_cp01_ParamLimits

0x62d4,	// (0x00014633) find_pane_cp01

0xd033,	// (0x0001b392) grid_afind_control_pane_ParamLimits

0xd033,	// (0x0001b392) grid_afind_control_pane

0x62e1,	// (0x00014640) grid_afind_pane_ParamLimits

0x62e1,	// (0x00014640) grid_afind_pane

0x6303,	// (0x00014662) cell_afind_pane_ParamLimits

0x6303,	// (0x00014662) cell_afind_pane

0xc1a7,	// (0x0001a506) afind_page_pane_g1

0x6366,	// (0x000146c5) afind_page_pane_g2

0x636f,	// (0x000146ce) afind_page_pane_g3

0x0002,

0xf975,	// (0x0001dcd4) afind_page_pane_g

0x6378,	// (0x000146d7) afind_page_pane_t1

0xd047,	// (0x0001b3a6) cell_afind_grid_control_pane_ParamLimits

0xd047,	// (0x0001b3a6) cell_afind_grid_control_pane

0xccbe,	// (0x0001b01d) bg_button_pane_cp69_ParamLimits

0xccbe,	// (0x0001b01d) bg_button_pane_cp69

0x6398,	// (0x000146f7) cell_afind_pane_g1_ParamLimits

0x6398,	// (0x000146f7) cell_afind_pane_g1

0x63a5,	// (0x00014704) cell_afind_pane_t1_ParamLimits

0x63a5,	// (0x00014704) cell_afind_pane_t1

0x9d78,	// (0x000180d7) bg_button_pane_cp72

0xd056,	// (0x0001b3b5) cell_afind_grid_control_pane_g1

0x31e3,	// (0x00011542) aid_image_placing_area_ParamLimits

0x31e3,	// (0x00011542) aid_image_placing_area

0xc753,	// (0x0001aab2) field_vitu_entry_pane_g1_ParamLimits

0xc753,	// (0x0001aab2) field_vitu_entry_pane_g1

0xc75f,	// (0x0001aabe) field_vitu_entry_pane_g2_ParamLimits

0xc75f,	// (0x0001aabe) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x0001db85) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x0001db85) field_vitu_entry_pane_g

0x540a,	// (0x00013769) cell_vitu_itu_pane_g1_ParamLimits

0x544c,	// (0x000137ab) cell_vitu_itu_pane_t3_ParamLimits

0x544c,	// (0x000137ab) cell_vitu_itu_pane_t3

0xcc6e,	// (0x0001afcd) mp4_progress_pane_t1_ParamLimits

0xcc87,	// (0x0001afe6) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x0001dc1a) mp4_progress_pane_t_ParamLimits

0xcca0,	// (0x0001afff) mup_progress_pane_cp04_ParamLimits

0x627e,	// (0x000145dd) main_myfav_hc_pane_t5_ParamLimits

0x627e,	// (0x000145dd) main_myfav_hc_pane_t5

0x9302,	// (0x00017661) aid_zoom_text_primary

0x0844,	// (0x0000eba3) popup_adpt_find_window_ParamLimits

0x934d,	// (0x000176ac) main_cam_set_pane

0x5bcd,	// (0x00013f2c) cam4_zoom_pane_ParamLimits

0x5bcd,	// (0x00013f2c) cam4_zoom_pane

0x63b7,	// (0x00014716) main_cam_set_pane_g1_ParamLimits

0x63b7,	// (0x00014716) main_cam_set_pane_g1

0x63c5,	// (0x00014724) main_cam_set_pane_g2_ParamLimits

0x63c5,	// (0x00014724) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x0001dcdb) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x0001dcdb) main_cam_set_pane_g

0x63e6,	// (0x00014745) main_cam_set_pane_t1_ParamLimits

0x63e6,	// (0x00014745) main_cam_set_pane_t1

0x6401,	// (0x00014760) main_cset_listscroll_pane_ParamLimits

0x6401,	// (0x00014760) main_cset_listscroll_pane

0x6425,	// (0x00014784) main_cset_slider_pane_ParamLimits

0x6425,	// (0x00014784) main_cset_slider_pane

0xd067,	// (0x0001b3c6) main_cset_list_pane_ParamLimits

0xd067,	// (0x0001b3c6) main_cset_list_pane

0xd077,	// (0x0001b3d6) scroll_pane_cp028

0x644f,	// (0x000147ae) aid_area_touch_slider

0x646b,	// (0x000147ca) cset_slider_pane

0x6495,	// (0x000147f4) main_cset_slider_pane_g1

0x64aa,	// (0x00014809) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x0001dce0) main_cset_slider_pane_g

0xd0b0,	// (0x0001b40f) main_cset_slider_pane_t1

0x656c,	// (0x000148cb) main_cset_slider_pane_t2

0x6586,	// (0x000148e5) main_cset_slider_pane_t3

0x65a0,	// (0x000148ff) main_cset_slider_pane_t4

0x65ba,	// (0x00014919) main_cset_slider_pane_t5

0x65d8,	// (0x00014937) main_cset_slider_pane_t6

0x65ef,	// (0x0001494e) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x0001dd05) main_cset_slider_pane_t

0x66fb,	// (0x00014a5a) cset_list_set_pane_ParamLimits

0x66fb,	// (0x00014a5a) cset_list_set_pane

0x670f,	// (0x00014a6e) aid_position_infowindow_above

0x6717,	// (0x00014a76) aid_position_infowindow_below

0x671f,	// (0x00014a7e) cset_list_set_pane_g1_ParamLimits

0x671f,	// (0x00014a7e) cset_list_set_pane_g1

0x672b,	// (0x00014a8a) cset_list_set_pane_g3_ParamLimits

0x672b,	// (0x00014a8a) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0001dd24) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0001dd24) cset_list_set_pane_g

0x673a,	// (0x00014a99) cset_list_set_pane_t1_ParamLimits

0x673a,	// (0x00014a99) cset_list_set_pane_t1

0x934d,	// (0x000176ac) list_highlight_pane_cp021_ParamLimits

0x934d,	// (0x000176ac) list_highlight_pane_cp021

0xa91f,	// (0x00018c7e) cset_slider_pane_g1

0xa931,	// (0x00018c90) cset_slider_pane_g2

0xa928,	// (0x00018c87) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x0001dd29) cset_slider_pane_g

0xd150,	// (0x0001b4af) aid_area_touch_cam4_zoom

0xd158,	// (0x0001b4b7) cam4_zoom_cont_pane

0xd160,	// (0x0001b4bf) cam4_zoom_pane_g1

0xd168,	// (0x0001b4c7) cam4_zoom_pane_g2

0x674f,	// (0x00014aae) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x0001dd30) cam4_zoom_pane_g

0xd170,	// (0x0001b4cf) cam4_zoom_cont_pane_g1

0xd179,	// (0x0001b4d8) cam4_zoom_cont_pane_g2

0xd182,	// (0x0001b4e1) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x0001dd37) cam4_zoom_cont_pane_g

0x5a4a,	// (0x00013da9) call4_image_pane_ParamLimits

0x5a4a,	// (0x00013da9) call4_image_pane

0xccfe,	// (0x0001b05d) call4_windows_conf_pane_ParamLimits

0xcd19,	// (0x0001b078) popup_call4_audio_in_window_ParamLimits

0xcd19,	// (0x0001b078) popup_call4_audio_in_window

0x92dc,	// (0x0001763b) bg_popup_call2_act_pane_cp02

0xcdb2,	// (0x0001b111) call4_list_conf_pane

0xc1a7,	// (0x0001a506) call4_image_pane_g1

0xc1a7,	// (0x0001a506) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x0001da4b) call4_image_pane_g

0xd18b,	// (0x0001b4ea) list_single_graphic_popup_conf4_pane_ParamLimits

0xd18b,	// (0x0001b4ea) list_single_graphic_popup_conf4_pane

0x92dc,	// (0x0001763b) list_highlight_pane_cp022

0xd1a0,	// (0x0001b4ff) list_single_graphic_popup_conf4_pane_g1

0xa5f9,	// (0x00018958) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x0001dd3e) list_single_graphic_popup_conf4_pane_g

0xd1a8,	// (0x0001b507) list_single_graphic_popup_conf4_pane_t1

0x1709,	// (0x0000fa68) popup_vtel_slider_window_ParamLimits

0x1709,	// (0x0000fa68) popup_vtel_slider_window

0xccac,	// (0x0001b00b) dialer2_ne_pane_t2_ParamLimits

0xccac,	// (0x0001b00b) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0001dc1f) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0001dc1f) dialer2_ne_pane_t

0xbf86,	// (0x0001a2e5) bg_popup_sub_pane_cp010_ParamLimits

0xbf86,	// (0x0001a2e5) bg_popup_sub_pane_cp010

0x6757,	// (0x00014ab6) popup_vtel_slider_window_g1_ParamLimits

0x6757,	// (0x00014ab6) popup_vtel_slider_window_g1

0x676a,	// (0x00014ac9) popup_vtel_slider_window_g2_ParamLimits

0x676a,	// (0x00014ac9) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x0001dd43) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x0001dd43) popup_vtel_slider_window_g

0x67c0,	// (0x00014b1f) vtel_slider_pane_ParamLimits

0x67c0,	// (0x00014b1f) vtel_slider_pane

0x67e2,	// (0x00014b41) vtel_slider_pane_g1_ParamLimits

0x67e2,	// (0x00014b41) vtel_slider_pane_g1

0x67f6,	// (0x00014b55) vtel_slider_pane_g2_ParamLimits

0x67f6,	// (0x00014b55) vtel_slider_pane_g2

0x680e,	// (0x00014b6d) vtel_slider_pane_g3_ParamLimits

0x680e,	// (0x00014b6d) vtel_slider_pane_g3

0x67e2,	// (0x00014b41) vtel_slider_pane_g4_ParamLimits

0x67e2,	// (0x00014b41) vtel_slider_pane_g4

0x6824,	// (0x00014b83) vtel_slider_pane_g5_ParamLimits

0x6824,	// (0x00014b83) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x0001dd4c) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x0001dd4c) vtel_slider_pane_g

0x92dc,	// (0x0001763b) main_gallery2_pane

0x5dd1,	// (0x00014130) aid_size_row_itut2_dropdow_list_ParamLimits

0x5dd1,	// (0x00014130) aid_size_row_itut2_dropdow_list

0x5e61,	// (0x000141c0) grid_vitu2_function_top_pane_ParamLimits

0x5e61,	// (0x000141c0) grid_vitu2_function_top_pane

0x5ec0,	// (0x0001421f) popup_vitu2_dropdown_list_window_ParamLimits

0x5ec0,	// (0x0001421f) popup_vitu2_dropdown_list_window

0x5ee9,	// (0x00014248) popup_vitu2_match_list_window

0x683a,	// (0x00014b99) cell_vitu2_function_top_pane_ParamLimits

0x683a,	// (0x00014b99) cell_vitu2_function_top_pane

0x685a,	// (0x00014bb9) cell_vitu2_function_top_pane_cp01_ParamLimits

0x685a,	// (0x00014bb9) cell_vitu2_function_top_pane_cp01

0x6878,	// (0x00014bd7) cell_vitu2_function_top_wide_pane_ParamLimits

0x6878,	// (0x00014bd7) cell_vitu2_function_top_wide_pane

0x934d,	// (0x000176ac) bg_button_pane_cp012

0x6896,	// (0x00014bf5) cell_vitu2_function_top_pane_g1

0xd1cc,	// (0x0001b52b) bg_button_pane_cp013_ParamLimits

0xd1cc,	// (0x0001b52b) bg_button_pane_cp013

0x68aa,	// (0x00014c09) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x68aa,	// (0x00014c09) cell_vitu2_function_top_wide_pane_g1

0x934d,	// (0x000176ac) bg_popup_sub_pane_cp20

0x68c2,	// (0x00014c21) list_vitu2_match_list_pane

0xcf59,	// (0x0001b2b8) bg_popup_sub_pane_cp20_g1

0xcf61,	// (0x0001b2c0) bg_popup_sub_pane_cp20_g2

0xa041,	// (0x000183a0) bg_popup_sub_pane_cp20_g3

0xcf69,	// (0x0001b2c8) bg_popup_sub_pane_cp20_g4

0xa021,	// (0x00018380) bg_popup_sub_pane_cp20_g5

0xd1e8,	// (0x0001b547) bg_popup_sub_pane_cp20_g6

0xcf79,	// (0x0001b2d8) bg_popup_sub_pane_cp20_g7

0xcf81,	// (0x0001b2e0) bg_popup_sub_pane_cp20_g8

0xcf89,	// (0x0001b2e8) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x0001dd57) bg_popup_sub_pane_cp20_g

0xd1f0,	// (0x0001b54f) list_vitu2_match_list_item_pane_ParamLimits

0xd1f0,	// (0x0001b54f) list_vitu2_match_list_item_pane

0xd202,	// (0x0001b561) list_vitu2_match_list_item_pane_t1

0x92dc,	// (0x0001763b) bg_popup_sub_pane_cp21

0xa4b3,	// (0x00018812) grid_vitu2_dropdown_list_pane

0x6912,	// (0x00014c71) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6912,	// (0x00014c71) cell_vitu2_dropdown_list_char_pane

0x6935,	// (0x00014c94) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6935,	// (0x00014c94) cell_vitu2_dropdown_list_ctrl_pane

0xd228,	// (0x0001b587) cell_vitu2_dropdown_list_char_pane_g1

0xd231,	// (0x0001b590) cell_vitu2_dropdown_list_char_pane_g2

0xd23a,	// (0x0001b599) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x0001dd74) cell_vitu2_dropdown_list_char_pane_g

0x6963,	// (0x00014cc2) cell_vitu2_dropdown_list_char_pane_t1

0x6971,	// (0x00014cd0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6971,	// (0x00014cd0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6981,	// (0x00014ce0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6981,	// (0x00014ce0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6992,	// (0x00014cf1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6992,	// (0x00014cf1) cell_vitu2_dropdown_list_ctrl_pane_g3

0x69a2,	// (0x00014d01) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x69a2,	// (0x00014d01) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc3d7,	// (0x0001a736) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc3d7,	// (0x0001a736) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x0001dd7b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x0001dd7b) cell_vitu2_dropdown_list_ctrl_pane_g

0x69be,	// (0x00014d1d) aid_size_cell_gallery2_ParamLimits

0x69be,	// (0x00014d1d) aid_size_cell_gallery2

0x69d4,	// (0x00014d33) grid_gallery2_pane_ParamLimits

0x69d4,	// (0x00014d33) grid_gallery2_pane

0x69e8,	// (0x00014d47) scroll_pane_cp029_ParamLimits

0x69e8,	// (0x00014d47) scroll_pane_cp029

0x69f4,	// (0x00014d53) cell_gallery2_pane_ParamLimits

0x69f4,	// (0x00014d53) cell_gallery2_pane

0xd243,	// (0x0001b5a2) cell_gallery2_pane_g2

0x6a2e,	// (0x00014d8d) cell_gallery2_pane_g3

0xd24d,	// (0x0001b5ac) cell_gallery2_pane_g4

0xd255,	// (0x0001b5b4) cell_gallery2_pane_g5

0xa7c7,	// (0x00018b26) grid_highlight_pane_cp10

0x5ee9,	// (0x00014248) popup_vitu2_match_list_window_ParamLimits

0x5f00,	// (0x0001425f) popup_vitu2_query_window_ParamLimits

0x5f00,	// (0x0001425f) popup_vitu2_query_window

0x92dc,	// (0x0001763b) bg_vitu2_candi_button_pane

0xd228,	// (0x0001b587) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd231,	// (0x0001b590) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd23a,	// (0x0001b599) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6a36,	// (0x00014d95) bg_button_pane_cp015

0x6a4a,	// (0x00014da9) bg_button_pane_cp016

0x6a5d,	// (0x00014dbc) bg_button_pane_cp017

0xbc72,	// (0x00019fd1) bg_popup_sub_pane_cp22

0xd25d,	// (0x0001b5bc) popup_vitu2_query_window_g1

0x6aa2,	// (0x00014e01) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x0001dd86) popup_vitu2_query_window_g

0x6ac1,	// (0x00014e20) popup_vitu2_query_window_t1_ParamLimits

0x6ac1,	// (0x00014e20) popup_vitu2_query_window_t1

0x6af6,	// (0x00014e55) popup_vitu2_query_window_t2_ParamLimits

0x6af6,	// (0x00014e55) popup_vitu2_query_window_t2

0x6b08,	// (0x00014e67) popup_vitu2_query_window_t3_ParamLimits

0x6b08,	// (0x00014e67) popup_vitu2_query_window_t3

0x6b30,	// (0x00014e8f) popup_vitu2_query_window_t4_ParamLimits

0x6b30,	// (0x00014e8f) popup_vitu2_query_window_t4

0x6b51,	// (0x00014eb0) popup_vitu2_query_window_t5_ParamLimits

0x6b51,	// (0x00014eb0) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x0001dd8d) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x0001dd8d) popup_vitu2_query_window_t

0xd05f,	// (0x0001b3be) main_cset_text_pane

0x644f,	// (0x000147ae) aid_area_touch_slider_ParamLimits

0x646b,	// (0x000147ca) cset_slider_pane_ParamLimits

0x6495,	// (0x000147f4) main_cset_slider_pane_g1_ParamLimits

0x64aa,	// (0x00014809) main_cset_slider_pane_g2_ParamLimits

0xd080,	// (0x0001b3df) main_cset_slider_pane_g3_ParamLimits

0xd080,	// (0x0001b3df) main_cset_slider_pane_g3

0x64bf,	// (0x0001481e) main_cset_slider_pane_g4_ParamLimits

0x64bf,	// (0x0001481e) main_cset_slider_pane_g4

0x64ce,	// (0x0001482d) main_cset_slider_pane_g5_ParamLimits

0x64ce,	// (0x0001482d) main_cset_slider_pane_g5

0x64dc,	// (0x0001483b) main_cset_slider_pane_g6_ParamLimits

0x64dc,	// (0x0001483b) main_cset_slider_pane_g6

0xf981,	// (0x0001dce0) main_cset_slider_pane_g_ParamLimits

0xd0b0,	// (0x0001b40f) main_cset_slider_pane_t1_ParamLimits

0x656c,	// (0x000148cb) main_cset_slider_pane_t2_ParamLimits

0x6586,	// (0x000148e5) main_cset_slider_pane_t3_ParamLimits

0x65a0,	// (0x000148ff) main_cset_slider_pane_t4_ParamLimits

0x65ba,	// (0x00014919) main_cset_slider_pane_t5_ParamLimits

0x65d8,	// (0x00014937) main_cset_slider_pane_t6_ParamLimits

0x65ef,	// (0x0001494e) main_cset_slider_pane_t7_ParamLimits

0x661d,	// (0x0001497c) main_cset_slider_pane_t8_ParamLimits

0x661d,	// (0x0001497c) main_cset_slider_pane_t8

0x6645,	// (0x000149a4) main_cset_slider_pane_t9_ParamLimits

0x6645,	// (0x000149a4) main_cset_slider_pane_t9

0x666d,	// (0x000149cc) main_cset_slider_pane_t10_ParamLimits

0x666d,	// (0x000149cc) main_cset_slider_pane_t10

0x6695,	// (0x000149f4) main_cset_slider_pane_t11_ParamLimits

0x6695,	// (0x000149f4) main_cset_slider_pane_t11

0x66bf,	// (0x00014a1e) main_cset_slider_pane_t12_ParamLimits

0x66bf,	// (0x00014a1e) main_cset_slider_pane_t12

0x66dc,	// (0x00014a3b) main_cset_slider_pane_t13_ParamLimits

0x66dc,	// (0x00014a3b) main_cset_slider_pane_t13

0xf9a6,	// (0x0001dd05) main_cset_slider_pane_t_ParamLimits

0x92dc,	// (0x0001763b) bg_popup_sub_pane_cp011

0xd269,	// (0x0001b5c8) main_cset_text_pane_g1

0xd271,	// (0x0001b5d0) main_cset_text_pane_t1

0xd27f,	// (0x0001b5de) main_cset_text_pane_t2

0xd28d,	// (0x0001b5ec) main_cset_text_pane_t3

0xd29b,	// (0x0001b5fa) main_cset_text_pane_t4

0xd2a9,	// (0x0001b608) main_cset_text_pane_t5

0xd2b7,	// (0x0001b616) main_cset_text_pane_t6

0xd2c5,	// (0x0001b624) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0001dd9c) main_cset_text_pane_t

0x92dc,	// (0x0001763b) main_cam4_burst_pane

0x92dc,	// (0x0001763b) main_cam5_pane

0x6386,	// (0x000146e5) bg_button_pane_cp019

0x638f,	// (0x000146ee) bg_button_pane_cp020

0xd08c,	// (0x0001b3eb) main_cset_slider_pane_g7_ParamLimits

0xd08c,	// (0x0001b3eb) main_cset_slider_pane_g7

0xd098,	// (0x0001b3f7) main_cset_slider_pane_g8_ParamLimits

0xd098,	// (0x0001b3f7) main_cset_slider_pane_g8

0x64f0,	// (0x0001484f) main_cset_slider_pane_g9_ParamLimits

0x64f0,	// (0x0001484f) main_cset_slider_pane_g9

0x64fc,	// (0x0001485b) main_cset_slider_pane_g10_ParamLimits

0x64fc,	// (0x0001485b) main_cset_slider_pane_g10

0x6508,	// (0x00014867) main_cset_slider_pane_g11_ParamLimits

0x6508,	// (0x00014867) main_cset_slider_pane_g11

0x6514,	// (0x00014873) main_cset_slider_pane_g12_ParamLimits

0x6514,	// (0x00014873) main_cset_slider_pane_g12

0x6520,	// (0x0001487f) main_cset_slider_pane_g13_ParamLimits

0x6520,	// (0x0001487f) main_cset_slider_pane_g13

0x652c,	// (0x0001488b) main_cset_slider_pane_g14_ParamLimits

0x652c,	// (0x0001488b) main_cset_slider_pane_g14

0x6538,	// (0x00014897) main_cset_slider_pane_g15_ParamLimits

0x6538,	// (0x00014897) main_cset_slider_pane_g15

0xd0de,	// (0x0001b43d) main_cset_slider_pane_t14_ParamLimits

0xd0de,	// (0x0001b43d) main_cset_slider_pane_t14

0xd117,	// (0x0001b476) main_cset_slider_pane_t15_ParamLimits

0xd117,	// (0x0001b476) main_cset_slider_pane_t15

0x6bc8,	// (0x00014f27) aid_cam4_burst_size_cell_ParamLimits

0x6bc8,	// (0x00014f27) aid_cam4_burst_size_cell

0x6be8,	// (0x00014f47) grid_cam4_burst_pane_ParamLimits

0x6be8,	// (0x00014f47) grid_cam4_burst_pane

0x6c22,	// (0x00014f81) linegrid_cam4_burst_pane_ParamLimits

0x6c22,	// (0x00014f81) linegrid_cam4_burst_pane

0xd2d3,	// (0x0001b632) scroll_pane_cp30_ParamLimits

0xd2d3,	// (0x0001b632) scroll_pane_cp30

0x6c44,	// (0x00014fa3) cell_cam4_burst_pane_ParamLimits

0x6c44,	// (0x00014fa3) cell_cam4_burst_pane

0xd2df,	// (0x0001b63e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd2df,	// (0x0001b63e) linegrid_cam4_burst_pane_g1

0x6c99,	// (0x00014ff8) linegrid_cam4_burst_pane_g2_ParamLimits

0x6c99,	// (0x00014ff8) linegrid_cam4_burst_pane_g2

0xd2ec,	// (0x0001b64b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd2ec,	// (0x0001b64b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x0001ddab) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0001ddab) linegrid_cam4_burst_pane_g

0x6caa,	// (0x00015009) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6caa,	// (0x00015009) linegrid_cam4_burst_pane_g3_copy1

0xd2f9,	// (0x0001b658) linegrid_cam4_burst_pane_g4_ParamLimits

0xd2f9,	// (0x0001b658) linegrid_cam4_burst_pane_g4

0x6cc8,	// (0x00015027) linegrid_cam4_burst_pane_g5_ParamLimits

0x6cc8,	// (0x00015027) linegrid_cam4_burst_pane_g5

0x6cd9,	// (0x00015038) linegrid_cam4_burst_pane_g6_ParamLimits

0x6cd9,	// (0x00015038) linegrid_cam4_burst_pane_g6

0xd306,	// (0x0001b665) linegrid_cam4_burst_pane_g7_ParamLimits

0xd306,	// (0x0001b665) linegrid_cam4_burst_pane_g7

0x6cf0,	// (0x0001504f) cell_cam4_burst_pane_g1

0xd31f,	// (0x0001b67e) main_cam5_pane_t1_ParamLimits

0xd31f,	// (0x0001b67e) main_cam5_pane_t1

0xd331,	// (0x0001b690) main_cam5_pane_t2_ParamLimits

0xd331,	// (0x0001b690) main_cam5_pane_t2

0xd343,	// (0x0001b6a2) main_cam5_pane_t3_ParamLimits

0xd343,	// (0x0001b6a2) main_cam5_pane_t3

0xd355,	// (0x0001b6b4) main_cam5_pane_t4_ParamLimits

0xd355,	// (0x0001b6b4) main_cam5_pane_t4

0xd36d,	// (0x0001b6cc) main_cam5_pane_t5_ParamLimits

0xd36d,	// (0x0001b6cc) main_cam5_pane_t5

0xd381,	// (0x0001b6e0) main_cam5_pane_t6_ParamLimits

0xd381,	// (0x0001b6e0) main_cam5_pane_t6

0xd395,	// (0x0001b6f4) main_cam5_pane_t7_ParamLimits

0xd395,	// (0x0001b6f4) main_cam5_pane_t7

0xd3a7,	// (0x0001b706) main_cam5_pane_t8_ParamLimits

0xd3a7,	// (0x0001b706) main_cam5_pane_t8

0xd3c5,	// (0x0001b724) main_cam5_pane_t9_ParamLimits

0xd3c5,	// (0x0001b724) main_cam5_pane_t9

0xd3d7,	// (0x0001b736) main_cam5_pane_t10_ParamLimits

0xd3d7,	// (0x0001b736) main_cam5_pane_t10

0xd3e9,	// (0x0001b748) main_cam5_pane_t11_ParamLimits

0xd3e9,	// (0x0001b748) main_cam5_pane_t11

0xd3fd,	// (0x0001b75c) main_cam5_pane_t12_ParamLimits

0xd3fd,	// (0x0001b75c) main_cam5_pane_t12

0xd414,	// (0x0001b773) main_cam5_pane_t13_ParamLimits

0xd414,	// (0x0001b773) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x0001ddb7) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x0001ddb7) main_cam5_pane_t

0x08c7,	// (0x0000ec26) popup_scut_keymap_window_ParamLimits

0x08c7,	// (0x0000ec26) popup_scut_keymap_window

0x6d03,	// (0x00015062) aid_size_cell_brow_shortcut

0xa7c7,	// (0x00018b26) bg_popup_window_pane_cp010

0x6d0f,	// (0x0001506e) grid_scut_pane

0x6d1b,	// (0x0001507a) cell_scut_pane_ParamLimits

0x6d1b,	// (0x0001507a) cell_scut_pane

0x6d34,	// (0x00015093) cell_scut_pane_g1

0xd437,	// (0x0001b796) cell_scut_pane_t1

0xd446,	// (0x0001b7a5) cell_scut_pane_t2

0x6d3d,	// (0x0001509c) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x0001ddd2) cell_scut_pane_t

0x48bb,	// (0x00012c1a) main_mup3_pane_g8_ParamLimits

0x48bb,	// (0x00012c1a) main_mup3_pane_g8

0x5deb,	// (0x0001414a) area_vitu2_query_pane_ParamLimits

0x5deb,	// (0x0001414a) area_vitu2_query_pane

0x6a70,	// (0x00014dcf) input_focus_pane_cp08

0xd455,	// (0x0001b7b4) area_vitu2_query_pane_g1

0x6d4b,	// (0x000150aa) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0001ddd9) area_vitu2_query_pane_g

0x6d5c,	// (0x000150bb) area_vitu2_query_pane_t1_ParamLimits

0x6d5c,	// (0x000150bb) area_vitu2_query_pane_t1

0x6d70,	// (0x000150cf) area_vitu2_query_pane_t2_ParamLimits

0x6d70,	// (0x000150cf) area_vitu2_query_pane_t2

0x6d84,	// (0x000150e3) area_vitu2_query_pane_t3_ParamLimits

0x6d84,	// (0x000150e3) area_vitu2_query_pane_t3

0xd461,	// (0x0001b7c0) area_vitu2_query_pane_t4_ParamLimits

0xd461,	// (0x0001b7c0) area_vitu2_query_pane_t4

0xd489,	// (0x0001b7e8) area_vitu2_query_pane_t5_ParamLimits

0xd489,	// (0x0001b7e8) area_vitu2_query_pane_t5

0xd4b1,	// (0x0001b810) area_vitu2_query_pane_t6_ParamLimits

0xd4b1,	// (0x0001b810) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0001ddde) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0001ddde) area_vitu2_query_pane_t

0x6dac,	// (0x0001510b) bg_button_pane_cp018

0x6dba,	// (0x00015119) bg_button_pane_cp021

0x6dc6,	// (0x00015125) bg_button_pane_cp022

0x6dd7,	// (0x00015136) input_focus_pane_cp09

0x272a,	// (0x00010a89) aid_size_touch_mv_arrow_left

0x2753,	// (0x00010ab2) aid_size_touch_mv_arrow_right

0x6550,	// (0x000148af) main_cset_slider_pane_g16_ParamLimits

0x6550,	// (0x000148af) main_cset_slider_pane_g16

0x655e,	// (0x000148bd) main_cset_slider_pane_g17_ParamLimits

0x655e,	// (0x000148bd) main_cset_slider_pane_g17

0x6cf0,	// (0x0001504f) cell_cam4_burst_pane_g1_ParamLimits

0x92dc,	// (0x0001763b) compa_mode_pane

0x677a,	// (0x00014ad9) popup_vtel_slider_window_g3_ParamLimits

0x677a,	// (0x00014ad9) popup_vtel_slider_window_g3

0x6791,	// (0x00014af0) popup_vtel_slider_window_g4_ParamLimits

0x6791,	// (0x00014af0) popup_vtel_slider_window_g4

0x67a8,	// (0x00014b07) popup_vtel_slider_window_t1_ParamLimits

0x67a8,	// (0x00014b07) popup_vtel_slider_window_t1

0x92dc,	// (0x0001763b) main_cl_pane

0xbc9e,	// (0x00019ffd) popup_imed_adjust2_window_ParamLimits

0xbc72,	// (0x00019fd1) bg_tb_trans_pane_cp05_ParamLimits

0xc688,	// (0x0001a9e7) popup_imed_adjust2_window_g1_ParamLimits

0xc697,	// (0x0001a9f6) popup_imed_adjust2_window_g2_ParamLimits

0xc697,	// (0x0001a9f6) popup_imed_adjust2_window_g2

0xc6a3,	// (0x0001aa02) popup_imed_adjust2_window_g3_ParamLimits

0xc6a3,	// (0x0001aa02) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0001db49) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0001db49) popup_imed_adjust2_window_g

0xc6af,	// (0x0001aa0e) popup_imed_adjust2_window_t1_ParamLimits

0xc6c7,	// (0x0001aa26) slider_imed_adjust_pane_ParamLimits

0xc6db,	// (0x0001aa3a) slider_imed_adjust_pane_g1_ParamLimits

0xc6eb,	// (0x0001aa4a) slider_imed_adjust_pane_g2_ParamLimits

0xc6fb,	// (0x0001aa5a) slider_imed_adjust_pane_g3_ParamLimits

0xc70c,	// (0x0001aa6b) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0001db50) slider_imed_adjust_pane_g_ParamLimits

0x5b6d,	// (0x00013ecc) aid_touch_area_cam4_ParamLimits

0x5b6d,	// (0x00013ecc) aid_touch_area_cam4

0xcdfc,	// (0x0001b15b) battery_pane_cp01

0x5c3f,	// (0x00013f9e) main_camera4_pane_g6_ParamLimits

0x5c3f,	// (0x00013f9e) main_camera4_pane_g6

0x5c69,	// (0x00013fc8) main_camera4_pane_t2_ParamLimits

0x5c69,	// (0x00013fc8) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x0001dc53) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x0001dc53) main_camera4_pane_t

0x5c9e,	// (0x00013ffd) aid_touch_area_vid4_ParamLimits

0x5c9e,	// (0x00013ffd) aid_touch_area_vid4

0x5cf2,	// (0x00014051) main_video4_pane_g5_ParamLimits

0x5cf2,	// (0x00014051) main_video4_pane_g5

0x5d17,	// (0x00014076) vid4_progress_pane_ParamLimits

0x5d17,	// (0x00014076) vid4_progress_pane

0xd0a4,	// (0x0001b403) main_cset_slider_pane_g18_ParamLimits

0xd0a4,	// (0x0001b403) main_cset_slider_pane_g18

0xd313,	// (0x0001b672) cell_cam4_burst_pane_g2_ParamLimits

0xd313,	// (0x0001b672) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x0001ddb2) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x0001ddb2) cell_cam4_burst_pane_g

0x9af3,	// (0x00017e52) bg_cl_pane_ParamLimits

0x9af3,	// (0x00017e52) bg_cl_pane

0x6de8,	// (0x00015147) cl_header_pane_ParamLimits

0x6de8,	// (0x00015147) cl_header_pane

0x6dfc,	// (0x0001515b) cl_listscroll_pane_ParamLimits

0x6dfc,	// (0x0001515b) cl_listscroll_pane

0xd4fd,	// (0x0001b85c) bg_cl_pane_g1

0xd505,	// (0x0001b864) bg_cl_pane_g2

0xd50d,	// (0x0001b86c) bg_cl_pane_g3

0xd515,	// (0x0001b874) bg_cl_pane_g4

0xd51d,	// (0x0001b87c) bg_cl_pane_g5

0xd525,	// (0x0001b884) bg_cl_pane_g6

0xd52d,	// (0x0001b88c) bg_cl_pane_g7

0xd535,	// (0x0001b894) bg_cl_pane_g8

0xd53d,	// (0x0001b89c) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x0001dded) bg_cl_pane_g

0x6e0c,	// (0x0001516b) aid_height_cl_leading_ParamLimits

0x6e0c,	// (0x0001516b) aid_height_cl_leading

0x6e18,	// (0x00015177) aid_height_cl_text_ParamLimits

0x6e18,	// (0x00015177) aid_height_cl_text

0x934d,	// (0x000176ac) bg_cl_header_pane_ParamLimits

0x934d,	// (0x000176ac) bg_cl_header_pane

0x6e37,	// (0x00015196) cl_header_pane_g1_ParamLimits

0x6e37,	// (0x00015196) cl_header_pane_g1

0x6e4d,	// (0x000151ac) cl_header_pane_t1_ParamLimits

0x6e4d,	// (0x000151ac) cl_header_pane_t1

0xd545,	// (0x0001b8a4) cl_list_pane

0xd077,	// (0x0001b3d6) hc_scroll_pane_cp01

0xa021,	// (0x00018380) bg_cl_header_pane_g1

0xcf59,	// (0x0001b2b8) bg_cl_header_pane_g2

0xa041,	// (0x000183a0) bg_cl_header_pane_g3

0xcf69,	// (0x0001b2c8) bg_cl_header_pane_g4

0xcf61,	// (0x0001b2c0) bg_cl_header_pane_g5

0xd1e8,	// (0x0001b547) bg_cl_header_pane_g6

0xcf81,	// (0x0001b2e0) bg_cl_header_pane_g7

0xcf89,	// (0x0001b2e8) bg_cl_header_pane_g8

0xcf79,	// (0x0001b2d8) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0001de00) bg_cl_header_pane_g

0x6e66,	// (0x000151c5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6e66,	// (0x000151c5) hc_cl_list_double_graphic_heading_pane

0x6e79,	// (0x000151d8) hc_cl_list_single_graphic_pane_ParamLimits

0x6e79,	// (0x000151d8) hc_cl_list_single_graphic_pane

0x6e91,	// (0x000151f0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6e91,	// (0x000151f0) hc_cl_list_single_graphic_pane_g1

0x6e9d,	// (0x000151fc) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6e9d,	// (0x000151fc) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0001de13) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0001de13) hc_cl_list_single_graphic_pane_g

0x6eb1,	// (0x00015210) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6eb1,	// (0x00015210) hc_cl_list_single_graphic_pane_t1

0x6e91,	// (0x000151f0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6e91,	// (0x000151f0) hc_cl_list_double_graphic_heading_pane_g1

0x6ec6,	// (0x00015225) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ec6,	// (0x00015225) hc_cl_list_double_graphic_heading_pane_g2

0x6eda,	// (0x00015239) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6eda,	// (0x00015239) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x0001de18) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x0001de18) hc_cl_list_double_graphic_heading_pane_g

0x6eee,	// (0x0001524d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6eee,	// (0x0001524d) hc_cl_list_double_graphic_heading_pane_t1

0x6f03,	// (0x00015262) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6f03,	// (0x00015262) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0001de1f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0001de1f) hc_cl_list_double_graphic_heading_pane_t

0x6f18,	// (0x00015277) vid4_progress_pane_g1

0x6f2a,	// (0x00015289) vid4_progress_pane_g2

0xa9e0,	// (0x00018d3f) vid4_progress_pane_g3

0xd556,	// (0x0001b8b5) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0001de24) vid4_progress_pane_g

0xd574,	// (0x0001b8d3) vid4_progress_pane_t1

0xd589,	// (0x0001b8e8) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x0001de2f) vid4_progress_pane_t

0xd5b4,	// (0x0001b913) wait_bar_pane_cp07

0xbf94,	// (0x0001a2f3) blid_firmament_pane_ParamLimits

0xbfd7,	// (0x0001a336) popup_blid_sat_info2_window_g1

0xbffb,	// (0x0001a35a) popup_blid_sat_info2_window_t3

0xc009,	// (0x0001a368) popup_blid_sat_info2_window_t4

0xc017,	// (0x0001a376) popup_blid_sat_info2_window_t5

0xc025,	// (0x0001a384) popup_blid_sat_info2_window_t6

0xc035,	// (0x0001a394) popup_blid_sat_info2_window_t7

0xc043,	// (0x0001a3a2) popup_blid_sat_info2_window_t8

0xc051,	// (0x0001a3b0) popup_blid_sat_info2_window_t9

0xc05f,	// (0x0001a3be) popup_blid_sat_info2_window_t10

0xc127,	// (0x0001a486) aid_firma_cardinal_ParamLimits

0xc13b,	// (0x0001a49a) blid_firmament_pane_t1_ParamLimits

0xc152,	// (0x0001a4b1) blid_firmament_pane_t2_ParamLimits

0xc169,	// (0x0001a4c8) blid_firmament_pane_t3_ParamLimits

0xc180,	// (0x0001a4df) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0001da42) blid_firmament_pane_t_ParamLimits

0xc197,	// (0x0001a4f6) blid_sat_info_pane_ParamLimits

0x934d,	// (0x000176ac) main_cam_set_pane_ParamLimits

0x51b8,	// (0x00013517) aid_size_cell_colour_35_ParamLimits

0x51d8,	// (0x00013537) aid_size_cell_colour_112_ParamLimits

0x51f8,	// (0x00013557) aid_size_cell_effect_ParamLimits

0xbc72,	// (0x00019fd1) bg_tb_trans_pane_cp02_ParamLimits

0xa241,	// (0x000185a0) heading_imed_pane_ParamLimits

0x5218,	// (0x00013577) listscroll_imed_pane_ParamLimits

0xb2a0,	// (0x000195ff) popup_call2_audio_first_window_g5_ParamLimits

0xb2a0,	// (0x000195ff) popup_call2_audio_first_window_g5

0x57d5,	// (0x00013b34) aid_size_touch_image3_arrow_left_ParamLimits

0x57d5,	// (0x00013b34) aid_size_touch_image3_arrow_left

0x5801,	// (0x00013b60) aid_size_touch_image3_arrow_right_ParamLimits

0x5801,	// (0x00013b60) aid_size_touch_image3_arrow_right

0xd59f,	// (0x0001b8fe) vid4_progress_pane_t3

0x5533,	// (0x00013892) main_hwr_training_symbol_option_pane_ParamLimits

0x5533,	// (0x00013892) main_hwr_training_symbol_option_pane

0xc977,	// (0x0001acd6) popup_hwr_training_preview_window_ParamLimits

0xc977,	// (0x0001acd6) popup_hwr_training_preview_window

0x5553,	// (0x000138b2) hwr_training_navi_pane_g5_ParamLimits

0x5553,	// (0x000138b2) hwr_training_navi_pane_g5

0xcf47,	// (0x0001b2a6) popup_char_count_window

0x934d,	// (0x000176ac) bg_popup_sub_pane_cp20_ParamLimits

0x68c2,	// (0x00014c21) list_vitu2_match_list_pane_ParamLimits

0x68d1,	// (0x00014c30) vitu2_page_scroll_pane_ParamLimits

0x68d1,	// (0x00014c30) vitu2_page_scroll_pane

0xd622,	// (0x0001b981) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd622,	// (0x0001b981) list_single_hwr_training_symbol_option_pane

0xd635,	// (0x0001b994) list_single_hwr_training_symbol_option_pane_g1

0xd63d,	// (0x0001b99c) list_single_hwr_training_symbol_option_pane_t1

0xd64b,	// (0x0001b9aa) bg_button_pane_cp023

0xd654,	// (0x0001b9b3) bg_button_pane_cp024

0x6f3c,	// (0x0001529b) vitu2_page_scroll_pane_g1

0x6f44,	// (0x000152a3) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x0001de36) vitu2_page_scroll_pane_g

0x6f4e,	// (0x000152ad) vitu2_page_scroll_pane_t1

0xbeb0,	// (0x0001a20f) popup_char_count_window_g1

0xd687,	// (0x0001b9e6) popup_char_count_window_g2

0xd690,	// (0x0001b9ef) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x0001de3b) popup_char_count_window_g

0xd699,	// (0x0001b9f8) popup_char_count_window_t1

0x92dc,	// (0x0001763b) main_vded2_pane

0xc674,	// (0x0001a9d3) aid_size_cell_imed_line

0xc67e,	// (0x0001a9dd) grid_imed_line_width_pane

0xceb6,	// (0x0001b215) vid4_indicators_pane_g4

0xd6a7,	// (0x0001ba06) cell_imed_line_width_pane_ParamLimits

0xd6a7,	// (0x0001ba06) cell_imed_line_width_pane

0xd6bd,	// (0x0001ba1c) cell_imed_line_width_pane_g1

0xd6c6,	// (0x0001ba25) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x0001de42) cell_imed_line_width_pane_g

0x6f5d,	// (0x000152bc) main_vded2_pane_g1_ParamLimits

0x6f5d,	// (0x000152bc) main_vded2_pane_g1

0x6f78,	// (0x000152d7) main_vded2_pane_g2_ParamLimits

0x6f78,	// (0x000152d7) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x0001de47) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x0001de47) main_vded2_pane_g

0x6f8a,	// (0x000152e9) vded2_slider_pane_ParamLimits

0x6f8a,	// (0x000152e9) vded2_slider_pane

0x6f9a,	// (0x000152f9) aid_size_touch_vded2_end

0x6fa4,	// (0x00015303) aid_size_touch_vded2_playhead

0xd6ce,	// (0x0001ba2d) aid_size_touch_vded2_start

0xd6d6,	// (0x0001ba35) vded2_slider_bg_pane

0xd6df,	// (0x0001ba3e) vded2_slider_pane_g1

0xd6e8,	// (0x0001ba47) vded2_slider_pane_g2

0x6fae,	// (0x0001530d) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x0001de4c) vded2_slider_pane_g

0xcd3b,	// (0x0001b09a) vded2_slider_bg_pane_g1

0xcd44,	// (0x0001b0a3) vded2_slider_bg_pane_g2

0xcd4d,	// (0x0001b0ac) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x0001de53) vded2_slider_bg_pane_g

0x2e20,	// (0x0001117f) aid_postcard_touch_down_pane_ParamLimits

0x2e20,	// (0x0001117f) aid_postcard_touch_down_pane

0x2e38,	// (0x00011197) aid_postcard_touch_up_pane_ParamLimits

0x2e38,	// (0x00011197) aid_postcard_touch_up_pane

0x92dc,	// (0x0001763b) main_blid2_pane

0xbc80,	// (0x00019fdf) popup_blid2_search_window

0x92dc,	// (0x0001763b) blid2_gps_pane

0x92dc,	// (0x0001763b) blid2_navig_pane

0x92dc,	// (0x0001763b) blid2_search_pane

0x92dc,	// (0x0001763b) blid2_tripm_pane

0x6fb9,	// (0x00015318) blid2_search_pane_g1_ParamLimits

0x6fb9,	// (0x00015318) blid2_search_pane_g1

0x6fcc,	// (0x0001532b) blid2_search_pane_t1_ParamLimits

0x6fcc,	// (0x0001532b) blid2_search_pane_t1

0x6fde,	// (0x0001533d) aid_size_cell_blid2_gps_ParamLimits

0x6fde,	// (0x0001533d) aid_size_cell_blid2_gps

0x6ff6,	// (0x00015355) blid2_gps_pane_g1_ParamLimits

0x6ff6,	// (0x00015355) blid2_gps_pane_g1

0x700a,	// (0x00015369) grid_blid2_satellite_pane_ParamLimits

0x700a,	// (0x00015369) grid_blid2_satellite_pane

0x7022,	// (0x00015381) blid2_navig_pane_g1_ParamLimits

0x7022,	// (0x00015381) blid2_navig_pane_g1

0x702e,	// (0x0001538d) blid2_navig_pane_t1_ParamLimits

0x702e,	// (0x0001538d) blid2_navig_pane_t1

0x7049,	// (0x000153a8) blid2_navig_pane_t2_ParamLimits

0x7049,	// (0x000153a8) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x0001de5a) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x0001de5a) blid2_navig_pane_t

0x7064,	// (0x000153c3) blid2_navig_ring_pane_ParamLimits

0x7064,	// (0x000153c3) blid2_navig_ring_pane

0x707f,	// (0x000153de) blid2_speed_pane_ParamLimits

0x707f,	// (0x000153de) blid2_speed_pane

0x708b,	// (0x000153ea) blid2_tripm_pane_g1_ParamLimits

0x708b,	// (0x000153ea) blid2_tripm_pane_g1

0x70a6,	// (0x00015405) blid2_tripm_pane_g2_ParamLimits

0x70a6,	// (0x00015405) blid2_tripm_pane_g2

0x70ba,	// (0x00015419) blid2_tripm_pane_g3_ParamLimits

0x70ba,	// (0x00015419) blid2_tripm_pane_g3

0x70ce,	// (0x0001542d) blid2_tripm_pane_g4_ParamLimits

0x70ce,	// (0x0001542d) blid2_tripm_pane_g4

0x70e2,	// (0x00015441) blid2_tripm_pane_g5_ParamLimits

0x70e2,	// (0x00015441) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x0001de5f) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x0001de5f) blid2_tripm_pane_g

0x7108,	// (0x00015467) blid2_tripm_pane_t1_ParamLimits

0x7108,	// (0x00015467) blid2_tripm_pane_t1

0x7121,	// (0x00015480) blid2_tripm_pane_t2_ParamLimits

0x7121,	// (0x00015480) blid2_tripm_pane_t2

0x713a,	// (0x00015499) blid2_tripm_pane_t3_ParamLimits

0x713a,	// (0x00015499) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x0001de6c) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x0001de6c) blid2_tripm_pane_t

0x7181,	// (0x000154e0) cell_blid2_satellite_pane_ParamLimits

0x7181,	// (0x000154e0) cell_blid2_satellite_pane

0x719d,	// (0x000154fc) cell_blid2_satellite_pane_g1

0xd6f0,	// (0x0001ba4f) cell_blid2_satellite_pane_t1

0xc1a7,	// (0x0001a506) blid2_speed_pane_g1

0xd6fe,	// (0x0001ba5d) blid2_speed_pane_t1

0xd70c,	// (0x0001ba6b) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x0001de75) blid2_speed_pane_t

0xc1a7,	// (0x0001a506) blid2_navig_ring_pane_g1

0x71a6,	// (0x00015505) blid2_navig_ring_pane_g2

0x71ae,	// (0x0001550d) blid2_navig_ring_pane_g3

0x71b6,	// (0x00015515) blid2_navig_ring_pane_g4

0x71be,	// (0x0001551d) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x0001de7a) blid2_navig_ring_pane_g

0x92dc,	// (0x0001763b) bg_popup_window_pane_cp011

0xd71a,	// (0x0001ba79) popup_blid2_search_window_g1

0xd722,	// (0x0001ba81) popup_blid2_search_window_t1

0xd730,	// (0x0001ba8f) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x0001de85) popup_blid2_search_window_t

0x9f30,	// (0x0001828f) main_browser_pane_g1

0x9af3,	// (0x00017e52) main_browser_pane_ParamLimits

0x934d,	// (0x000176ac) bg_button_pane_cp011_ParamLimits

0x611c,	// (0x0001447b) cell_vitu2_function_pane_g1_ParamLimits

0xbc72,	// (0x00019fd1) bg_popup_sub_pane_cp22_ParamLimits

0x6a70,	// (0x00014dcf) input_focus_pane_cp08_ParamLimits

0x6a87,	// (0x00014de6) popup_vitu2_query_button_pane_ParamLimits

0x6a87,	// (0x00014de6) popup_vitu2_query_button_pane

0x6a98,	// (0x00014df7) popup_vitu2_query_input_button_pane

0xd25d,	// (0x0001b5bc) popup_vitu2_query_window_g1_ParamLimits

0x6aa2,	// (0x00014e01) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x0001dd86) popup_vitu2_query_window_g_ParamLimits

0x92dc,	// (0x0001763b) bg_button_pane_cp026

0x71c6,	// (0x00015525) popup_vitu2_query_input_button_pane_g1

0x92dc,	// (0x0001763b) bg_button_pane_cp025

0xd73e,	// (0x0001ba9d) popup_vitu2_query_button_pane_t1

0x4527,	// (0x00012886) main_mp3_pane_t6

0x4535,	// (0x00012894) popup_slider_window_cp01

0xce1a,	// (0x0001b179) cam4_battery_pane

0xce6f,	// (0x0001b1ce) cam4_battery_pane_cp02

0xd54e,	// (0x0001b8ad) cam4_battery_pane_cp01

0xd54e,	// (0x0001b8ad) cam4_battery_pane_cp03

0xc1a7,	// (0x0001a506) cam4_battery_pane_g1

0xd74c,	// (0x0001baab) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x0001de8a) cam4_battery_pane_g

0xc06d,	// (0x0001a3cc) popup_blid_sat_info2_window_t11

0x272a,	// (0x00010a89) aid_size_touch_mv_arrow_left_ParamLimits

0x2753,	// (0x00010ab2) aid_size_touch_mv_arrow_right_ParamLimits

0xa727,	// (0x00018a86) navi_pane_g1_ParamLimits

0x2792,	// (0x00010af1) navi_pane_g2_ParamLimits

0x27c0,	// (0x00010b1f) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0001d754) navi_pane_g_ParamLimits

0x281a,	// (0x00010b79) navi_pane_mv_t1_ParamLimits

0x5224,	// (0x00013583) grid_imed_effect_pane_ParamLimits

0x1611,	// (0x0000f970) aid_placing_vt_slider_lsc

0x9e7b,	// (0x000181da) aid_placing_vt_slider_prt

0x934d,	// (0x000176ac) bg_tb_trans_pane_cp01_ParamLimits

0xc2f7,	// (0x0001a656) popup_image_details_window_g1_ParamLimits

0xc30a,	// (0x0001a669) popup_image_details_window_g2_ParamLimits

0xc31f,	// (0x0001a67e) popup_image_details_window_g3_ParamLimits

0xc31f,	// (0x0001a67e) popup_image_details_window_g3

0xf728,	// (0x0001da87) popup_image_details_window_g_ParamLimits

0xc333,	// (0x0001a692) popup_image_details_window_t1_ParamLimits

0xc345,	// (0x0001a6a4) popup_image_details_window_t2_ParamLimits

0xc35e,	// (0x0001a6bd) popup_image_details_window_t3_ParamLimits

0xc372,	// (0x0001a6d1) popup_image_details_window_t4_ParamLimits

0xc38d,	// (0x0001a6ec) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0001da8e) popup_image_details_window_t_ParamLimits

0x6e24,	// (0x00015183) cl_header_name_pane_ParamLimits

0x6e24,	// (0x00015183) cl_header_name_pane

0x71ce,	// (0x0001552d) cl_header_name_pane_t1_ParamLimits

0x71ce,	// (0x0001552d) cl_header_name_pane_t1

0x71ef,	// (0x0001554e) cl_header_name_pane_t2_ParamLimits

0x71ef,	// (0x0001554e) cl_header_name_pane_t2

0x7231,	// (0x00015590) cl_header_name_pane_t3_ParamLimits

0x7231,	// (0x00015590) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0001de8f) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0001de8f) cl_header_name_pane_t

0x27eb,	// (0x00010b4a) navi_pane_mv_g2_ParamLimits

0xcf04,	// (0x0001b263) field_vitu2_entry_pane_g1_ParamLimits

0xcf10,	// (0x0001b26f) field_vitu2_entry_pane_g2_ParamLimits

0xcf1c,	// (0x0001b27b) field_vitu2_entry_pane_g3_ParamLimits

0xcf1c,	// (0x0001b27b) field_vitu2_entry_pane_g3

0xf926,	// (0x0001dc85) field_vitu2_entry_pane_g_ParamLimits

0x5fbc,	// (0x0001431b) cell_vitu2_itu_pane_g1_ParamLimits

0x5fcc,	// (0x0001432b) cell_vitu2_itu_pane_g2_ParamLimits

0x5fcc,	// (0x0001432b) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0001dc91) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0001dc91) cell_vitu2_itu_pane_g

0x934d,	// (0x000176ac) bg_vkb2_func_pane_cp05_ParamLimits

0x934d,	// (0x000176ac) bg_vkb2_func_pane_cp05

0x934d,	// (0x000176ac) bg_vkb2_func_pane_cp03

0x934d,	// (0x000176ac) bg_vkb2_func_pane_cp04

0x934d,	// (0x000176ac) bg_vkb2_func_pane_cp10_ParamLimits

0x934d,	// (0x000176ac) bg_vkb2_func_pane_cp10

0x6dc6,	// (0x00015125) bg_vkb2_func_pane_cp08

0x6dac,	// (0x0001510b) bg_vkb2_func_pane_cp06

0x6dba,	// (0x00015119) bg_vkb2_func_pane_cp07

0xd65d,	// (0x0001b9bc) bg_vkb2_func_pane_cp11_ParamLimits

0xd65d,	// (0x0001b9bc) bg_vkb2_func_pane_cp11

0xd672,	// (0x0001b9d1) bg_vkb2_func_pane_cp12_ParamLimits

0xd672,	// (0x0001b9d1) bg_vkb2_func_pane_cp12

0x92dc,	// (0x0001763b) bg_vkb2_func_pane_cp09

0xcf59,	// (0x0001b2b8) bg_vkb2_func_pane_g1

0xa041,	// (0x000183a0) bg_vkb2_func_pane_g2

0xcf61,	// (0x0001b2c0) bg_vkb2_func_pane_g3

0xcf69,	// (0x0001b2c8) bg_vkb2_func_pane_g4

0xd1e8,	// (0x0001b547) bg_vkb2_func_pane_g5

0xcf81,	// (0x0001b2e0) bg_vkb2_func_pane_g6

0xcf89,	// (0x0001b2e8) bg_vkb2_func_pane_g7

0xcf79,	// (0x0001b2d8) bg_vkb2_func_pane_g8

0xa021,	// (0x00018380) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x0001de96) bg_vkb2_func_pane_g

0x70f6,	// (0x00015455) blid2_tripm_pane_g6_ParamLimits

0x70f6,	// (0x00015455) blid2_tripm_pane_g6

0xcc66,	// (0x0001afc5) mp4_progress_pane_g1

0x716d,	// (0x000154cc) blid2_tripm_values_pane_ParamLimits

0x716d,	// (0x000154cc) blid2_tripm_values_pane

0x7262,	// (0x000155c1) blid2_tripm_values_pane_t1

0x7270,	// (0x000155cf) blid2_tripm_values_pane_t2

0x727e,	// (0x000155dd) blid2_tripm_values_pane_t3

0x728c,	// (0x000155eb) blid2_tripm_values_pane_t4

0x729a,	// (0x000155f9) blid2_tripm_values_pane_t5

0x72a8,	// (0x00015607) blid2_tripm_values_pane_t6

0x72b6,	// (0x00015615) blid2_tripm_values_pane_t7

0x72c4,	// (0x00015623) blid2_tripm_values_pane_t8

0x72d2,	// (0x00015631) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x0001dea9) blid2_tripm_values_pane_t

0x164e,	// (0x0000f9ad) call_video_pane_t1_ParamLimits

0x1668,	// (0x0000f9c7) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0001d5dd) call_video_pane_t_ParamLimits

0x2d59,	// (0x000110b8) msg_header_pane_g1_ParamLimits

0xa96c,	// (0x00018ccb) msg_header_pane_g2_ParamLimits

0xa96c,	// (0x00018ccb) msg_header_pane_g2

0x0001,

0xf498,	// (0x0001d7f7) msg_header_pane_g_ParamLimits

0xf498,	// (0x0001d7f7) msg_header_pane_g

0x9af3,	// (0x00017e52) main_clock2_pane_ParamLimits

0x4f1a,	// (0x00013279) grid_clock2_toolbar_pane_ParamLimits

0x4f1a,	// (0x00013279) grid_clock2_toolbar_pane

0x4f1a,	// (0x00013279) listscroll_clock2_pane_ParamLimits

0x4f1a,	// (0x00013279) listscroll_clock2_pane

0x5001,	// (0x00013360) main_clock2_pane_t3_ParamLimits

0x5001,	// (0x00013360) main_clock2_pane_t3

0x5024,	// (0x00013383) main_clock2_pane_t4_ParamLimits

0x5024,	// (0x00013383) main_clock2_pane_t4

0xd756,	// (0x0001bab5) cell_clock2_toolbar_pane

0xd75e,	// (0x0001babd) cell_clock2_toolbar_pane_cp01

0xd75e,	// (0x0001babd) cell_clock2_toolbar_pane_cp02

0xd766,	// (0x0001bac5) cell_clock2_toolbar_pane_cp03

0xd76e,	// (0x0001bacd) list_clock2_pane

0xa68d,	// (0x000189ec) scroll_pane_cp10

0xd776,	// (0x0001bad5) list_single_clock2_pane_ParamLimits

0xd776,	// (0x0001bad5) list_single_clock2_pane

0xa7c7,	// (0x00018b26) list_highlight_pane_cp08

0xd783,	// (0x0001bae2) list_single_clock2_pane_t1

0xd791,	// (0x0001baf0) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x0001debc) list_single_clock2_pane_t

0x92dc,	// (0x0001763b) bg_button_pane_cp10

0xd79f,	// (0x0001bafe) cell_clock2_toolbar_pane_g1

0x2dac,	// (0x0001110b) aid_main_viewer_pane_g1_ParamLimits

0x2dac,	// (0x0001110b) aid_main_viewer_pane_g1

0x2dba,	// (0x00011119) aid_main_viewer_pane_g2_ParamLimits

0x2dba,	// (0x00011119) aid_main_viewer_pane_g2

0x2dc8,	// (0x00011127) aid_main_viewer_pane_g3_ParamLimits

0x2dc8,	// (0x00011127) aid_main_viewer_pane_g3

0x2dd7,	// (0x00011136) aid_main_viewer_pane_g4_ParamLimits

0x2dd7,	// (0x00011136) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0001d808) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0001d808) aid_main_viewer_pane_g

0x372f,	// (0x00011a8e) main_calc_pane_ParamLimits

0x3743,	// (0x00011aa2) main_dialer2_pane_ParamLimits

0x92dc,	// (0x0001763b) main_cam6_pane

0x92dc,	// (0x0001763b) main_vid6_pane

0x4f26,	// (0x00013285) listscroll_gen_pane_cp06_ParamLimits

0x4f26,	// (0x00013285) listscroll_gen_pane_cp06

0x5047,	// (0x000133a6) main_clock2_pane_t5_ParamLimits

0x5047,	// (0x000133a6) main_clock2_pane_t5

0x50a9,	// (0x00013408) aid_call2_pane_cp10_ParamLimits

0x50bb,	// (0x0001341a) aid_call_pane_cp10_ParamLimits

0xa6fc,	// (0x00018a5b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa6fc,	// (0x00018a5b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x50cd,	// (0x0001342c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x50cd,	// (0x0001342c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa6fc,	// (0x00018a5b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0001db3e) popup_clock_analogue_window_cp10_g_ParamLimits

0x50e3,	// (0x00013442) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5782,	// (0x00013ae1) cell_dialer2_keypad_pane_g2_ParamLimits

0x5782,	// (0x00013ae1) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0001dc24) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0001dc24) cell_dialer2_keypad_pane_g

0x579e,	// (0x00013afd) cell_dialer2_keypad_pane_t1

0x6441,	// (0x000147a0) main_cset_text2_pane_ParamLimits

0x6441,	// (0x000147a0) main_cset_text2_pane

0xd455,	// (0x0001b7b4) area_vitu2_query_pane_g1_ParamLimits

0x6d4b,	// (0x000150aa) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0001ddd9) area_vitu2_query_pane_g_ParamLimits

0xd4d9,	// (0x0001b838) area_vitu2_query_pane_t7_ParamLimits

0xd4d9,	// (0x0001b838) area_vitu2_query_pane_t7

0x6dac,	// (0x0001510b) bg_button_pane_cp018_ParamLimits

0x6dba,	// (0x00015119) bg_button_pane_cp021_ParamLimits

0x6dc6,	// (0x00015125) bg_button_pane_cp022_ParamLimits

0x6dc6,	// (0x00015125) bg_vkb2_func_pane_cp08_ParamLimits

0x6dac,	// (0x0001510b) bg_vkb2_func_pane_cp06_ParamLimits

0x6dba,	// (0x00015119) bg_vkb2_func_pane_cp07_ParamLimits

0x6dd7,	// (0x00015136) input_focus_pane_cp09_ParamLimits

0xd7a7,	// (0x0001bb06) cam6_autofocus_pane_ParamLimits

0xd7a7,	// (0x0001bb06) cam6_autofocus_pane

0x72e0,	// (0x0001563f) cam6_image_uncrop_pane_ParamLimits

0x72e0,	// (0x0001563f) cam6_image_uncrop_pane

0x72ef,	// (0x0001564e) cam6_indi_pane_ParamLimits

0x72ef,	// (0x0001564e) cam6_indi_pane

0x7305,	// (0x00015664) cam6_mode_pane_ParamLimits

0x7305,	// (0x00015664) cam6_mode_pane

0x7317,	// (0x00015676) cam6_timer_pane_ParamLimits

0x7317,	// (0x00015676) cam6_timer_pane

0x7323,	// (0x00015682) cam6_zoom_pane_ParamLimits

0x7323,	// (0x00015682) cam6_zoom_pane

0x7331,	// (0x00015690) cam6_mode_pane_g1_ParamLimits

0x7331,	// (0x00015690) cam6_mode_pane_g1

0x7341,	// (0x000156a0) cam6_mode_pane_g2_ParamLimits

0x7341,	// (0x000156a0) cam6_mode_pane_g2

0x7351,	// (0x000156b0) cam6_mode_pane_g3_ParamLimits

0x7351,	// (0x000156b0) cam6_mode_pane_g3

0x7361,	// (0x000156c0) cam6_mode_pane_g4_ParamLimits

0x7361,	// (0x000156c0) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x0001dec1) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x0001dec1) cam6_mode_pane_g

0xcd56,	// (0x0001b0b5) bg_tb_trans_pane_cp08_ParamLimits

0xcd56,	// (0x0001b0b5) bg_tb_trans_pane_cp08

0xd7b5,	// (0x0001bb14) cam6_battery_pane_ParamLimits

0xd7b5,	// (0x0001bb14) cam6_battery_pane

0xd7cb,	// (0x0001bb2a) cam6_indi_pane_g1_ParamLimits

0xd7cb,	// (0x0001bb2a) cam6_indi_pane_g1

0xd7dd,	// (0x0001bb3c) cam6_indi_pane_g2_ParamLimits

0xd7dd,	// (0x0001bb3c) cam6_indi_pane_g2

0xd7ef,	// (0x0001bb4e) cam6_indi_pane_g3_ParamLimits

0xd7ef,	// (0x0001bb4e) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x0001deca) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x0001deca) cam6_indi_pane_g

0xd801,	// (0x0001bb60) cam6_indi_pane_t1_ParamLimits

0xd801,	// (0x0001bb60) cam6_indi_pane_t1

0x5d5f,	// (0x000140be) cam6_autofocus_pane_g1

0x5d67,	// (0x000140c6) cam6_autofocus_pane_g2

0x5d6f,	// (0x000140ce) cam6_autofocus_pane_g3

0x5d77,	// (0x000140d6) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x0001ded1) cam6_autofocus_pane_g

0xd827,	// (0x0001bb86) cam6_timer_pane_g1

0xd82f,	// (0x0001bb8e) cam6_timer_pane_t1

0xd83d,	// (0x0001bb9c) cam6_zoom_cont_pane

0xd845,	// (0x0001bba4) cam6_zoom_pane_g1

0xd84d,	// (0x0001bbac) cam6_zoom_pane_g2

0x7371,	// (0x000156d0) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x0001deda) cam6_zoom_pane_g

0xc1a7,	// (0x0001a506) cam6_battery_pane_g1

0xc1a7,	// (0x0001a506) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x0001da4b) cam6_battery_pane_g

0xd855,	// (0x0001bbb4) cam6_zoom_cont_pane_g1

0xd85e,	// (0x0001bbbd) cam6_zoom_cont_pane_g2

0xd867,	// (0x0001bbc6) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x0001dee1) cam6_zoom_cont_pane_g

0x738e,	// (0x000156ed) cam6_mode_pane_cp_ParamLimits

0x738e,	// (0x000156ed) cam6_mode_pane_cp

0x7323,	// (0x00015682) cam6_zoom_pane_cp_ParamLimits

0x7323,	// (0x00015682) cam6_zoom_pane_cp

0x73a0,	// (0x000156ff) vid6_image_uncrop_cif_pane_ParamLimits

0x73a0,	// (0x000156ff) vid6_image_uncrop_cif_pane

0x73b0,	// (0x0001570f) vid6_image_uncrop_nhd_pane_ParamLimits

0x73b0,	// (0x0001570f) vid6_image_uncrop_nhd_pane

0x72e0,	// (0x0001563f) vid6_image_uncrop_vga_pane_ParamLimits

0x72e0,	// (0x0001563f) vid6_image_uncrop_vga_pane

0x73bf,	// (0x0001571e) vid6_image_uncrop_wvga_pane_ParamLimits

0x73bf,	// (0x0001571e) vid6_image_uncrop_wvga_pane

0x73ce,	// (0x0001572d) vid6_indi_pane_ParamLimits

0x73ce,	// (0x0001572d) vid6_indi_pane

0xcd56,	// (0x0001b0b5) bg_tb_trans_pane_cp09_ParamLimits

0xcd56,	// (0x0001b0b5) bg_tb_trans_pane_cp09

0xd87f,	// (0x0001bbde) cam6_battery_pane_cp_ParamLimits

0xd87f,	// (0x0001bbde) cam6_battery_pane_cp

0xd88b,	// (0x0001bbea) vid6_indi_pane_g1_ParamLimits

0xd88b,	// (0x0001bbea) vid6_indi_pane_g1

0xd89d,	// (0x0001bbfc) vid6_indi_pane_g2_ParamLimits

0xd89d,	// (0x0001bbfc) vid6_indi_pane_g2

0xd8af,	// (0x0001bc0e) vid6_indi_pane_g3_ParamLimits

0xd8af,	// (0x0001bc0e) vid6_indi_pane_g3

0xd8c6,	// (0x0001bc25) vid6_indi_pane_g4_ParamLimits

0xd8c6,	// (0x0001bc25) vid6_indi_pane_g4

0xd8dd,	// (0x0001bc3c) vid6_indi_pane_g5_ParamLimits

0xd8dd,	// (0x0001bc3c) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x0001dee8) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x0001dee8) vid6_indi_pane_g

0xd8f7,	// (0x0001bc56) vid6_indi_pane_t1_ParamLimits

0xd8f7,	// (0x0001bc56) vid6_indi_pane_t1

0xd90d,	// (0x0001bc6c) vid6_indi_pane_t2_ParamLimits

0xd90d,	// (0x0001bc6c) vid6_indi_pane_t2

0xd935,	// (0x0001bc94) vid6_indi_pane_t3_ParamLimits

0xd935,	// (0x0001bc94) vid6_indi_pane_t3

0xd95d,	// (0x0001bcbc) vid6_indi_pane_t4_ParamLimits

0xd95d,	// (0x0001bcbc) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x0001def3) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x0001def3) vid6_indi_pane_t

0xd981,	// (0x0001bce0) wait_bar_pane_cp08

0x73e6,	// (0x00015745) main_cset_text2_pane_t1_ParamLimits

0x73e6,	// (0x00015745) main_cset_text2_pane_t1

0x7379,	// (0x000156d8) listscroll_gen_pane_cp06_t1_ParamLimits

0x7379,	// (0x000156d8) listscroll_gen_pane_cp06_t1

0x92dc,	// (0x0001763b) main_cam6_set_pane

0xc3d7,	// (0x0001a736) bg_tb_trans_pane_cp06_ParamLimits

0xce22,	// (0x0001b181) cam4_indicators_pane_g1_ParamLimits

0xce33,	// (0x0001b192) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0001dc61) cam4_indicators_pane_g_ParamLimits

0xce4b,	// (0x0001b1aa) cam4_indicators_pane_t1_ParamLimits

0x934d,	// (0x000176ac) bg_tb_trans_pane_cp07_ParamLimits

0xce79,	// (0x0001b1d8) vid4_indicators_pane_g1_ParamLimits

0xce8f,	// (0x0001b1ee) vid4_indicators_pane_g2_ParamLimits

0xcea3,	// (0x0001b202) vid4_indicators_pane_g3_ParamLimits

0xceb6,	// (0x0001b215) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x0001dc73) vid4_indicators_pane_g_ParamLimits

0xced4,	// (0x0001b233) vid4_indicators_pane_t1_ParamLimits

0x6f18,	// (0x00015277) vid4_progress_pane_g1_ParamLimits

0x6f2a,	// (0x00015289) vid4_progress_pane_g2_ParamLimits

0xa9e0,	// (0x00018d3f) vid4_progress_pane_g3_ParamLimits

0xd556,	// (0x0001b8b5) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0001de24) vid4_progress_pane_g_ParamLimits

0xd574,	// (0x0001b8d3) vid4_progress_pane_t1_ParamLimits

0xd589,	// (0x0001b8e8) vid4_progress_pane_t2_ParamLimits

0xd59f,	// (0x0001b8fe) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x0001de2f) vid4_progress_pane_t_ParamLimits

0xd5b4,	// (0x0001b913) wait_bar_pane_cp07_ParamLimits

0x7407,	// (0x00015766) main_cam6_set_pane_g2_ParamLimits

0x7407,	// (0x00015766) main_cam6_set_pane_g2

0x742d,	// (0x0001578c) main_cset6_listscroll_pane_ParamLimits

0x742d,	// (0x0001578c) main_cset6_listscroll_pane

0x744b,	// (0x000157aa) main_cset6_slider_pane_ParamLimits

0x744b,	// (0x000157aa) main_cset6_slider_pane

0x7461,	// (0x000157c0) main_cset6_text2_pane_ParamLimits

0x7461,	// (0x000157c0) main_cset6_text2_pane

0xd990,	// (0x0001bcef) main_cset6_text_pane

0xd998,	// (0x0001bcf7) main_cset_list_pane_copy1_ParamLimits

0xd998,	// (0x0001bcf7) main_cset_list_pane_copy1

0xd9a8,	// (0x0001bd07) scroll_pane_cp028_copy1

0x746f,	// (0x000157ce) cset_list_set_pane_copy1

0x7483,	// (0x000157e2) aid_position_infowindow_above_copy1

0x748b,	// (0x000157ea) aid_position_infowindow_below_copy1

0x7493,	// (0x000157f2) cset_list_set_pane_g1_copy1

0x749b,	// (0x000157fa) cset_list_set_pane_g3_copy1_ParamLimits

0x749b,	// (0x000157fa) cset_list_set_pane_g3_copy1

0x74aa,	// (0x00015809) cset_list_set_pane_t1_copy1_ParamLimits

0x74aa,	// (0x00015809) cset_list_set_pane_t1_copy1

0x934d,	// (0x000176ac) list_highlight_pane_cp021_copy1_ParamLimits

0x934d,	// (0x000176ac) list_highlight_pane_cp021_copy1

0xd9b1,	// (0x0001bd10) cset6_slider_pane_ParamLimits

0xd9b1,	// (0x0001bd10) cset6_slider_pane

0xd9dd,	// (0x0001bd3c) main_cset6_slider_pane_g1_ParamLimits

0xd9dd,	// (0x0001bd3c) main_cset6_slider_pane_g1

0x74bf,	// (0x0001581e) main_cset6_slider_pane_g2_ParamLimits

0x74bf,	// (0x0001581e) main_cset6_slider_pane_g2

0xda05,	// (0x0001bd64) main_cset6_slider_pane_g3_ParamLimits

0xda05,	// (0x0001bd64) main_cset6_slider_pane_g3

0x74e7,	// (0x00015846) main_cset6_slider_pane_g4_ParamLimits

0x74e7,	// (0x00015846) main_cset6_slider_pane_g4

0x74f3,	// (0x00015852) main_cset6_slider_pane_g5_ParamLimits

0x74f3,	// (0x00015852) main_cset6_slider_pane_g5

0xd08c,	// (0x0001b3eb) main_cset6_slider_pane_g7_ParamLimits

0xd08c,	// (0x0001b3eb) main_cset6_slider_pane_g7

0xd098,	// (0x0001b3f7) main_cset6_slider_pane_g8_ParamLimits

0xd098,	// (0x0001b3f7) main_cset6_slider_pane_g8

0x64f0,	// (0x0001484f) main_cset6_slider_pane_g9_ParamLimits

0x64f0,	// (0x0001484f) main_cset6_slider_pane_g9

0x64fc,	// (0x0001485b) main_cset6_slider_pane_g10_ParamLimits

0x64fc,	// (0x0001485b) main_cset6_slider_pane_g10

0x6508,	// (0x00014867) main_cset6_slider_pane_g11_ParamLimits

0x6508,	// (0x00014867) main_cset6_slider_pane_g11

0x6514,	// (0x00014873) main_cset6_slider_pane_g12_ParamLimits

0x6514,	// (0x00014873) main_cset6_slider_pane_g12

0x6520,	// (0x0001487f) main_cset6_slider_pane_g13_ParamLimits

0x6520,	// (0x0001487f) main_cset6_slider_pane_g13

0x652c,	// (0x0001488b) main_cset6_slider_pane_g14_ParamLimits

0x652c,	// (0x0001488b) main_cset6_slider_pane_g14

0x7501,	// (0x00015860) main_cset6_slider_pane_g15_ParamLimits

0x7501,	// (0x00015860) main_cset6_slider_pane_g15

0x6550,	// (0x000148af) main_cset6_slider_pane_g16_ParamLimits

0x6550,	// (0x000148af) main_cset6_slider_pane_g16

0x655e,	// (0x000148bd) main_cset6_slider_pane_g17_ParamLimits

0x655e,	// (0x000148bd) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x0001defc) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x0001defc) main_cset6_slider_pane_g

0xda11,	// (0x0001bd70) main_cset6_slider_pane_t1_ParamLimits

0xda11,	// (0x0001bd70) main_cset6_slider_pane_t1

0x7531,	// (0x00015890) main_cset6_slider_pane_t2_ParamLimits

0x7531,	// (0x00015890) main_cset6_slider_pane_t2

0x755c,	// (0x000158bb) main_cset6_slider_pane_t3_ParamLimits

0x755c,	// (0x000158bb) main_cset6_slider_pane_t3

0x7587,	// (0x000158e6) main_cset6_slider_pane_t4_ParamLimits

0x7587,	// (0x000158e6) main_cset6_slider_pane_t4

0x75b4,	// (0x00015913) main_cset6_slider_pane_t5_ParamLimits

0x75b4,	// (0x00015913) main_cset6_slider_pane_t5

0xda52,	// (0x0001bdb1) main_cset6_slider_pane_t7_ParamLimits

0xda52,	// (0x0001bdb1) main_cset6_slider_pane_t7

0x75e1,	// (0x00015940) main_cset6_slider_pane_t8_ParamLimits

0x75e1,	// (0x00015940) main_cset6_slider_pane_t8

0x7605,	// (0x00015964) main_cset6_slider_pane_t9_ParamLimits

0x7605,	// (0x00015964) main_cset6_slider_pane_t9

0x7629,	// (0x00015988) main_cset6_slider_pane_t10_ParamLimits

0x7629,	// (0x00015988) main_cset6_slider_pane_t10

0x764d,	// (0x000159ac) main_cset6_slider_pane_t11_ParamLimits

0x764d,	// (0x000159ac) main_cset6_slider_pane_t11

0xda88,	// (0x0001bde7) main_cset6_slider_pane_t14_ParamLimits

0xda88,	// (0x0001bde7) main_cset6_slider_pane_t14

0xdac1,	// (0x0001be20) main_cset6_slider_pane_t15_ParamLimits

0xdac1,	// (0x0001be20) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x0001df21) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x0001df21) main_cset6_slider_pane_t

0xd170,	// (0x0001b4cf) cset_slider_pane_g1_copy1

0xd179,	// (0x0001b4d8) cset_slider_pane_g2_copy1

0xd182,	// (0x0001b4e1) cset_slider_pane_g3_copy1

0x92dc,	// (0x0001763b) bg_popup_sub_pane_cp011_copy1

0xdbcb,	// (0x0001bf2a) main_cset_text_pane_g1_copy1

0xd271,	// (0x0001b5d0) main_cset_text_pane_t1_copy1

0xd27f,	// (0x0001b5de) main_cset_text_pane_t2_copy1

0xd28d,	// (0x0001b5ec) main_cset_text_pane_t3_copy1

0xd29b,	// (0x0001b5fa) main_cset_text_pane_t4_copy1

0xd2a9,	// (0x0001b608) main_cset_text_pane_t5_copy1

0xdbd3,	// (0x0001bf32) main_cset_text_pane_t6_copy1

0xdbe1,	// (0x0001bf40) main_cset_text_pane_t7_copy1

0x73e6,	// (0x00015745) main_cset_text2_pane_t1_copy1

0x934d,	// (0x000176ac) main_ncimui_pane

0x39d1,	// (0x00011d30) popup_query_ncimui_window_ParamLimits

0x39d1,	// (0x00011d30) popup_query_ncimui_window

0xc43c,	// (0x0001a79b) field_cale_ev2_pane_g4_ParamLimits

0xc43c,	// (0x0001a79b) field_cale_ev2_pane_g4

0x564d,	// (0x000139ac) cell_video_dialer_keypad_pane_g2_ParamLimits

0x564d,	// (0x000139ac) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0001dbff) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0001dbff) cell_video_dialer_keypad_pane_g

0x5665,	// (0x000139c4) cell_video_dialer_keypad_pane_t1

0x92dc,	// (0x0001763b) bg_popup_window_pane_cp012

0xa579,	// (0x000188d8) heading_pane_cp06

0xdc0d,	// (0x0001bf6c) ncim_query_content_pane

0x92dc,	// (0x0001763b) bg_popup_heading_pane_cp01

0xdc15,	// (0x0001bf74) ncim_heading_pane_t1

0xdc23,	// (0x0001bf82) ncim_indicator_popup_pane

0xdc35,	// (0x0001bf94) ncim_query_button_pane

0xdc4b,	// (0x0001bfaa) ncim_query_content_pane_t1

0xdc5d,	// (0x0001bfbc) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x0001df65) ncim_query_content_pane_t

0xdc97,	// (0x0001bff6) ncim_query_list_pane

0xdca9,	// (0x0001c008) ncim_query_popup_pane

0xdc23,	// (0x0001bf82) ncim_indicator_popup_pane_ParamLimits

0x7799,	// (0x00015af8) ncim_query_content_pane_g1_ParamLimits

0x7799,	// (0x00015af8) ncim_query_content_pane_g1

0xdc4b,	// (0x0001bfaa) ncim_query_content_pane_t1_ParamLimits

0xdc5d,	// (0x0001bfbc) ncim_query_content_pane_t2_ParamLimits

0x77a5,	// (0x00015b04) ncim_query_content_pane_t3_ParamLimits

0x77a5,	// (0x00015b04) ncim_query_content_pane_t3

0x77cd,	// (0x00015b2c) ncim_query_content_pane_t4_ParamLimits

0x77cd,	// (0x00015b2c) ncim_query_content_pane_t4

0x77f5,	// (0x00015b54) ncim_query_content_pane_t5_ParamLimits

0x77f5,	// (0x00015b54) ncim_query_content_pane_t5

0xdc6f,	// (0x0001bfce) ncim_query_content_pane_t6_ParamLimits

0xdc6f,	// (0x0001bfce) ncim_query_content_pane_t6

0xfc06,	// (0x0001df65) ncim_query_content_pane_t_ParamLimits

0xdc97,	// (0x0001bff6) ncim_query_list_pane_ParamLimits

0xdca9,	// (0x0001c008) ncim_query_popup_pane_ParamLimits

0xdcbd,	// (0x0001c01c) wait_bar_pane_cp04

0x92dc,	// (0x0001763b) input_focus_pane_cp011

0xdcc5,	// (0x0001c024) ncim_query_popup_pane_t1

0xdcd3,	// (0x0001c032) ncim_list_query_list_pane_ParamLimits

0xdcd3,	// (0x0001c032) ncim_list_query_list_pane

0x92dc,	// (0x0001763b) bg_button_pane_cp027

0xdce6,	// (0x0001c045) ncim_query_button_pane_g1

0x92dc,	// (0x0001763b) list_highlight_pane_cp012

0xdcf0,	// (0x0001c04f) ncim_list_query_list_pane_g1

0xdcf8,	// (0x0001c057) ncim_list_query_list_pane_t1

0xce3f,	// (0x0001b19e) cam4_indicators_pane_g3_ParamLimits

0xce3f,	// (0x0001b19e) cam4_indicators_pane_g3

0xcec2,	// (0x0001b221) vid4_indicators_pane_g5_ParamLimits

0xcec2,	// (0x0001b221) vid4_indicators_pane_g5

0xd565,	// (0x0001b8c4) vid4_progress_pane_g5_ParamLimits

0xd565,	// (0x0001b8c4) vid4_progress_pane_g5

0x7687,	// (0x000159e6) main_ncimui_pane_g1

0x76ed,	// (0x00015a4c) ncimui_group_query_pane_ParamLimits

0x76ed,	// (0x00015a4c) ncimui_group_query_pane

0x7735,	// (0x00015a94) ncimui_list_pane_ParamLimits

0x7735,	// (0x00015a94) ncimui_list_pane

0x775c,	// (0x00015abb) ncimui_text_pane_ParamLimits

0x775c,	// (0x00015abb) ncimui_text_pane

0x781d,	// (0x00015b7c) ncimui_text_pane_t1_ParamLimits

0x781d,	// (0x00015b7c) ncimui_text_pane_t1

0xdd06,	// (0x0001c065) ncimui_list_single_graphic_pane_ParamLimits

0xdd06,	// (0x0001c065) ncimui_list_single_graphic_pane

0x783b,	// (0x00015b9a) ncimui_query_pane_ParamLimits

0x783b,	// (0x00015b9a) ncimui_query_pane

0x92dc,	// (0x0001763b) list_highlight_pane_cp013

0xdd16,	// (0x0001c075) ncim_list_query_list_pane_t1_copy1

0xdcf0,	// (0x0001c04f) ncim_list_single_graphic_pane_g1

0xdd24,	// (0x0001c083) ncim_query_button_pane_cp01

0xdd30,	// (0x0001c08f) ncim_query_entry_pane_ParamLimits

0xdd30,	// (0x0001c08f) ncim_query_entry_pane

0xdd43,	// (0x0001c0a2) ncimui_query_pane_g1

0xdd4f,	// (0x0001c0ae) ncimui_query_pane_t1_ParamLimits

0xdd4f,	// (0x0001c0ae) ncimui_query_pane_t1

0x934d,	// (0x000176ac) input_focus_pane_cp012

0xdd68,	// (0x0001c0c7) ncim_query_entry_pane_t1

0x9af3,	// (0x00017e52) main_im_pane_ParamLimits

0x934d,	// (0x000176ac) main_mobtv_pane_ParamLimits

0x934d,	// (0x000176ac) main_mobtv_pane

0x7519,	// (0x00015878) main_cset6_slider_pane_g18_ParamLimits

0x7519,	// (0x00015878) main_cset6_slider_pane_g18

0x7525,	// (0x00015884) main_cset6_slider_pane_g19_ParamLimits

0x7525,	// (0x00015884) main_cset6_slider_pane_g19

0xcd64,	// (0x0001b0c3) bg_main_mobtv_pane_ParamLimits

0xcd64,	// (0x0001b0c3) bg_main_mobtv_pane

0x784e,	// (0x00015bad) main_mobtv_info_pane

0x7859,	// (0x00015bb8) main_mobtv_loading_pane_ParamLimits

0x7859,	// (0x00015bb8) main_mobtv_loading_pane

0xdd7a,	// (0x0001c0d9) main_mobtv_pg_channel_list_pane

0xdd84,	// (0x0001c0e3) main_mobtv_pg_hdr_pane

0x7866,	// (0x00015bc5) main_mobtv_programe_curr_pane_ParamLimits

0x7866,	// (0x00015bc5) main_mobtv_programe_curr_pane

0x7873,	// (0x00015bd2) main_mobtv_programe_next_pane_ParamLimits

0x7873,	// (0x00015bd2) main_mobtv_programe_next_pane

0xdd8d,	// (0x0001c0ec) popup_mobtv_noti_window

0xc1a7,	// (0x0001a506) main_tv_pg_hdr_pane_g1

0xdd97,	// (0x0001c0f6) main_tv_pg_hdr_pane_g2

0xdd9f,	// (0x0001c0fe) main_tv_pg_hdr_pane_g3

0xdda7,	// (0x0001c106) main_tv_pg_hdr_pane_g4

0xddaf,	// (0x0001c10e) main_tv_pg_hdr_pane_g5

0xddb9,	// (0x0001c118) main_tv_pg_hdr_pane_g6

0xddc3,	// (0x0001c122) main_tv_pg_hdr_pane_g7

0xddcd,	// (0x0001c12c) main_tv_pg_hdr_pane_g8

0xddd7,	// (0x0001c136) main_tv_pg_hdr_pane_g9

0xdde1,	// (0x0001c140) main_tv_pg_hdr_pane_g10

0xddeb,	// (0x0001c14a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x0001df72) main_tv_pg_hdr_pane_g

0xddf5,	// (0x0001c154) main_tv_pg_hdr_pane_t1

0xde03,	// (0x0001c162) main_tv_pg_hdr_pane_t2

0xde11,	// (0x0001c170) main_tv_pg_hdr_pane_t3

0xde21,	// (0x0001c180) main_tv_pg_hdr_pane_t4

0xde31,	// (0x0001c190) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x0001df89) main_tv_pg_hdr_pane_t

0xde41,	// (0x0001c1a0) single_mobtv_pg_channel_pane_ParamLimits

0xde41,	// (0x0001c1a0) single_mobtv_pg_channel_pane

0xde53,	// (0x0001c1b2) single_mobtv_pg_channel_table_pane

0xde5c,	// (0x0001c1bb) single_mobtv_pg_channel_thumb_pane

0xde65,	// (0x0001c1c4) single_tv_pg_channel_pane_g1

0xde6e,	// (0x0001c1cd) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x0001df94) single_tv_pg_channel_pane_g

0xc3d7,	// (0x0001a736) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc3d7,	// (0x0001a736) bg_single_mobtv_pg_channel_thumb_pane

0xde77,	// (0x0001c1d6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xde77,	// (0x0001c1d6) single_mobtv_pg_channel_thumb_pane_g1

0xde85,	// (0x0001c1e4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xde85,	// (0x0001c1e4) single_mobtv_pg_channel_thumb_pane_g2

0xde91,	// (0x0001c1f0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xde91,	// (0x0001c1f0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x0001df99) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x0001df99) single_mobtv_pg_channel_thumb_pane_g

0xde9d,	// (0x0001c1fc) single_mobtv_pg_channel_thumb_pane_t1

0xdeab,	// (0x0001c20a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x0001dfa0) single_mobtv_pg_channel_thumb_pane_t

0xc1a7,	// (0x0001a506) bg_single_mobtv_pg_channel_table_pane_g1

0xc1a7,	// (0x0001a506) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x0001da4b) bg_single_mobtv_pg_channel_table_pane_g

0xdeb9,	// (0x0001c218) single_mobtv_pg_channel_table_pane_t1

0xdec7,	// (0x0001c226) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x0001dfa5) single_mobtv_pg_channel_table_pane_t

0x7888,	// (0x00015be7) main_mobtv_info_pane_g1_ParamLimits

0x7888,	// (0x00015be7) main_mobtv_info_pane_g1

0x78a6,	// (0x00015c05) main_mobtv_info_pane_t1_ParamLimits

0x78a6,	// (0x00015c05) main_mobtv_info_pane_t1

0x791e,	// (0x00015c7d) main_mobtv_info_pane_t2_ParamLimits

0x791e,	// (0x00015c7d) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x0001dfaf) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x0001dfaf) main_mobtv_info_pane_t

0x79af,	// (0x00015d0e) wait_bar_pane_cp05

0x79c1,	// (0x00015d20) main_mobtv_loading_pane_g1_ParamLimits

0x79c1,	// (0x00015d20) main_mobtv_loading_pane_g1

0x79d2,	// (0x00015d31) main_mobtv_loading_pane_g2_ParamLimits

0x79d2,	// (0x00015d31) main_mobtv_loading_pane_g2

0x79de,	// (0x00015d3d) main_mobtv_loading_pane_g3_ParamLimits

0x79de,	// (0x00015d3d) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x0001dfb6) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x0001dfb6) main_mobtv_loading_pane_g

0xded5,	// (0x0001c234) main_mobtv_loading_pane_t1_ParamLimits

0xded5,	// (0x0001c234) main_mobtv_loading_pane_t1

0xdeed,	// (0x0001c24c) main_mobtv_loading_pane_t2_ParamLimits

0xdeed,	// (0x0001c24c) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x0001dfbd) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x0001dfbd) main_mobtv_loading_pane_t

0x79f1,	// (0x00015d50) wait_bar_pane_cp06_ParamLimits

0x79f1,	// (0x00015d50) wait_bar_pane_cp06

0xdf11,	// (0x0001c270) main_mobtv_programe_curr_pane_t1

0xdf1f,	// (0x0001c27e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x0001dfc2) main_mobtv_programe_curr_pane_t

0xdf2d,	// (0x0001c28c) main_mobtv_programe_next_pane_t1

0xdf3b,	// (0x0001c29a) main_mobtv_programe_next_pane_t2

0xdf49,	// (0x0001c2a8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x0001dfc7) main_mobtv_programe_next_pane_t

0x92dc,	// (0x0001763b) bg_popup_mobtv_noti_window_pane

0xdf57,	// (0x0001c2b6) popup_mobtv_noti_window_g1

0xdf5f,	// (0x0001c2be) popup_mobtv_noti_window_t1

0xdf6d,	// (0x0001c2cc) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x0001dfce) popup_mobtv_noti_window_t

0xc1a7,	// (0x0001a506) bg_popup_mobtv_noti_window_pane_g1

0x92dc,	// (0x0001763b) sc_clock_pane

0x92dc,	// (0x0001763b) main_fs_bigclock_pane

0x7157,	// (0x000154b6) blid2_tripm_pane_t4_ParamLimits

0x7157,	// (0x000154b6) blid2_tripm_pane_t4

0x7a00,	// (0x00015d5f) sc_clock_pane_g1_ParamLimits

0x7a00,	// (0x00015d5f) sc_clock_pane_g1

0x7a12,	// (0x00015d71) sc_clock_pane_t1_ParamLimits

0x7a12,	// (0x00015d71) sc_clock_pane_t1

0x7a36,	// (0x00015d95) sc_clock_pane_t2_ParamLimits

0x7a36,	// (0x00015d95) sc_clock_pane_t2

0x7a4e,	// (0x00015dad) sc_clock_pane_t3_ParamLimits

0x7a4e,	// (0x00015dad) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x0001dfd3) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x0001dfd3) sc_clock_pane_t

0x8890,	// (0x00016bef) main_fs_bigclock_indicator_pane_ParamLimits

0x8890,	// (0x00016bef) main_fs_bigclock_indicator_pane

0xc3a7,	// (0x0001a706) main_fs_bigclock_pane_g1_ParamLimits

0xc3a7,	// (0x0001a706) main_fs_bigclock_pane_g1

0x889c,	// (0x00016bfb) main_fs_bigclock_pane_t1_ParamLimits

0x889c,	// (0x00016bfb) main_fs_bigclock_pane_t1

0x88ae,	// (0x00016c0d) main_fs_bigclock_pane_t2_ParamLimits

0x88ae,	// (0x00016c0d) main_fs_bigclock_pane_t2

0x88c2,	// (0x00016c21) main_fs_bigclock_pane_t3_ParamLimits

0x88c2,	// (0x00016c21) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0001e1d2) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0001e1d2) main_fs_bigclock_pane_t

0xebf8,	// (0x0001cf57) main_fs_bigclock_indicator_pane_g1

0xdc3d,	// (0x0001bf9c) ncim_query_content_pane_g2_ParamLimits

0xdc3d,	// (0x0001bf9c) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x0001df60) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x0001df60) ncim_query_content_pane_g

0x7a65,	// (0x00015dc4) sc_clock_pane_t4_ParamLimits

0x7a65,	// (0x00015dc4) sc_clock_pane_t4

0x934d,	// (0x000176ac) main_radioblah_pane

0xcd80,	// (0x0001b0df) cell_call4_button_pane_t1_copy1_ParamLimits

0xcd80,	// (0x0001b0df) cell_call4_button_pane_t1_copy1

0x769f,	// (0x000159fe) main_ncimui_pane_t1_ParamLimits

0x769f,	// (0x000159fe) main_ncimui_pane_t1

0x76b9,	// (0x00015a18) main_ncimui_pane_t2_ParamLimits

0x76b9,	// (0x00015a18) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x0001df59) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x0001df59) main_ncimui_pane_t

0xe0b9,	// (0x0001c418) main_radioblah_anim_pane_ParamLimits

0xe0b9,	// (0x0001c418) main_radioblah_anim_pane

0xe0ca,	// (0x0001c429) main_radioblah_info_pane_ParamLimits

0xe0ca,	// (0x0001c429) main_radioblah_info_pane

0xe0de,	// (0x0001c43d) main_radioblah_pane_t1_ParamLimits

0xe0de,	// (0x0001c43d) main_radioblah_pane_t1

0xe0fa,	// (0x0001c459) main_radioblah_pane_t2_ParamLimits

0xe0fa,	// (0x0001c459) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x0001dff4) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x0001dff4) main_radioblah_pane_t

0x7b15,	// (0x00015e74) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7b15,	// (0x00015e74) main_radioblah_rocker_ctrl_pane

0xe142,	// (0x0001c4a1) main_radioblah_info_pane_t1_ParamLimits

0xe142,	// (0x0001c4a1) main_radioblah_info_pane_t1

0x7b6d,	// (0x00015ecc) main_radioblah_info_pane_t2_ParamLimits

0x7b6d,	// (0x00015ecc) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x0001dffd) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x0001dffd) main_radioblah_info_pane_t

0xc1a7,	// (0x0001a506) main_radioblah_rocker_ctrl_pane_g1

0x7c1d,	// (0x00015f7c) main_radioblah_rocker_ctrl_pane_g2

0x7c25,	// (0x00015f84) main_radioblah_rocker_ctrl_pane_g3

0x7c2d,	// (0x00015f8c) main_radioblah_rocker_ctrl_pane_g4

0x7c35,	// (0x00015f94) main_radioblah_rocker_ctrl_pane_g5

0x7c3d,	// (0x00015f9c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x0001e006) main_radioblah_rocker_ctrl_pane_g

0x73e6,	// (0x00015745) main_cset_text2_pane_t1_copy1_ParamLimits

0xce10,	// (0x0001b16f) cam4_image_uncrop_qvga_pane

0xce65,	// (0x0001b1c4) vid4_image_uncrop_qcif_pane

0xd7a7,	// (0x0001bb06) cam6_image_uncrop_qvga_pane_ParamLimits

0xd7a7,	// (0x0001bb06) cam6_image_uncrop_qvga_pane

0xd86f,	// (0x0001bbce) vid6_image_uncrop_qcif_pane_ParamLimits

0xd86f,	// (0x0001bbce) vid6_image_uncrop_qcif_pane

0x92dc,	// (0x0001763b) bg_popup_preview_window_pane_cp03

0xdbef,	// (0x0001bf4e) list_cset_text2_pane

0xdbf7,	// (0x0001bf56) main_cset6_text2_pane_g1

0xdbff,	// (0x0001bf5e) main_cset6_text2_pane_t1

0xef88,	// (0x0001d2e7) list_cset_text2_pane_t1_ParamLimits

0xef88,	// (0x0001d2e7) list_cset_text2_pane_t1

0x934d,	// (0x000176ac) main_radioblah_pane_ParamLimits

0x799b,	// (0x00015cfa) main_mobtv_info_pane_t3_ParamLimits

0x799b,	// (0x00015cfa) main_mobtv_info_pane_t3

0x7b03,	// (0x00015e62) main_radioblah_pane_g1

0x7b3d,	// (0x00015e9c) main_radioblah_info_pane_g1

0x7bc2,	// (0x00015f21) main_radioblah_info_pane_t3_ParamLimits

0x7bc2,	// (0x00015f21) main_radioblah_info_pane_t3

0x2205,	// (0x00010564) highlight_cell_cale_month_pane_ParamLimits

0x2205,	// (0x00010564) highlight_cell_cale_month_pane

0x92dc,	// (0x0001763b) main_phob_fisheye_pane

0xc4cb,	// (0x0001a82a) scroll_pane_cp0031_ParamLimits

0xc4cb,	// (0x0001a82a) scroll_pane_cp0031

0xd981,	// (0x0001bce0) wait_bar_pane_cp08_ParamLimits

0x746f,	// (0x000157ce) cset_list_set_pane_copy1_ParamLimits

0xe17c,	// (0x0001c4db) highlight_cell_cale_month_pane_g1

0x7c45,	// (0x00015fa4) highlight_cell_cale_month_pane_t1

0xd545,	// (0x0001b8a4) list_gen_pane_cp01

0xd077,	// (0x0001b3d6) scroll_pane_01

0x7c53,	// (0x00015fb2) list_single_double_fisheye_pane

0x7c5c,	// (0x00015fbb) list_double_fisheye_pane_g1_ParamLimits

0x7c5c,	// (0x00015fbb) list_double_fisheye_pane_g1

0x7c68,	// (0x00015fc7) list_double_fisheye_pane_g2_ParamLimits

0x7c68,	// (0x00015fc7) list_double_fisheye_pane_g2

0x7c7c,	// (0x00015fdb) list_double_fisheye_pane_g3_ParamLimits

0x7c7c,	// (0x00015fdb) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x0001e013) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x0001e013) list_double_fisheye_pane_g

0x7ca5,	// (0x00016004) list_double_fisheye_pane_t1_ParamLimits

0x7ca5,	// (0x00016004) list_double_fisheye_pane_t1

0x7cc0,	// (0x0001601f) list_double_fisheye_pane_t2_ParamLimits

0x7cc0,	// (0x0001601f) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x0001e01e) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x0001e01e) list_double_fisheye_pane_t

0x92dc,	// (0x0001763b) main_call5_pane

0x7a90,	// (0x00015def) sc_swipe_pane_ParamLimits

0x7a90,	// (0x00015def) sc_swipe_pane

0x7cf5,	// (0x00016054) call5_image_pane_ParamLimits

0x7cf5,	// (0x00016054) call5_image_pane

0x7d12,	// (0x00016071) call5_swipe_1_pane_ParamLimits

0x7d12,	// (0x00016071) call5_swipe_1_pane

0x7d25,	// (0x00016084) call5_swipe_2_pane_ParamLimits

0x7d25,	// (0x00016084) call5_swipe_2_pane

0x7d52,	// (0x000160b1) popup_call5_audio_first_window_ParamLimits

0x7d52,	// (0x000160b1) popup_call5_audio_first_window

0xc3d7,	// (0x0001a736) call5_swipe_1_pane_g1_ParamLimits

0xc3d7,	// (0x0001a736) call5_swipe_1_pane_g1

0xe184,	// (0x0001c4e3) call5_swipe_1_pane_g2_ParamLimits

0xe184,	// (0x0001c4e3) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x0001e023) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x0001e023) call5_swipe_1_pane_g

0xe190,	// (0x0001c4ef) call5_swipe_1_pane_t1_ParamLimits

0xe190,	// (0x0001c4ef) call5_swipe_1_pane_t1

0xc3d7,	// (0x0001a736) call5_swipe_2_pane_g1_ParamLimits

0xc3d7,	// (0x0001a736) call5_swipe_2_pane_g1

0xe1a5,	// (0x0001c504) call5_swipe_2_pane_g2_ParamLimits

0xe1a5,	// (0x0001c504) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x0001e028) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x0001e028) call5_swipe_2_pane_g

0xe1b1,	// (0x0001c510) call5_swipe_2_pane_t1_ParamLimits

0xe1b1,	// (0x0001c510) call5_swipe_2_pane_t1

0xe1c6,	// (0x0001c525) sc_swipe_pane_g1_ParamLimits

0xe1c6,	// (0x0001c525) sc_swipe_pane_g1

0xe1d3,	// (0x0001c532) sc_swipe_pane_g2_ParamLimits

0xe1d3,	// (0x0001c532) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x0001e02d) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x0001e02d) sc_swipe_pane_g

0xe1df,	// (0x0001c53e) sc_swipe_pane_t1_ParamLimits

0xe1df,	// (0x0001c53e) sc_swipe_pane_t1

0x92dc,	// (0x0001763b) main_cmail_launcher_pane

0x7d67,	// (0x000160c6) aid_size_cell_cmail_l_ParamLimits

0x7d67,	// (0x000160c6) aid_size_cell_cmail_l

0x7d81,	// (0x000160e0) grid_cmail_l_pane_ParamLimits

0x7d81,	// (0x000160e0) grid_cmail_l_pane

0x7d9c,	// (0x000160fb) cell_cmail_l_pane_ParamLimits

0x7d9c,	// (0x000160fb) cell_cmail_l_pane

0x7dc4,	// (0x00016123) cell_cmail_l_pane_g1_ParamLimits

0x7dc4,	// (0x00016123) cell_cmail_l_pane_g1

0x7dd0,	// (0x0001612f) cell_cmail_l_pane_t1_ParamLimits

0x7dd0,	// (0x0001612f) cell_cmail_l_pane_t1

0xe1f4,	// (0x0001c553) cell_cmail_l_pane_t2_ParamLimits

0xe1f4,	// (0x0001c553) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x0001e032) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x0001e032) cell_cmail_l_pane_t

0x934d,	// (0x000176ac) grid_highlight_pane_cp018_ParamLimits

0x934d,	// (0x000176ac) grid_highlight_pane_cp018

0x07c0,	// (0x0000eb1f) main2_pane_ParamLimits

0x07c0,	// (0x0000eb1f) main2_pane

0x9bcc,	// (0x00017f2b) popup_sp_fs_action_menu_bg_pane_g1

0x9bd4,	// (0x00017f33) popup_sp_fs_action_menu_bg_pane_g2

0x9bdc,	// (0x00017f3b) popup_sp_fs_action_menu_bg_pane_g3

0x9be4,	// (0x00017f43) popup_sp_fs_action_menu_bg_pane_g4

0x9bec,	// (0x00017f4b) popup_sp_fs_action_menu_bg_pane_g5

0x9bf4,	// (0x00017f53) popup_sp_fs_action_menu_bg_pane_g6

0x9bfc,	// (0x00017f5b) popup_sp_fs_action_menu_bg_pane_g7

0x9c04,	// (0x00017f63) popup_sp_fs_action_menu_bg_pane_g8

0x9c0c,	// (0x00017f6b) popup_sp_fs_action_menu_bg_pane_g9

0x9c14,	// (0x00017f73) popup_sp_fs_action_menu_bg_pane_g10

0x9c14,	// (0x00017f73) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0001d4f7) popup_sp_fs_action_menu_bg_pane_g

0x9d88,	// (0x000180e7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x2_t3_g3_g1

0x9d94,	// (0x000180f3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9d94,	// (0x000180f3) list_medium_line_x2_t3_g3_g2

0x9da0,	// (0x000180ff) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9da0,	// (0x000180ff) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0001d5a7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0001d5a7) list_medium_line_x2_t3_g3_g

0x9dac,	// (0x0001810b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9dac,	// (0x0001810b) list_medium_line_x2_t3_g3_t1

0x1552,	// (0x0000f8b1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1552,	// (0x0000f8b1) list_medium_line_x2_t3_g3_t2

0x9dc1,	// (0x00018120) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9dc1,	// (0x00018120) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0001d5ae) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0001d5ae) list_medium_line_x2_t3_g3_t

0x9d88,	// (0x000180e7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x2_t3_g2_g1

0x9da0,	// (0x000180ff) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9da0,	// (0x000180ff) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x0001d5b5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x0001d5b5) list_medium_line_x2_t3_g2_g

0x9dd6,	// (0x00018135) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9dd6,	// (0x00018135) list_medium_line_x2_t3_g2_t1

0x9dec,	// (0x0001814b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9dec,	// (0x0001814b) list_medium_line_x2_t3_g2_t2

0x9dfe,	// (0x0001815d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9dfe,	// (0x0001815d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0001d5ba) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0001d5ba) list_medium_line_x2_t3_g2_t

0x9d88,	// (0x000180e7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x2_t4_g4_g1

0x9e1c,	// (0x0001817b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9e1c,	// (0x0001817b) list_medium_line_x2_t4_g4_g2

0x9d94,	// (0x000180f3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9d94,	// (0x000180f3) list_medium_line_x2_t4_g4_g3

0x9e28,	// (0x00018187) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9e28,	// (0x00018187) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0001d5c1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0001d5c1) list_medium_line_x2_t4_g4_g

0x1566,	// (0x0000f8c5) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1566,	// (0x0000f8c5) list_medium_line_x2_t4_g4_t1

0x157d,	// (0x0000f8dc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x157d,	// (0x0000f8dc) list_medium_line_x2_t4_g4_t2

0x1592,	// (0x0000f8f1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1592,	// (0x0000f8f1) list_medium_line_x2_t4_g4_t3

0x9e34,	// (0x00018193) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9e34,	// (0x00018193) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0001d5ca) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0001d5ca) list_medium_line_x2_t4_g4_t

0x9d88,	// (0x000180e7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x2_t2_g4_g1

0x9e1c,	// (0x0001817b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9e1c,	// (0x0001817b) list_medium_line_x2_t2_g4_g2

0x9d94,	// (0x000180f3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9d94,	// (0x000180f3) list_medium_line_x2_t2_g4_g3

0x9da0,	// (0x000180ff) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9da0,	// (0x000180ff) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0001d631) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0001d631) list_medium_line_x2_t2_g4_g

0xa122,	// (0x00018481) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa122,	// (0x00018481) list_medium_line_x2_t2_g4_t1

0x9dc1,	// (0x00018120) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9dc1,	// (0x00018120) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0001d63a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0001d63a) list_medium_line_x2_t2_g4_t

0x9d88,	// (0x000180e7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x2_t2_g3_g1

0x9d94,	// (0x000180f3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9d94,	// (0x000180f3) list_medium_line_x2_t2_g3_g2

0x9da0,	// (0x000180ff) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9da0,	// (0x000180ff) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0001d5a7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0001d5a7) list_medium_line_x2_t2_g3_g

0xa137,	// (0x00018496) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa137,	// (0x00018496) list_medium_line_x2_t2_g3_t1

0x9dc1,	// (0x00018120) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9dc1,	// (0x00018120) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0001d63f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0001d63f) list_medium_line_x2_t2_g3_t

0x23de,	// (0x0001073d) main_sp_fs_list_pane_ParamLimits

0x23de,	// (0x0001073d) main_sp_fs_list_pane

0x23ea,	// (0x00010749) sp_fs_scroll_pane_ParamLimits

0x23ea,	// (0x00010749) sp_fs_scroll_pane

0x23f6,	// (0x00010755) list_medium_line_x2_t3_t1

0x2406,	// (0x00010765) list_medium_line_x2_t3_t2

0xa31c,	// (0x0001867b) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0001d68a) list_medium_line_x2_t3_t

0x2414,	// (0x00010773) list_medium_line_x3_t4_t1

0x2424,	// (0x00010783) list_medium_line_x3_t4_t2

0xa32a,	// (0x00018689) list_medium_line_x3_t4_t3

0xa31c,	// (0x0001867b) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0001d691) list_medium_line_x3_t4_t

0x2432,	// (0x00010791) list_medium_line_x4_t5_t1

0x2442,	// (0x000107a1) list_medium_line_x4_t5_t2

0xa32a,	// (0x00018689) list_medium_line_x4_t5_t3

0xa338,	// (0x00018697) list_medium_line_x4_t5_t4

0xa31c,	// (0x0001867b) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0001d69a) list_medium_line_x4_t5_t

0x9d88,	// (0x000180e7) list_medium_line_t4_g4_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_t4_g4_g1

0x9e28,	// (0x00018187) list_medium_line_t4_g4_g2_ParamLimits

0x9e28,	// (0x00018187) list_medium_line_t4_g4_g2

0xa346,	// (0x000186a5) list_medium_line_t4_g4_g3_ParamLimits

0xa346,	// (0x000186a5) list_medium_line_t4_g4_g3

0x9da0,	// (0x000180ff) list_medium_line_t4_g4_g4_ParamLimits

0x9da0,	// (0x000180ff) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x0001d6a5) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x0001d6a5) list_medium_line_t4_g4_g

0xa352,	// (0x000186b1) list_medium_line_t4_g4_t1_ParamLimits

0xa352,	// (0x000186b1) list_medium_line_t4_g4_t1

0xa367,	// (0x000186c6) list_medium_line_t4_g4_t2_ParamLimits

0xa367,	// (0x000186c6) list_medium_line_t4_g4_t2

0xa37d,	// (0x000186dc) list_medium_line_t4_g4_t3_ParamLimits

0xa37d,	// (0x000186dc) list_medium_line_t4_g4_t3

0x9dc1,	// (0x00018120) list_medium_line_t4_g4_t4_ParamLimits

0x9dc1,	// (0x00018120) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0001d6ae) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0001d6ae) list_medium_line_t4_g4_t

0x2516,	// (0x00010875) chi_dic_find_pane_g1

0x3757,	// (0x00011ab6) main_tport_pane

0xd1be,	// (0x0001b51d) list_medium_line_plain_t1

0xd210,	// (0x0001b56f) list_medium_line_t2_g2_g1_ParamLimits

0xd210,	// (0x0001b56f) list_medium_line_t2_g2_g1

0xd21c,	// (0x0001b57b) list_medium_line_t2_g2_g2_ParamLimits

0xd21c,	// (0x0001b57b) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x0001dd6a) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x0001dd6a) list_medium_line_t2_g2_g

0x68e0,	// (0x00014c3f) list_medium_line_t2_g2_t1_ParamLimits

0x68e0,	// (0x00014c3f) list_medium_line_t2_g2_t1

0x68f7,	// (0x00014c56) list_medium_line_t2_g2_t2_ParamLimits

0x68f7,	// (0x00014c56) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x0001dd6f) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x0001dd6f) list_medium_line_t2_g2_t

0xd5c8,	// (0x0001b927) aid_sp_fs_list_icon_a_sm

0xd5d0,	// (0x0001b92f) aid_sp_fs_list_icon_d

0xd5d8,	// (0x0001b937) aid_sp_fs_text_primary

0xd5e1,	// (0x0001b940) aid_sp_fs_text_secondary

0xd5ea,	// (0x0001b949) list_medium_line

0xd5ea,	// (0x0001b949) list_medium_line_g2

0xd5ea,	// (0x0001b949) list_medium_line_g3

0xd5ea,	// (0x0001b949) list_medium_line_plain

0xd5ea,	// (0x0001b949) list_medium_line_plain_t2

0xd5ea,	// (0x0001b949) list_medium_line_plain_t3

0xd5ea,	// (0x0001b949) list_medium_line_right_icon

0xd5ea,	// (0x0001b949) list_medium_line_right_iconx2

0xd5ea,	// (0x0001b949) list_medium_line_t2

0xd5ea,	// (0x0001b949) list_medium_line_t2_g2

0xd5ea,	// (0x0001b949) list_medium_line_t2_g3

0xd5ea,	// (0x0001b949) list_medium_line_t2_right_icon

0xd5ea,	// (0x0001b949) list_medium_line_t2_right_iconx2

0xd5ea,	// (0x0001b949) list_medium_line_t3

0xd5ea,	// (0x0001b949) list_medium_line_t3_g2

0xd5ea,	// (0x0001b949) list_medium_line_t3_g3

0xd5ea,	// (0x0001b949) list_medium_line_t3_right_iconx2

0xd5f3,	// (0x0001b952) list_medium_line_t4_g4

0xd5fc,	// (0x0001b95b) list_medium_line_x2

0xd5fc,	// (0x0001b95b) list_medium_line_x2_t2_g2

0xd5fc,	// (0x0001b95b) list_medium_line_x2_t2_g3

0xd5fc,	// (0x0001b95b) list_medium_line_x2_t2_g4

0xd5fc,	// (0x0001b95b) list_medium_line_x2_t3

0xd5fc,	// (0x0001b95b) list_medium_line_x2_t3_g2

0xd5fc,	// (0x0001b95b) list_medium_line_x2_t3_g3

0xd5fc,	// (0x0001b95b) list_medium_line_x2_t3_g4

0xd5fc,	// (0x0001b95b) list_medium_line_x2_t4_g2

0xd5fc,	// (0x0001b95b) list_medium_line_x2_t4_g4

0xd605,	// (0x0001b964) list_medium_line_x3

0xd605,	// (0x0001b964) list_medium_line_x3_t4

0xd605,	// (0x0001b964) list_medium_line_x3_t4_g4

0xd5f3,	// (0x0001b952) list_medium_line_x4_t4

0xd5f3,	// (0x0001b952) list_medium_line_x4_t4_g7

0xd5f3,	// (0x0001b952) list_medium_line_x4_t5

0xd60e,	// (0x0001b96d) list_single_fs_dyc_pane_ParamLimits

0xd60e,	// (0x0001b96d) list_single_fs_dyc_pane

0x9d88,	// (0x000180e7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x4_t4_g7_g1

0xdafa,	// (0x0001be59) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdafa,	// (0x0001be59) list_medium_line_x4_t4_g7_g2

0xdb06,	// (0x0001be65) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdb06,	// (0x0001be65) list_medium_line_x4_t4_g7_g3

0xdb15,	// (0x0001be74) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdb15,	// (0x0001be74) list_medium_line_x4_t4_g7_g4

0xdb21,	// (0x0001be80) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdb21,	// (0x0001be80) list_medium_line_x4_t4_g7_g5

0xdb30,	// (0x0001be8f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdb30,	// (0x0001be8f) list_medium_line_x4_t4_g7_g6

0xdb3f,	// (0x0001be9e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdb3f,	// (0x0001be9e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x0001df3a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x0001df3a) list_medium_line_x4_t4_g7_g

0xdb4b,	// (0x0001beaa) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdb4b,	// (0x0001beaa) list_medium_line_x4_t4_g7_t1

0xdb60,	// (0x0001bebf) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdb60,	// (0x0001bebf) list_medium_line_x4_t4_g7_t2

0xdb75,	// (0x0001bed4) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdb75,	// (0x0001bed4) list_medium_line_x4_t4_g7_t3

0xdb8a,	// (0x0001bee9) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdb8a,	// (0x0001bee9) list_medium_line_x4_t4_g7_t4

0xdb9c,	// (0x0001befb) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdb9c,	// (0x0001befb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x0001df49) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x0001df49) list_medium_line_x4_t4_g7_t

0xdbae,	// (0x0001bf0d) list_single_dyc_row_pane_ParamLimits

0xdbae,	// (0x0001bf0d) list_single_dyc_row_pane

0x7ce2,	// (0x00016041) call5_gesture_pane_ParamLimits

0x7ce2,	// (0x00016041) call5_gesture_pane

0x7d38,	// (0x00016097) call5_windows_pane_ParamLimits

0x7d38,	// (0x00016097) call5_windows_pane

0x7de6,	// (0x00016145) call5_swipe_1_pane_cp_ParamLimits

0x7de6,	// (0x00016145) call5_swipe_1_pane_cp

0x7df2,	// (0x00016151) call5_swipe_2_pane_cp_ParamLimits

0x7df2,	// (0x00016151) call5_swipe_2_pane_cp

0xa7c7,	// (0x00018b26) call5_image_pane_cp

0x7dfe,	// (0x0001615d) popup_call5_audio_first_window_cp_ParamLimits

0x7dfe,	// (0x0001615d) popup_call5_audio_first_window_cp

0xe1c6,	// (0x0001c525) call5_swipe_1_pane_g1_cp_ParamLimits

0xe1c6,	// (0x0001c525) call5_swipe_1_pane_g1_cp

0xe206,	// (0x0001c565) call5_swipe_1_pane_g2_cp

0xe1df,	// (0x0001c53e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe1df,	// (0x0001c53e) call5_swipe_1_pane_t1_cp

0xe1c6,	// (0x0001c525) call5_swipe_2_pane_g1_cp_ParamLimits

0xe1c6,	// (0x0001c525) call5_swipe_2_pane_g1_cp

0xe20e,	// (0x0001c56d) call5_swipe_2_pane_g2_cp

0xe216,	// (0x0001c575) call5_swipe_2_pane_t1_cp_ParamLimits

0xe216,	// (0x0001c575) call5_swipe_2_pane_t1_cp

0x934d,	// (0x000176ac) main_sp_fs_email_pane

0xe22b,	// (0x0001c58a) main_sp_fs_listscroll_pane_te

0xe234,	// (0x0001c593) popup_sp_fs_action_menu_pane_ParamLimits

0xe234,	// (0x0001c593) popup_sp_fs_action_menu_pane

0xc1a7,	// (0x0001a506) bg_sp_fs_ctrlbar_pane_g1

0xe27a,	// (0x0001c5d9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe283,	// (0x0001c5e2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe28c,	// (0x0001c5eb) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc1a7,	// (0x0001a506) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x0001e037) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbf86,	// (0x0001a2e5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbf86,	// (0x0001a2e5) bg_sp_fs_ctrlbar_ddmenu_pane

0xe295,	// (0x0001c5f4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe295,	// (0x0001c5f4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2a1,	// (0x0001c600) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2a1,	// (0x0001c600) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x0001e040) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x0001e040) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2ad,	// (0x0001c60c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2ad,	// (0x0001c60c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe2c7,	// (0x0001c626) list_medium_line_t2_right_icon_g1

0x7e0c,	// (0x0001616b) list_medium_line_t2_right_icon_t1

0x7e1c,	// (0x0001617b) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x0001e045) list_medium_line_t2_right_icon_t

0xbc72,	// (0x00019fd1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbc72,	// (0x00019fd1) bg_sp_fs_ctrlbar_pane

0x7e7b,	// (0x000161da) main_sp_fs_ctrlbar_button_pane_cp01

0x7e85,	// (0x000161e4) main_sp_fs_ctrlbar_ddmenu_pane

0xe309,	// (0x0001c668) main_sp_fs_ctrlbar_pane_g1

0xe315,	// (0x0001c674) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x0001e04a) main_sp_fs_ctrlbar_pane_g

0xe321,	// (0x0001c680) main_sp_fs_ctrlbar_pane_t1

0x7e8f,	// (0x000161ee) main_sp_fs_ctrlbar_pane

0x7eb3,	// (0x00016212) main_sp_fs_listscroll_pane_te_cp01

0x7ed3,	// (0x00016232) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7ed3,	// (0x00016232) popup_sp_fs_action_menu_pane_cp01

0x934d,	// (0x000176ac) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x934d,	// (0x000176ac) bg_sp_fs_highlight_list_pane_cp01

0xe346,	// (0x0001c6a5) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe346,	// (0x0001c6a5) sp_fs_action_menu_list_gene_pane_g1

0xe355,	// (0x0001c6b4) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe355,	// (0x0001c6b4) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x0001e054) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x0001e054) sp_fs_action_menu_list_gene_pane_g

0xe362,	// (0x0001c6c1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe362,	// (0x0001c6c1) sp_fs_action_menu_list_gene_pane_t1

0xe37a,	// (0x0001c6d9) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe37a,	// (0x0001c6d9) sp_fs_action_menu_list_gene_pane

0xe39d,	// (0x0001c6fc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe39d,	// (0x0001c6fc) popup_sp_fs_action_menu_bg_pane

0xe3ab,	// (0x0001c70a) sp_fs_action_menu_list_pane_ParamLimits

0xe3ab,	// (0x0001c70a) sp_fs_action_menu_list_pane

0xe3cf,	// (0x0001c72e) sp_fs_scroll_pane_cp01_ParamLimits

0xe3cf,	// (0x0001c72e) sp_fs_scroll_pane_cp01

0x7f09,	// (0x00016268) list_medium_line_plain_t2_t1

0x7f19,	// (0x00016278) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x0001e059) list_medium_line_plain_t2_t

0x7f29,	// (0x00016288) list_medium_line_plain_t3_t1

0x7f39,	// (0x00016298) list_medium_line_plain_t3_t2

0x7f47,	// (0x000162a6) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x0001e05e) list_medium_line_plain_t3_t

0x9d88,	// (0x000180e7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x2_t2_g2_g1

0x9da0,	// (0x000180ff) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9da0,	// (0x000180ff) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x0001d5b5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x0001d5b5) list_medium_line_x2_t2_g2_g

0xa352,	// (0x000186b1) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa352,	// (0x000186b1) list_medium_line_x2_t2_g2_t1

0x9dc1,	// (0x00018120) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9dc1,	// (0x00018120) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x0001e065) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x0001e065) list_medium_line_x2_t2_g2_t

0x9d88,	// (0x000180e7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x2_t4_g2_g1

0x9da0,	// (0x000180ff) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9da0,	// (0x000180ff) list_medium_line_x2_t4_g2_g2

0x0001,

0xf256,	// (0x0001d5b5) list_medium_line_x2_t4_g2_g_ParamLimits

0xf256,	// (0x0001d5b5) list_medium_line_x2_t4_g2_g

0x7f55,	// (0x000162b4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f55,	// (0x000162b4) list_medium_line_x2_t4_g2_t1

0x7f6f,	// (0x000162ce) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f6f,	// (0x000162ce) list_medium_line_x2_t4_g2_t2

0x7f85,	// (0x000162e4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f85,	// (0x000162e4) list_medium_line_x2_t4_g2_t3

0x9dc1,	// (0x00018120) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9dc1,	// (0x00018120) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0001e06a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0001e06a) list_medium_line_x2_t4_g2_t

0xe3f5,	// (0x0001c754) list_medium_line_t3_right_iconx2_g1

0xe2c7,	// (0x0001c626) list_medium_line_t3_right_iconx2_g2

0x7f9a,	// (0x000162f9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0001e073) list_medium_line_t3_right_iconx2_g

0x7fa4,	// (0x00016303) list_medium_line_t3_right_iconx2_t1

0x7fb4,	// (0x00016313) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0001e07a) list_medium_line_t3_right_iconx2_t

0x9d88,	// (0x000180e7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x3_t4_g4_g1

0x9d94,	// (0x000180f3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9d94,	// (0x000180f3) list_medium_line_x3_t4_g4_g2

0x9e28,	// (0x00018187) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9e28,	// (0x00018187) list_medium_line_x3_t4_g4_g3

0xe3fd,	// (0x0001c75c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe3fd,	// (0x0001c75c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x0001e07f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x0001e07f) list_medium_line_x3_t4_g4_g

0x7fc2,	// (0x00016321) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7fc2,	// (0x00016321) list_medium_line_x3_t4_g4_t1

0x7fd9,	// (0x00016338) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fd9,	// (0x00016338) list_medium_line_x3_t4_g4_t2

0xe409,	// (0x0001c768) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe409,	// (0x0001c768) list_medium_line_x3_t4_g4_t3

0xe41e,	// (0x0001c77d) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe41e,	// (0x0001c77d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0001e088) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0001e088) list_medium_line_x3_t4_g4_t

0x7ff4,	// (0x00016353) list_single_dyc_row_text_pane_t1_ParamLimits

0x7ff4,	// (0x00016353) list_single_dyc_row_text_pane_t1

0x803d,	// (0x0001639c) list_single_dyc_row_text_pane_t2_ParamLimits

0x803d,	// (0x0001639c) list_single_dyc_row_text_pane_t2

0xe43b,	// (0x0001c79a) list_single_dyc_row_text_pane_t3_ParamLimits

0xe43b,	// (0x0001c79a) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0001e091) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0001e091) list_single_dyc_row_text_pane_t

0xe44d,	// (0x0001c7ac) list_single_dyc_row_pane_g1_ParamLimits

0xe44d,	// (0x0001c7ac) list_single_dyc_row_pane_g1

0xe459,	// (0x0001c7b8) list_single_dyc_row_pane_g2_ParamLimits

0xe459,	// (0x0001c7b8) list_single_dyc_row_pane_g2

0xe465,	// (0x0001c7c4) list_single_dyc_row_pane_g3_ParamLimits

0xe465,	// (0x0001c7c4) list_single_dyc_row_pane_g3

0xe471,	// (0x0001c7d0) list_single_dyc_row_pane_g4_ParamLimits

0xe471,	// (0x0001c7d0) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0001e098) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0001e098) list_single_dyc_row_pane_g

0xe47d,	// (0x0001c7dc) list_single_dyc_row_text_pane_ParamLimits

0xe47d,	// (0x0001c7dc) list_single_dyc_row_text_pane

0x92dc,	// (0x0001763b) bg_sp_fs_scroll_pane

0xe49c,	// (0x0001c7fb) thumb_sp_fs_scroll_pane

0xd210,	// (0x0001b56f) list_medium_line_g1_ParamLimits

0xd210,	// (0x0001b56f) list_medium_line_g1

0xe4a5,	// (0x0001c804) list_medium_line_t1_ParamLimits

0xe4a5,	// (0x0001c804) list_medium_line_t1

0x9d88,	// (0x000180e7) list_medium_line_x2_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x2_g1

0x9d94,	// (0x000180f3) list_medium_line_x2_g2_ParamLimits

0x9d94,	// (0x000180f3) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0001e0a1) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0001e0a1) list_medium_line_x2_g

0xe4ba,	// (0x0001c819) list_medium_line_x2_t1_ParamLimits

0xe4ba,	// (0x0001c819) list_medium_line_x2_t1

0x9d88,	// (0x000180e7) list_medium_line_x3_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x3_g1

0x9d94,	// (0x000180f3) list_medium_line_x3_g2_ParamLimits

0x9d94,	// (0x000180f3) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0001e0a1) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0001e0a1) list_medium_line_x3_g

0xe4ba,	// (0x0001c819) list_medium_line_x3_t1_ParamLimits

0xe4ba,	// (0x0001c819) list_medium_line_x3_t1

0xe4d0,	// (0x0001c82f) thumb_sp_fs_scroll_pane_g1

0xe4d9,	// (0x0001c838) thumb_sp_fs_scroll_pane_g2

0xe4e2,	// (0x0001c841) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0001e0a6) thumb_sp_fs_scroll_pane_g

0xe4d0,	// (0x0001c82f) bg_sp_fs_scroll_pane_g1

0xe4d9,	// (0x0001c838) bg_sp_fs_scroll_pane_g2

0xe4e2,	// (0x0001c841) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0001e0a6) bg_sp_fs_scroll_pane_g

0x9d88,	// (0x000180e7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9d88,	// (0x000180e7) list_medium_line_x2_t3_g4_g1

0x9e1c,	// (0x0001817b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9e1c,	// (0x0001817b) list_medium_line_x2_t3_g4_g2

0x9d94,	// (0x000180f3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9d94,	// (0x000180f3) list_medium_line_x2_t3_g4_g3

0x9da0,	// (0x000180ff) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9da0,	// (0x000180ff) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0001d631) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0001d631) list_medium_line_x2_t3_g4_g

0x8097,	// (0x000163f6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8097,	// (0x000163f6) list_medium_line_x2_t3_g4_t1

0x80ad,	// (0x0001640c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80ad,	// (0x0001640c) list_medium_line_x2_t3_g4_t2

0x9dc1,	// (0x00018120) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9dc1,	// (0x00018120) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0001e0ad) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0001e0ad) list_medium_line_x2_t3_g4_t

0xd210,	// (0x0001b56f) list_medium_line_g2_g1_ParamLimits

0xd210,	// (0x0001b56f) list_medium_line_g2_g1

0xd21c,	// (0x0001b57b) list_medium_line_g2_g2_ParamLimits

0xd21c,	// (0x0001b57b) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x0001dd6a) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x0001dd6a) list_medium_line_g2_g

0xe4eb,	// (0x0001c84a) list_medium_line_g2_t1_ParamLimits

0xe4eb,	// (0x0001c84a) list_medium_line_g2_t1

0xd210,	// (0x0001b56f) list_medium_line_t3_g2_g1_ParamLimits

0xd210,	// (0x0001b56f) list_medium_line_t3_g2_g1

0xd21c,	// (0x0001b57b) list_medium_line_t3_g2_g2_ParamLimits

0xd21c,	// (0x0001b57b) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x0001dd6a) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x0001dd6a) list_medium_line_t3_g2_g

0x80c6,	// (0x00016425) list_medium_line_t3_g2_t1_ParamLimits

0x80c6,	// (0x00016425) list_medium_line_t3_g2_t1

0x80e0,	// (0x0001643f) list_medium_line_t3_g2_t2_ParamLimits

0x80e0,	// (0x0001643f) list_medium_line_t3_g2_t2

0x80f6,	// (0x00016455) list_medium_line_t3_g2_t3_ParamLimits

0x80f6,	// (0x00016455) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0001e0b4) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0001e0b4) list_medium_line_t3_g2_t

0xe2c7,	// (0x0001c626) list_medium_line_right_icon_g1

0xe500,	// (0x0001c85f) list_medium_line_right_icon_t1

0xd210,	// (0x0001b56f) list_medium_line_t2_g1_ParamLimits

0xd210,	// (0x0001b56f) list_medium_line_t2_g1

0x810d,	// (0x0001646c) list_medium_line_t2_t1_ParamLimits

0x810d,	// (0x0001646c) list_medium_line_t2_t1

0x8127,	// (0x00016486) list_medium_line_t2_t2_ParamLimits

0x8127,	// (0x00016486) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0001e0bb) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0001e0bb) list_medium_line_t2_t

0xd210,	// (0x0001b56f) list_medium_line_t3_g1_ParamLimits

0xd210,	// (0x0001b56f) list_medium_line_t3_g1

0x8140,	// (0x0001649f) list_medium_line_t3_t1_ParamLimits

0x8140,	// (0x0001649f) list_medium_line_t3_t1

0x815a,	// (0x000164b9) list_medium_line_t3_t2_ParamLimits

0x815a,	// (0x000164b9) list_medium_line_t3_t2

0x8170,	// (0x000164cf) list_medium_line_t3_t3_ParamLimits

0x8170,	// (0x000164cf) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0001e0c0) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0001e0c0) list_medium_line_t3_t

0xd210,	// (0x0001b56f) list_medium_line_g3_g1_ParamLimits

0xd210,	// (0x0001b56f) list_medium_line_g3_g1

0xe50e,	// (0x0001c86d) list_medium_line_g3_g2_ParamLimits

0xe50e,	// (0x0001c86d) list_medium_line_g3_g2

0xd21c,	// (0x0001b57b) list_medium_line_g3_g3_ParamLimits

0xd21c,	// (0x0001b57b) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0001e0c7) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0001e0c7) list_medium_line_g3_g

0xe51a,	// (0x0001c879) list_medium_line_g3_t1_ParamLimits

0xe51a,	// (0x0001c879) list_medium_line_g3_t1

0xd210,	// (0x0001b56f) list_medium_line_t2_g3_g1_ParamLimits

0xd210,	// (0x0001b56f) list_medium_line_t2_g3_g1

0xe50e,	// (0x0001c86d) list_medium_line_t2_g3_g2_ParamLimits

0xe50e,	// (0x0001c86d) list_medium_line_t2_g3_g2

0xd21c,	// (0x0001b57b) list_medium_line_t2_g3_g3_ParamLimits

0xd21c,	// (0x0001b57b) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0001e0c7) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0001e0c7) list_medium_line_t2_g3_g

0x8185,	// (0x000164e4) list_medium_line_t2_g3_t1_ParamLimits

0x8185,	// (0x000164e4) list_medium_line_t2_g3_t1

0x819c,	// (0x000164fb) list_medium_line_t2_g3_t2_ParamLimits

0x819c,	// (0x000164fb) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0001e0ce) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0001e0ce) list_medium_line_t2_g3_t

0xd210,	// (0x0001b56f) list_medium_line_t3_g3_g1_ParamLimits

0xd210,	// (0x0001b56f) list_medium_line_t3_g3_g1

0xe50e,	// (0x0001c86d) list_medium_line_t3_g3_g2_ParamLimits

0xe50e,	// (0x0001c86d) list_medium_line_t3_g3_g2

0xd21c,	// (0x0001b57b) list_medium_line_t3_g3_g3_ParamLimits

0xd21c,	// (0x0001b57b) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0001e0c7) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0001e0c7) list_medium_line_t3_g3_g

0x81b5,	// (0x00016514) list_medium_line_t3_g3_t1_ParamLimits

0x81b5,	// (0x00016514) list_medium_line_t3_g3_t1

0x81ce,	// (0x0001652d) list_medium_line_t3_g3_t2_ParamLimits

0x81ce,	// (0x0001652d) list_medium_line_t3_g3_t2

0x81e4,	// (0x00016543) list_medium_line_t3_g3_t3_ParamLimits

0x81e4,	// (0x00016543) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0001e0d3) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0001e0d3) list_medium_line_t3_g3_t

0xe3f5,	// (0x0001c754) list_medium_line_right_iconx2_g1

0xe2c7,	// (0x0001c626) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0001e0da) list_medium_line_right_iconx2_g

0xe52f,	// (0x0001c88e) list_medium_line_right_iconx2_t1

0xe3f5,	// (0x0001c754) list_medium_line_t2_right_iconx2_g1

0xe2c7,	// (0x0001c626) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0001e0da) list_medium_line_t2_right_iconx2_g

0x81fe,	// (0x0001655d) list_medium_line_t2_right_iconx2_t1

0x820e,	// (0x0001656d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0001e0df) list_medium_line_t2_right_iconx2_t

0xe53d,	// (0x0001c89c) list_medium_line_x4_t4_t1

0x8220,	// (0x0001657f) list_medium_line_x4_t4_t2

0x8230,	// (0x0001658f) list_medium_line_x4_t4_t3

0x8240,	// (0x0001659f) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0001e0e4) list_medium_line_x4_t4_t

0x8293,	// (0x000165f2) tport_appsw_pane_ParamLimits

0x8293,	// (0x000165f2) tport_appsw_pane

0x82a6,	// (0x00016605) tport_contact_pane_ParamLimits

0x82a6,	// (0x00016605) tport_contact_pane

0x82bf,	// (0x0001661e) tport_listscroll_pane_ParamLimits

0x82bf,	// (0x0001661e) tport_listscroll_pane

0x82da,	// (0x00016639) cell_tport_appsw_pane_ParamLimits

0x82da,	// (0x00016639) cell_tport_appsw_pane

0xcf1c,	// (0x0001b27b) tport_appsw_pane_g1_ParamLimits

0xcf1c,	// (0x0001b27b) tport_appsw_pane_g1

0xe54b,	// (0x0001c8aa) tport_contact_pane_g1

0xe554,	// (0x0001c8b3) tport_contact_pane_t1

0xe562,	// (0x0001c8c1) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0001e0ed) tport_contact_pane_t

0xe570,	// (0x0001c8cf) list_tport_pane

0xe579,	// (0x0001c8d8) scroll_pane_cp_030

0xe58a,	// (0x0001c8e9) cell_tport_appsw_pane_g1

0xe59a,	// (0x0001c8f9) cell_tport_appsw_pane_t1

0x92dc,	// (0x0001763b) grid_highlight_pane_cp019

0x831e,	// (0x0001667d) list_tport_double_graphic_pane_ParamLimits

0x831e,	// (0x0001667d) list_tport_double_graphic_pane

0x934d,	// (0x000176ac) list_highlight_pane_cp023_ParamLimits

0x934d,	// (0x000176ac) list_highlight_pane_cp023

0x832b,	// (0x0001668a) list_tport_double_graphic_pane_g1_ParamLimits

0x832b,	// (0x0001668a) list_tport_double_graphic_pane_g1

0x8338,	// (0x00016697) list_tport_double_graphic_pane_t1_ParamLimits

0x8338,	// (0x00016697) list_tport_double_graphic_pane_t1

0x834d,	// (0x000166ac) list_tport_double_graphic_pane_t2_ParamLimits

0x834d,	// (0x000166ac) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0001e0f9) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0001e0f9) list_tport_double_graphic_pane_t

0x92dc,	// (0x0001763b) main_cale_note_pane

0x5f64,	// (0x000142c3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5f64,	// (0x000142c3) cell_vitu2_function_top_wide_pane_cp01

0x79af,	// (0x00015d0e) wait_bar_pane_cp05_ParamLimits

0x92dc,	// (0x0001763b) listscroll_cmail_pane

0xe5b0,	// (0x0001c90f) list_cmail_pane

0x8369,	// (0x000166c8) list_cmail_body_pane

0x8381,	// (0x000166e0) list_single_cmail_header_caption_pane

0x839e,	// (0x000166fd) list_single_cmail_header_detail_pane_ParamLimits

0x839e,	// (0x000166fd) list_single_cmail_header_detail_pane

0x83d0,	// (0x0001672f) list_single_cmail_header_caption_pane_t1

0x83e0,	// (0x0001673f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83e0,	// (0x0001673f) list_single_cmail_header_detail_pane_g1

0xe5d0,	// (0x0001c92f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5d0,	// (0x0001c92f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0001e0fe) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0001e0fe) list_single_cmail_header_detail_pane_g

0xe5e9,	// (0x0001c948) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5e9,	// (0x0001c948) list_single_cmail_header_detail_pane_t1

0xe627,	// (0x0001c986) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe627,	// (0x0001c986) list_single_cmail_header_editor_pane_bg

0xde6e,	// (0x0001c1cd) list_cmail_body_pane_g1

0xe639,	// (0x0001c998) list_cmail_body_pane_t1

0xcf59,	// (0x0001b2b8) list_single_cmail_header_editor_pane_bg_g1

0xa041,	// (0x000183a0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf69,	// (0x0001b2c8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf61,	// (0x0001b2c0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1e8,	// (0x0001b547) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf89,	// (0x0001b2e8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf79,	// (0x0001b2d8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf81,	// (0x0001b2e0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa021,	// (0x00018380) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x841e,	// (0x0001677d) calenote_gesture_pane_ParamLimits

0x841e,	// (0x0001677d) calenote_gesture_pane

0x843e,	// (0x0001679d) calenote_window_pane_ParamLimits

0x843e,	// (0x0001679d) calenote_window_pane

0xe647,	// (0x0001c9a6) popup_note_window_cp01

0x845a,	// (0x000167b9) calenote_swipe_1_pane_ParamLimits

0x845a,	// (0x000167b9) calenote_swipe_1_pane

0x7df2,	// (0x00016151) calenote_swipe_2_pane_ParamLimits

0x7df2,	// (0x00016151) calenote_swipe_2_pane

0xe1c6,	// (0x0001c525) calenote_swipe_1_pane_g1_ParamLimits

0xe1c6,	// (0x0001c525) calenote_swipe_1_pane_g1

0xe1d3,	// (0x0001c532) calenote_swipe_1_pane_g2_ParamLimits

0xe1d3,	// (0x0001c532) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0001e02d) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0001e02d) calenote_swipe_1_pane_g

0xe659,	// (0x0001c9b8) calenote_swipe_1_pane_t1_ParamLimits

0xe659,	// (0x0001c9b8) calenote_swipe_1_pane_t1

0xe1c6,	// (0x0001c525) calenote_swipe_2_pane_g1_ParamLimits

0xe1c6,	// (0x0001c525) calenote_swipe_2_pane_g1

0xe678,	// (0x0001c9d7) calenote_swipe_2_pane_g2_ParamLimits

0xe678,	// (0x0001c9d7) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0001e10a) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0001e10a) calenote_swipe_2_pane_g

0xe684,	// (0x0001c9e3) calenote_swipe_2_pane_t1_ParamLimits

0xe684,	// (0x0001c9e3) calenote_swipe_2_pane_t1

0x92dc,	// (0x0001763b) main_mup_navstr_pane

0x4bae,	// (0x00012f0d) main_mup3_pane_t7_ParamLimits

0x4bae,	// (0x00012f0d) main_mup3_pane_t7

0xcac4,	// (0x0001ae23) main_mp4_pane_g6_ParamLimits

0xcac4,	// (0x0001ae23) main_mp4_pane_g6

0xccec,	// (0x0001b04b) main_image3_pane_t4_ParamLimits

0xccec,	// (0x0001b04b) main_image3_pane_t4

0x846f,	// (0x000167ce) popup_navstr_preview_pane_ParamLimits

0x846f,	// (0x000167ce) popup_navstr_preview_pane

0x847f,	// (0x000167de) scroll_navstr_pane_ParamLimits

0x847f,	// (0x000167de) scroll_navstr_pane

0x92dc,	// (0x0001763b) bg_popup_preview_window_pane_cp04

0xe6ab,	// (0x0001ca0a) popup_navstr_preview_pane_t1

0x8493,	// (0x000167f2) scroll_navstr_pane_g1_ParamLimits

0x8493,	// (0x000167f2) scroll_navstr_pane_g1

0x84a7,	// (0x00016806) scroll_navstr_pane_t1_ParamLimits

0x84a7,	// (0x00016806) scroll_navstr_pane_t1

0xe650,	// (0x0001c9af) bg_button_pane_cp014

0xe650,	// (0x0001c9af) bg_button_pane_cp030

0x7c88,	// (0x00015fe7) list_double_fisheye_pane_g4_ParamLimits

0x7c88,	// (0x00015fe7) list_double_fisheye_pane_g4

0x7c94,	// (0x00015ff3) list_double_fisheye_pane_g5_ParamLimits

0x7c94,	// (0x00015ff3) list_double_fisheye_pane_g5

0xe5b8,	// (0x0001c917) sp_fs_scroll_pane_cp03

0xe309,	// (0x0001c668) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe315,	// (0x0001c674) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x0001e04a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe321,	// (0x0001c680) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x835f,	// (0x000166be) sp_fs_scroll_pane_cp02

0x9c7f,	// (0x00017fde) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9c7f,	// (0x00017fde) popup_sp_fs_calendar_preview_list_single_pane

0x92dc,	// (0x0001763b) main_cam6_pano_pane

0x934d,	// (0x000176ac) main_mup3_pane_ParamLimits

0x92dc,	// (0x0001763b) main_phacti_pane

0x7880,	// (0x00015bdf) bg_button_pane_cp11

0x789a,	// (0x00015bf9) main_mobtv_info_pane_g2_ParamLimits

0x789a,	// (0x00015bf9) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x0001dfaa) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x0001dfaa) main_mobtv_info_pane_g

0x7a77,	// (0x00015dd6) sc_clock_pane_t5_ParamLimits

0x7a77,	// (0x00015dd6) sc_clock_pane_t5

0x7b03,	// (0x00015e62) main_radioblah_pane_g1_ParamLimits

0xe112,	// (0x0001c471) main_radioblah_pane_t3_ParamLimits

0xe112,	// (0x0001c471) main_radioblah_pane_t3

0xe12a,	// (0x0001c489) main_radioblah_pane_t4_ParamLimits

0xe12a,	// (0x0001c489) main_radioblah_pane_t4

0x7b2b,	// (0x00015e8a) main_radioblah_text_pane_ParamLimits

0x7b2b,	// (0x00015e8a) main_radioblah_text_pane

0x7b3d,	// (0x00015e9c) main_radioblah_info_pane_g1_ParamLimits

0x7bd6,	// (0x00015f35) main_radioblah_info_pane_t4_ParamLimits

0x7bd6,	// (0x00015f35) main_radioblah_info_pane_t4

0x934d,	// (0x000176ac) main_sp_fs_calendar_pane

0x84be,	// (0x0001681d) main_phacti_pane_g1

0x84c6,	// (0x00016825) phacti_note_pane_ParamLimits

0x84c6,	// (0x00016825) phacti_note_pane

0xe6c2,	// (0x0001ca21) phacti_term_pane_ParamLimits

0xe6c2,	// (0x0001ca21) phacti_term_pane

0xe6d7,	// (0x0001ca36) phacti_note_pane_t1_ParamLimits

0xe6d7,	// (0x0001ca36) phacti_note_pane_t1

0xe6ee,	// (0x0001ca4d) phacti_term_pane_g1

0xe6f6,	// (0x0001ca55) phacti_term_pane_t1_ParamLimits

0xe6f6,	// (0x0001ca55) phacti_term_pane_t1

0xe720,	// (0x0001ca7f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe728,	// (0x0001ca87) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0001e114) popup_sp_fs_calendar_preview_list_single_pane_g

0xe730,	// (0x0001ca8f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe730,	// (0x0001ca8f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe746,	// (0x0001caa5) aid_popup_sp_fs_bg_corner_pane

0xc1a7,	// (0x0001a506) popup_sp_fs_calendar_preview_bg_pane_g1

0x92dc,	// (0x0001763b) popup_sp_fs_calendar_preview_bg_pane

0xe74e,	// (0x0001caad) popup_sp_fs_calendar_preview_list_pane

0x934d,	// (0x000176ac) bg_main_sp_fs_cale_pane_ParamLimits

0x934d,	// (0x000176ac) bg_main_sp_fs_cale_pane

0xe75f,	// (0x0001cabe) listscroll_cale_mrui_pane_ParamLimits

0xe75f,	// (0x0001cabe) listscroll_cale_mrui_pane

0xe773,	// (0x0001cad2) listscroll_sp_fs_schedule_track_pane

0xe77c,	// (0x0001cadb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe77c,	// (0x0001cadb) main_sp_fs_ctrlbar_pane_cp01

0xe78d,	// (0x0001caec) main_sp_fs_ribbon_pane

0xe795,	// (0x0001caf4) popup_sp_fs_cale_preview_window

0x8527,	// (0x00016886) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8527,	// (0x00016886) list_single_sp_fs_schedule_track_pane

0x934d,	// (0x000176ac) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x934d,	// (0x000176ac) bg_sp_fs_highlight_list_pane_cp03

0x853a,	// (0x00016899) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x853a,	// (0x00016899) list_single_sp_fs_schedule_track_pane_g1

0x8546,	// (0x000168a5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8546,	// (0x000168a5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0001e119) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0001e119) list_single_sp_fs_schedule_track_pane_g

0x8552,	// (0x000168b1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8552,	// (0x000168b1) list_single_sp_fs_schedule_track_pane_t1

0x8574,	// (0x000168d3) sp_fs_schedule_track_pane_ParamLimits

0x8574,	// (0x000168d3) sp_fs_schedule_track_pane

0xe7a7,	// (0x0001cb06) sp_fs_schedule_track_pane_g1

0xe7af,	// (0x0001cb0e) sp_fs_schedule_track_pane_g2

0xe7b7,	// (0x0001cb16) sp_fs_schedule_track_pane_g3

0xe7bf,	// (0x0001cb1e) sp_fs_schedule_track_pane_g4

0xe7c7,	// (0x0001cb26) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0001e11e) sp_fs_schedule_track_pane_g

0xcf59,	// (0x0001b2b8) bg_sp_fs_schedule_viewer_highlight_g1

0xa041,	// (0x000183a0) bg_sp_fs_schedule_viewer_highlight_g2

0xcf61,	// (0x0001b2c0) bg_sp_fs_schedule_viewer_highlight_g3

0xcf69,	// (0x0001b2c8) bg_sp_fs_schedule_viewer_highlight_g4

0xd1e8,	// (0x0001b547) bg_sp_fs_schedule_viewer_highlight_g5

0xcf79,	// (0x0001b2d8) bg_sp_fs_schedule_viewer_highlight_g6

0xcf81,	// (0x0001b2e0) bg_sp_fs_schedule_viewer_highlight_g7

0xcf89,	// (0x0001b2e8) bg_sp_fs_schedule_viewer_highlight_g8

0xa021,	// (0x00018380) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0001e129) bg_sp_fs_schedule_viewer_highlight_g

0x92dc,	// (0x0001763b) bg_main_sp_fs_ribbon_pane

0x8589,	// (0x000168e8) main_sp_fs_ribbon_pane_g1

0xe7cf,	// (0x0001cb2e) main_sp_fs_ribbon_pane_t1

0x8592,	// (0x000168f1) main_sp_fs_ribbon_pane_t2

0xe7de,	// (0x0001cb3d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0001e13c) main_sp_fs_ribbon_pane_t

0xe7ed,	// (0x0001cb4c) main_sp_fs_ribbon_scheduler_pane

0xe7f5,	// (0x0001cb54) bg_main_sp_fs_ribbon_pane_g1

0xe7fe,	// (0x0001cb5d) bg_main_sp_fs_ribbon_pane_g2

0xe807,	// (0x0001cb66) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0001e143) bg_main_sp_fs_ribbon_pane_g

0xe80f,	// (0x0001cb6e) main_sp_fs_ribbon_scheduler_pane_g1

0xe818,	// (0x0001cb77) main_sp_fs_ribbon_scheduler_pane_g2

0xe821,	// (0x0001cb80) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0001e14a) main_sp_fs_ribbon_scheduler_pane_g

0xe82a,	// (0x0001cb89) list_cale_mrui_pane

0x85a1,	// (0x00016900) sp_fs_scroll_pane_cp07_ParamLimits

0x85a1,	// (0x00016900) sp_fs_scroll_pane_cp07

0x85b7,	// (0x00016916) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x85b7,	// (0x00016916) bg_sp_fs_schedule_viewer_highlight

0xe833,	// (0x0001cb92) list_single_sp_fs_schedule_track_pane_cp01

0xe83b,	// (0x0001cb9a) list_sp_fs_schedule_track_pane

0xe843,	// (0x0001cba2) sp_fs_scroll_pane_cp06_ParamLimits

0xe843,	// (0x0001cba2) sp_fs_scroll_pane_cp06

0xc1a7,	// (0x0001a506) bgmain_sp_fs_calendar_pane_g1

0xe855,	// (0x0001cbb4) list_single_cale_mrui_pane_ParamLimits

0xe855,	// (0x0001cbb4) list_single_cale_mrui_pane

0xe87c,	// (0x0001cbdb) list_single_cale_mrui_row_pane_ParamLimits

0xe87c,	// (0x0001cbdb) list_single_cale_mrui_row_pane

0xe889,	// (0x0001cbe8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe889,	// (0x0001cbe8) list_single_cale_mrui_row_pane_g1

0xe8ce,	// (0x0001cc2d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8ce,	// (0x0001cc2d) list_single_cale_mrui_row_pane_t1

0x85c9,	// (0x00016928) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85c9,	// (0x00016928) list_single_cale_mrui_row_pane_t2

0xe8e0,	// (0x0001cc3f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8e0,	// (0x0001cc3f) list_single_cale_mrui_row_pane_t3

0xe90f,	// (0x0001cc6e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe90f,	// (0x0001cc6e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0001e158) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0001e158) list_single_cale_mrui_row_pane_t

0x862f,	// (0x0001698e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x862f,	// (0x0001698e) list_single_cmail_header_editor_pane_bg_cp01

0x8653,	// (0x000169b2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8653,	// (0x000169b2) list_single_cmail_header_editor_pane_bg_cp02

0x8671,	// (0x000169d0) main_radioblah_text_pane_t1_ParamLimits

0x8671,	// (0x000169d0) main_radioblah_text_pane_t1

0xe93e,	// (0x0001cc9d) cam6_indi_pane_cp01

0xe946,	// (0x0001cca5) cam6_mode_pane_cp01

0xe94e,	// (0x0001ccad) cam6_pano_pane

0xe957,	// (0x0001ccb6) cam6_zoom_pane_cp01

0xe961,	// (0x0001ccc0) cam6_pano_image_pane

0xe96a,	// (0x0001ccc9) cam6_pano_pane_g1

0xde6e,	// (0x0001c1cd) cam6_pano_pane_g2

0xe973,	// (0x0001ccd2) cam6_pano_pane_g3

0xe97c,	// (0x0001ccdb) cam6_pano_pane_g4

0xc725,	// (0x0001aa84) cam6_pano_pane_g5

0xe985,	// (0x0001cce4) cam6_pano_pane_g6

0xe98d,	// (0x0001ccec) cam6_pano_pane_g7

0xe995,	// (0x0001ccf4) cam6_pano_pane_g8

0xe99e,	// (0x0001ccfd) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0001e161) cam6_pano_pane_g

0x92dc,	// (0x0001763b) main_browser_tag_pane

0xe6a3,	// (0x0001ca02) grid_navstr_albumart_pane

0xe9a9,	// (0x0001cd08) cell_navstr_albumart_pane_ParamLimits

0xe9a9,	// (0x0001cd08) cell_navstr_albumart_pane

0xe9c5,	// (0x0001cd24) cell_navstr_albumart_pane_g1

0xba8b,	// (0x00019dea) cell_navstr_albumart_pane_g2

0xba9b,	// (0x00019dfa) cell_navstr_albumart_pane_g3

0xba93,	// (0x00019df2) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0001e174) cell_navstr_albumart_pane_g

0x868c,	// (0x000169eb) bt_list_pane_ParamLimits

0x868c,	// (0x000169eb) bt_list_pane

0x86a2,	// (0x00016a01) bt_list_pane_t1

0x86b1,	// (0x00016a10) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0001e17d) bt_list_pane_t

0x92dc,	// (0x0001763b) main_cale_prevew_pane

0x86c0,	// (0x00016a1f) popup_cale_preview_window_ParamLimits

0x86c0,	// (0x00016a1f) popup_cale_preview_window

0x934d,	// (0x000176ac) bg_popup_preview_window_pane_cp05_ParamLimits

0x934d,	// (0x000176ac) bg_popup_preview_window_pane_cp05

0xe9cd,	// (0x0001cd2c) list_cale_preview_pane_ParamLimits

0xe9cd,	// (0x0001cd2c) list_cale_preview_pane

0x86db,	// (0x00016a3a) list_double_cale_preview_pane_ParamLimits

0x86db,	// (0x00016a3a) list_double_cale_preview_pane

0x86ef,	// (0x00016a4e) list_single_cale_preview_pane_ParamLimits

0x86ef,	// (0x00016a4e) list_single_cale_preview_pane

0x8707,	// (0x00016a66) list_single_cale_preview_pane_g1

0x870f,	// (0x00016a6e) list_single_cale_preview_pane_t1_ParamLimits

0x870f,	// (0x00016a6e) list_single_cale_preview_pane_t1

0x8724,	// (0x00016a83) list_double_cale_preview_pane_g1

0x872c,	// (0x00016a8b) list_double_cale_preview_pane_t1_ParamLimits

0x872c,	// (0x00016a8b) list_double_cale_preview_pane_t1

0x8741,	// (0x00016aa0) list_double_cale_preview_pane_t2_ParamLimits

0x8741,	// (0x00016aa0) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0001e182) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0001e182) list_double_cale_preview_pane_t

0x92dc,	// (0x0001763b) main_ezdial_pane

0x934d,	// (0x000176ac) main_sp_fs_email_pane_ParamLimits

0x7e2e,	// (0x0001618d) cmail_ddmenu_btn01_pane_ParamLimits

0x7e2e,	// (0x0001618d) cmail_ddmenu_btn01_pane

0x7e41,	// (0x000161a0) cmail_ddmenu_btn02_pane_ParamLimits

0x7e41,	// (0x000161a0) cmail_ddmenu_btn02_pane

0x7e64,	// (0x000161c3) cmail_ddmenu_btn03_pane_ParamLimits

0x7e64,	// (0x000161c3) cmail_ddmenu_btn03_pane

0x7e8f,	// (0x000161ee) main_sp_fs_ctrlbar_pane_ParamLimits

0x7eb3,	// (0x00016212) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8369,	// (0x000166c8) list_cmail_body_pane_ParamLimits

0xe5c7,	// (0x0001c926) bg_button_pane_cp12

0xe5dc,	// (0x0001c93b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5dc,	// (0x0001c93b) list_single_cmail_header_detail_pane_g3

0x83f8,	// (0x00016757) list_single_cmail_header_detail_pane_t2_ParamLimits

0x83f8,	// (0x00016757) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0001e105) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0001e105) list_single_cmail_header_detail_pane_t

0xe70b,	// (0x0001ca6a) phacti_term_pane_t2_ParamLimits

0xe70b,	// (0x0001ca6a) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0001e10f) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0001e10f) phacti_term_pane_t

0xe9d9,	// (0x0001cd38) aid_size_list_single_double

0x8759,	// (0x00016ab8) popup_ezdial_listscroll_window

0x8775,	// (0x00016ad4) popup_number_entry_window_cp01

0xa7c7,	// (0x00018b26) bg_popup_call_pane_cp09

0xe9e5,	// (0x0001cd44) ezdial_list_pane

0xe9ed,	// (0x0001cd4c) scroll_pane_cp23

0xbc72,	// (0x00019fd1) bg_button_pane_cp028_ParamLimits

0xbc72,	// (0x00019fd1) bg_button_pane_cp028

0x8783,	// (0x00016ae2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8783,	// (0x00016ae2) cmail_ddmenu_btn01_pane_g1

0x8792,	// (0x00016af1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8792,	// (0x00016af1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0001e187) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0001e187) cmail_ddmenu_btn01_pane_g

0xe9f5,	// (0x0001cd54) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9f5,	// (0x0001cd54) cmail_ddmenu_btn01_pane_t1

0xbc72,	// (0x00019fd1) bg_button_pane_cp029_ParamLimits

0xbc72,	// (0x00019fd1) bg_button_pane_cp029

0x87a2,	// (0x00016b01) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87a2,	// (0x00016b01) cmail_ddmenu_btn02_pane_g1

0x87bd,	// (0x00016b1c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87bd,	// (0x00016b1c) cmail_ddmenu_btn02_pane_t1

0x934d,	// (0x000176ac) bg_button_pane_cp031_ParamLimits

0x934d,	// (0x000176ac) bg_button_pane_cp031

0x87a2,	// (0x00016b01) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87a2,	// (0x00016b01) cmail_ddmenu_btn03_pane_g1

0x87bd,	// (0x00016b1c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87bd,	// (0x00016b1c) cmail_ddmenu_btn03_pane_t1

0x579e,	// (0x00013afd) cell_dialer2_keypad_pane_t1_ParamLimits

0x57b8,	// (0x00013b17) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x57b8,	// (0x00013b17) cell_dialer2_keypad_pane_t1_copy1

0x76e5,	// (0x00015a44) ncimui_group_button_pane

0x934d,	// (0x000176ac) main_sp_fs_calendar_pane_ParamLimits

0x8381,	// (0x000166e0) list_single_cmail_header_caption_pane_ParamLimits

0xe756,	// (0x0001cab5) aid_recal_txt_sm_pane

0x92dc,	// (0x0001763b) mian_recal_day_pane

0xe795,	// (0x0001caf4) popup_sp_fs_cale_preview_window_ParamLimits

0x92dc,	// (0x0001763b) list_recal_day_pane

0xea2d,	// (0x0001cd8c) list_single_recal_day_pane_ParamLimits

0xea2d,	// (0x0001cd8c) list_single_recal_day_pane

0xea3f,	// (0x0001cd9e) list_single_recal_day_pane_g1_ParamLimits

0xea3f,	// (0x0001cd9e) list_single_recal_day_pane_g1

0xea4b,	// (0x0001cdaa) list_single_recal_day_pane_g2_ParamLimits

0xea4b,	// (0x0001cdaa) list_single_recal_day_pane_g2

0xea5b,	// (0x0001cdba) list_single_recal_day_pane_g3_ParamLimits

0xea5b,	// (0x0001cdba) list_single_recal_day_pane_g3

0x87e4,	// (0x00016b43) list_single_recal_day_pane_g4_ParamLimits

0x87e4,	// (0x00016b43) list_single_recal_day_pane_g4

0xea67,	// (0x0001cdc6) list_single_recal_day_pane_g5_ParamLimits

0xea67,	// (0x0001cdc6) list_single_recal_day_pane_g5

0xea77,	// (0x0001cdd6) list_single_recal_day_pane_g6_ParamLimits

0xea77,	// (0x0001cdd6) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0001e196) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0001e196) list_single_recal_day_pane_g

0xea8e,	// (0x0001cded) list_single_recal_day_pane_t1

0xeaa0,	// (0x0001cdff) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0001e1a1) list_single_recal_day_pane_t

0x8804,	// (0x00016b63) ncimui_query_button_pane_ParamLimits

0x8804,	// (0x00016b63) ncimui_query_button_pane

0x8814,	// (0x00016b73) ncimui_query_button_pane_t1_ParamLimits

0x8814,	// (0x00016b73) ncimui_query_button_pane_t1

0xeab5,	// (0x0001ce14) ncimui_query_button_pane_t2_ParamLimits

0xeab5,	// (0x0001ce14) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0001e1a6) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0001e1a6) ncimui_query_button_pane_t

0x8827,	// (0x00016b86) query_button_pane_ParamLimits

0x8827,	// (0x00016b86) query_button_pane

0x92dc,	// (0x0001763b) bg_button_pane_cp0028

0xeac8,	// (0x0001ce27) query_button_pane_t1

0x3757,	// (0x00011ab6) main_tport_pane_ParamLimits

0x8250,	// (0x000165af) bg_popup_window_pane_cp01_ParamLimits

0x8250,	// (0x000165af) bg_popup_window_pane_cp01

0x826a,	// (0x000165c9) heading_pane_cp08_ParamLimits

0x826a,	// (0x000165c9) heading_pane_cp08

0x827e,	// (0x000165dd) heading_pane_cp07_ParamLimits

0x827e,	// (0x000165dd) heading_pane_cp07

0xe58a,	// (0x0001c8e9) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0001e0f2) cell_tport_appsw_pane_g

0xa94a,	// (0x00018ca9) input_candi_list_open_g1

0xa234,	// (0x00018593) list_cale_time_pane_g6_ParamLimits

0xa234,	// (0x00018593) list_cale_time_pane_g6

0x453f,	// (0x0001289e) aid_size_touch_calib_1_ParamLimits

0x453f,	// (0x0001289e) aid_size_touch_calib_1

0x4551,	// (0x000128b0) aid_size_touch_calib_2_ParamLimits

0x4551,	// (0x000128b0) aid_size_touch_calib_2

0x4569,	// (0x000128c8) aid_size_touch_calib_3_ParamLimits

0x4569,	// (0x000128c8) aid_size_touch_calib_3

0x4587,	// (0x000128e6) aid_size_touch_calib_4_ParamLimits

0x4587,	// (0x000128e6) aid_size_touch_calib_4

0x459f,	// (0x000128fe) main_touch_calib_button_group_pane_ParamLimits

0x459f,	// (0x000128fe) main_touch_calib_button_group_pane

0x45b7,	// (0x00012916) main_touch_calib_pane_g1_ParamLimits

0x45c9,	// (0x00012928) main_touch_calib_pane_g2_ParamLimits

0x45db,	// (0x0001293a) main_touch_calib_pane_g3_ParamLimits

0x45ed,	// (0x0001294c) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0001dac0) main_touch_calib_pane_g_ParamLimits

0x45ff,	// (0x0001295e) main_touch_calib_pane_t1_ParamLimits

0x4619,	// (0x00012978) main_touch_calib_pane_t2_ParamLimits

0x4633,	// (0x00012992) main_touch_calib_pane_t3_ParamLimits

0x4647,	// (0x000129a6) main_touch_calib_pane_t4_ParamLimits

0x465d,	// (0x000129bc) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x0001dac9) main_touch_calib_pane_t_ParamLimits

0xc4ef,	// (0x0001a84e) list_single_fp_cale_pane_g3_ParamLimits

0xc4ef,	// (0x0001a84e) list_single_fp_cale_pane_g3

0x934d,	// (0x000176ac) bg_button_pane_cp012_ParamLimits

0x934d,	// (0x000176ac) bg_vkb2_func_pane_cp03_ParamLimits

0x6896,	// (0x00014bf5) cell_vitu2_function_top_pane_g1_ParamLimits

0x934d,	// (0x000176ac) bg_vkb2_func_pane_cp04_ParamLimits

0x7673,	// (0x000159d2) main_ncimui_button_group_pane_ParamLimits

0x7673,	// (0x000159d2) main_ncimui_button_group_pane

0x76d3,	// (0x00015a32) main_ncimui_pane_t3_ParamLimits

0x76d3,	// (0x00015a32) main_ncimui_pane_t3

0xe6b9,	// (0x0001ca18) phacti_button_group_pane

0xe9d9,	// (0x0001cd38) aid_size_list_single_double_ParamLimits

0x8759,	// (0x00016ab8) popup_ezdial_listscroll_window_ParamLimits

0x8775,	// (0x00016ad4) popup_number_entry_window_cp01_ParamLimits

0x883a,	// (0x00016b99) phacti_button_pane_ParamLimits

0x883a,	// (0x00016b99) phacti_button_pane

0x92dc,	// (0x0001763b) bg_button_pane_cp14

0xead6,	// (0x0001ce35) phacti_button_pane_t1

0x884b,	// (0x00016baa) main_touch_calib_button_pane_ParamLimits

0x884b,	// (0x00016baa) main_touch_calib_button_pane

0x9af3,	// (0x00017e52) bg_button_pane_cp18_ParamLimits

0x9af3,	// (0x00017e52) bg_button_pane_cp18

0xeae4,	// (0x0001ce43) main_touch_calib_button_pane_t1_ParamLimits

0xeae4,	// (0x0001ce43) main_touch_calib_button_pane_t1

0xeafa,	// (0x0001ce59) main_touch_calib_button_pane_t2_ParamLimits

0xeafa,	// (0x0001ce59) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0001e1ab) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0001e1ab) main_touch_calib_button_pane_t

0x92dc,	// (0x0001763b) cell_ncimui_button_pane

0x92dc,	// (0x0001763b) bg_button_pane_cp032

0xeb18,	// (0x0001ce77) cell_ncimui_button_pane_t1

0xccca,	// (0x0001b029) image3_infobar_pane_ParamLimits

0xccca,	// (0x0001b029) image3_infobar_pane

0x7aa3,	// (0x00015e02) fs_bigclock_status_pane_ParamLimits

0x7aa3,	// (0x00015e02) fs_bigclock_status_pane

0x7ab0,	// (0x00015e0f) main_fs_bigclock_clock_pane_ParamLimits

0x7ab0,	// (0x00015e0f) main_fs_bigclock_clock_pane

0x7ac4,	// (0x00015e23) main_fs_bigclock_indi_pane_ParamLimits

0x7ac4,	// (0x00015e23) main_fs_bigclock_indi_pane

0x7adf,	// (0x00015e3e) main_fs_bigclock_swipe_pane_ParamLimits

0x7adf,	// (0x00015e3e) main_fs_bigclock_swipe_pane

0x92dc,	// (0x0001763b) main_fs_clock_dumped_data

0xdf7b,	// (0x0001c2da) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdf7b,	// (0x0001c2da) list_single_fs_bigclock_indicator_pane_g1

0xdfa5,	// (0x0001c304) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdfa5,	// (0x0001c304) list_single_fs_bigclock_indicator_pane_g2

0xdfbf,	// (0x0001c31e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdfbf,	// (0x0001c31e) list_single_fs_bigclock_indicator_pane_g3

0xdfd9,	// (0x0001c338) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdfd9,	// (0x0001c338) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x0001dfde) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x0001dfde) list_single_fs_bigclock_indicator_pane_g

0xe004,	// (0x0001c363) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe004,	// (0x0001c363) list_single_fs_bigclock_indicator_pane_t1

0xe02c,	// (0x0001c38b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe02c,	// (0x0001c38b) list_single_fs_bigclock_indicator_pane_t2

0xe054,	// (0x0001c3b3) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe054,	// (0x0001c3b3) list_single_fs_bigclock_indicator_pane_t3

0xe07c,	// (0x0001c3db) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe07c,	// (0x0001c3db) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x0001dfe9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x0001dfe9) list_single_fs_bigclock_indicator_pane_t

0xeb26,	// (0x0001ce85) image3_infobar_fav_pane_ParamLimits

0xeb26,	// (0x0001ce85) image3_infobar_fav_pane

0xeb36,	// (0x0001ce95) image3_infobar_loc_pane_ParamLimits

0xeb36,	// (0x0001ce95) image3_infobar_loc_pane

0xeb4c,	// (0x0001ceab) image3_infobar_time_pane_ParamLimits

0xeb4c,	// (0x0001ceab) image3_infobar_time_pane

0xc1a7,	// (0x0001a506) image3_infobar_time_pane_g1

0xeb5c,	// (0x0001cebb) image3_infobar_time_pane_t1

0xc1a7,	// (0x0001a506) image3_infobar_loc_pane_g1

0xeb6a,	// (0x0001cec9) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0001e1b0) image3_infobar_loc_pane_g

0xeb72,	// (0x0001ced1) image3_infobar_loc_pane_t1

0xc1a7,	// (0x0001a506) image3_infobar_fav_pane_g1

0xeb80,	// (0x0001cedf) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0001e1b5) image3_infobar_fav_pane_g

0xeb88,	// (0x0001cee7) fs_bigclock_status_battery_pane

0xeb91,	// (0x0001cef0) fs_bigclock_status_signal_pane

0xeb9a,	// (0x0001cef9) fs_bigclock_status_title_pane

0xeba3,	// (0x0001cf02) fs_bigclock_status_signal_pane_g1

0xebac,	// (0x0001cf0b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0001e1ba) fs_bigclock_status_signal_pane_g

0xebb4,	// (0x0001cf13) fs_bigclock_status_battery_pane_g1

0xebbd,	// (0x0001cf1c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0001e1bf) fs_bigclock_status_battery_pane_g

0xebc5,	// (0x0001cf24) fs_bigclock_status_title_pane_t1

0xc1a7,	// (0x0001a506) main_fs_bigclock_clock_pane_g1

0xebd3,	// (0x0001cf32) main_fs_bigclock_clock_pane_g2

0xebd3,	// (0x0001cf32) main_fs_bigclock_clock_pane_g3

0xebd3,	// (0x0001cf32) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0001e1c4) main_fs_bigclock_clock_pane_g

0xebdb,	// (0x0001cf3a) main_fs_bigclock_clock_pane_t1

0xebe9,	// (0x0001cf48) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0001e1cd) main_fs_bigclock_clock_pane_t

0x8860,	// (0x00016bbf) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8860,	// (0x00016bbf) list_single_fs_bigclock_indicator_pane

0x8871,	// (0x00016bd0) list_single_fs_bigclock_pane_ParamLimits

0x8871,	// (0x00016bd0) list_single_fs_bigclock_pane

0xec01,	// (0x0001cf60) main_fs_bigclock_indicator_pane_t1

0xec10,	// (0x0001cf6f) list_single_fs_bigclock_pane_g1

0xec18,	// (0x0001cf77) list_single_fs_bigclock_pane_t1

0xc1a7,	// (0x0001a506) main_fs_bigclock_swipe_pane_g1

0xec5b,	// (0x0001cfba) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0001e1de) main_fs_bigclock_swipe_pane_g

0xec63,	// (0x0001cfc2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec63,	// (0x0001cfc2) main_fs_bigclock_swipe_pane_t1

0x2450,	// (0x000107af) call_type_pane_ParamLimits

0x92dc,	// (0x0001763b) main_btmg_pane

0xe8b5,	// (0x0001cc14) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8b5,	// (0x0001cc14) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0001e151) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0001e151) list_single_cale_mrui_row_pane_g

0xea14,	// (0x0001cd73) list_recal_vselct_arw_lo_pane

0xea1c,	// (0x0001cd7b) list_recal_vselct_arw_up_pane

0xea24,	// (0x0001cd83) list_recal_vselct_pane

0x88d4,	// (0x00016c33) btmg_button_pane

0x88de,	// (0x00016c3d) main_btmg_pane_g1

0x92dc,	// (0x0001763b) bg_button_pane_cp044

0xec80,	// (0x0001cfdf) btmg_button_pane_t1

0xbc6a,	// (0x00019fc9) aid_listscroll_gen

0x934d,	// (0x000176ac) main_cntbar_detail_pane

0xe5a8,	// (0x0001c907) list_cmail_folder_pane

0xe5b8,	// (0x0001c917) sp_fs_scroll_pane_cp03_ParamLimits

0x88e8,	// (0x00016c47) list_single_fs_dyc_pane_cp01_ParamLimits

0x88e8,	// (0x00016c47) list_single_fs_dyc_pane_cp01

0xec8e,	// (0x0001cfed) aid_size_cmail_indent

0xec97,	// (0x0001cff6) list_single_dyc_row_pane_cp01

0x8935,	// (0x00016c94) cntbar_detail_list_pane_ParamLimits

0x8935,	// (0x00016c94) cntbar_detail_list_pane

0x8987,	// (0x00016ce6) main_cntbar_detail_cont_pane_ParamLimits

0x8987,	// (0x00016ce6) main_cntbar_detail_cont_pane

0x23ea,	// (0x00010749) scroll_pane_cp032_ParamLimits

0x23ea,	// (0x00010749) scroll_pane_cp032

0x899b,	// (0x00016cfa) cntbar_detail_list_event_pane_ParamLimits

0x899b,	// (0x00016cfa) cntbar_detail_list_event_pane

0x8947,	// (0x00016ca6) cntbar_detail_list_shct_pane

0xa08f,	// (0x000183ee) aid_list_gen

0xeca0,	// (0x0001cfff) aid_scroll

0xeca9,	// (0x0001d008) aid_size_touch_scroll_bar

0x89ab,	// (0x00016d0a) aid_list_double

0x89b4,	// (0x00016d13) aid_list_single

0x89be,	// (0x00016d1d) aid_list_single_lg

0xecb2,	// (0x0001d011) aid_list_z_g_a_sm

0xecba,	// (0x0001d019) aid_list_z_g_d

0x89c7,	// (0x00016d26) aid_txt_z_prm

0x89d7,	// (0x00016d36) aid_txt_z_prm_cp01

0x89e5,	// (0x00016d44) aid_txt_z_sec

0x89f3,	// (0x00016d52) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89f3,	// (0x00016d52) main_cntbar_detail_cont_pane_g1

0x8a07,	// (0x00016d66) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a07,	// (0x00016d66) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0001e1e3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0001e1e3) main_cntbar_detail_cont_pane_g

0xecc2,	// (0x0001d021) main_cntbar_detail_cont_pane_t1

0xecd0,	// (0x0001d02f) main_cntbar_detail_cont_pane_t2

0xecde,	// (0x0001d03d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0001e1e8) main_cntbar_detail_cont_pane_t

0x8a17,	// (0x00016d76) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a17,	// (0x00016d76) cell_cntbar_detail_list_shct_pane

0xecec,	// (0x0001d04b) cntbar_detail_list_shct_pane_g1

0xecf5,	// (0x0001d054) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0001e1ef) cntbar_detail_list_shct_pane_g

0x8a29,	// (0x00016d88) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a29,	// (0x00016d88) cntbar_detail_list_event_pane_g1

0x8a35,	// (0x00016d94) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a35,	// (0x00016d94) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0001e1f4) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0001e1f4) cntbar_detail_list_event_pane_g

0x8aa3,	// (0x00016e02) cntbar_detail_list_event_pane_t1_ParamLimits

0x8aa3,	// (0x00016e02) cntbar_detail_list_event_pane_t1

0x8ab8,	// (0x00016e17) cntbar_detail_list_event_pane_t2_ParamLimits

0x8ab8,	// (0x00016e17) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0001e201) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0001e201) cntbar_detail_list_event_pane_t

0xc1a7,	// (0x0001a506) cell_cntbar_detail_list_shct_pane_g1

0x280a,	// (0x00010b69) navi_pane_mv_g3

0x934d,	// (0x000176ac) main_cntbar_detail_pane_ParamLimits

0x92dc,	// (0x0001763b) main_notif_wgt_pane

0xca5e,	// (0x0001adbd) aid_tch_main_mp4_pane_g4

0xcc5c,	// (0x0001afbb) popup_slider_window_cp02

0xea0a,	// (0x0001cd69) list_recal_day_event_pane

0x8905,	// (0x00016c64) cntbar_detail_btn_pane_ParamLimits

0x8905,	// (0x00016c64) cntbar_detail_btn_pane

0x891d,	// (0x00016c7c) cntbar_detail_btn_pane_cp01_ParamLimits

0x891d,	// (0x00016c7c) cntbar_detail_btn_pane_cp01

0x8947,	// (0x00016ca6) cntbar_detail_list_shct_pane_ParamLimits

0x8957,	// (0x00016cb6) cntbar_detail_pane_g1_ParamLimits

0x8957,	// (0x00016cb6) cntbar_detail_pane_g1

0x896b,	// (0x00016cca) cntbar_detail_pane_t1_ParamLimits

0x896b,	// (0x00016cca) cntbar_detail_pane_t1

0x8a41,	// (0x00016da0) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a41,	// (0x00016da0) cntbar_detail_list_event_pane_g3

0x8a59,	// (0x00016db8) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a59,	// (0x00016db8) cntbar_detail_list_event_pane_g4

0x8a71,	// (0x00016dd0) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a71,	// (0x00016dd0) cntbar_detail_list_event_pane_g5

0x8a89,	// (0x00016de8) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a89,	// (0x00016de8) cntbar_detail_list_event_pane_g6

0x8acd,	// (0x00016e2c) cntbar_detail_list_event_pane_t3_ParamLimits

0x8acd,	// (0x00016e2c) cntbar_detail_list_event_pane_t3

0x8adf,	// (0x00016e3e) popup_notif_wgt_window_ParamLimits

0x8adf,	// (0x00016e3e) popup_notif_wgt_window

0x8af8,	// (0x00016e57) popup_submenu_window_cp01_ParamLimits

0x8af8,	// (0x00016e57) popup_submenu_window_cp01

0xa7c7,	// (0x00018b26) bg_popup_window_pane_cp10

0xecfe,	// (0x0001d05d) listscroll_notif_wgt_pane

0xed10,	// (0x0001d06f) list_notif_wgt_window

0xed19,	// (0x0001d078) scroll_pane_cp033

0x8b0c,	// (0x00016e6b) list_notif_wgt_row_pane_ParamLimits

0x8b0c,	// (0x00016e6b) list_notif_wgt_row_pane

0xed22,	// (0x0001d081) aid_size_list_notif_wgt_del

0xed2f,	// (0x0001d08e) list_notif_wgt_row_pane_g1

0xed3b,	// (0x0001d09a) list_notif_wgt_row_pane_g2

0xed47,	// (0x0001d0a6) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0001e208) list_notif_wgt_row_pane_g

0xed54,	// (0x0001d0b3) list_notif_wgt_row_pane_t1

0xed69,	// (0x0001d0c8) list_notif_wgt_row_pane_t2

0xed7b,	// (0x0001d0da) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0001e20f) list_notif_wgt_row_pane_t

0xd228,	// (0x0001b587) list_recal_day_event_pane_g1

0xed8d,	// (0x0001d0ec) list_recal_day_event_pane_t1

0x92dc,	// (0x0001763b) bg_button_pane_cp045

0xed9c,	// (0x0001d0fb) cntbar_detail_btn_pane_t1

0xbc72,	// (0x00019fd1) main_callh_pane_ParamLimits

0xbc72,	// (0x00019fd1) main_callh_pane

0x92dc,	// (0x0001763b) main_coverflow0_pane

0x92dc,	// (0x0001763b) main_wgtman_pane

0x7aed,	// (0x00015e4c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7aed,	// (0x00015e4c) main_fs_bigclock_unlock_btn_pane

0xe582,	// (0x0001c8e1) bg_button_pane_cp16

0xe592,	// (0x0001c8f1) cell_tport_appsw_pane_g3

0x8b1c,	// (0x00016e7b) cf0_flow_pane_ParamLimits

0x8b1c,	// (0x00016e7b) cf0_flow_pane

0xedaa,	// (0x0001d109) listscroll_cf0_pane

0xedb5,	// (0x0001d114) main_cf0_pane_g1

0x8b31,	// (0x00016e90) main_cf0_pane_t1_ParamLimits

0x8b31,	// (0x00016e90) main_cf0_pane_t1

0x8b48,	// (0x00016ea7) main_cf0_pane_t2_ParamLimits

0x8b48,	// (0x00016ea7) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001e216) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001e216) main_cf0_pane_t

0xedbf,	// (0x0001d11e) scroll_pane_cp11

0x8b5f,	// (0x00016ebe) cf0_flow_pane_g1

0x8b6b,	// (0x00016eca) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001e21b) cf0_flow_pane_g

0x8b77,	// (0x00016ed6) cf0_flow_pane_t1

0x92dc,	// (0x0001763b) main_call6_pane

0x92dc,	// (0x0001763b) main_calllock_pane

0x8b89,	// (0x00016ee8) call6_btn_grp_pane_ParamLimits

0x8b89,	// (0x00016ee8) call6_btn_grp_pane

0x8ba3,	// (0x00016f02) call6_pane_g1_ParamLimits

0x8ba3,	// (0x00016f02) call6_pane_g1

0x8bb9,	// (0x00016f18) popup_call6_1st_window_ParamLimits

0x8bb9,	// (0x00016f18) popup_call6_1st_window

0x8bca,	// (0x00016f29) popup_call6_2nd_window_ParamLimits

0x8bca,	// (0x00016f29) popup_call6_2nd_window

0x8bdb,	// (0x00016f3a) cell_call6_btn_pane_ParamLimits

0x8bdb,	// (0x00016f3a) cell_call6_btn_pane

0xa7c7,	// (0x00018b26) bg_popup_call2_in_pane_cp03

0xedca,	// (0x0001d129) popup_call6_1st_window_g1

0xedd2,	// (0x0001d131) popup_call6_1st_window_g2

0xedda,	// (0x0001d139) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001e220) popup_call6_1st_window_g

0xede2,	// (0x0001d141) popup_call6_1st_window_t1

0xedf1,	// (0x0001d150) popup_call6_1st_window_t2

0xee01,	// (0x0001d160) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001e227) popup_call6_1st_window_t

0xa7c7,	// (0x00018b26) bg_popup_call2_in_pane_cp04

0xedca,	// (0x0001d129) popup_call6_2nd_window_g1

0xedd2,	// (0x0001d131) popup_call6_2nd_window_g2

0xedda,	// (0x0001d139) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001e220) popup_call6_2nd_window_g

0xede2,	// (0x0001d141) popup_call6_2nd_window_t1

0x92dc,	// (0x0001763b) bg_button_pane_cp15

0xee11,	// (0x0001d170) cell_call6_btn_pane_g1

0xee1a,	// (0x0001d179) cell_call6_btn_pane_t1

0x8bef,	// (0x00016f4e) listscroll_wgtman_pane_ParamLimits

0x8bef,	// (0x00016f4e) listscroll_wgtman_pane

0x8c12,	// (0x00016f71) wgtman_btn_pane_ParamLimits

0x8c12,	// (0x00016f71) wgtman_btn_pane

0xa68d,	// (0x000189ec) aid_scroll_copy1

0xee29,	// (0x0001d188) list_wgtman_pane

0x8c55,	// (0x00016fb4) wgtman_btn_pane_g1_ParamLimits

0x8c55,	// (0x00016fb4) wgtman_btn_pane_g1

0x8c81,	// (0x00016fe0) wgtman_btn_pane_t1_ParamLimits

0x8c81,	// (0x00016fe0) wgtman_btn_pane_t1

0xee33,	// (0x0001d192) wgtman_btn_pane_t2_ParamLimits

0xee33,	// (0x0001d192) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001e22e) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001e22e) wgtman_btn_pane_t

0x8cbe,	// (0x0001701d) listrow_wgtman_pane_ParamLimits

0x8cbe,	// (0x0001701d) listrow_wgtman_pane

0x8cd2,	// (0x00017031) listrow_wgtman_pane_g1

0x8cdf,	// (0x0001703e) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001e233) listrow_wgtman_pane_g

0x8cfd,	// (0x0001705c) listrow_wgtman_pane_t1

0x8d15,	// (0x00017074) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001e238) listrow_wgtman_pane_t

0x8d3b,	// (0x0001709a) wait_bar_pane_cp09

0xee4a,	// (0x0001d1a9) main_calllock_btn_pane

0xee54,	// (0x0001d1b3) main_calllock_pane_g1

0x92dc,	// (0x0001763b) bg_button_pane_cp17

0xee60,	// (0x0001d1bf) main_calllock_btn_pane_g1

0xee69,	// (0x0001d1c8) main_calllock_btn_pane_t1

0x92dc,	// (0x0001763b) main_dialer3_pane

0x92dc,	// (0x0001763b) main_fmrd2_pane

0xc1a7,	// (0x0001a506) main_fs_bigclock_unlock_btn_pane_g1

0xee80,	// (0x0001d1df) main_fs_bigclock_unlock_btn_pane_t1

0x8d4d,	// (0x000170ac) area_fmrd2_info_pane_ParamLimits

0x8d4d,	// (0x000170ac) area_fmrd2_info_pane

0x8d5e,	// (0x000170bd) area_fmrd2_visual_pane_ParamLimits

0x8d5e,	// (0x000170bd) area_fmrd2_visual_pane

0x8d6c,	// (0x000170cb) fmrd2_indi_pane_ParamLimits

0x8d6c,	// (0x000170cb) fmrd2_indi_pane

0x8d79,	// (0x000170d8) area_fmrd2_visual_pane_g1

0x8d81,	// (0x000170e0) area_fmrd2_visual_pane_t1

0x8d91,	// (0x000170f0) area_fmrd2_visual_pane_t2

0x8da1,	// (0x00017100) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001e242) area_fmrd2_visual_pane_t

0x8db1,	// (0x00017110) area_fmrd2_info_pane_g1

0x8db9,	// (0x00017118) area_fmrd2_info_pane_t1

0x8dc9,	// (0x00017128) area_fmrd2_info_pane_t2

0x8dd9,	// (0x00017138) area_fmrd2_info_pane_t3

0x8de9,	// (0x00017148) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001e249) area_fmrd2_info_pane_t

0x8df9,	// (0x00017158) fmrd2_indi_pane_t1

0x8e09,	// (0x00017168) fmrd2_indi_pane_t2

0x8e19,	// (0x00017178) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001e252) fmrd2_indi_pane_t

0xdfe8,	// (0x0001c347) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdfe8,	// (0x0001c347) list_single_fs_bigclock_indicator_pane_g5

0xe091,	// (0x0001c3f0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe091,	// (0x0001c3f0) list_single_fs_bigclock_indicator_pane_t5

0x84da,	// (0x00016839) aid_cell_bcale_month_pane_ParamLimits

0x84da,	// (0x00016839) aid_cell_bcale_month_pane

0x84f2,	// (0x00016851) bcale_month_pane_ParamLimits

0x84f2,	// (0x00016851) bcale_month_pane

0x8509,	// (0x00016868) bcale_preview_pane_ParamLimits

0x8509,	// (0x00016868) bcale_preview_pane

0xec18,	// (0x0001cf77) list_single_fs_bigclock_pane_t1_ParamLimits

0xec37,	// (0x0001cf96) list_single_fs_bigclock_pane_t2_ParamLimits

0xec37,	// (0x0001cf96) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0001e1d9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0001e1d9) list_single_fs_bigclock_pane_t

0xee78,	// (0x0001d1d7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001e23d) main_fs_bigclock_unlock_btn_pane_g

0x8e29,	// (0x00017188) aid_dia3_key_size_ParamLimits

0x8e29,	// (0x00017188) aid_dia3_key_size

0x8e38,	// (0x00017197) aid_dia3_listrow_size_ParamLimits

0x8e38,	// (0x00017197) aid_dia3_listrow_size

0x8e4d,	// (0x000171ac) dia3_keypad_fun_pane_ParamLimits

0x8e4d,	// (0x000171ac) dia3_keypad_fun_pane

0x8e69,	// (0x000171c8) dia3_keypad_num_pane_ParamLimits

0x8e69,	// (0x000171c8) dia3_keypad_num_pane

0x8e82,	// (0x000171e1) dia3_listscroll_pane_ParamLimits

0x8e82,	// (0x000171e1) dia3_listscroll_pane

0x8e95,	// (0x000171f4) dia3_numentry_pane_ParamLimits

0x8e95,	// (0x000171f4) dia3_numentry_pane

0xee8e,	// (0x0001d1ed) dia3_list_pane

0xee99,	// (0x0001d1f8) scroll_pane_cp12

0x92dc,	// (0x0001763b) bg_dia3_numentry_pane

0x8ea9,	// (0x00017208) dia3_numentry_pane_t1

0x8eb8,	// (0x00017217) cell_dia3_key_num_pane

0x8ec0,	// (0x0001721f) cell_dia3_key0_fun_pane_ParamLimits

0x8ec0,	// (0x0001721f) cell_dia3_key0_fun_pane

0x8ed4,	// (0x00017233) cell_dia3_key1_fun_pane_ParamLimits

0x8ed4,	// (0x00017233) cell_dia3_key1_fun_pane

0x8eec,	// (0x0001724b) dia3_listrow_pane

0xdce6,	// (0x0001c045) bg_dia3_numentry_pane_g1

0x92dc,	// (0x0001763b) bg_button_pane_cp21

0xeea4,	// (0x0001d203) cell_dia3_key_num_pane_t1

0xeeb2,	// (0x0001d211) cell_dia3_key_num_pane_t2

0xeec1,	// (0x0001d220) cell_dia3_key_num_pane_t3

0xeed0,	// (0x0001d22f) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001e259) cell_dia3_key_num_pane_t

0x92dc,	// (0x0001763b) bg_button_pane_cp19

0x8efe,	// (0x0001725d) cell_dia3_key0_fun_pane_g1

0x92dc,	// (0x0001763b) bg_button_pane_cp20

0x8f06,	// (0x00017265) cell_dia3_key1_fun_pane_g1

0x8f0e,	// (0x0001726d) area_left_week_number_pane

0x8f1a,	// (0x00017279) area_top_day_name_pane

0x8f26,	// (0x00017285) frame_month_view_pane

0x8f32,	// (0x00017291) grid_month_view_pane

0xeedf,	// (0x0001d23e) cell_top_day_name_pane_ParamLimits

0xeedf,	// (0x0001d23e) cell_top_day_name_pane

0x8f3e,	// (0x0001729d) cell_area_left_week_number_pane_ParamLimits

0x8f3e,	// (0x0001729d) cell_area_left_week_number_pane

0x8f54,	// (0x000172b3) cell_month_view_pane_ParamLimits

0x8f54,	// (0x000172b3) cell_month_view_pane

0xeefb,	// (0x0001d25a) frm_month_g1

0x8f75,	// (0x000172d4) frm_month_g2

0x8f7f,	// (0x000172de) frm_month_g3

0x8f89,	// (0x000172e8) frm_month_g4

0x8f93,	// (0x000172f2) frm_month_g5

0x8f9d,	// (0x000172fc) frm_month_g6

0x8fa9,	// (0x00017308) frm_month_g7

0xef04,	// (0x0001d263) frm_month_g8

0xef0d,	// (0x0001d26c) frm_month_g9

0xef16,	// (0x0001d275) frm_month_g10

0xef1f,	// (0x0001d27e) frm_month_g11

0xef28,	// (0x0001d287) frm_month_g12

0xef31,	// (0x0001d290) frm_month_g13

0xef3c,	// (0x0001d29b) frm_month_g14

0xef47,	// (0x0001d2a6) frm_month_g15

0xef52,	// (0x0001d2b1) frm_month_g16

0x000f,

0xff03,	// (0x0001e262) frm_month_g

0x8fb5,	// (0x00017314) cell_top_day_name_pane_t1

0x8fc4,	// (0x00017323) cell_area_left_week_number_pane_g1

0x8fcc,	// (0x0001732b) cell_area_left_week_number_pane_t1

0xc1a7,	// (0x0001a506) cell_month_view_pane_g1

0x8fdb,	// (0x0001733a) cell_month_view_pane_t1

0x92dc,	// (0x0001763b) main_fps_pane

0xe2cf,	// (0x0001c62e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe2cf,	// (0x0001c62e) cmail_ddmenu_btn02_pane_cp1

0xe2eb,	// (0x0001c64a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe2eb,	// (0x0001c64a) cmail_ddmenu_btn02_pane_cp2

0x87b1,	// (0x00016b10) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87b1,	// (0x00016b10) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0001e18c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0001e18c) cmail_ddmenu_btn02_pane_g

0x87d2,	// (0x00016b31) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87d2,	// (0x00016b31) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0001e191) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0001e191) cmail_ddmenu_btn02_pane_t

0x8fea,	// (0x00017349) fps_text_pane_ParamLimits

0x8fea,	// (0x00017349) fps_text_pane

0x9001,	// (0x00017360) main_fps_pane_g1_ParamLimits

0x9001,	// (0x00017360) main_fps_pane_g1

0x9019,	// (0x00017378) wait_bar_pane_cp010_ParamLimits

0x9019,	// (0x00017378) wait_bar_pane_cp010

0x902c,	// (0x0001738b) fps_text_pane_t1_ParamLimits

0x902c,	// (0x0001738b) fps_text_pane_t1

0xef74,	// (0x0001d2d3) cam4_image_uncrop_pane_g1

0xef7d,	// (0x0001d2dc) cam4_image_uncrop_pane_g2

0x5c8a,	// (0x00013fe9) cam4_image_uncrop_pane_g3

0x5c93,	// (0x00013ff2) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x0001dc58) cam4_image_uncrop_pane_g

0x8eec,	// (0x0001724b) dia3_listrow_pane_ParamLimits

0x92dc,	// (0x0001763b) main_phob2_pane

0x82ed,	// (0x0001664c) cell_tport_appsw_pane_cp02_ParamLimits

0x82ed,	// (0x0001664c) cell_tport_appsw_pane_cp02

0x8301,	// (0x00016660) cell_tport_appsw_pane_cp03_ParamLimits

0x8301,	// (0x00016660) cell_tport_appsw_pane_cp03

0x92dc,	// (0x0001763b) phob2_contact_card_pane

0x92dc,	// (0x0001763b) phob2_listscroll_pane

0xefa2,	// (0x0001d301) phob2_list_pane

0xefaa,	// (0x0001d309) scroll_pane_cp034

0x9044,	// (0x000173a3) phob2_cc_data_pane_ParamLimits

0x9044,	// (0x000173a3) phob2_cc_data_pane

0x9065,	// (0x000173c4) phob2_cc_listscroll_pane_ParamLimits

0x9065,	// (0x000173c4) phob2_cc_listscroll_pane

0x9087,	// (0x000173e6) list_double_large_graphic_phob2_pane_ParamLimits

0x9087,	// (0x000173e6) list_double_large_graphic_phob2_pane

0x909c,	// (0x000173fb) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x909c,	// (0x000173fb) list_double_large_graphic_phob2_pane_g1

0x90a9,	// (0x00017408) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x90a9,	// (0x00017408) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001e283) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001e283) list_double_large_graphic_phob2_pane_g

0x90b5,	// (0x00017414) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x90b5,	// (0x00017414) list_double_large_graphic_phob2_pane_t1

0x90ca,	// (0x00017429) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x90ca,	// (0x00017429) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001e288) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001e288) list_double_large_graphic_phob2_pane_t

0x92dc,	// (0x0001763b) list_highlight_pane_cp024

0xefb2,	// (0x0001d311) phob2_cc_button_pane

0x90dc,	// (0x0001743b) phob2_cc_data_pane_g1_ParamLimits

0x90dc,	// (0x0001743b) phob2_cc_data_pane_g1

0x90f2,	// (0x00017451) phob2_cc_data_pane_g2_ParamLimits

0x90f2,	// (0x00017451) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001e28d) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001e28d) phob2_cc_data_pane_g

0x9106,	// (0x00017465) phob2_cc_data_pane_t1_ParamLimits

0x9106,	// (0x00017465) phob2_cc_data_pane_t1

0x9120,	// (0x0001747f) phob2_cc_data_pane_t2_ParamLimits

0x9120,	// (0x0001747f) phob2_cc_data_pane_t2

0x913a,	// (0x00017499) phob2_cc_data_pane_t3_ParamLimits

0x913a,	// (0x00017499) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001e292) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001e292) phob2_cc_data_pane_t

0xefba,	// (0x0001d319) phob2_cc_list_pane_ParamLimits

0xefba,	// (0x0001d319) phob2_cc_list_pane

0xd2d3,	// (0x0001b632) scroll_pane_cp035_ParamLimits

0xd2d3,	// (0x0001b632) scroll_pane_cp035

0x934d,	// (0x000176ac) bg_button_pane_cp033

0xefc6,	// (0x0001d325) phob2_cc_button_pane_g1

0xefd2,	// (0x0001d331) phob2_cc_button_pane_t1

0xefe7,	// (0x0001d346) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001e299) phob2_cc_button_pane_t

0x9154,	// (0x000174b3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9154,	// (0x000174b3) list_double_large_graphic_phob2_cc_pane

0x9169,	// (0x000174c8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9169,	// (0x000174c8) list_double_large_graphic_phob2_cc_pane_g1

0x9175,	// (0x000174d4) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9175,	// (0x000174d4) list_double_large_graphic_phob2_cc_pane_g2

0x9181,	// (0x000174e0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9181,	// (0x000174e0) list_double_large_graphic_phob2_cc_pane_g3

0x918d,	// (0x000174ec) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x918d,	// (0x000174ec) list_double_large_graphic_phob2_cc_pane_g4

0x9199,	// (0x000174f8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9199,	// (0x000174f8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001e29e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001e29e) list_double_large_graphic_phob2_cc_pane_g

0x91a5,	// (0x00017504) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x91a5,	// (0x00017504) list_double_large_graphic_phob2_cc_pane_t1

0x91ce,	// (0x0001752d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x91ce,	// (0x0001752d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001e2a9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001e2a9) list_double_large_graphic_phob2_cc_pane_t

0xeff9,	// (0x0001d358) list_highlight_pane_cp025_ParamLimits

0xeff9,	// (0x0001d358) list_highlight_pane_cp025

0x934d,	// (0x000176ac) bg_button_pane_cp033_ParamLimits

0xefc6,	// (0x0001d325) phob2_cc_button_pane_g1_ParamLimits

0xefd2,	// (0x0001d331) phob2_cc_button_pane_t1_ParamLimits

0xefe7,	// (0x0001d346) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001e299) phob2_cc_button_pane_t_ParamLimits

0x0901,	// (0x0000ec60) popup_wgtman_window

0xd077,	// (0x0001b3d6) scroll_pane_cp038

0x8c37,	// (0x00016f96) wgtman_btn_pane_cp_01_ParamLimits

0x8c37,	// (0x00016f96) wgtman_btn_pane_cp_01

0xf007,	// (0x0001d366) wgtman_content_pane

0xf010,	// (0x0001d36f) wgtman_heading_pane

0x92dc,	// (0x0001763b) bg_heading_pane_cp02

0xf019,	// (0x0001d378) wgtman_heading_pane_g1

0xf021,	// (0x0001d380) wgtman_heading_pane_t1

0xf02f,	// (0x0001d38e) scroll_pane_cp036

0xf037,	// (0x0001d396) wgtman_list_pane

0xef88,	// (0x0001d2e7) wgtman_list_pane_t1_ParamLimits

0xef88,	// (0x0001d2e7) wgtman_list_pane_t1

0xce04,	// (0x0001b163) cam4_grid_pane

0x6a36,	// (0x00014d95) bg_button_pane_cp015_ParamLimits

0x6a4a,	// (0x00014da9) bg_button_pane_cp016_ParamLimits

0x6a5d,	// (0x00014dbc) bg_button_pane_cp017_ParamLimits

0x6ab5,	// (0x00014e14) popup_vitu2_query_window_g3_ParamLimits

0x6ab5,	// (0x00014e14) popup_vitu2_query_window_g3

0x6b72,	// (0x00014ed1) popup_vitu2_query_window_t6_ParamLimits

0x6b72,	// (0x00014ed1) popup_vitu2_query_window_t6

0x6b9d,	// (0x00014efc) popup_vitu2_query_window_t7_ParamLimits

0x6b9d,	// (0x00014efc) popup_vitu2_query_window_t7

0xef74,	// (0x0001d2d3) cam4_grid_pane_g1

0xef7d,	// (0x0001d2dc) cam4_grid_pane_g2

0xf03f,	// (0x0001d39e) cam4_grid_pane_g3

0xf048,	// (0x0001d3a7) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001e2ae) cam4_grid_pane_g

0x1611,	// (0x0000f970) aid_placing_vt_slider_lsc_ParamLimits

0x18fe,	// (0x0000fc5d) vidtel_button_pane_ParamLimits

0x18fe,	// (0x0000fc5d) vidtel_button_pane

0xf053,	// (0x0001d3b2) bg_button_pane_cp034

0x91f7,	// (0x00017556) vidtel_button_pane_g1

0xf05d,	// (0x0001d3bc) vidtel_button_pane_t1

0xd1b6,	// (0x0001b515) aid_size_vtel_slider_touch

0xd2d3,	// (0x0001b632) scroll_pane_cp039

0xdd24,	// (0x0001c083) ncim_query_button_pane_cp01_ParamLimits

0xdd43,	// (0x0001c0a2) ncimui_query_pane_g1_ParamLimits

0x934d,	// (0x000176ac) input_focus_pane_cp012_ParamLimits

0xdd68,	// (0x0001c0c7) ncim_query_entry_pane_t1_ParamLimits

0xd2d3,	// (0x0001b632) scroll_pane_cp039_ParamLimits

0x277c,	// (0x00010adb) navi_pane_bcale_mc_g1

0x2784,	// (0x00010ae3) navi_pane_bcale_mc_t1

0xe336,	// (0x0001c695) main_sp_fs_email_pane_g1

0xe33e,	// (0x0001c69d) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x0001e04f) main_sp_fs_email_pane_g

0xe8c1,	// (0x0001cc20) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8c1,	// (0x0001cc20) list_single_cale_mrui_row_pane_g3

0x87fa,	// (0x00016b59) list_single_recal_day_pane_g5_event_pane

0xea86,	// (0x0001cde5) list_single_recal_day_pane_g7

0xf06b,	// (0x0001d3ca) list_recal_day_event_pane_cp01

0xf074,	// (0x0001d3d3) list_recal_vselct_arw_lo_pane_cp01

0xf07c,	// (0x0001d3db) list_recal_vselct_arw_up_pane_cp01

0xf084,	// (0x0001d3e3) list_recal_vselct_pane_cp01

0xd228,	// (0x0001b587) list_recal_day_event_pane_cp01_g1

0xf08e,	// (0x0001d3ed) list_recal_day_event_pane_cp01_t1

0xea8e,	// (0x0001cded) list_single_recal_day_pane_t1_ParamLimits

0xeaa0,	// (0x0001cdff) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0001e1a1) list_single_recal_day_pane_t_ParamLimits

0x9aa9,	// (0x00017e08) bg_notes_pane_ParamLimits

0x9ab7,	// (0x00017e16) list_notes_pane_ParamLimits

0x0c1a,	// (0x0000ef79) scroll_pane_cp06_ParamLimits

0x9af3,	// (0x00017e52) main_notes_pane_ParamLimits

0x92dc,	// (0x0001763b) main_welc_pane

0x91ff,	// (0x0001755e) main_welc_body_pane_ParamLimits

0x91ff,	// (0x0001755e) main_welc_body_pane

0x921e,	// (0x0001757d) main_welc_opti_pane_ParamLimits

0x921e,	// (0x0001757d) main_welc_opti_pane

0x9265,	// (0x000175c4) main_welc_pane_t1_ParamLimits

0x9265,	// (0x000175c4) main_welc_pane_t1

0xef5d,	// (0x0001d2bc) main_welc_body_row_pane_ParamLimits

0xef5d,	// (0x0001d2bc) main_welc_body_row_pane

0x9287,	// (0x000175e6) main_welc_opti_row_pane_ParamLimits

0x9287,	// (0x000175e6) main_welc_opti_row_pane

0xf09c,	// (0x0001d3fb) main_welc_opti_row_pane_g1

0xf0a4,	// (0x0001d403) main_welc_opti_row_pane_t1

0xf0b3,	// (0x0001d412) main_welc_body_row_pane_t1

0xed08,	// (0x0001d067) popup_notif_wgt_heading_pane

0xed22,	// (0x0001d081) aid_size_list_notif_wgt_del_ParamLimits

0xed2f,	// (0x0001d08e) list_notif_wgt_row_pane_g1_ParamLimits

0xed3b,	// (0x0001d09a) list_notif_wgt_row_pane_g2_ParamLimits

0xed47,	// (0x0001d0a6) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0001e208) list_notif_wgt_row_pane_g_ParamLimits

0xed54,	// (0x0001d0b3) list_notif_wgt_row_pane_t1_ParamLimits

0xed69,	// (0x0001d0c8) list_notif_wgt_row_pane_t2_ParamLimits

0xed7b,	// (0x0001d0da) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0001e20f) list_notif_wgt_row_pane_t_ParamLimits

0x8cd2,	// (0x00017031) listrow_wgtman_pane_g1_ParamLimits

0x8cdf,	// (0x0001703e) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001e233) listrow_wgtman_pane_g_ParamLimits

0x8cfd,	// (0x0001705c) listrow_wgtman_pane_t1_ParamLimits

0x8d15,	// (0x00017074) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001e238) listrow_wgtman_pane_t_ParamLimits

0x8d3b,	// (0x0001709a) wait_bar_pane_cp09_ParamLimits

0x92dc,	// (0x0001763b) bg_popup_heading_pane_cp02

0xf0c2,	// (0x0001d421) popup_notif_wgt_heading_pane_g1

0xf0ca,	// (0x0001d429) popup_notif_wgt_heading_pane_t1

0x92dc,	// (0x0001763b) main_vids_pane

0x92dc,	// (0x0001763b) vids_listscroll_pane

0x9297,	// (0x000175f6) scroll_pane_cp040

0x92dc,	// (0x0001763b) vids_list_pane

0x92a2,	// (0x00017601) vids_list_double_pane_ParamLimits

0x92a2,	// (0x00017601) vids_list_double_pane

0x92b3,	// (0x00017612) vids_list_double_pane_g1

0x92bc,	// (0x0001761b) vids_list_double_pane_t1

0x92cc,	// (0x0001762b) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001e2bc) vids_list_double_pane_t

0x934d,	// (0x000176ac) main_ncimui_pane_ParamLimits

0x7687,	// (0x000159e6) main_ncimui_pane_g1_ParamLimits

0x7693,	// (0x000159f2) main_ncimui_pane_g2_ParamLimits

0x7693,	// (0x000159f2) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x0001df54) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x0001df54) main_ncimui_pane_g

0x923d,	// (0x0001759c) main_welc_pane_g1_ParamLimits

0x923d,	// (0x0001759c) main_welc_pane_g1

0x9252,	// (0x000175b1) main_welc_pane_g2_ParamLimits

0x9252,	// (0x000175b1) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001e2b7) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001e2b7) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal

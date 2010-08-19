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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0005996a };

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
0x6844,	// (0x000601ae) Screen

0x684e,	// (0x000601b8) application_window

0x68aa,	// (0x00060214) area_bottom_pane_ParamLimits

0x68aa,	// (0x00060214) area_bottom_pane

0x68e6,	// (0x00060250) area_top_pane_ParamLimits

0x68e6,	// (0x00060250) area_top_pane

0x6942,	// (0x000602ac) call_video_uplink_pane_ParamLimits

0x6942,	// (0x000602ac) call_video_uplink_pane

0x697d,	// (0x000602e7) main_pane_ParamLimits

0x697d,	// (0x000602e7) main_pane

0x1f67,	// (0x0005b8d1) context_pane

0xa052,	// (0x000639bc) navi_pane

0xa06c,	// (0x000639d6) popup_cale_events_window_ParamLimits

0xa06c,	// (0x000639d6) popup_cale_events_window

0x1f7a,	// (0x0005b8e4) popup_mup_playback_window

0xa083,	// (0x000639ed) signal_pane

0x742a,	// (0x00060d94) main_browser_pane

0x7ddf,	// (0x00061749) main_burst_pane

0x6aa6,	// (0x00060410) main_calc_pane

0x1f51,	// (0x0005b8bb) main_cale_day_pane

0x7750,	// (0x000610ba) main_cale_month_pane

0x1f51,	// (0x0005b8bb) main_cale_week_pane

0x7ddf,	// (0x00061749) main_call_pane

0x6f73,	// (0x000608dd) main_call_poc_pane

0x7ddf,	// (0x00061749) main_camera_pane

0x7ddf,	// (0x00061749) main_chi_dic_pane

0xe90c,	// (0x00068276) main_clock_pane

0x6f73,	// (0x000608dd) main_fmradio_pane

0x7ddf,	// (0x00061749) main_graph_messa_pane

0x6f73,	// (0x000608dd) main_help_pane

0x742a,	// (0x00060d94) main_im_pane

0x71ce,	// (0x00060b38) main_image_pane_ParamLimits

0x71ce,	// (0x00060b38) main_image_pane

0x6f73,	// (0x000608dd) main_location2_pane

0x7ddf,	// (0x00061749) main_location_pane

0x71ce,	// (0x00060b38) main_messa_pane

0x6f73,	// (0x000608dd) main_mp2_pane

0x7ddf,	// (0x00061749) main_mp_pane

0x6f73,	// (0x000608dd) main_msg_pane

0x6f73,	// (0x000608dd) main_mup_eq_pane

0x6f73,	// (0x000608dd) main_mup_pane

0x742a,	// (0x00060d94) main_notes_pane

0x6f73,	// (0x000608dd) main_pec_pane

0x6f73,	// (0x000608dd) main_phob_pane

0x6f73,	// (0x000608dd) main_pinb_pane

0x6f73,	// (0x000608dd) main_postcard_pane

0x6f73,	// (0x000608dd) main_qdial_pane

0x7ddf,	// (0x00061749) main_skin_pane

0x6f73,	// (0x000608dd) main_smil2_pane

0x7ddf,	// (0x00061749) main_smil_pane

0x7ddf,	// (0x00061749) main_video_pane

0x7ddf,	// (0x00061749) main_video_tele_pane

0x71ce,	// (0x00060b38) main_viewer_pane_ParamLimits

0x71ce,	// (0x00060b38) main_viewer_pane

0x7ddf,	// (0x00061749) main_vorec_pane

0x9f50,	// (0x000638ba) popup_blid_sat_info_window_ParamLimits

0x9f50,	// (0x000638ba) popup_blid_sat_info_window

0x9f6c,	// (0x000638d6) popup_dyc_status_message_window_ParamLimits

0x9f6c,	// (0x000638d6) popup_dyc_status_message_window

0x9f78,	// (0x000638e2) popup_grid_large_graphic_window_ParamLimits

0x9f78,	// (0x000638e2) popup_grid_large_graphic_window

0x9fe9,	// (0x00063953) popup_loc_request_window_ParamLimits

0x9fe9,	// (0x00063953) popup_loc_request_window

0xa02c,	// (0x00063996) popup_wml_address_window_ParamLimits

0xa02c,	// (0x00063996) popup_wml_address_window

0x9e1a,	// (0x00063784) call_muted_g1

0x9e2a,	// (0x00063794) popup_call_audio_conf_window_ParamLimits

0x9e2a,	// (0x00063794) popup_call_audio_conf_window

0x9e3d,	// (0x000637a7) popup_call_audio_first_window_ParamLimits

0x9e3d,	// (0x000637a7) popup_call_audio_first_window

0x9e71,	// (0x000637db) popup_call_audio_in_window_ParamLimits

0x9e71,	// (0x000637db) popup_call_audio_in_window

0x9e8d,	// (0x000637f7) popup_call_audio_out_window_ParamLimits

0x9e8d,	// (0x000637f7) popup_call_audio_out_window

0x9ea9,	// (0x00063813) popup_call_audio_second_window_ParamLimits

0x9ea9,	// (0x00063813) popup_call_audio_second_window

0x9ed1,	// (0x0006383b) popup_call_audio_wait_window_ParamLimits

0x9ed1,	// (0x0006383b) popup_call_audio_wait_window

0x9ef0,	// (0x0006385a) popup_number_entry_window_ParamLimits

0x9ef0,	// (0x0006385a) popup_number_entry_window

0x6b09,	// (0x00060473) bg_popup_call_pane_cp05_ParamLimits

0x6b09,	// (0x00060473) bg_popup_call_pane_cp05

0x6b29,	// (0x00060493) popup_number_entry_window_t1

0x6b3c,	// (0x000604a6) popup_number_entry_window_t2

0x6b4e,	// (0x000604b8) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x000689ef) popup_number_entry_window_t

0x6b95,	// (0x000604ff) text_title_cp2

0x6ba8,	// (0x00060512) bg_popup_call_pane_cp_ParamLimits

0x6ba8,	// (0x00060512) bg_popup_call_pane_cp

0x6bb6,	// (0x00060520) call_thumbnail_pane

0x6bbe,	// (0x00060528) popup_call_audio_in_window_g1_ParamLimits

0x6bbe,	// (0x00060528) popup_call_audio_in_window_g1

0x6bca,	// (0x00060534) popup_call_audio_in_window_g2_ParamLimits

0x6bca,	// (0x00060534) popup_call_audio_in_window_g2

0x6bd6,	// (0x00060540) popup_call_audio_in_window_g3_ParamLimits

0x6bd6,	// (0x00060540) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x000689f8) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x000689f8) popup_call_audio_in_window_g

0x6be2,	// (0x0006054c) popup_call_audio_in_window_t1_ParamLimits

0x6be2,	// (0x0006054c) popup_call_audio_in_window_t1

0x6bfd,	// (0x00060567) popup_call_audio_in_window_t2_ParamLimits

0x6bfd,	// (0x00060567) popup_call_audio_in_window_t2

0x6c18,	// (0x00060582) popup_call_audio_in_window_t3_ParamLimits

0x6c18,	// (0x00060582) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x000689ff) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x000689ff) popup_call_audio_in_window_t

0x6ba8,	// (0x00060512) bg_popup_call_pane_cp01_ParamLimits

0x6ba8,	// (0x00060512) bg_popup_call_pane_cp01

0x6bb6,	// (0x00060520) call_thumbnail_pane_cp02

0x6c2b,	// (0x00060595) call_type_pane_cp022

0x6c33,	// (0x0006059d) popup_call_audio_out_window_g1_ParamLimits

0x6c33,	// (0x0006059d) popup_call_audio_out_window_g1

0x6c45,	// (0x000605af) popup_call_audio_out_window_g2_ParamLimits

0x6c45,	// (0x000605af) popup_call_audio_out_window_g2

0x6c51,	// (0x000605bb) popup_call_audio_out_window_g3_ParamLimits

0x6c51,	// (0x000605bb) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00068a06) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00068a06) popup_call_audio_out_window_g

0x6c63,	// (0x000605cd) popup_call_audio_out_window_t1_ParamLimits

0x6c63,	// (0x000605cd) popup_call_audio_out_window_t1

0x6c7b,	// (0x000605e5) popup_call_audio_out_window_t2_ParamLimits

0x6c7b,	// (0x000605e5) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00068a0d) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00068a0d) popup_call_audio_out_window_t

0x6c90,	// (0x000605fa) bg_popup_call_pane_ParamLimits

0x6c90,	// (0x000605fa) bg_popup_call_pane

0x6d14,	// (0x0006067e) call_thumbnail_pane_cp_ParamLimits

0x6d14,	// (0x0006067e) call_thumbnail_pane_cp

0x6d38,	// (0x000606a2) call_type_pane_cp01_ParamLimits

0x6d38,	// (0x000606a2) call_type_pane_cp01

0x6d7c,	// (0x000606e6) popup_call_audio_first_window_g1_ParamLimits

0x6d7c,	// (0x000606e6) popup_call_audio_first_window_g1

0x6dc8,	// (0x00060732) popup_call_audio_first_window_g2_ParamLimits

0x6dc8,	// (0x00060732) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00068a12) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00068a12) popup_call_audio_first_window_g

0x6e0c,	// (0x00060776) popup_call_audio_first_window_t1_ParamLimits

0x6e0c,	// (0x00060776) popup_call_audio_first_window_t1

0x6eb8,	// (0x00060822) popup_call_audio_first_window_t4_ParamLimits

0x6eb8,	// (0x00060822) popup_call_audio_first_window_t4

0x6f44,	// (0x000608ae) popup_call_audio_first_window_t5_ParamLimits

0x6f44,	// (0x000608ae) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00068a17) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00068a17) popup_call_audio_first_window_t

0x6f73,	// (0x000608dd) bg_popup_call_pane_cp02

0x6f7d,	// (0x000608e7) call_type_pane_cp023

0x6f85,	// (0x000608ef) popup_call_audio_wait_window_g1

0x6f8d,	// (0x000608f7) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00068a1e) popup_call_audio_wait_window_g

0x6f95,	// (0x000608ff) popup_call_audio_wait_window_t3

0x6fa3,	// (0x0006090d) bg_popup_call_pane_cp03_ParamLimits

0x6fa3,	// (0x0006090d) bg_popup_call_pane_cp03

0x7003,	// (0x0006096d) call_thumbnail_pane_cp011_ParamLimits

0x7003,	// (0x0006096d) call_thumbnail_pane_cp011

0x700f,	// (0x00060979) call_type_pane_cp034_ParamLimits

0x700f,	// (0x00060979) call_type_pane_cp034

0x704b,	// (0x000609b5) popup_call_audio_second_window_g1_ParamLimits

0x704b,	// (0x000609b5) popup_call_audio_second_window_g1

0x7087,	// (0x000609f1) popup_call_audio_second_window_g2_ParamLimits

0x7087,	// (0x000609f1) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00068a23) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00068a23) popup_call_audio_second_window_g

0x70c3,	// (0x00060a2d) popup_call_audio_second_window_t1_ParamLimits

0x70c3,	// (0x00060a2d) popup_call_audio_second_window_t1

0x7144,	// (0x00060aae) popup_call_audio_second_window_t2_ParamLimits

0x7144,	// (0x00060aae) popup_call_audio_second_window_t2

0x717a,	// (0x00060ae4) popup_call_audio_second_window_t3_ParamLimits

0x717a,	// (0x00060ae4) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00068a28) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00068a28) popup_call_audio_second_window_t

0x6f73,	// (0x000608dd) bg_popup_call_pane_cp04

0x71b0,	// (0x00060b1a) list_conf_pane

0x71b8,	// (0x00060b22) popup_call_audio_conf_window_t1

0x71c6,	// (0x00060b30) call_thumbnail_pane_g1

0x71ce,	// (0x00060b38) bg_pinb_pane_ParamLimits

0x71ce,	// (0x00060b38) bg_pinb_pane

0x71dc,	// (0x00060b46) find_pinb_pane

0x71ce,	// (0x00060b38) listscroll_pinb_pane_ParamLimits

0x71ce,	// (0x00060b38) listscroll_pinb_pane

0x71e6,	// (0x00060b50) pinb_bg_pane_g1

0x71e6,	// (0x00060b50) pinb_bg_pane_g2

0x71e6,	// (0x00060b50) pinb_bg_pane_g3

0x71e6,	// (0x00060b50) pinb_bg_pane_g4

0x71e6,	// (0x00060b50) pinb_bg_pane_g5

0x71e6,	// (0x00060b50) pinb_bg_pane_g6

0x71e6,	// (0x00060b50) pinb_bg_pane_g7

0x71e6,	// (0x00060b50) pinb_bg_pane_g8

0x71e6,	// (0x00060b50) pinb_bg_pane_g9

0x71e6,	// (0x00060b50) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00068a2f) pinb_bg_pane_g

0x71fb,	// (0x00060b65) grid_pinb_pane

0x6858,	// (0x000601c2) list_pinb_pane

0x7205,	// (0x00060b6f) scroll_pane_cp01_ParamLimits

0x7205,	// (0x00060b6f) scroll_pane_cp01

0x7212,	// (0x00060b7c) find_pinb_pane_g1_ParamLimits

0x7212,	// (0x00060b7c) find_pinb_pane_g1

0x722a,	// (0x00060b94) find_pinb_pane_t1

0x723c,	// (0x00060ba6) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00068a49) find_pinb_pane_t

0x7251,	// (0x00060bbb) input_focus_pane_cp01_ParamLimits

0x7251,	// (0x00060bbb) input_focus_pane_cp01

0x725d,	// (0x00060bc7) cell_pinb_pane_ParamLimits

0x725d,	// (0x00060bc7) cell_pinb_pane

0x7267,	// (0x00060bd1) cell_pinb_pane_g1_ParamLimits

0x7267,	// (0x00060bd1) cell_pinb_pane_g1

0x7275,	// (0x00060bdf) cell_pinb_pane_g2_ParamLimits

0x7275,	// (0x00060bdf) cell_pinb_pane_g2

0x7275,	// (0x00060bdf) cell_pinb_pane_g3_ParamLimits

0x7275,	// (0x00060bdf) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00068a4e) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00068a4e) cell_pinb_pane_g

0x6f73,	// (0x000608dd) grid_highlight_pane_cp01

0x6858,	// (0x000601c2) list_pinb_item_pane_ParamLimits

0x6858,	// (0x000601c2) list_pinb_item_pane

0x6858,	// (0x000601c2) list_highlight_pane_cp02

0x7283,	// (0x00060bed) list_pinb_item_pane_g1_ParamLimits

0x7283,	// (0x00060bed) list_pinb_item_pane_g1

0x7275,	// (0x00060bdf) list_pinb_item_pane_g2_ParamLimits

0x7275,	// (0x00060bdf) list_pinb_item_pane_g2

0x7267,	// (0x00060bd1) list_pinb_item_pane_g3_ParamLimits

0x7267,	// (0x00060bd1) list_pinb_item_pane_g3

0x7275,	// (0x00060bdf) list_pinb_item_pane_g4_ParamLimits

0x7275,	// (0x00060bdf) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00068a55) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00068a55) list_pinb_item_pane_g

0x7291,	// (0x00060bfb) list_pinb_item_pane_t1_ParamLimits

0x7291,	// (0x00060bfb) list_pinb_item_pane_t1

0x72bf,	// (0x00060c29) calc_display_pane

0x72d7,	// (0x00060c41) calc_paper_pane

0x72f3,	// (0x00060c5d) grid_calc_pane

0x6f73,	// (0x000608dd) bg_list_pane_cp01

0x7313,	// (0x00060c7d) clock_g1

0x731b,	// (0x00060c85) clock_g2

0x0001,

0xf0f4,	// (0x00068a5e) clock_g

0x7323,	// (0x00060c8d) clock_t1_ParamLimits

0x7323,	// (0x00060c8d) clock_t1

0x7338,	// (0x00060ca2) clock_t2_ParamLimits

0x7338,	// (0x00060ca2) clock_t2

0x734a,	// (0x00060cb4) clock_t3_ParamLimits

0x734a,	// (0x00060cb4) clock_t3

0x735c,	// (0x00060cc6) clock_t4_ParamLimits

0x735c,	// (0x00060cc6) clock_t4

0x736e,	// (0x00060cd8) clock_t5_ParamLimits

0x736e,	// (0x00060cd8) clock_t5

0x7383,	// (0x00060ced) clock_t6_ParamLimits

0x7383,	// (0x00060ced) clock_t6

0x7395,	// (0x00060cff) clock_t7_ParamLimits

0x7395,	// (0x00060cff) clock_t7

0x73a7,	// (0x00060d11) clock_t8_ParamLimits

0x73a7,	// (0x00060d11) clock_t8

0x73b9,	// (0x00060d23) clock_t9_ParamLimits

0x73b9,	// (0x00060d23) clock_t9

0x0008,

0xf0f9,	// (0x00068a63) clock_t_ParamLimits

0xf0f9,	// (0x00068a63) clock_t

0x73cb,	// (0x00060d35) popup_clock_analogue_window_cp02

0x73cb,	// (0x00060d35) popup_clock_digital_window_cp01

0x6f73,	// (0x000608dd) listscroll_help_pane

0x6f73,	// (0x000608dd) phob_pre_status_pane

0x73d3,	// (0x00060d3d) grid_qdial_pane

0x71ce,	// (0x00060b38) listscroll_mce_pane

0x71ce,	// (0x00060b38) bg_notes_pane

0x73dd,	// (0x00060d47) list_notes_pane

0x73eb,	// (0x00060d55) scroll_pane_cp06

0x73f8,	// (0x00060d62) bg_calc_paper_pane

0x7410,	// (0x00060d7a) list_calc_pane

0x742a,	// (0x00060d94) bg_calc_display_pane

0x7436,	// (0x00060da0) calc_display_pane_t1

0x744b,	// (0x00060db5) calc_display_pane_t2

0x7460,	// (0x00060dca) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00068a76) calc_display_pane_t

0x7472,	// (0x00060ddc) cell_calc_pane_ParamLimits

0x7472,	// (0x00060ddc) cell_calc_pane

0x7499,	// (0x00060e03) bg_calc_paper_pane_g1

0x74a5,	// (0x00060e0f) bg_calc_paper_pane_g2

0x74b1,	// (0x00060e1b) bg_calc_paper_pane_g3

0x74bd,	// (0x00060e27) bg_calc_paper_pane_g4

0x74c9,	// (0x00060e33) bg_calc_paper_pane_g5

0x74d5,	// (0x00060e3f) bg_calc_paper_pane_g6

0x74e4,	// (0x00060e4e) bg_calc_paper_pane_g7

0x74f3,	// (0x00060e5d) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00068a7d) bg_calc_paper_pane_g

0x7502,	// (0x00060e6c) calc_bg_paper_pane_g9

0x7511,	// (0x00060e7b) list_calc_item_pane_ParamLimits

0x7511,	// (0x00060e7b) list_calc_item_pane

0x752a,	// (0x00060e94) list_calc_item_pane_g1

0x7537,	// (0x00060ea1) list_calc_item_pane_t1_ParamLimits

0x7537,	// (0x00060ea1) list_calc_item_pane_t1

0x7549,	// (0x00060eb3) list_calc_item_pane_t2_ParamLimits

0x7549,	// (0x00060eb3) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00068a8e) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00068a8e) list_calc_item_pane_t

0x71e6,	// (0x00060b50) cell_calc_pane_g1

0x7577,	// (0x00060ee1) grid_highlight_pane_cp02

0x7599,	// (0x00060f03) bg_calc_display_pane_g1

0x75a2,	// (0x00060f0c) bg_calc_display_pane_g2

0x75ac,	// (0x00060f16) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00068a98) bg_calc_display_pane_g

0x75b5,	// (0x00060f1f) cell_qdial_pane_ParamLimits

0x75b5,	// (0x00060f1f) cell_qdial_pane

0x75c7,	// (0x00060f31) cell_qdial_pane_g1_ParamLimits

0x75c7,	// (0x00060f31) cell_qdial_pane_g1

0x75d4,	// (0x00060f3e) cell_qdial_pane_g2_ParamLimits

0x75d4,	// (0x00060f3e) cell_qdial_pane_g2

0x75e5,	// (0x00060f4f) cell_qdial_pane_g3_ParamLimits

0x75e5,	// (0x00060f4f) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00068a9f) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00068a9f) cell_qdial_pane_g

0x75fe,	// (0x00060f68) cell_qdial_pane_t1_ParamLimits

0x75fe,	// (0x00060f68) cell_qdial_pane_t1

0x7616,	// (0x00060f80) cell_qdial_pane_t2_ParamLimits

0x7616,	// (0x00060f80) cell_qdial_pane_t2

0x7629,	// (0x00060f93) cell_qdial_pane_t3_ParamLimits

0x7629,	// (0x00060f93) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00068aa8) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00068aa8) cell_qdial_pane_t

0x6f73,	// (0x000608dd) grid_highlight_pane_cp04

0x763c,	// (0x00060fa6) thumbnail_qdial_pane_ParamLimits

0x763c,	// (0x00060fa6) thumbnail_qdial_pane

0x7698,	// (0x00061002) list_help_pane

0x76a2,	// (0x0006100c) scroll_pane_cp02

0x76ab,	// (0x00061015) help_list_pane_t1_ParamLimits

0x76ab,	// (0x00061015) help_list_pane_t1

0x76ca,	// (0x00061034) bg_notes_pane_g2

0x76d2,	// (0x0006103c) bg_notes_pane_g3

0x76da,	// (0x00061044) notes_bg_pane_g1

0x76e2,	// (0x0006104c) notes_bg_pane_g4

0x76ea,	// (0x00061054) notes_bg_pane_g5

0x76f2,	// (0x0006105c) notes_bg_pane_g6

0x76fa,	// (0x00061064) notes_bg_pane_g7

0x7702,	// (0x0006106c) notes_bg_pane_g8

0x770a,	// (0x00061074) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00068ac6) notes_bg_pane_g

0x7712,	// (0x0006107c) list_notes_text_pane_ParamLimits

0x7712,	// (0x0006107c) list_notes_text_pane

0x7736,	// (0x000610a0) list_notes_text_pane_g1

0x5bf2,	// (0x0005f55c) list_notes_text_pane_t1

0x7750,	// (0x000610ba) listscroll_cale_week_pane

0x777e,	// (0x000610e8) bg_cale_heading_pane

0x7796,	// (0x00061100) bg_cale_pane_cp01

0x77b3,	// (0x0006111d) cale_week_corner_pane

0x77cd,	// (0x00061137) cale_week_day_heading_pane

0x77e5,	// (0x0006114f) cale_week_scroll_pane_g1

0x77f8,	// (0x00061162) cale_week_scroll_pane_g2

0x780b,	// (0x00061175) cale_week_scroll_pane_g3

0x781e,	// (0x00061188) cale_week_scroll_pane_g4

0x7831,	// (0x0006119b) cale_week_scroll_pane_g5

0x7844,	// (0x000611ae) cale_week_scroll_pane_g6

0x7857,	// (0x000611c1) cale_week_scroll_pane_g7

0x786a,	// (0x000611d4) cale_week_scroll_pane_g8

0x787d,	// (0x000611e7) cale_week_scroll_pane_g9

0x7890,	// (0x000611fa) cale_week_scroll_pane_g10

0x78a3,	// (0x0006120d) cale_week_scroll_pane_g11

0x78b6,	// (0x00061220) cale_week_scroll_pane_g12

0x78c9,	// (0x00061233) cale_week_scroll_pane_g13

0x78dc,	// (0x00061246) cale_week_scroll_pane_g14

0x78ef,	// (0x00061259) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00068ad5) cale_week_scroll_pane_g

0x7915,	// (0x0006127f) cale_week_time_pane

0x7928,	// (0x00061292) grid_cale_week_pane

0x794f,	// (0x000612b9) scroll_pane_cp08

0x796c,	// (0x000612d6) cell_cale_week_pane_ParamLimits

0x796c,	// (0x000612d6) cell_cale_week_pane

0x79ba,	// (0x00061324) cale_week_day_heading_pane_t1

0x79f5,	// (0x0006135f) cale_week_day_heading_pane_t2

0x7a30,	// (0x0006139a) cale_week_day_heading_pane_t3

0x7a6b,	// (0x000613d5) cale_week_day_heading_pane_t4

0x7aa6,	// (0x00061410) cale_week_day_heading_pane_t5

0x7ae1,	// (0x0006144b) cale_week_day_heading_pane_t6

0x7b1c,	// (0x00061486) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00068af6) cale_week_day_heading_pane_t

0x7b57,	// (0x000614c1) bg_cale_side_pane

0x7b65,	// (0x000614cf) cale_week_time_pane_t1

0x7b9f,	// (0x00061509) cale_week_time_pane_t2

0x7bd9,	// (0x00061543) cale_week_time_pane_t3

0x7c13,	// (0x0006157d) cale_week_time_pane_t4

0x7c4d,	// (0x000615b7) cale_week_time_pane_t5

0x7c87,	// (0x000615f1) cale_week_time_pane_t6

0x7cc1,	// (0x0006162b) cale_week_time_pane_t7

0x7cfb,	// (0x00061665) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00068b05) cale_week_time_pane_t

0x7d35,	// (0x0006169f) cell_cale_week_pane_g2

0x7d59,	// (0x000616c3) cell_cale_week_pane_g3_ParamLimits

0x7d59,	// (0x000616c3) cell_cale_week_pane_g3

0x7d71,	// (0x000616db) grid_highlight_pane_cp07

0x7d79,	// (0x000616e3) listscroll_gms_pane

0x7d83,	// (0x000616ed) grid_gms_pane

0x7d8c,	// (0x000616f6) listscroll_gms_pane_g1

0x7d94,	// (0x000616fe) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00068b16) listscroll_gms_pane_g

0x7d9c,	// (0x00061706) scroll_pane_cp010

0x7da5,	// (0x0006170f) cell_gms_pane_ParamLimits

0x7da5,	// (0x0006170f) cell_gms_pane

0x7db6,	// (0x00061720) cell_gms_pane_g1

0x7dbe,	// (0x00061728) cell_gms_pane_g2

0x7736,	// (0x000610a0) cell_gms_pane_g3

0x7dc6,	// (0x00061730) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00068b1b) cell_gms_pane_g

0x7dcf,	// (0x00061739) grid_highlight_pane_cp09

0x9dc8,	// (0x00063732) phob_pre_status_pane_g1

0x9dd0,	// (0x0006373a) phob_pre_status_pane_g2

0x9dd8,	// (0x00063742) phob_pre_status_pane_g3

0x9de0,	// (0x0006374a) phob_pre_status_pane_g4

0x0004,

0xf59f,	// (0x00068f09) phob_pre_status_pane_g

0x9df0,	// (0x0006375a) phob_pre_status_pane_t1

0x9dfe,	// (0x00063768) phob_pre_status_pane_t2

0x9e0c,	// (0x00063776) phob_pre_status_pane_t3

0x0002,

0xf5aa,	// (0x00068f14) phob_pre_status_pane_t

0x7ddf,	// (0x00061749) bg_list_pane_cp05

0x7de7,	// (0x00061751) grid_vorec_pane

0x7def,	// (0x00061759) vorec_t1

0x7dfd,	// (0x00061767) vorec_t2

0x7e0b,	// (0x00061775) vorec_t3

0x7e19,	// (0x00061783) vorec_t4

0xe4bc,	// (0x00067e26) vorec_t5

0xe4ca,	// (0x00067e34) vorec_t6

0x0004,

0xf1ba,	// (0x00068b24) vorec_t

0xe4d8,	// (0x00067e42) wait_bar_pane_cp01

0x0e16,	// (0x0005a780) cell_vorec_pane_ParamLimits

0x0e16,	// (0x0005a780) cell_vorec_pane

0x7e35,	// (0x0006179f) cell_vorec_pane_g1

0x6f73,	// (0x000608dd) grid_highlight_pane_cp05

0x6aa6,	// (0x00060410) cams_zoom_pane

0x7e3f,	// (0x000617a9) image_vga_pane

0x7275,	// (0x00060bdf) main_camera_pane_g1

0x7275,	// (0x00060bdf) main_camera_pane_g2

0x7275,	// (0x00060bdf) main_camera_pane_g3

0x7275,	// (0x00060bdf) main_camera_pane_g4

0x7275,	// (0x00060bdf) main_camera_pane_g5

0x7275,	// (0x00060bdf) main_camera_pane_g6

0x7275,	// (0x00060bdf) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00068b2f) main_camera_pane_g

0x7e4c,	// (0x000617b6) main_camera_pane_t1

0x7e4c,	// (0x000617b6) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00068b40) main_camera_pane_t

0x7e72,	// (0x000617dc) cams_zoom_pane_cp_ParamLimits

0x7e72,	// (0x000617dc) cams_zoom_pane_cp

0x7e96,	// (0x00061800) image_cif_pane_ParamLimits

0x7e96,	// (0x00061800) image_cif_pane

0x7ea3,	// (0x0006180d) image_subqcif_pane

0x7eab,	// (0x00061815) main_video_pane_g1_ParamLimits

0x7eab,	// (0x00061815) main_video_pane_g1

0x7ecb,	// (0x00061835) main_video_pane_g2_ParamLimits

0x7ecb,	// (0x00061835) main_video_pane_g2

0x7ef9,	// (0x00061863) main_video_pane_g3_ParamLimits

0x7ef9,	// (0x00061863) main_video_pane_g3

0x7f22,	// (0x0006188c) main_video_pane_g4_ParamLimits

0x7f22,	// (0x0006188c) main_video_pane_g4

0x7f4b,	// (0x000618b5) main_video_pane_g5_ParamLimits

0x7f4b,	// (0x000618b5) main_video_pane_g5

0x7f61,	// (0x000618cb) main_video_pane_g6_ParamLimits

0x7f61,	// (0x000618cb) main_video_pane_g6

0x0006,

0xf1db,	// (0x00068b45) main_video_pane_g_ParamLimits

0xf1db,	// (0x00068b45) main_video_pane_g

0x7f87,	// (0x000618f1) main_video_pane_t1_ParamLimits

0x7f87,	// (0x000618f1) main_video_pane_t1

0x7fc5,	// (0x0006192f) cams_zoom_pane_g1

0x7fc5,	// (0x0006192f) cams_zoom_pane_g2

0x7fc5,	// (0x0006192f) cams_zoom_pane_g3

0x7fc5,	// (0x0006192f) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00068b54) cams_zoom_pane_g

0x7fdb,	// (0x00061945) grid_cams_pane

0x7fe7,	// (0x00061951) linegrid_cams_pane

0x7ff3,	// (0x0006195d) cell_cams_pane_ParamLimits

0x7ff3,	// (0x0006195d) cell_cams_pane

0x8006,	// (0x00061970) cams_burst_image_pane

0x800e,	// (0x00061978) cell_cams_pane_g1

0x6f73,	// (0x000608dd) grid_highlight_pane_cp03

0x71e6,	// (0x00060b50) mp_bg_pane_g1

0x6f73,	// (0x000608dd) bg_list_pane_cp03

0x1e76,	// (0x0005b7e0) bg_mp_pane

0x1e7e,	// (0x0005b7e8) grid_mp_pane

0x1e86,	// (0x0005b7f0) media_player_g1

0x1e8e,	// (0x0005b7f8) media_player_t1

0x1e9c,	// (0x0005b806) media_player_t2

0x1eaa,	// (0x0005b814) media_player_t3

0x1eb8,	// (0x0005b822) media_player_t4

0x1ec6,	// (0x0005b830) media_player_t5

0x1ed4,	// (0x0005b83e) media_player_t6

0x1ee2,	// (0x0005b84c) media_player_t7

0x0006,

0xf589,	// (0x00068ef3) media_player_t

0x1ef0,	// (0x0005b85a) wait_bar_pane_cp02

0xf56e,	// (0x00068ed8) main_usb_pane_t

0x9dbf,	// (0x00063729) cell_mp_pane

0x71e6,	// (0x00060b50) cell_mp_pane_g1

0x6f73,	// (0x000608dd) grid_highlight_pane_cp06

0x8022,	// (0x0006198c) grid_skin_colour_pane

0x802a,	// (0x00061994) list_highlight_pane_cp03

0x8032,	// (0x0006199c) skin_g1

0x803a,	// (0x000619a4) skin_t1

0x8049,	// (0x000619b3) skin_t2

0x0001,

0xf218,	// (0x00068b82) skin_t

0x8057,	// (0x000619c1) cell_skin_colour_pane_ParamLimits

0x8057,	// (0x000619c1) cell_skin_colour_pane

0x806f,	// (0x000619d9) cell_skin_colour_pane_g1

0x80df,	// (0x00061a49) call_video_g1_ParamLimits

0x80df,	// (0x00061a49) call_video_g1

0x80eb,	// (0x00061a55) call_video_g2_ParamLimits

0x80eb,	// (0x00061a55) call_video_g2

0x0001,

0xf21d,	// (0x00068b87) call_video_g_ParamLimits

0xf21d,	// (0x00068b87) call_video_g

0x813b,	// (0x00061aa5) call_video_uplink_pane_cp1_ParamLimits

0x813b,	// (0x00061aa5) call_video_uplink_pane_cp1

0x81a5,	// (0x00061b0f) call_video_uplink_pane_cp2

0x81ff,	// (0x00061b69) video_down_crop_pane_ParamLimits

0x81ff,	// (0x00061b69) video_down_crop_pane

0x82c9,	// (0x00061c33) video_down_pane_ParamLimits

0x82c9,	// (0x00061c33) video_down_pane

0x8379,	// (0x00061ce3) video_down_subqcif_pane_ParamLimits

0x8379,	// (0x00061ce3) video_down_subqcif_pane

0x8391,	// (0x00061cfb) video_down_subqcif_pane_cp_ParamLimits

0x8391,	// (0x00061cfb) video_down_subqcif_pane_cp

0x83d1,	// (0x00061d3b) im_reading_pane_ParamLimits

0x83d1,	// (0x00061d3b) im_reading_pane

0x83e3,	// (0x00061d4d) im_writing_pane_ParamLimits

0x83e3,	// (0x00061d4d) im_writing_pane

0x8401,	// (0x00061d6b) im_reading_pane_t1

0x8439,	// (0x00061da3) list_im_pane

0x844a,	// (0x00061db4) scroll_pane_cp07

0x8463,	// (0x00061dcd) im_writing_pane_t1_ParamLimits

0x8463,	// (0x00061dcd) im_writing_pane_t1

0x8478,	// (0x00061de2) im_writing_pane_t2_ParamLimits

0x8478,	// (0x00061de2) im_writing_pane_t2

0x0001,

0xf227,	// (0x00068b91) im_writing_pane_t_ParamLimits

0xf227,	// (0x00068b91) im_writing_pane_t

0x6f73,	// (0x000608dd) input_focus_pane_cp04

0x6f73,	// (0x000608dd) input_focus_pane_cp05

0x8495,	// (0x00061dff) list_im_single_pane_ParamLimits

0x8495,	// (0x00061dff) list_im_single_pane

0x84ad,	// (0x00061e17) list_single_im_pane_t1

0x9d85,	// (0x000636ef) blid_accuracy_pane

0x9d8d,	// (0x000636f7) blid_compass_pane

0x9d95,	// (0x000636ff) main_location_t1

0x9da3,	// (0x0006370d) main_location_t2

0x9db1,	// (0x0006371b) main_location_t3

0x0002,

0xf598,	// (0x00068f02) main_location_t

0x6f73,	// (0x000608dd) aid_levels_location

0x71e6,	// (0x00060b50) blid_accuracy_pane_g1

0x71e6,	// (0x00060b50) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00068be5) blid_accuracy_pane_g

0x84e7,	// (0x00061e51) wml_content_pane

0x8525,	// (0x00061e8f) wml_button_pane_ParamLimits

0x8525,	// (0x00061e8f) wml_button_pane

0x8539,	// (0x00061ea3) wml_list_single_large_pane_ParamLimits

0x8539,	// (0x00061ea3) wml_list_single_large_pane

0x8550,	// (0x00061eba) wml_list_single_medium_pane_ParamLimits

0x8550,	// (0x00061eba) wml_list_single_medium_pane

0x8568,	// (0x00061ed2) wml_list_single_small_pane_ParamLimits

0x8568,	// (0x00061ed2) wml_list_single_small_pane

0x8583,	// (0x00061eed) wml_selection_box_pane_ParamLimits

0x8583,	// (0x00061eed) wml_selection_box_pane

0x8596,	// (0x00061f00) wml_list_single_pane_t1

0x85a5,	// (0x00061f0f) wml_list_single_medium_pane_t1

0x85b4,	// (0x00061f1e) wml_list_single_large_pane_t1

0x85c3,	// (0x00061f2d) input_focus_pane_cp02_ParamLimits

0x85c3,	// (0x00061f2d) input_focus_pane_cp02

0x85d6,	// (0x00061f40) wml_selection_box_pane_g1

0x85df,	// (0x00061f49) wml_selection_box_pane_t1_ParamLimits

0x85df,	// (0x00061f49) wml_selection_box_pane_t1

0x71ce,	// (0x00060b38) bg_wml_button_pane_ParamLimits

0x71ce,	// (0x00060b38) bg_wml_button_pane

0x85f7,	// (0x00061f61) wml_button_pane_g1

0x85ff,	// (0x00061f69) wml_button_pane_t1

0x85f7,	// (0x00061f61) wml_button_bg_pane_g1

0x860f,	// (0x00061f79) wml_button_bg_pane_g2

0x8617,	// (0x00061f81) wml_button_bg_pane_g3

0x861f,	// (0x00061f89) wml_button_bg_pane_g4

0x8627,	// (0x00061f91) wml_button_bg_pane_g5

0x862f,	// (0x00061f99) wml_button_bg_pane_g6

0x8637,	// (0x00061fa1) wml_button_bg_pane_g7

0x863f,	// (0x00061fa9) wml_button_bg_pane_g8

0x8647,	// (0x00061fb1) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00068b96) wml_button_bg_pane_g

0x864f,	// (0x00061fb9) bg_list_pane_cp02

0x8658,	// (0x00061fc2) mce_header_pane_ParamLimits

0x8658,	// (0x00061fc2) mce_header_pane

0x866c,	// (0x00061fd6) mce_icon_pane

0x866c,	// (0x00061fd6) mce_image_pane

0x8675,	// (0x00061fdf) mce_text_pane_ParamLimits

0x8675,	// (0x00061fdf) mce_text_pane

0x8689,	// (0x00061ff3) scroll_pane_cp03

0x8689,	// (0x00061ff3) scroll_pane_cp04

0x8691,	// (0x00061ffb) scroll_pane_cp05_ParamLimits

0x8691,	// (0x00061ffb) scroll_pane_cp05

0x869d,	// (0x00062007) mce_header_field_pane_ParamLimits

0x869d,	// (0x00062007) mce_header_field_pane

0x86bd,	// (0x00062027) mce_header_field_pane_2_ParamLimits

0x86bd,	// (0x00062027) mce_header_field_pane_2

0x86d3,	// (0x0006203d) mce_header_field_pane_3

0x86db,	// (0x00062045) list_single_mce_message_pane_ParamLimits

0x86db,	// (0x00062045) list_single_mce_message_pane

0x86f2,	// (0x0006205c) list_single_mce_smart_pane_ParamLimits

0x86f2,	// (0x0006205c) list_single_mce_smart_pane

0x8714,	// (0x0006207e) input_focus_pane_cp03

0x871d,	// (0x00062087) list_header_data_pane

0x8725,	// (0x0006208f) mce_header_field_pane_t1

0x8733,	// (0x0006209d) list_single_mce_header_pane_ParamLimits

0x8733,	// (0x0006209d) list_single_mce_header_pane

0x874b,	// (0x000620b5) list_single_mce_header_pane_t1

0x875a,	// (0x000620c4) list_single_mce_message_pane_g1

0x8763,	// (0x000620cd) list_single_mce_message_pane_t1

0x8798,	// (0x00062102) bg_cale_heading_pane_cp01_ParamLimits

0x8798,	// (0x00062102) bg_cale_heading_pane_cp01

0x87c7,	// (0x00062131) bg_cale_pane_cp02_ParamLimits

0x87c7,	// (0x00062131) bg_cale_pane_cp02

0x87f4,	// (0x0006215e) cale_month_corner_pane

0x880e,	// (0x00062178) cale_month_day_heading_pane_ParamLimits

0x880e,	// (0x00062178) cale_month_day_heading_pane

0x883d,	// (0x000621a7) cale_month_pane_g1_ParamLimits

0x883d,	// (0x000621a7) cale_month_pane_g1

0x8861,	// (0x000621cb) cale_month_pane_g2_ParamLimits

0x8861,	// (0x000621cb) cale_month_pane_g2

0x8880,	// (0x000621ea) cale_month_pane_g3_ParamLimits

0x8880,	// (0x000621ea) cale_month_pane_g3

0x88bc,	// (0x00062226) cale_month_pane_g4_ParamLimits

0x88bc,	// (0x00062226) cale_month_pane_g4

0x88f8,	// (0x00062262) cale_month_pane_g5_ParamLimits

0x88f8,	// (0x00062262) cale_month_pane_g5

0x8934,	// (0x0006229e) cale_month_pane_g6_ParamLimits

0x8934,	// (0x0006229e) cale_month_pane_g6

0x8970,	// (0x000622da) cale_month_pane_g7_ParamLimits

0x8970,	// (0x000622da) cale_month_pane_g7

0x89ac,	// (0x00062316) cale_month_pane_g8_ParamLimits

0x89ac,	// (0x00062316) cale_month_pane_g8

0x89e8,	// (0x00062352) cale_month_pane_g9_ParamLimits

0x89e8,	// (0x00062352) cale_month_pane_g9

0x8a22,	// (0x0006238c) cale_month_pane_g10_ParamLimits

0x8a22,	// (0x0006238c) cale_month_pane_g10

0x8a5c,	// (0x000623c6) cale_month_pane_g11_ParamLimits

0x8a5c,	// (0x000623c6) cale_month_pane_g11

0x8a96,	// (0x00062400) cale_month_pane_g12_ParamLimits

0x8a96,	// (0x00062400) cale_month_pane_g12

0x8ad0,	// (0x0006243a) cale_month_pane_g13_ParamLimits

0x8ad0,	// (0x0006243a) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00068ba9) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00068ba9) cale_month_pane_g

0x8b1c,	// (0x00062486) cale_month_week_pane

0x8b2f,	// (0x00062499) grid_cale_month_pane_ParamLimits

0x8b2f,	// (0x00062499) grid_cale_month_pane

0x8b55,	// (0x000624bf) cale_month_day_heading_pane_t1

0x8bdb,	// (0x00062545) cale_month_day_heading_pane_t2

0x8c6c,	// (0x000625d6) cale_month_day_heading_pane_t3

0x8cfd,	// (0x00062667) cale_month_day_heading_pane_t4

0x8d8e,	// (0x000626f8) cale_month_day_heading_pane_t5

0x8e1f,	// (0x00062789) cale_month_day_heading_pane_t6

0x8eb0,	// (0x0006281a) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00068bc4) cale_month_day_heading_pane_t

0x7b57,	// (0x000614c1) bg_cale_side_pane_cp01

0x8f41,	// (0x000628ab) cale_month_week_pane_t1

0x8f7a,	// (0x000628e4) cale_month_week_pane_t2

0x8fb3,	// (0x0006291d) cale_month_week_pane_t3

0x8fec,	// (0x00062956) cale_month_week_pane_t4

0x9025,	// (0x0006298f) cale_month_week_pane_t5

0x905e,	// (0x000629c8) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00068bd3) cale_month_week_pane_t

0x9097,	// (0x00062a01) cell_cale_month_pane_ParamLimits

0x9097,	// (0x00062a01) cell_cale_month_pane

0x9185,	// (0x00062aef) cell_cale_month_pane_g1

0x9191,	// (0x00062afb) cell_cale_month_pane_t1_ParamLimits

0x9191,	// (0x00062afb) cell_cale_month_pane_t1

0x7d71,	// (0x000616db) grid_highlight_pane_cp08

0x71e6,	// (0x00060b50) main_smil_g1

0x91b1,	// (0x00062b1b) smil_status_pane

0x91ba,	// (0x00062b24) smil_text_pane

0x1d3e,	// (0x0005b6a8) bg_popup_call3_rect_pane_g8

0x1d46,	// (0x0005b6b0) bg_popup_call3_rect_pane_g9

0x0008,

0xf519,	// (0x00068e83) bg_popup_call3_rect_pane_g

0x1fd9,	// (0x0005b943) smil_status_volume_pane_g1

0x91cc,	// (0x00062b36) smil_status_pane_t1

0xa0e5,	// (0x00063a4f) volume_smil_pane

0x91e3,	// (0x00062b4d) list_smil_text_pane

0x91ed,	// (0x00062b57) scroll_pane_cp011

0x91f6,	// (0x00062b60) smil_text_list_pane_t1_ParamLimits

0x91f6,	// (0x00062b60) smil_text_list_pane_t1

0x9235,	// (0x00062b9f) aid_volume_smil_ParamLimits

0x9235,	// (0x00062b9f) aid_volume_smil

0x71e6,	// (0x00060b50) smil_volume_pane_g1

0x71e6,	// (0x00060b50) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00068be5) smil_volume_pane_g

0x7750,	// (0x000610ba) listscroll_cale_day_pane

0x9257,	// (0x00062bc1) bg_cale_pane

0xe4e0,	// (0x00067e4a) list_cale_pane

0xe503,	// (0x00067e6d) scroll_pane_cp09

0xe514,	// (0x00067e7e) cale_bg_pane_g1

0xe51c,	// (0x00067e86) cale_bg_pane_g2

0xe524,	// (0x00067e8e) cale_bg_pane_g3

0xe52c,	// (0x00067e96) cale_bg_pane_g4

0xe534,	// (0x00067e9e) cale_bg_pane_g5

0xe53c,	// (0x00067ea6) cale_bg_pane_g6

0xe544,	// (0x00067eae) cale_bg_pane_g7

0xe54c,	// (0x00067eb6) cale_bg_pane_g8

0xe554,	// (0x00067ebe) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00068bea) cale_bg_pane_g

0x9277,	// (0x00062be1) list_cale_time_pane_ParamLimits

0x9277,	// (0x00062be1) list_cale_time_pane

0xe55c,	// (0x00067ec6) list_cale_time_pane_g1_ParamLimits

0xe55c,	// (0x00067ec6) list_cale_time_pane_g1

0xe568,	// (0x00067ed2) list_cale_time_pane_g2_ParamLimits

0xe568,	// (0x00067ed2) list_cale_time_pane_g2

0x928b,	// (0x00062bf5) list_cale_time_pane_g3_ParamLimits

0x928b,	// (0x00062bf5) list_cale_time_pane_g3

0x9297,	// (0x00062c01) list_cale_time_pane_g4_ParamLimits

0x9297,	// (0x00062c01) list_cale_time_pane_g4

0x92a3,	// (0x00062c0d) list_cale_time_pane_g5_ParamLimits

0x92a3,	// (0x00062c0d) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00068bfd) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00068bfd) list_cale_time_pane_g

0xe582,	// (0x00067eec) list_cale_time_pane_t1_ParamLimits

0xe582,	// (0x00067eec) list_cale_time_pane_t1

0xe5aa,	// (0x00067f14) list_cale_time_pane_t2_ParamLimits

0xe5aa,	// (0x00067f14) list_cale_time_pane_t2

0x9560,	// (0x00062eca) aid_blid_cardinal_pane

0x959e,	// (0x00062f08) compass_pane_t4

0xe5d2,	// (0x00067f3c) list_cale_time_pane_t4_ParamLimits

0xe5d2,	// (0x00067f3c) list_cale_time_pane_t4

0x95ac,	// (0x00062f16) compass_pane_t5

0x95ba,	// (0x00062f24) compass_pane_t6

0x95c8,	// (0x00062f32) compass_pane_t7

0xea31,	// (0x0006839b) navi_pane_cc_t1

0xebd6,	// (0x00068540) aid_phob_thumbnail_center_pane

0x9932,	// (0x0006329c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x00068c0a) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x00068c0a) list_cale_time_pane_t

0x6ba8,	// (0x00060512) bg_popup_window_pane_cp02_ParamLimits

0x6ba8,	// (0x00060512) bg_popup_window_pane_cp02

0xe5fa,	// (0x00067f64) heading_pane_cp01_ParamLimits

0xe5fa,	// (0x00067f64) heading_pane_cp01

0xe606,	// (0x00067f70) loc_req_pane_ParamLimits

0xe606,	// (0x00067f70) loc_req_pane

0xe616,	// (0x00067f80) loc_type_pane_ParamLimits

0xe616,	// (0x00067f80) loc_type_pane

0xe628,	// (0x00067f92) loc_type_pane_t1_ParamLimits

0xe628,	// (0x00067f92) loc_type_pane_t1

0xe63a,	// (0x00067fa4) loc_type_pane_t2_ParamLimits

0xe63a,	// (0x00067fa4) loc_type_pane_t2

0xe64c,	// (0x00067fb6) loc_type_pane_t3_ParamLimits

0xe64c,	// (0x00067fb6) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x00068c11) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x00068c11) loc_type_pane_t

0xe65e,	// (0x00067fc8) list_loc_req_pane

0xe668,	// (0x00067fd2) scroll_pane_cp012

0x92af,	// (0x00062c19) list_single_loc_request_popup_menu_pane_ParamLimits

0x92af,	// (0x00062c19) list_single_loc_request_popup_menu_pane

0xe671,	// (0x00067fdb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe671,	// (0x00067fdb) list_single_loc_request_popup_menu_pane_g1

0xe67d,	// (0x00067fe7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe67d,	// (0x00067fe7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00068c18) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00068c18) list_single_loc_request_popup_menu_pane_g

0xe689,	// (0x00067ff3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe689,	// (0x00067ff3) list_single_loc_request_popup_menu_pane_t1

0x92c1,	// (0x00062c2b) bg_popup_window_pane_cp03_ParamLimits

0x92c1,	// (0x00062c2b) bg_popup_window_pane_cp03

0x92cf,	// (0x00062c39) heading_loc_req_pane_ParamLimits

0x92cf,	// (0x00062c39) heading_loc_req_pane

0x92db,	// (0x00062c45) popup_dyc_status_message_window_g1_ParamLimits

0x92db,	// (0x00062c45) popup_dyc_status_message_window_g1

0x92e7,	// (0x00062c51) popup_dyc_status_message_window_t1_ParamLimits

0x92e7,	// (0x00062c51) popup_dyc_status_message_window_t1

0x92f9,	// (0x00062c63) popup_dyc_status_message_window_t2_ParamLimits

0x92f9,	// (0x00062c63) popup_dyc_status_message_window_t2

0x930b,	// (0x00062c75) popup_dyc_status_message_window_t3_ParamLimits

0x930b,	// (0x00062c75) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00068c1d) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00068c1d) popup_dyc_status_message_window_t

0x6f73,	// (0x000608dd) bg_heading_pane_cp01

0xe69f,	// (0x00068009) heading_loc_req_pane_g1

0xe6a7,	// (0x00068011) heading_loc_req_pane_g2

0xe6af,	// (0x00068019) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x00068c24) heading_loc_req_pane_g

0xe6b7,	// (0x00068021) heading_loc_req_pane_t1

0xe6c6,	// (0x00068030) bg_popup_sub_pane_cp01_ParamLimits

0xe6c6,	// (0x00068030) bg_popup_sub_pane_cp01

0xe6d4,	// (0x0006803e) popup_cale_events_window_g1_ParamLimits

0xe6d4,	// (0x0006803e) popup_cale_events_window_g1

0xe6f4,	// (0x0006805e) popup_cale_events_window_g2_ParamLimits

0xe6f4,	// (0x0006805e) popup_cale_events_window_g2

0x0001,

0xf2ee,	// (0x00068c58) popup_cale_events_window_g_ParamLimits

0xf2ee,	// (0x00068c58) popup_cale_events_window_g

0xe714,	// (0x0006807e) popup_cale_events_window_t1_ParamLimits

0xe714,	// (0x0006807e) popup_cale_events_window_t1

0xe726,	// (0x00068090) popup_cale_events_window_t2_ParamLimits

0xe726,	// (0x00068090) popup_cale_events_window_t2

0xe764,	// (0x000680ce) popup_cale_events_window_t3_ParamLimits

0xe764,	// (0x000680ce) popup_cale_events_window_t3

0xe79e,	// (0x00068108) popup_cale_events_window_t4_ParamLimits

0xe79e,	// (0x00068108) popup_cale_events_window_t4

0x0003,

0xf2f3,	// (0x00068c5d) popup_cale_events_window_t_ParamLimits

0xf2f3,	// (0x00068c5d) popup_cale_events_window_t

0x9337,	// (0x00062ca1) call_type_pane

0x150b,	// (0x0005ae75) popup_call_status_window_g1

0x9343,	// (0x00062cad) popup_call_status_window_g2

0x934f,	// (0x00062cb9) popup_call_status_window_g3

0x0002,

0xf2fc,	// (0x00068c66) popup_call_status_window_g

0xe7d4,	// (0x0006813e) call_type_pane_g1

0xe7dd,	// (0x00068147) call_type_pane_g2

0x0001,

0xf303,	// (0x00068c6d) call_type_pane_g

0x6f73,	// (0x000608dd) bg_popup_sub_pane_cp02

0xe7e6,	// (0x00068150) listscroll_popup_wml_pane

0xe7ee,	// (0x00068158) list_wml_pane

0xe7f8,	// (0x00068162) scroll_pane_cp013

0x935b,	// (0x00062cc5) list_single_graphic_popup_wml_pane_ParamLimits

0x935b,	// (0x00062cc5) list_single_graphic_popup_wml_pane

0x71e6,	// (0x00060b50) list_single_graphic_popup_wml_pane_g1

0xe801,	// (0x0006816b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf308,	// (0x00068c72) list_single_graphic_popup_wml_pane_g

0xe809,	// (0x00068173) list_single_graphic_popup_wml_pane_t1

0xe81f,	// (0x00068189) aid_call_pane

0x71c6,	// (0x00060b30) popup_clock_analogue_window_g1

0x71c6,	// (0x00060b30) popup_clock_analogue_window_g2

0x936f,	// (0x00062cd9) popup_clock_analogue_window_g3

0x936f,	// (0x00062cd9) popup_clock_analogue_window_g4

0x71e6,	// (0x00060b50) popup_clock_analogue_window_g5

0x0004,

0xf30d,	// (0x00068c77) popup_clock_analogue_window_g

0x9377,	// (0x00062ce1) popup_clock_analogue_window_t1

0x9385,	// (0x00062cef) clock_digital_number_pane_ParamLimits

0x9385,	// (0x00062cef) clock_digital_number_pane

0x9391,	// (0x00062cfb) clock_digital_number_pane_cp02_ParamLimits

0x9391,	// (0x00062cfb) clock_digital_number_pane_cp02

0x939d,	// (0x00062d07) clock_digital_number_pane_cp03_ParamLimits

0x939d,	// (0x00062d07) clock_digital_number_pane_cp03

0x93a9,	// (0x00062d13) clock_digital_number_pane_cp04_ParamLimits

0x93a9,	// (0x00062d13) clock_digital_number_pane_cp04

0x93b5,	// (0x00062d1f) clock_digital_separator_pane_ParamLimits

0x93b5,	// (0x00062d1f) clock_digital_separator_pane

0x93c1,	// (0x00062d2b) popup_clock_digital_window_t1

0x71e6,	// (0x00060b50) clock_digital_number_pane_g1

0x71e6,	// (0x00060b50) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00068be5) clock_digital_number_pane_g

0x71e6,	// (0x00060b50) clock_digital_separator_pane_g1

0x71e6,	// (0x00060b50) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00068be5) clock_digital_separator_pane_g

0x6f73,	// (0x000608dd) bg_popup_window_pane_cp04

0xe827,	// (0x00068191) heading_pane_cp03

0xe82f,	// (0x00068199) listscroll_popup_gms_pane

0xe837,	// (0x000681a1) grid_large_graphic_popup_pane

0xe841,	// (0x000681ab) listscroll_popup_gms_pane_g1

0xe849,	// (0x000681b3) listscroll_popup_gms_pane_g2

0x0001,

0xf318,	// (0x00068c82) listscroll_popup_gms_pane_g

0x851d,	// (0x00061e87) scroll_pane_cp014

0x93de,	// (0x00062d48) cell_large_graphic_popup_pane_ParamLimits

0x93de,	// (0x00062d48) cell_large_graphic_popup_pane

0x93f5,	// (0x00062d5f) cell_large_graphic_popup_pane_g1_ParamLimits

0x93f5,	// (0x00062d5f) cell_large_graphic_popup_pane_g1

0xe851,	// (0x000681bb) cell_large_graphic_popup_pane_g2_ParamLimits

0xe851,	// (0x000681bb) cell_large_graphic_popup_pane_g2

0xe85d,	// (0x000681c7) cell_large_graphic_popup_pane_g3_ParamLimits

0xe85d,	// (0x000681c7) cell_large_graphic_popup_pane_g3

0xe86a,	// (0x000681d4) cell_large_graphic_popup_pane_g4_ParamLimits

0xe86a,	// (0x000681d4) cell_large_graphic_popup_pane_g4

0x0003,

0xf31d,	// (0x00068c87) cell_large_graphic_popup_pane_g_ParamLimits

0xf31d,	// (0x00068c87) cell_large_graphic_popup_pane_g

0xe87a,	// (0x000681e4) grid_highlight_pane_cp010

0x71e6,	// (0x00060b50) bg_popup_call_pane_g1

0xe884,	// (0x000681ee) list_single_graphic_popup_conf_pane_ParamLimits

0xe884,	// (0x000681ee) list_single_graphic_popup_conf_pane

0xe897,	// (0x00068201) list_highlight_pane_cp01

0xe8a0,	// (0x0006820a) list_single_graphic_popup_conf_pane_g1

0xe8a8,	// (0x00068212) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf326,	// (0x00068c90) list_single_graphic_popup_conf_pane_g

0xe8b0,	// (0x0006821a) list_single_graphic_popup_conf_pane_t1

0xe8be,	// (0x00068228) linegrid_cams_pane_g1

0x9401,	// (0x00062d6b) linegrid_cams_pane_g2

0x7736,	// (0x000610a0) linegrid_cams_pane_g3

0xe8c7,	// (0x00068231) linegrid_cams_pane_g4

0x940a,	// (0x00062d74) linegrid_cams_pane_g5

0x9413,	// (0x00062d7d) linegrid_cams_pane_g6

0x7dc6,	// (0x00061730) linegrid_cams_pane_g7

0x0006,

0xf32b,	// (0x00068c95) linegrid_cams_pane_g

0xe8d0,	// (0x0006823a) popup_clock_analogue_window

0xe8d0,	// (0x0006823a) popup_clock_digital_window

0x6f73,	// (0x000608dd) popup_phob_thumbnail_window

0x71e6,	// (0x00060b50) call_video_uplink_pane_g1

0xe8d9,	// (0x00068243) call_video_uplink_pane_g2

0x0001,

0xf33a,	// (0x00068ca4) call_video_uplink_pane_g

0x7d71,	// (0x000616db) video_uplink_pane

0xe8e1,	// (0x0006824b) mce_image_pane_g1

0x941c,	// (0x00062d86) mce_image_pane_g2

0x9424,	// (0x00062d8e) mce_image_pane_g3

0x942c,	// (0x00062d96) mce_image_pane_g4

0x9434,	// (0x00062d9e) mce_image_pane_g5

0x0004,

0xf33f,	// (0x00068ca9) mce_image_pane_g

0xe8eb,	// (0x00068255) control_top_pane_stacon_cp01_ParamLimits

0xe8eb,	// (0x00068255) control_top_pane_stacon_cp01

0xe8fb,	// (0x00068265) uni_indicator_pane_stacon_cp01_ParamLimits

0xe8fb,	// (0x00068265) uni_indicator_pane_stacon_cp01

0xe90c,	// (0x00068276) bg_popup_sub_pane_cp03

0xe916,	// (0x00068280) chi_dic_find_pane

0x943c,	// (0x00062da6) listscroll_chi_dic_pane

0xe91e,	// (0x00068288) main_pane_chidic_g1

0xe926,	// (0x00068290) chi_dic_find_pane_t1

0xe934,	// (0x0006829e) find_chidic_pane

0xe93d,	// (0x000682a7) chi_dic_list_pane_ParamLimits

0xe93d,	// (0x000682a7) chi_dic_list_pane

0xe94e,	// (0x000682b8) scroll_pane_cp020

0xe956,	// (0x000682c0) find_chidic_pane_t1

0x6f73,	// (0x000608dd) input_focus_pane_cp06

0x944e,	// (0x00062db8) list_chi_dic_pane_ParamLimits

0x944e,	// (0x00062db8) list_chi_dic_pane

0x9461,	// (0x00062dcb) list_chi_dic_pane_t1_ParamLimits

0x9461,	// (0x00062dcb) list_chi_dic_pane_t1

0x6f73,	// (0x000608dd) list_highlight_pane_cp020

0xe965,	// (0x000682cf) bg_cale_heading_pane_g1

0x9474,	// (0x00062dde) bg_cale_heading_pane_g2

0x947c,	// (0x00062de6) bg_cale_heading_pane_g3

0x9484,	// (0x00062dee) bg_cale_heading_pane_g4

0x948c,	// (0x00062df6) bg_cale_heading_pane_g5

0x9494,	// (0x00062dfe) bg_cale_heading_pane_g6

0x949c,	// (0x00062e06) bg_cale_heading_pane_g7

0x94a4,	// (0x00062e0e) bg_cale_heading_pane_g8

0x94ac,	// (0x00062e16) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x00068cb4) bg_cale_heading_pane_g

0xe965,	// (0x000682cf) bg_cale_side_pane_g1

0x94b4,	// (0x00062e1e) bg_cale_side_pane_g2

0x94bc,	// (0x00062e26) bg_cale_side_pane_g3

0x94c4,	// (0x00062e2e) bg_cale_side_pane_g4

0x94cc,	// (0x00062e36) bg_cale_side_pane_g5

0x94d4,	// (0x00062e3e) bg_cale_side_pane_g6

0x94dc,	// (0x00062e46) bg_cale_side_pane_g7

0x94e4,	// (0x00062e4e) bg_cale_side_pane_g8

0x94ec,	// (0x00062e56) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x00068cc7) bg_cale_side_pane_g

0x94f4,	// (0x00062e5e) popup_call_status_window_ParamLimits

0x94f4,	// (0x00062e5e) popup_call_status_window

0xe96d,	// (0x000682d7) stacon_top_pane

0xe975,	// (0x000682df) status_pane_ParamLimits

0xe975,	// (0x000682df) status_pane

0xe98f,	// (0x000682f9) status_small_pane

0xe997,	// (0x00068301) control_pane

0x6f73,	// (0x000608dd) stacon_bottom_pane

0xe99f,	// (0x00068309) list_single_mce_smart_pane_t1_ParamLimits

0xe99f,	// (0x00068309) list_single_mce_smart_pane_t1

0xe9b2,	// (0x0006831c) list_single_mce_smart_pane_t2_ParamLimits

0xe9b2,	// (0x0006831c) list_single_mce_smart_pane_t2

0x0001,

0xf370,	// (0x00068cda) list_single_mce_smart_pane_t_ParamLimits

0xf370,	// (0x00068cda) list_single_mce_smart_pane_t

0x9503,	// (0x00062e6d) compass_pane

0x950c,	// (0x00062e76) main_location2_pane_t1

0x9522,	// (0x00062e8c) main_location2_pane_t2

0x9538,	// (0x00062ea2) main_location2_pane_t3

0x0003,

0xf375,	// (0x00068cdf) main_location2_pane_t

0xe9da,	// (0x00068344) compass_pane_g1_ParamLimits

0xe9da,	// (0x00068344) compass_pane_g1

0x9580,	// (0x00062eea) compass_pane_t1

0x958f,	// (0x00062ef9) compass_pane_t2

0x0005,

0xf37e,	// (0x00068ce8) compass_pane_t

0x95d6,	// (0x00062f40) text_secondary_cp61

0xea28,	// (0x00068392) navi_pane_cams_g5

0xea74,	// (0x000683de) navi_pane_im_t1

0xea82,	// (0x000683ec) navi_pane_mp_g1_ParamLimits

0xea82,	// (0x000683ec) navi_pane_mp_g1

0xea96,	// (0x00068400) navi_pane_mp_g2_ParamLimits

0xea96,	// (0x00068400) navi_pane_mp_g2

0xeaa2,	// (0x0006840c) navi_pane_mp_g3_ParamLimits

0xeaa2,	// (0x0006840c) navi_pane_mp_g3

0x0002,

0xf392,	// (0x00068cfc) navi_pane_mp_g_ParamLimits

0xf392,	// (0x00068cfc) navi_pane_mp_g

0xeaae,	// (0x00068418) navi_pane_mp_t1

0xeabc,	// (0x00068426) navi_pane_mp_t2

0x0002,

0xf399,	// (0x00068d03) navi_pane_mp_t

0xeb27,	// (0x00068491) navi_pane_vt_g1

0xeaae,	// (0x00068418) navi_pane_vt_t1

0xeb2f,	// (0x00068499) navi_slider_pane

0x7ddf,	// (0x00061749) zooming_pane

0xeb37,	// (0x000684a1) navi_slider_pane_g1

0x9658,	// (0x00062fc2) navi_slider_pane_g2

0x0006,

0xf3a0,	// (0x00068d0a) navi_slider_pane_g

0xeb5b,	// (0x000684c5) aid_levels_zoom

0xeb63,	// (0x000684cd) zooming_pane_g1

0xeb6b,	// (0x000684d5) zooming_pane_g2

0xeb6b,	// (0x000684d5) zooming_pane_g3

0x0002,

0xf3af,	// (0x00068d19) zooming_pane_g

0xeb73,	// (0x000684dd) level_10_zoom

0xeb7c,	// (0x000684e6) level_11_zoom

0xeb85,	// (0x000684ef) level_1_zoom

0xeb8e,	// (0x000684f8) level_2_zoom

0xeb97,	// (0x00068501) level_3_zoom

0xeba0,	// (0x0006850a) level_4_zoom

0xeba9,	// (0x00068513) level_5_zoom

0xebb2,	// (0x0006851c) level_6_zoom

0xebbb,	// (0x00068525) level_7_zoom

0xebc4,	// (0x0006852e) level_8_zoom

0xebcd,	// (0x00068537) level_9_zoom

0xebde,	// (0x00068548) popup_phob_thumbnail_window_g1

0xebe6,	// (0x00068550) popup_phob_thumbnail_window_g2

0x0001,

0xf3b6,	// (0x00068d20) popup_phob_thumbnail_window_g

0x1ef8,	// (0x0005b862) level_1_location

0x1f00,	// (0x0005b86a) level_2_location

0x1f08,	// (0x0005b872) level_3_location

0x1f10,	// (0x0005b87a) level_4_location

0x7ddf,	// (0x00061749) level_5_location

0x966a,	// (0x00062fd4) mce_icon_pane_g1

0x9672,	// (0x00062fdc) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x00068d25) mce_icon_pane_g

0x967a,	// (0x00062fe4) main_mup_pane_g1_ParamLimits

0x967a,	// (0x00062fe4) main_mup_pane_g1

0x7283,	// (0x00060bed) main_mup_pane_g2_ParamLimits

0x7283,	// (0x00060bed) main_mup_pane_g2

0x7283,	// (0x00060bed) main_mup_pane_g3_ParamLimits

0x7283,	// (0x00060bed) main_mup_pane_g3

0x7283,	// (0x00060bed) main_mup_pane_g4_ParamLimits

0x7283,	// (0x00060bed) main_mup_pane_g4

0x7283,	// (0x00060bed) main_mup_pane_g5_ParamLimits

0x7283,	// (0x00060bed) main_mup_pane_g5

0x7283,	// (0x00060bed) main_mup_pane_g6_ParamLimits

0x7283,	// (0x00060bed) main_mup_pane_g6

0x7283,	// (0x00060bed) main_mup_pane_g7_ParamLimits

0x7283,	// (0x00060bed) main_mup_pane_g7

0x7283,	// (0x00060bed) main_mup_pane_g8_ParamLimits

0x7283,	// (0x00060bed) main_mup_pane_g8

0x7283,	// (0x00060bed) main_mup_pane_g9_ParamLimits

0x7283,	// (0x00060bed) main_mup_pane_g9

0x7283,	// (0x00060bed) main_mup_pane_g10_ParamLimits

0x7283,	// (0x00060bed) main_mup_pane_g10

0x7283,	// (0x00060bed) main_mup_pane_g11_ParamLimits

0x7283,	// (0x00060bed) main_mup_pane_g11

0x7275,	// (0x00060bdf) main_mup_pane_g12_ParamLimits

0x7275,	// (0x00060bdf) main_mup_pane_g12

0x7283,	// (0x00060bed) main_mup_pane_g13_ParamLimits

0x7283,	// (0x00060bed) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x00068d2a) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x00068d2a) main_mup_pane_g

0x7291,	// (0x00060bfb) main_mup_pane_t1_ParamLimits

0x7291,	// (0x00060bfb) main_mup_pane_t1

0x7291,	// (0x00060bfb) main_mup_pane_t2_ParamLimits

0x7291,	// (0x00060bfb) main_mup_pane_t2

0x7291,	// (0x00060bfb) main_mup_pane_t3_ParamLimits

0x7291,	// (0x00060bfb) main_mup_pane_t3

0x7e4c,	// (0x000617b6) main_mup_pane_t4_ParamLimits

0x7e4c,	// (0x000617b6) main_mup_pane_t4

0x7e4c,	// (0x000617b6) main_mup_pane_t5_ParamLimits

0x7e4c,	// (0x000617b6) main_mup_pane_t5

0xebee,	// (0x00068558) main_mup_pane_t6_ParamLimits

0xebee,	// (0x00068558) main_mup_pane_t6

0x0005,

0xf3db,	// (0x00068d45) main_mup_pane_t_ParamLimits

0xf3db,	// (0x00068d45) main_mup_pane_t

0xec02,	// (0x0006856c) mup_progress_pane_ParamLimits

0xec02,	// (0x0006856c) mup_progress_pane

0x2125,	// (0x0005ba8f) mup_visualizer_pane_ParamLimits

0x2125,	// (0x0005ba8f) mup_visualizer_pane

0x2125,	// (0x0005ba8f) mup_volume_pane_ParamLimits

0x2125,	// (0x0005ba8f) mup_volume_pane

0x7275,	// (0x00060bdf) mup_visualizer_pane_g1_ParamLimits

0x7275,	// (0x00060bdf) mup_visualizer_pane_g1

0xec10,	// (0x0006857a) mup_visualizer_pane_g2_ParamLimits

0xec10,	// (0x0006857a) mup_visualizer_pane_g2

0x7267,	// (0x00060bd1) mup_visualizer_pane_g3_ParamLimits

0x7267,	// (0x00060bd1) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x00068d52) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x00068d52) mup_visualizer_pane_g

0x7fc5,	// (0x0006192f) mup_volume_pane_g1

0x7fc5,	// (0x0006192f) mup_volume_pane_g2

0x0001,

0xf3ef,	// (0x00068d59) mup_volume_pane_g

0x7fc5,	// (0x0006192f) mup_progress_pane_g1

0x7fc5,	// (0x0006192f) mup_progress_pane_g2

0x7fc5,	// (0x0006192f) mup_progress_pane_g3

0x0002,

0xf3f4,	// (0x00068d5e) mup_progress_pane_g

0x6f73,	// (0x000608dd) bg_popup_window_pane_cp05

0xec1e,	// (0x00068588) heading_pane_cp02_ParamLimits

0xec1e,	// (0x00068588) heading_pane_cp02

0xec38,	// (0x000685a2) list_popup_blid_pane

0xec40,	// (0x000685aa) list_blid_sat_info_pane_ParamLimits

0xec40,	// (0x000685aa) list_blid_sat_info_pane

0xec53,	// (0x000685bd) list_blid_sat_info_pane_g1

0xec5b,	// (0x000685c5) list_blid_sat_info_pane_t1

0x975d,	// (0x000630c7) mup_equalizer_pane_ParamLimits

0x975d,	// (0x000630c7) mup_equalizer_pane

0x9776,	// (0x000630e0) mup_equalizer_pane_cp1_ParamLimits

0x9776,	// (0x000630e0) mup_equalizer_pane_cp1

0x978f,	// (0x000630f9) mup_equalizer_pane_cp2_ParamLimits

0x978f,	// (0x000630f9) mup_equalizer_pane_cp2

0x97a8,	// (0x00063112) mup_equalizer_pane_cp3_ParamLimits

0x97a8,	// (0x00063112) mup_equalizer_pane_cp3

0x97c1,	// (0x0006312b) mup_equalizer_pane_cp4_ParamLimits

0x97c1,	// (0x0006312b) mup_equalizer_pane_cp4

0x97da,	// (0x00063144) mup_equalizer_pane_cp5

0x97ec,	// (0x00063156) mup_equalizer_pane_cp6

0x97fe,	// (0x00063168) mup_equalizer_pane_cp7

0x1dd6,	// (0x0005b740) bg_popup_call_poc_act_pane_g9

0x1dde,	// (0x0005b748) bg_popup_call_poc_act_pane_g10

0x1de6,	// (0x0005b750) bg_popup_call_poc_act_pane_g11

0x000a,

0x71ce,	// (0x00060b38) mup_scale_pane

0x71e6,	// (0x00060b50) mup_scale_pane_g1

0xec69,	// (0x000685d3) mup_scale_pane_g2

0x0006,

0xf410,	// (0x00068d7a) mup_scale_pane_g

0xec8d,	// (0x000685f7) msg_data_pane

0xec95,	// (0x000685ff) scroll_pane_cp017

0x5c41,	// (0x0005f5ab) bg_list_pane_cp04_ParamLimits

0x5c41,	// (0x0005f5ab) bg_list_pane_cp04

0xec9d,	// (0x00068607) msg_data_pane_g1

0x941c,	// (0x00062d86) msg_data_pane_g2

0x9424,	// (0x00062d8e) msg_data_pane_g3

0x9822,	// (0x0006318c) msg_data_pane_g4

0x9434,	// (0x00062d9e) msg_data_pane_g5

0x966a,	// (0x00062fd4) msg_data_pane_g6

0x982a,	// (0x00063194) msg_data_pane_g7

0x0006,

0xf41f,	// (0x00068d89) msg_data_pane_g

0x5c61,	// (0x0005f5cb) msg_text_pane_ParamLimits

0x5c61,	// (0x0005f5cb) msg_text_pane

0x9832,	// (0x0006319c) qrid_highlight_pane_cp011_ParamLimits

0x9832,	// (0x0006319c) qrid_highlight_pane_cp011

0x6f73,	// (0x000608dd) msg_body_pane

0x6f73,	// (0x000608dd) msg_header_pane

0xecae,	// (0x00068618) input_focus_pane_cp07

0x5c96,	// (0x0005f600) msg_header_pane_t1_ParamLimits

0x5c96,	// (0x0005f600) msg_header_pane_t1

0x5cac,	// (0x0005f616) msg_header_pane_t2_ParamLimits

0x5cac,	// (0x0005f616) msg_header_pane_t2

0x0001,

0xf433,	// (0x00068d9d) msg_header_pane_t_ParamLimits

0xf433,	// (0x00068d9d) msg_header_pane_t

0xecc3,	// (0x0006862d) msg_body_pane_g1

0x5cc3,	// (0x0005f62d) msg_body_pane_t1_ParamLimits

0x5cc3,	// (0x0005f62d) msg_body_pane_t1

0x5cee,	// (0x0005f658) msg_body_pane_t2_ParamLimits

0x5cee,	// (0x0005f658) msg_body_pane_t2

0x5d00,	// (0x0005f66a) msg_body_pane_t3_ParamLimits

0x5d00,	// (0x0005f66a) msg_body_pane_t3

0x0002,

0xf438,	// (0x00068da2) msg_body_pane_t_ParamLimits

0xf438,	// (0x00068da2) msg_body_pane_t

0x9896,	// (0x00063200) main_viewer_pane_g1_ParamLimits

0x9896,	// (0x00063200) main_viewer_pane_g1

0x98a2,	// (0x0006320c) main_viewer_pane_g2_ParamLimits

0x98a2,	// (0x0006320c) main_viewer_pane_g2

0x98ae,	// (0x00063218) main_viewer_pane_g3_ParamLimits

0x98ae,	// (0x00063218) main_viewer_pane_g3

0x98bd,	// (0x00063227) main_viewer_pane_g4_ParamLimits

0x98bd,	// (0x00063227) main_viewer_pane_g4

0x98cc,	// (0x00063236) main_viewer_pane_g5_ParamLimits

0x98cc,	// (0x00063236) main_viewer_pane_g5

0x98cc,	// (0x00063236) main_viewer_pane_g7_ParamLimits

0x98cc,	// (0x00063236) main_viewer_pane_g7

0x98de,	// (0x00063248) main_viewer_pane_g8_ParamLimits

0x98de,	// (0x00063248) main_viewer_pane_g8

0x0007,

0xf448,	// (0x00068db2) main_viewer_pane_g_ParamLimits

0xf448,	// (0x00068db2) main_viewer_pane_g

0xeccb,	// (0x00068635) viewer_content_pane_ParamLimits

0xeccb,	// (0x00068635) viewer_content_pane

0x990e,	// (0x00063278) main_postcard_pane_g1_ParamLimits

0x990e,	// (0x00063278) main_postcard_pane_g1

0x991a,	// (0x00063284) main_postcard_pane_g2_ParamLimits

0x991a,	// (0x00063284) main_postcard_pane_g2

0x9926,	// (0x00063290) main_postcard_pane_g3_ParamLimits

0x9926,	// (0x00063290) main_postcard_pane_g3

0x0005,

0xf459,	// (0x00068dc3) main_postcard_pane_g_ParamLimits

0xf459,	// (0x00068dc3) main_postcard_pane_g

0x9932,	// (0x0006329c) main_postcard_pane_g4

0x1fc6,	// (0x0005b930) smil_status_volume_pane_g2

0x9956,	// (0x000632c0) postcard_pane_ParamLimits

0x9956,	// (0x000632c0) postcard_pane

0x150b,	// (0x0005ae75) postcard_pane_g1_ParamLimits

0x150b,	// (0x0005ae75) postcard_pane_g1

0x9986,	// (0x000632f0) postcard_pane_g2_ParamLimits

0x9986,	// (0x000632f0) postcard_pane_g2

0x9992,	// (0x000632fc) postcard_pane_g3_ParamLimits

0x9992,	// (0x000632fc) postcard_pane_g3

0xecd9,	// (0x00068643) postcard_pane_g4_ParamLimits

0xecd9,	// (0x00068643) postcard_pane_g4

0x999e,	// (0x00063308) postcard_pane_g5_ParamLimits

0x999e,	// (0x00063308) postcard_pane_g5

0x99aa,	// (0x00063314) postcard_pane_g6_ParamLimits

0x99aa,	// (0x00063314) postcard_pane_g6

0xece7,	// (0x00068651) postcard_pane_g7_ParamLimits

0xece7,	// (0x00068651) postcard_pane_g7

0x0006,

0xf466,	// (0x00068dd0) postcard_pane_g_ParamLimits

0xf466,	// (0x00068dd0) postcard_pane_g

0x99b6,	// (0x00063320) main_mp2_pane_g1_ParamLimits

0x99b6,	// (0x00063320) main_mp2_pane_g1

0x99c2,	// (0x0006332c) main_mp2_pane_g2_ParamLimits

0x99c2,	// (0x0006332c) main_mp2_pane_g2

0x99ce,	// (0x00063338) main_mp2_pane_g3_ParamLimits

0x99ce,	// (0x00063338) main_mp2_pane_g3

0x0002,

0xf475,	// (0x00068ddf) main_mp2_pane_g_ParamLimits

0xf475,	// (0x00068ddf) main_mp2_pane_g

0x99da,	// (0x00063344) main_mp2_pane_t1_ParamLimits

0x99da,	// (0x00063344) main_mp2_pane_t1

0x99ef,	// (0x00063359) main_mp2_pane_t2_ParamLimits

0x99ef,	// (0x00063359) main_mp2_pane_t2

0x9a01,	// (0x0006336b) main_mp2_pane_t3_ParamLimits

0x9a01,	// (0x0006336b) main_mp2_pane_t3

0x0002,

0xf47c,	// (0x00068de6) main_mp2_pane_t_ParamLimits

0xf47c,	// (0x00068de6) main_mp2_pane_t

0xecf5,	// (0x0006865f) pec_content_pane_ParamLimits

0xecf5,	// (0x0006865f) pec_content_pane

0x851d,	// (0x00061e87) scroll_pane_cp015

0xed07,	// (0x00068671) pec_attribute_pane_ParamLimits

0xed07,	// (0x00068671) pec_attribute_pane

0x9a13,	// (0x0006337d) pec_content_pane_g1_ParamLimits

0x9a13,	// (0x0006337d) pec_content_pane_g1

0xed17,	// (0x00068681) pec_content_pane_t1_ParamLimits

0xed17,	// (0x00068681) pec_content_pane_t1

0xed29,	// (0x00068693) pec_content_pane_t2_ParamLimits

0xed29,	// (0x00068693) pec_content_pane_t2

0x0001,

0xf483,	// (0x00068ded) pec_content_pane_t_ParamLimits

0xf483,	// (0x00068ded) pec_content_pane_t

0x9a1f,	// (0x00063389) list_single_graphic_pane_cp01_ParamLimits

0x9a1f,	// (0x00063389) list_single_graphic_pane_cp01

0x71ce,	// (0x00060b38) bg_popup_sub_pane_cp04

0xed3b,	// (0x000686a5) popup_mup_playback_window_g1

0xed47,	// (0x000686b1) popup_mup_playback_window_t1

0xed5c,	// (0x000686c6) popup_mup_playback_window_t2

0x0001,

0xf488,	// (0x00068df2) popup_mup_playback_window_t

0xed93,	// (0x000686fd) main_image_pane_g1_ParamLimits

0xed93,	// (0x000686fd) main_image_pane_g1

0xedd6,	// (0x00068740) scroll_pane_cp018_ParamLimits

0xedd6,	// (0x00068740) scroll_pane_cp018

0xedee,	// (0x00068758) scroll_pane_cp016_ParamLimits

0xedee,	// (0x00068758) scroll_pane_cp016

0x9aa4,	// (0x0006340e) smil2_image_pane_ParamLimits

0x9aa4,	// (0x0006340e) smil2_image_pane

0x9acc,	// (0x00063436) smil2_root_pane_ParamLimits

0x9acc,	// (0x00063436) smil2_root_pane

0x9af8,	// (0x00063462) smil2_text_pane_ParamLimits

0x9af8,	// (0x00063462) smil2_text_pane

0x6f73,	// (0x000608dd) bg_list_pane_cp06

0xee22,	// (0x0006878c) grid_radio_pane

0x6f73,	// (0x000608dd) bg_popup_window_pane_cp06

0x0dc8,	// (0x0005a732) main_fmradio_pane_t1

0xe827,	// (0x00068191) heading_pane_cp04

0x0dd6,	// (0x0005a740) main_fmradio_pane_t2

0x1e2e,	// (0x0005b798) popup_cale_lunar_info_window_g1

0x0de4,	// (0x0005a74e) main_fmradio_pane_t3

0x1e36,	// (0x0005b7a0) popup_cale_lunar_info_window_g2

0x0df2,	// (0x0005a75c) main_fmradio_pane_t4

0x0001,

0x0e00,	// (0x0005a76a) main_fmradio_pane_t5

0x0004,

0xf57b,	// (0x00068ee5) popup_cale_lunar_info_window_g

0xf49d,	// (0x00068e07) main_fmradio_pane_t

0x0e0e,	// (0x0005a778) wait_bar_pane_cp03

0x0e16,	// (0x0005a780) cell_fmradio_pane_ParamLimits

0x0e16,	// (0x0005a780) cell_fmradio_pane

0xece7,	// (0x00068651) cell_fmradio_pane_g1_ParamLimits

0xece7,	// (0x00068651) cell_fmradio_pane_g1

0x6f73,	// (0x000608dd) grid_highlight_pane_cp011

0x0e29,	// (0x0005a793) poc_content_pane_ParamLimits

0x0e29,	// (0x0005a793) poc_content_pane

0x0e3c,	// (0x0005a7a6) scroll_pane_cp019

0x9b2c,	// (0x00063496) popup_call_poc_act_window_ParamLimits

0x9b2c,	// (0x00063496) popup_call_poc_act_window

0x9b39,	// (0x000634a3) popup_call_poc_inact_window_ParamLimits

0x9b39,	// (0x000634a3) popup_call_poc_inact_window

0xf53f,	// (0x00068ea9) bg_popup_call_poc_act_pane_g

0x1dee,	// (0x0005b758) bg_popup_call_poc_inact_pane_g1

0x1df6,	// (0x0005b760) bg_popup_call_poc_inact_pane_g2

0x0e44,	// (0x0005a7ae) popup_call_poc_act_window_g2

0x1dfe,	// (0x0005b768) bg_popup_call_poc_inact_pane_g3

0x1dae,	// (0x0005b718) bg_popup_call_poc_inact_pane_g4

0x1e06,	// (0x0005b770) bg_popup_call_poc_inact_pane_g5

0x0e4c,	// (0x0005a7b6) popup_call_poc_act_window_t1_ParamLimits

0x0e4c,	// (0x0005a7b6) popup_call_poc_act_window_t1

0x0e74,	// (0x0005a7de) popup_call_poc_act_window_t2_ParamLimits

0x0e74,	// (0x0005a7de) popup_call_poc_act_window_t2

0x0e9c,	// (0x0005a806) popup_call_poc_act_window_t3_ParamLimits

0x0e9c,	// (0x0005a806) popup_call_poc_act_window_t3

0x0ec4,	// (0x0005a82e) popup_call_poc_act_window_t4_ParamLimits

0x0ec4,	// (0x0005a82e) popup_call_poc_act_window_t4

0x0003,

0xf4a8,	// (0x00068e12) popup_call_poc_act_window_t_ParamLimits

0xf4a8,	// (0x00068e12) popup_call_poc_act_window_t

0x1e0e,	// (0x0005b778) bg_popup_call_poc_inact_pane_g6

0x1e16,	// (0x0005b780) bg_popup_call_poc_inact_pane_g7

0x1e1e,	// (0x0005b788) bg_popup_call_poc_inact_pane_g8

0x0ed6,	// (0x0005a840) popup_call_poc_inact_window_g2

0x1e26,	// (0x0005b790) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x00068ec0) bg_popup_call_poc_inact_pane_g

0x0ede,	// (0x0005a848) popup_call_poc_inact_window_t1_ParamLimits

0x0ede,	// (0x0005a848) popup_call_poc_inact_window_t1

0x0ef3,	// (0x0005a85d) popup_call_poc_inact_window_t2_ParamLimits

0x0ef3,	// (0x0005a85d) popup_call_poc_inact_window_t2

0x0f08,	// (0x0005a872) popup_call_poc_inact_window_t3_ParamLimits

0x0f08,	// (0x0005a872) popup_call_poc_inact_window_t3

0x0002,

0xf4b1,	// (0x00068e1b) popup_call_poc_inact_window_t_ParamLimits

0xf4b1,	// (0x00068e1b) popup_call_poc_inact_window_t

0x1f67,	// (0x0005b8d1) context_pane_ParamLimits

0xa083,	// (0x000639ed) signal_pane_ParamLimits

0x7ddf,	// (0x00061749) main_call2_pane

0xa005,	// (0x0006396f) popup_phob_thumbnail2_window_ParamLimits

0xa005,	// (0x0006396f) popup_phob_thumbnail2_window

0x9848,	// (0x000631b2) aid_hotspot_pointer_arrow_pane

0x9850,	// (0x000631ba) aid_hotspot_pointer_hand_pane

0x9de8,	// (0x00063752) phob_pre_status_pane_g5

0x6aa6,	// (0x00060410) cams_zoom_pane_ParamLimits

0x7e3f,	// (0x000617a9) image_vga_pane_ParamLimits

0x7275,	// (0x00060bdf) main_camera_pane_g1_ParamLimits

0x7275,	// (0x00060bdf) main_camera_pane_g2_ParamLimits

0x7275,	// (0x00060bdf) main_camera_pane_g3_ParamLimits

0x7275,	// (0x00060bdf) main_camera_pane_g4_ParamLimits

0x7275,	// (0x00060bdf) main_camera_pane_g5_ParamLimits

0x7275,	// (0x00060bdf) main_camera_pane_g6_ParamLimits

0x7275,	// (0x00060bdf) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00068b2f) main_camera_pane_g_ParamLimits

0x7e4c,	// (0x000617b6) main_camera_pane_t1_ParamLimits

0x7e4c,	// (0x000617b6) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00068b40) main_camera_pane_t_ParamLimits

0x71ce,	// (0x00060b38) bg_popup_preview_window_pane_cp01_ParamLimits

0x71ce,	// (0x00060b38) bg_popup_preview_window_pane_cp01

0x0f1d,	// (0x0005a887) popup_phob_thumbnail2_window_g1_ParamLimits

0x0f1d,	// (0x0005a887) popup_phob_thumbnail2_window_g1

0x6f73,	// (0x000608dd) call2_cli_visual_pane

0x9b55,	// (0x000634bf) popup_call2_audio_conf_window_ParamLimits

0x9b55,	// (0x000634bf) popup_call2_audio_conf_window

0x9b68,	// (0x000634d2) popup_call2_audio_first_window_ParamLimits

0x9b68,	// (0x000634d2) popup_call2_audio_first_window

0x9be4,	// (0x0006354e) popup_call2_audio_in_window_ParamLimits

0x9be4,	// (0x0006354e) popup_call2_audio_in_window

0x9c14,	// (0x0006357e) popup_call2_audio_out_window_ParamLimits

0x9c14,	// (0x0006357e) popup_call2_audio_out_window

0x9c60,	// (0x000635ca) popup_call2_audio_second_window_ParamLimits

0x9c60,	// (0x000635ca) popup_call2_audio_second_window

0x9cac,	// (0x00063616) popup_call2_audio_wait_window_ParamLimits

0x9cac,	// (0x00063616) popup_call2_audio_wait_window

0x6f73,	// (0x000608dd) bg_popup_call2_act_pane_cp03

0x0f29,	// (0x0005a893) list_conf_pane_cp

0x0f31,	// (0x0005a89b) popup_call2_audio_conf_window_t1

0xe884,	// (0x000681ee) list_single_graphic_popup_conf2_pane_ParamLimits

0xe884,	// (0x000681ee) list_single_graphic_popup_conf2_pane

0xe897,	// (0x00068201) list_highlight_pane_cp04

0x0f3f,	// (0x0005a8a9) list_single_graphic_popup_conf2_pane_g1

0xe8a8,	// (0x00068212) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x00068e22) list_single_graphic_popup_conf2_pane_g

0x0f47,	// (0x0005a8b1) list_single_graphic_popup_conf2_pane_t1

0x0f55,	// (0x0005a8bf) bg_popup_call2_act_pane_cp01_ParamLimits

0x0f55,	// (0x0005a8bf) bg_popup_call2_act_pane_cp01

0x0fdf,	// (0x0005a949) call_type_pane_cp05_ParamLimits

0x0fdf,	// (0x0005a949) call_type_pane_cp05

0x1033,	// (0x0005a99d) popup_call2_audio_second_window_g1_ParamLimits

0x1033,	// (0x0005a99d) popup_call2_audio_second_window_g1

0x1087,	// (0x0005a9f1) popup_call2_audio_second_window_g2_ParamLimits

0x1087,	// (0x0005a9f1) popup_call2_audio_second_window_g2

0x0002,

0xf4bd,	// (0x00068e27) popup_call2_audio_second_window_g_ParamLimits

0xf4bd,	// (0x00068e27) popup_call2_audio_second_window_g

0x10ec,	// (0x0005aa56) popup_call2_audio_second_window_t1_ParamLimits

0x10ec,	// (0x0005aa56) popup_call2_audio_second_window_t1

0x11a7,	// (0x0005ab11) popup_call2_audio_second_window_t2_ParamLimits

0x11a7,	// (0x0005ab11) popup_call2_audio_second_window_t2

0x11fa,	// (0x0005ab64) popup_call2_audio_second_window_t3_ParamLimits

0x11fa,	// (0x0005ab64) popup_call2_audio_second_window_t3

0x0003,

0xf4c4,	// (0x00068e2e) popup_call2_audio_second_window_t_ParamLimits

0xf4c4,	// (0x00068e2e) popup_call2_audio_second_window_t

0x6f73,	// (0x000608dd) bg_popup_call2_in_pane_cp02

0x12ed,	// (0x0005ac57) call_type_pane_cp04

0x12f5,	// (0x0005ac5f) popup_call2_audio_wait_window_g1

0x12fd,	// (0x0005ac67) popup_call2_audio_wait_window_g2

0x0001,

0xf4cd,	// (0x00068e37) popup_call2_audio_wait_window_g

0x1305,	// (0x0005ac6f) popup_call2_audio_wait_window_t3

0x1313,	// (0x0005ac7d) bg_popup_call2_act_pane_ParamLimits

0x1313,	// (0x0005ac7d) bg_popup_call2_act_pane

0x13d3,	// (0x0005ad3d) call_type_pane_cp03_ParamLimits

0x13d3,	// (0x0005ad3d) call_type_pane_cp03

0x1437,	// (0x0005ada1) popup_call2_audio_first_window_g1_ParamLimits

0x1437,	// (0x0005ada1) popup_call2_audio_first_window_g1

0x14a7,	// (0x0005ae11) popup_call2_audio_first_window_g2_ParamLimits

0x14a7,	// (0x0005ae11) popup_call2_audio_first_window_g2

0x150b,	// (0x0005ae75) popup_call2_audio_first_window_g3_ParamLimits

0x150b,	// (0x0005ae75) popup_call2_audio_first_window_g3

0x0004,

0xf4d2,	// (0x00068e3c) popup_call2_audio_first_window_g_ParamLimits

0xf4d2,	// (0x00068e3c) popup_call2_audio_first_window_g

0x1593,	// (0x0005aefd) popup_call2_audio_first_window_t1_ParamLimits

0x1593,	// (0x0005aefd) popup_call2_audio_first_window_t1

0x1696,	// (0x0005b000) popup_call2_audio_first_window_t4_ParamLimits

0x1696,	// (0x0005b000) popup_call2_audio_first_window_t4

0x1779,	// (0x0005b0e3) popup_call2_audio_first_window_t5_ParamLimits

0x1779,	// (0x0005b0e3) popup_call2_audio_first_window_t5

0x0003,

0xf4dd,	// (0x00068e47) popup_call2_audio_first_window_t_ParamLimits

0xf4dd,	// (0x00068e47) popup_call2_audio_first_window_t

0x71c6,	// (0x00060b30) bg_popup_call2_act_pane_g1

0x1e3e,	// (0x0005b7a8) popup_cale_lunar_info_window_t1

0x1e4c,	// (0x0005b7b6) popup_cale_lunar_info_window_t2

0x1e5a,	// (0x0005b7c4) popup_cale_lunar_info_window_t3

0x6f73,	// (0x000608dd) bg_popup_call2_bubble_pane

0x187a,	// (0x0005b1e4) bg_popup_call2_in_pane_cp01_ParamLimits

0x187a,	// (0x0005b1e4) bg_popup_call2_in_pane_cp01

0x12ed,	// (0x0005ac57) call_type_pane_cp02

0x18c2,	// (0x0005b22c) popup_call2_audio_out_window_g1_ParamLimits

0x18c2,	// (0x0005b22c) popup_call2_audio_out_window_g1

0x18ee,	// (0x0005b258) popup_call2_audio_out_window_g2_ParamLimits

0x18ee,	// (0x0005b258) popup_call2_audio_out_window_g2

0x1916,	// (0x0005b280) popup_call2_audio_out_window_g3_ParamLimits

0x1916,	// (0x0005b280) popup_call2_audio_out_window_g3

0x0003,

0xf4e6,	// (0x00068e50) popup_call2_audio_out_window_g_ParamLimits

0xf4e6,	// (0x00068e50) popup_call2_audio_out_window_g

0x1951,	// (0x0005b2bb) popup_call2_audio_out_window_t1_ParamLimits

0x1951,	// (0x0005b2bb) popup_call2_audio_out_window_t1

0x19b0,	// (0x0005b31a) popup_call2_audio_out_window_t2_ParamLimits

0x19b0,	// (0x0005b31a) popup_call2_audio_out_window_t2

0x1a04,	// (0x0005b36e) popup_call2_audio_out_window_t3_ParamLimits

0x1a04,	// (0x0005b36e) popup_call2_audio_out_window_t3

0x1a1a,	// (0x0005b384) popup_call2_audio_out_window_t4_ParamLimits

0x1a1a,	// (0x0005b384) popup_call2_audio_out_window_t4

0x1a30,	// (0x0005b39a) popup_call2_audio_out_window_t5_ParamLimits

0x1a30,	// (0x0005b39a) popup_call2_audio_out_window_t5

0x0005,

0xf4ef,	// (0x00068e59) popup_call2_audio_out_window_t_ParamLimits

0xf4ef,	// (0x00068e59) popup_call2_audio_out_window_t

0x1a94,	// (0x0005b3fe) bg_popup_call2_in_pane_ParamLimits

0x1a94,	// (0x0005b3fe) bg_popup_call2_in_pane

0x1af0,	// (0x0005b45a) popup_call2_audio_in_window_g1_ParamLimits

0x1af0,	// (0x0005b45a) popup_call2_audio_in_window_g1

0x1b28,	// (0x0005b492) popup_call2_audio_in_window_g2_ParamLimits

0x1b28,	// (0x0005b492) popup_call2_audio_in_window_g2

0x1b60,	// (0x0005b4ca) popup_call2_audio_in_window_g3_ParamLimits

0x1b60,	// (0x0005b4ca) popup_call2_audio_in_window_g3

0x0003,

0xf4fc,	// (0x00068e66) popup_call2_audio_in_window_g_ParamLimits

0xf4fc,	// (0x00068e66) popup_call2_audio_in_window_g

0x1bb8,	// (0x0005b522) popup_call2_audio_in_window_t1_ParamLimits

0x1bb8,	// (0x0005b522) popup_call2_audio_in_window_t1

0x1c38,	// (0x0005b5a2) popup_call2_audio_in_window_t2_ParamLimits

0x1c38,	// (0x0005b5a2) popup_call2_audio_in_window_t2

0x1cb8,	// (0x0005b622) popup_call2_audio_in_window_t3_ParamLimits

0x1cb8,	// (0x0005b622) popup_call2_audio_in_window_t3

0x1cd2,	// (0x0005b63c) popup_call2_audio_in_window_t4_ParamLimits

0x1cd2,	// (0x0005b63c) popup_call2_audio_in_window_t4

0x1ce4,	// (0x0005b64e) popup_call2_audio_in_window_t5_ParamLimits

0x1ce4,	// (0x0005b64e) popup_call2_audio_in_window_t5

0x1cf9,	// (0x0005b663) popup_call2_audio_in_window_t6_ParamLimits

0x1cf9,	// (0x0005b663) popup_call2_audio_in_window_t6

0x0005,

0xf505,	// (0x00068e6f) popup_call2_audio_in_window_t_ParamLimits

0xf505,	// (0x00068e6f) popup_call2_audio_in_window_t

0x71c6,	// (0x00060b30) bg_popup_call2_in_pane_g1

0x1e68,	// (0x0005b7d2) popup_cale_lunar_info_window_t4

0x0003,

0xf580,	// (0x00068eea) popup_cale_lunar_info_window_t

0x71ce,	// (0x00060b38) bg_popup_call2_rect_pane_ParamLimits

0x71ce,	// (0x00060b38) bg_popup_call2_rect_pane

0x6f73,	// (0x000608dd) call2_cli_visual_graphic_pane

0x6f73,	// (0x000608dd) call2_cli_visual_text_pane

0xa0d8,	// (0x00063a42) smil_status_volume_pane_g3

0x0002,

0x71e6,	// (0x00060b50) call2_cli_visual_graphic_pane_g1

0x71e6,	// (0x00060b50) call2_cli_visual_graphic_pane_g2

0x71e6,	// (0x00060b50) call2_cli_visual_graphic_pane_g3

0x0002,

0xf512,	// (0x00068e7c) call2_cli_visual_graphic_pane_g

0x1d0e,	// (0x0005b678) bg_popup_call2_rect_pane_g1

0x7690,	// (0x00060ffa) bg_popup_call2_rect_pane_g2

0x1d16,	// (0x0005b680) bg_popup_call2_rect_pane_g3

0x1d1e,	// (0x0005b688) bg_popup_call2_rect_pane_g4

0x1d26,	// (0x0005b690) bg_popup_call2_rect_pane_g5

0x1d2e,	// (0x0005b698) bg_popup_call2_rect_pane_g6

0x1d36,	// (0x0005b6a0) bg_popup_call2_rect_pane_g7

0x1d3e,	// (0x0005b6a8) bg_popup_call2_rect_pane_g8

0x1d46,	// (0x0005b6b0) bg_popup_call2_rect_pane_g9

0x0008,

0xf519,	// (0x00068e83) bg_popup_call2_rect_pane_g

0x1d4e,	// (0x0005b6b8) bg_popup_call2_bubble_pane_g1

0x1d56,	// (0x0005b6c0) bg_popup_call2_bubble_pane_g2

0x1d5e,	// (0x0005b6c8) bg_popup_call2_bubble_pane_g3

0x1d66,	// (0x0005b6d0) bg_popup_call2_bubble_pane_g4

0x1d6e,	// (0x0005b6d8) bg_popup_call2_bubble_pane_g5

0x1d76,	// (0x0005b6e0) bg_popup_call2_bubble_pane_g6

0x1d7e,	// (0x0005b6e8) bg_popup_call2_bubble_pane_g7

0x1d86,	// (0x0005b6f0) bg_popup_call2_bubble_pane_g8

0x1d8e,	// (0x0005b6f8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52c,	// (0x00068e96) bg_popup_call2_bubble_pane_g

0x7769,	// (0x000610d3) aid_cale_week_size_cell_pane

0x7e60,	// (0x000617ca) aid_cams_cif_uncrop_pane_ParamLimits

0x7e60,	// (0x000617ca) aid_cams_cif_uncrop_pane

0x7fcf,	// (0x00061939) aid_cams_size_cell_ParamLimits

0x7fcf,	// (0x00061939) aid_cams_size_cell

0x7fdb,	// (0x00061945) grid_cams_pane_ParamLimits

0x7fe7,	// (0x00061951) linegrid_cams_pane_ParamLimits

0x8101,	// (0x00061a6b) call_video_pane_t1

0x811e,	// (0x00061a88) call_video_pane_t2

0x0001,

0xf222,	// (0x00068b8c) call_video_pane_t

0x8772,	// (0x000620dc) aid_cale_month_size_cell_pane_ParamLimits

0x8772,	// (0x000620dc) aid_cale_month_size_cell_pane

0xf5c4,	// (0x00068f2e) smil_status_volume_pane_g

0xa0e5,	// (0x00063a4f) volume_smil_pane_ParamLimits

0x686a,	// (0x000601d4) aid_popup2_width_pane

0x75f1,	// (0x00060f5b) cell_qdial_pane_g4_ParamLimits

0x75f1,	// (0x00060f5b) cell_qdial_pane_g4

0x9560,	// (0x00062eca) aid_blid_cardinal_pane_ParamLimits

0x956c,	// (0x00062ed6) aid_blid_destination_pane_ParamLimits

0x956c,	// (0x00062ed6) aid_blid_destination_pane

0x71ce,	// (0x00060b38) bg_popup_call_poc_act_pane_ParamLimits

0x71ce,	// (0x00060b38) bg_popup_call_poc_act_pane

0x71ce,	// (0x00060b38) bg_popup_call_poc_inact_pane_ParamLimits

0x71ce,	// (0x00060b38) bg_popup_call_poc_inact_pane

0x1d96,	// (0x0005b700) bg_popup_call_poc_act_pane_g1

0x1d9e,	// (0x0005b708) bg_popup_call_poc_act_pane_g2

0x1da6,	// (0x0005b710) bg_popup_call_poc_act_pane_g3

0x1dae,	// (0x0005b718) bg_popup_call_poc_act_pane_g4

0x1db6,	// (0x0005b720) bg_popup_call_poc_act_pane_g5

0x1dbe,	// (0x0005b728) bg_popup_call_poc_act_pane_g6

0x1dc6,	// (0x0005b730) bg_popup_call_poc_act_pane_g7

0x1dce,	// (0x0005b738) bg_popup_call_poc_act_pane_g8

0x6f73,	// (0x000608dd) main_usb_pane

0x9f64,	// (0x000638ce) popup_cale_lunar_info_window

0x8401,	// (0x00061d6b) im_reading_pane_t1_ParamLimits

0x8439,	// (0x00061da3) list_im_pane_ParamLimits

0x844a,	// (0x00061db4) scroll_pane_cp07_ParamLimits

0x6f73,	// (0x000608dd) grid_highlight_pane_cp012

0x71ce,	// (0x00060b38) mup_scale_pane_ParamLimits

0x150b,	// (0x0005ae75) main_usb_pane_g1_ParamLimits

0x150b,	// (0x0005ae75) main_usb_pane_g1

0x9d0d,	// (0x00063677) main_usb_pane_g2_ParamLimits

0x9d0d,	// (0x00063677) main_usb_pane_g2

0x0001,

0xf569,	// (0x00068ed3) main_usb_pane_g_ParamLimits

0xf569,	// (0x00068ed3) main_usb_pane_g

0x9d19,	// (0x00063683) main_usb_pane_t1_ParamLimits

0x9d19,	// (0x00063683) main_usb_pane_t1

0x9d2b,	// (0x00063695) main_usb_pane_t2_ParamLimits

0x9d2b,	// (0x00063695) main_usb_pane_t2

0x9d3d,	// (0x000636a7) main_usb_pane_t3_ParamLimits

0x9d3d,	// (0x000636a7) main_usb_pane_t3

0x9d4f,	// (0x000636b9) main_usb_pane_t4_ParamLimits

0x9d4f,	// (0x000636b9) main_usb_pane_t4

0x9d61,	// (0x000636cb) main_usb_pane_t5_ParamLimits

0x9d61,	// (0x000636cb) main_usb_pane_t5

0x9d73,	// (0x000636dd) main_usb_pane_t6_ParamLimits

0x9d73,	// (0x000636dd) main_usb_pane_t6

0x0005,

0xf56e,	// (0x00068ed8) main_usb_pane_t_ParamLimits

0xe9d1,	// (0x0006833b) aid_text_placing

0x950c,	// (0x00062e76) main_location2_pane_t1_ParamLimits

0x9522,	// (0x00062e8c) main_location2_pane_t2_ParamLimits

0x9538,	// (0x00062ea2) main_location2_pane_t3_ParamLimits

0x954e,	// (0x00062eb8) main_location2_pane_t4_ParamLimits

0x954e,	// (0x00062eb8) main_location2_pane_t4

0xf375,	// (0x00068cdf) main_location2_pane_t_ParamLimits

0x721e,	// (0x00060b88) find_pinb_pane_g2_ParamLimits

0x721e,	// (0x00060b88) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00068a44) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00068a44) find_pinb_pane_g

0x722a,	// (0x00060b94) find_pinb_pane_t1_ParamLimits

0x723c,	// (0x00060ba6) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00068a49) find_pinb_pane_t_ParamLimits

0x6f73,	// (0x000608dd) main_call3_pane

0x8b55,	// (0x000624bf) cale_month_day_heading_pane_t1_ParamLimits

0x8bdb,	// (0x00062545) cale_month_day_heading_pane_t2_ParamLimits

0x8c6c,	// (0x000625d6) cale_month_day_heading_pane_t3_ParamLimits

0x8cfd,	// (0x00062667) cale_month_day_heading_pane_t4_ParamLimits

0x8d8e,	// (0x000626f8) cale_month_day_heading_pane_t5_ParamLimits

0x8e1f,	// (0x00062789) cale_month_day_heading_pane_t6_ParamLimits

0x8eb0,	// (0x0006281a) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00068bc4) cale_month_day_heading_pane_t_ParamLimits

0x91da,	// (0x00062b44) smil_status_volume_pane

0x996e,	// (0x000632d8) postcard_address_pane_ParamLimits

0x996e,	// (0x000632d8) postcard_address_pane

0x997a,	// (0x000632e4) postcard_message_pane_ParamLimits

0x997a,	// (0x000632e4) postcard_message_pane

0x9ce9,	// (0x00063653) call2_cli_visual_pane_t1_ParamLimits

0x9ce9,	// (0x00063653) call2_cli_visual_pane_t1

0xa236,	// (0x00063ba0) postcard_message_pane_t1_ParamLimits

0xa236,	// (0x00063ba0) postcard_message_pane_t1

0xa21f,	// (0x00063b89) postcard_address_pane_t1_ParamLimits

0xa21f,	// (0x00063b89) postcard_address_pane_t1

0xa212,	// (0x00063b7c) popup_call3_audio_in_window_ParamLimits

0xa212,	// (0x00063b7c) popup_call3_audio_in_window

0xa0fa,	// (0x00063a64) bg_popup_call3_in_pane_ParamLimits

0xa0fa,	// (0x00063a64) bg_popup_call3_in_pane

0xa158,	// (0x00063ac2) popup_call3_audio_in_window_g1_ParamLimits

0xa158,	// (0x00063ac2) popup_call3_audio_in_window_g1

0xa170,	// (0x00063ada) popup_call3_audio_in_window_g2_ParamLimits

0xa170,	// (0x00063ada) popup_call3_audio_in_window_g2

0xa188,	// (0x00063af2) popup_call3_audio_in_window_g3_ParamLimits

0xa188,	// (0x00063af2) popup_call3_audio_in_window_g3

0x0003,

0xf5cb,	// (0x00068f35) popup_call3_audio_in_window_g_ParamLimits

0xf5cb,	// (0x00068f35) popup_call3_audio_in_window_g

0xa1b0,	// (0x00063b1a) popup_call3_audio_in_window_t1_ParamLimits

0xa1b0,	// (0x00063b1a) popup_call3_audio_in_window_t1

0xa1d8,	// (0x00063b42) popup_call3_audio_in_window_t2_ParamLimits

0xa1d8,	// (0x00063b42) popup_call3_audio_in_window_t2

0xa200,	// (0x00063b6a) popup_call3_audio_in_window_t3_ParamLimits

0xa200,	// (0x00063b6a) popup_call3_audio_in_window_t3

0x0002,

0xf5d4,	// (0x00068f3e) popup_call3_audio_in_window_t_ParamLimits

0xf5d4,	// (0x00068f3e) popup_call3_audio_in_window_t

0x7ddf,	// (0x00061749) bg_popup_call3_rect_pane

0x1d0e,	// (0x0005b678) bg_popup_call3_rect_pane_g1

0x7690,	// (0x00060ffa) bg_popup_call3_rect_pane_g2

0x1d16,	// (0x0005b680) bg_popup_call3_rect_pane_g3

0x1d1e,	// (0x0005b688) bg_popup_call3_rect_pane_g4

0x1d26,	// (0x0005b690) bg_popup_call3_rect_pane_g5

0x1d2e,	// (0x0005b698) bg_popup_call3_rect_pane_g6

0x1d36,	// (0x0005b6a0) bg_popup_call3_rect_pane_g7

0x6858,	// (0x000601c2) mup_visualizer_osc_pane

0x6858,	// (0x000601c2) mup_visualizer_spec_pane

0xa11a,	// (0x00063a84) call3_video_qcif_pane_ParamLimits

0xa11a,	// (0x00063a84) call3_video_qcif_pane

0xa12a,	// (0x00063a94) call3_video_qcif_uncrop_pane_ParamLimits

0xa12a,	// (0x00063a94) call3_video_qcif_uncrop_pane

0xa136,	// (0x00063aa0) call3_video_subqcif_pane_ParamLimits

0xa136,	// (0x00063aa0) call3_video_subqcif_pane

0xa148,	// (0x00063ab2) call3_video_subqcif_uncrop_pane_ParamLimits

0xa148,	// (0x00063ab2) call3_video_subqcif_uncrop_pane

0xa1a0,	// (0x00063b0a) popup_call3_audio_in_window_g4_ParamLimits

0xa1a0,	// (0x00063b0a) popup_call3_audio_in_window_g4

0x6858,	// (0x000601c2) mup_spec_half_pane

0x6858,	// (0x000601c2) mup_spec_half_pane_cp

0x6858,	// (0x000601c2) mup_osc_middle_pane

0x7fc5,	// (0x0006192f) mup_visualizer_osc_pane_g1

0x1fb4,	// (0x0005b91e) mup_spec_bar_pane_ParamLimits

0x1fb4,	// (0x0005b91e) mup_spec_bar_pane

0x7fc5,	// (0x0006192f) mup_spec_bar_pane_g1

0x7fc5,	// (0x0006192f) mup_spec_bar_pane_g2

0x0001,

0xf3ef,	// (0x00068d59) mup_spec_bar_pane_g

0x7769,	// (0x000610d3) aid_cale_week_size_cell_pane_ParamLimits

0x777e,	// (0x000610e8) bg_cale_heading_pane_ParamLimits

0x7796,	// (0x00061100) bg_cale_pane_cp01_ParamLimits

0x77b3,	// (0x0006111d) cale_week_corner_pane_ParamLimits

0x77cd,	// (0x00061137) cale_week_day_heading_pane_ParamLimits

0x77e5,	// (0x0006114f) cale_week_scroll_pane_g1_ParamLimits

0x77f8,	// (0x00061162) cale_week_scroll_pane_g2_ParamLimits

0x780b,	// (0x00061175) cale_week_scroll_pane_g3_ParamLimits

0x781e,	// (0x00061188) cale_week_scroll_pane_g4_ParamLimits

0x7831,	// (0x0006119b) cale_week_scroll_pane_g5_ParamLimits

0x7844,	// (0x000611ae) cale_week_scroll_pane_g6_ParamLimits

0x7857,	// (0x000611c1) cale_week_scroll_pane_g7_ParamLimits

0x786a,	// (0x000611d4) cale_week_scroll_pane_g8_ParamLimits

0x787d,	// (0x000611e7) cale_week_scroll_pane_g9_ParamLimits

0x7890,	// (0x000611fa) cale_week_scroll_pane_g10_ParamLimits

0x78a3,	// (0x0006120d) cale_week_scroll_pane_g11_ParamLimits

0x78b6,	// (0x00061220) cale_week_scroll_pane_g12_ParamLimits

0x78c9,	// (0x00061233) cale_week_scroll_pane_g13_ParamLimits

0x78dc,	// (0x00061246) cale_week_scroll_pane_g14_ParamLimits

0x78ef,	// (0x00061259) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00068ad5) cale_week_scroll_pane_g_ParamLimits

0x7915,	// (0x0006127f) cale_week_time_pane_ParamLimits

0x7928,	// (0x00061292) grid_cale_week_pane_ParamLimits

0x793d,	// (0x000612a7) listscroll_cale_week_pane_t1

0x794f,	// (0x000612b9) scroll_pane_cp08_ParamLimits

0x87f4,	// (0x0006215e) cale_month_corner_pane_ParamLimits

0x8b0a,	// (0x00062474) cale_month_pane_t1

0x8b1c,	// (0x00062486) cale_month_week_pane_ParamLimits

0x150b,	// (0x0005ae75) popup_call_status_window_g1_ParamLimits

0x9343,	// (0x00062cad) popup_call_status_window_g2_ParamLimits

0x934f,	// (0x00062cb9) popup_call_status_window_g3_ParamLimits

0xf2fc,	// (0x00068c66) popup_call_status_window_g_ParamLimits

0xe817,	// (0x00068181) aid_call2_pane

0x5c8a,	// (0x0005f5f4) msg_header_pane_g1

0x996e,	// (0x000632d8) postcard_address2_pane_ParamLimits

0x996e,	// (0x000632d8) postcard_address2_pane

0x997a,	// (0x000632e4) postcard_message2_pane_ParamLimits

0x997a,	// (0x000632e4) postcard_message2_pane

0xa08f,	// (0x000639f9) message2_row_pane_ParamLimits

0xa08f,	// (0x000639f9) message2_row_pane

0xa0a7,	// (0x00063a11) address2_row_pane_ParamLimits

0xa0a7,	// (0x00063a11) address2_row_pane

0x1f82,	// (0x0005b8ec) postcard_message2_row_pane_g1

0x1f8a,	// (0x0005b8f4) postcard_message2_row_pane_t1

0x1f82,	// (0x0005b8ec) address2_row_pane_g1

0x1f8a,	// (0x0005b8f4) address2_row_pane_t1

0x7dd7,	// (0x00061741) aid_size_cell_vorec

0x6f73,	// (0x000608dd) main_rss_pane

0xa0ba,	// (0x00063a24) rss_list_single_pane_ParamLimits

0xa0ba,	// (0x00063a24) rss_list_single_pane

0x1f98,	// (0x0005b902) rss_list_single_pane_t1

0x1fa6,	// (0x0005b910) rss_list_single_pane_t2

0x0001,

0xf5bf,	// (0x00068f29) rss_list_single_pane_t

0x6f73,	// (0x000608dd) main_camera2_pane

0x6f73,	// (0x000608dd) main_video2_pane

0x6aa6,	// (0x00060410) cams_zoom_pane_cp2_ParamLimits

0x6aa6,	// (0x00060410) cams_zoom_pane_cp2

0x6aa6,	// (0x00060410) image2_vga_pane_ParamLimits

0x6aa6,	// (0x00060410) image2_vga_pane

0x7275,	// (0x00060bdf) main_camera2_pane_g1_ParamLimits

0x7275,	// (0x00060bdf) main_camera2_pane_g1

0x7275,	// (0x00060bdf) main_camera2_pane_g2_ParamLimits

0x7275,	// (0x00060bdf) main_camera2_pane_g2

0x7275,	// (0x00060bdf) main_camera2_pane_g3_ParamLimits

0x7275,	// (0x00060bdf) main_camera2_pane_g3

0x7275,	// (0x00060bdf) main_camera2_pane_g4_ParamLimits

0x7275,	// (0x00060bdf) main_camera2_pane_g4

0x7275,	// (0x00060bdf) main_camera2_pane_g5_ParamLimits

0x7275,	// (0x00060bdf) main_camera2_pane_g5

0x7275,	// (0x00060bdf) main_camera2_pane_g6_ParamLimits

0x7275,	// (0x00060bdf) main_camera2_pane_g6

0x7275,	// (0x00060bdf) main_camera2_pane_g7_ParamLimits

0x7275,	// (0x00060bdf) main_camera2_pane_g7

0x7275,	// (0x00060bdf) main_camera2_pane_g8_ParamLimits

0x7275,	// (0x00060bdf) main_camera2_pane_g8

0x0008,

0xf5db,	// (0x00068f45) main_camera2_pane_g_ParamLimits

0xf5db,	// (0x00068f45) main_camera2_pane_g

0x7e4c,	// (0x000617b6) main_camera2_pane_t1_ParamLimits

0x7e4c,	// (0x000617b6) main_camera2_pane_t1

0x7e4c,	// (0x000617b6) main_camera2_pane_t2_ParamLimits

0x7e4c,	// (0x000617b6) main_camera2_pane_t2

0x7e4c,	// (0x000617b6) main_camera2_pane_t3_ParamLimits

0x7e4c,	// (0x000617b6) main_camera2_pane_t3

0x7e4c,	// (0x000617b6) main_camera2_pane_t4_ParamLimits

0x7e4c,	// (0x000617b6) main_camera2_pane_t4

0x0006,

0xf5ee,	// (0x00068f58) main_camera2_pane_t_ParamLimits

0xf5ee,	// (0x00068f58) main_camera2_pane_t

0xee2a,	// (0x00068794) cams_zoom_pane_cp4_ParamLimits

0xee2a,	// (0x00068794) cams_zoom_pane_cp4

0xec02,	// (0x0006856c) image2_cif_pane_ParamLimits

0xec02,	// (0x0006856c) image2_cif_pane

0x6aa6,	// (0x00060410) image2_subqcif_pane_ParamLimits

0x6aa6,	// (0x00060410) image2_subqcif_pane

0xee38,	// (0x000687a2) main_video2_pane_g1_ParamLimits

0xee38,	// (0x000687a2) main_video2_pane_g1

0xee38,	// (0x000687a2) main_video2_pane_g2_ParamLimits

0xee38,	// (0x000687a2) main_video2_pane_g2

0xee38,	// (0x000687a2) main_video2_pane_g3_ParamLimits

0xee38,	// (0x000687a2) main_video2_pane_g3

0xee38,	// (0x000687a2) main_video2_pane_g4_ParamLimits

0xee38,	// (0x000687a2) main_video2_pane_g4

0xee38,	// (0x000687a2) main_video2_pane_g5_ParamLimits

0xee38,	// (0x000687a2) main_video2_pane_g5

0xee38,	// (0x000687a2) main_video2_pane_g6_ParamLimits

0xee38,	// (0x000687a2) main_video2_pane_g6

0x0005,

0xf5fd,	// (0x00068f67) main_video2_pane_g_ParamLimits

0xf5fd,	// (0x00068f67) main_video2_pane_g

0xee46,	// (0x000687b0) main_video2_pane_t1_ParamLimits

0xee46,	// (0x000687b0) main_video2_pane_t1

0xee46,	// (0x000687b0) main_video2_pane_t2_ParamLimits

0xee46,	// (0x000687b0) main_video2_pane_t2

0xee46,	// (0x000687b0) main_video2_pane_t3_ParamLimits

0xee46,	// (0x000687b0) main_video2_pane_t3

0x0002,

0xf60a,	// (0x00068f74) main_video2_pane_t_ParamLimits

0xf60a,	// (0x00068f74) main_video2_pane_t

0x9e22,	// (0x0006378c) call_muted_g2

0x0001,

0xf5b1,	// (0x00068f1b) call_muted_g

0x6f73,	// (0x000608dd) main_mup2_pane

0x7283,	// (0x00060bed) main_mup2_pane_g1_ParamLimits

0x7283,	// (0x00060bed) main_mup2_pane_g1

0x7283,	// (0x00060bed) main_mup2_pane_g2_ParamLimits

0x7283,	// (0x00060bed) main_mup2_pane_g2

0x7fc5,	// (0x0006192f) main_mup_pane_g13_cp1

0x6858,	// (0x000601c2) mup_volume_pane_cp1

0x7283,	// (0x00060bed) main_mup2_pane_g4_ParamLimits

0x7283,	// (0x00060bed) main_mup2_pane_g4

0x7283,	// (0x00060bed) main_mup2_pane_g5_ParamLimits

0x7283,	// (0x00060bed) main_mup2_pane_g5

0x7283,	// (0x00060bed) main_mup2_pane_g6_ParamLimits

0x7283,	// (0x00060bed) main_mup2_pane_g6

0x7283,	// (0x00060bed) main_mup2_pane_g7_ParamLimits

0x7283,	// (0x00060bed) main_mup2_pane_g7

0x0006,

0xf611,	// (0x00068f7b) main_mup2_pane_g_ParamLimits

0xf611,	// (0x00068f7b) main_mup2_pane_g

0x7291,	// (0x00060bfb) main_mup2_pane_t1_ParamLimits

0x7291,	// (0x00060bfb) main_mup2_pane_t1

0x7291,	// (0x00060bfb) main_mup2_pane_t2_ParamLimits

0x7291,	// (0x00060bfb) main_mup2_pane_t2

0x7291,	// (0x00060bfb) main_mup2_pane_t3_ParamLimits

0x7291,	// (0x00060bfb) main_mup2_pane_t3

0x7291,	// (0x00060bfb) main_mup2_pane_t4_ParamLimits

0x7291,	// (0x00060bfb) main_mup2_pane_t4

0x7291,	// (0x00060bfb) main_mup2_pane_t5_ParamLimits

0x7291,	// (0x00060bfb) main_mup2_pane_t5

0x7291,	// (0x00060bfb) main_mup2_pane_t6_ParamLimits

0x7291,	// (0x00060bfb) main_mup2_pane_t6

0x0005,

0xf620,	// (0x00068f8a) main_mup2_pane_t_ParamLimits

0xf620,	// (0x00068f8a) main_mup2_pane_t

0x2125,	// (0x0005ba8f) mup2_visualizer_pane_ParamLimits

0x2125,	// (0x0005ba8f) mup2_visualizer_pane

0x2125,	// (0x0005ba8f) mup_progress_pane_cp_ParamLimits

0x2125,	// (0x0005ba8f) mup_progress_pane_cp

0x1fec,	// (0x0005b956) mup_volume_pane_cp_ParamLimits

0x1fec,	// (0x0005b956) mup_volume_pane_cp

0x7267,	// (0x00060bd1) mup2_visualizer_pane_g1_ParamLimits

0x7267,	// (0x00060bd1) mup2_visualizer_pane_g1

0x7275,	// (0x00060bdf) mup2_visualizer_pane_g2_ParamLimits

0x7275,	// (0x00060bdf) mup2_visualizer_pane_g2

0x7275,	// (0x00060bdf) mup2_visualizer_pane_g3_ParamLimits

0x7275,	// (0x00060bdf) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00068a4e) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00068a4e) mup2_visualizer_pane_g

0x7dd7,	// (0x00061741) aid_size_cell_fmradio

0x9f17,	// (0x00063881) aid_height_parent_landcape

0x8504,	// (0x00061e6e) wml_content_pane_cp

0x850c,	// (0x00061e76) wml_tabs_pane

0x8515,	// (0x00061e7f) popup_wml_miniature_window

0x851d,	// (0x00061e87) scroll_pane_cp021

0x8531,	// (0x00061e9b) wml_content_pane_comp8

0x6f73,	// (0x000608dd) bg_popup_sub_pane_cp05

0x2002,	// (0x0005b96c) popup_wml_miniature_window_g1

0x200a,	// (0x0005b974) wml_miniature_view_pane

0xa29b,	// (0x00063c05) aid_size_wml_view

0xa2a3,	// (0x00063c0d) wml_miniature_view_pane_g1

0xa2ac,	// (0x00063c16) wml_miniature_view_pane_g2

0xa2b5,	// (0x00063c1f) wml_miniature_view_pane_g3

0xa2bd,	// (0x00063c27) wml_miniature_view_pane_g4

0xa2c5,	// (0x00063c2f) wml_miniature_view_pane_g5

0xa2cd,	// (0x00063c37) wml_miniature_view_pane_g6

0xa2d5,	// (0x00063c3f) wml_miniature_view_pane_g7

0xa2dd,	// (0x00063c47) wml_miniature_view_pane_g8

0x0007,

0xf62d,	// (0x00068f97) wml_miniature_view_pane_g

0x2012,	// (0x0005b97c) background_graphic_ParamLimits

0x2012,	// (0x0005b97c) background_graphic

0x201e,	// (0x0005b988) wml_tabs_2_pane

0x2027,	// (0x0005b991) wml_tabs_3_pane_ParamLimits

0x2027,	// (0x0005b991) wml_tabs_3_pane

0x2039,	// (0x0005b9a3) wml_tabs_4_pane_ParamLimits

0x2039,	// (0x0005b9a3) wml_tabs_4_pane

0x204f,	// (0x0005b9b9) wml_tabs_5_pane_ParamLimits

0x204f,	// (0x0005b9b9) wml_tabs_5_pane

0x2069,	// (0x0005b9d3) wml_tabs_pane_g2_ParamLimits

0x2069,	// (0x0005b9d3) wml_tabs_pane_g2

0x207d,	// (0x0005b9e7) wml_tabs_pane_g3_ParamLimits

0x207d,	// (0x0005b9e7) wml_tabs_pane_g3

0xa2e5,	// (0x00063c4f) wml_tabs_2_active_pane_ParamLimits

0xa2e5,	// (0x00063c4f) wml_tabs_2_active_pane

0xa2f5,	// (0x00063c5f) wml_tabs_2_passive_pane_ParamLimits

0xa2f5,	// (0x00063c5f) wml_tabs_2_passive_pane

0xa305,	// (0x00063c6f) wml_tabs_3_active_pane_cp_ParamLimits

0xa305,	// (0x00063c6f) wml_tabs_3_active_pane_cp

0xa316,	// (0x00063c80) wml_tabs_3_passive_pane_ParamLimits

0xa316,	// (0x00063c80) wml_tabs_3_passive_pane

0xa327,	// (0x00063c91) wml_tabs_3_passive_pane_cp_ParamLimits

0xa327,	// (0x00063c91) wml_tabs_3_passive_pane_cp

0xa338,	// (0x00063ca2) tabs_4_active_pane

0xa340,	// (0x00063caa) tabs_4_passive_pane

0xa348,	// (0x00063cb2) tabs_4_passive_pane_cp

0xa350,	// (0x00063cba) tabs_4_passive_pane_cp2

0x9d05,	// (0x0006366f) aid_height_text

0x2125,	// (0x0005ba8f) mup_volume_cont_pane_ParamLimits

0x2125,	// (0x0005ba8f) mup_volume_cont_pane

0x71f0,	// (0x00060b5a) aid_size_cell_pinb

0x6858,	// (0x000601c2) aid_size_list_pinb

0x2125,	// (0x0005ba8f) mup2_volume_cont_pane_ParamLimits

0x2125,	// (0x0005ba8f) mup2_volume_cont_pane

0xa358,	// (0x00063cc2) mup2_volume_cont_pane_g1_ParamLimits

0xa358,	// (0x00063cc2) mup2_volume_cont_pane_g1

0x6872,	// (0x000601dc) aid_size_cell_touch_ParamLimits

0x6872,	// (0x000601dc) aid_size_cell_touch

0x6abc,	// (0x00060426) touch_pane_ParamLimits

0x6abc,	// (0x00060426) touch_pane

0x6858,	// (0x000601c2) main_rss2_pane

0x20a4,	// (0x0005ba0e) listscroll_rss2_pane

0x20ad,	// (0x0005ba17) rss2_navigation_pane

0x20b5,	// (0x0005ba1f) list_rss2_pane

0xe94e,	// (0x000682b8) scroll_pane_cp22

0x20bd,	// (0x0005ba27) rss2_navigation_pane_g1

0x20c6,	// (0x0005ba30) rss2_navigation_pane_g2

0x20ce,	// (0x0005ba38) rss2_navigation_pane_g3

0x0002,

0xf63e,	// (0x00068fa8) rss2_navigation_pane_g

0x20d6,	// (0x0005ba40) rss2_navigation_pane_t1

0xa36e,	// (0x00063cd8) rss2_list_single_pane_ParamLimits

0xa36e,	// (0x00063cd8) rss2_list_single_pane

0x20e4,	// (0x0005ba4e) rss2_list_single_pane_t2

0x20f2,	// (0x0005ba5c) rss2_list_single_pane_t3_ParamLimits

0x20f2,	// (0x0005ba5c) rss2_list_single_pane_t3

0x210f,	// (0x0005ba79) rss2_list_single_pane_t4

0x91c4,	// (0x00062b2e) smil_status_pane_g1

0xec02,	// (0x0006856c) main_image2_pane_ParamLimits

0xec02,	// (0x0006856c) main_image2_pane

0x7275,	// (0x00060bdf) main_camera2_pane_g9_ParamLimits

0x7275,	// (0x00060bdf) main_camera2_pane_g9

0x7e4c,	// (0x000617b6) main_camera2_pane_t5_ParamLimits

0x7e4c,	// (0x000617b6) main_camera2_pane_t5

0xa287,	// (0x00063bf1) main_camera2_pane_t6_ParamLimits

0xa287,	// (0x00063bf1) main_camera2_pane_t6

0xa385,	// (0x00063cef) main_image2_pane_g1_ParamLimits

0xa385,	// (0x00063cef) main_image2_pane_g1

0x9b1a,	// (0x00063484) smil2_video_pane_ParamLimits

0x9b1a,	// (0x00063484) smil2_video_pane

0x68a2,	// (0x0006020c) aid_zoom_text_primary_cp

0x6a5d,	// (0x000603c7) popup_preview_fixed_window

0x83f9,	// (0x00061d63) im_reading_pane_g1

0xa251,	// (0x00063bbb) cams2_bc_adjust_pane_cp_ParamLimits

0xa251,	// (0x00063bbb) cams2_bc_adjust_pane_cp

0x6aa6,	// (0x00060410) cams2_bc_adjust_pane_ParamLimits

0x6aa6,	// (0x00060410) cams2_bc_adjust_pane

0x7fc5,	// (0x0006192f) cams2_bc_adjust_pane_g1

0x6858,	// (0x000601c2) cams2_slider_pane

0x7fc5,	// (0x0006192f) cams2_slider_pane_g1

0x7fc5,	// (0x0006192f) cams2_slider_pane_g2

0x0006,

0xf645,	// (0x00068faf) cams2_slider_pane_g

0x72bf,	// (0x00060c29) calc_display_pane_ParamLimits

0x72d7,	// (0x00060c41) calc_paper_pane_ParamLimits

0x72f3,	// (0x00060c5d) grid_calc_pane_ParamLimits

0x93c1,	// (0x00062d2b) popup_clock_digital_window_t1_ParamLimits

0xedbf,	// (0x00068729) main_image_pane_t1

0x72a5,	// (0x00060c0f) aid_size_cell_calc_ParamLimits

0x72a5,	// (0x00060c0f) aid_size_cell_calc

0x9f44,	// (0x000638ae) popup_blid_sat_info2_window_ParamLimits

0x9f44,	// (0x000638ae) popup_blid_sat_info2_window

0x211d,	// (0x0005ba87) aid_size_cell_blid

0x2125,	// (0x0005ba8f) bg_popup_window_pane_cp07

0x2148,	// (0x0005bab2) grid_popup_blid_pane

0x2150,	// (0x0005baba) heading_pane_cp05_ParamLimits

0x2150,	// (0x0005baba) heading_pane_cp05

0x2218,	// (0x0005bb82) cell_popup_blid_pane_ParamLimits

0x2218,	// (0x0005bb82) cell_popup_blid_pane

0x2238,	// (0x0005bba2) cell_popup_blid_pane_g1

0x2240,	// (0x0005bbaa) cell_popup_blid_pane_t1

0x2125,	// (0x0005ba8f) mup2_indicator_pane_ParamLimits

0x2125,	// (0x0005ba8f) mup2_indicator_pane

0x6858,	// (0x000601c2) mup2_visualizer_osc_pane

0x1fec,	// (0x0005b956) mup2_visualizer_spec_pane_ParamLimits

0x1fec,	// (0x0005b956) mup2_visualizer_spec_pane

0x6858,	// (0x000601c2) mup2_spec_half_pane

0x6858,	// (0x000601c2) mup2_spec_half_pane_cp

0x6858,	// (0x000601c2) mup2_spec_bar_pane_ParamLimits

0x6858,	// (0x000601c2) mup2_spec_bar_pane

0x7fc5,	// (0x0006192f) mup2_spec_bar_pane_g1

0x224e,	// (0x0005bbb8) mup2_spec_bar_pane_g2

0x0001,

0xf66b,	// (0x00068fd5) mup2_spec_bar_pane_g

0x6858,	// (0x000601c2) mup2_osc_middle_pane

0x7fc5,	// (0x0006192f) mup2_visualizer_osc_pane_g1

0x6b29,	// (0x00060493) popup_number_entry_window_t1_ParamLimits

0x6b3c,	// (0x000604a6) popup_number_entry_window_t2_ParamLimits

0x6b4e,	// (0x000604b8) popup_number_entry_window_t3_ParamLimits

0x6b60,	// (0x000604ca) popup_number_entry_window_t5_ParamLimits

0x6b60,	// (0x000604ca) popup_number_entry_window_t5

0xf085,	// (0x000689ef) popup_number_entry_window_t_ParamLimits

0x6b95,	// (0x000604ff) text_title_cp2_ParamLimits

0x9858,	// (0x000631c2) aid_hotspot_pointer_text2_pane

0x98ea,	// (0x00063254) main_viewer_pane_g9_ParamLimits

0x98ea,	// (0x00063254) main_viewer_pane_g9

0x8b0a,	// (0x00062474) cale_month_pane_t1_ParamLimits

0x9257,	// (0x00062bc1) bg_cale_pane_ParamLimits

0xe4e0,	// (0x00067e4a) list_cale_pane_ParamLimits

0xe4f1,	// (0x00067e5b) listscroll_cale_day_pane_t1

0xe503,	// (0x00067e6d) scroll_pane_cp09_ParamLimits

0x968d,	// (0x00062ff7) main_mup_eq_pane_t1_ParamLimits

0x968d,	// (0x00062ff7) main_mup_eq_pane_t1

0x96a3,	// (0x0006300d) main_mup_eq_pane_t2_ParamLimits

0x96a3,	// (0x0006300d) main_mup_eq_pane_t2

0x96b9,	// (0x00063023) main_mup_eq_pane_t3_ParamLimits

0x96b9,	// (0x00063023) main_mup_eq_pane_t3

0x96cf,	// (0x00063039) main_mup_eq_pane_t4_ParamLimits

0x96cf,	// (0x00063039) main_mup_eq_pane_t4

0x96e5,	// (0x0006304f) main_mup_eq_pane_t5_ParamLimits

0x96e5,	// (0x0006304f) main_mup_eq_pane_t5

0x96fb,	// (0x00063065) main_mup_eq_pane_t6_ParamLimits

0x96fb,	// (0x00063065) main_mup_eq_pane_t6

0x970d,	// (0x00063077) main_mup_eq_pane_t7_ParamLimits

0x970d,	// (0x00063077) main_mup_eq_pane_t7

0x971f,	// (0x00063089) main_mup_eq_pane_t8_ParamLimits

0x971f,	// (0x00063089) main_mup_eq_pane_t8

0x9731,	// (0x0006309b) main_mup_eq_pane_t9_ParamLimits

0x9731,	// (0x0006309b) main_mup_eq_pane_t9

0x9747,	// (0x000630b1) main_mup_eq_pane_t10_ParamLimits

0x9747,	// (0x000630b1) main_mup_eq_pane_t10

0x0009,

0xf3fb,	// (0x00068d65) main_mup_eq_pane_t_ParamLimits

0xf3fb,	// (0x00068d65) main_mup_eq_pane_t

0x97da,	// (0x00063144) mup_equalizer_pane_cp5_ParamLimits

0x97ec,	// (0x00063156) mup_equalizer_pane_cp6_ParamLimits

0x97fe,	// (0x00063168) mup_equalizer_pane_cp7_ParamLimits

0x6858,	// (0x000601c2) main_gallery_pane

0x1fbe,	// (0x0005b928) smil2_volume_pane

0x1fd9,	// (0x0005b943) smil_status_volume_pane_g1_ParamLimits

0x1fc6,	// (0x0005b930) smil_status_volume_pane_g2_ParamLimits

0xa0d8,	// (0x00063a42) smil_status_volume_pane_g3_ParamLimits

0xf5c4,	// (0x00068f2e) smil_status_volume_pane_g_ParamLimits

0x2125,	// (0x0005ba8f) bg_popup_window_pane_cp07_ParamLimits

0x2133,	// (0x0005ba9d) blid_firmament_pane

0x6aa6,	// (0x00060410) aid_size_cell_gallery_ParamLimits

0x6aa6,	// (0x00060410) aid_size_cell_gallery

0xa391,	// (0x00063cfb) grid_gallery_pane_ParamLimits

0xa391,	// (0x00063cfb) grid_gallery_pane

0xa3a0,	// (0x00063d0a) cell_gallery_pane_ParamLimits

0xa3a0,	// (0x00063d0a) cell_gallery_pane

0xec02,	// (0x0006856c) bg_cell_gallery_focus_pane_ParamLimits

0xec02,	// (0x0006856c) bg_cell_gallery_focus_pane

0x7267,	// (0x00060bd1) cell_gallery_pane_g1_ParamLimits

0x7267,	// (0x00060bd1) cell_gallery_pane_g1

0x7267,	// (0x00060bd1) cell_gallery_pane_g2_ParamLimits

0x7267,	// (0x00060bd1) cell_gallery_pane_g2

0x7267,	// (0x00060bd1) cell_gallery_pane_g3_ParamLimits

0x7267,	// (0x00060bd1) cell_gallery_pane_g3

0x7275,	// (0x00060bdf) cell_gallery_pane_g4_ParamLimits

0x7275,	// (0x00060bdf) cell_gallery_pane_g4

0x0003,

0xf670,	// (0x00068fda) cell_gallery_pane_g_ParamLimits

0xf670,	// (0x00068fda) cell_gallery_pane_g

0x2258,	// (0x0005bbc2) bg_cell_gallery_focus_pane_g1

0x2260,	// (0x0005bbca) bg_cell_gallery_focus_pane_g2

0x2268,	// (0x0005bbd2) bg_cell_gallery_focus_pane_g3

0x2270,	// (0x0005bbda) bg_cell_gallery_focus_pane_g4

0x2278,	// (0x0005bbe2) bg_cell_gallery_focus_pane_g5

0x2280,	// (0x0005bbea) bg_cell_gallery_focus_pane_g6

0x2288,	// (0x0005bbf2) bg_cell_gallery_focus_pane_g7

0x2290,	// (0x0005bbfa) bg_cell_gallery_focus_pane_g8

0x0007,

0xf679,	// (0x00068fe3) bg_cell_gallery_focus_pane_g

0x2298,	// (0x0005bc02) aid_firma_cardinal

0x22ac,	// (0x0005bc16) blid_firmament_pane_t1

0x22c3,	// (0x0005bc2d) blid_firmament_pane_t2

0x22da,	// (0x0005bc44) blid_firmament_pane_t3

0x22f1,	// (0x0005bc5b) blid_firmament_pane_t4

0x0003,

0xf68a,	// (0x00068ff4) blid_firmament_pane_t

0x2308,	// (0x0005bc72) blid_sat_info_pane

0x7fc5,	// (0x0006192f) blid_sat_info_pane_g1

0x7fc5,	// (0x0006192f) blid_sat_info_pane_g2

0x0001,

0xf3ef,	// (0x00068d59) blid_sat_info_pane_g

0x2318,	// (0x0005bc82) blid_sat_info_pane_t1

0x2326,	// (0x0005bc90) smil2_volume_content_pane

0x232f,	// (0x0005bc99) smil2_volume_pane_g1

0x2337,	// (0x0005bca1) smil2_volume_content_pane_g1

0x2340,	// (0x0005bcaa) smil2_volume_content_pane_g2

0x2349,	// (0x0005bcb3) smil2_volume_content_pane_g3

0x2352,	// (0x0005bcbc) smil2_volume_content_pane_g4

0x235b,	// (0x0005bcc5) smil2_volume_content_pane_g5

0x2364,	// (0x0005bcce) smil2_volume_content_pane_g6

0x236d,	// (0x0005bcd7) smil2_volume_content_pane_g7

0x2376,	// (0x0005bce0) smil2_volume_content_pane_g8

0x237f,	// (0x0005bce9) smil2_volume_content_pane_g9

0x2388,	// (0x0005bcf2) smil2_volume_content_pane_g10

0x0009,

0xf693,	// (0x00068ffd) smil2_volume_content_pane_g

0x79ba,	// (0x00061324) cale_week_day_heading_pane_t1_ParamLimits

0x79f5,	// (0x0006135f) cale_week_day_heading_pane_t2_ParamLimits

0x7a30,	// (0x0006139a) cale_week_day_heading_pane_t3_ParamLimits

0x7a6b,	// (0x000613d5) cale_week_day_heading_pane_t4_ParamLimits

0x7aa6,	// (0x00061410) cale_week_day_heading_pane_t5_ParamLimits

0x7ae1,	// (0x0006144b) cale_week_day_heading_pane_t6_ParamLimits

0x7b1c,	// (0x00061486) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00068af6) cale_week_day_heading_pane_t_ParamLimits

0x7b57,	// (0x000614c1) bg_cale_side_pane_ParamLimits

0x7b65,	// (0x000614cf) cale_week_time_pane_t1_ParamLimits

0x7b9f,	// (0x00061509) cale_week_time_pane_t2_ParamLimits

0x7bd9,	// (0x00061543) cale_week_time_pane_t3_ParamLimits

0x7c13,	// (0x0006157d) cale_week_time_pane_t4_ParamLimits

0x7c4d,	// (0x000615b7) cale_week_time_pane_t5_ParamLimits

0x7c87,	// (0x000615f1) cale_week_time_pane_t6_ParamLimits

0x7cc1,	// (0x0006162b) cale_week_time_pane_t7_ParamLimits

0x7cfb,	// (0x00061665) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00068b05) cale_week_time_pane_t_ParamLimits

0x7d35,	// (0x0006169f) cell_cale_week_pane_g2_ParamLimits

0x7b57,	// (0x000614c1) bg_cale_side_pane_cp01_ParamLimits

0x8f41,	// (0x000628ab) cale_month_week_pane_t1_ParamLimits

0x8f7a,	// (0x000628e4) cale_month_week_pane_t2_ParamLimits

0x8fb3,	// (0x0006291d) cale_month_week_pane_t3_ParamLimits

0x8fec,	// (0x00062956) cale_month_week_pane_t4_ParamLimits

0x9025,	// (0x0006298f) cale_month_week_pane_t5_ParamLimits

0x905e,	// (0x000629c8) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00068bd3) cale_month_week_pane_t_ParamLimits

0x9185,	// (0x00062aef) cell_cale_month_pane_g1_ParamLimits

0x6858,	// (0x000601c2) main_cale_event_viewer_pane

0x6858,	// (0x000601c2) listscroll_cale_event_viewer_pane

0x2391,	// (0x0005bcfb) list_cale_ev_pane

0x2399,	// (0x0005bd03) scroll_pane_cp023

0xa3bc,	// (0x00063d26) field_cale_ev_pane_ParamLimits

0xa3bc,	// (0x00063d26) field_cale_ev_pane

0x23a5,	// (0x0005bd0f) field_cale_ev_content_pane_ParamLimits

0x23a5,	// (0x0005bd0f) field_cale_ev_content_pane

0x23b1,	// (0x0005bd1b) field_cale_ev_pane_g1_ParamLimits

0x23b1,	// (0x0005bd1b) field_cale_ev_pane_g1

0x23bd,	// (0x0005bd27) field_cale_ev_pane_g2_ParamLimits

0x23bd,	// (0x0005bd27) field_cale_ev_pane_g2

0x23d5,	// (0x0005bd3f) field_cale_ev_pane_g3_ParamLimits

0x23d5,	// (0x0005bd3f) field_cale_ev_pane_g3

0x0002,

0xf6a8,	// (0x00069012) field_cale_ev_pane_g_ParamLimits

0xf6a8,	// (0x00069012) field_cale_ev_pane_g

0x23ed,	// (0x0005bd57) field_cale_ev_pane_t1_ParamLimits

0x23ed,	// (0x0005bd57) field_cale_ev_pane_t1

0xa3d6,	// (0x00063d40) field_cale_ev_content_pane_t1_ParamLimits

0xa3d6,	// (0x00063d40) field_cale_ev_content_pane_t1

0xeca5,	// (0x0006860f) bg_button_pane_cp01

0x7750,	// (0x000610ba) listscroll_cale_week_pane_ParamLimits

0x7760,	// (0x000610ca) popup_toolbar_window_cp01

0x793d,	// (0x000612a7) listscroll_cale_week_pane_t1_ParamLimits

0x7750,	// (0x000610ba) listscroll_cale_day_pane_ParamLimits

0x7760,	// (0x000610ca) popup_toolbar_window_cp02

0xe4f1,	// (0x00067e5b) listscroll_cale_day_pane_t1_ParamLimits

0x7750,	// (0x000610ba) main_cale_month_pane_ParamLimits

0xa017,	// (0x00063981) popup_toolbar_window_cp03_ParamLimits

0xa017,	// (0x00063981) popup_toolbar_window_cp03

0x9a42,	// (0x000633ac) main_image_pane_g2_ParamLimits

0x9a42,	// (0x000633ac) main_image_pane_g2

0x9a4e,	// (0x000633b8) main_image_pane_g3_ParamLimits

0x9a4e,	// (0x000633b8) main_image_pane_g3

0x0002,

0xf48d,	// (0x00068df7) main_image_pane_g_ParamLimits

0xf48d,	// (0x00068df7) main_image_pane_g

0xedbf,	// (0x00068729) main_image_pane_t1_ParamLimits

0x9a5a,	// (0x000633c4) main_image_pane_t2_ParamLimits

0x9a5a,	// (0x000633c4) main_image_pane_t2

0x9a6c,	// (0x000633d6) main_image_pane_t3_ParamLimits

0x9a6c,	// (0x000633d6) main_image_pane_t3

0x9a7e,	// (0x000633e8) main_image_pane_t4_ParamLimits

0x9a7e,	// (0x000633e8) main_image_pane_t4

0x0003,

0xf494,	// (0x00068dfe) main_image_pane_t_ParamLimits

0xf494,	// (0x00068dfe) main_image_pane_t

0x9a90,	// (0x000633fa) popup_image_details_window_cp01

0x9a98,	// (0x00063402) popup_toobar_trans_pane_cp01_ParamLimits

0x9a98,	// (0x00063402) popup_toobar_trans_pane_cp01

0x9f8b,	// (0x000638f5) popup_image_details_window_ParamLimits

0x9f8b,	// (0x000638f5) popup_image_details_window

0x9f97,	// (0x00063901) popup_image_focus_window

0x6aa6,	// (0x00060410) camera2_autofocus_pane_ParamLimits

0x6aa6,	// (0x00060410) camera2_autofocus_pane

0x6858,	// (0x000601c2) bg_popup_sub_pane_cp06

0x2404,	// (0x0005bd6e) popup_image_focus_window_g1

0x240c,	// (0x0005bd76) popup_image_focus_window_g2

0x2414,	// (0x0005bd7e) popup_image_focus_window_g3

0x241c,	// (0x0005bd86) popup_image_focus_window_g4

0x0003,

0xf6af,	// (0x00069019) popup_image_focus_window_g

0x2424,	// (0x0005bd8e) popup_image_focus_window_t1

0x2432,	// (0x0005bd9c) popup_image_focus_window_t2

0x2441,	// (0x0005bdab) popup_image_focus_window_t3

0x0002,

0xf6b8,	// (0x00069022) popup_image_focus_window_t

0x7267,	// (0x00060bd1) camera2_autofocus_pane_g1

0xec02,	// (0x0006856c) bg_tb_trans_pane_cp01

0x244f,	// (0x0005bdb9) popup_image_details_window_g1

0x2462,	// (0x0005bdcc) popup_image_details_window_g2

0x0002,

0xf6ca,	// (0x00069034) popup_image_details_window_g

0x248b,	// (0x0005bdf5) popup_image_details_window_t1

0x249d,	// (0x0005be07) popup_image_details_window_t2

0x24b6,	// (0x0005be20) popup_image_details_window_t3

0x24ca,	// (0x0005be34) popup_image_details_window_t4

0x24e5,	// (0x0005be4f) popup_image_details_window_t5

0x0004,

0xf6d1,	// (0x0006903b) popup_image_details_window_t

0x73f8,	// (0x00060d62) bg_calc_paper_pane_ParamLimits

0x6858,	// (0x000601c2) grid_highlight_pane_cp013

0x7410,	// (0x00060d7a) list_calc_pane_ParamLimits

0x7422,	// (0x00060d8c) scroll_pane_cp024

0x742a,	// (0x00060d94) bg_calc_display_pane_ParamLimits

0x7436,	// (0x00060da0) calc_display_pane_t1_ParamLimits

0x744b,	// (0x00060db5) calc_display_pane_t2_ParamLimits

0x7460,	// (0x00060dca) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00068a76) calc_display_pane_t_ParamLimits

0x755f,	// (0x00060ec9) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00068a93) cell_calc_pane_g

0x7568,	// (0x00060ed2) cell_calc_pane_t1

0x7577,	// (0x00060ee1) grid_highlight_pane_cp02_ParamLimits

0x758d,	// (0x00060ef7) toolbar_button_pane_cp01_ParamLimits

0x758d,	// (0x00060ef7) toolbar_button_pane_cp01

0xee04,	// (0x0006876e) temp_image_control_pane_ParamLimits

0xee04,	// (0x0006876e) temp_image_control_pane

0xec02,	// (0x0006856c) main_mp3_pane

0x24ff,	// (0x0005be69) temp_image_control_pane_g1_ParamLimits

0x24ff,	// (0x0005be69) temp_image_control_pane_g1

0x250d,	// (0x0005be77) temp_image_control_pane_g2_ParamLimits

0x250d,	// (0x0005be77) temp_image_control_pane_g2

0x251f,	// (0x0005be89) temp_image_control_pane_g3_ParamLimits

0x251f,	// (0x0005be89) temp_image_control_pane_g3

0xa3f0,	// (0x00063d5a) temp_image_control_pane_g4_ParamLimits

0xa3f0,	// (0x00063d5a) temp_image_control_pane_g4

0x0003,

0xf6dc,	// (0x00069046) temp_image_control_pane_g_ParamLimits

0xf6dc,	// (0x00069046) temp_image_control_pane_g

0x24ff,	// (0x0005be69) main_mp3_pane_g1

0xa401,	// (0x00063d6b) main_mp3_pane_g2

0x0007,

0xf6e5,	// (0x0006904f) main_mp3_pane_g

0x2554,	// (0x0005bebe) main_mp3_pane_t1

0x7275,	// (0x00060bdf) main_camera_pane_g8_ParamLimits

0x7275,	// (0x00060bdf) main_camera_pane_g8

0x7f7b,	// (0x000618e5) main_video_pane_g7_ParamLimits

0x7f7b,	// (0x000618e5) main_video_pane_g7

0x7e4c,	// (0x000617b6) main_camera2_pane_t7_ParamLimits

0x7e4c,	// (0x000617b6) main_camera2_pane_t7

0x84c4,	// (0x00061e2e) scroll_pane_cp025_ParamLimits

0x84c4,	// (0x00061e2e) scroll_pane_cp025

0x84d8,	// (0x00061e42) scroll_pane_cp026_ParamLimits

0x84d8,	// (0x00061e42) scroll_pane_cp026

0x84e7,	// (0x00061e51) wml_content_pane_ParamLimits

0x6858,	// (0x000601c2) main_touch_calib_pane

0xa499,	// (0x00063e03) main_touch_calib_pane_g1

0xa4a5,	// (0x00063e0f) main_touch_calib_pane_g2

0xa4b1,	// (0x00063e1b) main_touch_calib_pane_g3

0xa4bd,	// (0x00063e27) main_touch_calib_pane_g4

0x0003,

0xf703,	// (0x0006906d) main_touch_calib_pane_g

0xa4c9,	// (0x00063e33) main_touch_calib_pane_t1

0xa4de,	// (0x00063e48) main_touch_calib_pane_t2

0x0004,

0xf70c,	// (0x00069076) main_touch_calib_pane_t

0xea0a,	// (0x00068374) mup_progress_pane_cp02

0xea3f,	// (0x000683a9) navi_pane_g1

0xeaca,	// (0x00068434) navi_pane_mp_t3

0xec02,	// (0x0006856c) main_mp3_pane_ParamLimits

0xa052,	// (0x000639bc) navi_pane_ParamLimits

0x24ff,	// (0x0005be69) main_mp3_pane_g1_ParamLimits

0xa401,	// (0x00063d6b) main_mp3_pane_g2_ParamLimits

0xa40d,	// (0x00063d77) main_mp3_pane_g3_ParamLimits

0xa40d,	// (0x00063d77) main_mp3_pane_g3

0xa419,	// (0x00063d83) main_mp3_pane_g4_ParamLimits

0xa419,	// (0x00063d83) main_mp3_pane_g4

0x7267,	// (0x00060bd1) main_mp3_pane_g5_ParamLimits

0x7267,	// (0x00060bd1) main_mp3_pane_g5

0x252f,	// (0x0005be99) main_mp3_pane_g6_ParamLimits

0x252f,	// (0x0005be99) main_mp3_pane_g6

0x253c,	// (0x0005bea6) main_mp3_pane_g7_ParamLimits

0x253c,	// (0x0005bea6) main_mp3_pane_g7

0x2548,	// (0x0005beb2) main_mp3_pane_g8_ParamLimits

0x2548,	// (0x0005beb2) main_mp3_pane_g8

0xf6e5,	// (0x0006904f) main_mp3_pane_g_ParamLimits

0xa425,	// (0x00063d8f) main_mp3_pane_t2

0xa433,	// (0x00063d9d) main_mp3_pane_t3

0x2562,	// (0x0005becc) main_mp3_pane_t4

0x2570,	// (0x0005beda) main_mp3_pane_t5

0x0005,

0xf6f6,	// (0x00069060) main_mp3_pane_t

0x257e,	// (0x0005bee8) mup_progress_pane_cp01

0x68a2,	// (0x0006020c) aid_zoom_text_secondary2

0x2391,	// (0x0005bcfb) list_cale_ev2_pane

0x2399,	// (0x0005bd03) scroll_pane_cp023_ParamLimits

0xa529,	// (0x00063e93) field_cale_ev2_pane_ParamLimits

0xa529,	// (0x00063e93) field_cale_ev2_pane

0xa53f,	// (0x00063ea9) field_cale_ev2_pane_g1_ParamLimits

0xa53f,	// (0x00063ea9) field_cale_ev2_pane_g1

0xa54b,	// (0x00063eb5) field_cale_ev2_pane_g2_ParamLimits

0xa54b,	// (0x00063eb5) field_cale_ev2_pane_g2

0xa563,	// (0x00063ecd) field_cale_ev2_pane_g3_ParamLimits

0xa563,	// (0x00063ecd) field_cale_ev2_pane_g3

0x0003,

0xf717,	// (0x00069081) field_cale_ev2_pane_g_ParamLimits

0xf717,	// (0x00069081) field_cale_ev2_pane_g

0x5d12,	// (0x0005f67c) field_cale_ev2_pane_t1_ParamLimits

0x5d12,	// (0x0005f67c) field_cale_ev2_pane_t1

0x5d29,	// (0x0005f693) field_cale_ev2_pane_t2_ParamLimits

0x5d29,	// (0x0005f693) field_cale_ev2_pane_t2

0x0001,

0xf720,	// (0x0006908a) field_cale_ev2_pane_t_ParamLimits

0xf720,	// (0x0006908a) field_cale_ev2_pane_t

0x993e,	// (0x000632a8) main_postcard_pane_g5_ParamLimits

0x993e,	// (0x000632a8) main_postcard_pane_g5

0x994a,	// (0x000632b4) main_postcard_pane_g6_ParamLimits

0x994a,	// (0x000632b4) main_postcard_pane_g6

0x6aa6,	// (0x00060410) camera2_autofocus_pane_cp_ParamLimits

0x6aa6,	// (0x00060410) camera2_autofocus_pane_cp

0xec02,	// (0x0006856c) main_mup3_pane

0xa5c0,	// (0x00063f2a) main_mup3_pane_g1_ParamLimits

0xa5c0,	// (0x00063f2a) main_mup3_pane_g1

0xa5e1,	// (0x00063f4b) main_mup3_pane_g2_ParamLimits

0xa5e1,	// (0x00063f4b) main_mup3_pane_g2

0xa64e,	// (0x00063fb8) main_mup3_pane_g3_ParamLimits

0xa64e,	// (0x00063fb8) main_mup3_pane_g3

0xa689,	// (0x00063ff3) main_mup3_pane_g4_ParamLimits

0xa689,	// (0x00063ff3) main_mup3_pane_g4

0xa6c4,	// (0x0006402e) main_mup3_pane_g5_ParamLimits

0xa6c4,	// (0x0006402e) main_mup3_pane_g5

0xa6ff,	// (0x00064069) main_mup3_pane_g6_ParamLimits

0xa6ff,	// (0x00064069) main_mup3_pane_g6

0x7275,	// (0x00060bdf) main_mup3_pane_g7_ParamLimits

0x7275,	// (0x00060bdf) main_mup3_pane_g7

0x0007,

0xf730,	// (0x0006909a) main_mup3_pane_g_ParamLimits

0xf730,	// (0x0006909a) main_mup3_pane_g

0xa76d,	// (0x000640d7) main_mup3_pane_t1_ParamLimits

0xa76d,	// (0x000640d7) main_mup3_pane_t1

0xa7ce,	// (0x00064138) main_mup3_pane_t2_ParamLimits

0xa7ce,	// (0x00064138) main_mup3_pane_t2

0xa889,	// (0x000641f3) main_mup3_pane_t4_ParamLimits

0xa889,	// (0x000641f3) main_mup3_pane_t4

0xa8cf,	// (0x00064239) main_mup3_pane_t5_ParamLimits

0xa8cf,	// (0x00064239) main_mup3_pane_t5

0xa973,	// (0x000642dd) main_mup3_pane_t6_ParamLimits

0xa973,	// (0x000642dd) main_mup3_pane_t6

0x0005,

0xf741,	// (0x000690ab) main_mup3_pane_t_ParamLimits

0xf741,	// (0x000690ab) main_mup3_pane_t

0xaa1b,	// (0x00064385) mup3_progress_pane_ParamLimits

0xaa1b,	// (0x00064385) mup3_progress_pane

0xaa7f,	// (0x000643e9) popup_mup3_control_window_ParamLimits

0xaa7f,	// (0x000643e9) popup_mup3_control_window

0x25fa,	// (0x0005bf64) popup_mup3_text_window

0xaa98,	// (0x00064402) mup3_progress_pane_t1

0xaab6,	// (0x00064420) mup3_progress_pane_t2

0x2602,	// (0x0005bf6c) mup3_progress_pane_t3

0x0002,

0xf74e,	// (0x000690b8) mup3_progress_pane_t

0x261f,	// (0x0005bf89) mup_progress_pane_cp03

0x6858,	// (0x000601c2) bg_tb_trans_pane_cp04

0xaad4,	// (0x0006443e) mup3_volume_pane

0xaadc,	// (0x00064446) popup_mup3_control_window_g1

0xaae5,	// (0x0006444f) mup3_volume_pane_g1

0xaaee,	// (0x00064458) mup3_volume_pane_g2

0xaaf7,	// (0x00064461) mup3_volume_pane_g3

0x0002,

0xf755,	// (0x000690bf) mup3_volume_pane_g

0x6858,	// (0x000601c2) bg_tb_trans_pane_cp03

0x262f,	// (0x0005bf99) popup_mup3_text_window_g1

0x2637,	// (0x0005bfa1) popup_mup3_text_window_t1

0x752a,	// (0x00060e94) list_calc_item_pane_g1_ParamLimits

0x2091,	// (0x0005b9fb) mup_volume_pane_cp_g1

0xa4f3,	// (0x00063e5d) main_touch_calib_pane_t3

0xa505,	// (0x00063e6f) main_touch_calib_pane_t4

0xa517,	// (0x00063e81) main_touch_calib_pane_t5

0x6862,	// (0x000601cc) aid_cell_size_toolbar2

0x686a,	// (0x000601d4) aid_popup3_width_pane

0x5be2,	// (0x0005f54c) aid_zoom_text_msg_primary

0x7e27,	// (0x00061791) vorec_t7

0x7499,	// (0x00060e03) bg_calc_paper_pane_g1_ParamLimits

0x74a5,	// (0x00060e0f) bg_calc_paper_pane_g2_ParamLimits

0x74b1,	// (0x00060e1b) bg_calc_paper_pane_g3_ParamLimits

0x74bd,	// (0x00060e27) bg_calc_paper_pane_g4_ParamLimits

0x74c9,	// (0x00060e33) bg_calc_paper_pane_g5_ParamLimits

0x74d5,	// (0x00060e3f) bg_calc_paper_pane_g6_ParamLimits

0x74e4,	// (0x00060e4e) bg_calc_paper_pane_g7_ParamLimits

0x74f3,	// (0x00060e5d) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00068a7d) bg_calc_paper_pane_g_ParamLimits

0x7502,	// (0x00060e6c) calc_bg_paper_pane_g9_ParamLimits

0x7e3f,	// (0x000617a9) image_qvga_pane_ParamLimits

0x7e3f,	// (0x000617a9) image_qvga_pane

0x71ce,	// (0x00060b38) bg_popup_sub_pane_cp04_ParamLimits

0xed3b,	// (0x000686a5) popup_mup_playback_window_g1_ParamLimits

0xed47,	// (0x000686b1) popup_mup_playback_window_t1_ParamLimits

0xed5c,	// (0x000686c6) popup_mup_playback_window_t2_ParamLimits

0xf488,	// (0x00068df2) popup_mup_playback_window_t_ParamLimits

0x7267,	// (0x00060bd1) main_mup2_pane_g3_ParamLimits

0x7267,	// (0x00060bd1) main_mup2_pane_g3

0x81ad,	// (0x00061b17) popup_toolbar_window_cp04

0x10db,	// (0x0005aa45) popup_call2_audio_second_window_g3_ParamLimits

0x10db,	// (0x0005aa45) popup_call2_audio_second_window_g3

0x1519,	// (0x0005ae83) popup_call2_audio_first_window_g4_ParamLimits

0x1519,	// (0x0005ae83) popup_call2_audio_first_window_g4

0x1b98,	// (0x0005b502) popup_call2_audio_in_window_g4_ParamLimits

0x1b98,	// (0x0005b502) popup_call2_audio_in_window_g4

0x9a35,	// (0x0006339f) aid_area_sk_bg_cut_ParamLimits

0x9a35,	// (0x0006339f) aid_area_sk_bg_cut

0xed71,	// (0x000686db) aid_area_sk_bg_cut_2_ParamLimits

0xed71,	// (0x000686db) aid_area_sk_bg_cut_2

0x6858,	// (0x000601c2) aid_placing_details_win

0x6858,	// (0x000601c2) aid_placing_details_win_2

0x7267,	// (0x00060bd1) camera2_autofocus_pane_g1_ParamLimits

0x6a50,	// (0x000603ba) popup_fixed_preview_cale_window_ParamLimits

0x6a50,	// (0x000603ba) popup_fixed_preview_cale_window

0xeb40,	// (0x000684aa) navi_slider_pane_g3

0xeb49,	// (0x000684b3) navi_slider_pane_g4

0xeb52,	// (0x000684bc) navi_slider_pane_g5

0xeb40,	// (0x000684aa) navi_slider_pane_g6

0x9661,	// (0x00062fcb) navi_slider_pane_g7

0xec72,	// (0x000685dc) mup_scale_pane_g3

0xec7b,	// (0x000685e5) mup_scale_pane_g4

0xec84,	// (0x000685ee) mup_scale_pane_g5

0x9810,	// (0x0006317a) mup_scale_pane_g6

0x9819,	// (0x00063183) mup_scale_pane_g7

0x7fc5,	// (0x0006192f) cams2_slider_pane_g3

0x7fc5,	// (0x0006192f) cams2_slider_pane_g4

0x7fc5,	// (0x0006192f) cams2_slider_pane_g5

0x7fc5,	// (0x0006192f) cams2_slider_pane_g6

0x7fc5,	// (0x0006192f) cams2_slider_pane_g7

0x7fc5,	// (0x0006192f) camera2_autofocus_pane_cp_g1

0x1f51,	// (0x0005b8bb) bg_popup_preview_window_pane_cp02_ParamLimits

0x1f51,	// (0x0005b8bb) bg_popup_preview_window_pane_cp02

0x2645,	// (0x0005bfaf) list_fp_cale_pane_ParamLimits

0x2645,	// (0x0005bfaf) list_fp_cale_pane

0x2651,	// (0x0005bfbb) popup_fixed_preview_cale_window_t1_ParamLimits

0x2651,	// (0x0005bfbb) popup_fixed_preview_cale_window_t1

0xab00,	// (0x0006446a) popup_fixed_preview_cale_window_t2_ParamLimits

0xab00,	// (0x0006446a) popup_fixed_preview_cale_window_t2

0xab15,	// (0x0006447f) popup_fixed_preview_cale_window_t3_ParamLimits

0xab15,	// (0x0006447f) popup_fixed_preview_cale_window_t3

0x0002,

0xf75c,	// (0x000690c6) popup_fixed_preview_cale_window_t_ParamLimits

0xf75c,	// (0x000690c6) popup_fixed_preview_cale_window_t

0xab2a,	// (0x00064494) list_single_fp_cale_pane_ParamLimits

0xab2a,	// (0x00064494) list_single_fp_cale_pane

0x266f,	// (0x0005bfd9) list_single_fp_cale_pane_g1_ParamLimits

0x266f,	// (0x0005bfd9) list_single_fp_cale_pane_g1

0x267b,	// (0x0005bfe5) list_single_fp_cale_pane_g2_ParamLimits

0x267b,	// (0x0005bfe5) list_single_fp_cale_pane_g2

0x0002,

0xf763,	// (0x000690cd) list_single_fp_cale_pane_g_ParamLimits

0xf763,	// (0x000690cd) list_single_fp_cale_pane_g

0x2694,	// (0x0005bffe) list_single_fp_cale_pane_t1_ParamLimits

0x2694,	// (0x0005bffe) list_single_fp_cale_pane_t1

0x26a6,	// (0x0005c010) list_single_fp_cale_pane_t2_ParamLimits

0x26a6,	// (0x0005c010) list_single_fp_cale_pane_t2

0x0001,

0xf76a,	// (0x000690d4) list_single_fp_cale_pane_t_ParamLimits

0xf76a,	// (0x000690d4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6858,	// (0x000601c2) main_dialer_pane

0xab3a,	// (0x000644a4) aid_cell_size_keypad

0x6858,	// (0x000601c2) dialer_ne_pane

0x6858,	// (0x000601c2) grid_dialer_command_1_pane

0x6858,	// (0x000601c2) grid_dialer_command_2_pane

0x6858,	// (0x000601c2) grid_dialer_keypad_pane

0x2125,	// (0x0005ba8f) bg_popup_call_pane_cp06_ParamLimits

0x2125,	// (0x0005ba8f) bg_popup_call_pane_cp06

0x2125,	// (0x0005ba8f) dialer_ne_clear_pane_ParamLimits

0x2125,	// (0x0005ba8f) dialer_ne_clear_pane

0x7fc5,	// (0x0006192f) dialer_ne_pane_g1

0x7e4c,	// (0x000617b6) dialer_ne_pane_t1_ParamLimits

0x7e4c,	// (0x000617b6) dialer_ne_pane_t1

0x28b2,	// (0x0005c21c) dialer_ne_pane_t2_ParamLimits

0x28b2,	// (0x0005c21c) dialer_ne_pane_t2

0xab44,	// (0x000644ae) dialer_ne_pane_t3_ParamLimits

0xab44,	// (0x000644ae) dialer_ne_pane_t3

0x0002,

0xf76f,	// (0x000690d9) dialer_ne_pane_t_ParamLimits

0xf76f,	// (0x000690d9) dialer_ne_pane_t

0xab44,	// (0x000644ae) dialer_ne_pane_t3_copy1_ParamLimits

0xab44,	// (0x000644ae) dialer_ne_pane_t3_copy1

0xab66,	// (0x000644d0) cell_dialer_keypad_pane_ParamLimits

0xab66,	// (0x000644d0) cell_dialer_keypad_pane

0xab6e,	// (0x000644d8) cell_dialer_command_1_pane_ParamLimits

0xab6e,	// (0x000644d8) cell_dialer_command_1_pane

0xab66,	// (0x000644d0) cell_dialer_command_2_pane_ParamLimits

0xab66,	// (0x000644d0) cell_dialer_command_2_pane

0xec02,	// (0x0006856c) bg_button_pane_cp02_ParamLimits

0xec02,	// (0x0006856c) bg_button_pane_cp02

0x7267,	// (0x00060bd1) cell_dialer_keypad_pane_g1_ParamLimits

0x7267,	// (0x00060bd1) cell_dialer_keypad_pane_g1

0xec02,	// (0x0006856c) bg_button_pane_cp03_ParamLimits

0xec02,	// (0x0006856c) bg_button_pane_cp03

0x7267,	// (0x00060bd1) cell_dialer_command_1_pane_g1_ParamLimits

0x7267,	// (0x00060bd1) cell_dialer_command_1_pane_g1

0x6858,	// (0x000601c2) bg_button_pane_cp04

0x7fc5,	// (0x0006192f) cell_dialer_command_2_pane_g1

0x6858,	// (0x000601c2) bg_button_pane_cp06

0x7fc5,	// (0x0006192f) dialer_ne_clear_pane_g1

0xea4b,	// (0x000683b5) navi_pane_g2

0x9609,	// (0x00062f73) navi_pane_g3

0x0002,

0xf38b,	// (0x00068cf5) navi_pane_g

0xead8,	// (0x00068442) navi_pane_mv_g2

0xeaff,	// (0x00068469) navi_pane_mv_g5

0x9626,	// (0x00062f90) navi_pane_mv_t1

0x742a,	// (0x00060d94) main_clock2_pane

0xabb3,	// (0x0006451d) main_clock2_list_pane_ParamLimits

0xabb3,	// (0x0006451d) main_clock2_list_pane

0xabd9,	// (0x00064543) main_clock2_pane_t1_ParamLimits

0xabd9,	// (0x00064543) main_clock2_pane_t1

0xabf9,	// (0x00064563) main_clock2_pane_t2_ParamLimits

0xabf9,	// (0x00064563) main_clock2_pane_t2

0x0004,

0xf77b,	// (0x000690e5) main_clock2_pane_t_ParamLimits

0xf77b,	// (0x000690e5) main_clock2_pane_t

0xac52,	// (0x000645bc) popup_clock_analogue_window_cp03_ParamLimits

0xac52,	// (0x000645bc) popup_clock_analogue_window_cp03

0xac70,	// (0x000645da) popup_clock_digital_window_cp02_ParamLimits

0xac70,	// (0x000645da) popup_clock_digital_window_cp02

0xacdd,	// (0x00064647) main_clock2_list_single_pane_ParamLimits

0xacdd,	// (0x00064647) main_clock2_list_single_pane

0x7ddf,	// (0x00061749) list_highlight_pane_cp05

0x2709,	// (0x0005c073) main_clock2_list_single_pane_t1

0x81ad,	// (0x00061b17) popup_toolbar_window_cp04_ParamLimits

0x7275,	// (0x00060bdf) camera2_autofocus_pane_g2_ParamLimits

0x7275,	// (0x00060bdf) camera2_autofocus_pane_g2

0x7275,	// (0x00060bdf) camera2_autofocus_pane_g3_ParamLimits

0x7275,	// (0x00060bdf) camera2_autofocus_pane_g3

0x7275,	// (0x00060bdf) camera2_autofocus_pane_g4_ParamLimits

0x7275,	// (0x00060bdf) camera2_autofocus_pane_g4

0x7275,	// (0x00060bdf) camera2_autofocus_pane_g5_ParamLimits

0x7275,	// (0x00060bdf) camera2_autofocus_pane_g5

0x0004,

0xf6bf,	// (0x00069029) camera2_autofocus_pane_g_ParamLimits

0xf6bf,	// (0x00069029) camera2_autofocus_pane_g

0xa587,	// (0x00063ef1) camera2_autofocus_pane_cp_g2

0xa58f,	// (0x00063ef9) camera2_autofocus_pane_cp_g3

0xa597,	// (0x00063f01) camera2_autofocus_pane_cp_g4

0xa59f,	// (0x00063f09) camera2_autofocus_pane_cp_g5

0x0004,

0xf725,	// (0x0006908f) camera2_autofocus_pane_cp_g

0x6858,	// (0x000601c2) popup_dialer_spcha_window

0x6858,	// (0x000601c2) bg_popup_sub_pane_cp07

0x6858,	// (0x000601c2) list_spcha_pane

0x6858,	// (0x000601c2) list_single_spcha_pane_ParamLimits

0x6858,	// (0x000601c2) list_single_spcha_pane

0x6858,	// (0x000601c2) list_highlight_pane_cp06

0x2717,	// (0x0005c081) list_single_spcha_pane_t1

0x1942,	// (0x0005b2ac) popup_call2_audio_out_window_g4_ParamLimits

0x1942,	// (0x0005b2ac) popup_call2_audio_out_window_g4

0x6858,	// (0x000601c2) main_imed2_pane

0x9f9f,	// (0x00063909) popup_imed_adjust2_window

0x9fb0,	// (0x0006391a) popup_imed_trans_window_ParamLimits

0x9fb0,	// (0x0006391a) popup_imed_trans_window

0x217c,	// (0x0005bae6) popup_blid_sat_info2_window_t1

0x218a,	// (0x0005baf4) popup_blid_sat_info2_window_t2

0x000a,

0xf654,	// (0x00068fbe) popup_blid_sat_info2_window_t

0xad87,	// (0x000646f1) aid_size_cell_colour_35

0xad9e,	// (0x00064708) aid_size_cell_colour_112

0xadb5,	// (0x0006471f) aid_size_cell_effect

0xec02,	// (0x0006856c) bg_tb_trans_pane_cp02

0xee5a,	// (0x000687c4) heading_imed_pane

0xadcf,	// (0x00064739) listscroll_imed_pane

0x2727,	// (0x0005c091) heading_imed_pane_g1

0x272f,	// (0x0005c099) heading_imed_pane_t1

0x273d,	// (0x0005c0a7) grid_imed_colour_35_pane_ParamLimits

0x273d,	// (0x0005c0a7) grid_imed_colour_35_pane

0xaddb,	// (0x00064745) grid_imed_effect_pane

0x2750,	// (0x0005c0ba) list_imed_aspect_pane

0xade7,	// (0x00064751) scroll_pane_cp027_ParamLimits

0xade7,	// (0x00064751) scroll_pane_cp027

0xadf3,	// (0x0006475d) cell_imed_effect_pane_ParamLimits

0xadf3,	// (0x0006475d) cell_imed_effect_pane

0x2758,	// (0x0005c0c2) cell_imed_colour_pane_ParamLimits

0x2758,	// (0x0005c0c2) cell_imed_colour_pane

0x2792,	// (0x0005c0fc) cell_imed_colour_pane_g1_ParamLimits

0x2792,	// (0x0005c0fc) cell_imed_colour_pane_g1

0x27a3,	// (0x0005c10d) hgihlgiht_grid_pane_cp016_ParamLimits

0x27a3,	// (0x0005c10d) hgihlgiht_grid_pane_cp016

0xae09,	// (0x00064773) cell_imed_effect_pane_g1

0xae11,	// (0x0006477b) grid_highlight_pane_cp017

0x27b4,	// (0x0005c11e) list_imed_single_pane_ParamLimits

0x27b4,	// (0x0005c11e) list_imed_single_pane

0x6858,	// (0x000601c2) list_highlight_pane_cp07

0x27c7,	// (0x0005c131) list_imed_aspect_pane_comp1_t1

0xee2a,	// (0x00068794) bg_tb_trans_pane_cp05

0x27e7,	// (0x0005c151) popup_imed_adjust2_window_g1

0x280e,	// (0x0005c178) popup_imed_adjust2_window_t1

0x2826,	// (0x0005c190) slider_imed_adjust_pane

0x283a,	// (0x0005c1a4) slider_imed_adjust_pane_g1

0x284a,	// (0x0005c1b4) slider_imed_adjust_pane_g2

0x285a,	// (0x0005c1c4) slider_imed_adjust_pane_g3

0x286b,	// (0x0005c1d5) slider_imed_adjust_pane_g4

0x0003,

0xf798,	// (0x00069102) slider_imed_adjust_pane_g

0xae1a,	// (0x00064784) aid_size_cell_clipart2

0xae26,	// (0x00064790) grid_imed_clipart_pane

0x287c,	// (0x0005c1e6) scroll_pane_cp031

0xae30,	// (0x0006479a) cell_imed_clipart_pane_ParamLimits

0xae30,	// (0x0006479a) cell_imed_clipart_pane

0xae47,	// (0x000647b1) cell_imed_clipart_pane_g1

0x6858,	// (0x000601c2) grid_highlight_pane_cp014

0xabbf,	// (0x00064529) main_clock2_pane_g1_ParamLimits

0xabbf,	// (0x00064529) main_clock2_pane_g1

0xac88,	// (0x000645f2) aid_call2_pane_cp10

0xac9a,	// (0x00064604) aid_call_pane_cp10

0xe9da,	// (0x00068344) popup_clock_analogue_window_cp10_g1

0xe9da,	// (0x00068344) popup_clock_analogue_window_cp10_g2

0xacac,	// (0x00064616) popup_clock_analogue_window_cp10_g3

0xacac,	// (0x00064616) popup_clock_analogue_window_cp10_g4

0xe9da,	// (0x00068344) popup_clock_analogue_window_cp10_g5

0x0004,

0xf786,	// (0x000690f0) popup_clock_analogue_window_cp10_g

0xacbe,	// (0x00064628) popup_clock_analogue_window_cp10_t1

0xacef,	// (0x00064659) clock_digital_number_pane_cp10_ParamLimits

0xacef,	// (0x00064659) clock_digital_number_pane_cp10

0xad07,	// (0x00064671) clock_digital_number_pane_cp11_ParamLimits

0xad07,	// (0x00064671) clock_digital_number_pane_cp11

0xad1f,	// (0x00064689) clock_digital_number_pane_cp12_ParamLimits

0xad1f,	// (0x00064689) clock_digital_number_pane_cp12

0xad37,	// (0x000646a1) clock_digital_number_pane_cp13_ParamLimits

0xad37,	// (0x000646a1) clock_digital_number_pane_cp13

0xad4f,	// (0x000646b9) clock_digital_separator_pane_cp10_ParamLimits

0xad4f,	// (0x000646b9) clock_digital_separator_pane_cp10

0xad67,	// (0x000646d1) popup_clock_digital_window_cp02_t1_ParamLimits

0xad67,	// (0x000646d1) popup_clock_digital_window_cp02_t1

0x71c6,	// (0x00060b30) clock_digital_number_pane_cp10_g1

0x71c6,	// (0x00060b30) clock_digital_number_pane_cp10_g2

0x0001,

0xf7a1,	// (0x0006910b) clock_digital_number_pane_cp10_g

0x71c6,	// (0x00060b30) clock_digital_separator_pane_cp10_g1

0x71c6,	// (0x00060b30) clock_digital_separator_pane_g2_cp10

0xeb07,	// (0x00068471) navi_pane_vded_g4

0xeb10,	// (0x0006847a) navi_pane_vded_g5

0xeb19,	// (0x00068483) navi_pane_vded_t1

0x6858,	// (0x000601c2) main_vded_pane

0xae50,	// (0x000647ba) main_vded_pane_g1

0xae58,	// (0x000647c2) main_vded_pane_g2

0xae60,	// (0x000647ca) main_vded_pane_g3

0x0002,

0xf7a6,	// (0x00069110) main_vded_pane_g

0xae68,	// (0x000647d2) main_vded_pane_t1

0xae76,	// (0x000647e0) main_vded_pane_t2

0x0001,

0xf7ad,	// (0x00069117) main_vded_pane_t

0xae84,	// (0x000647ee) vded_slider_pane

0xae8c,	// (0x000647f6) vded_video_pane

0x2884,	// (0x0005c1ee) vded_video_pane_g1

0xae94,	// (0x000647fe) vded_video_pane_g2

0x7fc5,	// (0x0006192f) vded_video_pane_g3

0x0002,

0xf7b2,	// (0x0006911c) vded_video_pane_g

0x288e,	// (0x0005c1f8) vded_slider_pane_g1

0x2091,	// (0x0005b9fb) vded_slider_pane_g2

0x2897,	// (0x0005c201) vded_slider_pane_g3

0x28a0,	// (0x0005c20a) vded_slider_pane_g4

0x28a9,	// (0x0005c213) vded_slider_pane_g5

0x0004,

0xf7b9,	// (0x00069123) vded_slider_pane_g

0xaa73,	// (0x000643dd) mup3_rocker_pane_ParamLimits

0xaa73,	// (0x000643dd) mup3_rocker_pane

0xae9d,	// (0x00064807) mup3_control_keys_pane_g1

0xaea5,	// (0x0006480f) mup3_control_keys_pane_g2

0xaead,	// (0x00064817) mup3_control_keys_pane_g3

0xaeb5,	// (0x0006481f) mup3_control_keys_pane_g4

0x0003,

0xf7c4,	// (0x0006912e) mup3_control_keys_pane_g

0x6a74,	// (0x000603de) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6a74,	// (0x000603de) popup_toolbar2_fixed_window_cp01

0xaa8b,	// (0x000643f5) popup_toolbar2_fixed_window_cp02_ParamLimits

0xaa8b,	// (0x000643f5) popup_toolbar2_fixed_window_cp02

0x124d,	// (0x0005abb7) popup_call2_audio_second_window_t4_ParamLimits

0x124d,	// (0x0005abb7) popup_call2_audio_second_window_t4

0x17af,	// (0x0005b119) popup_call2_audio_first_window_t6_ParamLimits

0x17af,	// (0x0005b119) popup_call2_audio_first_window_t6

0x1a45,	// (0x0005b3af) popup_call2_audio_out_window_t6_ParamLimits

0x1a45,	// (0x0005b3af) popup_call2_audio_out_window_t6

0x6858,	// (0x000601c2) main_vitu_pane

0x6aa6,	// (0x00060410) aid_size_cell_itu_ParamLimits

0x6aa6,	// (0x00060410) aid_size_cell_itu

0x6aa6,	// (0x00060410) bg_popup_window_pane_cp08_ParamLimits

0x6aa6,	// (0x00060410) bg_popup_window_pane_cp08

0x6aa6,	// (0x00060410) field_vitu_entry_pane_ParamLimits

0x6aa6,	// (0x00060410) field_vitu_entry_pane

0x6aa6,	// (0x00060410) grid_vitu_function_pane_ParamLimits

0x6aa6,	// (0x00060410) grid_vitu_function_pane

0x6aa6,	// (0x00060410) grid_vitu_itu_pane_ParamLimits

0x6aa6,	// (0x00060410) grid_vitu_itu_pane

0xaec5,	// (0x0006482f) cell_vitu_itu_pane_ParamLimits

0xaec5,	// (0x0006482f) cell_vitu_itu_pane

0x6aa6,	// (0x00060410) cell_vitu_function_pane_ParamLimits

0x6aa6,	// (0x00060410) cell_vitu_function_pane

0xec02,	// (0x0006856c) bg_popup_sub_pane_cp08_ParamLimits

0xec02,	// (0x0006856c) bg_popup_sub_pane_cp08

0xebee,	// (0x00068558) field_vitu_entry_pane_t1_ParamLimits

0xebee,	// (0x00068558) field_vitu_entry_pane_t1

0x28b2,	// (0x0005c21c) field_vitu_entry_pane_t2_ParamLimits

0x28b2,	// (0x0005c21c) field_vitu_entry_pane_t2

0x0001,

0xf7d2,	// (0x0006913c) field_vitu_entry_pane_t_ParamLimits

0xf7d2,	// (0x0006913c) field_vitu_entry_pane_t

0x2125,	// (0x0005ba8f) bg_button_pane_cp05_ParamLimits

0x2125,	// (0x0005ba8f) bg_button_pane_cp05

0x28cf,	// (0x0005c239) cell_vitu_itu_pane_g1

0xee46,	// (0x000687b0) cell_vitu_itu_pane_t1_ParamLimits

0xee46,	// (0x000687b0) cell_vitu_itu_pane_t1

0xee46,	// (0x000687b0) cell_vitu_itu_pane_t2_ParamLimits

0xee46,	// (0x000687b0) cell_vitu_itu_pane_t2

0x0002,

0xf7d7,	// (0x00069141) cell_vitu_itu_pane_t_ParamLimits

0xf7d7,	// (0x00069141) cell_vitu_itu_pane_t

0x6858,	// (0x000601c2) bg_button_pane_cp07

0x7fc5,	// (0x0006192f) cell_vitu_function_pane_g1

0x730b,	// (0x00060c75) main_calc_pane_g1

0x689a,	// (0x00060204) aid_visual_content_pane

0x6858,	// (0x000601c2) main_vradio_pane

0x7275,	// (0x00060bdf) main_vradio_pane_g1_ParamLimits

0x7275,	// (0x00060bdf) main_vradio_pane_g1

0x7275,	// (0x00060bdf) main_vradio_pane_g2_ParamLimits

0x7275,	// (0x00060bdf) main_vradio_pane_g2

0x0001,

0xf7de,	// (0x00069148) main_vradio_pane_g_ParamLimits

0xf7de,	// (0x00069148) main_vradio_pane_g

0x7e4c,	// (0x000617b6) main_vradio_pane_t1_ParamLimits

0x7e4c,	// (0x000617b6) main_vradio_pane_t1

0x7e4c,	// (0x000617b6) main_vradio_pane_t2_ParamLimits

0x7e4c,	// (0x000617b6) main_vradio_pane_t2

0x7e4c,	// (0x000617b6) main_vradio_pane_t3_ParamLimits

0x7e4c,	// (0x000617b6) main_vradio_pane_t3

0x0002,

0xf7e3,	// (0x0006914d) main_vradio_pane_t_ParamLimits

0xf7e3,	// (0x0006914d) main_vradio_pane_t

0x6aa6,	// (0x00060410) vradio_rocker_control_pane_ParamLimits

0x6aa6,	// (0x00060410) vradio_rocker_control_pane

0x6aa6,	// (0x00060410) vradio_station_info_pane_ParamLimits

0x6aa6,	// (0x00060410) vradio_station_info_pane

0xec02,	// (0x0006856c) vradio_frequency_info_pane_ParamLimits

0xec02,	// (0x0006856c) vradio_frequency_info_pane

0x7fc5,	// (0x0006192f) vradio_station_info_pane_g1

0xee46,	// (0x000687b0) vradio_station_info_pane_t1_ParamLimits

0xee46,	// (0x000687b0) vradio_station_info_pane_t1

0x7e4c,	// (0x000617b6) vradio_station_info_pane_t2_ParamLimits

0x7e4c,	// (0x000617b6) vradio_station_info_pane_t2

0x0001,

0xf7ea,	// (0x00069154) vradio_station_info_pane_t_ParamLimits

0xf7ea,	// (0x00069154) vradio_station_info_pane_t

0x6858,	// (0x000601c2) vradio_tuning_pane

0xaed3,	// (0x0006483d) vradio_rocker_control_pane_g1

0x28eb,	// (0x0005c255) vradio_rocker_control_pane_g2

0xaedb,	// (0x00064845) vradio_rocker_control_pane_g3

0xaee3,	// (0x0006484d) vradio_rocker_control_pane_g4

0xaeeb,	// (0x00064855) vradio_rocker_control_pane_g5

0x0004,

0xf7ef,	// (0x00069159) vradio_rocker_control_pane_g

0x7fc5,	// (0x0006192f) vradio_frequency_info_pane_g1

0xebee,	// (0x00068558) vradio_frequency_info_pane_t1_ParamLimits

0xebee,	// (0x00068558) vradio_frequency_info_pane_t1

0xaef3,	// (0x0006485d) vradio_tuning_pane_g1

0xaefc,	// (0x00064866) vradio_tuning_pane_t1

0x68d9,	// (0x00060243) area_side_right_pane_ParamLimits

0x68d9,	// (0x00060243) area_side_right_pane

0x1f18,	// (0x0005b882) status_small_pane_g1

0x1f20,	// (0x0005b88a) status_small_pane_g2

0x1f29,	// (0x0005b893) status_small_pane_g3

0x1f32,	// (0x0005b89c) status_small_pane_g4

0x0003,

0xf5b6,	// (0x00068f20) status_small_pane_g

0x1f3b,	// (0x0005b8a5) status_small_pane_t1

0x6858,	// (0x000601c2) main_video3_pane

0x28f3,	// (0x0005c25d) cams_zoom_vslider_pane

0x28fb,	// (0x0005c265) image3_wide_pane_ParamLimits

0x28fb,	// (0x0005c265) image3_wide_pane

0x2915,	// (0x0005c27f) image3_wide_small_pane

0x291f,	// (0x0005c289) main_video3_pane_g1_ParamLimits

0x291f,	// (0x0005c289) main_video3_pane_g1

0x293b,	// (0x0005c2a5) main_video3_pane_g2_ParamLimits

0x293b,	// (0x0005c2a5) main_video3_pane_g2

0x0001,

0xf7fa,	// (0x00069164) main_video3_pane_g_ParamLimits

0xf7fa,	// (0x00069164) main_video3_pane_g

0x2957,	// (0x0005c2c1) main_video3_pane_t1_ParamLimits

0x2957,	// (0x0005c2c1) main_video3_pane_t1

0x2982,	// (0x0005c2ec) main_video3_pane_t2_ParamLimits

0x2982,	// (0x0005c2ec) main_video3_pane_t2

0x29ad,	// (0x0005c317) main_video3_pane_t3_ParamLimits

0x29ad,	// (0x0005c317) main_video3_pane_t3

0x0002,

0xf7ff,	// (0x00069169) main_video3_pane_t_ParamLimits

0xf7ff,	// (0x00069169) main_video3_pane_t

0x29d8,	// (0x0005c342) cams_zoom_vslider_pane_g1

0x29e1,	// (0x0005c34b) cams_zoom_vslider_pane_g2

0x0001,

0xf806,	// (0x00069170) cams_zoom_vslider_pane_g

0x29e9,	// (0x0005c353) small_slider_vertical_pane

0x7fc5,	// (0x0006192f) small_slider_vertical_pane_g1

0x7fc5,	// (0x0006192f) small_slider_vertical_pane_g2

0x29f1,	// (0x0005c35b) small_slider_vertical_pane_g3

0x0002,

0xf80b,	// (0x00069175) small_slider_vertical_pane_g

0x6858,	// (0x000601c2) main_hwr_training_pane

0x29fa,	// (0x0005c364) hwr_training_instruct_pane_ParamLimits

0x29fa,	// (0x0005c364) hwr_training_instruct_pane

0xaf0b,	// (0x00064875) hwr_training_navi_pane_ParamLimits

0xaf0b,	// (0x00064875) hwr_training_navi_pane

0xaf1f,	// (0x00064889) hwr_training_write_pane_ParamLimits

0xaf1f,	// (0x00064889) hwr_training_write_pane

0x6858,	// (0x000601c2) bg_frame_shadow_pane

0x2a29,	// (0x0005c393) hwr_training_write_pane_g1

0x2a31,	// (0x0005c39b) hwr_training_write_pane_g2

0x2a39,	// (0x0005c3a3) hwr_training_write_pane_g3

0x2a41,	// (0x0005c3ab) hwr_training_write_pane_g4

0x2a49,	// (0x0005c3b3) hwr_training_write_pane_g5

0x2a51,	// (0x0005c3bb) hwr_training_write_pane_g6

0x2a59,	// (0x0005c3c3) hwr_training_write_pane_g7

0x0006,

0xf812,	// (0x0006917c) hwr_training_write_pane_g

0xaf4d,	// (0x000648b7) hwr_training_navi_pane_g1_ParamLimits

0xaf4d,	// (0x000648b7) hwr_training_navi_pane_g1

0xaf5f,	// (0x000648c9) hwr_training_navi_pane_g2_ParamLimits

0xaf5f,	// (0x000648c9) hwr_training_navi_pane_g2

0xaf71,	// (0x000648db) hwr_training_navi_pane_g3_ParamLimits

0xaf71,	// (0x000648db) hwr_training_navi_pane_g3

0xaf81,	// (0x000648eb) hwr_training_navi_pane_g4_ParamLimits

0xaf81,	// (0x000648eb) hwr_training_navi_pane_g4

0x0004,

0xf821,	// (0x0006918b) hwr_training_navi_pane_g_ParamLimits

0xf821,	// (0x0006918b) hwr_training_navi_pane_g

0xaf9b,	// (0x00064905) hwr_training_navi_pane_t1

0xafa9,	// (0x00064913) list_single_hwr_training_instruct_pane_ParamLimits

0xafa9,	// (0x00064913) list_single_hwr_training_instruct_pane

0x2a61,	// (0x0005c3cb) list_single_hwr_training_instruct_pane_t1

0x2258,	// (0x0005bbc2) bg_frame_shadow_pane_g1

0x2a70,	// (0x0005c3da) bg_frame_shadow_pane_g2

0x2a78,	// (0x0005c3e2) bg_frame_shadow_pane_g3

0x2a80,	// (0x0005c3ea) bg_frame_shadow_pane_g4

0x2a88,	// (0x0005c3f2) bg_frame_shadow_pane_g5

0x2a90,	// (0x0005c3fa) bg_frame_shadow_pane_g6

0x2a98,	// (0x0005c402) bg_frame_shadow_pane_g7

0x7668,	// (0x00060fd2) bg_frame_shadow_pane_g8

0x0007,

0xf82c,	// (0x00069196) bg_frame_shadow_pane_g

0x6858,	// (0x000601c2) main_video_tele_dialer_pane

0xafc1,	// (0x0006492b) aid_size_cell_video_keypad_ParamLimits

0xafc1,	// (0x0006492b) aid_size_cell_video_keypad

0xafd1,	// (0x0006493b) grid_video_dialer_keypad_pane_ParamLimits

0xafd1,	// (0x0006493b) grid_video_dialer_keypad_pane

0xb001,	// (0x0006496b) video_down_pane_cp_ParamLimits

0xb001,	// (0x0006496b) video_down_pane_cp

0xb029,	// (0x00064993) cell_video_dialer_keypad_pane_ParamLimits

0xb029,	// (0x00064993) cell_video_dialer_keypad_pane

0x2aa0,	// (0x0005c40a) bg_button_pane_cp08_ParamLimits

0x2aa0,	// (0x0005c40a) bg_button_pane_cp08

0xb03e,	// (0x000649a8) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb03e,	// (0x000649a8) cell_video_dialer_keypad_pane_g1

0xaa67,	// (0x000643d1) mup3_rocker2_pane_ParamLimits

0xaa67,	// (0x000643d1) mup3_rocker2_pane

0x7fc5,	// (0x0006192f) mup3_rocker2_pane_g1

0x9f21,	// (0x0006388b) main_dialer2_pane

0x6858,	// (0x000601c2) main_mp4_pane

0xb093,	// (0x000649fd) main_mp4_pane_g1_ParamLimits

0xb093,	// (0x000649fd) main_mp4_pane_g1

0xb0a1,	// (0x00064a0b) main_mp4_pane_g2_ParamLimits

0xb0a1,	// (0x00064a0b) main_mp4_pane_g2

0xb0af,	// (0x00064a19) main_mp4_pane_g3_ParamLimits

0xb0af,	// (0x00064a19) main_mp4_pane_g3

0xb0e4,	// (0x00064a4e) main_mp4_pane_g4_ParamLimits

0xb0e4,	// (0x00064a4e) main_mp4_pane_g4

0xb112,	// (0x00064a7c) main_mp4_pane_g5_ParamLimits

0xb112,	// (0x00064a7c) main_mp4_pane_g5

0x0007,

0xf84c,	// (0x000691b6) main_mp4_pane_g_ParamLimits

0xf84c,	// (0x000691b6) main_mp4_pane_g

0xb186,	// (0x00064af0) main_mp4_pane_t1_ParamLimits

0xb186,	// (0x00064af0) main_mp4_pane_t1

0xb1de,	// (0x00064b48) main_mp4_pane_t2_ParamLimits

0xb1de,	// (0x00064b48) main_mp4_pane_t2

0x2aac,	// (0x0005c416) main_mp4_pane_t3_ParamLimits

0x2aac,	// (0x0005c416) main_mp4_pane_t3

0xb230,	// (0x00064b9a) main_mp4_pane_t4_ParamLimits

0xb230,	// (0x00064b9a) main_mp4_pane_t4

0x0003,

0xf85d,	// (0x000691c7) main_mp4_pane_t_ParamLimits

0xf85d,	// (0x000691c7) main_mp4_pane_t

0xb270,	// (0x00064bda) mp4_progress_pane_ParamLimits

0xb270,	// (0x00064bda) mp4_progress_pane

0xb2b4,	// (0x00064c1e) mp4_rocker_pane_ParamLimits

0xb2b4,	// (0x00064c1e) mp4_rocker_pane

0x2ada,	// (0x0005c444) mp4_progress_pane_t1

0x2af1,	// (0x0005c45b) mp4_progress_pane_t2

0x0001,

0xf866,	// (0x000691d0) mp4_progress_pane_t

0x2b08,	// (0x0005c472) mup_progress_pane_cp04

0x7fc5,	// (0x0006192f) mp4_rocker_pane_g1

0x6aa6,	// (0x00060410) aid_cell_size_keypad2_ParamLimits

0x6aa6,	// (0x00060410) aid_cell_size_keypad2

0xb2d2,	// (0x00064c3c) dialer2_ne_pane_ParamLimits

0xb2d2,	// (0x00064c3c) dialer2_ne_pane

0x6aa6,	// (0x00060410) grid_dialer2_keypad_pane_ParamLimits

0x6aa6,	// (0x00060410) grid_dialer2_keypad_pane

0x3323,	// (0x0005cc8d) bg_popup_call_pane_cp07_ParamLimits

0x3323,	// (0x0005cc8d) bg_popup_call_pane_cp07

0xebee,	// (0x00068558) dialer2_ne_pane_t1_ParamLimits

0xebee,	// (0x00068558) dialer2_ne_pane_t1

0xb2e1,	// (0x00064c4b) cell_dialer2_keypad_pane_ParamLimits

0xb2e1,	// (0x00064c4b) cell_dialer2_keypad_pane

0x2b14,	// (0x0005c47e) bg_button_pane_pane_cp04_ParamLimits

0x2b14,	// (0x0005c47e) bg_button_pane_pane_cp04

0x7267,	// (0x00060bd1) cell_dialer2_keypad_pane_g1_ParamLimits

0x7267,	// (0x00060bd1) cell_dialer2_keypad_pane_g1

0x8077,	// (0x000619e1) aid_placing_vt_set_content_ParamLimits

0x8077,	// (0x000619e1) aid_placing_vt_set_content

0x809d,	// (0x00061a07) aid_placing_vt_set_title_ParamLimits

0x809d,	// (0x00061a07) aid_placing_vt_set_title

0x6858,	// (0x000601c2) main_image3_pane

0xb315,	// (0x00064c7f) area_side_right_pane_cp01_ParamLimits

0xb315,	// (0x00064c7f) area_side_right_pane_cp01

0x7283,	// (0x00060bed) main_image3_pane_g1_ParamLimits

0x7283,	// (0x00060bed) main_image3_pane_g1

0xb342,	// (0x00064cac) main_image3_pane_g2_ParamLimits

0xb342,	// (0x00064cac) main_image3_pane_g2

0xb359,	// (0x00064cc3) main_image3_pane_g3_ParamLimits

0xb359,	// (0x00064cc3) main_image3_pane_g3

0xb370,	// (0x00064cda) main_image3_pane_g4_ParamLimits

0xb370,	// (0x00064cda) main_image3_pane_g4

0x0003,

0xf875,	// (0x000691df) main_image3_pane_g_ParamLimits

0xf875,	// (0x000691df) main_image3_pane_g

0xb387,	// (0x00064cf1) main_image3_pane_t1_ParamLimits

0xb387,	// (0x00064cf1) main_image3_pane_t1

0xb3ac,	// (0x00064d16) main_image3_pane_t2_ParamLimits

0xb3ac,	// (0x00064d16) main_image3_pane_t2

0xb3cb,	// (0x00064d35) main_image3_pane_t3_ParamLimits

0xb3cb,	// (0x00064d35) main_image3_pane_t3

0x0003,

0xf87e,	// (0x000691e8) main_image3_pane_t_ParamLimits

0xf87e,	// (0x000691e8) main_image3_pane_t

0x6aa6,	// (0x00060410) grid_sctrl_middle_pane_cp01_ParamLimits

0x6aa6,	// (0x00060410) grid_sctrl_middle_pane_cp01

0xb426,	// (0x00064d90) cell_sctrl_middle_pane_cp01_ParamLimits

0xb426,	// (0x00064d90) cell_sctrl_middle_pane_cp01

0xb437,	// (0x00064da1) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb437,	// (0x00064da1) cell_sctrl_middle_pane_cp01_g1

0x6858,	// (0x000601c2) main_call4_pane

0xb444,	// (0x00064dae) aid_size_button_call4_ParamLimits

0xb444,	// (0x00064dae) aid_size_button_call4

0xb46e,	// (0x00064dd8) call4_windows_pane_ParamLimits

0xb46e,	// (0x00064dd8) call4_windows_pane

0xb482,	// (0x00064dec) grid_call4_button_pane_ParamLimits

0xb482,	// (0x00064dec) grid_call4_button_pane

0x2b48,	// (0x0005c4b2) call4_windows_conf_pane

0x2b5b,	// (0x0005c4c5) popup_call4_audio_first_window_ParamLimits

0x2b5b,	// (0x0005c4c5) popup_call4_audio_first_window

0x2b9b,	// (0x0005c505) popup_call4_audio_second_window_ParamLimits

0x2b9b,	// (0x0005c505) popup_call4_audio_second_window

0x2bad,	// (0x0005c517) popup_call4_audio_wait_window_ParamLimits

0x2bad,	// (0x0005c517) popup_call4_audio_wait_window

0xb4a4,	// (0x00064e0e) cell_call4_button_pane_ParamLimits

0xb4a4,	// (0x00064e0e) cell_call4_button_pane

0x758d,	// (0x00060ef7) bg_button_pane_cp09_ParamLimits

0x758d,	// (0x00060ef7) bg_button_pane_cp09

0xb4c7,	// (0x00064e31) cell_call4_button_pane_g1_ParamLimits

0xb4c7,	// (0x00064e31) cell_call4_button_pane_g1

0xb4d4,	// (0x00064e3e) cell_call4_button_pane_t1_ParamLimits

0xb4d4,	// (0x00064e3e) cell_call4_button_pane_t1

0x2bc1,	// (0x0005c52b) popup_call4_audio_conf_window_ParamLimits

0x2bc1,	// (0x0005c52b) popup_call4_audio_conf_window

0xaa98,	// (0x00064402) mup3_progress_pane_t1_ParamLimits

0xaab6,	// (0x00064420) mup3_progress_pane_t2_ParamLimits

0x2602,	// (0x0005bf6c) mup3_progress_pane_t3_ParamLimits

0xf74e,	// (0x000690b8) mup3_progress_pane_t_ParamLimits

0x261f,	// (0x0005bf89) mup_progress_pane_cp03_ParamLimits

0xaebd,	// (0x00064827) mup3_control_keys_pane_g4_copy1

0xb29e,	// (0x00064c08) mp4_rocker2_pane_ParamLimits

0xb29e,	// (0x00064c08) mp4_rocker2_pane

0x2bdd,	// (0x0005c547) mp4_rocker2_pane_g1

0x2bd5,	// (0x0005c53f) mp4_rocker2_pane_g2

0xb518,	// (0x00064e82) mp4_rocker2_pane_g3

0xb520,	// (0x00064e8a) mp4_rocker2_pane_g4

0xb528,	// (0x00064e92) mp4_rocker2_pane_g5

0x0004,

0xf887,	// (0x000691f1) mp4_rocker2_pane_g

0x6858,	// (0x000601c2) main_camera4_pane

0x6858,	// (0x000601c2) main_video4_pane

0xafdd,	// (0x00064947) main_video_tele_dialer_pane_t1_ParamLimits

0xafdd,	// (0x00064947) main_video_tele_dialer_pane_t1

0xafef,	// (0x00064959) main_video_tele_dialer_pane_t2_ParamLimits

0xafef,	// (0x00064959) main_video_tele_dialer_pane_t2

0x0001,

0xf83d,	// (0x000691a7) main_video_tele_dialer_pane_t_ParamLimits

0xf83d,	// (0x000691a7) main_video_tele_dialer_pane_t

0xb546,	// (0x00064eb0) cam4_autofocus_pane_ParamLimits

0xb546,	// (0x00064eb0) cam4_autofocus_pane

0xb55c,	// (0x00064ec6) cam4_image_uncrop_pane_ParamLimits

0xb55c,	// (0x00064ec6) cam4_image_uncrop_pane

0xb571,	// (0x00064edb) cam4_indicators_pane_ParamLimits

0xb571,	// (0x00064edb) cam4_indicators_pane

0xb58b,	// (0x00064ef5) main_camera4_pane_g1_ParamLimits

0xb58b,	// (0x00064ef5) main_camera4_pane_g1

0xb597,	// (0x00064f01) main_camera4_pane_g2_ParamLimits

0xb597,	// (0x00064f01) main_camera4_pane_g2

0xb597,	// (0x00064f01) main_camera4_pane_g3_ParamLimits

0xb597,	// (0x00064f01) main_camera4_pane_g3

0xb5a3,	// (0x00064f0d) main_camera4_pane_g4_ParamLimits

0xb5a3,	// (0x00064f0d) main_camera4_pane_g4

0xb5af,	// (0x00064f19) main_camera4_pane_g5_ParamLimits

0xb5af,	// (0x00064f19) main_camera4_pane_g5

0x0005,

0xf892,	// (0x000691fc) main_camera4_pane_g_ParamLimits

0xf892,	// (0x000691fc) main_camera4_pane_g

0xb5c9,	// (0x00064f33) main_camera4_pane_t1_ParamLimits

0xb5c9,	// (0x00064f33) main_camera4_pane_t1

0x7267,	// (0x00060bd1) bg_tb_trans_pane_cp06

0xb619,	// (0x00064f83) cam4_indicators_pane_g1

0xb629,	// (0x00064f93) cam4_indicators_pane_g2

0x0002,

0xf8ad,	// (0x00069217) cam4_indicators_pane_g

0xb649,	// (0x00064fb3) cam4_indicators_pane_t1

0xb671,	// (0x00064fdb) main_video4_pane_g1_ParamLimits

0xb671,	// (0x00064fdb) main_video4_pane_g1

0xb597,	// (0x00064f01) main_video4_pane_g2_ParamLimits

0xb597,	// (0x00064f01) main_video4_pane_g2

0xb597,	// (0x00064f01) main_video4_pane_g3_ParamLimits

0xb597,	// (0x00064f01) main_video4_pane_g3

0xb5a3,	// (0x00064f0d) main_video4_pane_g4_ParamLimits

0xb5a3,	// (0x00064f0d) main_video4_pane_g4

0x0004,

0xf8b4,	// (0x0006921e) main_video4_pane_g_ParamLimits

0xf8b4,	// (0x0006921e) main_video4_pane_g

0xb685,	// (0x00064fef) vid4_indicators_pane_ParamLimits

0xb685,	// (0x00064fef) vid4_indicators_pane

0xb6a3,	// (0x0006500d) video4_image_uncrop_cif_pane_ParamLimits

0xb6a3,	// (0x0006500d) video4_image_uncrop_cif_pane

0xb6b0,	// (0x0006501a) video4_image_uncrop_nhd_pane_ParamLimits

0xb6b0,	// (0x0006501a) video4_image_uncrop_nhd_pane

0xb55c,	// (0x00064ec6) video4_image_uncrop_vga_pane_ParamLimits

0xb55c,	// (0x00064ec6) video4_image_uncrop_vga_pane

0xec02,	// (0x0006856c) bg_tb_trans_pane_cp07

0xb619,	// (0x00064f83) vid4_indicators_pane_g1

0xb6bd,	// (0x00065027) vid4_indicators_pane_g2

0xb6cd,	// (0x00065037) vid4_indicators_pane_g3

0x0004,

0xf8bf,	// (0x00069229) vid4_indicators_pane_g

0xb6fa,	// (0x00065064) vid4_indicators_pane_t1

0xb714,	// (0x0006507e) cam4_autofocus_pane_g1

0xb71c,	// (0x00065086) cam4_autofocus_pane_g2

0xb724,	// (0x0006508e) cam4_autofocus_pane_g3

0x0002,

0xf8ca,	// (0x00069234) cam4_autofocus_pane_g

0xb72c,	// (0x00065096) cam4_autofocus_pane_g3_copy1

0xb00d,	// (0x00064977) video_down_pane_cp_t1

0xb01b,	// (0x00064985) video_down_pane_cp_t2

0x0001,

0xf842,	// (0x000691ac) video_down_pane_cp_t

0x6aa6,	// (0x00060410) popup_vitu2_window_ParamLimits

0x6aa6,	// (0x00060410) popup_vitu2_window

0xb734,	// (0x0006509e) aid_size_cell2_itu2_ParamLimits

0xb734,	// (0x0006509e) aid_size_cell2_itu2

0xb756,	// (0x000650c0) aid_size_cell_itu2_ParamLimits

0xb756,	// (0x000650c0) aid_size_cell_itu2

0x3323,	// (0x0005cc8d) bg_popup_window_pane_cp09_ParamLimits

0x3323,	// (0x0005cc8d) bg_popup_window_pane_cp09

0xb794,	// (0x000650fe) field_vitu2_entry_pane_ParamLimits

0xb794,	// (0x000650fe) field_vitu2_entry_pane

0xb7aa,	// (0x00065114) grid_vitu2_function_pane_ParamLimits

0xb7aa,	// (0x00065114) grid_vitu2_function_pane

0xb7dc,	// (0x00065146) grid_vitu2_itu_pane_ParamLimits

0xb7dc,	// (0x00065146) grid_vitu2_itu_pane

0xb836,	// (0x000651a0) cell_vitu2_itu_pane_ParamLimits

0xb836,	// (0x000651a0) cell_vitu2_itu_pane

0xb84e,	// (0x000651b8) cell_vitu2_function_pane_ParamLimits

0xb84e,	// (0x000651b8) cell_vitu2_function_pane

0x2be5,	// (0x0005c54f) bg_popup_call_pane_cp08_ParamLimits

0x2be5,	// (0x0005c54f) bg_popup_call_pane_cp08

0x2bfc,	// (0x0005c566) field_vitu2_entry_pane_g1

0x2c08,	// (0x0005c572) field_vitu2_entry_pane_g2

0x0002,

0xf8d1,	// (0x0006923b) field_vitu2_entry_pane_g

0x5d3e,	// (0x0005f6a8) field_vitu2_entry_pane_t1_ParamLimits

0x5d3e,	// (0x0005f6a8) field_vitu2_entry_pane_t1

0x5d6c,	// (0x0005f6d6) field_vitu2_entry_pane_t2_ParamLimits

0x5d6c,	// (0x0005f6d6) field_vitu2_entry_pane_t2

0x0001,

0xf8d8,	// (0x00069242) field_vitu2_entry_pane_t_ParamLimits

0xf8d8,	// (0x00069242) field_vitu2_entry_pane_t

0xb88d,	// (0x000651f7) bg_button_pane_cp010_ParamLimits

0xb88d,	// (0x000651f7) bg_button_pane_cp010

0xb89b,	// (0x00065205) cell_vitu2_itu_pane_g1

0xb8bb,	// (0x00065225) cell_vitu2_itu_pane_t1_ParamLimits

0xb8bb,	// (0x00065225) cell_vitu2_itu_pane_t1

0x5d89,	// (0x0005f6f3) cell_vitu2_itu_pane_t2_ParamLimits

0x5d89,	// (0x0005f6f3) cell_vitu2_itu_pane_t2

0x0002,

0xf8e2,	// (0x0006924c) cell_vitu2_itu_pane_t_ParamLimits

0xf8e2,	// (0x0006924c) cell_vitu2_itu_pane_t

0xec02,	// (0x0006856c) bg_button_pane_cp011

0xb907,	// (0x00065271) cell_vitu2_function_pane_g1

0x6858,	// (0x000601c2) main_myfav_hc_pane

0xb40b,	// (0x00064d75) popup_image3_note_pane_ParamLimits

0xb40b,	// (0x00064d75) popup_image3_note_pane

0xb417,	// (0x00064d81) popup_image3_tool_bar_pane_ParamLimits

0xb417,	// (0x00064d81) popup_image3_tool_bar_pane

0x5dff,	// (0x0005f769) cell_vitu2_itu_pane_t3_ParamLimits

0x5dff,	// (0x0005f769) cell_vitu2_itu_pane_t3

0x6858,	// (0x000601c2) bg_popup_trans_pane

0x2c39,	// (0x0005c5a3) grid_image3_tool_bar_pane

0x2c43,	// (0x0005c5ad) bg_popup_trans_pane_g1

0x8617,	// (0x00061f81) bg_popup_trans_pane_g2

0x2c4b,	// (0x0005c5b5) bg_popup_trans_pane_g3

0x2c53,	// (0x0005c5bd) bg_popup_trans_pane_g4

0x2c5b,	// (0x0005c5c5) bg_popup_trans_pane_g5

0x2c63,	// (0x0005c5cd) bg_popup_trans_pane_g6

0x2c6b,	// (0x0005c5d5) bg_popup_trans_pane_g7

0x2c73,	// (0x0005c5dd) bg_popup_trans_pane_g8

0x85f7,	// (0x00061f61) bg_popup_trans_pane_g9

0x0008,

0xf8e9,	// (0x00069253) bg_popup_trans_pane_g

0x2c7b,	// (0x0005c5e5) cell_image3_tool_bar_pane_ParamLimits

0x2c7b,	// (0x0005c5e5) cell_image3_tool_bar_pane

0x7fc5,	// (0x0006192f) cell_image3_tool_bar_pane_g1

0x6858,	// (0x000601c2) bg_popup_trans_pane_cp1

0x2c8f,	// (0x0005c5f9) popup_image3_note_pane_t1

0x2c9d,	// (0x0005c607) popup_image3_note_pane_t2

0x2cab,	// (0x0005c615) popup_image3_note_pane_t3

0x0002,

0xf8fc,	// (0x00069266) popup_image3_note_pane_t

0x2cb9,	// (0x0005c623) popup_image3_note_pane_t3_copy1

0xb91b,	// (0x00065285) bg_myfav_hc_instruction_pane_ParamLimits

0xb91b,	// (0x00065285) bg_myfav_hc_instruction_pane

0xb92d,	// (0x00065297) cell_myfav_contact_pane_ParamLimits

0xb92d,	// (0x00065297) cell_myfav_contact_pane

0xb947,	// (0x000652b1) cell_myfav_contact_pane_cp1_ParamLimits

0xb947,	// (0x000652b1) cell_myfav_contact_pane_cp1

0xb95d,	// (0x000652c7) cell_myfav_contact_pane_cp2_ParamLimits

0xb95d,	// (0x000652c7) cell_myfav_contact_pane_cp2

0xb973,	// (0x000652dd) cell_myfav_contact_pane_cp3_ParamLimits

0xb973,	// (0x000652dd) cell_myfav_contact_pane_cp3

0xb988,	// (0x000652f2) cell_myfav_contact_pane_cp4_ParamLimits

0xb988,	// (0x000652f2) cell_myfav_contact_pane_cp4

0xb99c,	// (0x00065306) cell_myfav_contact_pane_cp5_ParamLimits

0xb99c,	// (0x00065306) cell_myfav_contact_pane_cp5

0xb9b0,	// (0x0006531a) cell_myfav_contact_pane_cp6_ParamLimits

0xb9b0,	// (0x0006531a) cell_myfav_contact_pane_cp6

0xb9c4,	// (0x0006532e) cell_myfav_contact_pane_cp7_ParamLimits

0xb9c4,	// (0x0006532e) cell_myfav_contact_pane_cp7

0x2cc7,	// (0x0005c631) listscroll_gen_pane_cp05

0xb9dc,	// (0x00065346) main_myfav_hc_pane_g1_ParamLimits

0xb9dc,	// (0x00065346) main_myfav_hc_pane_g1

0xb9f2,	// (0x0006535c) main_myfav_hc_pane_g2_ParamLimits

0xb9f2,	// (0x0006535c) main_myfav_hc_pane_g2

0x0002,

0xf903,	// (0x0006926d) main_myfav_hc_pane_g_ParamLimits

0xf903,	// (0x0006926d) main_myfav_hc_pane_g

0xba1c,	// (0x00065386) main_myfav_hc_pane_t1_ParamLimits

0xba1c,	// (0x00065386) main_myfav_hc_pane_t1

0x2cd0,	// (0x0005c63a) main_myfav_hc_pane_t2_ParamLimits

0x2cd0,	// (0x0005c63a) main_myfav_hc_pane_t2

0x2ce2,	// (0x0005c64c) main_myfav_hc_pane_t3_ParamLimits

0x2ce2,	// (0x0005c64c) main_myfav_hc_pane_t3

0xba31,	// (0x0006539b) main_myfav_hc_pane_t4_ParamLimits

0xba31,	// (0x0006539b) main_myfav_hc_pane_t4

0x0004,

0xf90a,	// (0x00069274) main_myfav_hc_pane_t_ParamLimits

0xf90a,	// (0x00069274) main_myfav_hc_pane_t

0x7fc5,	// (0x0006192f) bg_myfav_hc_instruction_pane_g1

0x2cf4,	// (0x0005c65e) cell_myfav_contact_pane_g1_ParamLimits

0x2cf4,	// (0x0005c65e) cell_myfav_contact_pane_g1

0x2cf4,	// (0x0005c65e) cell_myfav_contact_pane_g2_ParamLimits

0x2cf4,	// (0x0005c65e) cell_myfav_contact_pane_g2

0x2d00,	// (0x0005c66a) cell_myfav_contact_pane_g3_ParamLimits

0x2d00,	// (0x0005c66a) cell_myfav_contact_pane_g3

0x7275,	// (0x00060bdf) cell_myfav_contact_pane_g4_ParamLimits

0x7275,	// (0x00060bdf) cell_myfav_contact_pane_g4

0x2d0d,	// (0x0005c677) cell_myfav_contact_pane_g5_ParamLimits

0x2d0d,	// (0x0005c677) cell_myfav_contact_pane_g5

0x0004,

0xf915,	// (0x0006927f) cell_myfav_contact_pane_g_ParamLimits

0xf915,	// (0x0006927f) cell_myfav_contact_pane_g

0xba08,	// (0x00065372) main_myfav_hc_pane_g3_ParamLimits

0xba08,	// (0x00065372) main_myfav_hc_pane_g3

0x69ea,	// (0x00060354) popup_adpt_find_window

0xba55,	// (0x000653bf) afind_page_pane_ParamLimits

0xba55,	// (0x000653bf) afind_page_pane

0xba62,	// (0x000653cc) aid_size_cell_afind_ParamLimits

0xba62,	// (0x000653cc) aid_size_cell_afind

0xba7c,	// (0x000653e6) bg_popup_sub_pane_cp09_ParamLimits

0xba7c,	// (0x000653e6) bg_popup_sub_pane_cp09

0xba89,	// (0x000653f3) find_pane_cp01_ParamLimits

0xba89,	// (0x000653f3) find_pane_cp01

0x2d19,	// (0x0005c683) grid_afind_control_pane_ParamLimits

0x2d19,	// (0x0005c683) grid_afind_control_pane

0xba96,	// (0x00065400) grid_afind_pane_ParamLimits

0xba96,	// (0x00065400) grid_afind_pane

0xbaac,	// (0x00065416) cell_afind_pane_ParamLimits

0xbaac,	// (0x00065416) cell_afind_pane

0x7fc5,	// (0x0006192f) afind_page_pane_g1

0xbae2,	// (0x0006544c) afind_page_pane_g2

0xbaeb,	// (0x00065455) afind_page_pane_g3

0x0002,

0xf920,	// (0x0006928a) afind_page_pane_g

0xbaf4,	// (0x0006545e) afind_page_pane_t1

0x2d2d,	// (0x0005c697) cell_afind_grid_control_pane_ParamLimits

0x2d2d,	// (0x0005c697) cell_afind_grid_control_pane

0x2d3c,	// (0x0005c6a6) bg_button_pane_cp69_ParamLimits

0x2d3c,	// (0x0005c6a6) bg_button_pane_cp69

0xbb14,	// (0x0006547e) cell_afind_pane_g1_ParamLimits

0xbb14,	// (0x0006547e) cell_afind_pane_g1

0xbb21,	// (0x0006548b) cell_afind_pane_t1_ParamLimits

0xbb21,	// (0x0006548b) cell_afind_pane_t1

0x8006,	// (0x00061970) bg_button_pane_cp72

0x2d48,	// (0x0005c6b2) cell_afind_grid_control_pane_g1

0x9b46,	// (0x000634b0) aid_image_placing_area_ParamLimits

0x9b46,	// (0x000634b0) aid_image_placing_area

0x7267,	// (0x00060bd1) field_vitu_entry_pane_g1_ParamLimits

0x7267,	// (0x00060bd1) field_vitu_entry_pane_g1

0x7267,	// (0x00060bd1) field_vitu_entry_pane_g2_ParamLimits

0x7267,	// (0x00060bd1) field_vitu_entry_pane_g2

0x0001,

0xf7cd,	// (0x00069137) field_vitu_entry_pane_g_ParamLimits

0xf7cd,	// (0x00069137) field_vitu_entry_pane_g

0x28cf,	// (0x0005c239) cell_vitu_itu_pane_g1_ParamLimits

0x28b2,	// (0x0005c21c) cell_vitu_itu_pane_t3_ParamLimits

0x28b2,	// (0x0005c21c) cell_vitu_itu_pane_t3

0x2ada,	// (0x0005c444) mp4_progress_pane_t1_ParamLimits

0x2af1,	// (0x0005c45b) mp4_progress_pane_t2_ParamLimits

0xf866,	// (0x000691d0) mp4_progress_pane_t_ParamLimits

0x2b08,	// (0x0005c472) mup_progress_pane_cp04_ParamLimits

0xba43,	// (0x000653ad) main_myfav_hc_pane_t5_ParamLimits

0xba43,	// (0x000653ad) main_myfav_hc_pane_t5

0x5bea,	// (0x0005f554) aid_zoom_text_primary

0x69ea,	// (0x00060354) popup_adpt_find_window_ParamLimits

0xec02,	// (0x0006856c) main_cam_set_pane

0xb57f,	// (0x00064ee9) cam4_zoom_pane_ParamLimits

0xb57f,	// (0x00064ee9) cam4_zoom_pane

0xbb33,	// (0x0006549d) main_cam_set_pane_g1_ParamLimits

0xbb33,	// (0x0006549d) main_cam_set_pane_g1

0xbb41,	// (0x000654ab) main_cam_set_pane_g2_ParamLimits

0xbb41,	// (0x000654ab) main_cam_set_pane_g2

0x0001,

0xf927,	// (0x00069291) main_cam_set_pane_g_ParamLimits

0xf927,	// (0x00069291) main_cam_set_pane_g

0xbb4d,	// (0x000654b7) main_cam_set_pane_t1_ParamLimits

0xbb4d,	// (0x000654b7) main_cam_set_pane_t1

0xbb5f,	// (0x000654c9) main_cset_listscroll_pane_ParamLimits

0xbb5f,	// (0x000654c9) main_cset_listscroll_pane

0xbb8d,	// (0x000654f7) main_cset_slider_pane_ParamLimits

0xbb8d,	// (0x000654f7) main_cset_slider_pane

0x2d59,	// (0x0005c6c3) main_cset_list_pane_ParamLimits

0x2d59,	// (0x0005c6c3) main_cset_list_pane

0x2d69,	// (0x0005c6d3) scroll_pane_cp028

0xbbac,	// (0x00065516) aid_area_touch_slider

0xbbc8,	// (0x00065532) cset_slider_pane

0xbbeb,	// (0x00065555) main_cset_slider_pane_g1

0xbc00,	// (0x0006556a) main_cset_slider_pane_g2

0x0011,

0xf92c,	// (0x00069296) main_cset_slider_pane_g

0x2da2,	// (0x0005c70c) main_cset_slider_pane_t1

0xbcbc,	// (0x00065626) main_cset_slider_pane_t2

0xbcd6,	// (0x00065640) main_cset_slider_pane_t3

0xbcf0,	// (0x0006565a) main_cset_slider_pane_t4

0xbd0a,	// (0x00065674) main_cset_slider_pane_t5

0xbd24,	// (0x0006568e) main_cset_slider_pane_t6

0xbd39,	// (0x000656a3) main_cset_slider_pane_t7

0x000e,

0xf951,	// (0x000692bb) main_cset_slider_pane_t

0xbe3d,	// (0x000657a7) cset_list_set_pane_ParamLimits

0xbe3d,	// (0x000657a7) cset_list_set_pane

0x2e3c,	// (0x0005c7a6) aid_position_infowindow_above

0x2e44,	// (0x0005c7ae) aid_position_infowindow_below

0xbe4d,	// (0x000657b7) cset_list_set_pane_g1_ParamLimits

0xbe4d,	// (0x000657b7) cset_list_set_pane_g1

0x5e51,	// (0x0005f7bb) cset_list_set_pane_g3_ParamLimits

0x5e51,	// (0x0005f7bb) cset_list_set_pane_g3

0x0001,

0xf970,	// (0x000692da) cset_list_set_pane_g_ParamLimits

0xf970,	// (0x000692da) cset_list_set_pane_g

0x5e60,	// (0x0005f7ca) cset_list_set_pane_t1_ParamLimits

0x5e60,	// (0x0005f7ca) cset_list_set_pane_t1

0xec02,	// (0x0006856c) list_highlight_pane_cp021_ParamLimits

0xec02,	// (0x0006856c) list_highlight_pane_cp021

0xec72,	// (0x000685dc) cset_slider_pane_g1

0xec84,	// (0x000685ee) cset_slider_pane_g2

0xec7b,	// (0x000685e5) cset_slider_pane_g3

0x0002,

0xf975,	// (0x000692df) cset_slider_pane_g

0xbe59,	// (0x000657c3) aid_area_touch_cam4_zoom

0xbe61,	// (0x000657cb) cam4_zoom_cont_pane

0xbe69,	// (0x000657d3) cam4_zoom_pane_g1

0xbe71,	// (0x000657db) cam4_zoom_pane_g2

0xbe79,	// (0x000657e3) cam4_zoom_pane_g3

0x0002,

0xf97c,	// (0x000692e6) cam4_zoom_pane_g

0x36a0,	// (0x0005d00a) cam4_zoom_cont_pane_g1

0x36a9,	// (0x0005d013) cam4_zoom_cont_pane_g2

0x36b2,	// (0x0005d01c) cam4_zoom_cont_pane_g3

0x0002,

0xf983,	// (0x000692ed) cam4_zoom_cont_pane_g

0xb45e,	// (0x00064dc8) call4_image_pane_ParamLimits

0xb45e,	// (0x00064dc8) call4_image_pane

0x2b48,	// (0x0005c4b2) call4_windows_conf_pane_ParamLimits

0x2b7b,	// (0x0005c4e5) popup_call4_audio_in_window_ParamLimits

0x2b7b,	// (0x0005c4e5) popup_call4_audio_in_window

0x6858,	// (0x000601c2) bg_popup_call2_act_pane_cp02

0x2bb9,	// (0x0005c523) call4_list_conf_pane

0x7fc5,	// (0x0006192f) call4_image_pane_g1

0x7fc5,	// (0x0006192f) call4_image_pane_g2

0x0001,

0xf3ef,	// (0x00068d59) call4_image_pane_g

0x2e4c,	// (0x0005c7b6) list_single_graphic_popup_conf4_pane_ParamLimits

0x2e4c,	// (0x0005c7b6) list_single_graphic_popup_conf4_pane

0x6858,	// (0x000601c2) list_highlight_pane_cp022

0x2e59,	// (0x0005c7c3) list_single_graphic_popup_conf4_pane_g1

0xe8a8,	// (0x00068212) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98a,	// (0x000692f4) list_single_graphic_popup_conf4_pane_g

0x2e61,	// (0x0005c7cb) list_single_graphic_popup_conf4_pane_t1

0x81f3,	// (0x00061b5d) popup_vtel_slider_window_ParamLimits

0x81f3,	// (0x00061b5d) popup_vtel_slider_window

0x7e4c,	// (0x000617b6) dialer2_ne_pane_t2_ParamLimits

0x7e4c,	// (0x000617b6) dialer2_ne_pane_t2

0x0001,

0xf86b,	// (0x000691d5) dialer2_ne_pane_t_ParamLimits

0xf86b,	// (0x000691d5) dialer2_ne_pane_t

0xec02,	// (0x0006856c) bg_popup_sub_pane_cp010_ParamLimits

0xec02,	// (0x0006856c) bg_popup_sub_pane_cp010

0xbe81,	// (0x000657eb) popup_vtel_slider_window_g1_ParamLimits

0xbe81,	// (0x000657eb) popup_vtel_slider_window_g1

0xbe8d,	// (0x000657f7) popup_vtel_slider_window_g2_ParamLimits

0xbe8d,	// (0x000657f7) popup_vtel_slider_window_g2

0x0003,

0xf98f,	// (0x000692f9) popup_vtel_slider_window_g_ParamLimits

0xf98f,	// (0x000692f9) popup_vtel_slider_window_g

0xbed3,	// (0x0006583d) vtel_slider_pane_ParamLimits

0xbed3,	// (0x0006583d) vtel_slider_pane

0xbee2,	// (0x0006584c) vtel_slider_pane_g1_ParamLimits

0xbee2,	// (0x0006584c) vtel_slider_pane_g1

0xbeef,	// (0x00065859) vtel_slider_pane_g2_ParamLimits

0xbeef,	// (0x00065859) vtel_slider_pane_g2

0xbefc,	// (0x00065866) vtel_slider_pane_g3_ParamLimits

0xbefc,	// (0x00065866) vtel_slider_pane_g3

0xbee2,	// (0x0006584c) vtel_slider_pane_g4_ParamLimits

0xbee2,	// (0x0006584c) vtel_slider_pane_g4

0xbf09,	// (0x00065873) vtel_slider_pane_g5_ParamLimits

0xbf09,	// (0x00065873) vtel_slider_pane_g5

0x0004,

0xf998,	// (0x00069302) vtel_slider_pane_g_ParamLimits

0xf998,	// (0x00069302) vtel_slider_pane_g

0xec02,	// (0x0006856c) main_gallery2_pane

0xb77c,	// (0x000650e6) aid_size_row_itut2_dropdow_list_ParamLimits

0xb77c,	// (0x000650e6) aid_size_row_itut2_dropdow_list

0xb7c2,	// (0x0006512c) grid_vitu2_function_top_pane_ParamLimits

0xb7c2,	// (0x0006512c) grid_vitu2_function_top_pane

0xb800,	// (0x0006516a) popup_vitu2_dropdown_list_window_ParamLimits

0xb800,	// (0x0006516a) popup_vitu2_dropdown_list_window

0xb81a,	// (0x00065184) popup_vitu2_match_list_window

0xbf16,	// (0x00065880) cell_vitu2_function_top_pane_ParamLimits

0xbf16,	// (0x00065880) cell_vitu2_function_top_pane

0xbf2e,	// (0x00065898) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbf2e,	// (0x00065898) cell_vitu2_function_top_pane_cp01

0xbf4a,	// (0x000658b4) cell_vitu2_function_top_wide_pane_ParamLimits

0xbf4a,	// (0x000658b4) cell_vitu2_function_top_wide_pane

0xec02,	// (0x0006856c) bg_button_pane_cp012

0xbf67,	// (0x000658d1) cell_vitu2_function_top_pane_g1

0xbf7b,	// (0x000658e5) bg_button_pane_cp013_ParamLimits

0xbf7b,	// (0x000658e5) bg_button_pane_cp013

0xbf97,	// (0x00065901) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xbf97,	// (0x00065901) cell_vitu2_function_top_wide_pane_g1

0x6aa6,	// (0x00060410) bg_popup_sub_pane_cp20

0xbfaf,	// (0x00065919) list_vitu2_match_list_pane

0x2c43,	// (0x0005c5ad) bg_popup_sub_pane_cp20_g1

0x2c4b,	// (0x0005c5b5) bg_popup_sub_pane_cp20_g2

0x8617,	// (0x00061f81) bg_popup_sub_pane_cp20_g3

0x2c53,	// (0x0005c5bd) bg_popup_sub_pane_cp20_g4

0x85f7,	// (0x00061f61) bg_popup_sub_pane_cp20_g5

0x2e77,	// (0x0005c7e1) bg_popup_sub_pane_cp20_g6

0x2c63,	// (0x0005c5cd) bg_popup_sub_pane_cp20_g7

0x2c6b,	// (0x0005c5d5) bg_popup_sub_pane_cp20_g8

0x2c73,	// (0x0005c5dd) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a3,	// (0x0006930d) bg_popup_sub_pane_cp20_g

0xbfc7,	// (0x00065931) list_vitu2_match_list_item_pane_ParamLimits

0xbfc7,	// (0x00065931) list_vitu2_match_list_item_pane

0xbfd9,	// (0x00065943) list_vitu2_match_list_item_pane_t1

0x6858,	// (0x000601c2) bg_popup_sub_pane_cp21

0xe7e6,	// (0x00068150) grid_vitu2_dropdown_list_pane

0xbff4,	// (0x0006595e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xbff4,	// (0x0006595e) cell_vitu2_dropdown_list_char_pane

0xc015,	// (0x0006597f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc015,	// (0x0006597f) cell_vitu2_dropdown_list_ctrl_pane

0x2e9e,	// (0x0005c808) cell_vitu2_dropdown_list_char_pane_g1

0x2e95,	// (0x0005c7ff) cell_vitu2_dropdown_list_char_pane_g2

0x2e8c,	// (0x0005c7f6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c0,	// (0x0006932a) cell_vitu2_dropdown_list_char_pane_g

0xc03f,	// (0x000659a9) cell_vitu2_dropdown_list_char_pane_t1

0xc04d,	// (0x000659b7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc04d,	// (0x000659b7) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc05d,	// (0x000659c7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc05d,	// (0x000659c7) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc06e,	// (0x000659d8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc06e,	// (0x000659d8) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc07e,	// (0x000659e8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc07e,	// (0x000659e8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7267,	// (0x00060bd1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7267,	// (0x00060bd1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c7,	// (0x00069331) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c7,	// (0x00069331) cell_vitu2_dropdown_list_ctrl_pane_g

0xc097,	// (0x00065a01) aid_size_cell_gallery2_ParamLimits

0xc097,	// (0x00065a01) aid_size_cell_gallery2

0xc0b1,	// (0x00065a1b) grid_gallery2_pane_ParamLimits

0xc0b1,	// (0x00065a1b) grid_gallery2_pane

0xade7,	// (0x00064751) scroll_pane_cp029_ParamLimits

0xade7,	// (0x00064751) scroll_pane_cp029

0xc0c2,	// (0x00065a2c) cell_gallery2_pane_ParamLimits

0xc0c2,	// (0x00065a2c) cell_gallery2_pane

0x2ea7,	// (0x0005c811) cell_gallery2_pane_g2

0xc10f,	// (0x00065a79) cell_gallery2_pane_g3

0x2eaf,	// (0x0005c819) cell_gallery2_pane_g4

0x2eb7,	// (0x0005c821) cell_gallery2_pane_g5

0x7ddf,	// (0x00061749) grid_highlight_pane_cp10

0xb81a,	// (0x00065184) popup_vitu2_match_list_window_ParamLimits

0xb82a,	// (0x00065194) popup_vitu2_query_window_ParamLimits

0xb82a,	// (0x00065194) popup_vitu2_query_window

0x6858,	// (0x000601c2) bg_vitu2_candi_button_pane

0x2e9e,	// (0x0005c808) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2e95,	// (0x0005c7ff) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2e8c,	// (0x0005c7f6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5e75,	// (0x0005f7df) bg_button_pane_cp015

0xc117,	// (0x00065a81) bg_button_pane_cp016

0xc12a,	// (0x00065a94) bg_button_pane_cp017

0xee2a,	// (0x00068794) bg_popup_sub_pane_cp22

0x2ebf,	// (0x0005c829) popup_vitu2_query_window_g1

0x5ea4,	// (0x0005f80e) popup_vitu2_query_window_g2

0x0002,

0xf9d2,	// (0x0006933c) popup_vitu2_query_window_g

0x5ebf,	// (0x0005f829) popup_vitu2_query_window_t1_ParamLimits

0x5ebf,	// (0x0005f829) popup_vitu2_query_window_t1

0x5ef2,	// (0x0005f85c) popup_vitu2_query_window_t2_ParamLimits

0x5ef2,	// (0x0005f85c) popup_vitu2_query_window_t2

0x5f04,	// (0x0005f86e) popup_vitu2_query_window_t3_ParamLimits

0x5f04,	// (0x0005f86e) popup_vitu2_query_window_t3

0xc14e,	// (0x00065ab8) popup_vitu2_query_window_t4_ParamLimits

0xc14e,	// (0x00065ab8) popup_vitu2_query_window_t4

0xc16b,	// (0x00065ad5) popup_vitu2_query_window_t5_ParamLimits

0xc16b,	// (0x00065ad5) popup_vitu2_query_window_t5

0x0006,

0xf9d9,	// (0x00069343) popup_vitu2_query_window_t_ParamLimits

0xf9d9,	// (0x00069343) popup_vitu2_query_window_t

0x2d51,	// (0x0005c6bb) main_cset_text_pane

0xbbac,	// (0x00065516) aid_area_touch_slider_ParamLimits

0xbbc8,	// (0x00065532) cset_slider_pane_ParamLimits

0xbbeb,	// (0x00065555) main_cset_slider_pane_g1_ParamLimits

0xbc00,	// (0x0006556a) main_cset_slider_pane_g2_ParamLimits

0x2d72,	// (0x0005c6dc) main_cset_slider_pane_g3_ParamLimits

0x2d72,	// (0x0005c6dc) main_cset_slider_pane_g3

0xbc15,	// (0x0006557f) main_cset_slider_pane_g4_ParamLimits

0xbc15,	// (0x0006557f) main_cset_slider_pane_g4

0xbc24,	// (0x0006558e) main_cset_slider_pane_g5_ParamLimits

0xbc24,	// (0x0006558e) main_cset_slider_pane_g5

0xbc30,	// (0x0006559a) main_cset_slider_pane_g6_ParamLimits

0xbc30,	// (0x0006559a) main_cset_slider_pane_g6

0xf92c,	// (0x00069296) main_cset_slider_pane_g_ParamLimits

0x2da2,	// (0x0005c70c) main_cset_slider_pane_t1_ParamLimits

0xbcbc,	// (0x00065626) main_cset_slider_pane_t2_ParamLimits

0xbcd6,	// (0x00065640) main_cset_slider_pane_t3_ParamLimits

0xbcf0,	// (0x0006565a) main_cset_slider_pane_t4_ParamLimits

0xbd0a,	// (0x00065674) main_cset_slider_pane_t5_ParamLimits

0xbd24,	// (0x0006568e) main_cset_slider_pane_t6_ParamLimits

0xbd39,	// (0x000656a3) main_cset_slider_pane_t7_ParamLimits

0xbd63,	// (0x000656cd) main_cset_slider_pane_t8_ParamLimits

0xbd63,	// (0x000656cd) main_cset_slider_pane_t8

0xbd8b,	// (0x000656f5) main_cset_slider_pane_t9_ParamLimits

0xbd8b,	// (0x000656f5) main_cset_slider_pane_t9

0xbdb3,	// (0x0006571d) main_cset_slider_pane_t10_ParamLimits

0xbdb3,	// (0x0006571d) main_cset_slider_pane_t10

0xbddb,	// (0x00065745) main_cset_slider_pane_t11_ParamLimits

0xbddb,	// (0x00065745) main_cset_slider_pane_t11

0xbe03,	// (0x0006576d) main_cset_slider_pane_t12_ParamLimits

0xbe03,	// (0x0006576d) main_cset_slider_pane_t12

0xbe20,	// (0x0006578a) main_cset_slider_pane_t13_ParamLimits

0xbe20,	// (0x0006578a) main_cset_slider_pane_t13

0xf951,	// (0x000692bb) main_cset_slider_pane_t_ParamLimits

0x6858,	// (0x000601c2) bg_popup_sub_pane_cp011

0x2ecb,	// (0x0005c835) main_cset_text_pane_g1

0x2ed3,	// (0x0005c83d) main_cset_text_pane_t1

0x2ee1,	// (0x0005c84b) main_cset_text_pane_t2

0x2eef,	// (0x0005c859) main_cset_text_pane_t3

0x2efd,	// (0x0005c867) main_cset_text_pane_t4

0x2f0b,	// (0x0005c875) main_cset_text_pane_t5

0x2f19,	// (0x0005c883) main_cset_text_pane_t6

0x2f27,	// (0x0005c891) main_cset_text_pane_t7

0x0006,

0xf9e8,	// (0x00069352) main_cset_text_pane_t

0x6858,	// (0x000601c2) main_cam4_burst_pane

0x6858,	// (0x000601c2) main_cam5_pane

0xbb02,	// (0x0006546c) bg_button_pane_cp019

0xbb0b,	// (0x00065475) bg_button_pane_cp020

0x2d7e,	// (0x0005c6e8) main_cset_slider_pane_g7_ParamLimits

0x2d7e,	// (0x0005c6e8) main_cset_slider_pane_g7

0x2d8a,	// (0x0005c6f4) main_cset_slider_pane_g8_ParamLimits

0x2d8a,	// (0x0005c6f4) main_cset_slider_pane_g8

0xbc44,	// (0x000655ae) main_cset_slider_pane_g9_ParamLimits

0xbc44,	// (0x000655ae) main_cset_slider_pane_g9

0xbc50,	// (0x000655ba) main_cset_slider_pane_g10_ParamLimits

0xbc50,	// (0x000655ba) main_cset_slider_pane_g10

0xbc5c,	// (0x000655c6) main_cset_slider_pane_g11_ParamLimits

0xbc5c,	// (0x000655c6) main_cset_slider_pane_g11

0xbc68,	// (0x000655d2) main_cset_slider_pane_g12_ParamLimits

0xbc68,	// (0x000655d2) main_cset_slider_pane_g12

0xbc74,	// (0x000655de) main_cset_slider_pane_g13_ParamLimits

0xbc74,	// (0x000655de) main_cset_slider_pane_g13

0xbc80,	// (0x000655ea) main_cset_slider_pane_g14_ParamLimits

0xbc80,	// (0x000655ea) main_cset_slider_pane_g14

0xbc8c,	// (0x000655f6) main_cset_slider_pane_g15_ParamLimits

0xbc8c,	// (0x000655f6) main_cset_slider_pane_g15

0x2dca,	// (0x0005c734) main_cset_slider_pane_t14_ParamLimits

0x2dca,	// (0x0005c734) main_cset_slider_pane_t14

0x2e03,	// (0x0005c76d) main_cset_slider_pane_t15_ParamLimits

0x2e03,	// (0x0005c76d) main_cset_slider_pane_t15

0xc188,	// (0x00065af2) aid_cam4_burst_size_cell_ParamLimits

0xc188,	// (0x00065af2) aid_cam4_burst_size_cell

0xc1a4,	// (0x00065b0e) grid_cam4_burst_pane_ParamLimits

0xc1a4,	// (0x00065b0e) grid_cam4_burst_pane

0xc1c6,	// (0x00065b30) linegrid_cam4_burst_pane_ParamLimits

0xc1c6,	// (0x00065b30) linegrid_cam4_burst_pane

0xc1e4,	// (0x00065b4e) scroll_pane_cp30_ParamLimits

0xc1e4,	// (0x00065b4e) scroll_pane_cp30

0xc1f0,	// (0x00065b5a) cell_cam4_burst_pane_ParamLimits

0xc1f0,	// (0x00065b5a) cell_cam4_burst_pane

0x2f35,	// (0x0005c89f) linegrid_cam4_burst_pane_g1_ParamLimits

0x2f35,	// (0x0005c89f) linegrid_cam4_burst_pane_g1

0xc228,	// (0x00065b92) linegrid_cam4_burst_pane_g2_ParamLimits

0xc228,	// (0x00065b92) linegrid_cam4_burst_pane_g2

0x2f42,	// (0x0005c8ac) linegrid_cam4_burst_pane_g3_ParamLimits

0x2f42,	// (0x0005c8ac) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f7,	// (0x00069361) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f7,	// (0x00069361) linegrid_cam4_burst_pane_g

0xc239,	// (0x00065ba3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc239,	// (0x00065ba3) linegrid_cam4_burst_pane_g3_copy1

0x2f4f,	// (0x0005c8b9) linegrid_cam4_burst_pane_g4_ParamLimits

0x2f4f,	// (0x0005c8b9) linegrid_cam4_burst_pane_g4

0xc253,	// (0x00065bbd) linegrid_cam4_burst_pane_g5_ParamLimits

0xc253,	// (0x00065bbd) linegrid_cam4_burst_pane_g5

0xc264,	// (0x00065bce) linegrid_cam4_burst_pane_g6_ParamLimits

0xc264,	// (0x00065bce) linegrid_cam4_burst_pane_g6

0x2f5c,	// (0x0005c8c6) linegrid_cam4_burst_pane_g7_ParamLimits

0x2f5c,	// (0x0005c8c6) linegrid_cam4_burst_pane_g7

0xc275,	// (0x00065bdf) cell_cam4_burst_pane_g1

0x2f75,	// (0x0005c8df) main_cam5_pane_t1_ParamLimits

0x2f75,	// (0x0005c8df) main_cam5_pane_t1

0x2f87,	// (0x0005c8f1) main_cam5_pane_t2_ParamLimits

0x2f87,	// (0x0005c8f1) main_cam5_pane_t2

0x2f99,	// (0x0005c903) main_cam5_pane_t3_ParamLimits

0x2f99,	// (0x0005c903) main_cam5_pane_t3

0x2fab,	// (0x0005c915) main_cam5_pane_t4_ParamLimits

0x2fab,	// (0x0005c915) main_cam5_pane_t4

0x2fc1,	// (0x0005c92b) main_cam5_pane_t5_ParamLimits

0x2fc1,	// (0x0005c92b) main_cam5_pane_t5

0x2fd3,	// (0x0005c93d) main_cam5_pane_t6_ParamLimits

0x2fd3,	// (0x0005c93d) main_cam5_pane_t6

0x2fe5,	// (0x0005c94f) main_cam5_pane_t7_ParamLimits

0x2fe5,	// (0x0005c94f) main_cam5_pane_t7

0x2ff7,	// (0x0005c961) main_cam5_pane_t8_ParamLimits

0x2ff7,	// (0x0005c961) main_cam5_pane_t8

0x3013,	// (0x0005c97d) main_cam5_pane_t9_ParamLimits

0x3013,	// (0x0005c97d) main_cam5_pane_t9

0x3025,	// (0x0005c98f) main_cam5_pane_t10_ParamLimits

0x3025,	// (0x0005c98f) main_cam5_pane_t10

0x3037,	// (0x0005c9a1) main_cam5_pane_t11_ParamLimits

0x3037,	// (0x0005c9a1) main_cam5_pane_t11

0x3049,	// (0x0005c9b3) main_cam5_pane_t12_ParamLimits

0x3049,	// (0x0005c9b3) main_cam5_pane_t12

0x305e,	// (0x0005c9c8) main_cam5_pane_t13_ParamLimits

0x305e,	// (0x0005c9c8) main_cam5_pane_t13

0x000c,

0xfa03,	// (0x0006936d) main_cam5_pane_t_ParamLimits

0xfa03,	// (0x0006936d) main_cam5_pane_t

0x6a65,	// (0x000603cf) popup_scut_keymap_window_ParamLimits

0x6a65,	// (0x000603cf) popup_scut_keymap_window

0xc288,	// (0x00065bf2) aid_size_cell_brow_shortcut

0x7ddf,	// (0x00061749) bg_popup_window_pane_cp010

0xc294,	// (0x00065bfe) grid_scut_pane

0xc29e,	// (0x00065c08) cell_scut_pane_ParamLimits

0xc29e,	// (0x00065c08) cell_scut_pane

0xc2b3,	// (0x00065c1d) cell_scut_pane_g1

0x307b,	// (0x0005c9e5) cell_scut_pane_t1

0x308a,	// (0x0005c9f4) cell_scut_pane_t2

0xc2bc,	// (0x00065c26) cell_scut_pane_t3

0x0002,

0xfa1e,	// (0x00069388) cell_scut_pane_t

0xa70b,	// (0x00064075) main_mup3_pane_g8_ParamLimits

0xa70b,	// (0x00064075) main_mup3_pane_g8

0xb788,	// (0x000650f2) area_vitu2_query_pane_ParamLimits

0xb788,	// (0x000650f2) area_vitu2_query_pane

0x5e85,	// (0x0005f7ef) input_focus_pane_cp08

0x3099,	// (0x0005ca03) area_vitu2_query_pane_g1

0x5f82,	// (0x0005f8ec) area_vitu2_query_pane_g2

0x0001,

0xfa25,	// (0x0006938f) area_vitu2_query_pane_g

0xc2ca,	// (0x00065c34) area_vitu2_query_pane_t1_ParamLimits

0xc2ca,	// (0x00065c34) area_vitu2_query_pane_t1

0xc2dc,	// (0x00065c46) area_vitu2_query_pane_t2_ParamLimits

0xc2dc,	// (0x00065c46) area_vitu2_query_pane_t2

0x5f91,	// (0x0005f8fb) area_vitu2_query_pane_t3_ParamLimits

0x5f91,	// (0x0005f8fb) area_vitu2_query_pane_t3

0x5fb9,	// (0x0005f923) area_vitu2_query_pane_t4_ParamLimits

0x5fb9,	// (0x0005f923) area_vitu2_query_pane_t4

0x5fe1,	// (0x0005f94b) area_vitu2_query_pane_t5_ParamLimits

0x5fe1,	// (0x0005f94b) area_vitu2_query_pane_t5

0x6009,	// (0x0005f973) area_vitu2_query_pane_t6_ParamLimits

0x6009,	// (0x0005f973) area_vitu2_query_pane_t6

0x0006,

0xfa2a,	// (0x00069394) area_vitu2_query_pane_t_ParamLimits

0xfa2a,	// (0x00069394) area_vitu2_query_pane_t

0xc2ee,	// (0x00065c58) bg_button_pane_cp018

0xc2fb,	// (0x00065c65) bg_button_pane_cp021

0x6055,	// (0x0005f9bf) bg_button_pane_cp022

0x6064,	// (0x0005f9ce) input_focus_pane_cp09

0x95e5,	// (0x00062f4f) aid_size_touch_mv_arrow_left

0xe9e6,	// (0x00068350) aid_size_touch_mv_arrow_right

0xbca4,	// (0x0006560e) main_cset_slider_pane_g16_ParamLimits

0xbca4,	// (0x0006560e) main_cset_slider_pane_g16

0xbcb0,	// (0x0006561a) main_cset_slider_pane_g17_ParamLimits

0xbcb0,	// (0x0006561a) main_cset_slider_pane_g17

0xc275,	// (0x00065bdf) cell_cam4_burst_pane_g1_ParamLimits

0x6858,	// (0x000601c2) compa_mode_pane

0xbe99,	// (0x00065803) popup_vtel_slider_window_g3_ParamLimits

0xbe99,	// (0x00065803) popup_vtel_slider_window_g3

0xbead,	// (0x00065817) popup_vtel_slider_window_g4_ParamLimits

0xbead,	// (0x00065817) popup_vtel_slider_window_g4

0xbec1,	// (0x0006582b) popup_vtel_slider_window_t1_ParamLimits

0xbec1,	// (0x0006582b) popup_vtel_slider_window_t1

0x6858,	// (0x000601c2) main_cl_pane

0x9f9f,	// (0x00063909) popup_imed_adjust2_window_ParamLimits

0xee2a,	// (0x00068794) bg_tb_trans_pane_cp05_ParamLimits

0x27e7,	// (0x0005c151) popup_imed_adjust2_window_g1_ParamLimits

0x27f6,	// (0x0005c160) popup_imed_adjust2_window_g2_ParamLimits

0x27f6,	// (0x0005c160) popup_imed_adjust2_window_g2

0x2802,	// (0x0005c16c) popup_imed_adjust2_window_g3_ParamLimits

0x2802,	// (0x0005c16c) popup_imed_adjust2_window_g3

0x0002,

0xf791,	// (0x000690fb) popup_imed_adjust2_window_g_ParamLimits

0xf791,	// (0x000690fb) popup_imed_adjust2_window_g

0x280e,	// (0x0005c178) popup_imed_adjust2_window_t1_ParamLimits

0x2826,	// (0x0005c190) slider_imed_adjust_pane_ParamLimits

0x283a,	// (0x0005c1a4) slider_imed_adjust_pane_g1_ParamLimits

0x284a,	// (0x0005c1b4) slider_imed_adjust_pane_g2_ParamLimits

0x285a,	// (0x0005c1c4) slider_imed_adjust_pane_g3_ParamLimits

0x286b,	// (0x0005c1d5) slider_imed_adjust_pane_g4_ParamLimits

0xf798,	// (0x00069102) slider_imed_adjust_pane_g_ParamLimits

0xb530,	// (0x00064e9a) aid_touch_area_cam4_ParamLimits

0xb530,	// (0x00064e9a) aid_touch_area_cam4

0xb53e,	// (0x00064ea8) battery_pane_cp01

0xb5bd,	// (0x00064f27) main_camera4_pane_g6_ParamLimits

0xb5bd,	// (0x00064f27) main_camera4_pane_g6

0xb5db,	// (0x00064f45) main_camera4_pane_t2_ParamLimits

0xb5db,	// (0x00064f45) main_camera4_pane_t2

0x0001,

0xf89f,	// (0x00069209) main_camera4_pane_t_ParamLimits

0xf89f,	// (0x00069209) main_camera4_pane_t

0xb663,	// (0x00064fcd) aid_touch_area_vid4_ParamLimits

0xb663,	// (0x00064fcd) aid_touch_area_vid4

0xb5bd,	// (0x00064f27) main_video4_pane_g5_ParamLimits

0xb5bd,	// (0x00064f27) main_video4_pane_g5

0xb693,	// (0x00064ffd) vid4_progress_pane_ParamLimits

0xb693,	// (0x00064ffd) vid4_progress_pane

0x2d96,	// (0x0005c700) main_cset_slider_pane_g18_ParamLimits

0x2d96,	// (0x0005c700) main_cset_slider_pane_g18

0x2f69,	// (0x0005c8d3) cell_cam4_burst_pane_g2_ParamLimits

0x2f69,	// (0x0005c8d3) cell_cam4_burst_pane_g2

0x0001,

0xf9fe,	// (0x00069368) cell_cam4_burst_pane_g_ParamLimits

0xf9fe,	// (0x00069368) cell_cam4_burst_pane_g

0xc307,	// (0x00065c71) bg_cl_pane_ParamLimits

0xc307,	// (0x00065c71) bg_cl_pane

0xc313,	// (0x00065c7d) cl_header_pane_ParamLimits

0xc313,	// (0x00065c7d) cl_header_pane

0xc31f,	// (0x00065c89) cl_listscroll_pane_ParamLimits

0xc31f,	// (0x00065c89) cl_listscroll_pane

0x3141,	// (0x0005caab) bg_cl_pane_g1

0x3149,	// (0x0005cab3) bg_cl_pane_g2

0x3151,	// (0x0005cabb) bg_cl_pane_g3

0x3159,	// (0x0005cac3) bg_cl_pane_g4

0x3161,	// (0x0005cacb) bg_cl_pane_g5

0x3169,	// (0x0005cad3) bg_cl_pane_g6

0x3171,	// (0x0005cadb) bg_cl_pane_g7

0x3179,	// (0x0005cae3) bg_cl_pane_g8

0x3181,	// (0x0005caeb) bg_cl_pane_g9

0x0008,

0xfa39,	// (0x000693a3) bg_cl_pane_g

0xc32b,	// (0x00065c95) aid_height_cl_leading_ParamLimits

0xc32b,	// (0x00065c95) aid_height_cl_leading

0xc337,	// (0x00065ca1) aid_height_cl_text_ParamLimits

0xc337,	// (0x00065ca1) aid_height_cl_text

0x6aa6,	// (0x00060410) bg_cl_header_pane_ParamLimits

0x6aa6,	// (0x00060410) bg_cl_header_pane

0xc34f,	// (0x00065cb9) cl_header_pane_g1_ParamLimits

0xc34f,	// (0x00065cb9) cl_header_pane_g1

0xc35c,	// (0x00065cc6) cl_header_pane_t1_ParamLimits

0xc35c,	// (0x00065cc6) cl_header_pane_t1

0x3189,	// (0x0005caf3) cl_list_pane

0x3192,	// (0x0005cafc) hc_scroll_pane_cp01

0x85f7,	// (0x00061f61) bg_cl_header_pane_g1

0x2c43,	// (0x0005c5ad) bg_cl_header_pane_g2

0x8617,	// (0x00061f81) bg_cl_header_pane_g3

0x2c53,	// (0x0005c5bd) bg_cl_header_pane_g4

0x2c4b,	// (0x0005c5b5) bg_cl_header_pane_g5

0x2e77,	// (0x0005c7e1) bg_cl_header_pane_g6

0x2c6b,	// (0x0005c5d5) bg_cl_header_pane_g7

0x2c73,	// (0x0005c5dd) bg_cl_header_pane_g8

0x2c63,	// (0x0005c5cd) bg_cl_header_pane_g9

0x0008,

0xfa4c,	// (0x000693b6) bg_cl_header_pane_g

0xc36e,	// (0x00065cd8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc36e,	// (0x00065cd8) hc_cl_list_double_graphic_heading_pane

0xc37e,	// (0x00065ce8) hc_cl_list_single_graphic_pane_ParamLimits

0xc37e,	// (0x00065ce8) hc_cl_list_single_graphic_pane

0xc390,	// (0x00065cfa) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc390,	// (0x00065cfa) hc_cl_list_single_graphic_pane_g1

0xc39c,	// (0x00065d06) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc39c,	// (0x00065d06) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5f,	// (0x000693c9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5f,	// (0x000693c9) hc_cl_list_single_graphic_pane_g

0xc3b0,	// (0x00065d1a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc3b0,	// (0x00065d1a) hc_cl_list_single_graphic_pane_t1

0xc390,	// (0x00065cfa) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc390,	// (0x00065cfa) hc_cl_list_double_graphic_heading_pane_g1

0xc3c5,	// (0x00065d2f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc3c5,	// (0x00065d2f) hc_cl_list_double_graphic_heading_pane_g2

0xc3d9,	// (0x00065d43) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc3d9,	// (0x00065d43) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa64,	// (0x000693ce) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa64,	// (0x000693ce) hc_cl_list_double_graphic_heading_pane_g

0xc3ed,	// (0x00065d57) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc3ed,	// (0x00065d57) hc_cl_list_double_graphic_heading_pane_t1

0xc402,	// (0x00065d6c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc402,	// (0x00065d6c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6b,	// (0x000693d5) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6b,	// (0x000693d5) hc_cl_list_double_graphic_heading_pane_t

0xc417,	// (0x00065d81) vid4_progress_pane_g1

0xc426,	// (0x00065d90) vid4_progress_pane_g2

0xc435,	// (0x00065d9f) vid4_progress_pane_g3

0xc444,	// (0x00065dae) vid4_progress_pane_g4

0x0004,

0xfa70,	// (0x000693da) vid4_progress_pane_g

0xc450,	// (0x00065dba) vid4_progress_pane_t1

0xc466,	// (0x00065dd0) vid4_progress_pane_t2

0x0002,

0xfa7b,	// (0x000693e5) vid4_progress_pane_t

0xc490,	// (0x00065dfa) wait_bar_pane_cp07

0x2133,	// (0x0005ba9d) blid_firmament_pane_ParamLimits

0x2174,	// (0x0005bade) popup_blid_sat_info2_window_g1

0x2198,	// (0x0005bb02) popup_blid_sat_info2_window_t3

0x21a6,	// (0x0005bb10) popup_blid_sat_info2_window_t4

0x21b4,	// (0x0005bb1e) popup_blid_sat_info2_window_t5

0x21c2,	// (0x0005bb2c) popup_blid_sat_info2_window_t6

0x21d2,	// (0x0005bb3c) popup_blid_sat_info2_window_t7

0x21e0,	// (0x0005bb4a) popup_blid_sat_info2_window_t8

0x21ee,	// (0x0005bb58) popup_blid_sat_info2_window_t9

0x21fc,	// (0x0005bb66) popup_blid_sat_info2_window_t10

0x2298,	// (0x0005bc02) aid_firma_cardinal_ParamLimits

0x22ac,	// (0x0005bc16) blid_firmament_pane_t1_ParamLimits

0x22c3,	// (0x0005bc2d) blid_firmament_pane_t2_ParamLimits

0x22da,	// (0x0005bc44) blid_firmament_pane_t3_ParamLimits

0x22f1,	// (0x0005bc5b) blid_firmament_pane_t4_ParamLimits

0xf68a,	// (0x00068ff4) blid_firmament_pane_t_ParamLimits

0x2308,	// (0x0005bc72) blid_sat_info_pane_ParamLimits

0xec02,	// (0x0006856c) main_cam_set_pane_ParamLimits

0xad87,	// (0x000646f1) aid_size_cell_colour_35_ParamLimits

0xad9e,	// (0x00064708) aid_size_cell_colour_112_ParamLimits

0xadb5,	// (0x0006471f) aid_size_cell_effect_ParamLimits

0xec02,	// (0x0006856c) bg_tb_trans_pane_cp02_ParamLimits

0xee5a,	// (0x000687c4) heading_imed_pane_ParamLimits

0xadcf,	// (0x00064739) listscroll_imed_pane_ParamLimits

0x152b,	// (0x0005ae95) popup_call2_audio_first_window_g5_ParamLimits

0x152b,	// (0x0005ae95) popup_call2_audio_first_window_g5

0xb2ed,	// (0x00064c57) aid_size_touch_image3_arrow_left_ParamLimits

0xb2ed,	// (0x00064c57) aid_size_touch_image3_arrow_left

0xb301,	// (0x00064c6b) aid_size_touch_image3_arrow_right_ParamLimits

0xb301,	// (0x00064c6b) aid_size_touch_image3_arrow_right

0xc47b,	// (0x00065de5) vid4_progress_pane_t3

0xaf33,	// (0x0006489d) main_hwr_training_symbol_option_pane_ParamLimits

0xaf33,	// (0x0006489d) main_hwr_training_symbol_option_pane

0x2a14,	// (0x0005c37e) popup_hwr_training_preview_window_ParamLimits

0x2a14,	// (0x0005c37e) popup_hwr_training_preview_window

0xaf8e,	// (0x000648f8) hwr_training_navi_pane_g5_ParamLimits

0xaf8e,	// (0x000648f8) hwr_training_navi_pane_g5

0x2c31,	// (0x0005c59b) popup_char_count_window

0x6aa6,	// (0x00060410) bg_popup_sub_pane_cp20_ParamLimits

0xbfaf,	// (0x00065919) list_vitu2_match_list_pane_ParamLimits

0xbfbb,	// (0x00065925) vitu2_page_scroll_pane_ParamLimits

0xbfbb,	// (0x00065925) vitu2_page_scroll_pane

0x31c6,	// (0x0005cb30) list_single_hwr_training_symbol_option_pane_ParamLimits

0x31c6,	// (0x0005cb30) list_single_hwr_training_symbol_option_pane

0x31d9,	// (0x0005cb43) list_single_hwr_training_symbol_option_pane_g1

0x31e1,	// (0x0005cb4b) list_single_hwr_training_symbol_option_pane_t1

0x31ef,	// (0x0005cb59) bg_button_pane_cp023

0x31f8,	// (0x0005cb62) bg_button_pane_cp024

0xc4cc,	// (0x00065e36) vitu2_page_scroll_pane_g1

0xc4d4,	// (0x00065e3e) vitu2_page_scroll_pane_g2

0x0001,

0xfa82,	// (0x000693ec) vitu2_page_scroll_pane_g

0xc4dc,	// (0x00065e46) vitu2_page_scroll_pane_t1

0x2337,	// (0x0005bca1) popup_char_count_window_g1

0x322b,	// (0x0005cb95) popup_char_count_window_g2

0x3234,	// (0x0005cb9e) popup_char_count_window_g3

0x0002,

0xfa87,	// (0x000693f1) popup_char_count_window_g

0x323d,	// (0x0005cba7) popup_char_count_window_t1

0x6858,	// (0x000601c2) main_vded2_pane

0x27d5,	// (0x0005c13f) aid_size_cell_imed_line

0x27df,	// (0x0005c149) grid_imed_line_width_pane

0xb6de,	// (0x00065048) vid4_indicators_pane_g4

0x324b,	// (0x0005cbb5) cell_imed_line_width_pane_ParamLimits

0x324b,	// (0x0005cbb5) cell_imed_line_width_pane

0x325d,	// (0x0005cbc7) cell_imed_line_width_pane_g1

0x3266,	// (0x0005cbd0) cell_imed_line_width_pane_g2

0x0001,

0xfa8e,	// (0x000693f8) cell_imed_line_width_pane_g

0xc4eb,	// (0x00065e55) main_vded2_pane_g1_ParamLimits

0xc4eb,	// (0x00065e55) main_vded2_pane_g1

0xc4f8,	// (0x00065e62) main_vded2_pane_g2_ParamLimits

0xc4f8,	// (0x00065e62) main_vded2_pane_g2

0x0001,

0xfa93,	// (0x000693fd) main_vded2_pane_g_ParamLimits

0xfa93,	// (0x000693fd) main_vded2_pane_g

0xc504,	// (0x00065e6e) vded2_slider_pane_ParamLimits

0xc504,	// (0x00065e6e) vded2_slider_pane

0xc511,	// (0x00065e7b) aid_size_touch_vded2_end

0xc519,	// (0x00065e83) aid_size_touch_vded2_playhead

0xc521,	// (0x00065e8b) aid_size_touch_vded2_start

0xc529,	// (0x00065e93) vded2_slider_bg_pane

0xc532,	// (0x00065e9c) vded2_slider_pane_g1

0xc53b,	// (0x00065ea5) vded2_slider_pane_g2

0xc543,	// (0x00065ead) vded2_slider_pane_g3

0x0002,

0xfa98,	// (0x00069402) vded2_slider_pane_g

0xc54c,	// (0x00065eb6) vded2_slider_bg_pane_g1

0xc555,	// (0x00065ebf) vded2_slider_bg_pane_g2

0xc55e,	// (0x00065ec8) vded2_slider_bg_pane_g3

0x0002,

0xfa9f,	// (0x00069409) vded2_slider_bg_pane_g

0x98f6,	// (0x00063260) aid_postcard_touch_down_pane_ParamLimits

0x98f6,	// (0x00063260) aid_postcard_touch_down_pane

0x9902,	// (0x0006326c) aid_postcard_touch_up_pane_ParamLimits

0x9902,	// (0x0006326c) aid_postcard_touch_up_pane

0x6858,	// (0x000601c2) main_blid2_pane

0x9f3c,	// (0x000638a6) popup_blid2_search_window

0x6858,	// (0x000601c2) blid2_gps_pane

0x6858,	// (0x000601c2) blid2_navig_pane

0x6858,	// (0x000601c2) blid2_search_pane

0x6858,	// (0x000601c2) blid2_tripm_pane

0xc567,	// (0x00065ed1) blid2_search_pane_g1_ParamLimits

0xc567,	// (0x00065ed1) blid2_search_pane_g1

0xc573,	// (0x00065edd) blid2_search_pane_t1_ParamLimits

0xc573,	// (0x00065edd) blid2_search_pane_t1

0xc585,	// (0x00065eef) aid_size_cell_blid2_gps_ParamLimits

0xc585,	// (0x00065eef) aid_size_cell_blid2_gps

0xc595,	// (0x00065eff) blid2_gps_pane_g1_ParamLimits

0xc595,	// (0x00065eff) blid2_gps_pane_g1

0xc5a1,	// (0x00065f0b) grid_blid2_satellite_pane_ParamLimits

0xc5a1,	// (0x00065f0b) grid_blid2_satellite_pane

0xc5ad,	// (0x00065f17) blid2_navig_pane_g1_ParamLimits

0xc5ad,	// (0x00065f17) blid2_navig_pane_g1

0xc5b9,	// (0x00065f23) blid2_navig_pane_t1_ParamLimits

0xc5b9,	// (0x00065f23) blid2_navig_pane_t1

0xc5cb,	// (0x00065f35) blid2_navig_pane_t2_ParamLimits

0xc5cb,	// (0x00065f35) blid2_navig_pane_t2

0x0001,

0xfaa6,	// (0x00069410) blid2_navig_pane_t_ParamLimits

0xfaa6,	// (0x00069410) blid2_navig_pane_t

0xc5dd,	// (0x00065f47) blid2_navig_ring_pane_ParamLimits

0xc5dd,	// (0x00065f47) blid2_navig_ring_pane

0xc5e9,	// (0x00065f53) blid2_speed_pane_ParamLimits

0xc5e9,	// (0x00065f53) blid2_speed_pane

0xc5f5,	// (0x00065f5f) blid2_tripm_pane_g1_ParamLimits

0xc5f5,	// (0x00065f5f) blid2_tripm_pane_g1

0xc601,	// (0x00065f6b) blid2_tripm_pane_g2_ParamLimits

0xc601,	// (0x00065f6b) blid2_tripm_pane_g2

0xc60d,	// (0x00065f77) blid2_tripm_pane_g3_ParamLimits

0xc60d,	// (0x00065f77) blid2_tripm_pane_g3

0xc619,	// (0x00065f83) blid2_tripm_pane_g4_ParamLimits

0xc619,	// (0x00065f83) blid2_tripm_pane_g4

0xc625,	// (0x00065f8f) blid2_tripm_pane_g5_ParamLimits

0xc625,	// (0x00065f8f) blid2_tripm_pane_g5

0x0005,

0xfaab,	// (0x00069415) blid2_tripm_pane_g_ParamLimits

0xfaab,	// (0x00069415) blid2_tripm_pane_g

0xc63d,	// (0x00065fa7) blid2_tripm_pane_t1_ParamLimits

0xc63d,	// (0x00065fa7) blid2_tripm_pane_t1

0xc64f,	// (0x00065fb9) blid2_tripm_pane_t2_ParamLimits

0xc64f,	// (0x00065fb9) blid2_tripm_pane_t2

0xc661,	// (0x00065fcb) blid2_tripm_pane_t3_ParamLimits

0xc661,	// (0x00065fcb) blid2_tripm_pane_t3

0x0003,

0xfab8,	// (0x00069422) blid2_tripm_pane_t_ParamLimits

0xfab8,	// (0x00069422) blid2_tripm_pane_t

0xc691,	// (0x00065ffb) cell_blid2_satellite_pane_ParamLimits

0xc691,	// (0x00065ffb) cell_blid2_satellite_pane

0xc6a9,	// (0x00066013) cell_blid2_satellite_pane_g1

0x326e,	// (0x0005cbd8) cell_blid2_satellite_pane_t1

0x7fc5,	// (0x0006192f) blid2_speed_pane_g1

0x327c,	// (0x0005cbe6) blid2_speed_pane_t1

0x328a,	// (0x0005cbf4) blid2_speed_pane_t2

0x0001,

0xfac1,	// (0x0006942b) blid2_speed_pane_t

0x7fc5,	// (0x0006192f) blid2_navig_ring_pane_g1

0xc6b2,	// (0x0006601c) blid2_navig_ring_pane_g2

0xc6ba,	// (0x00066024) blid2_navig_ring_pane_g3

0xc6c2,	// (0x0006602c) blid2_navig_ring_pane_g4

0xc6ca,	// (0x00066034) blid2_navig_ring_pane_g5

0x0004,

0xfac6,	// (0x00069430) blid2_navig_ring_pane_g

0x6858,	// (0x000601c2) bg_popup_window_pane_cp011

0x3298,	// (0x0005cc02) popup_blid2_search_window_g1

0x32a0,	// (0x0005cc0a) popup_blid2_search_window_t1

0x32ae,	// (0x0005cc18) popup_blid2_search_window_t2

0x0001,

0xfad1,	// (0x0006943b) popup_blid2_search_window_t

0x84bc,	// (0x00061e26) main_browser_pane_g1

0x742a,	// (0x00060d94) main_browser_pane_ParamLimits

0xec02,	// (0x0006856c) bg_button_pane_cp011_ParamLimits

0xb907,	// (0x00065271) cell_vitu2_function_pane_g1_ParamLimits

0xee2a,	// (0x00068794) bg_popup_sub_pane_cp22_ParamLimits

0x5e85,	// (0x0005f7ef) input_focus_pane_cp08_ParamLimits

0xc13d,	// (0x00065aa7) popup_vitu2_query_button_pane_ParamLimits

0xc13d,	// (0x00065aa7) popup_vitu2_query_button_pane

0x5e9c,	// (0x0005f806) popup_vitu2_query_input_button_pane

0x2ebf,	// (0x0005c829) popup_vitu2_query_window_g1_ParamLimits

0x5ea4,	// (0x0005f80e) popup_vitu2_query_window_g2_ParamLimits

0xf9d2,	// (0x0006933c) popup_vitu2_query_window_g_ParamLimits

0x6858,	// (0x000601c2) bg_button_pane_cp026

0xc6d2,	// (0x0006603c) popup_vitu2_query_input_button_pane_g1

0x6858,	// (0x000601c2) bg_button_pane_cp025

0x32bc,	// (0x0005cc26) popup_vitu2_query_button_pane_t1

0xa441,	// (0x00063dab) main_mp3_pane_t6

0xa44f,	// (0x00063db9) popup_slider_window_cp01

0xb611,	// (0x00064f7b) cam4_battery_pane

0xb611,	// (0x00064f7b) cam4_battery_pane_cp02

0xb611,	// (0x00064f7b) cam4_battery_pane_cp01

0xb611,	// (0x00064f7b) cam4_battery_pane_cp03

0x7fc5,	// (0x0006192f) cam4_battery_pane_g1

0x209a,	// (0x0005ba04) cam4_battery_pane_g2

0x0001,

0xfad6,	// (0x00069440) cam4_battery_pane_g

0x220a,	// (0x0005bb74) popup_blid_sat_info2_window_t11

0x95e5,	// (0x00062f4f) aid_size_touch_mv_arrow_left_ParamLimits

0xe9e6,	// (0x00068350) aid_size_touch_mv_arrow_right_ParamLimits

0xea3f,	// (0x000683a9) navi_pane_g1_ParamLimits

0xea4b,	// (0x000683b5) navi_pane_g2_ParamLimits

0x9609,	// (0x00062f73) navi_pane_g3_ParamLimits

0xf38b,	// (0x00068cf5) navi_pane_g_ParamLimits

0x9626,	// (0x00062f90) navi_pane_mv_t1_ParamLimits

0xaddb,	// (0x00064745) grid_imed_effect_pane_ParamLimits

0x80bd,	// (0x00061a27) aid_placing_vt_slider_lsc

0x80d5,	// (0x00061a3f) aid_placing_vt_slider_prt

0xec02,	// (0x0006856c) bg_tb_trans_pane_cp01_ParamLimits

0x244f,	// (0x0005bdb9) popup_image_details_window_g1_ParamLimits

0x2462,	// (0x0005bdcc) popup_image_details_window_g2_ParamLimits

0x2477,	// (0x0005bde1) popup_image_details_window_g3_ParamLimits

0x2477,	// (0x0005bde1) popup_image_details_window_g3

0xf6ca,	// (0x00069034) popup_image_details_window_g_ParamLimits

0x248b,	// (0x0005bdf5) popup_image_details_window_t1_ParamLimits

0x249d,	// (0x0005be07) popup_image_details_window_t2_ParamLimits

0x24b6,	// (0x0005be20) popup_image_details_window_t3_ParamLimits

0x24ca,	// (0x0005be34) popup_image_details_window_t4_ParamLimits

0x24e5,	// (0x0005be4f) popup_image_details_window_t5_ParamLimits

0xf6d1,	// (0x0006903b) popup_image_details_window_t_ParamLimits

0xc343,	// (0x00065cad) cl_header_name_pane_ParamLimits

0xc343,	// (0x00065cad) cl_header_name_pane

0xc6da,	// (0x00066044) cl_header_name_pane_t1_ParamLimits

0xc6da,	// (0x00066044) cl_header_name_pane_t1

0xc6f1,	// (0x0006605b) cl_header_name_pane_t2_ParamLimits

0xc6f1,	// (0x0006605b) cl_header_name_pane_t2

0xc71b,	// (0x00066085) cl_header_name_pane_t3_ParamLimits

0xc71b,	// (0x00066085) cl_header_name_pane_t3

0x0002,

0xfadb,	// (0x00069445) cl_header_name_pane_t_ParamLimits

0xfadb,	// (0x00069445) cl_header_name_pane_t

0xead8,	// (0x00068442) navi_pane_mv_g2_ParamLimits

0x2bfc,	// (0x0005c566) field_vitu2_entry_pane_g1_ParamLimits

0x2c08,	// (0x0005c572) field_vitu2_entry_pane_g2_ParamLimits

0xee38,	// (0x000687a2) field_vitu2_entry_pane_g3_ParamLimits

0xee38,	// (0x000687a2) field_vitu2_entry_pane_g3

0xf8d1,	// (0x0006923b) field_vitu2_entry_pane_g_ParamLimits

0xb89b,	// (0x00065205) cell_vitu2_itu_pane_g1_ParamLimits

0xb8ad,	// (0x00065217) cell_vitu2_itu_pane_g2_ParamLimits

0xb8ad,	// (0x00065217) cell_vitu2_itu_pane_g2

0x0001,

0xf8dd,	// (0x00069247) cell_vitu2_itu_pane_g_ParamLimits

0xf8dd,	// (0x00069247) cell_vitu2_itu_pane_g

0xec02,	// (0x0006856c) bg_vkb2_func_pane_cp05_ParamLimits

0xec02,	// (0x0006856c) bg_vkb2_func_pane_cp05

0xec02,	// (0x0006856c) bg_vkb2_func_pane_cp03

0xec02,	// (0x0006856c) bg_vkb2_func_pane_cp04

0xec02,	// (0x0006856c) bg_vkb2_func_pane_cp10_ParamLimits

0xec02,	// (0x0006856c) bg_vkb2_func_pane_cp10

0x6055,	// (0x0005f9bf) bg_vkb2_func_pane_cp08

0xc2ee,	// (0x00065c58) bg_vkb2_func_pane_cp06

0xc2fb,	// (0x00065c65) bg_vkb2_func_pane_cp07

0x3201,	// (0x0005cb6b) bg_vkb2_func_pane_cp11_ParamLimits

0x3201,	// (0x0005cb6b) bg_vkb2_func_pane_cp11

0x3216,	// (0x0005cb80) bg_vkb2_func_pane_cp12_ParamLimits

0x3216,	// (0x0005cb80) bg_vkb2_func_pane_cp12

0x6858,	// (0x000601c2) bg_vkb2_func_pane_cp09

0x2c43,	// (0x0005c5ad) bg_vkb2_func_pane_g1

0x8617,	// (0x00061f81) bg_vkb2_func_pane_g2

0x2c4b,	// (0x0005c5b5) bg_vkb2_func_pane_g3

0x2c53,	// (0x0005c5bd) bg_vkb2_func_pane_g4

0x2e77,	// (0x0005c7e1) bg_vkb2_func_pane_g5

0x2c6b,	// (0x0005c5d5) bg_vkb2_func_pane_g6

0x2c73,	// (0x0005c5dd) bg_vkb2_func_pane_g7

0x2c63,	// (0x0005c5cd) bg_vkb2_func_pane_g8

0x85f7,	// (0x00061f61) bg_vkb2_func_pane_g9

0x0008,

0xfae2,	// (0x0006944c) bg_vkb2_func_pane_g

0xc631,	// (0x00065f9b) blid2_tripm_pane_g6_ParamLimits

0xc631,	// (0x00065f9b) blid2_tripm_pane_g6

0x2ad2,	// (0x0005c43c) mp4_progress_pane_g1

0xc685,	// (0x00065fef) blid2_tripm_values_pane_ParamLimits

0xc685,	// (0x00065fef) blid2_tripm_values_pane

0xc740,	// (0x000660aa) blid2_tripm_values_pane_t1

0xc74e,	// (0x000660b8) blid2_tripm_values_pane_t2

0xc75c,	// (0x000660c6) blid2_tripm_values_pane_t3

0xc76a,	// (0x000660d4) blid2_tripm_values_pane_t4

0xc778,	// (0x000660e2) blid2_tripm_values_pane_t5

0xc786,	// (0x000660f0) blid2_tripm_values_pane_t6

0xc794,	// (0x000660fe) blid2_tripm_values_pane_t7

0xc7a2,	// (0x0006610c) blid2_tripm_values_pane_t8

0xc7b0,	// (0x0006611a) blid2_tripm_values_pane_t9

0x0008,

0xfaf5,	// (0x0006945f) blid2_tripm_values_pane_t

0x8101,	// (0x00061a6b) call_video_pane_t1_ParamLimits

0x811e,	// (0x00061a88) call_video_pane_t2_ParamLimits

0xf222,	// (0x00068b8c) call_video_pane_t_ParamLimits

0x5c8a,	// (0x0005f5f4) msg_header_pane_g1_ParamLimits

0xecb7,	// (0x00068621) msg_header_pane_g2_ParamLimits

0xecb7,	// (0x00068621) msg_header_pane_g2

0x0001,

0xf42e,	// (0x00068d98) msg_header_pane_g_ParamLimits

0xf42e,	// (0x00068d98) msg_header_pane_g

0x742a,	// (0x00060d94) main_clock2_pane_ParamLimits

0xab7f,	// (0x000644e9) grid_clock2_toolbar_pane_ParamLimits

0xab7f,	// (0x000644e9) grid_clock2_toolbar_pane

0xab7f,	// (0x000644e9) listscroll_clock2_pane_ParamLimits

0xab7f,	// (0x000644e9) listscroll_clock2_pane

0xac1b,	// (0x00064585) main_clock2_pane_t3_ParamLimits

0xac1b,	// (0x00064585) main_clock2_pane_t3

0xac2d,	// (0x00064597) main_clock2_pane_t4_ParamLimits

0xac2d,	// (0x00064597) main_clock2_pane_t4

0x32ca,	// (0x0005cc34) cell_clock2_toolbar_pane

0x32d2,	// (0x0005cc3c) cell_clock2_toolbar_pane_cp01

0x32d2,	// (0x0005cc3c) cell_clock2_toolbar_pane_cp02

0x32da,	// (0x0005cc44) cell_clock2_toolbar_pane_cp03

0x32e2,	// (0x0005cc4c) list_clock2_pane

0x32ea,	// (0x0005cc54) scroll_pane_cp10

0x32f2,	// (0x0005cc5c) list_single_clock2_pane_ParamLimits

0x32f2,	// (0x0005cc5c) list_single_clock2_pane

0x7ddf,	// (0x00061749) list_highlight_pane_cp08

0x32ff,	// (0x0005cc69) list_single_clock2_pane_t1

0x330d,	// (0x0005cc77) list_single_clock2_pane_t2

0x0001,

0xfb08,	// (0x00069472) list_single_clock2_pane_t

0x6858,	// (0x000601c2) bg_button_pane_cp10

0x331b,	// (0x0005cc85) cell_clock2_toolbar_pane_g1

0x9860,	// (0x000631ca) aid_main_viewer_pane_g1_ParamLimits

0x9860,	// (0x000631ca) aid_main_viewer_pane_g1

0x986c,	// (0x000631d6) aid_main_viewer_pane_g2_ParamLimits

0x986c,	// (0x000631d6) aid_main_viewer_pane_g2

0x9878,	// (0x000631e2) aid_main_viewer_pane_g3_ParamLimits

0x9878,	// (0x000631e2) aid_main_viewer_pane_g3

0x9887,	// (0x000631f1) aid_main_viewer_pane_g4_ParamLimits

0x9887,	// (0x000631f1) aid_main_viewer_pane_g4

0x0003,

0xf43f,	// (0x00068da9) aid_main_viewer_pane_g_ParamLimits

0xf43f,	// (0x00068da9) aid_main_viewer_pane_g

0x6aa6,	// (0x00060410) main_calc_pane_ParamLimits

0x9f21,	// (0x0006388b) main_dialer2_pane_ParamLimits

0x6858,	// (0x000601c2) main_cam6_pane

0x6858,	// (0x000601c2) main_vid6_pane

0xab8b,	// (0x000644f5) listscroll_gen_pane_cp06_ParamLimits

0xab8b,	// (0x000644f5) listscroll_gen_pane_cp06

0xac3f,	// (0x000645a9) main_clock2_pane_t5_ParamLimits

0xac3f,	// (0x000645a9) main_clock2_pane_t5

0xac88,	// (0x000645f2) aid_call2_pane_cp10_ParamLimits

0xac9a,	// (0x00064604) aid_call_pane_cp10_ParamLimits

0xe9da,	// (0x00068344) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe9da,	// (0x00068344) popup_clock_analogue_window_cp10_g2_ParamLimits

0xacac,	// (0x00064616) popup_clock_analogue_window_cp10_g3_ParamLimits

0xacac,	// (0x00064616) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe9da,	// (0x00068344) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf786,	// (0x000690f0) popup_clock_analogue_window_cp10_g_ParamLimits

0xacbe,	// (0x00064628) popup_clock_analogue_window_cp10_t1_ParamLimits

0x2b2a,	// (0x0005c494) cell_dialer2_keypad_pane_g2_ParamLimits

0x2b2a,	// (0x0005c494) cell_dialer2_keypad_pane_g2

0x0001,

0xf870,	// (0x000691da) cell_dialer2_keypad_pane_g_ParamLimits

0xf870,	// (0x000691da) cell_dialer2_keypad_pane_g

0xebee,	// (0x00068558) cell_dialer2_keypad_pane_t1

0xbb99,	// (0x00065503) main_cset_text2_pane_ParamLimits

0xbb99,	// (0x00065503) main_cset_text2_pane

0x3099,	// (0x0005ca03) area_vitu2_query_pane_g1_ParamLimits

0x5f82,	// (0x0005f8ec) area_vitu2_query_pane_g2_ParamLimits

0xfa25,	// (0x0006938f) area_vitu2_query_pane_g_ParamLimits

0x6031,	// (0x0005f99b) area_vitu2_query_pane_t7_ParamLimits

0x6031,	// (0x0005f99b) area_vitu2_query_pane_t7

0xc2ee,	// (0x00065c58) bg_button_pane_cp018_ParamLimits

0xc2fb,	// (0x00065c65) bg_button_pane_cp021_ParamLimits

0x6055,	// (0x0005f9bf) bg_button_pane_cp022_ParamLimits

0x6055,	// (0x0005f9bf) bg_vkb2_func_pane_cp08_ParamLimits

0xc2ee,	// (0x00065c58) bg_vkb2_func_pane_cp06_ParamLimits

0xc2fb,	// (0x00065c65) bg_vkb2_func_pane_cp07_ParamLimits

0x6064,	// (0x0005f9ce) input_focus_pane_cp09_ParamLimits

0xc7be,	// (0x00066128) cam6_autofocus_pane_ParamLimits

0xc7be,	// (0x00066128) cam6_autofocus_pane

0xc7da,	// (0x00066144) cam6_image_uncrop_pane_ParamLimits

0xc7da,	// (0x00066144) cam6_image_uncrop_pane

0xc7fd,	// (0x00066167) cam6_indi_pane_ParamLimits

0xc7fd,	// (0x00066167) cam6_indi_pane

0xc817,	// (0x00066181) cam6_mode_pane_ParamLimits

0xc817,	// (0x00066181) cam6_mode_pane

0xc82b,	// (0x00066195) cam6_timer_pane_ParamLimits

0xc82b,	// (0x00066195) cam6_timer_pane

0xc837,	// (0x000661a1) cam6_zoom_pane_ParamLimits

0xc837,	// (0x000661a1) cam6_zoom_pane

0xb671,	// (0x00064fdb) cam6_mode_pane_g1_ParamLimits

0xb671,	// (0x00064fdb) cam6_mode_pane_g1

0xc84d,	// (0x000661b7) cam6_mode_pane_g2_ParamLimits

0xc84d,	// (0x000661b7) cam6_mode_pane_g2

0xc859,	// (0x000661c3) cam6_mode_pane_g3_ParamLimits

0xc859,	// (0x000661c3) cam6_mode_pane_g3

0xc865,	// (0x000661cf) cam6_mode_pane_g4_ParamLimits

0xc865,	// (0x000661cf) cam6_mode_pane_g4

0x0003,

0xfb0d,	// (0x00069477) cam6_mode_pane_g_ParamLimits

0xfb0d,	// (0x00069477) cam6_mode_pane_g

0x3323,	// (0x0005cc8d) bg_tb_trans_pane_cp08_ParamLimits

0x3323,	// (0x0005cc8d) bg_tb_trans_pane_cp08

0x3331,	// (0x0005cc9b) cam6_battery_pane_ParamLimits

0x3331,	// (0x0005cc9b) cam6_battery_pane

0x3347,	// (0x0005ccb1) cam6_indi_pane_g1_ParamLimits

0x3347,	// (0x0005ccb1) cam6_indi_pane_g1

0x3359,	// (0x0005ccc3) cam6_indi_pane_g2_ParamLimits

0x3359,	// (0x0005ccc3) cam6_indi_pane_g2

0x336b,	// (0x0005ccd5) cam6_indi_pane_g3_ParamLimits

0x336b,	// (0x0005ccd5) cam6_indi_pane_g3

0x0002,

0xfb16,	// (0x00069480) cam6_indi_pane_g_ParamLimits

0xfb16,	// (0x00069480) cam6_indi_pane_g

0x337d,	// (0x0005cce7) cam6_indi_pane_t1_ParamLimits

0x337d,	// (0x0005cce7) cam6_indi_pane_t1

0xb714,	// (0x0006507e) cam6_autofocus_pane_g1

0xb71c,	// (0x00065086) cam6_autofocus_pane_g2

0xb724,	// (0x0006508e) cam6_autofocus_pane_g3

0xb72c,	// (0x00065096) cam6_autofocus_pane_g4

0x0003,

0xfb1d,	// (0x00069487) cam6_autofocus_pane_g

0x33a3,	// (0x0005cd0d) cam6_timer_pane_g1

0x33ab,	// (0x0005cd15) cam6_timer_pane_t1

0x33b9,	// (0x0005cd23) cam6_zoom_cont_pane

0x33c1,	// (0x0005cd2b) cam6_zoom_pane_g1

0x33c9,	// (0x0005cd33) cam6_zoom_pane_g2

0xc871,	// (0x000661db) cam6_zoom_pane_g3

0x0002,

0xfb26,	// (0x00069490) cam6_zoom_pane_g

0x7fc5,	// (0x0006192f) cam6_battery_pane_g1

0x7fc5,	// (0x0006192f) cam6_battery_pane_g2

0x0001,

0xf3ef,	// (0x00068d59) cam6_battery_pane_g

0x33d1,	// (0x0005cd3b) cam6_zoom_cont_pane_g1

0x33da,	// (0x0005cd44) cam6_zoom_cont_pane_g2

0x33e3,	// (0x0005cd4d) cam6_zoom_cont_pane_g3

0x0002,

0xfb2d,	// (0x00069497) cam6_zoom_cont_pane_g

0xc88e,	// (0x000661f8) cam6_mode_pane_cp_ParamLimits

0xc88e,	// (0x000661f8) cam6_mode_pane_cp

0xc837,	// (0x000661a1) cam6_zoom_pane_cp_ParamLimits

0xc837,	// (0x000661a1) cam6_zoom_pane_cp

0xc8a2,	// (0x0006620c) vid6_image_uncrop_cif_pane_ParamLimits

0xc8a2,	// (0x0006620c) vid6_image_uncrop_cif_pane

0xc8c4,	// (0x0006622e) vid6_image_uncrop_nhd_pane_ParamLimits

0xc8c4,	// (0x0006622e) vid6_image_uncrop_nhd_pane

0xc7da,	// (0x00066144) vid6_image_uncrop_vga_pane_ParamLimits

0xc7da,	// (0x00066144) vid6_image_uncrop_vga_pane

0xc8db,	// (0x00066245) vid6_image_uncrop_wvga_pane_ParamLimits

0xc8db,	// (0x00066245) vid6_image_uncrop_wvga_pane

0xc8f2,	// (0x0006625c) vid6_indi_pane_ParamLimits

0xc8f2,	// (0x0006625c) vid6_indi_pane

0x3323,	// (0x0005cc8d) bg_tb_trans_pane_cp09_ParamLimits

0x3323,	// (0x0005cc8d) bg_tb_trans_pane_cp09

0x33f7,	// (0x0005cd61) cam6_battery_pane_cp_ParamLimits

0x33f7,	// (0x0005cd61) cam6_battery_pane_cp

0x3403,	// (0x0005cd6d) vid6_indi_pane_g1_ParamLimits

0x3403,	// (0x0005cd6d) vid6_indi_pane_g1

0x3415,	// (0x0005cd7f) vid6_indi_pane_g2_ParamLimits

0x3415,	// (0x0005cd7f) vid6_indi_pane_g2

0x3427,	// (0x0005cd91) vid6_indi_pane_g3_ParamLimits

0x3427,	// (0x0005cd91) vid6_indi_pane_g3

0x343c,	// (0x0005cda6) vid6_indi_pane_g4_ParamLimits

0x343c,	// (0x0005cda6) vid6_indi_pane_g4

0x3451,	// (0x0005cdbb) vid6_indi_pane_g5_ParamLimits

0x3451,	// (0x0005cdbb) vid6_indi_pane_g5

0x0004,

0xfb34,	// (0x0006949e) vid6_indi_pane_g_ParamLimits

0xfb34,	// (0x0006949e) vid6_indi_pane_g

0x346b,	// (0x0005cdd5) vid6_indi_pane_t1_ParamLimits

0x346b,	// (0x0005cdd5) vid6_indi_pane_t1

0x3481,	// (0x0005cdeb) vid6_indi_pane_t2_ParamLimits

0x3481,	// (0x0005cdeb) vid6_indi_pane_t2

0x34a9,	// (0x0005ce13) vid6_indi_pane_t3_ParamLimits

0x34a9,	// (0x0005ce13) vid6_indi_pane_t3

0x34d1,	// (0x0005ce3b) vid6_indi_pane_t4_ParamLimits

0x34d1,	// (0x0005ce3b) vid6_indi_pane_t4

0x0003,

0xfb3f,	// (0x000694a9) vid6_indi_pane_t_ParamLimits

0xfb3f,	// (0x000694a9) vid6_indi_pane_t

0x34f5,	// (0x0005ce5f) wait_bar_pane_cp08

0xc912,	// (0x0006627c) main_cset_text2_pane_t1_ParamLimits

0xc912,	// (0x0006627c) main_cset_text2_pane_t1

0xc879,	// (0x000661e3) listscroll_gen_pane_cp06_t1_ParamLimits

0xc879,	// (0x000661e3) listscroll_gen_pane_cp06_t1

0x6858,	// (0x000601c2) main_cam6_set_pane

0x7267,	// (0x00060bd1) bg_tb_trans_pane_cp06_ParamLimits

0xb619,	// (0x00064f83) cam4_indicators_pane_g1_ParamLimits

0xb629,	// (0x00064f93) cam4_indicators_pane_g2_ParamLimits

0xf8ad,	// (0x00069217) cam4_indicators_pane_g_ParamLimits

0xb649,	// (0x00064fb3) cam4_indicators_pane_t1_ParamLimits

0xec02,	// (0x0006856c) bg_tb_trans_pane_cp07_ParamLimits

0xb619,	// (0x00064f83) vid4_indicators_pane_g1_ParamLimits

0xb6bd,	// (0x00065027) vid4_indicators_pane_g2_ParamLimits

0xb6cd,	// (0x00065037) vid4_indicators_pane_g3_ParamLimits

0xb6de,	// (0x00065048) vid4_indicators_pane_g4_ParamLimits

0xf8bf,	// (0x00069229) vid4_indicators_pane_g_ParamLimits

0xb6fa,	// (0x00065064) vid4_indicators_pane_t1_ParamLimits

0xc417,	// (0x00065d81) vid4_progress_pane_g1_ParamLimits

0xc426,	// (0x00065d90) vid4_progress_pane_g2_ParamLimits

0xc435,	// (0x00065d9f) vid4_progress_pane_g3_ParamLimits

0xc444,	// (0x00065dae) vid4_progress_pane_g4_ParamLimits

0xfa70,	// (0x000693da) vid4_progress_pane_g_ParamLimits

0xc450,	// (0x00065dba) vid4_progress_pane_t1_ParamLimits

0xc466,	// (0x00065dd0) vid4_progress_pane_t2_ParamLimits

0xc47b,	// (0x00065de5) vid4_progress_pane_t3_ParamLimits

0xfa7b,	// (0x000693e5) vid4_progress_pane_t_ParamLimits

0xc490,	// (0x00065dfa) wait_bar_pane_cp07_ParamLimits

0xc92e,	// (0x00066298) main_cam6_set_pane_g2_ParamLimits

0xc92e,	// (0x00066298) main_cam6_set_pane_g2

0xc93a,	// (0x000662a4) main_cset6_listscroll_pane_ParamLimits

0xc93a,	// (0x000662a4) main_cset6_listscroll_pane

0xc963,	// (0x000662cd) main_cset6_slider_pane_ParamLimits

0xc963,	// (0x000662cd) main_cset6_slider_pane

0xc96f,	// (0x000662d9) main_cset6_text2_pane_ParamLimits

0xc96f,	// (0x000662d9) main_cset6_text2_pane

0x3505,	// (0x0005ce6f) main_cset6_text_pane

0x2d59,	// (0x0005c6c3) main_cset_list_pane_copy1_ParamLimits

0x2d59,	// (0x0005c6c3) main_cset_list_pane_copy1

0x2d69,	// (0x0005c6d3) scroll_pane_cp028_copy1

0xc982,	// (0x000662ec) cset_list_set_pane_copy1

0x2e3c,	// (0x0005c7a6) aid_position_infowindow_above_copy1

0x2e44,	// (0x0005c7ae) aid_position_infowindow_below_copy1

0xc991,	// (0x000662fb) cset_list_set_pane_g1_copy1

0x6098,	// (0x0005fa02) cset_list_set_pane_g3_copy1_ParamLimits

0x6098,	// (0x0005fa02) cset_list_set_pane_g3_copy1

0x60a7,	// (0x0005fa11) cset_list_set_pane_t1_copy1_ParamLimits

0x60a7,	// (0x0005fa11) cset_list_set_pane_t1_copy1

0xec02,	// (0x0006856c) list_highlight_pane_cp021_copy1_ParamLimits

0xec02,	// (0x0006856c) list_highlight_pane_cp021_copy1

0x350d,	// (0x0005ce77) cset6_slider_pane_ParamLimits

0x350d,	// (0x0005ce77) cset6_slider_pane

0x3539,	// (0x0005cea3) main_cset6_slider_pane_g1_ParamLimits

0x3539,	// (0x0005cea3) main_cset6_slider_pane_g1

0xc999,	// (0x00066303) main_cset6_slider_pane_g2_ParamLimits

0xc999,	// (0x00066303) main_cset6_slider_pane_g2

0x2d7e,	// (0x0005c6e8) main_cset6_slider_pane_g3_ParamLimits

0x2d7e,	// (0x0005c6e8) main_cset6_slider_pane_g3

0xc9c1,	// (0x0006632b) main_cset6_slider_pane_g4_ParamLimits

0xc9c1,	// (0x0006632b) main_cset6_slider_pane_g4

0xc9cd,	// (0x00066337) main_cset6_slider_pane_g5_ParamLimits

0xc9cd,	// (0x00066337) main_cset6_slider_pane_g5

0x2d7e,	// (0x0005c6e8) main_cset6_slider_pane_g7_ParamLimits

0x2d7e,	// (0x0005c6e8) main_cset6_slider_pane_g7

0x2d8a,	// (0x0005c6f4) main_cset6_slider_pane_g8_ParamLimits

0x2d8a,	// (0x0005c6f4) main_cset6_slider_pane_g8

0xc9d9,	// (0x00066343) main_cset6_slider_pane_g9_ParamLimits

0xc9d9,	// (0x00066343) main_cset6_slider_pane_g9

0xc9e5,	// (0x0006634f) main_cset6_slider_pane_g10_ParamLimits

0xc9e5,	// (0x0006634f) main_cset6_slider_pane_g10

0xc9c1,	// (0x0006632b) main_cset6_slider_pane_g11_ParamLimits

0xc9c1,	// (0x0006632b) main_cset6_slider_pane_g11

0xc9f1,	// (0x0006635b) main_cset6_slider_pane_g12_ParamLimits

0xc9f1,	// (0x0006635b) main_cset6_slider_pane_g12

0xc9fd,	// (0x00066367) main_cset6_slider_pane_g13_ParamLimits

0xc9fd,	// (0x00066367) main_cset6_slider_pane_g13

0xca09,	// (0x00066373) main_cset6_slider_pane_g14_ParamLimits

0xca09,	// (0x00066373) main_cset6_slider_pane_g14

0xca15,	// (0x0006637f) main_cset6_slider_pane_g15_ParamLimits

0xca15,	// (0x0006637f) main_cset6_slider_pane_g15

0xc9cd,	// (0x00066337) main_cset6_slider_pane_g16_ParamLimits

0xc9cd,	// (0x00066337) main_cset6_slider_pane_g16

0xca2d,	// (0x00066397) main_cset6_slider_pane_g17_ParamLimits

0xca2d,	// (0x00066397) main_cset6_slider_pane_g17

0x0011,

0xfb48,	// (0x000694b2) main_cset6_slider_pane_g_ParamLimits

0xfb48,	// (0x000694b2) main_cset6_slider_pane_g

0x3561,	// (0x0005cecb) main_cset6_slider_pane_t1_ParamLimits

0x3561,	// (0x0005cecb) main_cset6_slider_pane_t1

0xca39,	// (0x000663a3) main_cset6_slider_pane_t2_ParamLimits

0xca39,	// (0x000663a3) main_cset6_slider_pane_t2

0x35a2,	// (0x0005cf0c) main_cset6_slider_pane_t3_ParamLimits

0x35a2,	// (0x0005cf0c) main_cset6_slider_pane_t3

0xca64,	// (0x000663ce) main_cset6_slider_pane_t4_ParamLimits

0xca64,	// (0x000663ce) main_cset6_slider_pane_t4

0x35cd,	// (0x0005cf37) main_cset6_slider_pane_t5_ParamLimits

0x35cd,	// (0x0005cf37) main_cset6_slider_pane_t5

0x35f8,	// (0x0005cf62) main_cset6_slider_pane_t7_ParamLimits

0x35f8,	// (0x0005cf62) main_cset6_slider_pane_t7

0xca8f,	// (0x000663f9) main_cset6_slider_pane_t8_ParamLimits

0xca8f,	// (0x000663f9) main_cset6_slider_pane_t8

0xcab3,	// (0x0006641d) main_cset6_slider_pane_t9_ParamLimits

0xcab3,	// (0x0006641d) main_cset6_slider_pane_t9

0xcad7,	// (0x00066441) main_cset6_slider_pane_t10_ParamLimits

0xcad7,	// (0x00066441) main_cset6_slider_pane_t10

0xcafb,	// (0x00066465) main_cset6_slider_pane_t11_ParamLimits

0xcafb,	// (0x00066465) main_cset6_slider_pane_t11

0x362e,	// (0x0005cf98) main_cset6_slider_pane_t14_ParamLimits

0x362e,	// (0x0005cf98) main_cset6_slider_pane_t14

0x3667,	// (0x0005cfd1) main_cset6_slider_pane_t15_ParamLimits

0x3667,	// (0x0005cfd1) main_cset6_slider_pane_t15

0x000b,

0xfb6d,	// (0x000694d7) main_cset6_slider_pane_t_ParamLimits

0xfb6d,	// (0x000694d7) main_cset6_slider_pane_t

0x36a0,	// (0x0005d00a) cset_slider_pane_g1_copy1

0x36a9,	// (0x0005d013) cset_slider_pane_g2_copy1

0x36b2,	// (0x0005d01c) cset_slider_pane_g3_copy1

0x6858,	// (0x000601c2) bg_popup_sub_pane_cp011_copy1

0x2ecb,	// (0x0005c835) main_cset_text_pane_g1_copy1

0x2ed3,	// (0x0005c83d) main_cset_text_pane_t1_copy1

0x2ee1,	// (0x0005c84b) main_cset_text_pane_t2_copy1

0x2eef,	// (0x0005c859) main_cset_text_pane_t3_copy1

0x2efd,	// (0x0005c867) main_cset_text_pane_t4_copy1

0x2f0b,	// (0x0005c875) main_cset_text_pane_t5_copy1

0x2f19,	// (0x0005c883) main_cset_text_pane_t6_copy1

0x2f27,	// (0x0005c891) main_cset_text_pane_t7_copy1

0xcb1f,	// (0x00066489) main_cset_text2_pane_t1_copy1

0xec02,	// (0x0006856c) main_ncimui_pane

0x9f6c,	// (0x000638d6) popup_query_ncimui_window_ParamLimits

0x9f6c,	// (0x000638d6) popup_query_ncimui_window

0xa57b,	// (0x00063ee5) field_cale_ev2_pane_g4_ParamLimits

0xa57b,	// (0x00063ee5) field_cale_ev2_pane_g4

0xb04f,	// (0x000649b9) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb04f,	// (0x000649b9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf847,	// (0x000691b1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf847,	// (0x000691b1) cell_video_dialer_keypad_pane_g

0xb067,	// (0x000649d1) cell_video_dialer_keypad_pane_t1

0x6858,	// (0x000601c2) bg_popup_window_pane_cp012

0xe827,	// (0x00068191) heading_pane_cp06

0x370b,	// (0x0005d075) ncim_query_content_pane

0x6858,	// (0x000601c2) bg_popup_heading_pane_cp01

0x3713,	// (0x0005d07d) ncim_heading_pane_t1

0x3721,	// (0x0005d08b) ncim_indicator_popup_pane

0x3733,	// (0x0005d09d) ncim_query_button_pane

0x3747,	// (0x0005d0b1) ncim_query_content_pane_t1

0x3759,	// (0x0005d0c3) ncim_query_content_pane_t2

0x0005,

0xfbb1,	// (0x0006951b) ncim_query_content_pane_t

0x3793,	// (0x0005d0fd) ncim_query_list_pane

0x37a5,	// (0x0005d10f) ncim_query_popup_pane

0x3721,	// (0x0005d08b) ncim_indicator_popup_pane_ParamLimits

0xcc60,	// (0x000665ca) ncim_query_content_pane_g1_ParamLimits

0xcc60,	// (0x000665ca) ncim_query_content_pane_g1

0x3747,	// (0x0005d0b1) ncim_query_content_pane_t1_ParamLimits

0x3759,	// (0x0005d0c3) ncim_query_content_pane_t2_ParamLimits

0xcc6c,	// (0x000665d6) ncim_query_content_pane_t3_ParamLimits

0xcc6c,	// (0x000665d6) ncim_query_content_pane_t3

0xcc89,	// (0x000665f3) ncim_query_content_pane_t4_ParamLimits

0xcc89,	// (0x000665f3) ncim_query_content_pane_t4

0xcca6,	// (0x00066610) ncim_query_content_pane_t5_ParamLimits

0xcca6,	// (0x00066610) ncim_query_content_pane_t5

0x376b,	// (0x0005d0d5) ncim_query_content_pane_t6_ParamLimits

0x376b,	// (0x0005d0d5) ncim_query_content_pane_t6

0xfbb1,	// (0x0006951b) ncim_query_content_pane_t_ParamLimits

0x3793,	// (0x0005d0fd) ncim_query_list_pane_ParamLimits

0x37a5,	// (0x0005d10f) ncim_query_popup_pane_ParamLimits

0x37b9,	// (0x0005d123) wait_bar_pane_cp04

0x6858,	// (0x000601c2) input_focus_pane_cp011

0x37c1,	// (0x0005d12b) ncim_query_popup_pane_t1

0x37cf,	// (0x0005d139) ncim_list_query_list_pane_ParamLimits

0x37cf,	// (0x0005d139) ncim_list_query_list_pane

0x6858,	// (0x000601c2) bg_button_pane_cp027

0x37e2,	// (0x0005d14c) ncim_query_button_pane_g1

0x6858,	// (0x000601c2) list_highlight_pane_cp012

0x37ec,	// (0x0005d156) ncim_list_query_list_pane_g1

0x37f4,	// (0x0005d15e) ncim_list_query_list_pane_t1

0xb639,	// (0x00064fa3) cam4_indicators_pane_g3_ParamLimits

0xb639,	// (0x00064fa3) cam4_indicators_pane_g3

0xb6ea,	// (0x00065054) vid4_indicators_pane_g5_ParamLimits

0xb6ea,	// (0x00065054) vid4_indicators_pane_g5

0xe671,	// (0x00067fdb) vid4_progress_pane_g5_ParamLimits

0xe671,	// (0x00067fdb) vid4_progress_pane_g5

0xcb50,	// (0x000664ba) main_ncimui_pane_g1

0xcbb6,	// (0x00066520) ncimui_group_query_pane_ParamLimits

0xcbb6,	// (0x00066520) ncimui_group_query_pane

0xcbfe,	// (0x00066568) ncimui_list_pane_ParamLimits

0xcbfe,	// (0x00066568) ncimui_list_pane

0xcc23,	// (0x0006658d) ncimui_text_pane_ParamLimits

0xcc23,	// (0x0006658d) ncimui_text_pane

0xccc3,	// (0x0006662d) ncimui_text_pane_t1_ParamLimits

0xccc3,	// (0x0006662d) ncimui_text_pane_t1

0x380b,	// (0x0005d175) ncimui_list_single_graphic_pane_ParamLimits

0x380b,	// (0x0005d175) ncimui_list_single_graphic_pane

0xcce1,	// (0x0006664b) ncimui_query_pane_ParamLimits

0xcce1,	// (0x0006664b) ncimui_query_pane

0x6858,	// (0x000601c2) list_highlight_pane_cp013

0x381b,	// (0x0005d185) ncim_list_query_list_pane_t1_copy1

0x3829,	// (0x0005d193) ncim_list_single_graphic_pane_g1

0x3831,	// (0x0005d19b) ncim_query_button_pane_cp01

0x383d,	// (0x0005d1a7) ncim_query_entry_pane_ParamLimits

0x383d,	// (0x0005d1a7) ncim_query_entry_pane

0x3850,	// (0x0005d1ba) ncimui_query_pane_g1

0x385c,	// (0x0005d1c6) ncimui_query_pane_t1_ParamLimits

0x385c,	// (0x0005d1c6) ncimui_query_pane_t1

0xec02,	// (0x0006856c) input_focus_pane_cp012

0x3875,	// (0x0005d1df) ncim_query_entry_pane_t1

0x742a,	// (0x00060d94) main_im_pane_ParamLimits

0xec02,	// (0x0006856c) main_mobtv_pane_ParamLimits

0xec02,	// (0x0006856c) main_mobtv_pane

0xc9d9,	// (0x00066343) main_cset6_slider_pane_g18_ParamLimits

0xc9d9,	// (0x00066343) main_cset6_slider_pane_g18

0xc9fd,	// (0x00066367) main_cset6_slider_pane_g19_ParamLimits

0xc9fd,	// (0x00066367) main_cset6_slider_pane_g19

0xee38,	// (0x000687a2) bg_main_mobtv_pane_ParamLimits

0xee38,	// (0x000687a2) bg_main_mobtv_pane

0xccf1,	// (0x0006665b) main_mobtv_info_pane

0xccfa,	// (0x00066664) main_mobtv_loading_pane_ParamLimits

0xccfa,	// (0x00066664) main_mobtv_loading_pane

0x3887,	// (0x0005d1f1) main_mobtv_pg_channel_list_pane

0x3891,	// (0x0005d1fb) main_mobtv_pg_hdr_pane

0xcd07,	// (0x00066671) main_mobtv_programe_curr_pane_ParamLimits

0xcd07,	// (0x00066671) main_mobtv_programe_curr_pane

0xcd14,	// (0x0006667e) main_mobtv_programe_next_pane_ParamLimits

0xcd14,	// (0x0006667e) main_mobtv_programe_next_pane

0x389a,	// (0x0005d204) popup_mobtv_noti_window

0x7fc5,	// (0x0006192f) main_tv_pg_hdr_pane_g1

0x38a2,	// (0x0005d20c) main_tv_pg_hdr_pane_g2

0x38aa,	// (0x0005d214) main_tv_pg_hdr_pane_g3

0x38b2,	// (0x0005d21c) main_tv_pg_hdr_pane_g4

0x38ba,	// (0x0005d224) main_tv_pg_hdr_pane_g5

0x38c2,	// (0x0005d22c) main_tv_pg_hdr_pane_g6

0x38ca,	// (0x0005d234) main_tv_pg_hdr_pane_g7

0x38d2,	// (0x0005d23c) main_tv_pg_hdr_pane_g8

0x38da,	// (0x0005d244) main_tv_pg_hdr_pane_g9

0x38e2,	// (0x0005d24c) main_tv_pg_hdr_pane_g10

0x38ec,	// (0x0005d256) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbe,	// (0x00069528) main_tv_pg_hdr_pane_g

0x38f6,	// (0x0005d260) main_tv_pg_hdr_pane_t1

0x3904,	// (0x0005d26e) main_tv_pg_hdr_pane_t2

0x3912,	// (0x0005d27c) main_tv_pg_hdr_pane_t3

0x3920,	// (0x0005d28a) main_tv_pg_hdr_pane_t4

0x392e,	// (0x0005d298) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd5,	// (0x0006953f) main_tv_pg_hdr_pane_t

0x393c,	// (0x0005d2a6) single_mobtv_pg_channel_pane_ParamLimits

0x393c,	// (0x0005d2a6) single_mobtv_pg_channel_pane

0x394e,	// (0x0005d2b8) single_mobtv_pg_channel_table_pane

0x3957,	// (0x0005d2c1) single_mobtv_pg_channel_thumb_pane

0x3960,	// (0x0005d2ca) single_tv_pg_channel_pane_g1

0x3969,	// (0x0005d2d3) single_tv_pg_channel_pane_g2

0x0001,

0xfbe0,	// (0x0006954a) single_tv_pg_channel_pane_g

0x7267,	// (0x00060bd1) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x7267,	// (0x00060bd1) bg_single_mobtv_pg_channel_thumb_pane

0x3972,	// (0x0005d2dc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3972,	// (0x0005d2dc) single_mobtv_pg_channel_thumb_pane_g1

0x3980,	// (0x0005d2ea) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3980,	// (0x0005d2ea) single_mobtv_pg_channel_thumb_pane_g2

0x398c,	// (0x0005d2f6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x398c,	// (0x0005d2f6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe5,	// (0x0006954f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe5,	// (0x0006954f) single_mobtv_pg_channel_thumb_pane_g

0x3998,	// (0x0005d302) single_mobtv_pg_channel_thumb_pane_t1

0x39a6,	// (0x0005d310) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbec,	// (0x00069556) single_mobtv_pg_channel_thumb_pane_t

0x7fc5,	// (0x0006192f) bg_single_mobtv_pg_channel_table_pane_g1

0x7fc5,	// (0x0006192f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3ef,	// (0x00068d59) bg_single_mobtv_pg_channel_table_pane_g

0x39b4,	// (0x0005d31e) single_mobtv_pg_channel_table_pane_t1

0x39c2,	// (0x0005d32c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf1,	// (0x0006955b) single_mobtv_pg_channel_table_pane_t

0xcd29,	// (0x00066693) main_mobtv_info_pane_g1_ParamLimits

0xcd29,	// (0x00066693) main_mobtv_info_pane_g1

0xcd45,	// (0x000666af) main_mobtv_info_pane_t1_ParamLimits

0xcd45,	// (0x000666af) main_mobtv_info_pane_t1

0xcdab,	// (0x00066715) main_mobtv_info_pane_t2_ParamLimits

0xcdab,	// (0x00066715) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x00069565) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x00069565) main_mobtv_info_pane_t

0xce2e,	// (0x00066798) wait_bar_pane_cp05

0xce3e,	// (0x000667a8) main_mobtv_loading_pane_g1_ParamLimits

0xce3e,	// (0x000667a8) main_mobtv_loading_pane_g1

0xce4a,	// (0x000667b4) main_mobtv_loading_pane_g2_ParamLimits

0xce4a,	// (0x000667b4) main_mobtv_loading_pane_g2

0xce56,	// (0x000667c0) main_mobtv_loading_pane_g3_ParamLimits

0xce56,	// (0x000667c0) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x0006956c) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x0006956c) main_mobtv_loading_pane_g

0x39d0,	// (0x0005d33a) main_mobtv_loading_pane_t1_ParamLimits

0x39d0,	// (0x0005d33a) main_mobtv_loading_pane_t1

0x39e8,	// (0x0005d352) main_mobtv_loading_pane_t2_ParamLimits

0x39e8,	// (0x0005d352) main_mobtv_loading_pane_t2

0x0001,

0xfc09,	// (0x00069573) main_mobtv_loading_pane_t_ParamLimits

0xfc09,	// (0x00069573) main_mobtv_loading_pane_t

0xce62,	// (0x000667cc) wait_bar_pane_cp06_ParamLimits

0xce62,	// (0x000667cc) wait_bar_pane_cp06

0x3a0c,	// (0x0005d376) main_mobtv_programe_curr_pane_t1

0x3a1a,	// (0x0005d384) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0e,	// (0x00069578) main_mobtv_programe_curr_pane_t

0x3a28,	// (0x0005d392) main_mobtv_programe_next_pane_t1

0x3a36,	// (0x0005d3a0) main_mobtv_programe_next_pane_t2

0x3a44,	// (0x0005d3ae) main_mobtv_programe_next_pane_t3

0x0002,

0xfc13,	// (0x0006957d) main_mobtv_programe_next_pane_t

0x6858,	// (0x000601c2) bg_popup_mobtv_noti_window_pane

0x3a52,	// (0x0005d3bc) popup_mobtv_noti_window_g1

0x3a5a,	// (0x0005d3c4) popup_mobtv_noti_window_t1

0x3a68,	// (0x0005d3d2) popup_mobtv_noti_window_t2

0x0001,

0xfc1a,	// (0x00069584) popup_mobtv_noti_window_t

0x7fc5,	// (0x0006192f) bg_popup_mobtv_noti_window_pane_g1

0x6858,	// (0x000601c2) sc_clock_pane

0x6858,	// (0x000601c2) main_fs_bigclock_pane

0xc673,	// (0x00065fdd) blid2_tripm_pane_t4_ParamLimits

0xc673,	// (0x00065fdd) blid2_tripm_pane_t4

0xce6e,	// (0x000667d8) sc_clock_pane_g1_ParamLimits

0xce6e,	// (0x000667d8) sc_clock_pane_g1

0xce7c,	// (0x000667e6) sc_clock_pane_t1_ParamLimits

0xce7c,	// (0x000667e6) sc_clock_pane_t1

0xce8f,	// (0x000667f9) sc_clock_pane_t2_ParamLimits

0xce8f,	// (0x000667f9) sc_clock_pane_t2

0xcea1,	// (0x0006680b) sc_clock_pane_t3_ParamLimits

0xcea1,	// (0x0006680b) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x00069589) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x00069589) sc_clock_pane_t

0xd789,	// (0x000670f3) main_fs_bigclock_indicator_pane_ParamLimits

0xd789,	// (0x000670f3) main_fs_bigclock_indicator_pane

0xcf1c,	// (0x00066886) main_fs_bigclock_pane_g1_ParamLimits

0xcf1c,	// (0x00066886) main_fs_bigclock_pane_g1

0xd795,	// (0x000670ff) main_fs_bigclock_pane_t1_ParamLimits

0xd795,	// (0x000670ff) main_fs_bigclock_pane_t1

0xd7a7,	// (0x00067111) main_fs_bigclock_pane_t2_ParamLimits

0xd7a7,	// (0x00067111) main_fs_bigclock_pane_t2

0xd7b9,	// (0x00067123) main_fs_bigclock_pane_t3_ParamLimits

0xd7b9,	// (0x00067123) main_fs_bigclock_pane_t3

0x0002,

0xfde8,	// (0x00069752) main_fs_bigclock_pane_t_ParamLimits

0xfde8,	// (0x00069752) main_fs_bigclock_pane_t

0x4ca3,	// (0x0005e60d) main_fs_bigclock_indicator_pane_g1

0x373b,	// (0x0005d0a5) ncim_query_content_pane_g2_ParamLimits

0x373b,	// (0x0005d0a5) ncim_query_content_pane_g2

0x0001,

0xfbac,	// (0x00069516) ncim_query_content_pane_g_ParamLimits

0xfbac,	// (0x00069516) ncim_query_content_pane_g

0xceb3,	// (0x0006681d) sc_clock_pane_t4_ParamLimits

0xceb3,	// (0x0006681d) sc_clock_pane_t4

0xec02,	// (0x0006856c) main_radioblah_pane

0xb4e6,	// (0x00064e50) cell_call4_button_pane_t1_copy1_ParamLimits

0xb4e6,	// (0x00064e50) cell_call4_button_pane_t1_copy1

0xcb68,	// (0x000664d2) main_ncimui_pane_t1_ParamLimits

0xcb68,	// (0x000664d2) main_ncimui_pane_t1

0xcb82,	// (0x000664ec) main_ncimui_pane_t2_ParamLimits

0xcb82,	// (0x000664ec) main_ncimui_pane_t2

0x0002,

0xfba5,	// (0x0006950f) main_ncimui_pane_t_ParamLimits

0xfba5,	// (0x0006950f) main_ncimui_pane_t

0x3ba9,	// (0x0005d513) main_radioblah_anim_pane_ParamLimits

0x3ba9,	// (0x0005d513) main_radioblah_anim_pane

0x3bba,	// (0x0005d524) main_radioblah_info_pane_ParamLimits

0x3bba,	// (0x0005d524) main_radioblah_info_pane

0x3bce,	// (0x0005d538) main_radioblah_pane_t1_ParamLimits

0x3bce,	// (0x0005d538) main_radioblah_pane_t1

0x3bea,	// (0x0005d554) main_radioblah_pane_t2_ParamLimits

0x3bea,	// (0x0005d554) main_radioblah_pane_t2

0x0003,

0xfc40,	// (0x000695aa) main_radioblah_pane_t_ParamLimits

0xfc40,	// (0x000695aa) main_radioblah_pane_t

0xcf64,	// (0x000668ce) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcf64,	// (0x000668ce) main_radioblah_rocker_ctrl_pane

0x3c32,	// (0x0005d59c) main_radioblah_info_pane_t1_ParamLimits

0x3c32,	// (0x0005d59c) main_radioblah_info_pane_t1

0xcfa9,	// (0x00066913) main_radioblah_info_pane_t2_ParamLimits

0xcfa9,	// (0x00066913) main_radioblah_info_pane_t2

0x0003,

0xfc49,	// (0x000695b3) main_radioblah_info_pane_t_ParamLimits

0xfc49,	// (0x000695b3) main_radioblah_info_pane_t

0x7fc5,	// (0x0006192f) main_radioblah_rocker_ctrl_pane_g1

0xd051,	// (0x000669bb) main_radioblah_rocker_ctrl_pane_g2

0xd059,	// (0x000669c3) main_radioblah_rocker_ctrl_pane_g3

0xd061,	// (0x000669cb) main_radioblah_rocker_ctrl_pane_g4

0xd069,	// (0x000669d3) main_radioblah_rocker_ctrl_pane_g5

0xd071,	// (0x000669db) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc52,	// (0x000695bc) main_radioblah_rocker_ctrl_pane_g

0xcb1f,	// (0x00066489) main_cset_text2_pane_t1_copy1_ParamLimits

0xb569,	// (0x00064ed3) cam4_image_uncrop_qvga_pane

0xb67d,	// (0x00064fe7) vid4_image_uncrop_qcif_pane

0xc7f1,	// (0x0006615b) cam6_image_uncrop_qvga_pane_ParamLimits

0xc7f1,	// (0x0006615b) cam6_image_uncrop_qvga_pane

0x33eb,	// (0x0005cd55) vid6_image_uncrop_qcif_pane_ParamLimits

0x33eb,	// (0x0005cd55) vid6_image_uncrop_qcif_pane

0x6858,	// (0x000601c2) bg_popup_preview_window_pane_cp03

0x36e1,	// (0x0005d04b) list_cset_text2_pane

0x36e9,	// (0x0005d053) main_cset6_text2_pane_g1

0x36f1,	// (0x0005d05b) main_cset6_text2_pane_t1

0x4548,	// (0x0005deb2) list_cset_text2_pane_t1_ParamLimits

0x4548,	// (0x0005deb2) list_cset_text2_pane_t1

0xec02,	// (0x0006856c) main_radioblah_pane_ParamLimits

0xce1c,	// (0x00066786) main_mobtv_info_pane_t3_ParamLimits

0xce1c,	// (0x00066786) main_mobtv_info_pane_t3

0xcf52,	// (0x000668bc) main_radioblah_pane_g1

0xcf7d,	// (0x000668e7) main_radioblah_info_pane_g1

0xcff8,	// (0x00066962) main_radioblah_info_pane_t3_ParamLimits

0xcff8,	// (0x00066962) main_radioblah_info_pane_t3

0x915f,	// (0x00062ac9) highlight_cell_cale_month_pane_ParamLimits

0x915f,	// (0x00062ac9) highlight_cell_cale_month_pane

0x6858,	// (0x000601c2) main_phob_fisheye_pane

0x2663,	// (0x0005bfcd) scroll_pane_cp0031_ParamLimits

0x2663,	// (0x0005bfcd) scroll_pane_cp0031

0x34f5,	// (0x0005ce5f) wait_bar_pane_cp08_ParamLimits

0xc982,	// (0x000662ec) cset_list_set_pane_copy1_ParamLimits

0x3c6c,	// (0x0005d5d6) highlight_cell_cale_month_pane_g1

0xd079,	// (0x000669e3) highlight_cell_cale_month_pane_t1

0x3c74,	// (0x0005d5de) list_gen_pane_cp01

0x2d69,	// (0x0005c6d3) scroll_pane_01

0xd087,	// (0x000669f1) list_single_double_fisheye_pane

0x60ec,	// (0x0005fa56) list_double_fisheye_pane_g1_ParamLimits

0x60ec,	// (0x0005fa56) list_double_fisheye_pane_g1

0xd090,	// (0x000669fa) list_double_fisheye_pane_g2_ParamLimits

0xd090,	// (0x000669fa) list_double_fisheye_pane_g2

0xd0a4,	// (0x00066a0e) list_double_fisheye_pane_g3_ParamLimits

0xd0a4,	// (0x00066a0e) list_double_fisheye_pane_g3

0x0004,

0xfc5f,	// (0x000695c9) list_double_fisheye_pane_g_ParamLimits

0xfc5f,	// (0x000695c9) list_double_fisheye_pane_g

0x6104,	// (0x0005fa6e) list_double_fisheye_pane_t1_ParamLimits

0x6104,	// (0x0005fa6e) list_double_fisheye_pane_t1

0x611f,	// (0x0005fa89) list_double_fisheye_pane_t2_ParamLimits

0x611f,	// (0x0005fa89) list_double_fisheye_pane_t2

0x0001,

0xfc6a,	// (0x000695d4) list_double_fisheye_pane_t_ParamLimits

0xfc6a,	// (0x000695d4) list_double_fisheye_pane_t

0x6858,	// (0x000601c2) main_call5_pane

0xced9,	// (0x00066843) sc_swipe_pane_ParamLimits

0xced9,	// (0x00066843) sc_swipe_pane

0xd0cd,	// (0x00066a37) call5_image_pane_ParamLimits

0xd0cd,	// (0x00066a37) call5_image_pane

0xd0d9,	// (0x00066a43) call5_swipe_1_pane_ParamLimits

0xd0d9,	// (0x00066a43) call5_swipe_1_pane

0xd0e5,	// (0x00066a4f) call5_swipe_2_pane_ParamLimits

0xd0e5,	// (0x00066a4f) call5_swipe_2_pane

0xd0fd,	// (0x00066a67) popup_call5_audio_first_window_ParamLimits

0xd0fd,	// (0x00066a67) popup_call5_audio_first_window

0x7267,	// (0x00060bd1) call5_swipe_1_pane_g1_ParamLimits

0x7267,	// (0x00060bd1) call5_swipe_1_pane_g1

0x3cf7,	// (0x0005d661) call5_swipe_1_pane_g2_ParamLimits

0x3cf7,	// (0x0005d661) call5_swipe_1_pane_g2

0x0001,

0xfc6f,	// (0x000695d9) call5_swipe_1_pane_g_ParamLimits

0xfc6f,	// (0x000695d9) call5_swipe_1_pane_g

0x3d03,	// (0x0005d66d) call5_swipe_1_pane_t1_ParamLimits

0x3d03,	// (0x0005d66d) call5_swipe_1_pane_t1

0x7267,	// (0x00060bd1) call5_swipe_2_pane_g1_ParamLimits

0x7267,	// (0x00060bd1) call5_swipe_2_pane_g1

0x3d18,	// (0x0005d682) call5_swipe_2_pane_g2_ParamLimits

0x3d18,	// (0x0005d682) call5_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x000695de) call5_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x000695de) call5_swipe_2_pane_g

0x3d24,	// (0x0005d68e) call5_swipe_2_pane_t1_ParamLimits

0x3d24,	// (0x0005d68e) call5_swipe_2_pane_t1

0x3d39,	// (0x0005d6a3) sc_swipe_pane_g1_ParamLimits

0x3d39,	// (0x0005d6a3) sc_swipe_pane_g1

0x3d46,	// (0x0005d6b0) sc_swipe_pane_g2_ParamLimits

0x3d46,	// (0x0005d6b0) sc_swipe_pane_g2

0x0001,

0xfc79,	// (0x000695e3) sc_swipe_pane_g_ParamLimits

0xfc79,	// (0x000695e3) sc_swipe_pane_g

0x3d52,	// (0x0005d6bc) sc_swipe_pane_t1_ParamLimits

0x3d52,	// (0x0005d6bc) sc_swipe_pane_t1

0x6858,	// (0x000601c2) main_cmail_launcher_pane

0xd109,	// (0x00066a73) aid_size_cell_cmail_l_ParamLimits

0xd109,	// (0x00066a73) aid_size_cell_cmail_l

0xd119,	// (0x00066a83) grid_cmail_l_pane_ParamLimits

0xd119,	// (0x00066a83) grid_cmail_l_pane

0xd125,	// (0x00066a8f) cell_cmail_l_pane_ParamLimits

0xd125,	// (0x00066a8f) cell_cmail_l_pane

0xd137,	// (0x00066aa1) cell_cmail_l_pane_g1_ParamLimits

0xd137,	// (0x00066aa1) cell_cmail_l_pane_g1

0xd147,	// (0x00066ab1) cell_cmail_l_pane_t1_ParamLimits

0xd147,	// (0x00066ab1) cell_cmail_l_pane_t1

0xd15d,	// (0x00066ac7) cell_cmail_l_pane_t2_ParamLimits

0xd15d,	// (0x00066ac7) cell_cmail_l_pane_t2

0x0001,

0xfc7e,	// (0x000695e8) cell_cmail_l_pane_t_ParamLimits

0xfc7e,	// (0x000695e8) cell_cmail_l_pane_t

0xec02,	// (0x0006856c) grid_highlight_pane_cp018_ParamLimits

0xec02,	// (0x0006856c) grid_highlight_pane_cp018

0x6956,	// (0x000602c0) main2_pane_ParamLimits

0x6956,	// (0x000602c0) main2_pane

0x7648,	// (0x00060fb2) popup_sp_fs_action_menu_bg_pane_g1

0x7650,	// (0x00060fba) popup_sp_fs_action_menu_bg_pane_g2

0x7658,	// (0x00060fc2) popup_sp_fs_action_menu_bg_pane_g3

0x7660,	// (0x00060fca) popup_sp_fs_action_menu_bg_pane_g4

0x7668,	// (0x00060fd2) popup_sp_fs_action_menu_bg_pane_g5

0x7670,	// (0x00060fda) popup_sp_fs_action_menu_bg_pane_g6

0x7678,	// (0x00060fe2) popup_sp_fs_action_menu_bg_pane_g7

0x7680,	// (0x00060fea) popup_sp_fs_action_menu_bg_pane_g8

0x7688,	// (0x00060ff2) popup_sp_fs_action_menu_bg_pane_g9

0x7690,	// (0x00060ffa) popup_sp_fs_action_menu_bg_pane_g10

0x7690,	// (0x00060ffa) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00068aaf) popup_sp_fs_action_menu_bg_pane_g

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g3_g1

0x8016,	// (0x00061980) list_medium_line_x2_t3_g3_g2_ParamLimits

0x8016,	// (0x00061980) list_medium_line_x2_t3_g3_g2

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00068b5d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00068b5d) list_medium_line_x2_t3_g3_g

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g3_t1

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g3_t2

0x5c1f,	// (0x0005f589) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5c1f,	// (0x0005f589) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00068b64) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00068b64) list_medium_line_x2_t3_g3_t

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g2_g1

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00068b6b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00068b6b) list_medium_line_x2_t3_g2_g

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g2_t1

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g2_t2

0x5c1f,	// (0x0005f589) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5c1f,	// (0x0005f589) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00068b64) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00068b64) list_medium_line_x2_t3_g2_t

0x5c00,	// (0x0005f56a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t4_g4_g1

0x8016,	// (0x00061980) list_medium_line_x2_t4_g4_g2_ParamLimits

0x8016,	// (0x00061980) list_medium_line_x2_t4_g4_g2

0x8016,	// (0x00061980) list_medium_line_x2_t4_g4_g3_ParamLimits

0x8016,	// (0x00061980) list_medium_line_x2_t4_g4_g3

0x5c00,	// (0x0005f56a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00068b70) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00068b70) list_medium_line_x2_t4_g4_g

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g4_t1

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g4_t2

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g4_t3

0x5c1f,	// (0x0005f589) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5c1f,	// (0x0005f589) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00068b79) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00068b79) list_medium_line_x2_t4_g4_t

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g4_g1

0x8016,	// (0x00061980) list_medium_line_x2_t2_g4_g2_ParamLimits

0x8016,	// (0x00061980) list_medium_line_x2_t2_g4_g2

0x8016,	// (0x00061980) list_medium_line_x2_t2_g4_g3_ParamLimits

0x8016,	// (0x00061980) list_medium_line_x2_t2_g4_g3

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00068b70) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00068b70) list_medium_line_x2_t2_g4_g

0x5c0c,	// (0x0005f576) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t2_g4_t1

0x5c1f,	// (0x0005f589) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5c1f,	// (0x0005f589) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x00068be0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x00068be0) list_medium_line_x2_t2_g4_t

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g3_g1

0x8016,	// (0x00061980) list_medium_line_x2_t2_g3_g2_ParamLimits

0x8016,	// (0x00061980) list_medium_line_x2_t2_g3_g2

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00068b5d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00068b5d) list_medium_line_x2_t2_g3_g

0x5c0c,	// (0x0005f576) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t2_g3_t1

0x5c1f,	// (0x0005f589) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5c1f,	// (0x0005f589) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x00068be0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x00068be0) list_medium_line_x2_t2_g3_t

0x931d,	// (0x00062c87) main_sp_fs_list_pane_ParamLimits

0x931d,	// (0x00062c87) main_sp_fs_list_pane

0x932a,	// (0x00062c94) sp_fs_scroll_pane_ParamLimits

0x932a,	// (0x00062c94) sp_fs_scroll_pane

0x5c32,	// (0x0005f59c) list_medium_line_x2_t3_t1

0x5c32,	// (0x0005f59c) list_medium_line_x2_t3_t2

0x3f62,	// (0x0005d8cc) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00068c2b) list_medium_line_x2_t3_t

0x5c32,	// (0x0005f59c) list_medium_line_x3_t4_t1

0x5c32,	// (0x0005f59c) list_medium_line_x3_t4_t2

0x5c32,	// (0x0005f59c) list_medium_line_x3_t4_t3

0x5c32,	// (0x0005f59c) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x00068c32) list_medium_line_x3_t4_t

0x5c32,	// (0x0005f59c) list_medium_line_x4_t5_t1

0x5c32,	// (0x0005f59c) list_medium_line_x4_t5_t2

0x5c32,	// (0x0005f59c) list_medium_line_x4_t5_t3

0x5c32,	// (0x0005f59c) list_medium_line_x4_t5_t4

0x5c32,	// (0x0005f59c) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00068c3b) list_medium_line_x4_t5_t

0x5c00,	// (0x0005f56a) list_medium_line_t4_g4_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_t4_g4_g1

0x5c00,	// (0x0005f56a) list_medium_line_t4_g4_g2_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_t4_g4_g2

0x5c00,	// (0x0005f56a) list_medium_line_t4_g4_g3_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_t4_g4_g3

0x5c00,	// (0x0005f56a) list_medium_line_t4_g4_g4_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_t4_g4_g4

0x0003,

0xf2dc,	// (0x00068c46) list_medium_line_t4_g4_g_ParamLimits

0xf2dc,	// (0x00068c46) list_medium_line_t4_g4_g

0x5c0c,	// (0x0005f576) list_medium_line_t4_g4_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t4_g4_t1

0x5c0c,	// (0x0005f576) list_medium_line_t4_g4_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t4_g4_t2

0x5c0c,	// (0x0005f576) list_medium_line_t4_g4_t3_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t4_g4_t3

0x5c0c,	// (0x0005f576) list_medium_line_t4_g4_t4_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t4_g4_t4

0x0003,

0xf2e5,	// (0x00068c4f) list_medium_line_t4_g4_t_ParamLimits

0xf2e5,	// (0x00068c4f) list_medium_line_t4_g4_t

0x9445,	// (0x00062daf) chi_dic_find_pane_g1

0x9f2f,	// (0x00063899) main_tport_pane

0x5c32,	// (0x0005f59c) list_medium_line_plain_t1

0x5c00,	// (0x0005f56a) list_medium_line_t2_g2_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_t2_g2_g1

0xbfe7,	// (0x00065951) list_medium_line_t2_g2_g2_ParamLimits

0xbfe7,	// (0x00065951) list_medium_line_t2_g2_g2

0x0001,

0xf9b6,	// (0x00069320) list_medium_line_t2_g2_g_ParamLimits

0xf9b6,	// (0x00069320) list_medium_line_t2_g2_g

0x5c0c,	// (0x0005f576) list_medium_line_t2_g2_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t2_g2_t1

0x5c0c,	// (0x0005f576) list_medium_line_t2_g2_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t2_g2_t2

0x0001,

0xf9bb,	// (0x00069325) list_medium_line_t2_g2_t_ParamLimits

0xf9bb,	// (0x00069325) list_medium_line_t2_g2_t

0x6073,	// (0x0005f9dd) aid_sp_fs_list_icon_a_sm

0xc4a0,	// (0x00065e0a) aid_sp_fs_list_icon_d

0x607b,	// (0x0005f9e5) aid_sp_fs_text_primary

0xc4a8,	// (0x00065e12) aid_sp_fs_text_secondary

0x31bd,	// (0x0005cb27) list_medium_line

0x31bd,	// (0x0005cb27) list_medium_line_g2

0x31bd,	// (0x0005cb27) list_medium_line_g3

0x31bd,	// (0x0005cb27) list_medium_line_plain

0x31bd,	// (0x0005cb27) list_medium_line_plain_t2

0x31bd,	// (0x0005cb27) list_medium_line_plain_t3

0x31bd,	// (0x0005cb27) list_medium_line_right_icon

0x31bd,	// (0x0005cb27) list_medium_line_right_iconx2

0x31bd,	// (0x0005cb27) list_medium_line_t2

0x31bd,	// (0x0005cb27) list_medium_line_t2_g2

0x31bd,	// (0x0005cb27) list_medium_line_t2_g3

0x31bd,	// (0x0005cb27) list_medium_line_t2_right_icon

0x31bd,	// (0x0005cb27) list_medium_line_t2_right_iconx2

0x31bd,	// (0x0005cb27) list_medium_line_t3

0x31bd,	// (0x0005cb27) list_medium_line_t3_g2

0x31bd,	// (0x0005cb27) list_medium_line_t3_g3

0x31bd,	// (0x0005cb27) list_medium_line_t3_right_iconx2

0xc4b1,	// (0x00065e1b) list_medium_line_t4_g4

0xc4ba,	// (0x00065e24) list_medium_line_x2

0xc4ba,	// (0x00065e24) list_medium_line_x2_t2_g2

0xc4ba,	// (0x00065e24) list_medium_line_x2_t2_g3

0xc4ba,	// (0x00065e24) list_medium_line_x2_t2_g4

0xc4ba,	// (0x00065e24) list_medium_line_x2_t3

0xc4ba,	// (0x00065e24) list_medium_line_x2_t3_g2

0xc4ba,	// (0x00065e24) list_medium_line_x2_t3_g3

0xc4ba,	// (0x00065e24) list_medium_line_x2_t3_g4

0xc4ba,	// (0x00065e24) list_medium_line_x2_t4_g2

0xc4ba,	// (0x00065e24) list_medium_line_x2_t4_g4

0xc4c3,	// (0x00065e2d) list_medium_line_x3

0xc4c3,	// (0x00065e2d) list_medium_line_x3_t4

0xc4c3,	// (0x00065e2d) list_medium_line_x3_t4_g4

0xc4b1,	// (0x00065e1b) list_medium_line_x4_t4

0xc4b1,	// (0x00065e1b) list_medium_line_x4_t4_g7

0xc4b1,	// (0x00065e1b) list_medium_line_x4_t5

0x6084,	// (0x0005f9ee) list_single_fs_dyc_pane_ParamLimits

0x6084,	// (0x0005f9ee) list_single_fs_dyc_pane

0x5c00,	// (0x0005f56a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x4_t4_g7_g1

0x7267,	// (0x00060bd1) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7267,	// (0x00060bd1) list_medium_line_x4_t4_g7_g2

0x8016,	// (0x00061980) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8016,	// (0x00061980) list_medium_line_x4_t4_g7_g3

0x7267,	// (0x00060bd1) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7267,	// (0x00060bd1) list_medium_line_x4_t4_g7_g4

0x7267,	// (0x00060bd1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7267,	// (0x00060bd1) list_medium_line_x4_t4_g7_g5

0x7267,	// (0x00060bd1) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7267,	// (0x00060bd1) list_medium_line_x4_t4_g7_g6

0x7275,	// (0x00060bdf) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7275,	// (0x00060bdf) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb86,	// (0x000694f0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb86,	// (0x000694f0) list_medium_line_x4_t4_g7_g

0x5c0c,	// (0x0005f576) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x4_t4_g7_t1

0x5c0c,	// (0x0005f576) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x4_t4_g7_t2

0x5c0c,	// (0x0005f576) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x4_t4_g7_t3

0x36bb,	// (0x0005d025) list_medium_line_x4_t4_g7_t4_ParamLimits

0x36bb,	// (0x0005d025) list_medium_line_x4_t4_g7_t4

0x60bc,	// (0x0005fa26) list_medium_line_x4_t4_g7_t5_ParamLimits

0x60bc,	// (0x0005fa26) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb95,	// (0x000694ff) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb95,	// (0x000694ff) list_medium_line_x4_t4_g7_t

0x60cf,	// (0x0005fa39) list_single_dyc_row_pane_ParamLimits

0x60cf,	// (0x0005fa39) list_single_dyc_row_pane

0xd0c1,	// (0x00066a2b) call5_gesture_pane_ParamLimits

0xd0c1,	// (0x00066a2b) call5_gesture_pane

0xd0f1,	// (0x00066a5b) call5_windows_pane_ParamLimits

0xd0f1,	// (0x00066a5b) call5_windows_pane

0xd175,	// (0x00066adf) call5_swipe_1_pane_cp_ParamLimits

0xd175,	// (0x00066adf) call5_swipe_1_pane_cp

0xd181,	// (0x00066aeb) call5_swipe_2_pane_cp_ParamLimits

0xd181,	// (0x00066aeb) call5_swipe_2_pane_cp

0x7ddf,	// (0x00061749) call5_image_pane_cp

0xd18d,	// (0x00066af7) popup_call5_audio_first_window_cp_ParamLimits

0xd18d,	// (0x00066af7) popup_call5_audio_first_window_cp

0x3d39,	// (0x0005d6a3) call5_swipe_1_pane_g1_cp_ParamLimits

0x3d39,	// (0x0005d6a3) call5_swipe_1_pane_g1_cp

0x3d67,	// (0x0005d6d1) call5_swipe_1_pane_g2_cp

0x3d52,	// (0x0005d6bc) call5_swipe_1_pane_t1_cp_ParamLimits

0x3d52,	// (0x0005d6bc) call5_swipe_1_pane_t1_cp

0x3d39,	// (0x0005d6a3) call5_swipe_2_pane_g1_cp_ParamLimits

0x3d39,	// (0x0005d6a3) call5_swipe_2_pane_g1_cp

0x3d6f,	// (0x0005d6d9) call5_swipe_2_pane_g2_cp

0x3d77,	// (0x0005d6e1) call5_swipe_2_pane_t1_cp_ParamLimits

0x3d77,	// (0x0005d6e1) call5_swipe_2_pane_t1_cp

0xec02,	// (0x0006856c) main_sp_fs_email_pane

0x3d8c,	// (0x0005d6f6) main_sp_fs_listscroll_pane_te

0xd199,	// (0x00066b03) popup_sp_fs_action_menu_pane_ParamLimits

0xd199,	// (0x00066b03) popup_sp_fs_action_menu_pane

0x7fc5,	// (0x0006192f) bg_sp_fs_ctrlbar_pane_g1

0x2897,	// (0x0005c201) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x28a9,	// (0x0005c213) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x28a0,	// (0x0005c20a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x7fc5,	// (0x0006192f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc83,	// (0x000695ed) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2125,	// (0x0005ba8f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2125,	// (0x0005ba8f) bg_sp_fs_ctrlbar_ddmenu_pane

0x3d95,	// (0x0005d6ff) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3d95,	// (0x0005d6ff) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3da1,	// (0x0005d70b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3da1,	// (0x0005d70b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8c,	// (0x000695f6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8c,	// (0x000695f6) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3dad,	// (0x0005d717) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3dad,	// (0x0005d717) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd1cb,	// (0x00066b35) list_medium_line_t2_right_icon_g1

0x5c32,	// (0x0005f59c) list_medium_line_t2_right_icon_t1

0x5c32,	// (0x0005f59c) list_medium_line_t2_right_icon_t2

0x0001,

0xfc91,	// (0x000695fb) list_medium_line_t2_right_icon_t

0xee2a,	// (0x00068794) bg_sp_fs_ctrlbar_pane_ParamLimits

0xee2a,	// (0x00068794) bg_sp_fs_ctrlbar_pane

0xd228,	// (0x00066b92) main_sp_fs_ctrlbar_button_pane_cp01

0xd230,	// (0x00066b9a) main_sp_fs_ctrlbar_ddmenu_pane

0x3dff,	// (0x0005d769) main_sp_fs_ctrlbar_pane_g1

0x3e0b,	// (0x0005d775) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc96,	// (0x00069600) main_sp_fs_ctrlbar_pane_g

0xd26a,	// (0x00066bd4) main_sp_fs_ctrlbar_pane_t1

0xd2b2,	// (0x00066c1c) main_sp_fs_ctrlbar_pane

0xd2c6,	// (0x00066c30) main_sp_fs_listscroll_pane_te_cp01

0x6141,	// (0x0005faab) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6141,	// (0x0005faab) popup_sp_fs_action_menu_pane_cp01

0xec02,	// (0x0006856c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xec02,	// (0x0006856c) bg_sp_fs_highlight_list_pane_cp01

0x616b,	// (0x0005fad5) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x616b,	// (0x0005fad5) sp_fs_action_menu_list_gene_pane_g1

0x3e32,	// (0x0005d79c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3e32,	// (0x0005d79c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca4,	// (0x0006960e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca4,	// (0x0006960e) sp_fs_action_menu_list_gene_pane_g

0x617a,	// (0x0005fae4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x617a,	// (0x0005fae4) sp_fs_action_menu_list_gene_pane_t1

0xd2d7,	// (0x00066c41) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd2d7,	// (0x00066c41) sp_fs_action_menu_list_gene_pane

0x3e3f,	// (0x0005d7a9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3e3f,	// (0x0005d7a9) popup_sp_fs_action_menu_bg_pane

0xd2f4,	// (0x00066c5e) sp_fs_action_menu_list_pane_ParamLimits

0xd2f4,	// (0x00066c5e) sp_fs_action_menu_list_pane

0x3e4d,	// (0x0005d7b7) sp_fs_scroll_pane_cp01_ParamLimits

0x3e4d,	// (0x0005d7b7) sp_fs_scroll_pane_cp01

0x5c32,	// (0x0005f59c) list_medium_line_plain_t2_t1

0x5c32,	// (0x0005f59c) list_medium_line_plain_t2_t2

0x0001,

0xfc91,	// (0x000695fb) list_medium_line_plain_t2_t

0x5c32,	// (0x0005f59c) list_medium_line_plain_t3_t1

0x5c32,	// (0x0005f59c) list_medium_line_plain_t3_t2

0x5c32,	// (0x0005f59c) list_medium_line_plain_t3_t3

0x0002,

0xfca9,	// (0x00069613) list_medium_line_plain_t3_t

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g2_g1

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00068b6b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00068b6b) list_medium_line_x2_t2_g2_g

0x5c0c,	// (0x0005f576) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t2_g2_t1

0x5c1f,	// (0x0005f589) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5c1f,	// (0x0005f589) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x00068be0) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x00068be0) list_medium_line_x2_t2_g2_t

0x5c00,	// (0x0005f56a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t4_g2_g1

0x6192,	// (0x0005fafc) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6192,	// (0x0005fafc) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcb0,	// (0x0006961a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcb0,	// (0x0006961a) list_medium_line_x2_t4_g2_g

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g2_t1

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g2_t2

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t4_g2_t3

0x5c1f,	// (0x0005f589) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5c1f,	// (0x0005f589) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00068b79) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00068b79) list_medium_line_x2_t4_g2_t

0xd1cb,	// (0x00066b35) list_medium_line_t3_right_iconx2_g1

0x7fc5,	// (0x0006192f) list_medium_line_t3_right_iconx2_g2

0x61a3,	// (0x0005fb0d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb5,	// (0x0006961f) list_medium_line_t3_right_iconx2_g

0x5c32,	// (0x0005f59c) list_medium_line_t3_right_iconx2_t1

0x5c32,	// (0x0005f59c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc91,	// (0x000695fb) list_medium_line_t3_right_iconx2_t

0x5c00,	// (0x0005f56a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x3_t4_g4_g1

0x8016,	// (0x00061980) list_medium_line_x3_t4_g4_g2_ParamLimits

0x8016,	// (0x00061980) list_medium_line_x3_t4_g4_g2

0x5c00,	// (0x0005f56a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x3_t4_g4_g3

0x8016,	// (0x00061980) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8016,	// (0x00061980) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcbc,	// (0x00069626) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcbc,	// (0x00069626) list_medium_line_x3_t4_g4_g

0x5c0c,	// (0x0005f576) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x3_t4_g4_t1

0x5c0c,	// (0x0005f576) list_medium_line_x3_t4_g4_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x3_t4_g4_t2

0x5c0c,	// (0x0005f576) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x3_t4_g4_t3

0x61ac,	// (0x0005fb16) list_medium_line_x3_t4_g4_t4_ParamLimits

0x61ac,	// (0x0005fb16) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc5,	// (0x0006962f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc5,	// (0x0006962f) list_medium_line_x3_t4_g4_t

0x61c9,	// (0x0005fb33) list_single_dyc_row_text_pane_t1_ParamLimits

0x61c9,	// (0x0005fb33) list_single_dyc_row_text_pane_t1

0x6200,	// (0x0005fb6a) list_single_dyc_row_text_pane_t2_ParamLimits

0x6200,	// (0x0005fb6a) list_single_dyc_row_text_pane_t2

0x6274,	// (0x0005fbde) list_single_dyc_row_text_pane_t3_ParamLimits

0x6274,	// (0x0005fbde) list_single_dyc_row_text_pane_t3

0x0005,

0xfcce,	// (0x00069638) list_single_dyc_row_text_pane_t_ParamLimits

0xfcce,	// (0x00069638) list_single_dyc_row_text_pane_t

0x6344,	// (0x0005fcae) list_single_dyc_row_pane_g1_ParamLimits

0x6344,	// (0x0005fcae) list_single_dyc_row_pane_g1

0x6350,	// (0x0005fcba) list_single_dyc_row_pane_g2_ParamLimits

0x6350,	// (0x0005fcba) list_single_dyc_row_pane_g2

0x635c,	// (0x0005fcc6) list_single_dyc_row_pane_g3_ParamLimits

0x635c,	// (0x0005fcc6) list_single_dyc_row_pane_g3

0x6368,	// (0x0005fcd2) list_single_dyc_row_pane_g4_ParamLimits

0x6368,	// (0x0005fcd2) list_single_dyc_row_pane_g4

0x0003,

0xfcdb,	// (0x00069645) list_single_dyc_row_pane_g_ParamLimits

0xfcdb,	// (0x00069645) list_single_dyc_row_pane_g

0x6374,	// (0x0005fcde) list_single_dyc_row_text_pane_ParamLimits

0x6374,	// (0x0005fcde) list_single_dyc_row_text_pane

0x6858,	// (0x000601c2) bg_sp_fs_scroll_pane

0x3f1d,	// (0x0005d887) thumb_sp_fs_scroll_pane

0x5c00,	// (0x0005f56a) list_medium_line_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_g1

0x5c0c,	// (0x0005f576) list_medium_line_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t1

0x5c00,	// (0x0005f56a) list_medium_line_x2_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_g1

0xbfe7,	// (0x00065951) list_medium_line_x2_g2_ParamLimits

0xbfe7,	// (0x00065951) list_medium_line_x2_g2

0x0001,

0xf9b6,	// (0x00069320) list_medium_line_x2_g_ParamLimits

0xf9b6,	// (0x00069320) list_medium_line_x2_g

0xebee,	// (0x00068558) list_medium_line_x2_t1_ParamLimits

0xebee,	// (0x00068558) list_medium_line_x2_t1

0x5c00,	// (0x0005f56a) list_medium_line_x3_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x3_g1

0xd312,	// (0x00066c7c) list_medium_line_x3_g2_ParamLimits

0xd312,	// (0x00066c7c) list_medium_line_x3_g2

0x0001,

0xfce4,	// (0x0006964e) list_medium_line_x3_g_ParamLimits

0xfce4,	// (0x0006964e) list_medium_line_x3_g

0x3f33,	// (0x0005d89d) list_medium_line_x3_t1_ParamLimits

0x3f33,	// (0x0005d89d) list_medium_line_x3_t1

0x3f47,	// (0x0005d8b1) thumb_sp_fs_scroll_pane_g1

0x3f50,	// (0x0005d8ba) thumb_sp_fs_scroll_pane_g2

0x3f59,	// (0x0005d8c3) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x00069653) thumb_sp_fs_scroll_pane_g

0x3f47,	// (0x0005d8b1) bg_sp_fs_scroll_pane_g1

0x3f50,	// (0x0005d8ba) bg_sp_fs_scroll_pane_g2

0x3f59,	// (0x0005d8c3) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x00069653) bg_sp_fs_scroll_pane_g

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g4_g1

0x8016,	// (0x00061980) list_medium_line_x2_t3_g4_g2_ParamLimits

0x8016,	// (0x00061980) list_medium_line_x2_t3_g4_g2

0x8016,	// (0x00061980) list_medium_line_x2_t3_g4_g3_ParamLimits

0x8016,	// (0x00061980) list_medium_line_x2_t3_g4_g3

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00068b70) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00068b70) list_medium_line_x2_t3_g4_g

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g4_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g4_t1

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_x2_t3_g4_t2

0x5c1f,	// (0x0005f589) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5c1f,	// (0x0005f589) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00068b64) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00068b64) list_medium_line_x2_t3_g4_t

0x5c00,	// (0x0005f56a) list_medium_line_g2_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_g2_g1

0xbfe7,	// (0x00065951) list_medium_line_g2_g2_ParamLimits

0xbfe7,	// (0x00065951) list_medium_line_g2_g2

0x0001,

0xf9b6,	// (0x00069320) list_medium_line_g2_g_ParamLimits

0xf9b6,	// (0x00069320) list_medium_line_g2_g

0x5c0c,	// (0x0005f576) list_medium_line_g2_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_g2_t1

0x5c00,	// (0x0005f56a) list_medium_line_t3_g2_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_t3_g2_g1

0xbfe7,	// (0x00065951) list_medium_line_t3_g2_g2_ParamLimits

0xbfe7,	// (0x00065951) list_medium_line_t3_g2_g2

0x0001,

0xf9b6,	// (0x00069320) list_medium_line_t3_g2_g_ParamLimits

0xf9b6,	// (0x00069320) list_medium_line_t3_g2_g

0x5c0c,	// (0x0005f576) list_medium_line_t3_g2_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t3_g2_t1

0x5c0c,	// (0x0005f576) list_medium_line_t3_g2_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t3_g2_t2

0x5c0c,	// (0x0005f576) list_medium_line_t3_g2_t3_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t3_g2_t3

0x0002,

0xfcf0,	// (0x0006965a) list_medium_line_t3_g2_t_ParamLimits

0xfcf0,	// (0x0006965a) list_medium_line_t3_g2_t

0x3e84,	// (0x0005d7ee) list_medium_line_right_icon_g1

0x5c32,	// (0x0005f59c) list_medium_line_right_icon_t1

0x5c00,	// (0x0005f56a) list_medium_line_t2_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_t2_g1

0x5c0c,	// (0x0005f576) list_medium_line_t2_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t2_t1

0x5c0c,	// (0x0005f576) list_medium_line_t2_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t2_t2

0x0001,

0xf9bb,	// (0x00069325) list_medium_line_t2_t_ParamLimits

0xf9bb,	// (0x00069325) list_medium_line_t2_t

0x5c00,	// (0x0005f56a) list_medium_line_t3_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_t3_g1

0x5c0c,	// (0x0005f576) list_medium_line_t3_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t3_t1

0x5c0c,	// (0x0005f576) list_medium_line_t3_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t3_t2

0x5c0c,	// (0x0005f576) list_medium_line_t3_t3_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t3_t3

0x0002,

0xfcf0,	// (0x0006965a) list_medium_line_t3_t_ParamLimits

0xfcf0,	// (0x0006965a) list_medium_line_t3_t

0x5c00,	// (0x0005f56a) list_medium_line_g3_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_g3_g1

0x8016,	// (0x00061980) list_medium_line_g3_g2_ParamLimits

0x8016,	// (0x00061980) list_medium_line_g3_g2

0x8016,	// (0x00061980) list_medium_line_g3_g3_ParamLimits

0x8016,	// (0x00061980) list_medium_line_g3_g3

0x0002,

0xfcf7,	// (0x00069661) list_medium_line_g3_g_ParamLimits

0xfcf7,	// (0x00069661) list_medium_line_g3_g

0x5c0c,	// (0x0005f576) list_medium_line_g3_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_g3_t1

0x5c00,	// (0x0005f56a) list_medium_line_t2_g3_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_t2_g3_g1

0x8016,	// (0x00061980) list_medium_line_t2_g3_g2_ParamLimits

0x8016,	// (0x00061980) list_medium_line_t2_g3_g2

0x8016,	// (0x00061980) list_medium_line_t2_g3_g3_ParamLimits

0x8016,	// (0x00061980) list_medium_line_t2_g3_g3

0x0002,

0xfcf7,	// (0x00069661) list_medium_line_t2_g3_g_ParamLimits

0xfcf7,	// (0x00069661) list_medium_line_t2_g3_g

0x5c0c,	// (0x0005f576) list_medium_line_t2_g3_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t2_g3_t1

0x5c0c,	// (0x0005f576) list_medium_line_t2_g3_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t2_g3_t2

0x0001,

0xf9bb,	// (0x00069325) list_medium_line_t2_g3_t_ParamLimits

0xf9bb,	// (0x00069325) list_medium_line_t2_g3_t

0x5c00,	// (0x0005f56a) list_medium_line_t3_g3_g1_ParamLimits

0x5c00,	// (0x0005f56a) list_medium_line_t3_g3_g1

0x8016,	// (0x00061980) list_medium_line_t3_g3_g2_ParamLimits

0x8016,	// (0x00061980) list_medium_line_t3_g3_g2

0x8016,	// (0x00061980) list_medium_line_t3_g3_g3_ParamLimits

0x8016,	// (0x00061980) list_medium_line_t3_g3_g3

0x0002,

0xfcf7,	// (0x00069661) list_medium_line_t3_g3_g_ParamLimits

0xfcf7,	// (0x00069661) list_medium_line_t3_g3_g

0x5c0c,	// (0x0005f576) list_medium_line_t3_g3_t1_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t3_g3_t1

0x5c0c,	// (0x0005f576) list_medium_line_t3_g3_t2_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t3_g3_t2

0x5c0c,	// (0x0005f576) list_medium_line_t3_g3_t3_ParamLimits

0x5c0c,	// (0x0005f576) list_medium_line_t3_g3_t3

0x0002,

0xfcf0,	// (0x0006965a) list_medium_line_t3_g3_t_ParamLimits

0xfcf0,	// (0x0006965a) list_medium_line_t3_g3_t

0xd1cb,	// (0x00066b35) list_medium_line_right_iconx2_g1

0xd1cb,	// (0x00066b35) list_medium_line_right_iconx2_g2

0x0001,

0xfcfe,	// (0x00069668) list_medium_line_right_iconx2_g

0x3f62,	// (0x0005d8cc) list_medium_line_right_iconx2_t1

0xd1cb,	// (0x00066b35) list_medium_line_t2_right_iconx2_g1

0xd1cb,	// (0x00066b35) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcfe,	// (0x00069668) list_medium_line_t2_right_iconx2_g

0x5c32,	// (0x0005f59c) list_medium_line_t2_right_iconx2_t1

0x5c32,	// (0x0005f59c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc91,	// (0x000695fb) list_medium_line_t2_right_iconx2_t

0x5c32,	// (0x0005f59c) list_medium_line_x4_t4_t1

0x5c32,	// (0x0005f59c) list_medium_line_x4_t4_t2

0x5c32,	// (0x0005f59c) list_medium_line_x4_t4_t3

0x5c32,	// (0x0005f59c) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x00068c32) list_medium_line_x4_t4_t

0xd343,	// (0x00066cad) tport_appsw_pane_ParamLimits

0xd343,	// (0x00066cad) tport_appsw_pane

0xd34f,	// (0x00066cb9) tport_contact_pane_ParamLimits

0xd34f,	// (0x00066cb9) tport_contact_pane

0xd35d,	// (0x00066cc7) tport_listscroll_pane_ParamLimits

0xd35d,	// (0x00066cc7) tport_listscroll_pane

0xd36b,	// (0x00066cd5) cell_tport_appsw_pane_ParamLimits

0xd36b,	// (0x00066cd5) cell_tport_appsw_pane

0x7275,	// (0x00060bdf) tport_appsw_pane_g1_ParamLimits

0x7275,	// (0x00060bdf) tport_appsw_pane_g1

0x3f71,	// (0x0005d8db) tport_contact_pane_g1

0x3f7a,	// (0x0005d8e4) tport_contact_pane_t1

0x3f88,	// (0x0005d8f2) tport_contact_pane_t2

0x0001,

0xfd03,	// (0x0006966d) tport_contact_pane_t

0x3f96,	// (0x0005d900) list_tport_pane

0x76a2,	// (0x0006100c) scroll_pane_cp_030

0x3fa7,	// (0x0005d911) cell_tport_appsw_pane_g1

0x3fb7,	// (0x0005d921) cell_tport_appsw_pane_t1

0x3fc5,	// (0x0005d92f) grid_highlight_pane_cp019

0xd392,	// (0x00066cfc) list_tport_double_graphic_pane_ParamLimits

0xd392,	// (0x00066cfc) list_tport_double_graphic_pane

0xec02,	// (0x0006856c) list_highlight_pane_cp023_ParamLimits

0xec02,	// (0x0006856c) list_highlight_pane_cp023

0xd39f,	// (0x00066d09) list_tport_double_graphic_pane_g1_ParamLimits

0xd39f,	// (0x00066d09) list_tport_double_graphic_pane_g1

0xd3ac,	// (0x00066d16) list_tport_double_graphic_pane_t1_ParamLimits

0xd3ac,	// (0x00066d16) list_tport_double_graphic_pane_t1

0xd3c1,	// (0x00066d2b) list_tport_double_graphic_pane_t2_ParamLimits

0xd3c1,	// (0x00066d2b) list_tport_double_graphic_pane_t2

0x0001,

0xfd0f,	// (0x00069679) list_tport_double_graphic_pane_t_ParamLimits

0xfd0f,	// (0x00069679) list_tport_double_graphic_pane_t

0x6858,	// (0x000601c2) main_cale_note_pane

0xb873,	// (0x000651dd) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb873,	// (0x000651dd) cell_vitu2_function_top_wide_pane_cp01

0xce2e,	// (0x00066798) wait_bar_pane_cp05_ParamLimits

0xec02,	// (0x0006856c) listscroll_cmail_pane

0x3fcd,	// (0x0005d937) list_cmail_pane

0xd3d3,	// (0x00066d3d) list_cmail_body_pane

0xd3d3,	// (0x00066d3d) list_single_cmail_header_caption_pane

0xd3ec,	// (0x00066d56) list_single_cmail_header_detail_pane_ParamLimits

0xd3ec,	// (0x00066d56) list_single_cmail_header_detail_pane

0x3fe9,	// (0x0005d953) list_single_cmail_header_caption_pane_t1

0x6393,	// (0x0005fcfd) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6393,	// (0x0005fcfd) list_single_cmail_header_detail_pane_g1

0xd417,	// (0x00066d81) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd417,	// (0x00066d81) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd14,	// (0x0006967e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd14,	// (0x0006967e) list_single_cmail_header_detail_pane_g

0x63a9,	// (0x0005fd13) list_single_cmail_header_detail_pane_t1_ParamLimits

0x63a9,	// (0x0005fd13) list_single_cmail_header_detail_pane_t1

0x6409,	// (0x0005fd73) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6409,	// (0x0005fd73) list_single_cmail_header_editor_pane_bg

0x404b,	// (0x0005d9b5) list_cmail_body_pane_g1

0x4054,	// (0x0005d9be) list_cmail_body_pane_t1

0x2c43,	// (0x0005c5ad) list_single_cmail_header_editor_pane_bg_g1

0x8617,	// (0x00061f81) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2c53,	// (0x0005c5bd) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2c4b,	// (0x0005c5b5) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2e77,	// (0x0005c7e1) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2c73,	// (0x0005c5dd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2c63,	// (0x0005c5cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2c6b,	// (0x0005c5d5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x85f7,	// (0x00061f61) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd423,	// (0x00066d8d) calenote_gesture_pane_ParamLimits

0xd423,	// (0x00066d8d) calenote_gesture_pane

0xd43b,	// (0x00066da5) calenote_window_pane_ParamLimits

0xd43b,	// (0x00066da5) calenote_window_pane

0x4062,	// (0x0005d9cc) popup_note_window_cp01

0xd453,	// (0x00066dbd) calenote_swipe_1_pane_ParamLimits

0xd453,	// (0x00066dbd) calenote_swipe_1_pane

0xd181,	// (0x00066aeb) calenote_swipe_2_pane_ParamLimits

0xd181,	// (0x00066aeb) calenote_swipe_2_pane

0x3d39,	// (0x0005d6a3) calenote_swipe_1_pane_g1_ParamLimits

0x3d39,	// (0x0005d6a3) calenote_swipe_1_pane_g1

0x3d46,	// (0x0005d6b0) calenote_swipe_1_pane_g2_ParamLimits

0x3d46,	// (0x0005d6b0) calenote_swipe_1_pane_g2

0x0001,

0xfc79,	// (0x000695e3) calenote_swipe_1_pane_g_ParamLimits

0xfc79,	// (0x000695e3) calenote_swipe_1_pane_g

0x4074,	// (0x0005d9de) calenote_swipe_1_pane_t1_ParamLimits

0x4074,	// (0x0005d9de) calenote_swipe_1_pane_t1

0x3d39,	// (0x0005d6a3) calenote_swipe_2_pane_g1_ParamLimits

0x3d39,	// (0x0005d6a3) calenote_swipe_2_pane_g1

0x4093,	// (0x0005d9fd) calenote_swipe_2_pane_g2_ParamLimits

0x4093,	// (0x0005d9fd) calenote_swipe_2_pane_g2

0x0001,

0xfd20,	// (0x0006968a) calenote_swipe_2_pane_g_ParamLimits

0xfd20,	// (0x0006968a) calenote_swipe_2_pane_g

0x409f,	// (0x0005da09) calenote_swipe_2_pane_t1_ParamLimits

0x409f,	// (0x0005da09) calenote_swipe_2_pane_t1

0x6858,	// (0x000601c2) main_mup_navstr_pane

0xa985,	// (0x000642ef) main_mup3_pane_t7_ParamLimits

0xa985,	// (0x000642ef) main_mup3_pane_t7

0xb140,	// (0x00064aaa) main_mp4_pane_g6_ParamLimits

0xb140,	// (0x00064aaa) main_mp4_pane_g6

0xb3f9,	// (0x00064d63) main_image3_pane_t4_ParamLimits

0xb3f9,	// (0x00064d63) main_image3_pane_t4

0xd466,	// (0x00066dd0) popup_navstr_preview_pane_ParamLimits

0xd466,	// (0x00066dd0) popup_navstr_preview_pane

0xd472,	// (0x00066ddc) scroll_navstr_pane_ParamLimits

0xd472,	// (0x00066ddc) scroll_navstr_pane

0x6858,	// (0x000601c2) bg_popup_preview_window_pane_cp04

0x40c6,	// (0x0005da30) popup_navstr_preview_pane_t1

0xd47e,	// (0x00066de8) scroll_navstr_pane_g1_ParamLimits

0xd47e,	// (0x00066de8) scroll_navstr_pane_g1

0xd48b,	// (0x00066df5) scroll_navstr_pane_t1_ParamLimits

0xd48b,	// (0x00066df5) scroll_navstr_pane_t1

0x406b,	// (0x0005d9d5) bg_button_pane_cp014

0x406b,	// (0x0005d9d5) bg_button_pane_cp030

0x60f8,	// (0x0005fa62) list_double_fisheye_pane_g4_ParamLimits

0x60f8,	// (0x0005fa62) list_double_fisheye_pane_g4

0xd0b0,	// (0x00066a1a) list_double_fisheye_pane_g5_ParamLimits

0xd0b0,	// (0x00066a1a) list_double_fisheye_pane_g5

0x3fdd,	// (0x0005d947) sp_fs_scroll_pane_cp03

0x3dff,	// (0x0005d769) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3e0b,	// (0x0005d775) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc96,	// (0x00069600) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd26a,	// (0x00066bd4) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3fd5,	// (0x0005d93f) sp_fs_scroll_pane_cp02

0x773f,	// (0x000610a9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x773f,	// (0x000610a9) popup_sp_fs_calendar_preview_list_single_pane

0x6858,	// (0x000601c2) main_cam6_pano_pane

0xec02,	// (0x0006856c) main_mup3_pane_ParamLimits

0x6858,	// (0x000601c2) main_phacti_pane

0xcd21,	// (0x0006668b) bg_button_pane_cp11

0xcd39,	// (0x000666a3) main_mobtv_info_pane_g2_ParamLimits

0xcd39,	// (0x000666a3) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x00069560) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x00069560) main_mobtv_info_pane_g

0xcec5,	// (0x0006682f) sc_clock_pane_t5_ParamLimits

0xcec5,	// (0x0006682f) sc_clock_pane_t5

0xcf52,	// (0x000668bc) main_radioblah_pane_g1_ParamLimits

0x3c02,	// (0x0005d56c) main_radioblah_pane_t3_ParamLimits

0x3c02,	// (0x0005d56c) main_radioblah_pane_t3

0x3c1a,	// (0x0005d584) main_radioblah_pane_t4_ParamLimits

0x3c1a,	// (0x0005d584) main_radioblah_pane_t4

0xcf70,	// (0x000668da) main_radioblah_text_pane_ParamLimits

0xcf70,	// (0x000668da) main_radioblah_text_pane

0xcf7d,	// (0x000668e7) main_radioblah_info_pane_g1_ParamLimits

0xd00a,	// (0x00066974) main_radioblah_info_pane_t4_ParamLimits

0xd00a,	// (0x00066974) main_radioblah_info_pane_t4

0xec02,	// (0x0006856c) main_sp_fs_calendar_pane

0xd49d,	// (0x00066e07) main_phacti_pane_g1

0xd4a5,	// (0x00066e0f) phacti_note_pane_ParamLimits

0xd4a5,	// (0x00066e0f) phacti_note_pane

0x40dd,	// (0x0005da47) phacti_term_pane_ParamLimits

0x40dd,	// (0x0005da47) phacti_term_pane

0x40f2,	// (0x0005da5c) phacti_note_pane_t1_ParamLimits

0x40f2,	// (0x0005da5c) phacti_note_pane_t1

0x6420,	// (0x0005fd8a) phacti_term_pane_g1

0x6428,	// (0x0005fd92) phacti_term_pane_t1_ParamLimits

0x6428,	// (0x0005fd92) phacti_term_pane_t1

0x413b,	// (0x0005daa5) popup_sp_fs_calendar_preview_list_single_pane_g1

0x4143,	// (0x0005daad) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd2a,	// (0x00069694) popup_sp_fs_calendar_preview_list_single_pane_g

0x414b,	// (0x0005dab5) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x414b,	// (0x0005dab5) popup_sp_fs_calendar_preview_list_single_pane_t1

0x4161,	// (0x0005dacb) aid_popup_sp_fs_bg_corner_pane

0x7fc5,	// (0x0006192f) popup_sp_fs_calendar_preview_bg_pane_g1

0x6858,	// (0x000601c2) popup_sp_fs_calendar_preview_bg_pane

0x4169,	// (0x0005dad3) popup_sp_fs_calendar_preview_list_pane

0xee2a,	// (0x00068794) bg_main_sp_fs_cale_pane_ParamLimits

0xee2a,	// (0x00068794) bg_main_sp_fs_cale_pane

0x6452,	// (0x0005fdbc) listscroll_cale_mrui_pane_ParamLimits

0x6452,	// (0x0005fdbc) listscroll_cale_mrui_pane

0x6467,	// (0x0005fdd1) listscroll_sp_fs_schedule_track_pane

0x6470,	// (0x0005fdda) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6470,	// (0x0005fdda) main_sp_fs_ctrlbar_pane_cp01

0x41ab,	// (0x0005db15) main_sp_fs_ribbon_pane

0x6483,	// (0x0005fded) popup_sp_fs_cale_preview_window

0xd505,	// (0x00066e6f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd505,	// (0x00066e6f) list_single_sp_fs_schedule_track_pane

0x6aa6,	// (0x00060410) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6aa6,	// (0x00060410) bg_sp_fs_highlight_list_pane_cp03

0xd51b,	// (0x00066e85) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd51b,	// (0x00066e85) list_single_sp_fs_schedule_track_pane_g1

0xd527,	// (0x00066e91) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd527,	// (0x00066e91) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2f,	// (0x00069699) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2f,	// (0x00069699) list_single_sp_fs_schedule_track_pane_g

0xd533,	// (0x00066e9d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd533,	// (0x00066e9d) list_single_sp_fs_schedule_track_pane_t1

0xd54b,	// (0x00066eb5) sp_fs_schedule_track_pane_ParamLimits

0xd54b,	// (0x00066eb5) sp_fs_schedule_track_pane

0x41c2,	// (0x0005db2c) sp_fs_schedule_track_pane_g1

0x41ca,	// (0x0005db34) sp_fs_schedule_track_pane_g2

0x41d2,	// (0x0005db3c) sp_fs_schedule_track_pane_g3

0x41da,	// (0x0005db44) sp_fs_schedule_track_pane_g4

0x41e2,	// (0x0005db4c) sp_fs_schedule_track_pane_g5

0x0004,

0xfd34,	// (0x0006969e) sp_fs_schedule_track_pane_g

0x2c43,	// (0x0005c5ad) bg_sp_fs_schedule_viewer_highlight_g1

0x8617,	// (0x00061f81) bg_sp_fs_schedule_viewer_highlight_g2

0x2c4b,	// (0x0005c5b5) bg_sp_fs_schedule_viewer_highlight_g3

0x2c53,	// (0x0005c5bd) bg_sp_fs_schedule_viewer_highlight_g4

0x2e77,	// (0x0005c7e1) bg_sp_fs_schedule_viewer_highlight_g5

0x2c63,	// (0x0005c5cd) bg_sp_fs_schedule_viewer_highlight_g6

0x2c6b,	// (0x0005c5d5) bg_sp_fs_schedule_viewer_highlight_g7

0x2c73,	// (0x0005c5dd) bg_sp_fs_schedule_viewer_highlight_g8

0x85f7,	// (0x00061f61) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3f,	// (0x000696a9) bg_sp_fs_schedule_viewer_highlight_g

0x6858,	// (0x000601c2) bg_main_sp_fs_ribbon_pane

0xb5f6,	// (0x00064f60) main_sp_fs_ribbon_pane_g1

0x41ea,	// (0x0005db54) main_sp_fs_ribbon_pane_t1

0xd55b,	// (0x00066ec5) main_sp_fs_ribbon_pane_t2

0x41f9,	// (0x0005db63) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd52,	// (0x000696bc) main_sp_fs_ribbon_pane_t

0x4208,	// (0x0005db72) main_sp_fs_ribbon_scheduler_pane

0x4210,	// (0x0005db7a) bg_main_sp_fs_ribbon_pane_g1

0x4219,	// (0x0005db83) bg_main_sp_fs_ribbon_pane_g2

0x4222,	// (0x0005db8c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd59,	// (0x000696c3) bg_main_sp_fs_ribbon_pane_g

0x422a,	// (0x0005db94) main_sp_fs_ribbon_scheduler_pane_g1

0x4233,	// (0x0005db9d) main_sp_fs_ribbon_scheduler_pane_g2

0x423c,	// (0x0005dba6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd60,	// (0x000696ca) main_sp_fs_ribbon_scheduler_pane_g

0x4245,	// (0x0005dbaf) list_cale_mrui_pane

0xd56a,	// (0x00066ed4) sp_fs_scroll_pane_cp07_ParamLimits

0xd56a,	// (0x00066ed4) sp_fs_scroll_pane_cp07

0xd582,	// (0x00066eec) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd582,	// (0x00066eec) bg_sp_fs_schedule_viewer_highlight

0x4252,	// (0x0005dbbc) list_single_sp_fs_schedule_track_pane_cp01

0x425a,	// (0x0005dbc4) list_sp_fs_schedule_track_pane

0x4262,	// (0x0005dbcc) sp_fs_scroll_pane_cp06_ParamLimits

0x4262,	// (0x0005dbcc) sp_fs_scroll_pane_cp06

0x7fc5,	// (0x0006192f) bgmain_sp_fs_calendar_pane_g1

0x6495,	// (0x0005fdff) list_single_cale_mrui_pane_ParamLimits

0x6495,	// (0x0005fdff) list_single_cale_mrui_pane

0x64b7,	// (0x0005fe21) list_single_cale_mrui_row_pane_ParamLimits

0x64b7,	// (0x0005fe21) list_single_cale_mrui_row_pane

0x64cd,	// (0x0005fe37) list_single_cale_mrui_row_pane_g1_ParamLimits

0x64cd,	// (0x0005fe37) list_single_cale_mrui_row_pane_g1

0x64f9,	// (0x0005fe63) list_single_cale_mrui_row_pane_t1_ParamLimits

0x64f9,	// (0x0005fe63) list_single_cale_mrui_row_pane_t1

0x650b,	// (0x0005fe75) list_single_cale_mrui_row_pane_t2_ParamLimits

0x650b,	// (0x0005fe75) list_single_cale_mrui_row_pane_t2

0x6571,	// (0x0005fedb) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6571,	// (0x0005fedb) list_single_cale_mrui_row_pane_t3

0x65a0,	// (0x0005ff0a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x65a0,	// (0x0005ff0a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd6e,	// (0x000696d8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd6e,	// (0x000696d8) list_single_cale_mrui_row_pane_t

0x65cf,	// (0x0005ff39) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x65cf,	// (0x0005ff39) list_single_cmail_header_editor_pane_bg_cp01

0x65f3,	// (0x0005ff5d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x65f3,	// (0x0005ff5d) list_single_cmail_header_editor_pane_bg_cp02

0xd59b,	// (0x00066f05) main_radioblah_text_pane_t1_ParamLimits

0xd59b,	// (0x00066f05) main_radioblah_text_pane_t1

0x4297,	// (0x0005dc01) cam6_indi_pane_cp01

0x429f,	// (0x0005dc09) cam6_mode_pane_cp01

0x42a7,	// (0x0005dc11) cam6_pano_pane

0x42b0,	// (0x0005dc1a) cam6_zoom_pane_cp01

0x42b8,	// (0x0005dc22) cam6_pano_image_pane

0x42c1,	// (0x0005dc2b) cam6_pano_pane_g1

0x3969,	// (0x0005d2d3) cam6_pano_pane_g2

0x42ca,	// (0x0005dc34) cam6_pano_pane_g3

0x42d3,	// (0x0005dc3d) cam6_pano_pane_g4

0x2884,	// (0x0005c1ee) cam6_pano_pane_g5

0x42dc,	// (0x0005dc46) cam6_pano_pane_g6

0x42e4,	// (0x0005dc4e) cam6_pano_pane_g7

0x42ec,	// (0x0005dc56) cam6_pano_pane_g8

0x42f5,	// (0x0005dc5f) cam6_pano_pane_g9

0x0008,

0xfd77,	// (0x000696e1) cam6_pano_pane_g

0x6858,	// (0x000601c2) main_browser_tag_pane

0x40be,	// (0x0005da28) grid_navstr_albumart_pane

0x42fe,	// (0x0005dc68) cell_navstr_albumart_pane_ParamLimits

0x42fe,	// (0x0005dc68) cell_navstr_albumart_pane

0xec9d,	// (0x00068607) cell_navstr_albumart_pane_g1

0x1d16,	// (0x0005b680) cell_navstr_albumart_pane_g2

0x1d26,	// (0x0005b690) cell_navstr_albumart_pane_g3

0x1d1e,	// (0x0005b688) cell_navstr_albumart_pane_g4

0x0003,

0xfd8a,	// (0x000696f4) cell_navstr_albumart_pane_g

0xd5b4,	// (0x00066f1e) bt_list_pane_ParamLimits

0xd5b4,	// (0x00066f1e) bt_list_pane

0xd5c9,	// (0x00066f33) bt_list_pane_t1

0xd5d8,	// (0x00066f42) bt_list_pane_t2

0x0001,

0xfd93,	// (0x000696fd) bt_list_pane_t

0x6858,	// (0x000601c2) main_cale_prevew_pane

0xd5e7,	// (0x00066f51) popup_cale_preview_window_ParamLimits

0xd5e7,	// (0x00066f51) popup_cale_preview_window

0xec02,	// (0x0006856c) bg_popup_preview_window_pane_cp05_ParamLimits

0xec02,	// (0x0006856c) bg_popup_preview_window_pane_cp05

0x4315,	// (0x0005dc7f) list_cale_preview_pane_ParamLimits

0x4315,	// (0x0005dc7f) list_cale_preview_pane

0xd5fc,	// (0x00066f66) list_double_cale_preview_pane_ParamLimits

0xd5fc,	// (0x00066f66) list_double_cale_preview_pane

0xd60d,	// (0x00066f77) list_single_cale_preview_pane_ParamLimits

0xd60d,	// (0x00066f77) list_single_cale_preview_pane

0xd621,	// (0x00066f8b) list_single_cale_preview_pane_g1

0xd629,	// (0x00066f93) list_single_cale_preview_pane_t1_ParamLimits

0xd629,	// (0x00066f93) list_single_cale_preview_pane_t1

0x4321,	// (0x0005dc8b) list_double_cale_preview_pane_g1

0x4329,	// (0x0005dc93) list_double_cale_preview_pane_t1_ParamLimits

0x4329,	// (0x0005dc93) list_double_cale_preview_pane_t1

0xd63e,	// (0x00066fa8) list_double_cale_preview_pane_t2_ParamLimits

0xd63e,	// (0x00066fa8) list_double_cale_preview_pane_t2

0x0001,

0xfd98,	// (0x00069702) list_double_cale_preview_pane_t_ParamLimits

0xfd98,	// (0x00069702) list_double_cale_preview_pane_t

0x6858,	// (0x000601c2) main_ezdial_pane

0xec02,	// (0x0006856c) main_sp_fs_email_pane_ParamLimits

0xd1d3,	// (0x00066b3d) cmail_ddmenu_btn01_pane_ParamLimits

0xd1d3,	// (0x00066b3d) cmail_ddmenu_btn01_pane

0xd1f0,	// (0x00066b5a) cmail_ddmenu_btn02_pane_ParamLimits

0xd1f0,	// (0x00066b5a) cmail_ddmenu_btn02_pane

0xd20e,	// (0x00066b78) cmail_ddmenu_btn03_pane_ParamLimits

0xd20e,	// (0x00066b78) cmail_ddmenu_btn03_pane

0xd2b2,	// (0x00066c1c) main_sp_fs_ctrlbar_pane_ParamLimits

0xd2c6,	// (0x00066c30) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd3d3,	// (0x00066d3d) list_cmail_body_pane_ParamLimits

0xeca5,	// (0x0006860f) bg_button_pane_cp12

0x4003,	// (0x0005d96d) list_single_cmail_header_detail_pane_g3_ParamLimits

0x4003,	// (0x0005d96d) list_single_cmail_header_detail_pane_g3

0x63e5,	// (0x0005fd4f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x63e5,	// (0x0005fd4f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd1b,	// (0x00069685) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd1b,	// (0x00069685) list_single_cmail_header_detail_pane_t

0x643d,	// (0x0005fda7) phacti_term_pane_t2_ParamLimits

0x643d,	// (0x0005fda7) phacti_term_pane_t2

0x0001,

0xfd25,	// (0x0006968f) phacti_term_pane_t_ParamLimits

0xfd25,	// (0x0006968f) phacti_term_pane_t

0x433e,	// (0x0005dca8) aid_size_list_single_double

0xd656,	// (0x00066fc0) popup_ezdial_listscroll_window

0xd66f,	// (0x00066fd9) popup_number_entry_window_cp01

0x7ddf,	// (0x00061749) bg_popup_call_pane_cp09

0x434a,	// (0x0005dcb4) ezdial_list_pane

0x4352,	// (0x0005dcbc) scroll_pane_cp23

0x2125,	// (0x0005ba8f) bg_button_pane_cp028_ParamLimits

0x2125,	// (0x0005ba8f) bg_button_pane_cp028

0xd67b,	// (0x00066fe5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd67b,	// (0x00066fe5) cmail_ddmenu_btn01_pane_g1

0xd68b,	// (0x00066ff5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd68b,	// (0x00066ff5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd9d,	// (0x00069707) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd9d,	// (0x00069707) cmail_ddmenu_btn01_pane_g

0x435a,	// (0x0005dcc4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x435a,	// (0x0005dcc4) cmail_ddmenu_btn01_pane_t1

0xee2a,	// (0x00068794) bg_button_pane_cp029_ParamLimits

0xee2a,	// (0x00068794) bg_button_pane_cp029

0xd68b,	// (0x00066ff5) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd68b,	// (0x00066ff5) cmail_ddmenu_btn02_pane_g1

0xd6a3,	// (0x0006700d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd6a3,	// (0x0006700d) cmail_ddmenu_btn02_pane_t1

0x6aa6,	// (0x00060410) bg_button_pane_cp031_ParamLimits

0x6aa6,	// (0x00060410) bg_button_pane_cp031

0xd68b,	// (0x00066ff5) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd68b,	// (0x00066ff5) cmail_ddmenu_btn03_pane_g1

0xd6a3,	// (0x0006700d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd6a3,	// (0x0006700d) cmail_ddmenu_btn03_pane_t1

0xebee,	// (0x00068558) cell_dialer2_keypad_pane_t1_ParamLimits

0x28b2,	// (0x0005c21c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x28b2,	// (0x0005c21c) cell_dialer2_keypad_pane_t1_copy1

0xcbae,	// (0x00066518) ncimui_group_button_pane

0xec02,	// (0x0006856c) main_sp_fs_calendar_pane_ParamLimits

0xd3d3,	// (0x00066d3d) list_single_cmail_header_caption_pane_ParamLimits

0xd4d7,	// (0x00066e41) aid_recal_txt_sm_pane

0x6858,	// (0x000601c2) mian_recal_day_pane

0x6483,	// (0x0005fded) popup_sp_fs_cale_preview_window_ParamLimits

0x436f,	// (0x0005dcd9) list_recal_day_pane

0x662c,	// (0x0005ff96) list_single_recal_day_pane_ParamLimits

0x662c,	// (0x0005ff96) list_single_recal_day_pane

0x43c3,	// (0x0005dd2d) list_single_recal_day_pane_g1_ParamLimits

0x43c3,	// (0x0005dd2d) list_single_recal_day_pane_g1

0x663e,	// (0x0005ffa8) list_single_recal_day_pane_g2_ParamLimits

0x663e,	// (0x0005ffa8) list_single_recal_day_pane_g2

0x664a,	// (0x0005ffb4) list_single_recal_day_pane_g3_ParamLimits

0x664a,	// (0x0005ffb4) list_single_recal_day_pane_g3

0x6656,	// (0x0005ffc0) list_single_recal_day_pane_g4_ParamLimits

0x6656,	// (0x0005ffc0) list_single_recal_day_pane_g4

0x6662,	// (0x0005ffcc) list_single_recal_day_pane_g5_ParamLimits

0x6662,	// (0x0005ffcc) list_single_recal_day_pane_g5

0x6676,	// (0x0005ffe0) list_single_recal_day_pane_g6_ParamLimits

0x6676,	// (0x0005ffe0) list_single_recal_day_pane_g6

0x0004,

0xfdac,	// (0x00069716) list_single_recal_day_pane_g_ParamLimits

0xfdac,	// (0x00069716) list_single_recal_day_pane_g

0x668d,	// (0x0005fff7) list_single_recal_day_pane_t1

0x669f,	// (0x00060009) list_single_recal_day_pane_t2

0x0001,

0xfdb7,	// (0x00069721) list_single_recal_day_pane_t

0xd6c7,	// (0x00067031) ncimui_query_button_pane_ParamLimits

0xd6c7,	// (0x00067031) ncimui_query_button_pane

0xd6d7,	// (0x00067041) ncimui_query_button_pane_t1_ParamLimits

0xd6d7,	// (0x00067041) ncimui_query_button_pane_t1

0x440d,	// (0x0005dd77) ncimui_query_button_pane_t2_ParamLimits

0x440d,	// (0x0005dd77) ncimui_query_button_pane_t2

0x0001,

0xfdbc,	// (0x00069726) ncimui_query_button_pane_t_ParamLimits

0xfdbc,	// (0x00069726) ncimui_query_button_pane_t

0xd6ea,	// (0x00067054) query_button_pane_ParamLimits

0xd6ea,	// (0x00067054) query_button_pane

0x6858,	// (0x000601c2) bg_button_pane_cp0028

0x4420,	// (0x0005dd8a) query_button_pane_t1

0x9f2f,	// (0x00063899) main_tport_pane_ParamLimits

0xd31f,	// (0x00066c89) bg_popup_window_pane_cp01_ParamLimits

0xd31f,	// (0x00066c89) bg_popup_window_pane_cp01

0xd32b,	// (0x00066c95) heading_pane_cp08_ParamLimits

0xd32b,	// (0x00066c95) heading_pane_cp08

0xd337,	// (0x00066ca1) heading_pane_cp07_ParamLimits

0xd337,	// (0x00066ca1) heading_pane_cp07

0x3fa7,	// (0x0005d911) cell_tport_appsw_pane_g2

0x0002,

0xfd08,	// (0x00069672) cell_tport_appsw_pane_g

0x5c59,	// (0x0005f5c3) input_candi_list_open_g1

0xe575,	// (0x00067edf) list_cale_time_pane_g6_ParamLimits

0xe575,	// (0x00067edf) list_cale_time_pane_g6

0xa457,	// (0x00063dc1) aid_size_touch_calib_1_ParamLimits

0xa457,	// (0x00063dc1) aid_size_touch_calib_1

0xa463,	// (0x00063dcd) aid_size_touch_calib_2_ParamLimits

0xa463,	// (0x00063dcd) aid_size_touch_calib_2

0xa46f,	// (0x00063dd9) aid_size_touch_calib_3_ParamLimits

0xa46f,	// (0x00063dd9) aid_size_touch_calib_3

0xa47d,	// (0x00063de7) aid_size_touch_calib_4_ParamLimits

0xa47d,	// (0x00063de7) aid_size_touch_calib_4

0xa48b,	// (0x00063df5) main_touch_calib_button_group_pane_ParamLimits

0xa48b,	// (0x00063df5) main_touch_calib_button_group_pane

0xa499,	// (0x00063e03) main_touch_calib_pane_g1_ParamLimits

0xa4a5,	// (0x00063e0f) main_touch_calib_pane_g2_ParamLimits

0xa4b1,	// (0x00063e1b) main_touch_calib_pane_g3_ParamLimits

0xa4bd,	// (0x00063e27) main_touch_calib_pane_g4_ParamLimits

0xf703,	// (0x0006906d) main_touch_calib_pane_g_ParamLimits

0xa4c9,	// (0x00063e33) main_touch_calib_pane_t1_ParamLimits

0xa4de,	// (0x00063e48) main_touch_calib_pane_t2_ParamLimits

0xa4f3,	// (0x00063e5d) main_touch_calib_pane_t3_ParamLimits

0xa505,	// (0x00063e6f) main_touch_calib_pane_t4_ParamLimits

0xa517,	// (0x00063e81) main_touch_calib_pane_t5_ParamLimits

0xf70c,	// (0x00069076) main_touch_calib_pane_t_ParamLimits

0x2687,	// (0x0005bff1) list_single_fp_cale_pane_g3_ParamLimits

0x2687,	// (0x0005bff1) list_single_fp_cale_pane_g3

0xec02,	// (0x0006856c) bg_button_pane_cp012_ParamLimits

0xec02,	// (0x0006856c) bg_vkb2_func_pane_cp03_ParamLimits

0xbf67,	// (0x000658d1) cell_vitu2_function_top_pane_g1_ParamLimits

0xec02,	// (0x0006856c) bg_vkb2_func_pane_cp04_ParamLimits

0xcb3a,	// (0x000664a4) main_ncimui_button_group_pane_ParamLimits

0xcb3a,	// (0x000664a4) main_ncimui_button_group_pane

0xcb9c,	// (0x00066506) main_ncimui_pane_t3_ParamLimits

0xcb9c,	// (0x00066506) main_ncimui_pane_t3

0x40d4,	// (0x0005da3e) phacti_button_group_pane

0x433e,	// (0x0005dca8) aid_size_list_single_double_ParamLimits

0xd656,	// (0x00066fc0) popup_ezdial_listscroll_window_ParamLimits

0xd66f,	// (0x00066fd9) popup_number_entry_window_cp01_ParamLimits

0xd6f7,	// (0x00067061) phacti_button_pane_ParamLimits

0xd6f7,	// (0x00067061) phacti_button_pane

0x6858,	// (0x000601c2) bg_button_pane_cp14

0x442e,	// (0x0005dd98) phacti_button_pane_t1

0xd706,	// (0x00067070) main_touch_calib_button_pane_ParamLimits

0xd706,	// (0x00067070) main_touch_calib_button_pane

0x742a,	// (0x00060d94) bg_button_pane_cp18_ParamLimits

0x742a,	// (0x00060d94) bg_button_pane_cp18

0xd717,	// (0x00067081) main_touch_calib_button_pane_t1_ParamLimits

0xd717,	// (0x00067081) main_touch_calib_button_pane_t1

0xd72d,	// (0x00067097) main_touch_calib_button_pane_t2_ParamLimits

0xd72d,	// (0x00067097) main_touch_calib_button_pane_t2

0x0001,

0xfdc1,	// (0x0006972b) main_touch_calib_button_pane_t_ParamLimits

0xfdc1,	// (0x0006972b) main_touch_calib_button_pane_t

0x6858,	// (0x000601c2) cell_ncimui_button_pane

0x6858,	// (0x000601c2) bg_button_pane_cp032

0x443c,	// (0x0005dda6) cell_ncimui_button_pane_t1

0xb322,	// (0x00064c8c) image3_infobar_pane_ParamLimits

0xb322,	// (0x00064c8c) image3_infobar_pane

0xcee5,	// (0x0006684f) fs_bigclock_status_pane_ParamLimits

0xcee5,	// (0x0006684f) fs_bigclock_status_pane

0xcef2,	// (0x0006685c) main_fs_bigclock_clock_pane_ParamLimits

0xcef2,	// (0x0006685c) main_fs_bigclock_clock_pane

0xcf0a,	// (0x00066874) main_fs_bigclock_indi_pane_ParamLimits

0xcf0a,	// (0x00066874) main_fs_bigclock_indi_pane

0xcf2a,	// (0x00066894) main_fs_bigclock_swipe_pane_ParamLimits

0xcf2a,	// (0x00066894) main_fs_bigclock_swipe_pane

0x6858,	// (0x000601c2) main_fs_clock_dumped_data

0x3a76,	// (0x0005d3e0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3a76,	// (0x0005d3e0) list_single_fs_bigclock_indicator_pane_g1

0x3a90,	// (0x0005d3fa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3a90,	// (0x0005d3fa) list_single_fs_bigclock_indicator_pane_g2

0x3aaa,	// (0x0005d414) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3aaa,	// (0x0005d414) list_single_fs_bigclock_indicator_pane_g3

0x3ac4,	// (0x0005d42e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3ac4,	// (0x0005d42e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x00069594) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x00069594) list_single_fs_bigclock_indicator_pane_g

0x3aed,	// (0x0005d457) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3aed,	// (0x0005d457) list_single_fs_bigclock_indicator_pane_t1

0x3b15,	// (0x0005d47f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3b15,	// (0x0005d47f) list_single_fs_bigclock_indicator_pane_t2

0x3b3d,	// (0x0005d4a7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3b3d,	// (0x0005d4a7) list_single_fs_bigclock_indicator_pane_t3

0x3b65,	// (0x0005d4cf) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3b65,	// (0x0005d4cf) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x0006959f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x0006959f) list_single_fs_bigclock_indicator_pane_t

0x444a,	// (0x0005ddb4) image3_infobar_fav_pane_ParamLimits

0x444a,	// (0x0005ddb4) image3_infobar_fav_pane

0x445a,	// (0x0005ddc4) image3_infobar_loc_pane_ParamLimits

0x445a,	// (0x0005ddc4) image3_infobar_loc_pane

0x446e,	// (0x0005ddd8) image3_infobar_time_pane_ParamLimits

0x446e,	// (0x0005ddd8) image3_infobar_time_pane

0x7fc5,	// (0x0006192f) image3_infobar_time_pane_g1

0x447e,	// (0x0005dde8) image3_infobar_time_pane_t1

0x7fc5,	// (0x0006192f) image3_infobar_loc_pane_g1

0x448c,	// (0x0005ddf6) image3_infobar_loc_pane_g2

0x0001,

0xfdc6,	// (0x00069730) image3_infobar_loc_pane_g

0x4494,	// (0x0005ddfe) image3_infobar_loc_pane_t1

0x7fc5,	// (0x0006192f) image3_infobar_fav_pane_g1

0x44a2,	// (0x0005de0c) image3_infobar_fav_pane_g2

0x0001,

0xfdcb,	// (0x00069735) image3_infobar_fav_pane_g

0x44aa,	// (0x0005de14) fs_bigclock_status_battery_pane

0x44b3,	// (0x0005de1d) fs_bigclock_status_signal_pane

0x44bc,	// (0x0005de26) fs_bigclock_status_title_pane

0x44c5,	// (0x0005de2f) fs_bigclock_status_signal_pane_g1

0x44ce,	// (0x0005de38) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdd0,	// (0x0006973a) fs_bigclock_status_signal_pane_g

0x44d6,	// (0x0005de40) fs_bigclock_status_battery_pane_g1

0x44df,	// (0x0005de49) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd5,	// (0x0006973f) fs_bigclock_status_battery_pane_g

0x44e7,	// (0x0005de51) fs_bigclock_status_title_pane_t1

0x7275,	// (0x00060bdf) main_fs_bigclock_clock_pane_g1

0xd74b,	// (0x000670b5) main_fs_bigclock_clock_pane_g2

0xd758,	// (0x000670c2) main_fs_bigclock_clock_pane_g3

0xd758,	// (0x000670c2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdda,	// (0x00069744) main_fs_bigclock_clock_pane_g

0xd764,	// (0x000670ce) main_fs_bigclock_clock_pane_t1

0xd776,	// (0x000670e0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfde3,	// (0x0006974d) main_fs_bigclock_clock_pane_t

0x44f5,	// (0x0005de5f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x44f5,	// (0x0005de5f) list_single_fs_bigclock_indicator_pane

0x4506,	// (0x0005de70) list_single_fs_bigclock_pane_ParamLimits

0x4506,	// (0x0005de70) list_single_fs_bigclock_pane

0x4cac,	// (0x0005e616) main_fs_bigclock_indicator_pane_t1

0x4cbb,	// (0x0005e625) list_single_fs_bigclock_pane_g1

0x4cc3,	// (0x0005e62d) list_single_fs_bigclock_pane_t1

0x7fc5,	// (0x0006192f) main_fs_bigclock_swipe_pane_g1

0x4d03,	// (0x0005e66d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf4,	// (0x0006975e) main_fs_bigclock_swipe_pane_g

0x4d0b,	// (0x0005e675) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4d0b,	// (0x0005e675) main_fs_bigclock_swipe_pane_t1

0x9337,	// (0x00062ca1) call_type_pane_ParamLimits

0x6858,	// (0x000601c2) main_btmg_pane

0xd58f,	// (0x00066ef9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd58f,	// (0x00066ef9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd67,	// (0x000696d1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd67,	// (0x000696d1) list_single_cale_mrui_row_pane_g

0x661b,	// (0x0005ff85) list_recal_vselct_arw_lo_pane

0x43a0,	// (0x0005dd0a) list_recal_vselct_arw_up_pane

0x6623,	// (0x0005ff8d) list_recal_vselct_pane

0x4d28,	// (0x0005e692) btmg_button_pane

0xd7cb,	// (0x00067135) main_btmg_pane_g1

0x6858,	// (0x000601c2) bg_button_pane_cp044

0x4d30,	// (0x0005e69a) btmg_button_pane_t1

0x1f49,	// (0x0005b8b3) aid_listscroll_gen

0xec02,	// (0x0006856c) main_cntbar_detail_pane

0x3fcd,	// (0x0005d937) list_cmail_folder_pane

0x3fdd,	// (0x0005d947) sp_fs_scroll_pane_cp03_ParamLimits

0x66b4,	// (0x0006001e) list_single_fs_dyc_pane_cp01_ParamLimits

0x66b4,	// (0x0006001e) list_single_fs_dyc_pane_cp01

0x4d3e,	// (0x0005e6a8) aid_size_cmail_indent

0x66cc,	// (0x00060036) list_single_dyc_row_pane_cp01

0xd7ed,	// (0x00067157) cntbar_detail_list_pane_ParamLimits

0xd7ed,	// (0x00067157) cntbar_detail_list_pane

0xd823,	// (0x0006718d) main_cntbar_detail_cont_pane_ParamLimits

0xd823,	// (0x0006718d) main_cntbar_detail_cont_pane

0xd82f,	// (0x00067199) scroll_pane_cp032_ParamLimits

0xd82f,	// (0x00067199) scroll_pane_cp032

0xd83b,	// (0x000671a5) cntbar_detail_list_event_pane_ParamLimits

0xd83b,	// (0x000671a5) cntbar_detail_list_event_pane

0xd7f9,	// (0x00067163) cntbar_detail_list_shct_pane

0xd84b,	// (0x000671b5) aid_list_gen

0x76a2,	// (0x0006100c) aid_scroll

0x3192,	// (0x0005cafc) aid_size_touch_scroll_bar

0xc4ba,	// (0x00065e24) aid_list_double

0xd854,	// (0x000671be) aid_list_single

0x31bd,	// (0x0005cb27) aid_list_single_lg

0x66d5,	// (0x0006003f) aid_list_z_g_a_sm

0xd85d,	// (0x000671c7) aid_list_z_g_d

0x66dd,	// (0x00060047) aid_txt_z_prm

0x66eb,	// (0x00060055) aid_txt_z_prm_cp01

0x66f9,	// (0x00060063) aid_txt_z_sec

0xd865,	// (0x000671cf) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd865,	// (0x000671cf) main_cntbar_detail_cont_pane_g1

0xd872,	// (0x000671dc) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd872,	// (0x000671dc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf9,	// (0x00069763) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf9,	// (0x00069763) main_cntbar_detail_cont_pane_g

0xd87e,	// (0x000671e8) main_cntbar_detail_cont_pane_t1

0xd88c,	// (0x000671f6) main_cntbar_detail_cont_pane_t2

0xd89a,	// (0x00067204) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdfe,	// (0x00069768) main_cntbar_detail_cont_pane_t

0xd8a8,	// (0x00067212) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd8a8,	// (0x00067212) cell_cntbar_detail_list_shct_pane

0xd8ba,	// (0x00067224) cntbar_detail_list_shct_pane_g1

0xd8c3,	// (0x0006722d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe05,	// (0x0006976f) cntbar_detail_list_shct_pane_g

0xd8cc,	// (0x00067236) cntbar_detail_list_event_pane_g1_ParamLimits

0xd8cc,	// (0x00067236) cntbar_detail_list_event_pane_g1

0xd8d8,	// (0x00067242) cntbar_detail_list_event_pane_g2_ParamLimits

0xd8d8,	// (0x00067242) cntbar_detail_list_event_pane_g2

0x0005,

0xfe0a,	// (0x00069774) cntbar_detail_list_event_pane_g_ParamLimits

0xfe0a,	// (0x00069774) cntbar_detail_list_event_pane_g

0xd944,	// (0x000672ae) cntbar_detail_list_event_pane_t1_ParamLimits

0xd944,	// (0x000672ae) cntbar_detail_list_event_pane_t1

0xd959,	// (0x000672c3) cntbar_detail_list_event_pane_t2_ParamLimits

0xd959,	// (0x000672c3) cntbar_detail_list_event_pane_t2

0x0002,

0xfe17,	// (0x00069781) cntbar_detail_list_event_pane_t_ParamLimits

0xfe17,	// (0x00069781) cntbar_detail_list_event_pane_t

0x7fc5,	// (0x0006192f) cell_cntbar_detail_list_shct_pane_g1

0xeaf7,	// (0x00068461) navi_pane_mv_g3

0xec02,	// (0x0006856c) main_cntbar_detail_pane_ParamLimits

0x6858,	// (0x000601c2) main_notif_wgt_pane

0xb08b,	// (0x000649f5) aid_tch_main_mp4_pane_g4

0xb2ca,	// (0x00064c34) popup_slider_window_cp02

0x6611,	// (0x0005ff7b) list_recal_day_event_pane

0xd7d3,	// (0x0006713d) cntbar_detail_btn_pane_ParamLimits

0xd7d3,	// (0x0006713d) cntbar_detail_btn_pane

0xd7df,	// (0x00067149) cntbar_detail_btn_pane_cp01_ParamLimits

0xd7df,	// (0x00067149) cntbar_detail_btn_pane_cp01

0xd7f9,	// (0x00067163) cntbar_detail_list_shct_pane_ParamLimits

0xd805,	// (0x0006716f) cntbar_detail_pane_g1_ParamLimits

0xd805,	// (0x0006716f) cntbar_detail_pane_g1

0xd811,	// (0x0006717b) cntbar_detail_pane_t1_ParamLimits

0xd811,	// (0x0006717b) cntbar_detail_pane_t1

0xd8e4,	// (0x0006724e) cntbar_detail_list_event_pane_g3_ParamLimits

0xd8e4,	// (0x0006724e) cntbar_detail_list_event_pane_g3

0xd8fc,	// (0x00067266) cntbar_detail_list_event_pane_g4_ParamLimits

0xd8fc,	// (0x00067266) cntbar_detail_list_event_pane_g4

0xd914,	// (0x0006727e) cntbar_detail_list_event_pane_g5_ParamLimits

0xd914,	// (0x0006727e) cntbar_detail_list_event_pane_g5

0xd92c,	// (0x00067296) cntbar_detail_list_event_pane_g6_ParamLimits

0xd92c,	// (0x00067296) cntbar_detail_list_event_pane_g6

0xd96e,	// (0x000672d8) cntbar_detail_list_event_pane_t3_ParamLimits

0xd96e,	// (0x000672d8) cntbar_detail_list_event_pane_t3

0xd980,	// (0x000672ea) popup_notif_wgt_window_ParamLimits

0xd980,	// (0x000672ea) popup_notif_wgt_window

0xd98e,	// (0x000672f8) popup_submenu_window_cp01_ParamLimits

0xd98e,	// (0x000672f8) popup_submenu_window_cp01

0x7ddf,	// (0x00061749) bg_popup_window_pane_cp10

0xd99a,	// (0x00067304) listscroll_notif_wgt_pane

0xd9ab,	// (0x00067315) list_notif_wgt_window

0xd9b4,	// (0x0006731e) scroll_pane_cp033

0xd9bd,	// (0x00067327) list_notif_wgt_row_pane_ParamLimits

0xd9bd,	// (0x00067327) list_notif_wgt_row_pane

0xd9cf,	// (0x00067339) aid_size_list_notif_wgt_del

0xd9dc,	// (0x00067346) list_notif_wgt_row_pane_g1

0xd9e8,	// (0x00067352) list_notif_wgt_row_pane_g2

0xd9fc,	// (0x00067366) list_notif_wgt_row_pane_g3

0x0002,

0xfe1e,	// (0x00069788) list_notif_wgt_row_pane_g

0xda09,	// (0x00067373) list_notif_wgt_row_pane_t1

0xda1f,	// (0x00067389) list_notif_wgt_row_pane_t2

0xda31,	// (0x0006739b) list_notif_wgt_row_pane_t3

0x0002,

0xfe25,	// (0x0006978f) list_notif_wgt_row_pane_t

0x2e9e,	// (0x0005c808) list_recal_day_event_pane_g1

0xda43,	// (0x000673ad) list_recal_day_event_pane_t1

0x6858,	// (0x000601c2) bg_button_pane_cp045

0xda52,	// (0x000673bc) cntbar_detail_btn_pane_t1

0xee2a,	// (0x00068794) main_callh_pane_ParamLimits

0xee2a,	// (0x00068794) main_callh_pane

0x6858,	// (0x000601c2) main_coverflow0_pane

0x6858,	// (0x000601c2) main_wgtman_pane

0xcf3c,	// (0x000668a6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xcf3c,	// (0x000668a6) main_fs_bigclock_unlock_btn_pane

0x3f9f,	// (0x0005d909) bg_button_pane_cp16

0x3faf,	// (0x0005d919) cell_tport_appsw_pane_g3

0xda60,	// (0x000673ca) cf0_flow_pane_ParamLimits

0xda60,	// (0x000673ca) cf0_flow_pane

0xda6f,	// (0x000673d9) listscroll_cf0_pane

0xda78,	// (0x000673e2) main_cf0_pane_g1

0xda8a,	// (0x000673f4) main_cf0_pane_t1_ParamLimits

0xda8a,	// (0x000673f4) main_cf0_pane_t1

0xda9c,	// (0x00067406) main_cf0_pane_t2_ParamLimits

0xda9c,	// (0x00067406) main_cf0_pane_t2

0x0001,

0xfe31,	// (0x0006979b) main_cf0_pane_t_ParamLimits

0xfe31,	// (0x0006979b) main_cf0_pane_t

0xdaae,	// (0x00067418) scroll_pane_cp11

0xdab7,	// (0x00067421) cf0_flow_pane_g1

0xdabf,	// (0x00067429) cf0_flow_pane_g2

0x0001,

0xfe36,	// (0x000697a0) cf0_flow_pane_g

0xdac7,	// (0x00067431) cf0_flow_pane_t1

0x6858,	// (0x000601c2) main_call6_pane

0x6858,	// (0x000601c2) main_calllock_pane

0xdad5,	// (0x0006743f) call6_btn_grp_pane_ParamLimits

0xdad5,	// (0x0006743f) call6_btn_grp_pane

0xdae2,	// (0x0006744c) call6_pane_g1_ParamLimits

0xdae2,	// (0x0006744c) call6_pane_g1

0xdaef,	// (0x00067459) popup_call6_1st_window_ParamLimits

0xdaef,	// (0x00067459) popup_call6_1st_window

0xdafb,	// (0x00067465) popup_call6_2nd_window_ParamLimits

0xdafb,	// (0x00067465) popup_call6_2nd_window

0xdb07,	// (0x00067471) cell_call6_btn_pane_ParamLimits

0xdb07,	// (0x00067471) cell_call6_btn_pane

0x7ddf,	// (0x00061749) bg_popup_call2_in_pane_cp03

0xdb16,	// (0x00067480) popup_call6_1st_window_g1

0xdb1e,	// (0x00067488) popup_call6_1st_window_g2

0xdb26,	// (0x00067490) popup_call6_1st_window_g3

0x0002,

0xfe3b,	// (0x000697a5) popup_call6_1st_window_g

0xdb2e,	// (0x00067498) popup_call6_1st_window_t1

0xdb3d,	// (0x000674a7) popup_call6_1st_window_t2

0xdb4b,	// (0x000674b5) popup_call6_1st_window_t3

0x0002,

0xfe42,	// (0x000697ac) popup_call6_1st_window_t

0x7ddf,	// (0x00061749) bg_popup_call2_in_pane_cp04

0xdb59,	// (0x000674c3) popup_call6_2nd_window_g1

0xdb61,	// (0x000674cb) popup_call6_2nd_window_g2

0xdb69,	// (0x000674d3) popup_call6_2nd_window_g3

0x0002,

0xfe49,	// (0x000697b3) popup_call6_2nd_window_g

0xdb71,	// (0x000674db) popup_call6_2nd_window_t1

0x6858,	// (0x000601c2) bg_button_pane_cp15

0xdb80,	// (0x000674ea) cell_call6_btn_pane_g1

0xdb89,	// (0x000674f3) cell_call6_btn_pane_t1

0xdb98,	// (0x00067502) listscroll_wgtman_pane_ParamLimits

0xdb98,	// (0x00067502) listscroll_wgtman_pane

0xdbb4,	// (0x0006751e) wgtman_btn_pane_ParamLimits

0xdbb4,	// (0x0006751e) wgtman_btn_pane

0xe94e,	// (0x000682b8) aid_scroll_copy1

0xdbe7,	// (0x00067551) list_wgtman_pane

0xdbf1,	// (0x0006755b) wgtman_btn_pane_g1_ParamLimits

0xdbf1,	// (0x0006755b) wgtman_btn_pane_g1

0xdc19,	// (0x00067583) wgtman_btn_pane_t1_ParamLimits

0xdc19,	// (0x00067583) wgtman_btn_pane_t1

0xdc50,	// (0x000675ba) wgtman_btn_pane_t2_ParamLimits

0xdc50,	// (0x000675ba) wgtman_btn_pane_t2

0x0001,

0xfe50,	// (0x000697ba) wgtman_btn_pane_t_ParamLimits

0xfe50,	// (0x000697ba) wgtman_btn_pane_t

0xdc67,	// (0x000675d1) listrow_wgtman_pane_ParamLimits

0xdc67,	// (0x000675d1) listrow_wgtman_pane

0xdc78,	// (0x000675e2) listrow_wgtman_pane_g1

0xdc85,	// (0x000675ef) listrow_wgtman_pane_g2

0x0001,

0xfe55,	// (0x000697bf) listrow_wgtman_pane_g

0x6707,	// (0x00060071) listrow_wgtman_pane_t1

0x671f,	// (0x00060089) listrow_wgtman_pane_t2

0x0001,

0xfe5a,	// (0x000697c4) listrow_wgtman_pane_t

0x6745,	// (0x000600af) wait_bar_pane_cp09

0xdc9d,	// (0x00067607) main_calllock_btn_pane

0xdca5,	// (0x0006760f) main_calllock_pane_g1

0x6858,	// (0x000601c2) bg_button_pane_cp17

0xdcae,	// (0x00067618) main_calllock_btn_pane_g1

0xdcb7,	// (0x00067621) main_calllock_btn_pane_t1

0x6858,	// (0x000601c2) main_dialer3_pane

0x6858,	// (0x000601c2) main_fmrd2_pane

0x7fc5,	// (0x0006192f) main_fs_bigclock_unlock_btn_pane_g1

0xdcce,	// (0x00067638) main_fs_bigclock_unlock_btn_pane_t1

0xdcdc,	// (0x00067646) area_fmrd2_info_pane_ParamLimits

0xdcdc,	// (0x00067646) area_fmrd2_info_pane

0xdce8,	// (0x00067652) area_fmrd2_visual_pane_ParamLimits

0xdce8,	// (0x00067652) area_fmrd2_visual_pane

0xdcf6,	// (0x00067660) fmrd2_indi_pane_ParamLimits

0xdcf6,	// (0x00067660) fmrd2_indi_pane

0xdd03,	// (0x0006766d) area_fmrd2_visual_pane_g1

0xdd0b,	// (0x00067675) area_fmrd2_visual_pane_t1

0xdd19,	// (0x00067683) area_fmrd2_visual_pane_t2

0xdd27,	// (0x00067691) area_fmrd2_visual_pane_t3

0x0002,

0xfe64,	// (0x000697ce) area_fmrd2_visual_pane_t

0xdd35,	// (0x0006769f) area_fmrd2_info_pane_g1

0xdd3d,	// (0x000676a7) area_fmrd2_info_pane_t1

0xdd4b,	// (0x000676b5) area_fmrd2_info_pane_t2

0xdd59,	// (0x000676c3) area_fmrd2_info_pane_t3

0xdd67,	// (0x000676d1) area_fmrd2_info_pane_t4

0x0003,

0xfe6b,	// (0x000697d5) area_fmrd2_info_pane_t

0xdd75,	// (0x000676df) fmrd2_indi_pane_t1

0xdd83,	// (0x000676ed) fmrd2_indi_pane_t2

0xdd91,	// (0x000676fb) fmrd2_indi_pane_t3

0x0002,

0xfe74,	// (0x000697de) fmrd2_indi_pane_t

0x3ad3,	// (0x0005d43d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3ad3,	// (0x0005d43d) list_single_fs_bigclock_indicator_pane_g5

0x3b81,	// (0x0005d4eb) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3b81,	// (0x0005d4eb) list_single_fs_bigclock_indicator_pane_t5

0xd4b9,	// (0x00066e23) aid_cell_bcale_month_pane_ParamLimits

0xd4b9,	// (0x00066e23) aid_cell_bcale_month_pane

0xd4e0,	// (0x00066e4a) bcale_month_pane_ParamLimits

0xd4e0,	// (0x00066e4a) bcale_month_pane

0xd4f6,	// (0x00066e60) bcale_preview_pane_ParamLimits

0xd4f6,	// (0x00066e60) bcale_preview_pane

0x4cc3,	// (0x0005e62d) list_single_fs_bigclock_pane_t1_ParamLimits

0x4cdf,	// (0x0005e649) list_single_fs_bigclock_pane_t2_ParamLimits

0x4cdf,	// (0x0005e649) list_single_fs_bigclock_pane_t2

0x0001,

0xfdef,	// (0x00069759) list_single_fs_bigclock_pane_t_ParamLimits

0xfdef,	// (0x00069759) list_single_fs_bigclock_pane_t

0xdcc6,	// (0x00067630) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5f,	// (0x000697c9) main_fs_bigclock_unlock_btn_pane_g

0xdd9f,	// (0x00067709) aid_dia3_key_size_ParamLimits

0xdd9f,	// (0x00067709) aid_dia3_key_size

0xddab,	// (0x00067715) aid_dia3_listrow_size_ParamLimits

0xddab,	// (0x00067715) aid_dia3_listrow_size

0xddb9,	// (0x00067723) dia3_keypad_fun_pane_ParamLimits

0xddb9,	// (0x00067723) dia3_keypad_fun_pane

0xddc5,	// (0x0006772f) dia3_keypad_num_pane_ParamLimits

0xddc5,	// (0x0006772f) dia3_keypad_num_pane

0xddd1,	// (0x0006773b) dia3_listscroll_pane_ParamLimits

0xddd1,	// (0x0006773b) dia3_listscroll_pane

0xdddd,	// (0x00067747) dia3_numentry_pane_ParamLimits

0xdddd,	// (0x00067747) dia3_numentry_pane

0xdde9,	// (0x00067753) dia3_list_pane

0xddf2,	// (0x0006775c) scroll_pane_cp12

0x6858,	// (0x000601c2) bg_dia3_numentry_pane

0xddfb,	// (0x00067765) dia3_numentry_pane_t1

0xde0a,	// (0x00067774) cell_dia3_key_num_pane

0xde12,	// (0x0006777c) cell_dia3_key0_fun_pane_ParamLimits

0xde12,	// (0x0006777c) cell_dia3_key0_fun_pane

0xde1f,	// (0x00067789) cell_dia3_key1_fun_pane_ParamLimits

0xde1f,	// (0x00067789) cell_dia3_key1_fun_pane

0xde2c,	// (0x00067796) dia3_listrow_pane

0x37e2,	// (0x0005d14c) bg_dia3_numentry_pane_g1

0x6858,	// (0x000601c2) bg_button_pane_cp21

0xde39,	// (0x000677a3) cell_dia3_key_num_pane_t1

0xde47,	// (0x000677b1) cell_dia3_key_num_pane_t2

0xde56,	// (0x000677c0) cell_dia3_key_num_pane_t3

0xde65,	// (0x000677cf) cell_dia3_key_num_pane_t4

0x0003,

0xfe7b,	// (0x000697e5) cell_dia3_key_num_pane_t

0x6858,	// (0x000601c2) bg_button_pane_cp19

0xde74,	// (0x000677de) cell_dia3_key0_fun_pane_g1

0x6858,	// (0x000601c2) bg_button_pane_cp20

0xde7c,	// (0x000677e6) cell_dia3_key1_fun_pane_g1

0xde84,	// (0x000677ee) area_left_week_number_pane

0xde95,	// (0x000677ff) area_top_day_name_pane

0xdea1,	// (0x0006780b) frame_month_view_pane

0xdeb2,	// (0x0006781c) grid_month_view_pane

0xdec0,	// (0x0006782a) cell_top_day_name_pane_ParamLimits

0xdec0,	// (0x0006782a) cell_top_day_name_pane

0xded6,	// (0x00067840) cell_area_left_week_number_pane_ParamLimits

0xded6,	// (0x00067840) cell_area_left_week_number_pane

0xdef5,	// (0x0006785f) cell_month_view_pane_ParamLimits

0xdef5,	// (0x0006785f) cell_month_view_pane

0xdf1b,	// (0x00067885) frm_month_g1

0xdf28,	// (0x00067892) frm_month_g2

0xdf37,	// (0x000678a1) frm_month_g3

0xdf46,	// (0x000678b0) frm_month_g4

0xdf55,	// (0x000678bf) frm_month_g5

0xdf64,	// (0x000678ce) frm_month_g6

0xdf73,	// (0x000678dd) frm_month_g7

0xdf82,	// (0x000678ec) frm_month_g8

0xdf8f,	// (0x000678f9) frm_month_g9

0xdf9c,	// (0x00067906) frm_month_g10

0xdfa9,	// (0x00067913) frm_month_g11

0xdfb6,	// (0x00067920) frm_month_g12

0xdfc3,	// (0x0006792d) frm_month_g13

0xdfd0,	// (0x0006793a) frm_month_g14

0xdfdd,	// (0x00067947) frm_month_g15

0xdfea,	// (0x00067954) frm_month_g16

0x000f,

0xfe84,	// (0x000697ee) frm_month_g

0xdff7,	// (0x00067961) cell_top_day_name_pane_t1

0xe00a,	// (0x00067974) cell_area_left_week_number_pane_g1

0xe019,	// (0x00067983) cell_area_left_week_number_pane_t1

0x7267,	// (0x00060bd1) cell_month_view_pane_g1

0xe02f,	// (0x00067999) cell_month_view_pane_t1

0x6858,	// (0x000601c2) main_fps_pane

0x3dc7,	// (0x0005d731) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3dc7,	// (0x0005d731) cmail_ddmenu_btn02_pane_cp1

0x3de3,	// (0x0005d74d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3de3,	// (0x0005d74d) cmail_ddmenu_btn02_pane_cp2

0xd697,	// (0x00067001) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd697,	// (0x00067001) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfda2,	// (0x0006970c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfda2,	// (0x0006970c) cmail_ddmenu_btn02_pane_g

0xd6b5,	// (0x0006701f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd6b5,	// (0x0006701f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda7,	// (0x00069711) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda7,	// (0x00069711) cmail_ddmenu_btn02_pane_t

0xe045,	// (0x000679af) fps_text_pane_ParamLimits

0xe045,	// (0x000679af) fps_text_pane

0xe052,	// (0x000679bc) main_fps_pane_g1_ParamLimits

0xe052,	// (0x000679bc) main_fps_pane_g1

0xe05e,	// (0x000679c8) wait_bar_pane_cp010_ParamLimits

0xe05e,	// (0x000679c8) wait_bar_pane_cp010

0xe06a,	// (0x000679d4) fps_text_pane_t1_ParamLimits

0xe06a,	// (0x000679d4) fps_text_pane_t1

0xb5ed,	// (0x00064f57) cam4_image_uncrop_pane_g1

0xb5f6,	// (0x00064f60) cam4_image_uncrop_pane_g2

0xb5ff,	// (0x00064f69) cam4_image_uncrop_pane_g3

0xb608,	// (0x00064f72) cam4_image_uncrop_pane_g4

0x0003,

0xf8a4,	// (0x0006920e) cam4_image_uncrop_pane_g

0xde2c,	// (0x00067796) dia3_listrow_pane_ParamLimits

0x6858,	// (0x000601c2) main_phob2_pane

0xd378,	// (0x00066ce2) cell_tport_appsw_pane_cp02_ParamLimits

0xd378,	// (0x00066ce2) cell_tport_appsw_pane_cp02

0xd385,	// (0x00066cef) cell_tport_appsw_pane_cp03_ParamLimits

0xd385,	// (0x00066cef) cell_tport_appsw_pane_cp03

0x6858,	// (0x000601c2) phob2_contact_card_pane

0x6858,	// (0x000601c2) phob2_listscroll_pane

0xe083,	// (0x000679ed) phob2_list_pane

0xe08b,	// (0x000679f5) scroll_pane_cp034

0xe093,	// (0x000679fd) phob2_cc_data_pane_ParamLimits

0xe093,	// (0x000679fd) phob2_cc_data_pane

0xe0ab,	// (0x00067a15) phob2_cc_listscroll_pane_ParamLimits

0xe0ab,	// (0x00067a15) phob2_cc_listscroll_pane

0xe0c3,	// (0x00067a2d) list_double_large_graphic_phob2_pane_ParamLimits

0xe0c3,	// (0x00067a2d) list_double_large_graphic_phob2_pane

0xe0d5,	// (0x00067a3f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe0d5,	// (0x00067a3f) list_double_large_graphic_phob2_pane_g1

0x6757,	// (0x000600c1) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x6757,	// (0x000600c1) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfea5,	// (0x0006980f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea5,	// (0x0006980f) list_double_large_graphic_phob2_pane_g

0x676f,	// (0x000600d9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x676f,	// (0x000600d9) list_double_large_graphic_phob2_pane_t1

0x6784,	// (0x000600ee) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6784,	// (0x000600ee) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeae,	// (0x00069818) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeae,	// (0x00069818) list_double_large_graphic_phob2_pane_t

0x6858,	// (0x000601c2) list_highlight_pane_cp024

0xe0ee,	// (0x00067a58) phob2_cc_button_pane

0xe0f6,	// (0x00067a60) phob2_cc_data_pane_g1_ParamLimits

0xe0f6,	// (0x00067a60) phob2_cc_data_pane_g1

0xe105,	// (0x00067a6f) phob2_cc_data_pane_g2_ParamLimits

0xe105,	// (0x00067a6f) phob2_cc_data_pane_g2

0x0001,

0xfeb3,	// (0x0006981d) phob2_cc_data_pane_g_ParamLimits

0xfeb3,	// (0x0006981d) phob2_cc_data_pane_g

0xe114,	// (0x00067a7e) phob2_cc_data_pane_t1_ParamLimits

0xe114,	// (0x00067a7e) phob2_cc_data_pane_t1

0xe129,	// (0x00067a93) phob2_cc_data_pane_t2_ParamLimits

0xe129,	// (0x00067a93) phob2_cc_data_pane_t2

0xe13e,	// (0x00067aa8) phob2_cc_data_pane_t3_ParamLimits

0xe13e,	// (0x00067aa8) phob2_cc_data_pane_t3

0x0002,

0xfeb8,	// (0x00069822) phob2_cc_data_pane_t_ParamLimits

0xfeb8,	// (0x00069822) phob2_cc_data_pane_t

0xe153,	// (0x00067abd) phob2_cc_list_pane_ParamLimits

0xe153,	// (0x00067abd) phob2_cc_list_pane

0x36ff,	// (0x0005d069) scroll_pane_cp035_ParamLimits

0x36ff,	// (0x0005d069) scroll_pane_cp035

0xec02,	// (0x0006856c) bg_button_pane_cp033

0xe15f,	// (0x00067ac9) phob2_cc_button_pane_g1

0xe16b,	// (0x00067ad5) phob2_cc_button_pane_t1

0xe180,	// (0x00067aea) phob2_cc_button_pane_t2

0x0001,

0xfebf,	// (0x00069829) phob2_cc_button_pane_t

0xe192,	// (0x00067afc) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe192,	// (0x00067afc) list_double_large_graphic_phob2_cc_pane

0xe1d8,	// (0x00067b42) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe1d8,	// (0x00067b42) list_double_large_graphic_phob2_cc_pane_g1

0xe1e9,	// (0x00067b53) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe1e9,	// (0x00067b53) list_double_large_graphic_phob2_cc_pane_g2

0x6799,	// (0x00060103) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6799,	// (0x00060103) list_double_large_graphic_phob2_cc_pane_g3

0x67a8,	// (0x00060112) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x67a8,	// (0x00060112) list_double_large_graphic_phob2_cc_pane_g4

0x67b9,	// (0x00060123) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x67b9,	// (0x00060123) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec4,	// (0x0006982e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec4,	// (0x0006982e) list_double_large_graphic_phob2_cc_pane_g

0x67c8,	// (0x00060132) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x67c8,	// (0x00060132) list_double_large_graphic_phob2_cc_pane_t1

0x67f1,	// (0x0006015b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x67f1,	// (0x0006015b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfecf,	// (0x00069839) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfecf,	// (0x00069839) list_double_large_graphic_phob2_cc_pane_t

0xe1f8,	// (0x00067b62) list_highlight_pane_cp025_ParamLimits

0xe1f8,	// (0x00067b62) list_highlight_pane_cp025

0xec02,	// (0x0006856c) bg_button_pane_cp033_ParamLimits

0xe15f,	// (0x00067ac9) phob2_cc_button_pane_g1_ParamLimits

0xe16b,	// (0x00067ad5) phob2_cc_button_pane_t1_ParamLimits

0xe180,	// (0x00067aea) phob2_cc_button_pane_t2_ParamLimits

0xfebf,	// (0x00069829) phob2_cc_button_pane_t_ParamLimits

0x6ab4,	// (0x0006041e) popup_wgtman_window

0x3802,	// (0x0005d16c) scroll_pane_cp038

0xdbcf,	// (0x00067539) wgtman_btn_pane_cp_01_ParamLimits

0xdbcf,	// (0x00067539) wgtman_btn_pane_cp_01

0xe206,	// (0x00067b70) wgtman_content_pane

0xe20f,	// (0x00067b79) wgtman_heading_pane

0x6858,	// (0x000601c2) bg_heading_pane_cp02

0xe218,	// (0x00067b82) wgtman_heading_pane_g1

0xe220,	// (0x00067b8a) wgtman_heading_pane_t1

0xe22e,	// (0x00067b98) scroll_pane_cp036

0xe236,	// (0x00067ba0) wgtman_list_pane

0x4548,	// (0x0005deb2) wgtman_list_pane_t1_ParamLimits

0x4548,	// (0x0005deb2) wgtman_list_pane_t1

0xb552,	// (0x00064ebc) cam4_grid_pane

0x5e75,	// (0x0005f7df) bg_button_pane_cp015_ParamLimits

0xc117,	// (0x00065a81) bg_button_pane_cp016_ParamLimits

0xc12a,	// (0x00065a94) bg_button_pane_cp017_ParamLimits

0x5eb3,	// (0x0005f81d) popup_vitu2_query_window_g3_ParamLimits

0x5eb3,	// (0x0005f81d) popup_vitu2_query_window_g3

0x5f2c,	// (0x0005f896) popup_vitu2_query_window_t6_ParamLimits

0x5f2c,	// (0x0005f896) popup_vitu2_query_window_t6

0x5f57,	// (0x0005f8c1) popup_vitu2_query_window_t7_ParamLimits

0x5f57,	// (0x0005f8c1) popup_vitu2_query_window_t7

0xe23e,	// (0x00067ba8) cam4_grid_pane_g1

0xe247,	// (0x00067bb1) cam4_grid_pane_g2

0xe250,	// (0x00067bba) cam4_grid_pane_g3

0xe259,	// (0x00067bc3) cam4_grid_pane_g4

0x0003,

0xfed4,	// (0x0006983e) cam4_grid_pane_g

0x80bd,	// (0x00061a27) aid_placing_vt_slider_lsc_ParamLimits

0x83b5,	// (0x00061d1f) vidtel_button_pane_ParamLimits

0x83b5,	// (0x00061d1f) vidtel_button_pane

0x6858,	// (0x000601c2) bg_button_pane_cp034

0xe262,	// (0x00067bcc) vidtel_button_pane_g1

0xe26a,	// (0x00067bd4) vidtel_button_pane_t1

0x2e6f,	// (0x0005c7d9) aid_size_vtel_slider_touch

0x36ff,	// (0x0005d069) scroll_pane_cp039

0x3831,	// (0x0005d19b) ncim_query_button_pane_cp01_ParamLimits

0x3850,	// (0x0005d1ba) ncimui_query_pane_g1_ParamLimits

0xec02,	// (0x0006856c) input_focus_pane_cp012_ParamLimits

0x3875,	// (0x0005d1df) ncim_query_entry_pane_t1_ParamLimits

0x36ff,	// (0x0005d069) scroll_pane_cp039_ParamLimits

0xea12,	// (0x0006837c) navi_pane_bcale_mc_g1

0xea1a,	// (0x00068384) navi_pane_bcale_mc_t1

0x3e17,	// (0x0005d781) main_sp_fs_email_pane_g1

0x3e23,	// (0x0005d78d) main_sp_fs_email_pane_g2

0x0001,

0xfc9f,	// (0x00069609) main_sp_fs_email_pane_g

0x428a,	// (0x0005dbf4) list_single_cale_mrui_row_pane_g3_ParamLimits

0x428a,	// (0x0005dbf4) list_single_cale_mrui_row_pane_g3

0x666e,	// (0x0005ffd8) list_single_recal_day_pane_g5_event_pane

0x6685,	// (0x0005ffef) list_single_recal_day_pane_g7

0xe280,	// (0x00067bea) list_recal_day_event_pane_cp01

0xe289,	// (0x00067bf3) list_recal_vselct_arw_lo_pane_cp01

0xe291,	// (0x00067bfb) list_recal_vselct_arw_up_pane_cp01

0xe299,	// (0x00067c03) list_recal_vselct_pane_cp01

0x2e9e,	// (0x0005c808) list_recal_day_event_pane_cp01_g1

0x681a,	// (0x00060184) list_recal_day_event_pane_cp01_t1

0x668d,	// (0x0005fff7) list_single_recal_day_pane_t1_ParamLimits

0x669f,	// (0x00060009) list_single_recal_day_pane_t2_ParamLimits

0xfdb7,	// (0x00069721) list_single_recal_day_pane_t_ParamLimits

0x71ce,	// (0x00060b38) bg_notes_pane_ParamLimits

0x73dd,	// (0x00060d47) list_notes_pane_ParamLimits

0x73eb,	// (0x00060d55) scroll_pane_cp06_ParamLimits

0x742a,	// (0x00060d94) main_notes_pane_ParamLimits

0xec02,	// (0x0006856c) main_welc_pane

0xe2b8,	// (0x00067c22) main_welc_body_pane_ParamLimits

0xe2b8,	// (0x00067c22) main_welc_body_pane

0xe2d1,	// (0x00067c3b) main_welc_opti_pane_ParamLimits

0xe2d1,	// (0x00067c3b) main_welc_opti_pane

0xe326,	// (0x00067c90) main_welc_pane_t1_ParamLimits

0xe326,	// (0x00067c90) main_welc_pane_t1

0xe42a,	// (0x00067d94) main_welc_body_row_pane_ParamLimits

0xe42a,	// (0x00067d94) main_welc_body_row_pane

0x6aa6,	// (0x00060410) main_welc_opti_row_pane_ParamLimits

0x6aa6,	// (0x00060410) main_welc_opti_row_pane

0xe43f,	// (0x00067da9) main_welc_opti_row_pane_g1

0xe447,	// (0x00067db1) main_welc_opti_row_pane_t1

0xe456,	// (0x00067dc0) main_welc_body_row_pane_t1

0xd9a3,	// (0x0006730d) popup_notif_wgt_heading_pane

0xd9cf,	// (0x00067339) aid_size_list_notif_wgt_del_ParamLimits

0xd9dc,	// (0x00067346) list_notif_wgt_row_pane_g1_ParamLimits

0xd9e8,	// (0x00067352) list_notif_wgt_row_pane_g2_ParamLimits

0xd9fc,	// (0x00067366) list_notif_wgt_row_pane_g3_ParamLimits

0xfe1e,	// (0x00069788) list_notif_wgt_row_pane_g_ParamLimits

0xda09,	// (0x00067373) list_notif_wgt_row_pane_t1_ParamLimits

0xda1f,	// (0x00067389) list_notif_wgt_row_pane_t2_ParamLimits

0xda31,	// (0x0006739b) list_notif_wgt_row_pane_t3_ParamLimits

0xfe25,	// (0x0006978f) list_notif_wgt_row_pane_t_ParamLimits

0xdc78,	// (0x000675e2) listrow_wgtman_pane_g1_ParamLimits

0xdc85,	// (0x000675ef) listrow_wgtman_pane_g2_ParamLimits

0xfe55,	// (0x000697bf) listrow_wgtman_pane_g_ParamLimits

0x6707,	// (0x00060071) listrow_wgtman_pane_t1_ParamLimits

0x671f,	// (0x00060089) listrow_wgtman_pane_t2_ParamLimits

0xfe5a,	// (0x000697c4) listrow_wgtman_pane_t_ParamLimits

0x6745,	// (0x000600af) wait_bar_pane_cp09_ParamLimits

0x6858,	// (0x000601c2) bg_popup_heading_pane_cp02

0xe465,	// (0x00067dcf) popup_notif_wgt_heading_pane_g1

0xe46d,	// (0x00067dd7) popup_notif_wgt_heading_pane_t1

0x1f5d,	// (0x0005b8c7) main_vids_pane

0x6858,	// (0x000601c2) vids_listscroll_pane

0xe47b,	// (0x00067de5) scroll_pane_cp040

0x6858,	// (0x000601c2) vids_list_pane

0xe484,	// (0x00067dee) vids_list_double_pane_ParamLimits

0xe484,	// (0x00067dee) vids_list_double_pane

0xe495,	// (0x00067dff) vids_list_double_pane_g1

0xe49e,	// (0x00067e08) vids_list_double_pane_t1

0xe4ae,	// (0x00067e18) vids_list_double_pane_t2

0x0001,

0xfef3,	// (0x0006985d) vids_list_double_pane_t

0xec02,	// (0x0006856c) main_ncimui_pane_ParamLimits

0xcb50,	// (0x000664ba) main_ncimui_pane_g1_ParamLimits

0xcb5c,	// (0x000664c6) main_ncimui_pane_g2_ParamLimits

0xcb5c,	// (0x000664c6) main_ncimui_pane_g2

0x0001,

0xfba0,	// (0x0006950a) main_ncimui_pane_g_ParamLimits

0xfba0,	// (0x0006950a) main_ncimui_pane_g

0xe2e6,	// (0x00067c50) main_welc_pane_g1_ParamLimits

0xe2e6,	// (0x00067c50) main_welc_pane_g1

0xe2f2,	// (0x00067c5c) main_welc_pane_g2_ParamLimits

0xe2f2,	// (0x00067c5c) main_welc_pane_g2

0x0003,

0xfedd,	// (0x00069847) main_welc_pane_g_ParamLimits

0xfedd,	// (0x00069847) main_welc_pane_g

0x71ce,	// (0x00060b38) listscroll_mce_pane_ParamLimits

0x9650,	// (0x00062fba) wait_bar_pane_cp10

0x1f51,	// (0x0005b8bb) main_cale_day_pane_ParamLimits

0x1f51,	// (0x0005b8bb) main_cale_week_pane_ParamLimits

0x71ce,	// (0x00060b38) main_messa_pane_ParamLimits

0xaba7,	// (0x00064511) main_clock2_btn_pane_ParamLimits

0xaba7,	// (0x00064511) main_clock2_btn_pane

0x26d9,	// (0x0005c043) main_clock2_btn_pane_cp01_ParamLimits

0x26d9,	// (0x0005c043) main_clock2_btn_pane_cp01

0x4245,	// (0x0005dbaf) list_cale_mrui_pane_ParamLimits

0xda82,	// (0x000673ec) main_cf0_pane_g2

0x0001,

0xfe2c,	// (0x00069796) main_cf0_pane_g

0xde84,	// (0x000677ee) area_left_week_number_pane_ParamLimits

0xde95,	// (0x000677ff) area_top_day_name_pane_ParamLimits

0xdea1,	// (0x0006780b) frame_month_view_pane_ParamLimits

0xdeb2,	// (0x0006781c) grid_month_view_pane_ParamLimits

0xdf1b,	// (0x00067885) frm_month_g1_ParamLimits

0xdf28,	// (0x00067892) frm_month_g2_ParamLimits

0xdf37,	// (0x000678a1) frm_month_g3_ParamLimits

0xdf46,	// (0x000678b0) frm_month_g4_ParamLimits

0xdf55,	// (0x000678bf) frm_month_g5_ParamLimits

0xdf64,	// (0x000678ce) frm_month_g6_ParamLimits

0xdf73,	// (0x000678dd) frm_month_g7_ParamLimits

0xdf82,	// (0x000678ec) frm_month_g8_ParamLimits

0xdf8f,	// (0x000678f9) frm_month_g9_ParamLimits

0xdf9c,	// (0x00067906) frm_month_g10_ParamLimits

0xdfa9,	// (0x00067913) frm_month_g11_ParamLimits

0xdfb6,	// (0x00067920) frm_month_g12_ParamLimits

0xdfc3,	// (0x0006792d) frm_month_g13_ParamLimits

0xdfd0,	// (0x0006793a) frm_month_g14_ParamLimits

0xdfdd,	// (0x00067947) frm_month_g15_ParamLimits

0xdfea,	// (0x00067954) frm_month_g16_ParamLimits

0xfe84,	// (0x000697ee) frm_month_g_ParamLimits

0xdff7,	// (0x00067961) cell_top_day_name_pane_t1_ParamLimits

0xe00a,	// (0x00067974) cell_area_left_week_number_pane_g1_ParamLimits

0xe019,	// (0x00067983) cell_area_left_week_number_pane_t1_ParamLimits

0x7267,	// (0x00060bd1) cell_month_view_pane_g1_ParamLimits

0xe02f,	// (0x00067999) cell_month_view_pane_t1_ParamLimits

0x71c6,	// (0x00060b30) main_clock2_btn_pane_g1

0xee66,	// (0x000687d0) main_clock2_btn_pane_t1

0xec02,	// (0x0006856c) listscroll_cmail_pane_ParamLimits

0x3e17,	// (0x0005d781) main_sp_fs_email_pane_g1_ParamLimits

0x3e23,	// (0x0005d78d) main_sp_fs_email_pane_g2_ParamLimits

0xfc9f,	// (0x00069609) main_sp_fs_email_pane_g_ParamLimits

0x436f,	// (0x0005dcd9) list_recal_day_pane_ParamLimits

0x4380,	// (0x0005dcea) mian_recal_day_pane_t1

0x6286,	// (0x0005fbf0) list_single_dyc_row_text_pane_t4_ParamLimits

0x6286,	// (0x0005fbf0) list_single_dyc_row_text_pane_t4

0x62bd,	// (0x0005fc27) list_single_dyc_row_text_pane_t5_ParamLimits

0x62bd,	// (0x0005fc27) list_single_dyc_row_text_pane_t5

0x6332,	// (0x0005fc9c) list_single_dyc_row_text_pane_t6_ParamLimits

0x6332,	// (0x0005fc9c) list_single_dyc_row_text_pane_t6

0x926f,	// (0x00062bd9) aid_mgn_list_cale_time_pane

0xec02,	// (0x0006856c) main_gallery2_pane_ParamLimits

0x26ed,	// (0x0005c057) main_clock2_pane_cp01_t1

0x26fb,	// (0x0005c065) main_clock2_pane_cp01_t3

0x0001,

0xf776,	// (0x000690e0) main_clock2_pane_cp01_t

0x7902,	// (0x0006126c) cale_week_scroll_pane_g16_ParamLimits

0x7902,	// (0x0006126c) cale_week_scroll_pane_g16

0x7ddf,	// (0x00061749) vorec_slider_pane

0xe26a,	// (0x00067bd4) vidtel_button_pane_t1_ParamLimits

0x7275,	// (0x00060bdf) main_fs_bigclock_clock_pane_g1_ParamLimits

0xd74b,	// (0x000670b5) main_fs_bigclock_clock_pane_g2_ParamLimits

0xd758,	// (0x000670c2) main_fs_bigclock_clock_pane_g3_ParamLimits

0xd758,	// (0x000670c2) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdda,	// (0x00069744) main_fs_bigclock_clock_pane_g_ParamLimits

0xd764,	// (0x000670ce) main_fs_bigclock_clock_pane_t1_ParamLimits

0xd776,	// (0x000670e0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfde3,	// (0x0006974d) main_fs_bigclock_clock_pane_t_ParamLimits

0xa5a7,	// (0x00063f11) main_mup3_lyrics_pane_ParamLimits

0xa5a7,	// (0x00063f11) main_mup3_lyrics_pane

0xee74,	// (0x000687de) main_mup3_lyrics_pane_t1_ParamLimits

0xee74,	// (0x000687de) main_mup3_lyrics_pane_t1

0xb075,	// (0x000649df) aid_main_mp4_pane_t1_area

0xb07f,	// (0x000649e9) aid_main_mp4_pane_t2_area

0xb16e,	// (0x00064ad8) main_mp4_pane_g7_ParamLimits

0xb16e,	// (0x00064ad8) main_mp4_pane_g7

0xb17a,	// (0x00064ae4) main_mp4_pane_g8_ParamLimits

0xb17a,	// (0x00064ae4) main_mp4_pane_g8

0xb49c,	// (0x00064e06) aid_call6_pane_g1_size

0xe1bc,	// (0x00067b26) list_double_large_graphic_phob2_other_pane_ParamLimits

0xe1bc,	// (0x00067b26) list_double_large_graphic_phob2_other_pane

0xe965,	// (0x000682cf) list_double_large_graphic_phob2_other_pane_g1

0x6858,	// (0x000601c2) list_highlight_pane_cp026

0xec02,	// (0x0006856c) main_welc_pane_ParamLimits

0xd23a,	// (0x00066ba4) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xd23a,	// (0x00066ba4) main_sp_fs_ctrlbar_pane_g3

0xd252,	// (0x00066bbc) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xd252,	// (0x00066bbc) main_sp_fs_ctrlbar_pane_g4

0xd292,	// (0x00066bfc) toolbar2_fixed_button_pane_cp01

0xd29c,	// (0x00066c06) toolbar2_fixed_button_pane_cp02

0xd2a7,	// (0x00066c11) toolbar2_fixed_button_pane_cp03

0xe2a3,	// (0x00067c0d) list_welc_entry_pane_ParamLimits

0xe2a3,	// (0x00067c0d) list_welc_entry_pane

0xe2fe,	// (0x00067c68) main_welc_pane_g3_ParamLimits

0xe2fe,	// (0x00067c68) main_welc_pane_g3

0xe33e,	// (0x00067ca8) main_welc_pane_t2_ParamLimits

0xe33e,	// (0x00067ca8) main_welc_pane_t2

0xe350,	// (0x00067cba) main_welc_pane_t3_ParamLimits

0xe350,	// (0x00067cba) main_welc_pane_t3

0x0005,

0xfee6,	// (0x00069850) main_welc_pane_t_ParamLimits

0xfee6,	// (0x00069850) main_welc_pane_t

0xe3d8,	// (0x00067d42) welc_button_pane_ParamLimits

0xe3d8,	// (0x00067d42) welc_button_pane

0xe41e,	// (0x00067d88) welc_service_logo_pane_ParamLimits

0xe41e,	// (0x00067d88) welc_service_logo_pane

0xee92,	// (0x000687fc) list_single_welc_entry_pane_ParamLimits

0xee92,	// (0x000687fc) list_single_welc_entry_pane

0xeea3,	// (0x0006880d) list_single_welc_entry_pane_g1

0xeeab,	// (0x00068815) list_single_welc_entry_pane_t1

0xeeb9,	// (0x00068823) list_single_welc_entry_pane_t2

0x0001,

0xfef8,	// (0x00069862) list_single_welc_entry_pane_t

0x6858,	// (0x000601c2) bg_button_pane_cp035

0xeec7,	// (0x00068831) welc_button_pane_t1

0xeed5,	// (0x0006883f) welc_service_logo_pane_g1

0xeede,	// (0x00068848) welc_service_logo_pane_g2

0x0001,

0xfefd,	// (0x00069867) welc_service_logo_pane_g

0x6858,	// (0x000601c2) main_int_radio_pane

0x7599,	// (0x00060f03) list_single_fs_dyc_pane_g1

0x6763,	// (0x000600cd) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x6763,	// (0x000600cd) list_double_large_graphic_phob2_pane_g3

0xe0e2,	// (0x00067a4c) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xe0e2,	// (0x00067a4c) list_double_large_graphic_phob2_pane_g4

0xeee7,	// (0x00068851) main_int_radio1_pane_ParamLimits

0xeee7,	// (0x00068851) main_int_radio1_pane

0xeefd,	// (0x00068867) find_pane_cp02

0xef06,	// (0x00068870) input_focus_pane_cp12_ParamLimits

0xef06,	// (0x00068870) input_focus_pane_cp12

0xef12,	// (0x0006887c) input_focus_pane_cp13_ParamLimits

0xef12,	// (0x0006887c) input_focus_pane_cp13

0xef2a,	// (0x00068894) input_focus_pane_cp14_ParamLimits

0xef2a,	// (0x00068894) input_focus_pane_cp14

0xef42,	// (0x000688ac) int_radio1_listscroll_pane

0xef4c,	// (0x000688b6) main_int_radio1_pane_g1_ParamLimits

0xef4c,	// (0x000688b6) main_int_radio1_pane_g1

0xef58,	// (0x000688c2) main_int_radio1_pane_t1_ParamLimits

0xef58,	// (0x000688c2) main_int_radio1_pane_t1

0xef6a,	// (0x000688d4) main_int_radio1_pane_t2_ParamLimits

0xef6a,	// (0x000688d4) main_int_radio1_pane_t2

0xef7c,	// (0x000688e6) main_int_radio1_pane_t3_ParamLimits

0xef7c,	// (0x000688e6) main_int_radio1_pane_t3

0xef8e,	// (0x000688f8) main_int_radio1_pane_t4_ParamLimits

0xef8e,	// (0x000688f8) main_int_radio1_pane_t4

0xefa5,	// (0x0006890f) main_int_radio1_pane_t5_ParamLimits

0xefa5,	// (0x0006890f) main_int_radio1_pane_t5

0xefb7,	// (0x00068921) main_int_radio1_pane_t6_ParamLimits

0xefb7,	// (0x00068921) main_int_radio1_pane_t6

0xefc9,	// (0x00068933) main_int_radio1_pane_t7_ParamLimits

0xefc9,	// (0x00068933) main_int_radio1_pane_t7

0xefdb,	// (0x00068945) main_int_radio1_pane_t8_ParamLimits

0xefdb,	// (0x00068945) main_int_radio1_pane_t8

0xefed,	// (0x00068957) main_int_radio1_pane_t9_ParamLimits

0xefed,	// (0x00068957) main_int_radio1_pane_t9

0xefff,	// (0x00068969) main_int_radio1_pane_t10_ParamLimits

0xefff,	// (0x00068969) main_int_radio1_pane_t10

0xf02e,	// (0x00068998) main_int_radio1_pane_t11_ParamLimits

0xf02e,	// (0x00068998) main_int_radio1_pane_t11

0xf05d,	// (0x000689c7) main_int_radio1_pane_t12_ParamLimits

0xf05d,	// (0x000689c7) main_int_radio1_pane_t12

0x000b,

0xff02,	// (0x0006986c) main_int_radio1_pane_t_ParamLimits

0xff02,	// (0x0006986c) main_int_radio1_pane_t

0xf074,	// (0x000689de) int_radio_list_pane

0xe08b,	// (0x000679f5) scroll_pane_cp037

0xdc67,	// (0x000675d1) list_double_large_graphic_int_radio_pane_ParamLimits

0xdc67,	// (0x000675d1) list_double_large_graphic_int_radio_pane

0xf07c,	// (0x000689e6) list_double_large_graphic_int_radio_pane_g1

0x6828,	// (0x00060192) list_double_large_graphic_int_radio_pane_t1

0x6836,	// (0x000601a0) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xff1b,	// (0x00069885) list_double_large_graphic_int_radio_pane_t

0x6858,	// (0x000601c2) list_highlight_pane_cp027

0xe2b0,	// (0x00067c1a) main_button_pane_4

0xe30a,	// (0x00067c74) main_welc_pane_g4_ParamLimits

0xe30a,	// (0x00067c74) main_welc_pane_g4

0xe362,	// (0x00067ccc) main_welc_pane_t4_ParamLimits

0xe362,	// (0x00067ccc) main_welc_pane_t4

0xe374,	// (0x00067cde) main_welc_pane_t5_ParamLimits

0xe374,	// (0x00067cde) main_welc_pane_t5

0xe3a6,	// (0x00067d10) main_welc_pane_t6_ParamLimits

0xe3a6,	// (0x00067d10) main_welc_pane_t6

0xe3e4,	// (0x00067d4e) welc_button_pane_2_ParamLimits

0xe3e4,	// (0x00067d4e) welc_button_pane_2

0xe3f8,	// (0x00067d62) welc_button_pane_3_ParamLimits

0xe3f8,	// (0x00067d62) welc_button_pane_3

0xe2b0,	// (0x00067c1a) welc_button_pane_4

0xe410,	// (0x00067d7a) welc_button_pane_5_ParamLimits

0xe410,	// (0x00067d7a) welc_button_pane_5

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance
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
	0, // AknLayoutScalable_Apps::Tcell_pinb_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_pinb_item_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup2_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tcell_dialer_keypad_pane_ParamLimits_sig*,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
	0, // AknLayoutScalable_Apps::Tcell_dialer_command_2_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_single_spcha_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmain_popup_welc_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g4_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t5_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t6_sig*,
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large

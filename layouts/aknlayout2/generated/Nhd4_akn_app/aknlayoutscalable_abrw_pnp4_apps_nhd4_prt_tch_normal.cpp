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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001df77 };

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
0x26f8,	// (0x0002066f) Screen

0x2704,	// (0x0002067b) application_window

0x2710,	// (0x00020687) area_bottom_pane_ParamLimits

0x2710,	// (0x00020687) area_bottom_pane

0x0ebb,	// (0x0001ee32) area_top_pane_ParamLimits

0x0ebb,	// (0x0001ee32) area_top_pane

0x0f1f,	// (0x0001ee96) call_video_uplink_pane_ParamLimits

0x0f1f,	// (0x0001ee96) call_video_uplink_pane

0x0f5e,	// (0x0001eed5) main_pane_ParamLimits

0x0f5e,	// (0x0001eed5) main_pane

0xc32e,	// (0x0002a2a5) context_pane

0x575d,	// (0x000236d4) navi_pane

0x577d,	// (0x000236f4) popup_cale_events_window_ParamLimits

0x577d,	// (0x000236f4) popup_cale_events_window

0xc341,	// (0x0002a2b8) popup_mup_playback_window

0x5795,	// (0x0002370c) signal_pane

0xa401,	// (0x00028378) main_browser_pane

0xaeca,	// (0x00028e41) main_burst_pane

0x158e,	// (0x0001f505) main_calc_pane

0xc314,	// (0x0002a28b) main_cale_day_pane

0x2b1f,	// (0x00020a96) main_cale_month_pane

0xc314,	// (0x0002a28b) main_cale_week_pane

0xaeca,	// (0x00028e41) main_call_pane

0xa0b4,	// (0x0002802b) main_call_poc_pane

0xaeca,	// (0x00028e41) main_camera_pane

0xaeca,	// (0x00028e41) main_chi_dic_pane

0xad4f,	// (0x00028cc6) main_clock_pane

0xa0b4,	// (0x0002802b) main_fmradio_pane

0xaeca,	// (0x00028e41) main_graph_messa_pane

0xa0b4,	// (0x0002802b) main_help_pane

0xa401,	// (0x00028378) main_im_pane

0xa30f,	// (0x00028286) main_image_pane_ParamLimits

0xa30f,	// (0x00028286) main_image_pane

0xa0b4,	// (0x0002802b) main_location2_pane

0xaeca,	// (0x00028e41) main_location_pane

0xa30f,	// (0x00028286) main_messa_pane

0xa0b4,	// (0x0002802b) main_mp2_pane

0xaeca,	// (0x00028e41) main_mp_pane

0xa0b4,	// (0x0002802b) main_msg_pane

0xa0b4,	// (0x0002802b) main_mup_eq_pane

0xa0b4,	// (0x0002802b) main_mup_pane

0xa401,	// (0x00028378) main_notes_pane

0xa0b4,	// (0x0002802b) main_pec_pane

0xa0b4,	// (0x0002802b) main_phob_pane

0xa0b4,	// (0x0002802b) main_pinb_pane

0xa0b4,	// (0x0002802b) main_postcard_pane

0xa0b4,	// (0x0002802b) main_qdial_pane

0xaeca,	// (0x00028e41) main_skin_pane

0xa0b4,	// (0x0002802b) main_smil2_pane

0xaeca,	// (0x00028e41) main_smil_pane

0xaeca,	// (0x00028e41) main_video_pane

0xaeca,	// (0x00028e41) main_video_tele_pane

0xa30f,	// (0x00028286) main_viewer_pane_ParamLimits

0xa30f,	// (0x00028286) main_viewer_pane

0xaeca,	// (0x00028e41) main_vorec_pane

0x15da,	// (0x0001f551) popup_blid_sat_info_window_ParamLimits

0x15da,	// (0x0001f551) popup_blid_sat_info_window

0x15fa,	// (0x0001f571) popup_dyc_status_message_window_ParamLimits

0x15fa,	// (0x0001f571) popup_dyc_status_message_window

0x1608,	// (0x0001f57f) popup_grid_large_graphic_window_ParamLimits

0x1608,	// (0x0001f57f) popup_grid_large_graphic_window

0x1697,	// (0x0001f60e) popup_loc_request_window_ParamLimits

0x1697,	// (0x0001f60e) popup_loc_request_window

0x16de,	// (0x0001f655) popup_wml_address_window_ParamLimits

0x16de,	// (0x0001f655) popup_wml_address_window

0x563f,	// (0x000235b6) call_muted_g1

0x52fd,	// (0x00023274) popup_call_audio_conf_window_ParamLimits

0x52fd,	// (0x00023274) popup_call_audio_conf_window

0x564f,	// (0x000235c6) popup_call_audio_first_window_ParamLimits

0x564f,	// (0x000235c6) popup_call_audio_first_window

0x568f,	// (0x00023606) popup_call_audio_in_window_ParamLimits

0x568f,	// (0x00023606) popup_call_audio_in_window

0x56b3,	// (0x0002362a) popup_call_audio_out_window_ParamLimits

0x56b3,	// (0x0002362a) popup_call_audio_out_window

0x56d5,	// (0x0002364c) popup_call_audio_second_window_ParamLimits

0x56d5,	// (0x0002364c) popup_call_audio_second_window

0x5705,	// (0x0002367c) popup_call_audio_wait_window_ParamLimits

0x5705,	// (0x0002367c) popup_call_audio_wait_window

0x5726,	// (0x0002369d) popup_number_entry_window_ParamLimits

0x5726,	// (0x0002369d) popup_number_entry_window

0x9ca1,	// (0x00027c18) bg_popup_call_pane_cp05_ParamLimits

0x9ca1,	// (0x00027c18) bg_popup_call_pane_cp05

0x9cc1,	// (0x00027c38) popup_number_entry_window_t1

0x9cd4,	// (0x00027c4b) popup_number_entry_window_t2

0x9ce6,	// (0x00027c5d) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0002d04a) popup_number_entry_window_t

0x9cf8,	// (0x00027c6f) text_title_cp2

0x9d0b,	// (0x00027c82) bg_popup_call_pane_cp_ParamLimits

0x9d0b,	// (0x00027c82) bg_popup_call_pane_cp

0x9d19,	// (0x00027c90) call_thumbnail_pane

0x9d21,	// (0x00027c98) popup_call_audio_in_window_g1_ParamLimits

0x9d21,	// (0x00027c98) popup_call_audio_in_window_g1

0x9d2d,	// (0x00027ca4) popup_call_audio_in_window_g2_ParamLimits

0x9d2d,	// (0x00027ca4) popup_call_audio_in_window_g2

0x9d39,	// (0x00027cb0) popup_call_audio_in_window_g3_ParamLimits

0x9d39,	// (0x00027cb0) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0002d053) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0002d053) popup_call_audio_in_window_g

0x9d45,	// (0x00027cbc) popup_call_audio_in_window_t1_ParamLimits

0x9d45,	// (0x00027cbc) popup_call_audio_in_window_t1

0x9d61,	// (0x00027cd8) popup_call_audio_in_window_t2_ParamLimits

0x9d61,	// (0x00027cd8) popup_call_audio_in_window_t2

0x9d7d,	// (0x00027cf4) popup_call_audio_in_window_t3_ParamLimits

0x9d7d,	// (0x00027cf4) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0002d05a) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0002d05a) popup_call_audio_in_window_t

0x9d0b,	// (0x00027c82) bg_popup_call_pane_cp01_ParamLimits

0x9d0b,	// (0x00027c82) bg_popup_call_pane_cp01

0x9d19,	// (0x00027c90) call_thumbnail_pane_cp02

0x9d90,	// (0x00027d07) call_type_pane_cp022

0x9d98,	// (0x00027d0f) popup_call_audio_out_window_g1_ParamLimits

0x9d98,	// (0x00027d0f) popup_call_audio_out_window_g1

0x9daa,	// (0x00027d21) popup_call_audio_out_window_g2_ParamLimits

0x9daa,	// (0x00027d21) popup_call_audio_out_window_g2

0x9db6,	// (0x00027d2d) popup_call_audio_out_window_g3_ParamLimits

0x9db6,	// (0x00027d2d) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0002d061) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0002d061) popup_call_audio_out_window_g

0x9dc8,	// (0x00027d3f) popup_call_audio_out_window_t1_ParamLimits

0x9dc8,	// (0x00027d3f) popup_call_audio_out_window_t1

0x9de0,	// (0x00027d57) popup_call_audio_out_window_t2_ParamLimits

0x9de0,	// (0x00027d57) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0002d068) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0002d068) popup_call_audio_out_window_t

0x9df5,	// (0x00027d6c) bg_popup_call_pane_ParamLimits

0x9df5,	// (0x00027d6c) bg_popup_call_pane

0x278d,	// (0x00020704) call_thumbnail_pane_cp_ParamLimits

0x278d,	// (0x00020704) call_thumbnail_pane_cp

0x9e79,	// (0x00027df0) call_type_pane_cp01_ParamLimits

0x9e79,	// (0x00027df0) call_type_pane_cp01

0x9ebd,	// (0x00027e34) popup_call_audio_first_window_g1_ParamLimits

0x9ebd,	// (0x00027e34) popup_call_audio_first_window_g1

0x9f09,	// (0x00027e80) popup_call_audio_first_window_g2_ParamLimits

0x9f09,	// (0x00027e80) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0002d06d) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0002d06d) popup_call_audio_first_window_g

0x9f4d,	// (0x00027ec4) popup_call_audio_first_window_t1_ParamLimits

0x9f4d,	// (0x00027ec4) popup_call_audio_first_window_t1

0x9ff9,	// (0x00027f70) popup_call_audio_first_window_t4_ParamLimits

0x9ff9,	// (0x00027f70) popup_call_audio_first_window_t4

0xa085,	// (0x00027ffc) popup_call_audio_first_window_t5_ParamLimits

0xa085,	// (0x00027ffc) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0002d072) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0002d072) popup_call_audio_first_window_t

0xa0b4,	// (0x0002802b) bg_popup_call_pane_cp02

0xa0be,	// (0x00028035) call_type_pane_cp023

0xa0c6,	// (0x0002803d) popup_call_audio_wait_window_g1

0xa0ce,	// (0x00028045) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0002d079) popup_call_audio_wait_window_g

0xa0d6,	// (0x0002804d) popup_call_audio_wait_window_t3

0xa0e4,	// (0x0002805b) bg_popup_call_pane_cp03_ParamLimits

0xa0e4,	// (0x0002805b) bg_popup_call_pane_cp03

0xa144,	// (0x000280bb) call_thumbnail_pane_cp011_ParamLimits

0xa144,	// (0x000280bb) call_thumbnail_pane_cp011

0xa150,	// (0x000280c7) call_type_pane_cp034_ParamLimits

0xa150,	// (0x000280c7) call_type_pane_cp034

0xa18c,	// (0x00028103) popup_call_audio_second_window_g1_ParamLimits

0xa18c,	// (0x00028103) popup_call_audio_second_window_g1

0xa1c8,	// (0x0002813f) popup_call_audio_second_window_g2_ParamLimits

0xa1c8,	// (0x0002813f) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0002d07e) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0002d07e) popup_call_audio_second_window_g

0xa204,	// (0x0002817b) popup_call_audio_second_window_t1_ParamLimits

0xa204,	// (0x0002817b) popup_call_audio_second_window_t1

0xa285,	// (0x000281fc) popup_call_audio_second_window_t2_ParamLimits

0xa285,	// (0x000281fc) popup_call_audio_second_window_t2

0xa2bb,	// (0x00028232) popup_call_audio_second_window_t3_ParamLimits

0xa2bb,	// (0x00028232) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0002d083) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0002d083) popup_call_audio_second_window_t

0xa0b4,	// (0x0002802b) bg_popup_call_pane_cp04

0xa2f1,	// (0x00028268) list_conf_pane

0xa2f9,	// (0x00028270) popup_call_audio_conf_window_t1

0xa307,	// (0x0002827e) call_thumbnail_pane_g1

0xa30f,	// (0x00028286) bg_pinb_pane_ParamLimits

0xa30f,	// (0x00028286) bg_pinb_pane

0xa31d,	// (0x00028294) find_pinb_pane

0xa326,	// (0x0002829d) listscroll_pinb_pane_ParamLimits

0xa326,	// (0x0002829d) listscroll_pinb_pane

0xa335,	// (0x000282ac) pinb_bg_pane_g1

0x27b1,	// (0x00020728) pinb_bg_pane_g2

0x27bd,	// (0x00020734) pinb_bg_pane_g3

0x27c9,	// (0x00020740) pinb_bg_pane_g4

0x27d5,	// (0x0002074c) pinb_bg_pane_g5

0x27e1,	// (0x00020758) pinb_bg_pane_g6

0x27ec,	// (0x00020763) pinb_bg_pane_g7

0x27f7,	// (0x0002076e) pinb_bg_pane_g8

0x2802,	// (0x00020779) pinb_bg_pane_g9

0x280c,	// (0x00020783) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0002d08a) pinb_bg_pane_g

0x2829,	// (0x000207a0) grid_pinb_pane

0x2834,	// (0x000207ab) list_pinb_pane

0x283f,	// (0x000207b6) scroll_pane_cp01_ParamLimits

0x283f,	// (0x000207b6) scroll_pane_cp01

0xa33f,	// (0x000282b6) find_pinb_pane_g1_ParamLimits

0xa33f,	// (0x000282b6) find_pinb_pane_g1

0xa357,	// (0x000282ce) find_pinb_pane_t1

0xa369,	// (0x000282e0) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0002d0a4) find_pinb_pane_t

0xa37e,	// (0x000282f5) input_focus_pane_cp01_ParamLimits

0xa37e,	// (0x000282f5) input_focus_pane_cp01

0x2851,	// (0x000207c8) cell_pinb_pane_ParamLimits

0x2851,	// (0x000207c8) cell_pinb_pane

0xa38a,	// (0x00028301) cell_pinb_pane_g1_ParamLimits

0xa38a,	// (0x00028301) cell_pinb_pane_g1

0xa39d,	// (0x00028314) cell_pinb_pane_g2_ParamLimits

0xa39d,	// (0x00028314) cell_pinb_pane_g2

0xa3a9,	// (0x00028320) cell_pinb_pane_g3_ParamLimits

0xa3a9,	// (0x00028320) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0002d0a9) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0002d0a9) cell_pinb_pane_g

0xa0b4,	// (0x0002802b) grid_highlight_pane_cp01

0x2880,	// (0x000207f7) list_pinb_item_pane_ParamLimits

0x2880,	// (0x000207f7) list_pinb_item_pane

0xa0b4,	// (0x0002802b) list_highlight_pane_cp02

0x28aa,	// (0x00020821) list_pinb_item_pane_g1_ParamLimits

0x28aa,	// (0x00020821) list_pinb_item_pane_g1

0x28b7,	// (0x0002082e) list_pinb_item_pane_g2_ParamLimits

0x28b7,	// (0x0002082e) list_pinb_item_pane_g2

0x28c3,	// (0x0002083a) list_pinb_item_pane_g3_ParamLimits

0x28c3,	// (0x0002083a) list_pinb_item_pane_g3

0x28d4,	// (0x0002084b) list_pinb_item_pane_g4_ParamLimits

0x28d4,	// (0x0002084b) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0002d0b0) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0002d0b0) list_pinb_item_pane_g

0x28e0,	// (0x00020857) list_pinb_item_pane_t1_ParamLimits

0x28e0,	// (0x00020857) list_pinb_item_pane_t1

0x114c,	// (0x0001f0c3) calc_display_pane

0x116a,	// (0x0001f0e1) calc_paper_pane

0x1186,	// (0x0001f0fd) grid_calc_pane

0xa0b4,	// (0x0002802b) bg_list_pane_cp01

0x28f7,	// (0x0002086e) clock_g1

0x28ff,	// (0x00020876) clock_g2

0x0001,

0xf142,	// (0x0002d0b9) clock_g

0x2909,	// (0x00020880) clock_t1_ParamLimits

0x2909,	// (0x00020880) clock_t1

0x291e,	// (0x00020895) clock_t2_ParamLimits

0x291e,	// (0x00020895) clock_t2

0x2930,	// (0x000208a7) clock_t3_ParamLimits

0x2930,	// (0x000208a7) clock_t3

0x2942,	// (0x000208b9) clock_t4_ParamLimits

0x2942,	// (0x000208b9) clock_t4

0x2954,	// (0x000208cb) clock_t5_ParamLimits

0x2954,	// (0x000208cb) clock_t5

0x2969,	// (0x000208e0) clock_t6_ParamLimits

0x2969,	// (0x000208e0) clock_t6

0x297b,	// (0x000208f2) clock_t7_ParamLimits

0x297b,	// (0x000208f2) clock_t7

0x298d,	// (0x00020904) clock_t8_ParamLimits

0x298d,	// (0x00020904) clock_t8

0x29a3,	// (0x0002091a) clock_t9_ParamLimits

0x29a3,	// (0x0002091a) clock_t9

0x0008,

0xf147,	// (0x0002d0be) clock_t_ParamLimits

0xf147,	// (0x0002d0be) clock_t

0xa3b5,	// (0x0002832c) popup_clock_analogue_window_cp02

0xa3b5,	// (0x0002832c) popup_clock_digital_window_cp01

0xa3bd,	// (0x00028334) listscroll_help_pane

0xa0b4,	// (0x0002802b) phob_pre_status_pane

0xa3c7,	// (0x0002833e) grid_qdial_pane

0xa30f,	// (0x00028286) listscroll_mce_pane

0xa30f,	// (0x00028286) bg_notes_pane

0xa3d1,	// (0x00028348) list_notes_pane

0x29b9,	// (0x00020930) scroll_pane_cp06

0xa3ed,	// (0x00028364) bg_calc_paper_pane

0x11b2,	// (0x0001f129) list_calc_pane

0xa401,	// (0x00028378) bg_calc_display_pane

0x11cc,	// (0x0001f143) calc_display_pane_t1

0x11e1,	// (0x0001f158) calc_display_pane_t2

0x11f6,	// (0x0001f16d) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0002d0d1) calc_display_pane_t

0x1208,	// (0x0001f17f) cell_calc_pane_ParamLimits

0x1208,	// (0x0001f17f) cell_calc_pane

0xa40d,	// (0x00028384) bg_calc_paper_pane_g1

0xa419,	// (0x00028390) bg_calc_paper_pane_g2

0xa425,	// (0x0002839c) bg_calc_paper_pane_g3

0xa431,	// (0x000283a8) bg_calc_paper_pane_g4

0xa43d,	// (0x000283b4) bg_calc_paper_pane_g5

0x29c8,	// (0x0002093f) bg_calc_paper_pane_g6

0x29d9,	// (0x00020950) bg_calc_paper_pane_g7

0x29ea,	// (0x00020961) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0002d0d8) bg_calc_paper_pane_g

0x29fb,	// (0x00020972) calc_bg_paper_pane_g9

0x2a0c,	// (0x00020983) list_calc_item_pane_ParamLimits

0x2a0c,	// (0x00020983) list_calc_item_pane

0xa449,	// (0x000283c0) list_calc_item_pane_g1

0x1235,	// (0x0001f1ac) list_calc_item_pane_t1_ParamLimits

0x1235,	// (0x0001f1ac) list_calc_item_pane_t1

0x1247,	// (0x0001f1be) list_calc_item_pane_t2_ParamLimits

0x1247,	// (0x0001f1be) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0002d0e9) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0002d0e9) list_calc_item_pane_t

0xa456,	// (0x000283cd) cell_calc_pane_g1

0xa460,	// (0x000283d7) grid_highlight_pane_cp02

0xa482,	// (0x000283f9) bg_calc_display_pane_g1

0x1277,	// (0x0001f1ee) bg_calc_display_pane_g2

0xa48b,	// (0x00028402) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0002d0f3) bg_calc_display_pane_g

0x1281,	// (0x0001f1f8) cell_qdial_pane_ParamLimits

0x1281,	// (0x0001f1f8) cell_qdial_pane

0x2a40,	// (0x000209b7) cell_qdial_pane_g1_ParamLimits

0x2a40,	// (0x000209b7) cell_qdial_pane_g1

0x2a4d,	// (0x000209c4) cell_qdial_pane_g2_ParamLimits

0x2a4d,	// (0x000209c4) cell_qdial_pane_g2

0xa494,	// (0x0002840b) cell_qdial_pane_g3_ParamLimits

0xa494,	// (0x0002840b) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0002d0fa) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0002d0fa) cell_qdial_pane_g

0x2a6a,	// (0x000209e1) cell_qdial_pane_t1_ParamLimits

0x2a6a,	// (0x000209e1) cell_qdial_pane_t1

0x2a82,	// (0x000209f9) cell_qdial_pane_t2_ParamLimits

0x2a82,	// (0x000209f9) cell_qdial_pane_t2

0x2a95,	// (0x00020a0c) cell_qdial_pane_t3_ParamLimits

0x2a95,	// (0x00020a0c) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0002d103) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0002d103) cell_qdial_pane_t

0xa0b4,	// (0x0002802b) grid_highlight_pane_cp04

0xa4a0,	// (0x00028417) thumbnail_qdial_pane_ParamLimits

0xa4a0,	// (0x00028417) thumbnail_qdial_pane

0xa4fc,	// (0x00028473) list_help_pane

0xa505,	// (0x0002847c) scroll_pane_cp02

0x2aa8,	// (0x00020a1f) help_list_pane_t1_ParamLimits

0x2aa8,	// (0x00020a1f) help_list_pane_t1

0x1295,	// (0x0001f20c) bg_notes_pane_g2

0x129d,	// (0x0001f214) bg_notes_pane_g3

0x12a5,	// (0x0001f21c) notes_bg_pane_g1

0x12ad,	// (0x0001f224) notes_bg_pane_g4

0x12b5,	// (0x0001f22c) notes_bg_pane_g5

0x12bd,	// (0x0001f234) notes_bg_pane_g6

0x12c5,	// (0x0001f23c) notes_bg_pane_g7

0x12cd,	// (0x0001f244) notes_bg_pane_g8

0x12d5,	// (0x0001f24c) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0002d121) notes_bg_pane_g

0x2ae2,	// (0x00020a59) list_notes_text_pane_ParamLimits

0x2ae2,	// (0x00020a59) list_notes_text_pane

0xa50e,	// (0x00028485) list_notes_text_pane_g1

0x2b11,	// (0x00020a88) list_notes_text_pane_t1

0x2b1f,	// (0x00020a96) listscroll_cale_week_pane

0x2b44,	// (0x00020abb) bg_cale_heading_pane

0xa531,	// (0x000284a8) bg_cale_pane_cp01

0x2b66,	// (0x00020add) cale_week_corner_pane

0x2b80,	// (0x00020af7) cale_week_day_heading_pane

0x2ba2,	// (0x00020b19) cale_week_scroll_pane_g1

0x2bbf,	// (0x00020b36) cale_week_scroll_pane_g2

0x2bd2,	// (0x00020b49) cale_week_scroll_pane_g3

0x2be5,	// (0x00020b5c) cale_week_scroll_pane_g4

0x2bf8,	// (0x00020b6f) cale_week_scroll_pane_g5

0x2c0b,	// (0x00020b82) cale_week_scroll_pane_g6

0x2c1e,	// (0x00020b95) cale_week_scroll_pane_g7

0x2c31,	// (0x00020ba8) cale_week_scroll_pane_g8

0x2c46,	// (0x00020bbd) cale_week_scroll_pane_g9

0x2c59,	// (0x00020bd0) cale_week_scroll_pane_g10

0x2c6c,	// (0x00020be3) cale_week_scroll_pane_g11

0x2c7f,	// (0x00020bf6) cale_week_scroll_pane_g12

0x2c96,	// (0x00020c0d) cale_week_scroll_pane_g13

0x2cb1,	// (0x00020c28) cale_week_scroll_pane_g14

0x2ccc,	// (0x00020c43) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0002d130) cale_week_scroll_pane_g

0x2ce7,	// (0x00020c5e) cale_week_time_pane

0x2cfc,	// (0x00020c73) grid_cale_week_pane

0xa561,	// (0x000284d8) scroll_pane_cp08

0x2d1d,	// (0x00020c94) cell_cale_week_pane_ParamLimits

0x2d1d,	// (0x00020c94) cell_cale_week_pane

0x2d81,	// (0x00020cf8) cale_week_day_heading_pane_t1

0x2dbc,	// (0x00020d33) cale_week_day_heading_pane_t2

0x2df7,	// (0x00020d6e) cale_week_day_heading_pane_t3

0x2e32,	// (0x00020da9) cale_week_day_heading_pane_t4

0x2e6d,	// (0x00020de4) cale_week_day_heading_pane_t5

0x2ea8,	// (0x00020e1f) cale_week_day_heading_pane_t6

0x2ee3,	// (0x00020e5a) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0002d14f) cale_week_day_heading_pane_t

0xa57e,	// (0x000284f5) bg_cale_side_pane

0x12dd,	// (0x0001f254) cale_week_time_pane_t1

0x12f7,	// (0x0001f26e) cale_week_time_pane_t2

0x1311,	// (0x0001f288) cale_week_time_pane_t3

0x132b,	// (0x0001f2a2) cale_week_time_pane_t4

0x1345,	// (0x0001f2bc) cale_week_time_pane_t5

0x1361,	// (0x0001f2d8) cale_week_time_pane_t6

0x1383,	// (0x0001f2fa) cale_week_time_pane_t7

0x13a7,	// (0x0001f31e) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0002d15e) cale_week_time_pane_t

0x2f1e,	// (0x00020e95) cell_cale_week_pane_g2

0x2f31,	// (0x00020ea8) cell_cale_week_pane_g3_ParamLimits

0x2f31,	// (0x00020ea8) cell_cale_week_pane_g3

0xa58c,	// (0x00028503) grid_highlight_pane_cp07

0xa594,	// (0x0002850b) listscroll_gms_pane

0xa59e,	// (0x00028515) grid_gms_pane

0xa5a7,	// (0x0002851e) listscroll_gms_pane_g1

0xa5af,	// (0x00028526) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0002d16f) listscroll_gms_pane_g

0x2f49,	// (0x00020ec0) scroll_pane_cp010

0x2f54,	// (0x00020ecb) cell_gms_pane_ParamLimits

0x2f54,	// (0x00020ecb) cell_gms_pane

0x2f64,	// (0x00020edb) cell_gms_pane_g1

0xa5b7,	// (0x0002852e) cell_gms_pane_g2

0xa50e,	// (0x00028485) cell_gms_pane_g3

0xa5bf,	// (0x00028536) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0002d174) cell_gms_pane_g

0xa5c8,	// (0x0002853f) grid_highlight_pane_cp09

0x55e7,	// (0x0002355e) phob_pre_status_pane_g1

0x55ef,	// (0x00023566) phob_pre_status_pane_g2

0x55f7,	// (0x0002356e) phob_pre_status_pane_g3

0x55ff,	// (0x00023576) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0002d563) phob_pre_status_pane_g

0x560f,	// (0x00023586) phob_pre_status_pane_t1

0x561f,	// (0x00023596) phob_pre_status_pane_t2

0x562f,	// (0x000235a6) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0002d56e) phob_pre_status_pane_t

0xa0b4,	// (0x0002802b) bg_list_pane_cp05

0x13d5,	// (0x0001f34c) grid_vorec_pane

0x13e1,	// (0x0001f358) vorec_t1

0x13ef,	// (0x0001f366) vorec_t2

0x13fd,	// (0x0001f374) vorec_t3

0x140b,	// (0x0001f382) vorec_t4

0x1419,	// (0x0001f390) vorec_t5

0x1427,	// (0x0001f39e) vorec_t6

0x0006,

0xf206,	// (0x0002d17d) vorec_t

0x1443,	// (0x0001f3ba) wait_bar_pane_cp01

0x2f6c,	// (0x00020ee3) cell_vorec_pane_ParamLimits

0x2f6c,	// (0x00020ee3) cell_vorec_pane

0xa5d0,	// (0x00028547) cell_vorec_pane_g1

0xa0b4,	// (0x0002802b) grid_highlight_pane_cp05

0x2f8f,	// (0x00020f06) cams_zoom_pane

0x2f9b,	// (0x00020f12) image_vga_pane

0x2faa,	// (0x00020f21) main_camera_pane_g1

0x2fb8,	// (0x00020f2f) main_camera_pane_g2

0x2fc4,	// (0x00020f3b) main_camera_pane_g3

0x2fd0,	// (0x00020f47) main_camera_pane_g4

0x2fdc,	// (0x00020f53) main_camera_pane_g5

0x2fe8,	// (0x00020f5f) main_camera_pane_g6

0x2ff4,	// (0x00020f6b) main_camera_pane_g7

0x0007,

0xf215,	// (0x0002d18c) main_camera_pane_g

0x3000,	// (0x00020f77) main_camera_pane_t1

0x3012,	// (0x00020f89) main_camera_pane_t2

0x0001,

0xf226,	// (0x0002d19d) main_camera_pane_t

0x3033,	// (0x00020faa) cams_zoom_pane_cp_ParamLimits

0x3033,	// (0x00020faa) cams_zoom_pane_cp

0x3057,	// (0x00020fce) image_cif_pane_ParamLimits

0x3057,	// (0x00020fce) image_cif_pane

0x3075,	// (0x00020fec) image_subqcif_pane

0x307d,	// (0x00020ff4) main_video_pane_g1_ParamLimits

0x307d,	// (0x00020ff4) main_video_pane_g1

0x309d,	// (0x00021014) main_video_pane_g2_ParamLimits

0x309d,	// (0x00021014) main_video_pane_g2

0x30cd,	// (0x00021044) main_video_pane_g3_ParamLimits

0x30cd,	// (0x00021044) main_video_pane_g3

0x30f6,	// (0x0002106d) main_video_pane_g4_ParamLimits

0x30f6,	// (0x0002106d) main_video_pane_g4

0x311f,	// (0x00021096) main_video_pane_g5_ParamLimits

0x311f,	// (0x00021096) main_video_pane_g5

0xa5e6,	// (0x0002855d) main_video_pane_g6_ParamLimits

0xa5e6,	// (0x0002855d) main_video_pane_g6

0x0006,

0xf22b,	// (0x0002d1a2) main_video_pane_g_ParamLimits

0xf22b,	// (0x0002d1a2) main_video_pane_g

0x3141,	// (0x000210b8) main_video_pane_t1_ParamLimits

0x3141,	// (0x000210b8) main_video_pane_t1

0xa600,	// (0x00028577) cams_zoom_pane_g1

0xa609,	// (0x00028580) cams_zoom_pane_g2

0xa612,	// (0x00028589) cams_zoom_pane_g3

0xa61b,	// (0x00028592) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0002d1b1) cams_zoom_pane_g

0x318b,	// (0x00021102) grid_cams_pane

0x3199,	// (0x00021110) linegrid_cams_pane

0x31a7,	// (0x0002111e) cell_cams_pane_ParamLimits

0x31a7,	// (0x0002111e) cell_cams_pane

0xa624,	// (0x0002859b) cams_burst_image_pane

0xa62c,	// (0x000285a3) cell_cams_pane_g1

0xa0b4,	// (0x0002802b) grid_highlight_pane_cp03

0xa456,	// (0x000283cd) mp_bg_pane_g1

0xa0b4,	// (0x0002802b) bg_list_pane_cp03

0xc239,	// (0x0002a1b0) bg_mp_pane

0xc241,	// (0x0002a1b8) grid_mp_pane

0xc249,	// (0x0002a1c0) media_player_g1

0xc251,	// (0x0002a1c8) media_player_t1

0xc25f,	// (0x0002a1d6) media_player_t2

0xc26d,	// (0x0002a1e4) media_player_t3

0xc27b,	// (0x0002a1f2) media_player_t4

0xc289,	// (0x0002a200) media_player_t5

0xc297,	// (0x0002a20e) media_player_t6

0xc2a5,	// (0x0002a21c) media_player_t7

0x0006,

0xf5d6,	// (0x0002d54d) media_player_t

0xc2b3,	// (0x0002a22a) wait_bar_pane_cp02

0xf5bb,	// (0x0002d532) main_usb_pane_t

0x55de,	// (0x00023555) cell_mp_pane

0xa456,	// (0x000283cd) cell_mp_pane_g1

0xa0b4,	// (0x0002802b) grid_highlight_pane_cp06

0xa634,	// (0x000285ab) grid_skin_colour_pane

0xa63c,	// (0x000285b3) list_highlight_pane_cp03

0x32ce,	// (0x00021245) skin_g1

0xa644,	// (0x000285bb) skin_t1

0xa653,	// (0x000285ca) skin_t2

0x0001,

0xf26f,	// (0x0002d1e6) skin_t

0x32d8,	// (0x0002124f) cell_skin_colour_pane_ParamLimits

0x32d8,	// (0x0002124f) cell_skin_colour_pane

0xa661,	// (0x000285d8) cell_skin_colour_pane_g1

0x335c,	// (0x000212d3) call_video_g1_ParamLimits

0x335c,	// (0x000212d3) call_video_g1

0x336c,	// (0x000212e3) call_video_g2_ParamLimits

0x336c,	// (0x000212e3) call_video_g2

0x0001,

0xf274,	// (0x0002d1eb) call_video_g_ParamLimits

0xf274,	// (0x0002d1eb) call_video_g

0x33c6,	// (0x0002133d) call_video_uplink_pane_cp1_ParamLimits

0x33c6,	// (0x0002133d) call_video_uplink_pane_cp1

0xa673,	// (0x000285ea) call_video_uplink_pane_cp2

0x3492,	// (0x00021409) video_down_crop_pane_ParamLimits

0x3492,	// (0x00021409) video_down_crop_pane

0x3584,	// (0x000214fb) video_down_pane_ParamLimits

0x3584,	// (0x000214fb) video_down_pane

0xa67b,	// (0x000285f2) video_down_subqcif_pane_ParamLimits

0xa67b,	// (0x000285f2) video_down_subqcif_pane

0xa693,	// (0x0002860a) video_down_subqcif_pane_cp_ParamLimits

0xa693,	// (0x0002860a) video_down_subqcif_pane_cp

0xa6b9,	// (0x00028630) im_reading_pane_ParamLimits

0xa6b9,	// (0x00028630) im_reading_pane

0x36a6,	// (0x0002161d) im_writing_pane_ParamLimits

0x36a6,	// (0x0002161d) im_writing_pane

0x36c4,	// (0x0002163b) im_reading_pane_t1

0xa6d3,	// (0x0002864a) list_im_pane

0xa6e4,	// (0x0002865b) scroll_pane_cp07

0x371f,	// (0x00021696) im_writing_pane_t1_ParamLimits

0x371f,	// (0x00021696) im_writing_pane_t1

0xa6fd,	// (0x00028674) im_writing_pane_t2_ParamLimits

0xa6fd,	// (0x00028674) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0002d1f5) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0002d1f5) im_writing_pane_t

0xa0b4,	// (0x0002802b) input_focus_pane_cp04

0xa0b4,	// (0x0002802b) input_focus_pane_cp05

0x3731,	// (0x000216a8) list_im_single_pane_ParamLimits

0x3731,	// (0x000216a8) list_im_single_pane

0x3759,	// (0x000216d0) list_single_im_pane_t1

0x55a2,	// (0x00023519) blid_accuracy_pane

0x55aa,	// (0x00023521) blid_compass_pane

0x55b4,	// (0x0002352b) main_location_t1

0x55c2,	// (0x00023539) main_location_t2

0x55d0,	// (0x00023547) main_location_t3

0x0002,

0xf5e5,	// (0x0002d55c) main_location_t

0xa0b4,	// (0x0002802b) aid_levels_location

0xa456,	// (0x000283cd) blid_accuracy_pane_g1

0xa456,	// (0x000283cd) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0002d257) blid_accuracy_pane_g

0xa745,	// (0x000286bc) wml_content_pane

0xa783,	// (0x000286fa) wml_button_pane_ParamLimits

0xa783,	// (0x000286fa) wml_button_pane

0x3768,	// (0x000216df) wml_list_single_large_pane_ParamLimits

0x3768,	// (0x000216df) wml_list_single_large_pane

0x3799,	// (0x00021710) wml_list_single_medium_pane_ParamLimits

0x3799,	// (0x00021710) wml_list_single_medium_pane

0x37d1,	// (0x00021748) wml_list_single_small_pane_ParamLimits

0x37d1,	// (0x00021748) wml_list_single_small_pane

0xa797,	// (0x0002870e) wml_selection_box_pane_ParamLimits

0xa797,	// (0x0002870e) wml_selection_box_pane

0xa7aa,	// (0x00028721) wml_list_single_pane_t1

0xa7b9,	// (0x00028730) wml_list_single_medium_pane_t1

0xa7c8,	// (0x0002873f) wml_list_single_large_pane_t1

0xa7d7,	// (0x0002874e) input_focus_pane_cp02_ParamLimits

0xa7d7,	// (0x0002874e) input_focus_pane_cp02

0xa7ea,	// (0x00028761) wml_selection_box_pane_g1

0xa7f3,	// (0x0002876a) wml_selection_box_pane_t1_ParamLimits

0xa7f3,	// (0x0002876a) wml_selection_box_pane_t1

0xa30f,	// (0x00028286) bg_wml_button_pane_ParamLimits

0xa30f,	// (0x00028286) bg_wml_button_pane

0xa80b,	// (0x00028782) wml_button_pane_g1

0xa813,	// (0x0002878a) wml_button_pane_t1

0xa80b,	// (0x00028782) wml_button_bg_pane_g1

0xa823,	// (0x0002879a) wml_button_bg_pane_g2

0xa82b,	// (0x000287a2) wml_button_bg_pane_g3

0xa833,	// (0x000287aa) wml_button_bg_pane_g4

0xa83b,	// (0x000287b2) wml_button_bg_pane_g5

0xa843,	// (0x000287ba) wml_button_bg_pane_g6

0xa84b,	// (0x000287c2) wml_button_bg_pane_g7

0xa853,	// (0x000287ca) wml_button_bg_pane_g8

0xa85b,	// (0x000287d2) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0002d1fa) wml_button_bg_pane_g

0x3812,	// (0x00021789) bg_list_pane_cp02

0xa863,	// (0x000287da) mce_header_pane_ParamLimits

0xa863,	// (0x000287da) mce_header_pane

0xa879,	// (0x000287f0) mce_icon_pane

0xa879,	// (0x000287f0) mce_image_pane

0xa882,	// (0x000287f9) mce_text_pane_ParamLimits

0xa882,	// (0x000287f9) mce_text_pane

0x381c,	// (0x00021793) scroll_pane_cp03

0xa77b,	// (0x000286f2) scroll_pane_cp04

0xa895,	// (0x0002880c) scroll_pane_cp05_ParamLimits

0xa895,	// (0x0002880c) scroll_pane_cp05

0x3826,	// (0x0002179d) mce_header_field_pane_ParamLimits

0x3826,	// (0x0002179d) mce_header_field_pane

0x3846,	// (0x000217bd) mce_header_field_pane_2_ParamLimits

0x3846,	// (0x000217bd) mce_header_field_pane_2

0x385c,	// (0x000217d3) mce_header_field_pane_3

0x3864,	// (0x000217db) list_single_mce_message_pane_ParamLimits

0x3864,	// (0x000217db) list_single_mce_message_pane

0x3896,	// (0x0002180d) list_single_mce_smart_pane_ParamLimits

0x3896,	// (0x0002180d) list_single_mce_smart_pane

0xa8a1,	// (0x00028818) input_focus_pane_cp03

0xa8aa,	// (0x00028821) list_header_data_pane

0x38d3,	// (0x0002184a) mce_header_field_pane_t1

0x38e3,	// (0x0002185a) list_single_mce_header_pane_ParamLimits

0x38e3,	// (0x0002185a) list_single_mce_header_pane

0xa8b2,	// (0x00028829) list_single_mce_header_pane_t1

0xa8c1,	// (0x00028838) list_single_mce_message_pane_g1

0xa8c9,	// (0x00028840) list_single_mce_message_pane_t1

0x393a,	// (0x000218b1) bg_cale_heading_pane_cp01_ParamLimits

0x393a,	// (0x000218b1) bg_cale_heading_pane_cp01

0xa8d7,	// (0x0002884e) bg_cale_pane_cp02_ParamLimits

0xa8d7,	// (0x0002884e) bg_cale_pane_cp02

0x397d,	// (0x000218f4) cale_month_corner_pane

0x3997,	// (0x0002190e) cale_month_day_heading_pane_ParamLimits

0x3997,	// (0x0002190e) cale_month_day_heading_pane

0x39f2,	// (0x00021969) cale_month_pane_g1_ParamLimits

0x39f2,	// (0x00021969) cale_month_pane_g1

0x3a2a,	// (0x000219a1) cale_month_pane_g2_ParamLimits

0x3a2a,	// (0x000219a1) cale_month_pane_g2

0x3a55,	// (0x000219cc) cale_month_pane_g3_ParamLimits

0x3a55,	// (0x000219cc) cale_month_pane_g3

0x3aa5,	// (0x00021a1c) cale_month_pane_g4_ParamLimits

0x3aa5,	// (0x00021a1c) cale_month_pane_g4

0x3af5,	// (0x00021a6c) cale_month_pane_g5_ParamLimits

0x3af5,	// (0x00021a6c) cale_month_pane_g5

0x3b45,	// (0x00021abc) cale_month_pane_g6_ParamLimits

0x3b45,	// (0x00021abc) cale_month_pane_g6

0x3b95,	// (0x00021b0c) cale_month_pane_g7_ParamLimits

0x3b95,	// (0x00021b0c) cale_month_pane_g7

0x3bfd,	// (0x00021b74) cale_month_pane_g8_ParamLimits

0x3bfd,	// (0x00021b74) cale_month_pane_g8

0x3c65,	// (0x00021bdc) cale_month_pane_g9_ParamLimits

0x3c65,	// (0x00021bdc) cale_month_pane_g9

0x3cc3,	// (0x00021c3a) cale_month_pane_g10_ParamLimits

0x3cc3,	// (0x00021c3a) cale_month_pane_g10

0x3d21,	// (0x00021c98) cale_month_pane_g11_ParamLimits

0x3d21,	// (0x00021c98) cale_month_pane_g11

0x3d75,	// (0x00021cec) cale_month_pane_g12_ParamLimits

0x3d75,	// (0x00021cec) cale_month_pane_g12

0x3dcb,	// (0x00021d42) cale_month_pane_g13_ParamLimits

0x3dcb,	// (0x00021d42) cale_month_pane_g13

0x000c,

0xf296,	// (0x0002d20d) cale_month_pane_g_ParamLimits

0xf296,	// (0x0002d20d) cale_month_pane_g

0x3e21,	// (0x00021d98) cale_month_week_pane

0x3e36,	// (0x00021dad) grid_cale_month_pane_ParamLimits

0x3e36,	// (0x00021dad) grid_cale_month_pane

0x3e88,	// (0x00021dff) cale_month_day_heading_pane_t1

0x3f0e,	// (0x00021e85) cale_month_day_heading_pane_t2

0x3f9f,	// (0x00021f16) cale_month_day_heading_pane_t3

0x4030,	// (0x00021fa7) cale_month_day_heading_pane_t4

0x40c1,	// (0x00022038) cale_month_day_heading_pane_t5

0x4152,	// (0x000220c9) cale_month_day_heading_pane_t6

0x41ef,	// (0x00022166) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0002d228) cale_month_day_heading_pane_t

0xa57e,	// (0x000284f5) bg_cale_side_pane_cp01

0x4298,	// (0x0002220f) cale_month_week_pane_t1

0x42b1,	// (0x00022228) cale_month_week_pane_t2

0x42ca,	// (0x00022241) cale_month_week_pane_t3

0x42e3,	// (0x0002225a) cale_month_week_pane_t4

0x4300,	// (0x00022277) cale_month_week_pane_t5

0x4321,	// (0x00022298) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0002d237) cale_month_week_pane_t

0x4342,	// (0x000222b9) cell_cale_month_pane_ParamLimits

0x4342,	// (0x000222b9) cell_cale_month_pane

0x144b,	// (0x0001f3c2) cell_cale_month_pane_g1

0x1457,	// (0x0001f3ce) cell_cale_month_pane_t1_ParamLimits

0x1457,	// (0x0001f3ce) cell_cale_month_pane_t1

0xa58c,	// (0x00028503) grid_highlight_pane_cp08

0xa456,	// (0x000283cd) main_smil_g1

0x4492,	// (0x00022409) smil_status_pane

0xa916,	// (0x0002888d) smil_text_pane

0xc159,	// (0x0002a0d0) bg_popup_call3_rect_pane_g8

0xc161,	// (0x0002a0d8) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0002d4f0) bg_popup_call3_rect_pane_g

0xc3a8,	// (0x0002a31f) smil_status_volume_pane_g1

0xa920,	// (0x00028897) smil_status_pane_t1

0x1713,	// (0x0001f68a) volume_smil_pane

0xa937,	// (0x000288ae) list_smil_text_pane

0x44a5,	// (0x0002241c) scroll_pane_cp011

0x44b0,	// (0x00022427) smil_text_list_pane_t1_ParamLimits

0x44b0,	// (0x00022427) smil_text_list_pane_t1

0x1477,	// (0x0001f3ee) aid_volume_smil_ParamLimits

0x1477,	// (0x0001f3ee) aid_volume_smil

0xa456,	// (0x000283cd) smil_volume_pane_g1

0xa456,	// (0x000283cd) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0002d257) smil_volume_pane_g

0x2b1f,	// (0x00020a96) listscroll_cale_day_pane

0xa941,	// (0x000288b8) bg_cale_pane

0xa959,	// (0x000288d0) list_cale_pane

0xa97c,	// (0x000288f3) scroll_pane_cp09

0xa98d,	// (0x00028904) cale_bg_pane_g1

0xa995,	// (0x0002890c) cale_bg_pane_g2

0xa99d,	// (0x00028914) cale_bg_pane_g3

0xa9a5,	// (0x0002891c) cale_bg_pane_g4

0xa9ad,	// (0x00028924) cale_bg_pane_g5

0xa9b5,	// (0x0002892c) cale_bg_pane_g6

0xa9bd,	// (0x00028934) cale_bg_pane_g7

0xa9c5,	// (0x0002893c) cale_bg_pane_g8

0xa9cd,	// (0x00028944) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0002d25c) cale_bg_pane_g

0x4544,	// (0x000224bb) list_cale_time_pane_ParamLimits

0x4544,	// (0x000224bb) list_cale_time_pane

0x4564,	// (0x000224db) list_cale_time_pane_g1_ParamLimits

0x4564,	// (0x000224db) list_cale_time_pane_g1

0xa9d5,	// (0x0002894c) list_cale_time_pane_g2_ParamLimits

0xa9d5,	// (0x0002894c) list_cale_time_pane_g2

0x4570,	// (0x000224e7) list_cale_time_pane_g3_ParamLimits

0x4570,	// (0x000224e7) list_cale_time_pane_g3

0x457e,	// (0x000224f5) list_cale_time_pane_g4_ParamLimits

0x457e,	// (0x000224f5) list_cale_time_pane_g4

0x458c,	// (0x00022503) list_cale_time_pane_g5_ParamLimits

0x458c,	// (0x00022503) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0002d26f) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0002d26f) list_cale_time_pane_g

0x459a,	// (0x00022511) list_cale_time_pane_t1_ParamLimits

0x459a,	// (0x00022511) list_cale_time_pane_t1

0x45c2,	// (0x00022539) list_cale_time_pane_t2_ParamLimits

0x45c2,	// (0x00022539) list_cale_time_pane_t2

0x491c,	// (0x00022893) aid_blid_cardinal_pane

0x495e,	// (0x000228d5) compass_pane_t4

0x45ea,	// (0x00022561) list_cale_time_pane_t4_ParamLimits

0x45ea,	// (0x00022561) list_cale_time_pane_t4

0x496c,	// (0x000228e3) compass_pane_t5

0x497c,	// (0x000228f3) compass_pane_t6

0x498a,	// (0x00022901) compass_pane_t7

0xae1c,	// (0x00028d93) navi_pane_cc_t1

0xaf71,	// (0x00028ee8) aid_phob_thumbnail_center_pane

0x509b,	// (0x00023012) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0002d27c) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0002d27c) list_cale_time_pane_t

0x9d0b,	// (0x00027c82) bg_popup_window_pane_cp02_ParamLimits

0x9d0b,	// (0x00027c82) bg_popup_window_pane_cp02

0xa9ef,	// (0x00028966) heading_pane_cp01_ParamLimits

0xa9ef,	// (0x00028966) heading_pane_cp01

0xa9fb,	// (0x00028972) loc_req_pane_ParamLimits

0xa9fb,	// (0x00028972) loc_req_pane

0xaa0b,	// (0x00028982) loc_type_pane_ParamLimits

0xaa0b,	// (0x00028982) loc_type_pane

0xaa1d,	// (0x00028994) loc_type_pane_t1_ParamLimits

0xaa1d,	// (0x00028994) loc_type_pane_t1

0xaa2f,	// (0x000289a6) loc_type_pane_t2_ParamLimits

0xaa2f,	// (0x000289a6) loc_type_pane_t2

0xaa41,	// (0x000289b8) loc_type_pane_t3_ParamLimits

0xaa41,	// (0x000289b8) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0002d283) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0002d283) loc_type_pane_t

0xaa53,	// (0x000289ca) list_loc_req_pane

0xaa5d,	// (0x000289d4) scroll_pane_cp012

0x4612,	// (0x00022589) list_single_loc_request_popup_menu_pane_ParamLimits

0x4612,	// (0x00022589) list_single_loc_request_popup_menu_pane

0xaa68,	// (0x000289df) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa68,	// (0x000289df) list_single_loc_request_popup_menu_pane_g1

0xaa74,	// (0x000289eb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa74,	// (0x000289eb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0002d28a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0002d28a) list_single_loc_request_popup_menu_pane_g

0xaa80,	// (0x000289f7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa80,	// (0x000289f7) list_single_loc_request_popup_menu_pane_t1

0x462a,	// (0x000225a1) bg_popup_window_pane_cp03_ParamLimits

0x462a,	// (0x000225a1) bg_popup_window_pane_cp03

0x4638,	// (0x000225af) heading_loc_req_pane_ParamLimits

0x4638,	// (0x000225af) heading_loc_req_pane

0x4644,	// (0x000225bb) popup_dyc_status_message_window_g1_ParamLimits

0x4644,	// (0x000225bb) popup_dyc_status_message_window_g1

0x4650,	// (0x000225c7) popup_dyc_status_message_window_t1_ParamLimits

0x4650,	// (0x000225c7) popup_dyc_status_message_window_t1

0x4662,	// (0x000225d9) popup_dyc_status_message_window_t2_ParamLimits

0x4662,	// (0x000225d9) popup_dyc_status_message_window_t2

0x4674,	// (0x000225eb) popup_dyc_status_message_window_t3_ParamLimits

0x4674,	// (0x000225eb) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0002d28f) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0002d28f) popup_dyc_status_message_window_t

0xa0b4,	// (0x0002802b) bg_heading_pane_cp01

0xaa96,	// (0x00028a0d) heading_loc_req_pane_g1

0xaa9e,	// (0x00028a15) heading_loc_req_pane_g2

0xaaa6,	// (0x00028a1d) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0002d296) heading_loc_req_pane_g

0xaaae,	// (0x00028a25) heading_loc_req_pane_t1

0xaabd,	// (0x00028a34) bg_popup_sub_pane_cp01_ParamLimits

0xaabd,	// (0x00028a34) bg_popup_sub_pane_cp01

0xaacb,	// (0x00028a42) popup_cale_events_window_g1_ParamLimits

0xaacb,	// (0x00028a42) popup_cale_events_window_g1

0xaaeb,	// (0x00028a62) popup_cale_events_window_g2_ParamLimits

0xaaeb,	// (0x00028a62) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0002d2ca) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0002d2ca) popup_cale_events_window_g

0xab0b,	// (0x00028a82) popup_cale_events_window_t1_ParamLimits

0xab0b,	// (0x00028a82) popup_cale_events_window_t1

0xab1d,	// (0x00028a94) popup_cale_events_window_t2_ParamLimits

0xab1d,	// (0x00028a94) popup_cale_events_window_t2

0xab5b,	// (0x00028ad2) popup_cale_events_window_t3_ParamLimits

0xab5b,	// (0x00028ad2) popup_cale_events_window_t3

0xab95,	// (0x00028b0c) popup_cale_events_window_t4_ParamLimits

0xab95,	// (0x00028b0c) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0002d2cf) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0002d2cf) popup_cale_events_window_t

0x476f,	// (0x000226e6) call_type_pane

0xabcb,	// (0x00028b42) popup_call_status_window_g1

0x477b,	// (0x000226f2) popup_call_status_window_g2

0x4787,	// (0x000226fe) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0002d2d8) popup_call_status_window_g

0xabd9,	// (0x00028b50) call_type_pane_g1

0xabe2,	// (0x00028b59) call_type_pane_g2

0x0001,

0xf368,	// (0x0002d2df) call_type_pane_g

0xa0b4,	// (0x0002802b) bg_popup_sub_pane_cp02

0xabeb,	// (0x00028b62) listscroll_popup_wml_pane

0xabf3,	// (0x00028b6a) list_wml_pane

0xabfd,	// (0x00028b74) scroll_pane_cp013

0xac08,	// (0x00028b7f) list_single_graphic_popup_wml_pane_ParamLimits

0xac08,	// (0x00028b7f) list_single_graphic_popup_wml_pane

0xa456,	// (0x000283cd) list_single_graphic_popup_wml_pane_g1

0xac1c,	// (0x00028b93) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0002d2e4) list_single_graphic_popup_wml_pane_g

0xac24,	// (0x00028b9b) list_single_graphic_popup_wml_pane_t1

0xac3a,	// (0x00028bb1) aid_call_pane

0xa307,	// (0x0002827e) popup_clock_analogue_window_g1

0xa307,	// (0x0002827e) popup_clock_analogue_window_g2

0x1499,	// (0x0001f410) popup_clock_analogue_window_g3

0x1499,	// (0x0001f410) popup_clock_analogue_window_g4

0xa456,	// (0x000283cd) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0002d2e9) popup_clock_analogue_window_g

0x14a1,	// (0x0001f418) popup_clock_analogue_window_t1

0x14af,	// (0x0001f426) clock_digital_number_pane_ParamLimits

0x14af,	// (0x0001f426) clock_digital_number_pane

0x14bb,	// (0x0001f432) clock_digital_number_pane_cp02_ParamLimits

0x14bb,	// (0x0001f432) clock_digital_number_pane_cp02

0x14c7,	// (0x0001f43e) clock_digital_number_pane_cp03_ParamLimits

0x14c7,	// (0x0001f43e) clock_digital_number_pane_cp03

0x14d3,	// (0x0001f44a) clock_digital_number_pane_cp04_ParamLimits

0x14d3,	// (0x0001f44a) clock_digital_number_pane_cp04

0x14e3,	// (0x0001f45a) clock_digital_separator_pane_ParamLimits

0x14e3,	// (0x0001f45a) clock_digital_separator_pane

0x14ef,	// (0x0001f466) popup_clock_digital_window_t1

0xa456,	// (0x000283cd) clock_digital_number_pane_g1

0xa456,	// (0x000283cd) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0002d257) clock_digital_number_pane_g

0xa456,	// (0x000283cd) clock_digital_separator_pane_g1

0xa456,	// (0x000283cd) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0002d257) clock_digital_separator_pane_g

0xa0b4,	// (0x0002802b) bg_popup_window_pane_cp04

0xac42,	// (0x00028bb9) heading_pane_cp03

0xac4a,	// (0x00028bc1) listscroll_popup_gms_pane

0xac52,	// (0x00028bc9) grid_large_graphic_popup_pane

0xac5c,	// (0x00028bd3) listscroll_popup_gms_pane_g1

0xac64,	// (0x00028bdb) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0002d2f4) listscroll_popup_gms_pane_g

0xa77b,	// (0x000286f2) scroll_pane_cp014

0xac6c,	// (0x00028be3) cell_large_graphic_popup_pane_ParamLimits

0xac6c,	// (0x00028be3) cell_large_graphic_popup_pane

0xac84,	// (0x00028bfb) cell_large_graphic_popup_pane_g1_ParamLimits

0xac84,	// (0x00028bfb) cell_large_graphic_popup_pane_g1

0xac90,	// (0x00028c07) cell_large_graphic_popup_pane_g2_ParamLimits

0xac90,	// (0x00028c07) cell_large_graphic_popup_pane_g2

0xac9c,	// (0x00028c13) cell_large_graphic_popup_pane_g3_ParamLimits

0xac9c,	// (0x00028c13) cell_large_graphic_popup_pane_g3

0xaca9,	// (0x00028c20) cell_large_graphic_popup_pane_g4_ParamLimits

0xaca9,	// (0x00028c20) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0002d2f9) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0002d2f9) cell_large_graphic_popup_pane_g

0xacb9,	// (0x00028c30) grid_highlight_pane_cp010

0xa456,	// (0x000283cd) bg_popup_call_pane_g1

0xacc3,	// (0x00028c3a) list_single_graphic_popup_conf_pane_ParamLimits

0xacc3,	// (0x00028c3a) list_single_graphic_popup_conf_pane

0xacd6,	// (0x00028c4d) list_highlight_pane_cp01

0xacdf,	// (0x00028c56) list_single_graphic_popup_conf_pane_g1

0xace7,	// (0x00028c5e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0002d302) list_single_graphic_popup_conf_pane_g

0xacef,	// (0x00028c66) list_single_graphic_popup_conf_pane_t1

0xacfd,	// (0x00028c74) linegrid_cams_pane_g1

0x4793,	// (0x0002270a) linegrid_cams_pane_g2

0xa50e,	// (0x00028485) linegrid_cams_pane_g3

0xad06,	// (0x00028c7d) linegrid_cams_pane_g4

0x479c,	// (0x00022713) linegrid_cams_pane_g5

0x47a5,	// (0x0002271c) linegrid_cams_pane_g6

0xa5bf,	// (0x00028536) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0002d307) linegrid_cams_pane_g

0xad0f,	// (0x00028c86) popup_clock_analogue_window

0xad0f,	// (0x00028c86) popup_clock_digital_window

0xa0b4,	// (0x0002802b) popup_phob_thumbnail_window

0xa456,	// (0x000283cd) call_video_uplink_pane_g1

0xad18,	// (0x00028c8f) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0002d316) call_video_uplink_pane_g

0xa58c,	// (0x00028503) video_uplink_pane

0xad20,	// (0x00028c97) mce_image_pane_g1

0x47ae,	// (0x00022725) mce_image_pane_g2

0x47b6,	// (0x0002272d) mce_image_pane_g3

0x47be,	// (0x00022735) mce_image_pane_g4

0x47c6,	// (0x0002273d) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0002d31b) mce_image_pane_g

0xad2a,	// (0x00028ca1) control_top_pane_stacon_cp01_ParamLimits

0xad2a,	// (0x00028ca1) control_top_pane_stacon_cp01

0xad3e,	// (0x00028cb5) uni_indicator_pane_stacon_cp01_ParamLimits

0xad3e,	// (0x00028cb5) uni_indicator_pane_stacon_cp01

0xad4f,	// (0x00028cc6) bg_popup_sub_pane_cp03

0x47ce,	// (0x00022745) chi_dic_find_pane

0x47d6,	// (0x0002274d) listscroll_chi_dic_pane

0x47df,	// (0x00022756) main_pane_chidic_g1

0xad59,	// (0x00028cd0) chi_dic_find_pane_t1

0xad67,	// (0x00028cde) find_chidic_pane

0xad70,	// (0x00028ce7) chi_dic_list_pane_ParamLimits

0xad70,	// (0x00028ce7) chi_dic_list_pane

0xad81,	// (0x00028cf8) scroll_pane_cp020

0xad89,	// (0x00028d00) find_chidic_pane_t1

0xa0b4,	// (0x0002802b) input_focus_pane_cp06

0x47f2,	// (0x00022769) list_chi_dic_pane_ParamLimits

0x47f2,	// (0x00022769) list_chi_dic_pane

0x480f,	// (0x00022786) list_chi_dic_pane_t1_ParamLimits

0x480f,	// (0x00022786) list_chi_dic_pane_t1

0xa0b4,	// (0x0002802b) list_highlight_pane_cp020

0xad98,	// (0x00028d0f) bg_cale_heading_pane_g1

0x4822,	// (0x00022799) bg_cale_heading_pane_g2

0x482a,	// (0x000227a1) bg_cale_heading_pane_g3

0x4832,	// (0x000227a9) bg_cale_heading_pane_g4

0x483c,	// (0x000227b3) bg_cale_heading_pane_g5

0x4846,	// (0x000227bd) bg_cale_heading_pane_g6

0x484e,	// (0x000227c5) bg_cale_heading_pane_g7

0x4856,	// (0x000227cd) bg_cale_heading_pane_g8

0x4860,	// (0x000227d7) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0002d326) bg_cale_heading_pane_g

0xad98,	// (0x00028d0f) bg_cale_side_pane_g1

0x486a,	// (0x000227e1) bg_cale_side_pane_g2

0x4874,	// (0x000227eb) bg_cale_side_pane_g3

0x487e,	// (0x000227f5) bg_cale_side_pane_g4

0x4888,	// (0x000227ff) bg_cale_side_pane_g5

0x4892,	// (0x00022809) bg_cale_side_pane_g6

0x489c,	// (0x00022813) bg_cale_side_pane_g7

0x48a6,	// (0x0002281d) bg_cale_side_pane_g8

0x48ae,	// (0x00022825) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0002d339) bg_cale_side_pane_g

0x48b6,	// (0x0002282d) popup_call_status_window_ParamLimits

0x48b6,	// (0x0002282d) popup_call_status_window

0xada0,	// (0x00028d17) stacon_top_pane

0xada8,	// (0x00028d1f) status_pane_ParamLimits

0xada8,	// (0x00028d1f) status_pane

0xadbd,	// (0x00028d34) status_small_pane

0xadc5,	// (0x00028d3c) control_pane

0xa0b4,	// (0x0002802b) stacon_bottom_pane

0xadcd,	// (0x00028d44) list_single_mce_smart_pane_t1_ParamLimits

0xadcd,	// (0x00028d44) list_single_mce_smart_pane_t1

0xade0,	// (0x00028d57) list_single_mce_smart_pane_t2_ParamLimits

0xade0,	// (0x00028d57) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0002d34c) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0002d34c) list_single_mce_smart_pane_t

0x48c2,	// (0x00022839) compass_pane

0x48ce,	// (0x00022845) main_location2_pane_t1

0x48e2,	// (0x00022859) main_location2_pane_t2

0x48f6,	// (0x0002286d) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0002d351) main_location2_pane_t

0xadff,	// (0x00028d76) compass_pane_g1_ParamLimits

0xadff,	// (0x00028d76) compass_pane_g1

0x4940,	// (0x000228b7) compass_pane_t1

0x494f,	// (0x000228c6) compass_pane_t2

0x0005,

0xf3e3,	// (0x0002d35a) compass_pane_t

0x499a,	// (0x00022911) text_secondary_cp61

0xae13,	// (0x00028d8a) navi_pane_cams_g5

0xae36,	// (0x00028dad) navi_pane_im_t1

0xae44,	// (0x00028dbb) navi_pane_mp_g1_ParamLimits

0xae44,	// (0x00028dbb) navi_pane_mp_g1

0xae58,	// (0x00028dcf) navi_pane_mp_g2_ParamLimits

0xae58,	// (0x00028dcf) navi_pane_mp_g2

0xae64,	// (0x00028ddb) navi_pane_mp_g3_ParamLimits

0xae64,	// (0x00028ddb) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0002d36e) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0002d36e) navi_pane_mp_g

0xae70,	// (0x00028de7) navi_pane_mp_t1

0xae7e,	// (0x00028df5) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0002d375) navi_pane_mp_t

0xaeba,	// (0x00028e31) navi_pane_vt_g1

0xae70,	// (0x00028de7) navi_pane_vt_t1

0xaec2,	// (0x00028e39) navi_slider_pane

0xaeca,	// (0x00028e41) zooming_pane

0xaed2,	// (0x00028e49) navi_slider_pane_g1

0x150c,	// (0x0001f483) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0002d37c) navi_slider_pane_g

0xaef6,	// (0x00028e6d) aid_levels_zoom

0xaefe,	// (0x00028e75) zooming_pane_g1

0xaf06,	// (0x00028e7d) zooming_pane_g2

0xaf06,	// (0x00028e7d) zooming_pane_g3

0x0002,

0xf414,	// (0x0002d38b) zooming_pane_g

0xaf0e,	// (0x00028e85) level_10_zoom

0xaf17,	// (0x00028e8e) level_11_zoom

0xaf20,	// (0x00028e97) level_1_zoom

0xaf29,	// (0x00028ea0) level_2_zoom

0xaf32,	// (0x00028ea9) level_3_zoom

0xaf3b,	// (0x00028eb2) level_4_zoom

0xaf44,	// (0x00028ebb) level_5_zoom

0xaf4d,	// (0x00028ec4) level_6_zoom

0xaf56,	// (0x00028ecd) level_7_zoom

0xaf5f,	// (0x00028ed6) level_8_zoom

0xaf68,	// (0x00028edf) level_9_zoom

0xaf79,	// (0x00028ef0) popup_phob_thumbnail_window_g1

0xaf81,	// (0x00028ef8) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0002d392) popup_phob_thumbnail_window_g

0xc2bb,	// (0x0002a232) level_1_location

0xc2c3,	// (0x0002a23a) level_2_location

0xc2cb,	// (0x0002a242) level_3_location

0xc2d3,	// (0x0002a24a) level_4_location

0xaeca,	// (0x00028e41) level_5_location

0x4acf,	// (0x00022a46) mce_icon_pane_g1

0x4ad7,	// (0x00022a4e) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0002d397) mce_icon_pane_g

0x4adf,	// (0x00022a56) main_mup_pane_g1_ParamLimits

0x4adf,	// (0x00022a56) main_mup_pane_g1

0x4af7,	// (0x00022a6e) main_mup_pane_g2_ParamLimits

0x4af7,	// (0x00022a6e) main_mup_pane_g2

0x4b13,	// (0x00022a8a) main_mup_pane_g3_ParamLimits

0x4b13,	// (0x00022a8a) main_mup_pane_g3

0x4b2f,	// (0x00022aa6) main_mup_pane_g4_ParamLimits

0x4b2f,	// (0x00022aa6) main_mup_pane_g4

0x4b4b,	// (0x00022ac2) main_mup_pane_g5_ParamLimits

0x4b4b,	// (0x00022ac2) main_mup_pane_g5

0x4b6c,	// (0x00022ae3) main_mup_pane_g6_ParamLimits

0x4b6c,	// (0x00022ae3) main_mup_pane_g6

0x4b88,	// (0x00022aff) main_mup_pane_g7_ParamLimits

0x4b88,	// (0x00022aff) main_mup_pane_g7

0x4ba4,	// (0x00022b1b) main_mup_pane_g8_ParamLimits

0x4ba4,	// (0x00022b1b) main_mup_pane_g8

0x4bc0,	// (0x00022b37) main_mup_pane_g9_ParamLimits

0x4bc0,	// (0x00022b37) main_mup_pane_g9

0x4bdf,	// (0x00022b56) main_mup_pane_g10_ParamLimits

0x4bdf,	// (0x00022b56) main_mup_pane_g10

0x4bfe,	// (0x00022b75) main_mup_pane_g11_ParamLimits

0x4bfe,	// (0x00022b75) main_mup_pane_g11

0x4c16,	// (0x00022b8d) main_mup_pane_g12_ParamLimits

0x4c16,	// (0x00022b8d) main_mup_pane_g12

0x4c24,	// (0x00022b9b) main_mup_pane_g13_ParamLimits

0x4c24,	// (0x00022b9b) main_mup_pane_g13

0x000c,

0xf425,	// (0x0002d39c) main_mup_pane_g_ParamLimits

0xf425,	// (0x0002d39c) main_mup_pane_g

0x4c3a,	// (0x00022bb1) main_mup_pane_t1_ParamLimits

0x4c3a,	// (0x00022bb1) main_mup_pane_t1

0x4c57,	// (0x00022bce) main_mup_pane_t2_ParamLimits

0x4c57,	// (0x00022bce) main_mup_pane_t2

0x4c71,	// (0x00022be8) main_mup_pane_t3_ParamLimits

0x4c71,	// (0x00022be8) main_mup_pane_t3

0x4c8b,	// (0x00022c02) main_mup_pane_t4_ParamLimits

0x4c8b,	// (0x00022c02) main_mup_pane_t4

0x4c9d,	// (0x00022c14) main_mup_pane_t5_ParamLimits

0x4c9d,	// (0x00022c14) main_mup_pane_t5

0x4caf,	// (0x00022c26) main_mup_pane_t6_ParamLimits

0x4caf,	// (0x00022c26) main_mup_pane_t6

0x0005,

0xf440,	// (0x0002d3b7) main_mup_pane_t_ParamLimits

0xf440,	// (0x0002d3b7) main_mup_pane_t

0x4cc5,	// (0x00022c3c) mup_progress_pane_ParamLimits

0x4cc5,	// (0x00022c3c) mup_progress_pane

0x4cd1,	// (0x00022c48) mup_visualizer_pane_ParamLimits

0x4cd1,	// (0x00022c48) mup_visualizer_pane

0x4d0f,	// (0x00022c86) mup_volume_pane_ParamLimits

0x4d0f,	// (0x00022c86) mup_volume_pane

0xabcb,	// (0x00028b42) mup_visualizer_pane_g1_ParamLimits

0xabcb,	// (0x00028b42) mup_visualizer_pane_g1

0xabcb,	// (0x00028b42) mup_visualizer_pane_g2_ParamLimits

0xabcb,	// (0x00028b42) mup_visualizer_pane_g2

0xadff,	// (0x00028d76) mup_visualizer_pane_g3_ParamLimits

0xadff,	// (0x00028d76) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0002d3c4) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0002d3c4) mup_visualizer_pane_g

0xa456,	// (0x000283cd) mup_volume_pane_g1

0xaf91,	// (0x00028f08) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0002d3cb) mup_volume_pane_g

0xa456,	// (0x000283cd) mup_progress_pane_g1

0xaf9a,	// (0x00028f11) mup_progress_pane_g2

0xafa3,	// (0x00028f1a) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0002d3d0) mup_progress_pane_g

0xa0b4,	// (0x0002802b) bg_popup_window_pane_cp05

0xafac,	// (0x00028f23) heading_pane_cp02_ParamLimits

0xafac,	// (0x00028f23) heading_pane_cp02

0xafc6,	// (0x00028f3d) list_popup_blid_pane

0xafce,	// (0x00028f45) list_blid_sat_info_pane_ParamLimits

0xafce,	// (0x00028f45) list_blid_sat_info_pane

0xafe1,	// (0x00028f58) list_blid_sat_info_pane_g1

0xafe9,	// (0x00028f60) list_blid_sat_info_pane_t1

0x4e1a,	// (0x00022d91) mup_equalizer_pane_ParamLimits

0x4e1a,	// (0x00022d91) mup_equalizer_pane

0x4e3b,	// (0x00022db2) mup_equalizer_pane_cp1_ParamLimits

0x4e3b,	// (0x00022db2) mup_equalizer_pane_cp1

0x4e5c,	// (0x00022dd3) mup_equalizer_pane_cp2_ParamLimits

0x4e5c,	// (0x00022dd3) mup_equalizer_pane_cp2

0x4e7d,	// (0x00022df4) mup_equalizer_pane_cp3_ParamLimits

0x4e7d,	// (0x00022df4) mup_equalizer_pane_cp3

0x4e9e,	// (0x00022e15) mup_equalizer_pane_cp4_ParamLimits

0x4e9e,	// (0x00022e15) mup_equalizer_pane_cp4

0x4ebf,	// (0x00022e36) mup_equalizer_pane_cp5

0x4ed5,	// (0x00022e4c) mup_equalizer_pane_cp6

0x4eed,	// (0x00022e64) mup_equalizer_pane_cp7

0xc1d9,	// (0x0002a150) bg_popup_call_poc_act_pane_g9

0xc1e1,	// (0x0002a158) bg_popup_call_poc_act_pane_g10

0xc1e9,	// (0x0002a160) bg_popup_call_poc_act_pane_g11

0x000a,

0xa30f,	// (0x00028286) mup_scale_pane

0xa456,	// (0x000283cd) mup_scale_pane_g1

0xaff7,	// (0x00028f6e) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0002d3ec) mup_scale_pane_g

0xb01b,	// (0x00028f92) msg_data_pane

0xb023,	// (0x00028f9a) scroll_pane_cp017

0x4f17,	// (0x00022e8e) bg_list_pane_cp04_ParamLimits

0x4f17,	// (0x00022e8e) bg_list_pane_cp04

0xb02b,	// (0x00028fa2) msg_data_pane_g1

0x4f37,	// (0x00022eae) msg_data_pane_g2

0x47b6,	// (0x0002272d) msg_data_pane_g3

0x4f3f,	// (0x00022eb6) msg_data_pane_g4

0x4f47,	// (0x00022ebe) msg_data_pane_g5

0x4f4f,	// (0x00022ec6) msg_data_pane_g6

0x4f57,	// (0x00022ece) msg_data_pane_g7

0x0006,

0xf484,	// (0x0002d3fb) msg_data_pane_g

0x4f5f,	// (0x00022ed6) msg_text_pane_ParamLimits

0x4f5f,	// (0x00022ed6) msg_text_pane

0x4fa7,	// (0x00022f1e) qrid_highlight_pane_cp011_ParamLimits

0x4fa7,	// (0x00022f1e) qrid_highlight_pane_cp011

0xa0b4,	// (0x0002802b) msg_body_pane

0xa0b4,	// (0x0002802b) msg_header_pane

0xb033,	// (0x00028faa) input_focus_pane_cp07

0xb048,	// (0x00028fbf) msg_header_pane_t1_ParamLimits

0xb048,	// (0x00028fbf) msg_header_pane_t1

0xb05a,	// (0x00028fd1) msg_header_pane_t2_ParamLimits

0xb05a,	// (0x00028fd1) msg_header_pane_t2

0x0001,

0xf498,	// (0x0002d40f) msg_header_pane_t_ParamLimits

0xf498,	// (0x0002d40f) msg_header_pane_t

0xb078,	// (0x00028fef) msg_body_pane_g1

0x4fda,	// (0x00022f51) msg_body_pane_t1_ParamLimits

0x4fda,	// (0x00022f51) msg_body_pane_t1

0xb080,	// (0x00028ff7) msg_body_pane_t2_ParamLimits

0xb080,	// (0x00028ff7) msg_body_pane_t2

0xb092,	// (0x00029009) msg_body_pane_t3_ParamLimits

0xb092,	// (0x00029009) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0002d414) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0002d414) msg_body_pane_t

0x154e,	// (0x0001f4c5) main_viewer_pane_g1_ParamLimits

0x154e,	// (0x0001f4c5) main_viewer_pane_g1

0x155a,	// (0x0001f4d1) main_viewer_pane_g2_ParamLimits

0x155a,	// (0x0001f4d1) main_viewer_pane_g2

0x502d,	// (0x00022fa4) main_viewer_pane_g3_ParamLimits

0x502d,	// (0x00022fa4) main_viewer_pane_g3

0x503e,	// (0x00022fb5) main_viewer_pane_g4_ParamLimits

0x503e,	// (0x00022fb5) main_viewer_pane_g4

0x1566,	// (0x0001f4dd) main_viewer_pane_g5_ParamLimits

0x1566,	// (0x0001f4dd) main_viewer_pane_g5

0x1566,	// (0x0001f4dd) main_viewer_pane_g7_ParamLimits

0x1566,	// (0x0001f4dd) main_viewer_pane_g7

0xaa68,	// (0x000289df) main_viewer_pane_g8_ParamLimits

0xaa68,	// (0x000289df) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0002d424) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0002d424) main_viewer_pane_g

0xb0a4,	// (0x0002901b) viewer_content_pane_ParamLimits

0xb0a4,	// (0x0002901b) viewer_content_pane

0x506f,	// (0x00022fe6) main_postcard_pane_g1_ParamLimits

0x506f,	// (0x00022fe6) main_postcard_pane_g1

0x507d,	// (0x00022ff4) main_postcard_pane_g2_ParamLimits

0x507d,	// (0x00022ff4) main_postcard_pane_g2

0x508b,	// (0x00023002) main_postcard_pane_g3_ParamLimits

0x508b,	// (0x00023002) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0002d435) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0002d435) main_postcard_pane_g

0x509b,	// (0x00023012) main_postcard_pane_g4

0xc3bb,	// (0x0002a332) smil_status_volume_pane_g2

0x50c7,	// (0x0002303e) postcard_pane_ParamLimits

0x50c7,	// (0x0002303e) postcard_pane

0xabcb,	// (0x00028b42) postcard_pane_g1_ParamLimits

0xabcb,	// (0x00028b42) postcard_pane_g1

0x50f9,	// (0x00023070) postcard_pane_g2_ParamLimits

0x50f9,	// (0x00023070) postcard_pane_g2

0x5105,	// (0x0002307c) postcard_pane_g3_ParamLimits

0x5105,	// (0x0002307c) postcard_pane_g3

0xb0b2,	// (0x00029029) postcard_pane_g4_ParamLimits

0xb0b2,	// (0x00029029) postcard_pane_g4

0x5111,	// (0x00023088) postcard_pane_g5_ParamLimits

0x5111,	// (0x00023088) postcard_pane_g5

0x511d,	// (0x00023094) postcard_pane_g6_ParamLimits

0x511d,	// (0x00023094) postcard_pane_g6

0xb0c0,	// (0x00029037) postcard_pane_g7_ParamLimits

0xb0c0,	// (0x00029037) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0002d442) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0002d442) postcard_pane_g

0x5129,	// (0x000230a0) main_mp2_pane_g1_ParamLimits

0x5129,	// (0x000230a0) main_mp2_pane_g1

0x5135,	// (0x000230ac) main_mp2_pane_g2_ParamLimits

0x5135,	// (0x000230ac) main_mp2_pane_g2

0x5141,	// (0x000230b8) main_mp2_pane_g3_ParamLimits

0x5141,	// (0x000230b8) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0002d451) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0002d451) main_mp2_pane_g

0x514d,	// (0x000230c4) main_mp2_pane_t1_ParamLimits

0x514d,	// (0x000230c4) main_mp2_pane_t1

0x5164,	// (0x000230db) main_mp2_pane_t2_ParamLimits

0x5164,	// (0x000230db) main_mp2_pane_t2

0x5176,	// (0x000230ed) main_mp2_pane_t3_ParamLimits

0x5176,	// (0x000230ed) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0002d458) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0002d458) main_mp2_pane_t

0xb0ce,	// (0x00029045) pec_content_pane_ParamLimits

0xb0ce,	// (0x00029045) pec_content_pane

0xa77b,	// (0x000286f2) scroll_pane_cp015

0xb0e0,	// (0x00029057) pec_attribute_pane_ParamLimits

0xb0e0,	// (0x00029057) pec_attribute_pane

0x5188,	// (0x000230ff) pec_content_pane_g1_ParamLimits

0x5188,	// (0x000230ff) pec_content_pane_g1

0xb0f0,	// (0x00029067) pec_content_pane_t1_ParamLimits

0xb0f0,	// (0x00029067) pec_content_pane_t1

0xb102,	// (0x00029079) pec_content_pane_t2_ParamLimits

0xb102,	// (0x00029079) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0002d45f) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0002d45f) pec_content_pane_t

0x5194,	// (0x0002310b) list_single_graphic_pane_cp01_ParamLimits

0x5194,	// (0x0002310b) list_single_graphic_pane_cp01

0xa30f,	// (0x00028286) bg_popup_sub_pane_cp04

0xb114,	// (0x0002908b) popup_mup_playback_window_g1

0xb120,	// (0x00029097) popup_mup_playback_window_t1

0xb135,	// (0x000290ac) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0002d464) popup_mup_playback_window_t

0xb16c,	// (0x000290e3) main_image_pane_g1_ParamLimits

0xb16c,	// (0x000290e3) main_image_pane_g1

0xb1af,	// (0x00029126) scroll_pane_cp018_ParamLimits

0xb1af,	// (0x00029126) scroll_pane_cp018

0xb1c7,	// (0x0002913e) scroll_pane_cp016_ParamLimits

0xb1c7,	// (0x0002913e) scroll_pane_cp016

0x5234,	// (0x000231ab) smil2_image_pane_ParamLimits

0x5234,	// (0x000231ab) smil2_image_pane

0x5268,	// (0x000231df) smil2_root_pane_ParamLimits

0x5268,	// (0x000231df) smil2_root_pane

0x5294,	// (0x0002320b) smil2_text_pane_ParamLimits

0x5294,	// (0x0002320b) smil2_text_pane

0xa0b4,	// (0x0002802b) bg_list_pane_cp06

0xb203,	// (0x0002917a) grid_radio_pane

0xa0b4,	// (0x0002802b) bg_popup_window_pane_cp06

0xb20b,	// (0x00029182) main_fmradio_pane_t1

0xac42,	// (0x00028bb9) heading_pane_cp04

0xb219,	// (0x00029190) main_fmradio_pane_t2

0xc1f1,	// (0x0002a168) popup_cale_lunar_info_window_g1

0xb227,	// (0x0002919e) main_fmradio_pane_t3

0xc1f9,	// (0x0002a170) popup_cale_lunar_info_window_g2

0xb235,	// (0x000291ac) main_fmradio_pane_t4

0x0001,

0xb243,	// (0x000291ba) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0002d53f) popup_cale_lunar_info_window_g

0xf502,	// (0x0002d479) main_fmradio_pane_t

0xb251,	// (0x000291c8) wait_bar_pane_cp03

0xb259,	// (0x000291d0) cell_fmradio_pane_ParamLimits

0xb259,	// (0x000291d0) cell_fmradio_pane

0xb0c0,	// (0x00029037) cell_fmradio_pane_g1_ParamLimits

0xb0c0,	// (0x00029037) cell_fmradio_pane_g1

0xa0b4,	// (0x0002802b) grid_highlight_pane_cp011

0xb26c,	// (0x000291e3) poc_content_pane_ParamLimits

0xb26c,	// (0x000291e3) poc_content_pane

0xb27e,	// (0x000291f5) scroll_pane_cp019

0x52d4,	// (0x0002324b) popup_call_poc_act_window_ParamLimits

0x52d4,	// (0x0002324b) popup_call_poc_act_window

0x52e1,	// (0x00023258) popup_call_poc_inact_window_ParamLimits

0x52e1,	// (0x00023258) popup_call_poc_inact_window

0xf59f,	// (0x0002d516) bg_popup_call_poc_act_pane_g

0xc169,	// (0x0002a0e0) bg_popup_call_poc_inact_pane_g1

0xc171,	// (0x0002a0e8) bg_popup_call_poc_inact_pane_g2

0xb286,	// (0x000291fd) popup_call_poc_act_window_g2

0xc179,	// (0x0002a0f0) bg_popup_call_poc_inact_pane_g3

0xc181,	// (0x0002a0f8) bg_popup_call_poc_inact_pane_g4

0xc189,	// (0x0002a100) bg_popup_call_poc_inact_pane_g5

0xb28e,	// (0x00029205) popup_call_poc_act_window_t1_ParamLimits

0xb28e,	// (0x00029205) popup_call_poc_act_window_t1

0xb2b6,	// (0x0002922d) popup_call_poc_act_window_t2_ParamLimits

0xb2b6,	// (0x0002922d) popup_call_poc_act_window_t2

0xb2de,	// (0x00029255) popup_call_poc_act_window_t3_ParamLimits

0xb2de,	// (0x00029255) popup_call_poc_act_window_t3

0xb306,	// (0x0002927d) popup_call_poc_act_window_t4_ParamLimits

0xb306,	// (0x0002927d) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0002d484) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0002d484) popup_call_poc_act_window_t

0xc191,	// (0x0002a108) bg_popup_call_poc_inact_pane_g6

0xc199,	// (0x0002a110) bg_popup_call_poc_inact_pane_g7

0xc1a1,	// (0x0002a118) bg_popup_call_poc_inact_pane_g8

0xb318,	// (0x0002928f) popup_call_poc_inact_window_g2

0xc1a9,	// (0x0002a120) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0002d503) bg_popup_call_poc_inact_pane_g

0xb320,	// (0x00029297) popup_call_poc_inact_window_t1_ParamLimits

0xb320,	// (0x00029297) popup_call_poc_inact_window_t1

0xb335,	// (0x000292ac) popup_call_poc_inact_window_t2_ParamLimits

0xb335,	// (0x000292ac) popup_call_poc_inact_window_t2

0xb34a,	// (0x000292c1) popup_call_poc_inact_window_t3_ParamLimits

0xb34a,	// (0x000292c1) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0002d48d) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0002d48d) popup_call_poc_inact_window_t

0xc32e,	// (0x0002a2a5) context_pane_ParamLimits

0x5795,	// (0x0002370c) signal_pane_ParamLimits

0xaeca,	// (0x00028e41) main_call2_pane

0x16b7,	// (0x0001f62e) popup_phob_thumbnail2_window_ParamLimits

0x16b7,	// (0x0001f62e) popup_phob_thumbnail2_window

0x151e,	// (0x0001f495) aid_hotspot_pointer_arrow_pane

0x1526,	// (0x0001f49d) aid_hotspot_pointer_hand_pane

0x5607,	// (0x0002357e) phob_pre_status_pane_g5

0x2f8f,	// (0x00020f06) cams_zoom_pane_ParamLimits

0x2f9b,	// (0x00020f12) image_vga_pane_ParamLimits

0x2faa,	// (0x00020f21) main_camera_pane_g1_ParamLimits

0x2fb8,	// (0x00020f2f) main_camera_pane_g2_ParamLimits

0x2fc4,	// (0x00020f3b) main_camera_pane_g3_ParamLimits

0x2fd0,	// (0x00020f47) main_camera_pane_g4_ParamLimits

0x2fdc,	// (0x00020f53) main_camera_pane_g5_ParamLimits

0x2fe8,	// (0x00020f5f) main_camera_pane_g6_ParamLimits

0x2ff4,	// (0x00020f6b) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0002d18c) main_camera_pane_g_ParamLimits

0x3000,	// (0x00020f77) main_camera_pane_t1_ParamLimits

0x3012,	// (0x00020f89) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0002d19d) main_camera_pane_t_ParamLimits

0xa30f,	// (0x00028286) bg_popup_preview_window_pane_cp01_ParamLimits

0xa30f,	// (0x00028286) bg_popup_preview_window_pane_cp01

0xb35f,	// (0x000292d6) popup_phob_thumbnail2_window_g1_ParamLimits

0xb35f,	// (0x000292d6) popup_phob_thumbnail2_window_g1

0xa0b4,	// (0x0002802b) call2_cli_visual_pane

0x52fd,	// (0x00023274) popup_call2_audio_conf_window_ParamLimits

0x52fd,	// (0x00023274) popup_call2_audio_conf_window

0x5312,	// (0x00023289) popup_call2_audio_first_window_ParamLimits

0x5312,	// (0x00023289) popup_call2_audio_first_window

0x53b0,	// (0x00023327) popup_call2_audio_in_window_ParamLimits

0x53b0,	// (0x00023327) popup_call2_audio_in_window

0x53f2,	// (0x00023369) popup_call2_audio_out_window_ParamLimits

0x53f2,	// (0x00023369) popup_call2_audio_out_window

0x5454,	// (0x000233cb) popup_call2_audio_second_window_ParamLimits

0x5454,	// (0x000233cb) popup_call2_audio_second_window

0x54b2,	// (0x00023429) popup_call2_audio_wait_window_ParamLimits

0x54b2,	// (0x00023429) popup_call2_audio_wait_window

0xa0b4,	// (0x0002802b) bg_popup_call2_act_pane_cp03

0xa2f1,	// (0x00028268) list_conf_pane_cp

0xb36b,	// (0x000292e2) popup_call2_audio_conf_window_t1

0xb379,	// (0x000292f0) list_single_graphic_popup_conf2_pane_ParamLimits

0xb379,	// (0x000292f0) list_single_graphic_popup_conf2_pane

0xacd6,	// (0x00028c4d) list_highlight_pane_cp04

0xb38c,	// (0x00029303) list_single_graphic_popup_conf2_pane_g1

0xace7,	// (0x00028c5e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0002d494) list_single_graphic_popup_conf2_pane_g

0xb396,	// (0x0002930d) list_single_graphic_popup_conf2_pane_t1

0xb3a4,	// (0x0002931b) bg_popup_call2_act_pane_cp01_ParamLimits

0xb3a4,	// (0x0002931b) bg_popup_call2_act_pane_cp01

0xb42e,	// (0x000293a5) call_type_pane_cp05_ParamLimits

0xb42e,	// (0x000293a5) call_type_pane_cp05

0xb482,	// (0x000293f9) popup_call2_audio_second_window_g1_ParamLimits

0xb482,	// (0x000293f9) popup_call2_audio_second_window_g1

0xb4d6,	// (0x0002944d) popup_call2_audio_second_window_g2_ParamLimits

0xb4d6,	// (0x0002944d) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0002d499) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0002d499) popup_call2_audio_second_window_g

0xb53b,	// (0x000294b2) popup_call2_audio_second_window_t1_ParamLimits

0xb53b,	// (0x000294b2) popup_call2_audio_second_window_t1

0xb5f6,	// (0x0002956d) popup_call2_audio_second_window_t2_ParamLimits

0xb5f6,	// (0x0002956d) popup_call2_audio_second_window_t2

0xb649,	// (0x000295c0) popup_call2_audio_second_window_t3_ParamLimits

0xb649,	// (0x000295c0) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0002d4a0) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0002d4a0) popup_call2_audio_second_window_t

0xa0b4,	// (0x0002802b) bg_popup_call2_in_pane_cp02

0xa0be,	// (0x00028035) call_type_pane_cp04

0xa0c6,	// (0x0002803d) popup_call2_audio_wait_window_g1

0xa0ce,	// (0x00028045) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0002d079) popup_call2_audio_wait_window_g

0xa0d6,	// (0x0002804d) popup_call2_audio_wait_window_t3

0xb73c,	// (0x000296b3) bg_popup_call2_act_pane_ParamLimits

0xb73c,	// (0x000296b3) bg_popup_call2_act_pane

0xb7fc,	// (0x00029773) call_type_pane_cp03_ParamLimits

0xb7fc,	// (0x00029773) call_type_pane_cp03

0xb860,	// (0x000297d7) popup_call2_audio_first_window_g1_ParamLimits

0xb860,	// (0x000297d7) popup_call2_audio_first_window_g1

0xb8d0,	// (0x00029847) popup_call2_audio_first_window_g2_ParamLimits

0xb8d0,	// (0x00029847) popup_call2_audio_first_window_g2

0xabcb,	// (0x00028b42) popup_call2_audio_first_window_g3_ParamLimits

0xabcb,	// (0x00028b42) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0002d4a9) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0002d4a9) popup_call2_audio_first_window_g

0xb9ae,	// (0x00029925) popup_call2_audio_first_window_t1_ParamLimits

0xb9ae,	// (0x00029925) popup_call2_audio_first_window_t1

0xbab1,	// (0x00029a28) popup_call2_audio_first_window_t4_ParamLimits

0xbab1,	// (0x00029a28) popup_call2_audio_first_window_t4

0xbb94,	// (0x00029b0b) popup_call2_audio_first_window_t5_ParamLimits

0xbb94,	// (0x00029b0b) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0002d4b4) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0002d4b4) popup_call2_audio_first_window_t

0xa307,	// (0x0002827e) bg_popup_call2_act_pane_g1

0xc201,	// (0x0002a178) popup_cale_lunar_info_window_t1

0xc20f,	// (0x0002a186) popup_cale_lunar_info_window_t2

0xc21d,	// (0x0002a194) popup_cale_lunar_info_window_t3

0xa0b4,	// (0x0002802b) bg_popup_call2_bubble_pane

0xbc95,	// (0x00029c0c) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc95,	// (0x00029c0c) bg_popup_call2_in_pane_cp01

0x9d90,	// (0x00027d07) call_type_pane_cp02

0xbcdd,	// (0x00029c54) popup_call2_audio_out_window_g1_ParamLimits

0xbcdd,	// (0x00029c54) popup_call2_audio_out_window_g1

0xbd09,	// (0x00029c80) popup_call2_audio_out_window_g2_ParamLimits

0xbd09,	// (0x00029c80) popup_call2_audio_out_window_g2

0xbd31,	// (0x00029ca8) popup_call2_audio_out_window_g3_ParamLimits

0xbd31,	// (0x00029ca8) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0002d4bd) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0002d4bd) popup_call2_audio_out_window_g

0xbd6c,	// (0x00029ce3) popup_call2_audio_out_window_t1_ParamLimits

0xbd6c,	// (0x00029ce3) popup_call2_audio_out_window_t1

0xbdcb,	// (0x00029d42) popup_call2_audio_out_window_t2_ParamLimits

0xbdcb,	// (0x00029d42) popup_call2_audio_out_window_t2

0xbe1f,	// (0x00029d96) popup_call2_audio_out_window_t3_ParamLimits

0xbe1f,	// (0x00029d96) popup_call2_audio_out_window_t3

0xbe35,	// (0x00029dac) popup_call2_audio_out_window_t4_ParamLimits

0xbe35,	// (0x00029dac) popup_call2_audio_out_window_t4

0xbe4b,	// (0x00029dc2) popup_call2_audio_out_window_t5_ParamLimits

0xbe4b,	// (0x00029dc2) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0002d4c6) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0002d4c6) popup_call2_audio_out_window_t

0xbeaf,	// (0x00029e26) bg_popup_call2_in_pane_ParamLimits

0xbeaf,	// (0x00029e26) bg_popup_call2_in_pane

0xbf0b,	// (0x00029e82) popup_call2_audio_in_window_g1_ParamLimits

0xbf0b,	// (0x00029e82) popup_call2_audio_in_window_g1

0xbf43,	// (0x00029eba) popup_call2_audio_in_window_g2_ParamLimits

0xbf43,	// (0x00029eba) popup_call2_audio_in_window_g2

0xbf7b,	// (0x00029ef2) popup_call2_audio_in_window_g3_ParamLimits

0xbf7b,	// (0x00029ef2) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0002d4d3) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0002d4d3) popup_call2_audio_in_window_g

0xbfd3,	// (0x00029f4a) popup_call2_audio_in_window_t1_ParamLimits

0xbfd3,	// (0x00029f4a) popup_call2_audio_in_window_t1

0xc053,	// (0x00029fca) popup_call2_audio_in_window_t2_ParamLimits

0xc053,	// (0x00029fca) popup_call2_audio_in_window_t2

0xc0d3,	// (0x0002a04a) popup_call2_audio_in_window_t3_ParamLimits

0xc0d3,	// (0x0002a04a) popup_call2_audio_in_window_t3

0xc0ed,	// (0x0002a064) popup_call2_audio_in_window_t4_ParamLimits

0xc0ed,	// (0x0002a064) popup_call2_audio_in_window_t4

0xc0ff,	// (0x0002a076) popup_call2_audio_in_window_t5_ParamLimits

0xc0ff,	// (0x0002a076) popup_call2_audio_in_window_t5

0xc114,	// (0x0002a08b) popup_call2_audio_in_window_t6_ParamLimits

0xc114,	// (0x0002a08b) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0002d4dc) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0002d4dc) popup_call2_audio_in_window_t

0xa307,	// (0x0002827e) bg_popup_call2_in_pane_g1

0xc22b,	// (0x0002a1a2) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0002d544) popup_cale_lunar_info_window_t

0xa30f,	// (0x00028286) bg_popup_call2_rect_pane_ParamLimits

0xa30f,	// (0x00028286) bg_popup_call2_rect_pane

0xa0b4,	// (0x0002802b) call2_cli_visual_graphic_pane

0xa0b4,	// (0x0002802b) call2_cli_visual_text_pane

0x1706,	// (0x0001f67d) smil_status_volume_pane_g3

0x0002,

0xa456,	// (0x000283cd) call2_cli_visual_graphic_pane_g1

0xa456,	// (0x000283cd) call2_cli_visual_graphic_pane_g2

0xa456,	// (0x000283cd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0002d4e9) call2_cli_visual_graphic_pane_g

0xc129,	// (0x0002a0a0) bg_popup_call2_rect_pane_g1

0xa4f4,	// (0x0002846b) bg_popup_call2_rect_pane_g2

0xc131,	// (0x0002a0a8) bg_popup_call2_rect_pane_g3

0xc139,	// (0x0002a0b0) bg_popup_call2_rect_pane_g4

0xc141,	// (0x0002a0b8) bg_popup_call2_rect_pane_g5

0xc149,	// (0x0002a0c0) bg_popup_call2_rect_pane_g6

0xc151,	// (0x0002a0c8) bg_popup_call2_rect_pane_g7

0xc159,	// (0x0002a0d0) bg_popup_call2_rect_pane_g8

0xc161,	// (0x0002a0d8) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0002d4f0) bg_popup_call2_rect_pane_g

0xc169,	// (0x0002a0e0) bg_popup_call2_bubble_pane_g1

0xc171,	// (0x0002a0e8) bg_popup_call2_bubble_pane_g2

0xc179,	// (0x0002a0f0) bg_popup_call2_bubble_pane_g3

0xc181,	// (0x0002a0f8) bg_popup_call2_bubble_pane_g4

0xc189,	// (0x0002a100) bg_popup_call2_bubble_pane_g5

0xc191,	// (0x0002a108) bg_popup_call2_bubble_pane_g6

0xc199,	// (0x0002a110) bg_popup_call2_bubble_pane_g7

0xc1a1,	// (0x0002a118) bg_popup_call2_bubble_pane_g8

0xc1a9,	// (0x0002a120) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0002d503) bg_popup_call2_bubble_pane_g

0x2b2f,	// (0x00020aa6) aid_cale_week_size_cell_pane

0x3024,	// (0x00020f9b) aid_cams_cif_uncrop_pane_ParamLimits

0x3024,	// (0x00020f9b) aid_cams_cif_uncrop_pane

0x317f,	// (0x000210f6) aid_cams_size_cell_ParamLimits

0x317f,	// (0x000210f6) aid_cams_size_cell

0x318b,	// (0x00021102) grid_cams_pane_ParamLimits

0x3199,	// (0x00021110) linegrid_cams_pane_ParamLimits

0x3384,	// (0x000212fb) call_video_pane_t1

0x33a5,	// (0x0002131c) call_video_pane_t2

0x0001,

0xf279,	// (0x0002d1f0) call_video_pane_t

0x3914,	// (0x0002188b) aid_cale_month_size_cell_pane_ParamLimits

0x3914,	// (0x0002188b) aid_cale_month_size_cell_pane

0xf616,	// (0x0002d58d) smil_status_volume_pane_g

0x1713,	// (0x0001f68a) volume_smil_pane_ParamLimits

0x0e47,	// (0x0001edbe) aid_popup2_width_pane

0x2a5d,	// (0x000209d4) cell_qdial_pane_g4_ParamLimits

0x2a5d,	// (0x000209d4) cell_qdial_pane_g4

0x491c,	// (0x00022893) aid_blid_cardinal_pane_ParamLimits

0x492c,	// (0x000228a3) aid_blid_destination_pane_ParamLimits

0x492c,	// (0x000228a3) aid_blid_destination_pane

0xa30f,	// (0x00028286) bg_popup_call_poc_act_pane_ParamLimits

0xa30f,	// (0x00028286) bg_popup_call_poc_act_pane

0xa30f,	// (0x00028286) bg_popup_call_poc_inact_pane_ParamLimits

0xa30f,	// (0x00028286) bg_popup_call_poc_inact_pane

0xc1b1,	// (0x0002a128) bg_popup_call_poc_act_pane_g1

0xc1b9,	// (0x0002a130) bg_popup_call_poc_act_pane_g2

0xc1c1,	// (0x0002a138) bg_popup_call_poc_act_pane_g3

0xc181,	// (0x0002a0f8) bg_popup_call_poc_act_pane_g4

0xc189,	// (0x0002a100) bg_popup_call_poc_act_pane_g5

0xc1c9,	// (0x0002a140) bg_popup_call_poc_act_pane_g6

0xc199,	// (0x0002a110) bg_popup_call_poc_act_pane_g7

0xc1d1,	// (0x0002a148) bg_popup_call_poc_act_pane_g8

0xa0b4,	// (0x0002802b) main_usb_pane

0x15f0,	// (0x0001f567) popup_cale_lunar_info_window

0x36c4,	// (0x0002163b) im_reading_pane_t1_ParamLimits

0xa6d3,	// (0x0002864a) list_im_pane_ParamLimits

0xa6e4,	// (0x0002865b) scroll_pane_cp07_ParamLimits

0xa0b4,	// (0x0002802b) grid_highlight_pane_cp012

0xa30f,	// (0x00028286) mup_scale_pane_ParamLimits

0xabcb,	// (0x00028b42) main_usb_pane_g1_ParamLimits

0xabcb,	// (0x00028b42) main_usb_pane_g1

0x552a,	// (0x000234a1) main_usb_pane_g2_ParamLimits

0x552a,	// (0x000234a1) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0002d52d) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0002d52d) main_usb_pane_g

0x5536,	// (0x000234ad) main_usb_pane_t1_ParamLimits

0x5536,	// (0x000234ad) main_usb_pane_t1

0x5548,	// (0x000234bf) main_usb_pane_t2_ParamLimits

0x5548,	// (0x000234bf) main_usb_pane_t2

0x555a,	// (0x000234d1) main_usb_pane_t3_ParamLimits

0x555a,	// (0x000234d1) main_usb_pane_t3

0x556c,	// (0x000234e3) main_usb_pane_t4_ParamLimits

0x556c,	// (0x000234e3) main_usb_pane_t4

0x557e,	// (0x000234f5) main_usb_pane_t5_ParamLimits

0x557e,	// (0x000234f5) main_usb_pane_t5

0x5590,	// (0x00023507) main_usb_pane_t6_ParamLimits

0x5590,	// (0x00023507) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0002d532) main_usb_pane_t_ParamLimits

0x48c2,	// (0x00022839) aid_text_placing

0x48ce,	// (0x00022845) main_location2_pane_t1_ParamLimits

0x48e2,	// (0x00022859) main_location2_pane_t2_ParamLimits

0x48f6,	// (0x0002286d) main_location2_pane_t3_ParamLimits

0x490a,	// (0x00022881) main_location2_pane_t4_ParamLimits

0x490a,	// (0x00022881) main_location2_pane_t4

0xf3da,	// (0x0002d351) main_location2_pane_t_ParamLimits

0xa34b,	// (0x000282c2) find_pinb_pane_g2_ParamLimits

0xa34b,	// (0x000282c2) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0002d09f) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0002d09f) find_pinb_pane_g

0xa357,	// (0x000282ce) find_pinb_pane_t1_ParamLimits

0xa369,	// (0x000282e0) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0002d0a4) find_pinb_pane_t_ParamLimits

0xa0b4,	// (0x0002802b) main_call3_pane

0x3e88,	// (0x00021dff) cale_month_day_heading_pane_t1_ParamLimits

0x3f0e,	// (0x00021e85) cale_month_day_heading_pane_t2_ParamLimits

0x3f9f,	// (0x00021f16) cale_month_day_heading_pane_t3_ParamLimits

0x4030,	// (0x00021fa7) cale_month_day_heading_pane_t4_ParamLimits

0x40c1,	// (0x00022038) cale_month_day_heading_pane_t5_ParamLimits

0x4152,	// (0x000220c9) cale_month_day_heading_pane_t6_ParamLimits

0x41ef,	// (0x00022166) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0002d228) cale_month_day_heading_pane_t_ParamLimits

0xa92e,	// (0x000288a5) smil_status_volume_pane

0x50e1,	// (0x00023058) postcard_address_pane_ParamLimits

0x50e1,	// (0x00023058) postcard_address_pane

0x50ed,	// (0x00023064) postcard_message_pane_ParamLimits

0x50ed,	// (0x00023064) postcard_message_pane

0x54f1,	// (0x00023468) call2_cli_visual_pane_t1_ParamLimits

0x54f1,	// (0x00023468) call2_cli_visual_pane_t1

0x5983,	// (0x000238fa) postcard_message_pane_t1_ParamLimits

0x5983,	// (0x000238fa) postcard_message_pane_t1

0x596c,	// (0x000238e3) postcard_address_pane_t1_ParamLimits

0x596c,	// (0x000238e3) postcard_address_pane_t1

0x595d,	// (0x000238d4) popup_call3_audio_in_window_ParamLimits

0x595d,	// (0x000238d4) popup_call3_audio_in_window

0x5843,	// (0x000237ba) bg_popup_call3_in_pane_ParamLimits

0x5843,	// (0x000237ba) bg_popup_call3_in_pane

0x58a3,	// (0x0002381a) popup_call3_audio_in_window_g1_ParamLimits

0x58a3,	// (0x0002381a) popup_call3_audio_in_window_g1

0x58bb,	// (0x00023832) popup_call3_audio_in_window_g2_ParamLimits

0x58bb,	// (0x00023832) popup_call3_audio_in_window_g2

0x58d3,	// (0x0002384a) popup_call3_audio_in_window_g3_ParamLimits

0x58d3,	// (0x0002384a) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0002d594) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0002d594) popup_call3_audio_in_window_g

0x58fb,	// (0x00023872) popup_call3_audio_in_window_t1_ParamLimits

0x58fb,	// (0x00023872) popup_call3_audio_in_window_t1

0x5923,	// (0x0002389a) popup_call3_audio_in_window_t2_ParamLimits

0x5923,	// (0x0002389a) popup_call3_audio_in_window_t2

0x594b,	// (0x000238c2) popup_call3_audio_in_window_t3_ParamLimits

0x594b,	// (0x000238c2) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0002d59d) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0002d59d) popup_call3_audio_in_window_t

0xaeca,	// (0x00028e41) bg_popup_call3_rect_pane

0xc129,	// (0x0002a0a0) bg_popup_call3_rect_pane_g1

0xa4f4,	// (0x0002846b) bg_popup_call3_rect_pane_g2

0xc131,	// (0x0002a0a8) bg_popup_call3_rect_pane_g3

0xc139,	// (0x0002a0b0) bg_popup_call3_rect_pane_g4

0xc141,	// (0x0002a0b8) bg_popup_call3_rect_pane_g5

0xc149,	// (0x0002a0c0) bg_popup_call3_rect_pane_g6

0xc151,	// (0x0002a0c8) bg_popup_call3_rect_pane_g7

0x4d2a,	// (0x00022ca1) mup_visualizer_osc_pane

0xaf89,	// (0x00028f00) mup_visualizer_spec_pane

0x5863,	// (0x000237da) call3_video_qcif_pane_ParamLimits

0x5863,	// (0x000237da) call3_video_qcif_pane

0x5873,	// (0x000237ea) call3_video_qcif_uncrop_pane_ParamLimits

0x5873,	// (0x000237ea) call3_video_qcif_uncrop_pane

0x5881,	// (0x000237f8) call3_video_subqcif_pane_ParamLimits

0x5881,	// (0x000237f8) call3_video_subqcif_pane

0x5893,	// (0x0002380a) call3_video_subqcif_uncrop_pane_ParamLimits

0x5893,	// (0x0002380a) call3_video_subqcif_uncrop_pane

0x58eb,	// (0x00023862) popup_call3_audio_in_window_g4_ParamLimits

0x58eb,	// (0x00023862) popup_call3_audio_in_window_g4

0x5830,	// (0x000237a7) mup_spec_half_pane

0x5839,	// (0x000237b0) mup_spec_half_pane_cp

0xc38e,	// (0x0002a305) mup_osc_middle_pane

0xc397,	// (0x0002a30e) mup_visualizer_osc_pane_g1

0x5811,	// (0x00023788) mup_spec_bar_pane_ParamLimits

0x5811,	// (0x00023788) mup_spec_bar_pane

0xc37b,	// (0x0002a2f2) mup_spec_bar_pane_g1

0xc385,	// (0x0002a2fc) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0002d588) mup_spec_bar_pane_g

0x2b2f,	// (0x00020aa6) aid_cale_week_size_cell_pane_ParamLimits

0x2b44,	// (0x00020abb) bg_cale_heading_pane_ParamLimits

0xa531,	// (0x000284a8) bg_cale_pane_cp01_ParamLimits

0x2b66,	// (0x00020add) cale_week_corner_pane_ParamLimits

0x2b80,	// (0x00020af7) cale_week_day_heading_pane_ParamLimits

0x2ba2,	// (0x00020b19) cale_week_scroll_pane_g1_ParamLimits

0x2bbf,	// (0x00020b36) cale_week_scroll_pane_g2_ParamLimits

0x2bd2,	// (0x00020b49) cale_week_scroll_pane_g3_ParamLimits

0x2be5,	// (0x00020b5c) cale_week_scroll_pane_g4_ParamLimits

0x2bf8,	// (0x00020b6f) cale_week_scroll_pane_g5_ParamLimits

0x2c0b,	// (0x00020b82) cale_week_scroll_pane_g6_ParamLimits

0x2c1e,	// (0x00020b95) cale_week_scroll_pane_g7_ParamLimits

0x2c31,	// (0x00020ba8) cale_week_scroll_pane_g8_ParamLimits

0x2c46,	// (0x00020bbd) cale_week_scroll_pane_g9_ParamLimits

0x2c59,	// (0x00020bd0) cale_week_scroll_pane_g10_ParamLimits

0x2c6c,	// (0x00020be3) cale_week_scroll_pane_g11_ParamLimits

0x2c7f,	// (0x00020bf6) cale_week_scroll_pane_g12_ParamLimits

0x2c96,	// (0x00020c0d) cale_week_scroll_pane_g13_ParamLimits

0x2cb1,	// (0x00020c28) cale_week_scroll_pane_g14_ParamLimits

0x2ccc,	// (0x00020c43) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0002d130) cale_week_scroll_pane_g_ParamLimits

0x2ce7,	// (0x00020c5e) cale_week_time_pane_ParamLimits

0x2cfc,	// (0x00020c73) grid_cale_week_pane_ParamLimits

0xa54f,	// (0x000284c6) listscroll_cale_week_pane_t1

0xa561,	// (0x000284d8) scroll_pane_cp08_ParamLimits

0x397d,	// (0x000218f4) cale_month_corner_pane_ParamLimits

0xa904,	// (0x0002887b) cale_month_pane_t1

0x3e21,	// (0x00021d98) cale_month_week_pane_ParamLimits

0xabcb,	// (0x00028b42) popup_call_status_window_g1_ParamLimits

0x477b,	// (0x000226f2) popup_call_status_window_g2_ParamLimits

0x4787,	// (0x000226fe) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0002d2d8) popup_call_status_window_g_ParamLimits

0xac32,	// (0x00028ba9) aid_call2_pane

0x4fcc,	// (0x00022f43) msg_header_pane_g1

0x50e1,	// (0x00023058) postcard_address2_pane_ParamLimits

0x50e1,	// (0x00023058) postcard_address2_pane

0x50ed,	// (0x00023064) postcard_message2_pane_ParamLimits

0x50ed,	// (0x00023064) postcard_message2_pane

0x57a3,	// (0x0002371a) message2_row_pane_ParamLimits

0x57a3,	// (0x0002371a) message2_row_pane

0x57c0,	// (0x00023737) address2_row_pane_ParamLimits

0x57c0,	// (0x00023737) address2_row_pane

0xc349,	// (0x0002a2c0) postcard_message2_row_pane_g1

0xc351,	// (0x0002a2c8) postcard_message2_row_pane_t1

0xc349,	// (0x0002a2c0) address2_row_pane_g1

0xc351,	// (0x0002a2c8) address2_row_pane_t1

0x13cd,	// (0x0001f344) aid_size_cell_vorec

0xa0b4,	// (0x0002802b) main_rss_pane

0x57d3,	// (0x0002374a) rss_list_single_pane_ParamLimits

0x57d3,	// (0x0002374a) rss_list_single_pane

0xc35f,	// (0x0002a2d6) rss_list_single_pane_t1

0xc36d,	// (0x0002a2e4) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0002d583) rss_list_single_pane_t

0xa0b4,	// (0x0002802b) main_camera2_pane

0xa0b4,	// (0x0002802b) main_video2_pane

0x1771,	// (0x0001f6e8) cams_zoom_pane_cp2_ParamLimits

0x1771,	// (0x0001f6e8) cams_zoom_pane_cp2

0x177d,	// (0x0001f6f4) image2_vga_pane_ParamLimits

0x177d,	// (0x0001f6f4) image2_vga_pane

0x178c,	// (0x0001f703) main_camera2_pane_g1_ParamLimits

0x178c,	// (0x0001f703) main_camera2_pane_g1

0x1798,	// (0x0001f70f) main_camera2_pane_g2_ParamLimits

0x1798,	// (0x0001f70f) main_camera2_pane_g2

0x17a4,	// (0x0001f71b) main_camera2_pane_g3_ParamLimits

0x17a4,	// (0x0001f71b) main_camera2_pane_g3

0x17b0,	// (0x0001f727) main_camera2_pane_g4_ParamLimits

0x17b0,	// (0x0001f727) main_camera2_pane_g4

0x17bc,	// (0x0001f733) main_camera2_pane_g5_ParamLimits

0x17bc,	// (0x0001f733) main_camera2_pane_g5

0x17c8,	// (0x0001f73f) main_camera2_pane_g6_ParamLimits

0x17c8,	// (0x0001f73f) main_camera2_pane_g6

0x17d4,	// (0x0001f74b) main_camera2_pane_g7_ParamLimits

0x17d4,	// (0x0001f74b) main_camera2_pane_g7

0x17e0,	// (0x0001f757) main_camera2_pane_g8_ParamLimits

0x17e0,	// (0x0001f757) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0002d5a4) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0002d5a4) main_camera2_pane_g

0x17f8,	// (0x0001f76f) main_camera2_pane_t1_ParamLimits

0x17f8,	// (0x0001f76f) main_camera2_pane_t1

0x180a,	// (0x0001f781) main_camera2_pane_t2_ParamLimits

0x180a,	// (0x0001f781) main_camera2_pane_t2

0x181c,	// (0x0001f793) main_camera2_pane_t3_ParamLimits

0x181c,	// (0x0001f793) main_camera2_pane_t3

0x182e,	// (0x0001f7a5) main_camera2_pane_t4_ParamLimits

0x182e,	// (0x0001f7a5) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0002d5b7) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0002d5b7) main_camera2_pane_t

0x1890,	// (0x0001f807) cams_zoom_pane_cp4_ParamLimits

0x1890,	// (0x0001f807) cams_zoom_pane_cp4

0x18a0,	// (0x0001f817) image2_cif_pane_ParamLimits

0x18a0,	// (0x0001f817) image2_cif_pane

0x18b5,	// (0x0001f82c) image2_subqcif_pane_ParamLimits

0x18b5,	// (0x0001f82c) image2_subqcif_pane

0x18c4,	// (0x0001f83b) main_video2_pane_g1_ParamLimits

0x18c4,	// (0x0001f83b) main_video2_pane_g1

0x18d6,	// (0x0001f84d) main_video2_pane_g2_ParamLimits

0x18d6,	// (0x0001f84d) main_video2_pane_g2

0x18e6,	// (0x0001f85d) main_video2_pane_g3_ParamLimits

0x18e6,	// (0x0001f85d) main_video2_pane_g3

0x18f6,	// (0x0001f86d) main_video2_pane_g4_ParamLimits

0x18f6,	// (0x0001f86d) main_video2_pane_g4

0x1906,	// (0x0001f87d) main_video2_pane_g5_ParamLimits

0x1906,	// (0x0001f87d) main_video2_pane_g5

0x1916,	// (0x0001f88d) main_video2_pane_g6_ParamLimits

0x1916,	// (0x0001f88d) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0002d5c6) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0002d5c6) main_video2_pane_g

0x1928,	// (0x0001f89f) main_video2_pane_t1_ParamLimits

0x1928,	// (0x0001f89f) main_video2_pane_t1

0x1942,	// (0x0001f8b9) main_video2_pane_t2_ParamLimits

0x1942,	// (0x0001f8b9) main_video2_pane_t2

0x1968,	// (0x0001f8df) main_video2_pane_t3_ParamLimits

0x1968,	// (0x0001f8df) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0002d5d3) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0002d5d3) main_video2_pane_t

0x5647,	// (0x000235be) call_muted_g2

0x0001,

0xf5fe,	// (0x0002d575) call_muted_g

0xa0b4,	// (0x0002802b) main_mup2_pane

0xc3ce,	// (0x0002a345) main_mup2_pane_g1_ParamLimits

0xc3ce,	// (0x0002a345) main_mup2_pane_g1

0x599e,	// (0x00023915) main_mup2_pane_g2_ParamLimits

0x599e,	// (0x00023915) main_mup2_pane_g2

0x19b7,	// (0x0001f92e) main_mup_pane_g13_cp1

0x19bf,	// (0x0001f936) mup_volume_pane_cp1

0x59be,	// (0x00023935) main_mup2_pane_g4_ParamLimits

0x59be,	// (0x00023935) main_mup2_pane_g4

0x59d3,	// (0x0002394a) main_mup2_pane_g5_ParamLimits

0x59d3,	// (0x0002394a) main_mup2_pane_g5

0x59e8,	// (0x0002395f) main_mup2_pane_g6_ParamLimits

0x59e8,	// (0x0002395f) main_mup2_pane_g6

0x59fd,	// (0x00023974) main_mup2_pane_g7_ParamLimits

0x59fd,	// (0x00023974) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0002d5da) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0002d5da) main_mup2_pane_g

0x5a19,	// (0x00023990) main_mup2_pane_t1_ParamLimits

0x5a19,	// (0x00023990) main_mup2_pane_t1

0x5a30,	// (0x000239a7) main_mup2_pane_t2_ParamLimits

0x5a30,	// (0x000239a7) main_mup2_pane_t2

0x5a47,	// (0x000239be) main_mup2_pane_t3_ParamLimits

0x5a47,	// (0x000239be) main_mup2_pane_t3

0x5a5e,	// (0x000239d5) main_mup2_pane_t4_ParamLimits

0x5a5e,	// (0x000239d5) main_mup2_pane_t4

0x5a78,	// (0x000239ef) main_mup2_pane_t5_ParamLimits

0x5a78,	// (0x000239ef) main_mup2_pane_t5

0x5a92,	// (0x00023a09) main_mup2_pane_t6_ParamLimits

0x5a92,	// (0x00023a09) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0002d5e9) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0002d5e9) main_mup2_pane_t

0x5aca,	// (0x00023a41) mup2_visualizer_pane_ParamLimits

0x5aca,	// (0x00023a41) mup2_visualizer_pane

0x5b00,	// (0x00023a77) mup_progress_pane_cp_ParamLimits

0x5b00,	// (0x00023a77) mup_progress_pane_cp

0x19a2,	// (0x0001f919) mup_volume_pane_cp_ParamLimits

0x19a2,	// (0x0001f919) mup_volume_pane_cp

0x5b17,	// (0x00023a8e) mup2_visualizer_pane_g1_ParamLimits

0x5b17,	// (0x00023a8e) mup2_visualizer_pane_g1

0xc3da,	// (0x0002a351) mup2_visualizer_pane_g2_ParamLimits

0xc3da,	// (0x0002a351) mup2_visualizer_pane_g2

0x5b2c,	// (0x00023aa3) mup2_visualizer_pane_g3_ParamLimits

0x5b2c,	// (0x00023aa3) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0002d5f6) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0002d5f6) mup2_visualizer_pane_g

0xb1fb,	// (0x00029172) aid_size_cell_fmradio

0x1584,	// (0x0001f4fb) aid_height_parent_landcape

0xa762,	// (0x000286d9) wml_content_pane_cp

0xa76a,	// (0x000286e1) wml_tabs_pane

0xa773,	// (0x000286ea) popup_wml_miniature_window

0xa77b,	// (0x000286f2) scroll_pane_cp021

0xa78f,	// (0x00028706) wml_content_pane_comp8

0xa0b4,	// (0x0002802b) bg_popup_sub_pane_cp05

0xc3f8,	// (0x0002a36f) popup_wml_miniature_window_g1

0xc400,	// (0x0002a377) wml_miniature_view_pane

0x5b3a,	// (0x00023ab1) aid_size_wml_view

0x5b42,	// (0x00023ab9) wml_miniature_view_pane_g1

0x5b4b,	// (0x00023ac2) wml_miniature_view_pane_g2

0x5b54,	// (0x00023acb) wml_miniature_view_pane_g3

0x5b5c,	// (0x00023ad3) wml_miniature_view_pane_g4

0x5b64,	// (0x00023adb) wml_miniature_view_pane_g5

0x5b6c,	// (0x00023ae3) wml_miniature_view_pane_g6

0x5b74,	// (0x00023aeb) wml_miniature_view_pane_g7

0x5b7c,	// (0x00023af3) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0002d5fd) wml_miniature_view_pane_g

0xc3ce,	// (0x0002a345) background_graphic_ParamLimits

0xc3ce,	// (0x0002a345) background_graphic

0xc408,	// (0x0002a37f) wml_tabs_2_pane

0xc411,	// (0x0002a388) wml_tabs_3_pane_ParamLimits

0xc411,	// (0x0002a388) wml_tabs_3_pane

0xc423,	// (0x0002a39a) wml_tabs_4_pane_ParamLimits

0xc423,	// (0x0002a39a) wml_tabs_4_pane

0xc439,	// (0x0002a3b0) wml_tabs_5_pane_ParamLimits

0xc439,	// (0x0002a3b0) wml_tabs_5_pane

0xc453,	// (0x0002a3ca) wml_tabs_pane_g2_ParamLimits

0xc453,	// (0x0002a3ca) wml_tabs_pane_g2

0xc467,	// (0x0002a3de) wml_tabs_pane_g3_ParamLimits

0xc467,	// (0x0002a3de) wml_tabs_pane_g3

0x5b84,	// (0x00023afb) wml_tabs_2_active_pane_ParamLimits

0x5b84,	// (0x00023afb) wml_tabs_2_active_pane

0x5b94,	// (0x00023b0b) wml_tabs_2_passive_pane_ParamLimits

0x5b94,	// (0x00023b0b) wml_tabs_2_passive_pane

0x5ba4,	// (0x00023b1b) wml_tabs_3_active_pane_cp_ParamLimits

0x5ba4,	// (0x00023b1b) wml_tabs_3_active_pane_cp

0x5bb5,	// (0x00023b2c) wml_tabs_3_passive_pane_ParamLimits

0x5bb5,	// (0x00023b2c) wml_tabs_3_passive_pane

0x5bc6,	// (0x00023b3d) wml_tabs_3_passive_pane_cp_ParamLimits

0x5bc6,	// (0x00023b3d) wml_tabs_3_passive_pane_cp

0x5bd7,	// (0x00023b4e) tabs_4_active_pane

0x5bdf,	// (0x00023b56) tabs_4_passive_pane

0x5be7,	// (0x00023b5e) tabs_4_passive_pane_cp

0x5bef,	// (0x00023b66) tabs_4_passive_pane_cp2

0x5522,	// (0x00023499) aid_height_text

0x4cf3,	// (0x00022c6a) mup_volume_cont_pane_ParamLimits

0x4cf3,	// (0x00022c6a) mup_volume_cont_pane

0x2817,	// (0x0002078e) aid_size_cell_pinb

0x2821,	// (0x00020798) aid_size_list_pinb

0x5ae9,	// (0x00023a60) mup2_volume_cont_pane_ParamLimits

0x5ae9,	// (0x00023a60) mup2_volume_cont_pane

0x198e,	// (0x0001f905) mup2_volume_cont_pane_g1_ParamLimits

0x198e,	// (0x0001f905) mup2_volume_cont_pane_g1

0x0e53,	// (0x0001edca) aid_size_cell_touch_ParamLimits

0x0e53,	// (0x0001edca) aid_size_cell_touch

0x10db,	// (0x0001f052) touch_pane_ParamLimits

0x10db,	// (0x0001f052) touch_pane

0x10d1,	// (0x0001f048) main_rss2_pane

0xc484,	// (0x0002a3fb) listscroll_rss2_pane

0xc48d,	// (0x0002a404) rss2_navigation_pane

0xc495,	// (0x0002a40c) list_rss2_pane

0xad81,	// (0x00028cf8) scroll_pane_cp22

0xc49d,	// (0x0002a414) rss2_navigation_pane_g1

0xc4a6,	// (0x0002a41d) rss2_navigation_pane_g2

0xc4ae,	// (0x0002a425) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0002d60e) rss2_navigation_pane_g

0xc4b6,	// (0x0002a42d) rss2_navigation_pane_t1

0x5bf7,	// (0x00023b6e) rss2_list_single_pane_ParamLimits

0x5bf7,	// (0x00023b6e) rss2_list_single_pane

0xc4c4,	// (0x0002a43b) rss2_list_single_pane_t2

0xc4d2,	// (0x0002a449) rss2_list_single_pane_t3_ParamLimits

0xc4d2,	// (0x0002a449) rss2_list_single_pane_t3

0xc4ef,	// (0x0002a466) rss2_list_single_pane_t4

0x449d,	// (0x00022414) smil_status_pane_g1

0x159b,	// (0x0001f512) main_image2_pane_ParamLimits

0x159b,	// (0x0001f512) main_image2_pane

0x17ec,	// (0x0001f763) main_camera2_pane_g9_ParamLimits

0x17ec,	// (0x0001f763) main_camera2_pane_g9

0x1840,	// (0x0001f7b7) main_camera2_pane_t5_ParamLimits

0x1840,	// (0x0001f7b7) main_camera2_pane_t5

0x1852,	// (0x0001f7c9) main_camera2_pane_t6_ParamLimits

0x1852,	// (0x0001f7c9) main_camera2_pane_t6

0x5c2f,	// (0x00023ba6) main_image2_pane_g1_ParamLimits

0x5c2f,	// (0x00023ba6) main_image2_pane_g1

0x52be,	// (0x00023235) smil2_video_pane_ParamLimits

0x52be,	// (0x00023235) smil2_video_pane

0x0e87,	// (0x0001edfe) aid_zoom_text_primary_cp

0x1078,	// (0x0001efef) popup_preview_fixed_window

0xa6cb,	// (0x00028642) im_reading_pane_g1

0x1736,	// (0x0001f6ad) cams2_bc_adjust_pane_cp_ParamLimits

0x1736,	// (0x0001f6ad) cams2_bc_adjust_pane_cp

0x1882,	// (0x0001f7f9) cams2_bc_adjust_pane_ParamLimits

0x1882,	// (0x0001f7f9) cams2_bc_adjust_pane

0xd844,	// (0x0002b7bb) cams2_bc_adjust_pane_g1

0x19c7,	// (0x0001f93e) cams2_slider_pane

0x19d0,	// (0x0001f947) cams2_slider_pane_g1

0x19d9,	// (0x0001f950) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0002d615) cams2_slider_pane_g

0x114c,	// (0x0001f0c3) calc_display_pane_ParamLimits

0x116a,	// (0x0001f0e1) calc_paper_pane_ParamLimits

0x1186,	// (0x0001f0fd) grid_calc_pane_ParamLimits

0x14ef,	// (0x0001f466) popup_clock_digital_window_t1_ParamLimits

0xb198,	// (0x0002910f) main_image_pane_t1

0x1132,	// (0x0001f0a9) aid_size_cell_calc_ParamLimits

0x1132,	// (0x0001f0a9) aid_size_cell_calc

0x15cc,	// (0x0001f543) popup_blid_sat_info2_window_ParamLimits

0x15cc,	// (0x0001f543) popup_blid_sat_info2_window

0xc505,	// (0x0002a47c) aid_size_cell_blid

0xc50d,	// (0x0002a484) bg_popup_window_pane_cp07

0xc530,	// (0x0002a4a7) grid_popup_blid_pane

0xc53a,	// (0x0002a4b1) heading_pane_cp05_ParamLimits

0xc53a,	// (0x0002a4b1) heading_pane_cp05

0xc604,	// (0x0002a57b) cell_popup_blid_pane_ParamLimits

0xc604,	// (0x0002a57b) cell_popup_blid_pane

0xc62a,	// (0x0002a5a1) cell_popup_blid_pane_g1

0xc632,	// (0x0002a5a9) cell_popup_blid_pane_t1

0x5aaf,	// (0x00023a26) mup2_indicator_pane_ParamLimits

0x5aaf,	// (0x00023a26) mup2_indicator_pane

0xaeca,	// (0x00028e41) mup2_visualizer_osc_pane

0xc3e6,	// (0x0002a35d) mup2_visualizer_spec_pane_ParamLimits

0xc3e6,	// (0x0002a35d) mup2_visualizer_spec_pane

0x5c3b,	// (0x00023bb2) mup2_spec_half_pane

0x5c44,	// (0x00023bbb) mup2_spec_half_pane_cp

0x5c4e,	// (0x00023bc5) mup2_spec_bar_pane_ParamLimits

0x5c4e,	// (0x00023bc5) mup2_spec_bar_pane

0xc37b,	// (0x0002a2f2) mup2_spec_bar_pane_g1

0xc385,	// (0x0002a2fc) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0002d588) mup2_spec_bar_pane_g

0x5c6d,	// (0x00023be4) mup2_osc_middle_pane

0xc397,	// (0x0002a30e) mup2_visualizer_osc_pane_g1

0x9cc1,	// (0x00027c38) popup_number_entry_window_t1_ParamLimits

0x9cd4,	// (0x00027c4b) popup_number_entry_window_t2_ParamLimits

0x9ce6,	// (0x00027c5d) popup_number_entry_window_t3_ParamLimits

0x2751,	// (0x000206c8) popup_number_entry_window_t5_ParamLimits

0x2751,	// (0x000206c8) popup_number_entry_window_t5

0xf0d3,	// (0x0002d04a) popup_number_entry_window_t_ParamLimits

0x9cf8,	// (0x00027c6f) text_title_cp2_ParamLimits

0x152e,	// (0x0001f4a5) aid_hotspot_pointer_text2_pane

0x1578,	// (0x0001f4ef) main_viewer_pane_g9_ParamLimits

0x1578,	// (0x0001f4ef) main_viewer_pane_g9

0xa904,	// (0x0002887b) cale_month_pane_t1_ParamLimits

0xa941,	// (0x000288b8) bg_cale_pane_ParamLimits

0xa959,	// (0x000288d0) list_cale_pane_ParamLimits

0xa96a,	// (0x000288e1) listscroll_cale_day_pane_t1

0xa97c,	// (0x000288f3) scroll_pane_cp09_ParamLimits

0x4d32,	// (0x00022ca9) main_mup_eq_pane_t1_ParamLimits

0x4d32,	// (0x00022ca9) main_mup_eq_pane_t1

0x4d4c,	// (0x00022cc3) main_mup_eq_pane_t2_ParamLimits

0x4d4c,	// (0x00022cc3) main_mup_eq_pane_t2

0x4d64,	// (0x00022cdb) main_mup_eq_pane_t3_ParamLimits

0x4d64,	// (0x00022cdb) main_mup_eq_pane_t3

0x4d7c,	// (0x00022cf3) main_mup_eq_pane_t4_ParamLimits

0x4d7c,	// (0x00022cf3) main_mup_eq_pane_t4

0x4d94,	// (0x00022d0b) main_mup_eq_pane_t5_ParamLimits

0x4d94,	// (0x00022d0b) main_mup_eq_pane_t5

0x4dac,	// (0x00022d23) main_mup_eq_pane_t6_ParamLimits

0x4dac,	// (0x00022d23) main_mup_eq_pane_t6

0x4dc0,	// (0x00022d37) main_mup_eq_pane_t7_ParamLimits

0x4dc0,	// (0x00022d37) main_mup_eq_pane_t7

0x4dd4,	// (0x00022d4b) main_mup_eq_pane_t8_ParamLimits

0x4dd4,	// (0x00022d4b) main_mup_eq_pane_t8

0x4dea,	// (0x00022d61) main_mup_eq_pane_t9_ParamLimits

0x4dea,	// (0x00022d61) main_mup_eq_pane_t9

0x4e02,	// (0x00022d79) main_mup_eq_pane_t10_ParamLimits

0x4e02,	// (0x00022d79) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0002d3d7) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0002d3d7) main_mup_eq_pane_t

0x4ebf,	// (0x00022e36) mup_equalizer_pane_cp5_ParamLimits

0x4ed5,	// (0x00022e4c) mup_equalizer_pane_cp6_ParamLimits

0x4eed,	// (0x00022e64) mup_equalizer_pane_cp7_ParamLimits

0x10d1,	// (0x0001f048) main_gallery_pane

0xc3a0,	// (0x0002a317) smil2_volume_pane

0xc3a8,	// (0x0002a31f) smil_status_volume_pane_g1_ParamLimits

0xc3bb,	// (0x0002a332) smil_status_volume_pane_g2_ParamLimits

0x1706,	// (0x0001f67d) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0002d58d) smil_status_volume_pane_g_ParamLimits

0xc50d,	// (0x0002a484) bg_popup_window_pane_cp07_ParamLimits

0xc51b,	// (0x0002a492) blid_firmament_pane

0x5c76,	// (0x00023bed) aid_size_cell_gallery_ParamLimits

0x5c76,	// (0x00023bed) aid_size_cell_gallery

0x5c84,	// (0x00023bfb) grid_gallery_pane_ParamLimits

0x5c84,	// (0x00023bfb) grid_gallery_pane

0x5c94,	// (0x00023c0b) cell_gallery_pane_ParamLimits

0x5c94,	// (0x00023c0b) cell_gallery_pane

0xc640,	// (0x0002a5b7) bg_cell_gallery_focus_pane_ParamLimits

0xc640,	// (0x0002a5b7) bg_cell_gallery_focus_pane

0xc652,	// (0x0002a5c9) cell_gallery_pane_g1_ParamLimits

0xc652,	// (0x0002a5c9) cell_gallery_pane_g1

0x5ce2,	// (0x00023c59) cell_gallery_pane_g2_ParamLimits

0x5ce2,	// (0x00023c59) cell_gallery_pane_g2

0x5cef,	// (0x00023c66) cell_gallery_pane_g3_ParamLimits

0x5cef,	// (0x00023c66) cell_gallery_pane_g3

0xc65e,	// (0x0002a5d5) cell_gallery_pane_g4_ParamLimits

0xc65e,	// (0x0002a5d5) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0002d63b) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0002d63b) cell_gallery_pane_g

0xc66a,	// (0x0002a5e1) bg_cell_gallery_focus_pane_g1

0xc672,	// (0x0002a5e9) bg_cell_gallery_focus_pane_g2

0xc67a,	// (0x0002a5f1) bg_cell_gallery_focus_pane_g3

0xc682,	// (0x0002a5f9) bg_cell_gallery_focus_pane_g4

0xc68a,	// (0x0002a601) bg_cell_gallery_focus_pane_g5

0xc692,	// (0x0002a609) bg_cell_gallery_focus_pane_g6

0xc69a,	// (0x0002a611) bg_cell_gallery_focus_pane_g7

0xc6a2,	// (0x0002a619) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0002d644) bg_cell_gallery_focus_pane_g

0xc6aa,	// (0x0002a621) aid_firma_cardinal

0xc6be,	// (0x0002a635) blid_firmament_pane_t1

0xc6d5,	// (0x0002a64c) blid_firmament_pane_t2

0xc6ec,	// (0x0002a663) blid_firmament_pane_t3

0xc703,	// (0x0002a67a) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0002d655) blid_firmament_pane_t

0xc71a,	// (0x0002a691) blid_sat_info_pane

0xc72a,	// (0x0002a6a1) blid_sat_info_pane_g1

0xc72a,	// (0x0002a6a1) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0002d65e) blid_sat_info_pane_g

0xc734,	// (0x0002a6ab) blid_sat_info_pane_t1

0xc742,	// (0x0002a6b9) smil2_volume_content_pane

0xc74b,	// (0x0002a6c2) smil2_volume_pane_g1

0xa48b,	// (0x00028402) smil2_volume_content_pane_g1

0xc753,	// (0x0002a6ca) smil2_volume_content_pane_g2

0xc75c,	// (0x0002a6d3) smil2_volume_content_pane_g3

0xc765,	// (0x0002a6dc) smil2_volume_content_pane_g4

0xc76e,	// (0x0002a6e5) smil2_volume_content_pane_g5

0xc777,	// (0x0002a6ee) smil2_volume_content_pane_g6

0xc780,	// (0x0002a6f7) smil2_volume_content_pane_g7

0xc789,	// (0x0002a700) smil2_volume_content_pane_g8

0xc792,	// (0x0002a709) smil2_volume_content_pane_g9

0xc79b,	// (0x0002a712) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0002d663) smil2_volume_content_pane_g

0x2d81,	// (0x00020cf8) cale_week_day_heading_pane_t1_ParamLimits

0x2dbc,	// (0x00020d33) cale_week_day_heading_pane_t2_ParamLimits

0x2df7,	// (0x00020d6e) cale_week_day_heading_pane_t3_ParamLimits

0x2e32,	// (0x00020da9) cale_week_day_heading_pane_t4_ParamLimits

0x2e6d,	// (0x00020de4) cale_week_day_heading_pane_t5_ParamLimits

0x2ea8,	// (0x00020e1f) cale_week_day_heading_pane_t6_ParamLimits

0x2ee3,	// (0x00020e5a) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0002d14f) cale_week_day_heading_pane_t_ParamLimits

0xa57e,	// (0x000284f5) bg_cale_side_pane_ParamLimits

0x12dd,	// (0x0001f254) cale_week_time_pane_t1_ParamLimits

0x12f7,	// (0x0001f26e) cale_week_time_pane_t2_ParamLimits

0x1311,	// (0x0001f288) cale_week_time_pane_t3_ParamLimits

0x132b,	// (0x0001f2a2) cale_week_time_pane_t4_ParamLimits

0x1345,	// (0x0001f2bc) cale_week_time_pane_t5_ParamLimits

0x1361,	// (0x0001f2d8) cale_week_time_pane_t6_ParamLimits

0x1383,	// (0x0001f2fa) cale_week_time_pane_t7_ParamLimits

0x13a7,	// (0x0001f31e) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0002d15e) cale_week_time_pane_t_ParamLimits

0x2f1e,	// (0x00020e95) cell_cale_week_pane_g2_ParamLimits

0xa57e,	// (0x000284f5) bg_cale_side_pane_cp01_ParamLimits

0x4298,	// (0x0002220f) cale_month_week_pane_t1_ParamLimits

0x42b1,	// (0x00022228) cale_month_week_pane_t2_ParamLimits

0x42ca,	// (0x00022241) cale_month_week_pane_t3_ParamLimits

0x42e3,	// (0x0002225a) cale_month_week_pane_t4_ParamLimits

0x4300,	// (0x00022277) cale_month_week_pane_t5_ParamLimits

0x4321,	// (0x00022298) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0002d237) cale_month_week_pane_t_ParamLimits

0x144b,	// (0x0001f3c2) cell_cale_month_pane_g1_ParamLimits

0x10d1,	// (0x0001f048) main_cale_event_viewer_pane

0x9c97,	// (0x00027c0e) listscroll_cale_event_viewer_pane

0xc7a4,	// (0x0002a71b) list_cale_ev_pane

0xc7ac,	// (0x0002a723) scroll_pane_cp023

0xc7b8,	// (0x0002a72f) field_cale_ev_pane_ParamLimits

0xc7b8,	// (0x0002a72f) field_cale_ev_pane

0xc7d4,	// (0x0002a74b) field_cale_ev_content_pane_ParamLimits

0xc7d4,	// (0x0002a74b) field_cale_ev_content_pane

0xc7e0,	// (0x0002a757) field_cale_ev_pane_g1_ParamLimits

0xc7e0,	// (0x0002a757) field_cale_ev_pane_g1

0xc7ec,	// (0x0002a763) field_cale_ev_pane_g2_ParamLimits

0xc7ec,	// (0x0002a763) field_cale_ev_pane_g2

0xc804,	// (0x0002a77b) field_cale_ev_pane_g3_ParamLimits

0xc804,	// (0x0002a77b) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0002d678) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0002d678) field_cale_ev_pane_g

0xc81c,	// (0x0002a793) field_cale_ev_pane_t1_ParamLimits

0xc81c,	// (0x0002a793) field_cale_ev_pane_t1

0xc833,	// (0x0002a7aa) field_cale_ev_content_pane_t1_ParamLimits

0xc833,	// (0x0002a7aa) field_cale_ev_content_pane_t1

0x4fc3,	// (0x00022f3a) bg_button_pane_cp01

0x2b1f,	// (0x00020a96) listscroll_cale_week_pane_ParamLimits

0xa528,	// (0x0002849f) popup_toolbar_window_cp01

0xa54f,	// (0x000284c6) listscroll_cale_week_pane_t1_ParamLimits

0x2b1f,	// (0x00020a96) listscroll_cale_day_pane_ParamLimits

0xa528,	// (0x0002849f) popup_toolbar_window_cp02

0xa96a,	// (0x000288e1) listscroll_cale_day_pane_t1_ParamLimits

0x2b1f,	// (0x00020a96) main_cale_month_pane_ParamLimits

0x16c9,	// (0x0001f640) popup_toolbar_window_cp03_ParamLimits

0x16c9,	// (0x0001f640) popup_toolbar_window_cp03

0x51d0,	// (0x00023147) main_image_pane_g2_ParamLimits

0x51d0,	// (0x00023147) main_image_pane_g2

0x51dc,	// (0x00023153) main_image_pane_g3_ParamLimits

0x51dc,	// (0x00023153) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0002d469) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0002d469) main_image_pane_g

0xb198,	// (0x0002910f) main_image_pane_t1_ParamLimits

0x51e8,	// (0x0002315f) main_image_pane_t2_ParamLimits

0x51e8,	// (0x0002315f) main_image_pane_t2

0x51fa,	// (0x00023171) main_image_pane_t3_ParamLimits

0x51fa,	// (0x00023171) main_image_pane_t3

0x520c,	// (0x00023183) main_image_pane_t4_ParamLimits

0x520c,	// (0x00023183) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0002d470) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0002d470) main_image_pane_t

0x521e,	// (0x00023195) popup_image_details_window_cp01

0x5228,	// (0x0002319f) popup_toobar_trans_pane_cp01_ParamLimits

0x5228,	// (0x0002319f) popup_toobar_trans_pane_cp01

0x161f,	// (0x0001f596) popup_image_details_window_ParamLimits

0x161f,	// (0x0001f596) popup_image_details_window

0x162d,	// (0x0001f5a4) popup_image_focus_window

0x1728,	// (0x0001f69f) camera2_autofocus_pane_ParamLimits

0x1728,	// (0x0001f69f) camera2_autofocus_pane

0x9c97,	// (0x00027c0e) bg_popup_sub_pane_cp06

0xc850,	// (0x0002a7c7) popup_image_focus_window_g1

0xc858,	// (0x0002a7cf) popup_image_focus_window_g2

0xc860,	// (0x0002a7d7) popup_image_focus_window_g3

0xc868,	// (0x0002a7df) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0002d67f) popup_image_focus_window_g

0xc870,	// (0x0002a7e7) popup_image_focus_window_t1

0xc87e,	// (0x0002a7f5) popup_image_focus_window_t2

0xc88e,	// (0x0002a805) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0002d688) popup_image_focus_window_t

0xc89c,	// (0x0002a813) camera2_autofocus_pane_g1

0xa3df,	// (0x00028356) bg_tb_trans_pane_cp01

0xc8aa,	// (0x0002a821) popup_image_details_window_g1

0xc8bd,	// (0x0002a834) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0002d69a) popup_image_details_window_g

0xc8e6,	// (0x0002a85d) popup_image_details_window_t1

0xc8f8,	// (0x0002a86f) popup_image_details_window_t2

0xc911,	// (0x0002a888) popup_image_details_window_t3

0xc925,	// (0x0002a89c) popup_image_details_window_t4

0xc940,	// (0x0002a8b7) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0002d6a1) popup_image_details_window_t

0xa3ed,	// (0x00028364) bg_calc_paper_pane_ParamLimits

0x10d1,	// (0x0001f048) grid_highlight_pane_cp013

0x11b2,	// (0x0001f129) list_calc_pane_ParamLimits

0x11c4,	// (0x0001f13b) scroll_pane_cp024

0xa401,	// (0x00028378) bg_calc_display_pane_ParamLimits

0x11cc,	// (0x0001f143) calc_display_pane_t1_ParamLimits

0x11e1,	// (0x0001f158) calc_display_pane_t2_ParamLimits

0x11f6,	// (0x0001f16d) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0002d0d1) calc_display_pane_t_ParamLimits

0x125f,	// (0x0001f1d6) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0002d0ee) cell_calc_pane_g

0x1268,	// (0x0001f1df) cell_calc_pane_t1

0xa460,	// (0x000283d7) grid_highlight_pane_cp02_ParamLimits

0xa476,	// (0x000283ed) toolbar_button_pane_cp01_ParamLimits

0xa476,	// (0x000283ed) toolbar_button_pane_cp01

0xb1dd,	// (0x00029154) temp_image_control_pane_ParamLimits

0xb1dd,	// (0x00029154) temp_image_control_pane

0x159b,	// (0x0001f512) main_mp3_pane

0xc95a,	// (0x0002a8d1) temp_image_control_pane_g1_ParamLimits

0xc95a,	// (0x0002a8d1) temp_image_control_pane_g1

0xc968,	// (0x0002a8df) temp_image_control_pane_g2_ParamLimits

0xc968,	// (0x0002a8df) temp_image_control_pane_g2

0xc97a,	// (0x0002a8f1) temp_image_control_pane_g3_ParamLimits

0xc97a,	// (0x0002a8f1) temp_image_control_pane_g3

0x5d2c,	// (0x00023ca3) temp_image_control_pane_g4_ParamLimits

0x5d2c,	// (0x00023ca3) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0002d6ac) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0002d6ac) temp_image_control_pane_g

0xc95a,	// (0x0002a8d1) main_mp3_pane_g1

0x5d3d,	// (0x00023cb4) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0002d6b5) main_mp3_pane_g

0xc9bd,	// (0x0002a934) main_mp3_pane_t1

0xa5da,	// (0x00028551) main_camera_pane_g8_ParamLimits

0xa5da,	// (0x00028551) main_camera_pane_g8

0x3135,	// (0x000210ac) main_video_pane_g7_ParamLimits

0x3135,	// (0x000210ac) main_video_pane_g7

0x1870,	// (0x0001f7e7) main_camera2_pane_t7_ParamLimits

0x1870,	// (0x0001f7e7) main_camera2_pane_t7

0xa722,	// (0x00028699) scroll_pane_cp025_ParamLimits

0xa722,	// (0x00028699) scroll_pane_cp025

0xa736,	// (0x000286ad) scroll_pane_cp026_ParamLimits

0xa736,	// (0x000286ad) scroll_pane_cp026

0xa745,	// (0x000286bc) wml_content_pane_ParamLimits

0x10d1,	// (0x0001f048) main_touch_calib_pane

0x5de1,	// (0x00023d58) main_touch_calib_pane_g1

0x5ded,	// (0x00023d64) main_touch_calib_pane_g2

0x5df9,	// (0x00023d70) main_touch_calib_pane_g3

0x5e05,	// (0x00023d7c) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0002d6d3) main_touch_calib_pane_g

0x5e11,	// (0x00023d88) main_touch_calib_pane_t1

0x5e2a,	// (0x00023da1) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0002d6dc) main_touch_calib_pane_t

0xae0b,	// (0x00028d82) mup_progress_pane_cp02

0xae2a,	// (0x00028da1) navi_pane_g1

0xae8c,	// (0x00028e03) navi_pane_mp_t3

0x159b,	// (0x0001f512) main_mp3_pane_ParamLimits

0x575d,	// (0x000236d4) navi_pane_ParamLimits

0xc95a,	// (0x0002a8d1) main_mp3_pane_g1_ParamLimits

0x5d3d,	// (0x00023cb4) main_mp3_pane_g2_ParamLimits

0x5d49,	// (0x00023cc0) main_mp3_pane_g3_ParamLimits

0x5d49,	// (0x00023cc0) main_mp3_pane_g3

0x5d55,	// (0x00023ccc) main_mp3_pane_g4_ParamLimits

0x5d55,	// (0x00023ccc) main_mp3_pane_g4

0xc98a,	// (0x0002a901) main_mp3_pane_g5_ParamLimits

0xc98a,	// (0x0002a901) main_mp3_pane_g5

0xc998,	// (0x0002a90f) main_mp3_pane_g6_ParamLimits

0xc998,	// (0x0002a90f) main_mp3_pane_g6

0xc9a5,	// (0x0002a91c) main_mp3_pane_g7_ParamLimits

0xc9a5,	// (0x0002a91c) main_mp3_pane_g7

0xc9b1,	// (0x0002a928) main_mp3_pane_g8_ParamLimits

0xc9b1,	// (0x0002a928) main_mp3_pane_g8

0xf73e,	// (0x0002d6b5) main_mp3_pane_g_ParamLimits

0x5d61,	// (0x00023cd8) main_mp3_pane_t2

0x5d71,	// (0x00023ce8) main_mp3_pane_t3

0xc9cb,	// (0x0002a942) main_mp3_pane_t4

0xc9d9,	// (0x0002a950) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0002d6c6) main_mp3_pane_t

0xc9e7,	// (0x0002a95e) mup_progress_pane_cp01

0x0e87,	// (0x0001edfe) aid_zoom_text_secondary2

0xc7a4,	// (0x0002a71b) list_cale_ev2_pane

0xc7ac,	// (0x0002a723) scroll_pane_cp023_ParamLimits

0x5e85,	// (0x00023dfc) field_cale_ev2_pane_ParamLimits

0x5e85,	// (0x00023dfc) field_cale_ev2_pane

0xc9ef,	// (0x0002a966) field_cale_ev2_pane_g1_ParamLimits

0xc9ef,	// (0x0002a966) field_cale_ev2_pane_g1

0xc9fb,	// (0x0002a972) field_cale_ev2_pane_g2_ParamLimits

0xc9fb,	// (0x0002a972) field_cale_ev2_pane_g2

0xca13,	// (0x0002a98a) field_cale_ev2_pane_g3_ParamLimits

0xca13,	// (0x0002a98a) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0002d6e7) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0002d6e7) field_cale_ev2_pane_g

0xca37,	// (0x0002a9ae) field_cale_ev2_pane_t1_ParamLimits

0xca37,	// (0x0002a9ae) field_cale_ev2_pane_t1

0xca4e,	// (0x0002a9c5) field_cale_ev2_pane_t2_ParamLimits

0xca4e,	// (0x0002a9c5) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0002d6f0) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0002d6f0) field_cale_ev2_pane_t

0x50ab,	// (0x00023022) main_postcard_pane_g5_ParamLimits

0x50ab,	// (0x00023022) main_postcard_pane_g5

0x50b9,	// (0x00023030) main_postcard_pane_g6_ParamLimits

0x50b9,	// (0x00023030) main_postcard_pane_g6

0x2f7f,	// (0x00020ef6) camera2_autofocus_pane_cp_ParamLimits

0x2f7f,	// (0x00020ef6) camera2_autofocus_pane_cp

0x159b,	// (0x0001f512) main_mup3_pane

0x5ed3,	// (0x00023e4a) main_mup3_pane_g1_ParamLimits

0x5ed3,	// (0x00023e4a) main_mup3_pane_g1

0x5ef4,	// (0x00023e6b) main_mup3_pane_g2_ParamLimits

0x5ef4,	// (0x00023e6b) main_mup3_pane_g2

0x5f70,	// (0x00023ee7) main_mup3_pane_g3_ParamLimits

0x5f70,	// (0x00023ee7) main_mup3_pane_g3

0x5fb3,	// (0x00023f2a) main_mup3_pane_g4_ParamLimits

0x5fb3,	// (0x00023f2a) main_mup3_pane_g4

0x5ff6,	// (0x00023f6d) main_mup3_pane_g5_ParamLimits

0x5ff6,	// (0x00023f6d) main_mup3_pane_g5

0x603b,	// (0x00023fb2) main_mup3_pane_g6_ParamLimits

0x603b,	// (0x00023fb2) main_mup3_pane_g6

0xca63,	// (0x0002a9da) main_mup3_pane_g7_ParamLimits

0xca63,	// (0x0002a9da) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0002d700) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0002d700) main_mup3_pane_g

0x60b1,	// (0x00024028) main_mup3_pane_t1_ParamLimits

0x60b1,	// (0x00024028) main_mup3_pane_t1

0x6120,	// (0x00024097) main_mup3_pane_t2_ParamLimits

0x6120,	// (0x00024097) main_mup3_pane_t2

0x61e9,	// (0x00024160) main_mup3_pane_t4_ParamLimits

0x61e9,	// (0x00024160) main_mup3_pane_t4

0x6237,	// (0x000241ae) main_mup3_pane_t5_ParamLimits

0x6237,	// (0x000241ae) main_mup3_pane_t5

0x62e7,	// (0x0002425e) main_mup3_pane_t6_ParamLimits

0x62e7,	// (0x0002425e) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0002d711) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0002d711) main_mup3_pane_t

0x6393,	// (0x0002430a) mup3_progress_pane_ParamLimits

0x6393,	// (0x0002430a) mup3_progress_pane

0x6407,	// (0x0002437e) popup_mup3_control_window_ParamLimits

0x6407,	// (0x0002437e) popup_mup3_control_window

0xca71,	// (0x0002a9e8) popup_mup3_text_window

0x6420,	// (0x00024397) mup3_progress_pane_t1

0x643f,	// (0x000243b6) mup3_progress_pane_t2

0xca79,	// (0x0002a9f0) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0002d71e) mup3_progress_pane_t

0xca96,	// (0x0002aa0d) mup_progress_pane_cp03

0x9c97,	// (0x00027c0e) bg_tb_trans_pane_cp04

0x645e,	// (0x000243d5) mup3_volume_pane

0x6466,	// (0x000243dd) popup_mup3_control_window_g1

0x646f,	// (0x000243e6) mup3_volume_pane_g1

0x6478,	// (0x000243ef) mup3_volume_pane_g2

0x6481,	// (0x000243f8) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0002d725) mup3_volume_pane_g

0x9c97,	// (0x00027c0e) bg_tb_trans_pane_cp03

0xcaa6,	// (0x0002aa1d) popup_mup3_text_window_g1

0xcaae,	// (0x0002aa25) popup_mup3_text_window_t1

0xa449,	// (0x000283c0) list_calc_item_pane_g1_ParamLimits

0xc47b,	// (0x0002a3f2) mup_volume_pane_cp_g1

0x5e43,	// (0x00023dba) main_touch_calib_pane_t3

0x5e59,	// (0x00023dd0) main_touch_calib_pane_t4

0x5e6f,	// (0x00023de6) main_touch_calib_pane_t5

0x0e3f,	// (0x0001edb6) aid_cell_size_toolbar2

0x0e47,	// (0x0001edbe) aid_popup3_width_pane

0x0e87,	// (0x0001edfe) aid_zoom_text_msg_primary

0x1435,	// (0x0001f3ac) vorec_t7

0xa40d,	// (0x00028384) bg_calc_paper_pane_g1_ParamLimits

0xa419,	// (0x00028390) bg_calc_paper_pane_g2_ParamLimits

0xa425,	// (0x0002839c) bg_calc_paper_pane_g3_ParamLimits

0xa431,	// (0x000283a8) bg_calc_paper_pane_g4_ParamLimits

0xa43d,	// (0x000283b4) bg_calc_paper_pane_g5_ParamLimits

0x29c8,	// (0x0002093f) bg_calc_paper_pane_g6_ParamLimits

0x29d9,	// (0x00020950) bg_calc_paper_pane_g7_ParamLimits

0x29ea,	// (0x00020961) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0002d0d8) bg_calc_paper_pane_g_ParamLimits

0x29fb,	// (0x00020972) calc_bg_paper_pane_g9_ParamLimits

0x3066,	// (0x00020fdd) image_qvga_pane_ParamLimits

0x3066,	// (0x00020fdd) image_qvga_pane

0xa30f,	// (0x00028286) bg_popup_sub_pane_cp04_ParamLimits

0xb114,	// (0x0002908b) popup_mup_playback_window_g1_ParamLimits

0xb120,	// (0x00029097) popup_mup_playback_window_t1_ParamLimits

0xb135,	// (0x000290ac) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0002d464) popup_mup_playback_window_t_ParamLimits

0x59af,	// (0x00023926) main_mup2_pane_g3_ParamLimits

0x59af,	// (0x00023926) main_mup2_pane_g3

0x3432,	// (0x000213a9) popup_toolbar_window_cp04

0xb52a,	// (0x000294a1) popup_call2_audio_second_window_g3_ParamLimits

0xb52a,	// (0x000294a1) popup_call2_audio_second_window_g3

0xb934,	// (0x000298ab) popup_call2_audio_first_window_g4_ParamLimits

0xb934,	// (0x000298ab) popup_call2_audio_first_window_g4

0xbfb3,	// (0x00029f2a) popup_call2_audio_in_window_g4_ParamLimits

0xbfb3,	// (0x00029f2a) popup_call2_audio_in_window_g4

0x51c3,	// (0x0002313a) aid_area_sk_bg_cut_ParamLimits

0x51c3,	// (0x0002313a) aid_area_sk_bg_cut

0xb14a,	// (0x000290c1) aid_area_sk_bg_cut_2_ParamLimits

0xb14a,	// (0x000290c1) aid_area_sk_bg_cut_2

0x5cd2,	// (0x00023c49) aid_placing_details_win

0x5cda,	// (0x00023c51) aid_placing_details_win_2

0xc89c,	// (0x0002a813) camera2_autofocus_pane_g1_ParamLimits

0x1069,	// (0x0001efe0) popup_fixed_preview_cale_window_ParamLimits

0x1069,	// (0x0001efe0) popup_fixed_preview_cale_window

0xaedb,	// (0x00028e52) navi_slider_pane_g3

0xaee4,	// (0x00028e5b) navi_slider_pane_g4

0xaeed,	// (0x00028e64) navi_slider_pane_g5

0xaedb,	// (0x00028e52) navi_slider_pane_g6

0x1515,	// (0x0001f48c) navi_slider_pane_g7

0xb000,	// (0x00028f77) mup_scale_pane_g3

0xb009,	// (0x00028f80) mup_scale_pane_g4

0xb012,	// (0x00028f89) mup_scale_pane_g5

0x4f05,	// (0x00022e7c) mup_scale_pane_g6

0x4f0e,	// (0x00022e85) mup_scale_pane_g7

0xaedb,	// (0x00028e52) cams2_slider_pane_g3

0xc4fd,	// (0x0002a474) cams2_slider_pane_g4

0x19e2,	// (0x0001f959) cams2_slider_pane_g5

0xaedb,	// (0x00028e52) cams2_slider_pane_g6

0x19ea,	// (0x0001f961) cams2_slider_pane_g7

0xc72a,	// (0x0002a6a1) camera2_autofocus_pane_cp_g1

0xc314,	// (0x0002a28b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc314,	// (0x0002a28b) bg_popup_preview_window_pane_cp02

0xcabc,	// (0x0002aa33) list_fp_cale_pane_ParamLimits

0xcabc,	// (0x0002aa33) list_fp_cale_pane

0xcac8,	// (0x0002aa3f) popup_fixed_preview_cale_window_t1_ParamLimits

0xcac8,	// (0x0002aa3f) popup_fixed_preview_cale_window_t1

0x648a,	// (0x00024401) popup_fixed_preview_cale_window_t2_ParamLimits

0x648a,	// (0x00024401) popup_fixed_preview_cale_window_t2

0x649f,	// (0x00024416) popup_fixed_preview_cale_window_t3_ParamLimits

0x649f,	// (0x00024416) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0002d72c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0002d72c) popup_fixed_preview_cale_window_t

0x64b4,	// (0x0002442b) list_single_fp_cale_pane_ParamLimits

0x64b4,	// (0x0002442b) list_single_fp_cale_pane

0xcae6,	// (0x0002aa5d) list_single_fp_cale_pane_g1_ParamLimits

0xcae6,	// (0x0002aa5d) list_single_fp_cale_pane_g1

0xcaf2,	// (0x0002aa69) list_single_fp_cale_pane_g2_ParamLimits

0xcaf2,	// (0x0002aa69) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0002d733) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0002d733) list_single_fp_cale_pane_g

0xcb0b,	// (0x0002aa82) list_single_fp_cale_pane_t1_ParamLimits

0xcb0b,	// (0x0002aa82) list_single_fp_cale_pane_t1

0xcb1d,	// (0x0002aa94) list_single_fp_cale_pane_t2_ParamLimits

0xcb1d,	// (0x0002aa94) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0002d73a) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0002d73a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x10d1,	// (0x0001f048) main_dialer_pane

0x64c8,	// (0x0002443f) aid_cell_size_keypad

0x64d2,	// (0x00024449) dialer_ne_pane

0x64dc,	// (0x00024453) grid_dialer_command_1_pane

0x64e4,	// (0x0002445b) grid_dialer_command_2_pane

0x64ec,	// (0x00024463) grid_dialer_keypad_pane

0x6500,	// (0x00024477) bg_popup_call_pane_cp06_ParamLimits

0x6500,	// (0x00024477) bg_popup_call_pane_cp06

0x650c,	// (0x00024483) dialer_ne_clear_pane_ParamLimits

0x650c,	// (0x00024483) dialer_ne_clear_pane

0xcb50,	// (0x0002aac7) dialer_ne_pane_g1

0xcb58,	// (0x0002aacf) dialer_ne_pane_t1_ParamLimits

0xcb58,	// (0x0002aacf) dialer_ne_pane_t1

0x6518,	// (0x0002448f) dialer_ne_pane_t2_ParamLimits

0x6518,	// (0x0002448f) dialer_ne_pane_t2

0x6535,	// (0x000244ac) dialer_ne_pane_t3_ParamLimits

0x6535,	// (0x000244ac) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0002d73f) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0002d73f) dialer_ne_pane_t

0x6559,	// (0x000244d0) dialer_ne_pane_t3_copy1_ParamLimits

0x6559,	// (0x000244d0) dialer_ne_pane_t3_copy1

0x657d,	// (0x000244f4) cell_dialer_keypad_pane_ParamLimits

0x657d,	// (0x000244f4) cell_dialer_keypad_pane

0x6594,	// (0x0002450b) cell_dialer_command_1_pane_ParamLimits

0x6594,	// (0x0002450b) cell_dialer_command_1_pane

0x65aa,	// (0x00024521) cell_dialer_command_2_pane_ParamLimits

0x65aa,	// (0x00024521) cell_dialer_command_2_pane

0xcb6a,	// (0x0002aae1) bg_button_pane_cp02_ParamLimits

0xcb6a,	// (0x0002aae1) bg_button_pane_cp02

0x65b9,	// (0x00024530) cell_dialer_keypad_pane_g1_ParamLimits

0x65b9,	// (0x00024530) cell_dialer_keypad_pane_g1

0xcb6a,	// (0x0002aae1) bg_button_pane_cp03_ParamLimits

0xcb6a,	// (0x0002aae1) bg_button_pane_cp03

0x65ce,	// (0x00024545) cell_dialer_command_1_pane_g1_ParamLimits

0x65ce,	// (0x00024545) cell_dialer_command_1_pane_g1

0xcb76,	// (0x0002aaed) bg_button_pane_cp04

0x65e2,	// (0x00024559) cell_dialer_command_2_pane_g1

0xaeca,	// (0x00028e41) bg_button_pane_cp06

0xcb7e,	// (0x0002aaf5) dialer_ne_clear_pane_g1

0x4a13,	// (0x0002298a) navi_pane_g2

0x4a41,	// (0x000229b8) navi_pane_g3

0x0002,

0xf3f0,	// (0x0002d367) navi_pane_g

0x4a6c,	// (0x000229e3) navi_pane_mv_g2

0x4a93,	// (0x00022a0a) navi_pane_mv_g5

0x4a9b,	// (0x00022a12) navi_pane_mv_t1

0xa401,	// (0x00028378) main_clock2_pane

0x6622,	// (0x00024599) main_clock2_list_pane_ParamLimits

0x6622,	// (0x00024599) main_clock2_list_pane

0x664c,	// (0x000245c3) main_clock2_pane_t1_ParamLimits

0x664c,	// (0x000245c3) main_clock2_pane_t1

0x6670,	// (0x000245e7) main_clock2_pane_t2_ParamLimits

0x6670,	// (0x000245e7) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0002d746) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0002d746) main_clock2_pane_t

0x66cb,	// (0x00024642) popup_clock_analogue_window_cp03_ParamLimits

0x66cb,	// (0x00024642) popup_clock_analogue_window_cp03

0x66e9,	// (0x00024660) popup_clock_digital_window_cp02_ParamLimits

0x66e9,	// (0x00024660) popup_clock_digital_window_cp02

0x6758,	// (0x000246cf) main_clock2_list_single_pane_ParamLimits

0x6758,	// (0x000246cf) main_clock2_list_single_pane

0xaeca,	// (0x00028e41) list_highlight_pane_cp05

0xcb9c,	// (0x0002ab13) main_clock2_list_single_pane_t1

0x3432,	// (0x000213a9) popup_toolbar_window_cp04_ParamLimits

0x5cfc,	// (0x00023c73) camera2_autofocus_pane_g2_ParamLimits

0x5cfc,	// (0x00023c73) camera2_autofocus_pane_g2

0x5d08,	// (0x00023c7f) camera2_autofocus_pane_g3_ParamLimits

0x5d08,	// (0x00023c7f) camera2_autofocus_pane_g3

0x5d14,	// (0x00023c8b) camera2_autofocus_pane_g4_ParamLimits

0x5d14,	// (0x00023c8b) camera2_autofocus_pane_g4

0x5d20,	// (0x00023c97) camera2_autofocus_pane_g5_ParamLimits

0x5d20,	// (0x00023c97) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0002d68f) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0002d68f) camera2_autofocus_pane_g

0x5eb3,	// (0x00023e2a) camera2_autofocus_pane_cp_g2

0x5ebb,	// (0x00023e32) camera2_autofocus_pane_cp_g3

0x5ec3,	// (0x00023e3a) camera2_autofocus_pane_cp_g4

0x5ecb,	// (0x00023e42) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0002d6f5) camera2_autofocus_pane_cp_g

0x64f8,	// (0x0002446f) popup_dialer_spcha_window

0x9c97,	// (0x00027c0e) bg_popup_sub_pane_cp07

0xcbaa,	// (0x0002ab21) list_spcha_pane

0xcbb2,	// (0x0002ab29) list_single_spcha_pane_ParamLimits

0xcbb2,	// (0x0002ab29) list_single_spcha_pane

0x9c97,	// (0x00027c0e) list_highlight_pane_cp06

0xcbc3,	// (0x0002ab3a) list_single_spcha_pane_t1

0xbd5d,	// (0x00029cd4) popup_call2_audio_out_window_g4_ParamLimits

0xbd5d,	// (0x00029cd4) popup_call2_audio_out_window_g4

0x10d1,	// (0x0001f048) main_imed2_pane

0x1635,	// (0x0001f5ac) popup_imed_adjust2_window

0x1648,	// (0x0001f5bf) popup_imed_trans_window_ParamLimits

0x1648,	// (0x0001f5bf) popup_imed_trans_window

0xc566,	// (0x0002a4dd) popup_blid_sat_info2_window_t1

0xc574,	// (0x0002a4eb) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0002d624) popup_blid_sat_info2_window_t

0x678a,	// (0x00024701) aid_size_cell_colour_35

0x67a4,	// (0x0002471b) aid_size_cell_colour_112

0x67bb,	// (0x00024732) aid_size_cell_effect

0xa3df,	// (0x00028356) bg_tb_trans_pane_cp02

0xb06c,	// (0x00028fe3) heading_imed_pane

0x67d5,	// (0x0002474c) listscroll_imed_pane

0xcbd1,	// (0x0002ab48) heading_imed_pane_g1

0xcbd9,	// (0x0002ab50) heading_imed_pane_t1

0xcbe7,	// (0x0002ab5e) grid_imed_colour_35_pane_ParamLimits

0xcbe7,	// (0x0002ab5e) grid_imed_colour_35_pane

0x67e1,	// (0x00024758) grid_imed_effect_pane

0xcbff,	// (0x0002ab76) list_imed_aspect_pane

0x67f1,	// (0x00024768) scroll_pane_cp027_ParamLimits

0x67f1,	// (0x00024768) scroll_pane_cp027

0x67fd,	// (0x00024774) cell_imed_effect_pane_ParamLimits

0x67fd,	// (0x00024774) cell_imed_effect_pane

0xcc07,	// (0x0002ab7e) cell_imed_colour_pane_ParamLimits

0xcc07,	// (0x0002ab7e) cell_imed_colour_pane

0xcc49,	// (0x0002abc0) cell_imed_colour_pane_g1_ParamLimits

0xcc49,	// (0x0002abc0) cell_imed_colour_pane_g1

0xcc5a,	// (0x0002abd1) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc5a,	// (0x0002abd1) hgihlgiht_grid_pane_cp016

0x6815,	// (0x0002478c) cell_imed_effect_pane_g1

0x681d,	// (0x00024794) grid_highlight_pane_cp017

0xcc6b,	// (0x0002abe2) list_imed_single_pane_ParamLimits

0xcc6b,	// (0x0002abe2) list_imed_single_pane

0x9c97,	// (0x00027c0e) list_highlight_pane_cp07

0xcc81,	// (0x0002abf8) list_imed_aspect_pane_comp1_t1

0xc320,	// (0x0002a297) bg_tb_trans_pane_cp05

0xcca3,	// (0x0002ac1a) popup_imed_adjust2_window_g1

0xccca,	// (0x0002ac41) popup_imed_adjust2_window_t1

0xcce2,	// (0x0002ac59) slider_imed_adjust_pane

0xccf6,	// (0x0002ac6d) slider_imed_adjust_pane_g1

0xcd06,	// (0x0002ac7d) slider_imed_adjust_pane_g2

0xcd16,	// (0x0002ac8d) slider_imed_adjust_pane_g3

0xcd27,	// (0x0002ac9e) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0002d763) slider_imed_adjust_pane_g

0x6826,	// (0x0002479d) aid_size_cell_clipart2

0x6832,	// (0x000247a9) grid_imed_clipart_pane

0xcd38,	// (0x0002acaf) scroll_pane_cp031

0x683c,	// (0x000247b3) cell_imed_clipart_pane_ParamLimits

0x683c,	// (0x000247b3) cell_imed_clipart_pane

0x6863,	// (0x000247da) cell_imed_clipart_pane_g1

0x9c97,	// (0x00027c0e) grid_highlight_pane_cp014

0x662e,	// (0x000245a5) main_clock2_pane_g1_ParamLimits

0x662e,	// (0x000245a5) main_clock2_pane_g1

0x6703,	// (0x0002467a) aid_call2_pane_cp10

0x6715,	// (0x0002468c) aid_call_pane_cp10

0xadff,	// (0x00028d76) popup_clock_analogue_window_cp10_g1

0xadff,	// (0x00028d76) popup_clock_analogue_window_cp10_g2

0x6727,	// (0x0002469e) popup_clock_analogue_window_cp10_g3

0x6727,	// (0x0002469e) popup_clock_analogue_window_cp10_g4

0xadff,	// (0x00028d76) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0002d751) popup_clock_analogue_window_cp10_g

0x6739,	// (0x000246b0) popup_clock_analogue_window_cp10_t1

0x19f3,	// (0x0001f96a) clock_digital_number_pane_cp10_ParamLimits

0x19f3,	// (0x0001f96a) clock_digital_number_pane_cp10

0x1a0b,	// (0x0001f982) clock_digital_number_pane_cp11_ParamLimits

0x1a0b,	// (0x0001f982) clock_digital_number_pane_cp11

0x1a23,	// (0x0001f99a) clock_digital_number_pane_cp12_ParamLimits

0x1a23,	// (0x0001f99a) clock_digital_number_pane_cp12

0x1a3b,	// (0x0001f9b2) clock_digital_number_pane_cp13_ParamLimits

0x1a3b,	// (0x0001f9b2) clock_digital_number_pane_cp13

0x1a53,	// (0x0001f9ca) clock_digital_separator_pane_cp10_ParamLimits

0x1a53,	// (0x0001f9ca) clock_digital_separator_pane_cp10

0x676a,	// (0x000246e1) popup_clock_digital_window_cp02_t1_ParamLimits

0x676a,	// (0x000246e1) popup_clock_digital_window_cp02_t1

0xa307,	// (0x0002827e) clock_digital_number_pane_cp10_g1

0xa307,	// (0x0002827e) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0002d76c) clock_digital_number_pane_cp10_g

0xa307,	// (0x0002827e) clock_digital_separator_pane_cp10_g1

0xa307,	// (0x0002827e) clock_digital_separator_pane_g2_cp10

0xae9a,	// (0x00028e11) navi_pane_vded_g4

0xaea3,	// (0x00028e1a) navi_pane_vded_g5

0xaeac,	// (0x00028e23) navi_pane_vded_t1

0x10d1,	// (0x0001f048) main_vded_pane

0x686c,	// (0x000247e3) main_vded_pane_g1

0x6878,	// (0x000247ef) main_vded_pane_g2

0x6882,	// (0x000247f9) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0002d771) main_vded_pane_g

0x688c,	// (0x00024803) main_vded_pane_t1

0x689a,	// (0x00024811) main_vded_pane_t2

0x0001,

0xf801,	// (0x0002d778) main_vded_pane_t

0x68a8,	// (0x0002481f) vded_slider_pane

0x68b2,	// (0x00024829) vded_video_pane

0xcd40,	// (0x0002acb7) vded_video_pane_g1

0x68bc,	// (0x00024833) vded_video_pane_g2

0xc72a,	// (0x0002a6a1) vded_video_pane_g3

0x0002,

0xf806,	// (0x0002d77d) vded_video_pane_g

0xcd4a,	// (0x0002acc1) vded_slider_pane_g1

0xcd53,	// (0x0002acca) vded_slider_pane_g2

0xcd5c,	// (0x0002acd3) vded_slider_pane_g3

0xcd65,	// (0x0002acdc) vded_slider_pane_g4

0xcd6e,	// (0x0002ace5) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0002d784) vded_slider_pane_g

0x63f9,	// (0x00024370) mup3_rocker_pane_ParamLimits

0x63f9,	// (0x00024370) mup3_rocker_pane

0x68c5,	// (0x0002483c) mup3_control_keys_pane_g1

0x68cd,	// (0x00024844) mup3_control_keys_pane_g2

0x68d5,	// (0x0002484c) mup3_control_keys_pane_g3

0x68dd,	// (0x00024854) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0002d78f) mup3_control_keys_pane_g

0x1091,	// (0x0001f008) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1091,	// (0x0001f008) popup_toolbar2_fixed_window_cp01

0x6413,	// (0x0002438a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6413,	// (0x0002438a) popup_toolbar2_fixed_window_cp02

0xb69c,	// (0x00029613) popup_call2_audio_second_window_t4_ParamLimits

0xb69c,	// (0x00029613) popup_call2_audio_second_window_t4

0xbbca,	// (0x00029b41) popup_call2_audio_first_window_t6_ParamLimits

0xbbca,	// (0x00029b41) popup_call2_audio_first_window_t6

0xbe60,	// (0x00029dd7) popup_call2_audio_out_window_t6_ParamLimits

0xbe60,	// (0x00029dd7) popup_call2_audio_out_window_t6

0x10d1,	// (0x0001f048) main_vitu_pane

0x68ed,	// (0x00024864) aid_size_cell_itu_ParamLimits

0x68ed,	// (0x00024864) aid_size_cell_itu

0xd196,	// (0x0002b10d) bg_popup_window_pane_cp08_ParamLimits

0xd196,	// (0x0002b10d) bg_popup_window_pane_cp08

0x68fb,	// (0x00024872) field_vitu_entry_pane_ParamLimits

0x68fb,	// (0x00024872) field_vitu_entry_pane

0x690a,	// (0x00024881) grid_vitu_function_pane_ParamLimits

0x690a,	// (0x00024881) grid_vitu_function_pane

0x691a,	// (0x00024891) grid_vitu_itu_pane_ParamLimits

0x691a,	// (0x00024891) grid_vitu_itu_pane

0x692a,	// (0x000248a1) cell_vitu_itu_pane_ParamLimits

0x692a,	// (0x000248a1) cell_vitu_itu_pane

0x693f,	// (0x000248b6) cell_vitu_function_pane_ParamLimits

0x693f,	// (0x000248b6) cell_vitu_function_pane

0xa3df,	// (0x00028356) bg_popup_sub_pane_cp08_ParamLimits

0xa3df,	// (0x00028356) bg_popup_sub_pane_cp08

0x6953,	// (0x000248ca) field_vitu_entry_pane_t1_ParamLimits

0x6953,	// (0x000248ca) field_vitu_entry_pane_t1

0xcd8f,	// (0x0002ad06) field_vitu_entry_pane_t2_ParamLimits

0xcd8f,	// (0x0002ad06) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0002d79d) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0002d79d) field_vitu_entry_pane_t

0xcdac,	// (0x0002ad23) bg_button_pane_cp05_ParamLimits

0xcdac,	// (0x0002ad23) bg_button_pane_cp05

0x6970,	// (0x000248e7) cell_vitu_itu_pane_g1

0x6988,	// (0x000248ff) cell_vitu_itu_pane_t1_ParamLimits

0x6988,	// (0x000248ff) cell_vitu_itu_pane_t1

0x699a,	// (0x00024911) cell_vitu_itu_pane_t2_ParamLimits

0x699a,	// (0x00024911) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0002d7a2) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0002d7a2) cell_vitu_itu_pane_t

0xcdba,	// (0x0002ad31) bg_button_pane_cp07

0x69dd,	// (0x00024954) cell_vitu_function_pane_g1

0x11aa,	// (0x0001f121) main_calc_pane_g1

0x0e7b,	// (0x0001edf2) aid_visual_content_pane

0x10d1,	// (0x0001f048) main_vradio_pane

0x69e6,	// (0x0002495d) main_vradio_pane_g1_ParamLimits

0x69e6,	// (0x0002495d) main_vradio_pane_g1

0xcdc4,	// (0x0002ad3b) main_vradio_pane_g2_ParamLimits

0xcdc4,	// (0x0002ad3b) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0002d7a9) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0002d7a9) main_vradio_pane_g

0x69f6,	// (0x0002496d) main_vradio_pane_t1_ParamLimits

0x69f6,	// (0x0002496d) main_vradio_pane_t1

0x6a08,	// (0x0002497f) main_vradio_pane_t2_ParamLimits

0x6a08,	// (0x0002497f) main_vradio_pane_t2

0xcdd1,	// (0x0002ad48) main_vradio_pane_t3_ParamLimits

0xcdd1,	// (0x0002ad48) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0002d7ae) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0002d7ae) main_vradio_pane_t

0x6a1a,	// (0x00024991) vradio_rocker_control_pane_ParamLimits

0x6a1a,	// (0x00024991) vradio_rocker_control_pane

0x6a26,	// (0x0002499d) vradio_station_info_pane_ParamLimits

0x6a26,	// (0x0002499d) vradio_station_info_pane

0xcde5,	// (0x0002ad5c) vradio_frequency_info_pane_ParamLimits

0xcde5,	// (0x0002ad5c) vradio_frequency_info_pane

0xc72a,	// (0x0002a6a1) vradio_station_info_pane_g1

0xcdf4,	// (0x0002ad6b) vradio_station_info_pane_t1_ParamLimits

0xcdf4,	// (0x0002ad6b) vradio_station_info_pane_t1

0xce16,	// (0x0002ad8d) vradio_station_info_pane_t2_ParamLimits

0xce16,	// (0x0002ad8d) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0002d7b5) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0002d7b5) vradio_station_info_pane_t

0xce28,	// (0x0002ad9f) vradio_tuning_pane

0xce30,	// (0x0002ada7) vradio_rocker_control_pane_g1

0xce38,	// (0x0002adaf) vradio_rocker_control_pane_g2

0xce40,	// (0x0002adb7) vradio_rocker_control_pane_g3

0xce48,	// (0x0002adbf) vradio_rocker_control_pane_g4

0xce50,	// (0x0002adc7) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0002d7ba) vradio_rocker_control_pane_g

0x6a35,	// (0x000249ac) vradio_frequency_info_pane_g1

0xce58,	// (0x0002adcf) vradio_frequency_info_pane_t1_ParamLimits

0xce58,	// (0x0002adcf) vradio_frequency_info_pane_t1

0x6a3f,	// (0x000249b6) vradio_tuning_pane_g1

0x6a48,	// (0x000249bf) vradio_tuning_pane_t1

0x0e97,	// (0x0001ee0e) area_side_right_pane_ParamLimits

0x0e97,	// (0x0001ee0e) area_side_right_pane

0xc2db,	// (0x0002a252) status_small_pane_g1

0xc2e3,	// (0x0002a25a) status_small_pane_g2

0xc2ec,	// (0x0002a263) status_small_pane_g3

0xc2f5,	// (0x0002a26c) status_small_pane_g4

0x0003,

0xf603,	// (0x0002d57a) status_small_pane_g

0xc2fe,	// (0x0002a275) status_small_pane_t1

0x10d1,	// (0x0001f048) main_video3_pane

0xce6c,	// (0x0002ade3) cams_zoom_vslider_pane

0xce74,	// (0x0002adeb) image3_wide_pane_ParamLimits

0xce74,	// (0x0002adeb) image3_wide_pane

0xce8e,	// (0x0002ae05) image3_wide_small_pane

0xce9a,	// (0x0002ae11) main_video3_pane_g1_ParamLimits

0xce9a,	// (0x0002ae11) main_video3_pane_g1

0xceb6,	// (0x0002ae2d) main_video3_pane_g2_ParamLimits

0xceb6,	// (0x0002ae2d) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0002d7c5) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0002d7c5) main_video3_pane_g

0xced2,	// (0x0002ae49) main_video3_pane_t1_ParamLimits

0xced2,	// (0x0002ae49) main_video3_pane_t1

0xcefd,	// (0x0002ae74) main_video3_pane_t2_ParamLimits

0xcefd,	// (0x0002ae74) main_video3_pane_t2

0xcf28,	// (0x0002ae9f) main_video3_pane_t3_ParamLimits

0xcf28,	// (0x0002ae9f) main_video3_pane_t3

0x0002,

0xf853,	// (0x0002d7ca) main_video3_pane_t_ParamLimits

0xf853,	// (0x0002d7ca) main_video3_pane_t

0xcf55,	// (0x0002aecc) cams_zoom_vslider_pane_g1

0xcf5e,	// (0x0002aed5) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0002d7d1) cams_zoom_vslider_pane_g

0xcf66,	// (0x0002aedd) small_slider_vertical_pane

0xc72a,	// (0x0002a6a1) small_slider_vertical_pane_g1

0xc72a,	// (0x0002a6a1) small_slider_vertical_pane_g2

0xcf6e,	// (0x0002aee5) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0002d7d6) small_slider_vertical_pane_g

0x10d1,	// (0x0001f048) main_hwr_training_pane

0xcf77,	// (0x0002aeee) hwr_training_instruct_pane_ParamLimits

0xcf77,	// (0x0002aeee) hwr_training_instruct_pane

0x6a57,	// (0x000249ce) hwr_training_navi_pane_ParamLimits

0x6a57,	// (0x000249ce) hwr_training_navi_pane

0x6a71,	// (0x000249e8) hwr_training_write_pane_ParamLimits

0x6a71,	// (0x000249e8) hwr_training_write_pane

0x9c97,	// (0x00027c0e) bg_frame_shadow_pane

0xcfae,	// (0x0002af25) hwr_training_write_pane_g1

0xcfb6,	// (0x0002af2d) hwr_training_write_pane_g2

0xcfbe,	// (0x0002af35) hwr_training_write_pane_g3

0xcfc6,	// (0x0002af3d) hwr_training_write_pane_g4

0xcfce,	// (0x0002af45) hwr_training_write_pane_g5

0xcfd6,	// (0x0002af4d) hwr_training_write_pane_g6

0xcfde,	// (0x0002af55) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0002d7dd) hwr_training_write_pane_g

0x1a6b,	// (0x0001f9e2) hwr_training_navi_pane_g1_ParamLimits

0x1a6b,	// (0x0001f9e2) hwr_training_navi_pane_g1

0x1a7d,	// (0x0001f9f4) hwr_training_navi_pane_g2_ParamLimits

0x1a7d,	// (0x0001f9f4) hwr_training_navi_pane_g2

0x1a8f,	// (0x0001fa06) hwr_training_navi_pane_g3_ParamLimits

0x1a8f,	// (0x0001fa06) hwr_training_navi_pane_g3

0x1a9f,	// (0x0001fa16) hwr_training_navi_pane_g4_ParamLimits

0x1a9f,	// (0x0001fa16) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0002d7ec) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0002d7ec) hwr_training_navi_pane_g

0x1ab9,	// (0x0001fa30) hwr_training_navi_pane_t1

0x6aa9,	// (0x00024a20) list_single_hwr_training_instruct_pane_ParamLimits

0x6aa9,	// (0x00024a20) list_single_hwr_training_instruct_pane

0xcfe6,	// (0x0002af5d) list_single_hwr_training_instruct_pane_t1

0xc66a,	// (0x0002a5e1) bg_frame_shadow_pane_g1

0xcff5,	// (0x0002af6c) bg_frame_shadow_pane_g2

0xcffd,	// (0x0002af74) bg_frame_shadow_pane_g3

0xd005,	// (0x0002af7c) bg_frame_shadow_pane_g4

0xd00d,	// (0x0002af84) bg_frame_shadow_pane_g5

0xd015,	// (0x0002af8c) bg_frame_shadow_pane_g6

0xd01d,	// (0x0002af94) bg_frame_shadow_pane_g7

0xa4cc,	// (0x00028443) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0002d7f7) bg_frame_shadow_pane_g

0x10d1,	// (0x0001f048) main_video_tele_dialer_pane

0x1ac7,	// (0x0001fa3e) aid_size_cell_video_keypad_ParamLimits

0x1ac7,	// (0x0001fa3e) aid_size_cell_video_keypad

0x1ad7,	// (0x0001fa4e) grid_video_dialer_keypad_pane_ParamLimits

0x1ad7,	// (0x0001fa4e) grid_video_dialer_keypad_pane

0x1b0b,	// (0x0001fa82) video_down_pane_cp_ParamLimits

0x1b0b,	// (0x0001fa82) video_down_pane_cp

0x1b19,	// (0x0001fa90) cell_video_dialer_keypad_pane_ParamLimits

0x1b19,	// (0x0001fa90) cell_video_dialer_keypad_pane

0xd025,	// (0x0002af9c) bg_button_pane_cp08_ParamLimits

0xd025,	// (0x0002af9c) bg_button_pane_cp08

0x6af4,	// (0x00024a6b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6af4,	// (0x00024a6b) cell_video_dialer_keypad_pane_g1

0x63ed,	// (0x00024364) mup3_rocker2_pane_ParamLimits

0x63ed,	// (0x00024364) mup3_rocker2_pane

0xc72a,	// (0x0002a6a1) mup3_rocker2_pane_g1

0x15a9,	// (0x0001f520) main_dialer2_pane

0x10d1,	// (0x0001f048) main_mp4_pane

0x1b36,	// (0x0001faad) main_mp4_pane_g1_ParamLimits

0x1b36,	// (0x0001faad) main_mp4_pane_g1

0x1b44,	// (0x0001fabb) main_mp4_pane_g2_ParamLimits

0x1b44,	// (0x0001fabb) main_mp4_pane_g2

0x1b52,	// (0x0001fac9) main_mp4_pane_g3_ParamLimits

0x1b52,	// (0x0001fac9) main_mp4_pane_g3

0x1b97,	// (0x0001fb0e) main_mp4_pane_g4_ParamLimits

0x1b97,	// (0x0001fb0e) main_mp4_pane_g4

0x1bbf,	// (0x0001fb36) main_mp4_pane_g5_ParamLimits

0x1bbf,	// (0x0001fb36) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0002d817) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0002d817) main_mp4_pane_g

0x1c0f,	// (0x0001fb86) main_mp4_pane_t1_ParamLimits

0x1c0f,	// (0x0001fb86) main_mp4_pane_t1

0x1c6b,	// (0x0001fbe2) main_mp4_pane_t2_ParamLimits

0x1c6b,	// (0x0001fbe2) main_mp4_pane_t2

0xd031,	// (0x0002afa8) main_mp4_pane_t3_ParamLimits

0xd031,	// (0x0002afa8) main_mp4_pane_t3

0x1cbd,	// (0x0001fc34) main_mp4_pane_t4_ParamLimits

0x1cbd,	// (0x0001fc34) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0002d824) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0002d824) main_mp4_pane_t

0x1d01,	// (0x0001fc78) mp4_progress_pane_ParamLimits

0x1d01,	// (0x0001fc78) mp4_progress_pane

0x1d4b,	// (0x0001fcc2) mp4_rocker_pane_ParamLimits

0x1d4b,	// (0x0001fcc2) mp4_rocker_pane

0xd059,	// (0x0002afd0) mp4_progress_pane_t1

0xd072,	// (0x0002afe9) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0002d82d) mp4_progress_pane_t

0xd08b,	// (0x0002b002) mup_progress_pane_cp04

0xd906,	// (0x0002b87d) mp4_rocker_pane_g1

0x1d6b,	// (0x0001fce2) aid_cell_size_keypad2_ParamLimits

0x1d6b,	// (0x0001fce2) aid_cell_size_keypad2

0x1d7b,	// (0x0001fcf2) dialer2_ne_pane_ParamLimits

0x1d7b,	// (0x0001fcf2) dialer2_ne_pane

0x1d89,	// (0x0001fd00) grid_dialer2_keypad_pane_ParamLimits

0x1d89,	// (0x0001fd00) grid_dialer2_keypad_pane

0xd1a4,	// (0x0002b11b) bg_popup_call_pane_cp07_ParamLimits

0xd1a4,	// (0x0002b11b) bg_popup_call_pane_cp07

0x6b2f,	// (0x00024aa6) dialer2_ne_pane_t1_ParamLimits

0x6b2f,	// (0x00024aa6) dialer2_ne_pane_t1

0x1d99,	// (0x0001fd10) cell_dialer2_keypad_pane_ParamLimits

0x1d99,	// (0x0001fd10) cell_dialer2_keypad_pane

0xd0a9,	// (0x0002b020) bg_button_pane_pane_cp04_ParamLimits

0xd0a9,	// (0x0002b020) bg_button_pane_pane_cp04

0x6b54,	// (0x00024acb) cell_dialer2_keypad_pane_g1_ParamLimits

0x6b54,	// (0x00024acb) cell_dialer2_keypad_pane_g1

0x32f4,	// (0x0002126b) aid_placing_vt_set_content_ParamLimits

0x32f4,	// (0x0002126b) aid_placing_vt_set_content

0x3320,	// (0x00021297) aid_placing_vt_set_title_ParamLimits

0x3320,	// (0x00021297) aid_placing_vt_set_title

0x10d1,	// (0x0001f048) main_image3_pane

0x1de0,	// (0x0001fd57) area_side_right_pane_cp01_ParamLimits

0x1de0,	// (0x0001fd57) area_side_right_pane_cp01

0x1e0d,	// (0x0001fd84) main_image3_pane_g1_ParamLimits

0x1e0d,	// (0x0001fd84) main_image3_pane_g1

0x1e1b,	// (0x0001fd92) main_image3_pane_g2_ParamLimits

0x1e1b,	// (0x0001fd92) main_image3_pane_g2

0x1e34,	// (0x0001fdab) main_image3_pane_g3_ParamLimits

0x1e34,	// (0x0001fdab) main_image3_pane_g3

0x1e4d,	// (0x0001fdc4) main_image3_pane_g4_ParamLimits

0x1e4d,	// (0x0001fdc4) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0002d83c) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0002d83c) main_image3_pane_g

0x1e66,	// (0x0001fddd) main_image3_pane_t1_ParamLimits

0x1e66,	// (0x0001fddd) main_image3_pane_t1

0x1e8b,	// (0x0001fe02) main_image3_pane_t2_ParamLimits

0x1e8b,	// (0x0001fe02) main_image3_pane_t2

0x1eaa,	// (0x0001fe21) main_image3_pane_t3_ParamLimits

0x1eaa,	// (0x0001fe21) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0002d845) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0002d845) main_image3_pane_t

0xd196,	// (0x0002b10d) grid_sctrl_middle_pane_cp01_ParamLimits

0xd196,	// (0x0002b10d) grid_sctrl_middle_pane_cp01

0x6bbc,	// (0x00024b33) cell_sctrl_middle_pane_cp01_ParamLimits

0x6bbc,	// (0x00024b33) cell_sctrl_middle_pane_cp01

0x6bcd,	// (0x00024b44) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6bcd,	// (0x00024b44) cell_sctrl_middle_pane_cp01_g1

0x10d1,	// (0x0001f048) main_call4_pane

0x6bda,	// (0x00024b51) aid_size_button_call4_ParamLimits

0x6bda,	// (0x00024b51) aid_size_button_call4

0x6c0a,	// (0x00024b81) call4_windows_pane_ParamLimits

0x6c0a,	// (0x00024b81) call4_windows_pane

0x6c24,	// (0x00024b9b) grid_call4_button_pane_ParamLimits

0x6c24,	// (0x00024b9b) grid_call4_button_pane

0xd0b5,	// (0x0002b02c) call4_windows_conf_pane

0xd0ca,	// (0x0002b041) popup_call4_audio_first_window_ParamLimits

0xd0ca,	// (0x0002b041) popup_call4_audio_first_window

0xd116,	// (0x0002b08d) popup_call4_audio_second_window_ParamLimits

0xd116,	// (0x0002b08d) popup_call4_audio_second_window

0xd12a,	// (0x0002b0a1) popup_call4_audio_wait_window_ParamLimits

0xd12a,	// (0x0002b0a1) popup_call4_audio_wait_window

0x6c48,	// (0x00024bbf) cell_call4_button_pane_ParamLimits

0x6c48,	// (0x00024bbf) cell_call4_button_pane

0x6c6d,	// (0x00024be4) bg_button_pane_cp09_ParamLimits

0x6c6d,	// (0x00024be4) bg_button_pane_cp09

0x6c79,	// (0x00024bf0) cell_call4_button_pane_g1_ParamLimits

0x6c79,	// (0x00024bf0) cell_call4_button_pane_g1

0x6c86,	// (0x00024bfd) cell_call4_button_pane_t1_ParamLimits

0x6c86,	// (0x00024bfd) cell_call4_button_pane_t1

0xd172,	// (0x0002b0e9) popup_call4_audio_conf_window_ParamLimits

0xd172,	// (0x0002b0e9) popup_call4_audio_conf_window

0x6420,	// (0x00024397) mup3_progress_pane_t1_ParamLimits

0x643f,	// (0x000243b6) mup3_progress_pane_t2_ParamLimits

0xca79,	// (0x0002a9f0) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0002d71e) mup3_progress_pane_t_ParamLimits

0xca96,	// (0x0002aa0d) mup_progress_pane_cp03_ParamLimits

0x68e5,	// (0x0002485c) mup3_control_keys_pane_g4_copy1

0x1d2f,	// (0x0001fca6) mp4_rocker2_pane_ParamLimits

0x1d2f,	// (0x0001fca6) mp4_rocker2_pane

0xd186,	// (0x0002b0fd) mp4_rocker2_pane_g1

0xd18e,	// (0x0002b105) mp4_rocker2_pane_g2

0x1f0b,	// (0x0001fe82) mp4_rocker2_pane_g3

0x1f13,	// (0x0001fe8a) mp4_rocker2_pane_g4

0x1f1b,	// (0x0001fe92) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0002d84e) mp4_rocker2_pane_g

0x10d1,	// (0x0001f048) main_camera4_pane

0x10d1,	// (0x0001f048) main_video4_pane

0x1ae7,	// (0x0001fa5e) main_video_tele_dialer_pane_t1_ParamLimits

0x1ae7,	// (0x0001fa5e) main_video_tele_dialer_pane_t1

0x1af9,	// (0x0001fa70) main_video_tele_dialer_pane_t2_ParamLimits

0x1af9,	// (0x0001fa70) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0002d808) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0002d808) main_video_tele_dialer_pane_t

0x1f3b,	// (0x0001feb2) cam4_autofocus_pane_ParamLimits

0x1f3b,	// (0x0001feb2) cam4_autofocus_pane

0x1f55,	// (0x0001fecc) cam4_image_uncrop_pane_ParamLimits

0x1f55,	// (0x0001fecc) cam4_image_uncrop_pane

0x1f6c,	// (0x0001fee3) cam4_indicators_pane_ParamLimits

0x1f6c,	// (0x0001fee3) cam4_indicators_pane

0x1f88,	// (0x0001feff) main_camera4_pane_g1_ParamLimits

0x1f88,	// (0x0001feff) main_camera4_pane_g1

0x1f94,	// (0x0001ff0b) main_camera4_pane_g2_ParamLimits

0x1f94,	// (0x0001ff0b) main_camera4_pane_g2

0x1f94,	// (0x0001ff0b) main_camera4_pane_g3_ParamLimits

0x1f94,	// (0x0001ff0b) main_camera4_pane_g3

0x1fa0,	// (0x0001ff17) main_camera4_pane_g4_ParamLimits

0x1fa0,	// (0x0001ff17) main_camera4_pane_g4

0x1fac,	// (0x0001ff23) main_camera4_pane_g5_ParamLimits

0x1fac,	// (0x0001ff23) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0002d859) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0002d859) main_camera4_pane_g

0x1fc6,	// (0x0001ff3d) main_camera4_pane_t1_ParamLimits

0x1fc6,	// (0x0001ff3d) main_camera4_pane_t1

0x1fea,	// (0x0001ff61) bg_tb_trans_pane_cp06

0x2000,	// (0x0001ff77) cam4_indicators_pane_g1

0x2011,	// (0x0001ff88) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0002d874) cam4_indicators_pane_g

0x202f,	// (0x0001ffa6) cam4_indicators_pane_t1

0x2059,	// (0x0001ffd0) main_video4_pane_g1_ParamLimits

0x2059,	// (0x0001ffd0) main_video4_pane_g1

0x2065,	// (0x0001ffdc) main_video4_pane_g2_ParamLimits

0x2065,	// (0x0001ffdc) main_video4_pane_g2

0x2071,	// (0x0001ffe8) main_video4_pane_g3_ParamLimits

0x2071,	// (0x0001ffe8) main_video4_pane_g3

0x207d,	// (0x0001fff4) main_video4_pane_g4_ParamLimits

0x207d,	// (0x0001fff4) main_video4_pane_g4

0x0004,

0xf904,	// (0x0002d87b) main_video4_pane_g_ParamLimits

0xf904,	// (0x0002d87b) main_video4_pane_g

0x209d,	// (0x00020014) vid4_indicators_pane_ParamLimits

0x209d,	// (0x00020014) vid4_indicators_pane

0x20bc,	// (0x00020033) video4_image_uncrop_cif_pane_ParamLimits

0x20bc,	// (0x00020033) video4_image_uncrop_cif_pane

0x20cb,	// (0x00020042) video4_image_uncrop_nhd_pane_ParamLimits

0x20cb,	// (0x00020042) video4_image_uncrop_nhd_pane

0x1f55,	// (0x0001fecc) video4_image_uncrop_vga_pane_ParamLimits

0x1f55,	// (0x0001fecc) video4_image_uncrop_vga_pane

0x159b,	// (0x0001f512) bg_tb_trans_pane_cp07

0x20e0,	// (0x00020057) vid4_indicators_pane_g1

0x20f4,	// (0x0002006b) vid4_indicators_pane_g2

0x2108,	// (0x0002007f) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0002d886) vid4_indicators_pane_g

0x2135,	// (0x000200ac) vid4_indicators_pane_t1

0x6cbc,	// (0x00024c33) cam4_autofocus_pane_g1

0x6cc4,	// (0x00024c3b) cam4_autofocus_pane_g2

0x6ccc,	// (0x00024c43) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0002d891) cam4_autofocus_pane_g

0x6cd4,	// (0x00024c4b) cam4_autofocus_pane_g3_copy1

0x6ad8,	// (0x00024a4f) video_down_pane_cp_t1

0x6ae6,	// (0x00024a5d) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0002d80d) video_down_pane_cp_t

0x10c3,	// (0x0001f03a) popup_vitu2_window_ParamLimits

0x10c3,	// (0x0001f03a) popup_vitu2_window

0x214c,	// (0x000200c3) aid_size_cell2_itu2_ParamLimits

0x214c,	// (0x000200c3) aid_size_cell2_itu2

0x216e,	// (0x000200e5) aid_size_cell_itu2_ParamLimits

0x216e,	// (0x000200e5) aid_size_cell_itu2

0x21b2,	// (0x00020129) bg_popup_window_pane_cp09_ParamLimits

0x21b2,	// (0x00020129) bg_popup_window_pane_cp09

0x21c0,	// (0x00020137) field_vitu2_entry_pane_ParamLimits

0x21c0,	// (0x00020137) field_vitu2_entry_pane

0x21e0,	// (0x00020157) grid_vitu2_function_pane_ParamLimits

0x21e0,	// (0x00020157) grid_vitu2_function_pane

0x2224,	// (0x0002019b) grid_vitu2_itu_pane_ParamLimits

0x2224,	// (0x0002019b) grid_vitu2_itu_pane

0x229a,	// (0x00020211) cell_vitu2_itu_pane_ParamLimits

0x229a,	// (0x00020211) cell_vitu2_itu_pane

0x22af,	// (0x00020226) cell_vitu2_function_pane_ParamLimits

0x22af,	// (0x00020226) cell_vitu2_function_pane

0xd1b2,	// (0x0002b129) bg_popup_call_pane_cp08_ParamLimits

0xd1b2,	// (0x0002b129) bg_popup_call_pane_cp08

0xd1cb,	// (0x0002b142) field_vitu2_entry_pane_g1

0xd1d7,	// (0x0002b14e) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0002d898) field_vitu2_entry_pane_g

0xd1f1,	// (0x0002b168) field_vitu2_entry_pane_t1_ParamLimits

0xd1f1,	// (0x0002b168) field_vitu2_entry_pane_t1

0xd221,	// (0x0002b198) field_vitu2_entry_pane_t2_ParamLimits

0xd221,	// (0x0002b198) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0002d89f) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0002d89f) field_vitu2_entry_pane_t

0x22f0,	// (0x00020267) bg_button_pane_cp010_ParamLimits

0x22f0,	// (0x00020267) bg_button_pane_cp010

0x22fe,	// (0x00020275) cell_vitu2_itu_pane_g1

0x231c,	// (0x00020293) cell_vitu2_itu_pane_t1_ParamLimits

0x231c,	// (0x00020293) cell_vitu2_itu_pane_t1

0x236e,	// (0x000202e5) cell_vitu2_itu_pane_t2_ParamLimits

0x236e,	// (0x000202e5) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0002d8a9) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0002d8a9) cell_vitu2_itu_pane_t

0x159b,	// (0x0001f512) bg_button_pane_cp011

0x2429,	// (0x000203a0) cell_vitu2_function_pane_g1

0x10d1,	// (0x0001f048) main_myfav_hc_pane

0x1eec,	// (0x0001fe63) popup_image3_note_pane_ParamLimits

0x1eec,	// (0x0001fe63) popup_image3_note_pane

0x1efa,	// (0x0001fe71) popup_image3_tool_bar_pane_ParamLimits

0x1efa,	// (0x0001fe71) popup_image3_tool_bar_pane

0x23dc,	// (0x00020353) cell_vitu2_itu_pane_t3_ParamLimits

0x23dc,	// (0x00020353) cell_vitu2_itu_pane_t3

0x9c97,	// (0x00027c0e) bg_popup_trans_pane

0xd246,	// (0x0002b1bd) grid_image3_tool_bar_pane

0xd250,	// (0x0002b1c7) bg_popup_trans_pane_g1

0xa82b,	// (0x000287a2) bg_popup_trans_pane_g2

0xd258,	// (0x0002b1cf) bg_popup_trans_pane_g3

0xd260,	// (0x0002b1d7) bg_popup_trans_pane_g4

0xd268,	// (0x0002b1df) bg_popup_trans_pane_g5

0xd270,	// (0x0002b1e7) bg_popup_trans_pane_g6

0xd278,	// (0x0002b1ef) bg_popup_trans_pane_g7

0xd280,	// (0x0002b1f7) bg_popup_trans_pane_g8

0xa80b,	// (0x00028782) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0002d8b0) bg_popup_trans_pane_g

0xd288,	// (0x0002b1ff) cell_image3_tool_bar_pane_ParamLimits

0xd288,	// (0x0002b1ff) cell_image3_tool_bar_pane

0xc72a,	// (0x0002a6a1) cell_image3_tool_bar_pane_g1

0x9c97,	// (0x00027c0e) bg_popup_trans_pane_cp1

0xd29c,	// (0x0002b213) popup_image3_note_pane_t1

0xd2aa,	// (0x0002b221) popup_image3_note_pane_t2

0xd2b8,	// (0x0002b22f) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0002d8c3) popup_image3_note_pane_t

0xd2c6,	// (0x0002b23d) popup_image3_note_pane_t3_copy1

0x6cdc,	// (0x00024c53) bg_myfav_hc_instruction_pane_ParamLimits

0x6cdc,	// (0x00024c53) bg_myfav_hc_instruction_pane

0x6cf4,	// (0x00024c6b) cell_myfav_contact_pane_ParamLimits

0x6cf4,	// (0x00024c6b) cell_myfav_contact_pane

0x6d0e,	// (0x00024c85) cell_myfav_contact_pane_cp1_ParamLimits

0x6d0e,	// (0x00024c85) cell_myfav_contact_pane_cp1

0x6d26,	// (0x00024c9d) cell_myfav_contact_pane_cp2_ParamLimits

0x6d26,	// (0x00024c9d) cell_myfav_contact_pane_cp2

0x6d3e,	// (0x00024cb5) cell_myfav_contact_pane_cp3_ParamLimits

0x6d3e,	// (0x00024cb5) cell_myfav_contact_pane_cp3

0x6d55,	// (0x00024ccc) cell_myfav_contact_pane_cp4_ParamLimits

0x6d55,	// (0x00024ccc) cell_myfav_contact_pane_cp4

0x6d6b,	// (0x00024ce2) cell_myfav_contact_pane_cp5_ParamLimits

0x6d6b,	// (0x00024ce2) cell_myfav_contact_pane_cp5

0x6d7f,	// (0x00024cf6) cell_myfav_contact_pane_cp6_ParamLimits

0x6d7f,	// (0x00024cf6) cell_myfav_contact_pane_cp6

0x6d93,	// (0x00024d0a) cell_myfav_contact_pane_cp7_ParamLimits

0x6d93,	// (0x00024d0a) cell_myfav_contact_pane_cp7

0xd2d4,	// (0x0002b24b) listscroll_gen_pane_cp05

0x6dab,	// (0x00024d22) main_myfav_hc_pane_g1_ParamLimits

0x6dab,	// (0x00024d22) main_myfav_hc_pane_g1

0x6dc3,	// (0x00024d3a) main_myfav_hc_pane_g2_ParamLimits

0x6dc3,	// (0x00024d3a) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0002d8ca) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0002d8ca) main_myfav_hc_pane_g

0x6df3,	// (0x00024d6a) main_myfav_hc_pane_t1_ParamLimits

0x6df3,	// (0x00024d6a) main_myfav_hc_pane_t1

0xd2dd,	// (0x0002b254) main_myfav_hc_pane_t2_ParamLimits

0xd2dd,	// (0x0002b254) main_myfav_hc_pane_t2

0xd2ef,	// (0x0002b266) main_myfav_hc_pane_t3_ParamLimits

0xd2ef,	// (0x0002b266) main_myfav_hc_pane_t3

0x6e0a,	// (0x00024d81) main_myfav_hc_pane_t4_ParamLimits

0x6e0a,	// (0x00024d81) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0002d8d1) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0002d8d1) main_myfav_hc_pane_t

0xc72a,	// (0x0002a6a1) bg_myfav_hc_instruction_pane_g1

0xd301,	// (0x0002b278) cell_myfav_contact_pane_g1_ParamLimits

0xd301,	// (0x0002b278) cell_myfav_contact_pane_g1

0xd301,	// (0x0002b278) cell_myfav_contact_pane_g2_ParamLimits

0xd301,	// (0x0002b278) cell_myfav_contact_pane_g2

0xd30d,	// (0x0002b284) cell_myfav_contact_pane_g3_ParamLimits

0xd30d,	// (0x0002b284) cell_myfav_contact_pane_g3

0xca63,	// (0x0002a9da) cell_myfav_contact_pane_g4_ParamLimits

0xca63,	// (0x0002a9da) cell_myfav_contact_pane_g4

0xd31a,	// (0x0002b291) cell_myfav_contact_pane_g5_ParamLimits

0xd31a,	// (0x0002b291) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0002d8dc) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0002d8dc) cell_myfav_contact_pane_g

0x6ddb,	// (0x00024d52) main_myfav_hc_pane_g3_ParamLimits

0x6ddb,	// (0x00024d52) main_myfav_hc_pane_g3

0x0fcc,	// (0x0001ef43) popup_adpt_find_window

0x6e34,	// (0x00024dab) afind_page_pane_ParamLimits

0x6e34,	// (0x00024dab) afind_page_pane

0x6e41,	// (0x00024db8) aid_size_cell_afind_ParamLimits

0x6e41,	// (0x00024db8) aid_size_cell_afind

0x6e5b,	// (0x00024dd2) bg_popup_sub_pane_cp09_ParamLimits

0x6e5b,	// (0x00024dd2) bg_popup_sub_pane_cp09

0x6e68,	// (0x00024ddf) find_pane_cp01_ParamLimits

0x6e68,	// (0x00024ddf) find_pane_cp01

0xd326,	// (0x0002b29d) grid_afind_control_pane_ParamLimits

0xd326,	// (0x0002b29d) grid_afind_control_pane

0x6e75,	// (0x00024dec) grid_afind_pane_ParamLimits

0x6e75,	// (0x00024dec) grid_afind_pane

0x6e8f,	// (0x00024e06) cell_afind_pane_ParamLimits

0x6e8f,	// (0x00024e06) cell_afind_pane

0xc72a,	// (0x0002a6a1) afind_page_pane_g1

0x6ed7,	// (0x00024e4e) afind_page_pane_g2

0x6ee0,	// (0x00024e57) afind_page_pane_g3

0x0002,

0xf970,	// (0x0002d8e7) afind_page_pane_g

0x6ee9,	// (0x00024e60) afind_page_pane_t1

0xd33a,	// (0x0002b2b1) cell_afind_grid_control_pane_ParamLimits

0xd33a,	// (0x0002b2b1) cell_afind_grid_control_pane

0xd0a9,	// (0x0002b020) bg_button_pane_cp69_ParamLimits

0xd0a9,	// (0x0002b020) bg_button_pane_cp69

0x6f09,	// (0x00024e80) cell_afind_pane_g1_ParamLimits

0x6f09,	// (0x00024e80) cell_afind_pane_g1

0x6f16,	// (0x00024e8d) cell_afind_pane_t1_ParamLimits

0x6f16,	// (0x00024e8d) cell_afind_pane_t1

0xa624,	// (0x0002859b) bg_button_pane_cp72

0xd349,	// (0x0002b2c0) cell_afind_grid_control_pane_g1

0x52ee,	// (0x00023265) aid_image_placing_area_ParamLimits

0x52ee,	// (0x00023265) aid_image_placing_area

0xcd77,	// (0x0002acee) field_vitu_entry_pane_g1_ParamLimits

0xcd77,	// (0x0002acee) field_vitu_entry_pane_g1

0xcd83,	// (0x0002acfa) field_vitu_entry_pane_g2_ParamLimits

0xcd83,	// (0x0002acfa) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0002d798) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0002d798) field_vitu_entry_pane_g

0x6970,	// (0x000248e7) cell_vitu_itu_pane_g1_ParamLimits

0x69c0,	// (0x00024937) cell_vitu_itu_pane_t3_ParamLimits

0x69c0,	// (0x00024937) cell_vitu_itu_pane_t3

0xd059,	// (0x0002afd0) mp4_progress_pane_t1_ParamLimits

0xd072,	// (0x0002afe9) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0002d82d) mp4_progress_pane_t_ParamLimits

0xd08b,	// (0x0002b002) mup_progress_pane_cp04_ParamLimits

0x6e1e,	// (0x00024d95) main_myfav_hc_pane_t5_ParamLimits

0x6e1e,	// (0x00024d95) main_myfav_hc_pane_t5

0x0e8f,	// (0x0001ee06) aid_zoom_text_primary

0x0fcc,	// (0x0001ef43) popup_adpt_find_window_ParamLimits

0x159b,	// (0x0001f512) main_cam_set_pane

0x1f7a,	// (0x0001fef1) cam4_zoom_pane_ParamLimits

0x1f7a,	// (0x0001fef1) cam4_zoom_pane

0x6f28,	// (0x00024e9f) main_cam_set_pane_g1_ParamLimits

0x6f28,	// (0x00024e9f) main_cam_set_pane_g1

0x6f36,	// (0x00024ead) main_cam_set_pane_g2_ParamLimits

0x6f36,	// (0x00024ead) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0002d8ee) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0002d8ee) main_cam_set_pane_g

0x6f42,	// (0x00024eb9) main_cam_set_pane_t1_ParamLimits

0x6f42,	// (0x00024eb9) main_cam_set_pane_t1

0x6f5e,	// (0x00024ed5) main_cset_listscroll_pane_ParamLimits

0x6f5e,	// (0x00024ed5) main_cset_listscroll_pane

0x6f89,	// (0x00024f00) main_cset_slider_pane_ParamLimits

0x6f89,	// (0x00024f00) main_cset_slider_pane

0xd35a,	// (0x0002b2d1) main_cset_list_pane_ParamLimits

0xd35a,	// (0x0002b2d1) main_cset_list_pane

0xd36a,	// (0x0002b2e1) scroll_pane_cp028

0x6fa8,	// (0x00024f1f) aid_area_touch_slider

0x6fc4,	// (0x00024f3b) cset_slider_pane

0x6fee,	// (0x00024f65) main_cset_slider_pane_g1

0x7003,	// (0x00024f7a) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0002d8f3) main_cset_slider_pane_g

0xd3a3,	// (0x0002b31a) main_cset_slider_pane_t1

0x70c9,	// (0x00025040) main_cset_slider_pane_t2

0x70e3,	// (0x0002505a) main_cset_slider_pane_t3

0x70fd,	// (0x00025074) main_cset_slider_pane_t4

0x711b,	// (0x00025092) main_cset_slider_pane_t5

0x7139,	// (0x000250b0) main_cset_slider_pane_t6

0x7150,	// (0x000250c7) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0002d918) main_cset_slider_pane_t

0x725e,	// (0x000251d5) cset_list_set_pane_ParamLimits

0x725e,	// (0x000251d5) cset_list_set_pane

0x727a,	// (0x000251f1) aid_position_infowindow_above

0x7282,	// (0x000251f9) aid_position_infowindow_below

0x728a,	// (0x00025201) cset_list_set_pane_g1_ParamLimits

0x728a,	// (0x00025201) cset_list_set_pane_g1

0x7296,	// (0x0002520d) cset_list_set_pane_g3_ParamLimits

0x7296,	// (0x0002520d) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0002d937) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0002d937) cset_list_set_pane_g

0x72a5,	// (0x0002521c) cset_list_set_pane_t1_ParamLimits

0x72a5,	// (0x0002521c) cset_list_set_pane_t1

0xa3df,	// (0x00028356) list_highlight_pane_cp021_ParamLimits

0xa3df,	// (0x00028356) list_highlight_pane_cp021

0xb000,	// (0x00028f77) cset_slider_pane_g1

0xb012,	// (0x00028f89) cset_slider_pane_g2

0xb009,	// (0x00028f80) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0002d93c) cset_slider_pane_g

0x243d,	// (0x000203b4) aid_area_touch_cam4_zoom

0x2445,	// (0x000203bc) cam4_zoom_cont_pane

0x244d,	// (0x000203c4) cam4_zoom_pane_g1

0x2455,	// (0x000203cc) cam4_zoom_pane_g2

0x245d,	// (0x000203d4) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0002d943) cam4_zoom_pane_g

0x2465,	// (0x000203dc) cam4_zoom_cont_pane_g1

0x246e,	// (0x000203e5) cam4_zoom_cont_pane_g2

0x2477,	// (0x000203ee) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0002d94a) cam4_zoom_cont_pane_g

0x6bf4,	// (0x00024b6b) call4_image_pane_ParamLimits

0x6bf4,	// (0x00024b6b) call4_image_pane

0xd0b5,	// (0x0002b02c) call4_windows_conf_pane_ParamLimits

0xd0f4,	// (0x0002b06b) popup_call4_audio_in_window_ParamLimits

0xd0f4,	// (0x0002b06b) popup_call4_audio_in_window

0x9c97,	// (0x00027c0e) bg_popup_call2_act_pane_cp02

0xd16a,	// (0x0002b0e1) call4_list_conf_pane

0xc72a,	// (0x0002a6a1) call4_image_pane_g1

0xc72a,	// (0x0002a6a1) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0002d65e) call4_image_pane_g

0xd44f,	// (0x0002b3c6) list_single_graphic_popup_conf4_pane_ParamLimits

0xd44f,	// (0x0002b3c6) list_single_graphic_popup_conf4_pane

0x9c97,	// (0x00027c0e) list_highlight_pane_cp022

0xd462,	// (0x0002b3d9) list_single_graphic_popup_conf4_pane_g1

0xace7,	// (0x00028c5e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0002d951) list_single_graphic_popup_conf4_pane_g

0xd46a,	// (0x0002b3e1) list_single_graphic_popup_conf4_pane_t1

0x3484,	// (0x000213fb) popup_vtel_slider_window_ParamLimits

0x3484,	// (0x000213fb) popup_vtel_slider_window

0xd097,	// (0x0002b00e) dialer2_ne_pane_t2_ParamLimits

0xd097,	// (0x0002b00e) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0002d832) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0002d832) dialer2_ne_pane_t

0xa3df,	// (0x00028356) bg_popup_sub_pane_cp010_ParamLimits

0xa3df,	// (0x00028356) bg_popup_sub_pane_cp010

0x72ba,	// (0x00025231) popup_vtel_slider_window_g1_ParamLimits

0x72ba,	// (0x00025231) popup_vtel_slider_window_g1

0x72c6,	// (0x0002523d) popup_vtel_slider_window_g2_ParamLimits

0x72c6,	// (0x0002523d) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0002d956) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0002d956) popup_vtel_slider_window_g

0x730e,	// (0x00025285) vtel_slider_pane_ParamLimits

0x730e,	// (0x00025285) vtel_slider_pane

0x731d,	// (0x00025294) vtel_slider_pane_g1_ParamLimits

0x731d,	// (0x00025294) vtel_slider_pane_g1

0x732a,	// (0x000252a1) vtel_slider_pane_g2_ParamLimits

0x732a,	// (0x000252a1) vtel_slider_pane_g2

0x7337,	// (0x000252ae) vtel_slider_pane_g3_ParamLimits

0x7337,	// (0x000252ae) vtel_slider_pane_g3

0x731d,	// (0x00025294) vtel_slider_pane_g4_ParamLimits

0x731d,	// (0x00025294) vtel_slider_pane_g4

0x7344,	// (0x000252bb) vtel_slider_pane_g5_ParamLimits

0x7344,	// (0x000252bb) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0002d95f) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0002d95f) vtel_slider_pane_g

0x10d1,	// (0x0001f048) main_gallery2_pane

0x2194,	// (0x0002010b) aid_size_row_itut2_dropdow_list_ParamLimits

0x2194,	// (0x0002010b) aid_size_row_itut2_dropdow_list

0x2202,	// (0x00020179) grid_vitu2_function_top_pane_ParamLimits

0x2202,	// (0x00020179) grid_vitu2_function_top_pane

0x2258,	// (0x000201cf) popup_vitu2_dropdown_list_window_ParamLimits

0x2258,	// (0x000201cf) popup_vitu2_dropdown_list_window

0x2278,	// (0x000201ef) popup_vitu2_match_list_window

0x2480,	// (0x000203f7) cell_vitu2_function_top_pane_ParamLimits

0x2480,	// (0x000203f7) cell_vitu2_function_top_pane

0x24a0,	// (0x00020417) cell_vitu2_function_top_pane_cp01_ParamLimits

0x24a0,	// (0x00020417) cell_vitu2_function_top_pane_cp01

0x24be,	// (0x00020435) cell_vitu2_function_top_wide_pane_ParamLimits

0x24be,	// (0x00020435) cell_vitu2_function_top_wide_pane

0x159b,	// (0x0001f512) bg_button_pane_cp012

0x24dc,	// (0x00020453) cell_vitu2_function_top_pane_g1

0x24eb,	// (0x00020462) bg_button_pane_cp013_ParamLimits

0x24eb,	// (0x00020462) bg_button_pane_cp013

0x735f,	// (0x000252d6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x735f,	// (0x000252d6) cell_vitu2_function_top_wide_pane_g1

0x10c3,	// (0x0001f03a) bg_popup_sub_pane_cp20

0x2507,	// (0x0002047e) list_vitu2_match_list_pane

0xd250,	// (0x0002b1c7) bg_popup_sub_pane_cp20_g1

0xd258,	// (0x0002b1cf) bg_popup_sub_pane_cp20_g2

0xa82b,	// (0x000287a2) bg_popup_sub_pane_cp20_g3

0xd260,	// (0x0002b1d7) bg_popup_sub_pane_cp20_g4

0xa80b,	// (0x00028782) bg_popup_sub_pane_cp20_g5

0xd480,	// (0x0002b3f7) bg_popup_sub_pane_cp20_g6

0xd270,	// (0x0002b1e7) bg_popup_sub_pane_cp20_g7

0xd278,	// (0x0002b1ef) bg_popup_sub_pane_cp20_g8

0xd280,	// (0x0002b1f7) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0002d96a) bg_popup_sub_pane_cp20_g

0x251f,	// (0x00020496) list_vitu2_match_list_item_pane_ParamLimits

0x251f,	// (0x00020496) list_vitu2_match_list_item_pane

0x2531,	// (0x000204a8) list_vitu2_match_list_item_pane_t1

0x10d1,	// (0x0001f048) bg_popup_sub_pane_cp21

0x253f,	// (0x000204b6) grid_vitu2_dropdown_list_pane

0x2547,	// (0x000204be) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2547,	// (0x000204be) cell_vitu2_dropdown_list_char_pane

0x2568,	// (0x000204df) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2568,	// (0x000204df) cell_vitu2_dropdown_list_ctrl_pane

0xd488,	// (0x0002b3ff) cell_vitu2_dropdown_list_char_pane_g1

0xd491,	// (0x0002b408) cell_vitu2_dropdown_list_char_pane_g2

0xd49a,	// (0x0002b411) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0002d987) cell_vitu2_dropdown_list_char_pane_g

0x2594,	// (0x0002050b) cell_vitu2_dropdown_list_char_pane_t1

0x73bb,	// (0x00025332) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x73bb,	// (0x00025332) cell_vitu2_dropdown_list_ctrl_pane_g1

0x73c8,	// (0x0002533f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x73c8,	// (0x0002533f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x73d5,	// (0x0002534c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x73d5,	// (0x0002534c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x25a2,	// (0x00020519) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x25a2,	// (0x00020519) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1fea,	// (0x0001ff61) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1fea,	// (0x0001ff61) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0002d98e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0002d98e) cell_vitu2_dropdown_list_ctrl_pane_g

0x73e2,	// (0x00025359) aid_size_cell_gallery2_ParamLimits

0x73e2,	// (0x00025359) aid_size_cell_gallery2

0x73f0,	// (0x00025367) grid_gallery2_pane_ParamLimits

0x73f0,	// (0x00025367) grid_gallery2_pane

0x73ff,	// (0x00025376) scroll_pane_cp029_ParamLimits

0x73ff,	// (0x00025376) scroll_pane_cp029

0x740b,	// (0x00025382) cell_gallery2_pane_ParamLimits

0x740b,	// (0x00025382) cell_gallery2_pane

0xd4a3,	// (0x0002b41a) cell_gallery2_pane_g2

0x7439,	// (0x000253b0) cell_gallery2_pane_g3

0xd4ad,	// (0x0002b424) cell_gallery2_pane_g4

0xd4b5,	// (0x0002b42c) cell_gallery2_pane_g5

0xaeca,	// (0x00028e41) grid_highlight_pane_cp10

0x2278,	// (0x000201ef) popup_vitu2_match_list_window_ParamLimits

0x228a,	// (0x00020201) popup_vitu2_query_window_ParamLimits

0x228a,	// (0x00020201) popup_vitu2_query_window

0x10d1,	// (0x0001f048) bg_vitu2_candi_button_pane

0xd488,	// (0x0002b3ff) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd491,	// (0x0002b408) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd49a,	// (0x0002b411) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7441,	// (0x000253b8) bg_button_pane_cp015

0x7453,	// (0x000253ca) bg_button_pane_cp016

0x7466,	// (0x000253dd) bg_button_pane_cp017

0xc320,	// (0x0002a297) bg_popup_sub_pane_cp22

0xd4bd,	// (0x0002b434) popup_vitu2_query_window_g1

0x74ab,	// (0x00025422) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0002d999) popup_vitu2_query_window_g

0x74c8,	// (0x0002543f) popup_vitu2_query_window_t1_ParamLimits

0x74c8,	// (0x0002543f) popup_vitu2_query_window_t1

0x74fb,	// (0x00025472) popup_vitu2_query_window_t2_ParamLimits

0x74fb,	// (0x00025472) popup_vitu2_query_window_t2

0x750d,	// (0x00025484) popup_vitu2_query_window_t3_ParamLimits

0x750d,	// (0x00025484) popup_vitu2_query_window_t3

0x7535,	// (0x000254ac) popup_vitu2_query_window_t4_ParamLimits

0x7535,	// (0x000254ac) popup_vitu2_query_window_t4

0x7556,	// (0x000254cd) popup_vitu2_query_window_t5_ParamLimits

0x7556,	// (0x000254cd) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0002d9a0) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0002d9a0) popup_vitu2_query_window_t

0xd352,	// (0x0002b2c9) main_cset_text_pane

0x6fa8,	// (0x00024f1f) aid_area_touch_slider_ParamLimits

0x6fc4,	// (0x00024f3b) cset_slider_pane_ParamLimits

0x6fee,	// (0x00024f65) main_cset_slider_pane_g1_ParamLimits

0x7003,	// (0x00024f7a) main_cset_slider_pane_g2_ParamLimits

0xd373,	// (0x0002b2ea) main_cset_slider_pane_g3_ParamLimits

0xd373,	// (0x0002b2ea) main_cset_slider_pane_g3

0x7018,	// (0x00024f8f) main_cset_slider_pane_g4_ParamLimits

0x7018,	// (0x00024f8f) main_cset_slider_pane_g4

0x7027,	// (0x00024f9e) main_cset_slider_pane_g5_ParamLimits

0x7027,	// (0x00024f9e) main_cset_slider_pane_g5

0x7035,	// (0x00024fac) main_cset_slider_pane_g6_ParamLimits

0x7035,	// (0x00024fac) main_cset_slider_pane_g6

0xf97c,	// (0x0002d8f3) main_cset_slider_pane_g_ParamLimits

0xd3a3,	// (0x0002b31a) main_cset_slider_pane_t1_ParamLimits

0x70c9,	// (0x00025040) main_cset_slider_pane_t2_ParamLimits

0x70e3,	// (0x0002505a) main_cset_slider_pane_t3_ParamLimits

0x70fd,	// (0x00025074) main_cset_slider_pane_t4_ParamLimits

0x711b,	// (0x00025092) main_cset_slider_pane_t5_ParamLimits

0x7139,	// (0x000250b0) main_cset_slider_pane_t6_ParamLimits

0x7150,	// (0x000250c7) main_cset_slider_pane_t7_ParamLimits

0x717e,	// (0x000250f5) main_cset_slider_pane_t8_ParamLimits

0x717e,	// (0x000250f5) main_cset_slider_pane_t8

0x71a6,	// (0x0002511d) main_cset_slider_pane_t9_ParamLimits

0x71a6,	// (0x0002511d) main_cset_slider_pane_t9

0x71ce,	// (0x00025145) main_cset_slider_pane_t10_ParamLimits

0x71ce,	// (0x00025145) main_cset_slider_pane_t10

0x71f6,	// (0x0002516d) main_cset_slider_pane_t11_ParamLimits

0x71f6,	// (0x0002516d) main_cset_slider_pane_t11

0x7220,	// (0x00025197) main_cset_slider_pane_t12_ParamLimits

0x7220,	// (0x00025197) main_cset_slider_pane_t12

0x723f,	// (0x000251b6) main_cset_slider_pane_t13_ParamLimits

0x723f,	// (0x000251b6) main_cset_slider_pane_t13

0xf9a1,	// (0x0002d918) main_cset_slider_pane_t_ParamLimits

0x9c97,	// (0x00027c0e) bg_popup_sub_pane_cp011

0xd4c9,	// (0x0002b440) main_cset_text_pane_g1

0xd4ec,	// (0x0002b463) main_cset_text_pane_t1

0xd4fa,	// (0x0002b471) main_cset_text_pane_t2

0xd508,	// (0x0002b47f) main_cset_text_pane_t3

0xd516,	// (0x0002b48d) main_cset_text_pane_t4

0xd524,	// (0x0002b49b) main_cset_text_pane_t5

0xd532,	// (0x0002b4a9) main_cset_text_pane_t6

0xd540,	// (0x0002b4b7) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0002d9af) main_cset_text_pane_t

0x10d1,	// (0x0001f048) main_cam4_burst_pane

0x10d1,	// (0x0001f048) main_cam5_pane

0x6ef7,	// (0x00024e6e) bg_button_pane_cp019

0x6f00,	// (0x00024e77) bg_button_pane_cp020

0xd37f,	// (0x0002b2f6) main_cset_slider_pane_g7_ParamLimits

0xd37f,	// (0x0002b2f6) main_cset_slider_pane_g7

0xd38b,	// (0x0002b302) main_cset_slider_pane_g8_ParamLimits

0xd38b,	// (0x0002b302) main_cset_slider_pane_g8

0x7049,	// (0x00024fc0) main_cset_slider_pane_g9_ParamLimits

0x7049,	// (0x00024fc0) main_cset_slider_pane_g9

0x7055,	// (0x00024fcc) main_cset_slider_pane_g10_ParamLimits

0x7055,	// (0x00024fcc) main_cset_slider_pane_g10

0x7061,	// (0x00024fd8) main_cset_slider_pane_g11_ParamLimits

0x7061,	// (0x00024fd8) main_cset_slider_pane_g11

0x706d,	// (0x00024fe4) main_cset_slider_pane_g12_ParamLimits

0x706d,	// (0x00024fe4) main_cset_slider_pane_g12

0x7079,	// (0x00024ff0) main_cset_slider_pane_g13_ParamLimits

0x7079,	// (0x00024ff0) main_cset_slider_pane_g13

0x7087,	// (0x00024ffe) main_cset_slider_pane_g14_ParamLimits

0x7087,	// (0x00024ffe) main_cset_slider_pane_g14

0x7095,	// (0x0002500c) main_cset_slider_pane_g15_ParamLimits

0x7095,	// (0x0002500c) main_cset_slider_pane_g15

0xd3d1,	// (0x0002b348) main_cset_slider_pane_t14_ParamLimits

0xd3d1,	// (0x0002b348) main_cset_slider_pane_t14

0xd416,	// (0x0002b38d) main_cset_slider_pane_t15_ParamLimits

0xd416,	// (0x0002b38d) main_cset_slider_pane_t15

0x75cd,	// (0x00025544) aid_cam4_burst_size_cell_ParamLimits

0x75cd,	// (0x00025544) aid_cam4_burst_size_cell

0x75e9,	// (0x00025560) grid_cam4_burst_pane_ParamLimits

0x75e9,	// (0x00025560) grid_cam4_burst_pane

0x7619,	// (0x00025590) linegrid_cam4_burst_pane_ParamLimits

0x7619,	// (0x00025590) linegrid_cam4_burst_pane

0x763b,	// (0x000255b2) scroll_pane_cp30_ParamLimits

0x763b,	// (0x000255b2) scroll_pane_cp30

0x7647,	// (0x000255be) cell_cam4_burst_pane_ParamLimits

0x7647,	// (0x000255be) cell_cam4_burst_pane

0xd54e,	// (0x0002b4c5) linegrid_cam4_burst_pane_g1_ParamLimits

0xd54e,	// (0x0002b4c5) linegrid_cam4_burst_pane_g1

0x7683,	// (0x000255fa) linegrid_cam4_burst_pane_g2_ParamLimits

0x7683,	// (0x000255fa) linegrid_cam4_burst_pane_g2

0xd55b,	// (0x0002b4d2) linegrid_cam4_burst_pane_g3_ParamLimits

0xd55b,	// (0x0002b4d2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0002d9be) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0002d9be) linegrid_cam4_burst_pane_g

0x7694,	// (0x0002560b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7694,	// (0x0002560b) linegrid_cam4_burst_pane_g3_copy1

0xd568,	// (0x0002b4df) linegrid_cam4_burst_pane_g4_ParamLimits

0xd568,	// (0x0002b4df) linegrid_cam4_burst_pane_g4

0x76ae,	// (0x00025625) linegrid_cam4_burst_pane_g5_ParamLimits

0x76ae,	// (0x00025625) linegrid_cam4_burst_pane_g5

0x76bf,	// (0x00025636) linegrid_cam4_burst_pane_g6_ParamLimits

0x76bf,	// (0x00025636) linegrid_cam4_burst_pane_g6

0xd575,	// (0x0002b4ec) linegrid_cam4_burst_pane_g7_ParamLimits

0xd575,	// (0x0002b4ec) linegrid_cam4_burst_pane_g7

0x76d0,	// (0x00025647) cell_cam4_burst_pane_g1

0xd58e,	// (0x0002b505) main_cam5_pane_t1_ParamLimits

0xd58e,	// (0x0002b505) main_cam5_pane_t1

0xd5a0,	// (0x0002b517) main_cam5_pane_t2_ParamLimits

0xd5a0,	// (0x0002b517) main_cam5_pane_t2

0xd5b2,	// (0x0002b529) main_cam5_pane_t3_ParamLimits

0xd5b2,	// (0x0002b529) main_cam5_pane_t3

0xd5d0,	// (0x0002b547) main_cam5_pane_t4_ParamLimits

0xd5d0,	// (0x0002b547) main_cam5_pane_t4

0xd5e8,	// (0x0002b55f) main_cam5_pane_t5_ParamLimits

0xd5e8,	// (0x0002b55f) main_cam5_pane_t5

0xd5fc,	// (0x0002b573) main_cam5_pane_t6_ParamLimits

0xd5fc,	// (0x0002b573) main_cam5_pane_t6

0xd610,	// (0x0002b587) main_cam5_pane_t7_ParamLimits

0xd610,	// (0x0002b587) main_cam5_pane_t7

0xd622,	// (0x0002b599) main_cam5_pane_t8_ParamLimits

0xd622,	// (0x0002b599) main_cam5_pane_t8

0xd63e,	// (0x0002b5b5) main_cam5_pane_t9_ParamLimits

0xd63e,	// (0x0002b5b5) main_cam5_pane_t9

0xd650,	// (0x0002b5c7) main_cam5_pane_t10_ParamLimits

0xd650,	// (0x0002b5c7) main_cam5_pane_t10

0xd662,	// (0x0002b5d9) main_cam5_pane_t11_ParamLimits

0xd662,	// (0x0002b5d9) main_cam5_pane_t11

0xd674,	// (0x0002b5eb) main_cam5_pane_t12_ParamLimits

0xd674,	// (0x0002b5eb) main_cam5_pane_t12

0xd689,	// (0x0002b600) main_cam5_pane_t13_ParamLimits

0xd689,	// (0x0002b600) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0002d9ca) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0002d9ca) main_cam5_pane_t

0x1082,	// (0x0001eff9) popup_scut_keymap_window_ParamLimits

0x1082,	// (0x0001eff9) popup_scut_keymap_window

0x76e5,	// (0x0002565c) aid_size_cell_brow_shortcut

0xaeca,	// (0x00028e41) bg_popup_window_pane_cp010

0x76f1,	// (0x00025668) grid_scut_pane

0x76fd,	// (0x00025674) cell_scut_pane_ParamLimits

0x76fd,	// (0x00025674) cell_scut_pane

0x7714,	// (0x0002568b) cell_scut_pane_g1

0xd6a6,	// (0x0002b61d) cell_scut_pane_t1

0xd6b5,	// (0x0002b62c) cell_scut_pane_t2

0x771d,	// (0x00025694) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0002d9e5) cell_scut_pane_t

0x6049,	// (0x00023fc0) main_mup3_pane_g8_ParamLimits

0x6049,	// (0x00023fc0) main_mup3_pane_g8

0x21a2,	// (0x00020119) area_vitu2_query_pane_ParamLimits

0x21a2,	// (0x00020119) area_vitu2_query_pane

0x7479,	// (0x000253f0) input_focus_pane_cp08

0xd6c4,	// (0x0002b63b) area_vitu2_query_pane_g1

0x772b,	// (0x000256a2) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0002d9ec) area_vitu2_query_pane_g

0x773c,	// (0x000256b3) area_vitu2_query_pane_t1_ParamLimits

0x773c,	// (0x000256b3) area_vitu2_query_pane_t1

0x7750,	// (0x000256c7) area_vitu2_query_pane_t2_ParamLimits

0x7750,	// (0x000256c7) area_vitu2_query_pane_t2

0x7764,	// (0x000256db) area_vitu2_query_pane_t3_ParamLimits

0x7764,	// (0x000256db) area_vitu2_query_pane_t3

0xd6d0,	// (0x0002b647) area_vitu2_query_pane_t4_ParamLimits

0xd6d0,	// (0x0002b647) area_vitu2_query_pane_t4

0xd6f8,	// (0x0002b66f) area_vitu2_query_pane_t5_ParamLimits

0xd6f8,	// (0x0002b66f) area_vitu2_query_pane_t5

0xd720,	// (0x0002b697) area_vitu2_query_pane_t6_ParamLimits

0xd720,	// (0x0002b697) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0002d9f1) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0002d9f1) area_vitu2_query_pane_t

0x778c,	// (0x00025703) bg_button_pane_cp018

0x779a,	// (0x00025711) bg_button_pane_cp021

0x77a6,	// (0x0002571d) bg_button_pane_cp022

0x77b7,	// (0x0002572e) input_focus_pane_cp09

0x49a9,	// (0x00022920) aid_size_touch_mv_arrow_left

0x49d4,	// (0x0002294b) aid_size_touch_mv_arrow_right

0x70ad,	// (0x00025024) main_cset_slider_pane_g16_ParamLimits

0x70ad,	// (0x00025024) main_cset_slider_pane_g16

0x70bb,	// (0x00025032) main_cset_slider_pane_g17_ParamLimits

0x70bb,	// (0x00025032) main_cset_slider_pane_g17

0x76d0,	// (0x00025647) cell_cam4_burst_pane_g1_ParamLimits

0x9c97,	// (0x00027c0e) compa_mode_pane

0x72d2,	// (0x00025249) popup_vtel_slider_window_g3_ParamLimits

0x72d2,	// (0x00025249) popup_vtel_slider_window_g3

0x72e6,	// (0x0002525d) popup_vtel_slider_window_g4_ParamLimits

0x72e6,	// (0x0002525d) popup_vtel_slider_window_g4

0x72fa,	// (0x00025271) popup_vtel_slider_window_t1_ParamLimits

0x72fa,	// (0x00025271) popup_vtel_slider_window_t1

0x10d1,	// (0x0001f048) main_cl_pane

0x1635,	// (0x0001f5ac) popup_imed_adjust2_window_ParamLimits

0xc320,	// (0x0002a297) bg_tb_trans_pane_cp05_ParamLimits

0xcca3,	// (0x0002ac1a) popup_imed_adjust2_window_g1_ParamLimits

0xccb2,	// (0x0002ac29) popup_imed_adjust2_window_g2_ParamLimits

0xccb2,	// (0x0002ac29) popup_imed_adjust2_window_g2

0xccbe,	// (0x0002ac35) popup_imed_adjust2_window_g3_ParamLimits

0xccbe,	// (0x0002ac35) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0002d75c) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0002d75c) popup_imed_adjust2_window_g

0xccca,	// (0x0002ac41) popup_imed_adjust2_window_t1_ParamLimits

0xcce2,	// (0x0002ac59) slider_imed_adjust_pane_ParamLimits

0xccf6,	// (0x0002ac6d) slider_imed_adjust_pane_g1_ParamLimits

0xcd06,	// (0x0002ac7d) slider_imed_adjust_pane_g2_ParamLimits

0xcd16,	// (0x0002ac8d) slider_imed_adjust_pane_g3_ParamLimits

0xcd27,	// (0x0002ac9e) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0002d763) slider_imed_adjust_pane_g_ParamLimits

0x1f23,	// (0x0001fe9a) aid_touch_area_cam4_ParamLimits

0x1f23,	// (0x0001fe9a) aid_touch_area_cam4

0x1f33,	// (0x0001feaa) battery_pane_cp01

0x1fba,	// (0x0001ff31) main_camera4_pane_g6_ParamLimits

0x1fba,	// (0x0001ff31) main_camera4_pane_g6

0x1fd8,	// (0x0001ff4f) main_camera4_pane_t2_ParamLimits

0x1fd8,	// (0x0001ff4f) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0002d866) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0002d866) main_camera4_pane_t

0x2049,	// (0x0001ffc0) aid_touch_area_vid4_ParamLimits

0x2049,	// (0x0001ffc0) aid_touch_area_vid4

0x2089,	// (0x00020000) main_video4_pane_g5_ParamLimits

0x2089,	// (0x00020000) main_video4_pane_g5

0x20ad,	// (0x00020024) vid4_progress_pane_ParamLimits

0x20ad,	// (0x00020024) vid4_progress_pane

0xd397,	// (0x0002b30e) main_cset_slider_pane_g18_ParamLimits

0xd397,	// (0x0002b30e) main_cset_slider_pane_g18

0xd582,	// (0x0002b4f9) cell_cam4_burst_pane_g2_ParamLimits

0xd582,	// (0x0002b4f9) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0002d9c5) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0002d9c5) cell_cam4_burst_pane_g

0x77c8,	// (0x0002573f) bg_cl_pane_ParamLimits

0x77c8,	// (0x0002573f) bg_cl_pane

0x77d4,	// (0x0002574b) cl_header_pane_ParamLimits

0x77d4,	// (0x0002574b) cl_header_pane

0x77e0,	// (0x00025757) cl_listscroll_pane_ParamLimits

0x77e0,	// (0x00025757) cl_listscroll_pane

0xd76c,	// (0x0002b6e3) bg_cl_pane_g1

0xd774,	// (0x0002b6eb) bg_cl_pane_g2

0xd77c,	// (0x0002b6f3) bg_cl_pane_g3

0xd784,	// (0x0002b6fb) bg_cl_pane_g4

0xd78c,	// (0x0002b703) bg_cl_pane_g5

0xd794,	// (0x0002b70b) bg_cl_pane_g6

0xd79c,	// (0x0002b713) bg_cl_pane_g7

0xd7a4,	// (0x0002b71b) bg_cl_pane_g8

0xd7ac,	// (0x0002b723) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0002da00) bg_cl_pane_g

0x77ec,	// (0x00025763) aid_height_cl_leading_ParamLimits

0x77ec,	// (0x00025763) aid_height_cl_leading

0x77f8,	// (0x0002576f) aid_height_cl_text_ParamLimits

0x77f8,	// (0x0002576f) aid_height_cl_text

0xd196,	// (0x0002b10d) bg_cl_header_pane_ParamLimits

0xd196,	// (0x0002b10d) bg_cl_header_pane

0x7810,	// (0x00025787) cl_header_pane_g1_ParamLimits

0x7810,	// (0x00025787) cl_header_pane_g1

0x781d,	// (0x00025794) cl_header_pane_t1_ParamLimits

0x781d,	// (0x00025794) cl_header_pane_t1

0xd7b4,	// (0x0002b72b) cl_list_pane

0xd36a,	// (0x0002b2e1) hc_scroll_pane_cp01

0xa80b,	// (0x00028782) bg_cl_header_pane_g1

0xd250,	// (0x0002b1c7) bg_cl_header_pane_g2

0xa82b,	// (0x000287a2) bg_cl_header_pane_g3

0xd260,	// (0x0002b1d7) bg_cl_header_pane_g4

0xd258,	// (0x0002b1cf) bg_cl_header_pane_g5

0xd480,	// (0x0002b3f7) bg_cl_header_pane_g6

0xd278,	// (0x0002b1ef) bg_cl_header_pane_g7

0xd280,	// (0x0002b1f7) bg_cl_header_pane_g8

0xd270,	// (0x0002b1e7) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0002da13) bg_cl_header_pane_g

0x782f,	// (0x000257a6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x782f,	// (0x000257a6) hc_cl_list_double_graphic_heading_pane

0x7843,	// (0x000257ba) hc_cl_list_single_graphic_pane_ParamLimits

0x7843,	// (0x000257ba) hc_cl_list_single_graphic_pane

0x785d,	// (0x000257d4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x785d,	// (0x000257d4) hc_cl_list_single_graphic_pane_g1

0x7869,	// (0x000257e0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7869,	// (0x000257e0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0002da26) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0002da26) hc_cl_list_single_graphic_pane_g

0x787d,	// (0x000257f4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x787d,	// (0x000257f4) hc_cl_list_single_graphic_pane_t1

0x785d,	// (0x000257d4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x785d,	// (0x000257d4) hc_cl_list_double_graphic_heading_pane_g1

0x7892,	// (0x00025809) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7892,	// (0x00025809) hc_cl_list_double_graphic_heading_pane_g2

0x78a6,	// (0x0002581d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x78a6,	// (0x0002581d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0002da2b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0002da2b) hc_cl_list_double_graphic_heading_pane_g

0x78ba,	// (0x00025831) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x78ba,	// (0x00025831) hc_cl_list_double_graphic_heading_pane_t1

0x78cf,	// (0x00025846) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x78cf,	// (0x00025846) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0002da32) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0002da32) hc_cl_list_double_graphic_heading_pane_t

0x25c6,	// (0x0002053d) vid4_progress_pane_g1

0x25d8,	// (0x0002054f) vid4_progress_pane_g2

0xaa68,	// (0x000289df) vid4_progress_pane_g3

0x25e8,	// (0x0002055f) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0002da37) vid4_progress_pane_g

0x2606,	// (0x0002057d) vid4_progress_pane_t1

0x261b,	// (0x00020592) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0002da42) vid4_progress_pane_t

0x2647,	// (0x000205be) wait_bar_pane_cp07

0xc51b,	// (0x0002a492) blid_firmament_pane_ParamLimits

0xc55e,	// (0x0002a4d5) popup_blid_sat_info2_window_g1

0xc582,	// (0x0002a4f9) popup_blid_sat_info2_window_t3

0xc590,	// (0x0002a507) popup_blid_sat_info2_window_t4

0xc59e,	// (0x0002a515) popup_blid_sat_info2_window_t5

0xc5ac,	// (0x0002a523) popup_blid_sat_info2_window_t6

0xc5bc,	// (0x0002a533) popup_blid_sat_info2_window_t7

0xc5ca,	// (0x0002a541) popup_blid_sat_info2_window_t8

0xc5d8,	// (0x0002a54f) popup_blid_sat_info2_window_t9

0xc5e6,	// (0x0002a55d) popup_blid_sat_info2_window_t10

0xc6aa,	// (0x0002a621) aid_firma_cardinal_ParamLimits

0xc6be,	// (0x0002a635) blid_firmament_pane_t1_ParamLimits

0xc6d5,	// (0x0002a64c) blid_firmament_pane_t2_ParamLimits

0xc6ec,	// (0x0002a663) blid_firmament_pane_t3_ParamLimits

0xc703,	// (0x0002a67a) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0002d655) blid_firmament_pane_t_ParamLimits

0xc71a,	// (0x0002a691) blid_sat_info_pane_ParamLimits

0x159b,	// (0x0001f512) main_cam_set_pane_ParamLimits

0x678a,	// (0x00024701) aid_size_cell_colour_35_ParamLimits

0x67a4,	// (0x0002471b) aid_size_cell_colour_112_ParamLimits

0x67bb,	// (0x00024732) aid_size_cell_effect_ParamLimits

0xa3df,	// (0x00028356) bg_tb_trans_pane_cp02_ParamLimits

0xb06c,	// (0x00028fe3) heading_imed_pane_ParamLimits

0x67d5,	// (0x0002474c) listscroll_imed_pane_ParamLimits

0xb946,	// (0x000298bd) popup_call2_audio_first_window_g5_ParamLimits

0xb946,	// (0x000298bd) popup_call2_audio_first_window_g5

0x1dae,	// (0x0001fd25) aid_size_touch_image3_arrow_left_ParamLimits

0x1dae,	// (0x0001fd25) aid_size_touch_image3_arrow_left

0x1dc4,	// (0x0001fd3b) aid_size_touch_image3_arrow_right_ParamLimits

0x1dc4,	// (0x0001fd3b) aid_size_touch_image3_arrow_right

0x2631,	// (0x000205a8) vid4_progress_pane_t3

0x6a89,	// (0x00024a00) main_hwr_training_symbol_option_pane_ParamLimits

0x6a89,	// (0x00024a00) main_hwr_training_symbol_option_pane

0xcf99,	// (0x0002af10) popup_hwr_training_preview_window_ParamLimits

0xcf99,	// (0x0002af10) popup_hwr_training_preview_window

0x1aac,	// (0x0001fa23) hwr_training_navi_pane_g5_ParamLimits

0x1aac,	// (0x0001fa23) hwr_training_navi_pane_g5

0xd23e,	// (0x0002b1b5) popup_char_count_window

0x10c3,	// (0x0001f03a) bg_popup_sub_pane_cp20_ParamLimits

0x2507,	// (0x0002047e) list_vitu2_match_list_pane_ParamLimits

0x2513,	// (0x0002048a) vitu2_page_scroll_pane_ParamLimits

0x2513,	// (0x0002048a) vitu2_page_scroll_pane

0xd7df,	// (0x0002b756) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7df,	// (0x0002b756) list_single_hwr_training_symbol_option_pane

0xd7f2,	// (0x0002b769) list_single_hwr_training_symbol_option_pane_g1

0xd7fa,	// (0x0002b771) list_single_hwr_training_symbol_option_pane_t1

0xd808,	// (0x0002b77f) bg_button_pane_cp023

0xd811,	// (0x0002b788) bg_button_pane_cp024

0x791c,	// (0x00025893) vitu2_page_scroll_pane_g1

0x7924,	// (0x0002589b) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0002da49) vitu2_page_scroll_pane_g

0x792c,	// (0x000258a3) vitu2_page_scroll_pane_t1

0xcd53,	// (0x0002acca) popup_char_count_window_g1

0xd84c,	// (0x0002b7c3) popup_char_count_window_g2

0xd855,	// (0x0002b7cc) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0002da4e) popup_char_count_window_g

0xd85e,	// (0x0002b7d5) popup_char_count_window_t1

0x10d1,	// (0x0001f048) main_vded2_pane

0xcc8f,	// (0x0002ac06) aid_size_cell_imed_line

0xcc99,	// (0x0002ac10) grid_imed_line_width_pane

0x2119,	// (0x00020090) vid4_indicators_pane_g4

0xd86c,	// (0x0002b7e3) cell_imed_line_width_pane_ParamLimits

0xd86c,	// (0x0002b7e3) cell_imed_line_width_pane

0xd880,	// (0x0002b7f7) cell_imed_line_width_pane_g1

0xd844,	// (0x0002b7bb) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0002da55) cell_imed_line_width_pane_g

0x793b,	// (0x000258b2) main_vded2_pane_g1_ParamLimits

0x793b,	// (0x000258b2) main_vded2_pane_g1

0x7948,	// (0x000258bf) main_vded2_pane_g2_ParamLimits

0x7948,	// (0x000258bf) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0002da5a) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0002da5a) main_vded2_pane_g

0x7956,	// (0x000258cd) vded2_slider_pane_ParamLimits

0x7956,	// (0x000258cd) vded2_slider_pane

0x7963,	// (0x000258da) aid_size_touch_vded2_end

0x796d,	// (0x000258e4) aid_size_touch_vded2_playhead

0xd889,	// (0x0002b800) aid_size_touch_vded2_start

0xd891,	// (0x0002b808) vded2_slider_bg_pane

0xd89a,	// (0x0002b811) vded2_slider_pane_g1

0xd8a3,	// (0x0002b81a) vded2_slider_pane_g2

0x7975,	// (0x000258ec) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0002da5f) vded2_slider_pane_g

0xd8ab,	// (0x0002b822) vded2_slider_bg_pane_g1

0xd8b4,	// (0x0002b82b) vded2_slider_bg_pane_g2

0xd8bd,	// (0x0002b834) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0002da66) vded2_slider_bg_pane_g

0x504f,	// (0x00022fc6) aid_postcard_touch_down_pane_ParamLimits

0x504f,	// (0x00022fc6) aid_postcard_touch_down_pane

0x505f,	// (0x00022fd6) aid_postcard_touch_up_pane_ParamLimits

0x505f,	// (0x00022fd6) aid_postcard_touch_up_pane

0x10d1,	// (0x0001f048) main_blid2_pane

0x15c4,	// (0x0001f53b) popup_blid2_search_window

0x9c97,	// (0x00027c0e) blid2_gps_pane

0x9c97,	// (0x00027c0e) blid2_navig_pane

0x9c97,	// (0x00027c0e) blid2_search_pane

0x9c97,	// (0x00027c0e) blid2_tripm_pane

0x797e,	// (0x000258f5) blid2_search_pane_g1_ParamLimits

0x797e,	// (0x000258f5) blid2_search_pane_g1

0x798e,	// (0x00025905) blid2_search_pane_t1_ParamLimits

0x798e,	// (0x00025905) blid2_search_pane_t1

0x79a0,	// (0x00025917) aid_size_cell_blid2_gps_ParamLimits

0x79a0,	// (0x00025917) aid_size_cell_blid2_gps

0x79b0,	// (0x00025927) blid2_gps_pane_g1_ParamLimits

0x79b0,	// (0x00025927) blid2_gps_pane_g1

0x79bc,	// (0x00025933) grid_blid2_satellite_pane_ParamLimits

0x79bc,	// (0x00025933) grid_blid2_satellite_pane

0x79cc,	// (0x00025943) blid2_navig_pane_g1_ParamLimits

0x79cc,	// (0x00025943) blid2_navig_pane_g1

0x79d8,	// (0x0002594f) blid2_navig_pane_t1_ParamLimits

0x79d8,	// (0x0002594f) blid2_navig_pane_t1

0x79ea,	// (0x00025961) blid2_navig_pane_t2_ParamLimits

0x79ea,	// (0x00025961) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0002da6d) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0002da6d) blid2_navig_pane_t

0x79fc,	// (0x00025973) blid2_navig_ring_pane_ParamLimits

0x79fc,	// (0x00025973) blid2_navig_ring_pane

0x7a0c,	// (0x00025983) blid2_speed_pane_ParamLimits

0x7a0c,	// (0x00025983) blid2_speed_pane

0x7a18,	// (0x0002598f) blid2_tripm_pane_g1_ParamLimits

0x7a18,	// (0x0002598f) blid2_tripm_pane_g1

0x7a28,	// (0x0002599f) blid2_tripm_pane_g2_ParamLimits

0x7a28,	// (0x0002599f) blid2_tripm_pane_g2

0x7a34,	// (0x000259ab) blid2_tripm_pane_g3_ParamLimits

0x7a34,	// (0x000259ab) blid2_tripm_pane_g3

0x7a40,	// (0x000259b7) blid2_tripm_pane_g4_ParamLimits

0x7a40,	// (0x000259b7) blid2_tripm_pane_g4

0x7a4c,	// (0x000259c3) blid2_tripm_pane_g5_ParamLimits

0x7a4c,	// (0x000259c3) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0002da72) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0002da72) blid2_tripm_pane_g

0x7a68,	// (0x000259df) blid2_tripm_pane_t1_ParamLimits

0x7a68,	// (0x000259df) blid2_tripm_pane_t1

0x7a7c,	// (0x000259f3) blid2_tripm_pane_t2_ParamLimits

0x7a7c,	// (0x000259f3) blid2_tripm_pane_t2

0x7a8e,	// (0x00025a05) blid2_tripm_pane_t3_ParamLimits

0x7a8e,	// (0x00025a05) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0002da7f) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0002da7f) blid2_tripm_pane_t

0x7ac0,	// (0x00025a37) cell_blid2_satellite_pane_ParamLimits

0x7ac0,	// (0x00025a37) cell_blid2_satellite_pane

0x7ada,	// (0x00025a51) cell_blid2_satellite_pane_g1

0xd8c6,	// (0x0002b83d) cell_blid2_satellite_pane_t1

0xc72a,	// (0x0002a6a1) blid2_speed_pane_g1

0xd8d4,	// (0x0002b84b) blid2_speed_pane_t1

0xd8e2,	// (0x0002b859) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0002da88) blid2_speed_pane_t

0xc72a,	// (0x0002a6a1) blid2_navig_ring_pane_g1

0x7ae3,	// (0x00025a5a) blid2_navig_ring_pane_g2

0x7aeb,	// (0x00025a62) blid2_navig_ring_pane_g3

0x7af3,	// (0x00025a6a) blid2_navig_ring_pane_g4

0x7afb,	// (0x00025a72) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0002da8d) blid2_navig_ring_pane_g

0x9c97,	// (0x00027c0e) bg_popup_window_pane_cp011

0xd8f0,	// (0x0002b867) popup_blid2_search_window_g1

0xd8f8,	// (0x0002b86f) popup_blid2_search_window_t1

0xd910,	// (0x0002b887) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0002da98) popup_blid2_search_window_t

0xa71a,	// (0x00028691) main_browser_pane_g1

0xa401,	// (0x00028378) main_browser_pane_ParamLimits

0x159b,	// (0x0001f512) bg_button_pane_cp011_ParamLimits

0x2429,	// (0x000203a0) cell_vitu2_function_pane_g1_ParamLimits

0xc320,	// (0x0002a297) bg_popup_sub_pane_cp22_ParamLimits

0x7479,	// (0x000253f0) input_focus_pane_cp08_ParamLimits

0x7490,	// (0x00025407) popup_vitu2_query_button_pane_ParamLimits

0x7490,	// (0x00025407) popup_vitu2_query_button_pane

0x74a1,	// (0x00025418) popup_vitu2_query_input_button_pane

0xd4bd,	// (0x0002b434) popup_vitu2_query_window_g1_ParamLimits

0x74ab,	// (0x00025422) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0002d999) popup_vitu2_query_window_g_ParamLimits

0x9c97,	// (0x00027c0e) bg_button_pane_cp026

0x7b03,	// (0x00025a7a) popup_vitu2_query_input_button_pane_g1

0x9c97,	// (0x00027c0e) bg_button_pane_cp025

0xd91e,	// (0x0002b895) popup_vitu2_query_button_pane_t1

0x5d81,	// (0x00023cf8) main_mp3_pane_t6

0x5d91,	// (0x00023d08) popup_slider_window_cp01

0x1ff8,	// (0x0001ff6f) cam4_battery_pane

0x20d8,	// (0x0002004f) cam4_battery_pane_cp02

0x25be,	// (0x00020535) cam4_battery_pane_cp01

0x25be,	// (0x00020535) cam4_battery_pane_cp03

0xd906,	// (0x0002b87d) cam4_battery_pane_g1

0xc72a,	// (0x0002a6a1) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0002da9d) cam4_battery_pane_g

0xc5f4,	// (0x0002a56b) popup_blid_sat_info2_window_t11

0x49a9,	// (0x00022920) aid_size_touch_mv_arrow_left_ParamLimits

0x49d4,	// (0x0002294b) aid_size_touch_mv_arrow_right_ParamLimits

0xae2a,	// (0x00028da1) navi_pane_g1_ParamLimits

0x4a13,	// (0x0002298a) navi_pane_g2_ParamLimits

0x4a41,	// (0x000229b8) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0002d367) navi_pane_g_ParamLimits

0x4a9b,	// (0x00022a12) navi_pane_mv_t1_ParamLimits

0x67e1,	// (0x00024758) grid_imed_effect_pane_ParamLimits

0x3344,	// (0x000212bb) aid_placing_vt_slider_lsc

0xa669,	// (0x000285e0) aid_placing_vt_slider_prt

0xa3df,	// (0x00028356) bg_tb_trans_pane_cp01_ParamLimits

0xc8aa,	// (0x0002a821) popup_image_details_window_g1_ParamLimits

0xc8bd,	// (0x0002a834) popup_image_details_window_g2_ParamLimits

0xc8d2,	// (0x0002a849) popup_image_details_window_g3_ParamLimits

0xc8d2,	// (0x0002a849) popup_image_details_window_g3

0xf723,	// (0x0002d69a) popup_image_details_window_g_ParamLimits

0xc8e6,	// (0x0002a85d) popup_image_details_window_t1_ParamLimits

0xc8f8,	// (0x0002a86f) popup_image_details_window_t2_ParamLimits

0xc911,	// (0x0002a888) popup_image_details_window_t3_ParamLimits

0xc925,	// (0x0002a89c) popup_image_details_window_t4_ParamLimits

0xc940,	// (0x0002a8b7) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0002d6a1) popup_image_details_window_t_ParamLimits

0x7804,	// (0x0002577b) cl_header_name_pane_ParamLimits

0x7804,	// (0x0002577b) cl_header_name_pane

0x7b0b,	// (0x00025a82) cl_header_name_pane_t1_ParamLimits

0x7b0b,	// (0x00025a82) cl_header_name_pane_t1

0x7b22,	// (0x00025a99) cl_header_name_pane_t2_ParamLimits

0x7b22,	// (0x00025a99) cl_header_name_pane_t2

0x7b4c,	// (0x00025ac3) cl_header_name_pane_t3_ParamLimits

0x7b4c,	// (0x00025ac3) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0002daa2) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0002daa2) cl_header_name_pane_t

0x4a6c,	// (0x000229e3) navi_pane_mv_g2_ParamLimits

0xd1cb,	// (0x0002b142) field_vitu2_entry_pane_g1_ParamLimits

0xd1d7,	// (0x0002b14e) field_vitu2_entry_pane_g2_ParamLimits

0xd1e3,	// (0x0002b15a) field_vitu2_entry_pane_g3_ParamLimits

0xd1e3,	// (0x0002b15a) field_vitu2_entry_pane_g3

0xf921,	// (0x0002d898) field_vitu2_entry_pane_g_ParamLimits

0x22fe,	// (0x00020275) cell_vitu2_itu_pane_g1_ParamLimits

0x230e,	// (0x00020285) cell_vitu2_itu_pane_g2_ParamLimits

0x230e,	// (0x00020285) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0002d8a4) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0002d8a4) cell_vitu2_itu_pane_g

0x159b,	// (0x0001f512) bg_vkb2_func_pane_cp05_ParamLimits

0x159b,	// (0x0001f512) bg_vkb2_func_pane_cp05

0x159b,	// (0x0001f512) bg_vkb2_func_pane_cp03

0x159b,	// (0x0001f512) bg_vkb2_func_pane_cp04

0x159b,	// (0x0001f512) bg_vkb2_func_pane_cp10_ParamLimits

0x159b,	// (0x0001f512) bg_vkb2_func_pane_cp10

0x77a6,	// (0x0002571d) bg_vkb2_func_pane_cp08

0x778c,	// (0x00025703) bg_vkb2_func_pane_cp06

0x779a,	// (0x00025711) bg_vkb2_func_pane_cp07

0xd81a,	// (0x0002b791) bg_vkb2_func_pane_cp11_ParamLimits

0xd81a,	// (0x0002b791) bg_vkb2_func_pane_cp11

0xd82f,	// (0x0002b7a6) bg_vkb2_func_pane_cp12_ParamLimits

0xd82f,	// (0x0002b7a6) bg_vkb2_func_pane_cp12

0x9c97,	// (0x00027c0e) bg_vkb2_func_pane_cp09

0xd250,	// (0x0002b1c7) bg_vkb2_func_pane_g1

0xa82b,	// (0x000287a2) bg_vkb2_func_pane_g2

0xd258,	// (0x0002b1cf) bg_vkb2_func_pane_g3

0xd260,	// (0x0002b1d7) bg_vkb2_func_pane_g4

0xd480,	// (0x0002b3f7) bg_vkb2_func_pane_g5

0xd278,	// (0x0002b1ef) bg_vkb2_func_pane_g6

0xd280,	// (0x0002b1f7) bg_vkb2_func_pane_g7

0xd270,	// (0x0002b1e7) bg_vkb2_func_pane_g8

0xa80b,	// (0x00028782) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0002daa9) bg_vkb2_func_pane_g

0x7a5a,	// (0x000259d1) blid2_tripm_pane_g6_ParamLimits

0x7a5a,	// (0x000259d1) blid2_tripm_pane_g6

0xd051,	// (0x0002afc8) mp4_progress_pane_g1

0x7ab4,	// (0x00025a2b) blid2_tripm_values_pane_ParamLimits

0x7ab4,	// (0x00025a2b) blid2_tripm_values_pane

0x7b71,	// (0x00025ae8) blid2_tripm_values_pane_t1

0x7b7f,	// (0x00025af6) blid2_tripm_values_pane_t2

0x7b8d,	// (0x00025b04) blid2_tripm_values_pane_t3

0x7b9b,	// (0x00025b12) blid2_tripm_values_pane_t4

0x7ba9,	// (0x00025b20) blid2_tripm_values_pane_t5

0x7bb7,	// (0x00025b2e) blid2_tripm_values_pane_t6

0x7bc5,	// (0x00025b3c) blid2_tripm_values_pane_t7

0x7bd3,	// (0x00025b4a) blid2_tripm_values_pane_t8

0x7be1,	// (0x00025b58) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0002dabc) blid2_tripm_values_pane_t

0x3384,	// (0x000212fb) call_video_pane_t1_ParamLimits

0x33a5,	// (0x0002131c) call_video_pane_t2_ParamLimits

0xf279,	// (0x0002d1f0) call_video_pane_t_ParamLimits

0x4fcc,	// (0x00022f43) msg_header_pane_g1_ParamLimits

0xb03c,	// (0x00028fb3) msg_header_pane_g2_ParamLimits

0xb03c,	// (0x00028fb3) msg_header_pane_g2

0x0001,

0xf493,	// (0x0002d40a) msg_header_pane_g_ParamLimits

0xf493,	// (0x0002d40a) msg_header_pane_g

0xa401,	// (0x00028378) main_clock2_pane_ParamLimits

0x65ea,	// (0x00024561) grid_clock2_toolbar_pane_ParamLimits

0x65ea,	// (0x00024561) grid_clock2_toolbar_pane

0x65ea,	// (0x00024561) listscroll_clock2_pane_ParamLimits

0x65ea,	// (0x00024561) listscroll_clock2_pane

0x6694,	// (0x0002460b) main_clock2_pane_t3_ParamLimits

0x6694,	// (0x0002460b) main_clock2_pane_t3

0x66a6,	// (0x0002461d) main_clock2_pane_t4_ParamLimits

0x66a6,	// (0x0002461d) main_clock2_pane_t4

0xd92c,	// (0x0002b8a3) cell_clock2_toolbar_pane

0xd934,	// (0x0002b8ab) cell_clock2_toolbar_pane_cp01

0xd934,	// (0x0002b8ab) cell_clock2_toolbar_pane_cp02

0xd93c,	// (0x0002b8b3) cell_clock2_toolbar_pane_cp03

0xd944,	// (0x0002b8bb) list_clock2_pane

0xad81,	// (0x00028cf8) scroll_pane_cp10

0xd94c,	// (0x0002b8c3) list_single_clock2_pane_ParamLimits

0xd94c,	// (0x0002b8c3) list_single_clock2_pane

0xaeca,	// (0x00028e41) list_highlight_pane_cp08

0xd959,	// (0x0002b8d0) list_single_clock2_pane_t1

0xd967,	// (0x0002b8de) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0002dacf) list_single_clock2_pane_t

0x9c97,	// (0x00027c0e) bg_button_pane_cp10

0xd975,	// (0x0002b8ec) cell_clock2_toolbar_pane_g1

0x1536,	// (0x0001f4ad) aid_main_viewer_pane_g1_ParamLimits

0x1536,	// (0x0001f4ad) aid_main_viewer_pane_g1

0x1542,	// (0x0001f4b9) aid_main_viewer_pane_g2_ParamLimits

0x1542,	// (0x0001f4b9) aid_main_viewer_pane_g2

0x500b,	// (0x00022f82) aid_main_viewer_pane_g3_ParamLimits

0x500b,	// (0x00022f82) aid_main_viewer_pane_g3

0x501c,	// (0x00022f93) aid_main_viewer_pane_g4_ParamLimits

0x501c,	// (0x00022f93) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0002d41b) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0002d41b) aid_main_viewer_pane_g

0x158e,	// (0x0001f505) main_calc_pane_ParamLimits

0x15a9,	// (0x0001f520) main_dialer2_pane_ParamLimits

0x10d1,	// (0x0001f048) main_cam6_pane

0x10d1,	// (0x0001f048) main_vid6_pane

0x65f6,	// (0x0002456d) listscroll_gen_pane_cp06_ParamLimits

0x65f6,	// (0x0002456d) listscroll_gen_pane_cp06

0x66b8,	// (0x0002462f) main_clock2_pane_t5_ParamLimits

0x66b8,	// (0x0002462f) main_clock2_pane_t5

0x6703,	// (0x0002467a) aid_call2_pane_cp10_ParamLimits

0x6715,	// (0x0002468c) aid_call_pane_cp10_ParamLimits

0xadff,	// (0x00028d76) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadff,	// (0x00028d76) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6727,	// (0x0002469e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6727,	// (0x0002469e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadff,	// (0x00028d76) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0002d751) popup_clock_analogue_window_cp10_g_ParamLimits

0x6739,	// (0x000246b0) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6b69,	// (0x00024ae0) cell_dialer2_keypad_pane_g2_ParamLimits

0x6b69,	// (0x00024ae0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0002d837) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0002d837) cell_dialer2_keypad_pane_g

0x6b85,	// (0x00024afc) cell_dialer2_keypad_pane_t1

0x6f95,	// (0x00024f0c) main_cset_text2_pane_ParamLimits

0x6f95,	// (0x00024f0c) main_cset_text2_pane

0xd6c4,	// (0x0002b63b) area_vitu2_query_pane_g1_ParamLimits

0x772b,	// (0x000256a2) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0002d9ec) area_vitu2_query_pane_g_ParamLimits

0xd748,	// (0x0002b6bf) area_vitu2_query_pane_t7_ParamLimits

0xd748,	// (0x0002b6bf) area_vitu2_query_pane_t7

0x778c,	// (0x00025703) bg_button_pane_cp018_ParamLimits

0x779a,	// (0x00025711) bg_button_pane_cp021_ParamLimits

0x77a6,	// (0x0002571d) bg_button_pane_cp022_ParamLimits

0x77a6,	// (0x0002571d) bg_vkb2_func_pane_cp08_ParamLimits

0x778c,	// (0x00025703) bg_vkb2_func_pane_cp06_ParamLimits

0x779a,	// (0x00025711) bg_vkb2_func_pane_cp07_ParamLimits

0x77b7,	// (0x0002572e) input_focus_pane_cp09_ParamLimits

0x2657,	// (0x000205ce) cam6_autofocus_pane_ParamLimits

0x2657,	// (0x000205ce) cam6_autofocus_pane

0x2679,	// (0x000205f0) cam6_image_uncrop_pane_ParamLimits

0x2679,	// (0x000205f0) cam6_image_uncrop_pane

0x26a6,	// (0x0002061d) cam6_indi_pane_ParamLimits

0x26a6,	// (0x0002061d) cam6_indi_pane

0x26c0,	// (0x00020637) cam6_mode_pane_ParamLimits

0x26c0,	// (0x00020637) cam6_mode_pane

0x26d4,	// (0x0002064b) cam6_timer_pane_ParamLimits

0x26d4,	// (0x0002064b) cam6_timer_pane

0x26e0,	// (0x00020657) cam6_zoom_pane_ParamLimits

0x26e0,	// (0x00020657) cam6_zoom_pane

0x7bef,	// (0x00025b66) cam6_mode_pane_g1_ParamLimits

0x7bef,	// (0x00025b66) cam6_mode_pane_g1

0x7bfb,	// (0x00025b72) cam6_mode_pane_g2_ParamLimits

0x7bfb,	// (0x00025b72) cam6_mode_pane_g2

0x7c07,	// (0x00025b7e) cam6_mode_pane_g3_ParamLimits

0x7c07,	// (0x00025b7e) cam6_mode_pane_g3

0x7c13,	// (0x00025b8a) cam6_mode_pane_g4_ParamLimits

0x7c13,	// (0x00025b8a) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0002dad4) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0002dad4) cam6_mode_pane_g

0xd1a4,	// (0x0002b11b) bg_tb_trans_pane_cp08_ParamLimits

0xd1a4,	// (0x0002b11b) bg_tb_trans_pane_cp08

0xd97d,	// (0x0002b8f4) cam6_battery_pane_ParamLimits

0xd97d,	// (0x0002b8f4) cam6_battery_pane

0xd993,	// (0x0002b90a) cam6_indi_pane_g1_ParamLimits

0xd993,	// (0x0002b90a) cam6_indi_pane_g1

0xd9a5,	// (0x0002b91c) cam6_indi_pane_g2_ParamLimits

0xd9a5,	// (0x0002b91c) cam6_indi_pane_g2

0xd9b7,	// (0x0002b92e) cam6_indi_pane_g3_ParamLimits

0xd9b7,	// (0x0002b92e) cam6_indi_pane_g3

0x0002,

0x0a43,	// (0x0001e9ba) cam6_indi_pane_g_ParamLimits

0x0a43,	// (0x0001e9ba) cam6_indi_pane_g

0xd9c9,	// (0x0002b940) cam6_indi_pane_t1_ParamLimits

0xd9c9,	// (0x0002b940) cam6_indi_pane_t1

0x6cc4,	// (0x00024c3b) cam6_autofocus_pane_g1

0x6cbc,	// (0x00024c33) cam6_autofocus_pane_g2

0x6cd4,	// (0x00024c4b) cam6_autofocus_pane_g3

0x6ccc,	// (0x00024c43) cam6_autofocus_pane_g4

0x0003,

0xfb66,	// (0x0002dadd) cam6_autofocus_pane_g

0xd9ef,	// (0x0002b966) cam6_timer_pane_g1

0xd9f7,	// (0x0002b96e) cam6_timer_pane_t1

0xda05,	// (0x0002b97c) cam6_zoom_cont_pane

0xda0d,	// (0x0002b984) cam6_zoom_pane_g1

0xda15,	// (0x0002b98c) cam6_zoom_pane_g2

0x7c1f,	// (0x00025b96) cam6_zoom_pane_g3

0x0002,

0xfb6f,	// (0x0002dae6) cam6_zoom_pane_g

0xc72a,	// (0x0002a6a1) cam6_battery_pane_g1

0xc72a,	// (0x0002a6a1) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0002d65e) cam6_battery_pane_g

0xda1d,	// (0x0002b994) cam6_zoom_cont_pane_g1

0xda26,	// (0x0002b99d) cam6_zoom_cont_pane_g2

0xda2f,	// (0x0002b9a6) cam6_zoom_cont_pane_g3

0x0002,

0x0a5a,	// (0x0001e9d1) cam6_zoom_cont_pane_g

0x7c3c,	// (0x00025bb3) cam6_mode_pane_cp_ParamLimits

0x7c3c,	// (0x00025bb3) cam6_mode_pane_cp

0x7c50,	// (0x00025bc7) cam6_zoom_pane_cp_ParamLimits

0x7c50,	// (0x00025bc7) cam6_zoom_pane_cp

0x7c68,	// (0x00025bdf) vid6_image_uncrop_cif_pane_ParamLimits

0x7c68,	// (0x00025bdf) vid6_image_uncrop_cif_pane

0x7c94,	// (0x00025c0b) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c94,	// (0x00025c0b) vid6_image_uncrop_nhd_pane

0x7cb1,	// (0x00025c28) vid6_image_uncrop_vga_pane_ParamLimits

0x7cb1,	// (0x00025c28) vid6_image_uncrop_vga_pane

0x7cd0,	// (0x00025c47) vid6_image_uncrop_wvga_pane_ParamLimits

0x7cd0,	// (0x00025c47) vid6_image_uncrop_wvga_pane

0x7ced,	// (0x00025c64) vid6_indi_pane_ParamLimits

0x7ced,	// (0x00025c64) vid6_indi_pane

0xd1a4,	// (0x0002b11b) bg_tb_trans_pane_cp09_ParamLimits

0xd1a4,	// (0x0002b11b) bg_tb_trans_pane_cp09

0xda47,	// (0x0002b9be) cam6_battery_pane_cp_ParamLimits

0xda47,	// (0x0002b9be) cam6_battery_pane_cp

0xda53,	// (0x0002b9ca) vid6_indi_pane_g1_ParamLimits

0xda53,	// (0x0002b9ca) vid6_indi_pane_g1

0xda65,	// (0x0002b9dc) vid6_indi_pane_g2_ParamLimits

0xda65,	// (0x0002b9dc) vid6_indi_pane_g2

0xda77,	// (0x0002b9ee) vid6_indi_pane_g3_ParamLimits

0xda77,	// (0x0002b9ee) vid6_indi_pane_g3

0xda8c,	// (0x0002ba03) vid6_indi_pane_g4_ParamLimits

0xda8c,	// (0x0002ba03) vid6_indi_pane_g4

0xdaa1,	// (0x0002ba18) vid6_indi_pane_g5_ParamLimits

0xdaa1,	// (0x0002ba18) vid6_indi_pane_g5

0x0004,

0x0a61,	// (0x0001e9d8) vid6_indi_pane_g_ParamLimits

0x0a61,	// (0x0001e9d8) vid6_indi_pane_g

0xdabb,	// (0x0002ba32) vid6_indi_pane_t1_ParamLimits

0xdabb,	// (0x0002ba32) vid6_indi_pane_t1

0xdad1,	// (0x0002ba48) vid6_indi_pane_t2_ParamLimits

0xdad1,	// (0x0002ba48) vid6_indi_pane_t2

0xdaf9,	// (0x0002ba70) vid6_indi_pane_t3_ParamLimits

0xdaf9,	// (0x0002ba70) vid6_indi_pane_t3

0xdb21,	// (0x0002ba98) vid6_indi_pane_t4_ParamLimits

0xdb21,	// (0x0002ba98) vid6_indi_pane_t4

0x0003,

0x0a6c,	// (0x0001e9e3) vid6_indi_pane_t_ParamLimits

0x0a6c,	// (0x0001e9e3) vid6_indi_pane_t

0xdb45,	// (0x0002babc) wait_bar_pane_cp08

0x7d10,	// (0x00025c87) main_cset_text2_pane_t1_ParamLimits

0x7d10,	// (0x00025c87) main_cset_text2_pane_t1

0x7c27,	// (0x00025b9e) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c27,	// (0x00025b9e) listscroll_gen_pane_cp06_t1

0x10d1,	// (0x0001f048) main_cam6_set_pane

0x1fea,	// (0x0001ff61) bg_tb_trans_pane_cp06_ParamLimits

0x2000,	// (0x0001ff77) cam4_indicators_pane_g1_ParamLimits

0x2011,	// (0x0001ff88) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0002d874) cam4_indicators_pane_g_ParamLimits

0x202f,	// (0x0001ffa6) cam4_indicators_pane_t1_ParamLimits

0x159b,	// (0x0001f512) bg_tb_trans_pane_cp07_ParamLimits

0x20e0,	// (0x00020057) vid4_indicators_pane_g1_ParamLimits

0x20f4,	// (0x0002006b) vid4_indicators_pane_g2_ParamLimits

0x2108,	// (0x0002007f) vid4_indicators_pane_g3_ParamLimits

0x2119,	// (0x00020090) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0002d886) vid4_indicators_pane_g_ParamLimits

0x2135,	// (0x000200ac) vid4_indicators_pane_t1_ParamLimits

0x25c6,	// (0x0002053d) vid4_progress_pane_g1_ParamLimits

0x25d8,	// (0x0002054f) vid4_progress_pane_g2_ParamLimits

0xaa68,	// (0x000289df) vid4_progress_pane_g3_ParamLimits

0x25e8,	// (0x0002055f) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0002da37) vid4_progress_pane_g_ParamLimits

0x2606,	// (0x0002057d) vid4_progress_pane_t1_ParamLimits

0x261b,	// (0x00020592) vid4_progress_pane_t2_ParamLimits

0x2631,	// (0x000205a8) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0002da42) vid4_progress_pane_t_ParamLimits

0x2647,	// (0x000205be) wait_bar_pane_cp07_ParamLimits

0x7d4a,	// (0x00025cc1) main_cam6_set_pane_g2_ParamLimits

0x7d4a,	// (0x00025cc1) main_cam6_set_pane_g2

0x7d56,	// (0x00025ccd) main_cset6_listscroll_pane_ParamLimits

0x7d56,	// (0x00025ccd) main_cset6_listscroll_pane

0x7d81,	// (0x00025cf8) main_cset6_slider_pane_ParamLimits

0x7d81,	// (0x00025cf8) main_cset6_slider_pane

0x7d8d,	// (0x00025d04) main_cset6_text2_pane_ParamLimits

0x7d8d,	// (0x00025d04) main_cset6_text2_pane

0xdb54,	// (0x0002bacb) main_cset6_text_pane

0xdb5c,	// (0x0002bad3) main_cset_list_pane_copy1_ParamLimits

0xdb5c,	// (0x0002bad3) main_cset_list_pane_copy1

0xdb6c,	// (0x0002bae3) scroll_pane_cp028_copy1

0x7da0,	// (0x00025d17) cset_list_set_pane_copy1

0x7db9,	// (0x00025d30) aid_position_infowindow_above_copy1

0x7dc1,	// (0x00025d38) aid_position_infowindow_below_copy1

0x7dc9,	// (0x00025d40) cset_list_set_pane_g1_copy1

0x7296,	// (0x0002520d) cset_list_set_pane_g3_copy1_ParamLimits

0x7296,	// (0x0002520d) cset_list_set_pane_g3_copy1

0x72a5,	// (0x0002521c) cset_list_set_pane_t1_copy1_ParamLimits

0x72a5,	// (0x0002521c) cset_list_set_pane_t1_copy1

0xa3df,	// (0x00028356) list_highlight_pane_cp021_copy1_ParamLimits

0xa3df,	// (0x00028356) list_highlight_pane_cp021_copy1

0xdb75,	// (0x0002baec) cset6_slider_pane_ParamLimits

0xdb75,	// (0x0002baec) cset6_slider_pane

0xdba1,	// (0x0002bb18) main_cset6_slider_pane_g1_ParamLimits

0xdba1,	// (0x0002bb18) main_cset6_slider_pane_g1

0x7dd1,	// (0x00025d48) main_cset6_slider_pane_g2_ParamLimits

0x7dd1,	// (0x00025d48) main_cset6_slider_pane_g2

0xdbc9,	// (0x0002bb40) main_cset6_slider_pane_g3_ParamLimits

0xdbc9,	// (0x0002bb40) main_cset6_slider_pane_g3

0x7df9,	// (0x00025d70) main_cset6_slider_pane_g4_ParamLimits

0x7df9,	// (0x00025d70) main_cset6_slider_pane_g4

0x7e05,	// (0x00025d7c) main_cset6_slider_pane_g5_ParamLimits

0x7e05,	// (0x00025d7c) main_cset6_slider_pane_g5

0xd37f,	// (0x0002b2f6) main_cset6_slider_pane_g7_ParamLimits

0xd37f,	// (0x0002b2f6) main_cset6_slider_pane_g7

0xd38b,	// (0x0002b302) main_cset6_slider_pane_g8_ParamLimits

0xd38b,	// (0x0002b302) main_cset6_slider_pane_g8

0x7e13,	// (0x00025d8a) main_cset6_slider_pane_g9_ParamLimits

0x7e13,	// (0x00025d8a) main_cset6_slider_pane_g9

0x7e1f,	// (0x00025d96) main_cset6_slider_pane_g10_ParamLimits

0x7e1f,	// (0x00025d96) main_cset6_slider_pane_g10

0x7e2b,	// (0x00025da2) main_cset6_slider_pane_g11_ParamLimits

0x7e2b,	// (0x00025da2) main_cset6_slider_pane_g11

0x7e37,	// (0x00025dae) main_cset6_slider_pane_g12_ParamLimits

0x7e37,	// (0x00025dae) main_cset6_slider_pane_g12

0x7e43,	// (0x00025dba) main_cset6_slider_pane_g13_ParamLimits

0x7e43,	// (0x00025dba) main_cset6_slider_pane_g13

0x7e4f,	// (0x00025dc6) main_cset6_slider_pane_g14_ParamLimits

0x7e4f,	// (0x00025dc6) main_cset6_slider_pane_g14

0x7e5b,	// (0x00025dd2) main_cset6_slider_pane_g15_ParamLimits

0x7e5b,	// (0x00025dd2) main_cset6_slider_pane_g15

0x7e73,	// (0x00025dea) main_cset6_slider_pane_g16_ParamLimits

0x7e73,	// (0x00025dea) main_cset6_slider_pane_g16

0x7e81,	// (0x00025df8) main_cset6_slider_pane_g17_ParamLimits

0x7e81,	// (0x00025df8) main_cset6_slider_pane_g17

0x0011,

0xfb76,	// (0x0002daed) main_cset6_slider_pane_g_ParamLimits

0xfb76,	// (0x0002daed) main_cset6_slider_pane_g

0xdbd5,	// (0x0002bb4c) main_cset6_slider_pane_t1_ParamLimits

0xdbd5,	// (0x0002bb4c) main_cset6_slider_pane_t1

0x7ea7,	// (0x00025e1e) main_cset6_slider_pane_t2_ParamLimits

0x7ea7,	// (0x00025e1e) main_cset6_slider_pane_t2

0x7ed2,	// (0x00025e49) main_cset6_slider_pane_t3_ParamLimits

0x7ed2,	// (0x00025e49) main_cset6_slider_pane_t3

0x7efd,	// (0x00025e74) main_cset6_slider_pane_t4_ParamLimits

0x7efd,	// (0x00025e74) main_cset6_slider_pane_t4

0x7f28,	// (0x00025e9f) main_cset6_slider_pane_t5_ParamLimits

0x7f28,	// (0x00025e9f) main_cset6_slider_pane_t5

0xdc16,	// (0x0002bb8d) main_cset6_slider_pane_t7_ParamLimits

0xdc16,	// (0x0002bb8d) main_cset6_slider_pane_t7

0x7f55,	// (0x00025ecc) main_cset6_slider_pane_t8_ParamLimits

0x7f55,	// (0x00025ecc) main_cset6_slider_pane_t8

0x7f79,	// (0x00025ef0) main_cset6_slider_pane_t9_ParamLimits

0x7f79,	// (0x00025ef0) main_cset6_slider_pane_t9

0x7f9d,	// (0x00025f14) main_cset6_slider_pane_t10_ParamLimits

0x7f9d,	// (0x00025f14) main_cset6_slider_pane_t10

0x7fc1,	// (0x00025f38) main_cset6_slider_pane_t11_ParamLimits

0x7fc1,	// (0x00025f38) main_cset6_slider_pane_t11

0xdc4c,	// (0x0002bbc3) main_cset6_slider_pane_t14_ParamLimits

0xdc4c,	// (0x0002bbc3) main_cset6_slider_pane_t14

0xdc85,	// (0x0002bbfc) main_cset6_slider_pane_t15_ParamLimits

0xdc85,	// (0x0002bbfc) main_cset6_slider_pane_t15

0x000b,

0xfb9b,	// (0x0002db12) main_cset6_slider_pane_t_ParamLimits

0xfb9b,	// (0x0002db12) main_cset6_slider_pane_t

0xd4d1,	// (0x0002b448) cset_slider_pane_g1_copy1

0xd4da,	// (0x0002b451) cset_slider_pane_g2_copy1

0xd4e3,	// (0x0002b45a) cset_slider_pane_g3_copy1

0x9c97,	// (0x00027c0e) bg_popup_sub_pane_cp011_copy1

0xdcbe,	// (0x0002bc35) main_cset_text_pane_g1_copy1

0xd4ec,	// (0x0002b463) main_cset_text_pane_t1_copy1

0xd4fa,	// (0x0002b471) main_cset_text_pane_t2_copy1

0xd508,	// (0x0002b47f) main_cset_text_pane_t3_copy1

0xd516,	// (0x0002b48d) main_cset_text_pane_t4_copy1

0xd524,	// (0x0002b49b) main_cset_text_pane_t5_copy1

0xdcc6,	// (0x0002bc3d) main_cset_text_pane_t6_copy1

0xdcd4,	// (0x0002bc4b) main_cset_text_pane_t7_copy1

0x80b8,	// (0x0002602f) main_cset_text2_pane_t1_copy1

0x159b,	// (0x0001f512) main_ncimui_pane

0x15fa,	// (0x0001f571) popup_query_ncimui_window_ParamLimits

0x15fa,	// (0x0001f571) popup_query_ncimui_window

0xca2b,	// (0x0002a9a2) field_cale_ev2_pane_g4_ParamLimits

0xca2b,	// (0x0002a9a2) field_cale_ev2_pane_g4

0x6b09,	// (0x00024a80) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6b09,	// (0x00024a80) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0002d812) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0002d812) cell_video_dialer_keypad_pane_g

0x6b21,	// (0x00024a98) cell_video_dialer_keypad_pane_t1

0x9c97,	// (0x00027c0e) bg_popup_window_pane_cp012

0xac42,	// (0x00028bb9) heading_pane_cp06

0xdd00,	// (0x0002bc77) ncim_query_content_pane

0x9c97,	// (0x00027c0e) bg_popup_heading_pane_cp01

0xdd08,	// (0x0002bc7f) ncim_heading_pane_t1

0xdd16,	// (0x0002bc8d) ncim_indicator_popup_pane

0xdd28,	// (0x0002bc9f) ncim_query_button_pane

0xdd3c,	// (0x0002bcb3) ncim_query_content_pane_t1

0xdd4e,	// (0x0002bcc5) ncim_query_content_pane_t2

0x0005,

0xfbdf,	// (0x0002db56) ncim_query_content_pane_t

0xdd88,	// (0x0002bcff) ncim_query_list_pane

0xdd9a,	// (0x0002bd11) ncim_query_popup_pane

0xdd16,	// (0x0002bc8d) ncim_indicator_popup_pane_ParamLimits

0x8212,	// (0x00026189) ncim_query_content_pane_g1_ParamLimits

0x8212,	// (0x00026189) ncim_query_content_pane_g1

0xdd3c,	// (0x0002bcb3) ncim_query_content_pane_t1_ParamLimits

0xdd4e,	// (0x0002bcc5) ncim_query_content_pane_t2_ParamLimits

0x821e,	// (0x00026195) ncim_query_content_pane_t3_ParamLimits

0x821e,	// (0x00026195) ncim_query_content_pane_t3

0x823b,	// (0x000261b2) ncim_query_content_pane_t4_ParamLimits

0x823b,	// (0x000261b2) ncim_query_content_pane_t4

0x8258,	// (0x000261cf) ncim_query_content_pane_t5_ParamLimits

0x8258,	// (0x000261cf) ncim_query_content_pane_t5

0xdd60,	// (0x0002bcd7) ncim_query_content_pane_t6_ParamLimits

0xdd60,	// (0x0002bcd7) ncim_query_content_pane_t6

0xfbdf,	// (0x0002db56) ncim_query_content_pane_t_ParamLimits

0xdd88,	// (0x0002bcff) ncim_query_list_pane_ParamLimits

0xdd9a,	// (0x0002bd11) ncim_query_popup_pane_ParamLimits

0xddae,	// (0x0002bd25) wait_bar_pane_cp04

0x9c97,	// (0x00027c0e) input_focus_pane_cp011

0xddb6,	// (0x0002bd2d) ncim_query_popup_pane_t1

0xddc4,	// (0x0002bd3b) ncim_list_query_list_pane_ParamLimits

0xddc4,	// (0x0002bd3b) ncim_list_query_list_pane

0x9c97,	// (0x00027c0e) bg_button_pane_cp027

0xddd7,	// (0x0002bd4e) ncim_query_button_pane_g1

0x9c97,	// (0x00027c0e) list_highlight_pane_cp012

0xdde1,	// (0x0002bd58) ncim_list_query_list_pane_g1

0xdde9,	// (0x0002bd60) ncim_list_query_list_pane_t1

0x2020,	// (0x0001ff97) cam4_indicators_pane_g3_ParamLimits

0x2020,	// (0x0001ff97) cam4_indicators_pane_g3

0x2125,	// (0x0002009c) vid4_indicators_pane_g5_ParamLimits

0x2125,	// (0x0002009c) vid4_indicators_pane_g5

0x25f7,	// (0x0002056e) vid4_progress_pane_g5_ParamLimits

0x25f7,	// (0x0002056e) vid4_progress_pane_g5

0x80fe,	// (0x00026075) main_ncimui_pane_g1

0x8166,	// (0x000260dd) ncimui_group_query_pane_ParamLimits

0x8166,	// (0x000260dd) ncimui_group_query_pane

0x81ae,	// (0x00026125) ncimui_list_pane_ParamLimits

0x81ae,	// (0x00026125) ncimui_list_pane

0x81d5,	// (0x0002614c) ncimui_text_pane_ParamLimits

0x81d5,	// (0x0002614c) ncimui_text_pane

0x8275,	// (0x000261ec) ncimui_text_pane_t1_ParamLimits

0x8275,	// (0x000261ec) ncimui_text_pane_t1

0xddf7,	// (0x0002bd6e) ncimui_list_single_graphic_pane_ParamLimits

0xddf7,	// (0x0002bd6e) ncimui_list_single_graphic_pane

0x8294,	// (0x0002620b) ncimui_query_pane_ParamLimits

0x8294,	// (0x0002620b) ncimui_query_pane

0x9c97,	// (0x00027c0e) list_highlight_pane_cp013

0xde07,	// (0x0002bd7e) ncim_list_query_list_pane_t1_copy1

0xdde1,	// (0x0002bd58) ncim_list_single_graphic_pane_g1

0xde15,	// (0x0002bd8c) ncim_query_button_pane_cp01

0xde21,	// (0x0002bd98) ncim_query_entry_pane_ParamLimits

0xde21,	// (0x0002bd98) ncim_query_entry_pane

0xde34,	// (0x0002bdab) ncimui_query_pane_g1

0xde40,	// (0x0002bdb7) ncimui_query_pane_t1_ParamLimits

0xde40,	// (0x0002bdb7) ncimui_query_pane_t1

0xa3df,	// (0x00028356) input_focus_pane_cp012

0xde59,	// (0x0002bdd0) ncim_query_entry_pane_t1

0xa401,	// (0x00028378) main_im_pane_ParamLimits

0x159b,	// (0x0001f512) main_mobtv_pane_ParamLimits

0x159b,	// (0x0001f512) main_mobtv_pane

0x7e8f,	// (0x00025e06) main_cset6_slider_pane_g18_ParamLimits

0x7e8f,	// (0x00025e06) main_cset6_slider_pane_g18

0x7e9b,	// (0x00025e12) main_cset6_slider_pane_g19_ParamLimits

0x7e9b,	// (0x00025e12) main_cset6_slider_pane_g19

0xd1e3,	// (0x0002b15a) bg_main_mobtv_pane_ParamLimits

0xd1e3,	// (0x0002b15a) bg_main_mobtv_pane

0x82a7,	// (0x0002621e) main_mobtv_info_pane

0x82b2,	// (0x00026229) main_mobtv_loading_pane_ParamLimits

0x82b2,	// (0x00026229) main_mobtv_loading_pane

0xde6b,	// (0x0002bde2) main_mobtv_pg_channel_list_pane

0xde75,	// (0x0002bdec) main_mobtv_pg_hdr_pane

0x82bf,	// (0x00026236) main_mobtv_programe_curr_pane_ParamLimits

0x82bf,	// (0x00026236) main_mobtv_programe_curr_pane

0x82cc,	// (0x00026243) main_mobtv_programe_next_pane_ParamLimits

0x82cc,	// (0x00026243) main_mobtv_programe_next_pane

0xde7e,	// (0x0002bdf5) popup_mobtv_noti_window

0xc72a,	// (0x0002a6a1) main_tv_pg_hdr_pane_g1

0xde86,	// (0x0002bdfd) main_tv_pg_hdr_pane_g2

0xde8e,	// (0x0002be05) main_tv_pg_hdr_pane_g3

0xde96,	// (0x0002be0d) main_tv_pg_hdr_pane_g4

0xde9e,	// (0x0002be15) main_tv_pg_hdr_pane_g5

0xdea8,	// (0x0002be1f) main_tv_pg_hdr_pane_g6

0xdeb2,	// (0x0002be29) main_tv_pg_hdr_pane_g7

0xdebc,	// (0x0002be33) main_tv_pg_hdr_pane_g8

0xdec6,	// (0x0002be3d) main_tv_pg_hdr_pane_g9

0xded0,	// (0x0002be47) main_tv_pg_hdr_pane_g10

0xdeda,	// (0x0002be51) main_tv_pg_hdr_pane_g11

0x000a,

0xfbec,	// (0x0002db63) main_tv_pg_hdr_pane_g

0xdee4,	// (0x0002be5b) main_tv_pg_hdr_pane_t1

0xdef2,	// (0x0002be69) main_tv_pg_hdr_pane_t2

0xdf00,	// (0x0002be77) main_tv_pg_hdr_pane_t3

0xdf10,	// (0x0002be87) main_tv_pg_hdr_pane_t4

0xdf20,	// (0x0002be97) main_tv_pg_hdr_pane_t5

0x0004,

0x0b02,	// (0x0001ea79) main_tv_pg_hdr_pane_t

0xdf30,	// (0x0002bea7) single_mobtv_pg_channel_pane_ParamLimits

0xdf30,	// (0x0002bea7) single_mobtv_pg_channel_pane

0xdf42,	// (0x0002beb9) single_mobtv_pg_channel_table_pane

0xdf4b,	// (0x0002bec2) single_mobtv_pg_channel_thumb_pane

0xdf54,	// (0x0002becb) single_tv_pg_channel_pane_g1

0xdf5d,	// (0x0002bed4) single_tv_pg_channel_pane_g2

0x0001,

0x0b0d,	// (0x0001ea84) single_tv_pg_channel_pane_g

0xc98a,	// (0x0002a901) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc98a,	// (0x0002a901) bg_single_mobtv_pg_channel_thumb_pane

0xdf66,	// (0x0002bedd) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf66,	// (0x0002bedd) single_mobtv_pg_channel_thumb_pane_g1

0xdf74,	// (0x0002beeb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf74,	// (0x0002beeb) single_mobtv_pg_channel_thumb_pane_g2

0xdf80,	// (0x0002bef7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf80,	// (0x0002bef7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0b12,	// (0x0001ea89) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0b12,	// (0x0001ea89) single_mobtv_pg_channel_thumb_pane_g

0xdf8c,	// (0x0002bf03) single_mobtv_pg_channel_thumb_pane_t1

0xdf9a,	// (0x0002bf11) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b19,	// (0x0001ea90) single_mobtv_pg_channel_thumb_pane_t

0xc72a,	// (0x0002a6a1) bg_single_mobtv_pg_channel_table_pane_g1

0xc72a,	// (0x0002a6a1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0002d65e) bg_single_mobtv_pg_channel_table_pane_g

0xdfa8,	// (0x0002bf1f) single_mobtv_pg_channel_table_pane_t1

0xdfb6,	// (0x0002bf2d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b1e,	// (0x0001ea95) single_mobtv_pg_channel_table_pane_t

0x82e1,	// (0x00026258) main_mobtv_info_pane_g1_ParamLimits

0x82e1,	// (0x00026258) main_mobtv_info_pane_g1

0x82fd,	// (0x00026274) main_mobtv_info_pane_t1_ParamLimits

0x82fd,	// (0x00026274) main_mobtv_info_pane_t1

0x8375,	// (0x000262ec) main_mobtv_info_pane_t2_ParamLimits

0x8375,	// (0x000262ec) main_mobtv_info_pane_t2

0x0002,

0xfc08,	// (0x0002db7f) main_mobtv_info_pane_t_ParamLimits

0xfc08,	// (0x0002db7f) main_mobtv_info_pane_t

0x8404,	// (0x0002637b) wait_bar_pane_cp05

0x8416,	// (0x0002638d) main_mobtv_loading_pane_g1_ParamLimits

0x8416,	// (0x0002638d) main_mobtv_loading_pane_g1

0x8424,	// (0x0002639b) main_mobtv_loading_pane_g2_ParamLimits

0x8424,	// (0x0002639b) main_mobtv_loading_pane_g2

0x8430,	// (0x000263a7) main_mobtv_loading_pane_g3_ParamLimits

0x8430,	// (0x000263a7) main_mobtv_loading_pane_g3

0x0002,

0xfc0f,	// (0x0002db86) main_mobtv_loading_pane_g_ParamLimits

0xfc0f,	// (0x0002db86) main_mobtv_loading_pane_g

0xdfc4,	// (0x0002bf3b) main_mobtv_loading_pane_t1_ParamLimits

0xdfc4,	// (0x0002bf3b) main_mobtv_loading_pane_t1

0xdfdc,	// (0x0002bf53) main_mobtv_loading_pane_t2_ParamLimits

0xdfdc,	// (0x0002bf53) main_mobtv_loading_pane_t2

0x0001,

0x0b36,	// (0x0001eaad) main_mobtv_loading_pane_t_ParamLimits

0x0b36,	// (0x0001eaad) main_mobtv_loading_pane_t

0x843e,	// (0x000263b5) wait_bar_pane_cp06_ParamLimits

0x843e,	// (0x000263b5) wait_bar_pane_cp06

0xe000,	// (0x0002bf77) main_mobtv_programe_curr_pane_t1

0xe00e,	// (0x0002bf85) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b3b,	// (0x0001eab2) main_mobtv_programe_curr_pane_t

0xe01c,	// (0x0002bf93) main_mobtv_programe_next_pane_t1

0xe02a,	// (0x0002bfa1) main_mobtv_programe_next_pane_t2

0xe038,	// (0x0002bfaf) main_mobtv_programe_next_pane_t3

0x0002,

0x0b40,	// (0x0001eab7) main_mobtv_programe_next_pane_t

0x9c97,	// (0x00027c0e) bg_popup_mobtv_noti_window_pane

0xe046,	// (0x0002bfbd) popup_mobtv_noti_window_g1

0xe04e,	// (0x0002bfc5) popup_mobtv_noti_window_t1

0xe05c,	// (0x0002bfd3) popup_mobtv_noti_window_t2

0x0001,

0x0b47,	// (0x0001eabe) popup_mobtv_noti_window_t

0xc72a,	// (0x0002a6a1) bg_popup_mobtv_noti_window_pane_g1

0x10d1,	// (0x0001f048) sc_clock_pane

0x10d1,	// (0x0001f048) main_fs_bigclock_pane

0x7aa2,	// (0x00025a19) blid2_tripm_pane_t4_ParamLimits

0x7aa2,	// (0x00025a19) blid2_tripm_pane_t4

0x844a,	// (0x000263c1) sc_clock_pane_g1_ParamLimits

0x844a,	// (0x000263c1) sc_clock_pane_g1

0x8458,	// (0x000263cf) sc_clock_pane_t1_ParamLimits

0x8458,	// (0x000263cf) sc_clock_pane_t1

0x846b,	// (0x000263e2) sc_clock_pane_t2_ParamLimits

0x846b,	// (0x000263e2) sc_clock_pane_t2

0x847d,	// (0x000263f4) sc_clock_pane_t3_ParamLimits

0x847d,	// (0x000263f4) sc_clock_pane_t3

0x0004,

0xfc16,	// (0x0002db8d) sc_clock_pane_t_ParamLimits

0xfc16,	// (0x0002db8d) sc_clock_pane_t

0x9299,	// (0x00027210) main_fs_bigclock_indicator_pane_ParamLimits

0x9299,	// (0x00027210) main_fs_bigclock_indicator_pane

0x8518,	// (0x0002648f) main_fs_bigclock_pane_g1_ParamLimits

0x8518,	// (0x0002648f) main_fs_bigclock_pane_g1

0x92a5,	// (0x0002721c) main_fs_bigclock_pane_t1_ParamLimits

0x92a5,	// (0x0002721c) main_fs_bigclock_pane_t1

0x92b7,	// (0x0002722e) main_fs_bigclock_pane_t2_ParamLimits

0x92b7,	// (0x0002722e) main_fs_bigclock_pane_t2

0x92c9,	// (0x00027240) main_fs_bigclock_pane_t3_ParamLimits

0x92c9,	// (0x00027240) main_fs_bigclock_pane_t3

0x0002,

0xfd7b,	// (0x0002dcf2) main_fs_bigclock_pane_t_ParamLimits

0xfd7b,	// (0x0002dcf2) main_fs_bigclock_pane_t

0xec33,	// (0x0002cbaa) main_fs_bigclock_indicator_pane_g1

0xdd30,	// (0x0002bca7) ncim_query_content_pane_g2_ParamLimits

0xdd30,	// (0x0002bca7) ncim_query_content_pane_g2

0x0001,

0xfbda,	// (0x0002db51) ncim_query_content_pane_g_ParamLimits

0xfbda,	// (0x0002db51) ncim_query_content_pane_g

0x8491,	// (0x00026408) sc_clock_pane_t4_ParamLimits

0x8491,	// (0x00026408) sc_clock_pane_t4

0x159b,	// (0x0001f512) main_radioblah_pane

0xd138,	// (0x0002b0af) cell_call4_button_pane_t1_copy1_ParamLimits

0xd138,	// (0x0002b0af) cell_call4_button_pane_t1_copy1

0x8118,	// (0x0002608f) main_ncimui_pane_t1_ParamLimits

0x8118,	// (0x0002608f) main_ncimui_pane_t1

0x8132,	// (0x000260a9) main_ncimui_pane_t2_ParamLimits

0x8132,	// (0x000260a9) main_ncimui_pane_t2

0x0002,

0xfbd3,	// (0x0002db4a) main_ncimui_pane_t_ParamLimits

0xfbd3,	// (0x0002db4a) main_ncimui_pane_t

0xe197,	// (0x0002c10e) main_radioblah_anim_pane_ParamLimits

0xe197,	// (0x0002c10e) main_radioblah_anim_pane

0xe1a8,	// (0x0002c11f) main_radioblah_info_pane_ParamLimits

0xe1a8,	// (0x0002c11f) main_radioblah_info_pane

0xe1bc,	// (0x0002c133) main_radioblah_pane_t1_ParamLimits

0xe1bc,	// (0x0002c133) main_radioblah_pane_t1

0xe1d8,	// (0x0002c14f) main_radioblah_pane_t2_ParamLimits

0xe1d8,	// (0x0002c14f) main_radioblah_pane_t2

0x0003,

0x0b6d,	// (0x0001eae4) main_radioblah_pane_t_ParamLimits

0x0b6d,	// (0x0001eae4) main_radioblah_pane_t

0x856a,	// (0x000264e1) main_radioblah_rocker_ctrl_pane_ParamLimits

0x856a,	// (0x000264e1) main_radioblah_rocker_ctrl_pane

0xe220,	// (0x0002c197) main_radioblah_info_pane_t1_ParamLimits

0xe220,	// (0x0002c197) main_radioblah_info_pane_t1

0x85af,	// (0x00026526) main_radioblah_info_pane_t2_ParamLimits

0x85af,	// (0x00026526) main_radioblah_info_pane_t2

0x0003,

0xfc21,	// (0x0002db98) main_radioblah_info_pane_t_ParamLimits

0xfc21,	// (0x0002db98) main_radioblah_info_pane_t

0xc72a,	// (0x0002a6a1) main_radioblah_rocker_ctrl_pane_g1

0x865f,	// (0x000265d6) main_radioblah_rocker_ctrl_pane_g2

0x8667,	// (0x000265de) main_radioblah_rocker_ctrl_pane_g3

0x866f,	// (0x000265e6) main_radioblah_rocker_ctrl_pane_g4

0x8677,	// (0x000265ee) main_radioblah_rocker_ctrl_pane_g5

0x867f,	// (0x000265f6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2a,	// (0x0002dba1) main_radioblah_rocker_ctrl_pane_g

0x80b8,	// (0x0002602f) main_cset_text2_pane_t1_copy1_ParamLimits

0x1f64,	// (0x0001fedb) cam4_image_uncrop_qvga_pane

0x2095,	// (0x0002000c) vid4_image_uncrop_qcif_pane

0x2698,	// (0x0002060f) cam6_image_uncrop_qvga_pane_ParamLimits

0x2698,	// (0x0002060f) cam6_image_uncrop_qvga_pane

0xda37,	// (0x0002b9ae) vid6_image_uncrop_qcif_pane_ParamLimits

0xda37,	// (0x0002b9ae) vid6_image_uncrop_qcif_pane

0x9c97,	// (0x00027c0e) bg_popup_preview_window_pane_cp03

0xdce2,	// (0x0002bc59) list_cset_text2_pane

0xdcea,	// (0x0002bc61) main_cset6_text2_pane_g1

0xdcf2,	// (0x0002bc69) main_cset6_text2_pane_t1

0x8687,	// (0x000265fe) list_cset_text2_pane_t1_ParamLimits

0x8687,	// (0x000265fe) list_cset_text2_pane_t1

0x159b,	// (0x0001f512) main_radioblah_pane_ParamLimits

0x83f0,	// (0x00026367) main_mobtv_info_pane_t3_ParamLimits

0x83f0,	// (0x00026367) main_mobtv_info_pane_t3

0x8558,	// (0x000264cf) main_radioblah_pane_g1

0x8583,	// (0x000264fa) main_radioblah_info_pane_g1

0x8604,	// (0x0002657b) main_radioblah_info_pane_t3_ParamLimits

0x8604,	// (0x0002657b) main_radioblah_info_pane_t3

0x4442,	// (0x000223b9) highlight_cell_cale_month_pane_ParamLimits

0x4442,	// (0x000223b9) highlight_cell_cale_month_pane

0x10d1,	// (0x0001f048) main_phob_fisheye_pane

0xcada,	// (0x0002aa51) scroll_pane_cp0031_ParamLimits

0xcada,	// (0x0002aa51) scroll_pane_cp0031

0xdb45,	// (0x0002babc) wait_bar_pane_cp08_ParamLimits

0x7da0,	// (0x00025d17) cset_list_set_pane_copy1_ParamLimits

0xe25a,	// (0x0002c1d1) highlight_cell_cale_month_pane_g1

0x86ae,	// (0x00026625) highlight_cell_cale_month_pane_t1

0xd7b4,	// (0x0002b72b) list_gen_pane_cp01

0xd36a,	// (0x0002b2e1) scroll_pane_01

0x86bc,	// (0x00026633) list_single_double_fisheye_pane

0x86c5,	// (0x0002663c) list_double_fisheye_pane_g1_ParamLimits

0x86c5,	// (0x0002663c) list_double_fisheye_pane_g1

0x86d1,	// (0x00026648) list_double_fisheye_pane_g2_ParamLimits

0x86d1,	// (0x00026648) list_double_fisheye_pane_g2

0x86e5,	// (0x0002665c) list_double_fisheye_pane_g3_ParamLimits

0x86e5,	// (0x0002665c) list_double_fisheye_pane_g3

0x0004,

0xfc37,	// (0x0002dbae) list_double_fisheye_pane_g_ParamLimits

0xfc37,	// (0x0002dbae) list_double_fisheye_pane_g

0x870e,	// (0x00026685) list_double_fisheye_pane_t1_ParamLimits

0x870e,	// (0x00026685) list_double_fisheye_pane_t1

0x8729,	// (0x000266a0) list_double_fisheye_pane_t2_ParamLimits

0x8729,	// (0x000266a0) list_double_fisheye_pane_t2

0x0001,

0xfc42,	// (0x0002dbb9) list_double_fisheye_pane_t_ParamLimits

0xfc42,	// (0x0002dbb9) list_double_fisheye_pane_t

0x10d1,	// (0x0001f048) main_call5_pane

0x84b7,	// (0x0002642e) sc_swipe_pane_ParamLimits

0x84b7,	// (0x0002642e) sc_swipe_pane

0x8757,	// (0x000266ce) call5_image_pane_ParamLimits

0x8757,	// (0x000266ce) call5_image_pane

0x8767,	// (0x000266de) call5_swipe_1_pane_ParamLimits

0x8767,	// (0x000266de) call5_swipe_1_pane

0x8773,	// (0x000266ea) call5_swipe_2_pane_ParamLimits

0x8773,	// (0x000266ea) call5_swipe_2_pane

0x878d,	// (0x00026704) popup_call5_audio_first_window_ParamLimits

0x878d,	// (0x00026704) popup_call5_audio_first_window

0xc98a,	// (0x0002a901) call5_swipe_1_pane_g1_ParamLimits

0xc98a,	// (0x0002a901) call5_swipe_1_pane_g1

0xe262,	// (0x0002c1d9) call5_swipe_1_pane_g2_ParamLimits

0xe262,	// (0x0002c1d9) call5_swipe_1_pane_g2

0x0001,

0xfc47,	// (0x0002dbbe) call5_swipe_1_pane_g_ParamLimits

0xfc47,	// (0x0002dbbe) call5_swipe_1_pane_g

0xe26e,	// (0x0002c1e5) call5_swipe_1_pane_t1_ParamLimits

0xe26e,	// (0x0002c1e5) call5_swipe_1_pane_t1

0xc98a,	// (0x0002a901) call5_swipe_2_pane_g1_ParamLimits

0xc98a,	// (0x0002a901) call5_swipe_2_pane_g1

0xe283,	// (0x0002c1fa) call5_swipe_2_pane_g2_ParamLimits

0xe283,	// (0x0002c1fa) call5_swipe_2_pane_g2

0x0001,

0xfc4c,	// (0x0002dbc3) call5_swipe_2_pane_g_ParamLimits

0xfc4c,	// (0x0002dbc3) call5_swipe_2_pane_g

0xe28f,	// (0x0002c206) call5_swipe_2_pane_t1_ParamLimits

0xe28f,	// (0x0002c206) call5_swipe_2_pane_t1

0xe2a4,	// (0x0002c21b) sc_swipe_pane_g1_ParamLimits

0xe2a4,	// (0x0002c21b) sc_swipe_pane_g1

0xe2b1,	// (0x0002c228) sc_swipe_pane_g2_ParamLimits

0xe2b1,	// (0x0002c228) sc_swipe_pane_g2

0x0001,

0x0ba6,	// (0x0001eb1d) sc_swipe_pane_g_ParamLimits

0x0ba6,	// (0x0001eb1d) sc_swipe_pane_g

0xe2bd,	// (0x0002c234) sc_swipe_pane_t1_ParamLimits

0xe2bd,	// (0x0002c234) sc_swipe_pane_t1

0x10d1,	// (0x0001f048) main_cmail_launcher_pane

0x879b,	// (0x00026712) aid_size_cell_cmail_l_ParamLimits

0x879b,	// (0x00026712) aid_size_cell_cmail_l

0x87ab,	// (0x00026722) grid_cmail_l_pane_ParamLimits

0x87ab,	// (0x00026722) grid_cmail_l_pane

0x87bb,	// (0x00026732) cell_cmail_l_pane_ParamLimits

0x87bb,	// (0x00026732) cell_cmail_l_pane

0x87cf,	// (0x00026746) cell_cmail_l_pane_g1_ParamLimits

0x87cf,	// (0x00026746) cell_cmail_l_pane_g1

0x87e0,	// (0x00026757) cell_cmail_l_pane_t1_ParamLimits

0x87e0,	// (0x00026757) cell_cmail_l_pane_t1

0xe2d2,	// (0x0002c249) cell_cmail_l_pane_t2_ParamLimits

0xe2d2,	// (0x0002c249) cell_cmail_l_pane_t2

0x0001,

0xfc51,	// (0x0002dbc8) cell_cmail_l_pane_t_ParamLimits

0xfc51,	// (0x0002dbc8) cell_cmail_l_pane_t

0xa3df,	// (0x00028356) grid_highlight_pane_cp018_ParamLimits

0xa3df,	// (0x00028356) grid_highlight_pane_cp018

0x0f33,	// (0x0001eeaa) main2_pane_ParamLimits

0x0f33,	// (0x0001eeaa) main2_pane

0xa4ac,	// (0x00028423) popup_sp_fs_action_menu_bg_pane_g1

0xa4b4,	// (0x0002842b) popup_sp_fs_action_menu_bg_pane_g2

0xa4bc,	// (0x00028433) popup_sp_fs_action_menu_bg_pane_g3

0xa4c4,	// (0x0002843b) popup_sp_fs_action_menu_bg_pane_g4

0xa4cc,	// (0x00028443) popup_sp_fs_action_menu_bg_pane_g5

0xa4d4,	// (0x0002844b) popup_sp_fs_action_menu_bg_pane_g6

0xa4dc,	// (0x00028453) popup_sp_fs_action_menu_bg_pane_g7

0xa4e4,	// (0x0002845b) popup_sp_fs_action_menu_bg_pane_g8

0xa4ec,	// (0x00028463) popup_sp_fs_action_menu_bg_pane_g9

0xa4f4,	// (0x0002846b) popup_sp_fs_action_menu_bg_pane_g10

0xa4f4,	// (0x0002846b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0002d10a) popup_sp_fs_action_menu_bg_pane_g

0x31ba,	// (0x00021131) list_medium_line_x2_t3_g3_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x2_t3_g3_g1

0x31c6,	// (0x0002113d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x31c6,	// (0x0002113d) list_medium_line_x2_t3_g3_g2

0x31d2,	// (0x00021149) list_medium_line_x2_t3_g3_g3_ParamLimits

0x31d2,	// (0x00021149) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0002d1ba) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0002d1ba) list_medium_line_x2_t3_g3_g

0x31de,	// (0x00021155) list_medium_line_x2_t3_g3_t1_ParamLimits

0x31de,	// (0x00021155) list_medium_line_x2_t3_g3_t1

0x31f3,	// (0x0002116a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x31f3,	// (0x0002116a) list_medium_line_x2_t3_g3_t2

0x3205,	// (0x0002117c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3205,	// (0x0002117c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0002d1c1) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0002d1c1) list_medium_line_x2_t3_g3_t

0x31ba,	// (0x00021131) list_medium_line_x2_t3_g2_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x2_t3_g2_g1

0x31d2,	// (0x00021149) list_medium_line_x2_t3_g2_g2_ParamLimits

0x31d2,	// (0x00021149) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0002d1c8) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0002d1c8) list_medium_line_x2_t3_g2_g

0x321a,	// (0x00021191) list_medium_line_x2_t3_g2_t1_ParamLimits

0x321a,	// (0x00021191) list_medium_line_x2_t3_g2_t1

0x3230,	// (0x000211a7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3230,	// (0x000211a7) list_medium_line_x2_t3_g2_t2

0x3242,	// (0x000211b9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3242,	// (0x000211b9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0002d1cd) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0002d1cd) list_medium_line_x2_t3_g2_t

0x31ba,	// (0x00021131) list_medium_line_x2_t4_g4_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x2_t4_g4_g1

0x3260,	// (0x000211d7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3260,	// (0x000211d7) list_medium_line_x2_t4_g4_g2

0x31c6,	// (0x0002113d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x31c6,	// (0x0002113d) list_medium_line_x2_t4_g4_g3

0x326c,	// (0x000211e3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x326c,	// (0x000211e3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0002d1d4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0002d1d4) list_medium_line_x2_t4_g4_g

0x3278,	// (0x000211ef) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3278,	// (0x000211ef) list_medium_line_x2_t4_g4_t1

0x3292,	// (0x00021209) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3292,	// (0x00021209) list_medium_line_x2_t4_g4_t2

0x32a7,	// (0x0002121e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x32a7,	// (0x0002121e) list_medium_line_x2_t4_g4_t3

0x32bc,	// (0x00021233) list_medium_line_x2_t4_g4_t4_ParamLimits

0x32bc,	// (0x00021233) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0002d1dd) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0002d1dd) list_medium_line_x2_t4_g4_t

0x31ba,	// (0x00021131) list_medium_line_x2_t2_g4_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x2_t2_g4_g1

0x3260,	// (0x000211d7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3260,	// (0x000211d7) list_medium_line_x2_t2_g4_g2

0x31c6,	// (0x0002113d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x31c6,	// (0x0002113d) list_medium_line_x2_t2_g4_g3

0x31d2,	// (0x00021149) list_medium_line_x2_t2_g4_g4_ParamLimits

0x31d2,	// (0x00021149) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0002d244) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0002d244) list_medium_line_x2_t2_g4_g

0x4468,	// (0x000223df) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4468,	// (0x000223df) list_medium_line_x2_t2_g4_t1

0x3205,	// (0x0002117c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3205,	// (0x0002117c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0002d24d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0002d24d) list_medium_line_x2_t2_g4_t

0x31ba,	// (0x00021131) list_medium_line_x2_t2_g3_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x2_t2_g3_g1

0x31c6,	// (0x0002113d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x31c6,	// (0x0002113d) list_medium_line_x2_t2_g3_g2

0x31d2,	// (0x00021149) list_medium_line_x2_t2_g3_g3_ParamLimits

0x31d2,	// (0x00021149) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0002d1ba) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0002d1ba) list_medium_line_x2_t2_g3_g

0x447d,	// (0x000223f4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x447d,	// (0x000223f4) list_medium_line_x2_t2_g3_t1

0x3205,	// (0x0002117c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3205,	// (0x0002117c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0002d252) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0002d252) list_medium_line_x2_t2_g3_t

0x4686,	// (0x000225fd) main_sp_fs_list_pane_ParamLimits

0x4686,	// (0x000225fd) main_sp_fs_list_pane

0x4692,	// (0x00022609) sp_fs_scroll_pane_ParamLimits

0x4692,	// (0x00022609) sp_fs_scroll_pane

0x469e,	// (0x00022615) list_medium_line_x2_t3_t1

0x46ae,	// (0x00022625) list_medium_line_x2_t3_t2

0x46bc,	// (0x00022633) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0002d29d) list_medium_line_x2_t3_t

0x46ca,	// (0x00022641) list_medium_line_x3_t4_t1

0x46da,	// (0x00022651) list_medium_line_x3_t4_t2

0x46e8,	// (0x0002265f) list_medium_line_x3_t4_t3

0x46bc,	// (0x00022633) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0002d2a4) list_medium_line_x3_t4_t

0x46f6,	// (0x0002266d) list_medium_line_x4_t5_t1

0x4706,	// (0x0002267d) list_medium_line_x4_t5_t2

0x46e8,	// (0x0002265f) list_medium_line_x4_t5_t3

0x4714,	// (0x0002268b) list_medium_line_x4_t5_t4

0x46bc,	// (0x00022633) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0002d2ad) list_medium_line_x4_t5_t

0x31ba,	// (0x00021131) list_medium_line_t4_g4_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_t4_g4_g1

0x326c,	// (0x000211e3) list_medium_line_t4_g4_g2_ParamLimits

0x326c,	// (0x000211e3) list_medium_line_t4_g4_g2

0x4722,	// (0x00022699) list_medium_line_t4_g4_g3_ParamLimits

0x4722,	// (0x00022699) list_medium_line_t4_g4_g3

0x31d2,	// (0x00021149) list_medium_line_t4_g4_g4_ParamLimits

0x31d2,	// (0x00021149) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0002d2b8) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0002d2b8) list_medium_line_t4_g4_g

0x472e,	// (0x000226a5) list_medium_line_t4_g4_t1_ParamLimits

0x472e,	// (0x000226a5) list_medium_line_t4_g4_t1

0x4743,	// (0x000226ba) list_medium_line_t4_g4_t2_ParamLimits

0x4743,	// (0x000226ba) list_medium_line_t4_g4_t2

0x4759,	// (0x000226d0) list_medium_line_t4_g4_t3_ParamLimits

0x4759,	// (0x000226d0) list_medium_line_t4_g4_t3

0x3205,	// (0x0002117c) list_medium_line_t4_g4_t4_ParamLimits

0x3205,	// (0x0002117c) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0002d2c1) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0002d2c1) list_medium_line_t4_g4_t

0x47e7,	// (0x0002275e) chi_dic_find_pane_g1

0x15b7,	// (0x0001f52e) main_tport_pane

0x7351,	// (0x000252c8) list_medium_line_plain_t1

0x7377,	// (0x000252ee) list_medium_line_t2_g2_g1_ParamLimits

0x7377,	// (0x000252ee) list_medium_line_t2_g2_g1

0x7383,	// (0x000252fa) list_medium_line_t2_g2_g2_ParamLimits

0x7383,	// (0x000252fa) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0002d97d) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0002d97d) list_medium_line_t2_g2_g

0x738f,	// (0x00025306) list_medium_line_t2_g2_t1_ParamLimits

0x738f,	// (0x00025306) list_medium_line_t2_g2_t1

0x73a6,	// (0x0002531d) list_medium_line_t2_g2_t2_ParamLimits

0x73a6,	// (0x0002531d) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0002d982) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0002d982) list_medium_line_t2_g2_t

0xd7bd,	// (0x0002b734) aid_sp_fs_list_icon_a_sm

0xd7c5,	// (0x0002b73c) aid_sp_fs_list_icon_d

0xd7cd,	// (0x0002b744) aid_sp_fs_text_primary

0xd7d6,	// (0x0002b74d) aid_sp_fs_text_secondary

0x78e4,	// (0x0002585b) list_medium_line

0x78e4,	// (0x0002585b) list_medium_line_g2

0x78e4,	// (0x0002585b) list_medium_line_g3

0x78e4,	// (0x0002585b) list_medium_line_plain

0x78e4,	// (0x0002585b) list_medium_line_plain_t2

0x78e4,	// (0x0002585b) list_medium_line_plain_t3

0x78e4,	// (0x0002585b) list_medium_line_right_icon

0x78e4,	// (0x0002585b) list_medium_line_right_iconx2

0x78e4,	// (0x0002585b) list_medium_line_t2

0x78e4,	// (0x0002585b) list_medium_line_t2_g2

0x78e4,	// (0x0002585b) list_medium_line_t2_g3

0x78e4,	// (0x0002585b) list_medium_line_t2_right_icon

0x78e4,	// (0x0002585b) list_medium_line_t2_right_iconx2

0x78e4,	// (0x0002585b) list_medium_line_t3

0x78e4,	// (0x0002585b) list_medium_line_t3_g2

0x78e4,	// (0x0002585b) list_medium_line_t3_g3

0x78e4,	// (0x0002585b) list_medium_line_t3_right_iconx2

0x78ed,	// (0x00025864) list_medium_line_t4_g4

0x78f6,	// (0x0002586d) list_medium_line_x2

0x78f6,	// (0x0002586d) list_medium_line_x2_t2_g2

0x78f6,	// (0x0002586d) list_medium_line_x2_t2_g3

0x78f6,	// (0x0002586d) list_medium_line_x2_t2_g4

0x78f6,	// (0x0002586d) list_medium_line_x2_t3

0x78f6,	// (0x0002586d) list_medium_line_x2_t3_g2

0x78f6,	// (0x0002586d) list_medium_line_x2_t3_g3

0x78f6,	// (0x0002586d) list_medium_line_x2_t3_g4

0x78f6,	// (0x0002586d) list_medium_line_x2_t4_g2

0x78f6,	// (0x0002586d) list_medium_line_x2_t4_g4

0x78ff,	// (0x00025876) list_medium_line_x3

0x78ff,	// (0x00025876) list_medium_line_x3_t4

0x78ff,	// (0x00025876) list_medium_line_x3_t4_g4

0x78ed,	// (0x00025864) list_medium_line_x4_t4

0x78ed,	// (0x00025864) list_medium_line_x4_t4_g7

0x78ed,	// (0x00025864) list_medium_line_x4_t5

0x7908,	// (0x0002587f) list_single_fs_dyc_pane_ParamLimits

0x7908,	// (0x0002587f) list_single_fs_dyc_pane

0x31ba,	// (0x00021131) list_medium_line_x4_t4_g7_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x4_t4_g7_g1

0x7fe7,	// (0x00025f5e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7fe7,	// (0x00025f5e) list_medium_line_x4_t4_g7_g2

0x7ff3,	// (0x00025f6a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ff3,	// (0x00025f6a) list_medium_line_x4_t4_g7_g3

0x8002,	// (0x00025f79) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8002,	// (0x00025f79) list_medium_line_x4_t4_g7_g4

0x800e,	// (0x00025f85) list_medium_line_x4_t4_g7_g5_ParamLimits

0x800e,	// (0x00025f85) list_medium_line_x4_t4_g7_g5

0x801d,	// (0x00025f94) list_medium_line_x4_t4_g7_g6_ParamLimits

0x801d,	// (0x00025f94) list_medium_line_x4_t4_g7_g6

0x802c,	// (0x00025fa3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x802c,	// (0x00025fa3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb4,	// (0x0002db2b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb4,	// (0x0002db2b) list_medium_line_x4_t4_g7_g

0x8038,	// (0x00025faf) list_medium_line_x4_t4_g7_t1_ParamLimits

0x8038,	// (0x00025faf) list_medium_line_x4_t4_g7_t1

0x804d,	// (0x00025fc4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x804d,	// (0x00025fc4) list_medium_line_x4_t4_g7_t2

0x8062,	// (0x00025fd9) list_medium_line_x4_t4_g7_t3_ParamLimits

0x8062,	// (0x00025fd9) list_medium_line_x4_t4_g7_t3

0x8077,	// (0x00025fee) list_medium_line_x4_t4_g7_t4_ParamLimits

0x8077,	// (0x00025fee) list_medium_line_x4_t4_g7_t4

0x8089,	// (0x00026000) list_medium_line_x4_t4_g7_t5_ParamLimits

0x8089,	// (0x00026000) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc3,	// (0x0002db3a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc3,	// (0x0002db3a) list_medium_line_x4_t4_g7_t

0x809b,	// (0x00026012) list_single_dyc_row_pane_ParamLimits

0x809b,	// (0x00026012) list_single_dyc_row_pane

0x874b,	// (0x000266c2) call5_gesture_pane_ParamLimits

0x874b,	// (0x000266c2) call5_gesture_pane

0x877f,	// (0x000266f6) call5_windows_pane_ParamLimits

0x877f,	// (0x000266f6) call5_windows_pane

0x87f6,	// (0x0002676d) call5_swipe_1_pane_cp_ParamLimits

0x87f6,	// (0x0002676d) call5_swipe_1_pane_cp

0x8802,	// (0x00026779) call5_swipe_2_pane_cp_ParamLimits

0x8802,	// (0x00026779) call5_swipe_2_pane_cp

0xaeca,	// (0x00028e41) call5_image_pane_cp

0x880e,	// (0x00026785) popup_call5_audio_first_window_cp_ParamLimits

0x880e,	// (0x00026785) popup_call5_audio_first_window_cp

0xe2a4,	// (0x0002c21b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2a4,	// (0x0002c21b) call5_swipe_1_pane_g1_cp

0xe2e4,	// (0x0002c25b) call5_swipe_1_pane_g2_cp

0xe2bd,	// (0x0002c234) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2bd,	// (0x0002c234) call5_swipe_1_pane_t1_cp

0xe2a4,	// (0x0002c21b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2a4,	// (0x0002c21b) call5_swipe_2_pane_g1_cp

0xe2ec,	// (0x0002c263) call5_swipe_2_pane_g2_cp

0xe2f4,	// (0x0002c26b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2f4,	// (0x0002c26b) call5_swipe_2_pane_t1_cp

0xa3df,	// (0x00028356) main_sp_fs_email_pane

0xe309,	// (0x0002c280) main_sp_fs_listscroll_pane_te

0xe312,	// (0x0002c289) popup_sp_fs_action_menu_pane_ParamLimits

0xe312,	// (0x0002c289) popup_sp_fs_action_menu_pane

0xc72a,	// (0x0002a6a1) bg_sp_fs_ctrlbar_pane_g1

0xe354,	// (0x0002c2cb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe35d,	// (0x0002c2d4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe366,	// (0x0002c2dd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc72a,	// (0x0002a6a1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc56,	// (0x0002dbcd) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc50d,	// (0x0002a484) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc50d,	// (0x0002a484) bg_sp_fs_ctrlbar_ddmenu_pane

0xe36f,	// (0x0002c2e6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe36f,	// (0x0002c2e6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe37b,	// (0x0002c2f2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe37b,	// (0x0002c2f2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0bb9,	// (0x0001eb30) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0bb9,	// (0x0001eb30) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe387,	// (0x0002c2fe) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe387,	// (0x0002c2fe) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x881c,	// (0x00026793) list_medium_line_t2_right_icon_g1

0x8824,	// (0x0002679b) list_medium_line_t2_right_icon_t1

0x8834,	// (0x000267ab) list_medium_line_t2_right_icon_t2

0x0001,

0xfc5f,	// (0x0002dbd6) list_medium_line_t2_right_icon_t

0xc320,	// (0x0002a297) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc320,	// (0x0002a297) bg_sp_fs_ctrlbar_pane

0x8899,	// (0x00026810) main_sp_fs_ctrlbar_button_pane_cp01

0x88a1,	// (0x00026818) main_sp_fs_ctrlbar_ddmenu_pane

0xe3d9,	// (0x0002c350) main_sp_fs_ctrlbar_pane_g1

0xe3e5,	// (0x0002c35c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0bc3,	// (0x0001eb3a) main_sp_fs_ctrlbar_pane_g

0xe3f1,	// (0x0002c368) main_sp_fs_ctrlbar_pane_t1

0x88ab,	// (0x00026822) main_sp_fs_ctrlbar_pane

0x88c1,	// (0x00026838) main_sp_fs_listscroll_pane_te_cp01

0x88d2,	// (0x00026849) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x88d2,	// (0x00026849) popup_sp_fs_action_menu_pane_cp01

0xa3df,	// (0x00028356) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa3df,	// (0x00028356) bg_sp_fs_highlight_list_pane_cp01

0xe421,	// (0x0002c398) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe421,	// (0x0002c398) sp_fs_action_menu_list_gene_pane_g1

0xe430,	// (0x0002c3a7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe430,	// (0x0002c3a7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x0bcd,	// (0x0001eb44) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x0bcd,	// (0x0001eb44) sp_fs_action_menu_list_gene_pane_g

0xe43d,	// (0x0002c3b4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe43d,	// (0x0002c3b4) sp_fs_action_menu_list_gene_pane_t1

0xe455,	// (0x0002c3cc) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe455,	// (0x0002c3cc) sp_fs_action_menu_list_gene_pane

0xe474,	// (0x0002c3eb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe474,	// (0x0002c3eb) popup_sp_fs_action_menu_bg_pane

0xe482,	// (0x0002c3f9) sp_fs_action_menu_list_pane_ParamLimits

0xe482,	// (0x0002c3f9) sp_fs_action_menu_list_pane

0xe4a2,	// (0x0002c419) sp_fs_scroll_pane_cp01_ParamLimits

0xe4a2,	// (0x0002c419) sp_fs_scroll_pane_cp01

0x88fc,	// (0x00026873) list_medium_line_plain_t2_t1

0x890c,	// (0x00026883) list_medium_line_plain_t2_t2

0x0001,

0xfc64,	// (0x0002dbdb) list_medium_line_plain_t2_t

0x891a,	// (0x00026891) list_medium_line_plain_t3_t1

0x892a,	// (0x000268a1) list_medium_line_plain_t3_t2

0x8938,	// (0x000268af) list_medium_line_plain_t3_t3

0x0002,

0xfc69,	// (0x0002dbe0) list_medium_line_plain_t3_t

0x31ba,	// (0x00021131) list_medium_line_x2_t2_g2_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x2_t2_g2_g1

0x31d2,	// (0x00021149) list_medium_line_x2_t2_g2_g2_ParamLimits

0x31d2,	// (0x00021149) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0002d1c8) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0002d1c8) list_medium_line_x2_t2_g2_g

0x472e,	// (0x000226a5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x472e,	// (0x000226a5) list_medium_line_x2_t2_g2_t1

0x3205,	// (0x0002117c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3205,	// (0x0002117c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc70,	// (0x0002dbe7) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc70,	// (0x0002dbe7) list_medium_line_x2_t2_g2_t

0x31ba,	// (0x00021131) list_medium_line_x2_t4_g2_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x2_t4_g2_g1

0x31d2,	// (0x00021149) list_medium_line_x2_t4_g2_g2_ParamLimits

0x31d2,	// (0x00021149) list_medium_line_x2_t4_g2_g2

0x0001,

0xf251,	// (0x0002d1c8) list_medium_line_x2_t4_g2_g_ParamLimits

0xf251,	// (0x0002d1c8) list_medium_line_x2_t4_g2_g

0x8946,	// (0x000268bd) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8946,	// (0x000268bd) list_medium_line_x2_t4_g2_t1

0x895d,	// (0x000268d4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x895d,	// (0x000268d4) list_medium_line_x2_t4_g2_t2

0x8972,	// (0x000268e9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8972,	// (0x000268e9) list_medium_line_x2_t4_g2_t3

0x3205,	// (0x0002117c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3205,	// (0x0002117c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc75,	// (0x0002dbec) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc75,	// (0x0002dbec) list_medium_line_x2_t4_g2_t

0x8984,	// (0x000268fb) list_medium_line_t3_right_iconx2_g1

0x881c,	// (0x00026793) list_medium_line_t3_right_iconx2_g2

0x898c,	// (0x00026903) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc7e,	// (0x0002dbf5) list_medium_line_t3_right_iconx2_g

0x8994,	// (0x0002690b) list_medium_line_t3_right_iconx2_t1

0x89a4,	// (0x0002691b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc85,	// (0x0002dbfc) list_medium_line_t3_right_iconx2_t

0x31ba,	// (0x00021131) list_medium_line_x3_t4_g4_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x3_t4_g4_g1

0x31c6,	// (0x0002113d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x31c6,	// (0x0002113d) list_medium_line_x3_t4_g4_g2

0x326c,	// (0x000211e3) list_medium_line_x3_t4_g4_g3_ParamLimits

0x326c,	// (0x000211e3) list_medium_line_x3_t4_g4_g3

0x89b2,	// (0x00026929) list_medium_line_x3_t4_g4_g4_ParamLimits

0x89b2,	// (0x00026929) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc8a,	// (0x0002dc01) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc8a,	// (0x0002dc01) list_medium_line_x3_t4_g4_g

0x89be,	// (0x00026935) list_medium_line_x3_t4_g4_t1_ParamLimits

0x89be,	// (0x00026935) list_medium_line_x3_t4_g4_t1

0x89d5,	// (0x0002694c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x89d5,	// (0x0002694c) list_medium_line_x3_t4_g4_t2

0x89ea,	// (0x00026961) list_medium_line_x3_t4_g4_t3_ParamLimits

0x89ea,	// (0x00026961) list_medium_line_x3_t4_g4_t3

0x89ff,	// (0x00026976) list_medium_line_x3_t4_g4_t4_ParamLimits

0x89ff,	// (0x00026976) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc93,	// (0x0002dc0a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc93,	// (0x0002dc0a) list_medium_line_x3_t4_g4_t

0x8a1c,	// (0x00026993) list_single_dyc_row_text_pane_t1_ParamLimits

0x8a1c,	// (0x00026993) list_single_dyc_row_text_pane_t1

0x8a53,	// (0x000269ca) list_single_dyc_row_text_pane_t2_ParamLimits

0x8a53,	// (0x000269ca) list_single_dyc_row_text_pane_t2

0xe4c8,	// (0x0002c43f) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4c8,	// (0x0002c43f) list_single_dyc_row_text_pane_t3

0x0002,

0xfc9c,	// (0x0002dc13) list_single_dyc_row_text_pane_t_ParamLimits

0xfc9c,	// (0x0002dc13) list_single_dyc_row_text_pane_t

0xe4da,	// (0x0002c451) list_single_dyc_row_pane_g1_ParamLimits

0xe4da,	// (0x0002c451) list_single_dyc_row_pane_g1

0xe4e6,	// (0x0002c45d) list_single_dyc_row_pane_g2_ParamLimits

0xe4e6,	// (0x0002c45d) list_single_dyc_row_pane_g2

0xe4f2,	// (0x0002c469) list_single_dyc_row_pane_g3_ParamLimits

0xe4f2,	// (0x0002c469) list_single_dyc_row_pane_g3

0xe4fe,	// (0x0002c475) list_single_dyc_row_pane_g4_ParamLimits

0xe4fe,	// (0x0002c475) list_single_dyc_row_pane_g4

0x0003,

0x0c11,	// (0x0001eb88) list_single_dyc_row_pane_g_ParamLimits

0x0c11,	// (0x0001eb88) list_single_dyc_row_pane_g

0xe50a,	// (0x0002c481) list_single_dyc_row_text_pane_ParamLimits

0xe50a,	// (0x0002c481) list_single_dyc_row_text_pane

0x9c97,	// (0x00027c0e) bg_sp_fs_scroll_pane

0xe529,	// (0x0002c4a0) thumb_sp_fs_scroll_pane

0x7377,	// (0x000252ee) list_medium_line_g1_ParamLimits

0x7377,	// (0x000252ee) list_medium_line_g1

0x8aad,	// (0x00026a24) list_medium_line_t1_ParamLimits

0x8aad,	// (0x00026a24) list_medium_line_t1

0x31ba,	// (0x00021131) list_medium_line_x2_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x2_g1

0x31c6,	// (0x0002113d) list_medium_line_x2_g2_ParamLimits

0x31c6,	// (0x0002113d) list_medium_line_x2_g2

0x0001,

0xfca3,	// (0x0002dc1a) list_medium_line_x2_g_ParamLimits

0xfca3,	// (0x0002dc1a) list_medium_line_x2_g

0xe532,	// (0x0002c4a9) list_medium_line_x2_t1_ParamLimits

0xe532,	// (0x0002c4a9) list_medium_line_x2_t1

0x31ba,	// (0x00021131) list_medium_line_x3_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x3_g1

0x31c6,	// (0x0002113d) list_medium_line_x3_g2_ParamLimits

0x31c6,	// (0x0002113d) list_medium_line_x3_g2

0x0001,

0xfca3,	// (0x0002dc1a) list_medium_line_x3_g_ParamLimits

0xfca3,	// (0x0002dc1a) list_medium_line_x3_g

0xe532,	// (0x0002c4a9) list_medium_line_x3_t1_ParamLimits

0xe532,	// (0x0002c4a9) list_medium_line_x3_t1

0xe548,	// (0x0002c4bf) thumb_sp_fs_scroll_pane_g1

0xe551,	// (0x0002c4c8) thumb_sp_fs_scroll_pane_g2

0xe55a,	// (0x0002c4d1) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0c1f,	// (0x0001eb96) thumb_sp_fs_scroll_pane_g

0xe548,	// (0x0002c4bf) bg_sp_fs_scroll_pane_g1

0xe551,	// (0x0002c4c8) bg_sp_fs_scroll_pane_g2

0xe55a,	// (0x0002c4d1) bg_sp_fs_scroll_pane_g3

0x0002,

0x0c1f,	// (0x0001eb96) bg_sp_fs_scroll_pane_g

0x31ba,	// (0x00021131) list_medium_line_x2_t3_g4_g1_ParamLimits

0x31ba,	// (0x00021131) list_medium_line_x2_t3_g4_g1

0x3260,	// (0x000211d7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3260,	// (0x000211d7) list_medium_line_x2_t3_g4_g2

0x31c6,	// (0x0002113d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x31c6,	// (0x0002113d) list_medium_line_x2_t3_g4_g3

0x31d2,	// (0x00021149) list_medium_line_x2_t3_g4_g4_ParamLimits

0x31d2,	// (0x00021149) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0002d244) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0002d244) list_medium_line_x2_t3_g4_g

0x8ac2,	// (0x00026a39) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8ac2,	// (0x00026a39) list_medium_line_x2_t3_g4_t1

0x8ad8,	// (0x00026a4f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8ad8,	// (0x00026a4f) list_medium_line_x2_t3_g4_t2

0x3205,	// (0x0002117c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3205,	// (0x0002117c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfca8,	// (0x0002dc1f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfca8,	// (0x0002dc1f) list_medium_line_x2_t3_g4_t

0x7377,	// (0x000252ee) list_medium_line_g2_g1_ParamLimits

0x7377,	// (0x000252ee) list_medium_line_g2_g1

0x7383,	// (0x000252fa) list_medium_line_g2_g2_ParamLimits

0x7383,	// (0x000252fa) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0002d97d) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0002d97d) list_medium_line_g2_g

0x8af1,	// (0x00026a68) list_medium_line_g2_t1_ParamLimits

0x8af1,	// (0x00026a68) list_medium_line_g2_t1

0x7377,	// (0x000252ee) list_medium_line_t3_g2_g1_ParamLimits

0x7377,	// (0x000252ee) list_medium_line_t3_g2_g1

0x7383,	// (0x000252fa) list_medium_line_t3_g2_g2_ParamLimits

0x7383,	// (0x000252fa) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0002d97d) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0002d97d) list_medium_line_t3_g2_g

0x8b06,	// (0x00026a7d) list_medium_line_t3_g2_t1_ParamLimits

0x8b06,	// (0x00026a7d) list_medium_line_t3_g2_t1

0x8b1d,	// (0x00026a94) list_medium_line_t3_g2_t2_ParamLimits

0x8b1d,	// (0x00026a94) list_medium_line_t3_g2_t2

0x8b32,	// (0x00026aa9) list_medium_line_t3_g2_t3_ParamLimits

0x8b32,	// (0x00026aa9) list_medium_line_t3_g2_t3

0x0002,

0xfcaf,	// (0x0002dc26) list_medium_line_t3_g2_t_ParamLimits

0xfcaf,	// (0x0002dc26) list_medium_line_t3_g2_t

0x881c,	// (0x00026793) list_medium_line_right_icon_g1

0x8b47,	// (0x00026abe) list_medium_line_right_icon_t1

0x7377,	// (0x000252ee) list_medium_line_t2_g1_ParamLimits

0x7377,	// (0x000252ee) list_medium_line_t2_g1

0x8b55,	// (0x00026acc) list_medium_line_t2_t1_ParamLimits

0x8b55,	// (0x00026acc) list_medium_line_t2_t1

0x8b6f,	// (0x00026ae6) list_medium_line_t2_t2_ParamLimits

0x8b6f,	// (0x00026ae6) list_medium_line_t2_t2

0x0001,

0xfcb6,	// (0x0002dc2d) list_medium_line_t2_t_ParamLimits

0xfcb6,	// (0x0002dc2d) list_medium_line_t2_t

0x7377,	// (0x000252ee) list_medium_line_t3_g1_ParamLimits

0x7377,	// (0x000252ee) list_medium_line_t3_g1

0x8b84,	// (0x00026afb) list_medium_line_t3_t1_ParamLimits

0x8b84,	// (0x00026afb) list_medium_line_t3_t1

0x8b9b,	// (0x00026b12) list_medium_line_t3_t2_ParamLimits

0x8b9b,	// (0x00026b12) list_medium_line_t3_t2

0x8bb0,	// (0x00026b27) list_medium_line_t3_t3_ParamLimits

0x8bb0,	// (0x00026b27) list_medium_line_t3_t3

0x0002,

0xfcbb,	// (0x0002dc32) list_medium_line_t3_t_ParamLimits

0xfcbb,	// (0x0002dc32) list_medium_line_t3_t

0x7377,	// (0x000252ee) list_medium_line_g3_g1_ParamLimits

0x7377,	// (0x000252ee) list_medium_line_g3_g1

0x8bc2,	// (0x00026b39) list_medium_line_g3_g2_ParamLimits

0x8bc2,	// (0x00026b39) list_medium_line_g3_g2

0x7383,	// (0x000252fa) list_medium_line_g3_g3_ParamLimits

0x7383,	// (0x000252fa) list_medium_line_g3_g3

0x0002,

0xfcc2,	// (0x0002dc39) list_medium_line_g3_g_ParamLimits

0xfcc2,	// (0x0002dc39) list_medium_line_g3_g

0x8bce,	// (0x00026b45) list_medium_line_g3_t1_ParamLimits

0x8bce,	// (0x00026b45) list_medium_line_g3_t1

0x7377,	// (0x000252ee) list_medium_line_t2_g3_g1_ParamLimits

0x7377,	// (0x000252ee) list_medium_line_t2_g3_g1

0x8bc2,	// (0x00026b39) list_medium_line_t2_g3_g2_ParamLimits

0x8bc2,	// (0x00026b39) list_medium_line_t2_g3_g2

0x7383,	// (0x000252fa) list_medium_line_t2_g3_g3_ParamLimits

0x7383,	// (0x000252fa) list_medium_line_t2_g3_g3

0x0002,

0xfcc2,	// (0x0002dc39) list_medium_line_t2_g3_g_ParamLimits

0xfcc2,	// (0x0002dc39) list_medium_line_t2_g3_g

0x8be3,	// (0x00026b5a) list_medium_line_t2_g3_t1_ParamLimits

0x8be3,	// (0x00026b5a) list_medium_line_t2_g3_t1

0x8bfd,	// (0x00026b74) list_medium_line_t2_g3_t2_ParamLimits

0x8bfd,	// (0x00026b74) list_medium_line_t2_g3_t2

0x0001,

0xfcc9,	// (0x0002dc40) list_medium_line_t2_g3_t_ParamLimits

0xfcc9,	// (0x0002dc40) list_medium_line_t2_g3_t

0x7377,	// (0x000252ee) list_medium_line_t3_g3_g1_ParamLimits

0x7377,	// (0x000252ee) list_medium_line_t3_g3_g1

0x8bc2,	// (0x00026b39) list_medium_line_t3_g3_g2_ParamLimits

0x8bc2,	// (0x00026b39) list_medium_line_t3_g3_g2

0x7383,	// (0x000252fa) list_medium_line_t3_g3_g3_ParamLimits

0x7383,	// (0x000252fa) list_medium_line_t3_g3_g3

0x0002,

0xfcc2,	// (0x0002dc39) list_medium_line_t3_g3_g_ParamLimits

0xfcc2,	// (0x0002dc39) list_medium_line_t3_g3_g

0x8c12,	// (0x00026b89) list_medium_line_t3_g3_t1_ParamLimits

0x8c12,	// (0x00026b89) list_medium_line_t3_g3_t1

0x8c26,	// (0x00026b9d) list_medium_line_t3_g3_t2_ParamLimits

0x8c26,	// (0x00026b9d) list_medium_line_t3_g3_t2

0x8c38,	// (0x00026baf) list_medium_line_t3_g3_t3_ParamLimits

0x8c38,	// (0x00026baf) list_medium_line_t3_g3_t3

0x0002,

0xfcce,	// (0x0002dc45) list_medium_line_t3_g3_t_ParamLimits

0xfcce,	// (0x0002dc45) list_medium_line_t3_g3_t

0x8984,	// (0x000268fb) list_medium_line_right_iconx2_g1

0x881c,	// (0x00026793) list_medium_line_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002dc4c) list_medium_line_right_iconx2_g

0x8c4a,	// (0x00026bc1) list_medium_line_right_iconx2_t1

0x8984,	// (0x000268fb) list_medium_line_t2_right_iconx2_g1

0x881c,	// (0x00026793) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002dc4c) list_medium_line_t2_right_iconx2_g

0x8c58,	// (0x00026bcf) list_medium_line_t2_right_iconx2_t1

0x8c68,	// (0x00026bdf) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcda,	// (0x0002dc51) list_medium_line_t2_right_iconx2_t

0x8c76,	// (0x00026bed) list_medium_line_x4_t4_t1

0x8c84,	// (0x00026bfb) list_medium_line_x4_t4_t2

0x8c94,	// (0x00026c0b) list_medium_line_x4_t4_t3

0x8ca4,	// (0x00026c1b) list_medium_line_x4_t4_t4

0x0003,

0xfcdf,	// (0x0002dc56) list_medium_line_x4_t4_t

0x8cde,	// (0x00026c55) tport_appsw_pane_ParamLimits

0x8cde,	// (0x00026c55) tport_appsw_pane

0x8cec,	// (0x00026c63) tport_contact_pane_ParamLimits

0x8cec,	// (0x00026c63) tport_contact_pane

0x8cfc,	// (0x00026c73) tport_listscroll_pane_ParamLimits

0x8cfc,	// (0x00026c73) tport_listscroll_pane

0x8d0c,	// (0x00026c83) cell_tport_appsw_pane_ParamLimits

0x8d0c,	// (0x00026c83) cell_tport_appsw_pane

0xca63,	// (0x0002a9da) tport_appsw_pane_g1_ParamLimits

0xca63,	// (0x0002a9da) tport_appsw_pane_g1

0xe563,	// (0x0002c4da) tport_contact_pane_g1

0xddb6,	// (0x0002bd2d) tport_contact_pane_t1

0xe56c,	// (0x0002c4e3) tport_contact_pane_t2

0x0001,

0x0c66,	// (0x0001ebdd) tport_contact_pane_t

0xe57a,	// (0x0002c4f1) list_tport_pane

0xe583,	// (0x0002c4fa) scroll_pane_cp_030

0x8d3f,	// (0x00026cb6) cell_tport_appsw_pane_g1

0x8d4f,	// (0x00026cc6) cell_tport_appsw_pane_t1

0x9c97,	// (0x00027c0e) grid_highlight_pane_cp019

0x8d5d,	// (0x00026cd4) list_tport_double_graphic_pane_ParamLimits

0x8d5d,	// (0x00026cd4) list_tport_double_graphic_pane

0xa3df,	// (0x00028356) list_highlight_pane_cp023_ParamLimits

0xa3df,	// (0x00028356) list_highlight_pane_cp023

0x8d6f,	// (0x00026ce6) list_tport_double_graphic_pane_g1_ParamLimits

0x8d6f,	// (0x00026ce6) list_tport_double_graphic_pane_g1

0x8d7c,	// (0x00026cf3) list_tport_double_graphic_pane_t1_ParamLimits

0x8d7c,	// (0x00026cf3) list_tport_double_graphic_pane_t1

0x8d91,	// (0x00026d08) list_tport_double_graphic_pane_t2_ParamLimits

0x8d91,	// (0x00026d08) list_tport_double_graphic_pane_t2

0x0001,

0xfcef,	// (0x0002dc66) list_tport_double_graphic_pane_t_ParamLimits

0xfcef,	// (0x0002dc66) list_tport_double_graphic_pane_t

0x9c97,	// (0x00027c0e) main_cale_note_pane

0x22d6,	// (0x0002024d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x22d6,	// (0x0002024d) cell_vitu2_function_top_wide_pane_cp01

0x8404,	// (0x0002637b) wait_bar_pane_cp05_ParamLimits

0xa3df,	// (0x00028356) listscroll_cmail_pane

0xe58c,	// (0x0002c503) list_cmail_pane

0x8da3,	// (0x00026d1a) list_cmail_body_pane

0x8dc7,	// (0x00026d3e) list_single_cmail_header_caption_pane

0x8df7,	// (0x00026d6e) list_single_cmail_header_detail_pane_ParamLimits

0x8df7,	// (0x00026d6e) list_single_cmail_header_detail_pane

0xe59c,	// (0x0002c513) list_single_cmail_header_caption_pane_t1

0x8e38,	// (0x00026daf) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8e38,	// (0x00026daf) list_single_cmail_header_detail_pane_g1

0xe5aa,	// (0x0002c521) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5aa,	// (0x0002c521) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcf4,	// (0x0002dc6b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcf4,	// (0x0002dc6b) list_single_cmail_header_detail_pane_g

0x8e4e,	// (0x00026dc5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8e4e,	// (0x00026dc5) list_single_cmail_header_detail_pane_t1

0x8e8a,	// (0x00026e01) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8e8a,	// (0x00026e01) list_single_cmail_header_editor_pane_bg

0xe5e7,	// (0x0002c55e) list_cmail_body_pane_g1

0xe5f0,	// (0x0002c567) list_cmail_body_pane_t1

0xd250,	// (0x0002b1c7) list_single_cmail_header_editor_pane_bg_g1

0xa82b,	// (0x000287a2) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd260,	// (0x0002b1d7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd258,	// (0x0002b1cf) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd480,	// (0x0002b3f7) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd280,	// (0x0002b1f7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd270,	// (0x0002b1e7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd278,	// (0x0002b1ef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa80b,	// (0x00028782) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8ea1,	// (0x00026e18) calenote_gesture_pane_ParamLimits

0x8ea1,	// (0x00026e18) calenote_gesture_pane

0x8ebb,	// (0x00026e32) calenote_window_pane_ParamLimits

0x8ebb,	// (0x00026e32) calenote_window_pane

0xe5fe,	// (0x0002c575) popup_note_window_cp01

0x8ed3,	// (0x00026e4a) calenote_swipe_1_pane_ParamLimits

0x8ed3,	// (0x00026e4a) calenote_swipe_1_pane

0x8802,	// (0x00026779) calenote_swipe_2_pane_ParamLimits

0x8802,	// (0x00026779) calenote_swipe_2_pane

0xe2a4,	// (0x0002c21b) calenote_swipe_1_pane_g1_ParamLimits

0xe2a4,	// (0x0002c21b) calenote_swipe_1_pane_g1

0xe2b1,	// (0x0002c228) calenote_swipe_1_pane_g2_ParamLimits

0xe2b1,	// (0x0002c228) calenote_swipe_1_pane_g2

0x0001,

0x0ba6,	// (0x0001eb1d) calenote_swipe_1_pane_g_ParamLimits

0x0ba6,	// (0x0001eb1d) calenote_swipe_1_pane_g

0xe610,	// (0x0002c587) calenote_swipe_1_pane_t1_ParamLimits

0xe610,	// (0x0002c587) calenote_swipe_1_pane_t1

0xe2a4,	// (0x0002c21b) calenote_swipe_2_pane_g1_ParamLimits

0xe2a4,	// (0x0002c21b) calenote_swipe_2_pane_g1

0xe62f,	// (0x0002c5a6) calenote_swipe_2_pane_g2_ParamLimits

0xe62f,	// (0x0002c5a6) calenote_swipe_2_pane_g2

0x0001,

0x0c83,	// (0x0001ebfa) calenote_swipe_2_pane_g_ParamLimits

0x0c83,	// (0x0001ebfa) calenote_swipe_2_pane_g

0xe63b,	// (0x0002c5b2) calenote_swipe_2_pane_t1_ParamLimits

0xe63b,	// (0x0002c5b2) calenote_swipe_2_pane_t1

0x9c97,	// (0x00027c0e) main_mup_navstr_pane

0x62f9,	// (0x00024270) main_mup3_pane_t7_ParamLimits

0x62f9,	// (0x00024270) main_mup3_pane_t7

0x1be7,	// (0x0001fb5e) main_mp4_pane_g6_ParamLimits

0x1be7,	// (0x0001fb5e) main_mp4_pane_g6

0x1eda,	// (0x0001fe51) main_image3_pane_t4_ParamLimits

0x1eda,	// (0x0001fe51) main_image3_pane_t4

0x8ee6,	// (0x00026e5d) popup_navstr_preview_pane_ParamLimits

0x8ee6,	// (0x00026e5d) popup_navstr_preview_pane

0x8ef2,	// (0x00026e69) scroll_navstr_pane_ParamLimits

0x8ef2,	// (0x00026e69) scroll_navstr_pane

0x9c97,	// (0x00027c0e) bg_popup_preview_window_pane_cp04

0xe662,	// (0x0002c5d9) popup_navstr_preview_pane_t1

0x8efe,	// (0x00026e75) scroll_navstr_pane_g1_ParamLimits

0x8efe,	// (0x00026e75) scroll_navstr_pane_g1

0x8f0b,	// (0x00026e82) scroll_navstr_pane_t1_ParamLimits

0x8f0b,	// (0x00026e82) scroll_navstr_pane_t1

0xe607,	// (0x0002c57e) bg_button_pane_cp014

0xe607,	// (0x0002c57e) bg_button_pane_cp030

0x86f1,	// (0x00026668) list_double_fisheye_pane_g4_ParamLimits

0x86f1,	// (0x00026668) list_double_fisheye_pane_g4

0x86fd,	// (0x00026674) list_double_fisheye_pane_g5_ParamLimits

0x86fd,	// (0x00026674) list_double_fisheye_pane_g5

0xd40a,	// (0x0002b381) sp_fs_scroll_pane_cp03

0xe3d9,	// (0x0002c350) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3e5,	// (0x0002c35c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0bc3,	// (0x0001eb3a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3f1,	// (0x0002c368) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe594,	// (0x0002c50b) sp_fs_scroll_pane_cp02

0xa517,	// (0x0002848e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa517,	// (0x0002848e) popup_sp_fs_calendar_preview_list_single_pane

0x9c97,	// (0x00027c0e) main_cam6_pano_pane

0x159b,	// (0x0001f512) main_mup3_pane_ParamLimits

0x9c97,	// (0x00027c0e) main_phacti_pane

0x82d9,	// (0x00026250) bg_button_pane_cp11

0x82f1,	// (0x00026268) main_mobtv_info_pane_g2_ParamLimits

0x82f1,	// (0x00026268) main_mobtv_info_pane_g2

0x0001,

0xfc03,	// (0x0002db7a) main_mobtv_info_pane_g_ParamLimits

0xfc03,	// (0x0002db7a) main_mobtv_info_pane_g

0x84a3,	// (0x0002641a) sc_clock_pane_t5_ParamLimits

0x84a3,	// (0x0002641a) sc_clock_pane_t5

0x8558,	// (0x000264cf) main_radioblah_pane_g1_ParamLimits

0xe1f0,	// (0x0002c167) main_radioblah_pane_t3_ParamLimits

0xe1f0,	// (0x0002c167) main_radioblah_pane_t3

0xe208,	// (0x0002c17f) main_radioblah_pane_t4_ParamLimits

0xe208,	// (0x0002c17f) main_radioblah_pane_t4

0x8576,	// (0x000264ed) main_radioblah_text_pane_ParamLimits

0x8576,	// (0x000264ed) main_radioblah_text_pane

0x8583,	// (0x000264fa) main_radioblah_info_pane_g1_ParamLimits

0x8618,	// (0x0002658f) main_radioblah_info_pane_t4_ParamLimits

0x8618,	// (0x0002658f) main_radioblah_info_pane_t4

0xa3df,	// (0x00028356) main_sp_fs_calendar_pane

0x8f1d,	// (0x00026e94) main_phacti_pane_g1

0x8f25,	// (0x00026e9c) phacti_note_pane_ParamLimits

0x8f25,	// (0x00026e9c) phacti_note_pane

0xe679,	// (0x0002c5f0) phacti_term_pane_ParamLimits

0xe679,	// (0x0002c5f0) phacti_term_pane

0xe68e,	// (0x0002c605) phacti_note_pane_t1_ParamLimits

0xe68e,	// (0x0002c605) phacti_note_pane_t1

0xe6a5,	// (0x0002c61c) phacti_term_pane_g1

0xe6ad,	// (0x0002c624) phacti_term_pane_t1_ParamLimits

0xe6ad,	// (0x0002c624) phacti_term_pane_t1

0xe6d7,	// (0x0002c64e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6df,	// (0x0002c656) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0c8d,	// (0x0001ec04) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6e7,	// (0x0002c65e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6e7,	// (0x0002c65e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe6fd,	// (0x0002c674) aid_popup_sp_fs_bg_corner_pane

0xc72a,	// (0x0002a6a1) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c97,	// (0x00027c0e) popup_sp_fs_calendar_preview_bg_pane

0x8f3b,	// (0x00026eb2) popup_sp_fs_calendar_preview_list_pane

0xc320,	// (0x0002a297) bg_main_sp_fs_cale_pane_ParamLimits

0xc320,	// (0x0002a297) bg_main_sp_fs_cale_pane

0xe70e,	// (0x0002c685) listscroll_cale_mrui_pane_ParamLimits

0xe70e,	// (0x0002c685) listscroll_cale_mrui_pane

0xe723,	// (0x0002c69a) listscroll_sp_fs_schedule_track_pane

0xe72c,	// (0x0002c6a3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe72c,	// (0x0002c6a3) main_sp_fs_ctrlbar_pane_cp01

0xe73f,	// (0x0002c6b6) main_sp_fs_ribbon_pane

0xe747,	// (0x0002c6be) popup_sp_fs_cale_preview_window

0x8f90,	// (0x00026f07) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8f90,	// (0x00026f07) list_single_sp_fs_schedule_track_pane

0xd196,	// (0x0002b10d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd196,	// (0x0002b10d) bg_sp_fs_highlight_list_pane_cp03

0x8fb7,	// (0x00026f2e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8fb7,	// (0x00026f2e) list_single_sp_fs_schedule_track_pane_g1

0x8fc3,	// (0x00026f3a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8fc3,	// (0x00026f3a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd00,	// (0x0002dc77) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd00,	// (0x0002dc77) list_single_sp_fs_schedule_track_pane_g

0x8fcf,	// (0x00026f46) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8fcf,	// (0x00026f46) list_single_sp_fs_schedule_track_pane_t1

0x8fe7,	// (0x00026f5e) sp_fs_schedule_track_pane_ParamLimits

0x8fe7,	// (0x00026f5e) sp_fs_schedule_track_pane

0xe759,	// (0x0002c6d0) sp_fs_schedule_track_pane_g1

0xe761,	// (0x0002c6d8) sp_fs_schedule_track_pane_g2

0xe769,	// (0x0002c6e0) sp_fs_schedule_track_pane_g3

0xe771,	// (0x0002c6e8) sp_fs_schedule_track_pane_g4

0xe779,	// (0x0002c6f0) sp_fs_schedule_track_pane_g5

0x0004,

0x0c97,	// (0x0001ec0e) sp_fs_schedule_track_pane_g

0xd250,	// (0x0002b1c7) bg_sp_fs_schedule_viewer_highlight_g1

0xa82b,	// (0x000287a2) bg_sp_fs_schedule_viewer_highlight_g2

0xd258,	// (0x0002b1cf) bg_sp_fs_schedule_viewer_highlight_g3

0xd260,	// (0x0002b1d7) bg_sp_fs_schedule_viewer_highlight_g4

0xd480,	// (0x0002b3f7) bg_sp_fs_schedule_viewer_highlight_g5

0xd270,	// (0x0002b1e7) bg_sp_fs_schedule_viewer_highlight_g6

0xd278,	// (0x0002b1ef) bg_sp_fs_schedule_viewer_highlight_g7

0xd280,	// (0x0002b1f7) bg_sp_fs_schedule_viewer_highlight_g8

0xa80b,	// (0x00028782) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd05,	// (0x0002dc7c) bg_sp_fs_schedule_viewer_highlight_g

0x9c97,	// (0x00027c0e) bg_main_sp_fs_ribbon_pane

0x8ff7,	// (0x00026f6e) main_sp_fs_ribbon_pane_g1

0xe781,	// (0x0002c6f8) main_sp_fs_ribbon_pane_t1

0x9000,	// (0x00026f77) main_sp_fs_ribbon_pane_t2

0xe790,	// (0x0002c707) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd18,	// (0x0002dc8f) main_sp_fs_ribbon_pane_t

0xe79f,	// (0x0002c716) main_sp_fs_ribbon_scheduler_pane

0xe7a7,	// (0x0002c71e) bg_main_sp_fs_ribbon_pane_g1

0xe7b0,	// (0x0002c727) bg_main_sp_fs_ribbon_pane_g2

0xe7b9,	// (0x0002c730) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0cbc,	// (0x0001ec33) bg_main_sp_fs_ribbon_pane_g

0xe7c1,	// (0x0002c738) main_sp_fs_ribbon_scheduler_pane_g1

0xe7ca,	// (0x0002c741) main_sp_fs_ribbon_scheduler_pane_g2

0xe7d3,	// (0x0002c74a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0cc3,	// (0x0001ec3a) main_sp_fs_ribbon_scheduler_pane_g

0xe7dc,	// (0x0002c753) list_cale_mrui_pane

0x9011,	// (0x00026f88) sp_fs_scroll_pane_cp07_ParamLimits

0x9011,	// (0x00026f88) sp_fs_scroll_pane_cp07

0x902d,	// (0x00026fa4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x902d,	// (0x00026fa4) bg_sp_fs_schedule_viewer_highlight

0xe7e9,	// (0x0002c760) list_single_sp_fs_schedule_track_pane_cp01

0xe7f1,	// (0x0002c768) list_sp_fs_schedule_track_pane

0xe7f9,	// (0x0002c770) sp_fs_scroll_pane_cp06_ParamLimits

0xe7f9,	// (0x0002c770) sp_fs_scroll_pane_cp06

0xc72a,	// (0x0002a6a1) bgmain_sp_fs_calendar_pane_g1

0x903a,	// (0x00026fb1) list_single_cale_mrui_pane_ParamLimits

0x903a,	// (0x00026fb1) list_single_cale_mrui_pane

0xe80b,	// (0x0002c782) list_single_cale_mrui_row_pane_ParamLimits

0xe80b,	// (0x0002c782) list_single_cale_mrui_row_pane

0xe818,	// (0x0002c78f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe818,	// (0x0002c78f) list_single_cale_mrui_row_pane_g1

0xe85d,	// (0x0002c7d4) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe85d,	// (0x0002c7d4) list_single_cale_mrui_row_pane_t1

0x906b,	// (0x00026fe2) list_single_cale_mrui_row_pane_t2_ParamLimits

0x906b,	// (0x00026fe2) list_single_cale_mrui_row_pane_t2

0xe86f,	// (0x0002c7e6) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe86f,	// (0x0002c7e6) list_single_cale_mrui_row_pane_t3

0xe89e,	// (0x0002c815) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe89e,	// (0x0002c815) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd1f,	// (0x0002dc96) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd1f,	// (0x0002dc96) list_single_cale_mrui_row_pane_t

0x90d1,	// (0x00027048) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x90d1,	// (0x00027048) list_single_cmail_header_editor_pane_bg_cp01

0x90f3,	// (0x0002706a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x90f3,	// (0x0002706a) list_single_cmail_header_editor_pane_bg_cp02

0x910f,	// (0x00027086) main_radioblah_text_pane_t1_ParamLimits

0x910f,	// (0x00027086) main_radioblah_text_pane_t1

0xe8cd,	// (0x0002c844) cam6_indi_pane_cp01

0xe8d5,	// (0x0002c84c) cam6_mode_pane_cp01

0xe8dd,	// (0x0002c854) cam6_pano_pane

0xe8e6,	// (0x0002c85d) cam6_zoom_pane_cp01

0xe8ee,	// (0x0002c865) cam6_pano_image_pane

0xe8f9,	// (0x0002c870) cam6_pano_pane_g1

0xdf5d,	// (0x0002bed4) cam6_pano_pane_g2

0xe902,	// (0x0002c879) cam6_pano_pane_g3

0xe90b,	// (0x0002c882) cam6_pano_pane_g4

0xcd40,	// (0x0002acb7) cam6_pano_pane_g5

0xe914,	// (0x0002c88b) cam6_pano_pane_g6

0xe91e,	// (0x0002c895) cam6_pano_pane_g7

0xe926,	// (0x0002c89d) cam6_pano_pane_g8

0xe92f,	// (0x0002c8a6) cam6_pano_pane_g9

0x0008,

0xfd28,	// (0x0002dc9f) cam6_pano_pane_g

0x9c97,	// (0x00027c0e) main_browser_tag_pane

0xe65a,	// (0x0002c5d1) grid_navstr_albumart_pane

0xe93a,	// (0x0002c8b1) cell_navstr_albumart_pane_ParamLimits

0xe93a,	// (0x0002c8b1) cell_navstr_albumart_pane

0xb02b,	// (0x00028fa2) cell_navstr_albumart_pane_g1

0xc131,	// (0x0002a0a8) cell_navstr_albumart_pane_g2

0xc141,	// (0x0002a0b8) cell_navstr_albumart_pane_g3

0xc139,	// (0x0002a0b0) cell_navstr_albumart_pane_g4

0x0003,

0xfd3b,	// (0x0002dcb2) cell_navstr_albumart_pane_g

0x912a,	// (0x000270a1) bt_list_pane_ParamLimits

0x912a,	// (0x000270a1) bt_list_pane

0xe95c,	// (0x0002c8d3) bt_list_pane_t1

0xe96b,	// (0x0002c8e2) bt_list_pane_t2

0x0001,

0x0cf6,	// (0x0001ec6d) bt_list_pane_t

0x9c97,	// (0x00027c0e) main_cale_prevew_pane

0x914e,	// (0x000270c5) popup_cale_preview_window_ParamLimits

0x914e,	// (0x000270c5) popup_cale_preview_window

0xa3df,	// (0x00028356) bg_popup_preview_window_pane_cp05_ParamLimits

0xa3df,	// (0x00028356) bg_popup_preview_window_pane_cp05

0xe97a,	// (0x0002c8f1) list_cale_preview_pane_ParamLimits

0xe97a,	// (0x0002c8f1) list_cale_preview_pane

0xe986,	// (0x0002c8fd) list_double_cale_preview_pane_ParamLimits

0xe986,	// (0x0002c8fd) list_double_cale_preview_pane

0xe998,	// (0x0002c90f) list_single_cale_preview_pane_ParamLimits

0xe998,	// (0x0002c90f) list_single_cale_preview_pane

0xe9be,	// (0x0002c935) list_single_cale_preview_pane_g1

0xe9c6,	// (0x0002c93d) list_single_cale_preview_pane_t1_ParamLimits

0xe9c6,	// (0x0002c93d) list_single_cale_preview_pane_t1

0xe9db,	// (0x0002c952) list_double_cale_preview_pane_g1

0xe9e3,	// (0x0002c95a) list_double_cale_preview_pane_t1_ParamLimits

0xe9e3,	// (0x0002c95a) list_double_cale_preview_pane_t1

0xe9f8,	// (0x0002c96f) list_double_cale_preview_pane_t2_ParamLimits

0xe9f8,	// (0x0002c96f) list_double_cale_preview_pane_t2

0x0001,

0x0cfb,	// (0x0001ec72) list_double_cale_preview_pane_t_ParamLimits

0x0cfb,	// (0x0001ec72) list_double_cale_preview_pane_t

0x9c97,	// (0x00027c0e) main_ezdial_pane

0xa3df,	// (0x00028356) main_sp_fs_email_pane_ParamLimits

0x8842,	// (0x000267b9) cmail_ddmenu_btn01_pane_ParamLimits

0x8842,	// (0x000267b9) cmail_ddmenu_btn01_pane

0x885f,	// (0x000267d6) cmail_ddmenu_btn02_pane_ParamLimits

0x885f,	// (0x000267d6) cmail_ddmenu_btn02_pane

0x887d,	// (0x000267f4) cmail_ddmenu_btn03_pane_ParamLimits

0x887d,	// (0x000267f4) cmail_ddmenu_btn03_pane

0x88ab,	// (0x00026822) main_sp_fs_ctrlbar_pane_ParamLimits

0x88c1,	// (0x00026838) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8da3,	// (0x00026d1a) list_cmail_body_pane_ParamLimits

0x8e2f,	// (0x00026da6) bg_button_pane_cp12

0xe5b6,	// (0x0002c52d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5b6,	// (0x0002c52d) list_single_cmail_header_detail_pane_g3

0xe5c3,	// (0x0002c53a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe5c3,	// (0x0002c53a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcfb,	// (0x0002dc72) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcfb,	// (0x0002dc72) list_single_cmail_header_detail_pane_t

0xe6c2,	// (0x0002c639) phacti_term_pane_t2_ParamLimits

0xe6c2,	// (0x0002c639) phacti_term_pane_t2

0x0001,

0x0c88,	// (0x0001ebff) phacti_term_pane_t_ParamLimits

0x0c88,	// (0x0001ebff) phacti_term_pane_t

0xea10,	// (0x0002c987) aid_size_list_single_double

0x9165,	// (0x000270dc) popup_ezdial_listscroll_window

0x9188,	// (0x000270ff) popup_number_entry_window_cp01

0xaeca,	// (0x00028e41) bg_popup_call_pane_cp09

0xea1c,	// (0x0002c993) ezdial_list_pane

0xea24,	// (0x0002c99b) scroll_pane_cp23

0xc50d,	// (0x0002a484) bg_button_pane_cp028_ParamLimits

0xc50d,	// (0x0002a484) bg_button_pane_cp028

0x9196,	// (0x0002710d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9196,	// (0x0002710d) cmail_ddmenu_btn01_pane_g1

0x91a8,	// (0x0002711f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91a8,	// (0x0002711f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd44,	// (0x0002dcbb) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd44,	// (0x0002dcbb) cmail_ddmenu_btn01_pane_g

0xea2c,	// (0x0002c9a3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea2c,	// (0x0002c9a3) cmail_ddmenu_btn01_pane_t1

0xc320,	// (0x0002a297) bg_button_pane_cp029_ParamLimits

0xc320,	// (0x0002a297) bg_button_pane_cp029

0x91a8,	// (0x0002711f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91a8,	// (0x0002711f) cmail_ddmenu_btn02_pane_g1

0x91c0,	// (0x00027137) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91c0,	// (0x00027137) cmail_ddmenu_btn02_pane_t1

0xd196,	// (0x0002b10d) bg_button_pane_cp031_ParamLimits

0xd196,	// (0x0002b10d) bg_button_pane_cp031

0x91a8,	// (0x0002711f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91a8,	// (0x0002711f) cmail_ddmenu_btn03_pane_g1

0x91c0,	// (0x00027137) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91c0,	// (0x00027137) cmail_ddmenu_btn03_pane_t1

0x6b85,	// (0x00024afc) cell_dialer2_keypad_pane_t1_ParamLimits

0x6b9f,	// (0x00024b16) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6b9f,	// (0x00024b16) cell_dialer2_keypad_pane_t1_copy1

0x815e,	// (0x000260d5) ncimui_group_button_pane

0xa3df,	// (0x00028356) main_sp_fs_calendar_pane_ParamLimits

0x8dc7,	// (0x00026d3e) list_single_cmail_header_caption_pane_ParamLimits

0xe705,	// (0x0002c67c) aid_recal_txt_sm_pane

0x9c97,	// (0x00027c0e) mian_recal_day_pane

0xe747,	// (0x0002c6be) popup_sp_fs_cale_preview_window_ParamLimits

0xea42,	// (0x0002c9b9) list_recal_day_pane

0xea84,	// (0x0002c9fb) list_single_recal_day_pane_ParamLimits

0xea84,	// (0x0002c9fb) list_single_recal_day_pane

0xea96,	// (0x0002ca0d) list_single_recal_day_pane_g1_ParamLimits

0xea96,	// (0x0002ca0d) list_single_recal_day_pane_g1

0xeaa2,	// (0x0002ca19) list_single_recal_day_pane_g2_ParamLimits

0xeaa2,	// (0x0002ca19) list_single_recal_day_pane_g2

0xeab2,	// (0x0002ca29) list_single_recal_day_pane_g3_ParamLimits

0xeab2,	// (0x0002ca29) list_single_recal_day_pane_g3

0x91e4,	// (0x0002715b) list_single_recal_day_pane_g4_ParamLimits

0x91e4,	// (0x0002715b) list_single_recal_day_pane_g4

0xeabe,	// (0x0002ca35) list_single_recal_day_pane_g5_ParamLimits

0xeabe,	// (0x0002ca35) list_single_recal_day_pane_g5

0xeace,	// (0x0002ca45) list_single_recal_day_pane_g6_ParamLimits

0xeace,	// (0x0002ca45) list_single_recal_day_pane_g6

0x0004,

0xfd53,	// (0x0002dcca) list_single_recal_day_pane_g_ParamLimits

0xfd53,	// (0x0002dcca) list_single_recal_day_pane_g

0xeae2,	// (0x0002ca59) list_single_recal_day_pane_t1

0xeaf4,	// (0x0002ca6b) list_single_recal_day_pane_t2

0x0001,

0x0d1a,	// (0x0001ec91) list_single_recal_day_pane_t

0x9204,	// (0x0002717b) ncimui_query_button_pane_ParamLimits

0x9204,	// (0x0002717b) ncimui_query_button_pane

0x9214,	// (0x0002718b) ncimui_query_button_pane_t1_ParamLimits

0x9214,	// (0x0002718b) ncimui_query_button_pane_t1

0xeb06,	// (0x0002ca7d) ncimui_query_button_pane_t2_ParamLimits

0xeb06,	// (0x0002ca7d) ncimui_query_button_pane_t2

0x0001,

0xfd5e,	// (0x0002dcd5) ncimui_query_button_pane_t_ParamLimits

0xfd5e,	// (0x0002dcd5) ncimui_query_button_pane_t

0x9227,	// (0x0002719e) query_button_pane_ParamLimits

0x9227,	// (0x0002719e) query_button_pane

0x9c97,	// (0x00027c0e) bg_button_pane_cp0028

0xeb19,	// (0x0002ca90) query_button_pane_t1

0x15b7,	// (0x0001f52e) main_tport_pane_ParamLimits

0x8cb4,	// (0x00026c2b) bg_popup_window_pane_cp01_ParamLimits

0x8cb4,	// (0x00026c2b) bg_popup_window_pane_cp01

0x8cc2,	// (0x00026c39) heading_pane_cp08_ParamLimits

0x8cc2,	// (0x00026c39) heading_pane_cp08

0x8cd0,	// (0x00026c47) heading_pane_cp07_ParamLimits

0x8cd0,	// (0x00026c47) heading_pane_cp07

0x8d3f,	// (0x00026cb6) cell_tport_appsw_pane_g2

0x0002,

0xfce8,	// (0x0002dc5f) cell_tport_appsw_pane_g

0x4f2f,	// (0x00022ea6) input_candi_list_open_g1

0xa9e2,	// (0x00028959) list_cale_time_pane_g6_ParamLimits

0xa9e2,	// (0x00028959) list_cale_time_pane_g6

0x5d9b,	// (0x00023d12) aid_size_touch_calib_1_ParamLimits

0x5d9b,	// (0x00023d12) aid_size_touch_calib_1

0x5da7,	// (0x00023d1e) aid_size_touch_calib_2_ParamLimits

0x5da7,	// (0x00023d1e) aid_size_touch_calib_2

0x5db5,	// (0x00023d2c) aid_size_touch_calib_3_ParamLimits

0x5db5,	// (0x00023d2c) aid_size_touch_calib_3

0x5dc5,	// (0x00023d3c) aid_size_touch_calib_4_ParamLimits

0x5dc5,	// (0x00023d3c) aid_size_touch_calib_4

0x5dd3,	// (0x00023d4a) main_touch_calib_button_group_pane_ParamLimits

0x5dd3,	// (0x00023d4a) main_touch_calib_button_group_pane

0x5de1,	// (0x00023d58) main_touch_calib_pane_g1_ParamLimits

0x5ded,	// (0x00023d64) main_touch_calib_pane_g2_ParamLimits

0x5df9,	// (0x00023d70) main_touch_calib_pane_g3_ParamLimits

0x5e05,	// (0x00023d7c) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0002d6d3) main_touch_calib_pane_g_ParamLimits

0x5e11,	// (0x00023d88) main_touch_calib_pane_t1_ParamLimits

0x5e2a,	// (0x00023da1) main_touch_calib_pane_t2_ParamLimits

0x5e43,	// (0x00023dba) main_touch_calib_pane_t3_ParamLimits

0x5e59,	// (0x00023dd0) main_touch_calib_pane_t4_ParamLimits

0x5e6f,	// (0x00023de6) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0002d6dc) main_touch_calib_pane_t_ParamLimits

0xcafe,	// (0x0002aa75) list_single_fp_cale_pane_g3_ParamLimits

0xcafe,	// (0x0002aa75) list_single_fp_cale_pane_g3

0x159b,	// (0x0001f512) bg_button_pane_cp012_ParamLimits

0x159b,	// (0x0001f512) bg_vkb2_func_pane_cp03_ParamLimits

0x24dc,	// (0x00020453) cell_vitu2_function_top_pane_g1_ParamLimits

0x159b,	// (0x0001f512) bg_vkb2_func_pane_cp04_ParamLimits

0x80e6,	// (0x0002605d) main_ncimui_button_group_pane_ParamLimits

0x80e6,	// (0x0002605d) main_ncimui_button_group_pane

0x814c,	// (0x000260c3) main_ncimui_pane_t3_ParamLimits

0x814c,	// (0x000260c3) main_ncimui_pane_t3

0xe670,	// (0x0002c5e7) phacti_button_group_pane

0xea10,	// (0x0002c987) aid_size_list_single_double_ParamLimits

0x9165,	// (0x000270dc) popup_ezdial_listscroll_window_ParamLimits

0x9188,	// (0x000270ff) popup_number_entry_window_cp01_ParamLimits

0x9234,	// (0x000271ab) phacti_button_pane_ParamLimits

0x9234,	// (0x000271ab) phacti_button_pane

0x9c97,	// (0x00027c0e) bg_button_pane_cp14

0xeb27,	// (0x0002ca9e) phacti_button_pane_t1

0x9245,	// (0x000271bc) main_touch_calib_button_pane_ParamLimits

0x9245,	// (0x000271bc) main_touch_calib_button_pane

0xa401,	// (0x00028378) bg_button_pane_cp18_ParamLimits

0xa401,	// (0x00028378) bg_button_pane_cp18

0xeb35,	// (0x0002caac) main_touch_calib_button_pane_t1_ParamLimits

0xeb35,	// (0x0002caac) main_touch_calib_button_pane_t1

0xeb4b,	// (0x0002cac2) main_touch_calib_button_pane_t2_ParamLimits

0xeb4b,	// (0x0002cac2) main_touch_calib_button_pane_t2

0x0001,

0x0d24,	// (0x0001ec9b) main_touch_calib_button_pane_t_ParamLimits

0x0d24,	// (0x0001ec9b) main_touch_calib_button_pane_t

0x9c97,	// (0x00027c0e) cell_ncimui_button_pane

0x9c97,	// (0x00027c0e) bg_button_pane_cp032

0xeb69,	// (0x0002cae0) cell_ncimui_button_pane_t1

0x1ded,	// (0x0001fd64) image3_infobar_pane_ParamLimits

0x1ded,	// (0x0001fd64) image3_infobar_pane

0x84c5,	// (0x0002643c) fs_bigclock_status_pane_ParamLimits

0x84c5,	// (0x0002643c) fs_bigclock_status_pane

0x84d2,	// (0x00026449) main_fs_bigclock_clock_pane_ParamLimits

0x84d2,	// (0x00026449) main_fs_bigclock_clock_pane

0x84f6,	// (0x0002646d) main_fs_bigclock_indi_pane_ParamLimits

0x84f6,	// (0x0002646d) main_fs_bigclock_indi_pane

0x8526,	// (0x0002649d) main_fs_bigclock_swipe_pane_ParamLimits

0x8526,	// (0x0002649d) main_fs_bigclock_swipe_pane

0x9c97,	// (0x00027c0e) main_fs_clock_dumped_data

0xe06a,	// (0x0002bfe1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe06a,	// (0x0002bfe1) list_single_fs_bigclock_indicator_pane_g1

0xe085,	// (0x0002bffc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe085,	// (0x0002bffc) list_single_fs_bigclock_indicator_pane_g2

0xe09f,	// (0x0002c016) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe09f,	// (0x0002c016) list_single_fs_bigclock_indicator_pane_g3

0xe0b9,	// (0x0002c030) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0b9,	// (0x0002c030) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b57,	// (0x0001eace) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b57,	// (0x0001eace) list_single_fs_bigclock_indicator_pane_g

0xe0e2,	// (0x0002c059) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0e2,	// (0x0002c059) list_single_fs_bigclock_indicator_pane_t1

0xe10a,	// (0x0002c081) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe10a,	// (0x0002c081) list_single_fs_bigclock_indicator_pane_t2

0xe132,	// (0x0002c0a9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe132,	// (0x0002c0a9) list_single_fs_bigclock_indicator_pane_t3

0xe15a,	// (0x0002c0d1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe15a,	// (0x0002c0d1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b62,	// (0x0001ead9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b62,	// (0x0001ead9) list_single_fs_bigclock_indicator_pane_t

0xeb77,	// (0x0002caee) image3_infobar_fav_pane_ParamLimits

0xeb77,	// (0x0002caee) image3_infobar_fav_pane

0xeb87,	// (0x0002cafe) image3_infobar_loc_pane_ParamLimits

0xeb87,	// (0x0002cafe) image3_infobar_loc_pane

0xeb9b,	// (0x0002cb12) image3_infobar_time_pane_ParamLimits

0xeb9b,	// (0x0002cb12) image3_infobar_time_pane

0xc72a,	// (0x0002a6a1) image3_infobar_time_pane_g1

0xebab,	// (0x0002cb22) image3_infobar_time_pane_t1

0xc72a,	// (0x0002a6a1) image3_infobar_loc_pane_g1

0xebb9,	// (0x0002cb30) image3_infobar_loc_pane_g2

0x0001,

0xfd63,	// (0x0002dcda) image3_infobar_loc_pane_g

0xebc1,	// (0x0002cb38) image3_infobar_loc_pane_t1

0xc72a,	// (0x0002a6a1) image3_infobar_fav_pane_g1

0xebcf,	// (0x0002cb46) image3_infobar_fav_pane_g2

0x0001,

0xfd68,	// (0x0002dcdf) image3_infobar_fav_pane_g

0xebd7,	// (0x0002cb4e) fs_bigclock_status_battery_pane

0xebe0,	// (0x0002cb57) fs_bigclock_status_signal_pane

0xebe9,	// (0x0002cb60) fs_bigclock_status_title_pane

0xebf2,	// (0x0002cb69) fs_bigclock_status_signal_pane_g1

0xebfb,	// (0x0002cb72) fs_bigclock_status_signal_pane_g2

0x0001,

0x0d33,	// (0x0001ecaa) fs_bigclock_status_signal_pane_g

0xec03,	// (0x0002cb7a) fs_bigclock_status_battery_pane_g1

0xec0c,	// (0x0002cb83) fs_bigclock_status_battery_pane_g2

0x0001,

0x0d38,	// (0x0001ecaf) fs_bigclock_status_battery_pane_g

0xec14,	// (0x0002cb8b) fs_bigclock_status_title_pane_t1

0xc72a,	// (0x0002a6a1) main_fs_bigclock_clock_pane_g1

0x9255,	// (0x000271cc) main_fs_bigclock_clock_pane_g2

0x9255,	// (0x000271cc) main_fs_bigclock_clock_pane_g3

0x9255,	// (0x000271cc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd6d,	// (0x0002dce4) main_fs_bigclock_clock_pane_g

0x925d,	// (0x000271d4) main_fs_bigclock_clock_pane_t1

0x926b,	// (0x000271e2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd76,	// (0x0002dced) main_fs_bigclock_clock_pane_t

0xec22,	// (0x0002cb99) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec22,	// (0x0002cb99) list_single_fs_bigclock_indicator_pane

0x927a,	// (0x000271f1) list_single_fs_bigclock_pane_ParamLimits

0x927a,	// (0x000271f1) list_single_fs_bigclock_pane

0xec3c,	// (0x0002cbb3) main_fs_bigclock_indicator_pane_t1

0xec4b,	// (0x0002cbc2) list_single_fs_bigclock_pane_g1

0xec53,	// (0x0002cbca) list_single_fs_bigclock_pane_t1

0xc72a,	// (0x0002a6a1) main_fs_bigclock_swipe_pane_g1

0xec96,	// (0x0002cc0d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd82,	// (0x0002dcf9) main_fs_bigclock_swipe_pane_g

0xec9e,	// (0x0002cc15) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec9e,	// (0x0002cc15) main_fs_bigclock_swipe_pane_t1

0x476f,	// (0x000226e6) call_type_pane_ParamLimits

0x9c97,	// (0x00027c0e) main_btmg_pane

0xe844,	// (0x0002c7bb) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe844,	// (0x0002c7bb) list_single_cale_mrui_row_pane_g2

0x0002,

0x0cca,	// (0x0001ec41) list_single_cale_mrui_row_pane_g_ParamLimits

0x0cca,	// (0x0001ec41) list_single_cale_mrui_row_pane_g

0xea6b,	// (0x0002c9e2) list_recal_vselct_arw_lo_pane

0xea73,	// (0x0002c9ea) list_recal_vselct_arw_up_pane

0xea7b,	// (0x0002c9f2) list_recal_vselct_pane

0x92db,	// (0x00027252) btmg_button_pane

0x92e7,	// (0x0002725e) main_btmg_pane_g1

0x9c97,	// (0x00027c0e) bg_button_pane_cp044

0xecbb,	// (0x0002cc32) btmg_button_pane_t1

0xc30c,	// (0x0002a283) aid_listscroll_gen

0xa3df,	// (0x00028356) main_cntbar_detail_pane

0xe58c,	// (0x0002c503) list_cmail_folder_pane

0xd40a,	// (0x0002b381) sp_fs_scroll_pane_cp03_ParamLimits

0x8dc7,	// (0x00026d3e) list_single_fs_dyc_pane_cp01_ParamLimits

0x8dc7,	// (0x00026d3e) list_single_fs_dyc_pane_cp01

0xecc9,	// (0x0002cc40) aid_size_cmail_indent

0xecd2,	// (0x0002cc49) list_single_dyc_row_pane_cp01

0x930f,	// (0x00027286) cntbar_detail_list_pane_ParamLimits

0x930f,	// (0x00027286) cntbar_detail_list_pane

0x9349,	// (0x000272c0) main_cntbar_detail_cont_pane_ParamLimits

0x9349,	// (0x000272c0) main_cntbar_detail_cont_pane

0x4692,	// (0x00022609) scroll_pane_cp032_ParamLimits

0x4692,	// (0x00022609) scroll_pane_cp032

0x9355,	// (0x000272cc) cntbar_detail_list_event_pane_ParamLimits

0x9355,	// (0x000272cc) cntbar_detail_list_event_pane

0x931b,	// (0x00027292) cntbar_detail_list_shct_pane

0xa879,	// (0x000287f0) aid_list_gen

0xecdb,	// (0x0002cc52) aid_scroll

0xece4,	// (0x0002cc5b) aid_size_touch_scroll_bar

0x78f6,	// (0x0002586d) aid_list_double

0xeced,	// (0x0002cc64) aid_list_single

0x78e4,	// (0x0002585b) aid_list_single_lg

0xecf6,	// (0x0002cc6d) aid_list_z_g_a_sm

0xecfe,	// (0x0002cc75) aid_list_z_g_d

0xed06,	// (0x0002cc7d) aid_txt_z_prm

0x9369,	// (0x000272e0) aid_txt_z_prm_cp01

0x9377,	// (0x000272ee) aid_txt_z_sec

0x9385,	// (0x000272fc) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9385,	// (0x000272fc) main_cntbar_detail_cont_pane_g1

0x9392,	// (0x00027309) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9392,	// (0x00027309) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd87,	// (0x0002dcfe) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd87,	// (0x0002dcfe) main_cntbar_detail_cont_pane_g

0xed14,	// (0x0002cc8b) main_cntbar_detail_cont_pane_t1

0xed22,	// (0x0002cc99) main_cntbar_detail_cont_pane_t2

0xed30,	// (0x0002cca7) main_cntbar_detail_cont_pane_t3

0x0002,

0x0d61,	// (0x0001ecd8) main_cntbar_detail_cont_pane_t

0x939e,	// (0x00027315) cell_cntbar_detail_list_shct_pane_ParamLimits

0x939e,	// (0x00027315) cell_cntbar_detail_list_shct_pane

0xed3e,	// (0x0002ccb5) cntbar_detail_list_shct_pane_g1

0xed47,	// (0x0002ccbe) cntbar_detail_list_shct_pane_g2

0x0001,

0x0d68,	// (0x0001ecdf) cntbar_detail_list_shct_pane_g

0x93b2,	// (0x00027329) cntbar_detail_list_event_pane_g1_ParamLimits

0x93b2,	// (0x00027329) cntbar_detail_list_event_pane_g1

0x93be,	// (0x00027335) cntbar_detail_list_event_pane_g2_ParamLimits

0x93be,	// (0x00027335) cntbar_detail_list_event_pane_g2

0x0005,

0xfd8c,	// (0x0002dd03) cntbar_detail_list_event_pane_g_ParamLimits

0xfd8c,	// (0x0002dd03) cntbar_detail_list_event_pane_g

0x942a,	// (0x000273a1) cntbar_detail_list_event_pane_t1_ParamLimits

0x942a,	// (0x000273a1) cntbar_detail_list_event_pane_t1

0x943f,	// (0x000273b6) cntbar_detail_list_event_pane_t2_ParamLimits

0x943f,	// (0x000273b6) cntbar_detail_list_event_pane_t2

0x0002,

0xfd99,	// (0x0002dd10) cntbar_detail_list_event_pane_t_ParamLimits

0xfd99,	// (0x0002dd10) cntbar_detail_list_event_pane_t

0xc72a,	// (0x0002a6a1) cell_cntbar_detail_list_shct_pane_g1

0x4a8b,	// (0x00022a02) navi_pane_mv_g3

0xa3df,	// (0x00028356) main_cntbar_detail_pane_ParamLimits

0x9c97,	// (0x00027c0e) main_notif_wgt_pane

0x1b2e,	// (0x0001faa5) aid_tch_main_mp4_pane_g4

0x1d63,	// (0x0001fcda) popup_slider_window_cp02

0xea61,	// (0x0002c9d8) list_recal_day_event_pane

0x92ef,	// (0x00027266) cntbar_detail_btn_pane_ParamLimits

0x92ef,	// (0x00027266) cntbar_detail_btn_pane

0x92ff,	// (0x00027276) cntbar_detail_btn_pane_cp01_ParamLimits

0x92ff,	// (0x00027276) cntbar_detail_btn_pane_cp01

0x931b,	// (0x00027292) cntbar_detail_list_shct_pane_ParamLimits

0x9327,	// (0x0002729e) cntbar_detail_pane_g1_ParamLimits

0x9327,	// (0x0002729e) cntbar_detail_pane_g1

0x9333,	// (0x000272aa) cntbar_detail_pane_t1_ParamLimits

0x9333,	// (0x000272aa) cntbar_detail_pane_t1

0x93ca,	// (0x00027341) cntbar_detail_list_event_pane_g3_ParamLimits

0x93ca,	// (0x00027341) cntbar_detail_list_event_pane_g3

0x93e2,	// (0x00027359) cntbar_detail_list_event_pane_g4_ParamLimits

0x93e2,	// (0x00027359) cntbar_detail_list_event_pane_g4

0x93fa,	// (0x00027371) cntbar_detail_list_event_pane_g5_ParamLimits

0x93fa,	// (0x00027371) cntbar_detail_list_event_pane_g5

0x9412,	// (0x00027389) cntbar_detail_list_event_pane_g6_ParamLimits

0x9412,	// (0x00027389) cntbar_detail_list_event_pane_g6

0x9454,	// (0x000273cb) cntbar_detail_list_event_pane_t3_ParamLimits

0x9454,	// (0x000273cb) cntbar_detail_list_event_pane_t3

0x9466,	// (0x000273dd) popup_notif_wgt_window_ParamLimits

0x9466,	// (0x000273dd) popup_notif_wgt_window

0x9476,	// (0x000273ed) popup_submenu_window_cp01_ParamLimits

0x9476,	// (0x000273ed) popup_submenu_window_cp01

0xaeca,	// (0x00028e41) bg_popup_window_pane_cp10

0xed50,	// (0x0002ccc7) listscroll_notif_wgt_pane

0xed61,	// (0x0002ccd8) list_notif_wgt_window

0xed6a,	// (0x0002cce1) scroll_pane_cp033

0x9484,	// (0x000273fb) list_notif_wgt_row_pane_ParamLimits

0x9484,	// (0x000273fb) list_notif_wgt_row_pane

0xed73,	// (0x0002ccea) aid_size_list_notif_wgt_del

0xed80,	// (0x0002ccf7) list_notif_wgt_row_pane_g1

0xed8c,	// (0x0002cd03) list_notif_wgt_row_pane_g2

0xed98,	// (0x0002cd0f) list_notif_wgt_row_pane_g3

0x0002,

0x0d81,	// (0x0001ecf8) list_notif_wgt_row_pane_g

0xeda5,	// (0x0002cd1c) list_notif_wgt_row_pane_t1

0xedba,	// (0x0002cd31) list_notif_wgt_row_pane_t2

0xedcc,	// (0x0002cd43) list_notif_wgt_row_pane_t3

0x0002,

0x0d88,	// (0x0001ecff) list_notif_wgt_row_pane_t

0xd49a,	// (0x0002b411) list_recal_day_event_pane_g1

0xedde,	// (0x0002cd55) list_recal_day_event_pane_t1

0x9c97,	// (0x00027c0e) bg_button_pane_cp045

0xeded,	// (0x0002cd64) cntbar_detail_btn_pane_t1

0xc320,	// (0x0002a297) main_callh_pane_ParamLimits

0xc320,	// (0x0002a297) main_callh_pane

0x9c97,	// (0x00027c0e) main_coverflow0_pane

0x9c97,	// (0x00027c0e) main_wgtman_pane

0x853e,	// (0x000264b5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x853e,	// (0x000264b5) main_fs_bigclock_unlock_btn_pane

0x8d37,	// (0x00026cae) bg_button_pane_cp16

0x8d47,	// (0x00026cbe) cell_tport_appsw_pane_g3

0x9495,	// (0x0002740c) cf0_flow_pane_ParamLimits

0x9495,	// (0x0002740c) cf0_flow_pane

0xedfb,	// (0x0002cd72) listscroll_cf0_pane

0xee06,	// (0x0002cd7d) main_cf0_pane_g1

0x94a4,	// (0x0002741b) main_cf0_pane_t1_ParamLimits

0x94a4,	// (0x0002741b) main_cf0_pane_t1

0x94b8,	// (0x0002742f) main_cf0_pane_t2_ParamLimits

0x94b8,	// (0x0002742f) main_cf0_pane_t2

0x0001,

0xfda0,	// (0x0002dd17) main_cf0_pane_t_ParamLimits

0xfda0,	// (0x0002dd17) main_cf0_pane_t

0xee18,	// (0x0002cd8f) scroll_pane_cp11

0x94cc,	// (0x00027443) cf0_flow_pane_g1

0x94d4,	// (0x0002744b) cf0_flow_pane_g2

0x0001,

0xfda5,	// (0x0002dd1c) cf0_flow_pane_g

0x94dc,	// (0x00027453) cf0_flow_pane_t1

0x9c97,	// (0x00027c0e) main_call6_pane

0x9c97,	// (0x00027c0e) main_calllock_pane

0x94ea,	// (0x00027461) call6_btn_grp_pane_ParamLimits

0x94ea,	// (0x00027461) call6_btn_grp_pane

0x94f9,	// (0x00027470) call6_pane_g1_ParamLimits

0x94f9,	// (0x00027470) call6_pane_g1

0x9508,	// (0x0002747f) popup_call6_1st_window_ParamLimits

0x9508,	// (0x0002747f) popup_call6_1st_window

0x9516,	// (0x0002748d) popup_call6_2nd_window_ParamLimits

0x9516,	// (0x0002748d) popup_call6_2nd_window

0x9524,	// (0x0002749b) cell_call6_btn_pane_ParamLimits

0x9524,	// (0x0002749b) cell_call6_btn_pane

0xaeca,	// (0x00028e41) bg_popup_call2_in_pane_cp03

0xee23,	// (0x0002cd9a) popup_call6_1st_window_g1

0xee2b,	// (0x0002cda2) popup_call6_1st_window_g2

0xee33,	// (0x0002cdaa) popup_call6_1st_window_g3

0x0002,

0x0d9e,	// (0x0001ed15) popup_call6_1st_window_g

0xee3b,	// (0x0002cdb2) popup_call6_1st_window_t1

0xee4a,	// (0x0002cdc1) popup_call6_1st_window_t2

0xee5a,	// (0x0002cdd1) popup_call6_1st_window_t3

0x0002,

0x0da5,	// (0x0001ed1c) popup_call6_1st_window_t

0xaeca,	// (0x00028e41) bg_popup_call2_in_pane_cp04

0xee23,	// (0x0002cd9a) popup_call6_2nd_window_g1

0xee2b,	// (0x0002cda2) popup_call6_2nd_window_g2

0xee33,	// (0x0002cdaa) popup_call6_2nd_window_g3

0x0002,

0x0d9e,	// (0x0001ed15) popup_call6_2nd_window_g

0xee3b,	// (0x0002cdb2) popup_call6_2nd_window_t1

0x9c97,	// (0x00027c0e) bg_button_pane_cp15

0xee6a,	// (0x0002cde1) cell_call6_btn_pane_g1

0xee73,	// (0x0002cdea) cell_call6_btn_pane_t1

0x9533,	// (0x000274aa) listscroll_wgtman_pane_ParamLimits

0x9533,	// (0x000274aa) listscroll_wgtman_pane

0x9551,	// (0x000274c8) wgtman_btn_pane_ParamLimits

0x9551,	// (0x000274c8) wgtman_btn_pane

0xad81,	// (0x00028cf8) aid_scroll_copy1

0xee82,	// (0x0002cdf9) list_wgtman_pane

0x9586,	// (0x000274fd) wgtman_btn_pane_g1_ParamLimits

0x9586,	// (0x000274fd) wgtman_btn_pane_g1

0x95ae,	// (0x00027525) wgtman_btn_pane_t1_ParamLimits

0x95ae,	// (0x00027525) wgtman_btn_pane_t1

0xee8c,	// (0x0002ce03) wgtman_btn_pane_t2_ParamLimits

0xee8c,	// (0x0002ce03) wgtman_btn_pane_t2

0x0001,

0xfdaa,	// (0x0002dd21) wgtman_btn_pane_t_ParamLimits

0xfdaa,	// (0x0002dd21) wgtman_btn_pane_t

0x95e5,	// (0x0002755c) listrow_wgtman_pane_ParamLimits

0x95e5,	// (0x0002755c) listrow_wgtman_pane

0x95fe,	// (0x00027575) listrow_wgtman_pane_g1

0x960b,	// (0x00027582) listrow_wgtman_pane_g2

0x0001,

0xfdaf,	// (0x0002dd26) listrow_wgtman_pane_g

0x9629,	// (0x000275a0) listrow_wgtman_pane_t1

0x9641,	// (0x000275b8) listrow_wgtman_pane_t2

0x0001,

0xfdb4,	// (0x0002dd2b) listrow_wgtman_pane_t

0x9667,	// (0x000275de) wait_bar_pane_cp09

0xeea3,	// (0x0002ce1a) main_calllock_btn_pane

0xeead,	// (0x0002ce24) main_calllock_pane_g1

0x9c97,	// (0x00027c0e) bg_button_pane_cp17

0xeeb8,	// (0x0002ce2f) main_calllock_btn_pane_g1

0xeec1,	// (0x0002ce38) main_calllock_btn_pane_t1

0x9c97,	// (0x00027c0e) main_dialer3_pane

0x9c97,	// (0x00027c0e) main_fmrd2_pane

0xc72a,	// (0x0002a6a1) main_fs_bigclock_unlock_btn_pane_g1

0xeed8,	// (0x0002ce4f) main_fs_bigclock_unlock_btn_pane_t1

0x9679,	// (0x000275f0) area_fmrd2_info_pane_ParamLimits

0x9679,	// (0x000275f0) area_fmrd2_info_pane

0x9687,	// (0x000275fe) area_fmrd2_visual_pane_ParamLimits

0x9687,	// (0x000275fe) area_fmrd2_visual_pane

0x9695,	// (0x0002760c) fmrd2_indi_pane_ParamLimits

0x9695,	// (0x0002760c) fmrd2_indi_pane

0x96a2,	// (0x00027619) area_fmrd2_visual_pane_g1

0x96aa,	// (0x00027621) area_fmrd2_visual_pane_t1

0x96ba,	// (0x00027631) area_fmrd2_visual_pane_t2

0x96ca,	// (0x00027641) area_fmrd2_visual_pane_t3

0x0002,

0xfdbe,	// (0x0002dd35) area_fmrd2_visual_pane_t

0x96da,	// (0x00027651) area_fmrd2_info_pane_g1

0x96e2,	// (0x00027659) area_fmrd2_info_pane_t1

0x96f2,	// (0x00027669) area_fmrd2_info_pane_t2

0x9702,	// (0x00027679) area_fmrd2_info_pane_t3

0x9712,	// (0x00027689) area_fmrd2_info_pane_t4

0x0003,

0xfdc5,	// (0x0002dd3c) area_fmrd2_info_pane_t

0x9720,	// (0x00027697) fmrd2_indi_pane_t1

0x9730,	// (0x000276a7) fmrd2_indi_pane_t2

0x9740,	// (0x000276b7) fmrd2_indi_pane_t3

0x0002,

0xfdce,	// (0x0002dd45) fmrd2_indi_pane_t

0xe0c8,	// (0x0002c03f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0c8,	// (0x0002c03f) list_single_fs_bigclock_indicator_pane_g5

0xe16f,	// (0x0002c0e6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe16f,	// (0x0002c0e6) list_single_fs_bigclock_indicator_pane_t5

0x8f43,	// (0x00026eba) aid_cell_bcale_month_pane_ParamLimits

0x8f43,	// (0x00026eba) aid_cell_bcale_month_pane

0x8f61,	// (0x00026ed8) bcale_month_pane_ParamLimits

0x8f61,	// (0x00026ed8) bcale_month_pane

0x8f7f,	// (0x00026ef6) bcale_preview_pane_ParamLimits

0x8f7f,	// (0x00026ef6) bcale_preview_pane

0xec53,	// (0x0002cbca) list_single_fs_bigclock_pane_t1_ParamLimits

0xec72,	// (0x0002cbe9) list_single_fs_bigclock_pane_t2_ParamLimits

0xec72,	// (0x0002cbe9) list_single_fs_bigclock_pane_t2

0x0001,

0x0d52,	// (0x0001ecc9) list_single_fs_bigclock_pane_t_ParamLimits

0x0d52,	// (0x0001ecc9) list_single_fs_bigclock_pane_t

0xeed0,	// (0x0002ce47) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdb9,	// (0x0002dd30) main_fs_bigclock_unlock_btn_pane_g

0x974e,	// (0x000276c5) aid_dia3_key_size_ParamLimits

0x974e,	// (0x000276c5) aid_dia3_key_size

0x975a,	// (0x000276d1) aid_dia3_listrow_size_ParamLimits

0x975a,	// (0x000276d1) aid_dia3_listrow_size

0x976a,	// (0x000276e1) dia3_keypad_fun_pane_ParamLimits

0x976a,	// (0x000276e1) dia3_keypad_fun_pane

0x977c,	// (0x000276f3) dia3_keypad_num_pane_ParamLimits

0x977c,	// (0x000276f3) dia3_keypad_num_pane

0x978e,	// (0x00027705) dia3_listscroll_pane_ParamLimits

0x978e,	// (0x00027705) dia3_listscroll_pane

0x979c,	// (0x00027713) dia3_numentry_pane_ParamLimits

0x979c,	// (0x00027713) dia3_numentry_pane

0xeee6,	// (0x0002ce5d) dia3_list_pane

0xeef1,	// (0x0002ce68) scroll_pane_cp12

0x9c97,	// (0x00027c0e) bg_dia3_numentry_pane

0x97aa,	// (0x00027721) dia3_numentry_pane_t1

0x97b9,	// (0x00027730) cell_dia3_key_num_pane

0x97c1,	// (0x00027738) cell_dia3_key0_fun_pane_ParamLimits

0x97c1,	// (0x00027738) cell_dia3_key0_fun_pane

0x97ce,	// (0x00027745) cell_dia3_key1_fun_pane_ParamLimits

0x97ce,	// (0x00027745) cell_dia3_key1_fun_pane

0x97db,	// (0x00027752) dia3_listrow_pane

0xddd7,	// (0x0002bd4e) bg_dia3_numentry_pane_g1

0x9c97,	// (0x00027c0e) bg_button_pane_cp21

0xeefc,	// (0x0002ce73) cell_dia3_key_num_pane_t1

0xef0a,	// (0x0002ce81) cell_dia3_key_num_pane_t2

0xef19,	// (0x0002ce90) cell_dia3_key_num_pane_t3

0xef28,	// (0x0002ce9f) cell_dia3_key_num_pane_t4

0x0003,

0x0dd7,	// (0x0001ed4e) cell_dia3_key_num_pane_t

0x9c97,	// (0x00027c0e) bg_button_pane_cp19

0x97e8,	// (0x0002775f) cell_dia3_key0_fun_pane_g1

0x9c97,	// (0x00027c0e) bg_button_pane_cp20

0x97f0,	// (0x00027767) cell_dia3_key1_fun_pane_g1

0x97f8,	// (0x0002776f) area_left_week_number_pane

0x980b,	// (0x00027782) area_top_day_name_pane

0x9819,	// (0x00027790) frame_month_view_pane

0xef37,	// (0x0002ceae) grid_month_view_pane

0x982e,	// (0x000277a5) cell_top_day_name_pane_ParamLimits

0x982e,	// (0x000277a5) cell_top_day_name_pane

0x9848,	// (0x000277bf) cell_area_left_week_number_pane_ParamLimits

0x9848,	// (0x000277bf) cell_area_left_week_number_pane

0x986b,	// (0x000277e2) cell_month_view_pane_ParamLimits

0x986b,	// (0x000277e2) cell_month_view_pane

0xef45,	// (0x0002cebc) frm_month_g1

0x9897,	// (0x0002780e) frm_month_g2

0x98a8,	// (0x0002781f) frm_month_g3

0x98b9,	// (0x00027830) frm_month_g4

0x98ca,	// (0x00027841) frm_month_g5

0x98dd,	// (0x00027854) frm_month_g6

0x98f0,	// (0x00027867) frm_month_g7

0xef52,	// (0x0002cec9) frm_month_g8

0x9903,	// (0x0002787a) frm_month_g9

0x9910,	// (0x00027887) frm_month_g10

0x991d,	// (0x00027894) frm_month_g11

0x992a,	// (0x000278a1) frm_month_g12

0x9937,	// (0x000278ae) frm_month_g13

0x9944,	// (0x000278bb) frm_month_g14

0x9953,	// (0x000278ca) frm_month_g15

0x9962,	// (0x000278d9) frm_month_g16

0x000f,

0xfdd5,	// (0x0002dd4c) frm_month_g

0xef5f,	// (0x0002ced6) cell_top_day_name_pane_t1

0x9971,	// (0x000278e8) cell_area_left_week_number_pane_g1

0x9980,	// (0x000278f7) cell_area_left_week_number_pane_t1

0xc98a,	// (0x0002a901) cell_month_view_pane_g1

0x9996,	// (0x0002790d) cell_month_view_pane_t1

0x9c97,	// (0x00027c0e) main_fps_pane

0xe3a1,	// (0x0002c318) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3a1,	// (0x0002c318) cmail_ddmenu_btn02_pane_cp1

0xe3bd,	// (0x0002c334) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3bd,	// (0x0002c334) cmail_ddmenu_btn02_pane_cp2

0x91b4,	// (0x0002712b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91b4,	// (0x0002712b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd49,	// (0x0002dcc0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd49,	// (0x0002dcc0) cmail_ddmenu_btn02_pane_g

0x91d2,	// (0x00027149) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91d2,	// (0x00027149) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd4e,	// (0x0002dcc5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd4e,	// (0x0002dcc5) cmail_ddmenu_btn02_pane_t

0x99ac,	// (0x00027923) fps_text_pane_ParamLimits

0x99ac,	// (0x00027923) fps_text_pane

0x99b9,	// (0x00027930) main_fps_pane_g1_ParamLimits

0x99b9,	// (0x00027930) main_fps_pane_g1

0x99c7,	// (0x0002793e) wait_bar_pane_cp010_ParamLimits

0x99c7,	// (0x0002793e) wait_bar_pane_cp010

0x99d3,	// (0x0002794a) fps_text_pane_t1_ParamLimits

0x99d3,	// (0x0002794a) fps_text_pane_t1

0x6c98,	// (0x00024c0f) cam4_image_uncrop_pane_g1

0x6ca1,	// (0x00024c18) cam4_image_uncrop_pane_g2

0x6caa,	// (0x00024c21) cam4_image_uncrop_pane_g3

0x6cb3,	// (0x00024c2a) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0002d86b) cam4_image_uncrop_pane_g

0x97db,	// (0x00027752) dia3_listrow_pane_ParamLimits

0x9c97,	// (0x00027c0e) main_phob2_pane

0x8d19,	// (0x00026c90) cell_tport_appsw_pane_cp02_ParamLimits

0x8d19,	// (0x00026c90) cell_tport_appsw_pane_cp02

0x8d28,	// (0x00026c9f) cell_tport_appsw_pane_cp03_ParamLimits

0x8d28,	// (0x00026c9f) cell_tport_appsw_pane_cp03

0x9c97,	// (0x00027c0e) phob2_contact_card_pane

0x9c97,	// (0x00027c0e) phob2_listscroll_pane

0xef72,	// (0x0002cee9) phob2_list_pane

0xef7a,	// (0x0002cef1) scroll_pane_cp034

0x99ec,	// (0x00027963) phob2_cc_data_pane_ParamLimits

0x99ec,	// (0x00027963) phob2_cc_data_pane

0x9a06,	// (0x0002797d) phob2_cc_listscroll_pane_ParamLimits

0x9a06,	// (0x0002797d) phob2_cc_listscroll_pane

0x9a20,	// (0x00027997) list_double_large_graphic_phob2_pane_ParamLimits

0x9a20,	// (0x00027997) list_double_large_graphic_phob2_pane

0x9a42,	// (0x000279b9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a42,	// (0x000279b9) list_double_large_graphic_phob2_pane_g1

0x9a58,	// (0x000279cf) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a58,	// (0x000279cf) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfdf6,	// (0x0002dd6d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf6,	// (0x0002dd6d) list_double_large_graphic_phob2_pane_g

0x9a64,	// (0x000279db) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a64,	// (0x000279db) list_double_large_graphic_phob2_pane_t1

0x9a7a,	// (0x000279f1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a7a,	// (0x000279f1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfb,	// (0x0002dd72) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfb,	// (0x0002dd72) list_double_large_graphic_phob2_pane_t

0x9c97,	// (0x00027c0e) list_highlight_pane_cp024

0xef82,	// (0x0002cef9) phob2_cc_button_pane

0x9a8f,	// (0x00027a06) phob2_cc_data_pane_g1_ParamLimits

0x9a8f,	// (0x00027a06) phob2_cc_data_pane_g1

0x9a9b,	// (0x00027a12) phob2_cc_data_pane_g2_ParamLimits

0x9a9b,	// (0x00027a12) phob2_cc_data_pane_g2

0x0001,

0xfe00,	// (0x0002dd77) phob2_cc_data_pane_g_ParamLimits

0xfe00,	// (0x0002dd77) phob2_cc_data_pane_g

0x9aa7,	// (0x00027a1e) phob2_cc_data_pane_t1_ParamLimits

0x9aa7,	// (0x00027a1e) phob2_cc_data_pane_t1

0x9ab9,	// (0x00027a30) phob2_cc_data_pane_t2_ParamLimits

0x9ab9,	// (0x00027a30) phob2_cc_data_pane_t2

0x9acb,	// (0x00027a42) phob2_cc_data_pane_t3_ParamLimits

0x9acb,	// (0x00027a42) phob2_cc_data_pane_t3

0x0002,

0xfe05,	// (0x0002dd7c) phob2_cc_data_pane_t_ParamLimits

0xfe05,	// (0x0002dd7c) phob2_cc_data_pane_t

0xef8a,	// (0x0002cf01) phob2_cc_list_pane_ParamLimits

0xef8a,	// (0x0002cf01) phob2_cc_list_pane

0xd5c4,	// (0x0002b53b) scroll_pane_cp035_ParamLimits

0xd5c4,	// (0x0002b53b) scroll_pane_cp035

0xa3df,	// (0x00028356) bg_button_pane_cp033

0xef96,	// (0x0002cf0d) phob2_cc_button_pane_g1

0xefa2,	// (0x0002cf19) phob2_cc_button_pane_t1

0xefb7,	// (0x0002cf2e) phob2_cc_button_pane_t2

0x0001,

0x0e17,	// (0x0001ed8e) phob2_cc_button_pane_t

0x9add,	// (0x00027a54) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9add,	// (0x00027a54) list_double_large_graphic_phob2_cc_pane

0x9b0c,	// (0x00027a83) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b0c,	// (0x00027a83) list_double_large_graphic_phob2_cc_pane_g1

0x9b1d,	// (0x00027a94) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b1d,	// (0x00027a94) list_double_large_graphic_phob2_cc_pane_g2

0x9b2c,	// (0x00027aa3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b2c,	// (0x00027aa3) list_double_large_graphic_phob2_cc_pane_g3

0x9b3b,	// (0x00027ab2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b3b,	// (0x00027ab2) list_double_large_graphic_phob2_cc_pane_g4

0x9b4c,	// (0x00027ac3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b4c,	// (0x00027ac3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe0c,	// (0x0002dd83) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe0c,	// (0x0002dd83) list_double_large_graphic_phob2_cc_pane_g

0x9b5b,	// (0x00027ad2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b5b,	// (0x00027ad2) list_double_large_graphic_phob2_cc_pane_t1

0x9b84,	// (0x00027afb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b84,	// (0x00027afb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe17,	// (0x0002dd8e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe17,	// (0x0002dd8e) list_double_large_graphic_phob2_cc_pane_t

0xefc9,	// (0x0002cf40) list_highlight_pane_cp025_ParamLimits

0xefc9,	// (0x0002cf40) list_highlight_pane_cp025

0xa3df,	// (0x00028356) bg_button_pane_cp033_ParamLimits

0xef96,	// (0x0002cf0d) phob2_cc_button_pane_g1_ParamLimits

0xefa2,	// (0x0002cf19) phob2_cc_button_pane_t1_ParamLimits

0xefb7,	// (0x0002cf2e) phob2_cc_button_pane_t2_ParamLimits

0x0e17,	// (0x0001ed8e) phob2_cc_button_pane_t_ParamLimits

0x2745,	// (0x000206bc) popup_wgtman_window

0xd36a,	// (0x0002b2e1) scroll_pane_cp038

0x956e,	// (0x000274e5) wgtman_btn_pane_cp_01_ParamLimits

0x956e,	// (0x000274e5) wgtman_btn_pane_cp_01

0xefd7,	// (0x0002cf4e) wgtman_content_pane

0xefe0,	// (0x0002cf57) wgtman_heading_pane

0x9c97,	// (0x00027c0e) bg_heading_pane_cp02

0xefe9,	// (0x0002cf60) wgtman_heading_pane_g1

0xeff1,	// (0x0002cf68) wgtman_heading_pane_t1

0xefff,	// (0x0002cf76) scroll_pane_cp036

0xf007,	// (0x0002cf7e) wgtman_list_pane

0xf00f,	// (0x0002cf86) wgtman_list_pane_t1_ParamLimits

0xf00f,	// (0x0002cf86) wgtman_list_pane_t1

0x1f49,	// (0x0001fec0) cam4_grid_pane

0x7441,	// (0x000253b8) bg_button_pane_cp015_ParamLimits

0x7453,	// (0x000253ca) bg_button_pane_cp016_ParamLimits

0x7466,	// (0x000253dd) bg_button_pane_cp017_ParamLimits

0x74bc,	// (0x00025433) popup_vitu2_query_window_g3_ParamLimits

0x74bc,	// (0x00025433) popup_vitu2_query_window_g3

0x7577,	// (0x000254ee) popup_vitu2_query_window_t6_ParamLimits

0x7577,	// (0x000254ee) popup_vitu2_query_window_t6

0x75a2,	// (0x00025519) popup_vitu2_query_window_t7_ParamLimits

0x75a2,	// (0x00025519) popup_vitu2_query_window_t7

0xe9ac,	// (0x0002c923) cam4_grid_pane_g1

0xe9b5,	// (0x0002c92c) cam4_grid_pane_g2

0xf02b,	// (0x0002cfa2) cam4_grid_pane_g3

0xf034,	// (0x0002cfab) cam4_grid_pane_g4

0x0003,

0xfe1c,	// (0x0002dd93) cam4_grid_pane_g

0x3344,	// (0x000212bb) aid_placing_vt_slider_lsc_ParamLimits

0x3684,	// (0x000215fb) vidtel_button_pane_ParamLimits

0x3684,	// (0x000215fb) vidtel_button_pane

0xf03f,	// (0x0002cfb6) bg_button_pane_cp034

0x9bad,	// (0x00027b24) vidtel_button_pane_g1

0xf049,	// (0x0002cfc0) vidtel_button_pane_t1

0xd478,	// (0x0002b3ef) aid_size_vtel_slider_touch

0xd5c4,	// (0x0002b53b) scroll_pane_cp039

0xde15,	// (0x0002bd8c) ncim_query_button_pane_cp01_ParamLimits

0xde34,	// (0x0002bdab) ncimui_query_pane_g1_ParamLimits

0xa3df,	// (0x00028356) input_focus_pane_cp012_ParamLimits

0xde59,	// (0x0002bdd0) ncim_query_entry_pane_t1_ParamLimits

0xd5c4,	// (0x0002b53b) scroll_pane_cp039_ParamLimits

0x49fd,	// (0x00022974) navi_pane_bcale_mc_g1

0x4a05,	// (0x0002297c) navi_pane_bcale_mc_t1

0xe406,	// (0x0002c37d) main_sp_fs_email_pane_g1

0xe412,	// (0x0002c389) main_sp_fs_email_pane_g2

0x0001,

0x0bc8,	// (0x0001eb3f) main_sp_fs_email_pane_g

0xe850,	// (0x0002c7c7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe850,	// (0x0002c7c7) list_single_cale_mrui_row_pane_g3

0x91fa,	// (0x00027171) list_single_recal_day_pane_g5_event_pane

0xeada,	// (0x0002ca51) list_single_recal_day_pane_g7

0xf057,	// (0x0002cfce) list_recal_day_event_pane_cp01

0xf060,	// (0x0002cfd7) list_recal_vselct_arw_lo_pane_cp01

0xf068,	// (0x0002cfdf) list_recal_vselct_arw_up_pane_cp01

0xf070,	// (0x0002cfe7) list_recal_vselct_pane_cp01

0xd49a,	// (0x0002b411) list_recal_day_event_pane_cp01_g1

0xf07a,	// (0x0002cff1) list_recal_day_event_pane_cp01_t1

0xeae2,	// (0x0002ca59) list_single_recal_day_pane_t1_ParamLimits

0xeaf4,	// (0x0002ca6b) list_single_recal_day_pane_t2_ParamLimits

0x0d1a,	// (0x0001ec91) list_single_recal_day_pane_t_ParamLimits

0xa30f,	// (0x00028286) bg_notes_pane_ParamLimits

0xa3d1,	// (0x00028348) list_notes_pane_ParamLimits

0x29b9,	// (0x00020930) scroll_pane_cp06_ParamLimits

0xa401,	// (0x00028378) main_notes_pane_ParamLimits

0x9c97,	// (0x00027c0e) main_welc_pane

0x9bb5,	// (0x00027b2c) main_welc_body_pane_ParamLimits

0x9bb5,	// (0x00027b2c) main_welc_body_pane

0x9bce,	// (0x00027b45) main_welc_opti_pane_ParamLimits

0x9bce,	// (0x00027b45) main_welc_opti_pane

0x9c03,	// (0x00027b7a) main_welc_pane_t1_ParamLimits

0x9c03,	// (0x00027b7a) main_welc_pane_t1

0x9c21,	// (0x00027b98) main_welc_body_row_pane_ParamLimits

0x9c21,	// (0x00027b98) main_welc_body_row_pane

0xd196,	// (0x0002b10d) main_welc_opti_row_pane_ParamLimits

0xd196,	// (0x0002b10d) main_welc_opti_row_pane

0xf088,	// (0x0002cfff) main_welc_opti_row_pane_g1

0xf090,	// (0x0002d007) main_welc_opti_row_pane_t1

0xf0a0,	// (0x0002d017) main_welc_body_row_pane_t1

0xed59,	// (0x0002ccd0) popup_notif_wgt_heading_pane

0xed73,	// (0x0002ccea) aid_size_list_notif_wgt_del_ParamLimits

0xed80,	// (0x0002ccf7) list_notif_wgt_row_pane_g1_ParamLimits

0xed8c,	// (0x0002cd03) list_notif_wgt_row_pane_g2_ParamLimits

0xed98,	// (0x0002cd0f) list_notif_wgt_row_pane_g3_ParamLimits

0x0d81,	// (0x0001ecf8) list_notif_wgt_row_pane_g_ParamLimits

0xeda5,	// (0x0002cd1c) list_notif_wgt_row_pane_t1_ParamLimits

0xedba,	// (0x0002cd31) list_notif_wgt_row_pane_t2_ParamLimits

0xedcc,	// (0x0002cd43) list_notif_wgt_row_pane_t3_ParamLimits

0x0d88,	// (0x0001ecff) list_notif_wgt_row_pane_t_ParamLimits

0x95fe,	// (0x00027575) listrow_wgtman_pane_g1_ParamLimits

0x960b,	// (0x00027582) listrow_wgtman_pane_g2_ParamLimits

0xfdaf,	// (0x0002dd26) listrow_wgtman_pane_g_ParamLimits

0x9629,	// (0x000275a0) listrow_wgtman_pane_t1_ParamLimits

0x9641,	// (0x000275b8) listrow_wgtman_pane_t2_ParamLimits

0xfdb4,	// (0x0002dd2b) listrow_wgtman_pane_t_ParamLimits

0x9667,	// (0x000275de) wait_bar_pane_cp09_ParamLimits

0x9c97,	// (0x00027c0e) bg_popup_heading_pane_cp02

0xf0af,	// (0x0002d026) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x0002d02e) popup_notif_wgt_heading_pane_t1

0x9c97,	// (0x00027c0e) main_vids_pane

0x9c97,	// (0x00027c0e) vids_listscroll_pane

0x9c4d,	// (0x00027bc4) scroll_pane_cp040

0x9c97,	// (0x00027c0e) vids_list_pane

0x9c58,	// (0x00027bcf) vids_list_double_pane_ParamLimits

0x9c58,	// (0x00027bcf) vids_list_double_pane

0x9c70,	// (0x00027be7) vids_list_double_pane_g1

0x9c79,	// (0x00027bf0) vids_list_double_pane_t1

0x9c89,	// (0x00027c00) vids_list_double_pane_t2

0x0001,

0xfe2a,	// (0x0002dda1) vids_list_double_pane_t

0x159b,	// (0x0001f512) main_ncimui_pane_ParamLimits

0x80fe,	// (0x00026075) main_ncimui_pane_g1_ParamLimits

0x810a,	// (0x00026081) main_ncimui_pane_g2_ParamLimits

0x810a,	// (0x00026081) main_ncimui_pane_g2

0x0001,

0xfbce,	// (0x0002db45) main_ncimui_pane_g_ParamLimits

0xfbce,	// (0x0002db45) main_ncimui_pane_g

0x9be9,	// (0x00027b60) main_welc_pane_g1_ParamLimits

0x9be9,	// (0x00027b60) main_welc_pane_g1

0x9bf5,	// (0x00027b6c) main_welc_pane_g2_ParamLimits

0x9bf5,	// (0x00027b6c) main_welc_pane_g2

0x0001,

0xfe25,	// (0x0002dd9c) main_welc_pane_g_ParamLimits

0xfe25,	// (0x0002dd9c) main_welc_pane_g

0xa30f,	// (0x00028286) listscroll_mce_pane_ParamLimits

0x4ac7,	// (0x00022a3e) wait_bar_pane_cp10

0xc314,	// (0x0002a28b) main_cale_day_pane_ParamLimits

0xc314,	// (0x0002a28b) main_cale_week_pane_ParamLimits

0xa30f,	// (0x00028286) main_messa_pane_ParamLimits

0x6614,	// (0x0002458b) main_clock2_btn_pane_ParamLimits

0x6614,	// (0x0002458b) main_clock2_btn_pane

0xcb86,	// (0x0002aafd) main_clock2_btn_pane_cp01_ParamLimits

0xcb86,	// (0x0002aafd) main_clock2_btn_pane_cp01

0xe7dc,	// (0x0002c753) list_cale_mrui_pane_ParamLimits

0xee10,	// (0x0002cd87) main_cf0_pane_g2

0x0001,

0x0d8f,	// (0x0001ed06) main_cf0_pane_g

0x97f8,	// (0x0002776f) area_left_week_number_pane_ParamLimits

0x980b,	// (0x00027782) area_top_day_name_pane_ParamLimits

0x9819,	// (0x00027790) frame_month_view_pane_ParamLimits

0xef37,	// (0x0002ceae) grid_month_view_pane_ParamLimits

0xef45,	// (0x0002cebc) frm_month_g1_ParamLimits

0x9897,	// (0x0002780e) frm_month_g2_ParamLimits

0x98a8,	// (0x0002781f) frm_month_g3_ParamLimits

0x98b9,	// (0x00027830) frm_month_g4_ParamLimits

0x98ca,	// (0x00027841) frm_month_g5_ParamLimits

0x98dd,	// (0x00027854) frm_month_g6_ParamLimits

0x98f0,	// (0x00027867) frm_month_g7_ParamLimits

0xef52,	// (0x0002cec9) frm_month_g8_ParamLimits

0x9903,	// (0x0002787a) frm_month_g9_ParamLimits

0x9910,	// (0x00027887) frm_month_g10_ParamLimits

0x991d,	// (0x00027894) frm_month_g11_ParamLimits

0x992a,	// (0x000278a1) frm_month_g12_ParamLimits

0x9937,	// (0x000278ae) frm_month_g13_ParamLimits

0x9944,	// (0x000278bb) frm_month_g14_ParamLimits

0x9953,	// (0x000278ca) frm_month_g15_ParamLimits

0x9962,	// (0x000278d9) frm_month_g16_ParamLimits

0xfdd5,	// (0x0002dd4c) frm_month_g_ParamLimits

0xef5f,	// (0x0002ced6) cell_top_day_name_pane_t1_ParamLimits

0x9971,	// (0x000278e8) cell_area_left_week_number_pane_g1_ParamLimits

0x9980,	// (0x000278f7) cell_area_left_week_number_pane_t1_ParamLimits

0xc98a,	// (0x0002a901) cell_month_view_pane_g1_ParamLimits

0x9996,	// (0x0002790d) cell_month_view_pane_t1_ParamLimits

0xa307,	// (0x0002827e) main_clock2_btn_pane_g1

0xf0c5,	// (0x0002d03c) main_clock2_btn_pane_t1

0xa3df,	// (0x00028356) listscroll_cmail_pane_ParamLimits

0xe406,	// (0x0002c37d) main_sp_fs_email_pane_g1_ParamLimits

0xe412,	// (0x0002c389) main_sp_fs_email_pane_g2_ParamLimits

0x0bc8,	// (0x0001eb3f) main_sp_fs_email_pane_g_ParamLimits

0xea42,	// (0x0002c9b9) list_recal_day_pane_ParamLimits

0xea53,	// (0x0002c9ca) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal

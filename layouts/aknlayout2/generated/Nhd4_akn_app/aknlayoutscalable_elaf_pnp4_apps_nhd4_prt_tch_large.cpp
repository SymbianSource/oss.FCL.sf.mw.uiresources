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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007a429 };

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
0x20e7,	// (0x0007c510) Screen

0x20f3,	// (0x0007c51c) application_window

0x214f,	// (0x0007c578) area_bottom_pane_ParamLimits

0x214f,	// (0x0007c578) area_bottom_pane

0x21a8,	// (0x0007c5d1) area_top_pane_ParamLimits

0x21a8,	// (0x0007c5d1) area_top_pane

0x220c,	// (0x0007c635) call_video_uplink_pane_ParamLimits

0x220c,	// (0x0007c635) call_video_uplink_pane

0x224b,	// (0x0007c674) main_pane_ParamLimits

0x224b,	// (0x0007c674) main_pane

0xc8fb,	// (0x00086d24) context_pane

0x548c,	// (0x0007f8b5) navi_pane

0x54b2,	// (0x0007f8db) popup_cale_events_window_ParamLimits

0x54b2,	// (0x0007f8db) popup_cale_events_window

0xc90e,	// (0x00086d37) popup_mup_playback_window

0x54ca,	// (0x0007f8f3) signal_pane

0xa85e,	// (0x00084c87) main_browser_pane

0xaa35,	// (0x00084e5e) main_burst_pane

0x531c,	// (0x0007f745) main_calc_pane

0xc8e1,	// (0x00086d0a) main_cale_day_pane

0x2984,	// (0x0007cdad) main_cale_month_pane

0xc8e1,	// (0x00086d0a) main_cale_week_pane

0xaa35,	// (0x00084e5e) main_call_pane

0xa532,	// (0x0008495b) main_call_poc_pane

0xaa35,	// (0x00084e5e) main_camera_pane

0xaa35,	// (0x00084e5e) main_chi_dic_pane

0xb236,	// (0x0008565f) main_clock_pane

0xa532,	// (0x0008495b) main_fmradio_pane

0xaa35,	// (0x00084e5e) main_graph_messa_pane

0xa532,	// (0x0008495b) main_help_pane

0xa85e,	// (0x00084c87) main_im_pane

0xa78d,	// (0x00084bb6) main_image_pane_ParamLimits

0xa78d,	// (0x00084bb6) main_image_pane

0xa532,	// (0x0008495b) main_location2_pane

0xaa35,	// (0x00084e5e) main_location_pane

0xa78d,	// (0x00084bb6) main_messa_pane

0xa532,	// (0x0008495b) main_mp2_pane

0xaa35,	// (0x00084e5e) main_mp_pane

0xa532,	// (0x0008495b) main_msg_pane

0xa532,	// (0x0008495b) main_mup_eq_pane

0xa532,	// (0x0008495b) main_mup_pane

0xa85e,	// (0x00084c87) main_notes_pane

0xa532,	// (0x0008495b) main_pec_pane

0xa532,	// (0x0008495b) main_phob_pane

0xa532,	// (0x0008495b) main_pinb_pane

0xa532,	// (0x0008495b) main_postcard_pane

0xa532,	// (0x0008495b) main_qdial_pane

0xaa35,	// (0x00084e5e) main_skin_pane

0xa532,	// (0x0008495b) main_smil2_pane

0xaa35,	// (0x00084e5e) main_smil_pane

0xaa35,	// (0x00084e5e) main_video_pane

0xaa35,	// (0x00084e5e) main_video_tele_pane

0xa78d,	// (0x00084bb6) main_viewer_pane_ParamLimits

0xa78d,	// (0x00084bb6) main_viewer_pane

0xaa35,	// (0x00084e5e) main_vorec_pane

0x535a,	// (0x0007f783) popup_blid_sat_info_window_ParamLimits

0x535a,	// (0x0007f783) popup_blid_sat_info_window

0x537a,	// (0x0007f7a3) popup_dyc_status_message_window_ParamLimits

0x537a,	// (0x0007f7a3) popup_dyc_status_message_window

0x5388,	// (0x0007f7b1) popup_grid_large_graphic_window_ParamLimits

0x5388,	// (0x0007f7b1) popup_grid_large_graphic_window

0x5417,	// (0x0007f840) popup_loc_request_window_ParamLimits

0x5417,	// (0x0007f840) popup_loc_request_window

0x5464,	// (0x0007f88d) popup_wml_address_window_ParamLimits

0x5464,	// (0x0007f88d) popup_wml_address_window

0x51f4,	// (0x0007f61d) call_muted_g1

0x4eb0,	// (0x0007f2d9) popup_call_audio_conf_window_ParamLimits

0x4eb0,	// (0x0007f2d9) popup_call_audio_conf_window

0x5204,	// (0x0007f62d) popup_call_audio_first_window_ParamLimits

0x5204,	// (0x0007f62d) popup_call_audio_first_window

0x5244,	// (0x0007f66d) popup_call_audio_in_window_ParamLimits

0x5244,	// (0x0007f66d) popup_call_audio_in_window

0x5268,	// (0x0007f691) popup_call_audio_out_window_ParamLimits

0x5268,	// (0x0007f691) popup_call_audio_out_window

0x528a,	// (0x0007f6b3) popup_call_audio_second_window_ParamLimits

0x528a,	// (0x0007f6b3) popup_call_audio_second_window

0x52ba,	// (0x0007f6e3) popup_call_audio_wait_window_ParamLimits

0x52ba,	// (0x0007f6e3) popup_call_audio_wait_window

0x52db,	// (0x0007f704) popup_number_entry_window_ParamLimits

0x52db,	// (0x0007f704) popup_number_entry_window

0xa0d9,	// (0x00084502) bg_popup_call_pane_cp05_ParamLimits

0xa0d9,	// (0x00084502) bg_popup_call_pane_cp05

0xa0f9,	// (0x00084522) popup_number_entry_window_t1

0xa10c,	// (0x00084535) popup_number_entry_window_t2

0xa11e,	// (0x00084547) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000894f3) popup_number_entry_window_t

0xa130,	// (0x00084559) text_title_cp2

0xa143,	// (0x0008456c) bg_popup_call_pane_cp_ParamLimits

0xa143,	// (0x0008456c) bg_popup_call_pane_cp

0xa151,	// (0x0008457a) call_thumbnail_pane

0xa159,	// (0x00084582) popup_call_audio_in_window_g1_ParamLimits

0xa159,	// (0x00084582) popup_call_audio_in_window_g1

0xa165,	// (0x0008458e) popup_call_audio_in_window_g2_ParamLimits

0xa165,	// (0x0008458e) popup_call_audio_in_window_g2

0xa171,	// (0x0008459a) popup_call_audio_in_window_g3_ParamLimits

0xa171,	// (0x0008459a) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000894fc) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000894fc) popup_call_audio_in_window_g

0xa17d,	// (0x000845a6) popup_call_audio_in_window_t1_ParamLimits

0xa17d,	// (0x000845a6) popup_call_audio_in_window_t1

0xa199,	// (0x000845c2) popup_call_audio_in_window_t2_ParamLimits

0xa199,	// (0x000845c2) popup_call_audio_in_window_t2

0xa1b5,	// (0x000845de) popup_call_audio_in_window_t3_ParamLimits

0xa1b5,	// (0x000845de) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00089503) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00089503) popup_call_audio_in_window_t

0xa143,	// (0x0008456c) bg_popup_call_pane_cp01_ParamLimits

0xa143,	// (0x0008456c) bg_popup_call_pane_cp01

0xa151,	// (0x0008457a) call_thumbnail_pane_cp02

0xa1c8,	// (0x000845f1) call_type_pane_cp022

0xa1d0,	// (0x000845f9) popup_call_audio_out_window_g1_ParamLimits

0xa1d0,	// (0x000845f9) popup_call_audio_out_window_g1

0xa1e2,	// (0x0008460b) popup_call_audio_out_window_g2_ParamLimits

0xa1e2,	// (0x0008460b) popup_call_audio_out_window_g2

0xa1ee,	// (0x00084617) popup_call_audio_out_window_g3_ParamLimits

0xa1ee,	// (0x00084617) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0008950a) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0008950a) popup_call_audio_out_window_g

0xa200,	// (0x00084629) popup_call_audio_out_window_t1_ParamLimits

0xa200,	// (0x00084629) popup_call_audio_out_window_t1

0xa218,	// (0x00084641) popup_call_audio_out_window_t2_ParamLimits

0xa218,	// (0x00084641) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00089511) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00089511) popup_call_audio_out_window_t

0xa22d,	// (0x00084656) bg_popup_call_pane_ParamLimits

0xa22d,	// (0x00084656) bg_popup_call_pane

0x244f,	// (0x0007c878) call_thumbnail_pane_cp_ParamLimits

0x244f,	// (0x0007c878) call_thumbnail_pane_cp

0xa2b1,	// (0x000846da) call_type_pane_cp01_ParamLimits

0xa2b1,	// (0x000846da) call_type_pane_cp01

0xa2f5,	// (0x0008471e) popup_call_audio_first_window_g1_ParamLimits

0xa2f5,	// (0x0008471e) popup_call_audio_first_window_g1

0xa341,	// (0x0008476a) popup_call_audio_first_window_g2_ParamLimits

0xa341,	// (0x0008476a) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00089516) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00089516) popup_call_audio_first_window_g

0xa385,	// (0x000847ae) popup_call_audio_first_window_t1_ParamLimits

0xa385,	// (0x000847ae) popup_call_audio_first_window_t1

0xa448,	// (0x00084871) popup_call_audio_first_window_t4_ParamLimits

0xa448,	// (0x00084871) popup_call_audio_first_window_t4

0xa503,	// (0x0008492c) popup_call_audio_first_window_t5_ParamLimits

0xa503,	// (0x0008492c) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0008951b) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0008951b) popup_call_audio_first_window_t

0xa532,	// (0x0008495b) bg_popup_call_pane_cp02

0xa53c,	// (0x00084965) call_type_pane_cp023

0xa544,	// (0x0008496d) popup_call_audio_wait_window_g1

0xa54c,	// (0x00084975) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00089522) popup_call_audio_wait_window_g

0xa554,	// (0x0008497d) popup_call_audio_wait_window_t3

0xa562,	// (0x0008498b) bg_popup_call_pane_cp03_ParamLimits

0xa562,	// (0x0008498b) bg_popup_call_pane_cp03

0xa5c2,	// (0x000849eb) call_thumbnail_pane_cp011_ParamLimits

0xa5c2,	// (0x000849eb) call_thumbnail_pane_cp011

0xa5ce,	// (0x000849f7) call_type_pane_cp034_ParamLimits

0xa5ce,	// (0x000849f7) call_type_pane_cp034

0xa60a,	// (0x00084a33) popup_call_audio_second_window_g1_ParamLimits

0xa60a,	// (0x00084a33) popup_call_audio_second_window_g1

0xa646,	// (0x00084a6f) popup_call_audio_second_window_g2_ParamLimits

0xa646,	// (0x00084a6f) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00089527) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00089527) popup_call_audio_second_window_g

0xa682,	// (0x00084aab) popup_call_audio_second_window_t1_ParamLimits

0xa682,	// (0x00084aab) popup_call_audio_second_window_t1

0xa703,	// (0x00084b2c) popup_call_audio_second_window_t2_ParamLimits

0xa703,	// (0x00084b2c) popup_call_audio_second_window_t2

0xa739,	// (0x00084b62) popup_call_audio_second_window_t3_ParamLimits

0xa739,	// (0x00084b62) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0008952c) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0008952c) popup_call_audio_second_window_t

0xa532,	// (0x0008495b) bg_popup_call_pane_cp04

0xa76f,	// (0x00084b98) list_conf_pane

0xa777,	// (0x00084ba0) popup_call_audio_conf_window_t1

0xa785,	// (0x00084bae) call_thumbnail_pane_g1

0xa78d,	// (0x00084bb6) bg_pinb_pane_ParamLimits

0xa78d,	// (0x00084bb6) bg_pinb_pane

0xa79b,	// (0x00084bc4) find_pinb_pane

0xa7a4,	// (0x00084bcd) listscroll_pinb_pane_ParamLimits

0xa7a4,	// (0x00084bcd) listscroll_pinb_pane

0xa7b3,	// (0x00084bdc) pinb_bg_pane_g1

0x2473,	// (0x0007c89c) pinb_bg_pane_g2

0x247f,	// (0x0007c8a8) pinb_bg_pane_g3

0x248b,	// (0x0007c8b4) pinb_bg_pane_g4

0x2497,	// (0x0007c8c0) pinb_bg_pane_g5

0x24a3,	// (0x0007c8cc) pinb_bg_pane_g6

0x24ae,	// (0x0007c8d7) pinb_bg_pane_g7

0x24b9,	// (0x0007c8e2) pinb_bg_pane_g8

0x24c4,	// (0x0007c8ed) pinb_bg_pane_g9

0x24ce,	// (0x0007c8f7) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00089533) pinb_bg_pane_g

0x24eb,	// (0x0007c914) grid_pinb_pane

0x24f6,	// (0x0007c91f) list_pinb_pane

0x2501,	// (0x0007c92a) scroll_pane_cp01_ParamLimits

0x2501,	// (0x0007c92a) scroll_pane_cp01

0xa7bd,	// (0x00084be6) find_pinb_pane_g1_ParamLimits

0xa7bd,	// (0x00084be6) find_pinb_pane_g1

0xa7d5,	// (0x00084bfe) find_pinb_pane_t1

0xa7e7,	// (0x00084c10) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0008954d) find_pinb_pane_t

0xa7fc,	// (0x00084c25) input_focus_pane_cp01_ParamLimits

0xa7fc,	// (0x00084c25) input_focus_pane_cp01

0x2513,	// (0x0007c93c) cell_pinb_pane_ParamLimits

0x2513,	// (0x0007c93c) cell_pinb_pane

0x253e,	// (0x0007c967) cell_pinb_pane_g1_ParamLimits

0x253e,	// (0x0007c967) cell_pinb_pane_g1

0xa808,	// (0x00084c31) cell_pinb_pane_g2_ParamLimits

0xa808,	// (0x00084c31) cell_pinb_pane_g2

0xa814,	// (0x00084c3d) cell_pinb_pane_g3_ParamLimits

0xa814,	// (0x00084c3d) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00089552) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00089552) cell_pinb_pane_g

0xa532,	// (0x0008495b) grid_highlight_pane_cp01

0x2553,	// (0x0007c97c) list_pinb_item_pane_ParamLimits

0x2553,	// (0x0007c97c) list_pinb_item_pane

0xa532,	// (0x0008495b) list_highlight_pane_cp02

0x257c,	// (0x0007c9a5) list_pinb_item_pane_g1_ParamLimits

0x257c,	// (0x0007c9a5) list_pinb_item_pane_g1

0x2589,	// (0x0007c9b2) list_pinb_item_pane_g2_ParamLimits

0x2589,	// (0x0007c9b2) list_pinb_item_pane_g2

0x2595,	// (0x0007c9be) list_pinb_item_pane_g3_ParamLimits

0x2595,	// (0x0007c9be) list_pinb_item_pane_g3

0x25a6,	// (0x0007c9cf) list_pinb_item_pane_g4_ParamLimits

0x25a6,	// (0x0007c9cf) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00089559) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00089559) list_pinb_item_pane_g

0x25b2,	// (0x0007c9db) list_pinb_item_pane_t1_ParamLimits

0x25b2,	// (0x0007c9db) list_pinb_item_pane_t1

0x25e3,	// (0x0007ca0c) calc_display_pane

0x2601,	// (0x0007ca2a) calc_paper_pane

0x261d,	// (0x0007ca46) grid_calc_pane

0xa532,	// (0x0008495b) bg_list_pane_cp01

0x2649,	// (0x0007ca72) clock_g1

0x2651,	// (0x0007ca7a) clock_g2

0x0001,

0xf139,	// (0x00089562) clock_g

0x265b,	// (0x0007ca84) clock_t1_ParamLimits

0x265b,	// (0x0007ca84) clock_t1

0x2670,	// (0x0007ca99) clock_t2_ParamLimits

0x2670,	// (0x0007ca99) clock_t2

0x2682,	// (0x0007caab) clock_t3_ParamLimits

0x2682,	// (0x0007caab) clock_t3

0x2694,	// (0x0007cabd) clock_t4_ParamLimits

0x2694,	// (0x0007cabd) clock_t4

0x26a6,	// (0x0007cacf) clock_t5_ParamLimits

0x26a6,	// (0x0007cacf) clock_t5

0x26bb,	// (0x0007cae4) clock_t6_ParamLimits

0x26bb,	// (0x0007cae4) clock_t6

0x26cd,	// (0x0007caf6) clock_t7_ParamLimits

0x26cd,	// (0x0007caf6) clock_t7

0x26df,	// (0x0007cb08) clock_t8_ParamLimits

0x26df,	// (0x0007cb08) clock_t8

0x26f5,	// (0x0007cb1e) clock_t9_ParamLimits

0x26f5,	// (0x0007cb1e) clock_t9

0x0008,

0xf13e,	// (0x00089567) clock_t_ParamLimits

0xf13e,	// (0x00089567) clock_t

0xa820,	// (0x00084c49) popup_clock_analogue_window_cp02

0xa820,	// (0x00084c49) popup_clock_digital_window_cp01

0xa828,	// (0x00084c51) listscroll_help_pane

0xa532,	// (0x0008495b) phob_pre_status_pane

0xa832,	// (0x00084c5b) grid_qdial_pane

0xa78d,	// (0x00084bb6) listscroll_mce_pane

0xa78d,	// (0x00084bb6) bg_notes_pane

0xa83c,	// (0x00084c65) list_notes_pane

0x270b,	// (0x0007cb34) scroll_pane_cp06

0xa84a,	// (0x00084c73) bg_calc_paper_pane

0x271a,	// (0x0007cb43) list_calc_pane

0xa85e,	// (0x00084c87) bg_calc_display_pane

0x2734,	// (0x0007cb5d) calc_display_pane_t1

0x2749,	// (0x0007cb72) calc_display_pane_t2

0x275e,	// (0x0007cb87) calc_display_pane_t3

0x0002,

0xf151,	// (0x0008957a) calc_display_pane_t

0x2770,	// (0x0007cb99) cell_calc_pane_ParamLimits

0x2770,	// (0x0007cb99) cell_calc_pane

0xa86a,	// (0x00084c93) bg_calc_paper_pane_g1

0xa882,	// (0x00084cab) bg_calc_paper_pane_g2

0xa876,	// (0x00084c9f) bg_calc_paper_pane_g3

0xa88e,	// (0x00084cb7) bg_calc_paper_pane_g4

0xa89a,	// (0x00084cc3) bg_calc_paper_pane_g5

0x279d,	// (0x0007cbc6) bg_calc_paper_pane_g6

0x27ae,	// (0x0007cbd7) bg_calc_paper_pane_g7

0x27bf,	// (0x0007cbe8) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00089581) bg_calc_paper_pane_g

0x27d0,	// (0x0007cbf9) calc_bg_paper_pane_g9

0x27e1,	// (0x0007cc0a) list_calc_item_pane_ParamLimits

0x27e1,	// (0x0007cc0a) list_calc_item_pane

0xa8a6,	// (0x00084ccf) list_calc_item_pane_g1

0x2811,	// (0x0007cc3a) list_calc_item_pane_t1_ParamLimits

0x2811,	// (0x0007cc3a) list_calc_item_pane_t1

0x2823,	// (0x0007cc4c) list_calc_item_pane_t2_ParamLimits

0x2823,	// (0x0007cc4c) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00089592) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00089592) list_calc_item_pane_t

0xa8b3,	// (0x00084cdc) cell_calc_pane_g1

0xa8bd,	// (0x00084ce6) grid_highlight_pane_cp02

0xa8df,	// (0x00084d08) bg_calc_display_pane_g1

0x2853,	// (0x0007cc7c) bg_calc_display_pane_g2

0xa8e8,	// (0x00084d11) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0008959c) bg_calc_display_pane_g

0x285d,	// (0x0007cc86) cell_qdial_pane_ParamLimits

0x285d,	// (0x0007cc86) cell_qdial_pane

0x2871,	// (0x0007cc9a) cell_qdial_pane_g1_ParamLimits

0x2871,	// (0x0007cc9a) cell_qdial_pane_g1

0x287e,	// (0x0007cca7) cell_qdial_pane_g2_ParamLimits

0x287e,	// (0x0007cca7) cell_qdial_pane_g2

0xa8f1,	// (0x00084d1a) cell_qdial_pane_g3_ParamLimits

0xa8f1,	// (0x00084d1a) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000895a3) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000895a3) cell_qdial_pane_g

0x289b,	// (0x0007ccc4) cell_qdial_pane_t1_ParamLimits

0x289b,	// (0x0007ccc4) cell_qdial_pane_t1

0x28b3,	// (0x0007ccdc) cell_qdial_pane_t2_ParamLimits

0x28b3,	// (0x0007ccdc) cell_qdial_pane_t2

0x28c6,	// (0x0007ccef) cell_qdial_pane_t3_ParamLimits

0x28c6,	// (0x0007ccef) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000895ac) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000895ac) cell_qdial_pane_t

0xa532,	// (0x0008495b) grid_highlight_pane_cp04

0xa8fd,	// (0x00084d26) thumbnail_qdial_pane_ParamLimits

0xa8fd,	// (0x00084d26) thumbnail_qdial_pane

0xa959,	// (0x00084d82) list_help_pane

0xa962,	// (0x00084d8b) scroll_pane_cp02

0x28d9,	// (0x0007cd02) help_list_pane_t1_ParamLimits

0x28d9,	// (0x0007cd02) help_list_pane_t1

0x2910,	// (0x0007cd39) bg_notes_pane_g2

0x2918,	// (0x0007cd41) bg_notes_pane_g3

0x2920,	// (0x0007cd49) notes_bg_pane_g1

0x2928,	// (0x0007cd51) notes_bg_pane_g4

0x2930,	// (0x0007cd59) notes_bg_pane_g5

0x2938,	// (0x0007cd61) notes_bg_pane_g6

0x2940,	// (0x0007cd69) notes_bg_pane_g7

0x2948,	// (0x0007cd71) notes_bg_pane_g8

0x2950,	// (0x0007cd79) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000895ca) notes_bg_pane_g

0x2958,	// (0x0007cd81) list_notes_text_pane_ParamLimits

0x2958,	// (0x0007cd81) list_notes_text_pane

0xa96b,	// (0x00084d94) list_notes_text_pane_g1

0x0e14,	// (0x0007b23d) list_notes_text_pane_t1

0x2984,	// (0x0007cdad) listscroll_cale_week_pane

0x29a9,	// (0x0007cdd2) bg_cale_heading_pane

0xa98e,	// (0x00084db7) bg_cale_pane_cp01

0x29cb,	// (0x0007cdf4) cale_week_corner_pane

0x29e5,	// (0x0007ce0e) cale_week_day_heading_pane

0x2a07,	// (0x0007ce30) cale_week_scroll_pane_g1

0x2a24,	// (0x0007ce4d) cale_week_scroll_pane_g2

0x2a37,	// (0x0007ce60) cale_week_scroll_pane_g3

0x2a4a,	// (0x0007ce73) cale_week_scroll_pane_g4

0x2a5d,	// (0x0007ce86) cale_week_scroll_pane_g5

0x2a70,	// (0x0007ce99) cale_week_scroll_pane_g6

0x2a83,	// (0x0007ceac) cale_week_scroll_pane_g7

0x2a98,	// (0x0007cec1) cale_week_scroll_pane_g8

0x2aad,	// (0x0007ced6) cale_week_scroll_pane_g9

0x2ac0,	// (0x0007cee9) cale_week_scroll_pane_g10

0x2ad3,	// (0x0007cefc) cale_week_scroll_pane_g11

0x2ae6,	// (0x0007cf0f) cale_week_scroll_pane_g12

0x2afd,	// (0x0007cf26) cale_week_scroll_pane_g13

0x2b18,	// (0x0007cf41) cale_week_scroll_pane_g14

0x2b33,	// (0x0007cf5c) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000895d9) cale_week_scroll_pane_g

0x2b63,	// (0x0007cf8c) cale_week_time_pane

0x2b78,	// (0x0007cfa1) grid_cale_week_pane

0xa9bd,	// (0x00084de6) scroll_pane_cp08

0x2b97,	// (0x0007cfc0) cell_cale_week_pane_ParamLimits

0x2b97,	// (0x0007cfc0) cell_cale_week_pane

0x2bf9,	// (0x0007d022) cale_week_day_heading_pane_t1

0x2c14,	// (0x0007d03d) cale_week_day_heading_pane_t2

0x2c2f,	// (0x0007d058) cale_week_day_heading_pane_t3

0x2c4a,	// (0x0007d073) cale_week_day_heading_pane_t4

0x2c65,	// (0x0007d08e) cale_week_day_heading_pane_t5

0x2c80,	// (0x0007d0a9) cale_week_day_heading_pane_t6

0x2c9b,	// (0x0007d0c4) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000895fa) cale_week_day_heading_pane_t

0xa9da,	// (0x00084e03) bg_cale_side_pane

0x2cb6,	// (0x0007d0df) cale_week_time_pane_t1

0x2cd0,	// (0x0007d0f9) cale_week_time_pane_t2

0x2cea,	// (0x0007d113) cale_week_time_pane_t3

0x2d04,	// (0x0007d12d) cale_week_time_pane_t4

0x2d1e,	// (0x0007d147) cale_week_time_pane_t5

0x2d38,	// (0x0007d161) cale_week_time_pane_t6

0x2d58,	// (0x0007d181) cale_week_time_pane_t7

0x2d7a,	// (0x0007d1a3) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00089609) cale_week_time_pane_t

0x2d9e,	// (0x0007d1c7) cell_cale_week_pane_g2

0x2dc2,	// (0x0007d1eb) cell_cale_week_pane_g3_ParamLimits

0x2dc2,	// (0x0007d1eb) cell_cale_week_pane_g3

0xa9e8,	// (0x00084e11) grid_highlight_pane_cp07

0xa9f0,	// (0x00084e19) listscroll_gms_pane

0xa9fa,	// (0x00084e23) grid_gms_pane

0xaa03,	// (0x00084e2c) listscroll_gms_pane_g1

0xaa0b,	// (0x00084e34) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0008961a) listscroll_gms_pane_g

0x2dda,	// (0x0007d203) scroll_pane_cp010

0x2de5,	// (0x0007d20e) cell_gms_pane_ParamLimits

0x2de5,	// (0x0007d20e) cell_gms_pane

0x2df5,	// (0x0007d21e) cell_gms_pane_g1

0xaa13,	// (0x00084e3c) cell_gms_pane_g2

0xaa1b,	// (0x00084e44) cell_gms_pane_g3

0xaa24,	// (0x00084e4d) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0008961f) cell_gms_pane_g

0xaa2d,	// (0x00084e56) grid_highlight_pane_cp09

0x519c,	// (0x0007f5c5) phob_pre_status_pane_g1

0x51a4,	// (0x0007f5cd) phob_pre_status_pane_g2

0x51ac,	// (0x0007f5d5) phob_pre_status_pane_g3

0x51b4,	// (0x0007f5dd) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x00089a1d) phob_pre_status_pane_g

0x51c4,	// (0x0007f5ed) phob_pre_status_pane_t1

0x51d4,	// (0x0007f5fd) phob_pre_status_pane_t2

0x51e4,	// (0x0007f60d) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x00089a28) phob_pre_status_pane_t

0xaa35,	// (0x00084e5e) bg_list_pane_cp05

0x2e05,	// (0x0007d22e) grid_vorec_pane

0x2e0f,	// (0x0007d238) vorec_t1

0x2e1d,	// (0x0007d246) vorec_t2

0x2e2b,	// (0x0007d254) vorec_t3

0x2e39,	// (0x0007d262) vorec_t4

0xa073,	// (0x0008449c) vorec_t5

0xa081,	// (0x000844aa) vorec_t6

0x0004,

0xf1ff,	// (0x00089628) vorec_t

0xa08f,	// (0x000844b8) wait_bar_pane_cp01

0x2e55,	// (0x0007d27e) cell_vorec_pane_ParamLimits

0x2e55,	// (0x0007d27e) cell_vorec_pane

0x2e68,	// (0x0007d291) cell_vorec_pane_g1

0xa532,	// (0x0008495b) grid_highlight_pane_cp05

0x2e82,	// (0x0007d2ab) cams_zoom_pane

0x2e8e,	// (0x0007d2b7) image_vga_pane

0x2e9d,	// (0x0007d2c6) main_camera_pane_g1

0x2eab,	// (0x0007d2d4) main_camera_pane_g2

0x2eb7,	// (0x0007d2e0) main_camera_pane_g3

0x2ec3,	// (0x0007d2ec) main_camera_pane_g4

0x2ecf,	// (0x0007d2f8) main_camera_pane_g5

0x2edb,	// (0x0007d304) main_camera_pane_g6

0x2ee7,	// (0x0007d310) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00089633) main_camera_pane_g

0x2ef3,	// (0x0007d31c) main_camera_pane_t1

0x2f05,	// (0x0007d32e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00089644) main_camera_pane_t

0x2f26,	// (0x0007d34f) cams_zoom_pane_cp_ParamLimits

0x2f26,	// (0x0007d34f) cams_zoom_pane_cp

0x2f4a,	// (0x0007d373) image_cif_pane_ParamLimits

0x2f4a,	// (0x0007d373) image_cif_pane

0x2f68,	// (0x0007d391) image_subqcif_pane

0x2f70,	// (0x0007d399) main_video_pane_g1_ParamLimits

0x2f70,	// (0x0007d399) main_video_pane_g1

0x2f90,	// (0x0007d3b9) main_video_pane_g2_ParamLimits

0x2f90,	// (0x0007d3b9) main_video_pane_g2

0x2fc0,	// (0x0007d3e9) main_video_pane_g3_ParamLimits

0x2fc0,	// (0x0007d3e9) main_video_pane_g3

0x2fe9,	// (0x0007d412) main_video_pane_g4_ParamLimits

0x2fe9,	// (0x0007d412) main_video_pane_g4

0x3012,	// (0x0007d43b) main_video_pane_g5_ParamLimits

0x3012,	// (0x0007d43b) main_video_pane_g5

0xaa49,	// (0x00084e72) main_video_pane_g6_ParamLimits

0xaa49,	// (0x00084e72) main_video_pane_g6

0x0006,

0xf220,	// (0x00089649) main_video_pane_g_ParamLimits

0xf220,	// (0x00089649) main_video_pane_g

0x3034,	// (0x0007d45d) main_video_pane_t1_ParamLimits

0x3034,	// (0x0007d45d) main_video_pane_t1

0xaa63,	// (0x00084e8c) cams_zoom_pane_g1

0xaa6c,	// (0x00084e95) cams_zoom_pane_g2

0xaa75,	// (0x00084e9e) cams_zoom_pane_g3

0xaa7e,	// (0x00084ea7) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00089658) cams_zoom_pane_g

0x307e,	// (0x0007d4a7) grid_cams_pane

0x308c,	// (0x0007d4b5) linegrid_cams_pane

0x309a,	// (0x0007d4c3) cell_cams_pane_ParamLimits

0x309a,	// (0x0007d4c3) cell_cams_pane

0xaa87,	// (0x00084eb0) cams_burst_image_pane

0xaa8f,	// (0x00084eb8) cell_cams_pane_g1

0xa532,	// (0x0008495b) grid_highlight_pane_cp03

0xa8b3,	// (0x00084cdc) mp_bg_pane_g1

0xa532,	// (0x0008495b) bg_list_pane_cp03

0xc806,	// (0x00086c2f) bg_mp_pane

0xc80e,	// (0x00086c37) grid_mp_pane

0xc816,	// (0x00086c3f) media_player_g1

0xc81e,	// (0x00086c47) media_player_t1

0xc82c,	// (0x00086c55) media_player_t2

0xc83a,	// (0x00086c63) media_player_t3

0xc848,	// (0x00086c71) media_player_t4

0xc856,	// (0x00086c7f) media_player_t5

0xc864,	// (0x00086c8d) media_player_t6

0xc872,	// (0x00086c9b) media_player_t7

0x0006,

0xf5de,	// (0x00089a07) media_player_t

0xc880,	// (0x00086ca9) wait_bar_pane_cp02

0xf5c3,	// (0x000899ec) main_usb_pane_t

0x5193,	// (0x0007f5bc) cell_mp_pane

0xa8b3,	// (0x00084cdc) cell_mp_pane_g1

0xa532,	// (0x0008495b) grid_highlight_pane_cp06

0xaa97,	// (0x00084ec0) grid_skin_colour_pane

0xaa9f,	// (0x00084ec8) list_highlight_pane_cp03

0x30ad,	// (0x0007d4d6) skin_g1

0xaaa7,	// (0x00084ed0) skin_t1

0xaab6,	// (0x00084edf) skin_t2

0x0001,

0xf264,	// (0x0008968d) skin_t

0x30b7,	// (0x0007d4e0) cell_skin_colour_pane_ParamLimits

0x30b7,	// (0x0007d4e0) cell_skin_colour_pane

0xaac4,	// (0x00084eed) cell_skin_colour_pane_g1

0x313b,	// (0x0007d564) call_video_g1_ParamLimits

0x313b,	// (0x0007d564) call_video_g1

0x314b,	// (0x0007d574) call_video_g2_ParamLimits

0x314b,	// (0x0007d574) call_video_g2

0x0001,

0xf269,	// (0x00089692) call_video_g_ParamLimits

0xf269,	// (0x00089692) call_video_g

0x31a5,	// (0x0007d5ce) call_video_uplink_pane_cp1_ParamLimits

0x31a5,	// (0x0007d5ce) call_video_uplink_pane_cp1

0xaad6,	// (0x00084eff) call_video_uplink_pane_cp2

0x3271,	// (0x0007d69a) video_down_crop_pane_ParamLimits

0x3271,	// (0x0007d69a) video_down_crop_pane

0x3363,	// (0x0007d78c) video_down_pane_ParamLimits

0x3363,	// (0x0007d78c) video_down_pane

0xaade,	// (0x00084f07) video_down_subqcif_pane_ParamLimits

0xaade,	// (0x00084f07) video_down_subqcif_pane

0xaaf6,	// (0x00084f1f) video_down_subqcif_pane_cp_ParamLimits

0xaaf6,	// (0x00084f1f) video_down_subqcif_pane_cp

0xab1c,	// (0x00084f45) im_reading_pane_ParamLimits

0xab1c,	// (0x00084f45) im_reading_pane

0x3483,	// (0x0007d8ac) im_writing_pane_ParamLimits

0x3483,	// (0x0007d8ac) im_writing_pane

0x34a1,	// (0x0007d8ca) im_reading_pane_t1

0xab36,	// (0x00084f5f) list_im_pane

0xab47,	// (0x00084f70) scroll_pane_cp07

0x34f9,	// (0x0007d922) im_writing_pane_t1_ParamLimits

0x34f9,	// (0x0007d922) im_writing_pane_t1

0xab60,	// (0x00084f89) im_writing_pane_t2_ParamLimits

0xab60,	// (0x00084f89) im_writing_pane_t2

0x0001,

0xf273,	// (0x0008969c) im_writing_pane_t_ParamLimits

0xf273,	// (0x0008969c) im_writing_pane_t

0xa532,	// (0x0008495b) input_focus_pane_cp04

0xa532,	// (0x0008495b) input_focus_pane_cp05

0x350b,	// (0x0007d934) list_im_single_pane_ParamLimits

0x350b,	// (0x0007d934) list_im_single_pane

0x3532,	// (0x0007d95b) list_single_im_pane_t1

0x5157,	// (0x0007f580) blid_accuracy_pane

0x515f,	// (0x0007f588) blid_compass_pane

0x5169,	// (0x0007f592) main_location_t1

0x5177,	// (0x0007f5a0) main_location_t2

0x5185,	// (0x0007f5ae) main_location_t3

0x0002,

0xf5ed,	// (0x00089a16) main_location_t

0xa532,	// (0x0008495b) aid_levels_location

0xa8b3,	// (0x00084cdc) blid_accuracy_pane_g1

0xa8b3,	// (0x00084cdc) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000896fe) blid_accuracy_pane_g

0xaba8,	// (0x00084fd1) wml_content_pane

0xabe6,	// (0x0008500f) wml_button_pane_ParamLimits

0xabe6,	// (0x0008500f) wml_button_pane

0x3541,	// (0x0007d96a) wml_list_single_large_pane_ParamLimits

0x3541,	// (0x0007d96a) wml_list_single_large_pane

0x356c,	// (0x0007d995) wml_list_single_medium_pane_ParamLimits

0x356c,	// (0x0007d995) wml_list_single_medium_pane

0x359e,	// (0x0007d9c7) wml_list_single_small_pane_ParamLimits

0x359e,	// (0x0007d9c7) wml_list_single_small_pane

0xabfa,	// (0x00085023) wml_selection_box_pane_ParamLimits

0xabfa,	// (0x00085023) wml_selection_box_pane

0xac0d,	// (0x00085036) wml_list_single_pane_t1

0xac1c,	// (0x00085045) wml_list_single_medium_pane_t1

0xac2b,	// (0x00085054) wml_list_single_large_pane_t1

0xac3a,	// (0x00085063) input_focus_pane_cp02_ParamLimits

0xac3a,	// (0x00085063) input_focus_pane_cp02

0xac4d,	// (0x00085076) wml_selection_box_pane_g1

0xac56,	// (0x0008507f) wml_selection_box_pane_t1_ParamLimits

0xac56,	// (0x0008507f) wml_selection_box_pane_t1

0xa78d,	// (0x00084bb6) bg_wml_button_pane_ParamLimits

0xa78d,	// (0x00084bb6) bg_wml_button_pane

0xac6e,	// (0x00085097) wml_button_pane_g1

0xac76,	// (0x0008509f) wml_button_pane_t1

0xac6e,	// (0x00085097) wml_button_bg_pane_g1

0xac86,	// (0x000850af) wml_button_bg_pane_g2

0xac8e,	// (0x000850b7) wml_button_bg_pane_g3

0xac96,	// (0x000850bf) wml_button_bg_pane_g4

0xac9e,	// (0x000850c7) wml_button_bg_pane_g5

0xaca6,	// (0x000850cf) wml_button_bg_pane_g6

0xacae,	// (0x000850d7) wml_button_bg_pane_g7

0xacb6,	// (0x000850df) wml_button_bg_pane_g8

0xacbe,	// (0x000850e7) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000896a1) wml_button_bg_pane_g

0x35db,	// (0x0007da04) bg_list_pane_cp02

0xacc6,	// (0x000850ef) mce_header_pane_ParamLimits

0xacc6,	// (0x000850ef) mce_header_pane

0xacfa,	// (0x00085123) mce_icon_pane

0xacfa,	// (0x00085123) mce_image_pane

0xad03,	// (0x0008512c) mce_text_pane_ParamLimits

0xad03,	// (0x0008512c) mce_text_pane

0x35e5,	// (0x0007da0e) scroll_pane_cp03

0xabde,	// (0x00085007) scroll_pane_cp04

0xad16,	// (0x0008513f) scroll_pane_cp05_ParamLimits

0xad16,	// (0x0008513f) scroll_pane_cp05

0x35ef,	// (0x0007da18) mce_header_field_pane_ParamLimits

0x35ef,	// (0x0007da18) mce_header_field_pane

0x360f,	// (0x0007da38) mce_header_field_pane_2_ParamLimits

0x360f,	// (0x0007da38) mce_header_field_pane_2

0x3625,	// (0x0007da4e) mce_header_field_pane_3

0x362d,	// (0x0007da56) list_single_mce_message_pane_ParamLimits

0x362d,	// (0x0007da56) list_single_mce_message_pane

0x365b,	// (0x0007da84) list_single_mce_smart_pane_ParamLimits

0x365b,	// (0x0007da84) list_single_mce_smart_pane

0xad22,	// (0x0008514b) input_focus_pane_cp03

0xad2b,	// (0x00085154) list_header_data_pane

0x3694,	// (0x0007dabd) mce_header_field_pane_t1

0x36a2,	// (0x0007dacb) list_single_mce_header_pane_ParamLimits

0x36a2,	// (0x0007dacb) list_single_mce_header_pane

0xad33,	// (0x0008515c) list_single_mce_header_pane_t1

0xad42,	// (0x0008516b) list_single_mce_message_pane_g1

0xad4a,	// (0x00085173) list_single_mce_message_pane_t1

0x36f8,	// (0x0007db21) bg_cale_heading_pane_cp01_ParamLimits

0x36f8,	// (0x0007db21) bg_cale_heading_pane_cp01

0xad58,	// (0x00085181) bg_cale_pane_cp02_ParamLimits

0xad58,	// (0x00085181) bg_cale_pane_cp02

0x3746,	// (0x0007db6f) cale_month_corner_pane

0x3765,	// (0x0007db8e) cale_month_day_heading_pane_ParamLimits

0x3765,	// (0x0007db8e) cale_month_day_heading_pane

0x37cb,	// (0x0007dbf4) cale_month_pane_g1_ParamLimits

0x37cb,	// (0x0007dbf4) cale_month_pane_g1

0x380e,	// (0x0007dc37) cale_month_pane_g2_ParamLimits

0x380e,	// (0x0007dc37) cale_month_pane_g2

0x3848,	// (0x0007dc71) cale_month_pane_g3_ParamLimits

0x3848,	// (0x0007dc71) cale_month_pane_g3

0x3898,	// (0x0007dcc1) cale_month_pane_g4_ParamLimits

0x3898,	// (0x0007dcc1) cale_month_pane_g4

0x38e8,	// (0x0007dd11) cale_month_pane_g5_ParamLimits

0x38e8,	// (0x0007dd11) cale_month_pane_g5

0x3938,	// (0x0007dd61) cale_month_pane_g6_ParamLimits

0x3938,	// (0x0007dd61) cale_month_pane_g6

0x3988,	// (0x0007ddb1) cale_month_pane_g7_ParamLimits

0x3988,	// (0x0007ddb1) cale_month_pane_g7

0x39f0,	// (0x0007de19) cale_month_pane_g8_ParamLimits

0x39f0,	// (0x0007de19) cale_month_pane_g8

0x3a58,	// (0x0007de81) cale_month_pane_g9_ParamLimits

0x3a58,	// (0x0007de81) cale_month_pane_g9

0x3ab6,	// (0x0007dedf) cale_month_pane_g10_ParamLimits

0x3ab6,	// (0x0007dedf) cale_month_pane_g10

0x3b14,	// (0x0007df3d) cale_month_pane_g11_ParamLimits

0x3b14,	// (0x0007df3d) cale_month_pane_g11

0x3b68,	// (0x0007df91) cale_month_pane_g12_ParamLimits

0x3b68,	// (0x0007df91) cale_month_pane_g12

0x3bbe,	// (0x0007dfe7) cale_month_pane_g13_ParamLimits

0x3bbe,	// (0x0007dfe7) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000896b4) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000896b4) cale_month_pane_g

0x3c14,	// (0x0007e03d) cale_month_week_pane

0x3c38,	// (0x0007e061) grid_cale_month_pane_ParamLimits

0x3c38,	// (0x0007e061) grid_cale_month_pane

0x3c95,	// (0x0007e0be) cale_month_day_heading_pane_t1

0x3d1b,	// (0x0007e144) cale_month_day_heading_pane_t2

0x3d94,	// (0x0007e1bd) cale_month_day_heading_pane_t3

0x3e0d,	// (0x0007e236) cale_month_day_heading_pane_t4

0x3e86,	// (0x0007e2af) cale_month_day_heading_pane_t5

0x3eff,	// (0x0007e328) cale_month_day_heading_pane_t6

0x3f78,	// (0x0007e3a1) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000896cf) cale_month_day_heading_pane_t

0xa9da,	// (0x00084e03) bg_cale_side_pane_cp01

0x4009,	// (0x0007e432) cale_month_week_pane_t1

0x4022,	// (0x0007e44b) cale_month_week_pane_t2

0x403b,	// (0x0007e464) cale_month_week_pane_t3

0x4054,	// (0x0007e47d) cale_month_week_pane_t4

0x406f,	// (0x0007e498) cale_month_week_pane_t5

0x4090,	// (0x0007e4b9) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000896de) cale_month_week_pane_t

0x40b1,	// (0x0007e4da) cell_cale_month_pane_ParamLimits

0x40b1,	// (0x0007e4da) cell_cale_month_pane

0x41d7,	// (0x0007e600) cell_cale_month_pane_g1

0x41e3,	// (0x0007e60c) cell_cale_month_pane_t1_ParamLimits

0x41e3,	// (0x0007e60c) cell_cale_month_pane_t1

0xa9e8,	// (0x00084e11) grid_highlight_pane_cp08

0xa8b3,	// (0x00084cdc) main_smil_g1

0x420f,	// (0x0007e638) smil_status_pane

0xad97,	// (0x000851c0) smil_text_pane

0xc6e6,	// (0x00086b0f) bg_popup_call3_rect_pane_g8

0xc6ee,	// (0x00086b17) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00089997) bg_popup_call3_rect_pane_g

0xc975,	// (0x00086d9e) smil_status_volume_pane_g1

0xada1,	// (0x000851ca) smil_status_pane_t1

0x5580,	// (0x0007f9a9) volume_smil_pane

0xadb8,	// (0x000851e1) list_smil_text_pane

0x4222,	// (0x0007e64b) scroll_pane_cp011

0x422d,	// (0x0007e656) smil_text_list_pane_t1_ParamLimits

0x422d,	// (0x0007e656) smil_text_list_pane_t1

0x42ba,	// (0x0007e6e3) aid_volume_smil_ParamLimits

0x42ba,	// (0x0007e6e3) aid_volume_smil

0xa8b3,	// (0x00084cdc) smil_volume_pane_g1

0xa8b3,	// (0x00084cdc) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000896fe) smil_volume_pane_g

0x2984,	// (0x0007cdad) listscroll_cale_day_pane

0xadc2,	// (0x000851eb) bg_cale_pane

0xadda,	// (0x00085203) list_cale_pane

0xadfd,	// (0x00085226) scroll_pane_cp09

0xae0e,	// (0x00085237) cale_bg_pane_g1

0xae16,	// (0x0008523f) cale_bg_pane_g2

0xae1e,	// (0x00085247) cale_bg_pane_g3

0xae26,	// (0x0008524f) cale_bg_pane_g4

0xae2e,	// (0x00085257) cale_bg_pane_g5

0xae36,	// (0x0008525f) cale_bg_pane_g6

0xae3e,	// (0x00085267) cale_bg_pane_g7

0xae46,	// (0x0008526f) cale_bg_pane_g8

0xae4e,	// (0x00085277) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00089703) cale_bg_pane_g

0x42e4,	// (0x0007e70d) list_cale_time_pane_ParamLimits

0x42e4,	// (0x0007e70d) list_cale_time_pane

0xae56,	// (0x0008527f) list_cale_time_pane_g1_ParamLimits

0xae56,	// (0x0008527f) list_cale_time_pane_g1

0xae62,	// (0x0008528b) list_cale_time_pane_g2_ParamLimits

0xae62,	// (0x0008528b) list_cale_time_pane_g2

0x430c,	// (0x0007e735) list_cale_time_pane_g3_ParamLimits

0x430c,	// (0x0007e735) list_cale_time_pane_g3

0x431a,	// (0x0007e743) list_cale_time_pane_g4_ParamLimits

0x431a,	// (0x0007e743) list_cale_time_pane_g4

0x4328,	// (0x0007e751) list_cale_time_pane_g5_ParamLimits

0x4328,	// (0x0007e751) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00089716) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00089716) list_cale_time_pane_g

0xae7c,	// (0x000852a5) list_cale_time_pane_t1_ParamLimits

0xae7c,	// (0x000852a5) list_cale_time_pane_t1

0xaea4,	// (0x000852cd) list_cale_time_pane_t2_ParamLimits

0xaea4,	// (0x000852cd) list_cale_time_pane_t2

0x4607,	// (0x0007ea30) aid_blid_cardinal_pane

0x4649,	// (0x0007ea72) compass_pane_t4

0xaecc,	// (0x000852f5) list_cale_time_pane_t4_ParamLimits

0xaecc,	// (0x000852f5) list_cale_time_pane_t4

0x4657,	// (0x0007ea80) compass_pane_t5

0x4667,	// (0x0007ea90) compass_pane_t6

0x4675,	// (0x0007ea9e) compass_pane_t7

0xb350,	// (0x00085779) navi_pane_cc_t1

0xb549,	// (0x00085972) aid_phob_thumbnail_center_pane

0x4c58,	// (0x0007f081) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00089723) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00089723) list_cale_time_pane_t

0xa143,	// (0x0008456c) bg_popup_window_pane_cp02_ParamLimits

0xa143,	// (0x0008456c) bg_popup_window_pane_cp02

0xaef4,	// (0x0008531d) heading_pane_cp01_ParamLimits

0xaef4,	// (0x0008531d) heading_pane_cp01

0xaf00,	// (0x00085329) loc_req_pane_ParamLimits

0xaf00,	// (0x00085329) loc_req_pane

0xaf10,	// (0x00085339) loc_type_pane_ParamLimits

0xaf10,	// (0x00085339) loc_type_pane

0xaf22,	// (0x0008534b) loc_type_pane_t1_ParamLimits

0xaf22,	// (0x0008534b) loc_type_pane_t1

0xaf34,	// (0x0008535d) loc_type_pane_t2_ParamLimits

0xaf34,	// (0x0008535d) loc_type_pane_t2

0xaf46,	// (0x0008536f) loc_type_pane_t3_ParamLimits

0xaf46,	// (0x0008536f) loc_type_pane_t3

0x0002,

0xf301,	// (0x0008972a) loc_type_pane_t_ParamLimits

0xf301,	// (0x0008972a) loc_type_pane_t

0xaf58,	// (0x00085381) list_loc_req_pane

0xaf62,	// (0x0008538b) scroll_pane_cp012

0x0f43,	// (0x0007b36c) list_single_loc_request_popup_menu_pane_ParamLimits

0x0f43,	// (0x0007b36c) list_single_loc_request_popup_menu_pane

0xaf6d,	// (0x00085396) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf6d,	// (0x00085396) list_single_loc_request_popup_menu_pane_g1

0xaf79,	// (0x000853a2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf79,	// (0x000853a2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00089731) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00089731) list_single_loc_request_popup_menu_pane_g

0xaf85,	// (0x000853ae) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf85,	// (0x000853ae) list_single_loc_request_popup_menu_pane_t1

0x4336,	// (0x0007e75f) bg_popup_window_pane_cp03_ParamLimits

0x4336,	// (0x0007e75f) bg_popup_window_pane_cp03

0x4344,	// (0x0007e76d) heading_loc_req_pane_ParamLimits

0x4344,	// (0x0007e76d) heading_loc_req_pane

0x4350,	// (0x0007e779) popup_dyc_status_message_window_g1_ParamLimits

0x4350,	// (0x0007e779) popup_dyc_status_message_window_g1

0x435c,	// (0x0007e785) popup_dyc_status_message_window_t1_ParamLimits

0x435c,	// (0x0007e785) popup_dyc_status_message_window_t1

0x436e,	// (0x0007e797) popup_dyc_status_message_window_t2_ParamLimits

0x436e,	// (0x0007e797) popup_dyc_status_message_window_t2

0x4380,	// (0x0007e7a9) popup_dyc_status_message_window_t3_ParamLimits

0x4380,	// (0x0007e7a9) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00089736) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00089736) popup_dyc_status_message_window_t

0xa532,	// (0x0008495b) bg_heading_pane_cp01

0xaf9b,	// (0x000853c4) heading_loc_req_pane_g1

0xafa3,	// (0x000853cc) heading_loc_req_pane_g2

0xafab,	// (0x000853d4) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0008973d) heading_loc_req_pane_g

0xafb3,	// (0x000853dc) heading_loc_req_pane_t1

0xafc2,	// (0x000853eb) bg_popup_sub_pane_cp01_ParamLimits

0xafc2,	// (0x000853eb) bg_popup_sub_pane_cp01

0xafd0,	// (0x000853f9) popup_cale_events_window_g1_ParamLimits

0xafd0,	// (0x000853f9) popup_cale_events_window_g1

0xaffc,	// (0x00085425) popup_cale_events_window_g2_ParamLimits

0xaffc,	// (0x00085425) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00089771) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00089771) popup_cale_events_window_g

0xb01c,	// (0x00085445) popup_cale_events_window_t1_ParamLimits

0xb01c,	// (0x00085445) popup_cale_events_window_t1

0xb02e,	// (0x00085457) popup_cale_events_window_t2_ParamLimits

0xb02e,	// (0x00085457) popup_cale_events_window_t2

0xb06c,	// (0x00085495) popup_cale_events_window_t3_ParamLimits

0xb06c,	// (0x00085495) popup_cale_events_window_t3

0xb0a6,	// (0x000854cf) popup_cale_events_window_t4_ParamLimits

0xb0a6,	// (0x000854cf) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00089776) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00089776) popup_cale_events_window_t

0x43aa,	// (0x0007e7d3) call_type_pane

0xb505,	// (0x0008592e) popup_call_status_window_g1

0x43b6,	// (0x0007e7df) popup_call_status_window_g2

0x43c2,	// (0x0007e7eb) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0008977f) popup_call_status_window_g

0xb0dc,	// (0x00085505) call_type_pane_g1

0xb0e5,	// (0x0008550e) call_type_pane_g2

0x0001,

0xf35d,	// (0x00089786) call_type_pane_g

0xa532,	// (0x0008495b) bg_popup_sub_pane_cp02

0xb0ee,	// (0x00085517) listscroll_popup_wml_pane

0xb0f6,	// (0x0008551f) list_wml_pane

0xb100,	// (0x00085529) scroll_pane_cp013

0xb10b,	// (0x00085534) list_single_graphic_popup_wml_pane_ParamLimits

0xb10b,	// (0x00085534) list_single_graphic_popup_wml_pane

0xa8b3,	// (0x00084cdc) list_single_graphic_popup_wml_pane_g1

0xb11f,	// (0x00085548) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0008978b) list_single_graphic_popup_wml_pane_g

0xb127,	// (0x00085550) list_single_graphic_popup_wml_pane_t1

0xb13d,	// (0x00085566) aid_call_pane

0xa785,	// (0x00084bae) popup_clock_analogue_window_g1

0xa785,	// (0x00084bae) popup_clock_analogue_window_g2

0x43ce,	// (0x0007e7f7) popup_clock_analogue_window_g3

0x43ce,	// (0x0007e7f7) popup_clock_analogue_window_g4

0xa8b3,	// (0x00084cdc) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00089790) popup_clock_analogue_window_g

0x43d6,	// (0x0007e7ff) popup_clock_analogue_window_t1

0x43e4,	// (0x0007e80d) clock_digital_number_pane_ParamLimits

0x43e4,	// (0x0007e80d) clock_digital_number_pane

0x43f0,	// (0x0007e819) clock_digital_number_pane_cp02_ParamLimits

0x43f0,	// (0x0007e819) clock_digital_number_pane_cp02

0x43fc,	// (0x0007e825) clock_digital_number_pane_cp03_ParamLimits

0x43fc,	// (0x0007e825) clock_digital_number_pane_cp03

0x4408,	// (0x0007e831) clock_digital_number_pane_cp04_ParamLimits

0x4408,	// (0x0007e831) clock_digital_number_pane_cp04

0x4414,	// (0x0007e83d) clock_digital_separator_pane_ParamLimits

0x4414,	// (0x0007e83d) clock_digital_separator_pane

0x4420,	// (0x0007e849) popup_clock_digital_window_t1

0xa8b3,	// (0x00084cdc) clock_digital_number_pane_g1

0xa8b3,	// (0x00084cdc) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000896fe) clock_digital_number_pane_g

0xa8b3,	// (0x00084cdc) clock_digital_separator_pane_g1

0xa8b3,	// (0x00084cdc) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000896fe) clock_digital_separator_pane_g

0xa532,	// (0x0008495b) bg_popup_window_pane_cp04

0xb145,	// (0x0008556e) heading_pane_cp03

0xb14d,	// (0x00085576) listscroll_popup_gms_pane

0xb155,	// (0x0008557e) grid_large_graphic_popup_pane

0xb15f,	// (0x00085588) listscroll_popup_gms_pane_g1

0xb167,	// (0x00085590) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0008979b) listscroll_popup_gms_pane_g

0xabde,	// (0x00085007) scroll_pane_cp014

0x443d,	// (0x0007e866) cell_large_graphic_popup_pane_ParamLimits

0x443d,	// (0x0007e866) cell_large_graphic_popup_pane

0x4455,	// (0x0007e87e) cell_large_graphic_popup_pane_g1_ParamLimits

0x4455,	// (0x0007e87e) cell_large_graphic_popup_pane_g1

0xb16f,	// (0x00085598) cell_large_graphic_popup_pane_g2_ParamLimits

0xb16f,	// (0x00085598) cell_large_graphic_popup_pane_g2

0xb17b,	// (0x000855a4) cell_large_graphic_popup_pane_g3_ParamLimits

0xb17b,	// (0x000855a4) cell_large_graphic_popup_pane_g3

0xb188,	// (0x000855b1) cell_large_graphic_popup_pane_g4_ParamLimits

0xb188,	// (0x000855b1) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000897a0) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000897a0) cell_large_graphic_popup_pane_g

0xb198,	// (0x000855c1) grid_highlight_pane_cp010

0xa8b3,	// (0x00084cdc) bg_popup_call_pane_g1

0xb1a2,	// (0x000855cb) list_single_graphic_popup_conf_pane_ParamLimits

0xb1a2,	// (0x000855cb) list_single_graphic_popup_conf_pane

0xb1b5,	// (0x000855de) list_highlight_pane_cp01

0xb1be,	// (0x000855e7) list_single_graphic_popup_conf_pane_g1

0xb1c6,	// (0x000855ef) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000897a9) list_single_graphic_popup_conf_pane_g

0xb1ce,	// (0x000855f7) list_single_graphic_popup_conf_pane_t1

0xb1dc,	// (0x00085605) linegrid_cams_pane_g1

0x4461,	// (0x0007e88a) linegrid_cams_pane_g2

0xaa1b,	// (0x00084e44) linegrid_cams_pane_g3

0xb1e5,	// (0x0008560e) linegrid_cams_pane_g4

0x446a,	// (0x0007e893) linegrid_cams_pane_g5

0x4473,	// (0x0007e89c) linegrid_cams_pane_g6

0xaa24,	// (0x00084e4d) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000897ae) linegrid_cams_pane_g

0xb1ee,	// (0x00085617) popup_clock_analogue_window

0xb1ee,	// (0x00085617) popup_clock_digital_window

0xa532,	// (0x0008495b) popup_phob_thumbnail_window

0xa8b3,	// (0x00084cdc) call_video_uplink_pane_g1

0xb1f7,	// (0x00085620) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000897bd) call_video_uplink_pane_g

0xb1ff,	// (0x00085628) video_uplink_pane

0xb207,	// (0x00085630) mce_image_pane_g1

0x447c,	// (0x0007e8a5) mce_image_pane_g2

0x4484,	// (0x0007e8ad) mce_image_pane_g3

0x448c,	// (0x0007e8b5) mce_image_pane_g4

0x4494,	// (0x0007e8bd) mce_image_pane_g5

0x0004,

0xf399,	// (0x000897c2) mce_image_pane_g

0xb211,	// (0x0008563a) control_top_pane_stacon_cp01_ParamLimits

0xb211,	// (0x0008563a) control_top_pane_stacon_cp01

0xb225,	// (0x0008564e) uni_indicator_pane_stacon_cp01_ParamLimits

0xb225,	// (0x0008564e) uni_indicator_pane_stacon_cp01

0xb236,	// (0x0008565f) bg_popup_sub_pane_cp03

0x449c,	// (0x0007e8c5) chi_dic_find_pane

0x44a4,	// (0x0007e8cd) listscroll_chi_dic_pane

0x44ad,	// (0x0007e8d6) main_pane_chidic_g1

0x44c0,	// (0x0007e8e9) chi_dic_find_pane_t1

0xb240,	// (0x00085669) find_chidic_pane

0xb249,	// (0x00085672) chi_dic_list_pane_ParamLimits

0xb249,	// (0x00085672) chi_dic_list_pane

0xb25a,	// (0x00085683) scroll_pane_cp020

0x44ce,	// (0x0007e8f7) find_chidic_pane_t1

0xa532,	// (0x0008495b) input_focus_pane_cp06

0x44dd,	// (0x0007e906) list_chi_dic_pane_ParamLimits

0x44dd,	// (0x0007e906) list_chi_dic_pane

0x44fa,	// (0x0007e923) list_chi_dic_pane_t1_ParamLimits

0x44fa,	// (0x0007e923) list_chi_dic_pane_t1

0xa532,	// (0x0008495b) list_highlight_pane_cp020

0xb262,	// (0x0008568b) bg_cale_heading_pane_g1

0x450d,	// (0x0007e936) bg_cale_heading_pane_g2

0x4515,	// (0x0007e93e) bg_cale_heading_pane_g3

0x451d,	// (0x0007e946) bg_cale_heading_pane_g4

0x4527,	// (0x0007e950) bg_cale_heading_pane_g5

0x4531,	// (0x0007e95a) bg_cale_heading_pane_g6

0x4539,	// (0x0007e962) bg_cale_heading_pane_g7

0x4541,	// (0x0007e96a) bg_cale_heading_pane_g8

0x454b,	// (0x0007e974) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000897cd) bg_cale_heading_pane_g

0xb262,	// (0x0008568b) bg_cale_side_pane_g1

0x4555,	// (0x0007e97e) bg_cale_side_pane_g2

0x455f,	// (0x0007e988) bg_cale_side_pane_g3

0x4569,	// (0x0007e992) bg_cale_side_pane_g4

0x4573,	// (0x0007e99c) bg_cale_side_pane_g5

0x457d,	// (0x0007e9a6) bg_cale_side_pane_g6

0x4587,	// (0x0007e9b0) bg_cale_side_pane_g7

0x4591,	// (0x0007e9ba) bg_cale_side_pane_g8

0x4599,	// (0x0007e9c2) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000897e0) bg_cale_side_pane_g

0x45a1,	// (0x0007e9ca) popup_call_status_window_ParamLimits

0x45a1,	// (0x0007e9ca) popup_call_status_window

0xb26a,	// (0x00085693) stacon_top_pane

0xb272,	// (0x0008569b) status_pane_ParamLimits

0xb272,	// (0x0008569b) status_pane

0xb287,	// (0x000856b0) status_small_pane

0xb28f,	// (0x000856b8) control_pane

0xa532,	// (0x0008495b) stacon_bottom_pane

0xb297,	// (0x000856c0) list_single_mce_smart_pane_t1_ParamLimits

0xb297,	// (0x000856c0) list_single_mce_smart_pane_t1

0xb2aa,	// (0x000856d3) list_single_mce_smart_pane_t2_ParamLimits

0xb2aa,	// (0x000856d3) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000897f3) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000897f3) list_single_mce_smart_pane_t

0x45ad,	// (0x0007e9d6) compass_pane

0x45b9,	// (0x0007e9e2) main_location2_pane_t1

0x45cd,	// (0x0007e9f6) main_location2_pane_t2

0x45e1,	// (0x0007ea0a) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000897f8) main_location2_pane_t

0xb2c9,	// (0x000856f2) compass_pane_g1_ParamLimits

0xb2c9,	// (0x000856f2) compass_pane_g1

0x462b,	// (0x0007ea54) compass_pane_t1

0x463a,	// (0x0007ea63) compass_pane_t2

0x0005,

0xf3d8,	// (0x00089801) compass_pane_t

0x4685,	// (0x0007eaae) text_secondary_cp61

0xb347,	// (0x00085770) navi_pane_cams_g5

0xb3c3,	// (0x000857ec) navi_pane_im_t1

0xb3d1,	// (0x000857fa) navi_pane_mp_g1_ParamLimits

0xb3d1,	// (0x000857fa) navi_pane_mp_g1

0xb3e5,	// (0x0008580e) navi_pane_mp_g2_ParamLimits

0xb3e5,	// (0x0008580e) navi_pane_mp_g2

0xb3f1,	// (0x0008581a) navi_pane_mp_g3_ParamLimits

0xb3f1,	// (0x0008581a) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00089815) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00089815) navi_pane_mp_g

0xb3fd,	// (0x00085826) navi_pane_mp_t1

0xb40b,	// (0x00085834) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0008981c) navi_pane_mp_t

0xb476,	// (0x0008589f) navi_pane_vt_g1

0xb3fd,	// (0x00085826) navi_pane_vt_t1

0xb47e,	// (0x000858a7) navi_slider_pane

0xaa35,	// (0x00084e5e) zooming_pane

0xb48e,	// (0x000858b7) navi_slider_pane_g1

0x46c0,	// (0x0007eae9) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00089823) navi_slider_pane_g

0xb4b2,	// (0x000858db) aid_levels_zoom

0xb4ba,	// (0x000858e3) zooming_pane_g1

0xb4c2,	// (0x000858eb) zooming_pane_g2

0xb4c2,	// (0x000858eb) zooming_pane_g3

0x0002,

0xf409,	// (0x00089832) zooming_pane_g

0xb4ca,	// (0x000858f3) level_10_zoom

0xb4d3,	// (0x000858fc) level_11_zoom

0xb4dc,	// (0x00085905) level_1_zoom

0xb4e5,	// (0x0008590e) level_2_zoom

0xb4ee,	// (0x00085917) level_3_zoom

0xb513,	// (0x0008593c) level_4_zoom

0xb51c,	// (0x00085945) level_5_zoom

0xb525,	// (0x0008594e) level_6_zoom

0xb52e,	// (0x00085957) level_7_zoom

0xb537,	// (0x00085960) level_8_zoom

0xb540,	// (0x00085969) level_9_zoom

0xb551,	// (0x0008597a) popup_phob_thumbnail_window_g1

0xb559,	// (0x00085982) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00089839) popup_phob_thumbnail_window_g

0xc888,	// (0x00086cb1) level_1_location

0xc890,	// (0x00086cb9) level_2_location

0xc898,	// (0x00086cc1) level_3_location

0xc8a0,	// (0x00086cc9) level_4_location

0xaa35,	// (0x00084e5e) level_5_location

0x46d2,	// (0x0007eafb) mce_icon_pane_g1

0x46da,	// (0x0007eb03) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0008983e) mce_icon_pane_g

0x46e2,	// (0x0007eb0b) main_mup_pane_g1_ParamLimits

0x46e2,	// (0x0007eb0b) main_mup_pane_g1

0x46fa,	// (0x0007eb23) main_mup_pane_g2_ParamLimits

0x46fa,	// (0x0007eb23) main_mup_pane_g2

0x470e,	// (0x0007eb37) main_mup_pane_g3_ParamLimits

0x470e,	// (0x0007eb37) main_mup_pane_g3

0x4722,	// (0x0007eb4b) main_mup_pane_g4_ParamLimits

0x4722,	// (0x0007eb4b) main_mup_pane_g4

0x473e,	// (0x0007eb67) main_mup_pane_g5_ParamLimits

0x473e,	// (0x0007eb67) main_mup_pane_g5

0x475f,	// (0x0007eb88) main_mup_pane_g6_ParamLimits

0x475f,	// (0x0007eb88) main_mup_pane_g6

0x477b,	// (0x0007eba4) main_mup_pane_g7_ParamLimits

0x477b,	// (0x0007eba4) main_mup_pane_g7

0x4797,	// (0x0007ebc0) main_mup_pane_g8_ParamLimits

0x4797,	// (0x0007ebc0) main_mup_pane_g8

0x47b3,	// (0x0007ebdc) main_mup_pane_g9_ParamLimits

0x47b3,	// (0x0007ebdc) main_mup_pane_g9

0x47d2,	// (0x0007ebfb) main_mup_pane_g10_ParamLimits

0x47d2,	// (0x0007ebfb) main_mup_pane_g10

0x47f1,	// (0x0007ec1a) main_mup_pane_g11_ParamLimits

0x47f1,	// (0x0007ec1a) main_mup_pane_g11

0x4809,	// (0x0007ec32) main_mup_pane_g12_ParamLimits

0x4809,	// (0x0007ec32) main_mup_pane_g12

0x4817,	// (0x0007ec40) main_mup_pane_g13_ParamLimits

0x4817,	// (0x0007ec40) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00089843) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00089843) main_mup_pane_g

0x482d,	// (0x0007ec56) main_mup_pane_t1_ParamLimits

0x482d,	// (0x0007ec56) main_mup_pane_t1

0x484a,	// (0x0007ec73) main_mup_pane_t2_ParamLimits

0x484a,	// (0x0007ec73) main_mup_pane_t2

0x4864,	// (0x0007ec8d) main_mup_pane_t3_ParamLimits

0x4864,	// (0x0007ec8d) main_mup_pane_t3

0x487e,	// (0x0007eca7) main_mup_pane_t4_ParamLimits

0x487e,	// (0x0007eca7) main_mup_pane_t4

0x4890,	// (0x0007ecb9) main_mup_pane_t5_ParamLimits

0x4890,	// (0x0007ecb9) main_mup_pane_t5

0x48a2,	// (0x0007eccb) main_mup_pane_t6_ParamLimits

0x48a2,	// (0x0007eccb) main_mup_pane_t6

0x0005,

0xf435,	// (0x0008985e) main_mup_pane_t_ParamLimits

0xf435,	// (0x0008985e) main_mup_pane_t

0x48b8,	// (0x0007ece1) mup_progress_pane_ParamLimits

0x48b8,	// (0x0007ece1) mup_progress_pane

0x48c4,	// (0x0007eced) mup_visualizer_pane_ParamLimits

0x48c4,	// (0x0007eced) mup_visualizer_pane

0x4902,	// (0x0007ed2b) mup_volume_pane_ParamLimits

0x4902,	// (0x0007ed2b) mup_volume_pane

0xb505,	// (0x0008592e) mup_visualizer_pane_g1_ParamLimits

0xb505,	// (0x0008592e) mup_visualizer_pane_g1

0xb505,	// (0x0008592e) mup_visualizer_pane_g2_ParamLimits

0xb505,	// (0x0008592e) mup_visualizer_pane_g2

0xb2c9,	// (0x000856f2) mup_visualizer_pane_g3_ParamLimits

0xb2c9,	// (0x000856f2) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0008986b) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0008986b) mup_visualizer_pane_g

0xa8b3,	// (0x00084cdc) mup_volume_pane_g1

0xb569,	// (0x00085992) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00089872) mup_volume_pane_g

0xa8b3,	// (0x00084cdc) mup_progress_pane_g1

0xb572,	// (0x0008599b) mup_progress_pane_g2

0xb57b,	// (0x000859a4) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00089877) mup_progress_pane_g

0xa532,	// (0x0008495b) bg_popup_window_pane_cp05

0xb584,	// (0x000859ad) heading_pane_cp02_ParamLimits

0xb584,	// (0x000859ad) heading_pane_cp02

0xb59e,	// (0x000859c7) list_popup_blid_pane

0xb5a6,	// (0x000859cf) list_blid_sat_info_pane_ParamLimits

0xb5a6,	// (0x000859cf) list_blid_sat_info_pane

0xb5b9,	// (0x000859e2) list_blid_sat_info_pane_g1

0xb5c1,	// (0x000859ea) list_blid_sat_info_pane_t1

0x4a0d,	// (0x0007ee36) mup_equalizer_pane_ParamLimits

0x4a0d,	// (0x0007ee36) mup_equalizer_pane

0x4a2e,	// (0x0007ee57) mup_equalizer_pane_cp1_ParamLimits

0x4a2e,	// (0x0007ee57) mup_equalizer_pane_cp1

0x4a4f,	// (0x0007ee78) mup_equalizer_pane_cp2_ParamLimits

0x4a4f,	// (0x0007ee78) mup_equalizer_pane_cp2

0x4a70,	// (0x0007ee99) mup_equalizer_pane_cp3_ParamLimits

0x4a70,	// (0x0007ee99) mup_equalizer_pane_cp3

0x4a91,	// (0x0007eeba) mup_equalizer_pane_cp4_ParamLimits

0x4a91,	// (0x0007eeba) mup_equalizer_pane_cp4

0x4ab2,	// (0x0007eedb) mup_equalizer_pane_cp5

0x4ac8,	// (0x0007eef1) mup_equalizer_pane_cp6

0x4ae0,	// (0x0007ef09) mup_equalizer_pane_cp7

0xc766,	// (0x00086b8f) bg_popup_call_poc_act_pane_g9

0xc76e,	// (0x00086b97) bg_popup_call_poc_act_pane_g10

0xc776,	// (0x00086b9f) bg_popup_call_poc_act_pane_g11

0x000a,

0xa78d,	// (0x00084bb6) mup_scale_pane

0xa8b3,	// (0x00084cdc) mup_scale_pane_g1

0xb5cf,	// (0x000859f8) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00089893) mup_scale_pane_g

0xb5f3,	// (0x00085a1c) msg_data_pane

0xb5fb,	// (0x00085a24) scroll_pane_cp017

0x102c,	// (0x0007b455) bg_list_pane_cp04_ParamLimits

0x102c,	// (0x0007b455) bg_list_pane_cp04

0xb603,	// (0x00085a2c) msg_data_pane_g1

0x4b0a,	// (0x0007ef33) msg_data_pane_g2

0x4b12,	// (0x0007ef3b) msg_data_pane_g3

0x4b1a,	// (0x0007ef43) msg_data_pane_g4

0x4b22,	// (0x0007ef4b) msg_data_pane_g5

0x4b2a,	// (0x0007ef53) msg_data_pane_g6

0x4b32,	// (0x0007ef5b) msg_data_pane_g7

0x0006,

0xf479,	// (0x000898a2) msg_data_pane_g

0x1050,	// (0x0007b479) msg_text_pane_ParamLimits

0x1050,	// (0x0007b479) msg_text_pane

0x4b3a,	// (0x0007ef63) qrid_highlight_pane_cp011_ParamLimits

0x4b3a,	// (0x0007ef63) qrid_highlight_pane_cp011

0xa532,	// (0x0008495b) msg_body_pane

0xa532,	// (0x0008495b) msg_header_pane

0xb614,	// (0x00085a3d) input_focus_pane_cp07

0x10ac,	// (0x0007b4d5) msg_header_pane_t1_ParamLimits

0x10ac,	// (0x0007b4d5) msg_header_pane_t1

0x10be,	// (0x0007b4e7) msg_header_pane_t2_ParamLimits

0x10be,	// (0x0007b4e7) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000898b6) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000898b6) msg_header_pane_t

0xb629,	// (0x00085a52) msg_body_pane_g1

0x10d0,	// (0x0007b4f9) msg_body_pane_t1_ParamLimits

0x10d0,	// (0x0007b4f9) msg_body_pane_t1

0x1101,	// (0x0007b52a) msg_body_pane_t2_ParamLimits

0x1101,	// (0x0007b52a) msg_body_pane_t2

0x1113,	// (0x0007b53c) msg_body_pane_t3_ParamLimits

0x1113,	// (0x0007b53c) msg_body_pane_t3

0x0002,

0xf492,	// (0x000898bb) msg_body_pane_t_ParamLimits

0xf492,	// (0x000898bb) msg_body_pane_t

0x4ba8,	// (0x0007efd1) main_viewer_pane_g1_ParamLimits

0x4ba8,	// (0x0007efd1) main_viewer_pane_g1

0x4bb4,	// (0x0007efdd) main_viewer_pane_g2_ParamLimits

0x4bb4,	// (0x0007efdd) main_viewer_pane_g2

0x4bc0,	// (0x0007efe9) main_viewer_pane_g3_ParamLimits

0x4bc0,	// (0x0007efe9) main_viewer_pane_g3

0x4bd1,	// (0x0007effa) main_viewer_pane_g4_ParamLimits

0x4bd1,	// (0x0007effa) main_viewer_pane_g4

0x4be2,	// (0x0007f00b) main_viewer_pane_g5_ParamLimits

0x4be2,	// (0x0007f00b) main_viewer_pane_g5

0x4be2,	// (0x0007f00b) main_viewer_pane_g7_ParamLimits

0x4be2,	// (0x0007f00b) main_viewer_pane_g7

0x4bf4,	// (0x0007f01d) main_viewer_pane_g8_ParamLimits

0x4bf4,	// (0x0007f01d) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000898cb) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000898cb) main_viewer_pane_g

0xb631,	// (0x00085a5a) viewer_content_pane_ParamLimits

0xb631,	// (0x00085a5a) viewer_content_pane

0x4c2c,	// (0x0007f055) main_postcard_pane_g1_ParamLimits

0x4c2c,	// (0x0007f055) main_postcard_pane_g1

0x4c3a,	// (0x0007f063) main_postcard_pane_g2_ParamLimits

0x4c3a,	// (0x0007f063) main_postcard_pane_g2

0x4c48,	// (0x0007f071) main_postcard_pane_g3_ParamLimits

0x4c48,	// (0x0007f071) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000898dc) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000898dc) main_postcard_pane_g

0x4c58,	// (0x0007f081) main_postcard_pane_g4

0xc988,	// (0x00086db1) smil_status_volume_pane_g2

0x4c84,	// (0x0007f0ad) postcard_pane_ParamLimits

0x4c84,	// (0x0007f0ad) postcard_pane

0xb505,	// (0x0008592e) postcard_pane_g1_ParamLimits

0xb505,	// (0x0008592e) postcard_pane_g1

0x4cb6,	// (0x0007f0df) postcard_pane_g2_ParamLimits

0x4cb6,	// (0x0007f0df) postcard_pane_g2

0x4cc2,	// (0x0007f0eb) postcard_pane_g3_ParamLimits

0x4cc2,	// (0x0007f0eb) postcard_pane_g3

0xb63f,	// (0x00085a68) postcard_pane_g4_ParamLimits

0xb63f,	// (0x00085a68) postcard_pane_g4

0x4cce,	// (0x0007f0f7) postcard_pane_g5_ParamLimits

0x4cce,	// (0x0007f0f7) postcard_pane_g5

0x4cda,	// (0x0007f103) postcard_pane_g6_ParamLimits

0x4cda,	// (0x0007f103) postcard_pane_g6

0xb64d,	// (0x00085a76) postcard_pane_g7_ParamLimits

0xb64d,	// (0x00085a76) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000898e9) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000898e9) postcard_pane_g

0x4ce6,	// (0x0007f10f) main_mp2_pane_g1_ParamLimits

0x4ce6,	// (0x0007f10f) main_mp2_pane_g1

0x4cf2,	// (0x0007f11b) main_mp2_pane_g2_ParamLimits

0x4cf2,	// (0x0007f11b) main_mp2_pane_g2

0x4cfe,	// (0x0007f127) main_mp2_pane_g3_ParamLimits

0x4cfe,	// (0x0007f127) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000898f8) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000898f8) main_mp2_pane_g

0x4d0a,	// (0x0007f133) main_mp2_pane_t1_ParamLimits

0x4d0a,	// (0x0007f133) main_mp2_pane_t1

0x4d21,	// (0x0007f14a) main_mp2_pane_t2_ParamLimits

0x4d21,	// (0x0007f14a) main_mp2_pane_t2

0x4d33,	// (0x0007f15c) main_mp2_pane_t3_ParamLimits

0x4d33,	// (0x0007f15c) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000898ff) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000898ff) main_mp2_pane_t

0xb65b,	// (0x00085a84) pec_content_pane_ParamLimits

0xb65b,	// (0x00085a84) pec_content_pane

0xabde,	// (0x00085007) scroll_pane_cp015

0xb66d,	// (0x00085a96) pec_attribute_pane_ParamLimits

0xb66d,	// (0x00085a96) pec_attribute_pane

0x4d45,	// (0x0007f16e) pec_content_pane_g1_ParamLimits

0x4d45,	// (0x0007f16e) pec_content_pane_g1

0xb67d,	// (0x00085aa6) pec_content_pane_t1_ParamLimits

0xb67d,	// (0x00085aa6) pec_content_pane_t1

0xb68f,	// (0x00085ab8) pec_content_pane_t2_ParamLimits

0xb68f,	// (0x00085ab8) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00089906) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00089906) pec_content_pane_t

0x4d51,	// (0x0007f17a) list_single_graphic_pane_cp01_ParamLimits

0x4d51,	// (0x0007f17a) list_single_graphic_pane_cp01

0xa78d,	// (0x00084bb6) bg_popup_sub_pane_cp04

0xb6a1,	// (0x00085aca) popup_mup_playback_window_g1

0xb6ad,	// (0x00085ad6) popup_mup_playback_window_t1

0xb6c2,	// (0x00085aeb) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0008990b) popup_mup_playback_window_t

0xb6f9,	// (0x00085b22) main_image_pane_g1_ParamLimits

0xb6f9,	// (0x00085b22) main_image_pane_g1

0xb73c,	// (0x00085b65) scroll_pane_cp018_ParamLimits

0xb73c,	// (0x00085b65) scroll_pane_cp018

0xb754,	// (0x00085b7d) scroll_pane_cp016_ParamLimits

0xb754,	// (0x00085b7d) scroll_pane_cp016

0x4deb,	// (0x0007f214) smil2_image_pane_ParamLimits

0x4deb,	// (0x0007f214) smil2_image_pane

0x4e1b,	// (0x0007f244) smil2_root_pane_ParamLimits

0x4e1b,	// (0x0007f244) smil2_root_pane

0x4e47,	// (0x0007f270) smil2_text_pane_ParamLimits

0x4e47,	// (0x0007f270) smil2_text_pane

0xa532,	// (0x0008495b) bg_list_pane_cp06

0xb790,	// (0x00085bb9) grid_radio_pane

0xa532,	// (0x0008495b) bg_popup_window_pane_cp06

0xb798,	// (0x00085bc1) main_fmradio_pane_t1

0xb145,	// (0x0008556e) heading_pane_cp04

0xb7a6,	// (0x00085bcf) main_fmradio_pane_t2

0xc7be,	// (0x00086be7) popup_cale_lunar_info_window_g1

0xb7b4,	// (0x00085bdd) main_fmradio_pane_t3

0xc7c6,	// (0x00086bef) popup_cale_lunar_info_window_g2

0xb7c2,	// (0x00085beb) main_fmradio_pane_t4

0x0001,

0xb7d0,	// (0x00085bf9) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x000899f9) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00089920) main_fmradio_pane_t

0xb7de,	// (0x00085c07) wait_bar_pane_cp03

0xb7e6,	// (0x00085c0f) cell_fmradio_pane_ParamLimits

0xb7e6,	// (0x00085c0f) cell_fmradio_pane

0xb64d,	// (0x00085a76) cell_fmradio_pane_g1_ParamLimits

0xb64d,	// (0x00085a76) cell_fmradio_pane_g1

0xa532,	// (0x0008495b) grid_highlight_pane_cp011

0xb7f9,	// (0x00085c22) poc_content_pane_ParamLimits

0xb7f9,	// (0x00085c22) poc_content_pane

0xb80b,	// (0x00085c34) scroll_pane_cp019

0x4e87,	// (0x0007f2b0) popup_call_poc_act_window_ParamLimits

0x4e87,	// (0x0007f2b0) popup_call_poc_act_window

0x4e94,	// (0x0007f2bd) popup_call_poc_inact_window_ParamLimits

0x4e94,	// (0x0007f2bd) popup_call_poc_inact_window

0xf594,	// (0x000899bd) bg_popup_call_poc_act_pane_g

0xc77e,	// (0x00086ba7) bg_popup_call_poc_inact_pane_g1

0xc786,	// (0x00086baf) bg_popup_call_poc_inact_pane_g2

0xb813,	// (0x00085c3c) popup_call_poc_act_window_g2

0xc78e,	// (0x00086bb7) bg_popup_call_poc_inact_pane_g3

0xc70e,	// (0x00086b37) bg_popup_call_poc_inact_pane_g4

0xc796,	// (0x00086bbf) bg_popup_call_poc_inact_pane_g5

0xb81b,	// (0x00085c44) popup_call_poc_act_window_t1_ParamLimits

0xb81b,	// (0x00085c44) popup_call_poc_act_window_t1

0xb843,	// (0x00085c6c) popup_call_poc_act_window_t2_ParamLimits

0xb843,	// (0x00085c6c) popup_call_poc_act_window_t2

0xb86b,	// (0x00085c94) popup_call_poc_act_window_t3_ParamLimits

0xb86b,	// (0x00085c94) popup_call_poc_act_window_t3

0xb893,	// (0x00085cbc) popup_call_poc_act_window_t4_ParamLimits

0xb893,	// (0x00085cbc) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0008992b) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0008992b) popup_call_poc_act_window_t

0xc79e,	// (0x00086bc7) bg_popup_call_poc_inact_pane_g6

0xc7a6,	// (0x00086bcf) bg_popup_call_poc_inact_pane_g7

0xc7ae,	// (0x00086bd7) bg_popup_call_poc_inact_pane_g8

0xb8a5,	// (0x00085cce) popup_call_poc_inact_window_g2

0xc7b6,	// (0x00086bdf) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x000899d4) bg_popup_call_poc_inact_pane_g

0xb8ad,	// (0x00085cd6) popup_call_poc_inact_window_t1_ParamLimits

0xb8ad,	// (0x00085cd6) popup_call_poc_inact_window_t1

0xb8c2,	// (0x00085ceb) popup_call_poc_inact_window_t2_ParamLimits

0xb8c2,	// (0x00085ceb) popup_call_poc_inact_window_t2

0xb8d7,	// (0x00085d00) popup_call_poc_inact_window_t3_ParamLimits

0xb8d7,	// (0x00085d00) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00089934) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00089934) popup_call_poc_inact_window_t

0xc8fb,	// (0x00086d24) context_pane_ParamLimits

0x54ca,	// (0x0007f8f3) signal_pane_ParamLimits

0xaa35,	// (0x00084e5e) main_call2_pane

0x543d,	// (0x0007f866) popup_phob_thumbnail2_window_ParamLimits

0x543d,	// (0x0007f866) popup_phob_thumbnail2_window

0x4b56,	// (0x0007ef7f) aid_hotspot_pointer_arrow_pane

0x4b5e,	// (0x0007ef87) aid_hotspot_pointer_hand_pane

0x51bc,	// (0x0007f5e5) phob_pre_status_pane_g5

0x2e82,	// (0x0007d2ab) cams_zoom_pane_ParamLimits

0x2e8e,	// (0x0007d2b7) image_vga_pane_ParamLimits

0x2e9d,	// (0x0007d2c6) main_camera_pane_g1_ParamLimits

0x2eab,	// (0x0007d2d4) main_camera_pane_g2_ParamLimits

0x2eb7,	// (0x0007d2e0) main_camera_pane_g3_ParamLimits

0x2ec3,	// (0x0007d2ec) main_camera_pane_g4_ParamLimits

0x2ecf,	// (0x0007d2f8) main_camera_pane_g5_ParamLimits

0x2edb,	// (0x0007d304) main_camera_pane_g6_ParamLimits

0x2ee7,	// (0x0007d310) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00089633) main_camera_pane_g_ParamLimits

0x2ef3,	// (0x0007d31c) main_camera_pane_t1_ParamLimits

0x2f05,	// (0x0007d32e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00089644) main_camera_pane_t_ParamLimits

0xa78d,	// (0x00084bb6) bg_popup_preview_window_pane_cp01_ParamLimits

0xa78d,	// (0x00084bb6) bg_popup_preview_window_pane_cp01

0xb8ec,	// (0x00085d15) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ec,	// (0x00085d15) popup_phob_thumbnail2_window_g1

0xa532,	// (0x0008495b) call2_cli_visual_pane

0x4eb0,	// (0x0007f2d9) popup_call2_audio_conf_window_ParamLimits

0x4eb0,	// (0x0007f2d9) popup_call2_audio_conf_window

0x4ec5,	// (0x0007f2ee) popup_call2_audio_first_window_ParamLimits

0x4ec5,	// (0x0007f2ee) popup_call2_audio_first_window

0x4f63,	// (0x0007f38c) popup_call2_audio_in_window_ParamLimits

0x4f63,	// (0x0007f38c) popup_call2_audio_in_window

0x4fa5,	// (0x0007f3ce) popup_call2_audio_out_window_ParamLimits

0x4fa5,	// (0x0007f3ce) popup_call2_audio_out_window

0x5007,	// (0x0007f430) popup_call2_audio_second_window_ParamLimits

0x5007,	// (0x0007f430) popup_call2_audio_second_window

0x5065,	// (0x0007f48e) popup_call2_audio_wait_window_ParamLimits

0x5065,	// (0x0007f48e) popup_call2_audio_wait_window

0xa532,	// (0x0008495b) bg_popup_call2_act_pane_cp03

0xa76f,	// (0x00084b98) list_conf_pane_cp

0xb8f8,	// (0x00085d21) popup_call2_audio_conf_window_t1

0xb906,	// (0x00085d2f) list_single_graphic_popup_conf2_pane_ParamLimits

0xb906,	// (0x00085d2f) list_single_graphic_popup_conf2_pane

0xb1b5,	// (0x000855de) list_highlight_pane_cp04

0xb919,	// (0x00085d42) list_single_graphic_popup_conf2_pane_g1

0xb1c6,	// (0x000855ef) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0008993b) list_single_graphic_popup_conf2_pane_g

0xb923,	// (0x00085d4c) list_single_graphic_popup_conf2_pane_t1

0xb931,	// (0x00085d5a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb931,	// (0x00085d5a) bg_popup_call2_act_pane_cp01

0xb9bb,	// (0x00085de4) call_type_pane_cp05_ParamLimits

0xb9bb,	// (0x00085de4) call_type_pane_cp05

0xba0f,	// (0x00085e38) popup_call2_audio_second_window_g1_ParamLimits

0xba0f,	// (0x00085e38) popup_call2_audio_second_window_g1

0xba63,	// (0x00085e8c) popup_call2_audio_second_window_g2_ParamLimits

0xba63,	// (0x00085e8c) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00089940) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00089940) popup_call2_audio_second_window_g

0xbac8,	// (0x00085ef1) popup_call2_audio_second_window_t1_ParamLimits

0xbac8,	// (0x00085ef1) popup_call2_audio_second_window_t1

0xbb83,	// (0x00085fac) popup_call2_audio_second_window_t2_ParamLimits

0xbb83,	// (0x00085fac) popup_call2_audio_second_window_t2

0xbbd6,	// (0x00085fff) popup_call2_audio_second_window_t3_ParamLimits

0xbbd6,	// (0x00085fff) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00089947) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00089947) popup_call2_audio_second_window_t

0xa532,	// (0x0008495b) bg_popup_call2_in_pane_cp02

0xa53c,	// (0x00084965) call_type_pane_cp04

0xa544,	// (0x0008496d) popup_call2_audio_wait_window_g1

0xa54c,	// (0x00084975) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00089522) popup_call2_audio_wait_window_g

0xa554,	// (0x0008497d) popup_call2_audio_wait_window_t3

0xbcc9,	// (0x000860f2) bg_popup_call2_act_pane_ParamLimits

0xbcc9,	// (0x000860f2) bg_popup_call2_act_pane

0xbd89,	// (0x000861b2) call_type_pane_cp03_ParamLimits

0xbd89,	// (0x000861b2) call_type_pane_cp03

0xbded,	// (0x00086216) popup_call2_audio_first_window_g1_ParamLimits

0xbded,	// (0x00086216) popup_call2_audio_first_window_g1

0xbe5d,	// (0x00086286) popup_call2_audio_first_window_g2_ParamLimits

0xbe5d,	// (0x00086286) popup_call2_audio_first_window_g2

0xb505,	// (0x0008592e) popup_call2_audio_first_window_g3_ParamLimits

0xb505,	// (0x0008592e) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00089950) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00089950) popup_call2_audio_first_window_g

0xbf3b,	// (0x00086364) popup_call2_audio_first_window_t1_ParamLimits

0xbf3b,	// (0x00086364) popup_call2_audio_first_window_t1

0xc03e,	// (0x00086467) popup_call2_audio_first_window_t4_ParamLimits

0xc03e,	// (0x00086467) popup_call2_audio_first_window_t4

0xc121,	// (0x0008654a) popup_call2_audio_first_window_t5_ParamLimits

0xc121,	// (0x0008654a) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0008995b) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0008995b) popup_call2_audio_first_window_t

0xa785,	// (0x00084bae) bg_popup_call2_act_pane_g1

0xc7ce,	// (0x00086bf7) popup_cale_lunar_info_window_t1

0xc7dc,	// (0x00086c05) popup_cale_lunar_info_window_t2

0xc7ea,	// (0x00086c13) popup_cale_lunar_info_window_t3

0xa532,	// (0x0008495b) bg_popup_call2_bubble_pane

0xc222,	// (0x0008664b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc222,	// (0x0008664b) bg_popup_call2_in_pane_cp01

0xa1c8,	// (0x000845f1) call_type_pane_cp02

0xc26a,	// (0x00086693) popup_call2_audio_out_window_g1_ParamLimits

0xc26a,	// (0x00086693) popup_call2_audio_out_window_g1

0xc296,	// (0x000866bf) popup_call2_audio_out_window_g2_ParamLimits

0xc296,	// (0x000866bf) popup_call2_audio_out_window_g2

0xc2be,	// (0x000866e7) popup_call2_audio_out_window_g3_ParamLimits

0xc2be,	// (0x000866e7) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00089964) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00089964) popup_call2_audio_out_window_g

0xc2f9,	// (0x00086722) popup_call2_audio_out_window_t1_ParamLimits

0xc2f9,	// (0x00086722) popup_call2_audio_out_window_t1

0xc358,	// (0x00086781) popup_call2_audio_out_window_t2_ParamLimits

0xc358,	// (0x00086781) popup_call2_audio_out_window_t2

0xc3ac,	// (0x000867d5) popup_call2_audio_out_window_t3_ParamLimits

0xc3ac,	// (0x000867d5) popup_call2_audio_out_window_t3

0xc3c2,	// (0x000867eb) popup_call2_audio_out_window_t4_ParamLimits

0xc3c2,	// (0x000867eb) popup_call2_audio_out_window_t4

0xc3d8,	// (0x00086801) popup_call2_audio_out_window_t5_ParamLimits

0xc3d8,	// (0x00086801) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0008996d) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0008996d) popup_call2_audio_out_window_t

0xc43c,	// (0x00086865) bg_popup_call2_in_pane_ParamLimits

0xc43c,	// (0x00086865) bg_popup_call2_in_pane

0xc498,	// (0x000868c1) popup_call2_audio_in_window_g1_ParamLimits

0xc498,	// (0x000868c1) popup_call2_audio_in_window_g1

0xc4d0,	// (0x000868f9) popup_call2_audio_in_window_g2_ParamLimits

0xc4d0,	// (0x000868f9) popup_call2_audio_in_window_g2

0xc508,	// (0x00086931) popup_call2_audio_in_window_g3_ParamLimits

0xc508,	// (0x00086931) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0008997a) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0008997a) popup_call2_audio_in_window_g

0xc560,	// (0x00086989) popup_call2_audio_in_window_t1_ParamLimits

0xc560,	// (0x00086989) popup_call2_audio_in_window_t1

0xc5e0,	// (0x00086a09) popup_call2_audio_in_window_t2_ParamLimits

0xc5e0,	// (0x00086a09) popup_call2_audio_in_window_t2

0xc660,	// (0x00086a89) popup_call2_audio_in_window_t3_ParamLimits

0xc660,	// (0x00086a89) popup_call2_audio_in_window_t3

0xc67a,	// (0x00086aa3) popup_call2_audio_in_window_t4_ParamLimits

0xc67a,	// (0x00086aa3) popup_call2_audio_in_window_t4

0xc68c,	// (0x00086ab5) popup_call2_audio_in_window_t5_ParamLimits

0xc68c,	// (0x00086ab5) popup_call2_audio_in_window_t5

0xc6a1,	// (0x00086aca) popup_call2_audio_in_window_t6_ParamLimits

0xc6a1,	// (0x00086aca) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00089983) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00089983) popup_call2_audio_in_window_t

0xa785,	// (0x00084bae) bg_popup_call2_in_pane_g1

0xc7f8,	// (0x00086c21) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x000899fe) popup_cale_lunar_info_window_t

0xa78d,	// (0x00084bb6) bg_popup_call2_rect_pane_ParamLimits

0xa78d,	// (0x00084bb6) bg_popup_call2_rect_pane

0xa532,	// (0x0008495b) call2_cli_visual_graphic_pane

0xa532,	// (0x0008495b) call2_cli_visual_text_pane

0x5573,	// (0x0007f99c) smil_status_volume_pane_g3

0x0002,

0xa8b3,	// (0x00084cdc) call2_cli_visual_graphic_pane_g1

0xa8b3,	// (0x00084cdc) call2_cli_visual_graphic_pane_g2

0xa8b3,	// (0x00084cdc) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00089990) call2_cli_visual_graphic_pane_g

0xc6b6,	// (0x00086adf) bg_popup_call2_rect_pane_g1

0xa951,	// (0x00084d7a) bg_popup_call2_rect_pane_g2

0xc6be,	// (0x00086ae7) bg_popup_call2_rect_pane_g3

0xc6c6,	// (0x00086aef) bg_popup_call2_rect_pane_g4

0xc6ce,	// (0x00086af7) bg_popup_call2_rect_pane_g5

0xc6d6,	// (0x00086aff) bg_popup_call2_rect_pane_g6

0xc6de,	// (0x00086b07) bg_popup_call2_rect_pane_g7

0xc6e6,	// (0x00086b0f) bg_popup_call2_rect_pane_g8

0xc6ee,	// (0x00086b17) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00089997) bg_popup_call2_rect_pane_g

0xc6f6,	// (0x00086b1f) bg_popup_call2_bubble_pane_g1

0xc6fe,	// (0x00086b27) bg_popup_call2_bubble_pane_g2

0xc706,	// (0x00086b2f) bg_popup_call2_bubble_pane_g3

0xc70e,	// (0x00086b37) bg_popup_call2_bubble_pane_g4

0xc716,	// (0x00086b3f) bg_popup_call2_bubble_pane_g5

0xc71e,	// (0x00086b47) bg_popup_call2_bubble_pane_g6

0xc726,	// (0x00086b4f) bg_popup_call2_bubble_pane_g7

0xc72e,	// (0x00086b57) bg_popup_call2_bubble_pane_g8

0xc736,	// (0x00086b5f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000899aa) bg_popup_call2_bubble_pane_g

0x2994,	// (0x0007cdbd) aid_cale_week_size_cell_pane

0x2f17,	// (0x0007d340) aid_cams_cif_uncrop_pane_ParamLimits

0x2f17,	// (0x0007d340) aid_cams_cif_uncrop_pane

0x3072,	// (0x0007d49b) aid_cams_size_cell_ParamLimits

0x3072,	// (0x0007d49b) aid_cams_size_cell

0x307e,	// (0x0007d4a7) grid_cams_pane_ParamLimits

0x308c,	// (0x0007d4b5) linegrid_cams_pane_ParamLimits

0x3163,	// (0x0007d58c) call_video_pane_t1

0x3184,	// (0x0007d5ad) call_video_pane_t2

0x0001,

0xf26e,	// (0x00089697) call_video_pane_t

0x36d2,	// (0x0007dafb) aid_cale_month_size_cell_pane_ParamLimits

0x36d2,	// (0x0007dafb) aid_cale_month_size_cell_pane

0xf61e,	// (0x00089a47) smil_status_volume_pane_g

0x5580,	// (0x0007f9a9) volume_smil_pane_ParamLimits

0x2107,	// (0x0007c530) aid_popup2_width_pane

0x288e,	// (0x0007ccb7) cell_qdial_pane_g4_ParamLimits

0x288e,	// (0x0007ccb7) cell_qdial_pane_g4

0x4607,	// (0x0007ea30) aid_blid_cardinal_pane_ParamLimits

0x4617,	// (0x0007ea40) aid_blid_destination_pane_ParamLimits

0x4617,	// (0x0007ea40) aid_blid_destination_pane

0xa78d,	// (0x00084bb6) bg_popup_call_poc_act_pane_ParamLimits

0xa78d,	// (0x00084bb6) bg_popup_call_poc_act_pane

0xa78d,	// (0x00084bb6) bg_popup_call_poc_inact_pane_ParamLimits

0xa78d,	// (0x00084bb6) bg_popup_call_poc_inact_pane

0xc73e,	// (0x00086b67) bg_popup_call_poc_act_pane_g1

0xc746,	// (0x00086b6f) bg_popup_call_poc_act_pane_g2

0xc74e,	// (0x00086b77) bg_popup_call_poc_act_pane_g3

0xc70e,	// (0x00086b37) bg_popup_call_poc_act_pane_g4

0xc716,	// (0x00086b3f) bg_popup_call_poc_act_pane_g5

0xc756,	// (0x00086b7f) bg_popup_call_poc_act_pane_g6

0xc726,	// (0x00086b4f) bg_popup_call_poc_act_pane_g7

0xc75e,	// (0x00086b87) bg_popup_call_poc_act_pane_g8

0xa532,	// (0x0008495b) main_usb_pane

0x5370,	// (0x0007f799) popup_cale_lunar_info_window

0x34a1,	// (0x0007d8ca) im_reading_pane_t1_ParamLimits

0xab36,	// (0x00084f5f) list_im_pane_ParamLimits

0xab47,	// (0x00084f70) scroll_pane_cp07_ParamLimits

0xa532,	// (0x0008495b) grid_highlight_pane_cp012

0xa78d,	// (0x00084bb6) mup_scale_pane_ParamLimits

0xb505,	// (0x0008592e) main_usb_pane_g1_ParamLimits

0xb505,	// (0x0008592e) main_usb_pane_g1

0x50df,	// (0x0007f508) main_usb_pane_g2_ParamLimits

0x50df,	// (0x0007f508) main_usb_pane_g2

0x0001,

0xf5be,	// (0x000899e7) main_usb_pane_g_ParamLimits

0xf5be,	// (0x000899e7) main_usb_pane_g

0x50eb,	// (0x0007f514) main_usb_pane_t1_ParamLimits

0x50eb,	// (0x0007f514) main_usb_pane_t1

0x50fd,	// (0x0007f526) main_usb_pane_t2_ParamLimits

0x50fd,	// (0x0007f526) main_usb_pane_t2

0x510f,	// (0x0007f538) main_usb_pane_t3_ParamLimits

0x510f,	// (0x0007f538) main_usb_pane_t3

0x5121,	// (0x0007f54a) main_usb_pane_t4_ParamLimits

0x5121,	// (0x0007f54a) main_usb_pane_t4

0x5133,	// (0x0007f55c) main_usb_pane_t5_ParamLimits

0x5133,	// (0x0007f55c) main_usb_pane_t5

0x5145,	// (0x0007f56e) main_usb_pane_t6_ParamLimits

0x5145,	// (0x0007f56e) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x000899ec) main_usb_pane_t_ParamLimits

0x45ad,	// (0x0007e9d6) aid_text_placing

0x45b9,	// (0x0007e9e2) main_location2_pane_t1_ParamLimits

0x45cd,	// (0x0007e9f6) main_location2_pane_t2_ParamLimits

0x45e1,	// (0x0007ea0a) main_location2_pane_t3_ParamLimits

0x45f5,	// (0x0007ea1e) main_location2_pane_t4_ParamLimits

0x45f5,	// (0x0007ea1e) main_location2_pane_t4

0xf3cf,	// (0x000897f8) main_location2_pane_t_ParamLimits

0xa7c9,	// (0x00084bf2) find_pinb_pane_g2_ParamLimits

0xa7c9,	// (0x00084bf2) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00089548) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00089548) find_pinb_pane_g

0xa7d5,	// (0x00084bfe) find_pinb_pane_t1_ParamLimits

0xa7e7,	// (0x00084c10) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0008954d) find_pinb_pane_t_ParamLimits

0xa532,	// (0x0008495b) main_call3_pane

0x3c95,	// (0x0007e0be) cale_month_day_heading_pane_t1_ParamLimits

0x3d1b,	// (0x0007e144) cale_month_day_heading_pane_t2_ParamLimits

0x3d94,	// (0x0007e1bd) cale_month_day_heading_pane_t3_ParamLimits

0x3e0d,	// (0x0007e236) cale_month_day_heading_pane_t4_ParamLimits

0x3e86,	// (0x0007e2af) cale_month_day_heading_pane_t5_ParamLimits

0x3eff,	// (0x0007e328) cale_month_day_heading_pane_t6_ParamLimits

0x3f78,	// (0x0007e3a1) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000896cf) cale_month_day_heading_pane_t_ParamLimits

0xadaf,	// (0x000851d8) smil_status_volume_pane

0x4c9e,	// (0x0007f0c7) postcard_address_pane_ParamLimits

0x4c9e,	// (0x0007f0c7) postcard_address_pane

0x4caa,	// (0x0007f0d3) postcard_message_pane_ParamLimits

0x4caa,	// (0x0007f0d3) postcard_message_pane

0x50a4,	// (0x0007f4cd) call2_cli_visual_pane_t1_ParamLimits

0x50a4,	// (0x0007f4cd) call2_cli_visual_pane_t1

0x56d7,	// (0x0007fb00) postcard_message_pane_t1_ParamLimits

0x56d7,	// (0x0007fb00) postcard_message_pane_t1

0x56c0,	// (0x0007fae9) postcard_address_pane_t1_ParamLimits

0x56c0,	// (0x0007fae9) postcard_address_pane_t1

0x56b1,	// (0x0007fada) popup_call3_audio_in_window_ParamLimits

0x56b1,	// (0x0007fada) popup_call3_audio_in_window

0x5595,	// (0x0007f9be) bg_popup_call3_in_pane_ParamLimits

0x5595,	// (0x0007f9be) bg_popup_call3_in_pane

0x55f7,	// (0x0007fa20) popup_call3_audio_in_window_g1_ParamLimits

0x55f7,	// (0x0007fa20) popup_call3_audio_in_window_g1

0x560f,	// (0x0007fa38) popup_call3_audio_in_window_g2_ParamLimits

0x560f,	// (0x0007fa38) popup_call3_audio_in_window_g2

0x5627,	// (0x0007fa50) popup_call3_audio_in_window_g3_ParamLimits

0x5627,	// (0x0007fa50) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x00089a4e) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x00089a4e) popup_call3_audio_in_window_g

0x564f,	// (0x0007fa78) popup_call3_audio_in_window_t1_ParamLimits

0x564f,	// (0x0007fa78) popup_call3_audio_in_window_t1

0x5677,	// (0x0007faa0) popup_call3_audio_in_window_t2_ParamLimits

0x5677,	// (0x0007faa0) popup_call3_audio_in_window_t2

0x569f,	// (0x0007fac8) popup_call3_audio_in_window_t3_ParamLimits

0x569f,	// (0x0007fac8) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x00089a57) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x00089a57) popup_call3_audio_in_window_t

0xaa35,	// (0x00084e5e) bg_popup_call3_rect_pane

0xc6b6,	// (0x00086adf) bg_popup_call3_rect_pane_g1

0xa951,	// (0x00084d7a) bg_popup_call3_rect_pane_g2

0xc6be,	// (0x00086ae7) bg_popup_call3_rect_pane_g3

0xc6c6,	// (0x00086aef) bg_popup_call3_rect_pane_g4

0xc6ce,	// (0x00086af7) bg_popup_call3_rect_pane_g5

0xc6d6,	// (0x00086aff) bg_popup_call3_rect_pane_g6

0xc6de,	// (0x00086b07) bg_popup_call3_rect_pane_g7

0x491d,	// (0x0007ed46) mup_visualizer_osc_pane

0xb561,	// (0x0008598a) mup_visualizer_spec_pane

0x55b5,	// (0x0007f9de) call3_video_qcif_pane_ParamLimits

0x55b5,	// (0x0007f9de) call3_video_qcif_pane

0x55c7,	// (0x0007f9f0) call3_video_qcif_uncrop_pane_ParamLimits

0x55c7,	// (0x0007f9f0) call3_video_qcif_uncrop_pane

0x55d5,	// (0x0007f9fe) call3_video_subqcif_pane_ParamLimits

0x55d5,	// (0x0007f9fe) call3_video_subqcif_pane

0x55e7,	// (0x0007fa10) call3_video_subqcif_uncrop_pane_ParamLimits

0x55e7,	// (0x0007fa10) call3_video_subqcif_uncrop_pane

0x563f,	// (0x0007fa68) popup_call3_audio_in_window_g4_ParamLimits

0x563f,	// (0x0007fa68) popup_call3_audio_in_window_g4

0x5560,	// (0x0007f989) mup_spec_half_pane

0x5569,	// (0x0007f992) mup_spec_half_pane_cp

0xc95b,	// (0x00086d84) mup_osc_middle_pane

0xc964,	// (0x00086d8d) mup_visualizer_osc_pane_g1

0x5541,	// (0x0007f96a) mup_spec_bar_pane_ParamLimits

0x5541,	// (0x0007f96a) mup_spec_bar_pane

0xc948,	// (0x00086d71) mup_spec_bar_pane_g1

0xc952,	// (0x00086d7b) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00089a42) mup_spec_bar_pane_g

0x2994,	// (0x0007cdbd) aid_cale_week_size_cell_pane_ParamLimits

0x29a9,	// (0x0007cdd2) bg_cale_heading_pane_ParamLimits

0xa98e,	// (0x00084db7) bg_cale_pane_cp01_ParamLimits

0x29cb,	// (0x0007cdf4) cale_week_corner_pane_ParamLimits

0x29e5,	// (0x0007ce0e) cale_week_day_heading_pane_ParamLimits

0x2a07,	// (0x0007ce30) cale_week_scroll_pane_g1_ParamLimits

0x2a24,	// (0x0007ce4d) cale_week_scroll_pane_g2_ParamLimits

0x2a37,	// (0x0007ce60) cale_week_scroll_pane_g3_ParamLimits

0x2a4a,	// (0x0007ce73) cale_week_scroll_pane_g4_ParamLimits

0x2a5d,	// (0x0007ce86) cale_week_scroll_pane_g5_ParamLimits

0x2a70,	// (0x0007ce99) cale_week_scroll_pane_g6_ParamLimits

0x2a83,	// (0x0007ceac) cale_week_scroll_pane_g7_ParamLimits

0x2a98,	// (0x0007cec1) cale_week_scroll_pane_g8_ParamLimits

0x2aad,	// (0x0007ced6) cale_week_scroll_pane_g9_ParamLimits

0x2ac0,	// (0x0007cee9) cale_week_scroll_pane_g10_ParamLimits

0x2ad3,	// (0x0007cefc) cale_week_scroll_pane_g11_ParamLimits

0x2ae6,	// (0x0007cf0f) cale_week_scroll_pane_g12_ParamLimits

0x2afd,	// (0x0007cf26) cale_week_scroll_pane_g13_ParamLimits

0x2b18,	// (0x0007cf41) cale_week_scroll_pane_g14_ParamLimits

0x2b33,	// (0x0007cf5c) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000895d9) cale_week_scroll_pane_g_ParamLimits

0x2b63,	// (0x0007cf8c) cale_week_time_pane_ParamLimits

0x2b78,	// (0x0007cfa1) grid_cale_week_pane_ParamLimits

0xa9ab,	// (0x00084dd4) listscroll_cale_week_pane_t1

0xa9bd,	// (0x00084de6) scroll_pane_cp08_ParamLimits

0x3746,	// (0x0007db6f) cale_month_corner_pane_ParamLimits

0xad85,	// (0x000851ae) cale_month_pane_t1

0x3c14,	// (0x0007e03d) cale_month_week_pane_ParamLimits

0xb505,	// (0x0008592e) popup_call_status_window_g1_ParamLimits

0x43b6,	// (0x0007e7df) popup_call_status_window_g2_ParamLimits

0x43c2,	// (0x0007e7eb) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0008977f) popup_call_status_window_g_ParamLimits

0xb135,	// (0x0008555e) aid_call2_pane

0x10a0,	// (0x0007b4c9) msg_header_pane_g1

0x4c9e,	// (0x0007f0c7) postcard_address2_pane_ParamLimits

0x4c9e,	// (0x0007f0c7) postcard_address2_pane

0x4caa,	// (0x0007f0d3) postcard_message2_pane_ParamLimits

0x4caa,	// (0x0007f0d3) postcard_message2_pane

0x54d8,	// (0x0007f901) message2_row_pane_ParamLimits

0x54d8,	// (0x0007f901) message2_row_pane

0x54f3,	// (0x0007f91c) address2_row_pane_ParamLimits

0x54f3,	// (0x0007f91c) address2_row_pane

0xc916,	// (0x00086d3f) postcard_message2_row_pane_g1

0xc91e,	// (0x00086d47) postcard_message2_row_pane_t1

0xc916,	// (0x00086d3f) address2_row_pane_g1

0xc91e,	// (0x00086d47) address2_row_pane_t1

0x2dfd,	// (0x0007d226) aid_size_cell_vorec

0xa532,	// (0x0008495b) main_rss_pane

0x5506,	// (0x0007f92f) rss_list_single_pane_ParamLimits

0x5506,	// (0x0007f92f) rss_list_single_pane

0xc92c,	// (0x00086d55) rss_list_single_pane_t1

0xc93a,	// (0x00086d63) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x00089a3d) rss_list_single_pane_t

0xa532,	// (0x0008495b) main_camera2_pane

0xa532,	// (0x0008495b) main_video2_pane

0x573b,	// (0x0007fb64) cams_zoom_pane_cp2_ParamLimits

0x573b,	// (0x0007fb64) cams_zoom_pane_cp2

0x5747,	// (0x0007fb70) image2_vga_pane_ParamLimits

0x5747,	// (0x0007fb70) image2_vga_pane

0x5756,	// (0x0007fb7f) main_camera2_pane_g1_ParamLimits

0x5756,	// (0x0007fb7f) main_camera2_pane_g1

0x5762,	// (0x0007fb8b) main_camera2_pane_g2_ParamLimits

0x5762,	// (0x0007fb8b) main_camera2_pane_g2

0x576e,	// (0x0007fb97) main_camera2_pane_g3_ParamLimits

0x576e,	// (0x0007fb97) main_camera2_pane_g3

0x577a,	// (0x0007fba3) main_camera2_pane_g4_ParamLimits

0x577a,	// (0x0007fba3) main_camera2_pane_g4

0x5786,	// (0x0007fbaf) main_camera2_pane_g5_ParamLimits

0x5786,	// (0x0007fbaf) main_camera2_pane_g5

0x5792,	// (0x0007fbbb) main_camera2_pane_g6_ParamLimits

0x5792,	// (0x0007fbbb) main_camera2_pane_g6

0x579e,	// (0x0007fbc7) main_camera2_pane_g7_ParamLimits

0x579e,	// (0x0007fbc7) main_camera2_pane_g7

0x57aa,	// (0x0007fbd3) main_camera2_pane_g8_ParamLimits

0x57aa,	// (0x0007fbd3) main_camera2_pane_g8

0x0008,

0xf635,	// (0x00089a5e) main_camera2_pane_g_ParamLimits

0xf635,	// (0x00089a5e) main_camera2_pane_g

0x57c2,	// (0x0007fbeb) main_camera2_pane_t1_ParamLimits

0x57c2,	// (0x0007fbeb) main_camera2_pane_t1

0x57d4,	// (0x0007fbfd) main_camera2_pane_t2_ParamLimits

0x57d4,	// (0x0007fbfd) main_camera2_pane_t2

0x57e6,	// (0x0007fc0f) main_camera2_pane_t3_ParamLimits

0x57e6,	// (0x0007fc0f) main_camera2_pane_t3

0x57f8,	// (0x0007fc21) main_camera2_pane_t4_ParamLimits

0x57f8,	// (0x0007fc21) main_camera2_pane_t4

0x0006,

0xf648,	// (0x00089a71) main_camera2_pane_t_ParamLimits

0xf648,	// (0x00089a71) main_camera2_pane_t

0x585a,	// (0x0007fc83) cams_zoom_pane_cp4_ParamLimits

0x585a,	// (0x0007fc83) cams_zoom_pane_cp4

0x586a,	// (0x0007fc93) image2_cif_pane_ParamLimits

0x586a,	// (0x0007fc93) image2_cif_pane

0x587f,	// (0x0007fca8) image2_subqcif_pane_ParamLimits

0x587f,	// (0x0007fca8) image2_subqcif_pane

0x588e,	// (0x0007fcb7) main_video2_pane_g1_ParamLimits

0x588e,	// (0x0007fcb7) main_video2_pane_g1

0x58a0,	// (0x0007fcc9) main_video2_pane_g2_ParamLimits

0x58a0,	// (0x0007fcc9) main_video2_pane_g2

0x58b0,	// (0x0007fcd9) main_video2_pane_g3_ParamLimits

0x58b0,	// (0x0007fcd9) main_video2_pane_g3

0x58c0,	// (0x0007fce9) main_video2_pane_g4_ParamLimits

0x58c0,	// (0x0007fce9) main_video2_pane_g4

0x58d0,	// (0x0007fcf9) main_video2_pane_g5_ParamLimits

0x58d0,	// (0x0007fcf9) main_video2_pane_g5

0x58e0,	// (0x0007fd09) main_video2_pane_g6_ParamLimits

0x58e0,	// (0x0007fd09) main_video2_pane_g6

0x0005,

0xf657,	// (0x00089a80) main_video2_pane_g_ParamLimits

0xf657,	// (0x00089a80) main_video2_pane_g

0x58f2,	// (0x0007fd1b) main_video2_pane_t1_ParamLimits

0x58f2,	// (0x0007fd1b) main_video2_pane_t1

0x590c,	// (0x0007fd35) main_video2_pane_t2_ParamLimits

0x590c,	// (0x0007fd35) main_video2_pane_t2

0x5932,	// (0x0007fd5b) main_video2_pane_t3_ParamLimits

0x5932,	// (0x0007fd5b) main_video2_pane_t3

0x0002,

0xf664,	// (0x00089a8d) main_video2_pane_t_ParamLimits

0xf664,	// (0x00089a8d) main_video2_pane_t

0x51fc,	// (0x0007f625) call_muted_g2

0x0001,

0xf606,	// (0x00089a2f) call_muted_g

0xa532,	// (0x0008495b) main_mup2_pane

0xc99b,	// (0x00086dc4) main_mup2_pane_g1_ParamLimits

0xc99b,	// (0x00086dc4) main_mup2_pane_g1

0x5958,	// (0x0007fd81) main_mup2_pane_g2_ParamLimits

0x5958,	// (0x0007fd81) main_mup2_pane_g2

0x5bda,	// (0x00080003) main_mup_pane_g13_cp1

0x5be2,	// (0x0008000b) mup_volume_pane_cp1

0x5978,	// (0x0007fda1) main_mup2_pane_g4_ParamLimits

0x5978,	// (0x0007fda1) main_mup2_pane_g4

0x598d,	// (0x0007fdb6) main_mup2_pane_g5_ParamLimits

0x598d,	// (0x0007fdb6) main_mup2_pane_g5

0x59a2,	// (0x0007fdcb) main_mup2_pane_g6_ParamLimits

0x59a2,	// (0x0007fdcb) main_mup2_pane_g6

0x59b7,	// (0x0007fde0) main_mup2_pane_g7_ParamLimits

0x59b7,	// (0x0007fde0) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x00089a94) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x00089a94) main_mup2_pane_g

0x59d3,	// (0x0007fdfc) main_mup2_pane_t1_ParamLimits

0x59d3,	// (0x0007fdfc) main_mup2_pane_t1

0x59ea,	// (0x0007fe13) main_mup2_pane_t2_ParamLimits

0x59ea,	// (0x0007fe13) main_mup2_pane_t2

0x5a01,	// (0x0007fe2a) main_mup2_pane_t3_ParamLimits

0x5a01,	// (0x0007fe2a) main_mup2_pane_t3

0x5a18,	// (0x0007fe41) main_mup2_pane_t4_ParamLimits

0x5a18,	// (0x0007fe41) main_mup2_pane_t4

0x5a32,	// (0x0007fe5b) main_mup2_pane_t5_ParamLimits

0x5a32,	// (0x0007fe5b) main_mup2_pane_t5

0x5a4c,	// (0x0007fe75) main_mup2_pane_t6_ParamLimits

0x5a4c,	// (0x0007fe75) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x00089aa3) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x00089aa3) main_mup2_pane_t

0x5a84,	// (0x0007fead) mup2_visualizer_pane_ParamLimits

0x5a84,	// (0x0007fead) mup2_visualizer_pane

0x5aba,	// (0x0007fee3) mup_progress_pane_cp_ParamLimits

0x5aba,	// (0x0007fee3) mup_progress_pane_cp

0x5bc5,	// (0x0007ffee) mup_volume_pane_cp_ParamLimits

0x5bc5,	// (0x0007ffee) mup_volume_pane_cp

0x5ad1,	// (0x0007fefa) mup2_visualizer_pane_g1_ParamLimits

0x5ad1,	// (0x0007fefa) mup2_visualizer_pane_g1

0xc9a7,	// (0x00086dd0) mup2_visualizer_pane_g2_ParamLimits

0xc9a7,	// (0x00086dd0) mup2_visualizer_pane_g2

0x5ae6,	// (0x0007ff0f) mup2_visualizer_pane_g3_ParamLimits

0x5ae6,	// (0x0007ff0f) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x00089ab0) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x00089ab0) mup2_visualizer_pane_g

0xb788,	// (0x00085bb1) aid_size_cell_fmradio

0x5312,	// (0x0007f73b) aid_height_parent_landcape

0xabc5,	// (0x00084fee) wml_content_pane_cp

0xabcd,	// (0x00084ff6) wml_tabs_pane

0xabd6,	// (0x00084fff) popup_wml_miniature_window

0xabde,	// (0x00085007) scroll_pane_cp021

0xabf2,	// (0x0008501b) wml_content_pane_comp8

0xa532,	// (0x0008495b) bg_popup_sub_pane_cp05

0xc9c5,	// (0x00086dee) popup_wml_miniature_window_g1

0xc9cd,	// (0x00086df6) wml_miniature_view_pane

0x5af4,	// (0x0007ff1d) aid_size_wml_view

0x5afc,	// (0x0007ff25) wml_miniature_view_pane_g1

0x5b05,	// (0x0007ff2e) wml_miniature_view_pane_g2

0x5b0e,	// (0x0007ff37) wml_miniature_view_pane_g3

0x5b16,	// (0x0007ff3f) wml_miniature_view_pane_g4

0x5b1e,	// (0x0007ff47) wml_miniature_view_pane_g5

0x5b26,	// (0x0007ff4f) wml_miniature_view_pane_g6

0x5b2e,	// (0x0007ff57) wml_miniature_view_pane_g7

0x5b36,	// (0x0007ff5f) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x00089ab7) wml_miniature_view_pane_g

0xc99b,	// (0x00086dc4) background_graphic_ParamLimits

0xc99b,	// (0x00086dc4) background_graphic

0xc9d5,	// (0x00086dfe) wml_tabs_2_pane

0xc9de,	// (0x00086e07) wml_tabs_3_pane_ParamLimits

0xc9de,	// (0x00086e07) wml_tabs_3_pane

0xc9f0,	// (0x00086e19) wml_tabs_4_pane_ParamLimits

0xc9f0,	// (0x00086e19) wml_tabs_4_pane

0xca06,	// (0x00086e2f) wml_tabs_5_pane_ParamLimits

0xca06,	// (0x00086e2f) wml_tabs_5_pane

0xca20,	// (0x00086e49) wml_tabs_pane_g2_ParamLimits

0xca20,	// (0x00086e49) wml_tabs_pane_g2

0xca34,	// (0x00086e5d) wml_tabs_pane_g3_ParamLimits

0xca34,	// (0x00086e5d) wml_tabs_pane_g3

0x5b3e,	// (0x0007ff67) wml_tabs_2_active_pane_ParamLimits

0x5b3e,	// (0x0007ff67) wml_tabs_2_active_pane

0x5b4e,	// (0x0007ff77) wml_tabs_2_passive_pane_ParamLimits

0x5b4e,	// (0x0007ff77) wml_tabs_2_passive_pane

0x5b5e,	// (0x0007ff87) wml_tabs_3_active_pane_cp_ParamLimits

0x5b5e,	// (0x0007ff87) wml_tabs_3_active_pane_cp

0x5b6f,	// (0x0007ff98) wml_tabs_3_passive_pane_ParamLimits

0x5b6f,	// (0x0007ff98) wml_tabs_3_passive_pane

0x5b80,	// (0x0007ffa9) wml_tabs_3_passive_pane_cp_ParamLimits

0x5b80,	// (0x0007ffa9) wml_tabs_3_passive_pane_cp

0x5b91,	// (0x0007ffba) tabs_4_active_pane

0x5b99,	// (0x0007ffc2) tabs_4_passive_pane

0x5ba1,	// (0x0007ffca) tabs_4_passive_pane_cp

0x5ba9,	// (0x0007ffd2) tabs_4_passive_pane_cp2

0x50d7,	// (0x0007f500) aid_height_text

0x48e6,	// (0x0007ed0f) mup_volume_cont_pane_ParamLimits

0x48e6,	// (0x0007ed0f) mup_volume_cont_pane

0x24d9,	// (0x0007c902) aid_size_cell_pinb

0x24e3,	// (0x0007c90c) aid_size_list_pinb

0x5aa3,	// (0x0007fecc) mup2_volume_cont_pane_ParamLimits

0x5aa3,	// (0x0007fecc) mup2_volume_cont_pane

0x5bb1,	// (0x0007ffda) mup2_volume_cont_pane_g1_ParamLimits

0x5bb1,	// (0x0007ffda) mup2_volume_cont_pane_g1

0x2113,	// (0x0007c53c) aid_size_cell_touch_ParamLimits

0x2113,	// (0x0007c53c) aid_size_cell_touch

0x23bc,	// (0x0007c7e5) touch_pane_ParamLimits

0x23bc,	// (0x0007c7e5) touch_pane

0xa0cf,	// (0x000844f8) main_rss2_pane

0xca51,	// (0x00086e7a) listscroll_rss2_pane

0xca5a,	// (0x00086e83) rss2_navigation_pane

0xca62,	// (0x00086e8b) list_rss2_pane

0xb25a,	// (0x00085683) scroll_pane_cp22

0xca6a,	// (0x00086e93) rss2_navigation_pane_g1

0xca73,	// (0x00086e9c) rss2_navigation_pane_g2

0xca7b,	// (0x00086ea4) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x00089ac8) rss2_navigation_pane_g

0xca83,	// (0x00086eac) rss2_navigation_pane_t1

0x5bea,	// (0x00080013) rss2_list_single_pane_ParamLimits

0x5bea,	// (0x00080013) rss2_list_single_pane

0xca91,	// (0x00086eba) rss2_list_single_pane_t2

0xca9f,	// (0x00086ec8) rss2_list_single_pane_t3_ParamLimits

0xca9f,	// (0x00086ec8) rss2_list_single_pane_t3

0xcabc,	// (0x00086ee5) rss2_list_single_pane_t4

0x421a,	// (0x0007e643) smil_status_pane_g1

0xb4f7,	// (0x00085920) main_image2_pane_ParamLimits

0xb4f7,	// (0x00085920) main_image2_pane

0x57b6,	// (0x0007fbdf) main_camera2_pane_g9_ParamLimits

0x57b6,	// (0x0007fbdf) main_camera2_pane_g9

0x580a,	// (0x0007fc33) main_camera2_pane_t5_ParamLimits

0x580a,	// (0x0007fc33) main_camera2_pane_t5

0x581c,	// (0x0007fc45) main_camera2_pane_t6_ParamLimits

0x581c,	// (0x0007fc45) main_camera2_pane_t6

0x5c1e,	// (0x00080047) main_image2_pane_g1_ParamLimits

0x5c1e,	// (0x00080047) main_image2_pane_g1

0x4e71,	// (0x0007f29a) smil2_video_pane_ParamLimits

0x4e71,	// (0x0007f29a) smil2_video_pane

0x2147,	// (0x0007c570) aid_zoom_text_primary_cp

0x2365,	// (0x0007c78e) popup_preview_fixed_window

0xab2e,	// (0x00084f57) im_reading_pane_g1

0x5700,	// (0x0007fb29) cams2_bc_adjust_pane_cp_ParamLimits

0x5700,	// (0x0007fb29) cams2_bc_adjust_pane_cp

0x584c,	// (0x0007fc75) cams2_bc_adjust_pane_ParamLimits

0x584c,	// (0x0007fc75) cams2_bc_adjust_pane

0x5c2a,	// (0x00080053) cams2_bc_adjust_pane_g1

0x5c32,	// (0x0008005b) cams2_slider_pane

0x5c3b,	// (0x00080064) cams2_slider_pane_g1

0x5c44,	// (0x0008006d) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x00089acf) cams2_slider_pane_g

0x25e3,	// (0x0007ca0c) calc_display_pane_ParamLimits

0x2601,	// (0x0007ca2a) calc_paper_pane_ParamLimits

0x261d,	// (0x0007ca46) grid_calc_pane_ParamLimits

0x4420,	// (0x0007e849) popup_clock_digital_window_t1_ParamLimits

0xb725,	// (0x00085b4e) main_image_pane_t1

0x25c9,	// (0x0007c9f2) aid_size_cell_calc_ParamLimits

0x25c9,	// (0x0007c9f2) aid_size_cell_calc

0x534c,	// (0x0007f775) popup_blid_sat_info2_window_ParamLimits

0x534c,	// (0x0007f775) popup_blid_sat_info2_window

0xcad2,	// (0x00086efb) aid_size_cell_blid

0xcada,	// (0x00086f03) bg_popup_window_pane_cp07

0xcafd,	// (0x00086f26) grid_popup_blid_pane

0xcb07,	// (0x00086f30) heading_pane_cp05_ParamLimits

0xcb07,	// (0x00086f30) heading_pane_cp05

0xcbd1,	// (0x00086ffa) cell_popup_blid_pane_ParamLimits

0xcbd1,	// (0x00086ffa) cell_popup_blid_pane

0xcbf5,	// (0x0008701e) cell_popup_blid_pane_g1

0xcbfd,	// (0x00087026) cell_popup_blid_pane_t1

0x5a69,	// (0x0007fe92) mup2_indicator_pane_ParamLimits

0x5a69,	// (0x0007fe92) mup2_indicator_pane

0xaa35,	// (0x00084e5e) mup2_visualizer_osc_pane

0xc9b3,	// (0x00086ddc) mup2_visualizer_spec_pane_ParamLimits

0xc9b3,	// (0x00086ddc) mup2_visualizer_spec_pane

0x5c5e,	// (0x00080087) mup2_spec_half_pane

0x5c67,	// (0x00080090) mup2_spec_half_pane_cp

0x5c71,	// (0x0008009a) mup2_spec_bar_pane_ParamLimits

0x5c71,	// (0x0008009a) mup2_spec_bar_pane

0xc948,	// (0x00086d71) mup2_spec_bar_pane_g1

0xc952,	// (0x00086d7b) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00089a42) mup2_spec_bar_pane_g

0x5c90,	// (0x000800b9) mup2_osc_middle_pane

0xc964,	// (0x00086d8d) mup2_visualizer_osc_pane_g1

0xa0f9,	// (0x00084522) popup_number_entry_window_t1_ParamLimits

0xa10c,	// (0x00084535) popup_number_entry_window_t2_ParamLimits

0xa11e,	// (0x00084547) popup_number_entry_window_t3_ParamLimits

0x2413,	// (0x0007c83c) popup_number_entry_window_t5_ParamLimits

0x2413,	// (0x0007c83c) popup_number_entry_window_t5

0xf0ca,	// (0x000894f3) popup_number_entry_window_t_ParamLimits

0xa130,	// (0x00084559) text_title_cp2_ParamLimits

0x4b66,	// (0x0007ef8f) aid_hotspot_pointer_text2_pane

0x4c00,	// (0x0007f029) main_viewer_pane_g9_ParamLimits

0x4c00,	// (0x0007f029) main_viewer_pane_g9

0xad85,	// (0x000851ae) cale_month_pane_t1_ParamLimits

0xadc2,	// (0x000851eb) bg_cale_pane_ParamLimits

0xadda,	// (0x00085203) list_cale_pane_ParamLimits

0xadeb,	// (0x00085214) listscroll_cale_day_pane_t1

0xadfd,	// (0x00085226) scroll_pane_cp09_ParamLimits

0x4925,	// (0x0007ed4e) main_mup_eq_pane_t1_ParamLimits

0x4925,	// (0x0007ed4e) main_mup_eq_pane_t1

0x493f,	// (0x0007ed68) main_mup_eq_pane_t2_ParamLimits

0x493f,	// (0x0007ed68) main_mup_eq_pane_t2

0x4957,	// (0x0007ed80) main_mup_eq_pane_t3_ParamLimits

0x4957,	// (0x0007ed80) main_mup_eq_pane_t3

0x496f,	// (0x0007ed98) main_mup_eq_pane_t4_ParamLimits

0x496f,	// (0x0007ed98) main_mup_eq_pane_t4

0x4987,	// (0x0007edb0) main_mup_eq_pane_t5_ParamLimits

0x4987,	// (0x0007edb0) main_mup_eq_pane_t5

0x499f,	// (0x0007edc8) main_mup_eq_pane_t6_ParamLimits

0x499f,	// (0x0007edc8) main_mup_eq_pane_t6

0x49b3,	// (0x0007eddc) main_mup_eq_pane_t7_ParamLimits

0x49b3,	// (0x0007eddc) main_mup_eq_pane_t7

0x49c7,	// (0x0007edf0) main_mup_eq_pane_t8_ParamLimits

0x49c7,	// (0x0007edf0) main_mup_eq_pane_t8

0x49dd,	// (0x0007ee06) main_mup_eq_pane_t9_ParamLimits

0x49dd,	// (0x0007ee06) main_mup_eq_pane_t9

0x49f5,	// (0x0007ee1e) main_mup_eq_pane_t10_ParamLimits

0x49f5,	// (0x0007ee1e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0008987e) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0008987e) main_mup_eq_pane_t

0x4ab2,	// (0x0007eedb) mup_equalizer_pane_cp5_ParamLimits

0x4ac8,	// (0x0007eef1) mup_equalizer_pane_cp6_ParamLimits

0x4ae0,	// (0x0007ef09) mup_equalizer_pane_cp7_ParamLimits

0xa0cf,	// (0x000844f8) main_gallery_pane

0xc96d,	// (0x00086d96) smil2_volume_pane

0xc975,	// (0x00086d9e) smil_status_volume_pane_g1_ParamLimits

0xc988,	// (0x00086db1) smil_status_volume_pane_g2_ParamLimits

0x5573,	// (0x0007f99c) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x00089a47) smil_status_volume_pane_g_ParamLimits

0xcada,	// (0x00086f03) bg_popup_window_pane_cp07_ParamLimits

0xcae8,	// (0x00086f11) blid_firmament_pane

0x5c99,	// (0x000800c2) aid_size_cell_gallery_ParamLimits

0x5c99,	// (0x000800c2) aid_size_cell_gallery

0x5ca7,	// (0x000800d0) grid_gallery_pane_ParamLimits

0x5ca7,	// (0x000800d0) grid_gallery_pane

0x5cb7,	// (0x000800e0) cell_gallery_pane_ParamLimits

0x5cb7,	// (0x000800e0) cell_gallery_pane

0xcc0b,	// (0x00087034) bg_cell_gallery_focus_pane_ParamLimits

0xcc0b,	// (0x00087034) bg_cell_gallery_focus_pane

0xcc1d,	// (0x00087046) cell_gallery_pane_g1_ParamLimits

0xcc1d,	// (0x00087046) cell_gallery_pane_g1

0x5d05,	// (0x0008012e) cell_gallery_pane_g2_ParamLimits

0x5d05,	// (0x0008012e) cell_gallery_pane_g2

0x5d12,	// (0x0008013b) cell_gallery_pane_g3_ParamLimits

0x5d12,	// (0x0008013b) cell_gallery_pane_g3

0xcc29,	// (0x00087052) cell_gallery_pane_g4_ParamLimits

0xcc29,	// (0x00087052) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x00089af5) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x00089af5) cell_gallery_pane_g

0xcc35,	// (0x0008705e) bg_cell_gallery_focus_pane_g1

0xcc3d,	// (0x00087066) bg_cell_gallery_focus_pane_g2

0xcc45,	// (0x0008706e) bg_cell_gallery_focus_pane_g3

0xcc4d,	// (0x00087076) bg_cell_gallery_focus_pane_g4

0xcc55,	// (0x0008707e) bg_cell_gallery_focus_pane_g5

0xcc5d,	// (0x00087086) bg_cell_gallery_focus_pane_g6

0xcc65,	// (0x0008708e) bg_cell_gallery_focus_pane_g7

0xcc6d,	// (0x00087096) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x00089afe) bg_cell_gallery_focus_pane_g

0xcc75,	// (0x0008709e) aid_firma_cardinal

0xcc89,	// (0x000870b2) blid_firmament_pane_t1

0xcca0,	// (0x000870c9) blid_firmament_pane_t2

0xccb7,	// (0x000870e0) blid_firmament_pane_t3

0xccce,	// (0x000870f7) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x00089b0f) blid_firmament_pane_t

0xcce5,	// (0x0008710e) blid_sat_info_pane

0xccf5,	// (0x0008711e) blid_sat_info_pane_g1

0xccf5,	// (0x0008711e) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x00089b18) blid_sat_info_pane_g

0xccff,	// (0x00087128) blid_sat_info_pane_t1

0xcd0d,	// (0x00087136) smil2_volume_content_pane

0xcd16,	// (0x0008713f) smil2_volume_pane_g1

0xcd1e,	// (0x00087147) smil2_volume_content_pane_g1

0xcd27,	// (0x00087150) smil2_volume_content_pane_g2

0xcd30,	// (0x00087159) smil2_volume_content_pane_g3

0xcd39,	// (0x00087162) smil2_volume_content_pane_g4

0xcd42,	// (0x0008716b) smil2_volume_content_pane_g5

0xcd4b,	// (0x00087174) smil2_volume_content_pane_g6

0xcd54,	// (0x0008717d) smil2_volume_content_pane_g7

0xcd5d,	// (0x00087186) smil2_volume_content_pane_g8

0xcd66,	// (0x0008718f) smil2_volume_content_pane_g9

0xcd6f,	// (0x00087198) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x00089b1d) smil2_volume_content_pane_g

0x2bf9,	// (0x0007d022) cale_week_day_heading_pane_t1_ParamLimits

0x2c14,	// (0x0007d03d) cale_week_day_heading_pane_t2_ParamLimits

0x2c2f,	// (0x0007d058) cale_week_day_heading_pane_t3_ParamLimits

0x2c4a,	// (0x0007d073) cale_week_day_heading_pane_t4_ParamLimits

0x2c65,	// (0x0007d08e) cale_week_day_heading_pane_t5_ParamLimits

0x2c80,	// (0x0007d0a9) cale_week_day_heading_pane_t6_ParamLimits

0x2c9b,	// (0x0007d0c4) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000895fa) cale_week_day_heading_pane_t_ParamLimits

0xa9da,	// (0x00084e03) bg_cale_side_pane_ParamLimits

0x2cb6,	// (0x0007d0df) cale_week_time_pane_t1_ParamLimits

0x2cd0,	// (0x0007d0f9) cale_week_time_pane_t2_ParamLimits

0x2cea,	// (0x0007d113) cale_week_time_pane_t3_ParamLimits

0x2d04,	// (0x0007d12d) cale_week_time_pane_t4_ParamLimits

0x2d1e,	// (0x0007d147) cale_week_time_pane_t5_ParamLimits

0x2d38,	// (0x0007d161) cale_week_time_pane_t6_ParamLimits

0x2d58,	// (0x0007d181) cale_week_time_pane_t7_ParamLimits

0x2d7a,	// (0x0007d1a3) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00089609) cale_week_time_pane_t_ParamLimits

0x2d9e,	// (0x0007d1c7) cell_cale_week_pane_g2_ParamLimits

0xa9da,	// (0x00084e03) bg_cale_side_pane_cp01_ParamLimits

0x4009,	// (0x0007e432) cale_month_week_pane_t1_ParamLimits

0x4022,	// (0x0007e44b) cale_month_week_pane_t2_ParamLimits

0x403b,	// (0x0007e464) cale_month_week_pane_t3_ParamLimits

0x4054,	// (0x0007e47d) cale_month_week_pane_t4_ParamLimits

0x406f,	// (0x0007e498) cale_month_week_pane_t5_ParamLimits

0x4090,	// (0x0007e4b9) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000896de) cale_month_week_pane_t_ParamLimits

0x41d7,	// (0x0007e600) cell_cale_month_pane_g1_ParamLimits

0xa0cf,	// (0x000844f8) main_cale_event_viewer_pane

0xa0cf,	// (0x000844f8) listscroll_cale_event_viewer_pane

0xcd78,	// (0x000871a1) list_cale_ev_pane

0xcd80,	// (0x000871a9) scroll_pane_cp023

0xcd8c,	// (0x000871b5) field_cale_ev_pane_ParamLimits

0xcd8c,	// (0x000871b5) field_cale_ev_pane

0xcdaa,	// (0x000871d3) field_cale_ev_content_pane_ParamLimits

0xcdaa,	// (0x000871d3) field_cale_ev_content_pane

0xcdb6,	// (0x000871df) field_cale_ev_pane_g1_ParamLimits

0xcdb6,	// (0x000871df) field_cale_ev_pane_g1

0xcdc2,	// (0x000871eb) field_cale_ev_pane_g2_ParamLimits

0xcdc2,	// (0x000871eb) field_cale_ev_pane_g2

0xcdda,	// (0x00087203) field_cale_ev_pane_g3_ParamLimits

0xcdda,	// (0x00087203) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x00089b32) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x00089b32) field_cale_ev_pane_g

0xcdf2,	// (0x0008721b) field_cale_ev_pane_t1_ParamLimits

0xcdf2,	// (0x0008721b) field_cale_ev_pane_t1

0xacdc,	// (0x00085105) field_cale_ev_content_pane_t1_ParamLimits

0xacdc,	// (0x00085105) field_cale_ev_content_pane_t1

0xb60b,	// (0x00085a34) bg_button_pane_cp01

0x2984,	// (0x0007cdad) listscroll_cale_week_pane_ParamLimits

0xa985,	// (0x00084dae) popup_toolbar_window_cp01

0xa9ab,	// (0x00084dd4) listscroll_cale_week_pane_t1_ParamLimits

0x2984,	// (0x0007cdad) listscroll_cale_day_pane_ParamLimits

0xa985,	// (0x00084dae) popup_toolbar_window_cp02

0xadeb,	// (0x00085214) listscroll_cale_day_pane_t1_ParamLimits

0x2984,	// (0x0007cdad) main_cale_month_pane_ParamLimits

0x544f,	// (0x0007f878) popup_toolbar_window_cp03_ParamLimits

0x544f,	// (0x0007f878) popup_toolbar_window_cp03

0x4d87,	// (0x0007f1b0) main_image_pane_g2_ParamLimits

0x4d87,	// (0x0007f1b0) main_image_pane_g2

0x4d93,	// (0x0007f1bc) main_image_pane_g3_ParamLimits

0x4d93,	// (0x0007f1bc) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00089910) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00089910) main_image_pane_g

0xb725,	// (0x00085b4e) main_image_pane_t1_ParamLimits

0x4d9f,	// (0x0007f1c8) main_image_pane_t2_ParamLimits

0x4d9f,	// (0x0007f1c8) main_image_pane_t2

0x4db1,	// (0x0007f1da) main_image_pane_t3_ParamLimits

0x4db1,	// (0x0007f1da) main_image_pane_t3

0x4dc3,	// (0x0007f1ec) main_image_pane_t4_ParamLimits

0x4dc3,	// (0x0007f1ec) main_image_pane_t4

0x0003,

0xf4ee,	// (0x00089917) main_image_pane_t_ParamLimits

0xf4ee,	// (0x00089917) main_image_pane_t

0x4dd5,	// (0x0007f1fe) popup_image_details_window_cp01

0x4ddf,	// (0x0007f208) popup_toobar_trans_pane_cp01_ParamLimits

0x4ddf,	// (0x0007f208) popup_toobar_trans_pane_cp01

0x539f,	// (0x0007f7c8) popup_image_details_window_ParamLimits

0x539f,	// (0x0007f7c8) popup_image_details_window

0x53ad,	// (0x0007f7d6) popup_image_focus_window

0x56f2,	// (0x0007fb1b) camera2_autofocus_pane_ParamLimits

0x56f2,	// (0x0007fb1b) camera2_autofocus_pane

0xa0cf,	// (0x000844f8) bg_popup_sub_pane_cp06

0xce09,	// (0x00087232) popup_image_focus_window_g1

0xce11,	// (0x0008723a) popup_image_focus_window_g2

0xce19,	// (0x00087242) popup_image_focus_window_g3

0xce21,	// (0x0008724a) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x00089b39) popup_image_focus_window_g

0xce35,	// (0x0008725e) popup_image_focus_window_t1

0xce43,	// (0x0008726c) popup_image_focus_window_t2

0xce53,	// (0x0008727c) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x00089b42) popup_image_focus_window_t

0xce61,	// (0x0008728a) camera2_autofocus_pane_g1

0xb4f7,	// (0x00085920) bg_tb_trans_pane_cp01

0xce6f,	// (0x00087298) popup_image_details_window_g1

0xce82,	// (0x000872ab) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x00089b54) popup_image_details_window_g

0xceab,	// (0x000872d4) popup_image_details_window_t1

0xcebd,	// (0x000872e6) popup_image_details_window_t2

0xced6,	// (0x000872ff) popup_image_details_window_t3

0xceea,	// (0x00087313) popup_image_details_window_t4

0xcf05,	// (0x0008732e) popup_image_details_window_t5

0x0004,

0xf732,	// (0x00089b5b) popup_image_details_window_t

0xa84a,	// (0x00084c73) bg_calc_paper_pane_ParamLimits

0xa0cf,	// (0x000844f8) grid_highlight_pane_cp013

0x271a,	// (0x0007cb43) list_calc_pane_ParamLimits

0x272c,	// (0x0007cb55) scroll_pane_cp024

0xa85e,	// (0x00084c87) bg_calc_display_pane_ParamLimits

0x2734,	// (0x0007cb5d) calc_display_pane_t1_ParamLimits

0x2749,	// (0x0007cb72) calc_display_pane_t2_ParamLimits

0x275e,	// (0x0007cb87) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0008957a) calc_display_pane_t_ParamLimits

0x283b,	// (0x0007cc64) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x00089597) cell_calc_pane_g

0x2844,	// (0x0007cc6d) cell_calc_pane_t1

0xa8bd,	// (0x00084ce6) grid_highlight_pane_cp02_ParamLimits

0xa8d3,	// (0x00084cfc) toolbar_button_pane_cp01_ParamLimits

0xa8d3,	// (0x00084cfc) toolbar_button_pane_cp01

0xb76a,	// (0x00085b93) temp_image_control_pane_ParamLimits

0xb76a,	// (0x00085b93) temp_image_control_pane

0xb4f7,	// (0x00085920) main_mp3_pane

0xcf1f,	// (0x00087348) temp_image_control_pane_g1_ParamLimits

0xcf1f,	// (0x00087348) temp_image_control_pane_g1

0xcf2d,	// (0x00087356) temp_image_control_pane_g2_ParamLimits

0xcf2d,	// (0x00087356) temp_image_control_pane_g2

0xcf3f,	// (0x00087368) temp_image_control_pane_g3_ParamLimits

0xcf3f,	// (0x00087368) temp_image_control_pane_g3

0x5d4f,	// (0x00080178) temp_image_control_pane_g4_ParamLimits

0x5d4f,	// (0x00080178) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x00089b66) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x00089b66) temp_image_control_pane_g

0xcf1f,	// (0x00087348) main_mp3_pane_g1

0x5d60,	// (0x00080189) main_mp3_pane_g2

0x0007,

0xf746,	// (0x00089b6f) main_mp3_pane_g

0xcf82,	// (0x000873ab) main_mp3_pane_t1

0xaa3d,	// (0x00084e66) main_camera_pane_g8_ParamLimits

0xaa3d,	// (0x00084e66) main_camera_pane_g8

0x3028,	// (0x0007d451) main_video_pane_g7_ParamLimits

0x3028,	// (0x0007d451) main_video_pane_g7

0x583a,	// (0x0007fc63) main_camera2_pane_t7_ParamLimits

0x583a,	// (0x0007fc63) main_camera2_pane_t7

0xab85,	// (0x00084fae) scroll_pane_cp025_ParamLimits

0xab85,	// (0x00084fae) scroll_pane_cp025

0xab99,	// (0x00084fc2) scroll_pane_cp026_ParamLimits

0xab99,	// (0x00084fc2) scroll_pane_cp026

0xaba8,	// (0x00084fd1) wml_content_pane_ParamLimits

0xa0cf,	// (0x000844f8) main_touch_calib_pane

0x5e04,	// (0x0008022d) main_touch_calib_pane_g1

0x5e10,	// (0x00080239) main_touch_calib_pane_g2

0x5e1c,	// (0x00080245) main_touch_calib_pane_g3

0x5e28,	// (0x00080251) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x00089b8d) main_touch_calib_pane_g

0x5e34,	// (0x0008025d) main_touch_calib_pane_t1

0x5e4d,	// (0x00080276) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x00089b96) main_touch_calib_pane_t

0xb329,	// (0x00085752) mup_progress_pane_cp02

0xb35e,	// (0x00085787) navi_pane_g1

0xb419,	// (0x00085842) navi_pane_mp_t3

0xb4f7,	// (0x00085920) main_mp3_pane_ParamLimits

0x548c,	// (0x0007f8b5) navi_pane_ParamLimits

0xcf1f,	// (0x00087348) main_mp3_pane_g1_ParamLimits

0x5d60,	// (0x00080189) main_mp3_pane_g2_ParamLimits

0x5d6c,	// (0x00080195) main_mp3_pane_g3_ParamLimits

0x5d6c,	// (0x00080195) main_mp3_pane_g3

0x5d78,	// (0x000801a1) main_mp3_pane_g4_ParamLimits

0x5d78,	// (0x000801a1) main_mp3_pane_g4

0xcf4f,	// (0x00087378) main_mp3_pane_g5_ParamLimits

0xcf4f,	// (0x00087378) main_mp3_pane_g5

0xcf5d,	// (0x00087386) main_mp3_pane_g6_ParamLimits

0xcf5d,	// (0x00087386) main_mp3_pane_g6

0xcf6a,	// (0x00087393) main_mp3_pane_g7_ParamLimits

0xcf6a,	// (0x00087393) main_mp3_pane_g7

0xcf76,	// (0x0008739f) main_mp3_pane_g8_ParamLimits

0xcf76,	// (0x0008739f) main_mp3_pane_g8

0xf746,	// (0x00089b6f) main_mp3_pane_g_ParamLimits

0x5d84,	// (0x000801ad) main_mp3_pane_t2

0x5d94,	// (0x000801bd) main_mp3_pane_t3

0xcf90,	// (0x000873b9) main_mp3_pane_t4

0xcf9e,	// (0x000873c7) main_mp3_pane_t5

0x0005,

0xf757,	// (0x00089b80) main_mp3_pane_t

0xcfac,	// (0x000873d5) mup_progress_pane_cp01

0x2147,	// (0x0007c570) aid_zoom_text_secondary2

0xcd78,	// (0x000871a1) list_cale_ev2_pane

0xcd80,	// (0x000871a9) scroll_pane_cp023_ParamLimits

0x5ea8,	// (0x000802d1) field_cale_ev2_pane_ParamLimits

0x5ea8,	// (0x000802d1) field_cale_ev2_pane

0x5ed2,	// (0x000802fb) field_cale_ev2_pane_g1_ParamLimits

0x5ed2,	// (0x000802fb) field_cale_ev2_pane_g1

0x5ede,	// (0x00080307) field_cale_ev2_pane_g2_ParamLimits

0x5ede,	// (0x00080307) field_cale_ev2_pane_g2

0x5ef6,	// (0x0008031f) field_cale_ev2_pane_g3_ParamLimits

0x5ef6,	// (0x0008031f) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x00089ba1) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x00089ba1) field_cale_ev2_pane_g

0x1125,	// (0x0007b54e) field_cale_ev2_pane_t1_ParamLimits

0x1125,	// (0x0007b54e) field_cale_ev2_pane_t1

0x113c,	// (0x0007b565) field_cale_ev2_pane_t2_ParamLimits

0x113c,	// (0x0007b565) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x00089baa) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x00089baa) field_cale_ev2_pane_t

0x4c68,	// (0x0007f091) main_postcard_pane_g5_ParamLimits

0x4c68,	// (0x0007f091) main_postcard_pane_g5

0x4c76,	// (0x0007f09f) main_postcard_pane_g6_ParamLimits

0x4c76,	// (0x0007f09f) main_postcard_pane_g6

0x2e72,	// (0x0007d29b) camera2_autofocus_pane_cp_ParamLimits

0x2e72,	// (0x0007d29b) camera2_autofocus_pane_cp

0xb4f7,	// (0x00085920) main_mup3_pane

0x5f59,	// (0x00080382) main_mup3_pane_g1_ParamLimits

0x5f59,	// (0x00080382) main_mup3_pane_g1

0x5f7a,	// (0x000803a3) main_mup3_pane_g2_ParamLimits

0x5f7a,	// (0x000803a3) main_mup3_pane_g2

0x5ff4,	// (0x0008041d) main_mup3_pane_g3_ParamLimits

0x5ff4,	// (0x0008041d) main_mup3_pane_g3

0x6037,	// (0x00080460) main_mup3_pane_g4_ParamLimits

0x6037,	// (0x00080460) main_mup3_pane_g4

0x607a,	// (0x000804a3) main_mup3_pane_g5_ParamLimits

0x607a,	// (0x000804a3) main_mup3_pane_g5

0x60bd,	// (0x000804e6) main_mup3_pane_g6_ParamLimits

0x60bd,	// (0x000804e6) main_mup3_pane_g6

0xcfb4,	// (0x000873dd) main_mup3_pane_g7_ParamLimits

0xcfb4,	// (0x000873dd) main_mup3_pane_g7

0x0007,

0xf791,	// (0x00089bba) main_mup3_pane_g_ParamLimits

0xf791,	// (0x00089bba) main_mup3_pane_g

0x6133,	// (0x0008055c) main_mup3_pane_t1_ParamLimits

0x6133,	// (0x0008055c) main_mup3_pane_t1

0x61a2,	// (0x000805cb) main_mup3_pane_t2_ParamLimits

0x61a2,	// (0x000805cb) main_mup3_pane_t2

0x626b,	// (0x00080694) main_mup3_pane_t4_ParamLimits

0x626b,	// (0x00080694) main_mup3_pane_t4

0x62b9,	// (0x000806e2) main_mup3_pane_t5_ParamLimits

0x62b9,	// (0x000806e2) main_mup3_pane_t5

0x6369,	// (0x00080792) main_mup3_pane_t6_ParamLimits

0x6369,	// (0x00080792) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x00089bcb) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x00089bcb) main_mup3_pane_t

0x6415,	// (0x0008083e) mup3_progress_pane_ParamLimits

0x6415,	// (0x0008083e) mup3_progress_pane

0x6489,	// (0x000808b2) popup_mup3_control_window_ParamLimits

0x6489,	// (0x000808b2) popup_mup3_control_window

0xcfc2,	// (0x000873eb) popup_mup3_text_window

0x64a2,	// (0x000808cb) mup3_progress_pane_t1

0x64c1,	// (0x000808ea) mup3_progress_pane_t2

0xcfca,	// (0x000873f3) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x00089bd8) mup3_progress_pane_t

0xcfe7,	// (0x00087410) mup_progress_pane_cp03

0xa0cf,	// (0x000844f8) bg_tb_trans_pane_cp04

0x64e0,	// (0x00080909) mup3_volume_pane

0x64e8,	// (0x00080911) popup_mup3_control_window_g1

0x64f1,	// (0x0008091a) mup3_volume_pane_g1

0x64fa,	// (0x00080923) mup3_volume_pane_g2

0x6503,	// (0x0008092c) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x00089bdf) mup3_volume_pane_g

0xa0cf,	// (0x000844f8) bg_tb_trans_pane_cp03

0xcff7,	// (0x00087420) popup_mup3_text_window_g1

0xcfff,	// (0x00087428) popup_mup3_text_window_t1

0xa8a6,	// (0x00084ccf) list_calc_item_pane_g1_ParamLimits

0xca48,	// (0x00086e71) mup_volume_pane_cp_g1

0x5e66,	// (0x0008028f) main_touch_calib_pane_t3

0x5e7c,	// (0x000802a5) main_touch_calib_pane_t4

0x5e92,	// (0x000802bb) main_touch_calib_pane_t5

0x20ff,	// (0x0007c528) aid_cell_size_toolbar2

0x2107,	// (0x0007c530) aid_popup3_width_pane

0x0e04,	// (0x0007b22d) aid_zoom_text_msg_primary

0x2e47,	// (0x0007d270) vorec_t7

0xa86a,	// (0x00084c93) bg_calc_paper_pane_g1_ParamLimits

0xa882,	// (0x00084cab) bg_calc_paper_pane_g2_ParamLimits

0xa876,	// (0x00084c9f) bg_calc_paper_pane_g3_ParamLimits

0xa88e,	// (0x00084cb7) bg_calc_paper_pane_g4_ParamLimits

0xa89a,	// (0x00084cc3) bg_calc_paper_pane_g5_ParamLimits

0x279d,	// (0x0007cbc6) bg_calc_paper_pane_g6_ParamLimits

0x27ae,	// (0x0007cbd7) bg_calc_paper_pane_g7_ParamLimits

0x27bf,	// (0x0007cbe8) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00089581) bg_calc_paper_pane_g_ParamLimits

0x27d0,	// (0x0007cbf9) calc_bg_paper_pane_g9_ParamLimits

0x2f59,	// (0x0007d382) image_qvga_pane_ParamLimits

0x2f59,	// (0x0007d382) image_qvga_pane

0xa78d,	// (0x00084bb6) bg_popup_sub_pane_cp04_ParamLimits

0xb6a1,	// (0x00085aca) popup_mup_playback_window_g1_ParamLimits

0xb6ad,	// (0x00085ad6) popup_mup_playback_window_t1_ParamLimits

0xb6c2,	// (0x00085aeb) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0008990b) popup_mup_playback_window_t_ParamLimits

0x5969,	// (0x0007fd92) main_mup2_pane_g3_ParamLimits

0x5969,	// (0x0007fd92) main_mup2_pane_g3

0x3211,	// (0x0007d63a) popup_toolbar_window_cp04

0xbab7,	// (0x00085ee0) popup_call2_audio_second_window_g3_ParamLimits

0xbab7,	// (0x00085ee0) popup_call2_audio_second_window_g3

0xbec1,	// (0x000862ea) popup_call2_audio_first_window_g4_ParamLimits

0xbec1,	// (0x000862ea) popup_call2_audio_first_window_g4

0xc540,	// (0x00086969) popup_call2_audio_in_window_g4_ParamLimits

0xc540,	// (0x00086969) popup_call2_audio_in_window_g4

0x4d7a,	// (0x0007f1a3) aid_area_sk_bg_cut_ParamLimits

0x4d7a,	// (0x0007f1a3) aid_area_sk_bg_cut

0xb6d7,	// (0x00085b00) aid_area_sk_bg_cut_2_ParamLimits

0xb6d7,	// (0x00085b00) aid_area_sk_bg_cut_2

0x5cf5,	// (0x0008011e) aid_placing_details_win

0x5cfd,	// (0x00080126) aid_placing_details_win_2

0xce61,	// (0x0008728a) camera2_autofocus_pane_g1_ParamLimits

0x2356,	// (0x0007c77f) popup_fixed_preview_cale_window_ParamLimits

0x2356,	// (0x0007c77f) popup_fixed_preview_cale_window

0xb4a9,	// (0x000858d2) navi_slider_pane_g3

0xb497,	// (0x000858c0) navi_slider_pane_g4

0xb4a0,	// (0x000858c9) navi_slider_pane_g5

0xb4a9,	// (0x000858d2) navi_slider_pane_g6

0x46c9,	// (0x0007eaf2) navi_slider_pane_g7

0xb5d8,	// (0x00085a01) mup_scale_pane_g3

0xb5e1,	// (0x00085a0a) mup_scale_pane_g4

0xb5ea,	// (0x00085a13) mup_scale_pane_g5

0x4af8,	// (0x0007ef21) mup_scale_pane_g6

0x4b01,	// (0x0007ef2a) mup_scale_pane_g7

0xb4a9,	// (0x000858d2) cams2_slider_pane_g3

0xcaca,	// (0x00086ef3) cams2_slider_pane_g4

0x5c4d,	// (0x00080076) cams2_slider_pane_g5

0xb4a9,	// (0x000858d2) cams2_slider_pane_g6

0x5c55,	// (0x0008007e) cams2_slider_pane_g7

0xccf5,	// (0x0008711e) camera2_autofocus_pane_cp_g1

0xc8e1,	// (0x00086d0a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8e1,	// (0x00086d0a) bg_popup_preview_window_pane_cp02

0xd00d,	// (0x00087436) list_fp_cale_pane_ParamLimits

0xd00d,	// (0x00087436) list_fp_cale_pane

0xd019,	// (0x00087442) popup_fixed_preview_cale_window_t1_ParamLimits

0xd019,	// (0x00087442) popup_fixed_preview_cale_window_t1

0x650c,	// (0x00080935) popup_fixed_preview_cale_window_t2_ParamLimits

0x650c,	// (0x00080935) popup_fixed_preview_cale_window_t2

0x6521,	// (0x0008094a) popup_fixed_preview_cale_window_t3_ParamLimits

0x6521,	// (0x0008094a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x00089be6) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x00089be6) popup_fixed_preview_cale_window_t

0x6536,	// (0x0008095f) list_single_fp_cale_pane_ParamLimits

0x6536,	// (0x0008095f) list_single_fp_cale_pane

0xd037,	// (0x00087460) list_single_fp_cale_pane_g1_ParamLimits

0xd037,	// (0x00087460) list_single_fp_cale_pane_g1

0xd043,	// (0x0008746c) list_single_fp_cale_pane_g2_ParamLimits

0xd043,	// (0x0008746c) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x00089bed) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x00089bed) list_single_fp_cale_pane_g

0xd05c,	// (0x00087485) list_single_fp_cale_pane_t1_ParamLimits

0xd05c,	// (0x00087485) list_single_fp_cale_pane_t1

0xd06e,	// (0x00087497) list_single_fp_cale_pane_t2_ParamLimits

0xd06e,	// (0x00087497) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x00089bf4) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x00089bf4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa0cf,	// (0x000844f8) main_dialer_pane

0x6549,	// (0x00080972) aid_cell_size_keypad

0x6553,	// (0x0008097c) dialer_ne_pane

0x655d,	// (0x00080986) grid_dialer_command_1_pane

0x6565,	// (0x0008098e) grid_dialer_command_2_pane

0x656d,	// (0x00080996) grid_dialer_keypad_pane

0x6581,	// (0x000809aa) bg_popup_call_pane_cp06_ParamLimits

0x6581,	// (0x000809aa) bg_popup_call_pane_cp06

0x658d,	// (0x000809b6) dialer_ne_clear_pane_ParamLimits

0x658d,	// (0x000809b6) dialer_ne_clear_pane

0xd0a1,	// (0x000874ca) dialer_ne_pane_g1

0xd0a9,	// (0x000874d2) dialer_ne_pane_t1_ParamLimits

0xd0a9,	// (0x000874d2) dialer_ne_pane_t1

0x6599,	// (0x000809c2) dialer_ne_pane_t2_ParamLimits

0x6599,	// (0x000809c2) dialer_ne_pane_t2

0x65b6,	// (0x000809df) dialer_ne_pane_t3_ParamLimits

0x65b6,	// (0x000809df) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x00089bf9) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x00089bf9) dialer_ne_pane_t

0x65da,	// (0x00080a03) dialer_ne_pane_t3_copy1_ParamLimits

0x65da,	// (0x00080a03) dialer_ne_pane_t3_copy1

0x65fe,	// (0x00080a27) cell_dialer_keypad_pane_ParamLimits

0x65fe,	// (0x00080a27) cell_dialer_keypad_pane

0x6615,	// (0x00080a3e) cell_dialer_command_1_pane_ParamLimits

0x6615,	// (0x00080a3e) cell_dialer_command_1_pane

0x662b,	// (0x00080a54) cell_dialer_command_2_pane_ParamLimits

0x662b,	// (0x00080a54) cell_dialer_command_2_pane

0xd0bb,	// (0x000874e4) bg_button_pane_cp02_ParamLimits

0xd0bb,	// (0x000874e4) bg_button_pane_cp02

0x663a,	// (0x00080a63) cell_dialer_keypad_pane_g1_ParamLimits

0x663a,	// (0x00080a63) cell_dialer_keypad_pane_g1

0xd0bb,	// (0x000874e4) bg_button_pane_cp03_ParamLimits

0xd0bb,	// (0x000874e4) bg_button_pane_cp03

0x664f,	// (0x00080a78) cell_dialer_command_1_pane_g1_ParamLimits

0x664f,	// (0x00080a78) cell_dialer_command_1_pane_g1

0xd0c7,	// (0x000874f0) bg_button_pane_cp04

0x6663,	// (0x00080a8c) cell_dialer_command_2_pane_g1

0xaa35,	// (0x00084e5e) bg_button_pane_cp06

0xd0cf,	// (0x000874f8) dialer_ne_clear_pane_g1

0xb36a,	// (0x00085793) navi_pane_g2

0xb398,	// (0x000857c1) navi_pane_g3

0x0002,

0xf3e5,	// (0x0008980e) navi_pane_g

0xb427,	// (0x00085850) navi_pane_mv_g2

0xb44e,	// (0x00085877) navi_pane_mv_g5

0x4694,	// (0x0007eabd) navi_pane_mv_t1

0xa85e,	// (0x00084c87) main_clock2_pane

0x66a3,	// (0x00080acc) main_clock2_list_pane_ParamLimits

0x66a3,	// (0x00080acc) main_clock2_list_pane

0x66cd,	// (0x00080af6) main_clock2_pane_t1_ParamLimits

0x66cd,	// (0x00080af6) main_clock2_pane_t1

0x66f1,	// (0x00080b1a) main_clock2_pane_t2_ParamLimits

0x66f1,	// (0x00080b1a) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x00089c05) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x00089c05) main_clock2_pane_t

0x674c,	// (0x00080b75) popup_clock_analogue_window_cp03_ParamLimits

0x674c,	// (0x00080b75) popup_clock_analogue_window_cp03

0x676a,	// (0x00080b93) popup_clock_digital_window_cp02_ParamLimits

0x676a,	// (0x00080b93) popup_clock_digital_window_cp02

0x67d7,	// (0x00080c00) main_clock2_list_single_pane_ParamLimits

0x67d7,	// (0x00080c00) main_clock2_list_single_pane

0xaa35,	// (0x00084e5e) list_highlight_pane_cp05

0xd109,	// (0x00087532) main_clock2_list_single_pane_t1

0x3211,	// (0x0007d63a) popup_toolbar_window_cp04_ParamLimits

0x5d1f,	// (0x00080148) camera2_autofocus_pane_g2_ParamLimits

0x5d1f,	// (0x00080148) camera2_autofocus_pane_g2

0x5d2b,	// (0x00080154) camera2_autofocus_pane_g3_ParamLimits

0x5d2b,	// (0x00080154) camera2_autofocus_pane_g3

0x5d37,	// (0x00080160) camera2_autofocus_pane_g4_ParamLimits

0x5d37,	// (0x00080160) camera2_autofocus_pane_g4

0x5d43,	// (0x0008016c) camera2_autofocus_pane_g5_ParamLimits

0x5d43,	// (0x0008016c) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x00089b49) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x00089b49) camera2_autofocus_pane_g

0x5f1a,	// (0x00080343) camera2_autofocus_pane_cp_g2

0x5f22,	// (0x0008034b) camera2_autofocus_pane_cp_g3

0x5f2a,	// (0x00080353) camera2_autofocus_pane_cp_g4

0x5f32,	// (0x0008035b) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x00089baf) camera2_autofocus_pane_cp_g

0x6579,	// (0x000809a2) popup_dialer_spcha_window

0xa0cf,	// (0x000844f8) bg_popup_sub_pane_cp07

0xd117,	// (0x00087540) list_spcha_pane

0xd11f,	// (0x00087548) list_single_spcha_pane_ParamLimits

0xd11f,	// (0x00087548) list_single_spcha_pane

0xa0cf,	// (0x000844f8) list_highlight_pane_cp06

0xd130,	// (0x00087559) list_single_spcha_pane_t1

0xc2ea,	// (0x00086713) popup_call2_audio_out_window_g4_ParamLimits

0xc2ea,	// (0x00086713) popup_call2_audio_out_window_g4

0xa0cf,	// (0x000844f8) main_imed2_pane

0x53b5,	// (0x0007f7de) popup_imed_adjust2_window

0x53c8,	// (0x0007f7f1) popup_imed_trans_window_ParamLimits

0x53c8,	// (0x0007f7f1) popup_imed_trans_window

0xcb33,	// (0x00086f5c) popup_blid_sat_info2_window_t1

0xcb41,	// (0x00086f6a) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x00089ade) popup_blid_sat_info2_window_t

0x6880,	// (0x00080ca9) aid_size_cell_colour_35

0x689a,	// (0x00080cc3) aid_size_cell_colour_112

0x68b1,	// (0x00080cda) aid_size_cell_effect

0xb4f7,	// (0x00085920) bg_tb_trans_pane_cp02

0xaff0,	// (0x00085419) heading_imed_pane

0x68cb,	// (0x00080cf4) listscroll_imed_pane

0xd13e,	// (0x00087567) heading_imed_pane_g1

0xd146,	// (0x0008756f) heading_imed_pane_t1

0xd154,	// (0x0008757d) grid_imed_colour_35_pane_ParamLimits

0xd154,	// (0x0008757d) grid_imed_colour_35_pane

0x68d7,	// (0x00080d00) grid_imed_effect_pane

0xd16c,	// (0x00087595) list_imed_aspect_pane

0x68e7,	// (0x00080d10) scroll_pane_cp027_ParamLimits

0x68e7,	// (0x00080d10) scroll_pane_cp027

0x68f3,	// (0x00080d1c) cell_imed_effect_pane_ParamLimits

0x68f3,	// (0x00080d1c) cell_imed_effect_pane

0xd174,	// (0x0008759d) cell_imed_colour_pane_ParamLimits

0xd174,	// (0x0008759d) cell_imed_colour_pane

0xd1b6,	// (0x000875df) cell_imed_colour_pane_g1_ParamLimits

0xd1b6,	// (0x000875df) cell_imed_colour_pane_g1

0xd1c7,	// (0x000875f0) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1c7,	// (0x000875f0) hgihlgiht_grid_pane_cp016

0x690b,	// (0x00080d34) cell_imed_effect_pane_g1

0x6913,	// (0x00080d3c) grid_highlight_pane_cp017

0xd1d8,	// (0x00087601) list_imed_single_pane_ParamLimits

0xd1d8,	// (0x00087601) list_imed_single_pane

0xa0cf,	// (0x000844f8) list_highlight_pane_cp07

0xd1ed,	// (0x00087616) list_imed_aspect_pane_comp1_t1

0xc8ed,	// (0x00086d16) bg_tb_trans_pane_cp05

0xd20f,	// (0x00087638) popup_imed_adjust2_window_g1

0xd236,	// (0x0008765f) popup_imed_adjust2_window_t1

0xd24e,	// (0x00087677) slider_imed_adjust_pane

0xd262,	// (0x0008768b) slider_imed_adjust_pane_g1

0xd272,	// (0x0008769b) slider_imed_adjust_pane_g2

0xd282,	// (0x000876ab) slider_imed_adjust_pane_g3

0xd293,	// (0x000876bc) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x00089c22) slider_imed_adjust_pane_g

0x691c,	// (0x00080d45) aid_size_cell_clipart2

0x6928,	// (0x00080d51) grid_imed_clipart_pane

0xd2a4,	// (0x000876cd) scroll_pane_cp031

0x6932,	// (0x00080d5b) cell_imed_clipart_pane_ParamLimits

0x6932,	// (0x00080d5b) cell_imed_clipart_pane

0x6955,	// (0x00080d7e) cell_imed_clipart_pane_g1

0xa0cf,	// (0x000844f8) grid_highlight_pane_cp014

0x66af,	// (0x00080ad8) main_clock2_pane_g1_ParamLimits

0x66af,	// (0x00080ad8) main_clock2_pane_g1

0x6782,	// (0x00080bab) aid_call2_pane_cp10

0x6794,	// (0x00080bbd) aid_call_pane_cp10

0xb2c9,	// (0x000856f2) popup_clock_analogue_window_cp10_g1

0xb2c9,	// (0x000856f2) popup_clock_analogue_window_cp10_g2

0x67a6,	// (0x00080bcf) popup_clock_analogue_window_cp10_g3

0x67a6,	// (0x00080bcf) popup_clock_analogue_window_cp10_g4

0xb2c9,	// (0x000856f2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x00089c10) popup_clock_analogue_window_cp10_g

0x67b8,	// (0x00080be1) popup_clock_analogue_window_cp10_t1

0x67e9,	// (0x00080c12) clock_digital_number_pane_cp10_ParamLimits

0x67e9,	// (0x00080c12) clock_digital_number_pane_cp10

0x6801,	// (0x00080c2a) clock_digital_number_pane_cp11_ParamLimits

0x6801,	// (0x00080c2a) clock_digital_number_pane_cp11

0x6819,	// (0x00080c42) clock_digital_number_pane_cp12_ParamLimits

0x6819,	// (0x00080c42) clock_digital_number_pane_cp12

0x6831,	// (0x00080c5a) clock_digital_number_pane_cp13_ParamLimits

0x6831,	// (0x00080c5a) clock_digital_number_pane_cp13

0x6849,	// (0x00080c72) clock_digital_separator_pane_cp10_ParamLimits

0x6849,	// (0x00080c72) clock_digital_separator_pane_cp10

0x6861,	// (0x00080c8a) popup_clock_digital_window_cp02_t1_ParamLimits

0x6861,	// (0x00080c8a) popup_clock_digital_window_cp02_t1

0xa785,	// (0x00084bae) clock_digital_number_pane_cp10_g1

0xa785,	// (0x00084bae) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x00089c2b) clock_digital_number_pane_cp10_g

0xa785,	// (0x00084bae) clock_digital_separator_pane_cp10_g1

0xa785,	// (0x00084bae) clock_digital_separator_pane_g2_cp10

0xb456,	// (0x0008587f) navi_pane_vded_g4

0xb45f,	// (0x00085888) navi_pane_vded_g5

0xb468,	// (0x00085891) navi_pane_vded_t1

0xa0cf,	// (0x000844f8) main_vded_pane

0x695e,	// (0x00080d87) main_vded_pane_g1

0x696a,	// (0x00080d93) main_vded_pane_g2

0x6974,	// (0x00080d9d) main_vded_pane_g3

0x0002,

0xf807,	// (0x00089c30) main_vded_pane_g

0x697e,	// (0x00080da7) main_vded_pane_t1

0x698c,	// (0x00080db5) main_vded_pane_t2

0x0001,

0xf80e,	// (0x00089c37) main_vded_pane_t

0x699a,	// (0x00080dc3) vded_slider_pane

0x69a4,	// (0x00080dcd) vded_video_pane

0xd2ac,	// (0x000876d5) vded_video_pane_g1

0x69ae,	// (0x00080dd7) vded_video_pane_g2

0xccf5,	// (0x0008711e) vded_video_pane_g3

0x0002,

0xf813,	// (0x00089c3c) vded_video_pane_g

0xd2b6,	// (0x000876df) vded_slider_pane_g1

0xca48,	// (0x00086e71) vded_slider_pane_g2

0xd2bf,	// (0x000876e8) vded_slider_pane_g3

0xd2c8,	// (0x000876f1) vded_slider_pane_g4

0xd2d1,	// (0x000876fa) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x00089c43) vded_slider_pane_g

0x647b,	// (0x000808a4) mup3_rocker_pane_ParamLimits

0x647b,	// (0x000808a4) mup3_rocker_pane

0x69b7,	// (0x00080de0) mup3_control_keys_pane_g1

0x69bf,	// (0x00080de8) mup3_control_keys_pane_g2

0x69c7,	// (0x00080df0) mup3_control_keys_pane_g3

0x69cf,	// (0x00080df8) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x00089c4e) mup3_control_keys_pane_g

0x237e,	// (0x0007c7a7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x237e,	// (0x0007c7a7) popup_toolbar2_fixed_window_cp01

0x6495,	// (0x000808be) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6495,	// (0x000808be) popup_toolbar2_fixed_window_cp02

0xbc29,	// (0x00086052) popup_call2_audio_second_window_t4_ParamLimits

0xbc29,	// (0x00086052) popup_call2_audio_second_window_t4

0xc157,	// (0x00086580) popup_call2_audio_first_window_t6_ParamLimits

0xc157,	// (0x00086580) popup_call2_audio_first_window_t6

0xc3ed,	// (0x00086816) popup_call2_audio_out_window_t6_ParamLimits

0xc3ed,	// (0x00086816) popup_call2_audio_out_window_t6

0xa0cf,	// (0x000844f8) main_vitu_pane

0x69df,	// (0x00080e08) aid_size_cell_itu_ParamLimits

0x69df,	// (0x00080e08) aid_size_cell_itu

0xde40,	// (0x00088269) bg_popup_window_pane_cp08_ParamLimits

0xde40,	// (0x00088269) bg_popup_window_pane_cp08

0x69ed,	// (0x00080e16) field_vitu_entry_pane_ParamLimits

0x69ed,	// (0x00080e16) field_vitu_entry_pane

0x69fc,	// (0x00080e25) grid_vitu_function_pane_ParamLimits

0x69fc,	// (0x00080e25) grid_vitu_function_pane

0x6a0c,	// (0x00080e35) grid_vitu_itu_pane_ParamLimits

0x6a0c,	// (0x00080e35) grid_vitu_itu_pane

0x6a1c,	// (0x00080e45) cell_vitu_itu_pane_ParamLimits

0x6a1c,	// (0x00080e45) cell_vitu_itu_pane

0x6a31,	// (0x00080e5a) cell_vitu_function_pane_ParamLimits

0x6a31,	// (0x00080e5a) cell_vitu_function_pane

0xb4f7,	// (0x00085920) bg_popup_sub_pane_cp08_ParamLimits

0xb4f7,	// (0x00085920) bg_popup_sub_pane_cp08

0x6a43,	// (0x00080e6c) field_vitu_entry_pane_t1_ParamLimits

0x6a43,	// (0x00080e6c) field_vitu_entry_pane_t1

0xd2f2,	// (0x0008771b) field_vitu_entry_pane_t2_ParamLimits

0xd2f2,	// (0x0008771b) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x00089c5c) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x00089c5c) field_vitu_entry_pane_t

0xd30f,	// (0x00087738) bg_button_pane_cp05_ParamLimits

0xd30f,	// (0x00087738) bg_button_pane_cp05

0x6a60,	// (0x00080e89) cell_vitu_itu_pane_g1

0x6a78,	// (0x00080ea1) cell_vitu_itu_pane_t1_ParamLimits

0x6a78,	// (0x00080ea1) cell_vitu_itu_pane_t1

0x6a8a,	// (0x00080eb3) cell_vitu_itu_pane_t2_ParamLimits

0x6a8a,	// (0x00080eb3) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x00089c61) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x00089c61) cell_vitu_itu_pane_t

0xd31d,	// (0x00087746) bg_button_pane_cp07

0x6abf,	// (0x00080ee8) cell_vitu_function_pane_g1

0x2641,	// (0x0007ca6a) main_calc_pane_g1

0x213b,	// (0x0007c564) aid_visual_content_pane

0xa0cf,	// (0x000844f8) main_vradio_pane

0x6ac8,	// (0x00080ef1) main_vradio_pane_g1_ParamLimits

0x6ac8,	// (0x00080ef1) main_vradio_pane_g1

0xd327,	// (0x00087750) main_vradio_pane_g2_ParamLimits

0xd327,	// (0x00087750) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x00089c68) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x00089c68) main_vradio_pane_g

0x6ad8,	// (0x00080f01) main_vradio_pane_t1_ParamLimits

0x6ad8,	// (0x00080f01) main_vradio_pane_t1

0x6aea,	// (0x00080f13) main_vradio_pane_t2_ParamLimits

0x6aea,	// (0x00080f13) main_vradio_pane_t2

0xd334,	// (0x0008775d) main_vradio_pane_t3_ParamLimits

0xd334,	// (0x0008775d) main_vradio_pane_t3

0x0002,

0xf844,	// (0x00089c6d) main_vradio_pane_t_ParamLimits

0xf844,	// (0x00089c6d) main_vradio_pane_t

0x6afc,	// (0x00080f25) vradio_rocker_control_pane_ParamLimits

0x6afc,	// (0x00080f25) vradio_rocker_control_pane

0x6b08,	// (0x00080f31) vradio_station_info_pane_ParamLimits

0x6b08,	// (0x00080f31) vradio_station_info_pane

0xd348,	// (0x00087771) vradio_frequency_info_pane_ParamLimits

0xd348,	// (0x00087771) vradio_frequency_info_pane

0xccf5,	// (0x0008711e) vradio_station_info_pane_g1

0xd357,	// (0x00087780) vradio_station_info_pane_t1_ParamLimits

0xd357,	// (0x00087780) vradio_station_info_pane_t1

0xd379,	// (0x000877a2) vradio_station_info_pane_t2_ParamLimits

0xd379,	// (0x000877a2) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x00089c74) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x00089c74) vradio_station_info_pane_t

0xd38b,	// (0x000877b4) vradio_tuning_pane

0xd393,	// (0x000877bc) vradio_rocker_control_pane_g1

0xd39b,	// (0x000877c4) vradio_rocker_control_pane_g2

0xd3a3,	// (0x000877cc) vradio_rocker_control_pane_g3

0xd3ab,	// (0x000877d4) vradio_rocker_control_pane_g4

0xd3b3,	// (0x000877dc) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x00089c79) vradio_rocker_control_pane_g

0x6b17,	// (0x00080f40) vradio_frequency_info_pane_g1

0xd3bb,	// (0x000877e4) vradio_frequency_info_pane_t1_ParamLimits

0xd3bb,	// (0x000877e4) vradio_frequency_info_pane_t1

0x6b21,	// (0x00080f4a) vradio_tuning_pane_g1

0x6b2a,	// (0x00080f53) vradio_tuning_pane_t1

0x2184,	// (0x0007c5ad) area_side_right_pane_ParamLimits

0x2184,	// (0x0007c5ad) area_side_right_pane

0xc8a8,	// (0x00086cd1) status_small_pane_g1

0xc8b0,	// (0x00086cd9) status_small_pane_g2

0xc8b9,	// (0x00086ce2) status_small_pane_g3

0xc8c2,	// (0x00086ceb) status_small_pane_g4

0x0003,

0xf60b,	// (0x00089a34) status_small_pane_g

0xc8cb,	// (0x00086cf4) status_small_pane_t1

0xa0cf,	// (0x000844f8) main_video3_pane

0xd3cf,	// (0x000877f8) cams_zoom_vslider_pane

0xd3d7,	// (0x00087800) image3_wide_pane_ParamLimits

0xd3d7,	// (0x00087800) image3_wide_pane

0xd3f1,	// (0x0008781a) image3_wide_small_pane

0xd3fd,	// (0x00087826) main_video3_pane_g1_ParamLimits

0xd3fd,	// (0x00087826) main_video3_pane_g1

0xd419,	// (0x00087842) main_video3_pane_g2_ParamLimits

0xd419,	// (0x00087842) main_video3_pane_g2

0x0001,

0xf85b,	// (0x00089c84) main_video3_pane_g_ParamLimits

0xf85b,	// (0x00089c84) main_video3_pane_g

0xd435,	// (0x0008785e) main_video3_pane_t1_ParamLimits

0xd435,	// (0x0008785e) main_video3_pane_t1

0xd460,	// (0x00087889) main_video3_pane_t2_ParamLimits

0xd460,	// (0x00087889) main_video3_pane_t2

0xd48b,	// (0x000878b4) main_video3_pane_t3_ParamLimits

0xd48b,	// (0x000878b4) main_video3_pane_t3

0x0002,

0xf860,	// (0x00089c89) main_video3_pane_t_ParamLimits

0xf860,	// (0x00089c89) main_video3_pane_t

0xd4b8,	// (0x000878e1) cams_zoom_vslider_pane_g1

0xd4c1,	// (0x000878ea) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x00089c90) cams_zoom_vslider_pane_g

0xd4c9,	// (0x000878f2) small_slider_vertical_pane

0xccf5,	// (0x0008711e) small_slider_vertical_pane_g1

0xccf5,	// (0x0008711e) small_slider_vertical_pane_g2

0xd4d1,	// (0x000878fa) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x00089c95) small_slider_vertical_pane_g

0xa0cf,	// (0x000844f8) main_hwr_training_pane

0xd4da,	// (0x00087903) hwr_training_instruct_pane_ParamLimits

0xd4da,	// (0x00087903) hwr_training_instruct_pane

0x6b39,	// (0x00080f62) hwr_training_navi_pane_ParamLimits

0x6b39,	// (0x00080f62) hwr_training_navi_pane

0x6b53,	// (0x00080f7c) hwr_training_write_pane_ParamLimits

0x6b53,	// (0x00080f7c) hwr_training_write_pane

0xa0cf,	// (0x000844f8) bg_frame_shadow_pane

0xd511,	// (0x0008793a) hwr_training_write_pane_g1

0xd519,	// (0x00087942) hwr_training_write_pane_g2

0xd521,	// (0x0008794a) hwr_training_write_pane_g3

0xd529,	// (0x00087952) hwr_training_write_pane_g4

0xd531,	// (0x0008795a) hwr_training_write_pane_g5

0xd539,	// (0x00087962) hwr_training_write_pane_g6

0xd541,	// (0x0008796a) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x00089c9c) hwr_training_write_pane_g

0x6b8b,	// (0x00080fb4) hwr_training_navi_pane_g1_ParamLimits

0x6b8b,	// (0x00080fb4) hwr_training_navi_pane_g1

0x6b9d,	// (0x00080fc6) hwr_training_navi_pane_g2_ParamLimits

0x6b9d,	// (0x00080fc6) hwr_training_navi_pane_g2

0x6baf,	// (0x00080fd8) hwr_training_navi_pane_g3_ParamLimits

0x6baf,	// (0x00080fd8) hwr_training_navi_pane_g3

0x6bbf,	// (0x00080fe8) hwr_training_navi_pane_g4_ParamLimits

0x6bbf,	// (0x00080fe8) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x00089cab) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x00089cab) hwr_training_navi_pane_g

0x6bd9,	// (0x00081002) hwr_training_navi_pane_t1

0x6be7,	// (0x00081010) list_single_hwr_training_instruct_pane_ParamLimits

0x6be7,	// (0x00081010) list_single_hwr_training_instruct_pane

0xd549,	// (0x00087972) list_single_hwr_training_instruct_pane_t1

0xcc35,	// (0x0008705e) bg_frame_shadow_pane_g1

0xd558,	// (0x00087981) bg_frame_shadow_pane_g2

0xd560,	// (0x00087989) bg_frame_shadow_pane_g3

0xd568,	// (0x00087991) bg_frame_shadow_pane_g4

0xd570,	// (0x00087999) bg_frame_shadow_pane_g5

0xd578,	// (0x000879a1) bg_frame_shadow_pane_g6

0xd580,	// (0x000879a9) bg_frame_shadow_pane_g7

0xa929,	// (0x00084d52) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x00089cb6) bg_frame_shadow_pane_g

0xa0cf,	// (0x000844f8) main_video_tele_dialer_pane

0x6c10,	// (0x00081039) aid_size_cell_video_keypad_ParamLimits

0x6c10,	// (0x00081039) aid_size_cell_video_keypad

0x6c20,	// (0x00081049) grid_video_dialer_keypad_pane_ParamLimits

0x6c20,	// (0x00081049) grid_video_dialer_keypad_pane

0x6c54,	// (0x0008107d) video_down_pane_cp_ParamLimits

0x6c54,	// (0x0008107d) video_down_pane_cp

0x6c7e,	// (0x000810a7) cell_video_dialer_keypad_pane_ParamLimits

0x6c7e,	// (0x000810a7) cell_video_dialer_keypad_pane

0xd588,	// (0x000879b1) bg_button_pane_cp08_ParamLimits

0xd588,	// (0x000879b1) bg_button_pane_cp08

0x6c93,	// (0x000810bc) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6c93,	// (0x000810bc) cell_video_dialer_keypad_pane_g1

0x646f,	// (0x00080898) mup3_rocker2_pane_ParamLimits

0x646f,	// (0x00080898) mup3_rocker2_pane

0xccf5,	// (0x0008711e) mup3_rocker2_pane_g1

0x5329,	// (0x0007f752) main_dialer2_pane

0xa0cf,	// (0x000844f8) main_mp4_pane

0x6cd5,	// (0x000810fe) main_mp4_pane_g1_ParamLimits

0x6cd5,	// (0x000810fe) main_mp4_pane_g1

0x6ce3,	// (0x0008110c) main_mp4_pane_g2_ParamLimits

0x6ce3,	// (0x0008110c) main_mp4_pane_g2

0x6cf1,	// (0x0008111a) main_mp4_pane_g3_ParamLimits

0x6cf1,	// (0x0008111a) main_mp4_pane_g3

0x6d36,	// (0x0008115f) main_mp4_pane_g4_ParamLimits

0x6d36,	// (0x0008115f) main_mp4_pane_g4

0x6d5e,	// (0x00081187) main_mp4_pane_g5_ParamLimits

0x6d5e,	// (0x00081187) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x00089cd6) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x00089cd6) main_mp4_pane_g

0x6dae,	// (0x000811d7) main_mp4_pane_t1_ParamLimits

0x6dae,	// (0x000811d7) main_mp4_pane_t1

0x6e0a,	// (0x00081233) main_mp4_pane_t2_ParamLimits

0x6e0a,	// (0x00081233) main_mp4_pane_t2

0xd594,	// (0x000879bd) main_mp4_pane_t3_ParamLimits

0xd594,	// (0x000879bd) main_mp4_pane_t3

0x6e5c,	// (0x00081285) main_mp4_pane_t4_ParamLimits

0x6e5c,	// (0x00081285) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x00089ce3) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x00089ce3) main_mp4_pane_t

0x6ea0,	// (0x000812c9) mp4_progress_pane_ParamLimits

0x6ea0,	// (0x000812c9) mp4_progress_pane

0x6eea,	// (0x00081313) mp4_rocker_pane_ParamLimits

0x6eea,	// (0x00081313) mp4_rocker_pane

0xd5bc,	// (0x000879e5) mp4_progress_pane_t1

0xd5d5,	// (0x000879fe) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00089cec) mp4_progress_pane_t

0xd5ee,	// (0x00087a17) mup_progress_pane_cp04

0xccf5,	// (0x0008711e) mp4_rocker_pane_g1

0x6f0a,	// (0x00081333) aid_cell_size_keypad2_ParamLimits

0x6f0a,	// (0x00081333) aid_cell_size_keypad2

0x6f1a,	// (0x00081343) dialer2_ne_pane_ParamLimits

0x6f1a,	// (0x00081343) dialer2_ne_pane

0x6f28,	// (0x00081351) grid_dialer2_keypad_pane_ParamLimits

0x6f28,	// (0x00081351) grid_dialer2_keypad_pane

0xdd81,	// (0x000881aa) bg_popup_call_pane_cp07_ParamLimits

0xdd81,	// (0x000881aa) bg_popup_call_pane_cp07

0x6f38,	// (0x00081361) dialer2_ne_pane_t1_ParamLimits

0x6f38,	// (0x00081361) dialer2_ne_pane_t1

0x6f5d,	// (0x00081386) cell_dialer2_keypad_pane_ParamLimits

0x6f5d,	// (0x00081386) cell_dialer2_keypad_pane

0xd60c,	// (0x00087a35) bg_button_pane_pane_cp04_ParamLimits

0xd60c,	// (0x00087a35) bg_button_pane_pane_cp04

0x6f72,	// (0x0008139b) cell_dialer2_keypad_pane_g1_ParamLimits

0x6f72,	// (0x0008139b) cell_dialer2_keypad_pane_g1

0x30d3,	// (0x0007d4fc) aid_placing_vt_set_content_ParamLimits

0x30d3,	// (0x0007d4fc) aid_placing_vt_set_content

0x30ff,	// (0x0007d528) aid_placing_vt_set_title_ParamLimits

0x30ff,	// (0x0007d528) aid_placing_vt_set_title

0xa0cf,	// (0x000844f8) main_image3_pane

0x700c,	// (0x00081435) area_side_right_pane_cp01_ParamLimits

0x700c,	// (0x00081435) area_side_right_pane_cp01

0xa431,	// (0x0008485a) main_image3_pane_g1_ParamLimits

0xa431,	// (0x0008485a) main_image3_pane_g1

0x7039,	// (0x00081462) main_image3_pane_g2_ParamLimits

0x7039,	// (0x00081462) main_image3_pane_g2

0x7052,	// (0x0008147b) main_image3_pane_g3_ParamLimits

0x7052,	// (0x0008147b) main_image3_pane_g3

0x706b,	// (0x00081494) main_image3_pane_g4_ParamLimits

0x706b,	// (0x00081494) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00089cfb) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00089cfb) main_image3_pane_g

0x7084,	// (0x000814ad) main_image3_pane_t1_ParamLimits

0x7084,	// (0x000814ad) main_image3_pane_t1

0x70a9,	// (0x000814d2) main_image3_pane_t2_ParamLimits

0x70a9,	// (0x000814d2) main_image3_pane_t2

0x70c8,	// (0x000814f1) main_image3_pane_t3_ParamLimits

0x70c8,	// (0x000814f1) main_image3_pane_t3

0x0003,

0xf8db,	// (0x00089d04) main_image3_pane_t_ParamLimits

0xf8db,	// (0x00089d04) main_image3_pane_t

0xde40,	// (0x00088269) grid_sctrl_middle_pane_cp01_ParamLimits

0xde40,	// (0x00088269) grid_sctrl_middle_pane_cp01

0x7129,	// (0x00081552) cell_sctrl_middle_pane_cp01_ParamLimits

0x7129,	// (0x00081552) cell_sctrl_middle_pane_cp01

0x713a,	// (0x00081563) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x713a,	// (0x00081563) cell_sctrl_middle_pane_cp01_g1

0xa0cf,	// (0x000844f8) main_call4_pane

0x7147,	// (0x00081570) aid_size_button_call4_ParamLimits

0x7147,	// (0x00081570) aid_size_button_call4

0x7177,	// (0x000815a0) call4_windows_pane_ParamLimits

0x7177,	// (0x000815a0) call4_windows_pane

0x7191,	// (0x000815ba) grid_call4_button_pane_ParamLimits

0x7191,	// (0x000815ba) grid_call4_button_pane

0xd618,	// (0x00087a41) call4_windows_conf_pane

0xd62f,	// (0x00087a58) popup_call4_audio_first_window_ParamLimits

0xd62f,	// (0x00087a58) popup_call4_audio_first_window

0xd689,	// (0x00087ab2) popup_call4_audio_second_window_ParamLimits

0xd689,	// (0x00087ab2) popup_call4_audio_second_window

0xd6a2,	// (0x00087acb) popup_call4_audio_wait_window_ParamLimits

0xd6a2,	// (0x00087acb) popup_call4_audio_wait_window

0x71b5,	// (0x000815de) cell_call4_button_pane_ParamLimits

0x71b5,	// (0x000815de) cell_call4_button_pane

0x71da,	// (0x00081603) bg_button_pane_cp09_ParamLimits

0x71da,	// (0x00081603) bg_button_pane_cp09

0x71e6,	// (0x0008160f) cell_call4_button_pane_g1_ParamLimits

0x71e6,	// (0x0008160f) cell_call4_button_pane_g1

0x71f3,	// (0x0008161c) cell_call4_button_pane_t1_ParamLimits

0x71f3,	// (0x0008161c) cell_call4_button_pane_t1

0xd6b8,	// (0x00087ae1) popup_call4_audio_conf_window_ParamLimits

0xd6b8,	// (0x00087ae1) popup_call4_audio_conf_window

0x64a2,	// (0x000808cb) mup3_progress_pane_t1_ParamLimits

0x64c1,	// (0x000808ea) mup3_progress_pane_t2_ParamLimits

0xcfca,	// (0x000873f3) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x00089bd8) mup3_progress_pane_t_ParamLimits

0xcfe7,	// (0x00087410) mup_progress_pane_cp03_ParamLimits

0x69d7,	// (0x00080e00) mup3_control_keys_pane_g4_copy1

0x6ece,	// (0x000812f7) mp4_rocker2_pane_ParamLimits

0x6ece,	// (0x000812f7) mp4_rocker2_pane

0xd6cc,	// (0x00087af5) mp4_rocker2_pane_g1

0xd6d4,	// (0x00087afd) mp4_rocker2_pane_g2

0x7237,	// (0x00081660) mp4_rocker2_pane_g3

0x723f,	// (0x00081668) mp4_rocker2_pane_g4

0x7247,	// (0x00081670) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x00089d0d) mp4_rocker2_pane_g

0xa0cf,	// (0x000844f8) main_camera4_pane

0xa0cf,	// (0x000844f8) main_video4_pane

0x6c30,	// (0x00081059) main_video_tele_dialer_pane_t1_ParamLimits

0x6c30,	// (0x00081059) main_video_tele_dialer_pane_t1

0x6c42,	// (0x0008106b) main_video_tele_dialer_pane_t2_ParamLimits

0x6c42,	// (0x0008106b) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x00089cc7) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x00089cc7) main_video_tele_dialer_pane_t

0x7267,	// (0x00081690) cam4_autofocus_pane_ParamLimits

0x7267,	// (0x00081690) cam4_autofocus_pane

0x7281,	// (0x000816aa) cam4_image_uncrop_pane_ParamLimits

0x7281,	// (0x000816aa) cam4_image_uncrop_pane

0x7298,	// (0x000816c1) cam4_indicators_pane_ParamLimits

0x7298,	// (0x000816c1) cam4_indicators_pane

0x72b4,	// (0x000816dd) main_camera4_pane_g1_ParamLimits

0x72b4,	// (0x000816dd) main_camera4_pane_g1

0x72c0,	// (0x000816e9) main_camera4_pane_g2_ParamLimits

0x72c0,	// (0x000816e9) main_camera4_pane_g2

0x72c0,	// (0x000816e9) main_camera4_pane_g3_ParamLimits

0x72c0,	// (0x000816e9) main_camera4_pane_g3

0x72cc,	// (0x000816f5) main_camera4_pane_g4_ParamLimits

0x72cc,	// (0x000816f5) main_camera4_pane_g4

0x72d8,	// (0x00081701) main_camera4_pane_g5_ParamLimits

0x72d8,	// (0x00081701) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00089d18) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00089d18) main_camera4_pane_g

0x72f2,	// (0x0008171b) main_camera4_pane_t1_ParamLimits

0x72f2,	// (0x0008171b) main_camera4_pane_t1

0xcf4f,	// (0x00087378) bg_tb_trans_pane_cp06

0x7342,	// (0x0008176b) cam4_indicators_pane_g1

0x7353,	// (0x0008177c) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x00089d33) cam4_indicators_pane_g

0x736b,	// (0x00081794) cam4_indicators_pane_t1

0x7395,	// (0x000817be) main_video4_pane_g1_ParamLimits

0x7395,	// (0x000817be) main_video4_pane_g1

0x73a1,	// (0x000817ca) main_video4_pane_g2_ParamLimits

0x73a1,	// (0x000817ca) main_video4_pane_g2

0x73ad,	// (0x000817d6) main_video4_pane_g3_ParamLimits

0x73ad,	// (0x000817d6) main_video4_pane_g3

0x73b9,	// (0x000817e2) main_video4_pane_g4_ParamLimits

0x73b9,	// (0x000817e2) main_video4_pane_g4

0x0004,

0xf911,	// (0x00089d3a) main_video4_pane_g_ParamLimits

0xf911,	// (0x00089d3a) main_video4_pane_g

0x73d9,	// (0x00081802) vid4_indicators_pane_ParamLimits

0x73d9,	// (0x00081802) vid4_indicators_pane

0x73f8,	// (0x00081821) video4_image_uncrop_cif_pane_ParamLimits

0x73f8,	// (0x00081821) video4_image_uncrop_cif_pane

0x7407,	// (0x00081830) video4_image_uncrop_nhd_pane_ParamLimits

0x7407,	// (0x00081830) video4_image_uncrop_nhd_pane

0x7281,	// (0x000816aa) video4_image_uncrop_vga_pane_ParamLimits

0x7281,	// (0x000816aa) video4_image_uncrop_vga_pane

0xb4f7,	// (0x00085920) bg_tb_trans_pane_cp07

0x741c,	// (0x00081845) vid4_indicators_pane_g1

0x7430,	// (0x00081859) vid4_indicators_pane_g2

0x7444,	// (0x0008186d) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x00089d45) vid4_indicators_pane_g

0x7471,	// (0x0008189a) vid4_indicators_pane_t1

0x7488,	// (0x000818b1) cam4_autofocus_pane_g1

0x7490,	// (0x000818b9) cam4_autofocus_pane_g2

0x7498,	// (0x000818c1) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x00089d50) cam4_autofocus_pane_g

0x74a0,	// (0x000818c9) cam4_autofocus_pane_g3_copy1

0x6c62,	// (0x0008108b) video_down_pane_cp_t1

0x6c70,	// (0x00081099) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x00089ccc) video_down_pane_cp_t

0xde40,	// (0x00088269) popup_vitu2_window_ParamLimits

0xde40,	// (0x00088269) popup_vitu2_window

0x74a8,	// (0x000818d1) aid_size_cell2_itu2_ParamLimits

0x74a8,	// (0x000818d1) aid_size_cell2_itu2

0x74ca,	// (0x000818f3) aid_size_cell_itu2_ParamLimits

0x74ca,	// (0x000818f3) aid_size_cell_itu2

0xdd81,	// (0x000881aa) bg_popup_window_pane_cp09_ParamLimits

0xdd81,	// (0x000881aa) bg_popup_window_pane_cp09

0x750e,	// (0x00081937) field_vitu2_entry_pane_ParamLimits

0x750e,	// (0x00081937) field_vitu2_entry_pane

0x752e,	// (0x00081957) grid_vitu2_function_pane_ParamLimits

0x752e,	// (0x00081957) grid_vitu2_function_pane

0x7572,	// (0x0008199b) grid_vitu2_itu_pane_ParamLimits

0x7572,	// (0x0008199b) grid_vitu2_itu_pane

0x75ec,	// (0x00081a15) cell_vitu2_itu_pane_ParamLimits

0x75ec,	// (0x00081a15) cell_vitu2_itu_pane

0x7605,	// (0x00081a2e) cell_vitu2_function_pane_ParamLimits

0x7605,	// (0x00081a2e) cell_vitu2_function_pane

0xd6e5,	// (0x00087b0e) bg_popup_call_pane_cp08_ParamLimits

0xd6e5,	// (0x00087b0e) bg_popup_call_pane_cp08

0xd6fc,	// (0x00087b25) field_vitu2_entry_pane_g1

0xd708,	// (0x00087b31) field_vitu2_entry_pane_g2

0x0002,

0x0816,	// (0x0007ac3f) field_vitu2_entry_pane_g

0x1151,	// (0x0007b57a) field_vitu2_entry_pane_t1_ParamLimits

0x1151,	// (0x0007b57a) field_vitu2_entry_pane_t1

0x1181,	// (0x0007b5aa) field_vitu2_entry_pane_t2_ParamLimits

0x1181,	// (0x0007b5aa) field_vitu2_entry_pane_t2

0x0001,

0xf92e,	// (0x00089d57) field_vitu2_entry_pane_t_ParamLimits

0xf92e,	// (0x00089d57) field_vitu2_entry_pane_t

0x7646,	// (0x00081a6f) bg_button_pane_cp010_ParamLimits

0x7646,	// (0x00081a6f) bg_button_pane_cp010

0x7654,	// (0x00081a7d) cell_vitu2_itu_pane_g1

0x7674,	// (0x00081a9d) cell_vitu2_itu_pane_t1_ParamLimits

0x7674,	// (0x00081a9d) cell_vitu2_itu_pane_t1

0x119e,	// (0x0007b5c7) cell_vitu2_itu_pane_t2_ParamLimits

0x119e,	// (0x0007b5c7) cell_vitu2_itu_pane_t2

0x0002,

0xf938,	// (0x00089d61) cell_vitu2_itu_pane_t_ParamLimits

0xf938,	// (0x00089d61) cell_vitu2_itu_pane_t

0xb4f7,	// (0x00085920) bg_button_pane_cp011

0x76c0,	// (0x00081ae9) cell_vitu2_function_pane_g1

0xa0cf,	// (0x000844f8) main_myfav_hc_pane

0x710a,	// (0x00081533) popup_image3_note_pane_ParamLimits

0x710a,	// (0x00081533) popup_image3_note_pane

0x7118,	// (0x00081541) popup_image3_tool_bar_pane_ParamLimits

0x7118,	// (0x00081541) popup_image3_tool_bar_pane

0x1214,	// (0x0007b63d) cell_vitu2_itu_pane_t3_ParamLimits

0x1214,	// (0x0007b63d) cell_vitu2_itu_pane_t3

0xa0cf,	// (0x000844f8) bg_popup_trans_pane

0xd72a,	// (0x00087b53) grid_image3_tool_bar_pane

0xd73d,	// (0x00087b66) bg_popup_trans_pane_g1

0xac8e,	// (0x000850b7) bg_popup_trans_pane_g2

0xd745,	// (0x00087b6e) bg_popup_trans_pane_g3

0xd74d,	// (0x00087b76) bg_popup_trans_pane_g4

0xd755,	// (0x00087b7e) bg_popup_trans_pane_g5

0xd75d,	// (0x00087b86) bg_popup_trans_pane_g6

0xd765,	// (0x00087b8e) bg_popup_trans_pane_g7

0xd76d,	// (0x00087b96) bg_popup_trans_pane_g8

0xac6e,	// (0x00085097) bg_popup_trans_pane_g9

0x0008,

0xf93f,	// (0x00089d68) bg_popup_trans_pane_g

0xd775,	// (0x00087b9e) cell_image3_tool_bar_pane_ParamLimits

0xd775,	// (0x00087b9e) cell_image3_tool_bar_pane

0xccf5,	// (0x0008711e) cell_image3_tool_bar_pane_g1

0xa0cf,	// (0x000844f8) bg_popup_trans_pane_cp1

0xd789,	// (0x00087bb2) popup_image3_note_pane_t1

0xd797,	// (0x00087bc0) popup_image3_note_pane_t2

0xd7a5,	// (0x00087bce) popup_image3_note_pane_t3

0x0002,

0xf952,	// (0x00089d7b) popup_image3_note_pane_t

0xd7b3,	// (0x00087bdc) popup_image3_note_pane_t3_copy1

0x76d4,	// (0x00081afd) bg_myfav_hc_instruction_pane_ParamLimits

0x76d4,	// (0x00081afd) bg_myfav_hc_instruction_pane

0x76ec,	// (0x00081b15) cell_myfav_contact_pane_ParamLimits

0x76ec,	// (0x00081b15) cell_myfav_contact_pane

0x7706,	// (0x00081b2f) cell_myfav_contact_pane_cp1_ParamLimits

0x7706,	// (0x00081b2f) cell_myfav_contact_pane_cp1

0x771e,	// (0x00081b47) cell_myfav_contact_pane_cp2_ParamLimits

0x771e,	// (0x00081b47) cell_myfav_contact_pane_cp2

0x7736,	// (0x00081b5f) cell_myfav_contact_pane_cp3_ParamLimits

0x7736,	// (0x00081b5f) cell_myfav_contact_pane_cp3

0x774d,	// (0x00081b76) cell_myfav_contact_pane_cp4_ParamLimits

0x774d,	// (0x00081b76) cell_myfav_contact_pane_cp4

0x7763,	// (0x00081b8c) cell_myfav_contact_pane_cp5_ParamLimits

0x7763,	// (0x00081b8c) cell_myfav_contact_pane_cp5

0x7777,	// (0x00081ba0) cell_myfav_contact_pane_cp6_ParamLimits

0x7777,	// (0x00081ba0) cell_myfav_contact_pane_cp6

0x778b,	// (0x00081bb4) cell_myfav_contact_pane_cp7_ParamLimits

0x778b,	// (0x00081bb4) cell_myfav_contact_pane_cp7

0xd7c1,	// (0x00087bea) listscroll_gen_pane_cp05

0x77a3,	// (0x00081bcc) main_myfav_hc_pane_g1_ParamLimits

0x77a3,	// (0x00081bcc) main_myfav_hc_pane_g1

0x77b9,	// (0x00081be2) main_myfav_hc_pane_g2_ParamLimits

0x77b9,	// (0x00081be2) main_myfav_hc_pane_g2

0x0002,

0xf959,	// (0x00089d82) main_myfav_hc_pane_g_ParamLimits

0xf959,	// (0x00089d82) main_myfav_hc_pane_g

0x77e9,	// (0x00081c12) main_myfav_hc_pane_t1_ParamLimits

0x77e9,	// (0x00081c12) main_myfav_hc_pane_t1

0xd7ca,	// (0x00087bf3) main_myfav_hc_pane_t2_ParamLimits

0xd7ca,	// (0x00087bf3) main_myfav_hc_pane_t2

0xd7dc,	// (0x00087c05) main_myfav_hc_pane_t3_ParamLimits

0xd7dc,	// (0x00087c05) main_myfav_hc_pane_t3

0x7800,	// (0x00081c29) main_myfav_hc_pane_t4_ParamLimits

0x7800,	// (0x00081c29) main_myfav_hc_pane_t4

0x0004,

0xf960,	// (0x00089d89) main_myfav_hc_pane_t_ParamLimits

0xf960,	// (0x00089d89) main_myfav_hc_pane_t

0xccf5,	// (0x0008711e) bg_myfav_hc_instruction_pane_g1

0xd7ee,	// (0x00087c17) cell_myfav_contact_pane_g1_ParamLimits

0xd7ee,	// (0x00087c17) cell_myfav_contact_pane_g1

0xd7ee,	// (0x00087c17) cell_myfav_contact_pane_g2_ParamLimits

0xd7ee,	// (0x00087c17) cell_myfav_contact_pane_g2

0xd7fa,	// (0x00087c23) cell_myfav_contact_pane_g3_ParamLimits

0xd7fa,	// (0x00087c23) cell_myfav_contact_pane_g3

0xcfb4,	// (0x000873dd) cell_myfav_contact_pane_g4_ParamLimits

0xcfb4,	// (0x000873dd) cell_myfav_contact_pane_g4

0xd807,	// (0x00087c30) cell_myfav_contact_pane_g5_ParamLimits

0xd807,	// (0x00087c30) cell_myfav_contact_pane_g5

0x0004,

0xf96b,	// (0x00089d94) cell_myfav_contact_pane_g_ParamLimits

0xf96b,	// (0x00089d94) cell_myfav_contact_pane_g

0x77d1,	// (0x00081bfa) main_myfav_hc_pane_g3_ParamLimits

0x77d1,	// (0x00081bfa) main_myfav_hc_pane_g3

0x22b9,	// (0x0007c6e2) popup_adpt_find_window

0x782a,	// (0x00081c53) afind_page_pane_ParamLimits

0x782a,	// (0x00081c53) afind_page_pane

0x7837,	// (0x00081c60) aid_size_cell_afind_ParamLimits

0x7837,	// (0x00081c60) aid_size_cell_afind

0x7851,	// (0x00081c7a) bg_popup_sub_pane_cp09_ParamLimits

0x7851,	// (0x00081c7a) bg_popup_sub_pane_cp09

0x785e,	// (0x00081c87) find_pane_cp01_ParamLimits

0x785e,	// (0x00081c87) find_pane_cp01

0xd813,	// (0x00087c3c) grid_afind_control_pane_ParamLimits

0xd813,	// (0x00087c3c) grid_afind_control_pane

0x786b,	// (0x00081c94) grid_afind_pane_ParamLimits

0x786b,	// (0x00081c94) grid_afind_pane

0x7885,	// (0x00081cae) cell_afind_pane_ParamLimits

0x7885,	// (0x00081cae) cell_afind_pane

0xccf5,	// (0x0008711e) afind_page_pane_g1

0x78cd,	// (0x00081cf6) afind_page_pane_g2

0x78d6,	// (0x00081cff) afind_page_pane_g3

0x0002,

0xf976,	// (0x00089d9f) afind_page_pane_g

0x78df,	// (0x00081d08) afind_page_pane_t1

0xd827,	// (0x00087c50) cell_afind_grid_control_pane_ParamLimits

0xd827,	// (0x00087c50) cell_afind_grid_control_pane

0xd60c,	// (0x00087a35) bg_button_pane_cp69_ParamLimits

0xd60c,	// (0x00087a35) bg_button_pane_cp69

0x78ff,	// (0x00081d28) cell_afind_pane_g1_ParamLimits

0x78ff,	// (0x00081d28) cell_afind_pane_g1

0x790c,	// (0x00081d35) cell_afind_pane_t1_ParamLimits

0x790c,	// (0x00081d35) cell_afind_pane_t1

0xaa87,	// (0x00084eb0) bg_button_pane_cp72

0xd836,	// (0x00087c5f) cell_afind_grid_control_pane_g1

0x4ea1,	// (0x0007f2ca) aid_image_placing_area_ParamLimits

0x4ea1,	// (0x0007f2ca) aid_image_placing_area

0xd2da,	// (0x00087703) field_vitu_entry_pane_g1_ParamLimits

0xd2da,	// (0x00087703) field_vitu_entry_pane_g1

0xd2e6,	// (0x0008770f) field_vitu_entry_pane_g2_ParamLimits

0xd2e6,	// (0x0008770f) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x00089c57) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x00089c57) field_vitu_entry_pane_g

0x6a60,	// (0x00080e89) cell_vitu_itu_pane_g1_ParamLimits

0x6aa2,	// (0x00080ecb) cell_vitu_itu_pane_t3_ParamLimits

0x6aa2,	// (0x00080ecb) cell_vitu_itu_pane_t3

0xd5bc,	// (0x000879e5) mp4_progress_pane_t1_ParamLimits

0xd5d5,	// (0x000879fe) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00089cec) mp4_progress_pane_t_ParamLimits

0xd5ee,	// (0x00087a17) mup_progress_pane_cp04_ParamLimits

0x7814,	// (0x00081c3d) main_myfav_hc_pane_t5_ParamLimits

0x7814,	// (0x00081c3d) main_myfav_hc_pane_t5

0x0e0c,	// (0x0007b235) aid_zoom_text_primary

0x22b9,	// (0x0007c6e2) popup_adpt_find_window_ParamLimits

0xb4f7,	// (0x00085920) main_cam_set_pane

0x72a6,	// (0x000816cf) cam4_zoom_pane_ParamLimits

0x72a6,	// (0x000816cf) cam4_zoom_pane

0x791e,	// (0x00081d47) main_cam_set_pane_g1_ParamLimits

0x791e,	// (0x00081d47) main_cam_set_pane_g1

0x792c,	// (0x00081d55) main_cam_set_pane_g2_ParamLimits

0x792c,	// (0x00081d55) main_cam_set_pane_g2

0x0001,

0xf97d,	// (0x00089da6) main_cam_set_pane_g_ParamLimits

0xf97d,	// (0x00089da6) main_cam_set_pane_g

0x7938,	// (0x00081d61) main_cam_set_pane_t1_ParamLimits

0x7938,	// (0x00081d61) main_cam_set_pane_t1

0x7954,	// (0x00081d7d) main_cset_listscroll_pane_ParamLimits

0x7954,	// (0x00081d7d) main_cset_listscroll_pane

0x797f,	// (0x00081da8) main_cset_slider_pane_ParamLimits

0x797f,	// (0x00081da8) main_cset_slider_pane

0xd847,	// (0x00087c70) main_cset_list_pane_ParamLimits

0xd847,	// (0x00087c70) main_cset_list_pane

0xd857,	// (0x00087c80) scroll_pane_cp028

0x799e,	// (0x00081dc7) aid_area_touch_slider

0x79ba,	// (0x00081de3) cset_slider_pane

0x79e4,	// (0x00081e0d) main_cset_slider_pane_g1

0x79f9,	// (0x00081e22) main_cset_slider_pane_g2

0x0011,

0xf982,	// (0x00089dab) main_cset_slider_pane_g

0xd8a8,	// (0x00087cd1) main_cset_slider_pane_t1

0x7abf,	// (0x00081ee8) main_cset_slider_pane_t2

0x7ad9,	// (0x00081f02) main_cset_slider_pane_t3

0x7af3,	// (0x00081f1c) main_cset_slider_pane_t4

0x7b11,	// (0x00081f3a) main_cset_slider_pane_t5

0x7b2f,	// (0x00081f58) main_cset_slider_pane_t6

0x7b46,	// (0x00081f6f) main_cset_slider_pane_t7

0x000e,

0xf9a7,	// (0x00089dd0) main_cset_slider_pane_t

0x7c54,	// (0x0008207d) cset_list_set_pane_ParamLimits

0x7c54,	// (0x0008207d) cset_list_set_pane

0x7c6d,	// (0x00082096) aid_position_infowindow_above

0x7c75,	// (0x0008209e) aid_position_infowindow_below

0x7c7d,	// (0x000820a6) cset_list_set_pane_g1_ParamLimits

0x7c7d,	// (0x000820a6) cset_list_set_pane_g1

0x1266,	// (0x0007b68f) cset_list_set_pane_g3_ParamLimits

0x1266,	// (0x0007b68f) cset_list_set_pane_g3

0x0001,

0xf9c6,	// (0x00089def) cset_list_set_pane_g_ParamLimits

0xf9c6,	// (0x00089def) cset_list_set_pane_g

0x1275,	// (0x0007b69e) cset_list_set_pane_t1_ParamLimits

0x1275,	// (0x0007b69e) cset_list_set_pane_t1

0xb4f7,	// (0x00085920) list_highlight_pane_cp021_ParamLimits

0xb4f7,	// (0x00085920) list_highlight_pane_cp021

0xb5d8,	// (0x00085a01) cset_slider_pane_g1

0xb5ea,	// (0x00085a13) cset_slider_pane_g2

0xb5e1,	// (0x00085a0a) cset_slider_pane_g3

0x0002,

0xf9cb,	// (0x00089df4) cset_slider_pane_g

0x7c89,	// (0x000820b2) aid_area_touch_cam4_zoom

0x7c91,	// (0x000820ba) cam4_zoom_cont_pane

0x7c99,	// (0x000820c2) cam4_zoom_pane_g1

0x7ca1,	// (0x000820ca) cam4_zoom_pane_g2

0x7ca9,	// (0x000820d2) cam4_zoom_pane_g3

0x0002,

0xf9d2,	// (0x00089dfb) cam4_zoom_pane_g

0xd4d1,	// (0x000878fa) cam4_zoom_cont_pane_g1

0xde4e,	// (0x00088277) cam4_zoom_cont_pane_g2

0xde57,	// (0x00088280) cam4_zoom_cont_pane_g3

0x0002,

0xf9d9,	// (0x00089e02) cam4_zoom_cont_pane_g

0x7161,	// (0x0008158a) call4_image_pane_ParamLimits

0x7161,	// (0x0008158a) call4_image_pane

0xd618,	// (0x00087a41) call4_windows_conf_pane_ParamLimits

0xd655,	// (0x00087a7e) popup_call4_audio_in_window_ParamLimits

0xd655,	// (0x00087a7e) popup_call4_audio_in_window

0xa0cf,	// (0x000844f8) bg_popup_call2_act_pane_cp02

0xd6b0,	// (0x00087ad9) call4_list_conf_pane

0xccf5,	// (0x0008711e) call4_image_pane_g1

0xccf5,	// (0x0008711e) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x00089b18) call4_image_pane_g

0xd948,	// (0x00087d71) list_single_graphic_popup_conf4_pane_ParamLimits

0xd948,	// (0x00087d71) list_single_graphic_popup_conf4_pane

0xa0cf,	// (0x000844f8) list_highlight_pane_cp022

0xd95b,	// (0x00087d84) list_single_graphic_popup_conf4_pane_g1

0xb1c6,	// (0x000855ef) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e0,	// (0x00089e09) list_single_graphic_popup_conf4_pane_g

0xd963,	// (0x00087d8c) list_single_graphic_popup_conf4_pane_t1

0x3263,	// (0x0007d68c) popup_vtel_slider_window_ParamLimits

0x3263,	// (0x0007d68c) popup_vtel_slider_window

0xd5fa,	// (0x00087a23) dialer2_ne_pane_t2_ParamLimits

0xd5fa,	// (0x00087a23) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x00089cf1) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x00089cf1) dialer2_ne_pane_t

0xb4f7,	// (0x00085920) bg_popup_sub_pane_cp010_ParamLimits

0xb4f7,	// (0x00085920) bg_popup_sub_pane_cp010

0x7cb1,	// (0x000820da) popup_vtel_slider_window_g1_ParamLimits

0x7cb1,	// (0x000820da) popup_vtel_slider_window_g1

0x7cbd,	// (0x000820e6) popup_vtel_slider_window_g2_ParamLimits

0x7cbd,	// (0x000820e6) popup_vtel_slider_window_g2

0x0003,

0xf9e5,	// (0x00089e0e) popup_vtel_slider_window_g_ParamLimits

0xf9e5,	// (0x00089e0e) popup_vtel_slider_window_g

0x7d05,	// (0x0008212e) vtel_slider_pane_ParamLimits

0x7d05,	// (0x0008212e) vtel_slider_pane

0x7d14,	// (0x0008213d) vtel_slider_pane_g1_ParamLimits

0x7d14,	// (0x0008213d) vtel_slider_pane_g1

0x7d21,	// (0x0008214a) vtel_slider_pane_g2_ParamLimits

0x7d21,	// (0x0008214a) vtel_slider_pane_g2

0x7d2e,	// (0x00082157) vtel_slider_pane_g3_ParamLimits

0x7d2e,	// (0x00082157) vtel_slider_pane_g3

0x7d14,	// (0x0008213d) vtel_slider_pane_g4_ParamLimits

0x7d14,	// (0x0008213d) vtel_slider_pane_g4

0x7d3b,	// (0x00082164) vtel_slider_pane_g5_ParamLimits

0x7d3b,	// (0x00082164) vtel_slider_pane_g5

0x0004,

0xf9ee,	// (0x00089e17) vtel_slider_pane_g_ParamLimits

0xf9ee,	// (0x00089e17) vtel_slider_pane_g

0xb4f7,	// (0x00085920) main_gallery2_pane

0x74f0,	// (0x00081919) aid_size_row_itut2_dropdow_list_ParamLimits

0x74f0,	// (0x00081919) aid_size_row_itut2_dropdow_list

0x7550,	// (0x00081979) grid_vitu2_function_top_pane_ParamLimits

0x7550,	// (0x00081979) grid_vitu2_function_top_pane

0x75aa,	// (0x000819d3) popup_vitu2_dropdown_list_window_ParamLimits

0x75aa,	// (0x000819d3) popup_vitu2_dropdown_list_window

0x75ca,	// (0x000819f3) popup_vitu2_match_list_window

0x7d48,	// (0x00082171) cell_vitu2_function_top_pane_ParamLimits

0x7d48,	// (0x00082171) cell_vitu2_function_top_pane

0x7d62,	// (0x0008218b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7d62,	// (0x0008218b) cell_vitu2_function_top_pane_cp01

0x7d7e,	// (0x000821a7) cell_vitu2_function_top_wide_pane_ParamLimits

0x7d7e,	// (0x000821a7) cell_vitu2_function_top_wide_pane

0xb4f7,	// (0x00085920) bg_button_pane_cp012

0x7d9a,	// (0x000821c3) cell_vitu2_function_top_pane_g1

0x7dae,	// (0x000821d7) bg_button_pane_cp013_ParamLimits

0x7dae,	// (0x000821d7) bg_button_pane_cp013

0x7dca,	// (0x000821f3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7dca,	// (0x000821f3) cell_vitu2_function_top_wide_pane_g1

0xde40,	// (0x00088269) bg_popup_sub_pane_cp20

0x7de2,	// (0x0008220b) list_vitu2_match_list_pane

0xd73d,	// (0x00087b66) bg_popup_sub_pane_cp20_g1

0xd745,	// (0x00087b6e) bg_popup_sub_pane_cp20_g2

0xac8e,	// (0x000850b7) bg_popup_sub_pane_cp20_g3

0xd74d,	// (0x00087b76) bg_popup_sub_pane_cp20_g4

0xac6e,	// (0x00085097) bg_popup_sub_pane_cp20_g5

0xd979,	// (0x00087da2) bg_popup_sub_pane_cp20_g6

0xd75d,	// (0x00087b86) bg_popup_sub_pane_cp20_g7

0xd765,	// (0x00087b8e) bg_popup_sub_pane_cp20_g8

0xd76d,	// (0x00087b96) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f9,	// (0x00089e22) bg_popup_sub_pane_cp20_g

0x7dfa,	// (0x00082223) list_vitu2_match_list_item_pane_ParamLimits

0x7dfa,	// (0x00082223) list_vitu2_match_list_item_pane

0x7e0c,	// (0x00082235) list_vitu2_match_list_item_pane_t1

0xa0cf,	// (0x000844f8) bg_popup_sub_pane_cp21

0xb0ee,	// (0x00085517) grid_vitu2_dropdown_list_pane

0x7e26,	// (0x0008224f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7e26,	// (0x0008224f) cell_vitu2_dropdown_list_char_pane

0x7e47,	// (0x00082270) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7e47,	// (0x00082270) cell_vitu2_dropdown_list_ctrl_pane

0xd981,	// (0x00087daa) cell_vitu2_dropdown_list_char_pane_g1

0xd98a,	// (0x00087db3) cell_vitu2_dropdown_list_char_pane_g2

0xd993,	// (0x00087dbc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa16,	// (0x00089e3f) cell_vitu2_dropdown_list_char_pane_g

0x7e73,	// (0x0008229c) cell_vitu2_dropdown_list_char_pane_t1

0x7e81,	// (0x000822aa) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7e81,	// (0x000822aa) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7e91,	// (0x000822ba) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7e91,	// (0x000822ba) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7ea2,	// (0x000822cb) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7ea2,	// (0x000822cb) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7eb2,	// (0x000822db) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7eb2,	// (0x000822db) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf4f,	// (0x00087378) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf4f,	// (0x00087378) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1d,	// (0x00089e46) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1d,	// (0x00089e46) cell_vitu2_dropdown_list_ctrl_pane_g

0x7ece,	// (0x000822f7) aid_size_cell_gallery2_ParamLimits

0x7ece,	// (0x000822f7) aid_size_cell_gallery2

0x7ee8,	// (0x00082311) grid_gallery2_pane_ParamLimits

0x7ee8,	// (0x00082311) grid_gallery2_pane

0x7eff,	// (0x00082328) scroll_pane_cp029_ParamLimits

0x7eff,	// (0x00082328) scroll_pane_cp029

0x7f0f,	// (0x00082338) cell_gallery2_pane_ParamLimits

0x7f0f,	// (0x00082338) cell_gallery2_pane

0xd99c,	// (0x00087dc5) cell_gallery2_pane_g2

0x7f64,	// (0x0008238d) cell_gallery2_pane_g3

0xd9a4,	// (0x00087dcd) cell_gallery2_pane_g4

0xd9ac,	// (0x00087dd5) cell_gallery2_pane_g5

0xaa35,	// (0x00084e5e) grid_highlight_pane_cp10

0x75ca,	// (0x000819f3) popup_vitu2_match_list_window_ParamLimits

0x75dc,	// (0x00081a05) popup_vitu2_query_window_ParamLimits

0x75dc,	// (0x00081a05) popup_vitu2_query_window

0xa0cf,	// (0x000844f8) bg_vitu2_candi_button_pane

0xd981,	// (0x00087daa) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd98a,	// (0x00087db3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd993,	// (0x00087dbc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x12d4,	// (0x0007b6fd) bg_button_pane_cp015

0x7f6c,	// (0x00082395) bg_button_pane_cp016

0x7f7f,	// (0x000823a8) bg_button_pane_cp017

0xc8ed,	// (0x00086d16) bg_popup_sub_pane_cp22

0xd9b4,	// (0x00087ddd) popup_vitu2_query_window_g1

0x1307,	// (0x0007b730) popup_vitu2_query_window_g2

0x0002,

0xfa28,	// (0x00089e51) popup_vitu2_query_window_g

0x1324,	// (0x0007b74d) popup_vitu2_query_window_t1_ParamLimits

0x1324,	// (0x0007b74d) popup_vitu2_query_window_t1

0x1357,	// (0x0007b780) popup_vitu2_query_window_t2_ParamLimits

0x1357,	// (0x0007b780) popup_vitu2_query_window_t2

0x1369,	// (0x0007b792) popup_vitu2_query_window_t3_ParamLimits

0x1369,	// (0x0007b792) popup_vitu2_query_window_t3

0x7fa3,	// (0x000823cc) popup_vitu2_query_window_t4_ParamLimits

0x7fa3,	// (0x000823cc) popup_vitu2_query_window_t4

0x7fc4,	// (0x000823ed) popup_vitu2_query_window_t5_ParamLimits

0x7fc4,	// (0x000823ed) popup_vitu2_query_window_t5

0x0006,

0xfa2f,	// (0x00089e58) popup_vitu2_query_window_t_ParamLimits

0xfa2f,	// (0x00089e58) popup_vitu2_query_window_t

0xd83f,	// (0x00087c68) main_cset_text_pane

0x799e,	// (0x00081dc7) aid_area_touch_slider_ParamLimits

0x79ba,	// (0x00081de3) cset_slider_pane_ParamLimits

0x79e4,	// (0x00081e0d) main_cset_slider_pane_g1_ParamLimits

0x79f9,	// (0x00081e22) main_cset_slider_pane_g2_ParamLimits

0xd860,	// (0x00087c89) main_cset_slider_pane_g3_ParamLimits

0xd860,	// (0x00087c89) main_cset_slider_pane_g3

0x7a0e,	// (0x00081e37) main_cset_slider_pane_g4_ParamLimits

0x7a0e,	// (0x00081e37) main_cset_slider_pane_g4

0x7a1d,	// (0x00081e46) main_cset_slider_pane_g5_ParamLimits

0x7a1d,	// (0x00081e46) main_cset_slider_pane_g5

0x7a2b,	// (0x00081e54) main_cset_slider_pane_g6_ParamLimits

0x7a2b,	// (0x00081e54) main_cset_slider_pane_g6

0xf982,	// (0x00089dab) main_cset_slider_pane_g_ParamLimits

0xd8a8,	// (0x00087cd1) main_cset_slider_pane_t1_ParamLimits

0x7abf,	// (0x00081ee8) main_cset_slider_pane_t2_ParamLimits

0x7ad9,	// (0x00081f02) main_cset_slider_pane_t3_ParamLimits

0x7af3,	// (0x00081f1c) main_cset_slider_pane_t4_ParamLimits

0x7b11,	// (0x00081f3a) main_cset_slider_pane_t5_ParamLimits

0x7b2f,	// (0x00081f58) main_cset_slider_pane_t6_ParamLimits

0x7b46,	// (0x00081f6f) main_cset_slider_pane_t7_ParamLimits

0x7b74,	// (0x00081f9d) main_cset_slider_pane_t8_ParamLimits

0x7b74,	// (0x00081f9d) main_cset_slider_pane_t8

0x7b9c,	// (0x00081fc5) main_cset_slider_pane_t9_ParamLimits

0x7b9c,	// (0x00081fc5) main_cset_slider_pane_t9

0x7bc4,	// (0x00081fed) main_cset_slider_pane_t10_ParamLimits

0x7bc4,	// (0x00081fed) main_cset_slider_pane_t10

0x7bec,	// (0x00082015) main_cset_slider_pane_t11_ParamLimits

0x7bec,	// (0x00082015) main_cset_slider_pane_t11

0x7c16,	// (0x0008203f) main_cset_slider_pane_t12_ParamLimits

0x7c16,	// (0x0008203f) main_cset_slider_pane_t12

0x7c35,	// (0x0008205e) main_cset_slider_pane_t13_ParamLimits

0x7c35,	// (0x0008205e) main_cset_slider_pane_t13

0xf9a7,	// (0x00089dd0) main_cset_slider_pane_t_ParamLimits

0xa0cf,	// (0x000844f8) bg_popup_sub_pane_cp011

0xd9c0,	// (0x00087de9) main_cset_text_pane_g1

0xd9c8,	// (0x00087df1) main_cset_text_pane_t1

0xd9d6,	// (0x00087dff) main_cset_text_pane_t2

0xd9e4,	// (0x00087e0d) main_cset_text_pane_t3

0xd9f2,	// (0x00087e1b) main_cset_text_pane_t4

0xda00,	// (0x00087e29) main_cset_text_pane_t5

0xda0e,	// (0x00087e37) main_cset_text_pane_t6

0xda1c,	// (0x00087e45) main_cset_text_pane_t7

0x0006,

0xfa3e,	// (0x00089e67) main_cset_text_pane_t

0xa0cf,	// (0x000844f8) main_cam4_burst_pane

0xa0cf,	// (0x000844f8) main_cam5_pane

0x78ed,	// (0x00081d16) bg_button_pane_cp019

0x78f6,	// (0x00081d1f) bg_button_pane_cp020

0xd86c,	// (0x00087c95) main_cset_slider_pane_g7_ParamLimits

0xd86c,	// (0x00087c95) main_cset_slider_pane_g7

0xd878,	// (0x00087ca1) main_cset_slider_pane_g8_ParamLimits

0xd878,	// (0x00087ca1) main_cset_slider_pane_g8

0x7a3f,	// (0x00081e68) main_cset_slider_pane_g9_ParamLimits

0x7a3f,	// (0x00081e68) main_cset_slider_pane_g9

0x7a4b,	// (0x00081e74) main_cset_slider_pane_g10_ParamLimits

0x7a4b,	// (0x00081e74) main_cset_slider_pane_g10

0x7a57,	// (0x00081e80) main_cset_slider_pane_g11_ParamLimits

0x7a57,	// (0x00081e80) main_cset_slider_pane_g11

0x7a63,	// (0x00081e8c) main_cset_slider_pane_g12_ParamLimits

0x7a63,	// (0x00081e8c) main_cset_slider_pane_g12

0x7a6f,	// (0x00081e98) main_cset_slider_pane_g13_ParamLimits

0x7a6f,	// (0x00081e98) main_cset_slider_pane_g13

0x7a7d,	// (0x00081ea6) main_cset_slider_pane_g14_ParamLimits

0x7a7d,	// (0x00081ea6) main_cset_slider_pane_g14

0x7a8b,	// (0x00081eb4) main_cset_slider_pane_g15_ParamLimits

0x7a8b,	// (0x00081eb4) main_cset_slider_pane_g15

0xd8d6,	// (0x00087cff) main_cset_slider_pane_t14_ParamLimits

0xd8d6,	// (0x00087cff) main_cset_slider_pane_t14

0xd90f,	// (0x00087d38) main_cset_slider_pane_t15_ParamLimits

0xd90f,	// (0x00087d38) main_cset_slider_pane_t15

0x7fe5,	// (0x0008240e) aid_cam4_burst_size_cell_ParamLimits

0x7fe5,	// (0x0008240e) aid_cam4_burst_size_cell

0x8001,	// (0x0008242a) grid_cam4_burst_pane_ParamLimits

0x8001,	// (0x0008242a) grid_cam4_burst_pane

0x8031,	// (0x0008245a) linegrid_cam4_burst_pane_ParamLimits

0x8031,	// (0x0008245a) linegrid_cam4_burst_pane

0x8051,	// (0x0008247a) scroll_pane_cp30_ParamLimits

0x8051,	// (0x0008247a) scroll_pane_cp30

0x805d,	// (0x00082486) cell_cam4_burst_pane_ParamLimits

0x805d,	// (0x00082486) cell_cam4_burst_pane

0xda2a,	// (0x00087e53) linegrid_cam4_burst_pane_g1_ParamLimits

0xda2a,	// (0x00087e53) linegrid_cam4_burst_pane_g1

0x8099,	// (0x000824c2) linegrid_cam4_burst_pane_g2_ParamLimits

0x8099,	// (0x000824c2) linegrid_cam4_burst_pane_g2

0xda37,	// (0x00087e60) linegrid_cam4_burst_pane_g3_ParamLimits

0xda37,	// (0x00087e60) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4d,	// (0x00089e76) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4d,	// (0x00089e76) linegrid_cam4_burst_pane_g

0x80aa,	// (0x000824d3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x80aa,	// (0x000824d3) linegrid_cam4_burst_pane_g3_copy1

0xda44,	// (0x00087e6d) linegrid_cam4_burst_pane_g4_ParamLimits

0xda44,	// (0x00087e6d) linegrid_cam4_burst_pane_g4

0x80c4,	// (0x000824ed) linegrid_cam4_burst_pane_g5_ParamLimits

0x80c4,	// (0x000824ed) linegrid_cam4_burst_pane_g5

0x80d5,	// (0x000824fe) linegrid_cam4_burst_pane_g6_ParamLimits

0x80d5,	// (0x000824fe) linegrid_cam4_burst_pane_g6

0xda51,	// (0x00087e7a) linegrid_cam4_burst_pane_g7_ParamLimits

0xda51,	// (0x00087e7a) linegrid_cam4_burst_pane_g7

0x80e6,	// (0x0008250f) cell_cam4_burst_pane_g1

0xda6a,	// (0x00087e93) main_cam5_pane_t1_ParamLimits

0xda6a,	// (0x00087e93) main_cam5_pane_t1

0xda88,	// (0x00087eb1) main_cam5_pane_t2_ParamLimits

0xda88,	// (0x00087eb1) main_cam5_pane_t2

0xda9a,	// (0x00087ec3) main_cam5_pane_t3_ParamLimits

0xda9a,	// (0x00087ec3) main_cam5_pane_t3

0xdaac,	// (0x00087ed5) main_cam5_pane_t4_ParamLimits

0xdaac,	// (0x00087ed5) main_cam5_pane_t4

0xdac4,	// (0x00087eed) main_cam5_pane_t5_ParamLimits

0xdac4,	// (0x00087eed) main_cam5_pane_t5

0xdad8,	// (0x00087f01) main_cam5_pane_t6_ParamLimits

0xdad8,	// (0x00087f01) main_cam5_pane_t6

0xdaec,	// (0x00087f15) main_cam5_pane_t7_ParamLimits

0xdaec,	// (0x00087f15) main_cam5_pane_t7

0xdafe,	// (0x00087f27) main_cam5_pane_t8_ParamLimits

0xdafe,	// (0x00087f27) main_cam5_pane_t8

0xdb1a,	// (0x00087f43) main_cam5_pane_t9_ParamLimits

0xdb1a,	// (0x00087f43) main_cam5_pane_t9

0xdb2c,	// (0x00087f55) main_cam5_pane_t10_ParamLimits

0xdb2c,	// (0x00087f55) main_cam5_pane_t10

0xdb3e,	// (0x00087f67) main_cam5_pane_t11_ParamLimits

0xdb3e,	// (0x00087f67) main_cam5_pane_t11

0xdb50,	// (0x00087f79) main_cam5_pane_t12_ParamLimits

0xdb50,	// (0x00087f79) main_cam5_pane_t12

0xdb65,	// (0x00087f8e) main_cam5_pane_t13_ParamLimits

0xdb65,	// (0x00087f8e) main_cam5_pane_t13

0x000c,

0xfa59,	// (0x00089e82) main_cam5_pane_t_ParamLimits

0xfa59,	// (0x00089e82) main_cam5_pane_t

0x236f,	// (0x0007c798) popup_scut_keymap_window_ParamLimits

0x236f,	// (0x0007c798) popup_scut_keymap_window

0x80f9,	// (0x00082522) aid_size_cell_brow_shortcut

0xaa35,	// (0x00084e5e) bg_popup_window_pane_cp010

0x8105,	// (0x0008252e) grid_scut_pane

0x8111,	// (0x0008253a) cell_scut_pane_ParamLimits

0x8111,	// (0x0008253a) cell_scut_pane

0x8128,	// (0x00082551) cell_scut_pane_g1

0xdb82,	// (0x00087fab) cell_scut_pane_t1

0xdb91,	// (0x00087fba) cell_scut_pane_t2

0x8131,	// (0x0008255a) cell_scut_pane_t3

0x0002,

0xfa74,	// (0x00089e9d) cell_scut_pane_t

0x60cb,	// (0x000804f4) main_mup3_pane_g8_ParamLimits

0x60cb,	// (0x000804f4) main_mup3_pane_g8

0x74fe,	// (0x00081927) area_vitu2_query_pane_ParamLimits

0x74fe,	// (0x00081927) area_vitu2_query_pane

0x12e6,	// (0x0007b70f) input_focus_pane_cp08

0xdba0,	// (0x00087fc9) area_vitu2_query_pane_g1

0x13e7,	// (0x0007b810) area_vitu2_query_pane_g2

0x0001,

0xfa7b,	// (0x00089ea4) area_vitu2_query_pane_g

0x813f,	// (0x00082568) area_vitu2_query_pane_t1_ParamLimits

0x813f,	// (0x00082568) area_vitu2_query_pane_t1

0x8153,	// (0x0008257c) area_vitu2_query_pane_t2_ParamLimits

0x8153,	// (0x0008257c) area_vitu2_query_pane_t2

0x13f8,	// (0x0007b821) area_vitu2_query_pane_t3_ParamLimits

0x13f8,	// (0x0007b821) area_vitu2_query_pane_t3

0x1420,	// (0x0007b849) area_vitu2_query_pane_t4_ParamLimits

0x1420,	// (0x0007b849) area_vitu2_query_pane_t4

0x1448,	// (0x0007b871) area_vitu2_query_pane_t5_ParamLimits

0x1448,	// (0x0007b871) area_vitu2_query_pane_t5

0x1470,	// (0x0007b899) area_vitu2_query_pane_t6_ParamLimits

0x1470,	// (0x0007b899) area_vitu2_query_pane_t6

0x0006,

0xfa80,	// (0x00089ea9) area_vitu2_query_pane_t_ParamLimits

0xfa80,	// (0x00089ea9) area_vitu2_query_pane_t

0x8167,	// (0x00082590) bg_button_pane_cp018

0x8175,	// (0x0008259e) bg_button_pane_cp021

0x14bc,	// (0x0007b8e5) bg_button_pane_cp022

0x14cd,	// (0x0007b8f6) input_focus_pane_cp09

0xb2d5,	// (0x000856fe) aid_size_touch_mv_arrow_left

0xb300,	// (0x00085729) aid_size_touch_mv_arrow_right

0x7aa3,	// (0x00081ecc) main_cset_slider_pane_g16_ParamLimits

0x7aa3,	// (0x00081ecc) main_cset_slider_pane_g16

0x7ab1,	// (0x00081eda) main_cset_slider_pane_g17_ParamLimits

0x7ab1,	// (0x00081eda) main_cset_slider_pane_g17

0x80e6,	// (0x0008250f) cell_cam4_burst_pane_g1_ParamLimits

0xa0cf,	// (0x000844f8) compa_mode_pane

0x7cc9,	// (0x000820f2) popup_vtel_slider_window_g3_ParamLimits

0x7cc9,	// (0x000820f2) popup_vtel_slider_window_g3

0x7cdd,	// (0x00082106) popup_vtel_slider_window_g4_ParamLimits

0x7cdd,	// (0x00082106) popup_vtel_slider_window_g4

0x7cf1,	// (0x0008211a) popup_vtel_slider_window_t1_ParamLimits

0x7cf1,	// (0x0008211a) popup_vtel_slider_window_t1

0xa0cf,	// (0x000844f8) main_cl_pane

0x53b5,	// (0x0007f7de) popup_imed_adjust2_window_ParamLimits

0xc8ed,	// (0x00086d16) bg_tb_trans_pane_cp05_ParamLimits

0xd20f,	// (0x00087638) popup_imed_adjust2_window_g1_ParamLimits

0xd21e,	// (0x00087647) popup_imed_adjust2_window_g2_ParamLimits

0xd21e,	// (0x00087647) popup_imed_adjust2_window_g2

0xd22a,	// (0x00087653) popup_imed_adjust2_window_g3_ParamLimits

0xd22a,	// (0x00087653) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x00089c1b) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x00089c1b) popup_imed_adjust2_window_g

0xd236,	// (0x0008765f) popup_imed_adjust2_window_t1_ParamLimits

0xd24e,	// (0x00087677) slider_imed_adjust_pane_ParamLimits

0xd262,	// (0x0008768b) slider_imed_adjust_pane_g1_ParamLimits

0xd272,	// (0x0008769b) slider_imed_adjust_pane_g2_ParamLimits

0xd282,	// (0x000876ab) slider_imed_adjust_pane_g3_ParamLimits

0xd293,	// (0x000876bc) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x00089c22) slider_imed_adjust_pane_g_ParamLimits

0x724f,	// (0x00081678) aid_touch_area_cam4_ParamLimits

0x724f,	// (0x00081678) aid_touch_area_cam4

0x725f,	// (0x00081688) battery_pane_cp01

0x72e6,	// (0x0008170f) main_camera4_pane_g6_ParamLimits

0x72e6,	// (0x0008170f) main_camera4_pane_g6

0x7304,	// (0x0008172d) main_camera4_pane_t2_ParamLimits

0x7304,	// (0x0008172d) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x00089d25) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x00089d25) main_camera4_pane_t

0x7385,	// (0x000817ae) aid_touch_area_vid4_ParamLimits

0x7385,	// (0x000817ae) aid_touch_area_vid4

0x73c5,	// (0x000817ee) main_video4_pane_g5_ParamLimits

0x73c5,	// (0x000817ee) main_video4_pane_g5

0x73e9,	// (0x00081812) vid4_progress_pane_ParamLimits

0x73e9,	// (0x00081812) vid4_progress_pane

0xd884,	// (0x00087cad) main_cset_slider_pane_g18_ParamLimits

0xd884,	// (0x00087cad) main_cset_slider_pane_g18

0xda5e,	// (0x00087e87) cell_cam4_burst_pane_g2_ParamLimits

0xda5e,	// (0x00087e87) cell_cam4_burst_pane_g2

0x0001,

0xfa54,	// (0x00089e7d) cell_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x00089e7d) cell_cam4_burst_pane_g

0x8181,	// (0x000825aa) bg_cl_pane_ParamLimits

0x8181,	// (0x000825aa) bg_cl_pane

0x818d,	// (0x000825b6) cl_header_pane_ParamLimits

0x818d,	// (0x000825b6) cl_header_pane

0x8199,	// (0x000825c2) cl_listscroll_pane_ParamLimits

0x8199,	// (0x000825c2) cl_listscroll_pane

0xdbac,	// (0x00087fd5) bg_cl_pane_g1

0xdbb4,	// (0x00087fdd) bg_cl_pane_g2

0xdbbc,	// (0x00087fe5) bg_cl_pane_g3

0xdbc4,	// (0x00087fed) bg_cl_pane_g4

0xdbcc,	// (0x00087ff5) bg_cl_pane_g5

0xdbd4,	// (0x00087ffd) bg_cl_pane_g6

0xdbdc,	// (0x00088005) bg_cl_pane_g7

0xdbe4,	// (0x0008800d) bg_cl_pane_g8

0xdbec,	// (0x00088015) bg_cl_pane_g9

0x0008,

0xfa8f,	// (0x00089eb8) bg_cl_pane_g

0x81a5,	// (0x000825ce) aid_height_cl_leading_ParamLimits

0x81a5,	// (0x000825ce) aid_height_cl_leading

0x81b1,	// (0x000825da) aid_height_cl_text_ParamLimits

0x81b1,	// (0x000825da) aid_height_cl_text

0xde40,	// (0x00088269) bg_cl_header_pane_ParamLimits

0xde40,	// (0x00088269) bg_cl_header_pane

0x81c9,	// (0x000825f2) cl_header_pane_g1_ParamLimits

0x81c9,	// (0x000825f2) cl_header_pane_g1

0x81d6,	// (0x000825ff) cl_header_pane_t1_ParamLimits

0x81d6,	// (0x000825ff) cl_header_pane_t1

0xdbf4,	// (0x0008801d) cl_list_pane

0xd857,	// (0x00087c80) hc_scroll_pane_cp01

0xac6e,	// (0x00085097) bg_cl_header_pane_g1

0xd73d,	// (0x00087b66) bg_cl_header_pane_g2

0xac8e,	// (0x000850b7) bg_cl_header_pane_g3

0xd74d,	// (0x00087b76) bg_cl_header_pane_g4

0xd745,	// (0x00087b6e) bg_cl_header_pane_g5

0xd979,	// (0x00087da2) bg_cl_header_pane_g6

0xd765,	// (0x00087b8e) bg_cl_header_pane_g7

0xd76d,	// (0x00087b96) bg_cl_header_pane_g8

0xd75d,	// (0x00087b86) bg_cl_header_pane_g9

0x0008,

0xfaa2,	// (0x00089ecb) bg_cl_header_pane_g

0x81e8,	// (0x00082611) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x81e8,	// (0x00082611) hc_cl_list_double_graphic_heading_pane

0x81fc,	// (0x00082625) hc_cl_list_single_graphic_pane_ParamLimits

0x81fc,	// (0x00082625) hc_cl_list_single_graphic_pane

0x8216,	// (0x0008263f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8216,	// (0x0008263f) hc_cl_list_single_graphic_pane_g1

0x8222,	// (0x0008264b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8222,	// (0x0008264b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab5,	// (0x00089ede) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab5,	// (0x00089ede) hc_cl_list_single_graphic_pane_g

0x8236,	// (0x0008265f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8236,	// (0x0008265f) hc_cl_list_single_graphic_pane_t1

0x8216,	// (0x0008263f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8216,	// (0x0008263f) hc_cl_list_double_graphic_heading_pane_g1

0x824b,	// (0x00082674) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x824b,	// (0x00082674) hc_cl_list_double_graphic_heading_pane_g2

0x825f,	// (0x00082688) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x825f,	// (0x00082688) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaba,	// (0x00089ee3) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaba,	// (0x00089ee3) hc_cl_list_double_graphic_heading_pane_g

0x8273,	// (0x0008269c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8273,	// (0x0008269c) hc_cl_list_double_graphic_heading_pane_t1

0x8288,	// (0x000826b1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8288,	// (0x000826b1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac1,	// (0x00089eea) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac1,	// (0x00089eea) hc_cl_list_double_graphic_heading_pane_t

0x82a5,	// (0x000826ce) vid4_progress_pane_g1

0x82b5,	// (0x000826de) vid4_progress_pane_g2

0x82c5,	// (0x000826ee) vid4_progress_pane_g3

0x82d7,	// (0x00082700) vid4_progress_pane_g4

0x0004,

0xfac6,	// (0x00089eef) vid4_progress_pane_g

0x82ef,	// (0x00082718) vid4_progress_pane_t1

0x8305,	// (0x0008272e) vid4_progress_pane_t2

0x0002,

0xfad1,	// (0x00089efa) vid4_progress_pane_t

0x8330,	// (0x00082759) wait_bar_pane_cp07

0xcae8,	// (0x00086f11) blid_firmament_pane_ParamLimits

0xcb2b,	// (0x00086f54) popup_blid_sat_info2_window_g1

0xcb4f,	// (0x00086f78) popup_blid_sat_info2_window_t3

0xcb5d,	// (0x00086f86) popup_blid_sat_info2_window_t4

0xcb6b,	// (0x00086f94) popup_blid_sat_info2_window_t5

0xcb79,	// (0x00086fa2) popup_blid_sat_info2_window_t6

0xcb89,	// (0x00086fb2) popup_blid_sat_info2_window_t7

0xcb97,	// (0x00086fc0) popup_blid_sat_info2_window_t8

0xcba5,	// (0x00086fce) popup_blid_sat_info2_window_t9

0xcbb3,	// (0x00086fdc) popup_blid_sat_info2_window_t10

0xcc75,	// (0x0008709e) aid_firma_cardinal_ParamLimits

0xcc89,	// (0x000870b2) blid_firmament_pane_t1_ParamLimits

0xcca0,	// (0x000870c9) blid_firmament_pane_t2_ParamLimits

0xccb7,	// (0x000870e0) blid_firmament_pane_t3_ParamLimits

0xccce,	// (0x000870f7) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x00089b0f) blid_firmament_pane_t_ParamLimits

0xcce5,	// (0x0008710e) blid_sat_info_pane_ParamLimits

0xb4f7,	// (0x00085920) main_cam_set_pane_ParamLimits

0x6880,	// (0x00080ca9) aid_size_cell_colour_35_ParamLimits

0x689a,	// (0x00080cc3) aid_size_cell_colour_112_ParamLimits

0x68b1,	// (0x00080cda) aid_size_cell_effect_ParamLimits

0xb4f7,	// (0x00085920) bg_tb_trans_pane_cp02_ParamLimits

0xaff0,	// (0x00085419) heading_imed_pane_ParamLimits

0x68cb,	// (0x00080cf4) listscroll_imed_pane_ParamLimits

0xbed3,	// (0x000862fc) popup_call2_audio_first_window_g5_ParamLimits

0xbed3,	// (0x000862fc) popup_call2_audio_first_window_g5

0x6fda,	// (0x00081403) aid_size_touch_image3_arrow_left_ParamLimits

0x6fda,	// (0x00081403) aid_size_touch_image3_arrow_left

0x6ff0,	// (0x00081419) aid_size_touch_image3_arrow_right_ParamLimits

0x6ff0,	// (0x00081419) aid_size_touch_image3_arrow_right

0x831a,	// (0x00082743) vid4_progress_pane_t3

0x6b6b,	// (0x00080f94) main_hwr_training_symbol_option_pane_ParamLimits

0x6b6b,	// (0x00080f94) main_hwr_training_symbol_option_pane

0xd4fc,	// (0x00087925) popup_hwr_training_preview_window_ParamLimits

0xd4fc,	// (0x00087925) popup_hwr_training_preview_window

0x6bcc,	// (0x00080ff5) hwr_training_navi_pane_g5_ParamLimits

0x6bcc,	// (0x00080ff5) hwr_training_navi_pane_g5

0xd722,	// (0x00087b4b) popup_char_count_window

0xde40,	// (0x00088269) bg_popup_sub_pane_cp20_ParamLimits

0x7de2,	// (0x0008220b) list_vitu2_match_list_pane_ParamLimits

0x7dee,	// (0x00082217) vitu2_page_scroll_pane_ParamLimits

0x7dee,	// (0x00082217) vitu2_page_scroll_pane

0xdbfd,	// (0x00088026) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbfd,	// (0x00088026) list_single_hwr_training_symbol_option_pane

0xdc10,	// (0x00088039) list_single_hwr_training_symbol_option_pane_g1

0xdc18,	// (0x00088041) list_single_hwr_training_symbol_option_pane_t1

0xdc26,	// (0x0008804f) bg_button_pane_cp023

0xdc2f,	// (0x00088058) bg_button_pane_cp024

0x8352,	// (0x0008277b) vitu2_page_scroll_pane_g1

0x835a,	// (0x00082783) vitu2_page_scroll_pane_g2

0x0001,

0xfad8,	// (0x00089f01) vitu2_page_scroll_pane_g

0x8362,	// (0x0008278b) vitu2_page_scroll_pane_t1

0xcd1e,	// (0x00087147) popup_char_count_window_g1

0xdc62,	// (0x0008808b) popup_char_count_window_g2

0xdc6b,	// (0x00088094) popup_char_count_window_g3

0x0002,

0xfadd,	// (0x00089f06) popup_char_count_window_g

0xdc74,	// (0x0008809d) popup_char_count_window_t1

0xa0cf,	// (0x000844f8) main_vded2_pane

0xd1fb,	// (0x00087624) aid_size_cell_imed_line

0xd205,	// (0x0008762e) grid_imed_line_width_pane

0x7455,	// (0x0008187e) vid4_indicators_pane_g4

0xdc82,	// (0x000880ab) cell_imed_line_width_pane_ParamLimits

0xdc82,	// (0x000880ab) cell_imed_line_width_pane

0xdc96,	// (0x000880bf) cell_imed_line_width_pane_g1

0xd677,	// (0x00087aa0) cell_imed_line_width_pane_g2

0x0001,

0xfae4,	// (0x00089f0d) cell_imed_line_width_pane_g

0x8371,	// (0x0008279a) main_vded2_pane_g1_ParamLimits

0x8371,	// (0x0008279a) main_vded2_pane_g1

0x837e,	// (0x000827a7) main_vded2_pane_g2_ParamLimits

0x837e,	// (0x000827a7) main_vded2_pane_g2

0x0001,

0xfae9,	// (0x00089f12) main_vded2_pane_g_ParamLimits

0xfae9,	// (0x00089f12) main_vded2_pane_g

0x838c,	// (0x000827b5) vded2_slider_pane_ParamLimits

0x838c,	// (0x000827b5) vded2_slider_pane

0x8399,	// (0x000827c2) aid_size_touch_vded2_end

0x83a3,	// (0x000827cc) aid_size_touch_vded2_playhead

0xdc9f,	// (0x000880c8) aid_size_touch_vded2_start

0xdca7,	// (0x000880d0) vded2_slider_bg_pane

0xdcb0,	// (0x000880d9) vded2_slider_pane_g1

0xdcb9,	// (0x000880e2) vded2_slider_pane_g2

0x83ab,	// (0x000827d4) vded2_slider_pane_g3

0x0002,

0xfaee,	// (0x00089f17) vded2_slider_pane_g

0xdcc1,	// (0x000880ea) vded2_slider_bg_pane_g1

0xdcca,	// (0x000880f3) vded2_slider_bg_pane_g2

0xdcd3,	// (0x000880fc) vded2_slider_bg_pane_g3

0x0002,

0xfaf5,	// (0x00089f1e) vded2_slider_bg_pane_g

0x4c0c,	// (0x0007f035) aid_postcard_touch_down_pane_ParamLimits

0x4c0c,	// (0x0007f035) aid_postcard_touch_down_pane

0x4c1c,	// (0x0007f045) aid_postcard_touch_up_pane_ParamLimits

0x4c1c,	// (0x0007f045) aid_postcard_touch_up_pane

0xa0cf,	// (0x000844f8) main_blid2_pane

0x5344,	// (0x0007f76d) popup_blid2_search_window

0xa0cf,	// (0x000844f8) blid2_gps_pane

0xa0cf,	// (0x000844f8) blid2_navig_pane

0xa0cf,	// (0x000844f8) blid2_search_pane

0xa0cf,	// (0x000844f8) blid2_tripm_pane

0x83b4,	// (0x000827dd) blid2_search_pane_g1_ParamLimits

0x83b4,	// (0x000827dd) blid2_search_pane_g1

0x83c4,	// (0x000827ed) blid2_search_pane_t1_ParamLimits

0x83c4,	// (0x000827ed) blid2_search_pane_t1

0x83d6,	// (0x000827ff) aid_size_cell_blid2_gps_ParamLimits

0x83d6,	// (0x000827ff) aid_size_cell_blid2_gps

0x83e6,	// (0x0008280f) blid2_gps_pane_g1_ParamLimits

0x83e6,	// (0x0008280f) blid2_gps_pane_g1

0x83f2,	// (0x0008281b) grid_blid2_satellite_pane_ParamLimits

0x83f2,	// (0x0008281b) grid_blid2_satellite_pane

0x8402,	// (0x0008282b) blid2_navig_pane_g1_ParamLimits

0x8402,	// (0x0008282b) blid2_navig_pane_g1

0x840e,	// (0x00082837) blid2_navig_pane_t1_ParamLimits

0x840e,	// (0x00082837) blid2_navig_pane_t1

0x8420,	// (0x00082849) blid2_navig_pane_t2_ParamLimits

0x8420,	// (0x00082849) blid2_navig_pane_t2

0x0001,

0xfafc,	// (0x00089f25) blid2_navig_pane_t_ParamLimits

0xfafc,	// (0x00089f25) blid2_navig_pane_t

0x8432,	// (0x0008285b) blid2_navig_ring_pane_ParamLimits

0x8432,	// (0x0008285b) blid2_navig_ring_pane

0x8442,	// (0x0008286b) blid2_speed_pane_ParamLimits

0x8442,	// (0x0008286b) blid2_speed_pane

0x844e,	// (0x00082877) blid2_tripm_pane_g1_ParamLimits

0x844e,	// (0x00082877) blid2_tripm_pane_g1

0x845e,	// (0x00082887) blid2_tripm_pane_g2_ParamLimits

0x845e,	// (0x00082887) blid2_tripm_pane_g2

0x846a,	// (0x00082893) blid2_tripm_pane_g3_ParamLimits

0x846a,	// (0x00082893) blid2_tripm_pane_g3

0x8476,	// (0x0008289f) blid2_tripm_pane_g4_ParamLimits

0x8476,	// (0x0008289f) blid2_tripm_pane_g4

0x8482,	// (0x000828ab) blid2_tripm_pane_g5_ParamLimits

0x8482,	// (0x000828ab) blid2_tripm_pane_g5

0x0005,

0xfb01,	// (0x00089f2a) blid2_tripm_pane_g_ParamLimits

0xfb01,	// (0x00089f2a) blid2_tripm_pane_g

0x849e,	// (0x000828c7) blid2_tripm_pane_t1_ParamLimits

0x849e,	// (0x000828c7) blid2_tripm_pane_t1

0x84b2,	// (0x000828db) blid2_tripm_pane_t2_ParamLimits

0x84b2,	// (0x000828db) blid2_tripm_pane_t2

0x84c4,	// (0x000828ed) blid2_tripm_pane_t3_ParamLimits

0x84c4,	// (0x000828ed) blid2_tripm_pane_t3

0x0003,

0xfb0e,	// (0x00089f37) blid2_tripm_pane_t_ParamLimits

0xfb0e,	// (0x00089f37) blid2_tripm_pane_t

0x84f6,	// (0x0008291f) cell_blid2_satellite_pane_ParamLimits

0x84f6,	// (0x0008291f) cell_blid2_satellite_pane

0x8510,	// (0x00082939) cell_blid2_satellite_pane_g1

0xdcdc,	// (0x00088105) cell_blid2_satellite_pane_t1

0xccf5,	// (0x0008711e) blid2_speed_pane_g1

0xdcea,	// (0x00088113) blid2_speed_pane_t1

0xdcf8,	// (0x00088121) blid2_speed_pane_t2

0x0001,

0xfb17,	// (0x00089f40) blid2_speed_pane_t

0xccf5,	// (0x0008711e) blid2_navig_ring_pane_g1

0x8519,	// (0x00082942) blid2_navig_ring_pane_g2

0x8521,	// (0x0008294a) blid2_navig_ring_pane_g3

0x8529,	// (0x00082952) blid2_navig_ring_pane_g4

0x8531,	// (0x0008295a) blid2_navig_ring_pane_g5

0x0004,

0xfb1c,	// (0x00089f45) blid2_navig_ring_pane_g

0xa0cf,	// (0x000844f8) bg_popup_window_pane_cp011

0xdd06,	// (0x0008812f) popup_blid2_search_window_g1

0xdd0e,	// (0x00088137) popup_blid2_search_window_t1

0xdd1c,	// (0x00088145) popup_blid2_search_window_t2

0x0001,

0xfb27,	// (0x00089f50) popup_blid2_search_window_t

0xab7d,	// (0x00084fa6) main_browser_pane_g1

0xa85e,	// (0x00084c87) main_browser_pane_ParamLimits

0xb4f7,	// (0x00085920) bg_button_pane_cp011_ParamLimits

0x76c0,	// (0x00081ae9) cell_vitu2_function_pane_g1_ParamLimits

0xc8ed,	// (0x00086d16) bg_popup_sub_pane_cp22_ParamLimits

0x12e6,	// (0x0007b70f) input_focus_pane_cp08_ParamLimits

0x7f92,	// (0x000823bb) popup_vitu2_query_button_pane_ParamLimits

0x7f92,	// (0x000823bb) popup_vitu2_query_button_pane

0x12fd,	// (0x0007b726) popup_vitu2_query_input_button_pane

0xd9b4,	// (0x00087ddd) popup_vitu2_query_window_g1_ParamLimits

0x1307,	// (0x0007b730) popup_vitu2_query_window_g2_ParamLimits

0xfa28,	// (0x00089e51) popup_vitu2_query_window_g_ParamLimits

0xa0cf,	// (0x000844f8) bg_button_pane_cp026

0x8539,	// (0x00082962) popup_vitu2_query_input_button_pane_g1

0xa0cf,	// (0x000844f8) bg_button_pane_cp025

0xdd2a,	// (0x00088153) popup_vitu2_query_button_pane_t1

0x5da4,	// (0x000801cd) main_mp3_pane_t6

0x5db4,	// (0x000801dd) popup_slider_window_cp01

0x733a,	// (0x00081763) cam4_battery_pane

0x7414,	// (0x0008183d) cam4_battery_pane_cp02

0x829d,	// (0x000826c6) cam4_battery_pane_cp01

0x829d,	// (0x000826c6) cam4_battery_pane_cp03

0xccf5,	// (0x0008711e) cam4_battery_pane_g1

0xd67f,	// (0x00087aa8) cam4_battery_pane_g2

0x0001,

0xfb2c,	// (0x00089f55) cam4_battery_pane_g

0xcbc1,	// (0x00086fea) popup_blid_sat_info2_window_t11

0xb2d5,	// (0x000856fe) aid_size_touch_mv_arrow_left_ParamLimits

0xb300,	// (0x00085729) aid_size_touch_mv_arrow_right_ParamLimits

0xb35e,	// (0x00085787) navi_pane_g1_ParamLimits

0xb36a,	// (0x00085793) navi_pane_g2_ParamLimits

0xb398,	// (0x000857c1) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0008980e) navi_pane_g_ParamLimits

0x4694,	// (0x0007eabd) navi_pane_mv_t1_ParamLimits

0x68d7,	// (0x00080d00) grid_imed_effect_pane_ParamLimits

0x3123,	// (0x0007d54c) aid_placing_vt_slider_lsc

0xaacc,	// (0x00084ef5) aid_placing_vt_slider_prt

0xb4f7,	// (0x00085920) bg_tb_trans_pane_cp01_ParamLimits

0xce6f,	// (0x00087298) popup_image_details_window_g1_ParamLimits

0xce82,	// (0x000872ab) popup_image_details_window_g2_ParamLimits

0xce97,	// (0x000872c0) popup_image_details_window_g3_ParamLimits

0xce97,	// (0x000872c0) popup_image_details_window_g3

0xf72b,	// (0x00089b54) popup_image_details_window_g_ParamLimits

0xceab,	// (0x000872d4) popup_image_details_window_t1_ParamLimits

0xcebd,	// (0x000872e6) popup_image_details_window_t2_ParamLimits

0xced6,	// (0x000872ff) popup_image_details_window_t3_ParamLimits

0xceea,	// (0x00087313) popup_image_details_window_t4_ParamLimits

0xcf05,	// (0x0008732e) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x00089b5b) popup_image_details_window_t_ParamLimits

0x81bd,	// (0x000825e6) cl_header_name_pane_ParamLimits

0x81bd,	// (0x000825e6) cl_header_name_pane

0x8541,	// (0x0008296a) cl_header_name_pane_t1_ParamLimits

0x8541,	// (0x0008296a) cl_header_name_pane_t1

0x8558,	// (0x00082981) cl_header_name_pane_t2_ParamLimits

0x8558,	// (0x00082981) cl_header_name_pane_t2

0x8582,	// (0x000829ab) cl_header_name_pane_t3_ParamLimits

0x8582,	// (0x000829ab) cl_header_name_pane_t3

0x0002,

0xfb31,	// (0x00089f5a) cl_header_name_pane_t_ParamLimits

0xfb31,	// (0x00089f5a) cl_header_name_pane_t

0xb427,	// (0x00085850) navi_pane_mv_g2_ParamLimits

0xd6fc,	// (0x00087b25) field_vitu2_entry_pane_g1_ParamLimits

0xd708,	// (0x00087b31) field_vitu2_entry_pane_g2_ParamLimits

0xd714,	// (0x00087b3d) field_vitu2_entry_pane_g3_ParamLimits

0xd714,	// (0x00087b3d) field_vitu2_entry_pane_g3

0x0816,	// (0x0007ac3f) field_vitu2_entry_pane_g_ParamLimits

0x7654,	// (0x00081a7d) cell_vitu2_itu_pane_g1_ParamLimits

0x7666,	// (0x00081a8f) cell_vitu2_itu_pane_g2_ParamLimits

0x7666,	// (0x00081a8f) cell_vitu2_itu_pane_g2

0x0001,

0xf933,	// (0x00089d5c) cell_vitu2_itu_pane_g_ParamLimits

0xf933,	// (0x00089d5c) cell_vitu2_itu_pane_g

0xb4f7,	// (0x00085920) bg_vkb2_func_pane_cp05_ParamLimits

0xb4f7,	// (0x00085920) bg_vkb2_func_pane_cp05

0xb4f7,	// (0x00085920) bg_vkb2_func_pane_cp03

0xb4f7,	// (0x00085920) bg_vkb2_func_pane_cp04

0xb4f7,	// (0x00085920) bg_vkb2_func_pane_cp10_ParamLimits

0xb4f7,	// (0x00085920) bg_vkb2_func_pane_cp10

0x14bc,	// (0x0007b8e5) bg_vkb2_func_pane_cp08

0x8167,	// (0x00082590) bg_vkb2_func_pane_cp06

0x8175,	// (0x0008259e) bg_vkb2_func_pane_cp07

0xdc38,	// (0x00088061) bg_vkb2_func_pane_cp11_ParamLimits

0xdc38,	// (0x00088061) bg_vkb2_func_pane_cp11

0xdc4d,	// (0x00088076) bg_vkb2_func_pane_cp12_ParamLimits

0xdc4d,	// (0x00088076) bg_vkb2_func_pane_cp12

0xa0cf,	// (0x000844f8) bg_vkb2_func_pane_cp09

0xd73d,	// (0x00087b66) bg_vkb2_func_pane_g1

0xac8e,	// (0x000850b7) bg_vkb2_func_pane_g2

0xd745,	// (0x00087b6e) bg_vkb2_func_pane_g3

0xd74d,	// (0x00087b76) bg_vkb2_func_pane_g4

0xd979,	// (0x00087da2) bg_vkb2_func_pane_g5

0xd765,	// (0x00087b8e) bg_vkb2_func_pane_g6

0xd76d,	// (0x00087b96) bg_vkb2_func_pane_g7

0xd75d,	// (0x00087b86) bg_vkb2_func_pane_g8

0xac6e,	// (0x00085097) bg_vkb2_func_pane_g9

0x0008,

0xfb38,	// (0x00089f61) bg_vkb2_func_pane_g

0x8490,	// (0x000828b9) blid2_tripm_pane_g6_ParamLimits

0x8490,	// (0x000828b9) blid2_tripm_pane_g6

0xd5b4,	// (0x000879dd) mp4_progress_pane_g1

0x84ea,	// (0x00082913) blid2_tripm_values_pane_ParamLimits

0x84ea,	// (0x00082913) blid2_tripm_values_pane

0x85a7,	// (0x000829d0) blid2_tripm_values_pane_t1

0x85b5,	// (0x000829de) blid2_tripm_values_pane_t2

0x85c3,	// (0x000829ec) blid2_tripm_values_pane_t3

0x85d1,	// (0x000829fa) blid2_tripm_values_pane_t4

0x85df,	// (0x00082a08) blid2_tripm_values_pane_t5

0x85ed,	// (0x00082a16) blid2_tripm_values_pane_t6

0x85fb,	// (0x00082a24) blid2_tripm_values_pane_t7

0x8609,	// (0x00082a32) blid2_tripm_values_pane_t8

0x8617,	// (0x00082a40) blid2_tripm_values_pane_t9

0x0008,

0xfb4b,	// (0x00089f74) blid2_tripm_values_pane_t

0x3163,	// (0x0007d58c) call_video_pane_t1_ParamLimits

0x3184,	// (0x0007d5ad) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00089697) call_video_pane_t_ParamLimits

0x10a0,	// (0x0007b4c9) msg_header_pane_g1_ParamLimits

0xb61d,	// (0x00085a46) msg_header_pane_g2_ParamLimits

0xb61d,	// (0x00085a46) msg_header_pane_g2

0x0001,

0xf488,	// (0x000898b1) msg_header_pane_g_ParamLimits

0xf488,	// (0x000898b1) msg_header_pane_g

0xa85e,	// (0x00084c87) main_clock2_pane_ParamLimits

0x666b,	// (0x00080a94) grid_clock2_toolbar_pane_ParamLimits

0x666b,	// (0x00080a94) grid_clock2_toolbar_pane

0x666b,	// (0x00080a94) listscroll_clock2_pane_ParamLimits

0x666b,	// (0x00080a94) listscroll_clock2_pane

0x6715,	// (0x00080b3e) main_clock2_pane_t3_ParamLimits

0x6715,	// (0x00080b3e) main_clock2_pane_t3

0x6727,	// (0x00080b50) main_clock2_pane_t4_ParamLimits

0x6727,	// (0x00080b50) main_clock2_pane_t4

0xdd38,	// (0x00088161) cell_clock2_toolbar_pane

0xdd40,	// (0x00088169) cell_clock2_toolbar_pane_cp01

0xdd40,	// (0x00088169) cell_clock2_toolbar_pane_cp02

0xdd48,	// (0x00088171) cell_clock2_toolbar_pane_cp03

0xdd50,	// (0x00088179) list_clock2_pane

0xb25a,	// (0x00085683) scroll_pane_cp10

0xdd58,	// (0x00088181) list_single_clock2_pane_ParamLimits

0xdd58,	// (0x00088181) list_single_clock2_pane

0xaa35,	// (0x00084e5e) list_highlight_pane_cp08

0xdd65,	// (0x0008818e) list_single_clock2_pane_t1

0xdd73,	// (0x0008819c) list_single_clock2_pane_t2

0x0001,

0xfb5e,	// (0x00089f87) list_single_clock2_pane_t

0xa0cf,	// (0x000844f8) bg_button_pane_cp10

0xdd8f,	// (0x000881b8) cell_clock2_toolbar_pane_g1

0x4b6e,	// (0x0007ef97) aid_main_viewer_pane_g1_ParamLimits

0x4b6e,	// (0x0007ef97) aid_main_viewer_pane_g1

0x4b7a,	// (0x0007efa3) aid_main_viewer_pane_g2_ParamLimits

0x4b7a,	// (0x0007efa3) aid_main_viewer_pane_g2

0x4b86,	// (0x0007efaf) aid_main_viewer_pane_g3_ParamLimits

0x4b86,	// (0x0007efaf) aid_main_viewer_pane_g3

0x4b97,	// (0x0007efc0) aid_main_viewer_pane_g4_ParamLimits

0x4b97,	// (0x0007efc0) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000898c2) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000898c2) aid_main_viewer_pane_g

0x531c,	// (0x0007f745) main_calc_pane_ParamLimits

0x5329,	// (0x0007f752) main_dialer2_pane_ParamLimits

0xa0cf,	// (0x000844f8) main_cam6_pane

0xa0cf,	// (0x000844f8) main_vid6_pane

0x6677,	// (0x00080aa0) listscroll_gen_pane_cp06_ParamLimits

0x6677,	// (0x00080aa0) listscroll_gen_pane_cp06

0x6739,	// (0x00080b62) main_clock2_pane_t5_ParamLimits

0x6739,	// (0x00080b62) main_clock2_pane_t5

0x6782,	// (0x00080bab) aid_call2_pane_cp10_ParamLimits

0x6794,	// (0x00080bbd) aid_call_pane_cp10_ParamLimits

0xb2c9,	// (0x000856f2) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2c9,	// (0x000856f2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x67a6,	// (0x00080bcf) popup_clock_analogue_window_cp10_g3_ParamLimits

0x67a6,	// (0x00080bcf) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2c9,	// (0x000856f2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x00089c10) popup_clock_analogue_window_cp10_g_ParamLimits

0x67b8,	// (0x00080be1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6f87,	// (0x000813b0) cell_dialer2_keypad_pane_g2_ParamLimits

0x6f87,	// (0x000813b0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x00089cf6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x00089cf6) cell_dialer2_keypad_pane_g

0x6fa3,	// (0x000813cc) cell_dialer2_keypad_pane_t1

0x798b,	// (0x00081db4) main_cset_text2_pane_ParamLimits

0x798b,	// (0x00081db4) main_cset_text2_pane

0xdba0,	// (0x00087fc9) area_vitu2_query_pane_g1_ParamLimits

0x13e7,	// (0x0007b810) area_vitu2_query_pane_g2_ParamLimits

0xfa7b,	// (0x00089ea4) area_vitu2_query_pane_g_ParamLimits

0x1498,	// (0x0007b8c1) area_vitu2_query_pane_t7_ParamLimits

0x1498,	// (0x0007b8c1) area_vitu2_query_pane_t7

0x8167,	// (0x00082590) bg_button_pane_cp018_ParamLimits

0x8175,	// (0x0008259e) bg_button_pane_cp021_ParamLimits

0x14bc,	// (0x0007b8e5) bg_button_pane_cp022_ParamLimits

0x14bc,	// (0x0007b8e5) bg_vkb2_func_pane_cp08_ParamLimits

0x8167,	// (0x00082590) bg_vkb2_func_pane_cp06_ParamLimits

0x8175,	// (0x0008259e) bg_vkb2_func_pane_cp07_ParamLimits

0x14cd,	// (0x0007b8f6) input_focus_pane_cp09_ParamLimits

0x8625,	// (0x00082a4e) cam6_autofocus_pane_ParamLimits

0x8625,	// (0x00082a4e) cam6_autofocus_pane

0x8647,	// (0x00082a70) cam6_image_uncrop_pane_ParamLimits

0x8647,	// (0x00082a70) cam6_image_uncrop_pane

0x8674,	// (0x00082a9d) cam6_indi_pane_ParamLimits

0x8674,	// (0x00082a9d) cam6_indi_pane

0x868e,	// (0x00082ab7) cam6_mode_pane_ParamLimits

0x868e,	// (0x00082ab7) cam6_mode_pane

0x86a2,	// (0x00082acb) cam6_timer_pane_ParamLimits

0x86a2,	// (0x00082acb) cam6_timer_pane

0x86b3,	// (0x00082adc) cam6_zoom_pane_ParamLimits

0x86b3,	// (0x00082adc) cam6_zoom_pane

0x86cb,	// (0x00082af4) cam6_mode_pane_g1_ParamLimits

0x86cb,	// (0x00082af4) cam6_mode_pane_g1

0x86d7,	// (0x00082b00) cam6_mode_pane_g2_ParamLimits

0x86d7,	// (0x00082b00) cam6_mode_pane_g2

0x86e3,	// (0x00082b0c) cam6_mode_pane_g3_ParamLimits

0x86e3,	// (0x00082b0c) cam6_mode_pane_g3

0x86ef,	// (0x00082b18) cam6_mode_pane_g4_ParamLimits

0x86ef,	// (0x00082b18) cam6_mode_pane_g4

0x0003,

0xfb63,	// (0x00089f8c) cam6_mode_pane_g_ParamLimits

0xfb63,	// (0x00089f8c) cam6_mode_pane_g

0xdd81,	// (0x000881aa) bg_tb_trans_pane_cp08_ParamLimits

0xdd81,	// (0x000881aa) bg_tb_trans_pane_cp08

0xdd97,	// (0x000881c0) cam6_battery_pane_ParamLimits

0xdd97,	// (0x000881c0) cam6_battery_pane

0xddad,	// (0x000881d6) cam6_indi_pane_g1_ParamLimits

0xddad,	// (0x000881d6) cam6_indi_pane_g1

0xddbf,	// (0x000881e8) cam6_indi_pane_g2_ParamLimits

0xddbf,	// (0x000881e8) cam6_indi_pane_g2

0xddd1,	// (0x000881fa) cam6_indi_pane_g3_ParamLimits

0xddd1,	// (0x000881fa) cam6_indi_pane_g3

0x0002,

0xfb6c,	// (0x00089f95) cam6_indi_pane_g_ParamLimits

0xfb6c,	// (0x00089f95) cam6_indi_pane_g

0xdde3,	// (0x0008820c) cam6_indi_pane_t1_ParamLimits

0xdde3,	// (0x0008820c) cam6_indi_pane_t1

0x7488,	// (0x000818b1) cam6_autofocus_pane_g1

0x7490,	// (0x000818b9) cam6_autofocus_pane_g2

0x7498,	// (0x000818c1) cam6_autofocus_pane_g3

0x74a0,	// (0x000818c9) cam6_autofocus_pane_g4

0x0003,

0xfb73,	// (0x00089f9c) cam6_autofocus_pane_g

0xde09,	// (0x00088232) cam6_timer_pane_g1

0xde11,	// (0x0008823a) cam6_timer_pane_t1

0xde1f,	// (0x00088248) cam6_zoom_cont_pane

0xde27,	// (0x00088250) cam6_zoom_pane_g1

0xde2f,	// (0x00088258) cam6_zoom_pane_g2

0x86fb,	// (0x00082b24) cam6_zoom_pane_g3

0x0002,

0xfb7c,	// (0x00089fa5) cam6_zoom_pane_g

0xccf5,	// (0x0008711e) cam6_battery_pane_g1

0xccf5,	// (0x0008711e) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x00089b18) cam6_battery_pane_g

0xde37,	// (0x00088260) cam6_zoom_cont_pane_g1

0xde60,	// (0x00088289) cam6_zoom_cont_pane_g2

0xde69,	// (0x00088292) cam6_zoom_cont_pane_g3

0x0002,

0xfb83,	// (0x00089fac) cam6_zoom_cont_pane_g

0x8718,	// (0x00082b41) cam6_mode_pane_cp_ParamLimits

0x8718,	// (0x00082b41) cam6_mode_pane_cp

0x86b3,	// (0x00082adc) cam6_zoom_pane_cp_ParamLimits

0x86b3,	// (0x00082adc) cam6_zoom_pane_cp

0x872c,	// (0x00082b55) vid6_image_uncrop_cif_pane_ParamLimits

0x872c,	// (0x00082b55) vid6_image_uncrop_cif_pane

0x8758,	// (0x00082b81) vid6_image_uncrop_nhd_pane_ParamLimits

0x8758,	// (0x00082b81) vid6_image_uncrop_nhd_pane

0x8647,	// (0x00082a70) vid6_image_uncrop_vga_pane_ParamLimits

0x8647,	// (0x00082a70) vid6_image_uncrop_vga_pane

0x8775,	// (0x00082b9e) vid6_image_uncrop_wvga_pane_ParamLimits

0x8775,	// (0x00082b9e) vid6_image_uncrop_wvga_pane

0x8792,	// (0x00082bbb) vid6_indi_pane_ParamLimits

0x8792,	// (0x00082bbb) vid6_indi_pane

0xdd81,	// (0x000881aa) bg_tb_trans_pane_cp09_ParamLimits

0xdd81,	// (0x000881aa) bg_tb_trans_pane_cp09

0xde81,	// (0x000882aa) cam6_battery_pane_cp_ParamLimits

0xde81,	// (0x000882aa) cam6_battery_pane_cp

0xde8d,	// (0x000882b6) vid6_indi_pane_g1_ParamLimits

0xde8d,	// (0x000882b6) vid6_indi_pane_g1

0xde9f,	// (0x000882c8) vid6_indi_pane_g2_ParamLimits

0xde9f,	// (0x000882c8) vid6_indi_pane_g2

0xdeb1,	// (0x000882da) vid6_indi_pane_g3_ParamLimits

0xdeb1,	// (0x000882da) vid6_indi_pane_g3

0xdec6,	// (0x000882ef) vid6_indi_pane_g4_ParamLimits

0xdec6,	// (0x000882ef) vid6_indi_pane_g4

0xdedb,	// (0x00088304) vid6_indi_pane_g5_ParamLimits

0xdedb,	// (0x00088304) vid6_indi_pane_g5

0x0004,

0x0a79,	// (0x0007aea2) vid6_indi_pane_g_ParamLimits

0x0a79,	// (0x0007aea2) vid6_indi_pane_g

0xdef5,	// (0x0008831e) vid6_indi_pane_t1_ParamLimits

0xdef5,	// (0x0008831e) vid6_indi_pane_t1

0xdf0b,	// (0x00088334) vid6_indi_pane_t2_ParamLimits

0xdf0b,	// (0x00088334) vid6_indi_pane_t2

0xdf33,	// (0x0008835c) vid6_indi_pane_t3_ParamLimits

0xdf33,	// (0x0008835c) vid6_indi_pane_t3

0xdf5b,	// (0x00088384) vid6_indi_pane_t4_ParamLimits

0xdf5b,	// (0x00088384) vid6_indi_pane_t4

0x0003,

0x0a84,	// (0x0007aead) vid6_indi_pane_t_ParamLimits

0x0a84,	// (0x0007aead) vid6_indi_pane_t

0xdf7f,	// (0x000883a8) wait_bar_pane_cp08

0x87b5,	// (0x00082bde) main_cset_text2_pane_t1_ParamLimits

0x87b5,	// (0x00082bde) main_cset_text2_pane_t1

0x8703,	// (0x00082b2c) listscroll_gen_pane_cp06_t1_ParamLimits

0x8703,	// (0x00082b2c) listscroll_gen_pane_cp06_t1

0xa0cf,	// (0x000844f8) main_cam6_set_pane

0xcf4f,	// (0x00087378) bg_tb_trans_pane_cp06_ParamLimits

0x7342,	// (0x0008176b) cam4_indicators_pane_g1_ParamLimits

0x7353,	// (0x0008177c) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x00089d33) cam4_indicators_pane_g_ParamLimits

0x736b,	// (0x00081794) cam4_indicators_pane_t1_ParamLimits

0xb4f7,	// (0x00085920) bg_tb_trans_pane_cp07_ParamLimits

0x741c,	// (0x00081845) vid4_indicators_pane_g1_ParamLimits

0x7430,	// (0x00081859) vid4_indicators_pane_g2_ParamLimits

0x7444,	// (0x0008186d) vid4_indicators_pane_g3_ParamLimits

0x7455,	// (0x0008187e) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x00089d45) vid4_indicators_pane_g_ParamLimits

0x7471,	// (0x0008189a) vid4_indicators_pane_t1_ParamLimits

0x82a5,	// (0x000826ce) vid4_progress_pane_g1_ParamLimits

0x82b5,	// (0x000826de) vid4_progress_pane_g2_ParamLimits

0x82c5,	// (0x000826ee) vid4_progress_pane_g3_ParamLimits

0x82d7,	// (0x00082700) vid4_progress_pane_g4_ParamLimits

0xfac6,	// (0x00089eef) vid4_progress_pane_g_ParamLimits

0x82ef,	// (0x00082718) vid4_progress_pane_t1_ParamLimits

0x8305,	// (0x0008272e) vid4_progress_pane_t2_ParamLimits

0x831a,	// (0x00082743) vid4_progress_pane_t3_ParamLimits

0xfad1,	// (0x00089efa) vid4_progress_pane_t_ParamLimits

0x8330,	// (0x00082759) wait_bar_pane_cp07_ParamLimits

0x87ec,	// (0x00082c15) main_cam6_set_pane_g2_ParamLimits

0x87ec,	// (0x00082c15) main_cam6_set_pane_g2

0x87f8,	// (0x00082c21) main_cset6_listscroll_pane_ParamLimits

0x87f8,	// (0x00082c21) main_cset6_listscroll_pane

0x8823,	// (0x00082c4c) main_cset6_slider_pane_ParamLimits

0x8823,	// (0x00082c4c) main_cset6_slider_pane

0x882f,	// (0x00082c58) main_cset6_text2_pane_ParamLimits

0x882f,	// (0x00082c58) main_cset6_text2_pane

0xdf8e,	// (0x000883b7) main_cset6_text_pane

0xdf96,	// (0x000883bf) main_cset_list_pane_copy1_ParamLimits

0xdf96,	// (0x000883bf) main_cset_list_pane_copy1

0xdfa6,	// (0x000883cf) scroll_pane_cp028_copy1

0x8842,	// (0x00082c6b) cset_list_set_pane_copy1

0x8858,	// (0x00082c81) aid_position_infowindow_above_copy1

0x8860,	// (0x00082c89) aid_position_infowindow_below_copy1

0x8868,	// (0x00082c91) cset_list_set_pane_g1_copy1

0x1515,	// (0x0007b93e) cset_list_set_pane_g3_copy1_ParamLimits

0x1515,	// (0x0007b93e) cset_list_set_pane_g3_copy1

0x1524,	// (0x0007b94d) cset_list_set_pane_t1_copy1_ParamLimits

0x1524,	// (0x0007b94d) cset_list_set_pane_t1_copy1

0xb4f7,	// (0x00085920) list_highlight_pane_cp021_copy1_ParamLimits

0xb4f7,	// (0x00085920) list_highlight_pane_cp021_copy1

0xdfaf,	// (0x000883d8) cset6_slider_pane_ParamLimits

0xdfaf,	// (0x000883d8) cset6_slider_pane

0xdfdb,	// (0x00088404) main_cset6_slider_pane_g1_ParamLimits

0xdfdb,	// (0x00088404) main_cset6_slider_pane_g1

0x8870,	// (0x00082c99) main_cset6_slider_pane_g2_ParamLimits

0x8870,	// (0x00082c99) main_cset6_slider_pane_g2

0xe003,	// (0x0008842c) main_cset6_slider_pane_g3_ParamLimits

0xe003,	// (0x0008842c) main_cset6_slider_pane_g3

0x8898,	// (0x00082cc1) main_cset6_slider_pane_g4_ParamLimits

0x8898,	// (0x00082cc1) main_cset6_slider_pane_g4

0x88a4,	// (0x00082ccd) main_cset6_slider_pane_g5_ParamLimits

0x88a4,	// (0x00082ccd) main_cset6_slider_pane_g5

0xd86c,	// (0x00087c95) main_cset6_slider_pane_g7_ParamLimits

0xd86c,	// (0x00087c95) main_cset6_slider_pane_g7

0xd878,	// (0x00087ca1) main_cset6_slider_pane_g8_ParamLimits

0xd878,	// (0x00087ca1) main_cset6_slider_pane_g8

0x88b2,	// (0x00082cdb) main_cset6_slider_pane_g9_ParamLimits

0x88b2,	// (0x00082cdb) main_cset6_slider_pane_g9

0x88be,	// (0x00082ce7) main_cset6_slider_pane_g10_ParamLimits

0x88be,	// (0x00082ce7) main_cset6_slider_pane_g10

0x88ca,	// (0x00082cf3) main_cset6_slider_pane_g11_ParamLimits

0x88ca,	// (0x00082cf3) main_cset6_slider_pane_g11

0x88d6,	// (0x00082cff) main_cset6_slider_pane_g12_ParamLimits

0x88d6,	// (0x00082cff) main_cset6_slider_pane_g12

0xd890,	// (0x00087cb9) main_cset6_slider_pane_g13_ParamLimits

0xd890,	// (0x00087cb9) main_cset6_slider_pane_g13

0xd89c,	// (0x00087cc5) main_cset6_slider_pane_g14_ParamLimits

0xd89c,	// (0x00087cc5) main_cset6_slider_pane_g14

0x88e2,	// (0x00082d0b) main_cset6_slider_pane_g15_ParamLimits

0x88e2,	// (0x00082d0b) main_cset6_slider_pane_g15

0x88fa,	// (0x00082d23) main_cset6_slider_pane_g16_ParamLimits

0x88fa,	// (0x00082d23) main_cset6_slider_pane_g16

0x8908,	// (0x00082d31) main_cset6_slider_pane_g17_ParamLimits

0x8908,	// (0x00082d31) main_cset6_slider_pane_g17

0x0011,

0xfb8a,	// (0x00089fb3) main_cset6_slider_pane_g_ParamLimits

0xfb8a,	// (0x00089fb3) main_cset6_slider_pane_g

0xe01b,	// (0x00088444) main_cset6_slider_pane_t1_ParamLimits

0xe01b,	// (0x00088444) main_cset6_slider_pane_t1

0x8922,	// (0x00082d4b) main_cset6_slider_pane_t2_ParamLimits

0x8922,	// (0x00082d4b) main_cset6_slider_pane_t2

0x894d,	// (0x00082d76) main_cset6_slider_pane_t3_ParamLimits

0x894d,	// (0x00082d76) main_cset6_slider_pane_t3

0x8978,	// (0x00082da1) main_cset6_slider_pane_t4_ParamLimits

0x8978,	// (0x00082da1) main_cset6_slider_pane_t4

0x89a3,	// (0x00082dcc) main_cset6_slider_pane_t5_ParamLimits

0x89a3,	// (0x00082dcc) main_cset6_slider_pane_t5

0xe05c,	// (0x00088485) main_cset6_slider_pane_t7_ParamLimits

0xe05c,	// (0x00088485) main_cset6_slider_pane_t7

0x89d0,	// (0x00082df9) main_cset6_slider_pane_t8_ParamLimits

0x89d0,	// (0x00082df9) main_cset6_slider_pane_t8

0x89f4,	// (0x00082e1d) main_cset6_slider_pane_t9_ParamLimits

0x89f4,	// (0x00082e1d) main_cset6_slider_pane_t9

0x8a18,	// (0x00082e41) main_cset6_slider_pane_t10_ParamLimits

0x8a18,	// (0x00082e41) main_cset6_slider_pane_t10

0x8a3c,	// (0x00082e65) main_cset6_slider_pane_t11_ParamLimits

0x8a3c,	// (0x00082e65) main_cset6_slider_pane_t11

0xe092,	// (0x000884bb) main_cset6_slider_pane_t14_ParamLimits

0xe092,	// (0x000884bb) main_cset6_slider_pane_t14

0xe0cb,	// (0x000884f4) main_cset6_slider_pane_t15_ParamLimits

0xe0cb,	// (0x000884f4) main_cset6_slider_pane_t15

0x000b,

0xfbaf,	// (0x00089fd8) main_cset6_slider_pane_t_ParamLimits

0xfbaf,	// (0x00089fd8) main_cset6_slider_pane_t

0xd4d1,	// (0x000878fa) cset_slider_pane_g1_copy1

0xde4e,	// (0x00088277) cset_slider_pane_g2_copy1

0xde57,	// (0x00088280) cset_slider_pane_g3_copy1

0xa0cf,	// (0x000844f8) bg_popup_sub_pane_cp011_copy1

0xe104,	// (0x0008852d) main_cset_text_pane_g1_copy1

0xd9c8,	// (0x00087df1) main_cset_text_pane_t1_copy1

0xd9d6,	// (0x00087dff) main_cset_text_pane_t2_copy1

0xd9e4,	// (0x00087e0d) main_cset_text_pane_t3_copy1

0xd9f2,	// (0x00087e1b) main_cset_text_pane_t4_copy1

0xda00,	// (0x00087e29) main_cset_text_pane_t5_copy1

0xe10c,	// (0x00088535) main_cset_text_pane_t6_copy1

0xe11a,	// (0x00088543) main_cset_text_pane_t7_copy1

0x8a62,	// (0x00082e8b) main_cset_text2_pane_t1_copy1

0xb4f7,	// (0x00085920) main_ncimui_pane

0x537a,	// (0x0007f7a3) popup_query_ncimui_window_ParamLimits

0x537a,	// (0x0007f7a3) popup_query_ncimui_window

0x5f0e,	// (0x00080337) field_cale_ev2_pane_g4_ParamLimits

0x5f0e,	// (0x00080337) field_cale_ev2_pane_g4

0x6ca7,	// (0x000810d0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6ca7,	// (0x000810d0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x00089cd1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x00089cd1) cell_video_dialer_keypad_pane_g

0x6cbf,	// (0x000810e8) cell_video_dialer_keypad_pane_t1

0xa0cf,	// (0x000844f8) bg_popup_window_pane_cp012

0xb145,	// (0x0008556e) heading_pane_cp06

0xe146,	// (0x0008856f) ncim_query_content_pane

0xa0cf,	// (0x000844f8) bg_popup_heading_pane_cp01

0xe14e,	// (0x00088577) ncim_heading_pane_t1

0xe15c,	// (0x00088585) ncim_indicator_popup_pane

0xe16e,	// (0x00088597) ncim_query_button_pane

0xe182,	// (0x000885ab) ncim_query_content_pane_t1

0xe194,	// (0x000885bd) ncim_query_content_pane_t2

0x0005,

0xfbf3,	// (0x0008a01c) ncim_query_content_pane_t

0xe1ce,	// (0x000885f7) ncim_query_list_pane

0xe1e0,	// (0x00088609) ncim_query_popup_pane

0xe15c,	// (0x00088585) ncim_indicator_popup_pane_ParamLimits

0x8bb6,	// (0x00082fdf) ncim_query_content_pane_g1_ParamLimits

0x8bb6,	// (0x00082fdf) ncim_query_content_pane_g1

0xe182,	// (0x000885ab) ncim_query_content_pane_t1_ParamLimits

0xe194,	// (0x000885bd) ncim_query_content_pane_t2_ParamLimits

0x8bc2,	// (0x00082feb) ncim_query_content_pane_t3_ParamLimits

0x8bc2,	// (0x00082feb) ncim_query_content_pane_t3

0x8bdf,	// (0x00083008) ncim_query_content_pane_t4_ParamLimits

0x8bdf,	// (0x00083008) ncim_query_content_pane_t4

0x8bfc,	// (0x00083025) ncim_query_content_pane_t5_ParamLimits

0x8bfc,	// (0x00083025) ncim_query_content_pane_t5

0xe1a6,	// (0x000885cf) ncim_query_content_pane_t6_ParamLimits

0xe1a6,	// (0x000885cf) ncim_query_content_pane_t6

0xfbf3,	// (0x0008a01c) ncim_query_content_pane_t_ParamLimits

0xe1ce,	// (0x000885f7) ncim_query_list_pane_ParamLimits

0xe1e0,	// (0x00088609) ncim_query_popup_pane_ParamLimits

0xe1f4,	// (0x0008861d) wait_bar_pane_cp04

0xa0cf,	// (0x000844f8) input_focus_pane_cp011

0xe1fc,	// (0x00088625) ncim_query_popup_pane_t1

0xe20a,	// (0x00088633) ncim_list_query_list_pane_ParamLimits

0xe20a,	// (0x00088633) ncim_list_query_list_pane

0xa0cf,	// (0x000844f8) bg_button_pane_cp027

0xe217,	// (0x00088640) ncim_query_button_pane_g1

0xa0cf,	// (0x000844f8) list_highlight_pane_cp012

0xe221,	// (0x0008864a) ncim_list_query_list_pane_g1

0xe229,	// (0x00088652) ncim_list_query_list_pane_t1

0x735f,	// (0x00081788) cam4_indicators_pane_g3_ParamLimits

0x735f,	// (0x00081788) cam4_indicators_pane_g3

0x7461,	// (0x0008188a) vid4_indicators_pane_g5_ParamLimits

0x7461,	// (0x0008188a) vid4_indicators_pane_g5

0x82e3,	// (0x0008270c) vid4_progress_pane_g5_ParamLimits

0x82e3,	// (0x0008270c) vid4_progress_pane_g5

0x8aa2,	// (0x00082ecb) main_ncimui_pane_g1

0x8b0a,	// (0x00082f33) ncimui_group_query_pane_ParamLimits

0x8b0a,	// (0x00082f33) ncimui_group_query_pane

0x8b52,	// (0x00082f7b) ncimui_list_pane_ParamLimits

0x8b52,	// (0x00082f7b) ncimui_list_pane

0x8b79,	// (0x00082fa2) ncimui_text_pane_ParamLimits

0x8b79,	// (0x00082fa2) ncimui_text_pane

0x8c19,	// (0x00083042) ncimui_text_pane_t1_ParamLimits

0x8c19,	// (0x00083042) ncimui_text_pane_t1

0xe237,	// (0x00088660) ncimui_list_single_graphic_pane_ParamLimits

0xe237,	// (0x00088660) ncimui_list_single_graphic_pane

0x8c38,	// (0x00083061) ncimui_query_pane_ParamLimits

0x8c38,	// (0x00083061) ncimui_query_pane

0xa0cf,	// (0x000844f8) list_highlight_pane_cp013

0xe247,	// (0x00088670) ncim_list_query_list_pane_t1_copy1

0xe255,	// (0x0008867e) ncim_list_single_graphic_pane_g1

0x8c4b,	// (0x00083074) ncim_query_button_pane_cp01

0x8c57,	// (0x00083080) ncim_query_entry_pane_ParamLimits

0x8c57,	// (0x00083080) ncim_query_entry_pane

0x8c6a,	// (0x00083093) ncimui_query_pane_g1

0x8c76,	// (0x0008309f) ncimui_query_pane_t1_ParamLimits

0x8c76,	// (0x0008309f) ncimui_query_pane_t1

0xb4f7,	// (0x00085920) input_focus_pane_cp012

0xe25d,	// (0x00088686) ncim_query_entry_pane_t1

0xa85e,	// (0x00084c87) main_im_pane_ParamLimits

0xb4f7,	// (0x00085920) main_mobtv_pane_ParamLimits

0xb4f7,	// (0x00085920) main_mobtv_pane

0x8916,	// (0x00082d3f) main_cset6_slider_pane_g18_ParamLimits

0x8916,	// (0x00082d3f) main_cset6_slider_pane_g18

0xe00f,	// (0x00088438) main_cset6_slider_pane_g19_ParamLimits

0xe00f,	// (0x00088438) main_cset6_slider_pane_g19

0xd714,	// (0x00087b3d) bg_main_mobtv_pane_ParamLimits

0xd714,	// (0x00087b3d) bg_main_mobtv_pane

0x8c8f,	// (0x000830b8) main_mobtv_info_pane

0x8c9a,	// (0x000830c3) main_mobtv_loading_pane_ParamLimits

0x8c9a,	// (0x000830c3) main_mobtv_loading_pane

0xe26f,	// (0x00088698) main_mobtv_pg_channel_list_pane

0xe279,	// (0x000886a2) main_mobtv_pg_hdr_pane

0x8ca7,	// (0x000830d0) main_mobtv_programe_curr_pane_ParamLimits

0x8ca7,	// (0x000830d0) main_mobtv_programe_curr_pane

0x8cb4,	// (0x000830dd) main_mobtv_programe_next_pane_ParamLimits

0x8cb4,	// (0x000830dd) main_mobtv_programe_next_pane

0xe282,	// (0x000886ab) popup_mobtv_noti_window

0xccf5,	// (0x0008711e) main_tv_pg_hdr_pane_g1

0xe28a,	// (0x000886b3) main_tv_pg_hdr_pane_g2

0xe292,	// (0x000886bb) main_tv_pg_hdr_pane_g3

0xe29a,	// (0x000886c3) main_tv_pg_hdr_pane_g4

0xe2a2,	// (0x000886cb) main_tv_pg_hdr_pane_g5

0xe2ac,	// (0x000886d5) main_tv_pg_hdr_pane_g6

0xe2b6,	// (0x000886df) main_tv_pg_hdr_pane_g7

0xe2c0,	// (0x000886e9) main_tv_pg_hdr_pane_g8

0xe2ca,	// (0x000886f3) main_tv_pg_hdr_pane_g9

0xe2d4,	// (0x000886fd) main_tv_pg_hdr_pane_g10

0xe2de,	// (0x00088707) main_tv_pg_hdr_pane_g11

0x000a,

0xfc00,	// (0x0008a029) main_tv_pg_hdr_pane_g

0xe2e8,	// (0x00088711) main_tv_pg_hdr_pane_t1

0xe2f6,	// (0x0008871f) main_tv_pg_hdr_pane_t2

0xe304,	// (0x0008872d) main_tv_pg_hdr_pane_t3

0xe314,	// (0x0008873d) main_tv_pg_hdr_pane_t4

0xe324,	// (0x0008874d) main_tv_pg_hdr_pane_t5

0x0004,

0x0b1a,	// (0x0007af43) main_tv_pg_hdr_pane_t

0xe334,	// (0x0008875d) single_mobtv_pg_channel_pane_ParamLimits

0xe334,	// (0x0008875d) single_mobtv_pg_channel_pane

0xe346,	// (0x0008876f) single_mobtv_pg_channel_table_pane

0xadaf,	// (0x000851d8) single_mobtv_pg_channel_thumb_pane

0xe34f,	// (0x00088778) single_tv_pg_channel_pane_g1

0xe358,	// (0x00088781) single_tv_pg_channel_pane_g2

0x0001,

0x0b25,	// (0x0007af4e) single_tv_pg_channel_pane_g

0xcf4f,	// (0x00087378) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf4f,	// (0x00087378) bg_single_mobtv_pg_channel_thumb_pane

0xe361,	// (0x0008878a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe361,	// (0x0008878a) single_mobtv_pg_channel_thumb_pane_g1

0xe36f,	// (0x00088798) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe36f,	// (0x00088798) single_mobtv_pg_channel_thumb_pane_g2

0xe37b,	// (0x000887a4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe37b,	// (0x000887a4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0b2a,	// (0x0007af53) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0b2a,	// (0x0007af53) single_mobtv_pg_channel_thumb_pane_g

0xe387,	// (0x000887b0) single_mobtv_pg_channel_thumb_pane_t1

0xe395,	// (0x000887be) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b31,	// (0x0007af5a) single_mobtv_pg_channel_thumb_pane_t

0xccf5,	// (0x0008711e) bg_single_mobtv_pg_channel_table_pane_g1

0xccf5,	// (0x0008711e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x00089b18) bg_single_mobtv_pg_channel_table_pane_g

0xe3a3,	// (0x000887cc) single_mobtv_pg_channel_table_pane_t1

0xe3b1,	// (0x000887da) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b36,	// (0x0007af5f) single_mobtv_pg_channel_table_pane_t

0x8cc9,	// (0x000830f2) main_mobtv_info_pane_g1_ParamLimits

0x8cc9,	// (0x000830f2) main_mobtv_info_pane_g1

0x8ce5,	// (0x0008310e) main_mobtv_info_pane_t1_ParamLimits

0x8ce5,	// (0x0008310e) main_mobtv_info_pane_t1

0x8d5d,	// (0x00083186) main_mobtv_info_pane_t2_ParamLimits

0x8d5d,	// (0x00083186) main_mobtv_info_pane_t2

0x0002,

0xfc1c,	// (0x0008a045) main_mobtv_info_pane_t_ParamLimits

0xfc1c,	// (0x0008a045) main_mobtv_info_pane_t

0x8dec,	// (0x00083215) wait_bar_pane_cp05

0x8dfe,	// (0x00083227) main_mobtv_loading_pane_g1_ParamLimits

0x8dfe,	// (0x00083227) main_mobtv_loading_pane_g1

0x8e0c,	// (0x00083235) main_mobtv_loading_pane_g2_ParamLimits

0x8e0c,	// (0x00083235) main_mobtv_loading_pane_g2

0x8e18,	// (0x00083241) main_mobtv_loading_pane_g3_ParamLimits

0x8e18,	// (0x00083241) main_mobtv_loading_pane_g3

0x0002,

0xfc23,	// (0x0008a04c) main_mobtv_loading_pane_g_ParamLimits

0xfc23,	// (0x0008a04c) main_mobtv_loading_pane_g

0xe3bf,	// (0x000887e8) main_mobtv_loading_pane_t1_ParamLimits

0xe3bf,	// (0x000887e8) main_mobtv_loading_pane_t1

0xe3d7,	// (0x00088800) main_mobtv_loading_pane_t2_ParamLimits

0xe3d7,	// (0x00088800) main_mobtv_loading_pane_t2

0x0001,

0x0b4e,	// (0x0007af77) main_mobtv_loading_pane_t_ParamLimits

0x0b4e,	// (0x0007af77) main_mobtv_loading_pane_t

0x8e26,	// (0x0008324f) wait_bar_pane_cp06_ParamLimits

0x8e26,	// (0x0008324f) wait_bar_pane_cp06

0xe3fb,	// (0x00088824) main_mobtv_programe_curr_pane_t1

0xe409,	// (0x00088832) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b53,	// (0x0007af7c) main_mobtv_programe_curr_pane_t

0xe417,	// (0x00088840) main_mobtv_programe_next_pane_t1

0xe425,	// (0x0008884e) main_mobtv_programe_next_pane_t2

0xe433,	// (0x0008885c) main_mobtv_programe_next_pane_t3

0x0002,

0x0b58,	// (0x0007af81) main_mobtv_programe_next_pane_t

0xa0cf,	// (0x000844f8) bg_popup_mobtv_noti_window_pane

0xe441,	// (0x0008886a) popup_mobtv_noti_window_g1

0xe449,	// (0x00088872) popup_mobtv_noti_window_t1

0xe457,	// (0x00088880) popup_mobtv_noti_window_t2

0x0001,

0x0b5f,	// (0x0007af88) popup_mobtv_noti_window_t

0xccf5,	// (0x0008711e) bg_popup_mobtv_noti_window_pane_g1

0xa0cf,	// (0x000844f8) sc_clock_pane

0xa0cf,	// (0x000844f8) main_fs_bigclock_pane

0x84d8,	// (0x00082901) blid2_tripm_pane_t4_ParamLimits

0x84d8,	// (0x00082901) blid2_tripm_pane_t4

0x8e32,	// (0x0008325b) sc_clock_pane_g1_ParamLimits

0x8e32,	// (0x0008325b) sc_clock_pane_g1

0x8e40,	// (0x00083269) sc_clock_pane_t1_ParamLimits

0x8e40,	// (0x00083269) sc_clock_pane_t1

0x8e53,	// (0x0008327c) sc_clock_pane_t2_ParamLimits

0x8e53,	// (0x0008327c) sc_clock_pane_t2

0x8e65,	// (0x0008328e) sc_clock_pane_t3_ParamLimits

0x8e65,	// (0x0008328e) sc_clock_pane_t3

0x0004,

0xfc2a,	// (0x0008a053) sc_clock_pane_t_ParamLimits

0xfc2a,	// (0x0008a053) sc_clock_pane_t

0x9762,	// (0x00083b8b) main_fs_bigclock_indicator_pane_ParamLimits

0x9762,	// (0x00083b8b) main_fs_bigclock_indicator_pane

0x8ee8,	// (0x00083311) main_fs_bigclock_pane_g1_ParamLimits

0x8ee8,	// (0x00083311) main_fs_bigclock_pane_g1

0x976e,	// (0x00083b97) main_fs_bigclock_pane_t1_ParamLimits

0x976e,	// (0x00083b97) main_fs_bigclock_pane_t1

0x9780,	// (0x00083ba9) main_fs_bigclock_pane_t2_ParamLimits

0x9780,	// (0x00083ba9) main_fs_bigclock_pane_t2

0x9794,	// (0x00083bbd) main_fs_bigclock_pane_t3_ParamLimits

0x9794,	// (0x00083bbd) main_fs_bigclock_pane_t3

0x0002,

0xfdcd,	// (0x0008a1f6) main_fs_bigclock_pane_t_ParamLimits

0xfdcd,	// (0x0008a1f6) main_fs_bigclock_pane_t

0xecd0,	// (0x000890f9) main_fs_bigclock_indicator_pane_g1

0xe176,	// (0x0008859f) ncim_query_content_pane_g2_ParamLimits

0xe176,	// (0x0008859f) ncim_query_content_pane_g2

0x0001,

0xfbee,	// (0x0008a017) ncim_query_content_pane_g_ParamLimits

0xfbee,	// (0x0008a017) ncim_query_content_pane_g

0x8e79,	// (0x000832a2) sc_clock_pane_t4_ParamLimits

0x8e79,	// (0x000832a2) sc_clock_pane_t4

0xb4f7,	// (0x00085920) main_radioblah_pane

0x7205,	// (0x0008162e) cell_call4_button_pane_t1_copy1_ParamLimits

0x7205,	// (0x0008162e) cell_call4_button_pane_t1_copy1

0x8abc,	// (0x00082ee5) main_ncimui_pane_t1_ParamLimits

0x8abc,	// (0x00082ee5) main_ncimui_pane_t1

0x8ad6,	// (0x00082eff) main_ncimui_pane_t2_ParamLimits

0x8ad6,	// (0x00082eff) main_ncimui_pane_t2

0x0002,

0xfbe7,	// (0x0008a010) main_ncimui_pane_t_ParamLimits

0xfbe7,	// (0x0008a010) main_ncimui_pane_t

0xe59d,	// (0x000889c6) main_radioblah_anim_pane_ParamLimits

0xe59d,	// (0x000889c6) main_radioblah_anim_pane

0xe5ae,	// (0x000889d7) main_radioblah_info_pane_ParamLimits

0xe5ae,	// (0x000889d7) main_radioblah_info_pane

0xe5c2,	// (0x000889eb) main_radioblah_pane_t1_ParamLimits

0xe5c2,	// (0x000889eb) main_radioblah_pane_t1

0xe5de,	// (0x00088a07) main_radioblah_pane_t2_ParamLimits

0xe5de,	// (0x00088a07) main_radioblah_pane_t2

0x0003,

0x0b85,	// (0x0007afae) main_radioblah_pane_t_ParamLimits

0x0b85,	// (0x0007afae) main_radioblah_pane_t

0x8f3e,	// (0x00083367) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8f3e,	// (0x00083367) main_radioblah_rocker_ctrl_pane

0xe626,	// (0x00088a4f) main_radioblah_info_pane_t1_ParamLimits

0xe626,	// (0x00088a4f) main_radioblah_info_pane_t1

0x8f83,	// (0x000833ac) main_radioblah_info_pane_t2_ParamLimits

0x8f83,	// (0x000833ac) main_radioblah_info_pane_t2

0x0003,

0xfc35,	// (0x0008a05e) main_radioblah_info_pane_t_ParamLimits

0xfc35,	// (0x0008a05e) main_radioblah_info_pane_t

0xccf5,	// (0x0008711e) main_radioblah_rocker_ctrl_pane_g1

0x9033,	// (0x0008345c) main_radioblah_rocker_ctrl_pane_g2

0x903b,	// (0x00083464) main_radioblah_rocker_ctrl_pane_g3

0x9043,	// (0x0008346c) main_radioblah_rocker_ctrl_pane_g4

0x904b,	// (0x00083474) main_radioblah_rocker_ctrl_pane_g5

0x9053,	// (0x0008347c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc3e,	// (0x0008a067) main_radioblah_rocker_ctrl_pane_g

0x8a62,	// (0x00082e8b) main_cset_text2_pane_t1_copy1_ParamLimits

0x7290,	// (0x000816b9) cam4_image_uncrop_qvga_pane

0x73d1,	// (0x000817fa) vid4_image_uncrop_qcif_pane

0x8666,	// (0x00082a8f) cam6_image_uncrop_qvga_pane_ParamLimits

0x8666,	// (0x00082a8f) cam6_image_uncrop_qvga_pane

0xde71,	// (0x0008829a) vid6_image_uncrop_qcif_pane_ParamLimits

0xde71,	// (0x0008829a) vid6_image_uncrop_qcif_pane

0xa0cf,	// (0x000844f8) bg_popup_preview_window_pane_cp03

0xe128,	// (0x00088551) list_cset_text2_pane

0xe130,	// (0x00088559) main_cset6_text2_pane_g1

0xe138,	// (0x00088561) main_cset6_text2_pane_t1

0x905b,	// (0x00083484) list_cset_text2_pane_t1_ParamLimits

0x905b,	// (0x00083484) list_cset_text2_pane_t1

0xb4f7,	// (0x00085920) main_radioblah_pane_ParamLimits

0x8dd8,	// (0x00083201) main_mobtv_info_pane_t3_ParamLimits

0x8dd8,	// (0x00083201) main_mobtv_info_pane_t3

0x8f2c,	// (0x00083355) main_radioblah_pane_g1

0x8f57,	// (0x00083380) main_radioblah_info_pane_g1

0x8fd8,	// (0x00083401) main_radioblah_info_pane_t3_ParamLimits

0x8fd8,	// (0x00083401) main_radioblah_info_pane_t3

0x41b1,	// (0x0007e5da) highlight_cell_cale_month_pane_ParamLimits

0x41b1,	// (0x0007e5da) highlight_cell_cale_month_pane

0xa0cf,	// (0x000844f8) main_phob_fisheye_pane

0xd02b,	// (0x00087454) scroll_pane_cp0031_ParamLimits

0xd02b,	// (0x00087454) scroll_pane_cp0031

0xdf7f,	// (0x000883a8) wait_bar_pane_cp08_ParamLimits

0x8842,	// (0x00082c6b) cset_list_set_pane_copy1_ParamLimits

0xe660,	// (0x00088a89) highlight_cell_cale_month_pane_g1

0x907c,	// (0x000834a5) highlight_cell_cale_month_pane_t1

0xdbf4,	// (0x0008801d) list_gen_pane_cp01

0xd857,	// (0x00087c80) scroll_pane_01

0x160f,	// (0x0007ba38) list_single_double_fisheye_pane

0x1618,	// (0x0007ba41) list_double_fisheye_pane_g1_ParamLimits

0x1618,	// (0x0007ba41) list_double_fisheye_pane_g1

0x908a,	// (0x000834b3) list_double_fisheye_pane_g2_ParamLimits

0x908a,	// (0x000834b3) list_double_fisheye_pane_g2

0x1624,	// (0x0007ba4d) list_double_fisheye_pane_g3_ParamLimits

0x1624,	// (0x0007ba4d) list_double_fisheye_pane_g3

0x0004,

0xfc4b,	// (0x0008a074) list_double_fisheye_pane_g_ParamLimits

0xfc4b,	// (0x0008a074) list_double_fisheye_pane_g

0x163c,	// (0x0007ba65) list_double_fisheye_pane_t1_ParamLimits

0x163c,	// (0x0007ba65) list_double_fisheye_pane_t1

0x1657,	// (0x0007ba80) list_double_fisheye_pane_t2_ParamLimits

0x1657,	// (0x0007ba80) list_double_fisheye_pane_t2

0x0001,

0xfc56,	// (0x0008a07f) list_double_fisheye_pane_t_ParamLimits

0xfc56,	// (0x0008a07f) list_double_fisheye_pane_t

0xa0cf,	// (0x000844f8) main_call5_pane

0x8e9f,	// (0x000832c8) sc_swipe_pane_ParamLimits

0x8e9f,	// (0x000832c8) sc_swipe_pane

0x90bb,	// (0x000834e4) call5_image_pane_ParamLimits

0x90bb,	// (0x000834e4) call5_image_pane

0x90cb,	// (0x000834f4) call5_swipe_1_pane_ParamLimits

0x90cb,	// (0x000834f4) call5_swipe_1_pane

0x90d7,	// (0x00083500) call5_swipe_2_pane_ParamLimits

0x90d7,	// (0x00083500) call5_swipe_2_pane

0x90f1,	// (0x0008351a) popup_call5_audio_first_window_ParamLimits

0x90f1,	// (0x0008351a) popup_call5_audio_first_window

0xcf4f,	// (0x00087378) call5_swipe_1_pane_g1_ParamLimits

0xcf4f,	// (0x00087378) call5_swipe_1_pane_g1

0xe668,	// (0x00088a91) call5_swipe_1_pane_g2_ParamLimits

0xe668,	// (0x00088a91) call5_swipe_1_pane_g2

0x0001,

0xfc5b,	// (0x0008a084) call5_swipe_1_pane_g_ParamLimits

0xfc5b,	// (0x0008a084) call5_swipe_1_pane_g

0xe674,	// (0x00088a9d) call5_swipe_1_pane_t1_ParamLimits

0xe674,	// (0x00088a9d) call5_swipe_1_pane_t1

0xcf4f,	// (0x00087378) call5_swipe_2_pane_g1_ParamLimits

0xcf4f,	// (0x00087378) call5_swipe_2_pane_g1

0xe689,	// (0x00088ab2) call5_swipe_2_pane_g2_ParamLimits

0xe689,	// (0x00088ab2) call5_swipe_2_pane_g2

0x0001,

0xfc60,	// (0x0008a089) call5_swipe_2_pane_g_ParamLimits

0xfc60,	// (0x0008a089) call5_swipe_2_pane_g

0xe695,	// (0x00088abe) call5_swipe_2_pane_t1_ParamLimits

0xe695,	// (0x00088abe) call5_swipe_2_pane_t1

0xe6c5,	// (0x00088aee) sc_swipe_pane_g1_ParamLimits

0xe6c5,	// (0x00088aee) sc_swipe_pane_g1

0xe6d2,	// (0x00088afb) sc_swipe_pane_g2_ParamLimits

0xe6d2,	// (0x00088afb) sc_swipe_pane_g2

0x0001,

0x0bbe,	// (0x0007afe7) sc_swipe_pane_g_ParamLimits

0x0bbe,	// (0x0007afe7) sc_swipe_pane_g

0xe6de,	// (0x00088b07) sc_swipe_pane_t1_ParamLimits

0xe6de,	// (0x00088b07) sc_swipe_pane_t1

0xa0cf,	// (0x000844f8) main_cmail_launcher_pane

0x90ff,	// (0x00083528) aid_size_cell_cmail_l_ParamLimits

0x90ff,	// (0x00083528) aid_size_cell_cmail_l

0x910d,	// (0x00083536) grid_cmail_l_pane_ParamLimits

0x910d,	// (0x00083536) grid_cmail_l_pane

0x911d,	// (0x00083546) cell_cmail_l_pane_ParamLimits

0x911d,	// (0x00083546) cell_cmail_l_pane

0xe6f3,	// (0x00088b1c) cell_cmail_l_pane_g1_ParamLimits

0xe6f3,	// (0x00088b1c) cell_cmail_l_pane_g1

0xe6ff,	// (0x00088b28) cell_cmail_l_pane_t1_ParamLimits

0xe6ff,	// (0x00088b28) cell_cmail_l_pane_t1

0xe715,	// (0x00088b3e) cell_cmail_l_pane_t2_ParamLimits

0xe715,	// (0x00088b3e) cell_cmail_l_pane_t2

0x0001,

0x0bc3,	// (0x0007afec) cell_cmail_l_pane_t_ParamLimits

0x0bc3,	// (0x0007afec) cell_cmail_l_pane_t

0xb4f7,	// (0x00085920) grid_highlight_pane_cp018_ParamLimits

0xb4f7,	// (0x00085920) grid_highlight_pane_cp018

0x2220,	// (0x0007c649) main2_pane_ParamLimits

0x2220,	// (0x0007c649) main2_pane

0xa909,	// (0x00084d32) popup_sp_fs_action_menu_bg_pane_g1

0xa911,	// (0x00084d3a) popup_sp_fs_action_menu_bg_pane_g2

0xa919,	// (0x00084d42) popup_sp_fs_action_menu_bg_pane_g3

0xa921,	// (0x00084d4a) popup_sp_fs_action_menu_bg_pane_g4

0xa929,	// (0x00084d52) popup_sp_fs_action_menu_bg_pane_g5

0xa931,	// (0x00084d5a) popup_sp_fs_action_menu_bg_pane_g6

0xa939,	// (0x00084d62) popup_sp_fs_action_menu_bg_pane_g7

0xa941,	// (0x00084d6a) popup_sp_fs_action_menu_bg_pane_g8

0xa949,	// (0x00084d72) popup_sp_fs_action_menu_bg_pane_g9

0xa951,	// (0x00084d7a) popup_sp_fs_action_menu_bg_pane_g10

0xa951,	// (0x00084d7a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000895b3) popup_sp_fs_action_menu_bg_pane_g

0x0e22,	// (0x0007b24b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x2_t3_g3_g1

0x0e2e,	// (0x0007b257) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0e2e,	// (0x0007b257) list_medium_line_x2_t3_g3_g2

0x0e3a,	// (0x0007b263) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0e3a,	// (0x0007b263) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00089661) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00089661) list_medium_line_x2_t3_g3_g

0x0e46,	// (0x0007b26f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0e46,	// (0x0007b26f) list_medium_line_x2_t3_g3_t1

0x0e5b,	// (0x0007b284) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0e5b,	// (0x0007b284) list_medium_line_x2_t3_g3_t2

0x0e6d,	// (0x0007b296) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0e6d,	// (0x0007b296) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00089668) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00089668) list_medium_line_x2_t3_g3_t

0x0e22,	// (0x0007b24b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x2_t3_g2_g1

0x0e3a,	// (0x0007b263) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0e3a,	// (0x0007b263) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008966f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008966f) list_medium_line_x2_t3_g2_g

0x0e82,	// (0x0007b2ab) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0e82,	// (0x0007b2ab) list_medium_line_x2_t3_g2_t1

0x0e98,	// (0x0007b2c1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0e98,	// (0x0007b2c1) list_medium_line_x2_t3_g2_t2

0x0e6d,	// (0x0007b296) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0e6d,	// (0x0007b296) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00089674) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00089674) list_medium_line_x2_t3_g2_t

0x0e22,	// (0x0007b24b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x2_t4_g4_g1

0x0eaa,	// (0x0007b2d3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0eaa,	// (0x0007b2d3) list_medium_line_x2_t4_g4_g2

0x0e2e,	// (0x0007b257) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0e2e,	// (0x0007b257) list_medium_line_x2_t4_g4_g3

0x0eb6,	// (0x0007b2df) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0eb6,	// (0x0007b2df) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0008967b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0008967b) list_medium_line_x2_t4_g4_g

0x0ec2,	// (0x0007b2eb) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ec2,	// (0x0007b2eb) list_medium_line_x2_t4_g4_t1

0x0edc,	// (0x0007b305) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0edc,	// (0x0007b305) list_medium_line_x2_t4_g4_t2

0x0ef2,	// (0x0007b31b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0ef2,	// (0x0007b31b) list_medium_line_x2_t4_g4_t3

0x0f07,	// (0x0007b330) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0f07,	// (0x0007b330) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00089684) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00089684) list_medium_line_x2_t4_g4_t

0x0e22,	// (0x0007b24b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x2_t2_g4_g1

0x0eaa,	// (0x0007b2d3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0eaa,	// (0x0007b2d3) list_medium_line_x2_t2_g4_g2

0x0e2e,	// (0x0007b257) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0e2e,	// (0x0007b257) list_medium_line_x2_t2_g4_g3

0x0e3a,	// (0x0007b263) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0e3a,	// (0x0007b263) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000896eb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000896eb) list_medium_line_x2_t2_g4_g

0x0f19,	// (0x0007b342) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0f19,	// (0x0007b342) list_medium_line_x2_t2_g4_t1

0x0e6d,	// (0x0007b296) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0e6d,	// (0x0007b296) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000896f4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000896f4) list_medium_line_x2_t2_g4_t

0x0e22,	// (0x0007b24b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x2_t2_g3_g1

0x0e2e,	// (0x0007b257) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0e2e,	// (0x0007b257) list_medium_line_x2_t2_g3_g2

0x0e3a,	// (0x0007b263) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0e3a,	// (0x0007b263) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00089661) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00089661) list_medium_line_x2_t2_g3_g

0x0f2e,	// (0x0007b357) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0f2e,	// (0x0007b357) list_medium_line_x2_t2_g3_t1

0x0e6d,	// (0x0007b296) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0e6d,	// (0x0007b296) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000896f9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000896f9) list_medium_line_x2_t2_g3_t

0x4392,	// (0x0007e7bb) main_sp_fs_list_pane_ParamLimits

0x4392,	// (0x0007e7bb) main_sp_fs_list_pane

0x439e,	// (0x0007e7c7) sp_fs_scroll_pane_ParamLimits

0x439e,	// (0x0007e7c7) sp_fs_scroll_pane

0x0f5d,	// (0x0007b386) list_medium_line_x2_t3_t1

0x0f6d,	// (0x0007b396) list_medium_line_x2_t3_t2

0x0f7b,	// (0x0007b3a4) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00089744) list_medium_line_x2_t3_t

0x0f89,	// (0x0007b3b2) list_medium_line_x3_t4_t1

0x0f99,	// (0x0007b3c2) list_medium_line_x3_t4_t2

0x0fa7,	// (0x0007b3d0) list_medium_line_x3_t4_t3

0x0f7b,	// (0x0007b3a4) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0008974b) list_medium_line_x3_t4_t

0x0fb5,	// (0x0007b3de) list_medium_line_x4_t5_t1

0x0fc5,	// (0x0007b3ee) list_medium_line_x4_t5_t2

0x0fa7,	// (0x0007b3d0) list_medium_line_x4_t5_t3

0x0fd3,	// (0x0007b3fc) list_medium_line_x4_t5_t4

0x0f7b,	// (0x0007b3a4) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00089754) list_medium_line_x4_t5_t

0x0e22,	// (0x0007b24b) list_medium_line_t4_g4_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_t4_g4_g1

0x0eb6,	// (0x0007b2df) list_medium_line_t4_g4_g2_ParamLimits

0x0eb6,	// (0x0007b2df) list_medium_line_t4_g4_g2

0x0fe1,	// (0x0007b40a) list_medium_line_t4_g4_g3_ParamLimits

0x0fe1,	// (0x0007b40a) list_medium_line_t4_g4_g3

0x0e3a,	// (0x0007b263) list_medium_line_t4_g4_g4_ParamLimits

0x0e3a,	// (0x0007b263) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008975f) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008975f) list_medium_line_t4_g4_g

0x0fed,	// (0x0007b416) list_medium_line_t4_g4_t1_ParamLimits

0x0fed,	// (0x0007b416) list_medium_line_t4_g4_t1

0x1002,	// (0x0007b42b) list_medium_line_t4_g4_t2_ParamLimits

0x1002,	// (0x0007b42b) list_medium_line_t4_g4_t2

0x1017,	// (0x0007b440) list_medium_line_t4_g4_t3_ParamLimits

0x1017,	// (0x0007b440) list_medium_line_t4_g4_t3

0x0e6d,	// (0x0007b296) list_medium_line_t4_g4_t4_ParamLimits

0x0e6d,	// (0x0007b296) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00089768) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00089768) list_medium_line_t4_g4_t

0x44b5,	// (0x0007e8de) chi_dic_find_pane_g1

0x5337,	// (0x0007f760) main_tport_pane

0x128a,	// (0x0007b6b3) list_medium_line_plain_t1

0x1298,	// (0x0007b6c1) list_medium_line_t2_g2_g1_ParamLimits

0x1298,	// (0x0007b6c1) list_medium_line_t2_g2_g1

0x7e1a,	// (0x00082243) list_medium_line_t2_g2_g2_ParamLimits

0x7e1a,	// (0x00082243) list_medium_line_t2_g2_g2

0x0001,

0xfa0c,	// (0x00089e35) list_medium_line_t2_g2_g_ParamLimits

0xfa0c,	// (0x00089e35) list_medium_line_t2_g2_g

0x12a4,	// (0x0007b6cd) list_medium_line_t2_g2_t1_ParamLimits

0x12a4,	// (0x0007b6cd) list_medium_line_t2_g2_t1

0x12be,	// (0x0007b6e7) list_medium_line_t2_g2_t2_ParamLimits

0x12be,	// (0x0007b6e7) list_medium_line_t2_g2_t2

0x0001,

0xfa11,	// (0x00089e3a) list_medium_line_t2_g2_t_ParamLimits

0xfa11,	// (0x00089e3a) list_medium_line_t2_g2_t

0x14de,	// (0x0007b907) aid_sp_fs_list_icon_a_sm

0x8341,	// (0x0008276a) aid_sp_fs_list_icon_d

0xa4d4,	// (0x000848fd) aid_sp_fs_text_primary

0xa43f,	// (0x00084868) aid_sp_fs_text_secondary

0x8349,	// (0x00082772) list_medium_line

0x8349,	// (0x00082772) list_medium_line_g2

0x8349,	// (0x00082772) list_medium_line_g3

0x8349,	// (0x00082772) list_medium_line_plain

0x8349,	// (0x00082772) list_medium_line_plain_t2

0x8349,	// (0x00082772) list_medium_line_plain_t3

0x8349,	// (0x00082772) list_medium_line_right_icon

0x8349,	// (0x00082772) list_medium_line_right_iconx2

0x8349,	// (0x00082772) list_medium_line_t2

0x8349,	// (0x00082772) list_medium_line_t2_g2

0x8349,	// (0x00082772) list_medium_line_t2_g3

0x8349,	// (0x00082772) list_medium_line_t2_right_icon

0x8349,	// (0x00082772) list_medium_line_t2_right_iconx2

0x8349,	// (0x00082772) list_medium_line_t3

0x8349,	// (0x00082772) list_medium_line_t3_g2

0x8349,	// (0x00082772) list_medium_line_t3_g3

0x8349,	// (0x00082772) list_medium_line_t3_right_iconx2

0x14e6,	// (0x0007b90f) list_medium_line_t4_g4

0x14ef,	// (0x0007b918) list_medium_line_x2

0x14ef,	// (0x0007b918) list_medium_line_x2_t2_g2

0x14ef,	// (0x0007b918) list_medium_line_x2_t2_g3

0x14ef,	// (0x0007b918) list_medium_line_x2_t2_g4

0x14ef,	// (0x0007b918) list_medium_line_x2_t3

0x14ef,	// (0x0007b918) list_medium_line_x2_t3_g2

0x14ef,	// (0x0007b918) list_medium_line_x2_t3_g3

0x14ef,	// (0x0007b918) list_medium_line_x2_t3_g4

0x14ef,	// (0x0007b918) list_medium_line_x2_t4_g2

0x14ef,	// (0x0007b918) list_medium_line_x2_t4_g4

0x14f8,	// (0x0007b921) list_medium_line_x3

0x14f8,	// (0x0007b921) list_medium_line_x3_t4

0x14f8,	// (0x0007b921) list_medium_line_x3_t4_g4

0x14e6,	// (0x0007b90f) list_medium_line_x4_t4

0x14e6,	// (0x0007b90f) list_medium_line_x4_t4_g7

0x14e6,	// (0x0007b90f) list_medium_line_x4_t5

0x1501,	// (0x0007b92a) list_single_fs_dyc_pane_ParamLimits

0x1501,	// (0x0007b92a) list_single_fs_dyc_pane

0x0e22,	// (0x0007b24b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x4_t4_g7_g1

0x1539,	// (0x0007b962) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1539,	// (0x0007b962) list_medium_line_x4_t4_g7_g2

0x1545,	// (0x0007b96e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1545,	// (0x0007b96e) list_medium_line_x4_t4_g7_g3

0x1554,	// (0x0007b97d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1554,	// (0x0007b97d) list_medium_line_x4_t4_g7_g4

0x1560,	// (0x0007b989) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1560,	// (0x0007b989) list_medium_line_x4_t4_g7_g5

0x156f,	// (0x0007b998) list_medium_line_x4_t4_g7_g6_ParamLimits

0x156f,	// (0x0007b998) list_medium_line_x4_t4_g7_g6

0x157e,	// (0x0007b9a7) list_medium_line_x4_t4_g7_g7_ParamLimits

0x157e,	// (0x0007b9a7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc8,	// (0x00089ff1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc8,	// (0x00089ff1) list_medium_line_x4_t4_g7_g

0x158a,	// (0x0007b9b3) list_medium_line_x4_t4_g7_t1_ParamLimits

0x158a,	// (0x0007b9b3) list_medium_line_x4_t4_g7_t1

0x159f,	// (0x0007b9c8) list_medium_line_x4_t4_g7_t2_ParamLimits

0x159f,	// (0x0007b9c8) list_medium_line_x4_t4_g7_t2

0x15b4,	// (0x0007b9dd) list_medium_line_x4_t4_g7_t3_ParamLimits

0x15b4,	// (0x0007b9dd) list_medium_line_x4_t4_g7_t3

0x15c9,	// (0x0007b9f2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x15c9,	// (0x0007b9f2) list_medium_line_x4_t4_g7_t4

0x15db,	// (0x0007ba04) list_medium_line_x4_t4_g7_t5_ParamLimits

0x15db,	// (0x0007ba04) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd7,	// (0x0008a000) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd7,	// (0x0008a000) list_medium_line_x4_t4_g7_t

0x15ed,	// (0x0007ba16) list_single_dyc_row_pane_ParamLimits

0x15ed,	// (0x0007ba16) list_single_dyc_row_pane

0x90af,	// (0x000834d8) call5_gesture_pane_ParamLimits

0x90af,	// (0x000834d8) call5_gesture_pane

0x90e3,	// (0x0008350c) call5_windows_pane_ParamLimits

0x90e3,	// (0x0008350c) call5_windows_pane

0x9136,	// (0x0008355f) call5_swipe_1_pane_cp_ParamLimits

0x9136,	// (0x0008355f) call5_swipe_1_pane_cp

0x9142,	// (0x0008356b) call5_swipe_2_pane_cp_ParamLimits

0x9142,	// (0x0008356b) call5_swipe_2_pane_cp

0xaa35,	// (0x00084e5e) call5_image_pane_cp

0x914e,	// (0x00083577) popup_call5_audio_first_window_cp_ParamLimits

0x914e,	// (0x00083577) popup_call5_audio_first_window_cp

0xe6c5,	// (0x00088aee) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6c5,	// (0x00088aee) call5_swipe_1_pane_g1_cp

0xe732,	// (0x00088b5b) call5_swipe_1_pane_g2_cp

0xe6de,	// (0x00088b07) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6de,	// (0x00088b07) call5_swipe_1_pane_t1_cp

0xe6c5,	// (0x00088aee) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6c5,	// (0x00088aee) call5_swipe_2_pane_g1_cp

0xe73a,	// (0x00088b63) call5_swipe_2_pane_g2_cp

0xe742,	// (0x00088b6b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe742,	// (0x00088b6b) call5_swipe_2_pane_t1_cp

0xb4f7,	// (0x00085920) main_sp_fs_email_pane

0xe757,	// (0x00088b80) main_sp_fs_listscroll_pane_te

0x915c,	// (0x00083585) popup_sp_fs_action_menu_pane_ParamLimits

0x915c,	// (0x00083585) popup_sp_fs_action_menu_pane

0xccf5,	// (0x0008711e) bg_sp_fs_ctrlbar_pane_g1

0xe760,	// (0x00088b89) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe769,	// (0x00088b92) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe772,	// (0x00088b9b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccf5,	// (0x0008711e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc65,	// (0x0008a08e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcada,	// (0x00086f03) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcada,	// (0x00086f03) bg_sp_fs_ctrlbar_ddmenu_pane

0xe77b,	// (0x00088ba4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe77b,	// (0x00088ba4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe787,	// (0x00088bb0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe787,	// (0x00088bb0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0bd1,	// (0x0007affa) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0bd1,	// (0x0007affa) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe793,	// (0x00088bbc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe793,	// (0x00088bbc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x91a0,	// (0x000835c9) list_medium_line_t2_right_icon_g1

0x1679,	// (0x0007baa2) list_medium_line_t2_right_icon_t1

0x1689,	// (0x0007bab2) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6e,	// (0x0008a097) list_medium_line_t2_right_icon_t

0xc8ed,	// (0x00086d16) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8ed,	// (0x00086d16) bg_sp_fs_ctrlbar_pane

0x91eb,	// (0x00083614) main_sp_fs_ctrlbar_button_pane_cp01

0x91f3,	// (0x0008361c) main_sp_fs_ctrlbar_ddmenu_pane

0xe7e5,	// (0x00088c0e) main_sp_fs_ctrlbar_pane_g1

0xe7f1,	// (0x00088c1a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0bdb,	// (0x0007b004) main_sp_fs_ctrlbar_pane_g

0xe7fd,	// (0x00088c26) main_sp_fs_ctrlbar_pane_t1

0x91fd,	// (0x00083626) main_sp_fs_ctrlbar_pane

0x9213,	// (0x0008363c) main_sp_fs_listscroll_pane_te_cp01

0x1697,	// (0x0007bac0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1697,	// (0x0007bac0) popup_sp_fs_action_menu_pane_cp01

0xb4f7,	// (0x00085920) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb4f7,	// (0x00085920) bg_sp_fs_highlight_list_pane_cp01

0x16c1,	// (0x0007baea) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x16c1,	// (0x0007baea) sp_fs_action_menu_list_gene_pane_g1

0xe82d,	// (0x00088c56) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe82d,	// (0x00088c56) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc73,	// (0x0008a09c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc73,	// (0x0008a09c) sp_fs_action_menu_list_gene_pane_g

0x16d0,	// (0x0007baf9) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x16d0,	// (0x0007baf9) sp_fs_action_menu_list_gene_pane_t1

0x16e8,	// (0x0007bb11) sp_fs_action_menu_list_gene_pane_ParamLimits

0x16e8,	// (0x0007bb11) sp_fs_action_menu_list_gene_pane

0xe83a,	// (0x00088c63) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe83a,	// (0x00088c63) popup_sp_fs_action_menu_bg_pane

0x1707,	// (0x0007bb30) sp_fs_action_menu_list_pane_ParamLimits

0x1707,	// (0x0007bb30) sp_fs_action_menu_list_pane

0xa4dd,	// (0x00084906) sp_fs_scroll_pane_cp01_ParamLimits

0xa4dd,	// (0x00084906) sp_fs_scroll_pane_cp01

0x1727,	// (0x0007bb50) list_medium_line_plain_t2_t1

0x1737,	// (0x0007bb60) list_medium_line_plain_t2_t2

0x0001,

0xfc78,	// (0x0008a0a1) list_medium_line_plain_t2_t

0x1745,	// (0x0007bb6e) list_medium_line_plain_t3_t1

0x1755,	// (0x0007bb7e) list_medium_line_plain_t3_t2

0x1763,	// (0x0007bb8c) list_medium_line_plain_t3_t3

0x0002,

0xfc7d,	// (0x0008a0a6) list_medium_line_plain_t3_t

0x0e22,	// (0x0007b24b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x2_t2_g2_g1

0x0e3a,	// (0x0007b263) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0e3a,	// (0x0007b263) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008966f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008966f) list_medium_line_x2_t2_g2_g

0x0fed,	// (0x0007b416) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0fed,	// (0x0007b416) list_medium_line_x2_t2_g2_t1

0x0e6d,	// (0x0007b296) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0e6d,	// (0x0007b296) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc84,	// (0x0008a0ad) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc84,	// (0x0008a0ad) list_medium_line_x2_t2_g2_t

0x0e22,	// (0x0007b24b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x2_t4_g2_g1

0x1771,	// (0x0007bb9a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1771,	// (0x0007bb9a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc89,	// (0x0008a0b2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc89,	// (0x0008a0b2) list_medium_line_x2_t4_g2_g

0x1783,	// (0x0007bbac) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1783,	// (0x0007bbac) list_medium_line_x2_t4_g2_t1

0x179d,	// (0x0007bbc6) list_medium_line_x2_t4_g2_t2_ParamLimits

0x179d,	// (0x0007bbc6) list_medium_line_x2_t4_g2_t2

0x17b3,	// (0x0007bbdc) list_medium_line_x2_t4_g2_t3_ParamLimits

0x17b3,	// (0x0007bbdc) list_medium_line_x2_t4_g2_t3

0x0e6d,	// (0x0007b296) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0e6d,	// (0x0007b296) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc8e,	// (0x0008a0b7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc8e,	// (0x0008a0b7) list_medium_line_x2_t4_g2_t

0x9224,	// (0x0008364d) list_medium_line_t3_right_iconx2_g1

0x91a0,	// (0x000835c9) list_medium_line_t3_right_iconx2_g2

0x17c8,	// (0x0007bbf1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc97,	// (0x0008a0c0) list_medium_line_t3_right_iconx2_g

0x17d0,	// (0x0007bbf9) list_medium_line_t3_right_iconx2_t1

0x17e0,	// (0x0007bc09) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc9e,	// (0x0008a0c7) list_medium_line_t3_right_iconx2_t

0x0e22,	// (0x0007b24b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x3_t4_g4_g1

0x0e2e,	// (0x0007b257) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0e2e,	// (0x0007b257) list_medium_line_x3_t4_g4_g2

0x0eb6,	// (0x0007b2df) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0eb6,	// (0x0007b2df) list_medium_line_x3_t4_g4_g3

0x17ee,	// (0x0007bc17) list_medium_line_x3_t4_g4_g4_ParamLimits

0x17ee,	// (0x0007bc17) list_medium_line_x3_t4_g4_g4

0x0003,

0xfca3,	// (0x0008a0cc) list_medium_line_x3_t4_g4_g_ParamLimits

0xfca3,	// (0x0008a0cc) list_medium_line_x3_t4_g4_g

0x17fa,	// (0x0007bc23) list_medium_line_x3_t4_g4_t1_ParamLimits

0x17fa,	// (0x0007bc23) list_medium_line_x3_t4_g4_t1

0x1811,	// (0x0007bc3a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1811,	// (0x0007bc3a) list_medium_line_x3_t4_g4_t2

0x1002,	// (0x0007b42b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1002,	// (0x0007b42b) list_medium_line_x3_t4_g4_t3

0x1826,	// (0x0007bc4f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1826,	// (0x0007bc4f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcac,	// (0x0008a0d5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcac,	// (0x0008a0d5) list_medium_line_x3_t4_g4_t

0x1843,	// (0x0007bc6c) list_single_dyc_row_text_pane_t1_ParamLimits

0x1843,	// (0x0007bc6c) list_single_dyc_row_text_pane_t1

0x187a,	// (0x0007bca3) list_single_dyc_row_text_pane_t2_ParamLimits

0x187a,	// (0x0007bca3) list_single_dyc_row_text_pane_t2

0x18f0,	// (0x0007bd19) list_single_dyc_row_text_pane_t3_ParamLimits

0x18f0,	// (0x0007bd19) list_single_dyc_row_text_pane_t3

0x0005,

0xfcb5,	// (0x0008a0de) list_single_dyc_row_text_pane_t_ParamLimits

0xfcb5,	// (0x0008a0de) list_single_dyc_row_text_pane_t

0x19c1,	// (0x0007bdea) list_single_dyc_row_pane_g1_ParamLimits

0x19c1,	// (0x0007bdea) list_single_dyc_row_pane_g1

0x19cd,	// (0x0007bdf6) list_single_dyc_row_pane_g2_ParamLimits

0x19cd,	// (0x0007bdf6) list_single_dyc_row_pane_g2

0x19d9,	// (0x0007be02) list_single_dyc_row_pane_g3_ParamLimits

0x19d9,	// (0x0007be02) list_single_dyc_row_pane_g3

0x19e5,	// (0x0007be0e) list_single_dyc_row_pane_g4_ParamLimits

0x19e5,	// (0x0007be0e) list_single_dyc_row_pane_g4

0x0003,

0xfcc2,	// (0x0008a0eb) list_single_dyc_row_pane_g_ParamLimits

0xfcc2,	// (0x0008a0eb) list_single_dyc_row_pane_g

0x19f1,	// (0x0007be1a) list_single_dyc_row_text_pane_ParamLimits

0x19f1,	// (0x0007be1a) list_single_dyc_row_text_pane

0xa0cf,	// (0x000844f8) bg_sp_fs_scroll_pane

0xe848,	// (0x00088c71) thumb_sp_fs_scroll_pane

0x1298,	// (0x0007b6c1) list_medium_line_g1_ParamLimits

0x1298,	// (0x0007b6c1) list_medium_line_g1

0x1a10,	// (0x0007be39) list_medium_line_t1_ParamLimits

0x1a10,	// (0x0007be39) list_medium_line_t1

0x0e22,	// (0x0007b24b) list_medium_line_x2_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x2_g1

0x0e2e,	// (0x0007b257) list_medium_line_x2_g2_ParamLimits

0x0e2e,	// (0x0007b257) list_medium_line_x2_g2

0x0001,

0xfccb,	// (0x0008a0f4) list_medium_line_x2_g_ParamLimits

0xfccb,	// (0x0008a0f4) list_medium_line_x2_g

0x1a25,	// (0x0007be4e) list_medium_line_x2_t1_ParamLimits

0x1a25,	// (0x0007be4e) list_medium_line_x2_t1

0x0e22,	// (0x0007b24b) list_medium_line_x3_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x3_g1

0x0e2e,	// (0x0007b257) list_medium_line_x3_g2_ParamLimits

0x0e2e,	// (0x0007b257) list_medium_line_x3_g2

0x0001,

0xfccb,	// (0x0008a0f4) list_medium_line_x3_g_ParamLimits

0xfccb,	// (0x0008a0f4) list_medium_line_x3_g

0x1a25,	// (0x0007be4e) list_medium_line_x3_t1_ParamLimits

0x1a25,	// (0x0007be4e) list_medium_line_x3_t1

0xe851,	// (0x00088c7a) thumb_sp_fs_scroll_pane_g1

0xe85a,	// (0x00088c83) thumb_sp_fs_scroll_pane_g2

0xe863,	// (0x00088c8c) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0c42,	// (0x0007b06b) thumb_sp_fs_scroll_pane_g

0xe851,	// (0x00088c7a) bg_sp_fs_scroll_pane_g1

0xe85a,	// (0x00088c83) bg_sp_fs_scroll_pane_g2

0xe863,	// (0x00088c8c) bg_sp_fs_scroll_pane_g3

0x0002,

0x0c42,	// (0x0007b06b) bg_sp_fs_scroll_pane_g

0x0e22,	// (0x0007b24b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0e22,	// (0x0007b24b) list_medium_line_x2_t3_g4_g1

0x0eaa,	// (0x0007b2d3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0eaa,	// (0x0007b2d3) list_medium_line_x2_t3_g4_g2

0x0e2e,	// (0x0007b257) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0e2e,	// (0x0007b257) list_medium_line_x2_t3_g4_g3

0x0e3a,	// (0x0007b263) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0e3a,	// (0x0007b263) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000896eb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000896eb) list_medium_line_x2_t3_g4_g

0x1a3b,	// (0x0007be64) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1a3b,	// (0x0007be64) list_medium_line_x2_t3_g4_t1

0x1a51,	// (0x0007be7a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1a51,	// (0x0007be7a) list_medium_line_x2_t3_g4_t2

0x0e6d,	// (0x0007b296) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0e6d,	// (0x0007b296) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcd0,	// (0x0008a0f9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcd0,	// (0x0008a0f9) list_medium_line_x2_t3_g4_t

0x1298,	// (0x0007b6c1) list_medium_line_g2_g1_ParamLimits

0x1298,	// (0x0007b6c1) list_medium_line_g2_g1

0x7e1a,	// (0x00082243) list_medium_line_g2_g2_ParamLimits

0x7e1a,	// (0x00082243) list_medium_line_g2_g2

0x0001,

0xfa0c,	// (0x00089e35) list_medium_line_g2_g_ParamLimits

0xfa0c,	// (0x00089e35) list_medium_line_g2_g

0x1a6b,	// (0x0007be94) list_medium_line_g2_t1_ParamLimits

0x1a6b,	// (0x0007be94) list_medium_line_g2_t1

0x1298,	// (0x0007b6c1) list_medium_line_t3_g2_g1_ParamLimits

0x1298,	// (0x0007b6c1) list_medium_line_t3_g2_g1

0x7e1a,	// (0x00082243) list_medium_line_t3_g2_g2_ParamLimits

0x7e1a,	// (0x00082243) list_medium_line_t3_g2_g2

0x0001,

0xfa0c,	// (0x00089e35) list_medium_line_t3_g2_g_ParamLimits

0xfa0c,	// (0x00089e35) list_medium_line_t3_g2_g

0x1a80,	// (0x0007bea9) list_medium_line_t3_g2_t1_ParamLimits

0x1a80,	// (0x0007bea9) list_medium_line_t3_g2_t1

0x1a9a,	// (0x0007bec3) list_medium_line_t3_g2_t2_ParamLimits

0x1a9a,	// (0x0007bec3) list_medium_line_t3_g2_t2

0x1ab0,	// (0x0007bed9) list_medium_line_t3_g2_t3_ParamLimits

0x1ab0,	// (0x0007bed9) list_medium_line_t3_g2_t3

0x0002,

0xfcd7,	// (0x0008a100) list_medium_line_t3_g2_t_ParamLimits

0xfcd7,	// (0x0008a100) list_medium_line_t3_g2_t

0x91a0,	// (0x000835c9) list_medium_line_right_icon_g1

0x1ac6,	// (0x0007beef) list_medium_line_right_icon_t1

0x1298,	// (0x0007b6c1) list_medium_line_t2_g1_ParamLimits

0x1298,	// (0x0007b6c1) list_medium_line_t2_g1

0x1ad4,	// (0x0007befd) list_medium_line_t2_t1_ParamLimits

0x1ad4,	// (0x0007befd) list_medium_line_t2_t1

0x1aee,	// (0x0007bf17) list_medium_line_t2_t2_ParamLimits

0x1aee,	// (0x0007bf17) list_medium_line_t2_t2

0x0001,

0xfcde,	// (0x0008a107) list_medium_line_t2_t_ParamLimits

0xfcde,	// (0x0008a107) list_medium_line_t2_t

0x1298,	// (0x0007b6c1) list_medium_line_t3_g1_ParamLimits

0x1298,	// (0x0007b6c1) list_medium_line_t3_g1

0x1b03,	// (0x0007bf2c) list_medium_line_t3_t1_ParamLimits

0x1b03,	// (0x0007bf2c) list_medium_line_t3_t1

0x1b1d,	// (0x0007bf46) list_medium_line_t3_t2_ParamLimits

0x1b1d,	// (0x0007bf46) list_medium_line_t3_t2

0x1b33,	// (0x0007bf5c) list_medium_line_t3_t3_ParamLimits

0x1b33,	// (0x0007bf5c) list_medium_line_t3_t3

0x0002,

0xfce3,	// (0x0008a10c) list_medium_line_t3_t_ParamLimits

0xfce3,	// (0x0008a10c) list_medium_line_t3_t

0x1298,	// (0x0007b6c1) list_medium_line_g3_g1_ParamLimits

0x1298,	// (0x0007b6c1) list_medium_line_g3_g1

0x922c,	// (0x00083655) list_medium_line_g3_g2_ParamLimits

0x922c,	// (0x00083655) list_medium_line_g3_g2

0x7e1a,	// (0x00082243) list_medium_line_g3_g3_ParamLimits

0x7e1a,	// (0x00082243) list_medium_line_g3_g3

0x0002,

0xfcea,	// (0x0008a113) list_medium_line_g3_g_ParamLimits

0xfcea,	// (0x0008a113) list_medium_line_g3_g

0x1b48,	// (0x0007bf71) list_medium_line_g3_t1_ParamLimits

0x1b48,	// (0x0007bf71) list_medium_line_g3_t1

0x1298,	// (0x0007b6c1) list_medium_line_t2_g3_g1_ParamLimits

0x1298,	// (0x0007b6c1) list_medium_line_t2_g3_g1

0x922c,	// (0x00083655) list_medium_line_t2_g3_g2_ParamLimits

0x922c,	// (0x00083655) list_medium_line_t2_g3_g2

0x7e1a,	// (0x00082243) list_medium_line_t2_g3_g3_ParamLimits

0x7e1a,	// (0x00082243) list_medium_line_t2_g3_g3

0x0002,

0xfcea,	// (0x0008a113) list_medium_line_t2_g3_g_ParamLimits

0xfcea,	// (0x0008a113) list_medium_line_t2_g3_g

0x1b5d,	// (0x0007bf86) list_medium_line_t2_g3_t1_ParamLimits

0x1b5d,	// (0x0007bf86) list_medium_line_t2_g3_t1

0x1b77,	// (0x0007bfa0) list_medium_line_t2_g3_t2_ParamLimits

0x1b77,	// (0x0007bfa0) list_medium_line_t2_g3_t2

0x0001,

0xfcf1,	// (0x0008a11a) list_medium_line_t2_g3_t_ParamLimits

0xfcf1,	// (0x0008a11a) list_medium_line_t2_g3_t

0x1298,	// (0x0007b6c1) list_medium_line_t3_g3_g1_ParamLimits

0x1298,	// (0x0007b6c1) list_medium_line_t3_g3_g1

0x922c,	// (0x00083655) list_medium_line_t3_g3_g2_ParamLimits

0x922c,	// (0x00083655) list_medium_line_t3_g3_g2

0x7e1a,	// (0x00082243) list_medium_line_t3_g3_g3_ParamLimits

0x7e1a,	// (0x00082243) list_medium_line_t3_g3_g3

0x0002,

0xfcea,	// (0x0008a113) list_medium_line_t3_g3_g_ParamLimits

0xfcea,	// (0x0008a113) list_medium_line_t3_g3_g

0x1b8d,	// (0x0007bfb6) list_medium_line_t3_g3_t1_ParamLimits

0x1b8d,	// (0x0007bfb6) list_medium_line_t3_g3_t1

0x1ba6,	// (0x0007bfcf) list_medium_line_t3_g3_t2_ParamLimits

0x1ba6,	// (0x0007bfcf) list_medium_line_t3_g3_t2

0x1bbc,	// (0x0007bfe5) list_medium_line_t3_g3_t3_ParamLimits

0x1bbc,	// (0x0007bfe5) list_medium_line_t3_g3_t3

0x0002,

0xfcf6,	// (0x0008a11f) list_medium_line_t3_g3_t_ParamLimits

0xfcf6,	// (0x0008a11f) list_medium_line_t3_g3_t

0x9224,	// (0x0008364d) list_medium_line_right_iconx2_g1

0x91a0,	// (0x000835c9) list_medium_line_right_iconx2_g2

0x0001,

0xfcfd,	// (0x0008a126) list_medium_line_right_iconx2_g

0x9238,	// (0x00083661) list_medium_line_right_iconx2_t1

0x9224,	// (0x0008364d) list_medium_line_t2_right_iconx2_g1

0x91a0,	// (0x000835c9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcfd,	// (0x0008a126) list_medium_line_t2_right_iconx2_g

0x1bd2,	// (0x0007bffb) list_medium_line_t2_right_iconx2_t1

0x1be2,	// (0x0007c00b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd02,	// (0x0008a12b) list_medium_line_t2_right_iconx2_t

0x1bf0,	// (0x0007c019) list_medium_line_x4_t4_t1

0x1bfe,	// (0x0007c027) list_medium_line_x4_t4_t2

0x1c0e,	// (0x0007c037) list_medium_line_x4_t4_t3

0x1c1e,	// (0x0007c047) list_medium_line_x4_t4_t4

0x0003,

0xfd07,	// (0x0008a130) list_medium_line_x4_t4_t

0x9270,	// (0x00083699) tport_appsw_pane_ParamLimits

0x9270,	// (0x00083699) tport_appsw_pane

0x927e,	// (0x000836a7) tport_contact_pane_ParamLimits

0x927e,	// (0x000836a7) tport_contact_pane

0x928e,	// (0x000836b7) tport_listscroll_pane_ParamLimits

0x928e,	// (0x000836b7) tport_listscroll_pane

0x929e,	// (0x000836c7) cell_tport_appsw_pane_ParamLimits

0x929e,	// (0x000836c7) cell_tport_appsw_pane

0xcfb4,	// (0x000873dd) tport_appsw_pane_g1_ParamLimits

0xcfb4,	// (0x000873dd) tport_appsw_pane_g1

0xe86c,	// (0x00088c95) tport_contact_pane_g1

0xe875,	// (0x00088c9e) tport_contact_pane_t1

0xe883,	// (0x00088cac) tport_contact_pane_t2

0x0001,

0x0c89,	// (0x0007b0b2) tport_contact_pane_t

0xe891,	// (0x00088cba) list_tport_pane

0xe89a,	// (0x00088cc3) scroll_pane_cp_030

0x92d1,	// (0x000836fa) cell_tport_appsw_pane_g1

0x92e1,	// (0x0008370a) cell_tport_appsw_pane_t1

0x92ef,	// (0x00083718) grid_highlight_pane_cp019

0x92f7,	// (0x00083720) list_tport_double_graphic_pane_ParamLimits

0x92f7,	// (0x00083720) list_tport_double_graphic_pane

0xb4f7,	// (0x00085920) list_highlight_pane_cp023_ParamLimits

0xb4f7,	// (0x00085920) list_highlight_pane_cp023

0x9308,	// (0x00083731) list_tport_double_graphic_pane_g1_ParamLimits

0x9308,	// (0x00083731) list_tport_double_graphic_pane_g1

0x9315,	// (0x0008373e) list_tport_double_graphic_pane_t1_ParamLimits

0x9315,	// (0x0008373e) list_tport_double_graphic_pane_t1

0x932a,	// (0x00083753) list_tport_double_graphic_pane_t2_ParamLimits

0x932a,	// (0x00083753) list_tport_double_graphic_pane_t2

0x0001,

0xfd17,	// (0x0008a140) list_tport_double_graphic_pane_t_ParamLimits

0xfd17,	// (0x0008a140) list_tport_double_graphic_pane_t

0xa0cf,	// (0x000844f8) main_cale_note_pane

0x762c,	// (0x00081a55) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x762c,	// (0x00081a55) cell_vitu2_function_top_wide_pane_cp01

0x8dec,	// (0x00083215) wait_bar_pane_cp05_ParamLimits

0xb4f7,	// (0x00085920) listscroll_cmail_pane

0xe8a3,	// (0x00088ccc) list_cmail_pane

0x933c,	// (0x00083765) list_cmail_body_pane

0x9364,	// (0x0008378d) list_single_cmail_header_caption_pane

0x9390,	// (0x000837b9) list_single_cmail_header_detail_pane_ParamLimits

0x9390,	// (0x000837b9) list_single_cmail_header_detail_pane

0xe8b3,	// (0x00088cdc) list_single_cmail_header_caption_pane_t1

0x1c2e,	// (0x0007c057) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1c2e,	// (0x0007c057) list_single_cmail_header_detail_pane_g1

0x93c9,	// (0x000837f2) list_single_cmail_header_detail_pane_g2_ParamLimits

0x93c9,	// (0x000837f2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd1c,	// (0x0008a145) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd1c,	// (0x0008a145) list_single_cmail_header_detail_pane_g

0x1c44,	// (0x0007c06d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1c44,	// (0x0007c06d) list_single_cmail_header_detail_pane_t1

0x1ca4,	// (0x0007c0cd) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1ca4,	// (0x0007c0cd) list_single_cmail_header_editor_pane_bg

0xe358,	// (0x00088781) list_cmail_body_pane_g1

0xe8d7,	// (0x00088d00) list_cmail_body_pane_t1

0xd73d,	// (0x00087b66) list_single_cmail_header_editor_pane_bg_g1

0xac8e,	// (0x000850b7) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd74d,	// (0x00087b76) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd745,	// (0x00087b6e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd979,	// (0x00087da2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd76d,	// (0x00087b96) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd75d,	// (0x00087b86) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd765,	// (0x00087b8e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac6e,	// (0x00085097) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x93d5,	// (0x000837fe) calenote_gesture_pane_ParamLimits

0x93d5,	// (0x000837fe) calenote_gesture_pane

0x93ef,	// (0x00083818) calenote_window_pane_ParamLimits

0x93ef,	// (0x00083818) calenote_window_pane

0xe8e5,	// (0x00088d0e) popup_note_window_cp01

0x9407,	// (0x00083830) calenote_swipe_1_pane_ParamLimits

0x9407,	// (0x00083830) calenote_swipe_1_pane

0x9142,	// (0x0008356b) calenote_swipe_2_pane_ParamLimits

0x9142,	// (0x0008356b) calenote_swipe_2_pane

0xe6c5,	// (0x00088aee) calenote_swipe_1_pane_g1_ParamLimits

0xe6c5,	// (0x00088aee) calenote_swipe_1_pane_g1

0xe6d2,	// (0x00088afb) calenote_swipe_1_pane_g2_ParamLimits

0xe6d2,	// (0x00088afb) calenote_swipe_1_pane_g2

0x0001,

0x0bbe,	// (0x0007afe7) calenote_swipe_1_pane_g_ParamLimits

0x0bbe,	// (0x0007afe7) calenote_swipe_1_pane_g

0xe8f7,	// (0x00088d20) calenote_swipe_1_pane_t1_ParamLimits

0xe8f7,	// (0x00088d20) calenote_swipe_1_pane_t1

0xe6c5,	// (0x00088aee) calenote_swipe_2_pane_g1_ParamLimits

0xe6c5,	// (0x00088aee) calenote_swipe_2_pane_g1

0xe916,	// (0x00088d3f) calenote_swipe_2_pane_g2_ParamLimits

0xe916,	// (0x00088d3f) calenote_swipe_2_pane_g2

0x0001,

0x0ca6,	// (0x0007b0cf) calenote_swipe_2_pane_g_ParamLimits

0x0ca6,	// (0x0007b0cf) calenote_swipe_2_pane_g

0xe922,	// (0x00088d4b) calenote_swipe_2_pane_t1_ParamLimits

0xe922,	// (0x00088d4b) calenote_swipe_2_pane_t1

0xa0cf,	// (0x000844f8) main_mup_navstr_pane

0x637b,	// (0x000807a4) main_mup3_pane_t7_ParamLimits

0x637b,	// (0x000807a4) main_mup3_pane_t7

0x6d86,	// (0x000811af) main_mp4_pane_g6_ParamLimits

0x6d86,	// (0x000811af) main_mp4_pane_g6

0x70f8,	// (0x00081521) main_image3_pane_t4_ParamLimits

0x70f8,	// (0x00081521) main_image3_pane_t4

0x941a,	// (0x00083843) popup_navstr_preview_pane_ParamLimits

0x941a,	// (0x00083843) popup_navstr_preview_pane

0x9426,	// (0x0008384f) scroll_navstr_pane_ParamLimits

0x9426,	// (0x0008384f) scroll_navstr_pane

0xa0cf,	// (0x000844f8) bg_popup_preview_window_pane_cp04

0xe949,	// (0x00088d72) popup_navstr_preview_pane_t1

0x9432,	// (0x0008385b) scroll_navstr_pane_g1_ParamLimits

0x9432,	// (0x0008385b) scroll_navstr_pane_g1

0x943f,	// (0x00083868) scroll_navstr_pane_t1_ParamLimits

0x943f,	// (0x00083868) scroll_navstr_pane_t1

0xe8ee,	// (0x00088d17) bg_button_pane_cp014

0xe8ee,	// (0x00088d17) bg_button_pane_cp030

0x1630,	// (0x0007ba59) list_double_fisheye_pane_g4_ParamLimits

0x1630,	// (0x0007ba59) list_double_fisheye_pane_g4

0x909e,	// (0x000834c7) list_double_fisheye_pane_g5_ParamLimits

0x909e,	// (0x000834c7) list_double_fisheye_pane_g5

0xce29,	// (0x00087252) sp_fs_scroll_pane_cp03

0xe7e5,	// (0x00088c0e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7f1,	// (0x00088c1a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0bdb,	// (0x0007b004) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7fd,	// (0x00088c26) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8ab,	// (0x00088cd4) sp_fs_scroll_pane_cp02

0xa974,	// (0x00084d9d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa974,	// (0x00084d9d) popup_sp_fs_calendar_preview_list_single_pane

0xa0cf,	// (0x000844f8) main_cam6_pano_pane

0xb4f7,	// (0x00085920) main_mup3_pane_ParamLimits

0xa0cf,	// (0x000844f8) main_phacti_pane

0x8cc1,	// (0x000830ea) bg_button_pane_cp11

0x8cd9,	// (0x00083102) main_mobtv_info_pane_g2_ParamLimits

0x8cd9,	// (0x00083102) main_mobtv_info_pane_g2

0x0001,

0xfc17,	// (0x0008a040) main_mobtv_info_pane_g_ParamLimits

0xfc17,	// (0x0008a040) main_mobtv_info_pane_g

0x8e8b,	// (0x000832b4) sc_clock_pane_t5_ParamLimits

0x8e8b,	// (0x000832b4) sc_clock_pane_t5

0x8f2c,	// (0x00083355) main_radioblah_pane_g1_ParamLimits

0xe5f6,	// (0x00088a1f) main_radioblah_pane_t3_ParamLimits

0xe5f6,	// (0x00088a1f) main_radioblah_pane_t3

0xe60e,	// (0x00088a37) main_radioblah_pane_t4_ParamLimits

0xe60e,	// (0x00088a37) main_radioblah_pane_t4

0x8f4a,	// (0x00083373) main_radioblah_text_pane_ParamLimits

0x8f4a,	// (0x00083373) main_radioblah_text_pane

0x8f57,	// (0x00083380) main_radioblah_info_pane_g1_ParamLimits

0x8fec,	// (0x00083415) main_radioblah_info_pane_t4_ParamLimits

0x8fec,	// (0x00083415) main_radioblah_info_pane_t4

0xb4f7,	// (0x00085920) main_sp_fs_calendar_pane

0x9451,	// (0x0008387a) main_phacti_pane_g1

0x9459,	// (0x00083882) phacti_note_pane_ParamLimits

0x9459,	// (0x00083882) phacti_note_pane

0xe960,	// (0x00088d89) phacti_term_pane_ParamLimits

0xe960,	// (0x00088d89) phacti_term_pane

0xe975,	// (0x00088d9e) phacti_note_pane_t1_ParamLimits

0xe975,	// (0x00088d9e) phacti_note_pane_t1

0x1cbb,	// (0x0007c0e4) phacti_term_pane_g1

0x1cc3,	// (0x0007c0ec) phacti_term_pane_t1_ParamLimits

0x1cc3,	// (0x0007c0ec) phacti_term_pane_t1

0xe98c,	// (0x00088db5) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe994,	// (0x00088dbd) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0cb0,	// (0x0007b0d9) popup_sp_fs_calendar_preview_list_single_pane_g

0xe99c,	// (0x00088dc5) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe99c,	// (0x00088dc5) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9b2,	// (0x00088ddb) aid_popup_sp_fs_bg_corner_pane

0xccf5,	// (0x0008711e) popup_sp_fs_calendar_preview_bg_pane_g1

0xa0cf,	// (0x000844f8) popup_sp_fs_calendar_preview_bg_pane

0x946f,	// (0x00083898) popup_sp_fs_calendar_preview_list_pane

0xc8ed,	// (0x00086d16) bg_main_sp_fs_cale_pane_ParamLimits

0xc8ed,	// (0x00086d16) bg_main_sp_fs_cale_pane

0x1cf6,	// (0x0007c11f) listscroll_cale_mrui_pane_ParamLimits

0x1cf6,	// (0x0007c11f) listscroll_cale_mrui_pane

0x1d0b,	// (0x0007c134) listscroll_sp_fs_schedule_track_pane

0x1d14,	// (0x0007c13d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1d14,	// (0x0007c13d) main_sp_fs_ctrlbar_pane_cp01

0xe9ba,	// (0x00088de3) main_sp_fs_ribbon_pane

0x1d27,	// (0x0007c150) popup_sp_fs_cale_preview_window

0x94c4,	// (0x000838ed) list_single_sp_fs_schedule_track_pane_ParamLimits

0x94c4,	// (0x000838ed) list_single_sp_fs_schedule_track_pane

0xde40,	// (0x00088269) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xde40,	// (0x00088269) bg_sp_fs_highlight_list_pane_cp03

0x94e7,	// (0x00083910) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x94e7,	// (0x00083910) list_single_sp_fs_schedule_track_pane_g1

0x94f3,	// (0x0008391c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x94f3,	// (0x0008391c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2d,	// (0x0008a156) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2d,	// (0x0008a156) list_single_sp_fs_schedule_track_pane_g

0x94ff,	// (0x00083928) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x94ff,	// (0x00083928) list_single_sp_fs_schedule_track_pane_t1

0x9517,	// (0x00083940) sp_fs_schedule_track_pane_ParamLimits

0x9517,	// (0x00083940) sp_fs_schedule_track_pane

0xe9c2,	// (0x00088deb) sp_fs_schedule_track_pane_g1

0xe9ca,	// (0x00088df3) sp_fs_schedule_track_pane_g2

0xe9d2,	// (0x00088dfb) sp_fs_schedule_track_pane_g3

0xe9da,	// (0x00088e03) sp_fs_schedule_track_pane_g4

0xe9e2,	// (0x00088e0b) sp_fs_schedule_track_pane_g5

0x0004,

0x0cba,	// (0x0007b0e3) sp_fs_schedule_track_pane_g

0xd73d,	// (0x00087b66) bg_sp_fs_schedule_viewer_highlight_g1

0xac8e,	// (0x000850b7) bg_sp_fs_schedule_viewer_highlight_g2

0xd745,	// (0x00087b6e) bg_sp_fs_schedule_viewer_highlight_g3

0xd74d,	// (0x00087b76) bg_sp_fs_schedule_viewer_highlight_g4

0xd979,	// (0x00087da2) bg_sp_fs_schedule_viewer_highlight_g5

0xd75d,	// (0x00087b86) bg_sp_fs_schedule_viewer_highlight_g6

0xd765,	// (0x00087b8e) bg_sp_fs_schedule_viewer_highlight_g7

0xd76d,	// (0x00087b96) bg_sp_fs_schedule_viewer_highlight_g8

0xac6e,	// (0x00085097) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd32,	// (0x0008a15b) bg_sp_fs_schedule_viewer_highlight_g

0xa0cf,	// (0x000844f8) bg_main_sp_fs_ribbon_pane

0x9527,	// (0x00083950) main_sp_fs_ribbon_pane_g1

0xe9ea,	// (0x00088e13) main_sp_fs_ribbon_pane_t1

0x9530,	// (0x00083959) main_sp_fs_ribbon_pane_t2

0xe9f9,	// (0x00088e22) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd45,	// (0x0008a16e) main_sp_fs_ribbon_pane_t

0xea08,	// (0x00088e31) main_sp_fs_ribbon_scheduler_pane

0xea10,	// (0x00088e39) bg_main_sp_fs_ribbon_pane_g1

0xea19,	// (0x00088e42) bg_main_sp_fs_ribbon_pane_g2

0xea22,	// (0x00088e4b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0cdf,	// (0x0007b108) bg_main_sp_fs_ribbon_pane_g

0xea2a,	// (0x00088e53) main_sp_fs_ribbon_scheduler_pane_g1

0xea33,	// (0x00088e5c) main_sp_fs_ribbon_scheduler_pane_g2

0xea3c,	// (0x00088e65) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0ce6,	// (0x0007b10f) main_sp_fs_ribbon_scheduler_pane_g

0xea45,	// (0x00088e6e) list_cale_mrui_pane

0x953f,	// (0x00083968) sp_fs_scroll_pane_cp07_ParamLimits

0x953f,	// (0x00083968) sp_fs_scroll_pane_cp07

0x955b,	// (0x00083984) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x955b,	// (0x00083984) bg_sp_fs_schedule_viewer_highlight

0xea52,	// (0x00088e7b) list_single_sp_fs_schedule_track_pane_cp01

0xea5a,	// (0x00088e83) list_sp_fs_schedule_track_pane

0xea62,	// (0x00088e8b) sp_fs_scroll_pane_cp06_ParamLimits

0xea62,	// (0x00088e8b) sp_fs_scroll_pane_cp06

0xccf5,	// (0x0008711e) bgmain_sp_fs_calendar_pane_g1

0x1d39,	// (0x0007c162) list_single_cale_mrui_pane_ParamLimits

0x1d39,	// (0x0007c162) list_single_cale_mrui_pane

0x1d67,	// (0x0007c190) list_single_cale_mrui_row_pane_ParamLimits

0x1d67,	// (0x0007c190) list_single_cale_mrui_row_pane

0x1d74,	// (0x0007c19d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1d74,	// (0x0007c19d) list_single_cale_mrui_row_pane_g1

0x1dac,	// (0x0007c1d5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1dac,	// (0x0007c1d5) list_single_cale_mrui_row_pane_t1

0x1dbe,	// (0x0007c1e7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1dbe,	// (0x0007c1e7) list_single_cale_mrui_row_pane_t2

0x1e24,	// (0x0007c24d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1e24,	// (0x0007c24d) list_single_cale_mrui_row_pane_t3

0x1e53,	// (0x0007c27c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1e53,	// (0x0007c27c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd53,	// (0x0008a17c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd53,	// (0x0008a17c) list_single_cale_mrui_row_pane_t

0x1e82,	// (0x0007c2ab) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1e82,	// (0x0007c2ab) list_single_cmail_header_editor_pane_bg_cp01

0x1ea2,	// (0x0007c2cb) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1ea2,	// (0x0007c2cb) list_single_cmail_header_editor_pane_bg_cp02

0x9568,	// (0x00083991) main_radioblah_text_pane_t1_ParamLimits

0x9568,	// (0x00083991) main_radioblah_text_pane_t1

0xea81,	// (0x00088eaa) cam6_indi_pane_cp01

0xea89,	// (0x00088eb2) cam6_mode_pane_cp01

0xea91,	// (0x00088eba) cam6_pano_pane

0xea9a,	// (0x00088ec3) cam6_zoom_pane_cp01

0xeaa2,	// (0x00088ecb) cam6_pano_image_pane

0xeaad,	// (0x00088ed6) cam6_pano_pane_g1

0xe358,	// (0x00088781) cam6_pano_pane_g2

0xeab6,	// (0x00088edf) cam6_pano_pane_g3

0xeabf,	// (0x00088ee8) cam6_pano_pane_g4

0xd2ac,	// (0x000876d5) cam6_pano_pane_g5

0xeac8,	// (0x00088ef1) cam6_pano_pane_g6

0xead2,	// (0x00088efb) cam6_pano_pane_g7

0xeada,	// (0x00088f03) cam6_pano_pane_g8

0xeae3,	// (0x00088f0c) cam6_pano_pane_g9

0x0008,

0xfd5c,	// (0x0008a185) cam6_pano_pane_g

0xa0cf,	// (0x000844f8) main_browser_tag_pane

0xe941,	// (0x00088d6a) grid_navstr_albumart_pane

0xeaee,	// (0x00088f17) cell_navstr_albumart_pane_ParamLimits

0xeaee,	// (0x00088f17) cell_navstr_albumart_pane

0xeb0e,	// (0x00088f37) cell_navstr_albumart_pane_g1

0xc6be,	// (0x00086ae7) cell_navstr_albumart_pane_g2

0xc6ce,	// (0x00086af7) cell_navstr_albumart_pane_g3

0xc6c6,	// (0x00086aef) cell_navstr_albumart_pane_g4

0x0003,

0xfd6f,	// (0x0008a198) cell_navstr_albumart_pane_g

0x9583,	// (0x000839ac) bt_list_pane_ParamLimits

0x9583,	// (0x000839ac) bt_list_pane

0x95a4,	// (0x000839cd) bt_list_pane_t1

0x95b3,	// (0x000839dc) bt_list_pane_t2

0x0001,

0xfd78,	// (0x0008a1a1) bt_list_pane_t

0xa0cf,	// (0x000844f8) main_cale_prevew_pane

0x95c2,	// (0x000839eb) popup_cale_preview_window_ParamLimits

0x95c2,	// (0x000839eb) popup_cale_preview_window

0xb4f7,	// (0x00085920) bg_popup_preview_window_pane_cp05_ParamLimits

0xb4f7,	// (0x00085920) bg_popup_preview_window_pane_cp05

0xeb16,	// (0x00088f3f) list_cale_preview_pane_ParamLimits

0xeb16,	// (0x00088f3f) list_cale_preview_pane

0x95db,	// (0x00083a04) list_double_cale_preview_pane_ParamLimits

0x95db,	// (0x00083a04) list_double_cale_preview_pane

0x95ed,	// (0x00083a16) list_single_cale_preview_pane_ParamLimits

0x95ed,	// (0x00083a16) list_single_cale_preview_pane

0x9601,	// (0x00083a2a) list_single_cale_preview_pane_g1

0x9609,	// (0x00083a32) list_single_cale_preview_pane_t1_ParamLimits

0x9609,	// (0x00083a32) list_single_cale_preview_pane_t1

0x961e,	// (0x00083a47) list_double_cale_preview_pane_g1

0x9626,	// (0x00083a4f) list_double_cale_preview_pane_t1_ParamLimits

0x9626,	// (0x00083a4f) list_double_cale_preview_pane_t1

0x963b,	// (0x00083a64) list_double_cale_preview_pane_t2_ParamLimits

0x963b,	// (0x00083a64) list_double_cale_preview_pane_t2

0x0001,

0xfd7d,	// (0x0008a1a6) list_double_cale_preview_pane_t_ParamLimits

0xfd7d,	// (0x0008a1a6) list_double_cale_preview_pane_t

0xa0cf,	// (0x000844f8) main_ezdial_pane

0xb4f7,	// (0x00085920) main_sp_fs_email_pane_ParamLimits

0x91a8,	// (0x000835d1) cmail_ddmenu_btn01_pane_ParamLimits

0x91a8,	// (0x000835d1) cmail_ddmenu_btn01_pane

0x91bd,	// (0x000835e6) cmail_ddmenu_btn02_pane_ParamLimits

0x91bd,	// (0x000835e6) cmail_ddmenu_btn02_pane

0x91d5,	// (0x000835fe) cmail_ddmenu_btn03_pane_ParamLimits

0x91d5,	// (0x000835fe) cmail_ddmenu_btn03_pane

0x91fd,	// (0x00083626) main_sp_fs_ctrlbar_pane_ParamLimits

0x9213,	// (0x0008363c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x933c,	// (0x00083765) list_cmail_body_pane_ParamLimits

0xe8c1,	// (0x00088cea) bg_button_pane_cp12

0xe8ca,	// (0x00088cf3) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8ca,	// (0x00088cf3) list_single_cmail_header_detail_pane_g3

0x1c80,	// (0x0007c0a9) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1c80,	// (0x0007c0a9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd23,	// (0x0008a14c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd23,	// (0x0008a14c) list_single_cmail_header_detail_pane_t

0x1cd8,	// (0x0007c101) phacti_term_pane_t2_ParamLimits

0x1cd8,	// (0x0007c101) phacti_term_pane_t2

0x0001,

0xfd28,	// (0x0008a151) phacti_term_pane_t_ParamLimits

0xfd28,	// (0x0008a151) phacti_term_pane_t

0xeb22,	// (0x00088f4b) aid_size_list_single_double

0x9653,	// (0x00083a7c) popup_ezdial_listscroll_window

0x9677,	// (0x00083aa0) popup_number_entry_window_cp01

0xaa35,	// (0x00084e5e) bg_popup_call_pane_cp09

0xeb2e,	// (0x00088f57) ezdial_list_pane

0xeb36,	// (0x00088f5f) scroll_pane_cp23

0xcada,	// (0x00086f03) bg_button_pane_cp028_ParamLimits

0xcada,	// (0x00086f03) bg_button_pane_cp028

0x9685,	// (0x00083aae) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9685,	// (0x00083aae) cmail_ddmenu_btn01_pane_g1

0x9695,	// (0x00083abe) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9695,	// (0x00083abe) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd82,	// (0x0008a1ab) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd82,	// (0x0008a1ab) cmail_ddmenu_btn01_pane_g

0xeb3e,	// (0x00088f67) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3e,	// (0x00088f67) cmail_ddmenu_btn01_pane_t1

0xc8ed,	// (0x00086d16) bg_button_pane_cp029_ParamLimits

0xc8ed,	// (0x00086d16) bg_button_pane_cp029

0x9695,	// (0x00083abe) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9695,	// (0x00083abe) cmail_ddmenu_btn02_pane_g1

0x96ae,	// (0x00083ad7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x96ae,	// (0x00083ad7) cmail_ddmenu_btn02_pane_t1

0xde40,	// (0x00088269) bg_button_pane_cp031_ParamLimits

0xde40,	// (0x00088269) bg_button_pane_cp031

0x9695,	// (0x00083abe) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9695,	// (0x00083abe) cmail_ddmenu_btn03_pane_g1

0x96ae,	// (0x00083ad7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x96ae,	// (0x00083ad7) cmail_ddmenu_btn03_pane_t1

0x6fa3,	// (0x000813cc) cell_dialer2_keypad_pane_t1_ParamLimits

0x6fbd,	// (0x000813e6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6fbd,	// (0x000813e6) cell_dialer2_keypad_pane_t1_copy1

0x8b02,	// (0x00082f2b) ncimui_group_button_pane

0xb4f7,	// (0x00085920) main_sp_fs_calendar_pane_ParamLimits

0x9364,	// (0x0008378d) list_single_cmail_header_caption_pane_ParamLimits

0x1ced,	// (0x0007c116) aid_recal_txt_sm_pane

0xa0cf,	// (0x000844f8) mian_recal_day_pane

0x1d27,	// (0x0007c150) popup_sp_fs_cale_preview_window_ParamLimits

0xeb53,	// (0x00088f7c) list_recal_day_pane

0x1ed9,	// (0x0007c302) list_single_recal_day_pane_ParamLimits

0x1ed9,	// (0x0007c302) list_single_recal_day_pane

0xeb7a,	// (0x00088fa3) list_single_recal_day_pane_g1_ParamLimits

0xeb7a,	// (0x00088fa3) list_single_recal_day_pane_g1

0x1eeb,	// (0x0007c314) list_single_recal_day_pane_g2_ParamLimits

0x1eeb,	// (0x0007c314) list_single_recal_day_pane_g2

0x1ef7,	// (0x0007c320) list_single_recal_day_pane_g3_ParamLimits

0x1ef7,	// (0x0007c320) list_single_recal_day_pane_g3

0x1f03,	// (0x0007c32c) list_single_recal_day_pane_g4_ParamLimits

0x1f03,	// (0x0007c32c) list_single_recal_day_pane_g4

0x1f11,	// (0x0007c33a) list_single_recal_day_pane_g5_ParamLimits

0x1f11,	// (0x0007c33a) list_single_recal_day_pane_g5

0x1f27,	// (0x0007c350) list_single_recal_day_pane_g6_ParamLimits

0x1f27,	// (0x0007c350) list_single_recal_day_pane_g6

0x0004,

0xfd91,	// (0x0008a1ba) list_single_recal_day_pane_g_ParamLimits

0xfd91,	// (0x0008a1ba) list_single_recal_day_pane_g

0x1f3b,	// (0x0007c364) list_single_recal_day_pane_t1

0x1f4d,	// (0x0007c376) list_single_recal_day_pane_t2

0x0001,

0xfd9c,	// (0x0008a1c5) list_single_recal_day_pane_t

0x96d2,	// (0x00083afb) ncimui_query_button_pane_ParamLimits

0x96d2,	// (0x00083afb) ncimui_query_button_pane

0x96e2,	// (0x00083b0b) ncimui_query_button_pane_t1_ParamLimits

0x96e2,	// (0x00083b0b) ncimui_query_button_pane_t1

0xeb86,	// (0x00088faf) ncimui_query_button_pane_t2_ParamLimits

0xeb86,	// (0x00088faf) ncimui_query_button_pane_t2

0x0001,

0xfda1,	// (0x0008a1ca) ncimui_query_button_pane_t_ParamLimits

0xfda1,	// (0x0008a1ca) ncimui_query_button_pane_t

0x96f5,	// (0x00083b1e) query_button_pane_ParamLimits

0x96f5,	// (0x00083b1e) query_button_pane

0xa0cf,	// (0x000844f8) bg_button_pane_cp0028

0xeb99,	// (0x00088fc2) query_button_pane_t1

0x5337,	// (0x0007f760) main_tport_pane_ParamLimits

0x9246,	// (0x0008366f) bg_popup_window_pane_cp01_ParamLimits

0x9246,	// (0x0008366f) bg_popup_window_pane_cp01

0x9254,	// (0x0008367d) heading_pane_cp08_ParamLimits

0x9254,	// (0x0008367d) heading_pane_cp08

0x9262,	// (0x0008368b) heading_pane_cp07_ParamLimits

0x9262,	// (0x0008368b) heading_pane_cp07

0x92d1,	// (0x000836fa) cell_tport_appsw_pane_g2

0x0002,

0xfd10,	// (0x0008a139) cell_tport_appsw_pane_g

0x1048,	// (0x0007b471) input_candi_list_open_g1

0xae6f,	// (0x00085298) list_cale_time_pane_g6_ParamLimits

0xae6f,	// (0x00085298) list_cale_time_pane_g6

0x5dbe,	// (0x000801e7) aid_size_touch_calib_1_ParamLimits

0x5dbe,	// (0x000801e7) aid_size_touch_calib_1

0x5dca,	// (0x000801f3) aid_size_touch_calib_2_ParamLimits

0x5dca,	// (0x000801f3) aid_size_touch_calib_2

0x5dd8,	// (0x00080201) aid_size_touch_calib_3_ParamLimits

0x5dd8,	// (0x00080201) aid_size_touch_calib_3

0x5de8,	// (0x00080211) aid_size_touch_calib_4_ParamLimits

0x5de8,	// (0x00080211) aid_size_touch_calib_4

0x5df6,	// (0x0008021f) main_touch_calib_button_group_pane_ParamLimits

0x5df6,	// (0x0008021f) main_touch_calib_button_group_pane

0x5e04,	// (0x0008022d) main_touch_calib_pane_g1_ParamLimits

0x5e10,	// (0x00080239) main_touch_calib_pane_g2_ParamLimits

0x5e1c,	// (0x00080245) main_touch_calib_pane_g3_ParamLimits

0x5e28,	// (0x00080251) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x00089b8d) main_touch_calib_pane_g_ParamLimits

0x5e34,	// (0x0008025d) main_touch_calib_pane_t1_ParamLimits

0x5e4d,	// (0x00080276) main_touch_calib_pane_t2_ParamLimits

0x5e66,	// (0x0008028f) main_touch_calib_pane_t3_ParamLimits

0x5e7c,	// (0x000802a5) main_touch_calib_pane_t4_ParamLimits

0x5e92,	// (0x000802bb) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x00089b96) main_touch_calib_pane_t_ParamLimits

0xd04f,	// (0x00087478) list_single_fp_cale_pane_g3_ParamLimits

0xd04f,	// (0x00087478) list_single_fp_cale_pane_g3

0xb4f7,	// (0x00085920) bg_button_pane_cp012_ParamLimits

0xb4f7,	// (0x00085920) bg_vkb2_func_pane_cp03_ParamLimits

0x7d9a,	// (0x000821c3) cell_vitu2_function_top_pane_g1_ParamLimits

0xb4f7,	// (0x00085920) bg_vkb2_func_pane_cp04_ParamLimits

0x8a8a,	// (0x00082eb3) main_ncimui_button_group_pane_ParamLimits

0x8a8a,	// (0x00082eb3) main_ncimui_button_group_pane

0x8af0,	// (0x00082f19) main_ncimui_pane_t3_ParamLimits

0x8af0,	// (0x00082f19) main_ncimui_pane_t3

0xe957,	// (0x00088d80) phacti_button_group_pane

0xeb22,	// (0x00088f4b) aid_size_list_single_double_ParamLimits

0x9653,	// (0x00083a7c) popup_ezdial_listscroll_window_ParamLimits

0x9677,	// (0x00083aa0) popup_number_entry_window_cp01_ParamLimits

0x9702,	// (0x00083b2b) phacti_button_pane_ParamLimits

0x9702,	// (0x00083b2b) phacti_button_pane

0xa0cf,	// (0x000844f8) bg_button_pane_cp14

0xeba7,	// (0x00088fd0) phacti_button_pane_t1

0x9713,	// (0x00083b3c) main_touch_calib_button_pane_ParamLimits

0x9713,	// (0x00083b3c) main_touch_calib_button_pane

0xa85e,	// (0x00084c87) bg_button_pane_cp18_ParamLimits

0xa85e,	// (0x00084c87) bg_button_pane_cp18

0xebb5,	// (0x00088fde) main_touch_calib_button_pane_t1_ParamLimits

0xebb5,	// (0x00088fde) main_touch_calib_button_pane_t1

0xebcb,	// (0x00088ff4) main_touch_calib_button_pane_t2_ParamLimits

0xebcb,	// (0x00088ff4) main_touch_calib_button_pane_t2

0x0001,

0xfda6,	// (0x0008a1cf) main_touch_calib_button_pane_t_ParamLimits

0xfda6,	// (0x0008a1cf) main_touch_calib_button_pane_t

0xa0cf,	// (0x000844f8) cell_ncimui_button_pane

0xa0cf,	// (0x000844f8) bg_button_pane_cp032

0xebe9,	// (0x00089012) cell_ncimui_button_pane_t1

0x7019,	// (0x00081442) image3_infobar_pane_ParamLimits

0x7019,	// (0x00081442) image3_infobar_pane

0x8ead,	// (0x000832d6) fs_bigclock_status_pane_ParamLimits

0x8ead,	// (0x000832d6) fs_bigclock_status_pane

0x8eba,	// (0x000832e3) main_fs_bigclock_clock_pane_ParamLimits

0x8eba,	// (0x000832e3) main_fs_bigclock_clock_pane

0x8ece,	// (0x000832f7) main_fs_bigclock_indi_pane_ParamLimits

0x8ece,	// (0x000832f7) main_fs_bigclock_indi_pane

0x8ef6,	// (0x0008331f) main_fs_bigclock_swipe_pane_ParamLimits

0x8ef6,	// (0x0008331f) main_fs_bigclock_swipe_pane

0xa0cf,	// (0x000844f8) main_fs_clock_dumped_data

0xe465,	// (0x0008888e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe465,	// (0x0008888e) list_single_fs_bigclock_indicator_pane_g1

0xe481,	// (0x000888aa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe481,	// (0x000888aa) list_single_fs_bigclock_indicator_pane_g2

0xe49b,	// (0x000888c4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe49b,	// (0x000888c4) list_single_fs_bigclock_indicator_pane_g3

0xe4b5,	// (0x000888de) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4b5,	// (0x000888de) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b6f,	// (0x0007af98) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b6f,	// (0x0007af98) list_single_fs_bigclock_indicator_pane_g

0xe4e0,	// (0x00088909) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4e0,	// (0x00088909) list_single_fs_bigclock_indicator_pane_t1

0xe508,	// (0x00088931) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe508,	// (0x00088931) list_single_fs_bigclock_indicator_pane_t2

0xe530,	// (0x00088959) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe530,	// (0x00088959) list_single_fs_bigclock_indicator_pane_t3

0xe558,	// (0x00088981) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe558,	// (0x00088981) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b7a,	// (0x0007afa3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b7a,	// (0x0007afa3) list_single_fs_bigclock_indicator_pane_t

0xebf7,	// (0x00089020) image3_infobar_fav_pane_ParamLimits

0xebf7,	// (0x00089020) image3_infobar_fav_pane

0xec07,	// (0x00089030) image3_infobar_loc_pane_ParamLimits

0xec07,	// (0x00089030) image3_infobar_loc_pane

0xec1b,	// (0x00089044) image3_infobar_time_pane_ParamLimits

0xec1b,	// (0x00089044) image3_infobar_time_pane

0xccf5,	// (0x0008711e) image3_infobar_time_pane_g1

0xec2b,	// (0x00089054) image3_infobar_time_pane_t1

0xccf5,	// (0x0008711e) image3_infobar_loc_pane_g1

0xec39,	// (0x00089062) image3_infobar_loc_pane_g2

0x0001,

0xfdab,	// (0x0008a1d4) image3_infobar_loc_pane_g

0xec41,	// (0x0008906a) image3_infobar_loc_pane_t1

0xccf5,	// (0x0008711e) image3_infobar_fav_pane_g1

0xec4f,	// (0x00089078) image3_infobar_fav_pane_g2

0x0001,

0xfdb0,	// (0x0008a1d9) image3_infobar_fav_pane_g

0xec57,	// (0x00089080) fs_bigclock_status_battery_pane

0xec60,	// (0x00089089) fs_bigclock_status_signal_pane

0xec69,	// (0x00089092) fs_bigclock_status_title_pane

0xec72,	// (0x0008909b) fs_bigclock_status_signal_pane_g1

0xec7b,	// (0x000890a4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdb5,	// (0x0008a1de) fs_bigclock_status_signal_pane_g

0xec83,	// (0x000890ac) fs_bigclock_status_battery_pane_g1

0xec8c,	// (0x000890b5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdba,	// (0x0008a1e3) fs_bigclock_status_battery_pane_g

0xec94,	// (0x000890bd) fs_bigclock_status_title_pane_t1

0x9723,	// (0x00083b4c) main_fs_bigclock_clock_pane_g1

0x9723,	// (0x00083b4c) main_fs_bigclock_clock_pane_g2

0x9730,	// (0x00083b59) main_fs_bigclock_clock_pane_g3

0x9730,	// (0x00083b59) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdbf,	// (0x0008a1e8) main_fs_bigclock_clock_pane_g

0x973c,	// (0x00083b65) main_fs_bigclock_clock_pane_t1

0x974f,	// (0x00083b78) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdc8,	// (0x0008a1f1) main_fs_bigclock_clock_pane_t

0xeca2,	// (0x000890cb) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeca2,	// (0x000890cb) list_single_fs_bigclock_indicator_pane

0xecb3,	// (0x000890dc) list_single_fs_bigclock_pane_ParamLimits

0xecb3,	// (0x000890dc) list_single_fs_bigclock_pane

0xecd9,	// (0x00089102) main_fs_bigclock_indicator_pane_t1

0xece8,	// (0x00089111) list_single_fs_bigclock_pane_g1

0xecf0,	// (0x00089119) list_single_fs_bigclock_pane_t1

0xccf5,	// (0x0008711e) main_fs_bigclock_swipe_pane_g1

0xed33,	// (0x0008915c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdd9,	// (0x0008a202) main_fs_bigclock_swipe_pane_g

0xed3b,	// (0x00089164) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed3b,	// (0x00089164) main_fs_bigclock_swipe_pane_t1

0x43aa,	// (0x0007e7d3) call_type_pane_ParamLimits

0xa0cf,	// (0x000844f8) main_btmg_pane

0x1da0,	// (0x0007c1c9) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1da0,	// (0x0007c1c9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd4c,	// (0x0008a175) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd4c,	// (0x0008a175) list_single_cale_mrui_row_pane_g

0x1ec8,	// (0x0007c2f1) list_recal_vselct_arw_lo_pane

0xeb72,	// (0x00088f9b) list_recal_vselct_arw_up_pane

0x1ed0,	// (0x0007c2f9) list_recal_vselct_pane

0x97a6,	// (0x00083bcf) btmg_button_pane

0x97b2,	// (0x00083bdb) main_btmg_pane_g1

0xa0cf,	// (0x000844f8) bg_button_pane_cp044

0xed58,	// (0x00089181) btmg_button_pane_t1

0xc8d9,	// (0x00086d02) aid_listscroll_gen

0xb4f7,	// (0x00085920) main_cntbar_detail_pane

0xe8a3,	// (0x00088ccc) list_cmail_folder_pane

0xce29,	// (0x00087252) sp_fs_scroll_pane_cp03_ParamLimits

0x1f5f,	// (0x0007c388) list_single_fs_dyc_pane_cp01_ParamLimits

0x1f5f,	// (0x0007c388) list_single_fs_dyc_pane_cp01

0xed66,	// (0x0008918f) aid_size_cmail_indent

0x1f87,	// (0x0007c3b0) list_single_dyc_row_pane_cp01

0x97da,	// (0x00083c03) cntbar_detail_list_pane_ParamLimits

0x97da,	// (0x00083c03) cntbar_detail_list_pane

0x9814,	// (0x00083c3d) main_cntbar_detail_cont_pane_ParamLimits

0x9814,	// (0x00083c3d) main_cntbar_detail_cont_pane

0x439e,	// (0x0007e7c7) scroll_pane_cp032_ParamLimits

0x439e,	// (0x0007e7c7) scroll_pane_cp032

0x9820,	// (0x00083c49) cntbar_detail_list_event_pane_ParamLimits

0x9820,	// (0x00083c49) cntbar_detail_list_event_pane

0x97e6,	// (0x00083c0f) cntbar_detail_list_shct_pane

0xacfa,	// (0x00085123) aid_list_gen

0xed6f,	// (0x00089198) aid_scroll

0xed78,	// (0x000891a1) aid_size_touch_scroll_bar

0x14ef,	// (0x0007b918) aid_list_double

0x9834,	// (0x00083c5d) aid_list_single

0x8349,	// (0x00082772) aid_list_single_lg

0x1f90,	// (0x0007c3b9) aid_list_z_g_a_sm

0x983d,	// (0x00083c66) aid_list_z_g_d

0x1f98,	// (0x0007c3c1) aid_txt_z_prm

0x1fa6,	// (0x0007c3cf) aid_txt_z_prm_cp01

0x1fb4,	// (0x0007c3dd) aid_txt_z_sec

0x9845,	// (0x00083c6e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9845,	// (0x00083c6e) main_cntbar_detail_cont_pane_g1

0x9852,	// (0x00083c7b) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9852,	// (0x00083c7b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdde,	// (0x0008a207) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdde,	// (0x0008a207) main_cntbar_detail_cont_pane_g

0xed81,	// (0x000891aa) main_cntbar_detail_cont_pane_t1

0xed8f,	// (0x000891b8) main_cntbar_detail_cont_pane_t2

0xed9d,	// (0x000891c6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfde3,	// (0x0008a20c) main_cntbar_detail_cont_pane_t

0x985e,	// (0x00083c87) cell_cntbar_detail_list_shct_pane_ParamLimits

0x985e,	// (0x00083c87) cell_cntbar_detail_list_shct_pane

0xedab,	// (0x000891d4) cntbar_detail_list_shct_pane_g1

0xedb4,	// (0x000891dd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdea,	// (0x0008a213) cntbar_detail_list_shct_pane_g

0x9872,	// (0x00083c9b) cntbar_detail_list_event_pane_g1_ParamLimits

0x9872,	// (0x00083c9b) cntbar_detail_list_event_pane_g1

0x987e,	// (0x00083ca7) cntbar_detail_list_event_pane_g2_ParamLimits

0x987e,	// (0x00083ca7) cntbar_detail_list_event_pane_g2

0x0005,

0xfdef,	// (0x0008a218) cntbar_detail_list_event_pane_g_ParamLimits

0xfdef,	// (0x0008a218) cntbar_detail_list_event_pane_g

0x98ea,	// (0x00083d13) cntbar_detail_list_event_pane_t1_ParamLimits

0x98ea,	// (0x00083d13) cntbar_detail_list_event_pane_t1

0x98ff,	// (0x00083d28) cntbar_detail_list_event_pane_t2_ParamLimits

0x98ff,	// (0x00083d28) cntbar_detail_list_event_pane_t2

0x0002,

0xfdfc,	// (0x0008a225) cntbar_detail_list_event_pane_t_ParamLimits

0xfdfc,	// (0x0008a225) cntbar_detail_list_event_pane_t

0xccf5,	// (0x0008711e) cell_cntbar_detail_list_shct_pane_g1

0xb446,	// (0x0008586f) navi_pane_mv_g3

0xb4f7,	// (0x00085920) main_cntbar_detail_pane_ParamLimits

0xa0cf,	// (0x000844f8) main_notif_wgt_pane

0x6ccd,	// (0x000810f6) aid_tch_main_mp4_pane_g4

0x6f02,	// (0x0008132b) popup_slider_window_cp02

0x1ebe,	// (0x0007c2e7) list_recal_day_event_pane

0x97ba,	// (0x00083be3) cntbar_detail_btn_pane_ParamLimits

0x97ba,	// (0x00083be3) cntbar_detail_btn_pane

0x97ca,	// (0x00083bf3) cntbar_detail_btn_pane_cp01_ParamLimits

0x97ca,	// (0x00083bf3) cntbar_detail_btn_pane_cp01

0x97e6,	// (0x00083c0f) cntbar_detail_list_shct_pane_ParamLimits

0x97f2,	// (0x00083c1b) cntbar_detail_pane_g1_ParamLimits

0x97f2,	// (0x00083c1b) cntbar_detail_pane_g1

0x97fe,	// (0x00083c27) cntbar_detail_pane_t1_ParamLimits

0x97fe,	// (0x00083c27) cntbar_detail_pane_t1

0x988a,	// (0x00083cb3) cntbar_detail_list_event_pane_g3_ParamLimits

0x988a,	// (0x00083cb3) cntbar_detail_list_event_pane_g3

0x98a2,	// (0x00083ccb) cntbar_detail_list_event_pane_g4_ParamLimits

0x98a2,	// (0x00083ccb) cntbar_detail_list_event_pane_g4

0x98ba,	// (0x00083ce3) cntbar_detail_list_event_pane_g5_ParamLimits

0x98ba,	// (0x00083ce3) cntbar_detail_list_event_pane_g5

0x98d2,	// (0x00083cfb) cntbar_detail_list_event_pane_g6_ParamLimits

0x98d2,	// (0x00083cfb) cntbar_detail_list_event_pane_g6

0x9914,	// (0x00083d3d) cntbar_detail_list_event_pane_t3_ParamLimits

0x9914,	// (0x00083d3d) cntbar_detail_list_event_pane_t3

0x9926,	// (0x00083d4f) popup_notif_wgt_window_ParamLimits

0x9926,	// (0x00083d4f) popup_notif_wgt_window

0x9936,	// (0x00083d5f) popup_submenu_window_cp01_ParamLimits

0x9936,	// (0x00083d5f) popup_submenu_window_cp01

0xaa35,	// (0x00084e5e) bg_popup_window_pane_cp10

0xedbd,	// (0x000891e6) listscroll_notif_wgt_pane

0xedcf,	// (0x000891f8) list_notif_wgt_window

0xedd8,	// (0x00089201) scroll_pane_cp033

0x9944,	// (0x00083d6d) list_notif_wgt_row_pane_ParamLimits

0x9944,	// (0x00083d6d) list_notif_wgt_row_pane

0xede1,	// (0x0008920a) aid_size_list_notif_wgt_del

0xedee,	// (0x00089217) list_notif_wgt_row_pane_g1

0xedfa,	// (0x00089223) list_notif_wgt_row_pane_g2

0xee09,	// (0x00089232) list_notif_wgt_row_pane_g3

0x0002,

0xfe03,	// (0x0008a22c) list_notif_wgt_row_pane_g

0xee16,	// (0x0008923f) list_notif_wgt_row_pane_t1

0xee2c,	// (0x00089255) list_notif_wgt_row_pane_t2

0xee3e,	// (0x00089267) list_notif_wgt_row_pane_t3

0x0002,

0xfe0a,	// (0x0008a233) list_notif_wgt_row_pane_t

0xd981,	// (0x00087daa) list_recal_day_event_pane_g1

0xee50,	// (0x00089279) list_recal_day_event_pane_t1

0xa0cf,	// (0x000844f8) bg_button_pane_cp045

0x9956,	// (0x00083d7f) cntbar_detail_btn_pane_t1

0xc8ed,	// (0x00086d16) main_callh_pane_ParamLimits

0xc8ed,	// (0x00086d16) main_callh_pane

0xa0cf,	// (0x000844f8) main_coverflow0_pane

0xa0cf,	// (0x000844f8) main_wgtman_pane

0x8f0e,	// (0x00083337) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8f0e,	// (0x00083337) main_fs_bigclock_unlock_btn_pane

0x92c9,	// (0x000836f2) bg_button_pane_cp16

0x92d9,	// (0x00083702) cell_tport_appsw_pane_g3

0x9964,	// (0x00083d8d) cf0_flow_pane_ParamLimits

0x9964,	// (0x00083d8d) cf0_flow_pane

0xee5f,	// (0x00089288) listscroll_cf0_pane

0xee6a,	// (0x00089293) main_cf0_pane_g1

0x9973,	// (0x00083d9c) main_cf0_pane_t1_ParamLimits

0x9973,	// (0x00083d9c) main_cf0_pane_t1

0x9987,	// (0x00083db0) main_cf0_pane_t2_ParamLimits

0x9987,	// (0x00083db0) main_cf0_pane_t2

0x0001,

0xfe16,	// (0x0008a23f) main_cf0_pane_t_ParamLimits

0xfe16,	// (0x0008a23f) main_cf0_pane_t

0xee7c,	// (0x000892a5) scroll_pane_cp11

0x999b,	// (0x00083dc4) cf0_flow_pane_g1

0x99a3,	// (0x00083dcc) cf0_flow_pane_g2

0x0001,

0xfe1b,	// (0x0008a244) cf0_flow_pane_g

0x99ab,	// (0x00083dd4) cf0_flow_pane_t1

0xa0cf,	// (0x000844f8) main_call6_pane

0xa0cf,	// (0x000844f8) main_calllock_pane

0x99b9,	// (0x00083de2) call6_btn_grp_pane_ParamLimits

0x99b9,	// (0x00083de2) call6_btn_grp_pane

0x99c8,	// (0x00083df1) call6_pane_g1_ParamLimits

0x99c8,	// (0x00083df1) call6_pane_g1

0x99d8,	// (0x00083e01) popup_call6_1st_window_ParamLimits

0x99d8,	// (0x00083e01) popup_call6_1st_window

0x99e6,	// (0x00083e0f) popup_call6_2nd_window_ParamLimits

0x99e6,	// (0x00083e0f) popup_call6_2nd_window

0x99f4,	// (0x00083e1d) cell_call6_btn_pane_ParamLimits

0x99f4,	// (0x00083e1d) cell_call6_btn_pane

0xaa35,	// (0x00084e5e) bg_popup_call2_in_pane_cp03

0xee87,	// (0x000892b0) popup_call6_1st_window_g1

0xee8f,	// (0x000892b8) popup_call6_1st_window_g2

0xee97,	// (0x000892c0) popup_call6_1st_window_g3

0x0002,

0xfe20,	// (0x0008a249) popup_call6_1st_window_g

0xee9f,	// (0x000892c8) popup_call6_1st_window_t1

0xeeae,	// (0x000892d7) popup_call6_1st_window_t2

0xeebc,	// (0x000892e5) popup_call6_1st_window_t3

0x0002,

0xfe27,	// (0x0008a250) popup_call6_1st_window_t

0xaa35,	// (0x00084e5e) bg_popup_call2_in_pane_cp04

0xee87,	// (0x000892b0) popup_call6_2nd_window_g1

0xee8f,	// (0x000892b8) popup_call6_2nd_window_g2

0xee97,	// (0x000892c0) popup_call6_2nd_window_g3

0x0002,

0xfe20,	// (0x0008a249) popup_call6_2nd_window_g

0xee9f,	// (0x000892c8) popup_call6_2nd_window_t1

0xa0cf,	// (0x000844f8) bg_button_pane_cp15

0xef01,	// (0x0008932a) cell_call6_btn_pane_g1

0x9a03,	// (0x00083e2c) cell_call6_btn_pane_t1

0x9a12,	// (0x00083e3b) listscroll_wgtman_pane_ParamLimits

0x9a12,	// (0x00083e3b) listscroll_wgtman_pane

0x9a2e,	// (0x00083e57) wgtman_btn_pane_ParamLimits

0x9a2e,	// (0x00083e57) wgtman_btn_pane

0xb25a,	// (0x00085683) aid_scroll_copy1

0xeeca,	// (0x000892f3) list_wgtman_pane

0x9a63,	// (0x00083e8c) wgtman_btn_pane_g1_ParamLimits

0x9a63,	// (0x00083e8c) wgtman_btn_pane_g1

0x9a8b,	// (0x00083eb4) wgtman_btn_pane_t1_ParamLimits

0x9a8b,	// (0x00083eb4) wgtman_btn_pane_t1

0xeed4,	// (0x000892fd) wgtman_btn_pane_t2_ParamLimits

0xeed4,	// (0x000892fd) wgtman_btn_pane_t2

0x0001,

0xfe2e,	// (0x0008a257) wgtman_btn_pane_t_ParamLimits

0xfe2e,	// (0x0008a257) wgtman_btn_pane_t

0x9ac2,	// (0x00083eeb) listrow_wgtman_pane_ParamLimits

0x9ac2,	// (0x00083eeb) listrow_wgtman_pane

0x9ade,	// (0x00083f07) listrow_wgtman_pane_g1

0x9aeb,	// (0x00083f14) listrow_wgtman_pane_g2

0x0001,

0xfe33,	// (0x0008a25c) listrow_wgtman_pane_g

0x1fc2,	// (0x0007c3eb) listrow_wgtman_pane_t1

0x1fda,	// (0x0007c403) listrow_wgtman_pane_t2

0x0001,

0xfe38,	// (0x0008a261) listrow_wgtman_pane_t

0x2000,	// (0x0007c429) wait_bar_pane_cp09

0xeeeb,	// (0x00089314) main_calllock_btn_pane

0xeef5,	// (0x0008931e) main_calllock_pane_g1

0xa0cf,	// (0x000844f8) bg_button_pane_cp17

0xef01,	// (0x0008932a) main_calllock_btn_pane_g1

0xef0a,	// (0x00089333) main_calllock_btn_pane_t1

0xa0cf,	// (0x000844f8) main_dialer3_pane

0xa0cf,	// (0x000844f8) main_fmrd2_pane

0xccf5,	// (0x0008711e) main_fs_bigclock_unlock_btn_pane_g1

0x9b11,	// (0x00083f3a) main_fs_bigclock_unlock_btn_pane_t1

0x9b1f,	// (0x00083f48) area_fmrd2_info_pane_ParamLimits

0x9b1f,	// (0x00083f48) area_fmrd2_info_pane

0x9b2d,	// (0x00083f56) area_fmrd2_visual_pane_ParamLimits

0x9b2d,	// (0x00083f56) area_fmrd2_visual_pane

0x9b3b,	// (0x00083f64) fmrd2_indi_pane_ParamLimits

0x9b3b,	// (0x00083f64) fmrd2_indi_pane

0x9b48,	// (0x00083f71) area_fmrd2_visual_pane_g1

0x9b50,	// (0x00083f79) area_fmrd2_visual_pane_t1

0x9b60,	// (0x00083f89) area_fmrd2_visual_pane_t2

0x9b70,	// (0x00083f99) area_fmrd2_visual_pane_t3

0x0002,

0xfe42,	// (0x0008a26b) area_fmrd2_visual_pane_t

0x9b80,	// (0x00083fa9) area_fmrd2_info_pane_g1

0x9b88,	// (0x00083fb1) area_fmrd2_info_pane_t1

0x9b98,	// (0x00083fc1) area_fmrd2_info_pane_t2

0x9ba8,	// (0x00083fd1) area_fmrd2_info_pane_t3

0x9bb8,	// (0x00083fe1) area_fmrd2_info_pane_t4

0x0003,

0xfe49,	// (0x0008a272) area_fmrd2_info_pane_t

0x9bc6,	// (0x00083fef) fmrd2_indi_pane_t1

0x9bd6,	// (0x00083fff) fmrd2_indi_pane_t2

0x9be6,	// (0x0008400f) fmrd2_indi_pane_t3

0x0002,

0xfe52,	// (0x0008a27b) fmrd2_indi_pane_t

0xe4c4,	// (0x000888ed) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4c4,	// (0x000888ed) list_single_fs_bigclock_indicator_pane_g5

0xe575,	// (0x0008899e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe575,	// (0x0008899e) list_single_fs_bigclock_indicator_pane_t5

0x9477,	// (0x000838a0) aid_cell_bcale_month_pane_ParamLimits

0x9477,	// (0x000838a0) aid_cell_bcale_month_pane

0x9495,	// (0x000838be) bcale_month_pane_ParamLimits

0x9495,	// (0x000838be) bcale_month_pane

0x94b3,	// (0x000838dc) bcale_preview_pane_ParamLimits

0x94b3,	// (0x000838dc) bcale_preview_pane

0xecf0,	// (0x00089119) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0f,	// (0x00089138) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0f,	// (0x00089138) list_single_fs_bigclock_pane_t2

0x0001,

0xfdd4,	// (0x0008a1fd) list_single_fs_bigclock_pane_t_ParamLimits

0xfdd4,	// (0x0008a1fd) list_single_fs_bigclock_pane_t

0x9b09,	// (0x00083f32) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe3d,	// (0x0008a266) main_fs_bigclock_unlock_btn_pane_g

0x9bf4,	// (0x0008401d) aid_dia3_key_size_ParamLimits

0x9bf4,	// (0x0008401d) aid_dia3_key_size

0x9c00,	// (0x00084029) aid_dia3_listrow_size_ParamLimits

0x9c00,	// (0x00084029) aid_dia3_listrow_size

0x9c10,	// (0x00084039) dia3_keypad_fun_pane_ParamLimits

0x9c10,	// (0x00084039) dia3_keypad_fun_pane

0x9c22,	// (0x0008404b) dia3_keypad_num_pane_ParamLimits

0x9c22,	// (0x0008404b) dia3_keypad_num_pane

0x9c34,	// (0x0008405d) dia3_listscroll_pane_ParamLimits

0x9c34,	// (0x0008405d) dia3_listscroll_pane

0x9c42,	// (0x0008406b) dia3_numentry_pane_ParamLimits

0x9c42,	// (0x0008406b) dia3_numentry_pane

0xef19,	// (0x00089342) dia3_list_pane

0xef24,	// (0x0008934d) scroll_pane_cp12

0xa0cf,	// (0x000844f8) bg_dia3_numentry_pane

0x9c50,	// (0x00084079) dia3_numentry_pane_t1

0x9c5f,	// (0x00084088) cell_dia3_key_num_pane

0x9c67,	// (0x00084090) cell_dia3_key0_fun_pane_ParamLimits

0x9c67,	// (0x00084090) cell_dia3_key0_fun_pane

0x9c74,	// (0x0008409d) cell_dia3_key1_fun_pane_ParamLimits

0x9c74,	// (0x0008409d) cell_dia3_key1_fun_pane

0x9c81,	// (0x000840aa) dia3_listrow_pane

0xe217,	// (0x00088640) bg_dia3_numentry_pane_g1

0xa0cf,	// (0x000844f8) bg_button_pane_cp21

0xef2f,	// (0x00089358) cell_dia3_key_num_pane_t1

0xef3d,	// (0x00089366) cell_dia3_key_num_pane_t2

0xef4c,	// (0x00089375) cell_dia3_key_num_pane_t3

0xef5b,	// (0x00089384) cell_dia3_key_num_pane_t4

0x0003,

0xfe59,	// (0x0008a282) cell_dia3_key_num_pane_t

0xa0cf,	// (0x000844f8) bg_button_pane_cp19

0x9c8e,	// (0x000840b7) cell_dia3_key0_fun_pane_g1

0xa0cf,	// (0x000844f8) bg_button_pane_cp20

0x9c96,	// (0x000840bf) cell_dia3_key1_fun_pane_g1

0x9c9e,	// (0x000840c7) area_left_week_number_pane

0x9cb1,	// (0x000840da) area_top_day_name_pane

0x9cbf,	// (0x000840e8) frame_month_view_pane

0xef6a,	// (0x00089393) grid_month_view_pane

0x9cd4,	// (0x000840fd) cell_top_day_name_pane_ParamLimits

0x9cd4,	// (0x000840fd) cell_top_day_name_pane

0x9cee,	// (0x00084117) cell_area_left_week_number_pane_ParamLimits

0x9cee,	// (0x00084117) cell_area_left_week_number_pane

0x9d11,	// (0x0008413a) cell_month_view_pane_ParamLimits

0x9d11,	// (0x0008413a) cell_month_view_pane

0xef78,	// (0x000893a1) frm_month_g1

0x9d3d,	// (0x00084166) frm_month_g2

0x9d4e,	// (0x00084177) frm_month_g3

0x9d5f,	// (0x00084188) frm_month_g4

0x9d70,	// (0x00084199) frm_month_g5

0x9d83,	// (0x000841ac) frm_month_g6

0x9d96,	// (0x000841bf) frm_month_g7

0xef85,	// (0x000893ae) frm_month_g8

0x9da9,	// (0x000841d2) frm_month_g9

0x9db6,	// (0x000841df) frm_month_g10

0x9dc3,	// (0x000841ec) frm_month_g11

0x9dd0,	// (0x000841f9) frm_month_g12

0x9ddd,	// (0x00084206) frm_month_g13

0x9dea,	// (0x00084213) frm_month_g14

0x9df9,	// (0x00084222) frm_month_g15

0x9e08,	// (0x00084231) frm_month_g16

0x000f,

0xfe62,	// (0x0008a28b) frm_month_g

0xef92,	// (0x000893bb) cell_top_day_name_pane_t1

0x9e17,	// (0x00084240) cell_area_left_week_number_pane_g1

0x9e26,	// (0x0008424f) cell_area_left_week_number_pane_t1

0xcf4f,	// (0x00087378) cell_month_view_pane_g1

0x9e3c,	// (0x00084265) cell_month_view_pane_t1

0xa0cf,	// (0x000844f8) main_fps_pane

0xe7ad,	// (0x00088bd6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7ad,	// (0x00088bd6) cmail_ddmenu_btn02_pane_cp1

0xe7c9,	// (0x00088bf2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7c9,	// (0x00088bf2) cmail_ddmenu_btn02_pane_cp2

0x96a1,	// (0x00083aca) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x96a1,	// (0x00083aca) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd87,	// (0x0008a1b0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd87,	// (0x0008a1b0) cmail_ddmenu_btn02_pane_g

0x96c0,	// (0x00083ae9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x96c0,	// (0x00083ae9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd8c,	// (0x0008a1b5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd8c,	// (0x0008a1b5) cmail_ddmenu_btn02_pane_t

0x9e52,	// (0x0008427b) fps_text_pane_ParamLimits

0x9e52,	// (0x0008427b) fps_text_pane

0x9e5f,	// (0x00084288) main_fps_pane_g1_ParamLimits

0x9e5f,	// (0x00084288) main_fps_pane_g1

0x9e6d,	// (0x00084296) wait_bar_pane_cp010_ParamLimits

0x9e6d,	// (0x00084296) wait_bar_pane_cp010

0x9e79,	// (0x000842a2) fps_text_pane_t1_ParamLimits

0x9e79,	// (0x000842a2) fps_text_pane_t1

0x7316,	// (0x0008173f) cam4_image_uncrop_pane_g1

0x731f,	// (0x00081748) cam4_image_uncrop_pane_g2

0x7328,	// (0x00081751) cam4_image_uncrop_pane_g3

0x7331,	// (0x0008175a) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00089d2a) cam4_image_uncrop_pane_g

0x9c81,	// (0x000840aa) dia3_listrow_pane_ParamLimits

0xa0cf,	// (0x000844f8) main_phob2_pane

0x92ab,	// (0x000836d4) cell_tport_appsw_pane_cp02_ParamLimits

0x92ab,	// (0x000836d4) cell_tport_appsw_pane_cp02

0x92ba,	// (0x000836e3) cell_tport_appsw_pane_cp03_ParamLimits

0x92ba,	// (0x000836e3) cell_tport_appsw_pane_cp03

0xa0cf,	// (0x000844f8) phob2_contact_card_pane

0xa0cf,	// (0x000844f8) phob2_listscroll_pane

0xefa5,	// (0x000893ce) phob2_list_pane

0xefad,	// (0x000893d6) scroll_pane_cp034

0x9e92,	// (0x000842bb) phob2_cc_data_pane_ParamLimits

0x9e92,	// (0x000842bb) phob2_cc_data_pane

0x9eac,	// (0x000842d5) phob2_cc_listscroll_pane_ParamLimits

0x9eac,	// (0x000842d5) phob2_cc_listscroll_pane

0x9ec6,	// (0x000842ef) list_double_large_graphic_phob2_pane_ParamLimits

0x9ec6,	// (0x000842ef) list_double_large_graphic_phob2_pane

0x9ee5,	// (0x0008430e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9ee5,	// (0x0008430e) list_double_large_graphic_phob2_pane_g1

0x2012,	// (0x0007c43b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2012,	// (0x0007c43b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe83,	// (0x0008a2ac) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe83,	// (0x0008a2ac) list_double_large_graphic_phob2_pane_g

0x201e,	// (0x0007c447) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x201e,	// (0x0007c447) list_double_large_graphic_phob2_pane_t1

0x2034,	// (0x0007c45d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2034,	// (0x0007c45d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe88,	// (0x0008a2b1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe88,	// (0x0008a2b1) list_double_large_graphic_phob2_pane_t

0xa0cf,	// (0x000844f8) list_highlight_pane_cp024

0x9efb,	// (0x00084324) phob2_cc_button_pane

0x9f03,	// (0x0008432c) phob2_cc_data_pane_g1_ParamLimits

0x9f03,	// (0x0008432c) phob2_cc_data_pane_g1

0x9f0f,	// (0x00084338) phob2_cc_data_pane_g2_ParamLimits

0x9f0f,	// (0x00084338) phob2_cc_data_pane_g2

0x0001,

0xfe8d,	// (0x0008a2b6) phob2_cc_data_pane_g_ParamLimits

0xfe8d,	// (0x0008a2b6) phob2_cc_data_pane_g

0x9f1b,	// (0x00084344) phob2_cc_data_pane_t1_ParamLimits

0x9f1b,	// (0x00084344) phob2_cc_data_pane_t1

0x9f2d,	// (0x00084356) phob2_cc_data_pane_t2_ParamLimits

0x9f2d,	// (0x00084356) phob2_cc_data_pane_t2

0x9f3f,	// (0x00084368) phob2_cc_data_pane_t3_ParamLimits

0x9f3f,	// (0x00084368) phob2_cc_data_pane_t3

0x0002,

0xfe92,	// (0x0008a2bb) phob2_cc_data_pane_t_ParamLimits

0xfe92,	// (0x0008a2bb) phob2_cc_data_pane_t

0xefb5,	// (0x000893de) phob2_cc_list_pane_ParamLimits

0xefb5,	// (0x000893de) phob2_cc_list_pane

0xda7c,	// (0x00087ea5) scroll_pane_cp035_ParamLimits

0xda7c,	// (0x00087ea5) scroll_pane_cp035

0xb4f7,	// (0x00085920) bg_button_pane_cp033

0xefc1,	// (0x000893ea) phob2_cc_button_pane_g1

0xefcd,	// (0x000893f6) phob2_cc_button_pane_t1

0xefe2,	// (0x0008940b) phob2_cc_button_pane_t2

0x0001,

0xfe99,	// (0x0008a2c2) phob2_cc_button_pane_t

0x9f51,	// (0x0008437a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f51,	// (0x0008437a) list_double_large_graphic_phob2_cc_pane

0x9f7a,	// (0x000843a3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f7a,	// (0x000843a3) list_double_large_graphic_phob2_cc_pane_g1

0x2049,	// (0x0007c472) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x2049,	// (0x0007c472) list_double_large_graphic_phob2_cc_pane_g2

0x2058,	// (0x0007c481) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2058,	// (0x0007c481) list_double_large_graphic_phob2_cc_pane_g3

0x2067,	// (0x0007c490) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x2067,	// (0x0007c490) list_double_large_graphic_phob2_cc_pane_g4

0x2078,	// (0x0007c4a1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x2078,	// (0x0007c4a1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe9e,	// (0x0008a2c7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe9e,	// (0x0008a2c7) list_double_large_graphic_phob2_cc_pane_g

0x2087,	// (0x0007c4b0) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x2087,	// (0x0007c4b0) list_double_large_graphic_phob2_cc_pane_t1

0x20b0,	// (0x0007c4d9) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x20b0,	// (0x0007c4d9) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea9,	// (0x0008a2d2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea9,	// (0x0008a2d2) list_double_large_graphic_phob2_cc_pane_t

0xeff4,	// (0x0008941d) list_highlight_pane_cp025_ParamLimits

0xeff4,	// (0x0008941d) list_highlight_pane_cp025

0xb4f7,	// (0x00085920) bg_button_pane_cp033_ParamLimits

0xefc1,	// (0x000893ea) phob2_cc_button_pane_g1_ParamLimits

0xefcd,	// (0x000893f6) phob2_cc_button_pane_t1_ParamLimits

0xefe2,	// (0x0008940b) phob2_cc_button_pane_t2_ParamLimits

0xfe99,	// (0x0008a2c2) phob2_cc_button_pane_t_ParamLimits

0x23b0,	// (0x0007c7d9) popup_wgtman_window

0xd857,	// (0x00087c80) scroll_pane_cp038

0x9a4b,	// (0x00083e74) wgtman_btn_pane_cp_01_ParamLimits

0x9a4b,	// (0x00083e74) wgtman_btn_pane_cp_01

0xf002,	// (0x0008942b) wgtman_content_pane

0xf00b,	// (0x00089434) wgtman_heading_pane

0xa0cf,	// (0x000844f8) bg_heading_pane_cp02

0xf014,	// (0x0008943d) wgtman_heading_pane_g1

0xf01c,	// (0x00089445) wgtman_heading_pane_t1

0xf02a,	// (0x00089453) scroll_pane_cp036

0xf032,	// (0x0008945b) wgtman_list_pane

0xe6aa,	// (0x00088ad3) wgtman_list_pane_t1_ParamLimits

0xe6aa,	// (0x00088ad3) wgtman_list_pane_t1

0x7275,	// (0x0008169e) cam4_grid_pane

0x12d4,	// (0x0007b6fd) bg_button_pane_cp015_ParamLimits

0x7f6c,	// (0x00082395) bg_button_pane_cp016_ParamLimits

0x7f7f,	// (0x000823a8) bg_button_pane_cp017_ParamLimits

0x1318,	// (0x0007b741) popup_vitu2_query_window_g3_ParamLimits

0x1318,	// (0x0007b741) popup_vitu2_query_window_g3

0x1391,	// (0x0007b7ba) popup_vitu2_query_window_t6_ParamLimits

0x1391,	// (0x0007b7ba) popup_vitu2_query_window_t6

0x13bc,	// (0x0007b7e5) popup_vitu2_query_window_t7_ParamLimits

0x13bc,	// (0x0007b7e5) popup_vitu2_query_window_t7

0xd6dc,	// (0x00087b05) cam4_grid_pane_g1

0xd734,	// (0x00087b5d) cam4_grid_pane_g2

0xf03a,	// (0x00089463) cam4_grid_pane_g3

0xf043,	// (0x0008946c) cam4_grid_pane_g4

0x0003,

0xfeae,	// (0x0008a2d7) cam4_grid_pane_g

0x3123,	// (0x0007d54c) aid_placing_vt_slider_lsc_ParamLimits

0x3463,	// (0x0007d88c) vidtel_button_pane_ParamLimits

0x3463,	// (0x0007d88c) vidtel_button_pane

0xa0cf,	// (0x000844f8) bg_button_pane_cp034

0xf04e,	// (0x00089477) vidtel_button_pane_g1

0xf056,	// (0x0008947f) vidtel_button_pane_t1

0xd971,	// (0x00087d9a) aid_size_vtel_slider_touch

0xda7c,	// (0x00087ea5) scroll_pane_cp039

0x8c4b,	// (0x00083074) ncim_query_button_pane_cp01_ParamLimits

0x8c6a,	// (0x00083093) ncimui_query_pane_g1_ParamLimits

0xb4f7,	// (0x00085920) input_focus_pane_cp012_ParamLimits

0xe25d,	// (0x00088686) ncim_query_entry_pane_t1_ParamLimits

0xda7c,	// (0x00087ea5) scroll_pane_cp039_ParamLimits

0xb331,	// (0x0008575a) navi_pane_bcale_mc_g1

0xb339,	// (0x00085762) navi_pane_bcale_mc_t1

0xe812,	// (0x00088c3b) main_sp_fs_email_pane_g1

0xe81e,	// (0x00088c47) main_sp_fs_email_pane_g2

0x0001,

0x0be0,	// (0x0007b009) main_sp_fs_email_pane_g

0xea74,	// (0x00088e9d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea74,	// (0x00088e9d) list_single_cale_mrui_row_pane_g3

0x1f1d,	// (0x0007c346) list_single_recal_day_pane_g5_event_pane

0x1f33,	// (0x0007c35c) list_single_recal_day_pane_g7

0xf06c,	// (0x00089495) list_recal_day_event_pane_cp01

0xf075,	// (0x0008949e) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x000894a6) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x000894ae) list_recal_vselct_pane_cp01

0xd981,	// (0x00087daa) list_recal_day_event_pane_cp01_g1

0x20d9,	// (0x0007c502) list_recal_day_event_pane_cp01_t1

0x1f3b,	// (0x0007c364) list_single_recal_day_pane_t1_ParamLimits

0x1f4d,	// (0x0007c376) list_single_recal_day_pane_t2_ParamLimits

0xfd9c,	// (0x0008a1c5) list_single_recal_day_pane_t_ParamLimits

0xa78d,	// (0x00084bb6) bg_notes_pane_ParamLimits

0xa83c,	// (0x00084c65) list_notes_pane_ParamLimits

0x270b,	// (0x0007cb34) scroll_pane_cp06_ParamLimits

0xa85e,	// (0x00084c87) main_notes_pane_ParamLimits

0xa0cf,	// (0x000844f8) main_welc_pane

0x9f8b,	// (0x000843b4) main_welc_body_pane_ParamLimits

0x9f8b,	// (0x000843b4) main_welc_body_pane

0x9fa4,	// (0x000843cd) main_welc_opti_pane_ParamLimits

0x9fa4,	// (0x000843cd) main_welc_opti_pane

0x9fd7,	// (0x00084400) main_welc_pane_t1_ParamLimits

0x9fd7,	// (0x00084400) main_welc_pane_t1

0x9ff1,	// (0x0008441a) main_welc_body_row_pane_ParamLimits

0x9ff1,	// (0x0008441a) main_welc_body_row_pane

0xde40,	// (0x00088269) main_welc_opti_row_pane_ParamLimits

0xde40,	// (0x00088269) main_welc_opti_row_pane

0xf08f,	// (0x000894b8) main_welc_opti_row_pane_g1

0xa01a,	// (0x00084443) main_welc_opti_row_pane_t1

0xf097,	// (0x000894c0) main_welc_body_row_pane_t1

0xedc7,	// (0x000891f0) popup_notif_wgt_heading_pane

0xede1,	// (0x0008920a) aid_size_list_notif_wgt_del_ParamLimits

0xedee,	// (0x00089217) list_notif_wgt_row_pane_g1_ParamLimits

0xedfa,	// (0x00089223) list_notif_wgt_row_pane_g2_ParamLimits

0xee09,	// (0x00089232) list_notif_wgt_row_pane_g3_ParamLimits

0xfe03,	// (0x0008a22c) list_notif_wgt_row_pane_g_ParamLimits

0xee16,	// (0x0008923f) list_notif_wgt_row_pane_t1_ParamLimits

0xee2c,	// (0x00089255) list_notif_wgt_row_pane_t2_ParamLimits

0xee3e,	// (0x00089267) list_notif_wgt_row_pane_t3_ParamLimits

0xfe0a,	// (0x0008a233) list_notif_wgt_row_pane_t_ParamLimits

0x9ade,	// (0x00083f07) listrow_wgtman_pane_g1_ParamLimits

0x9aeb,	// (0x00083f14) listrow_wgtman_pane_g2_ParamLimits

0xfe33,	// (0x0008a25c) listrow_wgtman_pane_g_ParamLimits

0x1fc2,	// (0x0007c3eb) listrow_wgtman_pane_t1_ParamLimits

0x1fda,	// (0x0007c403) listrow_wgtman_pane_t2_ParamLimits

0xfe38,	// (0x0008a261) listrow_wgtman_pane_t_ParamLimits

0x2000,	// (0x0007c429) wait_bar_pane_cp09_ParamLimits

0xa0cf,	// (0x000844f8) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000894cf) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000894d7) popup_notif_wgt_heading_pane_t1

0xa0cf,	// (0x000844f8) main_vids_pane

0xa0cf,	// (0x000844f8) vids_listscroll_pane

0xa029,	// (0x00084452) scroll_pane_cp040

0xa0cf,	// (0x000844f8) vids_list_pane

0xa034,	// (0x0008445d) vids_list_double_pane_ParamLimits

0xa034,	// (0x0008445d) vids_list_double_pane

0xa04c,	// (0x00084475) vids_list_double_pane_g1

0xa055,	// (0x0008447e) vids_list_double_pane_t1

0xa065,	// (0x0008448e) vids_list_double_pane_t2

0x0001,

0xfebc,	// (0x0008a2e5) vids_list_double_pane_t

0xb4f7,	// (0x00085920) main_ncimui_pane_ParamLimits

0x8aa2,	// (0x00082ecb) main_ncimui_pane_g1_ParamLimits

0x8aae,	// (0x00082ed7) main_ncimui_pane_g2_ParamLimits

0x8aae,	// (0x00082ed7) main_ncimui_pane_g2

0x0001,

0xfbe2,	// (0x0008a00b) main_ncimui_pane_g_ParamLimits

0xfbe2,	// (0x0008a00b) main_ncimui_pane_g

0x9fbd,	// (0x000843e6) main_welc_pane_g1_ParamLimits

0x9fbd,	// (0x000843e6) main_welc_pane_g1

0x9fc9,	// (0x000843f2) main_welc_pane_g2_ParamLimits

0x9fc9,	// (0x000843f2) main_welc_pane_g2

0x0001,

0xfeb7,	// (0x0008a2e0) main_welc_pane_g_ParamLimits

0xfeb7,	// (0x0008a2e0) main_welc_pane_g

0xa78d,	// (0x00084bb6) listscroll_mce_pane_ParamLimits

0xb486,	// (0x000858af) wait_bar_pane_cp10

0xc8e1,	// (0x00086d0a) main_cale_day_pane_ParamLimits

0xc8e1,	// (0x00086d0a) main_cale_week_pane_ParamLimits

0xa78d,	// (0x00084bb6) main_messa_pane_ParamLimits

0x6697,	// (0x00080ac0) main_clock2_btn_pane_ParamLimits

0x6697,	// (0x00080ac0) main_clock2_btn_pane

0xd0d7,	// (0x00087500) main_clock2_btn_pane_cp01_ParamLimits

0xd0d7,	// (0x00087500) main_clock2_btn_pane_cp01

0xea45,	// (0x00088e6e) list_cale_mrui_pane_ParamLimits

0xee74,	// (0x0008929d) main_cf0_pane_g2

0x0001,

0xfe11,	// (0x0008a23a) main_cf0_pane_g

0x9c9e,	// (0x000840c7) area_left_week_number_pane_ParamLimits

0x9cb1,	// (0x000840da) area_top_day_name_pane_ParamLimits

0x9cbf,	// (0x000840e8) frame_month_view_pane_ParamLimits

0xef6a,	// (0x00089393) grid_month_view_pane_ParamLimits

0xef78,	// (0x000893a1) frm_month_g1_ParamLimits

0x9d3d,	// (0x00084166) frm_month_g2_ParamLimits

0x9d4e,	// (0x00084177) frm_month_g3_ParamLimits

0x9d5f,	// (0x00084188) frm_month_g4_ParamLimits

0x9d70,	// (0x00084199) frm_month_g5_ParamLimits

0x9d83,	// (0x000841ac) frm_month_g6_ParamLimits

0x9d96,	// (0x000841bf) frm_month_g7_ParamLimits

0xef85,	// (0x000893ae) frm_month_g8_ParamLimits

0x9da9,	// (0x000841d2) frm_month_g9_ParamLimits

0x9db6,	// (0x000841df) frm_month_g10_ParamLimits

0x9dc3,	// (0x000841ec) frm_month_g11_ParamLimits

0x9dd0,	// (0x000841f9) frm_month_g12_ParamLimits

0x9ddd,	// (0x00084206) frm_month_g13_ParamLimits

0x9dea,	// (0x00084213) frm_month_g14_ParamLimits

0x9df9,	// (0x00084222) frm_month_g15_ParamLimits

0x9e08,	// (0x00084231) frm_month_g16_ParamLimits

0xfe62,	// (0x0008a28b) frm_month_g_ParamLimits

0xef92,	// (0x000893bb) cell_top_day_name_pane_t1_ParamLimits

0x9e17,	// (0x00084240) cell_area_left_week_number_pane_g1_ParamLimits

0x9e26,	// (0x0008424f) cell_area_left_week_number_pane_t1_ParamLimits

0xcf4f,	// (0x00087378) cell_month_view_pane_g1_ParamLimits

0x9e3c,	// (0x00084265) cell_month_view_pane_t1_ParamLimits

0xa785,	// (0x00084bae) main_clock2_btn_pane_g1

0xf0bc,	// (0x000894e5) main_clock2_btn_pane_t1

0xb4f7,	// (0x00085920) listscroll_cmail_pane_ParamLimits

0xe812,	// (0x00088c3b) main_sp_fs_email_pane_g1_ParamLimits

0xe81e,	// (0x00088c47) main_sp_fs_email_pane_g2_ParamLimits

0x0be0,	// (0x0007b009) main_sp_fs_email_pane_g_ParamLimits

0xeb53,	// (0x00088f7c) list_recal_day_pane_ParamLimits

0xeb64,	// (0x00088f8d) mian_recal_day_pane_t1

0x1902,	// (0x0007bd2b) list_single_dyc_row_text_pane_t4_ParamLimits

0x1902,	// (0x0007bd2b) list_single_dyc_row_text_pane_t4

0x1939,	// (0x0007bd62) list_single_dyc_row_text_pane_t5_ParamLimits

0x1939,	// (0x0007bd62) list_single_dyc_row_text_pane_t5

0x19af,	// (0x0007bdd8) list_single_dyc_row_text_pane_t6_ParamLimits

0x19af,	// (0x0007bdd8) list_single_dyc_row_text_pane_t6

0x42dc,	// (0x0007e705) aid_mgn_list_cale_time_pane

0xb4f7,	// (0x00085920) main_gallery2_pane_ParamLimits

0xd0ed,	// (0x00087516) main_clock2_pane_cp01_t1

0xd0fb,	// (0x00087524) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x00089c00) main_clock2_pane_cp01_t

0x2b4e,	// (0x0007cf77) cale_week_scroll_pane_g16_ParamLimits

0x2b4e,	// (0x0007cf77) cale_week_scroll_pane_g16

0xaa35,	// (0x00084e5e) vorec_slider_pane

0xf056,	// (0x0008947f) vidtel_button_pane_t1_ParamLimits

0x9723,	// (0x00083b4c) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9723,	// (0x00083b4c) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9730,	// (0x00083b59) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9730,	// (0x00083b59) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdbf,	// (0x0008a1e8) main_fs_bigclock_clock_pane_g_ParamLimits

0x973c,	// (0x00083b65) main_fs_bigclock_clock_pane_t1_ParamLimits

0x974f,	// (0x00083b78) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdc8,	// (0x0008a1f1) main_fs_bigclock_clock_pane_t_ParamLimits

0x5f3a,	// (0x00080363) main_mup3_lyrics_pane_ParamLimits

0x5f3a,	// (0x00080363) main_mup3_lyrics_pane

0xa099,	// (0x000844c2) main_mup3_lyrics_pane_t1_ParamLimits

0xa099,	// (0x000844c2) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large

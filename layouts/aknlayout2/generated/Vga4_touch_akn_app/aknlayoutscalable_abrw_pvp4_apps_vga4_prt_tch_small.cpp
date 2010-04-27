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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005ddb2 };

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
0x0b7c,	// (0x0005e92e) Screen

0x0b88,	// (0x0005e93a) application_window

0x0bd8,	// (0x0005e98a) area_bottom_pane_ParamLimits

0x0bd8,	// (0x0005e98a) area_bottom_pane

0x0c0d,	// (0x0005e9bf) area_top_pane_ParamLimits

0x0c0d,	// (0x0005e9bf) area_top_pane

0x9c6d,	// (0x00067a1f) call_video_uplink_pane_ParamLimits

0x9c6d,	// (0x00067a1f) call_video_uplink_pane

0x0c9c,	// (0x0005ea4e) main_pane_ParamLimits

0x0c9c,	// (0x0005ea4e) main_pane

0xc86e,	// (0x0006a620) context_pane

0x45df,	// (0x00062391) navi_pane

0x4603,	// (0x000623b5) popup_cale_events_window_ParamLimits

0x4603,	// (0x000623b5) popup_cale_events_window

0xc881,	// (0x0006a633) popup_mup_playback_window

0x461b,	// (0x000623cd) signal_pane

0xa8c9,	// (0x0006867b) main_browser_pane

0xaa7f,	// (0x00068831) main_burst_pane

0x4491,	// (0x00062243) main_calc_pane

0xc811,	// (0x0006a5c3) main_cale_day_pane

0x13ce,	// (0x0005f180) main_cale_month_pane

0xc811,	// (0x0006a5c3) main_cale_week_pane

0xaa7f,	// (0x00068831) main_call_pane

0xa09e,	// (0x00067e50) main_call_poc_pane

0xaa7f,	// (0x00068831) main_camera_pane

0xaa7f,	// (0x00068831) main_chi_dic_pane

0xb29e,	// (0x00069050) main_clock_pane

0xa09e,	// (0x00067e50) main_fmradio_pane

0xaa7f,	// (0x00068831) main_graph_messa_pane

0xa09e,	// (0x00067e50) main_help_pane

0xa8c9,	// (0x0006867b) main_im_pane

0xa804,	// (0x000685b6) main_image_pane_ParamLimits

0xa804,	// (0x000685b6) main_image_pane

0xa09e,	// (0x00067e50) main_location2_pane

0xaa7f,	// (0x00068831) main_location_pane

0xa804,	// (0x000685b6) main_messa_pane

0xa09e,	// (0x00067e50) main_mp2_pane

0xaa7f,	// (0x00068831) main_mp_pane

0xa09e,	// (0x00067e50) main_msg_pane

0xa09e,	// (0x00067e50) main_mup_eq_pane

0xa09e,	// (0x00067e50) main_mup_pane

0xa8c9,	// (0x0006867b) main_notes_pane

0xa09e,	// (0x00067e50) main_pec_pane

0xa09e,	// (0x00067e50) main_phob_pane

0xa09e,	// (0x00067e50) main_pinb_pane

0xa09e,	// (0x00067e50) main_postcard_pane

0xa09e,	// (0x00067e50) main_qdial_pane

0xaa7f,	// (0x00068831) main_skin_pane

0xa09e,	// (0x00067e50) main_smil2_pane

0xaa7f,	// (0x00068831) main_smil_pane

0xaa7f,	// (0x00068831) main_video_pane

0xaa7f,	// (0x00068831) main_video_tele_pane

0xa804,	// (0x000685b6) main_viewer_pane_ParamLimits

0xa804,	// (0x000685b6) main_viewer_pane

0xaa7f,	// (0x00068831) main_vorec_pane

0x44c9,	// (0x0006227b) popup_blid_sat_info_window_ParamLimits

0x44c9,	// (0x0006227b) popup_blid_sat_info_window

0x44e3,	// (0x00062295) popup_dyc_status_message_window_ParamLimits

0x44e3,	// (0x00062295) popup_dyc_status_message_window

0x44f3,	// (0x000622a5) popup_grid_large_graphic_window_ParamLimits

0x44f3,	// (0x000622a5) popup_grid_large_graphic_window

0x456b,	// (0x0006231d) popup_loc_request_window_ParamLimits

0x456b,	// (0x0006231d) popup_loc_request_window

0x45b3,	// (0x00062365) popup_wml_address_window_ParamLimits

0x45b3,	// (0x00062365) popup_wml_address_window

0x4369,	// (0x0006211b) call_muted_g1

0x4028,	// (0x00061dda) popup_call_audio_conf_window_ParamLimits

0x4028,	// (0x00061dda) popup_call_audio_conf_window

0x4379,	// (0x0006212b) popup_call_audio_first_window_ParamLimits

0x4379,	// (0x0006212b) popup_call_audio_first_window

0x43b9,	// (0x0006216b) popup_call_audio_in_window_ParamLimits

0x43b9,	// (0x0006216b) popup_call_audio_in_window

0x43dd,	// (0x0006218f) popup_call_audio_out_window_ParamLimits

0x43dd,	// (0x0006218f) popup_call_audio_out_window

0x43ff,	// (0x000621b1) popup_call_audio_second_window_ParamLimits

0x43ff,	// (0x000621b1) popup_call_audio_second_window

0x442f,	// (0x000621e1) popup_call_audio_wait_window_ParamLimits

0x442f,	// (0x000621e1) popup_call_audio_wait_window

0x4450,	// (0x00062202) popup_number_entry_window_ParamLimits

0x4450,	// (0x00062202) popup_number_entry_window

0x9c8b,	// (0x00067a3d) bg_popup_call_pane_cp05_ParamLimits

0x9c8b,	// (0x00067a3d) bg_popup_call_pane_cp05

0x9cab,	// (0x00067a5d) popup_number_entry_window_t1

0x9cbe,	// (0x00067a70) popup_number_entry_window_t2

0x9cd0,	// (0x00067a82) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0006ce7c) popup_number_entry_window_t

0x9ce2,	// (0x00067a94) text_title_cp2

0x9cf5,	// (0x00067aa7) bg_popup_call_pane_cp_ParamLimits

0x9cf5,	// (0x00067aa7) bg_popup_call_pane_cp

0x9d03,	// (0x00067ab5) call_thumbnail_pane

0x9d0b,	// (0x00067abd) popup_call_audio_in_window_g1_ParamLimits

0x9d0b,	// (0x00067abd) popup_call_audio_in_window_g1

0x9d17,	// (0x00067ac9) popup_call_audio_in_window_g2_ParamLimits

0x9d17,	// (0x00067ac9) popup_call_audio_in_window_g2

0x9d23,	// (0x00067ad5) popup_call_audio_in_window_g3_ParamLimits

0x9d23,	// (0x00067ad5) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0006ce85) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0006ce85) popup_call_audio_in_window_g

0x9d2f,	// (0x00067ae1) popup_call_audio_in_window_t1_ParamLimits

0x9d2f,	// (0x00067ae1) popup_call_audio_in_window_t1

0x9d4b,	// (0x00067afd) popup_call_audio_in_window_t2_ParamLimits

0x9d4b,	// (0x00067afd) popup_call_audio_in_window_t2

0x9d67,	// (0x00067b19) popup_call_audio_in_window_t3_ParamLimits

0x9d67,	// (0x00067b19) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0006ce8c) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0006ce8c) popup_call_audio_in_window_t

0x9cf5,	// (0x00067aa7) bg_popup_call_pane_cp01_ParamLimits

0x9cf5,	// (0x00067aa7) bg_popup_call_pane_cp01

0x9d03,	// (0x00067ab5) call_thumbnail_pane_cp02

0x9d7a,	// (0x00067b2c) call_type_pane_cp022

0x9d82,	// (0x00067b34) popup_call_audio_out_window_g1_ParamLimits

0x9d82,	// (0x00067b34) popup_call_audio_out_window_g1

0x9d94,	// (0x00067b46) popup_call_audio_out_window_g2_ParamLimits

0x9d94,	// (0x00067b46) popup_call_audio_out_window_g2

0x9da0,	// (0x00067b52) popup_call_audio_out_window_g3_ParamLimits

0x9da0,	// (0x00067b52) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0006ce93) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0006ce93) popup_call_audio_out_window_g

0x9db2,	// (0x00067b64) popup_call_audio_out_window_t1_ParamLimits

0x9db2,	// (0x00067b64) popup_call_audio_out_window_t1

0x9dca,	// (0x00067b7c) popup_call_audio_out_window_t2_ParamLimits

0x9dca,	// (0x00067b7c) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0006ce9a) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0006ce9a) popup_call_audio_out_window_t

0x9ddf,	// (0x00067b91) bg_popup_call_pane_ParamLimits

0x9ddf,	// (0x00067b91) bg_popup_call_pane

0x0ea0,	// (0x0005ec52) call_thumbnail_pane_cp_ParamLimits

0x0ea0,	// (0x0005ec52) call_thumbnail_pane_cp

0x9e63,	// (0x00067c15) call_type_pane_cp01_ParamLimits

0x9e63,	// (0x00067c15) call_type_pane_cp01

0x9ea7,	// (0x00067c59) popup_call_audio_first_window_g1_ParamLimits

0x9ea7,	// (0x00067c59) popup_call_audio_first_window_g1

0x9ef3,	// (0x00067ca5) popup_call_audio_first_window_g2_ParamLimits

0x9ef3,	// (0x00067ca5) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0006ce9f) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0006ce9f) popup_call_audio_first_window_g

0x9f37,	// (0x00067ce9) popup_call_audio_first_window_t1_ParamLimits

0x9f37,	// (0x00067ce9) popup_call_audio_first_window_t1

0x9fe3,	// (0x00067d95) popup_call_audio_first_window_t4_ParamLimits

0x9fe3,	// (0x00067d95) popup_call_audio_first_window_t4

0xa06f,	// (0x00067e21) popup_call_audio_first_window_t5_ParamLimits

0xa06f,	// (0x00067e21) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0006cea4) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0006cea4) popup_call_audio_first_window_t

0xa09e,	// (0x00067e50) bg_popup_call_pane_cp02

0xa0a8,	// (0x00067e5a) call_type_pane_cp023

0xa0b0,	// (0x00067e62) popup_call_audio_wait_window_g1

0xa0b8,	// (0x00067e6a) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006ceab) popup_call_audio_wait_window_g

0xa0c0,	// (0x00067e72) popup_call_audio_wait_window_t3

0xa0ce,	// (0x00067e80) bg_popup_call_pane_cp03_ParamLimits

0xa0ce,	// (0x00067e80) bg_popup_call_pane_cp03

0xa12e,	// (0x00067ee0) call_thumbnail_pane_cp011_ParamLimits

0xa12e,	// (0x00067ee0) call_thumbnail_pane_cp011

0xa13a,	// (0x00067eec) call_type_pane_cp034_ParamLimits

0xa13a,	// (0x00067eec) call_type_pane_cp034

0xa176,	// (0x00067f28) popup_call_audio_second_window_g1_ParamLimits

0xa176,	// (0x00067f28) popup_call_audio_second_window_g1

0xa1b2,	// (0x00067f64) popup_call_audio_second_window_g2_ParamLimits

0xa1b2,	// (0x00067f64) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0006ceb0) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0006ceb0) popup_call_audio_second_window_g

0xa1ee,	// (0x00067fa0) popup_call_audio_second_window_t1_ParamLimits

0xa1ee,	// (0x00067fa0) popup_call_audio_second_window_t1

0xa77a,	// (0x0006852c) popup_call_audio_second_window_t2_ParamLimits

0xa77a,	// (0x0006852c) popup_call_audio_second_window_t2

0xa7b0,	// (0x00068562) popup_call_audio_second_window_t3_ParamLimits

0xa7b0,	// (0x00068562) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0006ceb5) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0006ceb5) popup_call_audio_second_window_t

0xa09e,	// (0x00067e50) bg_popup_call_pane_cp04

0xa7e6,	// (0x00068598) list_conf_pane

0xa7ee,	// (0x000685a0) popup_call_audio_conf_window_t1

0xa7fc,	// (0x000685ae) call_thumbnail_pane_g1

0xa804,	// (0x000685b6) bg_pinb_pane_ParamLimits

0xa804,	// (0x000685b6) bg_pinb_pane

0xa812,	// (0x000685c4) find_pinb_pane

0xa81b,	// (0x000685cd) listscroll_pinb_pane_ParamLimits

0xa81b,	// (0x000685cd) listscroll_pinb_pane

0xa82a,	// (0x000685dc) pinb_bg_pane_g1

0x0ec4,	// (0x0005ec76) pinb_bg_pane_g2

0x0ed0,	// (0x0005ec82) pinb_bg_pane_g3

0x0edc,	// (0x0005ec8e) pinb_bg_pane_g4

0x0ee8,	// (0x0005ec9a) pinb_bg_pane_g5

0x0ef4,	// (0x0005eca6) pinb_bg_pane_g6

0x0eff,	// (0x0005ecb1) pinb_bg_pane_g7

0x0f0a,	// (0x0005ecbc) pinb_bg_pane_g8

0x0f15,	// (0x0005ecc7) pinb_bg_pane_g9

0x0f1f,	// (0x0005ecd1) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0006cebc) pinb_bg_pane_g

0x0f3c,	// (0x0005ecee) grid_pinb_pane

0x0f47,	// (0x0005ecf9) list_pinb_pane

0x0f52,	// (0x0005ed04) scroll_pane_cp01_ParamLimits

0x0f52,	// (0x0005ed04) scroll_pane_cp01

0xa834,	// (0x000685e6) find_pinb_pane_g1_ParamLimits

0xa834,	// (0x000685e6) find_pinb_pane_g1

0xa84c,	// (0x000685fe) find_pinb_pane_t1

0xa85e,	// (0x00068610) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0006ced6) find_pinb_pane_t

0xa873,	// (0x00068625) input_focus_pane_cp01_ParamLimits

0xa873,	// (0x00068625) input_focus_pane_cp01

0x0f64,	// (0x0005ed16) cell_pinb_pane_ParamLimits

0x0f64,	// (0x0005ed16) cell_pinb_pane

0x0f89,	// (0x0005ed3b) cell_pinb_pane_g1_ParamLimits

0x0f89,	// (0x0005ed3b) cell_pinb_pane_g1

0x0f9e,	// (0x0005ed50) cell_pinb_pane_g2_ParamLimits

0x0f9e,	// (0x0005ed50) cell_pinb_pane_g2

0xa87f,	// (0x00068631) cell_pinb_pane_g3_ParamLimits

0xa87f,	// (0x00068631) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0006cedb) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0006cedb) cell_pinb_pane_g

0xa09e,	// (0x00067e50) grid_highlight_pane_cp01

0x0faa,	// (0x0005ed5c) list_pinb_item_pane_ParamLimits

0x0faa,	// (0x0005ed5c) list_pinb_item_pane

0xa09e,	// (0x00067e50) list_highlight_pane_cp02

0x0fc8,	// (0x0005ed7a) list_pinb_item_pane_g1_ParamLimits

0x0fc8,	// (0x0005ed7a) list_pinb_item_pane_g1

0x0fd5,	// (0x0005ed87) list_pinb_item_pane_g2_ParamLimits

0x0fd5,	// (0x0005ed87) list_pinb_item_pane_g2

0x0fe1,	// (0x0005ed93) list_pinb_item_pane_g3_ParamLimits

0x0fe1,	// (0x0005ed93) list_pinb_item_pane_g3

0x0ff2,	// (0x0005eda4) list_pinb_item_pane_g4_ParamLimits

0x0ff2,	// (0x0005eda4) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0006cee2) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0006cee2) list_pinb_item_pane_g

0x0ffe,	// (0x0005edb0) list_pinb_item_pane_t1_ParamLimits

0x0ffe,	// (0x0005edb0) list_pinb_item_pane_t1

0x102f,	// (0x0005ede1) calc_display_pane

0x104d,	// (0x0005edff) calc_paper_pane

0x1069,	// (0x0005ee1b) grid_calc_pane

0xa09e,	// (0x00067e50) bg_list_pane_cp01

0x1095,	// (0x0005ee47) clock_g1

0x109d,	// (0x0005ee4f) clock_g2

0x0001,

0xf139,	// (0x0006ceeb) clock_g

0x10a7,	// (0x0005ee59) clock_t1_ParamLimits

0x10a7,	// (0x0005ee59) clock_t1

0x10bc,	// (0x0005ee6e) clock_t2_ParamLimits

0x10bc,	// (0x0005ee6e) clock_t2

0x10ce,	// (0x0005ee80) clock_t3_ParamLimits

0x10ce,	// (0x0005ee80) clock_t3

0x10e0,	// (0x0005ee92) clock_t4_ParamLimits

0x10e0,	// (0x0005ee92) clock_t4

0x10f2,	// (0x0005eea4) clock_t5_ParamLimits

0x10f2,	// (0x0005eea4) clock_t5

0x1107,	// (0x0005eeb9) clock_t6_ParamLimits

0x1107,	// (0x0005eeb9) clock_t6

0x1119,	// (0x0005eecb) clock_t7_ParamLimits

0x1119,	// (0x0005eecb) clock_t7

0x112b,	// (0x0005eedd) clock_t8_ParamLimits

0x112b,	// (0x0005eedd) clock_t8

0x1141,	// (0x0005eef3) clock_t9_ParamLimits

0x1141,	// (0x0005eef3) clock_t9

0x0008,

0xf13e,	// (0x0006cef0) clock_t_ParamLimits

0xf13e,	// (0x0006cef0) clock_t

0xa88b,	// (0x0006863d) popup_clock_analogue_window_cp02

0xa88b,	// (0x0006863d) popup_clock_digital_window_cp01

0xa893,	// (0x00068645) listscroll_help_pane

0xa09e,	// (0x00067e50) phob_pre_status_pane

0xa89d,	// (0x0006864f) grid_qdial_pane

0xa804,	// (0x000685b6) listscroll_mce_pane

0xa804,	// (0x000685b6) bg_notes_pane

0xa8a7,	// (0x00068659) list_notes_pane

0x1157,	// (0x0005ef09) scroll_pane_cp06

0xa8b5,	// (0x00068667) bg_calc_paper_pane

0x1170,	// (0x0005ef22) list_calc_pane

0xa8c9,	// (0x0006867b) bg_calc_display_pane

0x118a,	// (0x0005ef3c) calc_display_pane_t1

0x119f,	// (0x0005ef51) calc_display_pane_t2

0x11b4,	// (0x0005ef66) calc_display_pane_t3

0x0002,

0xf151,	// (0x0006cf03) calc_display_pane_t

0x11c6,	// (0x0005ef78) cell_calc_pane_ParamLimits

0x11c6,	// (0x0005ef78) cell_calc_pane

0xa8d5,	// (0x00068687) bg_calc_paper_pane_g1

0xa8e1,	// (0x00068693) bg_calc_paper_pane_g2

0xa8ed,	// (0x0006869f) bg_calc_paper_pane_g3

0xa8f9,	// (0x000686ab) bg_calc_paper_pane_g4

0xa905,	// (0x000686b7) bg_calc_paper_pane_g5

0x11f5,	// (0x0005efa7) bg_calc_paper_pane_g6

0x1206,	// (0x0005efb8) bg_calc_paper_pane_g7

0x1217,	// (0x0005efc9) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0006cf0a) bg_calc_paper_pane_g

0x122a,	// (0x0005efdc) calc_bg_paper_pane_g9

0x123d,	// (0x0005efef) list_calc_item_pane_ParamLimits

0x123d,	// (0x0005efef) list_calc_item_pane

0xa911,	// (0x000686c3) list_calc_item_pane_g1

0x125e,	// (0x0005f010) list_calc_item_pane_t1_ParamLimits

0x125e,	// (0x0005f010) list_calc_item_pane_t1

0x1270,	// (0x0005f022) list_calc_item_pane_t2_ParamLimits

0x1270,	// (0x0005f022) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0006cf1b) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0006cf1b) list_calc_item_pane_t

0xa91e,	// (0x000686d0) cell_calc_pane_g1

0xa928,	// (0x000686da) grid_highlight_pane_cp02

0xa94a,	// (0x000686fc) bg_calc_display_pane_g1

0x12a0,	// (0x0005f052) bg_calc_display_pane_g2

0xa953,	// (0x00068705) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0006cf25) bg_calc_display_pane_g

0x12aa,	// (0x0005f05c) cell_qdial_pane_ParamLimits

0x12aa,	// (0x0005f05c) cell_qdial_pane

0x12c0,	// (0x0005f072) cell_qdial_pane_g1_ParamLimits

0x12c0,	// (0x0005f072) cell_qdial_pane_g1

0x12cd,	// (0x0005f07f) cell_qdial_pane_g2_ParamLimits

0x12cd,	// (0x0005f07f) cell_qdial_pane_g2

0xa95c,	// (0x0006870e) cell_qdial_pane_g3_ParamLimits

0xa95c,	// (0x0006870e) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0006cf2c) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0006cf2c) cell_qdial_pane_g

0x12eb,	// (0x0005f09d) cell_qdial_pane_t1_ParamLimits

0x12eb,	// (0x0005f09d) cell_qdial_pane_t1

0x1303,	// (0x0005f0b5) cell_qdial_pane_t2_ParamLimits

0x1303,	// (0x0005f0b5) cell_qdial_pane_t2

0x1316,	// (0x0005f0c8) cell_qdial_pane_t3_ParamLimits

0x1316,	// (0x0005f0c8) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0006cf35) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0006cf35) cell_qdial_pane_t

0xa09e,	// (0x00067e50) grid_highlight_pane_cp04

0xa968,	// (0x0006871a) thumbnail_qdial_pane_ParamLimits

0xa968,	// (0x0006871a) thumbnail_qdial_pane

0xa9c4,	// (0x00068776) list_help_pane

0xa9cd,	// (0x0006877f) scroll_pane_cp02

0x1329,	// (0x0005f0db) help_list_pane_t1_ParamLimits

0x1329,	// (0x0005f0db) help_list_pane_t1

0x1350,	// (0x0005f102) bg_notes_pane_g2

0x1358,	// (0x0005f10a) bg_notes_pane_g3

0x1360,	// (0x0005f112) notes_bg_pane_g1

0x1368,	// (0x0005f11a) notes_bg_pane_g4

0x1370,	// (0x0005f122) notes_bg_pane_g5

0x1378,	// (0x0005f12a) notes_bg_pane_g6

0x1380,	// (0x0005f132) notes_bg_pane_g7

0x1388,	// (0x0005f13a) notes_bg_pane_g8

0x1390,	// (0x0005f142) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0006cf53) notes_bg_pane_g

0x1398,	// (0x0005f14a) list_notes_text_pane_ParamLimits

0x1398,	// (0x0005f14a) list_notes_text_pane

0xa9d6,	// (0x00068788) list_notes_text_pane_g1

0x13c0,	// (0x0005f172) list_notes_text_pane_t1

0x13ce,	// (0x0005f180) listscroll_cale_week_pane

0x1404,	// (0x0005f1b6) bg_cale_heading_pane

0x142d,	// (0x0005f1df) bg_cale_pane_cp01

0x144f,	// (0x0005f201) cale_week_corner_pane

0x146e,	// (0x0005f220) cale_week_day_heading_pane

0x149c,	// (0x0005f24e) cale_week_scroll_pane_g1

0x14c0,	// (0x0005f272) cale_week_scroll_pane_g2

0x14d8,	// (0x0005f28a) cale_week_scroll_pane_g3

0x14f0,	// (0x0005f2a2) cale_week_scroll_pane_g4

0x1508,	// (0x0005f2ba) cale_week_scroll_pane_g5

0x1520,	// (0x0005f2d2) cale_week_scroll_pane_g6

0x1540,	// (0x0005f2f2) cale_week_scroll_pane_g7

0x1560,	// (0x0005f312) cale_week_scroll_pane_g8

0x1580,	// (0x0005f332) cale_week_scroll_pane_g9

0x159d,	// (0x0005f34f) cale_week_scroll_pane_g10

0x15ba,	// (0x0005f36c) cale_week_scroll_pane_g11

0x15d7,	// (0x0005f389) cale_week_scroll_pane_g12

0x15f4,	// (0x0005f3a6) cale_week_scroll_pane_g13

0x1619,	// (0x0005f3cb) cale_week_scroll_pane_g14

0x1642,	// (0x0005f3f4) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0006cf62) cale_week_scroll_pane_g

0x168b,	// (0x0005f43d) cale_week_time_pane

0x16ab,	// (0x0005f45d) grid_cale_week_pane

0xaa02,	// (0x000687b4) scroll_pane_cp08

0x16de,	// (0x0005f490) cell_cale_week_pane_ParamLimits

0x16de,	// (0x0005f490) cell_cale_week_pane

0x176e,	// (0x0005f520) cale_week_day_heading_pane_t1

0x17b6,	// (0x0005f568) cale_week_day_heading_pane_t2

0x1803,	// (0x0005f5b5) cale_week_day_heading_pane_t3

0x1850,	// (0x0005f602) cale_week_day_heading_pane_t4

0x189d,	// (0x0005f64f) cale_week_day_heading_pane_t5

0x18ea,	// (0x0005f69c) cale_week_day_heading_pane_t6

0x1937,	// (0x0005f6e9) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0006cf83) cale_week_day_heading_pane_t

0xaa24,	// (0x000687d6) bg_cale_side_pane

0x197f,	// (0x0005f731) cale_week_time_pane_t1

0x19c3,	// (0x0005f775) cale_week_time_pane_t2

0x1a07,	// (0x0005f7b9) cale_week_time_pane_t3

0x1a4b,	// (0x0005f7fd) cale_week_time_pane_t4

0x1a8f,	// (0x0005f841) cale_week_time_pane_t5

0x1ad3,	// (0x0005f885) cale_week_time_pane_t6

0x1b17,	// (0x0005f8c9) cale_week_time_pane_t7

0x1b63,	// (0x0005f915) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0006cf92) cale_week_time_pane_t

0x1bb1,	// (0x0005f963) cell_cale_week_pane_g2

0x1bd5,	// (0x0005f987) cell_cale_week_pane_g3_ParamLimits

0x1bd5,	// (0x0005f987) cell_cale_week_pane_g3

0xaa32,	// (0x000687e4) grid_highlight_pane_cp07

0xaa3a,	// (0x000687ec) listscroll_gms_pane

0xaa44,	// (0x000687f6) grid_gms_pane

0xaa4d,	// (0x000687ff) listscroll_gms_pane_g1

0xaa55,	// (0x00068807) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0006cfa3) listscroll_gms_pane_g

0x1bed,	// (0x0005f99f) scroll_pane_cp010

0x1bf8,	// (0x0005f9aa) cell_gms_pane_ParamLimits

0x1bf8,	// (0x0005f9aa) cell_gms_pane

0x1c0b,	// (0x0005f9bd) cell_gms_pane_g1

0xaa5d,	// (0x0006880f) cell_gms_pane_g2

0xaa65,	// (0x00068817) cell_gms_pane_g3

0xaa6e,	// (0x00068820) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0006cfa8) cell_gms_pane_g

0xaa77,	// (0x00068829) grid_highlight_pane_cp09

0x4311,	// (0x000620c3) phob_pre_status_pane_g1

0x4319,	// (0x000620cb) phob_pre_status_pane_g2

0x4321,	// (0x000620d3) phob_pre_status_pane_g3

0x4329,	// (0x000620db) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0006d393) phob_pre_status_pane_g

0x4339,	// (0x000620eb) phob_pre_status_pane_t1

0x4349,	// (0x000620fb) phob_pre_status_pane_t2

0x4359,	// (0x0006210b) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0006d39e) phob_pre_status_pane_t

0xaa7f,	// (0x00068831) bg_list_pane_cp05

0x1c1b,	// (0x0005f9cd) grid_vorec_pane

0x1c27,	// (0x0005f9d9) vorec_t1

0x1c35,	// (0x0005f9e7) vorec_t2

0x1c43,	// (0x0005f9f5) vorec_t3

0x1c51,	// (0x0005fa03) vorec_t4

0x9c0c,	// (0x000679be) vorec_t5

0x9c1a,	// (0x000679cc) vorec_t6

0x0004,

0xf1ff,	// (0x0006cfb1) vorec_t

0x9c28,	// (0x000679da) wait_bar_pane_cp01

0x1c6d,	// (0x0005fa1f) cell_vorec_pane_ParamLimits

0x1c6d,	// (0x0005fa1f) cell_vorec_pane

0x1c82,	// (0x0005fa34) cell_vorec_pane_g1

0xa09e,	// (0x00067e50) grid_highlight_pane_cp05

0x1c9a,	// (0x0005fa4c) cams_zoom_pane

0x1ca6,	// (0x0005fa58) image_vga_pane

0x1cb5,	// (0x0005fa67) main_camera_pane_g1

0x1cc3,	// (0x0005fa75) main_camera_pane_g2

0x1ccf,	// (0x0005fa81) main_camera_pane_g3

0x1cdd,	// (0x0005fa8f) main_camera_pane_g4

0x1ceb,	// (0x0005fa9d) main_camera_pane_g5

0x1cf9,	// (0x0005faab) main_camera_pane_g6

0x1d07,	// (0x0005fab9) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0006cfbc) main_camera_pane_g

0x1d15,	// (0x0005fac7) main_camera_pane_t1

0x1d27,	// (0x0005fad9) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0006cfcd) main_camera_pane_t

0x1d4a,	// (0x0005fafc) cams_zoom_pane_cp_ParamLimits

0x1d4a,	// (0x0005fafc) cams_zoom_pane_cp

0x1d6e,	// (0x0005fb20) image_cif_pane_ParamLimits

0x1d6e,	// (0x0005fb20) image_cif_pane

0x1d8c,	// (0x0005fb3e) image_subqcif_pane

0x1d96,	// (0x0005fb48) main_video_pane_g1_ParamLimits

0x1d96,	// (0x0005fb48) main_video_pane_g1

0x1db6,	// (0x0005fb68) main_video_pane_g2_ParamLimits

0x1db6,	// (0x0005fb68) main_video_pane_g2

0x1de6,	// (0x0005fb98) main_video_pane_g3_ParamLimits

0x1de6,	// (0x0005fb98) main_video_pane_g3

0x1e0f,	// (0x0005fbc1) main_video_pane_g4_ParamLimits

0x1e0f,	// (0x0005fbc1) main_video_pane_g4

0x1e38,	// (0x0005fbea) main_video_pane_g5_ParamLimits

0x1e38,	// (0x0005fbea) main_video_pane_g5

0xaa93,	// (0x00068845) main_video_pane_g6_ParamLimits

0xaa93,	// (0x00068845) main_video_pane_g6

0x0006,

0xf220,	// (0x0006cfd2) main_video_pane_g_ParamLimits

0xf220,	// (0x0006cfd2) main_video_pane_g

0x1e5a,	// (0x0005fc0c) main_video_pane_t1_ParamLimits

0x1e5a,	// (0x0005fc0c) main_video_pane_t1

0xaaad,	// (0x0006885f) cams_zoom_pane_g1

0xaab6,	// (0x00068868) cams_zoom_pane_g2

0xaabf,	// (0x00068871) cams_zoom_pane_g3

0xaac8,	// (0x0006887a) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0006cfe1) cams_zoom_pane_g

0x1ea4,	// (0x0005fc56) grid_cams_pane

0x1eb2,	// (0x0005fc64) linegrid_cams_pane

0x1ebe,	// (0x0005fc70) cell_cams_pane_ParamLimits

0x1ebe,	// (0x0005fc70) cell_cams_pane

0xaad1,	// (0x00068883) cams_burst_image_pane

0xaad9,	// (0x0006888b) cell_cams_pane_g1

0xa09e,	// (0x00067e50) grid_highlight_pane_cp03

0xa91e,	// (0x000686d0) mp_bg_pane_g1

0xa09e,	// (0x00067e50) bg_list_pane_cp03

0xc734,	// (0x0006a4e6) bg_mp_pane

0xc73c,	// (0x0006a4ee) grid_mp_pane

0xc744,	// (0x0006a4f6) media_player_g1

0xc74e,	// (0x0006a500) media_player_t1

0xc75c,	// (0x0006a50e) media_player_t2

0xc76a,	// (0x0006a51c) media_player_t3

0xc778,	// (0x0006a52a) media_player_t4

0xc786,	// (0x0006a538) media_player_t5

0xc794,	// (0x0006a546) media_player_t6

0xc7a2,	// (0x0006a554) media_player_t7

0x0006,

0xf5cb,	// (0x0006d37d) media_player_t

0xc7b0,	// (0x0006a562) wait_bar_pane_cp02

0xf5b0,	// (0x0006d362) main_usb_pane_t

0x4308,	// (0x000620ba) cell_mp_pane

0xa91e,	// (0x000686d0) cell_mp_pane_g1

0xa09e,	// (0x00067e50) grid_highlight_pane_cp06

0xaae1,	// (0x00068893) grid_skin_colour_pane

0xaae9,	// (0x0006889b) list_highlight_pane_cp03

0x1fd2,	// (0x0005fd84) skin_g1

0xaaf1,	// (0x000688a3) skin_t1

0xab00,	// (0x000688b2) skin_t2

0x0001,

0xf264,	// (0x0006d016) skin_t

0x1fdc,	// (0x0005fd8e) cell_skin_colour_pane_ParamLimits

0x1fdc,	// (0x0005fd8e) cell_skin_colour_pane

0xab0e,	// (0x000688c0) cell_skin_colour_pane_g1

0x205c,	// (0x0005fe0e) call_video_g1_ParamLimits

0x205c,	// (0x0005fe0e) call_video_g1

0x206c,	// (0x0005fe1e) call_video_g2_ParamLimits

0x206c,	// (0x0005fe1e) call_video_g2

0x0001,

0xf269,	// (0x0006d01b) call_video_g_ParamLimits

0xf269,	// (0x0006d01b) call_video_g

0x20bc,	// (0x0005fe6e) call_video_uplink_pane_cp1_ParamLimits

0x20bc,	// (0x0005fe6e) call_video_uplink_pane_cp1

0xab20,	// (0x000688d2) call_video_uplink_pane_cp2

0x218a,	// (0x0005ff3c) video_down_crop_pane_ParamLimits

0x218a,	// (0x0005ff3c) video_down_crop_pane

0x227c,	// (0x0006002e) video_down_pane_ParamLimits

0x227c,	// (0x0006002e) video_down_pane

0xab28,	// (0x000688da) video_down_subqcif_pane_ParamLimits

0xab28,	// (0x000688da) video_down_subqcif_pane

0xab42,	// (0x000688f4) video_down_subqcif_pane_cp_ParamLimits

0xab42,	// (0x000688f4) video_down_subqcif_pane_cp

0xab6a,	// (0x0006891c) im_reading_pane_ParamLimits

0xab6a,	// (0x0006891c) im_reading_pane

0x2399,	// (0x0006014b) im_writing_pane_ParamLimits

0x2399,	// (0x0006014b) im_writing_pane

0x23b7,	// (0x00060169) im_reading_pane_t1

0xab84,	// (0x00068936) list_im_pane

0xab95,	// (0x00068947) scroll_pane_cp07

0x23f9,	// (0x000601ab) im_writing_pane_t1_ParamLimits

0x23f9,	// (0x000601ab) im_writing_pane_t1

0xabae,	// (0x00068960) im_writing_pane_t2_ParamLimits

0xabae,	// (0x00068960) im_writing_pane_t2

0x0001,

0xf273,	// (0x0006d025) im_writing_pane_t_ParamLimits

0xf273,	// (0x0006d025) im_writing_pane_t

0xa09e,	// (0x00067e50) input_focus_pane_cp04

0xa09e,	// (0x00067e50) input_focus_pane_cp05

0x240b,	// (0x000601bd) list_im_single_pane_ParamLimits

0x240b,	// (0x000601bd) list_im_single_pane

0x2424,	// (0x000601d6) list_single_im_pane_t1

0x42cc,	// (0x0006207e) blid_accuracy_pane

0x42d4,	// (0x00062086) blid_compass_pane

0x42de,	// (0x00062090) main_location_t1

0x42ec,	// (0x0006209e) main_location_t2

0x42fa,	// (0x000620ac) main_location_t3

0x0002,

0xf5da,	// (0x0006d38c) main_location_t

0xa09e,	// (0x00067e50) aid_levels_location

0xa91e,	// (0x000686d0) blid_accuracy_pane_g1

0xa91e,	// (0x000686d0) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0006d087) blid_accuracy_pane_g

0xabf6,	// (0x000689a8) wml_content_pane

0xac34,	// (0x000689e6) wml_button_pane_ParamLimits

0xac34,	// (0x000689e6) wml_button_pane

0x2433,	// (0x000601e5) wml_list_single_large_pane_ParamLimits

0x2433,	// (0x000601e5) wml_list_single_large_pane

0x2455,	// (0x00060207) wml_list_single_medium_pane_ParamLimits

0x2455,	// (0x00060207) wml_list_single_medium_pane

0x2478,	// (0x0006022a) wml_list_single_small_pane_ParamLimits

0x2478,	// (0x0006022a) wml_list_single_small_pane

0xac48,	// (0x000689fa) wml_selection_box_pane_ParamLimits

0xac48,	// (0x000689fa) wml_selection_box_pane

0xac5b,	// (0x00068a0d) wml_list_single_pane_t1

0xac6a,	// (0x00068a1c) wml_list_single_medium_pane_t1

0xac79,	// (0x00068a2b) wml_list_single_large_pane_t1

0xac88,	// (0x00068a3a) input_focus_pane_cp02_ParamLimits

0xac88,	// (0x00068a3a) input_focus_pane_cp02

0xac9b,	// (0x00068a4d) wml_selection_box_pane_g1

0xaca4,	// (0x00068a56) wml_selection_box_pane_t1_ParamLimits

0xaca4,	// (0x00068a56) wml_selection_box_pane_t1

0xa804,	// (0x000685b6) bg_wml_button_pane_ParamLimits

0xa804,	// (0x000685b6) bg_wml_button_pane

0xacbc,	// (0x00068a6e) wml_button_pane_g1

0xacc4,	// (0x00068a76) wml_button_pane_t1

0xacbc,	// (0x00068a6e) wml_button_bg_pane_g1

0xacd4,	// (0x00068a86) wml_button_bg_pane_g2

0xacdc,	// (0x00068a8e) wml_button_bg_pane_g3

0xace4,	// (0x00068a96) wml_button_bg_pane_g4

0xacec,	// (0x00068a9e) wml_button_bg_pane_g5

0xacf4,	// (0x00068aa6) wml_button_bg_pane_g6

0xacfc,	// (0x00068aae) wml_button_bg_pane_g7

0xad04,	// (0x00068ab6) wml_button_bg_pane_g8

0xad0c,	// (0x00068abe) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006d02a) wml_button_bg_pane_g

0x24a0,	// (0x00060252) bg_list_pane_cp02

0xad14,	// (0x00068ac6) mce_header_pane_ParamLimits

0xad14,	// (0x00068ac6) mce_header_pane

0xad2a,	// (0x00068adc) mce_icon_pane

0xad2a,	// (0x00068adc) mce_image_pane

0xad33,	// (0x00068ae5) mce_text_pane_ParamLimits

0xad33,	// (0x00068ae5) mce_text_pane

0x24aa,	// (0x0006025c) scroll_pane_cp03

0xac2c,	// (0x000689de) scroll_pane_cp04

0xad46,	// (0x00068af8) scroll_pane_cp05_ParamLimits

0xad46,	// (0x00068af8) scroll_pane_cp05

0x24b4,	// (0x00060266) mce_header_field_pane_ParamLimits

0x24b4,	// (0x00060266) mce_header_field_pane

0x24d6,	// (0x00060288) mce_header_field_pane_2_ParamLimits

0x24d6,	// (0x00060288) mce_header_field_pane_2

0x24ec,	// (0x0006029e) mce_header_field_pane_3

0x24f4,	// (0x000602a6) list_single_mce_message_pane_ParamLimits

0x24f4,	// (0x000602a6) list_single_mce_message_pane

0x2513,	// (0x000602c5) list_single_mce_smart_pane_ParamLimits

0x2513,	// (0x000602c5) list_single_mce_smart_pane

0xad52,	// (0x00068b04) input_focus_pane_cp03

0xad5b,	// (0x00068b0d) list_header_data_pane

0x253d,	// (0x000602ef) mce_header_field_pane_t1

0x254d,	// (0x000602ff) list_single_mce_header_pane_ParamLimits

0x254d,	// (0x000602ff) list_single_mce_header_pane

0xad63,	// (0x00068b15) list_single_mce_header_pane_t1

0xad72,	// (0x00068b24) list_single_mce_message_pane_g1

0xad7a,	// (0x00068b2c) list_single_mce_message_pane_t1

0x2591,	// (0x00060343) bg_cale_heading_pane_cp01_ParamLimits

0x2591,	// (0x00060343) bg_cale_heading_pane_cp01

0xad88,	// (0x00068b3a) bg_cale_pane_cp02_ParamLimits

0xad88,	// (0x00068b3a) bg_cale_pane_cp02

0x25d8,	// (0x0006038a) cale_month_corner_pane

0x25f7,	// (0x000603a9) cale_month_day_heading_pane_ParamLimits

0x25f7,	// (0x000603a9) cale_month_day_heading_pane

0x264e,	// (0x00060400) cale_month_pane_g1_ParamLimits

0x264e,	// (0x00060400) cale_month_pane_g1

0x268a,	// (0x0006043c) cale_month_pane_g2_ParamLimits

0x268a,	// (0x0006043c) cale_month_pane_g2

0x26c2,	// (0x00060474) cale_month_pane_g3_ParamLimits

0x26c2,	// (0x00060474) cale_month_pane_g3

0x2716,	// (0x000604c8) cale_month_pane_g4_ParamLimits

0x2716,	// (0x000604c8) cale_month_pane_g4

0x276a,	// (0x0006051c) cale_month_pane_g5_ParamLimits

0x276a,	// (0x0006051c) cale_month_pane_g5

0x27be,	// (0x00060570) cale_month_pane_g6_ParamLimits

0x27be,	// (0x00060570) cale_month_pane_g6

0x2822,	// (0x000605d4) cale_month_pane_g7_ParamLimits

0x2822,	// (0x000605d4) cale_month_pane_g7

0x2886,	// (0x00060638) cale_month_pane_g8_ParamLimits

0x2886,	// (0x00060638) cale_month_pane_g8

0x28ea,	// (0x0006069c) cale_month_pane_g9_ParamLimits

0x28ea,	// (0x0006069c) cale_month_pane_g9

0x2942,	// (0x000606f4) cale_month_pane_g10_ParamLimits

0x2942,	// (0x000606f4) cale_month_pane_g10

0x2990,	// (0x00060742) cale_month_pane_g11_ParamLimits

0x2990,	// (0x00060742) cale_month_pane_g11

0x29dc,	// (0x0006078e) cale_month_pane_g12_ParamLimits

0x29dc,	// (0x0006078e) cale_month_pane_g12

0x2a2c,	// (0x000607de) cale_month_pane_g13_ParamLimits

0x2a2c,	// (0x000607de) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0006d03d) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0006d03d) cale_month_pane_g

0x2a7c,	// (0x0006082e) cale_month_week_pane

0x2a9c,	// (0x0006084e) grid_cale_month_pane_ParamLimits

0x2a9c,	// (0x0006084e) grid_cale_month_pane

0x2aea,	// (0x0006089c) cale_month_day_heading_pane_t1

0x2b6c,	// (0x0006091e) cale_month_day_heading_pane_t2

0x2bf9,	// (0x000609ab) cale_month_day_heading_pane_t3

0x2c86,	// (0x00060a38) cale_month_day_heading_pane_t4

0x2d13,	// (0x00060ac5) cale_month_day_heading_pane_t5

0x2da8,	// (0x00060b5a) cale_month_day_heading_pane_t6

0x2e45,	// (0x00060bf7) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006d058) cale_month_day_heading_pane_t

0xaa24,	// (0x000687d6) bg_cale_side_pane_cp01

0x2ee2,	// (0x00060c94) cale_month_week_pane_t1

0x2efb,	// (0x00060cad) cale_month_week_pane_t2

0x2f14,	// (0x00060cc6) cale_month_week_pane_t3

0x2f2d,	// (0x00060cdf) cale_month_week_pane_t4

0x2f46,	// (0x00060cf8) cale_month_week_pane_t5

0x2f61,	// (0x00060d13) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0006d067) cale_month_week_pane_t

0x2f82,	// (0x00060d34) cell_cale_month_pane_ParamLimits

0x2f82,	// (0x00060d34) cell_cale_month_pane

0x30ce,	// (0x00060e80) cell_cale_month_pane_g1

0x30da,	// (0x00060e8c) cell_cale_month_pane_t1_ParamLimits

0x30da,	// (0x00060e8c) cell_cale_month_pane_t1

0xaa32,	// (0x000687e4) grid_highlight_pane_cp08

0xa91e,	// (0x000686d0) main_smil_g1

0x30fa,	// (0x00060eac) smil_status_pane

0xadc7,	// (0x00068b79) smil_text_pane

0xc652,	// (0x0006a404) bg_popup_call3_rect_pane_g8

0xc65a,	// (0x0006a40c) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0006d320) bg_popup_call3_rect_pane_g

0xc8e8,	// (0x0006a69a) smil_status_volume_pane_g1

0x310d,	// (0x00060ebf) smil_status_pane_t1

0x46c0,	// (0x00062472) volume_smil_pane

0xadd1,	// (0x00068b83) list_smil_text_pane

0x3124,	// (0x00060ed6) scroll_pane_cp011

0x312f,	// (0x00060ee1) smil_text_list_pane_t1_ParamLimits

0x312f,	// (0x00060ee1) smil_text_list_pane_t1

0x3181,	// (0x00060f33) aid_volume_smil_ParamLimits

0x3181,	// (0x00060f33) aid_volume_smil

0xa91e,	// (0x000686d0) smil_volume_pane_g1

0xa91e,	// (0x000686d0) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0006d087) smil_volume_pane_g

0x13ce,	// (0x0005f180) listscroll_cale_day_pane

0xaddb,	// (0x00068b8d) bg_cale_pane

0xadf3,	// (0x00068ba5) list_cale_pane

0xae16,	// (0x00068bc8) scroll_pane_cp09

0xae27,	// (0x00068bd9) cale_bg_pane_g1

0xae2f,	// (0x00068be1) cale_bg_pane_g2

0xae37,	// (0x00068be9) cale_bg_pane_g3

0xae3f,	// (0x00068bf1) cale_bg_pane_g4

0xae47,	// (0x00068bf9) cale_bg_pane_g5

0xae4f,	// (0x00068c01) cale_bg_pane_g6

0xae57,	// (0x00068c09) cale_bg_pane_g7

0xae5f,	// (0x00068c11) cale_bg_pane_g8

0xae67,	// (0x00068c19) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0006d08c) cale_bg_pane_g

0x31a3,	// (0x00060f55) list_cale_time_pane_ParamLimits

0x31a3,	// (0x00060f55) list_cale_time_pane

0xae77,	// (0x00068c29) list_cale_time_pane_g1_ParamLimits

0xae77,	// (0x00068c29) list_cale_time_pane_g1

0xae83,	// (0x00068c35) list_cale_time_pane_g2_ParamLimits

0xae83,	// (0x00068c35) list_cale_time_pane_g2

0x31b7,	// (0x00060f69) list_cale_time_pane_g3_ParamLimits

0x31b7,	// (0x00060f69) list_cale_time_pane_g3

0x31c5,	// (0x00060f77) list_cale_time_pane_g4_ParamLimits

0x31c5,	// (0x00060f77) list_cale_time_pane_g4

0x31d3,	// (0x00060f85) list_cale_time_pane_g5_ParamLimits

0x31d3,	// (0x00060f85) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0006d09f) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0006d09f) list_cale_time_pane_g

0xae9d,	// (0x00068c4f) list_cale_time_pane_t1_ParamLimits

0xae9d,	// (0x00068c4f) list_cale_time_pane_t1

0xaec5,	// (0x00068c77) list_cale_time_pane_t2_ParamLimits

0xaec5,	// (0x00068c77) list_cale_time_pane_t2

0x359c,	// (0x0006134e) aid_blid_cardinal_pane

0x35de,	// (0x00061390) compass_pane_t4

0xaeed,	// (0x00068c9f) list_cale_time_pane_t4_ParamLimits

0xaeed,	// (0x00068c9f) list_cale_time_pane_t4

0x35ec,	// (0x0006139e) compass_pane_t5

0x35fc,	// (0x000613ae) compass_pane_t6

0x360a,	// (0x000613bc) compass_pane_t7

0xb34e,	// (0x00069100) navi_pane_cc_t1

0xb49b,	// (0x0006924d) aid_phob_thumbnail_center_pane

0x3dc8,	// (0x00061b7a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0006d0ac) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0006d0ac) list_cale_time_pane_t

0x9cf5,	// (0x00067aa7) bg_popup_window_pane_cp02_ParamLimits

0x9cf5,	// (0x00067aa7) bg_popup_window_pane_cp02

0xaf15,	// (0x00068cc7) heading_pane_cp01_ParamLimits

0xaf15,	// (0x00068cc7) heading_pane_cp01

0xaf21,	// (0x00068cd3) loc_req_pane_ParamLimits

0xaf21,	// (0x00068cd3) loc_req_pane

0xaf31,	// (0x00068ce3) loc_type_pane_ParamLimits

0xaf31,	// (0x00068ce3) loc_type_pane

0xaf43,	// (0x00068cf5) loc_type_pane_t1_ParamLimits

0xaf43,	// (0x00068cf5) loc_type_pane_t1

0xaf55,	// (0x00068d07) loc_type_pane_t2_ParamLimits

0xaf55,	// (0x00068d07) loc_type_pane_t2

0xaf67,	// (0x00068d19) loc_type_pane_t3_ParamLimits

0xaf67,	// (0x00068d19) loc_type_pane_t3

0x0002,

0xf301,	// (0x0006d0b3) loc_type_pane_t_ParamLimits

0xf301,	// (0x0006d0b3) loc_type_pane_t

0xaf79,	// (0x00068d2b) list_loc_req_pane

0xaf83,	// (0x00068d35) scroll_pane_cp012

0x31e1,	// (0x00060f93) list_single_loc_request_popup_menu_pane_ParamLimits

0x31e1,	// (0x00060f93) list_single_loc_request_popup_menu_pane

0xaf8e,	// (0x00068d40) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf8e,	// (0x00068d40) list_single_loc_request_popup_menu_pane_g1

0xaf9a,	// (0x00068d4c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf9a,	// (0x00068d4c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0006d0ba) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0006d0ba) list_single_loc_request_popup_menu_pane_g

0xafa6,	// (0x00068d58) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafa6,	// (0x00068d58) list_single_loc_request_popup_menu_pane_t1

0x31f3,	// (0x00060fa5) bg_popup_window_pane_cp03_ParamLimits

0x31f3,	// (0x00060fa5) bg_popup_window_pane_cp03

0x3201,	// (0x00060fb3) heading_loc_req_pane_ParamLimits

0x3201,	// (0x00060fb3) heading_loc_req_pane

0x320d,	// (0x00060fbf) popup_dyc_status_message_window_g1_ParamLimits

0x320d,	// (0x00060fbf) popup_dyc_status_message_window_g1

0x3219,	// (0x00060fcb) popup_dyc_status_message_window_t1_ParamLimits

0x3219,	// (0x00060fcb) popup_dyc_status_message_window_t1

0x322b,	// (0x00060fdd) popup_dyc_status_message_window_t2_ParamLimits

0x322b,	// (0x00060fdd) popup_dyc_status_message_window_t2

0x323d,	// (0x00060fef) popup_dyc_status_message_window_t3_ParamLimits

0x323d,	// (0x00060fef) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0006d0bf) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0006d0bf) popup_dyc_status_message_window_t

0xa09e,	// (0x00067e50) bg_heading_pane_cp01

0xafbc,	// (0x00068d6e) heading_loc_req_pane_g1

0xafc4,	// (0x00068d76) heading_loc_req_pane_g2

0xafcc,	// (0x00068d7e) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0006d0c6) heading_loc_req_pane_g

0xafd4,	// (0x00068d86) heading_loc_req_pane_t1

0xafe4,	// (0x00068d96) bg_popup_sub_pane_cp01_ParamLimits

0xafe4,	// (0x00068d96) bg_popup_sub_pane_cp01

0xaff2,	// (0x00068da4) popup_cale_events_window_g1_ParamLimits

0xaff2,	// (0x00068da4) popup_cale_events_window_g1

0xb012,	// (0x00068dc4) popup_cale_events_window_g2_ParamLimits

0xb012,	// (0x00068dc4) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0006d0fa) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0006d0fa) popup_cale_events_window_g

0xb032,	// (0x00068de4) popup_cale_events_window_t1_ParamLimits

0xb032,	// (0x00068de4) popup_cale_events_window_t1

0xb044,	// (0x00068df6) popup_cale_events_window_t2_ParamLimits

0xb044,	// (0x00068df6) popup_cale_events_window_t2

0xb082,	// (0x00068e34) popup_cale_events_window_t3_ParamLimits

0xb082,	// (0x00068e34) popup_cale_events_window_t3

0xb0bc,	// (0x00068e6e) popup_cale_events_window_t4_ParamLimits

0xb0bc,	// (0x00068e6e) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0006d0ff) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0006d0ff) popup_cale_events_window_t

0x3338,	// (0x000610ea) call_type_pane

0xb182,	// (0x00068f34) popup_call_status_window_g1

0x3344,	// (0x000610f6) popup_call_status_window_g2

0x3350,	// (0x00061102) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0006d108) popup_call_status_window_g

0xb0f2,	// (0x00068ea4) call_type_pane_g1

0xb0fb,	// (0x00068ead) call_type_pane_g2

0x0001,

0xf35d,	// (0x0006d10f) call_type_pane_g

0xa09e,	// (0x00067e50) bg_popup_sub_pane_cp02

0xb104,	// (0x00068eb6) listscroll_popup_wml_pane

0xb10c,	// (0x00068ebe) list_wml_pane

0xb116,	// (0x00068ec8) scroll_pane_cp013

0xb121,	// (0x00068ed3) list_single_graphic_popup_wml_pane_ParamLimits

0xb121,	// (0x00068ed3) list_single_graphic_popup_wml_pane

0xa91e,	// (0x000686d0) list_single_graphic_popup_wml_pane_g1

0xb135,	// (0x00068ee7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0006d114) list_single_graphic_popup_wml_pane_g

0xb190,	// (0x00068f42) list_single_graphic_popup_wml_pane_t1

0xb1a6,	// (0x00068f58) aid_call_pane

0xa7fc,	// (0x000685ae) popup_clock_analogue_window_g1

0xa7fc,	// (0x000685ae) popup_clock_analogue_window_g2

0x335c,	// (0x0006110e) popup_clock_analogue_window_g3

0x335c,	// (0x0006110e) popup_clock_analogue_window_g4

0xa91e,	// (0x000686d0) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0006d119) popup_clock_analogue_window_g

0x3364,	// (0x00061116) popup_clock_analogue_window_t1

0x3372,	// (0x00061124) clock_digital_number_pane_ParamLimits

0x3372,	// (0x00061124) clock_digital_number_pane

0x337e,	// (0x00061130) clock_digital_number_pane_cp02_ParamLimits

0x337e,	// (0x00061130) clock_digital_number_pane_cp02

0x338a,	// (0x0006113c) clock_digital_number_pane_cp03_ParamLimits

0x338a,	// (0x0006113c) clock_digital_number_pane_cp03

0x3396,	// (0x00061148) clock_digital_number_pane_cp04_ParamLimits

0x3396,	// (0x00061148) clock_digital_number_pane_cp04

0x33a2,	// (0x00061154) clock_digital_separator_pane_ParamLimits

0x33a2,	// (0x00061154) clock_digital_separator_pane

0x33ae,	// (0x00061160) popup_clock_digital_window_t1

0xa91e,	// (0x000686d0) clock_digital_number_pane_g1

0xa91e,	// (0x000686d0) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0006d087) clock_digital_number_pane_g

0xa91e,	// (0x000686d0) clock_digital_separator_pane_g1

0xa91e,	// (0x000686d0) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0006d087) clock_digital_separator_pane_g

0xa09e,	// (0x00067e50) bg_popup_window_pane_cp04

0xb1ae,	// (0x00068f60) heading_pane_cp03

0xb1b6,	// (0x00068f68) listscroll_popup_gms_pane

0xb1be,	// (0x00068f70) grid_large_graphic_popup_pane

0xb1c8,	// (0x00068f7a) listscroll_popup_gms_pane_g1

0xb1d0,	// (0x00068f82) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0006d124) listscroll_popup_gms_pane_g

0xac2c,	// (0x000689de) scroll_pane_cp014

0x33cb,	// (0x0006117d) cell_large_graphic_popup_pane_ParamLimits

0x33cb,	// (0x0006117d) cell_large_graphic_popup_pane

0x33e5,	// (0x00061197) cell_large_graphic_popup_pane_g1_ParamLimits

0x33e5,	// (0x00061197) cell_large_graphic_popup_pane_g1

0xb1d8,	// (0x00068f8a) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1d8,	// (0x00068f8a) cell_large_graphic_popup_pane_g2

0xb1e4,	// (0x00068f96) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1e4,	// (0x00068f96) cell_large_graphic_popup_pane_g3

0xb1f1,	// (0x00068fa3) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1f1,	// (0x00068fa3) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0006d129) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0006d129) cell_large_graphic_popup_pane_g

0xb201,	// (0x00068fb3) grid_highlight_pane_cp010

0xa91e,	// (0x000686d0) bg_popup_call_pane_g1

0xb20b,	// (0x00068fbd) list_single_graphic_popup_conf_pane_ParamLimits

0xb20b,	// (0x00068fbd) list_single_graphic_popup_conf_pane

0xb21d,	// (0x00068fcf) list_highlight_pane_cp01

0xb226,	// (0x00068fd8) list_single_graphic_popup_conf_pane_g1

0xb22e,	// (0x00068fe0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0006d132) list_single_graphic_popup_conf_pane_g

0xb236,	// (0x00068fe8) list_single_graphic_popup_conf_pane_t1

0xb244,	// (0x00068ff6) linegrid_cams_pane_g1

0x33f1,	// (0x000611a3) linegrid_cams_pane_g2

0xaa65,	// (0x00068817) linegrid_cams_pane_g3

0xb24d,	// (0x00068fff) linegrid_cams_pane_g4

0x33fa,	// (0x000611ac) linegrid_cams_pane_g5

0x3403,	// (0x000611b5) linegrid_cams_pane_g6

0xaa6e,	// (0x00068820) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0006d137) linegrid_cams_pane_g

0xb256,	// (0x00069008) popup_clock_analogue_window

0xb256,	// (0x00069008) popup_clock_digital_window

0xa09e,	// (0x00067e50) popup_phob_thumbnail_window

0xa91e,	// (0x000686d0) call_video_uplink_pane_g1

0xb25f,	// (0x00069011) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0006d146) call_video_uplink_pane_g

0xb267,	// (0x00069019) video_uplink_pane

0xb26f,	// (0x00069021) mce_image_pane_g1

0x340e,	// (0x000611c0) mce_image_pane_g2

0x3418,	// (0x000611ca) mce_image_pane_g3

0x3422,	// (0x000611d4) mce_image_pane_g4

0x342a,	// (0x000611dc) mce_image_pane_g5

0x0004,

0xf399,	// (0x0006d14b) mce_image_pane_g

0xb279,	// (0x0006902b) control_top_pane_stacon_cp01_ParamLimits

0xb279,	// (0x0006902b) control_top_pane_stacon_cp01

0xb28d,	// (0x0006903f) uni_indicator_pane_stacon_cp01_ParamLimits

0xb28d,	// (0x0006903f) uni_indicator_pane_stacon_cp01

0xb29e,	// (0x00069050) bg_popup_sub_pane_cp03

0x3432,	// (0x000611e4) chi_dic_find_pane

0x343a,	// (0x000611ec) listscroll_chi_dic_pane

0x3443,	// (0x000611f5) main_pane_chidic_g1

0x3456,	// (0x00061208) chi_dic_find_pane_t1

0xb2a8,	// (0x0006905a) find_chidic_pane

0xb2b1,	// (0x00069063) chi_dic_list_pane_ParamLimits

0xb2b1,	// (0x00069063) chi_dic_list_pane

0xb2c2,	// (0x00069074) scroll_pane_cp020

0x3464,	// (0x00061216) find_chidic_pane_t1

0xa09e,	// (0x00067e50) input_focus_pane_cp06

0x3473,	// (0x00061225) list_chi_dic_pane_ParamLimits

0x3473,	// (0x00061225) list_chi_dic_pane

0x3488,	// (0x0006123a) list_chi_dic_pane_t1_ParamLimits

0x3488,	// (0x0006123a) list_chi_dic_pane_t1

0xa09e,	// (0x00067e50) list_highlight_pane_cp020

0xb2ca,	// (0x0006907c) bg_cale_heading_pane_g1

0x349b,	// (0x0006124d) bg_cale_heading_pane_g2

0x34a3,	// (0x00061255) bg_cale_heading_pane_g3

0x34ab,	// (0x0006125d) bg_cale_heading_pane_g4

0x34b5,	// (0x00061267) bg_cale_heading_pane_g5

0x34bf,	// (0x00061271) bg_cale_heading_pane_g6

0x34c7,	// (0x00061279) bg_cale_heading_pane_g7

0x34cf,	// (0x00061281) bg_cale_heading_pane_g8

0x34d9,	// (0x0006128b) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0006d156) bg_cale_heading_pane_g

0xb2ca,	// (0x0006907c) bg_cale_side_pane_g1

0x34e3,	// (0x00061295) bg_cale_side_pane_g2

0x34ed,	// (0x0006129f) bg_cale_side_pane_g3

0x34f7,	// (0x000612a9) bg_cale_side_pane_g4

0x3501,	// (0x000612b3) bg_cale_side_pane_g5

0x350b,	// (0x000612bd) bg_cale_side_pane_g6

0x3515,	// (0x000612c7) bg_cale_side_pane_g7

0x351f,	// (0x000612d1) bg_cale_side_pane_g8

0x3527,	// (0x000612d9) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0006d169) bg_cale_side_pane_g

0x352f,	// (0x000612e1) popup_call_status_window_ParamLimits

0x352f,	// (0x000612e1) popup_call_status_window

0xb2d2,	// (0x00069084) stacon_top_pane

0xb2da,	// (0x0006908c) status_pane_ParamLimits

0xb2da,	// (0x0006908c) status_pane

0xb2ef,	// (0x000690a1) status_small_pane

0xb2f7,	// (0x000690a9) control_pane

0xa09e,	// (0x00067e50) stacon_bottom_pane

0xb2ff,	// (0x000690b1) list_single_mce_smart_pane_t1_ParamLimits

0xb2ff,	// (0x000690b1) list_single_mce_smart_pane_t1

0xb312,	// (0x000690c4) list_single_mce_smart_pane_t2_ParamLimits

0xb312,	// (0x000690c4) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0006d17c) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0006d17c) list_single_mce_smart_pane_t

0x353b,	// (0x000612ed) compass_pane

0x3546,	// (0x000612f8) main_location2_pane_t1

0x355c,	// (0x0006130e) main_location2_pane_t2

0x3572,	// (0x00061324) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0006d181) main_location2_pane_t

0xb331,	// (0x000690e3) compass_pane_g1_ParamLimits

0xb331,	// (0x000690e3) compass_pane_g1

0x35c0,	// (0x00061372) compass_pane_t1

0x35cf,	// (0x00061381) compass_pane_t2

0x0005,

0xf3d8,	// (0x0006d18a) compass_pane_t

0x361a,	// (0x000613cc) text_secondary_cp61

0xb345,	// (0x000690f7) navi_pane_cams_g5

0xb368,	// (0x0006911a) navi_pane_im_t1

0xb376,	// (0x00069128) navi_pane_mp_g1_ParamLimits

0xb376,	// (0x00069128) navi_pane_mp_g1

0xb38a,	// (0x0006913c) navi_pane_mp_g2_ParamLimits

0xb38a,	// (0x0006913c) navi_pane_mp_g2

0xb396,	// (0x00069148) navi_pane_mp_g3_ParamLimits

0xb396,	// (0x00069148) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0006d19e) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0006d19e) navi_pane_mp_g

0xb3a2,	// (0x00069154) navi_pane_mp_t1

0xb3b0,	// (0x00069162) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0006d1a5) navi_pane_mp_t

0xb3ec,	// (0x0006919e) navi_pane_vt_g1

0xb3a2,	// (0x00069154) navi_pane_vt_t1

0xb3f4,	// (0x000691a6) navi_slider_pane

0xaa7f,	// (0x00068831) zooming_pane

0xb3fc,	// (0x000691ae) navi_slider_pane_g1

0x374f,	// (0x00061501) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0006d1ac) navi_slider_pane_g

0xb420,	// (0x000691d2) aid_levels_zoom

0xb428,	// (0x000691da) zooming_pane_g1

0xb430,	// (0x000691e2) zooming_pane_g2

0xb430,	// (0x000691e2) zooming_pane_g3

0x0002,

0xf409,	// (0x0006d1bb) zooming_pane_g

0xb438,	// (0x000691ea) level_10_zoom

0xb441,	// (0x000691f3) level_11_zoom

0xb44a,	// (0x000691fc) level_1_zoom

0xb453,	// (0x00069205) level_2_zoom

0xb45c,	// (0x0006920e) level_3_zoom

0xb465,	// (0x00069217) level_4_zoom

0xb46e,	// (0x00069220) level_5_zoom

0xb477,	// (0x00069229) level_6_zoom

0xb480,	// (0x00069232) level_7_zoom

0xb489,	// (0x0006923b) level_8_zoom

0xb492,	// (0x00069244) level_9_zoom

0xb4a3,	// (0x00069255) popup_phob_thumbnail_window_g1

0xb4ab,	// (0x0006925d) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0006d1c2) popup_phob_thumbnail_window_g

0xc7b8,	// (0x0006a56a) level_1_location

0xc7c0,	// (0x0006a572) level_2_location

0xc7c8,	// (0x0006a57a) level_3_location

0xc7d0,	// (0x0006a582) level_4_location

0xaa7f,	// (0x00068831) level_5_location

0x3761,	// (0x00061513) mce_icon_pane_g1

0x3769,	// (0x0006151b) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0006d1c7) mce_icon_pane_g

0x3771,	// (0x00061523) main_mup_pane_g1_ParamLimits

0x3771,	// (0x00061523) main_mup_pane_g1

0x3789,	// (0x0006153b) main_mup_pane_g2_ParamLimits

0x3789,	// (0x0006153b) main_mup_pane_g2

0x37a5,	// (0x00061557) main_mup_pane_g3_ParamLimits

0x37a5,	// (0x00061557) main_mup_pane_g3

0x37c1,	// (0x00061573) main_mup_pane_g4_ParamLimits

0x37c1,	// (0x00061573) main_mup_pane_g4

0x37dd,	// (0x0006158f) main_mup_pane_g5_ParamLimits

0x37dd,	// (0x0006158f) main_mup_pane_g5

0x37fe,	// (0x000615b0) main_mup_pane_g6_ParamLimits

0x37fe,	// (0x000615b0) main_mup_pane_g6

0x381e,	// (0x000615d0) main_mup_pane_g7_ParamLimits

0x381e,	// (0x000615d0) main_mup_pane_g7

0x3842,	// (0x000615f4) main_mup_pane_g8_ParamLimits

0x3842,	// (0x000615f4) main_mup_pane_g8

0x3866,	// (0x00061618) main_mup_pane_g9_ParamLimits

0x3866,	// (0x00061618) main_mup_pane_g9

0x3889,	// (0x0006163b) main_mup_pane_g10_ParamLimits

0x3889,	// (0x0006163b) main_mup_pane_g10

0x38ac,	// (0x0006165e) main_mup_pane_g11_ParamLimits

0x38ac,	// (0x0006165e) main_mup_pane_g11

0x38cc,	// (0x0006167e) main_mup_pane_g12_ParamLimits

0x38cc,	// (0x0006167e) main_mup_pane_g12

0x38da,	// (0x0006168c) main_mup_pane_g13_ParamLimits

0x38da,	// (0x0006168c) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0006d1cc) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0006d1cc) main_mup_pane_g

0x38f0,	// (0x000616a2) main_mup_pane_t1_ParamLimits

0x38f0,	// (0x000616a2) main_mup_pane_t1

0x390f,	// (0x000616c1) main_mup_pane_t2_ParamLimits

0x390f,	// (0x000616c1) main_mup_pane_t2

0x3929,	// (0x000616db) main_mup_pane_t3_ParamLimits

0x3929,	// (0x000616db) main_mup_pane_t3

0x3943,	// (0x000616f5) main_mup_pane_t4_ParamLimits

0x3943,	// (0x000616f5) main_mup_pane_t4

0x3955,	// (0x00061707) main_mup_pane_t5_ParamLimits

0x3955,	// (0x00061707) main_mup_pane_t5

0x3967,	// (0x00061719) main_mup_pane_t6_ParamLimits

0x3967,	// (0x00061719) main_mup_pane_t6

0x0005,

0xf435,	// (0x0006d1e7) main_mup_pane_t_ParamLimits

0xf435,	// (0x0006d1e7) main_mup_pane_t

0x397d,	// (0x0006172f) mup_progress_pane_ParamLimits

0x397d,	// (0x0006172f) mup_progress_pane

0x3989,	// (0x0006173b) mup_visualizer_pane_ParamLimits

0x3989,	// (0x0006173b) mup_visualizer_pane

0x39c7,	// (0x00061779) mup_volume_pane_ParamLimits

0x39c7,	// (0x00061779) mup_volume_pane

0xb182,	// (0x00068f34) mup_visualizer_pane_g1_ParamLimits

0xb182,	// (0x00068f34) mup_visualizer_pane_g1

0xb182,	// (0x00068f34) mup_visualizer_pane_g2_ParamLimits

0xb182,	// (0x00068f34) mup_visualizer_pane_g2

0xb331,	// (0x000690e3) mup_visualizer_pane_g3_ParamLimits

0xb331,	// (0x000690e3) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0006d1f4) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0006d1f4) mup_visualizer_pane_g

0xa91e,	// (0x000686d0) mup_volume_pane_g1

0xb4bb,	// (0x0006926d) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0006d1fb) mup_volume_pane_g

0xa91e,	// (0x000686d0) mup_progress_pane_g1

0xb4c4,	// (0x00069276) mup_progress_pane_g2

0xb4cd,	// (0x0006927f) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0006d200) mup_progress_pane_g

0xa09e,	// (0x00067e50) bg_popup_window_pane_cp05

0xb4d6,	// (0x00069288) heading_pane_cp02_ParamLimits

0xb4d6,	// (0x00069288) heading_pane_cp02

0xb4f2,	// (0x000692a4) list_popup_blid_pane

0xb4fa,	// (0x000692ac) list_blid_sat_info_pane_ParamLimits

0xb4fa,	// (0x000692ac) list_blid_sat_info_pane

0xb50d,	// (0x000692bf) list_blid_sat_info_pane_g1

0xb515,	// (0x000692c7) list_blid_sat_info_pane_t1

0x3ae6,	// (0x00061898) mup_equalizer_pane_ParamLimits

0x3ae6,	// (0x00061898) mup_equalizer_pane

0x3b07,	// (0x000618b9) mup_equalizer_pane_cp1_ParamLimits

0x3b07,	// (0x000618b9) mup_equalizer_pane_cp1

0x3b28,	// (0x000618da) mup_equalizer_pane_cp2_ParamLimits

0x3b28,	// (0x000618da) mup_equalizer_pane_cp2

0x3b49,	// (0x000618fb) mup_equalizer_pane_cp3_ParamLimits

0x3b49,	// (0x000618fb) mup_equalizer_pane_cp3

0x3b6e,	// (0x00061920) mup_equalizer_pane_cp4_ParamLimits

0x3b6e,	// (0x00061920) mup_equalizer_pane_cp4

0x3b93,	// (0x00061945) mup_equalizer_pane_cp5

0x3bab,	// (0x0006195d) mup_equalizer_pane_cp6

0x3bc3,	// (0x00061975) mup_equalizer_pane_cp7

0xc6d2,	// (0x0006a484) bg_popup_call_poc_act_pane_g9

0xc6da,	// (0x0006a48c) bg_popup_call_poc_act_pane_g10

0xc6e2,	// (0x0006a494) bg_popup_call_poc_act_pane_g11

0x000a,

0xa804,	// (0x000685b6) mup_scale_pane

0xa91e,	// (0x000686d0) mup_scale_pane_g1

0xb523,	// (0x000692d5) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0006d21c) mup_scale_pane_g

0xb547,	// (0x000692f9) msg_data_pane

0xb54f,	// (0x00069301) scroll_pane_cp017

0x3bed,	// (0x0006199f) bg_list_pane_cp04_ParamLimits

0x3bed,	// (0x0006199f) bg_list_pane_cp04

0xb557,	// (0x00069309) msg_data_pane_g1

0x3c15,	// (0x000619c7) msg_data_pane_g2

0x3c1f,	// (0x000619d1) msg_data_pane_g3

0x3c29,	// (0x000619db) msg_data_pane_g4

0x3c31,	// (0x000619e3) msg_data_pane_g5

0x3c39,	// (0x000619eb) msg_data_pane_g6

0x3c41,	// (0x000619f3) msg_data_pane_g7

0x0006,

0xf479,	// (0x0006d22b) msg_data_pane_g

0x3c49,	// (0x000619fb) msg_text_pane_ParamLimits

0x3c49,	// (0x000619fb) msg_text_pane

0x3c71,	// (0x00061a23) qrid_highlight_pane_cp011_ParamLimits

0x3c71,	// (0x00061a23) qrid_highlight_pane_cp011

0xa09e,	// (0x00067e50) msg_body_pane

0xa09e,	// (0x00067e50) msg_header_pane

0xb568,	// (0x0006931a) input_focus_pane_cp07

0xb57d,	// (0x0006932f) msg_header_pane_t1_ParamLimits

0xb57d,	// (0x0006932f) msg_header_pane_t1

0xa293,	// (0x00068045) msg_header_pane_t2_ParamLimits

0xa293,	// (0x00068045) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0006d23f) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0006d23f) msg_header_pane_t

0xb58f,	// (0x00069341) msg_body_pane_g1

0x3c95,	// (0x00061a47) msg_body_pane_t1_ParamLimits

0x3c95,	// (0x00061a47) msg_body_pane_t1

0xa2a5,	// (0x00068057) msg_body_pane_t2_ParamLimits

0xa2a5,	// (0x00068057) msg_body_pane_t2

0xa2b7,	// (0x00068069) msg_body_pane_t3_ParamLimits

0xa2b7,	// (0x00068069) msg_body_pane_t3

0x0002,

0xf492,	// (0x0006d244) msg_body_pane_t_ParamLimits

0xf492,	// (0x0006d244) msg_body_pane_t

0x3d18,	// (0x00061aca) main_viewer_pane_g1_ParamLimits

0x3d18,	// (0x00061aca) main_viewer_pane_g1

0x3d24,	// (0x00061ad6) main_viewer_pane_g2_ParamLimits

0x3d24,	// (0x00061ad6) main_viewer_pane_g2

0x3d30,	// (0x00061ae2) main_viewer_pane_g3_ParamLimits

0x3d30,	// (0x00061ae2) main_viewer_pane_g3

0x3d41,	// (0x00061af3) main_viewer_pane_g4_ParamLimits

0x3d41,	// (0x00061af3) main_viewer_pane_g4

0x3d52,	// (0x00061b04) main_viewer_pane_g5_ParamLimits

0x3d52,	// (0x00061b04) main_viewer_pane_g5

0x3d52,	// (0x00061b04) main_viewer_pane_g7_ParamLimits

0x3d52,	// (0x00061b04) main_viewer_pane_g7

0x3d64,	// (0x00061b16) main_viewer_pane_g8_ParamLimits

0x3d64,	// (0x00061b16) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0006d254) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0006d254) main_viewer_pane_g

0xb597,	// (0x00069349) viewer_content_pane_ParamLimits

0xb597,	// (0x00069349) viewer_content_pane

0x3d9c,	// (0x00061b4e) main_postcard_pane_g1_ParamLimits

0x3d9c,	// (0x00061b4e) main_postcard_pane_g1

0x3daa,	// (0x00061b5c) main_postcard_pane_g2_ParamLimits

0x3daa,	// (0x00061b5c) main_postcard_pane_g2

0x3db8,	// (0x00061b6a) main_postcard_pane_g3_ParamLimits

0x3db8,	// (0x00061b6a) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0006d265) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0006d265) main_postcard_pane_g

0x3dc8,	// (0x00061b7a) main_postcard_pane_g4

0xc8fb,	// (0x0006a6ad) smil_status_volume_pane_g2

0x3df4,	// (0x00061ba6) postcard_pane_ParamLimits

0x3df4,	// (0x00061ba6) postcard_pane

0xb182,	// (0x00068f34) postcard_pane_g1_ParamLimits

0xb182,	// (0x00068f34) postcard_pane_g1

0x3e2e,	// (0x00061be0) postcard_pane_g2_ParamLimits

0x3e2e,	// (0x00061be0) postcard_pane_g2

0x3e3a,	// (0x00061bec) postcard_pane_g3_ParamLimits

0x3e3a,	// (0x00061bec) postcard_pane_g3

0xb5a5,	// (0x00069357) postcard_pane_g4_ParamLimits

0xb5a5,	// (0x00069357) postcard_pane_g4

0x3e46,	// (0x00061bf8) postcard_pane_g5_ParamLimits

0x3e46,	// (0x00061bf8) postcard_pane_g5

0x3e52,	// (0x00061c04) postcard_pane_g6_ParamLimits

0x3e52,	// (0x00061c04) postcard_pane_g6

0xb5b3,	// (0x00069365) postcard_pane_g7_ParamLimits

0xb5b3,	// (0x00069365) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0006d272) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0006d272) postcard_pane_g

0x3e60,	// (0x00061c12) main_mp2_pane_g1_ParamLimits

0x3e60,	// (0x00061c12) main_mp2_pane_g1

0x3e6e,	// (0x00061c20) main_mp2_pane_g2_ParamLimits

0x3e6e,	// (0x00061c20) main_mp2_pane_g2

0x3e7a,	// (0x00061c2c) main_mp2_pane_g3_ParamLimits

0x3e7a,	// (0x00061c2c) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0006d281) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0006d281) main_mp2_pane_g

0x3e86,	// (0x00061c38) main_mp2_pane_t1_ParamLimits

0x3e86,	// (0x00061c38) main_mp2_pane_t1

0x3e9d,	// (0x00061c4f) main_mp2_pane_t2_ParamLimits

0x3e9d,	// (0x00061c4f) main_mp2_pane_t2

0x3eb1,	// (0x00061c63) main_mp2_pane_t3_ParamLimits

0x3eb1,	// (0x00061c63) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0006d288) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0006d288) main_mp2_pane_t

0xb5c1,	// (0x00069373) pec_content_pane_ParamLimits

0xb5c1,	// (0x00069373) pec_content_pane

0xac2c,	// (0x000689de) scroll_pane_cp015

0xb5d3,	// (0x00069385) pec_attribute_pane_ParamLimits

0xb5d3,	// (0x00069385) pec_attribute_pane

0x3ec3,	// (0x00061c75) pec_content_pane_g1_ParamLimits

0x3ec3,	// (0x00061c75) pec_content_pane_g1

0xb5e3,	// (0x00069395) pec_content_pane_t1_ParamLimits

0xb5e3,	// (0x00069395) pec_content_pane_t1

0xb5f5,	// (0x000693a7) pec_content_pane_t2_ParamLimits

0xb5f5,	// (0x000693a7) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0006d28f) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0006d28f) pec_content_pane_t

0x3ecf,	// (0x00061c81) list_single_graphic_pane_cp01_ParamLimits

0x3ecf,	// (0x00061c81) list_single_graphic_pane_cp01

0xa804,	// (0x000685b6) bg_popup_sub_pane_cp04

0xb607,	// (0x000693b9) popup_mup_playback_window_g1

0xb613,	// (0x000693c5) popup_mup_playback_window_t1

0xb628,	// (0x000693da) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0006d294) popup_mup_playback_window_t

0xb65f,	// (0x00069411) main_image_pane_g1_ParamLimits

0xb65f,	// (0x00069411) main_image_pane_g1

0xb6a2,	// (0x00069454) scroll_pane_cp018_ParamLimits

0xb6a2,	// (0x00069454) scroll_pane_cp018

0xb6ba,	// (0x0006946c) scroll_pane_cp016_ParamLimits

0xb6ba,	// (0x0006946c) scroll_pane_cp016

0x3f5d,	// (0x00061d0f) smil2_image_pane_ParamLimits

0x3f5d,	// (0x00061d0f) smil2_image_pane

0x3f93,	// (0x00061d45) smil2_root_pane_ParamLimits

0x3f93,	// (0x00061d45) smil2_root_pane

0x3fbf,	// (0x00061d71) smil2_text_pane_ParamLimits

0x3fbf,	// (0x00061d71) smil2_text_pane

0xa09e,	// (0x00067e50) bg_list_pane_cp06

0xb6f6,	// (0x000694a8) grid_radio_pane

0xa09e,	// (0x00067e50) bg_popup_window_pane_cp06

0xb700,	// (0x000694b2) main_fmradio_pane_t1

0xb1ae,	// (0x00068f60) heading_pane_cp04

0xb70e,	// (0x000694c0) main_fmradio_pane_t2

0xc6ea,	// (0x0006a49c) popup_cale_lunar_info_window_g1

0xb71c,	// (0x000694ce) main_fmradio_pane_t3

0xc6f2,	// (0x0006a4a4) popup_cale_lunar_info_window_g2

0xb72c,	// (0x000694de) main_fmradio_pane_t4

0x0001,

0xb73a,	// (0x000694ec) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0006d36f) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0006d2a9) main_fmradio_pane_t

0xb748,	// (0x000694fa) wait_bar_pane_cp03

0xb750,	// (0x00069502) cell_fmradio_pane_ParamLimits

0xb750,	// (0x00069502) cell_fmradio_pane

0xb5b3,	// (0x00069365) cell_fmradio_pane_g1_ParamLimits

0xb5b3,	// (0x00069365) cell_fmradio_pane_g1

0xa09e,	// (0x00067e50) grid_highlight_pane_cp011

0xb765,	// (0x00069517) poc_content_pane_ParamLimits

0xb765,	// (0x00069517) poc_content_pane

0xb777,	// (0x00069529) scroll_pane_cp019

0x3fff,	// (0x00061db1) popup_call_poc_act_window_ParamLimits

0x3fff,	// (0x00061db1) popup_call_poc_act_window

0x400c,	// (0x00061dbe) popup_call_poc_inact_window_ParamLimits

0x400c,	// (0x00061dbe) popup_call_poc_inact_window

0xf594,	// (0x0006d346) bg_popup_call_poc_act_pane_g

0xc662,	// (0x0006a414) bg_popup_call_poc_inact_pane_g1

0xc66a,	// (0x0006a41c) bg_popup_call_poc_inact_pane_g2

0xb77f,	// (0x00069531) popup_call_poc_act_window_g2

0xc672,	// (0x0006a424) bg_popup_call_poc_inact_pane_g3

0xc67a,	// (0x0006a42c) bg_popup_call_poc_inact_pane_g4

0xc682,	// (0x0006a434) bg_popup_call_poc_inact_pane_g5

0xb787,	// (0x00069539) popup_call_poc_act_window_t1_ParamLimits

0xb787,	// (0x00069539) popup_call_poc_act_window_t1

0xb7af,	// (0x00069561) popup_call_poc_act_window_t2_ParamLimits

0xb7af,	// (0x00069561) popup_call_poc_act_window_t2

0xb7d7,	// (0x00069589) popup_call_poc_act_window_t3_ParamLimits

0xb7d7,	// (0x00069589) popup_call_poc_act_window_t3

0xb7ff,	// (0x000695b1) popup_call_poc_act_window_t4_ParamLimits

0xb7ff,	// (0x000695b1) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0006d2b4) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0006d2b4) popup_call_poc_act_window_t

0xc68a,	// (0x0006a43c) bg_popup_call_poc_inact_pane_g6

0xc692,	// (0x0006a444) bg_popup_call_poc_inact_pane_g7

0xc69a,	// (0x0006a44c) bg_popup_call_poc_inact_pane_g8

0xb811,	// (0x000695c3) popup_call_poc_inact_window_g2

0xc6a2,	// (0x0006a454) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0006d333) bg_popup_call_poc_inact_pane_g

0xb819,	// (0x000695cb) popup_call_poc_inact_window_t1_ParamLimits

0xb819,	// (0x000695cb) popup_call_poc_inact_window_t1

0xb82e,	// (0x000695e0) popup_call_poc_inact_window_t2_ParamLimits

0xb82e,	// (0x000695e0) popup_call_poc_inact_window_t2

0xb843,	// (0x000695f5) popup_call_poc_inact_window_t3_ParamLimits

0xb843,	// (0x000695f5) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0006d2bd) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0006d2bd) popup_call_poc_inact_window_t

0xc86e,	// (0x0006a620) context_pane_ParamLimits

0x461b,	// (0x000623cd) signal_pane_ParamLimits

0xaa7f,	// (0x00068831) main_call2_pane

0xc85c,	// (0x0006a60e) popup_phob_thumbnail2_window_ParamLimits

0xc85c,	// (0x0006a60e) popup_phob_thumbnail2_window

0x3cc6,	// (0x00061a78) aid_hotspot_pointer_arrow_pane

0x3cce,	// (0x00061a80) aid_hotspot_pointer_hand_pane

0x4331,	// (0x000620e3) phob_pre_status_pane_g5

0x1c9a,	// (0x0005fa4c) cams_zoom_pane_ParamLimits

0x1ca6,	// (0x0005fa58) image_vga_pane_ParamLimits

0x1cb5,	// (0x0005fa67) main_camera_pane_g1_ParamLimits

0x1cc3,	// (0x0005fa75) main_camera_pane_g2_ParamLimits

0x1ccf,	// (0x0005fa81) main_camera_pane_g3_ParamLimits

0x1cdd,	// (0x0005fa8f) main_camera_pane_g4_ParamLimits

0x1ceb,	// (0x0005fa9d) main_camera_pane_g5_ParamLimits

0x1cf9,	// (0x0005faab) main_camera_pane_g6_ParamLimits

0x1d07,	// (0x0005fab9) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0006cfbc) main_camera_pane_g_ParamLimits

0x1d15,	// (0x0005fac7) main_camera_pane_t1_ParamLimits

0x1d27,	// (0x0005fad9) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0006cfcd) main_camera_pane_t_ParamLimits

0xa804,	// (0x000685b6) bg_popup_preview_window_pane_cp01_ParamLimits

0xa804,	// (0x000685b6) bg_popup_preview_window_pane_cp01

0xb858,	// (0x0006960a) popup_phob_thumbnail2_window_g1_ParamLimits

0xb858,	// (0x0006960a) popup_phob_thumbnail2_window_g1

0xa09e,	// (0x00067e50) call2_cli_visual_pane

0x4028,	// (0x00061dda) popup_call2_audio_conf_window_ParamLimits

0x4028,	// (0x00061dda) popup_call2_audio_conf_window

0x4041,	// (0x00061df3) popup_call2_audio_first_window_ParamLimits

0x4041,	// (0x00061df3) popup_call2_audio_first_window

0x40df,	// (0x00061e91) popup_call2_audio_in_window_ParamLimits

0x40df,	// (0x00061e91) popup_call2_audio_in_window

0x4123,	// (0x00061ed5) popup_call2_audio_out_window_ParamLimits

0x4123,	// (0x00061ed5) popup_call2_audio_out_window

0x418d,	// (0x00061f3f) popup_call2_audio_second_window_ParamLimits

0x418d,	// (0x00061f3f) popup_call2_audio_second_window

0x41eb,	// (0x00061f9d) popup_call2_audio_wait_window_ParamLimits

0x41eb,	// (0x00061f9d) popup_call2_audio_wait_window

0xa09e,	// (0x00067e50) bg_popup_call2_act_pane_cp03

0xa7e6,	// (0x00068598) list_conf_pane_cp

0xb864,	// (0x00069616) popup_call2_audio_conf_window_t1

0xb872,	// (0x00069624) list_single_graphic_popup_conf2_pane_ParamLimits

0xb872,	// (0x00069624) list_single_graphic_popup_conf2_pane

0xb21d,	// (0x00068fcf) list_highlight_pane_cp04

0xb885,	// (0x00069637) list_single_graphic_popup_conf2_pane_g1

0xb22e,	// (0x00068fe0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0006d2c4) list_single_graphic_popup_conf2_pane_g

0xb88f,	// (0x00069641) list_single_graphic_popup_conf2_pane_t1

0xb89d,	// (0x0006964f) bg_popup_call2_act_pane_cp01_ParamLimits

0xb89d,	// (0x0006964f) bg_popup_call2_act_pane_cp01

0xb927,	// (0x000696d9) call_type_pane_cp05_ParamLimits

0xb927,	// (0x000696d9) call_type_pane_cp05

0xb97b,	// (0x0006972d) popup_call2_audio_second_window_g1_ParamLimits

0xb97b,	// (0x0006972d) popup_call2_audio_second_window_g1

0xb9cf,	// (0x00069781) popup_call2_audio_second_window_g2_ParamLimits

0xb9cf,	// (0x00069781) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0006d2c9) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0006d2c9) popup_call2_audio_second_window_g

0xba34,	// (0x000697e6) popup_call2_audio_second_window_t1_ParamLimits

0xba34,	// (0x000697e6) popup_call2_audio_second_window_t1

0xbaef,	// (0x000698a1) popup_call2_audio_second_window_t2_ParamLimits

0xbaef,	// (0x000698a1) popup_call2_audio_second_window_t2

0xbb42,	// (0x000698f4) popup_call2_audio_second_window_t3_ParamLimits

0xbb42,	// (0x000698f4) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0006d2d0) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0006d2d0) popup_call2_audio_second_window_t

0xa09e,	// (0x00067e50) bg_popup_call2_in_pane_cp02

0xa0a8,	// (0x00067e5a) call_type_pane_cp04

0xa0b0,	// (0x00067e62) popup_call2_audio_wait_window_g1

0xa0b8,	// (0x00067e6a) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006ceab) popup_call2_audio_wait_window_g

0xa0c0,	// (0x00067e72) popup_call2_audio_wait_window_t3

0xbc35,	// (0x000699e7) bg_popup_call2_act_pane_ParamLimits

0xbc35,	// (0x000699e7) bg_popup_call2_act_pane

0xbcf5,	// (0x00069aa7) call_type_pane_cp03_ParamLimits

0xbcf5,	// (0x00069aa7) call_type_pane_cp03

0xbd59,	// (0x00069b0b) popup_call2_audio_first_window_g1_ParamLimits

0xbd59,	// (0x00069b0b) popup_call2_audio_first_window_g1

0xbdc9,	// (0x00069b7b) popup_call2_audio_first_window_g2_ParamLimits

0xbdc9,	// (0x00069b7b) popup_call2_audio_first_window_g2

0xb182,	// (0x00068f34) popup_call2_audio_first_window_g3_ParamLimits

0xb182,	// (0x00068f34) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0006d2d9) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0006d2d9) popup_call2_audio_first_window_g

0xbea7,	// (0x00069c59) popup_call2_audio_first_window_t1_ParamLimits

0xbea7,	// (0x00069c59) popup_call2_audio_first_window_t1

0xbfaa,	// (0x00069d5c) popup_call2_audio_first_window_t4_ParamLimits

0xbfaa,	// (0x00069d5c) popup_call2_audio_first_window_t4

0xc08d,	// (0x00069e3f) popup_call2_audio_first_window_t5_ParamLimits

0xc08d,	// (0x00069e3f) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0006d2e4) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0006d2e4) popup_call2_audio_first_window_t

0xa7fc,	// (0x000685ae) bg_popup_call2_act_pane_g1

0xc6fc,	// (0x0006a4ae) popup_cale_lunar_info_window_t1

0xc70a,	// (0x0006a4bc) popup_cale_lunar_info_window_t2

0xc718,	// (0x0006a4ca) popup_cale_lunar_info_window_t3

0xa09e,	// (0x00067e50) bg_popup_call2_bubble_pane

0xc18e,	// (0x00069f40) bg_popup_call2_in_pane_cp01_ParamLimits

0xc18e,	// (0x00069f40) bg_popup_call2_in_pane_cp01

0x9d7a,	// (0x00067b2c) call_type_pane_cp02

0xc1d6,	// (0x00069f88) popup_call2_audio_out_window_g1_ParamLimits

0xc1d6,	// (0x00069f88) popup_call2_audio_out_window_g1

0xc202,	// (0x00069fb4) popup_call2_audio_out_window_g2_ParamLimits

0xc202,	// (0x00069fb4) popup_call2_audio_out_window_g2

0xc22a,	// (0x00069fdc) popup_call2_audio_out_window_g3_ParamLimits

0xc22a,	// (0x00069fdc) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0006d2ed) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0006d2ed) popup_call2_audio_out_window_g

0xc265,	// (0x0006a017) popup_call2_audio_out_window_t1_ParamLimits

0xc265,	// (0x0006a017) popup_call2_audio_out_window_t1

0xc2c4,	// (0x0006a076) popup_call2_audio_out_window_t2_ParamLimits

0xc2c4,	// (0x0006a076) popup_call2_audio_out_window_t2

0xc318,	// (0x0006a0ca) popup_call2_audio_out_window_t3_ParamLimits

0xc318,	// (0x0006a0ca) popup_call2_audio_out_window_t3

0xc32e,	// (0x0006a0e0) popup_call2_audio_out_window_t4_ParamLimits

0xc32e,	// (0x0006a0e0) popup_call2_audio_out_window_t4

0xc344,	// (0x0006a0f6) popup_call2_audio_out_window_t5_ParamLimits

0xc344,	// (0x0006a0f6) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0006d2f6) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0006d2f6) popup_call2_audio_out_window_t

0xc3a8,	// (0x0006a15a) bg_popup_call2_in_pane_ParamLimits

0xc3a8,	// (0x0006a15a) bg_popup_call2_in_pane

0xc404,	// (0x0006a1b6) popup_call2_audio_in_window_g1_ParamLimits

0xc404,	// (0x0006a1b6) popup_call2_audio_in_window_g1

0xc43c,	// (0x0006a1ee) popup_call2_audio_in_window_g2_ParamLimits

0xc43c,	// (0x0006a1ee) popup_call2_audio_in_window_g2

0xc474,	// (0x0006a226) popup_call2_audio_in_window_g3_ParamLimits

0xc474,	// (0x0006a226) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0006d303) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0006d303) popup_call2_audio_in_window_g

0xc4cc,	// (0x0006a27e) popup_call2_audio_in_window_t1_ParamLimits

0xc4cc,	// (0x0006a27e) popup_call2_audio_in_window_t1

0xc54c,	// (0x0006a2fe) popup_call2_audio_in_window_t2_ParamLimits

0xc54c,	// (0x0006a2fe) popup_call2_audio_in_window_t2

0xc5cc,	// (0x0006a37e) popup_call2_audio_in_window_t3_ParamLimits

0xc5cc,	// (0x0006a37e) popup_call2_audio_in_window_t3

0xc5e6,	// (0x0006a398) popup_call2_audio_in_window_t4_ParamLimits

0xc5e6,	// (0x0006a398) popup_call2_audio_in_window_t4

0xc5f8,	// (0x0006a3aa) popup_call2_audio_in_window_t5_ParamLimits

0xc5f8,	// (0x0006a3aa) popup_call2_audio_in_window_t5

0xc60d,	// (0x0006a3bf) popup_call2_audio_in_window_t6_ParamLimits

0xc60d,	// (0x0006a3bf) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0006d30c) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0006d30c) popup_call2_audio_in_window_t

0xa7fc,	// (0x000685ae) bg_popup_call2_in_pane_g1

0xc726,	// (0x0006a4d8) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0006d374) popup_cale_lunar_info_window_t

0xa804,	// (0x000685b6) bg_popup_call2_rect_pane_ParamLimits

0xa804,	// (0x000685b6) bg_popup_call2_rect_pane

0xa09e,	// (0x00067e50) call2_cli_visual_graphic_pane

0xa09e,	// (0x00067e50) call2_cli_visual_text_pane

0x46b3,	// (0x00062465) smil_status_volume_pane_g3

0x0002,

0xa91e,	// (0x000686d0) call2_cli_visual_graphic_pane_g1

0xa91e,	// (0x000686d0) call2_cli_visual_graphic_pane_g2

0xa91e,	// (0x000686d0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0006d319) call2_cli_visual_graphic_pane_g

0xc622,	// (0x0006a3d4) bg_popup_call2_rect_pane_g1

0xa9bc,	// (0x0006876e) bg_popup_call2_rect_pane_g2

0xc62a,	// (0x0006a3dc) bg_popup_call2_rect_pane_g3

0xc632,	// (0x0006a3e4) bg_popup_call2_rect_pane_g4

0xc63a,	// (0x0006a3ec) bg_popup_call2_rect_pane_g5

0xc642,	// (0x0006a3f4) bg_popup_call2_rect_pane_g6

0xc64a,	// (0x0006a3fc) bg_popup_call2_rect_pane_g7

0xc652,	// (0x0006a404) bg_popup_call2_rect_pane_g8

0xc65a,	// (0x0006a40c) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0006d320) bg_popup_call2_rect_pane_g

0xc662,	// (0x0006a414) bg_popup_call2_bubble_pane_g1

0xc66a,	// (0x0006a41c) bg_popup_call2_bubble_pane_g2

0xc672,	// (0x0006a424) bg_popup_call2_bubble_pane_g3

0xc67a,	// (0x0006a42c) bg_popup_call2_bubble_pane_g4

0xc682,	// (0x0006a434) bg_popup_call2_bubble_pane_g5

0xc68a,	// (0x0006a43c) bg_popup_call2_bubble_pane_g6

0xc692,	// (0x0006a444) bg_popup_call2_bubble_pane_g7

0xc69a,	// (0x0006a44c) bg_popup_call2_bubble_pane_g8

0xc6a2,	// (0x0006a454) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0006d333) bg_popup_call2_bubble_pane_g

0x13ea,	// (0x0005f19c) aid_cale_week_size_cell_pane

0x1d3b,	// (0x0005faed) aid_cams_cif_uncrop_pane_ParamLimits

0x1d3b,	// (0x0005faed) aid_cams_cif_uncrop_pane

0x1e98,	// (0x0005fc4a) aid_cams_size_cell_ParamLimits

0x1e98,	// (0x0005fc4a) aid_cams_size_cell

0x1ea4,	// (0x0005fc56) grid_cams_pane_ParamLimits

0x1eb2,	// (0x0005fc64) linegrid_cams_pane_ParamLimits

0x2082,	// (0x0005fe34) call_video_pane_t1

0x209f,	// (0x0005fe51) call_video_pane_t2

0x0001,

0xf26e,	// (0x0006d020) call_video_pane_t

0x256b,	// (0x0006031d) aid_cale_month_size_cell_pane_ParamLimits

0x256b,	// (0x0006031d) aid_cale_month_size_cell_pane

0xf60b,	// (0x0006d3bd) smil_status_volume_pane_g

0x46c0,	// (0x00062472) volume_smil_pane_ParamLimits

0x9c44,	// (0x000679f6) aid_popup2_width_pane

0x12de,	// (0x0005f090) cell_qdial_pane_g4_ParamLimits

0x12de,	// (0x0005f090) cell_qdial_pane_g4

0x359c,	// (0x0006134e) aid_blid_cardinal_pane_ParamLimits

0x35ac,	// (0x0006135e) aid_blid_destination_pane_ParamLimits

0x35ac,	// (0x0006135e) aid_blid_destination_pane

0xa804,	// (0x000685b6) bg_popup_call_poc_act_pane_ParamLimits

0xa804,	// (0x000685b6) bg_popup_call_poc_act_pane

0xa804,	// (0x000685b6) bg_popup_call_poc_inact_pane_ParamLimits

0xa804,	// (0x000685b6) bg_popup_call_poc_inact_pane

0xc6aa,	// (0x0006a45c) bg_popup_call_poc_act_pane_g1

0xc6b2,	// (0x0006a464) bg_popup_call_poc_act_pane_g2

0xc6ba,	// (0x0006a46c) bg_popup_call_poc_act_pane_g3

0xc67a,	// (0x0006a42c) bg_popup_call_poc_act_pane_g4

0xc682,	// (0x0006a434) bg_popup_call_poc_act_pane_g5

0xc6c2,	// (0x0006a474) bg_popup_call_poc_act_pane_g6

0xc692,	// (0x0006a444) bg_popup_call_poc_act_pane_g7

0xc6ca,	// (0x0006a47c) bg_popup_call_poc_act_pane_g8

0xa09e,	// (0x00067e50) main_usb_pane

0xc833,	// (0x0006a5e5) popup_cale_lunar_info_window

0x23b7,	// (0x00060169) im_reading_pane_t1_ParamLimits

0xab84,	// (0x00068936) list_im_pane_ParamLimits

0xab95,	// (0x00068947) scroll_pane_cp07_ParamLimits

0xa09e,	// (0x00067e50) grid_highlight_pane_cp012

0xa804,	// (0x000685b6) mup_scale_pane_ParamLimits

0xb182,	// (0x00068f34) main_usb_pane_g1_ParamLimits

0xb182,	// (0x00068f34) main_usb_pane_g1

0x4254,	// (0x00062006) main_usb_pane_g2_ParamLimits

0x4254,	// (0x00062006) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0006d35d) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0006d35d) main_usb_pane_g

0x4260,	// (0x00062012) main_usb_pane_t1_ParamLimits

0x4260,	// (0x00062012) main_usb_pane_t1

0x4272,	// (0x00062024) main_usb_pane_t2_ParamLimits

0x4272,	// (0x00062024) main_usb_pane_t2

0x4284,	// (0x00062036) main_usb_pane_t3_ParamLimits

0x4284,	// (0x00062036) main_usb_pane_t3

0x4296,	// (0x00062048) main_usb_pane_t4_ParamLimits

0x4296,	// (0x00062048) main_usb_pane_t4

0x42a8,	// (0x0006205a) main_usb_pane_t5_ParamLimits

0x42a8,	// (0x0006205a) main_usb_pane_t5

0x42ba,	// (0x0006206c) main_usb_pane_t6_ParamLimits

0x42ba,	// (0x0006206c) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0006d362) main_usb_pane_t_ParamLimits

0x353b,	// (0x000612ed) aid_text_placing

0x3546,	// (0x000612f8) main_location2_pane_t1_ParamLimits

0x355c,	// (0x0006130e) main_location2_pane_t2_ParamLimits

0x3572,	// (0x00061324) main_location2_pane_t3_ParamLimits

0x3588,	// (0x0006133a) main_location2_pane_t4_ParamLimits

0x3588,	// (0x0006133a) main_location2_pane_t4

0xf3cf,	// (0x0006d181) main_location2_pane_t_ParamLimits

0xa840,	// (0x000685f2) find_pinb_pane_g2_ParamLimits

0xa840,	// (0x000685f2) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0006ced1) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0006ced1) find_pinb_pane_g

0xa84c,	// (0x000685fe) find_pinb_pane_t1_ParamLimits

0xa85e,	// (0x00068610) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0006ced6) find_pinb_pane_t_ParamLimits

0xa09e,	// (0x00067e50) main_call3_pane

0x2aea,	// (0x0006089c) cale_month_day_heading_pane_t1_ParamLimits

0x2b6c,	// (0x0006091e) cale_month_day_heading_pane_t2_ParamLimits

0x2bf9,	// (0x000609ab) cale_month_day_heading_pane_t3_ParamLimits

0x2c86,	// (0x00060a38) cale_month_day_heading_pane_t4_ParamLimits

0x2d13,	// (0x00060ac5) cale_month_day_heading_pane_t5_ParamLimits

0x2da8,	// (0x00060b5a) cale_month_day_heading_pane_t6_ParamLimits

0x2e45,	// (0x00060bf7) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006d058) cale_month_day_heading_pane_t_ParamLimits

0x311b,	// (0x00060ecd) smil_status_volume_pane

0x3e12,	// (0x00061bc4) postcard_address_pane_ParamLimits

0x3e12,	// (0x00061bc4) postcard_address_pane

0x3e20,	// (0x00061bd2) postcard_message_pane_ParamLimits

0x3e20,	// (0x00061bd2) postcard_message_pane

0x422a,	// (0x00061fdc) call2_cli_visual_pane_t1_ParamLimits

0x422a,	// (0x00061fdc) call2_cli_visual_pane_t1

0x481f,	// (0x000625d1) postcard_message_pane_t1_ParamLimits

0x481f,	// (0x000625d1) postcard_message_pane_t1

0x4808,	// (0x000625ba) postcard_address_pane_t1_ParamLimits

0x4808,	// (0x000625ba) postcard_address_pane_t1

0x47f9,	// (0x000625ab) popup_call3_audio_in_window_ParamLimits

0x47f9,	// (0x000625ab) popup_call3_audio_in_window

0x46d7,	// (0x00062489) bg_popup_call3_in_pane_ParamLimits

0x46d7,	// (0x00062489) bg_popup_call3_in_pane

0x473f,	// (0x000624f1) popup_call3_audio_in_window_g1_ParamLimits

0x473f,	// (0x000624f1) popup_call3_audio_in_window_g1

0x4757,	// (0x00062509) popup_call3_audio_in_window_g2_ParamLimits

0x4757,	// (0x00062509) popup_call3_audio_in_window_g2

0x476f,	// (0x00062521) popup_call3_audio_in_window_g3_ParamLimits

0x476f,	// (0x00062521) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0006d3c4) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0006d3c4) popup_call3_audio_in_window_g

0x4797,	// (0x00062549) popup_call3_audio_in_window_t1_ParamLimits

0x4797,	// (0x00062549) popup_call3_audio_in_window_t1

0x47bf,	// (0x00062571) popup_call3_audio_in_window_t2_ParamLimits

0x47bf,	// (0x00062571) popup_call3_audio_in_window_t2

0x47e7,	// (0x00062599) popup_call3_audio_in_window_t3_ParamLimits

0x47e7,	// (0x00062599) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0006d3cd) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0006d3cd) popup_call3_audio_in_window_t

0xaa7f,	// (0x00068831) bg_popup_call3_rect_pane

0xc622,	// (0x0006a3d4) bg_popup_call3_rect_pane_g1

0xa9bc,	// (0x0006876e) bg_popup_call3_rect_pane_g2

0xc62a,	// (0x0006a3dc) bg_popup_call3_rect_pane_g3

0xc632,	// (0x0006a3e4) bg_popup_call3_rect_pane_g4

0xc63a,	// (0x0006a3ec) bg_popup_call3_rect_pane_g5

0xc642,	// (0x0006a3f4) bg_popup_call3_rect_pane_g6

0xc64a,	// (0x0006a3fc) bg_popup_call3_rect_pane_g7

0x39e2,	// (0x00061794) mup_visualizer_osc_pane

0xb4b3,	// (0x00069265) mup_visualizer_spec_pane

0x46f7,	// (0x000624a9) call3_video_qcif_pane_ParamLimits

0x46f7,	// (0x000624a9) call3_video_qcif_pane

0x4709,	// (0x000624bb) call3_video_qcif_uncrop_pane_ParamLimits

0x4709,	// (0x000624bb) call3_video_qcif_uncrop_pane

0x4719,	// (0x000624cb) call3_video_subqcif_pane_ParamLimits

0x4719,	// (0x000624cb) call3_video_subqcif_pane

0x472d,	// (0x000624df) call3_video_subqcif_uncrop_pane_ParamLimits

0x472d,	// (0x000624df) call3_video_subqcif_uncrop_pane

0x4787,	// (0x00062539) popup_call3_audio_in_window_g4_ParamLimits

0x4787,	// (0x00062539) popup_call3_audio_in_window_g4

0x46a2,	// (0x00062454) mup_spec_half_pane

0x46ab,	// (0x0006245d) mup_spec_half_pane_cp

0xc8ce,	// (0x0006a680) mup_osc_middle_pane

0xc8d7,	// (0x0006a689) mup_visualizer_osc_pane_g1

0x4682,	// (0x00062434) mup_spec_bar_pane_ParamLimits

0x4682,	// (0x00062434) mup_spec_bar_pane

0xc8bb,	// (0x0006a66d) mup_spec_bar_pane_g1

0xc8c5,	// (0x0006a677) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0006d3b8) mup_spec_bar_pane_g

0x13ea,	// (0x0005f19c) aid_cale_week_size_cell_pane_ParamLimits

0x1404,	// (0x0005f1b6) bg_cale_heading_pane_ParamLimits

0x142d,	// (0x0005f1df) bg_cale_pane_cp01_ParamLimits

0x144f,	// (0x0005f201) cale_week_corner_pane_ParamLimits

0x146e,	// (0x0005f220) cale_week_day_heading_pane_ParamLimits

0x149c,	// (0x0005f24e) cale_week_scroll_pane_g1_ParamLimits

0x14c0,	// (0x0005f272) cale_week_scroll_pane_g2_ParamLimits

0x14d8,	// (0x0005f28a) cale_week_scroll_pane_g3_ParamLimits

0x14f0,	// (0x0005f2a2) cale_week_scroll_pane_g4_ParamLimits

0x1508,	// (0x0005f2ba) cale_week_scroll_pane_g5_ParamLimits

0x1520,	// (0x0005f2d2) cale_week_scroll_pane_g6_ParamLimits

0x1540,	// (0x0005f2f2) cale_week_scroll_pane_g7_ParamLimits

0x1560,	// (0x0005f312) cale_week_scroll_pane_g8_ParamLimits

0x1580,	// (0x0005f332) cale_week_scroll_pane_g9_ParamLimits

0x159d,	// (0x0005f34f) cale_week_scroll_pane_g10_ParamLimits

0x15ba,	// (0x0005f36c) cale_week_scroll_pane_g11_ParamLimits

0x15d7,	// (0x0005f389) cale_week_scroll_pane_g12_ParamLimits

0x15f4,	// (0x0005f3a6) cale_week_scroll_pane_g13_ParamLimits

0x1619,	// (0x0005f3cb) cale_week_scroll_pane_g14_ParamLimits

0x1642,	// (0x0005f3f4) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0006cf62) cale_week_scroll_pane_g_ParamLimits

0x168b,	// (0x0005f43d) cale_week_time_pane_ParamLimits

0x16ab,	// (0x0005f45d) grid_cale_week_pane_ParamLimits

0xa9f0,	// (0x000687a2) listscroll_cale_week_pane_t1

0xaa02,	// (0x000687b4) scroll_pane_cp08_ParamLimits

0x25d8,	// (0x0006038a) cale_month_corner_pane_ParamLimits

0xadb5,	// (0x00068b67) cale_month_pane_t1

0x2a7c,	// (0x0006082e) cale_month_week_pane_ParamLimits

0xb182,	// (0x00068f34) popup_call_status_window_g1_ParamLimits

0x3344,	// (0x000610f6) popup_call_status_window_g2_ParamLimits

0x3350,	// (0x00061102) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0006d108) popup_call_status_window_g_ParamLimits

0xb19e,	// (0x00068f50) aid_call2_pane

0x3c87,	// (0x00061a39) msg_header_pane_g1

0x3e12,	// (0x00061bc4) postcard_address2_pane_ParamLimits

0x3e12,	// (0x00061bc4) postcard_address2_pane

0x3e20,	// (0x00061bd2) postcard_message2_pane_ParamLimits

0x3e20,	// (0x00061bd2) postcard_message2_pane

0x4629,	// (0x000623db) message2_row_pane_ParamLimits

0x4629,	// (0x000623db) message2_row_pane

0x4643,	// (0x000623f5) address2_row_pane_ParamLimits

0x4643,	// (0x000623f5) address2_row_pane

0xc889,	// (0x0006a63b) postcard_message2_row_pane_g1

0xc891,	// (0x0006a643) postcard_message2_row_pane_t1

0xc889,	// (0x0006a63b) address2_row_pane_g1

0xc891,	// (0x0006a643) address2_row_pane_t1

0x1c13,	// (0x0005f9c5) aid_size_cell_vorec

0xa09e,	// (0x00067e50) main_rss_pane

0x4656,	// (0x00062408) rss_list_single_pane_ParamLimits

0x4656,	// (0x00062408) rss_list_single_pane

0xc89f,	// (0x0006a651) rss_list_single_pane_t1

0xc8ad,	// (0x0006a65f) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0006d3b3) rss_list_single_pane_t

0xa09e,	// (0x00067e50) main_camera2_pane

0xa09e,	// (0x00067e50) main_video2_pane

0x4883,	// (0x00062635) cams_zoom_pane_cp2_ParamLimits

0x4883,	// (0x00062635) cams_zoom_pane_cp2

0x488f,	// (0x00062641) image2_vga_pane_ParamLimits

0x488f,	// (0x00062641) image2_vga_pane

0x489e,	// (0x00062650) main_camera2_pane_g1_ParamLimits

0x489e,	// (0x00062650) main_camera2_pane_g1

0x48aa,	// (0x0006265c) main_camera2_pane_g2_ParamLimits

0x48aa,	// (0x0006265c) main_camera2_pane_g2

0x48b6,	// (0x00062668) main_camera2_pane_g3_ParamLimits

0x48b6,	// (0x00062668) main_camera2_pane_g3

0x48c2,	// (0x00062674) main_camera2_pane_g4_ParamLimits

0x48c2,	// (0x00062674) main_camera2_pane_g4

0x48ce,	// (0x00062680) main_camera2_pane_g5_ParamLimits

0x48ce,	// (0x00062680) main_camera2_pane_g5

0x48da,	// (0x0006268c) main_camera2_pane_g6_ParamLimits

0x48da,	// (0x0006268c) main_camera2_pane_g6

0x48e6,	// (0x00062698) main_camera2_pane_g7_ParamLimits

0x48e6,	// (0x00062698) main_camera2_pane_g7

0x48f2,	// (0x000626a4) main_camera2_pane_g8_ParamLimits

0x48f2,	// (0x000626a4) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0006d3d4) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0006d3d4) main_camera2_pane_g

0x490a,	// (0x000626bc) main_camera2_pane_t1_ParamLimits

0x490a,	// (0x000626bc) main_camera2_pane_t1

0x491c,	// (0x000626ce) main_camera2_pane_t2_ParamLimits

0x491c,	// (0x000626ce) main_camera2_pane_t2

0x492e,	// (0x000626e0) main_camera2_pane_t3_ParamLimits

0x492e,	// (0x000626e0) main_camera2_pane_t3

0x4940,	// (0x000626f2) main_camera2_pane_t4_ParamLimits

0x4940,	// (0x000626f2) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0006d3e7) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0006d3e7) main_camera2_pane_t

0x499d,	// (0x0006274f) cams_zoom_pane_cp4_ParamLimits

0x499d,	// (0x0006274f) cams_zoom_pane_cp4

0x49ad,	// (0x0006275f) image2_cif_pane_ParamLimits

0x49ad,	// (0x0006275f) image2_cif_pane

0x49c2,	// (0x00062774) image2_subqcif_pane_ParamLimits

0x49c2,	// (0x00062774) image2_subqcif_pane

0x49d1,	// (0x00062783) main_video2_pane_g1_ParamLimits

0x49d1,	// (0x00062783) main_video2_pane_g1

0x49e3,	// (0x00062795) main_video2_pane_g2_ParamLimits

0x49e3,	// (0x00062795) main_video2_pane_g2

0x49f3,	// (0x000627a5) main_video2_pane_g3_ParamLimits

0x49f3,	// (0x000627a5) main_video2_pane_g3

0x4a03,	// (0x000627b5) main_video2_pane_g4_ParamLimits

0x4a03,	// (0x000627b5) main_video2_pane_g4

0x4a13,	// (0x000627c5) main_video2_pane_g5_ParamLimits

0x4a13,	// (0x000627c5) main_video2_pane_g5

0x4a23,	// (0x000627d5) main_video2_pane_g6_ParamLimits

0x4a23,	// (0x000627d5) main_video2_pane_g6

0x0005,

0xf644,	// (0x0006d3f6) main_video2_pane_g_ParamLimits

0xf644,	// (0x0006d3f6) main_video2_pane_g

0x4a35,	// (0x000627e7) main_video2_pane_t1_ParamLimits

0x4a35,	// (0x000627e7) main_video2_pane_t1

0x4a4f,	// (0x00062801) main_video2_pane_t2_ParamLimits

0x4a4f,	// (0x00062801) main_video2_pane_t2

0x4a75,	// (0x00062827) main_video2_pane_t3_ParamLimits

0x4a75,	// (0x00062827) main_video2_pane_t3

0x0002,

0xf651,	// (0x0006d403) main_video2_pane_t_ParamLimits

0xf651,	// (0x0006d403) main_video2_pane_t

0x4371,	// (0x00062123) call_muted_g2

0x0001,

0xf5f3,	// (0x0006d3a5) call_muted_g

0xa09e,	// (0x00067e50) main_mup2_pane

0xc90e,	// (0x0006a6c0) main_mup2_pane_g1_ParamLimits

0xc90e,	// (0x0006a6c0) main_mup2_pane_g1

0x4a9b,	// (0x0006284d) main_mup2_pane_g2_ParamLimits

0x4a9b,	// (0x0006284d) main_mup2_pane_g2

0x4d2d,	// (0x00062adf) main_mup_pane_g13_cp1

0x4d35,	// (0x00062ae7) mup_volume_pane_cp1

0x4abd,	// (0x0006286f) main_mup2_pane_g4_ParamLimits

0x4abd,	// (0x0006286f) main_mup2_pane_g4

0x4ad2,	// (0x00062884) main_mup2_pane_g5_ParamLimits

0x4ad2,	// (0x00062884) main_mup2_pane_g5

0x4ae7,	// (0x00062899) main_mup2_pane_g6_ParamLimits

0x4ae7,	// (0x00062899) main_mup2_pane_g6

0x4afc,	// (0x000628ae) main_mup2_pane_g7_ParamLimits

0x4afc,	// (0x000628ae) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0006d40a) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0006d40a) main_mup2_pane_g

0x4b18,	// (0x000628ca) main_mup2_pane_t1_ParamLimits

0x4b18,	// (0x000628ca) main_mup2_pane_t1

0x4b2f,	// (0x000628e1) main_mup2_pane_t2_ParamLimits

0x4b2f,	// (0x000628e1) main_mup2_pane_t2

0x4b46,	// (0x000628f8) main_mup2_pane_t3_ParamLimits

0x4b46,	// (0x000628f8) main_mup2_pane_t3

0x4b5d,	// (0x0006290f) main_mup2_pane_t4_ParamLimits

0x4b5d,	// (0x0006290f) main_mup2_pane_t4

0x4b77,	// (0x00062929) main_mup2_pane_t5_ParamLimits

0x4b77,	// (0x00062929) main_mup2_pane_t5

0x4b91,	// (0x00062943) main_mup2_pane_t6_ParamLimits

0x4b91,	// (0x00062943) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0006d419) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0006d419) main_mup2_pane_t

0x4bc9,	// (0x0006297b) mup2_visualizer_pane_ParamLimits

0x4bc9,	// (0x0006297b) mup2_visualizer_pane

0x4bff,	// (0x000629b1) mup_progress_pane_cp_ParamLimits

0x4bff,	// (0x000629b1) mup_progress_pane_cp

0x4d18,	// (0x00062aca) mup_volume_pane_cp_ParamLimits

0x4d18,	// (0x00062aca) mup_volume_pane_cp

0x4c18,	// (0x000629ca) mup2_visualizer_pane_g1_ParamLimits

0x4c18,	// (0x000629ca) mup2_visualizer_pane_g1

0xc91a,	// (0x0006a6cc) mup2_visualizer_pane_g2_ParamLimits

0xc91a,	// (0x0006a6cc) mup2_visualizer_pane_g2

0x4c2d,	// (0x000629df) mup2_visualizer_pane_g3_ParamLimits

0x4c2d,	// (0x000629df) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0006d426) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0006d426) mup2_visualizer_pane_g

0xb6ee,	// (0x000694a0) aid_size_cell_fmradio

0x4487,	// (0x00062239) aid_height_parent_landcape

0xac13,	// (0x000689c5) wml_content_pane_cp

0xac1b,	// (0x000689cd) wml_tabs_pane

0xac24,	// (0x000689d6) popup_wml_miniature_window

0xac2c,	// (0x000689de) scroll_pane_cp021

0xac40,	// (0x000689f2) wml_content_pane_comp8

0xa09e,	// (0x00067e50) bg_popup_sub_pane_cp05

0xc938,	// (0x0006a6ea) popup_wml_miniature_window_g1

0xc940,	// (0x0006a6f2) wml_miniature_view_pane

0x4c3b,	// (0x000629ed) aid_size_wml_view

0x4c43,	// (0x000629f5) wml_miniature_view_pane_g1

0x4c4c,	// (0x000629fe) wml_miniature_view_pane_g2

0x4c55,	// (0x00062a07) wml_miniature_view_pane_g3

0x4c5d,	// (0x00062a0f) wml_miniature_view_pane_g4

0x4c65,	// (0x00062a17) wml_miniature_view_pane_g5

0x4c6d,	// (0x00062a1f) wml_miniature_view_pane_g6

0x4c75,	// (0x00062a27) wml_miniature_view_pane_g7

0x4c7d,	// (0x00062a2f) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0006d42d) wml_miniature_view_pane_g

0xc90e,	// (0x0006a6c0) background_graphic_ParamLimits

0xc90e,	// (0x0006a6c0) background_graphic

0xc948,	// (0x0006a6fa) wml_tabs_2_pane

0xc951,	// (0x0006a703) wml_tabs_3_pane_ParamLimits

0xc951,	// (0x0006a703) wml_tabs_3_pane

0xc963,	// (0x0006a715) wml_tabs_4_pane_ParamLimits

0xc963,	// (0x0006a715) wml_tabs_4_pane

0xc979,	// (0x0006a72b) wml_tabs_5_pane_ParamLimits

0xc979,	// (0x0006a72b) wml_tabs_5_pane

0xc993,	// (0x0006a745) wml_tabs_pane_g2_ParamLimits

0xc993,	// (0x0006a745) wml_tabs_pane_g2

0xc9a7,	// (0x0006a759) wml_tabs_pane_g3_ParamLimits

0xc9a7,	// (0x0006a759) wml_tabs_pane_g3

0x4c85,	// (0x00062a37) wml_tabs_2_active_pane_ParamLimits

0x4c85,	// (0x00062a37) wml_tabs_2_active_pane

0x4c97,	// (0x00062a49) wml_tabs_2_passive_pane_ParamLimits

0x4c97,	// (0x00062a49) wml_tabs_2_passive_pane

0x4ca9,	// (0x00062a5b) wml_tabs_3_active_pane_cp_ParamLimits

0x4ca9,	// (0x00062a5b) wml_tabs_3_active_pane_cp

0x4cbc,	// (0x00062a6e) wml_tabs_3_passive_pane_ParamLimits

0x4cbc,	// (0x00062a6e) wml_tabs_3_passive_pane

0x4ccd,	// (0x00062a7f) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ccd,	// (0x00062a7f) wml_tabs_3_passive_pane_cp

0x4ce2,	// (0x00062a94) tabs_4_active_pane

0x4cea,	// (0x00062a9c) tabs_4_passive_pane

0x4cf2,	// (0x00062aa4) tabs_4_passive_pane_cp

0x4cfa,	// (0x00062aac) tabs_4_passive_pane_cp2

0x424c,	// (0x00061ffe) aid_height_text

0x39ab,	// (0x0006175d) mup_volume_cont_pane_ParamLimits

0x39ab,	// (0x0006175d) mup_volume_cont_pane

0x0f2a,	// (0x0005ecdc) aid_size_cell_pinb

0x0f34,	// (0x0005ece6) aid_size_list_pinb

0x4be8,	// (0x0006299a) mup2_volume_cont_pane_ParamLimits

0x4be8,	// (0x0006299a) mup2_volume_cont_pane

0x4d04,	// (0x00062ab6) mup2_volume_cont_pane_g1_ParamLimits

0x4d04,	// (0x00062ab6) mup2_volume_cont_pane_g1

0x0b94,	// (0x0005e946) aid_size_cell_touch_ParamLimits

0x0b94,	// (0x0005e946) aid_size_cell_touch

0x0e14,	// (0x0005ebc6) touch_pane_ParamLimits

0x0e14,	// (0x0005ebc6) touch_pane

0x9c32,	// (0x000679e4) main_rss2_pane

0xc9c4,	// (0x0006a776) listscroll_rss2_pane

0xc9cd,	// (0x0006a77f) rss2_navigation_pane

0xc9d5,	// (0x0006a787) list_rss2_pane

0xb2c2,	// (0x00069074) scroll_pane_cp22

0xc9dd,	// (0x0006a78f) rss2_navigation_pane_g1

0xc9e6,	// (0x0006a798) rss2_navigation_pane_g2

0xc9ee,	// (0x0006a7a0) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0006d43e) rss2_navigation_pane_g

0xc9f6,	// (0x0006a7a8) rss2_navigation_pane_t1

0x4d3d,	// (0x00062aef) rss2_list_single_pane_ParamLimits

0x4d3d,	// (0x00062aef) rss2_list_single_pane

0xca04,	// (0x0006a7b6) rss2_list_single_pane_t2

0xca12,	// (0x0006a7c4) rss2_list_single_pane_t3_ParamLimits

0xca12,	// (0x0006a7c4) rss2_list_single_pane_t3

0xca2f,	// (0x0006a7e1) rss2_list_single_pane_t4

0x3105,	// (0x00060eb7) smil_status_pane_g1

0xa2c9,	// (0x0006807b) main_image2_pane_ParamLimits

0xa2c9,	// (0x0006807b) main_image2_pane

0x48fe,	// (0x000626b0) main_camera2_pane_g9_ParamLimits

0x48fe,	// (0x000626b0) main_camera2_pane_g9

0x4952,	// (0x00062704) main_camera2_pane_t5_ParamLimits

0x4952,	// (0x00062704) main_camera2_pane_t5

0x4964,	// (0x00062716) main_camera2_pane_t6_ParamLimits

0x4964,	// (0x00062716) main_camera2_pane_t6

0x4d60,	// (0x00062b12) main_image2_pane_g1_ParamLimits

0x4d60,	// (0x00062b12) main_image2_pane_g1

0x3fe9,	// (0x00061d9b) smil2_video_pane_ParamLimits

0x3fe9,	// (0x00061d9b) smil2_video_pane

0x0bd0,	// (0x0005e982) aid_zoom_text_primary_cp

0x9c81,	// (0x00067a33) popup_preview_fixed_window

0xab7c,	// (0x0006892e) im_reading_pane_g1

0x4848,	// (0x000625fa) cams2_bc_adjust_pane_cp_ParamLimits

0x4848,	// (0x000625fa) cams2_bc_adjust_pane_cp

0x498f,	// (0x00062741) cams2_bc_adjust_pane_ParamLimits

0x498f,	// (0x00062741) cams2_bc_adjust_pane

0xd192,	// (0x0006af44) cams2_bc_adjust_pane_g1

0x4d6c,	// (0x00062b1e) cams2_slider_pane

0x4d75,	// (0x00062b27) cams2_slider_pane_g1

0x4d7e,	// (0x00062b30) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0006d445) cams2_slider_pane_g

0x102f,	// (0x0005ede1) calc_display_pane_ParamLimits

0x104d,	// (0x0005edff) calc_paper_pane_ParamLimits

0x1069,	// (0x0005ee1b) grid_calc_pane_ParamLimits

0x33ae,	// (0x00061160) popup_clock_digital_window_t1_ParamLimits

0xb68b,	// (0x0006943d) main_image_pane_t1

0x1015,	// (0x0005edc7) aid_size_cell_calc_ParamLimits

0x1015,	// (0x0005edc7) aid_size_cell_calc

0x44b9,	// (0x0006226b) popup_blid_sat_info2_window_ParamLimits

0x44b9,	// (0x0006226b) popup_blid_sat_info2_window

0xca45,	// (0x0006a7f7) aid_size_cell_blid

0xca4d,	// (0x0006a7ff) bg_popup_window_pane_cp07

0xca70,	// (0x0006a822) grid_popup_blid_pane

0xca7a,	// (0x0006a82c) heading_pane_cp05_ParamLimits

0xca7a,	// (0x0006a82c) heading_pane_cp05

0xcb44,	// (0x0006a8f6) cell_popup_blid_pane_ParamLimits

0xcb44,	// (0x0006a8f6) cell_popup_blid_pane

0xcb6e,	// (0x0006a920) cell_popup_blid_pane_g1

0xcb76,	// (0x0006a928) cell_popup_blid_pane_t1

0x4bae,	// (0x00062960) mup2_indicator_pane_ParamLimits

0x4bae,	// (0x00062960) mup2_indicator_pane

0xaa7f,	// (0x00068831) mup2_visualizer_osc_pane

0xc926,	// (0x0006a6d8) mup2_visualizer_spec_pane_ParamLimits

0xc926,	// (0x0006a6d8) mup2_visualizer_spec_pane

0x4d98,	// (0x00062b4a) mup2_spec_half_pane

0x4da1,	// (0x00062b53) mup2_spec_half_pane_cp

0x4dab,	// (0x00062b5d) mup2_spec_bar_pane_ParamLimits

0x4dab,	// (0x00062b5d) mup2_spec_bar_pane

0xc8bb,	// (0x0006a66d) mup2_spec_bar_pane_g1

0xc8c5,	// (0x0006a677) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0006d3b8) mup2_spec_bar_pane_g

0x4dca,	// (0x00062b7c) mup2_osc_middle_pane

0xc8d7,	// (0x0006a689) mup2_visualizer_osc_pane_g1

0x9cab,	// (0x00067a5d) popup_number_entry_window_t1_ParamLimits

0x9cbe,	// (0x00067a70) popup_number_entry_window_t2_ParamLimits

0x9cd0,	// (0x00067a82) popup_number_entry_window_t3_ParamLimits

0x0e6b,	// (0x0005ec1d) popup_number_entry_window_t5_ParamLimits

0x0e6b,	// (0x0005ec1d) popup_number_entry_window_t5

0xf0ca,	// (0x0006ce7c) popup_number_entry_window_t_ParamLimits

0x9ce2,	// (0x00067a94) text_title_cp2_ParamLimits

0x3cd6,	// (0x00061a88) aid_hotspot_pointer_text2_pane

0x3d70,	// (0x00061b22) main_viewer_pane_g9_ParamLimits

0x3d70,	// (0x00061b22) main_viewer_pane_g9

0xadb5,	// (0x00068b67) cale_month_pane_t1_ParamLimits

0xaddb,	// (0x00068b8d) bg_cale_pane_ParamLimits

0xadf3,	// (0x00068ba5) list_cale_pane_ParamLimits

0xae04,	// (0x00068bb6) listscroll_cale_day_pane_t1

0xae16,	// (0x00068bc8) scroll_pane_cp09_ParamLimits

0x39ea,	// (0x0006179c) main_mup_eq_pane_t1_ParamLimits

0x39ea,	// (0x0006179c) main_mup_eq_pane_t1

0x3a06,	// (0x000617b8) main_mup_eq_pane_t2_ParamLimits

0x3a06,	// (0x000617b8) main_mup_eq_pane_t2

0x3a22,	// (0x000617d4) main_mup_eq_pane_t3_ParamLimits

0x3a22,	// (0x000617d4) main_mup_eq_pane_t3

0x3a3c,	// (0x000617ee) main_mup_eq_pane_t4_ParamLimits

0x3a3c,	// (0x000617ee) main_mup_eq_pane_t4

0x3a56,	// (0x00061808) main_mup_eq_pane_t5_ParamLimits

0x3a56,	// (0x00061808) main_mup_eq_pane_t5

0x3a70,	// (0x00061822) main_mup_eq_pane_t6_ParamLimits

0x3a70,	// (0x00061822) main_mup_eq_pane_t6

0x3a86,	// (0x00061838) main_mup_eq_pane_t7_ParamLimits

0x3a86,	// (0x00061838) main_mup_eq_pane_t7

0x3a9c,	// (0x0006184e) main_mup_eq_pane_t8_ParamLimits

0x3a9c,	// (0x0006184e) main_mup_eq_pane_t8

0x3ab2,	// (0x00061864) main_mup_eq_pane_t9_ParamLimits

0x3ab2,	// (0x00061864) main_mup_eq_pane_t9

0x3ace,	// (0x00061880) main_mup_eq_pane_t10_ParamLimits

0x3ace,	// (0x00061880) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0006d207) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0006d207) main_mup_eq_pane_t

0x3b93,	// (0x00061945) mup_equalizer_pane_cp5_ParamLimits

0x3bab,	// (0x0006195d) mup_equalizer_pane_cp6_ParamLimits

0x3bc3,	// (0x00061975) mup_equalizer_pane_cp7_ParamLimits

0x9c32,	// (0x000679e4) main_gallery_pane

0xc8e0,	// (0x0006a692) smil2_volume_pane

0xc8e8,	// (0x0006a69a) smil_status_volume_pane_g1_ParamLimits

0xc8fb,	// (0x0006a6ad) smil_status_volume_pane_g2_ParamLimits

0x46b3,	// (0x00062465) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0006d3bd) smil_status_volume_pane_g_ParamLimits

0xca4d,	// (0x0006a7ff) bg_popup_window_pane_cp07_ParamLimits

0xca5b,	// (0x0006a80d) blid_firmament_pane

0x4dd3,	// (0x00062b85) aid_size_cell_gallery_ParamLimits

0x4dd3,	// (0x00062b85) aid_size_cell_gallery

0x4de1,	// (0x00062b93) grid_gallery_pane_ParamLimits

0x4de1,	// (0x00062b93) grid_gallery_pane

0x4df1,	// (0x00062ba3) cell_gallery_pane_ParamLimits

0x4df1,	// (0x00062ba3) cell_gallery_pane

0xcb84,	// (0x0006a936) bg_cell_gallery_focus_pane_ParamLimits

0xcb84,	// (0x0006a936) bg_cell_gallery_focus_pane

0xcb96,	// (0x0006a948) cell_gallery_pane_g1_ParamLimits

0xcb96,	// (0x0006a948) cell_gallery_pane_g1

0x4e37,	// (0x00062be9) cell_gallery_pane_g2_ParamLimits

0x4e37,	// (0x00062be9) cell_gallery_pane_g2

0x4e44,	// (0x00062bf6) cell_gallery_pane_g3_ParamLimits

0x4e44,	// (0x00062bf6) cell_gallery_pane_g3

0xcba2,	// (0x0006a954) cell_gallery_pane_g4_ParamLimits

0xcba2,	// (0x0006a954) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0006d46b) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0006d46b) cell_gallery_pane_g

0xcbae,	// (0x0006a960) bg_cell_gallery_focus_pane_g1

0xcbb6,	// (0x0006a968) bg_cell_gallery_focus_pane_g2

0xcbbe,	// (0x0006a970) bg_cell_gallery_focus_pane_g3

0xcbc6,	// (0x0006a978) bg_cell_gallery_focus_pane_g4

0xcbce,	// (0x0006a980) bg_cell_gallery_focus_pane_g5

0xcbd6,	// (0x0006a988) bg_cell_gallery_focus_pane_g6

0xcbde,	// (0x0006a990) bg_cell_gallery_focus_pane_g7

0xcbe6,	// (0x0006a998) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0006d474) bg_cell_gallery_focus_pane_g

0xcbee,	// (0x0006a9a0) aid_firma_cardinal

0xcc02,	// (0x0006a9b4) blid_firmament_pane_t1

0xcc19,	// (0x0006a9cb) blid_firmament_pane_t2

0xcc30,	// (0x0006a9e2) blid_firmament_pane_t3

0xcc47,	// (0x0006a9f9) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0006d485) blid_firmament_pane_t

0xcc5e,	// (0x0006aa10) blid_sat_info_pane

0xcc6e,	// (0x0006aa20) blid_sat_info_pane_g1

0xcc6e,	// (0x0006aa20) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0006d48e) blid_sat_info_pane_g

0xcc78,	// (0x0006aa2a) blid_sat_info_pane_t1

0xcc86,	// (0x0006aa38) smil2_volume_content_pane

0xcc8f,	// (0x0006aa41) smil2_volume_pane_g1

0xcc97,	// (0x0006aa49) smil2_volume_content_pane_g1

0xcca0,	// (0x0006aa52) smil2_volume_content_pane_g2

0xcca9,	// (0x0006aa5b) smil2_volume_content_pane_g3

0xccb2,	// (0x0006aa64) smil2_volume_content_pane_g4

0xccbb,	// (0x0006aa6d) smil2_volume_content_pane_g5

0xccc4,	// (0x0006aa76) smil2_volume_content_pane_g6

0xcccd,	// (0x0006aa7f) smil2_volume_content_pane_g7

0xccd6,	// (0x0006aa88) smil2_volume_content_pane_g8

0xccdf,	// (0x0006aa91) smil2_volume_content_pane_g9

0xcce8,	// (0x0006aa9a) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0006d493) smil2_volume_content_pane_g

0x176e,	// (0x0005f520) cale_week_day_heading_pane_t1_ParamLimits

0x17b6,	// (0x0005f568) cale_week_day_heading_pane_t2_ParamLimits

0x1803,	// (0x0005f5b5) cale_week_day_heading_pane_t3_ParamLimits

0x1850,	// (0x0005f602) cale_week_day_heading_pane_t4_ParamLimits

0x189d,	// (0x0005f64f) cale_week_day_heading_pane_t5_ParamLimits

0x18ea,	// (0x0005f69c) cale_week_day_heading_pane_t6_ParamLimits

0x1937,	// (0x0005f6e9) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0006cf83) cale_week_day_heading_pane_t_ParamLimits

0xaa24,	// (0x000687d6) bg_cale_side_pane_ParamLimits

0x197f,	// (0x0005f731) cale_week_time_pane_t1_ParamLimits

0x19c3,	// (0x0005f775) cale_week_time_pane_t2_ParamLimits

0x1a07,	// (0x0005f7b9) cale_week_time_pane_t3_ParamLimits

0x1a4b,	// (0x0005f7fd) cale_week_time_pane_t4_ParamLimits

0x1a8f,	// (0x0005f841) cale_week_time_pane_t5_ParamLimits

0x1ad3,	// (0x0005f885) cale_week_time_pane_t6_ParamLimits

0x1b17,	// (0x0005f8c9) cale_week_time_pane_t7_ParamLimits

0x1b63,	// (0x0005f915) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0006cf92) cale_week_time_pane_t_ParamLimits

0x1bb1,	// (0x0005f963) cell_cale_week_pane_g2_ParamLimits

0xaa24,	// (0x000687d6) bg_cale_side_pane_cp01_ParamLimits

0x2ee2,	// (0x00060c94) cale_month_week_pane_t1_ParamLimits

0x2efb,	// (0x00060cad) cale_month_week_pane_t2_ParamLimits

0x2f14,	// (0x00060cc6) cale_month_week_pane_t3_ParamLimits

0x2f2d,	// (0x00060cdf) cale_month_week_pane_t4_ParamLimits

0x2f46,	// (0x00060cf8) cale_month_week_pane_t5_ParamLimits

0x2f61,	// (0x00060d13) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0006d067) cale_month_week_pane_t_ParamLimits

0x30ce,	// (0x00060e80) cell_cale_month_pane_g1_ParamLimits

0x9c32,	// (0x000679e4) main_cale_event_viewer_pane

0x9c32,	// (0x000679e4) listscroll_cale_event_viewer_pane

0xccf1,	// (0x0006aaa3) list_cale_ev_pane

0xccf9,	// (0x0006aaab) scroll_pane_cp023

0x4e51,	// (0x00062c03) field_cale_ev_pane_ParamLimits

0x4e51,	// (0x00062c03) field_cale_ev_pane

0xcd05,	// (0x0006aab7) field_cale_ev_content_pane_ParamLimits

0xcd05,	// (0x0006aab7) field_cale_ev_content_pane

0xcd11,	// (0x0006aac3) field_cale_ev_pane_g1_ParamLimits

0xcd11,	// (0x0006aac3) field_cale_ev_pane_g1

0xcd1d,	// (0x0006aacf) field_cale_ev_pane_g2_ParamLimits

0xcd1d,	// (0x0006aacf) field_cale_ev_pane_g2

0xcd35,	// (0x0006aae7) field_cale_ev_pane_g3_ParamLimits

0xcd35,	// (0x0006aae7) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0006d4a8) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0006d4a8) field_cale_ev_pane_g

0xcd4d,	// (0x0006aaff) field_cale_ev_pane_t1_ParamLimits

0xcd4d,	// (0x0006aaff) field_cale_ev_pane_t1

0x4e75,	// (0x00062c27) field_cale_ev_content_pane_t1_ParamLimits

0x4e75,	// (0x00062c27) field_cale_ev_content_pane_t1

0xb55f,	// (0x00069311) bg_button_pane_cp01

0x13ce,	// (0x0005f180) listscroll_cale_week_pane_ParamLimits

0x13e0,	// (0x0005f192) popup_toolbar_window_cp01

0xa9f0,	// (0x000687a2) listscroll_cale_week_pane_t1_ParamLimits

0x13ce,	// (0x0005f180) listscroll_cale_day_pane_ParamLimits

0x13e0,	// (0x0005f192) popup_toolbar_window_cp02

0xae04,	// (0x00068bb6) listscroll_cale_day_pane_t1_ParamLimits

0x13ce,	// (0x0005f180) main_cale_month_pane_ParamLimits

0x459d,	// (0x0006234f) popup_toolbar_window_cp03_ParamLimits

0x459d,	// (0x0006234f) popup_toolbar_window_cp03

0x3ef9,	// (0x00061cab) main_image_pane_g2_ParamLimits

0x3ef9,	// (0x00061cab) main_image_pane_g2

0x3f05,	// (0x00061cb7) main_image_pane_g3_ParamLimits

0x3f05,	// (0x00061cb7) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0006d299) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0006d299) main_image_pane_g

0xb68b,	// (0x0006943d) main_image_pane_t1_ParamLimits

0x3f11,	// (0x00061cc3) main_image_pane_t2_ParamLimits

0x3f11,	// (0x00061cc3) main_image_pane_t2

0x3f23,	// (0x00061cd5) main_image_pane_t3_ParamLimits

0x3f23,	// (0x00061cd5) main_image_pane_t3

0x3f35,	// (0x00061ce7) main_image_pane_t4_ParamLimits

0x3f35,	// (0x00061ce7) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0006d2a0) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0006d2a0) main_image_pane_t

0x3f47,	// (0x00061cf9) popup_image_details_window_cp01

0x3f51,	// (0x00061d03) popup_toobar_trans_pane_cp01_ParamLimits

0x3f51,	// (0x00061d03) popup_toobar_trans_pane_cp01

0x450e,	// (0x000622c0) popup_image_details_window_ParamLimits

0x450e,	// (0x000622c0) popup_image_details_window

0xc83f,	// (0x0006a5f1) popup_image_focus_window

0x483a,	// (0x000625ec) camera2_autofocus_pane_ParamLimits

0x483a,	// (0x000625ec) camera2_autofocus_pane

0x9c32,	// (0x000679e4) bg_popup_sub_pane_cp06

0xcd64,	// (0x0006ab16) popup_image_focus_window_g1

0xcd6c,	// (0x0006ab1e) popup_image_focus_window_g2

0xcd74,	// (0x0006ab26) popup_image_focus_window_g3

0xcd7c,	// (0x0006ab2e) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0006d4af) popup_image_focus_window_g

0xcd84,	// (0x0006ab36) popup_image_focus_window_t1

0xcd92,	// (0x0006ab44) popup_image_focus_window_t2

0xcda2,	// (0x0006ab54) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0006d4b8) popup_image_focus_window_t

0xcdb0,	// (0x0006ab62) camera2_autofocus_pane_g1

0xa2c9,	// (0x0006807b) bg_tb_trans_pane_cp01

0xcdbe,	// (0x0006ab70) popup_image_details_window_g1

0xcdd1,	// (0x0006ab83) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0006d4ca) popup_image_details_window_g

0xcdfa,	// (0x0006abac) popup_image_details_window_t1

0xce0c,	// (0x0006abbe) popup_image_details_window_t2

0xce25,	// (0x0006abd7) popup_image_details_window_t3

0xce39,	// (0x0006abeb) popup_image_details_window_t4

0xce54,	// (0x0006ac06) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0006d4d1) popup_image_details_window_t

0xa8b5,	// (0x00068667) bg_calc_paper_pane_ParamLimits

0x1166,	// (0x0005ef18) grid_highlight_pane_cp013

0x1170,	// (0x0005ef22) list_calc_pane_ParamLimits

0x1182,	// (0x0005ef34) scroll_pane_cp024

0xa8c9,	// (0x0006867b) bg_calc_display_pane_ParamLimits

0x118a,	// (0x0005ef3c) calc_display_pane_t1_ParamLimits

0x119f,	// (0x0005ef51) calc_display_pane_t2_ParamLimits

0x11b4,	// (0x0005ef66) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0006cf03) calc_display_pane_t_ParamLimits

0x1288,	// (0x0005f03a) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0006cf20) cell_calc_pane_g

0x1291,	// (0x0005f043) cell_calc_pane_t1

0xa928,	// (0x000686da) grid_highlight_pane_cp02_ParamLimits

0xa93e,	// (0x000686f0) toolbar_button_pane_cp01_ParamLimits

0xa93e,	// (0x000686f0) toolbar_button_pane_cp01

0xb6d0,	// (0x00069482) temp_image_control_pane_ParamLimits

0xb6d0,	// (0x00069482) temp_image_control_pane

0xa2c9,	// (0x0006807b) main_mp3_pane

0xce6e,	// (0x0006ac20) temp_image_control_pane_g1_ParamLimits

0xce6e,	// (0x0006ac20) temp_image_control_pane_g1

0xce7c,	// (0x0006ac2e) temp_image_control_pane_g2_ParamLimits

0xce7c,	// (0x0006ac2e) temp_image_control_pane_g2

0xce8e,	// (0x0006ac40) temp_image_control_pane_g3_ParamLimits

0xce8e,	// (0x0006ac40) temp_image_control_pane_g3

0x4ec0,	// (0x00062c72) temp_image_control_pane_g4_ParamLimits

0x4ec0,	// (0x00062c72) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0006d4dc) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0006d4dc) temp_image_control_pane_g

0xce6e,	// (0x0006ac20) main_mp3_pane_g1

0x4ed1,	// (0x00062c83) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0006d4e5) main_mp3_pane_g

0xced1,	// (0x0006ac83) main_mp3_pane_t1

0xaa87,	// (0x00068839) main_camera_pane_g8_ParamLimits

0xaa87,	// (0x00068839) main_camera_pane_g8

0x1e4e,	// (0x0005fc00) main_video_pane_g7_ParamLimits

0x1e4e,	// (0x0005fc00) main_video_pane_g7

0x497d,	// (0x0006272f) main_camera2_pane_t7_ParamLimits

0x497d,	// (0x0006272f) main_camera2_pane_t7

0xabd3,	// (0x00068985) scroll_pane_cp025_ParamLimits

0xabd3,	// (0x00068985) scroll_pane_cp025

0xabe7,	// (0x00068999) scroll_pane_cp026_ParamLimits

0xabe7,	// (0x00068999) scroll_pane_cp026

0xabf6,	// (0x000689a8) wml_content_pane_ParamLimits

0x9c32,	// (0x000679e4) main_touch_calib_pane

0x4f75,	// (0x00062d27) main_touch_calib_pane_g1

0x4f81,	// (0x00062d33) main_touch_calib_pane_g2

0x4f8d,	// (0x00062d3f) main_touch_calib_pane_g3

0x4f99,	// (0x00062d4b) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0006d503) main_touch_calib_pane_g

0x4fa5,	// (0x00062d57) main_touch_calib_pane_t1

0x4fbc,	// (0x00062d6e) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0006d50c) main_touch_calib_pane_t

0xb33d,	// (0x000690ef) mup_progress_pane_cp02

0xb35c,	// (0x0006910e) navi_pane_g1

0xb3be,	// (0x00069170) navi_pane_mp_t3

0xa2c9,	// (0x0006807b) main_mp3_pane_ParamLimits

0x45df,	// (0x00062391) navi_pane_ParamLimits

0xce6e,	// (0x0006ac20) main_mp3_pane_g1_ParamLimits

0x4ed1,	// (0x00062c83) main_mp3_pane_g2_ParamLimits

0x4edd,	// (0x00062c8f) main_mp3_pane_g3_ParamLimits

0x4edd,	// (0x00062c8f) main_mp3_pane_g3

0x4ee9,	// (0x00062c9b) main_mp3_pane_g4_ParamLimits

0x4ee9,	// (0x00062c9b) main_mp3_pane_g4

0xce9e,	// (0x0006ac50) main_mp3_pane_g5_ParamLimits

0xce9e,	// (0x0006ac50) main_mp3_pane_g5

0xceac,	// (0x0006ac5e) main_mp3_pane_g6_ParamLimits

0xceac,	// (0x0006ac5e) main_mp3_pane_g6

0xceb9,	// (0x0006ac6b) main_mp3_pane_g7_ParamLimits

0xceb9,	// (0x0006ac6b) main_mp3_pane_g7

0xcec5,	// (0x0006ac77) main_mp3_pane_g8_ParamLimits

0xcec5,	// (0x0006ac77) main_mp3_pane_g8

0xf733,	// (0x0006d4e5) main_mp3_pane_g_ParamLimits

0x4ef5,	// (0x00062ca7) main_mp3_pane_t2

0x4f05,	// (0x00062cb7) main_mp3_pane_t3

0xcedf,	// (0x0006ac91) main_mp3_pane_t4

0xceed,	// (0x0006ac9f) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0006d4f6) main_mp3_pane_t

0xcefb,	// (0x0006acad) mup_progress_pane_cp01

0x0bd0,	// (0x0005e982) aid_zoom_text_secondary2

0xccf1,	// (0x0006aaa3) list_cale_ev2_pane

0xccf9,	// (0x0006aaab) scroll_pane_cp023_ParamLimits

0xe35b,	// (0x0006c10d) field_cale_ev2_pane_ParamLimits

0xe35b,	// (0x0006c10d) field_cale_ev2_pane

0x5017,	// (0x00062dc9) field_cale_ev2_pane_g1_ParamLimits

0x5017,	// (0x00062dc9) field_cale_ev2_pane_g1

0x5023,	// (0x00062dd5) field_cale_ev2_pane_g2_ParamLimits

0x5023,	// (0x00062dd5) field_cale_ev2_pane_g2

0x503b,	// (0x00062ded) field_cale_ev2_pane_g3_ParamLimits

0x503b,	// (0x00062ded) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0006d517) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0006d517) field_cale_ev2_pane_g

0x5053,	// (0x00062e05) field_cale_ev2_pane_t1_ParamLimits

0x5053,	// (0x00062e05) field_cale_ev2_pane_t1

0x506a,	// (0x00062e1c) field_cale_ev2_pane_t2_ParamLimits

0x506a,	// (0x00062e1c) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0006d520) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0006d520) field_cale_ev2_pane_t

0x3dd8,	// (0x00061b8a) main_postcard_pane_g5_ParamLimits

0x3dd8,	// (0x00061b8a) main_postcard_pane_g5

0x3de6,	// (0x00061b98) main_postcard_pane_g6_ParamLimits

0x3de6,	// (0x00061b98) main_postcard_pane_g6

0x1c8c,	// (0x0005fa3e) camera2_autofocus_pane_cp_ParamLimits

0x1c8c,	// (0x0005fa3e) camera2_autofocus_pane_cp

0xa2c9,	// (0x0006807b) main_mup3_pane

0x509f,	// (0x00062e51) main_mup3_pane_g1_ParamLimits

0x509f,	// (0x00062e51) main_mup3_pane_g1

0x50c0,	// (0x00062e72) main_mup3_pane_g2_ParamLimits

0x50c0,	// (0x00062e72) main_mup3_pane_g2

0x513c,	// (0x00062eee) main_mup3_pane_g3_ParamLimits

0x513c,	// (0x00062eee) main_mup3_pane_g3

0x5181,	// (0x00062f33) main_mup3_pane_g4_ParamLimits

0x5181,	// (0x00062f33) main_mup3_pane_g4

0x51c4,	// (0x00062f76) main_mup3_pane_g5_ParamLimits

0x51c4,	// (0x00062f76) main_mup3_pane_g5

0x5209,	// (0x00062fbb) main_mup3_pane_g6_ParamLimits

0x5209,	// (0x00062fbb) main_mup3_pane_g6

0xcf03,	// (0x0006acb5) main_mup3_pane_g7_ParamLimits

0xcf03,	// (0x0006acb5) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0006d530) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0006d530) main_mup3_pane_g

0x527f,	// (0x00063031) main_mup3_pane_t1_ParamLimits

0x527f,	// (0x00063031) main_mup3_pane_t1

0x52e8,	// (0x0006309a) main_mup3_pane_t2_ParamLimits

0x52e8,	// (0x0006309a) main_mup3_pane_t2

0x53b1,	// (0x00063163) main_mup3_pane_t4_ParamLimits

0x53b1,	// (0x00063163) main_mup3_pane_t4

0x5405,	// (0x000631b7) main_mup3_pane_t5_ParamLimits

0x5405,	// (0x000631b7) main_mup3_pane_t5

0x54b3,	// (0x00063265) main_mup3_pane_t6_ParamLimits

0x54b3,	// (0x00063265) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0006d541) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0006d541) main_mup3_pane_t

0x555f,	// (0x00063311) mup3_progress_pane_ParamLimits

0x555f,	// (0x00063311) mup3_progress_pane

0x55d9,	// (0x0006338b) popup_mup3_control_window_ParamLimits

0x55d9,	// (0x0006338b) popup_mup3_control_window

0xcf11,	// (0x0006acc3) popup_mup3_text_window

0x55f6,	// (0x000633a8) mup3_progress_pane_t1

0x5615,	// (0x000633c7) mup3_progress_pane_t2

0xcf19,	// (0x0006accb) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0006d54e) mup3_progress_pane_t

0xcf36,	// (0x0006ace8) mup_progress_pane_cp03

0x9c32,	// (0x000679e4) bg_tb_trans_pane_cp04

0x5634,	// (0x000633e6) mup3_volume_pane

0x563c,	// (0x000633ee) popup_mup3_control_window_g1

0xda82,	// (0x0006b834) mup3_volume_pane_g1

0xda8b,	// (0x0006b83d) mup3_volume_pane_g2

0xda94,	// (0x0006b846) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0006d555) mup3_volume_pane_g

0x9c32,	// (0x000679e4) bg_tb_trans_pane_cp03

0xcf46,	// (0x0006acf8) popup_mup3_text_window_g1

0xcf4e,	// (0x0006ad00) popup_mup3_text_window_t1

0xa911,	// (0x000686c3) list_calc_item_pane_g1_ParamLimits

0xc9bb,	// (0x0006a76d) mup_volume_pane_cp_g1

0x4fd5,	// (0x00062d87) main_touch_calib_pane_t3

0x4feb,	// (0x00062d9d) main_touch_calib_pane_t4

0x5001,	// (0x00062db3) main_touch_calib_pane_t5

0x9c3c,	// (0x000679ee) aid_cell_size_toolbar2

0x9c44,	// (0x000679f6) aid_popup3_width_pane

0x0bc8,	// (0x0005e97a) aid_zoom_text_msg_primary

0x1c5f,	// (0x0005fa11) vorec_t7

0xa8d5,	// (0x00068687) bg_calc_paper_pane_g1_ParamLimits

0xa8e1,	// (0x00068693) bg_calc_paper_pane_g2_ParamLimits

0xa8ed,	// (0x0006869f) bg_calc_paper_pane_g3_ParamLimits

0xa8f9,	// (0x000686ab) bg_calc_paper_pane_g4_ParamLimits

0xa905,	// (0x000686b7) bg_calc_paper_pane_g5_ParamLimits

0x11f5,	// (0x0005efa7) bg_calc_paper_pane_g6_ParamLimits

0x1206,	// (0x0005efb8) bg_calc_paper_pane_g7_ParamLimits

0x1217,	// (0x0005efc9) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0006cf0a) bg_calc_paper_pane_g_ParamLimits

0x122a,	// (0x0005efdc) calc_bg_paper_pane_g9_ParamLimits

0x1d7d,	// (0x0005fb2f) image_qvga_pane_ParamLimits

0x1d7d,	// (0x0005fb2f) image_qvga_pane

0xa804,	// (0x000685b6) bg_popup_sub_pane_cp04_ParamLimits

0xb607,	// (0x000693b9) popup_mup_playback_window_g1_ParamLimits

0xb613,	// (0x000693c5) popup_mup_playback_window_t1_ParamLimits

0xb628,	// (0x000693da) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0006d294) popup_mup_playback_window_t_ParamLimits

0x4aac,	// (0x0006285e) main_mup2_pane_g3_ParamLimits

0x4aac,	// (0x0006285e) main_mup2_pane_g3

0x2128,	// (0x0005feda) popup_toolbar_window_cp04

0xba23,	// (0x000697d5) popup_call2_audio_second_window_g3_ParamLimits

0xba23,	// (0x000697d5) popup_call2_audio_second_window_g3

0xbe2d,	// (0x00069bdf) popup_call2_audio_first_window_g4_ParamLimits

0xbe2d,	// (0x00069bdf) popup_call2_audio_first_window_g4

0xc4ac,	// (0x0006a25e) popup_call2_audio_in_window_g4_ParamLimits

0xc4ac,	// (0x0006a25e) popup_call2_audio_in_window_g4

0x3eec,	// (0x00061c9e) aid_area_sk_bg_cut_ParamLimits

0x3eec,	// (0x00061c9e) aid_area_sk_bg_cut

0xb63d,	// (0x000693ef) aid_area_sk_bg_cut_2_ParamLimits

0xb63d,	// (0x000693ef) aid_area_sk_bg_cut_2

0x4e27,	// (0x00062bd9) aid_placing_details_win

0x4e2f,	// (0x00062be1) aid_placing_details_win_2

0xcdb0,	// (0x0006ab62) camera2_autofocus_pane_g1_ParamLimits

0x0daa,	// (0x0005eb5c) popup_fixed_preview_cale_window_ParamLimits

0x0daa,	// (0x0005eb5c) popup_fixed_preview_cale_window

0xb405,	// (0x000691b7) navi_slider_pane_g3

0xb40e,	// (0x000691c0) navi_slider_pane_g4

0xb417,	// (0x000691c9) navi_slider_pane_g5

0xb405,	// (0x000691b7) navi_slider_pane_g6

0x3758,	// (0x0006150a) navi_slider_pane_g7

0xb52c,	// (0x000692de) mup_scale_pane_g3

0xb535,	// (0x000692e7) mup_scale_pane_g4

0xb53e,	// (0x000692f0) mup_scale_pane_g5

0x3bdb,	// (0x0006198d) mup_scale_pane_g6

0x3be4,	// (0x00061996) mup_scale_pane_g7

0xb405,	// (0x000691b7) cams2_slider_pane_g3

0xca3d,	// (0x0006a7ef) cams2_slider_pane_g4

0x4d87,	// (0x00062b39) cams2_slider_pane_g5

0xb405,	// (0x000691b7) cams2_slider_pane_g6

0x4d8f,	// (0x00062b41) cams2_slider_pane_g7

0xcc6e,	// (0x0006aa20) camera2_autofocus_pane_cp_g1

0xc811,	// (0x0006a5c3) bg_popup_preview_window_pane_cp02_ParamLimits

0xc811,	// (0x0006a5c3) bg_popup_preview_window_pane_cp02

0xcf5c,	// (0x0006ad0e) list_fp_cale_pane_ParamLimits

0xcf5c,	// (0x0006ad0e) list_fp_cale_pane

0xcf68,	// (0x0006ad1a) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf68,	// (0x0006ad1a) popup_fixed_preview_cale_window_t1

0x5645,	// (0x000633f7) popup_fixed_preview_cale_window_t2_ParamLimits

0x5645,	// (0x000633f7) popup_fixed_preview_cale_window_t2

0x565a,	// (0x0006340c) popup_fixed_preview_cale_window_t3_ParamLimits

0x565a,	// (0x0006340c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0006d55c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0006d55c) popup_fixed_preview_cale_window_t

0x566f,	// (0x00063421) list_single_fp_cale_pane_ParamLimits

0x566f,	// (0x00063421) list_single_fp_cale_pane

0xcf86,	// (0x0006ad38) list_single_fp_cale_pane_g1_ParamLimits

0xcf86,	// (0x0006ad38) list_single_fp_cale_pane_g1

0xcf92,	// (0x0006ad44) list_single_fp_cale_pane_g2_ParamLimits

0xcf92,	// (0x0006ad44) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0006d563) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0006d563) list_single_fp_cale_pane_g

0xcfab,	// (0x0006ad5d) list_single_fp_cale_pane_t1_ParamLimits

0xcfab,	// (0x0006ad5d) list_single_fp_cale_pane_t1

0xcfbd,	// (0x0006ad6f) list_single_fp_cale_pane_t2_ParamLimits

0xcfbd,	// (0x0006ad6f) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0006d56a) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0006d56a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c32,	// (0x000679e4) main_dialer_pane

0x567f,	// (0x00063431) aid_cell_size_keypad

0x5689,	// (0x0006343b) dialer_ne_pane

0x5693,	// (0x00063445) grid_dialer_command_1_pane

0x569b,	// (0x0006344d) grid_dialer_command_2_pane

0x56a3,	// (0x00063455) grid_dialer_keypad_pane

0x56b7,	// (0x00063469) bg_popup_call_pane_cp06_ParamLimits

0x56b7,	// (0x00063469) bg_popup_call_pane_cp06

0x56c3,	// (0x00063475) dialer_ne_clear_pane_ParamLimits

0x56c3,	// (0x00063475) dialer_ne_clear_pane

0xcff0,	// (0x0006ada2) dialer_ne_pane_g1

0xcff8,	// (0x0006adaa) dialer_ne_pane_t1_ParamLimits

0xcff8,	// (0x0006adaa) dialer_ne_pane_t1

0x56cf,	// (0x00063481) dialer_ne_pane_t2_ParamLimits

0x56cf,	// (0x00063481) dialer_ne_pane_t2

0x56ec,	// (0x0006349e) dialer_ne_pane_t3_ParamLimits

0x56ec,	// (0x0006349e) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0006d56f) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0006d56f) dialer_ne_pane_t

0x5710,	// (0x000634c2) dialer_ne_pane_t3_copy1_ParamLimits

0x5710,	// (0x000634c2) dialer_ne_pane_t3_copy1

0x5734,	// (0x000634e6) cell_dialer_keypad_pane_ParamLimits

0x5734,	// (0x000634e6) cell_dialer_keypad_pane

0x574b,	// (0x000634fd) cell_dialer_command_1_pane_ParamLimits

0x574b,	// (0x000634fd) cell_dialer_command_1_pane

0x5761,	// (0x00063513) cell_dialer_command_2_pane_ParamLimits

0x5761,	// (0x00063513) cell_dialer_command_2_pane

0xd00a,	// (0x0006adbc) bg_button_pane_cp02_ParamLimits

0xd00a,	// (0x0006adbc) bg_button_pane_cp02

0x5770,	// (0x00063522) cell_dialer_keypad_pane_g1_ParamLimits

0x5770,	// (0x00063522) cell_dialer_keypad_pane_g1

0xd00a,	// (0x0006adbc) bg_button_pane_cp03_ParamLimits

0xd00a,	// (0x0006adbc) bg_button_pane_cp03

0x5785,	// (0x00063537) cell_dialer_command_1_pane_g1_ParamLimits

0x5785,	// (0x00063537) cell_dialer_command_1_pane_g1

0xd016,	// (0x0006adc8) bg_button_pane_cp04

0x5799,	// (0x0006354b) cell_dialer_command_2_pane_g1

0xaa7f,	// (0x00068831) bg_button_pane_cp06

0xd01e,	// (0x0006add0) dialer_ne_clear_pane_g1

0x3693,	// (0x00061445) navi_pane_g2

0x36c1,	// (0x00061473) navi_pane_g3

0x0002,

0xf3e5,	// (0x0006d197) navi_pane_g

0x36ec,	// (0x0006149e) navi_pane_mv_g2

0x3713,	// (0x000614c5) navi_pane_mv_g5

0x371b,	// (0x000614cd) navi_pane_mv_t1

0xa8c9,	// (0x0006867b) main_clock2_pane

0x57d7,	// (0x00063589) main_clock2_list_pane_ParamLimits

0x57d7,	// (0x00063589) main_clock2_list_pane

0x5801,	// (0x000635b3) main_clock2_pane_t1_ParamLimits

0x5801,	// (0x000635b3) main_clock2_pane_t1

0x5823,	// (0x000635d5) main_clock2_pane_t2_ParamLimits

0x5823,	// (0x000635d5) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0006d57b) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0006d57b) main_clock2_pane_t

0x5880,	// (0x00063632) popup_clock_analogue_window_cp03_ParamLimits

0x5880,	// (0x00063632) popup_clock_analogue_window_cp03

0x58a0,	// (0x00063652) popup_clock_digital_window_cp02_ParamLimits

0x58a0,	// (0x00063652) popup_clock_digital_window_cp02

0x5911,	// (0x000636c3) main_clock2_list_single_pane_ParamLimits

0x5911,	// (0x000636c3) main_clock2_list_single_pane

0xaa7f,	// (0x00068831) list_highlight_pane_cp05

0xd05a,	// (0x0006ae0c) main_clock2_list_single_pane_t1

0x2128,	// (0x0005feda) popup_toolbar_window_cp04_ParamLimits

0x4e90,	// (0x00062c42) camera2_autofocus_pane_g2_ParamLimits

0x4e90,	// (0x00062c42) camera2_autofocus_pane_g2

0x4e9c,	// (0x00062c4e) camera2_autofocus_pane_g3_ParamLimits

0x4e9c,	// (0x00062c4e) camera2_autofocus_pane_g3

0x4ea8,	// (0x00062c5a) camera2_autofocus_pane_g4_ParamLimits

0x4ea8,	// (0x00062c5a) camera2_autofocus_pane_g4

0x4eb4,	// (0x00062c66) camera2_autofocus_pane_g5_ParamLimits

0x4eb4,	// (0x00062c66) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0006d4bf) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0006d4bf) camera2_autofocus_pane_g

0x507f,	// (0x00062e31) camera2_autofocus_pane_cp_g2

0x5087,	// (0x00062e39) camera2_autofocus_pane_cp_g3

0x508f,	// (0x00062e41) camera2_autofocus_pane_cp_g4

0x5097,	// (0x00062e49) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0006d525) camera2_autofocus_pane_cp_g

0x56af,	// (0x00063461) popup_dialer_spcha_window

0x9c32,	// (0x000679e4) bg_popup_sub_pane_cp07

0xd068,	// (0x0006ae1a) list_spcha_pane

0xd070,	// (0x0006ae22) list_single_spcha_pane_ParamLimits

0xd070,	// (0x0006ae22) list_single_spcha_pane

0x9c32,	// (0x000679e4) list_highlight_pane_cp06

0xd081,	// (0x0006ae33) list_single_spcha_pane_t1

0xc256,	// (0x0006a008) popup_call2_audio_out_window_g4_ParamLimits

0xc256,	// (0x0006a008) popup_call2_audio_out_window_g4

0x9c32,	// (0x000679e4) main_imed2_pane

0xc849,	// (0x0006a5fb) popup_imed_adjust2_window

0x451c,	// (0x000622ce) popup_imed_trans_window_ParamLimits

0x451c,	// (0x000622ce) popup_imed_trans_window

0xcaa6,	// (0x0006a858) popup_blid_sat_info2_window_t1

0xcab4,	// (0x0006a866) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0006d454) popup_blid_sat_info2_window_t

0x59bb,	// (0x0006376d) aid_size_cell_colour_35

0x59d5,	// (0x00063787) aid_size_cell_colour_112

0x59ec,	// (0x0006379e) aid_size_cell_effect

0xa2c9,	// (0x0006807b) bg_tb_trans_pane_cp02

0xb13d,	// (0x00068eef) heading_imed_pane

0x5a06,	// (0x000637b8) listscroll_imed_pane

0xd08f,	// (0x0006ae41) heading_imed_pane_g1

0xd097,	// (0x0006ae49) heading_imed_pane_t1

0xd0a5,	// (0x0006ae57) grid_imed_colour_35_pane_ParamLimits

0xd0a5,	// (0x0006ae57) grid_imed_colour_35_pane

0x5a12,	// (0x000637c4) grid_imed_effect_pane

0xd0c1,	// (0x0006ae73) list_imed_aspect_pane

0x5a22,	// (0x000637d4) scroll_pane_cp027_ParamLimits

0x5a22,	// (0x000637d4) scroll_pane_cp027

0x5a2e,	// (0x000637e0) cell_imed_effect_pane_ParamLimits

0x5a2e,	// (0x000637e0) cell_imed_effect_pane

0xd0c9,	// (0x0006ae7b) cell_imed_colour_pane_ParamLimits

0xd0c9,	// (0x0006ae7b) cell_imed_colour_pane

0xd113,	// (0x0006aec5) cell_imed_colour_pane_g1_ParamLimits

0xd113,	// (0x0006aec5) cell_imed_colour_pane_g1

0xd124,	// (0x0006aed6) hgihlgiht_grid_pane_cp016_ParamLimits

0xd124,	// (0x0006aed6) hgihlgiht_grid_pane_cp016

0x5a4a,	// (0x000637fc) cell_imed_effect_pane_g1

0x5a52,	// (0x00063804) grid_highlight_pane_cp017

0xd135,	// (0x0006aee7) list_imed_single_pane_ParamLimits

0xd135,	// (0x0006aee7) list_imed_single_pane

0x9c32,	// (0x000679e4) list_highlight_pane_cp07

0xd149,	// (0x0006aefb) list_imed_aspect_pane_comp1_t1

0xc81d,	// (0x0006a5cf) bg_tb_trans_pane_cp05

0xd16b,	// (0x0006af1d) popup_imed_adjust2_window_g1

0xd19a,	// (0x0006af4c) popup_imed_adjust2_window_t1

0xd1b2,	// (0x0006af64) slider_imed_adjust_pane

0xd1c6,	// (0x0006af78) slider_imed_adjust_pane_g1

0xd1d6,	// (0x0006af88) slider_imed_adjust_pane_g2

0xd1e6,	// (0x0006af98) slider_imed_adjust_pane_g3

0xd1f7,	// (0x0006afa9) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0006d598) slider_imed_adjust_pane_g

0x5a5b,	// (0x0006380d) aid_size_cell_clipart2

0x5a67,	// (0x00063819) grid_imed_clipart_pane

0xd208,	// (0x0006afba) scroll_pane_cp031

0x5a71,	// (0x00063823) cell_imed_clipart_pane_ParamLimits

0x5a71,	// (0x00063823) cell_imed_clipart_pane

0x5a8f,	// (0x00063841) cell_imed_clipart_pane_g1

0x9c32,	// (0x000679e4) grid_highlight_pane_cp014

0x57e3,	// (0x00063595) main_clock2_pane_g1_ParamLimits

0x57e3,	// (0x00063595) main_clock2_pane_g1

0x58bc,	// (0x0006366e) aid_call2_pane_cp10

0x58ce,	// (0x00063680) aid_call_pane_cp10

0xb331,	// (0x000690e3) popup_clock_analogue_window_cp10_g1

0xb331,	// (0x000690e3) popup_clock_analogue_window_cp10_g2

0x58e0,	// (0x00063692) popup_clock_analogue_window_cp10_g3

0x58e0,	// (0x00063692) popup_clock_analogue_window_cp10_g4

0xb331,	// (0x000690e3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0006d586) popup_clock_analogue_window_cp10_g

0x58f2,	// (0x000636a4) popup_clock_analogue_window_cp10_t1

0x5923,	// (0x000636d5) clock_digital_number_pane_cp10_ParamLimits

0x5923,	// (0x000636d5) clock_digital_number_pane_cp10

0x593b,	// (0x000636ed) clock_digital_number_pane_cp11_ParamLimits

0x593b,	// (0x000636ed) clock_digital_number_pane_cp11

0x5953,	// (0x00063705) clock_digital_number_pane_cp12_ParamLimits

0x5953,	// (0x00063705) clock_digital_number_pane_cp12

0x596b,	// (0x0006371d) clock_digital_number_pane_cp13_ParamLimits

0x596b,	// (0x0006371d) clock_digital_number_pane_cp13

0x5983,	// (0x00063735) clock_digital_separator_pane_cp10_ParamLimits

0x5983,	// (0x00063735) clock_digital_separator_pane_cp10

0x599b,	// (0x0006374d) popup_clock_digital_window_cp02_t1_ParamLimits

0x599b,	// (0x0006374d) popup_clock_digital_window_cp02_t1

0xa7fc,	// (0x000685ae) clock_digital_number_pane_cp10_g1

0xa7fc,	// (0x000685ae) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0006d5a1) clock_digital_number_pane_cp10_g

0xa7fc,	// (0x000685ae) clock_digital_separator_pane_cp10_g1

0xa7fc,	// (0x000685ae) clock_digital_separator_pane_g2_cp10

0xb3cc,	// (0x0006917e) navi_pane_vded_g4

0xb3d5,	// (0x00069187) navi_pane_vded_g5

0xb3de,	// (0x00069190) navi_pane_vded_t1

0x9c32,	// (0x000679e4) main_vded_pane

0x5a98,	// (0x0006384a) main_vded_pane_g1

0x5aa4,	// (0x00063856) main_vded_pane_g2

0x5aae,	// (0x00063860) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0006d5a6) main_vded_pane_g

0x5ab8,	// (0x0006386a) main_vded_pane_t1

0x5ac6,	// (0x00063878) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0006d5ad) main_vded_pane_t

0x5ad4,	// (0x00063886) vded_slider_pane

0x5ade,	// (0x00063890) vded_video_pane

0xd210,	// (0x0006afc2) vded_video_pane_g1

0x5aea,	// (0x0006389c) vded_video_pane_g2

0xcc6e,	// (0x0006aa20) vded_video_pane_g3

0x0002,

0xf800,	// (0x0006d5b2) vded_video_pane_g

0xd21a,	// (0x0006afcc) vded_slider_pane_g1

0xc9bb,	// (0x0006a76d) vded_slider_pane_g2

0xd223,	// (0x0006afd5) vded_slider_pane_g3

0xd22c,	// (0x0006afde) vded_slider_pane_g4

0xd235,	// (0x0006afe7) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0006d5b9) vded_slider_pane_g

0x55cd,	// (0x0006337f) mup3_rocker_pane_ParamLimits

0x55cd,	// (0x0006337f) mup3_rocker_pane

0x5af3,	// (0x000638a5) mup3_control_keys_pane_g1

0x5afb,	// (0x000638ad) mup3_control_keys_pane_g2

0x5b03,	// (0x000638b5) mup3_control_keys_pane_g3

0x5b0b,	// (0x000638bd) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0006d5c4) mup3_control_keys_pane_g

0x0dc8,	// (0x0005eb7a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dc8,	// (0x0005eb7a) popup_toolbar2_fixed_window_cp01

0x55e9,	// (0x0006339b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55e9,	// (0x0006339b) popup_toolbar2_fixed_window_cp02

0xbb95,	// (0x00069947) popup_call2_audio_second_window_t4_ParamLimits

0xbb95,	// (0x00069947) popup_call2_audio_second_window_t4

0xc0c3,	// (0x00069e75) popup_call2_audio_first_window_t6_ParamLimits

0xc0c3,	// (0x00069e75) popup_call2_audio_first_window_t6

0xc359,	// (0x0006a10b) popup_call2_audio_out_window_t6_ParamLimits

0xc359,	// (0x0006a10b) popup_call2_audio_out_window_t6

0x9c32,	// (0x000679e4) main_vitu_pane

0x5b1b,	// (0x000638cd) aid_size_cell_itu_ParamLimits

0x5b1b,	// (0x000638cd) aid_size_cell_itu

0x0dfa,	// (0x0005ebac) bg_popup_window_pane_cp08_ParamLimits

0x0dfa,	// (0x0005ebac) bg_popup_window_pane_cp08

0x5b29,	// (0x000638db) field_vitu_entry_pane_ParamLimits

0x5b29,	// (0x000638db) field_vitu_entry_pane

0x5b38,	// (0x000638ea) grid_vitu_function_pane_ParamLimits

0x5b38,	// (0x000638ea) grid_vitu_function_pane

0x5b48,	// (0x000638fa) grid_vitu_itu_pane_ParamLimits

0x5b48,	// (0x000638fa) grid_vitu_itu_pane

0x5b58,	// (0x0006390a) cell_vitu_itu_pane_ParamLimits

0x5b58,	// (0x0006390a) cell_vitu_itu_pane

0x5b6f,	// (0x00063921) cell_vitu_function_pane_ParamLimits

0x5b6f,	// (0x00063921) cell_vitu_function_pane

0xa2c9,	// (0x0006807b) bg_popup_sub_pane_cp08_ParamLimits

0xa2c9,	// (0x0006807b) bg_popup_sub_pane_cp08

0x5b83,	// (0x00063935) field_vitu_entry_pane_t1_ParamLimits

0x5b83,	// (0x00063935) field_vitu_entry_pane_t1

0xd256,	// (0x0006b008) field_vitu_entry_pane_t2_ParamLimits

0xd256,	// (0x0006b008) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0006d5d2) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0006d5d2) field_vitu_entry_pane_t

0xd273,	// (0x0006b025) bg_button_pane_cp05_ParamLimits

0xd273,	// (0x0006b025) bg_button_pane_cp05

0x5b9d,	// (0x0006394f) cell_vitu_itu_pane_g1

0x5bb5,	// (0x00063967) cell_vitu_itu_pane_t1_ParamLimits

0x5bb5,	// (0x00063967) cell_vitu_itu_pane_t1

0x5bc7,	// (0x00063979) cell_vitu_itu_pane_t2_ParamLimits

0x5bc7,	// (0x00063979) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0006d5d7) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0006d5d7) cell_vitu_itu_pane_t

0xd281,	// (0x0006b033) bg_button_pane_cp07

0x5c0a,	// (0x000639bc) cell_vitu_function_pane_g1

0x108d,	// (0x0005ee3f) main_calc_pane_g1

0x0bbc,	// (0x0005e96e) aid_visual_content_pane

0x9c32,	// (0x000679e4) main_vradio_pane

0x5c13,	// (0x000639c5) main_vradio_pane_g1_ParamLimits

0x5c13,	// (0x000639c5) main_vradio_pane_g1

0xd28b,	// (0x0006b03d) main_vradio_pane_g2_ParamLimits

0xd28b,	// (0x0006b03d) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0006d5de) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0006d5de) main_vradio_pane_g

0x5c21,	// (0x000639d3) main_vradio_pane_t1_ParamLimits

0x5c21,	// (0x000639d3) main_vradio_pane_t1

0x5c33,	// (0x000639e5) main_vradio_pane_t2_ParamLimits

0x5c33,	// (0x000639e5) main_vradio_pane_t2

0xd298,	// (0x0006b04a) main_vradio_pane_t3_ParamLimits

0xd298,	// (0x0006b04a) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0006d5e3) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0006d5e3) main_vradio_pane_t

0x5c45,	// (0x000639f7) vradio_rocker_control_pane_ParamLimits

0x5c45,	// (0x000639f7) vradio_rocker_control_pane

0x5c51,	// (0x00063a03) vradio_station_info_pane_ParamLimits

0x5c51,	// (0x00063a03) vradio_station_info_pane

0xd2ac,	// (0x0006b05e) vradio_frequency_info_pane_ParamLimits

0xd2ac,	// (0x0006b05e) vradio_frequency_info_pane

0xcc6e,	// (0x0006aa20) vradio_station_info_pane_g1

0xd2bb,	// (0x0006b06d) vradio_station_info_pane_t1_ParamLimits

0xd2bb,	// (0x0006b06d) vradio_station_info_pane_t1

0xd2dd,	// (0x0006b08f) vradio_station_info_pane_t2_ParamLimits

0xd2dd,	// (0x0006b08f) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0006d5ea) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0006d5ea) vradio_station_info_pane_t

0xd2ef,	// (0x0006b0a1) vradio_tuning_pane

0xd2f7,	// (0x0006b0a9) vradio_rocker_control_pane_g1

0xd2ff,	// (0x0006b0b1) vradio_rocker_control_pane_g2

0xd307,	// (0x0006b0b9) vradio_rocker_control_pane_g3

0xd30f,	// (0x0006b0c1) vradio_rocker_control_pane_g4

0xd317,	// (0x0006b0c9) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0006d5ef) vradio_rocker_control_pane_g

0x5c5e,	// (0x00063a10) vradio_frequency_info_pane_g1

0xd31f,	// (0x0006b0d1) vradio_frequency_info_pane_t1_ParamLimits

0xd31f,	// (0x0006b0d1) vradio_frequency_info_pane_t1

0x5c68,	// (0x00063a1a) vradio_tuning_pane_g1

0x5c73,	// (0x00063a25) vradio_tuning_pane_t1

0x9c58,	// (0x00067a0a) area_side_right_pane_ParamLimits

0x9c58,	// (0x00067a0a) area_side_right_pane

0xc7d8,	// (0x0006a58a) status_small_pane_g1

0xc7e0,	// (0x0006a592) status_small_pane_g2

0xc7e9,	// (0x0006a59b) status_small_pane_g3

0xc7f2,	// (0x0006a5a4) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0006d3aa) status_small_pane_g

0xc7fb,	// (0x0006a5ad) status_small_pane_t1

0x9c32,	// (0x000679e4) main_video3_pane

0xd333,	// (0x0006b0e5) cams_zoom_vslider_pane

0xd33b,	// (0x0006b0ed) image3_wide_pane_ParamLimits

0xd33b,	// (0x0006b0ed) image3_wide_pane

0xd355,	// (0x0006b107) image3_wide_small_pane

0xd361,	// (0x0006b113) main_video3_pane_g1_ParamLimits

0xd361,	// (0x0006b113) main_video3_pane_g1

0xd37d,	// (0x0006b12f) main_video3_pane_g2_ParamLimits

0xd37d,	// (0x0006b12f) main_video3_pane_g2

0x0001,

0xf848,	// (0x0006d5fa) main_video3_pane_g_ParamLimits

0xf848,	// (0x0006d5fa) main_video3_pane_g

0xd399,	// (0x0006b14b) main_video3_pane_t1_ParamLimits

0xd399,	// (0x0006b14b) main_video3_pane_t1

0xd3c4,	// (0x0006b176) main_video3_pane_t2_ParamLimits

0xd3c4,	// (0x0006b176) main_video3_pane_t2

0xd3f1,	// (0x0006b1a3) main_video3_pane_t3_ParamLimits

0xd3f1,	// (0x0006b1a3) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0006d5ff) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0006d5ff) main_video3_pane_t

0xd41e,	// (0x0006b1d0) cams_zoom_vslider_pane_g1

0xd427,	// (0x0006b1d9) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0006d606) cams_zoom_vslider_pane_g

0xd42f,	// (0x0006b1e1) small_slider_vertical_pane

0xcc6e,	// (0x0006aa20) small_slider_vertical_pane_g1

0xcc6e,	// (0x0006aa20) small_slider_vertical_pane_g2

0xd437,	// (0x0006b1e9) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0006d60b) small_slider_vertical_pane_g

0x9c32,	// (0x000679e4) main_hwr_training_pane

0xd440,	// (0x0006b1f2) hwr_training_instruct_pane_ParamLimits

0xd440,	// (0x0006b1f2) hwr_training_instruct_pane

0x5c82,	// (0x00063a34) hwr_training_navi_pane_ParamLimits

0x5c82,	// (0x00063a34) hwr_training_navi_pane

0x5c9c,	// (0x00063a4e) hwr_training_write_pane_ParamLimits

0x5c9c,	// (0x00063a4e) hwr_training_write_pane

0x9c32,	// (0x000679e4) bg_frame_shadow_pane

0xd477,	// (0x0006b229) hwr_training_write_pane_g1

0xd47f,	// (0x0006b231) hwr_training_write_pane_g2

0xd487,	// (0x0006b239) hwr_training_write_pane_g3

0xd48f,	// (0x0006b241) hwr_training_write_pane_g4

0xd497,	// (0x0006b249) hwr_training_write_pane_g5

0xd49f,	// (0x0006b251) hwr_training_write_pane_g6

0xd4a7,	// (0x0006b259) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0006d612) hwr_training_write_pane_g

0x5cd4,	// (0x00063a86) hwr_training_navi_pane_g1_ParamLimits

0x5cd4,	// (0x00063a86) hwr_training_navi_pane_g1

0x5ce6,	// (0x00063a98) hwr_training_navi_pane_g2_ParamLimits

0x5ce6,	// (0x00063a98) hwr_training_navi_pane_g2

0x5cf8,	// (0x00063aaa) hwr_training_navi_pane_g3_ParamLimits

0x5cf8,	// (0x00063aaa) hwr_training_navi_pane_g3

0x5d08,	// (0x00063aba) hwr_training_navi_pane_g4_ParamLimits

0x5d08,	// (0x00063aba) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0006d621) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0006d621) hwr_training_navi_pane_g

0x5d22,	// (0x00063ad4) hwr_training_navi_pane_t1

0x5d30,	// (0x00063ae2) list_single_hwr_training_instruct_pane_ParamLimits

0x5d30,	// (0x00063ae2) list_single_hwr_training_instruct_pane

0xd4af,	// (0x0006b261) list_single_hwr_training_instruct_pane_t1

0xcbae,	// (0x0006a960) bg_frame_shadow_pane_g1

0xd4be,	// (0x0006b270) bg_frame_shadow_pane_g2

0xd4c6,	// (0x0006b278) bg_frame_shadow_pane_g3

0xd4ce,	// (0x0006b280) bg_frame_shadow_pane_g4

0xd4d6,	// (0x0006b288) bg_frame_shadow_pane_g5

0xd4de,	// (0x0006b290) bg_frame_shadow_pane_g6

0xd4e6,	// (0x0006b298) bg_frame_shadow_pane_g7

0xa994,	// (0x00068746) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0006d62c) bg_frame_shadow_pane_g

0x9c32,	// (0x000679e4) main_video_tele_dialer_pane

0x5d49,	// (0x00063afb) aid_size_cell_video_keypad_ParamLimits

0x5d49,	// (0x00063afb) aid_size_cell_video_keypad

0x5d59,	// (0x00063b0b) grid_video_dialer_keypad_pane_ParamLimits

0x5d59,	// (0x00063b0b) grid_video_dialer_keypad_pane

0x5d8b,	// (0x00063b3d) video_down_pane_cp_ParamLimits

0x5d8b,	// (0x00063b3d) video_down_pane_cp

0x5db3,	// (0x00063b65) cell_video_dialer_keypad_pane_ParamLimits

0x5db3,	// (0x00063b65) cell_video_dialer_keypad_pane

0xd4ee,	// (0x0006b2a0) bg_button_pane_cp08_ParamLimits

0xd4ee,	// (0x0006b2a0) bg_button_pane_cp08

0x5dca,	// (0x00063b7c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5dca,	// (0x00063b7c) cell_video_dialer_keypad_pane_g1

0x55c1,	// (0x00063373) mup3_rocker2_pane_ParamLimits

0x55c1,	// (0x00063373) mup3_rocker2_pane

0xcc6e,	// (0x0006aa20) mup3_rocker2_pane_g1

0x449e,	// (0x00062250) main_dialer2_pane

0x9c32,	// (0x000679e4) main_mp4_pane

0x5e09,	// (0x00063bbb) main_mp4_pane_g1_ParamLimits

0x5e09,	// (0x00063bbb) main_mp4_pane_g1

0x5e17,	// (0x00063bc9) main_mp4_pane_g2_ParamLimits

0x5e17,	// (0x00063bc9) main_mp4_pane_g2

0x5e25,	// (0x00063bd7) main_mp4_pane_g3_ParamLimits

0x5e25,	// (0x00063bd7) main_mp4_pane_g3

0x5e78,	// (0x00063c2a) main_mp4_pane_g4_ParamLimits

0x5e78,	// (0x00063c2a) main_mp4_pane_g4

0x5ea0,	// (0x00063c52) main_mp4_pane_g5_ParamLimits

0x5ea0,	// (0x00063c52) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0006d64c) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0006d64c) main_mp4_pane_g

0x5ef0,	// (0x00063ca2) main_mp4_pane_t1_ParamLimits

0x5ef0,	// (0x00063ca2) main_mp4_pane_t1

0x5f4c,	// (0x00063cfe) main_mp4_pane_t2_ParamLimits

0x5f4c,	// (0x00063cfe) main_mp4_pane_t2

0xd4fa,	// (0x0006b2ac) main_mp4_pane_t3_ParamLimits

0xd4fa,	// (0x0006b2ac) main_mp4_pane_t3

0x5f9e,	// (0x00063d50) main_mp4_pane_t4_ParamLimits

0x5f9e,	// (0x00063d50) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0006d659) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0006d659) main_mp4_pane_t

0x5fde,	// (0x00063d90) mp4_progress_pane_ParamLimits

0x5fde,	// (0x00063d90) mp4_progress_pane

0x6028,	// (0x00063dda) mp4_rocker_pane_ParamLimits

0x6028,	// (0x00063dda) mp4_rocker_pane

0xd522,	// (0x0006b2d4) mp4_progress_pane_t1

0xd53b,	// (0x0006b2ed) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0006d662) mp4_progress_pane_t

0xd554,	// (0x0006b306) mup_progress_pane_cp04

0xda9d,	// (0x0006b84f) mp4_rocker_pane_g1

0x604a,	// (0x00063dfc) aid_cell_size_keypad2_ParamLimits

0x604a,	// (0x00063dfc) aid_cell_size_keypad2

0x605a,	// (0x00063e0c) dialer2_ne_pane_ParamLimits

0x605a,	// (0x00063e0c) dialer2_ne_pane

0x6066,	// (0x00063e18) grid_dialer2_keypad_pane_ParamLimits

0x6066,	// (0x00063e18) grid_dialer2_keypad_pane

0xdaa7,	// (0x0006b859) bg_popup_call_pane_cp07_ParamLimits

0xdaa7,	// (0x0006b859) bg_popup_call_pane_cp07

0x6074,	// (0x00063e26) dialer2_ne_pane_t1_ParamLimits

0x6074,	// (0x00063e26) dialer2_ne_pane_t1

0x6099,	// (0x00063e4b) cell_dialer2_keypad_pane_ParamLimits

0x6099,	// (0x00063e4b) cell_dialer2_keypad_pane

0xd572,	// (0x0006b324) bg_button_pane_pane_cp04_ParamLimits

0xd572,	// (0x0006b324) bg_button_pane_pane_cp04

0x60b0,	// (0x00063e62) cell_dialer2_keypad_pane_g1_ParamLimits

0x60b0,	// (0x00063e62) cell_dialer2_keypad_pane_g1

0x1ffa,	// (0x0005fdac) aid_placing_vt_set_content_ParamLimits

0x1ffa,	// (0x0005fdac) aid_placing_vt_set_content

0x2022,	// (0x0005fdd4) aid_placing_vt_set_title_ParamLimits

0x2022,	// (0x0005fdd4) aid_placing_vt_set_title

0x9c32,	// (0x000679e4) main_image3_pane

0x614a,	// (0x00063efc) area_side_right_pane_cp01_ParamLimits

0x614a,	// (0x00063efc) area_side_right_pane_cp01

0x6179,	// (0x00063f2b) main_image3_pane_g1_ParamLimits

0x6179,	// (0x00063f2b) main_image3_pane_g1

0x6187,	// (0x00063f39) main_image3_pane_g2_ParamLimits

0x6187,	// (0x00063f39) main_image3_pane_g2

0x61a0,	// (0x00063f52) main_image3_pane_g3_ParamLimits

0x61a0,	// (0x00063f52) main_image3_pane_g3

0x61b9,	// (0x00063f6b) main_image3_pane_g4_ParamLimits

0x61b9,	// (0x00063f6b) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0006d671) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0006d671) main_image3_pane_g

0x61d2,	// (0x00063f84) main_image3_pane_t1_ParamLimits

0x61d2,	// (0x00063f84) main_image3_pane_t1

0x61f7,	// (0x00063fa9) main_image3_pane_t2_ParamLimits

0x61f7,	// (0x00063fa9) main_image3_pane_t2

0x6216,	// (0x00063fc8) main_image3_pane_t3_ParamLimits

0x6216,	// (0x00063fc8) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0006d67a) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0006d67a) main_image3_pane_t

0x0dfa,	// (0x0005ebac) grid_sctrl_middle_pane_cp01_ParamLimits

0x0dfa,	// (0x0005ebac) grid_sctrl_middle_pane_cp01

0x6277,	// (0x00064029) cell_sctrl_middle_pane_cp01_ParamLimits

0x6277,	// (0x00064029) cell_sctrl_middle_pane_cp01

0x6288,	// (0x0006403a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6288,	// (0x0006403a) cell_sctrl_middle_pane_cp01_g1

0x9c32,	// (0x000679e4) main_call4_pane

0x6295,	// (0x00064047) aid_size_button_call4_ParamLimits

0x6295,	// (0x00064047) aid_size_button_call4

0x62c7,	// (0x00064079) call4_windows_pane_ParamLimits

0x62c7,	// (0x00064079) call4_windows_pane

0x62e3,	// (0x00064095) grid_call4_button_pane_ParamLimits

0x62e3,	// (0x00064095) grid_call4_button_pane

0xd57e,	// (0x0006b330) call4_windows_conf_pane

0x6307,	// (0x000640b9) popup_call4_audio_first_window_ParamLimits

0x6307,	// (0x000640b9) popup_call4_audio_first_window

0x6333,	// (0x000640e5) popup_call4_audio_second_window_ParamLimits

0x6333,	// (0x000640e5) popup_call4_audio_second_window

0xd5bb,	// (0x0006b36d) popup_call4_audio_wait_window_ParamLimits

0xd5bb,	// (0x0006b36d) popup_call4_audio_wait_window

0x6347,	// (0x000640f9) cell_call4_button_pane_ParamLimits

0x6347,	// (0x000640f9) cell_call4_button_pane

0x636a,	// (0x0006411c) bg_button_pane_cp09_ParamLimits

0x636a,	// (0x0006411c) bg_button_pane_cp09

0x6376,	// (0x00064128) cell_call4_button_pane_g1_ParamLimits

0x6376,	// (0x00064128) cell_call4_button_pane_g1

0x6383,	// (0x00064135) cell_call4_button_pane_t1_ParamLimits

0x6383,	// (0x00064135) cell_call4_button_pane_t1

0xd60f,	// (0x0006b3c1) popup_call4_audio_conf_window_ParamLimits

0xd60f,	// (0x0006b3c1) popup_call4_audio_conf_window

0x55f6,	// (0x000633a8) mup3_progress_pane_t1_ParamLimits

0x5615,	// (0x000633c7) mup3_progress_pane_t2_ParamLimits

0xcf19,	// (0x0006accb) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0006d54e) mup3_progress_pane_t_ParamLimits

0xcf36,	// (0x0006ace8) mup_progress_pane_cp03_ParamLimits

0x5b13,	// (0x000638c5) mup3_control_keys_pane_g4_copy1

0x600c,	// (0x00063dbe) mp4_rocker2_pane_ParamLimits

0x600c,	// (0x00063dbe) mp4_rocker2_pane

0xd629,	// (0x0006b3db) mp4_rocker2_pane_g1

0xd631,	// (0x0006b3e3) mp4_rocker2_pane_g2

0x6395,	// (0x00064147) mp4_rocker2_pane_g3

0x639d,	// (0x0006414f) mp4_rocker2_pane_g4

0x63a5,	// (0x00064157) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0006d683) mp4_rocker2_pane_g

0x9c32,	// (0x000679e4) main_camera4_pane

0x9c32,	// (0x000679e4) main_video4_pane

0x5d67,	// (0x00063b19) main_video_tele_dialer_pane_t1_ParamLimits

0x5d67,	// (0x00063b19) main_video_tele_dialer_pane_t1

0x5d79,	// (0x00063b2b) main_video_tele_dialer_pane_t2_ParamLimits

0x5d79,	// (0x00063b2b) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0006d63d) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0006d63d) main_video_tele_dialer_pane_t

0x63c5,	// (0x00064177) cam4_autofocus_pane_ParamLimits

0x63c5,	// (0x00064177) cam4_autofocus_pane

0x63dd,	// (0x0006418f) cam4_image_uncrop_pane_ParamLimits

0x63dd,	// (0x0006418f) cam4_image_uncrop_pane

0x63f6,	// (0x000641a8) cam4_indicators_pane_ParamLimits

0x63f6,	// (0x000641a8) cam4_indicators_pane

0x6412,	// (0x000641c4) main_camera4_pane_g1_ParamLimits

0x6412,	// (0x000641c4) main_camera4_pane_g1

0x641e,	// (0x000641d0) main_camera4_pane_g2_ParamLimits

0x641e,	// (0x000641d0) main_camera4_pane_g2

0x641e,	// (0x000641d0) main_camera4_pane_g3_ParamLimits

0x641e,	// (0x000641d0) main_camera4_pane_g3

0x642a,	// (0x000641dc) main_camera4_pane_g4_ParamLimits

0x642a,	// (0x000641dc) main_camera4_pane_g4

0x6436,	// (0x000641e8) main_camera4_pane_g5_ParamLimits

0x6436,	// (0x000641e8) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0006d68e) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0006d68e) main_camera4_pane_g

0x6450,	// (0x00064202) main_camera4_pane_t1_ParamLimits

0x6450,	// (0x00064202) main_camera4_pane_t1

0x649a,	// (0x0006424c) bg_tb_trans_pane_cp06

0x64b0,	// (0x00064262) cam4_indicators_pane_g1

0x64c1,	// (0x00064273) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0006d6a9) cam4_indicators_pane_g

0x64d9,	// (0x0006428b) cam4_indicators_pane_t1

0x6503,	// (0x000642b5) main_video4_pane_g1_ParamLimits

0x6503,	// (0x000642b5) main_video4_pane_g1

0x650f,	// (0x000642c1) main_video4_pane_g2_ParamLimits

0x650f,	// (0x000642c1) main_video4_pane_g2

0x651b,	// (0x000642cd) main_video4_pane_g3_ParamLimits

0x651b,	// (0x000642cd) main_video4_pane_g3

0x6527,	// (0x000642d9) main_video4_pane_g4_ParamLimits

0x6527,	// (0x000642d9) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0006d6b0) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0006d6b0) main_video4_pane_g

0x6549,	// (0x000642fb) vid4_indicators_pane_ParamLimits

0x6549,	// (0x000642fb) vid4_indicators_pane

0x6568,	// (0x0006431a) video4_image_uncrop_cif_pane_ParamLimits

0x6568,	// (0x0006431a) video4_image_uncrop_cif_pane

0x6577,	// (0x00064329) video4_image_uncrop_nhd_pane_ParamLimits

0x6577,	// (0x00064329) video4_image_uncrop_nhd_pane

0x63dd,	// (0x0006418f) video4_image_uncrop_vga_pane_ParamLimits

0x63dd,	// (0x0006418f) video4_image_uncrop_vga_pane

0x6586,	// (0x00064338) bg_tb_trans_pane_cp07

0x659e,	// (0x00064350) vid4_indicators_pane_g1

0x65b4,	// (0x00064366) vid4_indicators_pane_g2

0x65c8,	// (0x0006437a) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0006d6bb) vid4_indicators_pane_g

0x65f9,	// (0x000643ab) vid4_indicators_pane_t1

0x6610,	// (0x000643c2) cam4_autofocus_pane_g1

0x6618,	// (0x000643ca) cam4_autofocus_pane_g2

0x6620,	// (0x000643d2) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0006d6c6) cam4_autofocus_pane_g

0x6628,	// (0x000643da) cam4_autofocus_pane_g3_copy1

0x5d97,	// (0x00063b49) video_down_pane_cp_t1

0x5da5,	// (0x00063b57) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0006d642) video_down_pane_cp_t

0x0dfa,	// (0x0005ebac) popup_vitu2_window_ParamLimits

0x0dfa,	// (0x0005ebac) popup_vitu2_window

0x6630,	// (0x000643e2) aid_size_cell2_itu2_ParamLimits

0x6630,	// (0x000643e2) aid_size_cell2_itu2

0x6652,	// (0x00064404) aid_size_cell_itu2_ParamLimits

0x6652,	// (0x00064404) aid_size_cell_itu2

0x6698,	// (0x0006444a) bg_popup_window_pane_cp09_ParamLimits

0x6698,	// (0x0006444a) bg_popup_window_pane_cp09

0x66a6,	// (0x00064458) field_vitu2_entry_pane_ParamLimits

0x66a6,	// (0x00064458) field_vitu2_entry_pane

0x66c6,	// (0x00064478) grid_vitu2_function_pane_ParamLimits

0x66c6,	// (0x00064478) grid_vitu2_function_pane

0x670a,	// (0x000644bc) grid_vitu2_itu_pane_ParamLimits

0x670a,	// (0x000644bc) grid_vitu2_itu_pane

0x6786,	// (0x00064538) cell_vitu2_itu_pane_ParamLimits

0x6786,	// (0x00064538) cell_vitu2_itu_pane

0x679d,	// (0x0006454f) cell_vitu2_function_pane_ParamLimits

0x679d,	// (0x0006454f) cell_vitu2_function_pane

0xd639,	// (0x0006b3eb) bg_popup_call_pane_cp08_ParamLimits

0xd639,	// (0x0006b3eb) bg_popup_call_pane_cp08

0xd650,	// (0x0006b402) field_vitu2_entry_pane_g1

0xd65c,	// (0x0006b40e) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0006d6cd) field_vitu2_entry_pane_g

0x67e1,	// (0x00064593) field_vitu2_entry_pane_t1_ParamLimits

0x67e1,	// (0x00064593) field_vitu2_entry_pane_t1

0xa2e3,	// (0x00068095) field_vitu2_entry_pane_t2_ParamLimits

0xa2e3,	// (0x00068095) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0006d6d4) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0006d6d4) field_vitu2_entry_pane_t

0x6811,	// (0x000645c3) bg_button_pane_cp010_ParamLimits

0x6811,	// (0x000645c3) bg_button_pane_cp010

0x681f,	// (0x000645d1) cell_vitu2_itu_pane_g1

0x683f,	// (0x000645f1) cell_vitu2_itu_pane_t1_ParamLimits

0x683f,	// (0x000645f1) cell_vitu2_itu_pane_t1

0x0ab4,	// (0x0005e866) cell_vitu2_itu_pane_t2_ParamLimits

0x0ab4,	// (0x0005e866) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0006d6de) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0006d6de) cell_vitu2_itu_pane_t

0x6586,	// (0x00064338) bg_button_pane_cp011

0x688b,	// (0x0006463d) cell_vitu2_function_pane_g1

0x9c32,	// (0x000679e4) main_myfav_hc_pane

0x6258,	// (0x0006400a) popup_image3_note_pane_ParamLimits

0x6258,	// (0x0006400a) popup_image3_note_pane

0x6266,	// (0x00064018) popup_image3_tool_bar_pane_ParamLimits

0x6266,	// (0x00064018) popup_image3_tool_bar_pane

0x0b2a,	// (0x0005e8dc) cell_vitu2_itu_pane_t3_ParamLimits

0x0b2a,	// (0x0005e8dc) cell_vitu2_itu_pane_t3

0x9c32,	// (0x000679e4) bg_popup_trans_pane

0xd67e,	// (0x0006b430) grid_image3_tool_bar_pane

0xd688,	// (0x0006b43a) bg_popup_trans_pane_g1

0xacdc,	// (0x00068a8e) bg_popup_trans_pane_g2

0xd690,	// (0x0006b442) bg_popup_trans_pane_g3

0xd698,	// (0x0006b44a) bg_popup_trans_pane_g4

0xd6a0,	// (0x0006b452) bg_popup_trans_pane_g5

0xd6a8,	// (0x0006b45a) bg_popup_trans_pane_g6

0xd6b0,	// (0x0006b462) bg_popup_trans_pane_g7

0xd6b8,	// (0x0006b46a) bg_popup_trans_pane_g8

0xacbc,	// (0x00068a6e) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0006d6e5) bg_popup_trans_pane_g

0xd6c0,	// (0x0006b472) cell_image3_tool_bar_pane_ParamLimits

0xd6c0,	// (0x0006b472) cell_image3_tool_bar_pane

0xcc6e,	// (0x0006aa20) cell_image3_tool_bar_pane_g1

0x9c32,	// (0x000679e4) bg_popup_trans_pane_cp1

0xd6d6,	// (0x0006b488) popup_image3_note_pane_t1

0xd6e4,	// (0x0006b496) popup_image3_note_pane_t2

0xd6f2,	// (0x0006b4a4) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0006d6f8) popup_image3_note_pane_t

0xd702,	// (0x0006b4b4) popup_image3_note_pane_t3_copy1

0x689f,	// (0x00064651) bg_myfav_hc_instruction_pane_ParamLimits

0x689f,	// (0x00064651) bg_myfav_hc_instruction_pane

0x68b7,	// (0x00064669) cell_myfav_contact_pane_ParamLimits

0x68b7,	// (0x00064669) cell_myfav_contact_pane

0x68d1,	// (0x00064683) cell_myfav_contact_pane_cp1_ParamLimits

0x68d1,	// (0x00064683) cell_myfav_contact_pane_cp1

0x68e9,	// (0x0006469b) cell_myfav_contact_pane_cp2_ParamLimits

0x68e9,	// (0x0006469b) cell_myfav_contact_pane_cp2

0x6901,	// (0x000646b3) cell_myfav_contact_pane_cp3_ParamLimits

0x6901,	// (0x000646b3) cell_myfav_contact_pane_cp3

0x6918,	// (0x000646ca) cell_myfav_contact_pane_cp4_ParamLimits

0x6918,	// (0x000646ca) cell_myfav_contact_pane_cp4

0x692e,	// (0x000646e0) cell_myfav_contact_pane_cp5_ParamLimits

0x692e,	// (0x000646e0) cell_myfav_contact_pane_cp5

0x6942,	// (0x000646f4) cell_myfav_contact_pane_cp6_ParamLimits

0x6942,	// (0x000646f4) cell_myfav_contact_pane_cp6

0x6956,	// (0x00064708) cell_myfav_contact_pane_cp7_ParamLimits

0x6956,	// (0x00064708) cell_myfav_contact_pane_cp7

0xd710,	// (0x0006b4c2) listscroll_gen_pane_cp05

0x696e,	// (0x00064720) main_myfav_hc_pane_g1_ParamLimits

0x696e,	// (0x00064720) main_myfav_hc_pane_g1

0x6988,	// (0x0006473a) main_myfav_hc_pane_g2_ParamLimits

0x6988,	// (0x0006473a) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0006d6ff) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0006d6ff) main_myfav_hc_pane_g

0x69ba,	// (0x0006476c) main_myfav_hc_pane_t1_ParamLimits

0x69ba,	// (0x0006476c) main_myfav_hc_pane_t1

0xd719,	// (0x0006b4cb) main_myfav_hc_pane_t2_ParamLimits

0xd719,	// (0x0006b4cb) main_myfav_hc_pane_t2

0xd72b,	// (0x0006b4dd) main_myfav_hc_pane_t3_ParamLimits

0xd72b,	// (0x0006b4dd) main_myfav_hc_pane_t3

0x69d1,	// (0x00064783) main_myfav_hc_pane_t4_ParamLimits

0x69d1,	// (0x00064783) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0006d706) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0006d706) main_myfav_hc_pane_t

0xcc6e,	// (0x0006aa20) bg_myfav_hc_instruction_pane_g1

0xd73d,	// (0x0006b4ef) cell_myfav_contact_pane_g1_ParamLimits

0xd73d,	// (0x0006b4ef) cell_myfav_contact_pane_g1

0xd73d,	// (0x0006b4ef) cell_myfav_contact_pane_g2_ParamLimits

0xd73d,	// (0x0006b4ef) cell_myfav_contact_pane_g2

0xd749,	// (0x0006b4fb) cell_myfav_contact_pane_g3_ParamLimits

0xd749,	// (0x0006b4fb) cell_myfav_contact_pane_g3

0xcf03,	// (0x0006acb5) cell_myfav_contact_pane_g4_ParamLimits

0xcf03,	// (0x0006acb5) cell_myfav_contact_pane_g4

0xd756,	// (0x0006b508) cell_myfav_contact_pane_g5_ParamLimits

0xd756,	// (0x0006b508) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0006d711) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0006d711) cell_myfav_contact_pane_g

0x69a2,	// (0x00064754) main_myfav_hc_pane_g3_ParamLimits

0x69a2,	// (0x00064754) main_myfav_hc_pane_g3

0x0d0c,	// (0x0005eabe) popup_adpt_find_window

0x69fb,	// (0x000647ad) afind_page_pane_ParamLimits

0x69fb,	// (0x000647ad) afind_page_pane

0x6a08,	// (0x000647ba) aid_size_cell_afind_ParamLimits

0x6a08,	// (0x000647ba) aid_size_cell_afind

0x6a22,	// (0x000647d4) bg_popup_sub_pane_cp09_ParamLimits

0x6a22,	// (0x000647d4) bg_popup_sub_pane_cp09

0x6a2f,	// (0x000647e1) find_pane_cp01_ParamLimits

0x6a2f,	// (0x000647e1) find_pane_cp01

0xd762,	// (0x0006b514) grid_afind_control_pane_ParamLimits

0xd762,	// (0x0006b514) grid_afind_control_pane

0x6a3c,	// (0x000647ee) grid_afind_pane_ParamLimits

0x6a3c,	// (0x000647ee) grid_afind_pane

0x6a58,	// (0x0006480a) cell_afind_pane_ParamLimits

0x6a58,	// (0x0006480a) cell_afind_pane

0xcc6e,	// (0x0006aa20) afind_page_pane_g1

0x6aa2,	// (0x00064854) afind_page_pane_g2

0x6aab,	// (0x0006485d) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0006d71c) afind_page_pane_g

0x6ab4,	// (0x00064866) afind_page_pane_t1

0xd776,	// (0x0006b528) cell_afind_grid_control_pane_ParamLimits

0xd776,	// (0x0006b528) cell_afind_grid_control_pane

0xd572,	// (0x0006b324) bg_button_pane_cp69_ParamLimits

0xd572,	// (0x0006b324) bg_button_pane_cp69

0x6ad4,	// (0x00064886) cell_afind_pane_g1_ParamLimits

0x6ad4,	// (0x00064886) cell_afind_pane_g1

0x6ae1,	// (0x00064893) cell_afind_pane_t1_ParamLimits

0x6ae1,	// (0x00064893) cell_afind_pane_t1

0xaad1,	// (0x00068883) bg_button_pane_cp72

0xd785,	// (0x0006b537) cell_afind_grid_control_pane_g1

0x4019,	// (0x00061dcb) aid_image_placing_area_ParamLimits

0x4019,	// (0x00061dcb) aid_image_placing_area

0xd23e,	// (0x0006aff0) field_vitu_entry_pane_g1_ParamLimits

0xd23e,	// (0x0006aff0) field_vitu_entry_pane_g1

0xd24a,	// (0x0006affc) field_vitu_entry_pane_g2_ParamLimits

0xd24a,	// (0x0006affc) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0006d5cd) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0006d5cd) field_vitu_entry_pane_g

0x5b9d,	// (0x0006394f) cell_vitu_itu_pane_g1_ParamLimits

0x5bed,	// (0x0006399f) cell_vitu_itu_pane_t3_ParamLimits

0x5bed,	// (0x0006399f) cell_vitu_itu_pane_t3

0xd522,	// (0x0006b2d4) mp4_progress_pane_t1_ParamLimits

0xd53b,	// (0x0006b2ed) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0006d662) mp4_progress_pane_t_ParamLimits

0xd554,	// (0x0006b306) mup_progress_pane_cp04_ParamLimits

0x69e5,	// (0x00064797) main_myfav_hc_pane_t5_ParamLimits

0x69e5,	// (0x00064797) main_myfav_hc_pane_t5

0x9c50,	// (0x00067a02) aid_zoom_text_primary

0x0d0c,	// (0x0005eabe) popup_adpt_find_window_ParamLimits

0xa2c9,	// (0x0006807b) main_cam_set_pane

0x6404,	// (0x000641b6) cam4_zoom_pane_ParamLimits

0x6404,	// (0x000641b6) cam4_zoom_pane

0x6af3,	// (0x000648a5) main_cam_set_pane_g1_ParamLimits

0x6af3,	// (0x000648a5) main_cam_set_pane_g1

0x6b01,	// (0x000648b3) main_cam_set_pane_g2_ParamLimits

0x6b01,	// (0x000648b3) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0006d723) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0006d723) main_cam_set_pane_g

0x6b0d,	// (0x000648bf) main_cam_set_pane_t1_ParamLimits

0x6b0d,	// (0x000648bf) main_cam_set_pane_t1

0x6b29,	// (0x000648db) main_cset_listscroll_pane_ParamLimits

0x6b29,	// (0x000648db) main_cset_listscroll_pane

0x6b58,	// (0x0006490a) main_cset_slider_pane_ParamLimits

0x6b58,	// (0x0006490a) main_cset_slider_pane

0xd796,	// (0x0006b548) main_cset_list_pane_ParamLimits

0xd796,	// (0x0006b548) main_cset_list_pane

0xd7a6,	// (0x0006b558) scroll_pane_cp028

0x6b79,	// (0x0006492b) aid_area_touch_slider

0x6b95,	// (0x00064947) cset_slider_pane

0x6bbf,	// (0x00064971) main_cset_slider_pane_g1

0x6bd4,	// (0x00064986) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0006d728) main_cset_slider_pane_g

0xd7df,	// (0x0006b591) main_cset_slider_pane_t1

0x6c90,	// (0x00064a42) main_cset_slider_pane_t2

0x6caa,	// (0x00064a5c) main_cset_slider_pane_t3

0x6cc4,	// (0x00064a76) main_cset_slider_pane_t4

0x6cde,	// (0x00064a90) main_cset_slider_pane_t5

0x6cf8,	// (0x00064aaa) main_cset_slider_pane_t6

0x6d0d,	// (0x00064abf) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0006d74d) main_cset_slider_pane_t

0x6e11,	// (0x00064bc3) cset_list_set_pane_ParamLimits

0x6e11,	// (0x00064bc3) cset_list_set_pane

0x6e22,	// (0x00064bd4) aid_position_infowindow_above

0x6e2a,	// (0x00064bdc) aid_position_infowindow_below

0x6e32,	// (0x00064be4) cset_list_set_pane_g1_ParamLimits

0x6e32,	// (0x00064be4) cset_list_set_pane_g1

0x6e3e,	// (0x00064bf0) cset_list_set_pane_g3_ParamLimits

0x6e3e,	// (0x00064bf0) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0006d76c) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0006d76c) cset_list_set_pane_g

0x6e4d,	// (0x00064bff) cset_list_set_pane_t1_ParamLimits

0x6e4d,	// (0x00064bff) cset_list_set_pane_t1

0xa2c9,	// (0x0006807b) list_highlight_pane_cp021_ParamLimits

0xa2c9,	// (0x0006807b) list_highlight_pane_cp021

0xb52c,	// (0x000692de) cset_slider_pane_g1

0xb53e,	// (0x000692f0) cset_slider_pane_g2

0xb535,	// (0x000692e7) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0006d771) cset_slider_pane_g

0x6e62,	// (0x00064c14) aid_area_touch_cam4_zoom

0x6e6a,	// (0x00064c1c) cam4_zoom_cont_pane

0x6e72,	// (0x00064c24) cam4_zoom_pane_g1

0x6e7a,	// (0x00064c2c) cam4_zoom_pane_g2

0x6e82,	// (0x00064c34) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0006d778) cam4_zoom_pane_g

0x6e8a,	// (0x00064c3c) cam4_zoom_cont_pane_g1

0x6e93,	// (0x00064c45) cam4_zoom_cont_pane_g2

0x6e9c,	// (0x00064c4e) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0006d77f) cam4_zoom_cont_pane_g

0x62af,	// (0x00064061) call4_image_pane_ParamLimits

0x62af,	// (0x00064061) call4_image_pane

0xd57e,	// (0x0006b330) call4_windows_conf_pane_ParamLimits

0xd599,	// (0x0006b34b) popup_call4_audio_in_window_ParamLimits

0xd599,	// (0x0006b34b) popup_call4_audio_in_window

0x9c32,	// (0x000679e4) bg_popup_call2_act_pane_cp02

0xd607,	// (0x0006b3b9) call4_list_conf_pane

0xcc6e,	// (0x0006aa20) call4_image_pane_g1

0xcc6e,	// (0x0006aa20) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0006d48e) call4_image_pane_g

0xd87f,	// (0x0006b631) list_single_graphic_popup_conf4_pane_ParamLimits

0xd87f,	// (0x0006b631) list_single_graphic_popup_conf4_pane

0x9c32,	// (0x000679e4) list_highlight_pane_cp022

0xd894,	// (0x0006b646) list_single_graphic_popup_conf4_pane_g1

0xb22e,	// (0x00068fe0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0006d786) list_single_graphic_popup_conf4_pane_g

0xd89c,	// (0x0006b64e) list_single_graphic_popup_conf4_pane_t1

0x217c,	// (0x0005ff2e) popup_vtel_slider_window_ParamLimits

0x217c,	// (0x0005ff2e) popup_vtel_slider_window

0xd560,	// (0x0006b312) dialer2_ne_pane_t2_ParamLimits

0xd560,	// (0x0006b312) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0006d667) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0006d667) dialer2_ne_pane_t

0xa2c9,	// (0x0006807b) bg_popup_sub_pane_cp010_ParamLimits

0xa2c9,	// (0x0006807b) bg_popup_sub_pane_cp010

0x6ea5,	// (0x00064c57) popup_vtel_slider_window_g1_ParamLimits

0x6ea5,	// (0x00064c57) popup_vtel_slider_window_g1

0x6eb1,	// (0x00064c63) popup_vtel_slider_window_g2_ParamLimits

0x6eb1,	// (0x00064c63) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0006d78b) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0006d78b) popup_vtel_slider_window_g

0x6ef9,	// (0x00064cab) vtel_slider_pane_ParamLimits

0x6ef9,	// (0x00064cab) vtel_slider_pane

0x6f08,	// (0x00064cba) vtel_slider_pane_g1_ParamLimits

0x6f08,	// (0x00064cba) vtel_slider_pane_g1

0x6f15,	// (0x00064cc7) vtel_slider_pane_g2_ParamLimits

0x6f15,	// (0x00064cc7) vtel_slider_pane_g2

0x6f22,	// (0x00064cd4) vtel_slider_pane_g3_ParamLimits

0x6f22,	// (0x00064cd4) vtel_slider_pane_g3

0x6f08,	// (0x00064cba) vtel_slider_pane_g4_ParamLimits

0x6f08,	// (0x00064cba) vtel_slider_pane_g4

0x6f2f,	// (0x00064ce1) vtel_slider_pane_g5_ParamLimits

0x6f2f,	// (0x00064ce1) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0006d794) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0006d794) vtel_slider_pane_g

0xa2c9,	// (0x0006807b) main_gallery2_pane

0x6678,	// (0x0006442a) aid_size_row_itut2_dropdow_list_ParamLimits

0x6678,	// (0x0006442a) aid_size_row_itut2_dropdow_list

0x66e8,	// (0x0006449a) grid_vitu2_function_top_pane_ParamLimits

0x66e8,	// (0x0006449a) grid_vitu2_function_top_pane

0x673e,	// (0x000644f0) popup_vitu2_dropdown_list_window_ParamLimits

0x673e,	// (0x000644f0) popup_vitu2_dropdown_list_window

0x6762,	// (0x00064514) popup_vitu2_match_list_window

0x6f4a,	// (0x00064cfc) cell_vitu2_function_top_pane_ParamLimits

0x6f4a,	// (0x00064cfc) cell_vitu2_function_top_pane

0x6f6c,	// (0x00064d1e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f6c,	// (0x00064d1e) cell_vitu2_function_top_pane_cp01

0x6f88,	// (0x00064d3a) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f88,	// (0x00064d3a) cell_vitu2_function_top_wide_pane

0x6586,	// (0x00064338) bg_button_pane_cp012

0x6fa4,	// (0x00064d56) cell_vitu2_function_top_pane_g1

0x6fb8,	// (0x00064d6a) bg_button_pane_cp013_ParamLimits

0x6fb8,	// (0x00064d6a) bg_button_pane_cp013

0x6fd4,	// (0x00064d86) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6fd4,	// (0x00064d86) cell_vitu2_function_top_wide_pane_g1

0x6fec,	// (0x00064d9e) bg_popup_sub_pane_cp20

0x6ffa,	// (0x00064dac) list_vitu2_match_list_pane

0xd688,	// (0x0006b43a) bg_popup_sub_pane_cp20_g1

0xd690,	// (0x0006b442) bg_popup_sub_pane_cp20_g2

0xacdc,	// (0x00068a8e) bg_popup_sub_pane_cp20_g3

0xd698,	// (0x0006b44a) bg_popup_sub_pane_cp20_g4

0xacbc,	// (0x00068a6e) bg_popup_sub_pane_cp20_g5

0xd8b2,	// (0x0006b664) bg_popup_sub_pane_cp20_g6

0xd6a8,	// (0x0006b45a) bg_popup_sub_pane_cp20_g7

0xd6b0,	// (0x0006b462) bg_popup_sub_pane_cp20_g8

0xd6b8,	// (0x0006b46a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0006d79f) bg_popup_sub_pane_cp20_g

0x7012,	// (0x00064dc4) list_vitu2_match_list_item_pane_ParamLimits

0x7012,	// (0x00064dc4) list_vitu2_match_list_item_pane

0x7024,	// (0x00064dd6) list_vitu2_match_list_item_pane_t1

0x1166,	// (0x0005ef18) bg_popup_sub_pane_cp21

0x7076,	// (0x00064e28) grid_vitu2_dropdown_list_pane

0x707e,	// (0x00064e30) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x707e,	// (0x00064e30) cell_vitu2_dropdown_list_char_pane

0x70a3,	// (0x00064e55) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x70a3,	// (0x00064e55) cell_vitu2_dropdown_list_ctrl_pane

0xd8ba,	// (0x0006b66c) cell_vitu2_dropdown_list_char_pane_g1

0xd8c3,	// (0x0006b675) cell_vitu2_dropdown_list_char_pane_g2

0xd8cc,	// (0x0006b67e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0006d7bc) cell_vitu2_dropdown_list_char_pane_g

0x70d1,	// (0x00064e83) cell_vitu2_dropdown_list_char_pane_t1

0x70df,	// (0x00064e91) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70df,	// (0x00064e91) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70ef,	// (0x00064ea1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70ef,	// (0x00064ea1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7100,	// (0x00064eb2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7100,	// (0x00064eb2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7110,	// (0x00064ec2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7110,	// (0x00064ec2) cell_vitu2_dropdown_list_ctrl_pane_g4

0x649a,	// (0x0006424c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x649a,	// (0x0006424c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0006d7c3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0006d7c3) cell_vitu2_dropdown_list_ctrl_pane_g

0x7129,	// (0x00064edb) aid_size_cell_gallery2_ParamLimits

0x7129,	// (0x00064edb) aid_size_cell_gallery2

0x7143,	// (0x00064ef5) grid_gallery2_pane_ParamLimits

0x7143,	// (0x00064ef5) grid_gallery2_pane

0x5a22,	// (0x000637d4) scroll_pane_cp029_ParamLimits

0x5a22,	// (0x000637d4) scroll_pane_cp029

0x715a,	// (0x00064f0c) cell_gallery2_pane_ParamLimits

0x715a,	// (0x00064f0c) cell_gallery2_pane

0xd8d5,	// (0x0006b687) cell_gallery2_pane_g2

0x71a6,	// (0x00064f58) cell_gallery2_pane_g3

0xd8dd,	// (0x0006b68f) cell_gallery2_pane_g4

0xd8e5,	// (0x0006b697) cell_gallery2_pane_g5

0xaa7f,	// (0x00068831) grid_highlight_pane_cp10

0x6762,	// (0x00064514) popup_vitu2_match_list_window_ParamLimits

0x6776,	// (0x00064528) popup_vitu2_query_window_ParamLimits

0x6776,	// (0x00064528) popup_vitu2_query_window

0x1166,	// (0x0005ef18) bg_vitu2_candi_button_pane

0xd8ba,	// (0x0006b66c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8c3,	// (0x0006b675) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8cc,	// (0x0006b67e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x71ae,	// (0x00064f60) bg_button_pane_cp015

0x71c0,	// (0x00064f72) bg_button_pane_cp016

0x71d3,	// (0x00064f85) bg_button_pane_cp017

0xc81d,	// (0x0006a5cf) bg_popup_sub_pane_cp22

0xd8ed,	// (0x0006b69f) popup_vitu2_query_window_g1

0x7218,	// (0x00064fca) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0006d7ce) popup_vitu2_query_window_g

0x7235,	// (0x00064fe7) popup_vitu2_query_window_t1_ParamLimits

0x7235,	// (0x00064fe7) popup_vitu2_query_window_t1

0x7268,	// (0x0006501a) popup_vitu2_query_window_t2_ParamLimits

0x7268,	// (0x0006501a) popup_vitu2_query_window_t2

0x727a,	// (0x0006502c) popup_vitu2_query_window_t3_ParamLimits

0x727a,	// (0x0006502c) popup_vitu2_query_window_t3

0x72a2,	// (0x00065054) popup_vitu2_query_window_t4_ParamLimits

0x72a2,	// (0x00065054) popup_vitu2_query_window_t4

0x72c5,	// (0x00065077) popup_vitu2_query_window_t5_ParamLimits

0x72c5,	// (0x00065077) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0006d7d5) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0006d7d5) popup_vitu2_query_window_t

0xd78e,	// (0x0006b540) main_cset_text_pane

0x6b79,	// (0x0006492b) aid_area_touch_slider_ParamLimits

0x6b95,	// (0x00064947) cset_slider_pane_ParamLimits

0x6bbf,	// (0x00064971) main_cset_slider_pane_g1_ParamLimits

0x6bd4,	// (0x00064986) main_cset_slider_pane_g2_ParamLimits

0xd7af,	// (0x0006b561) main_cset_slider_pane_g3_ParamLimits

0xd7af,	// (0x0006b561) main_cset_slider_pane_g3

0x6be9,	// (0x0006499b) main_cset_slider_pane_g4_ParamLimits

0x6be9,	// (0x0006499b) main_cset_slider_pane_g4

0x6bf8,	// (0x000649aa) main_cset_slider_pane_g5_ParamLimits

0x6bf8,	// (0x000649aa) main_cset_slider_pane_g5

0x6c04,	// (0x000649b6) main_cset_slider_pane_g6_ParamLimits

0x6c04,	// (0x000649b6) main_cset_slider_pane_g6

0xf976,	// (0x0006d728) main_cset_slider_pane_g_ParamLimits

0xd7df,	// (0x0006b591) main_cset_slider_pane_t1_ParamLimits

0x6c90,	// (0x00064a42) main_cset_slider_pane_t2_ParamLimits

0x6caa,	// (0x00064a5c) main_cset_slider_pane_t3_ParamLimits

0x6cc4,	// (0x00064a76) main_cset_slider_pane_t4_ParamLimits

0x6cde,	// (0x00064a90) main_cset_slider_pane_t5_ParamLimits

0x6cf8,	// (0x00064aaa) main_cset_slider_pane_t6_ParamLimits

0x6d0d,	// (0x00064abf) main_cset_slider_pane_t7_ParamLimits

0x6d37,	// (0x00064ae9) main_cset_slider_pane_t8_ParamLimits

0x6d37,	// (0x00064ae9) main_cset_slider_pane_t8

0x6d5f,	// (0x00064b11) main_cset_slider_pane_t9_ParamLimits

0x6d5f,	// (0x00064b11) main_cset_slider_pane_t9

0x6d87,	// (0x00064b39) main_cset_slider_pane_t10_ParamLimits

0x6d87,	// (0x00064b39) main_cset_slider_pane_t10

0x6daf,	// (0x00064b61) main_cset_slider_pane_t11_ParamLimits

0x6daf,	// (0x00064b61) main_cset_slider_pane_t11

0x6dd7,	// (0x00064b89) main_cset_slider_pane_t12_ParamLimits

0x6dd7,	// (0x00064b89) main_cset_slider_pane_t12

0x6df4,	// (0x00064ba6) main_cset_slider_pane_t13_ParamLimits

0x6df4,	// (0x00064ba6) main_cset_slider_pane_t13

0xf99b,	// (0x0006d74d) main_cset_slider_pane_t_ParamLimits

0x9c32,	// (0x000679e4) bg_popup_sub_pane_cp011

0xd8f9,	// (0x0006b6ab) main_cset_text_pane_g1

0xd901,	// (0x0006b6b3) main_cset_text_pane_t1

0xd90f,	// (0x0006b6c1) main_cset_text_pane_t2

0xd91d,	// (0x0006b6cf) main_cset_text_pane_t3

0xd92b,	// (0x0006b6dd) main_cset_text_pane_t4

0xd939,	// (0x0006b6eb) main_cset_text_pane_t5

0xd947,	// (0x0006b6f9) main_cset_text_pane_t6

0xd955,	// (0x0006b707) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0006d7e4) main_cset_text_pane_t

0x9c32,	// (0x000679e4) main_cam4_burst_pane

0x9c32,	// (0x000679e4) main_cam5_pane

0x6ac2,	// (0x00064874) bg_button_pane_cp019

0x6acb,	// (0x0006487d) bg_button_pane_cp020

0xd7bb,	// (0x0006b56d) main_cset_slider_pane_g7_ParamLimits

0xd7bb,	// (0x0006b56d) main_cset_slider_pane_g7

0xd7c7,	// (0x0006b579) main_cset_slider_pane_g8_ParamLimits

0xd7c7,	// (0x0006b579) main_cset_slider_pane_g8

0x6c18,	// (0x000649ca) main_cset_slider_pane_g9_ParamLimits

0x6c18,	// (0x000649ca) main_cset_slider_pane_g9

0x6c24,	// (0x000649d6) main_cset_slider_pane_g10_ParamLimits

0x6c24,	// (0x000649d6) main_cset_slider_pane_g10

0x6c30,	// (0x000649e2) main_cset_slider_pane_g11_ParamLimits

0x6c30,	// (0x000649e2) main_cset_slider_pane_g11

0x6c3c,	// (0x000649ee) main_cset_slider_pane_g12_ParamLimits

0x6c3c,	// (0x000649ee) main_cset_slider_pane_g12

0x6c48,	// (0x000649fa) main_cset_slider_pane_g13_ParamLimits

0x6c48,	// (0x000649fa) main_cset_slider_pane_g13

0x6c54,	// (0x00064a06) main_cset_slider_pane_g14_ParamLimits

0x6c54,	// (0x00064a06) main_cset_slider_pane_g14

0x6c60,	// (0x00064a12) main_cset_slider_pane_g15_ParamLimits

0x6c60,	// (0x00064a12) main_cset_slider_pane_g15

0xd80d,	// (0x0006b5bf) main_cset_slider_pane_t14_ParamLimits

0xd80d,	// (0x0006b5bf) main_cset_slider_pane_t14

0xd846,	// (0x0006b5f8) main_cset_slider_pane_t15_ParamLimits

0xd846,	// (0x0006b5f8) main_cset_slider_pane_t15

0x733e,	// (0x000650f0) aid_cam4_burst_size_cell_ParamLimits

0x733e,	// (0x000650f0) aid_cam4_burst_size_cell

0x735a,	// (0x0006510c) grid_cam4_burst_pane_ParamLimits

0x735a,	// (0x0006510c) grid_cam4_burst_pane

0x738c,	// (0x0006513e) linegrid_cam4_burst_pane_ParamLimits

0x738c,	// (0x0006513e) linegrid_cam4_burst_pane

0x73aa,	// (0x0006515c) scroll_pane_cp30_ParamLimits

0x73aa,	// (0x0006515c) scroll_pane_cp30

0x73b6,	// (0x00065168) cell_cam4_burst_pane_ParamLimits

0x73b6,	// (0x00065168) cell_cam4_burst_pane

0xd963,	// (0x0006b715) linegrid_cam4_burst_pane_g1_ParamLimits

0xd963,	// (0x0006b715) linegrid_cam4_burst_pane_g1

0x73f6,	// (0x000651a8) linegrid_cam4_burst_pane_g2_ParamLimits

0x73f6,	// (0x000651a8) linegrid_cam4_burst_pane_g2

0xd970,	// (0x0006b722) linegrid_cam4_burst_pane_g3_ParamLimits

0xd970,	// (0x0006b722) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0006d7f3) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0006d7f3) linegrid_cam4_burst_pane_g

0x7407,	// (0x000651b9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7407,	// (0x000651b9) linegrid_cam4_burst_pane_g3_copy1

0xd97d,	// (0x0006b72f) linegrid_cam4_burst_pane_g4_ParamLimits

0xd97d,	// (0x0006b72f) linegrid_cam4_burst_pane_g4

0x7421,	// (0x000651d3) linegrid_cam4_burst_pane_g5_ParamLimits

0x7421,	// (0x000651d3) linegrid_cam4_burst_pane_g5

0x7432,	// (0x000651e4) linegrid_cam4_burst_pane_g6_ParamLimits

0x7432,	// (0x000651e4) linegrid_cam4_burst_pane_g6

0xd98a,	// (0x0006b73c) linegrid_cam4_burst_pane_g7_ParamLimits

0xd98a,	// (0x0006b73c) linegrid_cam4_burst_pane_g7

0x7449,	// (0x000651fb) cell_cam4_burst_pane_g1

0xd9a3,	// (0x0006b755) main_cam5_pane_t1_ParamLimits

0xd9a3,	// (0x0006b755) main_cam5_pane_t1

0xd9b5,	// (0x0006b767) main_cam5_pane_t2_ParamLimits

0xd9b5,	// (0x0006b767) main_cam5_pane_t2

0xd9c7,	// (0x0006b779) main_cam5_pane_t3_ParamLimits

0xd9c7,	// (0x0006b779) main_cam5_pane_t3

0xd9d9,	// (0x0006b78b) main_cam5_pane_t4_ParamLimits

0xd9d9,	// (0x0006b78b) main_cam5_pane_t4

0xd9f1,	// (0x0006b7a3) main_cam5_pane_t5_ParamLimits

0xd9f1,	// (0x0006b7a3) main_cam5_pane_t5

0xda05,	// (0x0006b7b7) main_cam5_pane_t6_ParamLimits

0xda05,	// (0x0006b7b7) main_cam5_pane_t6

0xda19,	// (0x0006b7cb) main_cam5_pane_t7_ParamLimits

0xda19,	// (0x0006b7cb) main_cam5_pane_t7

0xda2b,	// (0x0006b7dd) main_cam5_pane_t8_ParamLimits

0xda2b,	// (0x0006b7dd) main_cam5_pane_t8

0xda49,	// (0x0006b7fb) main_cam5_pane_t9_ParamLimits

0xda49,	// (0x0006b7fb) main_cam5_pane_t9

0xdab5,	// (0x0006b867) main_cam5_pane_t10_ParamLimits

0xdab5,	// (0x0006b867) main_cam5_pane_t10

0xdac7,	// (0x0006b879) main_cam5_pane_t11_ParamLimits

0xdac7,	// (0x0006b879) main_cam5_pane_t11

0xdadb,	// (0x0006b88d) main_cam5_pane_t12_ParamLimits

0xdadb,	// (0x0006b88d) main_cam5_pane_t12

0xdaf2,	// (0x0006b8a4) main_cam5_pane_t13_ParamLimits

0xdaf2,	// (0x0006b8a4) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0006d7ff) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0006d7ff) main_cam5_pane_t

0x0db9,	// (0x0005eb6b) popup_scut_keymap_window_ParamLimits

0x0db9,	// (0x0005eb6b) popup_scut_keymap_window

0x745c,	// (0x0006520e) aid_size_cell_brow_shortcut

0xaa7f,	// (0x00068831) bg_popup_window_pane_cp010

0x7468,	// (0x0006521a) grid_scut_pane

0x7474,	// (0x00065226) cell_scut_pane_ParamLimits

0x7474,	// (0x00065226) cell_scut_pane

0x748f,	// (0x00065241) cell_scut_pane_g1

0xdb15,	// (0x0006b8c7) cell_scut_pane_t1

0xdb24,	// (0x0006b8d6) cell_scut_pane_t2

0x7498,	// (0x0006524a) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0006d81a) cell_scut_pane_t

0x5217,	// (0x00062fc9) main_mup3_pane_g8_ParamLimits

0x5217,	// (0x00062fc9) main_mup3_pane_g8

0x6688,	// (0x0006443a) area_vitu2_query_pane_ParamLimits

0x6688,	// (0x0006443a) area_vitu2_query_pane

0x71e6,	// (0x00064f98) input_focus_pane_cp08

0xdb33,	// (0x0006b8e5) area_vitu2_query_pane_g1

0x74a6,	// (0x00065258) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0006d821) area_vitu2_query_pane_g

0x74b7,	// (0x00065269) area_vitu2_query_pane_t1_ParamLimits

0x74b7,	// (0x00065269) area_vitu2_query_pane_t1

0x74cb,	// (0x0006527d) area_vitu2_query_pane_t2_ParamLimits

0x74cb,	// (0x0006527d) area_vitu2_query_pane_t2

0x74df,	// (0x00065291) area_vitu2_query_pane_t3_ParamLimits

0x74df,	// (0x00065291) area_vitu2_query_pane_t3

0xa300,	// (0x000680b2) area_vitu2_query_pane_t4_ParamLimits

0xa300,	// (0x000680b2) area_vitu2_query_pane_t4

0xa328,	// (0x000680da) area_vitu2_query_pane_t5_ParamLimits

0xa328,	// (0x000680da) area_vitu2_query_pane_t5

0xa350,	// (0x00068102) area_vitu2_query_pane_t6_ParamLimits

0xa350,	// (0x00068102) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0006d826) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0006d826) area_vitu2_query_pane_t

0x7507,	// (0x000652b9) bg_button_pane_cp018

0x7515,	// (0x000652c7) bg_button_pane_cp021

0x7521,	// (0x000652d3) bg_button_pane_cp022

0x7532,	// (0x000652e4) input_focus_pane_cp09

0x3629,	// (0x000613db) aid_size_touch_mv_arrow_left

0x3654,	// (0x00061406) aid_size_touch_mv_arrow_right

0x6c78,	// (0x00064a2a) main_cset_slider_pane_g16_ParamLimits

0x6c78,	// (0x00064a2a) main_cset_slider_pane_g16

0x6c84,	// (0x00064a36) main_cset_slider_pane_g17_ParamLimits

0x6c84,	// (0x00064a36) main_cset_slider_pane_g17

0x7449,	// (0x000651fb) cell_cam4_burst_pane_g1_ParamLimits

0x9c32,	// (0x000679e4) compa_mode_pane

0x6ebd,	// (0x00064c6f) popup_vtel_slider_window_g3_ParamLimits

0x6ebd,	// (0x00064c6f) popup_vtel_slider_window_g3

0x6ed1,	// (0x00064c83) popup_vtel_slider_window_g4_ParamLimits

0x6ed1,	// (0x00064c83) popup_vtel_slider_window_g4

0x6ee5,	// (0x00064c97) popup_vtel_slider_window_t1_ParamLimits

0x6ee5,	// (0x00064c97) popup_vtel_slider_window_t1

0x9c32,	// (0x000679e4) main_cl_pane

0xc849,	// (0x0006a5fb) popup_imed_adjust2_window_ParamLimits

0xc81d,	// (0x0006a5cf) bg_tb_trans_pane_cp05_ParamLimits

0xd16b,	// (0x0006af1d) popup_imed_adjust2_window_g1_ParamLimits

0xd17a,	// (0x0006af2c) popup_imed_adjust2_window_g2_ParamLimits

0xd17a,	// (0x0006af2c) popup_imed_adjust2_window_g2

0xd186,	// (0x0006af38) popup_imed_adjust2_window_g3_ParamLimits

0xd186,	// (0x0006af38) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0006d591) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0006d591) popup_imed_adjust2_window_g

0xd19a,	// (0x0006af4c) popup_imed_adjust2_window_t1_ParamLimits

0xd1b2,	// (0x0006af64) slider_imed_adjust_pane_ParamLimits

0xd1c6,	// (0x0006af78) slider_imed_adjust_pane_g1_ParamLimits

0xd1d6,	// (0x0006af88) slider_imed_adjust_pane_g2_ParamLimits

0xd1e6,	// (0x0006af98) slider_imed_adjust_pane_g3_ParamLimits

0xd1f7,	// (0x0006afa9) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0006d598) slider_imed_adjust_pane_g_ParamLimits

0x63ad,	// (0x0006415f) aid_touch_area_cam4_ParamLimits

0x63ad,	// (0x0006415f) aid_touch_area_cam4

0x63bd,	// (0x0006416f) battery_pane_cp01

0x6444,	// (0x000641f6) main_camera4_pane_g6_ParamLimits

0x6444,	// (0x000641f6) main_camera4_pane_g6

0x6462,	// (0x00064214) main_camera4_pane_t2_ParamLimits

0x6462,	// (0x00064214) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0006d69b) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0006d69b) main_camera4_pane_t

0x64f3,	// (0x000642a5) aid_touch_area_vid4_ParamLimits

0x64f3,	// (0x000642a5) aid_touch_area_vid4

0x6533,	// (0x000642e5) main_video4_pane_g5_ParamLimits

0x6533,	// (0x000642e5) main_video4_pane_g5

0x6559,	// (0x0006430b) vid4_progress_pane_ParamLimits

0x6559,	// (0x0006430b) vid4_progress_pane

0xd7d3,	// (0x0006b585) main_cset_slider_pane_g18_ParamLimits

0xd7d3,	// (0x0006b585) main_cset_slider_pane_g18

0xd997,	// (0x0006b749) cell_cam4_burst_pane_g2_ParamLimits

0xd997,	// (0x0006b749) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0006d7fa) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0006d7fa) cell_cam4_burst_pane_g

0x7543,	// (0x000652f5) bg_cl_pane_ParamLimits

0x7543,	// (0x000652f5) bg_cl_pane

0x754f,	// (0x00065301) cl_header_pane_ParamLimits

0x754f,	// (0x00065301) cl_header_pane

0x755b,	// (0x0006530d) cl_listscroll_pane_ParamLimits

0x755b,	// (0x0006530d) cl_listscroll_pane

0xdb3f,	// (0x0006b8f1) bg_cl_pane_g1

0xdb47,	// (0x0006b8f9) bg_cl_pane_g2

0xdb4f,	// (0x0006b901) bg_cl_pane_g3

0xdb57,	// (0x0006b909) bg_cl_pane_g4

0xdb5f,	// (0x0006b911) bg_cl_pane_g5

0xdb67,	// (0x0006b919) bg_cl_pane_g6

0xdb6f,	// (0x0006b921) bg_cl_pane_g7

0xdb77,	// (0x0006b929) bg_cl_pane_g8

0xdb7f,	// (0x0006b931) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0006d835) bg_cl_pane_g

0x7567,	// (0x00065319) aid_height_cl_leading_ParamLimits

0x7567,	// (0x00065319) aid_height_cl_leading

0x7573,	// (0x00065325) aid_height_cl_text_ParamLimits

0x7573,	// (0x00065325) aid_height_cl_text

0x0dfa,	// (0x0005ebac) bg_cl_header_pane_ParamLimits

0x0dfa,	// (0x0005ebac) bg_cl_header_pane

0x758b,	// (0x0006533d) cl_header_pane_g1_ParamLimits

0x758b,	// (0x0006533d) cl_header_pane_g1

0x7598,	// (0x0006534a) cl_header_pane_t1_ParamLimits

0x7598,	// (0x0006534a) cl_header_pane_t1

0xdb87,	// (0x0006b939) cl_list_pane

0xd7a6,	// (0x0006b558) hc_scroll_pane_cp01

0xacbc,	// (0x00068a6e) bg_cl_header_pane_g1

0xd688,	// (0x0006b43a) bg_cl_header_pane_g2

0xacdc,	// (0x00068a8e) bg_cl_header_pane_g3

0xd698,	// (0x0006b44a) bg_cl_header_pane_g4

0xd690,	// (0x0006b442) bg_cl_header_pane_g5

0xd8b2,	// (0x0006b664) bg_cl_header_pane_g6

0xd6b0,	// (0x0006b462) bg_cl_header_pane_g7

0xd6b8,	// (0x0006b46a) bg_cl_header_pane_g8

0xd6a8,	// (0x0006b45a) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0006d848) bg_cl_header_pane_g

0x75aa,	// (0x0006535c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x75aa,	// (0x0006535c) hc_cl_list_double_graphic_heading_pane

0x75ba,	// (0x0006536c) hc_cl_list_single_graphic_pane_ParamLimits

0x75ba,	// (0x0006536c) hc_cl_list_single_graphic_pane

0x75cc,	// (0x0006537e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75cc,	// (0x0006537e) hc_cl_list_single_graphic_pane_g1

0x75d8,	// (0x0006538a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75d8,	// (0x0006538a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0006d85b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0006d85b) hc_cl_list_single_graphic_pane_g

0x75ec,	// (0x0006539e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75ec,	// (0x0006539e) hc_cl_list_single_graphic_pane_t1

0x75cc,	// (0x0006537e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75cc,	// (0x0006537e) hc_cl_list_double_graphic_heading_pane_g1

0x7601,	// (0x000653b3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7601,	// (0x000653b3) hc_cl_list_double_graphic_heading_pane_g2

0x7615,	// (0x000653c7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7615,	// (0x000653c7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0006d860) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0006d860) hc_cl_list_double_graphic_heading_pane_g

0x7629,	// (0x000653db) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7629,	// (0x000653db) hc_cl_list_double_graphic_heading_pane_t1

0x763e,	// (0x000653f0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x763e,	// (0x000653f0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0006d867) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0006d867) hc_cl_list_double_graphic_heading_pane_t

0x765b,	// (0x0006540d) vid4_progress_pane_g1

0x766d,	// (0x0006541f) vid4_progress_pane_g2

0x3d64,	// (0x00061b16) vid4_progress_pane_g3

0x767f,	// (0x00065431) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0006d86c) vid4_progress_pane_g

0x769d,	// (0x0006544f) vid4_progress_pane_t1

0x76b2,	// (0x00065464) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0006d877) vid4_progress_pane_t

0x76dd,	// (0x0006548f) wait_bar_pane_cp07

0xca5b,	// (0x0006a80d) blid_firmament_pane_ParamLimits

0xca9e,	// (0x0006a850) popup_blid_sat_info2_window_g1

0xcac2,	// (0x0006a874) popup_blid_sat_info2_window_t3

0xcad0,	// (0x0006a882) popup_blid_sat_info2_window_t4

0xcade,	// (0x0006a890) popup_blid_sat_info2_window_t5

0xcaec,	// (0x0006a89e) popup_blid_sat_info2_window_t6

0xcafc,	// (0x0006a8ae) popup_blid_sat_info2_window_t7

0xcb0a,	// (0x0006a8bc) popup_blid_sat_info2_window_t8

0xcb18,	// (0x0006a8ca) popup_blid_sat_info2_window_t9

0xcb26,	// (0x0006a8d8) popup_blid_sat_info2_window_t10

0xcbee,	// (0x0006a9a0) aid_firma_cardinal_ParamLimits

0xcc02,	// (0x0006a9b4) blid_firmament_pane_t1_ParamLimits

0xcc19,	// (0x0006a9cb) blid_firmament_pane_t2_ParamLimits

0xcc30,	// (0x0006a9e2) blid_firmament_pane_t3_ParamLimits

0xcc47,	// (0x0006a9f9) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0006d485) blid_firmament_pane_t_ParamLimits

0xcc5e,	// (0x0006aa10) blid_sat_info_pane_ParamLimits

0xa2c9,	// (0x0006807b) main_cam_set_pane_ParamLimits

0x59bb,	// (0x0006376d) aid_size_cell_colour_35_ParamLimits

0x59d5,	// (0x00063787) aid_size_cell_colour_112_ParamLimits

0x59ec,	// (0x0006379e) aid_size_cell_effect_ParamLimits

0xa2c9,	// (0x0006807b) bg_tb_trans_pane_cp02_ParamLimits

0xb13d,	// (0x00068eef) heading_imed_pane_ParamLimits

0x5a06,	// (0x000637b8) listscroll_imed_pane_ParamLimits

0xbe3f,	// (0x00069bf1) popup_call2_audio_first_window_g5_ParamLimits

0xbe3f,	// (0x00069bf1) popup_call2_audio_first_window_g5

0x6118,	// (0x00063eca) aid_size_touch_image3_arrow_left_ParamLimits

0x6118,	// (0x00063eca) aid_size_touch_image3_arrow_left

0x612e,	// (0x00063ee0) aid_size_touch_image3_arrow_right_ParamLimits

0x612e,	// (0x00063ee0) aid_size_touch_image3_arrow_right

0x76c8,	// (0x0006547a) vid4_progress_pane_t3

0x5cb4,	// (0x00063a66) main_hwr_training_symbol_option_pane_ParamLimits

0x5cb4,	// (0x00063a66) main_hwr_training_symbol_option_pane

0xd462,	// (0x0006b214) popup_hwr_training_preview_window_ParamLimits

0xd462,	// (0x0006b214) popup_hwr_training_preview_window

0x5d15,	// (0x00063ac7) hwr_training_navi_pane_g5_ParamLimits

0x5d15,	// (0x00063ac7) hwr_training_navi_pane_g5

0xd676,	// (0x0006b428) popup_char_count_window

0x6fec,	// (0x00064d9e) bg_popup_sub_pane_cp20_ParamLimits

0x6ffa,	// (0x00064dac) list_vitu2_match_list_pane_ParamLimits

0x7006,	// (0x00064db8) vitu2_page_scroll_pane_ParamLimits

0x7006,	// (0x00064db8) vitu2_page_scroll_pane

0xdb90,	// (0x0006b942) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb90,	// (0x0006b942) list_single_hwr_training_symbol_option_pane

0xdba3,	// (0x0006b955) list_single_hwr_training_symbol_option_pane_g1

0xdbab,	// (0x0006b95d) list_single_hwr_training_symbol_option_pane_t1

0xdbb9,	// (0x0006b96b) bg_button_pane_cp023

0xdbc2,	// (0x0006b974) bg_button_pane_cp024

0x7729,	// (0x000654db) vitu2_page_scroll_pane_g1

0x7731,	// (0x000654e3) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0006d87e) vitu2_page_scroll_pane_g

0x773b,	// (0x000654ed) vitu2_page_scroll_pane_t1

0xdbf5,	// (0x0006b9a7) popup_char_count_window_g1

0xdbfe,	// (0x0006b9b0) popup_char_count_window_g2

0xdc07,	// (0x0006b9b9) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0006d883) popup_char_count_window_g

0xdc10,	// (0x0006b9c2) popup_char_count_window_t1

0x9c32,	// (0x000679e4) main_vded2_pane

0xd157,	// (0x0006af09) aid_size_cell_imed_line

0xd161,	// (0x0006af13) grid_imed_line_width_pane

0x65db,	// (0x0006438d) vid4_indicators_pane_g4

0xdc1e,	// (0x0006b9d0) cell_imed_line_width_pane_ParamLimits

0xdc1e,	// (0x0006b9d0) cell_imed_line_width_pane

0xdc34,	// (0x0006b9e6) cell_imed_line_width_pane_g1

0xd192,	// (0x0006af44) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0006d88a) cell_imed_line_width_pane_g

0x774a,	// (0x000654fc) main_vded2_pane_g1_ParamLimits

0x774a,	// (0x000654fc) main_vded2_pane_g1

0x7759,	// (0x0006550b) main_vded2_pane_g2_ParamLimits

0x7759,	// (0x0006550b) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0006d88f) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0006d88f) main_vded2_pane_g

0x7767,	// (0x00065519) vded2_slider_pane_ParamLimits

0x7767,	// (0x00065519) vded2_slider_pane

0x7774,	// (0x00065526) aid_size_touch_vded2_end

0x777e,	// (0x00065530) aid_size_touch_vded2_playhead

0xdc3d,	// (0x0006b9ef) aid_size_touch_vded2_start

0xdc45,	// (0x0006b9f7) vded2_slider_bg_pane

0xdc4e,	// (0x0006ba00) vded2_slider_pane_g1

0xdc57,	// (0x0006ba09) vded2_slider_pane_g2

0x7786,	// (0x00065538) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0006d894) vded2_slider_pane_g

0xda82,	// (0x0006b834) vded2_slider_bg_pane_g1

0xda8b,	// (0x0006b83d) vded2_slider_bg_pane_g2

0xda94,	// (0x0006b846) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0006d555) vded2_slider_bg_pane_g

0x3d7c,	// (0x00061b2e) aid_postcard_touch_down_pane_ParamLimits

0x3d7c,	// (0x00061b2e) aid_postcard_touch_down_pane

0x3d8c,	// (0x00061b3e) aid_postcard_touch_up_pane_ParamLimits

0x3d8c,	// (0x00061b3e) aid_postcard_touch_up_pane

0x9c32,	// (0x000679e4) main_blid2_pane

0xc82b,	// (0x0006a5dd) popup_blid2_search_window

0x9c32,	// (0x000679e4) blid2_gps_pane

0x9c32,	// (0x000679e4) blid2_navig_pane

0x9c32,	// (0x000679e4) blid2_search_pane

0x9c32,	// (0x000679e4) blid2_tripm_pane

0x778f,	// (0x00065541) blid2_search_pane_g1_ParamLimits

0x778f,	// (0x00065541) blid2_search_pane_g1

0x779b,	// (0x0006554d) blid2_search_pane_t1_ParamLimits

0x779b,	// (0x0006554d) blid2_search_pane_t1

0x77ad,	// (0x0006555f) aid_size_cell_blid2_gps_ParamLimits

0x77ad,	// (0x0006555f) aid_size_cell_blid2_gps

0x77bd,	// (0x0006556f) blid2_gps_pane_g1_ParamLimits

0x77bd,	// (0x0006556f) blid2_gps_pane_g1

0x77c9,	// (0x0006557b) grid_blid2_satellite_pane_ParamLimits

0x77c9,	// (0x0006557b) grid_blid2_satellite_pane

0x77d7,	// (0x00065589) blid2_navig_pane_g1_ParamLimits

0x77d7,	// (0x00065589) blid2_navig_pane_g1

0x77e3,	// (0x00065595) blid2_navig_pane_t1_ParamLimits

0x77e3,	// (0x00065595) blid2_navig_pane_t1

0x77f5,	// (0x000655a7) blid2_navig_pane_t2_ParamLimits

0x77f5,	// (0x000655a7) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0006d89b) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0006d89b) blid2_navig_pane_t

0x7807,	// (0x000655b9) blid2_navig_ring_pane_ParamLimits

0x7807,	// (0x000655b9) blid2_navig_ring_pane

0x7817,	// (0x000655c9) blid2_speed_pane_ParamLimits

0x7817,	// (0x000655c9) blid2_speed_pane

0x7823,	// (0x000655d5) blid2_tripm_pane_g1_ParamLimits

0x7823,	// (0x000655d5) blid2_tripm_pane_g1

0x7833,	// (0x000655e5) blid2_tripm_pane_g2_ParamLimits

0x7833,	// (0x000655e5) blid2_tripm_pane_g2

0x783f,	// (0x000655f1) blid2_tripm_pane_g3_ParamLimits

0x783f,	// (0x000655f1) blid2_tripm_pane_g3

0x784b,	// (0x000655fd) blid2_tripm_pane_g4_ParamLimits

0x784b,	// (0x000655fd) blid2_tripm_pane_g4

0x7857,	// (0x00065609) blid2_tripm_pane_g5_ParamLimits

0x7857,	// (0x00065609) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0006d8a0) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0006d8a0) blid2_tripm_pane_g

0x7873,	// (0x00065625) blid2_tripm_pane_t1_ParamLimits

0x7873,	// (0x00065625) blid2_tripm_pane_t1

0x7885,	// (0x00065637) blid2_tripm_pane_t2_ParamLimits

0x7885,	// (0x00065637) blid2_tripm_pane_t2

0x7897,	// (0x00065649) blid2_tripm_pane_t3_ParamLimits

0x7897,	// (0x00065649) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0006d8ad) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0006d8ad) blid2_tripm_pane_t

0x78c9,	// (0x0006567b) cell_blid2_satellite_pane_ParamLimits

0x78c9,	// (0x0006567b) cell_blid2_satellite_pane

0x78e7,	// (0x00065699) cell_blid2_satellite_pane_g1

0xdc5f,	// (0x0006ba11) cell_blid2_satellite_pane_t1

0xcc6e,	// (0x0006aa20) blid2_speed_pane_g1

0xdc6d,	// (0x0006ba1f) blid2_speed_pane_t1

0xdc7b,	// (0x0006ba2d) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0006d8b6) blid2_speed_pane_t

0xcc6e,	// (0x0006aa20) blid2_navig_ring_pane_g1

0x78f0,	// (0x000656a2) blid2_navig_ring_pane_g2

0x78f8,	// (0x000656aa) blid2_navig_ring_pane_g3

0x7900,	// (0x000656b2) blid2_navig_ring_pane_g4

0x7908,	// (0x000656ba) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0006d8bb) blid2_navig_ring_pane_g

0x9c32,	// (0x000679e4) bg_popup_window_pane_cp011

0xdc89,	// (0x0006ba3b) popup_blid2_search_window_g1

0xdc91,	// (0x0006ba43) popup_blid2_search_window_t1

0xdc9f,	// (0x0006ba51) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0006d8c6) popup_blid2_search_window_t

0xabcb,	// (0x0006897d) main_browser_pane_g1

0xa8c9,	// (0x0006867b) main_browser_pane_ParamLimits

0x6586,	// (0x00064338) bg_button_pane_cp011_ParamLimits

0x688b,	// (0x0006463d) cell_vitu2_function_pane_g1_ParamLimits

0xc81d,	// (0x0006a5cf) bg_popup_sub_pane_cp22_ParamLimits

0x71e6,	// (0x00064f98) input_focus_pane_cp08_ParamLimits

0x71fd,	// (0x00064faf) popup_vitu2_query_button_pane_ParamLimits

0x71fd,	// (0x00064faf) popup_vitu2_query_button_pane

0x720e,	// (0x00064fc0) popup_vitu2_query_input_button_pane

0xd8ed,	// (0x0006b69f) popup_vitu2_query_window_g1_ParamLimits

0x7218,	// (0x00064fca) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0006d7ce) popup_vitu2_query_window_g_ParamLimits

0x9c32,	// (0x000679e4) bg_button_pane_cp026

0x7910,	// (0x000656c2) popup_vitu2_query_input_button_pane_g1

0x9c32,	// (0x000679e4) bg_button_pane_cp025

0xdcad,	// (0x0006ba5f) popup_vitu2_query_button_pane_t1

0x4f15,	// (0x00062cc7) main_mp3_pane_t6

0x4f25,	// (0x00062cd7) popup_slider_window_cp01

0x64a8,	// (0x0006425a) cam4_battery_pane

0x6594,	// (0x00064346) cam4_battery_pane_cp02

0x7653,	// (0x00065405) cam4_battery_pane_cp01

0x7653,	// (0x00065405) cam4_battery_pane_cp03

0xda9d,	// (0x0006b84f) cam4_battery_pane_g1

0xcc6e,	// (0x0006aa20) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0006d8cb) cam4_battery_pane_g

0xcb34,	// (0x0006a8e6) popup_blid_sat_info2_window_t11

0x3629,	// (0x000613db) aid_size_touch_mv_arrow_left_ParamLimits

0x3654,	// (0x00061406) aid_size_touch_mv_arrow_right_ParamLimits

0xb35c,	// (0x0006910e) navi_pane_g1_ParamLimits

0x3693,	// (0x00061445) navi_pane_g2_ParamLimits

0x36c1,	// (0x00061473) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0006d197) navi_pane_g_ParamLimits

0x371b,	// (0x000614cd) navi_pane_mv_t1_ParamLimits

0x5a12,	// (0x000637c4) grid_imed_effect_pane_ParamLimits

0x2044,	// (0x0005fdf6) aid_placing_vt_slider_lsc

0xab16,	// (0x000688c8) aid_placing_vt_slider_prt

0xa2c9,	// (0x0006807b) bg_tb_trans_pane_cp01_ParamLimits

0xcdbe,	// (0x0006ab70) popup_image_details_window_g1_ParamLimits

0xcdd1,	// (0x0006ab83) popup_image_details_window_g2_ParamLimits

0xcde6,	// (0x0006ab98) popup_image_details_window_g3_ParamLimits

0xcde6,	// (0x0006ab98) popup_image_details_window_g3

0xf718,	// (0x0006d4ca) popup_image_details_window_g_ParamLimits

0xcdfa,	// (0x0006abac) popup_image_details_window_t1_ParamLimits

0xce0c,	// (0x0006abbe) popup_image_details_window_t2_ParamLimits

0xce25,	// (0x0006abd7) popup_image_details_window_t3_ParamLimits

0xce39,	// (0x0006abeb) popup_image_details_window_t4_ParamLimits

0xce54,	// (0x0006ac06) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0006d4d1) popup_image_details_window_t_ParamLimits

0x757f,	// (0x00065331) cl_header_name_pane_ParamLimits

0x757f,	// (0x00065331) cl_header_name_pane

0x7918,	// (0x000656ca) cl_header_name_pane_t1_ParamLimits

0x7918,	// (0x000656ca) cl_header_name_pane_t1

0x792f,	// (0x000656e1) cl_header_name_pane_t2_ParamLimits

0x792f,	// (0x000656e1) cl_header_name_pane_t2

0x7959,	// (0x0006570b) cl_header_name_pane_t3_ParamLimits

0x7959,	// (0x0006570b) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0006d8d0) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0006d8d0) cl_header_name_pane_t

0x36ec,	// (0x0006149e) navi_pane_mv_g2_ParamLimits

0xd650,	// (0x0006b402) field_vitu2_entry_pane_g1_ParamLimits

0xd65c,	// (0x0006b40e) field_vitu2_entry_pane_g2_ParamLimits

0xd668,	// (0x0006b41a) field_vitu2_entry_pane_g3_ParamLimits

0xd668,	// (0x0006b41a) field_vitu2_entry_pane_g3

0xf91b,	// (0x0006d6cd) field_vitu2_entry_pane_g_ParamLimits

0x681f,	// (0x000645d1) cell_vitu2_itu_pane_g1_ParamLimits

0x6831,	// (0x000645e3) cell_vitu2_itu_pane_g2_ParamLimits

0x6831,	// (0x000645e3) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0006d6d9) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0006d6d9) cell_vitu2_itu_pane_g

0x6586,	// (0x00064338) bg_vkb2_func_pane_cp05_ParamLimits

0x6586,	// (0x00064338) bg_vkb2_func_pane_cp05

0x6586,	// (0x00064338) bg_vkb2_func_pane_cp03

0x6586,	// (0x00064338) bg_vkb2_func_pane_cp04

0x6586,	// (0x00064338) bg_vkb2_func_pane_cp10_ParamLimits

0x6586,	// (0x00064338) bg_vkb2_func_pane_cp10

0x7521,	// (0x000652d3) bg_vkb2_func_pane_cp08

0x7507,	// (0x000652b9) bg_vkb2_func_pane_cp06

0x7515,	// (0x000652c7) bg_vkb2_func_pane_cp07

0xdbcb,	// (0x0006b97d) bg_vkb2_func_pane_cp11_ParamLimits

0xdbcb,	// (0x0006b97d) bg_vkb2_func_pane_cp11

0xdbe0,	// (0x0006b992) bg_vkb2_func_pane_cp12_ParamLimits

0xdbe0,	// (0x0006b992) bg_vkb2_func_pane_cp12

0x9c32,	// (0x000679e4) bg_vkb2_func_pane_cp09

0xd688,	// (0x0006b43a) bg_vkb2_func_pane_g1

0xacdc,	// (0x00068a8e) bg_vkb2_func_pane_g2

0xd690,	// (0x0006b442) bg_vkb2_func_pane_g3

0xd698,	// (0x0006b44a) bg_vkb2_func_pane_g4

0xd8b2,	// (0x0006b664) bg_vkb2_func_pane_g5

0xd6b0,	// (0x0006b462) bg_vkb2_func_pane_g6

0xd6b8,	// (0x0006b46a) bg_vkb2_func_pane_g7

0xd6a8,	// (0x0006b45a) bg_vkb2_func_pane_g8

0xacbc,	// (0x00068a6e) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0006d8d7) bg_vkb2_func_pane_g

0x7865,	// (0x00065617) blid2_tripm_pane_g6_ParamLimits

0x7865,	// (0x00065617) blid2_tripm_pane_g6

0xd51a,	// (0x0006b2cc) mp4_progress_pane_g1

0x78bd,	// (0x0006566f) blid2_tripm_values_pane_ParamLimits

0x78bd,	// (0x0006566f) blid2_tripm_values_pane

0x797e,	// (0x00065730) blid2_tripm_values_pane_t1

0x798c,	// (0x0006573e) blid2_tripm_values_pane_t2

0x799a,	// (0x0006574c) blid2_tripm_values_pane_t3

0x79a8,	// (0x0006575a) blid2_tripm_values_pane_t4

0x79b6,	// (0x00065768) blid2_tripm_values_pane_t5

0x79c4,	// (0x00065776) blid2_tripm_values_pane_t6

0x79d2,	// (0x00065784) blid2_tripm_values_pane_t7

0x79e0,	// (0x00065792) blid2_tripm_values_pane_t8

0x79ee,	// (0x000657a0) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0006d8ea) blid2_tripm_values_pane_t

0x2082,	// (0x0005fe34) call_video_pane_t1_ParamLimits

0x209f,	// (0x0005fe51) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0006d020) call_video_pane_t_ParamLimits

0x3c87,	// (0x00061a39) msg_header_pane_g1_ParamLimits

0xb571,	// (0x00069323) msg_header_pane_g2_ParamLimits

0xb571,	// (0x00069323) msg_header_pane_g2

0x0001,

0xf488,	// (0x0006d23a) msg_header_pane_g_ParamLimits

0xf488,	// (0x0006d23a) msg_header_pane_g

0xa8c9,	// (0x0006867b) main_clock2_pane_ParamLimits

0x57a1,	// (0x00063553) grid_clock2_toolbar_pane_ParamLimits

0x57a1,	// (0x00063553) grid_clock2_toolbar_pane

0x57a1,	// (0x00063553) listscroll_clock2_pane_ParamLimits

0x57a1,	// (0x00063553) listscroll_clock2_pane

0x5849,	// (0x000635fb) main_clock2_pane_t3_ParamLimits

0x5849,	// (0x000635fb) main_clock2_pane_t3

0x585b,	// (0x0006360d) main_clock2_pane_t4_ParamLimits

0x585b,	// (0x0006360d) main_clock2_pane_t4

0xdcbb,	// (0x0006ba6d) cell_clock2_toolbar_pane

0xdcc3,	// (0x0006ba75) cell_clock2_toolbar_pane_cp01

0xdcc3,	// (0x0006ba75) cell_clock2_toolbar_pane_cp02

0xdccb,	// (0x0006ba7d) cell_clock2_toolbar_pane_cp03

0xdcd3,	// (0x0006ba85) list_clock2_pane

0xb2c2,	// (0x00069074) scroll_pane_cp10

0xdcdb,	// (0x0006ba8d) list_single_clock2_pane_ParamLimits

0xdcdb,	// (0x0006ba8d) list_single_clock2_pane

0xaa7f,	// (0x00068831) list_highlight_pane_cp08

0xdce8,	// (0x0006ba9a) list_single_clock2_pane_t1

0xdcf6,	// (0x0006baa8) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0006d8fd) list_single_clock2_pane_t

0x9c32,	// (0x000679e4) bg_button_pane_cp10

0xdd04,	// (0x0006bab6) cell_clock2_toolbar_pane_g1

0x3cde,	// (0x00061a90) aid_main_viewer_pane_g1_ParamLimits

0x3cde,	// (0x00061a90) aid_main_viewer_pane_g1

0x3cea,	// (0x00061a9c) aid_main_viewer_pane_g2_ParamLimits

0x3cea,	// (0x00061a9c) aid_main_viewer_pane_g2

0x3cf6,	// (0x00061aa8) aid_main_viewer_pane_g3_ParamLimits

0x3cf6,	// (0x00061aa8) aid_main_viewer_pane_g3

0x3d07,	// (0x00061ab9) aid_main_viewer_pane_g4_ParamLimits

0x3d07,	// (0x00061ab9) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0006d24b) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0006d24b) aid_main_viewer_pane_g

0x4491,	// (0x00062243) main_calc_pane_ParamLimits

0x449e,	// (0x00062250) main_dialer2_pane_ParamLimits

0x9c32,	// (0x000679e4) main_cam6_pane

0x9c32,	// (0x000679e4) main_vid6_pane

0x57ad,	// (0x0006355f) listscroll_gen_pane_cp06_ParamLimits

0x57ad,	// (0x0006355f) listscroll_gen_pane_cp06

0x586d,	// (0x0006361f) main_clock2_pane_t5_ParamLimits

0x586d,	// (0x0006361f) main_clock2_pane_t5

0x58bc,	// (0x0006366e) aid_call2_pane_cp10_ParamLimits

0x58ce,	// (0x00063680) aid_call_pane_cp10_ParamLimits

0xb331,	// (0x000690e3) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb331,	// (0x000690e3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58e0,	// (0x00063692) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58e0,	// (0x00063692) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb331,	// (0x000690e3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0006d586) popup_clock_analogue_window_cp10_g_ParamLimits

0x58f2,	// (0x000636a4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x60c5,	// (0x00063e77) cell_dialer2_keypad_pane_g2_ParamLimits

0x60c5,	// (0x00063e77) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0006d66c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0006d66c) cell_dialer2_keypad_pane_g

0x60e1,	// (0x00063e93) cell_dialer2_keypad_pane_t1

0x6b66,	// (0x00064918) main_cset_text2_pane_ParamLimits

0x6b66,	// (0x00064918) main_cset_text2_pane

0xdb33,	// (0x0006b8e5) area_vitu2_query_pane_g1_ParamLimits

0x74a6,	// (0x00065258) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0006d821) area_vitu2_query_pane_g_ParamLimits

0xa378,	// (0x0006812a) area_vitu2_query_pane_t7_ParamLimits

0xa378,	// (0x0006812a) area_vitu2_query_pane_t7

0x7507,	// (0x000652b9) bg_button_pane_cp018_ParamLimits

0x7515,	// (0x000652c7) bg_button_pane_cp021_ParamLimits

0x7521,	// (0x000652d3) bg_button_pane_cp022_ParamLimits

0x7521,	// (0x000652d3) bg_vkb2_func_pane_cp08_ParamLimits

0x7507,	// (0x000652b9) bg_vkb2_func_pane_cp06_ParamLimits

0x7515,	// (0x000652c7) bg_vkb2_func_pane_cp07_ParamLimits

0x7532,	// (0x000652e4) input_focus_pane_cp09_ParamLimits

0x79fc,	// (0x000657ae) cam6_autofocus_pane_ParamLimits

0x79fc,	// (0x000657ae) cam6_autofocus_pane

0x7a1e,	// (0x000657d0) cam6_image_uncrop_pane_ParamLimits

0x7a1e,	// (0x000657d0) cam6_image_uncrop_pane

0x7a4b,	// (0x000657fd) cam6_indi_pane_ParamLimits

0x7a4b,	// (0x000657fd) cam6_indi_pane

0x7a65,	// (0x00065817) cam6_mode_pane_ParamLimits

0x7a65,	// (0x00065817) cam6_mode_pane

0x7a79,	// (0x0006582b) cam6_timer_pane_ParamLimits

0x7a79,	// (0x0006582b) cam6_timer_pane

0x7a85,	// (0x00065837) cam6_zoom_pane_ParamLimits

0x7a85,	// (0x00065837) cam6_zoom_pane

0x7aa1,	// (0x00065853) cam6_mode_pane_g1_ParamLimits

0x7aa1,	// (0x00065853) cam6_mode_pane_g1

0x7aad,	// (0x0006585f) cam6_mode_pane_g2_ParamLimits

0x7aad,	// (0x0006585f) cam6_mode_pane_g2

0x7ab9,	// (0x0006586b) cam6_mode_pane_g3_ParamLimits

0x7ab9,	// (0x0006586b) cam6_mode_pane_g3

0x7ac5,	// (0x00065877) cam6_mode_pane_g4_ParamLimits

0x7ac5,	// (0x00065877) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0006d902) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0006d902) cam6_mode_pane_g

0xdaa7,	// (0x0006b859) bg_tb_trans_pane_cp08_ParamLimits

0xdaa7,	// (0x0006b859) bg_tb_trans_pane_cp08

0xdd0c,	// (0x0006babe) cam6_battery_pane_ParamLimits

0xdd0c,	// (0x0006babe) cam6_battery_pane

0xdd22,	// (0x0006bad4) cam6_indi_pane_g1_ParamLimits

0xdd22,	// (0x0006bad4) cam6_indi_pane_g1

0xdd34,	// (0x0006bae6) cam6_indi_pane_g2_ParamLimits

0xdd34,	// (0x0006bae6) cam6_indi_pane_g2

0xdd46,	// (0x0006baf8) cam6_indi_pane_g3_ParamLimits

0xdd46,	// (0x0006baf8) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0006d90b) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0006d90b) cam6_indi_pane_g

0xdd58,	// (0x0006bb0a) cam6_indi_pane_t1_ParamLimits

0xdd58,	// (0x0006bb0a) cam6_indi_pane_t1

0x6618,	// (0x000643ca) cam6_autofocus_pane_g1

0x6610,	// (0x000643c2) cam6_autofocus_pane_g2

0x6628,	// (0x000643da) cam6_autofocus_pane_g3

0x6620,	// (0x000643d2) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0006d912) cam6_autofocus_pane_g

0xdd7e,	// (0x0006bb30) cam6_timer_pane_g1

0xdd86,	// (0x0006bb38) cam6_timer_pane_t1

0xdd94,	// (0x0006bb46) cam6_zoom_cont_pane

0xdd9c,	// (0x0006bb4e) cam6_zoom_pane_g1

0xdda4,	// (0x0006bb56) cam6_zoom_pane_g2

0x7ad1,	// (0x00065883) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0006d91b) cam6_zoom_pane_g

0xcc6e,	// (0x0006aa20) cam6_battery_pane_g1

0xcc6e,	// (0x0006aa20) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0006d48e) cam6_battery_pane_g

0xddac,	// (0x0006bb5e) cam6_zoom_cont_pane_g1

0xddb5,	// (0x0006bb67) cam6_zoom_cont_pane_g2

0xddbe,	// (0x0006bb70) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0006d922) cam6_zoom_cont_pane_g

0x7aee,	// (0x000658a0) cam6_mode_pane_cp_ParamLimits

0x7aee,	// (0x000658a0) cam6_mode_pane_cp

0x7b02,	// (0x000658b4) cam6_zoom_pane_cp_ParamLimits

0x7b02,	// (0x000658b4) cam6_zoom_pane_cp

0x7b1e,	// (0x000658d0) vid6_image_uncrop_cif_pane_ParamLimits

0x7b1e,	// (0x000658d0) vid6_image_uncrop_cif_pane

0x7b4a,	// (0x000658fc) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b4a,	// (0x000658fc) vid6_image_uncrop_nhd_pane

0x7b69,	// (0x0006591b) vid6_image_uncrop_vga_pane_ParamLimits

0x7b69,	// (0x0006591b) vid6_image_uncrop_vga_pane

0x7b88,	// (0x0006593a) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b88,	// (0x0006593a) vid6_image_uncrop_wvga_pane

0x7ba7,	// (0x00065959) vid6_indi_pane_ParamLimits

0x7ba7,	// (0x00065959) vid6_indi_pane

0xdaa7,	// (0x0006b859) bg_tb_trans_pane_cp09_ParamLimits

0xdaa7,	// (0x0006b859) bg_tb_trans_pane_cp09

0xddd6,	// (0x0006bb88) cam6_battery_pane_cp_ParamLimits

0xddd6,	// (0x0006bb88) cam6_battery_pane_cp

0xdde2,	// (0x0006bb94) vid6_indi_pane_g1_ParamLimits

0xdde2,	// (0x0006bb94) vid6_indi_pane_g1

0xddf4,	// (0x0006bba6) vid6_indi_pane_g2_ParamLimits

0xddf4,	// (0x0006bba6) vid6_indi_pane_g2

0xde06,	// (0x0006bbb8) vid6_indi_pane_g3_ParamLimits

0xde06,	// (0x0006bbb8) vid6_indi_pane_g3

0xde1d,	// (0x0006bbcf) vid6_indi_pane_g4_ParamLimits

0xde1d,	// (0x0006bbcf) vid6_indi_pane_g4

0xde34,	// (0x0006bbe6) vid6_indi_pane_g5_ParamLimits

0xde34,	// (0x0006bbe6) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0006d929) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0006d929) vid6_indi_pane_g

0xde4e,	// (0x0006bc00) vid6_indi_pane_t1_ParamLimits

0xde4e,	// (0x0006bc00) vid6_indi_pane_t1

0xde64,	// (0x0006bc16) vid6_indi_pane_t2_ParamLimits

0xde64,	// (0x0006bc16) vid6_indi_pane_t2

0xde8c,	// (0x0006bc3e) vid6_indi_pane_t3_ParamLimits

0xde8c,	// (0x0006bc3e) vid6_indi_pane_t3

0xdeb4,	// (0x0006bc66) vid6_indi_pane_t4_ParamLimits

0xdeb4,	// (0x0006bc66) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0006d934) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0006d934) vid6_indi_pane_t

0xded8,	// (0x0006bc8a) wait_bar_pane_cp08

0x7bcc,	// (0x0006597e) main_cset_text2_pane_t1_ParamLimits

0x7bcc,	// (0x0006597e) main_cset_text2_pane_t1

0x7ad9,	// (0x0006588b) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ad9,	// (0x0006588b) listscroll_gen_pane_cp06_t1

0x9c32,	// (0x000679e4) main_cam6_set_pane

0x649a,	// (0x0006424c) bg_tb_trans_pane_cp06_ParamLimits

0x64b0,	// (0x00064262) cam4_indicators_pane_g1_ParamLimits

0x64c1,	// (0x00064273) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0006d6a9) cam4_indicators_pane_g_ParamLimits

0x64d9,	// (0x0006428b) cam4_indicators_pane_t1_ParamLimits

0x6586,	// (0x00064338) bg_tb_trans_pane_cp07_ParamLimits

0x659e,	// (0x00064350) vid4_indicators_pane_g1_ParamLimits

0x65b4,	// (0x00064366) vid4_indicators_pane_g2_ParamLimits

0x65c8,	// (0x0006437a) vid4_indicators_pane_g3_ParamLimits

0x65db,	// (0x0006438d) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0006d6bb) vid4_indicators_pane_g_ParamLimits

0x65f9,	// (0x000643ab) vid4_indicators_pane_t1_ParamLimits

0x765b,	// (0x0006540d) vid4_progress_pane_g1_ParamLimits

0x766d,	// (0x0006541f) vid4_progress_pane_g2_ParamLimits

0x3d64,	// (0x00061b16) vid4_progress_pane_g3_ParamLimits

0x767f,	// (0x00065431) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0006d86c) vid4_progress_pane_g_ParamLimits

0x769d,	// (0x0006544f) vid4_progress_pane_t1_ParamLimits

0x76b2,	// (0x00065464) vid4_progress_pane_t2_ParamLimits

0x76c8,	// (0x0006547a) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0006d877) vid4_progress_pane_t_ParamLimits

0x76dd,	// (0x0006548f) wait_bar_pane_cp07_ParamLimits

0x7bf3,	// (0x000659a5) main_cam6_set_pane_g2_ParamLimits

0x7bf3,	// (0x000659a5) main_cam6_set_pane_g2

0x7bff,	// (0x000659b1) main_cset6_listscroll_pane_ParamLimits

0x7bff,	// (0x000659b1) main_cset6_listscroll_pane

0x7c2c,	// (0x000659de) main_cset6_slider_pane_ParamLimits

0x7c2c,	// (0x000659de) main_cset6_slider_pane

0x7c38,	// (0x000659ea) main_cset6_text2_pane_ParamLimits

0x7c38,	// (0x000659ea) main_cset6_text2_pane

0xdee7,	// (0x0006bc99) main_cset6_text_pane

0xdeef,	// (0x0006bca1) main_cset_list_pane_copy1_ParamLimits

0xdeef,	// (0x0006bca1) main_cset_list_pane_copy1

0xdeff,	// (0x0006bcb1) scroll_pane_cp028_copy1

0x7c4b,	// (0x000659fd) cset_list_set_pane_copy1

0x7c5b,	// (0x00065a0d) aid_position_infowindow_above_copy1

0x7c63,	// (0x00065a15) aid_position_infowindow_below_copy1

0x7c6b,	// (0x00065a1d) cset_list_set_pane_g1_copy1

0x7c73,	// (0x00065a25) cset_list_set_pane_g3_copy1_ParamLimits

0x7c73,	// (0x00065a25) cset_list_set_pane_g3_copy1

0x7c82,	// (0x00065a34) cset_list_set_pane_t1_copy1_ParamLimits

0x7c82,	// (0x00065a34) cset_list_set_pane_t1_copy1

0xa2c9,	// (0x0006807b) list_highlight_pane_cp021_copy1_ParamLimits

0xa2c9,	// (0x0006807b) list_highlight_pane_cp021_copy1

0xdf08,	// (0x0006bcba) cset6_slider_pane_ParamLimits

0xdf08,	// (0x0006bcba) cset6_slider_pane

0xdf34,	// (0x0006bce6) main_cset6_slider_pane_g1_ParamLimits

0xdf34,	// (0x0006bce6) main_cset6_slider_pane_g1

0x7c97,	// (0x00065a49) main_cset6_slider_pane_g2_ParamLimits

0x7c97,	// (0x00065a49) main_cset6_slider_pane_g2

0xdf5c,	// (0x0006bd0e) main_cset6_slider_pane_g3_ParamLimits

0xdf5c,	// (0x0006bd0e) main_cset6_slider_pane_g3

0x7cbf,	// (0x00065a71) main_cset6_slider_pane_g4_ParamLimits

0x7cbf,	// (0x00065a71) main_cset6_slider_pane_g4

0x7ccb,	// (0x00065a7d) main_cset6_slider_pane_g5_ParamLimits

0x7ccb,	// (0x00065a7d) main_cset6_slider_pane_g5

0xd7bb,	// (0x0006b56d) main_cset6_slider_pane_g7_ParamLimits

0xd7bb,	// (0x0006b56d) main_cset6_slider_pane_g7

0xd7c7,	// (0x0006b579) main_cset6_slider_pane_g8_ParamLimits

0xd7c7,	// (0x0006b579) main_cset6_slider_pane_g8

0x7cd7,	// (0x00065a89) main_cset6_slider_pane_g9_ParamLimits

0x7cd7,	// (0x00065a89) main_cset6_slider_pane_g9

0x7ce3,	// (0x00065a95) main_cset6_slider_pane_g10_ParamLimits

0x7ce3,	// (0x00065a95) main_cset6_slider_pane_g10

0x7cef,	// (0x00065aa1) main_cset6_slider_pane_g11_ParamLimits

0x7cef,	// (0x00065aa1) main_cset6_slider_pane_g11

0x7cfb,	// (0x00065aad) main_cset6_slider_pane_g12_ParamLimits

0x7cfb,	// (0x00065aad) main_cset6_slider_pane_g12

0x7d07,	// (0x00065ab9) main_cset6_slider_pane_g13_ParamLimits

0x7d07,	// (0x00065ab9) main_cset6_slider_pane_g13

0x7d13,	// (0x00065ac5) main_cset6_slider_pane_g14_ParamLimits

0x7d13,	// (0x00065ac5) main_cset6_slider_pane_g14

0x7d1f,	// (0x00065ad1) main_cset6_slider_pane_g15_ParamLimits

0x7d1f,	// (0x00065ad1) main_cset6_slider_pane_g15

0x7d37,	// (0x00065ae9) main_cset6_slider_pane_g16_ParamLimits

0x7d37,	// (0x00065ae9) main_cset6_slider_pane_g16

0x7d43,	// (0x00065af5) main_cset6_slider_pane_g17_ParamLimits

0x7d43,	// (0x00065af5) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0006d93d) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0006d93d) main_cset6_slider_pane_g

0xdf68,	// (0x0006bd1a) main_cset6_slider_pane_t1_ParamLimits

0xdf68,	// (0x0006bd1a) main_cset6_slider_pane_t1

0x7d67,	// (0x00065b19) main_cset6_slider_pane_t2_ParamLimits

0x7d67,	// (0x00065b19) main_cset6_slider_pane_t2

0x7d92,	// (0x00065b44) main_cset6_slider_pane_t3_ParamLimits

0x7d92,	// (0x00065b44) main_cset6_slider_pane_t3

0x7dbd,	// (0x00065b6f) main_cset6_slider_pane_t4_ParamLimits

0x7dbd,	// (0x00065b6f) main_cset6_slider_pane_t4

0x7de8,	// (0x00065b9a) main_cset6_slider_pane_t5_ParamLimits

0x7de8,	// (0x00065b9a) main_cset6_slider_pane_t5

0xdfa9,	// (0x0006bd5b) main_cset6_slider_pane_t7_ParamLimits

0xdfa9,	// (0x0006bd5b) main_cset6_slider_pane_t7

0x7e13,	// (0x00065bc5) main_cset6_slider_pane_t8_ParamLimits

0x7e13,	// (0x00065bc5) main_cset6_slider_pane_t8

0x7e37,	// (0x00065be9) main_cset6_slider_pane_t9_ParamLimits

0x7e37,	// (0x00065be9) main_cset6_slider_pane_t9

0x7e5b,	// (0x00065c0d) main_cset6_slider_pane_t10_ParamLimits

0x7e5b,	// (0x00065c0d) main_cset6_slider_pane_t10

0x7e7f,	// (0x00065c31) main_cset6_slider_pane_t11_ParamLimits

0x7e7f,	// (0x00065c31) main_cset6_slider_pane_t11

0xdfdf,	// (0x0006bd91) main_cset6_slider_pane_t14_ParamLimits

0xdfdf,	// (0x0006bd91) main_cset6_slider_pane_t14

0xe018,	// (0x0006bdca) main_cset6_slider_pane_t15_ParamLimits

0xe018,	// (0x0006bdca) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0006d962) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0006d962) main_cset6_slider_pane_t

0xda5b,	// (0x0006b80d) cset_slider_pane_g1_copy1

0xda64,	// (0x0006b816) cset_slider_pane_g2_copy1

0xda6d,	// (0x0006b81f) cset_slider_pane_g3_copy1

0x9c32,	// (0x000679e4) bg_popup_sub_pane_cp011_copy1

0xe051,	// (0x0006be03) main_cset_text_pane_g1_copy1

0xd901,	// (0x0006b6b3) main_cset_text_pane_t1_copy1

0xd90f,	// (0x0006b6c1) main_cset_text_pane_t2_copy1

0xd91d,	// (0x0006b6cf) main_cset_text_pane_t3_copy1

0xd92b,	// (0x0006b6dd) main_cset_text_pane_t4_copy1

0xd939,	// (0x0006b6eb) main_cset_text_pane_t5_copy1

0xe059,	// (0x0006be0b) main_cset_text_pane_t6_copy1

0xe067,	// (0x0006be19) main_cset_text_pane_t7_copy1

0x7f48,	// (0x00065cfa) main_cset_text2_pane_t1_copy1

0xa2c9,	// (0x0006807b) main_ncimui_pane

0x44e3,	// (0x00062295) popup_query_ncimui_window_ParamLimits

0x44e3,	// (0x00062295) popup_query_ncimui_window

0xa2d7,	// (0x00068089) field_cale_ev2_pane_g4_ParamLimits

0xa2d7,	// (0x00068089) field_cale_ev2_pane_g4

0x5ddb,	// (0x00063b8d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ddb,	// (0x00063b8d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0006d647) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0006d647) cell_video_dialer_keypad_pane_g

0x5df3,	// (0x00063ba5) cell_video_dialer_keypad_pane_t1

0x9c32,	// (0x000679e4) bg_popup_window_pane_cp012

0xb1ae,	// (0x00068f60) heading_pane_cp06

0xe093,	// (0x0006be45) ncim_query_content_pane

0x9c32,	// (0x000679e4) bg_popup_heading_pane_cp01

0xe09b,	// (0x0006be4d) ncim_heading_pane_t1

0xe0a9,	// (0x0006be5b) ncim_indicator_popup_pane

0xe0bb,	// (0x0006be6d) ncim_query_button_pane

0xe0d1,	// (0x0006be83) ncim_query_content_pane_t1

0xe0e3,	// (0x0006be95) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0006d9a6) ncim_query_content_pane_t

0xe11d,	// (0x0006becf) ncim_query_list_pane

0xe12f,	// (0x0006bee1) ncim_query_popup_pane

0xe0a9,	// (0x0006be5b) ncim_indicator_popup_pane_ParamLimits

0x80a4,	// (0x00065e56) ncim_query_content_pane_g1_ParamLimits

0x80a4,	// (0x00065e56) ncim_query_content_pane_g1

0xe0d1,	// (0x0006be83) ncim_query_content_pane_t1_ParamLimits

0xe0e3,	// (0x0006be95) ncim_query_content_pane_t2_ParamLimits

0x80b0,	// (0x00065e62) ncim_query_content_pane_t3_ParamLimits

0x80b0,	// (0x00065e62) ncim_query_content_pane_t3

0x80cd,	// (0x00065e7f) ncim_query_content_pane_t4_ParamLimits

0x80cd,	// (0x00065e7f) ncim_query_content_pane_t4

0x80ea,	// (0x00065e9c) ncim_query_content_pane_t5_ParamLimits

0x80ea,	// (0x00065e9c) ncim_query_content_pane_t5

0xe0f5,	// (0x0006bea7) ncim_query_content_pane_t6_ParamLimits

0xe0f5,	// (0x0006bea7) ncim_query_content_pane_t6

0xfbf4,	// (0x0006d9a6) ncim_query_content_pane_t_ParamLimits

0xe11d,	// (0x0006becf) ncim_query_list_pane_ParamLimits

0xe12f,	// (0x0006bee1) ncim_query_popup_pane_ParamLimits

0xe143,	// (0x0006bef5) wait_bar_pane_cp04

0x9c32,	// (0x000679e4) input_focus_pane_cp011

0xe14b,	// (0x0006befd) ncim_query_popup_pane_t1

0xe159,	// (0x0006bf0b) ncim_list_query_list_pane_ParamLimits

0xe159,	// (0x0006bf0b) ncim_list_query_list_pane

0x9c32,	// (0x000679e4) bg_button_pane_cp027

0xe16c,	// (0x0006bf1e) ncim_query_button_pane_g1

0x9c32,	// (0x000679e4) list_highlight_pane_cp012

0xe176,	// (0x0006bf28) ncim_list_query_list_pane_g1

0xe17e,	// (0x0006bf30) ncim_list_query_list_pane_t1

0x64cd,	// (0x0006427f) cam4_indicators_pane_g3_ParamLimits

0x64cd,	// (0x0006427f) cam4_indicators_pane_g3

0x65e7,	// (0x00064399) vid4_indicators_pane_g5_ParamLimits

0x65e7,	// (0x00064399) vid4_indicators_pane_g5

0x768e,	// (0x00065440) vid4_progress_pane_g5_ParamLimits

0x768e,	// (0x00065440) vid4_progress_pane_g5

0x7f7a,	// (0x00065d2c) main_ncimui_pane_g1

0x7fe6,	// (0x00065d98) ncimui_group_query_pane_ParamLimits

0x7fe6,	// (0x00065d98) ncimui_group_query_pane

0x8040,	// (0x00065df2) ncimui_list_pane_ParamLimits

0x8040,	// (0x00065df2) ncimui_list_pane

0x8067,	// (0x00065e19) ncimui_text_pane_ParamLimits

0x8067,	// (0x00065e19) ncimui_text_pane

0x8107,	// (0x00065eb9) ncimui_text_pane_t1_ParamLimits

0x8107,	// (0x00065eb9) ncimui_text_pane_t1

0xe18c,	// (0x0006bf3e) ncimui_list_single_graphic_pane_ParamLimits

0xe18c,	// (0x0006bf3e) ncimui_list_single_graphic_pane

0x8126,	// (0x00065ed8) ncimui_query_pane_ParamLimits

0x8126,	// (0x00065ed8) ncimui_query_pane

0x9c32,	// (0x000679e4) list_highlight_pane_cp013

0xe19c,	// (0x0006bf4e) ncim_list_query_list_pane_t1_copy1

0xe176,	// (0x0006bf28) ncim_list_single_graphic_pane_g1

0xe1aa,	// (0x0006bf5c) ncim_query_button_pane_cp01

0xe1b6,	// (0x0006bf68) ncim_query_entry_pane_ParamLimits

0xe1b6,	// (0x0006bf68) ncim_query_entry_pane

0xe1c9,	// (0x0006bf7b) ncimui_query_pane_g1

0xe1d5,	// (0x0006bf87) ncimui_query_pane_t1_ParamLimits

0xe1d5,	// (0x0006bf87) ncimui_query_pane_t1

0xa2c9,	// (0x0006807b) input_focus_pane_cp012

0xe1ee,	// (0x0006bfa0) ncim_query_entry_pane_t1

0xa8c9,	// (0x0006867b) main_im_pane_ParamLimits

0xa2c9,	// (0x0006807b) main_mobtv_pane_ParamLimits

0xa2c9,	// (0x0006807b) main_mobtv_pane

0x7d4f,	// (0x00065b01) main_cset6_slider_pane_g18_ParamLimits

0x7d4f,	// (0x00065b01) main_cset6_slider_pane_g18

0x7d5b,	// (0x00065b0d) main_cset6_slider_pane_g19_ParamLimits

0x7d5b,	// (0x00065b0d) main_cset6_slider_pane_g19

0xd668,	// (0x0006b41a) bg_main_mobtv_pane_ParamLimits

0xd668,	// (0x0006b41a) bg_main_mobtv_pane

0x8139,	// (0x00065eeb) main_mobtv_info_pane

0x8144,	// (0x00065ef6) main_mobtv_loading_pane_ParamLimits

0x8144,	// (0x00065ef6) main_mobtv_loading_pane

0xe200,	// (0x0006bfb2) main_mobtv_pg_channel_list_pane

0xe20a,	// (0x0006bfbc) main_mobtv_pg_hdr_pane

0x8151,	// (0x00065f03) main_mobtv_programe_curr_pane_ParamLimits

0x8151,	// (0x00065f03) main_mobtv_programe_curr_pane

0x815e,	// (0x00065f10) main_mobtv_programe_next_pane_ParamLimits

0x815e,	// (0x00065f10) main_mobtv_programe_next_pane

0xe213,	// (0x0006bfc5) popup_mobtv_noti_window

0xcc6e,	// (0x0006aa20) main_tv_pg_hdr_pane_g1

0xe21d,	// (0x0006bfcf) main_tv_pg_hdr_pane_g2

0xe225,	// (0x0006bfd7) main_tv_pg_hdr_pane_g3

0xe22d,	// (0x0006bfdf) main_tv_pg_hdr_pane_g4

0xe235,	// (0x0006bfe7) main_tv_pg_hdr_pane_g5

0xe23f,	// (0x0006bff1) main_tv_pg_hdr_pane_g6

0xe249,	// (0x0006bffb) main_tv_pg_hdr_pane_g7

0xe253,	// (0x0006c005) main_tv_pg_hdr_pane_g8

0xe25d,	// (0x0006c00f) main_tv_pg_hdr_pane_g9

0xe267,	// (0x0006c019) main_tv_pg_hdr_pane_g10

0xe271,	// (0x0006c023) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0006d9b3) main_tv_pg_hdr_pane_g

0xe27b,	// (0x0006c02d) main_tv_pg_hdr_pane_t1

0xe289,	// (0x0006c03b) main_tv_pg_hdr_pane_t2

0xe297,	// (0x0006c049) main_tv_pg_hdr_pane_t3

0xe2a7,	// (0x0006c059) main_tv_pg_hdr_pane_t4

0xe2b7,	// (0x0006c069) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0006d9ca) main_tv_pg_hdr_pane_t

0xe2c7,	// (0x0006c079) single_mobtv_pg_channel_pane_ParamLimits

0xe2c7,	// (0x0006c079) single_mobtv_pg_channel_pane

0xe2d9,	// (0x0006c08b) single_mobtv_pg_channel_table_pane

0xe2e2,	// (0x0006c094) single_mobtv_pg_channel_thumb_pane

0xe2eb,	// (0x0006c09d) single_tv_pg_channel_pane_g1

0xe2f4,	// (0x0006c0a6) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0006d9d5) single_tv_pg_channel_pane_g

0xce9e,	// (0x0006ac50) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce9e,	// (0x0006ac50) bg_single_mobtv_pg_channel_thumb_pane

0xe2fd,	// (0x0006c0af) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2fd,	// (0x0006c0af) single_mobtv_pg_channel_thumb_pane_g1

0xe30b,	// (0x0006c0bd) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe30b,	// (0x0006c0bd) single_mobtv_pg_channel_thumb_pane_g2

0xe317,	// (0x0006c0c9) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe317,	// (0x0006c0c9) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0006d9da) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0006d9da) single_mobtv_pg_channel_thumb_pane_g

0xe323,	// (0x0006c0d5) single_mobtv_pg_channel_thumb_pane_t1

0xe331,	// (0x0006c0e3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0006d9e1) single_mobtv_pg_channel_thumb_pane_t

0xcc6e,	// (0x0006aa20) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6e,	// (0x0006aa20) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0006d48e) bg_single_mobtv_pg_channel_table_pane_g

0xe33f,	// (0x0006c0f1) single_mobtv_pg_channel_table_pane_t1

0xe34d,	// (0x0006c0ff) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0006d9e6) single_mobtv_pg_channel_table_pane_t

0x8173,	// (0x00065f25) main_mobtv_info_pane_g1_ParamLimits

0x8173,	// (0x00065f25) main_mobtv_info_pane_g1

0x818f,	// (0x00065f41) main_mobtv_info_pane_t1_ParamLimits

0x818f,	// (0x00065f41) main_mobtv_info_pane_t1

0x8207,	// (0x00065fb9) main_mobtv_info_pane_t2_ParamLimits

0x8207,	// (0x00065fb9) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0006d9f0) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0006d9f0) main_mobtv_info_pane_t

0x8298,	// (0x0006604a) wait_bar_pane_cp05

0x82aa,	// (0x0006605c) main_mobtv_loading_pane_g1_ParamLimits

0x82aa,	// (0x0006605c) main_mobtv_loading_pane_g1

0x82b6,	// (0x00066068) main_mobtv_loading_pane_g2_ParamLimits

0x82b6,	// (0x00066068) main_mobtv_loading_pane_g2

0x82c2,	// (0x00066074) main_mobtv_loading_pane_g3_ParamLimits

0x82c2,	// (0x00066074) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0006d9f7) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0006d9f7) main_mobtv_loading_pane_g

0xe376,	// (0x0006c128) main_mobtv_loading_pane_t1_ParamLimits

0xe376,	// (0x0006c128) main_mobtv_loading_pane_t1

0xe38e,	// (0x0006c140) main_mobtv_loading_pane_t2_ParamLimits

0xe38e,	// (0x0006c140) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0006d9fe) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0006d9fe) main_mobtv_loading_pane_t

0x82d0,	// (0x00066082) wait_bar_pane_cp06_ParamLimits

0x82d0,	// (0x00066082) wait_bar_pane_cp06

0xe3b2,	// (0x0006c164) main_mobtv_programe_curr_pane_t1

0xe3c0,	// (0x0006c172) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0006da03) main_mobtv_programe_curr_pane_t

0xe3ce,	// (0x0006c180) main_mobtv_programe_next_pane_t1

0xe3dc,	// (0x0006c18e) main_mobtv_programe_next_pane_t2

0xe3ea,	// (0x0006c19c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0006da08) main_mobtv_programe_next_pane_t

0x9c32,	// (0x000679e4) bg_popup_mobtv_noti_window_pane

0xe3f8,	// (0x0006c1aa) popup_mobtv_noti_window_g1

0xe400,	// (0x0006c1b2) popup_mobtv_noti_window_t1

0xe40e,	// (0x0006c1c0) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0006da0f) popup_mobtv_noti_window_t

0xcc6e,	// (0x0006aa20) bg_popup_mobtv_noti_window_pane_g1

0x9c32,	// (0x000679e4) sc_clock_pane

0x9c32,	// (0x000679e4) main_fs_bigclock_pane

0x78ab,	// (0x0006565d) blid2_tripm_pane_t4_ParamLimits

0x78ab,	// (0x0006565d) blid2_tripm_pane_t4

0x82dc,	// (0x0006608e) sc_clock_pane_g1_ParamLimits

0x82dc,	// (0x0006608e) sc_clock_pane_g1

0x82ea,	// (0x0006609c) sc_clock_pane_t1_ParamLimits

0x82ea,	// (0x0006609c) sc_clock_pane_t1

0x82ff,	// (0x000660b1) sc_clock_pane_t2_ParamLimits

0x82ff,	// (0x000660b1) sc_clock_pane_t2

0x8311,	// (0x000660c3) sc_clock_pane_t3_ParamLimits

0x8311,	// (0x000660c3) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0006da14) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0006da14) sc_clock_pane_t

0x91fc,	// (0x00066fae) main_fs_bigclock_indicator_pane_ParamLimits

0x91fc,	// (0x00066fae) main_fs_bigclock_indicator_pane

0x83a4,	// (0x00066156) main_fs_bigclock_pane_g1_ParamLimits

0x83a4,	// (0x00066156) main_fs_bigclock_pane_g1

0x9208,	// (0x00066fba) main_fs_bigclock_pane_t1_ParamLimits

0x9208,	// (0x00066fba) main_fs_bigclock_pane_t1

0x921a,	// (0x00066fcc) main_fs_bigclock_pane_t2_ParamLimits

0x921a,	// (0x00066fcc) main_fs_bigclock_pane_t2

0x922e,	// (0x00066fe0) main_fs_bigclock_pane_t3_ParamLimits

0x922e,	// (0x00066fe0) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0006dc1e) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0006dc1e) main_fs_bigclock_pane_t

0xec5f,	// (0x0006ca11) main_fs_bigclock_indicator_pane_g1

0xe0c3,	// (0x0006be75) ncim_query_content_pane_g2_ParamLimits

0xe0c3,	// (0x0006be75) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0006d9a1) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0006d9a1) ncim_query_content_pane_g

0x8323,	// (0x000660d5) sc_clock_pane_t4_ParamLimits

0x8323,	// (0x000660d5) sc_clock_pane_t4

0xa2c9,	// (0x0006807b) main_radioblah_pane

0xd5c9,	// (0x0006b37b) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5c9,	// (0x0006b37b) cell_call4_button_pane_t1_copy1

0x7f96,	// (0x00065d48) main_ncimui_pane_t1_ParamLimits

0x7f96,	// (0x00065d48) main_ncimui_pane_t1

0x7fb0,	// (0x00065d62) main_ncimui_pane_t2_ParamLimits

0x7fb0,	// (0x00065d62) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0006d99a) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0006d99a) main_ncimui_pane_t

0xe561,	// (0x0006c313) main_radioblah_anim_pane_ParamLimits

0xe561,	// (0x0006c313) main_radioblah_anim_pane

0xe572,	// (0x0006c324) main_radioblah_info_pane_ParamLimits

0xe572,	// (0x0006c324) main_radioblah_info_pane

0xe586,	// (0x0006c338) main_radioblah_pane_t1_ParamLimits

0xe586,	// (0x0006c338) main_radioblah_pane_t1

0xe5a2,	// (0x0006c354) main_radioblah_pane_t2_ParamLimits

0xe5a2,	// (0x0006c354) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0006da35) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0006da35) main_radioblah_pane_t

0x83f6,	// (0x000661a8) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83f6,	// (0x000661a8) main_radioblah_rocker_ctrl_pane

0xe5ea,	// (0x0006c39c) main_radioblah_info_pane_t1_ParamLimits

0xe5ea,	// (0x0006c39c) main_radioblah_info_pane_t1

0x843f,	// (0x000661f1) main_radioblah_info_pane_t2_ParamLimits

0x843f,	// (0x000661f1) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0006da3e) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0006da3e) main_radioblah_info_pane_t

0xcc6e,	// (0x0006aa20) main_radioblah_rocker_ctrl_pane_g1

0x84ef,	// (0x000662a1) main_radioblah_rocker_ctrl_pane_g2

0x84f7,	// (0x000662a9) main_radioblah_rocker_ctrl_pane_g3

0x84ff,	// (0x000662b1) main_radioblah_rocker_ctrl_pane_g4

0x8507,	// (0x000662b9) main_radioblah_rocker_ctrl_pane_g5

0x850f,	// (0x000662c1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0006da47) main_radioblah_rocker_ctrl_pane_g

0x7f48,	// (0x00065cfa) main_cset_text2_pane_t1_copy1_ParamLimits

0x63ec,	// (0x0006419e) cam4_image_uncrop_qvga_pane

0x653f,	// (0x000642f1) vid4_image_uncrop_qcif_pane

0x7a3d,	// (0x000657ef) cam6_image_uncrop_qvga_pane_ParamLimits

0x7a3d,	// (0x000657ef) cam6_image_uncrop_qvga_pane

0xddc6,	// (0x0006bb78) vid6_image_uncrop_qcif_pane_ParamLimits

0xddc6,	// (0x0006bb78) vid6_image_uncrop_qcif_pane

0x9c32,	// (0x000679e4) bg_popup_preview_window_pane_cp03

0xe075,	// (0x0006be27) list_cset_text2_pane

0xe07d,	// (0x0006be2f) main_cset6_text2_pane_g1

0xe085,	// (0x0006be37) main_cset6_text2_pane_t1

0x8517,	// (0x000662c9) list_cset_text2_pane_t1_ParamLimits

0x8517,	// (0x000662c9) list_cset_text2_pane_t1

0xa2c9,	// (0x0006807b) main_radioblah_pane_ParamLimits

0x8284,	// (0x00066036) main_mobtv_info_pane_t3_ParamLimits

0x8284,	// (0x00066036) main_mobtv_info_pane_t3

0x83e4,	// (0x00066196) main_radioblah_pane_g1

0x840f,	// (0x000661c1) main_radioblah_info_pane_g1

0x8494,	// (0x00066246) main_radioblah_info_pane_t3_ParamLimits

0x8494,	// (0x00066246) main_radioblah_info_pane_t3

0x307e,	// (0x00060e30) highlight_cell_cale_month_pane_ParamLimits

0x307e,	// (0x00060e30) highlight_cell_cale_month_pane

0x9c32,	// (0x000679e4) main_phob_fisheye_pane

0xcf7a,	// (0x0006ad2c) scroll_pane_cp0031_ParamLimits

0xcf7a,	// (0x0006ad2c) scroll_pane_cp0031

0xded8,	// (0x0006bc8a) wait_bar_pane_cp08_ParamLimits

0x7c4b,	// (0x000659fd) cset_list_set_pane_copy1_ParamLimits

0xe624,	// (0x0006c3d6) highlight_cell_cale_month_pane_g1

0x852e,	// (0x000662e0) highlight_cell_cale_month_pane_t1

0xdb87,	// (0x0006b939) list_gen_pane_cp01

0xd7a6,	// (0x0006b558) scroll_pane_01

0x853c,	// (0x000662ee) list_single_double_fisheye_pane

0x8545,	// (0x000662f7) list_double_fisheye_pane_g1_ParamLimits

0x8545,	// (0x000662f7) list_double_fisheye_pane_g1

0x8551,	// (0x00066303) list_double_fisheye_pane_g2_ParamLimits

0x8551,	// (0x00066303) list_double_fisheye_pane_g2

0x8565,	// (0x00066317) list_double_fisheye_pane_g3_ParamLimits

0x8565,	// (0x00066317) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0006da54) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0006da54) list_double_fisheye_pane_g

0x858e,	// (0x00066340) list_double_fisheye_pane_t1_ParamLimits

0x858e,	// (0x00066340) list_double_fisheye_pane_t1

0x85a9,	// (0x0006635b) list_double_fisheye_pane_t2_ParamLimits

0x85a9,	// (0x0006635b) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0006da5f) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0006da5f) list_double_fisheye_pane_t

0x9c32,	// (0x000679e4) main_call5_pane

0x8349,	// (0x000660fb) sc_swipe_pane_ParamLimits

0x8349,	// (0x000660fb) sc_swipe_pane

0x85d7,	// (0x00066389) call5_image_pane_ParamLimits

0x85d7,	// (0x00066389) call5_image_pane

0x85e9,	// (0x0006639b) call5_swipe_1_pane_ParamLimits

0x85e9,	// (0x0006639b) call5_swipe_1_pane

0x85f5,	// (0x000663a7) call5_swipe_2_pane_ParamLimits

0x85f5,	// (0x000663a7) call5_swipe_2_pane

0x8611,	// (0x000663c3) popup_call5_audio_first_window_ParamLimits

0x8611,	// (0x000663c3) popup_call5_audio_first_window

0xce9e,	// (0x0006ac50) call5_swipe_1_pane_g1_ParamLimits

0xce9e,	// (0x0006ac50) call5_swipe_1_pane_g1

0xe62c,	// (0x0006c3de) call5_swipe_1_pane_g2_ParamLimits

0xe62c,	// (0x0006c3de) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0006da64) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0006da64) call5_swipe_1_pane_g

0xe638,	// (0x0006c3ea) call5_swipe_1_pane_t1_ParamLimits

0xe638,	// (0x0006c3ea) call5_swipe_1_pane_t1

0xce9e,	// (0x0006ac50) call5_swipe_2_pane_g1_ParamLimits

0xce9e,	// (0x0006ac50) call5_swipe_2_pane_g1

0xe64d,	// (0x0006c3ff) call5_swipe_2_pane_g2_ParamLimits

0xe64d,	// (0x0006c3ff) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0006da69) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0006da69) call5_swipe_2_pane_g

0xe659,	// (0x0006c40b) call5_swipe_2_pane_t1_ParamLimits

0xe659,	// (0x0006c40b) call5_swipe_2_pane_t1

0xe66e,	// (0x0006c420) sc_swipe_pane_g1_ParamLimits

0xe66e,	// (0x0006c420) sc_swipe_pane_g1

0xe67b,	// (0x0006c42d) sc_swipe_pane_g2_ParamLimits

0xe67b,	// (0x0006c42d) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0006da6e) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0006da6e) sc_swipe_pane_g

0xe687,	// (0x0006c439) sc_swipe_pane_t1_ParamLimits

0xe687,	// (0x0006c439) sc_swipe_pane_t1

0x9c32,	// (0x000679e4) main_cmail_launcher_pane

0x8621,	// (0x000663d3) aid_size_cell_cmail_l_ParamLimits

0x8621,	// (0x000663d3) aid_size_cell_cmail_l

0x8631,	// (0x000663e3) grid_cmail_l_pane_ParamLimits

0x8631,	// (0x000663e3) grid_cmail_l_pane

0x8641,	// (0x000663f3) cell_cmail_l_pane_ParamLimits

0x8641,	// (0x000663f3) cell_cmail_l_pane

0x8657,	// (0x00066409) cell_cmail_l_pane_g1_ParamLimits

0x8657,	// (0x00066409) cell_cmail_l_pane_g1

0x8663,	// (0x00066415) cell_cmail_l_pane_t1_ParamLimits

0x8663,	// (0x00066415) cell_cmail_l_pane_t1

0xe69c,	// (0x0006c44e) cell_cmail_l_pane_t2_ParamLimits

0xe69c,	// (0x0006c44e) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0006da73) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0006da73) cell_cmail_l_pane_t

0xa2c9,	// (0x0006807b) grid_highlight_pane_cp018_ParamLimits

0xa2c9,	// (0x0006807b) grid_highlight_pane_cp018

0x0c71,	// (0x0005ea23) main2_pane_ParamLimits

0x0c71,	// (0x0005ea23) main2_pane

0xa974,	// (0x00068726) popup_sp_fs_action_menu_bg_pane_g1

0xa97c,	// (0x0006872e) popup_sp_fs_action_menu_bg_pane_g2

0xa984,	// (0x00068736) popup_sp_fs_action_menu_bg_pane_g3

0xa98c,	// (0x0006873e) popup_sp_fs_action_menu_bg_pane_g4

0xa994,	// (0x00068746) popup_sp_fs_action_menu_bg_pane_g5

0xa99c,	// (0x0006874e) popup_sp_fs_action_menu_bg_pane_g6

0xa9a4,	// (0x00068756) popup_sp_fs_action_menu_bg_pane_g7

0xa9ac,	// (0x0006875e) popup_sp_fs_action_menu_bg_pane_g8

0xa9b4,	// (0x00068766) popup_sp_fs_action_menu_bg_pane_g9

0xa9bc,	// (0x0006876e) popup_sp_fs_action_menu_bg_pane_g10

0xa9bc,	// (0x0006876e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0006cf3c) popup_sp_fs_action_menu_bg_pane_g

0xa26f,	// (0x00068021) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x2_t3_g3_g1

0x1ed3,	// (0x0005fc85) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ed3,	// (0x0005fc85) list_medium_line_x2_t3_g3_g2

0xa27b,	// (0x0006802d) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa27b,	// (0x0006802d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006cfea) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006cfea) list_medium_line_x2_t3_g3_g

0x1edf,	// (0x0005fc91) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1edf,	// (0x0005fc91) list_medium_line_x2_t3_g3_t1

0x1ef4,	// (0x0005fca6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1ef4,	// (0x0005fca6) list_medium_line_x2_t3_g3_t2

0x1f08,	// (0x0005fcba) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f08,	// (0x0005fcba) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0006cff1) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0006cff1) list_medium_line_x2_t3_g3_t

0xa26f,	// (0x00068021) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x2_t3_g2_g1

0xa27b,	// (0x0006802d) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa27b,	// (0x0006802d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006cff8) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006cff8) list_medium_line_x2_t3_g2_g

0x1f1d,	// (0x0005fccf) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f1d,	// (0x0005fccf) list_medium_line_x2_t3_g2_t1

0x1f33,	// (0x0005fce5) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f33,	// (0x0005fce5) list_medium_line_x2_t3_g2_t2

0x1f45,	// (0x0005fcf7) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f45,	// (0x0005fcf7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0006cffd) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0006cffd) list_medium_line_x2_t3_g2_t

0xa26f,	// (0x00068021) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x2_t4_g4_g1

0x1f63,	// (0x0005fd15) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f63,	// (0x0005fd15) list_medium_line_x2_t4_g4_g2

0x1ed3,	// (0x0005fc85) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ed3,	// (0x0005fc85) list_medium_line_x2_t4_g4_g3

0x1f6f,	// (0x0005fd21) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f6f,	// (0x0005fd21) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0006d004) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0006d004) list_medium_line_x2_t4_g4_g

0x1f7b,	// (0x0005fd2d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f7b,	// (0x0005fd2d) list_medium_line_x2_t4_g4_t1

0x1f95,	// (0x0005fd47) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1f95,	// (0x0005fd47) list_medium_line_x2_t4_g4_t2

0x1fab,	// (0x0005fd5d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1fab,	// (0x0005fd5d) list_medium_line_x2_t4_g4_t3

0x1fc0,	// (0x0005fd72) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1fc0,	// (0x0005fd72) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0006d00d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0006d00d) list_medium_line_x2_t4_g4_t

0xa26f,	// (0x00068021) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x2_t2_g4_g1

0x1f63,	// (0x0005fd15) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f63,	// (0x0005fd15) list_medium_line_x2_t2_g4_g2

0x1ed3,	// (0x0005fc85) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ed3,	// (0x0005fc85) list_medium_line_x2_t2_g4_g3

0xa27b,	// (0x0006802d) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa27b,	// (0x0006802d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0006d074) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0006d074) list_medium_line_x2_t2_g4_g

0x30a4,	// (0x00060e56) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30a4,	// (0x00060e56) list_medium_line_x2_t2_g4_t1

0x1f08,	// (0x0005fcba) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f08,	// (0x0005fcba) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0006d07d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0006d07d) list_medium_line_x2_t2_g4_t

0xa26f,	// (0x00068021) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x2_t2_g3_g1

0x1ed3,	// (0x0005fc85) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ed3,	// (0x0005fc85) list_medium_line_x2_t2_g3_g2

0xa27b,	// (0x0006802d) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa27b,	// (0x0006802d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006cfea) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006cfea) list_medium_line_x2_t2_g3_g

0x30b9,	// (0x00060e6b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30b9,	// (0x00060e6b) list_medium_line_x2_t2_g3_t1

0x1f08,	// (0x0005fcba) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f08,	// (0x0005fcba) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0006d082) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0006d082) list_medium_line_x2_t2_g3_t

0x324f,	// (0x00061001) main_sp_fs_list_pane_ParamLimits

0x324f,	// (0x00061001) main_sp_fs_list_pane

0x325b,	// (0x0006100d) sp_fs_scroll_pane_ParamLimits

0x325b,	// (0x0006100d) sp_fs_scroll_pane

0x3267,	// (0x00061019) list_medium_line_x2_t3_t1

0x3277,	// (0x00061029) list_medium_line_x2_t3_t2

0x3285,	// (0x00061037) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0006d0cd) list_medium_line_x2_t3_t

0x3293,	// (0x00061045) list_medium_line_x3_t4_t1

0x32a3,	// (0x00061055) list_medium_line_x3_t4_t2

0x32b1,	// (0x00061063) list_medium_line_x3_t4_t3

0x3285,	// (0x00061037) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0006d0d4) list_medium_line_x3_t4_t

0x32bf,	// (0x00061071) list_medium_line_x4_t5_t1

0x32cf,	// (0x00061081) list_medium_line_x4_t5_t2

0x32b1,	// (0x00061063) list_medium_line_x4_t5_t3

0x32dd,	// (0x0006108f) list_medium_line_x4_t5_t4

0x3285,	// (0x00061037) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0006d0dd) list_medium_line_x4_t5_t

0xa26f,	// (0x00068021) list_medium_line_t4_g4_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_t4_g4_g1

0xa287,	// (0x00068039) list_medium_line_t4_g4_g2_ParamLimits

0xa287,	// (0x00068039) list_medium_line_t4_g4_g2

0x32eb,	// (0x0006109d) list_medium_line_t4_g4_g3_ParamLimits

0x32eb,	// (0x0006109d) list_medium_line_t4_g4_g3

0xa27b,	// (0x0006802d) list_medium_line_t4_g4_g4_ParamLimits

0xa27b,	// (0x0006802d) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0006d0e8) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0006d0e8) list_medium_line_t4_g4_g

0x32f7,	// (0x000610a9) list_medium_line_t4_g4_t1_ParamLimits

0x32f7,	// (0x000610a9) list_medium_line_t4_g4_t1

0x330c,	// (0x000610be) list_medium_line_t4_g4_t2_ParamLimits

0x330c,	// (0x000610be) list_medium_line_t4_g4_t2

0x3322,	// (0x000610d4) list_medium_line_t4_g4_t3_ParamLimits

0x3322,	// (0x000610d4) list_medium_line_t4_g4_t3

0x1f08,	// (0x0005fcba) list_medium_line_t4_g4_t4_ParamLimits

0x1f08,	// (0x0005fcba) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0006d0f1) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0006d0f1) list_medium_line_t4_g4_t

0x344b,	// (0x000611fd) chi_dic_find_pane_g1

0x44ac,	// (0x0006225e) main_tport_pane

0x6f3c,	// (0x00064cee) list_medium_line_plain_t1

0x7032,	// (0x00064de4) list_medium_line_t2_g2_g1_ParamLimits

0x7032,	// (0x00064de4) list_medium_line_t2_g2_g1

0x703e,	// (0x00064df0) list_medium_line_t2_g2_g2_ParamLimits

0x703e,	// (0x00064df0) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0006d7b2) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0006d7b2) list_medium_line_t2_g2_g

0x704a,	// (0x00064dfc) list_medium_line_t2_g2_t1_ParamLimits

0x704a,	// (0x00064dfc) list_medium_line_t2_g2_t1

0x7061,	// (0x00064e13) list_medium_line_t2_g2_t2_ParamLimits

0x7061,	// (0x00064e13) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0006d7b7) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0006d7b7) list_medium_line_t2_g2_t

0xa39c,	// (0x0006814e) aid_sp_fs_list_icon_a_sm

0xa3a4,	// (0x00068156) aid_sp_fs_list_icon_d

0xa3ac,	// (0x0006815e) aid_sp_fs_text_primary

0xa3b5,	// (0x00068167) aid_sp_fs_text_secondary

0x76f1,	// (0x000654a3) list_medium_line

0x76f1,	// (0x000654a3) list_medium_line_g2

0x76f1,	// (0x000654a3) list_medium_line_g3

0x76f1,	// (0x000654a3) list_medium_line_plain

0x76f1,	// (0x000654a3) list_medium_line_plain_t2

0x76f1,	// (0x000654a3) list_medium_line_plain_t3

0x76f1,	// (0x000654a3) list_medium_line_right_icon

0x76f1,	// (0x000654a3) list_medium_line_right_iconx2

0x76f1,	// (0x000654a3) list_medium_line_t2

0x76f1,	// (0x000654a3) list_medium_line_t2_g2

0x76f1,	// (0x000654a3) list_medium_line_t2_g3

0x76f1,	// (0x000654a3) list_medium_line_t2_right_icon

0x76f1,	// (0x000654a3) list_medium_line_t2_right_iconx2

0x76f1,	// (0x000654a3) list_medium_line_t3

0x76f1,	// (0x000654a3) list_medium_line_t3_g2

0x76f1,	// (0x000654a3) list_medium_line_t3_g3

0x76f1,	// (0x000654a3) list_medium_line_t3_right_iconx2

0x76fa,	// (0x000654ac) list_medium_line_t4_g4

0x7703,	// (0x000654b5) list_medium_line_x2

0x7703,	// (0x000654b5) list_medium_line_x2_t2_g2

0x7703,	// (0x000654b5) list_medium_line_x2_t2_g3

0x7703,	// (0x000654b5) list_medium_line_x2_t2_g4

0x7703,	// (0x000654b5) list_medium_line_x2_t3

0x7703,	// (0x000654b5) list_medium_line_x2_t3_g2

0x7703,	// (0x000654b5) list_medium_line_x2_t3_g3

0x7703,	// (0x000654b5) list_medium_line_x2_t3_g4

0x7703,	// (0x000654b5) list_medium_line_x2_t4_g2

0x7703,	// (0x000654b5) list_medium_line_x2_t4_g4

0x770c,	// (0x000654be) list_medium_line_x3

0x770c,	// (0x000654be) list_medium_line_x3_t4

0x770c,	// (0x000654be) list_medium_line_x3_t4_g4

0x76fa,	// (0x000654ac) list_medium_line_x4_t4

0x76fa,	// (0x000654ac) list_medium_line_x4_t4_g7

0x76fa,	// (0x000654ac) list_medium_line_x4_t5

0x7715,	// (0x000654c7) list_single_fs_dyc_pane_ParamLimits

0x7715,	// (0x000654c7) list_single_fs_dyc_pane

0xa26f,	// (0x00068021) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x4_t4_g7_g1

0xa3be,	// (0x00068170) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa3be,	// (0x00068170) list_medium_line_x4_t4_g7_g2

0x7ea3,	// (0x00065c55) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ea3,	// (0x00065c55) list_medium_line_x4_t4_g7_g3

0x7eb2,	// (0x00065c64) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7eb2,	// (0x00065c64) list_medium_line_x4_t4_g7_g4

0x7ebe,	// (0x00065c70) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ebe,	// (0x00065c70) list_medium_line_x4_t4_g7_g5

0x7ecd,	// (0x00065c7f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7ecd,	// (0x00065c7f) list_medium_line_x4_t4_g7_g6

0xa3ca,	// (0x0006817c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa3ca,	// (0x0006817c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0006d97b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0006d97b) list_medium_line_x4_t4_g7_g

0x7edc,	// (0x00065c8e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7edc,	// (0x00065c8e) list_medium_line_x4_t4_g7_t1

0x7ef1,	// (0x00065ca3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7ef1,	// (0x00065ca3) list_medium_line_x4_t4_g7_t2

0x7f06,	// (0x00065cb8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7f06,	// (0x00065cb8) list_medium_line_x4_t4_g7_t3

0x7f1b,	// (0x00065ccd) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f1b,	// (0x00065ccd) list_medium_line_x4_t4_g7_t4

0xa3d6,	// (0x00068188) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa3d6,	// (0x00068188) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0006d98a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0006d98a) list_medium_line_x4_t4_g7_t

0x7f2d,	// (0x00065cdf) list_single_dyc_row_pane_ParamLimits

0x7f2d,	// (0x00065cdf) list_single_dyc_row_pane

0x85cb,	// (0x0006637d) call5_gesture_pane_ParamLimits

0x85cb,	// (0x0006637d) call5_gesture_pane

0x8601,	// (0x000663b3) call5_windows_pane_ParamLimits

0x8601,	// (0x000663b3) call5_windows_pane

0x8679,	// (0x0006642b) call5_swipe_1_pane_cp_ParamLimits

0x8679,	// (0x0006642b) call5_swipe_1_pane_cp

0x8685,	// (0x00066437) call5_swipe_2_pane_cp_ParamLimits

0x8685,	// (0x00066437) call5_swipe_2_pane_cp

0xaa7f,	// (0x00068831) call5_image_pane_cp

0x8691,	// (0x00066443) popup_call5_audio_first_window_cp_ParamLimits

0x8691,	// (0x00066443) popup_call5_audio_first_window_cp

0xe66e,	// (0x0006c420) call5_swipe_1_pane_g1_cp_ParamLimits

0xe66e,	// (0x0006c420) call5_swipe_1_pane_g1_cp

0xe6ae,	// (0x0006c460) call5_swipe_1_pane_g2_cp

0xe687,	// (0x0006c439) call5_swipe_1_pane_t1_cp_ParamLimits

0xe687,	// (0x0006c439) call5_swipe_1_pane_t1_cp

0xe66e,	// (0x0006c420) call5_swipe_2_pane_g1_cp_ParamLimits

0xe66e,	// (0x0006c420) call5_swipe_2_pane_g1_cp

0xe6b6,	// (0x0006c468) call5_swipe_2_pane_g2_cp

0xe6be,	// (0x0006c470) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6be,	// (0x0006c470) call5_swipe_2_pane_t1_cp

0xa2c9,	// (0x0006807b) main_sp_fs_email_pane

0xe6d3,	// (0x0006c485) main_sp_fs_listscroll_pane_te

0xa3e8,	// (0x0006819a) popup_sp_fs_action_menu_pane_ParamLimits

0xa3e8,	// (0x0006819a) popup_sp_fs_action_menu_pane

0xcc6e,	// (0x0006aa20) bg_sp_fs_ctrlbar_pane_g1

0xd223,	// (0x0006afd5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd235,	// (0x0006afe7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd22c,	// (0x0006afde) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6e,	// (0x0006aa20) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0006da78) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca4d,	// (0x0006a7ff) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca4d,	// (0x0006a7ff) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6dc,	// (0x0006c48e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6dc,	// (0x0006c48e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e8,	// (0x0006c49a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6e8,	// (0x0006c49a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0006da81) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0006da81) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6f4,	// (0x0006c4a6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6f4,	// (0x0006c4a6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x869f,	// (0x00066451) list_medium_line_t2_right_icon_g1

0x86a7,	// (0x00066459) list_medium_line_t2_right_icon_t1

0x86b7,	// (0x00066469) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0006da86) list_medium_line_t2_right_icon_t

0xc81d,	// (0x0006a5cf) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc81d,	// (0x0006a5cf) bg_sp_fs_ctrlbar_pane

0x871e,	// (0x000664d0) main_sp_fs_ctrlbar_button_pane_cp01

0x8726,	// (0x000664d8) main_sp_fs_ctrlbar_ddmenu_pane

0xd5fb,	// (0x0006b3ad) main_sp_fs_ctrlbar_pane_g1

0xe746,	// (0x0006c4f8) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0006da8b) main_sp_fs_ctrlbar_pane_g

0xe752,	// (0x0006c504) main_sp_fs_ctrlbar_pane_t1

0x8730,	// (0x000664e2) main_sp_fs_ctrlbar_pane

0x874a,	// (0x000664fc) main_sp_fs_listscroll_pane_te_cp01

0x875b,	// (0x0006650d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x875b,	// (0x0006650d) popup_sp_fs_action_menu_pane_cp01

0xa2c9,	// (0x0006807b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa2c9,	// (0x0006807b) bg_sp_fs_highlight_list_pane_cp01

0xa42e,	// (0x000681e0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa42e,	// (0x000681e0) sp_fs_action_menu_list_gene_pane_g1

0xe782,	// (0x0006c534) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe782,	// (0x0006c534) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0006da95) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0006da95) sp_fs_action_menu_list_gene_pane_g

0xa43d,	// (0x000681ef) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa43d,	// (0x000681ef) sp_fs_action_menu_list_gene_pane_t1

0xa455,	// (0x00068207) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa455,	// (0x00068207) sp_fs_action_menu_list_gene_pane

0xe78f,	// (0x0006c541) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe78f,	// (0x0006c541) popup_sp_fs_action_menu_bg_pane

0xa478,	// (0x0006822a) sp_fs_action_menu_list_pane_ParamLimits

0xa478,	// (0x0006822a) sp_fs_action_menu_list_pane

0xe79d,	// (0x0006c54f) sp_fs_scroll_pane_cp01_ParamLimits

0xe79d,	// (0x0006c54f) sp_fs_scroll_pane_cp01

0x8785,	// (0x00066537) list_medium_line_plain_t2_t1

0x8795,	// (0x00066547) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0006da9a) list_medium_line_plain_t2_t

0x87a3,	// (0x00066555) list_medium_line_plain_t3_t1

0x87b3,	// (0x00066565) list_medium_line_plain_t3_t2

0x87c1,	// (0x00066573) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0006da9f) list_medium_line_plain_t3_t

0xa26f,	// (0x00068021) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x2_t2_g2_g1

0xa27b,	// (0x0006802d) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa27b,	// (0x0006802d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006cff8) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006cff8) list_medium_line_x2_t2_g2_g

0x32f7,	// (0x000610a9) list_medium_line_x2_t2_g2_t1_ParamLimits

0x32f7,	// (0x000610a9) list_medium_line_x2_t2_g2_t1

0x1f08,	// (0x0005fcba) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f08,	// (0x0005fcba) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0006daa6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0006daa6) list_medium_line_x2_t2_g2_t

0xa26f,	// (0x00068021) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x2_t4_g2_g1

0xa49c,	// (0x0006824e) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa49c,	// (0x0006824e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0006daab) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0006daab) list_medium_line_x2_t4_g2_g

0x87cf,	// (0x00066581) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87cf,	// (0x00066581) list_medium_line_x2_t4_g2_t1

0x87e9,	// (0x0006659b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87e9,	// (0x0006659b) list_medium_line_x2_t4_g2_t2

0x87ff,	// (0x000665b1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87ff,	// (0x000665b1) list_medium_line_x2_t4_g2_t3

0x1f08,	// (0x0005fcba) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f08,	// (0x0005fcba) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0006dab0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0006dab0) list_medium_line_x2_t4_g2_t

0x8814,	// (0x000665c6) list_medium_line_t3_right_iconx2_g1

0x869f,	// (0x00066451) list_medium_line_t3_right_iconx2_g2

0x881c,	// (0x000665ce) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0006dab9) list_medium_line_t3_right_iconx2_g

0x8826,	// (0x000665d8) list_medium_line_t3_right_iconx2_t1

0x8836,	// (0x000665e8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0006dac0) list_medium_line_t3_right_iconx2_t

0xa26f,	// (0x00068021) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x3_t4_g4_g1

0x1ed3,	// (0x0005fc85) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ed3,	// (0x0005fc85) list_medium_line_x3_t4_g4_g2

0xa287,	// (0x00068039) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa287,	// (0x00068039) list_medium_line_x3_t4_g4_g3

0x8844,	// (0x000665f6) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8844,	// (0x000665f6) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0006dac5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0006dac5) list_medium_line_x3_t4_g4_g

0x8850,	// (0x00066602) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8850,	// (0x00066602) list_medium_line_x3_t4_g4_t1

0x8867,	// (0x00066619) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8867,	// (0x00066619) list_medium_line_x3_t4_g4_t2

0x887c,	// (0x0006662e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x887c,	// (0x0006662e) list_medium_line_x3_t4_g4_t3

0x8891,	// (0x00066643) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8891,	// (0x00066643) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0006dace) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0006dace) list_medium_line_x3_t4_g4_t

0x88ae,	// (0x00066660) list_single_dyc_row_text_pane_t1_ParamLimits

0x88ae,	// (0x00066660) list_single_dyc_row_text_pane_t1

0x88eb,	// (0x0006669d) list_single_dyc_row_text_pane_t2_ParamLimits

0x88eb,	// (0x0006669d) list_single_dyc_row_text_pane_t2

0xa4ae,	// (0x00068260) list_single_dyc_row_text_pane_t3_ParamLimits

0xa4ae,	// (0x00068260) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0006dad7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0006dad7) list_single_dyc_row_text_pane_t

0xa4d2,	// (0x00068284) list_single_dyc_row_pane_g1_ParamLimits

0xa4d2,	// (0x00068284) list_single_dyc_row_pane_g1

0xa4de,	// (0x00068290) list_single_dyc_row_pane_g2_ParamLimits

0xa4de,	// (0x00068290) list_single_dyc_row_pane_g2

0xa4ea,	// (0x0006829c) list_single_dyc_row_pane_g3_ParamLimits

0xa4ea,	// (0x0006829c) list_single_dyc_row_pane_g3

0xa4f6,	// (0x000682a8) list_single_dyc_row_pane_g4_ParamLimits

0xa4f6,	// (0x000682a8) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0006dae4) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0006dae4) list_single_dyc_row_pane_g

0xa502,	// (0x000682b4) list_single_dyc_row_text_pane_ParamLimits

0xa502,	// (0x000682b4) list_single_dyc_row_text_pane

0x9c32,	// (0x000679e4) bg_sp_fs_scroll_pane

0xe7d7,	// (0x0006c589) thumb_sp_fs_scroll_pane

0x7032,	// (0x00064de4) list_medium_line_g1_ParamLimits

0x7032,	// (0x00064de4) list_medium_line_g1

0x8a14,	// (0x000667c6) list_medium_line_t1_ParamLimits

0x8a14,	// (0x000667c6) list_medium_line_t1

0xa26f,	// (0x00068021) list_medium_line_x2_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x2_g1

0x1ed3,	// (0x0005fc85) list_medium_line_x2_g2_ParamLimits

0x1ed3,	// (0x0005fc85) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0006daed) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0006daed) list_medium_line_x2_g

0xa521,	// (0x000682d3) list_medium_line_x2_t1_ParamLimits

0xa521,	// (0x000682d3) list_medium_line_x2_t1

0xa26f,	// (0x00068021) list_medium_line_x3_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x3_g1

0x1ed3,	// (0x0005fc85) list_medium_line_x3_g2_ParamLimits

0x1ed3,	// (0x0005fc85) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0006daed) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0006daed) list_medium_line_x3_g

0xa521,	// (0x000682d3) list_medium_line_x3_t1_ParamLimits

0xa521,	// (0x000682d3) list_medium_line_x3_t1

0xe7e0,	// (0x0006c592) thumb_sp_fs_scroll_pane_g1

0xe7e9,	// (0x0006c59b) thumb_sp_fs_scroll_pane_g2

0xe7f2,	// (0x0006c5a4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0006daf2) thumb_sp_fs_scroll_pane_g

0xe7e0,	// (0x0006c592) bg_sp_fs_scroll_pane_g1

0xe7e9,	// (0x0006c59b) bg_sp_fs_scroll_pane_g2

0xe7f2,	// (0x0006c5a4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0006daf2) bg_sp_fs_scroll_pane_g

0xa26f,	// (0x00068021) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa26f,	// (0x00068021) list_medium_line_x2_t3_g4_g1

0x1f63,	// (0x0005fd15) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f63,	// (0x0005fd15) list_medium_line_x2_t3_g4_g2

0x1ed3,	// (0x0005fc85) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ed3,	// (0x0005fc85) list_medium_line_x2_t3_g4_g3

0xa27b,	// (0x0006802d) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa27b,	// (0x0006802d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0006d074) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0006d074) list_medium_line_x2_t3_g4_g

0x8a29,	// (0x000667db) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a29,	// (0x000667db) list_medium_line_x2_t3_g4_t1

0x8a3f,	// (0x000667f1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a3f,	// (0x000667f1) list_medium_line_x2_t3_g4_t2

0x1f08,	// (0x0005fcba) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f08,	// (0x0005fcba) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0006daf9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0006daf9) list_medium_line_x2_t3_g4_t

0x7032,	// (0x00064de4) list_medium_line_g2_g1_ParamLimits

0x7032,	// (0x00064de4) list_medium_line_g2_g1

0x703e,	// (0x00064df0) list_medium_line_g2_g2_ParamLimits

0x703e,	// (0x00064df0) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0006d7b2) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0006d7b2) list_medium_line_g2_g

0x8a58,	// (0x0006680a) list_medium_line_g2_t1_ParamLimits

0x8a58,	// (0x0006680a) list_medium_line_g2_t1

0x7032,	// (0x00064de4) list_medium_line_t3_g2_g1_ParamLimits

0x7032,	// (0x00064de4) list_medium_line_t3_g2_g1

0x703e,	// (0x00064df0) list_medium_line_t3_g2_g2_ParamLimits

0x703e,	// (0x00064df0) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0006d7b2) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0006d7b2) list_medium_line_t3_g2_g

0x8a6d,	// (0x0006681f) list_medium_line_t3_g2_t1_ParamLimits

0x8a6d,	// (0x0006681f) list_medium_line_t3_g2_t1

0x8a87,	// (0x00066839) list_medium_line_t3_g2_t2_ParamLimits

0x8a87,	// (0x00066839) list_medium_line_t3_g2_t2

0x8a9d,	// (0x0006684f) list_medium_line_t3_g2_t3_ParamLimits

0x8a9d,	// (0x0006684f) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0006db00) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0006db00) list_medium_line_t3_g2_t

0x869f,	// (0x00066451) list_medium_line_right_icon_g1

0x8ab4,	// (0x00066866) list_medium_line_right_icon_t1

0x7032,	// (0x00064de4) list_medium_line_t2_g1_ParamLimits

0x7032,	// (0x00064de4) list_medium_line_t2_g1

0x8ac2,	// (0x00066874) list_medium_line_t2_t1_ParamLimits

0x8ac2,	// (0x00066874) list_medium_line_t2_t1

0x8adc,	// (0x0006688e) list_medium_line_t2_t2_ParamLimits

0x8adc,	// (0x0006688e) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0006db07) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0006db07) list_medium_line_t2_t

0x7032,	// (0x00064de4) list_medium_line_t3_g1_ParamLimits

0x7032,	// (0x00064de4) list_medium_line_t3_g1

0x8af1,	// (0x000668a3) list_medium_line_t3_t1_ParamLimits

0x8af1,	// (0x000668a3) list_medium_line_t3_t1

0x8b08,	// (0x000668ba) list_medium_line_t3_t2_ParamLimits

0x8b08,	// (0x000668ba) list_medium_line_t3_t2

0x8b1d,	// (0x000668cf) list_medium_line_t3_t3_ParamLimits

0x8b1d,	// (0x000668cf) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0006db0c) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0006db0c) list_medium_line_t3_t

0x7032,	// (0x00064de4) list_medium_line_g3_g1_ParamLimits

0x7032,	// (0x00064de4) list_medium_line_g3_g1

0x8b2f,	// (0x000668e1) list_medium_line_g3_g2_ParamLimits

0x8b2f,	// (0x000668e1) list_medium_line_g3_g2

0x703e,	// (0x00064df0) list_medium_line_g3_g3_ParamLimits

0x703e,	// (0x00064df0) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0006db13) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0006db13) list_medium_line_g3_g

0x8b3b,	// (0x000668ed) list_medium_line_g3_t1_ParamLimits

0x8b3b,	// (0x000668ed) list_medium_line_g3_t1

0x7032,	// (0x00064de4) list_medium_line_t2_g3_g1_ParamLimits

0x7032,	// (0x00064de4) list_medium_line_t2_g3_g1

0x8b2f,	// (0x000668e1) list_medium_line_t2_g3_g2_ParamLimits

0x8b2f,	// (0x000668e1) list_medium_line_t2_g3_g2

0x703e,	// (0x00064df0) list_medium_line_t2_g3_g3_ParamLimits

0x703e,	// (0x00064df0) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0006db13) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0006db13) list_medium_line_t2_g3_g

0x8b50,	// (0x00066902) list_medium_line_t2_g3_t1_ParamLimits

0x8b50,	// (0x00066902) list_medium_line_t2_g3_t1

0x8b67,	// (0x00066919) list_medium_line_t2_g3_t2_ParamLimits

0x8b67,	// (0x00066919) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0006db1a) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0006db1a) list_medium_line_t2_g3_t

0x7032,	// (0x00064de4) list_medium_line_t3_g3_g1_ParamLimits

0x7032,	// (0x00064de4) list_medium_line_t3_g3_g1

0x8b2f,	// (0x000668e1) list_medium_line_t3_g3_g2_ParamLimits

0x8b2f,	// (0x000668e1) list_medium_line_t3_g3_g2

0x703e,	// (0x00064df0) list_medium_line_t3_g3_g3_ParamLimits

0x703e,	// (0x00064df0) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0006db13) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0006db13) list_medium_line_t3_g3_g

0x8b7c,	// (0x0006692e) list_medium_line_t3_g3_t1_ParamLimits

0x8b7c,	// (0x0006692e) list_medium_line_t3_g3_t1

0x8b90,	// (0x00066942) list_medium_line_t3_g3_t2_ParamLimits

0x8b90,	// (0x00066942) list_medium_line_t3_g3_t2

0x8ba2,	// (0x00066954) list_medium_line_t3_g3_t3_ParamLimits

0x8ba2,	// (0x00066954) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0006db1f) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0006db1f) list_medium_line_t3_g3_t

0x8814,	// (0x000665c6) list_medium_line_right_iconx2_g1

0x869f,	// (0x00066451) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0006db26) list_medium_line_right_iconx2_g

0x8bb6,	// (0x00066968) list_medium_line_right_iconx2_t1

0x8814,	// (0x000665c6) list_medium_line_t2_right_iconx2_g1

0x869f,	// (0x00066451) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0006db26) list_medium_line_t2_right_iconx2_g

0x8bc4,	// (0x00066976) list_medium_line_t2_right_iconx2_t1

0x8bd4,	// (0x00066986) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0006db2b) list_medium_line_t2_right_iconx2_t

0x8be2,	// (0x00066994) list_medium_line_x4_t4_t1

0x8bf0,	// (0x000669a2) list_medium_line_x4_t4_t2

0x8c00,	// (0x000669b2) list_medium_line_x4_t4_t3

0x8c10,	// (0x000669c2) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0006db30) list_medium_line_x4_t4_t

0x8c4a,	// (0x000669fc) tport_appsw_pane_ParamLimits

0x8c4a,	// (0x000669fc) tport_appsw_pane

0x8c58,	// (0x00066a0a) tport_contact_pane_ParamLimits

0x8c58,	// (0x00066a0a) tport_contact_pane

0x8c68,	// (0x00066a1a) tport_listscroll_pane_ParamLimits

0x8c68,	// (0x00066a1a) tport_listscroll_pane

0x8c78,	// (0x00066a2a) cell_tport_appsw_pane_ParamLimits

0x8c78,	// (0x00066a2a) cell_tport_appsw_pane

0xcf03,	// (0x0006acb5) tport_appsw_pane_g1_ParamLimits

0xcf03,	// (0x0006acb5) tport_appsw_pane_g1

0xe7fb,	// (0x0006c5ad) tport_contact_pane_g1

0xe804,	// (0x0006c5b6) tport_contact_pane_t1

0xe812,	// (0x0006c5c4) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0006db39) tport_contact_pane_t

0xe820,	// (0x0006c5d2) list_tport_pane

0xe829,	// (0x0006c5db) scroll_pane_cp_030

0x8cad,	// (0x00066a5f) cell_tport_appsw_pane_g1

0x8cbd,	// (0x00066a6f) cell_tport_appsw_pane_t1

0x8ccb,	// (0x00066a7d) grid_highlight_pane_cp019

0x8cd3,	// (0x00066a85) list_tport_double_graphic_pane_ParamLimits

0x8cd3,	// (0x00066a85) list_tport_double_graphic_pane

0xa2c9,	// (0x0006807b) list_highlight_pane_cp023_ParamLimits

0xa2c9,	// (0x0006807b) list_highlight_pane_cp023

0x8ce0,	// (0x00066a92) list_tport_double_graphic_pane_g1_ParamLimits

0x8ce0,	// (0x00066a92) list_tport_double_graphic_pane_g1

0x8ced,	// (0x00066a9f) list_tport_double_graphic_pane_t1_ParamLimits

0x8ced,	// (0x00066a9f) list_tport_double_graphic_pane_t1

0x8d02,	// (0x00066ab4) list_tport_double_graphic_pane_t2_ParamLimits

0x8d02,	// (0x00066ab4) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0006db45) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0006db45) list_tport_double_graphic_pane_t

0x9c32,	// (0x000679e4) main_cale_note_pane

0x67c6,	// (0x00064578) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67c6,	// (0x00064578) cell_vitu2_function_top_wide_pane_cp01

0x8298,	// (0x0006604a) wait_bar_pane_cp05_ParamLimits

0xa2c9,	// (0x0006807b) listscroll_cmail_pane

0xe83a,	// (0x0006c5ec) list_cmail_pane

0x8d1e,	// (0x00066ad0) list_cmail_body_pane

0x8d37,	// (0x00066ae9) list_single_cmail_header_caption_pane

0x8d58,	// (0x00066b0a) list_single_cmail_header_detail_pane_ParamLimits

0x8d58,	// (0x00066b0a) list_single_cmail_header_detail_pane

0x8d89,	// (0x00066b3b) list_single_cmail_header_caption_pane_t1

0x8d99,	// (0x00066b4b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d99,	// (0x00066b4b) list_single_cmail_header_detail_pane_g1

0xa537,	// (0x000682e9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa537,	// (0x000682e9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0006db4a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0006db4a) list_single_cmail_header_detail_pane_g

0xa543,	// (0x000682f5) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa543,	// (0x000682f5) list_single_cmail_header_detail_pane_t1

0xa5af,	// (0x00068361) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa5af,	// (0x00068361) list_single_cmail_header_editor_pane_bg

0xe2f4,	// (0x0006c0a6) list_cmail_body_pane_g1

0xe867,	// (0x0006c619) list_cmail_body_pane_t1

0xd688,	// (0x0006b43a) list_single_cmail_header_editor_pane_bg_g1

0xacdc,	// (0x00068a8e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd698,	// (0x0006b44a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd690,	// (0x0006b442) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8b2,	// (0x0006b664) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6b8,	// (0x0006b46a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6a8,	// (0x0006b45a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6b0,	// (0x0006b462) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacbc,	// (0x00068a6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8db1,	// (0x00066b63) calenote_gesture_pane_ParamLimits

0x8db1,	// (0x00066b63) calenote_gesture_pane

0x8dcb,	// (0x00066b7d) calenote_window_pane_ParamLimits

0x8dcb,	// (0x00066b7d) calenote_window_pane

0xe875,	// (0x0006c627) popup_note_window_cp01

0x8de3,	// (0x00066b95) calenote_swipe_1_pane_ParamLimits

0x8de3,	// (0x00066b95) calenote_swipe_1_pane

0x8685,	// (0x00066437) calenote_swipe_2_pane_ParamLimits

0x8685,	// (0x00066437) calenote_swipe_2_pane

0xe66e,	// (0x0006c420) calenote_swipe_1_pane_g1_ParamLimits

0xe66e,	// (0x0006c420) calenote_swipe_1_pane_g1

0xe67b,	// (0x0006c42d) calenote_swipe_1_pane_g2_ParamLimits

0xe67b,	// (0x0006c42d) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0006da6e) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0006da6e) calenote_swipe_1_pane_g

0xe887,	// (0x0006c639) calenote_swipe_1_pane_t1_ParamLimits

0xe887,	// (0x0006c639) calenote_swipe_1_pane_t1

0xe66e,	// (0x0006c420) calenote_swipe_2_pane_g1_ParamLimits

0xe66e,	// (0x0006c420) calenote_swipe_2_pane_g1

0xe8a6,	// (0x0006c658) calenote_swipe_2_pane_g2_ParamLimits

0xe8a6,	// (0x0006c658) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0006db56) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0006db56) calenote_swipe_2_pane_g

0xe8b2,	// (0x0006c664) calenote_swipe_2_pane_t1_ParamLimits

0xe8b2,	// (0x0006c664) calenote_swipe_2_pane_t1

0x9c32,	// (0x000679e4) main_mup_navstr_pane

0x54c5,	// (0x00063277) main_mup3_pane_t7_ParamLimits

0x54c5,	// (0x00063277) main_mup3_pane_t7

0x5ec8,	// (0x00063c7a) main_mp4_pane_g6_ParamLimits

0x5ec8,	// (0x00063c7a) main_mp4_pane_g6

0x6246,	// (0x00063ff8) main_image3_pane_t4_ParamLimits

0x6246,	// (0x00063ff8) main_image3_pane_t4

0x8df6,	// (0x00066ba8) popup_navstr_preview_pane_ParamLimits

0x8df6,	// (0x00066ba8) popup_navstr_preview_pane

0x8e02,	// (0x00066bb4) scroll_navstr_pane_ParamLimits

0x8e02,	// (0x00066bb4) scroll_navstr_pane

0x9c32,	// (0x000679e4) bg_popup_preview_window_pane_cp04

0xe8d9,	// (0x0006c68b) popup_navstr_preview_pane_t1

0x8e0e,	// (0x00066bc0) scroll_navstr_pane_g1_ParamLimits

0x8e0e,	// (0x00066bc0) scroll_navstr_pane_g1

0x8e1b,	// (0x00066bcd) scroll_navstr_pane_t1_ParamLimits

0x8e1b,	// (0x00066bcd) scroll_navstr_pane_t1

0xe87e,	// (0x0006c630) bg_button_pane_cp014

0xe87e,	// (0x0006c630) bg_button_pane_cp030

0x8571,	// (0x00066323) list_double_fisheye_pane_g4_ParamLimits

0x8571,	// (0x00066323) list_double_fisheye_pane_g4

0x857d,	// (0x0006632f) list_double_fisheye_pane_g5_ParamLimits

0x857d,	// (0x0006632f) list_double_fisheye_pane_g5

0xe842,	// (0x0006c5f4) sp_fs_scroll_pane_cp03

0xd5fb,	// (0x0006b3ad) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe746,	// (0x0006c4f8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0006da8b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe752,	// (0x0006c504) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8d14,	// (0x00066ac6) sp_fs_scroll_pane_cp02

0xa9df,	// (0x00068791) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9df,	// (0x00068791) popup_sp_fs_calendar_preview_list_single_pane

0x9c32,	// (0x000679e4) main_cam6_pano_pane

0xa2c9,	// (0x0006807b) main_mup3_pane_ParamLimits

0x9c32,	// (0x000679e4) main_phacti_pane

0x816b,	// (0x00065f1d) bg_button_pane_cp11

0x8183,	// (0x00065f35) main_mobtv_info_pane_g2_ParamLimits

0x8183,	// (0x00065f35) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0006d9eb) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0006d9eb) main_mobtv_info_pane_g

0x8335,	// (0x000660e7) sc_clock_pane_t5_ParamLimits

0x8335,	// (0x000660e7) sc_clock_pane_t5

0x83e4,	// (0x00066196) main_radioblah_pane_g1_ParamLimits

0xe5ba,	// (0x0006c36c) main_radioblah_pane_t3_ParamLimits

0xe5ba,	// (0x0006c36c) main_radioblah_pane_t3

0xe5d2,	// (0x0006c384) main_radioblah_pane_t4_ParamLimits

0xe5d2,	// (0x0006c384) main_radioblah_pane_t4

0x8402,	// (0x000661b4) main_radioblah_text_pane_ParamLimits

0x8402,	// (0x000661b4) main_radioblah_text_pane

0x840f,	// (0x000661c1) main_radioblah_info_pane_g1_ParamLimits

0x84a8,	// (0x0006625a) main_radioblah_info_pane_t4_ParamLimits

0x84a8,	// (0x0006625a) main_radioblah_info_pane_t4

0xa2c9,	// (0x0006807b) main_sp_fs_calendar_pane

0x8e2d,	// (0x00066bdf) main_phacti_pane_g1

0x8e35,	// (0x00066be7) phacti_note_pane_ParamLimits

0x8e35,	// (0x00066be7) phacti_note_pane

0xe8f0,	// (0x0006c6a2) phacti_term_pane_ParamLimits

0xe8f0,	// (0x0006c6a2) phacti_term_pane

0xe905,	// (0x0006c6b7) phacti_note_pane_t1_ParamLimits

0xe905,	// (0x0006c6b7) phacti_note_pane_t1

0xa5c6,	// (0x00068378) phacti_term_pane_g1

0xa5ce,	// (0x00068380) phacti_term_pane_t1_ParamLimits

0xa5ce,	// (0x00068380) phacti_term_pane_t1

0xe91c,	// (0x0006c6ce) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe924,	// (0x0006c6d6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0006db60) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92c,	// (0x0006c6de) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92c,	// (0x0006c6de) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe942,	// (0x0006c6f4) aid_popup_sp_fs_bg_corner_pane

0xcc6e,	// (0x0006aa20) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c32,	// (0x000679e4) popup_sp_fs_calendar_preview_bg_pane

0xe94a,	// (0x0006c6fc) popup_sp_fs_calendar_preview_list_pane

0xc81d,	// (0x0006a5cf) bg_main_sp_fs_cale_pane_ParamLimits

0xc81d,	// (0x0006a5cf) bg_main_sp_fs_cale_pane

0xa601,	// (0x000683b3) listscroll_cale_mrui_pane_ParamLimits

0xa601,	// (0x000683b3) listscroll_cale_mrui_pane

0xa616,	// (0x000683c8) listscroll_sp_fs_schedule_track_pane

0xa61f,	// (0x000683d1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa61f,	// (0x000683d1) main_sp_fs_ctrlbar_pane_cp01

0xe952,	// (0x0006c704) main_sp_fs_ribbon_pane

0xa632,	// (0x000683e4) popup_sp_fs_cale_preview_window

0x8e94,	// (0x00066c46) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e94,	// (0x00066c46) list_single_sp_fs_schedule_track_pane

0x0dfa,	// (0x0005ebac) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0dfa,	// (0x0005ebac) bg_sp_fs_highlight_list_pane_cp03

0x8ea9,	// (0x00066c5b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ea9,	// (0x00066c5b) list_single_sp_fs_schedule_track_pane_g1

0x8eb5,	// (0x00066c67) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8eb5,	// (0x00066c67) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0006db65) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0006db65) list_single_sp_fs_schedule_track_pane_g

0x8ec1,	// (0x00066c73) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ec1,	// (0x00066c73) list_single_sp_fs_schedule_track_pane_t1

0x8edf,	// (0x00066c91) sp_fs_schedule_track_pane_ParamLimits

0x8edf,	// (0x00066c91) sp_fs_schedule_track_pane

0xe95a,	// (0x0006c70c) sp_fs_schedule_track_pane_g1

0xe962,	// (0x0006c714) sp_fs_schedule_track_pane_g2

0xe96a,	// (0x0006c71c) sp_fs_schedule_track_pane_g3

0xe972,	// (0x0006c724) sp_fs_schedule_track_pane_g4

0xe97a,	// (0x0006c72c) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0006db6a) sp_fs_schedule_track_pane_g

0xd688,	// (0x0006b43a) bg_sp_fs_schedule_viewer_highlight_g1

0xacdc,	// (0x00068a8e) bg_sp_fs_schedule_viewer_highlight_g2

0xd690,	// (0x0006b442) bg_sp_fs_schedule_viewer_highlight_g3

0xd698,	// (0x0006b44a) bg_sp_fs_schedule_viewer_highlight_g4

0xd8b2,	// (0x0006b664) bg_sp_fs_schedule_viewer_highlight_g5

0xd6a8,	// (0x0006b45a) bg_sp_fs_schedule_viewer_highlight_g6

0xd6b0,	// (0x0006b462) bg_sp_fs_schedule_viewer_highlight_g7

0xd6b8,	// (0x0006b46a) bg_sp_fs_schedule_viewer_highlight_g8

0xacbc,	// (0x00068a6e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0006db75) bg_sp_fs_schedule_viewer_highlight_g

0x9c32,	// (0x000679e4) bg_main_sp_fs_ribbon_pane

0x8ef1,	// (0x00066ca3) main_sp_fs_ribbon_pane_g1

0xe982,	// (0x0006c734) main_sp_fs_ribbon_pane_t1

0x8efa,	// (0x00066cac) main_sp_fs_ribbon_pane_t2

0xe991,	// (0x0006c743) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0006db88) main_sp_fs_ribbon_pane_t

0xe9a0,	// (0x0006c752) main_sp_fs_ribbon_scheduler_pane

0xe9a8,	// (0x0006c75a) bg_main_sp_fs_ribbon_pane_g1

0xe9b1,	// (0x0006c763) bg_main_sp_fs_ribbon_pane_g2

0xe9ba,	// (0x0006c76c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0006db8f) bg_main_sp_fs_ribbon_pane_g

0xe9c2,	// (0x0006c774) main_sp_fs_ribbon_scheduler_pane_g1

0xe9cb,	// (0x0006c77d) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d4,	// (0x0006c786) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0006db96) main_sp_fs_ribbon_scheduler_pane_g

0xe9dd,	// (0x0006c78f) list_cale_mrui_pane

0x8f09,	// (0x00066cbb) sp_fs_scroll_pane_cp07_ParamLimits

0x8f09,	// (0x00066cbb) sp_fs_scroll_pane_cp07

0x8f25,	// (0x00066cd7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f25,	// (0x00066cd7) bg_sp_fs_schedule_viewer_highlight

0xe9ea,	// (0x0006c79c) list_single_sp_fs_schedule_track_pane_cp01

0xe9f2,	// (0x0006c7a4) list_sp_fs_schedule_track_pane

0xe9fa,	// (0x0006c7ac) sp_fs_scroll_pane_cp06_ParamLimits

0xe9fa,	// (0x0006c7ac) sp_fs_scroll_pane_cp06

0xcc6e,	// (0x0006aa20) bgmain_sp_fs_calendar_pane_g1

0x8f32,	// (0x00066ce4) list_single_cale_mrui_pane_ParamLimits

0x8f32,	// (0x00066ce4) list_single_cale_mrui_pane

0xa644,	// (0x000683f6) list_single_cale_mrui_row_pane_ParamLimits

0xa644,	// (0x000683f6) list_single_cale_mrui_row_pane

0xa65a,	// (0x0006840c) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa65a,	// (0x0006840c) list_single_cale_mrui_row_pane_g1

0xa692,	// (0x00068444) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa692,	// (0x00068444) list_single_cale_mrui_row_pane_t1

0x8f47,	// (0x00066cf9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f47,	// (0x00066cf9) list_single_cale_mrui_row_pane_t2

0xa6a4,	// (0x00068456) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa6a4,	// (0x00068456) list_single_cale_mrui_row_pane_t3

0xa6d3,	// (0x00068485) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa6d3,	// (0x00068485) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0006dba4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0006dba4) list_single_cale_mrui_row_pane_t

0x8fad,	// (0x00066d5f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fad,	// (0x00066d5f) list_single_cmail_header_editor_pane_bg_cp01

0x8fd1,	// (0x00066d83) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fd1,	// (0x00066d83) list_single_cmail_header_editor_pane_bg_cp02

0x8fed,	// (0x00066d9f) main_radioblah_text_pane_t1_ParamLimits

0x8fed,	// (0x00066d9f) main_radioblah_text_pane_t1

0xea19,	// (0x0006c7cb) cam6_indi_pane_cp01

0xea21,	// (0x0006c7d3) cam6_mode_pane_cp01

0xea29,	// (0x0006c7db) cam6_pano_pane

0xea32,	// (0x0006c7e4) cam6_zoom_pane_cp01

0xea3c,	// (0x0006c7ee) cam6_pano_image_pane

0xea45,	// (0x0006c7f7) cam6_pano_pane_g1

0xe2f4,	// (0x0006c0a6) cam6_pano_pane_g2

0xea4e,	// (0x0006c800) cam6_pano_pane_g3

0xea57,	// (0x0006c809) cam6_pano_pane_g4

0xd210,	// (0x0006afc2) cam6_pano_pane_g5

0xea60,	// (0x0006c812) cam6_pano_pane_g6

0xea68,	// (0x0006c81a) cam6_pano_pane_g7

0xea70,	// (0x0006c822) cam6_pano_pane_g8

0xea79,	// (0x0006c82b) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0006dbad) cam6_pano_pane_g

0x9c32,	// (0x000679e4) main_browser_tag_pane

0xe8d1,	// (0x0006c683) grid_navstr_albumart_pane

0xea84,	// (0x0006c836) cell_navstr_albumart_pane_ParamLimits

0xea84,	// (0x0006c836) cell_navstr_albumart_pane

0xeaa3,	// (0x0006c855) cell_navstr_albumart_pane_g1

0xc62a,	// (0x0006a3dc) cell_navstr_albumart_pane_g2

0xc63a,	// (0x0006a3ec) cell_navstr_albumart_pane_g3

0xc632,	// (0x0006a3e4) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0006dbc0) cell_navstr_albumart_pane_g

0x9007,	// (0x00066db9) bt_list_pane_ParamLimits

0x9007,	// (0x00066db9) bt_list_pane

0x9020,	// (0x00066dd2) bt_list_pane_t1

0x902f,	// (0x00066de1) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0006dbc9) bt_list_pane_t

0x9c32,	// (0x000679e4) main_cale_prevew_pane

0x903e,	// (0x00066df0) popup_cale_preview_window_ParamLimits

0x903e,	// (0x00066df0) popup_cale_preview_window

0xa2c9,	// (0x0006807b) bg_popup_preview_window_pane_cp05_ParamLimits

0xa2c9,	// (0x0006807b) bg_popup_preview_window_pane_cp05

0xeaab,	// (0x0006c85d) list_cale_preview_pane_ParamLimits

0xeaab,	// (0x0006c85d) list_cale_preview_pane

0x9059,	// (0x00066e0b) list_double_cale_preview_pane_ParamLimits

0x9059,	// (0x00066e0b) list_double_cale_preview_pane

0x906d,	// (0x00066e1f) list_single_cale_preview_pane_ParamLimits

0x906d,	// (0x00066e1f) list_single_cale_preview_pane

0x9085,	// (0x00066e37) list_single_cale_preview_pane_g1

0x908d,	// (0x00066e3f) list_single_cale_preview_pane_t1_ParamLimits

0x908d,	// (0x00066e3f) list_single_cale_preview_pane_t1

0x90a2,	// (0x00066e54) list_double_cale_preview_pane_g1

0x90aa,	// (0x00066e5c) list_double_cale_preview_pane_t1_ParamLimits

0x90aa,	// (0x00066e5c) list_double_cale_preview_pane_t1

0x90bf,	// (0x00066e71) list_double_cale_preview_pane_t2_ParamLimits

0x90bf,	// (0x00066e71) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0006dbce) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0006dbce) list_double_cale_preview_pane_t

0x9c32,	// (0x000679e4) main_ezdial_pane

0xa2c9,	// (0x0006807b) main_sp_fs_email_pane_ParamLimits

0x86c5,	// (0x00066477) cmail_ddmenu_btn01_pane_ParamLimits

0x86c5,	// (0x00066477) cmail_ddmenu_btn01_pane

0x86e2,	// (0x00066494) cmail_ddmenu_btn02_pane_ParamLimits

0x86e2,	// (0x00066494) cmail_ddmenu_btn02_pane

0x8700,	// (0x000664b2) cmail_ddmenu_btn03_pane_ParamLimits

0x8700,	// (0x000664b2) cmail_ddmenu_btn03_pane

0x8730,	// (0x000664e2) main_sp_fs_ctrlbar_pane_ParamLimits

0x874a,	// (0x000664fc) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d1e,	// (0x00066ad0) list_cmail_body_pane_ParamLimits

0xe851,	// (0x0006c603) bg_button_pane_cp12

0xe85a,	// (0x0006c60c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe85a,	// (0x0006c60c) list_single_cmail_header_detail_pane_g3

0xa58b,	// (0x0006833d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa58b,	// (0x0006833d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0006db51) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0006db51) list_single_cmail_header_detail_pane_t

0xa5e3,	// (0x00068395) phacti_term_pane_t2_ParamLimits

0xa5e3,	// (0x00068395) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0006db5b) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0006db5b) phacti_term_pane_t

0xeab7,	// (0x0006c869) aid_size_list_single_double

0x90d7,	// (0x00066e89) popup_ezdial_listscroll_window

0x90f9,	// (0x00066eab) popup_number_entry_window_cp01

0xaa7f,	// (0x00068831) bg_popup_call_pane_cp09

0xeac3,	// (0x0006c875) ezdial_list_pane

0xeacb,	// (0x0006c87d) scroll_pane_cp23

0xca4d,	// (0x0006a7ff) bg_button_pane_cp028_ParamLimits

0xca4d,	// (0x0006a7ff) bg_button_pane_cp028

0x9107,	// (0x00066eb9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9107,	// (0x00066eb9) cmail_ddmenu_btn01_pane_g1

0x9119,	// (0x00066ecb) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9119,	// (0x00066ecb) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0006dbd3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0006dbd3) cmail_ddmenu_btn01_pane_g

0xead3,	// (0x0006c885) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead3,	// (0x0006c885) cmail_ddmenu_btn01_pane_t1

0xc81d,	// (0x0006a5cf) bg_button_pane_cp029_ParamLimits

0xc81d,	// (0x0006a5cf) bg_button_pane_cp029

0x9125,	// (0x00066ed7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9125,	// (0x00066ed7) cmail_ddmenu_btn02_pane_g1

0x913d,	// (0x00066eef) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x913d,	// (0x00066eef) cmail_ddmenu_btn02_pane_t1

0x0dfa,	// (0x0005ebac) bg_button_pane_cp031_ParamLimits

0x0dfa,	// (0x0005ebac) bg_button_pane_cp031

0x9125,	// (0x00066ed7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9125,	// (0x00066ed7) cmail_ddmenu_btn03_pane_g1

0x913d,	// (0x00066eef) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x913d,	// (0x00066eef) cmail_ddmenu_btn03_pane_t1

0x60e1,	// (0x00063e93) cell_dialer2_keypad_pane_t1_ParamLimits

0x60fb,	// (0x00063ead) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x60fb,	// (0x00063ead) cell_dialer2_keypad_pane_t1_copy1

0x7fdc,	// (0x00065d8e) ncimui_group_button_pane

0xa2c9,	// (0x0006807b) main_sp_fs_calendar_pane_ParamLimits

0x8d37,	// (0x00066ae9) list_single_cmail_header_caption_pane_ParamLimits

0xa5f8,	// (0x000683aa) aid_recal_txt_sm_pane

0x9c32,	// (0x000679e4) mian_recal_day_pane

0xa632,	// (0x000683e4) popup_sp_fs_cale_preview_window_ParamLimits

0xeae9,	// (0x0006c89b) list_recal_day_pane

0xa71e,	// (0x000684d0) list_single_recal_day_pane_ParamLimits

0xa71e,	// (0x000684d0) list_single_recal_day_pane

0xeb10,	// (0x0006c8c2) list_single_recal_day_pane_g1_ParamLimits

0xeb10,	// (0x0006c8c2) list_single_recal_day_pane_g1

0xa730,	// (0x000684e2) list_single_recal_day_pane_g2_ParamLimits

0xa730,	// (0x000684e2) list_single_recal_day_pane_g2

0xa73c,	// (0x000684ee) list_single_recal_day_pane_g3_ParamLimits

0xa73c,	// (0x000684ee) list_single_recal_day_pane_g3

0x9161,	// (0x00066f13) list_single_recal_day_pane_g4_ParamLimits

0x9161,	// (0x00066f13) list_single_recal_day_pane_g4

0xa748,	// (0x000684fa) list_single_recal_day_pane_g5_ParamLimits

0xa748,	// (0x000684fa) list_single_recal_day_pane_g5

0xa754,	// (0x00068506) list_single_recal_day_pane_g6_ParamLimits

0xa754,	// (0x00068506) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0006dbe2) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0006dbe2) list_single_recal_day_pane_g

0xa768,	// (0x0006851a) list_single_recal_day_pane_t1

0xb149,	// (0x00068efb) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0006dbed) list_single_recal_day_pane_t

0x9179,	// (0x00066f2b) ncimui_query_button_pane_ParamLimits

0x9179,	// (0x00066f2b) ncimui_query_button_pane

0x9189,	// (0x00066f3b) ncimui_query_button_pane_t1_ParamLimits

0x9189,	// (0x00066f3b) ncimui_query_button_pane_t1

0xeb1c,	// (0x0006c8ce) ncimui_query_button_pane_t2_ParamLimits

0xeb1c,	// (0x0006c8ce) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0006dbf2) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0006dbf2) ncimui_query_button_pane_t

0x919c,	// (0x00066f4e) query_button_pane_ParamLimits

0x919c,	// (0x00066f4e) query_button_pane

0x9c32,	// (0x000679e4) bg_button_pane_cp0028

0xeb2f,	// (0x0006c8e1) query_button_pane_t1

0x44ac,	// (0x0006225e) main_tport_pane_ParamLimits

0x8c20,	// (0x000669d2) bg_popup_window_pane_cp01_ParamLimits

0x8c20,	// (0x000669d2) bg_popup_window_pane_cp01

0x8c2e,	// (0x000669e0) heading_pane_cp08_ParamLimits

0x8c2e,	// (0x000669e0) heading_pane_cp08

0x8c3c,	// (0x000669ee) heading_pane_cp07_ParamLimits

0x8c3c,	// (0x000669ee) heading_pane_cp07

0x8cad,	// (0x00066a5f) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0006db3e) cell_tport_appsw_pane_g

0x3c0d,	// (0x000619bf) input_candi_list_open_g1

0xae90,	// (0x00068c42) list_cale_time_pane_g6_ParamLimits

0xae90,	// (0x00068c42) list_cale_time_pane_g6

0x4f2f,	// (0x00062ce1) aid_size_touch_calib_1_ParamLimits

0x4f2f,	// (0x00062ce1) aid_size_touch_calib_1

0x4f3b,	// (0x00062ced) aid_size_touch_calib_2_ParamLimits

0x4f3b,	// (0x00062ced) aid_size_touch_calib_2

0x4f49,	// (0x00062cfb) aid_size_touch_calib_3_ParamLimits

0x4f49,	// (0x00062cfb) aid_size_touch_calib_3

0x4f59,	// (0x00062d0b) aid_size_touch_calib_4_ParamLimits

0x4f59,	// (0x00062d0b) aid_size_touch_calib_4

0x4f67,	// (0x00062d19) main_touch_calib_button_group_pane_ParamLimits

0x4f67,	// (0x00062d19) main_touch_calib_button_group_pane

0x4f75,	// (0x00062d27) main_touch_calib_pane_g1_ParamLimits

0x4f81,	// (0x00062d33) main_touch_calib_pane_g2_ParamLimits

0x4f8d,	// (0x00062d3f) main_touch_calib_pane_g3_ParamLimits

0x4f99,	// (0x00062d4b) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0006d503) main_touch_calib_pane_g_ParamLimits

0x4fa5,	// (0x00062d57) main_touch_calib_pane_t1_ParamLimits

0x4fbc,	// (0x00062d6e) main_touch_calib_pane_t2_ParamLimits

0x4fd5,	// (0x00062d87) main_touch_calib_pane_t3_ParamLimits

0x4feb,	// (0x00062d9d) main_touch_calib_pane_t4_ParamLimits

0x5001,	// (0x00062db3) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0006d50c) main_touch_calib_pane_t_ParamLimits

0xcf9e,	// (0x0006ad50) list_single_fp_cale_pane_g3_ParamLimits

0xcf9e,	// (0x0006ad50) list_single_fp_cale_pane_g3

0x6586,	// (0x00064338) bg_button_pane_cp012_ParamLimits

0x6586,	// (0x00064338) bg_vkb2_func_pane_cp03_ParamLimits

0x6fa4,	// (0x00064d56) cell_vitu2_function_top_pane_g1_ParamLimits

0x6586,	// (0x00064338) bg_vkb2_func_pane_cp04_ParamLimits

0x7f62,	// (0x00065d14) main_ncimui_button_group_pane_ParamLimits

0x7f62,	// (0x00065d14) main_ncimui_button_group_pane

0x7fca,	// (0x00065d7c) main_ncimui_pane_t3_ParamLimits

0x7fca,	// (0x00065d7c) main_ncimui_pane_t3

0xe8e7,	// (0x0006c699) phacti_button_group_pane

0xeab7,	// (0x0006c869) aid_size_list_single_double_ParamLimits

0x90d7,	// (0x00066e89) popup_ezdial_listscroll_window_ParamLimits

0x90f9,	// (0x00066eab) popup_number_entry_window_cp01_ParamLimits

0x91a9,	// (0x00066f5b) phacti_button_pane_ParamLimits

0x91a9,	// (0x00066f5b) phacti_button_pane

0x9c32,	// (0x000679e4) bg_button_pane_cp14

0xeb3d,	// (0x0006c8ef) phacti_button_pane_t1

0x91ba,	// (0x00066f6c) main_touch_calib_button_pane_ParamLimits

0x91ba,	// (0x00066f6c) main_touch_calib_button_pane

0xa8c9,	// (0x0006867b) bg_button_pane_cp18_ParamLimits

0xa8c9,	// (0x0006867b) bg_button_pane_cp18

0xeb4b,	// (0x0006c8fd) main_touch_calib_button_pane_t1_ParamLimits

0xeb4b,	// (0x0006c8fd) main_touch_calib_button_pane_t1

0xeb61,	// (0x0006c913) main_touch_calib_button_pane_t2_ParamLimits

0xeb61,	// (0x0006c913) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0006dbf7) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0006dbf7) main_touch_calib_button_pane_t

0x9c32,	// (0x000679e4) cell_ncimui_button_pane

0x9c32,	// (0x000679e4) bg_button_pane_cp032

0xeb7f,	// (0x0006c931) cell_ncimui_button_pane_t1

0x6157,	// (0x00063f09) image3_infobar_pane_ParamLimits

0x6157,	// (0x00063f09) image3_infobar_pane

0x8357,	// (0x00066109) fs_bigclock_status_pane_ParamLimits

0x8357,	// (0x00066109) fs_bigclock_status_pane

0x8364,	// (0x00066116) main_fs_bigclock_clock_pane_ParamLimits

0x8364,	// (0x00066116) main_fs_bigclock_clock_pane

0x8380,	// (0x00066132) main_fs_bigclock_indi_pane_ParamLimits

0x8380,	// (0x00066132) main_fs_bigclock_indi_pane

0x83b2,	// (0x00066164) main_fs_bigclock_swipe_pane_ParamLimits

0x83b2,	// (0x00066164) main_fs_bigclock_swipe_pane

0x9c32,	// (0x000679e4) main_fs_clock_dumped_data

0xe41c,	// (0x0006c1ce) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe41c,	// (0x0006c1ce) list_single_fs_bigclock_indicator_pane_g1

0xe446,	// (0x0006c1f8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe446,	// (0x0006c1f8) list_single_fs_bigclock_indicator_pane_g2

0xe460,	// (0x0006c212) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe460,	// (0x0006c212) list_single_fs_bigclock_indicator_pane_g3

0xe47a,	// (0x0006c22c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe47a,	// (0x0006c22c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0006da1f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0006da1f) list_single_fs_bigclock_indicator_pane_g

0xe4a5,	// (0x0006c257) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4a5,	// (0x0006c257) list_single_fs_bigclock_indicator_pane_t1

0xe4cd,	// (0x0006c27f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4cd,	// (0x0006c27f) list_single_fs_bigclock_indicator_pane_t2

0xe4f5,	// (0x0006c2a7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4f5,	// (0x0006c2a7) list_single_fs_bigclock_indicator_pane_t3

0xe51d,	// (0x0006c2cf) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe51d,	// (0x0006c2cf) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0006da2a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0006da2a) list_single_fs_bigclock_indicator_pane_t

0xeb8d,	// (0x0006c93f) image3_infobar_fav_pane_ParamLimits

0xeb8d,	// (0x0006c93f) image3_infobar_fav_pane

0xeb9d,	// (0x0006c94f) image3_infobar_loc_pane_ParamLimits

0xeb9d,	// (0x0006c94f) image3_infobar_loc_pane

0xebb3,	// (0x0006c965) image3_infobar_time_pane_ParamLimits

0xebb3,	// (0x0006c965) image3_infobar_time_pane

0xcc6e,	// (0x0006aa20) image3_infobar_time_pane_g1

0xebc3,	// (0x0006c975) image3_infobar_time_pane_t1

0xcc6e,	// (0x0006aa20) image3_infobar_loc_pane_g1

0xebd1,	// (0x0006c983) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0006dbfc) image3_infobar_loc_pane_g

0xebd9,	// (0x0006c98b) image3_infobar_loc_pane_t1

0xcc6e,	// (0x0006aa20) image3_infobar_fav_pane_g1

0xebe7,	// (0x0006c999) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0006dc01) image3_infobar_fav_pane_g

0xebef,	// (0x0006c9a1) fs_bigclock_status_battery_pane

0xebf8,	// (0x0006c9aa) fs_bigclock_status_signal_pane

0xec01,	// (0x0006c9b3) fs_bigclock_status_title_pane

0xec0a,	// (0x0006c9bc) fs_bigclock_status_signal_pane_g1

0xec13,	// (0x0006c9c5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0006dc06) fs_bigclock_status_signal_pane_g

0xec1b,	// (0x0006c9cd) fs_bigclock_status_battery_pane_g1

0xec24,	// (0x0006c9d6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0006dc0b) fs_bigclock_status_battery_pane_g

0xec2c,	// (0x0006c9de) fs_bigclock_status_title_pane_t1

0xcc6e,	// (0x0006aa20) main_fs_bigclock_clock_pane_g1

0xec3a,	// (0x0006c9ec) main_fs_bigclock_clock_pane_g2

0xec45,	// (0x0006c9f7) main_fs_bigclock_clock_pane_g3

0xec45,	// (0x0006c9f7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0006dc10) main_fs_bigclock_clock_pane_g

0xec51,	// (0x0006ca03) main_fs_bigclock_clock_pane_t1

0x91ca,	// (0x00066f7c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0006dc19) main_fs_bigclock_clock_pane_t

0x91d9,	// (0x00066f8b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x91d9,	// (0x00066f8b) list_single_fs_bigclock_indicator_pane

0x91ea,	// (0x00066f9c) list_single_fs_bigclock_pane_ParamLimits

0x91ea,	// (0x00066f9c) list_single_fs_bigclock_pane

0xec68,	// (0x0006ca1a) main_fs_bigclock_indicator_pane_t1

0xec77,	// (0x0006ca29) list_single_fs_bigclock_pane_g1

0xec7f,	// (0x0006ca31) list_single_fs_bigclock_pane_t1

0xcc6e,	// (0x0006aa20) main_fs_bigclock_swipe_pane_g1

0xecc2,	// (0x0006ca74) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0006dc2a) main_fs_bigclock_swipe_pane_g

0xecca,	// (0x0006ca7c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecca,	// (0x0006ca7c) main_fs_bigclock_swipe_pane_t1

0x3338,	// (0x000610ea) call_type_pane_ParamLimits

0x9c32,	// (0x000679e4) main_btmg_pane

0xa686,	// (0x00068438) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa686,	// (0x00068438) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0006db9d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0006db9d) list_single_cale_mrui_row_pane_g

0xa70c,	// (0x000684be) list_recal_vselct_arw_lo_pane

0xeb08,	// (0x0006c8ba) list_recal_vselct_arw_up_pane

0xa714,	// (0x000684c6) list_recal_vselct_pane

0x9240,	// (0x00066ff2) btmg_button_pane

0x924c,	// (0x00066ffe) main_btmg_pane_g1

0x9c32,	// (0x000679e4) bg_button_pane_cp044

0xece7,	// (0x0006ca99) btmg_button_pane_t1

0xc809,	// (0x0006a5bb) aid_listscroll_gen

0xa2c9,	// (0x0006807b) main_cntbar_detail_pane

0xe832,	// (0x0006c5e4) list_cmail_folder_pane

0xe842,	// (0x0006c5f4) sp_fs_scroll_pane_cp03_ParamLimits

0x9254,	// (0x00067006) list_single_fs_dyc_pane_cp01_ParamLimits

0x9254,	// (0x00067006) list_single_fs_dyc_pane_cp01

0xecf5,	// (0x0006caa7) aid_size_cmail_indent

0xb15b,	// (0x00068f0d) list_single_dyc_row_pane_cp01

0x9295,	// (0x00067047) cntbar_detail_list_pane_ParamLimits

0x9295,	// (0x00067047) cntbar_detail_list_pane

0x92d5,	// (0x00067087) main_cntbar_detail_cont_pane_ParamLimits

0x92d5,	// (0x00067087) main_cntbar_detail_cont_pane

0x325b,	// (0x0006100d) scroll_pane_cp032_ParamLimits

0x325b,	// (0x0006100d) scroll_pane_cp032

0x92e1,	// (0x00067093) cntbar_detail_list_event_pane_ParamLimits

0x92e1,	// (0x00067093) cntbar_detail_list_event_pane

0x92a3,	// (0x00067055) cntbar_detail_list_shct_pane

0xad2a,	// (0x00068adc) aid_list_gen

0xecfe,	// (0x0006cab0) aid_scroll

0xed07,	// (0x0006cab9) aid_size_touch_scroll_bar

0x7703,	// (0x000654b5) aid_list_double

0xed10,	// (0x0006cac2) aid_list_single

0x76f1,	// (0x000654a3) aid_list_single_lg

0xb164,	// (0x00068f16) aid_list_z_g_a_sm

0xb16c,	// (0x00068f1e) aid_list_z_g_d

0x92f1,	// (0x000670a3) aid_txt_z_prm

0x92ff,	// (0x000670b1) aid_txt_z_prm_cp01

0x930d,	// (0x000670bf) aid_txt_z_sec

0x931b,	// (0x000670cd) main_cntbar_detail_cont_pane_g1_ParamLimits

0x931b,	// (0x000670cd) main_cntbar_detail_cont_pane_g1

0x9328,	// (0x000670da) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9328,	// (0x000670da) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0006dc2f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0006dc2f) main_cntbar_detail_cont_pane_g

0xed19,	// (0x0006cacb) main_cntbar_detail_cont_pane_t1

0xed27,	// (0x0006cad9) main_cntbar_detail_cont_pane_t2

0xed35,	// (0x0006cae7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0006dc34) main_cntbar_detail_cont_pane_t

0x9334,	// (0x000670e6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9334,	// (0x000670e6) cell_cntbar_detail_list_shct_pane

0xed43,	// (0x0006caf5) cntbar_detail_list_shct_pane_g1

0xed4c,	// (0x0006cafe) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0006dc3b) cntbar_detail_list_shct_pane_g

0x9348,	// (0x000670fa) cntbar_detail_list_event_pane_g1_ParamLimits

0x9348,	// (0x000670fa) cntbar_detail_list_event_pane_g1

0x9354,	// (0x00067106) cntbar_detail_list_event_pane_g2_ParamLimits

0x9354,	// (0x00067106) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0006dc40) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0006dc40) cntbar_detail_list_event_pane_g

0x93c2,	// (0x00067174) cntbar_detail_list_event_pane_t1_ParamLimits

0x93c2,	// (0x00067174) cntbar_detail_list_event_pane_t1

0x93d7,	// (0x00067189) cntbar_detail_list_event_pane_t2_ParamLimits

0x93d7,	// (0x00067189) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0006dc4d) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0006dc4d) cntbar_detail_list_event_pane_t

0xcc6e,	// (0x0006aa20) cell_cntbar_detail_list_shct_pane_g1

0x370b,	// (0x000614bd) navi_pane_mv_g3

0xa2c9,	// (0x0006807b) main_cntbar_detail_pane_ParamLimits

0x9c32,	// (0x000679e4) main_notif_wgt_pane

0x5e01,	// (0x00063bb3) aid_tch_main_mp4_pane_g4

0x6040,	// (0x00063df2) popup_slider_window_cp02

0xa702,	// (0x000684b4) list_recal_day_event_pane

0x9275,	// (0x00067027) cntbar_detail_btn_pane_ParamLimits

0x9275,	// (0x00067027) cntbar_detail_btn_pane

0x9285,	// (0x00067037) cntbar_detail_btn_pane_cp01_ParamLimits

0x9285,	// (0x00067037) cntbar_detail_btn_pane_cp01

0x92a3,	// (0x00067055) cntbar_detail_list_shct_pane_ParamLimits

0x92af,	// (0x00067061) cntbar_detail_pane_g1_ParamLimits

0x92af,	// (0x00067061) cntbar_detail_pane_g1

0x92bf,	// (0x00067071) cntbar_detail_pane_t1_ParamLimits

0x92bf,	// (0x00067071) cntbar_detail_pane_t1

0x9360,	// (0x00067112) cntbar_detail_list_event_pane_g3_ParamLimits

0x9360,	// (0x00067112) cntbar_detail_list_event_pane_g3

0x9378,	// (0x0006712a) cntbar_detail_list_event_pane_g4_ParamLimits

0x9378,	// (0x0006712a) cntbar_detail_list_event_pane_g4

0x9390,	// (0x00067142) cntbar_detail_list_event_pane_g5_ParamLimits

0x9390,	// (0x00067142) cntbar_detail_list_event_pane_g5

0x93a8,	// (0x0006715a) cntbar_detail_list_event_pane_g6_ParamLimits

0x93a8,	// (0x0006715a) cntbar_detail_list_event_pane_g6

0x93ec,	// (0x0006719e) cntbar_detail_list_event_pane_t3_ParamLimits

0x93ec,	// (0x0006719e) cntbar_detail_list_event_pane_t3

0x93fe,	// (0x000671b0) popup_notif_wgt_window_ParamLimits

0x93fe,	// (0x000671b0) popup_notif_wgt_window

0x940e,	// (0x000671c0) popup_submenu_window_cp01_ParamLimits

0x940e,	// (0x000671c0) popup_submenu_window_cp01

0xaa7f,	// (0x00068831) bg_popup_window_pane_cp10

0xed55,	// (0x0006cb07) listscroll_notif_wgt_pane

0xed67,	// (0x0006cb19) list_notif_wgt_window

0xed70,	// (0x0006cb22) scroll_pane_cp033

0x941e,	// (0x000671d0) list_notif_wgt_row_pane_ParamLimits

0x941e,	// (0x000671d0) list_notif_wgt_row_pane

0xed79,	// (0x0006cb2b) aid_size_list_notif_wgt_del

0xed86,	// (0x0006cb38) list_notif_wgt_row_pane_g1

0xed92,	// (0x0006cb44) list_notif_wgt_row_pane_g2

0xeda6,	// (0x0006cb58) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0006dc54) list_notif_wgt_row_pane_g

0xedb3,	// (0x0006cb65) list_notif_wgt_row_pane_t1

0xedc9,	// (0x0006cb7b) list_notif_wgt_row_pane_t2

0xeddb,	// (0x0006cb8d) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0006dc5b) list_notif_wgt_row_pane_t

0xd8cc,	// (0x0006b67e) list_recal_day_event_pane_g1

0xeded,	// (0x0006cb9f) list_recal_day_event_pane_t1

0x9c32,	// (0x000679e4) bg_button_pane_cp045

0xedfc,	// (0x0006cbae) cntbar_detail_btn_pane_t1

0xc81d,	// (0x0006a5cf) main_callh_pane_ParamLimits

0xc81d,	// (0x0006a5cf) main_callh_pane

0x9c32,	// (0x000679e4) main_coverflow0_pane

0x9c32,	// (0x000679e4) main_wgtman_pane

0x83ca,	// (0x0006617c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83ca,	// (0x0006617c) main_fs_bigclock_unlock_btn_pane

0x8ca5,	// (0x00066a57) bg_button_pane_cp16

0x8cb5,	// (0x00066a67) cell_tport_appsw_pane_g3

0x942f,	// (0x000671e1) cf0_flow_pane_ParamLimits

0x942f,	// (0x000671e1) cf0_flow_pane

0xee0a,	// (0x0006cbbc) listscroll_cf0_pane

0xee15,	// (0x0006cbc7) main_cf0_pane_g1

0x943e,	// (0x000671f0) main_cf0_pane_t1_ParamLimits

0x943e,	// (0x000671f0) main_cf0_pane_t1

0x9452,	// (0x00067204) main_cf0_pane_t2_ParamLimits

0x9452,	// (0x00067204) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0006dc67) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0006dc67) main_cf0_pane_t

0xee27,	// (0x0006cbd9) scroll_pane_cp11

0x9466,	// (0x00067218) cf0_flow_pane_g1

0x946e,	// (0x00067220) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0006dc6c) cf0_flow_pane_g

0x9476,	// (0x00067228) cf0_flow_pane_t1

0x9c32,	// (0x000679e4) main_call6_pane

0x9c32,	// (0x000679e4) main_calllock_pane

0x9484,	// (0x00067236) call6_btn_grp_pane_ParamLimits

0x9484,	// (0x00067236) call6_btn_grp_pane

0x9491,	// (0x00067243) call6_pane_g1_ParamLimits

0x9491,	// (0x00067243) call6_pane_g1

0x94a1,	// (0x00067253) popup_call6_1st_window_ParamLimits

0x94a1,	// (0x00067253) popup_call6_1st_window

0x94af,	// (0x00067261) popup_call6_2nd_window_ParamLimits

0x94af,	// (0x00067261) popup_call6_2nd_window

0x94bd,	// (0x0006726f) cell_call6_btn_pane_ParamLimits

0x94bd,	// (0x0006726f) cell_call6_btn_pane

0xaa7f,	// (0x00068831) bg_popup_call2_in_pane_cp03

0xee32,	// (0x0006cbe4) popup_call6_1st_window_g1

0xee3a,	// (0x0006cbec) popup_call6_1st_window_g2

0xee42,	// (0x0006cbf4) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0006dc71) popup_call6_1st_window_g

0xee4a,	// (0x0006cbfc) popup_call6_1st_window_t1

0xee59,	// (0x0006cc0b) popup_call6_1st_window_t2

0xee69,	// (0x0006cc1b) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0006dc78) popup_call6_1st_window_t

0xaa7f,	// (0x00068831) bg_popup_call2_in_pane_cp04

0xee32,	// (0x0006cbe4) popup_call6_2nd_window_g1

0xee3a,	// (0x0006cbec) popup_call6_2nd_window_g2

0xee42,	// (0x0006cbf4) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0006dc71) popup_call6_2nd_window_g

0xee4a,	// (0x0006cbfc) popup_call6_2nd_window_t1

0x9c32,	// (0x000679e4) bg_button_pane_cp15

0xee79,	// (0x0006cc2b) cell_call6_btn_pane_g1

0xee82,	// (0x0006cc34) cell_call6_btn_pane_t1

0x94cc,	// (0x0006727e) listscroll_wgtman_pane_ParamLimits

0x94cc,	// (0x0006727e) listscroll_wgtman_pane

0x94e8,	// (0x0006729a) wgtman_btn_pane_ParamLimits

0x94e8,	// (0x0006729a) wgtman_btn_pane

0xb2c2,	// (0x00069074) aid_scroll_copy1

0xee91,	// (0x0006cc43) list_wgtman_pane

0x951d,	// (0x000672cf) wgtman_btn_pane_g1_ParamLimits

0x951d,	// (0x000672cf) wgtman_btn_pane_g1

0x9545,	// (0x000672f7) wgtman_btn_pane_t1_ParamLimits

0x9545,	// (0x000672f7) wgtman_btn_pane_t1

0xee9b,	// (0x0006cc4d) wgtman_btn_pane_t2_ParamLimits

0xee9b,	// (0x0006cc4d) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0006dc7f) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0006dc7f) wgtman_btn_pane_t

0x957c,	// (0x0006732e) listrow_wgtman_pane_ParamLimits

0x957c,	// (0x0006732e) listrow_wgtman_pane

0x9590,	// (0x00067342) listrow_wgtman_pane_g1

0x959d,	// (0x0006734f) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0006dc84) listrow_wgtman_pane_g

0x95bb,	// (0x0006736d) listrow_wgtman_pane_t1

0x95d3,	// (0x00067385) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0006dc89) listrow_wgtman_pane_t

0x95f9,	// (0x000673ab) wait_bar_pane_cp09

0xeeb2,	// (0x0006cc64) main_calllock_btn_pane

0xeebc,	// (0x0006cc6e) main_calllock_pane_g1

0x9c32,	// (0x000679e4) bg_button_pane_cp17

0xeec8,	// (0x0006cc7a) main_calllock_btn_pane_g1

0xeed1,	// (0x0006cc83) main_calllock_btn_pane_t1

0x9c32,	// (0x000679e4) main_dialer3_pane

0x9c32,	// (0x000679e4) main_fmrd2_pane

0xcc6e,	// (0x0006aa20) main_fs_bigclock_unlock_btn_pane_g1

0xeee8,	// (0x0006cc9a) main_fs_bigclock_unlock_btn_pane_t1

0x960b,	// (0x000673bd) area_fmrd2_info_pane_ParamLimits

0x960b,	// (0x000673bd) area_fmrd2_info_pane

0x9617,	// (0x000673c9) area_fmrd2_visual_pane_ParamLimits

0x9617,	// (0x000673c9) area_fmrd2_visual_pane

0x9625,	// (0x000673d7) fmrd2_indi_pane_ParamLimits

0x9625,	// (0x000673d7) fmrd2_indi_pane

0x9632,	// (0x000673e4) area_fmrd2_visual_pane_g1

0x963a,	// (0x000673ec) area_fmrd2_visual_pane_t1

0x964a,	// (0x000673fc) area_fmrd2_visual_pane_t2

0x965a,	// (0x0006740c) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0006dc93) area_fmrd2_visual_pane_t

0x966a,	// (0x0006741c) area_fmrd2_info_pane_g1

0x9672,	// (0x00067424) area_fmrd2_info_pane_t1

0x9682,	// (0x00067434) area_fmrd2_info_pane_t2

0x9692,	// (0x00067444) area_fmrd2_info_pane_t3

0x96a2,	// (0x00067454) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0006dc9a) area_fmrd2_info_pane_t

0x96b2,	// (0x00067464) fmrd2_indi_pane_t1

0x96c2,	// (0x00067474) fmrd2_indi_pane_t2

0x96d2,	// (0x00067484) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0006dca3) fmrd2_indi_pane_t

0xe489,	// (0x0006c23b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe489,	// (0x0006c23b) list_single_fs_bigclock_indicator_pane_g5

0xe539,	// (0x0006c2eb) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe539,	// (0x0006c2eb) list_single_fs_bigclock_indicator_pane_t5

0x8e4b,	// (0x00066bfd) aid_cell_bcale_month_pane_ParamLimits

0x8e4b,	// (0x00066bfd) aid_cell_bcale_month_pane

0x8e69,	// (0x00066c1b) bcale_month_pane_ParamLimits

0x8e69,	// (0x00066c1b) bcale_month_pane

0x8e85,	// (0x00066c37) bcale_preview_pane_ParamLimits

0x8e85,	// (0x00066c37) bcale_preview_pane

0xec7f,	// (0x0006ca31) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9e,	// (0x0006ca50) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9e,	// (0x0006ca50) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0006dc25) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0006dc25) list_single_fs_bigclock_pane_t

0xeee0,	// (0x0006cc92) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0006dc8e) main_fs_bigclock_unlock_btn_pane_g

0x96e2,	// (0x00067494) aid_dia3_key_size_ParamLimits

0x96e2,	// (0x00067494) aid_dia3_key_size

0x96ee,	// (0x000674a0) aid_dia3_listrow_size_ParamLimits

0x96ee,	// (0x000674a0) aid_dia3_listrow_size

0x96fe,	// (0x000674b0) dia3_keypad_fun_pane_ParamLimits

0x96fe,	// (0x000674b0) dia3_keypad_fun_pane

0x970e,	// (0x000674c0) dia3_keypad_num_pane_ParamLimits

0x970e,	// (0x000674c0) dia3_keypad_num_pane

0x971e,	// (0x000674d0) dia3_listscroll_pane_ParamLimits

0x971e,	// (0x000674d0) dia3_listscroll_pane

0x972c,	// (0x000674de) dia3_numentry_pane_ParamLimits

0x972c,	// (0x000674de) dia3_numentry_pane

0xeef6,	// (0x0006cca8) dia3_list_pane

0xef01,	// (0x0006ccb3) scroll_pane_cp12

0x9c32,	// (0x000679e4) bg_dia3_numentry_pane

0x973a,	// (0x000674ec) dia3_numentry_pane_t1

0x9749,	// (0x000674fb) cell_dia3_key_num_pane

0x9751,	// (0x00067503) cell_dia3_key0_fun_pane_ParamLimits

0x9751,	// (0x00067503) cell_dia3_key0_fun_pane

0x975e,	// (0x00067510) cell_dia3_key1_fun_pane_ParamLimits

0x975e,	// (0x00067510) cell_dia3_key1_fun_pane

0x976b,	// (0x0006751d) dia3_listrow_pane

0xe16c,	// (0x0006bf1e) bg_dia3_numentry_pane_g1

0x9c32,	// (0x000679e4) bg_button_pane_cp21

0xef0c,	// (0x0006ccbe) cell_dia3_key_num_pane_t1

0xef1a,	// (0x0006cccc) cell_dia3_key_num_pane_t2

0xef29,	// (0x0006ccdb) cell_dia3_key_num_pane_t3

0xef38,	// (0x0006ccea) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0006dcaa) cell_dia3_key_num_pane_t

0x9c32,	// (0x000679e4) bg_button_pane_cp19

0x9778,	// (0x0006752a) cell_dia3_key0_fun_pane_g1

0x9c32,	// (0x000679e4) bg_button_pane_cp20

0x9780,	// (0x00067532) cell_dia3_key1_fun_pane_g1

0x9788,	// (0x0006753a) area_left_week_number_pane

0x979b,	// (0x0006754d) area_top_day_name_pane

0x97a9,	// (0x0006755b) frame_month_view_pane

0xef47,	// (0x0006ccf9) grid_month_view_pane

0x97be,	// (0x00067570) cell_top_day_name_pane_ParamLimits

0x97be,	// (0x00067570) cell_top_day_name_pane

0x97da,	// (0x0006758c) cell_area_left_week_number_pane_ParamLimits

0x97da,	// (0x0006758c) cell_area_left_week_number_pane

0x97fb,	// (0x000675ad) cell_month_view_pane_ParamLimits

0x97fb,	// (0x000675ad) cell_month_view_pane

0xef55,	// (0x0006cd07) frm_month_g1

0x9827,	// (0x000675d9) frm_month_g2

0x9838,	// (0x000675ea) frm_month_g3

0x9849,	// (0x000675fb) frm_month_g4

0x985a,	// (0x0006760c) frm_month_g5

0x986b,	// (0x0006761d) frm_month_g6

0x987e,	// (0x00067630) frm_month_g7

0xef62,	// (0x0006cd14) frm_month_g8

0x9891,	// (0x00067643) frm_month_g9

0x989e,	// (0x00067650) frm_month_g10

0x98ab,	// (0x0006765d) frm_month_g11

0x98b8,	// (0x0006766a) frm_month_g12

0x98c5,	// (0x00067677) frm_month_g13

0x98d4,	// (0x00067686) frm_month_g14

0x98e3,	// (0x00067695) frm_month_g15

0x98f2,	// (0x000676a4) frm_month_g16

0x000f,

0xff01,	// (0x0006dcb3) frm_month_g

0xef6f,	// (0x0006cd21) cell_top_day_name_pane_t1

0x9901,	// (0x000676b3) cell_area_left_week_number_pane_g1

0x9910,	// (0x000676c2) cell_area_left_week_number_pane_t1

0xce9e,	// (0x0006ac50) cell_month_view_pane_g1

0x9926,	// (0x000676d8) cell_month_view_pane_t1

0x9c32,	// (0x000679e4) main_fps_pane

0xe70e,	// (0x0006c4c0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe70e,	// (0x0006c4c0) cmail_ddmenu_btn02_pane_cp1

0xe72a,	// (0x0006c4dc) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe72a,	// (0x0006c4dc) cmail_ddmenu_btn02_pane_cp2

0x9131,	// (0x00066ee3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9131,	// (0x00066ee3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0006dbd8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0006dbd8) cmail_ddmenu_btn02_pane_g

0x914f,	// (0x00066f01) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x914f,	// (0x00066f01) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0006dbdd) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0006dbdd) cmail_ddmenu_btn02_pane_t

0x993c,	// (0x000676ee) fps_text_pane_ParamLimits

0x993c,	// (0x000676ee) fps_text_pane

0x9949,	// (0x000676fb) main_fps_pane_g1_ParamLimits

0x9949,	// (0x000676fb) main_fps_pane_g1

0x9955,	// (0x00067707) wait_bar_pane_cp010_ParamLimits

0x9955,	// (0x00067707) wait_bar_pane_cp010

0x9961,	// (0x00067713) fps_text_pane_t1_ParamLimits

0x9961,	// (0x00067713) fps_text_pane_t1

0x6474,	// (0x00064226) cam4_image_uncrop_pane_g1

0x647d,	// (0x0006422f) cam4_image_uncrop_pane_g2

0x6486,	// (0x00064238) cam4_image_uncrop_pane_g3

0x648f,	// (0x00064241) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0006d6a0) cam4_image_uncrop_pane_g

0x976b,	// (0x0006751d) dia3_listrow_pane_ParamLimits

0x9c32,	// (0x000679e4) main_phob2_pane

0x8c87,	// (0x00066a39) cell_tport_appsw_pane_cp02_ParamLimits

0x8c87,	// (0x00066a39) cell_tport_appsw_pane_cp02

0x8c96,	// (0x00066a48) cell_tport_appsw_pane_cp03_ParamLimits

0x8c96,	// (0x00066a48) cell_tport_appsw_pane_cp03

0x9c32,	// (0x000679e4) phob2_contact_card_pane

0x9c32,	// (0x000679e4) phob2_listscroll_pane

0xef82,	// (0x0006cd34) phob2_list_pane

0xef8a,	// (0x0006cd3c) scroll_pane_cp034

0x997a,	// (0x0006772c) phob2_cc_data_pane_ParamLimits

0x997a,	// (0x0006772c) phob2_cc_data_pane

0x9996,	// (0x00067748) phob2_cc_listscroll_pane_ParamLimits

0x9996,	// (0x00067748) phob2_cc_listscroll_pane

0x99b2,	// (0x00067764) list_double_large_graphic_phob2_pane_ParamLimits

0x99b2,	// (0x00067764) list_double_large_graphic_phob2_pane

0x99ca,	// (0x0006777c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99ca,	// (0x0006777c) list_double_large_graphic_phob2_pane_g1

0x99e0,	// (0x00067792) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99e0,	// (0x00067792) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0006dcd4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0006dcd4) list_double_large_graphic_phob2_pane_g

0x99ec,	// (0x0006779e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99ec,	// (0x0006779e) list_double_large_graphic_phob2_pane_t1

0x9a01,	// (0x000677b3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a01,	// (0x000677b3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0006dcd9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0006dcd9) list_double_large_graphic_phob2_pane_t

0x9c32,	// (0x000679e4) list_highlight_pane_cp024

0x9a13,	// (0x000677c5) phob2_cc_button_pane

0x9a1b,	// (0x000677cd) phob2_cc_data_pane_g1_ParamLimits

0x9a1b,	// (0x000677cd) phob2_cc_data_pane_g1

0x9a27,	// (0x000677d9) phob2_cc_data_pane_g2_ParamLimits

0x9a27,	// (0x000677d9) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0006dcde) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0006dcde) phob2_cc_data_pane_g

0x9a33,	// (0x000677e5) phob2_cc_data_pane_t1_ParamLimits

0x9a33,	// (0x000677e5) phob2_cc_data_pane_t1

0x9a45,	// (0x000677f7) phob2_cc_data_pane_t2_ParamLimits

0x9a45,	// (0x000677f7) phob2_cc_data_pane_t2

0x9a57,	// (0x00067809) phob2_cc_data_pane_t3_ParamLimits

0x9a57,	// (0x00067809) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0006dce3) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0006dce3) phob2_cc_data_pane_t

0xef92,	// (0x0006cd44) phob2_cc_list_pane_ParamLimits

0xef92,	// (0x0006cd44) phob2_cc_list_pane

0xda76,	// (0x0006b828) scroll_pane_cp035_ParamLimits

0xda76,	// (0x0006b828) scroll_pane_cp035

0xa2c9,	// (0x0006807b) bg_button_pane_cp033

0xef9e,	// (0x0006cd50) phob2_cc_button_pane_g1

0xefaa,	// (0x0006cd5c) phob2_cc_button_pane_t1

0xefbf,	// (0x0006cd71) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0006dcea) phob2_cc_button_pane_t

0x9a69,	// (0x0006781b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a69,	// (0x0006781b) list_double_large_graphic_phob2_cc_pane

0x9a85,	// (0x00067837) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a85,	// (0x00067837) list_double_large_graphic_phob2_cc_pane_g1

0x9a96,	// (0x00067848) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a96,	// (0x00067848) list_double_large_graphic_phob2_cc_pane_g2

0x9aa5,	// (0x00067857) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9aa5,	// (0x00067857) list_double_large_graphic_phob2_cc_pane_g3

0x9ab4,	// (0x00067866) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9ab4,	// (0x00067866) list_double_large_graphic_phob2_cc_pane_g4

0x9ac5,	// (0x00067877) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9ac5,	// (0x00067877) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0006dcef) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0006dcef) list_double_large_graphic_phob2_cc_pane_g

0x9ad4,	// (0x00067886) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ad4,	// (0x00067886) list_double_large_graphic_phob2_cc_pane_t1

0x9afd,	// (0x000678af) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9afd,	// (0x000678af) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0006dcfa) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0006dcfa) list_double_large_graphic_phob2_cc_pane_t

0xefd1,	// (0x0006cd83) list_highlight_pane_cp025_ParamLimits

0xefd1,	// (0x0006cd83) list_highlight_pane_cp025

0xa2c9,	// (0x0006807b) bg_button_pane_cp033_ParamLimits

0xef9e,	// (0x0006cd50) phob2_cc_button_pane_g1_ParamLimits

0xefaa,	// (0x0006cd5c) phob2_cc_button_pane_t1_ParamLimits

0xefbf,	// (0x0006cd71) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0006dcea) phob2_cc_button_pane_t_ParamLimits

0x0e08,	// (0x0005ebba) popup_wgtman_window

0xd7a6,	// (0x0006b558) scroll_pane_cp038

0x9505,	// (0x000672b7) wgtman_btn_pane_cp_01_ParamLimits

0x9505,	// (0x000672b7) wgtman_btn_pane_cp_01

0xefdf,	// (0x0006cd91) wgtman_content_pane

0xefe8,	// (0x0006cd9a) wgtman_heading_pane

0x9c32,	// (0x000679e4) bg_heading_pane_cp02

0xeff1,	// (0x0006cda3) wgtman_heading_pane_g1

0xeff9,	// (0x0006cdab) wgtman_heading_pane_t1

0xf007,	// (0x0006cdb9) scroll_pane_cp036

0xf00f,	// (0x0006cdc1) wgtman_list_pane

0xf017,	// (0x0006cdc9) wgtman_list_pane_t1_ParamLimits

0xf017,	// (0x0006cdc9) wgtman_list_pane_t1

0x63d1,	// (0x00064183) cam4_grid_pane

0x71ae,	// (0x00064f60) bg_button_pane_cp015_ParamLimits

0x71c0,	// (0x00064f72) bg_button_pane_cp016_ParamLimits

0x71d3,	// (0x00064f85) bg_button_pane_cp017_ParamLimits

0x7229,	// (0x00064fdb) popup_vitu2_query_window_g3_ParamLimits

0x7229,	// (0x00064fdb) popup_vitu2_query_window_g3

0x72e8,	// (0x0006509a) popup_vitu2_query_window_t6_ParamLimits

0x72e8,	// (0x0006509a) popup_vitu2_query_window_t6

0x7313,	// (0x000650c5) popup_vitu2_query_window_t7_ParamLimits

0x7313,	// (0x000650c5) popup_vitu2_query_window_t7

0xe7c3,	// (0x0006c575) cam4_grid_pane_g1

0xe7cc,	// (0x0006c57e) cam4_grid_pane_g2

0xf031,	// (0x0006cde3) cam4_grid_pane_g3

0xf03a,	// (0x0006cdec) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0006dcff) cam4_grid_pane_g

0x2044,	// (0x0005fdf6) aid_placing_vt_slider_lsc_ParamLimits

0x2377,	// (0x00060129) vidtel_button_pane_ParamLimits

0x2377,	// (0x00060129) vidtel_button_pane

0xf045,	// (0x0006cdf7) bg_button_pane_cp034

0x9b26,	// (0x000678d8) vidtel_button_pane_g1

0xf04f,	// (0x0006ce01) vidtel_button_pane_t1

0xd8aa,	// (0x0006b65c) aid_size_vtel_slider_touch

0xda76,	// (0x0006b828) scroll_pane_cp039

0xe1aa,	// (0x0006bf5c) ncim_query_button_pane_cp01_ParamLimits

0xe1c9,	// (0x0006bf7b) ncimui_query_pane_g1_ParamLimits

0xa2c9,	// (0x0006807b) input_focus_pane_cp012_ParamLimits

0xe1ee,	// (0x0006bfa0) ncim_query_entry_pane_t1_ParamLimits

0xda76,	// (0x0006b828) scroll_pane_cp039_ParamLimits

0x367d,	// (0x0006142f) navi_pane_bcale_mc_g1

0x3685,	// (0x00061437) navi_pane_bcale_mc_t1

0xe767,	// (0x0006c519) main_sp_fs_email_pane_g1

0xe773,	// (0x0006c525) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0006da90) main_sp_fs_email_pane_g

0xea0c,	// (0x0006c7be) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea0c,	// (0x0006c7be) list_single_cale_mrui_row_pane_g3

0x916f,	// (0x00066f21) list_single_recal_day_pane_g5_event_pane

0xa760,	// (0x00068512) list_single_recal_day_pane_g7

0xf05d,	// (0x0006ce0f) list_recal_day_event_pane_cp01

0xf066,	// (0x0006ce18) list_recal_vselct_arw_lo_pane_cp01

0xf06e,	// (0x0006ce20) list_recal_vselct_arw_up_pane_cp01

0xf076,	// (0x0006ce28) list_recal_vselct_pane_cp01

0xd8cc,	// (0x0006b67e) list_recal_day_event_pane_cp01_g1

0xb174,	// (0x00068f26) list_recal_day_event_pane_cp01_t1

0xa768,	// (0x0006851a) list_single_recal_day_pane_t1_ParamLimits

0xb149,	// (0x00068efb) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0006dbed) list_single_recal_day_pane_t_ParamLimits

0xa804,	// (0x000685b6) bg_notes_pane_ParamLimits

0xa8a7,	// (0x00068659) list_notes_pane_ParamLimits

0x1157,	// (0x0005ef09) scroll_pane_cp06_ParamLimits

0xa8c9,	// (0x0006867b) main_notes_pane_ParamLimits

0x9c32,	// (0x000679e4) main_welc_pane

0x9b2e,	// (0x000678e0) main_welc_body_pane_ParamLimits

0x9b2e,	// (0x000678e0) main_welc_body_pane

0x9b49,	// (0x000678fb) main_welc_opti_pane_ParamLimits

0x9b49,	// (0x000678fb) main_welc_opti_pane

0x9b7e,	// (0x00067930) main_welc_pane_t1_ParamLimits

0x9b7e,	// (0x00067930) main_welc_pane_t1

0x9b9c,	// (0x0006794e) main_welc_body_row_pane_ParamLimits

0x9b9c,	// (0x0006794e) main_welc_body_row_pane

0x9bb6,	// (0x00067968) main_welc_opti_row_pane_ParamLimits

0x9bb6,	// (0x00067968) main_welc_opti_row_pane

0xf080,	// (0x0006ce32) main_welc_opti_row_pane_g1

0xf088,	// (0x0006ce3a) main_welc_opti_row_pane_t1

0xf097,	// (0x0006ce49) main_welc_body_row_pane_t1

0xed5f,	// (0x0006cb11) popup_notif_wgt_heading_pane

0xed79,	// (0x0006cb2b) aid_size_list_notif_wgt_del_ParamLimits

0xed86,	// (0x0006cb38) list_notif_wgt_row_pane_g1_ParamLimits

0xed92,	// (0x0006cb44) list_notif_wgt_row_pane_g2_ParamLimits

0xeda6,	// (0x0006cb58) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0006dc54) list_notif_wgt_row_pane_g_ParamLimits

0xedb3,	// (0x0006cb65) list_notif_wgt_row_pane_t1_ParamLimits

0xedc9,	// (0x0006cb7b) list_notif_wgt_row_pane_t2_ParamLimits

0xeddb,	// (0x0006cb8d) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0006dc5b) list_notif_wgt_row_pane_t_ParamLimits

0x9590,	// (0x00067342) listrow_wgtman_pane_g1_ParamLimits

0x959d,	// (0x0006734f) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0006dc84) listrow_wgtman_pane_g_ParamLimits

0x95bb,	// (0x0006736d) listrow_wgtman_pane_t1_ParamLimits

0x95d3,	// (0x00067385) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0006dc89) listrow_wgtman_pane_t_ParamLimits

0x95f9,	// (0x000673ab) wait_bar_pane_cp09_ParamLimits

0x9c32,	// (0x000679e4) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0006ce58) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0006ce60) popup_notif_wgt_heading_pane_t1

0x9c32,	// (0x000679e4) main_vids_pane

0x9c32,	// (0x000679e4) vids_listscroll_pane

0x9bc7,	// (0x00067979) scroll_pane_cp040

0x9c32,	// (0x000679e4) vids_list_pane

0x9bd2,	// (0x00067984) vids_list_double_pane_ParamLimits

0x9bd2,	// (0x00067984) vids_list_double_pane

0x9be5,	// (0x00067997) vids_list_double_pane_g1

0x9bee,	// (0x000679a0) vids_list_double_pane_t1

0x9bfe,	// (0x000679b0) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0006dd0d) vids_list_double_pane_t

0xa2c9,	// (0x0006807b) main_ncimui_pane_ParamLimits

0x7f7a,	// (0x00065d2c) main_ncimui_pane_g1_ParamLimits

0x7f88,	// (0x00065d3a) main_ncimui_pane_g2_ParamLimits

0x7f88,	// (0x00065d3a) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0006d995) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0006d995) main_ncimui_pane_g

0x9b64,	// (0x00067916) main_welc_pane_g1_ParamLimits

0x9b64,	// (0x00067916) main_welc_pane_g1

0x9b70,	// (0x00067922) main_welc_pane_g2_ParamLimits

0x9b70,	// (0x00067922) main_welc_pane_g2

0x0001,

0xff56,	// (0x0006dd08) main_welc_pane_g_ParamLimits

0xff56,	// (0x0006dd08) main_welc_pane_g

0xa804,	// (0x000685b6) listscroll_mce_pane_ParamLimits

0x3747,	// (0x000614f9) wait_bar_pane_cp10

0xc811,	// (0x0006a5c3) main_cale_day_pane_ParamLimits

0xc811,	// (0x0006a5c3) main_cale_week_pane_ParamLimits

0xa804,	// (0x000685b6) main_messa_pane_ParamLimits

0x57cb,	// (0x0006357d) main_clock2_btn_pane_ParamLimits

0x57cb,	// (0x0006357d) main_clock2_btn_pane

0xd026,	// (0x0006add8) main_clock2_btn_pane_cp01_ParamLimits

0xd026,	// (0x0006add8) main_clock2_btn_pane_cp01

0xe9dd,	// (0x0006c78f) list_cale_mrui_pane_ParamLimits

0xee1f,	// (0x0006cbd1) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0006dc62) main_cf0_pane_g

0x9788,	// (0x0006753a) area_left_week_number_pane_ParamLimits

0x979b,	// (0x0006754d) area_top_day_name_pane_ParamLimits

0x97a9,	// (0x0006755b) frame_month_view_pane_ParamLimits

0xef47,	// (0x0006ccf9) grid_month_view_pane_ParamLimits

0xef55,	// (0x0006cd07) frm_month_g1_ParamLimits

0x9827,	// (0x000675d9) frm_month_g2_ParamLimits

0x9838,	// (0x000675ea) frm_month_g3_ParamLimits

0x9849,	// (0x000675fb) frm_month_g4_ParamLimits

0x985a,	// (0x0006760c) frm_month_g5_ParamLimits

0x986b,	// (0x0006761d) frm_month_g6_ParamLimits

0x987e,	// (0x00067630) frm_month_g7_ParamLimits

0xef62,	// (0x0006cd14) frm_month_g8_ParamLimits

0x9891,	// (0x00067643) frm_month_g9_ParamLimits

0x989e,	// (0x00067650) frm_month_g10_ParamLimits

0x98ab,	// (0x0006765d) frm_month_g11_ParamLimits

0x98b8,	// (0x0006766a) frm_month_g12_ParamLimits

0x98c5,	// (0x00067677) frm_month_g13_ParamLimits

0x98d4,	// (0x00067686) frm_month_g14_ParamLimits

0x98e3,	// (0x00067695) frm_month_g15_ParamLimits

0x98f2,	// (0x000676a4) frm_month_g16_ParamLimits

0xff01,	// (0x0006dcb3) frm_month_g_ParamLimits

0xef6f,	// (0x0006cd21) cell_top_day_name_pane_t1_ParamLimits

0x9901,	// (0x000676b3) cell_area_left_week_number_pane_g1_ParamLimits

0x9910,	// (0x000676c2) cell_area_left_week_number_pane_t1_ParamLimits

0xce9e,	// (0x0006ac50) cell_month_view_pane_g1_ParamLimits

0x9926,	// (0x000676d8) cell_month_view_pane_t1_ParamLimits

0xa7fc,	// (0x000685ae) main_clock2_btn_pane_g1

0xf0bc,	// (0x0006ce6e) main_clock2_btn_pane_t1

0xa2c9,	// (0x0006807b) listscroll_cmail_pane_ParamLimits

0xe767,	// (0x0006c519) main_sp_fs_email_pane_g1_ParamLimits

0xe773,	// (0x0006c525) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0006da90) main_sp_fs_email_pane_g_ParamLimits

0xeae9,	// (0x0006c89b) list_recal_day_pane_ParamLimits

0xeafa,	// (0x0006c8ac) mian_recal_day_pane_t1

0x8961,	// (0x00066713) list_single_dyc_row_text_pane_t4_ParamLimits

0x8961,	// (0x00066713) list_single_dyc_row_text_pane_t4

0x899e,	// (0x00066750) list_single_dyc_row_text_pane_t5_ParamLimits

0x899e,	// (0x00066750) list_single_dyc_row_text_pane_t5

0xa4c0,	// (0x00068272) list_single_dyc_row_text_pane_t6_ParamLimits

0xa4c0,	// (0x00068272) list_single_dyc_row_text_pane_t6

0xae6f,	// (0x00068c21) aid_mgn_list_cale_time_pane

0xa2c9,	// (0x0006807b) main_gallery2_pane_ParamLimits

0xd03a,	// (0x0006adec) main_clock2_pane_cp01_t1

0xd04a,	// (0x0006adfc) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0006d576) main_clock2_pane_cp01_t

0x166b,	// (0x0005f41d) cale_week_scroll_pane_g16_ParamLimits

0x166b,	// (0x0005f41d) cale_week_scroll_pane_g16

0xaa7f,	// (0x00068831) vorec_slider_pane
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small

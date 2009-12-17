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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005f459 };

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
0x58b7,	// (0x00064d10) Screen

0x58c3,	// (0x00064d1c) application_window

0x590b,	// (0x00064d64) area_bottom_pane_ParamLimits

0x590b,	// (0x00064d64) area_bottom_pane

0x5940,	// (0x00064d99) area_top_pane_ParamLimits

0x5940,	// (0x00064d99) area_top_pane

0x0469,	// (0x0005f8c2) call_video_uplink_pane_ParamLimits

0x0469,	// (0x0005f8c2) call_video_uplink_pane

0x59ce,	// (0x00064e27) main_pane_ParamLimits

0x59ce,	// (0x00064e27) main_pane

0xf08e,	// (0x0006e4e7) context_pane

0x9e1b,	// (0x00069274) navi_pane

0x9e3b,	// (0x00069294) popup_cale_events_window_ParamLimits

0x9e3b,	// (0x00069294) popup_cale_events_window

0xf0a1,	// (0x0006e4fa) popup_mup_playback_window

0x9e53,	// (0x000692ac) signal_pane

0x600e,	// (0x00065467) main_browser_pane

0x865b,	// (0x00067ab4) main_burst_pane

0x9cf1,	// (0x0006914a) main_calc_pane

0x865b,	// (0x00067ab4) main_cale_day_pane

0x600e,	// (0x00065467) main_cale_month_pane

0x865b,	// (0x00067ab4) main_cale_week_pane

0x865b,	// (0x00067ab4) main_call_pane

0x0898,	// (0x0005fcf1) main_call_poc_pane

0x865b,	// (0x00067ab4) main_camera_pane

0x865b,	// (0x00067ab4) main_chi_dic_pane

0x8205,	// (0x0006765e) main_clock_pane

0x0898,	// (0x0005fcf1) main_fmradio_pane

0x865b,	// (0x00067ab4) main_graph_messa_pane

0x0898,	// (0x0005fcf1) main_help_pane

0x600e,	// (0x00065467) main_im_pane

0x5c76,	// (0x000650cf) main_image_pane_ParamLimits

0x5c76,	// (0x000650cf) main_image_pane

0x0898,	// (0x0005fcf1) main_location2_pane

0x865b,	// (0x00067ab4) main_location_pane

0x0898,	// (0x0005fcf1) main_messa_pane

0x0898,	// (0x0005fcf1) main_mp2_pane

0x865b,	// (0x00067ab4) main_mp_pane

0x0898,	// (0x0005fcf1) main_msg_pane

0x0898,	// (0x0005fcf1) main_mup_eq_pane

0x0898,	// (0x0005fcf1) main_mup_pane

0x865b,	// (0x00067ab4) main_notes_pane

0x0898,	// (0x0005fcf1) main_pec_pane

0x0898,	// (0x0005fcf1) main_phob_pane

0x0898,	// (0x0005fcf1) main_pinb_pane

0x0898,	// (0x0005fcf1) main_postcard_pane

0x0898,	// (0x0005fcf1) main_qdial_pane

0x865b,	// (0x00067ab4) main_skin_pane

0x0898,	// (0x0005fcf1) main_smil2_pane

0x865b,	// (0x00067ab4) main_smil_pane

0x865b,	// (0x00067ab4) main_video_pane

0x865b,	// (0x00067ab4) main_video_tele_pane

0x5c76,	// (0x000650cf) main_viewer_pane_ParamLimits

0x5c76,	// (0x000650cf) main_viewer_pane

0x865b,	// (0x00067ab4) main_vorec_pane

0x9d27,	// (0x00069180) popup_blid_sat_info_window_ParamLimits

0x9d27,	// (0x00069180) popup_blid_sat_info_window

0x9d3d,	// (0x00069196) popup_dyc_status_message_window_ParamLimits

0x9d3d,	// (0x00069196) popup_dyc_status_message_window

0x9d4b,	// (0x000691a4) popup_grid_large_graphic_window_ParamLimits

0x9d4b,	// (0x000691a4) popup_grid_large_graphic_window

0x9dbf,	// (0x00069218) popup_loc_request_window_ParamLimits

0x9dbf,	// (0x00069218) popup_loc_request_window

0x9df3,	// (0x0006924c) popup_wml_address_window_ParamLimits

0x9df3,	// (0x0006924c) popup_wml_address_window

0x9bc9,	// (0x00069022) call_muted_g1

0x92b7,	// (0x00068710) popup_call_audio_conf_window_ParamLimits

0x92b7,	// (0x00068710) popup_call_audio_conf_window

0x9bd9,	// (0x00069032) popup_call_audio_first_window_ParamLimits

0x9bd9,	// (0x00069032) popup_call_audio_first_window

0x9c19,	// (0x00069072) popup_call_audio_in_window_ParamLimits

0x9c19,	// (0x00069072) popup_call_audio_in_window

0x9c3d,	// (0x00069096) popup_call_audio_out_window_ParamLimits

0x9c3d,	// (0x00069096) popup_call_audio_out_window

0x9c5f,	// (0x000690b8) popup_call_audio_second_window_ParamLimits

0x9c5f,	// (0x000690b8) popup_call_audio_second_window

0x9c8f,	// (0x000690e8) popup_call_audio_wait_window_ParamLimits

0x9c8f,	// (0x000690e8) popup_call_audio_wait_window

0x9cb0,	// (0x00069109) popup_number_entry_window_ParamLimits

0x9cb0,	// (0x00069109) popup_number_entry_window

0x0487,	// (0x0005f8e0) bg_popup_call_pane_cp05_ParamLimits

0x0487,	// (0x0005f8e0) bg_popup_call_pane_cp05

0x04a7,	// (0x0005f900) popup_number_entry_window_t1

0x04ba,	// (0x0005f913) popup_number_entry_window_t2

0x04cc,	// (0x0005f925) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0006e588) popup_number_entry_window_t

0x04de,	// (0x0005f937) text_title_cp2

0x04f1,	// (0x0005f94a) bg_popup_call_pane_cp_ParamLimits

0x04f1,	// (0x0005f94a) bg_popup_call_pane_cp

0x04ff,	// (0x0005f958) call_thumbnail_pane

0x0507,	// (0x0005f960) popup_call_audio_in_window_g1_ParamLimits

0x0507,	// (0x0005f960) popup_call_audio_in_window_g1

0x0513,	// (0x0005f96c) popup_call_audio_in_window_g2_ParamLimits

0x0513,	// (0x0005f96c) popup_call_audio_in_window_g2

0x051f,	// (0x0005f978) popup_call_audio_in_window_g3_ParamLimits

0x051f,	// (0x0005f978) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0006e591) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0006e591) popup_call_audio_in_window_g

0x052b,	// (0x0005f984) popup_call_audio_in_window_t1_ParamLimits

0x052b,	// (0x0005f984) popup_call_audio_in_window_t1

0x0546,	// (0x0005f99f) popup_call_audio_in_window_t2_ParamLimits

0x0546,	// (0x0005f99f) popup_call_audio_in_window_t2

0x0561,	// (0x0005f9ba) popup_call_audio_in_window_t3_ParamLimits

0x0561,	// (0x0005f9ba) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0006e598) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0006e598) popup_call_audio_in_window_t

0x04f1,	// (0x0005f94a) bg_popup_call_pane_cp01_ParamLimits

0x04f1,	// (0x0005f94a) bg_popup_call_pane_cp01

0x04ff,	// (0x0005f958) call_thumbnail_pane_cp02

0x0574,	// (0x0005f9cd) call_type_pane_cp022

0x057c,	// (0x0005f9d5) popup_call_audio_out_window_g1_ParamLimits

0x057c,	// (0x0005f9d5) popup_call_audio_out_window_g1

0x058e,	// (0x0005f9e7) popup_call_audio_out_window_g2_ParamLimits

0x058e,	// (0x0005f9e7) popup_call_audio_out_window_g2

0x059a,	// (0x0005f9f3) popup_call_audio_out_window_g3_ParamLimits

0x059a,	// (0x0005f9f3) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0006e59f) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0006e59f) popup_call_audio_out_window_g

0x05ac,	// (0x0005fa05) popup_call_audio_out_window_t1_ParamLimits

0x05ac,	// (0x0005fa05) popup_call_audio_out_window_t1

0x05c4,	// (0x0005fa1d) popup_call_audio_out_window_t2_ParamLimits

0x05c4,	// (0x0005fa1d) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0006e5a6) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0006e5a6) popup_call_audio_out_window_t

0x05d9,	// (0x0005fa32) bg_popup_call_pane_ParamLimits

0x05d9,	// (0x0005fa32) bg_popup_call_pane

0x5bc8,	// (0x00065021) call_thumbnail_pane_cp_ParamLimits

0x5bc8,	// (0x00065021) call_thumbnail_pane_cp

0x065d,	// (0x0005fab6) call_type_pane_cp01_ParamLimits

0x065d,	// (0x0005fab6) call_type_pane_cp01

0x06a1,	// (0x0005fafa) popup_call_audio_first_window_g1_ParamLimits

0x06a1,	// (0x0005fafa) popup_call_audio_first_window_g1

0x06ed,	// (0x0005fb46) popup_call_audio_first_window_g2_ParamLimits

0x06ed,	// (0x0005fb46) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0006e5ab) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0006e5ab) popup_call_audio_first_window_g

0x0731,	// (0x0005fb8a) popup_call_audio_first_window_t1_ParamLimits

0x0731,	// (0x0005fb8a) popup_call_audio_first_window_t1

0x07dd,	// (0x0005fc36) popup_call_audio_first_window_t4_ParamLimits

0x07dd,	// (0x0005fc36) popup_call_audio_first_window_t4

0x0869,	// (0x0005fcc2) popup_call_audio_first_window_t5_ParamLimits

0x0869,	// (0x0005fcc2) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0006e5b0) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0006e5b0) popup_call_audio_first_window_t

0x0898,	// (0x0005fcf1) bg_popup_call_pane_cp02

0x08a2,	// (0x0005fcfb) call_type_pane_cp023

0x08aa,	// (0x0005fd03) popup_call_audio_wait_window_g1

0x08b2,	// (0x0005fd0b) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0006e5b7) popup_call_audio_wait_window_g

0x08ba,	// (0x0005fd13) popup_call_audio_wait_window_t3

0x08c8,	// (0x0005fd21) bg_popup_call_pane_cp03_ParamLimits

0x08c8,	// (0x0005fd21) bg_popup_call_pane_cp03

0x0928,	// (0x0005fd81) call_thumbnail_pane_cp011_ParamLimits

0x0928,	// (0x0005fd81) call_thumbnail_pane_cp011

0x0934,	// (0x0005fd8d) call_type_pane_cp034_ParamLimits

0x0934,	// (0x0005fd8d) call_type_pane_cp034

0x0970,	// (0x0005fdc9) popup_call_audio_second_window_g1_ParamLimits

0x0970,	// (0x0005fdc9) popup_call_audio_second_window_g1

0x09ac,	// (0x0005fe05) popup_call_audio_second_window_g2_ParamLimits

0x09ac,	// (0x0005fe05) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0006e5bc) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0006e5bc) popup_call_audio_second_window_g

0x09e8,	// (0x0005fe41) popup_call_audio_second_window_t1_ParamLimits

0x09e8,	// (0x0005fe41) popup_call_audio_second_window_t1

0x5bec,	// (0x00065045) popup_call_audio_second_window_t2_ParamLimits

0x5bec,	// (0x00065045) popup_call_audio_second_window_t2

0x5c22,	// (0x0006507b) popup_call_audio_second_window_t3_ParamLimits

0x5c22,	// (0x0006507b) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0006e5c1) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0006e5c1) popup_call_audio_second_window_t

0x0898,	// (0x0005fcf1) bg_popup_call_pane_cp04

0x5c58,	// (0x000650b1) list_conf_pane

0x5c60,	// (0x000650b9) popup_call_audio_conf_window_t1

0x5c6e,	// (0x000650c7) call_thumbnail_pane_g1

0x5c76,	// (0x000650cf) bg_pinb_pane_ParamLimits

0x5c76,	// (0x000650cf) bg_pinb_pane

0x5c84,	// (0x000650dd) find_pinb_pane

0x5c8d,	// (0x000650e6) listscroll_pinb_pane_ParamLimits

0x5c8d,	// (0x000650e6) listscroll_pinb_pane

0x5c9c,	// (0x000650f5) pinb_bg_pane_g1

0x5ca6,	// (0x000650ff) pinb_bg_pane_g2

0x5cb2,	// (0x0006510b) pinb_bg_pane_g3

0x5cbe,	// (0x00065117) pinb_bg_pane_g4

0x5cca,	// (0x00065123) pinb_bg_pane_g5

0x5cd6,	// (0x0006512f) pinb_bg_pane_g6

0x5ce1,	// (0x0006513a) pinb_bg_pane_g7

0x5cec,	// (0x00065145) pinb_bg_pane_g8

0x5cf7,	// (0x00065150) pinb_bg_pane_g9

0x5d01,	// (0x0006515a) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0006e5c8) pinb_bg_pane_g

0x5d1e,	// (0x00065177) grid_pinb_pane

0x5d29,	// (0x00065182) list_pinb_pane

0x5d34,	// (0x0006518d) scroll_pane_cp01_ParamLimits

0x5d34,	// (0x0006518d) scroll_pane_cp01

0x5d46,	// (0x0006519f) find_pinb_pane_g1_ParamLimits

0x5d46,	// (0x0006519f) find_pinb_pane_g1

0x5d5e,	// (0x000651b7) find_pinb_pane_t1

0x5d70,	// (0x000651c9) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0006e5e2) find_pinb_pane_t

0x5d85,	// (0x000651de) input_focus_pane_cp01_ParamLimits

0x5d85,	// (0x000651de) input_focus_pane_cp01

0x5d91,	// (0x000651ea) cell_pinb_pane_ParamLimits

0x5d91,	// (0x000651ea) cell_pinb_pane

0x5dbf,	// (0x00065218) cell_pinb_pane_g1_ParamLimits

0x5dbf,	// (0x00065218) cell_pinb_pane_g1

0x5dd4,	// (0x0006522d) cell_pinb_pane_g2_ParamLimits

0x5dd4,	// (0x0006522d) cell_pinb_pane_g2

0x5de0,	// (0x00065239) cell_pinb_pane_g3_ParamLimits

0x5de0,	// (0x00065239) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0006e5e7) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0006e5e7) cell_pinb_pane_g

0x0898,	// (0x0005fcf1) grid_highlight_pane_cp01

0x5dec,	// (0x00065245) list_pinb_item_pane_ParamLimits

0x5dec,	// (0x00065245) list_pinb_item_pane

0x0898,	// (0x0005fcf1) list_highlight_pane_cp02

0x5e16,	// (0x0006526f) list_pinb_item_pane_g1_ParamLimits

0x5e16,	// (0x0006526f) list_pinb_item_pane_g1

0x5e23,	// (0x0006527c) list_pinb_item_pane_g2_ParamLimits

0x5e23,	// (0x0006527c) list_pinb_item_pane_g2

0x5e2f,	// (0x00065288) list_pinb_item_pane_g3_ParamLimits

0x5e2f,	// (0x00065288) list_pinb_item_pane_g3

0x5e40,	// (0x00065299) list_pinb_item_pane_g4_ParamLimits

0x5e40,	// (0x00065299) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0006e5ee) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0006e5ee) list_pinb_item_pane_g

0x5e4c,	// (0x000652a5) list_pinb_item_pane_t1_ParamLimits

0x5e4c,	// (0x000652a5) list_pinb_item_pane_t1

0x5e7d,	// (0x000652d6) calc_display_pane

0x5e9b,	// (0x000652f4) calc_paper_pane

0x5eb7,	// (0x00065310) grid_calc_pane

0x0898,	// (0x0005fcf1) bg_list_pane_cp01

0x5ee3,	// (0x0006533c) clock_g1

0x5eeb,	// (0x00065344) clock_g2

0x0001,

0xf19e,	// (0x0006e5f7) clock_g

0x5ef5,	// (0x0006534e) clock_t1_ParamLimits

0x5ef5,	// (0x0006534e) clock_t1

0x5f0a,	// (0x00065363) clock_t2_ParamLimits

0x5f0a,	// (0x00065363) clock_t2

0x5f1c,	// (0x00065375) clock_t3_ParamLimits

0x5f1c,	// (0x00065375) clock_t3

0x5f2e,	// (0x00065387) clock_t4_ParamLimits

0x5f2e,	// (0x00065387) clock_t4

0x5f40,	// (0x00065399) clock_t5_ParamLimits

0x5f40,	// (0x00065399) clock_t5

0x5f55,	// (0x000653ae) clock_t6_ParamLimits

0x5f55,	// (0x000653ae) clock_t6

0x5f67,	// (0x000653c0) clock_t7_ParamLimits

0x5f67,	// (0x000653c0) clock_t7

0x5f79,	// (0x000653d2) clock_t8_ParamLimits

0x5f79,	// (0x000653d2) clock_t8

0x5f8f,	// (0x000653e8) clock_t9_ParamLimits

0x5f8f,	// (0x000653e8) clock_t9

0x0008,

0xf1a3,	// (0x0006e5fc) clock_t_ParamLimits

0xf1a3,	// (0x0006e5fc) clock_t

0x5fa5,	// (0x000653fe) popup_clock_analogue_window_cp02

0x5fa5,	// (0x000653fe) popup_clock_digital_window_cp01

0x5fad,	// (0x00065406) listscroll_help_pane

0x0898,	// (0x0005fcf1) phob_pre_status_pane

0x5fb7,	// (0x00065410) grid_qdial_pane

0x0898,	// (0x0005fcf1) listscroll_mce_pane

0x5fc1,	// (0x0006541a) bg_notes_pane

0x5fcb,	// (0x00065424) list_notes_pane

0x5fd5,	// (0x0006542e) scroll_pane_cp06

0x5fe0,	// (0x00065439) bg_calc_paper_pane

0x5ff4,	// (0x0006544d) list_calc_pane

0x600e,	// (0x00065467) bg_calc_display_pane

0x601a,	// (0x00065473) calc_display_pane_t1

0x602f,	// (0x00065488) calc_display_pane_t2

0x6044,	// (0x0006549d) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0006e60f) calc_display_pane_t

0x6056,	// (0x000654af) cell_calc_pane_ParamLimits

0x6056,	// (0x000654af) cell_calc_pane

0x6083,	// (0x000654dc) bg_calc_paper_pane_g1

0x608f,	// (0x000654e8) bg_calc_paper_pane_g2

0x609b,	// (0x000654f4) bg_calc_paper_pane_g3

0x60a7,	// (0x00065500) bg_calc_paper_pane_g4

0x60b3,	// (0x0006550c) bg_calc_paper_pane_g5

0x60bf,	// (0x00065518) bg_calc_paper_pane_g6

0x60d0,	// (0x00065529) bg_calc_paper_pane_g7

0x60e1,	// (0x0006553a) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0006e616) bg_calc_paper_pane_g

0x60f2,	// (0x0006554b) calc_bg_paper_pane_g9

0x6103,	// (0x0006555c) list_calc_item_pane_ParamLimits

0x6103,	// (0x0006555c) list_calc_item_pane

0x613d,	// (0x00065596) list_calc_item_pane_g1

0x614a,	// (0x000655a3) list_calc_item_pane_t1_ParamLimits

0x614a,	// (0x000655a3) list_calc_item_pane_t1

0x615c,	// (0x000655b5) list_calc_item_pane_t2_ParamLimits

0x615c,	// (0x000655b5) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0006e627) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0006e627) list_calc_item_pane_t

0x6174,	// (0x000655cd) cell_calc_pane_g1

0x6196,	// (0x000655ef) grid_highlight_pane_cp02

0x61b8,	// (0x00065611) bg_calc_display_pane_g1

0x61c1,	// (0x0006561a) bg_calc_display_pane_g2

0x61cb,	// (0x00065624) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0006e631) bg_calc_display_pane_g

0x61d4,	// (0x0006562d) cell_qdial_pane_ParamLimits

0x61d4,	// (0x0006562d) cell_qdial_pane

0x61e8,	// (0x00065641) cell_qdial_pane_g1_ParamLimits

0x61e8,	// (0x00065641) cell_qdial_pane_g1

0x61f5,	// (0x0006564e) cell_qdial_pane_g2_ParamLimits

0x61f5,	// (0x0006564e) cell_qdial_pane_g2

0x6206,	// (0x0006565f) cell_qdial_pane_g3_ParamLimits

0x6206,	// (0x0006565f) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0006e638) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0006e638) cell_qdial_pane_g

0x621f,	// (0x00065678) cell_qdial_pane_t1_ParamLimits

0x621f,	// (0x00065678) cell_qdial_pane_t1

0x6237,	// (0x00065690) cell_qdial_pane_t2_ParamLimits

0x6237,	// (0x00065690) cell_qdial_pane_t2

0x624a,	// (0x000656a3) cell_qdial_pane_t3_ParamLimits

0x624a,	// (0x000656a3) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0006e641) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0006e641) cell_qdial_pane_t

0x0898,	// (0x0005fcf1) grid_highlight_pane_cp04

0x625d,	// (0x000656b6) thumbnail_qdial_pane_ParamLimits

0x625d,	// (0x000656b6) thumbnail_qdial_pane

0x62b9,	// (0x00065712) list_help_pane

0x62c2,	// (0x0006571b) scroll_pane_cp02

0x62cb,	// (0x00065724) help_list_pane_t1_ParamLimits

0x62cb,	// (0x00065724) help_list_pane_t1

0x6309,	// (0x00065762) bg_notes_pane_g2

0x6311,	// (0x0006576a) bg_notes_pane_g3

0x6319,	// (0x00065772) notes_bg_pane_g1

0x6321,	// (0x0006577a) notes_bg_pane_g4

0x6329,	// (0x00065782) notes_bg_pane_g5

0x6331,	// (0x0006578a) notes_bg_pane_g6

0x6339,	// (0x00065792) notes_bg_pane_g7

0x6341,	// (0x0006579a) notes_bg_pane_g8

0x6349,	// (0x000657a2) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0006e65f) notes_bg_pane_g

0x6351,	// (0x000657aa) list_notes_text_pane_ParamLimits

0x6351,	// (0x000657aa) list_notes_text_pane

0x6381,	// (0x000657da) list_notes_text_pane_g1

0x48f5,	// (0x00063d4e) list_notes_text_pane_t1

0x600e,	// (0x00065467) listscroll_cale_week_pane

0x63b8,	// (0x00065811) bg_cale_heading_pane

0x63cc,	// (0x00065825) bg_cale_pane_cp01

0x63e5,	// (0x0006583e) cale_week_corner_pane

0x63f6,	// (0x0006584f) cale_week_day_heading_pane

0x640a,	// (0x00065863) cale_week_scroll_pane_g1

0x641b,	// (0x00065874) cale_week_scroll_pane_g2

0x642c,	// (0x00065885) cale_week_scroll_pane_g3

0x643d,	// (0x00065896) cale_week_scroll_pane_g4

0x644e,	// (0x000658a7) cale_week_scroll_pane_g5

0x645f,	// (0x000658b8) cale_week_scroll_pane_g6

0x6470,	// (0x000658c9) cale_week_scroll_pane_g7

0x6483,	// (0x000658dc) cale_week_scroll_pane_g8

0x6496,	// (0x000658ef) cale_week_scroll_pane_g9

0x64a7,	// (0x00065900) cale_week_scroll_pane_g10

0x64b8,	// (0x00065911) cale_week_scroll_pane_g11

0x64c9,	// (0x00065922) cale_week_scroll_pane_g12

0x64da,	// (0x00065933) cale_week_scroll_pane_g13

0x64eb,	// (0x00065944) cale_week_scroll_pane_g14

0x64fc,	// (0x00065955) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0006e66e) cale_week_scroll_pane_g

0x650d,	// (0x00065966) cale_week_time_pane

0x6520,	// (0x00065979) grid_cale_week_pane

0x6547,	// (0x000659a0) scroll_pane_cp08

0x6561,	// (0x000659ba) cell_cale_week_pane_ParamLimits

0x6561,	// (0x000659ba) cell_cale_week_pane

0x659d,	// (0x000659f6) cale_week_day_heading_pane_t1

0x65b1,	// (0x00065a0a) cale_week_day_heading_pane_t2

0x65c5,	// (0x00065a1e) cale_week_day_heading_pane_t3

0x65d9,	// (0x00065a32) cale_week_day_heading_pane_t4

0x65ed,	// (0x00065a46) cale_week_day_heading_pane_t5

0x6601,	// (0x00065a5a) cale_week_day_heading_pane_t6

0x6615,	// (0x00065a6e) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0006e68d) cale_week_day_heading_pane_t

0x6629,	// (0x00065a82) bg_cale_side_pane

0x6637,	// (0x00065a90) cale_week_time_pane_t1

0x664f,	// (0x00065aa8) cale_week_time_pane_t2

0x6667,	// (0x00065ac0) cale_week_time_pane_t3

0x667f,	// (0x00065ad8) cale_week_time_pane_t4

0x6697,	// (0x00065af0) cale_week_time_pane_t5

0x66af,	// (0x00065b08) cale_week_time_pane_t6

0x66c7,	// (0x00065b20) cale_week_time_pane_t7

0x66df,	// (0x00065b38) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0006e69c) cale_week_time_pane_t

0x66f7,	// (0x00065b50) cell_cale_week_pane_g2

0x6710,	// (0x00065b69) cell_cale_week_pane_g3_ParamLimits

0x6710,	// (0x00065b69) cell_cale_week_pane_g3

0x6728,	// (0x00065b81) grid_highlight_pane_cp07

0x6730,	// (0x00065b89) listscroll_gms_pane

0x673a,	// (0x00065b93) grid_gms_pane

0x6743,	// (0x00065b9c) listscroll_gms_pane_g1

0x674b,	// (0x00065ba4) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0006e6ad) listscroll_gms_pane_g

0x6753,	// (0x00065bac) scroll_pane_cp010

0x675e,	// (0x00065bb7) cell_gms_pane_ParamLimits

0x675e,	// (0x00065bb7) cell_gms_pane

0x6770,	// (0x00065bc9) cell_gms_pane_g1

0x6778,	// (0x00065bd1) cell_gms_pane_g2

0x6381,	// (0x000657da) cell_gms_pane_g3

0x6780,	// (0x00065bd9) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0006e6b2) cell_gms_pane_g

0x6789,	// (0x00065be2) grid_highlight_pane_cp09

0x9b71,	// (0x00068fca) phob_pre_status_pane_g1

0x9b79,	// (0x00068fd2) phob_pre_status_pane_g2

0x9b81,	// (0x00068fda) phob_pre_status_pane_g3

0x9b89,	// (0x00068fe2) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0006eaa1) phob_pre_status_pane_g

0x9b99,	// (0x00068ff2) phob_pre_status_pane_t1

0x9ba9,	// (0x00069002) phob_pre_status_pane_t2

0x9bb9,	// (0x00069012) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0006eaac) phob_pre_status_pane_t

0x0898,	// (0x0005fcf1) bg_list_pane_cp05

0x6799,	// (0x00065bf2) grid_vorec_pane

0x67a1,	// (0x00065bfa) vorec_t1

0x67af,	// (0x00065c08) vorec_t2

0x67bd,	// (0x00065c16) vorec_t3

0x67cb,	// (0x00065c24) vorec_t4

0x67d9,	// (0x00065c32) vorec_t5

0x67e7,	// (0x00065c40) vorec_t6

0x0006,

0xf262,	// (0x0006e6bb) vorec_t

0x6803,	// (0x00065c5c) wait_bar_pane_cp01

0x680b,	// (0x00065c64) cell_vorec_pane_ParamLimits

0x680b,	// (0x00065c64) cell_vorec_pane

0x681e,	// (0x00065c77) cell_vorec_pane_g1

0x0898,	// (0x0005fcf1) grid_highlight_pane_cp05

0x6838,	// (0x00065c91) cams_zoom_pane

0x6844,	// (0x00065c9d) image_vga_pane

0x6853,	// (0x00065cac) main_camera_pane_g1

0x6861,	// (0x00065cba) main_camera_pane_g2

0x686f,	// (0x00065cc8) main_camera_pane_g3

0x687b,	// (0x00065cd4) main_camera_pane_g4

0x6887,	// (0x00065ce0) main_camera_pane_g5

0x6893,	// (0x00065cec) main_camera_pane_g6

0x689f,	// (0x00065cf8) main_camera_pane_g7

0x0007,

0xf271,	// (0x0006e6ca) main_camera_pane_g

0x68b7,	// (0x00065d10) main_camera_pane_t1

0x68c9,	// (0x00065d22) main_camera_pane_t2

0x0001,

0xf282,	// (0x0006e6db) main_camera_pane_t

0x68ea,	// (0x00065d43) cams_zoom_pane_cp_ParamLimits

0x68ea,	// (0x00065d43) cams_zoom_pane_cp

0x690e,	// (0x00065d67) image_cif_pane_ParamLimits

0x690e,	// (0x00065d67) image_cif_pane

0x692c,	// (0x00065d85) image_subqcif_pane

0x6934,	// (0x00065d8d) main_video_pane_g1_ParamLimits

0x6934,	// (0x00065d8d) main_video_pane_g1

0x6954,	// (0x00065dad) main_video_pane_g2_ParamLimits

0x6954,	// (0x00065dad) main_video_pane_g2

0x6986,	// (0x00065ddf) main_video_pane_g3_ParamLimits

0x6986,	// (0x00065ddf) main_video_pane_g3

0x69b1,	// (0x00065e0a) main_video_pane_g4_ParamLimits

0x69b1,	// (0x00065e0a) main_video_pane_g4

0x69dc,	// (0x00065e35) main_video_pane_g5_ParamLimits

0x69dc,	// (0x00065e35) main_video_pane_g5

0x69f4,	// (0x00065e4d) main_video_pane_g6_ParamLimits

0x69f4,	// (0x00065e4d) main_video_pane_g6

0x0006,

0xf287,	// (0x0006e6e0) main_video_pane_g_ParamLimits

0xf287,	// (0x0006e6e0) main_video_pane_g

0x6a1a,	// (0x00065e73) main_video_pane_t1_ParamLimits

0x6a1a,	// (0x00065e73) main_video_pane_t1

0x6a58,	// (0x00065eb1) cams_zoom_pane_g1

0x6a61,	// (0x00065eba) cams_zoom_pane_g2

0x6a6a,	// (0x00065ec3) cams_zoom_pane_g3

0x6a73,	// (0x00065ecc) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0006e6ef) cams_zoom_pane_g

0x6a88,	// (0x00065ee1) grid_cams_pane

0x6a96,	// (0x00065eef) linegrid_cams_pane

0x6aa4,	// (0x00065efd) cell_cams_pane_ParamLimits

0x6aa4,	// (0x00065efd) cell_cams_pane

0x6ab7,	// (0x00065f10) cams_burst_image_pane

0x6abf,	// (0x00065f18) cell_cams_pane_g1

0x0898,	// (0x0005fcf1) grid_highlight_pane_cp03

0x6174,	// (0x000655cd) mp_bg_pane_g1

0x0898,	// (0x0005fcf1) bg_list_pane_cp03

0xef58,	// (0x0006e3b1) bg_mp_pane

0xef60,	// (0x0006e3b9) grid_mp_pane

0xef68,	// (0x0006e3c1) media_player_g1

0xef70,	// (0x0006e3c9) media_player_t1

0xef7e,	// (0x0006e3d7) media_player_t2

0xef8c,	// (0x0006e3e5) media_player_t3

0xef9a,	// (0x0006e3f3) media_player_t4

0xefa8,	// (0x0006e401) media_player_t5

0xefb6,	// (0x0006e40f) media_player_t6

0xefc4,	// (0x0006e41d) media_player_t7

0x0006,

0xf632,	// (0x0006ea8b) media_player_t

0xefd2,	// (0x0006e42b) wait_bar_pane_cp02

0xf617,	// (0x0006ea70) main_usb_pane_t

0x9b68,	// (0x00068fc1) cell_mp_pane

0x6174,	// (0x000655cd) cell_mp_pane_g1

0x0898,	// (0x0005fcf1) grid_highlight_pane_cp06

0x6ac7,	// (0x00065f20) grid_skin_colour_pane

0x6acf,	// (0x00065f28) list_highlight_pane_cp03

0x6ad7,	// (0x00065f30) skin_g1

0x6ae1,	// (0x00065f3a) skin_t1

0x6af0,	// (0x00065f49) skin_t2

0x0001,

0xf2cb,	// (0x0006e724) skin_t

0x6afe,	// (0x00065f57) cell_skin_colour_pane_ParamLimits

0x6afe,	// (0x00065f57) cell_skin_colour_pane

0x6b1a,	// (0x00065f73) cell_skin_colour_pane_g1

0x6b6f,	// (0x00065fc8) call_video_g1_ParamLimits

0x6b6f,	// (0x00065fc8) call_video_g1

0x6b7f,	// (0x00065fd8) call_video_g2_ParamLimits

0x6b7f,	// (0x00065fd8) call_video_g2

0x0001,

0xf2d0,	// (0x0006e729) call_video_g_ParamLimits

0xf2d0,	// (0x0006e729) call_video_g

0x6bbf,	// (0x00066018) call_video_uplink_pane_cp1_ParamLimits

0x6bbf,	// (0x00066018) call_video_uplink_pane_cp1

0x6c0b,	// (0x00066064) call_video_uplink_pane_cp2

0x6c73,	// (0x000660cc) video_down_crop_pane_ParamLimits

0x6c73,	// (0x000660cc) video_down_crop_pane

0x6d4b,	// (0x000661a4) video_down_pane_ParamLimits

0x6d4b,	// (0x000661a4) video_down_pane

0x6e2d,	// (0x00066286) video_down_subqcif_pane_ParamLimits

0x6e2d,	// (0x00066286) video_down_subqcif_pane

0x6e45,	// (0x0006629e) video_down_subqcif_pane_cp_ParamLimits

0x6e45,	// (0x0006629e) video_down_subqcif_pane_cp

0x6e69,	// (0x000662c2) im_reading_pane_ParamLimits

0x6e69,	// (0x000662c2) im_reading_pane

0x6e7b,	// (0x000662d4) im_writing_pane_ParamLimits

0x6e7b,	// (0x000662d4) im_writing_pane

0x6ea1,	// (0x000662fa) im_reading_pane_t1

0x6f01,	// (0x0006635a) list_im_pane

0x6f12,	// (0x0006636b) scroll_pane_cp07

0x6f2b,	// (0x00066384) im_writing_pane_t1_ParamLimits

0x6f2b,	// (0x00066384) im_writing_pane_t1

0x6f3d,	// (0x00066396) im_writing_pane_t2_ParamLimits

0x6f3d,	// (0x00066396) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0006e733) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0006e733) im_writing_pane_t

0x0898,	// (0x0005fcf1) input_focus_pane_cp04

0x0898,	// (0x0005fcf1) input_focus_pane_cp05

0x6f5a,	// (0x000663b3) list_im_single_pane_ParamLimits

0x6f5a,	// (0x000663b3) list_im_single_pane

0x6f86,	// (0x000663df) list_single_im_pane_t1

0x9b2c,	// (0x00068f85) blid_accuracy_pane

0x9b34,	// (0x00068f8d) blid_compass_pane

0x9b3e,	// (0x00068f97) main_location_t1

0x9b4c,	// (0x00068fa5) main_location_t2

0x9b5a,	// (0x00068fb3) main_location_t3

0x0002,

0xf641,	// (0x0006ea9a) main_location_t

0x0898,	// (0x0005fcf1) aid_levels_location

0x6174,	// (0x000655cd) blid_accuracy_pane_g1

0x6174,	// (0x000655cd) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0006e795) blid_accuracy_pane_g

0x6fc0,	// (0x00066419) wml_content_pane

0x6ffe,	// (0x00066457) wml_button_pane_ParamLimits

0x6ffe,	// (0x00066457) wml_button_pane

0x7012,	// (0x0006646b) wml_list_single_large_pane_ParamLimits

0x7012,	// (0x0006646b) wml_list_single_large_pane

0x7044,	// (0x0006649d) wml_list_single_medium_pane_ParamLimits

0x7044,	// (0x0006649d) wml_list_single_medium_pane

0x707d,	// (0x000664d6) wml_list_single_small_pane_ParamLimits

0x707d,	// (0x000664d6) wml_list_single_small_pane

0x70c5,	// (0x0006651e) wml_selection_box_pane_ParamLimits

0x70c5,	// (0x0006651e) wml_selection_box_pane

0x70d8,	// (0x00066531) wml_list_single_pane_t1

0x70e7,	// (0x00066540) wml_list_single_medium_pane_t1

0x70f6,	// (0x0006654f) wml_list_single_large_pane_t1

0x7105,	// (0x0006655e) input_focus_pane_cp02_ParamLimits

0x7105,	// (0x0006655e) input_focus_pane_cp02

0x7118,	// (0x00066571) wml_selection_box_pane_g1

0x7121,	// (0x0006657a) wml_selection_box_pane_t1_ParamLimits

0x7121,	// (0x0006657a) wml_selection_box_pane_t1

0x5c76,	// (0x000650cf) bg_wml_button_pane_ParamLimits

0x5c76,	// (0x000650cf) bg_wml_button_pane

0x7139,	// (0x00066592) wml_button_pane_g1

0x7141,	// (0x0006659a) wml_button_pane_t1

0x7139,	// (0x00066592) wml_button_bg_pane_g1

0x7151,	// (0x000665aa) wml_button_bg_pane_g2

0x7159,	// (0x000665b2) wml_button_bg_pane_g3

0x7161,	// (0x000665ba) wml_button_bg_pane_g4

0x7169,	// (0x000665c2) wml_button_bg_pane_g5

0x7171,	// (0x000665ca) wml_button_bg_pane_g6

0x7179,	// (0x000665d2) wml_button_bg_pane_g7

0x7181,	// (0x000665da) wml_button_bg_pane_g8

0x7189,	// (0x000665e2) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0006e738) wml_button_bg_pane_g

0x7191,	// (0x000665ea) bg_list_pane_cp02

0x719b,	// (0x000665f4) mce_header_pane_ParamLimits

0x719b,	// (0x000665f4) mce_header_pane

0x71b1,	// (0x0006660a) mce_icon_pane

0x71b1,	// (0x0006660a) mce_image_pane

0x71ba,	// (0x00066613) mce_text_pane_ParamLimits

0x71ba,	// (0x00066613) mce_text_pane

0x71cd,	// (0x00066626) scroll_pane_cp03

0x6ff6,	// (0x0006644f) scroll_pane_cp04

0x71d7,	// (0x00066630) scroll_pane_cp05_ParamLimits

0x71d7,	// (0x00066630) scroll_pane_cp05

0x71e3,	// (0x0006663c) mce_header_field_pane_ParamLimits

0x71e3,	// (0x0006663c) mce_header_field_pane

0x7203,	// (0x0006665c) mce_header_field_pane_2_ParamLimits

0x7203,	// (0x0006665c) mce_header_field_pane_2

0x7219,	// (0x00066672) mce_header_field_pane_3

0x7221,	// (0x0006667a) list_single_mce_message_pane_ParamLimits

0x7221,	// (0x0006667a) list_single_mce_message_pane

0x7251,	// (0x000666aa) list_single_mce_smart_pane_ParamLimits

0x7251,	// (0x000666aa) list_single_mce_smart_pane

0x728c,	// (0x000666e5) input_focus_pane_cp03

0x7295,	// (0x000666ee) list_header_data_pane

0x729d,	// (0x000666f6) mce_header_field_pane_t1

0x72ad,	// (0x00066706) list_single_mce_header_pane_ParamLimits

0x72ad,	// (0x00066706) list_single_mce_header_pane

0x72e1,	// (0x0006673a) list_single_mce_header_pane_t1

0x72f0,	// (0x00066749) list_single_mce_message_pane_g1

0x72f8,	// (0x00066751) list_single_mce_message_pane_t1

0x7324,	// (0x0006677d) bg_cale_heading_pane_cp01_ParamLimits

0x7324,	// (0x0006677d) bg_cale_heading_pane_cp01

0x7347,	// (0x000667a0) bg_cale_pane_cp02_ParamLimits

0x7347,	// (0x000667a0) bg_cale_pane_cp02

0x736a,	// (0x000667c3) cale_month_corner_pane

0x7380,	// (0x000667d9) cale_month_day_heading_pane_ParamLimits

0x7380,	// (0x000667d9) cale_month_day_heading_pane

0x73b3,	// (0x0006680c) cale_month_pane_g1_ParamLimits

0x73b3,	// (0x0006680c) cale_month_pane_g1

0x73cf,	// (0x00066828) cale_month_pane_g2_ParamLimits

0x73cf,	// (0x00066828) cale_month_pane_g2

0x73ea,	// (0x00066843) cale_month_pane_g3_ParamLimits

0x73ea,	// (0x00066843) cale_month_pane_g3

0x7416,	// (0x0006686f) cale_month_pane_g4_ParamLimits

0x7416,	// (0x0006686f) cale_month_pane_g4

0x7442,	// (0x0006689b) cale_month_pane_g5_ParamLimits

0x7442,	// (0x0006689b) cale_month_pane_g5

0x746e,	// (0x000668c7) cale_month_pane_g6_ParamLimits

0x746e,	// (0x000668c7) cale_month_pane_g6

0x749a,	// (0x000668f3) cale_month_pane_g7_ParamLimits

0x749a,	// (0x000668f3) cale_month_pane_g7

0x74d6,	// (0x0006692f) cale_month_pane_g8_ParamLimits

0x74d6,	// (0x0006692f) cale_month_pane_g8

0x7512,	// (0x0006696b) cale_month_pane_g9_ParamLimits

0x7512,	// (0x0006696b) cale_month_pane_g9

0x754c,	// (0x000669a5) cale_month_pane_g10_ParamLimits

0x754c,	// (0x000669a5) cale_month_pane_g10

0x7586,	// (0x000669df) cale_month_pane_g11_ParamLimits

0x7586,	// (0x000669df) cale_month_pane_g11

0x75c0,	// (0x00066a19) cale_month_pane_g12_ParamLimits

0x75c0,	// (0x00066a19) cale_month_pane_g12

0x75fa,	// (0x00066a53) cale_month_pane_g13_ParamLimits

0x75fa,	// (0x00066a53) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0006e74b) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0006e74b) cale_month_pane_g

0x7646,	// (0x00066a9f) cale_month_week_pane

0x7659,	// (0x00066ab2) grid_cale_month_pane_ParamLimits

0x7659,	// (0x00066ab2) grid_cale_month_pane

0x7687,	// (0x00066ae0) cale_month_day_heading_pane_t1

0x76e5,	// (0x00066b3e) cale_month_day_heading_pane_t2

0x774a,	// (0x00066ba3) cale_month_day_heading_pane_t3

0x77af,	// (0x00066c08) cale_month_day_heading_pane_t4

0x7814,	// (0x00066c6d) cale_month_day_heading_pane_t5

0x7879,	// (0x00066cd2) cale_month_day_heading_pane_t6

0x78e6,	// (0x00066d3f) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0006e766) cale_month_day_heading_pane_t

0x6629,	// (0x00065a82) bg_cale_side_pane_cp01

0x795b,	// (0x00066db4) cale_month_week_pane_t1

0x7972,	// (0x00066dcb) cale_month_week_pane_t2

0x7989,	// (0x00066de2) cale_month_week_pane_t3

0x79a0,	// (0x00066df9) cale_month_week_pane_t4

0x79b7,	// (0x00066e10) cale_month_week_pane_t5

0x79ce,	// (0x00066e27) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0006e775) cale_month_week_pane_t

0x79e5,	// (0x00066e3e) cell_cale_month_pane_ParamLimits

0x79e5,	// (0x00066e3e) cell_cale_month_pane

0x7a9b,	// (0x00066ef4) cell_cale_month_pane_g1

0x7aa7,	// (0x00066f00) cell_cale_month_pane_t1_ParamLimits

0x7aa7,	// (0x00066f00) cell_cale_month_pane_t1

0x6728,	// (0x00065b81) grid_highlight_pane_cp08

0x6174,	// (0x000655cd) main_smil_g1

0x7ac3,	// (0x00066f1c) smil_status_pane

0x7ace,	// (0x00066f27) smil_text_pane

0xee78,	// (0x0006e2d1) bg_popup_call3_rect_pane_g8

0xee80,	// (0x0006e2d9) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0006ea2e) bg_popup_call3_rect_pane_g

0x0ca3,	// (0x000600fc) smil_status_volume_pane_g1

0x7ae0,	// (0x00066f39) smil_status_pane_t1

0x9f10,	// (0x00069369) volume_smil_pane

0x7af7,	// (0x00066f50) list_smil_text_pane

0x7b01,	// (0x00066f5a) scroll_pane_cp011

0x7b0c,	// (0x00066f65) smil_text_list_pane_t1_ParamLimits

0x7b0c,	// (0x00066f65) smil_text_list_pane_t1

0x7bb7,	// (0x00067010) aid_volume_smil_ParamLimits

0x7bb7,	// (0x00067010) aid_volume_smil

0x6174,	// (0x000655cd) smil_volume_pane_g1

0x6174,	// (0x000655cd) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0006e795) smil_volume_pane_g

0x600e,	// (0x00065467) listscroll_cale_day_pane

0x7bd9,	// (0x00067032) bg_cale_pane

0x7bf1,	// (0x0006704a) list_cale_pane

0x7c02,	// (0x0006705b) scroll_pane_cp09

0x7c13,	// (0x0006706c) cale_bg_pane_g1

0x7c1b,	// (0x00067074) cale_bg_pane_g2

0x7c23,	// (0x0006707c) cale_bg_pane_g3

0x7c2b,	// (0x00067084) cale_bg_pane_g4

0x7c33,	// (0x0006708c) cale_bg_pane_g5

0x7c3b,	// (0x00067094) cale_bg_pane_g6

0x7c43,	// (0x0006709c) cale_bg_pane_g7

0x7c4b,	// (0x000670a4) cale_bg_pane_g8

0x7c53,	// (0x000670ac) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0006e79a) cale_bg_pane_g

0x7c5b,	// (0x000670b4) list_cale_time_pane_ParamLimits

0x7c5b,	// (0x000670b4) list_cale_time_pane

0x7c7c,	// (0x000670d5) list_cale_time_pane_g1_ParamLimits

0x7c7c,	// (0x000670d5) list_cale_time_pane_g1

0x7c88,	// (0x000670e1) list_cale_time_pane_g2_ParamLimits

0x7c88,	// (0x000670e1) list_cale_time_pane_g2

0x7c95,	// (0x000670ee) list_cale_time_pane_g3_ParamLimits

0x7c95,	// (0x000670ee) list_cale_time_pane_g3

0x7cb1,	// (0x0006710a) list_cale_time_pane_g4_ParamLimits

0x7cb1,	// (0x0006710a) list_cale_time_pane_g4

0x7cbf,	// (0x00067118) list_cale_time_pane_g5_ParamLimits

0x7cbf,	// (0x00067118) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0006e7ad) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0006e7ad) list_cale_time_pane_g

0x7cda,	// (0x00067133) list_cale_time_pane_t1_ParamLimits

0x7cda,	// (0x00067133) list_cale_time_pane_t1

0x7d02,	// (0x0006715b) list_cale_time_pane_t2_ParamLimits

0x7d02,	// (0x0006715b) list_cale_time_pane_t2

0x83fb,	// (0x00067854) aid_blid_cardinal_pane

0x8449,	// (0x000678a2) compass_pane_t4

0x7d2a,	// (0x00067183) list_cale_time_pane_t4_ParamLimits

0x7d2a,	// (0x00067183) list_cale_time_pane_t4

0x8457,	// (0x000678b0) compass_pane_t5

0x8467,	// (0x000678c0) compass_pane_t6

0x8475,	// (0x000678ce) compass_pane_t7

0x84f9,	// (0x00067952) navi_pane_cc_t1

0x8714,	// (0x00067b6d) aid_phob_thumbnail_center_pane

0x8d98,	// (0x000681f1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0006e7ba) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0006e7ba) list_cale_time_pane_t

0x04f1,	// (0x0005f94a) bg_popup_window_pane_cp02_ParamLimits

0x04f1,	// (0x0005f94a) bg_popup_window_pane_cp02

0x7d52,	// (0x000671ab) heading_pane_cp01_ParamLimits

0x7d52,	// (0x000671ab) heading_pane_cp01

0x7d5e,	// (0x000671b7) loc_req_pane_ParamLimits

0x7d5e,	// (0x000671b7) loc_req_pane

0x7d6e,	// (0x000671c7) loc_type_pane_ParamLimits

0x7d6e,	// (0x000671c7) loc_type_pane

0x7d80,	// (0x000671d9) loc_type_pane_t1_ParamLimits

0x7d80,	// (0x000671d9) loc_type_pane_t1

0x7d92,	// (0x000671eb) loc_type_pane_t2_ParamLimits

0x7d92,	// (0x000671eb) loc_type_pane_t2

0x7da4,	// (0x000671fd) loc_type_pane_t3_ParamLimits

0x7da4,	// (0x000671fd) loc_type_pane_t3

0x0002,

0xf368,	// (0x0006e7c1) loc_type_pane_t_ParamLimits

0xf368,	// (0x0006e7c1) loc_type_pane_t

0x7db6,	// (0x0006720f) list_loc_req_pane

0x7dc0,	// (0x00067219) scroll_pane_cp012

0x7dcb,	// (0x00067224) list_single_loc_request_popup_menu_pane_ParamLimits

0x7dcb,	// (0x00067224) list_single_loc_request_popup_menu_pane

0x7ddd,	// (0x00067236) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x7ddd,	// (0x00067236) list_single_loc_request_popup_menu_pane_g1

0x7de9,	// (0x00067242) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x7de9,	// (0x00067242) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0006e7c8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0006e7c8) list_single_loc_request_popup_menu_pane_g

0x7df5,	// (0x0006724e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x7df5,	// (0x0006724e) list_single_loc_request_popup_menu_pane_t1

0x7e0b,	// (0x00067264) bg_popup_window_pane_cp03_ParamLimits

0x7e0b,	// (0x00067264) bg_popup_window_pane_cp03

0x7e19,	// (0x00067272) heading_loc_req_pane_ParamLimits

0x7e19,	// (0x00067272) heading_loc_req_pane

0x7e25,	// (0x0006727e) popup_dyc_status_message_window_g1_ParamLimits

0x7e25,	// (0x0006727e) popup_dyc_status_message_window_g1

0x7e31,	// (0x0006728a) popup_dyc_status_message_window_t1_ParamLimits

0x7e31,	// (0x0006728a) popup_dyc_status_message_window_t1

0x7e43,	// (0x0006729c) popup_dyc_status_message_window_t2_ParamLimits

0x7e43,	// (0x0006729c) popup_dyc_status_message_window_t2

0x7e55,	// (0x000672ae) popup_dyc_status_message_window_t3_ParamLimits

0x7e55,	// (0x000672ae) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0006e7cd) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0006e7cd) popup_dyc_status_message_window_t

0x0898,	// (0x0005fcf1) bg_heading_pane_cp01

0x7e67,	// (0x000672c0) heading_loc_req_pane_g1

0x7e6f,	// (0x000672c8) heading_loc_req_pane_g2

0x7e77,	// (0x000672d0) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0006e7d4) heading_loc_req_pane_g

0x7e7f,	// (0x000672d8) heading_loc_req_pane_t1

0x7ea6,	// (0x000672ff) bg_popup_sub_pane_cp01_ParamLimits

0x7ea6,	// (0x000672ff) bg_popup_sub_pane_cp01

0x7eb4,	// (0x0006730d) popup_cale_events_window_g1_ParamLimits

0x7eb4,	// (0x0006730d) popup_cale_events_window_g1

0x7ed4,	// (0x0006732d) popup_cale_events_window_g2_ParamLimits

0x7ed4,	// (0x0006732d) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0006e808) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0006e808) popup_cale_events_window_g

0x7ef4,	// (0x0006734d) popup_cale_events_window_t1_ParamLimits

0x7ef4,	// (0x0006734d) popup_cale_events_window_t1

0x7f06,	// (0x0006735f) popup_cale_events_window_t2_ParamLimits

0x7f06,	// (0x0006735f) popup_cale_events_window_t2

0x7f44,	// (0x0006739d) popup_cale_events_window_t3_ParamLimits

0x7f44,	// (0x0006739d) popup_cale_events_window_t3

0x7f7e,	// (0x000673d7) popup_cale_events_window_t4_ParamLimits

0x7f7e,	// (0x000673d7) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0006e80d) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0006e80d) popup_cale_events_window_t

0x7fb4,	// (0x0006740d) call_type_pane

0x7fc0,	// (0x00067419) popup_call_status_window_g1

0x7fce,	// (0x00067427) popup_call_status_window_g2

0x7fda,	// (0x00067433) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0006e816) popup_call_status_window_g

0x7fe6,	// (0x0006743f) call_type_pane_g1

0x7fef,	// (0x00067448) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0006e81d) call_type_pane_g

0x0898,	// (0x0005fcf1) bg_popup_sub_pane_cp02

0x7ff8,	// (0x00067451) listscroll_popup_wml_pane

0x8000,	// (0x00067459) list_wml_pane

0x800a,	// (0x00067463) scroll_pane_cp013

0x8015,	// (0x0006746e) list_single_graphic_popup_wml_pane_ParamLimits

0x8015,	// (0x0006746e) list_single_graphic_popup_wml_pane

0x6174,	// (0x000655cd) list_single_graphic_popup_wml_pane_g1

0x8029,	// (0x00067482) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0006e822) list_single_graphic_popup_wml_pane_g

0x8031,	// (0x0006748a) list_single_graphic_popup_wml_pane_t1

0x8047,	// (0x000674a0) aid_call_pane

0x5c6e,	// (0x000650c7) popup_clock_analogue_window_g1

0x5c6e,	// (0x000650c7) popup_clock_analogue_window_g2

0x804f,	// (0x000674a8) popup_clock_analogue_window_g3

0x804f,	// (0x000674a8) popup_clock_analogue_window_g4

0x6174,	// (0x000655cd) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0006e827) popup_clock_analogue_window_g

0x8057,	// (0x000674b0) popup_clock_analogue_window_t1

0x8065,	// (0x000674be) clock_digital_number_pane_ParamLimits

0x8065,	// (0x000674be) clock_digital_number_pane

0x8071,	// (0x000674ca) clock_digital_number_pane_cp02_ParamLimits

0x8071,	// (0x000674ca) clock_digital_number_pane_cp02

0x807d,	// (0x000674d6) clock_digital_number_pane_cp03_ParamLimits

0x807d,	// (0x000674d6) clock_digital_number_pane_cp03

0x8089,	// (0x000674e2) clock_digital_number_pane_cp04_ParamLimits

0x8089,	// (0x000674e2) clock_digital_number_pane_cp04

0x8095,	// (0x000674ee) clock_digital_separator_pane_ParamLimits

0x8095,	// (0x000674ee) clock_digital_separator_pane

0x80a1,	// (0x000674fa) popup_clock_digital_window_t1

0x6174,	// (0x000655cd) clock_digital_number_pane_g1

0x6174,	// (0x000655cd) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0006e795) clock_digital_number_pane_g

0x6174,	// (0x000655cd) clock_digital_separator_pane_g1

0x6174,	// (0x000655cd) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0006e795) clock_digital_separator_pane_g

0x0898,	// (0x0005fcf1) bg_popup_window_pane_cp04

0x80be,	// (0x00067517) heading_pane_cp03

0x80c6,	// (0x0006751f) listscroll_popup_gms_pane

0x80ce,	// (0x00067527) grid_large_graphic_popup_pane

0x80d8,	// (0x00067531) listscroll_popup_gms_pane_g1

0x80e0,	// (0x00067539) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0006e832) listscroll_popup_gms_pane_g

0x6ff6,	// (0x0006644f) scroll_pane_cp014

0x80e8,	// (0x00067541) cell_large_graphic_popup_pane_ParamLimits

0x80e8,	// (0x00067541) cell_large_graphic_popup_pane

0x8100,	// (0x00067559) cell_large_graphic_popup_pane_g1_ParamLimits

0x8100,	// (0x00067559) cell_large_graphic_popup_pane_g1

0x810c,	// (0x00067565) cell_large_graphic_popup_pane_g2_ParamLimits

0x810c,	// (0x00067565) cell_large_graphic_popup_pane_g2

0x8118,	// (0x00067571) cell_large_graphic_popup_pane_g3_ParamLimits

0x8118,	// (0x00067571) cell_large_graphic_popup_pane_g3

0x8125,	// (0x0006757e) cell_large_graphic_popup_pane_g4_ParamLimits

0x8125,	// (0x0006757e) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0006e837) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0006e837) cell_large_graphic_popup_pane_g

0x8135,	// (0x0006758e) grid_highlight_pane_cp010

0x6174,	// (0x000655cd) bg_popup_call_pane_g1

0x813f,	// (0x00067598) list_single_graphic_popup_conf_pane_ParamLimits

0x813f,	// (0x00067598) list_single_graphic_popup_conf_pane

0x8151,	// (0x000675aa) list_highlight_pane_cp01

0x815a,	// (0x000675b3) list_single_graphic_popup_conf_pane_g1

0x8162,	// (0x000675bb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0006e840) list_single_graphic_popup_conf_pane_g

0x816a,	// (0x000675c3) list_single_graphic_popup_conf_pane_t1

0x8178,	// (0x000675d1) linegrid_cams_pane_g1

0x8181,	// (0x000675da) linegrid_cams_pane_g2

0x6381,	// (0x000657da) linegrid_cams_pane_g3

0x818a,	// (0x000675e3) linegrid_cams_pane_g4

0x8193,	// (0x000675ec) linegrid_cams_pane_g5

0x819c,	// (0x000675f5) linegrid_cams_pane_g6

0x6780,	// (0x00065bd9) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0006e845) linegrid_cams_pane_g

0x81a5,	// (0x000675fe) popup_clock_analogue_window

0x81a5,	// (0x000675fe) popup_clock_digital_window

0x0898,	// (0x0005fcf1) popup_phob_thumbnail_window

0x6174,	// (0x000655cd) call_video_uplink_pane_g1

0x81ae,	// (0x00067607) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0006e854) call_video_uplink_pane_g

0x6728,	// (0x00065b81) video_uplink_pane

0x81b6,	// (0x0006760f) mce_image_pane_g1

0x81c0,	// (0x00067619) mce_image_pane_g2

0x81c8,	// (0x00067621) mce_image_pane_g3

0x81d0,	// (0x00067629) mce_image_pane_g4

0x81d8,	// (0x00067631) mce_image_pane_g5

0x0004,

0xf400,	// (0x0006e859) mce_image_pane_g

0x81e0,	// (0x00067639) control_top_pane_stacon_cp01_ParamLimits

0x81e0,	// (0x00067639) control_top_pane_stacon_cp01

0x81f4,	// (0x0006764d) uni_indicator_pane_stacon_cp01_ParamLimits

0x81f4,	// (0x0006764d) uni_indicator_pane_stacon_cp01

0x8205,	// (0x0006765e) bg_popup_sub_pane_cp03

0x820f,	// (0x00067668) chi_dic_find_pane

0x8217,	// (0x00067670) listscroll_chi_dic_pane

0x8220,	// (0x00067679) main_pane_chidic_g1

0x8233,	// (0x0006768c) chi_dic_find_pane_t1

0x8241,	// (0x0006769a) find_chidic_pane

0x824a,	// (0x000676a3) chi_dic_list_pane_ParamLimits

0x824a,	// (0x000676a3) chi_dic_list_pane

0x825b,	// (0x000676b4) scroll_pane_cp020

0x8263,	// (0x000676bc) find_chidic_pane_t1

0x0898,	// (0x0005fcf1) input_focus_pane_cp06

0x8272,	// (0x000676cb) list_chi_dic_pane_ParamLimits

0x8272,	// (0x000676cb) list_chi_dic_pane

0x8293,	// (0x000676ec) list_chi_dic_pane_t1_ParamLimits

0x8293,	// (0x000676ec) list_chi_dic_pane_t1

0x0898,	// (0x0005fcf1) list_highlight_pane_cp020

0x82a6,	// (0x000676ff) bg_cale_heading_pane_g1

0x82ae,	// (0x00067707) bg_cale_heading_pane_g2

0x82b6,	// (0x0006770f) bg_cale_heading_pane_g3

0x82be,	// (0x00067717) bg_cale_heading_pane_g4

0x82c8,	// (0x00067721) bg_cale_heading_pane_g5

0x82d2,	// (0x0006772b) bg_cale_heading_pane_g6

0x82da,	// (0x00067733) bg_cale_heading_pane_g7

0x82e2,	// (0x0006773b) bg_cale_heading_pane_g8

0x82ec,	// (0x00067745) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0006e864) bg_cale_heading_pane_g

0x82a6,	// (0x000676ff) bg_cale_side_pane_g1

0x82f6,	// (0x0006774f) bg_cale_side_pane_g2

0x82fe,	// (0x00067757) bg_cale_side_pane_g3

0x8306,	// (0x0006775f) bg_cale_side_pane_g4

0x830e,	// (0x00067767) bg_cale_side_pane_g5

0x8316,	// (0x0006776f) bg_cale_side_pane_g6

0x831e,	// (0x00067777) bg_cale_side_pane_g7

0x8326,	// (0x0006777f) bg_cale_side_pane_g8

0x832e,	// (0x00067787) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0006e877) bg_cale_side_pane_g

0x8336,	// (0x0006778f) popup_call_status_window_ParamLimits

0x8336,	// (0x0006778f) popup_call_status_window

0x8342,	// (0x0006779b) stacon_top_pane

0x834a,	// (0x000677a3) status_pane_ParamLimits

0x834a,	// (0x000677a3) status_pane

0x835f,	// (0x000677b8) status_small_pane

0x8367,	// (0x000677c0) control_pane

0x0898,	// (0x0005fcf1) stacon_bottom_pane

0x836f,	// (0x000677c8) list_single_mce_smart_pane_t1_ParamLimits

0x836f,	// (0x000677c8) list_single_mce_smart_pane_t1

0x8382,	// (0x000677db) list_single_mce_smart_pane_t2_ParamLimits

0x8382,	// (0x000677db) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0006e88a) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0006e88a) list_single_mce_smart_pane_t

0x83a1,	// (0x000677fa) compass_pane

0x83ad,	// (0x00067806) main_location2_pane_t1

0x83c1,	// (0x0006781a) main_location2_pane_t2

0x83d5,	// (0x0006782e) main_location2_pane_t3

0x0003,

0xf436,	// (0x0006e88f) main_location2_pane_t

0x841f,	// (0x00067878) compass_pane_g1_ParamLimits

0x841f,	// (0x00067878) compass_pane_g1

0x842b,	// (0x00067884) compass_pane_t1

0x843a,	// (0x00067893) compass_pane_t2

0x0005,

0xf43f,	// (0x0006e898) compass_pane_t

0x8485,	// (0x000678de) text_secondary_cp61

0x84f0,	// (0x00067949) navi_pane_cams_g5

0x856c,	// (0x000679c5) navi_pane_im_t1

0x857a,	// (0x000679d3) navi_pane_mp_g1_ParamLimits

0x857a,	// (0x000679d3) navi_pane_mp_g1

0x858e,	// (0x000679e7) navi_pane_mp_g2_ParamLimits

0x858e,	// (0x000679e7) navi_pane_mp_g2

0x859a,	// (0x000679f3) navi_pane_mp_g3_ParamLimits

0x859a,	// (0x000679f3) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0006e8ac) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0006e8ac) navi_pane_mp_g

0x85a6,	// (0x000679ff) navi_pane_mp_t1

0x85b4,	// (0x00067a0d) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0006e8b3) navi_pane_mp_t

0x864b,	// (0x00067aa4) navi_pane_vt_g1

0x85a6,	// (0x000679ff) navi_pane_vt_t1

0x8653,	// (0x00067aac) navi_slider_pane

0x865b,	// (0x00067ab4) zooming_pane

0x8663,	// (0x00067abc) navi_slider_pane_g1

0x866c,	// (0x00067ac5) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0006e8ba) navi_slider_pane_g

0x8699,	// (0x00067af2) aid_levels_zoom

0x86a1,	// (0x00067afa) zooming_pane_g1

0x86a9,	// (0x00067b02) zooming_pane_g2

0x86a9,	// (0x00067b02) zooming_pane_g3

0x0002,

0xf470,	// (0x0006e8c9) zooming_pane_g

0x86b1,	// (0x00067b0a) level_10_zoom

0x86ba,	// (0x00067b13) level_11_zoom

0x86c3,	// (0x00067b1c) level_1_zoom

0x86cc,	// (0x00067b25) level_2_zoom

0x86d5,	// (0x00067b2e) level_3_zoom

0x86de,	// (0x00067b37) level_4_zoom

0x86e7,	// (0x00067b40) level_5_zoom

0x86f0,	// (0x00067b49) level_6_zoom

0x86f9,	// (0x00067b52) level_7_zoom

0x8702,	// (0x00067b5b) level_8_zoom

0x870b,	// (0x00067b64) level_9_zoom

0x871c,	// (0x00067b75) popup_phob_thumbnail_window_g1

0x8724,	// (0x00067b7d) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0006e8d0) popup_phob_thumbnail_window_g

0xefda,	// (0x0006e433) level_1_location

0xefe2,	// (0x0006e43b) level_2_location

0xefea,	// (0x0006e443) level_3_location

0xeff2,	// (0x0006e44b) level_4_location

0x865b,	// (0x00067ab4) level_5_location

0x872c,	// (0x00067b85) mce_icon_pane_g1

0x8734,	// (0x00067b8d) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0006e8d5) mce_icon_pane_g

0x873c,	// (0x00067b95) main_mup_pane_g1_ParamLimits

0x873c,	// (0x00067b95) main_mup_pane_g1

0x8754,	// (0x00067bad) main_mup_pane_g2_ParamLimits

0x8754,	// (0x00067bad) main_mup_pane_g2

0x8770,	// (0x00067bc9) main_mup_pane_g3_ParamLimits

0x8770,	// (0x00067bc9) main_mup_pane_g3

0x878c,	// (0x00067be5) main_mup_pane_g4_ParamLimits

0x878c,	// (0x00067be5) main_mup_pane_g4

0x87a8,	// (0x00067c01) main_mup_pane_g5_ParamLimits

0x87a8,	// (0x00067c01) main_mup_pane_g5

0x87c9,	// (0x00067c22) main_mup_pane_g6_ParamLimits

0x87c9,	// (0x00067c22) main_mup_pane_g6

0x87e5,	// (0x00067c3e) main_mup_pane_g7_ParamLimits

0x87e5,	// (0x00067c3e) main_mup_pane_g7

0x8801,	// (0x00067c5a) main_mup_pane_g8_ParamLimits

0x8801,	// (0x00067c5a) main_mup_pane_g8

0x881d,	// (0x00067c76) main_mup_pane_g9_ParamLimits

0x881d,	// (0x00067c76) main_mup_pane_g9

0x883c,	// (0x00067c95) main_mup_pane_g10_ParamLimits

0x883c,	// (0x00067c95) main_mup_pane_g10

0x885b,	// (0x00067cb4) main_mup_pane_g11_ParamLimits

0x885b,	// (0x00067cb4) main_mup_pane_g11

0x8873,	// (0x00067ccc) main_mup_pane_g12_ParamLimits

0x8873,	// (0x00067ccc) main_mup_pane_g12

0x8881,	// (0x00067cda) main_mup_pane_g13_ParamLimits

0x8881,	// (0x00067cda) main_mup_pane_g13

0x000c,

0xf481,	// (0x0006e8da) main_mup_pane_g_ParamLimits

0xf481,	// (0x0006e8da) main_mup_pane_g

0x8897,	// (0x00067cf0) main_mup_pane_t1_ParamLimits

0x8897,	// (0x00067cf0) main_mup_pane_t1

0x88b4,	// (0x00067d0d) main_mup_pane_t2_ParamLimits

0x88b4,	// (0x00067d0d) main_mup_pane_t2

0x88ce,	// (0x00067d27) main_mup_pane_t3_ParamLimits

0x88ce,	// (0x00067d27) main_mup_pane_t3

0x88e8,	// (0x00067d41) main_mup_pane_t4_ParamLimits

0x88e8,	// (0x00067d41) main_mup_pane_t4

0x88fa,	// (0x00067d53) main_mup_pane_t5_ParamLimits

0x88fa,	// (0x00067d53) main_mup_pane_t5

0x890c,	// (0x00067d65) main_mup_pane_t6_ParamLimits

0x890c,	// (0x00067d65) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0006e8f5) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0006e8f5) main_mup_pane_t

0x8922,	// (0x00067d7b) mup_progress_pane_ParamLimits

0x8922,	// (0x00067d7b) mup_progress_pane

0x892e,	// (0x00067d87) mup_visualizer_pane_ParamLimits

0x892e,	// (0x00067d87) mup_visualizer_pane

0x896c,	// (0x00067dc5) mup_volume_pane_ParamLimits

0x896c,	// (0x00067dc5) mup_volume_pane

0x7fc0,	// (0x00067419) mup_visualizer_pane_g1_ParamLimits

0x7fc0,	// (0x00067419) mup_visualizer_pane_g1

0x7fc0,	// (0x00067419) mup_visualizer_pane_g2_ParamLimits

0x7fc0,	// (0x00067419) mup_visualizer_pane_g2

0x841f,	// (0x00067878) mup_visualizer_pane_g3_ParamLimits

0x841f,	// (0x00067878) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0006e902) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0006e902) mup_visualizer_pane_g

0x6174,	// (0x000655cd) mup_volume_pane_g1

0x8997,	// (0x00067df0) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0006e909) mup_volume_pane_g

0x6174,	// (0x000655cd) mup_progress_pane_g1

0x89a0,	// (0x00067df9) mup_progress_pane_g2

0x89a9,	// (0x00067e02) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0006e90e) mup_progress_pane_g

0x0898,	// (0x0005fcf1) bg_popup_window_pane_cp05

0x89b2,	// (0x00067e0b) heading_pane_cp02_ParamLimits

0x89b2,	// (0x00067e0b) heading_pane_cp02

0x89cc,	// (0x00067e25) list_popup_blid_pane

0x89d4,	// (0x00067e2d) list_blid_sat_info_pane_ParamLimits

0x89d4,	// (0x00067e2d) list_blid_sat_info_pane

0x89e7,	// (0x00067e40) list_blid_sat_info_pane_g1

0x89ef,	// (0x00067e48) list_blid_sat_info_pane_t1

0x8ae5,	// (0x00067f3e) mup_equalizer_pane_ParamLimits

0x8ae5,	// (0x00067f3e) mup_equalizer_pane

0x8b06,	// (0x00067f5f) mup_equalizer_pane_cp1_ParamLimits

0x8b06,	// (0x00067f5f) mup_equalizer_pane_cp1

0x8b27,	// (0x00067f80) mup_equalizer_pane_cp2_ParamLimits

0x8b27,	// (0x00067f80) mup_equalizer_pane_cp2

0x8b48,	// (0x00067fa1) mup_equalizer_pane_cp3_ParamLimits

0x8b48,	// (0x00067fa1) mup_equalizer_pane_cp3

0x8b69,	// (0x00067fc2) mup_equalizer_pane_cp4_ParamLimits

0x8b69,	// (0x00067fc2) mup_equalizer_pane_cp4

0x8b8a,	// (0x00067fe3) mup_equalizer_pane_cp5

0x8ba0,	// (0x00067ff9) mup_equalizer_pane_cp6

0x8bb8,	// (0x00068011) mup_equalizer_pane_cp7

0xeef8,	// (0x0006e351) bg_popup_call_poc_act_pane_g9

0xef00,	// (0x0006e359) bg_popup_call_poc_act_pane_g10

0xef08,	// (0x0006e361) bg_popup_call_poc_act_pane_g11

0x000a,

0x5c76,	// (0x000650cf) mup_scale_pane

0x6174,	// (0x000655cd) mup_scale_pane_g1

0x8bd0,	// (0x00068029) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0006e92a) mup_scale_pane_g

0x8c06,	// (0x0006805f) msg_data_pane

0x8c0e,	// (0x00068067) scroll_pane_cp017

0x4b0c,	// (0x00063f65) bg_list_pane_cp04_ParamLimits

0x4b0c,	// (0x00063f65) bg_list_pane_cp04

0x8c16,	// (0x0006806f) msg_data_pane_g1

0x8c1e,	// (0x00068077) msg_data_pane_g2

0x81c8,	// (0x00067621) msg_data_pane_g3

0x8c26,	// (0x0006807f) msg_data_pane_g4

0x8c2e,	// (0x00068087) msg_data_pane_g5

0x8c36,	// (0x0006808f) msg_data_pane_g6

0x8c3e,	// (0x00068097) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0006e939) msg_data_pane_g

0x4b2c,	// (0x00063f85) msg_text_pane_ParamLimits

0x4b2c,	// (0x00063f85) msg_text_pane

0x8c46,	// (0x0006809f) qrid_highlight_pane_cp011_ParamLimits

0x8c46,	// (0x0006809f) qrid_highlight_pane_cp011

0x0898,	// (0x0005fcf1) msg_body_pane

0x0898,	// (0x0005fcf1) msg_header_pane

0x8c6b,	// (0x000680c4) input_focus_pane_cp07

0x4b84,	// (0x00063fdd) msg_header_pane_t1_ParamLimits

0x4b84,	// (0x00063fdd) msg_header_pane_t1

0x4b98,	// (0x00063ff1) msg_header_pane_t2_ParamLimits

0x4b98,	// (0x00063ff1) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0006e94d) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0006e94d) msg_header_pane_t

0x8c80,	// (0x000680d9) msg_body_pane_g1

0x4baa,	// (0x00064003) msg_body_pane_t1_ParamLimits

0x4baa,	// (0x00064003) msg_body_pane_t1

0x4bdb,	// (0x00064034) msg_body_pane_t2_ParamLimits

0x4bdb,	// (0x00064034) msg_body_pane_t2

0x4bed,	// (0x00064046) msg_body_pane_t3_ParamLimits

0x4bed,	// (0x00064046) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0006e952) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0006e952) msg_body_pane_t

0x8cda,	// (0x00068133) main_viewer_pane_g1_ParamLimits

0x8cda,	// (0x00068133) main_viewer_pane_g1

0x8ce6,	// (0x0006813f) main_viewer_pane_g2_ParamLimits

0x8ce6,	// (0x0006813f) main_viewer_pane_g2

0x8cf2,	// (0x0006814b) main_viewer_pane_g3_ParamLimits

0x8cf2,	// (0x0006814b) main_viewer_pane_g3

0x8d03,	// (0x0006815c) main_viewer_pane_g4_ParamLimits

0x8d03,	// (0x0006815c) main_viewer_pane_g4

0x8d14,	// (0x0006816d) main_viewer_pane_g5_ParamLimits

0x8d14,	// (0x0006816d) main_viewer_pane_g5

0x8d14,	// (0x0006816d) main_viewer_pane_g7_ParamLimits

0x8d14,	// (0x0006816d) main_viewer_pane_g7

0x8d26,	// (0x0006817f) main_viewer_pane_g8_ParamLimits

0x8d26,	// (0x0006817f) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0006e962) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0006e962) main_viewer_pane_g

0x8d3e,	// (0x00068197) viewer_content_pane_ParamLimits

0x8d3e,	// (0x00068197) viewer_content_pane

0x8d6c,	// (0x000681c5) main_postcard_pane_g1_ParamLimits

0x8d6c,	// (0x000681c5) main_postcard_pane_g1

0x8d7a,	// (0x000681d3) main_postcard_pane_g2_ParamLimits

0x8d7a,	// (0x000681d3) main_postcard_pane_g2

0x8d88,	// (0x000681e1) main_postcard_pane_g3_ParamLimits

0x8d88,	// (0x000681e1) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0006e973) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0006e973) main_postcard_pane_g

0x8d98,	// (0x000681f1) main_postcard_pane_g4

0x0c90,	// (0x000600e9) smil_status_volume_pane_g2

0x8dc4,	// (0x0006821d) postcard_pane_ParamLimits

0x8dc4,	// (0x0006821d) postcard_pane

0x7fc0,	// (0x00067419) postcard_pane_g1_ParamLimits

0x7fc0,	// (0x00067419) postcard_pane_g1

0x8df6,	// (0x0006824f) postcard_pane_g2_ParamLimits

0x8df6,	// (0x0006824f) postcard_pane_g2

0x8e02,	// (0x0006825b) postcard_pane_g3_ParamLimits

0x8e02,	// (0x0006825b) postcard_pane_g3

0x8e0e,	// (0x00068267) postcard_pane_g4_ParamLimits

0x8e0e,	// (0x00068267) postcard_pane_g4

0x8e1c,	// (0x00068275) postcard_pane_g5_ParamLimits

0x8e1c,	// (0x00068275) postcard_pane_g5

0x8e28,	// (0x00068281) postcard_pane_g6_ParamLimits

0x8e28,	// (0x00068281) postcard_pane_g6

0x8e34,	// (0x0006828d) postcard_pane_g7_ParamLimits

0x8e34,	// (0x0006828d) postcard_pane_g7

0x0006,

0xf527,	// (0x0006e980) postcard_pane_g_ParamLimits

0xf527,	// (0x0006e980) postcard_pane_g

0x8e42,	// (0x0006829b) main_mp2_pane_g1_ParamLimits

0x8e42,	// (0x0006829b) main_mp2_pane_g1

0x8e4e,	// (0x000682a7) main_mp2_pane_g2_ParamLimits

0x8e4e,	// (0x000682a7) main_mp2_pane_g2

0x8e5a,	// (0x000682b3) main_mp2_pane_g3_ParamLimits

0x8e5a,	// (0x000682b3) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0006e98f) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0006e98f) main_mp2_pane_g

0x8e66,	// (0x000682bf) main_mp2_pane_t1_ParamLimits

0x8e66,	// (0x000682bf) main_mp2_pane_t1

0x8e7d,	// (0x000682d6) main_mp2_pane_t2_ParamLimits

0x8e7d,	// (0x000682d6) main_mp2_pane_t2

0x8e8f,	// (0x000682e8) main_mp2_pane_t3_ParamLimits

0x8e8f,	// (0x000682e8) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0006e996) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0006e996) main_mp2_pane_t

0x8ea1,	// (0x000682fa) pec_content_pane_ParamLimits

0x8ea1,	// (0x000682fa) pec_content_pane

0x6ff6,	// (0x0006644f) scroll_pane_cp015

0x8eb3,	// (0x0006830c) pec_attribute_pane_ParamLimits

0x8eb3,	// (0x0006830c) pec_attribute_pane

0x8ec3,	// (0x0006831c) pec_content_pane_g1_ParamLimits

0x8ec3,	// (0x0006831c) pec_content_pane_g1

0x8ecf,	// (0x00068328) pec_content_pane_t1_ParamLimits

0x8ecf,	// (0x00068328) pec_content_pane_t1

0x8ee1,	// (0x0006833a) pec_content_pane_t2_ParamLimits

0x8ee1,	// (0x0006833a) pec_content_pane_t2

0x0001,

0xf544,	// (0x0006e99d) pec_content_pane_t_ParamLimits

0xf544,	// (0x0006e99d) pec_content_pane_t

0x8ef3,	// (0x0006834c) list_single_graphic_pane_cp01_ParamLimits

0x8ef3,	// (0x0006834c) list_single_graphic_pane_cp01

0x5c76,	// (0x000650cf) bg_popup_sub_pane_cp04

0x8f26,	// (0x0006837f) popup_mup_playback_window_g1

0x8f32,	// (0x0006838b) popup_mup_playback_window_t1

0x8f47,	// (0x000683a0) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0006e9a2) popup_mup_playback_window_t

0x8f8b,	// (0x000683e4) main_image_pane_g1_ParamLimits

0x8f8b,	// (0x000683e4) main_image_pane_g1

0x9032,	// (0x0006848b) scroll_pane_cp018_ParamLimits

0x9032,	// (0x0006848b) scroll_pane_cp018

0x904a,	// (0x000684a3) scroll_pane_cp016_ParamLimits

0x904a,	// (0x000684a3) scroll_pane_cp016

0x907e,	// (0x000684d7) smil2_image_pane_ParamLimits

0x907e,	// (0x000684d7) smil2_image_pane

0x90b2,	// (0x0006850b) smil2_root_pane_ParamLimits

0x90b2,	// (0x0006850b) smil2_root_pane

0x90de,	// (0x00068537) smil2_text_pane_ParamLimits

0x90de,	// (0x00068537) smil2_text_pane

0x0898,	// (0x0005fcf1) bg_list_pane_cp06

0x9126,	// (0x0006857f) grid_radio_pane

0x0898,	// (0x0005fcf1) bg_popup_window_pane_cp06

0x912e,	// (0x00068587) main_fmradio_pane_t1

0x80be,	// (0x00067517) heading_pane_cp04

0x913c,	// (0x00068595) main_fmradio_pane_t2

0xef10,	// (0x0006e369) popup_cale_lunar_info_window_g1

0x914a,	// (0x000685a3) main_fmradio_pane_t3

0xef18,	// (0x0006e371) popup_cale_lunar_info_window_g2

0x9158,	// (0x000685b1) main_fmradio_pane_t4

0x0001,

0x9166,	// (0x000685bf) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0006ea7d) popup_cale_lunar_info_window_g

0xf55e,	// (0x0006e9b7) main_fmradio_pane_t

0x9174,	// (0x000685cd) wait_bar_pane_cp03

0x917c,	// (0x000685d5) cell_fmradio_pane_ParamLimits

0x917c,	// (0x000685d5) cell_fmradio_pane

0x8e34,	// (0x0006828d) cell_fmradio_pane_g1_ParamLimits

0x8e34,	// (0x0006828d) cell_fmradio_pane_g1

0x0898,	// (0x0005fcf1) grid_highlight_pane_cp011

0x918f,	// (0x000685e8) poc_content_pane_ParamLimits

0x918f,	// (0x000685e8) poc_content_pane

0x91a1,	// (0x000685fa) scroll_pane_cp019

0x91a9,	// (0x00068602) popup_call_poc_act_window_ParamLimits

0x91a9,	// (0x00068602) popup_call_poc_act_window

0x91b6,	// (0x0006860f) popup_call_poc_inact_window_ParamLimits

0x91b6,	// (0x0006860f) popup_call_poc_inact_window

0xf5fb,	// (0x0006ea54) bg_popup_call_poc_act_pane_g

0xee88,	// (0x0006e2e1) bg_popup_call_poc_inact_pane_g1

0xee90,	// (0x0006e2e9) bg_popup_call_poc_inact_pane_g2

0x91c3,	// (0x0006861c) popup_call_poc_act_window_g2

0xee98,	// (0x0006e2f1) bg_popup_call_poc_inact_pane_g3

0xeea0,	// (0x0006e2f9) bg_popup_call_poc_inact_pane_g4

0xeea8,	// (0x0006e301) bg_popup_call_poc_inact_pane_g5

0x91cb,	// (0x00068624) popup_call_poc_act_window_t1_ParamLimits

0x91cb,	// (0x00068624) popup_call_poc_act_window_t1

0x91f3,	// (0x0006864c) popup_call_poc_act_window_t2_ParamLimits

0x91f3,	// (0x0006864c) popup_call_poc_act_window_t2

0x921b,	// (0x00068674) popup_call_poc_act_window_t3_ParamLimits

0x921b,	// (0x00068674) popup_call_poc_act_window_t3

0x9243,	// (0x0006869c) popup_call_poc_act_window_t4_ParamLimits

0x9243,	// (0x0006869c) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0006e9c2) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0006e9c2) popup_call_poc_act_window_t

0xeeb0,	// (0x0006e309) bg_popup_call_poc_inact_pane_g6

0xeeb8,	// (0x0006e311) bg_popup_call_poc_inact_pane_g7

0xeec0,	// (0x0006e319) bg_popup_call_poc_inact_pane_g8

0x9255,	// (0x000686ae) popup_call_poc_inact_window_g2

0xeec8,	// (0x0006e321) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0006ea41) bg_popup_call_poc_inact_pane_g

0x925d,	// (0x000686b6) popup_call_poc_inact_window_t1_ParamLimits

0x925d,	// (0x000686b6) popup_call_poc_inact_window_t1

0x9272,	// (0x000686cb) popup_call_poc_inact_window_t2_ParamLimits

0x9272,	// (0x000686cb) popup_call_poc_inact_window_t2

0x9287,	// (0x000686e0) popup_call_poc_inact_window_t3_ParamLimits

0x9287,	// (0x000686e0) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0006e9cb) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0006e9cb) popup_call_poc_inact_window_t

0xf08e,	// (0x0006e4e7) context_pane_ParamLimits

0x9e53,	// (0x000692ac) signal_pane_ParamLimits

0x865b,	// (0x00067ab4) main_call2_pane

0xf07c,	// (0x0006e4d5) popup_phob_thumbnail2_window_ParamLimits

0xf07c,	// (0x0006e4d5) popup_phob_thumbnail2_window

0x8c88,	// (0x000680e1) aid_hotspot_pointer_arrow_pane

0x8c90,	// (0x000680e9) aid_hotspot_pointer_hand_pane

0x9b91,	// (0x00068fea) phob_pre_status_pane_g5

0x6838,	// (0x00065c91) cams_zoom_pane_ParamLimits

0x6844,	// (0x00065c9d) image_vga_pane_ParamLimits

0x6853,	// (0x00065cac) main_camera_pane_g1_ParamLimits

0x6861,	// (0x00065cba) main_camera_pane_g2_ParamLimits

0x686f,	// (0x00065cc8) main_camera_pane_g3_ParamLimits

0x687b,	// (0x00065cd4) main_camera_pane_g4_ParamLimits

0x6887,	// (0x00065ce0) main_camera_pane_g5_ParamLimits

0x6893,	// (0x00065cec) main_camera_pane_g6_ParamLimits

0x689f,	// (0x00065cf8) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0006e6ca) main_camera_pane_g_ParamLimits

0x68b7,	// (0x00065d10) main_camera_pane_t1_ParamLimits

0x68c9,	// (0x00065d22) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0006e6db) main_camera_pane_t_ParamLimits

0x5c76,	// (0x000650cf) bg_popup_preview_window_pane_cp01_ParamLimits

0x5c76,	// (0x000650cf) bg_popup_preview_window_pane_cp01

0x929c,	// (0x000686f5) popup_phob_thumbnail2_window_g1_ParamLimits

0x929c,	// (0x000686f5) popup_phob_thumbnail2_window_g1

0x0898,	// (0x0005fcf1) call2_cli_visual_pane

0x92b7,	// (0x00068710) popup_call2_audio_conf_window_ParamLimits

0x92b7,	// (0x00068710) popup_call2_audio_conf_window

0x92cc,	// (0x00068725) popup_call2_audio_first_window_ParamLimits

0x92cc,	// (0x00068725) popup_call2_audio_first_window

0x936a,	// (0x000687c3) popup_call2_audio_in_window_ParamLimits

0x936a,	// (0x000687c3) popup_call2_audio_in_window

0x93ac,	// (0x00068805) popup_call2_audio_out_window_ParamLimits

0x93ac,	// (0x00068805) popup_call2_audio_out_window

0x940e,	// (0x00068867) popup_call2_audio_second_window_ParamLimits

0x940e,	// (0x00068867) popup_call2_audio_second_window

0x946c,	// (0x000688c5) popup_call2_audio_wait_window_ParamLimits

0x946c,	// (0x000688c5) popup_call2_audio_wait_window

0x0898,	// (0x0005fcf1) bg_popup_call2_act_pane_cp03

0x5c58,	// (0x000650b1) list_conf_pane_cp

0x94ab,	// (0x00068904) popup_call2_audio_conf_window_t1

0x94b9,	// (0x00068912) list_single_graphic_popup_conf2_pane_ParamLimits

0x94b9,	// (0x00068912) list_single_graphic_popup_conf2_pane

0x8151,	// (0x000675aa) list_highlight_pane_cp04

0x94cc,	// (0x00068925) list_single_graphic_popup_conf2_pane_g1

0x8162,	// (0x000675bb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0006e9d2) list_single_graphic_popup_conf2_pane_g

0x94d6,	// (0x0006892f) list_single_graphic_popup_conf2_pane_t1

0x94e4,	// (0x0006893d) bg_popup_call2_act_pane_cp01_ParamLimits

0x94e4,	// (0x0006893d) bg_popup_call2_act_pane_cp01

0x956e,	// (0x000689c7) call_type_pane_cp05_ParamLimits

0x956e,	// (0x000689c7) call_type_pane_cp05

0x95c2,	// (0x00068a1b) popup_call2_audio_second_window_g1_ParamLimits

0x95c2,	// (0x00068a1b) popup_call2_audio_second_window_g1

0x9616,	// (0x00068a6f) popup_call2_audio_second_window_g2_ParamLimits

0x9616,	// (0x00068a6f) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0006e9d7) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0006e9d7) popup_call2_audio_second_window_g

0x967b,	// (0x00068ad4) popup_call2_audio_second_window_t1_ParamLimits

0x967b,	// (0x00068ad4) popup_call2_audio_second_window_t1

0x9736,	// (0x00068b8f) popup_call2_audio_second_window_t2_ParamLimits

0x9736,	// (0x00068b8f) popup_call2_audio_second_window_t2

0x9789,	// (0x00068be2) popup_call2_audio_second_window_t3_ParamLimits

0x9789,	// (0x00068be2) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0006e9de) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0006e9de) popup_call2_audio_second_window_t

0x0898,	// (0x0005fcf1) bg_popup_call2_in_pane_cp02

0x08a2,	// (0x0005fcfb) call_type_pane_cp04

0x08aa,	// (0x0005fd03) popup_call2_audio_wait_window_g1

0x08b2,	// (0x0005fd0b) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0006e5b7) popup_call2_audio_wait_window_g

0x08ba,	// (0x0005fd13) popup_call2_audio_wait_window_t3

0x987c,	// (0x00068cd5) bg_popup_call2_act_pane_ParamLimits

0x987c,	// (0x00068cd5) bg_popup_call2_act_pane

0x993c,	// (0x00068d95) call_type_pane_cp03_ParamLimits

0x993c,	// (0x00068d95) call_type_pane_cp03

0x99a0,	// (0x00068df9) popup_call2_audio_first_window_g1_ParamLimits

0x99a0,	// (0x00068df9) popup_call2_audio_first_window_g1

0x9a10,	// (0x00068e69) popup_call2_audio_first_window_g2_ParamLimits

0x9a10,	// (0x00068e69) popup_call2_audio_first_window_g2

0x7fc0,	// (0x00067419) popup_call2_audio_first_window_g3_ParamLimits

0x7fc0,	// (0x00067419) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0006e9e7) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0006e9e7) popup_call2_audio_first_window_g

0xe6cd,	// (0x0006db26) popup_call2_audio_first_window_t1_ParamLimits

0xe6cd,	// (0x0006db26) popup_call2_audio_first_window_t1

0xe7d0,	// (0x0006dc29) popup_call2_audio_first_window_t4_ParamLimits

0xe7d0,	// (0x0006dc29) popup_call2_audio_first_window_t4

0xe8b3,	// (0x0006dd0c) popup_call2_audio_first_window_t5_ParamLimits

0xe8b3,	// (0x0006dd0c) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0006e9f2) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0006e9f2) popup_call2_audio_first_window_t

0x5c6e,	// (0x000650c7) bg_popup_call2_act_pane_g1

0xef20,	// (0x0006e379) popup_cale_lunar_info_window_t1

0xef2e,	// (0x0006e387) popup_cale_lunar_info_window_t2

0xef3c,	// (0x0006e395) popup_cale_lunar_info_window_t3

0x0898,	// (0x0005fcf1) bg_popup_call2_bubble_pane

0xe9b4,	// (0x0006de0d) bg_popup_call2_in_pane_cp01_ParamLimits

0xe9b4,	// (0x0006de0d) bg_popup_call2_in_pane_cp01

0x0574,	// (0x0005f9cd) call_type_pane_cp02

0xe9fc,	// (0x0006de55) popup_call2_audio_out_window_g1_ParamLimits

0xe9fc,	// (0x0006de55) popup_call2_audio_out_window_g1

0xea28,	// (0x0006de81) popup_call2_audio_out_window_g2_ParamLimits

0xea28,	// (0x0006de81) popup_call2_audio_out_window_g2

0xea50,	// (0x0006dea9) popup_call2_audio_out_window_g3_ParamLimits

0xea50,	// (0x0006dea9) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0006e9fb) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0006e9fb) popup_call2_audio_out_window_g

0xea8b,	// (0x0006dee4) popup_call2_audio_out_window_t1_ParamLimits

0xea8b,	// (0x0006dee4) popup_call2_audio_out_window_t1

0xeaea,	// (0x0006df43) popup_call2_audio_out_window_t2_ParamLimits

0xeaea,	// (0x0006df43) popup_call2_audio_out_window_t2

0xeb3e,	// (0x0006df97) popup_call2_audio_out_window_t3_ParamLimits

0xeb3e,	// (0x0006df97) popup_call2_audio_out_window_t3

0xeb54,	// (0x0006dfad) popup_call2_audio_out_window_t4_ParamLimits

0xeb54,	// (0x0006dfad) popup_call2_audio_out_window_t4

0xeb6a,	// (0x0006dfc3) popup_call2_audio_out_window_t5_ParamLimits

0xeb6a,	// (0x0006dfc3) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0006ea04) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0006ea04) popup_call2_audio_out_window_t

0xebce,	// (0x0006e027) bg_popup_call2_in_pane_ParamLimits

0xebce,	// (0x0006e027) bg_popup_call2_in_pane

0xec2a,	// (0x0006e083) popup_call2_audio_in_window_g1_ParamLimits

0xec2a,	// (0x0006e083) popup_call2_audio_in_window_g1

0xec62,	// (0x0006e0bb) popup_call2_audio_in_window_g2_ParamLimits

0xec62,	// (0x0006e0bb) popup_call2_audio_in_window_g2

0xec9a,	// (0x0006e0f3) popup_call2_audio_in_window_g3_ParamLimits

0xec9a,	// (0x0006e0f3) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0006ea11) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0006ea11) popup_call2_audio_in_window_g

0xecf2,	// (0x0006e14b) popup_call2_audio_in_window_t1_ParamLimits

0xecf2,	// (0x0006e14b) popup_call2_audio_in_window_t1

0xed72,	// (0x0006e1cb) popup_call2_audio_in_window_t2_ParamLimits

0xed72,	// (0x0006e1cb) popup_call2_audio_in_window_t2

0xedf2,	// (0x0006e24b) popup_call2_audio_in_window_t3_ParamLimits

0xedf2,	// (0x0006e24b) popup_call2_audio_in_window_t3

0xee0c,	// (0x0006e265) popup_call2_audio_in_window_t4_ParamLimits

0xee0c,	// (0x0006e265) popup_call2_audio_in_window_t4

0xee1e,	// (0x0006e277) popup_call2_audio_in_window_t5_ParamLimits

0xee1e,	// (0x0006e277) popup_call2_audio_in_window_t5

0xee33,	// (0x0006e28c) popup_call2_audio_in_window_t6_ParamLimits

0xee33,	// (0x0006e28c) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0006ea1a) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0006ea1a) popup_call2_audio_in_window_t

0x5c6e,	// (0x000650c7) bg_popup_call2_in_pane_g1

0xef4a,	// (0x0006e3a3) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0006ea82) popup_cale_lunar_info_window_t

0x5c76,	// (0x000650cf) bg_popup_call2_rect_pane_ParamLimits

0x5c76,	// (0x000650cf) bg_popup_call2_rect_pane

0x0898,	// (0x0005fcf1) call2_cli_visual_graphic_pane

0x0898,	// (0x0005fcf1) call2_cli_visual_text_pane

0x9f03,	// (0x0006935c) smil_status_volume_pane_g3

0x0002,

0x6174,	// (0x000655cd) call2_cli_visual_graphic_pane_g1

0x6174,	// (0x000655cd) call2_cli_visual_graphic_pane_g2

0x6174,	// (0x000655cd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0006ea27) call2_cli_visual_graphic_pane_g

0xee48,	// (0x0006e2a1) bg_popup_call2_rect_pane_g1

0x62b1,	// (0x0006570a) bg_popup_call2_rect_pane_g2

0xee50,	// (0x0006e2a9) bg_popup_call2_rect_pane_g3

0xee58,	// (0x0006e2b1) bg_popup_call2_rect_pane_g4

0xee60,	// (0x0006e2b9) bg_popup_call2_rect_pane_g5

0xee68,	// (0x0006e2c1) bg_popup_call2_rect_pane_g6

0xee70,	// (0x0006e2c9) bg_popup_call2_rect_pane_g7

0xee78,	// (0x0006e2d1) bg_popup_call2_rect_pane_g8

0xee80,	// (0x0006e2d9) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0006ea2e) bg_popup_call2_rect_pane_g

0xee88,	// (0x0006e2e1) bg_popup_call2_bubble_pane_g1

0xee90,	// (0x0006e2e9) bg_popup_call2_bubble_pane_g2

0xee98,	// (0x0006e2f1) bg_popup_call2_bubble_pane_g3

0xeea0,	// (0x0006e2f9) bg_popup_call2_bubble_pane_g4

0xeea8,	// (0x0006e301) bg_popup_call2_bubble_pane_g5

0xeeb0,	// (0x0006e309) bg_popup_call2_bubble_pane_g6

0xeeb8,	// (0x0006e311) bg_popup_call2_bubble_pane_g7

0xeec0,	// (0x0006e319) bg_popup_call2_bubble_pane_g8

0xeec8,	// (0x0006e321) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0006ea41) bg_popup_call2_bubble_pane_g

0x63a5,	// (0x000657fe) aid_cale_week_size_cell_pane

0x68db,	// (0x00065d34) aid_cams_cif_uncrop_pane_ParamLimits

0x68db,	// (0x00065d34) aid_cams_cif_uncrop_pane

0x6a7c,	// (0x00065ed5) aid_cams_size_cell_ParamLimits

0x6a7c,	// (0x00065ed5) aid_cams_size_cell

0x6a88,	// (0x00065ee1) grid_cams_pane_ParamLimits

0x6a96,	// (0x00065eef) linegrid_cams_pane_ParamLimits

0x6b8b,	// (0x00065fe4) call_video_pane_t1

0x6ba5,	// (0x00065ffe) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0006e72e) call_video_pane_t

0x7306,	// (0x0006675f) aid_cale_month_size_cell_pane_ParamLimits

0x7306,	// (0x0006675f) aid_cale_month_size_cell_pane

0xf672,	// (0x0006eacb) smil_status_volume_pane_g

0x9f10,	// (0x00069369) volume_smil_pane_ParamLimits

0x0431,	// (0x0005f88a) aid_popup2_width_pane

0x6212,	// (0x0006566b) cell_qdial_pane_g4_ParamLimits

0x6212,	// (0x0006566b) cell_qdial_pane_g4

0x83fb,	// (0x00067854) aid_blid_cardinal_pane_ParamLimits

0x840b,	// (0x00067864) aid_blid_destination_pane_ParamLimits

0x840b,	// (0x00067864) aid_blid_destination_pane

0x5c76,	// (0x000650cf) bg_popup_call_poc_act_pane_ParamLimits

0x5c76,	// (0x000650cf) bg_popup_call_poc_act_pane

0x5c76,	// (0x000650cf) bg_popup_call_poc_inact_pane_ParamLimits

0x5c76,	// (0x000650cf) bg_popup_call_poc_inact_pane

0xeed0,	// (0x0006e329) bg_popup_call_poc_act_pane_g1

0xeed8,	// (0x0006e331) bg_popup_call_poc_act_pane_g2

0xeee0,	// (0x0006e339) bg_popup_call_poc_act_pane_g3

0xeea0,	// (0x0006e2f9) bg_popup_call_poc_act_pane_g4

0xeea8,	// (0x0006e301) bg_popup_call_poc_act_pane_g5

0xeee8,	// (0x0006e341) bg_popup_call_poc_act_pane_g6

0xeeb8,	// (0x0006e311) bg_popup_call_poc_act_pane_g7

0xeef0,	// (0x0006e349) bg_popup_call_poc_act_pane_g8

0x0898,	// (0x0005fcf1) main_usb_pane

0xf057,	// (0x0006e4b0) popup_cale_lunar_info_window

0x6ea1,	// (0x000662fa) im_reading_pane_t1_ParamLimits

0x6f01,	// (0x0006635a) list_im_pane_ParamLimits

0x6f12,	// (0x0006636b) scroll_pane_cp07_ParamLimits

0x0898,	// (0x0005fcf1) grid_highlight_pane_cp012

0x5c76,	// (0x000650cf) mup_scale_pane_ParamLimits

0x7fc0,	// (0x00067419) main_usb_pane_g1_ParamLimits

0x7fc0,	// (0x00067419) main_usb_pane_g1

0x9ab4,	// (0x00068f0d) main_usb_pane_g2_ParamLimits

0x9ab4,	// (0x00068f0d) main_usb_pane_g2

0x0001,

0xf612,	// (0x0006ea6b) main_usb_pane_g_ParamLimits

0xf612,	// (0x0006ea6b) main_usb_pane_g

0x9ac0,	// (0x00068f19) main_usb_pane_t1_ParamLimits

0x9ac0,	// (0x00068f19) main_usb_pane_t1

0x9ad2,	// (0x00068f2b) main_usb_pane_t2_ParamLimits

0x9ad2,	// (0x00068f2b) main_usb_pane_t2

0x9ae4,	// (0x00068f3d) main_usb_pane_t3_ParamLimits

0x9ae4,	// (0x00068f3d) main_usb_pane_t3

0x9af6,	// (0x00068f4f) main_usb_pane_t4_ParamLimits

0x9af6,	// (0x00068f4f) main_usb_pane_t4

0x9b08,	// (0x00068f61) main_usb_pane_t5_ParamLimits

0x9b08,	// (0x00068f61) main_usb_pane_t5

0x9b1a,	// (0x00068f73) main_usb_pane_t6_ParamLimits

0x9b1a,	// (0x00068f73) main_usb_pane_t6

0x0005,

0xf617,	// (0x0006ea70) main_usb_pane_t_ParamLimits

0x83a1,	// (0x000677fa) aid_text_placing

0x83ad,	// (0x00067806) main_location2_pane_t1_ParamLimits

0x83c1,	// (0x0006781a) main_location2_pane_t2_ParamLimits

0x83d5,	// (0x0006782e) main_location2_pane_t3_ParamLimits

0x83e9,	// (0x00067842) main_location2_pane_t4_ParamLimits

0x83e9,	// (0x00067842) main_location2_pane_t4

0xf436,	// (0x0006e88f) main_location2_pane_t_ParamLimits

0x5d52,	// (0x000651ab) find_pinb_pane_g2_ParamLimits

0x5d52,	// (0x000651ab) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0006e5dd) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0006e5dd) find_pinb_pane_g

0x5d5e,	// (0x000651b7) find_pinb_pane_t1_ParamLimits

0x5d70,	// (0x000651c9) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0006e5e2) find_pinb_pane_t_ParamLimits

0x0898,	// (0x0005fcf1) main_call3_pane

0x7687,	// (0x00066ae0) cale_month_day_heading_pane_t1_ParamLimits

0x76e5,	// (0x00066b3e) cale_month_day_heading_pane_t2_ParamLimits

0x774a,	// (0x00066ba3) cale_month_day_heading_pane_t3_ParamLimits

0x77af,	// (0x00066c08) cale_month_day_heading_pane_t4_ParamLimits

0x7814,	// (0x00066c6d) cale_month_day_heading_pane_t5_ParamLimits

0x7879,	// (0x00066cd2) cale_month_day_heading_pane_t6_ParamLimits

0x78e6,	// (0x00066d3f) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0006e766) cale_month_day_heading_pane_t_ParamLimits

0x7aee,	// (0x00066f47) smil_status_volume_pane

0x8dde,	// (0x00068237) postcard_address_pane_ParamLimits

0x8dde,	// (0x00068237) postcard_address_pane

0x8dea,	// (0x00068243) postcard_message_pane_ParamLimits

0x8dea,	// (0x00068243) postcard_message_pane

0x9a74,	// (0x00068ecd) call2_cli_visual_pane_t1_ParamLimits

0x9a74,	// (0x00068ecd) call2_cli_visual_pane_t1

0xa063,	// (0x000694bc) postcard_message_pane_t1_ParamLimits

0xa063,	// (0x000694bc) postcard_message_pane_t1

0xa04c,	// (0x000694a5) postcard_address_pane_t1_ParamLimits

0xa04c,	// (0x000694a5) postcard_address_pane_t1

0xa03d,	// (0x00069496) popup_call3_audio_in_window_ParamLimits

0xa03d,	// (0x00069496) popup_call3_audio_in_window

0x9f25,	// (0x0006937e) bg_popup_call3_in_pane_ParamLimits

0x9f25,	// (0x0006937e) bg_popup_call3_in_pane

0x9f83,	// (0x000693dc) popup_call3_audio_in_window_g1_ParamLimits

0x9f83,	// (0x000693dc) popup_call3_audio_in_window_g1

0x9f9b,	// (0x000693f4) popup_call3_audio_in_window_g2_ParamLimits

0x9f9b,	// (0x000693f4) popup_call3_audio_in_window_g2

0x9fb3,	// (0x0006940c) popup_call3_audio_in_window_g3_ParamLimits

0x9fb3,	// (0x0006940c) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0006ead2) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0006ead2) popup_call3_audio_in_window_g

0x9fdb,	// (0x00069434) popup_call3_audio_in_window_t1_ParamLimits

0x9fdb,	// (0x00069434) popup_call3_audio_in_window_t1

0xa003,	// (0x0006945c) popup_call3_audio_in_window_t2_ParamLimits

0xa003,	// (0x0006945c) popup_call3_audio_in_window_t2

0xa02b,	// (0x00069484) popup_call3_audio_in_window_t3_ParamLimits

0xa02b,	// (0x00069484) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0006eadb) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0006eadb) popup_call3_audio_in_window_t

0x865b,	// (0x00067ab4) bg_popup_call3_rect_pane

0xee48,	// (0x0006e2a1) bg_popup_call3_rect_pane_g1

0x62b1,	// (0x0006570a) bg_popup_call3_rect_pane_g2

0xee50,	// (0x0006e2a9) bg_popup_call3_rect_pane_g3

0xee58,	// (0x0006e2b1) bg_popup_call3_rect_pane_g4

0xee60,	// (0x0006e2b9) bg_popup_call3_rect_pane_g5

0xee68,	// (0x0006e2c1) bg_popup_call3_rect_pane_g6

0xee70,	// (0x0006e2c9) bg_popup_call3_rect_pane_g7

0x8987,	// (0x00067de0) mup_visualizer_osc_pane

0x898f,	// (0x00067de8) mup_visualizer_spec_pane

0x9f45,	// (0x0006939e) call3_video_qcif_pane_ParamLimits

0x9f45,	// (0x0006939e) call3_video_qcif_pane

0x9f55,	// (0x000693ae) call3_video_qcif_uncrop_pane_ParamLimits

0x9f55,	// (0x000693ae) call3_video_qcif_uncrop_pane

0x9f61,	// (0x000693ba) call3_video_subqcif_pane_ParamLimits

0x9f61,	// (0x000693ba) call3_video_subqcif_pane

0x9f73,	// (0x000693cc) call3_video_subqcif_uncrop_pane_ParamLimits

0x9f73,	// (0x000693cc) call3_video_subqcif_uncrop_pane

0x9fcb,	// (0x00069424) popup_call3_audio_in_window_g4_ParamLimits

0x9fcb,	// (0x00069424) popup_call3_audio_in_window_g4

0x9ef2,	// (0x0006934b) mup_spec_half_pane

0x9efb,	// (0x00069354) mup_spec_half_pane_cp

0x0c76,	// (0x000600cf) mup_osc_middle_pane

0x0c7f,	// (0x000600d8) mup_visualizer_osc_pane_g1

0x9ed3,	// (0x0006932c) mup_spec_bar_pane_ParamLimits

0x9ed3,	// (0x0006932c) mup_spec_bar_pane

0xf0db,	// (0x0006e534) mup_spec_bar_pane_g1

0xf0e5,	// (0x0006e53e) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0006eac6) mup_spec_bar_pane_g

0x63a5,	// (0x000657fe) aid_cale_week_size_cell_pane_ParamLimits

0x63b8,	// (0x00065811) bg_cale_heading_pane_ParamLimits

0x63cc,	// (0x00065825) bg_cale_pane_cp01_ParamLimits

0x63e5,	// (0x0006583e) cale_week_corner_pane_ParamLimits

0x63f6,	// (0x0006584f) cale_week_day_heading_pane_ParamLimits

0x640a,	// (0x00065863) cale_week_scroll_pane_g1_ParamLimits

0x641b,	// (0x00065874) cale_week_scroll_pane_g2_ParamLimits

0x642c,	// (0x00065885) cale_week_scroll_pane_g3_ParamLimits

0x643d,	// (0x00065896) cale_week_scroll_pane_g4_ParamLimits

0x644e,	// (0x000658a7) cale_week_scroll_pane_g5_ParamLimits

0x645f,	// (0x000658b8) cale_week_scroll_pane_g6_ParamLimits

0x6470,	// (0x000658c9) cale_week_scroll_pane_g7_ParamLimits

0x6483,	// (0x000658dc) cale_week_scroll_pane_g8_ParamLimits

0x6496,	// (0x000658ef) cale_week_scroll_pane_g9_ParamLimits

0x64a7,	// (0x00065900) cale_week_scroll_pane_g10_ParamLimits

0x64b8,	// (0x00065911) cale_week_scroll_pane_g11_ParamLimits

0x64c9,	// (0x00065922) cale_week_scroll_pane_g12_ParamLimits

0x64da,	// (0x00065933) cale_week_scroll_pane_g13_ParamLimits

0x64eb,	// (0x00065944) cale_week_scroll_pane_g14_ParamLimits

0x64fc,	// (0x00065955) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0006e66e) cale_week_scroll_pane_g_ParamLimits

0x650d,	// (0x00065966) cale_week_time_pane_ParamLimits

0x6520,	// (0x00065979) grid_cale_week_pane_ParamLimits

0x6535,	// (0x0006598e) listscroll_cale_week_pane_t1

0x6547,	// (0x000659a0) scroll_pane_cp08_ParamLimits

0x736a,	// (0x000667c3) cale_month_corner_pane_ParamLimits

0x7634,	// (0x00066a8d) cale_month_pane_t1

0x7646,	// (0x00066a9f) cale_month_week_pane_ParamLimits

0x7fc0,	// (0x00067419) popup_call_status_window_g1_ParamLimits

0x7fce,	// (0x00067427) popup_call_status_window_g2_ParamLimits

0x7fda,	// (0x00067433) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0006e816) popup_call_status_window_g_ParamLimits

0x803f,	// (0x00067498) aid_call2_pane

0x4b76,	// (0x00063fcf) msg_header_pane_g1

0x8dde,	// (0x00068237) postcard_address2_pane_ParamLimits

0x8dde,	// (0x00068237) postcard_address2_pane

0x8dea,	// (0x00068243) postcard_message2_pane_ParamLimits

0x8dea,	// (0x00068243) postcard_message2_pane

0x9e61,	// (0x000692ba) message2_row_pane_ParamLimits

0x9e61,	// (0x000692ba) message2_row_pane

0x9e7e,	// (0x000692d7) address2_row_pane_ParamLimits

0x9e7e,	// (0x000692d7) address2_row_pane

0xf0a9,	// (0x0006e502) postcard_message2_row_pane_g1

0xf0b1,	// (0x0006e50a) postcard_message2_row_pane_t1

0xf0a9,	// (0x0006e502) address2_row_pane_g1

0xf0b1,	// (0x0006e50a) address2_row_pane_t1

0x6791,	// (0x00065bea) aid_size_cell_vorec

0x0898,	// (0x0005fcf1) main_rss_pane

0x9e91,	// (0x000692ea) rss_list_single_pane_ParamLimits

0x9e91,	// (0x000692ea) rss_list_single_pane

0xf0bf,	// (0x0006e518) rss_list_single_pane_t1

0xf0cd,	// (0x0006e526) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0006eac1) rss_list_single_pane_t

0x0898,	// (0x0005fcf1) main_camera2_pane

0x0898,	// (0x0005fcf1) main_video2_pane

0xa0c7,	// (0x00069520) cams_zoom_pane_cp2_ParamLimits

0xa0c7,	// (0x00069520) cams_zoom_pane_cp2

0xa0d3,	// (0x0006952c) image2_vga_pane_ParamLimits

0xa0d3,	// (0x0006952c) image2_vga_pane

0xa0e2,	// (0x0006953b) main_camera2_pane_g1_ParamLimits

0xa0e2,	// (0x0006953b) main_camera2_pane_g1

0xa0ee,	// (0x00069547) main_camera2_pane_g2_ParamLimits

0xa0ee,	// (0x00069547) main_camera2_pane_g2

0xa0fa,	// (0x00069553) main_camera2_pane_g3_ParamLimits

0xa0fa,	// (0x00069553) main_camera2_pane_g3

0xa106,	// (0x0006955f) main_camera2_pane_g4_ParamLimits

0xa106,	// (0x0006955f) main_camera2_pane_g4

0xa112,	// (0x0006956b) main_camera2_pane_g5_ParamLimits

0xa112,	// (0x0006956b) main_camera2_pane_g5

0xa11e,	// (0x00069577) main_camera2_pane_g6_ParamLimits

0xa11e,	// (0x00069577) main_camera2_pane_g6

0xa12a,	// (0x00069583) main_camera2_pane_g7_ParamLimits

0xa12a,	// (0x00069583) main_camera2_pane_g7

0xa136,	// (0x0006958f) main_camera2_pane_g8_ParamLimits

0xa136,	// (0x0006958f) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0006eae2) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0006eae2) main_camera2_pane_g

0xa14e,	// (0x000695a7) main_camera2_pane_t1_ParamLimits

0xa14e,	// (0x000695a7) main_camera2_pane_t1

0xa160,	// (0x000695b9) main_camera2_pane_t2_ParamLimits

0xa160,	// (0x000695b9) main_camera2_pane_t2

0xa172,	// (0x000695cb) main_camera2_pane_t3_ParamLimits

0xa172,	// (0x000695cb) main_camera2_pane_t3

0xa184,	// (0x000695dd) main_camera2_pane_t4_ParamLimits

0xa184,	// (0x000695dd) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0006eaf5) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0006eaf5) main_camera2_pane_t

0xa1e6,	// (0x0006963f) cams_zoom_pane_cp4_ParamLimits

0xa1e6,	// (0x0006963f) cams_zoom_pane_cp4

0xa1f6,	// (0x0006964f) image2_cif_pane_ParamLimits

0xa1f6,	// (0x0006964f) image2_cif_pane

0xa20b,	// (0x00069664) image2_subqcif_pane_ParamLimits

0xa20b,	// (0x00069664) image2_subqcif_pane

0xa21a,	// (0x00069673) main_video2_pane_g1_ParamLimits

0xa21a,	// (0x00069673) main_video2_pane_g1

0xa22c,	// (0x00069685) main_video2_pane_g2_ParamLimits

0xa22c,	// (0x00069685) main_video2_pane_g2

0xa23c,	// (0x00069695) main_video2_pane_g3_ParamLimits

0xa23c,	// (0x00069695) main_video2_pane_g3

0xa24c,	// (0x000696a5) main_video2_pane_g4_ParamLimits

0xa24c,	// (0x000696a5) main_video2_pane_g4

0xa25c,	// (0x000696b5) main_video2_pane_g5_ParamLimits

0xa25c,	// (0x000696b5) main_video2_pane_g5

0xa26c,	// (0x000696c5) main_video2_pane_g6_ParamLimits

0xa26c,	// (0x000696c5) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0006eb04) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0006eb04) main_video2_pane_g

0xa27e,	// (0x000696d7) main_video2_pane_t1_ParamLimits

0xa27e,	// (0x000696d7) main_video2_pane_t1

0xa298,	// (0x000696f1) main_video2_pane_t2_ParamLimits

0xa298,	// (0x000696f1) main_video2_pane_t2

0xa2be,	// (0x00069717) main_video2_pane_t3_ParamLimits

0xa2be,	// (0x00069717) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0006eb11) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0006eb11) main_video2_pane_t

0x9bd1,	// (0x0006902a) call_muted_g2

0x0001,

0xf65a,	// (0x0006eab3) call_muted_g

0x0898,	// (0x0005fcf1) main_mup2_pane

0x0d36,	// (0x0006018f) main_mup2_pane_g1_ParamLimits

0x0d36,	// (0x0006018f) main_mup2_pane_g1

0xa2e4,	// (0x0006973d) main_mup2_pane_g2_ParamLimits

0xa2e4,	// (0x0006973d) main_mup2_pane_g2

0xa566,	// (0x000699bf) main_mup_pane_g13_cp1

0xa56e,	// (0x000699c7) mup_volume_pane_cp1

0xa304,	// (0x0006975d) main_mup2_pane_g4_ParamLimits

0xa304,	// (0x0006975d) main_mup2_pane_g4

0xa319,	// (0x00069772) main_mup2_pane_g5_ParamLimits

0xa319,	// (0x00069772) main_mup2_pane_g5

0xa32e,	// (0x00069787) main_mup2_pane_g6_ParamLimits

0xa32e,	// (0x00069787) main_mup2_pane_g6

0xa343,	// (0x0006979c) main_mup2_pane_g7_ParamLimits

0xa343,	// (0x0006979c) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0006eb18) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0006eb18) main_mup2_pane_g

0xa35f,	// (0x000697b8) main_mup2_pane_t1_ParamLimits

0xa35f,	// (0x000697b8) main_mup2_pane_t1

0xa376,	// (0x000697cf) main_mup2_pane_t2_ParamLimits

0xa376,	// (0x000697cf) main_mup2_pane_t2

0xa38d,	// (0x000697e6) main_mup2_pane_t3_ParamLimits

0xa38d,	// (0x000697e6) main_mup2_pane_t3

0xa3a4,	// (0x000697fd) main_mup2_pane_t4_ParamLimits

0xa3a4,	// (0x000697fd) main_mup2_pane_t4

0xa3be,	// (0x00069817) main_mup2_pane_t5_ParamLimits

0xa3be,	// (0x00069817) main_mup2_pane_t5

0xa3d8,	// (0x00069831) main_mup2_pane_t6_ParamLimits

0xa3d8,	// (0x00069831) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0006eb27) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0006eb27) main_mup2_pane_t

0xa410,	// (0x00069869) mup2_visualizer_pane_ParamLimits

0xa410,	// (0x00069869) mup2_visualizer_pane

0xa446,	// (0x0006989f) mup_progress_pane_cp_ParamLimits

0xa446,	// (0x0006989f) mup_progress_pane_cp

0xa551,	// (0x000699aa) mup_volume_pane_cp_ParamLimits

0xa551,	// (0x000699aa) mup_volume_pane_cp

0xa45d,	// (0x000698b6) mup2_visualizer_pane_g1_ParamLimits

0xa45d,	// (0x000698b6) mup2_visualizer_pane_g1

0x0d08,	// (0x00060161) mup2_visualizer_pane_g2_ParamLimits

0x0d08,	// (0x00060161) mup2_visualizer_pane_g2

0xa472,	// (0x000698cb) mup2_visualizer_pane_g3_ParamLimits

0xa472,	// (0x000698cb) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0006eb34) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0006eb34) mup2_visualizer_pane_g

0x911e,	// (0x00068577) aid_size_cell_fmradio

0x9ce7,	// (0x00069140) aid_height_parent_landcape

0x6fdd,	// (0x00066436) wml_content_pane_cp

0x6fe5,	// (0x0006643e) wml_tabs_pane

0x6fee,	// (0x00066447) popup_wml_miniature_window

0x6ff6,	// (0x0006644f) scroll_pane_cp021

0x700a,	// (0x00066463) wml_content_pane_comp8

0x0898,	// (0x0005fcf1) bg_popup_sub_pane_cp05

0x0d26,	// (0x0006017f) popup_wml_miniature_window_g1

0x0d2e,	// (0x00060187) wml_miniature_view_pane

0xa480,	// (0x000698d9) aid_size_wml_view

0xa488,	// (0x000698e1) wml_miniature_view_pane_g1

0xa491,	// (0x000698ea) wml_miniature_view_pane_g2

0xa49a,	// (0x000698f3) wml_miniature_view_pane_g3

0xa4a2,	// (0x000698fb) wml_miniature_view_pane_g4

0xa4aa,	// (0x00069903) wml_miniature_view_pane_g5

0xa4b2,	// (0x0006990b) wml_miniature_view_pane_g6

0xa4ba,	// (0x00069913) wml_miniature_view_pane_g7

0xa4c2,	// (0x0006991b) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0006eb3b) wml_miniature_view_pane_g

0x0d36,	// (0x0006018f) background_graphic_ParamLimits

0x0d36,	// (0x0006018f) background_graphic

0x0d42,	// (0x0006019b) wml_tabs_2_pane

0x0d4b,	// (0x000601a4) wml_tabs_3_pane_ParamLimits

0x0d4b,	// (0x000601a4) wml_tabs_3_pane

0x0d5d,	// (0x000601b6) wml_tabs_4_pane_ParamLimits

0x0d5d,	// (0x000601b6) wml_tabs_4_pane

0x0d73,	// (0x000601cc) wml_tabs_5_pane_ParamLimits

0x0d73,	// (0x000601cc) wml_tabs_5_pane

0x0d8d,	// (0x000601e6) wml_tabs_pane_g2_ParamLimits

0x0d8d,	// (0x000601e6) wml_tabs_pane_g2

0x0da1,	// (0x000601fa) wml_tabs_pane_g3_ParamLimits

0x0da1,	// (0x000601fa) wml_tabs_pane_g3

0xa4ca,	// (0x00069923) wml_tabs_2_active_pane_ParamLimits

0xa4ca,	// (0x00069923) wml_tabs_2_active_pane

0xa4da,	// (0x00069933) wml_tabs_2_passive_pane_ParamLimits

0xa4da,	// (0x00069933) wml_tabs_2_passive_pane

0xa4ea,	// (0x00069943) wml_tabs_3_active_pane_cp_ParamLimits

0xa4ea,	// (0x00069943) wml_tabs_3_active_pane_cp

0xa4fb,	// (0x00069954) wml_tabs_3_passive_pane_ParamLimits

0xa4fb,	// (0x00069954) wml_tabs_3_passive_pane

0xa50c,	// (0x00069965) wml_tabs_3_passive_pane_cp_ParamLimits

0xa50c,	// (0x00069965) wml_tabs_3_passive_pane_cp

0xa51d,	// (0x00069976) tabs_4_active_pane

0xa525,	// (0x0006997e) tabs_4_passive_pane

0xa52d,	// (0x00069986) tabs_4_passive_pane_cp

0xa535,	// (0x0006998e) tabs_4_passive_pane_cp2

0x9aac,	// (0x00068f05) aid_height_text

0x8950,	// (0x00067da9) mup_volume_cont_pane_ParamLimits

0x8950,	// (0x00067da9) mup_volume_cont_pane

0x5d0c,	// (0x00065165) aid_size_cell_pinb

0x5d16,	// (0x0006516f) aid_size_list_pinb

0xa42f,	// (0x00069888) mup2_volume_cont_pane_ParamLimits

0xa42f,	// (0x00069888) mup2_volume_cont_pane

0xa53d,	// (0x00069996) mup2_volume_cont_pane_g1_ParamLimits

0xa53d,	// (0x00069996) mup2_volume_cont_pane_g1

0x58cf,	// (0x00064d28) aid_size_cell_touch_ParamLimits

0x58cf,	// (0x00064d28) aid_size_cell_touch

0x5b32,	// (0x00064f8b) touch_pane_ParamLimits

0x5b32,	// (0x00064f8b) touch_pane

0x041f,	// (0x0005f878) main_rss2_pane

0x0df7,	// (0x00060250) listscroll_rss2_pane

0x0e00,	// (0x00060259) rss2_navigation_pane

0x0e08,	// (0x00060261) list_rss2_pane

0x825b,	// (0x000676b4) scroll_pane_cp22

0x0e10,	// (0x00060269) rss2_navigation_pane_g1

0x0e19,	// (0x00060272) rss2_navigation_pane_g2

0x0e21,	// (0x0006027a) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0006eb4c) rss2_navigation_pane_g

0x0e29,	// (0x00060282) rss2_navigation_pane_t1

0xa576,	// (0x000699cf) rss2_list_single_pane_ParamLimits

0xa576,	// (0x000699cf) rss2_list_single_pane

0x0e37,	// (0x00060290) rss2_list_single_pane_t2

0x0e45,	// (0x0006029e) rss2_list_single_pane_t3_ParamLimits

0x0e45,	// (0x0006029e) rss2_list_single_pane_t3

0x0e62,	// (0x000602bb) rss2_list_single_pane_t4

0x7ad8,	// (0x00066f31) smil_status_pane_g1

0xf041,	// (0x0006e49a) main_image2_pane_ParamLimits

0xf041,	// (0x0006e49a) main_image2_pane

0xa142,	// (0x0006959b) main_camera2_pane_g9_ParamLimits

0xa142,	// (0x0006959b) main_camera2_pane_g9

0xa196,	// (0x000695ef) main_camera2_pane_t5_ParamLimits

0xa196,	// (0x000695ef) main_camera2_pane_t5

0xa1a8,	// (0x00069601) main_camera2_pane_t6_ParamLimits

0xa1a8,	// (0x00069601) main_camera2_pane_t6

0xa5b2,	// (0x00069a0b) main_image2_pane_g1_ParamLimits

0xa5b2,	// (0x00069a0b) main_image2_pane_g1

0x9108,	// (0x00068561) smil2_video_pane_ParamLimits

0x9108,	// (0x00068561) smil2_video_pane

0x48ed,	// (0x00063d46) aid_zoom_text_primary_cp

0x047d,	// (0x0005f8d6) popup_preview_fixed_window

0x6e99,	// (0x000662f2) im_reading_pane_g1

0xa08c,	// (0x000694e5) cams2_bc_adjust_pane_cp_ParamLimits

0xa08c,	// (0x000694e5) cams2_bc_adjust_pane_cp

0xa1d8,	// (0x00069631) cams2_bc_adjust_pane_ParamLimits

0xa1d8,	// (0x00069631) cams2_bc_adjust_pane

0xa5be,	// (0x00069a17) cams2_bc_adjust_pane_g1

0xa5c6,	// (0x00069a1f) cams2_slider_pane

0xa5cf,	// (0x00069a28) cams2_slider_pane_g1

0xa5d8,	// (0x00069a31) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0006eb53) cams2_slider_pane_g

0x5e7d,	// (0x000652d6) calc_display_pane_ParamLimits

0x5e9b,	// (0x000652f4) calc_paper_pane_ParamLimits

0x5eb7,	// (0x00065310) grid_calc_pane_ParamLimits

0x80a1,	// (0x000674fa) popup_clock_digital_window_t1_ParamLimits

0x8fcf,	// (0x00068428) main_image_pane_t1

0x5e63,	// (0x000652bc) aid_size_cell_calc_ParamLimits

0x5e63,	// (0x000652bc) aid_size_cell_calc

0x9d19,	// (0x00069172) popup_blid_sat_info2_window_ParamLimits

0x9d19,	// (0x00069172) popup_blid_sat_info2_window

0x0eac,	// (0x00060305) aid_size_cell_blid

0x0eb4,	// (0x0006030d) bg_popup_window_pane_cp07

0x0ed7,	// (0x00060330) grid_popup_blid_pane

0x0ee1,	// (0x0006033a) heading_pane_cp05_ParamLimits

0x0ee1,	// (0x0006033a) heading_pane_cp05

0x0fab,	// (0x00060404) cell_popup_blid_pane_ParamLimits

0x0fab,	// (0x00060404) cell_popup_blid_pane

0x0fd1,	// (0x0006042a) cell_popup_blid_pane_g1

0x0fd9,	// (0x00060432) cell_popup_blid_pane_t1

0xa3f5,	// (0x0006984e) mup2_indicator_pane_ParamLimits

0xa3f5,	// (0x0006984e) mup2_indicator_pane

0x865b,	// (0x00067ab4) mup2_visualizer_osc_pane

0x0d14,	// (0x0006016d) mup2_visualizer_spec_pane_ParamLimits

0x0d14,	// (0x0006016d) mup2_visualizer_spec_pane

0xa5f2,	// (0x00069a4b) mup2_spec_half_pane

0xa5fb,	// (0x00069a54) mup2_spec_half_pane_cp

0xa605,	// (0x00069a5e) mup2_spec_bar_pane_ParamLimits

0xa605,	// (0x00069a5e) mup2_spec_bar_pane

0xf0db,	// (0x0006e534) mup2_spec_bar_pane_g1

0xf0e5,	// (0x0006e53e) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0006eac6) mup2_spec_bar_pane_g

0xa624,	// (0x00069a7d) mup2_osc_middle_pane

0x0c7f,	// (0x000600d8) mup2_visualizer_osc_pane_g1

0x04a7,	// (0x0005f900) popup_number_entry_window_t1_ParamLimits

0x04ba,	// (0x0005f913) popup_number_entry_window_t2_ParamLimits

0x04cc,	// (0x0005f925) popup_number_entry_window_t3_ParamLimits

0x5b89,	// (0x00064fe2) popup_number_entry_window_t5_ParamLimits

0x5b89,	// (0x00064fe2) popup_number_entry_window_t5

0xf12f,	// (0x0006e588) popup_number_entry_window_t_ParamLimits

0x04de,	// (0x0005f937) text_title_cp2_ParamLimits

0x8c98,	// (0x000680f1) aid_hotspot_pointer_text2_pane

0x8d32,	// (0x0006818b) main_viewer_pane_g9_ParamLimits

0x8d32,	// (0x0006818b) main_viewer_pane_g9

0x7634,	// (0x00066a8d) cale_month_pane_t1_ParamLimits

0x7bd9,	// (0x00067032) bg_cale_pane_ParamLimits

0x7bf1,	// (0x0006704a) list_cale_pane_ParamLimits

0x6535,	// (0x0006598e) listscroll_cale_day_pane_t1

0x7c02,	// (0x0006705b) scroll_pane_cp09_ParamLimits

0x89fd,	// (0x00067e56) main_mup_eq_pane_t1_ParamLimits

0x89fd,	// (0x00067e56) main_mup_eq_pane_t1

0x8a17,	// (0x00067e70) main_mup_eq_pane_t2_ParamLimits

0x8a17,	// (0x00067e70) main_mup_eq_pane_t2

0x8a2f,	// (0x00067e88) main_mup_eq_pane_t3_ParamLimits

0x8a2f,	// (0x00067e88) main_mup_eq_pane_t3

0x8a47,	// (0x00067ea0) main_mup_eq_pane_t4_ParamLimits

0x8a47,	// (0x00067ea0) main_mup_eq_pane_t4

0x8a5f,	// (0x00067eb8) main_mup_eq_pane_t5_ParamLimits

0x8a5f,	// (0x00067eb8) main_mup_eq_pane_t5

0x8a77,	// (0x00067ed0) main_mup_eq_pane_t6_ParamLimits

0x8a77,	// (0x00067ed0) main_mup_eq_pane_t6

0x8a8b,	// (0x00067ee4) main_mup_eq_pane_t7_ParamLimits

0x8a8b,	// (0x00067ee4) main_mup_eq_pane_t7

0x8a9f,	// (0x00067ef8) main_mup_eq_pane_t8_ParamLimits

0x8a9f,	// (0x00067ef8) main_mup_eq_pane_t8

0x8ab5,	// (0x00067f0e) main_mup_eq_pane_t9_ParamLimits

0x8ab5,	// (0x00067f0e) main_mup_eq_pane_t9

0x8acd,	// (0x00067f26) main_mup_eq_pane_t10_ParamLimits

0x8acd,	// (0x00067f26) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0006e915) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0006e915) main_mup_eq_pane_t

0x8b8a,	// (0x00067fe3) mup_equalizer_pane_cp5_ParamLimits

0x8ba0,	// (0x00067ff9) mup_equalizer_pane_cp6_ParamLimits

0x8bb8,	// (0x00068011) mup_equalizer_pane_cp7_ParamLimits

0x041f,	// (0x0005f878) main_gallery_pane

0x0c88,	// (0x000600e1) smil2_volume_pane

0x0ca3,	// (0x000600fc) smil_status_volume_pane_g1_ParamLimits

0x0c90,	// (0x000600e9) smil_status_volume_pane_g2_ParamLimits

0x9f03,	// (0x0006935c) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0006eacb) smil_status_volume_pane_g_ParamLimits

0x0eb4,	// (0x0006030d) bg_popup_window_pane_cp07_ParamLimits

0x0ec2,	// (0x0006031b) blid_firmament_pane

0xa62d,	// (0x00069a86) aid_size_cell_gallery_ParamLimits

0xa62d,	// (0x00069a86) aid_size_cell_gallery

0xa63b,	// (0x00069a94) grid_gallery_pane_ParamLimits

0xa63b,	// (0x00069a94) grid_gallery_pane

0xa64b,	// (0x00069aa4) cell_gallery_pane_ParamLimits

0xa64b,	// (0x00069aa4) cell_gallery_pane

0x0fe7,	// (0x00060440) bg_cell_gallery_focus_pane_ParamLimits

0x0fe7,	// (0x00060440) bg_cell_gallery_focus_pane

0x0ff9,	// (0x00060452) cell_gallery_pane_g1_ParamLimits

0x0ff9,	// (0x00060452) cell_gallery_pane_g1

0xa699,	// (0x00069af2) cell_gallery_pane_g2_ParamLimits

0xa699,	// (0x00069af2) cell_gallery_pane_g2

0xa6a6,	// (0x00069aff) cell_gallery_pane_g3_ParamLimits

0xa6a6,	// (0x00069aff) cell_gallery_pane_g3

0x1005,	// (0x0006045e) cell_gallery_pane_g4_ParamLimits

0x1005,	// (0x0006045e) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0006eb79) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0006eb79) cell_gallery_pane_g

0x1011,	// (0x0006046a) bg_cell_gallery_focus_pane_g1

0x1019,	// (0x00060472) bg_cell_gallery_focus_pane_g2

0x1021,	// (0x0006047a) bg_cell_gallery_focus_pane_g3

0x1029,	// (0x00060482) bg_cell_gallery_focus_pane_g4

0x1031,	// (0x0006048a) bg_cell_gallery_focus_pane_g5

0x1039,	// (0x00060492) bg_cell_gallery_focus_pane_g6

0x1041,	// (0x0006049a) bg_cell_gallery_focus_pane_g7

0x1049,	// (0x000604a2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0006eb82) bg_cell_gallery_focus_pane_g

0x1051,	// (0x000604aa) aid_firma_cardinal

0x1065,	// (0x000604be) blid_firmament_pane_t1

0x107c,	// (0x000604d5) blid_firmament_pane_t2

0x1093,	// (0x000604ec) blid_firmament_pane_t3

0x10aa,	// (0x00060503) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0006eb93) blid_firmament_pane_t

0x10c1,	// (0x0006051a) blid_sat_info_pane

0x10d1,	// (0x0006052a) blid_sat_info_pane_g1

0x10d1,	// (0x0006052a) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0006eb9c) blid_sat_info_pane_g

0x10db,	// (0x00060534) blid_sat_info_pane_t1

0x10e9,	// (0x00060542) smil2_volume_content_pane

0x10f2,	// (0x0006054b) smil2_volume_pane_g1

0x10fa,	// (0x00060553) smil2_volume_content_pane_g1

0x1103,	// (0x0006055c) smil2_volume_content_pane_g2

0x110c,	// (0x00060565) smil2_volume_content_pane_g3

0x1115,	// (0x0006056e) smil2_volume_content_pane_g4

0x111e,	// (0x00060577) smil2_volume_content_pane_g5

0x1127,	// (0x00060580) smil2_volume_content_pane_g6

0x1130,	// (0x00060589) smil2_volume_content_pane_g7

0x1139,	// (0x00060592) smil2_volume_content_pane_g8

0x1142,	// (0x0006059b) smil2_volume_content_pane_g9

0x114b,	// (0x000605a4) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0006eba1) smil2_volume_content_pane_g

0x659d,	// (0x000659f6) cale_week_day_heading_pane_t1_ParamLimits

0x65b1,	// (0x00065a0a) cale_week_day_heading_pane_t2_ParamLimits

0x65c5,	// (0x00065a1e) cale_week_day_heading_pane_t3_ParamLimits

0x65d9,	// (0x00065a32) cale_week_day_heading_pane_t4_ParamLimits

0x65ed,	// (0x00065a46) cale_week_day_heading_pane_t5_ParamLimits

0x6601,	// (0x00065a5a) cale_week_day_heading_pane_t6_ParamLimits

0x6615,	// (0x00065a6e) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0006e68d) cale_week_day_heading_pane_t_ParamLimits

0x6629,	// (0x00065a82) bg_cale_side_pane_ParamLimits

0x6637,	// (0x00065a90) cale_week_time_pane_t1_ParamLimits

0x664f,	// (0x00065aa8) cale_week_time_pane_t2_ParamLimits

0x6667,	// (0x00065ac0) cale_week_time_pane_t3_ParamLimits

0x667f,	// (0x00065ad8) cale_week_time_pane_t4_ParamLimits

0x6697,	// (0x00065af0) cale_week_time_pane_t5_ParamLimits

0x66af,	// (0x00065b08) cale_week_time_pane_t6_ParamLimits

0x66c7,	// (0x00065b20) cale_week_time_pane_t7_ParamLimits

0x66df,	// (0x00065b38) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0006e69c) cale_week_time_pane_t_ParamLimits

0x66f7,	// (0x00065b50) cell_cale_week_pane_g2_ParamLimits

0x6629,	// (0x00065a82) bg_cale_side_pane_cp01_ParamLimits

0x795b,	// (0x00066db4) cale_month_week_pane_t1_ParamLimits

0x7972,	// (0x00066dcb) cale_month_week_pane_t2_ParamLimits

0x7989,	// (0x00066de2) cale_month_week_pane_t3_ParamLimits

0x79a0,	// (0x00066df9) cale_month_week_pane_t4_ParamLimits

0x79b7,	// (0x00066e10) cale_month_week_pane_t5_ParamLimits

0x79ce,	// (0x00066e27) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0006e775) cale_month_week_pane_t_ParamLimits

0x7a9b,	// (0x00066ef4) cell_cale_month_pane_g1_ParamLimits

0x041f,	// (0x0005f878) main_cale_event_viewer_pane

0x041f,	// (0x0005f878) listscroll_cale_event_viewer_pane

0x1154,	// (0x000605ad) list_cale_ev_pane

0x115c,	// (0x000605b5) scroll_pane_cp023

0x1168,	// (0x000605c1) field_cale_ev_pane_ParamLimits

0x1168,	// (0x000605c1) field_cale_ev_pane

0x1182,	// (0x000605db) field_cale_ev_content_pane_ParamLimits

0x1182,	// (0x000605db) field_cale_ev_content_pane

0x118e,	// (0x000605e7) field_cale_ev_pane_g1_ParamLimits

0x118e,	// (0x000605e7) field_cale_ev_pane_g1

0x119a,	// (0x000605f3) field_cale_ev_pane_g2_ParamLimits

0x119a,	// (0x000605f3) field_cale_ev_pane_g2

0x11b2,	// (0x0006060b) field_cale_ev_pane_g3_ParamLimits

0x11b2,	// (0x0006060b) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0006ebb6) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0006ebb6) field_cale_ev_pane_g

0x11ca,	// (0x00060623) field_cale_ev_pane_t1_ParamLimits

0x11ca,	// (0x00060623) field_cale_ev_pane_t1

0x11e1,	// (0x0006063a) field_cale_ev_content_pane_t1_ParamLimits

0x11e1,	// (0x0006063a) field_cale_ev_content_pane_t1

0x8c62,	// (0x000680bb) bg_button_pane_cp01

0x600e,	// (0x00065467) listscroll_cale_week_pane_ParamLimits

0x639b,	// (0x000657f4) popup_toolbar_window_cp01

0x6535,	// (0x0006598e) listscroll_cale_week_pane_t1_ParamLimits

0x600e,	// (0x00065467) listscroll_cale_day_pane_ParamLimits

0x639b,	// (0x000657f4) popup_toolbar_window_cp02

0x6535,	// (0x0006598e) listscroll_cale_day_pane_t1_ParamLimits

0x600e,	// (0x00065467) main_cale_month_pane_ParamLimits

0x9ddd,	// (0x00069236) popup_toolbar_window_cp03_ParamLimits

0x9ddd,	// (0x00069236) popup_toolbar_window_cp03

0x8fb7,	// (0x00068410) main_image_pane_g2_ParamLimits

0x8fb7,	// (0x00068410) main_image_pane_g2

0x8fc3,	// (0x0006841c) main_image_pane_g3_ParamLimits

0x8fc3,	// (0x0006841c) main_image_pane_g3

0x0002,

0xf54e,	// (0x0006e9a7) main_image_pane_g_ParamLimits

0xf54e,	// (0x0006e9a7) main_image_pane_g

0x8fcf,	// (0x00068428) main_image_pane_t1_ParamLimits

0x8fe6,	// (0x0006843f) main_image_pane_t2_ParamLimits

0x8fe6,	// (0x0006843f) main_image_pane_t2

0x8ff8,	// (0x00068451) main_image_pane_t3_ParamLimits

0x8ff8,	// (0x00068451) main_image_pane_t3

0x900a,	// (0x00068463) main_image_pane_t4_ParamLimits

0x900a,	// (0x00068463) main_image_pane_t4

0x0003,

0xf555,	// (0x0006e9ae) main_image_pane_t_ParamLimits

0xf555,	// (0x0006e9ae) main_image_pane_t

0x901c,	// (0x00068475) popup_image_details_window_cp01

0x9026,	// (0x0006847f) popup_toobar_trans_pane_cp01_ParamLimits

0x9026,	// (0x0006847f) popup_toobar_trans_pane_cp01

0x9d62,	// (0x000691bb) popup_image_details_window_ParamLimits

0x9d62,	// (0x000691bb) popup_image_details_window

0xf061,	// (0x0006e4ba) popup_image_focus_window

0xa07e,	// (0x000694d7) camera2_autofocus_pane_ParamLimits

0xa07e,	// (0x000694d7) camera2_autofocus_pane

0x041f,	// (0x0005f878) bg_popup_sub_pane_cp06

0x11fe,	// (0x00060657) popup_image_focus_window_g1

0x1206,	// (0x0006065f) popup_image_focus_window_g2

0x120e,	// (0x00060667) popup_image_focus_window_g3

0x1216,	// (0x0006066f) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0006ebbd) popup_image_focus_window_g

0x121e,	// (0x00060677) popup_image_focus_window_t1

0x122c,	// (0x00060685) popup_image_focus_window_t2

0x123c,	// (0x00060695) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0006ebc6) popup_image_focus_window_t

0x124a,	// (0x000606a3) camera2_autofocus_pane_g1

0xf041,	// (0x0006e49a) bg_tb_trans_pane_cp01

0x1258,	// (0x000606b1) popup_image_details_window_g1

0x126b,	// (0x000606c4) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0006ebd8) popup_image_details_window_g

0x1294,	// (0x000606ed) popup_image_details_window_t1

0x12a6,	// (0x000606ff) popup_image_details_window_t2

0x12bf,	// (0x00060718) popup_image_details_window_t3

0x12d3,	// (0x0006072c) popup_image_details_window_t4

0x12ee,	// (0x00060747) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0006ebdf) popup_image_details_window_t

0x5fe0,	// (0x00065439) bg_calc_paper_pane_ParamLimits

0x041f,	// (0x0005f878) grid_highlight_pane_cp013

0x5ff4,	// (0x0006544d) list_calc_pane_ParamLimits

0x6006,	// (0x0006545f) scroll_pane_cp024

0x600e,	// (0x00065467) bg_calc_display_pane_ParamLimits

0x601a,	// (0x00065473) calc_display_pane_t1_ParamLimits

0x602f,	// (0x00065488) calc_display_pane_t2_ParamLimits

0x6044,	// (0x0006549d) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0006e60f) calc_display_pane_t_ParamLimits

0x617e,	// (0x000655d7) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0006e62c) cell_calc_pane_g

0x6187,	// (0x000655e0) cell_calc_pane_t1

0x6196,	// (0x000655ef) grid_highlight_pane_cp02_ParamLimits

0x61ac,	// (0x00065605) toolbar_button_pane_cp01_ParamLimits

0x61ac,	// (0x00065605) toolbar_button_pane_cp01

0x9060,	// (0x000684b9) temp_image_control_pane_ParamLimits

0x9060,	// (0x000684b9) temp_image_control_pane

0xf041,	// (0x0006e49a) main_mp3_pane

0x1308,	// (0x00060761) temp_image_control_pane_g1_ParamLimits

0x1308,	// (0x00060761) temp_image_control_pane_g1

0x1316,	// (0x0006076f) temp_image_control_pane_g2_ParamLimits

0x1316,	// (0x0006076f) temp_image_control_pane_g2

0x1328,	// (0x00060781) temp_image_control_pane_g3_ParamLimits

0x1328,	// (0x00060781) temp_image_control_pane_g3

0xa6e3,	// (0x00069b3c) temp_image_control_pane_g4_ParamLimits

0xa6e3,	// (0x00069b3c) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0006ebea) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0006ebea) temp_image_control_pane_g

0x1308,	// (0x00060761) main_mp3_pane_g1

0xa6f4,	// (0x00069b4d) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0006ebf3) main_mp3_pane_g

0x136b,	// (0x000607c4) main_mp3_pane_t1

0x68ab,	// (0x00065d04) main_camera_pane_g8_ParamLimits

0x68ab,	// (0x00065d04) main_camera_pane_g8

0x6a0e,	// (0x00065e67) main_video_pane_g7_ParamLimits

0x6a0e,	// (0x00065e67) main_video_pane_g7

0xa1c6,	// (0x0006961f) main_camera2_pane_t7_ParamLimits

0xa1c6,	// (0x0006961f) main_camera2_pane_t7

0x6f9d,	// (0x000663f6) scroll_pane_cp025_ParamLimits

0x6f9d,	// (0x000663f6) scroll_pane_cp025

0x6fb1,	// (0x0006640a) scroll_pane_cp026_ParamLimits

0x6fb1,	// (0x0006640a) scroll_pane_cp026

0x6fc0,	// (0x00066419) wml_content_pane_ParamLimits

0x041f,	// (0x0005f878) main_touch_calib_pane

0xa798,	// (0x00069bf1) main_touch_calib_pane_g1

0xa7a4,	// (0x00069bfd) main_touch_calib_pane_g2

0xa7b0,	// (0x00069c09) main_touch_calib_pane_g3

0xa7bc,	// (0x00069c15) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0006ec11) main_touch_calib_pane_g

0xa7c8,	// (0x00069c21) main_touch_calib_pane_t1

0xa7df,	// (0x00069c38) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0006ec1a) main_touch_calib_pane_t

0x84e8,	// (0x00067941) mup_progress_pane_cp02

0x8507,	// (0x00067960) navi_pane_g1

0x85c2,	// (0x00067a1b) navi_pane_mp_t3

0xf041,	// (0x0006e49a) main_mp3_pane_ParamLimits

0x9e1b,	// (0x00069274) navi_pane_ParamLimits

0x1308,	// (0x00060761) main_mp3_pane_g1_ParamLimits

0xa6f4,	// (0x00069b4d) main_mp3_pane_g2_ParamLimits

0xa700,	// (0x00069b59) main_mp3_pane_g3_ParamLimits

0xa700,	// (0x00069b59) main_mp3_pane_g3

0xa70c,	// (0x00069b65) main_mp3_pane_g4_ParamLimits

0xa70c,	// (0x00069b65) main_mp3_pane_g4

0x1338,	// (0x00060791) main_mp3_pane_g5_ParamLimits

0x1338,	// (0x00060791) main_mp3_pane_g5

0x1346,	// (0x0006079f) main_mp3_pane_g6_ParamLimits

0x1346,	// (0x0006079f) main_mp3_pane_g6

0x1353,	// (0x000607ac) main_mp3_pane_g7_ParamLimits

0x1353,	// (0x000607ac) main_mp3_pane_g7

0x135f,	// (0x000607b8) main_mp3_pane_g8_ParamLimits

0x135f,	// (0x000607b8) main_mp3_pane_g8

0xf79a,	// (0x0006ebf3) main_mp3_pane_g_ParamLimits

0xa718,	// (0x00069b71) main_mp3_pane_t2

0xa728,	// (0x00069b81) main_mp3_pane_t3

0x1379,	// (0x000607d2) main_mp3_pane_t4

0x1387,	// (0x000607e0) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0006ec04) main_mp3_pane_t

0x1395,	// (0x000607ee) mup_progress_pane_cp01

0x48ed,	// (0x00063d46) aid_zoom_text_secondary2

0x1154,	// (0x000605ad) list_cale_ev2_pane

0x115c,	// (0x000605b5) scroll_pane_cp023_ParamLimits

0xa832,	// (0x00069c8b) field_cale_ev2_pane_ParamLimits

0xa832,	// (0x00069c8b) field_cale_ev2_pane

0xa866,	// (0x00069cbf) field_cale_ev2_pane_g1_ParamLimits

0xa866,	// (0x00069cbf) field_cale_ev2_pane_g1

0xa872,	// (0x00069ccb) field_cale_ev2_pane_g2_ParamLimits

0xa872,	// (0x00069ccb) field_cale_ev2_pane_g2

0xa88a,	// (0x00069ce3) field_cale_ev2_pane_g3_ParamLimits

0xa88a,	// (0x00069ce3) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0006ec25) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0006ec25) field_cale_ev2_pane_g

0x4bff,	// (0x00064058) field_cale_ev2_pane_t1_ParamLimits

0x4bff,	// (0x00064058) field_cale_ev2_pane_t1

0x4c16,	// (0x0006406f) field_cale_ev2_pane_t2_ParamLimits

0x4c16,	// (0x0006406f) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0006ec2e) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0006ec2e) field_cale_ev2_pane_t

0x8da8,	// (0x00068201) main_postcard_pane_g5_ParamLimits

0x8da8,	// (0x00068201) main_postcard_pane_g5

0x8db6,	// (0x0006820f) main_postcard_pane_g6_ParamLimits

0x8db6,	// (0x0006820f) main_postcard_pane_g6

0x6828,	// (0x00065c81) camera2_autofocus_pane_cp_ParamLimits

0x6828,	// (0x00065c81) camera2_autofocus_pane_cp

0xf041,	// (0x0006e49a) main_mup3_pane

0xa8ce,	// (0x00069d27) main_mup3_pane_g1_ParamLimits

0xa8ce,	// (0x00069d27) main_mup3_pane_g1

0xa8ef,	// (0x00069d48) main_mup3_pane_g2_ParamLimits

0xa8ef,	// (0x00069d48) main_mup3_pane_g2

0xa96a,	// (0x00069dc3) main_mup3_pane_g3_ParamLimits

0xa96a,	// (0x00069dc3) main_mup3_pane_g3

0xa9a9,	// (0x00069e02) main_mup3_pane_g4_ParamLimits

0xa9a9,	// (0x00069e02) main_mup3_pane_g4

0xa9e8,	// (0x00069e41) main_mup3_pane_g5_ParamLimits

0xa9e8,	// (0x00069e41) main_mup3_pane_g5

0xaa29,	// (0x00069e82) main_mup3_pane_g6_ParamLimits

0xaa29,	// (0x00069e82) main_mup3_pane_g6

0x13e5,	// (0x0006083e) main_mup3_pane_g7_ParamLimits

0x13e5,	// (0x0006083e) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0006ec3e) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0006ec3e) main_mup3_pane_g

0xaa9b,	// (0x00069ef4) main_mup3_pane_t1_ParamLimits

0xaa9b,	// (0x00069ef4) main_mup3_pane_t1

0xab0a,	// (0x00069f63) main_mup3_pane_t2_ParamLimits

0xab0a,	// (0x00069f63) main_mup3_pane_t2

0xabd3,	// (0x0006a02c) main_mup3_pane_t4_ParamLimits

0xabd3,	// (0x0006a02c) main_mup3_pane_t4

0xac25,	// (0x0006a07e) main_mup3_pane_t5_ParamLimits

0xac25,	// (0x0006a07e) main_mup3_pane_t5

0xaccd,	// (0x0006a126) main_mup3_pane_t6_ParamLimits

0xaccd,	// (0x0006a126) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0006ec4f) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0006ec4f) main_mup3_pane_t

0xad75,	// (0x0006a1ce) mup3_progress_pane_ParamLimits

0xad75,	// (0x0006a1ce) mup3_progress_pane

0xadda,	// (0x0006a233) popup_mup3_control_window_ParamLimits

0xadda,	// (0x0006a233) popup_mup3_control_window

0x13f3,	// (0x0006084c) popup_mup3_text_window

0xadf3,	// (0x0006a24c) mup3_progress_pane_t1

0xae0a,	// (0x0006a263) mup3_progress_pane_t2

0x13fb,	// (0x00060854) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0006ec5c) mup3_progress_pane_t

0x1412,	// (0x0006086b) mup_progress_pane_cp03

0x041f,	// (0x0005f878) bg_tb_trans_pane_cp04

0xae21,	// (0x0006a27a) mup3_volume_pane

0xae29,	// (0x0006a282) popup_mup3_control_window_g1

0xae32,	// (0x0006a28b) mup3_volume_pane_g1

0xae3b,	// (0x0006a294) mup3_volume_pane_g2

0xae44,	// (0x0006a29d) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0006ec63) mup3_volume_pane_g

0x041f,	// (0x0005f878) bg_tb_trans_pane_cp03

0x1422,	// (0x0006087b) popup_mup3_text_window_g1

0x142a,	// (0x00060883) popup_mup3_text_window_t1

0x613d,	// (0x00065596) list_calc_item_pane_g1_ParamLimits

0x0dde,	// (0x00060237) mup_volume_pane_cp_g1

0xa7f6,	// (0x00069c4f) main_touch_calib_pane_t3

0xa80a,	// (0x00069c63) main_touch_calib_pane_t4

0xa81e,	// (0x00069c77) main_touch_calib_pane_t5

0x0429,	// (0x0005f882) aid_cell_size_toolbar2

0x0431,	// (0x0005f88a) aid_popup3_width_pane

0x5903,	// (0x00064d5c) aid_zoom_text_msg_primary

0x67f5,	// (0x00065c4e) vorec_t7

0x6083,	// (0x000654dc) bg_calc_paper_pane_g1_ParamLimits

0x608f,	// (0x000654e8) bg_calc_paper_pane_g2_ParamLimits

0x609b,	// (0x000654f4) bg_calc_paper_pane_g3_ParamLimits

0x60a7,	// (0x00065500) bg_calc_paper_pane_g4_ParamLimits

0x60b3,	// (0x0006550c) bg_calc_paper_pane_g5_ParamLimits

0x60bf,	// (0x00065518) bg_calc_paper_pane_g6_ParamLimits

0x60d0,	// (0x00065529) bg_calc_paper_pane_g7_ParamLimits

0x60e1,	// (0x0006553a) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0006e616) bg_calc_paper_pane_g_ParamLimits

0x60f2,	// (0x0006554b) calc_bg_paper_pane_g9_ParamLimits

0x691d,	// (0x00065d76) image_qvga_pane_ParamLimits

0x691d,	// (0x00065d76) image_qvga_pane

0x5c76,	// (0x000650cf) bg_popup_sub_pane_cp04_ParamLimits

0x8f26,	// (0x0006837f) popup_mup_playback_window_g1_ParamLimits

0x8f32,	// (0x0006838b) popup_mup_playback_window_t1_ParamLimits

0x8f47,	// (0x000683a0) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0006e9a2) popup_mup_playback_window_t_ParamLimits

0xa2f5,	// (0x0006974e) main_mup2_pane_g3_ParamLimits

0xa2f5,	// (0x0006974e) main_mup2_pane_g3

0x6c13,	// (0x0006606c) popup_toolbar_window_cp04

0x966a,	// (0x00068ac3) popup_call2_audio_second_window_g3_ParamLimits

0x966a,	// (0x00068ac3) popup_call2_audio_second_window_g3

0xe653,	// (0x0006daac) popup_call2_audio_first_window_g4_ParamLimits

0xe653,	// (0x0006daac) popup_call2_audio_first_window_g4

0xecd2,	// (0x0006e12b) popup_call2_audio_in_window_g4_ParamLimits

0xecd2,	// (0x0006e12b) popup_call2_audio_in_window_g4

0x8f5c,	// (0x000683b5) aid_area_sk_bg_cut_ParamLimits

0x8f5c,	// (0x000683b5) aid_area_sk_bg_cut

0x8f69,	// (0x000683c2) aid_area_sk_bg_cut_2_ParamLimits

0x8f69,	// (0x000683c2) aid_area_sk_bg_cut_2

0xa689,	// (0x00069ae2) aid_placing_details_win

0xa691,	// (0x00069aea) aid_placing_details_win_2

0x124a,	// (0x000606a3) camera2_autofocus_pane_g1_ParamLimits

0x5ade,	// (0x00064f37) popup_fixed_preview_cale_window_ParamLimits

0x5ade,	// (0x00064f37) popup_fixed_preview_cale_window

0x8675,	// (0x00067ace) navi_slider_pane_g3

0x867e,	// (0x00067ad7) navi_slider_pane_g4

0x8687,	// (0x00067ae0) navi_slider_pane_g5

0x8675,	// (0x00067ace) navi_slider_pane_g6

0x8690,	// (0x00067ae9) navi_slider_pane_g7

0x8bd9,	// (0x00068032) mup_scale_pane_g3

0x8be2,	// (0x0006803b) mup_scale_pane_g4

0x8beb,	// (0x00068044) mup_scale_pane_g5

0x8bf4,	// (0x0006804d) mup_scale_pane_g6

0x8bfd,	// (0x00068056) mup_scale_pane_g7

0x8675,	// (0x00067ace) cams2_slider_pane_g3

0x0e93,	// (0x000602ec) cams2_slider_pane_g4

0xa5e1,	// (0x00069a3a) cams2_slider_pane_g5

0x8675,	// (0x00067ace) cams2_slider_pane_g6

0xa5e9,	// (0x00069a42) cams2_slider_pane_g7

0x10d1,	// (0x0006052a) camera2_autofocus_pane_cp_g1

0x1438,	// (0x00060891) bg_popup_preview_window_pane_cp02_ParamLimits

0x1438,	// (0x00060891) bg_popup_preview_window_pane_cp02

0x1444,	// (0x0006089d) list_fp_cale_pane_ParamLimits

0x1444,	// (0x0006089d) list_fp_cale_pane

0x1450,	// (0x000608a9) popup_fixed_preview_cale_window_t1_ParamLimits

0x1450,	// (0x000608a9) popup_fixed_preview_cale_window_t1

0xae4d,	// (0x0006a2a6) popup_fixed_preview_cale_window_t2_ParamLimits

0xae4d,	// (0x0006a2a6) popup_fixed_preview_cale_window_t2

0xae62,	// (0x0006a2bb) popup_fixed_preview_cale_window_t3_ParamLimits

0xae62,	// (0x0006a2bb) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0006ec6a) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0006ec6a) popup_fixed_preview_cale_window_t

0xae77,	// (0x0006a2d0) list_single_fp_cale_pane_ParamLimits

0xae77,	// (0x0006a2d0) list_single_fp_cale_pane

0x146e,	// (0x000608c7) list_single_fp_cale_pane_g1_ParamLimits

0x146e,	// (0x000608c7) list_single_fp_cale_pane_g1

0x147a,	// (0x000608d3) list_single_fp_cale_pane_g2_ParamLimits

0x147a,	// (0x000608d3) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0006ec71) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0006ec71) list_single_fp_cale_pane_g

0x1493,	// (0x000608ec) list_single_fp_cale_pane_t1_ParamLimits

0x1493,	// (0x000608ec) list_single_fp_cale_pane_t1

0x14a5,	// (0x000608fe) list_single_fp_cale_pane_t2_ParamLimits

0x14a5,	// (0x000608fe) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0006ec78) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0006ec78) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x041f,	// (0x0005f878) main_dialer_pane

0xae8b,	// (0x0006a2e4) aid_cell_size_keypad

0xae95,	// (0x0006a2ee) dialer_ne_pane

0xae9f,	// (0x0006a2f8) grid_dialer_command_1_pane

0xaea7,	// (0x0006a300) grid_dialer_command_2_pane

0xaeaf,	// (0x0006a308) grid_dialer_keypad_pane

0xaec3,	// (0x0006a31c) bg_popup_call_pane_cp06_ParamLimits

0xaec3,	// (0x0006a31c) bg_popup_call_pane_cp06

0xaecf,	// (0x0006a328) dialer_ne_clear_pane_ParamLimits

0xaecf,	// (0x0006a328) dialer_ne_clear_pane

0x14d8,	// (0x00060931) dialer_ne_pane_g1

0x14e0,	// (0x00060939) dialer_ne_pane_t1_ParamLimits

0x14e0,	// (0x00060939) dialer_ne_pane_t1

0xaedb,	// (0x0006a334) dialer_ne_pane_t2_ParamLimits

0xaedb,	// (0x0006a334) dialer_ne_pane_t2

0xaef8,	// (0x0006a351) dialer_ne_pane_t3_ParamLimits

0xaef8,	// (0x0006a351) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0006ec7d) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0006ec7d) dialer_ne_pane_t

0xaf1c,	// (0x0006a375) dialer_ne_pane_t3_copy1_ParamLimits

0xaf1c,	// (0x0006a375) dialer_ne_pane_t3_copy1

0xaf40,	// (0x0006a399) cell_dialer_keypad_pane_ParamLimits

0xaf40,	// (0x0006a399) cell_dialer_keypad_pane

0xaf57,	// (0x0006a3b0) cell_dialer_command_1_pane_ParamLimits

0xaf57,	// (0x0006a3b0) cell_dialer_command_1_pane

0xaf6d,	// (0x0006a3c6) cell_dialer_command_2_pane_ParamLimits

0xaf6d,	// (0x0006a3c6) cell_dialer_command_2_pane

0x14f2,	// (0x0006094b) bg_button_pane_cp02_ParamLimits

0x14f2,	// (0x0006094b) bg_button_pane_cp02

0xaf7c,	// (0x0006a3d5) cell_dialer_keypad_pane_g1_ParamLimits

0xaf7c,	// (0x0006a3d5) cell_dialer_keypad_pane_g1

0x14f2,	// (0x0006094b) bg_button_pane_cp03_ParamLimits

0x14f2,	// (0x0006094b) bg_button_pane_cp03

0xaf91,	// (0x0006a3ea) cell_dialer_command_1_pane_g1_ParamLimits

0xaf91,	// (0x0006a3ea) cell_dialer_command_1_pane_g1

0x14fe,	// (0x00060957) bg_button_pane_cp04

0xafa4,	// (0x0006a3fd) cell_dialer_command_2_pane_g1

0x865b,	// (0x00067ab4) bg_button_pane_cp06

0x1506,	// (0x0006095f) dialer_ne_clear_pane_g1

0x8513,	// (0x0006796c) navi_pane_g2

0x8541,	// (0x0006799a) navi_pane_g3

0x0002,

0xf44c,	// (0x0006e8a5) navi_pane_g

0x85d0,	// (0x00067a29) navi_pane_mv_g2

0x85f7,	// (0x00067a50) navi_pane_mv_g5

0x85ff,	// (0x00067a58) navi_pane_mv_t1

0x600e,	// (0x00065467) main_clock2_pane

0xafd2,	// (0x0006a42b) main_clock2_list_pane_ParamLimits

0xafd2,	// (0x0006a42b) main_clock2_list_pane

0xaffa,	// (0x0006a453) main_clock2_pane_t1_ParamLimits

0xaffa,	// (0x0006a453) main_clock2_pane_t1

0xb02a,	// (0x0006a483) main_clock2_pane_t2_ParamLimits

0xb02a,	// (0x0006a483) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0006ec84) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0006ec84) main_clock2_pane_t

0xb091,	// (0x0006a4ea) popup_clock_analogue_window_cp03_ParamLimits

0xb091,	// (0x0006a4ea) popup_clock_analogue_window_cp03

0xb0b1,	// (0x0006a50a) popup_clock_digital_window_cp02_ParamLimits

0xb0b1,	// (0x0006a50a) popup_clock_digital_window_cp02

0xb126,	// (0x0006a57f) main_clock2_list_single_pane_ParamLimits

0xb126,	// (0x0006a57f) main_clock2_list_single_pane

0x865b,	// (0x00067ab4) list_highlight_pane_cp05

0x150e,	// (0x00060967) main_clock2_list_single_pane_t1

0x6c13,	// (0x0006606c) popup_toolbar_window_cp04_ParamLimits

0xa6b3,	// (0x00069b0c) camera2_autofocus_pane_g2_ParamLimits

0xa6b3,	// (0x00069b0c) camera2_autofocus_pane_g2

0xa6bf,	// (0x00069b18) camera2_autofocus_pane_g3_ParamLimits

0xa6bf,	// (0x00069b18) camera2_autofocus_pane_g3

0xa6cb,	// (0x00069b24) camera2_autofocus_pane_g4_ParamLimits

0xa6cb,	// (0x00069b24) camera2_autofocus_pane_g4

0xa6d7,	// (0x00069b30) camera2_autofocus_pane_g5_ParamLimits

0xa6d7,	// (0x00069b30) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0006ebcd) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0006ebcd) camera2_autofocus_pane_g

0xa8ae,	// (0x00069d07) camera2_autofocus_pane_cp_g2

0xa8b6,	// (0x00069d0f) camera2_autofocus_pane_cp_g3

0xa8be,	// (0x00069d17) camera2_autofocus_pane_cp_g4

0xa8c6,	// (0x00069d1f) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0006ec33) camera2_autofocus_pane_cp_g

0xaebb,	// (0x0006a314) popup_dialer_spcha_window

0x041f,	// (0x0005f878) bg_popup_sub_pane_cp07

0x151c,	// (0x00060975) list_spcha_pane

0x1524,	// (0x0006097d) list_single_spcha_pane_ParamLimits

0x1524,	// (0x0006097d) list_single_spcha_pane

0x041f,	// (0x0005f878) list_highlight_pane_cp06

0x1535,	// (0x0006098e) list_single_spcha_pane_t1

0xea7c,	// (0x0006ded5) popup_call2_audio_out_window_g4_ParamLimits

0xea7c,	// (0x0006ded5) popup_call2_audio_out_window_g4

0x041f,	// (0x0005f878) main_imed2_pane

0xf069,	// (0x0006e4c2) popup_imed_adjust2_window

0x9d70,	// (0x000691c9) popup_imed_trans_window_ParamLimits

0x9d70,	// (0x000691c9) popup_imed_trans_window

0x0f0d,	// (0x00060366) popup_blid_sat_info2_window_t1

0x0f1b,	// (0x00060374) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0006eb62) popup_blid_sat_info2_window_t

0xb1d0,	// (0x0006a629) aid_size_cell_colour_35

0xb1ea,	// (0x0006a643) aid_size_cell_colour_112

0xb201,	// (0x0006a65a) aid_size_cell_effect

0xf041,	// (0x0006e49a) bg_tb_trans_pane_cp02

0xf0ee,	// (0x0006e547) heading_imed_pane

0xb21b,	// (0x0006a674) listscroll_imed_pane

0x1543,	// (0x0006099c) heading_imed_pane_g1

0x154b,	// (0x000609a4) heading_imed_pane_t1

0x1559,	// (0x000609b2) grid_imed_colour_35_pane_ParamLimits

0x1559,	// (0x000609b2) grid_imed_colour_35_pane

0xb227,	// (0x0006a680) grid_imed_effect_pane

0x1574,	// (0x000609cd) list_imed_aspect_pane

0xb237,	// (0x0006a690) scroll_pane_cp027_ParamLimits

0xb237,	// (0x0006a690) scroll_pane_cp027

0xb243,	// (0x0006a69c) cell_imed_effect_pane_ParamLimits

0xb243,	// (0x0006a69c) cell_imed_effect_pane

0x157c,	// (0x000609d5) cell_imed_colour_pane_ParamLimits

0x157c,	// (0x000609d5) cell_imed_colour_pane

0x15be,	// (0x00060a17) cell_imed_colour_pane_g1_ParamLimits

0x15be,	// (0x00060a17) cell_imed_colour_pane_g1

0x15cf,	// (0x00060a28) hgihlgiht_grid_pane_cp016_ParamLimits

0x15cf,	// (0x00060a28) hgihlgiht_grid_pane_cp016

0xb25b,	// (0x0006a6b4) cell_imed_effect_pane_g1

0xb263,	// (0x0006a6bc) grid_highlight_pane_cp017

0xf0fa,	// (0x0006e553) list_imed_single_pane_ParamLimits

0xf0fa,	// (0x0006e553) list_imed_single_pane

0x041f,	// (0x0005f878) list_highlight_pane_cp07

0x15e0,	// (0x00060a39) list_imed_aspect_pane_comp1_t1

0xf033,	// (0x0006e48c) bg_tb_trans_pane_cp05

0x1602,	// (0x00060a5b) popup_imed_adjust2_window_g1

0x1629,	// (0x00060a82) popup_imed_adjust2_window_t1

0x1641,	// (0x00060a9a) slider_imed_adjust_pane

0x1655,	// (0x00060aae) slider_imed_adjust_pane_g1

0x1665,	// (0x00060abe) slider_imed_adjust_pane_g2

0x1675,	// (0x00060ace) slider_imed_adjust_pane_g3

0x1686,	// (0x00060adf) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0006eca1) slider_imed_adjust_pane_g

0xb26c,	// (0x0006a6c5) aid_size_cell_clipart2

0xb278,	// (0x0006a6d1) grid_imed_clipart_pane

0x1697,	// (0x00060af0) scroll_pane_cp031

0xb282,	// (0x0006a6db) cell_imed_clipart_pane_ParamLimits

0xb282,	// (0x0006a6db) cell_imed_clipart_pane

0xb2a9,	// (0x0006a702) cell_imed_clipart_pane_g1

0x041f,	// (0x0005f878) grid_highlight_pane_cp014

0xafde,	// (0x0006a437) main_clock2_pane_g1_ParamLimits

0xafde,	// (0x0006a437) main_clock2_pane_g1

0xb0cd,	// (0x0006a526) aid_call2_pane_cp10

0xb0df,	// (0x0006a538) aid_call_pane_cp10

0x841f,	// (0x00067878) popup_clock_analogue_window_cp10_g1

0x841f,	// (0x00067878) popup_clock_analogue_window_cp10_g2

0xb0f1,	// (0x0006a54a) popup_clock_analogue_window_cp10_g3

0xb0f1,	// (0x0006a54a) popup_clock_analogue_window_cp10_g4

0x841f,	// (0x00067878) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0006ec8f) popup_clock_analogue_window_cp10_g

0xb107,	// (0x0006a560) popup_clock_analogue_window_cp10_t1

0xb138,	// (0x0006a591) clock_digital_number_pane_cp10_ParamLimits

0xb138,	// (0x0006a591) clock_digital_number_pane_cp10

0xb150,	// (0x0006a5a9) clock_digital_number_pane_cp11_ParamLimits

0xb150,	// (0x0006a5a9) clock_digital_number_pane_cp11

0xb168,	// (0x0006a5c1) clock_digital_number_pane_cp12_ParamLimits

0xb168,	// (0x0006a5c1) clock_digital_number_pane_cp12

0xb180,	// (0x0006a5d9) clock_digital_number_pane_cp13_ParamLimits

0xb180,	// (0x0006a5d9) clock_digital_number_pane_cp13

0xb198,	// (0x0006a5f1) clock_digital_separator_pane_cp10_ParamLimits

0xb198,	// (0x0006a5f1) clock_digital_separator_pane_cp10

0xb1b0,	// (0x0006a609) popup_clock_digital_window_cp02_t1_ParamLimits

0xb1b0,	// (0x0006a609) popup_clock_digital_window_cp02_t1

0x5c6e,	// (0x000650c7) clock_digital_number_pane_cp10_g1

0x5c6e,	// (0x000650c7) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0006ecaa) clock_digital_number_pane_cp10_g

0x5c6e,	// (0x000650c7) clock_digital_separator_pane_cp10_g1

0x5c6e,	// (0x000650c7) clock_digital_separator_pane_g2_cp10

0x862b,	// (0x00067a84) navi_pane_vded_g4

0x8634,	// (0x00067a8d) navi_pane_vded_g5

0x863d,	// (0x00067a96) navi_pane_vded_t1

0x041f,	// (0x0005f878) main_vded_pane

0xb2b2,	// (0x0006a70b) main_vded_pane_g1

0xb2be,	// (0x0006a717) main_vded_pane_g2

0xb2c8,	// (0x0006a721) main_vded_pane_g3

0x0002,

0xf856,	// (0x0006ecaf) main_vded_pane_g

0xb2d2,	// (0x0006a72b) main_vded_pane_t1

0xb2e0,	// (0x0006a739) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0006ecb6) main_vded_pane_t

0xb2ee,	// (0x0006a747) vded_slider_pane

0xb2f8,	// (0x0006a751) vded_video_pane

0x169f,	// (0x00060af8) vded_video_pane_g1

0xb302,	// (0x0006a75b) vded_video_pane_g2

0x10d1,	// (0x0006052a) vded_video_pane_g3

0x0002,

0xf862,	// (0x0006ecbb) vded_video_pane_g

0x16a9,	// (0x00060b02) vded_slider_pane_g1

0x0dde,	// (0x00060237) vded_slider_pane_g2

0x16b2,	// (0x00060b0b) vded_slider_pane_g3

0x16bb,	// (0x00060b14) vded_slider_pane_g4

0x16c4,	// (0x00060b1d) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0006ecc2) vded_slider_pane_g

0xadcc,	// (0x0006a225) mup3_rocker_pane_ParamLimits

0xadcc,	// (0x0006a225) mup3_rocker_pane

0xb30b,	// (0x0006a764) mup3_control_keys_pane_g1

0xb313,	// (0x0006a76c) mup3_control_keys_pane_g2

0xb31b,	// (0x0006a774) mup3_control_keys_pane_g3

0xb323,	// (0x0006a77c) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0006eccd) mup3_control_keys_pane_g

0x5afc,	// (0x00064f55) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5afc,	// (0x00064f55) popup_toolbar2_fixed_window_cp01

0xade6,	// (0x0006a23f) popup_toolbar2_fixed_window_cp02_ParamLimits

0xade6,	// (0x0006a23f) popup_toolbar2_fixed_window_cp02

0x97dc,	// (0x00068c35) popup_call2_audio_second_window_t4_ParamLimits

0x97dc,	// (0x00068c35) popup_call2_audio_second_window_t4

0xe8e9,	// (0x0006dd42) popup_call2_audio_first_window_t6_ParamLimits

0xe8e9,	// (0x0006dd42) popup_call2_audio_first_window_t6

0xeb7f,	// (0x0006dfd8) popup_call2_audio_out_window_t6_ParamLimits

0xeb7f,	// (0x0006dfd8) popup_call2_audio_out_window_t6

0x041f,	// (0x0005f878) main_vitu_pane

0xb333,	// (0x0006a78c) aid_size_cell_itu_ParamLimits

0xb333,	// (0x0006a78c) aid_size_cell_itu

0x5b24,	// (0x00064f7d) bg_popup_window_pane_cp08_ParamLimits

0x5b24,	// (0x00064f7d) bg_popup_window_pane_cp08

0xb341,	// (0x0006a79a) field_vitu_entry_pane_ParamLimits

0xb341,	// (0x0006a79a) field_vitu_entry_pane

0xb350,	// (0x0006a7a9) grid_vitu_function_pane_ParamLimits

0xb350,	// (0x0006a7a9) grid_vitu_function_pane

0xb360,	// (0x0006a7b9) grid_vitu_itu_pane_ParamLimits

0xb360,	// (0x0006a7b9) grid_vitu_itu_pane

0xb370,	// (0x0006a7c9) cell_vitu_itu_pane_ParamLimits

0xb370,	// (0x0006a7c9) cell_vitu_itu_pane

0xb385,	// (0x0006a7de) cell_vitu_function_pane_ParamLimits

0xb385,	// (0x0006a7de) cell_vitu_function_pane

0xf041,	// (0x0006e49a) bg_popup_sub_pane_cp08_ParamLimits

0xf041,	// (0x0006e49a) bg_popup_sub_pane_cp08

0xb399,	// (0x0006a7f2) field_vitu_entry_pane_t1_ParamLimits

0xb399,	// (0x0006a7f2) field_vitu_entry_pane_t1

0x16e5,	// (0x00060b3e) field_vitu_entry_pane_t2_ParamLimits

0x16e5,	// (0x00060b3e) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0006ecdb) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0006ecdb) field_vitu_entry_pane_t

0x1702,	// (0x00060b5b) bg_button_pane_cp05_ParamLimits

0x1702,	// (0x00060b5b) bg_button_pane_cp05

0xb3b6,	// (0x0006a80f) cell_vitu_itu_pane_g1

0xb3ce,	// (0x0006a827) cell_vitu_itu_pane_t1_ParamLimits

0xb3ce,	// (0x0006a827) cell_vitu_itu_pane_t1

0xb3e0,	// (0x0006a839) cell_vitu_itu_pane_t2_ParamLimits

0xb3e0,	// (0x0006a839) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0006ece0) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0006ece0) cell_vitu_itu_pane_t

0x1710,	// (0x00060b69) bg_button_pane_cp07

0xb415,	// (0x0006a86e) cell_vitu_function_pane_g1

0x5edb,	// (0x00065334) main_calc_pane_g1

0x58f7,	// (0x00064d50) aid_visual_content_pane

0x041f,	// (0x0005f878) main_vradio_pane

0xb41e,	// (0x0006a877) main_vradio_pane_g1_ParamLimits

0xb41e,	// (0x0006a877) main_vradio_pane_g1

0x171a,	// (0x00060b73) main_vradio_pane_g2_ParamLimits

0x171a,	// (0x00060b73) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0006ece7) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0006ece7) main_vradio_pane_g

0xb42e,	// (0x0006a887) main_vradio_pane_t1_ParamLimits

0xb42e,	// (0x0006a887) main_vradio_pane_t1

0xb440,	// (0x0006a899) main_vradio_pane_t2_ParamLimits

0xb440,	// (0x0006a899) main_vradio_pane_t2

0x1727,	// (0x00060b80) main_vradio_pane_t3_ParamLimits

0x1727,	// (0x00060b80) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0006ecec) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0006ecec) main_vradio_pane_t

0xb452,	// (0x0006a8ab) vradio_rocker_control_pane_ParamLimits

0xb452,	// (0x0006a8ab) vradio_rocker_control_pane

0xb45e,	// (0x0006a8b7) vradio_station_info_pane_ParamLimits

0xb45e,	// (0x0006a8b7) vradio_station_info_pane

0x173b,	// (0x00060b94) vradio_frequency_info_pane_ParamLimits

0x173b,	// (0x00060b94) vradio_frequency_info_pane

0x10d1,	// (0x0006052a) vradio_station_info_pane_g1

0x174a,	// (0x00060ba3) vradio_station_info_pane_t1_ParamLimits

0x174a,	// (0x00060ba3) vradio_station_info_pane_t1

0x176c,	// (0x00060bc5) vradio_station_info_pane_t2_ParamLimits

0x176c,	// (0x00060bc5) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0006ecf3) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0006ecf3) vradio_station_info_pane_t

0x177e,	// (0x00060bd7) vradio_tuning_pane

0x1786,	// (0x00060bdf) vradio_rocker_control_pane_g1

0x178e,	// (0x00060be7) vradio_rocker_control_pane_g2

0x1796,	// (0x00060bef) vradio_rocker_control_pane_g3

0x179e,	// (0x00060bf7) vradio_rocker_control_pane_g4

0x17a6,	// (0x00060bff) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0006ecf8) vradio_rocker_control_pane_g

0xb46d,	// (0x0006a8c6) vradio_frequency_info_pane_g1

0x17ae,	// (0x00060c07) vradio_frequency_info_pane_t1_ParamLimits

0x17ae,	// (0x00060c07) vradio_frequency_info_pane_t1

0xb477,	// (0x0006a8d0) vradio_tuning_pane_g1

0xb480,	// (0x0006a8d9) vradio_tuning_pane_t1

0x0445,	// (0x0005f89e) area_side_right_pane_ParamLimits

0x0445,	// (0x0005f89e) area_side_right_pane

0xeffa,	// (0x0006e453) status_small_pane_g1

0xf002,	// (0x0006e45b) status_small_pane_g2

0xf00b,	// (0x0006e464) status_small_pane_g3

0xf014,	// (0x0006e46d) status_small_pane_g4

0x0003,

0xf65f,	// (0x0006eab8) status_small_pane_g

0xf01d,	// (0x0006e476) status_small_pane_t1

0x041f,	// (0x0005f878) main_video3_pane

0x17c2,	// (0x00060c1b) cams_zoom_vslider_pane

0x17ca,	// (0x00060c23) image3_wide_pane_ParamLimits

0x17ca,	// (0x00060c23) image3_wide_pane

0x17e4,	// (0x00060c3d) image3_wide_small_pane

0x17f0,	// (0x00060c49) main_video3_pane_g1_ParamLimits

0x17f0,	// (0x00060c49) main_video3_pane_g1

0x180c,	// (0x00060c65) main_video3_pane_g2_ParamLimits

0x180c,	// (0x00060c65) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0006ed03) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0006ed03) main_video3_pane_g

0x1828,	// (0x00060c81) main_video3_pane_t1_ParamLimits

0x1828,	// (0x00060c81) main_video3_pane_t1

0x1853,	// (0x00060cac) main_video3_pane_t2_ParamLimits

0x1853,	// (0x00060cac) main_video3_pane_t2

0x187e,	// (0x00060cd7) main_video3_pane_t3_ParamLimits

0x187e,	// (0x00060cd7) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0006ed08) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0006ed08) main_video3_pane_t

0x18ab,	// (0x00060d04) cams_zoom_vslider_pane_g1

0x18b4,	// (0x00060d0d) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0006ed0f) cams_zoom_vslider_pane_g

0x18bc,	// (0x00060d15) small_slider_vertical_pane

0x10d1,	// (0x0006052a) small_slider_vertical_pane_g1

0x10d1,	// (0x0006052a) small_slider_vertical_pane_g2

0x18c4,	// (0x00060d1d) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0006ed14) small_slider_vertical_pane_g

0x041f,	// (0x0005f878) main_hwr_training_pane

0x18cd,	// (0x00060d26) hwr_training_instruct_pane_ParamLimits

0x18cd,	// (0x00060d26) hwr_training_instruct_pane

0xb48f,	// (0x0006a8e8) hwr_training_navi_pane_ParamLimits

0xb48f,	// (0x0006a8e8) hwr_training_navi_pane

0xb4a9,	// (0x0006a902) hwr_training_write_pane_ParamLimits

0xb4a9,	// (0x0006a902) hwr_training_write_pane

0x041f,	// (0x0005f878) bg_frame_shadow_pane

0x1904,	// (0x00060d5d) hwr_training_write_pane_g1

0x190c,	// (0x00060d65) hwr_training_write_pane_g2

0x1914,	// (0x00060d6d) hwr_training_write_pane_g3

0x191c,	// (0x00060d75) hwr_training_write_pane_g4

0x1924,	// (0x00060d7d) hwr_training_write_pane_g5

0x192c,	// (0x00060d85) hwr_training_write_pane_g6

0x1934,	// (0x00060d8d) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0006ed1b) hwr_training_write_pane_g

0xb4e1,	// (0x0006a93a) hwr_training_navi_pane_g1_ParamLimits

0xb4e1,	// (0x0006a93a) hwr_training_navi_pane_g1

0xb4f3,	// (0x0006a94c) hwr_training_navi_pane_g2_ParamLimits

0xb4f3,	// (0x0006a94c) hwr_training_navi_pane_g2

0xb505,	// (0x0006a95e) hwr_training_navi_pane_g3_ParamLimits

0xb505,	// (0x0006a95e) hwr_training_navi_pane_g3

0xb515,	// (0x0006a96e) hwr_training_navi_pane_g4_ParamLimits

0xb515,	// (0x0006a96e) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0006ed2a) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0006ed2a) hwr_training_navi_pane_g

0xb52f,	// (0x0006a988) hwr_training_navi_pane_t1

0xb53d,	// (0x0006a996) list_single_hwr_training_instruct_pane_ParamLimits

0xb53d,	// (0x0006a996) list_single_hwr_training_instruct_pane

0x193c,	// (0x00060d95) list_single_hwr_training_instruct_pane_t1

0x1011,	// (0x0006046a) bg_frame_shadow_pane_g1

0x194b,	// (0x00060da4) bg_frame_shadow_pane_g2

0x1953,	// (0x00060dac) bg_frame_shadow_pane_g3

0x195b,	// (0x00060db4) bg_frame_shadow_pane_g4

0x1963,	// (0x00060dbc) bg_frame_shadow_pane_g5

0x196b,	// (0x00060dc4) bg_frame_shadow_pane_g6

0x1973,	// (0x00060dcc) bg_frame_shadow_pane_g7

0x6289,	// (0x000656e2) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0006ed35) bg_frame_shadow_pane_g

0x041f,	// (0x0005f878) main_video_tele_dialer_pane

0xb573,	// (0x0006a9cc) aid_size_cell_video_keypad_ParamLimits

0xb573,	// (0x0006a9cc) aid_size_cell_video_keypad

0xb583,	// (0x0006a9dc) grid_video_dialer_keypad_pane_ParamLimits

0xb583,	// (0x0006a9dc) grid_video_dialer_keypad_pane

0xb5b7,	// (0x0006aa10) video_down_pane_cp_ParamLimits

0xb5b7,	// (0x0006aa10) video_down_pane_cp

0xb5e1,	// (0x0006aa3a) cell_video_dialer_keypad_pane_ParamLimits

0xb5e1,	// (0x0006aa3a) cell_video_dialer_keypad_pane

0x197b,	// (0x00060dd4) bg_button_pane_cp08_ParamLimits

0x197b,	// (0x00060dd4) bg_button_pane_cp08

0xb5f6,	// (0x0006aa4f) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb5f6,	// (0x0006aa4f) cell_video_dialer_keypad_pane_g1

0xadc0,	// (0x0006a219) mup3_rocker2_pane_ParamLimits

0xadc0,	// (0x0006a219) mup3_rocker2_pane

0x10d1,	// (0x0006052a) mup3_rocker2_pane_g1

0x9cfe,	// (0x00069157) main_dialer2_pane

0x041f,	// (0x0005f878) main_mp4_pane

0xb635,	// (0x0006aa8e) main_mp4_pane_g1_ParamLimits

0xb635,	// (0x0006aa8e) main_mp4_pane_g1

0xb643,	// (0x0006aa9c) main_mp4_pane_g2_ParamLimits

0xb643,	// (0x0006aa9c) main_mp4_pane_g2

0xb651,	// (0x0006aaaa) main_mp4_pane_g3_ParamLimits

0xb651,	// (0x0006aaaa) main_mp4_pane_g3

0xb696,	// (0x0006aaef) main_mp4_pane_g4_ParamLimits

0xb696,	// (0x0006aaef) main_mp4_pane_g4

0xb6b0,	// (0x0006ab09) main_mp4_pane_g5_ParamLimits

0xb6b0,	// (0x0006ab09) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0006ed55) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0006ed55) main_mp4_pane_g

0xb6e4,	// (0x0006ab3d) main_mp4_pane_t1_ParamLimits

0xb6e4,	// (0x0006ab3d) main_mp4_pane_t1

0xb740,	// (0x0006ab99) main_mp4_pane_t2_ParamLimits

0xb740,	// (0x0006ab99) main_mp4_pane_t2

0x1987,	// (0x00060de0) main_mp4_pane_t3_ParamLimits

0x1987,	// (0x00060de0) main_mp4_pane_t3

0xb792,	// (0x0006abeb) main_mp4_pane_t4_ParamLimits

0xb792,	// (0x0006abeb) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0006ed62) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0006ed62) main_mp4_pane_t

0xb7d6,	// (0x0006ac2f) mp4_progress_pane_ParamLimits

0xb7d6,	// (0x0006ac2f) mp4_progress_pane

0xb820,	// (0x0006ac79) mp4_rocker_pane_ParamLimits

0xb820,	// (0x0006ac79) mp4_rocker_pane

0x19af,	// (0x00060e08) mp4_progress_pane_t1

0x19c8,	// (0x00060e21) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0006ed6b) mp4_progress_pane_t

0x19e1,	// (0x00060e3a) mup_progress_pane_cp04

0x10d1,	// (0x0006052a) mp4_rocker_pane_g1

0xb840,	// (0x0006ac99) aid_cell_size_keypad2_ParamLimits

0xb840,	// (0x0006ac99) aid_cell_size_keypad2

0xb850,	// (0x0006aca9) dialer2_ne_pane_ParamLimits

0xb850,	// (0x0006aca9) dialer2_ne_pane

0xb85e,	// (0x0006acb7) grid_dialer2_keypad_pane_ParamLimits

0xb85e,	// (0x0006acb7) grid_dialer2_keypad_pane

0x229e,	// (0x000616f7) bg_popup_call_pane_cp07_ParamLimits

0x229e,	// (0x000616f7) bg_popup_call_pane_cp07

0xb86e,	// (0x0006acc7) dialer2_ne_pane_t1_ParamLimits

0xb86e,	// (0x0006acc7) dialer2_ne_pane_t1

0xb893,	// (0x0006acec) cell_dialer2_keypad_pane_ParamLimits

0xb893,	// (0x0006acec) cell_dialer2_keypad_pane

0x1a09,	// (0x00060e62) bg_button_pane_pane_cp04_ParamLimits

0x1a09,	// (0x00060e62) bg_button_pane_pane_cp04

0xb8aa,	// (0x0006ad03) cell_dialer2_keypad_pane_g1_ParamLimits

0xb8aa,	// (0x0006ad03) cell_dialer2_keypad_pane_g1

0x6b22,	// (0x00065f7b) aid_placing_vt_set_content_ParamLimits

0x6b22,	// (0x00065f7b) aid_placing_vt_set_content

0x6b42,	// (0x00065f9b) aid_placing_vt_set_title_ParamLimits

0x6b42,	// (0x00065f9b) aid_placing_vt_set_title

0x041f,	// (0x0005f878) main_image3_pane

0xb944,	// (0x0006ad9d) area_side_right_pane_cp01_ParamLimits

0xb944,	// (0x0006ad9d) area_side_right_pane_cp01

0x2845,	// (0x00061c9e) main_image3_pane_g1_ParamLimits

0x2845,	// (0x00061c9e) main_image3_pane_g1

0xb971,	// (0x0006adca) main_image3_pane_g2_ParamLimits

0xb971,	// (0x0006adca) main_image3_pane_g2

0xb98a,	// (0x0006ade3) main_image3_pane_g3_ParamLimits

0xb98a,	// (0x0006ade3) main_image3_pane_g3

0xb9a3,	// (0x0006adfc) main_image3_pane_g4_ParamLimits

0xb9a3,	// (0x0006adfc) main_image3_pane_g4

0x0003,

0xf921,	// (0x0006ed7a) main_image3_pane_g_ParamLimits

0xf921,	// (0x0006ed7a) main_image3_pane_g

0xb9bc,	// (0x0006ae15) main_image3_pane_t1_ParamLimits

0xb9bc,	// (0x0006ae15) main_image3_pane_t1

0xb9e1,	// (0x0006ae3a) main_image3_pane_t2_ParamLimits

0xb9e1,	// (0x0006ae3a) main_image3_pane_t2

0xba00,	// (0x0006ae59) main_image3_pane_t3_ParamLimits

0xba00,	// (0x0006ae59) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0006ed83) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0006ed83) main_image3_pane_t

0x5b24,	// (0x00064f7d) grid_sctrl_middle_pane_cp01_ParamLimits

0x5b24,	// (0x00064f7d) grid_sctrl_middle_pane_cp01

0xba61,	// (0x0006aeba) cell_sctrl_middle_pane_cp01_ParamLimits

0xba61,	// (0x0006aeba) cell_sctrl_middle_pane_cp01

0xba72,	// (0x0006aecb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xba72,	// (0x0006aecb) cell_sctrl_middle_pane_cp01_g1

0x041f,	// (0x0005f878) main_call4_pane

0xba7f,	// (0x0006aed8) aid_size_button_call4_ParamLimits

0xba7f,	// (0x0006aed8) aid_size_button_call4

0xbaaf,	// (0x0006af08) call4_windows_pane_ParamLimits

0xbaaf,	// (0x0006af08) call4_windows_pane

0xbac9,	// (0x0006af22) grid_call4_button_pane_ParamLimits

0xbac9,	// (0x0006af22) grid_call4_button_pane

0x1a15,	// (0x00060e6e) call4_windows_conf_pane

0x1a2a,	// (0x00060e83) popup_call4_audio_first_window_ParamLimits

0x1a2a,	// (0x00060e83) popup_call4_audio_first_window

0x1a76,	// (0x00060ecf) popup_call4_audio_second_window_ParamLimits

0x1a76,	// (0x00060ecf) popup_call4_audio_second_window

0x1a8a,	// (0x00060ee3) popup_call4_audio_wait_window_ParamLimits

0x1a8a,	// (0x00060ee3) popup_call4_audio_wait_window

0xbaed,	// (0x0006af46) cell_call4_button_pane_ParamLimits

0xbaed,	// (0x0006af46) cell_call4_button_pane

0xbb12,	// (0x0006af6b) bg_button_pane_cp09_ParamLimits

0xbb12,	// (0x0006af6b) bg_button_pane_cp09

0xbb1e,	// (0x0006af77) cell_call4_button_pane_g1_ParamLimits

0xbb1e,	// (0x0006af77) cell_call4_button_pane_g1

0xbb2b,	// (0x0006af84) cell_call4_button_pane_t1_ParamLimits

0xbb2b,	// (0x0006af84) cell_call4_button_pane_t1

0x1ad2,	// (0x00060f2b) popup_call4_audio_conf_window_ParamLimits

0x1ad2,	// (0x00060f2b) popup_call4_audio_conf_window

0xadf3,	// (0x0006a24c) mup3_progress_pane_t1_ParamLimits

0xae0a,	// (0x0006a263) mup3_progress_pane_t2_ParamLimits

0x13fb,	// (0x00060854) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0006ec5c) mup3_progress_pane_t_ParamLimits

0x1412,	// (0x0006086b) mup_progress_pane_cp03_ParamLimits

0xb32b,	// (0x0006a784) mup3_control_keys_pane_g4_copy1

0xb804,	// (0x0006ac5d) mp4_rocker2_pane_ParamLimits

0xb804,	// (0x0006ac5d) mp4_rocker2_pane

0x1aee,	// (0x00060f47) mp4_rocker2_pane_g1

0x1ae6,	// (0x00060f3f) mp4_rocker2_pane_g2

0xbb3d,	// (0x0006af96) mp4_rocker2_pane_g3

0xbb45,	// (0x0006af9e) mp4_rocker2_pane_g4

0xbb4d,	// (0x0006afa6) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0006ed8c) mp4_rocker2_pane_g

0x041f,	// (0x0005f878) main_camera4_pane

0x041f,	// (0x0005f878) main_video4_pane

0xb593,	// (0x0006a9ec) main_video_tele_dialer_pane_t1_ParamLimits

0xb593,	// (0x0006a9ec) main_video_tele_dialer_pane_t1

0xb5a5,	// (0x0006a9fe) main_video_tele_dialer_pane_t2_ParamLimits

0xb5a5,	// (0x0006a9fe) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0006ed46) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0006ed46) main_video_tele_dialer_pane_t

0xbb6d,	// (0x0006afc6) cam4_autofocus_pane_ParamLimits

0xbb6d,	// (0x0006afc6) cam4_autofocus_pane

0xbb7b,	// (0x0006afd4) cam4_image_uncrop_pane_ParamLimits

0xbb7b,	// (0x0006afd4) cam4_image_uncrop_pane

0xbb92,	// (0x0006afeb) cam4_indicators_pane_ParamLimits

0xbb92,	// (0x0006afeb) cam4_indicators_pane

0xbbae,	// (0x0006b007) main_camera4_pane_g1_ParamLimits

0xbbae,	// (0x0006b007) main_camera4_pane_g1

0xbbba,	// (0x0006b013) main_camera4_pane_g2_ParamLimits

0xbbba,	// (0x0006b013) main_camera4_pane_g2

0xbbc6,	// (0x0006b01f) main_camera4_pane_g3_ParamLimits

0xbbc6,	// (0x0006b01f) main_camera4_pane_g3

0xbbd2,	// (0x0006b02b) main_camera4_pane_g4_ParamLimits

0xbbd2,	// (0x0006b02b) main_camera4_pane_g4

0xbbde,	// (0x0006b037) main_camera4_pane_g5_ParamLimits

0xbbde,	// (0x0006b037) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0006ed97) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0006ed97) main_camera4_pane_g

0xbbf8,	// (0x0006b051) main_camera4_pane_t1_ParamLimits

0xbbf8,	// (0x0006b051) main_camera4_pane_t1

0x1338,	// (0x00060791) bg_tb_trans_pane_cp06

0xbc24,	// (0x0006b07d) cam4_indicators_pane_g1

0xbc31,	// (0x0006b08a) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0006eda9) cam4_indicators_pane_g

0xbc51,	// (0x0006b0aa) cam4_indicators_pane_t1

0xbc7b,	// (0x0006b0d4) main_video4_pane_g1_ParamLimits

0xbc7b,	// (0x0006b0d4) main_video4_pane_g1

0xbc87,	// (0x0006b0e0) main_video4_pane_g2_ParamLimits

0xbc87,	// (0x0006b0e0) main_video4_pane_g2

0xbc93,	// (0x0006b0ec) main_video4_pane_g3_ParamLimits

0xbc93,	// (0x0006b0ec) main_video4_pane_g3

0xbc9f,	// (0x0006b0f8) main_video4_pane_g4_ParamLimits

0xbc9f,	// (0x0006b0f8) main_video4_pane_g4

0x0004,

0xf957,	// (0x0006edb0) main_video4_pane_g_ParamLimits

0xf957,	// (0x0006edb0) main_video4_pane_g

0xbcbf,	// (0x0006b118) vid4_indicators_pane_ParamLimits

0xbcbf,	// (0x0006b118) vid4_indicators_pane

0xbcdd,	// (0x0006b136) video4_image_uncrop_cif_pane_ParamLimits

0xbcdd,	// (0x0006b136) video4_image_uncrop_cif_pane

0xbcec,	// (0x0006b145) video4_image_uncrop_nhd_pane_ParamLimits

0xbcec,	// (0x0006b145) video4_image_uncrop_nhd_pane

0xbb7b,	// (0x0006afd4) video4_image_uncrop_vga_pane_ParamLimits

0xbb7b,	// (0x0006afd4) video4_image_uncrop_vga_pane

0xf041,	// (0x0006e49a) bg_tb_trans_pane_cp07

0xbc24,	// (0x0006b07d) vid4_indicators_pane_g1

0xbd01,	// (0x0006b15a) vid4_indicators_pane_g2

0xbd0e,	// (0x0006b167) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0006edbb) vid4_indicators_pane_g

0xbd3b,	// (0x0006b194) vid4_indicators_pane_t1

0xbd55,	// (0x0006b1ae) cam4_autofocus_pane_g1

0xbd5d,	// (0x0006b1b6) cam4_autofocus_pane_g2

0xbd65,	// (0x0006b1be) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0006edc6) cam4_autofocus_pane_g

0xbd6d,	// (0x0006b1c6) cam4_autofocus_pane_g3_copy1

0xb5c5,	// (0x0006aa1e) video_down_pane_cp_t1

0xb5d3,	// (0x0006aa2c) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0006ed4b) video_down_pane_cp_t

0x5b24,	// (0x00064f7d) popup_vitu2_window_ParamLimits

0x5b24,	// (0x00064f7d) popup_vitu2_window

0xbd75,	// (0x0006b1ce) aid_size_cell2_itu2_ParamLimits

0xbd75,	// (0x0006b1ce) aid_size_cell2_itu2

0xbd97,	// (0x0006b1f0) aid_size_cell_itu2_ParamLimits

0xbd97,	// (0x0006b1f0) aid_size_cell_itu2

0x229e,	// (0x000616f7) bg_popup_window_pane_cp09_ParamLimits

0x229e,	// (0x000616f7) bg_popup_window_pane_cp09

0xbddb,	// (0x0006b234) field_vitu2_entry_pane_ParamLimits

0xbddb,	// (0x0006b234) field_vitu2_entry_pane

0xbdfb,	// (0x0006b254) grid_vitu2_function_pane_ParamLimits

0xbdfb,	// (0x0006b254) grid_vitu2_function_pane

0xbe3f,	// (0x0006b298) grid_vitu2_itu_pane_ParamLimits

0xbe3f,	// (0x0006b298) grid_vitu2_itu_pane

0xbeb5,	// (0x0006b30e) cell_vitu2_itu_pane_ParamLimits

0xbeb5,	// (0x0006b30e) cell_vitu2_itu_pane

0xbeca,	// (0x0006b323) cell_vitu2_function_pane_ParamLimits

0xbeca,	// (0x0006b323) cell_vitu2_function_pane

0x1af6,	// (0x00060f4f) bg_popup_call_pane_cp08_ParamLimits

0x1af6,	// (0x00060f4f) bg_popup_call_pane_cp08

0x1b0f,	// (0x00060f68) field_vitu2_entry_pane_g1

0x1b1b,	// (0x00060f74) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0006edcd) field_vitu2_entry_pane_g

0x4c2b,	// (0x00064084) field_vitu2_entry_pane_t1_ParamLimits

0x4c2b,	// (0x00064084) field_vitu2_entry_pane_t1

0x4c49,	// (0x000640a2) field_vitu2_entry_pane_t2_ParamLimits

0x4c49,	// (0x000640a2) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0006edd4) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0006edd4) field_vitu2_entry_pane_t

0xbf0b,	// (0x0006b364) bg_button_pane_cp010_ParamLimits

0xbf0b,	// (0x0006b364) bg_button_pane_cp010

0xbf19,	// (0x0006b372) cell_vitu2_itu_pane_g1

0xbf37,	// (0x0006b390) cell_vitu2_itu_pane_t1_ParamLimits

0xbf37,	// (0x0006b390) cell_vitu2_itu_pane_t1

0x4c66,	// (0x000640bf) cell_vitu2_itu_pane_t2_ParamLimits

0x4c66,	// (0x000640bf) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0006edde) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0006edde) cell_vitu2_itu_pane_t

0xf041,	// (0x0006e49a) bg_button_pane_cp011

0xbf89,	// (0x0006b3e2) cell_vitu2_function_pane_g1

0x041f,	// (0x0005f878) main_myfav_hc_pane

0xba42,	// (0x0006ae9b) popup_image3_note_pane_ParamLimits

0xba42,	// (0x0006ae9b) popup_image3_note_pane

0xba50,	// (0x0006aea9) popup_image3_tool_bar_pane_ParamLimits

0xba50,	// (0x0006aea9) popup_image3_tool_bar_pane

0x4cd4,	// (0x0006412d) cell_vitu2_itu_pane_t3_ParamLimits

0x4cd4,	// (0x0006412d) cell_vitu2_itu_pane_t3

0x041f,	// (0x0005f878) bg_popup_trans_pane

0x1b5a,	// (0x00060fb3) grid_image3_tool_bar_pane

0x1b64,	// (0x00060fbd) bg_popup_trans_pane_g1

0x7159,	// (0x000665b2) bg_popup_trans_pane_g2

0x1b6c,	// (0x00060fc5) bg_popup_trans_pane_g3

0x1b74,	// (0x00060fcd) bg_popup_trans_pane_g4

0x1b7c,	// (0x00060fd5) bg_popup_trans_pane_g5

0x1b84,	// (0x00060fdd) bg_popup_trans_pane_g6

0x1b8c,	// (0x00060fe5) bg_popup_trans_pane_g7

0x1b94,	// (0x00060fed) bg_popup_trans_pane_g8

0x7139,	// (0x00066592) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0006ede5) bg_popup_trans_pane_g

0x1b9c,	// (0x00060ff5) cell_image3_tool_bar_pane_ParamLimits

0x1b9c,	// (0x00060ff5) cell_image3_tool_bar_pane

0x10d1,	// (0x0006052a) cell_image3_tool_bar_pane_g1

0x041f,	// (0x0005f878) bg_popup_trans_pane_cp1

0x1bb0,	// (0x00061009) popup_image3_note_pane_t1

0x1bbe,	// (0x00061017) popup_image3_note_pane_t2

0x1bcc,	// (0x00061025) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0006edf8) popup_image3_note_pane_t

0x1bda,	// (0x00061033) popup_image3_note_pane_t3_copy1

0xbf9d,	// (0x0006b3f6) bg_myfav_hc_instruction_pane_ParamLimits

0xbf9d,	// (0x0006b3f6) bg_myfav_hc_instruction_pane

0xbfb5,	// (0x0006b40e) cell_myfav_contact_pane_ParamLimits

0xbfb5,	// (0x0006b40e) cell_myfav_contact_pane

0xbfcf,	// (0x0006b428) cell_myfav_contact_pane_cp1_ParamLimits

0xbfcf,	// (0x0006b428) cell_myfav_contact_pane_cp1

0xbfe7,	// (0x0006b440) cell_myfav_contact_pane_cp2_ParamLimits

0xbfe7,	// (0x0006b440) cell_myfav_contact_pane_cp2

0xbfff,	// (0x0006b458) cell_myfav_contact_pane_cp3_ParamLimits

0xbfff,	// (0x0006b458) cell_myfav_contact_pane_cp3

0xc016,	// (0x0006b46f) cell_myfav_contact_pane_cp4_ParamLimits

0xc016,	// (0x0006b46f) cell_myfav_contact_pane_cp4

0xc02c,	// (0x0006b485) cell_myfav_contact_pane_cp5_ParamLimits

0xc02c,	// (0x0006b485) cell_myfav_contact_pane_cp5

0xc040,	// (0x0006b499) cell_myfav_contact_pane_cp6_ParamLimits

0xc040,	// (0x0006b499) cell_myfav_contact_pane_cp6

0xc054,	// (0x0006b4ad) cell_myfav_contact_pane_cp7_ParamLimits

0xc054,	// (0x0006b4ad) cell_myfav_contact_pane_cp7

0x1be8,	// (0x00061041) listscroll_gen_pane_cp05

0xc06c,	// (0x0006b4c5) main_myfav_hc_pane_g1_ParamLimits

0xc06c,	// (0x0006b4c5) main_myfav_hc_pane_g1

0xc084,	// (0x0006b4dd) main_myfav_hc_pane_g2_ParamLimits

0xc084,	// (0x0006b4dd) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0006edff) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0006edff) main_myfav_hc_pane_g

0xc0b4,	// (0x0006b50d) main_myfav_hc_pane_t1_ParamLimits

0xc0b4,	// (0x0006b50d) main_myfav_hc_pane_t1

0x1bf1,	// (0x0006104a) main_myfav_hc_pane_t2_ParamLimits

0x1bf1,	// (0x0006104a) main_myfav_hc_pane_t2

0x1c03,	// (0x0006105c) main_myfav_hc_pane_t3_ParamLimits

0x1c03,	// (0x0006105c) main_myfav_hc_pane_t3

0xc0cb,	// (0x0006b524) main_myfav_hc_pane_t4_ParamLimits

0xc0cb,	// (0x0006b524) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0006ee06) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0006ee06) main_myfav_hc_pane_t

0x10d1,	// (0x0006052a) bg_myfav_hc_instruction_pane_g1

0x1c15,	// (0x0006106e) cell_myfav_contact_pane_g1_ParamLimits

0x1c15,	// (0x0006106e) cell_myfav_contact_pane_g1

0x1c15,	// (0x0006106e) cell_myfav_contact_pane_g2_ParamLimits

0x1c15,	// (0x0006106e) cell_myfav_contact_pane_g2

0x1c21,	// (0x0006107a) cell_myfav_contact_pane_g3_ParamLimits

0x1c21,	// (0x0006107a) cell_myfav_contact_pane_g3

0x13e5,	// (0x0006083e) cell_myfav_contact_pane_g4_ParamLimits

0x13e5,	// (0x0006083e) cell_myfav_contact_pane_g4

0x1c2e,	// (0x00061087) cell_myfav_contact_pane_g5_ParamLimits

0x1c2e,	// (0x00061087) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0006ee11) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0006ee11) cell_myfav_contact_pane_g

0xc09c,	// (0x0006b4f5) main_myfav_hc_pane_g3_ParamLimits

0xc09c,	// (0x0006b4f5) main_myfav_hc_pane_g3

0x5a40,	// (0x00064e99) popup_adpt_find_window

0xc0f5,	// (0x0006b54e) afind_page_pane_ParamLimits

0xc0f5,	// (0x0006b54e) afind_page_pane

0xc102,	// (0x0006b55b) aid_size_cell_afind_ParamLimits

0xc102,	// (0x0006b55b) aid_size_cell_afind

0xc11c,	// (0x0006b575) bg_popup_sub_pane_cp09_ParamLimits

0xc11c,	// (0x0006b575) bg_popup_sub_pane_cp09

0xc129,	// (0x0006b582) find_pane_cp01_ParamLimits

0xc129,	// (0x0006b582) find_pane_cp01

0x1c3a,	// (0x00061093) grid_afind_control_pane_ParamLimits

0x1c3a,	// (0x00061093) grid_afind_control_pane

0xc136,	// (0x0006b58f) grid_afind_pane_ParamLimits

0xc136,	// (0x0006b58f) grid_afind_pane

0xc152,	// (0x0006b5ab) cell_afind_pane_ParamLimits

0xc152,	// (0x0006b5ab) cell_afind_pane

0x10d1,	// (0x0006052a) afind_page_pane_g1

0xc19a,	// (0x0006b5f3) afind_page_pane_g2

0xc1a3,	// (0x0006b5fc) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0006ee1c) afind_page_pane_g

0xc1ac,	// (0x0006b605) afind_page_pane_t1

0x1c4e,	// (0x000610a7) cell_afind_grid_control_pane_ParamLimits

0x1c4e,	// (0x000610a7) cell_afind_grid_control_pane

0x1a09,	// (0x00060e62) bg_button_pane_cp69_ParamLimits

0x1a09,	// (0x00060e62) bg_button_pane_cp69

0xc1c3,	// (0x0006b61c) cell_afind_pane_g1_ParamLimits

0xc1c3,	// (0x0006b61c) cell_afind_pane_g1

0xc1d0,	// (0x0006b629) cell_afind_pane_t1_ParamLimits

0xc1d0,	// (0x0006b629) cell_afind_pane_t1

0x6ab7,	// (0x00065f10) bg_button_pane_cp72

0x1c5d,	// (0x000610b6) cell_afind_grid_control_pane_g1

0x92a8,	// (0x00068701) aid_image_placing_area_ParamLimits

0x92a8,	// (0x00068701) aid_image_placing_area

0x16cd,	// (0x00060b26) field_vitu_entry_pane_g1_ParamLimits

0x16cd,	// (0x00060b26) field_vitu_entry_pane_g1

0x16d9,	// (0x00060b32) field_vitu_entry_pane_g2_ParamLimits

0x16d9,	// (0x00060b32) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0006ecd6) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0006ecd6) field_vitu_entry_pane_g

0xb3b6,	// (0x0006a80f) cell_vitu_itu_pane_g1_ParamLimits

0xb3f8,	// (0x0006a851) cell_vitu_itu_pane_t3_ParamLimits

0xb3f8,	// (0x0006a851) cell_vitu_itu_pane_t3

0x19af,	// (0x00060e08) mp4_progress_pane_t1_ParamLimits

0x19c8,	// (0x00060e21) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0006ed6b) mp4_progress_pane_t_ParamLimits

0x19e1,	// (0x00060e3a) mup_progress_pane_cp04_ParamLimits

0xc0df,	// (0x0006b538) main_myfav_hc_pane_t5_ParamLimits

0xc0df,	// (0x0006b538) main_myfav_hc_pane_t5

0x48e5,	// (0x00063d3e) aid_zoom_text_primary

0x5a40,	// (0x00064e99) popup_adpt_find_window_ParamLimits

0xf041,	// (0x0006e49a) main_cam_set_pane

0xbba0,	// (0x0006aff9) cam4_zoom_pane_ParamLimits

0xbba0,	// (0x0006aff9) cam4_zoom_pane

0xc1e2,	// (0x0006b63b) main_cam_set_pane_g1_ParamLimits

0xc1e2,	// (0x0006b63b) main_cam_set_pane_g1

0xc1f0,	// (0x0006b649) main_cam_set_pane_g2_ParamLimits

0xc1f0,	// (0x0006b649) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0006ee23) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0006ee23) main_cam_set_pane_g

0xc1fc,	// (0x0006b655) main_cam_set_pane_t1_ParamLimits

0xc1fc,	// (0x0006b655) main_cam_set_pane_t1

0xc218,	// (0x0006b671) main_cset_listscroll_pane_ParamLimits

0xc218,	// (0x0006b671) main_cset_listscroll_pane

0xc245,	// (0x0006b69e) main_cset_slider_pane_ParamLimits

0xc245,	// (0x0006b69e) main_cset_slider_pane

0x1c6e,	// (0x000610c7) main_cset_list_pane_ParamLimits

0x1c6e,	// (0x000610c7) main_cset_list_pane

0x1c7e,	// (0x000610d7) scroll_pane_cp028

0xc264,	// (0x0006b6bd) aid_area_touch_slider

0xc280,	// (0x0006b6d9) cset_slider_pane

0xc2aa,	// (0x0006b703) main_cset_slider_pane_g1

0xc2bf,	// (0x0006b718) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0006ee28) main_cset_slider_pane_g

0x1cb7,	// (0x00061110) main_cset_slider_pane_t1

0xc387,	// (0x0006b7e0) main_cset_slider_pane_t2

0xc3a1,	// (0x0006b7fa) main_cset_slider_pane_t3

0xc3bb,	// (0x0006b814) main_cset_slider_pane_t4

0xc3d9,	// (0x0006b832) main_cset_slider_pane_t5

0xc3fb,	// (0x0006b854) main_cset_slider_pane_t6

0xc412,	// (0x0006b86b) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0006ee4d) main_cset_slider_pane_t

0xc520,	// (0x0006b979) cset_list_set_pane_ParamLimits

0xc520,	// (0x0006b979) cset_list_set_pane

0xc53d,	// (0x0006b996) aid_position_infowindow_above

0xc545,	// (0x0006b99e) aid_position_infowindow_below

0xc54d,	// (0x0006b9a6) cset_list_set_pane_g1_ParamLimits

0xc54d,	// (0x0006b9a6) cset_list_set_pane_g1

0x4d21,	// (0x0006417a) cset_list_set_pane_g3_ParamLimits

0x4d21,	// (0x0006417a) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0006ee6c) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0006ee6c) cset_list_set_pane_g

0x4d30,	// (0x00064189) cset_list_set_pane_t1_ParamLimits

0x4d30,	// (0x00064189) cset_list_set_pane_t1

0xf041,	// (0x0006e49a) list_highlight_pane_cp021_ParamLimits

0xf041,	// (0x0006e49a) list_highlight_pane_cp021

0x8bd9,	// (0x00068032) cset_slider_pane_g1

0x8beb,	// (0x00068044) cset_slider_pane_g2

0x8be2,	// (0x0006803b) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0006ee71) cset_slider_pane_g

0xc559,	// (0x0006b9b2) aid_area_touch_cam4_zoom

0xc561,	// (0x0006b9ba) cam4_zoom_cont_pane

0xc569,	// (0x0006b9c2) cam4_zoom_pane_g1

0xc571,	// (0x0006b9ca) cam4_zoom_pane_g2

0xc579,	// (0x0006b9d2) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0006ee78) cam4_zoom_pane_g

0x25f0,	// (0x00061a49) cam4_zoom_cont_pane_g1

0x25f9,	// (0x00061a52) cam4_zoom_cont_pane_g2

0x2602,	// (0x00061a5b) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0006ee7f) cam4_zoom_cont_pane_g

0xba99,	// (0x0006aef2) call4_image_pane_ParamLimits

0xba99,	// (0x0006aef2) call4_image_pane

0x1a15,	// (0x00060e6e) call4_windows_conf_pane_ParamLimits

0x1a54,	// (0x00060ead) popup_call4_audio_in_window_ParamLimits

0x1a54,	// (0x00060ead) popup_call4_audio_in_window

0x041f,	// (0x0005f878) bg_popup_call2_act_pane_cp02

0x1aca,	// (0x00060f23) call4_list_conf_pane

0x10d1,	// (0x0006052a) call4_image_pane_g1

0x10d1,	// (0x0006052a) call4_image_pane_g2

0x0001,

0xf743,	// (0x0006eb9c) call4_image_pane_g

0x1d57,	// (0x000611b0) list_single_graphic_popup_conf4_pane_ParamLimits

0x1d57,	// (0x000611b0) list_single_graphic_popup_conf4_pane

0x041f,	// (0x0005f878) list_highlight_pane_cp022

0x1d6a,	// (0x000611c3) list_single_graphic_popup_conf4_pane_g1

0x8162,	// (0x000675bb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0006ee86) list_single_graphic_popup_conf4_pane_g

0x1d72,	// (0x000611cb) list_single_graphic_popup_conf4_pane_t1

0x6c65,	// (0x000660be) popup_vtel_slider_window_ParamLimits

0x6c65,	// (0x000660be) popup_vtel_slider_window

0x19f7,	// (0x00060e50) dialer2_ne_pane_t2_ParamLimits

0x19f7,	// (0x00060e50) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0006ed70) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0006ed70) dialer2_ne_pane_t

0xf041,	// (0x0006e49a) bg_popup_sub_pane_cp010_ParamLimits

0xf041,	// (0x0006e49a) bg_popup_sub_pane_cp010

0xc581,	// (0x0006b9da) popup_vtel_slider_window_g1_ParamLimits

0xc581,	// (0x0006b9da) popup_vtel_slider_window_g1

0xc58d,	// (0x0006b9e6) popup_vtel_slider_window_g2_ParamLimits

0xc58d,	// (0x0006b9e6) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0006ee8b) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0006ee8b) popup_vtel_slider_window_g

0xc5d5,	// (0x0006ba2e) vtel_slider_pane_ParamLimits

0xc5d5,	// (0x0006ba2e) vtel_slider_pane

0xc5e4,	// (0x0006ba3d) vtel_slider_pane_g1_ParamLimits

0xc5e4,	// (0x0006ba3d) vtel_slider_pane_g1

0xc5f1,	// (0x0006ba4a) vtel_slider_pane_g2_ParamLimits

0xc5f1,	// (0x0006ba4a) vtel_slider_pane_g2

0xc5fe,	// (0x0006ba57) vtel_slider_pane_g3_ParamLimits

0xc5fe,	// (0x0006ba57) vtel_slider_pane_g3

0xc5e4,	// (0x0006ba3d) vtel_slider_pane_g4_ParamLimits

0xc5e4,	// (0x0006ba3d) vtel_slider_pane_g4

0xc60b,	// (0x0006ba64) vtel_slider_pane_g5_ParamLimits

0xc60b,	// (0x0006ba64) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0006ee94) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0006ee94) vtel_slider_pane_g

0x041f,	// (0x0005f878) main_gallery2_pane

0xbdbd,	// (0x0006b216) aid_size_row_itut2_dropdow_list_ParamLimits

0xbdbd,	// (0x0006b216) aid_size_row_itut2_dropdow_list

0xbe1d,	// (0x0006b276) grid_vitu2_function_top_pane_ParamLimits

0xbe1d,	// (0x0006b276) grid_vitu2_function_top_pane

0xbe73,	// (0x0006b2cc) popup_vitu2_dropdown_list_window_ParamLimits

0xbe73,	// (0x0006b2cc) popup_vitu2_dropdown_list_window

0xbe93,	// (0x0006b2ec) popup_vitu2_match_list_window

0xc618,	// (0x0006ba71) cell_vitu2_function_top_pane_ParamLimits

0xc618,	// (0x0006ba71) cell_vitu2_function_top_pane

0xc638,	// (0x0006ba91) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc638,	// (0x0006ba91) cell_vitu2_function_top_pane_cp01

0xc656,	// (0x0006baaf) cell_vitu2_function_top_wide_pane_ParamLimits

0xc656,	// (0x0006baaf) cell_vitu2_function_top_wide_pane

0xf041,	// (0x0006e49a) bg_button_pane_cp012

0xc674,	// (0x0006bacd) cell_vitu2_function_top_pane_g1

0xc683,	// (0x0006badc) bg_button_pane_cp013_ParamLimits

0xc683,	// (0x0006badc) bg_button_pane_cp013

0xc69f,	// (0x0006baf8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc69f,	// (0x0006baf8) cell_vitu2_function_top_wide_pane_g1

0x5b24,	// (0x00064f7d) bg_popup_sub_pane_cp20

0xc6b7,	// (0x0006bb10) list_vitu2_match_list_pane

0x1b64,	// (0x00060fbd) bg_popup_sub_pane_cp20_g1

0x1b6c,	// (0x00060fc5) bg_popup_sub_pane_cp20_g2

0x7159,	// (0x000665b2) bg_popup_sub_pane_cp20_g3

0x1b74,	// (0x00060fcd) bg_popup_sub_pane_cp20_g4

0x7139,	// (0x00066592) bg_popup_sub_pane_cp20_g5

0x1d8e,	// (0x000611e7) bg_popup_sub_pane_cp20_g6

0x1b84,	// (0x00060fdd) bg_popup_sub_pane_cp20_g7

0x1b8c,	// (0x00060fe5) bg_popup_sub_pane_cp20_g8

0x1b94,	// (0x00060fed) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0006ee9f) bg_popup_sub_pane_cp20_g

0xc6cf,	// (0x0006bb28) list_vitu2_match_list_item_pane_ParamLimits

0xc6cf,	// (0x0006bb28) list_vitu2_match_list_item_pane

0xc6e1,	// (0x0006bb3a) list_vitu2_match_list_item_pane_t1

0x041f,	// (0x0005f878) bg_popup_sub_pane_cp21

0x7ff8,	// (0x00067451) grid_vitu2_dropdown_list_pane

0xc6ef,	// (0x0006bb48) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc6ef,	// (0x0006bb48) cell_vitu2_dropdown_list_char_pane

0xc710,	// (0x0006bb69) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc710,	// (0x0006bb69) cell_vitu2_dropdown_list_ctrl_pane

0x1dc0,	// (0x00061219) cell_vitu2_dropdown_list_char_pane_g1

0x1db7,	// (0x00061210) cell_vitu2_dropdown_list_char_pane_g2

0x1dae,	// (0x00061207) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0006eebc) cell_vitu2_dropdown_list_char_pane_g

0xc73c,	// (0x0006bb95) cell_vitu2_dropdown_list_char_pane_t1

0xc74a,	// (0x0006bba3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc74a,	// (0x0006bba3) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc75a,	// (0x0006bbb3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc75a,	// (0x0006bbb3) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc76b,	// (0x0006bbc4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc76b,	// (0x0006bbc4) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc77b,	// (0x0006bbd4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc77b,	// (0x0006bbd4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1338,	// (0x00060791) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1338,	// (0x00060791) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0006eec3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0006eec3) cell_vitu2_dropdown_list_ctrl_pane_g

0xc797,	// (0x0006bbf0) aid_size_cell_gallery2_ParamLimits

0xc797,	// (0x0006bbf0) aid_size_cell_gallery2

0xc7a5,	// (0x0006bbfe) grid_gallery2_pane_ParamLimits

0xc7a5,	// (0x0006bbfe) grid_gallery2_pane

0xc7b4,	// (0x0006bc0d) scroll_pane_cp029_ParamLimits

0xc7b4,	// (0x0006bc0d) scroll_pane_cp029

0xc7c0,	// (0x0006bc19) cell_gallery2_pane_ParamLimits

0xc7c0,	// (0x0006bc19) cell_gallery2_pane

0x1dc9,	// (0x00061222) cell_gallery2_pane_g2

0xc7f1,	// (0x0006bc4a) cell_gallery2_pane_g3

0x1dd3,	// (0x0006122c) cell_gallery2_pane_g4

0x1ddb,	// (0x00061234) cell_gallery2_pane_g5

0x865b,	// (0x00067ab4) grid_highlight_pane_cp10

0xbe93,	// (0x0006b2ec) popup_vitu2_match_list_window_ParamLimits

0xbea5,	// (0x0006b2fe) popup_vitu2_query_window_ParamLimits

0xbea5,	// (0x0006b2fe) popup_vitu2_query_window

0x041f,	// (0x0005f878) bg_vitu2_candi_button_pane

0x1dc0,	// (0x00061219) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1db7,	// (0x00061210) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1dae,	// (0x00061207) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x4d9a,	// (0x000641f3) bg_button_pane_cp015

0xc7f9,	// (0x0006bc52) bg_button_pane_cp016

0xc803,	// (0x0006bc5c) bg_button_pane_cp017

0xf041,	// (0x0006e49a) bg_popup_sub_pane_cp22

0x1de3,	// (0x0006123c) popup_vitu2_query_window_g1

0xc81e,	// (0x0006bc77) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0006eece) popup_vitu2_query_window_g

0x4db1,	// (0x0006420a) popup_vitu2_query_window_t1_ParamLimits

0x4db1,	// (0x0006420a) popup_vitu2_query_window_t1

0x4dd9,	// (0x00064232) popup_vitu2_query_window_t2_ParamLimits

0x4dd9,	// (0x00064232) popup_vitu2_query_window_t2

0x4deb,	// (0x00064244) popup_vitu2_query_window_t3_ParamLimits

0x4deb,	// (0x00064244) popup_vitu2_query_window_t3

0xc82c,	// (0x0006bc85) popup_vitu2_query_window_t4_ParamLimits

0xc82c,	// (0x0006bc85) popup_vitu2_query_window_t4

0xc840,	// (0x0006bc99) popup_vitu2_query_window_t5_ParamLimits

0xc840,	// (0x0006bc99) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0006eed3) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0006eed3) popup_vitu2_query_window_t

0x1c66,	// (0x000610bf) main_cset_text_pane

0xc264,	// (0x0006b6bd) aid_area_touch_slider_ParamLimits

0xc280,	// (0x0006b6d9) cset_slider_pane_ParamLimits

0xc2aa,	// (0x0006b703) main_cset_slider_pane_g1_ParamLimits

0xc2bf,	// (0x0006b718) main_cset_slider_pane_g2_ParamLimits

0x1c87,	// (0x000610e0) main_cset_slider_pane_g3_ParamLimits

0x1c87,	// (0x000610e0) main_cset_slider_pane_g3

0xc2d4,	// (0x0006b72d) main_cset_slider_pane_g4_ParamLimits

0xc2d4,	// (0x0006b72d) main_cset_slider_pane_g4

0xc2e3,	// (0x0006b73c) main_cset_slider_pane_g5_ParamLimits

0xc2e3,	// (0x0006b73c) main_cset_slider_pane_g5

0xc2f1,	// (0x0006b74a) main_cset_slider_pane_g6_ParamLimits

0xc2f1,	// (0x0006b74a) main_cset_slider_pane_g6

0xf9cf,	// (0x0006ee28) main_cset_slider_pane_g_ParamLimits

0x1cb7,	// (0x00061110) main_cset_slider_pane_t1_ParamLimits

0xc387,	// (0x0006b7e0) main_cset_slider_pane_t2_ParamLimits

0xc3a1,	// (0x0006b7fa) main_cset_slider_pane_t3_ParamLimits

0xc3bb,	// (0x0006b814) main_cset_slider_pane_t4_ParamLimits

0xc3d9,	// (0x0006b832) main_cset_slider_pane_t5_ParamLimits

0xc3fb,	// (0x0006b854) main_cset_slider_pane_t6_ParamLimits

0xc412,	// (0x0006b86b) main_cset_slider_pane_t7_ParamLimits

0xc440,	// (0x0006b899) main_cset_slider_pane_t8_ParamLimits

0xc440,	// (0x0006b899) main_cset_slider_pane_t8

0xc468,	// (0x0006b8c1) main_cset_slider_pane_t9_ParamLimits

0xc468,	// (0x0006b8c1) main_cset_slider_pane_t9

0xc490,	// (0x0006b8e9) main_cset_slider_pane_t10_ParamLimits

0xc490,	// (0x0006b8e9) main_cset_slider_pane_t10

0xc4b8,	// (0x0006b911) main_cset_slider_pane_t11_ParamLimits

0xc4b8,	// (0x0006b911) main_cset_slider_pane_t11

0xc4e2,	// (0x0006b93b) main_cset_slider_pane_t12_ParamLimits

0xc4e2,	// (0x0006b93b) main_cset_slider_pane_t12

0xc501,	// (0x0006b95a) main_cset_slider_pane_t13_ParamLimits

0xc501,	// (0x0006b95a) main_cset_slider_pane_t13

0xf9f4,	// (0x0006ee4d) main_cset_slider_pane_t_ParamLimits

0x041f,	// (0x0005f878) bg_popup_sub_pane_cp011

0x1def,	// (0x00061248) main_cset_text_pane_g1

0x1df7,	// (0x00061250) main_cset_text_pane_t1

0x1e05,	// (0x0006125e) main_cset_text_pane_t2

0x1e13,	// (0x0006126c) main_cset_text_pane_t3

0x1e21,	// (0x0006127a) main_cset_text_pane_t4

0x1e2f,	// (0x00061288) main_cset_text_pane_t5

0x1e3d,	// (0x00061296) main_cset_text_pane_t6

0x1e4b,	// (0x000612a4) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0006eede) main_cset_text_pane_t

0x041f,	// (0x0005f878) main_cam4_burst_pane

0x041f,	// (0x0005f878) main_cam5_pane

0x7aee,	// (0x00066f47) bg_button_pane_cp019

0xc1ba,	// (0x0006b613) bg_button_pane_cp020

0x1c93,	// (0x000610ec) main_cset_slider_pane_g7_ParamLimits

0x1c93,	// (0x000610ec) main_cset_slider_pane_g7

0x1c9f,	// (0x000610f8) main_cset_slider_pane_g8_ParamLimits

0x1c9f,	// (0x000610f8) main_cset_slider_pane_g8

0xc307,	// (0x0006b760) main_cset_slider_pane_g9_ParamLimits

0xc307,	// (0x0006b760) main_cset_slider_pane_g9

0xc313,	// (0x0006b76c) main_cset_slider_pane_g10_ParamLimits

0xc313,	// (0x0006b76c) main_cset_slider_pane_g10

0xc31f,	// (0x0006b778) main_cset_slider_pane_g11_ParamLimits

0xc31f,	// (0x0006b778) main_cset_slider_pane_g11

0xc32b,	// (0x0006b784) main_cset_slider_pane_g12_ParamLimits

0xc32b,	// (0x0006b784) main_cset_slider_pane_g12

0xc337,	// (0x0006b790) main_cset_slider_pane_g13_ParamLimits

0xc337,	// (0x0006b790) main_cset_slider_pane_g13

0xc345,	// (0x0006b79e) main_cset_slider_pane_g14_ParamLimits

0xc345,	// (0x0006b79e) main_cset_slider_pane_g14

0xc353,	// (0x0006b7ac) main_cset_slider_pane_g15_ParamLimits

0xc353,	// (0x0006b7ac) main_cset_slider_pane_g15

0x1ce5,	// (0x0006113e) main_cset_slider_pane_t14_ParamLimits

0x1ce5,	// (0x0006113e) main_cset_slider_pane_t14

0x1d1e,	// (0x00061177) main_cset_slider_pane_t15_ParamLimits

0x1d1e,	// (0x00061177) main_cset_slider_pane_t15

0xc854,	// (0x0006bcad) aid_cam4_burst_size_cell_ParamLimits

0xc854,	// (0x0006bcad) aid_cam4_burst_size_cell

0xc870,	// (0x0006bcc9) grid_cam4_burst_pane_ParamLimits

0xc870,	// (0x0006bcc9) grid_cam4_burst_pane

0xc8a0,	// (0x0006bcf9) linegrid_cam4_burst_pane_ParamLimits

0xc8a0,	// (0x0006bcf9) linegrid_cam4_burst_pane

0xc8c2,	// (0x0006bd1b) scroll_pane_cp30_ParamLimits

0xc8c2,	// (0x0006bd1b) scroll_pane_cp30

0xc8ce,	// (0x0006bd27) cell_cam4_burst_pane_ParamLimits

0xc8ce,	// (0x0006bd27) cell_cam4_burst_pane

0x1e59,	// (0x000612b2) linegrid_cam4_burst_pane_g1_ParamLimits

0x1e59,	// (0x000612b2) linegrid_cam4_burst_pane_g1

0xc90a,	// (0x0006bd63) linegrid_cam4_burst_pane_g2_ParamLimits

0xc90a,	// (0x0006bd63) linegrid_cam4_burst_pane_g2

0x1e66,	// (0x000612bf) linegrid_cam4_burst_pane_g3_ParamLimits

0x1e66,	// (0x000612bf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0006eeed) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0006eeed) linegrid_cam4_burst_pane_g

0xc91b,	// (0x0006bd74) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc91b,	// (0x0006bd74) linegrid_cam4_burst_pane_g3_copy1

0x1e73,	// (0x000612cc) linegrid_cam4_burst_pane_g4_ParamLimits

0x1e73,	// (0x000612cc) linegrid_cam4_burst_pane_g4

0xc935,	// (0x0006bd8e) linegrid_cam4_burst_pane_g5_ParamLimits

0xc935,	// (0x0006bd8e) linegrid_cam4_burst_pane_g5

0xc946,	// (0x0006bd9f) linegrid_cam4_burst_pane_g6_ParamLimits

0xc946,	// (0x0006bd9f) linegrid_cam4_burst_pane_g6

0x1e80,	// (0x000612d9) linegrid_cam4_burst_pane_g7_ParamLimits

0x1e80,	// (0x000612d9) linegrid_cam4_burst_pane_g7

0xc957,	// (0x0006bdb0) cell_cam4_burst_pane_g1

0x1e99,	// (0x000612f2) main_cam5_pane_t1_ParamLimits

0x1e99,	// (0x000612f2) main_cam5_pane_t1

0x1eab,	// (0x00061304) main_cam5_pane_t2_ParamLimits

0x1eab,	// (0x00061304) main_cam5_pane_t2

0x1ebd,	// (0x00061316) main_cam5_pane_t3_ParamLimits

0x1ebd,	// (0x00061316) main_cam5_pane_t3

0x1ecf,	// (0x00061328) main_cam5_pane_t4_ParamLimits

0x1ecf,	// (0x00061328) main_cam5_pane_t4

0x1ee5,	// (0x0006133e) main_cam5_pane_t5_ParamLimits

0x1ee5,	// (0x0006133e) main_cam5_pane_t5

0x1ef7,	// (0x00061350) main_cam5_pane_t6_ParamLimits

0x1ef7,	// (0x00061350) main_cam5_pane_t6

0x1f0b,	// (0x00061364) main_cam5_pane_t7_ParamLimits

0x1f0b,	// (0x00061364) main_cam5_pane_t7

0x1f1d,	// (0x00061376) main_cam5_pane_t8_ParamLimits

0x1f1d,	// (0x00061376) main_cam5_pane_t8

0x1f39,	// (0x00061392) main_cam5_pane_t9_ParamLimits

0x1f39,	// (0x00061392) main_cam5_pane_t9

0x1f4b,	// (0x000613a4) main_cam5_pane_t10_ParamLimits

0x1f4b,	// (0x000613a4) main_cam5_pane_t10

0x1f5d,	// (0x000613b6) main_cam5_pane_t11_ParamLimits

0x1f5d,	// (0x000613b6) main_cam5_pane_t11

0x1f6f,	// (0x000613c8) main_cam5_pane_t12_ParamLimits

0x1f6f,	// (0x000613c8) main_cam5_pane_t12

0x1f84,	// (0x000613dd) main_cam5_pane_t13_ParamLimits

0x1f84,	// (0x000613dd) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0006eef9) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0006eef9) main_cam5_pane_t

0x5aed,	// (0x00064f46) popup_scut_keymap_window_ParamLimits

0x5aed,	// (0x00064f46) popup_scut_keymap_window

0xc96a,	// (0x0006bdc3) aid_size_cell_brow_shortcut

0x865b,	// (0x00067ab4) bg_popup_window_pane_cp010

0xc976,	// (0x0006bdcf) grid_scut_pane

0xc982,	// (0x0006bddb) cell_scut_pane_ParamLimits

0xc982,	// (0x0006bddb) cell_scut_pane

0xc999,	// (0x0006bdf2) cell_scut_pane_g1

0x1fa1,	// (0x000613fa) cell_scut_pane_t1

0x1fb0,	// (0x00061409) cell_scut_pane_t2

0xc9a2,	// (0x0006bdfb) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0006ef14) cell_scut_pane_t

0xaa37,	// (0x00069e90) main_mup3_pane_g8_ParamLimits

0xaa37,	// (0x00069e90) main_mup3_pane_g8

0xbdcb,	// (0x0006b224) area_vitu2_query_pane_ParamLimits

0xbdcb,	// (0x0006b224) area_vitu2_query_pane

0x4da4,	// (0x000641fd) input_focus_pane_cp08

0x1fbf,	// (0x00061418) area_vitu2_query_pane_g1

0x4e13,	// (0x0006426c) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0006ef1b) area_vitu2_query_pane_g

0xc9b0,	// (0x0006be09) area_vitu2_query_pane_t1_ParamLimits

0xc9b0,	// (0x0006be09) area_vitu2_query_pane_t1

0xc9c4,	// (0x0006be1d) area_vitu2_query_pane_t2_ParamLimits

0xc9c4,	// (0x0006be1d) area_vitu2_query_pane_t2

0x4e24,	// (0x0006427d) area_vitu2_query_pane_t3_ParamLimits

0x4e24,	// (0x0006427d) area_vitu2_query_pane_t3

0x4e4c,	// (0x000642a5) area_vitu2_query_pane_t4_ParamLimits

0x4e4c,	// (0x000642a5) area_vitu2_query_pane_t4

0x4e74,	// (0x000642cd) area_vitu2_query_pane_t5_ParamLimits

0x4e74,	// (0x000642cd) area_vitu2_query_pane_t5

0x4e9c,	// (0x000642f5) area_vitu2_query_pane_t6_ParamLimits

0x4e9c,	// (0x000642f5) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0006ef20) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0006ef20) area_vitu2_query_pane_t

0xc9d8,	// (0x0006be31) bg_button_pane_cp018

0xc9e6,	// (0x0006be3f) bg_button_pane_cp021

0x4ee8,	// (0x00064341) bg_button_pane_cp022

0x4ef9,	// (0x00064352) input_focus_pane_cp09

0x8494,	// (0x000678ed) aid_size_touch_mv_arrow_left

0x84bf,	// (0x00067918) aid_size_touch_mv_arrow_right

0xc36b,	// (0x0006b7c4) main_cset_slider_pane_g16_ParamLimits

0xc36b,	// (0x0006b7c4) main_cset_slider_pane_g16

0xc379,	// (0x0006b7d2) main_cset_slider_pane_g17_ParamLimits

0xc379,	// (0x0006b7d2) main_cset_slider_pane_g17

0xc957,	// (0x0006bdb0) cell_cam4_burst_pane_g1_ParamLimits

0x041f,	// (0x0005f878) compa_mode_pane

0xc599,	// (0x0006b9f2) popup_vtel_slider_window_g3_ParamLimits

0xc599,	// (0x0006b9f2) popup_vtel_slider_window_g3

0xc5ad,	// (0x0006ba06) popup_vtel_slider_window_g4_ParamLimits

0xc5ad,	// (0x0006ba06) popup_vtel_slider_window_g4

0xc5c1,	// (0x0006ba1a) popup_vtel_slider_window_t1_ParamLimits

0xc5c1,	// (0x0006ba1a) popup_vtel_slider_window_t1

0x041f,	// (0x0005f878) main_cl_pane

0xf069,	// (0x0006e4c2) popup_imed_adjust2_window_ParamLimits

0xf033,	// (0x0006e48c) bg_tb_trans_pane_cp05_ParamLimits

0x1602,	// (0x00060a5b) popup_imed_adjust2_window_g1_ParamLimits

0x1611,	// (0x00060a6a) popup_imed_adjust2_window_g2_ParamLimits

0x1611,	// (0x00060a6a) popup_imed_adjust2_window_g2

0x161d,	// (0x00060a76) popup_imed_adjust2_window_g3_ParamLimits

0x161d,	// (0x00060a76) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0006ec9a) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0006ec9a) popup_imed_adjust2_window_g

0x1629,	// (0x00060a82) popup_imed_adjust2_window_t1_ParamLimits

0x1641,	// (0x00060a9a) slider_imed_adjust_pane_ParamLimits

0x1655,	// (0x00060aae) slider_imed_adjust_pane_g1_ParamLimits

0x1665,	// (0x00060abe) slider_imed_adjust_pane_g2_ParamLimits

0x1675,	// (0x00060ace) slider_imed_adjust_pane_g3_ParamLimits

0x1686,	// (0x00060adf) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0006eca1) slider_imed_adjust_pane_g_ParamLimits

0xbb55,	// (0x0006afae) aid_touch_area_cam4_ParamLimits

0xbb55,	// (0x0006afae) aid_touch_area_cam4

0xbb65,	// (0x0006afbe) battery_pane_cp01

0xbbec,	// (0x0006b045) main_camera4_pane_g6_ParamLimits

0xbbec,	// (0x0006b045) main_camera4_pane_g6

0xbc0a,	// (0x0006b063) main_camera4_pane_t2_ParamLimits

0xbc0a,	// (0x0006b063) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0006eda4) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0006eda4) main_camera4_pane_t

0xbc6b,	// (0x0006b0c4) aid_touch_area_vid4_ParamLimits

0xbc6b,	// (0x0006b0c4) aid_touch_area_vid4

0xbcab,	// (0x0006b104) main_video4_pane_g5_ParamLimits

0xbcab,	// (0x0006b104) main_video4_pane_g5

0xbccd,	// (0x0006b126) vid4_progress_pane_ParamLimits

0xbccd,	// (0x0006b126) vid4_progress_pane

0x1cab,	// (0x00061104) main_cset_slider_pane_g18_ParamLimits

0x1cab,	// (0x00061104) main_cset_slider_pane_g18

0x1e8d,	// (0x000612e6) cell_cam4_burst_pane_g2_ParamLimits

0x1e8d,	// (0x000612e6) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0006eef4) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0006eef4) cell_cam4_burst_pane_g

0xc9f2,	// (0x0006be4b) bg_cl_pane_ParamLimits

0xc9f2,	// (0x0006be4b) bg_cl_pane

0xc9fe,	// (0x0006be57) cl_header_pane_ParamLimits

0xc9fe,	// (0x0006be57) cl_header_pane

0xca0a,	// (0x0006be63) cl_listscroll_pane_ParamLimits

0xca0a,	// (0x0006be63) cl_listscroll_pane

0x2067,	// (0x000614c0) bg_cl_pane_g1

0x206f,	// (0x000614c8) bg_cl_pane_g2

0x2077,	// (0x000614d0) bg_cl_pane_g3

0x207f,	// (0x000614d8) bg_cl_pane_g4

0x2087,	// (0x000614e0) bg_cl_pane_g5

0x208f,	// (0x000614e8) bg_cl_pane_g6

0x2097,	// (0x000614f0) bg_cl_pane_g7

0x209f,	// (0x000614f8) bg_cl_pane_g8

0x20a7,	// (0x00061500) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0006ef2f) bg_cl_pane_g

0xca16,	// (0x0006be6f) aid_height_cl_leading_ParamLimits

0xca16,	// (0x0006be6f) aid_height_cl_leading

0xca22,	// (0x0006be7b) aid_height_cl_text_ParamLimits

0xca22,	// (0x0006be7b) aid_height_cl_text

0x5b24,	// (0x00064f7d) bg_cl_header_pane_ParamLimits

0x5b24,	// (0x00064f7d) bg_cl_header_pane

0xca3a,	// (0x0006be93) cl_header_pane_g1_ParamLimits

0xca3a,	// (0x0006be93) cl_header_pane_g1

0xca47,	// (0x0006bea0) cl_header_pane_t1_ParamLimits

0xca47,	// (0x0006bea0) cl_header_pane_t1

0x20af,	// (0x00061508) cl_list_pane

0x1c7e,	// (0x000610d7) hc_scroll_pane_cp01

0x7139,	// (0x00066592) bg_cl_header_pane_g1

0x1b64,	// (0x00060fbd) bg_cl_header_pane_g2

0x7159,	// (0x000665b2) bg_cl_header_pane_g3

0x1b74,	// (0x00060fcd) bg_cl_header_pane_g4

0x1b6c,	// (0x00060fc5) bg_cl_header_pane_g5

0x1d8e,	// (0x000611e7) bg_cl_header_pane_g6

0x1b8c,	// (0x00060fe5) bg_cl_header_pane_g7

0x1b94,	// (0x00060fed) bg_cl_header_pane_g8

0x1b84,	// (0x00060fdd) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0006ef42) bg_cl_header_pane_g

0xca59,	// (0x0006beb2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xca59,	// (0x0006beb2) hc_cl_list_double_graphic_heading_pane

0xca70,	// (0x0006bec9) hc_cl_list_single_graphic_pane_ParamLimits

0xca70,	// (0x0006bec9) hc_cl_list_single_graphic_pane

0xca90,	// (0x0006bee9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xca90,	// (0x0006bee9) hc_cl_list_single_graphic_pane_g1

0xca9c,	// (0x0006bef5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xca9c,	// (0x0006bef5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0006ef55) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0006ef55) hc_cl_list_single_graphic_pane_g

0xcab0,	// (0x0006bf09) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcab0,	// (0x0006bf09) hc_cl_list_single_graphic_pane_t1

0xca90,	// (0x0006bee9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xca90,	// (0x0006bee9) hc_cl_list_double_graphic_heading_pane_g1

0xcac5,	// (0x0006bf1e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcac5,	// (0x0006bf1e) hc_cl_list_double_graphic_heading_pane_g2

0xcad9,	// (0x0006bf32) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcad9,	// (0x0006bf32) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0006ef5a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0006ef5a) hc_cl_list_double_graphic_heading_pane_g

0xcaed,	// (0x0006bf46) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xcaed,	// (0x0006bf46) hc_cl_list_double_graphic_heading_pane_t1

0xcb02,	// (0x0006bf5b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xcb02,	// (0x0006bf5b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0006ef61) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0006ef61) hc_cl_list_double_graphic_heading_pane_t

0xcb27,	// (0x0006bf80) vid4_progress_pane_g1

0xcb33,	// (0x0006bf8c) vid4_progress_pane_g2

0xcb3f,	// (0x0006bf98) vid4_progress_pane_g3

0xcb4e,	// (0x0006bfa7) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0006ef66) vid4_progress_pane_g

0xcb6c,	// (0x0006bfc5) vid4_progress_pane_t1

0xcb82,	// (0x0006bfdb) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0006ef71) vid4_progress_pane_t

0xcbad,	// (0x0006c006) wait_bar_pane_cp07

0x0ec2,	// (0x0006031b) blid_firmament_pane_ParamLimits

0x0f05,	// (0x0006035e) popup_blid_sat_info2_window_g1

0x0f29,	// (0x00060382) popup_blid_sat_info2_window_t3

0x0f37,	// (0x00060390) popup_blid_sat_info2_window_t4

0x0f45,	// (0x0006039e) popup_blid_sat_info2_window_t5

0x0f53,	// (0x000603ac) popup_blid_sat_info2_window_t6

0x0f63,	// (0x000603bc) popup_blid_sat_info2_window_t7

0x0f71,	// (0x000603ca) popup_blid_sat_info2_window_t8

0x0f7f,	// (0x000603d8) popup_blid_sat_info2_window_t9

0x0f8d,	// (0x000603e6) popup_blid_sat_info2_window_t10

0x1051,	// (0x000604aa) aid_firma_cardinal_ParamLimits

0x1065,	// (0x000604be) blid_firmament_pane_t1_ParamLimits

0x107c,	// (0x000604d5) blid_firmament_pane_t2_ParamLimits

0x1093,	// (0x000604ec) blid_firmament_pane_t3_ParamLimits

0x10aa,	// (0x00060503) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0006eb93) blid_firmament_pane_t_ParamLimits

0x10c1,	// (0x0006051a) blid_sat_info_pane_ParamLimits

0xf041,	// (0x0006e49a) main_cam_set_pane_ParamLimits

0xb1d0,	// (0x0006a629) aid_size_cell_colour_35_ParamLimits

0xb1ea,	// (0x0006a643) aid_size_cell_colour_112_ParamLimits

0xb201,	// (0x0006a65a) aid_size_cell_effect_ParamLimits

0xf041,	// (0x0006e49a) bg_tb_trans_pane_cp02_ParamLimits

0xf0ee,	// (0x0006e547) heading_imed_pane_ParamLimits

0xb21b,	// (0x0006a674) listscroll_imed_pane_ParamLimits

0xe665,	// (0x0006dabe) popup_call2_audio_first_window_g5_ParamLimits

0xe665,	// (0x0006dabe) popup_call2_audio_first_window_g5

0xb912,	// (0x0006ad6b) aid_size_touch_image3_arrow_left_ParamLimits

0xb912,	// (0x0006ad6b) aid_size_touch_image3_arrow_left

0xb928,	// (0x0006ad81) aid_size_touch_image3_arrow_right_ParamLimits

0xb928,	// (0x0006ad81) aid_size_touch_image3_arrow_right

0xcb98,	// (0x0006bff1) vid4_progress_pane_t3

0xb4c1,	// (0x0006a91a) main_hwr_training_symbol_option_pane_ParamLimits

0xb4c1,	// (0x0006a91a) main_hwr_training_symbol_option_pane

0x18ef,	// (0x00060d48) popup_hwr_training_preview_window_ParamLimits

0x18ef,	// (0x00060d48) popup_hwr_training_preview_window

0xb522,	// (0x0006a97b) hwr_training_navi_pane_g5_ParamLimits

0xb522,	// (0x0006a97b) hwr_training_navi_pane_g5

0x1b52,	// (0x00060fab) popup_char_count_window

0x5b24,	// (0x00064f7d) bg_popup_sub_pane_cp20_ParamLimits

0xc6b7,	// (0x0006bb10) list_vitu2_match_list_pane_ParamLimits

0xc6c3,	// (0x0006bb1c) vitu2_page_scroll_pane_ParamLimits

0xc6c3,	// (0x0006bb1c) vitu2_page_scroll_pane

0x2112,	// (0x0006156b) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2112,	// (0x0006156b) list_single_hwr_training_symbol_option_pane

0x2125,	// (0x0006157e) list_single_hwr_training_symbol_option_pane_g1

0x212d,	// (0x00061586) list_single_hwr_training_symbol_option_pane_t1

0x213b,	// (0x00061594) bg_button_pane_cp023

0x2144,	// (0x0006159d) bg_button_pane_cp024

0xcbc5,	// (0x0006c01e) vitu2_page_scroll_pane_g1

0xcbcd,	// (0x0006c026) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0006ef78) vitu2_page_scroll_pane_g

0xcbd5,	// (0x0006c02e) vitu2_page_scroll_pane_t1

0x0dde,	// (0x00060237) popup_char_count_window_g1

0x2177,	// (0x000615d0) popup_char_count_window_g2

0x2180,	// (0x000615d9) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0006ef7d) popup_char_count_window_g

0x2189,	// (0x000615e2) popup_char_count_window_t1

0x041f,	// (0x0005f878) main_vded2_pane

0x15ee,	// (0x00060a47) aid_size_cell_imed_line

0x15f8,	// (0x00060a51) grid_imed_line_width_pane

0xbd1f,	// (0x0006b178) vid4_indicators_pane_g4

0x2197,	// (0x000615f0) cell_imed_line_width_pane_ParamLimits

0x2197,	// (0x000615f0) cell_imed_line_width_pane

0x21ab,	// (0x00061604) cell_imed_line_width_pane_g1

0x0e70,	// (0x000602c9) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0006ef84) cell_imed_line_width_pane_g

0xcbe4,	// (0x0006c03d) main_vded2_pane_g1_ParamLimits

0xcbe4,	// (0x0006c03d) main_vded2_pane_g1

0xcbf1,	// (0x0006c04a) main_vded2_pane_g2_ParamLimits

0xcbf1,	// (0x0006c04a) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0006ef89) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0006ef89) main_vded2_pane_g

0xcbff,	// (0x0006c058) vded2_slider_pane_ParamLimits

0xcbff,	// (0x0006c058) vded2_slider_pane

0xcc0c,	// (0x0006c065) aid_size_touch_vded2_end

0xcc16,	// (0x0006c06f) aid_size_touch_vded2_playhead

0x21b4,	// (0x0006160d) aid_size_touch_vded2_start

0x21bc,	// (0x00061615) vded2_slider_bg_pane

0x21c5,	// (0x0006161e) vded2_slider_pane_g1

0x21ce,	// (0x00061627) vded2_slider_pane_g2

0xcc1e,	// (0x0006c077) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0006ef8e) vded2_slider_pane_g

0x21d6,	// (0x0006162f) vded2_slider_bg_pane_g1

0x21df,	// (0x00061638) vded2_slider_bg_pane_g2

0x21e8,	// (0x00061641) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0006ef95) vded2_slider_bg_pane_g

0x8d4c,	// (0x000681a5) aid_postcard_touch_down_pane_ParamLimits

0x8d4c,	// (0x000681a5) aid_postcard_touch_down_pane

0x8d5c,	// (0x000681b5) aid_postcard_touch_up_pane_ParamLimits

0x8d5c,	// (0x000681b5) aid_postcard_touch_up_pane

0x041f,	// (0x0005f878) main_blid2_pane

0xf04f,	// (0x0006e4a8) popup_blid2_search_window

0x041f,	// (0x0005f878) blid2_gps_pane

0x041f,	// (0x0005f878) blid2_navig_pane

0x041f,	// (0x0005f878) blid2_search_pane

0x041f,	// (0x0005f878) blid2_tripm_pane

0xcc27,	// (0x0006c080) blid2_search_pane_g1_ParamLimits

0xcc27,	// (0x0006c080) blid2_search_pane_g1

0xcc37,	// (0x0006c090) blid2_search_pane_t1_ParamLimits

0xcc37,	// (0x0006c090) blid2_search_pane_t1

0xcc49,	// (0x0006c0a2) aid_size_cell_blid2_gps_ParamLimits

0xcc49,	// (0x0006c0a2) aid_size_cell_blid2_gps

0xcc59,	// (0x0006c0b2) blid2_gps_pane_g1_ParamLimits

0xcc59,	// (0x0006c0b2) blid2_gps_pane_g1

0xcc65,	// (0x0006c0be) grid_blid2_satellite_pane_ParamLimits

0xcc65,	// (0x0006c0be) grid_blid2_satellite_pane

0xcc75,	// (0x0006c0ce) blid2_navig_pane_g1_ParamLimits

0xcc75,	// (0x0006c0ce) blid2_navig_pane_g1

0xcc81,	// (0x0006c0da) blid2_navig_pane_t1_ParamLimits

0xcc81,	// (0x0006c0da) blid2_navig_pane_t1

0xcc93,	// (0x0006c0ec) blid2_navig_pane_t2_ParamLimits

0xcc93,	// (0x0006c0ec) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0006ef9c) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0006ef9c) blid2_navig_pane_t

0xcca5,	// (0x0006c0fe) blid2_navig_ring_pane_ParamLimits

0xcca5,	// (0x0006c0fe) blid2_navig_ring_pane

0xccb5,	// (0x0006c10e) blid2_speed_pane_ParamLimits

0xccb5,	// (0x0006c10e) blid2_speed_pane

0xccc1,	// (0x0006c11a) blid2_tripm_pane_g1_ParamLimits

0xccc1,	// (0x0006c11a) blid2_tripm_pane_g1

0xccd1,	// (0x0006c12a) blid2_tripm_pane_g2_ParamLimits

0xccd1,	// (0x0006c12a) blid2_tripm_pane_g2

0xccdd,	// (0x0006c136) blid2_tripm_pane_g3_ParamLimits

0xccdd,	// (0x0006c136) blid2_tripm_pane_g3

0xcce9,	// (0x0006c142) blid2_tripm_pane_g4_ParamLimits

0xcce9,	// (0x0006c142) blid2_tripm_pane_g4

0xccf5,	// (0x0006c14e) blid2_tripm_pane_g5_ParamLimits

0xccf5,	// (0x0006c14e) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0006efa1) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0006efa1) blid2_tripm_pane_g

0xcd11,	// (0x0006c16a) blid2_tripm_pane_t1_ParamLimits

0xcd11,	// (0x0006c16a) blid2_tripm_pane_t1

0xcd25,	// (0x0006c17e) blid2_tripm_pane_t2_ParamLimits

0xcd25,	// (0x0006c17e) blid2_tripm_pane_t2

0xcd39,	// (0x0006c192) blid2_tripm_pane_t3_ParamLimits

0xcd39,	// (0x0006c192) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0006efae) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0006efae) blid2_tripm_pane_t

0xcd6b,	// (0x0006c1c4) cell_blid2_satellite_pane_ParamLimits

0xcd6b,	// (0x0006c1c4) cell_blid2_satellite_pane

0xcd85,	// (0x0006c1de) cell_blid2_satellite_pane_g1

0x21f1,	// (0x0006164a) cell_blid2_satellite_pane_t1

0x10d1,	// (0x0006052a) blid2_speed_pane_g1

0x21ff,	// (0x00061658) blid2_speed_pane_t1

0x220d,	// (0x00061666) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0006efb7) blid2_speed_pane_t

0x10d1,	// (0x0006052a) blid2_navig_ring_pane_g1

0xcd8e,	// (0x0006c1e7) blid2_navig_ring_pane_g2

0xcd96,	// (0x0006c1ef) blid2_navig_ring_pane_g3

0xcd9e,	// (0x0006c1f7) blid2_navig_ring_pane_g4

0xcda6,	// (0x0006c1ff) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0006efbc) blid2_navig_ring_pane_g

0x041f,	// (0x0005f878) bg_popup_window_pane_cp011

0x221b,	// (0x00061674) popup_blid2_search_window_g1

0x2223,	// (0x0006167c) popup_blid2_search_window_t1

0x2231,	// (0x0006168a) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0006efc7) popup_blid2_search_window_t

0x6f95,	// (0x000663ee) main_browser_pane_g1

0x600e,	// (0x00065467) main_browser_pane_ParamLimits

0xf041,	// (0x0006e49a) bg_button_pane_cp011_ParamLimits

0xbf89,	// (0x0006b3e2) cell_vitu2_function_pane_g1_ParamLimits

0xf041,	// (0x0006e49a) bg_popup_sub_pane_cp22_ParamLimits

0x4da4,	// (0x000641fd) input_focus_pane_cp08_ParamLimits

0xc80d,	// (0x0006bc66) popup_vitu2_query_button_pane_ParamLimits

0xc80d,	// (0x0006bc66) popup_vitu2_query_button_pane

0x4d9a,	// (0x000641f3) popup_vitu2_query_input_button_pane

0x1de3,	// (0x0006123c) popup_vitu2_query_window_g1_ParamLimits

0xc81e,	// (0x0006bc77) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0006eece) popup_vitu2_query_window_g_ParamLimits

0x041f,	// (0x0005f878) bg_button_pane_cp026

0xcdae,	// (0x0006c207) popup_vitu2_query_input_button_pane_g1

0x041f,	// (0x0005f878) bg_button_pane_cp025

0x223f,	// (0x00061698) popup_vitu2_query_button_pane_t1

0xa738,	// (0x00069b91) main_mp3_pane_t6

0xa748,	// (0x00069ba1) popup_slider_window_cp01

0xbc1c,	// (0x0006b075) cam4_battery_pane

0xbcf9,	// (0x0006b152) cam4_battery_pane_cp02

0xcb17,	// (0x0006bf70) cam4_battery_pane_cp01

0xcb1f,	// (0x0006bf78) cam4_battery_pane_cp03

0x10d1,	// (0x0006052a) cam4_battery_pane_g1

0x19ed,	// (0x00060e46) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0006efcc) cam4_battery_pane_g

0x0f9b,	// (0x000603f4) popup_blid_sat_info2_window_t11

0x8494,	// (0x000678ed) aid_size_touch_mv_arrow_left_ParamLimits

0x84bf,	// (0x00067918) aid_size_touch_mv_arrow_right_ParamLimits

0x8507,	// (0x00067960) navi_pane_g1_ParamLimits

0x8513,	// (0x0006796c) navi_pane_g2_ParamLimits

0x8541,	// (0x0006799a) navi_pane_g3_ParamLimits

0xf44c,	// (0x0006e8a5) navi_pane_g_ParamLimits

0x85ff,	// (0x00067a58) navi_pane_mv_t1_ParamLimits

0xb227,	// (0x0006a680) grid_imed_effect_pane_ParamLimits

0x6b5d,	// (0x00065fb6) aid_placing_vt_slider_lsc

0x6b65,	// (0x00065fbe) aid_placing_vt_slider_prt

0xf041,	// (0x0006e49a) bg_tb_trans_pane_cp01_ParamLimits

0x1258,	// (0x000606b1) popup_image_details_window_g1_ParamLimits

0x126b,	// (0x000606c4) popup_image_details_window_g2_ParamLimits

0x1280,	// (0x000606d9) popup_image_details_window_g3_ParamLimits

0x1280,	// (0x000606d9) popup_image_details_window_g3

0xf77f,	// (0x0006ebd8) popup_image_details_window_g_ParamLimits

0x1294,	// (0x000606ed) popup_image_details_window_t1_ParamLimits

0x12a6,	// (0x000606ff) popup_image_details_window_t2_ParamLimits

0x12bf,	// (0x00060718) popup_image_details_window_t3_ParamLimits

0x12d3,	// (0x0006072c) popup_image_details_window_t4_ParamLimits

0x12ee,	// (0x00060747) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0006ebdf) popup_image_details_window_t_ParamLimits

0xca2e,	// (0x0006be87) cl_header_name_pane_ParamLimits

0xca2e,	// (0x0006be87) cl_header_name_pane

0xcdb6,	// (0x0006c20f) cl_header_name_pane_t1_ParamLimits

0xcdb6,	// (0x0006c20f) cl_header_name_pane_t1

0xcdcd,	// (0x0006c226) cl_header_name_pane_t2_ParamLimits

0xcdcd,	// (0x0006c226) cl_header_name_pane_t2

0xcdf7,	// (0x0006c250) cl_header_name_pane_t3_ParamLimits

0xcdf7,	// (0x0006c250) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0006efd1) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0006efd1) cl_header_name_pane_t

0x85d0,	// (0x00067a29) navi_pane_mv_g2_ParamLimits

0x1b0f,	// (0x00060f68) field_vitu2_entry_pane_g1_ParamLimits

0x1b1b,	// (0x00060f74) field_vitu2_entry_pane_g2_ParamLimits

0x1b27,	// (0x00060f80) field_vitu2_entry_pane_g3_ParamLimits

0x1b27,	// (0x00060f80) field_vitu2_entry_pane_g3

0xf974,	// (0x0006edcd) field_vitu2_entry_pane_g_ParamLimits

0xbf19,	// (0x0006b372) cell_vitu2_itu_pane_g1_ParamLimits

0xbf29,	// (0x0006b382) cell_vitu2_itu_pane_g2_ParamLimits

0xbf29,	// (0x0006b382) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0006edd9) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0006edd9) cell_vitu2_itu_pane_g

0xf041,	// (0x0006e49a) bg_vkb2_func_pane_cp05_ParamLimits

0xf041,	// (0x0006e49a) bg_vkb2_func_pane_cp05

0xf041,	// (0x0006e49a) bg_vkb2_func_pane_cp03

0xf041,	// (0x0006e49a) bg_vkb2_func_pane_cp04

0xf041,	// (0x0006e49a) bg_vkb2_func_pane_cp10_ParamLimits

0xf041,	// (0x0006e49a) bg_vkb2_func_pane_cp10

0x4ee8,	// (0x00064341) bg_vkb2_func_pane_cp08

0xc9d8,	// (0x0006be31) bg_vkb2_func_pane_cp06

0xc9e6,	// (0x0006be3f) bg_vkb2_func_pane_cp07

0x214d,	// (0x000615a6) bg_vkb2_func_pane_cp11_ParamLimits

0x214d,	// (0x000615a6) bg_vkb2_func_pane_cp11

0x2162,	// (0x000615bb) bg_vkb2_func_pane_cp12_ParamLimits

0x2162,	// (0x000615bb) bg_vkb2_func_pane_cp12

0x041f,	// (0x0005f878) bg_vkb2_func_pane_cp09

0x1b64,	// (0x00060fbd) bg_vkb2_func_pane_g1

0x7159,	// (0x000665b2) bg_vkb2_func_pane_g2

0x1b6c,	// (0x00060fc5) bg_vkb2_func_pane_g3

0x1b74,	// (0x00060fcd) bg_vkb2_func_pane_g4

0x1d8e,	// (0x000611e7) bg_vkb2_func_pane_g5

0x1b8c,	// (0x00060fe5) bg_vkb2_func_pane_g6

0x1b94,	// (0x00060fed) bg_vkb2_func_pane_g7

0x1b84,	// (0x00060fdd) bg_vkb2_func_pane_g8

0x7139,	// (0x00066592) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0006efd8) bg_vkb2_func_pane_g

0xcd03,	// (0x0006c15c) blid2_tripm_pane_g6_ParamLimits

0xcd03,	// (0x0006c15c) blid2_tripm_pane_g6

0x19a7,	// (0x00060e00) mp4_progress_pane_g1

0xcd5f,	// (0x0006c1b8) blid2_tripm_values_pane_ParamLimits

0xcd5f,	// (0x0006c1b8) blid2_tripm_values_pane

0xce1c,	// (0x0006c275) blid2_tripm_values_pane_t1

0xce2a,	// (0x0006c283) blid2_tripm_values_pane_t2

0xce38,	// (0x0006c291) blid2_tripm_values_pane_t3

0xce46,	// (0x0006c29f) blid2_tripm_values_pane_t4

0xce54,	// (0x0006c2ad) blid2_tripm_values_pane_t5

0xce62,	// (0x0006c2bb) blid2_tripm_values_pane_t6

0xce70,	// (0x0006c2c9) blid2_tripm_values_pane_t7

0xce7e,	// (0x0006c2d7) blid2_tripm_values_pane_t8

0xce8c,	// (0x0006c2e5) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0006efeb) blid2_tripm_values_pane_t

0x6b8b,	// (0x00065fe4) call_video_pane_t1_ParamLimits

0x6ba5,	// (0x00065ffe) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0006e72e) call_video_pane_t_ParamLimits

0x4b76,	// (0x00063fcf) msg_header_pane_g1_ParamLimits

0x8c74,	// (0x000680cd) msg_header_pane_g2_ParamLimits

0x8c74,	// (0x000680cd) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0006e948) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0006e948) msg_header_pane_g

0x600e,	// (0x00065467) main_clock2_pane_ParamLimits

0xafac,	// (0x0006a405) grid_clock2_toolbar_pane_ParamLimits

0xafac,	// (0x0006a405) grid_clock2_toolbar_pane

0xafac,	// (0x0006a405) listscroll_clock2_pane_ParamLimits

0xafac,	// (0x0006a405) listscroll_clock2_pane

0xb05a,	// (0x0006a4b3) main_clock2_pane_t3_ParamLimits

0xb05a,	// (0x0006a4b3) main_clock2_pane_t3

0xb06c,	// (0x0006a4c5) main_clock2_pane_t4_ParamLimits

0xb06c,	// (0x0006a4c5) main_clock2_pane_t4

0x224d,	// (0x000616a6) cell_clock2_toolbar_pane

0x2255,	// (0x000616ae) cell_clock2_toolbar_pane_cp01

0x2255,	// (0x000616ae) cell_clock2_toolbar_pane_cp02

0x225d,	// (0x000616b6) cell_clock2_toolbar_pane_cp03

0x2265,	// (0x000616be) list_clock2_pane

0x825b,	// (0x000676b4) scroll_pane_cp10

0x226d,	// (0x000616c6) list_single_clock2_pane_ParamLimits

0x226d,	// (0x000616c6) list_single_clock2_pane

0x865b,	// (0x00067ab4) list_highlight_pane_cp08

0x227a,	// (0x000616d3) list_single_clock2_pane_t1

0x2288,	// (0x000616e1) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0006effe) list_single_clock2_pane_t

0x041f,	// (0x0005f878) bg_button_pane_cp10

0x2296,	// (0x000616ef) cell_clock2_toolbar_pane_g1

0x8ca0,	// (0x000680f9) aid_main_viewer_pane_g1_ParamLimits

0x8ca0,	// (0x000680f9) aid_main_viewer_pane_g1

0x8cac,	// (0x00068105) aid_main_viewer_pane_g2_ParamLimits

0x8cac,	// (0x00068105) aid_main_viewer_pane_g2

0x8cb8,	// (0x00068111) aid_main_viewer_pane_g3_ParamLimits

0x8cb8,	// (0x00068111) aid_main_viewer_pane_g3

0x8cc9,	// (0x00068122) aid_main_viewer_pane_g4_ParamLimits

0x8cc9,	// (0x00068122) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0006e959) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0006e959) aid_main_viewer_pane_g

0x9cf1,	// (0x0006914a) main_calc_pane_ParamLimits

0x9cfe,	// (0x00069157) main_dialer2_pane_ParamLimits

0x041f,	// (0x0005f878) main_cam6_pane

0x041f,	// (0x0005f878) main_vid6_pane

0xafb8,	// (0x0006a411) listscroll_gen_pane_cp06_ParamLimits

0xafb8,	// (0x0006a411) listscroll_gen_pane_cp06

0xb07e,	// (0x0006a4d7) main_clock2_pane_t5_ParamLimits

0xb07e,	// (0x0006a4d7) main_clock2_pane_t5

0xb0cd,	// (0x0006a526) aid_call2_pane_cp10_ParamLimits

0xb0df,	// (0x0006a538) aid_call_pane_cp10_ParamLimits

0x841f,	// (0x00067878) popup_clock_analogue_window_cp10_g1_ParamLimits

0x841f,	// (0x00067878) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb0f1,	// (0x0006a54a) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb0f1,	// (0x0006a54a) popup_clock_analogue_window_cp10_g4_ParamLimits

0x841f,	// (0x00067878) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0006ec8f) popup_clock_analogue_window_cp10_g_ParamLimits

0xb107,	// (0x0006a560) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb8bf,	// (0x0006ad18) cell_dialer2_keypad_pane_g2_ParamLimits

0xb8bf,	// (0x0006ad18) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0006ed75) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0006ed75) cell_dialer2_keypad_pane_g

0xb8db,	// (0x0006ad34) cell_dialer2_keypad_pane_t1

0xc251,	// (0x0006b6aa) main_cset_text2_pane_ParamLimits

0xc251,	// (0x0006b6aa) main_cset_text2_pane

0x1fbf,	// (0x00061418) area_vitu2_query_pane_g1_ParamLimits

0x4e13,	// (0x0006426c) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0006ef1b) area_vitu2_query_pane_g_ParamLimits

0x4ec4,	// (0x0006431d) area_vitu2_query_pane_t7_ParamLimits

0x4ec4,	// (0x0006431d) area_vitu2_query_pane_t7

0xc9d8,	// (0x0006be31) bg_button_pane_cp018_ParamLimits

0xc9e6,	// (0x0006be3f) bg_button_pane_cp021_ParamLimits

0x4ee8,	// (0x00064341) bg_button_pane_cp022_ParamLimits

0x4ee8,	// (0x00064341) bg_vkb2_func_pane_cp08_ParamLimits

0xc9d8,	// (0x0006be31) bg_vkb2_func_pane_cp06_ParamLimits

0xc9e6,	// (0x0006be3f) bg_vkb2_func_pane_cp07_ParamLimits

0x4ef9,	// (0x00064352) input_focus_pane_cp09_ParamLimits

0xce9a,	// (0x0006c2f3) cam6_autofocus_pane_ParamLimits

0xce9a,	// (0x0006c2f3) cam6_autofocus_pane

0xcebc,	// (0x0006c315) cam6_image_uncrop_pane_ParamLimits

0xcebc,	// (0x0006c315) cam6_image_uncrop_pane

0xcee9,	// (0x0006c342) cam6_indi_pane_ParamLimits

0xcee9,	// (0x0006c342) cam6_indi_pane

0xcf03,	// (0x0006c35c) cam6_mode_pane_ParamLimits

0xcf03,	// (0x0006c35c) cam6_mode_pane

0xcf17,	// (0x0006c370) cam6_timer_pane_ParamLimits

0xcf17,	// (0x0006c370) cam6_timer_pane

0xcf23,	// (0x0006c37c) cam6_zoom_pane_ParamLimits

0xcf23,	// (0x0006c37c) cam6_zoom_pane

0xbc7b,	// (0x0006b0d4) cam6_mode_pane_g1_ParamLimits

0xbc7b,	// (0x0006b0d4) cam6_mode_pane_g1

0xbc93,	// (0x0006b0ec) cam6_mode_pane_g2_ParamLimits

0xbc93,	// (0x0006b0ec) cam6_mode_pane_g2

0xbc9f,	// (0x0006b0f8) cam6_mode_pane_g3_ParamLimits

0xbc9f,	// (0x0006b0f8) cam6_mode_pane_g3

0xbcab,	// (0x0006b104) cam6_mode_pane_g4_ParamLimits

0xbcab,	// (0x0006b104) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0006f003) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0006f003) cam6_mode_pane_g

0x229e,	// (0x000616f7) bg_tb_trans_pane_cp08_ParamLimits

0x229e,	// (0x000616f7) bg_tb_trans_pane_cp08

0x22ac,	// (0x00061705) cam6_battery_pane_ParamLimits

0x22ac,	// (0x00061705) cam6_battery_pane

0x22c2,	// (0x0006171b) cam6_indi_pane_g1_ParamLimits

0x22c2,	// (0x0006171b) cam6_indi_pane_g1

0x22d4,	// (0x0006172d) cam6_indi_pane_g2_ParamLimits

0x22d4,	// (0x0006172d) cam6_indi_pane_g2

0x22e6,	// (0x0006173f) cam6_indi_pane_g3_ParamLimits

0x22e6,	// (0x0006173f) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0006f00c) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0006f00c) cam6_indi_pane_g

0x22f8,	// (0x00061751) cam6_indi_pane_t1_ParamLimits

0x22f8,	// (0x00061751) cam6_indi_pane_t1

0xbd55,	// (0x0006b1ae) cam6_autofocus_pane_g1

0xbd5d,	// (0x0006b1b6) cam6_autofocus_pane_g2

0xbd65,	// (0x0006b1be) cam6_autofocus_pane_g3

0xbd6d,	// (0x0006b1c6) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0006f013) cam6_autofocus_pane_g

0x231e,	// (0x00061777) cam6_timer_pane_g1

0x2326,	// (0x0006177f) cam6_timer_pane_t1

0x2334,	// (0x0006178d) cam6_zoom_cont_pane

0x233c,	// (0x00061795) cam6_zoom_pane_g1

0x2344,	// (0x0006179d) cam6_zoom_pane_g2

0xcf3b,	// (0x0006c394) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0006f01c) cam6_zoom_pane_g

0x10d1,	// (0x0006052a) cam6_battery_pane_g1

0x10d1,	// (0x0006052a) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0006eb9c) cam6_battery_pane_g

0x234c,	// (0x000617a5) cam6_zoom_cont_pane_g1

0x2355,	// (0x000617ae) cam6_zoom_cont_pane_g2

0x235e,	// (0x000617b7) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0006f023) cam6_zoom_cont_pane_g

0xcf55,	// (0x0006c3ae) cam6_mode_pane_cp_ParamLimits

0xcf55,	// (0x0006c3ae) cam6_mode_pane_cp

0xcf23,	// (0x0006c37c) cam6_zoom_pane_cp_ParamLimits

0xcf23,	// (0x0006c37c) cam6_zoom_pane_cp

0xcf69,	// (0x0006c3c2) vid6_image_uncrop_cif_pane_ParamLimits

0xcf69,	// (0x0006c3c2) vid6_image_uncrop_cif_pane

0xcf95,	// (0x0006c3ee) vid6_image_uncrop_nhd_pane_ParamLimits

0xcf95,	// (0x0006c3ee) vid6_image_uncrop_nhd_pane

0xcebc,	// (0x0006c315) vid6_image_uncrop_vga_pane_ParamLimits

0xcebc,	// (0x0006c315) vid6_image_uncrop_vga_pane

0xcfb2,	// (0x0006c40b) vid6_image_uncrop_wvga_pane_ParamLimits

0xcfb2,	// (0x0006c40b) vid6_image_uncrop_wvga_pane

0xcfcf,	// (0x0006c428) vid6_indi_pane_ParamLimits

0xcfcf,	// (0x0006c428) vid6_indi_pane

0x229e,	// (0x000616f7) bg_tb_trans_pane_cp09_ParamLimits

0x229e,	// (0x000616f7) bg_tb_trans_pane_cp09

0x2376,	// (0x000617cf) cam6_battery_pane_cp_ParamLimits

0x2376,	// (0x000617cf) cam6_battery_pane_cp

0x2382,	// (0x000617db) vid6_indi_pane_g1_ParamLimits

0x2382,	// (0x000617db) vid6_indi_pane_g1

0x2394,	// (0x000617ed) vid6_indi_pane_g2_ParamLimits

0x2394,	// (0x000617ed) vid6_indi_pane_g2

0x23a6,	// (0x000617ff) vid6_indi_pane_g3_ParamLimits

0x23a6,	// (0x000617ff) vid6_indi_pane_g3

0x23bb,	// (0x00061814) vid6_indi_pane_g4_ParamLimits

0x23bb,	// (0x00061814) vid6_indi_pane_g4

0x23d0,	// (0x00061829) vid6_indi_pane_g5_ParamLimits

0x23d0,	// (0x00061829) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0006f02a) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0006f02a) vid6_indi_pane_g

0x23ea,	// (0x00061843) vid6_indi_pane_t1_ParamLimits

0x23ea,	// (0x00061843) vid6_indi_pane_t1

0x2400,	// (0x00061859) vid6_indi_pane_t2_ParamLimits

0x2400,	// (0x00061859) vid6_indi_pane_t2

0x2428,	// (0x00061881) vid6_indi_pane_t3_ParamLimits

0x2428,	// (0x00061881) vid6_indi_pane_t3

0x2450,	// (0x000618a9) vid6_indi_pane_t4_ParamLimits

0x2450,	// (0x000618a9) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0006f035) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0006f035) vid6_indi_pane_t

0x2474,	// (0x000618cd) wait_bar_pane_cp08

0xcff2,	// (0x0006c44b) main_cset_text2_pane_t1_ParamLimits

0xcff2,	// (0x0006c44b) main_cset_text2_pane_t1

0xcf43,	// (0x0006c39c) listscroll_gen_pane_cp06_t1_ParamLimits

0xcf43,	// (0x0006c39c) listscroll_gen_pane_cp06_t1

0x041f,	// (0x0005f878) main_cam6_set_pane

0x1338,	// (0x00060791) bg_tb_trans_pane_cp06_ParamLimits

0xbc24,	// (0x0006b07d) cam4_indicators_pane_g1_ParamLimits

0xbc31,	// (0x0006b08a) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0006eda9) cam4_indicators_pane_g_ParamLimits

0xbc51,	// (0x0006b0aa) cam4_indicators_pane_t1_ParamLimits

0xf041,	// (0x0006e49a) bg_tb_trans_pane_cp07_ParamLimits

0xbc24,	// (0x0006b07d) vid4_indicators_pane_g1_ParamLimits

0xbd01,	// (0x0006b15a) vid4_indicators_pane_g2_ParamLimits

0xbd0e,	// (0x0006b167) vid4_indicators_pane_g3_ParamLimits

0xbd1f,	// (0x0006b178) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0006edbb) vid4_indicators_pane_g_ParamLimits

0xbd3b,	// (0x0006b194) vid4_indicators_pane_t1_ParamLimits

0xcb27,	// (0x0006bf80) vid4_progress_pane_g1_ParamLimits

0xcb33,	// (0x0006bf8c) vid4_progress_pane_g2_ParamLimits

0xcb3f,	// (0x0006bf98) vid4_progress_pane_g3_ParamLimits

0xcb4e,	// (0x0006bfa7) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0006ef66) vid4_progress_pane_g_ParamLimits

0xcb6c,	// (0x0006bfc5) vid4_progress_pane_t1_ParamLimits

0xcb82,	// (0x0006bfdb) vid4_progress_pane_t2_ParamLimits

0xcb98,	// (0x0006bff1) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0006ef71) vid4_progress_pane_t_ParamLimits

0xcbad,	// (0x0006c006) wait_bar_pane_cp07_ParamLimits

0xd030,	// (0x0006c489) main_cam6_set_pane_g2_ParamLimits

0xd030,	// (0x0006c489) main_cam6_set_pane_g2

0xd03c,	// (0x0006c495) main_cset6_listscroll_pane_ParamLimits

0xd03c,	// (0x0006c495) main_cset6_listscroll_pane

0xd067,	// (0x0006c4c0) main_cset6_slider_pane_ParamLimits

0xd067,	// (0x0006c4c0) main_cset6_slider_pane

0xd073,	// (0x0006c4cc) main_cset6_text2_pane_ParamLimits

0xd073,	// (0x0006c4cc) main_cset6_text2_pane

0x2483,	// (0x000618dc) main_cset6_text_pane

0x248b,	// (0x000618e4) main_cset_list_pane_copy1_ParamLimits

0x248b,	// (0x000618e4) main_cset_list_pane_copy1

0x249b,	// (0x000618f4) scroll_pane_cp028_copy1

0xd086,	// (0x0006c4df) cset_list_set_pane_copy1

0xd0a0,	// (0x0006c4f9) aid_position_infowindow_above_copy1

0xd0a8,	// (0x0006c501) aid_position_infowindow_below_copy1

0xd0b0,	// (0x0006c509) cset_list_set_pane_g1_copy1

0x4d21,	// (0x0006417a) cset_list_set_pane_g3_copy1_ParamLimits

0x4d21,	// (0x0006417a) cset_list_set_pane_g3_copy1

0x4d30,	// (0x00064189) cset_list_set_pane_t1_copy1_ParamLimits

0x4d30,	// (0x00064189) cset_list_set_pane_t1_copy1

0xf041,	// (0x0006e49a) list_highlight_pane_cp021_copy1_ParamLimits

0xf041,	// (0x0006e49a) list_highlight_pane_cp021_copy1

0x24b3,	// (0x0006190c) cset6_slider_pane_ParamLimits

0x24b3,	// (0x0006190c) cset6_slider_pane

0x24df,	// (0x00061938) main_cset6_slider_pane_g1_ParamLimits

0x24df,	// (0x00061938) main_cset6_slider_pane_g1

0xd0b8,	// (0x0006c511) main_cset6_slider_pane_g2_ParamLimits

0xd0b8,	// (0x0006c511) main_cset6_slider_pane_g2

0x1c93,	// (0x000610ec) main_cset6_slider_pane_g3_ParamLimits

0x1c93,	// (0x000610ec) main_cset6_slider_pane_g3

0xd0e0,	// (0x0006c539) main_cset6_slider_pane_g4_ParamLimits

0xd0e0,	// (0x0006c539) main_cset6_slider_pane_g4

0xd0ec,	// (0x0006c545) main_cset6_slider_pane_g5_ParamLimits

0xd0ec,	// (0x0006c545) main_cset6_slider_pane_g5

0x1c93,	// (0x000610ec) main_cset6_slider_pane_g7_ParamLimits

0x1c93,	// (0x000610ec) main_cset6_slider_pane_g7

0x1c9f,	// (0x000610f8) main_cset6_slider_pane_g8_ParamLimits

0x1c9f,	// (0x000610f8) main_cset6_slider_pane_g8

0xd0fa,	// (0x0006c553) main_cset6_slider_pane_g9_ParamLimits

0xd0fa,	// (0x0006c553) main_cset6_slider_pane_g9

0xd106,	// (0x0006c55f) main_cset6_slider_pane_g10_ParamLimits

0xd106,	// (0x0006c55f) main_cset6_slider_pane_g10

0xd0e0,	// (0x0006c539) main_cset6_slider_pane_g11_ParamLimits

0xd0e0,	// (0x0006c539) main_cset6_slider_pane_g11

0xd112,	// (0x0006c56b) main_cset6_slider_pane_g12_ParamLimits

0xd112,	// (0x0006c56b) main_cset6_slider_pane_g12

0xd11e,	// (0x0006c577) main_cset6_slider_pane_g13_ParamLimits

0xd11e,	// (0x0006c577) main_cset6_slider_pane_g13

0xd12c,	// (0x0006c585) main_cset6_slider_pane_g14_ParamLimits

0xd12c,	// (0x0006c585) main_cset6_slider_pane_g14

0xd13a,	// (0x0006c593) main_cset6_slider_pane_g15_ParamLimits

0xd13a,	// (0x0006c593) main_cset6_slider_pane_g15

0xd0ec,	// (0x0006c545) main_cset6_slider_pane_g16_ParamLimits

0xd0ec,	// (0x0006c545) main_cset6_slider_pane_g16

0xd152,	// (0x0006c5ab) main_cset6_slider_pane_g17_ParamLimits

0xd152,	// (0x0006c5ab) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0006f03e) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0006f03e) main_cset6_slider_pane_g

0x2507,	// (0x00061960) main_cset6_slider_pane_t1_ParamLimits

0x2507,	// (0x00061960) main_cset6_slider_pane_t1

0xd160,	// (0x0006c5b9) main_cset6_slider_pane_t2_ParamLimits

0xd160,	// (0x0006c5b9) main_cset6_slider_pane_t2

0xd18b,	// (0x0006c5e4) main_cset6_slider_pane_t3_ParamLimits

0xd18b,	// (0x0006c5e4) main_cset6_slider_pane_t3

0xd1b6,	// (0x0006c60f) main_cset6_slider_pane_t4_ParamLimits

0xd1b6,	// (0x0006c60f) main_cset6_slider_pane_t4

0xd1e3,	// (0x0006c63c) main_cset6_slider_pane_t5_ParamLimits

0xd1e3,	// (0x0006c63c) main_cset6_slider_pane_t5

0x2548,	// (0x000619a1) main_cset6_slider_pane_t7_ParamLimits

0x2548,	// (0x000619a1) main_cset6_slider_pane_t7

0xd210,	// (0x0006c669) main_cset6_slider_pane_t8_ParamLimits

0xd210,	// (0x0006c669) main_cset6_slider_pane_t8

0xd234,	// (0x0006c68d) main_cset6_slider_pane_t9_ParamLimits

0xd234,	// (0x0006c68d) main_cset6_slider_pane_t9

0xd258,	// (0x0006c6b1) main_cset6_slider_pane_t10_ParamLimits

0xd258,	// (0x0006c6b1) main_cset6_slider_pane_t10

0xd27c,	// (0x0006c6d5) main_cset6_slider_pane_t11_ParamLimits

0xd27c,	// (0x0006c6d5) main_cset6_slider_pane_t11

0x257e,	// (0x000619d7) main_cset6_slider_pane_t14_ParamLimits

0x257e,	// (0x000619d7) main_cset6_slider_pane_t14

0x25b7,	// (0x00061a10) main_cset6_slider_pane_t15_ParamLimits

0x25b7,	// (0x00061a10) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0006f063) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0006f063) main_cset6_slider_pane_t

0x25f0,	// (0x00061a49) cset_slider_pane_g1_copy1

0x25f9,	// (0x00061a52) cset_slider_pane_g2_copy1

0x2602,	// (0x00061a5b) cset_slider_pane_g3_copy1

0x041f,	// (0x0005f878) bg_popup_sub_pane_cp011_copy1

0x1def,	// (0x00061248) main_cset_text_pane_g1_copy1

0x1df7,	// (0x00061250) main_cset_text_pane_t1_copy1

0x1e05,	// (0x0006125e) main_cset_text_pane_t2_copy1

0x1e13,	// (0x0006126c) main_cset_text_pane_t3_copy1

0x1e21,	// (0x0006127a) main_cset_text_pane_t4_copy1

0x1e2f,	// (0x00061288) main_cset_text_pane_t5_copy1

0x1e3d,	// (0x00061296) main_cset_text_pane_t6_copy1

0x1e4b,	// (0x000612a4) main_cset_text_pane_t7_copy1

0xd2a2,	// (0x0006c6fb) main_cset_text2_pane_t1_copy1

0x041f,	// (0x0005f878) main_ncimui_pane

0x9d3d,	// (0x00069196) popup_query_ncimui_window_ParamLimits

0x9d3d,	// (0x00069196) popup_query_ncimui_window

0xa8a2,	// (0x00069cfb) field_cale_ev2_pane_g4_ParamLimits

0xa8a2,	// (0x00069cfb) field_cale_ev2_pane_g4

0xb607,	// (0x0006aa60) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb607,	// (0x0006aa60) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0006ed50) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0006ed50) cell_video_dialer_keypad_pane_g

0xb61f,	// (0x0006aa78) cell_video_dialer_keypad_pane_t1

0x041f,	// (0x0005f878) bg_popup_window_pane_cp012

0x80be,	// (0x00067517) heading_pane_cp06

0x26fa,	// (0x00061b53) ncim_query_content_pane

0x041f,	// (0x0005f878) bg_popup_heading_pane_cp01

0x2702,	// (0x00061b5b) ncim_heading_pane_t1

0x2710,	// (0x00061b69) ncim_indicator_popup_pane

0x2722,	// (0x00061b7b) ncim_query_button_pane

0x2736,	// (0x00061b8f) ncim_query_content_pane_t1

0x2748,	// (0x00061ba1) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0006f0a2) ncim_query_content_pane_t

0x2782,	// (0x00061bdb) ncim_query_list_pane

0x2794,	// (0x00061bed) ncim_query_popup_pane

0x2710,	// (0x00061b69) ncim_indicator_popup_pane_ParamLimits

0xd39d,	// (0x0006c7f6) ncim_query_content_pane_g1_ParamLimits

0xd39d,	// (0x0006c7f6) ncim_query_content_pane_g1

0x2736,	// (0x00061b8f) ncim_query_content_pane_t1_ParamLimits

0x2748,	// (0x00061ba1) ncim_query_content_pane_t2_ParamLimits

0xd3a9,	// (0x0006c802) ncim_query_content_pane_t3_ParamLimits

0xd3a9,	// (0x0006c802) ncim_query_content_pane_t3

0xd3c6,	// (0x0006c81f) ncim_query_content_pane_t4_ParamLimits

0xd3c6,	// (0x0006c81f) ncim_query_content_pane_t4

0xd3e3,	// (0x0006c83c) ncim_query_content_pane_t5_ParamLimits

0xd3e3,	// (0x0006c83c) ncim_query_content_pane_t5

0x275a,	// (0x00061bb3) ncim_query_content_pane_t6_ParamLimits

0x275a,	// (0x00061bb3) ncim_query_content_pane_t6

0xfc49,	// (0x0006f0a2) ncim_query_content_pane_t_ParamLimits

0x2782,	// (0x00061bdb) ncim_query_list_pane_ParamLimits

0x2794,	// (0x00061bed) ncim_query_popup_pane_ParamLimits

0x27a8,	// (0x00061c01) wait_bar_pane_cp04

0x041f,	// (0x0005f878) input_focus_pane_cp011

0x27b0,	// (0x00061c09) ncim_query_popup_pane_t1

0x27be,	// (0x00061c17) ncim_list_query_list_pane_ParamLimits

0x27be,	// (0x00061c17) ncim_list_query_list_pane

0x041f,	// (0x0005f878) bg_button_pane_cp027

0x27d1,	// (0x00061c2a) ncim_query_button_pane_g1

0x041f,	// (0x0005f878) list_highlight_pane_cp012

0x27db,	// (0x00061c34) ncim_list_query_list_pane_g1

0x27e3,	// (0x00061c3c) ncim_list_query_list_pane_t1

0xbc41,	// (0x0006b09a) cam4_indicators_pane_g3_ParamLimits

0xbc41,	// (0x0006b09a) cam4_indicators_pane_g3

0xbd2b,	// (0x0006b184) vid4_indicators_pane_g5_ParamLimits

0xbd2b,	// (0x0006b184) vid4_indicators_pane_g5

0xcb5d,	// (0x0006bfb6) vid4_progress_pane_g5_ParamLimits

0xcb5d,	// (0x0006bfb6) vid4_progress_pane_g5

0xd2e5,	// (0x0006c73e) main_ncimui_pane_g1

0xd32b,	// (0x0006c784) ncimui_group_query_pane_ParamLimits

0xd32b,	// (0x0006c784) ncimui_group_query_pane

0xd35f,	// (0x0006c7b8) ncimui_list_pane_ParamLimits

0xd35f,	// (0x0006c7b8) ncimui_list_pane

0xd379,	// (0x0006c7d2) ncimui_text_pane_ParamLimits

0xd379,	// (0x0006c7d2) ncimui_text_pane

0xd400,	// (0x0006c859) ncimui_text_pane_t1_ParamLimits

0xd400,	// (0x0006c859) ncimui_text_pane_t1

0x27f1,	// (0x00061c4a) ncimui_list_single_graphic_pane_ParamLimits

0x27f1,	// (0x00061c4a) ncimui_list_single_graphic_pane

0xd41f,	// (0x0006c878) ncimui_query_pane_ParamLimits

0xd41f,	// (0x0006c878) ncimui_query_pane

0x041f,	// (0x0005f878) list_highlight_pane_cp013

0x2801,	// (0x00061c5a) ncim_list_query_list_pane_t1_copy1

0x27db,	// (0x00061c34) ncim_list_single_graphic_pane_g1

0x280f,	// (0x00061c68) ncim_query_button_pane_cp01

0x2817,	// (0x00061c70) ncim_query_entry_pane_ParamLimits

0x2817,	// (0x00061c70) ncim_query_entry_pane

0x2827,	// (0x00061c80) ncimui_query_pane_g1

0x282f,	// (0x00061c88) ncimui_query_pane_t1_ParamLimits

0x282f,	// (0x00061c88) ncimui_query_pane_t1

0x041f,	// (0x0005f878) input_focus_pane_cp012

0x27b0,	// (0x00061c09) ncim_query_entry_pane_t1

0x600e,	// (0x00065467) main_im_pane_ParamLimits

0xf041,	// (0x0006e49a) main_mobtv_pane_ParamLimits

0xf041,	// (0x0006e49a) main_mobtv_pane

0xd0fa,	// (0x0006c553) main_cset6_slider_pane_g18_ParamLimits

0xd0fa,	// (0x0006c553) main_cset6_slider_pane_g18

0xd11e,	// (0x0006c577) main_cset6_slider_pane_g19_ParamLimits

0xd11e,	// (0x0006c577) main_cset6_slider_pane_g19

0x1b27,	// (0x00060f80) bg_main_mobtv_pane_ParamLimits

0x1b27,	// (0x00060f80) bg_main_mobtv_pane

0xd42f,	// (0x0006c888) main_mobtv_info_pane

0xd43a,	// (0x0006c893) main_mobtv_loading_pane_ParamLimits

0xd43a,	// (0x0006c893) main_mobtv_loading_pane

0x2853,	// (0x00061cac) main_mobtv_pg_channel_list_pane

0x285d,	// (0x00061cb6) main_mobtv_pg_hdr_pane

0xd447,	// (0x0006c8a0) main_mobtv_programe_curr_pane_ParamLimits

0xd447,	// (0x0006c8a0) main_mobtv_programe_curr_pane

0xd454,	// (0x0006c8ad) main_mobtv_programe_next_pane_ParamLimits

0xd454,	// (0x0006c8ad) main_mobtv_programe_next_pane

0x2866,	// (0x00061cbf) popup_mobtv_noti_window

0x10d1,	// (0x0006052a) main_tv_pg_hdr_pane_g1

0x286e,	// (0x00061cc7) main_tv_pg_hdr_pane_g2

0x2876,	// (0x00061ccf) main_tv_pg_hdr_pane_g3

0x287e,	// (0x00061cd7) main_tv_pg_hdr_pane_g4

0x2886,	// (0x00061cdf) main_tv_pg_hdr_pane_g5

0x2890,	// (0x00061ce9) main_tv_pg_hdr_pane_g6

0x289a,	// (0x00061cf3) main_tv_pg_hdr_pane_g7

0x28a4,	// (0x00061cfd) main_tv_pg_hdr_pane_g8

0x28ae,	// (0x00061d07) main_tv_pg_hdr_pane_g9

0x28b8,	// (0x00061d11) main_tv_pg_hdr_pane_g10

0x28c2,	// (0x00061d1b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0006f0af) main_tv_pg_hdr_pane_g

0x28cc,	// (0x00061d25) main_tv_pg_hdr_pane_t1

0x28da,	// (0x00061d33) main_tv_pg_hdr_pane_t2

0x28e8,	// (0x00061d41) main_tv_pg_hdr_pane_t3

0x28f8,	// (0x00061d51) main_tv_pg_hdr_pane_t4

0x2908,	// (0x00061d61) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0006f0c6) main_tv_pg_hdr_pane_t

0x2918,	// (0x00061d71) single_mobtv_pg_channel_pane_ParamLimits

0x2918,	// (0x00061d71) single_mobtv_pg_channel_pane

0x292a,	// (0x00061d83) single_mobtv_pg_channel_table_pane

0x2933,	// (0x00061d8c) single_mobtv_pg_channel_thumb_pane

0x293c,	// (0x00061d95) single_tv_pg_channel_pane_g1

0x2945,	// (0x00061d9e) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0006f0d1) single_tv_pg_channel_pane_g

0x1338,	// (0x00060791) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1338,	// (0x00060791) bg_single_mobtv_pg_channel_thumb_pane

0x294e,	// (0x00061da7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x294e,	// (0x00061da7) single_mobtv_pg_channel_thumb_pane_g1

0x295c,	// (0x00061db5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x295c,	// (0x00061db5) single_mobtv_pg_channel_thumb_pane_g2

0x2968,	// (0x00061dc1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2968,	// (0x00061dc1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0006f0d6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0006f0d6) single_mobtv_pg_channel_thumb_pane_g

0x2974,	// (0x00061dcd) single_mobtv_pg_channel_thumb_pane_t1

0x2982,	// (0x00061ddb) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0006f0dd) single_mobtv_pg_channel_thumb_pane_t

0x10d1,	// (0x0006052a) bg_single_mobtv_pg_channel_table_pane_g1

0x10d1,	// (0x0006052a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0006eb9c) bg_single_mobtv_pg_channel_table_pane_g

0x2990,	// (0x00061de9) single_mobtv_pg_channel_table_pane_t1

0x299e,	// (0x00061df7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0006f0e2) single_mobtv_pg_channel_table_pane_t

0xd469,	// (0x0006c8c2) main_mobtv_info_pane_g1_ParamLimits

0xd469,	// (0x0006c8c2) main_mobtv_info_pane_g1

0xd485,	// (0x0006c8de) main_mobtv_info_pane_t1_ParamLimits

0xd485,	// (0x0006c8de) main_mobtv_info_pane_t1

0xd4fd,	// (0x0006c956) main_mobtv_info_pane_t2_ParamLimits

0xd4fd,	// (0x0006c956) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0006f0ec) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0006f0ec) main_mobtv_info_pane_t

0xd58c,	// (0x0006c9e5) wait_bar_pane_cp05

0xd59e,	// (0x0006c9f7) main_mobtv_loading_pane_g1_ParamLimits

0xd59e,	// (0x0006c9f7) main_mobtv_loading_pane_g1

0xd5ac,	// (0x0006ca05) main_mobtv_loading_pane_g2_ParamLimits

0xd5ac,	// (0x0006ca05) main_mobtv_loading_pane_g2

0xd5b8,	// (0x0006ca11) main_mobtv_loading_pane_g3_ParamLimits

0xd5b8,	// (0x0006ca11) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0006f0f3) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0006f0f3) main_mobtv_loading_pane_g

0x29ac,	// (0x00061e05) main_mobtv_loading_pane_t1_ParamLimits

0x29ac,	// (0x00061e05) main_mobtv_loading_pane_t1

0x29c4,	// (0x00061e1d) main_mobtv_loading_pane_t2_ParamLimits

0x29c4,	// (0x00061e1d) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0006f0fa) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0006f0fa) main_mobtv_loading_pane_t

0xd5c6,	// (0x0006ca1f) wait_bar_pane_cp06_ParamLimits

0xd5c6,	// (0x0006ca1f) wait_bar_pane_cp06

0x29e8,	// (0x00061e41) main_mobtv_programe_curr_pane_t1

0x29f6,	// (0x00061e4f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0006f0ff) main_mobtv_programe_curr_pane_t

0x2a04,	// (0x00061e5d) main_mobtv_programe_next_pane_t1

0x2a12,	// (0x00061e6b) main_mobtv_programe_next_pane_t2

0x2a20,	// (0x00061e79) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0006f104) main_mobtv_programe_next_pane_t

0x041f,	// (0x0005f878) bg_popup_mobtv_noti_window_pane

0x2a2e,	// (0x00061e87) popup_mobtv_noti_window_g1

0x2a36,	// (0x00061e8f) popup_mobtv_noti_window_t1

0x2a44,	// (0x00061e9d) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0006f10b) popup_mobtv_noti_window_t

0x10d1,	// (0x0006052a) bg_popup_mobtv_noti_window_pane_g1

0x041f,	// (0x0005f878) sc_clock_pane

0x041f,	// (0x0005f878) main_fs_bigclock_pane

0xcd4d,	// (0x0006c1a6) blid2_tripm_pane_t4_ParamLimits

0xcd4d,	// (0x0006c1a6) blid2_tripm_pane_t4

0xd5d2,	// (0x0006ca2b) sc_clock_pane_g1_ParamLimits

0xd5d2,	// (0x0006ca2b) sc_clock_pane_g1

0xd5e0,	// (0x0006ca39) sc_clock_pane_t1_ParamLimits

0xd5e0,	// (0x0006ca39) sc_clock_pane_t1

0xd5f3,	// (0x0006ca4c) sc_clock_pane_t2_ParamLimits

0xd5f3,	// (0x0006ca4c) sc_clock_pane_t2

0xd605,	// (0x0006ca5e) sc_clock_pane_t3_ParamLimits

0xd605,	// (0x0006ca5e) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0006f110) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0006f110) sc_clock_pane_t

0xde73,	// (0x0006d2cc) main_fs_bigclock_indicator_pane_ParamLimits

0xde73,	// (0x0006d2cc) main_fs_bigclock_indicator_pane

0xd68d,	// (0x0006cae6) main_fs_bigclock_pane_g1_ParamLimits

0xd68d,	// (0x0006cae6) main_fs_bigclock_pane_g1

0xde7f,	// (0x0006d2d8) main_fs_bigclock_pane_t1_ParamLimits

0xde7f,	// (0x0006d2d8) main_fs_bigclock_pane_t1

0xde91,	// (0x0006d2ea) main_fs_bigclock_pane_t2_ParamLimits

0xde91,	// (0x0006d2ea) main_fs_bigclock_pane_t2

0xdea3,	// (0x0006d2fc) main_fs_bigclock_pane_t3_ParamLimits

0xdea3,	// (0x0006d2fc) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x0006f30f) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0006f30f) main_fs_bigclock_pane_t

0x3a12,	// (0x00062e6b) main_fs_bigclock_indicator_pane_g1

0x272a,	// (0x00061b83) ncim_query_content_pane_g2_ParamLimits

0x272a,	// (0x00061b83) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0006f09d) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0006f09d) ncim_query_content_pane_g

0xd619,	// (0x0006ca72) sc_clock_pane_t4_ParamLimits

0xd619,	// (0x0006ca72) sc_clock_pane_t4

0xf041,	// (0x0006e49a) main_radioblah_pane

0x1a98,	// (0x00060ef1) cell_call4_button_pane_t1_copy1_ParamLimits

0x1a98,	// (0x00060ef1) cell_call4_button_pane_t1_copy1

0xd2ed,	// (0x0006c746) main_ncimui_pane_t1_ParamLimits

0xd2ed,	// (0x0006c746) main_ncimui_pane_t1

0xd2ff,	// (0x0006c758) main_ncimui_pane_t2_ParamLimits

0xd2ff,	// (0x0006c758) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0006f096) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0006f096) main_ncimui_pane_t

0x2b74,	// (0x00061fcd) main_radioblah_anim_pane_ParamLimits

0x2b74,	// (0x00061fcd) main_radioblah_anim_pane

0x2b85,	// (0x00061fde) main_radioblah_info_pane_ParamLimits

0x2b85,	// (0x00061fde) main_radioblah_info_pane

0x2b99,	// (0x00061ff2) main_radioblah_pane_t1_ParamLimits

0x2b99,	// (0x00061ff2) main_radioblah_pane_t1

0x2bb5,	// (0x0006200e) main_radioblah_pane_t2_ParamLimits

0x2bb5,	// (0x0006200e) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0006f131) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0006f131) main_radioblah_pane_t

0xd6df,	// (0x0006cb38) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd6df,	// (0x0006cb38) main_radioblah_rocker_ctrl_pane

0x2bfd,	// (0x00062056) main_radioblah_info_pane_t1_ParamLimits

0x2bfd,	// (0x00062056) main_radioblah_info_pane_t1

0xd724,	// (0x0006cb7d) main_radioblah_info_pane_t2_ParamLimits

0xd724,	// (0x0006cb7d) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0006f13a) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0006f13a) main_radioblah_info_pane_t

0x10d1,	// (0x0006052a) main_radioblah_rocker_ctrl_pane_g1

0xd7d4,	// (0x0006cc2d) main_radioblah_rocker_ctrl_pane_g2

0xd7dc,	// (0x0006cc35) main_radioblah_rocker_ctrl_pane_g3

0xd7e4,	// (0x0006cc3d) main_radioblah_rocker_ctrl_pane_g4

0xd7ec,	// (0x0006cc45) main_radioblah_rocker_ctrl_pane_g5

0xd7f4,	// (0x0006cc4d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0006f143) main_radioblah_rocker_ctrl_pane_g

0xd2a2,	// (0x0006c6fb) main_cset_text2_pane_t1_copy1_ParamLimits

0xbb8a,	// (0x0006afe3) cam4_image_uncrop_qvga_pane

0xbcb7,	// (0x0006b110) vid4_image_uncrop_qcif_pane

0xcedb,	// (0x0006c334) cam6_image_uncrop_qvga_pane_ParamLimits

0xcedb,	// (0x0006c334) cam6_image_uncrop_qvga_pane

0x2366,	// (0x000617bf) vid6_image_uncrop_qcif_pane_ParamLimits

0x2366,	// (0x000617bf) vid6_image_uncrop_qcif_pane

0x041f,	// (0x0005f878) bg_popup_preview_window_pane_cp03

0x26dc,	// (0x00061b35) list_cset_text2_pane

0x26e4,	// (0x00061b3d) main_cset6_text2_pane_g1

0x26ec,	// (0x00061b45) main_cset6_text2_pane_t1

0xd7fc,	// (0x0006cc55) list_cset_text2_pane_t1_ParamLimits

0xd7fc,	// (0x0006cc55) list_cset_text2_pane_t1

0xf041,	// (0x0006e49a) main_radioblah_pane_ParamLimits

0xd578,	// (0x0006c9d1) main_mobtv_info_pane_t3_ParamLimits

0xd578,	// (0x0006c9d1) main_mobtv_info_pane_t3

0xd6cd,	// (0x0006cb26) main_radioblah_pane_g1

0xd6f8,	// (0x0006cb51) main_radioblah_info_pane_g1

0xd779,	// (0x0006cbd2) main_radioblah_info_pane_t3_ParamLimits

0xd779,	// (0x0006cbd2) main_radioblah_info_pane_t3

0x7a7d,	// (0x00066ed6) highlight_cell_cale_month_pane_ParamLimits

0x7a7d,	// (0x00066ed6) highlight_cell_cale_month_pane

0x041f,	// (0x0005f878) main_phob_fisheye_pane

0x1462,	// (0x000608bb) scroll_pane_cp0031_ParamLimits

0x1462,	// (0x000608bb) scroll_pane_cp0031

0x2474,	// (0x000618cd) wait_bar_pane_cp08_ParamLimits

0xd086,	// (0x0006c4df) cset_list_set_pane_copy1_ParamLimits

0x2c37,	// (0x00062090) highlight_cell_cale_month_pane_g1

0xd827,	// (0x0006cc80) highlight_cell_cale_month_pane_t1

0x20af,	// (0x00061508) list_gen_pane_cp01

0x1c7e,	// (0x000610d7) scroll_pane_01

0xd835,	// (0x0006cc8e) list_single_double_fisheye_pane

0x501b,	// (0x00064474) list_double_fisheye_pane_g1_ParamLimits

0x501b,	// (0x00064474) list_double_fisheye_pane_g1

0xd83e,	// (0x0006cc97) list_double_fisheye_pane_g2_ParamLimits

0xd83e,	// (0x0006cc97) list_double_fisheye_pane_g2

0xd852,	// (0x0006ccab) list_double_fisheye_pane_g3_ParamLimits

0xd852,	// (0x0006ccab) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0006f150) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0006f150) list_double_fisheye_pane_g

0x5033,	// (0x0006448c) list_double_fisheye_pane_t1_ParamLimits

0x5033,	// (0x0006448c) list_double_fisheye_pane_t1

0x504e,	// (0x000644a7) list_double_fisheye_pane_t2_ParamLimits

0x504e,	// (0x000644a7) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0006f15b) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0006f15b) list_double_fisheye_pane_t

0x041f,	// (0x0005f878) main_call5_pane

0xd63f,	// (0x0006ca98) sc_swipe_pane_ParamLimits

0xd63f,	// (0x0006ca98) sc_swipe_pane

0xd87b,	// (0x0006ccd4) call5_image_pane_ParamLimits

0xd87b,	// (0x0006ccd4) call5_image_pane

0xd88b,	// (0x0006cce4) call5_swipe_1_pane_ParamLimits

0xd88b,	// (0x0006cce4) call5_swipe_1_pane

0xd897,	// (0x0006ccf0) call5_swipe_2_pane_ParamLimits

0xd897,	// (0x0006ccf0) call5_swipe_2_pane

0xd8b1,	// (0x0006cd0a) popup_call5_audio_first_window_ParamLimits

0xd8b1,	// (0x0006cd0a) popup_call5_audio_first_window

0x1338,	// (0x00060791) call5_swipe_1_pane_g1_ParamLimits

0x1338,	// (0x00060791) call5_swipe_1_pane_g1

0x2c3f,	// (0x00062098) call5_swipe_1_pane_g2_ParamLimits

0x2c3f,	// (0x00062098) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0006f160) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0006f160) call5_swipe_1_pane_g

0x2c4b,	// (0x000620a4) call5_swipe_1_pane_t1_ParamLimits

0x2c4b,	// (0x000620a4) call5_swipe_1_pane_t1

0x1338,	// (0x00060791) call5_swipe_2_pane_g1_ParamLimits

0x1338,	// (0x00060791) call5_swipe_2_pane_g1

0x2c60,	// (0x000620b9) call5_swipe_2_pane_g2_ParamLimits

0x2c60,	// (0x000620b9) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0006f165) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0006f165) call5_swipe_2_pane_g

0x2c6c,	// (0x000620c5) call5_swipe_2_pane_t1_ParamLimits

0x2c6c,	// (0x000620c5) call5_swipe_2_pane_t1

0x2c81,	// (0x000620da) sc_swipe_pane_g1_ParamLimits

0x2c81,	// (0x000620da) sc_swipe_pane_g1

0x2c8e,	// (0x000620e7) sc_swipe_pane_g2_ParamLimits

0x2c8e,	// (0x000620e7) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0006f16a) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0006f16a) sc_swipe_pane_g

0x2c9a,	// (0x000620f3) sc_swipe_pane_t1_ParamLimits

0x2c9a,	// (0x000620f3) sc_swipe_pane_t1

0x041f,	// (0x0005f878) main_cmail_launcher_pane

0xd8bf,	// (0x0006cd18) aid_size_cell_cmail_l_ParamLimits

0xd8bf,	// (0x0006cd18) aid_size_cell_cmail_l

0xd8cf,	// (0x0006cd28) grid_cmail_l_pane_ParamLimits

0xd8cf,	// (0x0006cd28) grid_cmail_l_pane

0xd8df,	// (0x0006cd38) cell_cmail_l_pane_ParamLimits

0xd8df,	// (0x0006cd38) cell_cmail_l_pane

0xd8f3,	// (0x0006cd4c) cell_cmail_l_pane_g1_ParamLimits

0xd8f3,	// (0x0006cd4c) cell_cmail_l_pane_g1

0xd8ff,	// (0x0006cd58) cell_cmail_l_pane_t1_ParamLimits

0xd8ff,	// (0x0006cd58) cell_cmail_l_pane_t1

0x2caf,	// (0x00062108) cell_cmail_l_pane_t2_ParamLimits

0x2caf,	// (0x00062108) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0006f16f) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0006f16f) cell_cmail_l_pane_t

0xf041,	// (0x0006e49a) grid_highlight_pane_cp018_ParamLimits

0xf041,	// (0x0006e49a) grid_highlight_pane_cp018

0x59a4,	// (0x00064dfd) main2_pane_ParamLimits

0x59a4,	// (0x00064dfd) main2_pane

0x6269,	// (0x000656c2) popup_sp_fs_action_menu_bg_pane_g1

0x6271,	// (0x000656ca) popup_sp_fs_action_menu_bg_pane_g2

0x6279,	// (0x000656d2) popup_sp_fs_action_menu_bg_pane_g3

0x6281,	// (0x000656da) popup_sp_fs_action_menu_bg_pane_g4

0x6289,	// (0x000656e2) popup_sp_fs_action_menu_bg_pane_g5

0x6291,	// (0x000656ea) popup_sp_fs_action_menu_bg_pane_g6

0x6299,	// (0x000656f2) popup_sp_fs_action_menu_bg_pane_g7

0x62a1,	// (0x000656fa) popup_sp_fs_action_menu_bg_pane_g8

0x62a9,	// (0x00065702) popup_sp_fs_action_menu_bg_pane_g9

0x62b1,	// (0x0006570a) popup_sp_fs_action_menu_bg_pane_g10

0x62b1,	// (0x0006570a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0006e648) popup_sp_fs_action_menu_bg_pane_g

0x4903,	// (0x00063d5c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x2_t3_g3_g1

0x490f,	// (0x00063d68) list_medium_line_x2_t3_g3_g2_ParamLimits

0x490f,	// (0x00063d68) list_medium_line_x2_t3_g3_g2

0x491b,	// (0x00063d74) list_medium_line_x2_t3_g3_g3_ParamLimits

0x491b,	// (0x00063d74) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0006e6f8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0006e6f8) list_medium_line_x2_t3_g3_g

0x4927,	// (0x00063d80) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4927,	// (0x00063d80) list_medium_line_x2_t3_g3_t1

0x493c,	// (0x00063d95) list_medium_line_x2_t3_g3_t2_ParamLimits

0x493c,	// (0x00063d95) list_medium_line_x2_t3_g3_t2

0x494e,	// (0x00063da7) list_medium_line_x2_t3_g3_t3_ParamLimits

0x494e,	// (0x00063da7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0006e6ff) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0006e6ff) list_medium_line_x2_t3_g3_t

0x4903,	// (0x00063d5c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x2_t3_g2_g1

0x491b,	// (0x00063d74) list_medium_line_x2_t3_g2_g2_ParamLimits

0x491b,	// (0x00063d74) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0006e706) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0006e706) list_medium_line_x2_t3_g2_g

0x4963,	// (0x00063dbc) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4963,	// (0x00063dbc) list_medium_line_x2_t3_g2_t1

0x4979,	// (0x00063dd2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4979,	// (0x00063dd2) list_medium_line_x2_t3_g2_t2

0x498b,	// (0x00063de4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x498b,	// (0x00063de4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0006e70b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0006e70b) list_medium_line_x2_t3_g2_t

0x4903,	// (0x00063d5c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x2_t4_g4_g1

0x49a9,	// (0x00063e02) list_medium_line_x2_t4_g4_g2_ParamLimits

0x49a9,	// (0x00063e02) list_medium_line_x2_t4_g4_g2

0x490f,	// (0x00063d68) list_medium_line_x2_t4_g4_g3_ParamLimits

0x490f,	// (0x00063d68) list_medium_line_x2_t4_g4_g3

0x49b5,	// (0x00063e0e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x49b5,	// (0x00063e0e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0006e712) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0006e712) list_medium_line_x2_t4_g4_g

0x49c1,	// (0x00063e1a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x49c1,	// (0x00063e1a) list_medium_line_x2_t4_g4_t1

0x49d8,	// (0x00063e31) list_medium_line_x2_t4_g4_t2_ParamLimits

0x49d8,	// (0x00063e31) list_medium_line_x2_t4_g4_t2

0x49ed,	// (0x00063e46) list_medium_line_x2_t4_g4_t3_ParamLimits

0x49ed,	// (0x00063e46) list_medium_line_x2_t4_g4_t3

0x49ff,	// (0x00063e58) list_medium_line_x2_t4_g4_t4_ParamLimits

0x49ff,	// (0x00063e58) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0006e71b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0006e71b) list_medium_line_x2_t4_g4_t

0x4903,	// (0x00063d5c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x2_t2_g4_g1

0x49a9,	// (0x00063e02) list_medium_line_x2_t2_g4_g2_ParamLimits

0x49a9,	// (0x00063e02) list_medium_line_x2_t2_g4_g2

0x490f,	// (0x00063d68) list_medium_line_x2_t2_g4_g3_ParamLimits

0x490f,	// (0x00063d68) list_medium_line_x2_t2_g4_g3

0x491b,	// (0x00063d74) list_medium_line_x2_t2_g4_g4_ParamLimits

0x491b,	// (0x00063d74) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0006e782) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0006e782) list_medium_line_x2_t2_g4_g

0x4a11,	// (0x00063e6a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4a11,	// (0x00063e6a) list_medium_line_x2_t2_g4_t1

0x494e,	// (0x00063da7) list_medium_line_x2_t2_g4_t2_ParamLimits

0x494e,	// (0x00063da7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0006e78b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0006e78b) list_medium_line_x2_t2_g4_t

0x4903,	// (0x00063d5c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x2_t2_g3_g1

0x490f,	// (0x00063d68) list_medium_line_x2_t2_g3_g2_ParamLimits

0x490f,	// (0x00063d68) list_medium_line_x2_t2_g3_g2

0x491b,	// (0x00063d74) list_medium_line_x2_t2_g3_g3_ParamLimits

0x491b,	// (0x00063d74) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0006e6f8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0006e6f8) list_medium_line_x2_t2_g3_g

0x4a26,	// (0x00063e7f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4a26,	// (0x00063e7f) list_medium_line_x2_t2_g3_t1

0x494e,	// (0x00063da7) list_medium_line_x2_t2_g3_t2_ParamLimits

0x494e,	// (0x00063da7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0006e790) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0006e790) list_medium_line_x2_t2_g3_t

0x7e8e,	// (0x000672e7) main_sp_fs_list_pane_ParamLimits

0x7e8e,	// (0x000672e7) main_sp_fs_list_pane

0x7e9a,	// (0x000672f3) sp_fs_scroll_pane_ParamLimits

0x7e9a,	// (0x000672f3) sp_fs_scroll_pane

0x4a3b,	// (0x00063e94) list_medium_line_x2_t3_t1

0x4a4b,	// (0x00063ea4) list_medium_line_x2_t3_t2

0x4a59,	// (0x00063eb2) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0006e7db) list_medium_line_x2_t3_t

0x4a67,	// (0x00063ec0) list_medium_line_x3_t4_t1

0x4a77,	// (0x00063ed0) list_medium_line_x3_t4_t2

0x4a85,	// (0x00063ede) list_medium_line_x3_t4_t3

0x4a59,	// (0x00063eb2) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0006e7e2) list_medium_line_x3_t4_t

0x4a93,	// (0x00063eec) list_medium_line_x4_t5_t1

0x4aa3,	// (0x00063efc) list_medium_line_x4_t5_t2

0x4a85,	// (0x00063ede) list_medium_line_x4_t5_t3

0x4ab1,	// (0x00063f0a) list_medium_line_x4_t5_t4

0x4a59,	// (0x00063eb2) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0006e7eb) list_medium_line_x4_t5_t

0x4903,	// (0x00063d5c) list_medium_line_t4_g4_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_t4_g4_g1

0x49b5,	// (0x00063e0e) list_medium_line_t4_g4_g2_ParamLimits

0x49b5,	// (0x00063e0e) list_medium_line_t4_g4_g2

0x4abf,	// (0x00063f18) list_medium_line_t4_g4_g3_ParamLimits

0x4abf,	// (0x00063f18) list_medium_line_t4_g4_g3

0x491b,	// (0x00063d74) list_medium_line_t4_g4_g4_ParamLimits

0x491b,	// (0x00063d74) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0006e7f6) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0006e7f6) list_medium_line_t4_g4_g

0x4acb,	// (0x00063f24) list_medium_line_t4_g4_t1_ParamLimits

0x4acb,	// (0x00063f24) list_medium_line_t4_g4_t1

0x4ae0,	// (0x00063f39) list_medium_line_t4_g4_t2_ParamLimits

0x4ae0,	// (0x00063f39) list_medium_line_t4_g4_t2

0x4af6,	// (0x00063f4f) list_medium_line_t4_g4_t3_ParamLimits

0x4af6,	// (0x00063f4f) list_medium_line_t4_g4_t3

0x494e,	// (0x00063da7) list_medium_line_t4_g4_t4_ParamLimits

0x494e,	// (0x00063da7) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0006e7ff) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0006e7ff) list_medium_line_t4_g4_t

0x8228,	// (0x00067681) chi_dic_find_pane_g1

0x9d0c,	// (0x00069165) main_tport_pane

0x4d45,	// (0x0006419e) list_medium_line_plain_t1

0x4d53,	// (0x000641ac) list_medium_line_t2_g2_g1_ParamLimits

0x4d53,	// (0x000641ac) list_medium_line_t2_g2_g1

0x4d5f,	// (0x000641b8) list_medium_line_t2_g2_g2_ParamLimits

0x4d5f,	// (0x000641b8) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0006eeb2) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0006eeb2) list_medium_line_t2_g2_g

0x4d6b,	// (0x000641c4) list_medium_line_t2_g2_t1_ParamLimits

0x4d6b,	// (0x000641c4) list_medium_line_t2_g2_t1

0x4d85,	// (0x000641de) list_medium_line_t2_g2_t2_ParamLimits

0x4d85,	// (0x000641de) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0006eeb7) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0006eeb7) list_medium_line_t2_g2_t

0x4f0a,	// (0x00064363) aid_sp_fs_list_icon_a_sm

0xcbbd,	// (0x0006c016) aid_sp_fs_list_icon_d

0x3615,	// (0x00062a6e) aid_sp_fs_text_primary

0x4f12,	// (0x0006436b) aid_sp_fs_text_secondary

0x4f1b,	// (0x00064374) list_medium_line

0x4f1b,	// (0x00064374) list_medium_line_g2

0x4f1b,	// (0x00064374) list_medium_line_g3

0x4f1b,	// (0x00064374) list_medium_line_plain

0x4f1b,	// (0x00064374) list_medium_line_plain_t2

0x4f1b,	// (0x00064374) list_medium_line_plain_t3

0x4f1b,	// (0x00064374) list_medium_line_right_icon

0x4f1b,	// (0x00064374) list_medium_line_right_iconx2

0x4f1b,	// (0x00064374) list_medium_line_t2

0x4f1b,	// (0x00064374) list_medium_line_t2_g2

0x4f1b,	// (0x00064374) list_medium_line_t2_g3

0x4f1b,	// (0x00064374) list_medium_line_t2_right_icon

0x4f1b,	// (0x00064374) list_medium_line_t2_right_iconx2

0x4f1b,	// (0x00064374) list_medium_line_t3

0x4f1b,	// (0x00064374) list_medium_line_t3_g2

0x4f1b,	// (0x00064374) list_medium_line_t3_g3

0x4f1b,	// (0x00064374) list_medium_line_t3_right_iconx2

0x4f24,	// (0x0006437d) list_medium_line_t4_g4

0xf111,	// (0x0006e56a) list_medium_line_x2

0xf111,	// (0x0006e56a) list_medium_line_x2_t2_g2

0xf111,	// (0x0006e56a) list_medium_line_x2_t2_g3

0xf111,	// (0x0006e56a) list_medium_line_x2_t2_g4

0xf111,	// (0x0006e56a) list_medium_line_x2_t3

0xf111,	// (0x0006e56a) list_medium_line_x2_t3_g2

0xf111,	// (0x0006e56a) list_medium_line_x2_t3_g3

0xf111,	// (0x0006e56a) list_medium_line_x2_t3_g4

0xf111,	// (0x0006e56a) list_medium_line_x2_t4_g2

0xf111,	// (0x0006e56a) list_medium_line_x2_t4_g4

0x4f2d,	// (0x00064386) list_medium_line_x3

0x4f2d,	// (0x00064386) list_medium_line_x3_t4

0x4f2d,	// (0x00064386) list_medium_line_x3_t4_g4

0x4f24,	// (0x0006437d) list_medium_line_x4_t4

0x4f24,	// (0x0006437d) list_medium_line_x4_t4_g7

0x4f24,	// (0x0006437d) list_medium_line_x4_t5

0x4f36,	// (0x0006438f) list_single_fs_dyc_pane_ParamLimits

0x4f36,	// (0x0006438f) list_single_fs_dyc_pane

0x4903,	// (0x00063d5c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x4_t4_g7_g1

0x4f4a,	// (0x000643a3) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4f4a,	// (0x000643a3) list_medium_line_x4_t4_g7_g2

0x4f56,	// (0x000643af) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4f56,	// (0x000643af) list_medium_line_x4_t4_g7_g3

0x4f65,	// (0x000643be) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4f65,	// (0x000643be) list_medium_line_x4_t4_g7_g4

0x4f71,	// (0x000643ca) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4f71,	// (0x000643ca) list_medium_line_x4_t4_g7_g5

0x4f80,	// (0x000643d9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4f80,	// (0x000643d9) list_medium_line_x4_t4_g7_g6

0x4f8f,	// (0x000643e8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4f8f,	// (0x000643e8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0006f07c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0006f07c) list_medium_line_x4_t4_g7_g

0x4f9b,	// (0x000643f4) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4f9b,	// (0x000643f4) list_medium_line_x4_t4_g7_t1

0x4fb0,	// (0x00064409) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4fb0,	// (0x00064409) list_medium_line_x4_t4_g7_t2

0x4fc5,	// (0x0006441e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4fc5,	// (0x0006441e) list_medium_line_x4_t4_g7_t3

0x4fda,	// (0x00064433) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4fda,	// (0x00064433) list_medium_line_x4_t4_g7_t4

0x4fec,	// (0x00064445) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4fec,	// (0x00064445) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0006f08b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0006f08b) list_medium_line_x4_t4_g7_t

0x4ffe,	// (0x00064457) list_single_dyc_row_pane_ParamLimits

0x4ffe,	// (0x00064457) list_single_dyc_row_pane

0xd86f,	// (0x0006ccc8) call5_gesture_pane_ParamLimits

0xd86f,	// (0x0006ccc8) call5_gesture_pane

0xd8a3,	// (0x0006ccfc) call5_windows_pane_ParamLimits

0xd8a3,	// (0x0006ccfc) call5_windows_pane

0xd915,	// (0x0006cd6e) call5_swipe_1_pane_cp_ParamLimits

0xd915,	// (0x0006cd6e) call5_swipe_1_pane_cp

0xd921,	// (0x0006cd7a) call5_swipe_2_pane_cp_ParamLimits

0xd921,	// (0x0006cd7a) call5_swipe_2_pane_cp

0x865b,	// (0x00067ab4) call5_image_pane_cp

0xd92d,	// (0x0006cd86) popup_call5_audio_first_window_cp_ParamLimits

0xd92d,	// (0x0006cd86) popup_call5_audio_first_window_cp

0x2c81,	// (0x000620da) call5_swipe_1_pane_g1_cp_ParamLimits

0x2c81,	// (0x000620da) call5_swipe_1_pane_g1_cp

0x2cc1,	// (0x0006211a) call5_swipe_1_pane_g2_cp

0x2c9a,	// (0x000620f3) call5_swipe_1_pane_t1_cp_ParamLimits

0x2c9a,	// (0x000620f3) call5_swipe_1_pane_t1_cp

0x2c81,	// (0x000620da) call5_swipe_2_pane_g1_cp_ParamLimits

0x2c81,	// (0x000620da) call5_swipe_2_pane_g1_cp

0x2cc9,	// (0x00062122) call5_swipe_2_pane_g2_cp

0x2cd1,	// (0x0006212a) call5_swipe_2_pane_t1_cp_ParamLimits

0x2cd1,	// (0x0006212a) call5_swipe_2_pane_t1_cp

0xf041,	// (0x0006e49a) main_sp_fs_email_pane

0x2ce6,	// (0x0006213f) main_sp_fs_listscroll_pane_te

0x5070,	// (0x000644c9) popup_sp_fs_action_menu_pane_ParamLimits

0x5070,	// (0x000644c9) popup_sp_fs_action_menu_pane

0x10d1,	// (0x0006052a) bg_sp_fs_ctrlbar_pane_g1

0x2d2f,	// (0x00062188) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2d38,	// (0x00062191) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2d41,	// (0x0006219a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x10d1,	// (0x0006052a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0006f174) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0eb4,	// (0x0006030d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0eb4,	// (0x0006030d) bg_sp_fs_ctrlbar_ddmenu_pane

0x2d4a,	// (0x000621a3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2d4a,	// (0x000621a3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2d56,	// (0x000621af) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2d56,	// (0x000621af) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0006f17d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0006f17d) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2d62,	// (0x000621bb) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2d62,	// (0x000621bb) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x50b2,	// (0x0006450b) list_medium_line_t2_right_icon_g1

0x50ba,	// (0x00064513) list_medium_line_t2_right_icon_t1

0x50ca,	// (0x00064523) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0006f182) list_medium_line_t2_right_icon_t

0xf033,	// (0x0006e48c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xf033,	// (0x0006e48c) bg_sp_fs_ctrlbar_pane

0xd990,	// (0x0006cde9) main_sp_fs_ctrlbar_button_pane_cp01

0xd998,	// (0x0006cdf1) main_sp_fs_ctrlbar_ddmenu_pane

0xf11a,	// (0x0006e573) main_sp_fs_ctrlbar_pane_g1

0x2dbc,	// (0x00062215) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0006f187) main_sp_fs_ctrlbar_pane_g

0x2dc8,	// (0x00062221) main_sp_fs_ctrlbar_pane_t1

0x50d8,	// (0x00064531) main_sp_fs_ctrlbar_pane

0x50f4,	// (0x0006454d) main_sp_fs_listscroll_pane_te_cp01

0x5105,	// (0x0006455e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5105,	// (0x0006455e) popup_sp_fs_action_menu_pane_cp01

0xf041,	// (0x0006e49a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf041,	// (0x0006e49a) bg_sp_fs_highlight_list_pane_cp01

0x511d,	// (0x00064576) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x511d,	// (0x00064576) sp_fs_action_menu_list_gene_pane_g1

0x2dec,	// (0x00062245) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2dec,	// (0x00062245) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0006f18c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0006f18c) sp_fs_action_menu_list_gene_pane_g

0x512c,	// (0x00064585) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x512c,	// (0x00064585) sp_fs_action_menu_list_gene_pane_t1

0x5144,	// (0x0006459d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5144,	// (0x0006459d) sp_fs_action_menu_list_gene_pane

0x2e2e,	// (0x00062287) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2e2e,	// (0x00062287) popup_sp_fs_action_menu_bg_pane

0x5163,	// (0x000645bc) sp_fs_action_menu_list_pane_ParamLimits

0x5163,	// (0x000645bc) sp_fs_action_menu_list_pane

0x2e5a,	// (0x000622b3) sp_fs_scroll_pane_cp01_ParamLimits

0x2e5a,	// (0x000622b3) sp_fs_scroll_pane_cp01

0x5183,	// (0x000645dc) list_medium_line_plain_t2_t1

0x5193,	// (0x000645ec) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0006f191) list_medium_line_plain_t2_t

0x51a1,	// (0x000645fa) list_medium_line_plain_t3_t1

0x51b1,	// (0x0006460a) list_medium_line_plain_t3_t2

0x51bf,	// (0x00064618) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0006f196) list_medium_line_plain_t3_t

0x4903,	// (0x00063d5c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x2_t2_g2_g1

0x491b,	// (0x00063d74) list_medium_line_x2_t2_g2_g2_ParamLimits

0x491b,	// (0x00063d74) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0006e706) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0006e706) list_medium_line_x2_t2_g2_g

0x4acb,	// (0x00063f24) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4acb,	// (0x00063f24) list_medium_line_x2_t2_g2_t1

0x494e,	// (0x00063da7) list_medium_line_x2_t2_g2_t2_ParamLimits

0x494e,	// (0x00063da7) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0006f19d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0006f19d) list_medium_line_x2_t2_g2_t

0x4903,	// (0x00063d5c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x2_t4_g2_g1

0x51cd,	// (0x00064626) list_medium_line_x2_t4_g2_g2_ParamLimits

0x51cd,	// (0x00064626) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x0006f1a2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x0006f1a2) list_medium_line_x2_t4_g2_g

0x51df,	// (0x00064638) list_medium_line_x2_t4_g2_t1_ParamLimits

0x51df,	// (0x00064638) list_medium_line_x2_t4_g2_t1

0x51f6,	// (0x0006464f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x51f6,	// (0x0006464f) list_medium_line_x2_t4_g2_t2

0x520b,	// (0x00064664) list_medium_line_x2_t4_g2_t3_ParamLimits

0x520b,	// (0x00064664) list_medium_line_x2_t4_g2_t3

0x494e,	// (0x00063da7) list_medium_line_x2_t4_g2_t4_ParamLimits

0x494e,	// (0x00063da7) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x0006f1a7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x0006f1a7) list_medium_line_x2_t4_g2_t

0x521d,	// (0x00064676) list_medium_line_t3_right_iconx2_g1

0x50b2,	// (0x0006450b) list_medium_line_t3_right_iconx2_g2

0x5225,	// (0x0006467e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x0006f1b0) list_medium_line_t3_right_iconx2_g

0x522d,	// (0x00064686) list_medium_line_t3_right_iconx2_t1

0x523d,	// (0x00064696) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x0006f1b7) list_medium_line_t3_right_iconx2_t

0x4903,	// (0x00063d5c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x3_t4_g4_g1

0x490f,	// (0x00063d68) list_medium_line_x3_t4_g4_g2_ParamLimits

0x490f,	// (0x00063d68) list_medium_line_x3_t4_g4_g2

0x49b5,	// (0x00063e0e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x49b5,	// (0x00063e0e) list_medium_line_x3_t4_g4_g3

0x524b,	// (0x000646a4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x524b,	// (0x000646a4) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x0006f1bc) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x0006f1bc) list_medium_line_x3_t4_g4_g

0x5257,	// (0x000646b0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5257,	// (0x000646b0) list_medium_line_x3_t4_g4_t1

0x526e,	// (0x000646c7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x526e,	// (0x000646c7) list_medium_line_x3_t4_g4_t2

0x5283,	// (0x000646dc) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5283,	// (0x000646dc) list_medium_line_x3_t4_g4_t3

0x5298,	// (0x000646f1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5298,	// (0x000646f1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x0006f1c5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x0006f1c5) list_medium_line_x3_t4_g4_t

0x52b5,	// (0x0006470e) list_single_dyc_row_text_pane_t1_ParamLimits

0x52b5,	// (0x0006470e) list_single_dyc_row_text_pane_t1

0x52ec,	// (0x00064745) list_single_dyc_row_text_pane_t2_ParamLimits

0x52ec,	// (0x00064745) list_single_dyc_row_text_pane_t2

0x5346,	// (0x0006479f) list_single_dyc_row_text_pane_t3_ParamLimits

0x5346,	// (0x0006479f) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x0006f1ce) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x0006f1ce) list_single_dyc_row_text_pane_t

0x5358,	// (0x000647b1) list_single_dyc_row_pane_g1_ParamLimits

0x5358,	// (0x000647b1) list_single_dyc_row_pane_g1

0x5364,	// (0x000647bd) list_single_dyc_row_pane_g2_ParamLimits

0x5364,	// (0x000647bd) list_single_dyc_row_pane_g2

0x5370,	// (0x000647c9) list_single_dyc_row_pane_g3_ParamLimits

0x5370,	// (0x000647c9) list_single_dyc_row_pane_g3

0x537c,	// (0x000647d5) list_single_dyc_row_pane_g4_ParamLimits

0x537c,	// (0x000647d5) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x0006f1d5) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x0006f1d5) list_single_dyc_row_pane_g

0x5388,	// (0x000647e1) list_single_dyc_row_text_pane_ParamLimits

0x5388,	// (0x000647e1) list_single_dyc_row_text_pane

0x041f,	// (0x0005f878) bg_sp_fs_scroll_pane

0x2f24,	// (0x0006237d) thumb_sp_fs_scroll_pane

0x4d53,	// (0x000641ac) list_medium_line_g1_ParamLimits

0x4d53,	// (0x000641ac) list_medium_line_g1

0x53a7,	// (0x00064800) list_medium_line_t1_ParamLimits

0x53a7,	// (0x00064800) list_medium_line_t1

0x4903,	// (0x00063d5c) list_medium_line_x2_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x2_g1

0x490f,	// (0x00063d68) list_medium_line_x2_g2_ParamLimits

0x490f,	// (0x00063d68) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x0006f1de) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x0006f1de) list_medium_line_x2_g

0x53bc,	// (0x00064815) list_medium_line_x2_t1_ParamLimits

0x53bc,	// (0x00064815) list_medium_line_x2_t1

0x4903,	// (0x00063d5c) list_medium_line_x3_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x3_g1

0x490f,	// (0x00063d68) list_medium_line_x3_g2_ParamLimits

0x490f,	// (0x00063d68) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x0006f1de) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x0006f1de) list_medium_line_x3_g

0x53bc,	// (0x00064815) list_medium_line_x3_t1_ParamLimits

0x53bc,	// (0x00064815) list_medium_line_x3_t1

0x2f58,	// (0x000623b1) thumb_sp_fs_scroll_pane_g1

0x2f61,	// (0x000623ba) thumb_sp_fs_scroll_pane_g2

0x2f6a,	// (0x000623c3) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0006f1e3) thumb_sp_fs_scroll_pane_g

0x2f58,	// (0x000623b1) bg_sp_fs_scroll_pane_g1

0x2f61,	// (0x000623ba) bg_sp_fs_scroll_pane_g2

0x2f6a,	// (0x000623c3) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0006f1e3) bg_sp_fs_scroll_pane_g

0x4903,	// (0x00063d5c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4903,	// (0x00063d5c) list_medium_line_x2_t3_g4_g1

0x49a9,	// (0x00063e02) list_medium_line_x2_t3_g4_g2_ParamLimits

0x49a9,	// (0x00063e02) list_medium_line_x2_t3_g4_g2

0x490f,	// (0x00063d68) list_medium_line_x2_t3_g4_g3_ParamLimits

0x490f,	// (0x00063d68) list_medium_line_x2_t3_g4_g3

0x491b,	// (0x00063d74) list_medium_line_x2_t3_g4_g4_ParamLimits

0x491b,	// (0x00063d74) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0006e782) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0006e782) list_medium_line_x2_t3_g4_g

0x53d2,	// (0x0006482b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x53d2,	// (0x0006482b) list_medium_line_x2_t3_g4_t1

0x53e8,	// (0x00064841) list_medium_line_x2_t3_g4_t2_ParamLimits

0x53e8,	// (0x00064841) list_medium_line_x2_t3_g4_t2

0x494e,	// (0x00063da7) list_medium_line_x2_t3_g4_t3_ParamLimits

0x494e,	// (0x00063da7) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x0006f1ea) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x0006f1ea) list_medium_line_x2_t3_g4_t

0x4d53,	// (0x000641ac) list_medium_line_g2_g1_ParamLimits

0x4d53,	// (0x000641ac) list_medium_line_g2_g1

0x4d5f,	// (0x000641b8) list_medium_line_g2_g2_ParamLimits

0x4d5f,	// (0x000641b8) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0006eeb2) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0006eeb2) list_medium_line_g2_g

0x5401,	// (0x0006485a) list_medium_line_g2_t1_ParamLimits

0x5401,	// (0x0006485a) list_medium_line_g2_t1

0x4d53,	// (0x000641ac) list_medium_line_t3_g2_g1_ParamLimits

0x4d53,	// (0x000641ac) list_medium_line_t3_g2_g1

0x4d5f,	// (0x000641b8) list_medium_line_t3_g2_g2_ParamLimits

0x4d5f,	// (0x000641b8) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0006eeb2) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0006eeb2) list_medium_line_t3_g2_g

0x5416,	// (0x0006486f) list_medium_line_t3_g2_t1_ParamLimits

0x5416,	// (0x0006486f) list_medium_line_t3_g2_t1

0x5430,	// (0x00064889) list_medium_line_t3_g2_t2_ParamLimits

0x5430,	// (0x00064889) list_medium_line_t3_g2_t2

0x5445,	// (0x0006489e) list_medium_line_t3_g2_t3_ParamLimits

0x5445,	// (0x0006489e) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x0006f1f1) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x0006f1f1) list_medium_line_t3_g2_t

0x50b2,	// (0x0006450b) list_medium_line_right_icon_g1

0x545b,	// (0x000648b4) list_medium_line_right_icon_t1

0x4d53,	// (0x000641ac) list_medium_line_t2_g1_ParamLimits

0x4d53,	// (0x000641ac) list_medium_line_t2_g1

0x5469,	// (0x000648c2) list_medium_line_t2_t1_ParamLimits

0x5469,	// (0x000648c2) list_medium_line_t2_t1

0x5483,	// (0x000648dc) list_medium_line_t2_t2_ParamLimits

0x5483,	// (0x000648dc) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x0006f1f8) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x0006f1f8) list_medium_line_t2_t

0x4d53,	// (0x000641ac) list_medium_line_t3_g1_ParamLimits

0x4d53,	// (0x000641ac) list_medium_line_t3_g1

0x5498,	// (0x000648f1) list_medium_line_t3_t1_ParamLimits

0x5498,	// (0x000648f1) list_medium_line_t3_t1

0x54af,	// (0x00064908) list_medium_line_t3_t2_ParamLimits

0x54af,	// (0x00064908) list_medium_line_t3_t2

0x54c4,	// (0x0006491d) list_medium_line_t3_t3_ParamLimits

0x54c4,	// (0x0006491d) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x0006f1fd) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x0006f1fd) list_medium_line_t3_t

0x4d53,	// (0x000641ac) list_medium_line_g3_g1_ParamLimits

0x4d53,	// (0x000641ac) list_medium_line_g3_g1

0x54d6,	// (0x0006492f) list_medium_line_g3_g2_ParamLimits

0x54d6,	// (0x0006492f) list_medium_line_g3_g2

0x4d5f,	// (0x000641b8) list_medium_line_g3_g3_ParamLimits

0x4d5f,	// (0x000641b8) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x0006f204) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x0006f204) list_medium_line_g3_g

0x54e2,	// (0x0006493b) list_medium_line_g3_t1_ParamLimits

0x54e2,	// (0x0006493b) list_medium_line_g3_t1

0x4d53,	// (0x000641ac) list_medium_line_t2_g3_g1_ParamLimits

0x4d53,	// (0x000641ac) list_medium_line_t2_g3_g1

0x54d6,	// (0x0006492f) list_medium_line_t2_g3_g2_ParamLimits

0x54d6,	// (0x0006492f) list_medium_line_t2_g3_g2

0x4d5f,	// (0x000641b8) list_medium_line_t2_g3_g3_ParamLimits

0x4d5f,	// (0x000641b8) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x0006f204) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x0006f204) list_medium_line_t2_g3_g

0x54f7,	// (0x00064950) list_medium_line_t2_g3_t1_ParamLimits

0x54f7,	// (0x00064950) list_medium_line_t2_g3_t1

0x550e,	// (0x00064967) list_medium_line_t2_g3_t2_ParamLimits

0x550e,	// (0x00064967) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x0006f20b) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x0006f20b) list_medium_line_t2_g3_t

0x4d53,	// (0x000641ac) list_medium_line_t3_g3_g1_ParamLimits

0x4d53,	// (0x000641ac) list_medium_line_t3_g3_g1

0x54d6,	// (0x0006492f) list_medium_line_t3_g3_g2_ParamLimits

0x54d6,	// (0x0006492f) list_medium_line_t3_g3_g2

0x4d5f,	// (0x000641b8) list_medium_line_t3_g3_g3_ParamLimits

0x4d5f,	// (0x000641b8) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x0006f204) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x0006f204) list_medium_line_t3_g3_g

0x5523,	// (0x0006497c) list_medium_line_t3_g3_t1_ParamLimits

0x5523,	// (0x0006497c) list_medium_line_t3_g3_t1

0x5537,	// (0x00064990) list_medium_line_t3_g3_t2_ParamLimits

0x5537,	// (0x00064990) list_medium_line_t3_g3_t2

0x5549,	// (0x000649a2) list_medium_line_t3_g3_t3_ParamLimits

0x5549,	// (0x000649a2) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x0006f210) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x0006f210) list_medium_line_t3_g3_t

0x521d,	// (0x00064676) list_medium_line_right_iconx2_g1

0x50b2,	// (0x0006450b) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0006f217) list_medium_line_right_iconx2_g

0x555b,	// (0x000649b4) list_medium_line_right_iconx2_t1

0x521d,	// (0x00064676) list_medium_line_t2_right_iconx2_g1

0x50b2,	// (0x0006450b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0006f217) list_medium_line_t2_right_iconx2_g

0x5569,	// (0x000649c2) list_medium_line_t2_right_iconx2_t1

0x5579,	// (0x000649d2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0006f21c) list_medium_line_t2_right_iconx2_t

0x5587,	// (0x000649e0) list_medium_line_x4_t4_t1

0x5595,	// (0x000649ee) list_medium_line_x4_t4_t2

0x55a5,	// (0x000649fe) list_medium_line_x4_t4_t3

0x55b5,	// (0x00064a0e) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0006f221) list_medium_line_x4_t4_t

0xd9cb,	// (0x0006ce24) tport_appsw_pane_ParamLimits

0xd9cb,	// (0x0006ce24) tport_appsw_pane

0xd9d7,	// (0x0006ce30) tport_contact_pane_ParamLimits

0xd9d7,	// (0x0006ce30) tport_contact_pane

0xd9e7,	// (0x0006ce40) tport_listscroll_pane_ParamLimits

0xd9e7,	// (0x0006ce40) tport_listscroll_pane

0xd9f7,	// (0x0006ce50) cell_tport_appsw_pane_ParamLimits

0xd9f7,	// (0x0006ce50) cell_tport_appsw_pane

0x13e5,	// (0x0006083e) tport_appsw_pane_g1_ParamLimits

0x13e5,	// (0x0006083e) tport_appsw_pane_g1

0x2fd3,	// (0x0006242c) tport_contact_pane_g1

0x2fdc,	// (0x00062435) tport_contact_pane_t1

0x2fea,	// (0x00062443) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0006f22a) tport_contact_pane_t

0x2ff8,	// (0x00062451) list_tport_pane

0x3001,	// (0x0006245a) scroll_pane_cp_030

0xda0c,	// (0x0006ce65) cell_tport_appsw_pane_g1

0x300a,	// (0x00062463) cell_tport_appsw_pane_t1

0x041f,	// (0x0005f878) grid_highlight_pane_cp019

0xda24,	// (0x0006ce7d) list_tport_double_graphic_pane_ParamLimits

0xda24,	// (0x0006ce7d) list_tport_double_graphic_pane

0xf041,	// (0x0006e49a) list_highlight_pane_cp023_ParamLimits

0xf041,	// (0x0006e49a) list_highlight_pane_cp023

0xda37,	// (0x0006ce90) list_tport_double_graphic_pane_g1_ParamLimits

0xda37,	// (0x0006ce90) list_tport_double_graphic_pane_g1

0xda44,	// (0x0006ce9d) list_tport_double_graphic_pane_t1_ParamLimits

0xda44,	// (0x0006ce9d) list_tport_double_graphic_pane_t1

0xda59,	// (0x0006ceb2) list_tport_double_graphic_pane_t2_ParamLimits

0xda59,	// (0x0006ceb2) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x0006f236) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x0006f236) list_tport_double_graphic_pane_t

0x041f,	// (0x0005f878) main_cale_note_pane

0xbef1,	// (0x0006b34a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbef1,	// (0x0006b34a) cell_vitu2_function_top_wide_pane_cp01

0xd58c,	// (0x0006c9e5) wait_bar_pane_cp05_ParamLimits

0x041f,	// (0x0005f878) listscroll_cmail_pane

0x3020,	// (0x00062479) list_cmail_pane

0xda75,	// (0x0006cece) list_cmail_body_pane

0xda99,	// (0x0006cef2) list_single_cmail_header_caption_pane

0xdac7,	// (0x0006cf20) list_single_cmail_header_detail_pane_ParamLimits

0xdac7,	// (0x0006cf20) list_single_cmail_header_detail_pane

0xdaff,	// (0x0006cf58) list_single_cmail_header_caption_pane_t1

0x55c5,	// (0x00064a1e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x55c5,	// (0x00064a1e) list_single_cmail_header_detail_pane_g1

0xdb0f,	// (0x0006cf68) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdb0f,	// (0x0006cf68) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0006f23b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0006f23b) list_single_cmail_header_detail_pane_g

0x55dd,	// (0x00064a36) list_single_cmail_header_detail_pane_t1_ParamLimits

0x55dd,	// (0x00064a36) list_single_cmail_header_detail_pane_t1

0x5635,	// (0x00064a8e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5635,	// (0x00064a8e) list_single_cmail_header_editor_pane_bg

0x309d,	// (0x000624f6) list_cmail_body_pane_g1

0x30a6,	// (0x000624ff) list_cmail_body_pane_t1

0x1b64,	// (0x00060fbd) list_single_cmail_header_editor_pane_bg_g1

0x7159,	// (0x000665b2) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1b74,	// (0x00060fcd) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1b6c,	// (0x00060fc5) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1d8e,	// (0x000611e7) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1b94,	// (0x00060fed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1b84,	// (0x00060fdd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1b8c,	// (0x00060fe5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x7139,	// (0x00066592) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdb1b,	// (0x0006cf74) calenote_gesture_pane_ParamLimits

0xdb1b,	// (0x0006cf74) calenote_gesture_pane

0xdb35,	// (0x0006cf8e) calenote_window_pane_ParamLimits

0xdb35,	// (0x0006cf8e) calenote_window_pane

0x30b4,	// (0x0006250d) popup_note_window_cp01

0xdb4d,	// (0x0006cfa6) calenote_swipe_1_pane_ParamLimits

0xdb4d,	// (0x0006cfa6) calenote_swipe_1_pane

0xd921,	// (0x0006cd7a) calenote_swipe_2_pane_ParamLimits

0xd921,	// (0x0006cd7a) calenote_swipe_2_pane

0x2c81,	// (0x000620da) calenote_swipe_1_pane_g1_ParamLimits

0x2c81,	// (0x000620da) calenote_swipe_1_pane_g1

0x2c8e,	// (0x000620e7) calenote_swipe_1_pane_g2_ParamLimits

0x2c8e,	// (0x000620e7) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0006f16a) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0006f16a) calenote_swipe_1_pane_g

0x30c6,	// (0x0006251f) calenote_swipe_1_pane_t1_ParamLimits

0x30c6,	// (0x0006251f) calenote_swipe_1_pane_t1

0x2c81,	// (0x000620da) calenote_swipe_2_pane_g1_ParamLimits

0x2c81,	// (0x000620da) calenote_swipe_2_pane_g1

0x30e5,	// (0x0006253e) calenote_swipe_2_pane_g2_ParamLimits

0x30e5,	// (0x0006253e) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x0006f247) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x0006f247) calenote_swipe_2_pane_g

0x30f1,	// (0x0006254a) calenote_swipe_2_pane_t1_ParamLimits

0x30f1,	// (0x0006254a) calenote_swipe_2_pane_t1

0x041f,	// (0x0005f878) main_mup_navstr_pane

0xacdf,	// (0x0006a138) main_mup3_pane_t7_ParamLimits

0xacdf,	// (0x0006a138) main_mup3_pane_t7

0xb6ca,	// (0x0006ab23) main_mp4_pane_g6_ParamLimits

0xb6ca,	// (0x0006ab23) main_mp4_pane_g6

0xba30,	// (0x0006ae89) main_image3_pane_t4_ParamLimits

0xba30,	// (0x0006ae89) main_image3_pane_t4

0xdb60,	// (0x0006cfb9) popup_navstr_preview_pane_ParamLimits

0xdb60,	// (0x0006cfb9) popup_navstr_preview_pane

0xdb6c,	// (0x0006cfc5) scroll_navstr_pane_ParamLimits

0xdb6c,	// (0x0006cfc5) scroll_navstr_pane

0x041f,	// (0x0005f878) bg_popup_preview_window_pane_cp04

0x3118,	// (0x00062571) popup_navstr_preview_pane_t1

0xdb78,	// (0x0006cfd1) scroll_navstr_pane_g1_ParamLimits

0xdb78,	// (0x0006cfd1) scroll_navstr_pane_g1

0xdb85,	// (0x0006cfde) scroll_navstr_pane_t1_ParamLimits

0xdb85,	// (0x0006cfde) scroll_navstr_pane_t1

0x30bd,	// (0x00062516) bg_button_pane_cp014

0x30bd,	// (0x00062516) bg_button_pane_cp030

0x5027,	// (0x00064480) list_double_fisheye_pane_g4_ParamLimits

0x5027,	// (0x00064480) list_double_fisheye_pane_g4

0xd85e,	// (0x0006ccb7) list_double_fisheye_pane_g5_ParamLimits

0xd85e,	// (0x0006ccb7) list_double_fisheye_pane_g5

0x3028,	// (0x00062481) sp_fs_scroll_pane_cp03

0xf11a,	// (0x0006e573) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2dbc,	// (0x00062215) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0006f187) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2dc8,	// (0x00062221) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xda6b,	// (0x0006cec4) sp_fs_scroll_pane_cp02

0x638a,	// (0x000657e3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x638a,	// (0x000657e3) popup_sp_fs_calendar_preview_list_single_pane

0x041f,	// (0x0005f878) main_cam6_pano_pane

0xf041,	// (0x0006e49a) main_mup3_pane_ParamLimits

0x041f,	// (0x0005f878) main_phacti_pane

0xd461,	// (0x0006c8ba) bg_button_pane_cp11

0xd479,	// (0x0006c8d2) main_mobtv_info_pane_g2_ParamLimits

0xd479,	// (0x0006c8d2) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0006f0e7) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0006f0e7) main_mobtv_info_pane_g

0xd62b,	// (0x0006ca84) sc_clock_pane_t5_ParamLimits

0xd62b,	// (0x0006ca84) sc_clock_pane_t5

0xd6cd,	// (0x0006cb26) main_radioblah_pane_g1_ParamLimits

0x2bcd,	// (0x00062026) main_radioblah_pane_t3_ParamLimits

0x2bcd,	// (0x00062026) main_radioblah_pane_t3

0x2be5,	// (0x0006203e) main_radioblah_pane_t4_ParamLimits

0x2be5,	// (0x0006203e) main_radioblah_pane_t4

0xd6eb,	// (0x0006cb44) main_radioblah_text_pane_ParamLimits

0xd6eb,	// (0x0006cb44) main_radioblah_text_pane

0xd6f8,	// (0x0006cb51) main_radioblah_info_pane_g1_ParamLimits

0xd78d,	// (0x0006cbe6) main_radioblah_info_pane_t4_ParamLimits

0xd78d,	// (0x0006cbe6) main_radioblah_info_pane_t4

0xf041,	// (0x0006e49a) main_sp_fs_calendar_pane

0xdb97,	// (0x0006cff0) main_phacti_pane_g1

0xdb9f,	// (0x0006cff8) phacti_note_pane_ParamLimits

0xdb9f,	// (0x0006cff8) phacti_note_pane

0x312f,	// (0x00062588) phacti_term_pane_ParamLimits

0x312f,	// (0x00062588) phacti_term_pane

0x3144,	// (0x0006259d) phacti_note_pane_t1_ParamLimits

0x3144,	// (0x0006259d) phacti_note_pane_t1

0x5647,	// (0x00064aa0) phacti_term_pane_g1

0x564f,	// (0x00064aa8) phacti_term_pane_t1_ParamLimits

0x564f,	// (0x00064aa8) phacti_term_pane_t1

0x318d,	// (0x000625e6) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3195,	// (0x000625ee) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0006f251) popup_sp_fs_calendar_preview_list_single_pane_g

0x319d,	// (0x000625f6) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x319d,	// (0x000625f6) popup_sp_fs_calendar_preview_list_single_pane_t1

0x31b3,	// (0x0006260c) aid_popup_sp_fs_bg_corner_pane

0x10d1,	// (0x0006052a) popup_sp_fs_calendar_preview_bg_pane_g1

0x041f,	// (0x0005f878) popup_sp_fs_calendar_preview_bg_pane

0x31bb,	// (0x00062614) popup_sp_fs_calendar_preview_list_pane

0xf041,	// (0x0006e49a) bg_main_sp_fs_cale_pane_ParamLimits

0xf041,	// (0x0006e49a) bg_main_sp_fs_cale_pane

0x5679,	// (0x00064ad2) listscroll_cale_mrui_pane_ParamLimits

0x5679,	// (0x00064ad2) listscroll_cale_mrui_pane

0x568d,	// (0x00064ae6) listscroll_sp_fs_schedule_track_pane

0x5696,	// (0x00064aef) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5696,	// (0x00064aef) main_sp_fs_ctrlbar_pane_cp01

0x31f1,	// (0x0006264a) main_sp_fs_ribbon_pane

0x31f9,	// (0x00062652) popup_sp_fs_cale_preview_window

0xdbe2,	// (0x0006d03b) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdbe2,	// (0x0006d03b) list_single_sp_fs_schedule_track_pane

0x5b24,	// (0x00064f7d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x5b24,	// (0x00064f7d) bg_sp_fs_highlight_list_pane_cp03

0xdc04,	// (0x0006d05d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdc04,	// (0x0006d05d) list_single_sp_fs_schedule_track_pane_g1

0xdc10,	// (0x0006d069) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdc10,	// (0x0006d069) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x0006f256) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x0006f256) list_single_sp_fs_schedule_track_pane_g

0xdc1c,	// (0x0006d075) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdc1c,	// (0x0006d075) list_single_sp_fs_schedule_track_pane_t1

0xdc34,	// (0x0006d08d) sp_fs_schedule_track_pane_ParamLimits

0xdc34,	// (0x0006d08d) sp_fs_schedule_track_pane

0x320b,	// (0x00062664) sp_fs_schedule_track_pane_g1

0x3213,	// (0x0006266c) sp_fs_schedule_track_pane_g2

0x321b,	// (0x00062674) sp_fs_schedule_track_pane_g3

0x3223,	// (0x0006267c) sp_fs_schedule_track_pane_g4

0x322b,	// (0x00062684) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0006f25b) sp_fs_schedule_track_pane_g

0x1b64,	// (0x00060fbd) bg_sp_fs_schedule_viewer_highlight_g1

0x7159,	// (0x000665b2) bg_sp_fs_schedule_viewer_highlight_g2

0x1b6c,	// (0x00060fc5) bg_sp_fs_schedule_viewer_highlight_g3

0x1b74,	// (0x00060fcd) bg_sp_fs_schedule_viewer_highlight_g4

0x1d8e,	// (0x000611e7) bg_sp_fs_schedule_viewer_highlight_g5

0x1b84,	// (0x00060fdd) bg_sp_fs_schedule_viewer_highlight_g6

0x1b8c,	// (0x00060fe5) bg_sp_fs_schedule_viewer_highlight_g7

0x1b94,	// (0x00060fed) bg_sp_fs_schedule_viewer_highlight_g8

0x7139,	// (0x00066592) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x0006f266) bg_sp_fs_schedule_viewer_highlight_g

0x041f,	// (0x0005f878) bg_main_sp_fs_ribbon_pane

0xdc44,	// (0x0006d09d) main_sp_fs_ribbon_pane_g1

0x3233,	// (0x0006268c) main_sp_fs_ribbon_pane_t1

0xdc4d,	// (0x0006d0a6) main_sp_fs_ribbon_pane_t2

0x3242,	// (0x0006269b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x0006f279) main_sp_fs_ribbon_pane_t

0x3251,	// (0x000626aa) main_sp_fs_ribbon_scheduler_pane

0x3259,	// (0x000626b2) bg_main_sp_fs_ribbon_pane_g1

0x3262,	// (0x000626bb) bg_main_sp_fs_ribbon_pane_g2

0x326b,	// (0x000626c4) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0006f280) bg_main_sp_fs_ribbon_pane_g

0x3273,	// (0x000626cc) main_sp_fs_ribbon_scheduler_pane_g1

0x327c,	// (0x000626d5) main_sp_fs_ribbon_scheduler_pane_g2

0x3285,	// (0x000626de) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x0006f287) main_sp_fs_ribbon_scheduler_pane_g

0x328e,	// (0x000626e7) list_cale_mrui_pane

0xdc5c,	// (0x0006d0b5) sp_fs_scroll_pane_cp07_ParamLimits

0xdc5c,	// (0x0006d0b5) sp_fs_scroll_pane_cp07

0xdc72,	// (0x0006d0cb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdc72,	// (0x0006d0cb) bg_sp_fs_schedule_viewer_highlight

0x3297,	// (0x000626f0) list_single_sp_fs_schedule_track_pane_cp01

0x329f,	// (0x000626f8) list_sp_fs_schedule_track_pane

0x32a7,	// (0x00062700) sp_fs_scroll_pane_cp06_ParamLimits

0x32a7,	// (0x00062700) sp_fs_scroll_pane_cp06

0x10d1,	// (0x0006052a) bgmain_sp_fs_calendar_pane_g1

0x56a7,	// (0x00064b00) list_single_cale_mrui_pane_ParamLimits

0x56a7,	// (0x00064b00) list_single_cale_mrui_pane

0x56d3,	// (0x00064b2c) list_single_cale_mrui_row_pane_ParamLimits

0x56d3,	// (0x00064b2c) list_single_cale_mrui_row_pane

0x56e0,	// (0x00064b39) list_single_cale_mrui_row_pane_g1_ParamLimits

0x56e0,	// (0x00064b39) list_single_cale_mrui_row_pane_g1

0x5718,	// (0x00064b71) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5718,	// (0x00064b71) list_single_cale_mrui_row_pane_t1

0x572a,	// (0x00064b83) list_single_cale_mrui_row_pane_t2_ParamLimits

0x572a,	// (0x00064b83) list_single_cale_mrui_row_pane_t2

0x5790,	// (0x00064be9) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5790,	// (0x00064be9) list_single_cale_mrui_row_pane_t3

0x57bf,	// (0x00064c18) list_single_cale_mrui_row_pane_t4_ParamLimits

0x57bf,	// (0x00064c18) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0006f293) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0006f293) list_single_cale_mrui_row_pane_t

0x57ee,	// (0x00064c47) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x57ee,	// (0x00064c47) list_single_cmail_header_editor_pane_bg_cp01

0x5810,	// (0x00064c69) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5810,	// (0x00064c69) list_single_cmail_header_editor_pane_bg_cp02

0xdc7f,	// (0x0006d0d8) main_radioblah_text_pane_t1_ParamLimits

0xdc7f,	// (0x0006d0d8) main_radioblah_text_pane_t1

0x336e,	// (0x000627c7) cam6_indi_pane_cp01

0x3376,	// (0x000627cf) cam6_mode_pane_cp01

0x337e,	// (0x000627d7) cam6_pano_pane

0x3387,	// (0x000627e0) cam6_zoom_pane_cp01

0x338f,	// (0x000627e8) cam6_pano_image_pane

0x339a,	// (0x000627f3) cam6_pano_pane_g1

0x2945,	// (0x00061d9e) cam6_pano_pane_g2

0x33a3,	// (0x000627fc) cam6_pano_pane_g3

0x33ac,	// (0x00062805) cam6_pano_pane_g4

0x169f,	// (0x00060af8) cam6_pano_pane_g5

0x33b5,	// (0x0006280e) cam6_pano_pane_g6

0x33bf,	// (0x00062818) cam6_pano_pane_g7

0x33c7,	// (0x00062820) cam6_pano_pane_g8

0x33d0,	// (0x00062829) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0006f29c) cam6_pano_pane_g

0x041f,	// (0x0005f878) main_browser_tag_pane

0x3110,	// (0x00062569) grid_navstr_albumart_pane

0x33db,	// (0x00062834) cell_navstr_albumart_pane_ParamLimits

0x33db,	// (0x00062834) cell_navstr_albumart_pane

0x8c16,	// (0x0006806f) cell_navstr_albumart_pane_g1

0xee50,	// (0x0006e2a9) cell_navstr_albumart_pane_g2

0xee60,	// (0x0006e2b9) cell_navstr_albumart_pane_g3

0xee58,	// (0x0006e2b1) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0006f2af) cell_navstr_albumart_pane_g

0xdc9c,	// (0x0006d0f5) bt_list_pane_ParamLimits

0xdc9c,	// (0x0006d0f5) bt_list_pane

0xdcc3,	// (0x0006d11c) bt_list_pane_t1

0xdcd2,	// (0x0006d12b) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x0006f2b8) bt_list_pane_t

0x041f,	// (0x0005f878) main_cale_prevew_pane

0xdce1,	// (0x0006d13a) popup_cale_preview_window_ParamLimits

0xdce1,	// (0x0006d13a) popup_cale_preview_window

0xf041,	// (0x0006e49a) bg_popup_preview_window_pane_cp05_ParamLimits

0xf041,	// (0x0006e49a) bg_popup_preview_window_pane_cp05

0x33fd,	// (0x00062856) list_cale_preview_pane_ParamLimits

0x33fd,	// (0x00062856) list_cale_preview_pane

0xdcf8,	// (0x0006d151) list_double_cale_preview_pane_ParamLimits

0xdcf8,	// (0x0006d151) list_double_cale_preview_pane

0xdd0a,	// (0x0006d163) list_single_cale_preview_pane_ParamLimits

0xdd0a,	// (0x0006d163) list_single_cale_preview_pane

0xdd1e,	// (0x0006d177) list_single_cale_preview_pane_g1

0xdd26,	// (0x0006d17f) list_single_cale_preview_pane_t1_ParamLimits

0xdd26,	// (0x0006d17f) list_single_cale_preview_pane_t1

0xdd3b,	// (0x0006d194) list_double_cale_preview_pane_g1

0xdd43,	// (0x0006d19c) list_double_cale_preview_pane_t1_ParamLimits

0xdd43,	// (0x0006d19c) list_double_cale_preview_pane_t1

0xdd58,	// (0x0006d1b1) list_double_cale_preview_pane_t2_ParamLimits

0xdd58,	// (0x0006d1b1) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x0006f2bd) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x0006f2bd) list_double_cale_preview_pane_t

0x041f,	// (0x0005f878) main_ezdial_pane

0xf041,	// (0x0006e49a) main_sp_fs_email_pane_ParamLimits

0xd939,	// (0x0006cd92) cmail_ddmenu_btn01_pane_ParamLimits

0xd939,	// (0x0006cd92) cmail_ddmenu_btn01_pane

0xd956,	// (0x0006cdaf) cmail_ddmenu_btn02_pane_ParamLimits

0xd956,	// (0x0006cdaf) cmail_ddmenu_btn02_pane

0xd974,	// (0x0006cdcd) cmail_ddmenu_btn03_pane_ParamLimits

0xd974,	// (0x0006cdcd) cmail_ddmenu_btn03_pane

0x50d8,	// (0x00064531) main_sp_fs_ctrlbar_pane_ParamLimits

0x50f4,	// (0x0006454d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xda75,	// (0x0006cece) list_cmail_body_pane_ParamLimits

0x3037,	// (0x00062490) bg_button_pane_cp12

0x304c,	// (0x000624a5) list_single_cmail_header_detail_pane_g3_ParamLimits

0x304c,	// (0x000624a5) list_single_cmail_header_detail_pane_g3

0x560f,	// (0x00064a68) list_single_cmail_header_detail_pane_t2_ParamLimits

0x560f,	// (0x00064a68) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0006f242) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0006f242) list_single_cmail_header_detail_pane_t

0x5664,	// (0x00064abd) phacti_term_pane_t2_ParamLimits

0x5664,	// (0x00064abd) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0006f24c) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0006f24c) phacti_term_pane_t

0x3409,	// (0x00062862) aid_size_list_single_double

0xdd70,	// (0x0006d1c9) popup_ezdial_listscroll_window

0xdd91,	// (0x0006d1ea) popup_number_entry_window_cp01

0x865b,	// (0x00067ab4) bg_popup_call_pane_cp09

0x3415,	// (0x0006286e) ezdial_list_pane

0x341d,	// (0x00062876) scroll_pane_cp23

0x0eb4,	// (0x0006030d) bg_button_pane_cp028_ParamLimits

0x0eb4,	// (0x0006030d) bg_button_pane_cp028

0xdd9f,	// (0x0006d1f8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdd9f,	// (0x0006d1f8) cmail_ddmenu_btn01_pane_g1

0xddb1,	// (0x0006d20a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xddb1,	// (0x0006d20a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x0006f2c2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x0006f2c2) cmail_ddmenu_btn01_pane_g

0x3425,	// (0x0006287e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3425,	// (0x0006287e) cmail_ddmenu_btn01_pane_t1

0xf033,	// (0x0006e48c) bg_button_pane_cp029_ParamLimits

0xf033,	// (0x0006e48c) bg_button_pane_cp029

0xddb1,	// (0x0006d20a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xddb1,	// (0x0006d20a) cmail_ddmenu_btn02_pane_g1

0xddc9,	// (0x0006d222) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xddc9,	// (0x0006d222) cmail_ddmenu_btn02_pane_t1

0x5b24,	// (0x00064f7d) bg_button_pane_cp031_ParamLimits

0x5b24,	// (0x00064f7d) bg_button_pane_cp031

0xddb1,	// (0x0006d20a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xddb1,	// (0x0006d20a) cmail_ddmenu_btn03_pane_g1

0xddc9,	// (0x0006d222) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xddc9,	// (0x0006d222) cmail_ddmenu_btn03_pane_t1

0xb8db,	// (0x0006ad34) cell_dialer2_keypad_pane_t1_ParamLimits

0xb8f5,	// (0x0006ad4e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb8f5,	// (0x0006ad4e) cell_dialer2_keypad_pane_t1_copy1

0xd323,	// (0x0006c77c) ncimui_group_button_pane

0xf041,	// (0x0006e49a) main_sp_fs_calendar_pane_ParamLimits

0xda99,	// (0x0006cef2) list_single_cmail_header_caption_pane_ParamLimits

0x20d1,	// (0x0006152a) aid_recal_txt_sm_pane

0x041f,	// (0x0005f878) mian_recal_day_pane

0x31f9,	// (0x00062652) popup_sp_fs_cale_preview_window_ParamLimits

0x041f,	// (0x0005f878) list_recal_day_pane

0x3453,	// (0x000628ac) list_single_recal_day_pane_ParamLimits

0x3453,	// (0x000628ac) list_single_recal_day_pane

0x3465,	// (0x000628be) list_single_recal_day_pane_g1_ParamLimits

0x3465,	// (0x000628be) list_single_recal_day_pane_g1

0x3471,	// (0x000628ca) list_single_recal_day_pane_g2_ParamLimits

0x3471,	// (0x000628ca) list_single_recal_day_pane_g2

0x3480,	// (0x000628d9) list_single_recal_day_pane_g3_ParamLimits

0x3480,	// (0x000628d9) list_single_recal_day_pane_g3

0xdded,	// (0x0006d246) list_single_recal_day_pane_g4_ParamLimits

0xdded,	// (0x0006d246) list_single_recal_day_pane_g4

0x348c,	// (0x000628e5) list_single_recal_day_pane_g5_ParamLimits

0x348c,	// (0x000628e5) list_single_recal_day_pane_g5

0x349b,	// (0x000628f4) list_single_recal_day_pane_g6_ParamLimits

0x349b,	// (0x000628f4) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x0006f2d1) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x0006f2d1) list_single_recal_day_pane_g

0x34a7,	// (0x00062900) list_single_recal_day_pane_t1

0x34b5,	// (0x0006290e) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x0006f2de) list_single_recal_day_pane_t

0xde00,	// (0x0006d259) ncimui_query_button_pane_ParamLimits

0xde00,	// (0x0006d259) ncimui_query_button_pane

0xde10,	// (0x0006d269) ncimui_query_button_pane_t1_ParamLimits

0xde10,	// (0x0006d269) ncimui_query_button_pane_t1

0x34c3,	// (0x0006291c) ncimui_query_button_pane_t2_ParamLimits

0x34c3,	// (0x0006291c) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x0006f2e3) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x0006f2e3) ncimui_query_button_pane_t

0xde23,	// (0x0006d27c) query_button_pane_ParamLimits

0xde23,	// (0x0006d27c) query_button_pane

0x041f,	// (0x0005f878) bg_button_pane_cp0028

0x34d6,	// (0x0006292f) query_button_pane_t1

0x9d0c,	// (0x00069165) main_tport_pane_ParamLimits

0xd9a2,	// (0x0006cdfb) bg_popup_window_pane_cp01_ParamLimits

0xd9a2,	// (0x0006cdfb) bg_popup_window_pane_cp01

0xd9af,	// (0x0006ce08) heading_pane_cp08_ParamLimits

0xd9af,	// (0x0006ce08) heading_pane_cp08

0xd9bd,	// (0x0006ce16) heading_pane_cp07_ParamLimits

0xd9bd,	// (0x0006ce16) heading_pane_cp07

0xda14,	// (0x0006ce6d) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0006f22f) cell_tport_appsw_pane_g

0x4b24,	// (0x00063f7d) input_candi_list_open_g1

0x7ccd,	// (0x00067126) list_cale_time_pane_g6_ParamLimits

0x7ccd,	// (0x00067126) list_cale_time_pane_g6

0xa752,	// (0x00069bab) aid_size_touch_calib_1_ParamLimits

0xa752,	// (0x00069bab) aid_size_touch_calib_1

0xa75e,	// (0x00069bb7) aid_size_touch_calib_2_ParamLimits

0xa75e,	// (0x00069bb7) aid_size_touch_calib_2

0xa76c,	// (0x00069bc5) aid_size_touch_calib_3_ParamLimits

0xa76c,	// (0x00069bc5) aid_size_touch_calib_3

0xa77c,	// (0x00069bd5) aid_size_touch_calib_4_ParamLimits

0xa77c,	// (0x00069bd5) aid_size_touch_calib_4

0xa78a,	// (0x00069be3) main_touch_calib_button_group_pane_ParamLimits

0xa78a,	// (0x00069be3) main_touch_calib_button_group_pane

0xa798,	// (0x00069bf1) main_touch_calib_pane_g1_ParamLimits

0xa7a4,	// (0x00069bfd) main_touch_calib_pane_g2_ParamLimits

0xa7b0,	// (0x00069c09) main_touch_calib_pane_g3_ParamLimits

0xa7bc,	// (0x00069c15) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0006ec11) main_touch_calib_pane_g_ParamLimits

0xa7c8,	// (0x00069c21) main_touch_calib_pane_t1_ParamLimits

0xa7df,	// (0x00069c38) main_touch_calib_pane_t2_ParamLimits

0xa7f6,	// (0x00069c4f) main_touch_calib_pane_t3_ParamLimits

0xa80a,	// (0x00069c63) main_touch_calib_pane_t4_ParamLimits

0xa81e,	// (0x00069c77) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0006ec1a) main_touch_calib_pane_t_ParamLimits

0x1486,	// (0x000608df) list_single_fp_cale_pane_g3_ParamLimits

0x1486,	// (0x000608df) list_single_fp_cale_pane_g3

0xf041,	// (0x0006e49a) bg_button_pane_cp012_ParamLimits

0xf041,	// (0x0006e49a) bg_vkb2_func_pane_cp03_ParamLimits

0xc674,	// (0x0006bacd) cell_vitu2_function_top_pane_g1_ParamLimits

0xf041,	// (0x0006e49a) bg_vkb2_func_pane_cp04_ParamLimits

0xd2d4,	// (0x0006c72d) main_ncimui_button_group_pane_ParamLimits

0xd2d4,	// (0x0006c72d) main_ncimui_button_group_pane

0xd311,	// (0x0006c76a) main_ncimui_pane_t3_ParamLimits

0xd311,	// (0x0006c76a) main_ncimui_pane_t3

0x3126,	// (0x0006257f) phacti_button_group_pane

0x3409,	// (0x00062862) aid_size_list_single_double_ParamLimits

0xdd70,	// (0x0006d1c9) popup_ezdial_listscroll_window_ParamLimits

0xdd91,	// (0x0006d1ea) popup_number_entry_window_cp01_ParamLimits

0xde30,	// (0x0006d289) phacti_button_pane_ParamLimits

0xde30,	// (0x0006d289) phacti_button_pane

0x041f,	// (0x0005f878) bg_button_pane_cp14

0x34e4,	// (0x0006293d) phacti_button_pane_t1

0xde41,	// (0x0006d29a) main_touch_calib_button_pane_ParamLimits

0xde41,	// (0x0006d29a) main_touch_calib_button_pane

0x600e,	// (0x00065467) bg_button_pane_cp18_ParamLimits

0x600e,	// (0x00065467) bg_button_pane_cp18

0x34f2,	// (0x0006294b) main_touch_calib_button_pane_t1_ParamLimits

0x34f2,	// (0x0006294b) main_touch_calib_button_pane_t1

0x3508,	// (0x00062961) main_touch_calib_button_pane_t2_ParamLimits

0x3508,	// (0x00062961) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x0006f2e8) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x0006f2e8) main_touch_calib_button_pane_t

0x041f,	// (0x0005f878) cell_ncimui_button_pane

0x041f,	// (0x0005f878) bg_button_pane_cp032

0x3526,	// (0x0006297f) cell_ncimui_button_pane_t1

0xb951,	// (0x0006adaa) image3_infobar_pane_ParamLimits

0xb951,	// (0x0006adaa) image3_infobar_pane

0xd64d,	// (0x0006caa6) fs_bigclock_status_pane_ParamLimits

0xd64d,	// (0x0006caa6) fs_bigclock_status_pane

0xd65a,	// (0x0006cab3) main_fs_bigclock_clock_pane_ParamLimits

0xd65a,	// (0x0006cab3) main_fs_bigclock_clock_pane

0xd66e,	// (0x0006cac7) main_fs_bigclock_indi_pane_ParamLimits

0xd66e,	// (0x0006cac7) main_fs_bigclock_indi_pane

0xd69b,	// (0x0006caf4) main_fs_bigclock_swipe_pane_ParamLimits

0xd69b,	// (0x0006caf4) main_fs_bigclock_swipe_pane

0x041f,	// (0x0005f878) main_fs_clock_dumped_data

0x2a52,	// (0x00061eab) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2a52,	// (0x00061eab) list_single_fs_bigclock_indicator_pane_g1

0x2a70,	// (0x00061ec9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2a70,	// (0x00061ec9) list_single_fs_bigclock_indicator_pane_g2

0x2a8a,	// (0x00061ee3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2a8a,	// (0x00061ee3) list_single_fs_bigclock_indicator_pane_g3

0x2aa4,	// (0x00061efd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2aa4,	// (0x00061efd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0006f11b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0006f11b) list_single_fs_bigclock_indicator_pane_g

0x2aca,	// (0x00061f23) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2aca,	// (0x00061f23) list_single_fs_bigclock_indicator_pane_t1

0x2af2,	// (0x00061f4b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2af2,	// (0x00061f4b) list_single_fs_bigclock_indicator_pane_t2

0x2b1a,	// (0x00061f73) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2b1a,	// (0x00061f73) list_single_fs_bigclock_indicator_pane_t3

0x2b42,	// (0x00061f9b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2b42,	// (0x00061f9b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0006f126) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0006f126) list_single_fs_bigclock_indicator_pane_t

0x3534,	// (0x0006298d) image3_infobar_fav_pane_ParamLimits

0x3534,	// (0x0006298d) image3_infobar_fav_pane

0x3544,	// (0x0006299d) image3_infobar_loc_pane_ParamLimits

0x3544,	// (0x0006299d) image3_infobar_loc_pane

0x3558,	// (0x000629b1) image3_infobar_time_pane_ParamLimits

0x3558,	// (0x000629b1) image3_infobar_time_pane

0x10d1,	// (0x0006052a) image3_infobar_time_pane_g1

0x3568,	// (0x000629c1) image3_infobar_time_pane_t1

0x10d1,	// (0x0006052a) image3_infobar_loc_pane_g1

0x3576,	// (0x000629cf) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x0006f2ed) image3_infobar_loc_pane_g

0x357e,	// (0x000629d7) image3_infobar_loc_pane_t1

0x10d1,	// (0x0006052a) image3_infobar_fav_pane_g1

0x358c,	// (0x000629e5) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x0006f2f2) image3_infobar_fav_pane_g

0x3594,	// (0x000629ed) fs_bigclock_status_battery_pane

0x359d,	// (0x000629f6) fs_bigclock_status_signal_pane

0x35a6,	// (0x000629ff) fs_bigclock_status_title_pane

0x35af,	// (0x00062a08) fs_bigclock_status_signal_pane_g1

0x35b8,	// (0x00062a11) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x0006f2f7) fs_bigclock_status_signal_pane_g

0x35c0,	// (0x00062a19) fs_bigclock_status_battery_pane_g1

0x35c9,	// (0x00062a22) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x0006f2fc) fs_bigclock_status_battery_pane_g

0x35d1,	// (0x00062a2a) fs_bigclock_status_title_pane_t1

0x10d1,	// (0x0006052a) main_fs_bigclock_clock_pane_g1

0x35df,	// (0x00062a38) main_fs_bigclock_clock_pane_g2

0x35df,	// (0x00062a38) main_fs_bigclock_clock_pane_g3

0x35df,	// (0x00062a38) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x0006f301) main_fs_bigclock_clock_pane_g

0x35e7,	// (0x00062a40) main_fs_bigclock_clock_pane_t1

0x35f5,	// (0x00062a4e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x0006f30a) main_fs_bigclock_clock_pane_t

0x3604,	// (0x00062a5d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3604,	// (0x00062a5d) list_single_fs_bigclock_indicator_pane

0xde51,	// (0x0006d2aa) list_single_fs_bigclock_pane_ParamLimits

0xde51,	// (0x0006d2aa) list_single_fs_bigclock_pane

0x3a1b,	// (0x00062e74) main_fs_bigclock_indicator_pane_t1

0x3a2a,	// (0x00062e83) list_single_fs_bigclock_pane_g1

0x3a32,	// (0x00062e8b) list_single_fs_bigclock_pane_t1

0x10d1,	// (0x0006052a) main_fs_bigclock_swipe_pane_g1

0x3a70,	// (0x00062ec9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0006f31b) main_fs_bigclock_swipe_pane_g

0x3a78,	// (0x00062ed1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3a78,	// (0x00062ed1) main_fs_bigclock_swipe_pane_t1

0x7fb4,	// (0x0006740d) call_type_pane_ParamLimits

0x041f,	// (0x0005f878) main_btmg_pane

0x570c,	// (0x00064b65) list_single_cale_mrui_row_pane_g2_ParamLimits

0x570c,	// (0x00064b65) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0006f28e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0006f28e) list_single_cale_mrui_row_pane_g

0x3443,	// (0x0006289c) list_recal_vselct_arw_lo_pane

0x344b,	// (0x000628a4) list_recal_vselct_arw_up_pane

0x20c8,	// (0x00061521) list_recal_vselct_pane

0x3a95,	// (0x00062eee) btmg_button_pane

0xdeb5,	// (0x0006d30e) main_btmg_pane_g1

0x041f,	// (0x0005f878) bg_button_pane_cp044

0x3a9f,	// (0x00062ef8) btmg_button_pane_t1

0xf02b,	// (0x0006e484) aid_listscroll_gen

0xf041,	// (0x0006e49a) main_cntbar_detail_pane

0x3018,	// (0x00062471) list_cmail_folder_pane

0x3028,	// (0x00062481) sp_fs_scroll_pane_cp03_ParamLimits

0x582c,	// (0x00064c85) list_single_fs_dyc_pane_cp01_ParamLimits

0x582c,	// (0x00064c85) list_single_fs_dyc_pane_cp01

0xdebd,	// (0x0006d316) aid_size_cmail_indent

0x5858,	// (0x00064cb1) list_single_dyc_row_pane_cp01

0xdee6,	// (0x0006d33f) cntbar_detail_list_pane_ParamLimits

0xdee6,	// (0x0006d33f) cntbar_detail_list_pane

0xdf20,	// (0x0006d379) main_cntbar_detail_cont_pane_ParamLimits

0xdf20,	// (0x0006d379) main_cntbar_detail_cont_pane

0x7e9a,	// (0x000672f3) scroll_pane_cp032_ParamLimits

0x7e9a,	// (0x000672f3) scroll_pane_cp032

0xdf2c,	// (0x0006d385) cntbar_detail_list_event_pane_ParamLimits

0xdf2c,	// (0x0006d385) cntbar_detail_list_event_pane

0xdef2,	// (0x0006d34b) cntbar_detail_list_shct_pane

0x71b1,	// (0x0006660a) aid_list_gen

0xdf40,	// (0x0006d399) aid_scroll

0xdf49,	// (0x0006d3a2) aid_size_touch_scroll_bar

0xf111,	// (0x0006e56a) aid_list_double

0xdf52,	// (0x0006d3ab) aid_list_single

0xf126,	// (0x0006e57f) aid_list_single_lg

0x5861,	// (0x00064cba) aid_list_z_g_a_sm

0xdf5b,	// (0x0006d3b4) aid_list_z_g_d

0x5869,	// (0x00064cc2) aid_txt_z_prm

0x5877,	// (0x00064cd0) aid_txt_z_prm_cp01

0x5885,	// (0x00064cde) aid_txt_z_sec

0xdf63,	// (0x0006d3bc) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdf63,	// (0x0006d3bc) main_cntbar_detail_cont_pane_g1

0xdf70,	// (0x0006d3c9) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdf70,	// (0x0006d3c9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x0006f320) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x0006f320) main_cntbar_detail_cont_pane_g

0xdf7c,	// (0x0006d3d5) main_cntbar_detail_cont_pane_t1

0xdf8a,	// (0x0006d3e3) main_cntbar_detail_cont_pane_t2

0xdf98,	// (0x0006d3f1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x0006f325) main_cntbar_detail_cont_pane_t

0xdfa6,	// (0x0006d3ff) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdfa6,	// (0x0006d3ff) cell_cntbar_detail_list_shct_pane

0xdfba,	// (0x0006d413) cntbar_detail_list_shct_pane_g1

0xdfc3,	// (0x0006d41c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0006f32c) cntbar_detail_list_shct_pane_g

0xdfcc,	// (0x0006d425) cntbar_detail_list_event_pane_g1_ParamLimits

0xdfcc,	// (0x0006d425) cntbar_detail_list_event_pane_g1

0xdfd8,	// (0x0006d431) cntbar_detail_list_event_pane_g2_ParamLimits

0xdfd8,	// (0x0006d431) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0006f331) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0006f331) cntbar_detail_list_event_pane_g

0xe044,	// (0x0006d49d) cntbar_detail_list_event_pane_t1_ParamLimits

0xe044,	// (0x0006d49d) cntbar_detail_list_event_pane_t1

0xe059,	// (0x0006d4b2) cntbar_detail_list_event_pane_t2_ParamLimits

0xe059,	// (0x0006d4b2) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0006f33e) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0006f33e) cntbar_detail_list_event_pane_t

0x10d1,	// (0x0006052a) cell_cntbar_detail_list_shct_pane_g1

0x85ef,	// (0x00067a48) navi_pane_mv_g3

0xf041,	// (0x0006e49a) main_cntbar_detail_pane_ParamLimits

0x041f,	// (0x0005f878) main_notif_wgt_pane

0xb62d,	// (0x0006aa86) aid_tch_main_mp4_pane_g4

0xb838,	// (0x0006ac91) popup_slider_window_cp02

0x343a,	// (0x00062893) list_recal_day_event_pane

0xdec6,	// (0x0006d31f) cntbar_detail_btn_pane_ParamLimits

0xdec6,	// (0x0006d31f) cntbar_detail_btn_pane

0xded6,	// (0x0006d32f) cntbar_detail_btn_pane_cp01_ParamLimits

0xded6,	// (0x0006d32f) cntbar_detail_btn_pane_cp01

0xdef2,	// (0x0006d34b) cntbar_detail_list_shct_pane_ParamLimits

0xdefe,	// (0x0006d357) cntbar_detail_pane_g1_ParamLimits

0xdefe,	// (0x0006d357) cntbar_detail_pane_g1

0xdf0a,	// (0x0006d363) cntbar_detail_pane_t1_ParamLimits

0xdf0a,	// (0x0006d363) cntbar_detail_pane_t1

0xdfe4,	// (0x0006d43d) cntbar_detail_list_event_pane_g3_ParamLimits

0xdfe4,	// (0x0006d43d) cntbar_detail_list_event_pane_g3

0xdffc,	// (0x0006d455) cntbar_detail_list_event_pane_g4_ParamLimits

0xdffc,	// (0x0006d455) cntbar_detail_list_event_pane_g4

0xe014,	// (0x0006d46d) cntbar_detail_list_event_pane_g5_ParamLimits

0xe014,	// (0x0006d46d) cntbar_detail_list_event_pane_g5

0xe02c,	// (0x0006d485) cntbar_detail_list_event_pane_g6_ParamLimits

0xe02c,	// (0x0006d485) cntbar_detail_list_event_pane_g6

0xe06e,	// (0x0006d4c7) cntbar_detail_list_event_pane_t3_ParamLimits

0xe06e,	// (0x0006d4c7) cntbar_detail_list_event_pane_t3

0xe080,	// (0x0006d4d9) popup_notif_wgt_window_ParamLimits

0xe080,	// (0x0006d4d9) popup_notif_wgt_window

0xe090,	// (0x0006d4e9) popup_submenu_window_cp01_ParamLimits

0xe090,	// (0x0006d4e9) popup_submenu_window_cp01

0x865b,	// (0x00067ab4) bg_popup_window_pane_cp10

0xe09e,	// (0x0006d4f7) listscroll_notif_wgt_pane

0xe0a8,	// (0x0006d501) list_notif_wgt_window

0xe0b1,	// (0x0006d50a) scroll_pane_cp033

0xe0ba,	// (0x0006d513) list_notif_wgt_row_pane_ParamLimits

0xe0ba,	// (0x0006d513) list_notif_wgt_row_pane

0xe0ce,	// (0x0006d527) aid_size_list_notif_wgt_del

0xe0d7,	// (0x0006d530) list_notif_wgt_row_pane_g1

0xe0df,	// (0x0006d538) list_notif_wgt_row_pane_g2

0xe0e7,	// (0x0006d540) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x0006f345) list_notif_wgt_row_pane_g

0xe0f0,	// (0x0006d549) list_notif_wgt_row_pane_t1

0xe0fe,	// (0x0006d557) list_notif_wgt_row_pane_t2

0xe10c,	// (0x0006d565) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0006f34c) list_notif_wgt_row_pane_t

0x1dc0,	// (0x00061219) list_recal_day_event_pane_g1

0xe11a,	// (0x0006d573) list_recal_day_event_pane_t1

0x041f,	// (0x0005f878) bg_button_pane_cp045

0xe129,	// (0x0006d582) cntbar_detail_btn_pane_t1

0xf033,	// (0x0006e48c) main_callh_pane_ParamLimits

0xf033,	// (0x0006e48c) main_callh_pane

0x041f,	// (0x0005f878) main_coverflow0_pane

0x041f,	// (0x0005f878) main_wgtman_pane

0xd6b3,	// (0x0006cb0c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd6b3,	// (0x0006cb0c) main_fs_bigclock_unlock_btn_pane

0xda04,	// (0x0006ce5d) bg_button_pane_cp16

0xda1c,	// (0x0006ce75) cell_tport_appsw_pane_g3

0xe137,	// (0x0006d590) cf0_flow_pane_ParamLimits

0xe137,	// (0x0006d590) cf0_flow_pane

0xe146,	// (0x0006d59f) listscroll_cf0_pane

0xe14f,	// (0x0006d5a8) main_cf0_pane_g1

0xe159,	// (0x0006d5b2) main_cf0_pane_t1_ParamLimits

0xe159,	// (0x0006d5b2) main_cf0_pane_t1

0xe16d,	// (0x0006d5c6) main_cf0_pane_t2_ParamLimits

0xe16d,	// (0x0006d5c6) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0006f353) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0006f353) main_cf0_pane_t

0xe181,	// (0x0006d5da) scroll_pane_cp11

0xe18c,	// (0x0006d5e5) cf0_flow_pane_g1

0xe194,	// (0x0006d5ed) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x0006f358) cf0_flow_pane_g

0xe19c,	// (0x0006d5f5) cf0_flow_pane_t1

0x041f,	// (0x0005f878) main_call6_pane

0x041f,	// (0x0005f878) main_calllock_pane

0xe1aa,	// (0x0006d603) call6_btn_grp_pane_ParamLimits

0xe1aa,	// (0x0006d603) call6_btn_grp_pane

0xe1b9,	// (0x0006d612) call6_pane_g1_ParamLimits

0xe1b9,	// (0x0006d612) call6_pane_g1

0xe1c8,	// (0x0006d621) popup_call6_1st_window_ParamLimits

0xe1c8,	// (0x0006d621) popup_call6_1st_window

0xe1d6,	// (0x0006d62f) popup_call6_2nd_window_ParamLimits

0xe1d6,	// (0x0006d62f) popup_call6_2nd_window

0xe1e4,	// (0x0006d63d) cell_call6_btn_pane_ParamLimits

0xe1e4,	// (0x0006d63d) cell_call6_btn_pane

0x865b,	// (0x00067ab4) bg_popup_call2_in_pane_cp03

0xe1f3,	// (0x0006d64c) popup_call6_1st_window_g1

0xe1fb,	// (0x0006d654) popup_call6_1st_window_g2

0xe203,	// (0x0006d65c) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0006f35d) popup_call6_1st_window_g

0xe20b,	// (0x0006d664) popup_call6_1st_window_t1

0xe21a,	// (0x0006d673) popup_call6_1st_window_t2

0xe22a,	// (0x0006d683) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0006f364) popup_call6_1st_window_t

0x865b,	// (0x00067ab4) bg_popup_call2_in_pane_cp04

0xe1f3,	// (0x0006d64c) popup_call6_2nd_window_g1

0xe1fb,	// (0x0006d654) popup_call6_2nd_window_g2

0xe203,	// (0x0006d65c) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0006f35d) popup_call6_2nd_window_g

0xe20b,	// (0x0006d664) popup_call6_2nd_window_t1

0x041f,	// (0x0005f878) bg_button_pane_cp15

0xe23a,	// (0x0006d693) cell_call6_btn_pane_g1

0xe243,	// (0x0006d69c) cell_call6_btn_pane_t1

0xe252,	// (0x0006d6ab) listscroll_wgtman_pane_ParamLimits

0xe252,	// (0x0006d6ab) listscroll_wgtman_pane

0xe261,	// (0x0006d6ba) wgtman_btn_pane_ParamLimits

0xe261,	// (0x0006d6ba) wgtman_btn_pane

0x825b,	// (0x000676b4) aid_scroll_copy1

0xe26f,	// (0x0006d6c8) list_wgtman_pane

0xe279,	// (0x0006d6d2) wgtman_btn_pane_g1_ParamLimits

0xe279,	// (0x0006d6d2) wgtman_btn_pane_g1

0xe285,	// (0x0006d6de) wgtman_btn_pane_t1_ParamLimits

0xe285,	// (0x0006d6de) wgtman_btn_pane_t1

0xe297,	// (0x0006d6f0) wgtman_btn_pane_t2_ParamLimits

0xe297,	// (0x0006d6f0) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0006f36b) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0006f36b) wgtman_btn_pane_t

0xe2a9,	// (0x0006d702) listrow_wgtman_pane_ParamLimits

0xe2a9,	// (0x0006d702) listrow_wgtman_pane

0xe2c5,	// (0x0006d71e) listrow_wgtman_pane_g1

0xe2ce,	// (0x0006d727) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0006f370) listrow_wgtman_pane_g

0x5893,	// (0x00064cec) listrow_wgtman_pane_t1

0x58a1,	// (0x00064cfa) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x0006f375) listrow_wgtman_pane_t

0x58af,	// (0x00064d08) wait_bar_pane_cp09

0xe2d8,	// (0x0006d731) main_calllock_btn_pane

0xe2e2,	// (0x0006d73b) main_calllock_pane_g1

0x041f,	// (0x0005f878) bg_button_pane_cp17

0xe2ed,	// (0x0006d746) main_calllock_btn_pane_g1

0xe2f6,	// (0x0006d74f) main_calllock_btn_pane_t1

0x041f,	// (0x0005f878) main_dialer3_pane

0x041f,	// (0x0005f878) main_fmrd2_pane

0x10d1,	// (0x0006052a) main_fs_bigclock_unlock_btn_pane_g1

0xe30d,	// (0x0006d766) main_fs_bigclock_unlock_btn_pane_t1

0xe31b,	// (0x0006d774) area_fmrd2_info_pane_ParamLimits

0xe31b,	// (0x0006d774) area_fmrd2_info_pane

0xe32a,	// (0x0006d783) area_fmrd2_visual_pane_ParamLimits

0xe32a,	// (0x0006d783) area_fmrd2_visual_pane

0xe338,	// (0x0006d791) fmrd2_indi_pane_ParamLimits

0xe338,	// (0x0006d791) fmrd2_indi_pane

0xe345,	// (0x0006d79e) area_fmrd2_visual_pane_g1

0xe34d,	// (0x0006d7a6) area_fmrd2_visual_pane_t1

0xe35d,	// (0x0006d7b6) area_fmrd2_visual_pane_t2

0xe36d,	// (0x0006d7c6) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0006f37f) area_fmrd2_visual_pane_t

0xe37d,	// (0x0006d7d6) area_fmrd2_info_pane_g1

0xe385,	// (0x0006d7de) area_fmrd2_info_pane_t1

0xe395,	// (0x0006d7ee) area_fmrd2_info_pane_t2

0xe3a5,	// (0x0006d7fe) area_fmrd2_info_pane_t3

0xe3b5,	// (0x0006d80e) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x0006f386) area_fmrd2_info_pane_t

0xe3c3,	// (0x0006d81c) fmrd2_indi_pane_t1

0xe3d3,	// (0x0006d82c) fmrd2_indi_pane_t2

0xe3e3,	// (0x0006d83c) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0006f38f) fmrd2_indi_pane_t

0x2ab3,	// (0x00061f0c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2ab3,	// (0x00061f0c) list_single_fs_bigclock_indicator_pane_g5

0x2b57,	// (0x00061fb0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2b57,	// (0x00061fb0) list_single_fs_bigclock_indicator_pane_t5

0xdbb5,	// (0x0006d00e) aid_cell_bcale_month_pane_ParamLimits

0xdbb5,	// (0x0006d00e) aid_cell_bcale_month_pane

0xdbc1,	// (0x0006d01a) bcale_month_pane_ParamLimits

0xdbc1,	// (0x0006d01a) bcale_month_pane

0xdbd1,	// (0x0006d02a) bcale_preview_pane_ParamLimits

0xdbd1,	// (0x0006d02a) bcale_preview_pane

0x3a32,	// (0x00062e8b) list_single_fs_bigclock_pane_t1_ParamLimits

0x3a4c,	// (0x00062ea5) list_single_fs_bigclock_pane_t2_ParamLimits

0x3a4c,	// (0x00062ea5) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x0006f316) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x0006f316) list_single_fs_bigclock_pane_t

0xe305,	// (0x0006d75e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0006f37a) main_fs_bigclock_unlock_btn_pane_g

0xe3f1,	// (0x0006d84a) aid_dia3_key_size_ParamLimits

0xe3f1,	// (0x0006d84a) aid_dia3_key_size

0xe3fd,	// (0x0006d856) aid_dia3_listrow_size_ParamLimits

0xe3fd,	// (0x0006d856) aid_dia3_listrow_size

0xe40b,	// (0x0006d864) dia3_keypad_fun_pane_ParamLimits

0xe40b,	// (0x0006d864) dia3_keypad_fun_pane

0xe41b,	// (0x0006d874) dia3_keypad_num_pane_ParamLimits

0xe41b,	// (0x0006d874) dia3_keypad_num_pane

0xe42b,	// (0x0006d884) dia3_listscroll_pane_ParamLimits

0xe42b,	// (0x0006d884) dia3_listscroll_pane

0xe439,	// (0x0006d892) dia3_numentry_pane_ParamLimits

0xe439,	// (0x0006d892) dia3_numentry_pane

0xe447,	// (0x0006d8a0) dia3_list_pane

0xe452,	// (0x0006d8ab) scroll_pane_cp12

0x041f,	// (0x0005f878) bg_dia3_numentry_pane

0xe45d,	// (0x0006d8b6) dia3_numentry_pane_t1

0xe46c,	// (0x0006d8c5) cell_dia3_key_num_pane

0xe474,	// (0x0006d8cd) cell_dia3_key0_fun_pane_ParamLimits

0xe474,	// (0x0006d8cd) cell_dia3_key0_fun_pane

0xe481,	// (0x0006d8da) cell_dia3_key1_fun_pane_ParamLimits

0xe481,	// (0x0006d8da) cell_dia3_key1_fun_pane

0xe48e,	// (0x0006d8e7) dia3_listrow_pane

0x27d1,	// (0x00061c2a) bg_dia3_numentry_pane_g1

0x041f,	// (0x0005f878) bg_button_pane_cp21

0xe497,	// (0x0006d8f0) cell_dia3_key_num_pane_t1

0xe4a5,	// (0x0006d8fe) cell_dia3_key_num_pane_t2

0xe4b4,	// (0x0006d90d) cell_dia3_key_num_pane_t3

0xe4c3,	// (0x0006d91c) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x0006f396) cell_dia3_key_num_pane_t

0x041f,	// (0x0005f878) bg_button_pane_cp19

0xe4d2,	// (0x0006d92b) cell_dia3_key0_fun_pane_g1

0x041f,	// (0x0005f878) bg_button_pane_cp20

0xe4da,	// (0x0006d933) cell_dia3_key1_fun_pane_g1

0xe4e2,	// (0x0006d93b) area_left_week_number_pane

0xe4eb,	// (0x0006d944) area_top_day_name_pane

0xe4f4,	// (0x0006d94d) frame_month_view_pane

0xe4fe,	// (0x0006d957) grid_month_view_pane

0xe508,	// (0x0006d961) cell_top_day_name_pane_ParamLimits

0xe508,	// (0x0006d961) cell_top_day_name_pane

0xe522,	// (0x0006d97b) cell_area_left_week_number_pane_ParamLimits

0xe522,	// (0x0006d97b) cell_area_left_week_number_pane

0xe536,	// (0x0006d98f) cell_month_view_pane_ParamLimits

0xe536,	// (0x0006d98f) cell_month_view_pane

0xe553,	// (0x0006d9ac) frm_month_g1

0xe55c,	// (0x0006d9b5) frm_month_g2

0xe566,	// (0x0006d9bf) frm_month_g3

0xe570,	// (0x0006d9c9) frm_month_g4

0xe57a,	// (0x0006d9d3) frm_month_g5

0xe584,	// (0x0006d9dd) frm_month_g6

0xe58e,	// (0x0006d9e7) frm_month_g7

0xe598,	// (0x0006d9f1) frm_month_g8

0xe5a1,	// (0x0006d9fa) frm_month_g9

0xe5aa,	// (0x0006da03) frm_month_g10

0xe5b3,	// (0x0006da0c) frm_month_g11

0xe5bc,	// (0x0006da15) frm_month_g12

0xe5c5,	// (0x0006da1e) frm_month_g13

0xe5ce,	// (0x0006da27) frm_month_g14

0xe5d7,	// (0x0006da30) frm_month_g15

0xe5e2,	// (0x0006da3b) frm_month_g16

0x000f,

0xff46,	// (0x0006f39f) frm_month_g

0xe5ed,	// (0x0006da46) cell_top_day_name_pane_t1

0xe5fc,	// (0x0006da55) cell_area_left_week_number_pane_g1

0xe5ed,	// (0x0006da46) cell_area_left_week_number_pane_t1

0x10d1,	// (0x0006052a) cell_month_view_pane_g1

0xe604,	// (0x0006da5d) cell_month_view_pane_t1

0x041f,	// (0x0005f878) main_fps_pane

0x2d84,	// (0x000621dd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2d84,	// (0x000621dd) cmail_ddmenu_btn02_pane_cp1

0x2da0,	// (0x000621f9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2da0,	// (0x000621f9) cmail_ddmenu_btn02_pane_cp2

0xddbd,	// (0x0006d216) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xddbd,	// (0x0006d216) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x0006f2c7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x0006f2c7) cmail_ddmenu_btn02_pane_g

0xdddb,	// (0x0006d234) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdddb,	// (0x0006d234) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x0006f2cc) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x0006f2cc) cmail_ddmenu_btn02_pane_t

0xe613,	// (0x0006da6c) fps_text_pane_ParamLimits

0xe613,	// (0x0006da6c) fps_text_pane

0xe620,	// (0x0006da79) main_fps_pane_g1_ParamLimits

0xe620,	// (0x0006da79) main_fps_pane_g1

0xe62e,	// (0x0006da87) wait_bar_pane_cp010_ParamLimits

0xe62e,	// (0x0006da87) wait_bar_pane_cp010

0xe63a,	// (0x0006da93) fps_text_pane_t1_ParamLimits

0xe63a,	// (0x0006da93) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large

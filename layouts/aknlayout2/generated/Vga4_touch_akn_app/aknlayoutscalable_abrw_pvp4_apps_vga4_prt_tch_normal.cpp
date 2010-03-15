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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001e5c9 };

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
0x231c,	// (0x000208e5) Screen

0x2328,	// (0x000208f1) application_window

0x2368,	// (0x00020931) area_bottom_pane_ParamLimits

0x2368,	// (0x00020931) area_bottom_pane

0x239d,	// (0x00020966) area_top_pane_ParamLimits

0x239d,	// (0x00020966) area_top_pane

0x9ca0,	// (0x00028269) call_video_uplink_pane_ParamLimits

0x9ca0,	// (0x00028269) call_video_uplink_pane

0x242c,	// (0x000209f5) main_pane_ParamLimits

0x242c,	// (0x000209f5) main_pane

0xc3c0,	// (0x0002a989) context_pane

0x56e4,	// (0x00023cad) navi_pane

0x5708,	// (0x00023cd1) popup_cale_events_window_ParamLimits

0x5708,	// (0x00023cd1) popup_cale_events_window

0xc3d3,	// (0x0002a99c) popup_mup_playback_window

0x5720,	// (0x00023ce9) signal_pane

0xa3f1,	// (0x000289ba) main_browser_pane

0xaf26,	// (0x000294ef) main_burst_pane

0x5596,	// (0x00023b5f) main_calc_pane

0xc363,	// (0x0002a92c) main_cale_day_pane

0x299b,	// (0x00020f64) main_cale_month_pane

0xc363,	// (0x0002a92c) main_cale_week_pane

0xaf26,	// (0x000294ef) main_call_pane

0xa0d1,	// (0x0002869a) main_call_poc_pane

0xaf26,	// (0x000294ef) main_camera_pane

0xaf26,	// (0x000294ef) main_chi_dic_pane

0xadc8,	// (0x00029391) main_clock_pane

0xa0d1,	// (0x0002869a) main_fmradio_pane

0xaf26,	// (0x000294ef) main_graph_messa_pane

0xa0d1,	// (0x0002869a) main_help_pane

0xa3f1,	// (0x000289ba) main_im_pane

0xa32c,	// (0x000288f5) main_image_pane_ParamLimits

0xa32c,	// (0x000288f5) main_image_pane

0xa0d1,	// (0x0002869a) main_location2_pane

0xaf26,	// (0x000294ef) main_location_pane

0xa32c,	// (0x000288f5) main_messa_pane

0xa0d1,	// (0x0002869a) main_mp2_pane

0xaf26,	// (0x000294ef) main_mp_pane

0xa0d1,	// (0x0002869a) main_msg_pane

0xa0d1,	// (0x0002869a) main_mup_eq_pane

0xa0d1,	// (0x0002869a) main_mup_pane

0xa3f1,	// (0x000289ba) main_notes_pane

0xa0d1,	// (0x0002869a) main_pec_pane

0xa0d1,	// (0x0002869a) main_phob_pane

0xa0d1,	// (0x0002869a) main_pinb_pane

0xa0d1,	// (0x0002869a) main_postcard_pane

0xa0d1,	// (0x0002869a) main_qdial_pane

0xaf26,	// (0x000294ef) main_skin_pane

0xa0d1,	// (0x0002869a) main_smil2_pane

0xaf26,	// (0x000294ef) main_smil_pane

0xaf26,	// (0x000294ef) main_video_pane

0xaf26,	// (0x000294ef) main_video_tele_pane

0xa32c,	// (0x000288f5) main_viewer_pane_ParamLimits

0xa32c,	// (0x000288f5) main_viewer_pane

0xaf26,	// (0x000294ef) main_vorec_pane

0x55ce,	// (0x00023b97) popup_blid_sat_info_window_ParamLimits

0x55ce,	// (0x00023b97) popup_blid_sat_info_window

0x55e8,	// (0x00023bb1) popup_dyc_status_message_window_ParamLimits

0x55e8,	// (0x00023bb1) popup_dyc_status_message_window

0x55f8,	// (0x00023bc1) popup_grid_large_graphic_window_ParamLimits

0x55f8,	// (0x00023bc1) popup_grid_large_graphic_window

0x5670,	// (0x00023c39) popup_loc_request_window_ParamLimits

0x5670,	// (0x00023c39) popup_loc_request_window

0x56b8,	// (0x00023c81) popup_wml_address_window_ParamLimits

0x56b8,	// (0x00023c81) popup_wml_address_window

0x546e,	// (0x00023a37) call_muted_g1

0x512d,	// (0x000236f6) popup_call_audio_conf_window_ParamLimits

0x512d,	// (0x000236f6) popup_call_audio_conf_window

0x547e,	// (0x00023a47) popup_call_audio_first_window_ParamLimits

0x547e,	// (0x00023a47) popup_call_audio_first_window

0x54be,	// (0x00023a87) popup_call_audio_in_window_ParamLimits

0x54be,	// (0x00023a87) popup_call_audio_in_window

0x54e2,	// (0x00023aab) popup_call_audio_out_window_ParamLimits

0x54e2,	// (0x00023aab) popup_call_audio_out_window

0x5504,	// (0x00023acd) popup_call_audio_second_window_ParamLimits

0x5504,	// (0x00023acd) popup_call_audio_second_window

0x5534,	// (0x00023afd) popup_call_audio_wait_window_ParamLimits

0x5534,	// (0x00023afd) popup_call_audio_wait_window

0x5555,	// (0x00023b1e) popup_number_entry_window_ParamLimits

0x5555,	// (0x00023b1e) popup_number_entry_window

0x9cbe,	// (0x00028287) bg_popup_call_pane_cp05_ParamLimits

0x9cbe,	// (0x00028287) bg_popup_call_pane_cp05

0x9cde,	// (0x000282a7) popup_number_entry_window_t1

0x9cf1,	// (0x000282ba) popup_number_entry_window_t2

0x9d03,	// (0x000282cc) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0002d69c) popup_number_entry_window_t

0x9d15,	// (0x000282de) text_title_cp2

0x9d28,	// (0x000282f1) bg_popup_call_pane_cp_ParamLimits

0x9d28,	// (0x000282f1) bg_popup_call_pane_cp

0x9d36,	// (0x000282ff) call_thumbnail_pane

0x9d3e,	// (0x00028307) popup_call_audio_in_window_g1_ParamLimits

0x9d3e,	// (0x00028307) popup_call_audio_in_window_g1

0x9d4a,	// (0x00028313) popup_call_audio_in_window_g2_ParamLimits

0x9d4a,	// (0x00028313) popup_call_audio_in_window_g2

0x9d56,	// (0x0002831f) popup_call_audio_in_window_g3_ParamLimits

0x9d56,	// (0x0002831f) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0002d6a5) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0002d6a5) popup_call_audio_in_window_g

0x9d62,	// (0x0002832b) popup_call_audio_in_window_t1_ParamLimits

0x9d62,	// (0x0002832b) popup_call_audio_in_window_t1

0x9d7e,	// (0x00028347) popup_call_audio_in_window_t2_ParamLimits

0x9d7e,	// (0x00028347) popup_call_audio_in_window_t2

0x9d9a,	// (0x00028363) popup_call_audio_in_window_t3_ParamLimits

0x9d9a,	// (0x00028363) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0002d6ac) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0002d6ac) popup_call_audio_in_window_t

0x9d28,	// (0x000282f1) bg_popup_call_pane_cp01_ParamLimits

0x9d28,	// (0x000282f1) bg_popup_call_pane_cp01

0x9d36,	// (0x000282ff) call_thumbnail_pane_cp02

0x9dad,	// (0x00028376) call_type_pane_cp022

0x9db5,	// (0x0002837e) popup_call_audio_out_window_g1_ParamLimits

0x9db5,	// (0x0002837e) popup_call_audio_out_window_g1

0x9dc7,	// (0x00028390) popup_call_audio_out_window_g2_ParamLimits

0x9dc7,	// (0x00028390) popup_call_audio_out_window_g2

0x9dd3,	// (0x0002839c) popup_call_audio_out_window_g3_ParamLimits

0x9dd3,	// (0x0002839c) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0002d6b3) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0002d6b3) popup_call_audio_out_window_g

0x9de5,	// (0x000283ae) popup_call_audio_out_window_t1_ParamLimits

0x9de5,	// (0x000283ae) popup_call_audio_out_window_t1

0x9dfd,	// (0x000283c6) popup_call_audio_out_window_t2_ParamLimits

0x9dfd,	// (0x000283c6) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0002d6ba) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0002d6ba) popup_call_audio_out_window_t

0x9e12,	// (0x000283db) bg_popup_call_pane_ParamLimits

0x9e12,	// (0x000283db) bg_popup_call_pane

0x2626,	// (0x00020bef) call_thumbnail_pane_cp_ParamLimits

0x2626,	// (0x00020bef) call_thumbnail_pane_cp

0x9e96,	// (0x0002845f) call_type_pane_cp01_ParamLimits

0x9e96,	// (0x0002845f) call_type_pane_cp01

0x9eda,	// (0x000284a3) popup_call_audio_first_window_g1_ParamLimits

0x9eda,	// (0x000284a3) popup_call_audio_first_window_g1

0x9f26,	// (0x000284ef) popup_call_audio_first_window_g2_ParamLimits

0x9f26,	// (0x000284ef) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0002d6bf) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0002d6bf) popup_call_audio_first_window_g

0x9f6a,	// (0x00028533) popup_call_audio_first_window_t1_ParamLimits

0x9f6a,	// (0x00028533) popup_call_audio_first_window_t1

0xa016,	// (0x000285df) popup_call_audio_first_window_t4_ParamLimits

0xa016,	// (0x000285df) popup_call_audio_first_window_t4

0xa0a2,	// (0x0002866b) popup_call_audio_first_window_t5_ParamLimits

0xa0a2,	// (0x0002866b) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0002d6c4) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0002d6c4) popup_call_audio_first_window_t

0xa0d1,	// (0x0002869a) bg_popup_call_pane_cp02

0xa0db,	// (0x000286a4) call_type_pane_cp023

0xa0e3,	// (0x000286ac) popup_call_audio_wait_window_g1

0xa0eb,	// (0x000286b4) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0002d6cb) popup_call_audio_wait_window_g

0xa0f3,	// (0x000286bc) popup_call_audio_wait_window_t3

0xa101,	// (0x000286ca) bg_popup_call_pane_cp03_ParamLimits

0xa101,	// (0x000286ca) bg_popup_call_pane_cp03

0xa161,	// (0x0002872a) call_thumbnail_pane_cp011_ParamLimits

0xa161,	// (0x0002872a) call_thumbnail_pane_cp011

0xa16d,	// (0x00028736) call_type_pane_cp034_ParamLimits

0xa16d,	// (0x00028736) call_type_pane_cp034

0xa1a9,	// (0x00028772) popup_call_audio_second_window_g1_ParamLimits

0xa1a9,	// (0x00028772) popup_call_audio_second_window_g1

0xa1e5,	// (0x000287ae) popup_call_audio_second_window_g2_ParamLimits

0xa1e5,	// (0x000287ae) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0002d6d0) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0002d6d0) popup_call_audio_second_window_g

0xa221,	// (0x000287ea) popup_call_audio_second_window_t1_ParamLimits

0xa221,	// (0x000287ea) popup_call_audio_second_window_t1

0xa2a2,	// (0x0002886b) popup_call_audio_second_window_t2_ParamLimits

0xa2a2,	// (0x0002886b) popup_call_audio_second_window_t2

0xa2d8,	// (0x000288a1) popup_call_audio_second_window_t3_ParamLimits

0xa2d8,	// (0x000288a1) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0002d6d5) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0002d6d5) popup_call_audio_second_window_t

0xa0d1,	// (0x0002869a) bg_popup_call_pane_cp04

0xa30e,	// (0x000288d7) list_conf_pane

0xa316,	// (0x000288df) popup_call_audio_conf_window_t1

0xa324,	// (0x000288ed) call_thumbnail_pane_g1

0xa32c,	// (0x000288f5) bg_pinb_pane_ParamLimits

0xa32c,	// (0x000288f5) bg_pinb_pane

0xa33a,	// (0x00028903) find_pinb_pane

0xa343,	// (0x0002890c) listscroll_pinb_pane_ParamLimits

0xa343,	// (0x0002890c) listscroll_pinb_pane

0xa352,	// (0x0002891b) pinb_bg_pane_g1

0x264a,	// (0x00020c13) pinb_bg_pane_g2

0x2656,	// (0x00020c1f) pinb_bg_pane_g3

0x2662,	// (0x00020c2b) pinb_bg_pane_g4

0x266e,	// (0x00020c37) pinb_bg_pane_g5

0x267a,	// (0x00020c43) pinb_bg_pane_g6

0x2685,	// (0x00020c4e) pinb_bg_pane_g7

0x2690,	// (0x00020c59) pinb_bg_pane_g8

0x269b,	// (0x00020c64) pinb_bg_pane_g9

0x26a5,	// (0x00020c6e) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0002d6dc) pinb_bg_pane_g

0x26c2,	// (0x00020c8b) grid_pinb_pane

0x26cd,	// (0x00020c96) list_pinb_pane

0x26d8,	// (0x00020ca1) scroll_pane_cp01_ParamLimits

0x26d8,	// (0x00020ca1) scroll_pane_cp01

0xa35c,	// (0x00028925) find_pinb_pane_g1_ParamLimits

0xa35c,	// (0x00028925) find_pinb_pane_g1

0xa374,	// (0x0002893d) find_pinb_pane_t1

0xa386,	// (0x0002894f) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0002d6f6) find_pinb_pane_t

0xa39b,	// (0x00028964) input_focus_pane_cp01_ParamLimits

0xa39b,	// (0x00028964) input_focus_pane_cp01

0x26ea,	// (0x00020cb3) cell_pinb_pane_ParamLimits

0x26ea,	// (0x00020cb3) cell_pinb_pane

0x270f,	// (0x00020cd8) cell_pinb_pane_g1_ParamLimits

0x270f,	// (0x00020cd8) cell_pinb_pane_g1

0x2724,	// (0x00020ced) cell_pinb_pane_g2_ParamLimits

0x2724,	// (0x00020ced) cell_pinb_pane_g2

0xa3a7,	// (0x00028970) cell_pinb_pane_g3_ParamLimits

0xa3a7,	// (0x00028970) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0002d6fb) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0002d6fb) cell_pinb_pane_g

0xa0d1,	// (0x0002869a) grid_highlight_pane_cp01

0x2730,	// (0x00020cf9) list_pinb_item_pane_ParamLimits

0x2730,	// (0x00020cf9) list_pinb_item_pane

0xa0d1,	// (0x0002869a) list_highlight_pane_cp02

0x274e,	// (0x00020d17) list_pinb_item_pane_g1_ParamLimits

0x274e,	// (0x00020d17) list_pinb_item_pane_g1

0x275b,	// (0x00020d24) list_pinb_item_pane_g2_ParamLimits

0x275b,	// (0x00020d24) list_pinb_item_pane_g2

0x2767,	// (0x00020d30) list_pinb_item_pane_g3_ParamLimits

0x2767,	// (0x00020d30) list_pinb_item_pane_g3

0x2778,	// (0x00020d41) list_pinb_item_pane_g4_ParamLimits

0x2778,	// (0x00020d41) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0002d702) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0002d702) list_pinb_item_pane_g

0x2784,	// (0x00020d4d) list_pinb_item_pane_t1_ParamLimits

0x2784,	// (0x00020d4d) list_pinb_item_pane_t1

0x0d6e,	// (0x0001f337) calc_display_pane

0x0d8c,	// (0x0001f355) calc_paper_pane

0x0da8,	// (0x0001f371) grid_calc_pane

0xa0d1,	// (0x0002869a) bg_list_pane_cp01

0x279b,	// (0x00020d64) clock_g1

0x27a3,	// (0x00020d6c) clock_g2

0x0001,

0xf142,	// (0x0002d70b) clock_g

0x27ad,	// (0x00020d76) clock_t1_ParamLimits

0x27ad,	// (0x00020d76) clock_t1

0x27c2,	// (0x00020d8b) clock_t2_ParamLimits

0x27c2,	// (0x00020d8b) clock_t2

0x27d4,	// (0x00020d9d) clock_t3_ParamLimits

0x27d4,	// (0x00020d9d) clock_t3

0x27e6,	// (0x00020daf) clock_t4_ParamLimits

0x27e6,	// (0x00020daf) clock_t4

0x27f8,	// (0x00020dc1) clock_t5_ParamLimits

0x27f8,	// (0x00020dc1) clock_t5

0x280d,	// (0x00020dd6) clock_t6_ParamLimits

0x280d,	// (0x00020dd6) clock_t6

0x281f,	// (0x00020de8) clock_t7_ParamLimits

0x281f,	// (0x00020de8) clock_t7

0x2831,	// (0x00020dfa) clock_t8_ParamLimits

0x2831,	// (0x00020dfa) clock_t8

0x2847,	// (0x00020e10) clock_t9_ParamLimits

0x2847,	// (0x00020e10) clock_t9

0x0008,

0xf147,	// (0x0002d710) clock_t_ParamLimits

0xf147,	// (0x0002d710) clock_t

0xa3b3,	// (0x0002897c) popup_clock_analogue_window_cp02

0xa3b3,	// (0x0002897c) popup_clock_digital_window_cp01

0xa3bb,	// (0x00028984) listscroll_help_pane

0xa0d1,	// (0x0002869a) phob_pre_status_pane

0xa3c5,	// (0x0002898e) grid_qdial_pane

0xa32c,	// (0x000288f5) listscroll_mce_pane

0xa32c,	// (0x000288f5) bg_notes_pane

0xa3cf,	// (0x00028998) list_notes_pane

0x285d,	// (0x00020e26) scroll_pane_cp06

0xa3dd,	// (0x000289a6) bg_calc_paper_pane

0x0dde,	// (0x0001f3a7) list_calc_pane

0xa3f1,	// (0x000289ba) bg_calc_display_pane

0x0df8,	// (0x0001f3c1) calc_display_pane_t1

0x0e0d,	// (0x0001f3d6) calc_display_pane_t2

0x0e22,	// (0x0001f3eb) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0002d723) calc_display_pane_t

0x0e34,	// (0x0001f3fd) cell_calc_pane_ParamLimits

0x0e34,	// (0x0001f3fd) cell_calc_pane

0xa3fd,	// (0x000289c6) bg_calc_paper_pane_g1

0xa423,	// (0x000289ec) bg_calc_paper_pane_g2

0xa409,	// (0x000289d2) bg_calc_paper_pane_g3

0xa42f,	// (0x000289f8) bg_calc_paper_pane_g4

0xa43b,	// (0x00028a04) bg_calc_paper_pane_g5

0x286c,	// (0x00020e35) bg_calc_paper_pane_g6

0x287d,	// (0x00020e46) bg_calc_paper_pane_g7

0x288e,	// (0x00020e57) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0002d72a) bg_calc_paper_pane_g

0x28a1,	// (0x00020e6a) calc_bg_paper_pane_g9

0x28b4,	// (0x00020e7d) list_calc_item_pane_ParamLimits

0x28b4,	// (0x00020e7d) list_calc_item_pane

0xa447,	// (0x00028a10) list_calc_item_pane_g1

0x0e63,	// (0x0001f42c) list_calc_item_pane_t1_ParamLimits

0x0e63,	// (0x0001f42c) list_calc_item_pane_t1

0x0e75,	// (0x0001f43e) list_calc_item_pane_t2_ParamLimits

0x0e75,	// (0x0001f43e) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0002d73b) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0002d73b) list_calc_item_pane_t

0xa454,	// (0x00028a1d) cell_calc_pane_g1

0xa45e,	// (0x00028a27) grid_highlight_pane_cp02

0xa480,	// (0x00028a49) bg_calc_display_pane_g1

0x0ea5,	// (0x0001f46e) bg_calc_display_pane_g2

0xa489,	// (0x00028a52) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0002d745) bg_calc_display_pane_g

0x0eaf,	// (0x0001f478) cell_qdial_pane_ParamLimits

0x0eaf,	// (0x0001f478) cell_qdial_pane

0x28d5,	// (0x00020e9e) cell_qdial_pane_g1_ParamLimits

0x28d5,	// (0x00020e9e) cell_qdial_pane_g1

0x28e2,	// (0x00020eab) cell_qdial_pane_g2_ParamLimits

0x28e2,	// (0x00020eab) cell_qdial_pane_g2

0xa492,	// (0x00028a5b) cell_qdial_pane_g3_ParamLimits

0xa492,	// (0x00028a5b) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0002d74c) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0002d74c) cell_qdial_pane_g

0x2900,	// (0x00020ec9) cell_qdial_pane_t1_ParamLimits

0x2900,	// (0x00020ec9) cell_qdial_pane_t1

0x2918,	// (0x00020ee1) cell_qdial_pane_t2_ParamLimits

0x2918,	// (0x00020ee1) cell_qdial_pane_t2

0x292b,	// (0x00020ef4) cell_qdial_pane_t3_ParamLimits

0x292b,	// (0x00020ef4) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0002d755) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0002d755) cell_qdial_pane_t

0xa0d1,	// (0x0002869a) grid_highlight_pane_cp04

0xa49e,	// (0x00028a67) thumbnail_qdial_pane_ParamLimits

0xa49e,	// (0x00028a67) thumbnail_qdial_pane

0xa4fa,	// (0x00028ac3) list_help_pane

0xa503,	// (0x00028acc) scroll_pane_cp02

0x293e,	// (0x00020f07) help_list_pane_t1_ParamLimits

0x293e,	// (0x00020f07) help_list_pane_t1

0x0ec5,	// (0x0001f48e) bg_notes_pane_g2

0x0ecd,	// (0x0001f496) bg_notes_pane_g3

0x0ed5,	// (0x0001f49e) notes_bg_pane_g1

0x0edd,	// (0x0001f4a6) notes_bg_pane_g4

0x0ee5,	// (0x0001f4ae) notes_bg_pane_g5

0x0eed,	// (0x0001f4b6) notes_bg_pane_g6

0x0ef5,	// (0x0001f4be) notes_bg_pane_g7

0x0efd,	// (0x0001f4c6) notes_bg_pane_g8

0x0f05,	// (0x0001f4ce) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0002d773) notes_bg_pane_g

0x2965,	// (0x00020f2e) list_notes_text_pane_ParamLimits

0x2965,	// (0x00020f2e) list_notes_text_pane

0xa50c,	// (0x00028ad5) list_notes_text_pane_g1

0x298d,	// (0x00020f56) list_notes_text_pane_t1

0x299b,	// (0x00020f64) listscroll_cale_week_pane

0x29d3,	// (0x00020f9c) bg_cale_heading_pane

0xa526,	// (0x00028aef) bg_cale_pane_cp01

0x29fc,	// (0x00020fc5) cale_week_corner_pane

0x2a1b,	// (0x00020fe4) cale_week_day_heading_pane

0x2a49,	// (0x00021012) cale_week_scroll_pane_g1

0x2a6d,	// (0x00021036) cale_week_scroll_pane_g2

0x2a85,	// (0x0002104e) cale_week_scroll_pane_g3

0x2a9d,	// (0x00021066) cale_week_scroll_pane_g4

0x2ab5,	// (0x0002107e) cale_week_scroll_pane_g5

0x2acd,	// (0x00021096) cale_week_scroll_pane_g6

0x2ae9,	// (0x000210b2) cale_week_scroll_pane_g7

0x2b05,	// (0x000210ce) cale_week_scroll_pane_g8

0x2b21,	// (0x000210ea) cale_week_scroll_pane_g9

0x2b3e,	// (0x00021107) cale_week_scroll_pane_g10

0x2b5b,	// (0x00021124) cale_week_scroll_pane_g11

0x2b78,	// (0x00021141) cale_week_scroll_pane_g12

0x2b95,	// (0x0002115e) cale_week_scroll_pane_g13

0x2bb2,	// (0x0002117b) cale_week_scroll_pane_g14

0x2bdb,	// (0x000211a4) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0002d782) cale_week_scroll_pane_g

0x2c04,	// (0x000211cd) cale_week_time_pane

0x2c20,	// (0x000211e9) grid_cale_week_pane

0xa556,	// (0x00028b1f) scroll_pane_cp08

0x2c4f,	// (0x00021218) cell_cale_week_pane_ParamLimits

0x2c4f,	// (0x00021218) cell_cale_week_pane

0x2ccf,	// (0x00021298) cale_week_day_heading_pane_t1

0x2d15,	// (0x000212de) cale_week_day_heading_pane_t2

0x2d60,	// (0x00021329) cale_week_day_heading_pane_t3

0x2dab,	// (0x00021374) cale_week_day_heading_pane_t4

0x2df6,	// (0x000213bf) cale_week_day_heading_pane_t5

0x2e41,	// (0x0002140a) cale_week_day_heading_pane_t6

0x2e8c,	// (0x00021455) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0002d7a1) cale_week_day_heading_pane_t

0xa578,	// (0x00028b41) bg_cale_side_pane

0x0f0d,	// (0x0001f4d6) cale_week_time_pane_t1

0x0f51,	// (0x0001f51a) cale_week_time_pane_t2

0x0f95,	// (0x0001f55e) cale_week_time_pane_t3

0x0fd9,	// (0x0001f5a2) cale_week_time_pane_t4

0x101d,	// (0x0001f5e6) cale_week_time_pane_t5

0x1061,	// (0x0001f62a) cale_week_time_pane_t6

0x10a5,	// (0x0001f66e) cale_week_time_pane_t7

0x10e9,	// (0x0001f6b2) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0002d7b0) cale_week_time_pane_t

0x2ed2,	// (0x0002149b) cell_cale_week_pane_g2

0x2ef6,	// (0x000214bf) cell_cale_week_pane_g3_ParamLimits

0x2ef6,	// (0x000214bf) cell_cale_week_pane_g3

0xa586,	// (0x00028b4f) grid_highlight_pane_cp07

0xa58e,	// (0x00028b57) listscroll_gms_pane

0xa598,	// (0x00028b61) grid_gms_pane

0xa5a1,	// (0x00028b6a) listscroll_gms_pane_g1

0xa5a9,	// (0x00028b72) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0002d7c1) listscroll_gms_pane_g

0x2f0e,	// (0x000214d7) scroll_pane_cp010

0x2f19,	// (0x000214e2) cell_gms_pane_ParamLimits

0x2f19,	// (0x000214e2) cell_gms_pane

0x2f2c,	// (0x000214f5) cell_gms_pane_g1

0xa5b1,	// (0x00028b7a) cell_gms_pane_g2

0xa5b9,	// (0x00028b82) cell_gms_pane_g3

0xa5c2,	// (0x00028b8b) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0002d7c6) cell_gms_pane_g

0xa5cb,	// (0x00028b94) grid_highlight_pane_cp09

0x5416,	// (0x000239df) phob_pre_status_pane_g1

0x541e,	// (0x000239e7) phob_pre_status_pane_g2

0x5426,	// (0x000239ef) phob_pre_status_pane_g3

0x542e,	// (0x000239f7) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0002dbb5) phob_pre_status_pane_g

0x543e,	// (0x00023a07) phob_pre_status_pane_t1

0x544e,	// (0x00023a17) phob_pre_status_pane_t2

0x545e,	// (0x00023a27) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0002dbc0) phob_pre_status_pane_t

0xa0d1,	// (0x0002869a) bg_list_pane_cp05

0x113b,	// (0x0001f704) grid_vorec_pane

0x1147,	// (0x0001f710) vorec_t1

0x1155,	// (0x0001f71e) vorec_t2

0x1163,	// (0x0001f72c) vorec_t3

0x1171,	// (0x0001f73a) vorec_t4

0x117f,	// (0x0001f748) vorec_t5

0x118d,	// (0x0001f756) vorec_t6

0x0006,

0xf206,	// (0x0002d7cf) vorec_t

0x11a9,	// (0x0001f772) wait_bar_pane_cp01

0x2f34,	// (0x000214fd) cell_vorec_pane_ParamLimits

0x2f34,	// (0x000214fd) cell_vorec_pane

0xa5d3,	// (0x00028b9c) cell_vorec_pane_g1

0xa0d1,	// (0x0002869a) grid_highlight_pane_cp05

0x2f57,	// (0x00021520) cams_zoom_pane

0x2f63,	// (0x0002152c) image_vga_pane

0x2f72,	// (0x0002153b) main_camera_pane_g1

0x2f80,	// (0x00021549) main_camera_pane_g2

0x2f8c,	// (0x00021555) main_camera_pane_g3

0x2f9a,	// (0x00021563) main_camera_pane_g4

0x2fa8,	// (0x00021571) main_camera_pane_g5

0x2fb6,	// (0x0002157f) main_camera_pane_g6

0x2fc4,	// (0x0002158d) main_camera_pane_g7

0x0007,

0xf215,	// (0x0002d7de) main_camera_pane_g

0x2fd2,	// (0x0002159b) main_camera_pane_t1

0x2fe4,	// (0x000215ad) main_camera_pane_t2

0x0001,

0xf226,	// (0x0002d7ef) main_camera_pane_t

0x3007,	// (0x000215d0) cams_zoom_pane_cp_ParamLimits

0x3007,	// (0x000215d0) cams_zoom_pane_cp

0x302b,	// (0x000215f4) image_cif_pane_ParamLimits

0x302b,	// (0x000215f4) image_cif_pane

0x3049,	// (0x00021612) image_subqcif_pane

0x3053,	// (0x0002161c) main_video_pane_g1_ParamLimits

0x3053,	// (0x0002161c) main_video_pane_g1

0x3073,	// (0x0002163c) main_video_pane_g2_ParamLimits

0x3073,	// (0x0002163c) main_video_pane_g2

0x30a3,	// (0x0002166c) main_video_pane_g3_ParamLimits

0x30a3,	// (0x0002166c) main_video_pane_g3

0x30cc,	// (0x00021695) main_video_pane_g4_ParamLimits

0x30cc,	// (0x00021695) main_video_pane_g4

0x30f5,	// (0x000216be) main_video_pane_g5_ParamLimits

0x30f5,	// (0x000216be) main_video_pane_g5

0xa5e9,	// (0x00028bb2) main_video_pane_g6_ParamLimits

0xa5e9,	// (0x00028bb2) main_video_pane_g6

0x0006,

0xf22b,	// (0x0002d7f4) main_video_pane_g_ParamLimits

0xf22b,	// (0x0002d7f4) main_video_pane_g

0x3117,	// (0x000216e0) main_video_pane_t1_ParamLimits

0x3117,	// (0x000216e0) main_video_pane_t1

0xa603,	// (0x00028bcc) cams_zoom_pane_g1

0xa60c,	// (0x00028bd5) cams_zoom_pane_g2

0xa615,	// (0x00028bde) cams_zoom_pane_g3

0xa61e,	// (0x00028be7) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0002d803) cams_zoom_pane_g

0x3161,	// (0x0002172a) grid_cams_pane

0x316f,	// (0x00021738) linegrid_cams_pane

0x317b,	// (0x00021744) cell_cams_pane_ParamLimits

0x317b,	// (0x00021744) cell_cams_pane

0xa627,	// (0x00028bf0) cams_burst_image_pane

0xa62f,	// (0x00028bf8) cell_cams_pane_g1

0xa0d1,	// (0x0002869a) grid_highlight_pane_cp03

0xa454,	// (0x00028a1d) mp_bg_pane_g1

0xa0d1,	// (0x0002869a) bg_list_pane_cp03

0xc286,	// (0x0002a84f) bg_mp_pane

0xc28e,	// (0x0002a857) grid_mp_pane

0xc296,	// (0x0002a85f) media_player_g1

0xc2a0,	// (0x0002a869) media_player_t1

0xc2ae,	// (0x0002a877) media_player_t2

0xc2bc,	// (0x0002a885) media_player_t3

0xc2ca,	// (0x0002a893) media_player_t4

0xc2d8,	// (0x0002a8a1) media_player_t5

0xc2e6,	// (0x0002a8af) media_player_t6

0xc2f4,	// (0x0002a8bd) media_player_t7

0x0006,

0xf5d6,	// (0x0002db9f) media_player_t

0xc302,	// (0x0002a8cb) wait_bar_pane_cp02

0xf5bb,	// (0x0002db84) main_usb_pane_t

0x540d,	// (0x000239d6) cell_mp_pane

0xa454,	// (0x00028a1d) cell_mp_pane_g1

0xa0d1,	// (0x0002869a) grid_highlight_pane_cp06

0xa637,	// (0x00028c00) grid_skin_colour_pane

0xa63f,	// (0x00028c08) list_highlight_pane_cp03

0x32a6,	// (0x0002186f) skin_g1

0xa647,	// (0x00028c10) skin_t1

0xa656,	// (0x00028c1f) skin_t2

0x0001,

0xf26f,	// (0x0002d838) skin_t

0x32b0,	// (0x00021879) cell_skin_colour_pane_ParamLimits

0x32b0,	// (0x00021879) cell_skin_colour_pane

0xa664,	// (0x00028c2d) cell_skin_colour_pane_g1

0x3330,	// (0x000218f9) call_video_g1_ParamLimits

0x3330,	// (0x000218f9) call_video_g1

0x3340,	// (0x00021909) call_video_g2_ParamLimits

0x3340,	// (0x00021909) call_video_g2

0x0001,

0xf274,	// (0x0002d83d) call_video_g_ParamLimits

0xf274,	// (0x0002d83d) call_video_g

0x3390,	// (0x00021959) call_video_uplink_pane_cp1_ParamLimits

0x3390,	// (0x00021959) call_video_uplink_pane_cp1

0xa676,	// (0x00028c3f) call_video_uplink_pane_cp2

0x345e,	// (0x00021a27) video_down_crop_pane_ParamLimits

0x345e,	// (0x00021a27) video_down_crop_pane

0x3550,	// (0x00021b19) video_down_pane_ParamLimits

0x3550,	// (0x00021b19) video_down_pane

0xa67e,	// (0x00028c47) video_down_subqcif_pane_ParamLimits

0xa67e,	// (0x00028c47) video_down_subqcif_pane

0xa698,	// (0x00028c61) video_down_subqcif_pane_cp_ParamLimits

0xa698,	// (0x00028c61) video_down_subqcif_pane_cp

0xa6c0,	// (0x00028c89) im_reading_pane_ParamLimits

0xa6c0,	// (0x00028c89) im_reading_pane

0x366d,	// (0x00021c36) im_writing_pane_ParamLimits

0x366d,	// (0x00021c36) im_writing_pane

0x368b,	// (0x00021c54) im_reading_pane_t1

0xa6da,	// (0x00028ca3) list_im_pane

0xa6eb,	// (0x00028cb4) scroll_pane_cp07

0x36cd,	// (0x00021c96) im_writing_pane_t1_ParamLimits

0x36cd,	// (0x00021c96) im_writing_pane_t1

0xa704,	// (0x00028ccd) im_writing_pane_t2_ParamLimits

0xa704,	// (0x00028ccd) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0002d847) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0002d847) im_writing_pane_t

0xa0d1,	// (0x0002869a) input_focus_pane_cp04

0xa0d1,	// (0x0002869a) input_focus_pane_cp05

0x36df,	// (0x00021ca8) list_im_single_pane_ParamLimits

0x36df,	// (0x00021ca8) list_im_single_pane

0x36f8,	// (0x00021cc1) list_single_im_pane_t1

0x53d1,	// (0x0002399a) blid_accuracy_pane

0x53d9,	// (0x000239a2) blid_compass_pane

0x53e3,	// (0x000239ac) main_location_t1

0x53f1,	// (0x000239ba) main_location_t2

0x53ff,	// (0x000239c8) main_location_t3

0x0002,

0xf5e5,	// (0x0002dbae) main_location_t

0xa0d1,	// (0x0002869a) aid_levels_location

0xa454,	// (0x00028a1d) blid_accuracy_pane_g1

0xa454,	// (0x00028a1d) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0002d8a9) blid_accuracy_pane_g

0xa74c,	// (0x00028d15) wml_content_pane

0xa78a,	// (0x00028d53) wml_button_pane_ParamLimits

0xa78a,	// (0x00028d53) wml_button_pane

0x3707,	// (0x00021cd0) wml_list_single_large_pane_ParamLimits

0x3707,	// (0x00021cd0) wml_list_single_large_pane

0x3729,	// (0x00021cf2) wml_list_single_medium_pane_ParamLimits

0x3729,	// (0x00021cf2) wml_list_single_medium_pane

0x374c,	// (0x00021d15) wml_list_single_small_pane_ParamLimits

0x374c,	// (0x00021d15) wml_list_single_small_pane

0xa79e,	// (0x00028d67) wml_selection_box_pane_ParamLimits

0xa79e,	// (0x00028d67) wml_selection_box_pane

0xa7b1,	// (0x00028d7a) wml_list_single_pane_t1

0xa7c0,	// (0x00028d89) wml_list_single_medium_pane_t1

0xa7cf,	// (0x00028d98) wml_list_single_large_pane_t1

0xa7de,	// (0x00028da7) input_focus_pane_cp02_ParamLimits

0xa7de,	// (0x00028da7) input_focus_pane_cp02

0xa7f1,	// (0x00028dba) wml_selection_box_pane_g1

0xa7fa,	// (0x00028dc3) wml_selection_box_pane_t1_ParamLimits

0xa7fa,	// (0x00028dc3) wml_selection_box_pane_t1

0xa32c,	// (0x000288f5) bg_wml_button_pane_ParamLimits

0xa32c,	// (0x000288f5) bg_wml_button_pane

0xa812,	// (0x00028ddb) wml_button_pane_g1

0xa81a,	// (0x00028de3) wml_button_pane_t1

0xa812,	// (0x00028ddb) wml_button_bg_pane_g1

0xa82a,	// (0x00028df3) wml_button_bg_pane_g2

0xa832,	// (0x00028dfb) wml_button_bg_pane_g3

0xa83a,	// (0x00028e03) wml_button_bg_pane_g4

0xa842,	// (0x00028e0b) wml_button_bg_pane_g5

0xa84a,	// (0x00028e13) wml_button_bg_pane_g6

0xa852,	// (0x00028e1b) wml_button_bg_pane_g7

0xa85a,	// (0x00028e23) wml_button_bg_pane_g8

0xa862,	// (0x00028e2b) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0002d84c) wml_button_bg_pane_g

0x3774,	// (0x00021d3d) bg_list_pane_cp02

0xa86a,	// (0x00028e33) mce_header_pane_ParamLimits

0xa86a,	// (0x00028e33) mce_header_pane

0xa880,	// (0x00028e49) mce_icon_pane

0xa880,	// (0x00028e49) mce_image_pane

0xa889,	// (0x00028e52) mce_text_pane_ParamLimits

0xa889,	// (0x00028e52) mce_text_pane

0x377e,	// (0x00021d47) scroll_pane_cp03

0xa782,	// (0x00028d4b) scroll_pane_cp04

0xa89c,	// (0x00028e65) scroll_pane_cp05_ParamLimits

0xa89c,	// (0x00028e65) scroll_pane_cp05

0x3788,	// (0x00021d51) mce_header_field_pane_ParamLimits

0x3788,	// (0x00021d51) mce_header_field_pane

0x37aa,	// (0x00021d73) mce_header_field_pane_2_ParamLimits

0x37aa,	// (0x00021d73) mce_header_field_pane_2

0x37c0,	// (0x00021d89) mce_header_field_pane_3

0x37c8,	// (0x00021d91) list_single_mce_message_pane_ParamLimits

0x37c8,	// (0x00021d91) list_single_mce_message_pane

0x37e7,	// (0x00021db0) list_single_mce_smart_pane_ParamLimits

0x37e7,	// (0x00021db0) list_single_mce_smart_pane

0xa8a8,	// (0x00028e71) input_focus_pane_cp03

0xa8b1,	// (0x00028e7a) list_header_data_pane

0x3811,	// (0x00021dda) mce_header_field_pane_t1

0x3821,	// (0x00021dea) list_single_mce_header_pane_ParamLimits

0x3821,	// (0x00021dea) list_single_mce_header_pane

0xa8b9,	// (0x00028e82) list_single_mce_header_pane_t1

0xa8c8,	// (0x00028e91) list_single_mce_message_pane_g1

0xa8d0,	// (0x00028e99) list_single_mce_message_pane_t1

0x3865,	// (0x00021e2e) bg_cale_heading_pane_cp01_ParamLimits

0x3865,	// (0x00021e2e) bg_cale_heading_pane_cp01

0xa8de,	// (0x00028ea7) bg_cale_pane_cp02_ParamLimits

0xa8de,	// (0x00028ea7) bg_cale_pane_cp02

0x38ac,	// (0x00021e75) cale_month_corner_pane

0x38cb,	// (0x00021e94) cale_month_day_heading_pane_ParamLimits

0x38cb,	// (0x00021e94) cale_month_day_heading_pane

0x391a,	// (0x00021ee3) cale_month_pane_g1_ParamLimits

0x391a,	// (0x00021ee3) cale_month_pane_g1

0x3956,	// (0x00021f1f) cale_month_pane_g2_ParamLimits

0x3956,	// (0x00021f1f) cale_month_pane_g2

0x398a,	// (0x00021f53) cale_month_pane_g3_ParamLimits

0x398a,	// (0x00021f53) cale_month_pane_g3

0x39de,	// (0x00021fa7) cale_month_pane_g4_ParamLimits

0x39de,	// (0x00021fa7) cale_month_pane_g4

0x3a32,	// (0x00021ffb) cale_month_pane_g5_ParamLimits

0x3a32,	// (0x00021ffb) cale_month_pane_g5

0x3a86,	// (0x0002204f) cale_month_pane_g6_ParamLimits

0x3a86,	// (0x0002204f) cale_month_pane_g6

0x3ae2,	// (0x000220ab) cale_month_pane_g7_ParamLimits

0x3ae2,	// (0x000220ab) cale_month_pane_g7

0x3b3e,	// (0x00022107) cale_month_pane_g8_ParamLimits

0x3b3e,	// (0x00022107) cale_month_pane_g8

0x3b9a,	// (0x00022163) cale_month_pane_g9_ParamLimits

0x3b9a,	// (0x00022163) cale_month_pane_g9

0x3bea,	// (0x000221b3) cale_month_pane_g10_ParamLimits

0x3bea,	// (0x000221b3) cale_month_pane_g10

0x3c30,	// (0x000221f9) cale_month_pane_g11_ParamLimits

0x3c30,	// (0x000221f9) cale_month_pane_g11

0x3c74,	// (0x0002223d) cale_month_pane_g12_ParamLimits

0x3c74,	// (0x0002223d) cale_month_pane_g12

0x3cbc,	// (0x00022285) cale_month_pane_g13_ParamLimits

0x3cbc,	// (0x00022285) cale_month_pane_g13

0x000c,

0xf296,	// (0x0002d85f) cale_month_pane_g_ParamLimits

0xf296,	// (0x0002d85f) cale_month_pane_g

0x3d04,	// (0x000222cd) cale_month_week_pane

0x3d20,	// (0x000222e9) grid_cale_month_pane_ParamLimits

0x3d20,	// (0x000222e9) grid_cale_month_pane

0x3d66,	// (0x0002232f) cale_month_day_heading_pane_t1

0x3de4,	// (0x000223ad) cale_month_day_heading_pane_t2

0x3e6d,	// (0x00022436) cale_month_day_heading_pane_t3

0x3ef6,	// (0x000224bf) cale_month_day_heading_pane_t4

0x3f7f,	// (0x00022548) cale_month_day_heading_pane_t5

0x400c,	// (0x000225d5) cale_month_day_heading_pane_t6

0x409d,	// (0x00022666) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0002d87a) cale_month_day_heading_pane_t

0xa578,	// (0x00028b41) bg_cale_side_pane_cp01

0x412e,	// (0x000226f7) cale_month_week_pane_t1

0x4147,	// (0x00022710) cale_month_week_pane_t2

0x4160,	// (0x00022729) cale_month_week_pane_t3

0x4179,	// (0x00022742) cale_month_week_pane_t4

0x4192,	// (0x0002275b) cale_month_week_pane_t5

0x41ad,	// (0x00022776) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0002d889) cale_month_week_pane_t

0x41ce,	// (0x00022797) cell_cale_month_pane_ParamLimits

0x41ce,	// (0x00022797) cell_cale_month_pane

0x11b1,	// (0x0001f77a) cell_cale_month_pane_g1

0x11bd,	// (0x0001f786) cell_cale_month_pane_t1_ParamLimits

0x11bd,	// (0x0001f786) cell_cale_month_pane_t1

0xa586,	// (0x00028b4f) grid_highlight_pane_cp08

0xa454,	// (0x00028a1d) main_smil_g1

0x4306,	// (0x000228cf) smil_status_pane

0xa91d,	// (0x00028ee6) smil_text_pane

0xc1a4,	// (0x0002a76d) bg_popup_call3_rect_pane_g8

0xc1ac,	// (0x0002a775) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0002db42) bg_popup_call3_rect_pane_g

0xc43a,	// (0x0002aa03) smil_status_volume_pane_g1

0x4319,	// (0x000228e2) smil_status_pane_t1

0x12ff,	// (0x0001f8c8) volume_smil_pane

0xa927,	// (0x00028ef0) list_smil_text_pane

0x4330,	// (0x000228f9) scroll_pane_cp011

0x433b,	// (0x00022904) smil_text_list_pane_t1_ParamLimits

0x433b,	// (0x00022904) smil_text_list_pane_t1

0x11dd,	// (0x0001f7a6) aid_volume_smil_ParamLimits

0x11dd,	// (0x0001f7a6) aid_volume_smil

0xa454,	// (0x00028a1d) smil_volume_pane_g1

0xa454,	// (0x00028a1d) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0002d8a9) smil_volume_pane_g

0x299b,	// (0x00020f64) listscroll_cale_day_pane

0xa931,	// (0x00028efa) bg_cale_pane

0xa949,	// (0x00028f12) list_cale_pane

0xa96c,	// (0x00028f35) scroll_pane_cp09

0xa97d,	// (0x00028f46) cale_bg_pane_g1

0xa985,	// (0x00028f4e) cale_bg_pane_g2

0xa98d,	// (0x00028f56) cale_bg_pane_g3

0xa995,	// (0x00028f5e) cale_bg_pane_g4

0xa99d,	// (0x00028f66) cale_bg_pane_g5

0xa9a5,	// (0x00028f6e) cale_bg_pane_g6

0xa9ad,	// (0x00028f76) cale_bg_pane_g7

0xa9b5,	// (0x00028f7e) cale_bg_pane_g8

0xa9bd,	// (0x00028f86) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0002d8ae) cale_bg_pane_g

0x438d,	// (0x00022956) list_cale_time_pane_ParamLimits

0x438d,	// (0x00022956) list_cale_time_pane

0xa9c5,	// (0x00028f8e) list_cale_time_pane_g1_ParamLimits

0xa9c5,	// (0x00028f8e) list_cale_time_pane_g1

0xa9d1,	// (0x00028f9a) list_cale_time_pane_g2_ParamLimits

0xa9d1,	// (0x00028f9a) list_cale_time_pane_g2

0x43a2,	// (0x0002296b) list_cale_time_pane_g3_ParamLimits

0x43a2,	// (0x0002296b) list_cale_time_pane_g3

0x43b0,	// (0x00022979) list_cale_time_pane_g4_ParamLimits

0x43b0,	// (0x00022979) list_cale_time_pane_g4

0x43be,	// (0x00022987) list_cale_time_pane_g5_ParamLimits

0x43be,	// (0x00022987) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0002d8c1) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0002d8c1) list_cale_time_pane_g

0xa9eb,	// (0x00028fb4) list_cale_time_pane_t1_ParamLimits

0xa9eb,	// (0x00028fb4) list_cale_time_pane_t1

0xaa13,	// (0x00028fdc) list_cale_time_pane_t2_ParamLimits

0xaa13,	// (0x00028fdc) list_cale_time_pane_t2

0x4722,	// (0x00022ceb) aid_blid_cardinal_pane

0x4764,	// (0x00022d2d) compass_pane_t4

0xaa3b,	// (0x00029004) list_cale_time_pane_t4_ParamLimits

0xaa3b,	// (0x00029004) list_cale_time_pane_t4

0x4772,	// (0x00022d3b) compass_pane_t5

0x4782,	// (0x00022d4b) compass_pane_t6

0x4790,	// (0x00022d59) compass_pane_t7

0xae78,	// (0x00029441) navi_pane_cc_t1

0xafcd,	// (0x00029596) aid_phob_thumbnail_center_pane

0x4ecd,	// (0x00023496) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0002d8ce) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0002d8ce) list_cale_time_pane_t

0x9d28,	// (0x000282f1) bg_popup_window_pane_cp02_ParamLimits

0x9d28,	// (0x000282f1) bg_popup_window_pane_cp02

0xaa63,	// (0x0002902c) heading_pane_cp01_ParamLimits

0xaa63,	// (0x0002902c) heading_pane_cp01

0xaa6f,	// (0x00029038) loc_req_pane_ParamLimits

0xaa6f,	// (0x00029038) loc_req_pane

0xaa7f,	// (0x00029048) loc_type_pane_ParamLimits

0xaa7f,	// (0x00029048) loc_type_pane

0xaa91,	// (0x0002905a) loc_type_pane_t1_ParamLimits

0xaa91,	// (0x0002905a) loc_type_pane_t1

0xaaa3,	// (0x0002906c) loc_type_pane_t2_ParamLimits

0xaaa3,	// (0x0002906c) loc_type_pane_t2

0xaab5,	// (0x0002907e) loc_type_pane_t3_ParamLimits

0xaab5,	// (0x0002907e) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0002d8d5) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0002d8d5) loc_type_pane_t

0xaac7,	// (0x00029090) list_loc_req_pane

0xaad1,	// (0x0002909a) scroll_pane_cp012

0x43cc,	// (0x00022995) list_single_loc_request_popup_menu_pane_ParamLimits

0x43cc,	// (0x00022995) list_single_loc_request_popup_menu_pane

0xaadc,	// (0x000290a5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaadc,	// (0x000290a5) list_single_loc_request_popup_menu_pane_g1

0xaae8,	// (0x000290b1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaae8,	// (0x000290b1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0002d8dc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0002d8dc) list_single_loc_request_popup_menu_pane_g

0xaaf4,	// (0x000290bd) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaaf4,	// (0x000290bd) list_single_loc_request_popup_menu_pane_t1

0x43de,	// (0x000229a7) bg_popup_window_pane_cp03_ParamLimits

0x43de,	// (0x000229a7) bg_popup_window_pane_cp03

0x43ec,	// (0x000229b5) heading_loc_req_pane_ParamLimits

0x43ec,	// (0x000229b5) heading_loc_req_pane

0x43f8,	// (0x000229c1) popup_dyc_status_message_window_g1_ParamLimits

0x43f8,	// (0x000229c1) popup_dyc_status_message_window_g1

0x4404,	// (0x000229cd) popup_dyc_status_message_window_t1_ParamLimits

0x4404,	// (0x000229cd) popup_dyc_status_message_window_t1

0x4416,	// (0x000229df) popup_dyc_status_message_window_t2_ParamLimits

0x4416,	// (0x000229df) popup_dyc_status_message_window_t2

0x4428,	// (0x000229f1) popup_dyc_status_message_window_t3_ParamLimits

0x4428,	// (0x000229f1) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0002d8e1) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0002d8e1) popup_dyc_status_message_window_t

0xa0d1,	// (0x0002869a) bg_heading_pane_cp01

0xab0a,	// (0x000290d3) heading_loc_req_pane_g1

0xab12,	// (0x000290db) heading_loc_req_pane_g2

0xab1a,	// (0x000290e3) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0002d8e8) heading_loc_req_pane_g

0xab43,	// (0x0002910c) heading_loc_req_pane_t1

0xab53,	// (0x0002911c) bg_popup_sub_pane_cp01_ParamLimits

0xab53,	// (0x0002911c) bg_popup_sub_pane_cp01

0xab61,	// (0x0002912a) popup_cale_events_window_g1_ParamLimits

0xab61,	// (0x0002912a) popup_cale_events_window_g1

0xab81,	// (0x0002914a) popup_cale_events_window_g2_ParamLimits

0xab81,	// (0x0002914a) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0002d91c) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0002d91c) popup_cale_events_window_g

0xaba1,	// (0x0002916a) popup_cale_events_window_t1_ParamLimits

0xaba1,	// (0x0002916a) popup_cale_events_window_t1

0xabb3,	// (0x0002917c) popup_cale_events_window_t2_ParamLimits

0xabb3,	// (0x0002917c) popup_cale_events_window_t2

0xabf1,	// (0x000291ba) popup_cale_events_window_t3_ParamLimits

0xabf1,	// (0x000291ba) popup_cale_events_window_t3

0xac2b,	// (0x000291f4) popup_cale_events_window_t4_ParamLimits

0xac2b,	// (0x000291f4) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0002d921) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0002d921) popup_cale_events_window_t

0x452d,	// (0x00022af6) call_type_pane

0xac61,	// (0x0002922a) popup_call_status_window_g1

0x4539,	// (0x00022b02) popup_call_status_window_g2

0x4545,	// (0x00022b0e) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0002d92a) popup_call_status_window_g

0xac6f,	// (0x00029238) call_type_pane_g1

0xac78,	// (0x00029241) call_type_pane_g2

0x0001,

0xf368,	// (0x0002d931) call_type_pane_g

0xa0d1,	// (0x0002869a) bg_popup_sub_pane_cp02

0xac81,	// (0x0002924a) listscroll_popup_wml_pane

0xac89,	// (0x00029252) list_wml_pane

0xac93,	// (0x0002925c) scroll_pane_cp013

0xac9e,	// (0x00029267) list_single_graphic_popup_wml_pane_ParamLimits

0xac9e,	// (0x00029267) list_single_graphic_popup_wml_pane

0xa454,	// (0x00028a1d) list_single_graphic_popup_wml_pane_g1

0xacb2,	// (0x0002927b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0002d936) list_single_graphic_popup_wml_pane_g

0xacba,	// (0x00029283) list_single_graphic_popup_wml_pane_t1

0xacd0,	// (0x00029299) aid_call_pane

0xa324,	// (0x000288ed) popup_clock_analogue_window_g1

0xa324,	// (0x000288ed) popup_clock_analogue_window_g2

0x11ff,	// (0x0001f7c8) popup_clock_analogue_window_g3

0x11ff,	// (0x0001f7c8) popup_clock_analogue_window_g4

0xa454,	// (0x00028a1d) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0002d93b) popup_clock_analogue_window_g

0x1207,	// (0x0001f7d0) popup_clock_analogue_window_t1

0x1215,	// (0x0001f7de) clock_digital_number_pane_ParamLimits

0x1215,	// (0x0001f7de) clock_digital_number_pane

0x1221,	// (0x0001f7ea) clock_digital_number_pane_cp02_ParamLimits

0x1221,	// (0x0001f7ea) clock_digital_number_pane_cp02

0x122d,	// (0x0001f7f6) clock_digital_number_pane_cp03_ParamLimits

0x122d,	// (0x0001f7f6) clock_digital_number_pane_cp03

0x1239,	// (0x0001f802) clock_digital_number_pane_cp04_ParamLimits

0x1239,	// (0x0001f802) clock_digital_number_pane_cp04

0x1245,	// (0x0001f80e) clock_digital_separator_pane_ParamLimits

0x1245,	// (0x0001f80e) clock_digital_separator_pane

0x1251,	// (0x0001f81a) popup_clock_digital_window_t1

0xa454,	// (0x00028a1d) clock_digital_number_pane_g1

0xa454,	// (0x00028a1d) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0002d8a9) clock_digital_number_pane_g

0xa454,	// (0x00028a1d) clock_digital_separator_pane_g1

0xa454,	// (0x00028a1d) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0002d8a9) clock_digital_separator_pane_g

0xa0d1,	// (0x0002869a) bg_popup_window_pane_cp04

0xacd8,	// (0x000292a1) heading_pane_cp03

0xace0,	// (0x000292a9) listscroll_popup_gms_pane

0xace8,	// (0x000292b1) grid_large_graphic_popup_pane

0xacf2,	// (0x000292bb) listscroll_popup_gms_pane_g1

0xacfa,	// (0x000292c3) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0002d946) listscroll_popup_gms_pane_g

0xa782,	// (0x00028d4b) scroll_pane_cp014

0x4551,	// (0x00022b1a) cell_large_graphic_popup_pane_ParamLimits

0x4551,	// (0x00022b1a) cell_large_graphic_popup_pane

0x456b,	// (0x00022b34) cell_large_graphic_popup_pane_g1_ParamLimits

0x456b,	// (0x00022b34) cell_large_graphic_popup_pane_g1

0xad02,	// (0x000292cb) cell_large_graphic_popup_pane_g2_ParamLimits

0xad02,	// (0x000292cb) cell_large_graphic_popup_pane_g2

0xad0e,	// (0x000292d7) cell_large_graphic_popup_pane_g3_ParamLimits

0xad0e,	// (0x000292d7) cell_large_graphic_popup_pane_g3

0xad1b,	// (0x000292e4) cell_large_graphic_popup_pane_g4_ParamLimits

0xad1b,	// (0x000292e4) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0002d94b) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0002d94b) cell_large_graphic_popup_pane_g

0xad2b,	// (0x000292f4) grid_highlight_pane_cp010

0xa454,	// (0x00028a1d) bg_popup_call_pane_g1

0xad35,	// (0x000292fe) list_single_graphic_popup_conf_pane_ParamLimits

0xad35,	// (0x000292fe) list_single_graphic_popup_conf_pane

0xad47,	// (0x00029310) list_highlight_pane_cp01

0xad50,	// (0x00029319) list_single_graphic_popup_conf_pane_g1

0xad58,	// (0x00029321) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0002d954) list_single_graphic_popup_conf_pane_g

0xad60,	// (0x00029329) list_single_graphic_popup_conf_pane_t1

0xad6e,	// (0x00029337) linegrid_cams_pane_g1

0x4577,	// (0x00022b40) linegrid_cams_pane_g2

0xa5b9,	// (0x00028b82) linegrid_cams_pane_g3

0xad77,	// (0x00029340) linegrid_cams_pane_g4

0x4580,	// (0x00022b49) linegrid_cams_pane_g5

0x4589,	// (0x00022b52) linegrid_cams_pane_g6

0xa5c2,	// (0x00028b8b) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0002d959) linegrid_cams_pane_g

0xad80,	// (0x00029349) popup_clock_analogue_window

0xad80,	// (0x00029349) popup_clock_digital_window

0xa0d1,	// (0x0002869a) popup_phob_thumbnail_window

0xa454,	// (0x00028a1d) call_video_uplink_pane_g1

0xad89,	// (0x00029352) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0002d968) call_video_uplink_pane_g

0xad91,	// (0x0002935a) video_uplink_pane

0xad99,	// (0x00029362) mce_image_pane_g1

0x4594,	// (0x00022b5d) mce_image_pane_g2

0x459e,	// (0x00022b67) mce_image_pane_g3

0x45a8,	// (0x00022b71) mce_image_pane_g4

0x45b0,	// (0x00022b79) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0002d96d) mce_image_pane_g

0xada3,	// (0x0002936c) control_top_pane_stacon_cp01_ParamLimits

0xada3,	// (0x0002936c) control_top_pane_stacon_cp01

0xadb7,	// (0x00029380) uni_indicator_pane_stacon_cp01_ParamLimits

0xadb7,	// (0x00029380) uni_indicator_pane_stacon_cp01

0xadc8,	// (0x00029391) bg_popup_sub_pane_cp03

0x45b8,	// (0x00022b81) chi_dic_find_pane

0x45c0,	// (0x00022b89) listscroll_chi_dic_pane

0x45c9,	// (0x00022b92) main_pane_chidic_g1

0x45dc,	// (0x00022ba5) chi_dic_find_pane_t1

0xadd2,	// (0x0002939b) find_chidic_pane

0xaddb,	// (0x000293a4) chi_dic_list_pane_ParamLimits

0xaddb,	// (0x000293a4) chi_dic_list_pane

0xadec,	// (0x000293b5) scroll_pane_cp020

0x45ea,	// (0x00022bb3) find_chidic_pane_t1

0xa0d1,	// (0x0002869a) input_focus_pane_cp06

0x45f9,	// (0x00022bc2) list_chi_dic_pane_ParamLimits

0x45f9,	// (0x00022bc2) list_chi_dic_pane

0x460e,	// (0x00022bd7) list_chi_dic_pane_t1_ParamLimits

0x460e,	// (0x00022bd7) list_chi_dic_pane_t1

0xa0d1,	// (0x0002869a) list_highlight_pane_cp020

0xadf4,	// (0x000293bd) bg_cale_heading_pane_g1

0x4621,	// (0x00022bea) bg_cale_heading_pane_g2

0x4629,	// (0x00022bf2) bg_cale_heading_pane_g3

0x4631,	// (0x00022bfa) bg_cale_heading_pane_g4

0x463b,	// (0x00022c04) bg_cale_heading_pane_g5

0x4645,	// (0x00022c0e) bg_cale_heading_pane_g6

0x464d,	// (0x00022c16) bg_cale_heading_pane_g7

0x4655,	// (0x00022c1e) bg_cale_heading_pane_g8

0x465f,	// (0x00022c28) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0002d978) bg_cale_heading_pane_g

0xadf4,	// (0x000293bd) bg_cale_side_pane_g1

0x4669,	// (0x00022c32) bg_cale_side_pane_g2

0x4673,	// (0x00022c3c) bg_cale_side_pane_g3

0x467d,	// (0x00022c46) bg_cale_side_pane_g4

0x4687,	// (0x00022c50) bg_cale_side_pane_g5

0x4691,	// (0x00022c5a) bg_cale_side_pane_g6

0x469b,	// (0x00022c64) bg_cale_side_pane_g7

0x46a5,	// (0x00022c6e) bg_cale_side_pane_g8

0x46ad,	// (0x00022c76) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0002d98b) bg_cale_side_pane_g

0x46b5,	// (0x00022c7e) popup_call_status_window_ParamLimits

0x46b5,	// (0x00022c7e) popup_call_status_window

0xadfc,	// (0x000293c5) stacon_top_pane

0xae04,	// (0x000293cd) status_pane_ParamLimits

0xae04,	// (0x000293cd) status_pane

0xae19,	// (0x000293e2) status_small_pane

0xae21,	// (0x000293ea) control_pane

0xa0d1,	// (0x0002869a) stacon_bottom_pane

0xae29,	// (0x000293f2) list_single_mce_smart_pane_t1_ParamLimits

0xae29,	// (0x000293f2) list_single_mce_smart_pane_t1

0xae3c,	// (0x00029405) list_single_mce_smart_pane_t2_ParamLimits

0xae3c,	// (0x00029405) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0002d99e) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0002d99e) list_single_mce_smart_pane_t

0x46c1,	// (0x00022c8a) compass_pane

0x46cc,	// (0x00022c95) main_location2_pane_t1

0x46e2,	// (0x00022cab) main_location2_pane_t2

0x46f8,	// (0x00022cc1) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0002d9a3) main_location2_pane_t

0xae5b,	// (0x00029424) compass_pane_g1_ParamLimits

0xae5b,	// (0x00029424) compass_pane_g1

0x4746,	// (0x00022d0f) compass_pane_t1

0x4755,	// (0x00022d1e) compass_pane_t2

0x0005,

0xf3e3,	// (0x0002d9ac) compass_pane_t

0x47a0,	// (0x00022d69) text_secondary_cp61

0xae6f,	// (0x00029438) navi_pane_cams_g5

0xae92,	// (0x0002945b) navi_pane_im_t1

0xaea0,	// (0x00029469) navi_pane_mp_g1_ParamLimits

0xaea0,	// (0x00029469) navi_pane_mp_g1

0xaeb4,	// (0x0002947d) navi_pane_mp_g2_ParamLimits

0xaeb4,	// (0x0002947d) navi_pane_mp_g2

0xaec0,	// (0x00029489) navi_pane_mp_g3_ParamLimits

0xaec0,	// (0x00029489) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0002d9c0) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0002d9c0) navi_pane_mp_g

0xaecc,	// (0x00029495) navi_pane_mp_t1

0xaeda,	// (0x000294a3) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0002d9c7) navi_pane_mp_t

0xaf16,	// (0x000294df) navi_pane_vt_g1

0xaecc,	// (0x00029495) navi_pane_vt_t1

0xaf1e,	// (0x000294e7) navi_slider_pane

0xaf26,	// (0x000294ef) zooming_pane

0xaf2e,	// (0x000294f7) navi_slider_pane_g1

0x126e,	// (0x0001f837) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0002d9ce) navi_slider_pane_g

0xaf52,	// (0x0002951b) aid_levels_zoom

0xaf5a,	// (0x00029523) zooming_pane_g1

0xaf62,	// (0x0002952b) zooming_pane_g2

0xaf62,	// (0x0002952b) zooming_pane_g3

0x0002,

0xf414,	// (0x0002d9dd) zooming_pane_g

0xaf6a,	// (0x00029533) level_10_zoom

0xaf73,	// (0x0002953c) level_11_zoom

0xaf7c,	// (0x00029545) level_1_zoom

0xaf85,	// (0x0002954e) level_2_zoom

0xaf8e,	// (0x00029557) level_3_zoom

0xaf97,	// (0x00029560) level_4_zoom

0xafa0,	// (0x00029569) level_5_zoom

0xafa9,	// (0x00029572) level_6_zoom

0xafb2,	// (0x0002957b) level_7_zoom

0xafbb,	// (0x00029584) level_8_zoom

0xafc4,	// (0x0002958d) level_9_zoom

0xafd5,	// (0x0002959e) popup_phob_thumbnail_window_g1

0xafdd,	// (0x000295a6) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0002d9e4) popup_phob_thumbnail_window_g

0xc30a,	// (0x0002a8d3) level_1_location

0xc312,	// (0x0002a8db) level_2_location

0xc31a,	// (0x0002a8e3) level_3_location

0xc322,	// (0x0002a8eb) level_4_location

0xaf26,	// (0x000294ef) level_5_location

0x48d5,	// (0x00022e9e) mce_icon_pane_g1

0x48dd,	// (0x00022ea6) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0002d9e9) mce_icon_pane_g

0x48e5,	// (0x00022eae) main_mup_pane_g1_ParamLimits

0x48e5,	// (0x00022eae) main_mup_pane_g1

0x48fd,	// (0x00022ec6) main_mup_pane_g2_ParamLimits

0x48fd,	// (0x00022ec6) main_mup_pane_g2

0x4919,	// (0x00022ee2) main_mup_pane_g3_ParamLimits

0x4919,	// (0x00022ee2) main_mup_pane_g3

0x4935,	// (0x00022efe) main_mup_pane_g4_ParamLimits

0x4935,	// (0x00022efe) main_mup_pane_g4

0x4951,	// (0x00022f1a) main_mup_pane_g5_ParamLimits

0x4951,	// (0x00022f1a) main_mup_pane_g5

0x4972,	// (0x00022f3b) main_mup_pane_g6_ParamLimits

0x4972,	// (0x00022f3b) main_mup_pane_g6

0x4992,	// (0x00022f5b) main_mup_pane_g7_ParamLimits

0x4992,	// (0x00022f5b) main_mup_pane_g7

0x49b6,	// (0x00022f7f) main_mup_pane_g8_ParamLimits

0x49b6,	// (0x00022f7f) main_mup_pane_g8

0x49da,	// (0x00022fa3) main_mup_pane_g9_ParamLimits

0x49da,	// (0x00022fa3) main_mup_pane_g9

0x49fd,	// (0x00022fc6) main_mup_pane_g10_ParamLimits

0x49fd,	// (0x00022fc6) main_mup_pane_g10

0x4a20,	// (0x00022fe9) main_mup_pane_g11_ParamLimits

0x4a20,	// (0x00022fe9) main_mup_pane_g11

0x4a40,	// (0x00023009) main_mup_pane_g12_ParamLimits

0x4a40,	// (0x00023009) main_mup_pane_g12

0x4a4e,	// (0x00023017) main_mup_pane_g13_ParamLimits

0x4a4e,	// (0x00023017) main_mup_pane_g13

0x000c,

0xf425,	// (0x0002d9ee) main_mup_pane_g_ParamLimits

0xf425,	// (0x0002d9ee) main_mup_pane_g

0x4a64,	// (0x0002302d) main_mup_pane_t1_ParamLimits

0x4a64,	// (0x0002302d) main_mup_pane_t1

0x4a83,	// (0x0002304c) main_mup_pane_t2_ParamLimits

0x4a83,	// (0x0002304c) main_mup_pane_t2

0x4a9d,	// (0x00023066) main_mup_pane_t3_ParamLimits

0x4a9d,	// (0x00023066) main_mup_pane_t3

0x4ab7,	// (0x00023080) main_mup_pane_t4_ParamLimits

0x4ab7,	// (0x00023080) main_mup_pane_t4

0x4ac9,	// (0x00023092) main_mup_pane_t5_ParamLimits

0x4ac9,	// (0x00023092) main_mup_pane_t5

0x4adb,	// (0x000230a4) main_mup_pane_t6_ParamLimits

0x4adb,	// (0x000230a4) main_mup_pane_t6

0x0005,

0xf440,	// (0x0002da09) main_mup_pane_t_ParamLimits

0xf440,	// (0x0002da09) main_mup_pane_t

0x4af1,	// (0x000230ba) mup_progress_pane_ParamLimits

0x4af1,	// (0x000230ba) mup_progress_pane

0x4afd,	// (0x000230c6) mup_visualizer_pane_ParamLimits

0x4afd,	// (0x000230c6) mup_visualizer_pane

0x4b3b,	// (0x00023104) mup_volume_pane_ParamLimits

0x4b3b,	// (0x00023104) mup_volume_pane

0xac61,	// (0x0002922a) mup_visualizer_pane_g1_ParamLimits

0xac61,	// (0x0002922a) mup_visualizer_pane_g1

0xac61,	// (0x0002922a) mup_visualizer_pane_g2_ParamLimits

0xac61,	// (0x0002922a) mup_visualizer_pane_g2

0xae5b,	// (0x00029424) mup_visualizer_pane_g3_ParamLimits

0xae5b,	// (0x00029424) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0002da16) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0002da16) mup_visualizer_pane_g

0xa454,	// (0x00028a1d) mup_volume_pane_g1

0xafed,	// (0x000295b6) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0002da1d) mup_volume_pane_g

0xa454,	// (0x00028a1d) mup_progress_pane_g1

0xaff6,	// (0x000295bf) mup_progress_pane_g2

0xafff,	// (0x000295c8) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0002da22) mup_progress_pane_g

0xa0d1,	// (0x0002869a) bg_popup_window_pane_cp05

0xb008,	// (0x000295d1) heading_pane_cp02_ParamLimits

0xb008,	// (0x000295d1) heading_pane_cp02

0xb024,	// (0x000295ed) list_popup_blid_pane

0xb02c,	// (0x000295f5) list_blid_sat_info_pane_ParamLimits

0xb02c,	// (0x000295f5) list_blid_sat_info_pane

0xb03f,	// (0x00029608) list_blid_sat_info_pane_g1

0xb047,	// (0x00029610) list_blid_sat_info_pane_t1

0x4c5a,	// (0x00023223) mup_equalizer_pane_ParamLimits

0x4c5a,	// (0x00023223) mup_equalizer_pane

0x4c7b,	// (0x00023244) mup_equalizer_pane_cp1_ParamLimits

0x4c7b,	// (0x00023244) mup_equalizer_pane_cp1

0x4c9c,	// (0x00023265) mup_equalizer_pane_cp2_ParamLimits

0x4c9c,	// (0x00023265) mup_equalizer_pane_cp2

0x4cbd,	// (0x00023286) mup_equalizer_pane_cp3_ParamLimits

0x4cbd,	// (0x00023286) mup_equalizer_pane_cp3

0x4ce2,	// (0x000232ab) mup_equalizer_pane_cp4_ParamLimits

0x4ce2,	// (0x000232ab) mup_equalizer_pane_cp4

0x4d07,	// (0x000232d0) mup_equalizer_pane_cp5

0x4d1f,	// (0x000232e8) mup_equalizer_pane_cp6

0x4d37,	// (0x00023300) mup_equalizer_pane_cp7

0xc224,	// (0x0002a7ed) bg_popup_call_poc_act_pane_g9

0xc22c,	// (0x0002a7f5) bg_popup_call_poc_act_pane_g10

0xc234,	// (0x0002a7fd) bg_popup_call_poc_act_pane_g11

0x000a,

0xa32c,	// (0x000288f5) mup_scale_pane

0xa454,	// (0x00028a1d) mup_scale_pane_g1

0xb055,	// (0x0002961e) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0002da3e) mup_scale_pane_g

0xb079,	// (0x00029642) msg_data_pane

0xb081,	// (0x0002964a) scroll_pane_cp017

0x4d61,	// (0x0002332a) bg_list_pane_cp04_ParamLimits

0x4d61,	// (0x0002332a) bg_list_pane_cp04

0xb091,	// (0x0002965a) msg_data_pane_g1

0x4d81,	// (0x0002334a) msg_data_pane_g2

0x4d8b,	// (0x00023354) msg_data_pane_g3

0x4d95,	// (0x0002335e) msg_data_pane_g4

0x4d9d,	// (0x00023366) msg_data_pane_g5

0x4da5,	// (0x0002336e) msg_data_pane_g6

0x4dad,	// (0x00023376) msg_data_pane_g7

0x0006,

0xf484,	// (0x0002da4d) msg_data_pane_g

0x4db5,	// (0x0002337e) msg_text_pane_ParamLimits

0x4db5,	// (0x0002337e) msg_text_pane

0x4ddd,	// (0x000233a6) qrid_highlight_pane_cp011_ParamLimits

0x4ddd,	// (0x000233a6) qrid_highlight_pane_cp011

0xa0d1,	// (0x0002869a) msg_body_pane

0xa0d1,	// (0x0002869a) msg_header_pane

0xb099,	// (0x00029662) input_focus_pane_cp07

0xb0ae,	// (0x00029677) msg_header_pane_t1_ParamLimits

0xb0ae,	// (0x00029677) msg_header_pane_t1

0xb0c0,	// (0x00029689) msg_header_pane_t2_ParamLimits

0xb0c0,	// (0x00029689) msg_header_pane_t2

0x0001,

0xf498,	// (0x0002da61) msg_header_pane_t_ParamLimits

0xf498,	// (0x0002da61) msg_header_pane_t

0xb0d2,	// (0x0002969b) msg_body_pane_g1

0x4e0c,	// (0x000233d5) msg_body_pane_t1_ParamLimits

0x4e0c,	// (0x000233d5) msg_body_pane_t1

0xb0da,	// (0x000296a3) msg_body_pane_t2_ParamLimits

0xb0da,	// (0x000296a3) msg_body_pane_t2

0xb0ec,	// (0x000296b5) msg_body_pane_t3_ParamLimits

0xb0ec,	// (0x000296b5) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0002da66) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0002da66) msg_body_pane_t

0x12b0,	// (0x0001f879) main_viewer_pane_g1_ParamLimits

0x12b0,	// (0x0001f879) main_viewer_pane_g1

0x12bc,	// (0x0001f885) main_viewer_pane_g2_ParamLimits

0x12bc,	// (0x0001f885) main_viewer_pane_g2

0x4e5f,	// (0x00023428) main_viewer_pane_g3_ParamLimits

0x4e5f,	// (0x00023428) main_viewer_pane_g3

0x4e70,	// (0x00023439) main_viewer_pane_g4_ParamLimits

0x4e70,	// (0x00023439) main_viewer_pane_g4

0x12c8,	// (0x0001f891) main_viewer_pane_g5_ParamLimits

0x12c8,	// (0x0001f891) main_viewer_pane_g5

0x12c8,	// (0x0001f891) main_viewer_pane_g7_ParamLimits

0x12c8,	// (0x0001f891) main_viewer_pane_g7

0x12da,	// (0x0001f8a3) main_viewer_pane_g8_ParamLimits

0x12da,	// (0x0001f8a3) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0002da76) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0002da76) main_viewer_pane_g

0xb0fe,	// (0x000296c7) viewer_content_pane_ParamLimits

0xb0fe,	// (0x000296c7) viewer_content_pane

0x4ea1,	// (0x0002346a) main_postcard_pane_g1_ParamLimits

0x4ea1,	// (0x0002346a) main_postcard_pane_g1

0x4eaf,	// (0x00023478) main_postcard_pane_g2_ParamLimits

0x4eaf,	// (0x00023478) main_postcard_pane_g2

0x4ebd,	// (0x00023486) main_postcard_pane_g3_ParamLimits

0x4ebd,	// (0x00023486) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0002da87) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0002da87) main_postcard_pane_g

0x4ecd,	// (0x00023496) main_postcard_pane_g4

0xc44d,	// (0x0002aa16) smil_status_volume_pane_g2

0x4ef9,	// (0x000234c2) postcard_pane_ParamLimits

0x4ef9,	// (0x000234c2) postcard_pane

0xac61,	// (0x0002922a) postcard_pane_g1_ParamLimits

0xac61,	// (0x0002922a) postcard_pane_g1

0x4f33,	// (0x000234fc) postcard_pane_g2_ParamLimits

0x4f33,	// (0x000234fc) postcard_pane_g2

0x4f3f,	// (0x00023508) postcard_pane_g3_ParamLimits

0x4f3f,	// (0x00023508) postcard_pane_g3

0xb10c,	// (0x000296d5) postcard_pane_g4_ParamLimits

0xb10c,	// (0x000296d5) postcard_pane_g4

0x4f4b,	// (0x00023514) postcard_pane_g5_ParamLimits

0x4f4b,	// (0x00023514) postcard_pane_g5

0x4f57,	// (0x00023520) postcard_pane_g6_ParamLimits

0x4f57,	// (0x00023520) postcard_pane_g6

0xb11a,	// (0x000296e3) postcard_pane_g7_ParamLimits

0xb11a,	// (0x000296e3) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0002da94) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0002da94) postcard_pane_g

0x4f65,	// (0x0002352e) main_mp2_pane_g1_ParamLimits

0x4f65,	// (0x0002352e) main_mp2_pane_g1

0x4f73,	// (0x0002353c) main_mp2_pane_g2_ParamLimits

0x4f73,	// (0x0002353c) main_mp2_pane_g2

0x4f7f,	// (0x00023548) main_mp2_pane_g3_ParamLimits

0x4f7f,	// (0x00023548) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0002daa3) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0002daa3) main_mp2_pane_g

0x4f8b,	// (0x00023554) main_mp2_pane_t1_ParamLimits

0x4f8b,	// (0x00023554) main_mp2_pane_t1

0x4fa2,	// (0x0002356b) main_mp2_pane_t2_ParamLimits

0x4fa2,	// (0x0002356b) main_mp2_pane_t2

0x4fb6,	// (0x0002357f) main_mp2_pane_t3_ParamLimits

0x4fb6,	// (0x0002357f) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0002daaa) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0002daaa) main_mp2_pane_t

0xb128,	// (0x000296f1) pec_content_pane_ParamLimits

0xb128,	// (0x000296f1) pec_content_pane

0xa782,	// (0x00028d4b) scroll_pane_cp015

0xb13a,	// (0x00029703) pec_attribute_pane_ParamLimits

0xb13a,	// (0x00029703) pec_attribute_pane

0x4fc8,	// (0x00023591) pec_content_pane_g1_ParamLimits

0x4fc8,	// (0x00023591) pec_content_pane_g1

0xb14a,	// (0x00029713) pec_content_pane_t1_ParamLimits

0xb14a,	// (0x00029713) pec_content_pane_t1

0xb15c,	// (0x00029725) pec_content_pane_t2_ParamLimits

0xb15c,	// (0x00029725) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0002dab1) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0002dab1) pec_content_pane_t

0x4fd4,	// (0x0002359d) list_single_graphic_pane_cp01_ParamLimits

0x4fd4,	// (0x0002359d) list_single_graphic_pane_cp01

0xa32c,	// (0x000288f5) bg_popup_sub_pane_cp04

0xb16e,	// (0x00029737) popup_mup_playback_window_g1

0xb17a,	// (0x00029743) popup_mup_playback_window_t1

0xb18f,	// (0x00029758) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0002dab6) popup_mup_playback_window_t

0xb1c6,	// (0x0002978f) main_image_pane_g1_ParamLimits

0xb1c6,	// (0x0002978f) main_image_pane_g1

0xb209,	// (0x000297d2) scroll_pane_cp018_ParamLimits

0xb209,	// (0x000297d2) scroll_pane_cp018

0xb221,	// (0x000297ea) scroll_pane_cp016_ParamLimits

0xb221,	// (0x000297ea) scroll_pane_cp016

0x5062,	// (0x0002362b) smil2_image_pane_ParamLimits

0x5062,	// (0x0002362b) smil2_image_pane

0x5098,	// (0x00023661) smil2_root_pane_ParamLimits

0x5098,	// (0x00023661) smil2_root_pane

0x50c4,	// (0x0002368d) smil2_text_pane_ParamLimits

0x50c4,	// (0x0002368d) smil2_text_pane

0xa0d1,	// (0x0002869a) bg_list_pane_cp06

0xb25d,	// (0x00029826) grid_radio_pane

0xa0d1,	// (0x0002869a) bg_popup_window_pane_cp06

0xb267,	// (0x00029830) main_fmradio_pane_t1

0xacd8,	// (0x000292a1) heading_pane_cp04

0xb275,	// (0x0002983e) main_fmradio_pane_t2

0xc23c,	// (0x0002a805) popup_cale_lunar_info_window_g1

0xb283,	// (0x0002984c) main_fmradio_pane_t3

0xc244,	// (0x0002a80d) popup_cale_lunar_info_window_g2

0xb293,	// (0x0002985c) main_fmradio_pane_t4

0x0001,

0xb2a1,	// (0x0002986a) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0002db91) popup_cale_lunar_info_window_g

0xf502,	// (0x0002dacb) main_fmradio_pane_t

0xb2af,	// (0x00029878) wait_bar_pane_cp03

0xab22,	// (0x000290eb) cell_fmradio_pane_ParamLimits

0xab22,	// (0x000290eb) cell_fmradio_pane

0xb11a,	// (0x000296e3) cell_fmradio_pane_g1_ParamLimits

0xb11a,	// (0x000296e3) cell_fmradio_pane_g1

0xa0d1,	// (0x0002869a) grid_highlight_pane_cp011

0xb2b7,	// (0x00029880) poc_content_pane_ParamLimits

0xb2b7,	// (0x00029880) poc_content_pane

0xb2c9,	// (0x00029892) scroll_pane_cp019

0x5104,	// (0x000236cd) popup_call_poc_act_window_ParamLimits

0x5104,	// (0x000236cd) popup_call_poc_act_window

0x5111,	// (0x000236da) popup_call_poc_inact_window_ParamLimits

0x5111,	// (0x000236da) popup_call_poc_inact_window

0xf59f,	// (0x0002db68) bg_popup_call_poc_act_pane_g

0xc1b4,	// (0x0002a77d) bg_popup_call_poc_inact_pane_g1

0xc1bc,	// (0x0002a785) bg_popup_call_poc_inact_pane_g2

0xb2d1,	// (0x0002989a) popup_call_poc_act_window_g2

0xc1c4,	// (0x0002a78d) bg_popup_call_poc_inact_pane_g3

0xc1cc,	// (0x0002a795) bg_popup_call_poc_inact_pane_g4

0xc1d4,	// (0x0002a79d) bg_popup_call_poc_inact_pane_g5

0xb2d9,	// (0x000298a2) popup_call_poc_act_window_t1_ParamLimits

0xb2d9,	// (0x000298a2) popup_call_poc_act_window_t1

0xb301,	// (0x000298ca) popup_call_poc_act_window_t2_ParamLimits

0xb301,	// (0x000298ca) popup_call_poc_act_window_t2

0xb329,	// (0x000298f2) popup_call_poc_act_window_t3_ParamLimits

0xb329,	// (0x000298f2) popup_call_poc_act_window_t3

0xb351,	// (0x0002991a) popup_call_poc_act_window_t4_ParamLimits

0xb351,	// (0x0002991a) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0002dad6) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0002dad6) popup_call_poc_act_window_t

0xc1dc,	// (0x0002a7a5) bg_popup_call_poc_inact_pane_g6

0xc1e4,	// (0x0002a7ad) bg_popup_call_poc_inact_pane_g7

0xc1ec,	// (0x0002a7b5) bg_popup_call_poc_inact_pane_g8

0xb363,	// (0x0002992c) popup_call_poc_inact_window_g2

0xc1f4,	// (0x0002a7bd) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0002db55) bg_popup_call_poc_inact_pane_g

0xb36b,	// (0x00029934) popup_call_poc_inact_window_t1_ParamLimits

0xb36b,	// (0x00029934) popup_call_poc_inact_window_t1

0xb380,	// (0x00029949) popup_call_poc_inact_window_t2_ParamLimits

0xb380,	// (0x00029949) popup_call_poc_inact_window_t2

0xb395,	// (0x0002995e) popup_call_poc_inact_window_t3_ParamLimits

0xb395,	// (0x0002995e) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0002dadf) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0002dadf) popup_call_poc_inact_window_t

0xc3c0,	// (0x0002a989) context_pane_ParamLimits

0x5720,	// (0x00023ce9) signal_pane_ParamLimits

0xaf26,	// (0x000294ef) main_call2_pane

0xc3ae,	// (0x0002a977) popup_phob_thumbnail2_window_ParamLimits

0xc3ae,	// (0x0002a977) popup_phob_thumbnail2_window

0x1280,	// (0x0001f849) aid_hotspot_pointer_arrow_pane

0x1288,	// (0x0001f851) aid_hotspot_pointer_hand_pane

0x5436,	// (0x000239ff) phob_pre_status_pane_g5

0x2f57,	// (0x00021520) cams_zoom_pane_ParamLimits

0x2f63,	// (0x0002152c) image_vga_pane_ParamLimits

0x2f72,	// (0x0002153b) main_camera_pane_g1_ParamLimits

0x2f80,	// (0x00021549) main_camera_pane_g2_ParamLimits

0x2f8c,	// (0x00021555) main_camera_pane_g3_ParamLimits

0x2f9a,	// (0x00021563) main_camera_pane_g4_ParamLimits

0x2fa8,	// (0x00021571) main_camera_pane_g5_ParamLimits

0x2fb6,	// (0x0002157f) main_camera_pane_g6_ParamLimits

0x2fc4,	// (0x0002158d) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0002d7de) main_camera_pane_g_ParamLimits

0x2fd2,	// (0x0002159b) main_camera_pane_t1_ParamLimits

0x2fe4,	// (0x000215ad) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0002d7ef) main_camera_pane_t_ParamLimits

0xa32c,	// (0x000288f5) bg_popup_preview_window_pane_cp01_ParamLimits

0xa32c,	// (0x000288f5) bg_popup_preview_window_pane_cp01

0xb3aa,	// (0x00029973) popup_phob_thumbnail2_window_g1_ParamLimits

0xb3aa,	// (0x00029973) popup_phob_thumbnail2_window_g1

0xa0d1,	// (0x0002869a) call2_cli_visual_pane

0x512d,	// (0x000236f6) popup_call2_audio_conf_window_ParamLimits

0x512d,	// (0x000236f6) popup_call2_audio_conf_window

0x5146,	// (0x0002370f) popup_call2_audio_first_window_ParamLimits

0x5146,	// (0x0002370f) popup_call2_audio_first_window

0x51e4,	// (0x000237ad) popup_call2_audio_in_window_ParamLimits

0x51e4,	// (0x000237ad) popup_call2_audio_in_window

0x5228,	// (0x000237f1) popup_call2_audio_out_window_ParamLimits

0x5228,	// (0x000237f1) popup_call2_audio_out_window

0x5292,	// (0x0002385b) popup_call2_audio_second_window_ParamLimits

0x5292,	// (0x0002385b) popup_call2_audio_second_window

0x52f0,	// (0x000238b9) popup_call2_audio_wait_window_ParamLimits

0x52f0,	// (0x000238b9) popup_call2_audio_wait_window

0xa0d1,	// (0x0002869a) bg_popup_call2_act_pane_cp03

0xa30e,	// (0x000288d7) list_conf_pane_cp

0xb3b6,	// (0x0002997f) popup_call2_audio_conf_window_t1

0xb3c4,	// (0x0002998d) list_single_graphic_popup_conf2_pane_ParamLimits

0xb3c4,	// (0x0002998d) list_single_graphic_popup_conf2_pane

0xad47,	// (0x00029310) list_highlight_pane_cp04

0xb3d7,	// (0x000299a0) list_single_graphic_popup_conf2_pane_g1

0xad58,	// (0x00029321) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0002dae6) list_single_graphic_popup_conf2_pane_g

0xb3e1,	// (0x000299aa) list_single_graphic_popup_conf2_pane_t1

0xb3ef,	// (0x000299b8) bg_popup_call2_act_pane_cp01_ParamLimits

0xb3ef,	// (0x000299b8) bg_popup_call2_act_pane_cp01

0xb479,	// (0x00029a42) call_type_pane_cp05_ParamLimits

0xb479,	// (0x00029a42) call_type_pane_cp05

0xb4cd,	// (0x00029a96) popup_call2_audio_second_window_g1_ParamLimits

0xb4cd,	// (0x00029a96) popup_call2_audio_second_window_g1

0xb521,	// (0x00029aea) popup_call2_audio_second_window_g2_ParamLimits

0xb521,	// (0x00029aea) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0002daeb) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0002daeb) popup_call2_audio_second_window_g

0xb586,	// (0x00029b4f) popup_call2_audio_second_window_t1_ParamLimits

0xb586,	// (0x00029b4f) popup_call2_audio_second_window_t1

0xb641,	// (0x00029c0a) popup_call2_audio_second_window_t2_ParamLimits

0xb641,	// (0x00029c0a) popup_call2_audio_second_window_t2

0xb694,	// (0x00029c5d) popup_call2_audio_second_window_t3_ParamLimits

0xb694,	// (0x00029c5d) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0002daf2) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0002daf2) popup_call2_audio_second_window_t

0xa0d1,	// (0x0002869a) bg_popup_call2_in_pane_cp02

0xa0db,	// (0x000286a4) call_type_pane_cp04

0xa0e3,	// (0x000286ac) popup_call2_audio_wait_window_g1

0xa0eb,	// (0x000286b4) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0002d6cb) popup_call2_audio_wait_window_g

0xa0f3,	// (0x000286bc) popup_call2_audio_wait_window_t3

0xb787,	// (0x00029d50) bg_popup_call2_act_pane_ParamLimits

0xb787,	// (0x00029d50) bg_popup_call2_act_pane

0xb847,	// (0x00029e10) call_type_pane_cp03_ParamLimits

0xb847,	// (0x00029e10) call_type_pane_cp03

0xb8ab,	// (0x00029e74) popup_call2_audio_first_window_g1_ParamLimits

0xb8ab,	// (0x00029e74) popup_call2_audio_first_window_g1

0xb91b,	// (0x00029ee4) popup_call2_audio_first_window_g2_ParamLimits

0xb91b,	// (0x00029ee4) popup_call2_audio_first_window_g2

0xac61,	// (0x0002922a) popup_call2_audio_first_window_g3_ParamLimits

0xac61,	// (0x0002922a) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0002dafb) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0002dafb) popup_call2_audio_first_window_g

0xb9f9,	// (0x00029fc2) popup_call2_audio_first_window_t1_ParamLimits

0xb9f9,	// (0x00029fc2) popup_call2_audio_first_window_t1

0xbafc,	// (0x0002a0c5) popup_call2_audio_first_window_t4_ParamLimits

0xbafc,	// (0x0002a0c5) popup_call2_audio_first_window_t4

0xbbdf,	// (0x0002a1a8) popup_call2_audio_first_window_t5_ParamLimits

0xbbdf,	// (0x0002a1a8) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0002db06) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0002db06) popup_call2_audio_first_window_t

0xa324,	// (0x000288ed) bg_popup_call2_act_pane_g1

0xc24e,	// (0x0002a817) popup_cale_lunar_info_window_t1

0xc25c,	// (0x0002a825) popup_cale_lunar_info_window_t2

0xc26a,	// (0x0002a833) popup_cale_lunar_info_window_t3

0xa0d1,	// (0x0002869a) bg_popup_call2_bubble_pane

0xbce0,	// (0x0002a2a9) bg_popup_call2_in_pane_cp01_ParamLimits

0xbce0,	// (0x0002a2a9) bg_popup_call2_in_pane_cp01

0x9dad,	// (0x00028376) call_type_pane_cp02

0xbd28,	// (0x0002a2f1) popup_call2_audio_out_window_g1_ParamLimits

0xbd28,	// (0x0002a2f1) popup_call2_audio_out_window_g1

0xbd54,	// (0x0002a31d) popup_call2_audio_out_window_g2_ParamLimits

0xbd54,	// (0x0002a31d) popup_call2_audio_out_window_g2

0xbd7c,	// (0x0002a345) popup_call2_audio_out_window_g3_ParamLimits

0xbd7c,	// (0x0002a345) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0002db0f) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0002db0f) popup_call2_audio_out_window_g

0xbdb7,	// (0x0002a380) popup_call2_audio_out_window_t1_ParamLimits

0xbdb7,	// (0x0002a380) popup_call2_audio_out_window_t1

0xbe16,	// (0x0002a3df) popup_call2_audio_out_window_t2_ParamLimits

0xbe16,	// (0x0002a3df) popup_call2_audio_out_window_t2

0xbe6a,	// (0x0002a433) popup_call2_audio_out_window_t3_ParamLimits

0xbe6a,	// (0x0002a433) popup_call2_audio_out_window_t3

0xbe80,	// (0x0002a449) popup_call2_audio_out_window_t4_ParamLimits

0xbe80,	// (0x0002a449) popup_call2_audio_out_window_t4

0xbe96,	// (0x0002a45f) popup_call2_audio_out_window_t5_ParamLimits

0xbe96,	// (0x0002a45f) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0002db18) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0002db18) popup_call2_audio_out_window_t

0xbefa,	// (0x0002a4c3) bg_popup_call2_in_pane_ParamLimits

0xbefa,	// (0x0002a4c3) bg_popup_call2_in_pane

0xbf56,	// (0x0002a51f) popup_call2_audio_in_window_g1_ParamLimits

0xbf56,	// (0x0002a51f) popup_call2_audio_in_window_g1

0xbf8e,	// (0x0002a557) popup_call2_audio_in_window_g2_ParamLimits

0xbf8e,	// (0x0002a557) popup_call2_audio_in_window_g2

0xbfc6,	// (0x0002a58f) popup_call2_audio_in_window_g3_ParamLimits

0xbfc6,	// (0x0002a58f) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0002db25) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0002db25) popup_call2_audio_in_window_g

0xc01e,	// (0x0002a5e7) popup_call2_audio_in_window_t1_ParamLimits

0xc01e,	// (0x0002a5e7) popup_call2_audio_in_window_t1

0xc09e,	// (0x0002a667) popup_call2_audio_in_window_t2_ParamLimits

0xc09e,	// (0x0002a667) popup_call2_audio_in_window_t2

0xc11e,	// (0x0002a6e7) popup_call2_audio_in_window_t3_ParamLimits

0xc11e,	// (0x0002a6e7) popup_call2_audio_in_window_t3

0xc138,	// (0x0002a701) popup_call2_audio_in_window_t4_ParamLimits

0xc138,	// (0x0002a701) popup_call2_audio_in_window_t4

0xc14a,	// (0x0002a713) popup_call2_audio_in_window_t5_ParamLimits

0xc14a,	// (0x0002a713) popup_call2_audio_in_window_t5

0xc15f,	// (0x0002a728) popup_call2_audio_in_window_t6_ParamLimits

0xc15f,	// (0x0002a728) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0002db2e) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0002db2e) popup_call2_audio_in_window_t

0xa324,	// (0x000288ed) bg_popup_call2_in_pane_g1

0xc278,	// (0x0002a841) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0002db96) popup_cale_lunar_info_window_t

0xa32c,	// (0x000288f5) bg_popup_call2_rect_pane_ParamLimits

0xa32c,	// (0x000288f5) bg_popup_call2_rect_pane

0xa0d1,	// (0x0002869a) call2_cli_visual_graphic_pane

0xa0d1,	// (0x0002869a) call2_cli_visual_text_pane

0x12f2,	// (0x0001f8bb) smil_status_volume_pane_g3

0x0002,

0xa454,	// (0x00028a1d) call2_cli_visual_graphic_pane_g1

0xa454,	// (0x00028a1d) call2_cli_visual_graphic_pane_g2

0xa454,	// (0x00028a1d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0002db3b) call2_cli_visual_graphic_pane_g

0xc174,	// (0x0002a73d) bg_popup_call2_rect_pane_g1

0xa4f2,	// (0x00028abb) bg_popup_call2_rect_pane_g2

0xc17c,	// (0x0002a745) bg_popup_call2_rect_pane_g3

0xc184,	// (0x0002a74d) bg_popup_call2_rect_pane_g4

0xc18c,	// (0x0002a755) bg_popup_call2_rect_pane_g5

0xc194,	// (0x0002a75d) bg_popup_call2_rect_pane_g6

0xc19c,	// (0x0002a765) bg_popup_call2_rect_pane_g7

0xc1a4,	// (0x0002a76d) bg_popup_call2_rect_pane_g8

0xc1ac,	// (0x0002a775) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0002db42) bg_popup_call2_rect_pane_g

0xc1b4,	// (0x0002a77d) bg_popup_call2_bubble_pane_g1

0xc1bc,	// (0x0002a785) bg_popup_call2_bubble_pane_g2

0xc1c4,	// (0x0002a78d) bg_popup_call2_bubble_pane_g3

0xc1cc,	// (0x0002a795) bg_popup_call2_bubble_pane_g4

0xc1d4,	// (0x0002a79d) bg_popup_call2_bubble_pane_g5

0xc1dc,	// (0x0002a7a5) bg_popup_call2_bubble_pane_g6

0xc1e4,	// (0x0002a7ad) bg_popup_call2_bubble_pane_g7

0xc1ec,	// (0x0002a7b5) bg_popup_call2_bubble_pane_g8

0xc1f4,	// (0x0002a7bd) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0002db55) bg_popup_call2_bubble_pane_g

0x29b9,	// (0x00020f82) aid_cale_week_size_cell_pane

0x2ff8,	// (0x000215c1) aid_cams_cif_uncrop_pane_ParamLimits

0x2ff8,	// (0x000215c1) aid_cams_cif_uncrop_pane

0x3155,	// (0x0002171e) aid_cams_size_cell_ParamLimits

0x3155,	// (0x0002171e) aid_cams_size_cell

0x3161,	// (0x0002172a) grid_cams_pane_ParamLimits

0x316f,	// (0x00021738) linegrid_cams_pane_ParamLimits

0x3356,	// (0x0002191f) call_video_pane_t1

0x3373,	// (0x0002193c) call_video_pane_t2

0x0001,

0xf279,	// (0x0002d842) call_video_pane_t

0x383f,	// (0x00021e08) aid_cale_month_size_cell_pane_ParamLimits

0x383f,	// (0x00021e08) aid_cale_month_size_cell_pane

0xf616,	// (0x0002dbdf) smil_status_volume_pane_g

0x12ff,	// (0x0001f8c8) volume_smil_pane_ParamLimits

0x9c6f,	// (0x00028238) aid_popup2_width_pane

0x28f3,	// (0x00020ebc) cell_qdial_pane_g4_ParamLimits

0x28f3,	// (0x00020ebc) cell_qdial_pane_g4

0x4722,	// (0x00022ceb) aid_blid_cardinal_pane_ParamLimits

0x4732,	// (0x00022cfb) aid_blid_destination_pane_ParamLimits

0x4732,	// (0x00022cfb) aid_blid_destination_pane

0xa32c,	// (0x000288f5) bg_popup_call_poc_act_pane_ParamLimits

0xa32c,	// (0x000288f5) bg_popup_call_poc_act_pane

0xa32c,	// (0x000288f5) bg_popup_call_poc_inact_pane_ParamLimits

0xa32c,	// (0x000288f5) bg_popup_call_poc_inact_pane

0xc1fc,	// (0x0002a7c5) bg_popup_call_poc_act_pane_g1

0xc204,	// (0x0002a7cd) bg_popup_call_poc_act_pane_g2

0xc20c,	// (0x0002a7d5) bg_popup_call_poc_act_pane_g3

0xc1cc,	// (0x0002a795) bg_popup_call_poc_act_pane_g4

0xc1d4,	// (0x0002a79d) bg_popup_call_poc_act_pane_g5

0xc214,	// (0x0002a7dd) bg_popup_call_poc_act_pane_g6

0xc1e4,	// (0x0002a7ad) bg_popup_call_poc_act_pane_g7

0xc21c,	// (0x0002a7e5) bg_popup_call_poc_act_pane_g8

0xa0d1,	// (0x0002869a) main_usb_pane

0xc385,	// (0x0002a94e) popup_cale_lunar_info_window

0x368b,	// (0x00021c54) im_reading_pane_t1_ParamLimits

0xa6da,	// (0x00028ca3) list_im_pane_ParamLimits

0xa6eb,	// (0x00028cb4) scroll_pane_cp07_ParamLimits

0xa0d1,	// (0x0002869a) grid_highlight_pane_cp012

0xa32c,	// (0x000288f5) mup_scale_pane_ParamLimits

0xac61,	// (0x0002922a) main_usb_pane_g1_ParamLimits

0xac61,	// (0x0002922a) main_usb_pane_g1

0x5359,	// (0x00023922) main_usb_pane_g2_ParamLimits

0x5359,	// (0x00023922) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0002db7f) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0002db7f) main_usb_pane_g

0x5365,	// (0x0002392e) main_usb_pane_t1_ParamLimits

0x5365,	// (0x0002392e) main_usb_pane_t1

0x5377,	// (0x00023940) main_usb_pane_t2_ParamLimits

0x5377,	// (0x00023940) main_usb_pane_t2

0x5389,	// (0x00023952) main_usb_pane_t3_ParamLimits

0x5389,	// (0x00023952) main_usb_pane_t3

0x539b,	// (0x00023964) main_usb_pane_t4_ParamLimits

0x539b,	// (0x00023964) main_usb_pane_t4

0x53ad,	// (0x00023976) main_usb_pane_t5_ParamLimits

0x53ad,	// (0x00023976) main_usb_pane_t5

0x53bf,	// (0x00023988) main_usb_pane_t6_ParamLimits

0x53bf,	// (0x00023988) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0002db84) main_usb_pane_t_ParamLimits

0x46c1,	// (0x00022c8a) aid_text_placing

0x46cc,	// (0x00022c95) main_location2_pane_t1_ParamLimits

0x46e2,	// (0x00022cab) main_location2_pane_t2_ParamLimits

0x46f8,	// (0x00022cc1) main_location2_pane_t3_ParamLimits

0x470e,	// (0x00022cd7) main_location2_pane_t4_ParamLimits

0x470e,	// (0x00022cd7) main_location2_pane_t4

0xf3da,	// (0x0002d9a3) main_location2_pane_t_ParamLimits

0xa368,	// (0x00028931) find_pinb_pane_g2_ParamLimits

0xa368,	// (0x00028931) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0002d6f1) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0002d6f1) find_pinb_pane_g

0xa374,	// (0x0002893d) find_pinb_pane_t1_ParamLimits

0xa386,	// (0x0002894f) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0002d6f6) find_pinb_pane_t_ParamLimits

0xa0d1,	// (0x0002869a) main_call3_pane

0x3d66,	// (0x0002232f) cale_month_day_heading_pane_t1_ParamLimits

0x3de4,	// (0x000223ad) cale_month_day_heading_pane_t2_ParamLimits

0x3e6d,	// (0x00022436) cale_month_day_heading_pane_t3_ParamLimits

0x3ef6,	// (0x000224bf) cale_month_day_heading_pane_t4_ParamLimits

0x3f7f,	// (0x00022548) cale_month_day_heading_pane_t5_ParamLimits

0x400c,	// (0x000225d5) cale_month_day_heading_pane_t6_ParamLimits

0x409d,	// (0x00022666) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0002d87a) cale_month_day_heading_pane_t_ParamLimits

0x4327,	// (0x000228f0) smil_status_volume_pane

0x4f17,	// (0x000234e0) postcard_address_pane_ParamLimits

0x4f17,	// (0x000234e0) postcard_address_pane

0x4f25,	// (0x000234ee) postcard_message_pane_ParamLimits

0x4f25,	// (0x000234ee) postcard_message_pane

0x532f,	// (0x000238f8) call2_cli_visual_pane_t1_ParamLimits

0x532f,	// (0x000238f8) call2_cli_visual_pane_t1

0x5900,	// (0x00023ec9) postcard_message_pane_t1_ParamLimits

0x5900,	// (0x00023ec9) postcard_message_pane_t1

0x58e9,	// (0x00023eb2) postcard_address_pane_t1_ParamLimits

0x58e9,	// (0x00023eb2) postcard_address_pane_t1

0x58da,	// (0x00023ea3) popup_call3_audio_in_window_ParamLimits

0x58da,	// (0x00023ea3) popup_call3_audio_in_window

0x57b8,	// (0x00023d81) bg_popup_call3_in_pane_ParamLimits

0x57b8,	// (0x00023d81) bg_popup_call3_in_pane

0x5820,	// (0x00023de9) popup_call3_audio_in_window_g1_ParamLimits

0x5820,	// (0x00023de9) popup_call3_audio_in_window_g1

0x5838,	// (0x00023e01) popup_call3_audio_in_window_g2_ParamLimits

0x5838,	// (0x00023e01) popup_call3_audio_in_window_g2

0x5850,	// (0x00023e19) popup_call3_audio_in_window_g3_ParamLimits

0x5850,	// (0x00023e19) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0002dbe6) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0002dbe6) popup_call3_audio_in_window_g

0x5878,	// (0x00023e41) popup_call3_audio_in_window_t1_ParamLimits

0x5878,	// (0x00023e41) popup_call3_audio_in_window_t1

0x58a0,	// (0x00023e69) popup_call3_audio_in_window_t2_ParamLimits

0x58a0,	// (0x00023e69) popup_call3_audio_in_window_t2

0x58c8,	// (0x00023e91) popup_call3_audio_in_window_t3_ParamLimits

0x58c8,	// (0x00023e91) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0002dbef) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0002dbef) popup_call3_audio_in_window_t

0xaf26,	// (0x000294ef) bg_popup_call3_rect_pane

0xc174,	// (0x0002a73d) bg_popup_call3_rect_pane_g1

0xa4f2,	// (0x00028abb) bg_popup_call3_rect_pane_g2

0xc17c,	// (0x0002a745) bg_popup_call3_rect_pane_g3

0xc184,	// (0x0002a74d) bg_popup_call3_rect_pane_g4

0xc18c,	// (0x0002a755) bg_popup_call3_rect_pane_g5

0xc194,	// (0x0002a75d) bg_popup_call3_rect_pane_g6

0xc19c,	// (0x0002a765) bg_popup_call3_rect_pane_g7

0x4b56,	// (0x0002311f) mup_visualizer_osc_pane

0xafe5,	// (0x000295ae) mup_visualizer_spec_pane

0x57d8,	// (0x00023da1) call3_video_qcif_pane_ParamLimits

0x57d8,	// (0x00023da1) call3_video_qcif_pane

0x57ea,	// (0x00023db3) call3_video_qcif_uncrop_pane_ParamLimits

0x57ea,	// (0x00023db3) call3_video_qcif_uncrop_pane

0x57fa,	// (0x00023dc3) call3_video_subqcif_pane_ParamLimits

0x57fa,	// (0x00023dc3) call3_video_subqcif_pane

0x580e,	// (0x00023dd7) call3_video_subqcif_uncrop_pane_ParamLimits

0x580e,	// (0x00023dd7) call3_video_subqcif_uncrop_pane

0x5868,	// (0x00023e31) popup_call3_audio_in_window_g4_ParamLimits

0x5868,	// (0x00023e31) popup_call3_audio_in_window_g4

0x57a7,	// (0x00023d70) mup_spec_half_pane

0x57b0,	// (0x00023d79) mup_spec_half_pane_cp

0xc420,	// (0x0002a9e9) mup_osc_middle_pane

0xc429,	// (0x0002a9f2) mup_visualizer_osc_pane_g1

0x5787,	// (0x00023d50) mup_spec_bar_pane_ParamLimits

0x5787,	// (0x00023d50) mup_spec_bar_pane

0xc40d,	// (0x0002a9d6) mup_spec_bar_pane_g1

0xc417,	// (0x0002a9e0) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0002dbda) mup_spec_bar_pane_g

0x29b9,	// (0x00020f82) aid_cale_week_size_cell_pane_ParamLimits

0x29d3,	// (0x00020f9c) bg_cale_heading_pane_ParamLimits

0xa526,	// (0x00028aef) bg_cale_pane_cp01_ParamLimits

0x29fc,	// (0x00020fc5) cale_week_corner_pane_ParamLimits

0x2a1b,	// (0x00020fe4) cale_week_day_heading_pane_ParamLimits

0x2a49,	// (0x00021012) cale_week_scroll_pane_g1_ParamLimits

0x2a6d,	// (0x00021036) cale_week_scroll_pane_g2_ParamLimits

0x2a85,	// (0x0002104e) cale_week_scroll_pane_g3_ParamLimits

0x2a9d,	// (0x00021066) cale_week_scroll_pane_g4_ParamLimits

0x2ab5,	// (0x0002107e) cale_week_scroll_pane_g5_ParamLimits

0x2acd,	// (0x00021096) cale_week_scroll_pane_g6_ParamLimits

0x2ae9,	// (0x000210b2) cale_week_scroll_pane_g7_ParamLimits

0x2b05,	// (0x000210ce) cale_week_scroll_pane_g8_ParamLimits

0x2b21,	// (0x000210ea) cale_week_scroll_pane_g9_ParamLimits

0x2b3e,	// (0x00021107) cale_week_scroll_pane_g10_ParamLimits

0x2b5b,	// (0x00021124) cale_week_scroll_pane_g11_ParamLimits

0x2b78,	// (0x00021141) cale_week_scroll_pane_g12_ParamLimits

0x2b95,	// (0x0002115e) cale_week_scroll_pane_g13_ParamLimits

0x2bb2,	// (0x0002117b) cale_week_scroll_pane_g14_ParamLimits

0x2bdb,	// (0x000211a4) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0002d782) cale_week_scroll_pane_g_ParamLimits

0x2c04,	// (0x000211cd) cale_week_time_pane_ParamLimits

0x2c20,	// (0x000211e9) grid_cale_week_pane_ParamLimits

0xa544,	// (0x00028b0d) listscroll_cale_week_pane_t1

0xa556,	// (0x00028b1f) scroll_pane_cp08_ParamLimits

0x38ac,	// (0x00021e75) cale_month_corner_pane_ParamLimits

0xa90b,	// (0x00028ed4) cale_month_pane_t1

0x3d04,	// (0x000222cd) cale_month_week_pane_ParamLimits

0xac61,	// (0x0002922a) popup_call_status_window_g1_ParamLimits

0x4539,	// (0x00022b02) popup_call_status_window_g2_ParamLimits

0x4545,	// (0x00022b0e) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0002d92a) popup_call_status_window_g_ParamLimits

0xacc8,	// (0x00029291) aid_call2_pane

0x4dfe,	// (0x000233c7) msg_header_pane_g1

0x4f17,	// (0x000234e0) postcard_address2_pane_ParamLimits

0x4f17,	// (0x000234e0) postcard_address2_pane

0x4f25,	// (0x000234ee) postcard_message2_pane_ParamLimits

0x4f25,	// (0x000234ee) postcard_message2_pane

0x572e,	// (0x00023cf7) message2_row_pane_ParamLimits

0x572e,	// (0x00023cf7) message2_row_pane

0x5748,	// (0x00023d11) address2_row_pane_ParamLimits

0x5748,	// (0x00023d11) address2_row_pane

0xc3db,	// (0x0002a9a4) postcard_message2_row_pane_g1

0xc3e3,	// (0x0002a9ac) postcard_message2_row_pane_t1

0xc3db,	// (0x0002a9a4) address2_row_pane_g1

0xc3e3,	// (0x0002a9ac) address2_row_pane_t1

0x1133,	// (0x0001f6fc) aid_size_cell_vorec

0xa0d1,	// (0x0002869a) main_rss_pane

0x575b,	// (0x00023d24) rss_list_single_pane_ParamLimits

0x575b,	// (0x00023d24) rss_list_single_pane

0xc3f1,	// (0x0002a9ba) rss_list_single_pane_t1

0xc3ff,	// (0x0002a9c8) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0002dbd5) rss_list_single_pane_t

0xa0d1,	// (0x0002869a) main_camera2_pane

0xa0d1,	// (0x0002869a) main_video2_pane

0x135f,	// (0x0001f928) cams_zoom_pane_cp2_ParamLimits

0x135f,	// (0x0001f928) cams_zoom_pane_cp2

0x136b,	// (0x0001f934) image2_vga_pane_ParamLimits

0x136b,	// (0x0001f934) image2_vga_pane

0x137a,	// (0x0001f943) main_camera2_pane_g1_ParamLimits

0x137a,	// (0x0001f943) main_camera2_pane_g1

0x1386,	// (0x0001f94f) main_camera2_pane_g2_ParamLimits

0x1386,	// (0x0001f94f) main_camera2_pane_g2

0x1392,	// (0x0001f95b) main_camera2_pane_g3_ParamLimits

0x1392,	// (0x0001f95b) main_camera2_pane_g3

0x139e,	// (0x0001f967) main_camera2_pane_g4_ParamLimits

0x139e,	// (0x0001f967) main_camera2_pane_g4

0x13aa,	// (0x0001f973) main_camera2_pane_g5_ParamLimits

0x13aa,	// (0x0001f973) main_camera2_pane_g5

0x13b6,	// (0x0001f97f) main_camera2_pane_g6_ParamLimits

0x13b6,	// (0x0001f97f) main_camera2_pane_g6

0x13c2,	// (0x0001f98b) main_camera2_pane_g7_ParamLimits

0x13c2,	// (0x0001f98b) main_camera2_pane_g7

0x13ce,	// (0x0001f997) main_camera2_pane_g8_ParamLimits

0x13ce,	// (0x0001f997) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0002dbf6) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0002dbf6) main_camera2_pane_g

0x13e6,	// (0x0001f9af) main_camera2_pane_t1_ParamLimits

0x13e6,	// (0x0001f9af) main_camera2_pane_t1

0x13f8,	// (0x0001f9c1) main_camera2_pane_t2_ParamLimits

0x13f8,	// (0x0001f9c1) main_camera2_pane_t2

0x140a,	// (0x0001f9d3) main_camera2_pane_t3_ParamLimits

0x140a,	// (0x0001f9d3) main_camera2_pane_t3

0x141c,	// (0x0001f9e5) main_camera2_pane_t4_ParamLimits

0x141c,	// (0x0001f9e5) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0002dc09) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0002dc09) main_camera2_pane_t

0x1479,	// (0x0001fa42) cams_zoom_pane_cp4_ParamLimits

0x1479,	// (0x0001fa42) cams_zoom_pane_cp4

0x1489,	// (0x0001fa52) image2_cif_pane_ParamLimits

0x1489,	// (0x0001fa52) image2_cif_pane

0x149e,	// (0x0001fa67) image2_subqcif_pane_ParamLimits

0x149e,	// (0x0001fa67) image2_subqcif_pane

0x14ad,	// (0x0001fa76) main_video2_pane_g1_ParamLimits

0x14ad,	// (0x0001fa76) main_video2_pane_g1

0x14bf,	// (0x0001fa88) main_video2_pane_g2_ParamLimits

0x14bf,	// (0x0001fa88) main_video2_pane_g2

0x14cf,	// (0x0001fa98) main_video2_pane_g3_ParamLimits

0x14cf,	// (0x0001fa98) main_video2_pane_g3

0x14df,	// (0x0001faa8) main_video2_pane_g4_ParamLimits

0x14df,	// (0x0001faa8) main_video2_pane_g4

0x14ef,	// (0x0001fab8) main_video2_pane_g5_ParamLimits

0x14ef,	// (0x0001fab8) main_video2_pane_g5

0x14ff,	// (0x0001fac8) main_video2_pane_g6_ParamLimits

0x14ff,	// (0x0001fac8) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0002dc18) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0002dc18) main_video2_pane_g

0x1511,	// (0x0001fada) main_video2_pane_t1_ParamLimits

0x1511,	// (0x0001fada) main_video2_pane_t1

0x152b,	// (0x0001faf4) main_video2_pane_t2_ParamLimits

0x152b,	// (0x0001faf4) main_video2_pane_t2

0x1551,	// (0x0001fb1a) main_video2_pane_t3_ParamLimits

0x1551,	// (0x0001fb1a) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0002dc25) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0002dc25) main_video2_pane_t

0x5476,	// (0x00023a3f) call_muted_g2

0x0001,

0xf5fe,	// (0x0002dbc7) call_muted_g

0xa0d1,	// (0x0002869a) main_mup2_pane

0xc460,	// (0x0002aa29) main_mup2_pane_g1_ParamLimits

0xc460,	// (0x0002aa29) main_mup2_pane_g1

0x591b,	// (0x00023ee4) main_mup2_pane_g2_ParamLimits

0x591b,	// (0x00023ee4) main_mup2_pane_g2

0x15a0,	// (0x0001fb69) main_mup_pane_g13_cp1

0x15a8,	// (0x0001fb71) mup_volume_pane_cp1

0x593d,	// (0x00023f06) main_mup2_pane_g4_ParamLimits

0x593d,	// (0x00023f06) main_mup2_pane_g4

0x5952,	// (0x00023f1b) main_mup2_pane_g5_ParamLimits

0x5952,	// (0x00023f1b) main_mup2_pane_g5

0x5967,	// (0x00023f30) main_mup2_pane_g6_ParamLimits

0x5967,	// (0x00023f30) main_mup2_pane_g6

0x597c,	// (0x00023f45) main_mup2_pane_g7_ParamLimits

0x597c,	// (0x00023f45) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0002dc2c) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0002dc2c) main_mup2_pane_g

0x5998,	// (0x00023f61) main_mup2_pane_t1_ParamLimits

0x5998,	// (0x00023f61) main_mup2_pane_t1

0x59af,	// (0x00023f78) main_mup2_pane_t2_ParamLimits

0x59af,	// (0x00023f78) main_mup2_pane_t2

0x59c6,	// (0x00023f8f) main_mup2_pane_t3_ParamLimits

0x59c6,	// (0x00023f8f) main_mup2_pane_t3

0x59dd,	// (0x00023fa6) main_mup2_pane_t4_ParamLimits

0x59dd,	// (0x00023fa6) main_mup2_pane_t4

0x59f7,	// (0x00023fc0) main_mup2_pane_t5_ParamLimits

0x59f7,	// (0x00023fc0) main_mup2_pane_t5

0x5a11,	// (0x00023fda) main_mup2_pane_t6_ParamLimits

0x5a11,	// (0x00023fda) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0002dc3b) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0002dc3b) main_mup2_pane_t

0x5a49,	// (0x00024012) mup2_visualizer_pane_ParamLimits

0x5a49,	// (0x00024012) mup2_visualizer_pane

0x5a7f,	// (0x00024048) mup_progress_pane_cp_ParamLimits

0x5a7f,	// (0x00024048) mup_progress_pane_cp

0x158b,	// (0x0001fb54) mup_volume_pane_cp_ParamLimits

0x158b,	// (0x0001fb54) mup_volume_pane_cp

0x5a98,	// (0x00024061) mup2_visualizer_pane_g1_ParamLimits

0x5a98,	// (0x00024061) mup2_visualizer_pane_g1

0xc46c,	// (0x0002aa35) mup2_visualizer_pane_g2_ParamLimits

0xc46c,	// (0x0002aa35) mup2_visualizer_pane_g2

0x5aad,	// (0x00024076) mup2_visualizer_pane_g3_ParamLimits

0x5aad,	// (0x00024076) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0002dc48) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0002dc48) mup2_visualizer_pane_g

0xb255,	// (0x0002981e) aid_size_cell_fmradio

0x558c,	// (0x00023b55) aid_height_parent_landcape

0xa769,	// (0x00028d32) wml_content_pane_cp

0xa771,	// (0x00028d3a) wml_tabs_pane

0xa77a,	// (0x00028d43) popup_wml_miniature_window

0xa782,	// (0x00028d4b) scroll_pane_cp021

0xa796,	// (0x00028d5f) wml_content_pane_comp8

0xa0d1,	// (0x0002869a) bg_popup_sub_pane_cp05

0xc48a,	// (0x0002aa53) popup_wml_miniature_window_g1

0xc492,	// (0x0002aa5b) wml_miniature_view_pane

0x5abb,	// (0x00024084) aid_size_wml_view

0x5ac3,	// (0x0002408c) wml_miniature_view_pane_g1

0x5acc,	// (0x00024095) wml_miniature_view_pane_g2

0x5ad5,	// (0x0002409e) wml_miniature_view_pane_g3

0x5add,	// (0x000240a6) wml_miniature_view_pane_g4

0x5ae5,	// (0x000240ae) wml_miniature_view_pane_g5

0x5aed,	// (0x000240b6) wml_miniature_view_pane_g6

0x5af5,	// (0x000240be) wml_miniature_view_pane_g7

0x5afd,	// (0x000240c6) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0002dc4f) wml_miniature_view_pane_g

0xc460,	// (0x0002aa29) background_graphic_ParamLimits

0xc460,	// (0x0002aa29) background_graphic

0xc49a,	// (0x0002aa63) wml_tabs_2_pane

0xc4a3,	// (0x0002aa6c) wml_tabs_3_pane_ParamLimits

0xc4a3,	// (0x0002aa6c) wml_tabs_3_pane

0xc4b5,	// (0x0002aa7e) wml_tabs_4_pane_ParamLimits

0xc4b5,	// (0x0002aa7e) wml_tabs_4_pane

0xc4cb,	// (0x0002aa94) wml_tabs_5_pane_ParamLimits

0xc4cb,	// (0x0002aa94) wml_tabs_5_pane

0xc4e5,	// (0x0002aaae) wml_tabs_pane_g2_ParamLimits

0xc4e5,	// (0x0002aaae) wml_tabs_pane_g2

0xc4f9,	// (0x0002aac2) wml_tabs_pane_g3_ParamLimits

0xc4f9,	// (0x0002aac2) wml_tabs_pane_g3

0x5b05,	// (0x000240ce) wml_tabs_2_active_pane_ParamLimits

0x5b05,	// (0x000240ce) wml_tabs_2_active_pane

0x5b17,	// (0x000240e0) wml_tabs_2_passive_pane_ParamLimits

0x5b17,	// (0x000240e0) wml_tabs_2_passive_pane

0x5b29,	// (0x000240f2) wml_tabs_3_active_pane_cp_ParamLimits

0x5b29,	// (0x000240f2) wml_tabs_3_active_pane_cp

0x5b3c,	// (0x00024105) wml_tabs_3_passive_pane_ParamLimits

0x5b3c,	// (0x00024105) wml_tabs_3_passive_pane

0x5b4d,	// (0x00024116) wml_tabs_3_passive_pane_cp_ParamLimits

0x5b4d,	// (0x00024116) wml_tabs_3_passive_pane_cp

0x5b62,	// (0x0002412b) tabs_4_active_pane

0x5b6a,	// (0x00024133) tabs_4_passive_pane

0x5b72,	// (0x0002413b) tabs_4_passive_pane_cp

0x5b7a,	// (0x00024143) tabs_4_passive_pane_cp2

0x5351,	// (0x0002391a) aid_height_text

0x4b1f,	// (0x000230e8) mup_volume_cont_pane_ParamLimits

0x4b1f,	// (0x000230e8) mup_volume_cont_pane

0x26b0,	// (0x00020c79) aid_size_cell_pinb

0x26ba,	// (0x00020c83) aid_size_list_pinb

0x5a68,	// (0x00024031) mup2_volume_cont_pane_ParamLimits

0x5a68,	// (0x00024031) mup2_volume_cont_pane

0x1577,	// (0x0001fb40) mup2_volume_cont_pane_g1_ParamLimits

0x1577,	// (0x0001fb40) mup2_volume_cont_pane_g1

0x2334,	// (0x000208fd) aid_size_cell_touch_ParamLimits

0x2334,	// (0x000208fd) aid_size_cell_touch

0x259a,	// (0x00020b63) touch_pane_ParamLimits

0x259a,	// (0x00020b63) touch_pane

0x9c5d,	// (0x00028226) main_rss2_pane

0xc516,	// (0x0002aadf) listscroll_rss2_pane

0xc51f,	// (0x0002aae8) rss2_navigation_pane

0xc527,	// (0x0002aaf0) list_rss2_pane

0xadec,	// (0x000293b5) scroll_pane_cp22

0xc52f,	// (0x0002aaf8) rss2_navigation_pane_g1

0xc538,	// (0x0002ab01) rss2_navigation_pane_g2

0xc540,	// (0x0002ab09) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0002dc60) rss2_navigation_pane_g

0xc548,	// (0x0002ab11) rss2_navigation_pane_t1

0x5b84,	// (0x0002414d) rss2_list_single_pane_ParamLimits

0x5b84,	// (0x0002414d) rss2_list_single_pane

0xc556,	// (0x0002ab1f) rss2_list_single_pane_t2

0xc564,	// (0x0002ab2d) rss2_list_single_pane_t3_ParamLimits

0xc564,	// (0x0002ab2d) rss2_list_single_pane_t3

0xc581,	// (0x0002ab4a) rss2_list_single_pane_t4

0x4311,	// (0x000228da) smil_status_pane_g1

0xa415,	// (0x000289de) main_image2_pane_ParamLimits

0xa415,	// (0x000289de) main_image2_pane

0x13da,	// (0x0001f9a3) main_camera2_pane_g9_ParamLimits

0x13da,	// (0x0001f9a3) main_camera2_pane_g9

0x142e,	// (0x0001f9f7) main_camera2_pane_t5_ParamLimits

0x142e,	// (0x0001f9f7) main_camera2_pane_t5

0x1440,	// (0x0001fa09) main_camera2_pane_t6_ParamLimits

0x1440,	// (0x0001fa09) main_camera2_pane_t6

0x5ba7,	// (0x00024170) main_image2_pane_g1_ParamLimits

0x5ba7,	// (0x00024170) main_image2_pane_g1

0x50ee,	// (0x000236b7) smil2_video_pane_ParamLimits

0x50ee,	// (0x000236b7) smil2_video_pane

0x9c7b,	// (0x00028244) aid_zoom_text_primary_cp

0x9cb4,	// (0x0002827d) popup_preview_fixed_window

0xa6d2,	// (0x00028c9b) im_reading_pane_g1

0x1324,	// (0x0001f8ed) cams2_bc_adjust_pane_cp_ParamLimits

0x1324,	// (0x0001f8ed) cams2_bc_adjust_pane_cp

0x146b,	// (0x0001fa34) cams2_bc_adjust_pane_ParamLimits

0x146b,	// (0x0001fa34) cams2_bc_adjust_pane

0xd787,	// (0x0002bd50) cams2_bc_adjust_pane_g1

0x15b0,	// (0x0001fb79) cams2_slider_pane

0x15b9,	// (0x0001fb82) cams2_slider_pane_g1

0x15c2,	// (0x0001fb8b) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0002dc67) cams2_slider_pane_g

0x0d6e,	// (0x0001f337) calc_display_pane_ParamLimits

0x0d8c,	// (0x0001f355) calc_paper_pane_ParamLimits

0x0da8,	// (0x0001f371) grid_calc_pane_ParamLimits

0x1251,	// (0x0001f81a) popup_clock_digital_window_t1_ParamLimits

0xb1f2,	// (0x000297bb) main_image_pane_t1

0x0d54,	// (0x0001f31d) aid_size_cell_calc_ParamLimits

0x0d54,	// (0x0001f31d) aid_size_cell_calc

0x55be,	// (0x00023b87) popup_blid_sat_info2_window_ParamLimits

0x55be,	// (0x00023b87) popup_blid_sat_info2_window

0xc597,	// (0x0002ab60) aid_size_cell_blid

0xc59f,	// (0x0002ab68) bg_popup_window_pane_cp07

0xc5c2,	// (0x0002ab8b) grid_popup_blid_pane

0xc5cc,	// (0x0002ab95) heading_pane_cp05_ParamLimits

0xc5cc,	// (0x0002ab95) heading_pane_cp05

0xc696,	// (0x0002ac5f) cell_popup_blid_pane_ParamLimits

0xc696,	// (0x0002ac5f) cell_popup_blid_pane

0xc6c0,	// (0x0002ac89) cell_popup_blid_pane_g1

0xc6c8,	// (0x0002ac91) cell_popup_blid_pane_t1

0x5a2e,	// (0x00023ff7) mup2_indicator_pane_ParamLimits

0x5a2e,	// (0x00023ff7) mup2_indicator_pane

0xaf26,	// (0x000294ef) mup2_visualizer_osc_pane

0xc478,	// (0x0002aa41) mup2_visualizer_spec_pane_ParamLimits

0xc478,	// (0x0002aa41) mup2_visualizer_spec_pane

0x5bb3,	// (0x0002417c) mup2_spec_half_pane

0x5bbc,	// (0x00024185) mup2_spec_half_pane_cp

0x5bc6,	// (0x0002418f) mup2_spec_bar_pane_ParamLimits

0x5bc6,	// (0x0002418f) mup2_spec_bar_pane

0xc40d,	// (0x0002a9d6) mup2_spec_bar_pane_g1

0xc417,	// (0x0002a9e0) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0002dbda) mup2_spec_bar_pane_g

0x5be5,	// (0x000241ae) mup2_osc_middle_pane

0xc429,	// (0x0002a9f2) mup2_visualizer_osc_pane_g1

0x9cde,	// (0x000282a7) popup_number_entry_window_t1_ParamLimits

0x9cf1,	// (0x000282ba) popup_number_entry_window_t2_ParamLimits

0x9d03,	// (0x000282cc) popup_number_entry_window_t3_ParamLimits

0x25f1,	// (0x00020bba) popup_number_entry_window_t5_ParamLimits

0x25f1,	// (0x00020bba) popup_number_entry_window_t5

0xf0d3,	// (0x0002d69c) popup_number_entry_window_t_ParamLimits

0x9d15,	// (0x000282de) text_title_cp2_ParamLimits

0x1290,	// (0x0001f859) aid_hotspot_pointer_text2_pane

0x12e6,	// (0x0001f8af) main_viewer_pane_g9_ParamLimits

0x12e6,	// (0x0001f8af) main_viewer_pane_g9

0xa90b,	// (0x00028ed4) cale_month_pane_t1_ParamLimits

0xa931,	// (0x00028efa) bg_cale_pane_ParamLimits

0xa949,	// (0x00028f12) list_cale_pane_ParamLimits

0xa95a,	// (0x00028f23) listscroll_cale_day_pane_t1

0xa96c,	// (0x00028f35) scroll_pane_cp09_ParamLimits

0x4b5e,	// (0x00023127) main_mup_eq_pane_t1_ParamLimits

0x4b5e,	// (0x00023127) main_mup_eq_pane_t1

0x4b7a,	// (0x00023143) main_mup_eq_pane_t2_ParamLimits

0x4b7a,	// (0x00023143) main_mup_eq_pane_t2

0x4b96,	// (0x0002315f) main_mup_eq_pane_t3_ParamLimits

0x4b96,	// (0x0002315f) main_mup_eq_pane_t3

0x4bb0,	// (0x00023179) main_mup_eq_pane_t4_ParamLimits

0x4bb0,	// (0x00023179) main_mup_eq_pane_t4

0x4bca,	// (0x00023193) main_mup_eq_pane_t5_ParamLimits

0x4bca,	// (0x00023193) main_mup_eq_pane_t5

0x4be4,	// (0x000231ad) main_mup_eq_pane_t6_ParamLimits

0x4be4,	// (0x000231ad) main_mup_eq_pane_t6

0x4bfa,	// (0x000231c3) main_mup_eq_pane_t7_ParamLimits

0x4bfa,	// (0x000231c3) main_mup_eq_pane_t7

0x4c10,	// (0x000231d9) main_mup_eq_pane_t8_ParamLimits

0x4c10,	// (0x000231d9) main_mup_eq_pane_t8

0x4c26,	// (0x000231ef) main_mup_eq_pane_t9_ParamLimits

0x4c26,	// (0x000231ef) main_mup_eq_pane_t9

0x4c42,	// (0x0002320b) main_mup_eq_pane_t10_ParamLimits

0x4c42,	// (0x0002320b) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0002da29) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0002da29) main_mup_eq_pane_t

0x4d07,	// (0x000232d0) mup_equalizer_pane_cp5_ParamLimits

0x4d1f,	// (0x000232e8) mup_equalizer_pane_cp6_ParamLimits

0x4d37,	// (0x00023300) mup_equalizer_pane_cp7_ParamLimits

0x9c5d,	// (0x00028226) main_gallery_pane

0xc432,	// (0x0002a9fb) smil2_volume_pane

0xc43a,	// (0x0002aa03) smil_status_volume_pane_g1_ParamLimits

0xc44d,	// (0x0002aa16) smil_status_volume_pane_g2_ParamLimits

0x12f2,	// (0x0001f8bb) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0002dbdf) smil_status_volume_pane_g_ParamLimits

0xc59f,	// (0x0002ab68) bg_popup_window_pane_cp07_ParamLimits

0xc5ad,	// (0x0002ab76) blid_firmament_pane

0x5bee,	// (0x000241b7) aid_size_cell_gallery_ParamLimits

0x5bee,	// (0x000241b7) aid_size_cell_gallery

0x5bfc,	// (0x000241c5) grid_gallery_pane_ParamLimits

0x5bfc,	// (0x000241c5) grid_gallery_pane

0x5c0c,	// (0x000241d5) cell_gallery_pane_ParamLimits

0x5c0c,	// (0x000241d5) cell_gallery_pane

0xc6d6,	// (0x0002ac9f) bg_cell_gallery_focus_pane_ParamLimits

0xc6d6,	// (0x0002ac9f) bg_cell_gallery_focus_pane

0xc6e8,	// (0x0002acb1) cell_gallery_pane_g1_ParamLimits

0xc6e8,	// (0x0002acb1) cell_gallery_pane_g1

0x5c52,	// (0x0002421b) cell_gallery_pane_g2_ParamLimits

0x5c52,	// (0x0002421b) cell_gallery_pane_g2

0x5c5f,	// (0x00024228) cell_gallery_pane_g3_ParamLimits

0x5c5f,	// (0x00024228) cell_gallery_pane_g3

0xc6f4,	// (0x0002acbd) cell_gallery_pane_g4_ParamLimits

0xc6f4,	// (0x0002acbd) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0002dc8d) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0002dc8d) cell_gallery_pane_g

0xc700,	// (0x0002acc9) bg_cell_gallery_focus_pane_g1

0xc708,	// (0x0002acd1) bg_cell_gallery_focus_pane_g2

0xc710,	// (0x0002acd9) bg_cell_gallery_focus_pane_g3

0xc718,	// (0x0002ace1) bg_cell_gallery_focus_pane_g4

0xc720,	// (0x0002ace9) bg_cell_gallery_focus_pane_g5

0xc728,	// (0x0002acf1) bg_cell_gallery_focus_pane_g6

0xc730,	// (0x0002acf9) bg_cell_gallery_focus_pane_g7

0xc738,	// (0x0002ad01) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0002dc96) bg_cell_gallery_focus_pane_g

0xc740,	// (0x0002ad09) aid_firma_cardinal

0xc754,	// (0x0002ad1d) blid_firmament_pane_t1

0xc76b,	// (0x0002ad34) blid_firmament_pane_t2

0xc782,	// (0x0002ad4b) blid_firmament_pane_t3

0xc799,	// (0x0002ad62) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0002dca7) blid_firmament_pane_t

0xc7b0,	// (0x0002ad79) blid_sat_info_pane

0xc7c0,	// (0x0002ad89) blid_sat_info_pane_g1

0xc7c0,	// (0x0002ad89) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0002dcb0) blid_sat_info_pane_g

0xc7ca,	// (0x0002ad93) blid_sat_info_pane_t1

0xc7d8,	// (0x0002ada1) smil2_volume_content_pane

0xc7e1,	// (0x0002adaa) smil2_volume_pane_g1

0xc7e9,	// (0x0002adb2) smil2_volume_content_pane_g1

0xc7f2,	// (0x0002adbb) smil2_volume_content_pane_g2

0xc7fb,	// (0x0002adc4) smil2_volume_content_pane_g3

0xc804,	// (0x0002adcd) smil2_volume_content_pane_g4

0xc80d,	// (0x0002add6) smil2_volume_content_pane_g5

0xc816,	// (0x0002addf) smil2_volume_content_pane_g6

0xc81f,	// (0x0002ade8) smil2_volume_content_pane_g7

0xc828,	// (0x0002adf1) smil2_volume_content_pane_g8

0xc831,	// (0x0002adfa) smil2_volume_content_pane_g9

0xc83a,	// (0x0002ae03) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0002dcb5) smil2_volume_content_pane_g

0x2ccf,	// (0x00021298) cale_week_day_heading_pane_t1_ParamLimits

0x2d15,	// (0x000212de) cale_week_day_heading_pane_t2_ParamLimits

0x2d60,	// (0x00021329) cale_week_day_heading_pane_t3_ParamLimits

0x2dab,	// (0x00021374) cale_week_day_heading_pane_t4_ParamLimits

0x2df6,	// (0x000213bf) cale_week_day_heading_pane_t5_ParamLimits

0x2e41,	// (0x0002140a) cale_week_day_heading_pane_t6_ParamLimits

0x2e8c,	// (0x00021455) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0002d7a1) cale_week_day_heading_pane_t_ParamLimits

0xa578,	// (0x00028b41) bg_cale_side_pane_ParamLimits

0x0f0d,	// (0x0001f4d6) cale_week_time_pane_t1_ParamLimits

0x0f51,	// (0x0001f51a) cale_week_time_pane_t2_ParamLimits

0x0f95,	// (0x0001f55e) cale_week_time_pane_t3_ParamLimits

0x0fd9,	// (0x0001f5a2) cale_week_time_pane_t4_ParamLimits

0x101d,	// (0x0001f5e6) cale_week_time_pane_t5_ParamLimits

0x1061,	// (0x0001f62a) cale_week_time_pane_t6_ParamLimits

0x10a5,	// (0x0001f66e) cale_week_time_pane_t7_ParamLimits

0x10e9,	// (0x0001f6b2) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0002d7b0) cale_week_time_pane_t_ParamLimits

0x2ed2,	// (0x0002149b) cell_cale_week_pane_g2_ParamLimits

0xa578,	// (0x00028b41) bg_cale_side_pane_cp01_ParamLimits

0x412e,	// (0x000226f7) cale_month_week_pane_t1_ParamLimits

0x4147,	// (0x00022710) cale_month_week_pane_t2_ParamLimits

0x4160,	// (0x00022729) cale_month_week_pane_t3_ParamLimits

0x4179,	// (0x00022742) cale_month_week_pane_t4_ParamLimits

0x4192,	// (0x0002275b) cale_month_week_pane_t5_ParamLimits

0x41ad,	// (0x00022776) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0002d889) cale_month_week_pane_t_ParamLimits

0x11b1,	// (0x0001f77a) cell_cale_month_pane_g1_ParamLimits

0x9c5d,	// (0x00028226) main_cale_event_viewer_pane

0x9c5d,	// (0x00028226) listscroll_cale_event_viewer_pane

0xc843,	// (0x0002ae0c) list_cale_ev_pane

0xc84b,	// (0x0002ae14) scroll_pane_cp023

0x5c6c,	// (0x00024235) field_cale_ev_pane_ParamLimits

0x5c6c,	// (0x00024235) field_cale_ev_pane

0xc857,	// (0x0002ae20) field_cale_ev_content_pane_ParamLimits

0xc857,	// (0x0002ae20) field_cale_ev_content_pane

0xc863,	// (0x0002ae2c) field_cale_ev_pane_g1_ParamLimits

0xc863,	// (0x0002ae2c) field_cale_ev_pane_g1

0xc86f,	// (0x0002ae38) field_cale_ev_pane_g2_ParamLimits

0xc86f,	// (0x0002ae38) field_cale_ev_pane_g2

0xc887,	// (0x0002ae50) field_cale_ev_pane_g3_ParamLimits

0xc887,	// (0x0002ae50) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0002dcca) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0002dcca) field_cale_ev_pane_g

0xc89f,	// (0x0002ae68) field_cale_ev_pane_t1_ParamLimits

0xc89f,	// (0x0002ae68) field_cale_ev_pane_t1

0x5c90,	// (0x00024259) field_cale_ev_content_pane_t1_ParamLimits

0x5c90,	// (0x00024259) field_cale_ev_content_pane_t1

0x4df3,	// (0x000233bc) bg_button_pane_cp01

0x299b,	// (0x00020f64) listscroll_cale_week_pane_ParamLimits

0x29af,	// (0x00020f78) popup_toolbar_window_cp01

0xa544,	// (0x00028b0d) listscroll_cale_week_pane_t1_ParamLimits

0x299b,	// (0x00020f64) listscroll_cale_day_pane_ParamLimits

0x29af,	// (0x00020f78) popup_toolbar_window_cp02

0xa95a,	// (0x00028f23) listscroll_cale_day_pane_t1_ParamLimits

0x299b,	// (0x00020f64) main_cale_month_pane_ParamLimits

0x56a2,	// (0x00023c6b) popup_toolbar_window_cp03_ParamLimits

0x56a2,	// (0x00023c6b) popup_toolbar_window_cp03

0x4ffe,	// (0x000235c7) main_image_pane_g2_ParamLimits

0x4ffe,	// (0x000235c7) main_image_pane_g2

0x500a,	// (0x000235d3) main_image_pane_g3_ParamLimits

0x500a,	// (0x000235d3) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0002dabb) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0002dabb) main_image_pane_g

0xb1f2,	// (0x000297bb) main_image_pane_t1_ParamLimits

0x5016,	// (0x000235df) main_image_pane_t2_ParamLimits

0x5016,	// (0x000235df) main_image_pane_t2

0x5028,	// (0x000235f1) main_image_pane_t3_ParamLimits

0x5028,	// (0x000235f1) main_image_pane_t3

0x503a,	// (0x00023603) main_image_pane_t4_ParamLimits

0x503a,	// (0x00023603) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0002dac2) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0002dac2) main_image_pane_t

0x504c,	// (0x00023615) popup_image_details_window_cp01

0x5056,	// (0x0002361f) popup_toobar_trans_pane_cp01_ParamLimits

0x5056,	// (0x0002361f) popup_toobar_trans_pane_cp01

0x5613,	// (0x00023bdc) popup_image_details_window_ParamLimits

0x5613,	// (0x00023bdc) popup_image_details_window

0xc391,	// (0x0002a95a) popup_image_focus_window

0x1316,	// (0x0001f8df) camera2_autofocus_pane_ParamLimits

0x1316,	// (0x0001f8df) camera2_autofocus_pane

0x9c5d,	// (0x00028226) bg_popup_sub_pane_cp06

0xc8b6,	// (0x0002ae7f) popup_image_focus_window_g1

0xc8be,	// (0x0002ae87) popup_image_focus_window_g2

0xc8c6,	// (0x0002ae8f) popup_image_focus_window_g3

0xc8ce,	// (0x0002ae97) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0002dcd1) popup_image_focus_window_g

0xc8d6,	// (0x0002ae9f) popup_image_focus_window_t1

0xc8e4,	// (0x0002aead) popup_image_focus_window_t2

0xc8f4,	// (0x0002aebd) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0002dcda) popup_image_focus_window_t

0xc902,	// (0x0002aecb) camera2_autofocus_pane_g1

0xa415,	// (0x000289de) bg_tb_trans_pane_cp01

0xc910,	// (0x0002aed9) popup_image_details_window_g1

0xc923,	// (0x0002aeec) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0002dcec) popup_image_details_window_g

0xc94c,	// (0x0002af15) popup_image_details_window_t1

0xc95e,	// (0x0002af27) popup_image_details_window_t2

0xc977,	// (0x0002af40) popup_image_details_window_t3

0xc98b,	// (0x0002af54) popup_image_details_window_t4

0xc9a6,	// (0x0002af6f) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0002dcf3) popup_image_details_window_t

0xa3dd,	// (0x000289a6) bg_calc_paper_pane_ParamLimits

0x0dd4,	// (0x0001f39d) grid_highlight_pane_cp013

0x0dde,	// (0x0001f3a7) list_calc_pane_ParamLimits

0x0df0,	// (0x0001f3b9) scroll_pane_cp024

0xa3f1,	// (0x000289ba) bg_calc_display_pane_ParamLimits

0x0df8,	// (0x0001f3c1) calc_display_pane_t1_ParamLimits

0x0e0d,	// (0x0001f3d6) calc_display_pane_t2_ParamLimits

0x0e22,	// (0x0001f3eb) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0002d723) calc_display_pane_t_ParamLimits

0x0e8d,	// (0x0001f456) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0002d740) cell_calc_pane_g

0x0e96,	// (0x0001f45f) cell_calc_pane_t1

0xa45e,	// (0x00028a27) grid_highlight_pane_cp02_ParamLimits

0xa474,	// (0x00028a3d) toolbar_button_pane_cp01_ParamLimits

0xa474,	// (0x00028a3d) toolbar_button_pane_cp01

0xb237,	// (0x00029800) temp_image_control_pane_ParamLimits

0xb237,	// (0x00029800) temp_image_control_pane

0xa415,	// (0x000289de) main_mp3_pane

0xc9c0,	// (0x0002af89) temp_image_control_pane_g1_ParamLimits

0xc9c0,	// (0x0002af89) temp_image_control_pane_g1

0xc9ce,	// (0x0002af97) temp_image_control_pane_g2_ParamLimits

0xc9ce,	// (0x0002af97) temp_image_control_pane_g2

0xc9e0,	// (0x0002afa9) temp_image_control_pane_g3_ParamLimits

0xc9e0,	// (0x0002afa9) temp_image_control_pane_g3

0x5cdb,	// (0x000242a4) temp_image_control_pane_g4_ParamLimits

0x5cdb,	// (0x000242a4) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0002dcfe) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0002dcfe) temp_image_control_pane_g

0xc9c0,	// (0x0002af89) main_mp3_pane_g1

0x5cec,	// (0x000242b5) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0002dd07) main_mp3_pane_g

0xca23,	// (0x0002afec) main_mp3_pane_t1

0xa5dd,	// (0x00028ba6) main_camera_pane_g8_ParamLimits

0xa5dd,	// (0x00028ba6) main_camera_pane_g8

0x310b,	// (0x000216d4) main_video_pane_g7_ParamLimits

0x310b,	// (0x000216d4) main_video_pane_g7

0x1459,	// (0x0001fa22) main_camera2_pane_t7_ParamLimits

0x1459,	// (0x0001fa22) main_camera2_pane_t7

0xa729,	// (0x00028cf2) scroll_pane_cp025_ParamLimits

0xa729,	// (0x00028cf2) scroll_pane_cp025

0xa73d,	// (0x00028d06) scroll_pane_cp026_ParamLimits

0xa73d,	// (0x00028d06) scroll_pane_cp026

0xa74c,	// (0x00028d15) wml_content_pane_ParamLimits

0x9c5d,	// (0x00028226) main_touch_calib_pane

0x5d90,	// (0x00024359) main_touch_calib_pane_g1

0x5d9c,	// (0x00024365) main_touch_calib_pane_g2

0x5da8,	// (0x00024371) main_touch_calib_pane_g3

0x5db4,	// (0x0002437d) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0002dd25) main_touch_calib_pane_g

0x5dc0,	// (0x00024389) main_touch_calib_pane_t1

0x5dd7,	// (0x000243a0) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0002dd2e) main_touch_calib_pane_t

0xae67,	// (0x00029430) mup_progress_pane_cp02

0xae86,	// (0x0002944f) navi_pane_g1

0xaee8,	// (0x000294b1) navi_pane_mp_t3

0xa415,	// (0x000289de) main_mp3_pane_ParamLimits

0x56e4,	// (0x00023cad) navi_pane_ParamLimits

0xc9c0,	// (0x0002af89) main_mp3_pane_g1_ParamLimits

0x5cec,	// (0x000242b5) main_mp3_pane_g2_ParamLimits

0x5cf8,	// (0x000242c1) main_mp3_pane_g3_ParamLimits

0x5cf8,	// (0x000242c1) main_mp3_pane_g3

0x5d04,	// (0x000242cd) main_mp3_pane_g4_ParamLimits

0x5d04,	// (0x000242cd) main_mp3_pane_g4

0xc9f0,	// (0x0002afb9) main_mp3_pane_g5_ParamLimits

0xc9f0,	// (0x0002afb9) main_mp3_pane_g5

0xc9fe,	// (0x0002afc7) main_mp3_pane_g6_ParamLimits

0xc9fe,	// (0x0002afc7) main_mp3_pane_g6

0xca0b,	// (0x0002afd4) main_mp3_pane_g7_ParamLimits

0xca0b,	// (0x0002afd4) main_mp3_pane_g7

0xca17,	// (0x0002afe0) main_mp3_pane_g8_ParamLimits

0xca17,	// (0x0002afe0) main_mp3_pane_g8

0xf73e,	// (0x0002dd07) main_mp3_pane_g_ParamLimits

0x5d10,	// (0x000242d9) main_mp3_pane_t2

0x5d20,	// (0x000242e9) main_mp3_pane_t3

0xca31,	// (0x0002affa) main_mp3_pane_t4

0xca3f,	// (0x0002b008) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0002dd18) main_mp3_pane_t

0xca4d,	// (0x0002b016) mup_progress_pane_cp01

0x9c7b,	// (0x00028244) aid_zoom_text_secondary2

0xc843,	// (0x0002ae0c) list_cale_ev2_pane

0xc84b,	// (0x0002ae14) scroll_pane_cp023_ParamLimits

0x5e32,	// (0x000243fb) field_cale_ev2_pane_ParamLimits

0x5e32,	// (0x000243fb) field_cale_ev2_pane

0x5e4d,	// (0x00024416) field_cale_ev2_pane_g1_ParamLimits

0x5e4d,	// (0x00024416) field_cale_ev2_pane_g1

0x5e59,	// (0x00024422) field_cale_ev2_pane_g2_ParamLimits

0x5e59,	// (0x00024422) field_cale_ev2_pane_g2

0x5e71,	// (0x0002443a) field_cale_ev2_pane_g3_ParamLimits

0x5e71,	// (0x0002443a) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0002dd39) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0002dd39) field_cale_ev2_pane_g

0x5e89,	// (0x00024452) field_cale_ev2_pane_t1_ParamLimits

0x5e89,	// (0x00024452) field_cale_ev2_pane_t1

0x5ea0,	// (0x00024469) field_cale_ev2_pane_t2_ParamLimits

0x5ea0,	// (0x00024469) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0002dd42) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0002dd42) field_cale_ev2_pane_t

0x4edd,	// (0x000234a6) main_postcard_pane_g5_ParamLimits

0x4edd,	// (0x000234a6) main_postcard_pane_g5

0x4eeb,	// (0x000234b4) main_postcard_pane_g6_ParamLimits

0x4eeb,	// (0x000234b4) main_postcard_pane_g6

0x2f49,	// (0x00021512) camera2_autofocus_pane_cp_ParamLimits

0x2f49,	// (0x00021512) camera2_autofocus_pane_cp

0xa415,	// (0x000289de) main_mup3_pane

0x5ed5,	// (0x0002449e) main_mup3_pane_g1_ParamLimits

0x5ed5,	// (0x0002449e) main_mup3_pane_g1

0x5ef6,	// (0x000244bf) main_mup3_pane_g2_ParamLimits

0x5ef6,	// (0x000244bf) main_mup3_pane_g2

0x5f72,	// (0x0002453b) main_mup3_pane_g3_ParamLimits

0x5f72,	// (0x0002453b) main_mup3_pane_g3

0x5fb7,	// (0x00024580) main_mup3_pane_g4_ParamLimits

0x5fb7,	// (0x00024580) main_mup3_pane_g4

0x5ffa,	// (0x000245c3) main_mup3_pane_g5_ParamLimits

0x5ffa,	// (0x000245c3) main_mup3_pane_g5

0x603f,	// (0x00024608) main_mup3_pane_g6_ParamLimits

0x603f,	// (0x00024608) main_mup3_pane_g6

0xca61,	// (0x0002b02a) main_mup3_pane_g7_ParamLimits

0xca61,	// (0x0002b02a) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0002dd52) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0002dd52) main_mup3_pane_g

0x60b5,	// (0x0002467e) main_mup3_pane_t1_ParamLimits

0x60b5,	// (0x0002467e) main_mup3_pane_t1

0x611e,	// (0x000246e7) main_mup3_pane_t2_ParamLimits

0x611e,	// (0x000246e7) main_mup3_pane_t2

0x61e7,	// (0x000247b0) main_mup3_pane_t4_ParamLimits

0x61e7,	// (0x000247b0) main_mup3_pane_t4

0x623b,	// (0x00024804) main_mup3_pane_t5_ParamLimits

0x623b,	// (0x00024804) main_mup3_pane_t5

0x62e9,	// (0x000248b2) main_mup3_pane_t6_ParamLimits

0x62e9,	// (0x000248b2) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0002dd63) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0002dd63) main_mup3_pane_t

0x6395,	// (0x0002495e) mup3_progress_pane_ParamLimits

0x6395,	// (0x0002495e) mup3_progress_pane

0x640f,	// (0x000249d8) popup_mup3_control_window_ParamLimits

0x640f,	// (0x000249d8) popup_mup3_control_window

0xca6f,	// (0x0002b038) popup_mup3_text_window

0x642c,	// (0x000249f5) mup3_progress_pane_t1

0x644b,	// (0x00024a14) mup3_progress_pane_t2

0xca77,	// (0x0002b040) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0002dd70) mup3_progress_pane_t

0xca94,	// (0x0002b05d) mup_progress_pane_cp03

0x9c5d,	// (0x00028226) bg_tb_trans_pane_cp04

0x646a,	// (0x00024a33) mup3_volume_pane

0x6472,	// (0x00024a3b) popup_mup3_control_window_g1

0xd21f,	// (0x0002b7e8) mup3_volume_pane_g1

0xd228,	// (0x0002b7f1) mup3_volume_pane_g2

0xd231,	// (0x0002b7fa) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0002dd77) mup3_volume_pane_g

0x9c5d,	// (0x00028226) bg_tb_trans_pane_cp03

0xcaa4,	// (0x0002b06d) popup_mup3_text_window_g1

0xcaac,	// (0x0002b075) popup_mup3_text_window_t1

0xa447,	// (0x00028a10) list_calc_item_pane_g1_ParamLimits

0xc50d,	// (0x0002aad6) mup_volume_pane_cp_g1

0x5df0,	// (0x000243b9) main_touch_calib_pane_t3

0x5e06,	// (0x000243cf) main_touch_calib_pane_t4

0x5e1c,	// (0x000243e5) main_touch_calib_pane_t5

0x9c67,	// (0x00028230) aid_cell_size_toolbar2

0x9c6f,	// (0x00028238) aid_popup3_width_pane

0x9c7b,	// (0x00028244) aid_zoom_text_msg_primary

0x119b,	// (0x0001f764) vorec_t7

0xa3fd,	// (0x000289c6) bg_calc_paper_pane_g1_ParamLimits

0xa423,	// (0x000289ec) bg_calc_paper_pane_g2_ParamLimits

0xa409,	// (0x000289d2) bg_calc_paper_pane_g3_ParamLimits

0xa42f,	// (0x000289f8) bg_calc_paper_pane_g4_ParamLimits

0xa43b,	// (0x00028a04) bg_calc_paper_pane_g5_ParamLimits

0x286c,	// (0x00020e35) bg_calc_paper_pane_g6_ParamLimits

0x287d,	// (0x00020e46) bg_calc_paper_pane_g7_ParamLimits

0x288e,	// (0x00020e57) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0002d72a) bg_calc_paper_pane_g_ParamLimits

0x28a1,	// (0x00020e6a) calc_bg_paper_pane_g9_ParamLimits

0x303a,	// (0x00021603) image_qvga_pane_ParamLimits

0x303a,	// (0x00021603) image_qvga_pane

0xa32c,	// (0x000288f5) bg_popup_sub_pane_cp04_ParamLimits

0xb16e,	// (0x00029737) popup_mup_playback_window_g1_ParamLimits

0xb17a,	// (0x00029743) popup_mup_playback_window_t1_ParamLimits

0xb18f,	// (0x00029758) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0002dab6) popup_mup_playback_window_t_ParamLimits

0x592c,	// (0x00023ef5) main_mup2_pane_g3_ParamLimits

0x592c,	// (0x00023ef5) main_mup2_pane_g3

0x33fc,	// (0x000219c5) popup_toolbar_window_cp04

0xb575,	// (0x00029b3e) popup_call2_audio_second_window_g3_ParamLimits

0xb575,	// (0x00029b3e) popup_call2_audio_second_window_g3

0xb97f,	// (0x00029f48) popup_call2_audio_first_window_g4_ParamLimits

0xb97f,	// (0x00029f48) popup_call2_audio_first_window_g4

0xbffe,	// (0x0002a5c7) popup_call2_audio_in_window_g4_ParamLimits

0xbffe,	// (0x0002a5c7) popup_call2_audio_in_window_g4

0x4ff1,	// (0x000235ba) aid_area_sk_bg_cut_ParamLimits

0x4ff1,	// (0x000235ba) aid_area_sk_bg_cut

0xb1a4,	// (0x0002976d) aid_area_sk_bg_cut_2_ParamLimits

0xb1a4,	// (0x0002976d) aid_area_sk_bg_cut_2

0x5c42,	// (0x0002420b) aid_placing_details_win

0x5c4a,	// (0x00024213) aid_placing_details_win_2

0xc902,	// (0x0002aecb) camera2_autofocus_pane_g1_ParamLimits

0x253a,	// (0x00020b03) popup_fixed_preview_cale_window_ParamLimits

0x253a,	// (0x00020b03) popup_fixed_preview_cale_window

0xaf37,	// (0x00029500) navi_slider_pane_g3

0xaf40,	// (0x00029509) navi_slider_pane_g4

0xaf49,	// (0x00029512) navi_slider_pane_g5

0xaf37,	// (0x00029500) navi_slider_pane_g6

0x1277,	// (0x0001f840) navi_slider_pane_g7

0xb05e,	// (0x00029627) mup_scale_pane_g3

0xb067,	// (0x00029630) mup_scale_pane_g4

0xb070,	// (0x00029639) mup_scale_pane_g5

0x4d4f,	// (0x00023318) mup_scale_pane_g6

0x4d58,	// (0x00023321) mup_scale_pane_g7

0xaf37,	// (0x00029500) cams2_slider_pane_g3

0xc58f,	// (0x0002ab58) cams2_slider_pane_g4

0x15cb,	// (0x0001fb94) cams2_slider_pane_g5

0xaf37,	// (0x00029500) cams2_slider_pane_g6

0x15d3,	// (0x0001fb9c) cams2_slider_pane_g7

0xc7c0,	// (0x0002ad89) camera2_autofocus_pane_cp_g1

0xc363,	// (0x0002a92c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc363,	// (0x0002a92c) bg_popup_preview_window_pane_cp02

0xcaba,	// (0x0002b083) list_fp_cale_pane_ParamLimits

0xcaba,	// (0x0002b083) list_fp_cale_pane

0xcac6,	// (0x0002b08f) popup_fixed_preview_cale_window_t1_ParamLimits

0xcac6,	// (0x0002b08f) popup_fixed_preview_cale_window_t1

0x647b,	// (0x00024a44) popup_fixed_preview_cale_window_t2_ParamLimits

0x647b,	// (0x00024a44) popup_fixed_preview_cale_window_t2

0x6490,	// (0x00024a59) popup_fixed_preview_cale_window_t3_ParamLimits

0x6490,	// (0x00024a59) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0002dd7e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0002dd7e) popup_fixed_preview_cale_window_t

0x64a5,	// (0x00024a6e) list_single_fp_cale_pane_ParamLimits

0x64a5,	// (0x00024a6e) list_single_fp_cale_pane

0xcae4,	// (0x0002b0ad) list_single_fp_cale_pane_g1_ParamLimits

0xcae4,	// (0x0002b0ad) list_single_fp_cale_pane_g1

0xcaf0,	// (0x0002b0b9) list_single_fp_cale_pane_g2_ParamLimits

0xcaf0,	// (0x0002b0b9) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0002dd85) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0002dd85) list_single_fp_cale_pane_g

0xcb09,	// (0x0002b0d2) list_single_fp_cale_pane_t1_ParamLimits

0xcb09,	// (0x0002b0d2) list_single_fp_cale_pane_t1

0xcb1b,	// (0x0002b0e4) list_single_fp_cale_pane_t2_ParamLimits

0xcb1b,	// (0x0002b0e4) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0002dd8c) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0002dd8c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c5d,	// (0x00028226) main_dialer_pane

0x64b5,	// (0x00024a7e) aid_cell_size_keypad

0x64bf,	// (0x00024a88) dialer_ne_pane

0x64c9,	// (0x00024a92) grid_dialer_command_1_pane

0x64d1,	// (0x00024a9a) grid_dialer_command_2_pane

0x64d9,	// (0x00024aa2) grid_dialer_keypad_pane

0x64ed,	// (0x00024ab6) bg_popup_call_pane_cp06_ParamLimits

0x64ed,	// (0x00024ab6) bg_popup_call_pane_cp06

0x64f9,	// (0x00024ac2) dialer_ne_clear_pane_ParamLimits

0x64f9,	// (0x00024ac2) dialer_ne_clear_pane

0xcb4e,	// (0x0002b117) dialer_ne_pane_g1

0xcb56,	// (0x0002b11f) dialer_ne_pane_t1_ParamLimits

0xcb56,	// (0x0002b11f) dialer_ne_pane_t1

0x6505,	// (0x00024ace) dialer_ne_pane_t2_ParamLimits

0x6505,	// (0x00024ace) dialer_ne_pane_t2

0x6522,	// (0x00024aeb) dialer_ne_pane_t3_ParamLimits

0x6522,	// (0x00024aeb) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0002dd91) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0002dd91) dialer_ne_pane_t

0x6546,	// (0x00024b0f) dialer_ne_pane_t3_copy1_ParamLimits

0x6546,	// (0x00024b0f) dialer_ne_pane_t3_copy1

0x656a,	// (0x00024b33) cell_dialer_keypad_pane_ParamLimits

0x656a,	// (0x00024b33) cell_dialer_keypad_pane

0x6581,	// (0x00024b4a) cell_dialer_command_1_pane_ParamLimits

0x6581,	// (0x00024b4a) cell_dialer_command_1_pane

0x6597,	// (0x00024b60) cell_dialer_command_2_pane_ParamLimits

0x6597,	// (0x00024b60) cell_dialer_command_2_pane

0xcb68,	// (0x0002b131) bg_button_pane_cp02_ParamLimits

0xcb68,	// (0x0002b131) bg_button_pane_cp02

0x65a6,	// (0x00024b6f) cell_dialer_keypad_pane_g1_ParamLimits

0x65a6,	// (0x00024b6f) cell_dialer_keypad_pane_g1

0xcb68,	// (0x0002b131) bg_button_pane_cp03_ParamLimits

0xcb68,	// (0x0002b131) bg_button_pane_cp03

0x65bb,	// (0x00024b84) cell_dialer_command_1_pane_g1_ParamLimits

0x65bb,	// (0x00024b84) cell_dialer_command_1_pane_g1

0xcb74,	// (0x0002b13d) bg_button_pane_cp04

0x65cf,	// (0x00024b98) cell_dialer_command_2_pane_g1

0xaf26,	// (0x000294ef) bg_button_pane_cp06

0xcb7c,	// (0x0002b145) dialer_ne_clear_pane_g1

0x4819,	// (0x00022de2) navi_pane_g2

0x4847,	// (0x00022e10) navi_pane_g3

0x0002,

0xf3f0,	// (0x0002d9b9) navi_pane_g

0x4872,	// (0x00022e3b) navi_pane_mv_g2

0x4899,	// (0x00022e62) navi_pane_mv_g5

0x48a1,	// (0x00022e6a) navi_pane_mv_t1

0xa3f1,	// (0x000289ba) main_clock2_pane

0x660d,	// (0x00024bd6) main_clock2_list_pane_ParamLimits

0x660d,	// (0x00024bd6) main_clock2_list_pane

0x6637,	// (0x00024c00) main_clock2_pane_t1_ParamLimits

0x6637,	// (0x00024c00) main_clock2_pane_t1

0x6659,	// (0x00024c22) main_clock2_pane_t2_ParamLimits

0x6659,	// (0x00024c22) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0002dd98) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0002dd98) main_clock2_pane_t

0x66b6,	// (0x00024c7f) popup_clock_analogue_window_cp03_ParamLimits

0x66b6,	// (0x00024c7f) popup_clock_analogue_window_cp03

0x66d6,	// (0x00024c9f) popup_clock_digital_window_cp02_ParamLimits

0x66d6,	// (0x00024c9f) popup_clock_digital_window_cp02

0x6747,	// (0x00024d10) main_clock2_list_single_pane_ParamLimits

0x6747,	// (0x00024d10) main_clock2_list_single_pane

0xaf26,	// (0x000294ef) list_highlight_pane_cp05

0xcb98,	// (0x0002b161) main_clock2_list_single_pane_t1

0x33fc,	// (0x000219c5) popup_toolbar_window_cp04_ParamLimits

0x5cab,	// (0x00024274) camera2_autofocus_pane_g2_ParamLimits

0x5cab,	// (0x00024274) camera2_autofocus_pane_g2

0x5cb7,	// (0x00024280) camera2_autofocus_pane_g3_ParamLimits

0x5cb7,	// (0x00024280) camera2_autofocus_pane_g3

0x5cc3,	// (0x0002428c) camera2_autofocus_pane_g4_ParamLimits

0x5cc3,	// (0x0002428c) camera2_autofocus_pane_g4

0x5ccf,	// (0x00024298) camera2_autofocus_pane_g5_ParamLimits

0x5ccf,	// (0x00024298) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0002dce1) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0002dce1) camera2_autofocus_pane_g

0x5eb5,	// (0x0002447e) camera2_autofocus_pane_cp_g2

0x5ebd,	// (0x00024486) camera2_autofocus_pane_cp_g3

0x5ec5,	// (0x0002448e) camera2_autofocus_pane_cp_g4

0x5ecd,	// (0x00024496) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0002dd47) camera2_autofocus_pane_cp_g

0x64e5,	// (0x00024aae) popup_dialer_spcha_window

0x9c5d,	// (0x00028226) bg_popup_sub_pane_cp07

0xcba6,	// (0x0002b16f) list_spcha_pane

0xcbae,	// (0x0002b177) list_single_spcha_pane_ParamLimits

0xcbae,	// (0x0002b177) list_single_spcha_pane

0x9c5d,	// (0x00028226) list_highlight_pane_cp06

0xcbbf,	// (0x0002b188) list_single_spcha_pane_t1

0xbda8,	// (0x0002a371) popup_call2_audio_out_window_g4_ParamLimits

0xbda8,	// (0x0002a371) popup_call2_audio_out_window_g4

0x9c5d,	// (0x00028226) main_imed2_pane

0xc39b,	// (0x0002a964) popup_imed_adjust2_window

0x5621,	// (0x00023bea) popup_imed_trans_window_ParamLimits

0x5621,	// (0x00023bea) popup_imed_trans_window

0xc5f8,	// (0x0002abc1) popup_blid_sat_info2_window_t1

0xc606,	// (0x0002abcf) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0002dc76) popup_blid_sat_info2_window_t

0x6779,	// (0x00024d42) aid_size_cell_colour_35

0x6793,	// (0x00024d5c) aid_size_cell_colour_112

0x67aa,	// (0x00024d73) aid_size_cell_effect

0xa415,	// (0x000289de) bg_tb_trans_pane_cp02

0xab37,	// (0x00029100) heading_imed_pane

0x67c4,	// (0x00024d8d) listscroll_imed_pane

0xcbcd,	// (0x0002b196) heading_imed_pane_g1

0xcbd5,	// (0x0002b19e) heading_imed_pane_t1

0xcbe3,	// (0x0002b1ac) grid_imed_colour_35_pane_ParamLimits

0xcbe3,	// (0x0002b1ac) grid_imed_colour_35_pane

0x67d0,	// (0x00024d99) grid_imed_effect_pane

0xcbff,	// (0x0002b1c8) list_imed_aspect_pane

0x67e0,	// (0x00024da9) scroll_pane_cp027_ParamLimits

0x67e0,	// (0x00024da9) scroll_pane_cp027

0x67ec,	// (0x00024db5) cell_imed_effect_pane_ParamLimits

0x67ec,	// (0x00024db5) cell_imed_effect_pane

0xcc07,	// (0x0002b1d0) cell_imed_colour_pane_ParamLimits

0xcc07,	// (0x0002b1d0) cell_imed_colour_pane

0xcc51,	// (0x0002b21a) cell_imed_colour_pane_g1_ParamLimits

0xcc51,	// (0x0002b21a) cell_imed_colour_pane_g1

0xcc62,	// (0x0002b22b) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc62,	// (0x0002b22b) hgihlgiht_grid_pane_cp016

0x6808,	// (0x00024dd1) cell_imed_effect_pane_g1

0x6810,	// (0x00024dd9) grid_highlight_pane_cp017

0xcc73,	// (0x0002b23c) list_imed_single_pane_ParamLimits

0xcc73,	// (0x0002b23c) list_imed_single_pane

0x9c5d,	// (0x00028226) list_highlight_pane_cp07

0xcc87,	// (0x0002b250) list_imed_aspect_pane_comp1_t1

0xc36f,	// (0x0002a938) bg_tb_trans_pane_cp05

0xcca9,	// (0x0002b272) popup_imed_adjust2_window_g1

0xccd0,	// (0x0002b299) popup_imed_adjust2_window_t1

0xcce8,	// (0x0002b2b1) slider_imed_adjust_pane

0xccfc,	// (0x0002b2c5) slider_imed_adjust_pane_g1

0xcd0c,	// (0x0002b2d5) slider_imed_adjust_pane_g2

0xcd1c,	// (0x0002b2e5) slider_imed_adjust_pane_g3

0xcd2d,	// (0x0002b2f6) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0002ddb5) slider_imed_adjust_pane_g

0x6819,	// (0x00024de2) aid_size_cell_clipart2

0x6825,	// (0x00024dee) grid_imed_clipart_pane

0xcd3e,	// (0x0002b307) scroll_pane_cp031

0x682f,	// (0x00024df8) cell_imed_clipart_pane_ParamLimits

0x682f,	// (0x00024df8) cell_imed_clipart_pane

0x684d,	// (0x00024e16) cell_imed_clipart_pane_g1

0x9c5d,	// (0x00028226) grid_highlight_pane_cp014

0x6619,	// (0x00024be2) main_clock2_pane_g1_ParamLimits

0x6619,	// (0x00024be2) main_clock2_pane_g1

0x66f2,	// (0x00024cbb) aid_call2_pane_cp10

0x6704,	// (0x00024ccd) aid_call_pane_cp10

0xae5b,	// (0x00029424) popup_clock_analogue_window_cp10_g1

0xae5b,	// (0x00029424) popup_clock_analogue_window_cp10_g2

0x6716,	// (0x00024cdf) popup_clock_analogue_window_cp10_g3

0x6716,	// (0x00024cdf) popup_clock_analogue_window_cp10_g4

0xae5b,	// (0x00029424) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0002dda3) popup_clock_analogue_window_cp10_g

0x6728,	// (0x00024cf1) popup_clock_analogue_window_cp10_t1

0x15dc,	// (0x0001fba5) clock_digital_number_pane_cp10_ParamLimits

0x15dc,	// (0x0001fba5) clock_digital_number_pane_cp10

0x15f4,	// (0x0001fbbd) clock_digital_number_pane_cp11_ParamLimits

0x15f4,	// (0x0001fbbd) clock_digital_number_pane_cp11

0x160c,	// (0x0001fbd5) clock_digital_number_pane_cp12_ParamLimits

0x160c,	// (0x0001fbd5) clock_digital_number_pane_cp12

0x1624,	// (0x0001fbed) clock_digital_number_pane_cp13_ParamLimits

0x1624,	// (0x0001fbed) clock_digital_number_pane_cp13

0x163c,	// (0x0001fc05) clock_digital_separator_pane_cp10_ParamLimits

0x163c,	// (0x0001fc05) clock_digital_separator_pane_cp10

0x6759,	// (0x00024d22) popup_clock_digital_window_cp02_t1_ParamLimits

0x6759,	// (0x00024d22) popup_clock_digital_window_cp02_t1

0xa324,	// (0x000288ed) clock_digital_number_pane_cp10_g1

0xa324,	// (0x000288ed) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0002ddbe) clock_digital_number_pane_cp10_g

0xa324,	// (0x000288ed) clock_digital_separator_pane_cp10_g1

0xa324,	// (0x000288ed) clock_digital_separator_pane_g2_cp10

0xaef6,	// (0x000294bf) navi_pane_vded_g4

0xaeff,	// (0x000294c8) navi_pane_vded_g5

0xaf08,	// (0x000294d1) navi_pane_vded_t1

0x9c5d,	// (0x00028226) main_vded_pane

0x6856,	// (0x00024e1f) main_vded_pane_g1

0x6862,	// (0x00024e2b) main_vded_pane_g2

0x686c,	// (0x00024e35) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0002ddc3) main_vded_pane_g

0x6876,	// (0x00024e3f) main_vded_pane_t1

0x6884,	// (0x00024e4d) main_vded_pane_t2

0x0001,

0xf801,	// (0x0002ddca) main_vded_pane_t

0x6892,	// (0x00024e5b) vded_slider_pane

0x689c,	// (0x00024e65) vded_video_pane

0xcd46,	// (0x0002b30f) vded_video_pane_g1

0x68a8,	// (0x00024e71) vded_video_pane_g2

0xc7c0,	// (0x0002ad89) vded_video_pane_g3

0x0002,

0xf806,	// (0x0002ddcf) vded_video_pane_g

0xcd50,	// (0x0002b319) vded_slider_pane_g1

0xc50d,	// (0x0002aad6) vded_slider_pane_g2

0xcd59,	// (0x0002b322) vded_slider_pane_g3

0xcd62,	// (0x0002b32b) vded_slider_pane_g4

0xcd6b,	// (0x0002b334) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0002ddd6) vded_slider_pane_g

0x6403,	// (0x000249cc) mup3_rocker_pane_ParamLimits

0x6403,	// (0x000249cc) mup3_rocker_pane

0x68b1,	// (0x00024e7a) mup3_control_keys_pane_g1

0x68b9,	// (0x00024e82) mup3_control_keys_pane_g2

0x68c1,	// (0x00024e8a) mup3_control_keys_pane_g3

0x68c9,	// (0x00024e92) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0002dde1) mup3_control_keys_pane_g

0x2558,	// (0x00020b21) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2558,	// (0x00020b21) popup_toolbar2_fixed_window_cp01

0x641f,	// (0x000249e8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x641f,	// (0x000249e8) popup_toolbar2_fixed_window_cp02

0xb6e7,	// (0x00029cb0) popup_call2_audio_second_window_t4_ParamLimits

0xb6e7,	// (0x00029cb0) popup_call2_audio_second_window_t4

0xbc15,	// (0x0002a1de) popup_call2_audio_first_window_t6_ParamLimits

0xbc15,	// (0x0002a1de) popup_call2_audio_first_window_t6

0xbeab,	// (0x0002a474) popup_call2_audio_out_window_t6_ParamLimits

0xbeab,	// (0x0002a474) popup_call2_audio_out_window_t6

0x9c5d,	// (0x00028226) main_vitu_pane

0x68d9,	// (0x00024ea2) aid_size_cell_itu_ParamLimits

0x68d9,	// (0x00024ea2) aid_size_cell_itu

0x2580,	// (0x00020b49) bg_popup_window_pane_cp08_ParamLimits

0x2580,	// (0x00020b49) bg_popup_window_pane_cp08

0x68e7,	// (0x00024eb0) field_vitu_entry_pane_ParamLimits

0x68e7,	// (0x00024eb0) field_vitu_entry_pane

0x68f6,	// (0x00024ebf) grid_vitu_function_pane_ParamLimits

0x68f6,	// (0x00024ebf) grid_vitu_function_pane

0x6906,	// (0x00024ecf) grid_vitu_itu_pane_ParamLimits

0x6906,	// (0x00024ecf) grid_vitu_itu_pane

0x6916,	// (0x00024edf) cell_vitu_itu_pane_ParamLimits

0x6916,	// (0x00024edf) cell_vitu_itu_pane

0x692d,	// (0x00024ef6) cell_vitu_function_pane_ParamLimits

0x692d,	// (0x00024ef6) cell_vitu_function_pane

0xa415,	// (0x000289de) bg_popup_sub_pane_cp08_ParamLimits

0xa415,	// (0x000289de) bg_popup_sub_pane_cp08

0x6941,	// (0x00024f0a) field_vitu_entry_pane_t1_ParamLimits

0x6941,	// (0x00024f0a) field_vitu_entry_pane_t1

0xcd8c,	// (0x0002b355) field_vitu_entry_pane_t2_ParamLimits

0xcd8c,	// (0x0002b355) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0002ddef) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0002ddef) field_vitu_entry_pane_t

0xcda9,	// (0x0002b372) bg_button_pane_cp05_ParamLimits

0xcda9,	// (0x0002b372) bg_button_pane_cp05

0x695b,	// (0x00024f24) cell_vitu_itu_pane_g1

0x6973,	// (0x00024f3c) cell_vitu_itu_pane_t1_ParamLimits

0x6973,	// (0x00024f3c) cell_vitu_itu_pane_t1

0x6985,	// (0x00024f4e) cell_vitu_itu_pane_t2_ParamLimits

0x6985,	// (0x00024f4e) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0002ddf4) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0002ddf4) cell_vitu_itu_pane_t

0xcdb7,	// (0x0002b380) bg_button_pane_cp07

0x69c8,	// (0x00024f91) cell_vitu_function_pane_g1

0x0dcc,	// (0x0001f395) main_calc_pane_g1

0x235c,	// (0x00020925) aid_visual_content_pane

0x9c5d,	// (0x00028226) main_vradio_pane

0x69d1,	// (0x00024f9a) main_vradio_pane_g1_ParamLimits

0x69d1,	// (0x00024f9a) main_vradio_pane_g1

0xcdc1,	// (0x0002b38a) main_vradio_pane_g2_ParamLimits

0xcdc1,	// (0x0002b38a) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0002ddfb) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0002ddfb) main_vradio_pane_g

0x69df,	// (0x00024fa8) main_vradio_pane_t1_ParamLimits

0x69df,	// (0x00024fa8) main_vradio_pane_t1

0x69f1,	// (0x00024fba) main_vradio_pane_t2_ParamLimits

0x69f1,	// (0x00024fba) main_vradio_pane_t2

0xcdce,	// (0x0002b397) main_vradio_pane_t3_ParamLimits

0xcdce,	// (0x0002b397) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0002de00) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0002de00) main_vradio_pane_t

0x6a03,	// (0x00024fcc) vradio_rocker_control_pane_ParamLimits

0x6a03,	// (0x00024fcc) vradio_rocker_control_pane

0x6a0f,	// (0x00024fd8) vradio_station_info_pane_ParamLimits

0x6a0f,	// (0x00024fd8) vradio_station_info_pane

0xcde2,	// (0x0002b3ab) vradio_frequency_info_pane_ParamLimits

0xcde2,	// (0x0002b3ab) vradio_frequency_info_pane

0xc7c0,	// (0x0002ad89) vradio_station_info_pane_g1

0xcdf1,	// (0x0002b3ba) vradio_station_info_pane_t1_ParamLimits

0xcdf1,	// (0x0002b3ba) vradio_station_info_pane_t1

0xce13,	// (0x0002b3dc) vradio_station_info_pane_t2_ParamLimits

0xce13,	// (0x0002b3dc) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0002de07) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0002de07) vradio_station_info_pane_t

0xce25,	// (0x0002b3ee) vradio_tuning_pane

0xce2d,	// (0x0002b3f6) vradio_rocker_control_pane_g1

0xce35,	// (0x0002b3fe) vradio_rocker_control_pane_g2

0xce3d,	// (0x0002b406) vradio_rocker_control_pane_g3

0xce45,	// (0x0002b40e) vradio_rocker_control_pane_g4

0xce4d,	// (0x0002b416) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0002de0c) vradio_rocker_control_pane_g

0x6a1c,	// (0x00024fe5) vradio_frequency_info_pane_g1

0xce55,	// (0x0002b41e) vradio_frequency_info_pane_t1_ParamLimits

0xce55,	// (0x0002b41e) vradio_frequency_info_pane_t1

0x6a26,	// (0x00024fef) vradio_tuning_pane_g1

0x6a31,	// (0x00024ffa) vradio_tuning_pane_t1

0x9c8b,	// (0x00028254) area_side_right_pane_ParamLimits

0x9c8b,	// (0x00028254) area_side_right_pane

0xc32a,	// (0x0002a8f3) status_small_pane_g1

0xc332,	// (0x0002a8fb) status_small_pane_g2

0xc33b,	// (0x0002a904) status_small_pane_g3

0xc344,	// (0x0002a90d) status_small_pane_g4

0x0003,

0xf603,	// (0x0002dbcc) status_small_pane_g

0xc34d,	// (0x0002a916) status_small_pane_t1

0x9c5d,	// (0x00028226) main_video3_pane

0xce69,	// (0x0002b432) cams_zoom_vslider_pane

0xce71,	// (0x0002b43a) image3_wide_pane_ParamLimits

0xce71,	// (0x0002b43a) image3_wide_pane

0xce8b,	// (0x0002b454) image3_wide_small_pane

0xce97,	// (0x0002b460) main_video3_pane_g1_ParamLimits

0xce97,	// (0x0002b460) main_video3_pane_g1

0xceb3,	// (0x0002b47c) main_video3_pane_g2_ParamLimits

0xceb3,	// (0x0002b47c) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0002de17) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0002de17) main_video3_pane_g

0xcecf,	// (0x0002b498) main_video3_pane_t1_ParamLimits

0xcecf,	// (0x0002b498) main_video3_pane_t1

0xcefa,	// (0x0002b4c3) main_video3_pane_t2_ParamLimits

0xcefa,	// (0x0002b4c3) main_video3_pane_t2

0xcf27,	// (0x0002b4f0) main_video3_pane_t3_ParamLimits

0xcf27,	// (0x0002b4f0) main_video3_pane_t3

0x0002,

0xf853,	// (0x0002de1c) main_video3_pane_t_ParamLimits

0xf853,	// (0x0002de1c) main_video3_pane_t

0xcf54,	// (0x0002b51d) cams_zoom_vslider_pane_g1

0xcf5d,	// (0x0002b526) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0002de23) cams_zoom_vslider_pane_g

0xcf65,	// (0x0002b52e) small_slider_vertical_pane

0xc7c0,	// (0x0002ad89) small_slider_vertical_pane_g1

0xc7c0,	// (0x0002ad89) small_slider_vertical_pane_g2

0xcf6d,	// (0x0002b536) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0002de28) small_slider_vertical_pane_g

0x9c5d,	// (0x00028226) main_hwr_training_pane

0xcf76,	// (0x0002b53f) hwr_training_instruct_pane_ParamLimits

0xcf76,	// (0x0002b53f) hwr_training_instruct_pane

0x6a40,	// (0x00025009) hwr_training_navi_pane_ParamLimits

0x6a40,	// (0x00025009) hwr_training_navi_pane

0x6a5a,	// (0x00025023) hwr_training_write_pane_ParamLimits

0x6a5a,	// (0x00025023) hwr_training_write_pane

0x9c5d,	// (0x00028226) bg_frame_shadow_pane

0xcfad,	// (0x0002b576) hwr_training_write_pane_g1

0xcfb5,	// (0x0002b57e) hwr_training_write_pane_g2

0xcfbd,	// (0x0002b586) hwr_training_write_pane_g3

0xcfc5,	// (0x0002b58e) hwr_training_write_pane_g4

0xcfcd,	// (0x0002b596) hwr_training_write_pane_g5

0xcfd5,	// (0x0002b59e) hwr_training_write_pane_g6

0xcfdd,	// (0x0002b5a6) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0002de2f) hwr_training_write_pane_g

0x1654,	// (0x0001fc1d) hwr_training_navi_pane_g1_ParamLimits

0x1654,	// (0x0001fc1d) hwr_training_navi_pane_g1

0x1666,	// (0x0001fc2f) hwr_training_navi_pane_g2_ParamLimits

0x1666,	// (0x0001fc2f) hwr_training_navi_pane_g2

0x1678,	// (0x0001fc41) hwr_training_navi_pane_g3_ParamLimits

0x1678,	// (0x0001fc41) hwr_training_navi_pane_g3

0x1688,	// (0x0001fc51) hwr_training_navi_pane_g4_ParamLimits

0x1688,	// (0x0001fc51) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0002de3e) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0002de3e) hwr_training_navi_pane_g

0x16a2,	// (0x0001fc6b) hwr_training_navi_pane_t1

0x6a92,	// (0x0002505b) list_single_hwr_training_instruct_pane_ParamLimits

0x6a92,	// (0x0002505b) list_single_hwr_training_instruct_pane

0xcfe5,	// (0x0002b5ae) list_single_hwr_training_instruct_pane_t1

0xc700,	// (0x0002acc9) bg_frame_shadow_pane_g1

0xcff4,	// (0x0002b5bd) bg_frame_shadow_pane_g2

0xcffc,	// (0x0002b5c5) bg_frame_shadow_pane_g3

0xd004,	// (0x0002b5cd) bg_frame_shadow_pane_g4

0xd00c,	// (0x0002b5d5) bg_frame_shadow_pane_g5

0xd014,	// (0x0002b5dd) bg_frame_shadow_pane_g6

0xd01c,	// (0x0002b5e5) bg_frame_shadow_pane_g7

0xa4ca,	// (0x00028a93) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0002de49) bg_frame_shadow_pane_g

0x9c5d,	// (0x00028226) main_video_tele_dialer_pane

0x16b0,	// (0x0001fc79) aid_size_cell_video_keypad_ParamLimits

0x16b0,	// (0x0001fc79) aid_size_cell_video_keypad

0x16c0,	// (0x0001fc89) grid_video_dialer_keypad_pane_ParamLimits

0x16c0,	// (0x0001fc89) grid_video_dialer_keypad_pane

0x16f2,	// (0x0001fcbb) video_down_pane_cp_ParamLimits

0x16f2,	// (0x0001fcbb) video_down_pane_cp

0x16fe,	// (0x0001fcc7) cell_video_dialer_keypad_pane_ParamLimits

0x16fe,	// (0x0001fcc7) cell_video_dialer_keypad_pane

0xd024,	// (0x0002b5ed) bg_button_pane_cp08_ParamLimits

0xd024,	// (0x0002b5ed) bg_button_pane_cp08

0x6ac7,	// (0x00025090) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6ac7,	// (0x00025090) cell_video_dialer_keypad_pane_g1

0x63f7,	// (0x000249c0) mup3_rocker2_pane_ParamLimits

0x63f7,	// (0x000249c0) mup3_rocker2_pane

0xc7c0,	// (0x0002ad89) mup3_rocker2_pane_g1

0x55a3,	// (0x00023b6c) main_dialer2_pane

0x9c5d,	// (0x00028226) main_mp4_pane

0x171d,	// (0x0001fce6) main_mp4_pane_g1_ParamLimits

0x171d,	// (0x0001fce6) main_mp4_pane_g1

0x172b,	// (0x0001fcf4) main_mp4_pane_g2_ParamLimits

0x172b,	// (0x0001fcf4) main_mp4_pane_g2

0x1739,	// (0x0001fd02) main_mp4_pane_g3_ParamLimits

0x1739,	// (0x0001fd02) main_mp4_pane_g3

0x178c,	// (0x0001fd55) main_mp4_pane_g4_ParamLimits

0x178c,	// (0x0001fd55) main_mp4_pane_g4

0x17b4,	// (0x0001fd7d) main_mp4_pane_g5_ParamLimits

0x17b4,	// (0x0001fd7d) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0002de69) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0002de69) main_mp4_pane_g

0x1804,	// (0x0001fdcd) main_mp4_pane_t1_ParamLimits

0x1804,	// (0x0001fdcd) main_mp4_pane_t1

0x1860,	// (0x0001fe29) main_mp4_pane_t2_ParamLimits

0x1860,	// (0x0001fe29) main_mp4_pane_t2

0xd030,	// (0x0002b5f9) main_mp4_pane_t3_ParamLimits

0xd030,	// (0x0002b5f9) main_mp4_pane_t3

0x18b2,	// (0x0001fe7b) main_mp4_pane_t4_ParamLimits

0x18b2,	// (0x0001fe7b) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0002de76) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0002de76) main_mp4_pane_t

0x18f2,	// (0x0001febb) mp4_progress_pane_ParamLimits

0x18f2,	// (0x0001febb) mp4_progress_pane

0x193c,	// (0x0001ff05) mp4_rocker_pane_ParamLimits

0x193c,	// (0x0001ff05) mp4_rocker_pane

0xd058,	// (0x0002b621) mp4_progress_pane_t1

0xd071,	// (0x0002b63a) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0002de7f) mp4_progress_pane_t

0xd08a,	// (0x0002b653) mup_progress_pane_cp04

0xd8d3,	// (0x0002be9c) mp4_rocker_pane_g1

0x195e,	// (0x0001ff27) aid_cell_size_keypad2_ParamLimits

0x195e,	// (0x0001ff27) aid_cell_size_keypad2

0x196e,	// (0x0001ff37) dialer2_ne_pane_ParamLimits

0x196e,	// (0x0001ff37) dialer2_ne_pane

0x197a,	// (0x0001ff43) grid_dialer2_keypad_pane_ParamLimits

0x197a,	// (0x0001ff43) grid_dialer2_keypad_pane

0xd23a,	// (0x0002b803) bg_popup_call_pane_cp07_ParamLimits

0xd23a,	// (0x0002b803) bg_popup_call_pane_cp07

0x6afe,	// (0x000250c7) dialer2_ne_pane_t1_ParamLimits

0x6afe,	// (0x000250c7) dialer2_ne_pane_t1

0x1988,	// (0x0001ff51) cell_dialer2_keypad_pane_ParamLimits

0x1988,	// (0x0001ff51) cell_dialer2_keypad_pane

0xd0a8,	// (0x0002b671) bg_button_pane_pane_cp04_ParamLimits

0xd0a8,	// (0x0002b671) bg_button_pane_pane_cp04

0x6b23,	// (0x000250ec) cell_dialer2_keypad_pane_g1_ParamLimits

0x6b23,	// (0x000250ec) cell_dialer2_keypad_pane_g1

0x32ce,	// (0x00021897) aid_placing_vt_set_content_ParamLimits

0x32ce,	// (0x00021897) aid_placing_vt_set_content

0x32f6,	// (0x000218bf) aid_placing_vt_set_title_ParamLimits

0x32f6,	// (0x000218bf) aid_placing_vt_set_title

0x9c5d,	// (0x00028226) main_image3_pane

0x19d1,	// (0x0001ff9a) area_side_right_pane_cp01_ParamLimits

0x19d1,	// (0x0001ff9a) area_side_right_pane_cp01

0x1a00,	// (0x0001ffc9) main_image3_pane_g1_ParamLimits

0x1a00,	// (0x0001ffc9) main_image3_pane_g1

0x1a0e,	// (0x0001ffd7) main_image3_pane_g2_ParamLimits

0x1a0e,	// (0x0001ffd7) main_image3_pane_g2

0x1a27,	// (0x0001fff0) main_image3_pane_g3_ParamLimits

0x1a27,	// (0x0001fff0) main_image3_pane_g3

0x1a40,	// (0x00020009) main_image3_pane_g4_ParamLimits

0x1a40,	// (0x00020009) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0002de8e) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0002de8e) main_image3_pane_g

0x1a59,	// (0x00020022) main_image3_pane_t1_ParamLimits

0x1a59,	// (0x00020022) main_image3_pane_t1

0x1a7e,	// (0x00020047) main_image3_pane_t2_ParamLimits

0x1a7e,	// (0x00020047) main_image3_pane_t2

0x1a9d,	// (0x00020066) main_image3_pane_t3_ParamLimits

0x1a9d,	// (0x00020066) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0002de97) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0002de97) main_image3_pane_t

0x2580,	// (0x00020b49) grid_sctrl_middle_pane_cp01_ParamLimits

0x2580,	// (0x00020b49) grid_sctrl_middle_pane_cp01

0x6b8b,	// (0x00025154) cell_sctrl_middle_pane_cp01_ParamLimits

0x6b8b,	// (0x00025154) cell_sctrl_middle_pane_cp01

0x6b9c,	// (0x00025165) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6b9c,	// (0x00025165) cell_sctrl_middle_pane_cp01_g1

0x9c5d,	// (0x00028226) main_call4_pane

0x6ba9,	// (0x00025172) aid_size_button_call4_ParamLimits

0x6ba9,	// (0x00025172) aid_size_button_call4

0x6bdb,	// (0x000251a4) call4_windows_pane_ParamLimits

0x6bdb,	// (0x000251a4) call4_windows_pane

0x6bf7,	// (0x000251c0) grid_call4_button_pane_ParamLimits

0x6bf7,	// (0x000251c0) grid_call4_button_pane

0xd0b4,	// (0x0002b67d) call4_windows_conf_pane

0x6c1b,	// (0x000251e4) popup_call4_audio_first_window_ParamLimits

0x6c1b,	// (0x000251e4) popup_call4_audio_first_window

0x6c47,	// (0x00025210) popup_call4_audio_second_window_ParamLimits

0x6c47,	// (0x00025210) popup_call4_audio_second_window

0xd0f1,	// (0x0002b6ba) popup_call4_audio_wait_window_ParamLimits

0xd0f1,	// (0x0002b6ba) popup_call4_audio_wait_window

0x6c5b,	// (0x00025224) cell_call4_button_pane_ParamLimits

0x6c5b,	// (0x00025224) cell_call4_button_pane

0x6c7e,	// (0x00025247) bg_button_pane_cp09_ParamLimits

0x6c7e,	// (0x00025247) bg_button_pane_cp09

0x6c8a,	// (0x00025253) cell_call4_button_pane_g1_ParamLimits

0x6c8a,	// (0x00025253) cell_call4_button_pane_g1

0x6c97,	// (0x00025260) cell_call4_button_pane_t1_ParamLimits

0x6c97,	// (0x00025260) cell_call4_button_pane_t1

0xd139,	// (0x0002b702) popup_call4_audio_conf_window_ParamLimits

0xd139,	// (0x0002b702) popup_call4_audio_conf_window

0x642c,	// (0x000249f5) mup3_progress_pane_t1_ParamLimits

0x644b,	// (0x00024a14) mup3_progress_pane_t2_ParamLimits

0xca77,	// (0x0002b040) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0002dd70) mup3_progress_pane_t_ParamLimits

0xca94,	// (0x0002b05d) mup_progress_pane_cp03_ParamLimits

0x68d1,	// (0x00024e9a) mup3_control_keys_pane_g4_copy1

0x1920,	// (0x0001fee9) mp4_rocker2_pane_ParamLimits

0x1920,	// (0x0001fee9) mp4_rocker2_pane

0xd153,	// (0x0002b71c) mp4_rocker2_pane_g1

0xd15b,	// (0x0002b724) mp4_rocker2_pane_g2

0x1afe,	// (0x000200c7) mp4_rocker2_pane_g3

0x1b06,	// (0x000200cf) mp4_rocker2_pane_g4

0x1b0e,	// (0x000200d7) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0002dea0) mp4_rocker2_pane_g

0x9c5d,	// (0x00028226) main_camera4_pane

0x9c5d,	// (0x00028226) main_video4_pane

0x16ce,	// (0x0001fc97) main_video_tele_dialer_pane_t1_ParamLimits

0x16ce,	// (0x0001fc97) main_video_tele_dialer_pane_t1

0x16e0,	// (0x0001fca9) main_video_tele_dialer_pane_t2_ParamLimits

0x16e0,	// (0x0001fca9) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0002de5a) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0002de5a) main_video_tele_dialer_pane_t

0x1b2e,	// (0x000200f7) cam4_autofocus_pane_ParamLimits

0x1b2e,	// (0x000200f7) cam4_autofocus_pane

0x1b46,	// (0x0002010f) cam4_image_uncrop_pane_ParamLimits

0x1b46,	// (0x0002010f) cam4_image_uncrop_pane

0x1b5f,	// (0x00020128) cam4_indicators_pane_ParamLimits

0x1b5f,	// (0x00020128) cam4_indicators_pane

0x1b7b,	// (0x00020144) main_camera4_pane_g1_ParamLimits

0x1b7b,	// (0x00020144) main_camera4_pane_g1

0x1b87,	// (0x00020150) main_camera4_pane_g2_ParamLimits

0x1b87,	// (0x00020150) main_camera4_pane_g2

0x1b87,	// (0x00020150) main_camera4_pane_g3_ParamLimits

0x1b87,	// (0x00020150) main_camera4_pane_g3

0x1b93,	// (0x0002015c) main_camera4_pane_g4_ParamLimits

0x1b93,	// (0x0002015c) main_camera4_pane_g4

0x1b9f,	// (0x00020168) main_camera4_pane_g5_ParamLimits

0x1b9f,	// (0x00020168) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0002deab) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0002deab) main_camera4_pane_g

0x1bb9,	// (0x00020182) main_camera4_pane_t1_ParamLimits

0x1bb9,	// (0x00020182) main_camera4_pane_t1

0x1bdd,	// (0x000201a6) bg_tb_trans_pane_cp06

0x1bf3,	// (0x000201bc) cam4_indicators_pane_g1

0x1c04,	// (0x000201cd) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0002dec6) cam4_indicators_pane_g

0x1c1c,	// (0x000201e5) cam4_indicators_pane_t1

0x1c46,	// (0x0002020f) main_video4_pane_g1_ParamLimits

0x1c46,	// (0x0002020f) main_video4_pane_g1

0x1c52,	// (0x0002021b) main_video4_pane_g2_ParamLimits

0x1c52,	// (0x0002021b) main_video4_pane_g2

0x1c5e,	// (0x00020227) main_video4_pane_g3_ParamLimits

0x1c5e,	// (0x00020227) main_video4_pane_g3

0x1c6a,	// (0x00020233) main_video4_pane_g4_ParamLimits

0x1c6a,	// (0x00020233) main_video4_pane_g4

0x0004,

0xf904,	// (0x0002decd) main_video4_pane_g_ParamLimits

0xf904,	// (0x0002decd) main_video4_pane_g

0x1c8c,	// (0x00020255) vid4_indicators_pane_ParamLimits

0x1c8c,	// (0x00020255) vid4_indicators_pane

0x1cab,	// (0x00020274) video4_image_uncrop_cif_pane_ParamLimits

0x1cab,	// (0x00020274) video4_image_uncrop_cif_pane

0x1cba,	// (0x00020283) video4_image_uncrop_nhd_pane_ParamLimits

0x1cba,	// (0x00020283) video4_image_uncrop_nhd_pane

0x1b46,	// (0x0002010f) video4_image_uncrop_vga_pane_ParamLimits

0x1b46,	// (0x0002010f) video4_image_uncrop_vga_pane

0x1cc9,	// (0x00020292) bg_tb_trans_pane_cp07

0x1ce1,	// (0x000202aa) vid4_indicators_pane_g1

0x1cf7,	// (0x000202c0) vid4_indicators_pane_g2

0x1d0b,	// (0x000202d4) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0002ded8) vid4_indicators_pane_g

0x1d3c,	// (0x00020305) vid4_indicators_pane_t1

0x6ccf,	// (0x00025298) cam4_autofocus_pane_g1

0x6cd7,	// (0x000252a0) cam4_autofocus_pane_g2

0x6cdf,	// (0x000252a8) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0002dee3) cam4_autofocus_pane_g

0x6ce7,	// (0x000252b0) cam4_autofocus_pane_g3_copy1

0x6aab,	// (0x00025074) video_down_pane_cp_t1

0x6ab9,	// (0x00025082) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0002de5f) video_down_pane_cp_t

0x2580,	// (0x00020b49) popup_vitu2_window_ParamLimits

0x2580,	// (0x00020b49) popup_vitu2_window

0x1d53,	// (0x0002031c) aid_size_cell2_itu2_ParamLimits

0x1d53,	// (0x0002031c) aid_size_cell2_itu2

0x1d75,	// (0x0002033e) aid_size_cell_itu2_ParamLimits

0x1d75,	// (0x0002033e) aid_size_cell_itu2

0x1db9,	// (0x00020382) bg_popup_window_pane_cp09_ParamLimits

0x1db9,	// (0x00020382) bg_popup_window_pane_cp09

0x1dc7,	// (0x00020390) field_vitu2_entry_pane_ParamLimits

0x1dc7,	// (0x00020390) field_vitu2_entry_pane

0x1de7,	// (0x000203b0) grid_vitu2_function_pane_ParamLimits

0x1de7,	// (0x000203b0) grid_vitu2_function_pane

0x1e2b,	// (0x000203f4) grid_vitu2_itu_pane_ParamLimits

0x1e2b,	// (0x000203f4) grid_vitu2_itu_pane

0x1e9f,	// (0x00020468) cell_vitu2_itu_pane_ParamLimits

0x1e9f,	// (0x00020468) cell_vitu2_itu_pane

0x1eb6,	// (0x0002047f) cell_vitu2_function_pane_ParamLimits

0x1eb6,	// (0x0002047f) cell_vitu2_function_pane

0xd163,	// (0x0002b72c) bg_popup_call_pane_cp08_ParamLimits

0xd163,	// (0x0002b72c) bg_popup_call_pane_cp08

0xd17c,	// (0x0002b745) field_vitu2_entry_pane_g1

0xd188,	// (0x0002b751) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0002deea) field_vitu2_entry_pane_g

0x6cef,	// (0x000252b8) field_vitu2_entry_pane_t1_ParamLimits

0x6cef,	// (0x000252b8) field_vitu2_entry_pane_t1

0xd1a2,	// (0x0002b76b) field_vitu2_entry_pane_t2_ParamLimits

0xd1a2,	// (0x0002b76b) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0002def1) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0002def1) field_vitu2_entry_pane_t

0x1efa,	// (0x000204c3) bg_button_pane_cp010_ParamLimits

0x1efa,	// (0x000204c3) bg_button_pane_cp010

0x1f08,	// (0x000204d1) cell_vitu2_itu_pane_g1

0x1f26,	// (0x000204ef) cell_vitu2_itu_pane_t1_ParamLimits

0x1f26,	// (0x000204ef) cell_vitu2_itu_pane_t1

0x1f78,	// (0x00020541) cell_vitu2_itu_pane_t2_ParamLimits

0x1f78,	// (0x00020541) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0002defb) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0002defb) cell_vitu2_itu_pane_t

0x1cc9,	// (0x00020292) bg_button_pane_cp011

0x2033,	// (0x000205fc) cell_vitu2_function_pane_g1

0x9c5d,	// (0x00028226) main_myfav_hc_pane

0x1adf,	// (0x000200a8) popup_image3_note_pane_ParamLimits

0x1adf,	// (0x000200a8) popup_image3_note_pane

0x1aed,	// (0x000200b6) popup_image3_tool_bar_pane_ParamLimits

0x1aed,	// (0x000200b6) popup_image3_tool_bar_pane

0x1fe6,	// (0x000205af) cell_vitu2_itu_pane_t3_ParamLimits

0x1fe6,	// (0x000205af) cell_vitu2_itu_pane_t3

0x9c5d,	// (0x00028226) bg_popup_trans_pane

0xd1c7,	// (0x0002b790) grid_image3_tool_bar_pane

0xd1d1,	// (0x0002b79a) bg_popup_trans_pane_g1

0xa832,	// (0x00028dfb) bg_popup_trans_pane_g2

0xd1d9,	// (0x0002b7a2) bg_popup_trans_pane_g3

0xd1e1,	// (0x0002b7aa) bg_popup_trans_pane_g4

0xd1e9,	// (0x0002b7b2) bg_popup_trans_pane_g5

0xd1f1,	// (0x0002b7ba) bg_popup_trans_pane_g6

0xd1f9,	// (0x0002b7c2) bg_popup_trans_pane_g7

0xd201,	// (0x0002b7ca) bg_popup_trans_pane_g8

0xa812,	// (0x00028ddb) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0002df02) bg_popup_trans_pane_g

0xd209,	// (0x0002b7d2) cell_image3_tool_bar_pane_ParamLimits

0xd209,	// (0x0002b7d2) cell_image3_tool_bar_pane

0xc7c0,	// (0x0002ad89) cell_image3_tool_bar_pane_g1

0x9c5d,	// (0x00028226) bg_popup_trans_pane_cp1

0xd248,	// (0x0002b811) popup_image3_note_pane_t1

0xd256,	// (0x0002b81f) popup_image3_note_pane_t2

0xd264,	// (0x0002b82d) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0002df15) popup_image3_note_pane_t

0xd274,	// (0x0002b83d) popup_image3_note_pane_t3_copy1

0x6d1c,	// (0x000252e5) bg_myfav_hc_instruction_pane_ParamLimits

0x6d1c,	// (0x000252e5) bg_myfav_hc_instruction_pane

0x6d34,	// (0x000252fd) cell_myfav_contact_pane_ParamLimits

0x6d34,	// (0x000252fd) cell_myfav_contact_pane

0x6d4e,	// (0x00025317) cell_myfav_contact_pane_cp1_ParamLimits

0x6d4e,	// (0x00025317) cell_myfav_contact_pane_cp1

0x6d66,	// (0x0002532f) cell_myfav_contact_pane_cp2_ParamLimits

0x6d66,	// (0x0002532f) cell_myfav_contact_pane_cp2

0x6d7e,	// (0x00025347) cell_myfav_contact_pane_cp3_ParamLimits

0x6d7e,	// (0x00025347) cell_myfav_contact_pane_cp3

0x6d95,	// (0x0002535e) cell_myfav_contact_pane_cp4_ParamLimits

0x6d95,	// (0x0002535e) cell_myfav_contact_pane_cp4

0x6dab,	// (0x00025374) cell_myfav_contact_pane_cp5_ParamLimits

0x6dab,	// (0x00025374) cell_myfav_contact_pane_cp5

0x6dbf,	// (0x00025388) cell_myfav_contact_pane_cp6_ParamLimits

0x6dbf,	// (0x00025388) cell_myfav_contact_pane_cp6

0x6dd3,	// (0x0002539c) cell_myfav_contact_pane_cp7_ParamLimits

0x6dd3,	// (0x0002539c) cell_myfav_contact_pane_cp7

0xd282,	// (0x0002b84b) listscroll_gen_pane_cp05

0x6deb,	// (0x000253b4) main_myfav_hc_pane_g1_ParamLimits

0x6deb,	// (0x000253b4) main_myfav_hc_pane_g1

0x6e05,	// (0x000253ce) main_myfav_hc_pane_g2_ParamLimits

0x6e05,	// (0x000253ce) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0002df1c) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0002df1c) main_myfav_hc_pane_g

0x6e37,	// (0x00025400) main_myfav_hc_pane_t1_ParamLimits

0x6e37,	// (0x00025400) main_myfav_hc_pane_t1

0xd28b,	// (0x0002b854) main_myfav_hc_pane_t2_ParamLimits

0xd28b,	// (0x0002b854) main_myfav_hc_pane_t2

0xd29d,	// (0x0002b866) main_myfav_hc_pane_t3_ParamLimits

0xd29d,	// (0x0002b866) main_myfav_hc_pane_t3

0x6e4e,	// (0x00025417) main_myfav_hc_pane_t4_ParamLimits

0x6e4e,	// (0x00025417) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0002df23) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0002df23) main_myfav_hc_pane_t

0xc7c0,	// (0x0002ad89) bg_myfav_hc_instruction_pane_g1

0xd2af,	// (0x0002b878) cell_myfav_contact_pane_g1_ParamLimits

0xd2af,	// (0x0002b878) cell_myfav_contact_pane_g1

0xd2af,	// (0x0002b878) cell_myfav_contact_pane_g2_ParamLimits

0xd2af,	// (0x0002b878) cell_myfav_contact_pane_g2

0xd2bb,	// (0x0002b884) cell_myfav_contact_pane_g3_ParamLimits

0xd2bb,	// (0x0002b884) cell_myfav_contact_pane_g3

0xca61,	// (0x0002b02a) cell_myfav_contact_pane_g4_ParamLimits

0xca61,	// (0x0002b02a) cell_myfav_contact_pane_g4

0xd2c8,	// (0x0002b891) cell_myfav_contact_pane_g5_ParamLimits

0xd2c8,	// (0x0002b891) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0002df2e) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0002df2e) cell_myfav_contact_pane_g

0x6e1f,	// (0x000253e8) main_myfav_hc_pane_g3_ParamLimits

0x6e1f,	// (0x000253e8) main_myfav_hc_pane_g3

0x249c,	// (0x00020a65) popup_adpt_find_window

0x6e78,	// (0x00025441) afind_page_pane_ParamLimits

0x6e78,	// (0x00025441) afind_page_pane

0x6e85,	// (0x0002544e) aid_size_cell_afind_ParamLimits

0x6e85,	// (0x0002544e) aid_size_cell_afind

0x6e9f,	// (0x00025468) bg_popup_sub_pane_cp09_ParamLimits

0x6e9f,	// (0x00025468) bg_popup_sub_pane_cp09

0x6eac,	// (0x00025475) find_pane_cp01_ParamLimits

0x6eac,	// (0x00025475) find_pane_cp01

0xd2d4,	// (0x0002b89d) grid_afind_control_pane_ParamLimits

0xd2d4,	// (0x0002b89d) grid_afind_control_pane

0x6eb9,	// (0x00025482) grid_afind_pane_ParamLimits

0x6eb9,	// (0x00025482) grid_afind_pane

0x6ed5,	// (0x0002549e) cell_afind_pane_ParamLimits

0x6ed5,	// (0x0002549e) cell_afind_pane

0xc7c0,	// (0x0002ad89) afind_page_pane_g1

0x6f21,	// (0x000254ea) afind_page_pane_g2

0x6f2a,	// (0x000254f3) afind_page_pane_g3

0x0002,

0xf970,	// (0x0002df39) afind_page_pane_g

0x6f33,	// (0x000254fc) afind_page_pane_t1

0xd2e8,	// (0x0002b8b1) cell_afind_grid_control_pane_ParamLimits

0xd2e8,	// (0x0002b8b1) cell_afind_grid_control_pane

0xd0a8,	// (0x0002b671) bg_button_pane_cp69_ParamLimits

0xd0a8,	// (0x0002b671) bg_button_pane_cp69

0x6f53,	// (0x0002551c) cell_afind_pane_g1_ParamLimits

0x6f53,	// (0x0002551c) cell_afind_pane_g1

0x6f60,	// (0x00025529) cell_afind_pane_t1_ParamLimits

0x6f60,	// (0x00025529) cell_afind_pane_t1

0xa627,	// (0x00028bf0) bg_button_pane_cp72

0xd2f7,	// (0x0002b8c0) cell_afind_grid_control_pane_g1

0x511e,	// (0x000236e7) aid_image_placing_area_ParamLimits

0x511e,	// (0x000236e7) aid_image_placing_area

0xcd74,	// (0x0002b33d) field_vitu_entry_pane_g1_ParamLimits

0xcd74,	// (0x0002b33d) field_vitu_entry_pane_g1

0xcd80,	// (0x0002b349) field_vitu_entry_pane_g2_ParamLimits

0xcd80,	// (0x0002b349) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0002ddea) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0002ddea) field_vitu_entry_pane_g

0x695b,	// (0x00024f24) cell_vitu_itu_pane_g1_ParamLimits

0x69ab,	// (0x00024f74) cell_vitu_itu_pane_t3_ParamLimits

0x69ab,	// (0x00024f74) cell_vitu_itu_pane_t3

0xd058,	// (0x0002b621) mp4_progress_pane_t1_ParamLimits

0xd071,	// (0x0002b63a) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0002de7f) mp4_progress_pane_t_ParamLimits

0xd08a,	// (0x0002b653) mup_progress_pane_cp04_ParamLimits

0x6e62,	// (0x0002542b) main_myfav_hc_pane_t5_ParamLimits

0x6e62,	// (0x0002542b) main_myfav_hc_pane_t5

0x9c83,	// (0x0002824c) aid_zoom_text_primary

0x249c,	// (0x00020a65) popup_adpt_find_window_ParamLimits

0xa415,	// (0x000289de) main_cam_set_pane

0x1b6d,	// (0x00020136) cam4_zoom_pane_ParamLimits

0x1b6d,	// (0x00020136) cam4_zoom_pane

0x6f72,	// (0x0002553b) main_cam_set_pane_g1_ParamLimits

0x6f72,	// (0x0002553b) main_cam_set_pane_g1

0x6f80,	// (0x00025549) main_cam_set_pane_g2_ParamLimits

0x6f80,	// (0x00025549) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0002df40) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0002df40) main_cam_set_pane_g

0x6f8c,	// (0x00025555) main_cam_set_pane_t1_ParamLimits

0x6f8c,	// (0x00025555) main_cam_set_pane_t1

0x6fa8,	// (0x00025571) main_cset_listscroll_pane_ParamLimits

0x6fa8,	// (0x00025571) main_cset_listscroll_pane

0x6fd7,	// (0x000255a0) main_cset_slider_pane_ParamLimits

0x6fd7,	// (0x000255a0) main_cset_slider_pane

0xd308,	// (0x0002b8d1) main_cset_list_pane_ParamLimits

0xd308,	// (0x0002b8d1) main_cset_list_pane

0xd318,	// (0x0002b8e1) scroll_pane_cp028

0x6ff8,	// (0x000255c1) aid_area_touch_slider

0x7014,	// (0x000255dd) cset_slider_pane

0x703e,	// (0x00025607) main_cset_slider_pane_g1

0x7053,	// (0x0002561c) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0002df45) main_cset_slider_pane_g

0xd351,	// (0x0002b91a) main_cset_slider_pane_t1

0x710f,	// (0x000256d8) main_cset_slider_pane_t2

0x7129,	// (0x000256f2) main_cset_slider_pane_t3

0x7143,	// (0x0002570c) main_cset_slider_pane_t4

0x715d,	// (0x00025726) main_cset_slider_pane_t5

0x7177,	// (0x00025740) main_cset_slider_pane_t6

0x718c,	// (0x00025755) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0002df6a) main_cset_slider_pane_t

0x7290,	// (0x00025859) cset_list_set_pane_ParamLimits

0x7290,	// (0x00025859) cset_list_set_pane

0x72a1,	// (0x0002586a) aid_position_infowindow_above

0x72a9,	// (0x00025872) aid_position_infowindow_below

0x72b1,	// (0x0002587a) cset_list_set_pane_g1_ParamLimits

0x72b1,	// (0x0002587a) cset_list_set_pane_g1

0x72bd,	// (0x00025886) cset_list_set_pane_g3_ParamLimits

0x72bd,	// (0x00025886) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0002df89) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0002df89) cset_list_set_pane_g

0x72cc,	// (0x00025895) cset_list_set_pane_t1_ParamLimits

0x72cc,	// (0x00025895) cset_list_set_pane_t1

0xa415,	// (0x000289de) list_highlight_pane_cp021_ParamLimits

0xa415,	// (0x000289de) list_highlight_pane_cp021

0xb05e,	// (0x00029627) cset_slider_pane_g1

0xb070,	// (0x00029639) cset_slider_pane_g2

0xb067,	// (0x00029630) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0002df8e) cset_slider_pane_g

0x2047,	// (0x00020610) aid_area_touch_cam4_zoom

0x204f,	// (0x00020618) cam4_zoom_cont_pane

0x2057,	// (0x00020620) cam4_zoom_pane_g1

0x205f,	// (0x00020628) cam4_zoom_pane_g2

0x2067,	// (0x00020630) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0002df95) cam4_zoom_pane_g

0x206f,	// (0x00020638) cam4_zoom_cont_pane_g1

0x2078,	// (0x00020641) cam4_zoom_cont_pane_g2

0x2081,	// (0x0002064a) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0002df9c) cam4_zoom_cont_pane_g

0x6bc3,	// (0x0002518c) call4_image_pane_ParamLimits

0x6bc3,	// (0x0002518c) call4_image_pane

0xd0b4,	// (0x0002b67d) call4_windows_conf_pane_ParamLimits

0xd0cf,	// (0x0002b698) popup_call4_audio_in_window_ParamLimits

0xd0cf,	// (0x0002b698) popup_call4_audio_in_window

0x9c5d,	// (0x00028226) bg_popup_call2_act_pane_cp02

0xd131,	// (0x0002b6fa) call4_list_conf_pane

0xc7c0,	// (0x0002ad89) call4_image_pane_g1

0xc7c0,	// (0x0002ad89) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0002dcb0) call4_image_pane_g

0xd3f1,	// (0x0002b9ba) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3f1,	// (0x0002b9ba) list_single_graphic_popup_conf4_pane

0x9c5d,	// (0x00028226) list_highlight_pane_cp022

0xd421,	// (0x0002b9ea) list_single_graphic_popup_conf4_pane_g1

0xad58,	// (0x00029321) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0002dfa3) list_single_graphic_popup_conf4_pane_g

0xd429,	// (0x0002b9f2) list_single_graphic_popup_conf4_pane_t1

0x3450,	// (0x00021a19) popup_vtel_slider_window_ParamLimits

0x3450,	// (0x00021a19) popup_vtel_slider_window

0xd096,	// (0x0002b65f) dialer2_ne_pane_t2_ParamLimits

0xd096,	// (0x0002b65f) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0002de84) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0002de84) dialer2_ne_pane_t

0xa415,	// (0x000289de) bg_popup_sub_pane_cp010_ParamLimits

0xa415,	// (0x000289de) bg_popup_sub_pane_cp010

0x72e1,	// (0x000258aa) popup_vtel_slider_window_g1_ParamLimits

0x72e1,	// (0x000258aa) popup_vtel_slider_window_g1

0x72ed,	// (0x000258b6) popup_vtel_slider_window_g2_ParamLimits

0x72ed,	// (0x000258b6) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0002dfa8) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0002dfa8) popup_vtel_slider_window_g

0x7335,	// (0x000258fe) vtel_slider_pane_ParamLimits

0x7335,	// (0x000258fe) vtel_slider_pane

0x7344,	// (0x0002590d) vtel_slider_pane_g1_ParamLimits

0x7344,	// (0x0002590d) vtel_slider_pane_g1

0x7351,	// (0x0002591a) vtel_slider_pane_g2_ParamLimits

0x7351,	// (0x0002591a) vtel_slider_pane_g2

0x735e,	// (0x00025927) vtel_slider_pane_g3_ParamLimits

0x735e,	// (0x00025927) vtel_slider_pane_g3

0x7344,	// (0x0002590d) vtel_slider_pane_g4_ParamLimits

0x7344,	// (0x0002590d) vtel_slider_pane_g4

0x736b,	// (0x00025934) vtel_slider_pane_g5_ParamLimits

0x736b,	// (0x00025934) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0002dfb1) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0002dfb1) vtel_slider_pane_g

0x9c5d,	// (0x00028226) main_gallery2_pane

0x1d9b,	// (0x00020364) aid_size_row_itut2_dropdow_list_ParamLimits

0x1d9b,	// (0x00020364) aid_size_row_itut2_dropdow_list

0x1e09,	// (0x000203d2) grid_vitu2_function_top_pane_ParamLimits

0x1e09,	// (0x000203d2) grid_vitu2_function_top_pane

0x1e5b,	// (0x00020424) popup_vitu2_dropdown_list_window_ParamLimits

0x1e5b,	// (0x00020424) popup_vitu2_dropdown_list_window

0x1e7b,	// (0x00020444) popup_vitu2_match_list_window

0x208a,	// (0x00020653) cell_vitu2_function_top_pane_ParamLimits

0x208a,	// (0x00020653) cell_vitu2_function_top_pane

0x20aa,	// (0x00020673) cell_vitu2_function_top_pane_cp01_ParamLimits

0x20aa,	// (0x00020673) cell_vitu2_function_top_pane_cp01

0x20c8,	// (0x00020691) cell_vitu2_function_top_wide_pane_ParamLimits

0x20c8,	// (0x00020691) cell_vitu2_function_top_wide_pane

0x1cc9,	// (0x00020292) bg_button_pane_cp012

0x20e6,	// (0x000206af) cell_vitu2_function_top_pane_g1

0x20f5,	// (0x000206be) bg_button_pane_cp013_ParamLimits

0x20f5,	// (0x000206be) bg_button_pane_cp013

0x7378,	// (0x00025941) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7378,	// (0x00025941) cell_vitu2_function_top_wide_pane_g1

0x2111,	// (0x000206da) bg_popup_sub_pane_cp20

0x211f,	// (0x000206e8) list_vitu2_match_list_pane

0xd1d1,	// (0x0002b79a) bg_popup_sub_pane_cp20_g1

0xd1d9,	// (0x0002b7a2) bg_popup_sub_pane_cp20_g2

0xa832,	// (0x00028dfb) bg_popup_sub_pane_cp20_g3

0xd1e1,	// (0x0002b7aa) bg_popup_sub_pane_cp20_g4

0xa812,	// (0x00028ddb) bg_popup_sub_pane_cp20_g5

0xd44d,	// (0x0002ba16) bg_popup_sub_pane_cp20_g6

0xd1f1,	// (0x0002b7ba) bg_popup_sub_pane_cp20_g7

0xd1f9,	// (0x0002b7c2) bg_popup_sub_pane_cp20_g8

0xd201,	// (0x0002b7ca) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0002dfbc) bg_popup_sub_pane_cp20_g

0x2137,	// (0x00020700) list_vitu2_match_list_item_pane_ParamLimits

0x2137,	// (0x00020700) list_vitu2_match_list_item_pane

0x2149,	// (0x00020712) list_vitu2_match_list_item_pane_t1

0x0dd4,	// (0x0001f39d) bg_popup_sub_pane_cp21

0x2157,	// (0x00020720) grid_vitu2_dropdown_list_pane

0x215f,	// (0x00020728) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x215f,	// (0x00020728) cell_vitu2_dropdown_list_char_pane

0x2184,	// (0x0002074d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2184,	// (0x0002074d) cell_vitu2_dropdown_list_ctrl_pane

0xd461,	// (0x0002ba2a) cell_vitu2_dropdown_list_char_pane_g1

0xd46a,	// (0x0002ba33) cell_vitu2_dropdown_list_char_pane_g2

0xd473,	// (0x0002ba3c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0002dfd9) cell_vitu2_dropdown_list_char_pane_g

0x21b2,	// (0x0002077b) cell_vitu2_dropdown_list_char_pane_t1

0x73c8,	// (0x00025991) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x73c8,	// (0x00025991) cell_vitu2_dropdown_list_ctrl_pane_g1

0x73d8,	// (0x000259a1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x73d8,	// (0x000259a1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x73e9,	// (0x000259b2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x73e9,	// (0x000259b2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x21c0,	// (0x00020789) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x21c0,	// (0x00020789) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1bdd,	// (0x000201a6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1bdd,	// (0x000201a6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0002dfe0) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0002dfe0) cell_vitu2_dropdown_list_ctrl_pane_g

0x73f9,	// (0x000259c2) aid_size_cell_gallery2_ParamLimits

0x73f9,	// (0x000259c2) aid_size_cell_gallery2

0x7407,	// (0x000259d0) grid_gallery2_pane_ParamLimits

0x7407,	// (0x000259d0) grid_gallery2_pane

0x7416,	// (0x000259df) scroll_pane_cp029_ParamLimits

0x7416,	// (0x000259df) scroll_pane_cp029

0x7422,	// (0x000259eb) cell_gallery2_pane_ParamLimits

0x7422,	// (0x000259eb) cell_gallery2_pane

0xd47c,	// (0x0002ba45) cell_gallery2_pane_g2

0x744c,	// (0x00025a15) cell_gallery2_pane_g3

0xd486,	// (0x0002ba4f) cell_gallery2_pane_g4

0xd48e,	// (0x0002ba57) cell_gallery2_pane_g5

0xaf26,	// (0x000294ef) grid_highlight_pane_cp10

0x1e7b,	// (0x00020444) popup_vitu2_match_list_window_ParamLimits

0x1e8f,	// (0x00020458) popup_vitu2_query_window_ParamLimits

0x1e8f,	// (0x00020458) popup_vitu2_query_window

0x0dd4,	// (0x0001f39d) bg_vitu2_candi_button_pane

0xd461,	// (0x0002ba2a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd46a,	// (0x0002ba33) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd473,	// (0x0002ba3c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7454,	// (0x00025a1d) bg_button_pane_cp015

0x7466,	// (0x00025a2f) bg_button_pane_cp016

0x7479,	// (0x00025a42) bg_button_pane_cp017

0xc36f,	// (0x0002a938) bg_popup_sub_pane_cp22

0xd496,	// (0x0002ba5f) popup_vitu2_query_window_g1

0x74be,	// (0x00025a87) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0002dfeb) popup_vitu2_query_window_g

0x74db,	// (0x00025aa4) popup_vitu2_query_window_t1_ParamLimits

0x74db,	// (0x00025aa4) popup_vitu2_query_window_t1

0x750e,	// (0x00025ad7) popup_vitu2_query_window_t2_ParamLimits

0x750e,	// (0x00025ad7) popup_vitu2_query_window_t2

0x7520,	// (0x00025ae9) popup_vitu2_query_window_t3_ParamLimits

0x7520,	// (0x00025ae9) popup_vitu2_query_window_t3

0x7548,	// (0x00025b11) popup_vitu2_query_window_t4_ParamLimits

0x7548,	// (0x00025b11) popup_vitu2_query_window_t4

0x756b,	// (0x00025b34) popup_vitu2_query_window_t5_ParamLimits

0x756b,	// (0x00025b34) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0002dff2) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0002dff2) popup_vitu2_query_window_t

0xd300,	// (0x0002b8c9) main_cset_text_pane

0x6ff8,	// (0x000255c1) aid_area_touch_slider_ParamLimits

0x7014,	// (0x000255dd) cset_slider_pane_ParamLimits

0x703e,	// (0x00025607) main_cset_slider_pane_g1_ParamLimits

0x7053,	// (0x0002561c) main_cset_slider_pane_g2_ParamLimits

0xd321,	// (0x0002b8ea) main_cset_slider_pane_g3_ParamLimits

0xd321,	// (0x0002b8ea) main_cset_slider_pane_g3

0x7068,	// (0x00025631) main_cset_slider_pane_g4_ParamLimits

0x7068,	// (0x00025631) main_cset_slider_pane_g4

0x7077,	// (0x00025640) main_cset_slider_pane_g5_ParamLimits

0x7077,	// (0x00025640) main_cset_slider_pane_g5

0x7083,	// (0x0002564c) main_cset_slider_pane_g6_ParamLimits

0x7083,	// (0x0002564c) main_cset_slider_pane_g6

0xf97c,	// (0x0002df45) main_cset_slider_pane_g_ParamLimits

0xd351,	// (0x0002b91a) main_cset_slider_pane_t1_ParamLimits

0x710f,	// (0x000256d8) main_cset_slider_pane_t2_ParamLimits

0x7129,	// (0x000256f2) main_cset_slider_pane_t3_ParamLimits

0x7143,	// (0x0002570c) main_cset_slider_pane_t4_ParamLimits

0x715d,	// (0x00025726) main_cset_slider_pane_t5_ParamLimits

0x7177,	// (0x00025740) main_cset_slider_pane_t6_ParamLimits

0x718c,	// (0x00025755) main_cset_slider_pane_t7_ParamLimits

0x71b6,	// (0x0002577f) main_cset_slider_pane_t8_ParamLimits

0x71b6,	// (0x0002577f) main_cset_slider_pane_t8

0x71de,	// (0x000257a7) main_cset_slider_pane_t9_ParamLimits

0x71de,	// (0x000257a7) main_cset_slider_pane_t9

0x7206,	// (0x000257cf) main_cset_slider_pane_t10_ParamLimits

0x7206,	// (0x000257cf) main_cset_slider_pane_t10

0x722e,	// (0x000257f7) main_cset_slider_pane_t11_ParamLimits

0x722e,	// (0x000257f7) main_cset_slider_pane_t11

0x7256,	// (0x0002581f) main_cset_slider_pane_t12_ParamLimits

0x7256,	// (0x0002581f) main_cset_slider_pane_t12

0x7273,	// (0x0002583c) main_cset_slider_pane_t13_ParamLimits

0x7273,	// (0x0002583c) main_cset_slider_pane_t13

0xf9a1,	// (0x0002df6a) main_cset_slider_pane_t_ParamLimits

0x9c5d,	// (0x00028226) bg_popup_sub_pane_cp011

0xd4a2,	// (0x0002ba6b) main_cset_text_pane_g1

0xd4aa,	// (0x0002ba73) main_cset_text_pane_t1

0xd4b8,	// (0x0002ba81) main_cset_text_pane_t2

0xd4c6,	// (0x0002ba8f) main_cset_text_pane_t3

0xd4d4,	// (0x0002ba9d) main_cset_text_pane_t4

0xd4e2,	// (0x0002baab) main_cset_text_pane_t5

0xd4f0,	// (0x0002bab9) main_cset_text_pane_t6

0xd4fe,	// (0x0002bac7) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0002e001) main_cset_text_pane_t

0x9c5d,	// (0x00028226) main_cam4_burst_pane

0x9c5d,	// (0x00028226) main_cam5_pane

0x6f41,	// (0x0002550a) bg_button_pane_cp019

0x6f4a,	// (0x00025513) bg_button_pane_cp020

0xd32d,	// (0x0002b8f6) main_cset_slider_pane_g7_ParamLimits

0xd32d,	// (0x0002b8f6) main_cset_slider_pane_g7

0xd339,	// (0x0002b902) main_cset_slider_pane_g8_ParamLimits

0xd339,	// (0x0002b902) main_cset_slider_pane_g8

0x7097,	// (0x00025660) main_cset_slider_pane_g9_ParamLimits

0x7097,	// (0x00025660) main_cset_slider_pane_g9

0x70a3,	// (0x0002566c) main_cset_slider_pane_g10_ParamLimits

0x70a3,	// (0x0002566c) main_cset_slider_pane_g10

0x70af,	// (0x00025678) main_cset_slider_pane_g11_ParamLimits

0x70af,	// (0x00025678) main_cset_slider_pane_g11

0x70bb,	// (0x00025684) main_cset_slider_pane_g12_ParamLimits

0x70bb,	// (0x00025684) main_cset_slider_pane_g12

0x70c7,	// (0x00025690) main_cset_slider_pane_g13_ParamLimits

0x70c7,	// (0x00025690) main_cset_slider_pane_g13

0x70d3,	// (0x0002569c) main_cset_slider_pane_g14_ParamLimits

0x70d3,	// (0x0002569c) main_cset_slider_pane_g14

0x70df,	// (0x000256a8) main_cset_slider_pane_g15_ParamLimits

0x70df,	// (0x000256a8) main_cset_slider_pane_g15

0xd37f,	// (0x0002b948) main_cset_slider_pane_t14_ParamLimits

0xd37f,	// (0x0002b948) main_cset_slider_pane_t14

0xd3b8,	// (0x0002b981) main_cset_slider_pane_t15_ParamLimits

0xd3b8,	// (0x0002b981) main_cset_slider_pane_t15

0x75e4,	// (0x00025bad) aid_cam4_burst_size_cell_ParamLimits

0x75e4,	// (0x00025bad) aid_cam4_burst_size_cell

0x7600,	// (0x00025bc9) grid_cam4_burst_pane_ParamLimits

0x7600,	// (0x00025bc9) grid_cam4_burst_pane

0x7632,	// (0x00025bfb) linegrid_cam4_burst_pane_ParamLimits

0x7632,	// (0x00025bfb) linegrid_cam4_burst_pane

0x7650,	// (0x00025c19) scroll_pane_cp30_ParamLimits

0x7650,	// (0x00025c19) scroll_pane_cp30

0x765c,	// (0x00025c25) cell_cam4_burst_pane_ParamLimits

0x765c,	// (0x00025c25) cell_cam4_burst_pane

0xd50c,	// (0x0002bad5) linegrid_cam4_burst_pane_g1_ParamLimits

0xd50c,	// (0x0002bad5) linegrid_cam4_burst_pane_g1

0x769c,	// (0x00025c65) linegrid_cam4_burst_pane_g2_ParamLimits

0x769c,	// (0x00025c65) linegrid_cam4_burst_pane_g2

0xd519,	// (0x0002bae2) linegrid_cam4_burst_pane_g3_ParamLimits

0xd519,	// (0x0002bae2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0002e010) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0002e010) linegrid_cam4_burst_pane_g

0x76ad,	// (0x00025c76) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x76ad,	// (0x00025c76) linegrid_cam4_burst_pane_g3_copy1

0xd526,	// (0x0002baef) linegrid_cam4_burst_pane_g4_ParamLimits

0xd526,	// (0x0002baef) linegrid_cam4_burst_pane_g4

0x76c7,	// (0x00025c90) linegrid_cam4_burst_pane_g5_ParamLimits

0x76c7,	// (0x00025c90) linegrid_cam4_burst_pane_g5

0x76d8,	// (0x00025ca1) linegrid_cam4_burst_pane_g6_ParamLimits

0x76d8,	// (0x00025ca1) linegrid_cam4_burst_pane_g6

0xd533,	// (0x0002bafc) linegrid_cam4_burst_pane_g7_ParamLimits

0xd533,	// (0x0002bafc) linegrid_cam4_burst_pane_g7

0x76ef,	// (0x00025cb8) cell_cam4_burst_pane_g1

0xd54c,	// (0x0002bb15) main_cam5_pane_t1_ParamLimits

0xd54c,	// (0x0002bb15) main_cam5_pane_t1

0xd55e,	// (0x0002bb27) main_cam5_pane_t2_ParamLimits

0xd55e,	// (0x0002bb27) main_cam5_pane_t2

0xd570,	// (0x0002bb39) main_cam5_pane_t3_ParamLimits

0xd570,	// (0x0002bb39) main_cam5_pane_t3

0xd582,	// (0x0002bb4b) main_cam5_pane_t4_ParamLimits

0xd582,	// (0x0002bb4b) main_cam5_pane_t4

0xd59a,	// (0x0002bb63) main_cam5_pane_t5_ParamLimits

0xd59a,	// (0x0002bb63) main_cam5_pane_t5

0xd5ae,	// (0x0002bb77) main_cam5_pane_t6_ParamLimits

0xd5ae,	// (0x0002bb77) main_cam5_pane_t6

0xd5c2,	// (0x0002bb8b) main_cam5_pane_t7_ParamLimits

0xd5c2,	// (0x0002bb8b) main_cam5_pane_t7

0xd5d4,	// (0x0002bb9d) main_cam5_pane_t8_ParamLimits

0xd5d4,	// (0x0002bb9d) main_cam5_pane_t8

0xd5fe,	// (0x0002bbc7) main_cam5_pane_t9_ParamLimits

0xd5fe,	// (0x0002bbc7) main_cam5_pane_t9

0xd610,	// (0x0002bbd9) main_cam5_pane_t10_ParamLimits

0xd610,	// (0x0002bbd9) main_cam5_pane_t10

0xd622,	// (0x0002bbeb) main_cam5_pane_t11_ParamLimits

0xd622,	// (0x0002bbeb) main_cam5_pane_t11

0xd636,	// (0x0002bbff) main_cam5_pane_t12_ParamLimits

0xd636,	// (0x0002bbff) main_cam5_pane_t12

0xd64d,	// (0x0002bc16) main_cam5_pane_t13_ParamLimits

0xd64d,	// (0x0002bc16) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0002e01c) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0002e01c) main_cam5_pane_t

0x2549,	// (0x00020b12) popup_scut_keymap_window_ParamLimits

0x2549,	// (0x00020b12) popup_scut_keymap_window

0x7702,	// (0x00025ccb) aid_size_cell_brow_shortcut

0xaf26,	// (0x000294ef) bg_popup_window_pane_cp010

0x770e,	// (0x00025cd7) grid_scut_pane

0x771a,	// (0x00025ce3) cell_scut_pane_ParamLimits

0x771a,	// (0x00025ce3) cell_scut_pane

0x7735,	// (0x00025cfe) cell_scut_pane_g1

0xd670,	// (0x0002bc39) cell_scut_pane_t1

0xd67f,	// (0x0002bc48) cell_scut_pane_t2

0x773e,	// (0x00025d07) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0002e037) cell_scut_pane_t

0x604d,	// (0x00024616) main_mup3_pane_g8_ParamLimits

0x604d,	// (0x00024616) main_mup3_pane_g8

0x1da9,	// (0x00020372) area_vitu2_query_pane_ParamLimits

0x1da9,	// (0x00020372) area_vitu2_query_pane

0x748c,	// (0x00025a55) input_focus_pane_cp08

0xd68e,	// (0x0002bc57) area_vitu2_query_pane_g1

0x774c,	// (0x00025d15) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0002e03e) area_vitu2_query_pane_g

0x775d,	// (0x00025d26) area_vitu2_query_pane_t1_ParamLimits

0x775d,	// (0x00025d26) area_vitu2_query_pane_t1

0x7771,	// (0x00025d3a) area_vitu2_query_pane_t2_ParamLimits

0x7771,	// (0x00025d3a) area_vitu2_query_pane_t2

0x7785,	// (0x00025d4e) area_vitu2_query_pane_t3_ParamLimits

0x7785,	// (0x00025d4e) area_vitu2_query_pane_t3

0xd69a,	// (0x0002bc63) area_vitu2_query_pane_t4_ParamLimits

0xd69a,	// (0x0002bc63) area_vitu2_query_pane_t4

0xd6c2,	// (0x0002bc8b) area_vitu2_query_pane_t5_ParamLimits

0xd6c2,	// (0x0002bc8b) area_vitu2_query_pane_t5

0xd6ea,	// (0x0002bcb3) area_vitu2_query_pane_t6_ParamLimits

0xd6ea,	// (0x0002bcb3) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0002e043) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0002e043) area_vitu2_query_pane_t

0x77ad,	// (0x00025d76) bg_button_pane_cp018

0x77bb,	// (0x00025d84) bg_button_pane_cp021

0x77c7,	// (0x00025d90) bg_button_pane_cp022

0x77d8,	// (0x00025da1) input_focus_pane_cp09

0x47af,	// (0x00022d78) aid_size_touch_mv_arrow_left

0x47da,	// (0x00022da3) aid_size_touch_mv_arrow_right

0x70f7,	// (0x000256c0) main_cset_slider_pane_g16_ParamLimits

0x70f7,	// (0x000256c0) main_cset_slider_pane_g16

0x7103,	// (0x000256cc) main_cset_slider_pane_g17_ParamLimits

0x7103,	// (0x000256cc) main_cset_slider_pane_g17

0x76ef,	// (0x00025cb8) cell_cam4_burst_pane_g1_ParamLimits

0x9c5d,	// (0x00028226) compa_mode_pane

0x72f9,	// (0x000258c2) popup_vtel_slider_window_g3_ParamLimits

0x72f9,	// (0x000258c2) popup_vtel_slider_window_g3

0x730d,	// (0x000258d6) popup_vtel_slider_window_g4_ParamLimits

0x730d,	// (0x000258d6) popup_vtel_slider_window_g4

0x7321,	// (0x000258ea) popup_vtel_slider_window_t1_ParamLimits

0x7321,	// (0x000258ea) popup_vtel_slider_window_t1

0x9c5d,	// (0x00028226) main_cl_pane

0xc39b,	// (0x0002a964) popup_imed_adjust2_window_ParamLimits

0xc36f,	// (0x0002a938) bg_tb_trans_pane_cp05_ParamLimits

0xcca9,	// (0x0002b272) popup_imed_adjust2_window_g1_ParamLimits

0xccb8,	// (0x0002b281) popup_imed_adjust2_window_g2_ParamLimits

0xccb8,	// (0x0002b281) popup_imed_adjust2_window_g2

0xccc4,	// (0x0002b28d) popup_imed_adjust2_window_g3_ParamLimits

0xccc4,	// (0x0002b28d) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0002ddae) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0002ddae) popup_imed_adjust2_window_g

0xccd0,	// (0x0002b299) popup_imed_adjust2_window_t1_ParamLimits

0xcce8,	// (0x0002b2b1) slider_imed_adjust_pane_ParamLimits

0xccfc,	// (0x0002b2c5) slider_imed_adjust_pane_g1_ParamLimits

0xcd0c,	// (0x0002b2d5) slider_imed_adjust_pane_g2_ParamLimits

0xcd1c,	// (0x0002b2e5) slider_imed_adjust_pane_g3_ParamLimits

0xcd2d,	// (0x0002b2f6) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0002ddb5) slider_imed_adjust_pane_g_ParamLimits

0x1b16,	// (0x000200df) aid_touch_area_cam4_ParamLimits

0x1b16,	// (0x000200df) aid_touch_area_cam4

0x1b26,	// (0x000200ef) battery_pane_cp01

0x1bad,	// (0x00020176) main_camera4_pane_g6_ParamLimits

0x1bad,	// (0x00020176) main_camera4_pane_g6

0x1bcb,	// (0x00020194) main_camera4_pane_t2_ParamLimits

0x1bcb,	// (0x00020194) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0002deb8) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0002deb8) main_camera4_pane_t

0x1c36,	// (0x000201ff) aid_touch_area_vid4_ParamLimits

0x1c36,	// (0x000201ff) aid_touch_area_vid4

0x1c76,	// (0x0002023f) main_video4_pane_g5_ParamLimits

0x1c76,	// (0x0002023f) main_video4_pane_g5

0x1c9c,	// (0x00020265) vid4_progress_pane_ParamLimits

0x1c9c,	// (0x00020265) vid4_progress_pane

0xd345,	// (0x0002b90e) main_cset_slider_pane_g18_ParamLimits

0xd345,	// (0x0002b90e) main_cset_slider_pane_g18

0xd540,	// (0x0002bb09) cell_cam4_burst_pane_g2_ParamLimits

0xd540,	// (0x0002bb09) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0002e017) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0002e017) cell_cam4_burst_pane_g

0x77e9,	// (0x00025db2) bg_cl_pane_ParamLimits

0x77e9,	// (0x00025db2) bg_cl_pane

0x77f5,	// (0x00025dbe) cl_header_pane_ParamLimits

0x77f5,	// (0x00025dbe) cl_header_pane

0x7801,	// (0x00025dca) cl_listscroll_pane_ParamLimits

0x7801,	// (0x00025dca) cl_listscroll_pane

0xd736,	// (0x0002bcff) bg_cl_pane_g1

0xd73e,	// (0x0002bd07) bg_cl_pane_g2

0xd746,	// (0x0002bd0f) bg_cl_pane_g3

0xd74e,	// (0x0002bd17) bg_cl_pane_g4

0xd756,	// (0x0002bd1f) bg_cl_pane_g5

0xd75e,	// (0x0002bd27) bg_cl_pane_g6

0xd766,	// (0x0002bd2f) bg_cl_pane_g7

0xd76e,	// (0x0002bd37) bg_cl_pane_g8

0xd776,	// (0x0002bd3f) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0002e052) bg_cl_pane_g

0x780d,	// (0x00025dd6) aid_height_cl_leading_ParamLimits

0x780d,	// (0x00025dd6) aid_height_cl_leading

0x7819,	// (0x00025de2) aid_height_cl_text_ParamLimits

0x7819,	// (0x00025de2) aid_height_cl_text

0x2580,	// (0x00020b49) bg_cl_header_pane_ParamLimits

0x2580,	// (0x00020b49) bg_cl_header_pane

0x7831,	// (0x00025dfa) cl_header_pane_g1_ParamLimits

0x7831,	// (0x00025dfa) cl_header_pane_g1

0x783e,	// (0x00025e07) cl_header_pane_t1_ParamLimits

0x783e,	// (0x00025e07) cl_header_pane_t1

0xd77e,	// (0x0002bd47) cl_list_pane

0xd318,	// (0x0002b8e1) hc_scroll_pane_cp01

0xa812,	// (0x00028ddb) bg_cl_header_pane_g1

0xd1d1,	// (0x0002b79a) bg_cl_header_pane_g2

0xa832,	// (0x00028dfb) bg_cl_header_pane_g3

0xd1e1,	// (0x0002b7aa) bg_cl_header_pane_g4

0xd1d9,	// (0x0002b7a2) bg_cl_header_pane_g5

0xd44d,	// (0x0002ba16) bg_cl_header_pane_g6

0xd1f9,	// (0x0002b7c2) bg_cl_header_pane_g7

0xd201,	// (0x0002b7ca) bg_cl_header_pane_g8

0xd1f1,	// (0x0002b7ba) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0002e065) bg_cl_header_pane_g

0x7850,	// (0x00025e19) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7850,	// (0x00025e19) hc_cl_list_double_graphic_heading_pane

0x7860,	// (0x00025e29) hc_cl_list_single_graphic_pane_ParamLimits

0x7860,	// (0x00025e29) hc_cl_list_single_graphic_pane

0x7872,	// (0x00025e3b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7872,	// (0x00025e3b) hc_cl_list_single_graphic_pane_g1

0x787e,	// (0x00025e47) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x787e,	// (0x00025e47) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0002e078) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0002e078) hc_cl_list_single_graphic_pane_g

0x7892,	// (0x00025e5b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7892,	// (0x00025e5b) hc_cl_list_single_graphic_pane_t1

0x7872,	// (0x00025e3b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7872,	// (0x00025e3b) hc_cl_list_double_graphic_heading_pane_g1

0x78a7,	// (0x00025e70) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x78a7,	// (0x00025e70) hc_cl_list_double_graphic_heading_pane_g2

0x78bb,	// (0x00025e84) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x78bb,	// (0x00025e84) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0002e07d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0002e07d) hc_cl_list_double_graphic_heading_pane_g

0x78cf,	// (0x00025e98) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x78cf,	// (0x00025e98) hc_cl_list_double_graphic_heading_pane_t1

0x78e4,	// (0x00025ead) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x78e4,	// (0x00025ead) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0002e084) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0002e084) hc_cl_list_double_graphic_heading_pane_t

0x21e1,	// (0x000207aa) vid4_progress_pane_g1

0x21f3,	// (0x000207bc) vid4_progress_pane_g2

0x12da,	// (0x0001f8a3) vid4_progress_pane_g3

0x2205,	// (0x000207ce) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0002e089) vid4_progress_pane_g

0x2223,	// (0x000207ec) vid4_progress_pane_t1

0x2238,	// (0x00020801) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0002e094) vid4_progress_pane_t

0x2263,	// (0x0002082c) wait_bar_pane_cp07

0xc5ad,	// (0x0002ab76) blid_firmament_pane_ParamLimits

0xc5f0,	// (0x0002abb9) popup_blid_sat_info2_window_g1

0xc614,	// (0x0002abdd) popup_blid_sat_info2_window_t3

0xc622,	// (0x0002abeb) popup_blid_sat_info2_window_t4

0xc630,	// (0x0002abf9) popup_blid_sat_info2_window_t5

0xc63e,	// (0x0002ac07) popup_blid_sat_info2_window_t6

0xc64e,	// (0x0002ac17) popup_blid_sat_info2_window_t7

0xc65c,	// (0x0002ac25) popup_blid_sat_info2_window_t8

0xc66a,	// (0x0002ac33) popup_blid_sat_info2_window_t9

0xc678,	// (0x0002ac41) popup_blid_sat_info2_window_t10

0xc740,	// (0x0002ad09) aid_firma_cardinal_ParamLimits

0xc754,	// (0x0002ad1d) blid_firmament_pane_t1_ParamLimits

0xc76b,	// (0x0002ad34) blid_firmament_pane_t2_ParamLimits

0xc782,	// (0x0002ad4b) blid_firmament_pane_t3_ParamLimits

0xc799,	// (0x0002ad62) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0002dca7) blid_firmament_pane_t_ParamLimits

0xc7b0,	// (0x0002ad79) blid_sat_info_pane_ParamLimits

0xa415,	// (0x000289de) main_cam_set_pane_ParamLimits

0x6779,	// (0x00024d42) aid_size_cell_colour_35_ParamLimits

0x6793,	// (0x00024d5c) aid_size_cell_colour_112_ParamLimits

0x67aa,	// (0x00024d73) aid_size_cell_effect_ParamLimits

0xa415,	// (0x000289de) bg_tb_trans_pane_cp02_ParamLimits

0xab37,	// (0x00029100) heading_imed_pane_ParamLimits

0x67c4,	// (0x00024d8d) listscroll_imed_pane_ParamLimits

0xb991,	// (0x00029f5a) popup_call2_audio_first_window_g5_ParamLimits

0xb991,	// (0x00029f5a) popup_call2_audio_first_window_g5

0x199f,	// (0x0001ff68) aid_size_touch_image3_arrow_left_ParamLimits

0x199f,	// (0x0001ff68) aid_size_touch_image3_arrow_left

0x19b5,	// (0x0001ff7e) aid_size_touch_image3_arrow_right_ParamLimits

0x19b5,	// (0x0001ff7e) aid_size_touch_image3_arrow_right

0x224e,	// (0x00020817) vid4_progress_pane_t3

0x6a72,	// (0x0002503b) main_hwr_training_symbol_option_pane_ParamLimits

0x6a72,	// (0x0002503b) main_hwr_training_symbol_option_pane

0xcf98,	// (0x0002b561) popup_hwr_training_preview_window_ParamLimits

0xcf98,	// (0x0002b561) popup_hwr_training_preview_window

0x1695,	// (0x0001fc5e) hwr_training_navi_pane_g5_ParamLimits

0x1695,	// (0x0001fc5e) hwr_training_navi_pane_g5

0xd1bf,	// (0x0002b788) popup_char_count_window

0x2111,	// (0x000206da) bg_popup_sub_pane_cp20_ParamLimits

0x211f,	// (0x000206e8) list_vitu2_match_list_pane_ParamLimits

0x212b,	// (0x000206f4) vitu2_page_scroll_pane_ParamLimits

0x212b,	// (0x000206f4) vitu2_page_scroll_pane

0xd7b1,	// (0x0002bd7a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7b1,	// (0x0002bd7a) list_single_hwr_training_symbol_option_pane

0xd7c4,	// (0x0002bd8d) list_single_hwr_training_symbol_option_pane_g1

0xd7cc,	// (0x0002bd95) list_single_hwr_training_symbol_option_pane_t1

0xd7da,	// (0x0002bda3) bg_button_pane_cp023

0xd7e3,	// (0x0002bdac) bg_button_pane_cp024

0x7931,	// (0x00025efa) vitu2_page_scroll_pane_g1

0x7939,	// (0x00025f02) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0002e09b) vitu2_page_scroll_pane_g

0x7943,	// (0x00025f0c) vitu2_page_scroll_pane_t1

0xc50d,	// (0x0002aad6) popup_char_count_window_g1

0xd816,	// (0x0002bddf) popup_char_count_window_g2

0xd81f,	// (0x0002bde8) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0002e0a0) popup_char_count_window_g

0xd828,	// (0x0002bdf1) popup_char_count_window_t1

0x9c5d,	// (0x00028226) main_vded2_pane

0xcc95,	// (0x0002b25e) aid_size_cell_imed_line

0xcc9f,	// (0x0002b268) grid_imed_line_width_pane

0x1d1e,	// (0x000202e7) vid4_indicators_pane_g4

0xd836,	// (0x0002bdff) cell_imed_line_width_pane_ParamLimits

0xd836,	// (0x0002bdff) cell_imed_line_width_pane

0xd84c,	// (0x0002be15) cell_imed_line_width_pane_g1

0xd787,	// (0x0002bd50) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0002e0a7) cell_imed_line_width_pane_g

0x7952,	// (0x00025f1b) main_vded2_pane_g1_ParamLimits

0x7952,	// (0x00025f1b) main_vded2_pane_g1

0x7961,	// (0x00025f2a) main_vded2_pane_g2_ParamLimits

0x7961,	// (0x00025f2a) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0002e0ac) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0002e0ac) main_vded2_pane_g

0x796f,	// (0x00025f38) vded2_slider_pane_ParamLimits

0x796f,	// (0x00025f38) vded2_slider_pane

0x797c,	// (0x00025f45) aid_size_touch_vded2_end

0x7986,	// (0x00025f4f) aid_size_touch_vded2_playhead

0xd855,	// (0x0002be1e) aid_size_touch_vded2_start

0xd85d,	// (0x0002be26) vded2_slider_bg_pane

0xd866,	// (0x0002be2f) vded2_slider_pane_g1

0xd86f,	// (0x0002be38) vded2_slider_pane_g2

0x798e,	// (0x00025f57) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0002e0b1) vded2_slider_pane_g

0xd21f,	// (0x0002b7e8) vded2_slider_bg_pane_g1

0xd228,	// (0x0002b7f1) vded2_slider_bg_pane_g2

0xd231,	// (0x0002b7fa) vded2_slider_bg_pane_g3

0x0002,

0xf7ae,	// (0x0002dd77) vded2_slider_bg_pane_g

0x4e81,	// (0x0002344a) aid_postcard_touch_down_pane_ParamLimits

0x4e81,	// (0x0002344a) aid_postcard_touch_down_pane

0x4e91,	// (0x0002345a) aid_postcard_touch_up_pane_ParamLimits

0x4e91,	// (0x0002345a) aid_postcard_touch_up_pane

0x9c5d,	// (0x00028226) main_blid2_pane

0xc37d,	// (0x0002a946) popup_blid2_search_window

0x9c5d,	// (0x00028226) blid2_gps_pane

0x9c5d,	// (0x00028226) blid2_navig_pane

0x9c5d,	// (0x00028226) blid2_search_pane

0x9c5d,	// (0x00028226) blid2_tripm_pane

0x7997,	// (0x00025f60) blid2_search_pane_g1_ParamLimits

0x7997,	// (0x00025f60) blid2_search_pane_g1

0x79a3,	// (0x00025f6c) blid2_search_pane_t1_ParamLimits

0x79a3,	// (0x00025f6c) blid2_search_pane_t1

0x79b5,	// (0x00025f7e) aid_size_cell_blid2_gps_ParamLimits

0x79b5,	// (0x00025f7e) aid_size_cell_blid2_gps

0x79c5,	// (0x00025f8e) blid2_gps_pane_g1_ParamLimits

0x79c5,	// (0x00025f8e) blid2_gps_pane_g1

0x79d1,	// (0x00025f9a) grid_blid2_satellite_pane_ParamLimits

0x79d1,	// (0x00025f9a) grid_blid2_satellite_pane

0x79df,	// (0x00025fa8) blid2_navig_pane_g1_ParamLimits

0x79df,	// (0x00025fa8) blid2_navig_pane_g1

0x79eb,	// (0x00025fb4) blid2_navig_pane_t1_ParamLimits

0x79eb,	// (0x00025fb4) blid2_navig_pane_t1

0x79fd,	// (0x00025fc6) blid2_navig_pane_t2_ParamLimits

0x79fd,	// (0x00025fc6) blid2_navig_pane_t2

0x0001,

0xfaef,	// (0x0002e0b8) blid2_navig_pane_t_ParamLimits

0xfaef,	// (0x0002e0b8) blid2_navig_pane_t

0x7a0f,	// (0x00025fd8) blid2_navig_ring_pane_ParamLimits

0x7a0f,	// (0x00025fd8) blid2_navig_ring_pane

0x7a1f,	// (0x00025fe8) blid2_speed_pane_ParamLimits

0x7a1f,	// (0x00025fe8) blid2_speed_pane

0x7a2b,	// (0x00025ff4) blid2_tripm_pane_g1_ParamLimits

0x7a2b,	// (0x00025ff4) blid2_tripm_pane_g1

0x7a3b,	// (0x00026004) blid2_tripm_pane_g2_ParamLimits

0x7a3b,	// (0x00026004) blid2_tripm_pane_g2

0x7a47,	// (0x00026010) blid2_tripm_pane_g3_ParamLimits

0x7a47,	// (0x00026010) blid2_tripm_pane_g3

0x7a53,	// (0x0002601c) blid2_tripm_pane_g4_ParamLimits

0x7a53,	// (0x0002601c) blid2_tripm_pane_g4

0x7a5f,	// (0x00026028) blid2_tripm_pane_g5_ParamLimits

0x7a5f,	// (0x00026028) blid2_tripm_pane_g5

0x0005,

0xfaf4,	// (0x0002e0bd) blid2_tripm_pane_g_ParamLimits

0xfaf4,	// (0x0002e0bd) blid2_tripm_pane_g

0x7a7b,	// (0x00026044) blid2_tripm_pane_t1_ParamLimits

0x7a7b,	// (0x00026044) blid2_tripm_pane_t1

0x7a8d,	// (0x00026056) blid2_tripm_pane_t2_ParamLimits

0x7a8d,	// (0x00026056) blid2_tripm_pane_t2

0x7a9f,	// (0x00026068) blid2_tripm_pane_t3_ParamLimits

0x7a9f,	// (0x00026068) blid2_tripm_pane_t3

0x0003,

0xfb01,	// (0x0002e0ca) blid2_tripm_pane_t_ParamLimits

0xfb01,	// (0x0002e0ca) blid2_tripm_pane_t

0x7ad1,	// (0x0002609a) cell_blid2_satellite_pane_ParamLimits

0x7ad1,	// (0x0002609a) cell_blid2_satellite_pane

0x7aef,	// (0x000260b8) cell_blid2_satellite_pane_g1

0xd877,	// (0x0002be40) cell_blid2_satellite_pane_t1

0xc7c0,	// (0x0002ad89) blid2_speed_pane_g1

0xd885,	// (0x0002be4e) blid2_speed_pane_t1

0xd893,	// (0x0002be5c) blid2_speed_pane_t2

0x0001,

0xfb0a,	// (0x0002e0d3) blid2_speed_pane_t

0xc7c0,	// (0x0002ad89) blid2_navig_ring_pane_g1

0x7af8,	// (0x000260c1) blid2_navig_ring_pane_g2

0x7b00,	// (0x000260c9) blid2_navig_ring_pane_g3

0x7b08,	// (0x000260d1) blid2_navig_ring_pane_g4

0x7b10,	// (0x000260d9) blid2_navig_ring_pane_g5

0x0004,

0xfb0f,	// (0x0002e0d8) blid2_navig_ring_pane_g

0x9c5d,	// (0x00028226) bg_popup_window_pane_cp011

0xd8a1,	// (0x0002be6a) popup_blid2_search_window_g1

0xd8a9,	// (0x0002be72) popup_blid2_search_window_t1

0xd8b7,	// (0x0002be80) popup_blid2_search_window_t2

0x0001,

0xfb1a,	// (0x0002e0e3) popup_blid2_search_window_t

0xa721,	// (0x00028cea) main_browser_pane_g1

0xa3f1,	// (0x000289ba) main_browser_pane_ParamLimits

0x1cc9,	// (0x00020292) bg_button_pane_cp011_ParamLimits

0x2033,	// (0x000205fc) cell_vitu2_function_pane_g1_ParamLimits

0xc36f,	// (0x0002a938) bg_popup_sub_pane_cp22_ParamLimits

0x748c,	// (0x00025a55) input_focus_pane_cp08_ParamLimits

0x74a3,	// (0x00025a6c) popup_vitu2_query_button_pane_ParamLimits

0x74a3,	// (0x00025a6c) popup_vitu2_query_button_pane

0x74b4,	// (0x00025a7d) popup_vitu2_query_input_button_pane

0xd496,	// (0x0002ba5f) popup_vitu2_query_window_g1_ParamLimits

0x74be,	// (0x00025a87) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0002dfeb) popup_vitu2_query_window_g_ParamLimits

0x9c5d,	// (0x00028226) bg_button_pane_cp026

0x7b18,	// (0x000260e1) popup_vitu2_query_input_button_pane_g1

0x9c5d,	// (0x00028226) bg_button_pane_cp025

0xd8c5,	// (0x0002be8e) popup_vitu2_query_button_pane_t1

0x5d30,	// (0x000242f9) main_mp3_pane_t6

0x5d40,	// (0x00024309) popup_slider_window_cp01

0x1beb,	// (0x000201b4) cam4_battery_pane

0x1cd7,	// (0x000202a0) cam4_battery_pane_cp02

0x21d9,	// (0x000207a2) cam4_battery_pane_cp01

0x21d9,	// (0x000207a2) cam4_battery_pane_cp03

0xd8d3,	// (0x0002be9c) cam4_battery_pane_g1

0xc7c0,	// (0x0002ad89) cam4_battery_pane_g2

0x0001,

0xfb1f,	// (0x0002e0e8) cam4_battery_pane_g

0xc686,	// (0x0002ac4f) popup_blid_sat_info2_window_t11

0x47af,	// (0x00022d78) aid_size_touch_mv_arrow_left_ParamLimits

0x47da,	// (0x00022da3) aid_size_touch_mv_arrow_right_ParamLimits

0xae86,	// (0x0002944f) navi_pane_g1_ParamLimits

0x4819,	// (0x00022de2) navi_pane_g2_ParamLimits

0x4847,	// (0x00022e10) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0002d9b9) navi_pane_g_ParamLimits

0x48a1,	// (0x00022e6a) navi_pane_mv_t1_ParamLimits

0x67d0,	// (0x00024d99) grid_imed_effect_pane_ParamLimits

0x3318,	// (0x000218e1) aid_placing_vt_slider_lsc

0xa66c,	// (0x00028c35) aid_placing_vt_slider_prt

0xa415,	// (0x000289de) bg_tb_trans_pane_cp01_ParamLimits

0xc910,	// (0x0002aed9) popup_image_details_window_g1_ParamLimits

0xc923,	// (0x0002aeec) popup_image_details_window_g2_ParamLimits

0xc938,	// (0x0002af01) popup_image_details_window_g3_ParamLimits

0xc938,	// (0x0002af01) popup_image_details_window_g3

0xf723,	// (0x0002dcec) popup_image_details_window_g_ParamLimits

0xc94c,	// (0x0002af15) popup_image_details_window_t1_ParamLimits

0xc95e,	// (0x0002af27) popup_image_details_window_t2_ParamLimits

0xc977,	// (0x0002af40) popup_image_details_window_t3_ParamLimits

0xc98b,	// (0x0002af54) popup_image_details_window_t4_ParamLimits

0xc9a6,	// (0x0002af6f) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0002dcf3) popup_image_details_window_t_ParamLimits

0x7825,	// (0x00025dee) cl_header_name_pane_ParamLimits

0x7825,	// (0x00025dee) cl_header_name_pane

0x7b20,	// (0x000260e9) cl_header_name_pane_t1_ParamLimits

0x7b20,	// (0x000260e9) cl_header_name_pane_t1

0x7b37,	// (0x00026100) cl_header_name_pane_t2_ParamLimits

0x7b37,	// (0x00026100) cl_header_name_pane_t2

0x7b61,	// (0x0002612a) cl_header_name_pane_t3_ParamLimits

0x7b61,	// (0x0002612a) cl_header_name_pane_t3

0x0002,

0xfb24,	// (0x0002e0ed) cl_header_name_pane_t_ParamLimits

0xfb24,	// (0x0002e0ed) cl_header_name_pane_t

0x4872,	// (0x00022e3b) navi_pane_mv_g2_ParamLimits

0xd17c,	// (0x0002b745) field_vitu2_entry_pane_g1_ParamLimits

0xd188,	// (0x0002b751) field_vitu2_entry_pane_g2_ParamLimits

0xd194,	// (0x0002b75d) field_vitu2_entry_pane_g3_ParamLimits

0xd194,	// (0x0002b75d) field_vitu2_entry_pane_g3

0xf921,	// (0x0002deea) field_vitu2_entry_pane_g_ParamLimits

0x1f08,	// (0x000204d1) cell_vitu2_itu_pane_g1_ParamLimits

0x1f18,	// (0x000204e1) cell_vitu2_itu_pane_g2_ParamLimits

0x1f18,	// (0x000204e1) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0002def6) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0002def6) cell_vitu2_itu_pane_g

0x1cc9,	// (0x00020292) bg_vkb2_func_pane_cp05_ParamLimits

0x1cc9,	// (0x00020292) bg_vkb2_func_pane_cp05

0x1cc9,	// (0x00020292) bg_vkb2_func_pane_cp03

0x1cc9,	// (0x00020292) bg_vkb2_func_pane_cp04

0x1cc9,	// (0x00020292) bg_vkb2_func_pane_cp10_ParamLimits

0x1cc9,	// (0x00020292) bg_vkb2_func_pane_cp10

0x77c7,	// (0x00025d90) bg_vkb2_func_pane_cp08

0x77ad,	// (0x00025d76) bg_vkb2_func_pane_cp06

0x77bb,	// (0x00025d84) bg_vkb2_func_pane_cp07

0xd7ec,	// (0x0002bdb5) bg_vkb2_func_pane_cp11_ParamLimits

0xd7ec,	// (0x0002bdb5) bg_vkb2_func_pane_cp11

0xd801,	// (0x0002bdca) bg_vkb2_func_pane_cp12_ParamLimits

0xd801,	// (0x0002bdca) bg_vkb2_func_pane_cp12

0x9c5d,	// (0x00028226) bg_vkb2_func_pane_cp09

0xd1d1,	// (0x0002b79a) bg_vkb2_func_pane_g1

0xa832,	// (0x00028dfb) bg_vkb2_func_pane_g2

0xd1d9,	// (0x0002b7a2) bg_vkb2_func_pane_g3

0xd1e1,	// (0x0002b7aa) bg_vkb2_func_pane_g4

0xd44d,	// (0x0002ba16) bg_vkb2_func_pane_g5

0xd1f9,	// (0x0002b7c2) bg_vkb2_func_pane_g6

0xd201,	// (0x0002b7ca) bg_vkb2_func_pane_g7

0xd1f1,	// (0x0002b7ba) bg_vkb2_func_pane_g8

0xa812,	// (0x00028ddb) bg_vkb2_func_pane_g9

0x0008,

0xfb2b,	// (0x0002e0f4) bg_vkb2_func_pane_g

0x7a6d,	// (0x00026036) blid2_tripm_pane_g6_ParamLimits

0x7a6d,	// (0x00026036) blid2_tripm_pane_g6

0xd050,	// (0x0002b619) mp4_progress_pane_g1

0x7ac5,	// (0x0002608e) blid2_tripm_values_pane_ParamLimits

0x7ac5,	// (0x0002608e) blid2_tripm_values_pane

0x7b86,	// (0x0002614f) blid2_tripm_values_pane_t1

0x7b94,	// (0x0002615d) blid2_tripm_values_pane_t2

0x7ba2,	// (0x0002616b) blid2_tripm_values_pane_t3

0x7bb0,	// (0x00026179) blid2_tripm_values_pane_t4

0x7bbe,	// (0x00026187) blid2_tripm_values_pane_t5

0x7bcc,	// (0x00026195) blid2_tripm_values_pane_t6

0x7bda,	// (0x000261a3) blid2_tripm_values_pane_t7

0x7be8,	// (0x000261b1) blid2_tripm_values_pane_t8

0x7bf6,	// (0x000261bf) blid2_tripm_values_pane_t9

0x0008,

0xfb3e,	// (0x0002e107) blid2_tripm_values_pane_t

0x3356,	// (0x0002191f) call_video_pane_t1_ParamLimits

0x3373,	// (0x0002193c) call_video_pane_t2_ParamLimits

0xf279,	// (0x0002d842) call_video_pane_t_ParamLimits

0x4dfe,	// (0x000233c7) msg_header_pane_g1_ParamLimits

0xb0a2,	// (0x0002966b) msg_header_pane_g2_ParamLimits

0xb0a2,	// (0x0002966b) msg_header_pane_g2

0x0001,

0xf493,	// (0x0002da5c) msg_header_pane_g_ParamLimits

0xf493,	// (0x0002da5c) msg_header_pane_g

0xa3f1,	// (0x000289ba) main_clock2_pane_ParamLimits

0x65d7,	// (0x00024ba0) grid_clock2_toolbar_pane_ParamLimits

0x65d7,	// (0x00024ba0) grid_clock2_toolbar_pane

0x65d7,	// (0x00024ba0) listscroll_clock2_pane_ParamLimits

0x65d7,	// (0x00024ba0) listscroll_clock2_pane

0x667f,	// (0x00024c48) main_clock2_pane_t3_ParamLimits

0x667f,	// (0x00024c48) main_clock2_pane_t3

0x6691,	// (0x00024c5a) main_clock2_pane_t4_ParamLimits

0x6691,	// (0x00024c5a) main_clock2_pane_t4

0xd8dd,	// (0x0002bea6) cell_clock2_toolbar_pane

0xd8e5,	// (0x0002beae) cell_clock2_toolbar_pane_cp01

0xd8e5,	// (0x0002beae) cell_clock2_toolbar_pane_cp02

0xd8ed,	// (0x0002beb6) cell_clock2_toolbar_pane_cp03

0xd8f5,	// (0x0002bebe) list_clock2_pane

0xadec,	// (0x000293b5) scroll_pane_cp10

0xd8fd,	// (0x0002bec6) list_single_clock2_pane_ParamLimits

0xd8fd,	// (0x0002bec6) list_single_clock2_pane

0xaf26,	// (0x000294ef) list_highlight_pane_cp08

0xd90a,	// (0x0002bed3) list_single_clock2_pane_t1

0xd918,	// (0x0002bee1) list_single_clock2_pane_t2

0x0001,

0xfb51,	// (0x0002e11a) list_single_clock2_pane_t

0x9c5d,	// (0x00028226) bg_button_pane_cp10

0xd926,	// (0x0002beef) cell_clock2_toolbar_pane_g1

0x1298,	// (0x0001f861) aid_main_viewer_pane_g1_ParamLimits

0x1298,	// (0x0001f861) aid_main_viewer_pane_g1

0x12a4,	// (0x0001f86d) aid_main_viewer_pane_g2_ParamLimits

0x12a4,	// (0x0001f86d) aid_main_viewer_pane_g2

0x4e3d,	// (0x00023406) aid_main_viewer_pane_g3_ParamLimits

0x4e3d,	// (0x00023406) aid_main_viewer_pane_g3

0x4e4e,	// (0x00023417) aid_main_viewer_pane_g4_ParamLimits

0x4e4e,	// (0x00023417) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0002da6d) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0002da6d) aid_main_viewer_pane_g

0x5596,	// (0x00023b5f) main_calc_pane_ParamLimits

0x55a3,	// (0x00023b6c) main_dialer2_pane_ParamLimits

0x9c5d,	// (0x00028226) main_cam6_pane

0x9c5d,	// (0x00028226) main_vid6_pane

0x65e3,	// (0x00024bac) listscroll_gen_pane_cp06_ParamLimits

0x65e3,	// (0x00024bac) listscroll_gen_pane_cp06

0x66a3,	// (0x00024c6c) main_clock2_pane_t5_ParamLimits

0x66a3,	// (0x00024c6c) main_clock2_pane_t5

0x66f2,	// (0x00024cbb) aid_call2_pane_cp10_ParamLimits

0x6704,	// (0x00024ccd) aid_call_pane_cp10_ParamLimits

0xae5b,	// (0x00029424) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae5b,	// (0x00029424) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6716,	// (0x00024cdf) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6716,	// (0x00024cdf) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae5b,	// (0x00029424) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0002dda3) popup_clock_analogue_window_cp10_g_ParamLimits

0x6728,	// (0x00024cf1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6b38,	// (0x00025101) cell_dialer2_keypad_pane_g2_ParamLimits

0x6b38,	// (0x00025101) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0002de89) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0002de89) cell_dialer2_keypad_pane_g

0x6b54,	// (0x0002511d) cell_dialer2_keypad_pane_t1

0x6fe5,	// (0x000255ae) main_cset_text2_pane_ParamLimits

0x6fe5,	// (0x000255ae) main_cset_text2_pane

0xd68e,	// (0x0002bc57) area_vitu2_query_pane_g1_ParamLimits

0x774c,	// (0x00025d15) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0002e03e) area_vitu2_query_pane_g_ParamLimits

0xd712,	// (0x0002bcdb) area_vitu2_query_pane_t7_ParamLimits

0xd712,	// (0x0002bcdb) area_vitu2_query_pane_t7

0x77ad,	// (0x00025d76) bg_button_pane_cp018_ParamLimits

0x77bb,	// (0x00025d84) bg_button_pane_cp021_ParamLimits

0x77c7,	// (0x00025d90) bg_button_pane_cp022_ParamLimits

0x77c7,	// (0x00025d90) bg_vkb2_func_pane_cp08_ParamLimits

0x77ad,	// (0x00025d76) bg_vkb2_func_pane_cp06_ParamLimits

0x77bb,	// (0x00025d84) bg_vkb2_func_pane_cp07_ParamLimits

0x77d8,	// (0x00025da1) input_focus_pane_cp09_ParamLimits

0x2277,	// (0x00020840) cam6_autofocus_pane_ParamLimits

0x2277,	// (0x00020840) cam6_autofocus_pane

0x2299,	// (0x00020862) cam6_image_uncrop_pane_ParamLimits

0x2299,	// (0x00020862) cam6_image_uncrop_pane

0x22c6,	// (0x0002088f) cam6_indi_pane_ParamLimits

0x22c6,	// (0x0002088f) cam6_indi_pane

0x22e0,	// (0x000208a9) cam6_mode_pane_ParamLimits

0x22e0,	// (0x000208a9) cam6_mode_pane

0x22f4,	// (0x000208bd) cam6_timer_pane_ParamLimits

0x22f4,	// (0x000208bd) cam6_timer_pane

0x2300,	// (0x000208c9) cam6_zoom_pane_ParamLimits

0x2300,	// (0x000208c9) cam6_zoom_pane

0x7c04,	// (0x000261cd) cam6_mode_pane_g1_ParamLimits

0x7c04,	// (0x000261cd) cam6_mode_pane_g1

0x7c10,	// (0x000261d9) cam6_mode_pane_g2_ParamLimits

0x7c10,	// (0x000261d9) cam6_mode_pane_g2

0x7c1c,	// (0x000261e5) cam6_mode_pane_g3_ParamLimits

0x7c1c,	// (0x000261e5) cam6_mode_pane_g3

0x7c28,	// (0x000261f1) cam6_mode_pane_g4_ParamLimits

0x7c28,	// (0x000261f1) cam6_mode_pane_g4

0x0003,

0xfb56,	// (0x0002e11f) cam6_mode_pane_g_ParamLimits

0xfb56,	// (0x0002e11f) cam6_mode_pane_g

0xd23a,	// (0x0002b803) bg_tb_trans_pane_cp08_ParamLimits

0xd23a,	// (0x0002b803) bg_tb_trans_pane_cp08

0xd92e,	// (0x0002bef7) cam6_battery_pane_ParamLimits

0xd92e,	// (0x0002bef7) cam6_battery_pane

0xd944,	// (0x0002bf0d) cam6_indi_pane_g1_ParamLimits

0xd944,	// (0x0002bf0d) cam6_indi_pane_g1

0xd956,	// (0x0002bf1f) cam6_indi_pane_g2_ParamLimits

0xd956,	// (0x0002bf1f) cam6_indi_pane_g2

0xd968,	// (0x0002bf31) cam6_indi_pane_g3_ParamLimits

0xd968,	// (0x0002bf31) cam6_indi_pane_g3

0x0002,

0x0958,	// (0x0001ef21) cam6_indi_pane_g_ParamLimits

0x0958,	// (0x0001ef21) cam6_indi_pane_g

0xd97a,	// (0x0002bf43) cam6_indi_pane_t1_ParamLimits

0xd97a,	// (0x0002bf43) cam6_indi_pane_t1

0x6cd7,	// (0x000252a0) cam6_autofocus_pane_g1

0x6ccf,	// (0x00025298) cam6_autofocus_pane_g2

0x6ce7,	// (0x000252b0) cam6_autofocus_pane_g3

0x6cdf,	// (0x000252a8) cam6_autofocus_pane_g4

0x0003,

0xfb5f,	// (0x0002e128) cam6_autofocus_pane_g

0xd9a0,	// (0x0002bf69) cam6_timer_pane_g1

0xd9a8,	// (0x0002bf71) cam6_timer_pane_t1

0xd9b6,	// (0x0002bf7f) cam6_zoom_cont_pane

0xd9be,	// (0x0002bf87) cam6_zoom_pane_g1

0xd9c6,	// (0x0002bf8f) cam6_zoom_pane_g2

0x7c34,	// (0x000261fd) cam6_zoom_pane_g3

0x0002,

0xfb68,	// (0x0002e131) cam6_zoom_pane_g

0xc7c0,	// (0x0002ad89) cam6_battery_pane_g1

0xc7c0,	// (0x0002ad89) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0002dcb0) cam6_battery_pane_g

0xd9ce,	// (0x0002bf97) cam6_zoom_cont_pane_g1

0xd9d7,	// (0x0002bfa0) cam6_zoom_cont_pane_g2

0xd9e0,	// (0x0002bfa9) cam6_zoom_cont_pane_g3

0x0002,

0x096f,	// (0x0001ef38) cam6_zoom_cont_pane_g

0x7c51,	// (0x0002621a) cam6_mode_pane_cp_ParamLimits

0x7c51,	// (0x0002621a) cam6_mode_pane_cp

0x7c65,	// (0x0002622e) cam6_zoom_pane_cp_ParamLimits

0x7c65,	// (0x0002622e) cam6_zoom_pane_cp

0x7c81,	// (0x0002624a) vid6_image_uncrop_cif_pane_ParamLimits

0x7c81,	// (0x0002624a) vid6_image_uncrop_cif_pane

0x7cad,	// (0x00026276) vid6_image_uncrop_nhd_pane_ParamLimits

0x7cad,	// (0x00026276) vid6_image_uncrop_nhd_pane

0x7ccc,	// (0x00026295) vid6_image_uncrop_vga_pane_ParamLimits

0x7ccc,	// (0x00026295) vid6_image_uncrop_vga_pane

0x7ceb,	// (0x000262b4) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ceb,	// (0x000262b4) vid6_image_uncrop_wvga_pane

0x7d0a,	// (0x000262d3) vid6_indi_pane_ParamLimits

0x7d0a,	// (0x000262d3) vid6_indi_pane

0xd23a,	// (0x0002b803) bg_tb_trans_pane_cp09_ParamLimits

0xd23a,	// (0x0002b803) bg_tb_trans_pane_cp09

0xd9f8,	// (0x0002bfc1) cam6_battery_pane_cp_ParamLimits

0xd9f8,	// (0x0002bfc1) cam6_battery_pane_cp

0xda04,	// (0x0002bfcd) vid6_indi_pane_g1_ParamLimits

0xda04,	// (0x0002bfcd) vid6_indi_pane_g1

0xda16,	// (0x0002bfdf) vid6_indi_pane_g2_ParamLimits

0xda16,	// (0x0002bfdf) vid6_indi_pane_g2

0xda28,	// (0x0002bff1) vid6_indi_pane_g3_ParamLimits

0xda28,	// (0x0002bff1) vid6_indi_pane_g3

0xda3f,	// (0x0002c008) vid6_indi_pane_g4_ParamLimits

0xda3f,	// (0x0002c008) vid6_indi_pane_g4

0xda56,	// (0x0002c01f) vid6_indi_pane_g5_ParamLimits

0xda56,	// (0x0002c01f) vid6_indi_pane_g5

0x0004,

0x0976,	// (0x0001ef3f) vid6_indi_pane_g_ParamLimits

0x0976,	// (0x0001ef3f) vid6_indi_pane_g

0xda70,	// (0x0002c039) vid6_indi_pane_t1_ParamLimits

0xda70,	// (0x0002c039) vid6_indi_pane_t1

0xda86,	// (0x0002c04f) vid6_indi_pane_t2_ParamLimits

0xda86,	// (0x0002c04f) vid6_indi_pane_t2

0xdaae,	// (0x0002c077) vid6_indi_pane_t3_ParamLimits

0xdaae,	// (0x0002c077) vid6_indi_pane_t3

0xdad6,	// (0x0002c09f) vid6_indi_pane_t4_ParamLimits

0xdad6,	// (0x0002c09f) vid6_indi_pane_t4

0x0003,

0x0981,	// (0x0001ef4a) vid6_indi_pane_t_ParamLimits

0x0981,	// (0x0001ef4a) vid6_indi_pane_t

0xdafa,	// (0x0002c0c3) wait_bar_pane_cp08

0x7d2f,	// (0x000262f8) main_cset_text2_pane_t1_ParamLimits

0x7d2f,	// (0x000262f8) main_cset_text2_pane_t1

0x7c3c,	// (0x00026205) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c3c,	// (0x00026205) listscroll_gen_pane_cp06_t1

0x9c5d,	// (0x00028226) main_cam6_set_pane

0x1bdd,	// (0x000201a6) bg_tb_trans_pane_cp06_ParamLimits

0x1bf3,	// (0x000201bc) cam4_indicators_pane_g1_ParamLimits

0x1c04,	// (0x000201cd) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0002dec6) cam4_indicators_pane_g_ParamLimits

0x1c1c,	// (0x000201e5) cam4_indicators_pane_t1_ParamLimits

0x1cc9,	// (0x00020292) bg_tb_trans_pane_cp07_ParamLimits

0x1ce1,	// (0x000202aa) vid4_indicators_pane_g1_ParamLimits

0x1cf7,	// (0x000202c0) vid4_indicators_pane_g2_ParamLimits

0x1d0b,	// (0x000202d4) vid4_indicators_pane_g3_ParamLimits

0x1d1e,	// (0x000202e7) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0002ded8) vid4_indicators_pane_g_ParamLimits

0x1d3c,	// (0x00020305) vid4_indicators_pane_t1_ParamLimits

0x21e1,	// (0x000207aa) vid4_progress_pane_g1_ParamLimits

0x21f3,	// (0x000207bc) vid4_progress_pane_g2_ParamLimits

0x12da,	// (0x0001f8a3) vid4_progress_pane_g3_ParamLimits

0x2205,	// (0x000207ce) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0002e089) vid4_progress_pane_g_ParamLimits

0x2223,	// (0x000207ec) vid4_progress_pane_t1_ParamLimits

0x2238,	// (0x00020801) vid4_progress_pane_t2_ParamLimits

0x224e,	// (0x00020817) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0002e094) vid4_progress_pane_t_ParamLimits

0x2263,	// (0x0002082c) wait_bar_pane_cp07_ParamLimits

0x7d56,	// (0x0002631f) main_cam6_set_pane_g2_ParamLimits

0x7d56,	// (0x0002631f) main_cam6_set_pane_g2

0x7d62,	// (0x0002632b) main_cset6_listscroll_pane_ParamLimits

0x7d62,	// (0x0002632b) main_cset6_listscroll_pane

0x7d8f,	// (0x00026358) main_cset6_slider_pane_ParamLimits

0x7d8f,	// (0x00026358) main_cset6_slider_pane

0x7d9b,	// (0x00026364) main_cset6_text2_pane_ParamLimits

0x7d9b,	// (0x00026364) main_cset6_text2_pane

0xdb09,	// (0x0002c0d2) main_cset6_text_pane

0xdb11,	// (0x0002c0da) main_cset_list_pane_copy1_ParamLimits

0xdb11,	// (0x0002c0da) main_cset_list_pane_copy1

0xdb21,	// (0x0002c0ea) scroll_pane_cp028_copy1

0x7dae,	// (0x00026377) cset_list_set_pane_copy1

0x7dbe,	// (0x00026387) aid_position_infowindow_above_copy1

0x7dc6,	// (0x0002638f) aid_position_infowindow_below_copy1

0x7dce,	// (0x00026397) cset_list_set_pane_g1_copy1

0x7dd6,	// (0x0002639f) cset_list_set_pane_g3_copy1_ParamLimits

0x7dd6,	// (0x0002639f) cset_list_set_pane_g3_copy1

0x7de5,	// (0x000263ae) cset_list_set_pane_t1_copy1_ParamLimits

0x7de5,	// (0x000263ae) cset_list_set_pane_t1_copy1

0xa415,	// (0x000289de) list_highlight_pane_cp021_copy1_ParamLimits

0xa415,	// (0x000289de) list_highlight_pane_cp021_copy1

0xdb2a,	// (0x0002c0f3) cset6_slider_pane_ParamLimits

0xdb2a,	// (0x0002c0f3) cset6_slider_pane

0xdb56,	// (0x0002c11f) main_cset6_slider_pane_g1_ParamLimits

0xdb56,	// (0x0002c11f) main_cset6_slider_pane_g1

0x7dfa,	// (0x000263c3) main_cset6_slider_pane_g2_ParamLimits

0x7dfa,	// (0x000263c3) main_cset6_slider_pane_g2

0xdb7e,	// (0x0002c147) main_cset6_slider_pane_g3_ParamLimits

0xdb7e,	// (0x0002c147) main_cset6_slider_pane_g3

0x7e22,	// (0x000263eb) main_cset6_slider_pane_g4_ParamLimits

0x7e22,	// (0x000263eb) main_cset6_slider_pane_g4

0x7e2e,	// (0x000263f7) main_cset6_slider_pane_g5_ParamLimits

0x7e2e,	// (0x000263f7) main_cset6_slider_pane_g5

0xd32d,	// (0x0002b8f6) main_cset6_slider_pane_g7_ParamLimits

0xd32d,	// (0x0002b8f6) main_cset6_slider_pane_g7

0xd339,	// (0x0002b902) main_cset6_slider_pane_g8_ParamLimits

0xd339,	// (0x0002b902) main_cset6_slider_pane_g8

0x7e3a,	// (0x00026403) main_cset6_slider_pane_g9_ParamLimits

0x7e3a,	// (0x00026403) main_cset6_slider_pane_g9

0x7e46,	// (0x0002640f) main_cset6_slider_pane_g10_ParamLimits

0x7e46,	// (0x0002640f) main_cset6_slider_pane_g10

0x7e52,	// (0x0002641b) main_cset6_slider_pane_g11_ParamLimits

0x7e52,	// (0x0002641b) main_cset6_slider_pane_g11

0x7e5e,	// (0x00026427) main_cset6_slider_pane_g12_ParamLimits

0x7e5e,	// (0x00026427) main_cset6_slider_pane_g12

0x7e6a,	// (0x00026433) main_cset6_slider_pane_g13_ParamLimits

0x7e6a,	// (0x00026433) main_cset6_slider_pane_g13

0x7e76,	// (0x0002643f) main_cset6_slider_pane_g14_ParamLimits

0x7e76,	// (0x0002643f) main_cset6_slider_pane_g14

0x7e82,	// (0x0002644b) main_cset6_slider_pane_g15_ParamLimits

0x7e82,	// (0x0002644b) main_cset6_slider_pane_g15

0x7e9a,	// (0x00026463) main_cset6_slider_pane_g16_ParamLimits

0x7e9a,	// (0x00026463) main_cset6_slider_pane_g16

0x7ea6,	// (0x0002646f) main_cset6_slider_pane_g17_ParamLimits

0x7ea6,	// (0x0002646f) main_cset6_slider_pane_g17

0x0011,

0xfb6f,	// (0x0002e138) main_cset6_slider_pane_g_ParamLimits

0xfb6f,	// (0x0002e138) main_cset6_slider_pane_g

0xdb8a,	// (0x0002c153) main_cset6_slider_pane_t1_ParamLimits

0xdb8a,	// (0x0002c153) main_cset6_slider_pane_t1

0x7eca,	// (0x00026493) main_cset6_slider_pane_t2_ParamLimits

0x7eca,	// (0x00026493) main_cset6_slider_pane_t2

0x7ef5,	// (0x000264be) main_cset6_slider_pane_t3_ParamLimits

0x7ef5,	// (0x000264be) main_cset6_slider_pane_t3

0x7f20,	// (0x000264e9) main_cset6_slider_pane_t4_ParamLimits

0x7f20,	// (0x000264e9) main_cset6_slider_pane_t4

0x7f4b,	// (0x00026514) main_cset6_slider_pane_t5_ParamLimits

0x7f4b,	// (0x00026514) main_cset6_slider_pane_t5

0xdbcb,	// (0x0002c194) main_cset6_slider_pane_t7_ParamLimits

0xdbcb,	// (0x0002c194) main_cset6_slider_pane_t7

0x7f76,	// (0x0002653f) main_cset6_slider_pane_t8_ParamLimits

0x7f76,	// (0x0002653f) main_cset6_slider_pane_t8

0x7f9a,	// (0x00026563) main_cset6_slider_pane_t9_ParamLimits

0x7f9a,	// (0x00026563) main_cset6_slider_pane_t9

0x7fbe,	// (0x00026587) main_cset6_slider_pane_t10_ParamLimits

0x7fbe,	// (0x00026587) main_cset6_slider_pane_t10

0x7fe2,	// (0x000265ab) main_cset6_slider_pane_t11_ParamLimits

0x7fe2,	// (0x000265ab) main_cset6_slider_pane_t11

0xdc01,	// (0x0002c1ca) main_cset6_slider_pane_t14_ParamLimits

0xdc01,	// (0x0002c1ca) main_cset6_slider_pane_t14

0xdc3a,	// (0x0002c203) main_cset6_slider_pane_t15_ParamLimits

0xdc3a,	// (0x0002c203) main_cset6_slider_pane_t15

0x000b,

0xfb94,	// (0x0002e15d) main_cset6_slider_pane_t_ParamLimits

0xfb94,	// (0x0002e15d) main_cset6_slider_pane_t

0xd406,	// (0x0002b9cf) cset_slider_pane_g1_copy1

0xd40f,	// (0x0002b9d8) cset_slider_pane_g2_copy1

0xd418,	// (0x0002b9e1) cset_slider_pane_g3_copy1

0x9c5d,	// (0x00028226) bg_popup_sub_pane_cp011_copy1

0xdc73,	// (0x0002c23c) main_cset_text_pane_g1_copy1

0xd4aa,	// (0x0002ba73) main_cset_text_pane_t1_copy1

0xd4b8,	// (0x0002ba81) main_cset_text_pane_t2_copy1

0xd4c6,	// (0x0002ba8f) main_cset_text_pane_t3_copy1

0xd4d4,	// (0x0002ba9d) main_cset_text_pane_t4_copy1

0xd4e2,	// (0x0002baab) main_cset_text_pane_t5_copy1

0xdc7b,	// (0x0002c244) main_cset_text_pane_t6_copy1

0xdc89,	// (0x0002c252) main_cset_text_pane_t7_copy1

0x80d7,	// (0x000266a0) main_cset_text2_pane_t1_copy1

0xa415,	// (0x000289de) main_ncimui_pane

0x55e8,	// (0x00023bb1) popup_query_ncimui_window_ParamLimits

0x55e8,	// (0x00023bb1) popup_query_ncimui_window

0xca55,	// (0x0002b01e) field_cale_ev2_pane_g4_ParamLimits

0xca55,	// (0x0002b01e) field_cale_ev2_pane_g4

0x6ad8,	// (0x000250a1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6ad8,	// (0x000250a1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0002de64) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0002de64) cell_video_dialer_keypad_pane_g

0x6af0,	// (0x000250b9) cell_video_dialer_keypad_pane_t1

0x9c5d,	// (0x00028226) bg_popup_window_pane_cp012

0xacd8,	// (0x000292a1) heading_pane_cp06

0xdcb5,	// (0x0002c27e) ncim_query_content_pane

0x9c5d,	// (0x00028226) bg_popup_heading_pane_cp01

0xdcbd,	// (0x0002c286) ncim_heading_pane_t1

0xdccb,	// (0x0002c294) ncim_indicator_popup_pane

0xdcdd,	// (0x0002c2a6) ncim_query_button_pane

0xdcf3,	// (0x0002c2bc) ncim_query_content_pane_t1

0xdd05,	// (0x0002c2ce) ncim_query_content_pane_t2

0x0005,

0xfbd8,	// (0x0002e1a1) ncim_query_content_pane_t

0xdd3f,	// (0x0002c308) ncim_query_list_pane

0xdd51,	// (0x0002c31a) ncim_query_popup_pane

0xdccb,	// (0x0002c294) ncim_indicator_popup_pane_ParamLimits

0x8233,	// (0x000267fc) ncim_query_content_pane_g1_ParamLimits

0x8233,	// (0x000267fc) ncim_query_content_pane_g1

0xdcf3,	// (0x0002c2bc) ncim_query_content_pane_t1_ParamLimits

0xdd05,	// (0x0002c2ce) ncim_query_content_pane_t2_ParamLimits

0x823f,	// (0x00026808) ncim_query_content_pane_t3_ParamLimits

0x823f,	// (0x00026808) ncim_query_content_pane_t3

0x825c,	// (0x00026825) ncim_query_content_pane_t4_ParamLimits

0x825c,	// (0x00026825) ncim_query_content_pane_t4

0x8279,	// (0x00026842) ncim_query_content_pane_t5_ParamLimits

0x8279,	// (0x00026842) ncim_query_content_pane_t5

0xdd17,	// (0x0002c2e0) ncim_query_content_pane_t6_ParamLimits

0xdd17,	// (0x0002c2e0) ncim_query_content_pane_t6

0xfbd8,	// (0x0002e1a1) ncim_query_content_pane_t_ParamLimits

0xdd3f,	// (0x0002c308) ncim_query_list_pane_ParamLimits

0xdd51,	// (0x0002c31a) ncim_query_popup_pane_ParamLimits

0xdd65,	// (0x0002c32e) wait_bar_pane_cp04

0x9c5d,	// (0x00028226) input_focus_pane_cp011

0xdd6d,	// (0x0002c336) ncim_query_popup_pane_t1

0xdd7b,	// (0x0002c344) ncim_list_query_list_pane_ParamLimits

0xdd7b,	// (0x0002c344) ncim_list_query_list_pane

0x9c5d,	// (0x00028226) bg_button_pane_cp027

0xdd8e,	// (0x0002c357) ncim_query_button_pane_g1

0x9c5d,	// (0x00028226) list_highlight_pane_cp012

0xdd98,	// (0x0002c361) ncim_list_query_list_pane_g1

0xdda0,	// (0x0002c369) ncim_list_query_list_pane_t1

0x1c10,	// (0x000201d9) cam4_indicators_pane_g3_ParamLimits

0x1c10,	// (0x000201d9) cam4_indicators_pane_g3

0x1d2a,	// (0x000202f3) vid4_indicators_pane_g5_ParamLimits

0x1d2a,	// (0x000202f3) vid4_indicators_pane_g5

0x2214,	// (0x000207dd) vid4_progress_pane_g5_ParamLimits

0x2214,	// (0x000207dd) vid4_progress_pane_g5

0x8109,	// (0x000266d2) main_ncimui_pane_g1

0x8175,	// (0x0002673e) ncimui_group_query_pane_ParamLimits

0x8175,	// (0x0002673e) ncimui_group_query_pane

0x81cf,	// (0x00026798) ncimui_list_pane_ParamLimits

0x81cf,	// (0x00026798) ncimui_list_pane

0x81f6,	// (0x000267bf) ncimui_text_pane_ParamLimits

0x81f6,	// (0x000267bf) ncimui_text_pane

0x8296,	// (0x0002685f) ncimui_text_pane_t1_ParamLimits

0x8296,	// (0x0002685f) ncimui_text_pane_t1

0xddae,	// (0x0002c377) ncimui_list_single_graphic_pane_ParamLimits

0xddae,	// (0x0002c377) ncimui_list_single_graphic_pane

0x82b5,	// (0x0002687e) ncimui_query_pane_ParamLimits

0x82b5,	// (0x0002687e) ncimui_query_pane

0x9c5d,	// (0x00028226) list_highlight_pane_cp013

0xddbe,	// (0x0002c387) ncim_list_query_list_pane_t1_copy1

0xdd98,	// (0x0002c361) ncim_list_single_graphic_pane_g1

0xddcc,	// (0x0002c395) ncim_query_button_pane_cp01

0xddd8,	// (0x0002c3a1) ncim_query_entry_pane_ParamLimits

0xddd8,	// (0x0002c3a1) ncim_query_entry_pane

0xddeb,	// (0x0002c3b4) ncimui_query_pane_g1

0xddf7,	// (0x0002c3c0) ncimui_query_pane_t1_ParamLimits

0xddf7,	// (0x0002c3c0) ncimui_query_pane_t1

0xa415,	// (0x000289de) input_focus_pane_cp012

0xde10,	// (0x0002c3d9) ncim_query_entry_pane_t1

0xa3f1,	// (0x000289ba) main_im_pane_ParamLimits

0xa415,	// (0x000289de) main_mobtv_pane_ParamLimits

0xa415,	// (0x000289de) main_mobtv_pane

0x7eb2,	// (0x0002647b) main_cset6_slider_pane_g18_ParamLimits

0x7eb2,	// (0x0002647b) main_cset6_slider_pane_g18

0x7ebe,	// (0x00026487) main_cset6_slider_pane_g19_ParamLimits

0x7ebe,	// (0x00026487) main_cset6_slider_pane_g19

0xd194,	// (0x0002b75d) bg_main_mobtv_pane_ParamLimits

0xd194,	// (0x0002b75d) bg_main_mobtv_pane

0x82c8,	// (0x00026891) main_mobtv_info_pane

0x82d3,	// (0x0002689c) main_mobtv_loading_pane_ParamLimits

0x82d3,	// (0x0002689c) main_mobtv_loading_pane

0xde22,	// (0x0002c3eb) main_mobtv_pg_channel_list_pane

0xde2c,	// (0x0002c3f5) main_mobtv_pg_hdr_pane

0x82e0,	// (0x000268a9) main_mobtv_programe_curr_pane_ParamLimits

0x82e0,	// (0x000268a9) main_mobtv_programe_curr_pane

0x82ed,	// (0x000268b6) main_mobtv_programe_next_pane_ParamLimits

0x82ed,	// (0x000268b6) main_mobtv_programe_next_pane

0xde35,	// (0x0002c3fe) popup_mobtv_noti_window

0xc7c0,	// (0x0002ad89) main_tv_pg_hdr_pane_g1

0xde3f,	// (0x0002c408) main_tv_pg_hdr_pane_g2

0xde47,	// (0x0002c410) main_tv_pg_hdr_pane_g3

0xde4f,	// (0x0002c418) main_tv_pg_hdr_pane_g4

0xde57,	// (0x0002c420) main_tv_pg_hdr_pane_g5

0xde61,	// (0x0002c42a) main_tv_pg_hdr_pane_g6

0xde6b,	// (0x0002c434) main_tv_pg_hdr_pane_g7

0xde75,	// (0x0002c43e) main_tv_pg_hdr_pane_g8

0xde7f,	// (0x0002c448) main_tv_pg_hdr_pane_g9

0xde89,	// (0x0002c452) main_tv_pg_hdr_pane_g10

0xde93,	// (0x0002c45c) main_tv_pg_hdr_pane_g11

0x000a,

0xfbe5,	// (0x0002e1ae) main_tv_pg_hdr_pane_g

0xde9d,	// (0x0002c466) main_tv_pg_hdr_pane_t1

0xdeab,	// (0x0002c474) main_tv_pg_hdr_pane_t2

0xdeb9,	// (0x0002c482) main_tv_pg_hdr_pane_t3

0xdec9,	// (0x0002c492) main_tv_pg_hdr_pane_t4

0xded9,	// (0x0002c4a2) main_tv_pg_hdr_pane_t5

0x0004,

0x0a17,	// (0x0001efe0) main_tv_pg_hdr_pane_t

0xdee9,	// (0x0002c4b2) single_mobtv_pg_channel_pane_ParamLimits

0xdee9,	// (0x0002c4b2) single_mobtv_pg_channel_pane

0xdefb,	// (0x0002c4c4) single_mobtv_pg_channel_table_pane

0xdf04,	// (0x0002c4cd) single_mobtv_pg_channel_thumb_pane

0xdf0d,	// (0x0002c4d6) single_tv_pg_channel_pane_g1

0xdf16,	// (0x0002c4df) single_tv_pg_channel_pane_g2

0x0001,

0x0a22,	// (0x0001efeb) single_tv_pg_channel_pane_g

0xc9f0,	// (0x0002afb9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc9f0,	// (0x0002afb9) bg_single_mobtv_pg_channel_thumb_pane

0xdf1f,	// (0x0002c4e8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf1f,	// (0x0002c4e8) single_mobtv_pg_channel_thumb_pane_g1

0xdf2d,	// (0x0002c4f6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf2d,	// (0x0002c4f6) single_mobtv_pg_channel_thumb_pane_g2

0xdf39,	// (0x0002c502) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf39,	// (0x0002c502) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0a27,	// (0x0001eff0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0a27,	// (0x0001eff0) single_mobtv_pg_channel_thumb_pane_g

0xdf45,	// (0x0002c50e) single_mobtv_pg_channel_thumb_pane_t1

0xdf53,	// (0x0002c51c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0a2e,	// (0x0001eff7) single_mobtv_pg_channel_thumb_pane_t

0xc7c0,	// (0x0002ad89) bg_single_mobtv_pg_channel_table_pane_g1

0xc7c0,	// (0x0002ad89) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0002dcb0) bg_single_mobtv_pg_channel_table_pane_g

0xdf61,	// (0x0002c52a) single_mobtv_pg_channel_table_pane_t1

0xdf6f,	// (0x0002c538) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0a33,	// (0x0001effc) single_mobtv_pg_channel_table_pane_t

0x8302,	// (0x000268cb) main_mobtv_info_pane_g1_ParamLimits

0x8302,	// (0x000268cb) main_mobtv_info_pane_g1

0x831e,	// (0x000268e7) main_mobtv_info_pane_t1_ParamLimits

0x831e,	// (0x000268e7) main_mobtv_info_pane_t1

0x8396,	// (0x0002695f) main_mobtv_info_pane_t2_ParamLimits

0x8396,	// (0x0002695f) main_mobtv_info_pane_t2

0x0002,

0xfc01,	// (0x0002e1ca) main_mobtv_info_pane_t_ParamLimits

0xfc01,	// (0x0002e1ca) main_mobtv_info_pane_t

0x8427,	// (0x000269f0) wait_bar_pane_cp05

0x8439,	// (0x00026a02) main_mobtv_loading_pane_g1_ParamLimits

0x8439,	// (0x00026a02) main_mobtv_loading_pane_g1

0x8445,	// (0x00026a0e) main_mobtv_loading_pane_g2_ParamLimits

0x8445,	// (0x00026a0e) main_mobtv_loading_pane_g2

0x8451,	// (0x00026a1a) main_mobtv_loading_pane_g3_ParamLimits

0x8451,	// (0x00026a1a) main_mobtv_loading_pane_g3

0x0002,

0xfc08,	// (0x0002e1d1) main_mobtv_loading_pane_g_ParamLimits

0xfc08,	// (0x0002e1d1) main_mobtv_loading_pane_g

0xdf7d,	// (0x0002c546) main_mobtv_loading_pane_t1_ParamLimits

0xdf7d,	// (0x0002c546) main_mobtv_loading_pane_t1

0xdf95,	// (0x0002c55e) main_mobtv_loading_pane_t2_ParamLimits

0xdf95,	// (0x0002c55e) main_mobtv_loading_pane_t2

0x0001,

0x0a4b,	// (0x0001f014) main_mobtv_loading_pane_t_ParamLimits

0x0a4b,	// (0x0001f014) main_mobtv_loading_pane_t

0x845f,	// (0x00026a28) wait_bar_pane_cp06_ParamLimits

0x845f,	// (0x00026a28) wait_bar_pane_cp06

0xdfb9,	// (0x0002c582) main_mobtv_programe_curr_pane_t1

0xdfc7,	// (0x0002c590) main_mobtv_programe_curr_pane_t2

0x0001,

0x0a50,	// (0x0001f019) main_mobtv_programe_curr_pane_t

0xdfd5,	// (0x0002c59e) main_mobtv_programe_next_pane_t1

0xdfe3,	// (0x0002c5ac) main_mobtv_programe_next_pane_t2

0xdff1,	// (0x0002c5ba) main_mobtv_programe_next_pane_t3

0x0002,

0x0a55,	// (0x0001f01e) main_mobtv_programe_next_pane_t

0x9c5d,	// (0x00028226) bg_popup_mobtv_noti_window_pane

0xdfff,	// (0x0002c5c8) popup_mobtv_noti_window_g1

0xe007,	// (0x0002c5d0) popup_mobtv_noti_window_t1

0xe015,	// (0x0002c5de) popup_mobtv_noti_window_t2

0x0001,

0x0a5c,	// (0x0001f025) popup_mobtv_noti_window_t

0xc7c0,	// (0x0002ad89) bg_popup_mobtv_noti_window_pane_g1

0x9c5d,	// (0x00028226) sc_clock_pane

0x9c5d,	// (0x00028226) main_fs_bigclock_pane

0x7ab3,	// (0x0002607c) blid2_tripm_pane_t4_ParamLimits

0x7ab3,	// (0x0002607c) blid2_tripm_pane_t4

0x846b,	// (0x00026a34) sc_clock_pane_g1_ParamLimits

0x846b,	// (0x00026a34) sc_clock_pane_g1

0x8479,	// (0x00026a42) sc_clock_pane_t1_ParamLimits

0x8479,	// (0x00026a42) sc_clock_pane_t1

0x848e,	// (0x00026a57) sc_clock_pane_t2_ParamLimits

0x848e,	// (0x00026a57) sc_clock_pane_t2

0x84a0,	// (0x00026a69) sc_clock_pane_t3_ParamLimits

0x84a0,	// (0x00026a69) sc_clock_pane_t3

0x0004,

0xfc0f,	// (0x0002e1d8) sc_clock_pane_t_ParamLimits

0xfc0f,	// (0x0002e1d8) sc_clock_pane_t

0x9272,	// (0x0002783b) main_fs_bigclock_indicator_pane_ParamLimits

0x9272,	// (0x0002783b) main_fs_bigclock_indicator_pane

0x852d,	// (0x00026af6) main_fs_bigclock_pane_g1_ParamLimits

0x852d,	// (0x00026af6) main_fs_bigclock_pane_g1

0x927e,	// (0x00027847) main_fs_bigclock_pane_t1_ParamLimits

0x927e,	// (0x00027847) main_fs_bigclock_pane_t1

0x9290,	// (0x00027859) main_fs_bigclock_pane_t2_ParamLimits

0x9290,	// (0x00027859) main_fs_bigclock_pane_t2

0x92a4,	// (0x0002786d) main_fs_bigclock_pane_t3_ParamLimits

0x92a4,	// (0x0002786d) main_fs_bigclock_pane_t3

0x0002,

0xfd74,	// (0x0002e33d) main_fs_bigclock_pane_t_ParamLimits

0xfd74,	// (0x0002e33d) main_fs_bigclock_pane_t

0xec00,	// (0x0002d1c9) main_fs_bigclock_indicator_pane_g1

0xdce5,	// (0x0002c2ae) ncim_query_content_pane_g2_ParamLimits

0xdce5,	// (0x0002c2ae) ncim_query_content_pane_g2

0x0001,

0xfbd3,	// (0x0002e19c) ncim_query_content_pane_g_ParamLimits

0xfbd3,	// (0x0002e19c) ncim_query_content_pane_g

0x84b2,	// (0x00026a7b) sc_clock_pane_t4_ParamLimits

0x84b2,	// (0x00026a7b) sc_clock_pane_t4

0xa415,	// (0x000289de) main_radioblah_pane

0xd0ff,	// (0x0002b6c8) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0ff,	// (0x0002b6c8) cell_call4_button_pane_t1_copy1

0x8125,	// (0x000266ee) main_ncimui_pane_t1_ParamLimits

0x8125,	// (0x000266ee) main_ncimui_pane_t1

0x813f,	// (0x00026708) main_ncimui_pane_t2_ParamLimits

0x813f,	// (0x00026708) main_ncimui_pane_t2

0x0002,

0xfbcc,	// (0x0002e195) main_ncimui_pane_t_ParamLimits

0xfbcc,	// (0x0002e195) main_ncimui_pane_t

0xe161,	// (0x0002c72a) main_radioblah_anim_pane_ParamLimits

0xe161,	// (0x0002c72a) main_radioblah_anim_pane

0xe172,	// (0x0002c73b) main_radioblah_info_pane_ParamLimits

0xe172,	// (0x0002c73b) main_radioblah_info_pane

0xe186,	// (0x0002c74f) main_radioblah_pane_t1_ParamLimits

0xe186,	// (0x0002c74f) main_radioblah_pane_t1

0xe1a2,	// (0x0002c76b) main_radioblah_pane_t2_ParamLimits

0xe1a2,	// (0x0002c76b) main_radioblah_pane_t2

0x0003,

0x0a82,	// (0x0001f04b) main_radioblah_pane_t_ParamLimits

0x0a82,	// (0x0001f04b) main_radioblah_pane_t

0x857f,	// (0x00026b48) main_radioblah_rocker_ctrl_pane_ParamLimits

0x857f,	// (0x00026b48) main_radioblah_rocker_ctrl_pane

0xe1ea,	// (0x0002c7b3) main_radioblah_info_pane_t1_ParamLimits

0xe1ea,	// (0x0002c7b3) main_radioblah_info_pane_t1

0x85c8,	// (0x00026b91) main_radioblah_info_pane_t2_ParamLimits

0x85c8,	// (0x00026b91) main_radioblah_info_pane_t2

0x0003,

0xfc1a,	// (0x0002e1e3) main_radioblah_info_pane_t_ParamLimits

0xfc1a,	// (0x0002e1e3) main_radioblah_info_pane_t

0xc7c0,	// (0x0002ad89) main_radioblah_rocker_ctrl_pane_g1

0x8678,	// (0x00026c41) main_radioblah_rocker_ctrl_pane_g2

0x8680,	// (0x00026c49) main_radioblah_rocker_ctrl_pane_g3

0x8688,	// (0x00026c51) main_radioblah_rocker_ctrl_pane_g4

0x8690,	// (0x00026c59) main_radioblah_rocker_ctrl_pane_g5

0x8698,	// (0x00026c61) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc23,	// (0x0002e1ec) main_radioblah_rocker_ctrl_pane_g

0x80d7,	// (0x000266a0) main_cset_text2_pane_t1_copy1_ParamLimits

0x1b55,	// (0x0002011e) cam4_image_uncrop_qvga_pane

0x1c82,	// (0x0002024b) vid4_image_uncrop_qcif_pane

0x22b8,	// (0x00020881) cam6_image_uncrop_qvga_pane_ParamLimits

0x22b8,	// (0x00020881) cam6_image_uncrop_qvga_pane

0xd9e8,	// (0x0002bfb1) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9e8,	// (0x0002bfb1) vid6_image_uncrop_qcif_pane

0x9c5d,	// (0x00028226) bg_popup_preview_window_pane_cp03

0xdc97,	// (0x0002c260) list_cset_text2_pane

0xdc9f,	// (0x0002c268) main_cset6_text2_pane_g1

0xdca7,	// (0x0002c270) main_cset6_text2_pane_t1

0x86a0,	// (0x00026c69) list_cset_text2_pane_t1_ParamLimits

0x86a0,	// (0x00026c69) list_cset_text2_pane_t1

0xa415,	// (0x000289de) main_radioblah_pane_ParamLimits

0x8413,	// (0x000269dc) main_mobtv_info_pane_t3_ParamLimits

0x8413,	// (0x000269dc) main_mobtv_info_pane_t3

0x856d,	// (0x00026b36) main_radioblah_pane_g1

0x8598,	// (0x00026b61) main_radioblah_info_pane_g1

0x861d,	// (0x00026be6) main_radioblah_info_pane_t3_ParamLimits

0x861d,	// (0x00026be6) main_radioblah_info_pane_t3

0x42b6,	// (0x0002287f) highlight_cell_cale_month_pane_ParamLimits

0x42b6,	// (0x0002287f) highlight_cell_cale_month_pane

0x9c5d,	// (0x00028226) main_phob_fisheye_pane

0xcad8,	// (0x0002b0a1) scroll_pane_cp0031_ParamLimits

0xcad8,	// (0x0002b0a1) scroll_pane_cp0031

0xdafa,	// (0x0002c0c3) wait_bar_pane_cp08_ParamLimits

0x7dae,	// (0x00026377) cset_list_set_pane_copy1_ParamLimits

0xe224,	// (0x0002c7ed) highlight_cell_cale_month_pane_g1

0x86b7,	// (0x00026c80) highlight_cell_cale_month_pane_t1

0xd77e,	// (0x0002bd47) list_gen_pane_cp01

0xd318,	// (0x0002b8e1) scroll_pane_01

0x86c5,	// (0x00026c8e) list_single_double_fisheye_pane

0x86ce,	// (0x00026c97) list_double_fisheye_pane_g1_ParamLimits

0x86ce,	// (0x00026c97) list_double_fisheye_pane_g1

0x86da,	// (0x00026ca3) list_double_fisheye_pane_g2_ParamLimits

0x86da,	// (0x00026ca3) list_double_fisheye_pane_g2

0x86ee,	// (0x00026cb7) list_double_fisheye_pane_g3_ParamLimits

0x86ee,	// (0x00026cb7) list_double_fisheye_pane_g3

0x0004,

0xfc30,	// (0x0002e1f9) list_double_fisheye_pane_g_ParamLimits

0xfc30,	// (0x0002e1f9) list_double_fisheye_pane_g

0x8717,	// (0x00026ce0) list_double_fisheye_pane_t1_ParamLimits

0x8717,	// (0x00026ce0) list_double_fisheye_pane_t1

0x8732,	// (0x00026cfb) list_double_fisheye_pane_t2_ParamLimits

0x8732,	// (0x00026cfb) list_double_fisheye_pane_t2

0x0001,

0xfc3b,	// (0x0002e204) list_double_fisheye_pane_t_ParamLimits

0xfc3b,	// (0x0002e204) list_double_fisheye_pane_t

0x9c5d,	// (0x00028226) main_call5_pane

0x84d8,	// (0x00026aa1) sc_swipe_pane_ParamLimits

0x84d8,	// (0x00026aa1) sc_swipe_pane

0x8760,	// (0x00026d29) call5_image_pane_ParamLimits

0x8760,	// (0x00026d29) call5_image_pane

0x8772,	// (0x00026d3b) call5_swipe_1_pane_ParamLimits

0x8772,	// (0x00026d3b) call5_swipe_1_pane

0x877e,	// (0x00026d47) call5_swipe_2_pane_ParamLimits

0x877e,	// (0x00026d47) call5_swipe_2_pane

0x879a,	// (0x00026d63) popup_call5_audio_first_window_ParamLimits

0x879a,	// (0x00026d63) popup_call5_audio_first_window

0xc9f0,	// (0x0002afb9) call5_swipe_1_pane_g1_ParamLimits

0xc9f0,	// (0x0002afb9) call5_swipe_1_pane_g1

0xe22c,	// (0x0002c7f5) call5_swipe_1_pane_g2_ParamLimits

0xe22c,	// (0x0002c7f5) call5_swipe_1_pane_g2

0x0001,

0xfc40,	// (0x0002e209) call5_swipe_1_pane_g_ParamLimits

0xfc40,	// (0x0002e209) call5_swipe_1_pane_g

0xe238,	// (0x0002c801) call5_swipe_1_pane_t1_ParamLimits

0xe238,	// (0x0002c801) call5_swipe_1_pane_t1

0xc9f0,	// (0x0002afb9) call5_swipe_2_pane_g1_ParamLimits

0xc9f0,	// (0x0002afb9) call5_swipe_2_pane_g1

0xe24d,	// (0x0002c816) call5_swipe_2_pane_g2_ParamLimits

0xe24d,	// (0x0002c816) call5_swipe_2_pane_g2

0x0001,

0xfc45,	// (0x0002e20e) call5_swipe_2_pane_g_ParamLimits

0xfc45,	// (0x0002e20e) call5_swipe_2_pane_g

0xe259,	// (0x0002c822) call5_swipe_2_pane_t1_ParamLimits

0xe259,	// (0x0002c822) call5_swipe_2_pane_t1

0xe26e,	// (0x0002c837) sc_swipe_pane_g1_ParamLimits

0xe26e,	// (0x0002c837) sc_swipe_pane_g1

0xe27b,	// (0x0002c844) sc_swipe_pane_g2_ParamLimits

0xe27b,	// (0x0002c844) sc_swipe_pane_g2

0x0001,

0x0abb,	// (0x0001f084) sc_swipe_pane_g_ParamLimits

0x0abb,	// (0x0001f084) sc_swipe_pane_g

0xe287,	// (0x0002c850) sc_swipe_pane_t1_ParamLimits

0xe287,	// (0x0002c850) sc_swipe_pane_t1

0x9c5d,	// (0x00028226) main_cmail_launcher_pane

0x87aa,	// (0x00026d73) aid_size_cell_cmail_l_ParamLimits

0x87aa,	// (0x00026d73) aid_size_cell_cmail_l

0x87ba,	// (0x00026d83) grid_cmail_l_pane_ParamLimits

0x87ba,	// (0x00026d83) grid_cmail_l_pane

0x87ca,	// (0x00026d93) cell_cmail_l_pane_ParamLimits

0x87ca,	// (0x00026d93) cell_cmail_l_pane

0x87e0,	// (0x00026da9) cell_cmail_l_pane_g1_ParamLimits

0x87e0,	// (0x00026da9) cell_cmail_l_pane_g1

0x87ec,	// (0x00026db5) cell_cmail_l_pane_t1_ParamLimits

0x87ec,	// (0x00026db5) cell_cmail_l_pane_t1

0xe29c,	// (0x0002c865) cell_cmail_l_pane_t2_ParamLimits

0xe29c,	// (0x0002c865) cell_cmail_l_pane_t2

0x0001,

0xfc4a,	// (0x0002e213) cell_cmail_l_pane_t_ParamLimits

0xfc4a,	// (0x0002e213) cell_cmail_l_pane_t

0xa415,	// (0x000289de) grid_highlight_pane_cp018_ParamLimits

0xa415,	// (0x000289de) grid_highlight_pane_cp018

0x2401,	// (0x000209ca) main2_pane_ParamLimits

0x2401,	// (0x000209ca) main2_pane

0xa4aa,	// (0x00028a73) popup_sp_fs_action_menu_bg_pane_g1

0xa4b2,	// (0x00028a7b) popup_sp_fs_action_menu_bg_pane_g2

0xa4ba,	// (0x00028a83) popup_sp_fs_action_menu_bg_pane_g3

0xa4c2,	// (0x00028a8b) popup_sp_fs_action_menu_bg_pane_g4

0xa4ca,	// (0x00028a93) popup_sp_fs_action_menu_bg_pane_g5

0xa4d2,	// (0x00028a9b) popup_sp_fs_action_menu_bg_pane_g6

0xa4da,	// (0x00028aa3) popup_sp_fs_action_menu_bg_pane_g7

0xa4e2,	// (0x00028aab) popup_sp_fs_action_menu_bg_pane_g8

0xa4ea,	// (0x00028ab3) popup_sp_fs_action_menu_bg_pane_g9

0xa4f2,	// (0x00028abb) popup_sp_fs_action_menu_bg_pane_g10

0xa4f2,	// (0x00028abb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0002d75c) popup_sp_fs_action_menu_bg_pane_g

0x3190,	// (0x00021759) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x2_t3_g3_g1

0x319c,	// (0x00021765) list_medium_line_x2_t3_g3_g2_ParamLimits

0x319c,	// (0x00021765) list_medium_line_x2_t3_g3_g2

0x31a8,	// (0x00021771) list_medium_line_x2_t3_g3_g3_ParamLimits

0x31a8,	// (0x00021771) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0002d80c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0002d80c) list_medium_line_x2_t3_g3_g

0x31b4,	// (0x0002177d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x31b4,	// (0x0002177d) list_medium_line_x2_t3_g3_t1

0x31c9,	// (0x00021792) list_medium_line_x2_t3_g3_t2_ParamLimits

0x31c9,	// (0x00021792) list_medium_line_x2_t3_g3_t2

0x31dd,	// (0x000217a6) list_medium_line_x2_t3_g3_t3_ParamLimits

0x31dd,	// (0x000217a6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0002d813) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0002d813) list_medium_line_x2_t3_g3_t

0x3190,	// (0x00021759) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x2_t3_g2_g1

0x31a8,	// (0x00021771) list_medium_line_x2_t3_g2_g2_ParamLimits

0x31a8,	// (0x00021771) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0002d81a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0002d81a) list_medium_line_x2_t3_g2_g

0x31f2,	// (0x000217bb) list_medium_line_x2_t3_g2_t1_ParamLimits

0x31f2,	// (0x000217bb) list_medium_line_x2_t3_g2_t1

0x3208,	// (0x000217d1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3208,	// (0x000217d1) list_medium_line_x2_t3_g2_t2

0x321a,	// (0x000217e3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x321a,	// (0x000217e3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0002d81f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0002d81f) list_medium_line_x2_t3_g2_t

0x3190,	// (0x00021759) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x2_t4_g4_g1

0x3237,	// (0x00021800) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3237,	// (0x00021800) list_medium_line_x2_t4_g4_g2

0x319c,	// (0x00021765) list_medium_line_x2_t4_g4_g3_ParamLimits

0x319c,	// (0x00021765) list_medium_line_x2_t4_g4_g3

0x3243,	// (0x0002180c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3243,	// (0x0002180c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0002d826) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0002d826) list_medium_line_x2_t4_g4_g

0x324f,	// (0x00021818) list_medium_line_x2_t4_g4_t1_ParamLimits

0x324f,	// (0x00021818) list_medium_line_x2_t4_g4_t1

0x3269,	// (0x00021832) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3269,	// (0x00021832) list_medium_line_x2_t4_g4_t2

0x327f,	// (0x00021848) list_medium_line_x2_t4_g4_t3_ParamLimits

0x327f,	// (0x00021848) list_medium_line_x2_t4_g4_t3

0x3294,	// (0x0002185d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3294,	// (0x0002185d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0002d82f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0002d82f) list_medium_line_x2_t4_g4_t

0x3190,	// (0x00021759) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x2_t2_g4_g1

0x3237,	// (0x00021800) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3237,	// (0x00021800) list_medium_line_x2_t2_g4_g2

0x319c,	// (0x00021765) list_medium_line_x2_t2_g4_g3_ParamLimits

0x319c,	// (0x00021765) list_medium_line_x2_t2_g4_g3

0x31a8,	// (0x00021771) list_medium_line_x2_t2_g4_g4_ParamLimits

0x31a8,	// (0x00021771) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0002d896) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0002d896) list_medium_line_x2_t2_g4_g

0x42dc,	// (0x000228a5) list_medium_line_x2_t2_g4_t1_ParamLimits

0x42dc,	// (0x000228a5) list_medium_line_x2_t2_g4_t1

0x31dd,	// (0x000217a6) list_medium_line_x2_t2_g4_t2_ParamLimits

0x31dd,	// (0x000217a6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0002d89f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0002d89f) list_medium_line_x2_t2_g4_t

0x3190,	// (0x00021759) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x2_t2_g3_g1

0x319c,	// (0x00021765) list_medium_line_x2_t2_g3_g2_ParamLimits

0x319c,	// (0x00021765) list_medium_line_x2_t2_g3_g2

0x31a8,	// (0x00021771) list_medium_line_x2_t2_g3_g3_ParamLimits

0x31a8,	// (0x00021771) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0002d80c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0002d80c) list_medium_line_x2_t2_g3_g

0x42f1,	// (0x000228ba) list_medium_line_x2_t2_g3_t1_ParamLimits

0x42f1,	// (0x000228ba) list_medium_line_x2_t2_g3_t1

0x31dd,	// (0x000217a6) list_medium_line_x2_t2_g3_t2_ParamLimits

0x31dd,	// (0x000217a6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0002d8a4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0002d8a4) list_medium_line_x2_t2_g3_t

0x443a,	// (0x00022a03) main_sp_fs_list_pane_ParamLimits

0x443a,	// (0x00022a03) main_sp_fs_list_pane

0x4446,	// (0x00022a0f) sp_fs_scroll_pane_ParamLimits

0x4446,	// (0x00022a0f) sp_fs_scroll_pane

0x4452,	// (0x00022a1b) list_medium_line_x2_t3_t1

0x4462,	// (0x00022a2b) list_medium_line_x2_t3_t2

0x4470,	// (0x00022a39) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0002d8ef) list_medium_line_x2_t3_t

0x447e,	// (0x00022a47) list_medium_line_x3_t4_t1

0x448e,	// (0x00022a57) list_medium_line_x3_t4_t2

0x449c,	// (0x00022a65) list_medium_line_x3_t4_t3

0x4470,	// (0x00022a39) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0002d8f6) list_medium_line_x3_t4_t

0x44aa,	// (0x00022a73) list_medium_line_x4_t5_t1

0x44ba,	// (0x00022a83) list_medium_line_x4_t5_t2

0x449c,	// (0x00022a65) list_medium_line_x4_t5_t3

0x44c8,	// (0x00022a91) list_medium_line_x4_t5_t4

0x4470,	// (0x00022a39) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0002d8ff) list_medium_line_x4_t5_t

0x3190,	// (0x00021759) list_medium_line_t4_g4_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_t4_g4_g1

0x44d6,	// (0x00022a9f) list_medium_line_t4_g4_g2_ParamLimits

0x44d6,	// (0x00022a9f) list_medium_line_t4_g4_g2

0x44e2,	// (0x00022aab) list_medium_line_t4_g4_g3_ParamLimits

0x44e2,	// (0x00022aab) list_medium_line_t4_g4_g3

0x31a8,	// (0x00021771) list_medium_line_t4_g4_g4_ParamLimits

0x31a8,	// (0x00021771) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0002d90a) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0002d90a) list_medium_line_t4_g4_g

0x44ee,	// (0x00022ab7) list_medium_line_t4_g4_t1_ParamLimits

0x44ee,	// (0x00022ab7) list_medium_line_t4_g4_t1

0x4503,	// (0x00022acc) list_medium_line_t4_g4_t2_ParamLimits

0x4503,	// (0x00022acc) list_medium_line_t4_g4_t2

0x4518,	// (0x00022ae1) list_medium_line_t4_g4_t3_ParamLimits

0x4518,	// (0x00022ae1) list_medium_line_t4_g4_t3

0x31dd,	// (0x000217a6) list_medium_line_t4_g4_t4_ParamLimits

0x31dd,	// (0x000217a6) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0002d913) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0002d913) list_medium_line_t4_g4_t

0x45d1,	// (0x00022b9a) chi_dic_find_pane_g1

0x55b1,	// (0x00023b7a) main_tport_pane

0xd43f,	// (0x0002ba08) list_medium_line_plain_t1

0x7390,	// (0x00025959) list_medium_line_t2_g2_g1_ParamLimits

0x7390,	// (0x00025959) list_medium_line_t2_g2_g1

0xd455,	// (0x0002ba1e) list_medium_line_t2_g2_g2_ParamLimits

0xd455,	// (0x0002ba1e) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0002dfcf) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0002dfcf) list_medium_line_t2_g2_g

0x739c,	// (0x00025965) list_medium_line_t2_g2_t1_ParamLimits

0x739c,	// (0x00025965) list_medium_line_t2_g2_t1

0x73b3,	// (0x0002597c) list_medium_line_t2_g2_t2_ParamLimits

0x73b3,	// (0x0002597c) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0002dfd4) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0002dfd4) list_medium_line_t2_g2_t

0xd78f,	// (0x0002bd58) aid_sp_fs_list_icon_a_sm

0xd797,	// (0x0002bd60) aid_sp_fs_list_icon_d

0xd79f,	// (0x0002bd68) aid_sp_fs_text_primary

0xd7a8,	// (0x0002bd71) aid_sp_fs_text_secondary

0x78f9,	// (0x00025ec2) list_medium_line

0x78f9,	// (0x00025ec2) list_medium_line_g2

0x78f9,	// (0x00025ec2) list_medium_line_g3

0x78f9,	// (0x00025ec2) list_medium_line_plain

0x78f9,	// (0x00025ec2) list_medium_line_plain_t2

0x78f9,	// (0x00025ec2) list_medium_line_plain_t3

0x78f9,	// (0x00025ec2) list_medium_line_right_icon

0x78f9,	// (0x00025ec2) list_medium_line_right_iconx2

0x78f9,	// (0x00025ec2) list_medium_line_t2

0x78f9,	// (0x00025ec2) list_medium_line_t2_g2

0x78f9,	// (0x00025ec2) list_medium_line_t2_g3

0x78f9,	// (0x00025ec2) list_medium_line_t2_right_icon

0x78f9,	// (0x00025ec2) list_medium_line_t2_right_iconx2

0x78f9,	// (0x00025ec2) list_medium_line_t3

0x78f9,	// (0x00025ec2) list_medium_line_t3_g2

0x78f9,	// (0x00025ec2) list_medium_line_t3_g3

0x78f9,	// (0x00025ec2) list_medium_line_t3_right_iconx2

0x7902,	// (0x00025ecb) list_medium_line_t4_g4

0x790b,	// (0x00025ed4) list_medium_line_x2

0x790b,	// (0x00025ed4) list_medium_line_x2_t2_g2

0x790b,	// (0x00025ed4) list_medium_line_x2_t2_g3

0x790b,	// (0x00025ed4) list_medium_line_x2_t2_g4

0x790b,	// (0x00025ed4) list_medium_line_x2_t3

0x790b,	// (0x00025ed4) list_medium_line_x2_t3_g2

0x790b,	// (0x00025ed4) list_medium_line_x2_t3_g3

0x790b,	// (0x00025ed4) list_medium_line_x2_t3_g4

0x790b,	// (0x00025ed4) list_medium_line_x2_t4_g2

0x790b,	// (0x00025ed4) list_medium_line_x2_t4_g4

0x7914,	// (0x00025edd) list_medium_line_x3

0x7914,	// (0x00025edd) list_medium_line_x3_t4

0x7914,	// (0x00025edd) list_medium_line_x3_t4_g4

0x7902,	// (0x00025ecb) list_medium_line_x4_t4

0x7902,	// (0x00025ecb) list_medium_line_x4_t4_g7

0x7902,	// (0x00025ecb) list_medium_line_x4_t5

0x791d,	// (0x00025ee6) list_single_fs_dyc_pane_ParamLimits

0x791d,	// (0x00025ee6) list_single_fs_dyc_pane

0x3190,	// (0x00021759) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x4_t4_g7_g1

0x8006,	// (0x000265cf) list_medium_line_x4_t4_g7_g2_ParamLimits

0x8006,	// (0x000265cf) list_medium_line_x4_t4_g7_g2

0x8012,	// (0x000265db) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8012,	// (0x000265db) list_medium_line_x4_t4_g7_g3

0x8021,	// (0x000265ea) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8021,	// (0x000265ea) list_medium_line_x4_t4_g7_g4

0x802d,	// (0x000265f6) list_medium_line_x4_t4_g7_g5_ParamLimits

0x802d,	// (0x000265f6) list_medium_line_x4_t4_g7_g5

0x803c,	// (0x00026605) list_medium_line_x4_t4_g7_g6_ParamLimits

0x803c,	// (0x00026605) list_medium_line_x4_t4_g7_g6

0x804b,	// (0x00026614) list_medium_line_x4_t4_g7_g7_ParamLimits

0x804b,	// (0x00026614) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbad,	// (0x0002e176) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbad,	// (0x0002e176) list_medium_line_x4_t4_g7_g

0x8057,	// (0x00026620) list_medium_line_x4_t4_g7_t1_ParamLimits

0x8057,	// (0x00026620) list_medium_line_x4_t4_g7_t1

0x806c,	// (0x00026635) list_medium_line_x4_t4_g7_t2_ParamLimits

0x806c,	// (0x00026635) list_medium_line_x4_t4_g7_t2

0x8081,	// (0x0002664a) list_medium_line_x4_t4_g7_t3_ParamLimits

0x8081,	// (0x0002664a) list_medium_line_x4_t4_g7_t3

0x8096,	// (0x0002665f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x8096,	// (0x0002665f) list_medium_line_x4_t4_g7_t4

0x80a8,	// (0x00026671) list_medium_line_x4_t4_g7_t5_ParamLimits

0x80a8,	// (0x00026671) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbbc,	// (0x0002e185) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbbc,	// (0x0002e185) list_medium_line_x4_t4_g7_t

0x80ba,	// (0x00026683) list_single_dyc_row_pane_ParamLimits

0x80ba,	// (0x00026683) list_single_dyc_row_pane

0x8754,	// (0x00026d1d) call5_gesture_pane_ParamLimits

0x8754,	// (0x00026d1d) call5_gesture_pane

0x878a,	// (0x00026d53) call5_windows_pane_ParamLimits

0x878a,	// (0x00026d53) call5_windows_pane

0x8802,	// (0x00026dcb) call5_swipe_1_pane_cp_ParamLimits

0x8802,	// (0x00026dcb) call5_swipe_1_pane_cp

0x880e,	// (0x00026dd7) call5_swipe_2_pane_cp_ParamLimits

0x880e,	// (0x00026dd7) call5_swipe_2_pane_cp

0xaf26,	// (0x000294ef) call5_image_pane_cp

0x881a,	// (0x00026de3) popup_call5_audio_first_window_cp_ParamLimits

0x881a,	// (0x00026de3) popup_call5_audio_first_window_cp

0xe26e,	// (0x0002c837) call5_swipe_1_pane_g1_cp_ParamLimits

0xe26e,	// (0x0002c837) call5_swipe_1_pane_g1_cp

0xe2ae,	// (0x0002c877) call5_swipe_1_pane_g2_cp

0xe287,	// (0x0002c850) call5_swipe_1_pane_t1_cp_ParamLimits

0xe287,	// (0x0002c850) call5_swipe_1_pane_t1_cp

0xe26e,	// (0x0002c837) call5_swipe_2_pane_g1_cp_ParamLimits

0xe26e,	// (0x0002c837) call5_swipe_2_pane_g1_cp

0xe2b6,	// (0x0002c87f) call5_swipe_2_pane_g2_cp

0xe2be,	// (0x0002c887) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2be,	// (0x0002c887) call5_swipe_2_pane_t1_cp

0xa415,	// (0x000289de) main_sp_fs_email_pane

0xe2d3,	// (0x0002c89c) main_sp_fs_listscroll_pane_te

0xe2dc,	// (0x0002c8a5) popup_sp_fs_action_menu_pane_ParamLimits

0xe2dc,	// (0x0002c8a5) popup_sp_fs_action_menu_pane

0xc7c0,	// (0x0002ad89) bg_sp_fs_ctrlbar_pane_g1

0xe322,	// (0x0002c8eb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe32b,	// (0x0002c8f4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe334,	// (0x0002c8fd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7c0,	// (0x0002ad89) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4f,	// (0x0002e218) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc59f,	// (0x0002ab68) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc59f,	// (0x0002ab68) bg_sp_fs_ctrlbar_ddmenu_pane

0xe33d,	// (0x0002c906) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe33d,	// (0x0002c906) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe349,	// (0x0002c912) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe349,	// (0x0002c912) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0ace,	// (0x0001f097) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0ace,	// (0x0001f097) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe355,	// (0x0002c91e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe355,	// (0x0002c91e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe36f,	// (0x0002c938) list_medium_line_t2_right_icon_g1

0x8828,	// (0x00026df1) list_medium_line_t2_right_icon_t1

0x8838,	// (0x00026e01) list_medium_line_t2_right_icon_t2

0x0001,

0xfc58,	// (0x0002e221) list_medium_line_t2_right_icon_t

0xc36f,	// (0x0002a938) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc36f,	// (0x0002a938) bg_sp_fs_ctrlbar_pane

0x889f,	// (0x00026e68) main_sp_fs_ctrlbar_button_pane_cp01

0x88a7,	// (0x00026e70) main_sp_fs_ctrlbar_ddmenu_pane

0xe3af,	// (0x0002c978) main_sp_fs_ctrlbar_pane_g1

0xe3bb,	// (0x0002c984) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0ad8,	// (0x0001f0a1) main_sp_fs_ctrlbar_pane_g

0xe3c7,	// (0x0002c990) main_sp_fs_ctrlbar_pane_t1

0x88b1,	// (0x00026e7a) main_sp_fs_ctrlbar_pane

0x88cb,	// (0x00026e94) main_sp_fs_listscroll_pane_te_cp01

0x88dc,	// (0x00026ea5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x88dc,	// (0x00026ea5) popup_sp_fs_action_menu_pane_cp01

0xa415,	// (0x000289de) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa415,	// (0x000289de) bg_sp_fs_highlight_list_pane_cp01

0xe3f7,	// (0x0002c9c0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3f7,	// (0x0002c9c0) sp_fs_action_menu_list_gene_pane_g1

0xe406,	// (0x0002c9cf) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe406,	// (0x0002c9cf) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x0ae2,	// (0x0001f0ab) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x0ae2,	// (0x0001f0ab) sp_fs_action_menu_list_gene_pane_g

0xe413,	// (0x0002c9dc) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe413,	// (0x0002c9dc) sp_fs_action_menu_list_gene_pane_t1

0xe42b,	// (0x0002c9f4) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe42b,	// (0x0002c9f4) sp_fs_action_menu_list_gene_pane

0xe44e,	// (0x0002ca17) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe44e,	// (0x0002ca17) popup_sp_fs_action_menu_bg_pane

0xe45c,	// (0x0002ca25) sp_fs_action_menu_list_pane_ParamLimits

0xe45c,	// (0x0002ca25) sp_fs_action_menu_list_pane

0xe480,	// (0x0002ca49) sp_fs_scroll_pane_cp01_ParamLimits

0xe480,	// (0x0002ca49) sp_fs_scroll_pane_cp01

0x890a,	// (0x00026ed3) list_medium_line_plain_t2_t1

0x891a,	// (0x00026ee3) list_medium_line_plain_t2_t2

0x0001,

0xfc5d,	// (0x0002e226) list_medium_line_plain_t2_t

0x8928,	// (0x00026ef1) list_medium_line_plain_t3_t1

0x8938,	// (0x00026f01) list_medium_line_plain_t3_t2

0x8946,	// (0x00026f0f) list_medium_line_plain_t3_t3

0x0002,

0xfc62,	// (0x0002e22b) list_medium_line_plain_t3_t

0x3190,	// (0x00021759) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x2_t2_g2_g1

0x31a8,	// (0x00021771) list_medium_line_x2_t2_g2_g2_ParamLimits

0x31a8,	// (0x00021771) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0002d81a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0002d81a) list_medium_line_x2_t2_g2_g

0x44ee,	// (0x00022ab7) list_medium_line_x2_t2_g2_t1_ParamLimits

0x44ee,	// (0x00022ab7) list_medium_line_x2_t2_g2_t1

0x31dd,	// (0x000217a6) list_medium_line_x2_t2_g2_t2_ParamLimits

0x31dd,	// (0x000217a6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc69,	// (0x0002e232) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc69,	// (0x0002e232) list_medium_line_x2_t2_g2_t

0x3190,	// (0x00021759) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x2_t4_g2_g1

0x31a8,	// (0x00021771) list_medium_line_x2_t4_g2_g2_ParamLimits

0x31a8,	// (0x00021771) list_medium_line_x2_t4_g2_g2

0x0001,

0xf251,	// (0x0002d81a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf251,	// (0x0002d81a) list_medium_line_x2_t4_g2_g

0x8954,	// (0x00026f1d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8954,	// (0x00026f1d) list_medium_line_x2_t4_g2_t1

0x896e,	// (0x00026f37) list_medium_line_x2_t4_g2_t2_ParamLimits

0x896e,	// (0x00026f37) list_medium_line_x2_t4_g2_t2

0x8984,	// (0x00026f4d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8984,	// (0x00026f4d) list_medium_line_x2_t4_g2_t3

0x31dd,	// (0x000217a6) list_medium_line_x2_t4_g2_t4_ParamLimits

0x31dd,	// (0x000217a6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc6e,	// (0x0002e237) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc6e,	// (0x0002e237) list_medium_line_x2_t4_g2_t

0xe4a6,	// (0x0002ca6f) list_medium_line_t3_right_iconx2_g1

0xe36f,	// (0x0002c938) list_medium_line_t3_right_iconx2_g2

0x8999,	// (0x00026f62) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc77,	// (0x0002e240) list_medium_line_t3_right_iconx2_g

0x89a1,	// (0x00026f6a) list_medium_line_t3_right_iconx2_t1

0x89b1,	// (0x00026f7a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc7e,	// (0x0002e247) list_medium_line_t3_right_iconx2_t

0x3190,	// (0x00021759) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x3_t4_g4_g1

0x319c,	// (0x00021765) list_medium_line_x3_t4_g4_g2_ParamLimits

0x319c,	// (0x00021765) list_medium_line_x3_t4_g4_g2

0x44d6,	// (0x00022a9f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x44d6,	// (0x00022a9f) list_medium_line_x3_t4_g4_g3

0x89bf,	// (0x00026f88) list_medium_line_x3_t4_g4_g4_ParamLimits

0x89bf,	// (0x00026f88) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc83,	// (0x0002e24c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc83,	// (0x0002e24c) list_medium_line_x3_t4_g4_g

0x89cb,	// (0x00026f94) list_medium_line_x3_t4_g4_t1_ParamLimits

0x89cb,	// (0x00026f94) list_medium_line_x3_t4_g4_t1

0x89e2,	// (0x00026fab) list_medium_line_x3_t4_g4_t2_ParamLimits

0x89e2,	// (0x00026fab) list_medium_line_x3_t4_g4_t2

0x4503,	// (0x00022acc) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4503,	// (0x00022acc) list_medium_line_x3_t4_g4_t3

0x89f7,	// (0x00026fc0) list_medium_line_x3_t4_g4_t4_ParamLimits

0x89f7,	// (0x00026fc0) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc8c,	// (0x0002e255) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc8c,	// (0x0002e255) list_medium_line_x3_t4_g4_t

0x8a14,	// (0x00026fdd) list_single_dyc_row_text_pane_t1_ParamLimits

0x8a14,	// (0x00026fdd) list_single_dyc_row_text_pane_t1

0x8a53,	// (0x0002701c) list_single_dyc_row_text_pane_t2_ParamLimits

0x8a53,	// (0x0002701c) list_single_dyc_row_text_pane_t2

0xe4ae,	// (0x0002ca77) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4ae,	// (0x0002ca77) list_single_dyc_row_text_pane_t3

0x0002,

0xfc95,	// (0x0002e25e) list_single_dyc_row_text_pane_t_ParamLimits

0xfc95,	// (0x0002e25e) list_single_dyc_row_text_pane_t

0xe4c0,	// (0x0002ca89) list_single_dyc_row_pane_g1_ParamLimits

0xe4c0,	// (0x0002ca89) list_single_dyc_row_pane_g1

0xe4cc,	// (0x0002ca95) list_single_dyc_row_pane_g2_ParamLimits

0xe4cc,	// (0x0002ca95) list_single_dyc_row_pane_g2

0xe4d8,	// (0x0002caa1) list_single_dyc_row_pane_g3_ParamLimits

0xe4d8,	// (0x0002caa1) list_single_dyc_row_pane_g3

0xe4e4,	// (0x0002caad) list_single_dyc_row_pane_g4_ParamLimits

0xe4e4,	// (0x0002caad) list_single_dyc_row_pane_g4

0x0003,

0x0b26,	// (0x0001f0ef) list_single_dyc_row_pane_g_ParamLimits

0x0b26,	// (0x0001f0ef) list_single_dyc_row_pane_g

0xe4f0,	// (0x0002cab9) list_single_dyc_row_text_pane_ParamLimits

0xe4f0,	// (0x0002cab9) list_single_dyc_row_text_pane

0x9c5d,	// (0x00028226) bg_sp_fs_scroll_pane

0xe50f,	// (0x0002cad8) thumb_sp_fs_scroll_pane

0x7390,	// (0x00025959) list_medium_line_g1_ParamLimits

0x7390,	// (0x00025959) list_medium_line_g1

0xe518,	// (0x0002cae1) list_medium_line_t1_ParamLimits

0xe518,	// (0x0002cae1) list_medium_line_t1

0x3190,	// (0x00021759) list_medium_line_x2_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x2_g1

0x319c,	// (0x00021765) list_medium_line_x2_g2_ParamLimits

0x319c,	// (0x00021765) list_medium_line_x2_g2

0x0001,

0xfc9c,	// (0x0002e265) list_medium_line_x2_g_ParamLimits

0xfc9c,	// (0x0002e265) list_medium_line_x2_g

0xe52d,	// (0x0002caf6) list_medium_line_x2_t1_ParamLimits

0xe52d,	// (0x0002caf6) list_medium_line_x2_t1

0x3190,	// (0x00021759) list_medium_line_x3_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x3_g1

0x319c,	// (0x00021765) list_medium_line_x3_g2_ParamLimits

0x319c,	// (0x00021765) list_medium_line_x3_g2

0x0001,

0xfc9c,	// (0x0002e265) list_medium_line_x3_g_ParamLimits

0xfc9c,	// (0x0002e265) list_medium_line_x3_g

0xe52d,	// (0x0002caf6) list_medium_line_x3_t1_ParamLimits

0xe52d,	// (0x0002caf6) list_medium_line_x3_t1

0xe543,	// (0x0002cb0c) thumb_sp_fs_scroll_pane_g1

0xe54c,	// (0x0002cb15) thumb_sp_fs_scroll_pane_g2

0xe555,	// (0x0002cb1e) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0b34,	// (0x0001f0fd) thumb_sp_fs_scroll_pane_g

0xe543,	// (0x0002cb0c) bg_sp_fs_scroll_pane_g1

0xe54c,	// (0x0002cb15) bg_sp_fs_scroll_pane_g2

0xe555,	// (0x0002cb1e) bg_sp_fs_scroll_pane_g3

0x0002,

0x0b34,	// (0x0001f0fd) bg_sp_fs_scroll_pane_g

0x3190,	// (0x00021759) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3190,	// (0x00021759) list_medium_line_x2_t3_g4_g1

0x3237,	// (0x00021800) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3237,	// (0x00021800) list_medium_line_x2_t3_g4_g2

0x319c,	// (0x00021765) list_medium_line_x2_t3_g4_g3_ParamLimits

0x319c,	// (0x00021765) list_medium_line_x2_t3_g4_g3

0x31a8,	// (0x00021771) list_medium_line_x2_t3_g4_g4_ParamLimits

0x31a8,	// (0x00021771) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0002d896) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0002d896) list_medium_line_x2_t3_g4_g

0x8aad,	// (0x00027076) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8aad,	// (0x00027076) list_medium_line_x2_t3_g4_t1

0x8ac3,	// (0x0002708c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8ac3,	// (0x0002708c) list_medium_line_x2_t3_g4_t2

0x31dd,	// (0x000217a6) list_medium_line_x2_t3_g4_t3_ParamLimits

0x31dd,	// (0x000217a6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfca1,	// (0x0002e26a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfca1,	// (0x0002e26a) list_medium_line_x2_t3_g4_t

0x7390,	// (0x00025959) list_medium_line_g2_g1_ParamLimits

0x7390,	// (0x00025959) list_medium_line_g2_g1

0xd455,	// (0x0002ba1e) list_medium_line_g2_g2_ParamLimits

0xd455,	// (0x0002ba1e) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0002dfcf) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0002dfcf) list_medium_line_g2_g

0xe55e,	// (0x0002cb27) list_medium_line_g2_t1_ParamLimits

0xe55e,	// (0x0002cb27) list_medium_line_g2_t1

0x7390,	// (0x00025959) list_medium_line_t3_g2_g1_ParamLimits

0x7390,	// (0x00025959) list_medium_line_t3_g2_g1

0xd455,	// (0x0002ba1e) list_medium_line_t3_g2_g2_ParamLimits

0xd455,	// (0x0002ba1e) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0002dfcf) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0002dfcf) list_medium_line_t3_g2_g

0x8adc,	// (0x000270a5) list_medium_line_t3_g2_t1_ParamLimits

0x8adc,	// (0x000270a5) list_medium_line_t3_g2_t1

0x8af3,	// (0x000270bc) list_medium_line_t3_g2_t2_ParamLimits

0x8af3,	// (0x000270bc) list_medium_line_t3_g2_t2

0x8b08,	// (0x000270d1) list_medium_line_t3_g2_t3_ParamLimits

0x8b08,	// (0x000270d1) list_medium_line_t3_g2_t3

0x0002,

0xfca8,	// (0x0002e271) list_medium_line_t3_g2_t_ParamLimits

0xfca8,	// (0x0002e271) list_medium_line_t3_g2_t

0xe36f,	// (0x0002c938) list_medium_line_right_icon_g1

0xe573,	// (0x0002cb3c) list_medium_line_right_icon_t1

0x7390,	// (0x00025959) list_medium_line_t2_g1_ParamLimits

0x7390,	// (0x00025959) list_medium_line_t2_g1

0x8b21,	// (0x000270ea) list_medium_line_t2_t1_ParamLimits

0x8b21,	// (0x000270ea) list_medium_line_t2_t1

0x8b3b,	// (0x00027104) list_medium_line_t2_t2_ParamLimits

0x8b3b,	// (0x00027104) list_medium_line_t2_t2

0x0001,

0xfcaf,	// (0x0002e278) list_medium_line_t2_t_ParamLimits

0xfcaf,	// (0x0002e278) list_medium_line_t2_t

0x7390,	// (0x00025959) list_medium_line_t3_g1_ParamLimits

0x7390,	// (0x00025959) list_medium_line_t3_g1

0x8b50,	// (0x00027119) list_medium_line_t3_t1_ParamLimits

0x8b50,	// (0x00027119) list_medium_line_t3_t1

0x8b67,	// (0x00027130) list_medium_line_t3_t2_ParamLimits

0x8b67,	// (0x00027130) list_medium_line_t3_t2

0x8b7c,	// (0x00027145) list_medium_line_t3_t3_ParamLimits

0x8b7c,	// (0x00027145) list_medium_line_t3_t3

0x0002,

0xfcb4,	// (0x0002e27d) list_medium_line_t3_t_ParamLimits

0xfcb4,	// (0x0002e27d) list_medium_line_t3_t

0x7390,	// (0x00025959) list_medium_line_g3_g1_ParamLimits

0x7390,	// (0x00025959) list_medium_line_g3_g1

0xe581,	// (0x0002cb4a) list_medium_line_g3_g2_ParamLimits

0xe581,	// (0x0002cb4a) list_medium_line_g3_g2

0xd455,	// (0x0002ba1e) list_medium_line_g3_g3_ParamLimits

0xd455,	// (0x0002ba1e) list_medium_line_g3_g3

0x0002,

0xfcbb,	// (0x0002e284) list_medium_line_g3_g_ParamLimits

0xfcbb,	// (0x0002e284) list_medium_line_g3_g

0xe58d,	// (0x0002cb56) list_medium_line_g3_t1_ParamLimits

0xe58d,	// (0x0002cb56) list_medium_line_g3_t1

0x7390,	// (0x00025959) list_medium_line_t2_g3_g1_ParamLimits

0x7390,	// (0x00025959) list_medium_line_t2_g3_g1

0xe581,	// (0x0002cb4a) list_medium_line_t2_g3_g2_ParamLimits

0xe581,	// (0x0002cb4a) list_medium_line_t2_g3_g2

0xd455,	// (0x0002ba1e) list_medium_line_t2_g3_g3_ParamLimits

0xd455,	// (0x0002ba1e) list_medium_line_t2_g3_g3

0x0002,

0xfcbb,	// (0x0002e284) list_medium_line_t2_g3_g_ParamLimits

0xfcbb,	// (0x0002e284) list_medium_line_t2_g3_g

0x8b8e,	// (0x00027157) list_medium_line_t2_g3_t1_ParamLimits

0x8b8e,	// (0x00027157) list_medium_line_t2_g3_t1

0x8ba5,	// (0x0002716e) list_medium_line_t2_g3_t2_ParamLimits

0x8ba5,	// (0x0002716e) list_medium_line_t2_g3_t2

0x0001,

0xfcc2,	// (0x0002e28b) list_medium_line_t2_g3_t_ParamLimits

0xfcc2,	// (0x0002e28b) list_medium_line_t2_g3_t

0x7390,	// (0x00025959) list_medium_line_t3_g3_g1_ParamLimits

0x7390,	// (0x00025959) list_medium_line_t3_g3_g1

0xe581,	// (0x0002cb4a) list_medium_line_t3_g3_g2_ParamLimits

0xe581,	// (0x0002cb4a) list_medium_line_t3_g3_g2

0xd455,	// (0x0002ba1e) list_medium_line_t3_g3_g3_ParamLimits

0xd455,	// (0x0002ba1e) list_medium_line_t3_g3_g3

0x0002,

0xfcbb,	// (0x0002e284) list_medium_line_t3_g3_g_ParamLimits

0xfcbb,	// (0x0002e284) list_medium_line_t3_g3_g

0x8bba,	// (0x00027183) list_medium_line_t3_g3_t1_ParamLimits

0x8bba,	// (0x00027183) list_medium_line_t3_g3_t1

0x8bd3,	// (0x0002719c) list_medium_line_t3_g3_t2_ParamLimits

0x8bd3,	// (0x0002719c) list_medium_line_t3_g3_t2

0x8be9,	// (0x000271b2) list_medium_line_t3_g3_t3_ParamLimits

0x8be9,	// (0x000271b2) list_medium_line_t3_g3_t3

0x0002,

0xfcc7,	// (0x0002e290) list_medium_line_t3_g3_t_ParamLimits

0xfcc7,	// (0x0002e290) list_medium_line_t3_g3_t

0xe4a6,	// (0x0002ca6f) list_medium_line_right_iconx2_g1

0xe36f,	// (0x0002c938) list_medium_line_right_iconx2_g2

0x0001,

0x0b68,	// (0x0001f131) list_medium_line_right_iconx2_g

0xe5a2,	// (0x0002cb6b) list_medium_line_right_iconx2_t1

0xe4a6,	// (0x0002ca6f) list_medium_line_t2_right_iconx2_g1

0xe36f,	// (0x0002c938) list_medium_line_t2_right_iconx2_g2

0x0001,

0x0b68,	// (0x0001f131) list_medium_line_t2_right_iconx2_g

0x8c03,	// (0x000271cc) list_medium_line_t2_right_iconx2_t1

0x8c13,	// (0x000271dc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcce,	// (0x0002e297) list_medium_line_t2_right_iconx2_t

0x8c21,	// (0x000271ea) list_medium_line_x4_t4_t1

0x8c2f,	// (0x000271f8) list_medium_line_x4_t4_t2

0x8c3f,	// (0x00027208) list_medium_line_x4_t4_t3

0x8c4f,	// (0x00027218) list_medium_line_x4_t4_t4

0x0003,

0xfcd3,	// (0x0002e29c) list_medium_line_x4_t4_t

0x8c89,	// (0x00027252) tport_appsw_pane_ParamLimits

0x8c89,	// (0x00027252) tport_appsw_pane

0x8c97,	// (0x00027260) tport_contact_pane_ParamLimits

0x8c97,	// (0x00027260) tport_contact_pane

0x8ca7,	// (0x00027270) tport_listscroll_pane_ParamLimits

0x8ca7,	// (0x00027270) tport_listscroll_pane

0x8cb7,	// (0x00027280) cell_tport_appsw_pane_ParamLimits

0x8cb7,	// (0x00027280) cell_tport_appsw_pane

0xca61,	// (0x0002b02a) tport_appsw_pane_g1_ParamLimits

0xca61,	// (0x0002b02a) tport_appsw_pane_g1

0xe5b0,	// (0x0002cb79) tport_contact_pane_g1

0xe5b9,	// (0x0002cb82) tport_contact_pane_t1

0xe5c7,	// (0x0002cb90) tport_contact_pane_t2

0x0001,

0x0b7b,	// (0x0001f144) tport_contact_pane_t

0xe5d5,	// (0x0002cb9e) list_tport_pane

0xe5de,	// (0x0002cba7) scroll_pane_cp_030

0x8cec,	// (0x000272b5) cell_tport_appsw_pane_g1

0x8cfc,	// (0x000272c5) cell_tport_appsw_pane_t1

0x9c5d,	// (0x00028226) grid_highlight_pane_cp019

0x8d0a,	// (0x000272d3) list_tport_double_graphic_pane_ParamLimits

0x8d0a,	// (0x000272d3) list_tport_double_graphic_pane

0xa415,	// (0x000289de) list_highlight_pane_cp023_ParamLimits

0xa415,	// (0x000289de) list_highlight_pane_cp023

0x8d17,	// (0x000272e0) list_tport_double_graphic_pane_g1_ParamLimits

0x8d17,	// (0x000272e0) list_tport_double_graphic_pane_g1

0x8d24,	// (0x000272ed) list_tport_double_graphic_pane_t1_ParamLimits

0x8d24,	// (0x000272ed) list_tport_double_graphic_pane_t1

0x8d39,	// (0x00027302) list_tport_double_graphic_pane_t2_ParamLimits

0x8d39,	// (0x00027302) list_tport_double_graphic_pane_t2

0x0001,

0xfce3,	// (0x0002e2ac) list_tport_double_graphic_pane_t_ParamLimits

0xfce3,	// (0x0002e2ac) list_tport_double_graphic_pane_t

0x9c5d,	// (0x00028226) main_cale_note_pane

0x1edf,	// (0x000204a8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1edf,	// (0x000204a8) cell_vitu2_function_top_wide_pane_cp01

0x8427,	// (0x000269f0) wait_bar_pane_cp05_ParamLimits

0xa415,	// (0x000289de) listscroll_cmail_pane

0xe5ef,	// (0x0002cbb8) list_cmail_pane

0x8d55,	// (0x0002731e) list_cmail_body_pane

0x8d6d,	// (0x00027336) list_single_cmail_header_caption_pane

0x8d8d,	// (0x00027356) list_single_cmail_header_detail_pane_ParamLimits

0x8d8d,	// (0x00027356) list_single_cmail_header_detail_pane

0x8dbf,	// (0x00027388) list_single_cmail_header_caption_pane_t1

0x8dda,	// (0x000273a3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8dda,	// (0x000273a3) list_single_cmail_header_detail_pane_g1

0xe606,	// (0x0002cbcf) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe606,	// (0x0002cbcf) list_single_cmail_header_detail_pane_g2

0x0002,

0xfce8,	// (0x0002e2b1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfce8,	// (0x0002e2b1) list_single_cmail_header_detail_pane_g

0x8df2,	// (0x000273bb) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8df2,	// (0x000273bb) list_single_cmail_header_detail_pane_t1

0x8e40,	// (0x00027409) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8e40,	// (0x00027409) list_single_cmail_header_editor_pane_bg

0xdf16,	// (0x0002c4df) list_cmail_body_pane_g1

0xe643,	// (0x0002cc0c) list_cmail_body_pane_t1

0xd1d1,	// (0x0002b79a) list_single_cmail_header_editor_pane_bg_g1

0xa832,	// (0x00028dfb) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1e1,	// (0x0002b7aa) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1d9,	// (0x0002b7a2) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd44d,	// (0x0002ba16) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd201,	// (0x0002b7ca) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1f1,	// (0x0002b7ba) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1f9,	// (0x0002b7c2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa812,	// (0x00028ddb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e57,	// (0x00027420) calenote_gesture_pane_ParamLimits

0x8e57,	// (0x00027420) calenote_gesture_pane

0x8e71,	// (0x0002743a) calenote_window_pane_ParamLimits

0x8e71,	// (0x0002743a) calenote_window_pane

0xe651,	// (0x0002cc1a) popup_note_window_cp01

0x8e89,	// (0x00027452) calenote_swipe_1_pane_ParamLimits

0x8e89,	// (0x00027452) calenote_swipe_1_pane

0x880e,	// (0x00026dd7) calenote_swipe_2_pane_ParamLimits

0x880e,	// (0x00026dd7) calenote_swipe_2_pane

0xe26e,	// (0x0002c837) calenote_swipe_1_pane_g1_ParamLimits

0xe26e,	// (0x0002c837) calenote_swipe_1_pane_g1

0xe27b,	// (0x0002c844) calenote_swipe_1_pane_g2_ParamLimits

0xe27b,	// (0x0002c844) calenote_swipe_1_pane_g2

0x0001,

0x0abb,	// (0x0001f084) calenote_swipe_1_pane_g_ParamLimits

0x0abb,	// (0x0001f084) calenote_swipe_1_pane_g

0xe663,	// (0x0002cc2c) calenote_swipe_1_pane_t1_ParamLimits

0xe663,	// (0x0002cc2c) calenote_swipe_1_pane_t1

0xe26e,	// (0x0002c837) calenote_swipe_2_pane_g1_ParamLimits

0xe26e,	// (0x0002c837) calenote_swipe_2_pane_g1

0xe682,	// (0x0002cc4b) calenote_swipe_2_pane_g2_ParamLimits

0xe682,	// (0x0002cc4b) calenote_swipe_2_pane_g2

0x0001,

0x0b98,	// (0x0001f161) calenote_swipe_2_pane_g_ParamLimits

0x0b98,	// (0x0001f161) calenote_swipe_2_pane_g

0xe68e,	// (0x0002cc57) calenote_swipe_2_pane_t1_ParamLimits

0xe68e,	// (0x0002cc57) calenote_swipe_2_pane_t1

0x9c5d,	// (0x00028226) main_mup_navstr_pane

0x62fb,	// (0x000248c4) main_mup3_pane_t7_ParamLimits

0x62fb,	// (0x000248c4) main_mup3_pane_t7

0x17dc,	// (0x0001fda5) main_mp4_pane_g6_ParamLimits

0x17dc,	// (0x0001fda5) main_mp4_pane_g6

0x1acd,	// (0x00020096) main_image3_pane_t4_ParamLimits

0x1acd,	// (0x00020096) main_image3_pane_t4

0x8e9c,	// (0x00027465) popup_navstr_preview_pane_ParamLimits

0x8e9c,	// (0x00027465) popup_navstr_preview_pane

0x8ea8,	// (0x00027471) scroll_navstr_pane_ParamLimits

0x8ea8,	// (0x00027471) scroll_navstr_pane

0x9c5d,	// (0x00028226) bg_popup_preview_window_pane_cp04

0xe6b5,	// (0x0002cc7e) popup_navstr_preview_pane_t1

0x8eb4,	// (0x0002747d) scroll_navstr_pane_g1_ParamLimits

0x8eb4,	// (0x0002747d) scroll_navstr_pane_g1

0x8ec1,	// (0x0002748a) scroll_navstr_pane_t1_ParamLimits

0x8ec1,	// (0x0002748a) scroll_navstr_pane_t1

0xe65a,	// (0x0002cc23) bg_button_pane_cp014

0xe65a,	// (0x0002cc23) bg_button_pane_cp030

0x86fa,	// (0x00026cc3) list_double_fisheye_pane_g4_ParamLimits

0x86fa,	// (0x00026cc3) list_double_fisheye_pane_g4

0x8706,	// (0x00026ccf) list_double_fisheye_pane_g5_ParamLimits

0x8706,	// (0x00026ccf) list_double_fisheye_pane_g5

0xe5f7,	// (0x0002cbc0) sp_fs_scroll_pane_cp03

0xe3af,	// (0x0002c978) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3bb,	// (0x0002c984) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0ad8,	// (0x0001f0a1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3c7,	// (0x0002c990) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8d4b,	// (0x00027314) sp_fs_scroll_pane_cp02

0xa515,	// (0x00028ade) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa515,	// (0x00028ade) popup_sp_fs_calendar_preview_list_single_pane

0x9c5d,	// (0x00028226) main_cam6_pano_pane

0xa415,	// (0x000289de) main_mup3_pane_ParamLimits

0x9c5d,	// (0x00028226) main_phacti_pane

0x82fa,	// (0x000268c3) bg_button_pane_cp11

0x8312,	// (0x000268db) main_mobtv_info_pane_g2_ParamLimits

0x8312,	// (0x000268db) main_mobtv_info_pane_g2

0x0001,

0xfbfc,	// (0x0002e1c5) main_mobtv_info_pane_g_ParamLimits

0xfbfc,	// (0x0002e1c5) main_mobtv_info_pane_g

0x84c4,	// (0x00026a8d) sc_clock_pane_t5_ParamLimits

0x84c4,	// (0x00026a8d) sc_clock_pane_t5

0x856d,	// (0x00026b36) main_radioblah_pane_g1_ParamLimits

0xe1ba,	// (0x0002c783) main_radioblah_pane_t3_ParamLimits

0xe1ba,	// (0x0002c783) main_radioblah_pane_t3

0xe1d2,	// (0x0002c79b) main_radioblah_pane_t4_ParamLimits

0xe1d2,	// (0x0002c79b) main_radioblah_pane_t4

0x858b,	// (0x00026b54) main_radioblah_text_pane_ParamLimits

0x858b,	// (0x00026b54) main_radioblah_text_pane

0x8598,	// (0x00026b61) main_radioblah_info_pane_g1_ParamLimits

0x8631,	// (0x00026bfa) main_radioblah_info_pane_t4_ParamLimits

0x8631,	// (0x00026bfa) main_radioblah_info_pane_t4

0xa415,	// (0x000289de) main_sp_fs_calendar_pane

0x8ed3,	// (0x0002749c) main_phacti_pane_g1

0x8edb,	// (0x000274a4) phacti_note_pane_ParamLimits

0x8edb,	// (0x000274a4) phacti_note_pane

0xe6cc,	// (0x0002cc95) phacti_term_pane_ParamLimits

0xe6cc,	// (0x0002cc95) phacti_term_pane

0xe6e1,	// (0x0002ccaa) phacti_note_pane_t1_ParamLimits

0xe6e1,	// (0x0002ccaa) phacti_note_pane_t1

0xe6f8,	// (0x0002ccc1) phacti_term_pane_g1

0xe700,	// (0x0002ccc9) phacti_term_pane_t1_ParamLimits

0xe700,	// (0x0002ccc9) phacti_term_pane_t1

0xe72a,	// (0x0002ccf3) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe732,	// (0x0002ccfb) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0ba2,	// (0x0001f16b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe73a,	// (0x0002cd03) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe73a,	// (0x0002cd03) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe750,	// (0x0002cd19) aid_popup_sp_fs_bg_corner_pane

0xc7c0,	// (0x0002ad89) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c5d,	// (0x00028226) popup_sp_fs_calendar_preview_bg_pane

0xe758,	// (0x0002cd21) popup_sp_fs_calendar_preview_list_pane

0xc36f,	// (0x0002a938) bg_main_sp_fs_cale_pane_ParamLimits

0xc36f,	// (0x0002a938) bg_main_sp_fs_cale_pane

0xe769,	// (0x0002cd32) listscroll_cale_mrui_pane_ParamLimits

0xe769,	// (0x0002cd32) listscroll_cale_mrui_pane

0xe77e,	// (0x0002cd47) listscroll_sp_fs_schedule_track_pane

0xe787,	// (0x0002cd50) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe787,	// (0x0002cd50) main_sp_fs_ctrlbar_pane_cp01

0xe79a,	// (0x0002cd63) main_sp_fs_ribbon_pane

0xe7a2,	// (0x0002cd6b) popup_sp_fs_cale_preview_window

0xec18,	// (0x0002d1e1) list_single_sp_fs_schedule_track_pane_ParamLimits

0xec18,	// (0x0002d1e1) list_single_sp_fs_schedule_track_pane

0x2580,	// (0x00020b49) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2580,	// (0x00020b49) bg_sp_fs_highlight_list_pane_cp03

0x8f3a,	// (0x00027503) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f3a,	// (0x00027503) list_single_sp_fs_schedule_track_pane_g1

0x8f46,	// (0x0002750f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f46,	// (0x0002750f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcf4,	// (0x0002e2bd) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcf4,	// (0x0002e2bd) list_single_sp_fs_schedule_track_pane_g

0x8f52,	// (0x0002751b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f52,	// (0x0002751b) list_single_sp_fs_schedule_track_pane_t1

0x8f70,	// (0x00027539) sp_fs_schedule_track_pane_ParamLimits

0x8f70,	// (0x00027539) sp_fs_schedule_track_pane

0xe7b4,	// (0x0002cd7d) sp_fs_schedule_track_pane_g1

0xe7bc,	// (0x0002cd85) sp_fs_schedule_track_pane_g2

0xe7c4,	// (0x0002cd8d) sp_fs_schedule_track_pane_g3

0xe7cc,	// (0x0002cd95) sp_fs_schedule_track_pane_g4

0xe7d4,	// (0x0002cd9d) sp_fs_schedule_track_pane_g5

0x0004,

0x0bac,	// (0x0001f175) sp_fs_schedule_track_pane_g

0xd1d1,	// (0x0002b79a) bg_sp_fs_schedule_viewer_highlight_g1

0xa832,	// (0x00028dfb) bg_sp_fs_schedule_viewer_highlight_g2

0xd1d9,	// (0x0002b7a2) bg_sp_fs_schedule_viewer_highlight_g3

0xd1e1,	// (0x0002b7aa) bg_sp_fs_schedule_viewer_highlight_g4

0xd44d,	// (0x0002ba16) bg_sp_fs_schedule_viewer_highlight_g5

0xd1f1,	// (0x0002b7ba) bg_sp_fs_schedule_viewer_highlight_g6

0xd1f9,	// (0x0002b7c2) bg_sp_fs_schedule_viewer_highlight_g7

0xd201,	// (0x0002b7ca) bg_sp_fs_schedule_viewer_highlight_g8

0xa812,	// (0x00028ddb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcf9,	// (0x0002e2c2) bg_sp_fs_schedule_viewer_highlight_g

0x9c5d,	// (0x00028226) bg_main_sp_fs_ribbon_pane

0x8f82,	// (0x0002754b) main_sp_fs_ribbon_pane_g1

0xe7dc,	// (0x0002cda5) main_sp_fs_ribbon_pane_t1

0x8f8b,	// (0x00027554) main_sp_fs_ribbon_pane_t2

0xe7eb,	// (0x0002cdb4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd0c,	// (0x0002e2d5) main_sp_fs_ribbon_pane_t

0xe7fa,	// (0x0002cdc3) main_sp_fs_ribbon_scheduler_pane

0xe802,	// (0x0002cdcb) bg_main_sp_fs_ribbon_pane_g1

0xe80b,	// (0x0002cdd4) bg_main_sp_fs_ribbon_pane_g2

0xe814,	// (0x0002cddd) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0bd1,	// (0x0001f19a) bg_main_sp_fs_ribbon_pane_g

0xe81c,	// (0x0002cde5) main_sp_fs_ribbon_scheduler_pane_g1

0xe825,	// (0x0002cdee) main_sp_fs_ribbon_scheduler_pane_g2

0xe82e,	// (0x0002cdf7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0bd8,	// (0x0001f1a1) main_sp_fs_ribbon_scheduler_pane_g

0xe837,	// (0x0002ce00) list_cale_mrui_pane

0x8f9a,	// (0x00027563) sp_fs_scroll_pane_cp07_ParamLimits

0x8f9a,	// (0x00027563) sp_fs_scroll_pane_cp07

0x8fb6,	// (0x0002757f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fb6,	// (0x0002757f) bg_sp_fs_schedule_viewer_highlight

0xe844,	// (0x0002ce0d) list_single_sp_fs_schedule_track_pane_cp01

0xe84c,	// (0x0002ce15) list_sp_fs_schedule_track_pane

0xe854,	// (0x0002ce1d) sp_fs_scroll_pane_cp06_ParamLimits

0xe854,	// (0x0002ce1d) sp_fs_scroll_pane_cp06

0xc7c0,	// (0x0002ad89) bgmain_sp_fs_calendar_pane_g1

0x8fc3,	// (0x0002758c) list_single_cale_mrui_pane_ParamLimits

0x8fc3,	// (0x0002758c) list_single_cale_mrui_pane

0xe866,	// (0x0002ce2f) list_single_cale_mrui_row_pane_ParamLimits

0xe866,	// (0x0002ce2f) list_single_cale_mrui_row_pane

0xe87c,	// (0x0002ce45) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe87c,	// (0x0002ce45) list_single_cale_mrui_row_pane_g1

0xe8c1,	// (0x0002ce8a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8c1,	// (0x0002ce8a) list_single_cale_mrui_row_pane_t1

0x8fd8,	// (0x000275a1) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8fd8,	// (0x000275a1) list_single_cale_mrui_row_pane_t2

0xe8d3,	// (0x0002ce9c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8d3,	// (0x0002ce9c) list_single_cale_mrui_row_pane_t3

0xe902,	// (0x0002cecb) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe902,	// (0x0002cecb) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd13,	// (0x0002e2dc) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd13,	// (0x0002e2dc) list_single_cale_mrui_row_pane_t

0x903e,	// (0x00027607) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x903e,	// (0x00027607) list_single_cmail_header_editor_pane_bg_cp01

0x9062,	// (0x0002762b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9062,	// (0x0002762b) list_single_cmail_header_editor_pane_bg_cp02

0x907e,	// (0x00027647) main_radioblah_text_pane_t1_ParamLimits

0x907e,	// (0x00027647) main_radioblah_text_pane_t1

0xe931,	// (0x0002cefa) cam6_indi_pane_cp01

0xe939,	// (0x0002cf02) cam6_mode_pane_cp01

0xe941,	// (0x0002cf0a) cam6_pano_pane

0xe94a,	// (0x0002cf13) cam6_zoom_pane_cp01

0xe954,	// (0x0002cf1d) cam6_pano_image_pane

0xe95d,	// (0x0002cf26) cam6_pano_pane_g1

0xdf16,	// (0x0002c4df) cam6_pano_pane_g2

0xe966,	// (0x0002cf2f) cam6_pano_pane_g3

0xe96f,	// (0x0002cf38) cam6_pano_pane_g4

0xcd46,	// (0x0002b30f) cam6_pano_pane_g5

0xe978,	// (0x0002cf41) cam6_pano_pane_g6

0xe980,	// (0x0002cf49) cam6_pano_pane_g7

0xe988,	// (0x0002cf51) cam6_pano_pane_g8

0xe991,	// (0x0002cf5a) cam6_pano_pane_g9

0x0008,

0xfd1c,	// (0x0002e2e5) cam6_pano_pane_g

0x9c5d,	// (0x00028226) main_browser_tag_pane

0xe6ad,	// (0x0002cc76) grid_navstr_albumart_pane

0xe99c,	// (0x0002cf65) cell_navstr_albumart_pane_ParamLimits

0xe99c,	// (0x0002cf65) cell_navstr_albumart_pane

0xe9bb,	// (0x0002cf84) cell_navstr_albumart_pane_g1

0xc17c,	// (0x0002a745) cell_navstr_albumart_pane_g2

0xc18c,	// (0x0002a755) cell_navstr_albumart_pane_g3

0xc184,	// (0x0002a74d) cell_navstr_albumart_pane_g4

0x0003,

0xfd2f,	// (0x0002e2f8) cell_navstr_albumart_pane_g

0x9098,	// (0x00027661) bt_list_pane_ParamLimits

0x9098,	// (0x00027661) bt_list_pane

0x90b1,	// (0x0002767a) bt_list_pane_t1

0x90c0,	// (0x00027689) bt_list_pane_t2

0x0001,

0xfd38,	// (0x0002e301) bt_list_pane_t

0x9c5d,	// (0x00028226) main_cale_prevew_pane

0x90cf,	// (0x00027698) popup_cale_preview_window_ParamLimits

0x90cf,	// (0x00027698) popup_cale_preview_window

0xa415,	// (0x000289de) bg_popup_preview_window_pane_cp05_ParamLimits

0xa415,	// (0x000289de) bg_popup_preview_window_pane_cp05

0xe9c3,	// (0x0002cf8c) list_cale_preview_pane_ParamLimits

0xe9c3,	// (0x0002cf8c) list_cale_preview_pane

0x90ea,	// (0x000276b3) list_double_cale_preview_pane_ParamLimits

0x90ea,	// (0x000276b3) list_double_cale_preview_pane

0x90fe,	// (0x000276c7) list_single_cale_preview_pane_ParamLimits

0x90fe,	// (0x000276c7) list_single_cale_preview_pane

0x9116,	// (0x000276df) list_single_cale_preview_pane_g1

0x911e,	// (0x000276e7) list_single_cale_preview_pane_t1_ParamLimits

0x911e,	// (0x000276e7) list_single_cale_preview_pane_t1

0x9133,	// (0x000276fc) list_double_cale_preview_pane_g1

0x913b,	// (0x00027704) list_double_cale_preview_pane_t1_ParamLimits

0x913b,	// (0x00027704) list_double_cale_preview_pane_t1

0x9150,	// (0x00027719) list_double_cale_preview_pane_t2_ParamLimits

0x9150,	// (0x00027719) list_double_cale_preview_pane_t2

0x0001,

0xfd3d,	// (0x0002e306) list_double_cale_preview_pane_t_ParamLimits

0xfd3d,	// (0x0002e306) list_double_cale_preview_pane_t

0x9c5d,	// (0x00028226) main_ezdial_pane

0xa415,	// (0x000289de) main_sp_fs_email_pane_ParamLimits

0x8846,	// (0x00026e0f) cmail_ddmenu_btn01_pane_ParamLimits

0x8846,	// (0x00026e0f) cmail_ddmenu_btn01_pane

0x8863,	// (0x00026e2c) cmail_ddmenu_btn02_pane_ParamLimits

0x8863,	// (0x00026e2c) cmail_ddmenu_btn02_pane

0x8881,	// (0x00026e4a) cmail_ddmenu_btn03_pane_ParamLimits

0x8881,	// (0x00026e4a) cmail_ddmenu_btn03_pane

0x88b1,	// (0x00026e7a) main_sp_fs_ctrlbar_pane_ParamLimits

0x88cb,	// (0x00026e94) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d55,	// (0x0002731e) list_cmail_body_pane_ParamLimits

0x8dcf,	// (0x00027398) bg_button_pane_cp12

0xe612,	// (0x0002cbdb) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe612,	// (0x0002cbdb) list_single_cmail_header_detail_pane_g3

0xe61f,	// (0x0002cbe8) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe61f,	// (0x0002cbe8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcef,	// (0x0002e2b8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcef,	// (0x0002e2b8) list_single_cmail_header_detail_pane_t

0xe715,	// (0x0002ccde) phacti_term_pane_t2_ParamLimits

0xe715,	// (0x0002ccde) phacti_term_pane_t2

0x0001,

0x0b9d,	// (0x0001f166) phacti_term_pane_t_ParamLimits

0x0b9d,	// (0x0001f166) phacti_term_pane_t

0xe9cf,	// (0x0002cf98) aid_size_list_single_double

0x9168,	// (0x00027731) popup_ezdial_listscroll_window

0x918a,	// (0x00027753) popup_number_entry_window_cp01

0xaf26,	// (0x000294ef) bg_popup_call_pane_cp09

0xe9db,	// (0x0002cfa4) ezdial_list_pane

0xe9e3,	// (0x0002cfac) scroll_pane_cp23

0xc59f,	// (0x0002ab68) bg_button_pane_cp028_ParamLimits

0xc59f,	// (0x0002ab68) bg_button_pane_cp028

0x9198,	// (0x00027761) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9198,	// (0x00027761) cmail_ddmenu_btn01_pane_g1

0x91aa,	// (0x00027773) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91aa,	// (0x00027773) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd42,	// (0x0002e30b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd42,	// (0x0002e30b) cmail_ddmenu_btn01_pane_g

0xe9eb,	// (0x0002cfb4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9eb,	// (0x0002cfb4) cmail_ddmenu_btn01_pane_t1

0xc36f,	// (0x0002a938) bg_button_pane_cp029_ParamLimits

0xc36f,	// (0x0002a938) bg_button_pane_cp029

0x91aa,	// (0x00027773) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91aa,	// (0x00027773) cmail_ddmenu_btn02_pane_g1

0x91c2,	// (0x0002778b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91c2,	// (0x0002778b) cmail_ddmenu_btn02_pane_t1

0x2580,	// (0x00020b49) bg_button_pane_cp031_ParamLimits

0x2580,	// (0x00020b49) bg_button_pane_cp031

0x91aa,	// (0x00027773) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91aa,	// (0x00027773) cmail_ddmenu_btn03_pane_g1

0x91c2,	// (0x0002778b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91c2,	// (0x0002778b) cmail_ddmenu_btn03_pane_t1

0x6b54,	// (0x0002511d) cell_dialer2_keypad_pane_t1_ParamLimits

0x6b6e,	// (0x00025137) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6b6e,	// (0x00025137) cell_dialer2_keypad_pane_t1_copy1

0x816b,	// (0x00026734) ncimui_group_button_pane

0xa415,	// (0x000289de) main_sp_fs_calendar_pane_ParamLimits

0x8d6d,	// (0x00027336) list_single_cmail_header_caption_pane_ParamLimits

0xe760,	// (0x0002cd29) aid_recal_txt_sm_pane

0x9c5d,	// (0x00028226) mian_recal_day_pane

0xe7a2,	// (0x0002cd6b) popup_sp_fs_cale_preview_window_ParamLimits

0xea00,	// (0x0002cfc9) list_recal_day_pane

0xea43,	// (0x0002d00c) list_single_recal_day_pane_ParamLimits

0xea43,	// (0x0002d00c) list_single_recal_day_pane

0xea55,	// (0x0002d01e) list_single_recal_day_pane_g1_ParamLimits

0xea55,	// (0x0002d01e) list_single_recal_day_pane_g1

0xea61,	// (0x0002d02a) list_single_recal_day_pane_g2_ParamLimits

0xea61,	// (0x0002d02a) list_single_recal_day_pane_g2

0xea6d,	// (0x0002d036) list_single_recal_day_pane_g3_ParamLimits

0xea6d,	// (0x0002d036) list_single_recal_day_pane_g3

0x91e6,	// (0x000277af) list_single_recal_day_pane_g4_ParamLimits

0x91e6,	// (0x000277af) list_single_recal_day_pane_g4

0xea79,	// (0x0002d042) list_single_recal_day_pane_g5_ParamLimits

0xea79,	// (0x0002d042) list_single_recal_day_pane_g5

0xea85,	// (0x0002d04e) list_single_recal_day_pane_g6_ParamLimits

0xea85,	// (0x0002d04e) list_single_recal_day_pane_g6

0x0004,

0xfd51,	// (0x0002e31a) list_single_recal_day_pane_g_ParamLimits

0xfd51,	// (0x0002e31a) list_single_recal_day_pane_g

0xea99,	// (0x0002d062) list_single_recal_day_pane_t1

0xeaab,	// (0x0002d074) list_single_recal_day_pane_t2

0x0001,

0x0c2f,	// (0x0001f1f8) list_single_recal_day_pane_t

0x91fe,	// (0x000277c7) ncimui_query_button_pane_ParamLimits

0x91fe,	// (0x000277c7) ncimui_query_button_pane

0x920e,	// (0x000277d7) ncimui_query_button_pane_t1_ParamLimits

0x920e,	// (0x000277d7) ncimui_query_button_pane_t1

0xeabd,	// (0x0002d086) ncimui_query_button_pane_t2_ParamLimits

0xeabd,	// (0x0002d086) ncimui_query_button_pane_t2

0x0001,

0xfd5c,	// (0x0002e325) ncimui_query_button_pane_t_ParamLimits

0xfd5c,	// (0x0002e325) ncimui_query_button_pane_t

0x9221,	// (0x000277ea) query_button_pane_ParamLimits

0x9221,	// (0x000277ea) query_button_pane

0x9c5d,	// (0x00028226) bg_button_pane_cp0028

0xead0,	// (0x0002d099) query_button_pane_t1

0x55b1,	// (0x00023b7a) main_tport_pane_ParamLimits

0x8c5f,	// (0x00027228) bg_popup_window_pane_cp01_ParamLimits

0x8c5f,	// (0x00027228) bg_popup_window_pane_cp01

0x8c6d,	// (0x00027236) heading_pane_cp08_ParamLimits

0x8c6d,	// (0x00027236) heading_pane_cp08

0x8c7b,	// (0x00027244) heading_pane_cp07_ParamLimits

0x8c7b,	// (0x00027244) heading_pane_cp07

0x8cec,	// (0x000272b5) cell_tport_appsw_pane_g2

0x0002,

0xfcdc,	// (0x0002e2a5) cell_tport_appsw_pane_g

0xb089,	// (0x00029652) input_candi_list_open_g1

0xa9de,	// (0x00028fa7) list_cale_time_pane_g6_ParamLimits

0xa9de,	// (0x00028fa7) list_cale_time_pane_g6

0x5d4a,	// (0x00024313) aid_size_touch_calib_1_ParamLimits

0x5d4a,	// (0x00024313) aid_size_touch_calib_1

0x5d56,	// (0x0002431f) aid_size_touch_calib_2_ParamLimits

0x5d56,	// (0x0002431f) aid_size_touch_calib_2

0x5d64,	// (0x0002432d) aid_size_touch_calib_3_ParamLimits

0x5d64,	// (0x0002432d) aid_size_touch_calib_3

0x5d74,	// (0x0002433d) aid_size_touch_calib_4_ParamLimits

0x5d74,	// (0x0002433d) aid_size_touch_calib_4

0x5d82,	// (0x0002434b) main_touch_calib_button_group_pane_ParamLimits

0x5d82,	// (0x0002434b) main_touch_calib_button_group_pane

0x5d90,	// (0x00024359) main_touch_calib_pane_g1_ParamLimits

0x5d9c,	// (0x00024365) main_touch_calib_pane_g2_ParamLimits

0x5da8,	// (0x00024371) main_touch_calib_pane_g3_ParamLimits

0x5db4,	// (0x0002437d) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0002dd25) main_touch_calib_pane_g_ParamLimits

0x5dc0,	// (0x00024389) main_touch_calib_pane_t1_ParamLimits

0x5dd7,	// (0x000243a0) main_touch_calib_pane_t2_ParamLimits

0x5df0,	// (0x000243b9) main_touch_calib_pane_t3_ParamLimits

0x5e06,	// (0x000243cf) main_touch_calib_pane_t4_ParamLimits

0x5e1c,	// (0x000243e5) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0002dd2e) main_touch_calib_pane_t_ParamLimits

0xcafc,	// (0x0002b0c5) list_single_fp_cale_pane_g3_ParamLimits

0xcafc,	// (0x0002b0c5) list_single_fp_cale_pane_g3

0x1cc9,	// (0x00020292) bg_button_pane_cp012_ParamLimits

0x1cc9,	// (0x00020292) bg_vkb2_func_pane_cp03_ParamLimits

0x20e6,	// (0x000206af) cell_vitu2_function_top_pane_g1_ParamLimits

0x1cc9,	// (0x00020292) bg_vkb2_func_pane_cp04_ParamLimits

0x80f1,	// (0x000266ba) main_ncimui_button_group_pane_ParamLimits

0x80f1,	// (0x000266ba) main_ncimui_button_group_pane

0x8159,	// (0x00026722) main_ncimui_pane_t3_ParamLimits

0x8159,	// (0x00026722) main_ncimui_pane_t3

0xe6c3,	// (0x0002cc8c) phacti_button_group_pane

0xe9cf,	// (0x0002cf98) aid_size_list_single_double_ParamLimits

0x9168,	// (0x00027731) popup_ezdial_listscroll_window_ParamLimits

0x918a,	// (0x00027753) popup_number_entry_window_cp01_ParamLimits

0x922e,	// (0x000277f7) phacti_button_pane_ParamLimits

0x922e,	// (0x000277f7) phacti_button_pane

0x9c5d,	// (0x00028226) bg_button_pane_cp14

0xeade,	// (0x0002d0a7) phacti_button_pane_t1

0x923f,	// (0x00027808) main_touch_calib_button_pane_ParamLimits

0x923f,	// (0x00027808) main_touch_calib_button_pane

0xa3f1,	// (0x000289ba) bg_button_pane_cp18_ParamLimits

0xa3f1,	// (0x000289ba) bg_button_pane_cp18

0xeaec,	// (0x0002d0b5) main_touch_calib_button_pane_t1_ParamLimits

0xeaec,	// (0x0002d0b5) main_touch_calib_button_pane_t1

0xeb02,	// (0x0002d0cb) main_touch_calib_button_pane_t2_ParamLimits

0xeb02,	// (0x0002d0cb) main_touch_calib_button_pane_t2

0x0001,

0x0c39,	// (0x0001f202) main_touch_calib_button_pane_t_ParamLimits

0x0c39,	// (0x0001f202) main_touch_calib_button_pane_t

0x9c5d,	// (0x00028226) cell_ncimui_button_pane

0x9c5d,	// (0x00028226) bg_button_pane_cp032

0xeb20,	// (0x0002d0e9) cell_ncimui_button_pane_t1

0x19de,	// (0x0001ffa7) image3_infobar_pane_ParamLimits

0x19de,	// (0x0001ffa7) image3_infobar_pane

0x84e6,	// (0x00026aaf) fs_bigclock_status_pane_ParamLimits

0x84e6,	// (0x00026aaf) fs_bigclock_status_pane

0x84f3,	// (0x00026abc) main_fs_bigclock_clock_pane_ParamLimits

0x84f3,	// (0x00026abc) main_fs_bigclock_clock_pane

0x8509,	// (0x00026ad2) main_fs_bigclock_indi_pane_ParamLimits

0x8509,	// (0x00026ad2) main_fs_bigclock_indi_pane

0x853b,	// (0x00026b04) main_fs_bigclock_swipe_pane_ParamLimits

0x853b,	// (0x00026b04) main_fs_bigclock_swipe_pane

0x9c5d,	// (0x00028226) main_fs_clock_dumped_data

0xe023,	// (0x0002c5ec) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe023,	// (0x0002c5ec) list_single_fs_bigclock_indicator_pane_g1

0xe04d,	// (0x0002c616) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe04d,	// (0x0002c616) list_single_fs_bigclock_indicator_pane_g2

0xe067,	// (0x0002c630) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe067,	// (0x0002c630) list_single_fs_bigclock_indicator_pane_g3

0xe081,	// (0x0002c64a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe081,	// (0x0002c64a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0a6c,	// (0x0001f035) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0a6c,	// (0x0001f035) list_single_fs_bigclock_indicator_pane_g

0xe0ac,	// (0x0002c675) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0ac,	// (0x0002c675) list_single_fs_bigclock_indicator_pane_t1

0xe0d4,	// (0x0002c69d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0d4,	// (0x0002c69d) list_single_fs_bigclock_indicator_pane_t2

0xe0fc,	// (0x0002c6c5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0fc,	// (0x0002c6c5) list_single_fs_bigclock_indicator_pane_t3

0xe124,	// (0x0002c6ed) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe124,	// (0x0002c6ed) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0a77,	// (0x0001f040) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0a77,	// (0x0001f040) list_single_fs_bigclock_indicator_pane_t

0xeb2e,	// (0x0002d0f7) image3_infobar_fav_pane_ParamLimits

0xeb2e,	// (0x0002d0f7) image3_infobar_fav_pane

0xeb3e,	// (0x0002d107) image3_infobar_loc_pane_ParamLimits

0xeb3e,	// (0x0002d107) image3_infobar_loc_pane

0xeb54,	// (0x0002d11d) image3_infobar_time_pane_ParamLimits

0xeb54,	// (0x0002d11d) image3_infobar_time_pane

0xc7c0,	// (0x0002ad89) image3_infobar_time_pane_g1

0xeb64,	// (0x0002d12d) image3_infobar_time_pane_t1

0xc7c0,	// (0x0002ad89) image3_infobar_loc_pane_g1

0xeb72,	// (0x0002d13b) image3_infobar_loc_pane_g2

0x0001,

0xfd61,	// (0x0002e32a) image3_infobar_loc_pane_g

0xeb7a,	// (0x0002d143) image3_infobar_loc_pane_t1

0xc7c0,	// (0x0002ad89) image3_infobar_fav_pane_g1

0xeb88,	// (0x0002d151) image3_infobar_fav_pane_g2

0x0001,

0xfd66,	// (0x0002e32f) image3_infobar_fav_pane_g

0xeb90,	// (0x0002d159) fs_bigclock_status_battery_pane

0xeb99,	// (0x0002d162) fs_bigclock_status_signal_pane

0xeba2,	// (0x0002d16b) fs_bigclock_status_title_pane

0xebab,	// (0x0002d174) fs_bigclock_status_signal_pane_g1

0xebb4,	// (0x0002d17d) fs_bigclock_status_signal_pane_g2

0x0001,

0x0c48,	// (0x0001f211) fs_bigclock_status_signal_pane_g

0xebbc,	// (0x0002d185) fs_bigclock_status_battery_pane_g1

0xebc5,	// (0x0002d18e) fs_bigclock_status_battery_pane_g2

0x0001,

0x0c4d,	// (0x0001f216) fs_bigclock_status_battery_pane_g

0xebcd,	// (0x0002d196) fs_bigclock_status_title_pane_t1

0xc7c0,	// (0x0002ad89) main_fs_bigclock_clock_pane_g1

0xebdb,	// (0x0002d1a4) main_fs_bigclock_clock_pane_g2

0xebdb,	// (0x0002d1a4) main_fs_bigclock_clock_pane_g3

0xebdb,	// (0x0002d1a4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd6b,	// (0x0002e334) main_fs_bigclock_clock_pane_g

0xebe3,	// (0x0002d1ac) main_fs_bigclock_clock_pane_t1

0xebf1,	// (0x0002d1ba) main_fs_bigclock_clock_pane_t2

0x0001,

0x0c5b,	// (0x0001f224) main_fs_bigclock_clock_pane_t

0x924f,	// (0x00027818) list_single_fs_bigclock_indicator_pane_ParamLimits

0x924f,	// (0x00027818) list_single_fs_bigclock_indicator_pane

0x9260,	// (0x00027829) list_single_fs_bigclock_pane_ParamLimits

0x9260,	// (0x00027829) list_single_fs_bigclock_pane

0xec09,	// (0x0002d1d2) main_fs_bigclock_indicator_pane_t1

0xec2c,	// (0x0002d1f5) list_single_fs_bigclock_pane_g1

0xec34,	// (0x0002d1fd) list_single_fs_bigclock_pane_t1

0xc7c0,	// (0x0002ad89) main_fs_bigclock_swipe_pane_g1

0xec77,	// (0x0002d240) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd80,	// (0x0002e349) main_fs_bigclock_swipe_pane_g

0xec7f,	// (0x0002d248) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec7f,	// (0x0002d248) main_fs_bigclock_swipe_pane_t1

0x452d,	// (0x00022af6) call_type_pane_ParamLimits

0x9c5d,	// (0x00028226) main_btmg_pane

0xe8a8,	// (0x0002ce71) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8a8,	// (0x0002ce71) list_single_cale_mrui_row_pane_g2

0x0002,

0x0bdf,	// (0x0001f1a8) list_single_cale_mrui_row_pane_g_ParamLimits

0x0bdf,	// (0x0001f1a8) list_single_cale_mrui_row_pane_g

0xea29,	// (0x0002cff2) list_recal_vselct_arw_lo_pane

0xea31,	// (0x0002cffa) list_recal_vselct_arw_up_pane

0xea39,	// (0x0002d002) list_recal_vselct_pane

0x92b6,	// (0x0002787f) btmg_button_pane

0x92c2,	// (0x0002788b) main_btmg_pane_g1

0x9c5d,	// (0x00028226) bg_button_pane_cp044

0xec9c,	// (0x0002d265) btmg_button_pane_t1

0xc35b,	// (0x0002a924) aid_listscroll_gen

0xa415,	// (0x000289de) main_cntbar_detail_pane

0xe5e7,	// (0x0002cbb0) list_cmail_folder_pane

0xe5f7,	// (0x0002cbc0) sp_fs_scroll_pane_cp03_ParamLimits

0x92ca,	// (0x00027893) list_single_fs_dyc_pane_cp01_ParamLimits

0x92ca,	// (0x00027893) list_single_fs_dyc_pane_cp01

0xecaa,	// (0x0002d273) aid_size_cmail_indent

0xecb3,	// (0x0002d27c) list_single_dyc_row_pane_cp01

0x9307,	// (0x000278d0) cntbar_detail_list_pane_ParamLimits

0x9307,	// (0x000278d0) cntbar_detail_list_pane

0x9347,	// (0x00027910) main_cntbar_detail_cont_pane_ParamLimits

0x9347,	// (0x00027910) main_cntbar_detail_cont_pane

0x4446,	// (0x00022a0f) scroll_pane_cp032_ParamLimits

0x4446,	// (0x00022a0f) scroll_pane_cp032

0x9353,	// (0x0002791c) cntbar_detail_list_event_pane_ParamLimits

0x9353,	// (0x0002791c) cntbar_detail_list_event_pane

0x9315,	// (0x000278de) cntbar_detail_list_shct_pane

0xa880,	// (0x00028e49) aid_list_gen

0xecbc,	// (0x0002d285) aid_scroll

0xecc5,	// (0x0002d28e) aid_size_touch_scroll_bar

0x790b,	// (0x00025ed4) aid_list_double

0xecce,	// (0x0002d297) aid_list_single

0x78f9,	// (0x00025ec2) aid_list_single_lg

0xecd7,	// (0x0002d2a0) aid_list_z_g_a_sm

0xecdf,	// (0x0002d2a8) aid_list_z_g_d

0x9363,	// (0x0002792c) aid_txt_z_prm

0x9373,	// (0x0002793c) aid_txt_z_prm_cp01

0x9381,	// (0x0002794a) aid_txt_z_sec

0x938f,	// (0x00027958) main_cntbar_detail_cont_pane_g1_ParamLimits

0x938f,	// (0x00027958) main_cntbar_detail_cont_pane_g1

0x939c,	// (0x00027965) main_cntbar_detail_cont_pane_g2_ParamLimits

0x939c,	// (0x00027965) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd85,	// (0x0002e34e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd85,	// (0x0002e34e) main_cntbar_detail_cont_pane_g

0xece7,	// (0x0002d2b0) main_cntbar_detail_cont_pane_t1

0xecf5,	// (0x0002d2be) main_cntbar_detail_cont_pane_t2

0xed03,	// (0x0002d2cc) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8a,	// (0x0002e353) main_cntbar_detail_cont_pane_t

0x93a8,	// (0x00027971) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93a8,	// (0x00027971) cell_cntbar_detail_list_shct_pane

0xed11,	// (0x0002d2da) cntbar_detail_list_shct_pane_g1

0xed1a,	// (0x0002d2e3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd91,	// (0x0002e35a) cntbar_detail_list_shct_pane_g

0x93bc,	// (0x00027985) cntbar_detail_list_event_pane_g1_ParamLimits

0x93bc,	// (0x00027985) cntbar_detail_list_event_pane_g1

0x93c8,	// (0x00027991) cntbar_detail_list_event_pane_g2_ParamLimits

0x93c8,	// (0x00027991) cntbar_detail_list_event_pane_g2

0x0005,

0xfd96,	// (0x0002e35f) cntbar_detail_list_event_pane_g_ParamLimits

0xfd96,	// (0x0002e35f) cntbar_detail_list_event_pane_g

0x9436,	// (0x000279ff) cntbar_detail_list_event_pane_t1_ParamLimits

0x9436,	// (0x000279ff) cntbar_detail_list_event_pane_t1

0x944b,	// (0x00027a14) cntbar_detail_list_event_pane_t2_ParamLimits

0x944b,	// (0x00027a14) cntbar_detail_list_event_pane_t2

0x0002,

0xfda3,	// (0x0002e36c) cntbar_detail_list_event_pane_t_ParamLimits

0xfda3,	// (0x0002e36c) cntbar_detail_list_event_pane_t

0xc7c0,	// (0x0002ad89) cell_cntbar_detail_list_shct_pane_g1

0x4891,	// (0x00022e5a) navi_pane_mv_g3

0xa415,	// (0x000289de) main_cntbar_detail_pane_ParamLimits

0x9c5d,	// (0x00028226) main_notif_wgt_pane

0x1715,	// (0x0001fcde) aid_tch_main_mp4_pane_g4

0x1954,	// (0x0001ff1d) popup_slider_window_cp02

0xea1f,	// (0x0002cfe8) list_recal_day_event_pane

0x92e7,	// (0x000278b0) cntbar_detail_btn_pane_ParamLimits

0x92e7,	// (0x000278b0) cntbar_detail_btn_pane

0x92f7,	// (0x000278c0) cntbar_detail_btn_pane_cp01_ParamLimits

0x92f7,	// (0x000278c0) cntbar_detail_btn_pane_cp01

0x9315,	// (0x000278de) cntbar_detail_list_shct_pane_ParamLimits

0x9321,	// (0x000278ea) cntbar_detail_pane_g1_ParamLimits

0x9321,	// (0x000278ea) cntbar_detail_pane_g1

0x9331,	// (0x000278fa) cntbar_detail_pane_t1_ParamLimits

0x9331,	// (0x000278fa) cntbar_detail_pane_t1

0x93d4,	// (0x0002799d) cntbar_detail_list_event_pane_g3_ParamLimits

0x93d4,	// (0x0002799d) cntbar_detail_list_event_pane_g3

0x93ec,	// (0x000279b5) cntbar_detail_list_event_pane_g4_ParamLimits

0x93ec,	// (0x000279b5) cntbar_detail_list_event_pane_g4

0x9404,	// (0x000279cd) cntbar_detail_list_event_pane_g5_ParamLimits

0x9404,	// (0x000279cd) cntbar_detail_list_event_pane_g5

0x941c,	// (0x000279e5) cntbar_detail_list_event_pane_g6_ParamLimits

0x941c,	// (0x000279e5) cntbar_detail_list_event_pane_g6

0x9460,	// (0x00027a29) cntbar_detail_list_event_pane_t3_ParamLimits

0x9460,	// (0x00027a29) cntbar_detail_list_event_pane_t3

0x9472,	// (0x00027a3b) popup_notif_wgt_window_ParamLimits

0x9472,	// (0x00027a3b) popup_notif_wgt_window

0x9482,	// (0x00027a4b) popup_submenu_window_cp01_ParamLimits

0x9482,	// (0x00027a4b) popup_submenu_window_cp01

0xaf26,	// (0x000294ef) bg_popup_window_pane_cp10

0xed23,	// (0x0002d2ec) listscroll_notif_wgt_pane

0xed63,	// (0x0002d32c) list_notif_wgt_window

0xed6c,	// (0x0002d335) scroll_pane_cp033

0x9492,	// (0x00027a5b) list_notif_wgt_row_pane_ParamLimits

0x9492,	// (0x00027a5b) list_notif_wgt_row_pane

0xed75,	// (0x0002d33e) aid_size_list_notif_wgt_del

0xed82,	// (0x0002d34b) list_notif_wgt_row_pane_g1

0xed8e,	// (0x0002d357) list_notif_wgt_row_pane_g2

0xed9a,	// (0x0002d363) list_notif_wgt_row_pane_g3

0x0002,

0x0c96,	// (0x0001f25f) list_notif_wgt_row_pane_g

0xeda7,	// (0x0002d370) list_notif_wgt_row_pane_t1

0xedbc,	// (0x0002d385) list_notif_wgt_row_pane_t2

0xedce,	// (0x0002d397) list_notif_wgt_row_pane_t3

0x0002,

0x0c9d,	// (0x0001f266) list_notif_wgt_row_pane_t

0xd473,	// (0x0002ba3c) list_recal_day_event_pane_g1

0xede0,	// (0x0002d3a9) list_recal_day_event_pane_t1

0x9c5d,	// (0x00028226) bg_button_pane_cp045

0xedef,	// (0x0002d3b8) cntbar_detail_btn_pane_t1

0xc36f,	// (0x0002a938) main_callh_pane_ParamLimits

0xc36f,	// (0x0002a938) main_callh_pane

0x9c5d,	// (0x00028226) main_coverflow0_pane

0x9c5d,	// (0x00028226) main_wgtman_pane

0x8553,	// (0x00026b1c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8553,	// (0x00026b1c) main_fs_bigclock_unlock_btn_pane

0x8ce4,	// (0x000272ad) bg_button_pane_cp16

0x8cf4,	// (0x000272bd) cell_tport_appsw_pane_g3

0x94a3,	// (0x00027a6c) cf0_flow_pane_ParamLimits

0x94a3,	// (0x00027a6c) cf0_flow_pane

0xedfd,	// (0x0002d3c6) listscroll_cf0_pane

0xee08,	// (0x0002d3d1) main_cf0_pane_g1

0x94b2,	// (0x00027a7b) main_cf0_pane_t1_ParamLimits

0x94b2,	// (0x00027a7b) main_cf0_pane_t1

0x94c6,	// (0x00027a8f) main_cf0_pane_t2_ParamLimits

0x94c6,	// (0x00027a8f) main_cf0_pane_t2

0x0001,

0xfdaa,	// (0x0002e373) main_cf0_pane_t_ParamLimits

0xfdaa,	// (0x0002e373) main_cf0_pane_t

0xee1a,	// (0x0002d3e3) scroll_pane_cp11

0x94da,	// (0x00027aa3) cf0_flow_pane_g1

0x94e2,	// (0x00027aab) cf0_flow_pane_g2

0x0001,

0xfdaf,	// (0x0002e378) cf0_flow_pane_g

0x94ea,	// (0x00027ab3) cf0_flow_pane_t1

0x9c5d,	// (0x00028226) main_call6_pane

0x9c5d,	// (0x00028226) main_calllock_pane

0x94f8,	// (0x00027ac1) call6_btn_grp_pane_ParamLimits

0x94f8,	// (0x00027ac1) call6_btn_grp_pane

0x9505,	// (0x00027ace) call6_pane_g1_ParamLimits

0x9505,	// (0x00027ace) call6_pane_g1

0x9515,	// (0x00027ade) popup_call6_1st_window_ParamLimits

0x9515,	// (0x00027ade) popup_call6_1st_window

0x9523,	// (0x00027aec) popup_call6_2nd_window_ParamLimits

0x9523,	// (0x00027aec) popup_call6_2nd_window

0x9531,	// (0x00027afa) cell_call6_btn_pane_ParamLimits

0x9531,	// (0x00027afa) cell_call6_btn_pane

0xaf26,	// (0x000294ef) bg_popup_call2_in_pane_cp03

0xee25,	// (0x0002d3ee) popup_call6_1st_window_g1

0xee2d,	// (0x0002d3f6) popup_call6_1st_window_g2

0xee35,	// (0x0002d3fe) popup_call6_1st_window_g3

0x0002,

0x0cb3,	// (0x0001f27c) popup_call6_1st_window_g

0xee3d,	// (0x0002d406) popup_call6_1st_window_t1

0xee4c,	// (0x0002d415) popup_call6_1st_window_t2

0xee5c,	// (0x0002d425) popup_call6_1st_window_t3

0x0002,

0x0cba,	// (0x0001f283) popup_call6_1st_window_t

0xaf26,	// (0x000294ef) bg_popup_call2_in_pane_cp04

0xee25,	// (0x0002d3ee) popup_call6_2nd_window_g1

0xee2d,	// (0x0002d3f6) popup_call6_2nd_window_g2

0xee35,	// (0x0002d3fe) popup_call6_2nd_window_g3

0x0002,

0x0cb3,	// (0x0001f27c) popup_call6_2nd_window_g

0xee3d,	// (0x0002d406) popup_call6_2nd_window_t1

0x9c5d,	// (0x00028226) bg_button_pane_cp15

0xee6c,	// (0x0002d435) cell_call6_btn_pane_g1

0xee75,	// (0x0002d43e) cell_call6_btn_pane_t1

0x9540,	// (0x00027b09) listscroll_wgtman_pane_ParamLimits

0x9540,	// (0x00027b09) listscroll_wgtman_pane

0x955e,	// (0x00027b27) wgtman_btn_pane_ParamLimits

0x955e,	// (0x00027b27) wgtman_btn_pane

0xadec,	// (0x000293b5) aid_scroll_copy1

0xee84,	// (0x0002d44d) list_wgtman_pane

0x9593,	// (0x00027b5c) wgtman_btn_pane_g1_ParamLimits

0x9593,	// (0x00027b5c) wgtman_btn_pane_g1

0x95bb,	// (0x00027b84) wgtman_btn_pane_t1_ParamLimits

0x95bb,	// (0x00027b84) wgtman_btn_pane_t1

0xee8e,	// (0x0002d457) wgtman_btn_pane_t2_ParamLimits

0xee8e,	// (0x0002d457) wgtman_btn_pane_t2

0x0001,

0xfdb4,	// (0x0002e37d) wgtman_btn_pane_t_ParamLimits

0xfdb4,	// (0x0002e37d) wgtman_btn_pane_t

0x95f2,	// (0x00027bbb) listrow_wgtman_pane_ParamLimits

0x95f2,	// (0x00027bbb) listrow_wgtman_pane

0x9603,	// (0x00027bcc) listrow_wgtman_pane_g1

0x9610,	// (0x00027bd9) listrow_wgtman_pane_g2

0x0001,

0xfdb9,	// (0x0002e382) listrow_wgtman_pane_g

0x962e,	// (0x00027bf7) listrow_wgtman_pane_t1

0x9646,	// (0x00027c0f) listrow_wgtman_pane_t2

0x0001,

0xfdbe,	// (0x0002e387) listrow_wgtman_pane_t

0x966c,	// (0x00027c35) wait_bar_pane_cp09

0xeea5,	// (0x0002d46e) main_calllock_btn_pane

0xeeaf,	// (0x0002d478) main_calllock_pane_g1

0x9c5d,	// (0x00028226) bg_button_pane_cp17

0xeebb,	// (0x0002d484) main_calllock_btn_pane_g1

0xeec4,	// (0x0002d48d) main_calllock_btn_pane_t1

0x9c5d,	// (0x00028226) main_dialer3_pane

0x9c5d,	// (0x00028226) main_fmrd2_pane

0xc7c0,	// (0x0002ad89) main_fs_bigclock_unlock_btn_pane_g1

0xeedb,	// (0x0002d4a4) main_fs_bigclock_unlock_btn_pane_t1

0x967e,	// (0x00027c47) area_fmrd2_info_pane_ParamLimits

0x967e,	// (0x00027c47) area_fmrd2_info_pane

0x968a,	// (0x00027c53) area_fmrd2_visual_pane_ParamLimits

0x968a,	// (0x00027c53) area_fmrd2_visual_pane

0x9698,	// (0x00027c61) fmrd2_indi_pane_ParamLimits

0x9698,	// (0x00027c61) fmrd2_indi_pane

0x96a5,	// (0x00027c6e) area_fmrd2_visual_pane_g1

0x96ad,	// (0x00027c76) area_fmrd2_visual_pane_t1

0x96bd,	// (0x00027c86) area_fmrd2_visual_pane_t2

0x96cd,	// (0x00027c96) area_fmrd2_visual_pane_t3

0x0002,

0xfdc8,	// (0x0002e391) area_fmrd2_visual_pane_t

0x96dd,	// (0x00027ca6) area_fmrd2_info_pane_g1

0x96e5,	// (0x00027cae) area_fmrd2_info_pane_t1

0x96f5,	// (0x00027cbe) area_fmrd2_info_pane_t2

0x9705,	// (0x00027cce) area_fmrd2_info_pane_t3

0x9715,	// (0x00027cde) area_fmrd2_info_pane_t4

0x0003,

0xfdcf,	// (0x0002e398) area_fmrd2_info_pane_t

0x9725,	// (0x00027cee) fmrd2_indi_pane_t1

0x9735,	// (0x00027cfe) fmrd2_indi_pane_t2

0x9745,	// (0x00027d0e) fmrd2_indi_pane_t3

0x0002,

0xfdd8,	// (0x0002e3a1) fmrd2_indi_pane_t

0xe090,	// (0x0002c659) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe090,	// (0x0002c659) list_single_fs_bigclock_indicator_pane_g5

0xe139,	// (0x0002c702) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe139,	// (0x0002c702) list_single_fs_bigclock_indicator_pane_t5

0x8ef1,	// (0x000274ba) aid_cell_bcale_month_pane_ParamLimits

0x8ef1,	// (0x000274ba) aid_cell_bcale_month_pane

0x8f0f,	// (0x000274d8) bcale_month_pane_ParamLimits

0x8f0f,	// (0x000274d8) bcale_month_pane

0x8f2b,	// (0x000274f4) bcale_preview_pane_ParamLimits

0x8f2b,	// (0x000274f4) bcale_preview_pane

0xec34,	// (0x0002d1fd) list_single_fs_bigclock_pane_t1_ParamLimits

0xec53,	// (0x0002d21c) list_single_fs_bigclock_pane_t2_ParamLimits

0xec53,	// (0x0002d21c) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7b,	// (0x0002e344) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7b,	// (0x0002e344) list_single_fs_bigclock_pane_t

0xeed3,	// (0x0002d49c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc3,	// (0x0002e38c) main_fs_bigclock_unlock_btn_pane_g

0x9755,	// (0x00027d1e) aid_dia3_key_size_ParamLimits

0x9755,	// (0x00027d1e) aid_dia3_key_size

0x9761,	// (0x00027d2a) aid_dia3_listrow_size_ParamLimits

0x9761,	// (0x00027d2a) aid_dia3_listrow_size

0x9771,	// (0x00027d3a) dia3_keypad_fun_pane_ParamLimits

0x9771,	// (0x00027d3a) dia3_keypad_fun_pane

0x9781,	// (0x00027d4a) dia3_keypad_num_pane_ParamLimits

0x9781,	// (0x00027d4a) dia3_keypad_num_pane

0x9791,	// (0x00027d5a) dia3_listscroll_pane_ParamLimits

0x9791,	// (0x00027d5a) dia3_listscroll_pane

0x979f,	// (0x00027d68) dia3_numentry_pane_ParamLimits

0x979f,	// (0x00027d68) dia3_numentry_pane

0xeee9,	// (0x0002d4b2) dia3_list_pane

0xeef4,	// (0x0002d4bd) scroll_pane_cp12

0x9c5d,	// (0x00028226) bg_dia3_numentry_pane

0x97ad,	// (0x00027d76) dia3_numentry_pane_t1

0x97bc,	// (0x00027d85) cell_dia3_key_num_pane

0x97c4,	// (0x00027d8d) cell_dia3_key0_fun_pane_ParamLimits

0x97c4,	// (0x00027d8d) cell_dia3_key0_fun_pane

0x97d1,	// (0x00027d9a) cell_dia3_key1_fun_pane_ParamLimits

0x97d1,	// (0x00027d9a) cell_dia3_key1_fun_pane

0x97de,	// (0x00027da7) dia3_listrow_pane

0xdd8e,	// (0x0002c357) bg_dia3_numentry_pane_g1

0x9c5d,	// (0x00028226) bg_button_pane_cp21

0xeeff,	// (0x0002d4c8) cell_dia3_key_num_pane_t1

0xef0d,	// (0x0002d4d6) cell_dia3_key_num_pane_t2

0xef1c,	// (0x0002d4e5) cell_dia3_key_num_pane_t3

0xef2b,	// (0x0002d4f4) cell_dia3_key_num_pane_t4

0x0003,

0x0cec,	// (0x0001f2b5) cell_dia3_key_num_pane_t

0x9c5d,	// (0x00028226) bg_button_pane_cp19

0x97eb,	// (0x00027db4) cell_dia3_key0_fun_pane_g1

0x9c5d,	// (0x00028226) bg_button_pane_cp20

0x97f3,	// (0x00027dbc) cell_dia3_key1_fun_pane_g1

0x97fb,	// (0x00027dc4) area_left_week_number_pane

0x980e,	// (0x00027dd7) area_top_day_name_pane

0x981c,	// (0x00027de5) frame_month_view_pane

0xef3a,	// (0x0002d503) grid_month_view_pane

0x9831,	// (0x00027dfa) cell_top_day_name_pane_ParamLimits

0x9831,	// (0x00027dfa) cell_top_day_name_pane

0x984d,	// (0x00027e16) cell_area_left_week_number_pane_ParamLimits

0x984d,	// (0x00027e16) cell_area_left_week_number_pane

0x986e,	// (0x00027e37) cell_month_view_pane_ParamLimits

0x986e,	// (0x00027e37) cell_month_view_pane

0xef48,	// (0x0002d511) frm_month_g1

0x989a,	// (0x00027e63) frm_month_g2

0x98ab,	// (0x00027e74) frm_month_g3

0x98bc,	// (0x00027e85) frm_month_g4

0x98cd,	// (0x00027e96) frm_month_g5

0x98de,	// (0x00027ea7) frm_month_g6

0x98f1,	// (0x00027eba) frm_month_g7

0xef55,	// (0x0002d51e) frm_month_g8

0x9904,	// (0x00027ecd) frm_month_g9

0x9911,	// (0x00027eda) frm_month_g10

0x991e,	// (0x00027ee7) frm_month_g11

0x992b,	// (0x00027ef4) frm_month_g12

0x9938,	// (0x00027f01) frm_month_g13

0x9947,	// (0x00027f10) frm_month_g14

0x9956,	// (0x00027f1f) frm_month_g15

0x9965,	// (0x00027f2e) frm_month_g16

0x000f,

0xfddf,	// (0x0002e3a8) frm_month_g

0xef62,	// (0x0002d52b) cell_top_day_name_pane_t1

0x9974,	// (0x00027f3d) cell_area_left_week_number_pane_g1

0x9983,	// (0x00027f4c) cell_area_left_week_number_pane_t1

0xc9f0,	// (0x0002afb9) cell_month_view_pane_g1

0x9999,	// (0x00027f62) cell_month_view_pane_t1

0x9c5d,	// (0x00028226) main_fps_pane

0xe377,	// (0x0002c940) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe377,	// (0x0002c940) cmail_ddmenu_btn02_pane_cp1

0xe393,	// (0x0002c95c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe393,	// (0x0002c95c) cmail_ddmenu_btn02_pane_cp2

0x91b6,	// (0x0002777f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91b6,	// (0x0002777f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd47,	// (0x0002e310) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd47,	// (0x0002e310) cmail_ddmenu_btn02_pane_g

0x91d4,	// (0x0002779d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91d4,	// (0x0002779d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd4c,	// (0x0002e315) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd4c,	// (0x0002e315) cmail_ddmenu_btn02_pane_t

0x99af,	// (0x00027f78) fps_text_pane_ParamLimits

0x99af,	// (0x00027f78) fps_text_pane

0x99bc,	// (0x00027f85) main_fps_pane_g1_ParamLimits

0x99bc,	// (0x00027f85) main_fps_pane_g1

0x99c8,	// (0x00027f91) wait_bar_pane_cp010_ParamLimits

0x99c8,	// (0x00027f91) wait_bar_pane_cp010

0x99d4,	// (0x00027f9d) fps_text_pane_t1_ParamLimits

0x99d4,	// (0x00027f9d) fps_text_pane_t1

0x6ca9,	// (0x00025272) cam4_image_uncrop_pane_g1

0x6cb2,	// (0x0002527b) cam4_image_uncrop_pane_g2

0x6cbb,	// (0x00025284) cam4_image_uncrop_pane_g3

0x6cc4,	// (0x0002528d) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0002debd) cam4_image_uncrop_pane_g

0x97de,	// (0x00027da7) dia3_listrow_pane_ParamLimits

0x9c5d,	// (0x00028226) main_phob2_pane

0x8cc6,	// (0x0002728f) cell_tport_appsw_pane_cp02_ParamLimits

0x8cc6,	// (0x0002728f) cell_tport_appsw_pane_cp02

0x8cd5,	// (0x0002729e) cell_tport_appsw_pane_cp03_ParamLimits

0x8cd5,	// (0x0002729e) cell_tport_appsw_pane_cp03

0x9c5d,	// (0x00028226) phob2_contact_card_pane

0x9c5d,	// (0x00028226) phob2_listscroll_pane

0xef75,	// (0x0002d53e) phob2_list_pane

0xef7d,	// (0x0002d546) scroll_pane_cp034

0x99ed,	// (0x00027fb6) phob2_cc_data_pane_ParamLimits

0x99ed,	// (0x00027fb6) phob2_cc_data_pane

0x9a09,	// (0x00027fd2) phob2_cc_listscroll_pane_ParamLimits

0x9a09,	// (0x00027fd2) phob2_cc_listscroll_pane

0x9a25,	// (0x00027fee) list_double_large_graphic_phob2_pane_ParamLimits

0x9a25,	// (0x00027fee) list_double_large_graphic_phob2_pane

0x9a3d,	// (0x00028006) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a3d,	// (0x00028006) list_double_large_graphic_phob2_pane_g1

0x9a53,	// (0x0002801c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a53,	// (0x0002801c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe00,	// (0x0002e3c9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe00,	// (0x0002e3c9) list_double_large_graphic_phob2_pane_g

0x9a5f,	// (0x00028028) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a5f,	// (0x00028028) list_double_large_graphic_phob2_pane_t1

0x9a74,	// (0x0002803d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a74,	// (0x0002803d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe05,	// (0x0002e3ce) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe05,	// (0x0002e3ce) list_double_large_graphic_phob2_pane_t

0x9c5d,	// (0x00028226) list_highlight_pane_cp024

0xef85,	// (0x0002d54e) phob2_cc_button_pane

0x9a86,	// (0x0002804f) phob2_cc_data_pane_g1_ParamLimits

0x9a86,	// (0x0002804f) phob2_cc_data_pane_g1

0x9a92,	// (0x0002805b) phob2_cc_data_pane_g2_ParamLimits

0x9a92,	// (0x0002805b) phob2_cc_data_pane_g2

0x0001,

0xfe0a,	// (0x0002e3d3) phob2_cc_data_pane_g_ParamLimits

0xfe0a,	// (0x0002e3d3) phob2_cc_data_pane_g

0x9a9e,	// (0x00028067) phob2_cc_data_pane_t1_ParamLimits

0x9a9e,	// (0x00028067) phob2_cc_data_pane_t1

0x9ab0,	// (0x00028079) phob2_cc_data_pane_t2_ParamLimits

0x9ab0,	// (0x00028079) phob2_cc_data_pane_t2

0x9ac2,	// (0x0002808b) phob2_cc_data_pane_t3_ParamLimits

0x9ac2,	// (0x0002808b) phob2_cc_data_pane_t3

0x0002,

0xfe0f,	// (0x0002e3d8) phob2_cc_data_pane_t_ParamLimits

0xfe0f,	// (0x0002e3d8) phob2_cc_data_pane_t

0xef8d,	// (0x0002d556) phob2_cc_list_pane_ParamLimits

0xef8d,	// (0x0002d556) phob2_cc_list_pane

0xd5f2,	// (0x0002bbbb) scroll_pane_cp035_ParamLimits

0xd5f2,	// (0x0002bbbb) scroll_pane_cp035

0xa415,	// (0x000289de) bg_button_pane_cp033

0xef99,	// (0x0002d562) phob2_cc_button_pane_g1

0xefa5,	// (0x0002d56e) phob2_cc_button_pane_t1

0xefba,	// (0x0002d583) phob2_cc_button_pane_t2

0x0001,

0x0d2c,	// (0x0001f2f5) phob2_cc_button_pane_t

0x9ad4,	// (0x0002809d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ad4,	// (0x0002809d) list_double_large_graphic_phob2_cc_pane

0x9af0,	// (0x000280b9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9af0,	// (0x000280b9) list_double_large_graphic_phob2_cc_pane_g1

0x9b01,	// (0x000280ca) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b01,	// (0x000280ca) list_double_large_graphic_phob2_cc_pane_g2

0x9b10,	// (0x000280d9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b10,	// (0x000280d9) list_double_large_graphic_phob2_cc_pane_g3

0x9b1f,	// (0x000280e8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b1f,	// (0x000280e8) list_double_large_graphic_phob2_cc_pane_g4

0x9b30,	// (0x000280f9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b30,	// (0x000280f9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe16,	// (0x0002e3df) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe16,	// (0x0002e3df) list_double_large_graphic_phob2_cc_pane_g

0x9b3f,	// (0x00028108) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b3f,	// (0x00028108) list_double_large_graphic_phob2_cc_pane_t1

0x9b68,	// (0x00028131) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b68,	// (0x00028131) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe21,	// (0x0002e3ea) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe21,	// (0x0002e3ea) list_double_large_graphic_phob2_cc_pane_t

0xefcc,	// (0x0002d595) list_highlight_pane_cp025_ParamLimits

0xefcc,	// (0x0002d595) list_highlight_pane_cp025

0xa415,	// (0x000289de) bg_button_pane_cp033_ParamLimits

0xef99,	// (0x0002d562) phob2_cc_button_pane_g1_ParamLimits

0xefa5,	// (0x0002d56e) phob2_cc_button_pane_t1_ParamLimits

0xefba,	// (0x0002d583) phob2_cc_button_pane_t2_ParamLimits

0x0d2c,	// (0x0001f2f5) phob2_cc_button_pane_t_ParamLimits

0x258e,	// (0x00020b57) popup_wgtman_window

0xd318,	// (0x0002b8e1) scroll_pane_cp038

0x957b,	// (0x00027b44) wgtman_btn_pane_cp_01_ParamLimits

0x957b,	// (0x00027b44) wgtman_btn_pane_cp_01

0xefda,	// (0x0002d5a3) wgtman_content_pane

0xefe3,	// (0x0002d5ac) wgtman_heading_pane

0x9c5d,	// (0x00028226) bg_heading_pane_cp02

0xefec,	// (0x0002d5b5) wgtman_heading_pane_g1

0xeff4,	// (0x0002d5bd) wgtman_heading_pane_t1

0xf002,	// (0x0002d5cb) scroll_pane_cp036

0xf00a,	// (0x0002d5d3) wgtman_list_pane

0xf012,	// (0x0002d5db) wgtman_list_pane_t1_ParamLimits

0xf012,	// (0x0002d5db) wgtman_list_pane_t1

0x1b3a,	// (0x00020103) cam4_grid_pane

0x7454,	// (0x00025a1d) bg_button_pane_cp015_ParamLimits

0x7466,	// (0x00025a2f) bg_button_pane_cp016_ParamLimits

0x7479,	// (0x00025a42) bg_button_pane_cp017_ParamLimits

0x74cf,	// (0x00025a98) popup_vitu2_query_window_g3_ParamLimits

0x74cf,	// (0x00025a98) popup_vitu2_query_window_g3

0x758e,	// (0x00025b57) popup_vitu2_query_window_t6_ParamLimits

0x758e,	// (0x00025b57) popup_vitu2_query_window_t6

0x75b9,	// (0x00025b82) popup_vitu2_query_window_t7_ParamLimits

0x75b9,	// (0x00025b82) popup_vitu2_query_window_t7

0xed2d,	// (0x0002d2f6) cam4_grid_pane_g1

0xed36,	// (0x0002d2ff) cam4_grid_pane_g2

0xf02c,	// (0x0002d5f5) cam4_grid_pane_g3

0xf035,	// (0x0002d5fe) cam4_grid_pane_g4

0x0003,

0xfe26,	// (0x0002e3ef) cam4_grid_pane_g

0x3318,	// (0x000218e1) aid_placing_vt_slider_lsc_ParamLimits

0x364b,	// (0x00021c14) vidtel_button_pane_ParamLimits

0x364b,	// (0x00021c14) vidtel_button_pane

0xf040,	// (0x0002d609) bg_button_pane_cp034

0x9b91,	// (0x0002815a) vidtel_button_pane_g1

0xf04a,	// (0x0002d613) vidtel_button_pane_t1

0xd437,	// (0x0002ba00) aid_size_vtel_slider_touch

0xd5f2,	// (0x0002bbbb) scroll_pane_cp039

0xddcc,	// (0x0002c395) ncim_query_button_pane_cp01_ParamLimits

0xddeb,	// (0x0002c3b4) ncimui_query_pane_g1_ParamLimits

0xa415,	// (0x000289de) input_focus_pane_cp012_ParamLimits

0xde10,	// (0x0002c3d9) ncim_query_entry_pane_t1_ParamLimits

0xd5f2,	// (0x0002bbbb) scroll_pane_cp039_ParamLimits

0x4803,	// (0x00022dcc) navi_pane_bcale_mc_g1

0x480b,	// (0x00022dd4) navi_pane_bcale_mc_t1

0xe3dc,	// (0x0002c9a5) main_sp_fs_email_pane_g1

0xe3e8,	// (0x0002c9b1) main_sp_fs_email_pane_g2

0x0001,

0x0add,	// (0x0001f0a6) main_sp_fs_email_pane_g

0xe8b4,	// (0x0002ce7d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8b4,	// (0x0002ce7d) list_single_cale_mrui_row_pane_g3

0x91f4,	// (0x000277bd) list_single_recal_day_pane_g5_event_pane

0xea91,	// (0x0002d05a) list_single_recal_day_pane_g7

0xf058,	// (0x0002d621) list_recal_day_event_pane_cp01

0xf061,	// (0x0002d62a) list_recal_vselct_arw_lo_pane_cp01

0xf069,	// (0x0002d632) list_recal_vselct_arw_up_pane_cp01

0xf071,	// (0x0002d63a) list_recal_vselct_pane_cp01

0xd473,	// (0x0002ba3c) list_recal_day_event_pane_cp01_g1

0xf07b,	// (0x0002d644) list_recal_day_event_pane_cp01_t1

0xea99,	// (0x0002d062) list_single_recal_day_pane_t1_ParamLimits

0xeaab,	// (0x0002d074) list_single_recal_day_pane_t2_ParamLimits

0x0c2f,	// (0x0001f1f8) list_single_recal_day_pane_t_ParamLimits

0xa32c,	// (0x000288f5) bg_notes_pane_ParamLimits

0xa3cf,	// (0x00028998) list_notes_pane_ParamLimits

0x285d,	// (0x00020e26) scroll_pane_cp06_ParamLimits

0xa3f1,	// (0x000289ba) main_notes_pane_ParamLimits

0x9c5d,	// (0x00028226) main_welc_pane

0x9b99,	// (0x00028162) main_welc_body_pane_ParamLimits

0x9b99,	// (0x00028162) main_welc_body_pane

0x9bb4,	// (0x0002817d) main_welc_opti_pane_ParamLimits

0x9bb4,	// (0x0002817d) main_welc_opti_pane

0x9be9,	// (0x000281b2) main_welc_pane_t1_ParamLimits

0x9be9,	// (0x000281b2) main_welc_pane_t1

0xed41,	// (0x0002d30a) main_welc_body_row_pane_ParamLimits

0xed41,	// (0x0002d30a) main_welc_body_row_pane

0x9c07,	// (0x000281d0) main_welc_opti_row_pane_ParamLimits

0x9c07,	// (0x000281d0) main_welc_opti_row_pane

0xf089,	// (0x0002d652) main_welc_opti_row_pane_g1

0xf091,	// (0x0002d65a) main_welc_opti_row_pane_t1

0xf0a0,	// (0x0002d669) main_welc_body_row_pane_t1

0xed5b,	// (0x0002d324) popup_notif_wgt_heading_pane

0xed75,	// (0x0002d33e) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x0002d34b) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x0002d357) list_notif_wgt_row_pane_g2_ParamLimits

0xed9a,	// (0x0002d363) list_notif_wgt_row_pane_g3_ParamLimits

0x0c96,	// (0x0001f25f) list_notif_wgt_row_pane_g_ParamLimits

0xeda7,	// (0x0002d370) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x0002d385) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x0002d397) list_notif_wgt_row_pane_t3_ParamLimits

0x0c9d,	// (0x0001f266) list_notif_wgt_row_pane_t_ParamLimits

0x9603,	// (0x00027bcc) listrow_wgtman_pane_g1_ParamLimits

0x9610,	// (0x00027bd9) listrow_wgtman_pane_g2_ParamLimits

0xfdb9,	// (0x0002e382) listrow_wgtman_pane_g_ParamLimits

0x962e,	// (0x00027bf7) listrow_wgtman_pane_t1_ParamLimits

0x9646,	// (0x00027c0f) listrow_wgtman_pane_t2_ParamLimits

0xfdbe,	// (0x0002e387) listrow_wgtman_pane_t_ParamLimits

0x966c,	// (0x00027c35) wait_bar_pane_cp09_ParamLimits

0x9c5d,	// (0x00028226) bg_popup_heading_pane_cp02

0xf0af,	// (0x0002d678) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x0002d680) popup_notif_wgt_heading_pane_t1

0x9c5d,	// (0x00028226) main_vids_pane

0x9c5d,	// (0x00028226) vids_listscroll_pane

0x9c18,	// (0x000281e1) scroll_pane_cp040

0x9c5d,	// (0x00028226) vids_list_pane

0x9c23,	// (0x000281ec) vids_list_double_pane_ParamLimits

0x9c23,	// (0x000281ec) vids_list_double_pane

0x9c36,	// (0x000281ff) vids_list_double_pane_g1

0x9c3f,	// (0x00028208) vids_list_double_pane_t1

0x9c4f,	// (0x00028218) vids_list_double_pane_t2

0x0001,

0xfe34,	// (0x0002e3fd) vids_list_double_pane_t

0xa415,	// (0x000289de) main_ncimui_pane_ParamLimits

0x8109,	// (0x000266d2) main_ncimui_pane_g1_ParamLimits

0x8117,	// (0x000266e0) main_ncimui_pane_g2_ParamLimits

0x8117,	// (0x000266e0) main_ncimui_pane_g2

0x0001,

0xfbc7,	// (0x0002e190) main_ncimui_pane_g_ParamLimits

0xfbc7,	// (0x0002e190) main_ncimui_pane_g

0x9bcf,	// (0x00028198) main_welc_pane_g1_ParamLimits

0x9bcf,	// (0x00028198) main_welc_pane_g1

0x9bdb,	// (0x000281a4) main_welc_pane_g2_ParamLimits

0x9bdb,	// (0x000281a4) main_welc_pane_g2

0x0001,

0xfe2f,	// (0x0002e3f8) main_welc_pane_g_ParamLimits

0xfe2f,	// (0x0002e3f8) main_welc_pane_g

0xa32c,	// (0x000288f5) listscroll_mce_pane_ParamLimits

0x48cd,	// (0x00022e96) wait_bar_pane_cp10

0xc363,	// (0x0002a92c) main_cale_day_pane_ParamLimits

0xc363,	// (0x0002a92c) main_cale_week_pane_ParamLimits

0xa32c,	// (0x000288f5) main_messa_pane_ParamLimits

0x6601,	// (0x00024bca) main_clock2_btn_pane_ParamLimits

0x6601,	// (0x00024bca) main_clock2_btn_pane

0xcb84,	// (0x0002b14d) main_clock2_btn_pane_cp01_ParamLimits

0xcb84,	// (0x0002b14d) main_clock2_btn_pane_cp01

0xe837,	// (0x0002ce00) list_cale_mrui_pane_ParamLimits

0xee12,	// (0x0002d3db) main_cf0_pane_g2

0x0001,

0x0ca4,	// (0x0001f26d) main_cf0_pane_g

0x97fb,	// (0x00027dc4) area_left_week_number_pane_ParamLimits

0x980e,	// (0x00027dd7) area_top_day_name_pane_ParamLimits

0x981c,	// (0x00027de5) frame_month_view_pane_ParamLimits

0xef3a,	// (0x0002d503) grid_month_view_pane_ParamLimits

0xef48,	// (0x0002d511) frm_month_g1_ParamLimits

0x989a,	// (0x00027e63) frm_month_g2_ParamLimits

0x98ab,	// (0x00027e74) frm_month_g3_ParamLimits

0x98bc,	// (0x00027e85) frm_month_g4_ParamLimits

0x98cd,	// (0x00027e96) frm_month_g5_ParamLimits

0x98de,	// (0x00027ea7) frm_month_g6_ParamLimits

0x98f1,	// (0x00027eba) frm_month_g7_ParamLimits

0xef55,	// (0x0002d51e) frm_month_g8_ParamLimits

0x9904,	// (0x00027ecd) frm_month_g9_ParamLimits

0x9911,	// (0x00027eda) frm_month_g10_ParamLimits

0x991e,	// (0x00027ee7) frm_month_g11_ParamLimits

0x992b,	// (0x00027ef4) frm_month_g12_ParamLimits

0x9938,	// (0x00027f01) frm_month_g13_ParamLimits

0x9947,	// (0x00027f10) frm_month_g14_ParamLimits

0x9956,	// (0x00027f1f) frm_month_g15_ParamLimits

0x9965,	// (0x00027f2e) frm_month_g16_ParamLimits

0xfddf,	// (0x0002e3a8) frm_month_g_ParamLimits

0xef62,	// (0x0002d52b) cell_top_day_name_pane_t1_ParamLimits

0x9974,	// (0x00027f3d) cell_area_left_week_number_pane_g1_ParamLimits

0x9983,	// (0x00027f4c) cell_area_left_week_number_pane_t1_ParamLimits

0xc9f0,	// (0x0002afb9) cell_month_view_pane_g1_ParamLimits

0x9999,	// (0x00027f62) cell_month_view_pane_t1_ParamLimits

0xa324,	// (0x000288ed) main_clock2_btn_pane_g1

0xf0c5,	// (0x0002d68e) main_clock2_btn_pane_t1

0xa415,	// (0x000289de) listscroll_cmail_pane_ParamLimits

0xe3dc,	// (0x0002c9a5) main_sp_fs_email_pane_g1_ParamLimits

0xe3e8,	// (0x0002c9b1) main_sp_fs_email_pane_g2_ParamLimits

0x0add,	// (0x0001f0a6) main_sp_fs_email_pane_g_ParamLimits

0xea00,	// (0x0002cfc9) list_recal_day_pane_ParamLimits

0xea11,	// (0x0002cfda) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal

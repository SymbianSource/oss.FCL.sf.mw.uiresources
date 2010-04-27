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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001ecda };

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
0x2056,	// (0x00020d30) Screen

0x2062,	// (0x00020d3c) application_window

0x20a2,	// (0x00020d7c) area_bottom_pane_ParamLimits

0x20a2,	// (0x00020d7c) area_bottom_pane

0x20d7,	// (0x00020db1) area_top_pane_ParamLimits

0x20d7,	// (0x00020db1) area_top_pane

0x9c2e,	// (0x00028908) call_video_uplink_pane_ParamLimits

0x9c2e,	// (0x00028908) call_video_uplink_pane

0x2166,	// (0x00020e40) main_pane_ParamLimits

0x2166,	// (0x00020e40) main_pane

0xc337,	// (0x0002b011) context_pane

0x558f,	// (0x00024269) navi_pane

0x55b3,	// (0x0002428d) popup_cale_events_window_ParamLimits

0x55b3,	// (0x0002428d) popup_cale_events_window

0xc34a,	// (0x0002b024) popup_mup_playback_window

0x55cb,	// (0x000242a5) signal_pane

0xa37f,	// (0x00029059) main_browser_pane

0xa535,	// (0x0002920f) main_burst_pane

0x5441,	// (0x0002411b) main_calc_pane

0xc2da,	// (0x0002afb4) main_cale_day_pane

0x26df,	// (0x000213b9) main_cale_month_pane

0xc2da,	// (0x0002afb4) main_cale_week_pane

0xa535,	// (0x0002920f) main_call_pane

0xa05f,	// (0x00028d39) main_call_poc_pane

0xa535,	// (0x0002920f) main_camera_pane

0xa535,	// (0x0002920f) main_chi_dic_pane

0xad1d,	// (0x000299f7) main_clock_pane

0xa05f,	// (0x00028d39) main_fmradio_pane

0xa535,	// (0x0002920f) main_graph_messa_pane

0xa05f,	// (0x00028d39) main_help_pane

0xa37f,	// (0x00029059) main_im_pane

0xa2ba,	// (0x00028f94) main_image_pane_ParamLimits

0xa2ba,	// (0x00028f94) main_image_pane

0xa05f,	// (0x00028d39) main_location2_pane

0xa535,	// (0x0002920f) main_location_pane

0xa2ba,	// (0x00028f94) main_messa_pane

0xa05f,	// (0x00028d39) main_mp2_pane

0xa535,	// (0x0002920f) main_mp_pane

0xa05f,	// (0x00028d39) main_msg_pane

0xa05f,	// (0x00028d39) main_mup_eq_pane

0xa05f,	// (0x00028d39) main_mup_pane

0xa37f,	// (0x00029059) main_notes_pane

0xa05f,	// (0x00028d39) main_pec_pane

0xa05f,	// (0x00028d39) main_phob_pane

0xa05f,	// (0x00028d39) main_pinb_pane

0xa05f,	// (0x00028d39) main_postcard_pane

0xa05f,	// (0x00028d39) main_qdial_pane

0xa535,	// (0x0002920f) main_skin_pane

0xa05f,	// (0x00028d39) main_smil2_pane

0xa535,	// (0x0002920f) main_smil_pane

0xa535,	// (0x0002920f) main_video_pane

0xa535,	// (0x0002920f) main_video_tele_pane

0xa2ba,	// (0x00028f94) main_viewer_pane_ParamLimits

0xa2ba,	// (0x00028f94) main_viewer_pane

0xa535,	// (0x0002920f) main_vorec_pane

0x5479,	// (0x00024153) popup_blid_sat_info_window_ParamLimits

0x5479,	// (0x00024153) popup_blid_sat_info_window

0x5493,	// (0x0002416d) popup_dyc_status_message_window_ParamLimits

0x5493,	// (0x0002416d) popup_dyc_status_message_window

0x54a3,	// (0x0002417d) popup_grid_large_graphic_window_ParamLimits

0x54a3,	// (0x0002417d) popup_grid_large_graphic_window

0x551b,	// (0x000241f5) popup_loc_request_window_ParamLimits

0x551b,	// (0x000241f5) popup_loc_request_window

0x5563,	// (0x0002423d) popup_wml_address_window_ParamLimits

0x5563,	// (0x0002423d) popup_wml_address_window

0x5319,	// (0x00023ff3) call_muted_g1

0x4fd8,	// (0x00023cb2) popup_call_audio_conf_window_ParamLimits

0x4fd8,	// (0x00023cb2) popup_call_audio_conf_window

0x5329,	// (0x00024003) popup_call_audio_first_window_ParamLimits

0x5329,	// (0x00024003) popup_call_audio_first_window

0x5369,	// (0x00024043) popup_call_audio_in_window_ParamLimits

0x5369,	// (0x00024043) popup_call_audio_in_window

0x538d,	// (0x00024067) popup_call_audio_out_window_ParamLimits

0x538d,	// (0x00024067) popup_call_audio_out_window

0x53af,	// (0x00024089) popup_call_audio_second_window_ParamLimits

0x53af,	// (0x00024089) popup_call_audio_second_window

0x53df,	// (0x000240b9) popup_call_audio_wait_window_ParamLimits

0x53df,	// (0x000240b9) popup_call_audio_wait_window

0x5400,	// (0x000240da) popup_number_entry_window_ParamLimits

0x5400,	// (0x000240da) popup_number_entry_window

0x9c4c,	// (0x00028926) bg_popup_call_pane_cp05_ParamLimits

0x9c4c,	// (0x00028926) bg_popup_call_pane_cp05

0x9c6c,	// (0x00028946) popup_number_entry_window_t1

0x9c7f,	// (0x00028959) popup_number_entry_window_t2

0x9c91,	// (0x0002896b) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0002dda4) popup_number_entry_window_t

0x9ca3,	// (0x0002897d) text_title_cp2

0x9cb6,	// (0x00028990) bg_popup_call_pane_cp_ParamLimits

0x9cb6,	// (0x00028990) bg_popup_call_pane_cp

0x9cc4,	// (0x0002899e) call_thumbnail_pane

0x9ccc,	// (0x000289a6) popup_call_audio_in_window_g1_ParamLimits

0x9ccc,	// (0x000289a6) popup_call_audio_in_window_g1

0x9cd8,	// (0x000289b2) popup_call_audio_in_window_g2_ParamLimits

0x9cd8,	// (0x000289b2) popup_call_audio_in_window_g2

0x9ce4,	// (0x000289be) popup_call_audio_in_window_g3_ParamLimits

0x9ce4,	// (0x000289be) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0002ddad) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0002ddad) popup_call_audio_in_window_g

0x9cf0,	// (0x000289ca) popup_call_audio_in_window_t1_ParamLimits

0x9cf0,	// (0x000289ca) popup_call_audio_in_window_t1

0x9d0c,	// (0x000289e6) popup_call_audio_in_window_t2_ParamLimits

0x9d0c,	// (0x000289e6) popup_call_audio_in_window_t2

0x9d28,	// (0x00028a02) popup_call_audio_in_window_t3_ParamLimits

0x9d28,	// (0x00028a02) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0002ddb4) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0002ddb4) popup_call_audio_in_window_t

0x9cb6,	// (0x00028990) bg_popup_call_pane_cp01_ParamLimits

0x9cb6,	// (0x00028990) bg_popup_call_pane_cp01

0x9cc4,	// (0x0002899e) call_thumbnail_pane_cp02

0x9d3b,	// (0x00028a15) call_type_pane_cp022

0x9d43,	// (0x00028a1d) popup_call_audio_out_window_g1_ParamLimits

0x9d43,	// (0x00028a1d) popup_call_audio_out_window_g1

0x9d55,	// (0x00028a2f) popup_call_audio_out_window_g2_ParamLimits

0x9d55,	// (0x00028a2f) popup_call_audio_out_window_g2

0x9d61,	// (0x00028a3b) popup_call_audio_out_window_g3_ParamLimits

0x9d61,	// (0x00028a3b) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0002ddbb) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0002ddbb) popup_call_audio_out_window_g

0x9d73,	// (0x00028a4d) popup_call_audio_out_window_t1_ParamLimits

0x9d73,	// (0x00028a4d) popup_call_audio_out_window_t1

0x9d8b,	// (0x00028a65) popup_call_audio_out_window_t2_ParamLimits

0x9d8b,	// (0x00028a65) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0002ddc2) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0002ddc2) popup_call_audio_out_window_t

0x9da0,	// (0x00028a7a) bg_popup_call_pane_ParamLimits

0x9da0,	// (0x00028a7a) bg_popup_call_pane

0x236a,	// (0x00021044) call_thumbnail_pane_cp_ParamLimits

0x236a,	// (0x00021044) call_thumbnail_pane_cp

0x9e24,	// (0x00028afe) call_type_pane_cp01_ParamLimits

0x9e24,	// (0x00028afe) call_type_pane_cp01

0x9e68,	// (0x00028b42) popup_call_audio_first_window_g1_ParamLimits

0x9e68,	// (0x00028b42) popup_call_audio_first_window_g1

0x9eb4,	// (0x00028b8e) popup_call_audio_first_window_g2_ParamLimits

0x9eb4,	// (0x00028b8e) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0002ddc7) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0002ddc7) popup_call_audio_first_window_g

0x9ef8,	// (0x00028bd2) popup_call_audio_first_window_t1_ParamLimits

0x9ef8,	// (0x00028bd2) popup_call_audio_first_window_t1

0x9fa4,	// (0x00028c7e) popup_call_audio_first_window_t4_ParamLimits

0x9fa4,	// (0x00028c7e) popup_call_audio_first_window_t4

0xa030,	// (0x00028d0a) popup_call_audio_first_window_t5_ParamLimits

0xa030,	// (0x00028d0a) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0002ddcc) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0002ddcc) popup_call_audio_first_window_t

0xa05f,	// (0x00028d39) bg_popup_call_pane_cp02

0xa069,	// (0x00028d43) call_type_pane_cp023

0xa071,	// (0x00028d4b) popup_call_audio_wait_window_g1

0xa079,	// (0x00028d53) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002ddd3) popup_call_audio_wait_window_g

0xa081,	// (0x00028d5b) popup_call_audio_wait_window_t3

0xa08f,	// (0x00028d69) bg_popup_call_pane_cp03_ParamLimits

0xa08f,	// (0x00028d69) bg_popup_call_pane_cp03

0xa0ef,	// (0x00028dc9) call_thumbnail_pane_cp011_ParamLimits

0xa0ef,	// (0x00028dc9) call_thumbnail_pane_cp011

0xa0fb,	// (0x00028dd5) call_type_pane_cp034_ParamLimits

0xa0fb,	// (0x00028dd5) call_type_pane_cp034

0xa137,	// (0x00028e11) popup_call_audio_second_window_g1_ParamLimits

0xa137,	// (0x00028e11) popup_call_audio_second_window_g1

0xa173,	// (0x00028e4d) popup_call_audio_second_window_g2_ParamLimits

0xa173,	// (0x00028e4d) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0002ddd8) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0002ddd8) popup_call_audio_second_window_g

0xa1af,	// (0x00028e89) popup_call_audio_second_window_t1_ParamLimits

0xa1af,	// (0x00028e89) popup_call_audio_second_window_t1

0xa230,	// (0x00028f0a) popup_call_audio_second_window_t2_ParamLimits

0xa230,	// (0x00028f0a) popup_call_audio_second_window_t2

0xa266,	// (0x00028f40) popup_call_audio_second_window_t3_ParamLimits

0xa266,	// (0x00028f40) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0002dddd) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0002dddd) popup_call_audio_second_window_t

0xa05f,	// (0x00028d39) bg_popup_call_pane_cp04

0xa29c,	// (0x00028f76) list_conf_pane

0xa2a4,	// (0x00028f7e) popup_call_audio_conf_window_t1

0xa2b2,	// (0x00028f8c) call_thumbnail_pane_g1

0xa2ba,	// (0x00028f94) bg_pinb_pane_ParamLimits

0xa2ba,	// (0x00028f94) bg_pinb_pane

0xa2c8,	// (0x00028fa2) find_pinb_pane

0xa2d1,	// (0x00028fab) listscroll_pinb_pane_ParamLimits

0xa2d1,	// (0x00028fab) listscroll_pinb_pane

0xa2e0,	// (0x00028fba) pinb_bg_pane_g1

0x238e,	// (0x00021068) pinb_bg_pane_g2

0x239a,	// (0x00021074) pinb_bg_pane_g3

0x23a6,	// (0x00021080) pinb_bg_pane_g4

0x23b2,	// (0x0002108c) pinb_bg_pane_g5

0x23be,	// (0x00021098) pinb_bg_pane_g6

0x23c9,	// (0x000210a3) pinb_bg_pane_g7

0x23d4,	// (0x000210ae) pinb_bg_pane_g8

0x23df,	// (0x000210b9) pinb_bg_pane_g9

0x23e9,	// (0x000210c3) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0002dde4) pinb_bg_pane_g

0x2406,	// (0x000210e0) grid_pinb_pane

0x2411,	// (0x000210eb) list_pinb_pane

0x241c,	// (0x000210f6) scroll_pane_cp01_ParamLimits

0x241c,	// (0x000210f6) scroll_pane_cp01

0xa2ea,	// (0x00028fc4) find_pinb_pane_g1_ParamLimits

0xa2ea,	// (0x00028fc4) find_pinb_pane_g1

0xa302,	// (0x00028fdc) find_pinb_pane_t1

0xa314,	// (0x00028fee) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0002ddfe) find_pinb_pane_t

0xa329,	// (0x00029003) input_focus_pane_cp01_ParamLimits

0xa329,	// (0x00029003) input_focus_pane_cp01

0x242e,	// (0x00021108) cell_pinb_pane_ParamLimits

0x242e,	// (0x00021108) cell_pinb_pane

0x2453,	// (0x0002112d) cell_pinb_pane_g1_ParamLimits

0x2453,	// (0x0002112d) cell_pinb_pane_g1

0x2468,	// (0x00021142) cell_pinb_pane_g2_ParamLimits

0x2468,	// (0x00021142) cell_pinb_pane_g2

0xa335,	// (0x0002900f) cell_pinb_pane_g3_ParamLimits

0xa335,	// (0x0002900f) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0002de03) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0002de03) cell_pinb_pane_g

0xa05f,	// (0x00028d39) grid_highlight_pane_cp01

0x2474,	// (0x0002114e) list_pinb_item_pane_ParamLimits

0x2474,	// (0x0002114e) list_pinb_item_pane

0xa05f,	// (0x00028d39) list_highlight_pane_cp02

0x2492,	// (0x0002116c) list_pinb_item_pane_g1_ParamLimits

0x2492,	// (0x0002116c) list_pinb_item_pane_g1

0x249f,	// (0x00021179) list_pinb_item_pane_g2_ParamLimits

0x249f,	// (0x00021179) list_pinb_item_pane_g2

0x24ab,	// (0x00021185) list_pinb_item_pane_g3_ParamLimits

0x24ab,	// (0x00021185) list_pinb_item_pane_g3

0x24bc,	// (0x00021196) list_pinb_item_pane_g4_ParamLimits

0x24bc,	// (0x00021196) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0002de0a) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0002de0a) list_pinb_item_pane_g

0x24c8,	// (0x000211a2) list_pinb_item_pane_t1_ParamLimits

0x24c8,	// (0x000211a2) list_pinb_item_pane_t1

0x0ad4,	// (0x0001f7ae) calc_display_pane

0x0af2,	// (0x0001f7cc) calc_paper_pane

0x0b0e,	// (0x0001f7e8) grid_calc_pane

0xa05f,	// (0x00028d39) bg_list_pane_cp01

0x24df,	// (0x000211b9) clock_g1

0x24e7,	// (0x000211c1) clock_g2

0x0001,

0xf139,	// (0x0002de13) clock_g

0x24f1,	// (0x000211cb) clock_t1_ParamLimits

0x24f1,	// (0x000211cb) clock_t1

0x2506,	// (0x000211e0) clock_t2_ParamLimits

0x2506,	// (0x000211e0) clock_t2

0x2518,	// (0x000211f2) clock_t3_ParamLimits

0x2518,	// (0x000211f2) clock_t3

0x252a,	// (0x00021204) clock_t4_ParamLimits

0x252a,	// (0x00021204) clock_t4

0x253c,	// (0x00021216) clock_t5_ParamLimits

0x253c,	// (0x00021216) clock_t5

0x2551,	// (0x0002122b) clock_t6_ParamLimits

0x2551,	// (0x0002122b) clock_t6

0x2563,	// (0x0002123d) clock_t7_ParamLimits

0x2563,	// (0x0002123d) clock_t7

0x2575,	// (0x0002124f) clock_t8_ParamLimits

0x2575,	// (0x0002124f) clock_t8

0x258b,	// (0x00021265) clock_t9_ParamLimits

0x258b,	// (0x00021265) clock_t9

0x0008,

0xf13e,	// (0x0002de18) clock_t_ParamLimits

0xf13e,	// (0x0002de18) clock_t

0xa341,	// (0x0002901b) popup_clock_analogue_window_cp02

0xa341,	// (0x0002901b) popup_clock_digital_window_cp01

0xa349,	// (0x00029023) listscroll_help_pane

0xa05f,	// (0x00028d39) phob_pre_status_pane

0xa353,	// (0x0002902d) grid_qdial_pane

0xa2ba,	// (0x00028f94) listscroll_mce_pane

0xa2ba,	// (0x00028f94) bg_notes_pane

0xa35d,	// (0x00029037) list_notes_pane

0x25a1,	// (0x0002127b) scroll_pane_cp06

0xa36b,	// (0x00029045) bg_calc_paper_pane

0x0b44,	// (0x0001f81e) list_calc_pane

0xa37f,	// (0x00029059) bg_calc_display_pane

0x0b5e,	// (0x0001f838) calc_display_pane_t1

0x0b73,	// (0x0001f84d) calc_display_pane_t2

0x0b88,	// (0x0001f862) calc_display_pane_t3

0x0002,

0xf151,	// (0x0002de2b) calc_display_pane_t

0x0b9a,	// (0x0001f874) cell_calc_pane_ParamLimits

0x0b9a,	// (0x0001f874) cell_calc_pane

0xa38b,	// (0x00029065) bg_calc_paper_pane_g1

0xa397,	// (0x00029071) bg_calc_paper_pane_g2

0xa3a3,	// (0x0002907d) bg_calc_paper_pane_g3

0xa3af,	// (0x00029089) bg_calc_paper_pane_g4

0xa3bb,	// (0x00029095) bg_calc_paper_pane_g5

0x25b0,	// (0x0002128a) bg_calc_paper_pane_g6

0x25c1,	// (0x0002129b) bg_calc_paper_pane_g7

0x25d2,	// (0x000212ac) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0002de32) bg_calc_paper_pane_g

0x25e5,	// (0x000212bf) calc_bg_paper_pane_g9

0x25f8,	// (0x000212d2) list_calc_item_pane_ParamLimits

0x25f8,	// (0x000212d2) list_calc_item_pane

0xa3c7,	// (0x000290a1) list_calc_item_pane_g1

0x0bc9,	// (0x0001f8a3) list_calc_item_pane_t1_ParamLimits

0x0bc9,	// (0x0001f8a3) list_calc_item_pane_t1

0x0bdb,	// (0x0001f8b5) list_calc_item_pane_t2_ParamLimits

0x0bdb,	// (0x0001f8b5) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0002de43) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0002de43) list_calc_item_pane_t

0xa3d4,	// (0x000290ae) cell_calc_pane_g1

0xa3de,	// (0x000290b8) grid_highlight_pane_cp02

0xa400,	// (0x000290da) bg_calc_display_pane_g1

0x0c0b,	// (0x0001f8e5) bg_calc_display_pane_g2

0xa409,	// (0x000290e3) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0002de4d) bg_calc_display_pane_g

0x0c15,	// (0x0001f8ef) cell_qdial_pane_ParamLimits

0x0c15,	// (0x0001f8ef) cell_qdial_pane

0x2619,	// (0x000212f3) cell_qdial_pane_g1_ParamLimits

0x2619,	// (0x000212f3) cell_qdial_pane_g1

0x2626,	// (0x00021300) cell_qdial_pane_g2_ParamLimits

0x2626,	// (0x00021300) cell_qdial_pane_g2

0xa412,	// (0x000290ec) cell_qdial_pane_g3_ParamLimits

0xa412,	// (0x000290ec) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0002de54) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0002de54) cell_qdial_pane_g

0x2644,	// (0x0002131e) cell_qdial_pane_t1_ParamLimits

0x2644,	// (0x0002131e) cell_qdial_pane_t1

0x265c,	// (0x00021336) cell_qdial_pane_t2_ParamLimits

0x265c,	// (0x00021336) cell_qdial_pane_t2

0x266f,	// (0x00021349) cell_qdial_pane_t3_ParamLimits

0x266f,	// (0x00021349) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0002de5d) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0002de5d) cell_qdial_pane_t

0xa05f,	// (0x00028d39) grid_highlight_pane_cp04

0xa41e,	// (0x000290f8) thumbnail_qdial_pane_ParamLimits

0xa41e,	// (0x000290f8) thumbnail_qdial_pane

0xa47a,	// (0x00029154) list_help_pane

0xa483,	// (0x0002915d) scroll_pane_cp02

0x2682,	// (0x0002135c) help_list_pane_t1_ParamLimits

0x2682,	// (0x0002135c) help_list_pane_t1

0x0c2b,	// (0x0001f905) bg_notes_pane_g2

0x0c33,	// (0x0001f90d) bg_notes_pane_g3

0x0c3b,	// (0x0001f915) notes_bg_pane_g1

0x0c43,	// (0x0001f91d) notes_bg_pane_g4

0x0c4b,	// (0x0001f925) notes_bg_pane_g5

0x0c53,	// (0x0001f92d) notes_bg_pane_g6

0x0c5b,	// (0x0001f935) notes_bg_pane_g7

0x0c63,	// (0x0001f93d) notes_bg_pane_g8

0x0c6b,	// (0x0001f945) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0002de7b) notes_bg_pane_g

0x26a9,	// (0x00021383) list_notes_text_pane_ParamLimits

0x26a9,	// (0x00021383) list_notes_text_pane

0xa48c,	// (0x00029166) list_notes_text_pane_g1

0x26d1,	// (0x000213ab) list_notes_text_pane_t1

0x26df,	// (0x000213b9) listscroll_cale_week_pane

0x2715,	// (0x000213ef) bg_cale_heading_pane

0x273e,	// (0x00021418) bg_cale_pane_cp01

0x2760,	// (0x0002143a) cale_week_corner_pane

0x277f,	// (0x00021459) cale_week_day_heading_pane

0x27ad,	// (0x00021487) cale_week_scroll_pane_g1

0x27d1,	// (0x000214ab) cale_week_scroll_pane_g2

0x27e9,	// (0x000214c3) cale_week_scroll_pane_g3

0x2801,	// (0x000214db) cale_week_scroll_pane_g4

0x2819,	// (0x000214f3) cale_week_scroll_pane_g5

0x2831,	// (0x0002150b) cale_week_scroll_pane_g6

0x2851,	// (0x0002152b) cale_week_scroll_pane_g7

0x2871,	// (0x0002154b) cale_week_scroll_pane_g8

0x2891,	// (0x0002156b) cale_week_scroll_pane_g9

0x28ae,	// (0x00021588) cale_week_scroll_pane_g10

0x28cb,	// (0x000215a5) cale_week_scroll_pane_g11

0x28e8,	// (0x000215c2) cale_week_scroll_pane_g12

0x2905,	// (0x000215df) cale_week_scroll_pane_g13

0x292a,	// (0x00021604) cale_week_scroll_pane_g14

0x2953,	// (0x0002162d) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0002de8a) cale_week_scroll_pane_g

0x299c,	// (0x00021676) cale_week_time_pane

0x29bc,	// (0x00021696) grid_cale_week_pane

0xa4b8,	// (0x00029192) scroll_pane_cp08

0x29ef,	// (0x000216c9) cell_cale_week_pane_ParamLimits

0x29ef,	// (0x000216c9) cell_cale_week_pane

0x2a7f,	// (0x00021759) cale_week_day_heading_pane_t1

0x2ac7,	// (0x000217a1) cale_week_day_heading_pane_t2

0x2b14,	// (0x000217ee) cale_week_day_heading_pane_t3

0x2b61,	// (0x0002183b) cale_week_day_heading_pane_t4

0x2bae,	// (0x00021888) cale_week_day_heading_pane_t5

0x2bfb,	// (0x000218d5) cale_week_day_heading_pane_t6

0x2c48,	// (0x00021922) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0002deab) cale_week_day_heading_pane_t

0xa4da,	// (0x000291b4) bg_cale_side_pane

0x0c73,	// (0x0001f94d) cale_week_time_pane_t1

0x0cb7,	// (0x0001f991) cale_week_time_pane_t2

0x0cfb,	// (0x0001f9d5) cale_week_time_pane_t3

0x0d3f,	// (0x0001fa19) cale_week_time_pane_t4

0x0d83,	// (0x0001fa5d) cale_week_time_pane_t5

0x0dc7,	// (0x0001faa1) cale_week_time_pane_t6

0x0e0b,	// (0x0001fae5) cale_week_time_pane_t7

0x0e57,	// (0x0001fb31) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0002deba) cale_week_time_pane_t

0x2c90,	// (0x0002196a) cell_cale_week_pane_g2

0x2cb4,	// (0x0002198e) cell_cale_week_pane_g3_ParamLimits

0x2cb4,	// (0x0002198e) cell_cale_week_pane_g3

0xa4e8,	// (0x000291c2) grid_highlight_pane_cp07

0xa4f0,	// (0x000291ca) listscroll_gms_pane

0xa4fa,	// (0x000291d4) grid_gms_pane

0xa503,	// (0x000291dd) listscroll_gms_pane_g1

0xa50b,	// (0x000291e5) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0002decb) listscroll_gms_pane_g

0x2ccc,	// (0x000219a6) scroll_pane_cp010

0x2cd7,	// (0x000219b1) cell_gms_pane_ParamLimits

0x2cd7,	// (0x000219b1) cell_gms_pane

0x2cea,	// (0x000219c4) cell_gms_pane_g1

0xa513,	// (0x000291ed) cell_gms_pane_g2

0xa51b,	// (0x000291f5) cell_gms_pane_g3

0xa524,	// (0x000291fe) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0002ded0) cell_gms_pane_g

0xa52d,	// (0x00029207) grid_highlight_pane_cp09

0x52c1,	// (0x00023f9b) phob_pre_status_pane_g1

0x52c9,	// (0x00023fa3) phob_pre_status_pane_g2

0x52d1,	// (0x00023fab) phob_pre_status_pane_g3

0x52d9,	// (0x00023fb3) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0002e2bb) phob_pre_status_pane_g

0x52e9,	// (0x00023fc3) phob_pre_status_pane_t1

0x52f9,	// (0x00023fd3) phob_pre_status_pane_t2

0x5309,	// (0x00023fe3) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0002e2c6) phob_pre_status_pane_t

0xa535,	// (0x0002920f) bg_list_pane_cp05

0x2cfa,	// (0x000219d4) grid_vorec_pane

0x2d06,	// (0x000219e0) vorec_t1

0x2d14,	// (0x000219ee) vorec_t2

0x2d22,	// (0x000219fc) vorec_t3

0x2d30,	// (0x00021a0a) vorec_t4

0x2030,	// (0x00020d0a) vorec_t5

0x203e,	// (0x00020d18) vorec_t6

0x0004,

0xf1ff,	// (0x0002ded9) vorec_t

0x204c,	// (0x00020d26) wait_bar_pane_cp01

0x2d4c,	// (0x00021a26) cell_vorec_pane_ParamLimits

0x2d4c,	// (0x00021a26) cell_vorec_pane

0x0ea5,	// (0x0001fb7f) cell_vorec_pane_g1

0xa05f,	// (0x00028d39) grid_highlight_pane_cp05

0x2d6f,	// (0x00021a49) cams_zoom_pane

0x2d7b,	// (0x00021a55) image_vga_pane

0x2d8a,	// (0x00021a64) main_camera_pane_g1

0x2d98,	// (0x00021a72) main_camera_pane_g2

0x2da4,	// (0x00021a7e) main_camera_pane_g3

0x2db2,	// (0x00021a8c) main_camera_pane_g4

0x2dc0,	// (0x00021a9a) main_camera_pane_g5

0x2dce,	// (0x00021aa8) main_camera_pane_g6

0x2ddc,	// (0x00021ab6) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002dee4) main_camera_pane_g

0x2dea,	// (0x00021ac4) main_camera_pane_t1

0x2dfc,	// (0x00021ad6) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002def5) main_camera_pane_t

0x2e1f,	// (0x00021af9) cams_zoom_pane_cp_ParamLimits

0x2e1f,	// (0x00021af9) cams_zoom_pane_cp

0x2e43,	// (0x00021b1d) image_cif_pane_ParamLimits

0x2e43,	// (0x00021b1d) image_cif_pane

0x2e61,	// (0x00021b3b) image_subqcif_pane

0x2e6b,	// (0x00021b45) main_video_pane_g1_ParamLimits

0x2e6b,	// (0x00021b45) main_video_pane_g1

0x2e8b,	// (0x00021b65) main_video_pane_g2_ParamLimits

0x2e8b,	// (0x00021b65) main_video_pane_g2

0x2ebb,	// (0x00021b95) main_video_pane_g3_ParamLimits

0x2ebb,	// (0x00021b95) main_video_pane_g3

0x2ee4,	// (0x00021bbe) main_video_pane_g4_ParamLimits

0x2ee4,	// (0x00021bbe) main_video_pane_g4

0x2f0d,	// (0x00021be7) main_video_pane_g5_ParamLimits

0x2f0d,	// (0x00021be7) main_video_pane_g5

0xa549,	// (0x00029223) main_video_pane_g6_ParamLimits

0xa549,	// (0x00029223) main_video_pane_g6

0x0006,

0xf220,	// (0x0002defa) main_video_pane_g_ParamLimits

0xf220,	// (0x0002defa) main_video_pane_g

0x2f2f,	// (0x00021c09) main_video_pane_t1_ParamLimits

0x2f2f,	// (0x00021c09) main_video_pane_t1

0xa563,	// (0x0002923d) cams_zoom_pane_g1

0xa56c,	// (0x00029246) cams_zoom_pane_g2

0xa575,	// (0x0002924f) cams_zoom_pane_g3

0xa57e,	// (0x00029258) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002df09) cams_zoom_pane_g

0x2f79,	// (0x00021c53) grid_cams_pane

0x2f87,	// (0x00021c61) linegrid_cams_pane

0x2f93,	// (0x00021c6d) cell_cams_pane_ParamLimits

0x2f93,	// (0x00021c6d) cell_cams_pane

0xa587,	// (0x00029261) cams_burst_image_pane

0xa58f,	// (0x00029269) cell_cams_pane_g1

0xa05f,	// (0x00028d39) grid_highlight_pane_cp03

0xa3d4,	// (0x000290ae) mp_bg_pane_g1

0xa05f,	// (0x00028d39) bg_list_pane_cp03

0xc1fd,	// (0x0002aed7) bg_mp_pane

0xc205,	// (0x0002aedf) grid_mp_pane

0xc20d,	// (0x0002aee7) media_player_g1

0xc217,	// (0x0002aef1) media_player_t1

0xc225,	// (0x0002aeff) media_player_t2

0xc233,	// (0x0002af0d) media_player_t3

0xc241,	// (0x0002af1b) media_player_t4

0xc24f,	// (0x0002af29) media_player_t5

0xc25d,	// (0x0002af37) media_player_t6

0xc26b,	// (0x0002af45) media_player_t7

0x0006,

0xf5cb,	// (0x0002e2a5) media_player_t

0xc279,	// (0x0002af53) wait_bar_pane_cp02

0xf5b0,	// (0x0002e28a) main_usb_pane_t

0x52b8,	// (0x00023f92) cell_mp_pane

0xa3d4,	// (0x000290ae) cell_mp_pane_g1

0xa05f,	// (0x00028d39) grid_highlight_pane_cp06

0xa597,	// (0x00029271) grid_skin_colour_pane

0xa59f,	// (0x00029279) list_highlight_pane_cp03

0x30bf,	// (0x00021d99) skin_g1

0xa5a7,	// (0x00029281) skin_t1

0xa5b6,	// (0x00029290) skin_t2

0x0001,

0xf264,	// (0x0002df3e) skin_t

0x30c9,	// (0x00021da3) cell_skin_colour_pane_ParamLimits

0x30c9,	// (0x00021da3) cell_skin_colour_pane

0xa5c4,	// (0x0002929e) cell_skin_colour_pane_g1

0x3149,	// (0x00021e23) call_video_g1_ParamLimits

0x3149,	// (0x00021e23) call_video_g1

0x3159,	// (0x00021e33) call_video_g2_ParamLimits

0x3159,	// (0x00021e33) call_video_g2

0x0001,

0xf269,	// (0x0002df43) call_video_g_ParamLimits

0xf269,	// (0x0002df43) call_video_g

0x31a9,	// (0x00021e83) call_video_uplink_pane_cp1_ParamLimits

0x31a9,	// (0x00021e83) call_video_uplink_pane_cp1

0xa5d6,	// (0x000292b0) call_video_uplink_pane_cp2

0x3277,	// (0x00021f51) video_down_crop_pane_ParamLimits

0x3277,	// (0x00021f51) video_down_crop_pane

0x3369,	// (0x00022043) video_down_pane_ParamLimits

0x3369,	// (0x00022043) video_down_pane

0xa5de,	// (0x000292b8) video_down_subqcif_pane_ParamLimits

0xa5de,	// (0x000292b8) video_down_subqcif_pane

0xa606,	// (0x000292e0) video_down_subqcif_pane_cp_ParamLimits

0xa606,	// (0x000292e0) video_down_subqcif_pane_cp

0xa62e,	// (0x00029308) im_reading_pane_ParamLimits

0xa62e,	// (0x00029308) im_reading_pane

0x3486,	// (0x00022160) im_writing_pane_ParamLimits

0x3486,	// (0x00022160) im_writing_pane

0x34a4,	// (0x0002217e) im_reading_pane_t1

0xa648,	// (0x00029322) list_im_pane

0xa659,	// (0x00029333) scroll_pane_cp07

0x34e6,	// (0x000221c0) im_writing_pane_t1_ParamLimits

0x34e6,	// (0x000221c0) im_writing_pane_t1

0xa672,	// (0x0002934c) im_writing_pane_t2_ParamLimits

0xa672,	// (0x0002934c) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002df4d) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002df4d) im_writing_pane_t

0xa05f,	// (0x00028d39) input_focus_pane_cp04

0xa05f,	// (0x00028d39) input_focus_pane_cp05

0x34f8,	// (0x000221d2) list_im_single_pane_ParamLimits

0x34f8,	// (0x000221d2) list_im_single_pane

0x3511,	// (0x000221eb) list_single_im_pane_t1

0x527c,	// (0x00023f56) blid_accuracy_pane

0x5284,	// (0x00023f5e) blid_compass_pane

0x528e,	// (0x00023f68) main_location_t1

0x529c,	// (0x00023f76) main_location_t2

0x52aa,	// (0x00023f84) main_location_t3

0x0002,

0xf5da,	// (0x0002e2b4) main_location_t

0xa05f,	// (0x00028d39) aid_levels_location

0xa3d4,	// (0x000290ae) blid_accuracy_pane_g1

0xa3d4,	// (0x000290ae) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002dfaf) blid_accuracy_pane_g

0xa6ba,	// (0x00029394) wml_content_pane

0xa6f8,	// (0x000293d2) wml_button_pane_ParamLimits

0xa6f8,	// (0x000293d2) wml_button_pane

0x3520,	// (0x000221fa) wml_list_single_large_pane_ParamLimits

0x3520,	// (0x000221fa) wml_list_single_large_pane

0x3542,	// (0x0002221c) wml_list_single_medium_pane_ParamLimits

0x3542,	// (0x0002221c) wml_list_single_medium_pane

0x3565,	// (0x0002223f) wml_list_single_small_pane_ParamLimits

0x3565,	// (0x0002223f) wml_list_single_small_pane

0xa70c,	// (0x000293e6) wml_selection_box_pane_ParamLimits

0xa70c,	// (0x000293e6) wml_selection_box_pane

0xa71f,	// (0x000293f9) wml_list_single_pane_t1

0xa72e,	// (0x00029408) wml_list_single_medium_pane_t1

0xa73d,	// (0x00029417) wml_list_single_large_pane_t1

0xa74c,	// (0x00029426) input_focus_pane_cp02_ParamLimits

0xa74c,	// (0x00029426) input_focus_pane_cp02

0xa75f,	// (0x00029439) wml_selection_box_pane_g1

0xa768,	// (0x00029442) wml_selection_box_pane_t1_ParamLimits

0xa768,	// (0x00029442) wml_selection_box_pane_t1

0xa2ba,	// (0x00028f94) bg_wml_button_pane_ParamLimits

0xa2ba,	// (0x00028f94) bg_wml_button_pane

0xa780,	// (0x0002945a) wml_button_pane_g1

0xa788,	// (0x00029462) wml_button_pane_t1

0xa780,	// (0x0002945a) wml_button_bg_pane_g1

0xa798,	// (0x00029472) wml_button_bg_pane_g2

0xa7a0,	// (0x0002947a) wml_button_bg_pane_g3

0xa7a8,	// (0x00029482) wml_button_bg_pane_g4

0xa7b0,	// (0x0002948a) wml_button_bg_pane_g5

0xa7b8,	// (0x00029492) wml_button_bg_pane_g6

0xa7c0,	// (0x0002949a) wml_button_bg_pane_g7

0xa7c8,	// (0x000294a2) wml_button_bg_pane_g8

0xa7d0,	// (0x000294aa) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002df52) wml_button_bg_pane_g

0x358d,	// (0x00022267) bg_list_pane_cp02

0xa7d8,	// (0x000294b2) mce_header_pane_ParamLimits

0xa7d8,	// (0x000294b2) mce_header_pane

0xa7ee,	// (0x000294c8) mce_icon_pane

0xa7ee,	// (0x000294c8) mce_image_pane

0xa7f7,	// (0x000294d1) mce_text_pane_ParamLimits

0xa7f7,	// (0x000294d1) mce_text_pane

0x3597,	// (0x00022271) scroll_pane_cp03

0xa6f0,	// (0x000293ca) scroll_pane_cp04

0xa80a,	// (0x000294e4) scroll_pane_cp05_ParamLimits

0xa80a,	// (0x000294e4) scroll_pane_cp05

0x35a1,	// (0x0002227b) mce_header_field_pane_ParamLimits

0x35a1,	// (0x0002227b) mce_header_field_pane

0x35c3,	// (0x0002229d) mce_header_field_pane_2_ParamLimits

0x35c3,	// (0x0002229d) mce_header_field_pane_2

0x35d9,	// (0x000222b3) mce_header_field_pane_3

0x35e1,	// (0x000222bb) list_single_mce_message_pane_ParamLimits

0x35e1,	// (0x000222bb) list_single_mce_message_pane

0x3600,	// (0x000222da) list_single_mce_smart_pane_ParamLimits

0x3600,	// (0x000222da) list_single_mce_smart_pane

0xa816,	// (0x000294f0) input_focus_pane_cp03

0xa81f,	// (0x000294f9) list_header_data_pane

0x362a,	// (0x00022304) mce_header_field_pane_t1

0x363a,	// (0x00022314) list_single_mce_header_pane_ParamLimits

0x363a,	// (0x00022314) list_single_mce_header_pane

0xa827,	// (0x00029501) list_single_mce_header_pane_t1

0xa836,	// (0x00029510) list_single_mce_message_pane_g1

0xa83e,	// (0x00029518) list_single_mce_message_pane_t1

0x367e,	// (0x00022358) bg_cale_heading_pane_cp01_ParamLimits

0x367e,	// (0x00022358) bg_cale_heading_pane_cp01

0xa84c,	// (0x00029526) bg_cale_pane_cp02_ParamLimits

0xa84c,	// (0x00029526) bg_cale_pane_cp02

0x36c5,	// (0x0002239f) cale_month_corner_pane

0x36e4,	// (0x000223be) cale_month_day_heading_pane_ParamLimits

0x36e4,	// (0x000223be) cale_month_day_heading_pane

0x373b,	// (0x00022415) cale_month_pane_g1_ParamLimits

0x373b,	// (0x00022415) cale_month_pane_g1

0x3777,	// (0x00022451) cale_month_pane_g2_ParamLimits

0x3777,	// (0x00022451) cale_month_pane_g2

0x37af,	// (0x00022489) cale_month_pane_g3_ParamLimits

0x37af,	// (0x00022489) cale_month_pane_g3

0x3803,	// (0x000224dd) cale_month_pane_g4_ParamLimits

0x3803,	// (0x000224dd) cale_month_pane_g4

0x3857,	// (0x00022531) cale_month_pane_g5_ParamLimits

0x3857,	// (0x00022531) cale_month_pane_g5

0x38ab,	// (0x00022585) cale_month_pane_g6_ParamLimits

0x38ab,	// (0x00022585) cale_month_pane_g6

0x390f,	// (0x000225e9) cale_month_pane_g7_ParamLimits

0x390f,	// (0x000225e9) cale_month_pane_g7

0x3973,	// (0x0002264d) cale_month_pane_g8_ParamLimits

0x3973,	// (0x0002264d) cale_month_pane_g8

0x39d7,	// (0x000226b1) cale_month_pane_g9_ParamLimits

0x39d7,	// (0x000226b1) cale_month_pane_g9

0x3a2f,	// (0x00022709) cale_month_pane_g10_ParamLimits

0x3a2f,	// (0x00022709) cale_month_pane_g10

0x3a7d,	// (0x00022757) cale_month_pane_g11_ParamLimits

0x3a7d,	// (0x00022757) cale_month_pane_g11

0x3ac9,	// (0x000227a3) cale_month_pane_g12_ParamLimits

0x3ac9,	// (0x000227a3) cale_month_pane_g12

0x3b19,	// (0x000227f3) cale_month_pane_g13_ParamLimits

0x3b19,	// (0x000227f3) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002df65) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002df65) cale_month_pane_g

0x3b69,	// (0x00022843) cale_month_week_pane

0x3b89,	// (0x00022863) grid_cale_month_pane_ParamLimits

0x3b89,	// (0x00022863) grid_cale_month_pane

0x3bd7,	// (0x000228b1) cale_month_day_heading_pane_t1

0x3c59,	// (0x00022933) cale_month_day_heading_pane_t2

0x3ce6,	// (0x000229c0) cale_month_day_heading_pane_t3

0x3d73,	// (0x00022a4d) cale_month_day_heading_pane_t4

0x3e00,	// (0x00022ada) cale_month_day_heading_pane_t5

0x3e95,	// (0x00022b6f) cale_month_day_heading_pane_t6

0x3f32,	// (0x00022c0c) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002df80) cale_month_day_heading_pane_t

0xa4da,	// (0x000291b4) bg_cale_side_pane_cp01

0x3fcf,	// (0x00022ca9) cale_month_week_pane_t1

0x3fe8,	// (0x00022cc2) cale_month_week_pane_t2

0x4001,	// (0x00022cdb) cale_month_week_pane_t3

0x401a,	// (0x00022cf4) cale_month_week_pane_t4

0x4033,	// (0x00022d0d) cale_month_week_pane_t5

0x404e,	// (0x00022d28) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002df8f) cale_month_week_pane_t

0x406f,	// (0x00022d49) cell_cale_month_pane_ParamLimits

0x406f,	// (0x00022d49) cell_cale_month_pane

0x0eaf,	// (0x0001fb89) cell_cale_month_pane_g1

0x0ebb,	// (0x0001fb95) cell_cale_month_pane_t1_ParamLimits

0x0ebb,	// (0x0001fb95) cell_cale_month_pane_t1

0xa4e8,	// (0x000291c2) grid_highlight_pane_cp08

0xa3d4,	// (0x000290ae) main_smil_g1

0x41bb,	// (0x00022e95) smil_status_pane

0xa88b,	// (0x00029565) smil_text_pane

0xc11b,	// (0x0002adf5) bg_popup_call3_rect_pane_g8

0xc123,	// (0x0002adfd) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002e248) bg_popup_call3_rect_pane_g

0xc3b1,	// (0x0002b08b) smil_status_volume_pane_g1

0x41ce,	// (0x00022ea8) smil_status_pane_t1

0x0ffd,	// (0x0001fcd7) volume_smil_pane

0xa895,	// (0x0002956f) list_smil_text_pane

0x41e5,	// (0x00022ebf) scroll_pane_cp011

0x41f0,	// (0x00022eca) smil_text_list_pane_t1_ParamLimits

0x41f0,	// (0x00022eca) smil_text_list_pane_t1

0x0edb,	// (0x0001fbb5) aid_volume_smil_ParamLimits

0x0edb,	// (0x0001fbb5) aid_volume_smil

0xa3d4,	// (0x000290ae) smil_volume_pane_g1

0xa3d4,	// (0x000290ae) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002dfaf) smil_volume_pane_g

0x26df,	// (0x000213b9) listscroll_cale_day_pane

0xa89f,	// (0x00029579) bg_cale_pane

0xa8b7,	// (0x00029591) list_cale_pane

0xa8da,	// (0x000295b4) scroll_pane_cp09

0xa8eb,	// (0x000295c5) cale_bg_pane_g1

0xa8f3,	// (0x000295cd) cale_bg_pane_g2

0xa8fb,	// (0x000295d5) cale_bg_pane_g3

0xa903,	// (0x000295dd) cale_bg_pane_g4

0xa90b,	// (0x000295e5) cale_bg_pane_g5

0xa913,	// (0x000295ed) cale_bg_pane_g6

0xa91b,	// (0x000295f5) cale_bg_pane_g7

0xa923,	// (0x000295fd) cale_bg_pane_g8

0xa92b,	// (0x00029605) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002dfb4) cale_bg_pane_g

0x4242,	// (0x00022f1c) list_cale_time_pane_ParamLimits

0x4242,	// (0x00022f1c) list_cale_time_pane

0xa93b,	// (0x00029615) list_cale_time_pane_g1_ParamLimits

0xa93b,	// (0x00029615) list_cale_time_pane_g1

0xa947,	// (0x00029621) list_cale_time_pane_g2_ParamLimits

0xa947,	// (0x00029621) list_cale_time_pane_g2

0x4256,	// (0x00022f30) list_cale_time_pane_g3_ParamLimits

0x4256,	// (0x00022f30) list_cale_time_pane_g3

0x4264,	// (0x00022f3e) list_cale_time_pane_g4_ParamLimits

0x4264,	// (0x00022f3e) list_cale_time_pane_g4

0x4272,	// (0x00022f4c) list_cale_time_pane_g5_ParamLimits

0x4272,	// (0x00022f4c) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002dfc7) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002dfc7) list_cale_time_pane_g

0xa961,	// (0x0002963b) list_cale_time_pane_t1_ParamLimits

0xa961,	// (0x0002963b) list_cale_time_pane_t1

0xa989,	// (0x00029663) list_cale_time_pane_t2_ParamLimits

0xa989,	// (0x00029663) list_cale_time_pane_t2

0x45d8,	// (0x000232b2) aid_blid_cardinal_pane

0x461a,	// (0x000232f4) compass_pane_t4

0xa9b1,	// (0x0002968b) list_cale_time_pane_t4_ParamLimits

0xa9b1,	// (0x0002968b) list_cale_time_pane_t4

0x4628,	// (0x00023302) compass_pane_t5

0x4638,	// (0x00023312) compass_pane_t6

0x4646,	// (0x00023320) compass_pane_t7

0xadcd,	// (0x00029aa7) navi_pane_cc_t1

0xaf1a,	// (0x00029bf4) aid_phob_thumbnail_center_pane

0x4d78,	// (0x00023a52) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002dfd4) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002dfd4) list_cale_time_pane_t

0x9cb6,	// (0x00028990) bg_popup_window_pane_cp02_ParamLimits

0x9cb6,	// (0x00028990) bg_popup_window_pane_cp02

0xa9d9,	// (0x000296b3) heading_pane_cp01_ParamLimits

0xa9d9,	// (0x000296b3) heading_pane_cp01

0xa9e5,	// (0x000296bf) loc_req_pane_ParamLimits

0xa9e5,	// (0x000296bf) loc_req_pane

0xa9f5,	// (0x000296cf) loc_type_pane_ParamLimits

0xa9f5,	// (0x000296cf) loc_type_pane

0xaa07,	// (0x000296e1) loc_type_pane_t1_ParamLimits

0xaa07,	// (0x000296e1) loc_type_pane_t1

0xaa19,	// (0x000296f3) loc_type_pane_t2_ParamLimits

0xaa19,	// (0x000296f3) loc_type_pane_t2

0xaa2b,	// (0x00029705) loc_type_pane_t3_ParamLimits

0xaa2b,	// (0x00029705) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002dfdb) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002dfdb) loc_type_pane_t

0xaa3d,	// (0x00029717) list_loc_req_pane

0xaa47,	// (0x00029721) scroll_pane_cp012

0x4280,	// (0x00022f5a) list_single_loc_request_popup_menu_pane_ParamLimits

0x4280,	// (0x00022f5a) list_single_loc_request_popup_menu_pane

0xaa52,	// (0x0002972c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa52,	// (0x0002972c) list_single_loc_request_popup_menu_pane_g1

0xaa5e,	// (0x00029738) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa5e,	// (0x00029738) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002dfe2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002dfe2) list_single_loc_request_popup_menu_pane_g

0xaa6a,	// (0x00029744) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa6a,	// (0x00029744) list_single_loc_request_popup_menu_pane_t1

0x4292,	// (0x00022f6c) bg_popup_window_pane_cp03_ParamLimits

0x4292,	// (0x00022f6c) bg_popup_window_pane_cp03

0x42a0,	// (0x00022f7a) heading_loc_req_pane_ParamLimits

0x42a0,	// (0x00022f7a) heading_loc_req_pane

0x42ac,	// (0x00022f86) popup_dyc_status_message_window_g1_ParamLimits

0x42ac,	// (0x00022f86) popup_dyc_status_message_window_g1

0x42b8,	// (0x00022f92) popup_dyc_status_message_window_t1_ParamLimits

0x42b8,	// (0x00022f92) popup_dyc_status_message_window_t1

0x42ca,	// (0x00022fa4) popup_dyc_status_message_window_t2_ParamLimits

0x42ca,	// (0x00022fa4) popup_dyc_status_message_window_t2

0x42dc,	// (0x00022fb6) popup_dyc_status_message_window_t3_ParamLimits

0x42dc,	// (0x00022fb6) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002dfe7) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002dfe7) popup_dyc_status_message_window_t

0xa05f,	// (0x00028d39) bg_heading_pane_cp01

0xaa80,	// (0x0002975a) heading_loc_req_pane_g1

0xaa88,	// (0x00029762) heading_loc_req_pane_g2

0xaa90,	// (0x0002976a) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002dfee) heading_loc_req_pane_g

0xaa98,	// (0x00029772) heading_loc_req_pane_t1

0xaaa8,	// (0x00029782) bg_popup_sub_pane_cp01_ParamLimits

0xaaa8,	// (0x00029782) bg_popup_sub_pane_cp01

0xaab6,	// (0x00029790) popup_cale_events_window_g1_ParamLimits

0xaab6,	// (0x00029790) popup_cale_events_window_g1

0xaad6,	// (0x000297b0) popup_cale_events_window_g2_ParamLimits

0xaad6,	// (0x000297b0) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002e022) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002e022) popup_cale_events_window_g

0xaaf6,	// (0x000297d0) popup_cale_events_window_t1_ParamLimits

0xaaf6,	// (0x000297d0) popup_cale_events_window_t1

0xab08,	// (0x000297e2) popup_cale_events_window_t2_ParamLimits

0xab08,	// (0x000297e2) popup_cale_events_window_t2

0xab46,	// (0x00029820) popup_cale_events_window_t3_ParamLimits

0xab46,	// (0x00029820) popup_cale_events_window_t3

0xab80,	// (0x0002985a) popup_cale_events_window_t4_ParamLimits

0xab80,	// (0x0002985a) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002e027) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002e027) popup_cale_events_window_t

0x43e3,	// (0x000230bd) call_type_pane

0xabb6,	// (0x00029890) popup_call_status_window_g1

0x43ef,	// (0x000230c9) popup_call_status_window_g2

0x43fb,	// (0x000230d5) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002e030) popup_call_status_window_g

0xabc4,	// (0x0002989e) call_type_pane_g1

0xabcd,	// (0x000298a7) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002e037) call_type_pane_g

0xa05f,	// (0x00028d39) bg_popup_sub_pane_cp02

0xabd6,	// (0x000298b0) listscroll_popup_wml_pane

0xabde,	// (0x000298b8) list_wml_pane

0xabe8,	// (0x000298c2) scroll_pane_cp013

0xabf3,	// (0x000298cd) list_single_graphic_popup_wml_pane_ParamLimits

0xabf3,	// (0x000298cd) list_single_graphic_popup_wml_pane

0xa3d4,	// (0x000290ae) list_single_graphic_popup_wml_pane_g1

0xac07,	// (0x000298e1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002e03c) list_single_graphic_popup_wml_pane_g

0xac0f,	// (0x000298e9) list_single_graphic_popup_wml_pane_t1

0xac25,	// (0x000298ff) aid_call_pane

0xa2b2,	// (0x00028f8c) popup_clock_analogue_window_g1

0xa2b2,	// (0x00028f8c) popup_clock_analogue_window_g2

0x0efd,	// (0x0001fbd7) popup_clock_analogue_window_g3

0x0efd,	// (0x0001fbd7) popup_clock_analogue_window_g4

0xa3d4,	// (0x000290ae) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002e041) popup_clock_analogue_window_g

0x0f05,	// (0x0001fbdf) popup_clock_analogue_window_t1

0x0f13,	// (0x0001fbed) clock_digital_number_pane_ParamLimits

0x0f13,	// (0x0001fbed) clock_digital_number_pane

0x0f1f,	// (0x0001fbf9) clock_digital_number_pane_cp02_ParamLimits

0x0f1f,	// (0x0001fbf9) clock_digital_number_pane_cp02

0x0f2b,	// (0x0001fc05) clock_digital_number_pane_cp03_ParamLimits

0x0f2b,	// (0x0001fc05) clock_digital_number_pane_cp03

0x0f37,	// (0x0001fc11) clock_digital_number_pane_cp04_ParamLimits

0x0f37,	// (0x0001fc11) clock_digital_number_pane_cp04

0x0f43,	// (0x0001fc1d) clock_digital_separator_pane_ParamLimits

0x0f43,	// (0x0001fc1d) clock_digital_separator_pane

0x0f4f,	// (0x0001fc29) popup_clock_digital_window_t1

0xa3d4,	// (0x000290ae) clock_digital_number_pane_g1

0xa3d4,	// (0x000290ae) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002dfaf) clock_digital_number_pane_g

0xa3d4,	// (0x000290ae) clock_digital_separator_pane_g1

0xa3d4,	// (0x000290ae) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002dfaf) clock_digital_separator_pane_g

0xa05f,	// (0x00028d39) bg_popup_window_pane_cp04

0xac2d,	// (0x00029907) heading_pane_cp03

0xac35,	// (0x0002990f) listscroll_popup_gms_pane

0xac3d,	// (0x00029917) grid_large_graphic_popup_pane

0xac47,	// (0x00029921) listscroll_popup_gms_pane_g1

0xac4f,	// (0x00029929) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002e04c) listscroll_popup_gms_pane_g

0xa6f0,	// (0x000293ca) scroll_pane_cp014

0x4407,	// (0x000230e1) cell_large_graphic_popup_pane_ParamLimits

0x4407,	// (0x000230e1) cell_large_graphic_popup_pane

0x4421,	// (0x000230fb) cell_large_graphic_popup_pane_g1_ParamLimits

0x4421,	// (0x000230fb) cell_large_graphic_popup_pane_g1

0xac57,	// (0x00029931) cell_large_graphic_popup_pane_g2_ParamLimits

0xac57,	// (0x00029931) cell_large_graphic_popup_pane_g2

0xac63,	// (0x0002993d) cell_large_graphic_popup_pane_g3_ParamLimits

0xac63,	// (0x0002993d) cell_large_graphic_popup_pane_g3

0xac70,	// (0x0002994a) cell_large_graphic_popup_pane_g4_ParamLimits

0xac70,	// (0x0002994a) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002e051) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002e051) cell_large_graphic_popup_pane_g

0xac80,	// (0x0002995a) grid_highlight_pane_cp010

0xa3d4,	// (0x000290ae) bg_popup_call_pane_g1

0xac8a,	// (0x00029964) list_single_graphic_popup_conf_pane_ParamLimits

0xac8a,	// (0x00029964) list_single_graphic_popup_conf_pane

0xac9c,	// (0x00029976) list_highlight_pane_cp01

0xaca5,	// (0x0002997f) list_single_graphic_popup_conf_pane_g1

0xacad,	// (0x00029987) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002e05a) list_single_graphic_popup_conf_pane_g

0xacb5,	// (0x0002998f) list_single_graphic_popup_conf_pane_t1

0xacc3,	// (0x0002999d) linegrid_cams_pane_g1

0x442d,	// (0x00023107) linegrid_cams_pane_g2

0xa51b,	// (0x000291f5) linegrid_cams_pane_g3

0xaccc,	// (0x000299a6) linegrid_cams_pane_g4

0x4436,	// (0x00023110) linegrid_cams_pane_g5

0x443f,	// (0x00023119) linegrid_cams_pane_g6

0xa524,	// (0x000291fe) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002e05f) linegrid_cams_pane_g

0xacd5,	// (0x000299af) popup_clock_analogue_window

0xacd5,	// (0x000299af) popup_clock_digital_window

0xa05f,	// (0x00028d39) popup_phob_thumbnail_window

0xa3d4,	// (0x000290ae) call_video_uplink_pane_g1

0xacde,	// (0x000299b8) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002e06e) call_video_uplink_pane_g

0xace6,	// (0x000299c0) video_uplink_pane

0xacee,	// (0x000299c8) mce_image_pane_g1

0x444a,	// (0x00023124) mce_image_pane_g2

0x4454,	// (0x0002312e) mce_image_pane_g3

0x445e,	// (0x00023138) mce_image_pane_g4

0x4466,	// (0x00023140) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002e073) mce_image_pane_g

0xacf8,	// (0x000299d2) control_top_pane_stacon_cp01_ParamLimits

0xacf8,	// (0x000299d2) control_top_pane_stacon_cp01

0xad0c,	// (0x000299e6) uni_indicator_pane_stacon_cp01_ParamLimits

0xad0c,	// (0x000299e6) uni_indicator_pane_stacon_cp01

0xad1d,	// (0x000299f7) bg_popup_sub_pane_cp03

0x446e,	// (0x00023148) chi_dic_find_pane

0x4476,	// (0x00023150) listscroll_chi_dic_pane

0x447f,	// (0x00023159) main_pane_chidic_g1

0x4492,	// (0x0002316c) chi_dic_find_pane_t1

0xad27,	// (0x00029a01) find_chidic_pane

0xad30,	// (0x00029a0a) chi_dic_list_pane_ParamLimits

0xad30,	// (0x00029a0a) chi_dic_list_pane

0xad41,	// (0x00029a1b) scroll_pane_cp020

0x44a0,	// (0x0002317a) find_chidic_pane_t1

0xa05f,	// (0x00028d39) input_focus_pane_cp06

0x44af,	// (0x00023189) list_chi_dic_pane_ParamLimits

0x44af,	// (0x00023189) list_chi_dic_pane

0x44c4,	// (0x0002319e) list_chi_dic_pane_t1_ParamLimits

0x44c4,	// (0x0002319e) list_chi_dic_pane_t1

0xa05f,	// (0x00028d39) list_highlight_pane_cp020

0xad49,	// (0x00029a23) bg_cale_heading_pane_g1

0x44d7,	// (0x000231b1) bg_cale_heading_pane_g2

0x44df,	// (0x000231b9) bg_cale_heading_pane_g3

0x44e7,	// (0x000231c1) bg_cale_heading_pane_g4

0x44f1,	// (0x000231cb) bg_cale_heading_pane_g5

0x44fb,	// (0x000231d5) bg_cale_heading_pane_g6

0x4503,	// (0x000231dd) bg_cale_heading_pane_g7

0x450b,	// (0x000231e5) bg_cale_heading_pane_g8

0x4515,	// (0x000231ef) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002e07e) bg_cale_heading_pane_g

0xad49,	// (0x00029a23) bg_cale_side_pane_g1

0x451f,	// (0x000231f9) bg_cale_side_pane_g2

0x4529,	// (0x00023203) bg_cale_side_pane_g3

0x4533,	// (0x0002320d) bg_cale_side_pane_g4

0x453d,	// (0x00023217) bg_cale_side_pane_g5

0x4547,	// (0x00023221) bg_cale_side_pane_g6

0x4551,	// (0x0002322b) bg_cale_side_pane_g7

0x455b,	// (0x00023235) bg_cale_side_pane_g8

0x4563,	// (0x0002323d) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002e091) bg_cale_side_pane_g

0x456b,	// (0x00023245) popup_call_status_window_ParamLimits

0x456b,	// (0x00023245) popup_call_status_window

0xad51,	// (0x00029a2b) stacon_top_pane

0xad59,	// (0x00029a33) status_pane_ParamLimits

0xad59,	// (0x00029a33) status_pane

0xad6e,	// (0x00029a48) status_small_pane

0xad76,	// (0x00029a50) control_pane

0xa05f,	// (0x00028d39) stacon_bottom_pane

0xad7e,	// (0x00029a58) list_single_mce_smart_pane_t1_ParamLimits

0xad7e,	// (0x00029a58) list_single_mce_smart_pane_t1

0xad91,	// (0x00029a6b) list_single_mce_smart_pane_t2_ParamLimits

0xad91,	// (0x00029a6b) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002e0a4) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002e0a4) list_single_mce_smart_pane_t

0x4577,	// (0x00023251) compass_pane

0x4582,	// (0x0002325c) main_location2_pane_t1

0x4598,	// (0x00023272) main_location2_pane_t2

0x45ae,	// (0x00023288) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002e0a9) main_location2_pane_t

0xadb0,	// (0x00029a8a) compass_pane_g1_ParamLimits

0xadb0,	// (0x00029a8a) compass_pane_g1

0x45fc,	// (0x000232d6) compass_pane_t1

0x460b,	// (0x000232e5) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002e0b2) compass_pane_t

0x4656,	// (0x00023330) text_secondary_cp61

0xadc4,	// (0x00029a9e) navi_pane_cams_g5

0xade7,	// (0x00029ac1) navi_pane_im_t1

0xadf5,	// (0x00029acf) navi_pane_mp_g1_ParamLimits

0xadf5,	// (0x00029acf) navi_pane_mp_g1

0xae09,	// (0x00029ae3) navi_pane_mp_g2_ParamLimits

0xae09,	// (0x00029ae3) navi_pane_mp_g2

0xae15,	// (0x00029aef) navi_pane_mp_g3_ParamLimits

0xae15,	// (0x00029aef) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002e0c6) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002e0c6) navi_pane_mp_g

0xae21,	// (0x00029afb) navi_pane_mp_t1

0xae2f,	// (0x00029b09) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002e0cd) navi_pane_mp_t

0xae6b,	// (0x00029b45) navi_pane_vt_g1

0xae21,	// (0x00029afb) navi_pane_vt_t1

0xae73,	// (0x00029b4d) navi_slider_pane

0xa535,	// (0x0002920f) zooming_pane

0xae7b,	// (0x00029b55) navi_slider_pane_g1

0x0f6c,	// (0x0001fc46) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002e0d4) navi_slider_pane_g

0xae9f,	// (0x00029b79) aid_levels_zoom

0xaea7,	// (0x00029b81) zooming_pane_g1

0xaeaf,	// (0x00029b89) zooming_pane_g2

0xaeaf,	// (0x00029b89) zooming_pane_g3

0x0002,

0xf409,	// (0x0002e0e3) zooming_pane_g

0xaeb7,	// (0x00029b91) level_10_zoom

0xaec0,	// (0x00029b9a) level_11_zoom

0xaec9,	// (0x00029ba3) level_1_zoom

0xaed2,	// (0x00029bac) level_2_zoom

0xaedb,	// (0x00029bb5) level_3_zoom

0xaee4,	// (0x00029bbe) level_4_zoom

0xaeed,	// (0x00029bc7) level_5_zoom

0xaef6,	// (0x00029bd0) level_6_zoom

0xaeff,	// (0x00029bd9) level_7_zoom

0xaf08,	// (0x00029be2) level_8_zoom

0xaf11,	// (0x00029beb) level_9_zoom

0xaf22,	// (0x00029bfc) popup_phob_thumbnail_window_g1

0xaf2a,	// (0x00029c04) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002e0ea) popup_phob_thumbnail_window_g

0xc281,	// (0x0002af5b) level_1_location

0xc289,	// (0x0002af63) level_2_location

0xc291,	// (0x0002af6b) level_3_location

0xc299,	// (0x0002af73) level_4_location

0xa535,	// (0x0002920f) level_5_location

0x478b,	// (0x00023465) mce_icon_pane_g1

0x4793,	// (0x0002346d) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002e0ef) mce_icon_pane_g

0x479b,	// (0x00023475) main_mup_pane_g1_ParamLimits

0x479b,	// (0x00023475) main_mup_pane_g1

0x47b3,	// (0x0002348d) main_mup_pane_g2_ParamLimits

0x47b3,	// (0x0002348d) main_mup_pane_g2

0x47cf,	// (0x000234a9) main_mup_pane_g3_ParamLimits

0x47cf,	// (0x000234a9) main_mup_pane_g3

0x47eb,	// (0x000234c5) main_mup_pane_g4_ParamLimits

0x47eb,	// (0x000234c5) main_mup_pane_g4

0x4807,	// (0x000234e1) main_mup_pane_g5_ParamLimits

0x4807,	// (0x000234e1) main_mup_pane_g5

0x4828,	// (0x00023502) main_mup_pane_g6_ParamLimits

0x4828,	// (0x00023502) main_mup_pane_g6

0x4848,	// (0x00023522) main_mup_pane_g7_ParamLimits

0x4848,	// (0x00023522) main_mup_pane_g7

0x486c,	// (0x00023546) main_mup_pane_g8_ParamLimits

0x486c,	// (0x00023546) main_mup_pane_g8

0x4890,	// (0x0002356a) main_mup_pane_g9_ParamLimits

0x4890,	// (0x0002356a) main_mup_pane_g9

0x48b3,	// (0x0002358d) main_mup_pane_g10_ParamLimits

0x48b3,	// (0x0002358d) main_mup_pane_g10

0x48d6,	// (0x000235b0) main_mup_pane_g11_ParamLimits

0x48d6,	// (0x000235b0) main_mup_pane_g11

0x48f6,	// (0x000235d0) main_mup_pane_g12_ParamLimits

0x48f6,	// (0x000235d0) main_mup_pane_g12

0x4904,	// (0x000235de) main_mup_pane_g13_ParamLimits

0x4904,	// (0x000235de) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002e0f4) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002e0f4) main_mup_pane_g

0x491a,	// (0x000235f4) main_mup_pane_t1_ParamLimits

0x491a,	// (0x000235f4) main_mup_pane_t1

0x4939,	// (0x00023613) main_mup_pane_t2_ParamLimits

0x4939,	// (0x00023613) main_mup_pane_t2

0x4953,	// (0x0002362d) main_mup_pane_t3_ParamLimits

0x4953,	// (0x0002362d) main_mup_pane_t3

0x496d,	// (0x00023647) main_mup_pane_t4_ParamLimits

0x496d,	// (0x00023647) main_mup_pane_t4

0x497f,	// (0x00023659) main_mup_pane_t5_ParamLimits

0x497f,	// (0x00023659) main_mup_pane_t5

0x4991,	// (0x0002366b) main_mup_pane_t6_ParamLimits

0x4991,	// (0x0002366b) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002e10f) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002e10f) main_mup_pane_t

0x49a7,	// (0x00023681) mup_progress_pane_ParamLimits

0x49a7,	// (0x00023681) mup_progress_pane

0x49b3,	// (0x0002368d) mup_visualizer_pane_ParamLimits

0x49b3,	// (0x0002368d) mup_visualizer_pane

0x49f1,	// (0x000236cb) mup_volume_pane_ParamLimits

0x49f1,	// (0x000236cb) mup_volume_pane

0xabb6,	// (0x00029890) mup_visualizer_pane_g1_ParamLimits

0xabb6,	// (0x00029890) mup_visualizer_pane_g1

0xabb6,	// (0x00029890) mup_visualizer_pane_g2_ParamLimits

0xabb6,	// (0x00029890) mup_visualizer_pane_g2

0xadb0,	// (0x00029a8a) mup_visualizer_pane_g3_ParamLimits

0xadb0,	// (0x00029a8a) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002e11c) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002e11c) mup_visualizer_pane_g

0xa3d4,	// (0x000290ae) mup_volume_pane_g1

0xaf3a,	// (0x00029c14) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002e123) mup_volume_pane_g

0xa3d4,	// (0x000290ae) mup_progress_pane_g1

0xaf43,	// (0x00029c1d) mup_progress_pane_g2

0xaf4c,	// (0x00029c26) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002e128) mup_progress_pane_g

0xa05f,	// (0x00028d39) bg_popup_window_pane_cp05

0xaf55,	// (0x00029c2f) heading_pane_cp02_ParamLimits

0xaf55,	// (0x00029c2f) heading_pane_cp02

0xaf7d,	// (0x00029c57) list_popup_blid_pane

0xaf85,	// (0x00029c5f) list_blid_sat_info_pane_ParamLimits

0xaf85,	// (0x00029c5f) list_blid_sat_info_pane

0xaf98,	// (0x00029c72) list_blid_sat_info_pane_g1

0xafa0,	// (0x00029c7a) list_blid_sat_info_pane_t1

0x4b10,	// (0x000237ea) mup_equalizer_pane_ParamLimits

0x4b10,	// (0x000237ea) mup_equalizer_pane

0x4b31,	// (0x0002380b) mup_equalizer_pane_cp1_ParamLimits

0x4b31,	// (0x0002380b) mup_equalizer_pane_cp1

0x4b52,	// (0x0002382c) mup_equalizer_pane_cp2_ParamLimits

0x4b52,	// (0x0002382c) mup_equalizer_pane_cp2

0x4b73,	// (0x0002384d) mup_equalizer_pane_cp3_ParamLimits

0x4b73,	// (0x0002384d) mup_equalizer_pane_cp3

0x4b98,	// (0x00023872) mup_equalizer_pane_cp4_ParamLimits

0x4b98,	// (0x00023872) mup_equalizer_pane_cp4

0x4bbd,	// (0x00023897) mup_equalizer_pane_cp5

0x4bd5,	// (0x000238af) mup_equalizer_pane_cp6

0x4bed,	// (0x000238c7) mup_equalizer_pane_cp7

0xc19b,	// (0x0002ae75) bg_popup_call_poc_act_pane_g9

0xc1a3,	// (0x0002ae7d) bg_popup_call_poc_act_pane_g10

0xc1ab,	// (0x0002ae85) bg_popup_call_poc_act_pane_g11

0x000a,

0xa2ba,	// (0x00028f94) mup_scale_pane

0xa3d4,	// (0x000290ae) mup_scale_pane_g1

0xafae,	// (0x00029c88) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002e144) mup_scale_pane_g

0xafd2,	// (0x00029cac) msg_data_pane

0xafda,	// (0x00029cb4) scroll_pane_cp017

0x4c17,	// (0x000238f1) bg_list_pane_cp04_ParamLimits

0x4c17,	// (0x000238f1) bg_list_pane_cp04

0xafea,	// (0x00029cc4) msg_data_pane_g1

0x4c37,	// (0x00023911) msg_data_pane_g2

0x4c41,	// (0x0002391b) msg_data_pane_g3

0x4c4b,	// (0x00023925) msg_data_pane_g4

0x4c53,	// (0x0002392d) msg_data_pane_g5

0x4c5b,	// (0x00023935) msg_data_pane_g6

0x4c63,	// (0x0002393d) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002e153) msg_data_pane_g

0x4c6b,	// (0x00023945) msg_text_pane_ParamLimits

0x4c6b,	// (0x00023945) msg_text_pane

0x4c93,	// (0x0002396d) qrid_highlight_pane_cp011_ParamLimits

0x4c93,	// (0x0002396d) qrid_highlight_pane_cp011

0xa05f,	// (0x00028d39) msg_body_pane

0xa05f,	// (0x00028d39) msg_header_pane

0xaffb,	// (0x00029cd5) input_focus_pane_cp07

0xb010,	// (0x00029cea) msg_header_pane_t1_ParamLimits

0xb010,	// (0x00029cea) msg_header_pane_t1

0xb022,	// (0x00029cfc) msg_header_pane_t2_ParamLimits

0xb022,	// (0x00029cfc) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002e167) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002e167) msg_header_pane_t

0xb034,	// (0x00029d0e) msg_body_pane_g1

0x4cb7,	// (0x00023991) msg_body_pane_t1_ParamLimits

0x4cb7,	// (0x00023991) msg_body_pane_t1

0xb03c,	// (0x00029d16) msg_body_pane_t2_ParamLimits

0xb03c,	// (0x00029d16) msg_body_pane_t2

0xb04e,	// (0x00029d28) msg_body_pane_t3_ParamLimits

0xb04e,	// (0x00029d28) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002e16c) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002e16c) msg_body_pane_t

0x0fae,	// (0x0001fc88) main_viewer_pane_g1_ParamLimits

0x0fae,	// (0x0001fc88) main_viewer_pane_g1

0x0fba,	// (0x0001fc94) main_viewer_pane_g2_ParamLimits

0x0fba,	// (0x0001fc94) main_viewer_pane_g2

0x4d0a,	// (0x000239e4) main_viewer_pane_g3_ParamLimits

0x4d0a,	// (0x000239e4) main_viewer_pane_g3

0x4d1b,	// (0x000239f5) main_viewer_pane_g4_ParamLimits

0x4d1b,	// (0x000239f5) main_viewer_pane_g4

0x0fc6,	// (0x0001fca0) main_viewer_pane_g5_ParamLimits

0x0fc6,	// (0x0001fca0) main_viewer_pane_g5

0x0fc6,	// (0x0001fca0) main_viewer_pane_g7_ParamLimits

0x0fc6,	// (0x0001fca0) main_viewer_pane_g7

0x0fd8,	// (0x0001fcb2) main_viewer_pane_g8_ParamLimits

0x0fd8,	// (0x0001fcb2) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002e17c) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002e17c) main_viewer_pane_g

0xb060,	// (0x00029d3a) viewer_content_pane_ParamLimits

0xb060,	// (0x00029d3a) viewer_content_pane

0x4d4c,	// (0x00023a26) main_postcard_pane_g1_ParamLimits

0x4d4c,	// (0x00023a26) main_postcard_pane_g1

0x4d5a,	// (0x00023a34) main_postcard_pane_g2_ParamLimits

0x4d5a,	// (0x00023a34) main_postcard_pane_g2

0x4d68,	// (0x00023a42) main_postcard_pane_g3_ParamLimits

0x4d68,	// (0x00023a42) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002e18d) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002e18d) main_postcard_pane_g

0x4d78,	// (0x00023a52) main_postcard_pane_g4

0xc3c4,	// (0x0002b09e) smil_status_volume_pane_g2

0x4da4,	// (0x00023a7e) postcard_pane_ParamLimits

0x4da4,	// (0x00023a7e) postcard_pane

0xabb6,	// (0x00029890) postcard_pane_g1_ParamLimits

0xabb6,	// (0x00029890) postcard_pane_g1

0x4dde,	// (0x00023ab8) postcard_pane_g2_ParamLimits

0x4dde,	// (0x00023ab8) postcard_pane_g2

0x4dea,	// (0x00023ac4) postcard_pane_g3_ParamLimits

0x4dea,	// (0x00023ac4) postcard_pane_g3

0xb06e,	// (0x00029d48) postcard_pane_g4_ParamLimits

0xb06e,	// (0x00029d48) postcard_pane_g4

0x4df6,	// (0x00023ad0) postcard_pane_g5_ParamLimits

0x4df6,	// (0x00023ad0) postcard_pane_g5

0x4e02,	// (0x00023adc) postcard_pane_g6_ParamLimits

0x4e02,	// (0x00023adc) postcard_pane_g6

0xb07c,	// (0x00029d56) postcard_pane_g7_ParamLimits

0xb07c,	// (0x00029d56) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002e19a) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002e19a) postcard_pane_g

0x4e10,	// (0x00023aea) main_mp2_pane_g1_ParamLimits

0x4e10,	// (0x00023aea) main_mp2_pane_g1

0x4e1e,	// (0x00023af8) main_mp2_pane_g2_ParamLimits

0x4e1e,	// (0x00023af8) main_mp2_pane_g2

0x4e2a,	// (0x00023b04) main_mp2_pane_g3_ParamLimits

0x4e2a,	// (0x00023b04) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002e1a9) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002e1a9) main_mp2_pane_g

0x4e36,	// (0x00023b10) main_mp2_pane_t1_ParamLimits

0x4e36,	// (0x00023b10) main_mp2_pane_t1

0x4e4d,	// (0x00023b27) main_mp2_pane_t2_ParamLimits

0x4e4d,	// (0x00023b27) main_mp2_pane_t2

0x4e61,	// (0x00023b3b) main_mp2_pane_t3_ParamLimits

0x4e61,	// (0x00023b3b) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002e1b0) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002e1b0) main_mp2_pane_t

0xb08a,	// (0x00029d64) pec_content_pane_ParamLimits

0xb08a,	// (0x00029d64) pec_content_pane

0xa6f0,	// (0x000293ca) scroll_pane_cp015

0xb09c,	// (0x00029d76) pec_attribute_pane_ParamLimits

0xb09c,	// (0x00029d76) pec_attribute_pane

0x4e73,	// (0x00023b4d) pec_content_pane_g1_ParamLimits

0x4e73,	// (0x00023b4d) pec_content_pane_g1

0xb0ac,	// (0x00029d86) pec_content_pane_t1_ParamLimits

0xb0ac,	// (0x00029d86) pec_content_pane_t1

0xb0be,	// (0x00029d98) pec_content_pane_t2_ParamLimits

0xb0be,	// (0x00029d98) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002e1b7) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002e1b7) pec_content_pane_t

0x4e7f,	// (0x00023b59) list_single_graphic_pane_cp01_ParamLimits

0x4e7f,	// (0x00023b59) list_single_graphic_pane_cp01

0xa2ba,	// (0x00028f94) bg_popup_sub_pane_cp04

0xb0d0,	// (0x00029daa) popup_mup_playback_window_g1

0xb0dc,	// (0x00029db6) popup_mup_playback_window_t1

0xb0f1,	// (0x00029dcb) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002e1bc) popup_mup_playback_window_t

0xb128,	// (0x00029e02) main_image_pane_g1_ParamLimits

0xb128,	// (0x00029e02) main_image_pane_g1

0xb16b,	// (0x00029e45) scroll_pane_cp018_ParamLimits

0xb16b,	// (0x00029e45) scroll_pane_cp018

0xb183,	// (0x00029e5d) scroll_pane_cp016_ParamLimits

0xb183,	// (0x00029e5d) scroll_pane_cp016

0x4f0d,	// (0x00023be7) smil2_image_pane_ParamLimits

0x4f0d,	// (0x00023be7) smil2_image_pane

0x4f43,	// (0x00023c1d) smil2_root_pane_ParamLimits

0x4f43,	// (0x00023c1d) smil2_root_pane

0x4f6f,	// (0x00023c49) smil2_text_pane_ParamLimits

0x4f6f,	// (0x00023c49) smil2_text_pane

0xa05f,	// (0x00028d39) bg_list_pane_cp06

0xb1bf,	// (0x00029e99) grid_radio_pane

0xa05f,	// (0x00028d39) bg_popup_window_pane_cp06

0xb1c9,	// (0x00029ea3) main_fmradio_pane_t1

0xac2d,	// (0x00029907) heading_pane_cp04

0xb1d7,	// (0x00029eb1) main_fmradio_pane_t2

0xc1b3,	// (0x0002ae8d) popup_cale_lunar_info_window_g1

0xb1e5,	// (0x00029ebf) main_fmradio_pane_t3

0xc1bb,	// (0x0002ae95) popup_cale_lunar_info_window_g2

0xb1f5,	// (0x00029ecf) main_fmradio_pane_t4

0x0001,

0xb203,	// (0x00029edd) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0002e297) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002e1d1) main_fmradio_pane_t

0xb211,	// (0x00029eeb) wait_bar_pane_cp03

0xb219,	// (0x00029ef3) cell_fmradio_pane_ParamLimits

0xb219,	// (0x00029ef3) cell_fmradio_pane

0xb07c,	// (0x00029d56) cell_fmradio_pane_g1_ParamLimits

0xb07c,	// (0x00029d56) cell_fmradio_pane_g1

0xa05f,	// (0x00028d39) grid_highlight_pane_cp011

0xb22e,	// (0x00029f08) poc_content_pane_ParamLimits

0xb22e,	// (0x00029f08) poc_content_pane

0xb240,	// (0x00029f1a) scroll_pane_cp019

0x4faf,	// (0x00023c89) popup_call_poc_act_window_ParamLimits

0x4faf,	// (0x00023c89) popup_call_poc_act_window

0x4fbc,	// (0x00023c96) popup_call_poc_inact_window_ParamLimits

0x4fbc,	// (0x00023c96) popup_call_poc_inact_window

0xf594,	// (0x0002e26e) bg_popup_call_poc_act_pane_g

0xc12b,	// (0x0002ae05) bg_popup_call_poc_inact_pane_g1

0xc133,	// (0x0002ae0d) bg_popup_call_poc_inact_pane_g2

0xb248,	// (0x00029f22) popup_call_poc_act_window_g2

0xc13b,	// (0x0002ae15) bg_popup_call_poc_inact_pane_g3

0xc143,	// (0x0002ae1d) bg_popup_call_poc_inact_pane_g4

0xc14b,	// (0x0002ae25) bg_popup_call_poc_inact_pane_g5

0xb250,	// (0x00029f2a) popup_call_poc_act_window_t1_ParamLimits

0xb250,	// (0x00029f2a) popup_call_poc_act_window_t1

0xb278,	// (0x00029f52) popup_call_poc_act_window_t2_ParamLimits

0xb278,	// (0x00029f52) popup_call_poc_act_window_t2

0xb2a0,	// (0x00029f7a) popup_call_poc_act_window_t3_ParamLimits

0xb2a0,	// (0x00029f7a) popup_call_poc_act_window_t3

0xb2c8,	// (0x00029fa2) popup_call_poc_act_window_t4_ParamLimits

0xb2c8,	// (0x00029fa2) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002e1dc) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002e1dc) popup_call_poc_act_window_t

0xc153,	// (0x0002ae2d) bg_popup_call_poc_inact_pane_g6

0xc15b,	// (0x0002ae35) bg_popup_call_poc_inact_pane_g7

0xc163,	// (0x0002ae3d) bg_popup_call_poc_inact_pane_g8

0xb2da,	// (0x00029fb4) popup_call_poc_inact_window_g2

0xc16b,	// (0x0002ae45) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0002e25b) bg_popup_call_poc_inact_pane_g

0xb2e2,	// (0x00029fbc) popup_call_poc_inact_window_t1_ParamLimits

0xb2e2,	// (0x00029fbc) popup_call_poc_inact_window_t1

0xb2f7,	// (0x00029fd1) popup_call_poc_inact_window_t2_ParamLimits

0xb2f7,	// (0x00029fd1) popup_call_poc_inact_window_t2

0xb30c,	// (0x00029fe6) popup_call_poc_inact_window_t3_ParamLimits

0xb30c,	// (0x00029fe6) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002e1e5) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002e1e5) popup_call_poc_inact_window_t

0xc337,	// (0x0002b011) context_pane_ParamLimits

0x55cb,	// (0x000242a5) signal_pane_ParamLimits

0xa535,	// (0x0002920f) main_call2_pane

0xc325,	// (0x0002afff) popup_phob_thumbnail2_window_ParamLimits

0xc325,	// (0x0002afff) popup_phob_thumbnail2_window

0x0f7e,	// (0x0001fc58) aid_hotspot_pointer_arrow_pane

0x0f86,	// (0x0001fc60) aid_hotspot_pointer_hand_pane

0x52e1,	// (0x00023fbb) phob_pre_status_pane_g5

0x2d6f,	// (0x00021a49) cams_zoom_pane_ParamLimits

0x2d7b,	// (0x00021a55) image_vga_pane_ParamLimits

0x2d8a,	// (0x00021a64) main_camera_pane_g1_ParamLimits

0x2d98,	// (0x00021a72) main_camera_pane_g2_ParamLimits

0x2da4,	// (0x00021a7e) main_camera_pane_g3_ParamLimits

0x2db2,	// (0x00021a8c) main_camera_pane_g4_ParamLimits

0x2dc0,	// (0x00021a9a) main_camera_pane_g5_ParamLimits

0x2dce,	// (0x00021aa8) main_camera_pane_g6_ParamLimits

0x2ddc,	// (0x00021ab6) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002dee4) main_camera_pane_g_ParamLimits

0x2dea,	// (0x00021ac4) main_camera_pane_t1_ParamLimits

0x2dfc,	// (0x00021ad6) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002def5) main_camera_pane_t_ParamLimits

0xa2ba,	// (0x00028f94) bg_popup_preview_window_pane_cp01_ParamLimits

0xa2ba,	// (0x00028f94) bg_popup_preview_window_pane_cp01

0xb321,	// (0x00029ffb) popup_phob_thumbnail2_window_g1_ParamLimits

0xb321,	// (0x00029ffb) popup_phob_thumbnail2_window_g1

0xa05f,	// (0x00028d39) call2_cli_visual_pane

0x4fd8,	// (0x00023cb2) popup_call2_audio_conf_window_ParamLimits

0x4fd8,	// (0x00023cb2) popup_call2_audio_conf_window

0x4ff1,	// (0x00023ccb) popup_call2_audio_first_window_ParamLimits

0x4ff1,	// (0x00023ccb) popup_call2_audio_first_window

0x508f,	// (0x00023d69) popup_call2_audio_in_window_ParamLimits

0x508f,	// (0x00023d69) popup_call2_audio_in_window

0x50d3,	// (0x00023dad) popup_call2_audio_out_window_ParamLimits

0x50d3,	// (0x00023dad) popup_call2_audio_out_window

0x513d,	// (0x00023e17) popup_call2_audio_second_window_ParamLimits

0x513d,	// (0x00023e17) popup_call2_audio_second_window

0x519b,	// (0x00023e75) popup_call2_audio_wait_window_ParamLimits

0x519b,	// (0x00023e75) popup_call2_audio_wait_window

0xa05f,	// (0x00028d39) bg_popup_call2_act_pane_cp03

0xa29c,	// (0x00028f76) list_conf_pane_cp

0xb32d,	// (0x0002a007) popup_call2_audio_conf_window_t1

0xb33b,	// (0x0002a015) list_single_graphic_popup_conf2_pane_ParamLimits

0xb33b,	// (0x0002a015) list_single_graphic_popup_conf2_pane

0xac9c,	// (0x00029976) list_highlight_pane_cp04

0xb34e,	// (0x0002a028) list_single_graphic_popup_conf2_pane_g1

0xacad,	// (0x00029987) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002e1ec) list_single_graphic_popup_conf2_pane_g

0xb358,	// (0x0002a032) list_single_graphic_popup_conf2_pane_t1

0xb366,	// (0x0002a040) bg_popup_call2_act_pane_cp01_ParamLimits

0xb366,	// (0x0002a040) bg_popup_call2_act_pane_cp01

0xb3f0,	// (0x0002a0ca) call_type_pane_cp05_ParamLimits

0xb3f0,	// (0x0002a0ca) call_type_pane_cp05

0xb444,	// (0x0002a11e) popup_call2_audio_second_window_g1_ParamLimits

0xb444,	// (0x0002a11e) popup_call2_audio_second_window_g1

0xb498,	// (0x0002a172) popup_call2_audio_second_window_g2_ParamLimits

0xb498,	// (0x0002a172) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002e1f1) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002e1f1) popup_call2_audio_second_window_g

0xb4fd,	// (0x0002a1d7) popup_call2_audio_second_window_t1_ParamLimits

0xb4fd,	// (0x0002a1d7) popup_call2_audio_second_window_t1

0xb5b8,	// (0x0002a292) popup_call2_audio_second_window_t2_ParamLimits

0xb5b8,	// (0x0002a292) popup_call2_audio_second_window_t2

0xb60b,	// (0x0002a2e5) popup_call2_audio_second_window_t3_ParamLimits

0xb60b,	// (0x0002a2e5) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002e1f8) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002e1f8) popup_call2_audio_second_window_t

0xa05f,	// (0x00028d39) bg_popup_call2_in_pane_cp02

0xa069,	// (0x00028d43) call_type_pane_cp04

0xa071,	// (0x00028d4b) popup_call2_audio_wait_window_g1

0xa079,	// (0x00028d53) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002ddd3) popup_call2_audio_wait_window_g

0xa081,	// (0x00028d5b) popup_call2_audio_wait_window_t3

0xb6fe,	// (0x0002a3d8) bg_popup_call2_act_pane_ParamLimits

0xb6fe,	// (0x0002a3d8) bg_popup_call2_act_pane

0xb7be,	// (0x0002a498) call_type_pane_cp03_ParamLimits

0xb7be,	// (0x0002a498) call_type_pane_cp03

0xb822,	// (0x0002a4fc) popup_call2_audio_first_window_g1_ParamLimits

0xb822,	// (0x0002a4fc) popup_call2_audio_first_window_g1

0xb892,	// (0x0002a56c) popup_call2_audio_first_window_g2_ParamLimits

0xb892,	// (0x0002a56c) popup_call2_audio_first_window_g2

0xabb6,	// (0x00029890) popup_call2_audio_first_window_g3_ParamLimits

0xabb6,	// (0x00029890) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002e201) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002e201) popup_call2_audio_first_window_g

0xb970,	// (0x0002a64a) popup_call2_audio_first_window_t1_ParamLimits

0xb970,	// (0x0002a64a) popup_call2_audio_first_window_t1

0xba73,	// (0x0002a74d) popup_call2_audio_first_window_t4_ParamLimits

0xba73,	// (0x0002a74d) popup_call2_audio_first_window_t4

0xbb56,	// (0x0002a830) popup_call2_audio_first_window_t5_ParamLimits

0xbb56,	// (0x0002a830) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002e20c) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002e20c) popup_call2_audio_first_window_t

0xa2b2,	// (0x00028f8c) bg_popup_call2_act_pane_g1

0xc1c5,	// (0x0002ae9f) popup_cale_lunar_info_window_t1

0xc1d3,	// (0x0002aead) popup_cale_lunar_info_window_t2

0xc1e1,	// (0x0002aebb) popup_cale_lunar_info_window_t3

0xa05f,	// (0x00028d39) bg_popup_call2_bubble_pane

0xbc57,	// (0x0002a931) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc57,	// (0x0002a931) bg_popup_call2_in_pane_cp01

0x9d3b,	// (0x00028a15) call_type_pane_cp02

0xbc9f,	// (0x0002a979) popup_call2_audio_out_window_g1_ParamLimits

0xbc9f,	// (0x0002a979) popup_call2_audio_out_window_g1

0xbccb,	// (0x0002a9a5) popup_call2_audio_out_window_g2_ParamLimits

0xbccb,	// (0x0002a9a5) popup_call2_audio_out_window_g2

0xbcf3,	// (0x0002a9cd) popup_call2_audio_out_window_g3_ParamLimits

0xbcf3,	// (0x0002a9cd) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002e215) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002e215) popup_call2_audio_out_window_g

0xbd2e,	// (0x0002aa08) popup_call2_audio_out_window_t1_ParamLimits

0xbd2e,	// (0x0002aa08) popup_call2_audio_out_window_t1

0xbd8d,	// (0x0002aa67) popup_call2_audio_out_window_t2_ParamLimits

0xbd8d,	// (0x0002aa67) popup_call2_audio_out_window_t2

0xbde1,	// (0x0002aabb) popup_call2_audio_out_window_t3_ParamLimits

0xbde1,	// (0x0002aabb) popup_call2_audio_out_window_t3

0xbdf7,	// (0x0002aad1) popup_call2_audio_out_window_t4_ParamLimits

0xbdf7,	// (0x0002aad1) popup_call2_audio_out_window_t4

0xbe0d,	// (0x0002aae7) popup_call2_audio_out_window_t5_ParamLimits

0xbe0d,	// (0x0002aae7) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002e21e) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002e21e) popup_call2_audio_out_window_t

0xbe71,	// (0x0002ab4b) bg_popup_call2_in_pane_ParamLimits

0xbe71,	// (0x0002ab4b) bg_popup_call2_in_pane

0xbecd,	// (0x0002aba7) popup_call2_audio_in_window_g1_ParamLimits

0xbecd,	// (0x0002aba7) popup_call2_audio_in_window_g1

0xbf05,	// (0x0002abdf) popup_call2_audio_in_window_g2_ParamLimits

0xbf05,	// (0x0002abdf) popup_call2_audio_in_window_g2

0xbf3d,	// (0x0002ac17) popup_call2_audio_in_window_g3_ParamLimits

0xbf3d,	// (0x0002ac17) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002e22b) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002e22b) popup_call2_audio_in_window_g

0xbf95,	// (0x0002ac6f) popup_call2_audio_in_window_t1_ParamLimits

0xbf95,	// (0x0002ac6f) popup_call2_audio_in_window_t1

0xc015,	// (0x0002acef) popup_call2_audio_in_window_t2_ParamLimits

0xc015,	// (0x0002acef) popup_call2_audio_in_window_t2

0xc095,	// (0x0002ad6f) popup_call2_audio_in_window_t3_ParamLimits

0xc095,	// (0x0002ad6f) popup_call2_audio_in_window_t3

0xc0af,	// (0x0002ad89) popup_call2_audio_in_window_t4_ParamLimits

0xc0af,	// (0x0002ad89) popup_call2_audio_in_window_t4

0xc0c1,	// (0x0002ad9b) popup_call2_audio_in_window_t5_ParamLimits

0xc0c1,	// (0x0002ad9b) popup_call2_audio_in_window_t5

0xc0d6,	// (0x0002adb0) popup_call2_audio_in_window_t6_ParamLimits

0xc0d6,	// (0x0002adb0) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002e234) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002e234) popup_call2_audio_in_window_t

0xa2b2,	// (0x00028f8c) bg_popup_call2_in_pane_g1

0xc1ef,	// (0x0002aec9) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0002e29c) popup_cale_lunar_info_window_t

0xa2ba,	// (0x00028f94) bg_popup_call2_rect_pane_ParamLimits

0xa2ba,	// (0x00028f94) bg_popup_call2_rect_pane

0xa05f,	// (0x00028d39) call2_cli_visual_graphic_pane

0xa05f,	// (0x00028d39) call2_cli_visual_text_pane

0x0ff0,	// (0x0001fcca) smil_status_volume_pane_g3

0x0002,

0xa3d4,	// (0x000290ae) call2_cli_visual_graphic_pane_g1

0xa3d4,	// (0x000290ae) call2_cli_visual_graphic_pane_g2

0xa3d4,	// (0x000290ae) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002e241) call2_cli_visual_graphic_pane_g

0xc0eb,	// (0x0002adc5) bg_popup_call2_rect_pane_g1

0xa472,	// (0x0002914c) bg_popup_call2_rect_pane_g2

0xc0f3,	// (0x0002adcd) bg_popup_call2_rect_pane_g3

0xc0fb,	// (0x0002add5) bg_popup_call2_rect_pane_g4

0xc103,	// (0x0002addd) bg_popup_call2_rect_pane_g5

0xc10b,	// (0x0002ade5) bg_popup_call2_rect_pane_g6

0xc113,	// (0x0002aded) bg_popup_call2_rect_pane_g7

0xc11b,	// (0x0002adf5) bg_popup_call2_rect_pane_g8

0xc123,	// (0x0002adfd) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002e248) bg_popup_call2_rect_pane_g

0xc12b,	// (0x0002ae05) bg_popup_call2_bubble_pane_g1

0xc133,	// (0x0002ae0d) bg_popup_call2_bubble_pane_g2

0xc13b,	// (0x0002ae15) bg_popup_call2_bubble_pane_g3

0xc143,	// (0x0002ae1d) bg_popup_call2_bubble_pane_g4

0xc14b,	// (0x0002ae25) bg_popup_call2_bubble_pane_g5

0xc153,	// (0x0002ae2d) bg_popup_call2_bubble_pane_g6

0xc15b,	// (0x0002ae35) bg_popup_call2_bubble_pane_g7

0xc163,	// (0x0002ae3d) bg_popup_call2_bubble_pane_g8

0xc16b,	// (0x0002ae45) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002e25b) bg_popup_call2_bubble_pane_g

0x26fb,	// (0x000213d5) aid_cale_week_size_cell_pane

0x2e10,	// (0x00021aea) aid_cams_cif_uncrop_pane_ParamLimits

0x2e10,	// (0x00021aea) aid_cams_cif_uncrop_pane

0x2f6d,	// (0x00021c47) aid_cams_size_cell_ParamLimits

0x2f6d,	// (0x00021c47) aid_cams_size_cell

0x2f79,	// (0x00021c53) grid_cams_pane_ParamLimits

0x2f87,	// (0x00021c61) linegrid_cams_pane_ParamLimits

0x316f,	// (0x00021e49) call_video_pane_t1

0x318c,	// (0x00021e66) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002df48) call_video_pane_t

0x3658,	// (0x00022332) aid_cale_month_size_cell_pane_ParamLimits

0x3658,	// (0x00022332) aid_cale_month_size_cell_pane

0xf60b,	// (0x0002e2e5) smil_status_volume_pane_g

0x0ffd,	// (0x0001fcd7) volume_smil_pane_ParamLimits

0x9bfd,	// (0x000288d7) aid_popup2_width_pane

0x2637,	// (0x00021311) cell_qdial_pane_g4_ParamLimits

0x2637,	// (0x00021311) cell_qdial_pane_g4

0x45d8,	// (0x000232b2) aid_blid_cardinal_pane_ParamLimits

0x45e8,	// (0x000232c2) aid_blid_destination_pane_ParamLimits

0x45e8,	// (0x000232c2) aid_blid_destination_pane

0xa2ba,	// (0x00028f94) bg_popup_call_poc_act_pane_ParamLimits

0xa2ba,	// (0x00028f94) bg_popup_call_poc_act_pane

0xa2ba,	// (0x00028f94) bg_popup_call_poc_inact_pane_ParamLimits

0xa2ba,	// (0x00028f94) bg_popup_call_poc_inact_pane

0xc173,	// (0x0002ae4d) bg_popup_call_poc_act_pane_g1

0xc17b,	// (0x0002ae55) bg_popup_call_poc_act_pane_g2

0xc183,	// (0x0002ae5d) bg_popup_call_poc_act_pane_g3

0xc143,	// (0x0002ae1d) bg_popup_call_poc_act_pane_g4

0xc14b,	// (0x0002ae25) bg_popup_call_poc_act_pane_g5

0xc18b,	// (0x0002ae65) bg_popup_call_poc_act_pane_g6

0xc15b,	// (0x0002ae35) bg_popup_call_poc_act_pane_g7

0xc193,	// (0x0002ae6d) bg_popup_call_poc_act_pane_g8

0xa05f,	// (0x00028d39) main_usb_pane

0xc2fc,	// (0x0002afd6) popup_cale_lunar_info_window

0x34a4,	// (0x0002217e) im_reading_pane_t1_ParamLimits

0xa648,	// (0x00029322) list_im_pane_ParamLimits

0xa659,	// (0x00029333) scroll_pane_cp07_ParamLimits

0xa05f,	// (0x00028d39) grid_highlight_pane_cp012

0xa2ba,	// (0x00028f94) mup_scale_pane_ParamLimits

0xabb6,	// (0x00029890) main_usb_pane_g1_ParamLimits

0xabb6,	// (0x00029890) main_usb_pane_g1

0x5204,	// (0x00023ede) main_usb_pane_g2_ParamLimits

0x5204,	// (0x00023ede) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0002e285) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0002e285) main_usb_pane_g

0x5210,	// (0x00023eea) main_usb_pane_t1_ParamLimits

0x5210,	// (0x00023eea) main_usb_pane_t1

0x5222,	// (0x00023efc) main_usb_pane_t2_ParamLimits

0x5222,	// (0x00023efc) main_usb_pane_t2

0x5234,	// (0x00023f0e) main_usb_pane_t3_ParamLimits

0x5234,	// (0x00023f0e) main_usb_pane_t3

0x5246,	// (0x00023f20) main_usb_pane_t4_ParamLimits

0x5246,	// (0x00023f20) main_usb_pane_t4

0x5258,	// (0x00023f32) main_usb_pane_t5_ParamLimits

0x5258,	// (0x00023f32) main_usb_pane_t5

0x526a,	// (0x00023f44) main_usb_pane_t6_ParamLimits

0x526a,	// (0x00023f44) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0002e28a) main_usb_pane_t_ParamLimits

0x4577,	// (0x00023251) aid_text_placing

0x4582,	// (0x0002325c) main_location2_pane_t1_ParamLimits

0x4598,	// (0x00023272) main_location2_pane_t2_ParamLimits

0x45ae,	// (0x00023288) main_location2_pane_t3_ParamLimits

0x45c4,	// (0x0002329e) main_location2_pane_t4_ParamLimits

0x45c4,	// (0x0002329e) main_location2_pane_t4

0xf3cf,	// (0x0002e0a9) main_location2_pane_t_ParamLimits

0xa2f6,	// (0x00028fd0) find_pinb_pane_g2_ParamLimits

0xa2f6,	// (0x00028fd0) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0002ddf9) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0002ddf9) find_pinb_pane_g

0xa302,	// (0x00028fdc) find_pinb_pane_t1_ParamLimits

0xa314,	// (0x00028fee) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0002ddfe) find_pinb_pane_t_ParamLimits

0xa05f,	// (0x00028d39) main_call3_pane

0x3bd7,	// (0x000228b1) cale_month_day_heading_pane_t1_ParamLimits

0x3c59,	// (0x00022933) cale_month_day_heading_pane_t2_ParamLimits

0x3ce6,	// (0x000229c0) cale_month_day_heading_pane_t3_ParamLimits

0x3d73,	// (0x00022a4d) cale_month_day_heading_pane_t4_ParamLimits

0x3e00,	// (0x00022ada) cale_month_day_heading_pane_t5_ParamLimits

0x3e95,	// (0x00022b6f) cale_month_day_heading_pane_t6_ParamLimits

0x3f32,	// (0x00022c0c) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002df80) cale_month_day_heading_pane_t_ParamLimits

0x41dc,	// (0x00022eb6) smil_status_volume_pane

0x4dc2,	// (0x00023a9c) postcard_address_pane_ParamLimits

0x4dc2,	// (0x00023a9c) postcard_address_pane

0x4dd0,	// (0x00023aaa) postcard_message_pane_ParamLimits

0x4dd0,	// (0x00023aaa) postcard_message_pane

0x51da,	// (0x00023eb4) call2_cli_visual_pane_t1_ParamLimits

0x51da,	// (0x00023eb4) call2_cli_visual_pane_t1

0x57ab,	// (0x00024485) postcard_message_pane_t1_ParamLimits

0x57ab,	// (0x00024485) postcard_message_pane_t1

0x5794,	// (0x0002446e) postcard_address_pane_t1_ParamLimits

0x5794,	// (0x0002446e) postcard_address_pane_t1

0x5785,	// (0x0002445f) popup_call3_audio_in_window_ParamLimits

0x5785,	// (0x0002445f) popup_call3_audio_in_window

0x5663,	// (0x0002433d) bg_popup_call3_in_pane_ParamLimits

0x5663,	// (0x0002433d) bg_popup_call3_in_pane

0x56cb,	// (0x000243a5) popup_call3_audio_in_window_g1_ParamLimits

0x56cb,	// (0x000243a5) popup_call3_audio_in_window_g1

0x56e3,	// (0x000243bd) popup_call3_audio_in_window_g2_ParamLimits

0x56e3,	// (0x000243bd) popup_call3_audio_in_window_g2

0x56fb,	// (0x000243d5) popup_call3_audio_in_window_g3_ParamLimits

0x56fb,	// (0x000243d5) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0002e2ec) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0002e2ec) popup_call3_audio_in_window_g

0x5723,	// (0x000243fd) popup_call3_audio_in_window_t1_ParamLimits

0x5723,	// (0x000243fd) popup_call3_audio_in_window_t1

0x574b,	// (0x00024425) popup_call3_audio_in_window_t2_ParamLimits

0x574b,	// (0x00024425) popup_call3_audio_in_window_t2

0x5773,	// (0x0002444d) popup_call3_audio_in_window_t3_ParamLimits

0x5773,	// (0x0002444d) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0002e2f5) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0002e2f5) popup_call3_audio_in_window_t

0xa535,	// (0x0002920f) bg_popup_call3_rect_pane

0xc0eb,	// (0x0002adc5) bg_popup_call3_rect_pane_g1

0xa472,	// (0x0002914c) bg_popup_call3_rect_pane_g2

0xc0f3,	// (0x0002adcd) bg_popup_call3_rect_pane_g3

0xc0fb,	// (0x0002add5) bg_popup_call3_rect_pane_g4

0xc103,	// (0x0002addd) bg_popup_call3_rect_pane_g5

0xc10b,	// (0x0002ade5) bg_popup_call3_rect_pane_g6

0xc113,	// (0x0002aded) bg_popup_call3_rect_pane_g7

0x4a0c,	// (0x000236e6) mup_visualizer_osc_pane

0xaf32,	// (0x00029c0c) mup_visualizer_spec_pane

0x5683,	// (0x0002435d) call3_video_qcif_pane_ParamLimits

0x5683,	// (0x0002435d) call3_video_qcif_pane

0x5695,	// (0x0002436f) call3_video_qcif_uncrop_pane_ParamLimits

0x5695,	// (0x0002436f) call3_video_qcif_uncrop_pane

0x56a5,	// (0x0002437f) call3_video_subqcif_pane_ParamLimits

0x56a5,	// (0x0002437f) call3_video_subqcif_pane

0x56b9,	// (0x00024393) call3_video_subqcif_uncrop_pane_ParamLimits

0x56b9,	// (0x00024393) call3_video_subqcif_uncrop_pane

0x5713,	// (0x000243ed) popup_call3_audio_in_window_g4_ParamLimits

0x5713,	// (0x000243ed) popup_call3_audio_in_window_g4

0x5652,	// (0x0002432c) mup_spec_half_pane

0x565b,	// (0x00024335) mup_spec_half_pane_cp

0xc397,	// (0x0002b071) mup_osc_middle_pane

0xc3a0,	// (0x0002b07a) mup_visualizer_osc_pane_g1

0x5632,	// (0x0002430c) mup_spec_bar_pane_ParamLimits

0x5632,	// (0x0002430c) mup_spec_bar_pane

0xc384,	// (0x0002b05e) mup_spec_bar_pane_g1

0xc38e,	// (0x0002b068) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002e2e0) mup_spec_bar_pane_g

0x26fb,	// (0x000213d5) aid_cale_week_size_cell_pane_ParamLimits

0x2715,	// (0x000213ef) bg_cale_heading_pane_ParamLimits

0x273e,	// (0x00021418) bg_cale_pane_cp01_ParamLimits

0x2760,	// (0x0002143a) cale_week_corner_pane_ParamLimits

0x277f,	// (0x00021459) cale_week_day_heading_pane_ParamLimits

0x27ad,	// (0x00021487) cale_week_scroll_pane_g1_ParamLimits

0x27d1,	// (0x000214ab) cale_week_scroll_pane_g2_ParamLimits

0x27e9,	// (0x000214c3) cale_week_scroll_pane_g3_ParamLimits

0x2801,	// (0x000214db) cale_week_scroll_pane_g4_ParamLimits

0x2819,	// (0x000214f3) cale_week_scroll_pane_g5_ParamLimits

0x2831,	// (0x0002150b) cale_week_scroll_pane_g6_ParamLimits

0x2851,	// (0x0002152b) cale_week_scroll_pane_g7_ParamLimits

0x2871,	// (0x0002154b) cale_week_scroll_pane_g8_ParamLimits

0x2891,	// (0x0002156b) cale_week_scroll_pane_g9_ParamLimits

0x28ae,	// (0x00021588) cale_week_scroll_pane_g10_ParamLimits

0x28cb,	// (0x000215a5) cale_week_scroll_pane_g11_ParamLimits

0x28e8,	// (0x000215c2) cale_week_scroll_pane_g12_ParamLimits

0x2905,	// (0x000215df) cale_week_scroll_pane_g13_ParamLimits

0x292a,	// (0x00021604) cale_week_scroll_pane_g14_ParamLimits

0x2953,	// (0x0002162d) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0002de8a) cale_week_scroll_pane_g_ParamLimits

0x299c,	// (0x00021676) cale_week_time_pane_ParamLimits

0x29bc,	// (0x00021696) grid_cale_week_pane_ParamLimits

0xa4a6,	// (0x00029180) listscroll_cale_week_pane_t1

0xa4b8,	// (0x00029192) scroll_pane_cp08_ParamLimits

0x36c5,	// (0x0002239f) cale_month_corner_pane_ParamLimits

0xa879,	// (0x00029553) cale_month_pane_t1

0x3b69,	// (0x00022843) cale_month_week_pane_ParamLimits

0xabb6,	// (0x00029890) popup_call_status_window_g1_ParamLimits

0x43ef,	// (0x000230c9) popup_call_status_window_g2_ParamLimits

0x43fb,	// (0x000230d5) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002e030) popup_call_status_window_g_ParamLimits

0xac1d,	// (0x000298f7) aid_call2_pane

0x4ca9,	// (0x00023983) msg_header_pane_g1

0x4dc2,	// (0x00023a9c) postcard_address2_pane_ParamLimits

0x4dc2,	// (0x00023a9c) postcard_address2_pane

0x4dd0,	// (0x00023aaa) postcard_message2_pane_ParamLimits

0x4dd0,	// (0x00023aaa) postcard_message2_pane

0x55d9,	// (0x000242b3) message2_row_pane_ParamLimits

0x55d9,	// (0x000242b3) message2_row_pane

0x55f3,	// (0x000242cd) address2_row_pane_ParamLimits

0x55f3,	// (0x000242cd) address2_row_pane

0xc352,	// (0x0002b02c) postcard_message2_row_pane_g1

0xc35a,	// (0x0002b034) postcard_message2_row_pane_t1

0xc352,	// (0x0002b02c) address2_row_pane_g1

0xc35a,	// (0x0002b034) address2_row_pane_t1

0x2cf2,	// (0x000219cc) aid_size_cell_vorec

0xa05f,	// (0x00028d39) main_rss_pane

0x5606,	// (0x000242e0) rss_list_single_pane_ParamLimits

0x5606,	// (0x000242e0) rss_list_single_pane

0xc368,	// (0x0002b042) rss_list_single_pane_t1

0xc376,	// (0x0002b050) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0002e2db) rss_list_single_pane_t

0xa05f,	// (0x00028d39) main_camera2_pane

0xa05f,	// (0x00028d39) main_video2_pane

0x105d,	// (0x0001fd37) cams_zoom_pane_cp2_ParamLimits

0x105d,	// (0x0001fd37) cams_zoom_pane_cp2

0x1069,	// (0x0001fd43) image2_vga_pane_ParamLimits

0x1069,	// (0x0001fd43) image2_vga_pane

0x1078,	// (0x0001fd52) main_camera2_pane_g1_ParamLimits

0x1078,	// (0x0001fd52) main_camera2_pane_g1

0x1084,	// (0x0001fd5e) main_camera2_pane_g2_ParamLimits

0x1084,	// (0x0001fd5e) main_camera2_pane_g2

0x1090,	// (0x0001fd6a) main_camera2_pane_g3_ParamLimits

0x1090,	// (0x0001fd6a) main_camera2_pane_g3

0x109c,	// (0x0001fd76) main_camera2_pane_g4_ParamLimits

0x109c,	// (0x0001fd76) main_camera2_pane_g4

0x10a8,	// (0x0001fd82) main_camera2_pane_g5_ParamLimits

0x10a8,	// (0x0001fd82) main_camera2_pane_g5

0x10b4,	// (0x0001fd8e) main_camera2_pane_g6_ParamLimits

0x10b4,	// (0x0001fd8e) main_camera2_pane_g6

0x10c0,	// (0x0001fd9a) main_camera2_pane_g7_ParamLimits

0x10c0,	// (0x0001fd9a) main_camera2_pane_g7

0x10cc,	// (0x0001fda6) main_camera2_pane_g8_ParamLimits

0x10cc,	// (0x0001fda6) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0002e2fc) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0002e2fc) main_camera2_pane_g

0x10e4,	// (0x0001fdbe) main_camera2_pane_t1_ParamLimits

0x10e4,	// (0x0001fdbe) main_camera2_pane_t1

0x10f6,	// (0x0001fdd0) main_camera2_pane_t2_ParamLimits

0x10f6,	// (0x0001fdd0) main_camera2_pane_t2

0x1108,	// (0x0001fde2) main_camera2_pane_t3_ParamLimits

0x1108,	// (0x0001fde2) main_camera2_pane_t3

0x111a,	// (0x0001fdf4) main_camera2_pane_t4_ParamLimits

0x111a,	// (0x0001fdf4) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0002e30f) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0002e30f) main_camera2_pane_t

0x1177,	// (0x0001fe51) cams_zoom_pane_cp4_ParamLimits

0x1177,	// (0x0001fe51) cams_zoom_pane_cp4

0x1187,	// (0x0001fe61) image2_cif_pane_ParamLimits

0x1187,	// (0x0001fe61) image2_cif_pane

0x119c,	// (0x0001fe76) image2_subqcif_pane_ParamLimits

0x119c,	// (0x0001fe76) image2_subqcif_pane

0x11ab,	// (0x0001fe85) main_video2_pane_g1_ParamLimits

0x11ab,	// (0x0001fe85) main_video2_pane_g1

0x11bd,	// (0x0001fe97) main_video2_pane_g2_ParamLimits

0x11bd,	// (0x0001fe97) main_video2_pane_g2

0x11cd,	// (0x0001fea7) main_video2_pane_g3_ParamLimits

0x11cd,	// (0x0001fea7) main_video2_pane_g3

0x11dd,	// (0x0001feb7) main_video2_pane_g4_ParamLimits

0x11dd,	// (0x0001feb7) main_video2_pane_g4

0x11ed,	// (0x0001fec7) main_video2_pane_g5_ParamLimits

0x11ed,	// (0x0001fec7) main_video2_pane_g5

0x11fd,	// (0x0001fed7) main_video2_pane_g6_ParamLimits

0x11fd,	// (0x0001fed7) main_video2_pane_g6

0x0005,

0xf644,	// (0x0002e31e) main_video2_pane_g_ParamLimits

0xf644,	// (0x0002e31e) main_video2_pane_g

0x120f,	// (0x0001fee9) main_video2_pane_t1_ParamLimits

0x120f,	// (0x0001fee9) main_video2_pane_t1

0x1229,	// (0x0001ff03) main_video2_pane_t2_ParamLimits

0x1229,	// (0x0001ff03) main_video2_pane_t2

0x124f,	// (0x0001ff29) main_video2_pane_t3_ParamLimits

0x124f,	// (0x0001ff29) main_video2_pane_t3

0x0002,

0xf651,	// (0x0002e32b) main_video2_pane_t_ParamLimits

0xf651,	// (0x0002e32b) main_video2_pane_t

0x5321,	// (0x00023ffb) call_muted_g2

0x0001,

0xf5f3,	// (0x0002e2cd) call_muted_g

0xa05f,	// (0x00028d39) main_mup2_pane

0xc3d7,	// (0x0002b0b1) main_mup2_pane_g1_ParamLimits

0xc3d7,	// (0x0002b0b1) main_mup2_pane_g1

0x57c6,	// (0x000244a0) main_mup2_pane_g2_ParamLimits

0x57c6,	// (0x000244a0) main_mup2_pane_g2

0x129e,	// (0x0001ff78) main_mup_pane_g13_cp1

0x12a6,	// (0x0001ff80) mup_volume_pane_cp1

0x57e8,	// (0x000244c2) main_mup2_pane_g4_ParamLimits

0x57e8,	// (0x000244c2) main_mup2_pane_g4

0x57fd,	// (0x000244d7) main_mup2_pane_g5_ParamLimits

0x57fd,	// (0x000244d7) main_mup2_pane_g5

0x5812,	// (0x000244ec) main_mup2_pane_g6_ParamLimits

0x5812,	// (0x000244ec) main_mup2_pane_g6

0x5827,	// (0x00024501) main_mup2_pane_g7_ParamLimits

0x5827,	// (0x00024501) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0002e332) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0002e332) main_mup2_pane_g

0x5843,	// (0x0002451d) main_mup2_pane_t1_ParamLimits

0x5843,	// (0x0002451d) main_mup2_pane_t1

0x585a,	// (0x00024534) main_mup2_pane_t2_ParamLimits

0x585a,	// (0x00024534) main_mup2_pane_t2

0x5871,	// (0x0002454b) main_mup2_pane_t3_ParamLimits

0x5871,	// (0x0002454b) main_mup2_pane_t3

0x5888,	// (0x00024562) main_mup2_pane_t4_ParamLimits

0x5888,	// (0x00024562) main_mup2_pane_t4

0x58a2,	// (0x0002457c) main_mup2_pane_t5_ParamLimits

0x58a2,	// (0x0002457c) main_mup2_pane_t5

0x58bc,	// (0x00024596) main_mup2_pane_t6_ParamLimits

0x58bc,	// (0x00024596) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0002e341) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0002e341) main_mup2_pane_t

0x58f4,	// (0x000245ce) mup2_visualizer_pane_ParamLimits

0x58f4,	// (0x000245ce) mup2_visualizer_pane

0x592a,	// (0x00024604) mup_progress_pane_cp_ParamLimits

0x592a,	// (0x00024604) mup_progress_pane_cp

0x1289,	// (0x0001ff63) mup_volume_pane_cp_ParamLimits

0x1289,	// (0x0001ff63) mup_volume_pane_cp

0x5943,	// (0x0002461d) mup2_visualizer_pane_g1_ParamLimits

0x5943,	// (0x0002461d) mup2_visualizer_pane_g1

0xc3e3,	// (0x0002b0bd) mup2_visualizer_pane_g2_ParamLimits

0xc3e3,	// (0x0002b0bd) mup2_visualizer_pane_g2

0x5958,	// (0x00024632) mup2_visualizer_pane_g3_ParamLimits

0x5958,	// (0x00024632) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0002e34e) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0002e34e) mup2_visualizer_pane_g

0xb1b7,	// (0x00029e91) aid_size_cell_fmradio

0x5437,	// (0x00024111) aid_height_parent_landcape

0xa6d7,	// (0x000293b1) wml_content_pane_cp

0xa6df,	// (0x000293b9) wml_tabs_pane

0xa6e8,	// (0x000293c2) popup_wml_miniature_window

0xa6f0,	// (0x000293ca) scroll_pane_cp021

0xa704,	// (0x000293de) wml_content_pane_comp8

0xa05f,	// (0x00028d39) bg_popup_sub_pane_cp05

0xc401,	// (0x0002b0db) popup_wml_miniature_window_g1

0xc409,	// (0x0002b0e3) wml_miniature_view_pane

0x5966,	// (0x00024640) aid_size_wml_view

0x596e,	// (0x00024648) wml_miniature_view_pane_g1

0x5977,	// (0x00024651) wml_miniature_view_pane_g2

0x5980,	// (0x0002465a) wml_miniature_view_pane_g3

0x5988,	// (0x00024662) wml_miniature_view_pane_g4

0x5990,	// (0x0002466a) wml_miniature_view_pane_g5

0x5998,	// (0x00024672) wml_miniature_view_pane_g6

0x59a0,	// (0x0002467a) wml_miniature_view_pane_g7

0x59a8,	// (0x00024682) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0002e355) wml_miniature_view_pane_g

0xc3d7,	// (0x0002b0b1) background_graphic_ParamLimits

0xc3d7,	// (0x0002b0b1) background_graphic

0xc411,	// (0x0002b0eb) wml_tabs_2_pane

0xc41a,	// (0x0002b0f4) wml_tabs_3_pane_ParamLimits

0xc41a,	// (0x0002b0f4) wml_tabs_3_pane

0xc42c,	// (0x0002b106) wml_tabs_4_pane_ParamLimits

0xc42c,	// (0x0002b106) wml_tabs_4_pane

0xc442,	// (0x0002b11c) wml_tabs_5_pane_ParamLimits

0xc442,	// (0x0002b11c) wml_tabs_5_pane

0xc45c,	// (0x0002b136) wml_tabs_pane_g2_ParamLimits

0xc45c,	// (0x0002b136) wml_tabs_pane_g2

0xc470,	// (0x0002b14a) wml_tabs_pane_g3_ParamLimits

0xc470,	// (0x0002b14a) wml_tabs_pane_g3

0x59b0,	// (0x0002468a) wml_tabs_2_active_pane_ParamLimits

0x59b0,	// (0x0002468a) wml_tabs_2_active_pane

0x59c2,	// (0x0002469c) wml_tabs_2_passive_pane_ParamLimits

0x59c2,	// (0x0002469c) wml_tabs_2_passive_pane

0x59d4,	// (0x000246ae) wml_tabs_3_active_pane_cp_ParamLimits

0x59d4,	// (0x000246ae) wml_tabs_3_active_pane_cp

0x59e7,	// (0x000246c1) wml_tabs_3_passive_pane_ParamLimits

0x59e7,	// (0x000246c1) wml_tabs_3_passive_pane

0x59f8,	// (0x000246d2) wml_tabs_3_passive_pane_cp_ParamLimits

0x59f8,	// (0x000246d2) wml_tabs_3_passive_pane_cp

0x5a0d,	// (0x000246e7) tabs_4_active_pane

0x5a15,	// (0x000246ef) tabs_4_passive_pane

0x5a1d,	// (0x000246f7) tabs_4_passive_pane_cp

0x5a25,	// (0x000246ff) tabs_4_passive_pane_cp2

0x51fc,	// (0x00023ed6) aid_height_text

0x49d5,	// (0x000236af) mup_volume_cont_pane_ParamLimits

0x49d5,	// (0x000236af) mup_volume_cont_pane

0x23f4,	// (0x000210ce) aid_size_cell_pinb

0x23fe,	// (0x000210d8) aid_size_list_pinb

0x5913,	// (0x000245ed) mup2_volume_cont_pane_ParamLimits

0x5913,	// (0x000245ed) mup2_volume_cont_pane

0x1275,	// (0x0001ff4f) mup2_volume_cont_pane_g1_ParamLimits

0x1275,	// (0x0001ff4f) mup2_volume_cont_pane_g1

0x206e,	// (0x00020d48) aid_size_cell_touch_ParamLimits

0x206e,	// (0x00020d48) aid_size_cell_touch

0x22de,	// (0x00020fb8) touch_pane_ParamLimits

0x22de,	// (0x00020fb8) touch_pane

0x9beb,	// (0x000288c5) main_rss2_pane

0xc48d,	// (0x0002b167) listscroll_rss2_pane

0xc496,	// (0x0002b170) rss2_navigation_pane

0xc49e,	// (0x0002b178) list_rss2_pane

0xad41,	// (0x00029a1b) scroll_pane_cp22

0xc4a6,	// (0x0002b180) rss2_navigation_pane_g1

0xc4af,	// (0x0002b189) rss2_navigation_pane_g2

0xc4b7,	// (0x0002b191) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0002e366) rss2_navigation_pane_g

0xc4bf,	// (0x0002b199) rss2_navigation_pane_t1

0x5a2f,	// (0x00024709) rss2_list_single_pane_ParamLimits

0x5a2f,	// (0x00024709) rss2_list_single_pane

0xc4cd,	// (0x0002b1a7) rss2_list_single_pane_t2

0xc4db,	// (0x0002b1b5) rss2_list_single_pane_t3_ParamLimits

0xc4db,	// (0x0002b1b5) rss2_list_single_pane_t3

0xc4f8,	// (0x0002b1d2) rss2_list_single_pane_t4

0x41c6,	// (0x00022ea0) smil_status_pane_g1

0xa5f8,	// (0x000292d2) main_image2_pane_ParamLimits

0xa5f8,	// (0x000292d2) main_image2_pane

0x10d8,	// (0x0001fdb2) main_camera2_pane_g9_ParamLimits

0x10d8,	// (0x0001fdb2) main_camera2_pane_g9

0x112c,	// (0x0001fe06) main_camera2_pane_t5_ParamLimits

0x112c,	// (0x0001fe06) main_camera2_pane_t5

0x113e,	// (0x0001fe18) main_camera2_pane_t6_ParamLimits

0x113e,	// (0x0001fe18) main_camera2_pane_t6

0x5a52,	// (0x0002472c) main_image2_pane_g1_ParamLimits

0x5a52,	// (0x0002472c) main_image2_pane_g1

0x4f99,	// (0x00023c73) smil2_video_pane_ParamLimits

0x4f99,	// (0x00023c73) smil2_video_pane

0x9c09,	// (0x000288e3) aid_zoom_text_primary_cp

0x9c42,	// (0x0002891c) popup_preview_fixed_window

0xa640,	// (0x0002931a) im_reading_pane_g1

0x1022,	// (0x0001fcfc) cams2_bc_adjust_pane_cp_ParamLimits

0x1022,	// (0x0001fcfc) cams2_bc_adjust_pane_cp

0x1169,	// (0x0001fe43) cams2_bc_adjust_pane_ParamLimits

0x1169,	// (0x0001fe43) cams2_bc_adjust_pane

0xd512,	// (0x0002c1ec) cams2_bc_adjust_pane_g1

0x12ae,	// (0x0001ff88) cams2_slider_pane

0x12b7,	// (0x0001ff91) cams2_slider_pane_g1

0x12c0,	// (0x0001ff9a) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0002e36d) cams2_slider_pane_g

0x0ad4,	// (0x0001f7ae) calc_display_pane_ParamLimits

0x0af2,	// (0x0001f7cc) calc_paper_pane_ParamLimits

0x0b0e,	// (0x0001f7e8) grid_calc_pane_ParamLimits

0x0f4f,	// (0x0001fc29) popup_clock_digital_window_t1_ParamLimits

0xb154,	// (0x00029e2e) main_image_pane_t1

0x0aba,	// (0x0001f794) aid_size_cell_calc_ParamLimits

0x0aba,	// (0x0001f794) aid_size_cell_calc

0x5469,	// (0x00024143) popup_blid_sat_info2_window_ParamLimits

0x5469,	// (0x00024143) popup_blid_sat_info2_window

0xc50e,	// (0x0002b1e8) aid_size_cell_blid

0xc516,	// (0x0002b1f0) bg_popup_window_pane_cp07

0xc539,	// (0x0002b213) grid_popup_blid_pane

0xc543,	// (0x0002b21d) heading_pane_cp05_ParamLimits

0xc543,	// (0x0002b21d) heading_pane_cp05

0xc60d,	// (0x0002b2e7) cell_popup_blid_pane_ParamLimits

0xc60d,	// (0x0002b2e7) cell_popup_blid_pane

0xc637,	// (0x0002b311) cell_popup_blid_pane_g1

0xc63f,	// (0x0002b319) cell_popup_blid_pane_t1

0x58d9,	// (0x000245b3) mup2_indicator_pane_ParamLimits

0x58d9,	// (0x000245b3) mup2_indicator_pane

0xa535,	// (0x0002920f) mup2_visualizer_osc_pane

0xc3ef,	// (0x0002b0c9) mup2_visualizer_spec_pane_ParamLimits

0xc3ef,	// (0x0002b0c9) mup2_visualizer_spec_pane

0x5a5e,	// (0x00024738) mup2_spec_half_pane

0x5a67,	// (0x00024741) mup2_spec_half_pane_cp

0x5a71,	// (0x0002474b) mup2_spec_bar_pane_ParamLimits

0x5a71,	// (0x0002474b) mup2_spec_bar_pane

0xc384,	// (0x0002b05e) mup2_spec_bar_pane_g1

0xc38e,	// (0x0002b068) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002e2e0) mup2_spec_bar_pane_g

0x5a90,	// (0x0002476a) mup2_osc_middle_pane

0xc3a0,	// (0x0002b07a) mup2_visualizer_osc_pane_g1

0x9c6c,	// (0x00028946) popup_number_entry_window_t1_ParamLimits

0x9c7f,	// (0x00028959) popup_number_entry_window_t2_ParamLimits

0x9c91,	// (0x0002896b) popup_number_entry_window_t3_ParamLimits

0x2335,	// (0x0002100f) popup_number_entry_window_t5_ParamLimits

0x2335,	// (0x0002100f) popup_number_entry_window_t5

0xf0ca,	// (0x0002dda4) popup_number_entry_window_t_ParamLimits

0x9ca3,	// (0x0002897d) text_title_cp2_ParamLimits

0x0f8e,	// (0x0001fc68) aid_hotspot_pointer_text2_pane

0x0fe4,	// (0x0001fcbe) main_viewer_pane_g9_ParamLimits

0x0fe4,	// (0x0001fcbe) main_viewer_pane_g9

0xa879,	// (0x00029553) cale_month_pane_t1_ParamLimits

0xa89f,	// (0x00029579) bg_cale_pane_ParamLimits

0xa8b7,	// (0x00029591) list_cale_pane_ParamLimits

0xa8c8,	// (0x000295a2) listscroll_cale_day_pane_t1

0xa8da,	// (0x000295b4) scroll_pane_cp09_ParamLimits

0x4a14,	// (0x000236ee) main_mup_eq_pane_t1_ParamLimits

0x4a14,	// (0x000236ee) main_mup_eq_pane_t1

0x4a30,	// (0x0002370a) main_mup_eq_pane_t2_ParamLimits

0x4a30,	// (0x0002370a) main_mup_eq_pane_t2

0x4a4c,	// (0x00023726) main_mup_eq_pane_t3_ParamLimits

0x4a4c,	// (0x00023726) main_mup_eq_pane_t3

0x4a66,	// (0x00023740) main_mup_eq_pane_t4_ParamLimits

0x4a66,	// (0x00023740) main_mup_eq_pane_t4

0x4a80,	// (0x0002375a) main_mup_eq_pane_t5_ParamLimits

0x4a80,	// (0x0002375a) main_mup_eq_pane_t5

0x4a9a,	// (0x00023774) main_mup_eq_pane_t6_ParamLimits

0x4a9a,	// (0x00023774) main_mup_eq_pane_t6

0x4ab0,	// (0x0002378a) main_mup_eq_pane_t7_ParamLimits

0x4ab0,	// (0x0002378a) main_mup_eq_pane_t7

0x4ac6,	// (0x000237a0) main_mup_eq_pane_t8_ParamLimits

0x4ac6,	// (0x000237a0) main_mup_eq_pane_t8

0x4adc,	// (0x000237b6) main_mup_eq_pane_t9_ParamLimits

0x4adc,	// (0x000237b6) main_mup_eq_pane_t9

0x4af8,	// (0x000237d2) main_mup_eq_pane_t10_ParamLimits

0x4af8,	// (0x000237d2) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002e12f) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002e12f) main_mup_eq_pane_t

0x4bbd,	// (0x00023897) mup_equalizer_pane_cp5_ParamLimits

0x4bd5,	// (0x000238af) mup_equalizer_pane_cp6_ParamLimits

0x4bed,	// (0x000238c7) mup_equalizer_pane_cp7_ParamLimits

0x9beb,	// (0x000288c5) main_gallery_pane

0xc3a9,	// (0x0002b083) smil2_volume_pane

0xc3b1,	// (0x0002b08b) smil_status_volume_pane_g1_ParamLimits

0xc3c4,	// (0x0002b09e) smil_status_volume_pane_g2_ParamLimits

0x0ff0,	// (0x0001fcca) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0002e2e5) smil_status_volume_pane_g_ParamLimits

0xc516,	// (0x0002b1f0) bg_popup_window_pane_cp07_ParamLimits

0xc524,	// (0x0002b1fe) blid_firmament_pane

0x5a99,	// (0x00024773) aid_size_cell_gallery_ParamLimits

0x5a99,	// (0x00024773) aid_size_cell_gallery

0x5aa7,	// (0x00024781) grid_gallery_pane_ParamLimits

0x5aa7,	// (0x00024781) grid_gallery_pane

0x5ab7,	// (0x00024791) cell_gallery_pane_ParamLimits

0x5ab7,	// (0x00024791) cell_gallery_pane

0xc64d,	// (0x0002b327) bg_cell_gallery_focus_pane_ParamLimits

0xc64d,	// (0x0002b327) bg_cell_gallery_focus_pane

0xc65f,	// (0x0002b339) cell_gallery_pane_g1_ParamLimits

0xc65f,	// (0x0002b339) cell_gallery_pane_g1

0x5afd,	// (0x000247d7) cell_gallery_pane_g2_ParamLimits

0x5afd,	// (0x000247d7) cell_gallery_pane_g2

0x5b0a,	// (0x000247e4) cell_gallery_pane_g3_ParamLimits

0x5b0a,	// (0x000247e4) cell_gallery_pane_g3

0xc66b,	// (0x0002b345) cell_gallery_pane_g4_ParamLimits

0xc66b,	// (0x0002b345) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0002e393) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0002e393) cell_gallery_pane_g

0xc677,	// (0x0002b351) bg_cell_gallery_focus_pane_g1

0xc67f,	// (0x0002b359) bg_cell_gallery_focus_pane_g2

0xc687,	// (0x0002b361) bg_cell_gallery_focus_pane_g3

0xc68f,	// (0x0002b369) bg_cell_gallery_focus_pane_g4

0xc697,	// (0x0002b371) bg_cell_gallery_focus_pane_g5

0xc69f,	// (0x0002b379) bg_cell_gallery_focus_pane_g6

0xc6a7,	// (0x0002b381) bg_cell_gallery_focus_pane_g7

0xc6af,	// (0x0002b389) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0002e39c) bg_cell_gallery_focus_pane_g

0xc6b7,	// (0x0002b391) aid_firma_cardinal

0xc6cb,	// (0x0002b3a5) blid_firmament_pane_t1

0xc6e2,	// (0x0002b3bc) blid_firmament_pane_t2

0xc6f9,	// (0x0002b3d3) blid_firmament_pane_t3

0xc710,	// (0x0002b3ea) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0002e3ad) blid_firmament_pane_t

0xc727,	// (0x0002b401) blid_sat_info_pane

0xc737,	// (0x0002b411) blid_sat_info_pane_g1

0xc737,	// (0x0002b411) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0002e3b6) blid_sat_info_pane_g

0xc741,	// (0x0002b41b) blid_sat_info_pane_t1

0xc74f,	// (0x0002b429) smil2_volume_content_pane

0xc758,	// (0x0002b432) smil2_volume_pane_g1

0xc760,	// (0x0002b43a) smil2_volume_content_pane_g1

0xc769,	// (0x0002b443) smil2_volume_content_pane_g2

0xc772,	// (0x0002b44c) smil2_volume_content_pane_g3

0xc77b,	// (0x0002b455) smil2_volume_content_pane_g4

0xc784,	// (0x0002b45e) smil2_volume_content_pane_g5

0xc78d,	// (0x0002b467) smil2_volume_content_pane_g6

0xc796,	// (0x0002b470) smil2_volume_content_pane_g7

0xc79f,	// (0x0002b479) smil2_volume_content_pane_g8

0xc7a8,	// (0x0002b482) smil2_volume_content_pane_g9

0xc7b1,	// (0x0002b48b) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0002e3bb) smil2_volume_content_pane_g

0x2a7f,	// (0x00021759) cale_week_day_heading_pane_t1_ParamLimits

0x2ac7,	// (0x000217a1) cale_week_day_heading_pane_t2_ParamLimits

0x2b14,	// (0x000217ee) cale_week_day_heading_pane_t3_ParamLimits

0x2b61,	// (0x0002183b) cale_week_day_heading_pane_t4_ParamLimits

0x2bae,	// (0x00021888) cale_week_day_heading_pane_t5_ParamLimits

0x2bfb,	// (0x000218d5) cale_week_day_heading_pane_t6_ParamLimits

0x2c48,	// (0x00021922) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0002deab) cale_week_day_heading_pane_t_ParamLimits

0xa4da,	// (0x000291b4) bg_cale_side_pane_ParamLimits

0x0c73,	// (0x0001f94d) cale_week_time_pane_t1_ParamLimits

0x0cb7,	// (0x0001f991) cale_week_time_pane_t2_ParamLimits

0x0cfb,	// (0x0001f9d5) cale_week_time_pane_t3_ParamLimits

0x0d3f,	// (0x0001fa19) cale_week_time_pane_t4_ParamLimits

0x0d83,	// (0x0001fa5d) cale_week_time_pane_t5_ParamLimits

0x0dc7,	// (0x0001faa1) cale_week_time_pane_t6_ParamLimits

0x0e0b,	// (0x0001fae5) cale_week_time_pane_t7_ParamLimits

0x0e57,	// (0x0001fb31) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0002deba) cale_week_time_pane_t_ParamLimits

0x2c90,	// (0x0002196a) cell_cale_week_pane_g2_ParamLimits

0xa4da,	// (0x000291b4) bg_cale_side_pane_cp01_ParamLimits

0x3fcf,	// (0x00022ca9) cale_month_week_pane_t1_ParamLimits

0x3fe8,	// (0x00022cc2) cale_month_week_pane_t2_ParamLimits

0x4001,	// (0x00022cdb) cale_month_week_pane_t3_ParamLimits

0x401a,	// (0x00022cf4) cale_month_week_pane_t4_ParamLimits

0x4033,	// (0x00022d0d) cale_month_week_pane_t5_ParamLimits

0x404e,	// (0x00022d28) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002df8f) cale_month_week_pane_t_ParamLimits

0x0eaf,	// (0x0001fb89) cell_cale_month_pane_g1_ParamLimits

0x9beb,	// (0x000288c5) main_cale_event_viewer_pane

0x9beb,	// (0x000288c5) listscroll_cale_event_viewer_pane

0xc7ba,	// (0x0002b494) list_cale_ev_pane

0xc7c2,	// (0x0002b49c) scroll_pane_cp023

0x5b17,	// (0x000247f1) field_cale_ev_pane_ParamLimits

0x5b17,	// (0x000247f1) field_cale_ev_pane

0xc7ce,	// (0x0002b4a8) field_cale_ev_content_pane_ParamLimits

0xc7ce,	// (0x0002b4a8) field_cale_ev_content_pane

0xc7da,	// (0x0002b4b4) field_cale_ev_pane_g1_ParamLimits

0xc7da,	// (0x0002b4b4) field_cale_ev_pane_g1

0xc7e6,	// (0x0002b4c0) field_cale_ev_pane_g2_ParamLimits

0xc7e6,	// (0x0002b4c0) field_cale_ev_pane_g2

0xc7fe,	// (0x0002b4d8) field_cale_ev_pane_g3_ParamLimits

0xc7fe,	// (0x0002b4d8) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0002e3d0) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0002e3d0) field_cale_ev_pane_g

0xc816,	// (0x0002b4f0) field_cale_ev_pane_t1_ParamLimits

0xc816,	// (0x0002b4f0) field_cale_ev_pane_t1

0x5b3b,	// (0x00024815) field_cale_ev_content_pane_t1_ParamLimits

0x5b3b,	// (0x00024815) field_cale_ev_content_pane_t1

0xaff2,	// (0x00029ccc) bg_button_pane_cp01

0x26df,	// (0x000213b9) listscroll_cale_week_pane_ParamLimits

0x26f1,	// (0x000213cb) popup_toolbar_window_cp01

0xa4a6,	// (0x00029180) listscroll_cale_week_pane_t1_ParamLimits

0x26df,	// (0x000213b9) listscroll_cale_day_pane_ParamLimits

0x26f1,	// (0x000213cb) popup_toolbar_window_cp02

0xa8c8,	// (0x000295a2) listscroll_cale_day_pane_t1_ParamLimits

0x26df,	// (0x000213b9) main_cale_month_pane_ParamLimits

0x554d,	// (0x00024227) popup_toolbar_window_cp03_ParamLimits

0x554d,	// (0x00024227) popup_toolbar_window_cp03

0x4ea9,	// (0x00023b83) main_image_pane_g2_ParamLimits

0x4ea9,	// (0x00023b83) main_image_pane_g2

0x4eb5,	// (0x00023b8f) main_image_pane_g3_ParamLimits

0x4eb5,	// (0x00023b8f) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002e1c1) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002e1c1) main_image_pane_g

0xb154,	// (0x00029e2e) main_image_pane_t1_ParamLimits

0x4ec1,	// (0x00023b9b) main_image_pane_t2_ParamLimits

0x4ec1,	// (0x00023b9b) main_image_pane_t2

0x4ed3,	// (0x00023bad) main_image_pane_t3_ParamLimits

0x4ed3,	// (0x00023bad) main_image_pane_t3

0x4ee5,	// (0x00023bbf) main_image_pane_t4_ParamLimits

0x4ee5,	// (0x00023bbf) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002e1c8) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002e1c8) main_image_pane_t

0x4ef7,	// (0x00023bd1) popup_image_details_window_cp01

0x4f01,	// (0x00023bdb) popup_toobar_trans_pane_cp01_ParamLimits

0x4f01,	// (0x00023bdb) popup_toobar_trans_pane_cp01

0x54be,	// (0x00024198) popup_image_details_window_ParamLimits

0x54be,	// (0x00024198) popup_image_details_window

0xc308,	// (0x0002afe2) popup_image_focus_window

0x1014,	// (0x0001fcee) camera2_autofocus_pane_ParamLimits

0x1014,	// (0x0001fcee) camera2_autofocus_pane

0x9beb,	// (0x000288c5) bg_popup_sub_pane_cp06

0xc82d,	// (0x0002b507) popup_image_focus_window_g1

0xc835,	// (0x0002b50f) popup_image_focus_window_g2

0xc83d,	// (0x0002b517) popup_image_focus_window_g3

0xc845,	// (0x0002b51f) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0002e3d7) popup_image_focus_window_g

0xc84d,	// (0x0002b527) popup_image_focus_window_t1

0xc85b,	// (0x0002b535) popup_image_focus_window_t2

0xc86b,	// (0x0002b545) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0002e3e0) popup_image_focus_window_t

0xc879,	// (0x0002b553) camera2_autofocus_pane_g1

0xa5f8,	// (0x000292d2) bg_tb_trans_pane_cp01

0xc887,	// (0x0002b561) popup_image_details_window_g1

0xc89a,	// (0x0002b574) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0002e3f2) popup_image_details_window_g

0xc8c3,	// (0x0002b59d) popup_image_details_window_t1

0xc8d5,	// (0x0002b5af) popup_image_details_window_t2

0xc8ee,	// (0x0002b5c8) popup_image_details_window_t3

0xc902,	// (0x0002b5dc) popup_image_details_window_t4

0xc91d,	// (0x0002b5f7) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0002e3f9) popup_image_details_window_t

0xa36b,	// (0x00029045) bg_calc_paper_pane_ParamLimits

0x0b3a,	// (0x0001f814) grid_highlight_pane_cp013

0x0b44,	// (0x0001f81e) list_calc_pane_ParamLimits

0x0b56,	// (0x0001f830) scroll_pane_cp024

0xa37f,	// (0x00029059) bg_calc_display_pane_ParamLimits

0x0b5e,	// (0x0001f838) calc_display_pane_t1_ParamLimits

0x0b73,	// (0x0001f84d) calc_display_pane_t2_ParamLimits

0x0b88,	// (0x0001f862) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0002de2b) calc_display_pane_t_ParamLimits

0x0bf3,	// (0x0001f8cd) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0002de48) cell_calc_pane_g

0x0bfc,	// (0x0001f8d6) cell_calc_pane_t1

0xa3de,	// (0x000290b8) grid_highlight_pane_cp02_ParamLimits

0xa3f4,	// (0x000290ce) toolbar_button_pane_cp01_ParamLimits

0xa3f4,	// (0x000290ce) toolbar_button_pane_cp01

0xb199,	// (0x00029e73) temp_image_control_pane_ParamLimits

0xb199,	// (0x00029e73) temp_image_control_pane

0xa5f8,	// (0x000292d2) main_mp3_pane

0xc937,	// (0x0002b611) temp_image_control_pane_g1_ParamLimits

0xc937,	// (0x0002b611) temp_image_control_pane_g1

0xc945,	// (0x0002b61f) temp_image_control_pane_g2_ParamLimits

0xc945,	// (0x0002b61f) temp_image_control_pane_g2

0xc957,	// (0x0002b631) temp_image_control_pane_g3_ParamLimits

0xc957,	// (0x0002b631) temp_image_control_pane_g3

0x5b86,	// (0x00024860) temp_image_control_pane_g4_ParamLimits

0x5b86,	// (0x00024860) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0002e404) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0002e404) temp_image_control_pane_g

0xc937,	// (0x0002b611) main_mp3_pane_g1

0x5b97,	// (0x00024871) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0002e40d) main_mp3_pane_g

0xc99a,	// (0x0002b674) main_mp3_pane_t1

0xa53d,	// (0x00029217) main_camera_pane_g8_ParamLimits

0xa53d,	// (0x00029217) main_camera_pane_g8

0x2f23,	// (0x00021bfd) main_video_pane_g7_ParamLimits

0x2f23,	// (0x00021bfd) main_video_pane_g7

0x1157,	// (0x0001fe31) main_camera2_pane_t7_ParamLimits

0x1157,	// (0x0001fe31) main_camera2_pane_t7

0xa697,	// (0x00029371) scroll_pane_cp025_ParamLimits

0xa697,	// (0x00029371) scroll_pane_cp025

0xa6ab,	// (0x00029385) scroll_pane_cp026_ParamLimits

0xa6ab,	// (0x00029385) scroll_pane_cp026

0xa6ba,	// (0x00029394) wml_content_pane_ParamLimits

0x9beb,	// (0x000288c5) main_touch_calib_pane

0x5c3b,	// (0x00024915) main_touch_calib_pane_g1

0x5c47,	// (0x00024921) main_touch_calib_pane_g2

0x5c53,	// (0x0002492d) main_touch_calib_pane_g3

0x5c5f,	// (0x00024939) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0002e42b) main_touch_calib_pane_g

0x5c6b,	// (0x00024945) main_touch_calib_pane_t1

0x5c82,	// (0x0002495c) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0002e434) main_touch_calib_pane_t

0xadbc,	// (0x00029a96) mup_progress_pane_cp02

0xaddb,	// (0x00029ab5) navi_pane_g1

0xae3d,	// (0x00029b17) navi_pane_mp_t3

0xa5f8,	// (0x000292d2) main_mp3_pane_ParamLimits

0x558f,	// (0x00024269) navi_pane_ParamLimits

0xc937,	// (0x0002b611) main_mp3_pane_g1_ParamLimits

0x5b97,	// (0x00024871) main_mp3_pane_g2_ParamLimits

0x5ba3,	// (0x0002487d) main_mp3_pane_g3_ParamLimits

0x5ba3,	// (0x0002487d) main_mp3_pane_g3

0x5baf,	// (0x00024889) main_mp3_pane_g4_ParamLimits

0x5baf,	// (0x00024889) main_mp3_pane_g4

0xc967,	// (0x0002b641) main_mp3_pane_g5_ParamLimits

0xc967,	// (0x0002b641) main_mp3_pane_g5

0xc975,	// (0x0002b64f) main_mp3_pane_g6_ParamLimits

0xc975,	// (0x0002b64f) main_mp3_pane_g6

0xc982,	// (0x0002b65c) main_mp3_pane_g7_ParamLimits

0xc982,	// (0x0002b65c) main_mp3_pane_g7

0xc98e,	// (0x0002b668) main_mp3_pane_g8_ParamLimits

0xc98e,	// (0x0002b668) main_mp3_pane_g8

0xf733,	// (0x0002e40d) main_mp3_pane_g_ParamLimits

0x5bbb,	// (0x00024895) main_mp3_pane_t2

0x5bcb,	// (0x000248a5) main_mp3_pane_t3

0xc9a8,	// (0x0002b682) main_mp3_pane_t4

0xc9b6,	// (0x0002b690) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0002e41e) main_mp3_pane_t

0xc9c4,	// (0x0002b69e) mup_progress_pane_cp01

0x9c09,	// (0x000288e3) aid_zoom_text_secondary2

0xc7ba,	// (0x0002b494) list_cale_ev2_pane

0xc7c2,	// (0x0002b49c) scroll_pane_cp023_ParamLimits

0xd096,	// (0x0002bd70) field_cale_ev2_pane_ParamLimits

0xd096,	// (0x0002bd70) field_cale_ev2_pane

0x5cdd,	// (0x000249b7) field_cale_ev2_pane_g1_ParamLimits

0x5cdd,	// (0x000249b7) field_cale_ev2_pane_g1

0x5ce9,	// (0x000249c3) field_cale_ev2_pane_g2_ParamLimits

0x5ce9,	// (0x000249c3) field_cale_ev2_pane_g2

0x5d01,	// (0x000249db) field_cale_ev2_pane_g3_ParamLimits

0x5d01,	// (0x000249db) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0002e43f) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0002e43f) field_cale_ev2_pane_g

0x5d19,	// (0x000249f3) field_cale_ev2_pane_t1_ParamLimits

0x5d19,	// (0x000249f3) field_cale_ev2_pane_t1

0x5d30,	// (0x00024a0a) field_cale_ev2_pane_t2_ParamLimits

0x5d30,	// (0x00024a0a) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0002e448) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0002e448) field_cale_ev2_pane_t

0x4d88,	// (0x00023a62) main_postcard_pane_g5_ParamLimits

0x4d88,	// (0x00023a62) main_postcard_pane_g5

0x4d96,	// (0x00023a70) main_postcard_pane_g6_ParamLimits

0x4d96,	// (0x00023a70) main_postcard_pane_g6

0x2d61,	// (0x00021a3b) camera2_autofocus_pane_cp_ParamLimits

0x2d61,	// (0x00021a3b) camera2_autofocus_pane_cp

0xa5f8,	// (0x000292d2) main_mup3_pane

0x5d65,	// (0x00024a3f) main_mup3_pane_g1_ParamLimits

0x5d65,	// (0x00024a3f) main_mup3_pane_g1

0x5d86,	// (0x00024a60) main_mup3_pane_g2_ParamLimits

0x5d86,	// (0x00024a60) main_mup3_pane_g2

0x5e02,	// (0x00024adc) main_mup3_pane_g3_ParamLimits

0x5e02,	// (0x00024adc) main_mup3_pane_g3

0x5e47,	// (0x00024b21) main_mup3_pane_g4_ParamLimits

0x5e47,	// (0x00024b21) main_mup3_pane_g4

0x5e8a,	// (0x00024b64) main_mup3_pane_g5_ParamLimits

0x5e8a,	// (0x00024b64) main_mup3_pane_g5

0x5ecf,	// (0x00024ba9) main_mup3_pane_g6_ParamLimits

0x5ecf,	// (0x00024ba9) main_mup3_pane_g6

0xc9d8,	// (0x0002b6b2) main_mup3_pane_g7_ParamLimits

0xc9d8,	// (0x0002b6b2) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0002e458) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0002e458) main_mup3_pane_g

0x5f45,	// (0x00024c1f) main_mup3_pane_t1_ParamLimits

0x5f45,	// (0x00024c1f) main_mup3_pane_t1

0x5fae,	// (0x00024c88) main_mup3_pane_t2_ParamLimits

0x5fae,	// (0x00024c88) main_mup3_pane_t2

0x6077,	// (0x00024d51) main_mup3_pane_t4_ParamLimits

0x6077,	// (0x00024d51) main_mup3_pane_t4

0x60cb,	// (0x00024da5) main_mup3_pane_t5_ParamLimits

0x60cb,	// (0x00024da5) main_mup3_pane_t5

0x6179,	// (0x00024e53) main_mup3_pane_t6_ParamLimits

0x6179,	// (0x00024e53) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0002e469) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0002e469) main_mup3_pane_t

0x6225,	// (0x00024eff) mup3_progress_pane_ParamLimits

0x6225,	// (0x00024eff) mup3_progress_pane

0x629f,	// (0x00024f79) popup_mup3_control_window_ParamLimits

0x629f,	// (0x00024f79) popup_mup3_control_window

0xc9e6,	// (0x0002b6c0) popup_mup3_text_window

0x62bc,	// (0x00024f96) mup3_progress_pane_t1

0x62db,	// (0x00024fb5) mup3_progress_pane_t2

0xc9ee,	// (0x0002b6c8) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0002e476) mup3_progress_pane_t

0xca0b,	// (0x0002b6e5) mup_progress_pane_cp03

0x9beb,	// (0x000288c5) bg_tb_trans_pane_cp04

0x62fa,	// (0x00024fd4) mup3_volume_pane

0x6302,	// (0x00024fdc) popup_mup3_control_window_g1

0xd0b1,	// (0x0002bd8b) mup3_volume_pane_g1

0xd0ba,	// (0x0002bd94) mup3_volume_pane_g2

0xd0c3,	// (0x0002bd9d) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0002e47d) mup3_volume_pane_g

0x9beb,	// (0x000288c5) bg_tb_trans_pane_cp03

0xca1b,	// (0x0002b6f5) popup_mup3_text_window_g1

0xca23,	// (0x0002b6fd) popup_mup3_text_window_t1

0xa3c7,	// (0x000290a1) list_calc_item_pane_g1_ParamLimits

0xc484,	// (0x0002b15e) mup_volume_pane_cp_g1

0x5c9b,	// (0x00024975) main_touch_calib_pane_t3

0x5cb1,	// (0x0002498b) main_touch_calib_pane_t4

0x5cc7,	// (0x000249a1) main_touch_calib_pane_t5

0x9bf5,	// (0x000288cf) aid_cell_size_toolbar2

0x9bfd,	// (0x000288d7) aid_popup3_width_pane

0x9c09,	// (0x000288e3) aid_zoom_text_msg_primary

0x2d3e,	// (0x00021a18) vorec_t7

0xa38b,	// (0x00029065) bg_calc_paper_pane_g1_ParamLimits

0xa397,	// (0x00029071) bg_calc_paper_pane_g2_ParamLimits

0xa3a3,	// (0x0002907d) bg_calc_paper_pane_g3_ParamLimits

0xa3af,	// (0x00029089) bg_calc_paper_pane_g4_ParamLimits

0xa3bb,	// (0x00029095) bg_calc_paper_pane_g5_ParamLimits

0x25b0,	// (0x0002128a) bg_calc_paper_pane_g6_ParamLimits

0x25c1,	// (0x0002129b) bg_calc_paper_pane_g7_ParamLimits

0x25d2,	// (0x000212ac) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0002de32) bg_calc_paper_pane_g_ParamLimits

0x25e5,	// (0x000212bf) calc_bg_paper_pane_g9_ParamLimits

0x2e52,	// (0x00021b2c) image_qvga_pane_ParamLimits

0x2e52,	// (0x00021b2c) image_qvga_pane

0xa2ba,	// (0x00028f94) bg_popup_sub_pane_cp04_ParamLimits

0xb0d0,	// (0x00029daa) popup_mup_playback_window_g1_ParamLimits

0xb0dc,	// (0x00029db6) popup_mup_playback_window_t1_ParamLimits

0xb0f1,	// (0x00029dcb) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002e1bc) popup_mup_playback_window_t_ParamLimits

0x57d7,	// (0x000244b1) main_mup2_pane_g3_ParamLimits

0x57d7,	// (0x000244b1) main_mup2_pane_g3

0x3215,	// (0x00021eef) popup_toolbar_window_cp04

0xb4ec,	// (0x0002a1c6) popup_call2_audio_second_window_g3_ParamLimits

0xb4ec,	// (0x0002a1c6) popup_call2_audio_second_window_g3

0xb8f6,	// (0x0002a5d0) popup_call2_audio_first_window_g4_ParamLimits

0xb8f6,	// (0x0002a5d0) popup_call2_audio_first_window_g4

0xbf75,	// (0x0002ac4f) popup_call2_audio_in_window_g4_ParamLimits

0xbf75,	// (0x0002ac4f) popup_call2_audio_in_window_g4

0x4e9c,	// (0x00023b76) aid_area_sk_bg_cut_ParamLimits

0x4e9c,	// (0x00023b76) aid_area_sk_bg_cut

0xb106,	// (0x00029de0) aid_area_sk_bg_cut_2_ParamLimits

0xb106,	// (0x00029de0) aid_area_sk_bg_cut_2

0x5aed,	// (0x000247c7) aid_placing_details_win

0x5af5,	// (0x000247cf) aid_placing_details_win_2

0xc879,	// (0x0002b553) camera2_autofocus_pane_g1_ParamLimits

0x2274,	// (0x00020f4e) popup_fixed_preview_cale_window_ParamLimits

0x2274,	// (0x00020f4e) popup_fixed_preview_cale_window

0xae84,	// (0x00029b5e) navi_slider_pane_g3

0xae8d,	// (0x00029b67) navi_slider_pane_g4

0xae96,	// (0x00029b70) navi_slider_pane_g5

0xae84,	// (0x00029b5e) navi_slider_pane_g6

0x0f75,	// (0x0001fc4f) navi_slider_pane_g7

0xafb7,	// (0x00029c91) mup_scale_pane_g3

0xafc0,	// (0x00029c9a) mup_scale_pane_g4

0xafc9,	// (0x00029ca3) mup_scale_pane_g5

0x4c05,	// (0x000238df) mup_scale_pane_g6

0x4c0e,	// (0x000238e8) mup_scale_pane_g7

0xae84,	// (0x00029b5e) cams2_slider_pane_g3

0xc506,	// (0x0002b1e0) cams2_slider_pane_g4

0x12c9,	// (0x0001ffa3) cams2_slider_pane_g5

0xae84,	// (0x00029b5e) cams2_slider_pane_g6

0x12d1,	// (0x0001ffab) cams2_slider_pane_g7

0xc737,	// (0x0002b411) camera2_autofocus_pane_cp_g1

0xc2da,	// (0x0002afb4) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2da,	// (0x0002afb4) bg_popup_preview_window_pane_cp02

0xca31,	// (0x0002b70b) list_fp_cale_pane_ParamLimits

0xca31,	// (0x0002b70b) list_fp_cale_pane

0xca3d,	// (0x0002b717) popup_fixed_preview_cale_window_t1_ParamLimits

0xca3d,	// (0x0002b717) popup_fixed_preview_cale_window_t1

0x630b,	// (0x00024fe5) popup_fixed_preview_cale_window_t2_ParamLimits

0x630b,	// (0x00024fe5) popup_fixed_preview_cale_window_t2

0x6320,	// (0x00024ffa) popup_fixed_preview_cale_window_t3_ParamLimits

0x6320,	// (0x00024ffa) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0002e484) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0002e484) popup_fixed_preview_cale_window_t

0x6335,	// (0x0002500f) list_single_fp_cale_pane_ParamLimits

0x6335,	// (0x0002500f) list_single_fp_cale_pane

0xca5b,	// (0x0002b735) list_single_fp_cale_pane_g1_ParamLimits

0xca5b,	// (0x0002b735) list_single_fp_cale_pane_g1

0xca67,	// (0x0002b741) list_single_fp_cale_pane_g2_ParamLimits

0xca67,	// (0x0002b741) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0002e48b) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0002e48b) list_single_fp_cale_pane_g

0xca80,	// (0x0002b75a) list_single_fp_cale_pane_t1_ParamLimits

0xca80,	// (0x0002b75a) list_single_fp_cale_pane_t1

0xca92,	// (0x0002b76c) list_single_fp_cale_pane_t2_ParamLimits

0xca92,	// (0x0002b76c) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0002e492) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0002e492) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9beb,	// (0x000288c5) main_dialer_pane

0x6345,	// (0x0002501f) aid_cell_size_keypad

0x634f,	// (0x00025029) dialer_ne_pane

0x6359,	// (0x00025033) grid_dialer_command_1_pane

0x6361,	// (0x0002503b) grid_dialer_command_2_pane

0x6369,	// (0x00025043) grid_dialer_keypad_pane

0x637d,	// (0x00025057) bg_popup_call_pane_cp06_ParamLimits

0x637d,	// (0x00025057) bg_popup_call_pane_cp06

0x6389,	// (0x00025063) dialer_ne_clear_pane_ParamLimits

0x6389,	// (0x00025063) dialer_ne_clear_pane

0xcac5,	// (0x0002b79f) dialer_ne_pane_g1

0xcacd,	// (0x0002b7a7) dialer_ne_pane_t1_ParamLimits

0xcacd,	// (0x0002b7a7) dialer_ne_pane_t1

0x6395,	// (0x0002506f) dialer_ne_pane_t2_ParamLimits

0x6395,	// (0x0002506f) dialer_ne_pane_t2

0x63b2,	// (0x0002508c) dialer_ne_pane_t3_ParamLimits

0x63b2,	// (0x0002508c) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0002e497) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0002e497) dialer_ne_pane_t

0x63d6,	// (0x000250b0) dialer_ne_pane_t3_copy1_ParamLimits

0x63d6,	// (0x000250b0) dialer_ne_pane_t3_copy1

0x63fa,	// (0x000250d4) cell_dialer_keypad_pane_ParamLimits

0x63fa,	// (0x000250d4) cell_dialer_keypad_pane

0x6411,	// (0x000250eb) cell_dialer_command_1_pane_ParamLimits

0x6411,	// (0x000250eb) cell_dialer_command_1_pane

0x6427,	// (0x00025101) cell_dialer_command_2_pane_ParamLimits

0x6427,	// (0x00025101) cell_dialer_command_2_pane

0xcadf,	// (0x0002b7b9) bg_button_pane_cp02_ParamLimits

0xcadf,	// (0x0002b7b9) bg_button_pane_cp02

0x6436,	// (0x00025110) cell_dialer_keypad_pane_g1_ParamLimits

0x6436,	// (0x00025110) cell_dialer_keypad_pane_g1

0xcadf,	// (0x0002b7b9) bg_button_pane_cp03_ParamLimits

0xcadf,	// (0x0002b7b9) bg_button_pane_cp03

0x644b,	// (0x00025125) cell_dialer_command_1_pane_g1_ParamLimits

0x644b,	// (0x00025125) cell_dialer_command_1_pane_g1

0xcaeb,	// (0x0002b7c5) bg_button_pane_cp04

0x645f,	// (0x00025139) cell_dialer_command_2_pane_g1

0xa535,	// (0x0002920f) bg_button_pane_cp06

0xcaf3,	// (0x0002b7cd) dialer_ne_clear_pane_g1

0x46cf,	// (0x000233a9) navi_pane_g2

0x46fd,	// (0x000233d7) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002e0bf) navi_pane_g

0x4728,	// (0x00023402) navi_pane_mv_g2

0x474f,	// (0x00023429) navi_pane_mv_g5

0x4757,	// (0x00023431) navi_pane_mv_t1

0xa37f,	// (0x00029059) main_clock2_pane

0x649d,	// (0x00025177) main_clock2_list_pane_ParamLimits

0x649d,	// (0x00025177) main_clock2_list_pane

0x64c7,	// (0x000251a1) main_clock2_pane_t1_ParamLimits

0x64c7,	// (0x000251a1) main_clock2_pane_t1

0x64e9,	// (0x000251c3) main_clock2_pane_t2_ParamLimits

0x64e9,	// (0x000251c3) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002e4a3) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002e4a3) main_clock2_pane_t

0x6546,	// (0x00025220) popup_clock_analogue_window_cp03_ParamLimits

0x6546,	// (0x00025220) popup_clock_analogue_window_cp03

0x6566,	// (0x00025240) popup_clock_digital_window_cp02_ParamLimits

0x6566,	// (0x00025240) popup_clock_digital_window_cp02

0x65d7,	// (0x000252b1) main_clock2_list_single_pane_ParamLimits

0x65d7,	// (0x000252b1) main_clock2_list_single_pane

0xa535,	// (0x0002920f) list_highlight_pane_cp05

0xcb2f,	// (0x0002b809) main_clock2_list_single_pane_t1

0x3215,	// (0x00021eef) popup_toolbar_window_cp04_ParamLimits

0x5b56,	// (0x00024830) camera2_autofocus_pane_g2_ParamLimits

0x5b56,	// (0x00024830) camera2_autofocus_pane_g2

0x5b62,	// (0x0002483c) camera2_autofocus_pane_g3_ParamLimits

0x5b62,	// (0x0002483c) camera2_autofocus_pane_g3

0x5b6e,	// (0x00024848) camera2_autofocus_pane_g4_ParamLimits

0x5b6e,	// (0x00024848) camera2_autofocus_pane_g4

0x5b7a,	// (0x00024854) camera2_autofocus_pane_g5_ParamLimits

0x5b7a,	// (0x00024854) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0002e3e7) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0002e3e7) camera2_autofocus_pane_g

0x5d45,	// (0x00024a1f) camera2_autofocus_pane_cp_g2

0x5d4d,	// (0x00024a27) camera2_autofocus_pane_cp_g3

0x5d55,	// (0x00024a2f) camera2_autofocus_pane_cp_g4

0x5d5d,	// (0x00024a37) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0002e44d) camera2_autofocus_pane_cp_g

0x6375,	// (0x0002504f) popup_dialer_spcha_window

0x9beb,	// (0x000288c5) bg_popup_sub_pane_cp07

0xcb3d,	// (0x0002b817) list_spcha_pane

0xcb45,	// (0x0002b81f) list_single_spcha_pane_ParamLimits

0xcb45,	// (0x0002b81f) list_single_spcha_pane

0x9beb,	// (0x000288c5) list_highlight_pane_cp06

0xcb56,	// (0x0002b830) list_single_spcha_pane_t1

0xbd1f,	// (0x0002a9f9) popup_call2_audio_out_window_g4_ParamLimits

0xbd1f,	// (0x0002a9f9) popup_call2_audio_out_window_g4

0x9beb,	// (0x000288c5) main_imed2_pane

0xc312,	// (0x0002afec) popup_imed_adjust2_window

0x54cc,	// (0x000241a6) popup_imed_trans_window_ParamLimits

0x54cc,	// (0x000241a6) popup_imed_trans_window

0xc56f,	// (0x0002b249) popup_blid_sat_info2_window_t1

0xc57d,	// (0x0002b257) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0002e37c) popup_blid_sat_info2_window_t

0x6609,	// (0x000252e3) aid_size_cell_colour_35

0x6623,	// (0x000252fd) aid_size_cell_colour_112

0x663a,	// (0x00025314) aid_size_cell_effect

0xa5f8,	// (0x000292d2) bg_tb_trans_pane_cp02

0xaf71,	// (0x00029c4b) heading_imed_pane

0x6654,	// (0x0002532e) listscroll_imed_pane

0xcb64,	// (0x0002b83e) heading_imed_pane_g1

0xcb6c,	// (0x0002b846) heading_imed_pane_t1

0xcb7a,	// (0x0002b854) grid_imed_colour_35_pane_ParamLimits

0xcb7a,	// (0x0002b854) grid_imed_colour_35_pane

0x6660,	// (0x0002533a) grid_imed_effect_pane

0xcb96,	// (0x0002b870) list_imed_aspect_pane

0x6670,	// (0x0002534a) scroll_pane_cp027_ParamLimits

0x6670,	// (0x0002534a) scroll_pane_cp027

0x667c,	// (0x00025356) cell_imed_effect_pane_ParamLimits

0x667c,	// (0x00025356) cell_imed_effect_pane

0xcb9e,	// (0x0002b878) cell_imed_colour_pane_ParamLimits

0xcb9e,	// (0x0002b878) cell_imed_colour_pane

0xcbe8,	// (0x0002b8c2) cell_imed_colour_pane_g1_ParamLimits

0xcbe8,	// (0x0002b8c2) cell_imed_colour_pane_g1

0xcbf9,	// (0x0002b8d3) hgihlgiht_grid_pane_cp016_ParamLimits

0xcbf9,	// (0x0002b8d3) hgihlgiht_grid_pane_cp016

0x6698,	// (0x00025372) cell_imed_effect_pane_g1

0x66a0,	// (0x0002537a) grid_highlight_pane_cp017

0xcc0a,	// (0x0002b8e4) list_imed_single_pane_ParamLimits

0xcc0a,	// (0x0002b8e4) list_imed_single_pane

0x9beb,	// (0x000288c5) list_highlight_pane_cp07

0xcc1e,	// (0x0002b8f8) list_imed_aspect_pane_comp1_t1

0xc2e6,	// (0x0002afc0) bg_tb_trans_pane_cp05

0xcc40,	// (0x0002b91a) popup_imed_adjust2_window_g1

0xcc67,	// (0x0002b941) popup_imed_adjust2_window_t1

0xcc7f,	// (0x0002b959) slider_imed_adjust_pane

0xcc93,	// (0x0002b96d) slider_imed_adjust_pane_g1

0xcca3,	// (0x0002b97d) slider_imed_adjust_pane_g2

0xccb3,	// (0x0002b98d) slider_imed_adjust_pane_g3

0xccc4,	// (0x0002b99e) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002e4c0) slider_imed_adjust_pane_g

0x66a9,	// (0x00025383) aid_size_cell_clipart2

0x66b5,	// (0x0002538f) grid_imed_clipart_pane

0xccd5,	// (0x0002b9af) scroll_pane_cp031

0x66bf,	// (0x00025399) cell_imed_clipart_pane_ParamLimits

0x66bf,	// (0x00025399) cell_imed_clipart_pane

0x66dd,	// (0x000253b7) cell_imed_clipart_pane_g1

0x9beb,	// (0x000288c5) grid_highlight_pane_cp014

0x64a9,	// (0x00025183) main_clock2_pane_g1_ParamLimits

0x64a9,	// (0x00025183) main_clock2_pane_g1

0x6582,	// (0x0002525c) aid_call2_pane_cp10

0x6594,	// (0x0002526e) aid_call_pane_cp10

0xadb0,	// (0x00029a8a) popup_clock_analogue_window_cp10_g1

0xadb0,	// (0x00029a8a) popup_clock_analogue_window_cp10_g2

0x65a6,	// (0x00025280) popup_clock_analogue_window_cp10_g3

0x65a6,	// (0x00025280) popup_clock_analogue_window_cp10_g4

0xadb0,	// (0x00029a8a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002e4ae) popup_clock_analogue_window_cp10_g

0x65b8,	// (0x00025292) popup_clock_analogue_window_cp10_t1

0x12da,	// (0x0001ffb4) clock_digital_number_pane_cp10_ParamLimits

0x12da,	// (0x0001ffb4) clock_digital_number_pane_cp10

0x12f2,	// (0x0001ffcc) clock_digital_number_pane_cp11_ParamLimits

0x12f2,	// (0x0001ffcc) clock_digital_number_pane_cp11

0x130a,	// (0x0001ffe4) clock_digital_number_pane_cp12_ParamLimits

0x130a,	// (0x0001ffe4) clock_digital_number_pane_cp12

0x1322,	// (0x0001fffc) clock_digital_number_pane_cp13_ParamLimits

0x1322,	// (0x0001fffc) clock_digital_number_pane_cp13

0x133a,	// (0x00020014) clock_digital_separator_pane_cp10_ParamLimits

0x133a,	// (0x00020014) clock_digital_separator_pane_cp10

0x65e9,	// (0x000252c3) popup_clock_digital_window_cp02_t1_ParamLimits

0x65e9,	// (0x000252c3) popup_clock_digital_window_cp02_t1

0xa2b2,	// (0x00028f8c) clock_digital_number_pane_cp10_g1

0xa2b2,	// (0x00028f8c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002e4c9) clock_digital_number_pane_cp10_g

0xa2b2,	// (0x00028f8c) clock_digital_separator_pane_cp10_g1

0xa2b2,	// (0x00028f8c) clock_digital_separator_pane_g2_cp10

0xae4b,	// (0x00029b25) navi_pane_vded_g4

0xae54,	// (0x00029b2e) navi_pane_vded_g5

0xae5d,	// (0x00029b37) navi_pane_vded_t1

0x9beb,	// (0x000288c5) main_vded_pane

0x66e6,	// (0x000253c0) main_vded_pane_g1

0x66f2,	// (0x000253cc) main_vded_pane_g2

0x66fc,	// (0x000253d6) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002e4ce) main_vded_pane_g

0x6706,	// (0x000253e0) main_vded_pane_t1

0x6714,	// (0x000253ee) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002e4d5) main_vded_pane_t

0x6722,	// (0x000253fc) vded_slider_pane

0x672c,	// (0x00025406) vded_video_pane

0xccdd,	// (0x0002b9b7) vded_video_pane_g1

0x6738,	// (0x00025412) vded_video_pane_g2

0xc737,	// (0x0002b411) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002e4da) vded_video_pane_g

0xcce7,	// (0x0002b9c1) vded_slider_pane_g1

0xc484,	// (0x0002b15e) vded_slider_pane_g2

0xccf0,	// (0x0002b9ca) vded_slider_pane_g3

0xccf9,	// (0x0002b9d3) vded_slider_pane_g4

0xcd02,	// (0x0002b9dc) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002e4e1) vded_slider_pane_g

0x6293,	// (0x00024f6d) mup3_rocker_pane_ParamLimits

0x6293,	// (0x00024f6d) mup3_rocker_pane

0x6741,	// (0x0002541b) mup3_control_keys_pane_g1

0x6749,	// (0x00025423) mup3_control_keys_pane_g2

0x6751,	// (0x0002542b) mup3_control_keys_pane_g3

0x6759,	// (0x00025433) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002e4ec) mup3_control_keys_pane_g

0x2292,	// (0x00020f6c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2292,	// (0x00020f6c) popup_toolbar2_fixed_window_cp01

0x62af,	// (0x00024f89) popup_toolbar2_fixed_window_cp02_ParamLimits

0x62af,	// (0x00024f89) popup_toolbar2_fixed_window_cp02

0xb65e,	// (0x0002a338) popup_call2_audio_second_window_t4_ParamLimits

0xb65e,	// (0x0002a338) popup_call2_audio_second_window_t4

0xbb8c,	// (0x0002a866) popup_call2_audio_first_window_t6_ParamLimits

0xbb8c,	// (0x0002a866) popup_call2_audio_first_window_t6

0xbe22,	// (0x0002aafc) popup_call2_audio_out_window_t6_ParamLimits

0xbe22,	// (0x0002aafc) popup_call2_audio_out_window_t6

0x9beb,	// (0x000288c5) main_vitu_pane

0x6769,	// (0x00025443) aid_size_cell_itu_ParamLimits

0x6769,	// (0x00025443) aid_size_cell_itu

0x22c4,	// (0x00020f9e) bg_popup_window_pane_cp08_ParamLimits

0x22c4,	// (0x00020f9e) bg_popup_window_pane_cp08

0x6777,	// (0x00025451) field_vitu_entry_pane_ParamLimits

0x6777,	// (0x00025451) field_vitu_entry_pane

0x6786,	// (0x00025460) grid_vitu_function_pane_ParamLimits

0x6786,	// (0x00025460) grid_vitu_function_pane

0x6796,	// (0x00025470) grid_vitu_itu_pane_ParamLimits

0x6796,	// (0x00025470) grid_vitu_itu_pane

0x67a6,	// (0x00025480) cell_vitu_itu_pane_ParamLimits

0x67a6,	// (0x00025480) cell_vitu_itu_pane

0x67bd,	// (0x00025497) cell_vitu_function_pane_ParamLimits

0x67bd,	// (0x00025497) cell_vitu_function_pane

0xa5f8,	// (0x000292d2) bg_popup_sub_pane_cp08_ParamLimits

0xa5f8,	// (0x000292d2) bg_popup_sub_pane_cp08

0x67d1,	// (0x000254ab) field_vitu_entry_pane_t1_ParamLimits

0x67d1,	// (0x000254ab) field_vitu_entry_pane_t1

0xcd23,	// (0x0002b9fd) field_vitu_entry_pane_t2_ParamLimits

0xcd23,	// (0x0002b9fd) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002e4fa) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002e4fa) field_vitu_entry_pane_t

0xcd40,	// (0x0002ba1a) bg_button_pane_cp05_ParamLimits

0xcd40,	// (0x0002ba1a) bg_button_pane_cp05

0x67eb,	// (0x000254c5) cell_vitu_itu_pane_g1

0x6803,	// (0x000254dd) cell_vitu_itu_pane_t1_ParamLimits

0x6803,	// (0x000254dd) cell_vitu_itu_pane_t1

0x6815,	// (0x000254ef) cell_vitu_itu_pane_t2_ParamLimits

0x6815,	// (0x000254ef) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002e4ff) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002e4ff) cell_vitu_itu_pane_t

0xcd4e,	// (0x0002ba28) bg_button_pane_cp07

0x6858,	// (0x00025532) cell_vitu_function_pane_g1

0x0b32,	// (0x0001f80c) main_calc_pane_g1

0x2096,	// (0x00020d70) aid_visual_content_pane

0x9beb,	// (0x000288c5) main_vradio_pane

0x6861,	// (0x0002553b) main_vradio_pane_g1_ParamLimits

0x6861,	// (0x0002553b) main_vradio_pane_g1

0xcd58,	// (0x0002ba32) main_vradio_pane_g2_ParamLimits

0xcd58,	// (0x0002ba32) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002e506) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002e506) main_vradio_pane_g

0x686f,	// (0x00025549) main_vradio_pane_t1_ParamLimits

0x686f,	// (0x00025549) main_vradio_pane_t1

0x6881,	// (0x0002555b) main_vradio_pane_t2_ParamLimits

0x6881,	// (0x0002555b) main_vradio_pane_t2

0xcd65,	// (0x0002ba3f) main_vradio_pane_t3_ParamLimits

0xcd65,	// (0x0002ba3f) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002e50b) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002e50b) main_vradio_pane_t

0x6893,	// (0x0002556d) vradio_rocker_control_pane_ParamLimits

0x6893,	// (0x0002556d) vradio_rocker_control_pane

0x689f,	// (0x00025579) vradio_station_info_pane_ParamLimits

0x689f,	// (0x00025579) vradio_station_info_pane

0xcd79,	// (0x0002ba53) vradio_frequency_info_pane_ParamLimits

0xcd79,	// (0x0002ba53) vradio_frequency_info_pane

0xc737,	// (0x0002b411) vradio_station_info_pane_g1

0xcd88,	// (0x0002ba62) vradio_station_info_pane_t1_ParamLimits

0xcd88,	// (0x0002ba62) vradio_station_info_pane_t1

0xcdaa,	// (0x0002ba84) vradio_station_info_pane_t2_ParamLimits

0xcdaa,	// (0x0002ba84) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002e512) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002e512) vradio_station_info_pane_t

0xcdbc,	// (0x0002ba96) vradio_tuning_pane

0xcdc4,	// (0x0002ba9e) vradio_rocker_control_pane_g1

0xcdcc,	// (0x0002baa6) vradio_rocker_control_pane_g2

0xcdd4,	// (0x0002baae) vradio_rocker_control_pane_g3

0xcddc,	// (0x0002bab6) vradio_rocker_control_pane_g4

0xcde4,	// (0x0002babe) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002e517) vradio_rocker_control_pane_g

0x68ac,	// (0x00025586) vradio_frequency_info_pane_g1

0xcdec,	// (0x0002bac6) vradio_frequency_info_pane_t1_ParamLimits

0xcdec,	// (0x0002bac6) vradio_frequency_info_pane_t1

0x68b6,	// (0x00025590) vradio_tuning_pane_g1

0x68c1,	// (0x0002559b) vradio_tuning_pane_t1

0x9c19,	// (0x000288f3) area_side_right_pane_ParamLimits

0x9c19,	// (0x000288f3) area_side_right_pane

0xc2a1,	// (0x0002af7b) status_small_pane_g1

0xc2a9,	// (0x0002af83) status_small_pane_g2

0xc2b2,	// (0x0002af8c) status_small_pane_g3

0xc2bb,	// (0x0002af95) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0002e2d2) status_small_pane_g

0xc2c4,	// (0x0002af9e) status_small_pane_t1

0x9beb,	// (0x000288c5) main_video3_pane

0xce00,	// (0x0002bada) cams_zoom_vslider_pane

0xce08,	// (0x0002bae2) image3_wide_pane_ParamLimits

0xce08,	// (0x0002bae2) image3_wide_pane

0xce22,	// (0x0002bafc) image3_wide_small_pane

0xce2e,	// (0x0002bb08) main_video3_pane_g1_ParamLimits

0xce2e,	// (0x0002bb08) main_video3_pane_g1

0xce4a,	// (0x0002bb24) main_video3_pane_g2_ParamLimits

0xce4a,	// (0x0002bb24) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002e522) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002e522) main_video3_pane_g

0xce66,	// (0x0002bb40) main_video3_pane_t1_ParamLimits

0xce66,	// (0x0002bb40) main_video3_pane_t1

0xce91,	// (0x0002bb6b) main_video3_pane_t2_ParamLimits

0xce91,	// (0x0002bb6b) main_video3_pane_t2

0xcebe,	// (0x0002bb98) main_video3_pane_t3_ParamLimits

0xcebe,	// (0x0002bb98) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002e527) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002e527) main_video3_pane_t

0xceeb,	// (0x0002bbc5) cams_zoom_vslider_pane_g1

0xcef4,	// (0x0002bbce) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002e52e) cams_zoom_vslider_pane_g

0xcefc,	// (0x0002bbd6) small_slider_vertical_pane

0xc737,	// (0x0002b411) small_slider_vertical_pane_g1

0xc737,	// (0x0002b411) small_slider_vertical_pane_g2

0xcf04,	// (0x0002bbde) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002e533) small_slider_vertical_pane_g

0x9beb,	// (0x000288c5) main_hwr_training_pane

0xcf0d,	// (0x0002bbe7) hwr_training_instruct_pane_ParamLimits

0xcf0d,	// (0x0002bbe7) hwr_training_instruct_pane

0x68d0,	// (0x000255aa) hwr_training_navi_pane_ParamLimits

0x68d0,	// (0x000255aa) hwr_training_navi_pane

0x68ea,	// (0x000255c4) hwr_training_write_pane_ParamLimits

0x68ea,	// (0x000255c4) hwr_training_write_pane

0x9beb,	// (0x000288c5) bg_frame_shadow_pane

0xcf44,	// (0x0002bc1e) hwr_training_write_pane_g1

0xcf4c,	// (0x0002bc26) hwr_training_write_pane_g2

0xcf54,	// (0x0002bc2e) hwr_training_write_pane_g3

0xcf5c,	// (0x0002bc36) hwr_training_write_pane_g4

0xcf64,	// (0x0002bc3e) hwr_training_write_pane_g5

0xcf6c,	// (0x0002bc46) hwr_training_write_pane_g6

0xcf74,	// (0x0002bc4e) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002e53a) hwr_training_write_pane_g

0x1352,	// (0x0002002c) hwr_training_navi_pane_g1_ParamLimits

0x1352,	// (0x0002002c) hwr_training_navi_pane_g1

0x1364,	// (0x0002003e) hwr_training_navi_pane_g2_ParamLimits

0x1364,	// (0x0002003e) hwr_training_navi_pane_g2

0x1376,	// (0x00020050) hwr_training_navi_pane_g3_ParamLimits

0x1376,	// (0x00020050) hwr_training_navi_pane_g3

0x1386,	// (0x00020060) hwr_training_navi_pane_g4_ParamLimits

0x1386,	// (0x00020060) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002e549) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002e549) hwr_training_navi_pane_g

0x13a0,	// (0x0002007a) hwr_training_navi_pane_t1

0x6922,	// (0x000255fc) list_single_hwr_training_instruct_pane_ParamLimits

0x6922,	// (0x000255fc) list_single_hwr_training_instruct_pane

0xcf7c,	// (0x0002bc56) list_single_hwr_training_instruct_pane_t1

0xc677,	// (0x0002b351) bg_frame_shadow_pane_g1

0xcf8b,	// (0x0002bc65) bg_frame_shadow_pane_g2

0xcf93,	// (0x0002bc6d) bg_frame_shadow_pane_g3

0xcf9b,	// (0x0002bc75) bg_frame_shadow_pane_g4

0xcfa3,	// (0x0002bc7d) bg_frame_shadow_pane_g5

0xcfab,	// (0x0002bc85) bg_frame_shadow_pane_g6

0xcfb3,	// (0x0002bc8d) bg_frame_shadow_pane_g7

0xa44a,	// (0x00029124) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002e554) bg_frame_shadow_pane_g

0x9beb,	// (0x000288c5) main_video_tele_dialer_pane

0x13ae,	// (0x00020088) aid_size_cell_video_keypad_ParamLimits

0x13ae,	// (0x00020088) aid_size_cell_video_keypad

0x13be,	// (0x00020098) grid_video_dialer_keypad_pane_ParamLimits

0x13be,	// (0x00020098) grid_video_dialer_keypad_pane

0x13f0,	// (0x000200ca) video_down_pane_cp_ParamLimits

0x13f0,	// (0x000200ca) video_down_pane_cp

0x13fc,	// (0x000200d6) cell_video_dialer_keypad_pane_ParamLimits

0x13fc,	// (0x000200d6) cell_video_dialer_keypad_pane

0xcfbb,	// (0x0002bc95) bg_button_pane_cp08_ParamLimits

0xcfbb,	// (0x0002bc95) bg_button_pane_cp08

0x6957,	// (0x00025631) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6957,	// (0x00025631) cell_video_dialer_keypad_pane_g1

0x6287,	// (0x00024f61) mup3_rocker2_pane_ParamLimits

0x6287,	// (0x00024f61) mup3_rocker2_pane

0xc737,	// (0x0002b411) mup3_rocker2_pane_g1

0x544e,	// (0x00024128) main_dialer2_pane

0x9beb,	// (0x000288c5) main_mp4_pane

0x141b,	// (0x000200f5) main_mp4_pane_g1_ParamLimits

0x141b,	// (0x000200f5) main_mp4_pane_g1

0x1429,	// (0x00020103) main_mp4_pane_g2_ParamLimits

0x1429,	// (0x00020103) main_mp4_pane_g2

0x1437,	// (0x00020111) main_mp4_pane_g3_ParamLimits

0x1437,	// (0x00020111) main_mp4_pane_g3

0x148a,	// (0x00020164) main_mp4_pane_g4_ParamLimits

0x148a,	// (0x00020164) main_mp4_pane_g4

0x14b2,	// (0x0002018c) main_mp4_pane_g5_ParamLimits

0x14b2,	// (0x0002018c) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002e574) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002e574) main_mp4_pane_g

0x1502,	// (0x000201dc) main_mp4_pane_t1_ParamLimits

0x1502,	// (0x000201dc) main_mp4_pane_t1

0x155e,	// (0x00020238) main_mp4_pane_t2_ParamLimits

0x155e,	// (0x00020238) main_mp4_pane_t2

0xcfc7,	// (0x0002bca1) main_mp4_pane_t3_ParamLimits

0xcfc7,	// (0x0002bca1) main_mp4_pane_t3

0x15b0,	// (0x0002028a) main_mp4_pane_t4_ParamLimits

0x15b0,	// (0x0002028a) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002e581) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002e581) main_mp4_pane_t

0x15f0,	// (0x000202ca) mp4_progress_pane_ParamLimits

0x15f0,	// (0x000202ca) mp4_progress_pane

0x163a,	// (0x00020314) mp4_rocker_pane_ParamLimits

0x163a,	// (0x00020314) mp4_rocker_pane

0xcfef,	// (0x0002bcc9) mp4_progress_pane_t1

0xd008,	// (0x0002bce2) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002e58a) mp4_progress_pane_t

0xd021,	// (0x0002bcfb) mup_progress_pane_cp04

0xd51a,	// (0x0002c1f4) mp4_rocker_pane_g1

0x165c,	// (0x00020336) aid_cell_size_keypad2_ParamLimits

0x165c,	// (0x00020336) aid_cell_size_keypad2

0x166c,	// (0x00020346) dialer2_ne_pane_ParamLimits

0x166c,	// (0x00020346) dialer2_ne_pane

0x1678,	// (0x00020352) grid_dialer2_keypad_pane_ParamLimits

0x1678,	// (0x00020352) grid_dialer2_keypad_pane

0xd0cc,	// (0x0002bda6) bg_popup_call_pane_cp07_ParamLimits

0xd0cc,	// (0x0002bda6) bg_popup_call_pane_cp07

0x698e,	// (0x00025668) dialer2_ne_pane_t1_ParamLimits

0x698e,	// (0x00025668) dialer2_ne_pane_t1

0x1686,	// (0x00020360) cell_dialer2_keypad_pane_ParamLimits

0x1686,	// (0x00020360) cell_dialer2_keypad_pane

0xd03f,	// (0x0002bd19) bg_button_pane_pane_cp04_ParamLimits

0xd03f,	// (0x0002bd19) bg_button_pane_pane_cp04

0x69b3,	// (0x0002568d) cell_dialer2_keypad_pane_g1_ParamLimits

0x69b3,	// (0x0002568d) cell_dialer2_keypad_pane_g1

0x30e7,	// (0x00021dc1) aid_placing_vt_set_content_ParamLimits

0x30e7,	// (0x00021dc1) aid_placing_vt_set_content

0x310f,	// (0x00021de9) aid_placing_vt_set_title_ParamLimits

0x310f,	// (0x00021de9) aid_placing_vt_set_title

0x9beb,	// (0x000288c5) main_image3_pane

0x16cf,	// (0x000203a9) area_side_right_pane_cp01_ParamLimits

0x16cf,	// (0x000203a9) area_side_right_pane_cp01

0x16fe,	// (0x000203d8) main_image3_pane_g1_ParamLimits

0x16fe,	// (0x000203d8) main_image3_pane_g1

0x170c,	// (0x000203e6) main_image3_pane_g2_ParamLimits

0x170c,	// (0x000203e6) main_image3_pane_g2

0x1725,	// (0x000203ff) main_image3_pane_g3_ParamLimits

0x1725,	// (0x000203ff) main_image3_pane_g3

0x173e,	// (0x00020418) main_image3_pane_g4_ParamLimits

0x173e,	// (0x00020418) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002e599) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002e599) main_image3_pane_g

0x1757,	// (0x00020431) main_image3_pane_t1_ParamLimits

0x1757,	// (0x00020431) main_image3_pane_t1

0x177c,	// (0x00020456) main_image3_pane_t2_ParamLimits

0x177c,	// (0x00020456) main_image3_pane_t2

0x179b,	// (0x00020475) main_image3_pane_t3_ParamLimits

0x179b,	// (0x00020475) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002e5a2) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002e5a2) main_image3_pane_t

0x22c4,	// (0x00020f9e) grid_sctrl_middle_pane_cp01_ParamLimits

0x22c4,	// (0x00020f9e) grid_sctrl_middle_pane_cp01

0x6a1b,	// (0x000256f5) cell_sctrl_middle_pane_cp01_ParamLimits

0x6a1b,	// (0x000256f5) cell_sctrl_middle_pane_cp01

0x6a2c,	// (0x00025706) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6a2c,	// (0x00025706) cell_sctrl_middle_pane_cp01_g1

0x9beb,	// (0x000288c5) main_call4_pane

0x6a39,	// (0x00025713) aid_size_button_call4_ParamLimits

0x6a39,	// (0x00025713) aid_size_button_call4

0x6a6b,	// (0x00025745) call4_windows_pane_ParamLimits

0x6a6b,	// (0x00025745) call4_windows_pane

0x6a87,	// (0x00025761) grid_call4_button_pane_ParamLimits

0x6a87,	// (0x00025761) grid_call4_button_pane

0xd04b,	// (0x0002bd25) call4_windows_conf_pane

0x6aab,	// (0x00025785) popup_call4_audio_first_window_ParamLimits

0x6aab,	// (0x00025785) popup_call4_audio_first_window

0x6ad7,	// (0x000257b1) popup_call4_audio_second_window_ParamLimits

0x6ad7,	// (0x000257b1) popup_call4_audio_second_window

0xd088,	// (0x0002bd62) popup_call4_audio_wait_window_ParamLimits

0xd088,	// (0x0002bd62) popup_call4_audio_wait_window

0x6aeb,	// (0x000257c5) cell_call4_button_pane_ParamLimits

0x6aeb,	// (0x000257c5) cell_call4_button_pane

0x6b0e,	// (0x000257e8) bg_button_pane_cp09_ParamLimits

0x6b0e,	// (0x000257e8) bg_button_pane_cp09

0x6b1a,	// (0x000257f4) cell_call4_button_pane_g1_ParamLimits

0x6b1a,	// (0x000257f4) cell_call4_button_pane_g1

0x6b27,	// (0x00025801) cell_call4_button_pane_t1_ParamLimits

0x6b27,	// (0x00025801) cell_call4_button_pane_t1

0xd114,	// (0x0002bdee) popup_call4_audio_conf_window_ParamLimits

0xd114,	// (0x0002bdee) popup_call4_audio_conf_window

0x62bc,	// (0x00024f96) mup3_progress_pane_t1_ParamLimits

0x62db,	// (0x00024fb5) mup3_progress_pane_t2_ParamLimits

0xc9ee,	// (0x0002b6c8) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0002e476) mup3_progress_pane_t_ParamLimits

0xca0b,	// (0x0002b6e5) mup_progress_pane_cp03_ParamLimits

0x6761,	// (0x0002543b) mup3_control_keys_pane_g4_copy1

0x161e,	// (0x000202f8) mp4_rocker2_pane_ParamLimits

0x161e,	// (0x000202f8) mp4_rocker2_pane

0xd12e,	// (0x0002be08) mp4_rocker2_pane_g1

0xd136,	// (0x0002be10) mp4_rocker2_pane_g2

0x17fc,	// (0x000204d6) mp4_rocker2_pane_g3

0x1804,	// (0x000204de) mp4_rocker2_pane_g4

0x180c,	// (0x000204e6) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002e5ab) mp4_rocker2_pane_g

0x9beb,	// (0x000288c5) main_camera4_pane

0x9beb,	// (0x000288c5) main_video4_pane

0x13cc,	// (0x000200a6) main_video_tele_dialer_pane_t1_ParamLimits

0x13cc,	// (0x000200a6) main_video_tele_dialer_pane_t1

0x13de,	// (0x000200b8) main_video_tele_dialer_pane_t2_ParamLimits

0x13de,	// (0x000200b8) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002e565) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002e565) main_video_tele_dialer_pane_t

0x182c,	// (0x00020506) cam4_autofocus_pane_ParamLimits

0x182c,	// (0x00020506) cam4_autofocus_pane

0x1844,	// (0x0002051e) cam4_image_uncrop_pane_ParamLimits

0x1844,	// (0x0002051e) cam4_image_uncrop_pane

0x185d,	// (0x00020537) cam4_indicators_pane_ParamLimits

0x185d,	// (0x00020537) cam4_indicators_pane

0x1879,	// (0x00020553) main_camera4_pane_g1_ParamLimits

0x1879,	// (0x00020553) main_camera4_pane_g1

0x1885,	// (0x0002055f) main_camera4_pane_g2_ParamLimits

0x1885,	// (0x0002055f) main_camera4_pane_g2

0x1885,	// (0x0002055f) main_camera4_pane_g3_ParamLimits

0x1885,	// (0x0002055f) main_camera4_pane_g3

0x1891,	// (0x0002056b) main_camera4_pane_g4_ParamLimits

0x1891,	// (0x0002056b) main_camera4_pane_g4

0x189d,	// (0x00020577) main_camera4_pane_g5_ParamLimits

0x189d,	// (0x00020577) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002e5b6) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002e5b6) main_camera4_pane_g

0x18b7,	// (0x00020591) main_camera4_pane_t1_ParamLimits

0x18b7,	// (0x00020591) main_camera4_pane_t1

0x18db,	// (0x000205b5) bg_tb_trans_pane_cp06

0x18f1,	// (0x000205cb) cam4_indicators_pane_g1

0x1902,	// (0x000205dc) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002e5d1) cam4_indicators_pane_g

0x191a,	// (0x000205f4) cam4_indicators_pane_t1

0x1944,	// (0x0002061e) main_video4_pane_g1_ParamLimits

0x1944,	// (0x0002061e) main_video4_pane_g1

0x1950,	// (0x0002062a) main_video4_pane_g2_ParamLimits

0x1950,	// (0x0002062a) main_video4_pane_g2

0x195c,	// (0x00020636) main_video4_pane_g3_ParamLimits

0x195c,	// (0x00020636) main_video4_pane_g3

0x1968,	// (0x00020642) main_video4_pane_g4_ParamLimits

0x1968,	// (0x00020642) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002e5d8) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002e5d8) main_video4_pane_g

0x198a,	// (0x00020664) vid4_indicators_pane_ParamLimits

0x198a,	// (0x00020664) vid4_indicators_pane

0x19a9,	// (0x00020683) video4_image_uncrop_cif_pane_ParamLimits

0x19a9,	// (0x00020683) video4_image_uncrop_cif_pane

0x19b8,	// (0x00020692) video4_image_uncrop_nhd_pane_ParamLimits

0x19b8,	// (0x00020692) video4_image_uncrop_nhd_pane

0x1844,	// (0x0002051e) video4_image_uncrop_vga_pane_ParamLimits

0x1844,	// (0x0002051e) video4_image_uncrop_vga_pane

0x19c7,	// (0x000206a1) bg_tb_trans_pane_cp07

0x19df,	// (0x000206b9) vid4_indicators_pane_g1

0x19f5,	// (0x000206cf) vid4_indicators_pane_g2

0x1a09,	// (0x000206e3) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002e5e3) vid4_indicators_pane_g

0x1a3a,	// (0x00020714) vid4_indicators_pane_t1

0x6b5f,	// (0x00025839) cam4_autofocus_pane_g1

0x6b67,	// (0x00025841) cam4_autofocus_pane_g2

0x6b6f,	// (0x00025849) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002e5ee) cam4_autofocus_pane_g

0x6b77,	// (0x00025851) cam4_autofocus_pane_g3_copy1

0x693b,	// (0x00025615) video_down_pane_cp_t1

0x6949,	// (0x00025623) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002e56a) video_down_pane_cp_t

0x22c4,	// (0x00020f9e) popup_vitu2_window_ParamLimits

0x22c4,	// (0x00020f9e) popup_vitu2_window

0x1a51,	// (0x0002072b) aid_size_cell2_itu2_ParamLimits

0x1a51,	// (0x0002072b) aid_size_cell2_itu2

0x1a73,	// (0x0002074d) aid_size_cell_itu2_ParamLimits

0x1a73,	// (0x0002074d) aid_size_cell_itu2

0x1ab9,	// (0x00020793) bg_popup_window_pane_cp09_ParamLimits

0x1ab9,	// (0x00020793) bg_popup_window_pane_cp09

0x1ac7,	// (0x000207a1) field_vitu2_entry_pane_ParamLimits

0x1ac7,	// (0x000207a1) field_vitu2_entry_pane

0x1ae7,	// (0x000207c1) grid_vitu2_function_pane_ParamLimits

0x1ae7,	// (0x000207c1) grid_vitu2_function_pane

0x1b2b,	// (0x00020805) grid_vitu2_itu_pane_ParamLimits

0x1b2b,	// (0x00020805) grid_vitu2_itu_pane

0x1ba7,	// (0x00020881) cell_vitu2_itu_pane_ParamLimits

0x1ba7,	// (0x00020881) cell_vitu2_itu_pane

0x1bbe,	// (0x00020898) cell_vitu2_function_pane_ParamLimits

0x1bbe,	// (0x00020898) cell_vitu2_function_pane

0xd13e,	// (0x0002be18) bg_popup_call_pane_cp08_ParamLimits

0xd13e,	// (0x0002be18) bg_popup_call_pane_cp08

0xd155,	// (0x0002be2f) field_vitu2_entry_pane_g1

0xd161,	// (0x0002be3b) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002e5f5) field_vitu2_entry_pane_g

0x6b7f,	// (0x00025859) field_vitu2_entry_pane_t1_ParamLimits

0x6b7f,	// (0x00025859) field_vitu2_entry_pane_t1

0xd17b,	// (0x0002be55) field_vitu2_entry_pane_t2_ParamLimits

0xd17b,	// (0x0002be55) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002e5fc) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002e5fc) field_vitu2_entry_pane_t

0x1c02,	// (0x000208dc) bg_button_pane_cp010_ParamLimits

0x1c02,	// (0x000208dc) bg_button_pane_cp010

0x1c10,	// (0x000208ea) cell_vitu2_itu_pane_g1

0x1c30,	// (0x0002090a) cell_vitu2_itu_pane_t1_ParamLimits

0x1c30,	// (0x0002090a) cell_vitu2_itu_pane_t1

0x1c7c,	// (0x00020956) cell_vitu2_itu_pane_t2_ParamLimits

0x1c7c,	// (0x00020956) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002e606) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002e606) cell_vitu2_itu_pane_t

0x19c7,	// (0x000206a1) bg_button_pane_cp011

0x1d44,	// (0x00020a1e) cell_vitu2_function_pane_g1

0x9beb,	// (0x000288c5) main_myfav_hc_pane

0x17dd,	// (0x000204b7) popup_image3_note_pane_ParamLimits

0x17dd,	// (0x000204b7) popup_image3_note_pane

0x17eb,	// (0x000204c5) popup_image3_tool_bar_pane_ParamLimits

0x17eb,	// (0x000204c5) popup_image3_tool_bar_pane

0x1cf2,	// (0x000209cc) cell_vitu2_itu_pane_t3_ParamLimits

0x1cf2,	// (0x000209cc) cell_vitu2_itu_pane_t3

0x9beb,	// (0x000288c5) bg_popup_trans_pane

0xd1a0,	// (0x0002be7a) grid_image3_tool_bar_pane

0xd1aa,	// (0x0002be84) bg_popup_trans_pane_g1

0xa7a0,	// (0x0002947a) bg_popup_trans_pane_g2

0xd1b2,	// (0x0002be8c) bg_popup_trans_pane_g3

0xd1ba,	// (0x0002be94) bg_popup_trans_pane_g4

0xd1c2,	// (0x0002be9c) bg_popup_trans_pane_g5

0xd1ca,	// (0x0002bea4) bg_popup_trans_pane_g6

0xd1d2,	// (0x0002beac) bg_popup_trans_pane_g7

0xd1da,	// (0x0002beb4) bg_popup_trans_pane_g8

0xa780,	// (0x0002945a) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002e60d) bg_popup_trans_pane_g

0xd1e2,	// (0x0002bebc) cell_image3_tool_bar_pane_ParamLimits

0xd1e2,	// (0x0002bebc) cell_image3_tool_bar_pane

0xc737,	// (0x0002b411) cell_image3_tool_bar_pane_g1

0x9beb,	// (0x000288c5) bg_popup_trans_pane_cp1

0xd1f8,	// (0x0002bed2) popup_image3_note_pane_t1

0xd206,	// (0x0002bee0) popup_image3_note_pane_t2

0xd214,	// (0x0002beee) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002e620) popup_image3_note_pane_t

0xd224,	// (0x0002befe) popup_image3_note_pane_t3_copy1

0x6bad,	// (0x00025887) bg_myfav_hc_instruction_pane_ParamLimits

0x6bad,	// (0x00025887) bg_myfav_hc_instruction_pane

0x6bc5,	// (0x0002589f) cell_myfav_contact_pane_ParamLimits

0x6bc5,	// (0x0002589f) cell_myfav_contact_pane

0x6bdf,	// (0x000258b9) cell_myfav_contact_pane_cp1_ParamLimits

0x6bdf,	// (0x000258b9) cell_myfav_contact_pane_cp1

0x6bf7,	// (0x000258d1) cell_myfav_contact_pane_cp2_ParamLimits

0x6bf7,	// (0x000258d1) cell_myfav_contact_pane_cp2

0x6c0f,	// (0x000258e9) cell_myfav_contact_pane_cp3_ParamLimits

0x6c0f,	// (0x000258e9) cell_myfav_contact_pane_cp3

0x6c26,	// (0x00025900) cell_myfav_contact_pane_cp4_ParamLimits

0x6c26,	// (0x00025900) cell_myfav_contact_pane_cp4

0x6c3c,	// (0x00025916) cell_myfav_contact_pane_cp5_ParamLimits

0x6c3c,	// (0x00025916) cell_myfav_contact_pane_cp5

0x6c50,	// (0x0002592a) cell_myfav_contact_pane_cp6_ParamLimits

0x6c50,	// (0x0002592a) cell_myfav_contact_pane_cp6

0x6c64,	// (0x0002593e) cell_myfav_contact_pane_cp7_ParamLimits

0x6c64,	// (0x0002593e) cell_myfav_contact_pane_cp7

0xd232,	// (0x0002bf0c) listscroll_gen_pane_cp05

0x6c7c,	// (0x00025956) main_myfav_hc_pane_g1_ParamLimits

0x6c7c,	// (0x00025956) main_myfav_hc_pane_g1

0x6c96,	// (0x00025970) main_myfav_hc_pane_g2_ParamLimits

0x6c96,	// (0x00025970) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002e627) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002e627) main_myfav_hc_pane_g

0x6cc8,	// (0x000259a2) main_myfav_hc_pane_t1_ParamLimits

0x6cc8,	// (0x000259a2) main_myfav_hc_pane_t1

0xd23b,	// (0x0002bf15) main_myfav_hc_pane_t2_ParamLimits

0xd23b,	// (0x0002bf15) main_myfav_hc_pane_t2

0xd24d,	// (0x0002bf27) main_myfav_hc_pane_t3_ParamLimits

0xd24d,	// (0x0002bf27) main_myfav_hc_pane_t3

0x6cdf,	// (0x000259b9) main_myfav_hc_pane_t4_ParamLimits

0x6cdf,	// (0x000259b9) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002e62e) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002e62e) main_myfav_hc_pane_t

0xc737,	// (0x0002b411) bg_myfav_hc_instruction_pane_g1

0xd25f,	// (0x0002bf39) cell_myfav_contact_pane_g1_ParamLimits

0xd25f,	// (0x0002bf39) cell_myfav_contact_pane_g1

0xd25f,	// (0x0002bf39) cell_myfav_contact_pane_g2_ParamLimits

0xd25f,	// (0x0002bf39) cell_myfav_contact_pane_g2

0xd26b,	// (0x0002bf45) cell_myfav_contact_pane_g3_ParamLimits

0xd26b,	// (0x0002bf45) cell_myfav_contact_pane_g3

0xc9d8,	// (0x0002b6b2) cell_myfav_contact_pane_g4_ParamLimits

0xc9d8,	// (0x0002b6b2) cell_myfav_contact_pane_g4

0xd278,	// (0x0002bf52) cell_myfav_contact_pane_g5_ParamLimits

0xd278,	// (0x0002bf52) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002e639) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002e639) cell_myfav_contact_pane_g

0x6cb0,	// (0x0002598a) main_myfav_hc_pane_g3_ParamLimits

0x6cb0,	// (0x0002598a) main_myfav_hc_pane_g3

0x21d6,	// (0x00020eb0) popup_adpt_find_window

0x6d09,	// (0x000259e3) afind_page_pane_ParamLimits

0x6d09,	// (0x000259e3) afind_page_pane

0x6d16,	// (0x000259f0) aid_size_cell_afind_ParamLimits

0x6d16,	// (0x000259f0) aid_size_cell_afind

0x6d30,	// (0x00025a0a) bg_popup_sub_pane_cp09_ParamLimits

0x6d30,	// (0x00025a0a) bg_popup_sub_pane_cp09

0x6d3d,	// (0x00025a17) find_pane_cp01_ParamLimits

0x6d3d,	// (0x00025a17) find_pane_cp01

0xd284,	// (0x0002bf5e) grid_afind_control_pane_ParamLimits

0xd284,	// (0x0002bf5e) grid_afind_control_pane

0x6d4a,	// (0x00025a24) grid_afind_pane_ParamLimits

0x6d4a,	// (0x00025a24) grid_afind_pane

0x6d66,	// (0x00025a40) cell_afind_pane_ParamLimits

0x6d66,	// (0x00025a40) cell_afind_pane

0xc737,	// (0x0002b411) afind_page_pane_g1

0x6db0,	// (0x00025a8a) afind_page_pane_g2

0x6db9,	// (0x00025a93) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002e644) afind_page_pane_g

0x6dc2,	// (0x00025a9c) afind_page_pane_t1

0xd298,	// (0x0002bf72) cell_afind_grid_control_pane_ParamLimits

0xd298,	// (0x0002bf72) cell_afind_grid_control_pane

0xd03f,	// (0x0002bd19) bg_button_pane_cp69_ParamLimits

0xd03f,	// (0x0002bd19) bg_button_pane_cp69

0x6de2,	// (0x00025abc) cell_afind_pane_g1_ParamLimits

0x6de2,	// (0x00025abc) cell_afind_pane_g1

0x6def,	// (0x00025ac9) cell_afind_pane_t1_ParamLimits

0x6def,	// (0x00025ac9) cell_afind_pane_t1

0xa587,	// (0x00029261) bg_button_pane_cp72

0xd2a7,	// (0x0002bf81) cell_afind_grid_control_pane_g1

0x4fc9,	// (0x00023ca3) aid_image_placing_area_ParamLimits

0x4fc9,	// (0x00023ca3) aid_image_placing_area

0xcd0b,	// (0x0002b9e5) field_vitu_entry_pane_g1_ParamLimits

0xcd0b,	// (0x0002b9e5) field_vitu_entry_pane_g1

0xcd17,	// (0x0002b9f1) field_vitu_entry_pane_g2_ParamLimits

0xcd17,	// (0x0002b9f1) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002e4f5) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002e4f5) field_vitu_entry_pane_g

0x67eb,	// (0x000254c5) cell_vitu_itu_pane_g1_ParamLimits

0x683b,	// (0x00025515) cell_vitu_itu_pane_t3_ParamLimits

0x683b,	// (0x00025515) cell_vitu_itu_pane_t3

0xcfef,	// (0x0002bcc9) mp4_progress_pane_t1_ParamLimits

0xd008,	// (0x0002bce2) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002e58a) mp4_progress_pane_t_ParamLimits

0xd021,	// (0x0002bcfb) mup_progress_pane_cp04_ParamLimits

0x6cf3,	// (0x000259cd) main_myfav_hc_pane_t5_ParamLimits

0x6cf3,	// (0x000259cd) main_myfav_hc_pane_t5

0x9c11,	// (0x000288eb) aid_zoom_text_primary

0x21d6,	// (0x00020eb0) popup_adpt_find_window_ParamLimits

0xa5f8,	// (0x000292d2) main_cam_set_pane

0x186b,	// (0x00020545) cam4_zoom_pane_ParamLimits

0x186b,	// (0x00020545) cam4_zoom_pane

0x6e01,	// (0x00025adb) main_cam_set_pane_g1_ParamLimits

0x6e01,	// (0x00025adb) main_cam_set_pane_g1

0x6e0f,	// (0x00025ae9) main_cam_set_pane_g2_ParamLimits

0x6e0f,	// (0x00025ae9) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002e64b) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002e64b) main_cam_set_pane_g

0x6e1b,	// (0x00025af5) main_cam_set_pane_t1_ParamLimits

0x6e1b,	// (0x00025af5) main_cam_set_pane_t1

0x6e37,	// (0x00025b11) main_cset_listscroll_pane_ParamLimits

0x6e37,	// (0x00025b11) main_cset_listscroll_pane

0x6e66,	// (0x00025b40) main_cset_slider_pane_ParamLimits

0x6e66,	// (0x00025b40) main_cset_slider_pane

0xd2b8,	// (0x0002bf92) main_cset_list_pane_ParamLimits

0xd2b8,	// (0x0002bf92) main_cset_list_pane

0xd2c8,	// (0x0002bfa2) scroll_pane_cp028

0x6e87,	// (0x00025b61) aid_area_touch_slider

0x6ea3,	// (0x00025b7d) cset_slider_pane

0x6ecd,	// (0x00025ba7) main_cset_slider_pane_g1

0x6ee2,	// (0x00025bbc) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002e650) main_cset_slider_pane_g

0xd301,	// (0x0002bfdb) main_cset_slider_pane_t1

0x6f9e,	// (0x00025c78) main_cset_slider_pane_t2

0x6fb8,	// (0x00025c92) main_cset_slider_pane_t3

0x6fd2,	// (0x00025cac) main_cset_slider_pane_t4

0x6fec,	// (0x00025cc6) main_cset_slider_pane_t5

0x7006,	// (0x00025ce0) main_cset_slider_pane_t6

0x701b,	// (0x00025cf5) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002e675) main_cset_slider_pane_t

0x711f,	// (0x00025df9) cset_list_set_pane_ParamLimits

0x711f,	// (0x00025df9) cset_list_set_pane

0x7130,	// (0x00025e0a) aid_position_infowindow_above

0x7138,	// (0x00025e12) aid_position_infowindow_below

0x7140,	// (0x00025e1a) cset_list_set_pane_g1_ParamLimits

0x7140,	// (0x00025e1a) cset_list_set_pane_g1

0x714c,	// (0x00025e26) cset_list_set_pane_g3_ParamLimits

0x714c,	// (0x00025e26) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002e694) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002e694) cset_list_set_pane_g

0x715b,	// (0x00025e35) cset_list_set_pane_t1_ParamLimits

0x715b,	// (0x00025e35) cset_list_set_pane_t1

0xa5f8,	// (0x000292d2) list_highlight_pane_cp021_ParamLimits

0xa5f8,	// (0x000292d2) list_highlight_pane_cp021

0xafb7,	// (0x00029c91) cset_slider_pane_g1

0xafc9,	// (0x00029ca3) cset_slider_pane_g2

0xafc0,	// (0x00029c9a) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002e699) cset_slider_pane_g

0x1d58,	// (0x00020a32) aid_area_touch_cam4_zoom

0x1d60,	// (0x00020a3a) cam4_zoom_cont_pane

0x1d68,	// (0x00020a42) cam4_zoom_pane_g1

0x1d70,	// (0x00020a4a) cam4_zoom_pane_g2

0x1d78,	// (0x00020a52) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002e6a0) cam4_zoom_pane_g

0x1d80,	// (0x00020a5a) cam4_zoom_cont_pane_g1

0x1d89,	// (0x00020a63) cam4_zoom_cont_pane_g2

0x1d92,	// (0x00020a6c) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002e6a7) cam4_zoom_cont_pane_g

0x6a53,	// (0x0002572d) call4_image_pane_ParamLimits

0x6a53,	// (0x0002572d) call4_image_pane

0xd04b,	// (0x0002bd25) call4_windows_conf_pane_ParamLimits

0xd066,	// (0x0002bd40) popup_call4_audio_in_window_ParamLimits

0xd066,	// (0x0002bd40) popup_call4_audio_in_window

0x9beb,	// (0x000288c5) bg_popup_call2_act_pane_cp02

0xd10c,	// (0x0002bde6) call4_list_conf_pane

0xc737,	// (0x0002b411) call4_image_pane_g1

0xc737,	// (0x0002b411) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0002e3b6) call4_image_pane_g

0xd3a1,	// (0x0002c07b) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3a1,	// (0x0002c07b) list_single_graphic_popup_conf4_pane

0x9beb,	// (0x000288c5) list_highlight_pane_cp022

0xd3b6,	// (0x0002c090) list_single_graphic_popup_conf4_pane_g1

0xacad,	// (0x00029987) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002e6ae) list_single_graphic_popup_conf4_pane_g

0xd3be,	// (0x0002c098) list_single_graphic_popup_conf4_pane_t1

0x3269,	// (0x00021f43) popup_vtel_slider_window_ParamLimits

0x3269,	// (0x00021f43) popup_vtel_slider_window

0xd02d,	// (0x0002bd07) dialer2_ne_pane_t2_ParamLimits

0xd02d,	// (0x0002bd07) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002e58f) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002e58f) dialer2_ne_pane_t

0xa5f8,	// (0x000292d2) bg_popup_sub_pane_cp010_ParamLimits

0xa5f8,	// (0x000292d2) bg_popup_sub_pane_cp010

0x7170,	// (0x00025e4a) popup_vtel_slider_window_g1_ParamLimits

0x7170,	// (0x00025e4a) popup_vtel_slider_window_g1

0x717c,	// (0x00025e56) popup_vtel_slider_window_g2_ParamLimits

0x717c,	// (0x00025e56) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002e6b3) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002e6b3) popup_vtel_slider_window_g

0x71c4,	// (0x00025e9e) vtel_slider_pane_ParamLimits

0x71c4,	// (0x00025e9e) vtel_slider_pane

0x71d3,	// (0x00025ead) vtel_slider_pane_g1_ParamLimits

0x71d3,	// (0x00025ead) vtel_slider_pane_g1

0x71e0,	// (0x00025eba) vtel_slider_pane_g2_ParamLimits

0x71e0,	// (0x00025eba) vtel_slider_pane_g2

0x71ed,	// (0x00025ec7) vtel_slider_pane_g3_ParamLimits

0x71ed,	// (0x00025ec7) vtel_slider_pane_g3

0x71d3,	// (0x00025ead) vtel_slider_pane_g4_ParamLimits

0x71d3,	// (0x00025ead) vtel_slider_pane_g4

0x71fa,	// (0x00025ed4) vtel_slider_pane_g5_ParamLimits

0x71fa,	// (0x00025ed4) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002e6bc) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002e6bc) vtel_slider_pane_g

0xa5f8,	// (0x000292d2) main_gallery2_pane

0x1a99,	// (0x00020773) aid_size_row_itut2_dropdow_list_ParamLimits

0x1a99,	// (0x00020773) aid_size_row_itut2_dropdow_list

0x1b09,	// (0x000207e3) grid_vitu2_function_top_pane_ParamLimits

0x1b09,	// (0x000207e3) grid_vitu2_function_top_pane

0x1b5f,	// (0x00020839) popup_vitu2_dropdown_list_window_ParamLimits

0x1b5f,	// (0x00020839) popup_vitu2_dropdown_list_window

0x1b83,	// (0x0002085d) popup_vitu2_match_list_window

0x1d9b,	// (0x00020a75) cell_vitu2_function_top_pane_ParamLimits

0x1d9b,	// (0x00020a75) cell_vitu2_function_top_pane

0x1dbd,	// (0x00020a97) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1dbd,	// (0x00020a97) cell_vitu2_function_top_pane_cp01

0x1dd9,	// (0x00020ab3) cell_vitu2_function_top_wide_pane_ParamLimits

0x1dd9,	// (0x00020ab3) cell_vitu2_function_top_wide_pane

0x19c7,	// (0x000206a1) bg_button_pane_cp012

0x1df5,	// (0x00020acf) cell_vitu2_function_top_pane_g1

0x1e09,	// (0x00020ae3) bg_button_pane_cp013_ParamLimits

0x1e09,	// (0x00020ae3) bg_button_pane_cp013

0x7207,	// (0x00025ee1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7207,	// (0x00025ee1) cell_vitu2_function_top_wide_pane_g1

0x1e25,	// (0x00020aff) bg_popup_sub_pane_cp20

0x1e33,	// (0x00020b0d) list_vitu2_match_list_pane

0xd1aa,	// (0x0002be84) bg_popup_sub_pane_cp20_g1

0xd1b2,	// (0x0002be8c) bg_popup_sub_pane_cp20_g2

0xa7a0,	// (0x0002947a) bg_popup_sub_pane_cp20_g3

0xd1ba,	// (0x0002be94) bg_popup_sub_pane_cp20_g4

0xa780,	// (0x0002945a) bg_popup_sub_pane_cp20_g5

0xd3e2,	// (0x0002c0bc) bg_popup_sub_pane_cp20_g6

0xd1ca,	// (0x0002bea4) bg_popup_sub_pane_cp20_g7

0xd1d2,	// (0x0002beac) bg_popup_sub_pane_cp20_g8

0xd1da,	// (0x0002beb4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002e6c7) bg_popup_sub_pane_cp20_g

0x1e4b,	// (0x00020b25) list_vitu2_match_list_item_pane_ParamLimits

0x1e4b,	// (0x00020b25) list_vitu2_match_list_item_pane

0x1e5d,	// (0x00020b37) list_vitu2_match_list_item_pane_t1

0x0b3a,	// (0x0001f814) bg_popup_sub_pane_cp21

0x1e6b,	// (0x00020b45) grid_vitu2_dropdown_list_pane

0x1e73,	// (0x00020b4d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1e73,	// (0x00020b4d) cell_vitu2_dropdown_list_char_pane

0x1e98,	// (0x00020b72) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1e98,	// (0x00020b72) cell_vitu2_dropdown_list_ctrl_pane

0xd3f6,	// (0x0002c0d0) cell_vitu2_dropdown_list_char_pane_g1

0xd3ff,	// (0x0002c0d9) cell_vitu2_dropdown_list_char_pane_g2

0xd408,	// (0x0002c0e2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002e6e4) cell_vitu2_dropdown_list_char_pane_g

0x1ec6,	// (0x00020ba0) cell_vitu2_dropdown_list_char_pane_t1

0x7257,	// (0x00025f31) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7257,	// (0x00025f31) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7267,	// (0x00025f41) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7267,	// (0x00025f41) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7278,	// (0x00025f52) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7278,	// (0x00025f52) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1ed4,	// (0x00020bae) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1ed4,	// (0x00020bae) cell_vitu2_dropdown_list_ctrl_pane_g4

0x18db,	// (0x000205b5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x18db,	// (0x000205b5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002e6eb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002e6eb) cell_vitu2_dropdown_list_ctrl_pane_g

0x7288,	// (0x00025f62) aid_size_cell_gallery2_ParamLimits

0x7288,	// (0x00025f62) aid_size_cell_gallery2

0x72a2,	// (0x00025f7c) grid_gallery2_pane_ParamLimits

0x72a2,	// (0x00025f7c) grid_gallery2_pane

0x6670,	// (0x0002534a) scroll_pane_cp029_ParamLimits

0x6670,	// (0x0002534a) scroll_pane_cp029

0x72b9,	// (0x00025f93) cell_gallery2_pane_ParamLimits

0x72b9,	// (0x00025f93) cell_gallery2_pane

0xd411,	// (0x0002c0eb) cell_gallery2_pane_g2

0x7305,	// (0x00025fdf) cell_gallery2_pane_g3

0xd419,	// (0x0002c0f3) cell_gallery2_pane_g4

0xd421,	// (0x0002c0fb) cell_gallery2_pane_g5

0xa535,	// (0x0002920f) grid_highlight_pane_cp10

0x1b83,	// (0x0002085d) popup_vitu2_match_list_window_ParamLimits

0x1b97,	// (0x00020871) popup_vitu2_query_window_ParamLimits

0x1b97,	// (0x00020871) popup_vitu2_query_window

0x0b3a,	// (0x0001f814) bg_vitu2_candi_button_pane

0xd3f6,	// (0x0002c0d0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3ff,	// (0x0002c0d9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd408,	// (0x0002c0e2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x730d,	// (0x00025fe7) bg_button_pane_cp015

0x731f,	// (0x00025ff9) bg_button_pane_cp016

0x7332,	// (0x0002600c) bg_button_pane_cp017

0xc2e6,	// (0x0002afc0) bg_popup_sub_pane_cp22

0xd429,	// (0x0002c103) popup_vitu2_query_window_g1

0x7377,	// (0x00026051) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002e6f6) popup_vitu2_query_window_g

0x7394,	// (0x0002606e) popup_vitu2_query_window_t1_ParamLimits

0x7394,	// (0x0002606e) popup_vitu2_query_window_t1

0x73c7,	// (0x000260a1) popup_vitu2_query_window_t2_ParamLimits

0x73c7,	// (0x000260a1) popup_vitu2_query_window_t2

0x73d9,	// (0x000260b3) popup_vitu2_query_window_t3_ParamLimits

0x73d9,	// (0x000260b3) popup_vitu2_query_window_t3

0x7401,	// (0x000260db) popup_vitu2_query_window_t4_ParamLimits

0x7401,	// (0x000260db) popup_vitu2_query_window_t4

0x7424,	// (0x000260fe) popup_vitu2_query_window_t5_ParamLimits

0x7424,	// (0x000260fe) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002e6fd) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002e6fd) popup_vitu2_query_window_t

0xd2b0,	// (0x0002bf8a) main_cset_text_pane

0x6e87,	// (0x00025b61) aid_area_touch_slider_ParamLimits

0x6ea3,	// (0x00025b7d) cset_slider_pane_ParamLimits

0x6ecd,	// (0x00025ba7) main_cset_slider_pane_g1_ParamLimits

0x6ee2,	// (0x00025bbc) main_cset_slider_pane_g2_ParamLimits

0xd2d1,	// (0x0002bfab) main_cset_slider_pane_g3_ParamLimits

0xd2d1,	// (0x0002bfab) main_cset_slider_pane_g3

0x6ef7,	// (0x00025bd1) main_cset_slider_pane_g4_ParamLimits

0x6ef7,	// (0x00025bd1) main_cset_slider_pane_g4

0x6f06,	// (0x00025be0) main_cset_slider_pane_g5_ParamLimits

0x6f06,	// (0x00025be0) main_cset_slider_pane_g5

0x6f12,	// (0x00025bec) main_cset_slider_pane_g6_ParamLimits

0x6f12,	// (0x00025bec) main_cset_slider_pane_g6

0xf976,	// (0x0002e650) main_cset_slider_pane_g_ParamLimits

0xd301,	// (0x0002bfdb) main_cset_slider_pane_t1_ParamLimits

0x6f9e,	// (0x00025c78) main_cset_slider_pane_t2_ParamLimits

0x6fb8,	// (0x00025c92) main_cset_slider_pane_t3_ParamLimits

0x6fd2,	// (0x00025cac) main_cset_slider_pane_t4_ParamLimits

0x6fec,	// (0x00025cc6) main_cset_slider_pane_t5_ParamLimits

0x7006,	// (0x00025ce0) main_cset_slider_pane_t6_ParamLimits

0x701b,	// (0x00025cf5) main_cset_slider_pane_t7_ParamLimits

0x7045,	// (0x00025d1f) main_cset_slider_pane_t8_ParamLimits

0x7045,	// (0x00025d1f) main_cset_slider_pane_t8

0x706d,	// (0x00025d47) main_cset_slider_pane_t9_ParamLimits

0x706d,	// (0x00025d47) main_cset_slider_pane_t9

0x7095,	// (0x00025d6f) main_cset_slider_pane_t10_ParamLimits

0x7095,	// (0x00025d6f) main_cset_slider_pane_t10

0x70bd,	// (0x00025d97) main_cset_slider_pane_t11_ParamLimits

0x70bd,	// (0x00025d97) main_cset_slider_pane_t11

0x70e5,	// (0x00025dbf) main_cset_slider_pane_t12_ParamLimits

0x70e5,	// (0x00025dbf) main_cset_slider_pane_t12

0x7102,	// (0x00025ddc) main_cset_slider_pane_t13_ParamLimits

0x7102,	// (0x00025ddc) main_cset_slider_pane_t13

0xf99b,	// (0x0002e675) main_cset_slider_pane_t_ParamLimits

0x9beb,	// (0x000288c5) bg_popup_sub_pane_cp011

0xd435,	// (0x0002c10f) main_cset_text_pane_g1

0xd43d,	// (0x0002c117) main_cset_text_pane_t1

0xd44b,	// (0x0002c125) main_cset_text_pane_t2

0xd459,	// (0x0002c133) main_cset_text_pane_t3

0xd467,	// (0x0002c141) main_cset_text_pane_t4

0xd475,	// (0x0002c14f) main_cset_text_pane_t5

0xd483,	// (0x0002c15d) main_cset_text_pane_t6

0xd491,	// (0x0002c16b) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002e70c) main_cset_text_pane_t

0x9beb,	// (0x000288c5) main_cam4_burst_pane

0x9beb,	// (0x000288c5) main_cam5_pane

0x6dd0,	// (0x00025aaa) bg_button_pane_cp019

0x6dd9,	// (0x00025ab3) bg_button_pane_cp020

0xd2dd,	// (0x0002bfb7) main_cset_slider_pane_g7_ParamLimits

0xd2dd,	// (0x0002bfb7) main_cset_slider_pane_g7

0xd2e9,	// (0x0002bfc3) main_cset_slider_pane_g8_ParamLimits

0xd2e9,	// (0x0002bfc3) main_cset_slider_pane_g8

0x6f26,	// (0x00025c00) main_cset_slider_pane_g9_ParamLimits

0x6f26,	// (0x00025c00) main_cset_slider_pane_g9

0x6f32,	// (0x00025c0c) main_cset_slider_pane_g10_ParamLimits

0x6f32,	// (0x00025c0c) main_cset_slider_pane_g10

0x6f3e,	// (0x00025c18) main_cset_slider_pane_g11_ParamLimits

0x6f3e,	// (0x00025c18) main_cset_slider_pane_g11

0x6f4a,	// (0x00025c24) main_cset_slider_pane_g12_ParamLimits

0x6f4a,	// (0x00025c24) main_cset_slider_pane_g12

0x6f56,	// (0x00025c30) main_cset_slider_pane_g13_ParamLimits

0x6f56,	// (0x00025c30) main_cset_slider_pane_g13

0x6f62,	// (0x00025c3c) main_cset_slider_pane_g14_ParamLimits

0x6f62,	// (0x00025c3c) main_cset_slider_pane_g14

0x6f6e,	// (0x00025c48) main_cset_slider_pane_g15_ParamLimits

0x6f6e,	// (0x00025c48) main_cset_slider_pane_g15

0xd32f,	// (0x0002c009) main_cset_slider_pane_t14_ParamLimits

0xd32f,	// (0x0002c009) main_cset_slider_pane_t14

0xd368,	// (0x0002c042) main_cset_slider_pane_t15_ParamLimits

0xd368,	// (0x0002c042) main_cset_slider_pane_t15

0x749d,	// (0x00026177) aid_cam4_burst_size_cell_ParamLimits

0x749d,	// (0x00026177) aid_cam4_burst_size_cell

0x74b9,	// (0x00026193) grid_cam4_burst_pane_ParamLimits

0x74b9,	// (0x00026193) grid_cam4_burst_pane

0x74eb,	// (0x000261c5) linegrid_cam4_burst_pane_ParamLimits

0x74eb,	// (0x000261c5) linegrid_cam4_burst_pane

0x7509,	// (0x000261e3) scroll_pane_cp30_ParamLimits

0x7509,	// (0x000261e3) scroll_pane_cp30

0x7515,	// (0x000261ef) cell_cam4_burst_pane_ParamLimits

0x7515,	// (0x000261ef) cell_cam4_burst_pane

0xd49f,	// (0x0002c179) linegrid_cam4_burst_pane_g1_ParamLimits

0xd49f,	// (0x0002c179) linegrid_cam4_burst_pane_g1

0x7555,	// (0x0002622f) linegrid_cam4_burst_pane_g2_ParamLimits

0x7555,	// (0x0002622f) linegrid_cam4_burst_pane_g2

0xd4ac,	// (0x0002c186) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4ac,	// (0x0002c186) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002e71b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002e71b) linegrid_cam4_burst_pane_g

0x7566,	// (0x00026240) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7566,	// (0x00026240) linegrid_cam4_burst_pane_g3_copy1

0xd4b9,	// (0x0002c193) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4b9,	// (0x0002c193) linegrid_cam4_burst_pane_g4

0x7580,	// (0x0002625a) linegrid_cam4_burst_pane_g5_ParamLimits

0x7580,	// (0x0002625a) linegrid_cam4_burst_pane_g5

0x7591,	// (0x0002626b) linegrid_cam4_burst_pane_g6_ParamLimits

0x7591,	// (0x0002626b) linegrid_cam4_burst_pane_g6

0xd4c6,	// (0x0002c1a0) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4c6,	// (0x0002c1a0) linegrid_cam4_burst_pane_g7

0x75a8,	// (0x00026282) cell_cam4_burst_pane_g1

0xd524,	// (0x0002c1fe) main_cam5_pane_t1_ParamLimits

0xd524,	// (0x0002c1fe) main_cam5_pane_t1

0xd536,	// (0x0002c210) main_cam5_pane_t2_ParamLimits

0xd536,	// (0x0002c210) main_cam5_pane_t2

0xd548,	// (0x0002c222) main_cam5_pane_t3_ParamLimits

0xd548,	// (0x0002c222) main_cam5_pane_t3

0xd55a,	// (0x0002c234) main_cam5_pane_t4_ParamLimits

0xd55a,	// (0x0002c234) main_cam5_pane_t4

0xd572,	// (0x0002c24c) main_cam5_pane_t5_ParamLimits

0xd572,	// (0x0002c24c) main_cam5_pane_t5

0xd586,	// (0x0002c260) main_cam5_pane_t6_ParamLimits

0xd586,	// (0x0002c260) main_cam5_pane_t6

0xd59a,	// (0x0002c274) main_cam5_pane_t7_ParamLimits

0xd59a,	// (0x0002c274) main_cam5_pane_t7

0xd5ac,	// (0x0002c286) main_cam5_pane_t8_ParamLimits

0xd5ac,	// (0x0002c286) main_cam5_pane_t8

0xd5ca,	// (0x0002c2a4) main_cam5_pane_t9_ParamLimits

0xd5ca,	// (0x0002c2a4) main_cam5_pane_t9

0xd5dc,	// (0x0002c2b6) main_cam5_pane_t10_ParamLimits

0xd5dc,	// (0x0002c2b6) main_cam5_pane_t10

0xd5ee,	// (0x0002c2c8) main_cam5_pane_t11_ParamLimits

0xd5ee,	// (0x0002c2c8) main_cam5_pane_t11

0xd602,	// (0x0002c2dc) main_cam5_pane_t12_ParamLimits

0xd602,	// (0x0002c2dc) main_cam5_pane_t12

0xd619,	// (0x0002c2f3) main_cam5_pane_t13_ParamLimits

0xd619,	// (0x0002c2f3) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002e727) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002e727) main_cam5_pane_t

0x2283,	// (0x00020f5d) popup_scut_keymap_window_ParamLimits

0x2283,	// (0x00020f5d) popup_scut_keymap_window

0x75bb,	// (0x00026295) aid_size_cell_brow_shortcut

0xa535,	// (0x0002920f) bg_popup_window_pane_cp010

0x75c7,	// (0x000262a1) grid_scut_pane

0x75d3,	// (0x000262ad) cell_scut_pane_ParamLimits

0x75d3,	// (0x000262ad) cell_scut_pane

0x75ee,	// (0x000262c8) cell_scut_pane_g1

0xd63c,	// (0x0002c316) cell_scut_pane_t1

0xd64b,	// (0x0002c325) cell_scut_pane_t2

0x75f7,	// (0x000262d1) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002e742) cell_scut_pane_t

0x5edd,	// (0x00024bb7) main_mup3_pane_g8_ParamLimits

0x5edd,	// (0x00024bb7) main_mup3_pane_g8

0x1aa9,	// (0x00020783) area_vitu2_query_pane_ParamLimits

0x1aa9,	// (0x00020783) area_vitu2_query_pane

0x7345,	// (0x0002601f) input_focus_pane_cp08

0xd65a,	// (0x0002c334) area_vitu2_query_pane_g1

0x7605,	// (0x000262df) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002e749) area_vitu2_query_pane_g

0x7616,	// (0x000262f0) area_vitu2_query_pane_t1_ParamLimits

0x7616,	// (0x000262f0) area_vitu2_query_pane_t1

0x762a,	// (0x00026304) area_vitu2_query_pane_t2_ParamLimits

0x762a,	// (0x00026304) area_vitu2_query_pane_t2

0x763e,	// (0x00026318) area_vitu2_query_pane_t3_ParamLimits

0x763e,	// (0x00026318) area_vitu2_query_pane_t3

0xd666,	// (0x0002c340) area_vitu2_query_pane_t4_ParamLimits

0xd666,	// (0x0002c340) area_vitu2_query_pane_t4

0xd68e,	// (0x0002c368) area_vitu2_query_pane_t5_ParamLimits

0xd68e,	// (0x0002c368) area_vitu2_query_pane_t5

0xd6b6,	// (0x0002c390) area_vitu2_query_pane_t6_ParamLimits

0xd6b6,	// (0x0002c390) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002e74e) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002e74e) area_vitu2_query_pane_t

0x7666,	// (0x00026340) bg_button_pane_cp018

0x7674,	// (0x0002634e) bg_button_pane_cp021

0x7680,	// (0x0002635a) bg_button_pane_cp022

0x7691,	// (0x0002636b) input_focus_pane_cp09

0x4665,	// (0x0002333f) aid_size_touch_mv_arrow_left

0x4690,	// (0x0002336a) aid_size_touch_mv_arrow_right

0x6f86,	// (0x00025c60) main_cset_slider_pane_g16_ParamLimits

0x6f86,	// (0x00025c60) main_cset_slider_pane_g16

0x6f92,	// (0x00025c6c) main_cset_slider_pane_g17_ParamLimits

0x6f92,	// (0x00025c6c) main_cset_slider_pane_g17

0x75a8,	// (0x00026282) cell_cam4_burst_pane_g1_ParamLimits

0x9beb,	// (0x000288c5) compa_mode_pane

0x7188,	// (0x00025e62) popup_vtel_slider_window_g3_ParamLimits

0x7188,	// (0x00025e62) popup_vtel_slider_window_g3

0x719c,	// (0x00025e76) popup_vtel_slider_window_g4_ParamLimits

0x719c,	// (0x00025e76) popup_vtel_slider_window_g4

0x71b0,	// (0x00025e8a) popup_vtel_slider_window_t1_ParamLimits

0x71b0,	// (0x00025e8a) popup_vtel_slider_window_t1

0x9beb,	// (0x000288c5) main_cl_pane

0xc312,	// (0x0002afec) popup_imed_adjust2_window_ParamLimits

0xc2e6,	// (0x0002afc0) bg_tb_trans_pane_cp05_ParamLimits

0xcc40,	// (0x0002b91a) popup_imed_adjust2_window_g1_ParamLimits

0xcc4f,	// (0x0002b929) popup_imed_adjust2_window_g2_ParamLimits

0xcc4f,	// (0x0002b929) popup_imed_adjust2_window_g2

0xcc5b,	// (0x0002b935) popup_imed_adjust2_window_g3_ParamLimits

0xcc5b,	// (0x0002b935) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002e4b9) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002e4b9) popup_imed_adjust2_window_g

0xcc67,	// (0x0002b941) popup_imed_adjust2_window_t1_ParamLimits

0xcc7f,	// (0x0002b959) slider_imed_adjust_pane_ParamLimits

0xcc93,	// (0x0002b96d) slider_imed_adjust_pane_g1_ParamLimits

0xcca3,	// (0x0002b97d) slider_imed_adjust_pane_g2_ParamLimits

0xccb3,	// (0x0002b98d) slider_imed_adjust_pane_g3_ParamLimits

0xccc4,	// (0x0002b99e) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002e4c0) slider_imed_adjust_pane_g_ParamLimits

0x1814,	// (0x000204ee) aid_touch_area_cam4_ParamLimits

0x1814,	// (0x000204ee) aid_touch_area_cam4

0x1824,	// (0x000204fe) battery_pane_cp01

0x18ab,	// (0x00020585) main_camera4_pane_g6_ParamLimits

0x18ab,	// (0x00020585) main_camera4_pane_g6

0x18c9,	// (0x000205a3) main_camera4_pane_t2_ParamLimits

0x18c9,	// (0x000205a3) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002e5c3) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002e5c3) main_camera4_pane_t

0x1934,	// (0x0002060e) aid_touch_area_vid4_ParamLimits

0x1934,	// (0x0002060e) aid_touch_area_vid4

0x1974,	// (0x0002064e) main_video4_pane_g5_ParamLimits

0x1974,	// (0x0002064e) main_video4_pane_g5

0x199a,	// (0x00020674) vid4_progress_pane_ParamLimits

0x199a,	// (0x00020674) vid4_progress_pane

0xd2f5,	// (0x0002bfcf) main_cset_slider_pane_g18_ParamLimits

0xd2f5,	// (0x0002bfcf) main_cset_slider_pane_g18

0xd4d3,	// (0x0002c1ad) cell_cam4_burst_pane_g2_ParamLimits

0xd4d3,	// (0x0002c1ad) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002e722) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002e722) cell_cam4_burst_pane_g

0x76a2,	// (0x0002637c) bg_cl_pane_ParamLimits

0x76a2,	// (0x0002637c) bg_cl_pane

0x76ae,	// (0x00026388) cl_header_pane_ParamLimits

0x76ae,	// (0x00026388) cl_header_pane

0x76ba,	// (0x00026394) cl_listscroll_pane_ParamLimits

0x76ba,	// (0x00026394) cl_listscroll_pane

0xd702,	// (0x0002c3dc) bg_cl_pane_g1

0xd70a,	// (0x0002c3e4) bg_cl_pane_g2

0xd712,	// (0x0002c3ec) bg_cl_pane_g3

0xd71a,	// (0x0002c3f4) bg_cl_pane_g4

0xd722,	// (0x0002c3fc) bg_cl_pane_g5

0xd72a,	// (0x0002c404) bg_cl_pane_g6

0xd732,	// (0x0002c40c) bg_cl_pane_g7

0xd73a,	// (0x0002c414) bg_cl_pane_g8

0xd742,	// (0x0002c41c) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002e75d) bg_cl_pane_g

0x76c6,	// (0x000263a0) aid_height_cl_leading_ParamLimits

0x76c6,	// (0x000263a0) aid_height_cl_leading

0x76d2,	// (0x000263ac) aid_height_cl_text_ParamLimits

0x76d2,	// (0x000263ac) aid_height_cl_text

0x22c4,	// (0x00020f9e) bg_cl_header_pane_ParamLimits

0x22c4,	// (0x00020f9e) bg_cl_header_pane

0x76ea,	// (0x000263c4) cl_header_pane_g1_ParamLimits

0x76ea,	// (0x000263c4) cl_header_pane_g1

0x76f7,	// (0x000263d1) cl_header_pane_t1_ParamLimits

0x76f7,	// (0x000263d1) cl_header_pane_t1

0xd74a,	// (0x0002c424) cl_list_pane

0xd2c8,	// (0x0002bfa2) hc_scroll_pane_cp01

0xa780,	// (0x0002945a) bg_cl_header_pane_g1

0xd1aa,	// (0x0002be84) bg_cl_header_pane_g2

0xa7a0,	// (0x0002947a) bg_cl_header_pane_g3

0xd1ba,	// (0x0002be94) bg_cl_header_pane_g4

0xd1b2,	// (0x0002be8c) bg_cl_header_pane_g5

0xd3e2,	// (0x0002c0bc) bg_cl_header_pane_g6

0xd1d2,	// (0x0002beac) bg_cl_header_pane_g7

0xd1da,	// (0x0002beb4) bg_cl_header_pane_g8

0xd1ca,	// (0x0002bea4) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002e770) bg_cl_header_pane_g

0x7709,	// (0x000263e3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7709,	// (0x000263e3) hc_cl_list_double_graphic_heading_pane

0x7719,	// (0x000263f3) hc_cl_list_single_graphic_pane_ParamLimits

0x7719,	// (0x000263f3) hc_cl_list_single_graphic_pane

0x772b,	// (0x00026405) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x772b,	// (0x00026405) hc_cl_list_single_graphic_pane_g1

0x7737,	// (0x00026411) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7737,	// (0x00026411) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002e783) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002e783) hc_cl_list_single_graphic_pane_g

0x774b,	// (0x00026425) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x774b,	// (0x00026425) hc_cl_list_single_graphic_pane_t1

0x772b,	// (0x00026405) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x772b,	// (0x00026405) hc_cl_list_double_graphic_heading_pane_g1

0x7760,	// (0x0002643a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7760,	// (0x0002643a) hc_cl_list_double_graphic_heading_pane_g2

0x7774,	// (0x0002644e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7774,	// (0x0002644e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002e788) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002e788) hc_cl_list_double_graphic_heading_pane_g

0x7788,	// (0x00026462) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7788,	// (0x00026462) hc_cl_list_double_graphic_heading_pane_t1

0x779d,	// (0x00026477) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x779d,	// (0x00026477) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002e78f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002e78f) hc_cl_list_double_graphic_heading_pane_t

0x1ef5,	// (0x00020bcf) vid4_progress_pane_g1

0x1f07,	// (0x00020be1) vid4_progress_pane_g2

0x0fd8,	// (0x0001fcb2) vid4_progress_pane_g3

0x1f19,	// (0x00020bf3) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002e794) vid4_progress_pane_g

0x1f37,	// (0x00020c11) vid4_progress_pane_t1

0x1f4c,	// (0x00020c26) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002e79f) vid4_progress_pane_t

0x1f77,	// (0x00020c51) wait_bar_pane_cp07

0xc524,	// (0x0002b1fe) blid_firmament_pane_ParamLimits

0xc567,	// (0x0002b241) popup_blid_sat_info2_window_g1

0xc58b,	// (0x0002b265) popup_blid_sat_info2_window_t3

0xc599,	// (0x0002b273) popup_blid_sat_info2_window_t4

0xc5a7,	// (0x0002b281) popup_blid_sat_info2_window_t5

0xc5b5,	// (0x0002b28f) popup_blid_sat_info2_window_t6

0xc5c5,	// (0x0002b29f) popup_blid_sat_info2_window_t7

0xc5d3,	// (0x0002b2ad) popup_blid_sat_info2_window_t8

0xc5e1,	// (0x0002b2bb) popup_blid_sat_info2_window_t9

0xc5ef,	// (0x0002b2c9) popup_blid_sat_info2_window_t10

0xc6b7,	// (0x0002b391) aid_firma_cardinal_ParamLimits

0xc6cb,	// (0x0002b3a5) blid_firmament_pane_t1_ParamLimits

0xc6e2,	// (0x0002b3bc) blid_firmament_pane_t2_ParamLimits

0xc6f9,	// (0x0002b3d3) blid_firmament_pane_t3_ParamLimits

0xc710,	// (0x0002b3ea) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0002e3ad) blid_firmament_pane_t_ParamLimits

0xc727,	// (0x0002b401) blid_sat_info_pane_ParamLimits

0xa5f8,	// (0x000292d2) main_cam_set_pane_ParamLimits

0x6609,	// (0x000252e3) aid_size_cell_colour_35_ParamLimits

0x6623,	// (0x000252fd) aid_size_cell_colour_112_ParamLimits

0x663a,	// (0x00025314) aid_size_cell_effect_ParamLimits

0xa5f8,	// (0x000292d2) bg_tb_trans_pane_cp02_ParamLimits

0xaf71,	// (0x00029c4b) heading_imed_pane_ParamLimits

0x6654,	// (0x0002532e) listscroll_imed_pane_ParamLimits

0xb908,	// (0x0002a5e2) popup_call2_audio_first_window_g5_ParamLimits

0xb908,	// (0x0002a5e2) popup_call2_audio_first_window_g5

0x169d,	// (0x00020377) aid_size_touch_image3_arrow_left_ParamLimits

0x169d,	// (0x00020377) aid_size_touch_image3_arrow_left

0x16b3,	// (0x0002038d) aid_size_touch_image3_arrow_right_ParamLimits

0x16b3,	// (0x0002038d) aid_size_touch_image3_arrow_right

0x1f62,	// (0x00020c3c) vid4_progress_pane_t3

0x6902,	// (0x000255dc) main_hwr_training_symbol_option_pane_ParamLimits

0x6902,	// (0x000255dc) main_hwr_training_symbol_option_pane

0xcf2f,	// (0x0002bc09) popup_hwr_training_preview_window_ParamLimits

0xcf2f,	// (0x0002bc09) popup_hwr_training_preview_window

0x1393,	// (0x0002006d) hwr_training_navi_pane_g5_ParamLimits

0x1393,	// (0x0002006d) hwr_training_navi_pane_g5

0xd198,	// (0x0002be72) popup_char_count_window

0x1e25,	// (0x00020aff) bg_popup_sub_pane_cp20_ParamLimits

0x1e33,	// (0x00020b0d) list_vitu2_match_list_pane_ParamLimits

0x1e3f,	// (0x00020b19) vitu2_page_scroll_pane_ParamLimits

0x1e3f,	// (0x00020b19) vitu2_page_scroll_pane

0xd775,	// (0x0002c44f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd775,	// (0x0002c44f) list_single_hwr_training_symbol_option_pane

0xd788,	// (0x0002c462) list_single_hwr_training_symbol_option_pane_g1

0xd790,	// (0x0002c46a) list_single_hwr_training_symbol_option_pane_t1

0xd79e,	// (0x0002c478) bg_button_pane_cp023

0xd7a7,	// (0x0002c481) bg_button_pane_cp024

0x77ea,	// (0x000264c4) vitu2_page_scroll_pane_g1

0x77f2,	// (0x000264cc) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002e7a6) vitu2_page_scroll_pane_g

0x77fc,	// (0x000264d6) vitu2_page_scroll_pane_t1

0xd7da,	// (0x0002c4b4) popup_char_count_window_g1

0xd7e3,	// (0x0002c4bd) popup_char_count_window_g2

0xd7ec,	// (0x0002c4c6) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002e7ab) popup_char_count_window_g

0xd7f5,	// (0x0002c4cf) popup_char_count_window_t1

0x9beb,	// (0x000288c5) main_vded2_pane

0xcc2c,	// (0x0002b906) aid_size_cell_imed_line

0xcc36,	// (0x0002b910) grid_imed_line_width_pane

0x1a1c,	// (0x000206f6) vid4_indicators_pane_g4

0xd803,	// (0x0002c4dd) cell_imed_line_width_pane_ParamLimits

0xd803,	// (0x0002c4dd) cell_imed_line_width_pane

0xd819,	// (0x0002c4f3) cell_imed_line_width_pane_g1

0xd512,	// (0x0002c1ec) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002e7b2) cell_imed_line_width_pane_g

0x780b,	// (0x000264e5) main_vded2_pane_g1_ParamLimits

0x780b,	// (0x000264e5) main_vded2_pane_g1

0x781a,	// (0x000264f4) main_vded2_pane_g2_ParamLimits

0x781a,	// (0x000264f4) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002e7b7) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002e7b7) main_vded2_pane_g

0x7828,	// (0x00026502) vded2_slider_pane_ParamLimits

0x7828,	// (0x00026502) vded2_slider_pane

0x7835,	// (0x0002650f) aid_size_touch_vded2_end

0x783f,	// (0x00026519) aid_size_touch_vded2_playhead

0xd822,	// (0x0002c4fc) aid_size_touch_vded2_start

0xd82a,	// (0x0002c504) vded2_slider_bg_pane

0xd833,	// (0x0002c50d) vded2_slider_pane_g1

0xd83c,	// (0x0002c516) vded2_slider_pane_g2

0x7847,	// (0x00026521) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002e7bc) vded2_slider_pane_g

0xd0b1,	// (0x0002bd8b) vded2_slider_bg_pane_g1

0xd0ba,	// (0x0002bd94) vded2_slider_bg_pane_g2

0xd0c3,	// (0x0002bd9d) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0002e47d) vded2_slider_bg_pane_g

0x4d2c,	// (0x00023a06) aid_postcard_touch_down_pane_ParamLimits

0x4d2c,	// (0x00023a06) aid_postcard_touch_down_pane

0x4d3c,	// (0x00023a16) aid_postcard_touch_up_pane_ParamLimits

0x4d3c,	// (0x00023a16) aid_postcard_touch_up_pane

0x9beb,	// (0x000288c5) main_blid2_pane

0xc2f4,	// (0x0002afce) popup_blid2_search_window

0x9beb,	// (0x000288c5) blid2_gps_pane

0x9beb,	// (0x000288c5) blid2_navig_pane

0x9beb,	// (0x000288c5) blid2_search_pane

0x9beb,	// (0x000288c5) blid2_tripm_pane

0x7850,	// (0x0002652a) blid2_search_pane_g1_ParamLimits

0x7850,	// (0x0002652a) blid2_search_pane_g1

0x785c,	// (0x00026536) blid2_search_pane_t1_ParamLimits

0x785c,	// (0x00026536) blid2_search_pane_t1

0x786e,	// (0x00026548) aid_size_cell_blid2_gps_ParamLimits

0x786e,	// (0x00026548) aid_size_cell_blid2_gps

0x787e,	// (0x00026558) blid2_gps_pane_g1_ParamLimits

0x787e,	// (0x00026558) blid2_gps_pane_g1

0x788a,	// (0x00026564) grid_blid2_satellite_pane_ParamLimits

0x788a,	// (0x00026564) grid_blid2_satellite_pane

0x7898,	// (0x00026572) blid2_navig_pane_g1_ParamLimits

0x7898,	// (0x00026572) blid2_navig_pane_g1

0x78a4,	// (0x0002657e) blid2_navig_pane_t1_ParamLimits

0x78a4,	// (0x0002657e) blid2_navig_pane_t1

0x78b6,	// (0x00026590) blid2_navig_pane_t2_ParamLimits

0x78b6,	// (0x00026590) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0002e7c3) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0002e7c3) blid2_navig_pane_t

0x78c8,	// (0x000265a2) blid2_navig_ring_pane_ParamLimits

0x78c8,	// (0x000265a2) blid2_navig_ring_pane

0x78d8,	// (0x000265b2) blid2_speed_pane_ParamLimits

0x78d8,	// (0x000265b2) blid2_speed_pane

0x78e4,	// (0x000265be) blid2_tripm_pane_g1_ParamLimits

0x78e4,	// (0x000265be) blid2_tripm_pane_g1

0x78f4,	// (0x000265ce) blid2_tripm_pane_g2_ParamLimits

0x78f4,	// (0x000265ce) blid2_tripm_pane_g2

0x7900,	// (0x000265da) blid2_tripm_pane_g3_ParamLimits

0x7900,	// (0x000265da) blid2_tripm_pane_g3

0x790c,	// (0x000265e6) blid2_tripm_pane_g4_ParamLimits

0x790c,	// (0x000265e6) blid2_tripm_pane_g4

0x7918,	// (0x000265f2) blid2_tripm_pane_g5_ParamLimits

0x7918,	// (0x000265f2) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0002e7c8) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0002e7c8) blid2_tripm_pane_g

0x7934,	// (0x0002660e) blid2_tripm_pane_t1_ParamLimits

0x7934,	// (0x0002660e) blid2_tripm_pane_t1

0x7946,	// (0x00026620) blid2_tripm_pane_t2_ParamLimits

0x7946,	// (0x00026620) blid2_tripm_pane_t2

0x7958,	// (0x00026632) blid2_tripm_pane_t3_ParamLimits

0x7958,	// (0x00026632) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0002e7d5) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0002e7d5) blid2_tripm_pane_t

0x798a,	// (0x00026664) cell_blid2_satellite_pane_ParamLimits

0x798a,	// (0x00026664) cell_blid2_satellite_pane

0x79a8,	// (0x00026682) cell_blid2_satellite_pane_g1

0xd844,	// (0x0002c51e) cell_blid2_satellite_pane_t1

0xc737,	// (0x0002b411) blid2_speed_pane_g1

0xd852,	// (0x0002c52c) blid2_speed_pane_t1

0xd860,	// (0x0002c53a) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0002e7de) blid2_speed_pane_t

0xc737,	// (0x0002b411) blid2_navig_ring_pane_g1

0x79b1,	// (0x0002668b) blid2_navig_ring_pane_g2

0x79b9,	// (0x00026693) blid2_navig_ring_pane_g3

0x79c1,	// (0x0002669b) blid2_navig_ring_pane_g4

0x79c9,	// (0x000266a3) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0002e7e3) blid2_navig_ring_pane_g

0x9beb,	// (0x000288c5) bg_popup_window_pane_cp011

0xd86e,	// (0x0002c548) popup_blid2_search_window_g1

0xd876,	// (0x0002c550) popup_blid2_search_window_t1

0xd884,	// (0x0002c55e) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0002e7ee) popup_blid2_search_window_t

0xa68f,	// (0x00029369) main_browser_pane_g1

0xa37f,	// (0x00029059) main_browser_pane_ParamLimits

0x19c7,	// (0x000206a1) bg_button_pane_cp011_ParamLimits

0x1d44,	// (0x00020a1e) cell_vitu2_function_pane_g1_ParamLimits

0xc2e6,	// (0x0002afc0) bg_popup_sub_pane_cp22_ParamLimits

0x7345,	// (0x0002601f) input_focus_pane_cp08_ParamLimits

0x735c,	// (0x00026036) popup_vitu2_query_button_pane_ParamLimits

0x735c,	// (0x00026036) popup_vitu2_query_button_pane

0x736d,	// (0x00026047) popup_vitu2_query_input_button_pane

0xd429,	// (0x0002c103) popup_vitu2_query_window_g1_ParamLimits

0x7377,	// (0x00026051) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002e6f6) popup_vitu2_query_window_g_ParamLimits

0x9beb,	// (0x000288c5) bg_button_pane_cp026

0x79d1,	// (0x000266ab) popup_vitu2_query_input_button_pane_g1

0x9beb,	// (0x000288c5) bg_button_pane_cp025

0xd892,	// (0x0002c56c) popup_vitu2_query_button_pane_t1

0x5bdb,	// (0x000248b5) main_mp3_pane_t6

0x5beb,	// (0x000248c5) popup_slider_window_cp01

0x18e9,	// (0x000205c3) cam4_battery_pane

0x19d5,	// (0x000206af) cam4_battery_pane_cp02

0x1eed,	// (0x00020bc7) cam4_battery_pane_cp01

0x1eed,	// (0x00020bc7) cam4_battery_pane_cp03

0xd51a,	// (0x0002c1f4) cam4_battery_pane_g1

0xc737,	// (0x0002b411) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0002e7f3) cam4_battery_pane_g

0xc5fd,	// (0x0002b2d7) popup_blid_sat_info2_window_t11

0x4665,	// (0x0002333f) aid_size_touch_mv_arrow_left_ParamLimits

0x4690,	// (0x0002336a) aid_size_touch_mv_arrow_right_ParamLimits

0xaddb,	// (0x00029ab5) navi_pane_g1_ParamLimits

0x46cf,	// (0x000233a9) navi_pane_g2_ParamLimits

0x46fd,	// (0x000233d7) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002e0bf) navi_pane_g_ParamLimits

0x4757,	// (0x00023431) navi_pane_mv_t1_ParamLimits

0x6660,	// (0x0002533a) grid_imed_effect_pane_ParamLimits

0x3131,	// (0x00021e0b) aid_placing_vt_slider_lsc

0xa5cc,	// (0x000292a6) aid_placing_vt_slider_prt

0xa5f8,	// (0x000292d2) bg_tb_trans_pane_cp01_ParamLimits

0xc887,	// (0x0002b561) popup_image_details_window_g1_ParamLimits

0xc89a,	// (0x0002b574) popup_image_details_window_g2_ParamLimits

0xc8af,	// (0x0002b589) popup_image_details_window_g3_ParamLimits

0xc8af,	// (0x0002b589) popup_image_details_window_g3

0xf718,	// (0x0002e3f2) popup_image_details_window_g_ParamLimits

0xc8c3,	// (0x0002b59d) popup_image_details_window_t1_ParamLimits

0xc8d5,	// (0x0002b5af) popup_image_details_window_t2_ParamLimits

0xc8ee,	// (0x0002b5c8) popup_image_details_window_t3_ParamLimits

0xc902,	// (0x0002b5dc) popup_image_details_window_t4_ParamLimits

0xc91d,	// (0x0002b5f7) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0002e3f9) popup_image_details_window_t_ParamLimits

0x76de,	// (0x000263b8) cl_header_name_pane_ParamLimits

0x76de,	// (0x000263b8) cl_header_name_pane

0x79d9,	// (0x000266b3) cl_header_name_pane_t1_ParamLimits

0x79d9,	// (0x000266b3) cl_header_name_pane_t1

0x79f0,	// (0x000266ca) cl_header_name_pane_t2_ParamLimits

0x79f0,	// (0x000266ca) cl_header_name_pane_t2

0x7a1a,	// (0x000266f4) cl_header_name_pane_t3_ParamLimits

0x7a1a,	// (0x000266f4) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0002e7f8) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0002e7f8) cl_header_name_pane_t

0x4728,	// (0x00023402) navi_pane_mv_g2_ParamLimits

0xd155,	// (0x0002be2f) field_vitu2_entry_pane_g1_ParamLimits

0xd161,	// (0x0002be3b) field_vitu2_entry_pane_g2_ParamLimits

0xd16d,	// (0x0002be47) field_vitu2_entry_pane_g3_ParamLimits

0xd16d,	// (0x0002be47) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002e5f5) field_vitu2_entry_pane_g_ParamLimits

0x1c10,	// (0x000208ea) cell_vitu2_itu_pane_g1_ParamLimits

0x1c22,	// (0x000208fc) cell_vitu2_itu_pane_g2_ParamLimits

0x1c22,	// (0x000208fc) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002e601) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002e601) cell_vitu2_itu_pane_g

0x19c7,	// (0x000206a1) bg_vkb2_func_pane_cp05_ParamLimits

0x19c7,	// (0x000206a1) bg_vkb2_func_pane_cp05

0x19c7,	// (0x000206a1) bg_vkb2_func_pane_cp03

0x19c7,	// (0x000206a1) bg_vkb2_func_pane_cp04

0x19c7,	// (0x000206a1) bg_vkb2_func_pane_cp10_ParamLimits

0x19c7,	// (0x000206a1) bg_vkb2_func_pane_cp10

0x7680,	// (0x0002635a) bg_vkb2_func_pane_cp08

0x7666,	// (0x00026340) bg_vkb2_func_pane_cp06

0x7674,	// (0x0002634e) bg_vkb2_func_pane_cp07

0xd7b0,	// (0x0002c48a) bg_vkb2_func_pane_cp11_ParamLimits

0xd7b0,	// (0x0002c48a) bg_vkb2_func_pane_cp11

0xd7c5,	// (0x0002c49f) bg_vkb2_func_pane_cp12_ParamLimits

0xd7c5,	// (0x0002c49f) bg_vkb2_func_pane_cp12

0x9beb,	// (0x000288c5) bg_vkb2_func_pane_cp09

0xd1aa,	// (0x0002be84) bg_vkb2_func_pane_g1

0xa7a0,	// (0x0002947a) bg_vkb2_func_pane_g2

0xd1b2,	// (0x0002be8c) bg_vkb2_func_pane_g3

0xd1ba,	// (0x0002be94) bg_vkb2_func_pane_g4

0xd3e2,	// (0x0002c0bc) bg_vkb2_func_pane_g5

0xd1d2,	// (0x0002beac) bg_vkb2_func_pane_g6

0xd1da,	// (0x0002beb4) bg_vkb2_func_pane_g7

0xd1ca,	// (0x0002bea4) bg_vkb2_func_pane_g8

0xa780,	// (0x0002945a) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0002e7ff) bg_vkb2_func_pane_g

0x7926,	// (0x00026600) blid2_tripm_pane_g6_ParamLimits

0x7926,	// (0x00026600) blid2_tripm_pane_g6

0xcfe7,	// (0x0002bcc1) mp4_progress_pane_g1

0x797e,	// (0x00026658) blid2_tripm_values_pane_ParamLimits

0x797e,	// (0x00026658) blid2_tripm_values_pane

0x7a3f,	// (0x00026719) blid2_tripm_values_pane_t1

0x7a4d,	// (0x00026727) blid2_tripm_values_pane_t2

0x7a5b,	// (0x00026735) blid2_tripm_values_pane_t3

0x7a69,	// (0x00026743) blid2_tripm_values_pane_t4

0x7a77,	// (0x00026751) blid2_tripm_values_pane_t5

0x7a85,	// (0x0002675f) blid2_tripm_values_pane_t6

0x7a93,	// (0x0002676d) blid2_tripm_values_pane_t7

0x7aa1,	// (0x0002677b) blid2_tripm_values_pane_t8

0x7aaf,	// (0x00026789) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0002e812) blid2_tripm_values_pane_t

0x316f,	// (0x00021e49) call_video_pane_t1_ParamLimits

0x318c,	// (0x00021e66) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002df48) call_video_pane_t_ParamLimits

0x4ca9,	// (0x00023983) msg_header_pane_g1_ParamLimits

0xb004,	// (0x00029cde) msg_header_pane_g2_ParamLimits

0xb004,	// (0x00029cde) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002e162) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002e162) msg_header_pane_g

0xa37f,	// (0x00029059) main_clock2_pane_ParamLimits

0x6467,	// (0x00025141) grid_clock2_toolbar_pane_ParamLimits

0x6467,	// (0x00025141) grid_clock2_toolbar_pane

0x6467,	// (0x00025141) listscroll_clock2_pane_ParamLimits

0x6467,	// (0x00025141) listscroll_clock2_pane

0x650f,	// (0x000251e9) main_clock2_pane_t3_ParamLimits

0x650f,	// (0x000251e9) main_clock2_pane_t3

0x6521,	// (0x000251fb) main_clock2_pane_t4_ParamLimits

0x6521,	// (0x000251fb) main_clock2_pane_t4

0xd8a0,	// (0x0002c57a) cell_clock2_toolbar_pane

0xd8a8,	// (0x0002c582) cell_clock2_toolbar_pane_cp01

0xd8a8,	// (0x0002c582) cell_clock2_toolbar_pane_cp02

0xd8b0,	// (0x0002c58a) cell_clock2_toolbar_pane_cp03

0xd8b8,	// (0x0002c592) list_clock2_pane

0xad41,	// (0x00029a1b) scroll_pane_cp10

0xd8c0,	// (0x0002c59a) list_single_clock2_pane_ParamLimits

0xd8c0,	// (0x0002c59a) list_single_clock2_pane

0xa535,	// (0x0002920f) list_highlight_pane_cp08

0xd8cd,	// (0x0002c5a7) list_single_clock2_pane_t1

0xd8db,	// (0x0002c5b5) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0002e825) list_single_clock2_pane_t

0x9beb,	// (0x000288c5) bg_button_pane_cp10

0xd8e9,	// (0x0002c5c3) cell_clock2_toolbar_pane_g1

0x0f96,	// (0x0001fc70) aid_main_viewer_pane_g1_ParamLimits

0x0f96,	// (0x0001fc70) aid_main_viewer_pane_g1

0x0fa2,	// (0x0001fc7c) aid_main_viewer_pane_g2_ParamLimits

0x0fa2,	// (0x0001fc7c) aid_main_viewer_pane_g2

0x4ce8,	// (0x000239c2) aid_main_viewer_pane_g3_ParamLimits

0x4ce8,	// (0x000239c2) aid_main_viewer_pane_g3

0x4cf9,	// (0x000239d3) aid_main_viewer_pane_g4_ParamLimits

0x4cf9,	// (0x000239d3) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002e173) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002e173) aid_main_viewer_pane_g

0x5441,	// (0x0002411b) main_calc_pane_ParamLimits

0x544e,	// (0x00024128) main_dialer2_pane_ParamLimits

0x9beb,	// (0x000288c5) main_cam6_pane

0x9beb,	// (0x000288c5) main_vid6_pane

0x6473,	// (0x0002514d) listscroll_gen_pane_cp06_ParamLimits

0x6473,	// (0x0002514d) listscroll_gen_pane_cp06

0x6533,	// (0x0002520d) main_clock2_pane_t5_ParamLimits

0x6533,	// (0x0002520d) main_clock2_pane_t5

0x6582,	// (0x0002525c) aid_call2_pane_cp10_ParamLimits

0x6594,	// (0x0002526e) aid_call_pane_cp10_ParamLimits

0xadb0,	// (0x00029a8a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadb0,	// (0x00029a8a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x65a6,	// (0x00025280) popup_clock_analogue_window_cp10_g3_ParamLimits

0x65a6,	// (0x00025280) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadb0,	// (0x00029a8a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002e4ae) popup_clock_analogue_window_cp10_g_ParamLimits

0x65b8,	// (0x00025292) popup_clock_analogue_window_cp10_t1_ParamLimits

0x69c8,	// (0x000256a2) cell_dialer2_keypad_pane_g2_ParamLimits

0x69c8,	// (0x000256a2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002e594) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002e594) cell_dialer2_keypad_pane_g

0x69e4,	// (0x000256be) cell_dialer2_keypad_pane_t1

0x6e74,	// (0x00025b4e) main_cset_text2_pane_ParamLimits

0x6e74,	// (0x00025b4e) main_cset_text2_pane

0xd65a,	// (0x0002c334) area_vitu2_query_pane_g1_ParamLimits

0x7605,	// (0x000262df) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002e749) area_vitu2_query_pane_g_ParamLimits

0xd6de,	// (0x0002c3b8) area_vitu2_query_pane_t7_ParamLimits

0xd6de,	// (0x0002c3b8) area_vitu2_query_pane_t7

0x7666,	// (0x00026340) bg_button_pane_cp018_ParamLimits

0x7674,	// (0x0002634e) bg_button_pane_cp021_ParamLimits

0x7680,	// (0x0002635a) bg_button_pane_cp022_ParamLimits

0x7680,	// (0x0002635a) bg_vkb2_func_pane_cp08_ParamLimits

0x7666,	// (0x00026340) bg_vkb2_func_pane_cp06_ParamLimits

0x7674,	// (0x0002634e) bg_vkb2_func_pane_cp07_ParamLimits

0x7691,	// (0x0002636b) input_focus_pane_cp09_ParamLimits

0x1f8b,	// (0x00020c65) cam6_autofocus_pane_ParamLimits

0x1f8b,	// (0x00020c65) cam6_autofocus_pane

0x1fad,	// (0x00020c87) cam6_image_uncrop_pane_ParamLimits

0x1fad,	// (0x00020c87) cam6_image_uncrop_pane

0x1fda,	// (0x00020cb4) cam6_indi_pane_ParamLimits

0x1fda,	// (0x00020cb4) cam6_indi_pane

0x1ff4,	// (0x00020cce) cam6_mode_pane_ParamLimits

0x1ff4,	// (0x00020cce) cam6_mode_pane

0x2008,	// (0x00020ce2) cam6_timer_pane_ParamLimits

0x2008,	// (0x00020ce2) cam6_timer_pane

0x2014,	// (0x00020cee) cam6_zoom_pane_ParamLimits

0x2014,	// (0x00020cee) cam6_zoom_pane

0x7abd,	// (0x00026797) cam6_mode_pane_g1_ParamLimits

0x7abd,	// (0x00026797) cam6_mode_pane_g1

0x7ac9,	// (0x000267a3) cam6_mode_pane_g2_ParamLimits

0x7ac9,	// (0x000267a3) cam6_mode_pane_g2

0x7ad5,	// (0x000267af) cam6_mode_pane_g3_ParamLimits

0x7ad5,	// (0x000267af) cam6_mode_pane_g3

0x7ae1,	// (0x000267bb) cam6_mode_pane_g4_ParamLimits

0x7ae1,	// (0x000267bb) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0002e82a) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0002e82a) cam6_mode_pane_g

0xd0cc,	// (0x0002bda6) bg_tb_trans_pane_cp08_ParamLimits

0xd0cc,	// (0x0002bda6) bg_tb_trans_pane_cp08

0xd8f1,	// (0x0002c5cb) cam6_battery_pane_ParamLimits

0xd8f1,	// (0x0002c5cb) cam6_battery_pane

0xd907,	// (0x0002c5e1) cam6_indi_pane_g1_ParamLimits

0xd907,	// (0x0002c5e1) cam6_indi_pane_g1

0xd919,	// (0x0002c5f3) cam6_indi_pane_g2_ParamLimits

0xd919,	// (0x0002c5f3) cam6_indi_pane_g2

0xd92b,	// (0x0002c605) cam6_indi_pane_g3_ParamLimits

0xd92b,	// (0x0002c605) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0002e833) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0002e833) cam6_indi_pane_g

0xd93d,	// (0x0002c617) cam6_indi_pane_t1_ParamLimits

0xd93d,	// (0x0002c617) cam6_indi_pane_t1

0x6b67,	// (0x00025841) cam6_autofocus_pane_g1

0x6b5f,	// (0x00025839) cam6_autofocus_pane_g2

0x6b77,	// (0x00025851) cam6_autofocus_pane_g3

0x6b6f,	// (0x00025849) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0002e83a) cam6_autofocus_pane_g

0xd963,	// (0x0002c63d) cam6_timer_pane_g1

0xd96b,	// (0x0002c645) cam6_timer_pane_t1

0xd979,	// (0x0002c653) cam6_zoom_cont_pane

0xd981,	// (0x0002c65b) cam6_zoom_pane_g1

0xd989,	// (0x0002c663) cam6_zoom_pane_g2

0x7aed,	// (0x000267c7) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0002e843) cam6_zoom_pane_g

0xc737,	// (0x0002b411) cam6_battery_pane_g1

0xc737,	// (0x0002b411) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0002e3b6) cam6_battery_pane_g

0xd991,	// (0x0002c66b) cam6_zoom_cont_pane_g1

0xd99a,	// (0x0002c674) cam6_zoom_cont_pane_g2

0xd9a3,	// (0x0002c67d) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0002e84a) cam6_zoom_cont_pane_g

0x7b0a,	// (0x000267e4) cam6_mode_pane_cp_ParamLimits

0x7b0a,	// (0x000267e4) cam6_mode_pane_cp

0x7b1e,	// (0x000267f8) cam6_zoom_pane_cp_ParamLimits

0x7b1e,	// (0x000267f8) cam6_zoom_pane_cp

0x7b3a,	// (0x00026814) vid6_image_uncrop_cif_pane_ParamLimits

0x7b3a,	// (0x00026814) vid6_image_uncrop_cif_pane

0x7b66,	// (0x00026840) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b66,	// (0x00026840) vid6_image_uncrop_nhd_pane

0x7b85,	// (0x0002685f) vid6_image_uncrop_vga_pane_ParamLimits

0x7b85,	// (0x0002685f) vid6_image_uncrop_vga_pane

0x7ba4,	// (0x0002687e) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ba4,	// (0x0002687e) vid6_image_uncrop_wvga_pane

0x7bc3,	// (0x0002689d) vid6_indi_pane_ParamLimits

0x7bc3,	// (0x0002689d) vid6_indi_pane

0xd0cc,	// (0x0002bda6) bg_tb_trans_pane_cp09_ParamLimits

0xd0cc,	// (0x0002bda6) bg_tb_trans_pane_cp09

0xd9bb,	// (0x0002c695) cam6_battery_pane_cp_ParamLimits

0xd9bb,	// (0x0002c695) cam6_battery_pane_cp

0xd9c7,	// (0x0002c6a1) vid6_indi_pane_g1_ParamLimits

0xd9c7,	// (0x0002c6a1) vid6_indi_pane_g1

0xd9d9,	// (0x0002c6b3) vid6_indi_pane_g2_ParamLimits

0xd9d9,	// (0x0002c6b3) vid6_indi_pane_g2

0xd9eb,	// (0x0002c6c5) vid6_indi_pane_g3_ParamLimits

0xd9eb,	// (0x0002c6c5) vid6_indi_pane_g3

0xda02,	// (0x0002c6dc) vid6_indi_pane_g4_ParamLimits

0xda02,	// (0x0002c6dc) vid6_indi_pane_g4

0xda19,	// (0x0002c6f3) vid6_indi_pane_g5_ParamLimits

0xda19,	// (0x0002c6f3) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0002e851) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0002e851) vid6_indi_pane_g

0xda33,	// (0x0002c70d) vid6_indi_pane_t1_ParamLimits

0xda33,	// (0x0002c70d) vid6_indi_pane_t1

0xda49,	// (0x0002c723) vid6_indi_pane_t2_ParamLimits

0xda49,	// (0x0002c723) vid6_indi_pane_t2

0xda71,	// (0x0002c74b) vid6_indi_pane_t3_ParamLimits

0xda71,	// (0x0002c74b) vid6_indi_pane_t3

0xda99,	// (0x0002c773) vid6_indi_pane_t4_ParamLimits

0xda99,	// (0x0002c773) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0002e85c) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0002e85c) vid6_indi_pane_t

0xdabd,	// (0x0002c797) wait_bar_pane_cp08

0x7be8,	// (0x000268c2) main_cset_text2_pane_t1_ParamLimits

0x7be8,	// (0x000268c2) main_cset_text2_pane_t1

0x7af5,	// (0x000267cf) listscroll_gen_pane_cp06_t1_ParamLimits

0x7af5,	// (0x000267cf) listscroll_gen_pane_cp06_t1

0x9beb,	// (0x000288c5) main_cam6_set_pane

0x18db,	// (0x000205b5) bg_tb_trans_pane_cp06_ParamLimits

0x18f1,	// (0x000205cb) cam4_indicators_pane_g1_ParamLimits

0x1902,	// (0x000205dc) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002e5d1) cam4_indicators_pane_g_ParamLimits

0x191a,	// (0x000205f4) cam4_indicators_pane_t1_ParamLimits

0x19c7,	// (0x000206a1) bg_tb_trans_pane_cp07_ParamLimits

0x19df,	// (0x000206b9) vid4_indicators_pane_g1_ParamLimits

0x19f5,	// (0x000206cf) vid4_indicators_pane_g2_ParamLimits

0x1a09,	// (0x000206e3) vid4_indicators_pane_g3_ParamLimits

0x1a1c,	// (0x000206f6) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002e5e3) vid4_indicators_pane_g_ParamLimits

0x1a3a,	// (0x00020714) vid4_indicators_pane_t1_ParamLimits

0x1ef5,	// (0x00020bcf) vid4_progress_pane_g1_ParamLimits

0x1f07,	// (0x00020be1) vid4_progress_pane_g2_ParamLimits

0x0fd8,	// (0x0001fcb2) vid4_progress_pane_g3_ParamLimits

0x1f19,	// (0x00020bf3) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002e794) vid4_progress_pane_g_ParamLimits

0x1f37,	// (0x00020c11) vid4_progress_pane_t1_ParamLimits

0x1f4c,	// (0x00020c26) vid4_progress_pane_t2_ParamLimits

0x1f62,	// (0x00020c3c) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002e79f) vid4_progress_pane_t_ParamLimits

0x1f77,	// (0x00020c51) wait_bar_pane_cp07_ParamLimits

0x7c0f,	// (0x000268e9) main_cam6_set_pane_g2_ParamLimits

0x7c0f,	// (0x000268e9) main_cam6_set_pane_g2

0x7c1b,	// (0x000268f5) main_cset6_listscroll_pane_ParamLimits

0x7c1b,	// (0x000268f5) main_cset6_listscroll_pane

0x7c48,	// (0x00026922) main_cset6_slider_pane_ParamLimits

0x7c48,	// (0x00026922) main_cset6_slider_pane

0x7c54,	// (0x0002692e) main_cset6_text2_pane_ParamLimits

0x7c54,	// (0x0002692e) main_cset6_text2_pane

0xdacc,	// (0x0002c7a6) main_cset6_text_pane

0xdad4,	// (0x0002c7ae) main_cset_list_pane_copy1_ParamLimits

0xdad4,	// (0x0002c7ae) main_cset_list_pane_copy1

0xdae4,	// (0x0002c7be) scroll_pane_cp028_copy1

0x7c67,	// (0x00026941) cset_list_set_pane_copy1

0x7c77,	// (0x00026951) aid_position_infowindow_above_copy1

0x7c7f,	// (0x00026959) aid_position_infowindow_below_copy1

0x7c87,	// (0x00026961) cset_list_set_pane_g1_copy1

0x7c8f,	// (0x00026969) cset_list_set_pane_g3_copy1_ParamLimits

0x7c8f,	// (0x00026969) cset_list_set_pane_g3_copy1

0x7c9e,	// (0x00026978) cset_list_set_pane_t1_copy1_ParamLimits

0x7c9e,	// (0x00026978) cset_list_set_pane_t1_copy1

0xa5f8,	// (0x000292d2) list_highlight_pane_cp021_copy1_ParamLimits

0xa5f8,	// (0x000292d2) list_highlight_pane_cp021_copy1

0xdaed,	// (0x0002c7c7) cset6_slider_pane_ParamLimits

0xdaed,	// (0x0002c7c7) cset6_slider_pane

0xdb19,	// (0x0002c7f3) main_cset6_slider_pane_g1_ParamLimits

0xdb19,	// (0x0002c7f3) main_cset6_slider_pane_g1

0x7cb3,	// (0x0002698d) main_cset6_slider_pane_g2_ParamLimits

0x7cb3,	// (0x0002698d) main_cset6_slider_pane_g2

0xdb41,	// (0x0002c81b) main_cset6_slider_pane_g3_ParamLimits

0xdb41,	// (0x0002c81b) main_cset6_slider_pane_g3

0x7cdb,	// (0x000269b5) main_cset6_slider_pane_g4_ParamLimits

0x7cdb,	// (0x000269b5) main_cset6_slider_pane_g4

0x7ce7,	// (0x000269c1) main_cset6_slider_pane_g5_ParamLimits

0x7ce7,	// (0x000269c1) main_cset6_slider_pane_g5

0xd2dd,	// (0x0002bfb7) main_cset6_slider_pane_g7_ParamLimits

0xd2dd,	// (0x0002bfb7) main_cset6_slider_pane_g7

0xd2e9,	// (0x0002bfc3) main_cset6_slider_pane_g8_ParamLimits

0xd2e9,	// (0x0002bfc3) main_cset6_slider_pane_g8

0x7cf3,	// (0x000269cd) main_cset6_slider_pane_g9_ParamLimits

0x7cf3,	// (0x000269cd) main_cset6_slider_pane_g9

0x7cff,	// (0x000269d9) main_cset6_slider_pane_g10_ParamLimits

0x7cff,	// (0x000269d9) main_cset6_slider_pane_g10

0x7d0b,	// (0x000269e5) main_cset6_slider_pane_g11_ParamLimits

0x7d0b,	// (0x000269e5) main_cset6_slider_pane_g11

0x7d17,	// (0x000269f1) main_cset6_slider_pane_g12_ParamLimits

0x7d17,	// (0x000269f1) main_cset6_slider_pane_g12

0x7d23,	// (0x000269fd) main_cset6_slider_pane_g13_ParamLimits

0x7d23,	// (0x000269fd) main_cset6_slider_pane_g13

0x7d2f,	// (0x00026a09) main_cset6_slider_pane_g14_ParamLimits

0x7d2f,	// (0x00026a09) main_cset6_slider_pane_g14

0x7d3b,	// (0x00026a15) main_cset6_slider_pane_g15_ParamLimits

0x7d3b,	// (0x00026a15) main_cset6_slider_pane_g15

0x7d53,	// (0x00026a2d) main_cset6_slider_pane_g16_ParamLimits

0x7d53,	// (0x00026a2d) main_cset6_slider_pane_g16

0x7d5f,	// (0x00026a39) main_cset6_slider_pane_g17_ParamLimits

0x7d5f,	// (0x00026a39) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0002e865) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0002e865) main_cset6_slider_pane_g

0xdb4d,	// (0x0002c827) main_cset6_slider_pane_t1_ParamLimits

0xdb4d,	// (0x0002c827) main_cset6_slider_pane_t1

0x7d83,	// (0x00026a5d) main_cset6_slider_pane_t2_ParamLimits

0x7d83,	// (0x00026a5d) main_cset6_slider_pane_t2

0x7dae,	// (0x00026a88) main_cset6_slider_pane_t3_ParamLimits

0x7dae,	// (0x00026a88) main_cset6_slider_pane_t3

0x7dd9,	// (0x00026ab3) main_cset6_slider_pane_t4_ParamLimits

0x7dd9,	// (0x00026ab3) main_cset6_slider_pane_t4

0x7e04,	// (0x00026ade) main_cset6_slider_pane_t5_ParamLimits

0x7e04,	// (0x00026ade) main_cset6_slider_pane_t5

0xdb8e,	// (0x0002c868) main_cset6_slider_pane_t7_ParamLimits

0xdb8e,	// (0x0002c868) main_cset6_slider_pane_t7

0x7e2f,	// (0x00026b09) main_cset6_slider_pane_t8_ParamLimits

0x7e2f,	// (0x00026b09) main_cset6_slider_pane_t8

0x7e53,	// (0x00026b2d) main_cset6_slider_pane_t9_ParamLimits

0x7e53,	// (0x00026b2d) main_cset6_slider_pane_t9

0x7e77,	// (0x00026b51) main_cset6_slider_pane_t10_ParamLimits

0x7e77,	// (0x00026b51) main_cset6_slider_pane_t10

0x7e9b,	// (0x00026b75) main_cset6_slider_pane_t11_ParamLimits

0x7e9b,	// (0x00026b75) main_cset6_slider_pane_t11

0xdbc4,	// (0x0002c89e) main_cset6_slider_pane_t14_ParamLimits

0xdbc4,	// (0x0002c89e) main_cset6_slider_pane_t14

0xdbfd,	// (0x0002c8d7) main_cset6_slider_pane_t15_ParamLimits

0xdbfd,	// (0x0002c8d7) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0002e88a) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0002e88a) main_cset6_slider_pane_t

0xd4df,	// (0x0002c1b9) cset_slider_pane_g1_copy1

0xd4e8,	// (0x0002c1c2) cset_slider_pane_g2_copy1

0xd4f1,	// (0x0002c1cb) cset_slider_pane_g3_copy1

0x9beb,	// (0x000288c5) bg_popup_sub_pane_cp011_copy1

0xdc36,	// (0x0002c910) main_cset_text_pane_g1_copy1

0xd43d,	// (0x0002c117) main_cset_text_pane_t1_copy1

0xd44b,	// (0x0002c125) main_cset_text_pane_t2_copy1

0xd459,	// (0x0002c133) main_cset_text_pane_t3_copy1

0xd467,	// (0x0002c141) main_cset_text_pane_t4_copy1

0xd475,	// (0x0002c14f) main_cset_text_pane_t5_copy1

0xdc3e,	// (0x0002c918) main_cset_text_pane_t6_copy1

0xdc4c,	// (0x0002c926) main_cset_text_pane_t7_copy1

0x7f8e,	// (0x00026c68) main_cset_text2_pane_t1_copy1

0xa5f8,	// (0x000292d2) main_ncimui_pane

0x5493,	// (0x0002416d) popup_query_ncimui_window_ParamLimits

0x5493,	// (0x0002416d) popup_query_ncimui_window

0xc9cc,	// (0x0002b6a6) field_cale_ev2_pane_g4_ParamLimits

0xc9cc,	// (0x0002b6a6) field_cale_ev2_pane_g4

0x6968,	// (0x00025642) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6968,	// (0x00025642) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002e56f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002e56f) cell_video_dialer_keypad_pane_g

0x6980,	// (0x0002565a) cell_video_dialer_keypad_pane_t1

0x9beb,	// (0x000288c5) bg_popup_window_pane_cp012

0xac2d,	// (0x00029907) heading_pane_cp06

0xdc78,	// (0x0002c952) ncim_query_content_pane

0x9beb,	// (0x000288c5) bg_popup_heading_pane_cp01

0xdc80,	// (0x0002c95a) ncim_heading_pane_t1

0xdc8e,	// (0x0002c968) ncim_indicator_popup_pane

0xdca0,	// (0x0002c97a) ncim_query_button_pane

0xdcb6,	// (0x0002c990) ncim_query_content_pane_t1

0xdcc8,	// (0x0002c9a2) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0002e8ce) ncim_query_content_pane_t

0xdd02,	// (0x0002c9dc) ncim_query_list_pane

0xdd14,	// (0x0002c9ee) ncim_query_popup_pane

0xdc8e,	// (0x0002c968) ncim_indicator_popup_pane_ParamLimits

0x80ea,	// (0x00026dc4) ncim_query_content_pane_g1_ParamLimits

0x80ea,	// (0x00026dc4) ncim_query_content_pane_g1

0xdcb6,	// (0x0002c990) ncim_query_content_pane_t1_ParamLimits

0xdcc8,	// (0x0002c9a2) ncim_query_content_pane_t2_ParamLimits

0x80f6,	// (0x00026dd0) ncim_query_content_pane_t3_ParamLimits

0x80f6,	// (0x00026dd0) ncim_query_content_pane_t3

0x8113,	// (0x00026ded) ncim_query_content_pane_t4_ParamLimits

0x8113,	// (0x00026ded) ncim_query_content_pane_t4

0x8130,	// (0x00026e0a) ncim_query_content_pane_t5_ParamLimits

0x8130,	// (0x00026e0a) ncim_query_content_pane_t5

0xdcda,	// (0x0002c9b4) ncim_query_content_pane_t6_ParamLimits

0xdcda,	// (0x0002c9b4) ncim_query_content_pane_t6

0xfbf4,	// (0x0002e8ce) ncim_query_content_pane_t_ParamLimits

0xdd02,	// (0x0002c9dc) ncim_query_list_pane_ParamLimits

0xdd14,	// (0x0002c9ee) ncim_query_popup_pane_ParamLimits

0xdd28,	// (0x0002ca02) wait_bar_pane_cp04

0x9beb,	// (0x000288c5) input_focus_pane_cp011

0xdd30,	// (0x0002ca0a) ncim_query_popup_pane_t1

0xdd3e,	// (0x0002ca18) ncim_list_query_list_pane_ParamLimits

0xdd3e,	// (0x0002ca18) ncim_list_query_list_pane

0x9beb,	// (0x000288c5) bg_button_pane_cp027

0xdd51,	// (0x0002ca2b) ncim_query_button_pane_g1

0x9beb,	// (0x000288c5) list_highlight_pane_cp012

0xdd5b,	// (0x0002ca35) ncim_list_query_list_pane_g1

0xdd63,	// (0x0002ca3d) ncim_list_query_list_pane_t1

0x190e,	// (0x000205e8) cam4_indicators_pane_g3_ParamLimits

0x190e,	// (0x000205e8) cam4_indicators_pane_g3

0x1a28,	// (0x00020702) vid4_indicators_pane_g5_ParamLimits

0x1a28,	// (0x00020702) vid4_indicators_pane_g5

0x1f28,	// (0x00020c02) vid4_progress_pane_g5_ParamLimits

0x1f28,	// (0x00020c02) vid4_progress_pane_g5

0x7fc0,	// (0x00026c9a) main_ncimui_pane_g1

0x802c,	// (0x00026d06) ncimui_group_query_pane_ParamLimits

0x802c,	// (0x00026d06) ncimui_group_query_pane

0x8086,	// (0x00026d60) ncimui_list_pane_ParamLimits

0x8086,	// (0x00026d60) ncimui_list_pane

0x80ad,	// (0x00026d87) ncimui_text_pane_ParamLimits

0x80ad,	// (0x00026d87) ncimui_text_pane

0x814d,	// (0x00026e27) ncimui_text_pane_t1_ParamLimits

0x814d,	// (0x00026e27) ncimui_text_pane_t1

0xdd71,	// (0x0002ca4b) ncimui_list_single_graphic_pane_ParamLimits

0xdd71,	// (0x0002ca4b) ncimui_list_single_graphic_pane

0x816c,	// (0x00026e46) ncimui_query_pane_ParamLimits

0x816c,	// (0x00026e46) ncimui_query_pane

0x9beb,	// (0x000288c5) list_highlight_pane_cp013

0xdd81,	// (0x0002ca5b) ncim_list_query_list_pane_t1_copy1

0xdd5b,	// (0x0002ca35) ncim_list_single_graphic_pane_g1

0xdd8f,	// (0x0002ca69) ncim_query_button_pane_cp01

0xdd9b,	// (0x0002ca75) ncim_query_entry_pane_ParamLimits

0xdd9b,	// (0x0002ca75) ncim_query_entry_pane

0xddae,	// (0x0002ca88) ncimui_query_pane_g1

0xddba,	// (0x0002ca94) ncimui_query_pane_t1_ParamLimits

0xddba,	// (0x0002ca94) ncimui_query_pane_t1

0xa5f8,	// (0x000292d2) input_focus_pane_cp012

0xddd3,	// (0x0002caad) ncim_query_entry_pane_t1

0xa37f,	// (0x00029059) main_im_pane_ParamLimits

0xa5f8,	// (0x000292d2) main_mobtv_pane_ParamLimits

0xa5f8,	// (0x000292d2) main_mobtv_pane

0x7d6b,	// (0x00026a45) main_cset6_slider_pane_g18_ParamLimits

0x7d6b,	// (0x00026a45) main_cset6_slider_pane_g18

0x7d77,	// (0x00026a51) main_cset6_slider_pane_g19_ParamLimits

0x7d77,	// (0x00026a51) main_cset6_slider_pane_g19

0xd16d,	// (0x0002be47) bg_main_mobtv_pane_ParamLimits

0xd16d,	// (0x0002be47) bg_main_mobtv_pane

0x817f,	// (0x00026e59) main_mobtv_info_pane

0x818a,	// (0x00026e64) main_mobtv_loading_pane_ParamLimits

0x818a,	// (0x00026e64) main_mobtv_loading_pane

0xdde5,	// (0x0002cabf) main_mobtv_pg_channel_list_pane

0xddef,	// (0x0002cac9) main_mobtv_pg_hdr_pane

0x8197,	// (0x00026e71) main_mobtv_programe_curr_pane_ParamLimits

0x8197,	// (0x00026e71) main_mobtv_programe_curr_pane

0x81a4,	// (0x00026e7e) main_mobtv_programe_next_pane_ParamLimits

0x81a4,	// (0x00026e7e) main_mobtv_programe_next_pane

0xddf8,	// (0x0002cad2) popup_mobtv_noti_window

0xc737,	// (0x0002b411) main_tv_pg_hdr_pane_g1

0xde02,	// (0x0002cadc) main_tv_pg_hdr_pane_g2

0xde0a,	// (0x0002cae4) main_tv_pg_hdr_pane_g3

0xde12,	// (0x0002caec) main_tv_pg_hdr_pane_g4

0xde1a,	// (0x0002caf4) main_tv_pg_hdr_pane_g5

0xde24,	// (0x0002cafe) main_tv_pg_hdr_pane_g6

0xde2e,	// (0x0002cb08) main_tv_pg_hdr_pane_g7

0xde38,	// (0x0002cb12) main_tv_pg_hdr_pane_g8

0xde42,	// (0x0002cb1c) main_tv_pg_hdr_pane_g9

0xde4c,	// (0x0002cb26) main_tv_pg_hdr_pane_g10

0xde56,	// (0x0002cb30) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0002e8db) main_tv_pg_hdr_pane_g

0xde60,	// (0x0002cb3a) main_tv_pg_hdr_pane_t1

0xde6e,	// (0x0002cb48) main_tv_pg_hdr_pane_t2

0xde7c,	// (0x0002cb56) main_tv_pg_hdr_pane_t3

0xde8c,	// (0x0002cb66) main_tv_pg_hdr_pane_t4

0xde9c,	// (0x0002cb76) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0002e8f2) main_tv_pg_hdr_pane_t

0xdeac,	// (0x0002cb86) single_mobtv_pg_channel_pane_ParamLimits

0xdeac,	// (0x0002cb86) single_mobtv_pg_channel_pane

0xdebe,	// (0x0002cb98) single_mobtv_pg_channel_table_pane

0xdec7,	// (0x0002cba1) single_mobtv_pg_channel_thumb_pane

0xded0,	// (0x0002cbaa) single_tv_pg_channel_pane_g1

0xded9,	// (0x0002cbb3) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0002e8fd) single_tv_pg_channel_pane_g

0xc967,	// (0x0002b641) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc967,	// (0x0002b641) bg_single_mobtv_pg_channel_thumb_pane

0xdee2,	// (0x0002cbbc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdee2,	// (0x0002cbbc) single_mobtv_pg_channel_thumb_pane_g1

0xdef0,	// (0x0002cbca) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdef0,	// (0x0002cbca) single_mobtv_pg_channel_thumb_pane_g2

0xdefc,	// (0x0002cbd6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdefc,	// (0x0002cbd6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0002e902) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0002e902) single_mobtv_pg_channel_thumb_pane_g

0xdf08,	// (0x0002cbe2) single_mobtv_pg_channel_thumb_pane_t1

0xdf16,	// (0x0002cbf0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0002e909) single_mobtv_pg_channel_thumb_pane_t

0xc737,	// (0x0002b411) bg_single_mobtv_pg_channel_table_pane_g1

0xc737,	// (0x0002b411) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0002e3b6) bg_single_mobtv_pg_channel_table_pane_g

0xdf24,	// (0x0002cbfe) single_mobtv_pg_channel_table_pane_t1

0xdf32,	// (0x0002cc0c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0002e90e) single_mobtv_pg_channel_table_pane_t

0x81b9,	// (0x00026e93) main_mobtv_info_pane_g1_ParamLimits

0x81b9,	// (0x00026e93) main_mobtv_info_pane_g1

0x81d5,	// (0x00026eaf) main_mobtv_info_pane_t1_ParamLimits

0x81d5,	// (0x00026eaf) main_mobtv_info_pane_t1

0x824d,	// (0x00026f27) main_mobtv_info_pane_t2_ParamLimits

0x824d,	// (0x00026f27) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0002e918) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0002e918) main_mobtv_info_pane_t

0x82de,	// (0x00026fb8) wait_bar_pane_cp05

0x82f0,	// (0x00026fca) main_mobtv_loading_pane_g1_ParamLimits

0x82f0,	// (0x00026fca) main_mobtv_loading_pane_g1

0x82fc,	// (0x00026fd6) main_mobtv_loading_pane_g2_ParamLimits

0x82fc,	// (0x00026fd6) main_mobtv_loading_pane_g2

0x8308,	// (0x00026fe2) main_mobtv_loading_pane_g3_ParamLimits

0x8308,	// (0x00026fe2) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0002e91f) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0002e91f) main_mobtv_loading_pane_g

0xdf40,	// (0x0002cc1a) main_mobtv_loading_pane_t1_ParamLimits

0xdf40,	// (0x0002cc1a) main_mobtv_loading_pane_t1

0xdf58,	// (0x0002cc32) main_mobtv_loading_pane_t2_ParamLimits

0xdf58,	// (0x0002cc32) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0002e926) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0002e926) main_mobtv_loading_pane_t

0x8316,	// (0x00026ff0) wait_bar_pane_cp06_ParamLimits

0x8316,	// (0x00026ff0) wait_bar_pane_cp06

0xdf7c,	// (0x0002cc56) main_mobtv_programe_curr_pane_t1

0xdf8a,	// (0x0002cc64) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0002e92b) main_mobtv_programe_curr_pane_t

0xdf98,	// (0x0002cc72) main_mobtv_programe_next_pane_t1

0xdfa6,	// (0x0002cc80) main_mobtv_programe_next_pane_t2

0xdfb4,	// (0x0002cc8e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0002e930) main_mobtv_programe_next_pane_t

0x9beb,	// (0x000288c5) bg_popup_mobtv_noti_window_pane

0xdfc2,	// (0x0002cc9c) popup_mobtv_noti_window_g1

0xdfca,	// (0x0002cca4) popup_mobtv_noti_window_t1

0xdfd8,	// (0x0002ccb2) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0002e937) popup_mobtv_noti_window_t

0xc737,	// (0x0002b411) bg_popup_mobtv_noti_window_pane_g1

0x9beb,	// (0x000288c5) sc_clock_pane

0x9beb,	// (0x000288c5) main_fs_bigclock_pane

0x796c,	// (0x00026646) blid2_tripm_pane_t4_ParamLimits

0x796c,	// (0x00026646) blid2_tripm_pane_t4

0x8322,	// (0x00026ffc) sc_clock_pane_g1_ParamLimits

0x8322,	// (0x00026ffc) sc_clock_pane_g1

0x8330,	// (0x0002700a) sc_clock_pane_t1_ParamLimits

0x8330,	// (0x0002700a) sc_clock_pane_t1

0x8345,	// (0x0002701f) sc_clock_pane_t2_ParamLimits

0x8345,	// (0x0002701f) sc_clock_pane_t2

0x8357,	// (0x00027031) sc_clock_pane_t3_ParamLimits

0x8357,	// (0x00027031) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0002e93c) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0002e93c) sc_clock_pane_t

0x91de,	// (0x00027eb8) main_fs_bigclock_indicator_pane_ParamLimits

0x91de,	// (0x00027eb8) main_fs_bigclock_indicator_pane

0x83ea,	// (0x000270c4) main_fs_bigclock_pane_g1_ParamLimits

0x83ea,	// (0x000270c4) main_fs_bigclock_pane_g1

0x91ea,	// (0x00027ec4) main_fs_bigclock_pane_t1_ParamLimits

0x91ea,	// (0x00027ec4) main_fs_bigclock_pane_t1

0x91fc,	// (0x00027ed6) main_fs_bigclock_pane_t2_ParamLimits

0x91fc,	// (0x00027ed6) main_fs_bigclock_pane_t2

0x9210,	// (0x00027eea) main_fs_bigclock_pane_t3_ParamLimits

0x9210,	// (0x00027eea) main_fs_bigclock_pane_t3

0x0002,

0xfe67,	// (0x0002eb41) main_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x0002eb41) main_fs_bigclock_pane_t

0xec24,	// (0x0002d8fe) main_fs_bigclock_indicator_pane_g1

0xdca8,	// (0x0002c982) ncim_query_content_pane_g2_ParamLimits

0xdca8,	// (0x0002c982) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0002e8c9) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0002e8c9) ncim_query_content_pane_g

0x8369,	// (0x00027043) sc_clock_pane_t4_ParamLimits

0x8369,	// (0x00027043) sc_clock_pane_t4

0xa5f8,	// (0x000292d2) main_radioblah_pane

0xd0da,	// (0x0002bdb4) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0da,	// (0x0002bdb4) cell_call4_button_pane_t1_copy1

0x7fdc,	// (0x00026cb6) main_ncimui_pane_t1_ParamLimits

0x7fdc,	// (0x00026cb6) main_ncimui_pane_t1

0x7ff6,	// (0x00026cd0) main_ncimui_pane_t2_ParamLimits

0x7ff6,	// (0x00026cd0) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0002e8c2) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0002e8c2) main_ncimui_pane_t

0xe12b,	// (0x0002ce05) main_radioblah_anim_pane_ParamLimits

0xe12b,	// (0x0002ce05) main_radioblah_anim_pane

0xe13c,	// (0x0002ce16) main_radioblah_info_pane_ParamLimits

0xe13c,	// (0x0002ce16) main_radioblah_info_pane

0xe150,	// (0x0002ce2a) main_radioblah_pane_t1_ParamLimits

0xe150,	// (0x0002ce2a) main_radioblah_pane_t1

0xe16c,	// (0x0002ce46) main_radioblah_pane_t2_ParamLimits

0xe16c,	// (0x0002ce46) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0002e95d) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0002e95d) main_radioblah_pane_t

0x843c,	// (0x00027116) main_radioblah_rocker_ctrl_pane_ParamLimits

0x843c,	// (0x00027116) main_radioblah_rocker_ctrl_pane

0xe1b4,	// (0x0002ce8e) main_radioblah_info_pane_t1_ParamLimits

0xe1b4,	// (0x0002ce8e) main_radioblah_info_pane_t1

0x8485,	// (0x0002715f) main_radioblah_info_pane_t2_ParamLimits

0x8485,	// (0x0002715f) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0002e966) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0002e966) main_radioblah_info_pane_t

0xc737,	// (0x0002b411) main_radioblah_rocker_ctrl_pane_g1

0x8535,	// (0x0002720f) main_radioblah_rocker_ctrl_pane_g2

0x853d,	// (0x00027217) main_radioblah_rocker_ctrl_pane_g3

0x8545,	// (0x0002721f) main_radioblah_rocker_ctrl_pane_g4

0x854d,	// (0x00027227) main_radioblah_rocker_ctrl_pane_g5

0x8555,	// (0x0002722f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0002e96f) main_radioblah_rocker_ctrl_pane_g

0x7f8e,	// (0x00026c68) main_cset_text2_pane_t1_copy1_ParamLimits

0x1853,	// (0x0002052d) cam4_image_uncrop_qvga_pane

0x1980,	// (0x0002065a) vid4_image_uncrop_qcif_pane

0x1fcc,	// (0x00020ca6) cam6_image_uncrop_qvga_pane_ParamLimits

0x1fcc,	// (0x00020ca6) cam6_image_uncrop_qvga_pane

0xd9ab,	// (0x0002c685) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9ab,	// (0x0002c685) vid6_image_uncrop_qcif_pane

0x9beb,	// (0x000288c5) bg_popup_preview_window_pane_cp03

0xdc5a,	// (0x0002c934) list_cset_text2_pane

0xdc62,	// (0x0002c93c) main_cset6_text2_pane_g1

0xdc6a,	// (0x0002c944) main_cset6_text2_pane_t1

0x855d,	// (0x00027237) list_cset_text2_pane_t1_ParamLimits

0x855d,	// (0x00027237) list_cset_text2_pane_t1

0xa5f8,	// (0x000292d2) main_radioblah_pane_ParamLimits

0x82ca,	// (0x00026fa4) main_mobtv_info_pane_t3_ParamLimits

0x82ca,	// (0x00026fa4) main_mobtv_info_pane_t3

0x842a,	// (0x00027104) main_radioblah_pane_g1

0x8455,	// (0x0002712f) main_radioblah_info_pane_g1

0x84da,	// (0x000271b4) main_radioblah_info_pane_t3_ParamLimits

0x84da,	// (0x000271b4) main_radioblah_info_pane_t3

0x416b,	// (0x00022e45) highlight_cell_cale_month_pane_ParamLimits

0x416b,	// (0x00022e45) highlight_cell_cale_month_pane

0x9beb,	// (0x000288c5) main_phob_fisheye_pane

0xca4f,	// (0x0002b729) scroll_pane_cp0031_ParamLimits

0xca4f,	// (0x0002b729) scroll_pane_cp0031

0xdabd,	// (0x0002c797) wait_bar_pane_cp08_ParamLimits

0x7c67,	// (0x00026941) cset_list_set_pane_copy1_ParamLimits

0xe1ee,	// (0x0002cec8) highlight_cell_cale_month_pane_g1

0x8574,	// (0x0002724e) highlight_cell_cale_month_pane_t1

0xd74a,	// (0x0002c424) list_gen_pane_cp01

0xd2c8,	// (0x0002bfa2) scroll_pane_01

0x8582,	// (0x0002725c) list_single_double_fisheye_pane

0x858b,	// (0x00027265) list_double_fisheye_pane_g1_ParamLimits

0x858b,	// (0x00027265) list_double_fisheye_pane_g1

0x8597,	// (0x00027271) list_double_fisheye_pane_g2_ParamLimits

0x8597,	// (0x00027271) list_double_fisheye_pane_g2

0x85ab,	// (0x00027285) list_double_fisheye_pane_g3_ParamLimits

0x85ab,	// (0x00027285) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0002e97c) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0002e97c) list_double_fisheye_pane_g

0x85d4,	// (0x000272ae) list_double_fisheye_pane_t1_ParamLimits

0x85d4,	// (0x000272ae) list_double_fisheye_pane_t1

0x85ef,	// (0x000272c9) list_double_fisheye_pane_t2_ParamLimits

0x85ef,	// (0x000272c9) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0002e987) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0002e987) list_double_fisheye_pane_t

0x9beb,	// (0x000288c5) main_call5_pane

0x838f,	// (0x00027069) sc_swipe_pane_ParamLimits

0x838f,	// (0x00027069) sc_swipe_pane

0x861d,	// (0x000272f7) call5_image_pane_ParamLimits

0x861d,	// (0x000272f7) call5_image_pane

0x862f,	// (0x00027309) call5_swipe_1_pane_ParamLimits

0x862f,	// (0x00027309) call5_swipe_1_pane

0x863b,	// (0x00027315) call5_swipe_2_pane_ParamLimits

0x863b,	// (0x00027315) call5_swipe_2_pane

0x8657,	// (0x00027331) popup_call5_audio_first_window_ParamLimits

0x8657,	// (0x00027331) popup_call5_audio_first_window

0xc967,	// (0x0002b641) call5_swipe_1_pane_g1_ParamLimits

0xc967,	// (0x0002b641) call5_swipe_1_pane_g1

0xe1f6,	// (0x0002ced0) call5_swipe_1_pane_g2_ParamLimits

0xe1f6,	// (0x0002ced0) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0002e98c) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0002e98c) call5_swipe_1_pane_g

0xe202,	// (0x0002cedc) call5_swipe_1_pane_t1_ParamLimits

0xe202,	// (0x0002cedc) call5_swipe_1_pane_t1

0xc967,	// (0x0002b641) call5_swipe_2_pane_g1_ParamLimits

0xc967,	// (0x0002b641) call5_swipe_2_pane_g1

0xe217,	// (0x0002cef1) call5_swipe_2_pane_g2_ParamLimits

0xe217,	// (0x0002cef1) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0002e991) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0002e991) call5_swipe_2_pane_g

0xe223,	// (0x0002cefd) call5_swipe_2_pane_t1_ParamLimits

0xe223,	// (0x0002cefd) call5_swipe_2_pane_t1

0xe238,	// (0x0002cf12) sc_swipe_pane_g1_ParamLimits

0xe238,	// (0x0002cf12) sc_swipe_pane_g1

0xe245,	// (0x0002cf1f) sc_swipe_pane_g2_ParamLimits

0xe245,	// (0x0002cf1f) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0002e996) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0002e996) sc_swipe_pane_g

0xe251,	// (0x0002cf2b) sc_swipe_pane_t1_ParamLimits

0xe251,	// (0x0002cf2b) sc_swipe_pane_t1

0x9beb,	// (0x000288c5) main_cmail_launcher_pane

0x8667,	// (0x00027341) aid_size_cell_cmail_l_ParamLimits

0x8667,	// (0x00027341) aid_size_cell_cmail_l

0x8677,	// (0x00027351) grid_cmail_l_pane_ParamLimits

0x8677,	// (0x00027351) grid_cmail_l_pane

0x8687,	// (0x00027361) cell_cmail_l_pane_ParamLimits

0x8687,	// (0x00027361) cell_cmail_l_pane

0x869d,	// (0x00027377) cell_cmail_l_pane_g1_ParamLimits

0x869d,	// (0x00027377) cell_cmail_l_pane_g1

0x86a9,	// (0x00027383) cell_cmail_l_pane_t1_ParamLimits

0x86a9,	// (0x00027383) cell_cmail_l_pane_t1

0xe266,	// (0x0002cf40) cell_cmail_l_pane_t2_ParamLimits

0xe266,	// (0x0002cf40) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0002e99b) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0002e99b) cell_cmail_l_pane_t

0xa5f8,	// (0x000292d2) grid_highlight_pane_cp018_ParamLimits

0xa5f8,	// (0x000292d2) grid_highlight_pane_cp018

0x213b,	// (0x00020e15) main2_pane_ParamLimits

0x213b,	// (0x00020e15) main2_pane

0xa42a,	// (0x00029104) popup_sp_fs_action_menu_bg_pane_g1

0xa432,	// (0x0002910c) popup_sp_fs_action_menu_bg_pane_g2

0xa43a,	// (0x00029114) popup_sp_fs_action_menu_bg_pane_g3

0xa442,	// (0x0002911c) popup_sp_fs_action_menu_bg_pane_g4

0xa44a,	// (0x00029124) popup_sp_fs_action_menu_bg_pane_g5

0xa452,	// (0x0002912c) popup_sp_fs_action_menu_bg_pane_g6

0xa45a,	// (0x00029134) popup_sp_fs_action_menu_bg_pane_g7

0xa462,	// (0x0002913c) popup_sp_fs_action_menu_bg_pane_g8

0xa46a,	// (0x00029144) popup_sp_fs_action_menu_bg_pane_g9

0xa472,	// (0x0002914c) popup_sp_fs_action_menu_bg_pane_g10

0xa472,	// (0x0002914c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0002de64) popup_sp_fs_action_menu_bg_pane_g

0x2fa8,	// (0x00021c82) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x2_t3_g3_g1

0x2fb4,	// (0x00021c8e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2fb4,	// (0x00021c8e) list_medium_line_x2_t3_g3_g2

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002df12) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002df12) list_medium_line_x2_t3_g3_g

0x2fcc,	// (0x00021ca6) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2fcc,	// (0x00021ca6) list_medium_line_x2_t3_g3_t1

0x2fe1,	// (0x00021cbb) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2fe1,	// (0x00021cbb) list_medium_line_x2_t3_g3_t2

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002df19) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002df19) list_medium_line_x2_t3_g3_t

0x2fa8,	// (0x00021c82) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x2_t3_g2_g1

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002df20) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002df20) list_medium_line_x2_t3_g2_g

0x300a,	// (0x00021ce4) list_medium_line_x2_t3_g2_t1_ParamLimits

0x300a,	// (0x00021ce4) list_medium_line_x2_t3_g2_t1

0x3020,	// (0x00021cfa) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3020,	// (0x00021cfa) list_medium_line_x2_t3_g2_t2

0x3032,	// (0x00021d0c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3032,	// (0x00021d0c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002df25) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002df25) list_medium_line_x2_t3_g2_t

0x2fa8,	// (0x00021c82) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x2_t4_g4_g1

0x3050,	// (0x00021d2a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3050,	// (0x00021d2a) list_medium_line_x2_t4_g4_g2

0x2fb4,	// (0x00021c8e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2fb4,	// (0x00021c8e) list_medium_line_x2_t4_g4_g3

0x305c,	// (0x00021d36) list_medium_line_x2_t4_g4_g4_ParamLimits

0x305c,	// (0x00021d36) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002df2c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002df2c) list_medium_line_x2_t4_g4_g

0x3068,	// (0x00021d42) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3068,	// (0x00021d42) list_medium_line_x2_t4_g4_t1

0x3082,	// (0x00021d5c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3082,	// (0x00021d5c) list_medium_line_x2_t4_g4_t2

0x3098,	// (0x00021d72) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3098,	// (0x00021d72) list_medium_line_x2_t4_g4_t3

0x30ad,	// (0x00021d87) list_medium_line_x2_t4_g4_t4_ParamLimits

0x30ad,	// (0x00021d87) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002df35) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002df35) list_medium_line_x2_t4_g4_t

0x2fa8,	// (0x00021c82) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x2_t2_g4_g1

0x3050,	// (0x00021d2a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3050,	// (0x00021d2a) list_medium_line_x2_t2_g4_g2

0x2fb4,	// (0x00021c8e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2fb4,	// (0x00021c8e) list_medium_line_x2_t2_g4_g3

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002df9c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002df9c) list_medium_line_x2_t2_g4_g

0x4191,	// (0x00022e6b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4191,	// (0x00022e6b) list_medium_line_x2_t2_g4_t1

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002dfa5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002dfa5) list_medium_line_x2_t2_g4_t

0x2fa8,	// (0x00021c82) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x2_t2_g3_g1

0x2fb4,	// (0x00021c8e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2fb4,	// (0x00021c8e) list_medium_line_x2_t2_g3_g2

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002df12) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002df12) list_medium_line_x2_t2_g3_g

0x41a6,	// (0x00022e80) list_medium_line_x2_t2_g3_t1_ParamLimits

0x41a6,	// (0x00022e80) list_medium_line_x2_t2_g3_t1

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002dfaa) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002dfaa) list_medium_line_x2_t2_g3_t

0x42ee,	// (0x00022fc8) main_sp_fs_list_pane_ParamLimits

0x42ee,	// (0x00022fc8) main_sp_fs_list_pane

0x42fa,	// (0x00022fd4) sp_fs_scroll_pane_ParamLimits

0x42fa,	// (0x00022fd4) sp_fs_scroll_pane

0x4306,	// (0x00022fe0) list_medium_line_x2_t3_t1

0x4316,	// (0x00022ff0) list_medium_line_x2_t3_t2

0x4324,	// (0x00022ffe) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002dff5) list_medium_line_x2_t3_t

0x4332,	// (0x0002300c) list_medium_line_x3_t4_t1

0x4342,	// (0x0002301c) list_medium_line_x3_t4_t2

0x4350,	// (0x0002302a) list_medium_line_x3_t4_t3

0x4324,	// (0x00022ffe) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002dffc) list_medium_line_x3_t4_t

0x435e,	// (0x00023038) list_medium_line_x4_t5_t1

0x436e,	// (0x00023048) list_medium_line_x4_t5_t2

0x4350,	// (0x0002302a) list_medium_line_x4_t5_t3

0x437c,	// (0x00023056) list_medium_line_x4_t5_t4

0x4324,	// (0x00022ffe) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002e005) list_medium_line_x4_t5_t

0x2fa8,	// (0x00021c82) list_medium_line_t4_g4_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_t4_g4_g1

0x438a,	// (0x00023064) list_medium_line_t4_g4_g2_ParamLimits

0x438a,	// (0x00023064) list_medium_line_t4_g4_g2

0x4396,	// (0x00023070) list_medium_line_t4_g4_g3_ParamLimits

0x4396,	// (0x00023070) list_medium_line_t4_g4_g3

0x2fc0,	// (0x00021c9a) list_medium_line_t4_g4_g4_ParamLimits

0x2fc0,	// (0x00021c9a) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002e010) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002e010) list_medium_line_t4_g4_g

0x43a2,	// (0x0002307c) list_medium_line_t4_g4_t1_ParamLimits

0x43a2,	// (0x0002307c) list_medium_line_t4_g4_t1

0x43b7,	// (0x00023091) list_medium_line_t4_g4_t2_ParamLimits

0x43b7,	// (0x00023091) list_medium_line_t4_g4_t2

0x43cd,	// (0x000230a7) list_medium_line_t4_g4_t3_ParamLimits

0x43cd,	// (0x000230a7) list_medium_line_t4_g4_t3

0x2ff5,	// (0x00021ccf) list_medium_line_t4_g4_t4_ParamLimits

0x2ff5,	// (0x00021ccf) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002e019) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002e019) list_medium_line_t4_g4_t

0x4487,	// (0x00023161) chi_dic_find_pane_g1

0x545c,	// (0x00024136) main_tport_pane

0xd3d4,	// (0x0002c0ae) list_medium_line_plain_t1

0x721f,	// (0x00025ef9) list_medium_line_t2_g2_g1_ParamLimits

0x721f,	// (0x00025ef9) list_medium_line_t2_g2_g1

0xd3ea,	// (0x0002c0c4) list_medium_line_t2_g2_g2_ParamLimits

0xd3ea,	// (0x0002c0c4) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002e6da) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002e6da) list_medium_line_t2_g2_g

0x722b,	// (0x00025f05) list_medium_line_t2_g2_t1_ParamLimits

0x722b,	// (0x00025f05) list_medium_line_t2_g2_t1

0x7242,	// (0x00025f1c) list_medium_line_t2_g2_t2_ParamLimits

0x7242,	// (0x00025f1c) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002e6df) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002e6df) list_medium_line_t2_g2_t

0xd753,	// (0x0002c42d) aid_sp_fs_list_icon_a_sm

0xd75b,	// (0x0002c435) aid_sp_fs_list_icon_d

0xd763,	// (0x0002c43d) aid_sp_fs_text_primary

0xd76c,	// (0x0002c446) aid_sp_fs_text_secondary

0x77b2,	// (0x0002648c) list_medium_line

0x77b2,	// (0x0002648c) list_medium_line_g2

0x77b2,	// (0x0002648c) list_medium_line_g3

0x77b2,	// (0x0002648c) list_medium_line_plain

0x77b2,	// (0x0002648c) list_medium_line_plain_t2

0x77b2,	// (0x0002648c) list_medium_line_plain_t3

0x77b2,	// (0x0002648c) list_medium_line_right_icon

0x77b2,	// (0x0002648c) list_medium_line_right_iconx2

0x77b2,	// (0x0002648c) list_medium_line_t2

0x77b2,	// (0x0002648c) list_medium_line_t2_g2

0x77b2,	// (0x0002648c) list_medium_line_t2_g3

0x77b2,	// (0x0002648c) list_medium_line_t2_right_icon

0x77b2,	// (0x0002648c) list_medium_line_t2_right_iconx2

0x77b2,	// (0x0002648c) list_medium_line_t3

0x77b2,	// (0x0002648c) list_medium_line_t3_g2

0x77b2,	// (0x0002648c) list_medium_line_t3_g3

0x77b2,	// (0x0002648c) list_medium_line_t3_right_iconx2

0x77bb,	// (0x00026495) list_medium_line_t4_g4

0x77c4,	// (0x0002649e) list_medium_line_x2

0x77c4,	// (0x0002649e) list_medium_line_x2_t2_g2

0x77c4,	// (0x0002649e) list_medium_line_x2_t2_g3

0x77c4,	// (0x0002649e) list_medium_line_x2_t2_g4

0x77c4,	// (0x0002649e) list_medium_line_x2_t3

0x77c4,	// (0x0002649e) list_medium_line_x2_t3_g2

0x77c4,	// (0x0002649e) list_medium_line_x2_t3_g3

0x77c4,	// (0x0002649e) list_medium_line_x2_t3_g4

0x77c4,	// (0x0002649e) list_medium_line_x2_t4_g2

0x77c4,	// (0x0002649e) list_medium_line_x2_t4_g4

0x77cd,	// (0x000264a7) list_medium_line_x3

0x77cd,	// (0x000264a7) list_medium_line_x3_t4

0x77cd,	// (0x000264a7) list_medium_line_x3_t4_g4

0x77bb,	// (0x00026495) list_medium_line_x4_t4

0x77bb,	// (0x00026495) list_medium_line_x4_t4_g7

0x77bb,	// (0x00026495) list_medium_line_x4_t5

0x77d6,	// (0x000264b0) list_single_fs_dyc_pane_ParamLimits

0x77d6,	// (0x000264b0) list_single_fs_dyc_pane

0x2fa8,	// (0x00021c82) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x4_t4_g7_g1

0x7ebf,	// (0x00026b99) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ebf,	// (0x00026b99) list_medium_line_x4_t4_g7_g2

0x7ecb,	// (0x00026ba5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ecb,	// (0x00026ba5) list_medium_line_x4_t4_g7_g3

0x7eda,	// (0x00026bb4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7eda,	// (0x00026bb4) list_medium_line_x4_t4_g7_g4

0x7ee6,	// (0x00026bc0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ee6,	// (0x00026bc0) list_medium_line_x4_t4_g7_g5

0x7ef5,	// (0x00026bcf) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7ef5,	// (0x00026bcf) list_medium_line_x4_t4_g7_g6

0x7f04,	// (0x00026bde) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7f04,	// (0x00026bde) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0002e8a3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0002e8a3) list_medium_line_x4_t4_g7_g

0x7f10,	// (0x00026bea) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7f10,	// (0x00026bea) list_medium_line_x4_t4_g7_t1

0x7f25,	// (0x00026bff) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7f25,	// (0x00026bff) list_medium_line_x4_t4_g7_t2

0x7f3a,	// (0x00026c14) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7f3a,	// (0x00026c14) list_medium_line_x4_t4_g7_t3

0x7f4f,	// (0x00026c29) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f4f,	// (0x00026c29) list_medium_line_x4_t4_g7_t4

0x7f61,	// (0x00026c3b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7f61,	// (0x00026c3b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0002e8b2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0002e8b2) list_medium_line_x4_t4_g7_t

0x7f73,	// (0x00026c4d) list_single_dyc_row_pane_ParamLimits

0x7f73,	// (0x00026c4d) list_single_dyc_row_pane

0x8611,	// (0x000272eb) call5_gesture_pane_ParamLimits

0x8611,	// (0x000272eb) call5_gesture_pane

0x8647,	// (0x00027321) call5_windows_pane_ParamLimits

0x8647,	// (0x00027321) call5_windows_pane

0x86bf,	// (0x00027399) call5_swipe_1_pane_cp_ParamLimits

0x86bf,	// (0x00027399) call5_swipe_1_pane_cp

0x86cb,	// (0x000273a5) call5_swipe_2_pane_cp_ParamLimits

0x86cb,	// (0x000273a5) call5_swipe_2_pane_cp

0xa535,	// (0x0002920f) call5_image_pane_cp

0x86d7,	// (0x000273b1) popup_call5_audio_first_window_cp_ParamLimits

0x86d7,	// (0x000273b1) popup_call5_audio_first_window_cp

0xe238,	// (0x0002cf12) call5_swipe_1_pane_g1_cp_ParamLimits

0xe238,	// (0x0002cf12) call5_swipe_1_pane_g1_cp

0xe278,	// (0x0002cf52) call5_swipe_1_pane_g2_cp

0xe251,	// (0x0002cf2b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe251,	// (0x0002cf2b) call5_swipe_1_pane_t1_cp

0xe238,	// (0x0002cf12) call5_swipe_2_pane_g1_cp_ParamLimits

0xe238,	// (0x0002cf12) call5_swipe_2_pane_g1_cp

0xe280,	// (0x0002cf5a) call5_swipe_2_pane_g2_cp

0xe288,	// (0x0002cf62) call5_swipe_2_pane_t1_cp_ParamLimits

0xe288,	// (0x0002cf62) call5_swipe_2_pane_t1_cp

0xa5f8,	// (0x000292d2) main_sp_fs_email_pane

0xe29d,	// (0x0002cf77) main_sp_fs_listscroll_pane_te

0xe2a6,	// (0x0002cf80) popup_sp_fs_action_menu_pane_ParamLimits

0xe2a6,	// (0x0002cf80) popup_sp_fs_action_menu_pane

0xc737,	// (0x0002b411) bg_sp_fs_ctrlbar_pane_g1

0xccf0,	// (0x0002b9ca) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd02,	// (0x0002b9dc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xccf9,	// (0x0002b9d3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc737,	// (0x0002b411) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0002e9a0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc516,	// (0x0002b1f0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc516,	// (0x0002b1f0) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2ec,	// (0x0002cfc6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2ec,	// (0x0002cfc6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2f8,	// (0x0002cfd2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2f8,	// (0x0002cfd2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0002e9a9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0002e9a9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe304,	// (0x0002cfde) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe304,	// (0x0002cfde) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe31e,	// (0x0002cff8) list_medium_line_t2_right_icon_g1

0x86e5,	// (0x000273bf) list_medium_line_t2_right_icon_t1

0x86f5,	// (0x000273cf) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0002e9ae) list_medium_line_t2_right_icon_t

0xc2e6,	// (0x0002afc0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc2e6,	// (0x0002afc0) bg_sp_fs_ctrlbar_pane

0x875c,	// (0x00027436) main_sp_fs_ctrlbar_button_pane_cp01

0x8764,	// (0x0002743e) main_sp_fs_ctrlbar_ddmenu_pane

0xd506,	// (0x0002c1e0) main_sp_fs_ctrlbar_pane_g1

0xe35e,	// (0x0002d038) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0002e9b3) main_sp_fs_ctrlbar_pane_g

0xe36a,	// (0x0002d044) main_sp_fs_ctrlbar_pane_t1

0x876e,	// (0x00027448) main_sp_fs_ctrlbar_pane

0x8788,	// (0x00027462) main_sp_fs_listscroll_pane_te_cp01

0x8799,	// (0x00027473) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8799,	// (0x00027473) popup_sp_fs_action_menu_pane_cp01

0xa5f8,	// (0x000292d2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa5f8,	// (0x000292d2) bg_sp_fs_highlight_list_pane_cp01

0xe39a,	// (0x0002d074) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe39a,	// (0x0002d074) sp_fs_action_menu_list_gene_pane_g1

0xe3a9,	// (0x0002d083) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3a9,	// (0x0002d083) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0002e9bd) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0002e9bd) sp_fs_action_menu_list_gene_pane_g

0xe3b6,	// (0x0002d090) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3b6,	// (0x0002d090) sp_fs_action_menu_list_gene_pane_t1

0xe3ce,	// (0x0002d0a8) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3ce,	// (0x0002d0a8) sp_fs_action_menu_list_gene_pane

0xe3f1,	// (0x0002d0cb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3f1,	// (0x0002d0cb) popup_sp_fs_action_menu_bg_pane

0xe3ff,	// (0x0002d0d9) sp_fs_action_menu_list_pane_ParamLimits

0xe3ff,	// (0x0002d0d9) sp_fs_action_menu_list_pane

0xe423,	// (0x0002d0fd) sp_fs_scroll_pane_cp01_ParamLimits

0xe423,	// (0x0002d0fd) sp_fs_scroll_pane_cp01

0x87c7,	// (0x000274a1) list_medium_line_plain_t2_t1

0x87d7,	// (0x000274b1) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0002e9c2) list_medium_line_plain_t2_t

0x87e5,	// (0x000274bf) list_medium_line_plain_t3_t1

0x87f5,	// (0x000274cf) list_medium_line_plain_t3_t2

0x8803,	// (0x000274dd) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0002e9c7) list_medium_line_plain_t3_t

0x2fa8,	// (0x00021c82) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x2_t2_g2_g1

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002df20) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002df20) list_medium_line_x2_t2_g2_g

0x43a2,	// (0x0002307c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x43a2,	// (0x0002307c) list_medium_line_x2_t2_g2_t1

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0002e9ce) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0002e9ce) list_medium_line_x2_t2_g2_t

0x2fa8,	// (0x00021c82) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x2_t4_g2_g1

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002df20) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002df20) list_medium_line_x2_t4_g2_g

0x8811,	// (0x000274eb) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8811,	// (0x000274eb) list_medium_line_x2_t4_g2_t1

0x882b,	// (0x00027505) list_medium_line_x2_t4_g2_t2_ParamLimits

0x882b,	// (0x00027505) list_medium_line_x2_t4_g2_t2

0x8841,	// (0x0002751b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8841,	// (0x0002751b) list_medium_line_x2_t4_g2_t3

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf9,	// (0x0002e9d3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf9,	// (0x0002e9d3) list_medium_line_x2_t4_g2_t

0xe449,	// (0x0002d123) list_medium_line_t3_right_iconx2_g1

0xe31e,	// (0x0002cff8) list_medium_line_t3_right_iconx2_g2

0x8856,	// (0x00027530) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd02,	// (0x0002e9dc) list_medium_line_t3_right_iconx2_g

0x8860,	// (0x0002753a) list_medium_line_t3_right_iconx2_t1

0x8870,	// (0x0002754a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd09,	// (0x0002e9e3) list_medium_line_t3_right_iconx2_t

0x2fa8,	// (0x00021c82) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x3_t4_g4_g1

0x2fb4,	// (0x00021c8e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2fb4,	// (0x00021c8e) list_medium_line_x3_t4_g4_g2

0x438a,	// (0x00023064) list_medium_line_x3_t4_g4_g3_ParamLimits

0x438a,	// (0x00023064) list_medium_line_x3_t4_g4_g3

0x887e,	// (0x00027558) list_medium_line_x3_t4_g4_g4_ParamLimits

0x887e,	// (0x00027558) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd0e,	// (0x0002e9e8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd0e,	// (0x0002e9e8) list_medium_line_x3_t4_g4_g

0x888a,	// (0x00027564) list_medium_line_x3_t4_g4_t1_ParamLimits

0x888a,	// (0x00027564) list_medium_line_x3_t4_g4_t1

0x88a1,	// (0x0002757b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x88a1,	// (0x0002757b) list_medium_line_x3_t4_g4_t2

0x88b6,	// (0x00027590) list_medium_line_x3_t4_g4_t3_ParamLimits

0x88b6,	// (0x00027590) list_medium_line_x3_t4_g4_t3

0x88cb,	// (0x000275a5) list_medium_line_x3_t4_g4_t4_ParamLimits

0x88cb,	// (0x000275a5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd17,	// (0x0002e9f1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd17,	// (0x0002e9f1) list_medium_line_x3_t4_g4_t

0x88e8,	// (0x000275c2) list_single_dyc_row_text_pane_t1_ParamLimits

0x88e8,	// (0x000275c2) list_single_dyc_row_text_pane_t1

0x8925,	// (0x000275ff) list_single_dyc_row_text_pane_t2_ParamLimits

0x8925,	// (0x000275ff) list_single_dyc_row_text_pane_t2

0xe451,	// (0x0002d12b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe451,	// (0x0002d12b) list_single_dyc_row_text_pane_t3

0x0005,

0xfd20,	// (0x0002e9fa) list_single_dyc_row_text_pane_t_ParamLimits

0xfd20,	// (0x0002e9fa) list_single_dyc_row_text_pane_t

0xe475,	// (0x0002d14f) list_single_dyc_row_pane_g1_ParamLimits

0xe475,	// (0x0002d14f) list_single_dyc_row_pane_g1

0xe481,	// (0x0002d15b) list_single_dyc_row_pane_g2_ParamLimits

0xe481,	// (0x0002d15b) list_single_dyc_row_pane_g2

0xe48d,	// (0x0002d167) list_single_dyc_row_pane_g3_ParamLimits

0xe48d,	// (0x0002d167) list_single_dyc_row_pane_g3

0xe499,	// (0x0002d173) list_single_dyc_row_pane_g4_ParamLimits

0xe499,	// (0x0002d173) list_single_dyc_row_pane_g4

0x0003,

0xfd2d,	// (0x0002ea07) list_single_dyc_row_pane_g_ParamLimits

0xfd2d,	// (0x0002ea07) list_single_dyc_row_pane_g

0xe4a5,	// (0x0002d17f) list_single_dyc_row_text_pane_ParamLimits

0xe4a5,	// (0x0002d17f) list_single_dyc_row_text_pane

0x9beb,	// (0x000288c5) bg_sp_fs_scroll_pane

0xe4c4,	// (0x0002d19e) thumb_sp_fs_scroll_pane

0x721f,	// (0x00025ef9) list_medium_line_g1_ParamLimits

0x721f,	// (0x00025ef9) list_medium_line_g1

0xe4cd,	// (0x0002d1a7) list_medium_line_t1_ParamLimits

0xe4cd,	// (0x0002d1a7) list_medium_line_t1

0x2fa8,	// (0x00021c82) list_medium_line_x2_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x2_g1

0x2fb4,	// (0x00021c8e) list_medium_line_x2_g2_ParamLimits

0x2fb4,	// (0x00021c8e) list_medium_line_x2_g2

0x0001,

0xfd36,	// (0x0002ea10) list_medium_line_x2_g_ParamLimits

0xfd36,	// (0x0002ea10) list_medium_line_x2_g

0xe4e2,	// (0x0002d1bc) list_medium_line_x2_t1_ParamLimits

0xe4e2,	// (0x0002d1bc) list_medium_line_x2_t1

0x2fa8,	// (0x00021c82) list_medium_line_x3_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x3_g1

0x2fb4,	// (0x00021c8e) list_medium_line_x3_g2_ParamLimits

0x2fb4,	// (0x00021c8e) list_medium_line_x3_g2

0x0001,

0xfd36,	// (0x0002ea10) list_medium_line_x3_g_ParamLimits

0xfd36,	// (0x0002ea10) list_medium_line_x3_g

0xe4e2,	// (0x0002d1bc) list_medium_line_x3_t1_ParamLimits

0xe4e2,	// (0x0002d1bc) list_medium_line_x3_t1

0xe4f8,	// (0x0002d1d2) thumb_sp_fs_scroll_pane_g1

0xe501,	// (0x0002d1db) thumb_sp_fs_scroll_pane_g2

0xe50a,	// (0x0002d1e4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0002ea15) thumb_sp_fs_scroll_pane_g

0xe4f8,	// (0x0002d1d2) bg_sp_fs_scroll_pane_g1

0xe501,	// (0x0002d1db) bg_sp_fs_scroll_pane_g2

0xe50a,	// (0x0002d1e4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0002ea15) bg_sp_fs_scroll_pane_g

0x2fa8,	// (0x00021c82) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2fa8,	// (0x00021c82) list_medium_line_x2_t3_g4_g1

0x3050,	// (0x00021d2a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3050,	// (0x00021d2a) list_medium_line_x2_t3_g4_g2

0x2fb4,	// (0x00021c8e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2fb4,	// (0x00021c8e) list_medium_line_x2_t3_g4_g3

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2fc0,	// (0x00021c9a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002df9c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002df9c) list_medium_line_x2_t3_g4_g

0x8a4e,	// (0x00027728) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a4e,	// (0x00027728) list_medium_line_x2_t3_g4_t1

0x8a64,	// (0x0002773e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a64,	// (0x0002773e) list_medium_line_x2_t3_g4_t2

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2ff5,	// (0x00021ccf) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd42,	// (0x0002ea1c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd42,	// (0x0002ea1c) list_medium_line_x2_t3_g4_t

0x721f,	// (0x00025ef9) list_medium_line_g2_g1_ParamLimits

0x721f,	// (0x00025ef9) list_medium_line_g2_g1

0xd3ea,	// (0x0002c0c4) list_medium_line_g2_g2_ParamLimits

0xd3ea,	// (0x0002c0c4) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002e6da) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002e6da) list_medium_line_g2_g

0xe513,	// (0x0002d1ed) list_medium_line_g2_t1_ParamLimits

0xe513,	// (0x0002d1ed) list_medium_line_g2_t1

0x721f,	// (0x00025ef9) list_medium_line_t3_g2_g1_ParamLimits

0x721f,	// (0x00025ef9) list_medium_line_t3_g2_g1

0xd3ea,	// (0x0002c0c4) list_medium_line_t3_g2_g2_ParamLimits

0xd3ea,	// (0x0002c0c4) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002e6da) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002e6da) list_medium_line_t3_g2_g

0x8a7d,	// (0x00027757) list_medium_line_t3_g2_t1_ParamLimits

0x8a7d,	// (0x00027757) list_medium_line_t3_g2_t1

0x8a97,	// (0x00027771) list_medium_line_t3_g2_t2_ParamLimits

0x8a97,	// (0x00027771) list_medium_line_t3_g2_t2

0x8aad,	// (0x00027787) list_medium_line_t3_g2_t3_ParamLimits

0x8aad,	// (0x00027787) list_medium_line_t3_g2_t3

0x0002,

0xfd49,	// (0x0002ea23) list_medium_line_t3_g2_t_ParamLimits

0xfd49,	// (0x0002ea23) list_medium_line_t3_g2_t

0xe31e,	// (0x0002cff8) list_medium_line_right_icon_g1

0xe528,	// (0x0002d202) list_medium_line_right_icon_t1

0x721f,	// (0x00025ef9) list_medium_line_t2_g1_ParamLimits

0x721f,	// (0x00025ef9) list_medium_line_t2_g1

0x8ac4,	// (0x0002779e) list_medium_line_t2_t1_ParamLimits

0x8ac4,	// (0x0002779e) list_medium_line_t2_t1

0x8ade,	// (0x000277b8) list_medium_line_t2_t2_ParamLimits

0x8ade,	// (0x000277b8) list_medium_line_t2_t2

0x0001,

0xfd50,	// (0x0002ea2a) list_medium_line_t2_t_ParamLimits

0xfd50,	// (0x0002ea2a) list_medium_line_t2_t

0x721f,	// (0x00025ef9) list_medium_line_t3_g1_ParamLimits

0x721f,	// (0x00025ef9) list_medium_line_t3_g1

0x8af3,	// (0x000277cd) list_medium_line_t3_t1_ParamLimits

0x8af3,	// (0x000277cd) list_medium_line_t3_t1

0x8b0a,	// (0x000277e4) list_medium_line_t3_t2_ParamLimits

0x8b0a,	// (0x000277e4) list_medium_line_t3_t2

0x8b1f,	// (0x000277f9) list_medium_line_t3_t3_ParamLimits

0x8b1f,	// (0x000277f9) list_medium_line_t3_t3

0x0002,

0xfd55,	// (0x0002ea2f) list_medium_line_t3_t_ParamLimits

0xfd55,	// (0x0002ea2f) list_medium_line_t3_t

0x721f,	// (0x00025ef9) list_medium_line_g3_g1_ParamLimits

0x721f,	// (0x00025ef9) list_medium_line_g3_g1

0xe536,	// (0x0002d210) list_medium_line_g3_g2_ParamLimits

0xe536,	// (0x0002d210) list_medium_line_g3_g2

0xd3ea,	// (0x0002c0c4) list_medium_line_g3_g3_ParamLimits

0xd3ea,	// (0x0002c0c4) list_medium_line_g3_g3

0x0002,

0xfd5c,	// (0x0002ea36) list_medium_line_g3_g_ParamLimits

0xfd5c,	// (0x0002ea36) list_medium_line_g3_g

0xe542,	// (0x0002d21c) list_medium_line_g3_t1_ParamLimits

0xe542,	// (0x0002d21c) list_medium_line_g3_t1

0x721f,	// (0x00025ef9) list_medium_line_t2_g3_g1_ParamLimits

0x721f,	// (0x00025ef9) list_medium_line_t2_g3_g1

0xe536,	// (0x0002d210) list_medium_line_t2_g3_g2_ParamLimits

0xe536,	// (0x0002d210) list_medium_line_t2_g3_g2

0xd3ea,	// (0x0002c0c4) list_medium_line_t2_g3_g3_ParamLimits

0xd3ea,	// (0x0002c0c4) list_medium_line_t2_g3_g3

0x0002,

0xfd5c,	// (0x0002ea36) list_medium_line_t2_g3_g_ParamLimits

0xfd5c,	// (0x0002ea36) list_medium_line_t2_g3_g

0x8b31,	// (0x0002780b) list_medium_line_t2_g3_t1_ParamLimits

0x8b31,	// (0x0002780b) list_medium_line_t2_g3_t1

0x8b48,	// (0x00027822) list_medium_line_t2_g3_t2_ParamLimits

0x8b48,	// (0x00027822) list_medium_line_t2_g3_t2

0x0001,

0xfd63,	// (0x0002ea3d) list_medium_line_t2_g3_t_ParamLimits

0xfd63,	// (0x0002ea3d) list_medium_line_t2_g3_t

0x721f,	// (0x00025ef9) list_medium_line_t3_g3_g1_ParamLimits

0x721f,	// (0x00025ef9) list_medium_line_t3_g3_g1

0xe536,	// (0x0002d210) list_medium_line_t3_g3_g2_ParamLimits

0xe536,	// (0x0002d210) list_medium_line_t3_g3_g2

0xd3ea,	// (0x0002c0c4) list_medium_line_t3_g3_g3_ParamLimits

0xd3ea,	// (0x0002c0c4) list_medium_line_t3_g3_g3

0x0002,

0xfd5c,	// (0x0002ea36) list_medium_line_t3_g3_g_ParamLimits

0xfd5c,	// (0x0002ea36) list_medium_line_t3_g3_g

0x8b5d,	// (0x00027837) list_medium_line_t3_g3_t1_ParamLimits

0x8b5d,	// (0x00027837) list_medium_line_t3_g3_t1

0x8b76,	// (0x00027850) list_medium_line_t3_g3_t2_ParamLimits

0x8b76,	// (0x00027850) list_medium_line_t3_g3_t2

0x8b8c,	// (0x00027866) list_medium_line_t3_g3_t3_ParamLimits

0x8b8c,	// (0x00027866) list_medium_line_t3_g3_t3

0x0002,

0xfd68,	// (0x0002ea42) list_medium_line_t3_g3_t_ParamLimits

0xfd68,	// (0x0002ea42) list_medium_line_t3_g3_t

0xe449,	// (0x0002d123) list_medium_line_right_iconx2_g1

0xe31e,	// (0x0002cff8) list_medium_line_right_iconx2_g2

0x0001,

0xfd6f,	// (0x0002ea49) list_medium_line_right_iconx2_g

0xe557,	// (0x0002d231) list_medium_line_right_iconx2_t1

0xe449,	// (0x0002d123) list_medium_line_t2_right_iconx2_g1

0xe31e,	// (0x0002cff8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd6f,	// (0x0002ea49) list_medium_line_t2_right_iconx2_g

0x8ba6,	// (0x00027880) list_medium_line_t2_right_iconx2_t1

0x8bb6,	// (0x00027890) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd74,	// (0x0002ea4e) list_medium_line_t2_right_iconx2_t

0x8bc4,	// (0x0002789e) list_medium_line_x4_t4_t1

0x8bd2,	// (0x000278ac) list_medium_line_x4_t4_t2

0x8be2,	// (0x000278bc) list_medium_line_x4_t4_t3

0x8bf2,	// (0x000278cc) list_medium_line_x4_t4_t4

0x0003,

0xfd79,	// (0x0002ea53) list_medium_line_x4_t4_t

0x8c2c,	// (0x00027906) tport_appsw_pane_ParamLimits

0x8c2c,	// (0x00027906) tport_appsw_pane

0x8c3a,	// (0x00027914) tport_contact_pane_ParamLimits

0x8c3a,	// (0x00027914) tport_contact_pane

0x8c4a,	// (0x00027924) tport_listscroll_pane_ParamLimits

0x8c4a,	// (0x00027924) tport_listscroll_pane

0x8c5a,	// (0x00027934) cell_tport_appsw_pane_ParamLimits

0x8c5a,	// (0x00027934) cell_tport_appsw_pane

0xc9d8,	// (0x0002b6b2) tport_appsw_pane_g1_ParamLimits

0xc9d8,	// (0x0002b6b2) tport_appsw_pane_g1

0xe565,	// (0x0002d23f) tport_contact_pane_g1

0xe56e,	// (0x0002d248) tport_contact_pane_t1

0xe57c,	// (0x0002d256) tport_contact_pane_t2

0x0001,

0xfd82,	// (0x0002ea5c) tport_contact_pane_t

0xe58a,	// (0x0002d264) list_tport_pane

0xe593,	// (0x0002d26d) scroll_pane_cp_030

0x8c8f,	// (0x00027969) cell_tport_appsw_pane_g1

0x8c9f,	// (0x00027979) cell_tport_appsw_pane_t1

0x8cad,	// (0x00027987) grid_highlight_pane_cp019

0x8cb5,	// (0x0002798f) list_tport_double_graphic_pane_ParamLimits

0x8cb5,	// (0x0002798f) list_tport_double_graphic_pane

0xa5f8,	// (0x000292d2) list_highlight_pane_cp023_ParamLimits

0xa5f8,	// (0x000292d2) list_highlight_pane_cp023

0x8cc2,	// (0x0002799c) list_tport_double_graphic_pane_g1_ParamLimits

0x8cc2,	// (0x0002799c) list_tport_double_graphic_pane_g1

0x8ccf,	// (0x000279a9) list_tport_double_graphic_pane_t1_ParamLimits

0x8ccf,	// (0x000279a9) list_tport_double_graphic_pane_t1

0x8ce4,	// (0x000279be) list_tport_double_graphic_pane_t2_ParamLimits

0x8ce4,	// (0x000279be) list_tport_double_graphic_pane_t2

0x0001,

0xfd8e,	// (0x0002ea68) list_tport_double_graphic_pane_t_ParamLimits

0xfd8e,	// (0x0002ea68) list_tport_double_graphic_pane_t

0x9beb,	// (0x000288c5) main_cale_note_pane

0x1be7,	// (0x000208c1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1be7,	// (0x000208c1) cell_vitu2_function_top_wide_pane_cp01

0x82de,	// (0x00026fb8) wait_bar_pane_cp05_ParamLimits

0xa5f8,	// (0x000292d2) listscroll_cmail_pane

0xe5a4,	// (0x0002d27e) list_cmail_pane

0x8d00,	// (0x000279da) list_cmail_body_pane

0x8d19,	// (0x000279f3) list_single_cmail_header_caption_pane

0x8d3a,	// (0x00027a14) list_single_cmail_header_detail_pane_ParamLimits

0x8d3a,	// (0x00027a14) list_single_cmail_header_detail_pane

0x8d6b,	// (0x00027a45) list_single_cmail_header_caption_pane_t1

0x8d7b,	// (0x00027a55) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d7b,	// (0x00027a55) list_single_cmail_header_detail_pane_g1

0xe5c4,	// (0x0002d29e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5c4,	// (0x0002d29e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd93,	// (0x0002ea6d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd93,	// (0x0002ea6d) list_single_cmail_header_detail_pane_g

0xe5dd,	// (0x0002d2b7) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5dd,	// (0x0002d2b7) list_single_cmail_header_detail_pane_t1

0xe64f,	// (0x0002d329) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe64f,	// (0x0002d329) list_single_cmail_header_editor_pane_bg

0xded9,	// (0x0002cbb3) list_cmail_body_pane_g1

0xe666,	// (0x0002d340) list_cmail_body_pane_t1

0xd1aa,	// (0x0002be84) list_single_cmail_header_editor_pane_bg_g1

0xa7a0,	// (0x0002947a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1ba,	// (0x0002be94) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1b2,	// (0x0002be8c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3e2,	// (0x0002c0bc) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1da,	// (0x0002beb4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1ca,	// (0x0002bea4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1d2,	// (0x0002beac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa780,	// (0x0002945a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d93,	// (0x00027a6d) calenote_gesture_pane_ParamLimits

0x8d93,	// (0x00027a6d) calenote_gesture_pane

0x8dad,	// (0x00027a87) calenote_window_pane_ParamLimits

0x8dad,	// (0x00027a87) calenote_window_pane

0xe674,	// (0x0002d34e) popup_note_window_cp01

0x8dc5,	// (0x00027a9f) calenote_swipe_1_pane_ParamLimits

0x8dc5,	// (0x00027a9f) calenote_swipe_1_pane

0x86cb,	// (0x000273a5) calenote_swipe_2_pane_ParamLimits

0x86cb,	// (0x000273a5) calenote_swipe_2_pane

0xe238,	// (0x0002cf12) calenote_swipe_1_pane_g1_ParamLimits

0xe238,	// (0x0002cf12) calenote_swipe_1_pane_g1

0xe245,	// (0x0002cf1f) calenote_swipe_1_pane_g2_ParamLimits

0xe245,	// (0x0002cf1f) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0002e996) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0002e996) calenote_swipe_1_pane_g

0xe686,	// (0x0002d360) calenote_swipe_1_pane_t1_ParamLimits

0xe686,	// (0x0002d360) calenote_swipe_1_pane_t1

0xe238,	// (0x0002cf12) calenote_swipe_2_pane_g1_ParamLimits

0xe238,	// (0x0002cf12) calenote_swipe_2_pane_g1

0xe6a5,	// (0x0002d37f) calenote_swipe_2_pane_g2_ParamLimits

0xe6a5,	// (0x0002d37f) calenote_swipe_2_pane_g2

0x0001,

0xfd9f,	// (0x0002ea79) calenote_swipe_2_pane_g_ParamLimits

0xfd9f,	// (0x0002ea79) calenote_swipe_2_pane_g

0xe6b1,	// (0x0002d38b) calenote_swipe_2_pane_t1_ParamLimits

0xe6b1,	// (0x0002d38b) calenote_swipe_2_pane_t1

0x9beb,	// (0x000288c5) main_mup_navstr_pane

0x618b,	// (0x00024e65) main_mup3_pane_t7_ParamLimits

0x618b,	// (0x00024e65) main_mup3_pane_t7

0x14da,	// (0x000201b4) main_mp4_pane_g6_ParamLimits

0x14da,	// (0x000201b4) main_mp4_pane_g6

0x17cb,	// (0x000204a5) main_image3_pane_t4_ParamLimits

0x17cb,	// (0x000204a5) main_image3_pane_t4

0x8dd8,	// (0x00027ab2) popup_navstr_preview_pane_ParamLimits

0x8dd8,	// (0x00027ab2) popup_navstr_preview_pane

0x8de4,	// (0x00027abe) scroll_navstr_pane_ParamLimits

0x8de4,	// (0x00027abe) scroll_navstr_pane

0x9beb,	// (0x000288c5) bg_popup_preview_window_pane_cp04

0xe6d8,	// (0x0002d3b2) popup_navstr_preview_pane_t1

0x8df0,	// (0x00027aca) scroll_navstr_pane_g1_ParamLimits

0x8df0,	// (0x00027aca) scroll_navstr_pane_g1

0x8dfd,	// (0x00027ad7) scroll_navstr_pane_t1_ParamLimits

0x8dfd,	// (0x00027ad7) scroll_navstr_pane_t1

0xe67d,	// (0x0002d357) bg_button_pane_cp014

0xe67d,	// (0x0002d357) bg_button_pane_cp030

0x85b7,	// (0x00027291) list_double_fisheye_pane_g4_ParamLimits

0x85b7,	// (0x00027291) list_double_fisheye_pane_g4

0x85c3,	// (0x0002729d) list_double_fisheye_pane_g5_ParamLimits

0x85c3,	// (0x0002729d) list_double_fisheye_pane_g5

0xe5ac,	// (0x0002d286) sp_fs_scroll_pane_cp03

0xd506,	// (0x0002c1e0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe35e,	// (0x0002d038) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0002e9b3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe36a,	// (0x0002d044) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8cf6,	// (0x000279d0) sp_fs_scroll_pane_cp02

0xa495,	// (0x0002916f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa495,	// (0x0002916f) popup_sp_fs_calendar_preview_list_single_pane

0x9beb,	// (0x000288c5) main_cam6_pano_pane

0xa5f8,	// (0x000292d2) main_mup3_pane_ParamLimits

0x9beb,	// (0x000288c5) main_phacti_pane

0x81b1,	// (0x00026e8b) bg_button_pane_cp11

0x81c9,	// (0x00026ea3) main_mobtv_info_pane_g2_ParamLimits

0x81c9,	// (0x00026ea3) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0002e913) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0002e913) main_mobtv_info_pane_g

0x837b,	// (0x00027055) sc_clock_pane_t5_ParamLimits

0x837b,	// (0x00027055) sc_clock_pane_t5

0x842a,	// (0x00027104) main_radioblah_pane_g1_ParamLimits

0xe184,	// (0x0002ce5e) main_radioblah_pane_t3_ParamLimits

0xe184,	// (0x0002ce5e) main_radioblah_pane_t3

0xe19c,	// (0x0002ce76) main_radioblah_pane_t4_ParamLimits

0xe19c,	// (0x0002ce76) main_radioblah_pane_t4

0x8448,	// (0x00027122) main_radioblah_text_pane_ParamLimits

0x8448,	// (0x00027122) main_radioblah_text_pane

0x8455,	// (0x0002712f) main_radioblah_info_pane_g1_ParamLimits

0x84ee,	// (0x000271c8) main_radioblah_info_pane_t4_ParamLimits

0x84ee,	// (0x000271c8) main_radioblah_info_pane_t4

0xa5f8,	// (0x000292d2) main_sp_fs_calendar_pane

0x8e0f,	// (0x00027ae9) main_phacti_pane_g1

0x8e17,	// (0x00027af1) phacti_note_pane_ParamLimits

0x8e17,	// (0x00027af1) phacti_note_pane

0xe6ef,	// (0x0002d3c9) phacti_term_pane_ParamLimits

0xe6ef,	// (0x0002d3c9) phacti_term_pane

0xe704,	// (0x0002d3de) phacti_note_pane_t1_ParamLimits

0xe704,	// (0x0002d3de) phacti_note_pane_t1

0xe71b,	// (0x0002d3f5) phacti_term_pane_g1

0xe723,	// (0x0002d3fd) phacti_term_pane_t1_ParamLimits

0xe723,	// (0x0002d3fd) phacti_term_pane_t1

0xe74d,	// (0x0002d427) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe755,	// (0x0002d42f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda9,	// (0x0002ea83) popup_sp_fs_calendar_preview_list_single_pane_g

0xe75d,	// (0x0002d437) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe75d,	// (0x0002d437) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe773,	// (0x0002d44d) aid_popup_sp_fs_bg_corner_pane

0xc737,	// (0x0002b411) popup_sp_fs_calendar_preview_bg_pane_g1

0x9beb,	// (0x000288c5) popup_sp_fs_calendar_preview_bg_pane

0xe77b,	// (0x0002d455) popup_sp_fs_calendar_preview_list_pane

0xc2e6,	// (0x0002afc0) bg_main_sp_fs_cale_pane_ParamLimits

0xc2e6,	// (0x0002afc0) bg_main_sp_fs_cale_pane

0xe78c,	// (0x0002d466) listscroll_cale_mrui_pane_ParamLimits

0xe78c,	// (0x0002d466) listscroll_cale_mrui_pane

0xe7a1,	// (0x0002d47b) listscroll_sp_fs_schedule_track_pane

0xe7aa,	// (0x0002d484) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7aa,	// (0x0002d484) main_sp_fs_ctrlbar_pane_cp01

0xe7bd,	// (0x0002d497) main_sp_fs_ribbon_pane

0xe7c5,	// (0x0002d49f) popup_sp_fs_cale_preview_window

0x8e76,	// (0x00027b50) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e76,	// (0x00027b50) list_single_sp_fs_schedule_track_pane

0x22c4,	// (0x00020f9e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x22c4,	// (0x00020f9e) bg_sp_fs_highlight_list_pane_cp03

0x8e8b,	// (0x00027b65) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e8b,	// (0x00027b65) list_single_sp_fs_schedule_track_pane_g1

0x8e97,	// (0x00027b71) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e97,	// (0x00027b71) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdae,	// (0x0002ea88) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdae,	// (0x0002ea88) list_single_sp_fs_schedule_track_pane_g

0x8ea3,	// (0x00027b7d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ea3,	// (0x00027b7d) list_single_sp_fs_schedule_track_pane_t1

0x8ec1,	// (0x00027b9b) sp_fs_schedule_track_pane_ParamLimits

0x8ec1,	// (0x00027b9b) sp_fs_schedule_track_pane

0xe7d7,	// (0x0002d4b1) sp_fs_schedule_track_pane_g1

0xe7df,	// (0x0002d4b9) sp_fs_schedule_track_pane_g2

0xe7e7,	// (0x0002d4c1) sp_fs_schedule_track_pane_g3

0xe7ef,	// (0x0002d4c9) sp_fs_schedule_track_pane_g4

0xe7f7,	// (0x0002d4d1) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb3,	// (0x0002ea8d) sp_fs_schedule_track_pane_g

0xd1aa,	// (0x0002be84) bg_sp_fs_schedule_viewer_highlight_g1

0xa7a0,	// (0x0002947a) bg_sp_fs_schedule_viewer_highlight_g2

0xd1b2,	// (0x0002be8c) bg_sp_fs_schedule_viewer_highlight_g3

0xd1ba,	// (0x0002be94) bg_sp_fs_schedule_viewer_highlight_g4

0xd3e2,	// (0x0002c0bc) bg_sp_fs_schedule_viewer_highlight_g5

0xd1ca,	// (0x0002bea4) bg_sp_fs_schedule_viewer_highlight_g6

0xd1d2,	// (0x0002beac) bg_sp_fs_schedule_viewer_highlight_g7

0xd1da,	// (0x0002beb4) bg_sp_fs_schedule_viewer_highlight_g8

0xa780,	// (0x0002945a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdbe,	// (0x0002ea98) bg_sp_fs_schedule_viewer_highlight_g

0x9beb,	// (0x000288c5) bg_main_sp_fs_ribbon_pane

0x8ed3,	// (0x00027bad) main_sp_fs_ribbon_pane_g1

0xe7ff,	// (0x0002d4d9) main_sp_fs_ribbon_pane_t1

0x8edc,	// (0x00027bb6) main_sp_fs_ribbon_pane_t2

0xe80e,	// (0x0002d4e8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd1,	// (0x0002eaab) main_sp_fs_ribbon_pane_t

0xe81d,	// (0x0002d4f7) main_sp_fs_ribbon_scheduler_pane

0xe825,	// (0x0002d4ff) bg_main_sp_fs_ribbon_pane_g1

0xe82e,	// (0x0002d508) bg_main_sp_fs_ribbon_pane_g2

0xe837,	// (0x0002d511) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd8,	// (0x0002eab2) bg_main_sp_fs_ribbon_pane_g

0xe83f,	// (0x0002d519) main_sp_fs_ribbon_scheduler_pane_g1

0xe848,	// (0x0002d522) main_sp_fs_ribbon_scheduler_pane_g2

0xe851,	// (0x0002d52b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfddf,	// (0x0002eab9) main_sp_fs_ribbon_scheduler_pane_g

0xe85a,	// (0x0002d534) list_cale_mrui_pane

0x8eeb,	// (0x00027bc5) sp_fs_scroll_pane_cp07_ParamLimits

0x8eeb,	// (0x00027bc5) sp_fs_scroll_pane_cp07

0x8f07,	// (0x00027be1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f07,	// (0x00027be1) bg_sp_fs_schedule_viewer_highlight

0xe867,	// (0x0002d541) list_single_sp_fs_schedule_track_pane_cp01

0xe86f,	// (0x0002d549) list_sp_fs_schedule_track_pane

0xe877,	// (0x0002d551) sp_fs_scroll_pane_cp06_ParamLimits

0xe877,	// (0x0002d551) sp_fs_scroll_pane_cp06

0xc737,	// (0x0002b411) bgmain_sp_fs_calendar_pane_g1

0x8f14,	// (0x00027bee) list_single_cale_mrui_pane_ParamLimits

0x8f14,	// (0x00027bee) list_single_cale_mrui_pane

0xe889,	// (0x0002d563) list_single_cale_mrui_row_pane_ParamLimits

0xe889,	// (0x0002d563) list_single_cale_mrui_row_pane

0xe89f,	// (0x0002d579) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe89f,	// (0x0002d579) list_single_cale_mrui_row_pane_g1

0xe8e4,	// (0x0002d5be) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8e4,	// (0x0002d5be) list_single_cale_mrui_row_pane_t1

0x8f29,	// (0x00027c03) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f29,	// (0x00027c03) list_single_cale_mrui_row_pane_t2

0xe8f6,	// (0x0002d5d0) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8f6,	// (0x0002d5d0) list_single_cale_mrui_row_pane_t3

0xe925,	// (0x0002d5ff) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe925,	// (0x0002d5ff) list_single_cale_mrui_row_pane_t4

0x0003,

0xfded,	// (0x0002eac7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfded,	// (0x0002eac7) list_single_cale_mrui_row_pane_t

0x8f8f,	// (0x00027c69) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f8f,	// (0x00027c69) list_single_cmail_header_editor_pane_bg_cp01

0x8fb3,	// (0x00027c8d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fb3,	// (0x00027c8d) list_single_cmail_header_editor_pane_bg_cp02

0x8fcf,	// (0x00027ca9) main_radioblah_text_pane_t1_ParamLimits

0x8fcf,	// (0x00027ca9) main_radioblah_text_pane_t1

0xe954,	// (0x0002d62e) cam6_indi_pane_cp01

0xe95c,	// (0x0002d636) cam6_mode_pane_cp01

0xe964,	// (0x0002d63e) cam6_pano_pane

0xe96d,	// (0x0002d647) cam6_zoom_pane_cp01

0xe977,	// (0x0002d651) cam6_pano_image_pane

0xe980,	// (0x0002d65a) cam6_pano_pane_g1

0xded9,	// (0x0002cbb3) cam6_pano_pane_g2

0xe989,	// (0x0002d663) cam6_pano_pane_g3

0xe992,	// (0x0002d66c) cam6_pano_pane_g4

0xccdd,	// (0x0002b9b7) cam6_pano_pane_g5

0xe99b,	// (0x0002d675) cam6_pano_pane_g6

0xe9a3,	// (0x0002d67d) cam6_pano_pane_g7

0xe9ab,	// (0x0002d685) cam6_pano_pane_g8

0xe9b4,	// (0x0002d68e) cam6_pano_pane_g9

0x0008,

0xfdf6,	// (0x0002ead0) cam6_pano_pane_g

0x9beb,	// (0x000288c5) main_browser_tag_pane

0xe6d0,	// (0x0002d3aa) grid_navstr_albumart_pane

0xe9bf,	// (0x0002d699) cell_navstr_albumart_pane_ParamLimits

0xe9bf,	// (0x0002d699) cell_navstr_albumart_pane

0xe9de,	// (0x0002d6b8) cell_navstr_albumart_pane_g1

0xc0f3,	// (0x0002adcd) cell_navstr_albumart_pane_g2

0xc103,	// (0x0002addd) cell_navstr_albumart_pane_g3

0xc0fb,	// (0x0002add5) cell_navstr_albumart_pane_g4

0x0003,

0xfe09,	// (0x0002eae3) cell_navstr_albumart_pane_g

0x8fe9,	// (0x00027cc3) bt_list_pane_ParamLimits

0x8fe9,	// (0x00027cc3) bt_list_pane

0x9002,	// (0x00027cdc) bt_list_pane_t1

0x9011,	// (0x00027ceb) bt_list_pane_t2

0x0001,

0xfe12,	// (0x0002eaec) bt_list_pane_t

0x9beb,	// (0x000288c5) main_cale_prevew_pane

0x9020,	// (0x00027cfa) popup_cale_preview_window_ParamLimits

0x9020,	// (0x00027cfa) popup_cale_preview_window

0xa5f8,	// (0x000292d2) bg_popup_preview_window_pane_cp05_ParamLimits

0xa5f8,	// (0x000292d2) bg_popup_preview_window_pane_cp05

0xe9e6,	// (0x0002d6c0) list_cale_preview_pane_ParamLimits

0xe9e6,	// (0x0002d6c0) list_cale_preview_pane

0x903b,	// (0x00027d15) list_double_cale_preview_pane_ParamLimits

0x903b,	// (0x00027d15) list_double_cale_preview_pane

0x904f,	// (0x00027d29) list_single_cale_preview_pane_ParamLimits

0x904f,	// (0x00027d29) list_single_cale_preview_pane

0x9067,	// (0x00027d41) list_single_cale_preview_pane_g1

0x906f,	// (0x00027d49) list_single_cale_preview_pane_t1_ParamLimits

0x906f,	// (0x00027d49) list_single_cale_preview_pane_t1

0x9084,	// (0x00027d5e) list_double_cale_preview_pane_g1

0x908c,	// (0x00027d66) list_double_cale_preview_pane_t1_ParamLimits

0x908c,	// (0x00027d66) list_double_cale_preview_pane_t1

0x90a1,	// (0x00027d7b) list_double_cale_preview_pane_t2_ParamLimits

0x90a1,	// (0x00027d7b) list_double_cale_preview_pane_t2

0x0001,

0xfe17,	// (0x0002eaf1) list_double_cale_preview_pane_t_ParamLimits

0xfe17,	// (0x0002eaf1) list_double_cale_preview_pane_t

0x9beb,	// (0x000288c5) main_ezdial_pane

0xa5f8,	// (0x000292d2) main_sp_fs_email_pane_ParamLimits

0x8703,	// (0x000273dd) cmail_ddmenu_btn01_pane_ParamLimits

0x8703,	// (0x000273dd) cmail_ddmenu_btn01_pane

0x8720,	// (0x000273fa) cmail_ddmenu_btn02_pane_ParamLimits

0x8720,	// (0x000273fa) cmail_ddmenu_btn02_pane

0x873e,	// (0x00027418) cmail_ddmenu_btn03_pane_ParamLimits

0x873e,	// (0x00027418) cmail_ddmenu_btn03_pane

0x876e,	// (0x00027448) main_sp_fs_ctrlbar_pane_ParamLimits

0x8788,	// (0x00027462) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d00,	// (0x000279da) list_cmail_body_pane_ParamLimits

0xe5bb,	// (0x0002d295) bg_button_pane_cp12

0xe5d0,	// (0x0002d2aa) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5d0,	// (0x0002d2aa) list_single_cmail_header_detail_pane_g3

0xe62b,	// (0x0002d305) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe62b,	// (0x0002d305) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9a,	// (0x0002ea74) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9a,	// (0x0002ea74) list_single_cmail_header_detail_pane_t

0xe738,	// (0x0002d412) phacti_term_pane_t2_ParamLimits

0xe738,	// (0x0002d412) phacti_term_pane_t2

0x0001,

0xfda4,	// (0x0002ea7e) phacti_term_pane_t_ParamLimits

0xfda4,	// (0x0002ea7e) phacti_term_pane_t

0xe9f2,	// (0x0002d6cc) aid_size_list_single_double

0x90b9,	// (0x00027d93) popup_ezdial_listscroll_window

0x90db,	// (0x00027db5) popup_number_entry_window_cp01

0xa535,	// (0x0002920f) bg_popup_call_pane_cp09

0xe9fe,	// (0x0002d6d8) ezdial_list_pane

0xea06,	// (0x0002d6e0) scroll_pane_cp23

0xc516,	// (0x0002b1f0) bg_button_pane_cp028_ParamLimits

0xc516,	// (0x0002b1f0) bg_button_pane_cp028

0x90e9,	// (0x00027dc3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90e9,	// (0x00027dc3) cmail_ddmenu_btn01_pane_g1

0x90fb,	// (0x00027dd5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x90fb,	// (0x00027dd5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe1c,	// (0x0002eaf6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe1c,	// (0x0002eaf6) cmail_ddmenu_btn01_pane_g

0xea0e,	// (0x0002d6e8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea0e,	// (0x0002d6e8) cmail_ddmenu_btn01_pane_t1

0xc2e6,	// (0x0002afc0) bg_button_pane_cp029_ParamLimits

0xc2e6,	// (0x0002afc0) bg_button_pane_cp029

0x9107,	// (0x00027de1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9107,	// (0x00027de1) cmail_ddmenu_btn02_pane_g1

0x911f,	// (0x00027df9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x911f,	// (0x00027df9) cmail_ddmenu_btn02_pane_t1

0x22c4,	// (0x00020f9e) bg_button_pane_cp031_ParamLimits

0x22c4,	// (0x00020f9e) bg_button_pane_cp031

0x9107,	// (0x00027de1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9107,	// (0x00027de1) cmail_ddmenu_btn03_pane_g1

0x911f,	// (0x00027df9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x911f,	// (0x00027df9) cmail_ddmenu_btn03_pane_t1

0x69e4,	// (0x000256be) cell_dialer2_keypad_pane_t1_ParamLimits

0x69fe,	// (0x000256d8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x69fe,	// (0x000256d8) cell_dialer2_keypad_pane_t1_copy1

0x8022,	// (0x00026cfc) ncimui_group_button_pane

0xa5f8,	// (0x000292d2) main_sp_fs_calendar_pane_ParamLimits

0x8d19,	// (0x000279f3) list_single_cmail_header_caption_pane_ParamLimits

0xe783,	// (0x0002d45d) aid_recal_txt_sm_pane

0x9beb,	// (0x000288c5) mian_recal_day_pane

0xe7c5,	// (0x0002d49f) popup_sp_fs_cale_preview_window_ParamLimits

0xea24,	// (0x0002d6fe) list_recal_day_pane

0xea67,	// (0x0002d741) list_single_recal_day_pane_ParamLimits

0xea67,	// (0x0002d741) list_single_recal_day_pane

0xea79,	// (0x0002d753) list_single_recal_day_pane_g1_ParamLimits

0xea79,	// (0x0002d753) list_single_recal_day_pane_g1

0xea85,	// (0x0002d75f) list_single_recal_day_pane_g2_ParamLimits

0xea85,	// (0x0002d75f) list_single_recal_day_pane_g2

0xea91,	// (0x0002d76b) list_single_recal_day_pane_g3_ParamLimits

0xea91,	// (0x0002d76b) list_single_recal_day_pane_g3

0x9143,	// (0x00027e1d) list_single_recal_day_pane_g4_ParamLimits

0x9143,	// (0x00027e1d) list_single_recal_day_pane_g4

0xea9d,	// (0x0002d777) list_single_recal_day_pane_g5_ParamLimits

0xea9d,	// (0x0002d777) list_single_recal_day_pane_g5

0xeaa9,	// (0x0002d783) list_single_recal_day_pane_g6_ParamLimits

0xeaa9,	// (0x0002d783) list_single_recal_day_pane_g6

0x0004,

0xfe2b,	// (0x0002eb05) list_single_recal_day_pane_g_ParamLimits

0xfe2b,	// (0x0002eb05) list_single_recal_day_pane_g

0xeabd,	// (0x0002d797) list_single_recal_day_pane_t1

0xeacf,	// (0x0002d7a9) list_single_recal_day_pane_t2

0x0001,

0xfe36,	// (0x0002eb10) list_single_recal_day_pane_t

0x915b,	// (0x00027e35) ncimui_query_button_pane_ParamLimits

0x915b,	// (0x00027e35) ncimui_query_button_pane

0x916b,	// (0x00027e45) ncimui_query_button_pane_t1_ParamLimits

0x916b,	// (0x00027e45) ncimui_query_button_pane_t1

0xeae1,	// (0x0002d7bb) ncimui_query_button_pane_t2_ParamLimits

0xeae1,	// (0x0002d7bb) ncimui_query_button_pane_t2

0x0001,

0xfe3b,	// (0x0002eb15) ncimui_query_button_pane_t_ParamLimits

0xfe3b,	// (0x0002eb15) ncimui_query_button_pane_t

0x917e,	// (0x00027e58) query_button_pane_ParamLimits

0x917e,	// (0x00027e58) query_button_pane

0x9beb,	// (0x000288c5) bg_button_pane_cp0028

0xeaf4,	// (0x0002d7ce) query_button_pane_t1

0x545c,	// (0x00024136) main_tport_pane_ParamLimits

0x8c02,	// (0x000278dc) bg_popup_window_pane_cp01_ParamLimits

0x8c02,	// (0x000278dc) bg_popup_window_pane_cp01

0x8c10,	// (0x000278ea) heading_pane_cp08_ParamLimits

0x8c10,	// (0x000278ea) heading_pane_cp08

0x8c1e,	// (0x000278f8) heading_pane_cp07_ParamLimits

0x8c1e,	// (0x000278f8) heading_pane_cp07

0x8c8f,	// (0x00027969) cell_tport_appsw_pane_g2

0x0002,

0xfd87,	// (0x0002ea61) cell_tport_appsw_pane_g

0xafe2,	// (0x00029cbc) input_candi_list_open_g1

0xa954,	// (0x0002962e) list_cale_time_pane_g6_ParamLimits

0xa954,	// (0x0002962e) list_cale_time_pane_g6

0x5bf5,	// (0x000248cf) aid_size_touch_calib_1_ParamLimits

0x5bf5,	// (0x000248cf) aid_size_touch_calib_1

0x5c01,	// (0x000248db) aid_size_touch_calib_2_ParamLimits

0x5c01,	// (0x000248db) aid_size_touch_calib_2

0x5c0f,	// (0x000248e9) aid_size_touch_calib_3_ParamLimits

0x5c0f,	// (0x000248e9) aid_size_touch_calib_3

0x5c1f,	// (0x000248f9) aid_size_touch_calib_4_ParamLimits

0x5c1f,	// (0x000248f9) aid_size_touch_calib_4

0x5c2d,	// (0x00024907) main_touch_calib_button_group_pane_ParamLimits

0x5c2d,	// (0x00024907) main_touch_calib_button_group_pane

0x5c3b,	// (0x00024915) main_touch_calib_pane_g1_ParamLimits

0x5c47,	// (0x00024921) main_touch_calib_pane_g2_ParamLimits

0x5c53,	// (0x0002492d) main_touch_calib_pane_g3_ParamLimits

0x5c5f,	// (0x00024939) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0002e42b) main_touch_calib_pane_g_ParamLimits

0x5c6b,	// (0x00024945) main_touch_calib_pane_t1_ParamLimits

0x5c82,	// (0x0002495c) main_touch_calib_pane_t2_ParamLimits

0x5c9b,	// (0x00024975) main_touch_calib_pane_t3_ParamLimits

0x5cb1,	// (0x0002498b) main_touch_calib_pane_t4_ParamLimits

0x5cc7,	// (0x000249a1) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0002e434) main_touch_calib_pane_t_ParamLimits

0xca73,	// (0x0002b74d) list_single_fp_cale_pane_g3_ParamLimits

0xca73,	// (0x0002b74d) list_single_fp_cale_pane_g3

0x19c7,	// (0x000206a1) bg_button_pane_cp012_ParamLimits

0x19c7,	// (0x000206a1) bg_vkb2_func_pane_cp03_ParamLimits

0x1df5,	// (0x00020acf) cell_vitu2_function_top_pane_g1_ParamLimits

0x19c7,	// (0x000206a1) bg_vkb2_func_pane_cp04_ParamLimits

0x7fa8,	// (0x00026c82) main_ncimui_button_group_pane_ParamLimits

0x7fa8,	// (0x00026c82) main_ncimui_button_group_pane

0x8010,	// (0x00026cea) main_ncimui_pane_t3_ParamLimits

0x8010,	// (0x00026cea) main_ncimui_pane_t3

0xe6e6,	// (0x0002d3c0) phacti_button_group_pane

0xe9f2,	// (0x0002d6cc) aid_size_list_single_double_ParamLimits

0x90b9,	// (0x00027d93) popup_ezdial_listscroll_window_ParamLimits

0x90db,	// (0x00027db5) popup_number_entry_window_cp01_ParamLimits

0x918b,	// (0x00027e65) phacti_button_pane_ParamLimits

0x918b,	// (0x00027e65) phacti_button_pane

0x9beb,	// (0x000288c5) bg_button_pane_cp14

0xeb02,	// (0x0002d7dc) phacti_button_pane_t1

0x919c,	// (0x00027e76) main_touch_calib_button_pane_ParamLimits

0x919c,	// (0x00027e76) main_touch_calib_button_pane

0xa37f,	// (0x00029059) bg_button_pane_cp18_ParamLimits

0xa37f,	// (0x00029059) bg_button_pane_cp18

0xeb10,	// (0x0002d7ea) main_touch_calib_button_pane_t1_ParamLimits

0xeb10,	// (0x0002d7ea) main_touch_calib_button_pane_t1

0xeb26,	// (0x0002d800) main_touch_calib_button_pane_t2_ParamLimits

0xeb26,	// (0x0002d800) main_touch_calib_button_pane_t2

0x0001,

0xfe40,	// (0x0002eb1a) main_touch_calib_button_pane_t_ParamLimits

0xfe40,	// (0x0002eb1a) main_touch_calib_button_pane_t

0x9beb,	// (0x000288c5) cell_ncimui_button_pane

0x9beb,	// (0x000288c5) bg_button_pane_cp032

0xeb44,	// (0x0002d81e) cell_ncimui_button_pane_t1

0x16dc,	// (0x000203b6) image3_infobar_pane_ParamLimits

0x16dc,	// (0x000203b6) image3_infobar_pane

0x839d,	// (0x00027077) fs_bigclock_status_pane_ParamLimits

0x839d,	// (0x00027077) fs_bigclock_status_pane

0x83aa,	// (0x00027084) main_fs_bigclock_clock_pane_ParamLimits

0x83aa,	// (0x00027084) main_fs_bigclock_clock_pane

0x83c6,	// (0x000270a0) main_fs_bigclock_indi_pane_ParamLimits

0x83c6,	// (0x000270a0) main_fs_bigclock_indi_pane

0x83f8,	// (0x000270d2) main_fs_bigclock_swipe_pane_ParamLimits

0x83f8,	// (0x000270d2) main_fs_bigclock_swipe_pane

0x9beb,	// (0x000288c5) main_fs_clock_dumped_data

0xdfe6,	// (0x0002ccc0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfe6,	// (0x0002ccc0) list_single_fs_bigclock_indicator_pane_g1

0xe010,	// (0x0002ccea) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe010,	// (0x0002ccea) list_single_fs_bigclock_indicator_pane_g2

0xe02a,	// (0x0002cd04) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe02a,	// (0x0002cd04) list_single_fs_bigclock_indicator_pane_g3

0xe044,	// (0x0002cd1e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe044,	// (0x0002cd1e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0002e947) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0002e947) list_single_fs_bigclock_indicator_pane_g

0xe06f,	// (0x0002cd49) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe06f,	// (0x0002cd49) list_single_fs_bigclock_indicator_pane_t1

0xe097,	// (0x0002cd71) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe097,	// (0x0002cd71) list_single_fs_bigclock_indicator_pane_t2

0xe0bf,	// (0x0002cd99) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0bf,	// (0x0002cd99) list_single_fs_bigclock_indicator_pane_t3

0xe0e7,	// (0x0002cdc1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0e7,	// (0x0002cdc1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0002e952) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0002e952) list_single_fs_bigclock_indicator_pane_t

0xeb52,	// (0x0002d82c) image3_infobar_fav_pane_ParamLimits

0xeb52,	// (0x0002d82c) image3_infobar_fav_pane

0xeb62,	// (0x0002d83c) image3_infobar_loc_pane_ParamLimits

0xeb62,	// (0x0002d83c) image3_infobar_loc_pane

0xeb78,	// (0x0002d852) image3_infobar_time_pane_ParamLimits

0xeb78,	// (0x0002d852) image3_infobar_time_pane

0xc737,	// (0x0002b411) image3_infobar_time_pane_g1

0xeb88,	// (0x0002d862) image3_infobar_time_pane_t1

0xc737,	// (0x0002b411) image3_infobar_loc_pane_g1

0xeb96,	// (0x0002d870) image3_infobar_loc_pane_g2

0x0001,

0xfe45,	// (0x0002eb1f) image3_infobar_loc_pane_g

0xeb9e,	// (0x0002d878) image3_infobar_loc_pane_t1

0xc737,	// (0x0002b411) image3_infobar_fav_pane_g1

0xebac,	// (0x0002d886) image3_infobar_fav_pane_g2

0x0001,

0xfe4a,	// (0x0002eb24) image3_infobar_fav_pane_g

0xebb4,	// (0x0002d88e) fs_bigclock_status_battery_pane

0xebbd,	// (0x0002d897) fs_bigclock_status_signal_pane

0xebc6,	// (0x0002d8a0) fs_bigclock_status_title_pane

0xebcf,	// (0x0002d8a9) fs_bigclock_status_signal_pane_g1

0xebd8,	// (0x0002d8b2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe4f,	// (0x0002eb29) fs_bigclock_status_signal_pane_g

0xebe0,	// (0x0002d8ba) fs_bigclock_status_battery_pane_g1

0xebe9,	// (0x0002d8c3) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe54,	// (0x0002eb2e) fs_bigclock_status_battery_pane_g

0xebf1,	// (0x0002d8cb) fs_bigclock_status_title_pane_t1

0xc737,	// (0x0002b411) main_fs_bigclock_clock_pane_g1

0xebff,	// (0x0002d8d9) main_fs_bigclock_clock_pane_g2

0xec0a,	// (0x0002d8e4) main_fs_bigclock_clock_pane_g3

0xec0a,	// (0x0002d8e4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe59,	// (0x0002eb33) main_fs_bigclock_clock_pane_g

0xec16,	// (0x0002d8f0) main_fs_bigclock_clock_pane_t1

0x91ac,	// (0x00027e86) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe62,	// (0x0002eb3c) main_fs_bigclock_clock_pane_t

0x91bb,	// (0x00027e95) list_single_fs_bigclock_indicator_pane_ParamLimits

0x91bb,	// (0x00027e95) list_single_fs_bigclock_indicator_pane

0x91cc,	// (0x00027ea6) list_single_fs_bigclock_pane_ParamLimits

0x91cc,	// (0x00027ea6) list_single_fs_bigclock_pane

0xec2d,	// (0x0002d907) main_fs_bigclock_indicator_pane_t1

0xec3c,	// (0x0002d916) list_single_fs_bigclock_pane_g1

0xec44,	// (0x0002d91e) list_single_fs_bigclock_pane_t1

0xc737,	// (0x0002b411) main_fs_bigclock_swipe_pane_g1

0xec87,	// (0x0002d961) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe73,	// (0x0002eb4d) main_fs_bigclock_swipe_pane_g

0xec8f,	// (0x0002d969) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec8f,	// (0x0002d969) main_fs_bigclock_swipe_pane_t1

0x43e3,	// (0x000230bd) call_type_pane_ParamLimits

0x9beb,	// (0x000288c5) main_btmg_pane

0xe8cb,	// (0x0002d5a5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8cb,	// (0x0002d5a5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfde6,	// (0x0002eac0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfde6,	// (0x0002eac0) list_single_cale_mrui_row_pane_g

0xea4d,	// (0x0002d727) list_recal_vselct_arw_lo_pane

0xea55,	// (0x0002d72f) list_recal_vselct_arw_up_pane

0xea5d,	// (0x0002d737) list_recal_vselct_pane

0x9222,	// (0x00027efc) btmg_button_pane

0x922e,	// (0x00027f08) main_btmg_pane_g1

0x9beb,	// (0x000288c5) bg_button_pane_cp044

0xecac,	// (0x0002d986) btmg_button_pane_t1

0xc2d2,	// (0x0002afac) aid_listscroll_gen

0xa5f8,	// (0x000292d2) main_cntbar_detail_pane

0xe59c,	// (0x0002d276) list_cmail_folder_pane

0xe5ac,	// (0x0002d286) sp_fs_scroll_pane_cp03_ParamLimits

0x9236,	// (0x00027f10) list_single_fs_dyc_pane_cp01_ParamLimits

0x9236,	// (0x00027f10) list_single_fs_dyc_pane_cp01

0xecba,	// (0x0002d994) aid_size_cmail_indent

0xecc3,	// (0x0002d99d) list_single_dyc_row_pane_cp01

0x9274,	// (0x00027f4e) cntbar_detail_list_pane_ParamLimits

0x9274,	// (0x00027f4e) cntbar_detail_list_pane

0x92b4,	// (0x00027f8e) main_cntbar_detail_cont_pane_ParamLimits

0x92b4,	// (0x00027f8e) main_cntbar_detail_cont_pane

0x42fa,	// (0x00022fd4) scroll_pane_cp032_ParamLimits

0x42fa,	// (0x00022fd4) scroll_pane_cp032

0x92c0,	// (0x00027f9a) cntbar_detail_list_event_pane_ParamLimits

0x92c0,	// (0x00027f9a) cntbar_detail_list_event_pane

0x9282,	// (0x00027f5c) cntbar_detail_list_shct_pane

0xa7ee,	// (0x000294c8) aid_list_gen

0xeccc,	// (0x0002d9a6) aid_scroll

0xecd5,	// (0x0002d9af) aid_size_touch_scroll_bar

0x77c4,	// (0x0002649e) aid_list_double

0xecde,	// (0x0002d9b8) aid_list_single

0x77b2,	// (0x0002648c) aid_list_single_lg

0xece7,	// (0x0002d9c1) aid_list_z_g_a_sm

0xecef,	// (0x0002d9c9) aid_list_z_g_d

0x92d0,	// (0x00027faa) aid_txt_z_prm

0x92de,	// (0x00027fb8) aid_txt_z_prm_cp01

0x92ec,	// (0x00027fc6) aid_txt_z_sec

0x92fa,	// (0x00027fd4) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92fa,	// (0x00027fd4) main_cntbar_detail_cont_pane_g1

0x9307,	// (0x00027fe1) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9307,	// (0x00027fe1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe78,	// (0x0002eb52) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe78,	// (0x0002eb52) main_cntbar_detail_cont_pane_g

0xecf7,	// (0x0002d9d1) main_cntbar_detail_cont_pane_t1

0xed05,	// (0x0002d9df) main_cntbar_detail_cont_pane_t2

0xed13,	// (0x0002d9ed) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe7d,	// (0x0002eb57) main_cntbar_detail_cont_pane_t

0x9313,	// (0x00027fed) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9313,	// (0x00027fed) cell_cntbar_detail_list_shct_pane

0xed21,	// (0x0002d9fb) cntbar_detail_list_shct_pane_g1

0xed2a,	// (0x0002da04) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe84,	// (0x0002eb5e) cntbar_detail_list_shct_pane_g

0x9327,	// (0x00028001) cntbar_detail_list_event_pane_g1_ParamLimits

0x9327,	// (0x00028001) cntbar_detail_list_event_pane_g1

0x9333,	// (0x0002800d) cntbar_detail_list_event_pane_g2_ParamLimits

0x9333,	// (0x0002800d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe89,	// (0x0002eb63) cntbar_detail_list_event_pane_g_ParamLimits

0xfe89,	// (0x0002eb63) cntbar_detail_list_event_pane_g

0x93a1,	// (0x0002807b) cntbar_detail_list_event_pane_t1_ParamLimits

0x93a1,	// (0x0002807b) cntbar_detail_list_event_pane_t1

0x93b6,	// (0x00028090) cntbar_detail_list_event_pane_t2_ParamLimits

0x93b6,	// (0x00028090) cntbar_detail_list_event_pane_t2

0x0002,

0xfe96,	// (0x0002eb70) cntbar_detail_list_event_pane_t_ParamLimits

0xfe96,	// (0x0002eb70) cntbar_detail_list_event_pane_t

0xc737,	// (0x0002b411) cell_cntbar_detail_list_shct_pane_g1

0x4747,	// (0x00023421) navi_pane_mv_g3

0xa5f8,	// (0x000292d2) main_cntbar_detail_pane_ParamLimits

0x9beb,	// (0x000288c5) main_notif_wgt_pane

0x1413,	// (0x000200ed) aid_tch_main_mp4_pane_g4

0x1652,	// (0x0002032c) popup_slider_window_cp02

0xea43,	// (0x0002d71d) list_recal_day_event_pane

0x9254,	// (0x00027f2e) cntbar_detail_btn_pane_ParamLimits

0x9254,	// (0x00027f2e) cntbar_detail_btn_pane

0x9264,	// (0x00027f3e) cntbar_detail_btn_pane_cp01_ParamLimits

0x9264,	// (0x00027f3e) cntbar_detail_btn_pane_cp01

0x9282,	// (0x00027f5c) cntbar_detail_list_shct_pane_ParamLimits

0x928e,	// (0x00027f68) cntbar_detail_pane_g1_ParamLimits

0x928e,	// (0x00027f68) cntbar_detail_pane_g1

0x929e,	// (0x00027f78) cntbar_detail_pane_t1_ParamLimits

0x929e,	// (0x00027f78) cntbar_detail_pane_t1

0x933f,	// (0x00028019) cntbar_detail_list_event_pane_g3_ParamLimits

0x933f,	// (0x00028019) cntbar_detail_list_event_pane_g3

0x9357,	// (0x00028031) cntbar_detail_list_event_pane_g4_ParamLimits

0x9357,	// (0x00028031) cntbar_detail_list_event_pane_g4

0x936f,	// (0x00028049) cntbar_detail_list_event_pane_g5_ParamLimits

0x936f,	// (0x00028049) cntbar_detail_list_event_pane_g5

0x9387,	// (0x00028061) cntbar_detail_list_event_pane_g6_ParamLimits

0x9387,	// (0x00028061) cntbar_detail_list_event_pane_g6

0x93cb,	// (0x000280a5) cntbar_detail_list_event_pane_t3_ParamLimits

0x93cb,	// (0x000280a5) cntbar_detail_list_event_pane_t3

0x93dd,	// (0x000280b7) popup_notif_wgt_window_ParamLimits

0x93dd,	// (0x000280b7) popup_notif_wgt_window

0x93ed,	// (0x000280c7) popup_submenu_window_cp01_ParamLimits

0x93ed,	// (0x000280c7) popup_submenu_window_cp01

0xa535,	// (0x0002920f) bg_popup_window_pane_cp10

0xed33,	// (0x0002da0d) listscroll_notif_wgt_pane

0xed45,	// (0x0002da1f) list_notif_wgt_window

0xed4e,	// (0x0002da28) scroll_pane_cp033

0x93fd,	// (0x000280d7) list_notif_wgt_row_pane_ParamLimits

0x93fd,	// (0x000280d7) list_notif_wgt_row_pane

0xed57,	// (0x0002da31) aid_size_list_notif_wgt_del

0xed64,	// (0x0002da3e) list_notif_wgt_row_pane_g1

0xed70,	// (0x0002da4a) list_notif_wgt_row_pane_g2

0xed84,	// (0x0002da5e) list_notif_wgt_row_pane_g3

0x0002,

0xfe9d,	// (0x0002eb77) list_notif_wgt_row_pane_g

0xed91,	// (0x0002da6b) list_notif_wgt_row_pane_t1

0xeda7,	// (0x0002da81) list_notif_wgt_row_pane_t2

0xedb9,	// (0x0002da93) list_notif_wgt_row_pane_t3

0x0002,

0xfea4,	// (0x0002eb7e) list_notif_wgt_row_pane_t

0xd408,	// (0x0002c0e2) list_recal_day_event_pane_g1

0xedcb,	// (0x0002daa5) list_recal_day_event_pane_t1

0x9beb,	// (0x000288c5) bg_button_pane_cp045

0xedda,	// (0x0002dab4) cntbar_detail_btn_pane_t1

0xc2e6,	// (0x0002afc0) main_callh_pane_ParamLimits

0xc2e6,	// (0x0002afc0) main_callh_pane

0x9beb,	// (0x000288c5) main_coverflow0_pane

0x9beb,	// (0x000288c5) main_wgtman_pane

0x8410,	// (0x000270ea) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8410,	// (0x000270ea) main_fs_bigclock_unlock_btn_pane

0x8c87,	// (0x00027961) bg_button_pane_cp16

0x8c97,	// (0x00027971) cell_tport_appsw_pane_g3

0x940e,	// (0x000280e8) cf0_flow_pane_ParamLimits

0x940e,	// (0x000280e8) cf0_flow_pane

0xede8,	// (0x0002dac2) listscroll_cf0_pane

0xedf3,	// (0x0002dacd) main_cf0_pane_g1

0x941d,	// (0x000280f7) main_cf0_pane_t1_ParamLimits

0x941d,	// (0x000280f7) main_cf0_pane_t1

0x9431,	// (0x0002810b) main_cf0_pane_t2_ParamLimits

0x9431,	// (0x0002810b) main_cf0_pane_t2

0x0001,

0xfeb0,	// (0x0002eb8a) main_cf0_pane_t_ParamLimits

0xfeb0,	// (0x0002eb8a) main_cf0_pane_t

0xee05,	// (0x0002dadf) scroll_pane_cp11

0x9445,	// (0x0002811f) cf0_flow_pane_g1

0x944d,	// (0x00028127) cf0_flow_pane_g2

0x0001,

0xfeb5,	// (0x0002eb8f) cf0_flow_pane_g

0x9455,	// (0x0002812f) cf0_flow_pane_t1

0x9beb,	// (0x000288c5) main_call6_pane

0x9beb,	// (0x000288c5) main_calllock_pane

0x9463,	// (0x0002813d) call6_btn_grp_pane_ParamLimits

0x9463,	// (0x0002813d) call6_btn_grp_pane

0x9470,	// (0x0002814a) call6_pane_g1_ParamLimits

0x9470,	// (0x0002814a) call6_pane_g1

0x9480,	// (0x0002815a) popup_call6_1st_window_ParamLimits

0x9480,	// (0x0002815a) popup_call6_1st_window

0x948e,	// (0x00028168) popup_call6_2nd_window_ParamLimits

0x948e,	// (0x00028168) popup_call6_2nd_window

0x949c,	// (0x00028176) cell_call6_btn_pane_ParamLimits

0x949c,	// (0x00028176) cell_call6_btn_pane

0xa535,	// (0x0002920f) bg_popup_call2_in_pane_cp03

0xee10,	// (0x0002daea) popup_call6_1st_window_g1

0xee18,	// (0x0002daf2) popup_call6_1st_window_g2

0xee20,	// (0x0002dafa) popup_call6_1st_window_g3

0x0002,

0xfeba,	// (0x0002eb94) popup_call6_1st_window_g

0xee28,	// (0x0002db02) popup_call6_1st_window_t1

0xee37,	// (0x0002db11) popup_call6_1st_window_t2

0xee47,	// (0x0002db21) popup_call6_1st_window_t3

0x0002,

0xfec1,	// (0x0002eb9b) popup_call6_1st_window_t

0xa535,	// (0x0002920f) bg_popup_call2_in_pane_cp04

0xee10,	// (0x0002daea) popup_call6_2nd_window_g1

0xee18,	// (0x0002daf2) popup_call6_2nd_window_g2

0xee20,	// (0x0002dafa) popup_call6_2nd_window_g3

0x0002,

0xfeba,	// (0x0002eb94) popup_call6_2nd_window_g

0xee28,	// (0x0002db02) popup_call6_2nd_window_t1

0x9beb,	// (0x000288c5) bg_button_pane_cp15

0xee57,	// (0x0002db31) cell_call6_btn_pane_g1

0xee60,	// (0x0002db3a) cell_call6_btn_pane_t1

0x94ab,	// (0x00028185) listscroll_wgtman_pane_ParamLimits

0x94ab,	// (0x00028185) listscroll_wgtman_pane

0x94c7,	// (0x000281a1) wgtman_btn_pane_ParamLimits

0x94c7,	// (0x000281a1) wgtman_btn_pane

0xad41,	// (0x00029a1b) aid_scroll_copy1

0xee6f,	// (0x0002db49) list_wgtman_pane

0x94fc,	// (0x000281d6) wgtman_btn_pane_g1_ParamLimits

0x94fc,	// (0x000281d6) wgtman_btn_pane_g1

0x9524,	// (0x000281fe) wgtman_btn_pane_t1_ParamLimits

0x9524,	// (0x000281fe) wgtman_btn_pane_t1

0xee79,	// (0x0002db53) wgtman_btn_pane_t2_ParamLimits

0xee79,	// (0x0002db53) wgtman_btn_pane_t2

0x0001,

0xfec8,	// (0x0002eba2) wgtman_btn_pane_t_ParamLimits

0xfec8,	// (0x0002eba2) wgtman_btn_pane_t

0x955b,	// (0x00028235) listrow_wgtman_pane_ParamLimits

0x955b,	// (0x00028235) listrow_wgtman_pane

0x956f,	// (0x00028249) listrow_wgtman_pane_g1

0x957c,	// (0x00028256) listrow_wgtman_pane_g2

0x0001,

0xfecd,	// (0x0002eba7) listrow_wgtman_pane_g

0x959a,	// (0x00028274) listrow_wgtman_pane_t1

0x95b2,	// (0x0002828c) listrow_wgtman_pane_t2

0x0001,

0xfed2,	// (0x0002ebac) listrow_wgtman_pane_t

0x95d8,	// (0x000282b2) wait_bar_pane_cp09

0xee90,	// (0x0002db6a) main_calllock_btn_pane

0xee9a,	// (0x0002db74) main_calllock_pane_g1

0x9beb,	// (0x000288c5) bg_button_pane_cp17

0xeea6,	// (0x0002db80) main_calllock_btn_pane_g1

0xeeaf,	// (0x0002db89) main_calllock_btn_pane_t1

0x9beb,	// (0x000288c5) main_dialer3_pane

0x9beb,	// (0x000288c5) main_fmrd2_pane

0xc737,	// (0x0002b411) main_fs_bigclock_unlock_btn_pane_g1

0xeec6,	// (0x0002dba0) main_fs_bigclock_unlock_btn_pane_t1

0x95ea,	// (0x000282c4) area_fmrd2_info_pane_ParamLimits

0x95ea,	// (0x000282c4) area_fmrd2_info_pane

0x95f6,	// (0x000282d0) area_fmrd2_visual_pane_ParamLimits

0x95f6,	// (0x000282d0) area_fmrd2_visual_pane

0x9604,	// (0x000282de) fmrd2_indi_pane_ParamLimits

0x9604,	// (0x000282de) fmrd2_indi_pane

0x9611,	// (0x000282eb) area_fmrd2_visual_pane_g1

0x9619,	// (0x000282f3) area_fmrd2_visual_pane_t1

0x9629,	// (0x00028303) area_fmrd2_visual_pane_t2

0x9639,	// (0x00028313) area_fmrd2_visual_pane_t3

0x0002,

0xfedc,	// (0x0002ebb6) area_fmrd2_visual_pane_t

0x9649,	// (0x00028323) area_fmrd2_info_pane_g1

0x9651,	// (0x0002832b) area_fmrd2_info_pane_t1

0x9661,	// (0x0002833b) area_fmrd2_info_pane_t2

0x9671,	// (0x0002834b) area_fmrd2_info_pane_t3

0x9681,	// (0x0002835b) area_fmrd2_info_pane_t4

0x0003,

0xfee3,	// (0x0002ebbd) area_fmrd2_info_pane_t

0x9691,	// (0x0002836b) fmrd2_indi_pane_t1

0x96a1,	// (0x0002837b) fmrd2_indi_pane_t2

0x96b1,	// (0x0002838b) fmrd2_indi_pane_t3

0x0002,

0xfeec,	// (0x0002ebc6) fmrd2_indi_pane_t

0xe053,	// (0x0002cd2d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe053,	// (0x0002cd2d) list_single_fs_bigclock_indicator_pane_g5

0xe103,	// (0x0002cddd) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe103,	// (0x0002cddd) list_single_fs_bigclock_indicator_pane_t5

0x8e2d,	// (0x00027b07) aid_cell_bcale_month_pane_ParamLimits

0x8e2d,	// (0x00027b07) aid_cell_bcale_month_pane

0x8e4b,	// (0x00027b25) bcale_month_pane_ParamLimits

0x8e4b,	// (0x00027b25) bcale_month_pane

0x8e67,	// (0x00027b41) bcale_preview_pane_ParamLimits

0x8e67,	// (0x00027b41) bcale_preview_pane

0xec44,	// (0x0002d91e) list_single_fs_bigclock_pane_t1_ParamLimits

0xec63,	// (0x0002d93d) list_single_fs_bigclock_pane_t2_ParamLimits

0xec63,	// (0x0002d93d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe6e,	// (0x0002eb48) list_single_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0002eb48) list_single_fs_bigclock_pane_t

0xeebe,	// (0x0002db98) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed7,	// (0x0002ebb1) main_fs_bigclock_unlock_btn_pane_g

0x96c1,	// (0x0002839b) aid_dia3_key_size_ParamLimits

0x96c1,	// (0x0002839b) aid_dia3_key_size

0x96cd,	// (0x000283a7) aid_dia3_listrow_size_ParamLimits

0x96cd,	// (0x000283a7) aid_dia3_listrow_size

0x96dd,	// (0x000283b7) dia3_keypad_fun_pane_ParamLimits

0x96dd,	// (0x000283b7) dia3_keypad_fun_pane

0x96ed,	// (0x000283c7) dia3_keypad_num_pane_ParamLimits

0x96ed,	// (0x000283c7) dia3_keypad_num_pane

0x96fd,	// (0x000283d7) dia3_listscroll_pane_ParamLimits

0x96fd,	// (0x000283d7) dia3_listscroll_pane

0x970b,	// (0x000283e5) dia3_numentry_pane_ParamLimits

0x970b,	// (0x000283e5) dia3_numentry_pane

0xeed4,	// (0x0002dbae) dia3_list_pane

0xeedf,	// (0x0002dbb9) scroll_pane_cp12

0x9beb,	// (0x000288c5) bg_dia3_numentry_pane

0x9719,	// (0x000283f3) dia3_numentry_pane_t1

0x9728,	// (0x00028402) cell_dia3_key_num_pane

0x9730,	// (0x0002840a) cell_dia3_key0_fun_pane_ParamLimits

0x9730,	// (0x0002840a) cell_dia3_key0_fun_pane

0x973d,	// (0x00028417) cell_dia3_key1_fun_pane_ParamLimits

0x973d,	// (0x00028417) cell_dia3_key1_fun_pane

0x974a,	// (0x00028424) dia3_listrow_pane

0xdd51,	// (0x0002ca2b) bg_dia3_numentry_pane_g1

0x9beb,	// (0x000288c5) bg_button_pane_cp21

0xeeea,	// (0x0002dbc4) cell_dia3_key_num_pane_t1

0xeef8,	// (0x0002dbd2) cell_dia3_key_num_pane_t2

0xef07,	// (0x0002dbe1) cell_dia3_key_num_pane_t3

0xef16,	// (0x0002dbf0) cell_dia3_key_num_pane_t4

0x0003,

0xfef3,	// (0x0002ebcd) cell_dia3_key_num_pane_t

0x9beb,	// (0x000288c5) bg_button_pane_cp19

0x9757,	// (0x00028431) cell_dia3_key0_fun_pane_g1

0x9beb,	// (0x000288c5) bg_button_pane_cp20

0x975f,	// (0x00028439) cell_dia3_key1_fun_pane_g1

0x9767,	// (0x00028441) area_left_week_number_pane

0x977a,	// (0x00028454) area_top_day_name_pane

0x9788,	// (0x00028462) frame_month_view_pane

0xef25,	// (0x0002dbff) grid_month_view_pane

0x979d,	// (0x00028477) cell_top_day_name_pane_ParamLimits

0x979d,	// (0x00028477) cell_top_day_name_pane

0x97b9,	// (0x00028493) cell_area_left_week_number_pane_ParamLimits

0x97b9,	// (0x00028493) cell_area_left_week_number_pane

0x97da,	// (0x000284b4) cell_month_view_pane_ParamLimits

0x97da,	// (0x000284b4) cell_month_view_pane

0xef33,	// (0x0002dc0d) frm_month_g1

0x9806,	// (0x000284e0) frm_month_g2

0x9817,	// (0x000284f1) frm_month_g3

0x9828,	// (0x00028502) frm_month_g4

0x9839,	// (0x00028513) frm_month_g5

0x984a,	// (0x00028524) frm_month_g6

0x985d,	// (0x00028537) frm_month_g7

0xef40,	// (0x0002dc1a) frm_month_g8

0x9870,	// (0x0002854a) frm_month_g9

0x987d,	// (0x00028557) frm_month_g10

0x988a,	// (0x00028564) frm_month_g11

0x9897,	// (0x00028571) frm_month_g12

0x98a4,	// (0x0002857e) frm_month_g13

0x98b3,	// (0x0002858d) frm_month_g14

0x98c2,	// (0x0002859c) frm_month_g15

0x98d1,	// (0x000285ab) frm_month_g16

0x000f,

0xfefc,	// (0x0002ebd6) frm_month_g

0xef4d,	// (0x0002dc27) cell_top_day_name_pane_t1

0x98e0,	// (0x000285ba) cell_area_left_week_number_pane_g1

0x98ef,	// (0x000285c9) cell_area_left_week_number_pane_t1

0xc967,	// (0x0002b641) cell_month_view_pane_g1

0x9905,	// (0x000285df) cell_month_view_pane_t1

0x9beb,	// (0x000288c5) main_fps_pane

0xe326,	// (0x0002d000) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe326,	// (0x0002d000) cmail_ddmenu_btn02_pane_cp1

0xe342,	// (0x0002d01c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe342,	// (0x0002d01c) cmail_ddmenu_btn02_pane_cp2

0x9113,	// (0x00027ded) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9113,	// (0x00027ded) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe21,	// (0x0002eafb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe21,	// (0x0002eafb) cmail_ddmenu_btn02_pane_g

0x9131,	// (0x00027e0b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9131,	// (0x00027e0b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe26,	// (0x0002eb00) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe26,	// (0x0002eb00) cmail_ddmenu_btn02_pane_t

0x991b,	// (0x000285f5) fps_text_pane_ParamLimits

0x991b,	// (0x000285f5) fps_text_pane

0x9928,	// (0x00028602) main_fps_pane_g1_ParamLimits

0x9928,	// (0x00028602) main_fps_pane_g1

0x9934,	// (0x0002860e) wait_bar_pane_cp010_ParamLimits

0x9934,	// (0x0002860e) wait_bar_pane_cp010

0x9940,	// (0x0002861a) fps_text_pane_t1_ParamLimits

0x9940,	// (0x0002861a) fps_text_pane_t1

0x6b39,	// (0x00025813) cam4_image_uncrop_pane_g1

0x6b42,	// (0x0002581c) cam4_image_uncrop_pane_g2

0x6b4b,	// (0x00025825) cam4_image_uncrop_pane_g3

0x6b54,	// (0x0002582e) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002e5c8) cam4_image_uncrop_pane_g

0x974a,	// (0x00028424) dia3_listrow_pane_ParamLimits

0x9beb,	// (0x000288c5) main_phob2_pane

0x8c69,	// (0x00027943) cell_tport_appsw_pane_cp02_ParamLimits

0x8c69,	// (0x00027943) cell_tport_appsw_pane_cp02

0x8c78,	// (0x00027952) cell_tport_appsw_pane_cp03_ParamLimits

0x8c78,	// (0x00027952) cell_tport_appsw_pane_cp03

0x9beb,	// (0x000288c5) phob2_contact_card_pane

0x9beb,	// (0x000288c5) phob2_listscroll_pane

0xef60,	// (0x0002dc3a) phob2_list_pane

0xef68,	// (0x0002dc42) scroll_pane_cp034

0x9959,	// (0x00028633) phob2_cc_data_pane_ParamLimits

0x9959,	// (0x00028633) phob2_cc_data_pane

0x9975,	// (0x0002864f) phob2_cc_listscroll_pane_ParamLimits

0x9975,	// (0x0002864f) phob2_cc_listscroll_pane

0x9991,	// (0x0002866b) list_double_large_graphic_phob2_pane_ParamLimits

0x9991,	// (0x0002866b) list_double_large_graphic_phob2_pane

0x99a9,	// (0x00028683) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99a9,	// (0x00028683) list_double_large_graphic_phob2_pane_g1

0x99bf,	// (0x00028699) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99bf,	// (0x00028699) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff1d,	// (0x0002ebf7) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff1d,	// (0x0002ebf7) list_double_large_graphic_phob2_pane_g

0x99cb,	// (0x000286a5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99cb,	// (0x000286a5) list_double_large_graphic_phob2_pane_t1

0x99e0,	// (0x000286ba) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99e0,	// (0x000286ba) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff22,	// (0x0002ebfc) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff22,	// (0x0002ebfc) list_double_large_graphic_phob2_pane_t

0x9beb,	// (0x000288c5) list_highlight_pane_cp024

0x99f2,	// (0x000286cc) phob2_cc_button_pane

0x99fa,	// (0x000286d4) phob2_cc_data_pane_g1_ParamLimits

0x99fa,	// (0x000286d4) phob2_cc_data_pane_g1

0x9a06,	// (0x000286e0) phob2_cc_data_pane_g2_ParamLimits

0x9a06,	// (0x000286e0) phob2_cc_data_pane_g2

0x0001,

0xff27,	// (0x0002ec01) phob2_cc_data_pane_g_ParamLimits

0xff27,	// (0x0002ec01) phob2_cc_data_pane_g

0x9a12,	// (0x000286ec) phob2_cc_data_pane_t1_ParamLimits

0x9a12,	// (0x000286ec) phob2_cc_data_pane_t1

0x9a24,	// (0x000286fe) phob2_cc_data_pane_t2_ParamLimits

0x9a24,	// (0x000286fe) phob2_cc_data_pane_t2

0x9a36,	// (0x00028710) phob2_cc_data_pane_t3_ParamLimits

0x9a36,	// (0x00028710) phob2_cc_data_pane_t3

0x0002,

0xff2c,	// (0x0002ec06) phob2_cc_data_pane_t_ParamLimits

0xff2c,	// (0x0002ec06) phob2_cc_data_pane_t

0xef70,	// (0x0002dc4a) phob2_cc_list_pane_ParamLimits

0xef70,	// (0x0002dc4a) phob2_cc_list_pane

0xd4fa,	// (0x0002c1d4) scroll_pane_cp035_ParamLimits

0xd4fa,	// (0x0002c1d4) scroll_pane_cp035

0xa5f8,	// (0x000292d2) bg_button_pane_cp033

0xef7c,	// (0x0002dc56) phob2_cc_button_pane_g1

0xef88,	// (0x0002dc62) phob2_cc_button_pane_t1

0xef9d,	// (0x0002dc77) phob2_cc_button_pane_t2

0x0001,

0xff33,	// (0x0002ec0d) phob2_cc_button_pane_t

0x9a48,	// (0x00028722) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a48,	// (0x00028722) list_double_large_graphic_phob2_cc_pane

0x9a64,	// (0x0002873e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a64,	// (0x0002873e) list_double_large_graphic_phob2_cc_pane_g1

0x9a75,	// (0x0002874f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a75,	// (0x0002874f) list_double_large_graphic_phob2_cc_pane_g2

0x9a84,	// (0x0002875e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a84,	// (0x0002875e) list_double_large_graphic_phob2_cc_pane_g3

0x9a93,	// (0x0002876d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a93,	// (0x0002876d) list_double_large_graphic_phob2_cc_pane_g4

0x9aa4,	// (0x0002877e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9aa4,	// (0x0002877e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff38,	// (0x0002ec12) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff38,	// (0x0002ec12) list_double_large_graphic_phob2_cc_pane_g

0x9ab3,	// (0x0002878d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ab3,	// (0x0002878d) list_double_large_graphic_phob2_cc_pane_t1

0x9adc,	// (0x000287b6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9adc,	// (0x000287b6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff43,	// (0x0002ec1d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff43,	// (0x0002ec1d) list_double_large_graphic_phob2_cc_pane_t

0xefaf,	// (0x0002dc89) list_highlight_pane_cp025_ParamLimits

0xefaf,	// (0x0002dc89) list_highlight_pane_cp025

0xa5f8,	// (0x000292d2) bg_button_pane_cp033_ParamLimits

0xef7c,	// (0x0002dc56) phob2_cc_button_pane_g1_ParamLimits

0xef88,	// (0x0002dc62) phob2_cc_button_pane_t1_ParamLimits

0xef9d,	// (0x0002dc77) phob2_cc_button_pane_t2_ParamLimits

0xff33,	// (0x0002ec0d) phob2_cc_button_pane_t_ParamLimits

0x22d2,	// (0x00020fac) popup_wgtman_window

0xd2c8,	// (0x0002bfa2) scroll_pane_cp038

0x94e4,	// (0x000281be) wgtman_btn_pane_cp_01_ParamLimits

0x94e4,	// (0x000281be) wgtman_btn_pane_cp_01

0xefbd,	// (0x0002dc97) wgtman_content_pane

0xefc6,	// (0x0002dca0) wgtman_heading_pane

0x9beb,	// (0x000288c5) bg_heading_pane_cp02

0xefcf,	// (0x0002dca9) wgtman_heading_pane_g1

0xefd7,	// (0x0002dcb1) wgtman_heading_pane_t1

0xefe5,	// (0x0002dcbf) scroll_pane_cp036

0xefed,	// (0x0002dcc7) wgtman_list_pane

0xeff5,	// (0x0002dccf) wgtman_list_pane_t1_ParamLimits

0xeff5,	// (0x0002dccf) wgtman_list_pane_t1

0x1838,	// (0x00020512) cam4_grid_pane

0x730d,	// (0x00025fe7) bg_button_pane_cp015_ParamLimits

0x731f,	// (0x00025ff9) bg_button_pane_cp016_ParamLimits

0x7332,	// (0x0002600c) bg_button_pane_cp017_ParamLimits

0x7388,	// (0x00026062) popup_vitu2_query_window_g3_ParamLimits

0x7388,	// (0x00026062) popup_vitu2_query_window_g3

0x7447,	// (0x00026121) popup_vitu2_query_window_t6_ParamLimits

0x7447,	// (0x00026121) popup_vitu2_query_window_t6

0x7472,	// (0x0002614c) popup_vitu2_query_window_t7_ParamLimits

0x7472,	// (0x0002614c) popup_vitu2_query_window_t7

0xf00f,	// (0x0002dce9) cam4_grid_pane_g1

0xf018,	// (0x0002dcf2) cam4_grid_pane_g2

0xf023,	// (0x0002dcfd) cam4_grid_pane_g3

0xf02c,	// (0x0002dd06) cam4_grid_pane_g4

0x0003,

0xff48,	// (0x0002ec22) cam4_grid_pane_g

0x3131,	// (0x00021e0b) aid_placing_vt_slider_lsc_ParamLimits

0x3464,	// (0x0002213e) vidtel_button_pane_ParamLimits

0x3464,	// (0x0002213e) vidtel_button_pane

0xf037,	// (0x0002dd11) bg_button_pane_cp034

0x9b05,	// (0x000287df) vidtel_button_pane_g1

0xf041,	// (0x0002dd1b) vidtel_button_pane_t1

0xd3cc,	// (0x0002c0a6) aid_size_vtel_slider_touch

0xd4fa,	// (0x0002c1d4) scroll_pane_cp039

0xdd8f,	// (0x0002ca69) ncim_query_button_pane_cp01_ParamLimits

0xddae,	// (0x0002ca88) ncimui_query_pane_g1_ParamLimits

0xa5f8,	// (0x000292d2) input_focus_pane_cp012_ParamLimits

0xddd3,	// (0x0002caad) ncim_query_entry_pane_t1_ParamLimits

0xd4fa,	// (0x0002c1d4) scroll_pane_cp039_ParamLimits

0x46b9,	// (0x00023393) navi_pane_bcale_mc_g1

0x46c1,	// (0x0002339b) navi_pane_bcale_mc_t1

0xe37f,	// (0x0002d059) main_sp_fs_email_pane_g1

0xe38b,	// (0x0002d065) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0002e9b8) main_sp_fs_email_pane_g

0xe8d7,	// (0x0002d5b1) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8d7,	// (0x0002d5b1) list_single_cale_mrui_row_pane_g3

0x9151,	// (0x00027e2b) list_single_recal_day_pane_g5_event_pane

0xeab5,	// (0x0002d78f) list_single_recal_day_pane_g7

0xf04f,	// (0x0002dd29) list_recal_day_event_pane_cp01

0xf058,	// (0x0002dd32) list_recal_vselct_arw_lo_pane_cp01

0xf060,	// (0x0002dd3a) list_recal_vselct_arw_up_pane_cp01

0xf068,	// (0x0002dd42) list_recal_vselct_pane_cp01

0xd408,	// (0x0002c0e2) list_recal_day_event_pane_cp01_g1

0xf072,	// (0x0002dd4c) list_recal_day_event_pane_cp01_t1

0xeabd,	// (0x0002d797) list_single_recal_day_pane_t1_ParamLimits

0xeacf,	// (0x0002d7a9) list_single_recal_day_pane_t2_ParamLimits

0xfe36,	// (0x0002eb10) list_single_recal_day_pane_t_ParamLimits

0xa2ba,	// (0x00028f94) bg_notes_pane_ParamLimits

0xa35d,	// (0x00029037) list_notes_pane_ParamLimits

0x25a1,	// (0x0002127b) scroll_pane_cp06_ParamLimits

0xa37f,	// (0x00029059) main_notes_pane_ParamLimits

0x9beb,	// (0x000288c5) main_welc_pane

0x9b0d,	// (0x000287e7) main_welc_body_pane_ParamLimits

0x9b0d,	// (0x000287e7) main_welc_body_pane

0x9b28,	// (0x00028802) main_welc_opti_pane_ParamLimits

0x9b28,	// (0x00028802) main_welc_opti_pane

0x9b5d,	// (0x00028837) main_welc_pane_t1_ParamLimits

0x9b5d,	// (0x00028837) main_welc_pane_t1

0x9b7b,	// (0x00028855) main_welc_body_row_pane_ParamLimits

0x9b7b,	// (0x00028855) main_welc_body_row_pane

0x9b95,	// (0x0002886f) main_welc_opti_row_pane_ParamLimits

0x9b95,	// (0x0002886f) main_welc_opti_row_pane

0xf080,	// (0x0002dd5a) main_welc_opti_row_pane_g1

0xf088,	// (0x0002dd62) main_welc_opti_row_pane_t1

0xf097,	// (0x0002dd71) main_welc_body_row_pane_t1

0xed3d,	// (0x0002da17) popup_notif_wgt_heading_pane

0xed57,	// (0x0002da31) aid_size_list_notif_wgt_del_ParamLimits

0xed64,	// (0x0002da3e) list_notif_wgt_row_pane_g1_ParamLimits

0xed70,	// (0x0002da4a) list_notif_wgt_row_pane_g2_ParamLimits

0xed84,	// (0x0002da5e) list_notif_wgt_row_pane_g3_ParamLimits

0xfe9d,	// (0x0002eb77) list_notif_wgt_row_pane_g_ParamLimits

0xed91,	// (0x0002da6b) list_notif_wgt_row_pane_t1_ParamLimits

0xeda7,	// (0x0002da81) list_notif_wgt_row_pane_t2_ParamLimits

0xedb9,	// (0x0002da93) list_notif_wgt_row_pane_t3_ParamLimits

0xfea4,	// (0x0002eb7e) list_notif_wgt_row_pane_t_ParamLimits

0x956f,	// (0x00028249) listrow_wgtman_pane_g1_ParamLimits

0x957c,	// (0x00028256) listrow_wgtman_pane_g2_ParamLimits

0xfecd,	// (0x0002eba7) listrow_wgtman_pane_g_ParamLimits

0x959a,	// (0x00028274) listrow_wgtman_pane_t1_ParamLimits

0x95b2,	// (0x0002828c) listrow_wgtman_pane_t2_ParamLimits

0xfed2,	// (0x0002ebac) listrow_wgtman_pane_t_ParamLimits

0x95d8,	// (0x000282b2) wait_bar_pane_cp09_ParamLimits

0x9beb,	// (0x000288c5) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0002dd80) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0002dd88) popup_notif_wgt_heading_pane_t1

0x9beb,	// (0x000288c5) main_vids_pane

0x9beb,	// (0x000288c5) vids_listscroll_pane

0x9ba6,	// (0x00028880) scroll_pane_cp040

0x9beb,	// (0x000288c5) vids_list_pane

0x9bb1,	// (0x0002888b) vids_list_double_pane_ParamLimits

0x9bb1,	// (0x0002888b) vids_list_double_pane

0x9bc4,	// (0x0002889e) vids_list_double_pane_g1

0x9bcd,	// (0x000288a7) vids_list_double_pane_t1

0x9bdd,	// (0x000288b7) vids_list_double_pane_t2

0x0001,

0xff56,	// (0x0002ec30) vids_list_double_pane_t

0xa5f8,	// (0x000292d2) main_ncimui_pane_ParamLimits

0x7fc0,	// (0x00026c9a) main_ncimui_pane_g1_ParamLimits

0x7fce,	// (0x00026ca8) main_ncimui_pane_g2_ParamLimits

0x7fce,	// (0x00026ca8) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0002e8bd) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0002e8bd) main_ncimui_pane_g

0x9b43,	// (0x0002881d) main_welc_pane_g1_ParamLimits

0x9b43,	// (0x0002881d) main_welc_pane_g1

0x9b4f,	// (0x00028829) main_welc_pane_g2_ParamLimits

0x9b4f,	// (0x00028829) main_welc_pane_g2

0x0001,

0xff51,	// (0x0002ec2b) main_welc_pane_g_ParamLimits

0xff51,	// (0x0002ec2b) main_welc_pane_g

0xa2ba,	// (0x00028f94) listscroll_mce_pane_ParamLimits

0x4783,	// (0x0002345d) wait_bar_pane_cp10

0xc2da,	// (0x0002afb4) main_cale_day_pane_ParamLimits

0xc2da,	// (0x0002afb4) main_cale_week_pane_ParamLimits

0xa2ba,	// (0x00028f94) main_messa_pane_ParamLimits

0x6491,	// (0x0002516b) main_clock2_btn_pane_ParamLimits

0x6491,	// (0x0002516b) main_clock2_btn_pane

0xcafb,	// (0x0002b7d5) main_clock2_btn_pane_cp01_ParamLimits

0xcafb,	// (0x0002b7d5) main_clock2_btn_pane_cp01

0xe85a,	// (0x0002d534) list_cale_mrui_pane_ParamLimits

0xedfd,	// (0x0002dad7) main_cf0_pane_g2

0x0001,

0xfeab,	// (0x0002eb85) main_cf0_pane_g

0x9767,	// (0x00028441) area_left_week_number_pane_ParamLimits

0x977a,	// (0x00028454) area_top_day_name_pane_ParamLimits

0x9788,	// (0x00028462) frame_month_view_pane_ParamLimits

0xef25,	// (0x0002dbff) grid_month_view_pane_ParamLimits

0xef33,	// (0x0002dc0d) frm_month_g1_ParamLimits

0x9806,	// (0x000284e0) frm_month_g2_ParamLimits

0x9817,	// (0x000284f1) frm_month_g3_ParamLimits

0x9828,	// (0x00028502) frm_month_g4_ParamLimits

0x9839,	// (0x00028513) frm_month_g5_ParamLimits

0x984a,	// (0x00028524) frm_month_g6_ParamLimits

0x985d,	// (0x00028537) frm_month_g7_ParamLimits

0xef40,	// (0x0002dc1a) frm_month_g8_ParamLimits

0x9870,	// (0x0002854a) frm_month_g9_ParamLimits

0x987d,	// (0x00028557) frm_month_g10_ParamLimits

0x988a,	// (0x00028564) frm_month_g11_ParamLimits

0x9897,	// (0x00028571) frm_month_g12_ParamLimits

0x98a4,	// (0x0002857e) frm_month_g13_ParamLimits

0x98b3,	// (0x0002858d) frm_month_g14_ParamLimits

0x98c2,	// (0x0002859c) frm_month_g15_ParamLimits

0x98d1,	// (0x000285ab) frm_month_g16_ParamLimits

0xfefc,	// (0x0002ebd6) frm_month_g_ParamLimits

0xef4d,	// (0x0002dc27) cell_top_day_name_pane_t1_ParamLimits

0x98e0,	// (0x000285ba) cell_area_left_week_number_pane_g1_ParamLimits

0x98ef,	// (0x000285c9) cell_area_left_week_number_pane_t1_ParamLimits

0xc967,	// (0x0002b641) cell_month_view_pane_g1_ParamLimits

0x9905,	// (0x000285df) cell_month_view_pane_t1_ParamLimits

0xa2b2,	// (0x00028f8c) main_clock2_btn_pane_g1

0xf0bc,	// (0x0002dd96) main_clock2_btn_pane_t1

0xa5f8,	// (0x000292d2) listscroll_cmail_pane_ParamLimits

0xe37f,	// (0x0002d059) main_sp_fs_email_pane_g1_ParamLimits

0xe38b,	// (0x0002d065) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0002e9b8) main_sp_fs_email_pane_g_ParamLimits

0xea24,	// (0x0002d6fe) list_recal_day_pane_ParamLimits

0xea35,	// (0x0002d70f) mian_recal_day_pane_t1

0x899b,	// (0x00027675) list_single_dyc_row_text_pane_t4_ParamLimits

0x899b,	// (0x00027675) list_single_dyc_row_text_pane_t4

0x89d8,	// (0x000276b2) list_single_dyc_row_text_pane_t5_ParamLimits

0x89d8,	// (0x000276b2) list_single_dyc_row_text_pane_t5

0xe463,	// (0x0002d13d) list_single_dyc_row_text_pane_t6_ParamLimits

0xe463,	// (0x0002d13d) list_single_dyc_row_text_pane_t6

0xa933,	// (0x0002960d) aid_mgn_list_cale_time_pane

0xa5f8,	// (0x000292d2) main_gallery2_pane_ParamLimits

0xcb0f,	// (0x0002b7e9) main_clock2_pane_cp01_t1

0xcb1f,	// (0x0002b7f9) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0002e49e) main_clock2_pane_cp01_t

0x297c,	// (0x00021656) cale_week_scroll_pane_g16_ParamLimits

0x297c,	// (0x00021656) cale_week_scroll_pane_g16

0xa535,	// (0x0002920f) vorec_slider_pane
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal

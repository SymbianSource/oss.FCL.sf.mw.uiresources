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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001e3cd };

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
0x2561,	// (0x0002092e) Screen

0x256d,	// (0x0002093a) application_window

0x2579,	// (0x00020946) area_bottom_pane_ParamLimits

0x2579,	// (0x00020946) area_bottom_pane

0x0d3a,	// (0x0001f107) area_top_pane_ParamLimits

0x0d3a,	// (0x0001f107) area_top_pane

0x0d9e,	// (0x0001f16b) call_video_uplink_pane_ParamLimits

0x0d9e,	// (0x0001f16b) call_video_uplink_pane

0x0ddd,	// (0x0001f1aa) main_pane_ParamLimits

0x0ddd,	// (0x0001f1aa) main_pane

0xc33f,	// (0x0002a70c) context_pane

0x550f,	// (0x000238dc) navi_pane

0x5535,	// (0x00023902) popup_cale_events_window_ParamLimits

0x5535,	// (0x00023902) popup_cale_events_window

0xc352,	// (0x0002a71f) popup_mup_playback_window

0x554d,	// (0x0002391a) signal_pane

0xa294,	// (0x00028661) main_browser_pane

0xa4a5,	// (0x00028872) main_burst_pane

0x13b5,	// (0x0001f782) main_calc_pane

0xc325,	// (0x0002a6f2) main_cale_day_pane

0x2980,	// (0x00020d4d) main_cale_month_pane

0xc325,	// (0x0002a6f2) main_cale_week_pane

0xa4a5,	// (0x00028872) main_call_pane

0x9f68,	// (0x00028335) main_call_poc_pane

0xa4a5,	// (0x00028872) main_camera_pane

0xa4a5,	// (0x00028872) main_chi_dic_pane

0xac96,	// (0x00029063) main_clock_pane

0x9f68,	// (0x00028335) main_fmradio_pane

0xa4a5,	// (0x00028872) main_graph_messa_pane

0x9f68,	// (0x00028335) main_help_pane

0xa294,	// (0x00028661) main_im_pane

0xa1c3,	// (0x00028590) main_image_pane_ParamLimits

0xa1c3,	// (0x00028590) main_image_pane

0x9f68,	// (0x00028335) main_location2_pane

0xa4a5,	// (0x00028872) main_location_pane

0xa1c3,	// (0x00028590) main_messa_pane

0x9f68,	// (0x00028335) main_mp2_pane

0xa4a5,	// (0x00028872) main_mp_pane

0x9f68,	// (0x00028335) main_msg_pane

0x9f68,	// (0x00028335) main_mup_eq_pane

0x9f68,	// (0x00028335) main_mup_pane

0xa294,	// (0x00028661) main_notes_pane

0x9f68,	// (0x00028335) main_pec_pane

0x9f68,	// (0x00028335) main_phob_pane

0x9f68,	// (0x00028335) main_pinb_pane

0x9f68,	// (0x00028335) main_postcard_pane

0x9f68,	// (0x00028335) main_qdial_pane

0xa4a5,	// (0x00028872) main_skin_pane

0x9f68,	// (0x00028335) main_smil2_pane

0xa4a5,	// (0x00028872) main_smil_pane

0xa4a5,	// (0x00028872) main_video_pane

0xa4a5,	// (0x00028872) main_video_tele_pane

0xa1c3,	// (0x00028590) main_viewer_pane_ParamLimits

0xa1c3,	// (0x00028590) main_viewer_pane

0xa4a5,	// (0x00028872) main_vorec_pane

0x1401,	// (0x0001f7ce) popup_blid_sat_info_window_ParamLimits

0x1401,	// (0x0001f7ce) popup_blid_sat_info_window

0x1421,	// (0x0001f7ee) popup_dyc_status_message_window_ParamLimits

0x1421,	// (0x0001f7ee) popup_dyc_status_message_window

0x142f,	// (0x0001f7fc) popup_grid_large_graphic_window_ParamLimits

0x142f,	// (0x0001f7fc) popup_grid_large_graphic_window

0x14be,	// (0x0001f88b) popup_loc_request_window_ParamLimits

0x14be,	// (0x0001f88b) popup_loc_request_window

0x150b,	// (0x0001f8d8) popup_wml_address_window_ParamLimits

0x150b,	// (0x0001f8d8) popup_wml_address_window

0x53f1,	// (0x000237be) call_muted_g1

0x50ad,	// (0x0002347a) popup_call_audio_conf_window_ParamLimits

0x50ad,	// (0x0002347a) popup_call_audio_conf_window

0x5401,	// (0x000237ce) popup_call_audio_first_window_ParamLimits

0x5401,	// (0x000237ce) popup_call_audio_first_window

0x5441,	// (0x0002380e) popup_call_audio_in_window_ParamLimits

0x5441,	// (0x0002380e) popup_call_audio_in_window

0x5465,	// (0x00023832) popup_call_audio_out_window_ParamLimits

0x5465,	// (0x00023832) popup_call_audio_out_window

0x5487,	// (0x00023854) popup_call_audio_second_window_ParamLimits

0x5487,	// (0x00023854) popup_call_audio_second_window

0x54b7,	// (0x00023884) popup_call_audio_wait_window_ParamLimits

0x54b7,	// (0x00023884) popup_call_audio_wait_window

0x54d8,	// (0x000238a5) popup_number_entry_window_ParamLimits

0x54d8,	// (0x000238a5) popup_number_entry_window

0x9b55,	// (0x00027f22) bg_popup_call_pane_cp05_ParamLimits

0x9b55,	// (0x00027f22) bg_popup_call_pane_cp05

0x9b75,	// (0x00027f42) popup_number_entry_window_t1

0x9b88,	// (0x00027f55) popup_number_entry_window_t2

0x9b9a,	// (0x00027f67) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0002d497) popup_number_entry_window_t

0x9bac,	// (0x00027f79) text_title_cp2

0x9bbf,	// (0x00027f8c) bg_popup_call_pane_cp_ParamLimits

0x9bbf,	// (0x00027f8c) bg_popup_call_pane_cp

0x9bcd,	// (0x00027f9a) call_thumbnail_pane

0x9bd5,	// (0x00027fa2) popup_call_audio_in_window_g1_ParamLimits

0x9bd5,	// (0x00027fa2) popup_call_audio_in_window_g1

0x9be1,	// (0x00027fae) popup_call_audio_in_window_g2_ParamLimits

0x9be1,	// (0x00027fae) popup_call_audio_in_window_g2

0x9bed,	// (0x00027fba) popup_call_audio_in_window_g3_ParamLimits

0x9bed,	// (0x00027fba) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0002d4a0) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0002d4a0) popup_call_audio_in_window_g

0x9bf9,	// (0x00027fc6) popup_call_audio_in_window_t1_ParamLimits

0x9bf9,	// (0x00027fc6) popup_call_audio_in_window_t1

0x9c15,	// (0x00027fe2) popup_call_audio_in_window_t2_ParamLimits

0x9c15,	// (0x00027fe2) popup_call_audio_in_window_t2

0x9c31,	// (0x00027ffe) popup_call_audio_in_window_t3_ParamLimits

0x9c31,	// (0x00027ffe) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0002d4a7) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0002d4a7) popup_call_audio_in_window_t

0x9bbf,	// (0x00027f8c) bg_popup_call_pane_cp01_ParamLimits

0x9bbf,	// (0x00027f8c) bg_popup_call_pane_cp01

0x9bcd,	// (0x00027f9a) call_thumbnail_pane_cp02

0x9c44,	// (0x00028011) call_type_pane_cp022

0x9c4c,	// (0x00028019) popup_call_audio_out_window_g1_ParamLimits

0x9c4c,	// (0x00028019) popup_call_audio_out_window_g1

0x9c5e,	// (0x0002802b) popup_call_audio_out_window_g2_ParamLimits

0x9c5e,	// (0x0002802b) popup_call_audio_out_window_g2

0x9c6a,	// (0x00028037) popup_call_audio_out_window_g3_ParamLimits

0x9c6a,	// (0x00028037) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0002d4ae) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0002d4ae) popup_call_audio_out_window_g

0x9c7c,	// (0x00028049) popup_call_audio_out_window_t1_ParamLimits

0x9c7c,	// (0x00028049) popup_call_audio_out_window_t1

0x9c94,	// (0x00028061) popup_call_audio_out_window_t2_ParamLimits

0x9c94,	// (0x00028061) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0002d4b5) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0002d4b5) popup_call_audio_out_window_t

0x9ca9,	// (0x00028076) bg_popup_call_pane_ParamLimits

0x9ca9,	// (0x00028076) bg_popup_call_pane

0x25f6,	// (0x000209c3) call_thumbnail_pane_cp_ParamLimits

0x25f6,	// (0x000209c3) call_thumbnail_pane_cp

0x9d2d,	// (0x000280fa) call_type_pane_cp01_ParamLimits

0x9d2d,	// (0x000280fa) call_type_pane_cp01

0x9d71,	// (0x0002813e) popup_call_audio_first_window_g1_ParamLimits

0x9d71,	// (0x0002813e) popup_call_audio_first_window_g1

0x9dbd,	// (0x0002818a) popup_call_audio_first_window_g2_ParamLimits

0x9dbd,	// (0x0002818a) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0002d4ba) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0002d4ba) popup_call_audio_first_window_g

0x9e01,	// (0x000281ce) popup_call_audio_first_window_t1_ParamLimits

0x9e01,	// (0x000281ce) popup_call_audio_first_window_t1

0x9ead,	// (0x0002827a) popup_call_audio_first_window_t4_ParamLimits

0x9ead,	// (0x0002827a) popup_call_audio_first_window_t4

0x9f39,	// (0x00028306) popup_call_audio_first_window_t5_ParamLimits

0x9f39,	// (0x00028306) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0002d4bf) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0002d4bf) popup_call_audio_first_window_t

0x9f68,	// (0x00028335) bg_popup_call_pane_cp02

0x9f72,	// (0x0002833f) call_type_pane_cp023

0x9f7a,	// (0x00028347) popup_call_audio_wait_window_g1

0x9f82,	// (0x0002834f) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002d4c6) popup_call_audio_wait_window_g

0x9f8a,	// (0x00028357) popup_call_audio_wait_window_t3

0x9f98,	// (0x00028365) bg_popup_call_pane_cp03_ParamLimits

0x9f98,	// (0x00028365) bg_popup_call_pane_cp03

0x9ff8,	// (0x000283c5) call_thumbnail_pane_cp011_ParamLimits

0x9ff8,	// (0x000283c5) call_thumbnail_pane_cp011

0xa004,	// (0x000283d1) call_type_pane_cp034_ParamLimits

0xa004,	// (0x000283d1) call_type_pane_cp034

0xa040,	// (0x0002840d) popup_call_audio_second_window_g1_ParamLimits

0xa040,	// (0x0002840d) popup_call_audio_second_window_g1

0xa07c,	// (0x00028449) popup_call_audio_second_window_g2_ParamLimits

0xa07c,	// (0x00028449) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0002d4cb) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0002d4cb) popup_call_audio_second_window_g

0xa0b8,	// (0x00028485) popup_call_audio_second_window_t1_ParamLimits

0xa0b8,	// (0x00028485) popup_call_audio_second_window_t1

0xa139,	// (0x00028506) popup_call_audio_second_window_t2_ParamLimits

0xa139,	// (0x00028506) popup_call_audio_second_window_t2

0xa16f,	// (0x0002853c) popup_call_audio_second_window_t3_ParamLimits

0xa16f,	// (0x0002853c) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0002d4d0) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0002d4d0) popup_call_audio_second_window_t

0x9f68,	// (0x00028335) bg_popup_call_pane_cp04

0xa1a5,	// (0x00028572) list_conf_pane

0xa1ad,	// (0x0002857a) popup_call_audio_conf_window_t1

0xa1bb,	// (0x00028588) call_thumbnail_pane_g1

0xa1c3,	// (0x00028590) bg_pinb_pane_ParamLimits

0xa1c3,	// (0x00028590) bg_pinb_pane

0xa1d1,	// (0x0002859e) find_pinb_pane

0xa1da,	// (0x000285a7) listscroll_pinb_pane_ParamLimits

0xa1da,	// (0x000285a7) listscroll_pinb_pane

0xa1e9,	// (0x000285b6) pinb_bg_pane_g1

0x261a,	// (0x000209e7) pinb_bg_pane_g2

0x2626,	// (0x000209f3) pinb_bg_pane_g3

0x2632,	// (0x000209ff) pinb_bg_pane_g4

0x263e,	// (0x00020a0b) pinb_bg_pane_g5

0x264a,	// (0x00020a17) pinb_bg_pane_g6

0x2655,	// (0x00020a22) pinb_bg_pane_g7

0x2660,	// (0x00020a2d) pinb_bg_pane_g8

0x266b,	// (0x00020a38) pinb_bg_pane_g9

0x2675,	// (0x00020a42) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0002d4d7) pinb_bg_pane_g

0x2692,	// (0x00020a5f) grid_pinb_pane

0x269d,	// (0x00020a6a) list_pinb_pane

0x26a8,	// (0x00020a75) scroll_pane_cp01_ParamLimits

0x26a8,	// (0x00020a75) scroll_pane_cp01

0xa1f3,	// (0x000285c0) find_pinb_pane_g1_ParamLimits

0xa1f3,	// (0x000285c0) find_pinb_pane_g1

0xa20b,	// (0x000285d8) find_pinb_pane_t1

0xa21d,	// (0x000285ea) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0002d4f1) find_pinb_pane_t

0xa232,	// (0x000285ff) input_focus_pane_cp01_ParamLimits

0xa232,	// (0x000285ff) input_focus_pane_cp01

0x26ba,	// (0x00020a87) cell_pinb_pane_ParamLimits

0x26ba,	// (0x00020a87) cell_pinb_pane

0x26e5,	// (0x00020ab2) cell_pinb_pane_g1_ParamLimits

0x26e5,	// (0x00020ab2) cell_pinb_pane_g1

0xa23e,	// (0x0002860b) cell_pinb_pane_g2_ParamLimits

0xa23e,	// (0x0002860b) cell_pinb_pane_g2

0xa24a,	// (0x00028617) cell_pinb_pane_g3_ParamLimits

0xa24a,	// (0x00028617) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0002d4f6) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0002d4f6) cell_pinb_pane_g

0x9f68,	// (0x00028335) grid_highlight_pane_cp01

0x26fa,	// (0x00020ac7) list_pinb_item_pane_ParamLimits

0x26fa,	// (0x00020ac7) list_pinb_item_pane

0x9f68,	// (0x00028335) list_highlight_pane_cp02

0x2723,	// (0x00020af0) list_pinb_item_pane_g1_ParamLimits

0x2723,	// (0x00020af0) list_pinb_item_pane_g1

0x2730,	// (0x00020afd) list_pinb_item_pane_g2_ParamLimits

0x2730,	// (0x00020afd) list_pinb_item_pane_g2

0x273c,	// (0x00020b09) list_pinb_item_pane_g3_ParamLimits

0x273c,	// (0x00020b09) list_pinb_item_pane_g3

0x274d,	// (0x00020b1a) list_pinb_item_pane_g4_ParamLimits

0x274d,	// (0x00020b1a) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0002d4fd) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0002d4fd) list_pinb_item_pane_g

0x2759,	// (0x00020b26) list_pinb_item_pane_t1_ParamLimits

0x2759,	// (0x00020b26) list_pinb_item_pane_t1

0x0fcb,	// (0x0001f398) calc_display_pane

0x0fe9,	// (0x0001f3b6) calc_paper_pane

0x1005,	// (0x0001f3d2) grid_calc_pane

0x9f68,	// (0x00028335) bg_list_pane_cp01

0x2770,	// (0x00020b3d) clock_g1

0x2778,	// (0x00020b45) clock_g2

0x0001,

0xf139,	// (0x0002d506) clock_g

0x2782,	// (0x00020b4f) clock_t1_ParamLimits

0x2782,	// (0x00020b4f) clock_t1

0x2797,	// (0x00020b64) clock_t2_ParamLimits

0x2797,	// (0x00020b64) clock_t2

0x27a9,	// (0x00020b76) clock_t3_ParamLimits

0x27a9,	// (0x00020b76) clock_t3

0x27bb,	// (0x00020b88) clock_t4_ParamLimits

0x27bb,	// (0x00020b88) clock_t4

0x27cd,	// (0x00020b9a) clock_t5_ParamLimits

0x27cd,	// (0x00020b9a) clock_t5

0x27e2,	// (0x00020baf) clock_t6_ParamLimits

0x27e2,	// (0x00020baf) clock_t6

0x27f4,	// (0x00020bc1) clock_t7_ParamLimits

0x27f4,	// (0x00020bc1) clock_t7

0x2806,	// (0x00020bd3) clock_t8_ParamLimits

0x2806,	// (0x00020bd3) clock_t8

0x281c,	// (0x00020be9) clock_t9_ParamLimits

0x281c,	// (0x00020be9) clock_t9

0x0008,

0xf13e,	// (0x0002d50b) clock_t_ParamLimits

0xf13e,	// (0x0002d50b) clock_t

0xa256,	// (0x00028623) popup_clock_analogue_window_cp02

0xa256,	// (0x00028623) popup_clock_digital_window_cp01

0xa25e,	// (0x0002862b) listscroll_help_pane

0x9f68,	// (0x00028335) phob_pre_status_pane

0xa268,	// (0x00028635) grid_qdial_pane

0xa1c3,	// (0x00028590) listscroll_mce_pane

0xa1c3,	// (0x00028590) bg_notes_pane

0xa272,	// (0x0002863f) list_notes_pane

0x2832,	// (0x00020bff) scroll_pane_cp06

0xa280,	// (0x0002864d) bg_calc_paper_pane

0x1031,	// (0x0001f3fe) list_calc_pane

0xa294,	// (0x00028661) bg_calc_display_pane

0x104b,	// (0x0001f418) calc_display_pane_t1

0x1060,	// (0x0001f42d) calc_display_pane_t2

0x1075,	// (0x0001f442) calc_display_pane_t3

0x0002,

0xf151,	// (0x0002d51e) calc_display_pane_t

0x1087,	// (0x0001f454) cell_calc_pane_ParamLimits

0x1087,	// (0x0001f454) cell_calc_pane

0xa2a0,	// (0x0002866d) bg_calc_paper_pane_g1

0xa2ac,	// (0x00028679) bg_calc_paper_pane_g2

0xa2b8,	// (0x00028685) bg_calc_paper_pane_g3

0xa2c4,	// (0x00028691) bg_calc_paper_pane_g4

0xa2d0,	// (0x0002869d) bg_calc_paper_pane_g5

0x2841,	// (0x00020c0e) bg_calc_paper_pane_g6

0x2852,	// (0x00020c1f) bg_calc_paper_pane_g7

0x2863,	// (0x00020c30) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0002d525) bg_calc_paper_pane_g

0x2874,	// (0x00020c41) calc_bg_paper_pane_g9

0x2885,	// (0x00020c52) list_calc_item_pane_ParamLimits

0x2885,	// (0x00020c52) list_calc_item_pane

0xa2dc,	// (0x000286a9) list_calc_item_pane_g1

0x10b4,	// (0x0001f481) list_calc_item_pane_t1_ParamLimits

0x10b4,	// (0x0001f481) list_calc_item_pane_t1

0x10c6,	// (0x0001f493) list_calc_item_pane_t2_ParamLimits

0x10c6,	// (0x0001f493) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0002d536) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0002d536) list_calc_item_pane_t

0xa2e9,	// (0x000286b6) cell_calc_pane_g1

0xa2f3,	// (0x000286c0) grid_highlight_pane_cp02

0xa315,	// (0x000286e2) bg_calc_display_pane_g1

0x10f6,	// (0x0001f4c3) bg_calc_display_pane_g2

0xa31e,	// (0x000286eb) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0002d540) bg_calc_display_pane_g

0x1100,	// (0x0001f4cd) cell_qdial_pane_ParamLimits

0x1100,	// (0x0001f4cd) cell_qdial_pane

0x28b5,	// (0x00020c82) cell_qdial_pane_g1_ParamLimits

0x28b5,	// (0x00020c82) cell_qdial_pane_g1

0x28c2,	// (0x00020c8f) cell_qdial_pane_g2_ParamLimits

0x28c2,	// (0x00020c8f) cell_qdial_pane_g2

0xa327,	// (0x000286f4) cell_qdial_pane_g3_ParamLimits

0xa327,	// (0x000286f4) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0002d547) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0002d547) cell_qdial_pane_g

0x28df,	// (0x00020cac) cell_qdial_pane_t1_ParamLimits

0x28df,	// (0x00020cac) cell_qdial_pane_t1

0x28f7,	// (0x00020cc4) cell_qdial_pane_t2_ParamLimits

0x28f7,	// (0x00020cc4) cell_qdial_pane_t2

0x290a,	// (0x00020cd7) cell_qdial_pane_t3_ParamLimits

0x290a,	// (0x00020cd7) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0002d550) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0002d550) cell_qdial_pane_t

0x9f68,	// (0x00028335) grid_highlight_pane_cp04

0xa333,	// (0x00028700) thumbnail_qdial_pane_ParamLimits

0xa333,	// (0x00028700) thumbnail_qdial_pane

0xa38f,	// (0x0002875c) list_help_pane

0xa398,	// (0x00028765) scroll_pane_cp02

0x291d,	// (0x00020cea) help_list_pane_t1_ParamLimits

0x291d,	// (0x00020cea) help_list_pane_t1

0x1114,	// (0x0001f4e1) bg_notes_pane_g2

0x111c,	// (0x0001f4e9) bg_notes_pane_g3

0x1124,	// (0x0001f4f1) notes_bg_pane_g1

0x112c,	// (0x0001f4f9) notes_bg_pane_g4

0x1134,	// (0x0001f501) notes_bg_pane_g5

0x113c,	// (0x0001f509) notes_bg_pane_g6

0x1144,	// (0x0001f511) notes_bg_pane_g7

0x114c,	// (0x0001f519) notes_bg_pane_g8

0x1154,	// (0x0001f521) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0002d56e) notes_bg_pane_g

0x2954,	// (0x00020d21) list_notes_text_pane_ParamLimits

0x2954,	// (0x00020d21) list_notes_text_pane

0xa3cd,	// (0x0002879a) list_notes_text_pane_g1

0xa3d6,	// (0x000287a3) list_notes_text_pane_t1

0x2980,	// (0x00020d4d) listscroll_cale_week_pane

0x29a5,	// (0x00020d72) bg_cale_heading_pane

0xa3fe,	// (0x000287cb) bg_cale_pane_cp01

0x29c7,	// (0x00020d94) cale_week_corner_pane

0x29e1,	// (0x00020dae) cale_week_day_heading_pane

0x2a03,	// (0x00020dd0) cale_week_scroll_pane_g1

0x2a20,	// (0x00020ded) cale_week_scroll_pane_g2

0x2a33,	// (0x00020e00) cale_week_scroll_pane_g3

0x2a46,	// (0x00020e13) cale_week_scroll_pane_g4

0x2a59,	// (0x00020e26) cale_week_scroll_pane_g5

0x2a6c,	// (0x00020e39) cale_week_scroll_pane_g6

0x2a7f,	// (0x00020e4c) cale_week_scroll_pane_g7

0x2a92,	// (0x00020e5f) cale_week_scroll_pane_g8

0x2aa7,	// (0x00020e74) cale_week_scroll_pane_g9

0x2aba,	// (0x00020e87) cale_week_scroll_pane_g10

0x2acd,	// (0x00020e9a) cale_week_scroll_pane_g11

0x2ae0,	// (0x00020ead) cale_week_scroll_pane_g12

0x2af7,	// (0x00020ec4) cale_week_scroll_pane_g13

0x2b12,	// (0x00020edf) cale_week_scroll_pane_g14

0x2b2d,	// (0x00020efa) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0002d57d) cale_week_scroll_pane_g

0x2b5d,	// (0x00020f2a) cale_week_time_pane

0x2b72,	// (0x00020f3f) grid_cale_week_pane

0xa42d,	// (0x000287fa) scroll_pane_cp08

0x2b93,	// (0x00020f60) cell_cale_week_pane_ParamLimits

0x2b93,	// (0x00020f60) cell_cale_week_pane

0x2bf7,	// (0x00020fc4) cale_week_day_heading_pane_t1

0x2c32,	// (0x00020fff) cale_week_day_heading_pane_t2

0x2c6d,	// (0x0002103a) cale_week_day_heading_pane_t3

0x2ca8,	// (0x00021075) cale_week_day_heading_pane_t4

0x2ce3,	// (0x000210b0) cale_week_day_heading_pane_t5

0x2d1e,	// (0x000210eb) cale_week_day_heading_pane_t6

0x2d59,	// (0x00021126) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0002d59e) cale_week_day_heading_pane_t

0xa44a,	// (0x00028817) bg_cale_side_pane

0x115c,	// (0x0001f529) cale_week_time_pane_t1

0x1176,	// (0x0001f543) cale_week_time_pane_t2

0x1190,	// (0x0001f55d) cale_week_time_pane_t3

0x11aa,	// (0x0001f577) cale_week_time_pane_t4

0x11c4,	// (0x0001f591) cale_week_time_pane_t5

0x11de,	// (0x0001f5ab) cale_week_time_pane_t6

0x11fe,	// (0x0001f5cb) cale_week_time_pane_t7

0x1222,	// (0x0001f5ef) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0002d5ad) cale_week_time_pane_t

0x2d94,	// (0x00021161) cell_cale_week_pane_g2

0x2db8,	// (0x00021185) cell_cale_week_pane_g3_ParamLimits

0x2db8,	// (0x00021185) cell_cale_week_pane_g3

0xa458,	// (0x00028825) grid_highlight_pane_cp07

0xa460,	// (0x0002882d) listscroll_gms_pane

0xa46a,	// (0x00028837) grid_gms_pane

0xa473,	// (0x00028840) listscroll_gms_pane_g1

0xa47b,	// (0x00028848) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0002d5be) listscroll_gms_pane_g

0x2dd0,	// (0x0002119d) scroll_pane_cp010

0x2ddb,	// (0x000211a8) cell_gms_pane_ParamLimits

0x2ddb,	// (0x000211a8) cell_gms_pane

0x2deb,	// (0x000211b8) cell_gms_pane_g1

0xa483,	// (0x00028850) cell_gms_pane_g2

0xa48b,	// (0x00028858) cell_gms_pane_g3

0xa494,	// (0x00028861) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0002d5c3) cell_gms_pane_g

0xa49d,	// (0x0002886a) grid_highlight_pane_cp09

0x5399,	// (0x00023766) phob_pre_status_pane_g1

0x53a1,	// (0x0002376e) phob_pre_status_pane_g2

0x53a9,	// (0x00023776) phob_pre_status_pane_g3

0x53b1,	// (0x0002377e) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0002d9c1) phob_pre_status_pane_g

0x53c1,	// (0x0002378e) phob_pre_status_pane_t1

0x53d1,	// (0x0002379e) phob_pre_status_pane_t2

0x53e1,	// (0x000237ae) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0002d9cc) phob_pre_status_pane_t

0xa4a5,	// (0x00028872) bg_list_pane_cp05

0x2dfb,	// (0x000211c8) grid_vorec_pane

0x2e05,	// (0x000211d2) vorec_t1

0x2e13,	// (0x000211e0) vorec_t2

0x2e21,	// (0x000211ee) vorec_t3

0x2e2f,	// (0x000211fc) vorec_t4

0x253b,	// (0x00020908) vorec_t5

0x2549,	// (0x00020916) vorec_t6

0x0004,

0xf1ff,	// (0x0002d5cc) vorec_t

0x2557,	// (0x00020924) wait_bar_pane_cp01

0x2e4b,	// (0x00021218) cell_vorec_pane_ParamLimits

0x2e4b,	// (0x00021218) cell_vorec_pane

0x1246,	// (0x0001f613) cell_vorec_pane_g1

0x9f68,	// (0x00028335) grid_highlight_pane_cp05

0x2e6e,	// (0x0002123b) cams_zoom_pane

0x2e7a,	// (0x00021247) image_vga_pane

0x2e89,	// (0x00021256) main_camera_pane_g1

0x2e97,	// (0x00021264) main_camera_pane_g2

0x2ea3,	// (0x00021270) main_camera_pane_g3

0x2eaf,	// (0x0002127c) main_camera_pane_g4

0x2ebb,	// (0x00021288) main_camera_pane_g5

0x2ec7,	// (0x00021294) main_camera_pane_g6

0x2ed3,	// (0x000212a0) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002d5d7) main_camera_pane_g

0x2edf,	// (0x000212ac) main_camera_pane_t1

0x2ef1,	// (0x000212be) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002d5e8) main_camera_pane_t

0x2f12,	// (0x000212df) cams_zoom_pane_cp_ParamLimits

0x2f12,	// (0x000212df) cams_zoom_pane_cp

0x2f36,	// (0x00021303) image_cif_pane_ParamLimits

0x2f36,	// (0x00021303) image_cif_pane

0x2f54,	// (0x00021321) image_subqcif_pane

0x2f5c,	// (0x00021329) main_video_pane_g1_ParamLimits

0x2f5c,	// (0x00021329) main_video_pane_g1

0x2f7c,	// (0x00021349) main_video_pane_g2_ParamLimits

0x2f7c,	// (0x00021349) main_video_pane_g2

0x2fac,	// (0x00021379) main_video_pane_g3_ParamLimits

0x2fac,	// (0x00021379) main_video_pane_g3

0x2fd5,	// (0x000213a2) main_video_pane_g4_ParamLimits

0x2fd5,	// (0x000213a2) main_video_pane_g4

0x2ffe,	// (0x000213cb) main_video_pane_g5_ParamLimits

0x2ffe,	// (0x000213cb) main_video_pane_g5

0xa4b9,	// (0x00028886) main_video_pane_g6_ParamLimits

0xa4b9,	// (0x00028886) main_video_pane_g6

0x0006,

0xf220,	// (0x0002d5ed) main_video_pane_g_ParamLimits

0xf220,	// (0x0002d5ed) main_video_pane_g

0x3020,	// (0x000213ed) main_video_pane_t1_ParamLimits

0x3020,	// (0x000213ed) main_video_pane_t1

0xa4d3,	// (0x000288a0) cams_zoom_pane_g1

0xa4dc,	// (0x000288a9) cams_zoom_pane_g2

0xa4e5,	// (0x000288b2) cams_zoom_pane_g3

0xa4ee,	// (0x000288bb) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002d5fc) cams_zoom_pane_g

0x306a,	// (0x00021437) grid_cams_pane

0x3078,	// (0x00021445) linegrid_cams_pane

0x3086,	// (0x00021453) cell_cams_pane_ParamLimits

0x3086,	// (0x00021453) cell_cams_pane

0xa4f7,	// (0x000288c4) cams_burst_image_pane

0xa4ff,	// (0x000288cc) cell_cams_pane_g1

0x9f68,	// (0x00028335) grid_highlight_pane_cp03

0xa2e9,	// (0x000286b6) mp_bg_pane_g1

0x9f68,	// (0x00028335) bg_list_pane_cp03

0xc24a,	// (0x0002a617) bg_mp_pane

0xc252,	// (0x0002a61f) grid_mp_pane

0xc25a,	// (0x0002a627) media_player_g1

0xc262,	// (0x0002a62f) media_player_t1

0xc270,	// (0x0002a63d) media_player_t2

0xc27e,	// (0x0002a64b) media_player_t3

0xc28c,	// (0x0002a659) media_player_t4

0xc29a,	// (0x0002a667) media_player_t5

0xc2a8,	// (0x0002a675) media_player_t6

0xc2b6,	// (0x0002a683) media_player_t7

0x0006,

0xf5de,	// (0x0002d9ab) media_player_t

0xc2c4,	// (0x0002a691) wait_bar_pane_cp02

0xf5c3,	// (0x0002d990) main_usb_pane_t

0x5390,	// (0x0002375d) cell_mp_pane

0xa2e9,	// (0x000286b6) cell_mp_pane_g1

0x9f68,	// (0x00028335) grid_highlight_pane_cp06

0xa507,	// (0x000288d4) grid_skin_colour_pane

0xa50f,	// (0x000288dc) list_highlight_pane_cp03

0x31ae,	// (0x0002157b) skin_g1

0xa517,	// (0x000288e4) skin_t1

0xa526,	// (0x000288f3) skin_t2

0x0001,

0xf264,	// (0x0002d631) skin_t

0x31b8,	// (0x00021585) cell_skin_colour_pane_ParamLimits

0x31b8,	// (0x00021585) cell_skin_colour_pane

0xa534,	// (0x00028901) cell_skin_colour_pane_g1

0x323c,	// (0x00021609) call_video_g1_ParamLimits

0x323c,	// (0x00021609) call_video_g1

0x324c,	// (0x00021619) call_video_g2_ParamLimits

0x324c,	// (0x00021619) call_video_g2

0x0001,

0xf269,	// (0x0002d636) call_video_g_ParamLimits

0xf269,	// (0x0002d636) call_video_g

0x32a6,	// (0x00021673) call_video_uplink_pane_cp1_ParamLimits

0x32a6,	// (0x00021673) call_video_uplink_pane_cp1

0xa546,	// (0x00028913) call_video_uplink_pane_cp2

0x3372,	// (0x0002173f) video_down_crop_pane_ParamLimits

0x3372,	// (0x0002173f) video_down_crop_pane

0x3464,	// (0x00021831) video_down_pane_ParamLimits

0x3464,	// (0x00021831) video_down_pane

0xa54e,	// (0x0002891b) video_down_subqcif_pane_ParamLimits

0xa54e,	// (0x0002891b) video_down_subqcif_pane

0xa566,	// (0x00028933) video_down_subqcif_pane_cp_ParamLimits

0xa566,	// (0x00028933) video_down_subqcif_pane_cp

0xa58c,	// (0x00028959) im_reading_pane_ParamLimits

0xa58c,	// (0x00028959) im_reading_pane

0x3584,	// (0x00021951) im_writing_pane_ParamLimits

0x3584,	// (0x00021951) im_writing_pane

0x35a2,	// (0x0002196f) im_reading_pane_t1

0xa5a6,	// (0x00028973) list_im_pane

0xa5b7,	// (0x00028984) scroll_pane_cp07

0x35fa,	// (0x000219c7) im_writing_pane_t1_ParamLimits

0x35fa,	// (0x000219c7) im_writing_pane_t1

0xa5d0,	// (0x0002899d) im_writing_pane_t2_ParamLimits

0xa5d0,	// (0x0002899d) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002d640) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002d640) im_writing_pane_t

0x9f68,	// (0x00028335) input_focus_pane_cp04

0x9f68,	// (0x00028335) input_focus_pane_cp05

0x360c,	// (0x000219d9) list_im_single_pane_ParamLimits

0x360c,	// (0x000219d9) list_im_single_pane

0x3633,	// (0x00021a00) list_single_im_pane_t1

0x5354,	// (0x00023721) blid_accuracy_pane

0x535c,	// (0x00023729) blid_compass_pane

0x5366,	// (0x00023733) main_location_t1

0x5374,	// (0x00023741) main_location_t2

0x5382,	// (0x0002374f) main_location_t3

0x0002,

0xf5ed,	// (0x0002d9ba) main_location_t

0x9f68,	// (0x00028335) aid_levels_location

0xa2e9,	// (0x000286b6) blid_accuracy_pane_g1

0xa2e9,	// (0x000286b6) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002d6a2) blid_accuracy_pane_g

0xa618,	// (0x000289e5) wml_content_pane

0xa656,	// (0x00028a23) wml_button_pane_ParamLimits

0xa656,	// (0x00028a23) wml_button_pane

0x3642,	// (0x00021a0f) wml_list_single_large_pane_ParamLimits

0x3642,	// (0x00021a0f) wml_list_single_large_pane

0x366d,	// (0x00021a3a) wml_list_single_medium_pane_ParamLimits

0x366d,	// (0x00021a3a) wml_list_single_medium_pane

0x369f,	// (0x00021a6c) wml_list_single_small_pane_ParamLimits

0x369f,	// (0x00021a6c) wml_list_single_small_pane

0xa66a,	// (0x00028a37) wml_selection_box_pane_ParamLimits

0xa66a,	// (0x00028a37) wml_selection_box_pane

0xa67d,	// (0x00028a4a) wml_list_single_pane_t1

0xa68c,	// (0x00028a59) wml_list_single_medium_pane_t1

0xa69b,	// (0x00028a68) wml_list_single_large_pane_t1

0xa6aa,	// (0x00028a77) input_focus_pane_cp02_ParamLimits

0xa6aa,	// (0x00028a77) input_focus_pane_cp02

0xa6bd,	// (0x00028a8a) wml_selection_box_pane_g1

0xa6c6,	// (0x00028a93) wml_selection_box_pane_t1_ParamLimits

0xa6c6,	// (0x00028a93) wml_selection_box_pane_t1

0xa1c3,	// (0x00028590) bg_wml_button_pane_ParamLimits

0xa1c3,	// (0x00028590) bg_wml_button_pane

0xa6de,	// (0x00028aab) wml_button_pane_g1

0xa6e6,	// (0x00028ab3) wml_button_pane_t1

0xa6de,	// (0x00028aab) wml_button_bg_pane_g1

0xa6f6,	// (0x00028ac3) wml_button_bg_pane_g2

0xa6fe,	// (0x00028acb) wml_button_bg_pane_g3

0xa706,	// (0x00028ad3) wml_button_bg_pane_g4

0xa70e,	// (0x00028adb) wml_button_bg_pane_g5

0xa716,	// (0x00028ae3) wml_button_bg_pane_g6

0xa71e,	// (0x00028aeb) wml_button_bg_pane_g7

0xa726,	// (0x00028af3) wml_button_bg_pane_g8

0xa72e,	// (0x00028afb) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002d645) wml_button_bg_pane_g

0x36dc,	// (0x00021aa9) bg_list_pane_cp02

0xa736,	// (0x00028b03) mce_header_pane_ParamLimits

0xa736,	// (0x00028b03) mce_header_pane

0xa74c,	// (0x00028b19) mce_icon_pane

0xa74c,	// (0x00028b19) mce_image_pane

0xa755,	// (0x00028b22) mce_text_pane_ParamLimits

0xa755,	// (0x00028b22) mce_text_pane

0x36e6,	// (0x00021ab3) scroll_pane_cp03

0xa64e,	// (0x00028a1b) scroll_pane_cp04

0xa768,	// (0x00028b35) scroll_pane_cp05_ParamLimits

0xa768,	// (0x00028b35) scroll_pane_cp05

0x36f0,	// (0x00021abd) mce_header_field_pane_ParamLimits

0x36f0,	// (0x00021abd) mce_header_field_pane

0x3710,	// (0x00021add) mce_header_field_pane_2_ParamLimits

0x3710,	// (0x00021add) mce_header_field_pane_2

0x3726,	// (0x00021af3) mce_header_field_pane_3

0x372e,	// (0x00021afb) list_single_mce_message_pane_ParamLimits

0x372e,	// (0x00021afb) list_single_mce_message_pane

0x375c,	// (0x00021b29) list_single_mce_smart_pane_ParamLimits

0x375c,	// (0x00021b29) list_single_mce_smart_pane

0xa774,	// (0x00028b41) input_focus_pane_cp03

0xa77d,	// (0x00028b4a) list_header_data_pane

0x3795,	// (0x00021b62) mce_header_field_pane_t1

0x37a3,	// (0x00021b70) list_single_mce_header_pane_ParamLimits

0x37a3,	// (0x00021b70) list_single_mce_header_pane

0xa785,	// (0x00028b52) list_single_mce_header_pane_t1

0xa794,	// (0x00028b61) list_single_mce_message_pane_g1

0xa79c,	// (0x00028b69) list_single_mce_message_pane_t1

0x37f9,	// (0x00021bc6) bg_cale_heading_pane_cp01_ParamLimits

0x37f9,	// (0x00021bc6) bg_cale_heading_pane_cp01

0xa7aa,	// (0x00028b77) bg_cale_pane_cp02_ParamLimits

0xa7aa,	// (0x00028b77) bg_cale_pane_cp02

0x383c,	// (0x00021c09) cale_month_corner_pane

0x3856,	// (0x00021c23) cale_month_day_heading_pane_ParamLimits

0x3856,	// (0x00021c23) cale_month_day_heading_pane

0x38b1,	// (0x00021c7e) cale_month_pane_g1_ParamLimits

0x38b1,	// (0x00021c7e) cale_month_pane_g1

0x38e9,	// (0x00021cb6) cale_month_pane_g2_ParamLimits

0x38e9,	// (0x00021cb6) cale_month_pane_g2

0x3914,	// (0x00021ce1) cale_month_pane_g3_ParamLimits

0x3914,	// (0x00021ce1) cale_month_pane_g3

0x3964,	// (0x00021d31) cale_month_pane_g4_ParamLimits

0x3964,	// (0x00021d31) cale_month_pane_g4

0x39b4,	// (0x00021d81) cale_month_pane_g5_ParamLimits

0x39b4,	// (0x00021d81) cale_month_pane_g5

0x3a04,	// (0x00021dd1) cale_month_pane_g6_ParamLimits

0x3a04,	// (0x00021dd1) cale_month_pane_g6

0x3a54,	// (0x00021e21) cale_month_pane_g7_ParamLimits

0x3a54,	// (0x00021e21) cale_month_pane_g7

0x3abc,	// (0x00021e89) cale_month_pane_g8_ParamLimits

0x3abc,	// (0x00021e89) cale_month_pane_g8

0x3b24,	// (0x00021ef1) cale_month_pane_g9_ParamLimits

0x3b24,	// (0x00021ef1) cale_month_pane_g9

0x3b82,	// (0x00021f4f) cale_month_pane_g10_ParamLimits

0x3b82,	// (0x00021f4f) cale_month_pane_g10

0x3be0,	// (0x00021fad) cale_month_pane_g11_ParamLimits

0x3be0,	// (0x00021fad) cale_month_pane_g11

0x3c34,	// (0x00022001) cale_month_pane_g12_ParamLimits

0x3c34,	// (0x00022001) cale_month_pane_g12

0x3c8a,	// (0x00022057) cale_month_pane_g13_ParamLimits

0x3c8a,	// (0x00022057) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002d658) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002d658) cale_month_pane_g

0x3ce0,	// (0x000220ad) cale_month_week_pane

0x3cf5,	// (0x000220c2) grid_cale_month_pane_ParamLimits

0x3cf5,	// (0x000220c2) grid_cale_month_pane

0x3d47,	// (0x00022114) cale_month_day_heading_pane_t1

0x3dcd,	// (0x0002219a) cale_month_day_heading_pane_t2

0x3e5e,	// (0x0002222b) cale_month_day_heading_pane_t3

0x3eef,	// (0x000222bc) cale_month_day_heading_pane_t4

0x3f80,	// (0x0002234d) cale_month_day_heading_pane_t5

0x4011,	// (0x000223de) cale_month_day_heading_pane_t6

0x40ae,	// (0x0002247b) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002d673) cale_month_day_heading_pane_t

0xa44a,	// (0x00028817) bg_cale_side_pane_cp01

0x4157,	// (0x00022524) cale_month_week_pane_t1

0x4170,	// (0x0002253d) cale_month_week_pane_t2

0x4189,	// (0x00022556) cale_month_week_pane_t3

0x41a2,	// (0x0002256f) cale_month_week_pane_t4

0x41bd,	// (0x0002258a) cale_month_week_pane_t5

0x41de,	// (0x000225ab) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002d682) cale_month_week_pane_t

0x41ff,	// (0x000225cc) cell_cale_month_pane_ParamLimits

0x41ff,	// (0x000225cc) cell_cale_month_pane

0x1250,	// (0x0001f61d) cell_cale_month_pane_g1

0x1276,	// (0x0001f643) cell_cale_month_pane_t1_ParamLimits

0x1276,	// (0x0001f643) cell_cale_month_pane_t1

0xa458,	// (0x00028825) grid_highlight_pane_cp08

0xa2e9,	// (0x000286b6) main_smil_g1

0x434f,	// (0x0002271c) smil_status_pane

0xa7e9,	// (0x00028bb6) smil_text_pane

0xc12a,	// (0x0002a4f7) bg_popup_call3_rect_pane_g8

0xc132,	// (0x0002a4ff) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d93b) bg_popup_call3_rect_pane_g

0xc3b9,	// (0x0002a786) smil_status_volume_pane_g1

0xa7f3,	// (0x00028bc0) smil_status_pane_t1

0x1540,	// (0x0001f90d) volume_smil_pane

0xa80a,	// (0x00028bd7) list_smil_text_pane

0x4362,	// (0x0002272f) scroll_pane_cp011

0x436d,	// (0x0002273a) smil_text_list_pane_t1_ParamLimits

0x436d,	// (0x0002273a) smil_text_list_pane_t1

0x12a2,	// (0x0001f66f) aid_volume_smil_ParamLimits

0x12a2,	// (0x0001f66f) aid_volume_smil

0xa2e9,	// (0x000286b6) smil_volume_pane_g1

0xa2e9,	// (0x000286b6) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002d6a2) smil_volume_pane_g

0x2980,	// (0x00020d4d) listscroll_cale_day_pane

0xa814,	// (0x00028be1) bg_cale_pane

0xa82c,	// (0x00028bf9) list_cale_pane

0xa84f,	// (0x00028c1c) scroll_pane_cp09

0xa860,	// (0x00028c2d) cale_bg_pane_g1

0xa868,	// (0x00028c35) cale_bg_pane_g2

0xa870,	// (0x00028c3d) cale_bg_pane_g3

0xa878,	// (0x00028c45) cale_bg_pane_g4

0xa880,	// (0x00028c4d) cale_bg_pane_g5

0xa888,	// (0x00028c55) cale_bg_pane_g6

0xa890,	// (0x00028c5d) cale_bg_pane_g7

0xa898,	// (0x00028c65) cale_bg_pane_g8

0xa8a0,	// (0x00028c6d) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002d6a7) cale_bg_pane_g

0x4402,	// (0x000227cf) list_cale_time_pane_ParamLimits

0x4402,	// (0x000227cf) list_cale_time_pane

0xa8a8,	// (0x00028c75) list_cale_time_pane_g1_ParamLimits

0xa8a8,	// (0x00028c75) list_cale_time_pane_g1

0xa8b4,	// (0x00028c81) list_cale_time_pane_g2_ParamLimits

0xa8b4,	// (0x00028c81) list_cale_time_pane_g2

0x442a,	// (0x000227f7) list_cale_time_pane_g3_ParamLimits

0x442a,	// (0x000227f7) list_cale_time_pane_g3

0x4438,	// (0x00022805) list_cale_time_pane_g4_ParamLimits

0x4438,	// (0x00022805) list_cale_time_pane_g4

0x4446,	// (0x00022813) list_cale_time_pane_g5_ParamLimits

0x4446,	// (0x00022813) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002d6ba) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002d6ba) list_cale_time_pane_g

0xa8ce,	// (0x00028c9b) list_cale_time_pane_t1_ParamLimits

0xa8ce,	// (0x00028c9b) list_cale_time_pane_t1

0xa8f6,	// (0x00028cc3) list_cale_time_pane_t2_ParamLimits

0xa8f6,	// (0x00028cc3) list_cale_time_pane_t2

0x479f,	// (0x00022b6c) aid_blid_cardinal_pane

0x47e1,	// (0x00022bae) compass_pane_t4

0xa91e,	// (0x00028ceb) list_cale_time_pane_t4_ParamLimits

0xa91e,	// (0x00028ceb) list_cale_time_pane_t4

0x47ef,	// (0x00022bbc) compass_pane_t5

0x47ff,	// (0x00022bcc) compass_pane_t6

0x480d,	// (0x00022bda) compass_pane_t7

0xadb0,	// (0x0002917d) navi_pane_cc_t1

0xaf8d,	// (0x0002935a) aid_phob_thumbnail_center_pane

0x4e55,	// (0x00023222) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002d6c7) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002d6c7) list_cale_time_pane_t

0x9bbf,	// (0x00027f8c) bg_popup_window_pane_cp02_ParamLimits

0x9bbf,	// (0x00027f8c) bg_popup_window_pane_cp02

0xa946,	// (0x00028d13) heading_pane_cp01_ParamLimits

0xa946,	// (0x00028d13) heading_pane_cp01

0xa952,	// (0x00028d1f) loc_req_pane_ParamLimits

0xa952,	// (0x00028d1f) loc_req_pane

0xa962,	// (0x00028d2f) loc_type_pane_ParamLimits

0xa962,	// (0x00028d2f) loc_type_pane

0xa974,	// (0x00028d41) loc_type_pane_t1_ParamLimits

0xa974,	// (0x00028d41) loc_type_pane_t1

0xa986,	// (0x00028d53) loc_type_pane_t2_ParamLimits

0xa986,	// (0x00028d53) loc_type_pane_t2

0xa998,	// (0x00028d65) loc_type_pane_t3_ParamLimits

0xa998,	// (0x00028d65) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002d6ce) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002d6ce) loc_type_pane_t

0xa9aa,	// (0x00028d77) list_loc_req_pane

0xa9b4,	// (0x00028d81) scroll_pane_cp012

0x4454,	// (0x00022821) list_single_loc_request_popup_menu_pane_ParamLimits

0x4454,	// (0x00022821) list_single_loc_request_popup_menu_pane

0xa9bf,	// (0x00028d8c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa9bf,	// (0x00028d8c) list_single_loc_request_popup_menu_pane_g1

0xa9cb,	// (0x00028d98) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa9cb,	// (0x00028d98) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002d6d5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002d6d5) list_single_loc_request_popup_menu_pane_g

0xa9d7,	// (0x00028da4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa9d7,	// (0x00028da4) list_single_loc_request_popup_menu_pane_t1

0x446c,	// (0x00022839) bg_popup_window_pane_cp03_ParamLimits

0x446c,	// (0x00022839) bg_popup_window_pane_cp03

0x447a,	// (0x00022847) heading_loc_req_pane_ParamLimits

0x447a,	// (0x00022847) heading_loc_req_pane

0x4486,	// (0x00022853) popup_dyc_status_message_window_g1_ParamLimits

0x4486,	// (0x00022853) popup_dyc_status_message_window_g1

0x4492,	// (0x0002285f) popup_dyc_status_message_window_t1_ParamLimits

0x4492,	// (0x0002285f) popup_dyc_status_message_window_t1

0x44a4,	// (0x00022871) popup_dyc_status_message_window_t2_ParamLimits

0x44a4,	// (0x00022871) popup_dyc_status_message_window_t2

0x44b6,	// (0x00022883) popup_dyc_status_message_window_t3_ParamLimits

0x44b6,	// (0x00022883) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002d6da) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002d6da) popup_dyc_status_message_window_t

0x9f68,	// (0x00028335) bg_heading_pane_cp01

0xa9ed,	// (0x00028dba) heading_loc_req_pane_g1

0xa9f5,	// (0x00028dc2) heading_loc_req_pane_g2

0xa9fd,	// (0x00028dca) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002d6e1) heading_loc_req_pane_g

0xaa05,	// (0x00028dd2) heading_loc_req_pane_t1

0xaa14,	// (0x00028de1) bg_popup_sub_pane_cp01_ParamLimits

0xaa14,	// (0x00028de1) bg_popup_sub_pane_cp01

0xaa22,	// (0x00028def) popup_cale_events_window_g1_ParamLimits

0xaa22,	// (0x00028def) popup_cale_events_window_g1

0xaa42,	// (0x00028e0f) popup_cale_events_window_g2_ParamLimits

0xaa42,	// (0x00028e0f) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002d715) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002d715) popup_cale_events_window_g

0xaa62,	// (0x00028e2f) popup_cale_events_window_t1_ParamLimits

0xaa62,	// (0x00028e2f) popup_cale_events_window_t1

0xaa74,	// (0x00028e41) popup_cale_events_window_t2_ParamLimits

0xaa74,	// (0x00028e41) popup_cale_events_window_t2

0xaab2,	// (0x00028e7f) popup_cale_events_window_t3_ParamLimits

0xaab2,	// (0x00028e7f) popup_cale_events_window_t3

0xaaec,	// (0x00028eb9) popup_cale_events_window_t4_ParamLimits

0xaaec,	// (0x00028eb9) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002d71a) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002d71a) popup_cale_events_window_t

0x45b1,	// (0x0002297e) call_type_pane

0xab97,	// (0x00028f64) popup_call_status_window_g1

0x45bd,	// (0x0002298a) popup_call_status_window_g2

0x45c9,	// (0x00022996) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002d723) popup_call_status_window_g

0xab22,	// (0x00028eef) call_type_pane_g1

0xab2b,	// (0x00028ef8) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002d72a) call_type_pane_g

0x9f68,	// (0x00028335) bg_popup_sub_pane_cp02

0xab34,	// (0x00028f01) listscroll_popup_wml_pane

0xab3c,	// (0x00028f09) list_wml_pane

0xab46,	// (0x00028f13) scroll_pane_cp013

0xab51,	// (0x00028f1e) list_single_graphic_popup_wml_pane_ParamLimits

0xab51,	// (0x00028f1e) list_single_graphic_popup_wml_pane

0xa2e9,	// (0x000286b6) list_single_graphic_popup_wml_pane_g1

0xab65,	// (0x00028f32) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002d72f) list_single_graphic_popup_wml_pane_g

0xab6d,	// (0x00028f3a) list_single_graphic_popup_wml_pane_t1

0xab83,	// (0x00028f50) aid_call_pane

0xa1bb,	// (0x00028588) popup_clock_analogue_window_g1

0xa1bb,	// (0x00028588) popup_clock_analogue_window_g2

0x12c4,	// (0x0001f691) popup_clock_analogue_window_g3

0x12c4,	// (0x0001f691) popup_clock_analogue_window_g4

0xa2e9,	// (0x000286b6) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002d734) popup_clock_analogue_window_g

0x12cc,	// (0x0001f699) popup_clock_analogue_window_t1

0x12da,	// (0x0001f6a7) clock_digital_number_pane_ParamLimits

0x12da,	// (0x0001f6a7) clock_digital_number_pane

0x12e6,	// (0x0001f6b3) clock_digital_number_pane_cp02_ParamLimits

0x12e6,	// (0x0001f6b3) clock_digital_number_pane_cp02

0x12f2,	// (0x0001f6bf) clock_digital_number_pane_cp03_ParamLimits

0x12f2,	// (0x0001f6bf) clock_digital_number_pane_cp03

0x12fe,	// (0x0001f6cb) clock_digital_number_pane_cp04_ParamLimits

0x12fe,	// (0x0001f6cb) clock_digital_number_pane_cp04

0x130a,	// (0x0001f6d7) clock_digital_separator_pane_ParamLimits

0x130a,	// (0x0001f6d7) clock_digital_separator_pane

0x1316,	// (0x0001f6e3) popup_clock_digital_window_t1

0xa2e9,	// (0x000286b6) clock_digital_number_pane_g1

0xa2e9,	// (0x000286b6) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002d6a2) clock_digital_number_pane_g

0xa2e9,	// (0x000286b6) clock_digital_separator_pane_g1

0xa2e9,	// (0x000286b6) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002d6a2) clock_digital_separator_pane_g

0x9f68,	// (0x00028335) bg_popup_window_pane_cp04

0xaba5,	// (0x00028f72) heading_pane_cp03

0xabad,	// (0x00028f7a) listscroll_popup_gms_pane

0xabb5,	// (0x00028f82) grid_large_graphic_popup_pane

0xabbf,	// (0x00028f8c) listscroll_popup_gms_pane_g1

0xabc7,	// (0x00028f94) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002d73f) listscroll_popup_gms_pane_g

0xa64e,	// (0x00028a1b) scroll_pane_cp014

0x45d5,	// (0x000229a2) cell_large_graphic_popup_pane_ParamLimits

0x45d5,	// (0x000229a2) cell_large_graphic_popup_pane

0x45ed,	// (0x000229ba) cell_large_graphic_popup_pane_g1_ParamLimits

0x45ed,	// (0x000229ba) cell_large_graphic_popup_pane_g1

0xabcf,	// (0x00028f9c) cell_large_graphic_popup_pane_g2_ParamLimits

0xabcf,	// (0x00028f9c) cell_large_graphic_popup_pane_g2

0xabdb,	// (0x00028fa8) cell_large_graphic_popup_pane_g3_ParamLimits

0xabdb,	// (0x00028fa8) cell_large_graphic_popup_pane_g3

0xabe8,	// (0x00028fb5) cell_large_graphic_popup_pane_g4_ParamLimits

0xabe8,	// (0x00028fb5) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002d744) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002d744) cell_large_graphic_popup_pane_g

0xabf8,	// (0x00028fc5) grid_highlight_pane_cp010

0xa2e9,	// (0x000286b6) bg_popup_call_pane_g1

0xac02,	// (0x00028fcf) list_single_graphic_popup_conf_pane_ParamLimits

0xac02,	// (0x00028fcf) list_single_graphic_popup_conf_pane

0xac15,	// (0x00028fe2) list_highlight_pane_cp01

0xac1e,	// (0x00028feb) list_single_graphic_popup_conf_pane_g1

0xac26,	// (0x00028ff3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002d74d) list_single_graphic_popup_conf_pane_g

0xac2e,	// (0x00028ffb) list_single_graphic_popup_conf_pane_t1

0xac3c,	// (0x00029009) linegrid_cams_pane_g1

0x45f9,	// (0x000229c6) linegrid_cams_pane_g2

0xa48b,	// (0x00028858) linegrid_cams_pane_g3

0xac45,	// (0x00029012) linegrid_cams_pane_g4

0x4602,	// (0x000229cf) linegrid_cams_pane_g5

0x460b,	// (0x000229d8) linegrid_cams_pane_g6

0xa494,	// (0x00028861) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002d752) linegrid_cams_pane_g

0xac4e,	// (0x0002901b) popup_clock_analogue_window

0xac4e,	// (0x0002901b) popup_clock_digital_window

0x9f68,	// (0x00028335) popup_phob_thumbnail_window

0xa2e9,	// (0x000286b6) call_video_uplink_pane_g1

0xac57,	// (0x00029024) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002d761) call_video_uplink_pane_g

0xac5f,	// (0x0002902c) video_uplink_pane

0xac67,	// (0x00029034) mce_image_pane_g1

0x4614,	// (0x000229e1) mce_image_pane_g2

0x461c,	// (0x000229e9) mce_image_pane_g3

0x4624,	// (0x000229f1) mce_image_pane_g4

0x462c,	// (0x000229f9) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002d766) mce_image_pane_g

0xac71,	// (0x0002903e) control_top_pane_stacon_cp01_ParamLimits

0xac71,	// (0x0002903e) control_top_pane_stacon_cp01

0xac85,	// (0x00029052) uni_indicator_pane_stacon_cp01_ParamLimits

0xac85,	// (0x00029052) uni_indicator_pane_stacon_cp01

0xac96,	// (0x00029063) bg_popup_sub_pane_cp03

0x4634,	// (0x00022a01) chi_dic_find_pane

0x463c,	// (0x00022a09) listscroll_chi_dic_pane

0x4645,	// (0x00022a12) main_pane_chidic_g1

0x4658,	// (0x00022a25) chi_dic_find_pane_t1

0xaca0,	// (0x0002906d) find_chidic_pane

0xaca9,	// (0x00029076) chi_dic_list_pane_ParamLimits

0xaca9,	// (0x00029076) chi_dic_list_pane

0xacba,	// (0x00029087) scroll_pane_cp020

0x4666,	// (0x00022a33) find_chidic_pane_t1

0x9f68,	// (0x00028335) input_focus_pane_cp06

0x4675,	// (0x00022a42) list_chi_dic_pane_ParamLimits

0x4675,	// (0x00022a42) list_chi_dic_pane

0x4692,	// (0x00022a5f) list_chi_dic_pane_t1_ParamLimits

0x4692,	// (0x00022a5f) list_chi_dic_pane_t1

0x9f68,	// (0x00028335) list_highlight_pane_cp020

0xacc2,	// (0x0002908f) bg_cale_heading_pane_g1

0x46a5,	// (0x00022a72) bg_cale_heading_pane_g2

0x46ad,	// (0x00022a7a) bg_cale_heading_pane_g3

0x46b5,	// (0x00022a82) bg_cale_heading_pane_g4

0x46bf,	// (0x00022a8c) bg_cale_heading_pane_g5

0x46c9,	// (0x00022a96) bg_cale_heading_pane_g6

0x46d1,	// (0x00022a9e) bg_cale_heading_pane_g7

0x46d9,	// (0x00022aa6) bg_cale_heading_pane_g8

0x46e3,	// (0x00022ab0) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002d771) bg_cale_heading_pane_g

0xacc2,	// (0x0002908f) bg_cale_side_pane_g1

0x46ed,	// (0x00022aba) bg_cale_side_pane_g2

0x46f7,	// (0x00022ac4) bg_cale_side_pane_g3

0x4701,	// (0x00022ace) bg_cale_side_pane_g4

0x470b,	// (0x00022ad8) bg_cale_side_pane_g5

0x4715,	// (0x00022ae2) bg_cale_side_pane_g6

0x471f,	// (0x00022aec) bg_cale_side_pane_g7

0x4729,	// (0x00022af6) bg_cale_side_pane_g8

0x4731,	// (0x00022afe) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002d784) bg_cale_side_pane_g

0x4739,	// (0x00022b06) popup_call_status_window_ParamLimits

0x4739,	// (0x00022b06) popup_call_status_window

0xacca,	// (0x00029097) stacon_top_pane

0xacd2,	// (0x0002909f) status_pane_ParamLimits

0xacd2,	// (0x0002909f) status_pane

0xace7,	// (0x000290b4) status_small_pane

0xacef,	// (0x000290bc) control_pane

0x9f68,	// (0x00028335) stacon_bottom_pane

0xacf7,	// (0x000290c4) list_single_mce_smart_pane_t1_ParamLimits

0xacf7,	// (0x000290c4) list_single_mce_smart_pane_t1

0xad0a,	// (0x000290d7) list_single_mce_smart_pane_t2_ParamLimits

0xad0a,	// (0x000290d7) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002d797) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002d797) list_single_mce_smart_pane_t

0x4745,	// (0x00022b12) compass_pane

0x4751,	// (0x00022b1e) main_location2_pane_t1

0x4765,	// (0x00022b32) main_location2_pane_t2

0x4779,	// (0x00022b46) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002d79c) main_location2_pane_t

0xad29,	// (0x000290f6) compass_pane_g1_ParamLimits

0xad29,	// (0x000290f6) compass_pane_g1

0x47c3,	// (0x00022b90) compass_pane_t1

0x47d2,	// (0x00022b9f) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002d7a5) compass_pane_t

0x481d,	// (0x00022bea) text_secondary_cp61

0xada7,	// (0x00029174) navi_pane_cams_g5

0xae23,	// (0x000291f0) navi_pane_im_t1

0xae31,	// (0x000291fe) navi_pane_mp_g1_ParamLimits

0xae31,	// (0x000291fe) navi_pane_mp_g1

0xae45,	// (0x00029212) navi_pane_mp_g2_ParamLimits

0xae45,	// (0x00029212) navi_pane_mp_g2

0xae51,	// (0x0002921e) navi_pane_mp_g3_ParamLimits

0xae51,	// (0x0002921e) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002d7b9) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002d7b9) navi_pane_mp_g

0xae5d,	// (0x0002922a) navi_pane_mp_t1

0xae6b,	// (0x00029238) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002d7c0) navi_pane_mp_t

0xaed6,	// (0x000292a3) navi_pane_vt_g1

0xae5d,	// (0x0002922a) navi_pane_vt_t1

0xaede,	// (0x000292ab) navi_slider_pane

0xa4a5,	// (0x00028872) zooming_pane

0xaeee,	// (0x000292bb) navi_slider_pane_g1

0x1333,	// (0x0001f700) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002d7c7) navi_slider_pane_g

0xaf12,	// (0x000292df) aid_levels_zoom

0xaf1a,	// (0x000292e7) zooming_pane_g1

0xaf22,	// (0x000292ef) zooming_pane_g2

0xaf22,	// (0x000292ef) zooming_pane_g3

0x0002,

0xf409,	// (0x0002d7d6) zooming_pane_g

0xaf2a,	// (0x000292f7) level_10_zoom

0xaf33,	// (0x00029300) level_11_zoom

0xaf3c,	// (0x00029309) level_1_zoom

0xaf45,	// (0x00029312) level_2_zoom

0xaf4e,	// (0x0002931b) level_3_zoom

0xaf57,	// (0x00029324) level_4_zoom

0xaf60,	// (0x0002932d) level_5_zoom

0xaf69,	// (0x00029336) level_6_zoom

0xaf72,	// (0x0002933f) level_7_zoom

0xaf7b,	// (0x00029348) level_8_zoom

0xaf84,	// (0x00029351) level_9_zoom

0xaf95,	// (0x00029362) popup_phob_thumbnail_window_g1

0xaf9d,	// (0x0002936a) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002d7dd) popup_phob_thumbnail_window_g

0xc2cc,	// (0x0002a699) level_1_location

0xc2d4,	// (0x0002a6a1) level_2_location

0xc2dc,	// (0x0002a6a9) level_3_location

0xc2e4,	// (0x0002a6b1) level_4_location

0xa4a5,	// (0x00028872) level_5_location

0x4858,	// (0x00022c25) mce_icon_pane_g1

0x4860,	// (0x00022c2d) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002d7e2) mce_icon_pane_g

0x4868,	// (0x00022c35) main_mup_pane_g1_ParamLimits

0x4868,	// (0x00022c35) main_mup_pane_g1

0x4880,	// (0x00022c4d) main_mup_pane_g2_ParamLimits

0x4880,	// (0x00022c4d) main_mup_pane_g2

0x4894,	// (0x00022c61) main_mup_pane_g3_ParamLimits

0x4894,	// (0x00022c61) main_mup_pane_g3

0x48a8,	// (0x00022c75) main_mup_pane_g4_ParamLimits

0x48a8,	// (0x00022c75) main_mup_pane_g4

0x48c4,	// (0x00022c91) main_mup_pane_g5_ParamLimits

0x48c4,	// (0x00022c91) main_mup_pane_g5

0x48e5,	// (0x00022cb2) main_mup_pane_g6_ParamLimits

0x48e5,	// (0x00022cb2) main_mup_pane_g6

0x4901,	// (0x00022cce) main_mup_pane_g7_ParamLimits

0x4901,	// (0x00022cce) main_mup_pane_g7

0x491d,	// (0x00022cea) main_mup_pane_g8_ParamLimits

0x491d,	// (0x00022cea) main_mup_pane_g8

0x4939,	// (0x00022d06) main_mup_pane_g9_ParamLimits

0x4939,	// (0x00022d06) main_mup_pane_g9

0x4958,	// (0x00022d25) main_mup_pane_g10_ParamLimits

0x4958,	// (0x00022d25) main_mup_pane_g10

0x4977,	// (0x00022d44) main_mup_pane_g11_ParamLimits

0x4977,	// (0x00022d44) main_mup_pane_g11

0x498f,	// (0x00022d5c) main_mup_pane_g12_ParamLimits

0x498f,	// (0x00022d5c) main_mup_pane_g12

0x499d,	// (0x00022d6a) main_mup_pane_g13_ParamLimits

0x499d,	// (0x00022d6a) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002d7e7) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002d7e7) main_mup_pane_g

0x49b3,	// (0x00022d80) main_mup_pane_t1_ParamLimits

0x49b3,	// (0x00022d80) main_mup_pane_t1

0x49d0,	// (0x00022d9d) main_mup_pane_t2_ParamLimits

0x49d0,	// (0x00022d9d) main_mup_pane_t2

0x49ea,	// (0x00022db7) main_mup_pane_t3_ParamLimits

0x49ea,	// (0x00022db7) main_mup_pane_t3

0x4a04,	// (0x00022dd1) main_mup_pane_t4_ParamLimits

0x4a04,	// (0x00022dd1) main_mup_pane_t4

0x4a16,	// (0x00022de3) main_mup_pane_t5_ParamLimits

0x4a16,	// (0x00022de3) main_mup_pane_t5

0x4a28,	// (0x00022df5) main_mup_pane_t6_ParamLimits

0x4a28,	// (0x00022df5) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002d802) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002d802) main_mup_pane_t

0x4a3e,	// (0x00022e0b) mup_progress_pane_ParamLimits

0x4a3e,	// (0x00022e0b) mup_progress_pane

0x4a4a,	// (0x00022e17) mup_visualizer_pane_ParamLimits

0x4a4a,	// (0x00022e17) mup_visualizer_pane

0x4a88,	// (0x00022e55) mup_volume_pane_ParamLimits

0x4a88,	// (0x00022e55) mup_volume_pane

0xab97,	// (0x00028f64) mup_visualizer_pane_g1_ParamLimits

0xab97,	// (0x00028f64) mup_visualizer_pane_g1

0xab97,	// (0x00028f64) mup_visualizer_pane_g2_ParamLimits

0xab97,	// (0x00028f64) mup_visualizer_pane_g2

0xad29,	// (0x000290f6) mup_visualizer_pane_g3_ParamLimits

0xad29,	// (0x000290f6) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002d80f) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002d80f) mup_visualizer_pane_g

0xa2e9,	// (0x000286b6) mup_volume_pane_g1

0xafad,	// (0x0002937a) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002d816) mup_volume_pane_g

0xa2e9,	// (0x000286b6) mup_progress_pane_g1

0xafb6,	// (0x00029383) mup_progress_pane_g2

0xafbf,	// (0x0002938c) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002d81b) mup_progress_pane_g

0x9f68,	// (0x00028335) bg_popup_window_pane_cp05

0xafc8,	// (0x00029395) heading_pane_cp02_ParamLimits

0xafc8,	// (0x00029395) heading_pane_cp02

0xafe2,	// (0x000293af) list_popup_blid_pane

0xafea,	// (0x000293b7) list_blid_sat_info_pane_ParamLimits

0xafea,	// (0x000293b7) list_blid_sat_info_pane

0xaffd,	// (0x000293ca) list_blid_sat_info_pane_g1

0xb005,	// (0x000293d2) list_blid_sat_info_pane_t1

0x4b93,	// (0x00022f60) mup_equalizer_pane_ParamLimits

0x4b93,	// (0x00022f60) mup_equalizer_pane

0x4bb4,	// (0x00022f81) mup_equalizer_pane_cp1_ParamLimits

0x4bb4,	// (0x00022f81) mup_equalizer_pane_cp1

0x4bd5,	// (0x00022fa2) mup_equalizer_pane_cp2_ParamLimits

0x4bd5,	// (0x00022fa2) mup_equalizer_pane_cp2

0x4bf6,	// (0x00022fc3) mup_equalizer_pane_cp3_ParamLimits

0x4bf6,	// (0x00022fc3) mup_equalizer_pane_cp3

0x4c17,	// (0x00022fe4) mup_equalizer_pane_cp4_ParamLimits

0x4c17,	// (0x00022fe4) mup_equalizer_pane_cp4

0x4c38,	// (0x00023005) mup_equalizer_pane_cp5

0x4c4e,	// (0x0002301b) mup_equalizer_pane_cp6

0x4c66,	// (0x00023033) mup_equalizer_pane_cp7

0xc1aa,	// (0x0002a577) bg_popup_call_poc_act_pane_g9

0xc1b2,	// (0x0002a57f) bg_popup_call_poc_act_pane_g10

0xc1ba,	// (0x0002a587) bg_popup_call_poc_act_pane_g11

0x000a,

0xa1c3,	// (0x00028590) mup_scale_pane

0xa2e9,	// (0x000286b6) mup_scale_pane_g1

0xb013,	// (0x000293e0) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002d837) mup_scale_pane_g

0xb037,	// (0x00029404) msg_data_pane

0xb03f,	// (0x0002940c) scroll_pane_cp017

0x4c90,	// (0x0002305d) bg_list_pane_cp04_ParamLimits

0x4c90,	// (0x0002305d) bg_list_pane_cp04

0xb047,	// (0x00029414) msg_data_pane_g1

0x4cb4,	// (0x00023081) msg_data_pane_g2

0x4cbc,	// (0x00023089) msg_data_pane_g3

0x4cc4,	// (0x00023091) msg_data_pane_g4

0x4ccc,	// (0x00023099) msg_data_pane_g5

0x4cd4,	// (0x000230a1) msg_data_pane_g6

0x4cdc,	// (0x000230a9) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002d846) msg_data_pane_g

0x4ce4,	// (0x000230b1) msg_text_pane_ParamLimits

0x4ce4,	// (0x000230b1) msg_text_pane

0x4d24,	// (0x000230f1) qrid_highlight_pane_cp011_ParamLimits

0x4d24,	// (0x000230f1) qrid_highlight_pane_cp011

0x9f68,	// (0x00028335) msg_body_pane

0x9f68,	// (0x00028335) msg_header_pane

0xb058,	// (0x00029425) input_focus_pane_cp07

0x4d4c,	// (0x00023119) msg_header_pane_t1_ParamLimits

0x4d4c,	// (0x00023119) msg_header_pane_t1

0x4d5e,	// (0x0002312b) msg_header_pane_t2_ParamLimits

0x4d5e,	// (0x0002312b) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002d85a) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002d85a) msg_header_pane_t

0xb06d,	// (0x0002943a) msg_body_pane_g1

0x4d70,	// (0x0002313d) msg_body_pane_t1_ParamLimits

0x4d70,	// (0x0002313d) msg_body_pane_t1

0x4da1,	// (0x0002316e) msg_body_pane_t2_ParamLimits

0x4da1,	// (0x0002316e) msg_body_pane_t2

0x4db3,	// (0x00023180) msg_body_pane_t3_ParamLimits

0x4db3,	// (0x00023180) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002d85f) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002d85f) msg_body_pane_t

0x1375,	// (0x0001f742) main_viewer_pane_g1_ParamLimits

0x1375,	// (0x0001f742) main_viewer_pane_g1

0x1381,	// (0x0001f74e) main_viewer_pane_g2_ParamLimits

0x1381,	// (0x0001f74e) main_viewer_pane_g2

0x4de7,	// (0x000231b4) main_viewer_pane_g3_ParamLimits

0x4de7,	// (0x000231b4) main_viewer_pane_g3

0x4df8,	// (0x000231c5) main_viewer_pane_g4_ParamLimits

0x4df8,	// (0x000231c5) main_viewer_pane_g4

0x138d,	// (0x0001f75a) main_viewer_pane_g5_ParamLimits

0x138d,	// (0x0001f75a) main_viewer_pane_g5

0x138d,	// (0x0001f75a) main_viewer_pane_g7_ParamLimits

0x138d,	// (0x0001f75a) main_viewer_pane_g7

0xa9bf,	// (0x00028d8c) main_viewer_pane_g8_ParamLimits

0xa9bf,	// (0x00028d8c) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002d86f) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002d86f) main_viewer_pane_g

0xb075,	// (0x00029442) viewer_content_pane_ParamLimits

0xb075,	// (0x00029442) viewer_content_pane

0x4e29,	// (0x000231f6) main_postcard_pane_g1_ParamLimits

0x4e29,	// (0x000231f6) main_postcard_pane_g1

0x4e37,	// (0x00023204) main_postcard_pane_g2_ParamLimits

0x4e37,	// (0x00023204) main_postcard_pane_g2

0x4e45,	// (0x00023212) main_postcard_pane_g3_ParamLimits

0x4e45,	// (0x00023212) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002d880) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002d880) main_postcard_pane_g

0x4e55,	// (0x00023222) main_postcard_pane_g4

0xc3cc,	// (0x0002a799) smil_status_volume_pane_g2

0x4e81,	// (0x0002324e) postcard_pane_ParamLimits

0x4e81,	// (0x0002324e) postcard_pane

0xab97,	// (0x00028f64) postcard_pane_g1_ParamLimits

0xab97,	// (0x00028f64) postcard_pane_g1

0x4eb3,	// (0x00023280) postcard_pane_g2_ParamLimits

0x4eb3,	// (0x00023280) postcard_pane_g2

0x4ebf,	// (0x0002328c) postcard_pane_g3_ParamLimits

0x4ebf,	// (0x0002328c) postcard_pane_g3

0xb083,	// (0x00029450) postcard_pane_g4_ParamLimits

0xb083,	// (0x00029450) postcard_pane_g4

0x4ecb,	// (0x00023298) postcard_pane_g5_ParamLimits

0x4ecb,	// (0x00023298) postcard_pane_g5

0x4ed7,	// (0x000232a4) postcard_pane_g6_ParamLimits

0x4ed7,	// (0x000232a4) postcard_pane_g6

0xb091,	// (0x0002945e) postcard_pane_g7_ParamLimits

0xb091,	// (0x0002945e) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002d88d) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002d88d) postcard_pane_g

0x4ee3,	// (0x000232b0) main_mp2_pane_g1_ParamLimits

0x4ee3,	// (0x000232b0) main_mp2_pane_g1

0x4eef,	// (0x000232bc) main_mp2_pane_g2_ParamLimits

0x4eef,	// (0x000232bc) main_mp2_pane_g2

0x4efb,	// (0x000232c8) main_mp2_pane_g3_ParamLimits

0x4efb,	// (0x000232c8) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002d89c) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002d89c) main_mp2_pane_g

0x4f07,	// (0x000232d4) main_mp2_pane_t1_ParamLimits

0x4f07,	// (0x000232d4) main_mp2_pane_t1

0x4f1e,	// (0x000232eb) main_mp2_pane_t2_ParamLimits

0x4f1e,	// (0x000232eb) main_mp2_pane_t2

0x4f30,	// (0x000232fd) main_mp2_pane_t3_ParamLimits

0x4f30,	// (0x000232fd) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002d8a3) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002d8a3) main_mp2_pane_t

0xb09f,	// (0x0002946c) pec_content_pane_ParamLimits

0xb09f,	// (0x0002946c) pec_content_pane

0xa64e,	// (0x00028a1b) scroll_pane_cp015

0xb0b1,	// (0x0002947e) pec_attribute_pane_ParamLimits

0xb0b1,	// (0x0002947e) pec_attribute_pane

0x4f42,	// (0x0002330f) pec_content_pane_g1_ParamLimits

0x4f42,	// (0x0002330f) pec_content_pane_g1

0xb0c1,	// (0x0002948e) pec_content_pane_t1_ParamLimits

0xb0c1,	// (0x0002948e) pec_content_pane_t1

0xb0d3,	// (0x000294a0) pec_content_pane_t2_ParamLimits

0xb0d3,	// (0x000294a0) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002d8aa) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002d8aa) pec_content_pane_t

0x4f4e,	// (0x0002331b) list_single_graphic_pane_cp01_ParamLimits

0x4f4e,	// (0x0002331b) list_single_graphic_pane_cp01

0xa1c3,	// (0x00028590) bg_popup_sub_pane_cp04

0xb0e5,	// (0x000294b2) popup_mup_playback_window_g1

0xb0f1,	// (0x000294be) popup_mup_playback_window_t1

0xb106,	// (0x000294d3) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002d8af) popup_mup_playback_window_t

0xb13d,	// (0x0002950a) main_image_pane_g1_ParamLimits

0xb13d,	// (0x0002950a) main_image_pane_g1

0xb180,	// (0x0002954d) scroll_pane_cp018_ParamLimits

0xb180,	// (0x0002954d) scroll_pane_cp018

0xb198,	// (0x00029565) scroll_pane_cp016_ParamLimits

0xb198,	// (0x00029565) scroll_pane_cp016

0x4fe8,	// (0x000233b5) smil2_image_pane_ParamLimits

0x4fe8,	// (0x000233b5) smil2_image_pane

0x5018,	// (0x000233e5) smil2_root_pane_ParamLimits

0x5018,	// (0x000233e5) smil2_root_pane

0x5044,	// (0x00023411) smil2_text_pane_ParamLimits

0x5044,	// (0x00023411) smil2_text_pane

0x9f68,	// (0x00028335) bg_list_pane_cp06

0xb1d4,	// (0x000295a1) grid_radio_pane

0x9f68,	// (0x00028335) bg_popup_window_pane_cp06

0xb1dc,	// (0x000295a9) main_fmradio_pane_t1

0xaba5,	// (0x00028f72) heading_pane_cp04

0xb1ea,	// (0x000295b7) main_fmradio_pane_t2

0xc202,	// (0x0002a5cf) popup_cale_lunar_info_window_g1

0xb1f8,	// (0x000295c5) main_fmradio_pane_t3

0xc20a,	// (0x0002a5d7) popup_cale_lunar_info_window_g2

0xb206,	// (0x000295d3) main_fmradio_pane_t4

0x0001,

0xb214,	// (0x000295e1) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0002d99d) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002d8c4) main_fmradio_pane_t

0xb222,	// (0x000295ef) wait_bar_pane_cp03

0xb22a,	// (0x000295f7) cell_fmradio_pane_ParamLimits

0xb22a,	// (0x000295f7) cell_fmradio_pane

0xb091,	// (0x0002945e) cell_fmradio_pane_g1_ParamLimits

0xb091,	// (0x0002945e) cell_fmradio_pane_g1

0x9f68,	// (0x00028335) grid_highlight_pane_cp011

0xb23d,	// (0x0002960a) poc_content_pane_ParamLimits

0xb23d,	// (0x0002960a) poc_content_pane

0xb24f,	// (0x0002961c) scroll_pane_cp019

0x5084,	// (0x00023451) popup_call_poc_act_window_ParamLimits

0x5084,	// (0x00023451) popup_call_poc_act_window

0x5091,	// (0x0002345e) popup_call_poc_inact_window_ParamLimits

0x5091,	// (0x0002345e) popup_call_poc_inact_window

0xf594,	// (0x0002d961) bg_popup_call_poc_act_pane_g

0xc1c2,	// (0x0002a58f) bg_popup_call_poc_inact_pane_g1

0xc1ca,	// (0x0002a597) bg_popup_call_poc_inact_pane_g2

0xb257,	// (0x00029624) popup_call_poc_act_window_g2

0xc1d2,	// (0x0002a59f) bg_popup_call_poc_inact_pane_g3

0xc152,	// (0x0002a51f) bg_popup_call_poc_inact_pane_g4

0xc1da,	// (0x0002a5a7) bg_popup_call_poc_inact_pane_g5

0xb25f,	// (0x0002962c) popup_call_poc_act_window_t1_ParamLimits

0xb25f,	// (0x0002962c) popup_call_poc_act_window_t1

0xb287,	// (0x00029654) popup_call_poc_act_window_t2_ParamLimits

0xb287,	// (0x00029654) popup_call_poc_act_window_t2

0xb2af,	// (0x0002967c) popup_call_poc_act_window_t3_ParamLimits

0xb2af,	// (0x0002967c) popup_call_poc_act_window_t3

0xb2d7,	// (0x000296a4) popup_call_poc_act_window_t4_ParamLimits

0xb2d7,	// (0x000296a4) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002d8cf) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002d8cf) popup_call_poc_act_window_t

0xc1e2,	// (0x0002a5af) bg_popup_call_poc_inact_pane_g6

0xc1ea,	// (0x0002a5b7) bg_popup_call_poc_inact_pane_g7

0xc1f2,	// (0x0002a5bf) bg_popup_call_poc_inact_pane_g8

0xb2e9,	// (0x000296b6) popup_call_poc_inact_window_g2

0xc1fa,	// (0x0002a5c7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0002d978) bg_popup_call_poc_inact_pane_g

0xb2f1,	// (0x000296be) popup_call_poc_inact_window_t1_ParamLimits

0xb2f1,	// (0x000296be) popup_call_poc_inact_window_t1

0xb306,	// (0x000296d3) popup_call_poc_inact_window_t2_ParamLimits

0xb306,	// (0x000296d3) popup_call_poc_inact_window_t2

0xb31b,	// (0x000296e8) popup_call_poc_inact_window_t3_ParamLimits

0xb31b,	// (0x000296e8) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002d8d8) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002d8d8) popup_call_poc_inact_window_t

0xc33f,	// (0x0002a70c) context_pane_ParamLimits

0x554d,	// (0x0002391a) signal_pane_ParamLimits

0xa4a5,	// (0x00028872) main_call2_pane

0x14e4,	// (0x0001f8b1) popup_phob_thumbnail2_window_ParamLimits

0x14e4,	// (0x0001f8b1) popup_phob_thumbnail2_window

0x1345,	// (0x0001f712) aid_hotspot_pointer_arrow_pane

0x134d,	// (0x0001f71a) aid_hotspot_pointer_hand_pane

0x53b9,	// (0x00023786) phob_pre_status_pane_g5

0x2e6e,	// (0x0002123b) cams_zoom_pane_ParamLimits

0x2e7a,	// (0x00021247) image_vga_pane_ParamLimits

0x2e89,	// (0x00021256) main_camera_pane_g1_ParamLimits

0x2e97,	// (0x00021264) main_camera_pane_g2_ParamLimits

0x2ea3,	// (0x00021270) main_camera_pane_g3_ParamLimits

0x2eaf,	// (0x0002127c) main_camera_pane_g4_ParamLimits

0x2ebb,	// (0x00021288) main_camera_pane_g5_ParamLimits

0x2ec7,	// (0x00021294) main_camera_pane_g6_ParamLimits

0x2ed3,	// (0x000212a0) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002d5d7) main_camera_pane_g_ParamLimits

0x2edf,	// (0x000212ac) main_camera_pane_t1_ParamLimits

0x2ef1,	// (0x000212be) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002d5e8) main_camera_pane_t_ParamLimits

0xa1c3,	// (0x00028590) bg_popup_preview_window_pane_cp01_ParamLimits

0xa1c3,	// (0x00028590) bg_popup_preview_window_pane_cp01

0xb330,	// (0x000296fd) popup_phob_thumbnail2_window_g1_ParamLimits

0xb330,	// (0x000296fd) popup_phob_thumbnail2_window_g1

0x9f68,	// (0x00028335) call2_cli_visual_pane

0x50ad,	// (0x0002347a) popup_call2_audio_conf_window_ParamLimits

0x50ad,	// (0x0002347a) popup_call2_audio_conf_window

0x50c2,	// (0x0002348f) popup_call2_audio_first_window_ParamLimits

0x50c2,	// (0x0002348f) popup_call2_audio_first_window

0x5160,	// (0x0002352d) popup_call2_audio_in_window_ParamLimits

0x5160,	// (0x0002352d) popup_call2_audio_in_window

0x51a2,	// (0x0002356f) popup_call2_audio_out_window_ParamLimits

0x51a2,	// (0x0002356f) popup_call2_audio_out_window

0x5204,	// (0x000235d1) popup_call2_audio_second_window_ParamLimits

0x5204,	// (0x000235d1) popup_call2_audio_second_window

0x5262,	// (0x0002362f) popup_call2_audio_wait_window_ParamLimits

0x5262,	// (0x0002362f) popup_call2_audio_wait_window

0x9f68,	// (0x00028335) bg_popup_call2_act_pane_cp03

0xa1a5,	// (0x00028572) list_conf_pane_cp

0xb33c,	// (0x00029709) popup_call2_audio_conf_window_t1

0xb34a,	// (0x00029717) list_single_graphic_popup_conf2_pane_ParamLimits

0xb34a,	// (0x00029717) list_single_graphic_popup_conf2_pane

0xac15,	// (0x00028fe2) list_highlight_pane_cp04

0xb35d,	// (0x0002972a) list_single_graphic_popup_conf2_pane_g1

0xac26,	// (0x00028ff3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002d8df) list_single_graphic_popup_conf2_pane_g

0xb367,	// (0x00029734) list_single_graphic_popup_conf2_pane_t1

0xb375,	// (0x00029742) bg_popup_call2_act_pane_cp01_ParamLimits

0xb375,	// (0x00029742) bg_popup_call2_act_pane_cp01

0xb3ff,	// (0x000297cc) call_type_pane_cp05_ParamLimits

0xb3ff,	// (0x000297cc) call_type_pane_cp05

0xb453,	// (0x00029820) popup_call2_audio_second_window_g1_ParamLimits

0xb453,	// (0x00029820) popup_call2_audio_second_window_g1

0xb4a7,	// (0x00029874) popup_call2_audio_second_window_g2_ParamLimits

0xb4a7,	// (0x00029874) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002d8e4) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002d8e4) popup_call2_audio_second_window_g

0xb50c,	// (0x000298d9) popup_call2_audio_second_window_t1_ParamLimits

0xb50c,	// (0x000298d9) popup_call2_audio_second_window_t1

0xb5c7,	// (0x00029994) popup_call2_audio_second_window_t2_ParamLimits

0xb5c7,	// (0x00029994) popup_call2_audio_second_window_t2

0xb61a,	// (0x000299e7) popup_call2_audio_second_window_t3_ParamLimits

0xb61a,	// (0x000299e7) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002d8eb) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002d8eb) popup_call2_audio_second_window_t

0x9f68,	// (0x00028335) bg_popup_call2_in_pane_cp02

0x9f72,	// (0x0002833f) call_type_pane_cp04

0x9f7a,	// (0x00028347) popup_call2_audio_wait_window_g1

0x9f82,	// (0x0002834f) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002d4c6) popup_call2_audio_wait_window_g

0x9f8a,	// (0x00028357) popup_call2_audio_wait_window_t3

0xb70d,	// (0x00029ada) bg_popup_call2_act_pane_ParamLimits

0xb70d,	// (0x00029ada) bg_popup_call2_act_pane

0xb7cd,	// (0x00029b9a) call_type_pane_cp03_ParamLimits

0xb7cd,	// (0x00029b9a) call_type_pane_cp03

0xb831,	// (0x00029bfe) popup_call2_audio_first_window_g1_ParamLimits

0xb831,	// (0x00029bfe) popup_call2_audio_first_window_g1

0xb8a1,	// (0x00029c6e) popup_call2_audio_first_window_g2_ParamLimits

0xb8a1,	// (0x00029c6e) popup_call2_audio_first_window_g2

0xab97,	// (0x00028f64) popup_call2_audio_first_window_g3_ParamLimits

0xab97,	// (0x00028f64) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002d8f4) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002d8f4) popup_call2_audio_first_window_g

0xb97f,	// (0x00029d4c) popup_call2_audio_first_window_t1_ParamLimits

0xb97f,	// (0x00029d4c) popup_call2_audio_first_window_t1

0xba82,	// (0x00029e4f) popup_call2_audio_first_window_t4_ParamLimits

0xba82,	// (0x00029e4f) popup_call2_audio_first_window_t4

0xbb65,	// (0x00029f32) popup_call2_audio_first_window_t5_ParamLimits

0xbb65,	// (0x00029f32) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002d8ff) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002d8ff) popup_call2_audio_first_window_t

0xa1bb,	// (0x00028588) bg_popup_call2_act_pane_g1

0xc212,	// (0x0002a5df) popup_cale_lunar_info_window_t1

0xc220,	// (0x0002a5ed) popup_cale_lunar_info_window_t2

0xc22e,	// (0x0002a5fb) popup_cale_lunar_info_window_t3

0x9f68,	// (0x00028335) bg_popup_call2_bubble_pane

0xbc66,	// (0x0002a033) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc66,	// (0x0002a033) bg_popup_call2_in_pane_cp01

0x9c44,	// (0x00028011) call_type_pane_cp02

0xbcae,	// (0x0002a07b) popup_call2_audio_out_window_g1_ParamLimits

0xbcae,	// (0x0002a07b) popup_call2_audio_out_window_g1

0xbcda,	// (0x0002a0a7) popup_call2_audio_out_window_g2_ParamLimits

0xbcda,	// (0x0002a0a7) popup_call2_audio_out_window_g2

0xbd02,	// (0x0002a0cf) popup_call2_audio_out_window_g3_ParamLimits

0xbd02,	// (0x0002a0cf) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002d908) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002d908) popup_call2_audio_out_window_g

0xbd3d,	// (0x0002a10a) popup_call2_audio_out_window_t1_ParamLimits

0xbd3d,	// (0x0002a10a) popup_call2_audio_out_window_t1

0xbd9c,	// (0x0002a169) popup_call2_audio_out_window_t2_ParamLimits

0xbd9c,	// (0x0002a169) popup_call2_audio_out_window_t2

0xbdf0,	// (0x0002a1bd) popup_call2_audio_out_window_t3_ParamLimits

0xbdf0,	// (0x0002a1bd) popup_call2_audio_out_window_t3

0xbe06,	// (0x0002a1d3) popup_call2_audio_out_window_t4_ParamLimits

0xbe06,	// (0x0002a1d3) popup_call2_audio_out_window_t4

0xbe1c,	// (0x0002a1e9) popup_call2_audio_out_window_t5_ParamLimits

0xbe1c,	// (0x0002a1e9) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002d911) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002d911) popup_call2_audio_out_window_t

0xbe80,	// (0x0002a24d) bg_popup_call2_in_pane_ParamLimits

0xbe80,	// (0x0002a24d) bg_popup_call2_in_pane

0xbedc,	// (0x0002a2a9) popup_call2_audio_in_window_g1_ParamLimits

0xbedc,	// (0x0002a2a9) popup_call2_audio_in_window_g1

0xbf14,	// (0x0002a2e1) popup_call2_audio_in_window_g2_ParamLimits

0xbf14,	// (0x0002a2e1) popup_call2_audio_in_window_g2

0xbf4c,	// (0x0002a319) popup_call2_audio_in_window_g3_ParamLimits

0xbf4c,	// (0x0002a319) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002d91e) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002d91e) popup_call2_audio_in_window_g

0xbfa4,	// (0x0002a371) popup_call2_audio_in_window_t1_ParamLimits

0xbfa4,	// (0x0002a371) popup_call2_audio_in_window_t1

0xc024,	// (0x0002a3f1) popup_call2_audio_in_window_t2_ParamLimits

0xc024,	// (0x0002a3f1) popup_call2_audio_in_window_t2

0xc0a4,	// (0x0002a471) popup_call2_audio_in_window_t3_ParamLimits

0xc0a4,	// (0x0002a471) popup_call2_audio_in_window_t3

0xc0be,	// (0x0002a48b) popup_call2_audio_in_window_t4_ParamLimits

0xc0be,	// (0x0002a48b) popup_call2_audio_in_window_t4

0xc0d0,	// (0x0002a49d) popup_call2_audio_in_window_t5_ParamLimits

0xc0d0,	// (0x0002a49d) popup_call2_audio_in_window_t5

0xc0e5,	// (0x0002a4b2) popup_call2_audio_in_window_t6_ParamLimits

0xc0e5,	// (0x0002a4b2) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002d927) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002d927) popup_call2_audio_in_window_t

0xa1bb,	// (0x00028588) bg_popup_call2_in_pane_g1

0xc23c,	// (0x0002a609) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0002d9a2) popup_cale_lunar_info_window_t

0xa1c3,	// (0x00028590) bg_popup_call2_rect_pane_ParamLimits

0xa1c3,	// (0x00028590) bg_popup_call2_rect_pane

0x9f68,	// (0x00028335) call2_cli_visual_graphic_pane

0x9f68,	// (0x00028335) call2_cli_visual_text_pane

0x1533,	// (0x0001f900) smil_status_volume_pane_g3

0x0002,

0xa2e9,	// (0x000286b6) call2_cli_visual_graphic_pane_g1

0xa2e9,	// (0x000286b6) call2_cli_visual_graphic_pane_g2

0xa2e9,	// (0x000286b6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002d934) call2_cli_visual_graphic_pane_g

0xc0fa,	// (0x0002a4c7) bg_popup_call2_rect_pane_g1

0xa387,	// (0x00028754) bg_popup_call2_rect_pane_g2

0xc102,	// (0x0002a4cf) bg_popup_call2_rect_pane_g3

0xc10a,	// (0x0002a4d7) bg_popup_call2_rect_pane_g4

0xc112,	// (0x0002a4df) bg_popup_call2_rect_pane_g5

0xc11a,	// (0x0002a4e7) bg_popup_call2_rect_pane_g6

0xc122,	// (0x0002a4ef) bg_popup_call2_rect_pane_g7

0xc12a,	// (0x0002a4f7) bg_popup_call2_rect_pane_g8

0xc132,	// (0x0002a4ff) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d93b) bg_popup_call2_rect_pane_g

0xc13a,	// (0x0002a507) bg_popup_call2_bubble_pane_g1

0xc142,	// (0x0002a50f) bg_popup_call2_bubble_pane_g2

0xc14a,	// (0x0002a517) bg_popup_call2_bubble_pane_g3

0xc152,	// (0x0002a51f) bg_popup_call2_bubble_pane_g4

0xc15a,	// (0x0002a527) bg_popup_call2_bubble_pane_g5

0xc162,	// (0x0002a52f) bg_popup_call2_bubble_pane_g6

0xc16a,	// (0x0002a537) bg_popup_call2_bubble_pane_g7

0xc172,	// (0x0002a53f) bg_popup_call2_bubble_pane_g8

0xc17a,	// (0x0002a547) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002d94e) bg_popup_call2_bubble_pane_g

0x2990,	// (0x00020d5d) aid_cale_week_size_cell_pane

0x2f03,	// (0x000212d0) aid_cams_cif_uncrop_pane_ParamLimits

0x2f03,	// (0x000212d0) aid_cams_cif_uncrop_pane

0x305e,	// (0x0002142b) aid_cams_size_cell_ParamLimits

0x305e,	// (0x0002142b) aid_cams_size_cell

0x306a,	// (0x00021437) grid_cams_pane_ParamLimits

0x3078,	// (0x00021445) linegrid_cams_pane_ParamLimits

0x3264,	// (0x00021631) call_video_pane_t1

0x3285,	// (0x00021652) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002d63b) call_video_pane_t

0x37d3,	// (0x00021ba0) aid_cale_month_size_cell_pane_ParamLimits

0x37d3,	// (0x00021ba0) aid_cale_month_size_cell_pane

0xf61e,	// (0x0002d9eb) smil_status_volume_pane_g

0x1540,	// (0x0001f90d) volume_smil_pane_ParamLimits

0x0cc6,	// (0x0001f093) aid_popup2_width_pane

0x28d2,	// (0x00020c9f) cell_qdial_pane_g4_ParamLimits

0x28d2,	// (0x00020c9f) cell_qdial_pane_g4

0x479f,	// (0x00022b6c) aid_blid_cardinal_pane_ParamLimits

0x47af,	// (0x00022b7c) aid_blid_destination_pane_ParamLimits

0x47af,	// (0x00022b7c) aid_blid_destination_pane

0xa1c3,	// (0x00028590) bg_popup_call_poc_act_pane_ParamLimits

0xa1c3,	// (0x00028590) bg_popup_call_poc_act_pane

0xa1c3,	// (0x00028590) bg_popup_call_poc_inact_pane_ParamLimits

0xa1c3,	// (0x00028590) bg_popup_call_poc_inact_pane

0xc182,	// (0x0002a54f) bg_popup_call_poc_act_pane_g1

0xc18a,	// (0x0002a557) bg_popup_call_poc_act_pane_g2

0xc192,	// (0x0002a55f) bg_popup_call_poc_act_pane_g3

0xc152,	// (0x0002a51f) bg_popup_call_poc_act_pane_g4

0xc15a,	// (0x0002a527) bg_popup_call_poc_act_pane_g5

0xc19a,	// (0x0002a567) bg_popup_call_poc_act_pane_g6

0xc16a,	// (0x0002a537) bg_popup_call_poc_act_pane_g7

0xc1a2,	// (0x0002a56f) bg_popup_call_poc_act_pane_g8

0x9f68,	// (0x00028335) main_usb_pane

0x1417,	// (0x0001f7e4) popup_cale_lunar_info_window

0x35a2,	// (0x0002196f) im_reading_pane_t1_ParamLimits

0xa5a6,	// (0x00028973) list_im_pane_ParamLimits

0xa5b7,	// (0x00028984) scroll_pane_cp07_ParamLimits

0x9f68,	// (0x00028335) grid_highlight_pane_cp012

0xa1c3,	// (0x00028590) mup_scale_pane_ParamLimits

0xab97,	// (0x00028f64) main_usb_pane_g1_ParamLimits

0xab97,	// (0x00028f64) main_usb_pane_g1

0x52dc,	// (0x000236a9) main_usb_pane_g2_ParamLimits

0x52dc,	// (0x000236a9) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0002d98b) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0002d98b) main_usb_pane_g

0x52e8,	// (0x000236b5) main_usb_pane_t1_ParamLimits

0x52e8,	// (0x000236b5) main_usb_pane_t1

0x52fa,	// (0x000236c7) main_usb_pane_t2_ParamLimits

0x52fa,	// (0x000236c7) main_usb_pane_t2

0x530c,	// (0x000236d9) main_usb_pane_t3_ParamLimits

0x530c,	// (0x000236d9) main_usb_pane_t3

0x531e,	// (0x000236eb) main_usb_pane_t4_ParamLimits

0x531e,	// (0x000236eb) main_usb_pane_t4

0x5330,	// (0x000236fd) main_usb_pane_t5_ParamLimits

0x5330,	// (0x000236fd) main_usb_pane_t5

0x5342,	// (0x0002370f) main_usb_pane_t6_ParamLimits

0x5342,	// (0x0002370f) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0002d990) main_usb_pane_t_ParamLimits

0x4745,	// (0x00022b12) aid_text_placing

0x4751,	// (0x00022b1e) main_location2_pane_t1_ParamLimits

0x4765,	// (0x00022b32) main_location2_pane_t2_ParamLimits

0x4779,	// (0x00022b46) main_location2_pane_t3_ParamLimits

0x478d,	// (0x00022b5a) main_location2_pane_t4_ParamLimits

0x478d,	// (0x00022b5a) main_location2_pane_t4

0xf3cf,	// (0x0002d79c) main_location2_pane_t_ParamLimits

0xa1ff,	// (0x000285cc) find_pinb_pane_g2_ParamLimits

0xa1ff,	// (0x000285cc) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0002d4ec) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0002d4ec) find_pinb_pane_g

0xa20b,	// (0x000285d8) find_pinb_pane_t1_ParamLimits

0xa21d,	// (0x000285ea) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0002d4f1) find_pinb_pane_t_ParamLimits

0x9f68,	// (0x00028335) main_call3_pane

0x3d47,	// (0x00022114) cale_month_day_heading_pane_t1_ParamLimits

0x3dcd,	// (0x0002219a) cale_month_day_heading_pane_t2_ParamLimits

0x3e5e,	// (0x0002222b) cale_month_day_heading_pane_t3_ParamLimits

0x3eef,	// (0x000222bc) cale_month_day_heading_pane_t4_ParamLimits

0x3f80,	// (0x0002234d) cale_month_day_heading_pane_t5_ParamLimits

0x4011,	// (0x000223de) cale_month_day_heading_pane_t6_ParamLimits

0x40ae,	// (0x0002247b) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002d673) cale_month_day_heading_pane_t_ParamLimits

0xa801,	// (0x00028bce) smil_status_volume_pane

0x4e9b,	// (0x00023268) postcard_address_pane_ParamLimits

0x4e9b,	// (0x00023268) postcard_address_pane

0x4ea7,	// (0x00023274) postcard_message_pane_ParamLimits

0x4ea7,	// (0x00023274) postcard_message_pane

0x52a1,	// (0x0002366e) call2_cli_visual_pane_t1_ParamLimits

0x52a1,	// (0x0002366e) call2_cli_visual_pane_t1

0x5738,	// (0x00023b05) postcard_message_pane_t1_ParamLimits

0x5738,	// (0x00023b05) postcard_message_pane_t1

0x5721,	// (0x00023aee) postcard_address_pane_t1_ParamLimits

0x5721,	// (0x00023aee) postcard_address_pane_t1

0x5712,	// (0x00023adf) popup_call3_audio_in_window_ParamLimits

0x5712,	// (0x00023adf) popup_call3_audio_in_window

0x55f6,	// (0x000239c3) bg_popup_call3_in_pane_ParamLimits

0x55f6,	// (0x000239c3) bg_popup_call3_in_pane

0x5658,	// (0x00023a25) popup_call3_audio_in_window_g1_ParamLimits

0x5658,	// (0x00023a25) popup_call3_audio_in_window_g1

0x5670,	// (0x00023a3d) popup_call3_audio_in_window_g2_ParamLimits

0x5670,	// (0x00023a3d) popup_call3_audio_in_window_g2

0x5688,	// (0x00023a55) popup_call3_audio_in_window_g3_ParamLimits

0x5688,	// (0x00023a55) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0002d9f2) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0002d9f2) popup_call3_audio_in_window_g

0x56b0,	// (0x00023a7d) popup_call3_audio_in_window_t1_ParamLimits

0x56b0,	// (0x00023a7d) popup_call3_audio_in_window_t1

0x56d8,	// (0x00023aa5) popup_call3_audio_in_window_t2_ParamLimits

0x56d8,	// (0x00023aa5) popup_call3_audio_in_window_t2

0x5700,	// (0x00023acd) popup_call3_audio_in_window_t3_ParamLimits

0x5700,	// (0x00023acd) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0002d9fb) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0002d9fb) popup_call3_audio_in_window_t

0xa4a5,	// (0x00028872) bg_popup_call3_rect_pane

0xc0fa,	// (0x0002a4c7) bg_popup_call3_rect_pane_g1

0xa387,	// (0x00028754) bg_popup_call3_rect_pane_g2

0xc102,	// (0x0002a4cf) bg_popup_call3_rect_pane_g3

0xc10a,	// (0x0002a4d7) bg_popup_call3_rect_pane_g4

0xc112,	// (0x0002a4df) bg_popup_call3_rect_pane_g5

0xc11a,	// (0x0002a4e7) bg_popup_call3_rect_pane_g6

0xc122,	// (0x0002a4ef) bg_popup_call3_rect_pane_g7

0x4aa3,	// (0x00022e70) mup_visualizer_osc_pane

0xafa5,	// (0x00029372) mup_visualizer_spec_pane

0x5616,	// (0x000239e3) call3_video_qcif_pane_ParamLimits

0x5616,	// (0x000239e3) call3_video_qcif_pane

0x5628,	// (0x000239f5) call3_video_qcif_uncrop_pane_ParamLimits

0x5628,	// (0x000239f5) call3_video_qcif_uncrop_pane

0x5636,	// (0x00023a03) call3_video_subqcif_pane_ParamLimits

0x5636,	// (0x00023a03) call3_video_subqcif_pane

0x5648,	// (0x00023a15) call3_video_subqcif_uncrop_pane_ParamLimits

0x5648,	// (0x00023a15) call3_video_subqcif_uncrop_pane

0x56a0,	// (0x00023a6d) popup_call3_audio_in_window_g4_ParamLimits

0x56a0,	// (0x00023a6d) popup_call3_audio_in_window_g4

0x55e3,	// (0x000239b0) mup_spec_half_pane

0x55ec,	// (0x000239b9) mup_spec_half_pane_cp

0xc39f,	// (0x0002a76c) mup_osc_middle_pane

0xc3a8,	// (0x0002a775) mup_visualizer_osc_pane_g1

0x55c4,	// (0x00023991) mup_spec_bar_pane_ParamLimits

0x55c4,	// (0x00023991) mup_spec_bar_pane

0xc38c,	// (0x0002a759) mup_spec_bar_pane_g1

0xc396,	// (0x0002a763) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0002d9e6) mup_spec_bar_pane_g

0x2990,	// (0x00020d5d) aid_cale_week_size_cell_pane_ParamLimits

0x29a5,	// (0x00020d72) bg_cale_heading_pane_ParamLimits

0xa3fe,	// (0x000287cb) bg_cale_pane_cp01_ParamLimits

0x29c7,	// (0x00020d94) cale_week_corner_pane_ParamLimits

0x29e1,	// (0x00020dae) cale_week_day_heading_pane_ParamLimits

0x2a03,	// (0x00020dd0) cale_week_scroll_pane_g1_ParamLimits

0x2a20,	// (0x00020ded) cale_week_scroll_pane_g2_ParamLimits

0x2a33,	// (0x00020e00) cale_week_scroll_pane_g3_ParamLimits

0x2a46,	// (0x00020e13) cale_week_scroll_pane_g4_ParamLimits

0x2a59,	// (0x00020e26) cale_week_scroll_pane_g5_ParamLimits

0x2a6c,	// (0x00020e39) cale_week_scroll_pane_g6_ParamLimits

0x2a7f,	// (0x00020e4c) cale_week_scroll_pane_g7_ParamLimits

0x2a92,	// (0x00020e5f) cale_week_scroll_pane_g8_ParamLimits

0x2aa7,	// (0x00020e74) cale_week_scroll_pane_g9_ParamLimits

0x2aba,	// (0x00020e87) cale_week_scroll_pane_g10_ParamLimits

0x2acd,	// (0x00020e9a) cale_week_scroll_pane_g11_ParamLimits

0x2ae0,	// (0x00020ead) cale_week_scroll_pane_g12_ParamLimits

0x2af7,	// (0x00020ec4) cale_week_scroll_pane_g13_ParamLimits

0x2b12,	// (0x00020edf) cale_week_scroll_pane_g14_ParamLimits

0x2b2d,	// (0x00020efa) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0002d57d) cale_week_scroll_pane_g_ParamLimits

0x2b5d,	// (0x00020f2a) cale_week_time_pane_ParamLimits

0x2b72,	// (0x00020f3f) grid_cale_week_pane_ParamLimits

0xa41b,	// (0x000287e8) listscroll_cale_week_pane_t1

0xa42d,	// (0x000287fa) scroll_pane_cp08_ParamLimits

0x383c,	// (0x00021c09) cale_month_corner_pane_ParamLimits

0xa7d7,	// (0x00028ba4) cale_month_pane_t1

0x3ce0,	// (0x000220ad) cale_month_week_pane_ParamLimits

0xab97,	// (0x00028f64) popup_call_status_window_g1_ParamLimits

0x45bd,	// (0x0002298a) popup_call_status_window_g2_ParamLimits

0x45c9,	// (0x00022996) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002d723) popup_call_status_window_g_ParamLimits

0xab7b,	// (0x00028f48) aid_call2_pane

0x4d40,	// (0x0002310d) msg_header_pane_g1

0x4e9b,	// (0x00023268) postcard_address2_pane_ParamLimits

0x4e9b,	// (0x00023268) postcard_address2_pane

0x4ea7,	// (0x00023274) postcard_message2_pane_ParamLimits

0x4ea7,	// (0x00023274) postcard_message2_pane

0x555b,	// (0x00023928) message2_row_pane_ParamLimits

0x555b,	// (0x00023928) message2_row_pane

0x5576,	// (0x00023943) address2_row_pane_ParamLimits

0x5576,	// (0x00023943) address2_row_pane

0xc35a,	// (0x0002a727) postcard_message2_row_pane_g1

0xc362,	// (0x0002a72f) postcard_message2_row_pane_t1

0xc35a,	// (0x0002a727) address2_row_pane_g1

0xc362,	// (0x0002a72f) address2_row_pane_t1

0x2df3,	// (0x000211c0) aid_size_cell_vorec

0x9f68,	// (0x00028335) main_rss_pane

0x5589,	// (0x00023956) rss_list_single_pane_ParamLimits

0x5589,	// (0x00023956) rss_list_single_pane

0xc370,	// (0x0002a73d) rss_list_single_pane_t1

0xc37e,	// (0x0002a74b) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0002d9e1) rss_list_single_pane_t

0x9f68,	// (0x00028335) main_camera2_pane

0x9f68,	// (0x00028335) main_video2_pane

0x159e,	// (0x0001f96b) cams_zoom_pane_cp2_ParamLimits

0x159e,	// (0x0001f96b) cams_zoom_pane_cp2

0x15aa,	// (0x0001f977) image2_vga_pane_ParamLimits

0x15aa,	// (0x0001f977) image2_vga_pane

0x15b9,	// (0x0001f986) main_camera2_pane_g1_ParamLimits

0x15b9,	// (0x0001f986) main_camera2_pane_g1

0x15c5,	// (0x0001f992) main_camera2_pane_g2_ParamLimits

0x15c5,	// (0x0001f992) main_camera2_pane_g2

0x15d1,	// (0x0001f99e) main_camera2_pane_g3_ParamLimits

0x15d1,	// (0x0001f99e) main_camera2_pane_g3

0x15dd,	// (0x0001f9aa) main_camera2_pane_g4_ParamLimits

0x15dd,	// (0x0001f9aa) main_camera2_pane_g4

0x15e9,	// (0x0001f9b6) main_camera2_pane_g5_ParamLimits

0x15e9,	// (0x0001f9b6) main_camera2_pane_g5

0x15f5,	// (0x0001f9c2) main_camera2_pane_g6_ParamLimits

0x15f5,	// (0x0001f9c2) main_camera2_pane_g6

0x1601,	// (0x0001f9ce) main_camera2_pane_g7_ParamLimits

0x1601,	// (0x0001f9ce) main_camera2_pane_g7

0x160d,	// (0x0001f9da) main_camera2_pane_g8_ParamLimits

0x160d,	// (0x0001f9da) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0002da02) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0002da02) main_camera2_pane_g

0x1625,	// (0x0001f9f2) main_camera2_pane_t1_ParamLimits

0x1625,	// (0x0001f9f2) main_camera2_pane_t1

0x1637,	// (0x0001fa04) main_camera2_pane_t2_ParamLimits

0x1637,	// (0x0001fa04) main_camera2_pane_t2

0x1649,	// (0x0001fa16) main_camera2_pane_t3_ParamLimits

0x1649,	// (0x0001fa16) main_camera2_pane_t3

0x165b,	// (0x0001fa28) main_camera2_pane_t4_ParamLimits

0x165b,	// (0x0001fa28) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0002da15) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0002da15) main_camera2_pane_t

0x16bd,	// (0x0001fa8a) cams_zoom_pane_cp4_ParamLimits

0x16bd,	// (0x0001fa8a) cams_zoom_pane_cp4

0x16cd,	// (0x0001fa9a) image2_cif_pane_ParamLimits

0x16cd,	// (0x0001fa9a) image2_cif_pane

0x16e2,	// (0x0001faaf) image2_subqcif_pane_ParamLimits

0x16e2,	// (0x0001faaf) image2_subqcif_pane

0x16f1,	// (0x0001fabe) main_video2_pane_g1_ParamLimits

0x16f1,	// (0x0001fabe) main_video2_pane_g1

0x1703,	// (0x0001fad0) main_video2_pane_g2_ParamLimits

0x1703,	// (0x0001fad0) main_video2_pane_g2

0x1713,	// (0x0001fae0) main_video2_pane_g3_ParamLimits

0x1713,	// (0x0001fae0) main_video2_pane_g3

0x1723,	// (0x0001faf0) main_video2_pane_g4_ParamLimits

0x1723,	// (0x0001faf0) main_video2_pane_g4

0x1733,	// (0x0001fb00) main_video2_pane_g5_ParamLimits

0x1733,	// (0x0001fb00) main_video2_pane_g5

0x1743,	// (0x0001fb10) main_video2_pane_g6_ParamLimits

0x1743,	// (0x0001fb10) main_video2_pane_g6

0x0005,

0xf657,	// (0x0002da24) main_video2_pane_g_ParamLimits

0xf657,	// (0x0002da24) main_video2_pane_g

0x1755,	// (0x0001fb22) main_video2_pane_t1_ParamLimits

0x1755,	// (0x0001fb22) main_video2_pane_t1

0x176f,	// (0x0001fb3c) main_video2_pane_t2_ParamLimits

0x176f,	// (0x0001fb3c) main_video2_pane_t2

0x1795,	// (0x0001fb62) main_video2_pane_t3_ParamLimits

0x1795,	// (0x0001fb62) main_video2_pane_t3

0x0002,

0xf664,	// (0x0002da31) main_video2_pane_t_ParamLimits

0xf664,	// (0x0002da31) main_video2_pane_t

0x53f9,	// (0x000237c6) call_muted_g2

0x0001,

0xf606,	// (0x0002d9d3) call_muted_g

0x9f68,	// (0x00028335) main_mup2_pane

0xc3df,	// (0x0002a7ac) main_mup2_pane_g1_ParamLimits

0xc3df,	// (0x0002a7ac) main_mup2_pane_g1

0x5753,	// (0x00023b20) main_mup2_pane_g2_ParamLimits

0x5753,	// (0x00023b20) main_mup2_pane_g2

0x17e4,	// (0x0001fbb1) main_mup_pane_g13_cp1

0x17ec,	// (0x0001fbb9) mup_volume_pane_cp1

0x5773,	// (0x00023b40) main_mup2_pane_g4_ParamLimits

0x5773,	// (0x00023b40) main_mup2_pane_g4

0x5788,	// (0x00023b55) main_mup2_pane_g5_ParamLimits

0x5788,	// (0x00023b55) main_mup2_pane_g5

0x579d,	// (0x00023b6a) main_mup2_pane_g6_ParamLimits

0x579d,	// (0x00023b6a) main_mup2_pane_g6

0x57b2,	// (0x00023b7f) main_mup2_pane_g7_ParamLimits

0x57b2,	// (0x00023b7f) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0002da38) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0002da38) main_mup2_pane_g

0x57ce,	// (0x00023b9b) main_mup2_pane_t1_ParamLimits

0x57ce,	// (0x00023b9b) main_mup2_pane_t1

0x57e5,	// (0x00023bb2) main_mup2_pane_t2_ParamLimits

0x57e5,	// (0x00023bb2) main_mup2_pane_t2

0x57fc,	// (0x00023bc9) main_mup2_pane_t3_ParamLimits

0x57fc,	// (0x00023bc9) main_mup2_pane_t3

0x5813,	// (0x00023be0) main_mup2_pane_t4_ParamLimits

0x5813,	// (0x00023be0) main_mup2_pane_t4

0x582d,	// (0x00023bfa) main_mup2_pane_t5_ParamLimits

0x582d,	// (0x00023bfa) main_mup2_pane_t5

0x5847,	// (0x00023c14) main_mup2_pane_t6_ParamLimits

0x5847,	// (0x00023c14) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0002da47) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0002da47) main_mup2_pane_t

0x587f,	// (0x00023c4c) mup2_visualizer_pane_ParamLimits

0x587f,	// (0x00023c4c) mup2_visualizer_pane

0x58b5,	// (0x00023c82) mup_progress_pane_cp_ParamLimits

0x58b5,	// (0x00023c82) mup_progress_pane_cp

0x17cf,	// (0x0001fb9c) mup_volume_pane_cp_ParamLimits

0x17cf,	// (0x0001fb9c) mup_volume_pane_cp

0x58cc,	// (0x00023c99) mup2_visualizer_pane_g1_ParamLimits

0x58cc,	// (0x00023c99) mup2_visualizer_pane_g1

0xc3eb,	// (0x0002a7b8) mup2_visualizer_pane_g2_ParamLimits

0xc3eb,	// (0x0002a7b8) mup2_visualizer_pane_g2

0x58e1,	// (0x00023cae) mup2_visualizer_pane_g3_ParamLimits

0x58e1,	// (0x00023cae) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0002da54) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0002da54) mup2_visualizer_pane_g

0xb1cc,	// (0x00029599) aid_size_cell_fmradio

0x13ab,	// (0x0001f778) aid_height_parent_landcape

0xa635,	// (0x00028a02) wml_content_pane_cp

0xa63d,	// (0x00028a0a) wml_tabs_pane

0xa646,	// (0x00028a13) popup_wml_miniature_window

0xa64e,	// (0x00028a1b) scroll_pane_cp021

0xa662,	// (0x00028a2f) wml_content_pane_comp8

0x9f68,	// (0x00028335) bg_popup_sub_pane_cp05

0xc409,	// (0x0002a7d6) popup_wml_miniature_window_g1

0xc411,	// (0x0002a7de) wml_miniature_view_pane

0x58ef,	// (0x00023cbc) aid_size_wml_view

0x58f7,	// (0x00023cc4) wml_miniature_view_pane_g1

0x5900,	// (0x00023ccd) wml_miniature_view_pane_g2

0x5909,	// (0x00023cd6) wml_miniature_view_pane_g3

0x5911,	// (0x00023cde) wml_miniature_view_pane_g4

0x5919,	// (0x00023ce6) wml_miniature_view_pane_g5

0x5921,	// (0x00023cee) wml_miniature_view_pane_g6

0x5929,	// (0x00023cf6) wml_miniature_view_pane_g7

0x5931,	// (0x00023cfe) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0002da5b) wml_miniature_view_pane_g

0xc3df,	// (0x0002a7ac) background_graphic_ParamLimits

0xc3df,	// (0x0002a7ac) background_graphic

0xc419,	// (0x0002a7e6) wml_tabs_2_pane

0xc422,	// (0x0002a7ef) wml_tabs_3_pane_ParamLimits

0xc422,	// (0x0002a7ef) wml_tabs_3_pane

0xc434,	// (0x0002a801) wml_tabs_4_pane_ParamLimits

0xc434,	// (0x0002a801) wml_tabs_4_pane

0xc44a,	// (0x0002a817) wml_tabs_5_pane_ParamLimits

0xc44a,	// (0x0002a817) wml_tabs_5_pane

0xc464,	// (0x0002a831) wml_tabs_pane_g2_ParamLimits

0xc464,	// (0x0002a831) wml_tabs_pane_g2

0xc478,	// (0x0002a845) wml_tabs_pane_g3_ParamLimits

0xc478,	// (0x0002a845) wml_tabs_pane_g3

0x5939,	// (0x00023d06) wml_tabs_2_active_pane_ParamLimits

0x5939,	// (0x00023d06) wml_tabs_2_active_pane

0x5949,	// (0x00023d16) wml_tabs_2_passive_pane_ParamLimits

0x5949,	// (0x00023d16) wml_tabs_2_passive_pane

0x5959,	// (0x00023d26) wml_tabs_3_active_pane_cp_ParamLimits

0x5959,	// (0x00023d26) wml_tabs_3_active_pane_cp

0x596a,	// (0x00023d37) wml_tabs_3_passive_pane_ParamLimits

0x596a,	// (0x00023d37) wml_tabs_3_passive_pane

0x597b,	// (0x00023d48) wml_tabs_3_passive_pane_cp_ParamLimits

0x597b,	// (0x00023d48) wml_tabs_3_passive_pane_cp

0x598c,	// (0x00023d59) tabs_4_active_pane

0x5994,	// (0x00023d61) tabs_4_passive_pane

0x599c,	// (0x00023d69) tabs_4_passive_pane_cp

0x59a4,	// (0x00023d71) tabs_4_passive_pane_cp2

0x52d4,	// (0x000236a1) aid_height_text

0x4a6c,	// (0x00022e39) mup_volume_cont_pane_ParamLimits

0x4a6c,	// (0x00022e39) mup_volume_cont_pane

0x2680,	// (0x00020a4d) aid_size_cell_pinb

0x268a,	// (0x00020a57) aid_size_list_pinb

0x589e,	// (0x00023c6b) mup2_volume_cont_pane_ParamLimits

0x589e,	// (0x00023c6b) mup2_volume_cont_pane

0x17bb,	// (0x0001fb88) mup2_volume_cont_pane_g1_ParamLimits

0x17bb,	// (0x0001fb88) mup2_volume_cont_pane_g1

0x0cd2,	// (0x0001f09f) aid_size_cell_touch_ParamLimits

0x0cd2,	// (0x0001f09f) aid_size_cell_touch

0x0f5a,	// (0x0001f327) touch_pane_ParamLimits

0x0f5a,	// (0x0001f327) touch_pane

0x0f50,	// (0x0001f31d) main_rss2_pane

0xc495,	// (0x0002a862) listscroll_rss2_pane

0xc49e,	// (0x0002a86b) rss2_navigation_pane

0xc4a6,	// (0x0002a873) list_rss2_pane

0xacba,	// (0x00029087) scroll_pane_cp22

0xc4ae,	// (0x0002a87b) rss2_navigation_pane_g1

0xc4b7,	// (0x0002a884) rss2_navigation_pane_g2

0xc4bf,	// (0x0002a88c) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0002da6c) rss2_navigation_pane_g

0xc4c7,	// (0x0002a894) rss2_navigation_pane_t1

0x59ac,	// (0x00023d79) rss2_list_single_pane_ParamLimits

0x59ac,	// (0x00023d79) rss2_list_single_pane

0xc4d5,	// (0x0002a8a2) rss2_list_single_pane_t2

0xc4e3,	// (0x0002a8b0) rss2_list_single_pane_t3_ParamLimits

0xc4e3,	// (0x0002a8b0) rss2_list_single_pane_t3

0xc500,	// (0x0002a8cd) rss2_list_single_pane_t4

0x435a,	// (0x00022727) smil_status_pane_g1

0x13c2,	// (0x0001f78f) main_image2_pane_ParamLimits

0x13c2,	// (0x0001f78f) main_image2_pane

0x1619,	// (0x0001f9e6) main_camera2_pane_g9_ParamLimits

0x1619,	// (0x0001f9e6) main_camera2_pane_g9

0x166d,	// (0x0001fa3a) main_camera2_pane_t5_ParamLimits

0x166d,	// (0x0001fa3a) main_camera2_pane_t5

0x167f,	// (0x0001fa4c) main_camera2_pane_t6_ParamLimits

0x167f,	// (0x0001fa4c) main_camera2_pane_t6

0x59e0,	// (0x00023dad) main_image2_pane_g1_ParamLimits

0x59e0,	// (0x00023dad) main_image2_pane_g1

0x506e,	// (0x0002343b) smil2_video_pane_ParamLimits

0x506e,	// (0x0002343b) smil2_video_pane

0x0d06,	// (0x0001f0d3) aid_zoom_text_primary_cp

0x0ef7,	// (0x0001f2c4) popup_preview_fixed_window

0xa59e,	// (0x0002896b) im_reading_pane_g1

0x1563,	// (0x0001f930) cams2_bc_adjust_pane_cp_ParamLimits

0x1563,	// (0x0001f930) cams2_bc_adjust_pane_cp

0x16af,	// (0x0001fa7c) cams2_bc_adjust_pane_ParamLimits

0x16af,	// (0x0001fa7c) cams2_bc_adjust_pane

0xd6be,	// (0x0002ba8b) cams2_bc_adjust_pane_g1

0x17f4,	// (0x0001fbc1) cams2_slider_pane

0x17fd,	// (0x0001fbca) cams2_slider_pane_g1

0x1806,	// (0x0001fbd3) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0002da73) cams2_slider_pane_g

0x0fcb,	// (0x0001f398) calc_display_pane_ParamLimits

0x0fe9,	// (0x0001f3b6) calc_paper_pane_ParamLimits

0x1005,	// (0x0001f3d2) grid_calc_pane_ParamLimits

0x1316,	// (0x0001f6e3) popup_clock_digital_window_t1_ParamLimits

0xb169,	// (0x00029536) main_image_pane_t1

0x0fb1,	// (0x0001f37e) aid_size_cell_calc_ParamLimits

0x0fb1,	// (0x0001f37e) aid_size_cell_calc

0x13f3,	// (0x0001f7c0) popup_blid_sat_info2_window_ParamLimits

0x13f3,	// (0x0001f7c0) popup_blid_sat_info2_window

0xc516,	// (0x0002a8e3) aid_size_cell_blid

0xc51e,	// (0x0002a8eb) bg_popup_window_pane_cp07

0xc541,	// (0x0002a90e) grid_popup_blid_pane

0xc54b,	// (0x0002a918) heading_pane_cp05_ParamLimits

0xc54b,	// (0x0002a918) heading_pane_cp05

0xc615,	// (0x0002a9e2) cell_popup_blid_pane_ParamLimits

0xc615,	// (0x0002a9e2) cell_popup_blid_pane

0xc639,	// (0x0002aa06) cell_popup_blid_pane_g1

0xc641,	// (0x0002aa0e) cell_popup_blid_pane_t1

0x5864,	// (0x00023c31) mup2_indicator_pane_ParamLimits

0x5864,	// (0x00023c31) mup2_indicator_pane

0xa4a5,	// (0x00028872) mup2_visualizer_osc_pane

0xc3f7,	// (0x0002a7c4) mup2_visualizer_spec_pane_ParamLimits

0xc3f7,	// (0x0002a7c4) mup2_visualizer_spec_pane

0x59ec,	// (0x00023db9) mup2_spec_half_pane

0x59f5,	// (0x00023dc2) mup2_spec_half_pane_cp

0x59ff,	// (0x00023dcc) mup2_spec_bar_pane_ParamLimits

0x59ff,	// (0x00023dcc) mup2_spec_bar_pane

0xc38c,	// (0x0002a759) mup2_spec_bar_pane_g1

0xc396,	// (0x0002a763) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0002d9e6) mup2_spec_bar_pane_g

0x5a1e,	// (0x00023deb) mup2_osc_middle_pane

0xc3a8,	// (0x0002a775) mup2_visualizer_osc_pane_g1

0x9b75,	// (0x00027f42) popup_number_entry_window_t1_ParamLimits

0x9b88,	// (0x00027f55) popup_number_entry_window_t2_ParamLimits

0x9b9a,	// (0x00027f67) popup_number_entry_window_t3_ParamLimits

0x25ba,	// (0x00020987) popup_number_entry_window_t5_ParamLimits

0x25ba,	// (0x00020987) popup_number_entry_window_t5

0xf0ca,	// (0x0002d497) popup_number_entry_window_t_ParamLimits

0x9bac,	// (0x00027f79) text_title_cp2_ParamLimits

0x1355,	// (0x0001f722) aid_hotspot_pointer_text2_pane

0x139f,	// (0x0001f76c) main_viewer_pane_g9_ParamLimits

0x139f,	// (0x0001f76c) main_viewer_pane_g9

0xa7d7,	// (0x00028ba4) cale_month_pane_t1_ParamLimits

0xa814,	// (0x00028be1) bg_cale_pane_ParamLimits

0xa82c,	// (0x00028bf9) list_cale_pane_ParamLimits

0xa83d,	// (0x00028c0a) listscroll_cale_day_pane_t1

0xa84f,	// (0x00028c1c) scroll_pane_cp09_ParamLimits

0x4aab,	// (0x00022e78) main_mup_eq_pane_t1_ParamLimits

0x4aab,	// (0x00022e78) main_mup_eq_pane_t1

0x4ac5,	// (0x00022e92) main_mup_eq_pane_t2_ParamLimits

0x4ac5,	// (0x00022e92) main_mup_eq_pane_t2

0x4add,	// (0x00022eaa) main_mup_eq_pane_t3_ParamLimits

0x4add,	// (0x00022eaa) main_mup_eq_pane_t3

0x4af5,	// (0x00022ec2) main_mup_eq_pane_t4_ParamLimits

0x4af5,	// (0x00022ec2) main_mup_eq_pane_t4

0x4b0d,	// (0x00022eda) main_mup_eq_pane_t5_ParamLimits

0x4b0d,	// (0x00022eda) main_mup_eq_pane_t5

0x4b25,	// (0x00022ef2) main_mup_eq_pane_t6_ParamLimits

0x4b25,	// (0x00022ef2) main_mup_eq_pane_t6

0x4b39,	// (0x00022f06) main_mup_eq_pane_t7_ParamLimits

0x4b39,	// (0x00022f06) main_mup_eq_pane_t7

0x4b4d,	// (0x00022f1a) main_mup_eq_pane_t8_ParamLimits

0x4b4d,	// (0x00022f1a) main_mup_eq_pane_t8

0x4b63,	// (0x00022f30) main_mup_eq_pane_t9_ParamLimits

0x4b63,	// (0x00022f30) main_mup_eq_pane_t9

0x4b7b,	// (0x00022f48) main_mup_eq_pane_t10_ParamLimits

0x4b7b,	// (0x00022f48) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002d822) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002d822) main_mup_eq_pane_t

0x4c38,	// (0x00023005) mup_equalizer_pane_cp5_ParamLimits

0x4c4e,	// (0x0002301b) mup_equalizer_pane_cp6_ParamLimits

0x4c66,	// (0x00023033) mup_equalizer_pane_cp7_ParamLimits

0x0f50,	// (0x0001f31d) main_gallery_pane

0xc3b1,	// (0x0002a77e) smil2_volume_pane

0xc3b9,	// (0x0002a786) smil_status_volume_pane_g1_ParamLimits

0xc3cc,	// (0x0002a799) smil_status_volume_pane_g2_ParamLimits

0x1533,	// (0x0001f900) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0002d9eb) smil_status_volume_pane_g_ParamLimits

0xc51e,	// (0x0002a8eb) bg_popup_window_pane_cp07_ParamLimits

0xc52c,	// (0x0002a8f9) blid_firmament_pane

0x5a27,	// (0x00023df4) aid_size_cell_gallery_ParamLimits

0x5a27,	// (0x00023df4) aid_size_cell_gallery

0x5a35,	// (0x00023e02) grid_gallery_pane_ParamLimits

0x5a35,	// (0x00023e02) grid_gallery_pane

0x5a45,	// (0x00023e12) cell_gallery_pane_ParamLimits

0x5a45,	// (0x00023e12) cell_gallery_pane

0xc64f,	// (0x0002aa1c) bg_cell_gallery_focus_pane_ParamLimits

0xc64f,	// (0x0002aa1c) bg_cell_gallery_focus_pane

0xc661,	// (0x0002aa2e) cell_gallery_pane_g1_ParamLimits

0xc661,	// (0x0002aa2e) cell_gallery_pane_g1

0x5a93,	// (0x00023e60) cell_gallery_pane_g2_ParamLimits

0x5a93,	// (0x00023e60) cell_gallery_pane_g2

0x5aa0,	// (0x00023e6d) cell_gallery_pane_g3_ParamLimits

0x5aa0,	// (0x00023e6d) cell_gallery_pane_g3

0xc66d,	// (0x0002aa3a) cell_gallery_pane_g4_ParamLimits

0xc66d,	// (0x0002aa3a) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0002da99) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0002da99) cell_gallery_pane_g

0xc679,	// (0x0002aa46) bg_cell_gallery_focus_pane_g1

0xc681,	// (0x0002aa4e) bg_cell_gallery_focus_pane_g2

0xc689,	// (0x0002aa56) bg_cell_gallery_focus_pane_g3

0xc691,	// (0x0002aa5e) bg_cell_gallery_focus_pane_g4

0xc699,	// (0x0002aa66) bg_cell_gallery_focus_pane_g5

0xc6a1,	// (0x0002aa6e) bg_cell_gallery_focus_pane_g6

0xc6a9,	// (0x0002aa76) bg_cell_gallery_focus_pane_g7

0xc6b1,	// (0x0002aa7e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0002daa2) bg_cell_gallery_focus_pane_g

0xc6b9,	// (0x0002aa86) aid_firma_cardinal

0xc6cd,	// (0x0002aa9a) blid_firmament_pane_t1

0xc6e4,	// (0x0002aab1) blid_firmament_pane_t2

0xc6fb,	// (0x0002aac8) blid_firmament_pane_t3

0xc712,	// (0x0002aadf) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0002dab3) blid_firmament_pane_t

0xc729,	// (0x0002aaf6) blid_sat_info_pane

0xc739,	// (0x0002ab06) blid_sat_info_pane_g1

0xc739,	// (0x0002ab06) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0002dabc) blid_sat_info_pane_g

0xc743,	// (0x0002ab10) blid_sat_info_pane_t1

0xc751,	// (0x0002ab1e) smil2_volume_content_pane

0xc75a,	// (0x0002ab27) smil2_volume_pane_g1

0xc762,	// (0x0002ab2f) smil2_volume_content_pane_g1

0xc76b,	// (0x0002ab38) smil2_volume_content_pane_g2

0xc774,	// (0x0002ab41) smil2_volume_content_pane_g3

0xc77d,	// (0x0002ab4a) smil2_volume_content_pane_g4

0xc786,	// (0x0002ab53) smil2_volume_content_pane_g5

0xc78f,	// (0x0002ab5c) smil2_volume_content_pane_g6

0xc798,	// (0x0002ab65) smil2_volume_content_pane_g7

0xc7a1,	// (0x0002ab6e) smil2_volume_content_pane_g8

0xc7aa,	// (0x0002ab77) smil2_volume_content_pane_g9

0xc7b3,	// (0x0002ab80) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0002dac1) smil2_volume_content_pane_g

0x2bf7,	// (0x00020fc4) cale_week_day_heading_pane_t1_ParamLimits

0x2c32,	// (0x00020fff) cale_week_day_heading_pane_t2_ParamLimits

0x2c6d,	// (0x0002103a) cale_week_day_heading_pane_t3_ParamLimits

0x2ca8,	// (0x00021075) cale_week_day_heading_pane_t4_ParamLimits

0x2ce3,	// (0x000210b0) cale_week_day_heading_pane_t5_ParamLimits

0x2d1e,	// (0x000210eb) cale_week_day_heading_pane_t6_ParamLimits

0x2d59,	// (0x00021126) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0002d59e) cale_week_day_heading_pane_t_ParamLimits

0xa44a,	// (0x00028817) bg_cale_side_pane_ParamLimits

0x115c,	// (0x0001f529) cale_week_time_pane_t1_ParamLimits

0x1176,	// (0x0001f543) cale_week_time_pane_t2_ParamLimits

0x1190,	// (0x0001f55d) cale_week_time_pane_t3_ParamLimits

0x11aa,	// (0x0001f577) cale_week_time_pane_t4_ParamLimits

0x11c4,	// (0x0001f591) cale_week_time_pane_t5_ParamLimits

0x11de,	// (0x0001f5ab) cale_week_time_pane_t6_ParamLimits

0x11fe,	// (0x0001f5cb) cale_week_time_pane_t7_ParamLimits

0x1222,	// (0x0001f5ef) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0002d5ad) cale_week_time_pane_t_ParamLimits

0x2d94,	// (0x00021161) cell_cale_week_pane_g2_ParamLimits

0xa44a,	// (0x00028817) bg_cale_side_pane_cp01_ParamLimits

0x4157,	// (0x00022524) cale_month_week_pane_t1_ParamLimits

0x4170,	// (0x0002253d) cale_month_week_pane_t2_ParamLimits

0x4189,	// (0x00022556) cale_month_week_pane_t3_ParamLimits

0x41a2,	// (0x0002256f) cale_month_week_pane_t4_ParamLimits

0x41bd,	// (0x0002258a) cale_month_week_pane_t5_ParamLimits

0x41de,	// (0x000225ab) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002d682) cale_month_week_pane_t_ParamLimits

0x1250,	// (0x0001f61d) cell_cale_month_pane_g1_ParamLimits

0x0f50,	// (0x0001f31d) main_cale_event_viewer_pane

0x9b4b,	// (0x00027f18) listscroll_cale_event_viewer_pane

0xc7bc,	// (0x0002ab89) list_cale_ev_pane

0xc7c4,	// (0x0002ab91) scroll_pane_cp023

0xc7d0,	// (0x0002ab9d) field_cale_ev_pane_ParamLimits

0xc7d0,	// (0x0002ab9d) field_cale_ev_pane

0xc7ee,	// (0x0002abbb) field_cale_ev_content_pane_ParamLimits

0xc7ee,	// (0x0002abbb) field_cale_ev_content_pane

0xc7fa,	// (0x0002abc7) field_cale_ev_pane_g1_ParamLimits

0xc7fa,	// (0x0002abc7) field_cale_ev_pane_g1

0xc806,	// (0x0002abd3) field_cale_ev_pane_g2_ParamLimits

0xc806,	// (0x0002abd3) field_cale_ev_pane_g2

0xc81e,	// (0x0002abeb) field_cale_ev_pane_g3_ParamLimits

0xc81e,	// (0x0002abeb) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0002dad6) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0002dad6) field_cale_ev_pane_g

0xc836,	// (0x0002ac03) field_cale_ev_pane_t1_ParamLimits

0xc836,	// (0x0002ac03) field_cale_ev_pane_t1

0xa3af,	// (0x0002877c) field_cale_ev_content_pane_t1_ParamLimits

0xa3af,	// (0x0002877c) field_cale_ev_content_pane_t1

0xb04f,	// (0x0002941c) bg_button_pane_cp01

0x2980,	// (0x00020d4d) listscroll_cale_week_pane_ParamLimits

0xa3f5,	// (0x000287c2) popup_toolbar_window_cp01

0xa41b,	// (0x000287e8) listscroll_cale_week_pane_t1_ParamLimits

0x2980,	// (0x00020d4d) listscroll_cale_day_pane_ParamLimits

0xa3f5,	// (0x000287c2) popup_toolbar_window_cp02

0xa83d,	// (0x00028c0a) listscroll_cale_day_pane_t1_ParamLimits

0x2980,	// (0x00020d4d) main_cale_month_pane_ParamLimits

0x14f6,	// (0x0001f8c3) popup_toolbar_window_cp03_ParamLimits

0x14f6,	// (0x0001f8c3) popup_toolbar_window_cp03

0x4f84,	// (0x00023351) main_image_pane_g2_ParamLimits

0x4f84,	// (0x00023351) main_image_pane_g2

0x4f90,	// (0x0002335d) main_image_pane_g3_ParamLimits

0x4f90,	// (0x0002335d) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002d8b4) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002d8b4) main_image_pane_g

0xb169,	// (0x00029536) main_image_pane_t1_ParamLimits

0x4f9c,	// (0x00023369) main_image_pane_t2_ParamLimits

0x4f9c,	// (0x00023369) main_image_pane_t2

0x4fae,	// (0x0002337b) main_image_pane_t3_ParamLimits

0x4fae,	// (0x0002337b) main_image_pane_t3

0x4fc0,	// (0x0002338d) main_image_pane_t4_ParamLimits

0x4fc0,	// (0x0002338d) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002d8bb) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002d8bb) main_image_pane_t

0x4fd2,	// (0x0002339f) popup_image_details_window_cp01

0x4fdc,	// (0x000233a9) popup_toobar_trans_pane_cp01_ParamLimits

0x4fdc,	// (0x000233a9) popup_toobar_trans_pane_cp01

0x1446,	// (0x0001f813) popup_image_details_window_ParamLimits

0x1446,	// (0x0001f813) popup_image_details_window

0x1454,	// (0x0001f821) popup_image_focus_window

0x1555,	// (0x0001f922) camera2_autofocus_pane_ParamLimits

0x1555,	// (0x0001f922) camera2_autofocus_pane

0x9b4b,	// (0x00027f18) bg_popup_sub_pane_cp06

0xc84d,	// (0x0002ac1a) popup_image_focus_window_g1

0xc855,	// (0x0002ac22) popup_image_focus_window_g2

0xc85d,	// (0x0002ac2a) popup_image_focus_window_g3

0xc865,	// (0x0002ac32) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0002dadd) popup_image_focus_window_g

0xc86d,	// (0x0002ac3a) popup_image_focus_window_t1

0xc87b,	// (0x0002ac48) popup_image_focus_window_t2

0xc88b,	// (0x0002ac58) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0002dae6) popup_image_focus_window_t

0xc899,	// (0x0002ac66) camera2_autofocus_pane_g1

0xa3a1,	// (0x0002876e) bg_tb_trans_pane_cp01

0xc8a7,	// (0x0002ac74) popup_image_details_window_g1

0xc8ba,	// (0x0002ac87) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0002daf8) popup_image_details_window_g

0xc8e3,	// (0x0002acb0) popup_image_details_window_t1

0xc8f5,	// (0x0002acc2) popup_image_details_window_t2

0xc90e,	// (0x0002acdb) popup_image_details_window_t3

0xc922,	// (0x0002acef) popup_image_details_window_t4

0xc93d,	// (0x0002ad0a) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0002daff) popup_image_details_window_t

0xa280,	// (0x0002864d) bg_calc_paper_pane_ParamLimits

0x0f50,	// (0x0001f31d) grid_highlight_pane_cp013

0x1031,	// (0x0001f3fe) list_calc_pane_ParamLimits

0x1043,	// (0x0001f410) scroll_pane_cp024

0xa294,	// (0x00028661) bg_calc_display_pane_ParamLimits

0x104b,	// (0x0001f418) calc_display_pane_t1_ParamLimits

0x1060,	// (0x0001f42d) calc_display_pane_t2_ParamLimits

0x1075,	// (0x0001f442) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0002d51e) calc_display_pane_t_ParamLimits

0x10de,	// (0x0001f4ab) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0002d53b) cell_calc_pane_g

0x10e7,	// (0x0001f4b4) cell_calc_pane_t1

0xa2f3,	// (0x000286c0) grid_highlight_pane_cp02_ParamLimits

0xa309,	// (0x000286d6) toolbar_button_pane_cp01_ParamLimits

0xa309,	// (0x000286d6) toolbar_button_pane_cp01

0xb1ae,	// (0x0002957b) temp_image_control_pane_ParamLimits

0xb1ae,	// (0x0002957b) temp_image_control_pane

0x13c2,	// (0x0001f78f) main_mp3_pane

0xc957,	// (0x0002ad24) temp_image_control_pane_g1_ParamLimits

0xc957,	// (0x0002ad24) temp_image_control_pane_g1

0xc965,	// (0x0002ad32) temp_image_control_pane_g2_ParamLimits

0xc965,	// (0x0002ad32) temp_image_control_pane_g2

0xc977,	// (0x0002ad44) temp_image_control_pane_g3_ParamLimits

0xc977,	// (0x0002ad44) temp_image_control_pane_g3

0x5add,	// (0x00023eaa) temp_image_control_pane_g4_ParamLimits

0x5add,	// (0x00023eaa) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0002db0a) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0002db0a) temp_image_control_pane_g

0xc957,	// (0x0002ad24) main_mp3_pane_g1

0x5aee,	// (0x00023ebb) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0002db13) main_mp3_pane_g

0xc9ba,	// (0x0002ad87) main_mp3_pane_t1

0xa4ad,	// (0x0002887a) main_camera_pane_g8_ParamLimits

0xa4ad,	// (0x0002887a) main_camera_pane_g8

0x3014,	// (0x000213e1) main_video_pane_g7_ParamLimits

0x3014,	// (0x000213e1) main_video_pane_g7

0x169d,	// (0x0001fa6a) main_camera2_pane_t7_ParamLimits

0x169d,	// (0x0001fa6a) main_camera2_pane_t7

0xa5f5,	// (0x000289c2) scroll_pane_cp025_ParamLimits

0xa5f5,	// (0x000289c2) scroll_pane_cp025

0xa609,	// (0x000289d6) scroll_pane_cp026_ParamLimits

0xa609,	// (0x000289d6) scroll_pane_cp026

0xa618,	// (0x000289e5) wml_content_pane_ParamLimits

0x0f50,	// (0x0001f31d) main_touch_calib_pane

0x5b92,	// (0x00023f5f) main_touch_calib_pane_g1

0x5b9e,	// (0x00023f6b) main_touch_calib_pane_g2

0x5baa,	// (0x00023f77) main_touch_calib_pane_g3

0x5bb6,	// (0x00023f83) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0002db31) main_touch_calib_pane_g

0x5bc2,	// (0x00023f8f) main_touch_calib_pane_t1

0x5bdb,	// (0x00023fa8) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0002db3a) main_touch_calib_pane_t

0xad89,	// (0x00029156) mup_progress_pane_cp02

0xadbe,	// (0x0002918b) navi_pane_g1

0xae79,	// (0x00029246) navi_pane_mp_t3

0x13c2,	// (0x0001f78f) main_mp3_pane_ParamLimits

0x550f,	// (0x000238dc) navi_pane_ParamLimits

0xc957,	// (0x0002ad24) main_mp3_pane_g1_ParamLimits

0x5aee,	// (0x00023ebb) main_mp3_pane_g2_ParamLimits

0x5afa,	// (0x00023ec7) main_mp3_pane_g3_ParamLimits

0x5afa,	// (0x00023ec7) main_mp3_pane_g3

0x5b06,	// (0x00023ed3) main_mp3_pane_g4_ParamLimits

0x5b06,	// (0x00023ed3) main_mp3_pane_g4

0xc987,	// (0x0002ad54) main_mp3_pane_g5_ParamLimits

0xc987,	// (0x0002ad54) main_mp3_pane_g5

0xc995,	// (0x0002ad62) main_mp3_pane_g6_ParamLimits

0xc995,	// (0x0002ad62) main_mp3_pane_g6

0xc9a2,	// (0x0002ad6f) main_mp3_pane_g7_ParamLimits

0xc9a2,	// (0x0002ad6f) main_mp3_pane_g7

0xc9ae,	// (0x0002ad7b) main_mp3_pane_g8_ParamLimits

0xc9ae,	// (0x0002ad7b) main_mp3_pane_g8

0xf746,	// (0x0002db13) main_mp3_pane_g_ParamLimits

0x5b12,	// (0x00023edf) main_mp3_pane_t2

0x5b22,	// (0x00023eef) main_mp3_pane_t3

0xc9c8,	// (0x0002ad95) main_mp3_pane_t4

0xc9d6,	// (0x0002ada3) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0002db24) main_mp3_pane_t

0xc9e4,	// (0x0002adb1) mup_progress_pane_cp01

0x0d06,	// (0x0001f0d3) aid_zoom_text_secondary2

0xc7bc,	// (0x0002ab89) list_cale_ev2_pane

0xc7c4,	// (0x0002ab91) scroll_pane_cp023_ParamLimits

0x5c36,	// (0x00024003) field_cale_ev2_pane_ParamLimits

0x5c36,	// (0x00024003) field_cale_ev2_pane

0xc9ec,	// (0x0002adb9) field_cale_ev2_pane_g1_ParamLimits

0xc9ec,	// (0x0002adb9) field_cale_ev2_pane_g1

0xc9f8,	// (0x0002adc5) field_cale_ev2_pane_g2_ParamLimits

0xc9f8,	// (0x0002adc5) field_cale_ev2_pane_g2

0xca10,	// (0x0002addd) field_cale_ev2_pane_g3_ParamLimits

0xca10,	// (0x0002addd) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0002db45) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0002db45) field_cale_ev2_pane_g

0xca34,	// (0x0002ae01) field_cale_ev2_pane_t1_ParamLimits

0xca34,	// (0x0002ae01) field_cale_ev2_pane_t1

0xca4b,	// (0x0002ae18) field_cale_ev2_pane_t2_ParamLimits

0xca4b,	// (0x0002ae18) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0002db4e) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0002db4e) field_cale_ev2_pane_t

0x4e65,	// (0x00023232) main_postcard_pane_g5_ParamLimits

0x4e65,	// (0x00023232) main_postcard_pane_g5

0x4e73,	// (0x00023240) main_postcard_pane_g6_ParamLimits

0x4e73,	// (0x00023240) main_postcard_pane_g6

0x2e5e,	// (0x0002122b) camera2_autofocus_pane_cp_ParamLimits

0x2e5e,	// (0x0002122b) camera2_autofocus_pane_cp

0x13c2,	// (0x0001f78f) main_mup3_pane

0x5c80,	// (0x0002404d) main_mup3_pane_g1_ParamLimits

0x5c80,	// (0x0002404d) main_mup3_pane_g1

0x5ca1,	// (0x0002406e) main_mup3_pane_g2_ParamLimits

0x5ca1,	// (0x0002406e) main_mup3_pane_g2

0x5d1b,	// (0x000240e8) main_mup3_pane_g3_ParamLimits

0x5d1b,	// (0x000240e8) main_mup3_pane_g3

0x5d5e,	// (0x0002412b) main_mup3_pane_g4_ParamLimits

0x5d5e,	// (0x0002412b) main_mup3_pane_g4

0x5da1,	// (0x0002416e) main_mup3_pane_g5_ParamLimits

0x5da1,	// (0x0002416e) main_mup3_pane_g5

0x5de4,	// (0x000241b1) main_mup3_pane_g6_ParamLimits

0x5de4,	// (0x000241b1) main_mup3_pane_g6

0xca60,	// (0x0002ae2d) main_mup3_pane_g7_ParamLimits

0xca60,	// (0x0002ae2d) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0002db5e) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0002db5e) main_mup3_pane_g

0x5e5a,	// (0x00024227) main_mup3_pane_t1_ParamLimits

0x5e5a,	// (0x00024227) main_mup3_pane_t1

0x5ec9,	// (0x00024296) main_mup3_pane_t2_ParamLimits

0x5ec9,	// (0x00024296) main_mup3_pane_t2

0x5f92,	// (0x0002435f) main_mup3_pane_t4_ParamLimits

0x5f92,	// (0x0002435f) main_mup3_pane_t4

0x5fe0,	// (0x000243ad) main_mup3_pane_t5_ParamLimits

0x5fe0,	// (0x000243ad) main_mup3_pane_t5

0x6090,	// (0x0002445d) main_mup3_pane_t6_ParamLimits

0x6090,	// (0x0002445d) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0002db6f) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0002db6f) main_mup3_pane_t

0x613c,	// (0x00024509) mup3_progress_pane_ParamLimits

0x613c,	// (0x00024509) mup3_progress_pane

0x61b0,	// (0x0002457d) popup_mup3_control_window_ParamLimits

0x61b0,	// (0x0002457d) popup_mup3_control_window

0xca6e,	// (0x0002ae3b) popup_mup3_text_window

0x61c9,	// (0x00024596) mup3_progress_pane_t1

0x61e8,	// (0x000245b5) mup3_progress_pane_t2

0xca76,	// (0x0002ae43) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0002db7c) mup3_progress_pane_t

0xca93,	// (0x0002ae60) mup_progress_pane_cp03

0x9b4b,	// (0x00027f18) bg_tb_trans_pane_cp04

0x6207,	// (0x000245d4) mup3_volume_pane

0x620f,	// (0x000245dc) popup_mup3_control_window_g1

0x6218,	// (0x000245e5) mup3_volume_pane_g1

0x6221,	// (0x000245ee) mup3_volume_pane_g2

0x622a,	// (0x000245f7) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0002db83) mup3_volume_pane_g

0x9b4b,	// (0x00027f18) bg_tb_trans_pane_cp03

0xcaa3,	// (0x0002ae70) popup_mup3_text_window_g1

0xcaab,	// (0x0002ae78) popup_mup3_text_window_t1

0xa2dc,	// (0x000286a9) list_calc_item_pane_g1_ParamLimits

0xc48c,	// (0x0002a859) mup_volume_pane_cp_g1

0x5bf4,	// (0x00023fc1) main_touch_calib_pane_t3

0x5c0a,	// (0x00023fd7) main_touch_calib_pane_t4

0x5c20,	// (0x00023fed) main_touch_calib_pane_t5

0x0cbe,	// (0x0001f08b) aid_cell_size_toolbar2

0x0cc6,	// (0x0001f093) aid_popup3_width_pane

0x0d06,	// (0x0001f0d3) aid_zoom_text_msg_primary

0x2e3d,	// (0x0002120a) vorec_t7

0xa2a0,	// (0x0002866d) bg_calc_paper_pane_g1_ParamLimits

0xa2ac,	// (0x00028679) bg_calc_paper_pane_g2_ParamLimits

0xa2b8,	// (0x00028685) bg_calc_paper_pane_g3_ParamLimits

0xa2c4,	// (0x00028691) bg_calc_paper_pane_g4_ParamLimits

0xa2d0,	// (0x0002869d) bg_calc_paper_pane_g5_ParamLimits

0x2841,	// (0x00020c0e) bg_calc_paper_pane_g6_ParamLimits

0x2852,	// (0x00020c1f) bg_calc_paper_pane_g7_ParamLimits

0x2863,	// (0x00020c30) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0002d525) bg_calc_paper_pane_g_ParamLimits

0x2874,	// (0x00020c41) calc_bg_paper_pane_g9_ParamLimits

0x2f45,	// (0x00021312) image_qvga_pane_ParamLimits

0x2f45,	// (0x00021312) image_qvga_pane

0xa1c3,	// (0x00028590) bg_popup_sub_pane_cp04_ParamLimits

0xb0e5,	// (0x000294b2) popup_mup_playback_window_g1_ParamLimits

0xb0f1,	// (0x000294be) popup_mup_playback_window_t1_ParamLimits

0xb106,	// (0x000294d3) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002d8af) popup_mup_playback_window_t_ParamLimits

0x5764,	// (0x00023b31) main_mup2_pane_g3_ParamLimits

0x5764,	// (0x00023b31) main_mup2_pane_g3

0x3312,	// (0x000216df) popup_toolbar_window_cp04

0xb4fb,	// (0x000298c8) popup_call2_audio_second_window_g3_ParamLimits

0xb4fb,	// (0x000298c8) popup_call2_audio_second_window_g3

0xb905,	// (0x00029cd2) popup_call2_audio_first_window_g4_ParamLimits

0xb905,	// (0x00029cd2) popup_call2_audio_first_window_g4

0xbf84,	// (0x0002a351) popup_call2_audio_in_window_g4_ParamLimits

0xbf84,	// (0x0002a351) popup_call2_audio_in_window_g4

0x4f77,	// (0x00023344) aid_area_sk_bg_cut_ParamLimits

0x4f77,	// (0x00023344) aid_area_sk_bg_cut

0xb11b,	// (0x000294e8) aid_area_sk_bg_cut_2_ParamLimits

0xb11b,	// (0x000294e8) aid_area_sk_bg_cut_2

0x5a83,	// (0x00023e50) aid_placing_details_win

0x5a8b,	// (0x00023e58) aid_placing_details_win_2

0xc899,	// (0x0002ac66) camera2_autofocus_pane_g1_ParamLimits

0x0ee8,	// (0x0001f2b5) popup_fixed_preview_cale_window_ParamLimits

0x0ee8,	// (0x0001f2b5) popup_fixed_preview_cale_window

0xaef7,	// (0x000292c4) navi_slider_pane_g3

0xaf00,	// (0x000292cd) navi_slider_pane_g4

0xaf09,	// (0x000292d6) navi_slider_pane_g5

0xaef7,	// (0x000292c4) navi_slider_pane_g6

0x133c,	// (0x0001f709) navi_slider_pane_g7

0xb01c,	// (0x000293e9) mup_scale_pane_g3

0xb025,	// (0x000293f2) mup_scale_pane_g4

0xb02e,	// (0x000293fb) mup_scale_pane_g5

0x4c7e,	// (0x0002304b) mup_scale_pane_g6

0x4c87,	// (0x00023054) mup_scale_pane_g7

0xaef7,	// (0x000292c4) cams2_slider_pane_g3

0xc50e,	// (0x0002a8db) cams2_slider_pane_g4

0x180f,	// (0x0001fbdc) cams2_slider_pane_g5

0xaef7,	// (0x000292c4) cams2_slider_pane_g6

0x1817,	// (0x0001fbe4) cams2_slider_pane_g7

0xc739,	// (0x0002ab06) camera2_autofocus_pane_cp_g1

0xc325,	// (0x0002a6f2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc325,	// (0x0002a6f2) bg_popup_preview_window_pane_cp02

0xcab9,	// (0x0002ae86) list_fp_cale_pane_ParamLimits

0xcab9,	// (0x0002ae86) list_fp_cale_pane

0xcac5,	// (0x0002ae92) popup_fixed_preview_cale_window_t1_ParamLimits

0xcac5,	// (0x0002ae92) popup_fixed_preview_cale_window_t1

0x6233,	// (0x00024600) popup_fixed_preview_cale_window_t2_ParamLimits

0x6233,	// (0x00024600) popup_fixed_preview_cale_window_t2

0x6248,	// (0x00024615) popup_fixed_preview_cale_window_t3_ParamLimits

0x6248,	// (0x00024615) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0002db8a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0002db8a) popup_fixed_preview_cale_window_t

0x625d,	// (0x0002462a) list_single_fp_cale_pane_ParamLimits

0x625d,	// (0x0002462a) list_single_fp_cale_pane

0xcae3,	// (0x0002aeb0) list_single_fp_cale_pane_g1_ParamLimits

0xcae3,	// (0x0002aeb0) list_single_fp_cale_pane_g1

0xcaef,	// (0x0002aebc) list_single_fp_cale_pane_g2_ParamLimits

0xcaef,	// (0x0002aebc) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0002db91) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0002db91) list_single_fp_cale_pane_g

0xcb08,	// (0x0002aed5) list_single_fp_cale_pane_t1_ParamLimits

0xcb08,	// (0x0002aed5) list_single_fp_cale_pane_t1

0xcb1a,	// (0x0002aee7) list_single_fp_cale_pane_t2_ParamLimits

0xcb1a,	// (0x0002aee7) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0002db98) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0002db98) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f50,	// (0x0001f31d) main_dialer_pane

0x6270,	// (0x0002463d) aid_cell_size_keypad

0x627a,	// (0x00024647) dialer_ne_pane

0x6284,	// (0x00024651) grid_dialer_command_1_pane

0x628c,	// (0x00024659) grid_dialer_command_2_pane

0x6294,	// (0x00024661) grid_dialer_keypad_pane

0x62a8,	// (0x00024675) bg_popup_call_pane_cp06_ParamLimits

0x62a8,	// (0x00024675) bg_popup_call_pane_cp06

0x62b4,	// (0x00024681) dialer_ne_clear_pane_ParamLimits

0x62b4,	// (0x00024681) dialer_ne_clear_pane

0xcb4d,	// (0x0002af1a) dialer_ne_pane_g1

0xcb55,	// (0x0002af22) dialer_ne_pane_t1_ParamLimits

0xcb55,	// (0x0002af22) dialer_ne_pane_t1

0x62c0,	// (0x0002468d) dialer_ne_pane_t2_ParamLimits

0x62c0,	// (0x0002468d) dialer_ne_pane_t2

0x62dd,	// (0x000246aa) dialer_ne_pane_t3_ParamLimits

0x62dd,	// (0x000246aa) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0002db9d) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0002db9d) dialer_ne_pane_t

0x6301,	// (0x000246ce) dialer_ne_pane_t3_copy1_ParamLimits

0x6301,	// (0x000246ce) dialer_ne_pane_t3_copy1

0x6325,	// (0x000246f2) cell_dialer_keypad_pane_ParamLimits

0x6325,	// (0x000246f2) cell_dialer_keypad_pane

0x633c,	// (0x00024709) cell_dialer_command_1_pane_ParamLimits

0x633c,	// (0x00024709) cell_dialer_command_1_pane

0x6352,	// (0x0002471f) cell_dialer_command_2_pane_ParamLimits

0x6352,	// (0x0002471f) cell_dialer_command_2_pane

0xcb67,	// (0x0002af34) bg_button_pane_cp02_ParamLimits

0xcb67,	// (0x0002af34) bg_button_pane_cp02

0x6361,	// (0x0002472e) cell_dialer_keypad_pane_g1_ParamLimits

0x6361,	// (0x0002472e) cell_dialer_keypad_pane_g1

0xcb67,	// (0x0002af34) bg_button_pane_cp03_ParamLimits

0xcb67,	// (0x0002af34) bg_button_pane_cp03

0x6376,	// (0x00024743) cell_dialer_command_1_pane_g1_ParamLimits

0x6376,	// (0x00024743) cell_dialer_command_1_pane_g1

0xcb73,	// (0x0002af40) bg_button_pane_cp04

0x638a,	// (0x00024757) cell_dialer_command_2_pane_g1

0xa4a5,	// (0x00028872) bg_button_pane_cp06

0xcb7b,	// (0x0002af48) dialer_ne_clear_pane_g1

0xadca,	// (0x00029197) navi_pane_g2

0xadf8,	// (0x000291c5) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002d7b2) navi_pane_g

0xae87,	// (0x00029254) navi_pane_mv_g2

0xaeae,	// (0x0002927b) navi_pane_mv_g5

0x482c,	// (0x00022bf9) navi_pane_mv_t1

0xa294,	// (0x00028661) main_clock2_pane

0x63c8,	// (0x00024795) main_clock2_list_pane_ParamLimits

0x63c8,	// (0x00024795) main_clock2_list_pane

0x63f2,	// (0x000247bf) main_clock2_pane_t1_ParamLimits

0x63f2,	// (0x000247bf) main_clock2_pane_t1

0x6416,	// (0x000247e3) main_clock2_pane_t2_ParamLimits

0x6416,	// (0x000247e3) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0002dba9) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0002dba9) main_clock2_pane_t

0x6471,	// (0x0002483e) popup_clock_analogue_window_cp03_ParamLimits

0x6471,	// (0x0002483e) popup_clock_analogue_window_cp03

0x648f,	// (0x0002485c) popup_clock_digital_window_cp02_ParamLimits

0x648f,	// (0x0002485c) popup_clock_digital_window_cp02

0x64fc,	// (0x000248c9) main_clock2_list_single_pane_ParamLimits

0x64fc,	// (0x000248c9) main_clock2_list_single_pane

0xa4a5,	// (0x00028872) list_highlight_pane_cp05

0xcbb5,	// (0x0002af82) main_clock2_list_single_pane_t1

0x3312,	// (0x000216df) popup_toolbar_window_cp04_ParamLimits

0x5aad,	// (0x00023e7a) camera2_autofocus_pane_g2_ParamLimits

0x5aad,	// (0x00023e7a) camera2_autofocus_pane_g2

0x5ab9,	// (0x00023e86) camera2_autofocus_pane_g3_ParamLimits

0x5ab9,	// (0x00023e86) camera2_autofocus_pane_g3

0x5ac5,	// (0x00023e92) camera2_autofocus_pane_g4_ParamLimits

0x5ac5,	// (0x00023e92) camera2_autofocus_pane_g4

0x5ad1,	// (0x00023e9e) camera2_autofocus_pane_g5_ParamLimits

0x5ad1,	// (0x00023e9e) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0002daed) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0002daed) camera2_autofocus_pane_g

0x5c60,	// (0x0002402d) camera2_autofocus_pane_cp_g2

0x5c68,	// (0x00024035) camera2_autofocus_pane_cp_g3

0x5c70,	// (0x0002403d) camera2_autofocus_pane_cp_g4

0x5c78,	// (0x00024045) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0002db53) camera2_autofocus_pane_cp_g

0x62a0,	// (0x0002466d) popup_dialer_spcha_window

0x9b4b,	// (0x00027f18) bg_popup_sub_pane_cp07

0xcbc3,	// (0x0002af90) list_spcha_pane

0xcbcb,	// (0x0002af98) list_single_spcha_pane_ParamLimits

0xcbcb,	// (0x0002af98) list_single_spcha_pane

0x9b4b,	// (0x00027f18) list_highlight_pane_cp06

0xcbdc,	// (0x0002afa9) list_single_spcha_pane_t1

0xbd2e,	// (0x0002a0fb) popup_call2_audio_out_window_g4_ParamLimits

0xbd2e,	// (0x0002a0fb) popup_call2_audio_out_window_g4

0x0f50,	// (0x0001f31d) main_imed2_pane

0x145c,	// (0x0001f829) popup_imed_adjust2_window

0x146f,	// (0x0001f83c) popup_imed_trans_window_ParamLimits

0x146f,	// (0x0001f83c) popup_imed_trans_window

0xc577,	// (0x0002a944) popup_blid_sat_info2_window_t1

0xc585,	// (0x0002a952) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0002da82) popup_blid_sat_info2_window_t

0x652e,	// (0x000248fb) aid_size_cell_colour_35

0x6548,	// (0x00024915) aid_size_cell_colour_112

0x655f,	// (0x0002492c) aid_size_cell_effect

0xa3a1,	// (0x0002876e) bg_tb_trans_pane_cp02

0xab8b,	// (0x00028f58) heading_imed_pane

0x6579,	// (0x00024946) listscroll_imed_pane

0xcbea,	// (0x0002afb7) heading_imed_pane_g1

0xcbf2,	// (0x0002afbf) heading_imed_pane_t1

0xcc00,	// (0x0002afcd) grid_imed_colour_35_pane_ParamLimits

0xcc00,	// (0x0002afcd) grid_imed_colour_35_pane

0x6585,	// (0x00024952) grid_imed_effect_pane

0xcc18,	// (0x0002afe5) list_imed_aspect_pane

0x6595,	// (0x00024962) scroll_pane_cp027_ParamLimits

0x6595,	// (0x00024962) scroll_pane_cp027

0x65a1,	// (0x0002496e) cell_imed_effect_pane_ParamLimits

0x65a1,	// (0x0002496e) cell_imed_effect_pane

0xcc20,	// (0x0002afed) cell_imed_colour_pane_ParamLimits

0xcc20,	// (0x0002afed) cell_imed_colour_pane

0xcc62,	// (0x0002b02f) cell_imed_colour_pane_g1_ParamLimits

0xcc62,	// (0x0002b02f) cell_imed_colour_pane_g1

0xcc73,	// (0x0002b040) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc73,	// (0x0002b040) hgihlgiht_grid_pane_cp016

0x65b9,	// (0x00024986) cell_imed_effect_pane_g1

0x65c1,	// (0x0002498e) grid_highlight_pane_cp017

0xcc84,	// (0x0002b051) list_imed_single_pane_ParamLimits

0xcc84,	// (0x0002b051) list_imed_single_pane

0x9b4b,	// (0x00027f18) list_highlight_pane_cp07

0xcc99,	// (0x0002b066) list_imed_aspect_pane_comp1_t1

0xc331,	// (0x0002a6fe) bg_tb_trans_pane_cp05

0xccbb,	// (0x0002b088) popup_imed_adjust2_window_g1

0xcce2,	// (0x0002b0af) popup_imed_adjust2_window_t1

0xccfa,	// (0x0002b0c7) slider_imed_adjust_pane

0xcd0e,	// (0x0002b0db) slider_imed_adjust_pane_g1

0xcd1e,	// (0x0002b0eb) slider_imed_adjust_pane_g2

0xcd2e,	// (0x0002b0fb) slider_imed_adjust_pane_g3

0xcd3f,	// (0x0002b10c) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0002dbc6) slider_imed_adjust_pane_g

0x65ca,	// (0x00024997) aid_size_cell_clipart2

0x65d6,	// (0x000249a3) grid_imed_clipart_pane

0xcd50,	// (0x0002b11d) scroll_pane_cp031

0x65e0,	// (0x000249ad) cell_imed_clipart_pane_ParamLimits

0x65e0,	// (0x000249ad) cell_imed_clipart_pane

0x6603,	// (0x000249d0) cell_imed_clipart_pane_g1

0x9b4b,	// (0x00027f18) grid_highlight_pane_cp014

0x63d4,	// (0x000247a1) main_clock2_pane_g1_ParamLimits

0x63d4,	// (0x000247a1) main_clock2_pane_g1

0x64a7,	// (0x00024874) aid_call2_pane_cp10

0x64b9,	// (0x00024886) aid_call_pane_cp10

0xad29,	// (0x000290f6) popup_clock_analogue_window_cp10_g1

0xad29,	// (0x000290f6) popup_clock_analogue_window_cp10_g2

0x64cb,	// (0x00024898) popup_clock_analogue_window_cp10_g3

0x64cb,	// (0x00024898) popup_clock_analogue_window_cp10_g4

0xad29,	// (0x000290f6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0002dbb4) popup_clock_analogue_window_cp10_g

0x64dd,	// (0x000248aa) popup_clock_analogue_window_cp10_t1

0x1820,	// (0x0001fbed) clock_digital_number_pane_cp10_ParamLimits

0x1820,	// (0x0001fbed) clock_digital_number_pane_cp10

0x1838,	// (0x0001fc05) clock_digital_number_pane_cp11_ParamLimits

0x1838,	// (0x0001fc05) clock_digital_number_pane_cp11

0x1850,	// (0x0001fc1d) clock_digital_number_pane_cp12_ParamLimits

0x1850,	// (0x0001fc1d) clock_digital_number_pane_cp12

0x1868,	// (0x0001fc35) clock_digital_number_pane_cp13_ParamLimits

0x1868,	// (0x0001fc35) clock_digital_number_pane_cp13

0x1880,	// (0x0001fc4d) clock_digital_separator_pane_cp10_ParamLimits

0x1880,	// (0x0001fc4d) clock_digital_separator_pane_cp10

0x650e,	// (0x000248db) popup_clock_digital_window_cp02_t1_ParamLimits

0x650e,	// (0x000248db) popup_clock_digital_window_cp02_t1

0xa1bb,	// (0x00028588) clock_digital_number_pane_cp10_g1

0xa1bb,	// (0x00028588) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0002dbcf) clock_digital_number_pane_cp10_g

0xa1bb,	// (0x00028588) clock_digital_separator_pane_cp10_g1

0xa1bb,	// (0x00028588) clock_digital_separator_pane_g2_cp10

0xaeb6,	// (0x00029283) navi_pane_vded_g4

0xaebf,	// (0x0002928c) navi_pane_vded_g5

0xaec8,	// (0x00029295) navi_pane_vded_t1

0x0f50,	// (0x0001f31d) main_vded_pane

0x660c,	// (0x000249d9) main_vded_pane_g1

0x6618,	// (0x000249e5) main_vded_pane_g2

0x6622,	// (0x000249ef) main_vded_pane_g3

0x0002,

0xf807,	// (0x0002dbd4) main_vded_pane_g

0x662c,	// (0x000249f9) main_vded_pane_t1

0x663a,	// (0x00024a07) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0002dbdb) main_vded_pane_t

0x6648,	// (0x00024a15) vded_slider_pane

0x6652,	// (0x00024a1f) vded_video_pane

0xcd58,	// (0x0002b125) vded_video_pane_g1

0x665c,	// (0x00024a29) vded_video_pane_g2

0xc739,	// (0x0002ab06) vded_video_pane_g3

0x0002,

0xf813,	// (0x0002dbe0) vded_video_pane_g

0xcd62,	// (0x0002b12f) vded_slider_pane_g1

0xc48c,	// (0x0002a859) vded_slider_pane_g2

0xcd6b,	// (0x0002b138) vded_slider_pane_g3

0xcd74,	// (0x0002b141) vded_slider_pane_g4

0xcd7d,	// (0x0002b14a) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0002dbe7) vded_slider_pane_g

0x61a2,	// (0x0002456f) mup3_rocker_pane_ParamLimits

0x61a2,	// (0x0002456f) mup3_rocker_pane

0x6665,	// (0x00024a32) mup3_control_keys_pane_g1

0x666d,	// (0x00024a3a) mup3_control_keys_pane_g2

0x6675,	// (0x00024a42) mup3_control_keys_pane_g3

0x667d,	// (0x00024a4a) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0002dbf2) mup3_control_keys_pane_g

0x0f10,	// (0x0001f2dd) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f10,	// (0x0001f2dd) popup_toolbar2_fixed_window_cp01

0x61bc,	// (0x00024589) popup_toolbar2_fixed_window_cp02_ParamLimits

0x61bc,	// (0x00024589) popup_toolbar2_fixed_window_cp02

0xb66d,	// (0x00029a3a) popup_call2_audio_second_window_t4_ParamLimits

0xb66d,	// (0x00029a3a) popup_call2_audio_second_window_t4

0xbb9b,	// (0x00029f68) popup_call2_audio_first_window_t6_ParamLimits

0xbb9b,	// (0x00029f68) popup_call2_audio_first_window_t6

0xbe31,	// (0x0002a1fe) popup_call2_audio_out_window_t6_ParamLimits

0xbe31,	// (0x0002a1fe) popup_call2_audio_out_window_t6

0x0f50,	// (0x0001f31d) main_vitu_pane

0x668d,	// (0x00024a5a) aid_size_cell_itu_ParamLimits

0x668d,	// (0x00024a5a) aid_size_cell_itu

0xd1a7,	// (0x0002b574) bg_popup_window_pane_cp08_ParamLimits

0xd1a7,	// (0x0002b574) bg_popup_window_pane_cp08

0x669b,	// (0x00024a68) field_vitu_entry_pane_ParamLimits

0x669b,	// (0x00024a68) field_vitu_entry_pane

0x66aa,	// (0x00024a77) grid_vitu_function_pane_ParamLimits

0x66aa,	// (0x00024a77) grid_vitu_function_pane

0x66ba,	// (0x00024a87) grid_vitu_itu_pane_ParamLimits

0x66ba,	// (0x00024a87) grid_vitu_itu_pane

0x66ca,	// (0x00024a97) cell_vitu_itu_pane_ParamLimits

0x66ca,	// (0x00024a97) cell_vitu_itu_pane

0x66df,	// (0x00024aac) cell_vitu_function_pane_ParamLimits

0x66df,	// (0x00024aac) cell_vitu_function_pane

0xa3a1,	// (0x0002876e) bg_popup_sub_pane_cp08_ParamLimits

0xa3a1,	// (0x0002876e) bg_popup_sub_pane_cp08

0x66f1,	// (0x00024abe) field_vitu_entry_pane_t1_ParamLimits

0x66f1,	// (0x00024abe) field_vitu_entry_pane_t1

0xcd9e,	// (0x0002b16b) field_vitu_entry_pane_t2_ParamLimits

0xcd9e,	// (0x0002b16b) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0002dc00) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0002dc00) field_vitu_entry_pane_t

0xcdbb,	// (0x0002b188) bg_button_pane_cp05_ParamLimits

0xcdbb,	// (0x0002b188) bg_button_pane_cp05

0x670e,	// (0x00024adb) cell_vitu_itu_pane_g1

0x6726,	// (0x00024af3) cell_vitu_itu_pane_t1_ParamLimits

0x6726,	// (0x00024af3) cell_vitu_itu_pane_t1

0x6738,	// (0x00024b05) cell_vitu_itu_pane_t2_ParamLimits

0x6738,	// (0x00024b05) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0002dc05) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0002dc05) cell_vitu_itu_pane_t

0xcdc9,	// (0x0002b196) bg_button_pane_cp07

0x676d,	// (0x00024b3a) cell_vitu_function_pane_g1

0x1029,	// (0x0001f3f6) main_calc_pane_g1

0x0cfa,	// (0x0001f0c7) aid_visual_content_pane

0x0f50,	// (0x0001f31d) main_vradio_pane

0x6776,	// (0x00024b43) main_vradio_pane_g1_ParamLimits

0x6776,	// (0x00024b43) main_vradio_pane_g1

0xcdd3,	// (0x0002b1a0) main_vradio_pane_g2_ParamLimits

0xcdd3,	// (0x0002b1a0) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0002dc0c) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0002dc0c) main_vradio_pane_g

0x6786,	// (0x00024b53) main_vradio_pane_t1_ParamLimits

0x6786,	// (0x00024b53) main_vradio_pane_t1

0x6798,	// (0x00024b65) main_vradio_pane_t2_ParamLimits

0x6798,	// (0x00024b65) main_vradio_pane_t2

0xcde0,	// (0x0002b1ad) main_vradio_pane_t3_ParamLimits

0xcde0,	// (0x0002b1ad) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0002dc11) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0002dc11) main_vradio_pane_t

0x67aa,	// (0x00024b77) vradio_rocker_control_pane_ParamLimits

0x67aa,	// (0x00024b77) vradio_rocker_control_pane

0x67b6,	// (0x00024b83) vradio_station_info_pane_ParamLimits

0x67b6,	// (0x00024b83) vradio_station_info_pane

0xcdf4,	// (0x0002b1c1) vradio_frequency_info_pane_ParamLimits

0xcdf4,	// (0x0002b1c1) vradio_frequency_info_pane

0xc739,	// (0x0002ab06) vradio_station_info_pane_g1

0xce03,	// (0x0002b1d0) vradio_station_info_pane_t1_ParamLimits

0xce03,	// (0x0002b1d0) vradio_station_info_pane_t1

0xce25,	// (0x0002b1f2) vradio_station_info_pane_t2_ParamLimits

0xce25,	// (0x0002b1f2) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0002dc18) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0002dc18) vradio_station_info_pane_t

0xce37,	// (0x0002b204) vradio_tuning_pane

0xce3f,	// (0x0002b20c) vradio_rocker_control_pane_g1

0xce47,	// (0x0002b214) vradio_rocker_control_pane_g2

0xce4f,	// (0x0002b21c) vradio_rocker_control_pane_g3

0xce57,	// (0x0002b224) vradio_rocker_control_pane_g4

0xce5f,	// (0x0002b22c) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0002dc1d) vradio_rocker_control_pane_g

0x67c5,	// (0x00024b92) vradio_frequency_info_pane_g1

0xce67,	// (0x0002b234) vradio_frequency_info_pane_t1_ParamLimits

0xce67,	// (0x0002b234) vradio_frequency_info_pane_t1

0x67cf,	// (0x00024b9c) vradio_tuning_pane_g1

0x67d8,	// (0x00024ba5) vradio_tuning_pane_t1

0x0d16,	// (0x0001f0e3) area_side_right_pane_ParamLimits

0x0d16,	// (0x0001f0e3) area_side_right_pane

0xc2ec,	// (0x0002a6b9) status_small_pane_g1

0xc2f4,	// (0x0002a6c1) status_small_pane_g2

0xc2fd,	// (0x0002a6ca) status_small_pane_g3

0xc306,	// (0x0002a6d3) status_small_pane_g4

0x0003,

0xf60b,	// (0x0002d9d8) status_small_pane_g

0xc30f,	// (0x0002a6dc) status_small_pane_t1

0x0f50,	// (0x0001f31d) main_video3_pane

0xce7b,	// (0x0002b248) cams_zoom_vslider_pane

0xce83,	// (0x0002b250) image3_wide_pane_ParamLimits

0xce83,	// (0x0002b250) image3_wide_pane

0xce9d,	// (0x0002b26a) image3_wide_small_pane

0xcea9,	// (0x0002b276) main_video3_pane_g1_ParamLimits

0xcea9,	// (0x0002b276) main_video3_pane_g1

0xcec5,	// (0x0002b292) main_video3_pane_g2_ParamLimits

0xcec5,	// (0x0002b292) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0002dc28) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0002dc28) main_video3_pane_g

0xcee1,	// (0x0002b2ae) main_video3_pane_t1_ParamLimits

0xcee1,	// (0x0002b2ae) main_video3_pane_t1

0xcf0c,	// (0x0002b2d9) main_video3_pane_t2_ParamLimits

0xcf0c,	// (0x0002b2d9) main_video3_pane_t2

0xcf37,	// (0x0002b304) main_video3_pane_t3_ParamLimits

0xcf37,	// (0x0002b304) main_video3_pane_t3

0x0002,

0xf860,	// (0x0002dc2d) main_video3_pane_t_ParamLimits

0xf860,	// (0x0002dc2d) main_video3_pane_t

0xcf64,	// (0x0002b331) cams_zoom_vslider_pane_g1

0xcf6d,	// (0x0002b33a) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0002dc34) cams_zoom_vslider_pane_g

0xcf75,	// (0x0002b342) small_slider_vertical_pane

0xc739,	// (0x0002ab06) small_slider_vertical_pane_g1

0xc739,	// (0x0002ab06) small_slider_vertical_pane_g2

0xcf7d,	// (0x0002b34a) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0002dc39) small_slider_vertical_pane_g

0x0f50,	// (0x0001f31d) main_hwr_training_pane

0xcf86,	// (0x0002b353) hwr_training_instruct_pane_ParamLimits

0xcf86,	// (0x0002b353) hwr_training_instruct_pane

0x67e7,	// (0x00024bb4) hwr_training_navi_pane_ParamLimits

0x67e7,	// (0x00024bb4) hwr_training_navi_pane

0x6801,	// (0x00024bce) hwr_training_write_pane_ParamLimits

0x6801,	// (0x00024bce) hwr_training_write_pane

0x9b4b,	// (0x00027f18) bg_frame_shadow_pane

0xcfbd,	// (0x0002b38a) hwr_training_write_pane_g1

0xcfc5,	// (0x0002b392) hwr_training_write_pane_g2

0xcfcd,	// (0x0002b39a) hwr_training_write_pane_g3

0xcfd5,	// (0x0002b3a2) hwr_training_write_pane_g4

0xcfdd,	// (0x0002b3aa) hwr_training_write_pane_g5

0xcfe5,	// (0x0002b3b2) hwr_training_write_pane_g6

0xcfed,	// (0x0002b3ba) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0002dc40) hwr_training_write_pane_g

0x1898,	// (0x0001fc65) hwr_training_navi_pane_g1_ParamLimits

0x1898,	// (0x0001fc65) hwr_training_navi_pane_g1

0x18aa,	// (0x0001fc77) hwr_training_navi_pane_g2_ParamLimits

0x18aa,	// (0x0001fc77) hwr_training_navi_pane_g2

0x18bc,	// (0x0001fc89) hwr_training_navi_pane_g3_ParamLimits

0x18bc,	// (0x0001fc89) hwr_training_navi_pane_g3

0x18cc,	// (0x0001fc99) hwr_training_navi_pane_g4_ParamLimits

0x18cc,	// (0x0001fc99) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0002dc4f) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0002dc4f) hwr_training_navi_pane_g

0x18e6,	// (0x0001fcb3) hwr_training_navi_pane_t1

0x6839,	// (0x00024c06) list_single_hwr_training_instruct_pane_ParamLimits

0x6839,	// (0x00024c06) list_single_hwr_training_instruct_pane

0xcff5,	// (0x0002b3c2) list_single_hwr_training_instruct_pane_t1

0xc679,	// (0x0002aa46) bg_frame_shadow_pane_g1

0xd004,	// (0x0002b3d1) bg_frame_shadow_pane_g2

0xd00c,	// (0x0002b3d9) bg_frame_shadow_pane_g3

0xd014,	// (0x0002b3e1) bg_frame_shadow_pane_g4

0xd01c,	// (0x0002b3e9) bg_frame_shadow_pane_g5

0xd024,	// (0x0002b3f1) bg_frame_shadow_pane_g6

0xd02c,	// (0x0002b3f9) bg_frame_shadow_pane_g7

0xa35f,	// (0x0002872c) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0002dc5a) bg_frame_shadow_pane_g

0x0f50,	// (0x0001f31d) main_video_tele_dialer_pane

0x18f4,	// (0x0001fcc1) aid_size_cell_video_keypad_ParamLimits

0x18f4,	// (0x0001fcc1) aid_size_cell_video_keypad

0x1904,	// (0x0001fcd1) grid_video_dialer_keypad_pane_ParamLimits

0x1904,	// (0x0001fcd1) grid_video_dialer_keypad_pane

0x1938,	// (0x0001fd05) video_down_pane_cp_ParamLimits

0x1938,	// (0x0001fd05) video_down_pane_cp

0x1946,	// (0x0001fd13) cell_video_dialer_keypad_pane_ParamLimits

0x1946,	// (0x0001fd13) cell_video_dialer_keypad_pane

0xd034,	// (0x0002b401) bg_button_pane_cp08_ParamLimits

0xd034,	// (0x0002b401) bg_button_pane_cp08

0x687e,	// (0x00024c4b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x687e,	// (0x00024c4b) cell_video_dialer_keypad_pane_g1

0x6196,	// (0x00024563) mup3_rocker2_pane_ParamLimits

0x6196,	// (0x00024563) mup3_rocker2_pane

0xc739,	// (0x0002ab06) mup3_rocker2_pane_g1

0x13d0,	// (0x0001f79d) main_dialer2_pane

0x0f50,	// (0x0001f31d) main_mp4_pane

0x1963,	// (0x0001fd30) main_mp4_pane_g1_ParamLimits

0x1963,	// (0x0001fd30) main_mp4_pane_g1

0x1971,	// (0x0001fd3e) main_mp4_pane_g2_ParamLimits

0x1971,	// (0x0001fd3e) main_mp4_pane_g2

0x197f,	// (0x0001fd4c) main_mp4_pane_g3_ParamLimits

0x197f,	// (0x0001fd4c) main_mp4_pane_g3

0x19c4,	// (0x0001fd91) main_mp4_pane_g4_ParamLimits

0x19c4,	// (0x0001fd91) main_mp4_pane_g4

0x19ec,	// (0x0001fdb9) main_mp4_pane_g5_ParamLimits

0x19ec,	// (0x0001fdb9) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0002dc7a) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0002dc7a) main_mp4_pane_g

0x1a3c,	// (0x0001fe09) main_mp4_pane_t1_ParamLimits

0x1a3c,	// (0x0001fe09) main_mp4_pane_t1

0x1a98,	// (0x0001fe65) main_mp4_pane_t2_ParamLimits

0x1a98,	// (0x0001fe65) main_mp4_pane_t2

0xd040,	// (0x0002b40d) main_mp4_pane_t3_ParamLimits

0xd040,	// (0x0002b40d) main_mp4_pane_t3

0x1aea,	// (0x0001feb7) main_mp4_pane_t4_ParamLimits

0x1aea,	// (0x0001feb7) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0002dc87) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0002dc87) main_mp4_pane_t

0x1b2e,	// (0x0001fefb) mp4_progress_pane_ParamLimits

0x1b2e,	// (0x0001fefb) mp4_progress_pane

0x1b78,	// (0x0001ff45) mp4_rocker_pane_ParamLimits

0x1b78,	// (0x0001ff45) mp4_rocker_pane

0xd068,	// (0x0002b435) mp4_progress_pane_t1

0xd081,	// (0x0002b44e) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0002dc90) mp4_progress_pane_t

0xd09a,	// (0x0002b467) mup_progress_pane_cp04

0xd8c0,	// (0x0002bc8d) mp4_rocker_pane_g1

0x1b98,	// (0x0001ff65) aid_cell_size_keypad2_ParamLimits

0x1b98,	// (0x0001ff65) aid_cell_size_keypad2

0x1ba8,	// (0x0001ff75) dialer2_ne_pane_ParamLimits

0x1ba8,	// (0x0001ff75) dialer2_ne_pane

0x1bb6,	// (0x0001ff83) grid_dialer2_keypad_pane_ParamLimits

0x1bb6,	// (0x0001ff83) grid_dialer2_keypad_pane

0xd1b5,	// (0x0002b582) bg_popup_call_pane_cp07_ParamLimits

0xd1b5,	// (0x0002b582) bg_popup_call_pane_cp07

0x68b8,	// (0x00024c85) dialer2_ne_pane_t1_ParamLimits

0x68b8,	// (0x00024c85) dialer2_ne_pane_t1

0x1bc6,	// (0x0001ff93) cell_dialer2_keypad_pane_ParamLimits

0x1bc6,	// (0x0001ff93) cell_dialer2_keypad_pane

0xd0b8,	// (0x0002b485) bg_button_pane_pane_cp04_ParamLimits

0xd0b8,	// (0x0002b485) bg_button_pane_pane_cp04

0x68dd,	// (0x00024caa) cell_dialer2_keypad_pane_g1_ParamLimits

0x68dd,	// (0x00024caa) cell_dialer2_keypad_pane_g1

0x31d4,	// (0x000215a1) aid_placing_vt_set_content_ParamLimits

0x31d4,	// (0x000215a1) aid_placing_vt_set_content

0x3200,	// (0x000215cd) aid_placing_vt_set_title_ParamLimits

0x3200,	// (0x000215cd) aid_placing_vt_set_title

0x0f50,	// (0x0001f31d) main_image3_pane

0x1c0d,	// (0x0001ffda) area_side_right_pane_cp01_ParamLimits

0x1c0d,	// (0x0001ffda) area_side_right_pane_cp01

0x1c3a,	// (0x00020007) main_image3_pane_g1_ParamLimits

0x1c3a,	// (0x00020007) main_image3_pane_g1

0x1c48,	// (0x00020015) main_image3_pane_g2_ParamLimits

0x1c48,	// (0x00020015) main_image3_pane_g2

0x1c61,	// (0x0002002e) main_image3_pane_g3_ParamLimits

0x1c61,	// (0x0002002e) main_image3_pane_g3

0x1c7a,	// (0x00020047) main_image3_pane_g4_ParamLimits

0x1c7a,	// (0x00020047) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0002dc9f) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0002dc9f) main_image3_pane_g

0x1c93,	// (0x00020060) main_image3_pane_t1_ParamLimits

0x1c93,	// (0x00020060) main_image3_pane_t1

0x1cb8,	// (0x00020085) main_image3_pane_t2_ParamLimits

0x1cb8,	// (0x00020085) main_image3_pane_t2

0x1cd7,	// (0x000200a4) main_image3_pane_t3_ParamLimits

0x1cd7,	// (0x000200a4) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0002dca8) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0002dca8) main_image3_pane_t

0xd1a7,	// (0x0002b574) grid_sctrl_middle_pane_cp01_ParamLimits

0xd1a7,	// (0x0002b574) grid_sctrl_middle_pane_cp01

0x6945,	// (0x00024d12) cell_sctrl_middle_pane_cp01_ParamLimits

0x6945,	// (0x00024d12) cell_sctrl_middle_pane_cp01

0x6956,	// (0x00024d23) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6956,	// (0x00024d23) cell_sctrl_middle_pane_cp01_g1

0x0f50,	// (0x0001f31d) main_call4_pane

0x6963,	// (0x00024d30) aid_size_button_call4_ParamLimits

0x6963,	// (0x00024d30) aid_size_button_call4

0x6993,	// (0x00024d60) call4_windows_pane_ParamLimits

0x6993,	// (0x00024d60) call4_windows_pane

0x69ad,	// (0x00024d7a) grid_call4_button_pane_ParamLimits

0x69ad,	// (0x00024d7a) grid_call4_button_pane

0xd0c4,	// (0x0002b491) call4_windows_conf_pane

0xd0db,	// (0x0002b4a8) popup_call4_audio_first_window_ParamLimits

0xd0db,	// (0x0002b4a8) popup_call4_audio_first_window

0xd127,	// (0x0002b4f4) popup_call4_audio_second_window_ParamLimits

0xd127,	// (0x0002b4f4) popup_call4_audio_second_window

0xd13b,	// (0x0002b508) popup_call4_audio_wait_window_ParamLimits

0xd13b,	// (0x0002b508) popup_call4_audio_wait_window

0x69d1,	// (0x00024d9e) cell_call4_button_pane_ParamLimits

0x69d1,	// (0x00024d9e) cell_call4_button_pane

0x69f6,	// (0x00024dc3) bg_button_pane_cp09_ParamLimits

0x69f6,	// (0x00024dc3) bg_button_pane_cp09

0x6a02,	// (0x00024dcf) cell_call4_button_pane_g1_ParamLimits

0x6a02,	// (0x00024dcf) cell_call4_button_pane_g1

0x6a0f,	// (0x00024ddc) cell_call4_button_pane_t1_ParamLimits

0x6a0f,	// (0x00024ddc) cell_call4_button_pane_t1

0xd183,	// (0x0002b550) popup_call4_audio_conf_window_ParamLimits

0xd183,	// (0x0002b550) popup_call4_audio_conf_window

0x61c9,	// (0x00024596) mup3_progress_pane_t1_ParamLimits

0x61e8,	// (0x000245b5) mup3_progress_pane_t2_ParamLimits

0xca76,	// (0x0002ae43) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0002db7c) mup3_progress_pane_t_ParamLimits

0xca93,	// (0x0002ae60) mup_progress_pane_cp03_ParamLimits

0x6685,	// (0x00024a52) mup3_control_keys_pane_g4_copy1

0x1b5c,	// (0x0001ff29) mp4_rocker2_pane_ParamLimits

0x1b5c,	// (0x0001ff29) mp4_rocker2_pane

0xd197,	// (0x0002b564) mp4_rocker2_pane_g1

0xd19f,	// (0x0002b56c) mp4_rocker2_pane_g2

0x1d38,	// (0x00020105) mp4_rocker2_pane_g3

0x1d40,	// (0x0002010d) mp4_rocker2_pane_g4

0x1d48,	// (0x00020115) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0002dcb1) mp4_rocker2_pane_g

0x0f50,	// (0x0001f31d) main_camera4_pane

0x0f50,	// (0x0001f31d) main_video4_pane

0x1914,	// (0x0001fce1) main_video_tele_dialer_pane_t1_ParamLimits

0x1914,	// (0x0001fce1) main_video_tele_dialer_pane_t1

0x1926,	// (0x0001fcf3) main_video_tele_dialer_pane_t2_ParamLimits

0x1926,	// (0x0001fcf3) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0002dc6b) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0002dc6b) main_video_tele_dialer_pane_t

0x1d68,	// (0x00020135) cam4_autofocus_pane_ParamLimits

0x1d68,	// (0x00020135) cam4_autofocus_pane

0x1d82,	// (0x0002014f) cam4_image_uncrop_pane_ParamLimits

0x1d82,	// (0x0002014f) cam4_image_uncrop_pane

0x1d99,	// (0x00020166) cam4_indicators_pane_ParamLimits

0x1d99,	// (0x00020166) cam4_indicators_pane

0x1db5,	// (0x00020182) main_camera4_pane_g1_ParamLimits

0x1db5,	// (0x00020182) main_camera4_pane_g1

0x1dc1,	// (0x0002018e) main_camera4_pane_g2_ParamLimits

0x1dc1,	// (0x0002018e) main_camera4_pane_g2

0x1dc1,	// (0x0002018e) main_camera4_pane_g3_ParamLimits

0x1dc1,	// (0x0002018e) main_camera4_pane_g3

0x1dcd,	// (0x0002019a) main_camera4_pane_g4_ParamLimits

0x1dcd,	// (0x0002019a) main_camera4_pane_g4

0x1dd9,	// (0x000201a6) main_camera4_pane_g5_ParamLimits

0x1dd9,	// (0x000201a6) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0002dcbc) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0002dcbc) main_camera4_pane_g

0x1df3,	// (0x000201c0) main_camera4_pane_t1_ParamLimits

0x1df3,	// (0x000201c0) main_camera4_pane_t1

0x1e17,	// (0x000201e4) bg_tb_trans_pane_cp06

0x1e2d,	// (0x000201fa) cam4_indicators_pane_g1

0x1e3e,	// (0x0002020b) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0002dcd7) cam4_indicators_pane_g

0x1e56,	// (0x00020223) cam4_indicators_pane_t1

0x1e80,	// (0x0002024d) main_video4_pane_g1_ParamLimits

0x1e80,	// (0x0002024d) main_video4_pane_g1

0x1e8c,	// (0x00020259) main_video4_pane_g2_ParamLimits

0x1e8c,	// (0x00020259) main_video4_pane_g2

0x1e98,	// (0x00020265) main_video4_pane_g3_ParamLimits

0x1e98,	// (0x00020265) main_video4_pane_g3

0x1ea4,	// (0x00020271) main_video4_pane_g4_ParamLimits

0x1ea4,	// (0x00020271) main_video4_pane_g4

0x0004,

0xf911,	// (0x0002dcde) main_video4_pane_g_ParamLimits

0xf911,	// (0x0002dcde) main_video4_pane_g

0x1ec4,	// (0x00020291) vid4_indicators_pane_ParamLimits

0x1ec4,	// (0x00020291) vid4_indicators_pane

0x1ee3,	// (0x000202b0) video4_image_uncrop_cif_pane_ParamLimits

0x1ee3,	// (0x000202b0) video4_image_uncrop_cif_pane

0x1ef2,	// (0x000202bf) video4_image_uncrop_nhd_pane_ParamLimits

0x1ef2,	// (0x000202bf) video4_image_uncrop_nhd_pane

0x1d82,	// (0x0002014f) video4_image_uncrop_vga_pane_ParamLimits

0x1d82,	// (0x0002014f) video4_image_uncrop_vga_pane

0x13c2,	// (0x0001f78f) bg_tb_trans_pane_cp07

0x1f07,	// (0x000202d4) vid4_indicators_pane_g1

0x1f1b,	// (0x000202e8) vid4_indicators_pane_g2

0x1f2f,	// (0x000202fc) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0002dce9) vid4_indicators_pane_g

0x1f5c,	// (0x00020329) vid4_indicators_pane_t1

0x6a45,	// (0x00024e12) cam4_autofocus_pane_g1

0x6a4d,	// (0x00024e1a) cam4_autofocus_pane_g2

0x6a55,	// (0x00024e22) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0002dcf4) cam4_autofocus_pane_g

0x6a5d,	// (0x00024e2a) cam4_autofocus_pane_g3_copy1

0x6862,	// (0x00024c2f) video_down_pane_cp_t1

0x6870,	// (0x00024c3d) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0002dc70) video_down_pane_cp_t

0x0f42,	// (0x0001f30f) popup_vitu2_window_ParamLimits

0x0f42,	// (0x0001f30f) popup_vitu2_window

0x1f73,	// (0x00020340) aid_size_cell2_itu2_ParamLimits

0x1f73,	// (0x00020340) aid_size_cell2_itu2

0x1f95,	// (0x00020362) aid_size_cell_itu2_ParamLimits

0x1f95,	// (0x00020362) aid_size_cell_itu2

0x1fd9,	// (0x000203a6) bg_popup_window_pane_cp09_ParamLimits

0x1fd9,	// (0x000203a6) bg_popup_window_pane_cp09

0x1fe7,	// (0x000203b4) field_vitu2_entry_pane_ParamLimits

0x1fe7,	// (0x000203b4) field_vitu2_entry_pane

0x2007,	// (0x000203d4) grid_vitu2_function_pane_ParamLimits

0x2007,	// (0x000203d4) grid_vitu2_function_pane

0x204b,	// (0x00020418) grid_vitu2_itu_pane_ParamLimits

0x204b,	// (0x00020418) grid_vitu2_itu_pane

0x20c5,	// (0x00020492) cell_vitu2_itu_pane_ParamLimits

0x20c5,	// (0x00020492) cell_vitu2_itu_pane

0x20de,	// (0x000204ab) cell_vitu2_function_pane_ParamLimits

0x20de,	// (0x000204ab) cell_vitu2_function_pane

0xd1c3,	// (0x0002b590) bg_popup_call_pane_cp08_ParamLimits

0xd1c3,	// (0x0002b590) bg_popup_call_pane_cp08

0xd1da,	// (0x0002b5a7) field_vitu2_entry_pane_g1

0xd1e6,	// (0x0002b5b3) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0002dcfb) field_vitu2_entry_pane_g

0x6a65,	// (0x00024e32) field_vitu2_entry_pane_t1_ParamLimits

0x6a65,	// (0x00024e32) field_vitu2_entry_pane_t1

0xd200,	// (0x0002b5cd) field_vitu2_entry_pane_t2_ParamLimits

0xd200,	// (0x0002b5cd) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0002dd02) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0002dd02) field_vitu2_entry_pane_t

0x211f,	// (0x000204ec) bg_button_pane_cp010_ParamLimits

0x211f,	// (0x000204ec) bg_button_pane_cp010

0x212d,	// (0x000204fa) cell_vitu2_itu_pane_g1

0x214d,	// (0x0002051a) cell_vitu2_itu_pane_t1_ParamLimits

0x214d,	// (0x0002051a) cell_vitu2_itu_pane_t1

0x2199,	// (0x00020566) cell_vitu2_itu_pane_t2_ParamLimits

0x2199,	// (0x00020566) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0002dd0c) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0002dd0c) cell_vitu2_itu_pane_t

0x13c2,	// (0x0001f78f) bg_button_pane_cp011

0x2261,	// (0x0002062e) cell_vitu2_function_pane_g1

0x0f50,	// (0x0001f31d) main_myfav_hc_pane

0x1d19,	// (0x000200e6) popup_image3_note_pane_ParamLimits

0x1d19,	// (0x000200e6) popup_image3_note_pane

0x1d27,	// (0x000200f4) popup_image3_tool_bar_pane_ParamLimits

0x1d27,	// (0x000200f4) popup_image3_tool_bar_pane

0x220f,	// (0x000205dc) cell_vitu2_itu_pane_t3_ParamLimits

0x220f,	// (0x000205dc) cell_vitu2_itu_pane_t3

0x9b4b,	// (0x00027f18) bg_popup_trans_pane

0xd225,	// (0x0002b5f2) grid_image3_tool_bar_pane

0xd22f,	// (0x0002b5fc) bg_popup_trans_pane_g1

0xa6fe,	// (0x00028acb) bg_popup_trans_pane_g2

0xd237,	// (0x0002b604) bg_popup_trans_pane_g3

0xd23f,	// (0x0002b60c) bg_popup_trans_pane_g4

0xd247,	// (0x0002b614) bg_popup_trans_pane_g5

0xd24f,	// (0x0002b61c) bg_popup_trans_pane_g6

0xd257,	// (0x0002b624) bg_popup_trans_pane_g7

0xd25f,	// (0x0002b62c) bg_popup_trans_pane_g8

0xa6de,	// (0x00028aab) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0002dd13) bg_popup_trans_pane_g

0xd267,	// (0x0002b634) cell_image3_tool_bar_pane_ParamLimits

0xd267,	// (0x0002b634) cell_image3_tool_bar_pane

0xc739,	// (0x0002ab06) cell_image3_tool_bar_pane_g1

0x9b4b,	// (0x00027f18) bg_popup_trans_pane_cp1

0xd27b,	// (0x0002b648) popup_image3_note_pane_t1

0xd289,	// (0x0002b656) popup_image3_note_pane_t2

0xd297,	// (0x0002b664) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0002dd26) popup_image3_note_pane_t

0xd2a5,	// (0x0002b672) popup_image3_note_pane_t3_copy1

0x6a96,	// (0x00024e63) bg_myfav_hc_instruction_pane_ParamLimits

0x6a96,	// (0x00024e63) bg_myfav_hc_instruction_pane

0x6aae,	// (0x00024e7b) cell_myfav_contact_pane_ParamLimits

0x6aae,	// (0x00024e7b) cell_myfav_contact_pane

0x6ac8,	// (0x00024e95) cell_myfav_contact_pane_cp1_ParamLimits

0x6ac8,	// (0x00024e95) cell_myfav_contact_pane_cp1

0x6ae0,	// (0x00024ead) cell_myfav_contact_pane_cp2_ParamLimits

0x6ae0,	// (0x00024ead) cell_myfav_contact_pane_cp2

0x6af8,	// (0x00024ec5) cell_myfav_contact_pane_cp3_ParamLimits

0x6af8,	// (0x00024ec5) cell_myfav_contact_pane_cp3

0x6b0f,	// (0x00024edc) cell_myfav_contact_pane_cp4_ParamLimits

0x6b0f,	// (0x00024edc) cell_myfav_contact_pane_cp4

0x6b25,	// (0x00024ef2) cell_myfav_contact_pane_cp5_ParamLimits

0x6b25,	// (0x00024ef2) cell_myfav_contact_pane_cp5

0x6b39,	// (0x00024f06) cell_myfav_contact_pane_cp6_ParamLimits

0x6b39,	// (0x00024f06) cell_myfav_contact_pane_cp6

0x6b4d,	// (0x00024f1a) cell_myfav_contact_pane_cp7_ParamLimits

0x6b4d,	// (0x00024f1a) cell_myfav_contact_pane_cp7

0xd2b3,	// (0x0002b680) listscroll_gen_pane_cp05

0x6b65,	// (0x00024f32) main_myfav_hc_pane_g1_ParamLimits

0x6b65,	// (0x00024f32) main_myfav_hc_pane_g1

0x6b7b,	// (0x00024f48) main_myfav_hc_pane_g2_ParamLimits

0x6b7b,	// (0x00024f48) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0002dd2d) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0002dd2d) main_myfav_hc_pane_g

0x6bab,	// (0x00024f78) main_myfav_hc_pane_t1_ParamLimits

0x6bab,	// (0x00024f78) main_myfav_hc_pane_t1

0xd2bc,	// (0x0002b689) main_myfav_hc_pane_t2_ParamLimits

0xd2bc,	// (0x0002b689) main_myfav_hc_pane_t2

0xd2ce,	// (0x0002b69b) main_myfav_hc_pane_t3_ParamLimits

0xd2ce,	// (0x0002b69b) main_myfav_hc_pane_t3

0x6bc2,	// (0x00024f8f) main_myfav_hc_pane_t4_ParamLimits

0x6bc2,	// (0x00024f8f) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0002dd34) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0002dd34) main_myfav_hc_pane_t

0xc739,	// (0x0002ab06) bg_myfav_hc_instruction_pane_g1

0xd2e0,	// (0x0002b6ad) cell_myfav_contact_pane_g1_ParamLimits

0xd2e0,	// (0x0002b6ad) cell_myfav_contact_pane_g1

0xd2e0,	// (0x0002b6ad) cell_myfav_contact_pane_g2_ParamLimits

0xd2e0,	// (0x0002b6ad) cell_myfav_contact_pane_g2

0xd2ec,	// (0x0002b6b9) cell_myfav_contact_pane_g3_ParamLimits

0xd2ec,	// (0x0002b6b9) cell_myfav_contact_pane_g3

0xca60,	// (0x0002ae2d) cell_myfav_contact_pane_g4_ParamLimits

0xca60,	// (0x0002ae2d) cell_myfav_contact_pane_g4

0xd2f9,	// (0x0002b6c6) cell_myfav_contact_pane_g5_ParamLimits

0xd2f9,	// (0x0002b6c6) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0002dd3f) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0002dd3f) cell_myfav_contact_pane_g

0x6b93,	// (0x00024f60) main_myfav_hc_pane_g3_ParamLimits

0x6b93,	// (0x00024f60) main_myfav_hc_pane_g3

0x0e4b,	// (0x0001f218) popup_adpt_find_window

0x6bec,	// (0x00024fb9) afind_page_pane_ParamLimits

0x6bec,	// (0x00024fb9) afind_page_pane

0x6bf9,	// (0x00024fc6) aid_size_cell_afind_ParamLimits

0x6bf9,	// (0x00024fc6) aid_size_cell_afind

0x6c13,	// (0x00024fe0) bg_popup_sub_pane_cp09_ParamLimits

0x6c13,	// (0x00024fe0) bg_popup_sub_pane_cp09

0x6c20,	// (0x00024fed) find_pane_cp01_ParamLimits

0x6c20,	// (0x00024fed) find_pane_cp01

0xd305,	// (0x0002b6d2) grid_afind_control_pane_ParamLimits

0xd305,	// (0x0002b6d2) grid_afind_control_pane

0x6c2d,	// (0x00024ffa) grid_afind_pane_ParamLimits

0x6c2d,	// (0x00024ffa) grid_afind_pane

0x6c47,	// (0x00025014) cell_afind_pane_ParamLimits

0x6c47,	// (0x00025014) cell_afind_pane

0xc739,	// (0x0002ab06) afind_page_pane_g1

0x6c8f,	// (0x0002505c) afind_page_pane_g2

0x6c98,	// (0x00025065) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0002dd4a) afind_page_pane_g

0x6ca1,	// (0x0002506e) afind_page_pane_t1

0xd319,	// (0x0002b6e6) cell_afind_grid_control_pane_ParamLimits

0xd319,	// (0x0002b6e6) cell_afind_grid_control_pane

0xd0b8,	// (0x0002b485) bg_button_pane_cp69_ParamLimits

0xd0b8,	// (0x0002b485) bg_button_pane_cp69

0x6cc1,	// (0x0002508e) cell_afind_pane_g1_ParamLimits

0x6cc1,	// (0x0002508e) cell_afind_pane_g1

0x6cce,	// (0x0002509b) cell_afind_pane_t1_ParamLimits

0x6cce,	// (0x0002509b) cell_afind_pane_t1

0xa4f7,	// (0x000288c4) bg_button_pane_cp72

0xd328,	// (0x0002b6f5) cell_afind_grid_control_pane_g1

0x509e,	// (0x0002346b) aid_image_placing_area_ParamLimits

0x509e,	// (0x0002346b) aid_image_placing_area

0xcd86,	// (0x0002b153) field_vitu_entry_pane_g1_ParamLimits

0xcd86,	// (0x0002b153) field_vitu_entry_pane_g1

0xcd92,	// (0x0002b15f) field_vitu_entry_pane_g2_ParamLimits

0xcd92,	// (0x0002b15f) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0002dbfb) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0002dbfb) field_vitu_entry_pane_g

0x670e,	// (0x00024adb) cell_vitu_itu_pane_g1_ParamLimits

0x6750,	// (0x00024b1d) cell_vitu_itu_pane_t3_ParamLimits

0x6750,	// (0x00024b1d) cell_vitu_itu_pane_t3

0xd068,	// (0x0002b435) mp4_progress_pane_t1_ParamLimits

0xd081,	// (0x0002b44e) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0002dc90) mp4_progress_pane_t_ParamLimits

0xd09a,	// (0x0002b467) mup_progress_pane_cp04_ParamLimits

0x6bd6,	// (0x00024fa3) main_myfav_hc_pane_t5_ParamLimits

0x6bd6,	// (0x00024fa3) main_myfav_hc_pane_t5

0x0d0e,	// (0x0001f0db) aid_zoom_text_primary

0x0e4b,	// (0x0001f218) popup_adpt_find_window_ParamLimits

0x13c2,	// (0x0001f78f) main_cam_set_pane

0x1da7,	// (0x00020174) cam4_zoom_pane_ParamLimits

0x1da7,	// (0x00020174) cam4_zoom_pane

0x6ce0,	// (0x000250ad) main_cam_set_pane_g1_ParamLimits

0x6ce0,	// (0x000250ad) main_cam_set_pane_g1

0x6cee,	// (0x000250bb) main_cam_set_pane_g2_ParamLimits

0x6cee,	// (0x000250bb) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0002dd51) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0002dd51) main_cam_set_pane_g

0x6cfa,	// (0x000250c7) main_cam_set_pane_t1_ParamLimits

0x6cfa,	// (0x000250c7) main_cam_set_pane_t1

0x6d16,	// (0x000250e3) main_cset_listscroll_pane_ParamLimits

0x6d16,	// (0x000250e3) main_cset_listscroll_pane

0x6d41,	// (0x0002510e) main_cset_slider_pane_ParamLimits

0x6d41,	// (0x0002510e) main_cset_slider_pane

0xd339,	// (0x0002b706) main_cset_list_pane_ParamLimits

0xd339,	// (0x0002b706) main_cset_list_pane

0xd349,	// (0x0002b716) scroll_pane_cp028

0x6d60,	// (0x0002512d) aid_area_touch_slider

0x6d7c,	// (0x00025149) cset_slider_pane

0x6da6,	// (0x00025173) main_cset_slider_pane_g1

0x6dbb,	// (0x00025188) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0002dd56) main_cset_slider_pane_g

0xd382,	// (0x0002b74f) main_cset_slider_pane_t1

0x6e81,	// (0x0002524e) main_cset_slider_pane_t2

0x6e9b,	// (0x00025268) main_cset_slider_pane_t3

0x6eb5,	// (0x00025282) main_cset_slider_pane_t4

0x6ed3,	// (0x000252a0) main_cset_slider_pane_t5

0x6ef1,	// (0x000252be) main_cset_slider_pane_t6

0x6f08,	// (0x000252d5) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0002dd7b) main_cset_slider_pane_t

0x7016,	// (0x000253e3) cset_list_set_pane_ParamLimits

0x7016,	// (0x000253e3) cset_list_set_pane

0x702f,	// (0x000253fc) aid_position_infowindow_above

0x7037,	// (0x00025404) aid_position_infowindow_below

0x703f,	// (0x0002540c) cset_list_set_pane_g1_ParamLimits

0x703f,	// (0x0002540c) cset_list_set_pane_g1

0x704b,	// (0x00025418) cset_list_set_pane_g3_ParamLimits

0x704b,	// (0x00025418) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0002dd9a) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0002dd9a) cset_list_set_pane_g

0x705a,	// (0x00025427) cset_list_set_pane_t1_ParamLimits

0x705a,	// (0x00025427) cset_list_set_pane_t1

0xa3a1,	// (0x0002876e) list_highlight_pane_cp021_ParamLimits

0xa3a1,	// (0x0002876e) list_highlight_pane_cp021

0xb01c,	// (0x000293e9) cset_slider_pane_g1

0xb02e,	// (0x000293fb) cset_slider_pane_g2

0xb025,	// (0x000293f2) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0002dd9f) cset_slider_pane_g

0x2275,	// (0x00020642) aid_area_touch_cam4_zoom

0x227d,	// (0x0002064a) cam4_zoom_cont_pane

0x2285,	// (0x00020652) cam4_zoom_pane_g1

0x228d,	// (0x0002065a) cam4_zoom_pane_g2

0x2295,	// (0x00020662) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0002dda6) cam4_zoom_pane_g

0x229d,	// (0x0002066a) cam4_zoom_cont_pane_g1

0x22a6,	// (0x00020673) cam4_zoom_cont_pane_g2

0x22af,	// (0x0002067c) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0002ddad) cam4_zoom_cont_pane_g

0x697d,	// (0x00024d4a) call4_image_pane_ParamLimits

0x697d,	// (0x00024d4a) call4_image_pane

0xd0c4,	// (0x0002b491) call4_windows_conf_pane_ParamLimits

0xd105,	// (0x0002b4d2) popup_call4_audio_in_window_ParamLimits

0xd105,	// (0x0002b4d2) popup_call4_audio_in_window

0x9b4b,	// (0x00027f18) bg_popup_call2_act_pane_cp02

0xd17b,	// (0x0002b548) call4_list_conf_pane

0xc739,	// (0x0002ab06) call4_image_pane_g1

0xc739,	// (0x0002ab06) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0002dabc) call4_image_pane_g

0xd44f,	// (0x0002b81c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd44f,	// (0x0002b81c) list_single_graphic_popup_conf4_pane

0x9b4b,	// (0x00027f18) list_highlight_pane_cp022

0xd462,	// (0x0002b82f) list_single_graphic_popup_conf4_pane_g1

0xac26,	// (0x00028ff3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0002ddb4) list_single_graphic_popup_conf4_pane_g

0xd46a,	// (0x0002b837) list_single_graphic_popup_conf4_pane_t1

0x3364,	// (0x00021731) popup_vtel_slider_window_ParamLimits

0x3364,	// (0x00021731) popup_vtel_slider_window

0xd0a6,	// (0x0002b473) dialer2_ne_pane_t2_ParamLimits

0xd0a6,	// (0x0002b473) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0002dc95) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0002dc95) dialer2_ne_pane_t

0xa3a1,	// (0x0002876e) bg_popup_sub_pane_cp010_ParamLimits

0xa3a1,	// (0x0002876e) bg_popup_sub_pane_cp010

0x706f,	// (0x0002543c) popup_vtel_slider_window_g1_ParamLimits

0x706f,	// (0x0002543c) popup_vtel_slider_window_g1

0x707b,	// (0x00025448) popup_vtel_slider_window_g2_ParamLimits

0x707b,	// (0x00025448) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0002ddb9) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0002ddb9) popup_vtel_slider_window_g

0x70c3,	// (0x00025490) vtel_slider_pane_ParamLimits

0x70c3,	// (0x00025490) vtel_slider_pane

0x70d2,	// (0x0002549f) vtel_slider_pane_g1_ParamLimits

0x70d2,	// (0x0002549f) vtel_slider_pane_g1

0x70df,	// (0x000254ac) vtel_slider_pane_g2_ParamLimits

0x70df,	// (0x000254ac) vtel_slider_pane_g2

0x70ec,	// (0x000254b9) vtel_slider_pane_g3_ParamLimits

0x70ec,	// (0x000254b9) vtel_slider_pane_g3

0x70d2,	// (0x0002549f) vtel_slider_pane_g4_ParamLimits

0x70d2,	// (0x0002549f) vtel_slider_pane_g4

0x70f9,	// (0x000254c6) vtel_slider_pane_g5_ParamLimits

0x70f9,	// (0x000254c6) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0002ddc2) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0002ddc2) vtel_slider_pane_g

0x13c2,	// (0x0001f78f) main_gallery2_pane

0x1fbb,	// (0x00020388) aid_size_row_itut2_dropdow_list_ParamLimits

0x1fbb,	// (0x00020388) aid_size_row_itut2_dropdow_list

0x2029,	// (0x000203f6) grid_vitu2_function_top_pane_ParamLimits

0x2029,	// (0x000203f6) grid_vitu2_function_top_pane

0x2083,	// (0x00020450) popup_vitu2_dropdown_list_window_ParamLimits

0x2083,	// (0x00020450) popup_vitu2_dropdown_list_window

0x20a3,	// (0x00020470) popup_vitu2_match_list_window

0x22b8,	// (0x00020685) cell_vitu2_function_top_pane_ParamLimits

0x22b8,	// (0x00020685) cell_vitu2_function_top_pane

0x22d2,	// (0x0002069f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x22d2,	// (0x0002069f) cell_vitu2_function_top_pane_cp01

0x22ee,	// (0x000206bb) cell_vitu2_function_top_wide_pane_ParamLimits

0x22ee,	// (0x000206bb) cell_vitu2_function_top_wide_pane

0x13c2,	// (0x0001f78f) bg_button_pane_cp012

0x230a,	// (0x000206d7) cell_vitu2_function_top_pane_g1

0x231e,	// (0x000206eb) bg_button_pane_cp013_ParamLimits

0x231e,	// (0x000206eb) bg_button_pane_cp013

0x7106,	// (0x000254d3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7106,	// (0x000254d3) cell_vitu2_function_top_wide_pane_g1

0x0f42,	// (0x0001f30f) bg_popup_sub_pane_cp20

0x233a,	// (0x00020707) list_vitu2_match_list_pane

0xd22f,	// (0x0002b5fc) bg_popup_sub_pane_cp20_g1

0xd237,	// (0x0002b604) bg_popup_sub_pane_cp20_g2

0xa6fe,	// (0x00028acb) bg_popup_sub_pane_cp20_g3

0xd23f,	// (0x0002b60c) bg_popup_sub_pane_cp20_g4

0xa6de,	// (0x00028aab) bg_popup_sub_pane_cp20_g5

0xd48e,	// (0x0002b85b) bg_popup_sub_pane_cp20_g6

0xd24f,	// (0x0002b61c) bg_popup_sub_pane_cp20_g7

0xd257,	// (0x0002b624) bg_popup_sub_pane_cp20_g8

0xd25f,	// (0x0002b62c) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0002ddcd) bg_popup_sub_pane_cp20_g

0x2352,	// (0x0002071f) list_vitu2_match_list_item_pane_ParamLimits

0x2352,	// (0x0002071f) list_vitu2_match_list_item_pane

0x2364,	// (0x00020731) list_vitu2_match_list_item_pane_t1

0x0f50,	// (0x0001f31d) bg_popup_sub_pane_cp21

0x2372,	// (0x0002073f) grid_vitu2_dropdown_list_pane

0x237a,	// (0x00020747) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x237a,	// (0x00020747) cell_vitu2_dropdown_list_char_pane

0x239b,	// (0x00020768) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x239b,	// (0x00020768) cell_vitu2_dropdown_list_ctrl_pane

0xd496,	// (0x0002b863) cell_vitu2_dropdown_list_char_pane_g1

0xd49f,	// (0x0002b86c) cell_vitu2_dropdown_list_char_pane_g2

0xd4a8,	// (0x0002b875) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0002ddea) cell_vitu2_dropdown_list_char_pane_g

0x23c7,	// (0x00020794) cell_vitu2_dropdown_list_char_pane_t1

0x7166,	// (0x00025533) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7166,	// (0x00025533) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7176,	// (0x00025543) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7176,	// (0x00025543) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7187,	// (0x00025554) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7187,	// (0x00025554) cell_vitu2_dropdown_list_ctrl_pane_g3

0x23d5,	// (0x000207a2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x23d5,	// (0x000207a2) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1e17,	// (0x000201e4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1e17,	// (0x000201e4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0002ddf1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0002ddf1) cell_vitu2_dropdown_list_ctrl_pane_g

0x7197,	// (0x00025564) aid_size_cell_gallery2_ParamLimits

0x7197,	// (0x00025564) aid_size_cell_gallery2

0x71b1,	// (0x0002557e) grid_gallery2_pane_ParamLimits

0x71b1,	// (0x0002557e) grid_gallery2_pane

0x6595,	// (0x00024962) scroll_pane_cp029_ParamLimits

0x6595,	// (0x00024962) scroll_pane_cp029

0x71c8,	// (0x00025595) cell_gallery2_pane_ParamLimits

0x71c8,	// (0x00025595) cell_gallery2_pane

0xd4b1,	// (0x0002b87e) cell_gallery2_pane_g2

0x721a,	// (0x000255e7) cell_gallery2_pane_g3

0xd4b9,	// (0x0002b886) cell_gallery2_pane_g4

0xd4c1,	// (0x0002b88e) cell_gallery2_pane_g5

0xa4a5,	// (0x00028872) grid_highlight_pane_cp10

0x20a3,	// (0x00020470) popup_vitu2_match_list_window_ParamLimits

0x20b5,	// (0x00020482) popup_vitu2_query_window_ParamLimits

0x20b5,	// (0x00020482) popup_vitu2_query_window

0x0f50,	// (0x0001f31d) bg_vitu2_candi_button_pane

0xd496,	// (0x0002b863) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd49f,	// (0x0002b86c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4a8,	// (0x0002b875) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7222,	// (0x000255ef) bg_button_pane_cp015

0x7234,	// (0x00025601) bg_button_pane_cp016

0x7247,	// (0x00025614) bg_button_pane_cp017

0xc331,	// (0x0002a6fe) bg_popup_sub_pane_cp22

0xd4c9,	// (0x0002b896) popup_vitu2_query_window_g1

0x728c,	// (0x00025659) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0002ddfc) popup_vitu2_query_window_g

0x72a9,	// (0x00025676) popup_vitu2_query_window_t1_ParamLimits

0x72a9,	// (0x00025676) popup_vitu2_query_window_t1

0x72dc,	// (0x000256a9) popup_vitu2_query_window_t2_ParamLimits

0x72dc,	// (0x000256a9) popup_vitu2_query_window_t2

0x72ee,	// (0x000256bb) popup_vitu2_query_window_t3_ParamLimits

0x72ee,	// (0x000256bb) popup_vitu2_query_window_t3

0x7316,	// (0x000256e3) popup_vitu2_query_window_t4_ParamLimits

0x7316,	// (0x000256e3) popup_vitu2_query_window_t4

0x7337,	// (0x00025704) popup_vitu2_query_window_t5_ParamLimits

0x7337,	// (0x00025704) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0002de03) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0002de03) popup_vitu2_query_window_t

0xd331,	// (0x0002b6fe) main_cset_text_pane

0x6d60,	// (0x0002512d) aid_area_touch_slider_ParamLimits

0x6d7c,	// (0x00025149) cset_slider_pane_ParamLimits

0x6da6,	// (0x00025173) main_cset_slider_pane_g1_ParamLimits

0x6dbb,	// (0x00025188) main_cset_slider_pane_g2_ParamLimits

0xd352,	// (0x0002b71f) main_cset_slider_pane_g3_ParamLimits

0xd352,	// (0x0002b71f) main_cset_slider_pane_g3

0x6dd0,	// (0x0002519d) main_cset_slider_pane_g4_ParamLimits

0x6dd0,	// (0x0002519d) main_cset_slider_pane_g4

0x6ddf,	// (0x000251ac) main_cset_slider_pane_g5_ParamLimits

0x6ddf,	// (0x000251ac) main_cset_slider_pane_g5

0x6ded,	// (0x000251ba) main_cset_slider_pane_g6_ParamLimits

0x6ded,	// (0x000251ba) main_cset_slider_pane_g6

0xf989,	// (0x0002dd56) main_cset_slider_pane_g_ParamLimits

0xd382,	// (0x0002b74f) main_cset_slider_pane_t1_ParamLimits

0x6e81,	// (0x0002524e) main_cset_slider_pane_t2_ParamLimits

0x6e9b,	// (0x00025268) main_cset_slider_pane_t3_ParamLimits

0x6eb5,	// (0x00025282) main_cset_slider_pane_t4_ParamLimits

0x6ed3,	// (0x000252a0) main_cset_slider_pane_t5_ParamLimits

0x6ef1,	// (0x000252be) main_cset_slider_pane_t6_ParamLimits

0x6f08,	// (0x000252d5) main_cset_slider_pane_t7_ParamLimits

0x6f36,	// (0x00025303) main_cset_slider_pane_t8_ParamLimits

0x6f36,	// (0x00025303) main_cset_slider_pane_t8

0x6f5e,	// (0x0002532b) main_cset_slider_pane_t9_ParamLimits

0x6f5e,	// (0x0002532b) main_cset_slider_pane_t9

0x6f86,	// (0x00025353) main_cset_slider_pane_t10_ParamLimits

0x6f86,	// (0x00025353) main_cset_slider_pane_t10

0x6fae,	// (0x0002537b) main_cset_slider_pane_t11_ParamLimits

0x6fae,	// (0x0002537b) main_cset_slider_pane_t11

0x6fd8,	// (0x000253a5) main_cset_slider_pane_t12_ParamLimits

0x6fd8,	// (0x000253a5) main_cset_slider_pane_t12

0x6ff7,	// (0x000253c4) main_cset_slider_pane_t13_ParamLimits

0x6ff7,	// (0x000253c4) main_cset_slider_pane_t13

0xf9ae,	// (0x0002dd7b) main_cset_slider_pane_t_ParamLimits

0x9b4b,	// (0x00027f18) bg_popup_sub_pane_cp011

0xd4d5,	// (0x0002b8a2) main_cset_text_pane_g1

0xd4dd,	// (0x0002b8aa) main_cset_text_pane_t1

0xd4eb,	// (0x0002b8b8) main_cset_text_pane_t2

0xd4f9,	// (0x0002b8c6) main_cset_text_pane_t3

0xd507,	// (0x0002b8d4) main_cset_text_pane_t4

0xd515,	// (0x0002b8e2) main_cset_text_pane_t5

0xd523,	// (0x0002b8f0) main_cset_text_pane_t6

0xd531,	// (0x0002b8fe) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0002de12) main_cset_text_pane_t

0x0f50,	// (0x0001f31d) main_cam4_burst_pane

0x0f50,	// (0x0001f31d) main_cam5_pane

0x6caf,	// (0x0002507c) bg_button_pane_cp019

0x6cb8,	// (0x00025085) bg_button_pane_cp020

0xd35e,	// (0x0002b72b) main_cset_slider_pane_g7_ParamLimits

0xd35e,	// (0x0002b72b) main_cset_slider_pane_g7

0xd36a,	// (0x0002b737) main_cset_slider_pane_g8_ParamLimits

0xd36a,	// (0x0002b737) main_cset_slider_pane_g8

0x6e01,	// (0x000251ce) main_cset_slider_pane_g9_ParamLimits

0x6e01,	// (0x000251ce) main_cset_slider_pane_g9

0x6e0d,	// (0x000251da) main_cset_slider_pane_g10_ParamLimits

0x6e0d,	// (0x000251da) main_cset_slider_pane_g10

0x6e19,	// (0x000251e6) main_cset_slider_pane_g11_ParamLimits

0x6e19,	// (0x000251e6) main_cset_slider_pane_g11

0x6e25,	// (0x000251f2) main_cset_slider_pane_g12_ParamLimits

0x6e25,	// (0x000251f2) main_cset_slider_pane_g12

0x6e31,	// (0x000251fe) main_cset_slider_pane_g13_ParamLimits

0x6e31,	// (0x000251fe) main_cset_slider_pane_g13

0x6e3f,	// (0x0002520c) main_cset_slider_pane_g14_ParamLimits

0x6e3f,	// (0x0002520c) main_cset_slider_pane_g14

0x6e4d,	// (0x0002521a) main_cset_slider_pane_g15_ParamLimits

0x6e4d,	// (0x0002521a) main_cset_slider_pane_g15

0xd3b0,	// (0x0002b77d) main_cset_slider_pane_t14_ParamLimits

0xd3b0,	// (0x0002b77d) main_cset_slider_pane_t14

0xd3e9,	// (0x0002b7b6) main_cset_slider_pane_t15_ParamLimits

0xd3e9,	// (0x0002b7b6) main_cset_slider_pane_t15

0x73ae,	// (0x0002577b) aid_cam4_burst_size_cell_ParamLimits

0x73ae,	// (0x0002577b) aid_cam4_burst_size_cell

0x73ca,	// (0x00025797) grid_cam4_burst_pane_ParamLimits

0x73ca,	// (0x00025797) grid_cam4_burst_pane

0x73fa,	// (0x000257c7) linegrid_cam4_burst_pane_ParamLimits

0x73fa,	// (0x000257c7) linegrid_cam4_burst_pane

0x741a,	// (0x000257e7) scroll_pane_cp30_ParamLimits

0x741a,	// (0x000257e7) scroll_pane_cp30

0x7426,	// (0x000257f3) cell_cam4_burst_pane_ParamLimits

0x7426,	// (0x000257f3) cell_cam4_burst_pane

0xd53f,	// (0x0002b90c) linegrid_cam4_burst_pane_g1_ParamLimits

0xd53f,	// (0x0002b90c) linegrid_cam4_burst_pane_g1

0x7462,	// (0x0002582f) linegrid_cam4_burst_pane_g2_ParamLimits

0x7462,	// (0x0002582f) linegrid_cam4_burst_pane_g2

0xd54c,	// (0x0002b919) linegrid_cam4_burst_pane_g3_ParamLimits

0xd54c,	// (0x0002b919) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0002de21) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0002de21) linegrid_cam4_burst_pane_g

0x7473,	// (0x00025840) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7473,	// (0x00025840) linegrid_cam4_burst_pane_g3_copy1

0xd559,	// (0x0002b926) linegrid_cam4_burst_pane_g4_ParamLimits

0xd559,	// (0x0002b926) linegrid_cam4_burst_pane_g4

0x748d,	// (0x0002585a) linegrid_cam4_burst_pane_g5_ParamLimits

0x748d,	// (0x0002585a) linegrid_cam4_burst_pane_g5

0x749e,	// (0x0002586b) linegrid_cam4_burst_pane_g6_ParamLimits

0x749e,	// (0x0002586b) linegrid_cam4_burst_pane_g6

0xd566,	// (0x0002b933) linegrid_cam4_burst_pane_g7_ParamLimits

0xd566,	// (0x0002b933) linegrid_cam4_burst_pane_g7

0x74af,	// (0x0002587c) cell_cam4_burst_pane_g1

0xd57f,	// (0x0002b94c) main_cam5_pane_t1_ParamLimits

0xd57f,	// (0x0002b94c) main_cam5_pane_t1

0xd591,	// (0x0002b95e) main_cam5_pane_t2_ParamLimits

0xd591,	// (0x0002b95e) main_cam5_pane_t2

0xd5a3,	// (0x0002b970) main_cam5_pane_t3_ParamLimits

0xd5a3,	// (0x0002b970) main_cam5_pane_t3

0xd5b5,	// (0x0002b982) main_cam5_pane_t4_ParamLimits

0xd5b5,	// (0x0002b982) main_cam5_pane_t4

0xd5cd,	// (0x0002b99a) main_cam5_pane_t5_ParamLimits

0xd5cd,	// (0x0002b99a) main_cam5_pane_t5

0xd5e1,	// (0x0002b9ae) main_cam5_pane_t6_ParamLimits

0xd5e1,	// (0x0002b9ae) main_cam5_pane_t6

0xd5f5,	// (0x0002b9c2) main_cam5_pane_t7_ParamLimits

0xd5f5,	// (0x0002b9c2) main_cam5_pane_t7

0xd607,	// (0x0002b9d4) main_cam5_pane_t8_ParamLimits

0xd607,	// (0x0002b9d4) main_cam5_pane_t8

0xd623,	// (0x0002b9f0) main_cam5_pane_t9_ParamLimits

0xd623,	// (0x0002b9f0) main_cam5_pane_t9

0xd635,	// (0x0002ba02) main_cam5_pane_t10_ParamLimits

0xd635,	// (0x0002ba02) main_cam5_pane_t10

0xd647,	// (0x0002ba14) main_cam5_pane_t11_ParamLimits

0xd647,	// (0x0002ba14) main_cam5_pane_t11

0xd659,	// (0x0002ba26) main_cam5_pane_t12_ParamLimits

0xd659,	// (0x0002ba26) main_cam5_pane_t12

0xd66e,	// (0x0002ba3b) main_cam5_pane_t13_ParamLimits

0xd66e,	// (0x0002ba3b) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0002de2d) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0002de2d) main_cam5_pane_t

0x0f01,	// (0x0001f2ce) popup_scut_keymap_window_ParamLimits

0x0f01,	// (0x0001f2ce) popup_scut_keymap_window

0x74c2,	// (0x0002588f) aid_size_cell_brow_shortcut

0xa4a5,	// (0x00028872) bg_popup_window_pane_cp010

0x74ce,	// (0x0002589b) grid_scut_pane

0x74da,	// (0x000258a7) cell_scut_pane_ParamLimits

0x74da,	// (0x000258a7) cell_scut_pane

0x74f1,	// (0x000258be) cell_scut_pane_g1

0xd68b,	// (0x0002ba58) cell_scut_pane_t1

0xd69a,	// (0x0002ba67) cell_scut_pane_t2

0x74fa,	// (0x000258c7) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0002de48) cell_scut_pane_t

0x5df2,	// (0x000241bf) main_mup3_pane_g8_ParamLimits

0x5df2,	// (0x000241bf) main_mup3_pane_g8

0x1fc9,	// (0x00020396) area_vitu2_query_pane_ParamLimits

0x1fc9,	// (0x00020396) area_vitu2_query_pane

0x725a,	// (0x00025627) input_focus_pane_cp08

0xd6c6,	// (0x0002ba93) area_vitu2_query_pane_g1

0x7508,	// (0x000258d5) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0002de4f) area_vitu2_query_pane_g

0x7519,	// (0x000258e6) area_vitu2_query_pane_t1_ParamLimits

0x7519,	// (0x000258e6) area_vitu2_query_pane_t1

0x752d,	// (0x000258fa) area_vitu2_query_pane_t2_ParamLimits

0x752d,	// (0x000258fa) area_vitu2_query_pane_t2

0x7541,	// (0x0002590e) area_vitu2_query_pane_t3_ParamLimits

0x7541,	// (0x0002590e) area_vitu2_query_pane_t3

0xd6d2,	// (0x0002ba9f) area_vitu2_query_pane_t4_ParamLimits

0xd6d2,	// (0x0002ba9f) area_vitu2_query_pane_t4

0xd6fa,	// (0x0002bac7) area_vitu2_query_pane_t5_ParamLimits

0xd6fa,	// (0x0002bac7) area_vitu2_query_pane_t5

0xd722,	// (0x0002baef) area_vitu2_query_pane_t6_ParamLimits

0xd722,	// (0x0002baef) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0002de54) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0002de54) area_vitu2_query_pane_t

0x7569,	// (0x00025936) bg_button_pane_cp018

0x7577,	// (0x00025944) bg_button_pane_cp021

0x7583,	// (0x00025950) bg_button_pane_cp022

0x7594,	// (0x00025961) input_focus_pane_cp09

0xad35,	// (0x00029102) aid_size_touch_mv_arrow_left

0xad60,	// (0x0002912d) aid_size_touch_mv_arrow_right

0x6e65,	// (0x00025232) main_cset_slider_pane_g16_ParamLimits

0x6e65,	// (0x00025232) main_cset_slider_pane_g16

0x6e73,	// (0x00025240) main_cset_slider_pane_g17_ParamLimits

0x6e73,	// (0x00025240) main_cset_slider_pane_g17

0x74af,	// (0x0002587c) cell_cam4_burst_pane_g1_ParamLimits

0x9b4b,	// (0x00027f18) compa_mode_pane

0x7087,	// (0x00025454) popup_vtel_slider_window_g3_ParamLimits

0x7087,	// (0x00025454) popup_vtel_slider_window_g3

0x709b,	// (0x00025468) popup_vtel_slider_window_g4_ParamLimits

0x709b,	// (0x00025468) popup_vtel_slider_window_g4

0x70af,	// (0x0002547c) popup_vtel_slider_window_t1_ParamLimits

0x70af,	// (0x0002547c) popup_vtel_slider_window_t1

0x0f50,	// (0x0001f31d) main_cl_pane

0x145c,	// (0x0001f829) popup_imed_adjust2_window_ParamLimits

0xc331,	// (0x0002a6fe) bg_tb_trans_pane_cp05_ParamLimits

0xccbb,	// (0x0002b088) popup_imed_adjust2_window_g1_ParamLimits

0xccca,	// (0x0002b097) popup_imed_adjust2_window_g2_ParamLimits

0xccca,	// (0x0002b097) popup_imed_adjust2_window_g2

0xccd6,	// (0x0002b0a3) popup_imed_adjust2_window_g3_ParamLimits

0xccd6,	// (0x0002b0a3) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0002dbbf) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0002dbbf) popup_imed_adjust2_window_g

0xcce2,	// (0x0002b0af) popup_imed_adjust2_window_t1_ParamLimits

0xccfa,	// (0x0002b0c7) slider_imed_adjust_pane_ParamLimits

0xcd0e,	// (0x0002b0db) slider_imed_adjust_pane_g1_ParamLimits

0xcd1e,	// (0x0002b0eb) slider_imed_adjust_pane_g2_ParamLimits

0xcd2e,	// (0x0002b0fb) slider_imed_adjust_pane_g3_ParamLimits

0xcd3f,	// (0x0002b10c) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0002dbc6) slider_imed_adjust_pane_g_ParamLimits

0x1d50,	// (0x0002011d) aid_touch_area_cam4_ParamLimits

0x1d50,	// (0x0002011d) aid_touch_area_cam4

0x1d60,	// (0x0002012d) battery_pane_cp01

0x1de7,	// (0x000201b4) main_camera4_pane_g6_ParamLimits

0x1de7,	// (0x000201b4) main_camera4_pane_g6

0x1e05,	// (0x000201d2) main_camera4_pane_t2_ParamLimits

0x1e05,	// (0x000201d2) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0002dcc9) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0002dcc9) main_camera4_pane_t

0x1e70,	// (0x0002023d) aid_touch_area_vid4_ParamLimits

0x1e70,	// (0x0002023d) aid_touch_area_vid4

0x1eb0,	// (0x0002027d) main_video4_pane_g5_ParamLimits

0x1eb0,	// (0x0002027d) main_video4_pane_g5

0x1ed4,	// (0x000202a1) vid4_progress_pane_ParamLimits

0x1ed4,	// (0x000202a1) vid4_progress_pane

0xd376,	// (0x0002b743) main_cset_slider_pane_g18_ParamLimits

0xd376,	// (0x0002b743) main_cset_slider_pane_g18

0xd573,	// (0x0002b940) cell_cam4_burst_pane_g2_ParamLimits

0xd573,	// (0x0002b940) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0002de28) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0002de28) cell_cam4_burst_pane_g

0x75a5,	// (0x00025972) bg_cl_pane_ParamLimits

0x75a5,	// (0x00025972) bg_cl_pane

0x75b1,	// (0x0002597e) cl_header_pane_ParamLimits

0x75b1,	// (0x0002597e) cl_header_pane

0x75bd,	// (0x0002598a) cl_listscroll_pane_ParamLimits

0x75bd,	// (0x0002598a) cl_listscroll_pane

0xd76e,	// (0x0002bb3b) bg_cl_pane_g1

0xd776,	// (0x0002bb43) bg_cl_pane_g2

0xd77e,	// (0x0002bb4b) bg_cl_pane_g3

0xd786,	// (0x0002bb53) bg_cl_pane_g4

0xd78e,	// (0x0002bb5b) bg_cl_pane_g5

0xd796,	// (0x0002bb63) bg_cl_pane_g6

0xd79e,	// (0x0002bb6b) bg_cl_pane_g7

0xd7a6,	// (0x0002bb73) bg_cl_pane_g8

0xd7ae,	// (0x0002bb7b) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0002de63) bg_cl_pane_g

0x75c9,	// (0x00025996) aid_height_cl_leading_ParamLimits

0x75c9,	// (0x00025996) aid_height_cl_leading

0x75d5,	// (0x000259a2) aid_height_cl_text_ParamLimits

0x75d5,	// (0x000259a2) aid_height_cl_text

0xd1a7,	// (0x0002b574) bg_cl_header_pane_ParamLimits

0xd1a7,	// (0x0002b574) bg_cl_header_pane

0x75ed,	// (0x000259ba) cl_header_pane_g1_ParamLimits

0x75ed,	// (0x000259ba) cl_header_pane_g1

0x75fa,	// (0x000259c7) cl_header_pane_t1_ParamLimits

0x75fa,	// (0x000259c7) cl_header_pane_t1

0xd7b6,	// (0x0002bb83) cl_list_pane

0xd349,	// (0x0002b716) hc_scroll_pane_cp01

0xa6de,	// (0x00028aab) bg_cl_header_pane_g1

0xd22f,	// (0x0002b5fc) bg_cl_header_pane_g2

0xa6fe,	// (0x00028acb) bg_cl_header_pane_g3

0xd23f,	// (0x0002b60c) bg_cl_header_pane_g4

0xd237,	// (0x0002b604) bg_cl_header_pane_g5

0xd48e,	// (0x0002b85b) bg_cl_header_pane_g6

0xd257,	// (0x0002b624) bg_cl_header_pane_g7

0xd25f,	// (0x0002b62c) bg_cl_header_pane_g8

0xd24f,	// (0x0002b61c) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0002de76) bg_cl_header_pane_g

0x760c,	// (0x000259d9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x760c,	// (0x000259d9) hc_cl_list_double_graphic_heading_pane

0x7620,	// (0x000259ed) hc_cl_list_single_graphic_pane_ParamLimits

0x7620,	// (0x000259ed) hc_cl_list_single_graphic_pane

0x763a,	// (0x00025a07) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x763a,	// (0x00025a07) hc_cl_list_single_graphic_pane_g1

0x7646,	// (0x00025a13) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7646,	// (0x00025a13) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0002de89) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0002de89) hc_cl_list_single_graphic_pane_g

0x765a,	// (0x00025a27) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x765a,	// (0x00025a27) hc_cl_list_single_graphic_pane_t1

0x763a,	// (0x00025a07) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x763a,	// (0x00025a07) hc_cl_list_double_graphic_heading_pane_g1

0x766f,	// (0x00025a3c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x766f,	// (0x00025a3c) hc_cl_list_double_graphic_heading_pane_g2

0x7683,	// (0x00025a50) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7683,	// (0x00025a50) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0002de8e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0002de8e) hc_cl_list_double_graphic_heading_pane_g

0x7697,	// (0x00025a64) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7697,	// (0x00025a64) hc_cl_list_double_graphic_heading_pane_t1

0x76ac,	// (0x00025a79) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x76ac,	// (0x00025a79) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0002de95) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0002de95) hc_cl_list_double_graphic_heading_pane_t

0x23f9,	// (0x000207c6) vid4_progress_pane_g1

0x2409,	// (0x000207d6) vid4_progress_pane_g2

0x2419,	// (0x000207e6) vid4_progress_pane_g3

0x242b,	// (0x000207f8) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0002de9a) vid4_progress_pane_g

0x2443,	// (0x00020810) vid4_progress_pane_t1

0x2459,	// (0x00020826) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0002dea5) vid4_progress_pane_t

0x2484,	// (0x00020851) wait_bar_pane_cp07

0xc52c,	// (0x0002a8f9) blid_firmament_pane_ParamLimits

0xc56f,	// (0x0002a93c) popup_blid_sat_info2_window_g1

0xc593,	// (0x0002a960) popup_blid_sat_info2_window_t3

0xc5a1,	// (0x0002a96e) popup_blid_sat_info2_window_t4

0xc5af,	// (0x0002a97c) popup_blid_sat_info2_window_t5

0xc5bd,	// (0x0002a98a) popup_blid_sat_info2_window_t6

0xc5cd,	// (0x0002a99a) popup_blid_sat_info2_window_t7

0xc5db,	// (0x0002a9a8) popup_blid_sat_info2_window_t8

0xc5e9,	// (0x0002a9b6) popup_blid_sat_info2_window_t9

0xc5f7,	// (0x0002a9c4) popup_blid_sat_info2_window_t10

0xc6b9,	// (0x0002aa86) aid_firma_cardinal_ParamLimits

0xc6cd,	// (0x0002aa9a) blid_firmament_pane_t1_ParamLimits

0xc6e4,	// (0x0002aab1) blid_firmament_pane_t2_ParamLimits

0xc6fb,	// (0x0002aac8) blid_firmament_pane_t3_ParamLimits

0xc712,	// (0x0002aadf) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0002dab3) blid_firmament_pane_t_ParamLimits

0xc729,	// (0x0002aaf6) blid_sat_info_pane_ParamLimits

0x13c2,	// (0x0001f78f) main_cam_set_pane_ParamLimits

0x652e,	// (0x000248fb) aid_size_cell_colour_35_ParamLimits

0x6548,	// (0x00024915) aid_size_cell_colour_112_ParamLimits

0x655f,	// (0x0002492c) aid_size_cell_effect_ParamLimits

0xa3a1,	// (0x0002876e) bg_tb_trans_pane_cp02_ParamLimits

0xab8b,	// (0x00028f58) heading_imed_pane_ParamLimits

0x6579,	// (0x00024946) listscroll_imed_pane_ParamLimits

0xb917,	// (0x00029ce4) popup_call2_audio_first_window_g5_ParamLimits

0xb917,	// (0x00029ce4) popup_call2_audio_first_window_g5

0x1bdb,	// (0x0001ffa8) aid_size_touch_image3_arrow_left_ParamLimits

0x1bdb,	// (0x0001ffa8) aid_size_touch_image3_arrow_left

0x1bf1,	// (0x0001ffbe) aid_size_touch_image3_arrow_right_ParamLimits

0x1bf1,	// (0x0001ffbe) aid_size_touch_image3_arrow_right

0x246e,	// (0x0002083b) vid4_progress_pane_t3

0x6819,	// (0x00024be6) main_hwr_training_symbol_option_pane_ParamLimits

0x6819,	// (0x00024be6) main_hwr_training_symbol_option_pane

0xcfa8,	// (0x0002b375) popup_hwr_training_preview_window_ParamLimits

0xcfa8,	// (0x0002b375) popup_hwr_training_preview_window

0x18d9,	// (0x0001fca6) hwr_training_navi_pane_g5_ParamLimits

0x18d9,	// (0x0001fca6) hwr_training_navi_pane_g5

0xd21d,	// (0x0002b5ea) popup_char_count_window

0x0f42,	// (0x0001f30f) bg_popup_sub_pane_cp20_ParamLimits

0x233a,	// (0x00020707) list_vitu2_match_list_pane_ParamLimits

0x2346,	// (0x00020713) vitu2_page_scroll_pane_ParamLimits

0x2346,	// (0x00020713) vitu2_page_scroll_pane

0xd7e1,	// (0x0002bbae) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7e1,	// (0x0002bbae) list_single_hwr_training_symbol_option_pane

0xd7f4,	// (0x0002bbc1) list_single_hwr_training_symbol_option_pane_g1

0xd7fc,	// (0x0002bbc9) list_single_hwr_training_symbol_option_pane_t1

0xd80a,	// (0x0002bbd7) bg_button_pane_cp023

0xd813,	// (0x0002bbe0) bg_button_pane_cp024

0x76f9,	// (0x00025ac6) vitu2_page_scroll_pane_g1

0x7701,	// (0x00025ace) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0002deac) vitu2_page_scroll_pane_g

0x7709,	// (0x00025ad6) vitu2_page_scroll_pane_t1

0xc762,	// (0x0002ab2f) popup_char_count_window_g1

0xd846,	// (0x0002bc13) popup_char_count_window_g2

0xd84f,	// (0x0002bc1c) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0002deb1) popup_char_count_window_g

0xd858,	// (0x0002bc25) popup_char_count_window_t1

0x0f50,	// (0x0001f31d) main_vded2_pane

0xcca7,	// (0x0002b074) aid_size_cell_imed_line

0xccb1,	// (0x0002b07e) grid_imed_line_width_pane

0x1f40,	// (0x0002030d) vid4_indicators_pane_g4

0xd866,	// (0x0002bc33) cell_imed_line_width_pane_ParamLimits

0xd866,	// (0x0002bc33) cell_imed_line_width_pane

0xd87a,	// (0x0002bc47) cell_imed_line_width_pane_g1

0xd6be,	// (0x0002ba8b) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0002deb8) cell_imed_line_width_pane_g

0x7718,	// (0x00025ae5) main_vded2_pane_g1_ParamLimits

0x7718,	// (0x00025ae5) main_vded2_pane_g1

0x7725,	// (0x00025af2) main_vded2_pane_g2_ParamLimits

0x7725,	// (0x00025af2) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0002debd) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0002debd) main_vded2_pane_g

0x7733,	// (0x00025b00) vded2_slider_pane_ParamLimits

0x7733,	// (0x00025b00) vded2_slider_pane

0x7740,	// (0x00025b0d) aid_size_touch_vded2_end

0x774a,	// (0x00025b17) aid_size_touch_vded2_playhead

0xd883,	// (0x0002bc50) aid_size_touch_vded2_start

0xd88b,	// (0x0002bc58) vded2_slider_bg_pane

0xd894,	// (0x0002bc61) vded2_slider_pane_g1

0xd89d,	// (0x0002bc6a) vded2_slider_pane_g2

0x7752,	// (0x00025b1f) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0002dec2) vded2_slider_pane_g

0xd8a5,	// (0x0002bc72) vded2_slider_bg_pane_g1

0xd8ae,	// (0x0002bc7b) vded2_slider_bg_pane_g2

0xd8b7,	// (0x0002bc84) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0002dec9) vded2_slider_bg_pane_g

0x4e09,	// (0x000231d6) aid_postcard_touch_down_pane_ParamLimits

0x4e09,	// (0x000231d6) aid_postcard_touch_down_pane

0x4e19,	// (0x000231e6) aid_postcard_touch_up_pane_ParamLimits

0x4e19,	// (0x000231e6) aid_postcard_touch_up_pane

0x0f50,	// (0x0001f31d) main_blid2_pane

0x13eb,	// (0x0001f7b8) popup_blid2_search_window

0x9b4b,	// (0x00027f18) blid2_gps_pane

0x9b4b,	// (0x00027f18) blid2_navig_pane

0x9b4b,	// (0x00027f18) blid2_search_pane

0x9b4b,	// (0x00027f18) blid2_tripm_pane

0x775b,	// (0x00025b28) blid2_search_pane_g1_ParamLimits

0x775b,	// (0x00025b28) blid2_search_pane_g1

0x776b,	// (0x00025b38) blid2_search_pane_t1_ParamLimits

0x776b,	// (0x00025b38) blid2_search_pane_t1

0x777d,	// (0x00025b4a) aid_size_cell_blid2_gps_ParamLimits

0x777d,	// (0x00025b4a) aid_size_cell_blid2_gps

0x778d,	// (0x00025b5a) blid2_gps_pane_g1_ParamLimits

0x778d,	// (0x00025b5a) blid2_gps_pane_g1

0x7799,	// (0x00025b66) grid_blid2_satellite_pane_ParamLimits

0x7799,	// (0x00025b66) grid_blid2_satellite_pane

0x77a9,	// (0x00025b76) blid2_navig_pane_g1_ParamLimits

0x77a9,	// (0x00025b76) blid2_navig_pane_g1

0x77b5,	// (0x00025b82) blid2_navig_pane_t1_ParamLimits

0x77b5,	// (0x00025b82) blid2_navig_pane_t1

0x77c7,	// (0x00025b94) blid2_navig_pane_t2_ParamLimits

0x77c7,	// (0x00025b94) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0002ded0) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0002ded0) blid2_navig_pane_t

0x77d9,	// (0x00025ba6) blid2_navig_ring_pane_ParamLimits

0x77d9,	// (0x00025ba6) blid2_navig_ring_pane

0x77e9,	// (0x00025bb6) blid2_speed_pane_ParamLimits

0x77e9,	// (0x00025bb6) blid2_speed_pane

0x77f5,	// (0x00025bc2) blid2_tripm_pane_g1_ParamLimits

0x77f5,	// (0x00025bc2) blid2_tripm_pane_g1

0x7805,	// (0x00025bd2) blid2_tripm_pane_g2_ParamLimits

0x7805,	// (0x00025bd2) blid2_tripm_pane_g2

0x7811,	// (0x00025bde) blid2_tripm_pane_g3_ParamLimits

0x7811,	// (0x00025bde) blid2_tripm_pane_g3

0x781d,	// (0x00025bea) blid2_tripm_pane_g4_ParamLimits

0x781d,	// (0x00025bea) blid2_tripm_pane_g4

0x7829,	// (0x00025bf6) blid2_tripm_pane_g5_ParamLimits

0x7829,	// (0x00025bf6) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0002ded5) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0002ded5) blid2_tripm_pane_g

0x7845,	// (0x00025c12) blid2_tripm_pane_t1_ParamLimits

0x7845,	// (0x00025c12) blid2_tripm_pane_t1

0x7859,	// (0x00025c26) blid2_tripm_pane_t2_ParamLimits

0x7859,	// (0x00025c26) blid2_tripm_pane_t2

0x786b,	// (0x00025c38) blid2_tripm_pane_t3_ParamLimits

0x786b,	// (0x00025c38) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0002dee2) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0002dee2) blid2_tripm_pane_t

0x789d,	// (0x00025c6a) cell_blid2_satellite_pane_ParamLimits

0x789d,	// (0x00025c6a) cell_blid2_satellite_pane

0x78b7,	// (0x00025c84) cell_blid2_satellite_pane_g1

0xd8ca,	// (0x0002bc97) cell_blid2_satellite_pane_t1

0xc739,	// (0x0002ab06) blid2_speed_pane_g1

0xd8d8,	// (0x0002bca5) blid2_speed_pane_t1

0xd8e6,	// (0x0002bcb3) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0002deeb) blid2_speed_pane_t

0xc739,	// (0x0002ab06) blid2_navig_ring_pane_g1

0x78c0,	// (0x00025c8d) blid2_navig_ring_pane_g2

0x78c8,	// (0x00025c95) blid2_navig_ring_pane_g3

0x78d0,	// (0x00025c9d) blid2_navig_ring_pane_g4

0x78d8,	// (0x00025ca5) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0002def0) blid2_navig_ring_pane_g

0x9b4b,	// (0x00027f18) bg_popup_window_pane_cp011

0xd8f4,	// (0x0002bcc1) popup_blid2_search_window_g1

0xd8fc,	// (0x0002bcc9) popup_blid2_search_window_t1

0xd90a,	// (0x0002bcd7) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0002defb) popup_blid2_search_window_t

0xa5ed,	// (0x000289ba) main_browser_pane_g1

0xa294,	// (0x00028661) main_browser_pane_ParamLimits

0x13c2,	// (0x0001f78f) bg_button_pane_cp011_ParamLimits

0x2261,	// (0x0002062e) cell_vitu2_function_pane_g1_ParamLimits

0xc331,	// (0x0002a6fe) bg_popup_sub_pane_cp22_ParamLimits

0x725a,	// (0x00025627) input_focus_pane_cp08_ParamLimits

0x7271,	// (0x0002563e) popup_vitu2_query_button_pane_ParamLimits

0x7271,	// (0x0002563e) popup_vitu2_query_button_pane

0x7282,	// (0x0002564f) popup_vitu2_query_input_button_pane

0xd4c9,	// (0x0002b896) popup_vitu2_query_window_g1_ParamLimits

0x728c,	// (0x00025659) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0002ddfc) popup_vitu2_query_window_g_ParamLimits

0x9b4b,	// (0x00027f18) bg_button_pane_cp026

0x78e0,	// (0x00025cad) popup_vitu2_query_input_button_pane_g1

0x9b4b,	// (0x00027f18) bg_button_pane_cp025

0xd918,	// (0x0002bce5) popup_vitu2_query_button_pane_t1

0x5b32,	// (0x00023eff) main_mp3_pane_t6

0x5b42,	// (0x00023f0f) popup_slider_window_cp01

0x1e25,	// (0x000201f2) cam4_battery_pane

0x1eff,	// (0x000202cc) cam4_battery_pane_cp02

0x23f1,	// (0x000207be) cam4_battery_pane_cp01

0x23f1,	// (0x000207be) cam4_battery_pane_cp03

0xd8c0,	// (0x0002bc8d) cam4_battery_pane_g1

0xc739,	// (0x0002ab06) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0002df00) cam4_battery_pane_g

0xc605,	// (0x0002a9d2) popup_blid_sat_info2_window_t11

0xad35,	// (0x00029102) aid_size_touch_mv_arrow_left_ParamLimits

0xad60,	// (0x0002912d) aid_size_touch_mv_arrow_right_ParamLimits

0xadbe,	// (0x0002918b) navi_pane_g1_ParamLimits

0xadca,	// (0x00029197) navi_pane_g2_ParamLimits

0xadf8,	// (0x000291c5) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002d7b2) navi_pane_g_ParamLimits

0x482c,	// (0x00022bf9) navi_pane_mv_t1_ParamLimits

0x6585,	// (0x00024952) grid_imed_effect_pane_ParamLimits

0x3224,	// (0x000215f1) aid_placing_vt_slider_lsc

0xa53c,	// (0x00028909) aid_placing_vt_slider_prt

0xa3a1,	// (0x0002876e) bg_tb_trans_pane_cp01_ParamLimits

0xc8a7,	// (0x0002ac74) popup_image_details_window_g1_ParamLimits

0xc8ba,	// (0x0002ac87) popup_image_details_window_g2_ParamLimits

0xc8cf,	// (0x0002ac9c) popup_image_details_window_g3_ParamLimits

0xc8cf,	// (0x0002ac9c) popup_image_details_window_g3

0xf72b,	// (0x0002daf8) popup_image_details_window_g_ParamLimits

0xc8e3,	// (0x0002acb0) popup_image_details_window_t1_ParamLimits

0xc8f5,	// (0x0002acc2) popup_image_details_window_t2_ParamLimits

0xc90e,	// (0x0002acdb) popup_image_details_window_t3_ParamLimits

0xc922,	// (0x0002acef) popup_image_details_window_t4_ParamLimits

0xc93d,	// (0x0002ad0a) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0002daff) popup_image_details_window_t_ParamLimits

0x75e1,	// (0x000259ae) cl_header_name_pane_ParamLimits

0x75e1,	// (0x000259ae) cl_header_name_pane

0x78e8,	// (0x00025cb5) cl_header_name_pane_t1_ParamLimits

0x78e8,	// (0x00025cb5) cl_header_name_pane_t1

0x78ff,	// (0x00025ccc) cl_header_name_pane_t2_ParamLimits

0x78ff,	// (0x00025ccc) cl_header_name_pane_t2

0x7929,	// (0x00025cf6) cl_header_name_pane_t3_ParamLimits

0x7929,	// (0x00025cf6) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0002df05) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0002df05) cl_header_name_pane_t

0xae87,	// (0x00029254) navi_pane_mv_g2_ParamLimits

0xd1da,	// (0x0002b5a7) field_vitu2_entry_pane_g1_ParamLimits

0xd1e6,	// (0x0002b5b3) field_vitu2_entry_pane_g2_ParamLimits

0xd1f2,	// (0x0002b5bf) field_vitu2_entry_pane_g3_ParamLimits

0xd1f2,	// (0x0002b5bf) field_vitu2_entry_pane_g3

0xf92e,	// (0x0002dcfb) field_vitu2_entry_pane_g_ParamLimits

0x212d,	// (0x000204fa) cell_vitu2_itu_pane_g1_ParamLimits

0x213f,	// (0x0002050c) cell_vitu2_itu_pane_g2_ParamLimits

0x213f,	// (0x0002050c) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0002dd07) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0002dd07) cell_vitu2_itu_pane_g

0x13c2,	// (0x0001f78f) bg_vkb2_func_pane_cp05_ParamLimits

0x13c2,	// (0x0001f78f) bg_vkb2_func_pane_cp05

0x13c2,	// (0x0001f78f) bg_vkb2_func_pane_cp03

0x13c2,	// (0x0001f78f) bg_vkb2_func_pane_cp04

0x13c2,	// (0x0001f78f) bg_vkb2_func_pane_cp10_ParamLimits

0x13c2,	// (0x0001f78f) bg_vkb2_func_pane_cp10

0x7583,	// (0x00025950) bg_vkb2_func_pane_cp08

0x7569,	// (0x00025936) bg_vkb2_func_pane_cp06

0x7577,	// (0x00025944) bg_vkb2_func_pane_cp07

0xd81c,	// (0x0002bbe9) bg_vkb2_func_pane_cp11_ParamLimits

0xd81c,	// (0x0002bbe9) bg_vkb2_func_pane_cp11

0xd831,	// (0x0002bbfe) bg_vkb2_func_pane_cp12_ParamLimits

0xd831,	// (0x0002bbfe) bg_vkb2_func_pane_cp12

0x9b4b,	// (0x00027f18) bg_vkb2_func_pane_cp09

0xd22f,	// (0x0002b5fc) bg_vkb2_func_pane_g1

0xa6fe,	// (0x00028acb) bg_vkb2_func_pane_g2

0xd237,	// (0x0002b604) bg_vkb2_func_pane_g3

0xd23f,	// (0x0002b60c) bg_vkb2_func_pane_g4

0xd48e,	// (0x0002b85b) bg_vkb2_func_pane_g5

0xd257,	// (0x0002b624) bg_vkb2_func_pane_g6

0xd25f,	// (0x0002b62c) bg_vkb2_func_pane_g7

0xd24f,	// (0x0002b61c) bg_vkb2_func_pane_g8

0xa6de,	// (0x00028aab) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0002df0c) bg_vkb2_func_pane_g

0x7837,	// (0x00025c04) blid2_tripm_pane_g6_ParamLimits

0x7837,	// (0x00025c04) blid2_tripm_pane_g6

0xd060,	// (0x0002b42d) mp4_progress_pane_g1

0x7891,	// (0x00025c5e) blid2_tripm_values_pane_ParamLimits

0x7891,	// (0x00025c5e) blid2_tripm_values_pane

0x794e,	// (0x00025d1b) blid2_tripm_values_pane_t1

0x795c,	// (0x00025d29) blid2_tripm_values_pane_t2

0x796a,	// (0x00025d37) blid2_tripm_values_pane_t3

0x7978,	// (0x00025d45) blid2_tripm_values_pane_t4

0x7986,	// (0x00025d53) blid2_tripm_values_pane_t5

0x7994,	// (0x00025d61) blid2_tripm_values_pane_t6

0x79a2,	// (0x00025d6f) blid2_tripm_values_pane_t7

0x79b0,	// (0x00025d7d) blid2_tripm_values_pane_t8

0x79be,	// (0x00025d8b) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0002df1f) blid2_tripm_values_pane_t

0x3264,	// (0x00021631) call_video_pane_t1_ParamLimits

0x3285,	// (0x00021652) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002d63b) call_video_pane_t_ParamLimits

0x4d40,	// (0x0002310d) msg_header_pane_g1_ParamLimits

0xb061,	// (0x0002942e) msg_header_pane_g2_ParamLimits

0xb061,	// (0x0002942e) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002d855) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002d855) msg_header_pane_g

0xa294,	// (0x00028661) main_clock2_pane_ParamLimits

0x6392,	// (0x0002475f) grid_clock2_toolbar_pane_ParamLimits

0x6392,	// (0x0002475f) grid_clock2_toolbar_pane

0x6392,	// (0x0002475f) listscroll_clock2_pane_ParamLimits

0x6392,	// (0x0002475f) listscroll_clock2_pane

0x643a,	// (0x00024807) main_clock2_pane_t3_ParamLimits

0x643a,	// (0x00024807) main_clock2_pane_t3

0x644c,	// (0x00024819) main_clock2_pane_t4_ParamLimits

0x644c,	// (0x00024819) main_clock2_pane_t4

0xd926,	// (0x0002bcf3) cell_clock2_toolbar_pane

0xd92e,	// (0x0002bcfb) cell_clock2_toolbar_pane_cp01

0xd92e,	// (0x0002bcfb) cell_clock2_toolbar_pane_cp02

0xd936,	// (0x0002bd03) cell_clock2_toolbar_pane_cp03

0xd93e,	// (0x0002bd0b) list_clock2_pane

0xacba,	// (0x00029087) scroll_pane_cp10

0xd946,	// (0x0002bd13) list_single_clock2_pane_ParamLimits

0xd946,	// (0x0002bd13) list_single_clock2_pane

0xa4a5,	// (0x00028872) list_highlight_pane_cp08

0xd953,	// (0x0002bd20) list_single_clock2_pane_t1

0xd961,	// (0x0002bd2e) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0002df32) list_single_clock2_pane_t

0x9b4b,	// (0x00027f18) bg_button_pane_cp10

0xd96f,	// (0x0002bd3c) cell_clock2_toolbar_pane_g1

0x135d,	// (0x0001f72a) aid_main_viewer_pane_g1_ParamLimits

0x135d,	// (0x0001f72a) aid_main_viewer_pane_g1

0x1369,	// (0x0001f736) aid_main_viewer_pane_g2_ParamLimits

0x1369,	// (0x0001f736) aid_main_viewer_pane_g2

0x4dc5,	// (0x00023192) aid_main_viewer_pane_g3_ParamLimits

0x4dc5,	// (0x00023192) aid_main_viewer_pane_g3

0x4dd6,	// (0x000231a3) aid_main_viewer_pane_g4_ParamLimits

0x4dd6,	// (0x000231a3) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002d866) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002d866) aid_main_viewer_pane_g

0x13b5,	// (0x0001f782) main_calc_pane_ParamLimits

0x13d0,	// (0x0001f79d) main_dialer2_pane_ParamLimits

0x0f50,	// (0x0001f31d) main_cam6_pane

0x0f50,	// (0x0001f31d) main_vid6_pane

0x639e,	// (0x0002476b) listscroll_gen_pane_cp06_ParamLimits

0x639e,	// (0x0002476b) listscroll_gen_pane_cp06

0x645e,	// (0x0002482b) main_clock2_pane_t5_ParamLimits

0x645e,	// (0x0002482b) main_clock2_pane_t5

0x64a7,	// (0x00024874) aid_call2_pane_cp10_ParamLimits

0x64b9,	// (0x00024886) aid_call_pane_cp10_ParamLimits

0xad29,	// (0x000290f6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xad29,	// (0x000290f6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x64cb,	// (0x00024898) popup_clock_analogue_window_cp10_g3_ParamLimits

0x64cb,	// (0x00024898) popup_clock_analogue_window_cp10_g4_ParamLimits

0xad29,	// (0x000290f6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0002dbb4) popup_clock_analogue_window_cp10_g_ParamLimits

0x64dd,	// (0x000248aa) popup_clock_analogue_window_cp10_t1_ParamLimits

0x68f2,	// (0x00024cbf) cell_dialer2_keypad_pane_g2_ParamLimits

0x68f2,	// (0x00024cbf) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0002dc9a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0002dc9a) cell_dialer2_keypad_pane_g

0x690e,	// (0x00024cdb) cell_dialer2_keypad_pane_t1

0x6d4d,	// (0x0002511a) main_cset_text2_pane_ParamLimits

0x6d4d,	// (0x0002511a) main_cset_text2_pane

0xd6c6,	// (0x0002ba93) area_vitu2_query_pane_g1_ParamLimits

0x7508,	// (0x000258d5) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0002de4f) area_vitu2_query_pane_g_ParamLimits

0xd74a,	// (0x0002bb17) area_vitu2_query_pane_t7_ParamLimits

0xd74a,	// (0x0002bb17) area_vitu2_query_pane_t7

0x7569,	// (0x00025936) bg_button_pane_cp018_ParamLimits

0x7577,	// (0x00025944) bg_button_pane_cp021_ParamLimits

0x7583,	// (0x00025950) bg_button_pane_cp022_ParamLimits

0x7583,	// (0x00025950) bg_vkb2_func_pane_cp08_ParamLimits

0x7569,	// (0x00025936) bg_vkb2_func_pane_cp06_ParamLimits

0x7577,	// (0x00025944) bg_vkb2_func_pane_cp07_ParamLimits

0x7594,	// (0x00025961) input_focus_pane_cp09_ParamLimits

0x2495,	// (0x00020862) cam6_autofocus_pane_ParamLimits

0x2495,	// (0x00020862) cam6_autofocus_pane

0x24b7,	// (0x00020884) cam6_image_uncrop_pane_ParamLimits

0x24b7,	// (0x00020884) cam6_image_uncrop_pane

0x24e4,	// (0x000208b1) cam6_indi_pane_ParamLimits

0x24e4,	// (0x000208b1) cam6_indi_pane

0x24fe,	// (0x000208cb) cam6_mode_pane_ParamLimits

0x24fe,	// (0x000208cb) cam6_mode_pane

0x2512,	// (0x000208df) cam6_timer_pane_ParamLimits

0x2512,	// (0x000208df) cam6_timer_pane

0x2523,	// (0x000208f0) cam6_zoom_pane_ParamLimits

0x2523,	// (0x000208f0) cam6_zoom_pane

0x79cc,	// (0x00025d99) cam6_mode_pane_g1_ParamLimits

0x79cc,	// (0x00025d99) cam6_mode_pane_g1

0x79d8,	// (0x00025da5) cam6_mode_pane_g2_ParamLimits

0x79d8,	// (0x00025da5) cam6_mode_pane_g2

0x79e4,	// (0x00025db1) cam6_mode_pane_g3_ParamLimits

0x79e4,	// (0x00025db1) cam6_mode_pane_g3

0x79f0,	// (0x00025dbd) cam6_mode_pane_g4_ParamLimits

0x79f0,	// (0x00025dbd) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0002df37) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0002df37) cam6_mode_pane_g

0xd1b5,	// (0x0002b582) bg_tb_trans_pane_cp08_ParamLimits

0xd1b5,	// (0x0002b582) bg_tb_trans_pane_cp08

0xd977,	// (0x0002bd44) cam6_battery_pane_ParamLimits

0xd977,	// (0x0002bd44) cam6_battery_pane

0xd98d,	// (0x0002bd5a) cam6_indi_pane_g1_ParamLimits

0xd98d,	// (0x0002bd5a) cam6_indi_pane_g1

0xd99f,	// (0x0002bd6c) cam6_indi_pane_g2_ParamLimits

0xd99f,	// (0x0002bd6c) cam6_indi_pane_g2

0xd9b1,	// (0x0002bd7e) cam6_indi_pane_g3_ParamLimits

0xd9b1,	// (0x0002bd7e) cam6_indi_pane_g3

0x0002,

0x08bc,	// (0x0001ec89) cam6_indi_pane_g_ParamLimits

0x08bc,	// (0x0001ec89) cam6_indi_pane_g

0xd9c3,	// (0x0002bd90) cam6_indi_pane_t1_ParamLimits

0xd9c3,	// (0x0002bd90) cam6_indi_pane_t1

0x6a4d,	// (0x00024e1a) cam6_autofocus_pane_g1

0x6a45,	// (0x00024e12) cam6_autofocus_pane_g2

0x6a5d,	// (0x00024e2a) cam6_autofocus_pane_g3

0x6a55,	// (0x00024e22) cam6_autofocus_pane_g4

0x0003,

0xfb73,	// (0x0002df40) cam6_autofocus_pane_g

0xd9e9,	// (0x0002bdb6) cam6_timer_pane_g1

0xd9f1,	// (0x0002bdbe) cam6_timer_pane_t1

0xd9ff,	// (0x0002bdcc) cam6_zoom_cont_pane

0xda07,	// (0x0002bdd4) cam6_zoom_pane_g1

0xda0f,	// (0x0002bddc) cam6_zoom_pane_g2

0x79fc,	// (0x00025dc9) cam6_zoom_pane_g3

0x0002,

0xfb7c,	// (0x0002df49) cam6_zoom_pane_g

0xc739,	// (0x0002ab06) cam6_battery_pane_g1

0xc739,	// (0x0002ab06) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0002dabc) cam6_battery_pane_g

0xda17,	// (0x0002bde4) cam6_zoom_cont_pane_g1

0xda20,	// (0x0002bded) cam6_zoom_cont_pane_g2

0xda29,	// (0x0002bdf6) cam6_zoom_cont_pane_g3

0x0002,

0x08d3,	// (0x0001eca0) cam6_zoom_cont_pane_g

0x7a19,	// (0x00025de6) cam6_mode_pane_cp_ParamLimits

0x7a19,	// (0x00025de6) cam6_mode_pane_cp

0x7a2d,	// (0x00025dfa) cam6_zoom_pane_cp_ParamLimits

0x7a2d,	// (0x00025dfa) cam6_zoom_pane_cp

0x7a45,	// (0x00025e12) vid6_image_uncrop_cif_pane_ParamLimits

0x7a45,	// (0x00025e12) vid6_image_uncrop_cif_pane

0x7a71,	// (0x00025e3e) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a71,	// (0x00025e3e) vid6_image_uncrop_nhd_pane

0x7a8e,	// (0x00025e5b) vid6_image_uncrop_vga_pane_ParamLimits

0x7a8e,	// (0x00025e5b) vid6_image_uncrop_vga_pane

0x7aad,	// (0x00025e7a) vid6_image_uncrop_wvga_pane_ParamLimits

0x7aad,	// (0x00025e7a) vid6_image_uncrop_wvga_pane

0x7aca,	// (0x00025e97) vid6_indi_pane_ParamLimits

0x7aca,	// (0x00025e97) vid6_indi_pane

0xd1b5,	// (0x0002b582) bg_tb_trans_pane_cp09_ParamLimits

0xd1b5,	// (0x0002b582) bg_tb_trans_pane_cp09

0xda41,	// (0x0002be0e) cam6_battery_pane_cp_ParamLimits

0xda41,	// (0x0002be0e) cam6_battery_pane_cp

0xda4d,	// (0x0002be1a) vid6_indi_pane_g1_ParamLimits

0xda4d,	// (0x0002be1a) vid6_indi_pane_g1

0xda5f,	// (0x0002be2c) vid6_indi_pane_g2_ParamLimits

0xda5f,	// (0x0002be2c) vid6_indi_pane_g2

0xda71,	// (0x0002be3e) vid6_indi_pane_g3_ParamLimits

0xda71,	// (0x0002be3e) vid6_indi_pane_g3

0xda86,	// (0x0002be53) vid6_indi_pane_g4_ParamLimits

0xda86,	// (0x0002be53) vid6_indi_pane_g4

0xda9b,	// (0x0002be68) vid6_indi_pane_g5_ParamLimits

0xda9b,	// (0x0002be68) vid6_indi_pane_g5

0x0004,

0x08da,	// (0x0001eca7) vid6_indi_pane_g_ParamLimits

0x08da,	// (0x0001eca7) vid6_indi_pane_g

0xdab5,	// (0x0002be82) vid6_indi_pane_t1_ParamLimits

0xdab5,	// (0x0002be82) vid6_indi_pane_t1

0xdacb,	// (0x0002be98) vid6_indi_pane_t2_ParamLimits

0xdacb,	// (0x0002be98) vid6_indi_pane_t2

0xdaf3,	// (0x0002bec0) vid6_indi_pane_t3_ParamLimits

0xdaf3,	// (0x0002bec0) vid6_indi_pane_t3

0xdb1b,	// (0x0002bee8) vid6_indi_pane_t4_ParamLimits

0xdb1b,	// (0x0002bee8) vid6_indi_pane_t4

0x0003,

0x08e5,	// (0x0001ecb2) vid6_indi_pane_t_ParamLimits

0x08e5,	// (0x0001ecb2) vid6_indi_pane_t

0xdb3f,	// (0x0002bf0c) wait_bar_pane_cp08

0x7aed,	// (0x00025eba) main_cset_text2_pane_t1_ParamLimits

0x7aed,	// (0x00025eba) main_cset_text2_pane_t1

0x7a04,	// (0x00025dd1) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a04,	// (0x00025dd1) listscroll_gen_pane_cp06_t1

0x0f50,	// (0x0001f31d) main_cam6_set_pane

0x1e17,	// (0x000201e4) bg_tb_trans_pane_cp06_ParamLimits

0x1e2d,	// (0x000201fa) cam4_indicators_pane_g1_ParamLimits

0x1e3e,	// (0x0002020b) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0002dcd7) cam4_indicators_pane_g_ParamLimits

0x1e56,	// (0x00020223) cam4_indicators_pane_t1_ParamLimits

0x13c2,	// (0x0001f78f) bg_tb_trans_pane_cp07_ParamLimits

0x1f07,	// (0x000202d4) vid4_indicators_pane_g1_ParamLimits

0x1f1b,	// (0x000202e8) vid4_indicators_pane_g2_ParamLimits

0x1f2f,	// (0x000202fc) vid4_indicators_pane_g3_ParamLimits

0x1f40,	// (0x0002030d) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0002dce9) vid4_indicators_pane_g_ParamLimits

0x1f5c,	// (0x00020329) vid4_indicators_pane_t1_ParamLimits

0x23f9,	// (0x000207c6) vid4_progress_pane_g1_ParamLimits

0x2409,	// (0x000207d6) vid4_progress_pane_g2_ParamLimits

0x2419,	// (0x000207e6) vid4_progress_pane_g3_ParamLimits

0x242b,	// (0x000207f8) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0002de9a) vid4_progress_pane_g_ParamLimits

0x2443,	// (0x00020810) vid4_progress_pane_t1_ParamLimits

0x2459,	// (0x00020826) vid4_progress_pane_t2_ParamLimits

0x246e,	// (0x0002083b) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0002dea5) vid4_progress_pane_t_ParamLimits

0x2484,	// (0x00020851) wait_bar_pane_cp07_ParamLimits

0x7b24,	// (0x00025ef1) main_cam6_set_pane_g2_ParamLimits

0x7b24,	// (0x00025ef1) main_cam6_set_pane_g2

0x7b30,	// (0x00025efd) main_cset6_listscroll_pane_ParamLimits

0x7b30,	// (0x00025efd) main_cset6_listscroll_pane

0x7b5b,	// (0x00025f28) main_cset6_slider_pane_ParamLimits

0x7b5b,	// (0x00025f28) main_cset6_slider_pane

0x7b67,	// (0x00025f34) main_cset6_text2_pane_ParamLimits

0x7b67,	// (0x00025f34) main_cset6_text2_pane

0xdb4e,	// (0x0002bf1b) main_cset6_text_pane

0xdb56,	// (0x0002bf23) main_cset_list_pane_copy1_ParamLimits

0xdb56,	// (0x0002bf23) main_cset_list_pane_copy1

0xdb66,	// (0x0002bf33) scroll_pane_cp028_copy1

0x7b7a,	// (0x00025f47) cset_list_set_pane_copy1

0x7b90,	// (0x00025f5d) aid_position_infowindow_above_copy1

0x7b98,	// (0x00025f65) aid_position_infowindow_below_copy1

0xdb6f,	// (0x0002bf3c) cset_list_set_pane_g1_copy1

0xdb77,	// (0x0002bf44) cset_list_set_pane_g3_copy1_ParamLimits

0xdb77,	// (0x0002bf44) cset_list_set_pane_g3_copy1

0xdb86,	// (0x0002bf53) cset_list_set_pane_t1_copy1_ParamLimits

0xdb86,	// (0x0002bf53) cset_list_set_pane_t1_copy1

0xa3a1,	// (0x0002876e) list_highlight_pane_cp021_copy1_ParamLimits

0xa3a1,	// (0x0002876e) list_highlight_pane_cp021_copy1

0xdb9b,	// (0x0002bf68) cset6_slider_pane_ParamLimits

0xdb9b,	// (0x0002bf68) cset6_slider_pane

0xdbc7,	// (0x0002bf94) main_cset6_slider_pane_g1_ParamLimits

0xdbc7,	// (0x0002bf94) main_cset6_slider_pane_g1

0x7ba0,	// (0x00025f6d) main_cset6_slider_pane_g2_ParamLimits

0x7ba0,	// (0x00025f6d) main_cset6_slider_pane_g2

0xdbef,	// (0x0002bfbc) main_cset6_slider_pane_g3_ParamLimits

0xdbef,	// (0x0002bfbc) main_cset6_slider_pane_g3

0x7bc8,	// (0x00025f95) main_cset6_slider_pane_g4_ParamLimits

0x7bc8,	// (0x00025f95) main_cset6_slider_pane_g4

0x7bd4,	// (0x00025fa1) main_cset6_slider_pane_g5_ParamLimits

0x7bd4,	// (0x00025fa1) main_cset6_slider_pane_g5

0xd35e,	// (0x0002b72b) main_cset6_slider_pane_g7_ParamLimits

0xd35e,	// (0x0002b72b) main_cset6_slider_pane_g7

0xd36a,	// (0x0002b737) main_cset6_slider_pane_g8_ParamLimits

0xd36a,	// (0x0002b737) main_cset6_slider_pane_g8

0x7be2,	// (0x00025faf) main_cset6_slider_pane_g9_ParamLimits

0x7be2,	// (0x00025faf) main_cset6_slider_pane_g9

0x7bee,	// (0x00025fbb) main_cset6_slider_pane_g10_ParamLimits

0x7bee,	// (0x00025fbb) main_cset6_slider_pane_g10

0x7bfa,	// (0x00025fc7) main_cset6_slider_pane_g11_ParamLimits

0x7bfa,	// (0x00025fc7) main_cset6_slider_pane_g11

0x7c06,	// (0x00025fd3) main_cset6_slider_pane_g12_ParamLimits

0x7c06,	// (0x00025fd3) main_cset6_slider_pane_g12

0xd422,	// (0x0002b7ef) main_cset6_slider_pane_g13_ParamLimits

0xd422,	// (0x0002b7ef) main_cset6_slider_pane_g13

0xd42e,	// (0x0002b7fb) main_cset6_slider_pane_g14_ParamLimits

0xd42e,	// (0x0002b7fb) main_cset6_slider_pane_g14

0x7c12,	// (0x00025fdf) main_cset6_slider_pane_g15_ParamLimits

0x7c12,	// (0x00025fdf) main_cset6_slider_pane_g15

0x7c2a,	// (0x00025ff7) main_cset6_slider_pane_g16_ParamLimits

0x7c2a,	// (0x00025ff7) main_cset6_slider_pane_g16

0x7c38,	// (0x00026005) main_cset6_slider_pane_g17_ParamLimits

0x7c38,	// (0x00026005) main_cset6_slider_pane_g17

0x0011,

0xfb83,	// (0x0002df50) main_cset6_slider_pane_g_ParamLimits

0xfb83,	// (0x0002df50) main_cset6_slider_pane_g

0xdc07,	// (0x0002bfd4) main_cset6_slider_pane_t1_ParamLimits

0xdc07,	// (0x0002bfd4) main_cset6_slider_pane_t1

0x7c52,	// (0x0002601f) main_cset6_slider_pane_t2_ParamLimits

0x7c52,	// (0x0002601f) main_cset6_slider_pane_t2

0x7c7d,	// (0x0002604a) main_cset6_slider_pane_t3_ParamLimits

0x7c7d,	// (0x0002604a) main_cset6_slider_pane_t3

0x7ca8,	// (0x00026075) main_cset6_slider_pane_t4_ParamLimits

0x7ca8,	// (0x00026075) main_cset6_slider_pane_t4

0x7cd3,	// (0x000260a0) main_cset6_slider_pane_t5_ParamLimits

0x7cd3,	// (0x000260a0) main_cset6_slider_pane_t5

0xdc48,	// (0x0002c015) main_cset6_slider_pane_t7_ParamLimits

0xdc48,	// (0x0002c015) main_cset6_slider_pane_t7

0x7d00,	// (0x000260cd) main_cset6_slider_pane_t8_ParamLimits

0x7d00,	// (0x000260cd) main_cset6_slider_pane_t8

0x7d24,	// (0x000260f1) main_cset6_slider_pane_t9_ParamLimits

0x7d24,	// (0x000260f1) main_cset6_slider_pane_t9

0x7d48,	// (0x00026115) main_cset6_slider_pane_t10_ParamLimits

0x7d48,	// (0x00026115) main_cset6_slider_pane_t10

0x7d6c,	// (0x00026139) main_cset6_slider_pane_t11_ParamLimits

0x7d6c,	// (0x00026139) main_cset6_slider_pane_t11

0xdc7e,	// (0x0002c04b) main_cset6_slider_pane_t14_ParamLimits

0xdc7e,	// (0x0002c04b) main_cset6_slider_pane_t14

0xdcb7,	// (0x0002c084) main_cset6_slider_pane_t15_ParamLimits

0xdcb7,	// (0x0002c084) main_cset6_slider_pane_t15

0x000b,

0xfba8,	// (0x0002df75) main_cset6_slider_pane_t_ParamLimits

0xfba8,	// (0x0002df75) main_cset6_slider_pane_t

0xcf7d,	// (0x0002b34a) cset_slider_pane_g1_copy1

0xd43a,	// (0x0002b807) cset_slider_pane_g2_copy1

0xd6a9,	// (0x0002ba76) cset_slider_pane_g3_copy1

0x9b4b,	// (0x00027f18) bg_popup_sub_pane_cp011_copy1

0xdcf0,	// (0x0002c0bd) main_cset_text_pane_g1_copy1

0xd4dd,	// (0x0002b8aa) main_cset_text_pane_t1_copy1

0xd4eb,	// (0x0002b8b8) main_cset_text_pane_t2_copy1

0xd4f9,	// (0x0002b8c6) main_cset_text_pane_t3_copy1

0xd507,	// (0x0002b8d4) main_cset_text_pane_t4_copy1

0xd515,	// (0x0002b8e2) main_cset_text_pane_t5_copy1

0xdcf8,	// (0x0002c0c5) main_cset_text_pane_t6_copy1

0xdd06,	// (0x0002c0d3) main_cset_text_pane_t7_copy1

0x7e61,	// (0x0002622e) main_cset_text2_pane_t1_copy1

0x13c2,	// (0x0001f78f) main_ncimui_pane

0x1421,	// (0x0001f7ee) popup_query_ncimui_window_ParamLimits

0x1421,	// (0x0001f7ee) popup_query_ncimui_window

0xca28,	// (0x0002adf5) field_cale_ev2_pane_g4_ParamLimits

0xca28,	// (0x0002adf5) field_cale_ev2_pane_g4

0x6892,	// (0x00024c5f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6892,	// (0x00024c5f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0002dc75) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0002dc75) cell_video_dialer_keypad_pane_g

0x68aa,	// (0x00024c77) cell_video_dialer_keypad_pane_t1

0x9b4b,	// (0x00027f18) bg_popup_window_pane_cp012

0xaba5,	// (0x00028f72) heading_pane_cp06

0xdd32,	// (0x0002c0ff) ncim_query_content_pane

0x9b4b,	// (0x00027f18) bg_popup_heading_pane_cp01

0xdd3a,	// (0x0002c107) ncim_heading_pane_t1

0xdd48,	// (0x0002c115) ncim_indicator_popup_pane

0xdd5a,	// (0x0002c127) ncim_query_button_pane

0xdd6e,	// (0x0002c13b) ncim_query_content_pane_t1

0xdd80,	// (0x0002c14d) ncim_query_content_pane_t2

0x0005,

0xfbec,	// (0x0002dfb9) ncim_query_content_pane_t

0xddba,	// (0x0002c187) ncim_query_list_pane

0xddcc,	// (0x0002c199) ncim_query_popup_pane

0xdd48,	// (0x0002c115) ncim_indicator_popup_pane_ParamLimits

0x7fb5,	// (0x00026382) ncim_query_content_pane_g1_ParamLimits

0x7fb5,	// (0x00026382) ncim_query_content_pane_g1

0xdd6e,	// (0x0002c13b) ncim_query_content_pane_t1_ParamLimits

0xdd80,	// (0x0002c14d) ncim_query_content_pane_t2_ParamLimits

0x7fc1,	// (0x0002638e) ncim_query_content_pane_t3_ParamLimits

0x7fc1,	// (0x0002638e) ncim_query_content_pane_t3

0x7fde,	// (0x000263ab) ncim_query_content_pane_t4_ParamLimits

0x7fde,	// (0x000263ab) ncim_query_content_pane_t4

0x7ffb,	// (0x000263c8) ncim_query_content_pane_t5_ParamLimits

0x7ffb,	// (0x000263c8) ncim_query_content_pane_t5

0xdd92,	// (0x0002c15f) ncim_query_content_pane_t6_ParamLimits

0xdd92,	// (0x0002c15f) ncim_query_content_pane_t6

0xfbec,	// (0x0002dfb9) ncim_query_content_pane_t_ParamLimits

0xddba,	// (0x0002c187) ncim_query_list_pane_ParamLimits

0xddcc,	// (0x0002c199) ncim_query_popup_pane_ParamLimits

0xdde0,	// (0x0002c1ad) wait_bar_pane_cp04

0x9b4b,	// (0x00027f18) input_focus_pane_cp011

0xdde8,	// (0x0002c1b5) ncim_query_popup_pane_t1

0xddf6,	// (0x0002c1c3) ncim_list_query_list_pane_ParamLimits

0xddf6,	// (0x0002c1c3) ncim_list_query_list_pane

0x9b4b,	// (0x00027f18) bg_button_pane_cp027

0xde03,	// (0x0002c1d0) ncim_query_button_pane_g1

0x9b4b,	// (0x00027f18) list_highlight_pane_cp012

0xde0d,	// (0x0002c1da) ncim_list_query_list_pane_g1

0xde15,	// (0x0002c1e2) ncim_list_query_list_pane_t1

0x1e4a,	// (0x00020217) cam4_indicators_pane_g3_ParamLimits

0x1e4a,	// (0x00020217) cam4_indicators_pane_g3

0x1f4c,	// (0x00020319) vid4_indicators_pane_g5_ParamLimits

0x1f4c,	// (0x00020319) vid4_indicators_pane_g5

0x2437,	// (0x00020804) vid4_progress_pane_g5_ParamLimits

0x2437,	// (0x00020804) vid4_progress_pane_g5

0x7ea1,	// (0x0002626e) main_ncimui_pane_g1

0x7f09,	// (0x000262d6) ncimui_group_query_pane_ParamLimits

0x7f09,	// (0x000262d6) ncimui_group_query_pane

0x7f51,	// (0x0002631e) ncimui_list_pane_ParamLimits

0x7f51,	// (0x0002631e) ncimui_list_pane

0x7f78,	// (0x00026345) ncimui_text_pane_ParamLimits

0x7f78,	// (0x00026345) ncimui_text_pane

0x8018,	// (0x000263e5) ncimui_text_pane_t1_ParamLimits

0x8018,	// (0x000263e5) ncimui_text_pane_t1

0xde23,	// (0x0002c1f0) ncimui_list_single_graphic_pane_ParamLimits

0xde23,	// (0x0002c1f0) ncimui_list_single_graphic_pane

0x8037,	// (0x00026404) ncimui_query_pane_ParamLimits

0x8037,	// (0x00026404) ncimui_query_pane

0x9b4b,	// (0x00027f18) list_highlight_pane_cp013

0xde33,	// (0x0002c200) ncim_list_query_list_pane_t1_copy1

0xde41,	// (0x0002c20e) ncim_list_single_graphic_pane_g1

0xde49,	// (0x0002c216) ncim_query_button_pane_cp01

0xde55,	// (0x0002c222) ncim_query_entry_pane_ParamLimits

0xde55,	// (0x0002c222) ncim_query_entry_pane

0xde68,	// (0x0002c235) ncimui_query_pane_g1

0xde74,	// (0x0002c241) ncimui_query_pane_t1_ParamLimits

0xde74,	// (0x0002c241) ncimui_query_pane_t1

0xa3a1,	// (0x0002876e) input_focus_pane_cp012

0xde8d,	// (0x0002c25a) ncim_query_entry_pane_t1

0xa294,	// (0x00028661) main_im_pane_ParamLimits

0x13c2,	// (0x0001f78f) main_mobtv_pane_ParamLimits

0x13c2,	// (0x0001f78f) main_mobtv_pane

0x7c46,	// (0x00026013) main_cset6_slider_pane_g18_ParamLimits

0x7c46,	// (0x00026013) main_cset6_slider_pane_g18

0xdbfb,	// (0x0002bfc8) main_cset6_slider_pane_g19_ParamLimits

0xdbfb,	// (0x0002bfc8) main_cset6_slider_pane_g19

0xd1f2,	// (0x0002b5bf) bg_main_mobtv_pane_ParamLimits

0xd1f2,	// (0x0002b5bf) bg_main_mobtv_pane

0x804a,	// (0x00026417) main_mobtv_info_pane

0x8055,	// (0x00026422) main_mobtv_loading_pane_ParamLimits

0x8055,	// (0x00026422) main_mobtv_loading_pane

0xde9f,	// (0x0002c26c) main_mobtv_pg_channel_list_pane

0xdea9,	// (0x0002c276) main_mobtv_pg_hdr_pane

0x8062,	// (0x0002642f) main_mobtv_programe_curr_pane_ParamLimits

0x8062,	// (0x0002642f) main_mobtv_programe_curr_pane

0x806f,	// (0x0002643c) main_mobtv_programe_next_pane_ParamLimits

0x806f,	// (0x0002643c) main_mobtv_programe_next_pane

0xdeb2,	// (0x0002c27f) popup_mobtv_noti_window

0xc739,	// (0x0002ab06) main_tv_pg_hdr_pane_g1

0xdeba,	// (0x0002c287) main_tv_pg_hdr_pane_g2

0xdec2,	// (0x0002c28f) main_tv_pg_hdr_pane_g3

0xdeca,	// (0x0002c297) main_tv_pg_hdr_pane_g4

0xded2,	// (0x0002c29f) main_tv_pg_hdr_pane_g5

0xdedc,	// (0x0002c2a9) main_tv_pg_hdr_pane_g6

0xdee6,	// (0x0002c2b3) main_tv_pg_hdr_pane_g7

0xdef0,	// (0x0002c2bd) main_tv_pg_hdr_pane_g8

0xdefa,	// (0x0002c2c7) main_tv_pg_hdr_pane_g9

0xdf04,	// (0x0002c2d1) main_tv_pg_hdr_pane_g10

0xdf0e,	// (0x0002c2db) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf9,	// (0x0002dfc6) main_tv_pg_hdr_pane_g

0xdf18,	// (0x0002c2e5) main_tv_pg_hdr_pane_t1

0xdf26,	// (0x0002c2f3) main_tv_pg_hdr_pane_t2

0xdf34,	// (0x0002c301) main_tv_pg_hdr_pane_t3

0xdf44,	// (0x0002c311) main_tv_pg_hdr_pane_t4

0xdf54,	// (0x0002c321) main_tv_pg_hdr_pane_t5

0x0004,

0x097b,	// (0x0001ed48) main_tv_pg_hdr_pane_t

0xdf64,	// (0x0002c331) single_mobtv_pg_channel_pane_ParamLimits

0xdf64,	// (0x0002c331) single_mobtv_pg_channel_pane

0xdf76,	// (0x0002c343) single_mobtv_pg_channel_table_pane

0xa801,	// (0x00028bce) single_mobtv_pg_channel_thumb_pane

0xdf7f,	// (0x0002c34c) single_tv_pg_channel_pane_g1

0xdf88,	// (0x0002c355) single_tv_pg_channel_pane_g2

0x0001,

0x0986,	// (0x0001ed53) single_tv_pg_channel_pane_g

0xc987,	// (0x0002ad54) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc987,	// (0x0002ad54) bg_single_mobtv_pg_channel_thumb_pane

0xdf91,	// (0x0002c35e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf91,	// (0x0002c35e) single_mobtv_pg_channel_thumb_pane_g1

0xdf9f,	// (0x0002c36c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf9f,	// (0x0002c36c) single_mobtv_pg_channel_thumb_pane_g2

0xdfab,	// (0x0002c378) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfab,	// (0x0002c378) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x098b,	// (0x0001ed58) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x098b,	// (0x0001ed58) single_mobtv_pg_channel_thumb_pane_g

0xdfb7,	// (0x0002c384) single_mobtv_pg_channel_thumb_pane_t1

0xdfc5,	// (0x0002c392) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0992,	// (0x0001ed5f) single_mobtv_pg_channel_thumb_pane_t

0xc739,	// (0x0002ab06) bg_single_mobtv_pg_channel_table_pane_g1

0xc739,	// (0x0002ab06) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0002dabc) bg_single_mobtv_pg_channel_table_pane_g

0xdfd3,	// (0x0002c3a0) single_mobtv_pg_channel_table_pane_t1

0xdfe1,	// (0x0002c3ae) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0997,	// (0x0001ed64) single_mobtv_pg_channel_table_pane_t

0x8084,	// (0x00026451) main_mobtv_info_pane_g1_ParamLimits

0x8084,	// (0x00026451) main_mobtv_info_pane_g1

0x80a0,	// (0x0002646d) main_mobtv_info_pane_t1_ParamLimits

0x80a0,	// (0x0002646d) main_mobtv_info_pane_t1

0x8118,	// (0x000264e5) main_mobtv_info_pane_t2_ParamLimits

0x8118,	// (0x000264e5) main_mobtv_info_pane_t2

0x0002,

0xfc15,	// (0x0002dfe2) main_mobtv_info_pane_t_ParamLimits

0xfc15,	// (0x0002dfe2) main_mobtv_info_pane_t

0x81a7,	// (0x00026574) wait_bar_pane_cp05

0x81b9,	// (0x00026586) main_mobtv_loading_pane_g1_ParamLimits

0x81b9,	// (0x00026586) main_mobtv_loading_pane_g1

0x81c7,	// (0x00026594) main_mobtv_loading_pane_g2_ParamLimits

0x81c7,	// (0x00026594) main_mobtv_loading_pane_g2

0x81d3,	// (0x000265a0) main_mobtv_loading_pane_g3_ParamLimits

0x81d3,	// (0x000265a0) main_mobtv_loading_pane_g3

0x0002,

0xfc1c,	// (0x0002dfe9) main_mobtv_loading_pane_g_ParamLimits

0xfc1c,	// (0x0002dfe9) main_mobtv_loading_pane_g

0xdfef,	// (0x0002c3bc) main_mobtv_loading_pane_t1_ParamLimits

0xdfef,	// (0x0002c3bc) main_mobtv_loading_pane_t1

0xe007,	// (0x0002c3d4) main_mobtv_loading_pane_t2_ParamLimits

0xe007,	// (0x0002c3d4) main_mobtv_loading_pane_t2

0x0001,

0x09af,	// (0x0001ed7c) main_mobtv_loading_pane_t_ParamLimits

0x09af,	// (0x0001ed7c) main_mobtv_loading_pane_t

0x81e1,	// (0x000265ae) wait_bar_pane_cp06_ParamLimits

0x81e1,	// (0x000265ae) wait_bar_pane_cp06

0xe02b,	// (0x0002c3f8) main_mobtv_programe_curr_pane_t1

0xe039,	// (0x0002c406) main_mobtv_programe_curr_pane_t2

0x0001,

0x09b4,	// (0x0001ed81) main_mobtv_programe_curr_pane_t

0xe047,	// (0x0002c414) main_mobtv_programe_next_pane_t1

0xe055,	// (0x0002c422) main_mobtv_programe_next_pane_t2

0xe063,	// (0x0002c430) main_mobtv_programe_next_pane_t3

0x0002,

0x09b9,	// (0x0001ed86) main_mobtv_programe_next_pane_t

0x9b4b,	// (0x00027f18) bg_popup_mobtv_noti_window_pane

0xe071,	// (0x0002c43e) popup_mobtv_noti_window_g1

0xe079,	// (0x0002c446) popup_mobtv_noti_window_t1

0xe087,	// (0x0002c454) popup_mobtv_noti_window_t2

0x0001,

0x09c0,	// (0x0001ed8d) popup_mobtv_noti_window_t

0xc739,	// (0x0002ab06) bg_popup_mobtv_noti_window_pane_g1

0x0f50,	// (0x0001f31d) sc_clock_pane

0x0f50,	// (0x0001f31d) main_fs_bigclock_pane

0x787f,	// (0x00025c4c) blid2_tripm_pane_t4_ParamLimits

0x787f,	// (0x00025c4c) blid2_tripm_pane_t4

0x81ed,	// (0x000265ba) sc_clock_pane_g1_ParamLimits

0x81ed,	// (0x000265ba) sc_clock_pane_g1

0x81fb,	// (0x000265c8) sc_clock_pane_t1_ParamLimits

0x81fb,	// (0x000265c8) sc_clock_pane_t1

0x820e,	// (0x000265db) sc_clock_pane_t2_ParamLimits

0x820e,	// (0x000265db) sc_clock_pane_t2

0x8220,	// (0x000265ed) sc_clock_pane_t3_ParamLimits

0x8220,	// (0x000265ed) sc_clock_pane_t3

0x0004,

0xfc23,	// (0x0002dff0) sc_clock_pane_t_ParamLimits

0xfc23,	// (0x0002dff0) sc_clock_pane_t

0x90fd,	// (0x000274ca) main_fs_bigclock_indicator_pane_ParamLimits

0x90fd,	// (0x000274ca) main_fs_bigclock_indicator_pane

0x82a9,	// (0x00026676) main_fs_bigclock_pane_g1_ParamLimits

0x82a9,	// (0x00026676) main_fs_bigclock_pane_g1

0x9109,	// (0x000274d6) main_fs_bigclock_pane_t1_ParamLimits

0x9109,	// (0x000274d6) main_fs_bigclock_pane_t1

0x911b,	// (0x000274e8) main_fs_bigclock_pane_t2_ParamLimits

0x911b,	// (0x000274e8) main_fs_bigclock_pane_t2

0x912f,	// (0x000274fc) main_fs_bigclock_pane_t3_ParamLimits

0x912f,	// (0x000274fc) main_fs_bigclock_pane_t3

0x0002,

0xfda7,	// (0x0002e174) main_fs_bigclock_pane_t_ParamLimits

0xfda7,	// (0x0002e174) main_fs_bigclock_pane_t

0xec7f,	// (0x0002d04c) main_fs_bigclock_indicator_pane_g1

0xdd62,	// (0x0002c12f) ncim_query_content_pane_g2_ParamLimits

0xdd62,	// (0x0002c12f) ncim_query_content_pane_g2

0x0001,

0xfbe7,	// (0x0002dfb4) ncim_query_content_pane_g_ParamLimits

0xfbe7,	// (0x0002dfb4) ncim_query_content_pane_g

0x8234,	// (0x00026601) sc_clock_pane_t4_ParamLimits

0x8234,	// (0x00026601) sc_clock_pane_t4

0x13c2,	// (0x0001f78f) main_radioblah_pane

0xd149,	// (0x0002b516) cell_call4_button_pane_t1_copy1_ParamLimits

0xd149,	// (0x0002b516) cell_call4_button_pane_t1_copy1

0x7ebb,	// (0x00026288) main_ncimui_pane_t1_ParamLimits

0x7ebb,	// (0x00026288) main_ncimui_pane_t1

0x7ed5,	// (0x000262a2) main_ncimui_pane_t2_ParamLimits

0x7ed5,	// (0x000262a2) main_ncimui_pane_t2

0x0002,

0xfbe0,	// (0x0002dfad) main_ncimui_pane_t_ParamLimits

0xfbe0,	// (0x0002dfad) main_ncimui_pane_t

0xe1cc,	// (0x0002c599) main_radioblah_anim_pane_ParamLimits

0xe1cc,	// (0x0002c599) main_radioblah_anim_pane

0xe1dd,	// (0x0002c5aa) main_radioblah_info_pane_ParamLimits

0xe1dd,	// (0x0002c5aa) main_radioblah_info_pane

0xe1f1,	// (0x0002c5be) main_radioblah_pane_t1_ParamLimits

0xe1f1,	// (0x0002c5be) main_radioblah_pane_t1

0xe20d,	// (0x0002c5da) main_radioblah_pane_t2_ParamLimits

0xe20d,	// (0x0002c5da) main_radioblah_pane_t2

0x0003,

0x09e6,	// (0x0001edb3) main_radioblah_pane_t_ParamLimits

0x09e6,	// (0x0001edb3) main_radioblah_pane_t

0x82fb,	// (0x000266c8) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82fb,	// (0x000266c8) main_radioblah_rocker_ctrl_pane

0xe255,	// (0x0002c622) main_radioblah_info_pane_t1_ParamLimits

0xe255,	// (0x0002c622) main_radioblah_info_pane_t1

0x8340,	// (0x0002670d) main_radioblah_info_pane_t2_ParamLimits

0x8340,	// (0x0002670d) main_radioblah_info_pane_t2

0x0003,

0xfc2e,	// (0x0002dffb) main_radioblah_info_pane_t_ParamLimits

0xfc2e,	// (0x0002dffb) main_radioblah_info_pane_t

0xc739,	// (0x0002ab06) main_radioblah_rocker_ctrl_pane_g1

0x83f0,	// (0x000267bd) main_radioblah_rocker_ctrl_pane_g2

0x83f8,	// (0x000267c5) main_radioblah_rocker_ctrl_pane_g3

0x8400,	// (0x000267cd) main_radioblah_rocker_ctrl_pane_g4

0x8408,	// (0x000267d5) main_radioblah_rocker_ctrl_pane_g5

0x8410,	// (0x000267dd) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc37,	// (0x0002e004) main_radioblah_rocker_ctrl_pane_g

0x7e61,	// (0x0002622e) main_cset_text2_pane_t1_copy1_ParamLimits

0x1d91,	// (0x0002015e) cam4_image_uncrop_qvga_pane

0x1ebc,	// (0x00020289) vid4_image_uncrop_qcif_pane

0x24d6,	// (0x000208a3) cam6_image_uncrop_qvga_pane_ParamLimits

0x24d6,	// (0x000208a3) cam6_image_uncrop_qvga_pane

0xda31,	// (0x0002bdfe) vid6_image_uncrop_qcif_pane_ParamLimits

0xda31,	// (0x0002bdfe) vid6_image_uncrop_qcif_pane

0x9b4b,	// (0x00027f18) bg_popup_preview_window_pane_cp03

0xdd14,	// (0x0002c0e1) list_cset_text2_pane

0xdd1c,	// (0x0002c0e9) main_cset6_text2_pane_g1

0xdd24,	// (0x0002c0f1) main_cset6_text2_pane_t1

0x8418,	// (0x000267e5) list_cset_text2_pane_t1_ParamLimits

0x8418,	// (0x000267e5) list_cset_text2_pane_t1

0x13c2,	// (0x0001f78f) main_radioblah_pane_ParamLimits

0x8193,	// (0x00026560) main_mobtv_info_pane_t3_ParamLimits

0x8193,	// (0x00026560) main_mobtv_info_pane_t3

0x82e9,	// (0x000266b6) main_radioblah_pane_g1

0x8314,	// (0x000266e1) main_radioblah_info_pane_g1

0x8395,	// (0x00026762) main_radioblah_info_pane_t3_ParamLimits

0x8395,	// (0x00026762) main_radioblah_info_pane_t3

0x42ff,	// (0x000226cc) highlight_cell_cale_month_pane_ParamLimits

0x42ff,	// (0x000226cc) highlight_cell_cale_month_pane

0x0f50,	// (0x0001f31d) main_phob_fisheye_pane

0xcad7,	// (0x0002aea4) scroll_pane_cp0031_ParamLimits

0xcad7,	// (0x0002aea4) scroll_pane_cp0031

0xdb3f,	// (0x0002bf0c) wait_bar_pane_cp08_ParamLimits

0x7b7a,	// (0x00025f47) cset_list_set_pane_copy1_ParamLimits

0xe28f,	// (0x0002c65c) highlight_cell_cale_month_pane_g1

0x8439,	// (0x00026806) highlight_cell_cale_month_pane_t1

0xd7b6,	// (0x0002bb83) list_gen_pane_cp01

0xd349,	// (0x0002b716) scroll_pane_01

0x8447,	// (0x00026814) list_single_double_fisheye_pane

0x8450,	// (0x0002681d) list_double_fisheye_pane_g1_ParamLimits

0x8450,	// (0x0002681d) list_double_fisheye_pane_g1

0x845c,	// (0x00026829) list_double_fisheye_pane_g2_ParamLimits

0x845c,	// (0x00026829) list_double_fisheye_pane_g2

0x8470,	// (0x0002683d) list_double_fisheye_pane_g3_ParamLimits

0x8470,	// (0x0002683d) list_double_fisheye_pane_g3

0x0004,

0xfc44,	// (0x0002e011) list_double_fisheye_pane_g_ParamLimits

0xfc44,	// (0x0002e011) list_double_fisheye_pane_g

0x8499,	// (0x00026866) list_double_fisheye_pane_t1_ParamLimits

0x8499,	// (0x00026866) list_double_fisheye_pane_t1

0x84b4,	// (0x00026881) list_double_fisheye_pane_t2_ParamLimits

0x84b4,	// (0x00026881) list_double_fisheye_pane_t2

0x0001,

0xfc4f,	// (0x0002e01c) list_double_fisheye_pane_t_ParamLimits

0xfc4f,	// (0x0002e01c) list_double_fisheye_pane_t

0x0f50,	// (0x0001f31d) main_call5_pane

0x825a,	// (0x00026627) sc_swipe_pane_ParamLimits

0x825a,	// (0x00026627) sc_swipe_pane

0x84e2,	// (0x000268af) call5_image_pane_ParamLimits

0x84e2,	// (0x000268af) call5_image_pane

0x84f2,	// (0x000268bf) call5_swipe_1_pane_ParamLimits

0x84f2,	// (0x000268bf) call5_swipe_1_pane

0x84fe,	// (0x000268cb) call5_swipe_2_pane_ParamLimits

0x84fe,	// (0x000268cb) call5_swipe_2_pane

0x8518,	// (0x000268e5) popup_call5_audio_first_window_ParamLimits

0x8518,	// (0x000268e5) popup_call5_audio_first_window

0xc987,	// (0x0002ad54) call5_swipe_1_pane_g1_ParamLimits

0xc987,	// (0x0002ad54) call5_swipe_1_pane_g1

0xe297,	// (0x0002c664) call5_swipe_1_pane_g2_ParamLimits

0xe297,	// (0x0002c664) call5_swipe_1_pane_g2

0x0001,

0xfc54,	// (0x0002e021) call5_swipe_1_pane_g_ParamLimits

0xfc54,	// (0x0002e021) call5_swipe_1_pane_g

0xe2a3,	// (0x0002c670) call5_swipe_1_pane_t1_ParamLimits

0xe2a3,	// (0x0002c670) call5_swipe_1_pane_t1

0xc987,	// (0x0002ad54) call5_swipe_2_pane_g1_ParamLimits

0xc987,	// (0x0002ad54) call5_swipe_2_pane_g1

0xe2b8,	// (0x0002c685) call5_swipe_2_pane_g2_ParamLimits

0xe2b8,	// (0x0002c685) call5_swipe_2_pane_g2

0x0001,

0xfc59,	// (0x0002e026) call5_swipe_2_pane_g_ParamLimits

0xfc59,	// (0x0002e026) call5_swipe_2_pane_g

0xe2c4,	// (0x0002c691) call5_swipe_2_pane_t1_ParamLimits

0xe2c4,	// (0x0002c691) call5_swipe_2_pane_t1

0xe2d9,	// (0x0002c6a6) sc_swipe_pane_g1_ParamLimits

0xe2d9,	// (0x0002c6a6) sc_swipe_pane_g1

0xe2e6,	// (0x0002c6b3) sc_swipe_pane_g2_ParamLimits

0xe2e6,	// (0x0002c6b3) sc_swipe_pane_g2

0x0001,

0x0a1f,	// (0x0001edec) sc_swipe_pane_g_ParamLimits

0x0a1f,	// (0x0001edec) sc_swipe_pane_g

0xe2f2,	// (0x0002c6bf) sc_swipe_pane_t1_ParamLimits

0xe2f2,	// (0x0002c6bf) sc_swipe_pane_t1

0x0f50,	// (0x0001f31d) main_cmail_launcher_pane

0x8526,	// (0x000268f3) aid_size_cell_cmail_l_ParamLimits

0x8526,	// (0x000268f3) aid_size_cell_cmail_l

0x8536,	// (0x00026903) grid_cmail_l_pane_ParamLimits

0x8536,	// (0x00026903) grid_cmail_l_pane

0x8546,	// (0x00026913) cell_cmail_l_pane_ParamLimits

0x8546,	// (0x00026913) cell_cmail_l_pane

0x855a,	// (0x00026927) cell_cmail_l_pane_g1_ParamLimits

0x855a,	// (0x00026927) cell_cmail_l_pane_g1

0x856b,	// (0x00026938) cell_cmail_l_pane_t1_ParamLimits

0x856b,	// (0x00026938) cell_cmail_l_pane_t1

0xe307,	// (0x0002c6d4) cell_cmail_l_pane_t2_ParamLimits

0xe307,	// (0x0002c6d4) cell_cmail_l_pane_t2

0x0001,

0xfc5e,	// (0x0002e02b) cell_cmail_l_pane_t_ParamLimits

0xfc5e,	// (0x0002e02b) cell_cmail_l_pane_t

0xa3a1,	// (0x0002876e) grid_highlight_pane_cp018_ParamLimits

0xa3a1,	// (0x0002876e) grid_highlight_pane_cp018

0x0db2,	// (0x0001f17f) main2_pane_ParamLimits

0x0db2,	// (0x0001f17f) main2_pane

0xa33f,	// (0x0002870c) popup_sp_fs_action_menu_bg_pane_g1

0xa347,	// (0x00028714) popup_sp_fs_action_menu_bg_pane_g2

0xa34f,	// (0x0002871c) popup_sp_fs_action_menu_bg_pane_g3

0xa357,	// (0x00028724) popup_sp_fs_action_menu_bg_pane_g4

0xa35f,	// (0x0002872c) popup_sp_fs_action_menu_bg_pane_g5

0xa367,	// (0x00028734) popup_sp_fs_action_menu_bg_pane_g6

0xa36f,	// (0x0002873c) popup_sp_fs_action_menu_bg_pane_g7

0xa377,	// (0x00028744) popup_sp_fs_action_menu_bg_pane_g8

0xa37f,	// (0x0002874c) popup_sp_fs_action_menu_bg_pane_g9

0xa387,	// (0x00028754) popup_sp_fs_action_menu_bg_pane_g10

0xa387,	// (0x00028754) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0002d557) popup_sp_fs_action_menu_bg_pane_g

0x3099,	// (0x00021466) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x2_t3_g3_g1

0x30a5,	// (0x00021472) list_medium_line_x2_t3_g3_g2_ParamLimits

0x30a5,	// (0x00021472) list_medium_line_x2_t3_g3_g2

0x30b1,	// (0x0002147e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x30b1,	// (0x0002147e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002d605) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002d605) list_medium_line_x2_t3_g3_g

0x30bd,	// (0x0002148a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x30bd,	// (0x0002148a) list_medium_line_x2_t3_g3_t1

0x30d2,	// (0x0002149f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x30d2,	// (0x0002149f) list_medium_line_x2_t3_g3_t2

0x30e4,	// (0x000214b1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x30e4,	// (0x000214b1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002d60c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002d60c) list_medium_line_x2_t3_g3_t

0x3099,	// (0x00021466) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x2_t3_g2_g1

0x30b1,	// (0x0002147e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x30b1,	// (0x0002147e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002d613) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002d613) list_medium_line_x2_t3_g2_g

0x30f9,	// (0x000214c6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x30f9,	// (0x000214c6) list_medium_line_x2_t3_g2_t1

0x310f,	// (0x000214dc) list_medium_line_x2_t3_g2_t2_ParamLimits

0x310f,	// (0x000214dc) list_medium_line_x2_t3_g2_t2

0x3121,	// (0x000214ee) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3121,	// (0x000214ee) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002d618) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002d618) list_medium_line_x2_t3_g2_t

0x3099,	// (0x00021466) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x2_t4_g4_g1

0x313f,	// (0x0002150c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x313f,	// (0x0002150c) list_medium_line_x2_t4_g4_g2

0x30a5,	// (0x00021472) list_medium_line_x2_t4_g4_g3_ParamLimits

0x30a5,	// (0x00021472) list_medium_line_x2_t4_g4_g3

0x314b,	// (0x00021518) list_medium_line_x2_t4_g4_g4_ParamLimits

0x314b,	// (0x00021518) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002d61f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002d61f) list_medium_line_x2_t4_g4_g

0x3157,	// (0x00021524) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3157,	// (0x00021524) list_medium_line_x2_t4_g4_t1

0x3171,	// (0x0002153e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3171,	// (0x0002153e) list_medium_line_x2_t4_g4_t2

0x3187,	// (0x00021554) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3187,	// (0x00021554) list_medium_line_x2_t4_g4_t3

0x319c,	// (0x00021569) list_medium_line_x2_t4_g4_t4_ParamLimits

0x319c,	// (0x00021569) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002d628) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002d628) list_medium_line_x2_t4_g4_t

0x3099,	// (0x00021466) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x2_t2_g4_g1

0x313f,	// (0x0002150c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x313f,	// (0x0002150c) list_medium_line_x2_t2_g4_g2

0x30a5,	// (0x00021472) list_medium_line_x2_t2_g4_g3_ParamLimits

0x30a5,	// (0x00021472) list_medium_line_x2_t2_g4_g3

0x30b1,	// (0x0002147e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x30b1,	// (0x0002147e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002d68f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002d68f) list_medium_line_x2_t2_g4_g

0x4325,	// (0x000226f2) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4325,	// (0x000226f2) list_medium_line_x2_t2_g4_t1

0x30e4,	// (0x000214b1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x30e4,	// (0x000214b1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002d698) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002d698) list_medium_line_x2_t2_g4_t

0x3099,	// (0x00021466) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x2_t2_g3_g1

0x30a5,	// (0x00021472) list_medium_line_x2_t2_g3_g2_ParamLimits

0x30a5,	// (0x00021472) list_medium_line_x2_t2_g3_g2

0x30b1,	// (0x0002147e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x30b1,	// (0x0002147e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002d605) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002d605) list_medium_line_x2_t2_g3_g

0x433a,	// (0x00022707) list_medium_line_x2_t2_g3_t1_ParamLimits

0x433a,	// (0x00022707) list_medium_line_x2_t2_g3_t1

0x30e4,	// (0x000214b1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x30e4,	// (0x000214b1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002d69d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002d69d) list_medium_line_x2_t2_g3_t

0x44c8,	// (0x00022895) main_sp_fs_list_pane_ParamLimits

0x44c8,	// (0x00022895) main_sp_fs_list_pane

0x44d4,	// (0x000228a1) sp_fs_scroll_pane_ParamLimits

0x44d4,	// (0x000228a1) sp_fs_scroll_pane

0x44e0,	// (0x000228ad) list_medium_line_x2_t3_t1

0x44f0,	// (0x000228bd) list_medium_line_x2_t3_t2

0x44fe,	// (0x000228cb) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002d6e8) list_medium_line_x2_t3_t

0x450c,	// (0x000228d9) list_medium_line_x3_t4_t1

0x451c,	// (0x000228e9) list_medium_line_x3_t4_t2

0x452a,	// (0x000228f7) list_medium_line_x3_t4_t3

0x44fe,	// (0x000228cb) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002d6ef) list_medium_line_x3_t4_t

0x4538,	// (0x00022905) list_medium_line_x4_t5_t1

0x4548,	// (0x00022915) list_medium_line_x4_t5_t2

0x452a,	// (0x000228f7) list_medium_line_x4_t5_t3

0x4556,	// (0x00022923) list_medium_line_x4_t5_t4

0x44fe,	// (0x000228cb) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002d6f8) list_medium_line_x4_t5_t

0x3099,	// (0x00021466) list_medium_line_t4_g4_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_t4_g4_g1

0x314b,	// (0x00021518) list_medium_line_t4_g4_g2_ParamLimits

0x314b,	// (0x00021518) list_medium_line_t4_g4_g2

0x4564,	// (0x00022931) list_medium_line_t4_g4_g3_ParamLimits

0x4564,	// (0x00022931) list_medium_line_t4_g4_g3

0x30b1,	// (0x0002147e) list_medium_line_t4_g4_g4_ParamLimits

0x30b1,	// (0x0002147e) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002d703) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002d703) list_medium_line_t4_g4_g

0x4570,	// (0x0002293d) list_medium_line_t4_g4_t1_ParamLimits

0x4570,	// (0x0002293d) list_medium_line_t4_g4_t1

0x4585,	// (0x00022952) list_medium_line_t4_g4_t2_ParamLimits

0x4585,	// (0x00022952) list_medium_line_t4_g4_t2

0x459b,	// (0x00022968) list_medium_line_t4_g4_t3_ParamLimits

0x459b,	// (0x00022968) list_medium_line_t4_g4_t3

0x30e4,	// (0x000214b1) list_medium_line_t4_g4_t4_ParamLimits

0x30e4,	// (0x000214b1) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002d70c) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002d70c) list_medium_line_t4_g4_t

0x464d,	// (0x00022a1a) chi_dic_find_pane_g1

0x13de,	// (0x0001f7ab) main_tport_pane

0xd480,	// (0x0002b84d) list_medium_line_plain_t1

0x711e,	// (0x000254eb) list_medium_line_t2_g2_g1_ParamLimits

0x711e,	// (0x000254eb) list_medium_line_t2_g2_g1

0x712a,	// (0x000254f7) list_medium_line_t2_g2_g2_ParamLimits

0x712a,	// (0x000254f7) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0002dde0) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0002dde0) list_medium_line_t2_g2_g

0x7136,	// (0x00025503) list_medium_line_t2_g2_t1_ParamLimits

0x7136,	// (0x00025503) list_medium_line_t2_g2_t1

0x7150,	// (0x0002551d) list_medium_line_t2_g2_t2_ParamLimits

0x7150,	// (0x0002551d) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0002dde5) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0002dde5) list_medium_line_t2_g2_t

0xd7bf,	// (0x0002bb8c) aid_sp_fs_list_icon_a_sm

0xd7c7,	// (0x0002bb94) aid_sp_fs_list_icon_d

0xd7cf,	// (0x0002bb9c) aid_sp_fs_text_primary

0xd7d8,	// (0x0002bba5) aid_sp_fs_text_secondary

0x76c1,	// (0x00025a8e) list_medium_line

0x76c1,	// (0x00025a8e) list_medium_line_g2

0x76c1,	// (0x00025a8e) list_medium_line_g3

0x76c1,	// (0x00025a8e) list_medium_line_plain

0x76c1,	// (0x00025a8e) list_medium_line_plain_t2

0x76c1,	// (0x00025a8e) list_medium_line_plain_t3

0x76c1,	// (0x00025a8e) list_medium_line_right_icon

0x76c1,	// (0x00025a8e) list_medium_line_right_iconx2

0x76c1,	// (0x00025a8e) list_medium_line_t2

0x76c1,	// (0x00025a8e) list_medium_line_t2_g2

0x76c1,	// (0x00025a8e) list_medium_line_t2_g3

0x76c1,	// (0x00025a8e) list_medium_line_t2_right_icon

0x76c1,	// (0x00025a8e) list_medium_line_t2_right_iconx2

0x76c1,	// (0x00025a8e) list_medium_line_t3

0x76c1,	// (0x00025a8e) list_medium_line_t3_g2

0x76c1,	// (0x00025a8e) list_medium_line_t3_g3

0x76c1,	// (0x00025a8e) list_medium_line_t3_right_iconx2

0x76ca,	// (0x00025a97) list_medium_line_t4_g4

0x76d3,	// (0x00025aa0) list_medium_line_x2

0x76d3,	// (0x00025aa0) list_medium_line_x2_t2_g2

0x76d3,	// (0x00025aa0) list_medium_line_x2_t2_g3

0x76d3,	// (0x00025aa0) list_medium_line_x2_t2_g4

0x76d3,	// (0x00025aa0) list_medium_line_x2_t3

0x76d3,	// (0x00025aa0) list_medium_line_x2_t3_g2

0x76d3,	// (0x00025aa0) list_medium_line_x2_t3_g3

0x76d3,	// (0x00025aa0) list_medium_line_x2_t3_g4

0x76d3,	// (0x00025aa0) list_medium_line_x2_t4_g2

0x76d3,	// (0x00025aa0) list_medium_line_x2_t4_g4

0x76dc,	// (0x00025aa9) list_medium_line_x3

0x76dc,	// (0x00025aa9) list_medium_line_x3_t4

0x76dc,	// (0x00025aa9) list_medium_line_x3_t4_g4

0x76ca,	// (0x00025a97) list_medium_line_x4_t4

0x76ca,	// (0x00025a97) list_medium_line_x4_t4_g7

0x76ca,	// (0x00025a97) list_medium_line_x4_t5

0x76e5,	// (0x00025ab2) list_single_fs_dyc_pane_ParamLimits

0x76e5,	// (0x00025ab2) list_single_fs_dyc_pane

0x3099,	// (0x00021466) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x4_t4_g7_g1

0x7d92,	// (0x0002615f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d92,	// (0x0002615f) list_medium_line_x4_t4_g7_g2

0x7d9e,	// (0x0002616b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d9e,	// (0x0002616b) list_medium_line_x4_t4_g7_g3

0x7dad,	// (0x0002617a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7dad,	// (0x0002617a) list_medium_line_x4_t4_g7_g4

0x7db9,	// (0x00026186) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7db9,	// (0x00026186) list_medium_line_x4_t4_g7_g5

0x7dc8,	// (0x00026195) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7dc8,	// (0x00026195) list_medium_line_x4_t4_g7_g6

0x7dd7,	// (0x000261a4) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7dd7,	// (0x000261a4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc1,	// (0x0002df8e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc1,	// (0x0002df8e) list_medium_line_x4_t4_g7_g

0x7de3,	// (0x000261b0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7de3,	// (0x000261b0) list_medium_line_x4_t4_g7_t1

0x7df8,	// (0x000261c5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7df8,	// (0x000261c5) list_medium_line_x4_t4_g7_t2

0x7e0d,	// (0x000261da) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e0d,	// (0x000261da) list_medium_line_x4_t4_g7_t3

0x7e22,	// (0x000261ef) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e22,	// (0x000261ef) list_medium_line_x4_t4_g7_t4

0x7e34,	// (0x00026201) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e34,	// (0x00026201) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd0,	// (0x0002df9d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd0,	// (0x0002df9d) list_medium_line_x4_t4_g7_t

0x7e46,	// (0x00026213) list_single_dyc_row_pane_ParamLimits

0x7e46,	// (0x00026213) list_single_dyc_row_pane

0x84d6,	// (0x000268a3) call5_gesture_pane_ParamLimits

0x84d6,	// (0x000268a3) call5_gesture_pane

0x850a,	// (0x000268d7) call5_windows_pane_ParamLimits

0x850a,	// (0x000268d7) call5_windows_pane

0x8581,	// (0x0002694e) call5_swipe_1_pane_cp_ParamLimits

0x8581,	// (0x0002694e) call5_swipe_1_pane_cp

0x858d,	// (0x0002695a) call5_swipe_2_pane_cp_ParamLimits

0x858d,	// (0x0002695a) call5_swipe_2_pane_cp

0xa4a5,	// (0x00028872) call5_image_pane_cp

0x8599,	// (0x00026966) popup_call5_audio_first_window_cp_ParamLimits

0x8599,	// (0x00026966) popup_call5_audio_first_window_cp

0xe2d9,	// (0x0002c6a6) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2d9,	// (0x0002c6a6) call5_swipe_1_pane_g1_cp

0xe319,	// (0x0002c6e6) call5_swipe_1_pane_g2_cp

0xe2f2,	// (0x0002c6bf) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2f2,	// (0x0002c6bf) call5_swipe_1_pane_t1_cp

0xe2d9,	// (0x0002c6a6) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2d9,	// (0x0002c6a6) call5_swipe_2_pane_g1_cp

0xe321,	// (0x0002c6ee) call5_swipe_2_pane_g2_cp

0xe329,	// (0x0002c6f6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe329,	// (0x0002c6f6) call5_swipe_2_pane_t1_cp

0xa3a1,	// (0x0002876e) main_sp_fs_email_pane

0xe33e,	// (0x0002c70b) main_sp_fs_listscroll_pane_te

0x85a7,	// (0x00026974) popup_sp_fs_action_menu_pane_ParamLimits

0x85a7,	// (0x00026974) popup_sp_fs_action_menu_pane

0xc739,	// (0x0002ab06) bg_sp_fs_ctrlbar_pane_g1

0xe347,	// (0x0002c714) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe350,	// (0x0002c71d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe359,	// (0x0002c726) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc739,	// (0x0002ab06) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc63,	// (0x0002e030) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc51e,	// (0x0002a8eb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc51e,	// (0x0002a8eb) bg_sp_fs_ctrlbar_ddmenu_pane

0xe362,	// (0x0002c72f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe362,	// (0x0002c72f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe36e,	// (0x0002c73b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe36e,	// (0x0002c73b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0a32,	// (0x0001edff) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0a32,	// (0x0001edff) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe37a,	// (0x0002c747) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe37a,	// (0x0002c747) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x85eb,	// (0x000269b8) list_medium_line_t2_right_icon_g1

0x85f3,	// (0x000269c0) list_medium_line_t2_right_icon_t1

0x8603,	// (0x000269d0) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6c,	// (0x0002e039) list_medium_line_t2_right_icon_t

0xc331,	// (0x0002a6fe) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc331,	// (0x0002a6fe) bg_sp_fs_ctrlbar_pane

0x8654,	// (0x00026a21) main_sp_fs_ctrlbar_button_pane_cp01

0x865c,	// (0x00026a29) main_sp_fs_ctrlbar_ddmenu_pane

0xe3cc,	// (0x0002c799) main_sp_fs_ctrlbar_pane_g1

0xe3d8,	// (0x0002c7a5) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0a3c,	// (0x0001ee09) main_sp_fs_ctrlbar_pane_g

0xe3e4,	// (0x0002c7b1) main_sp_fs_ctrlbar_pane_t1

0x8666,	// (0x00026a33) main_sp_fs_ctrlbar_pane

0x867c,	// (0x00026a49) main_sp_fs_listscroll_pane_te_cp01

0x868d,	// (0x00026a5a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x868d,	// (0x00026a5a) popup_sp_fs_action_menu_pane_cp01

0xa3a1,	// (0x0002876e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa3a1,	// (0x0002876e) bg_sp_fs_highlight_list_pane_cp01

0xe414,	// (0x0002c7e1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe414,	// (0x0002c7e1) sp_fs_action_menu_list_gene_pane_g1

0xe423,	// (0x0002c7f0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe423,	// (0x0002c7f0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x0a46,	// (0x0001ee13) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x0a46,	// (0x0001ee13) sp_fs_action_menu_list_gene_pane_g

0xe430,	// (0x0002c7fd) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe430,	// (0x0002c7fd) sp_fs_action_menu_list_gene_pane_t1

0xe448,	// (0x0002c815) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe448,	// (0x0002c815) sp_fs_action_menu_list_gene_pane

0xe467,	// (0x0002c834) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe467,	// (0x0002c834) popup_sp_fs_action_menu_bg_pane

0xe475,	// (0x0002c842) sp_fs_action_menu_list_pane_ParamLimits

0xe475,	// (0x0002c842) sp_fs_action_menu_list_pane

0x86b7,	// (0x00026a84) sp_fs_scroll_pane_cp01_ParamLimits

0x86b7,	// (0x00026a84) sp_fs_scroll_pane_cp01

0x86dd,	// (0x00026aaa) list_medium_line_plain_t2_t1

0x86ed,	// (0x00026aba) list_medium_line_plain_t2_t2

0x0001,

0xfc71,	// (0x0002e03e) list_medium_line_plain_t2_t

0x86fb,	// (0x00026ac8) list_medium_line_plain_t3_t1

0x870b,	// (0x00026ad8) list_medium_line_plain_t3_t2

0x8719,	// (0x00026ae6) list_medium_line_plain_t3_t3

0x0002,

0xfc76,	// (0x0002e043) list_medium_line_plain_t3_t

0x3099,	// (0x00021466) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x2_t2_g2_g1

0x30b1,	// (0x0002147e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x30b1,	// (0x0002147e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002d613) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002d613) list_medium_line_x2_t2_g2_g

0x4570,	// (0x0002293d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4570,	// (0x0002293d) list_medium_line_x2_t2_g2_t1

0x30e4,	// (0x000214b1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x30e4,	// (0x000214b1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc7d,	// (0x0002e04a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc7d,	// (0x0002e04a) list_medium_line_x2_t2_g2_t

0x3099,	// (0x00021466) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x2_t4_g2_g1

0x30b1,	// (0x0002147e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x30b1,	// (0x0002147e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002d613) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002d613) list_medium_line_x2_t4_g2_g

0x8727,	// (0x00026af4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8727,	// (0x00026af4) list_medium_line_x2_t4_g2_t1

0x873e,	// (0x00026b0b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x873e,	// (0x00026b0b) list_medium_line_x2_t4_g2_t2

0x8753,	// (0x00026b20) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8753,	// (0x00026b20) list_medium_line_x2_t4_g2_t3

0x30e4,	// (0x000214b1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x30e4,	// (0x000214b1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc82,	// (0x0002e04f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc82,	// (0x0002e04f) list_medium_line_x2_t4_g2_t

0x8765,	// (0x00026b32) list_medium_line_t3_right_iconx2_g1

0x85eb,	// (0x000269b8) list_medium_line_t3_right_iconx2_g2

0x876d,	// (0x00026b3a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8b,	// (0x0002e058) list_medium_line_t3_right_iconx2_g

0x8775,	// (0x00026b42) list_medium_line_t3_right_iconx2_t1

0x8785,	// (0x00026b52) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc92,	// (0x0002e05f) list_medium_line_t3_right_iconx2_t

0x3099,	// (0x00021466) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x3_t4_g4_g1

0x30a5,	// (0x00021472) list_medium_line_x3_t4_g4_g2_ParamLimits

0x30a5,	// (0x00021472) list_medium_line_x3_t4_g4_g2

0x314b,	// (0x00021518) list_medium_line_x3_t4_g4_g3_ParamLimits

0x314b,	// (0x00021518) list_medium_line_x3_t4_g4_g3

0x8793,	// (0x00026b60) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8793,	// (0x00026b60) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc97,	// (0x0002e064) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc97,	// (0x0002e064) list_medium_line_x3_t4_g4_g

0x879f,	// (0x00026b6c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x879f,	// (0x00026b6c) list_medium_line_x3_t4_g4_t1

0x87b6,	// (0x00026b83) list_medium_line_x3_t4_g4_t2_ParamLimits

0x87b6,	// (0x00026b83) list_medium_line_x3_t4_g4_t2

0x87cb,	// (0x00026b98) list_medium_line_x3_t4_g4_t3_ParamLimits

0x87cb,	// (0x00026b98) list_medium_line_x3_t4_g4_t3

0x87e0,	// (0x00026bad) list_medium_line_x3_t4_g4_t4_ParamLimits

0x87e0,	// (0x00026bad) list_medium_line_x3_t4_g4_t4

0x0003,

0xfca0,	// (0x0002e06d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfca0,	// (0x0002e06d) list_medium_line_x3_t4_g4_t

0x87fd,	// (0x00026bca) list_single_dyc_row_text_pane_t1_ParamLimits

0x87fd,	// (0x00026bca) list_single_dyc_row_text_pane_t1

0x8834,	// (0x00026c01) list_single_dyc_row_text_pane_t2_ParamLimits

0x8834,	// (0x00026c01) list_single_dyc_row_text_pane_t2

0xe495,	// (0x0002c862) list_single_dyc_row_text_pane_t3_ParamLimits

0xe495,	// (0x0002c862) list_single_dyc_row_text_pane_t3

0x0005,

0xfca9,	// (0x0002e076) list_single_dyc_row_text_pane_t_ParamLimits

0xfca9,	// (0x0002e076) list_single_dyc_row_text_pane_t

0xe4b9,	// (0x0002c886) list_single_dyc_row_pane_g1_ParamLimits

0xe4b9,	// (0x0002c886) list_single_dyc_row_pane_g1

0xe4c5,	// (0x0002c892) list_single_dyc_row_pane_g2_ParamLimits

0xe4c5,	// (0x0002c892) list_single_dyc_row_pane_g2

0xe4d1,	// (0x0002c89e) list_single_dyc_row_pane_g3_ParamLimits

0xe4d1,	// (0x0002c89e) list_single_dyc_row_pane_g3

0xe4dd,	// (0x0002c8aa) list_single_dyc_row_pane_g4_ParamLimits

0xe4dd,	// (0x0002c8aa) list_single_dyc_row_pane_g4

0x0003,

0x0a90,	// (0x0001ee5d) list_single_dyc_row_pane_g_ParamLimits

0x0a90,	// (0x0001ee5d) list_single_dyc_row_pane_g

0xe4e9,	// (0x0002c8b6) list_single_dyc_row_text_pane_ParamLimits

0xe4e9,	// (0x0002c8b6) list_single_dyc_row_text_pane

0x9b4b,	// (0x00027f18) bg_sp_fs_scroll_pane

0xe508,	// (0x0002c8d5) thumb_sp_fs_scroll_pane

0x711e,	// (0x000254eb) list_medium_line_g1_ParamLimits

0x711e,	// (0x000254eb) list_medium_line_g1

0xe511,	// (0x0002c8de) list_medium_line_t1_ParamLimits

0xe511,	// (0x0002c8de) list_medium_line_t1

0x3099,	// (0x00021466) list_medium_line_x2_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x2_g1

0x30a5,	// (0x00021472) list_medium_line_x2_g2_ParamLimits

0x30a5,	// (0x00021472) list_medium_line_x2_g2

0x0001,

0xfcb6,	// (0x0002e083) list_medium_line_x2_g_ParamLimits

0xfcb6,	// (0x0002e083) list_medium_line_x2_g

0xe526,	// (0x0002c8f3) list_medium_line_x2_t1_ParamLimits

0xe526,	// (0x0002c8f3) list_medium_line_x2_t1

0x3099,	// (0x00021466) list_medium_line_x3_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x3_g1

0x30a5,	// (0x00021472) list_medium_line_x3_g2_ParamLimits

0x30a5,	// (0x00021472) list_medium_line_x3_g2

0x0001,

0xfcb6,	// (0x0002e083) list_medium_line_x3_g_ParamLimits

0xfcb6,	// (0x0002e083) list_medium_line_x3_g

0xe526,	// (0x0002c8f3) list_medium_line_x3_t1_ParamLimits

0xe526,	// (0x0002c8f3) list_medium_line_x3_t1

0xe53c,	// (0x0002c909) thumb_sp_fs_scroll_pane_g1

0xe545,	// (0x0002c912) thumb_sp_fs_scroll_pane_g2

0xe54e,	// (0x0002c91b) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a9e,	// (0x0001ee6b) thumb_sp_fs_scroll_pane_g

0xe53c,	// (0x0002c909) bg_sp_fs_scroll_pane_g1

0xe545,	// (0x0002c912) bg_sp_fs_scroll_pane_g2

0xe54e,	// (0x0002c91b) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a9e,	// (0x0001ee6b) bg_sp_fs_scroll_pane_g

0x3099,	// (0x00021466) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3099,	// (0x00021466) list_medium_line_x2_t3_g4_g1

0x313f,	// (0x0002150c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x313f,	// (0x0002150c) list_medium_line_x2_t3_g4_g2

0x30a5,	// (0x00021472) list_medium_line_x2_t3_g4_g3_ParamLimits

0x30a5,	// (0x00021472) list_medium_line_x2_t3_g4_g3

0x30b1,	// (0x0002147e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x30b1,	// (0x0002147e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002d68f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002d68f) list_medium_line_x2_t3_g4_g

0x8957,	// (0x00026d24) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8957,	// (0x00026d24) list_medium_line_x2_t3_g4_t1

0x896d,	// (0x00026d3a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x896d,	// (0x00026d3a) list_medium_line_x2_t3_g4_t2

0x30e4,	// (0x000214b1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x30e4,	// (0x000214b1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcbb,	// (0x0002e088) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcbb,	// (0x0002e088) list_medium_line_x2_t3_g4_t

0x711e,	// (0x000254eb) list_medium_line_g2_g1_ParamLimits

0x711e,	// (0x000254eb) list_medium_line_g2_g1

0x712a,	// (0x000254f7) list_medium_line_g2_g2_ParamLimits

0x712a,	// (0x000254f7) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0002dde0) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0002dde0) list_medium_line_g2_g

0xe557,	// (0x0002c924) list_medium_line_g2_t1_ParamLimits

0xe557,	// (0x0002c924) list_medium_line_g2_t1

0x711e,	// (0x000254eb) list_medium_line_t3_g2_g1_ParamLimits

0x711e,	// (0x000254eb) list_medium_line_t3_g2_g1

0x712a,	// (0x000254f7) list_medium_line_t3_g2_g2_ParamLimits

0x712a,	// (0x000254f7) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0002dde0) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0002dde0) list_medium_line_t3_g2_g

0x8986,	// (0x00026d53) list_medium_line_t3_g2_t1_ParamLimits

0x8986,	// (0x00026d53) list_medium_line_t3_g2_t1

0x89a0,	// (0x00026d6d) list_medium_line_t3_g2_t2_ParamLimits

0x89a0,	// (0x00026d6d) list_medium_line_t3_g2_t2

0x89b6,	// (0x00026d83) list_medium_line_t3_g2_t3_ParamLimits

0x89b6,	// (0x00026d83) list_medium_line_t3_g2_t3

0x0002,

0xfcc2,	// (0x0002e08f) list_medium_line_t3_g2_t_ParamLimits

0xfcc2,	// (0x0002e08f) list_medium_line_t3_g2_t

0x85eb,	// (0x000269b8) list_medium_line_right_icon_g1

0xe56c,	// (0x0002c939) list_medium_line_right_icon_t1

0x711e,	// (0x000254eb) list_medium_line_t2_g1_ParamLimits

0x711e,	// (0x000254eb) list_medium_line_t2_g1

0x89cb,	// (0x00026d98) list_medium_line_t2_t1_ParamLimits

0x89cb,	// (0x00026d98) list_medium_line_t2_t1

0x89e5,	// (0x00026db2) list_medium_line_t2_t2_ParamLimits

0x89e5,	// (0x00026db2) list_medium_line_t2_t2

0x0001,

0xfcc9,	// (0x0002e096) list_medium_line_t2_t_ParamLimits

0xfcc9,	// (0x0002e096) list_medium_line_t2_t

0x711e,	// (0x000254eb) list_medium_line_t3_g1_ParamLimits

0x711e,	// (0x000254eb) list_medium_line_t3_g1

0x89fa,	// (0x00026dc7) list_medium_line_t3_t1_ParamLimits

0x89fa,	// (0x00026dc7) list_medium_line_t3_t1

0x8a14,	// (0x00026de1) list_medium_line_t3_t2_ParamLimits

0x8a14,	// (0x00026de1) list_medium_line_t3_t2

0x8a2a,	// (0x00026df7) list_medium_line_t3_t3_ParamLimits

0x8a2a,	// (0x00026df7) list_medium_line_t3_t3

0x0002,

0xfcce,	// (0x0002e09b) list_medium_line_t3_t_ParamLimits

0xfcce,	// (0x0002e09b) list_medium_line_t3_t

0x711e,	// (0x000254eb) list_medium_line_g3_g1_ParamLimits

0x711e,	// (0x000254eb) list_medium_line_g3_g1

0x8a3f,	// (0x00026e0c) list_medium_line_g3_g2_ParamLimits

0x8a3f,	// (0x00026e0c) list_medium_line_g3_g2

0x712a,	// (0x000254f7) list_medium_line_g3_g3_ParamLimits

0x712a,	// (0x000254f7) list_medium_line_g3_g3

0x0002,

0xfcd5,	// (0x0002e0a2) list_medium_line_g3_g_ParamLimits

0xfcd5,	// (0x0002e0a2) list_medium_line_g3_g

0xe57a,	// (0x0002c947) list_medium_line_g3_t1_ParamLimits

0xe57a,	// (0x0002c947) list_medium_line_g3_t1

0x711e,	// (0x000254eb) list_medium_line_t2_g3_g1_ParamLimits

0x711e,	// (0x000254eb) list_medium_line_t2_g3_g1

0x8a3f,	// (0x00026e0c) list_medium_line_t2_g3_g2_ParamLimits

0x8a3f,	// (0x00026e0c) list_medium_line_t2_g3_g2

0x712a,	// (0x000254f7) list_medium_line_t2_g3_g3_ParamLimits

0x712a,	// (0x000254f7) list_medium_line_t2_g3_g3

0x0002,

0xfcd5,	// (0x0002e0a2) list_medium_line_t2_g3_g_ParamLimits

0xfcd5,	// (0x0002e0a2) list_medium_line_t2_g3_g

0x8a4b,	// (0x00026e18) list_medium_line_t2_g3_t1_ParamLimits

0x8a4b,	// (0x00026e18) list_medium_line_t2_g3_t1

0x8a65,	// (0x00026e32) list_medium_line_t2_g3_t2_ParamLimits

0x8a65,	// (0x00026e32) list_medium_line_t2_g3_t2

0x0001,

0xfcdc,	// (0x0002e0a9) list_medium_line_t2_g3_t_ParamLimits

0xfcdc,	// (0x0002e0a9) list_medium_line_t2_g3_t

0x711e,	// (0x000254eb) list_medium_line_t3_g3_g1_ParamLimits

0x711e,	// (0x000254eb) list_medium_line_t3_g3_g1

0x8a3f,	// (0x00026e0c) list_medium_line_t3_g3_g2_ParamLimits

0x8a3f,	// (0x00026e0c) list_medium_line_t3_g3_g2

0x712a,	// (0x000254f7) list_medium_line_t3_g3_g3_ParamLimits

0x712a,	// (0x000254f7) list_medium_line_t3_g3_g3

0x0002,

0xfcd5,	// (0x0002e0a2) list_medium_line_t3_g3_g_ParamLimits

0xfcd5,	// (0x0002e0a2) list_medium_line_t3_g3_g

0x8a7b,	// (0x00026e48) list_medium_line_t3_g3_t1_ParamLimits

0x8a7b,	// (0x00026e48) list_medium_line_t3_g3_t1

0x8a94,	// (0x00026e61) list_medium_line_t3_g3_t2_ParamLimits

0x8a94,	// (0x00026e61) list_medium_line_t3_g3_t2

0x8aaa,	// (0x00026e77) list_medium_line_t3_g3_t3_ParamLimits

0x8aaa,	// (0x00026e77) list_medium_line_t3_g3_t3

0x0002,

0xfce1,	// (0x0002e0ae) list_medium_line_t3_g3_t_ParamLimits

0xfce1,	// (0x0002e0ae) list_medium_line_t3_g3_t

0x8765,	// (0x00026b32) list_medium_line_right_iconx2_g1

0x85eb,	// (0x000269b8) list_medium_line_right_iconx2_g2

0x0001,

0xfce8,	// (0x0002e0b5) list_medium_line_right_iconx2_g

0xe58f,	// (0x0002c95c) list_medium_line_right_iconx2_t1

0x8765,	// (0x00026b32) list_medium_line_t2_right_iconx2_g1

0x85eb,	// (0x000269b8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfce8,	// (0x0002e0b5) list_medium_line_t2_right_iconx2_g

0x8ac0,	// (0x00026e8d) list_medium_line_t2_right_iconx2_t1

0x8ad0,	// (0x00026e9d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfced,	// (0x0002e0ba) list_medium_line_t2_right_iconx2_t

0x8ade,	// (0x00026eab) list_medium_line_x4_t4_t1

0x8aec,	// (0x00026eb9) list_medium_line_x4_t4_t2

0x8afc,	// (0x00026ec9) list_medium_line_x4_t4_t3

0x8b0c,	// (0x00026ed9) list_medium_line_x4_t4_t4

0x0003,

0xfcf2,	// (0x0002e0bf) list_medium_line_x4_t4_t

0x8b46,	// (0x00026f13) tport_appsw_pane_ParamLimits

0x8b46,	// (0x00026f13) tport_appsw_pane

0x8b54,	// (0x00026f21) tport_contact_pane_ParamLimits

0x8b54,	// (0x00026f21) tport_contact_pane

0x8b64,	// (0x00026f31) tport_listscroll_pane_ParamLimits

0x8b64,	// (0x00026f31) tport_listscroll_pane

0x8b74,	// (0x00026f41) cell_tport_appsw_pane_ParamLimits

0x8b74,	// (0x00026f41) cell_tport_appsw_pane

0xca60,	// (0x0002ae2d) tport_appsw_pane_g1_ParamLimits

0xca60,	// (0x0002ae2d) tport_appsw_pane_g1

0xe59d,	// (0x0002c96a) tport_contact_pane_g1

0xe5a6,	// (0x0002c973) tport_contact_pane_t1

0xe5b4,	// (0x0002c981) tport_contact_pane_t2

0x0001,

0x0ae5,	// (0x0001eeb2) tport_contact_pane_t

0xe5c2,	// (0x0002c98f) list_tport_pane

0xe5cb,	// (0x0002c998) scroll_pane_cp_030

0x8ba7,	// (0x00026f74) cell_tport_appsw_pane_g1

0x8bb7,	// (0x00026f84) cell_tport_appsw_pane_t1

0x8bc5,	// (0x00026f92) grid_highlight_pane_cp019

0x8bcd,	// (0x00026f9a) list_tport_double_graphic_pane_ParamLimits

0x8bcd,	// (0x00026f9a) list_tport_double_graphic_pane

0xa3a1,	// (0x0002876e) list_highlight_pane_cp023_ParamLimits

0xa3a1,	// (0x0002876e) list_highlight_pane_cp023

0x8bde,	// (0x00026fab) list_tport_double_graphic_pane_g1_ParamLimits

0x8bde,	// (0x00026fab) list_tport_double_graphic_pane_g1

0x8beb,	// (0x00026fb8) list_tport_double_graphic_pane_t1_ParamLimits

0x8beb,	// (0x00026fb8) list_tport_double_graphic_pane_t1

0x8c00,	// (0x00026fcd) list_tport_double_graphic_pane_t2_ParamLimits

0x8c00,	// (0x00026fcd) list_tport_double_graphic_pane_t2

0x0001,

0xfd02,	// (0x0002e0cf) list_tport_double_graphic_pane_t_ParamLimits

0xfd02,	// (0x0002e0cf) list_tport_double_graphic_pane_t

0x9b4b,	// (0x00027f18) main_cale_note_pane

0x2105,	// (0x000204d2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x2105,	// (0x000204d2) cell_vitu2_function_top_wide_pane_cp01

0x81a7,	// (0x00026574) wait_bar_pane_cp05_ParamLimits

0xa3a1,	// (0x0002876e) listscroll_cmail_pane

0xe5d4,	// (0x0002c9a1) list_cmail_pane

0x8c12,	// (0x00026fdf) list_cmail_body_pane

0x8c35,	// (0x00027002) list_single_cmail_header_caption_pane

0x8c61,	// (0x0002702e) list_single_cmail_header_detail_pane_ParamLimits

0x8c61,	// (0x0002702e) list_single_cmail_header_detail_pane

0xe5e4,	// (0x0002c9b1) list_single_cmail_header_caption_pane_t1

0x8c9a,	// (0x00027067) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c9a,	// (0x00027067) list_single_cmail_header_detail_pane_g1

0xe5fb,	// (0x0002c9c8) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5fb,	// (0x0002c9c8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd07,	// (0x0002e0d4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd07,	// (0x0002e0d4) list_single_cmail_header_detail_pane_g

0xe614,	// (0x0002c9e1) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe614,	// (0x0002c9e1) list_single_cmail_header_detail_pane_t1

0xe674,	// (0x0002ca41) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe674,	// (0x0002ca41) list_single_cmail_header_editor_pane_bg

0xdf88,	// (0x0002c355) list_cmail_body_pane_g1

0xe68b,	// (0x0002ca58) list_cmail_body_pane_t1

0xd22f,	// (0x0002b5fc) list_single_cmail_header_editor_pane_bg_g1

0xa6fe,	// (0x00028acb) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd23f,	// (0x0002b60c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd237,	// (0x0002b604) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd48e,	// (0x0002b85b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd25f,	// (0x0002b62c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd24f,	// (0x0002b61c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd257,	// (0x0002b624) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa6de,	// (0x00028aab) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8cb0,	// (0x0002707d) calenote_gesture_pane_ParamLimits

0x8cb0,	// (0x0002707d) calenote_gesture_pane

0x8cca,	// (0x00027097) calenote_window_pane_ParamLimits

0x8cca,	// (0x00027097) calenote_window_pane

0xe699,	// (0x0002ca66) popup_note_window_cp01

0x8ce2,	// (0x000270af) calenote_swipe_1_pane_ParamLimits

0x8ce2,	// (0x000270af) calenote_swipe_1_pane

0x858d,	// (0x0002695a) calenote_swipe_2_pane_ParamLimits

0x858d,	// (0x0002695a) calenote_swipe_2_pane

0xe2d9,	// (0x0002c6a6) calenote_swipe_1_pane_g1_ParamLimits

0xe2d9,	// (0x0002c6a6) calenote_swipe_1_pane_g1

0xe2e6,	// (0x0002c6b3) calenote_swipe_1_pane_g2_ParamLimits

0xe2e6,	// (0x0002c6b3) calenote_swipe_1_pane_g2

0x0001,

0x0a1f,	// (0x0001edec) calenote_swipe_1_pane_g_ParamLimits

0x0a1f,	// (0x0001edec) calenote_swipe_1_pane_g

0xe6ab,	// (0x0002ca78) calenote_swipe_1_pane_t1_ParamLimits

0xe6ab,	// (0x0002ca78) calenote_swipe_1_pane_t1

0xe2d9,	// (0x0002c6a6) calenote_swipe_2_pane_g1_ParamLimits

0xe2d9,	// (0x0002c6a6) calenote_swipe_2_pane_g1

0xe6ca,	// (0x0002ca97) calenote_swipe_2_pane_g2_ParamLimits

0xe6ca,	// (0x0002ca97) calenote_swipe_2_pane_g2

0x0001,

0x0b02,	// (0x0001eecf) calenote_swipe_2_pane_g_ParamLimits

0x0b02,	// (0x0001eecf) calenote_swipe_2_pane_g

0xe6d6,	// (0x0002caa3) calenote_swipe_2_pane_t1_ParamLimits

0xe6d6,	// (0x0002caa3) calenote_swipe_2_pane_t1

0x9b4b,	// (0x00027f18) main_mup_navstr_pane

0x60a2,	// (0x0002446f) main_mup3_pane_t7_ParamLimits

0x60a2,	// (0x0002446f) main_mup3_pane_t7

0x1a14,	// (0x0001fde1) main_mp4_pane_g6_ParamLimits

0x1a14,	// (0x0001fde1) main_mp4_pane_g6

0x1d07,	// (0x000200d4) main_image3_pane_t4_ParamLimits

0x1d07,	// (0x000200d4) main_image3_pane_t4

0x8cf5,	// (0x000270c2) popup_navstr_preview_pane_ParamLimits

0x8cf5,	// (0x000270c2) popup_navstr_preview_pane

0x8d01,	// (0x000270ce) scroll_navstr_pane_ParamLimits

0x8d01,	// (0x000270ce) scroll_navstr_pane

0x9b4b,	// (0x00027f18) bg_popup_preview_window_pane_cp04

0xe6fd,	// (0x0002caca) popup_navstr_preview_pane_t1

0x8d0d,	// (0x000270da) scroll_navstr_pane_g1_ParamLimits

0x8d0d,	// (0x000270da) scroll_navstr_pane_g1

0x8d1a,	// (0x000270e7) scroll_navstr_pane_t1_ParamLimits

0x8d1a,	// (0x000270e7) scroll_navstr_pane_t1

0xe6a2,	// (0x0002ca6f) bg_button_pane_cp014

0xe6a2,	// (0x0002ca6f) bg_button_pane_cp030

0x847c,	// (0x00026849) list_double_fisheye_pane_g4_ParamLimits

0x847c,	// (0x00026849) list_double_fisheye_pane_g4

0x8488,	// (0x00026855) list_double_fisheye_pane_g5_ParamLimits

0x8488,	// (0x00026855) list_double_fisheye_pane_g5

0xd443,	// (0x0002b810) sp_fs_scroll_pane_cp03

0xe3cc,	// (0x0002c799) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3d8,	// (0x0002c7a5) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0a3c,	// (0x0001ee09) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3e4,	// (0x0002c7b1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5dc,	// (0x0002c9a9) sp_fs_scroll_pane_cp02

0xa3e4,	// (0x000287b1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa3e4,	// (0x000287b1) popup_sp_fs_calendar_preview_list_single_pane

0x9b4b,	// (0x00027f18) main_cam6_pano_pane

0x13c2,	// (0x0001f78f) main_mup3_pane_ParamLimits

0x9b4b,	// (0x00027f18) main_phacti_pane

0x807c,	// (0x00026449) bg_button_pane_cp11

0x8094,	// (0x00026461) main_mobtv_info_pane_g2_ParamLimits

0x8094,	// (0x00026461) main_mobtv_info_pane_g2

0x0001,

0xfc10,	// (0x0002dfdd) main_mobtv_info_pane_g_ParamLimits

0xfc10,	// (0x0002dfdd) main_mobtv_info_pane_g

0x8246,	// (0x00026613) sc_clock_pane_t5_ParamLimits

0x8246,	// (0x00026613) sc_clock_pane_t5

0x82e9,	// (0x000266b6) main_radioblah_pane_g1_ParamLimits

0xe225,	// (0x0002c5f2) main_radioblah_pane_t3_ParamLimits

0xe225,	// (0x0002c5f2) main_radioblah_pane_t3

0xe23d,	// (0x0002c60a) main_radioblah_pane_t4_ParamLimits

0xe23d,	// (0x0002c60a) main_radioblah_pane_t4

0x8307,	// (0x000266d4) main_radioblah_text_pane_ParamLimits

0x8307,	// (0x000266d4) main_radioblah_text_pane

0x8314,	// (0x000266e1) main_radioblah_info_pane_g1_ParamLimits

0x83a9,	// (0x00026776) main_radioblah_info_pane_t4_ParamLimits

0x83a9,	// (0x00026776) main_radioblah_info_pane_t4

0xa3a1,	// (0x0002876e) main_sp_fs_calendar_pane

0x8d2c,	// (0x000270f9) main_phacti_pane_g1

0x8d34,	// (0x00027101) phacti_note_pane_ParamLimits

0x8d34,	// (0x00027101) phacti_note_pane

0xe714,	// (0x0002cae1) phacti_term_pane_ParamLimits

0xe714,	// (0x0002cae1) phacti_term_pane

0xe729,	// (0x0002caf6) phacti_note_pane_t1_ParamLimits

0xe729,	// (0x0002caf6) phacti_note_pane_t1

0xe740,	// (0x0002cb0d) phacti_term_pane_g1

0xe748,	// (0x0002cb15) phacti_term_pane_t1_ParamLimits

0xe748,	// (0x0002cb15) phacti_term_pane_t1

0xe772,	// (0x0002cb3f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe77a,	// (0x0002cb47) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0b0c,	// (0x0001eed9) popup_sp_fs_calendar_preview_list_single_pane_g

0xe782,	// (0x0002cb4f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe782,	// (0x0002cb4f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe798,	// (0x0002cb65) aid_popup_sp_fs_bg_corner_pane

0xc739,	// (0x0002ab06) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b4b,	// (0x00027f18) popup_sp_fs_calendar_preview_bg_pane

0x8d4a,	// (0x00027117) popup_sp_fs_calendar_preview_list_pane

0xc331,	// (0x0002a6fe) bg_main_sp_fs_cale_pane_ParamLimits

0xc331,	// (0x0002a6fe) bg_main_sp_fs_cale_pane

0xe7a9,	// (0x0002cb76) listscroll_cale_mrui_pane_ParamLimits

0xe7a9,	// (0x0002cb76) listscroll_cale_mrui_pane

0xd2b3,	// (0x0002b680) listscroll_sp_fs_schedule_track_pane

0xe7be,	// (0x0002cb8b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7be,	// (0x0002cb8b) main_sp_fs_ctrlbar_pane_cp01

0xe7d1,	// (0x0002cb9e) main_sp_fs_ribbon_pane

0xe7d9,	// (0x0002cba6) popup_sp_fs_cale_preview_window

0x8d9f,	// (0x0002716c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d9f,	// (0x0002716c) list_single_sp_fs_schedule_track_pane

0xd1a7,	// (0x0002b574) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd1a7,	// (0x0002b574) bg_sp_fs_highlight_list_pane_cp03

0x8dc2,	// (0x0002718f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8dc2,	// (0x0002718f) list_single_sp_fs_schedule_track_pane_g1

0x8dce,	// (0x0002719b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8dce,	// (0x0002719b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd0e,	// (0x0002e0db) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd0e,	// (0x0002e0db) list_single_sp_fs_schedule_track_pane_g

0x8dda,	// (0x000271a7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8dda,	// (0x000271a7) list_single_sp_fs_schedule_track_pane_t1

0x8df2,	// (0x000271bf) sp_fs_schedule_track_pane_ParamLimits

0x8df2,	// (0x000271bf) sp_fs_schedule_track_pane

0xe7eb,	// (0x0002cbb8) sp_fs_schedule_track_pane_g1

0xe7f3,	// (0x0002cbc0) sp_fs_schedule_track_pane_g2

0xe7fb,	// (0x0002cbc8) sp_fs_schedule_track_pane_g3

0xe803,	// (0x0002cbd0) sp_fs_schedule_track_pane_g4

0xe80b,	// (0x0002cbd8) sp_fs_schedule_track_pane_g5

0x0004,

0x0b16,	// (0x0001eee3) sp_fs_schedule_track_pane_g

0xd22f,	// (0x0002b5fc) bg_sp_fs_schedule_viewer_highlight_g1

0xa6fe,	// (0x00028acb) bg_sp_fs_schedule_viewer_highlight_g2

0xd237,	// (0x0002b604) bg_sp_fs_schedule_viewer_highlight_g3

0xd23f,	// (0x0002b60c) bg_sp_fs_schedule_viewer_highlight_g4

0xd48e,	// (0x0002b85b) bg_sp_fs_schedule_viewer_highlight_g5

0xd24f,	// (0x0002b61c) bg_sp_fs_schedule_viewer_highlight_g6

0xd257,	// (0x0002b624) bg_sp_fs_schedule_viewer_highlight_g7

0xd25f,	// (0x0002b62c) bg_sp_fs_schedule_viewer_highlight_g8

0xa6de,	// (0x00028aab) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd13,	// (0x0002e0e0) bg_sp_fs_schedule_viewer_highlight_g

0x9b4b,	// (0x00027f18) bg_main_sp_fs_ribbon_pane

0x8e02,	// (0x000271cf) main_sp_fs_ribbon_pane_g1

0xe813,	// (0x0002cbe0) main_sp_fs_ribbon_pane_t1

0x8e0b,	// (0x000271d8) main_sp_fs_ribbon_pane_t2

0xe822,	// (0x0002cbef) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd26,	// (0x0002e0f3) main_sp_fs_ribbon_pane_t

0xe831,	// (0x0002cbfe) main_sp_fs_ribbon_scheduler_pane

0xe839,	// (0x0002cc06) bg_main_sp_fs_ribbon_pane_g1

0xe842,	// (0x0002cc0f) bg_main_sp_fs_ribbon_pane_g2

0xe84b,	// (0x0002cc18) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0b3b,	// (0x0001ef08) bg_main_sp_fs_ribbon_pane_g

0xe853,	// (0x0002cc20) main_sp_fs_ribbon_scheduler_pane_g1

0xe85c,	// (0x0002cc29) main_sp_fs_ribbon_scheduler_pane_g2

0xe865,	// (0x0002cc32) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0b42,	// (0x0001ef0f) main_sp_fs_ribbon_scheduler_pane_g

0xe86e,	// (0x0002cc3b) list_cale_mrui_pane

0x8e1a,	// (0x000271e7) sp_fs_scroll_pane_cp07_ParamLimits

0x8e1a,	// (0x000271e7) sp_fs_scroll_pane_cp07

0x8e36,	// (0x00027203) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e36,	// (0x00027203) bg_sp_fs_schedule_viewer_highlight

0xe87b,	// (0x0002cc48) list_single_sp_fs_schedule_track_pane_cp01

0xe883,	// (0x0002cc50) list_sp_fs_schedule_track_pane

0xe88b,	// (0x0002cc58) sp_fs_scroll_pane_cp06_ParamLimits

0xe88b,	// (0x0002cc58) sp_fs_scroll_pane_cp06

0xc739,	// (0x0002ab06) bgmain_sp_fs_calendar_pane_g1

0x8e43,	// (0x00027210) list_single_cale_mrui_pane_ParamLimits

0x8e43,	// (0x00027210) list_single_cale_mrui_pane

0xe89d,	// (0x0002cc6a) list_single_cale_mrui_row_pane_ParamLimits

0xe89d,	// (0x0002cc6a) list_single_cale_mrui_row_pane

0xe8aa,	// (0x0002cc77) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8aa,	// (0x0002cc77) list_single_cale_mrui_row_pane_g1

0xe8e3,	// (0x0002ccb0) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8e3,	// (0x0002ccb0) list_single_cale_mrui_row_pane_t1

0x8e71,	// (0x0002723e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e71,	// (0x0002723e) list_single_cale_mrui_row_pane_t2

0xe8f5,	// (0x0002ccc2) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8f5,	// (0x0002ccc2) list_single_cale_mrui_row_pane_t3

0xe924,	// (0x0002ccf1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe924,	// (0x0002ccf1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd2d,	// (0x0002e0fa) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd2d,	// (0x0002e0fa) list_single_cale_mrui_row_pane_t

0x8ed7,	// (0x000272a4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ed7,	// (0x000272a4) list_single_cmail_header_editor_pane_bg_cp01

0x8ef7,	// (0x000272c4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ef7,	// (0x000272c4) list_single_cmail_header_editor_pane_bg_cp02

0x8f13,	// (0x000272e0) main_radioblah_text_pane_t1_ParamLimits

0x8f13,	// (0x000272e0) main_radioblah_text_pane_t1

0xe953,	// (0x0002cd20) cam6_indi_pane_cp01

0xe95b,	// (0x0002cd28) cam6_mode_pane_cp01

0xe963,	// (0x0002cd30) cam6_pano_pane

0xe96c,	// (0x0002cd39) cam6_zoom_pane_cp01

0xe974,	// (0x0002cd41) cam6_pano_image_pane

0xe97f,	// (0x0002cd4c) cam6_pano_pane_g1

0xdf88,	// (0x0002c355) cam6_pano_pane_g2

0xe988,	// (0x0002cd55) cam6_pano_pane_g3

0xe991,	// (0x0002cd5e) cam6_pano_pane_g4

0xcd58,	// (0x0002b125) cam6_pano_pane_g5

0xe99a,	// (0x0002cd67) cam6_pano_pane_g6

0xe9a4,	// (0x0002cd71) cam6_pano_pane_g7

0xe9ac,	// (0x0002cd79) cam6_pano_pane_g8

0xe9b5,	// (0x0002cd82) cam6_pano_pane_g9

0x0008,

0xfd36,	// (0x0002e103) cam6_pano_pane_g

0x9b4b,	// (0x00027f18) main_browser_tag_pane

0xe6f5,	// (0x0002cac2) grid_navstr_albumart_pane

0xe9c0,	// (0x0002cd8d) cell_navstr_albumart_pane_ParamLimits

0xe9c0,	// (0x0002cd8d) cell_navstr_albumart_pane

0xe9e0,	// (0x0002cdad) cell_navstr_albumart_pane_g1

0xc102,	// (0x0002a4cf) cell_navstr_albumart_pane_g2

0xc112,	// (0x0002a4df) cell_navstr_albumart_pane_g3

0xc10a,	// (0x0002a4d7) cell_navstr_albumart_pane_g4

0x0003,

0xfd49,	// (0x0002e116) cell_navstr_albumart_pane_g

0x8f2e,	// (0x000272fb) bt_list_pane_ParamLimits

0x8f2e,	// (0x000272fb) bt_list_pane

0x8f4f,	// (0x0002731c) bt_list_pane_t1

0x8f5e,	// (0x0002732b) bt_list_pane_t2

0x0001,

0xfd52,	// (0x0002e11f) bt_list_pane_t

0x9b4b,	// (0x00027f18) main_cale_prevew_pane

0x8f6d,	// (0x0002733a) popup_cale_preview_window_ParamLimits

0x8f6d,	// (0x0002733a) popup_cale_preview_window

0xa3a1,	// (0x0002876e) bg_popup_preview_window_pane_cp05_ParamLimits

0xa3a1,	// (0x0002876e) bg_popup_preview_window_pane_cp05

0xe9e8,	// (0x0002cdb5) list_cale_preview_pane_ParamLimits

0xe9e8,	// (0x0002cdb5) list_cale_preview_pane

0x8f86,	// (0x00027353) list_double_cale_preview_pane_ParamLimits

0x8f86,	// (0x00027353) list_double_cale_preview_pane

0x8f98,	// (0x00027365) list_single_cale_preview_pane_ParamLimits

0x8f98,	// (0x00027365) list_single_cale_preview_pane

0x8fac,	// (0x00027379) list_single_cale_preview_pane_g1

0x8fb4,	// (0x00027381) list_single_cale_preview_pane_t1_ParamLimits

0x8fb4,	// (0x00027381) list_single_cale_preview_pane_t1

0x8fc9,	// (0x00027396) list_double_cale_preview_pane_g1

0x8fd1,	// (0x0002739e) list_double_cale_preview_pane_t1_ParamLimits

0x8fd1,	// (0x0002739e) list_double_cale_preview_pane_t1

0x8fe6,	// (0x000273b3) list_double_cale_preview_pane_t2_ParamLimits

0x8fe6,	// (0x000273b3) list_double_cale_preview_pane_t2

0x0001,

0xfd57,	// (0x0002e124) list_double_cale_preview_pane_t_ParamLimits

0xfd57,	// (0x0002e124) list_double_cale_preview_pane_t

0x9b4b,	// (0x00027f18) main_ezdial_pane

0xa3a1,	// (0x0002876e) main_sp_fs_email_pane_ParamLimits

0x8611,	// (0x000269de) cmail_ddmenu_btn01_pane_ParamLimits

0x8611,	// (0x000269de) cmail_ddmenu_btn01_pane

0x8626,	// (0x000269f3) cmail_ddmenu_btn02_pane_ParamLimits

0x8626,	// (0x000269f3) cmail_ddmenu_btn02_pane

0x863e,	// (0x00026a0b) cmail_ddmenu_btn03_pane_ParamLimits

0x863e,	// (0x00026a0b) cmail_ddmenu_btn03_pane

0x8666,	// (0x00026a33) main_sp_fs_ctrlbar_pane_ParamLimits

0x867c,	// (0x00026a49) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c12,	// (0x00026fdf) list_cmail_body_pane_ParamLimits

0xe5f2,	// (0x0002c9bf) bg_button_pane_cp12

0xe607,	// (0x0002c9d4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe607,	// (0x0002c9d4) list_single_cmail_header_detail_pane_g3

0xe650,	// (0x0002ca1d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe650,	// (0x0002ca1d) list_single_cmail_header_detail_pane_t2

0x0001,

0x0afd,	// (0x0001eeca) list_single_cmail_header_detail_pane_t_ParamLimits

0x0afd,	// (0x0001eeca) list_single_cmail_header_detail_pane_t

0xe75d,	// (0x0002cb2a) phacti_term_pane_t2_ParamLimits

0xe75d,	// (0x0002cb2a) phacti_term_pane_t2

0x0001,

0x0b07,	// (0x0001eed4) phacti_term_pane_t_ParamLimits

0x0b07,	// (0x0001eed4) phacti_term_pane_t

0xe9f4,	// (0x0002cdc1) aid_size_list_single_double

0x8ffe,	// (0x000273cb) popup_ezdial_listscroll_window

0x9022,	// (0x000273ef) popup_number_entry_window_cp01

0xa4a5,	// (0x00028872) bg_popup_call_pane_cp09

0xea00,	// (0x0002cdcd) ezdial_list_pane

0xea08,	// (0x0002cdd5) scroll_pane_cp23

0xc51e,	// (0x0002a8eb) bg_button_pane_cp028_ParamLimits

0xc51e,	// (0x0002a8eb) bg_button_pane_cp028

0x9030,	// (0x000273fd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9030,	// (0x000273fd) cmail_ddmenu_btn01_pane_g1

0x9040,	// (0x0002740d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9040,	// (0x0002740d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd5c,	// (0x0002e129) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd5c,	// (0x0002e129) cmail_ddmenu_btn01_pane_g

0xea10,	// (0x0002cddd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea10,	// (0x0002cddd) cmail_ddmenu_btn01_pane_t1

0xc331,	// (0x0002a6fe) bg_button_pane_cp029_ParamLimits

0xc331,	// (0x0002a6fe) bg_button_pane_cp029

0x9040,	// (0x0002740d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9040,	// (0x0002740d) cmail_ddmenu_btn02_pane_g1

0x9059,	// (0x00027426) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9059,	// (0x00027426) cmail_ddmenu_btn02_pane_t1

0xd1a7,	// (0x0002b574) bg_button_pane_cp031_ParamLimits

0xd1a7,	// (0x0002b574) bg_button_pane_cp031

0x9040,	// (0x0002740d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9040,	// (0x0002740d) cmail_ddmenu_btn03_pane_g1

0x9059,	// (0x00027426) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9059,	// (0x00027426) cmail_ddmenu_btn03_pane_t1

0x690e,	// (0x00024cdb) cell_dialer2_keypad_pane_t1_ParamLimits

0x6928,	// (0x00024cf5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6928,	// (0x00024cf5) cell_dialer2_keypad_pane_t1_copy1

0x7f01,	// (0x000262ce) ncimui_group_button_pane

0xa3a1,	// (0x0002876e) main_sp_fs_calendar_pane_ParamLimits

0x8c35,	// (0x00027002) list_single_cmail_header_caption_pane_ParamLimits

0xe7a0,	// (0x0002cb6d) aid_recal_txt_sm_pane

0x9b4b,	// (0x00027f18) mian_recal_day_pane

0xe7d9,	// (0x0002cba6) popup_sp_fs_cale_preview_window_ParamLimits

0xea25,	// (0x0002cdf2) list_recal_day_pane

0xea67,	// (0x0002ce34) list_single_recal_day_pane_ParamLimits

0xea67,	// (0x0002ce34) list_single_recal_day_pane

0xea79,	// (0x0002ce46) list_single_recal_day_pane_g1_ParamLimits

0xea79,	// (0x0002ce46) list_single_recal_day_pane_g1

0xea85,	// (0x0002ce52) list_single_recal_day_pane_g2_ParamLimits

0xea85,	// (0x0002ce52) list_single_recal_day_pane_g2

0xea95,	// (0x0002ce62) list_single_recal_day_pane_g3_ParamLimits

0xea95,	// (0x0002ce62) list_single_recal_day_pane_g3

0x907d,	// (0x0002744a) list_single_recal_day_pane_g4_ParamLimits

0x907d,	// (0x0002744a) list_single_recal_day_pane_g4

0xeaa1,	// (0x0002ce6e) list_single_recal_day_pane_g5_ParamLimits

0xeaa1,	// (0x0002ce6e) list_single_recal_day_pane_g5

0xeab1,	// (0x0002ce7e) list_single_recal_day_pane_g6_ParamLimits

0xeab1,	// (0x0002ce7e) list_single_recal_day_pane_g6

0x0004,

0xfd6b,	// (0x0002e138) list_single_recal_day_pane_g_ParamLimits

0xfd6b,	// (0x0002e138) list_single_recal_day_pane_g

0xeac5,	// (0x0002ce92) list_single_recal_day_pane_t1

0xead7,	// (0x0002cea4) list_single_recal_day_pane_t2

0x0001,

0xfd76,	// (0x0002e143) list_single_recal_day_pane_t

0x909d,	// (0x0002746a) ncimui_query_button_pane_ParamLimits

0x909d,	// (0x0002746a) ncimui_query_button_pane

0x90ad,	// (0x0002747a) ncimui_query_button_pane_t1_ParamLimits

0x90ad,	// (0x0002747a) ncimui_query_button_pane_t1

0xeae9,	// (0x0002ceb6) ncimui_query_button_pane_t2_ParamLimits

0xeae9,	// (0x0002ceb6) ncimui_query_button_pane_t2

0x0001,

0xfd7b,	// (0x0002e148) ncimui_query_button_pane_t_ParamLimits

0xfd7b,	// (0x0002e148) ncimui_query_button_pane_t

0x90c0,	// (0x0002748d) query_button_pane_ParamLimits

0x90c0,	// (0x0002748d) query_button_pane

0x9b4b,	// (0x00027f18) bg_button_pane_cp0028

0xeafc,	// (0x0002cec9) query_button_pane_t1

0x13de,	// (0x0001f7ab) main_tport_pane_ParamLimits

0x8b1c,	// (0x00026ee9) bg_popup_window_pane_cp01_ParamLimits

0x8b1c,	// (0x00026ee9) bg_popup_window_pane_cp01

0x8b2a,	// (0x00026ef7) heading_pane_cp08_ParamLimits

0x8b2a,	// (0x00026ef7) heading_pane_cp08

0x8b38,	// (0x00026f05) heading_pane_cp07_ParamLimits

0x8b38,	// (0x00026f05) heading_pane_cp07

0x8ba7,	// (0x00026f74) cell_tport_appsw_pane_g2

0x0002,

0xfcfb,	// (0x0002e0c8) cell_tport_appsw_pane_g

0x4cac,	// (0x00023079) input_candi_list_open_g1

0xa8c1,	// (0x00028c8e) list_cale_time_pane_g6_ParamLimits

0xa8c1,	// (0x00028c8e) list_cale_time_pane_g6

0x5b4c,	// (0x00023f19) aid_size_touch_calib_1_ParamLimits

0x5b4c,	// (0x00023f19) aid_size_touch_calib_1

0x5b58,	// (0x00023f25) aid_size_touch_calib_2_ParamLimits

0x5b58,	// (0x00023f25) aid_size_touch_calib_2

0x5b66,	// (0x00023f33) aid_size_touch_calib_3_ParamLimits

0x5b66,	// (0x00023f33) aid_size_touch_calib_3

0x5b76,	// (0x00023f43) aid_size_touch_calib_4_ParamLimits

0x5b76,	// (0x00023f43) aid_size_touch_calib_4

0x5b84,	// (0x00023f51) main_touch_calib_button_group_pane_ParamLimits

0x5b84,	// (0x00023f51) main_touch_calib_button_group_pane

0x5b92,	// (0x00023f5f) main_touch_calib_pane_g1_ParamLimits

0x5b9e,	// (0x00023f6b) main_touch_calib_pane_g2_ParamLimits

0x5baa,	// (0x00023f77) main_touch_calib_pane_g3_ParamLimits

0x5bb6,	// (0x00023f83) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0002db31) main_touch_calib_pane_g_ParamLimits

0x5bc2,	// (0x00023f8f) main_touch_calib_pane_t1_ParamLimits

0x5bdb,	// (0x00023fa8) main_touch_calib_pane_t2_ParamLimits

0x5bf4,	// (0x00023fc1) main_touch_calib_pane_t3_ParamLimits

0x5c0a,	// (0x00023fd7) main_touch_calib_pane_t4_ParamLimits

0x5c20,	// (0x00023fed) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0002db3a) main_touch_calib_pane_t_ParamLimits

0xcafb,	// (0x0002aec8) list_single_fp_cale_pane_g3_ParamLimits

0xcafb,	// (0x0002aec8) list_single_fp_cale_pane_g3

0x13c2,	// (0x0001f78f) bg_button_pane_cp012_ParamLimits

0x13c2,	// (0x0001f78f) bg_vkb2_func_pane_cp03_ParamLimits

0x230a,	// (0x000206d7) cell_vitu2_function_top_pane_g1_ParamLimits

0x13c2,	// (0x0001f78f) bg_vkb2_func_pane_cp04_ParamLimits

0x7e89,	// (0x00026256) main_ncimui_button_group_pane_ParamLimits

0x7e89,	// (0x00026256) main_ncimui_button_group_pane

0x7eef,	// (0x000262bc) main_ncimui_pane_t3_ParamLimits

0x7eef,	// (0x000262bc) main_ncimui_pane_t3

0xe70b,	// (0x0002cad8) phacti_button_group_pane

0xe9f4,	// (0x0002cdc1) aid_size_list_single_double_ParamLimits

0x8ffe,	// (0x000273cb) popup_ezdial_listscroll_window_ParamLimits

0x9022,	// (0x000273ef) popup_number_entry_window_cp01_ParamLimits

0x90cd,	// (0x0002749a) phacti_button_pane_ParamLimits

0x90cd,	// (0x0002749a) phacti_button_pane

0x9b4b,	// (0x00027f18) bg_button_pane_cp14

0xeb0a,	// (0x0002ced7) phacti_button_pane_t1

0x90de,	// (0x000274ab) main_touch_calib_button_pane_ParamLimits

0x90de,	// (0x000274ab) main_touch_calib_button_pane

0xa294,	// (0x00028661) bg_button_pane_cp18_ParamLimits

0xa294,	// (0x00028661) bg_button_pane_cp18

0xeb18,	// (0x0002cee5) main_touch_calib_button_pane_t1_ParamLimits

0xeb18,	// (0x0002cee5) main_touch_calib_button_pane_t1

0xeb2e,	// (0x0002cefb) main_touch_calib_button_pane_t2_ParamLimits

0xeb2e,	// (0x0002cefb) main_touch_calib_button_pane_t2

0x0001,

0xfd80,	// (0x0002e14d) main_touch_calib_button_pane_t_ParamLimits

0xfd80,	// (0x0002e14d) main_touch_calib_button_pane_t

0x9b4b,	// (0x00027f18) cell_ncimui_button_pane

0x9b4b,	// (0x00027f18) bg_button_pane_cp032

0xeb4c,	// (0x0002cf19) cell_ncimui_button_pane_t1

0x1c1a,	// (0x0001ffe7) image3_infobar_pane_ParamLimits

0x1c1a,	// (0x0001ffe7) image3_infobar_pane

0x8268,	// (0x00026635) fs_bigclock_status_pane_ParamLimits

0x8268,	// (0x00026635) fs_bigclock_status_pane

0x8275,	// (0x00026642) main_fs_bigclock_clock_pane_ParamLimits

0x8275,	// (0x00026642) main_fs_bigclock_clock_pane

0x828f,	// (0x0002665c) main_fs_bigclock_indi_pane_ParamLimits

0x828f,	// (0x0002665c) main_fs_bigclock_indi_pane

0x82b7,	// (0x00026684) main_fs_bigclock_swipe_pane_ParamLimits

0x82b7,	// (0x00026684) main_fs_bigclock_swipe_pane

0x9b4b,	// (0x00027f18) main_fs_clock_dumped_data

0xe095,	// (0x0002c462) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe095,	// (0x0002c462) list_single_fs_bigclock_indicator_pane_g1

0xe0b1,	// (0x0002c47e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0b1,	// (0x0002c47e) list_single_fs_bigclock_indicator_pane_g2

0xe0cb,	// (0x0002c498) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0cb,	// (0x0002c498) list_single_fs_bigclock_indicator_pane_g3

0xe0e5,	// (0x0002c4b2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0e5,	// (0x0002c4b2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x09d0,	// (0x0001ed9d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x09d0,	// (0x0001ed9d) list_single_fs_bigclock_indicator_pane_g

0xe110,	// (0x0002c4dd) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe110,	// (0x0002c4dd) list_single_fs_bigclock_indicator_pane_t1

0xe138,	// (0x0002c505) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe138,	// (0x0002c505) list_single_fs_bigclock_indicator_pane_t2

0xe160,	// (0x0002c52d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe160,	// (0x0002c52d) list_single_fs_bigclock_indicator_pane_t3

0xe188,	// (0x0002c555) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe188,	// (0x0002c555) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x09db,	// (0x0001eda8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x09db,	// (0x0001eda8) list_single_fs_bigclock_indicator_pane_t

0xeb5a,	// (0x0002cf27) image3_infobar_fav_pane_ParamLimits

0xeb5a,	// (0x0002cf27) image3_infobar_fav_pane

0xeb6a,	// (0x0002cf37) image3_infobar_loc_pane_ParamLimits

0xeb6a,	// (0x0002cf37) image3_infobar_loc_pane

0xeb7e,	// (0x0002cf4b) image3_infobar_time_pane_ParamLimits

0xeb7e,	// (0x0002cf4b) image3_infobar_time_pane

0xc739,	// (0x0002ab06) image3_infobar_time_pane_g1

0xeb8e,	// (0x0002cf5b) image3_infobar_time_pane_t1

0xc739,	// (0x0002ab06) image3_infobar_loc_pane_g1

0xeb9c,	// (0x0002cf69) image3_infobar_loc_pane_g2

0x0001,

0xfd85,	// (0x0002e152) image3_infobar_loc_pane_g

0xeba4,	// (0x0002cf71) image3_infobar_loc_pane_t1

0xc739,	// (0x0002ab06) image3_infobar_fav_pane_g1

0xebb2,	// (0x0002cf7f) image3_infobar_fav_pane_g2

0x0001,

0xfd8a,	// (0x0002e157) image3_infobar_fav_pane_g

0xebba,	// (0x0002cf87) fs_bigclock_status_battery_pane

0xebc3,	// (0x0002cf90) fs_bigclock_status_signal_pane

0xebcc,	// (0x0002cf99) fs_bigclock_status_title_pane

0xebd5,	// (0x0002cfa2) fs_bigclock_status_signal_pane_g1

0xebde,	// (0x0002cfab) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd8f,	// (0x0002e15c) fs_bigclock_status_signal_pane_g

0xebe6,	// (0x0002cfb3) fs_bigclock_status_battery_pane_g1

0xebef,	// (0x0002cfbc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd94,	// (0x0002e161) fs_bigclock_status_battery_pane_g

0xebf7,	// (0x0002cfc4) fs_bigclock_status_title_pane_t1

0xc739,	// (0x0002ab06) main_fs_bigclock_clock_pane_g1

0xec05,	// (0x0002cfd2) main_fs_bigclock_clock_pane_g2

0xec0e,	// (0x0002cfdb) main_fs_bigclock_clock_pane_g3

0xec0e,	// (0x0002cfdb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd99,	// (0x0002e166) main_fs_bigclock_clock_pane_g

0xec16,	// (0x0002cfe3) main_fs_bigclock_clock_pane_t1

0x90ee,	// (0x000274bb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfda2,	// (0x0002e16f) main_fs_bigclock_clock_pane_t

0xec24,	// (0x0002cff1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec24,	// (0x0002cff1) list_single_fs_bigclock_indicator_pane

0xec35,	// (0x0002d002) list_single_fs_bigclock_pane_ParamLimits

0xec35,	// (0x0002d002) list_single_fs_bigclock_pane

0xec88,	// (0x0002d055) main_fs_bigclock_indicator_pane_t1

0xec97,	// (0x0002d064) list_single_fs_bigclock_pane_g1

0xec9f,	// (0x0002d06c) list_single_fs_bigclock_pane_t1

0xc739,	// (0x0002ab06) main_fs_bigclock_swipe_pane_g1

0xece2,	// (0x0002d0af) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdae,	// (0x0002e17b) main_fs_bigclock_swipe_pane_g

0xecea,	// (0x0002d0b7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecea,	// (0x0002d0b7) main_fs_bigclock_swipe_pane_t1

0x45b1,	// (0x0002297e) call_type_pane_ParamLimits

0x9b4b,	// (0x00027f18) main_btmg_pane

0xe3d8,	// (0x0002c7a5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe3d8,	// (0x0002c7a5) list_single_cale_mrui_row_pane_g2

0x0002,

0x0b49,	// (0x0001ef16) list_single_cale_mrui_row_pane_g_ParamLimits

0x0b49,	// (0x0001ef16) list_single_cale_mrui_row_pane_g

0xea4e,	// (0x0002ce1b) list_recal_vselct_arw_lo_pane

0xea56,	// (0x0002ce23) list_recal_vselct_arw_up_pane

0xea5e,	// (0x0002ce2b) list_recal_vselct_pane

0x9141,	// (0x0002750e) btmg_button_pane

0x914d,	// (0x0002751a) main_btmg_pane_g1

0x9b4b,	// (0x00027f18) bg_button_pane_cp044

0xed07,	// (0x0002d0d4) btmg_button_pane_t1

0xc31d,	// (0x0002a6ea) aid_listscroll_gen

0xa3a1,	// (0x0002876e) main_cntbar_detail_pane

0xe5d4,	// (0x0002c9a1) list_cmail_folder_pane

0xd443,	// (0x0002b810) sp_fs_scroll_pane_cp03_ParamLimits

0x9155,	// (0x00027522) list_single_fs_dyc_pane_cp01_ParamLimits

0x9155,	// (0x00027522) list_single_fs_dyc_pane_cp01

0xed15,	// (0x0002d0e2) aid_size_cmail_indent

0xed1e,	// (0x0002d0eb) list_single_dyc_row_pane_cp01

0x91a1,	// (0x0002756e) cntbar_detail_list_pane_ParamLimits

0x91a1,	// (0x0002756e) cntbar_detail_list_pane

0x91db,	// (0x000275a8) main_cntbar_detail_cont_pane_ParamLimits

0x91db,	// (0x000275a8) main_cntbar_detail_cont_pane

0x44d4,	// (0x000228a1) scroll_pane_cp032_ParamLimits

0x44d4,	// (0x000228a1) scroll_pane_cp032

0x91e7,	// (0x000275b4) cntbar_detail_list_event_pane_ParamLimits

0x91e7,	// (0x000275b4) cntbar_detail_list_event_pane

0x91ad,	// (0x0002757a) cntbar_detail_list_shct_pane

0xa74c,	// (0x00028b19) aid_list_gen

0xed27,	// (0x0002d0f4) aid_scroll

0xed30,	// (0x0002d0fd) aid_size_touch_scroll_bar

0x76d3,	// (0x00025aa0) aid_list_double

0x91fb,	// (0x000275c8) aid_list_single

0x76c1,	// (0x00025a8e) aid_list_single_lg

0x9204,	// (0x000275d1) aid_list_z_g_a_sm

0x920c,	// (0x000275d9) aid_list_z_g_d

0x9214,	// (0x000275e1) aid_txt_z_prm

0x9222,	// (0x000275ef) aid_txt_z_prm_cp01

0x9230,	// (0x000275fd) aid_txt_z_sec

0x923e,	// (0x0002760b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x923e,	// (0x0002760b) main_cntbar_detail_cont_pane_g1

0x924b,	// (0x00027618) main_cntbar_detail_cont_pane_g2_ParamLimits

0x924b,	// (0x00027618) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdb3,	// (0x0002e180) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdb3,	// (0x0002e180) main_cntbar_detail_cont_pane_g

0xed39,	// (0x0002d106) main_cntbar_detail_cont_pane_t1

0xed47,	// (0x0002d114) main_cntbar_detail_cont_pane_t2

0xed55,	// (0x0002d122) main_cntbar_detail_cont_pane_t3

0x0002,

0x0be0,	// (0x0001efad) main_cntbar_detail_cont_pane_t

0x9257,	// (0x00027624) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9257,	// (0x00027624) cell_cntbar_detail_list_shct_pane

0xed63,	// (0x0002d130) cntbar_detail_list_shct_pane_g1

0xed6c,	// (0x0002d139) cntbar_detail_list_shct_pane_g2

0x0001,

0x0be7,	// (0x0001efb4) cntbar_detail_list_shct_pane_g

0x926b,	// (0x00027638) cntbar_detail_list_event_pane_g1_ParamLimits

0x926b,	// (0x00027638) cntbar_detail_list_event_pane_g1

0x9277,	// (0x00027644) cntbar_detail_list_event_pane_g2_ParamLimits

0x9277,	// (0x00027644) cntbar_detail_list_event_pane_g2

0x0005,

0xfdb8,	// (0x0002e185) cntbar_detail_list_event_pane_g_ParamLimits

0xfdb8,	// (0x0002e185) cntbar_detail_list_event_pane_g

0x92e3,	// (0x000276b0) cntbar_detail_list_event_pane_t1_ParamLimits

0x92e3,	// (0x000276b0) cntbar_detail_list_event_pane_t1

0x92f8,	// (0x000276c5) cntbar_detail_list_event_pane_t2_ParamLimits

0x92f8,	// (0x000276c5) cntbar_detail_list_event_pane_t2

0x0002,

0xfdc5,	// (0x0002e192) cntbar_detail_list_event_pane_t_ParamLimits

0xfdc5,	// (0x0002e192) cntbar_detail_list_event_pane_t

0xc739,	// (0x0002ab06) cell_cntbar_detail_list_shct_pane_g1

0xaea6,	// (0x00029273) navi_pane_mv_g3

0xa3a1,	// (0x0002876e) main_cntbar_detail_pane_ParamLimits

0x9b4b,	// (0x00027f18) main_notif_wgt_pane

0x195b,	// (0x0001fd28) aid_tch_main_mp4_pane_g4

0x1b90,	// (0x0001ff5d) popup_slider_window_cp02

0xea44,	// (0x0002ce11) list_recal_day_event_pane

0x9181,	// (0x0002754e) cntbar_detail_btn_pane_ParamLimits

0x9181,	// (0x0002754e) cntbar_detail_btn_pane

0x9191,	// (0x0002755e) cntbar_detail_btn_pane_cp01_ParamLimits

0x9191,	// (0x0002755e) cntbar_detail_btn_pane_cp01

0x91ad,	// (0x0002757a) cntbar_detail_list_shct_pane_ParamLimits

0x91b9,	// (0x00027586) cntbar_detail_pane_g1_ParamLimits

0x91b9,	// (0x00027586) cntbar_detail_pane_g1

0x91c5,	// (0x00027592) cntbar_detail_pane_t1_ParamLimits

0x91c5,	// (0x00027592) cntbar_detail_pane_t1

0x9283,	// (0x00027650) cntbar_detail_list_event_pane_g3_ParamLimits

0x9283,	// (0x00027650) cntbar_detail_list_event_pane_g3

0x929b,	// (0x00027668) cntbar_detail_list_event_pane_g4_ParamLimits

0x929b,	// (0x00027668) cntbar_detail_list_event_pane_g4

0x92b3,	// (0x00027680) cntbar_detail_list_event_pane_g5_ParamLimits

0x92b3,	// (0x00027680) cntbar_detail_list_event_pane_g5

0x92cb,	// (0x00027698) cntbar_detail_list_event_pane_g6_ParamLimits

0x92cb,	// (0x00027698) cntbar_detail_list_event_pane_g6

0x930d,	// (0x000276da) cntbar_detail_list_event_pane_t3_ParamLimits

0x930d,	// (0x000276da) cntbar_detail_list_event_pane_t3

0x931f,	// (0x000276ec) popup_notif_wgt_window_ParamLimits

0x931f,	// (0x000276ec) popup_notif_wgt_window

0x932f,	// (0x000276fc) popup_submenu_window_cp01_ParamLimits

0x932f,	// (0x000276fc) popup_submenu_window_cp01

0xa4a5,	// (0x00028872) bg_popup_window_pane_cp10

0xed75,	// (0x0002d142) listscroll_notif_wgt_pane

0xed87,	// (0x0002d154) list_notif_wgt_window

0xed90,	// (0x0002d15d) scroll_pane_cp033

0x933d,	// (0x0002770a) list_notif_wgt_row_pane_ParamLimits

0x933d,	// (0x0002770a) list_notif_wgt_row_pane

0xed99,	// (0x0002d166) aid_size_list_notif_wgt_del

0xeda6,	// (0x0002d173) list_notif_wgt_row_pane_g1

0xedb2,	// (0x0002d17f) list_notif_wgt_row_pane_g2

0xedc6,	// (0x0002d193) list_notif_wgt_row_pane_g3

0x0002,

0x0c00,	// (0x0001efcd) list_notif_wgt_row_pane_g

0xedd3,	// (0x0002d1a0) list_notif_wgt_row_pane_t1

0xede9,	// (0x0002d1b6) list_notif_wgt_row_pane_t2

0xedfb,	// (0x0002d1c8) list_notif_wgt_row_pane_t3

0x0002,

0x0c07,	// (0x0001efd4) list_notif_wgt_row_pane_t

0xd4a8,	// (0x0002b875) list_recal_day_event_pane_g1

0xee0d,	// (0x0002d1da) list_recal_day_event_pane_t1

0x9b4b,	// (0x00027f18) bg_button_pane_cp045

0x934f,	// (0x0002771c) cntbar_detail_btn_pane_t1

0xc331,	// (0x0002a6fe) main_callh_pane_ParamLimits

0xc331,	// (0x0002a6fe) main_callh_pane

0x9b4b,	// (0x00027f18) main_coverflow0_pane

0x9b4b,	// (0x00027f18) main_wgtman_pane

0x82cf,	// (0x0002669c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82cf,	// (0x0002669c) main_fs_bigclock_unlock_btn_pane

0x8b9f,	// (0x00026f6c) bg_button_pane_cp16

0x8baf,	// (0x00026f7c) cell_tport_appsw_pane_g3

0x935d,	// (0x0002772a) cf0_flow_pane_ParamLimits

0x935d,	// (0x0002772a) cf0_flow_pane

0xee1c,	// (0x0002d1e9) listscroll_cf0_pane

0xee27,	// (0x0002d1f4) main_cf0_pane_g1

0x936c,	// (0x00027739) main_cf0_pane_t1_ParamLimits

0x936c,	// (0x00027739) main_cf0_pane_t1

0x9380,	// (0x0002774d) main_cf0_pane_t2_ParamLimits

0x9380,	// (0x0002774d) main_cf0_pane_t2

0x0001,

0xfdcc,	// (0x0002e199) main_cf0_pane_t_ParamLimits

0xfdcc,	// (0x0002e199) main_cf0_pane_t

0xee39,	// (0x0002d206) scroll_pane_cp11

0x9394,	// (0x00027761) cf0_flow_pane_g1

0x939c,	// (0x00027769) cf0_flow_pane_g2

0x0001,

0xfdd1,	// (0x0002e19e) cf0_flow_pane_g

0x93a4,	// (0x00027771) cf0_flow_pane_t1

0x9b4b,	// (0x00027f18) main_call6_pane

0x9b4b,	// (0x00027f18) main_calllock_pane

0x93b2,	// (0x0002777f) call6_btn_grp_pane_ParamLimits

0x93b2,	// (0x0002777f) call6_btn_grp_pane

0x93c1,	// (0x0002778e) call6_pane_g1_ParamLimits

0x93c1,	// (0x0002778e) call6_pane_g1

0x93d0,	// (0x0002779d) popup_call6_1st_window_ParamLimits

0x93d0,	// (0x0002779d) popup_call6_1st_window

0x93de,	// (0x000277ab) popup_call6_2nd_window_ParamLimits

0x93de,	// (0x000277ab) popup_call6_2nd_window

0x93ec,	// (0x000277b9) cell_call6_btn_pane_ParamLimits

0x93ec,	// (0x000277b9) cell_call6_btn_pane

0xa4a5,	// (0x00028872) bg_popup_call2_in_pane_cp03

0xee44,	// (0x0002d211) popup_call6_1st_window_g1

0xee4c,	// (0x0002d219) popup_call6_1st_window_g2

0xee54,	// (0x0002d221) popup_call6_1st_window_g3

0x0002,

0x0c1d,	// (0x0001efea) popup_call6_1st_window_g

0xee5c,	// (0x0002d229) popup_call6_1st_window_t1

0xee6b,	// (0x0002d238) popup_call6_1st_window_t2

0xee7b,	// (0x0002d248) popup_call6_1st_window_t3

0x0002,

0x0c24,	// (0x0001eff1) popup_call6_1st_window_t

0xa4a5,	// (0x00028872) bg_popup_call2_in_pane_cp04

0xee44,	// (0x0002d211) popup_call6_2nd_window_g1

0xee4c,	// (0x0002d219) popup_call6_2nd_window_g2

0xee54,	// (0x0002d221) popup_call6_2nd_window_g3

0x0002,

0x0c1d,	// (0x0001efea) popup_call6_2nd_window_g

0xee5c,	// (0x0002d229) popup_call6_2nd_window_t1

0x9b4b,	// (0x00027f18) bg_button_pane_cp15

0xee8b,	// (0x0002d258) cell_call6_btn_pane_g1

0xee94,	// (0x0002d261) cell_call6_btn_pane_t1

0x93fb,	// (0x000277c8) listscroll_wgtman_pane_ParamLimits

0x93fb,	// (0x000277c8) listscroll_wgtman_pane

0x9417,	// (0x000277e4) wgtman_btn_pane_ParamLimits

0x9417,	// (0x000277e4) wgtman_btn_pane

0xacba,	// (0x00029087) aid_scroll_copy1

0xeea3,	// (0x0002d270) list_wgtman_pane

0x944c,	// (0x00027819) wgtman_btn_pane_g1_ParamLimits

0x944c,	// (0x00027819) wgtman_btn_pane_g1

0x9474,	// (0x00027841) wgtman_btn_pane_t1_ParamLimits

0x9474,	// (0x00027841) wgtman_btn_pane_t1

0xeead,	// (0x0002d27a) wgtman_btn_pane_t2_ParamLimits

0xeead,	// (0x0002d27a) wgtman_btn_pane_t2

0x0001,

0xfdd6,	// (0x0002e1a3) wgtman_btn_pane_t_ParamLimits

0xfdd6,	// (0x0002e1a3) wgtman_btn_pane_t

0x94ab,	// (0x00027878) listrow_wgtman_pane_ParamLimits

0x94ab,	// (0x00027878) listrow_wgtman_pane

0x94c7,	// (0x00027894) listrow_wgtman_pane_g1

0x94d4,	// (0x000278a1) listrow_wgtman_pane_g2

0x0001,

0xfddb,	// (0x0002e1a8) listrow_wgtman_pane_g

0x94f2,	// (0x000278bf) listrow_wgtman_pane_t1

0x950a,	// (0x000278d7) listrow_wgtman_pane_t2

0x0001,

0xfde0,	// (0x0002e1ad) listrow_wgtman_pane_t

0x9530,	// (0x000278fd) wait_bar_pane_cp09

0xeec4,	// (0x0002d291) main_calllock_btn_pane

0xeece,	// (0x0002d29b) main_calllock_pane_g1

0x9b4b,	// (0x00027f18) bg_button_pane_cp17

0xeed9,	// (0x0002d2a6) main_calllock_btn_pane_g1

0xeee2,	// (0x0002d2af) main_calllock_btn_pane_t1

0x9b4b,	// (0x00027f18) main_dialer3_pane

0x9b4b,	// (0x00027f18) main_fmrd2_pane

0xc739,	// (0x0002ab06) main_fs_bigclock_unlock_btn_pane_g1

0xeef9,	// (0x0002d2c6) main_fs_bigclock_unlock_btn_pane_t1

0x9542,	// (0x0002790f) area_fmrd2_info_pane_ParamLimits

0x9542,	// (0x0002790f) area_fmrd2_info_pane

0x9550,	// (0x0002791d) area_fmrd2_visual_pane_ParamLimits

0x9550,	// (0x0002791d) area_fmrd2_visual_pane

0x955e,	// (0x0002792b) fmrd2_indi_pane_ParamLimits

0x955e,	// (0x0002792b) fmrd2_indi_pane

0x956b,	// (0x00027938) area_fmrd2_visual_pane_g1

0x9573,	// (0x00027940) area_fmrd2_visual_pane_t1

0x9583,	// (0x00027950) area_fmrd2_visual_pane_t2

0x9593,	// (0x00027960) area_fmrd2_visual_pane_t3

0x0002,

0xfdea,	// (0x0002e1b7) area_fmrd2_visual_pane_t

0x95a3,	// (0x00027970) area_fmrd2_info_pane_g1

0x95ab,	// (0x00027978) area_fmrd2_info_pane_t1

0x95bb,	// (0x00027988) area_fmrd2_info_pane_t2

0x95cb,	// (0x00027998) area_fmrd2_info_pane_t3

0x95db,	// (0x000279a8) area_fmrd2_info_pane_t4

0x0003,

0xfdf1,	// (0x0002e1be) area_fmrd2_info_pane_t

0x95e9,	// (0x000279b6) fmrd2_indi_pane_t1

0x95f9,	// (0x000279c6) fmrd2_indi_pane_t2

0x9609,	// (0x000279d6) fmrd2_indi_pane_t3

0x0002,

0xfdfa,	// (0x0002e1c7) fmrd2_indi_pane_t

0xe0f4,	// (0x0002c4c1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0f4,	// (0x0002c4c1) list_single_fs_bigclock_indicator_pane_g5

0xe1a4,	// (0x0002c571) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1a4,	// (0x0002c571) list_single_fs_bigclock_indicator_pane_t5

0x8d52,	// (0x0002711f) aid_cell_bcale_month_pane_ParamLimits

0x8d52,	// (0x0002711f) aid_cell_bcale_month_pane

0x8d70,	// (0x0002713d) bcale_month_pane_ParamLimits

0x8d70,	// (0x0002713d) bcale_month_pane

0x8d8e,	// (0x0002715b) bcale_preview_pane_ParamLimits

0x8d8e,	// (0x0002715b) bcale_preview_pane

0xec9f,	// (0x0002d06c) list_single_fs_bigclock_pane_t1_ParamLimits

0xecbe,	// (0x0002d08b) list_single_fs_bigclock_pane_t2_ParamLimits

0xecbe,	// (0x0002d08b) list_single_fs_bigclock_pane_t2

0x0001,

0x0bd1,	// (0x0001ef9e) list_single_fs_bigclock_pane_t_ParamLimits

0x0bd1,	// (0x0001ef9e) list_single_fs_bigclock_pane_t

0xeef1,	// (0x0002d2be) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfde5,	// (0x0002e1b2) main_fs_bigclock_unlock_btn_pane_g

0x9617,	// (0x000279e4) aid_dia3_key_size_ParamLimits

0x9617,	// (0x000279e4) aid_dia3_key_size

0x9623,	// (0x000279f0) aid_dia3_listrow_size_ParamLimits

0x9623,	// (0x000279f0) aid_dia3_listrow_size

0x9633,	// (0x00027a00) dia3_keypad_fun_pane_ParamLimits

0x9633,	// (0x00027a00) dia3_keypad_fun_pane

0x9645,	// (0x00027a12) dia3_keypad_num_pane_ParamLimits

0x9645,	// (0x00027a12) dia3_keypad_num_pane

0x9657,	// (0x00027a24) dia3_listscroll_pane_ParamLimits

0x9657,	// (0x00027a24) dia3_listscroll_pane

0x9665,	// (0x00027a32) dia3_numentry_pane_ParamLimits

0x9665,	// (0x00027a32) dia3_numentry_pane

0xef07,	// (0x0002d2d4) dia3_list_pane

0xef12,	// (0x0002d2df) scroll_pane_cp12

0x9b4b,	// (0x00027f18) bg_dia3_numentry_pane

0x9673,	// (0x00027a40) dia3_numentry_pane_t1

0x9682,	// (0x00027a4f) cell_dia3_key_num_pane

0x968a,	// (0x00027a57) cell_dia3_key0_fun_pane_ParamLimits

0x968a,	// (0x00027a57) cell_dia3_key0_fun_pane

0x9697,	// (0x00027a64) cell_dia3_key1_fun_pane_ParamLimits

0x9697,	// (0x00027a64) cell_dia3_key1_fun_pane

0x96a4,	// (0x00027a71) dia3_listrow_pane

0xde03,	// (0x0002c1d0) bg_dia3_numentry_pane_g1

0x9b4b,	// (0x00027f18) bg_button_pane_cp21

0xef1d,	// (0x0002d2ea) cell_dia3_key_num_pane_t1

0xef2b,	// (0x0002d2f8) cell_dia3_key_num_pane_t2

0xef3a,	// (0x0002d307) cell_dia3_key_num_pane_t3

0xef49,	// (0x0002d316) cell_dia3_key_num_pane_t4

0x0003,

0x0c56,	// (0x0001f023) cell_dia3_key_num_pane_t

0x9b4b,	// (0x00027f18) bg_button_pane_cp19

0x96b1,	// (0x00027a7e) cell_dia3_key0_fun_pane_g1

0x9b4b,	// (0x00027f18) bg_button_pane_cp20

0x96b9,	// (0x00027a86) cell_dia3_key1_fun_pane_g1

0x96c1,	// (0x00027a8e) area_left_week_number_pane

0x96d4,	// (0x00027aa1) area_top_day_name_pane

0x96e2,	// (0x00027aaf) frame_month_view_pane

0xef58,	// (0x0002d325) grid_month_view_pane

0x96f7,	// (0x00027ac4) cell_top_day_name_pane_ParamLimits

0x96f7,	// (0x00027ac4) cell_top_day_name_pane

0x9711,	// (0x00027ade) cell_area_left_week_number_pane_ParamLimits

0x9711,	// (0x00027ade) cell_area_left_week_number_pane

0x9734,	// (0x00027b01) cell_month_view_pane_ParamLimits

0x9734,	// (0x00027b01) cell_month_view_pane

0xef66,	// (0x0002d333) frm_month_g1

0x9760,	// (0x00027b2d) frm_month_g2

0x9771,	// (0x00027b3e) frm_month_g3

0x9782,	// (0x00027b4f) frm_month_g4

0x9793,	// (0x00027b60) frm_month_g5

0x97a6,	// (0x00027b73) frm_month_g6

0x97b9,	// (0x00027b86) frm_month_g7

0xef73,	// (0x0002d340) frm_month_g8

0x97cc,	// (0x00027b99) frm_month_g9

0x97d9,	// (0x00027ba6) frm_month_g10

0x97e6,	// (0x00027bb3) frm_month_g11

0x97f3,	// (0x00027bc0) frm_month_g12

0x9800,	// (0x00027bcd) frm_month_g13

0x980d,	// (0x00027bda) frm_month_g14

0x981c,	// (0x00027be9) frm_month_g15

0x982b,	// (0x00027bf8) frm_month_g16

0x000f,

0xfe01,	// (0x0002e1ce) frm_month_g

0xef80,	// (0x0002d34d) cell_top_day_name_pane_t1

0x983a,	// (0x00027c07) cell_area_left_week_number_pane_g1

0x9849,	// (0x00027c16) cell_area_left_week_number_pane_t1

0xc987,	// (0x0002ad54) cell_month_view_pane_g1

0x985f,	// (0x00027c2c) cell_month_view_pane_t1

0x9b4b,	// (0x00027f18) main_fps_pane

0xe394,	// (0x0002c761) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe394,	// (0x0002c761) cmail_ddmenu_btn02_pane_cp1

0xe3b0,	// (0x0002c77d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3b0,	// (0x0002c77d) cmail_ddmenu_btn02_pane_cp2

0x904c,	// (0x00027419) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x904c,	// (0x00027419) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd61,	// (0x0002e12e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd61,	// (0x0002e12e) cmail_ddmenu_btn02_pane_g

0x906b,	// (0x00027438) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x906b,	// (0x00027438) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd66,	// (0x0002e133) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd66,	// (0x0002e133) cmail_ddmenu_btn02_pane_t

0x9875,	// (0x00027c42) fps_text_pane_ParamLimits

0x9875,	// (0x00027c42) fps_text_pane

0x9882,	// (0x00027c4f) main_fps_pane_g1_ParamLimits

0x9882,	// (0x00027c4f) main_fps_pane_g1

0x9890,	// (0x00027c5d) wait_bar_pane_cp010_ParamLimits

0x9890,	// (0x00027c5d) wait_bar_pane_cp010

0x989c,	// (0x00027c69) fps_text_pane_t1_ParamLimits

0x989c,	// (0x00027c69) fps_text_pane_t1

0x6a21,	// (0x00024dee) cam4_image_uncrop_pane_g1

0x6a2a,	// (0x00024df7) cam4_image_uncrop_pane_g2

0x6a33,	// (0x00024e00) cam4_image_uncrop_pane_g3

0x6a3c,	// (0x00024e09) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0002dcce) cam4_image_uncrop_pane_g

0x96a4,	// (0x00027a71) dia3_listrow_pane_ParamLimits

0x9b4b,	// (0x00027f18) main_phob2_pane

0x8b81,	// (0x00026f4e) cell_tport_appsw_pane_cp02_ParamLimits

0x8b81,	// (0x00026f4e) cell_tport_appsw_pane_cp02

0x8b90,	// (0x00026f5d) cell_tport_appsw_pane_cp03_ParamLimits

0x8b90,	// (0x00026f5d) cell_tport_appsw_pane_cp03

0x9b4b,	// (0x00027f18) phob2_contact_card_pane

0x9b4b,	// (0x00027f18) phob2_listscroll_pane

0xef93,	// (0x0002d360) phob2_list_pane

0xef9b,	// (0x0002d368) scroll_pane_cp034

0x98b5,	// (0x00027c82) phob2_cc_data_pane_ParamLimits

0x98b5,	// (0x00027c82) phob2_cc_data_pane

0x98cf,	// (0x00027c9c) phob2_cc_listscroll_pane_ParamLimits

0x98cf,	// (0x00027c9c) phob2_cc_listscroll_pane

0x98e9,	// (0x00027cb6) list_double_large_graphic_phob2_pane_ParamLimits

0x98e9,	// (0x00027cb6) list_double_large_graphic_phob2_pane

0x9908,	// (0x00027cd5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9908,	// (0x00027cd5) list_double_large_graphic_phob2_pane_g1

0x991e,	// (0x00027ceb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x991e,	// (0x00027ceb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe22,	// (0x0002e1ef) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe22,	// (0x0002e1ef) list_double_large_graphic_phob2_pane_g

0x992a,	// (0x00027cf7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x992a,	// (0x00027cf7) list_double_large_graphic_phob2_pane_t1

0x9940,	// (0x00027d0d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9940,	// (0x00027d0d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe27,	// (0x0002e1f4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe27,	// (0x0002e1f4) list_double_large_graphic_phob2_pane_t

0x9b4b,	// (0x00027f18) list_highlight_pane_cp024

0x9955,	// (0x00027d22) phob2_cc_button_pane

0x995d,	// (0x00027d2a) phob2_cc_data_pane_g1_ParamLimits

0x995d,	// (0x00027d2a) phob2_cc_data_pane_g1

0x9969,	// (0x00027d36) phob2_cc_data_pane_g2_ParamLimits

0x9969,	// (0x00027d36) phob2_cc_data_pane_g2

0x0001,

0xfe2c,	// (0x0002e1f9) phob2_cc_data_pane_g_ParamLimits

0xfe2c,	// (0x0002e1f9) phob2_cc_data_pane_g

0x9975,	// (0x00027d42) phob2_cc_data_pane_t1_ParamLimits

0x9975,	// (0x00027d42) phob2_cc_data_pane_t1

0x9987,	// (0x00027d54) phob2_cc_data_pane_t2_ParamLimits

0x9987,	// (0x00027d54) phob2_cc_data_pane_t2

0x9999,	// (0x00027d66) phob2_cc_data_pane_t3_ParamLimits

0x9999,	// (0x00027d66) phob2_cc_data_pane_t3

0x0002,

0xfe31,	// (0x0002e1fe) phob2_cc_data_pane_t_ParamLimits

0xfe31,	// (0x0002e1fe) phob2_cc_data_pane_t

0xefa3,	// (0x0002d370) phob2_cc_list_pane_ParamLimits

0xefa3,	// (0x0002d370) phob2_cc_list_pane

0xd6b2,	// (0x0002ba7f) scroll_pane_cp035_ParamLimits

0xd6b2,	// (0x0002ba7f) scroll_pane_cp035

0xa3a1,	// (0x0002876e) bg_button_pane_cp033

0xefaf,	// (0x0002d37c) phob2_cc_button_pane_g1

0xefbb,	// (0x0002d388) phob2_cc_button_pane_t1

0xefd0,	// (0x0002d39d) phob2_cc_button_pane_t2

0x0001,

0x0c96,	// (0x0001f063) phob2_cc_button_pane_t

0x99ab,	// (0x00027d78) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99ab,	// (0x00027d78) list_double_large_graphic_phob2_cc_pane

0x99d4,	// (0x00027da1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99d4,	// (0x00027da1) list_double_large_graphic_phob2_cc_pane_g1

0x99e5,	// (0x00027db2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99e5,	// (0x00027db2) list_double_large_graphic_phob2_cc_pane_g2

0x99f1,	// (0x00027dbe) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99f1,	// (0x00027dbe) list_double_large_graphic_phob2_cc_pane_g3

0x99fd,	// (0x00027dca) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99fd,	// (0x00027dca) list_double_large_graphic_phob2_cc_pane_g4

0xefe2,	// (0x0002d3af) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xefe2,	// (0x0002d3af) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe38,	// (0x0002e205) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe38,	// (0x0002e205) list_double_large_graphic_phob2_cc_pane_g

0x9a09,	// (0x00027dd6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a09,	// (0x00027dd6) list_double_large_graphic_phob2_cc_pane_t1

0x9a32,	// (0x00027dff) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a32,	// (0x00027dff) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe43,	// (0x0002e210) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe43,	// (0x0002e210) list_double_large_graphic_phob2_cc_pane_t

0xefee,	// (0x0002d3bb) list_highlight_pane_cp025_ParamLimits

0xefee,	// (0x0002d3bb) list_highlight_pane_cp025

0xa3a1,	// (0x0002876e) bg_button_pane_cp033_ParamLimits

0xefaf,	// (0x0002d37c) phob2_cc_button_pane_g1_ParamLimits

0xefbb,	// (0x0002d388) phob2_cc_button_pane_t1_ParamLimits

0xefd0,	// (0x0002d39d) phob2_cc_button_pane_t2_ParamLimits

0x0c96,	// (0x0001f063) phob2_cc_button_pane_t_ParamLimits

0x25ae,	// (0x0002097b) popup_wgtman_window

0xd349,	// (0x0002b716) scroll_pane_cp038

0x9434,	// (0x00027801) wgtman_btn_pane_cp_01_ParamLimits

0x9434,	// (0x00027801) wgtman_btn_pane_cp_01

0xeffc,	// (0x0002d3c9) wgtman_content_pane

0xf005,	// (0x0002d3d2) wgtman_heading_pane

0x9b4b,	// (0x00027f18) bg_heading_pane_cp02

0xf00e,	// (0x0002d3db) wgtman_heading_pane_g1

0xf016,	// (0x0002d3e3) wgtman_heading_pane_t1

0xf024,	// (0x0002d3f1) scroll_pane_cp036

0xf02c,	// (0x0002d3f9) wgtman_list_pane

0xec52,	// (0x0002d01f) wgtman_list_pane_t1_ParamLimits

0xec52,	// (0x0002d01f) wgtman_list_pane_t1

0x1d76,	// (0x00020143) cam4_grid_pane

0x7222,	// (0x000255ef) bg_button_pane_cp015_ParamLimits

0x7234,	// (0x00025601) bg_button_pane_cp016_ParamLimits

0x7247,	// (0x00025614) bg_button_pane_cp017_ParamLimits

0x729d,	// (0x0002566a) popup_vitu2_query_window_g3_ParamLimits

0x729d,	// (0x0002566a) popup_vitu2_query_window_g3

0x7358,	// (0x00025725) popup_vitu2_query_window_t6_ParamLimits

0x7358,	// (0x00025725) popup_vitu2_query_window_t6

0x7383,	// (0x00025750) popup_vitu2_query_window_t7_ParamLimits

0x7383,	// (0x00025750) popup_vitu2_query_window_t7

0xec6d,	// (0x0002d03a) cam4_grid_pane_g1

0xec76,	// (0x0002d043) cam4_grid_pane_g2

0xf034,	// (0x0002d401) cam4_grid_pane_g3

0xf03d,	// (0x0002d40a) cam4_grid_pane_g4

0x0003,

0xfe48,	// (0x0002e215) cam4_grid_pane_g

0x3224,	// (0x000215f1) aid_placing_vt_slider_lsc_ParamLimits

0x3564,	// (0x00021931) vidtel_button_pane_ParamLimits

0x3564,	// (0x00021931) vidtel_button_pane

0x9b4b,	// (0x00027f18) bg_button_pane_cp034

0x9a5b,	// (0x00027e28) vidtel_button_pane_g1

0xf048,	// (0x0002d415) vidtel_button_pane_t1

0xd478,	// (0x0002b845) aid_size_vtel_slider_touch

0xd6b2,	// (0x0002ba7f) scroll_pane_cp039

0xde49,	// (0x0002c216) ncim_query_button_pane_cp01_ParamLimits

0xde68,	// (0x0002c235) ncimui_query_pane_g1_ParamLimits

0xa3a1,	// (0x0002876e) input_focus_pane_cp012_ParamLimits

0xde8d,	// (0x0002c25a) ncim_query_entry_pane_t1_ParamLimits

0xd6b2,	// (0x0002ba7f) scroll_pane_cp039_ParamLimits

0xad91,	// (0x0002915e) navi_pane_bcale_mc_g1

0xad99,	// (0x00029166) navi_pane_bcale_mc_t1

0xe3f9,	// (0x0002c7c6) main_sp_fs_email_pane_g1

0xe405,	// (0x0002c7d2) main_sp_fs_email_pane_g2

0x0001,

0x0a41,	// (0x0001ee0e) main_sp_fs_email_pane_g

0xe8d6,	// (0x0002cca3) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8d6,	// (0x0002cca3) list_single_cale_mrui_row_pane_g3

0x9093,	// (0x00027460) list_single_recal_day_pane_g5_event_pane

0xeabd,	// (0x0002ce8a) list_single_recal_day_pane_g7

0xf05e,	// (0x0002d42b) list_recal_day_event_pane_cp01

0xf067,	// (0x0002d434) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0002d43c) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0002d444) list_recal_vselct_pane_cp01

0xd4a8,	// (0x0002b875) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0002d44e) list_recal_day_event_pane_cp01_t1

0xeac5,	// (0x0002ce92) list_single_recal_day_pane_t1_ParamLimits

0xead7,	// (0x0002cea4) list_single_recal_day_pane_t2_ParamLimits

0xfd76,	// (0x0002e143) list_single_recal_day_pane_t_ParamLimits

0xa1c3,	// (0x00028590) bg_notes_pane_ParamLimits

0xa272,	// (0x0002863f) list_notes_pane_ParamLimits

0x2832,	// (0x00020bff) scroll_pane_cp06_ParamLimits

0xa294,	// (0x00028661) main_notes_pane_ParamLimits

0x9b4b,	// (0x00027f18) main_welc_pane

0x9a63,	// (0x00027e30) main_welc_body_pane_ParamLimits

0x9a63,	// (0x00027e30) main_welc_body_pane

0x9a7c,	// (0x00027e49) main_welc_opti_pane_ParamLimits

0x9a7c,	// (0x00027e49) main_welc_opti_pane

0x9aaf,	// (0x00027e7c) main_welc_pane_t1_ParamLimits

0x9aaf,	// (0x00027e7c) main_welc_pane_t1

0x9ac9,	// (0x00027e96) main_welc_body_row_pane_ParamLimits

0x9ac9,	// (0x00027e96) main_welc_body_row_pane

0xd1a7,	// (0x0002b574) main_welc_opti_row_pane_ParamLimits

0xd1a7,	// (0x0002b574) main_welc_opti_row_pane

0xf08f,	// (0x0002d45c) main_welc_opti_row_pane_g1

0x9af2,	// (0x00027ebf) main_welc_opti_row_pane_t1

0xf097,	// (0x0002d464) main_welc_body_row_pane_t1

0xed7f,	// (0x0002d14c) popup_notif_wgt_heading_pane

0xed99,	// (0x0002d166) aid_size_list_notif_wgt_del_ParamLimits

0xeda6,	// (0x0002d173) list_notif_wgt_row_pane_g1_ParamLimits

0xedb2,	// (0x0002d17f) list_notif_wgt_row_pane_g2_ParamLimits

0xedc6,	// (0x0002d193) list_notif_wgt_row_pane_g3_ParamLimits

0x0c00,	// (0x0001efcd) list_notif_wgt_row_pane_g_ParamLimits

0xedd3,	// (0x0002d1a0) list_notif_wgt_row_pane_t1_ParamLimits

0xede9,	// (0x0002d1b6) list_notif_wgt_row_pane_t2_ParamLimits

0xedfb,	// (0x0002d1c8) list_notif_wgt_row_pane_t3_ParamLimits

0x0c07,	// (0x0001efd4) list_notif_wgt_row_pane_t_ParamLimits

0x94c7,	// (0x00027894) listrow_wgtman_pane_g1_ParamLimits

0x94d4,	// (0x000278a1) listrow_wgtman_pane_g2_ParamLimits

0xfddb,	// (0x0002e1a8) listrow_wgtman_pane_g_ParamLimits

0x94f2,	// (0x000278bf) listrow_wgtman_pane_t1_ParamLimits

0x950a,	// (0x000278d7) listrow_wgtman_pane_t2_ParamLimits

0xfde0,	// (0x0002e1ad) listrow_wgtman_pane_t_ParamLimits

0x9530,	// (0x000278fd) wait_bar_pane_cp09_ParamLimits

0x9b4b,	// (0x00027f18) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0002d473) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0002d47b) popup_notif_wgt_heading_pane_t1

0x9b4b,	// (0x00027f18) main_vids_pane

0x9b4b,	// (0x00027f18) vids_listscroll_pane

0x9b01,	// (0x00027ece) scroll_pane_cp040

0x9b4b,	// (0x00027f18) vids_list_pane

0x9b0c,	// (0x00027ed9) vids_list_double_pane_ParamLimits

0x9b0c,	// (0x00027ed9) vids_list_double_pane

0x9b24,	// (0x00027ef1) vids_list_double_pane_g1

0x9b2d,	// (0x00027efa) vids_list_double_pane_t1

0x9b3d,	// (0x00027f0a) vids_list_double_pane_t2

0x0001,

0xfe56,	// (0x0002e223) vids_list_double_pane_t

0x13c2,	// (0x0001f78f) main_ncimui_pane_ParamLimits

0x7ea1,	// (0x0002626e) main_ncimui_pane_g1_ParamLimits

0x7ead,	// (0x0002627a) main_ncimui_pane_g2_ParamLimits

0x7ead,	// (0x0002627a) main_ncimui_pane_g2

0x0001,

0xfbdb,	// (0x0002dfa8) main_ncimui_pane_g_ParamLimits

0xfbdb,	// (0x0002dfa8) main_ncimui_pane_g

0x9a95,	// (0x00027e62) main_welc_pane_g1_ParamLimits

0x9a95,	// (0x00027e62) main_welc_pane_g1

0x9aa1,	// (0x00027e6e) main_welc_pane_g2_ParamLimits

0x9aa1,	// (0x00027e6e) main_welc_pane_g2

0x0001,

0xfe51,	// (0x0002e21e) main_welc_pane_g_ParamLimits

0xfe51,	// (0x0002e21e) main_welc_pane_g

0xa1c3,	// (0x00028590) listscroll_mce_pane_ParamLimits

0xaee6,	// (0x000292b3) wait_bar_pane_cp10

0xc325,	// (0x0002a6f2) main_cale_day_pane_ParamLimits

0xc325,	// (0x0002a6f2) main_cale_week_pane_ParamLimits

0xa1c3,	// (0x00028590) main_messa_pane_ParamLimits

0x63bc,	// (0x00024789) main_clock2_btn_pane_ParamLimits

0x63bc,	// (0x00024789) main_clock2_btn_pane

0xcb83,	// (0x0002af50) main_clock2_btn_pane_cp01_ParamLimits

0xcb83,	// (0x0002af50) main_clock2_btn_pane_cp01

0xe86e,	// (0x0002cc3b) list_cale_mrui_pane_ParamLimits

0xee31,	// (0x0002d1fe) main_cf0_pane_g2

0x0001,

0x0c0e,	// (0x0001efdb) main_cf0_pane_g

0x96c1,	// (0x00027a8e) area_left_week_number_pane_ParamLimits

0x96d4,	// (0x00027aa1) area_top_day_name_pane_ParamLimits

0x96e2,	// (0x00027aaf) frame_month_view_pane_ParamLimits

0xef58,	// (0x0002d325) grid_month_view_pane_ParamLimits

0xef66,	// (0x0002d333) frm_month_g1_ParamLimits

0x9760,	// (0x00027b2d) frm_month_g2_ParamLimits

0x9771,	// (0x00027b3e) frm_month_g3_ParamLimits

0x9782,	// (0x00027b4f) frm_month_g4_ParamLimits

0x9793,	// (0x00027b60) frm_month_g5_ParamLimits

0x97a6,	// (0x00027b73) frm_month_g6_ParamLimits

0x97b9,	// (0x00027b86) frm_month_g7_ParamLimits

0xef73,	// (0x0002d340) frm_month_g8_ParamLimits

0x97cc,	// (0x00027b99) frm_month_g9_ParamLimits

0x97d9,	// (0x00027ba6) frm_month_g10_ParamLimits

0x97e6,	// (0x00027bb3) frm_month_g11_ParamLimits

0x97f3,	// (0x00027bc0) frm_month_g12_ParamLimits

0x9800,	// (0x00027bcd) frm_month_g13_ParamLimits

0x980d,	// (0x00027bda) frm_month_g14_ParamLimits

0x981c,	// (0x00027be9) frm_month_g15_ParamLimits

0x982b,	// (0x00027bf8) frm_month_g16_ParamLimits

0xfe01,	// (0x0002e1ce) frm_month_g_ParamLimits

0xef80,	// (0x0002d34d) cell_top_day_name_pane_t1_ParamLimits

0x983a,	// (0x00027c07) cell_area_left_week_number_pane_g1_ParamLimits

0x9849,	// (0x00027c16) cell_area_left_week_number_pane_t1_ParamLimits

0xc987,	// (0x0002ad54) cell_month_view_pane_g1_ParamLimits

0x985f,	// (0x00027c2c) cell_month_view_pane_t1_ParamLimits

0xa1bb,	// (0x00028588) main_clock2_btn_pane_g1

0xf0bc,	// (0x0002d489) main_clock2_btn_pane_t1

0xa3a1,	// (0x0002876e) listscroll_cmail_pane_ParamLimits

0xe3f9,	// (0x0002c7c6) main_sp_fs_email_pane_g1_ParamLimits

0xe405,	// (0x0002c7d2) main_sp_fs_email_pane_g2_ParamLimits

0x0a41,	// (0x0001ee0e) main_sp_fs_email_pane_g_ParamLimits

0xea25,	// (0x0002cdf2) list_recal_day_pane_ParamLimits

0xea36,	// (0x0002ce03) mian_recal_day_pane_t1

0x88aa,	// (0x00026c77) list_single_dyc_row_text_pane_t4_ParamLimits

0x88aa,	// (0x00026c77) list_single_dyc_row_text_pane_t4

0x88e1,	// (0x00026cae) list_single_dyc_row_text_pane_t5_ParamLimits

0x88e1,	// (0x00026cae) list_single_dyc_row_text_pane_t5

0xe4a7,	// (0x0002c874) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4a7,	// (0x0002c874) list_single_dyc_row_text_pane_t6

0x43fa,	// (0x000227c7) aid_mgn_list_cale_time_pane

0x13c2,	// (0x0001f78f) main_gallery2_pane_ParamLimits

0xcb99,	// (0x0002af66) main_clock2_pane_cp01_t1

0xcba7,	// (0x0002af74) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0002dba4) main_clock2_pane_cp01_t

0x2b48,	// (0x00020f15) cale_week_scroll_pane_g16_ParamLimits

0x2b48,	// (0x00020f15) cale_week_scroll_pane_g16

0xa4a5,	// (0x00028872) vorec_slider_pane

0xf048,	// (0x0002d415) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal

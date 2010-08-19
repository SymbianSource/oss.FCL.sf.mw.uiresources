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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00024142 };

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
0x2bc4,	// (0x00026d06) Screen

0x2bd0,	// (0x00026d12) application_window

0x2be6,	// (0x00026d28) area_bottom_pane_ParamLimits

0x2be6,	// (0x00026d28) area_bottom_pane

0x17b0,	// (0x000258f2) area_top_pane_ParamLimits

0x17b0,	// (0x000258f2) area_top_pane

0xb18b,	// (0x0002f2cd) call_video_uplink_pane_ParamLimits

0xb18b,	// (0x0002f2cd) call_video_uplink_pane

0x183e,	// (0x00025980) main_pane_ParamLimits

0x183e,	// (0x00025980) main_pane

0xc102,	// (0x00030244) context_pane

0x6c31,	// (0x0002ad73) navi_pane

0x6c63,	// (0x0002ada5) popup_cale_events_window_ParamLimits

0x6c63,	// (0x0002ada5) popup_cale_events_window

0xc115,	// (0x00030257) popup_mup_playback_window

0x6c7b,	// (0x0002adbd) signal_pane

0x34bd,	// (0x000275ff) main_browser_pane

0x3c19,	// (0x00027d5b) main_burst_pane

0x1c3b,	// (0x00025d7d) main_calc_pane

0xc0a2,	// (0x000301e4) main_cale_day_pane

0x1c4f,	// (0x00025d91) main_cale_month_pane

0xc0a2,	// (0x000301e4) main_cale_week_pane

0x3c19,	// (0x00027d5b) main_call_pane

0x3097,	// (0x000271d9) main_call_poc_pane

0x3c19,	// (0x00027d5b) main_camera_pane

0x3c19,	// (0x00027d5b) main_chi_dic_pane

0x550d,	// (0x0002964f) main_clock_pane

0x3097,	// (0x000271d9) main_fmradio_pane

0x3c19,	// (0x00027d5b) main_graph_messa_pane

0x3097,	// (0x000271d9) main_help_pane

0x34bd,	// (0x000275ff) main_im_pane

0x32f2,	// (0x00027434) main_image_pane_ParamLimits

0x32f2,	// (0x00027434) main_image_pane

0x3097,	// (0x000271d9) main_location2_pane

0x3c19,	// (0x00027d5b) main_location_pane

0x32f2,	// (0x00027434) main_messa_pane

0x3097,	// (0x000271d9) main_mp2_pane

0x3c19,	// (0x00027d5b) main_mp_pane

0x3097,	// (0x000271d9) main_msg_pane

0x3097,	// (0x000271d9) main_mup_eq_pane

0x3097,	// (0x000271d9) main_mup_pane

0x34bd,	// (0x000275ff) main_notes_pane

0x3097,	// (0x000271d9) main_pec_pane

0x3097,	// (0x000271d9) main_phob_pane

0x3097,	// (0x000271d9) main_pinb_pane

0x3097,	// (0x000271d9) main_postcard_pane

0x3097,	// (0x000271d9) main_qdial_pane

0x3c19,	// (0x00027d5b) main_skin_pane

0x3097,	// (0x000271d9) main_smil2_pane

0x3c19,	// (0x00027d5b) main_smil_pane

0x3c19,	// (0x00027d5b) main_video_pane

0x3c19,	// (0x00027d5b) main_video_tele_pane

0x32f2,	// (0x00027434) main_viewer_pane_ParamLimits

0x32f2,	// (0x00027434) main_viewer_pane

0x3c19,	// (0x00027d5b) main_vorec_pane

0x1cad,	// (0x00025def) popup_blid_sat_info_window_ParamLimits

0x1cad,	// (0x00025def) popup_blid_sat_info_window

0x1d05,	// (0x00025e47) popup_dyc_status_message_window_ParamLimits

0x1d05,	// (0x00025e47) popup_dyc_status_message_window

0x1d1d,	// (0x00025e5f) popup_grid_large_graphic_window_ParamLimits

0x1d1d,	// (0x00025e5f) popup_grid_large_graphic_window

0x1dcd,	// (0x00025f0f) popup_loc_request_window_ParamLimits

0x1dcd,	// (0x00025f0f) popup_loc_request_window

0x1ec9,	// (0x0002600b) popup_wml_address_window_ParamLimits

0x1ec9,	// (0x0002600b) popup_wml_address_window

0x6a75,	// (0x0002abb7) call_muted_g1

0x6529,	// (0x0002a66b) popup_call_audio_conf_window_ParamLimits

0x6529,	// (0x0002a66b) popup_call_audio_conf_window

0x6a89,	// (0x0002abcb) popup_call_audio_first_window_ParamLimits

0x6a89,	// (0x0002abcb) popup_call_audio_first_window

0x6aff,	// (0x0002ac41) popup_call_audio_in_window_ParamLimits

0x6aff,	// (0x0002ac41) popup_call_audio_in_window

0x6b3b,	// (0x0002ac7d) popup_call_audio_out_window_ParamLimits

0x6b3b,	// (0x0002ac7d) popup_call_audio_out_window

0x6b75,	// (0x0002acb7) popup_call_audio_second_window_ParamLimits

0x6b75,	// (0x0002acb7) popup_call_audio_second_window

0x6bcb,	// (0x0002ad0d) popup_call_audio_wait_window_ParamLimits

0x6bcb,	// (0x0002ad0d) popup_call_audio_wait_window

0x6c00,	// (0x0002ad42) popup_number_entry_window_ParamLimits

0x6c00,	// (0x0002ad42) popup_number_entry_window

0x2c2b,	// (0x00026d6d) bg_popup_call_pane_cp05_ParamLimits

0x2c2b,	// (0x00026d6d) bg_popup_call_pane_cp05

0x2c4b,	// (0x00026d8d) popup_number_entry_window_t1

0x2c5e,	// (0x00026da0) popup_number_entry_window_t2

0x2c70,	// (0x00026db2) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x000331c7) popup_number_entry_window_t

0x2cb7,	// (0x00026df9) text_title_cp2

0x2cca,	// (0x00026e0c) bg_popup_call_pane_cp_ParamLimits

0x2cca,	// (0x00026e0c) bg_popup_call_pane_cp

0x2cd8,	// (0x00026e1a) call_thumbnail_pane

0x2ce0,	// (0x00026e22) popup_call_audio_in_window_g1_ParamLimits

0x2ce0,	// (0x00026e22) popup_call_audio_in_window_g1

0x2cec,	// (0x00026e2e) popup_call_audio_in_window_g2_ParamLimits

0x2cec,	// (0x00026e2e) popup_call_audio_in_window_g2

0x2cf8,	// (0x00026e3a) popup_call_audio_in_window_g3_ParamLimits

0x2cf8,	// (0x00026e3a) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x000331d0) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x000331d0) popup_call_audio_in_window_g

0x2d04,	// (0x00026e46) popup_call_audio_in_window_t1_ParamLimits

0x2d04,	// (0x00026e46) popup_call_audio_in_window_t1

0x2d20,	// (0x00026e62) popup_call_audio_in_window_t2_ParamLimits

0x2d20,	// (0x00026e62) popup_call_audio_in_window_t2

0x2d3c,	// (0x00026e7e) popup_call_audio_in_window_t3_ParamLimits

0x2d3c,	// (0x00026e7e) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x000331d7) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x000331d7) popup_call_audio_in_window_t

0x2cca,	// (0x00026e0c) bg_popup_call_pane_cp01_ParamLimits

0x2cca,	// (0x00026e0c) bg_popup_call_pane_cp01

0x2cd8,	// (0x00026e1a) call_thumbnail_pane_cp02

0x2d4f,	// (0x00026e91) call_type_pane_cp022

0x2d57,	// (0x00026e99) popup_call_audio_out_window_g1_ParamLimits

0x2d57,	// (0x00026e99) popup_call_audio_out_window_g1

0x2d69,	// (0x00026eab) popup_call_audio_out_window_g2_ParamLimits

0x2d69,	// (0x00026eab) popup_call_audio_out_window_g2

0x2d75,	// (0x00026eb7) popup_call_audio_out_window_g3_ParamLimits

0x2d75,	// (0x00026eb7) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x000331de) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x000331de) popup_call_audio_out_window_g

0x2d87,	// (0x00026ec9) popup_call_audio_out_window_t1_ParamLimits

0x2d87,	// (0x00026ec9) popup_call_audio_out_window_t1

0x2d9f,	// (0x00026ee1) popup_call_audio_out_window_t2_ParamLimits

0x2d9f,	// (0x00026ee1) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x000331e5) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x000331e5) popup_call_audio_out_window_t

0x2db4,	// (0x00026ef6) bg_popup_call_pane_ParamLimits

0x2db4,	// (0x00026ef6) bg_popup_call_pane

0x2e38,	// (0x00026f7a) call_thumbnail_pane_cp_ParamLimits

0x2e38,	// (0x00026f7a) call_thumbnail_pane_cp

0x2e5c,	// (0x00026f9e) call_type_pane_cp01_ParamLimits

0x2e5c,	// (0x00026f9e) call_type_pane_cp01

0x2ea0,	// (0x00026fe2) popup_call_audio_first_window_g1_ParamLimits

0x2ea0,	// (0x00026fe2) popup_call_audio_first_window_g1

0x2eec,	// (0x0002702e) popup_call_audio_first_window_g2_ParamLimits

0x2eec,	// (0x0002702e) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x000331ea) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x000331ea) popup_call_audio_first_window_g

0x2f30,	// (0x00027072) popup_call_audio_first_window_t1_ParamLimits

0x2f30,	// (0x00027072) popup_call_audio_first_window_t1

0x2fdc,	// (0x0002711e) popup_call_audio_first_window_t4_ParamLimits

0x2fdc,	// (0x0002711e) popup_call_audio_first_window_t4

0x3068,	// (0x000271aa) popup_call_audio_first_window_t5_ParamLimits

0x3068,	// (0x000271aa) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x000331ef) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x000331ef) popup_call_audio_first_window_t

0x3097,	// (0x000271d9) bg_popup_call_pane_cp02

0x30a1,	// (0x000271e3) call_type_pane_cp023

0x30a9,	// (0x000271eb) popup_call_audio_wait_window_g1

0x30b1,	// (0x000271f3) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x000331f6) popup_call_audio_wait_window_g

0x30b9,	// (0x000271fb) popup_call_audio_wait_window_t3

0x30c7,	// (0x00027209) bg_popup_call_pane_cp03_ParamLimits

0x30c7,	// (0x00027209) bg_popup_call_pane_cp03

0x3127,	// (0x00027269) call_thumbnail_pane_cp011_ParamLimits

0x3127,	// (0x00027269) call_thumbnail_pane_cp011

0x3133,	// (0x00027275) call_type_pane_cp034_ParamLimits

0x3133,	// (0x00027275) call_type_pane_cp034

0x316f,	// (0x000272b1) popup_call_audio_second_window_g1_ParamLimits

0x316f,	// (0x000272b1) popup_call_audio_second_window_g1

0x31ab,	// (0x000272ed) popup_call_audio_second_window_g2_ParamLimits

0x31ab,	// (0x000272ed) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x000331fb) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x000331fb) popup_call_audio_second_window_g

0x31e7,	// (0x00027329) popup_call_audio_second_window_t1_ParamLimits

0x31e7,	// (0x00027329) popup_call_audio_second_window_t1

0x3268,	// (0x000273aa) popup_call_audio_second_window_t2_ParamLimits

0x3268,	// (0x000273aa) popup_call_audio_second_window_t2

0x329e,	// (0x000273e0) popup_call_audio_second_window_t3_ParamLimits

0x329e,	// (0x000273e0) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00033200) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00033200) popup_call_audio_second_window_t

0x3097,	// (0x000271d9) bg_popup_call_pane_cp04

0x32d4,	// (0x00027416) list_conf_pane

0x32dc,	// (0x0002741e) popup_call_audio_conf_window_t1

0x32ea,	// (0x0002742c) call_thumbnail_pane_g1

0x32f2,	// (0x00027434) bg_pinb_pane_ParamLimits

0x32f2,	// (0x00027434) bg_pinb_pane

0x3300,	// (0x00027442) find_pinb_pane

0x32f2,	// (0x00027434) listscroll_pinb_pane_ParamLimits

0x32f2,	// (0x00027434) listscroll_pinb_pane

0x330a,	// (0x0002744c) pinb_bg_pane_g1

0x330a,	// (0x0002744c) pinb_bg_pane_g2

0x330a,	// (0x0002744c) pinb_bg_pane_g3

0x330a,	// (0x0002744c) pinb_bg_pane_g4

0x330a,	// (0x0002744c) pinb_bg_pane_g5

0x330a,	// (0x0002744c) pinb_bg_pane_g6

0x330a,	// (0x0002744c) pinb_bg_pane_g7

0x330a,	// (0x0002744c) pinb_bg_pane_g8

0x330a,	// (0x0002744c) pinb_bg_pane_g9

0x330a,	// (0x0002744c) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00033207) pinb_bg_pane_g

0x2bdc,	// (0x00026d1e) grid_pinb_pane

0x2bdc,	// (0x00026d1e) list_pinb_pane

0x3314,	// (0x00027456) scroll_pane_cp01_ParamLimits

0x3314,	// (0x00027456) scroll_pane_cp01

0x3322,	// (0x00027464) find_pinb_pane_g1_ParamLimits

0x3322,	// (0x00027464) find_pinb_pane_g1

0x333a,	// (0x0002747c) find_pinb_pane_t1

0x334c,	// (0x0002748e) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00033221) find_pinb_pane_t

0x3361,	// (0x000274a3) input_focus_pane_cp01_ParamLimits

0x3361,	// (0x000274a3) input_focus_pane_cp01

0x336d,	// (0x000274af) cell_pinb_pane_ParamLimits

0x336d,	// (0x000274af) cell_pinb_pane

0x337b,	// (0x000274bd) cell_pinb_pane_g1_ParamLimits

0x337b,	// (0x000274bd) cell_pinb_pane_g1

0x3389,	// (0x000274cb) cell_pinb_pane_g2_ParamLimits

0x3389,	// (0x000274cb) cell_pinb_pane_g2

0x3389,	// (0x000274cb) cell_pinb_pane_g3_ParamLimits

0x3389,	// (0x000274cb) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00033226) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00033226) cell_pinb_pane_g

0x3097,	// (0x000271d9) grid_highlight_pane_cp01

0x336d,	// (0x000274af) list_pinb_item_pane_ParamLimits

0x336d,	// (0x000274af) list_pinb_item_pane

0x2bdc,	// (0x00026d1e) list_highlight_pane_cp02

0x3397,	// (0x000274d9) list_pinb_item_pane_g1_ParamLimits

0x3397,	// (0x000274d9) list_pinb_item_pane_g1

0x3389,	// (0x000274cb) list_pinb_item_pane_g2_ParamLimits

0x3389,	// (0x000274cb) list_pinb_item_pane_g2

0x337b,	// (0x000274bd) list_pinb_item_pane_g3_ParamLimits

0x337b,	// (0x000274bd) list_pinb_item_pane_g3

0x3389,	// (0x000274cb) list_pinb_item_pane_g4_ParamLimits

0x3389,	// (0x000274cb) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0003322d) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0003322d) list_pinb_item_pane_g

0x33a5,	// (0x000274e7) list_pinb_item_pane_t1_ParamLimits

0x33a5,	// (0x000274e7) list_pinb_item_pane_t1

0x19d8,	// (0x00025b1a) calc_display_pane

0x19fd,	// (0x00025b3f) calc_paper_pane

0x1a20,	// (0x00025b62) grid_calc_pane

0x3097,	// (0x000271d9) bg_list_pane_cp01

0x33b9,	// (0x000274fb) clock_g1

0x33c1,	// (0x00027503) clock_g2

0x0001,

0xf0f4,	// (0x00033236) clock_g

0x33c9,	// (0x0002750b) clock_t1_ParamLimits

0x33c9,	// (0x0002750b) clock_t1

0x33de,	// (0x00027520) clock_t2_ParamLimits

0x33de,	// (0x00027520) clock_t2

0x33f0,	// (0x00027532) clock_t3_ParamLimits

0x33f0,	// (0x00027532) clock_t3

0x3402,	// (0x00027544) clock_t4_ParamLimits

0x3402,	// (0x00027544) clock_t4

0x3414,	// (0x00027556) clock_t5_ParamLimits

0x3414,	// (0x00027556) clock_t5

0x3429,	// (0x0002756b) clock_t6_ParamLimits

0x3429,	// (0x0002756b) clock_t6

0x343b,	// (0x0002757d) clock_t7_ParamLimits

0x343b,	// (0x0002757d) clock_t7

0x344d,	// (0x0002758f) clock_t8_ParamLimits

0x344d,	// (0x0002758f) clock_t8

0x3461,	// (0x000275a3) clock_t9_ParamLimits

0x3461,	// (0x000275a3) clock_t9

0x0008,

0xf0f9,	// (0x0003323b) clock_t_ParamLimits

0xf0f9,	// (0x0003323b) clock_t

0x3475,	// (0x000275b7) popup_clock_analogue_window_cp02

0x3475,	// (0x000275b7) popup_clock_digital_window_cp01

0x3097,	// (0x000271d9) listscroll_help_pane

0x3097,	// (0x000271d9) phob_pre_status_pane

0x347d,	// (0x000275bf) grid_qdial_pane

0x32f2,	// (0x00027434) listscroll_mce_pane

0x32f2,	// (0x00027434) bg_notes_pane

0x3487,	// (0x000275c9) list_notes_pane

0x3495,	// (0x000275d7) scroll_pane_cp06

0x34a9,	// (0x000275eb) bg_calc_paper_pane

0xb1c9,	// (0x0002f30b) list_calc_pane

0x34bd,	// (0x000275ff) bg_calc_display_pane

0x1a4e,	// (0x00025b90) calc_display_pane_t1

0x1a60,	// (0x00025ba2) calc_display_pane_t2

0xb1e3,	// (0x0002f325) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0003324e) calc_display_pane_t

0x1a72,	// (0x00025bb4) cell_calc_pane_ParamLimits

0x1a72,	// (0x00025bb4) cell_calc_pane

0x34c9,	// (0x0002760b) bg_calc_paper_pane_g1

0x34d5,	// (0x00027617) bg_calc_paper_pane_g2

0x34e1,	// (0x00027623) bg_calc_paper_pane_g3

0x34ed,	// (0x0002762f) bg_calc_paper_pane_g4

0x34f9,	// (0x0002763b) bg_calc_paper_pane_g5

0x3505,	// (0x00027647) bg_calc_paper_pane_g6

0x3514,	// (0x00027656) bg_calc_paper_pane_g7

0x3523,	// (0x00027665) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00033255) bg_calc_paper_pane_g

0x3536,	// (0x00027678) calc_bg_paper_pane_g9

0x3549,	// (0x0002768b) list_calc_item_pane_ParamLimits

0x3549,	// (0x0002768b) list_calc_item_pane

0x355e,	// (0x000276a0) list_calc_item_pane_g1

0xb1f5,	// (0x0002f337) list_calc_item_pane_t1_ParamLimits

0xb1f5,	// (0x0002f337) list_calc_item_pane_t1

0x1aa7,	// (0x00025be9) list_calc_item_pane_t2_ParamLimits

0x1aa7,	// (0x00025be9) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00033266) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00033266) list_calc_item_pane_t

0x330a,	// (0x0002744c) cell_calc_pane_g1

0x356b,	// (0x000276ad) grid_highlight_pane_cp02

0xb207,	// (0x0002f349) bg_calc_display_pane_g1

0x1ad9,	// (0x00025c1b) bg_calc_display_pane_g2

0x358d,	// (0x000276cf) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00033270) bg_calc_display_pane_g

0x1ae3,	// (0x00025c25) cell_qdial_pane_ParamLimits

0x1ae3,	// (0x00025c25) cell_qdial_pane

0x3596,	// (0x000276d8) cell_qdial_pane_g1_ParamLimits

0x3596,	// (0x000276d8) cell_qdial_pane_g1

0x35ac,	// (0x000276ee) cell_qdial_pane_g2_ParamLimits

0x35ac,	// (0x000276ee) cell_qdial_pane_g2

0x35bc,	// (0x000276fe) cell_qdial_pane_g3_ParamLimits

0x35bc,	// (0x000276fe) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00033277) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00033277) cell_qdial_pane_g

0x35de,	// (0x00027720) cell_qdial_pane_t1_ParamLimits

0x35de,	// (0x00027720) cell_qdial_pane_t1

0x35f6,	// (0x00027738) cell_qdial_pane_t2_ParamLimits

0x35f6,	// (0x00027738) cell_qdial_pane_t2

0x3609,	// (0x0002774b) cell_qdial_pane_t3_ParamLimits

0x3609,	// (0x0002774b) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00033280) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00033280) cell_qdial_pane_t

0x3097,	// (0x000271d9) grid_highlight_pane_cp04

0x361c,	// (0x0002775e) thumbnail_qdial_pane_ParamLimits

0x361c,	// (0x0002775e) thumbnail_qdial_pane

0x3678,	// (0x000277ba) list_help_pane

0x3681,	// (0x000277c3) scroll_pane_cp02

0x368a,	// (0x000277cc) help_list_pane_t1_ParamLimits

0x368a,	// (0x000277cc) help_list_pane_t1

0xb210,	// (0x0002f352) bg_notes_pane_g2

0xb218,	// (0x0002f35a) bg_notes_pane_g3

0xb220,	// (0x0002f362) notes_bg_pane_g1

0xb228,	// (0x0002f36a) notes_bg_pane_g4

0xb230,	// (0x0002f372) notes_bg_pane_g5

0xb238,	// (0x0002f37a) notes_bg_pane_g6

0xb240,	// (0x0002f382) notes_bg_pane_g7

0xb248,	// (0x0002f38a) notes_bg_pane_g8

0xb250,	// (0x0002f392) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0003329e) notes_bg_pane_g

0x36a9,	// (0x000277eb) list_notes_text_pane_ParamLimits

0x36a9,	// (0x000277eb) list_notes_text_pane

0x36bf,	// (0x00027801) list_notes_text_pane_g1

0x36c8,	// (0x0002780a) list_notes_text_pane_t1

0x36e7,	// (0x00027829) listscroll_cale_week_pane

0x371c,	// (0x0002785e) bg_cale_heading_pane

0x3734,	// (0x00027876) bg_cale_pane_cp01

0x3751,	// (0x00027893) cale_week_corner_pane

0x3770,	// (0x000278b2) cale_week_day_heading_pane

0x378d,	// (0x000278cf) cale_week_scroll_pane_g1

0x37a0,	// (0x000278e2) cale_week_scroll_pane_g2

0x37b8,	// (0x000278fa) cale_week_scroll_pane_g3

0x37d0,	// (0x00027912) cale_week_scroll_pane_g4

0x37e8,	// (0x0002792a) cale_week_scroll_pane_g5

0x3808,	// (0x0002794a) cale_week_scroll_pane_g6

0x3828,	// (0x0002796a) cale_week_scroll_pane_g7

0x3848,	// (0x0002798a) cale_week_scroll_pane_g8

0x386c,	// (0x000279ae) cale_week_scroll_pane_g9

0x3884,	// (0x000279c6) cale_week_scroll_pane_g10

0x389c,	// (0x000279de) cale_week_scroll_pane_g11

0x38b4,	// (0x000279f6) cale_week_scroll_pane_g12

0x38cc,	// (0x00027a0e) cale_week_scroll_pane_g13

0x38cc,	// (0x00027a0e) cale_week_scroll_pane_g14

0x38cc,	// (0x00027a0e) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x000332ad) cale_week_scroll_pane_g

0x3908,	// (0x00027a4a) cale_week_time_pane

0x392c,	// (0x00027a6e) grid_cale_week_pane

0x3964,	// (0x00027aa6) scroll_pane_cp08

0x3981,	// (0x00027ac3) cell_cale_week_pane_ParamLimits

0x3981,	// (0x00027ac3) cell_cale_week_pane

0x3a0f,	// (0x00027b51) cale_week_day_heading_pane_t1

0x3a39,	// (0x00027b7b) cale_week_day_heading_pane_t2

0x3a68,	// (0x00027baa) cale_week_day_heading_pane_t3

0x3a97,	// (0x00027bd9) cale_week_day_heading_pane_t4

0x3ac6,	// (0x00027c08) cale_week_day_heading_pane_t5

0x3afd,	// (0x00027c3f) cale_week_day_heading_pane_t6

0x3b34,	// (0x00027c76) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x000332ce) cale_week_day_heading_pane_t

0x3b5e,	// (0x00027ca0) bg_cale_side_pane

0x1af7,	// (0x00025c39) cale_week_time_pane_t1

0x1b11,	// (0x00025c53) cale_week_time_pane_t2

0x1b2b,	// (0x00025c6d) cale_week_time_pane_t3

0x1b45,	// (0x00025c87) cale_week_time_pane_t4

0x1b5f,	// (0x00025ca1) cale_week_time_pane_t5

0x1b79,	// (0x00025cbb) cale_week_time_pane_t6

0x1b93,	// (0x00025cd5) cale_week_time_pane_t7

0x1bad,	// (0x00025cef) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x000332dd) cale_week_time_pane_t

0x3b6c,	// (0x00027cae) cell_cale_week_pane_g2

0x3b90,	// (0x00027cd2) cell_cale_week_pane_g3_ParamLimits

0x3b90,	// (0x00027cd2) cell_cale_week_pane_g3

0x3ba8,	// (0x00027cea) grid_highlight_pane_cp07

0x3bb0,	// (0x00027cf2) listscroll_gms_pane

0x3bba,	// (0x00027cfc) grid_gms_pane

0x3bc3,	// (0x00027d05) listscroll_gms_pane_g1

0x3bcb,	// (0x00027d0d) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x000332ee) listscroll_gms_pane_g

0x3bd3,	// (0x00027d15) scroll_pane_cp010

0x3bde,	// (0x00027d20) cell_gms_pane_ParamLimits

0x3bde,	// (0x00027d20) cell_gms_pane

0x3bf0,	// (0x00027d32) cell_gms_pane_g1

0x3bf8,	// (0x00027d3a) cell_gms_pane_g2

0x36bf,	// (0x00027801) cell_gms_pane_g3

0x3c00,	// (0x00027d42) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x000332f3) cell_gms_pane_g

0x3c09,	// (0x00027d4b) grid_highlight_pane_cp09

0x69fd,	// (0x0002ab3f) phob_pre_status_pane_g1

0x6a05,	// (0x0002ab47) phob_pre_status_pane_g2

0x6a0d,	// (0x0002ab4f) phob_pre_status_pane_g3

0x6a15,	// (0x0002ab57) phob_pre_status_pane_g4

0x0004,

0xf588,	// (0x000336ca) phob_pre_status_pane_g

0x6a25,	// (0x0002ab67) phob_pre_status_pane_t1

0x6a33,	// (0x0002ab75) phob_pre_status_pane_t2

0x6a43,	// (0x0002ab85) phob_pre_status_pane_t3

0x0002,

0xf593,	// (0x000336d5) phob_pre_status_pane_t

0x3c19,	// (0x00027d5b) bg_list_pane_cp05

0x3c21,	// (0x00027d63) grid_vorec_pane

0x3c29,	// (0x00027d6b) vorec_t1

0x3c37,	// (0x00027d79) vorec_t2

0x3c45,	// (0x00027d87) vorec_t3

0x3c53,	// (0x00027d95) vorec_t4

0x2b9e,	// (0x00026ce0) vorec_t5

0x2bac,	// (0x00026cee) vorec_t6

0x0004,

0xf1ba,	// (0x000332fc) vorec_t

0x2bba,	// (0x00026cfc) wait_bar_pane_cp01

0x3c6f,	// (0x00027db1) cell_vorec_pane_ParamLimits

0x3c6f,	// (0x00027db1) cell_vorec_pane

0xb258,	// (0x0002f39a) cell_vorec_pane_g1

0x3097,	// (0x000271d9) grid_highlight_pane_cp05

0x3314,	// (0x00027456) cams_zoom_pane

0x3314,	// (0x00027456) image_vga_pane

0x337b,	// (0x000274bd) main_camera_pane_g1

0x337b,	// (0x000274bd) main_camera_pane_g2

0x337b,	// (0x000274bd) main_camera_pane_g3

0x337b,	// (0x000274bd) main_camera_pane_g4

0x337b,	// (0x000274bd) main_camera_pane_g5

0x337b,	// (0x000274bd) main_camera_pane_g6

0x337b,	// (0x000274bd) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00033307) main_camera_pane_g

0x3c82,	// (0x00027dc4) main_camera_pane_t1

0x3c82,	// (0x00027dc4) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00033318) main_camera_pane_t

0x3caa,	// (0x00027dec) cams_zoom_pane_cp_ParamLimits

0x3caa,	// (0x00027dec) cams_zoom_pane_cp

0x3cde,	// (0x00027e20) image_cif_pane_ParamLimits

0x3cde,	// (0x00027e20) image_cif_pane

0x2bdc,	// (0x00026d1e) image_subqcif_pane

0x3cf0,	// (0x00027e32) main_video_pane_g1_ParamLimits

0x3cf0,	// (0x00027e32) main_video_pane_g1

0x3d1e,	// (0x00027e60) main_video_pane_g2_ParamLimits

0x3d1e,	// (0x00027e60) main_video_pane_g2

0x3d58,	// (0x00027e9a) main_video_pane_g3_ParamLimits

0x3d58,	// (0x00027e9a) main_video_pane_g3

0x3d58,	// (0x00027e9a) main_video_pane_g4_ParamLimits

0x3d58,	// (0x00027e9a) main_video_pane_g4

0x3d8c,	// (0x00027ece) main_video_pane_g5_ParamLimits

0x3d8c,	// (0x00027ece) main_video_pane_g5

0x3d9a,	// (0x00027edc) main_video_pane_g6_ParamLimits

0x3d9a,	// (0x00027edc) main_video_pane_g6

0x0006,

0xf1db,	// (0x0003331d) main_video_pane_g_ParamLimits

0xf1db,	// (0x0003331d) main_video_pane_g

0x3dc2,	// (0x00027f04) main_video_pane_t1_ParamLimits

0x3dc2,	// (0x00027f04) main_video_pane_t1

0x3e06,	// (0x00027f48) cams_zoom_pane_g1

0x3e06,	// (0x00027f48) cams_zoom_pane_g2

0x3e06,	// (0x00027f48) cams_zoom_pane_g3

0x3e06,	// (0x00027f48) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0003332c) cams_zoom_pane_g

0x3e24,	// (0x00027f66) grid_cams_pane

0x3e3e,	// (0x00027f80) linegrid_cams_pane

0x3e51,	// (0x00027f93) cell_cams_pane_ParamLimits

0x3e51,	// (0x00027f93) cell_cams_pane

0x3e71,	// (0x00027fb3) cams_burst_image_pane

0x3e79,	// (0x00027fbb) cell_cams_pane_g1

0x3097,	// (0x000271d9) grid_highlight_pane_cp03

0x330a,	// (0x0002744c) mp_bg_pane_g1

0x2bdc,	// (0x00026d1e) bg_list_pane_cp03

0x2bdc,	// (0x00026d1e) bg_mp_pane

0x2bdc,	// (0x00026d1e) grid_mp_pane

0x3e06,	// (0x00027f48) media_player_g1

0x521b,	// (0x0002935d) media_player_t1

0x521b,	// (0x0002935d) media_player_t2

0x521b,	// (0x0002935d) media_player_t3

0x521b,	// (0x0002935d) media_player_t4

0x521b,	// (0x0002935d) media_player_t5

0x521b,	// (0x0002935d) media_player_t6

0x521b,	// (0x0002935d) media_player_t7

0x0006,

0xf572,	// (0x000336b4) media_player_t

0x2bdc,	// (0x00026d1e) wait_bar_pane_cp02

0xf557,	// (0x00033699) main_usb_pane_t

0x550d,	// (0x0002964f) cell_mp_pane

0x330a,	// (0x0002744c) cell_mp_pane_g1

0x3097,	// (0x000271d9) grid_highlight_pane_cp06

0x3e81,	// (0x00027fc3) grid_skin_colour_pane

0x3e89,	// (0x00027fcb) list_highlight_pane_cp03

0x3e91,	// (0x00027fd3) skin_g1

0x3e99,	// (0x00027fdb) skin_t1

0x3ea8,	// (0x00027fea) skin_t2

0x0001,

0xf218,	// (0x0003335a) skin_t

0x3eb6,	// (0x00027ff8) cell_skin_colour_pane_ParamLimits

0x3eb6,	// (0x00027ff8) cell_skin_colour_pane

0x3ed6,	// (0x00028018) cell_skin_colour_pane_g1

0x3f41,	// (0x00028083) call_video_g1_ParamLimits

0x3f41,	// (0x00028083) call_video_g1

0x3f5d,	// (0x0002809f) call_video_g2_ParamLimits

0x3f5d,	// (0x0002809f) call_video_g2

0x0001,

0xf21d,	// (0x0003335f) call_video_g_ParamLimits

0xf21d,	// (0x0003335f) call_video_g

0x3faf,	// (0x000280f1) call_video_uplink_pane_cp1_ParamLimits

0x3faf,	// (0x000280f1) call_video_uplink_pane_cp1

0x4014,	// (0x00028156) call_video_uplink_pane_cp2

0x4056,	// (0x00028198) video_down_crop_pane_ParamLimits

0x4056,	// (0x00028198) video_down_crop_pane

0x413f,	// (0x00028281) video_down_pane_ParamLimits

0x413f,	// (0x00028281) video_down_pane

0x4236,	// (0x00028378) video_down_subqcif_pane_ParamLimits

0x4236,	// (0x00028378) video_down_subqcif_pane

0x424e,	// (0x00028390) video_down_subqcif_pane_cp_ParamLimits

0x424e,	// (0x00028390) video_down_subqcif_pane_cp

0x428d,	// (0x000283cf) im_reading_pane_ParamLimits

0x428d,	// (0x000283cf) im_reading_pane

0x429f,	// (0x000283e1) im_writing_pane_ParamLimits

0x429f,	// (0x000283e1) im_writing_pane

0x42bd,	// (0x000283ff) im_reading_pane_t1

0x42f7,	// (0x00028439) list_im_pane

0x4308,	// (0x0002844a) scroll_pane_cp07

0x4321,	// (0x00028463) im_writing_pane_t1_ParamLimits

0x4321,	// (0x00028463) im_writing_pane_t1

0x4336,	// (0x00028478) im_writing_pane_t2_ParamLimits

0x4336,	// (0x00028478) im_writing_pane_t2

0x0001,

0xf227,	// (0x00033369) im_writing_pane_t_ParamLimits

0xf227,	// (0x00033369) im_writing_pane_t

0x3097,	// (0x000271d9) input_focus_pane_cp04

0x3097,	// (0x000271d9) input_focus_pane_cp05

0x4353,	// (0x00028495) list_im_single_pane_ParamLimits

0x4353,	// (0x00028495) list_im_single_pane

0x4368,	// (0x000284aa) list_single_im_pane_t1

0x3c19,	// (0x00027d5b) blid_accuracy_pane

0x3c19,	// (0x00027d5b) blid_compass_pane

0xc05a,	// (0x0003019c) main_location_t1

0xc05a,	// (0x0003019c) main_location_t2

0xc05a,	// (0x0003019c) main_location_t3

0x0002,

0xf581,	// (0x000336c3) main_location_t

0x3097,	// (0x000271d9) aid_levels_location

0x330a,	// (0x0002744c) blid_accuracy_pane_g1

0x330a,	// (0x0002744c) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x000333b8) blid_accuracy_pane_g

0x43a2,	// (0x000284e4) wml_content_pane

0x43e0,	// (0x00028522) wml_button_pane_ParamLimits

0x43e0,	// (0x00028522) wml_button_pane

0x43f4,	// (0x00028536) wml_list_single_large_pane_ParamLimits

0x43f4,	// (0x00028536) wml_list_single_large_pane

0x4409,	// (0x0002854b) wml_list_single_medium_pane_ParamLimits

0x4409,	// (0x0002854b) wml_list_single_medium_pane

0x4420,	// (0x00028562) wml_list_single_small_pane_ParamLimits

0x4420,	// (0x00028562) wml_list_single_small_pane

0x4439,	// (0x0002857b) wml_selection_box_pane_ParamLimits

0x4439,	// (0x0002857b) wml_selection_box_pane

0x444c,	// (0x0002858e) wml_list_single_pane_t1

0x445b,	// (0x0002859d) wml_list_single_medium_pane_t1

0x446a,	// (0x000285ac) wml_list_single_large_pane_t1

0x4479,	// (0x000285bb) input_focus_pane_cp02_ParamLimits

0x4479,	// (0x000285bb) input_focus_pane_cp02

0x448c,	// (0x000285ce) wml_selection_box_pane_g1

0x4495,	// (0x000285d7) wml_selection_box_pane_t1_ParamLimits

0x4495,	// (0x000285d7) wml_selection_box_pane_t1

0x32f2,	// (0x00027434) bg_wml_button_pane_ParamLimits

0x32f2,	// (0x00027434) bg_wml_button_pane

0x44ad,	// (0x000285ef) wml_button_pane_g1

0x44b5,	// (0x000285f7) wml_button_pane_t1

0x44ad,	// (0x000285ef) wml_button_bg_pane_g1

0x44c5,	// (0x00028607) wml_button_bg_pane_g2

0x44cd,	// (0x0002860f) wml_button_bg_pane_g3

0x44d5,	// (0x00028617) wml_button_bg_pane_g4

0x44dd,	// (0x0002861f) wml_button_bg_pane_g5

0x44e5,	// (0x00028627) wml_button_bg_pane_g6

0x44ed,	// (0x0002862f) wml_button_bg_pane_g7

0x44f5,	// (0x00028637) wml_button_bg_pane_g8

0x44fd,	// (0x0002863f) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0003336e) wml_button_bg_pane_g

0x4505,	// (0x00028647) bg_list_pane_cp02

0x450d,	// (0x0002864f) mce_header_pane_ParamLimits

0x450d,	// (0x0002864f) mce_header_pane

0x4523,	// (0x00028665) mce_icon_pane

0x4523,	// (0x00028665) mce_image_pane

0x452c,	// (0x0002866e) mce_text_pane_ParamLimits

0x452c,	// (0x0002866e) mce_text_pane

0x453f,	// (0x00028681) scroll_pane_cp03

0x43d8,	// (0x0002851a) scroll_pane_cp04

0x4549,	// (0x0002868b) scroll_pane_cp05_ParamLimits

0x4549,	// (0x0002868b) scroll_pane_cp05

0x4555,	// (0x00028697) mce_header_field_pane_ParamLimits

0x4555,	// (0x00028697) mce_header_field_pane

0x456c,	// (0x000286ae) mce_header_field_pane_2_ParamLimits

0x456c,	// (0x000286ae) mce_header_field_pane_2

0x4582,	// (0x000286c4) mce_header_field_pane_3

0x458a,	// (0x000286cc) list_single_mce_message_pane_ParamLimits

0x458a,	// (0x000286cc) list_single_mce_message_pane

0x45a0,	// (0x000286e2) list_single_mce_smart_pane_ParamLimits

0x45a0,	// (0x000286e2) list_single_mce_smart_pane

0x45c1,	// (0x00028703) input_focus_pane_cp03

0x45ca,	// (0x0002870c) list_header_data_pane

0x45d2,	// (0x00028714) mce_header_field_pane_t1

0x45e2,	// (0x00028724) list_single_mce_header_pane_ParamLimits

0x45e2,	// (0x00028724) list_single_mce_header_pane

0x45f6,	// (0x00028738) list_single_mce_header_pane_t1

0x4605,	// (0x00028747) list_single_mce_message_pane_g1

0x460d,	// (0x0002874f) list_single_mce_message_pane_t1

0x4641,	// (0x00028783) bg_cale_heading_pane_cp01_ParamLimits

0x4641,	// (0x00028783) bg_cale_heading_pane_cp01

0x467b,	// (0x000287bd) bg_cale_pane_cp02_ParamLimits

0x467b,	// (0x000287bd) bg_cale_pane_cp02

0x46a8,	// (0x000287ea) cale_month_corner_pane

0x46c7,	// (0x00028809) cale_month_day_heading_pane_ParamLimits

0x46c7,	// (0x00028809) cale_month_day_heading_pane

0x4719,	// (0x0002885b) cale_month_pane_g1_ParamLimits

0x4719,	// (0x0002885b) cale_month_pane_g1

0x4748,	// (0x0002888a) cale_month_pane_g2_ParamLimits

0x4748,	// (0x0002888a) cale_month_pane_g2

0x4778,	// (0x000288ba) cale_month_pane_g3_ParamLimits

0x4778,	// (0x000288ba) cale_month_pane_g3

0x47b4,	// (0x000288f6) cale_month_pane_g4_ParamLimits

0x47b4,	// (0x000288f6) cale_month_pane_g4

0x47f0,	// (0x00028932) cale_month_pane_g5_ParamLimits

0x47f0,	// (0x00028932) cale_month_pane_g5

0x4838,	// (0x0002897a) cale_month_pane_g6_ParamLimits

0x4838,	// (0x0002897a) cale_month_pane_g6

0x4884,	// (0x000289c6) cale_month_pane_g7_ParamLimits

0x4884,	// (0x000289c6) cale_month_pane_g7

0x48d4,	// (0x00028a16) cale_month_pane_g8_ParamLimits

0x48d4,	// (0x00028a16) cale_month_pane_g8

0x4928,	// (0x00028a6a) cale_month_pane_g9_ParamLimits

0x4928,	// (0x00028a6a) cale_month_pane_g9

0x497a,	// (0x00028abc) cale_month_pane_g10_ParamLimits

0x497a,	// (0x00028abc) cale_month_pane_g10

0x49cc,	// (0x00028b0e) cale_month_pane_g11_ParamLimits

0x49cc,	// (0x00028b0e) cale_month_pane_g11

0x4a1e,	// (0x00028b60) cale_month_pane_g12_ParamLimits

0x4a1e,	// (0x00028b60) cale_month_pane_g12

0x4a70,	// (0x00028bb2) cale_month_pane_g13_ParamLimits

0x4a70,	// (0x00028bb2) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00033381) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00033381) cale_month_pane_g

0x4ad4,	// (0x00028c16) cale_month_week_pane

0x4af8,	// (0x00028c3a) grid_cale_month_pane_ParamLimits

0x4af8,	// (0x00028c3a) grid_cale_month_pane

0x4b41,	// (0x00028c83) cale_month_day_heading_pane_t1

0x4b83,	// (0x00028cc5) cale_month_day_heading_pane_t2

0x4bb8,	// (0x00028cfa) cale_month_day_heading_pane_t3

0x4bed,	// (0x00028d2f) cale_month_day_heading_pane_t4

0x4c2a,	// (0x00028d6c) cale_month_day_heading_pane_t5

0x4c6f,	// (0x00028db1) cale_month_day_heading_pane_t6

0x4cb4,	// (0x00028df6) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0003339c) cale_month_day_heading_pane_t

0x3b5e,	// (0x00027ca0) bg_cale_side_pane_cp01

0x4d01,	// (0x00028e43) cale_month_week_pane_t1

0x4d1a,	// (0x00028e5c) cale_month_week_pane_t2

0x4d33,	// (0x00028e75) cale_month_week_pane_t3

0x4d4c,	// (0x00028e8e) cale_month_week_pane_t4

0x4d65,	// (0x00028ea7) cale_month_week_pane_t5

0x4d7e,	// (0x00028ec0) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x000333ab) cale_month_week_pane_t

0x4d97,	// (0x00028ed9) cell_cale_month_pane_ParamLimits

0x4d97,	// (0x00028ed9) cell_cale_month_pane

0xb262,	// (0x0002f3a4) cell_cale_month_pane_g1

0x1bcd,	// (0x00025d0f) cell_cale_month_pane_t1_ParamLimits

0x1bcd,	// (0x00025d0f) cell_cale_month_pane_t1

0x3ba8,	// (0x00027cea) grid_highlight_pane_cp08

0x330a,	// (0x0002744c) main_smil_g1

0x4ec5,	// (0x00029007) smil_status_pane

0x4ed0,	// (0x00029012) smil_text_pane

0xbf32,	// (0x00030074) bg_popup_call3_rect_pane_g8

0xbf3a,	// (0x0003007c) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x00033644) bg_popup_call3_rect_pane_g

0xc177,	// (0x000302b9) smil_status_volume_pane_g1

0x4ee4,	// (0x00029026) smil_status_pane_t1

0xc1aa,	// (0x000302ec) volume_smil_pane

0x4efb,	// (0x0002903d) list_smil_text_pane

0x4f05,	// (0x00029047) scroll_pane_cp011

0x4f10,	// (0x00029052) smil_text_list_pane_t1_ParamLimits

0x4f10,	// (0x00029052) smil_text_list_pane_t1

0xb26e,	// (0x0002f3b0) aid_volume_smil_ParamLimits

0xb26e,	// (0x0002f3b0) aid_volume_smil

0x330a,	// (0x0002744c) smil_volume_pane_g1

0x330a,	// (0x0002744c) smil_volume_pane_g2

0x0001,

0xf276,	// (0x000333b8) smil_volume_pane_g

0x36e7,	// (0x00027829) listscroll_cale_day_pane

0x4f54,	// (0x00029096) bg_cale_pane

0x4f6c,	// (0x000290ae) list_cale_pane

0x4f8f,	// (0x000290d1) scroll_pane_cp09

0x4fa0,	// (0x000290e2) cale_bg_pane_g1

0x4fa8,	// (0x000290ea) cale_bg_pane_g2

0x4fb0,	// (0x000290f2) cale_bg_pane_g3

0x4fb8,	// (0x000290fa) cale_bg_pane_g4

0x4fc0,	// (0x00029102) cale_bg_pane_g5

0x4fc8,	// (0x0002910a) cale_bg_pane_g6

0x4fd0,	// (0x00029112) cale_bg_pane_g7

0x4fd8,	// (0x0002911a) cale_bg_pane_g8

0x4fe0,	// (0x00029122) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x000333bd) cale_bg_pane_g

0x4ff0,	// (0x00029132) list_cale_time_pane_ParamLimits

0x4ff0,	// (0x00029132) list_cale_time_pane

0x5006,	// (0x00029148) list_cale_time_pane_g1_ParamLimits

0x5006,	// (0x00029148) list_cale_time_pane_g1

0x5012,	// (0x00029154) list_cale_time_pane_g2_ParamLimits

0x5012,	// (0x00029154) list_cale_time_pane_g2

0x501f,	// (0x00029161) list_cale_time_pane_g3_ParamLimits

0x501f,	// (0x00029161) list_cale_time_pane_g3

0x502d,	// (0x0002916f) list_cale_time_pane_g4_ParamLimits

0x502d,	// (0x0002916f) list_cale_time_pane_g4

0x503b,	// (0x0002917d) list_cale_time_pane_g5_ParamLimits

0x503b,	// (0x0002917d) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x000333d0) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x000333d0) list_cale_time_pane_g

0x5056,	// (0x00029198) list_cale_time_pane_t1_ParamLimits

0x5056,	// (0x00029198) list_cale_time_pane_t1

0x507e,	// (0x000291c0) list_cale_time_pane_t2_ParamLimits

0x507e,	// (0x000291c0) list_cale_time_pane_t2

0x5726,	// (0x00029868) aid_blid_cardinal_pane

0x5770,	// (0x000298b2) compass_pane_t4

0x50a6,	// (0x000291e8) list_cale_time_pane_t4_ParamLimits

0x50a6,	// (0x000291e8) list_cale_time_pane_t4

0x577e,	// (0x000298c0) compass_pane_t5

0x578c,	// (0x000298ce) compass_pane_t6

0x579a,	// (0x000298dc) compass_pane_t7

0x5832,	// (0x00029974) navi_pane_cc_t1

0x5a51,	// (0x00029b93) aid_phob_thumbnail_center_pane

0x5f33,	// (0x0002a075) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x000333dd) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x000333dd) list_cale_time_pane_t

0x2cca,	// (0x00026e0c) bg_popup_window_pane_cp02_ParamLimits

0x2cca,	// (0x00026e0c) bg_popup_window_pane_cp02

0x50ce,	// (0x00029210) heading_pane_cp01_ParamLimits

0x50ce,	// (0x00029210) heading_pane_cp01

0x50da,	// (0x0002921c) loc_req_pane_ParamLimits

0x50da,	// (0x0002921c) loc_req_pane

0x50ea,	// (0x0002922c) loc_type_pane_ParamLimits

0x50ea,	// (0x0002922c) loc_type_pane

0x50fc,	// (0x0002923e) loc_type_pane_t1_ParamLimits

0x50fc,	// (0x0002923e) loc_type_pane_t1

0x510e,	// (0x00029250) loc_type_pane_t2_ParamLimits

0x510e,	// (0x00029250) loc_type_pane_t2

0x5120,	// (0x00029262) loc_type_pane_t3_ParamLimits

0x5120,	// (0x00029262) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x000333e4) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x000333e4) loc_type_pane_t

0x5132,	// (0x00029274) list_loc_req_pane

0x513c,	// (0x0002927e) scroll_pane_cp012

0x5147,	// (0x00029289) list_single_loc_request_popup_menu_pane_ParamLimits

0x5147,	// (0x00029289) list_single_loc_request_popup_menu_pane

0x5154,	// (0x00029296) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x5154,	// (0x00029296) list_single_loc_request_popup_menu_pane_g1

0x5160,	// (0x000292a2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x5160,	// (0x000292a2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x000333eb) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x000333eb) list_single_loc_request_popup_menu_pane_g

0x516c,	// (0x000292ae) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x516c,	// (0x000292ae) list_single_loc_request_popup_menu_pane_t1

0x32f2,	// (0x00027434) bg_popup_window_pane_cp03_ParamLimits

0x32f2,	// (0x00027434) bg_popup_window_pane_cp03

0x5182,	// (0x000292c4) heading_loc_req_pane_ParamLimits

0x5182,	// (0x000292c4) heading_loc_req_pane

0x518e,	// (0x000292d0) popup_dyc_status_message_window_g1_ParamLimits

0x518e,	// (0x000292d0) popup_dyc_status_message_window_g1

0x51a2,	// (0x000292e4) popup_dyc_status_message_window_t1_ParamLimits

0x51a2,	// (0x000292e4) popup_dyc_status_message_window_t1

0x51b7,	// (0x000292f9) popup_dyc_status_message_window_t2_ParamLimits

0x51b7,	// (0x000292f9) popup_dyc_status_message_window_t2

0x51cc,	// (0x0002930e) popup_dyc_status_message_window_t3_ParamLimits

0x51cc,	// (0x0002930e) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x000333f0) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x000333f0) popup_dyc_status_message_window_t

0x3097,	// (0x000271d9) bg_heading_pane_cp01

0x51e8,	// (0x0002932a) heading_loc_req_pane_g1

0x51f0,	// (0x00029332) heading_loc_req_pane_g2

0x51f8,	// (0x0002933a) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x000333f7) heading_loc_req_pane_g

0x5200,	// (0x00029342) heading_loc_req_pane_t1

0x522b,	// (0x0002936d) bg_popup_sub_pane_cp01_ParamLimits

0x522b,	// (0x0002936d) bg_popup_sub_pane_cp01

0x5239,	// (0x0002937b) popup_cale_events_window_g1_ParamLimits

0x5239,	// (0x0002937b) popup_cale_events_window_g1

0x5259,	// (0x0002939b) popup_cale_events_window_g2_ParamLimits

0x5259,	// (0x0002939b) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x00033419) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x00033419) popup_cale_events_window_g

0x5279,	// (0x000293bb) popup_cale_events_window_t1_ParamLimits

0x5279,	// (0x000293bb) popup_cale_events_window_t1

0x528b,	// (0x000293cd) popup_cale_events_window_t2_ParamLimits

0x528b,	// (0x000293cd) popup_cale_events_window_t2

0x52c9,	// (0x0002940b) popup_cale_events_window_t3_ParamLimits

0x52c9,	// (0x0002940b) popup_cale_events_window_t3

0x5303,	// (0x00029445) popup_cale_events_window_t4_ParamLimits

0x5303,	// (0x00029445) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x0003341e) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x0003341e) popup_cale_events_window_t

0x5339,	// (0x0002947b) call_type_pane

0x5349,	// (0x0002948b) popup_call_status_window_g1

0x535d,	// (0x0002949f) popup_call_status_window_g2

0x5371,	// (0x000294b3) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x00033427) popup_call_status_window_g

0x5380,	// (0x000294c2) call_type_pane_g1

0x5389,	// (0x000294cb) call_type_pane_g2

0x0001,

0xf2ec,	// (0x0003342e) call_type_pane_g

0x3097,	// (0x000271d9) bg_popup_sub_pane_cp02

0x5392,	// (0x000294d4) listscroll_popup_wml_pane

0x539a,	// (0x000294dc) list_wml_pane

0x53a4,	// (0x000294e6) scroll_pane_cp013

0x53af,	// (0x000294f1) list_single_graphic_popup_wml_pane_ParamLimits

0x53af,	// (0x000294f1) list_single_graphic_popup_wml_pane

0x330a,	// (0x0002744c) list_single_graphic_popup_wml_pane_g1

0x53c3,	// (0x00029505) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x00033433) list_single_graphic_popup_wml_pane_g

0x53cb,	// (0x0002950d) list_single_graphic_popup_wml_pane_t1

0x53e1,	// (0x00029523) aid_call_pane

0x32ea,	// (0x0002742c) popup_clock_analogue_window_g1

0x32ea,	// (0x0002742c) popup_clock_analogue_window_g2

0xb29c,	// (0x0002f3de) popup_clock_analogue_window_g3

0xb29c,	// (0x0002f3de) popup_clock_analogue_window_g4

0x330a,	// (0x0002744c) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x00033438) popup_clock_analogue_window_g

0xb2a4,	// (0x0002f3e6) popup_clock_analogue_window_t1

0xb2b2,	// (0x0002f3f4) clock_digital_number_pane_ParamLimits

0xb2b2,	// (0x0002f3f4) clock_digital_number_pane

0xb2be,	// (0x0002f400) clock_digital_number_pane_cp02_ParamLimits

0xb2be,	// (0x0002f400) clock_digital_number_pane_cp02

0xb2ca,	// (0x0002f40c) clock_digital_number_pane_cp03_ParamLimits

0xb2ca,	// (0x0002f40c) clock_digital_number_pane_cp03

0xb2d6,	// (0x0002f418) clock_digital_number_pane_cp04_ParamLimits

0xb2d6,	// (0x0002f418) clock_digital_number_pane_cp04

0xb2e2,	// (0x0002f424) clock_digital_separator_pane_ParamLimits

0xb2e2,	// (0x0002f424) clock_digital_separator_pane

0xb2ee,	// (0x0002f430) popup_clock_digital_window_t1

0x330a,	// (0x0002744c) clock_digital_number_pane_g1

0x330a,	// (0x0002744c) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x000333b8) clock_digital_number_pane_g

0x330a,	// (0x0002744c) clock_digital_separator_pane_g1

0x330a,	// (0x0002744c) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x000333b8) clock_digital_separator_pane_g

0x3097,	// (0x000271d9) bg_popup_window_pane_cp04

0x53e9,	// (0x0002952b) heading_pane_cp03

0x3c19,	// (0x00027d5b) listscroll_popup_gms_pane

0x3097,	// (0x000271d9) grid_large_graphic_popup_pane

0x53f2,	// (0x00029534) listscroll_popup_gms_pane_g1

0x53fb,	// (0x0002953d) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x00033443) listscroll_popup_gms_pane_g

0x5404,	// (0x00029546) scroll_pane_cp014

0x336d,	// (0x000274af) cell_large_graphic_popup_pane_ParamLimits

0x336d,	// (0x000274af) cell_large_graphic_popup_pane

0x337b,	// (0x000274bd) cell_large_graphic_popup_pane_g1_ParamLimits

0x337b,	// (0x000274bd) cell_large_graphic_popup_pane_g1

0x540d,	// (0x0002954f) cell_large_graphic_popup_pane_g2_ParamLimits

0x540d,	// (0x0002954f) cell_large_graphic_popup_pane_g2

0x541b,	// (0x0002955d) cell_large_graphic_popup_pane_g3_ParamLimits

0x541b,	// (0x0002955d) cell_large_graphic_popup_pane_g3

0x5429,	// (0x0002956b) cell_large_graphic_popup_pane_g4_ParamLimits

0x5429,	// (0x0002956b) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x00033448) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x00033448) cell_large_graphic_popup_pane_g

0x3097,	// (0x000271d9) grid_highlight_pane_cp010

0x330a,	// (0x0002744c) bg_popup_call_pane_g1

0x543a,	// (0x0002957c) list_single_graphic_popup_conf_pane_ParamLimits

0x543a,	// (0x0002957c) list_single_graphic_popup_conf_pane

0x544d,	// (0x0002958f) list_highlight_pane_cp01

0x5456,	// (0x00029598) list_single_graphic_popup_conf_pane_g1

0x545e,	// (0x000295a0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x00033451) list_single_graphic_popup_conf_pane_g

0x5466,	// (0x000295a8) list_single_graphic_popup_conf_pane_t1

0x5474,	// (0x000295b6) linegrid_cams_pane_g1

0x547d,	// (0x000295bf) linegrid_cams_pane_g2

0x36bf,	// (0x00027801) linegrid_cams_pane_g3

0x5486,	// (0x000295c8) linegrid_cams_pane_g4

0x548f,	// (0x000295d1) linegrid_cams_pane_g5

0x5498,	// (0x000295da) linegrid_cams_pane_g6

0x3c00,	// (0x00027d42) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x00033456) linegrid_cams_pane_g

0x54a3,	// (0x000295e5) popup_clock_analogue_window

0x54a3,	// (0x000295e5) popup_clock_digital_window

0x3097,	// (0x000271d9) popup_phob_thumbnail_window

0x330a,	// (0x0002744c) call_video_uplink_pane_g1

0x54ac,	// (0x000295ee) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x00033465) call_video_uplink_pane_g

0x54b4,	// (0x000295f6) video_uplink_pane

0x54bc,	// (0x000295fe) mce_image_pane_g1

0x54c6,	// (0x00029608) mce_image_pane_g2

0x54ce,	// (0x00029610) mce_image_pane_g3

0x54d6,	// (0x00029618) mce_image_pane_g4

0x54e0,	// (0x00029622) mce_image_pane_g5

0x0004,

0xf328,	// (0x0003346a) mce_image_pane_g

0x54e8,	// (0x0002962a) control_top_pane_stacon_cp01_ParamLimits

0x54e8,	// (0x0002962a) control_top_pane_stacon_cp01

0x54fc,	// (0x0002963e) uni_indicator_pane_stacon_cp01_ParamLimits

0x54fc,	// (0x0002963e) uni_indicator_pane_stacon_cp01

0x550d,	// (0x0002964f) bg_popup_sub_pane_cp03

0x5517,	// (0x00029659) chi_dic_find_pane

0x551f,	// (0x00029661) listscroll_chi_dic_pane

0x5528,	// (0x0002966a) main_pane_chidic_g1

0x553b,	// (0x0002967d) chi_dic_find_pane_t1

0x5549,	// (0x0002968b) find_chidic_pane

0x5552,	// (0x00029694) chi_dic_list_pane_ParamLimits

0x5552,	// (0x00029694) chi_dic_list_pane

0x5563,	// (0x000296a5) scroll_pane_cp020

0x556b,	// (0x000296ad) find_chidic_pane_t1

0x3097,	// (0x000271d9) input_focus_pane_cp06

0x557a,	// (0x000296bc) list_chi_dic_pane_ParamLimits

0x557a,	// (0x000296bc) list_chi_dic_pane

0x558c,	// (0x000296ce) list_chi_dic_pane_t1_ParamLimits

0x558c,	// (0x000296ce) list_chi_dic_pane_t1

0x3097,	// (0x000271d9) list_highlight_pane_cp020

0x559f,	// (0x000296e1) bg_cale_heading_pane_g1

0x55a7,	// (0x000296e9) bg_cale_heading_pane_g2

0x55af,	// (0x000296f1) bg_cale_heading_pane_g3

0x55b7,	// (0x000296f9) bg_cale_heading_pane_g4

0x55c1,	// (0x00029703) bg_cale_heading_pane_g5

0x55cb,	// (0x0002970d) bg_cale_heading_pane_g6

0x55d3,	// (0x00029715) bg_cale_heading_pane_g7

0x55db,	// (0x0002971d) bg_cale_heading_pane_g8

0x55e5,	// (0x00029727) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x00033475) bg_cale_heading_pane_g

0x559f,	// (0x000296e1) bg_cale_side_pane_g1

0x55ef,	// (0x00029731) bg_cale_side_pane_g2

0x55f7,	// (0x00029739) bg_cale_side_pane_g3

0x55ff,	// (0x00029741) bg_cale_side_pane_g4

0x5607,	// (0x00029749) bg_cale_side_pane_g5

0x560f,	// (0x00029751) bg_cale_side_pane_g6

0x5617,	// (0x00029759) bg_cale_side_pane_g7

0x561f,	// (0x00029761) bg_cale_side_pane_g8

0x5627,	// (0x00029769) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x00033488) bg_cale_side_pane_g

0x562f,	// (0x00029771) popup_call_status_window_ParamLimits

0x562f,	// (0x00029771) popup_call_status_window

0x5676,	// (0x000297b8) stacon_top_pane

0x567e,	// (0x000297c0) status_pane_ParamLimits

0x567e,	// (0x000297c0) status_pane

0x5693,	// (0x000297d5) status_small_pane

0x569b,	// (0x000297dd) control_pane

0x3097,	// (0x000271d9) stacon_bottom_pane

0x56a3,	// (0x000297e5) list_single_mce_smart_pane_t1_ParamLimits

0x56a3,	// (0x000297e5) list_single_mce_smart_pane_t1

0x56b6,	// (0x000297f8) list_single_mce_smart_pane_t2_ParamLimits

0x56b6,	// (0x000297f8) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x0003349b) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x0003349b) list_single_mce_smart_pane_t

0x56d5,	// (0x00029817) compass_pane

0x56de,	// (0x00029820) main_location2_pane_t1

0x56f0,	// (0x00029832) main_location2_pane_t2

0x5702,	// (0x00029844) main_location2_pane_t3

0x0003,

0xf35e,	// (0x000334a0) main_location2_pane_t

0x5746,	// (0x00029888) compass_pane_g1_ParamLimits

0x5746,	// (0x00029888) compass_pane_g1

0x5752,	// (0x00029894) compass_pane_t1

0x5761,	// (0x000298a3) compass_pane_t2

0x0005,

0xf367,	// (0x000334a9) compass_pane_t

0x57a8,	// (0x000298ea) text_secondary_cp61

0x5829,	// (0x0002996b) navi_pane_cams_g5

0x58a5,	// (0x000299e7) navi_pane_im_t1

0x58b3,	// (0x000299f5) navi_pane_mp_g1_ParamLimits

0x58b3,	// (0x000299f5) navi_pane_mp_g1

0x58c7,	// (0x00029a09) navi_pane_mp_g2_ParamLimits

0x58c7,	// (0x00029a09) navi_pane_mp_g2

0x58d3,	// (0x00029a15) navi_pane_mp_g3_ParamLimits

0x58d3,	// (0x00029a15) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x000334bd) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x000334bd) navi_pane_mp_g

0x58df,	// (0x00029a21) navi_pane_mp_t1

0x58ed,	// (0x00029a2f) navi_pane_mp_t2

0x0002,

0xf382,	// (0x000334c4) navi_pane_mp_t

0x599a,	// (0x00029adc) navi_pane_vt_g1

0x58df,	// (0x00029a21) navi_pane_vt_t1

0x59a2,	// (0x00029ae4) navi_slider_pane

0x3c19,	// (0x00027d5b) zooming_pane

0x59b2,	// (0x00029af4) navi_slider_pane_g1

0xb30b,	// (0x0002f44d) navi_slider_pane_g2

0x0006,

0xf389,	// (0x000334cb) navi_slider_pane_g

0x59d6,	// (0x00029b18) aid_levels_zoom

0x59de,	// (0x00029b20) zooming_pane_g1

0x59e6,	// (0x00029b28) zooming_pane_g2

0x59e6,	// (0x00029b28) zooming_pane_g3

0x0002,

0xf398,	// (0x000334da) zooming_pane_g

0x59ee,	// (0x00029b30) level_10_zoom

0x59f7,	// (0x00029b39) level_11_zoom

0x5a00,	// (0x00029b42) level_1_zoom

0x5a09,	// (0x00029b4b) level_2_zoom

0x5a12,	// (0x00029b54) level_3_zoom

0x5a1b,	// (0x00029b5d) level_4_zoom

0x5a24,	// (0x00029b66) level_5_zoom

0x5a2d,	// (0x00029b6f) level_6_zoom

0x5a36,	// (0x00029b78) level_7_zoom

0x5a3f,	// (0x00029b81) level_8_zoom

0x5a48,	// (0x00029b8a) level_9_zoom

0x5a59,	// (0x00029b9b) popup_phob_thumbnail_window_g1

0x5a61,	// (0x00029ba3) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x000334e1) popup_phob_thumbnail_window_g

0x6a53,	// (0x0002ab95) level_1_location

0x6a5b,	// (0x0002ab9d) level_2_location

0x6a63,	// (0x0002aba5) level_3_location

0x6a6b,	// (0x0002abad) level_4_location

0x3c19,	// (0x00027d5b) level_5_location

0x5a69,	// (0x00029bab) mce_icon_pane_g1

0x5a73,	// (0x00029bb5) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x000334e6) mce_icon_pane_g

0x5a7b,	// (0x00029bbd) main_mup_pane_g1_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g1

0x5a7b,	// (0x00029bbd) main_mup_pane_g2_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g2

0x5a7b,	// (0x00029bbd) main_mup_pane_g3_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g3

0x5a7b,	// (0x00029bbd) main_mup_pane_g4_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g4

0x5a7b,	// (0x00029bbd) main_mup_pane_g5_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g5

0x5a7b,	// (0x00029bbd) main_mup_pane_g6_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g6

0x5a7b,	// (0x00029bbd) main_mup_pane_g7_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g7

0x5a7b,	// (0x00029bbd) main_mup_pane_g8_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g8

0x5a7b,	// (0x00029bbd) main_mup_pane_g9_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g9

0x5a7b,	// (0x00029bbd) main_mup_pane_g10_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g10

0x5a7b,	// (0x00029bbd) main_mup_pane_g11_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g11

0x337b,	// (0x000274bd) main_mup_pane_g12_ParamLimits

0x337b,	// (0x000274bd) main_mup_pane_g12

0x5a7b,	// (0x00029bbd) main_mup_pane_g13_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x000334eb) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x000334eb) main_mup_pane_g

0x5a89,	// (0x00029bcb) main_mup_pane_t1_ParamLimits

0x5a89,	// (0x00029bcb) main_mup_pane_t1

0x5a89,	// (0x00029bcb) main_mup_pane_t2_ParamLimits

0x5a89,	// (0x00029bcb) main_mup_pane_t2

0x5a89,	// (0x00029bcb) main_mup_pane_t3_ParamLimits

0x5a89,	// (0x00029bcb) main_mup_pane_t3

0x3c82,	// (0x00027dc4) main_mup_pane_t4_ParamLimits

0x3c82,	// (0x00027dc4) main_mup_pane_t4

0x3c82,	// (0x00027dc4) main_mup_pane_t5_ParamLimits

0x3c82,	// (0x00027dc4) main_mup_pane_t5

0x5a9d,	// (0x00029bdf) main_mup_pane_t6_ParamLimits

0x5a9d,	// (0x00029bdf) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x00033506) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x00033506) main_mup_pane_t

0x336d,	// (0x000274af) mup_progress_pane_ParamLimits

0x336d,	// (0x000274af) mup_progress_pane

0x5ab1,	// (0x00029bf3) mup_visualizer_pane_ParamLimits

0x5ab1,	// (0x00029bf3) mup_visualizer_pane

0x5ab1,	// (0x00029bf3) mup_volume_pane_ParamLimits

0x5ab1,	// (0x00029bf3) mup_volume_pane

0x3389,	// (0x000274cb) mup_visualizer_pane_g1_ParamLimits

0x3389,	// (0x000274cb) mup_visualizer_pane_g1

0x5abf,	// (0x00029c01) mup_visualizer_pane_g2_ParamLimits

0x5abf,	// (0x00029c01) mup_visualizer_pane_g2

0x337b,	// (0x000274bd) mup_visualizer_pane_g3_ParamLimits

0x337b,	// (0x000274bd) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x00033513) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x00033513) mup_visualizer_pane_g

0x3e06,	// (0x00027f48) mup_volume_pane_g1

0x3e06,	// (0x00027f48) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x0003351a) mup_volume_pane_g

0x3e06,	// (0x00027f48) mup_progress_pane_g1

0x3e06,	// (0x00027f48) mup_progress_pane_g2

0x3e06,	// (0x00027f48) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x0003351f) mup_progress_pane_g

0x3097,	// (0x000271d9) bg_popup_window_pane_cp05

0x5acd,	// (0x00029c0f) heading_pane_cp02_ParamLimits

0x5acd,	// (0x00029c0f) heading_pane_cp02

0x5ae7,	// (0x00029c29) list_popup_blid_pane

0x5aef,	// (0x00029c31) list_blid_sat_info_pane_ParamLimits

0x5aef,	// (0x00029c31) list_blid_sat_info_pane

0x5b02,	// (0x00029c44) list_blid_sat_info_pane_g1

0x5b0a,	// (0x00029c4c) list_blid_sat_info_pane_t1

0x5c10,	// (0x00029d52) mup_equalizer_pane_ParamLimits

0x5c10,	// (0x00029d52) mup_equalizer_pane

0x5c29,	// (0x00029d6b) mup_equalizer_pane_cp1_ParamLimits

0x5c29,	// (0x00029d6b) mup_equalizer_pane_cp1

0x5c46,	// (0x00029d88) mup_equalizer_pane_cp2_ParamLimits

0x5c46,	// (0x00029d88) mup_equalizer_pane_cp2

0x5c63,	// (0x00029da5) mup_equalizer_pane_cp3_ParamLimits

0x5c63,	// (0x00029da5) mup_equalizer_pane_cp3

0x5c84,	// (0x00029dc6) mup_equalizer_pane_cp4_ParamLimits

0x5c84,	// (0x00029dc6) mup_equalizer_pane_cp4

0x5ca5,	// (0x00029de7) mup_equalizer_pane_cp5

0x5cb9,	// (0x00029dfb) mup_equalizer_pane_cp6

0x5ccd,	// (0x00029e0f) mup_equalizer_pane_cp7

0xbfb2,	// (0x000300f4) bg_popup_call_poc_act_pane_g9

0xbfba,	// (0x000300fc) bg_popup_call_poc_act_pane_g10

0xbfc2,	// (0x00030104) bg_popup_call_poc_act_pane_g11

0x000a,

0x32f2,	// (0x00027434) mup_scale_pane

0x330a,	// (0x0002744c) mup_scale_pane_g1

0x5ce1,	// (0x00029e23) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x0003353b) mup_scale_pane_g

0x5d17,	// (0x00029e59) msg_data_pane

0x5d1f,	// (0x00029e61) scroll_pane_cp017

0x5d27,	// (0x00029e69) bg_list_pane_cp04_ParamLimits

0x5d27,	// (0x00029e69) bg_list_pane_cp04

0x5d47,	// (0x00029e89) msg_data_pane_g1

0x5d4f,	// (0x00029e91) msg_data_pane_g2

0x5d57,	// (0x00029e99) msg_data_pane_g3

0x5d5f,	// (0x00029ea1) msg_data_pane_g4

0x5d67,	// (0x00029ea9) msg_data_pane_g5

0x5d6f,	// (0x00029eb1) msg_data_pane_g6

0x5d77,	// (0x00029eb9) msg_data_pane_g7

0x0006,

0xf408,	// (0x0003354a) msg_data_pane_g

0x5d7f,	// (0x00029ec1) msg_text_pane_ParamLimits

0x5d7f,	// (0x00029ec1) msg_text_pane

0x5dad,	// (0x00029eef) qrid_highlight_pane_cp011_ParamLimits

0x5dad,	// (0x00029eef) qrid_highlight_pane_cp011

0x3097,	// (0x000271d9) msg_body_pane

0x3097,	// (0x000271d9) msg_header_pane

0x5dcc,	// (0x00029f0e) input_focus_pane_cp07

0x5def,	// (0x00029f31) msg_header_pane_t1_ParamLimits

0x5def,	// (0x00029f31) msg_header_pane_t1

0x5e05,	// (0x00029f47) msg_header_pane_t2_ParamLimits

0x5e05,	// (0x00029f47) msg_header_pane_t2

0x0001,

0xf41c,	// (0x0003355e) msg_header_pane_t_ParamLimits

0xf41c,	// (0x0003355e) msg_header_pane_t

0x5e1c,	// (0x00029f5e) msg_body_pane_g1

0x5e24,	// (0x00029f66) msg_body_pane_t1_ParamLimits

0x5e24,	// (0x00029f66) msg_body_pane_t1

0x5e55,	// (0x00029f97) msg_body_pane_t2_ParamLimits

0x5e55,	// (0x00029f97) msg_body_pane_t2

0x5e67,	// (0x00029fa9) msg_body_pane_t3_ParamLimits

0x5e67,	// (0x00029fa9) msg_body_pane_t3

0x0002,

0xf421,	// (0x00033563) msg_body_pane_t_ParamLimits

0xf421,	// (0x00033563) msg_body_pane_t

0x1c15,	// (0x00025d57) main_viewer_pane_g1_ParamLimits

0x1c15,	// (0x00025d57) main_viewer_pane_g1

0x1c23,	// (0x00025d65) main_viewer_pane_g2_ParamLimits

0x1c23,	// (0x00025d65) main_viewer_pane_g2

0x5e97,	// (0x00029fd9) main_viewer_pane_g3_ParamLimits

0x5e97,	// (0x00029fd9) main_viewer_pane_g3

0x5ea6,	// (0x00029fe8) main_viewer_pane_g4_ParamLimits

0x5ea6,	// (0x00029fe8) main_viewer_pane_g4

0xb335,	// (0x0002f477) main_viewer_pane_g5_ParamLimits

0xb335,	// (0x0002f477) main_viewer_pane_g5

0xb335,	// (0x0002f477) main_viewer_pane_g7_ParamLimits

0xb335,	// (0x0002f477) main_viewer_pane_g7

0x5154,	// (0x00029296) main_viewer_pane_g8_ParamLimits

0x5154,	// (0x00029296) main_viewer_pane_g8

0x0007,

0xf431,	// (0x00033573) main_viewer_pane_g_ParamLimits

0xf431,	// (0x00033573) main_viewer_pane_g

0x5eb5,	// (0x00029ff7) viewer_content_pane_ParamLimits

0x5eb5,	// (0x00029ff7) viewer_content_pane

0x5ef0,	// (0x0002a032) main_postcard_pane_g1_ParamLimits

0x5ef0,	// (0x0002a032) main_postcard_pane_g1

0x5f06,	// (0x0002a048) main_postcard_pane_g2_ParamLimits

0x5f06,	// (0x0002a048) main_postcard_pane_g2

0x5f1c,	// (0x0002a05e) main_postcard_pane_g3_ParamLimits

0x5f1c,	// (0x0002a05e) main_postcard_pane_g3

0x0005,

0xf442,	// (0x00033584) main_postcard_pane_g_ParamLimits

0xf442,	// (0x00033584) main_postcard_pane_g

0x5f33,	// (0x0002a075) main_postcard_pane_g4

0xc18a,	// (0x000302cc) smil_status_volume_pane_g2

0x5f76,	// (0x0002a0b8) postcard_pane_ParamLimits

0x5f76,	// (0x0002a0b8) postcard_pane

0x5fb8,	// (0x0002a0fa) postcard_pane_g1_ParamLimits

0x5fb8,	// (0x0002a0fa) postcard_pane_g1

0x5fc6,	// (0x0002a108) postcard_pane_g2_ParamLimits

0x5fc6,	// (0x0002a108) postcard_pane_g2

0x5fd2,	// (0x0002a114) postcard_pane_g3_ParamLimits

0x5fd2,	// (0x0002a114) postcard_pane_g3

0x5fde,	// (0x0002a120) postcard_pane_g4_ParamLimits

0x5fde,	// (0x0002a120) postcard_pane_g4

0x5fec,	// (0x0002a12e) postcard_pane_g5_ParamLimits

0x5fec,	// (0x0002a12e) postcard_pane_g5

0x6001,	// (0x0002a143) postcard_pane_g6_ParamLimits

0x6001,	// (0x0002a143) postcard_pane_g6

0x5fb8,	// (0x0002a0fa) postcard_pane_g7_ParamLimits

0x5fb8,	// (0x0002a0fa) postcard_pane_g7

0x0006,

0xf44f,	// (0x00033591) postcard_pane_g_ParamLimits

0xf44f,	// (0x00033591) postcard_pane_g

0x6015,	// (0x0002a157) main_mp2_pane_g1_ParamLimits

0x6015,	// (0x0002a157) main_mp2_pane_g1

0x6021,	// (0x0002a163) main_mp2_pane_g2_ParamLimits

0x6021,	// (0x0002a163) main_mp2_pane_g2

0x602d,	// (0x0002a16f) main_mp2_pane_g3_ParamLimits

0x602d,	// (0x0002a16f) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x000335a0) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x000335a0) main_mp2_pane_g

0x6039,	// (0x0002a17b) main_mp2_pane_t1_ParamLimits

0x6039,	// (0x0002a17b) main_mp2_pane_t1

0x604e,	// (0x0002a190) main_mp2_pane_t2_ParamLimits

0x604e,	// (0x0002a190) main_mp2_pane_t2

0x6060,	// (0x0002a1a2) main_mp2_pane_t3_ParamLimits

0x6060,	// (0x0002a1a2) main_mp2_pane_t3

0x0002,

0xf465,	// (0x000335a7) main_mp2_pane_t_ParamLimits

0xf465,	// (0x000335a7) main_mp2_pane_t

0x6072,	// (0x0002a1b4) pec_content_pane_ParamLimits

0x6072,	// (0x0002a1b4) pec_content_pane

0x43d8,	// (0x0002851a) scroll_pane_cp015

0x6084,	// (0x0002a1c6) pec_attribute_pane_ParamLimits

0x6084,	// (0x0002a1c6) pec_attribute_pane

0x6094,	// (0x0002a1d6) pec_content_pane_g1_ParamLimits

0x6094,	// (0x0002a1d6) pec_content_pane_g1

0x60a0,	// (0x0002a1e2) pec_content_pane_t1_ParamLimits

0x60a0,	// (0x0002a1e2) pec_content_pane_t1

0x60b2,	// (0x0002a1f4) pec_content_pane_t2_ParamLimits

0x60b2,	// (0x0002a1f4) pec_content_pane_t2

0x0001,

0xf46c,	// (0x000335ae) pec_content_pane_t_ParamLimits

0xf46c,	// (0x000335ae) pec_content_pane_t

0x60c4,	// (0x0002a206) list_single_graphic_pane_cp01_ParamLimits

0x60c4,	// (0x0002a206) list_single_graphic_pane_cp01

0x32f2,	// (0x00027434) bg_popup_sub_pane_cp04

0x60da,	// (0x0002a21c) popup_mup_playback_window_g1

0x60e6,	// (0x0002a228) popup_mup_playback_window_t1

0x60fb,	// (0x0002a23d) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x000335b3) popup_mup_playback_window_t

0x6150,	// (0x0002a292) main_image_pane_g1_ParamLimits

0x6150,	// (0x0002a292) main_image_pane_g1

0x622d,	// (0x0002a36f) scroll_pane_cp018_ParamLimits

0x622d,	// (0x0002a36f) scroll_pane_cp018

0x6245,	// (0x0002a387) scroll_pane_cp016_ParamLimits

0x6245,	// (0x0002a387) scroll_pane_cp016

0x6279,	// (0x0002a3bb) smil2_image_pane_ParamLimits

0x6279,	// (0x0002a3bb) smil2_image_pane

0x62a9,	// (0x0002a3eb) smil2_root_pane_ParamLimits

0x62a9,	// (0x0002a3eb) smil2_root_pane

0x62e1,	// (0x0002a423) smil2_text_pane_ParamLimits

0x62e1,	// (0x0002a423) smil2_text_pane

0x3097,	// (0x000271d9) bg_list_pane_cp06

0x6369,	// (0x0002a4ab) grid_radio_pane

0x3097,	// (0x000271d9) bg_popup_window_pane_cp06

0x6371,	// (0x0002a4b3) main_fmradio_pane_t1

0xc00a,	// (0x0003014c) heading_pane_cp04

0x637f,	// (0x0002a4c1) main_fmradio_pane_t2

0xc012,	// (0x00030154) popup_cale_lunar_info_window_g1

0x638d,	// (0x0002a4cf) main_fmradio_pane_t3

0xc01a,	// (0x0003015c) popup_cale_lunar_info_window_g2

0x639b,	// (0x0002a4dd) main_fmradio_pane_t4

0x0001,

0x63a9,	// (0x0002a4eb) main_fmradio_pane_t5

0x0004,

0xf564,	// (0x000336a6) popup_cale_lunar_info_window_g

0xf486,	// (0x000335c8) main_fmradio_pane_t

0x63b7,	// (0x0002a4f9) wait_bar_pane_cp03

0x63bf,	// (0x0002a501) cell_fmradio_pane_ParamLimits

0x63bf,	// (0x0002a501) cell_fmradio_pane

0x5fb8,	// (0x0002a0fa) cell_fmradio_pane_g1_ParamLimits

0x5fb8,	// (0x0002a0fa) cell_fmradio_pane_g1

0x3097,	// (0x000271d9) grid_highlight_pane_cp011

0x63d2,	// (0x0002a514) poc_content_pane_ParamLimits

0x63d2,	// (0x0002a514) poc_content_pane

0x63e4,	// (0x0002a526) scroll_pane_cp019

0x63ec,	// (0x0002a52e) popup_call_poc_act_window_ParamLimits

0x63ec,	// (0x0002a52e) popup_call_poc_act_window

0x6410,	// (0x0002a552) popup_call_poc_inact_window_ParamLimits

0x6410,	// (0x0002a552) popup_call_poc_inact_window

0xf528,	// (0x0003366a) bg_popup_call_poc_act_pane_g

0xbfca,	// (0x0003010c) bg_popup_call_poc_inact_pane_g1

0xbfd2,	// (0x00030114) bg_popup_call_poc_inact_pane_g2

0x6429,	// (0x0002a56b) popup_call_poc_act_window_g2

0xbfda,	// (0x0003011c) bg_popup_call_poc_inact_pane_g3

0xbf5a,	// (0x0003009c) bg_popup_call_poc_inact_pane_g4

0xbfe2,	// (0x00030124) bg_popup_call_poc_inact_pane_g5

0x6431,	// (0x0002a573) popup_call_poc_act_window_t1_ParamLimits

0x6431,	// (0x0002a573) popup_call_poc_act_window_t1

0x6459,	// (0x0002a59b) popup_call_poc_act_window_t2_ParamLimits

0x6459,	// (0x0002a59b) popup_call_poc_act_window_t2

0x6481,	// (0x0002a5c3) popup_call_poc_act_window_t3_ParamLimits

0x6481,	// (0x0002a5c3) popup_call_poc_act_window_t3

0x64a9,	// (0x0002a5eb) popup_call_poc_act_window_t4_ParamLimits

0x64a9,	// (0x0002a5eb) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x000335d3) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x000335d3) popup_call_poc_act_window_t

0xbfea,	// (0x0003012c) bg_popup_call_poc_inact_pane_g6

0xbff2,	// (0x00030134) bg_popup_call_poc_inact_pane_g7

0xbffa,	// (0x0003013c) bg_popup_call_poc_inact_pane_g8

0x64bb,	// (0x0002a5fd) popup_call_poc_inact_window_g2

0xc002,	// (0x00030144) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf53f,	// (0x00033681) bg_popup_call_poc_inact_pane_g

0x64c3,	// (0x0002a605) popup_call_poc_inact_window_t1_ParamLimits

0x64c3,	// (0x0002a605) popup_call_poc_inact_window_t1

0x64d8,	// (0x0002a61a) popup_call_poc_inact_window_t2_ParamLimits

0x64d8,	// (0x0002a61a) popup_call_poc_inact_window_t2

0x64ed,	// (0x0002a62f) popup_call_poc_inact_window_t3_ParamLimits

0x64ed,	// (0x0002a62f) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x000335dc) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x000335dc) popup_call_poc_inact_window_t

0xc102,	// (0x00030244) context_pane_ParamLimits

0x6c7b,	// (0x0002adbd) signal_pane_ParamLimits

0x3c19,	// (0x00027d5b) main_call2_pane

0xc0db,	// (0x0003021d) popup_phob_thumbnail2_window_ParamLimits

0xc0db,	// (0x0003021d) popup_phob_thumbnail2_window

0xb31d,	// (0x0002f45f) aid_hotspot_pointer_arrow_pane

0xb325,	// (0x0002f467) aid_hotspot_pointer_hand_pane

0x6a1d,	// (0x0002ab5f) phob_pre_status_pane_g5

0x3314,	// (0x00027456) cams_zoom_pane_ParamLimits

0x3314,	// (0x00027456) image_vga_pane_ParamLimits

0x337b,	// (0x000274bd) main_camera_pane_g1_ParamLimits

0x337b,	// (0x000274bd) main_camera_pane_g2_ParamLimits

0x337b,	// (0x000274bd) main_camera_pane_g3_ParamLimits

0x337b,	// (0x000274bd) main_camera_pane_g4_ParamLimits

0x337b,	// (0x000274bd) main_camera_pane_g5_ParamLimits

0x337b,	// (0x000274bd) main_camera_pane_g6_ParamLimits

0x337b,	// (0x000274bd) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00033307) main_camera_pane_g_ParamLimits

0x3c82,	// (0x00027dc4) main_camera_pane_t1_ParamLimits

0x3c82,	// (0x00027dc4) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00033318) main_camera_pane_t_ParamLimits

0x32f2,	// (0x00027434) bg_popup_preview_window_pane_cp01_ParamLimits

0x32f2,	// (0x00027434) bg_popup_preview_window_pane_cp01

0x6502,	// (0x0002a644) popup_phob_thumbnail2_window_g1_ParamLimits

0x6502,	// (0x0002a644) popup_phob_thumbnail2_window_g1

0x3097,	// (0x000271d9) call2_cli_visual_pane

0x6529,	// (0x0002a66b) popup_call2_audio_conf_window_ParamLimits

0x6529,	// (0x0002a66b) popup_call2_audio_conf_window

0x6549,	// (0x0002a68b) popup_call2_audio_first_window_ParamLimits

0x6549,	// (0x0002a68b) popup_call2_audio_first_window

0x65df,	// (0x0002a721) popup_call2_audio_in_window_ParamLimits

0x65df,	// (0x0002a721) popup_call2_audio_in_window

0x6627,	// (0x0002a769) popup_call2_audio_out_window_ParamLimits

0x6627,	// (0x0002a769) popup_call2_audio_out_window

0x6691,	// (0x0002a7d3) popup_call2_audio_second_window_ParamLimits

0x6691,	// (0x0002a7d3) popup_call2_audio_second_window

0x66f7,	// (0x0002a839) popup_call2_audio_wait_window_ParamLimits

0x66f7,	// (0x0002a839) popup_call2_audio_wait_window

0x3097,	// (0x000271d9) bg_popup_call2_act_pane_cp03

0x32d4,	// (0x00027416) list_conf_pane_cp

0x6731,	// (0x0002a873) popup_call2_audio_conf_window_t1

0x673f,	// (0x0002a881) list_single_graphic_popup_conf2_pane_ParamLimits

0x673f,	// (0x0002a881) list_single_graphic_popup_conf2_pane

0x544d,	// (0x0002958f) list_highlight_pane_cp04

0x6752,	// (0x0002a894) list_single_graphic_popup_conf2_pane_g1

0x545e,	// (0x000295a0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x000335e3) list_single_graphic_popup_conf2_pane_g

0x675c,	// (0x0002a89e) list_single_graphic_popup_conf2_pane_t1

0x676a,	// (0x0002a8ac) bg_popup_call2_act_pane_cp01_ParamLimits

0x676a,	// (0x0002a8ac) bg_popup_call2_act_pane_cp01

0x67f4,	// (0x0002a936) call_type_pane_cp05_ParamLimits

0x67f4,	// (0x0002a936) call_type_pane_cp05

0x6848,	// (0x0002a98a) popup_call2_audio_second_window_g1_ParamLimits

0x6848,	// (0x0002a98a) popup_call2_audio_second_window_g1

0x689c,	// (0x0002a9de) popup_call2_audio_second_window_g2_ParamLimits

0x689c,	// (0x0002a9de) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x000335e8) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x000335e8) popup_call2_audio_second_window_g

0xb364,	// (0x0002f4a6) popup_call2_audio_second_window_t1_ParamLimits

0xb364,	// (0x0002f4a6) popup_call2_audio_second_window_t1

0xb41f,	// (0x0002f561) popup_call2_audio_second_window_t2_ParamLimits

0xb41f,	// (0x0002f561) popup_call2_audio_second_window_t2

0xb472,	// (0x0002f5b4) popup_call2_audio_second_window_t3_ParamLimits

0xb472,	// (0x0002f5b4) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x000335ef) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x000335ef) popup_call2_audio_second_window_t

0x3097,	// (0x000271d9) bg_popup_call2_in_pane_cp02

0x30a1,	// (0x000271e3) call_type_pane_cp04

0x68f0,	// (0x0002aa32) popup_call2_audio_wait_window_g1

0x68f8,	// (0x0002aa3a) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x000335f8) popup_call2_audio_wait_window_g

0x30b9,	// (0x000271fb) popup_call2_audio_wait_window_t3

0xb565,	// (0x0002f6a7) bg_popup_call2_act_pane_ParamLimits

0xb565,	// (0x0002f6a7) bg_popup_call2_act_pane

0xb625,	// (0x0002f767) call_type_pane_cp03_ParamLimits

0xb625,	// (0x0002f767) call_type_pane_cp03

0xb689,	// (0x0002f7cb) popup_call2_audio_first_window_g1_ParamLimits

0xb689,	// (0x0002f7cb) popup_call2_audio_first_window_g1

0xb6f9,	// (0x0002f83b) popup_call2_audio_first_window_g2_ParamLimits

0xb6f9,	// (0x0002f83b) popup_call2_audio_first_window_g2

0xb75d,	// (0x0002f89f) popup_call2_audio_first_window_g3_ParamLimits

0xb75d,	// (0x0002f89f) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x000335fd) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x000335fd) popup_call2_audio_first_window_g

0xb7e5,	// (0x0002f927) popup_call2_audio_first_window_t1_ParamLimits

0xb7e5,	// (0x0002f927) popup_call2_audio_first_window_t1

0xb8e8,	// (0x0002fa2a) popup_call2_audio_first_window_t4_ParamLimits

0xb8e8,	// (0x0002fa2a) popup_call2_audio_first_window_t4

0xb9cb,	// (0x0002fb0d) popup_call2_audio_first_window_t5_ParamLimits

0xb9cb,	// (0x0002fb0d) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x00033608) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x00033608) popup_call2_audio_first_window_t

0x32ea,	// (0x0002742c) bg_popup_call2_act_pane_g1

0xc022,	// (0x00030164) popup_cale_lunar_info_window_t1

0xc030,	// (0x00030172) popup_cale_lunar_info_window_t2

0xc03e,	// (0x00030180) popup_cale_lunar_info_window_t3

0x3097,	// (0x000271d9) bg_popup_call2_bubble_pane

0xbacc,	// (0x0002fc0e) bg_popup_call2_in_pane_cp01_ParamLimits

0xbacc,	// (0x0002fc0e) bg_popup_call2_in_pane_cp01

0x2d4f,	// (0x00026e91) call_type_pane_cp02

0x6900,	// (0x0002aa42) popup_call2_audio_out_window_g1_ParamLimits

0x6900,	// (0x0002aa42) popup_call2_audio_out_window_g1

0xbb14,	// (0x0002fc56) popup_call2_audio_out_window_g2_ParamLimits

0xbb14,	// (0x0002fc56) popup_call2_audio_out_window_g2

0x692c,	// (0x0002aa6e) popup_call2_audio_out_window_g3_ParamLimits

0x692c,	// (0x0002aa6e) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x00033611) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x00033611) popup_call2_audio_out_window_g

0xbb4b,	// (0x0002fc8d) popup_call2_audio_out_window_t1_ParamLimits

0xbb4b,	// (0x0002fc8d) popup_call2_audio_out_window_t1

0xbbaa,	// (0x0002fcec) popup_call2_audio_out_window_t2_ParamLimits

0xbbaa,	// (0x0002fcec) popup_call2_audio_out_window_t2

0xbbfe,	// (0x0002fd40) popup_call2_audio_out_window_t3_ParamLimits

0xbbfe,	// (0x0002fd40) popup_call2_audio_out_window_t3

0xbc14,	// (0x0002fd56) popup_call2_audio_out_window_t4_ParamLimits

0xbc14,	// (0x0002fd56) popup_call2_audio_out_window_t4

0xbc2a,	// (0x0002fd6c) popup_call2_audio_out_window_t5_ParamLimits

0xbc2a,	// (0x0002fd6c) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x0003361a) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x0003361a) popup_call2_audio_out_window_t

0xbc8e,	// (0x0002fdd0) bg_popup_call2_in_pane_ParamLimits

0xbc8e,	// (0x0002fdd0) bg_popup_call2_in_pane

0xbcea,	// (0x0002fe2c) popup_call2_audio_in_window_g1_ParamLimits

0xbcea,	// (0x0002fe2c) popup_call2_audio_in_window_g1

0xbd22,	// (0x0002fe64) popup_call2_audio_in_window_g2_ParamLimits

0xbd22,	// (0x0002fe64) popup_call2_audio_in_window_g2

0xbd5a,	// (0x0002fe9c) popup_call2_audio_in_window_g3_ParamLimits

0xbd5a,	// (0x0002fe9c) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x00033627) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x00033627) popup_call2_audio_in_window_g

0xbdb2,	// (0x0002fef4) popup_call2_audio_in_window_t1_ParamLimits

0xbdb2,	// (0x0002fef4) popup_call2_audio_in_window_t1

0xbe32,	// (0x0002ff74) popup_call2_audio_in_window_t2_ParamLimits

0xbe32,	// (0x0002ff74) popup_call2_audio_in_window_t2

0xbeb2,	// (0x0002fff4) popup_call2_audio_in_window_t3_ParamLimits

0xbeb2,	// (0x0002fff4) popup_call2_audio_in_window_t3

0xbecc,	// (0x0003000e) popup_call2_audio_in_window_t4_ParamLimits

0xbecc,	// (0x0003000e) popup_call2_audio_in_window_t4

0xbede,	// (0x00030020) popup_call2_audio_in_window_t5_ParamLimits

0xbede,	// (0x00030020) popup_call2_audio_in_window_t5

0xbef0,	// (0x00030032) popup_call2_audio_in_window_t6_ParamLimits

0xbef0,	// (0x00030032) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x00033630) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x00033630) popup_call2_audio_in_window_t

0x32ea,	// (0x0002742c) bg_popup_call2_in_pane_g1

0xc04c,	// (0x0003018e) popup_cale_lunar_info_window_t4

0x0003,

0xf569,	// (0x000336ab) popup_cale_lunar_info_window_t

0x32f2,	// (0x00027434) bg_popup_call2_rect_pane_ParamLimits

0x32f2,	// (0x00027434) bg_popup_call2_rect_pane

0x3097,	// (0x000271d9) call2_cli_visual_graphic_pane

0x3097,	// (0x000271d9) call2_cli_visual_text_pane

0xc19d,	// (0x000302df) smil_status_volume_pane_g3

0x0002,

0x330a,	// (0x0002744c) call2_cli_visual_graphic_pane_g1

0x330a,	// (0x0002744c) call2_cli_visual_graphic_pane_g2

0x330a,	// (0x0002744c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x0003363d) call2_cli_visual_graphic_pane_g

0xbf02,	// (0x00030044) bg_popup_call2_rect_pane_g1

0x3670,	// (0x000277b2) bg_popup_call2_rect_pane_g2

0xbf0a,	// (0x0003004c) bg_popup_call2_rect_pane_g3

0xbf12,	// (0x00030054) bg_popup_call2_rect_pane_g4

0xbf1a,	// (0x0003005c) bg_popup_call2_rect_pane_g5

0xbf22,	// (0x00030064) bg_popup_call2_rect_pane_g6

0xbf2a,	// (0x0003006c) bg_popup_call2_rect_pane_g7

0xbf32,	// (0x00030074) bg_popup_call2_rect_pane_g8

0xbf3a,	// (0x0003007c) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x00033644) bg_popup_call2_rect_pane_g

0xbf42,	// (0x00030084) bg_popup_call2_bubble_pane_g1

0xbf4a,	// (0x0003008c) bg_popup_call2_bubble_pane_g2

0xbf52,	// (0x00030094) bg_popup_call2_bubble_pane_g3

0xbf5a,	// (0x0003009c) bg_popup_call2_bubble_pane_g4

0xbf62,	// (0x000300a4) bg_popup_call2_bubble_pane_g5

0xbf6a,	// (0x000300ac) bg_popup_call2_bubble_pane_g6

0xbf72,	// (0x000300b4) bg_popup_call2_bubble_pane_g7

0xbf7a,	// (0x000300bc) bg_popup_call2_bubble_pane_g8

0xbf82,	// (0x000300c4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x00033657) bg_popup_call2_bubble_pane_g

0x3702,	// (0x00027844) aid_cale_week_size_cell_pane

0x3c96,	// (0x00027dd8) aid_cams_cif_uncrop_pane_ParamLimits

0x3c96,	// (0x00027dd8) aid_cams_cif_uncrop_pane

0x3e10,	// (0x00027f52) aid_cams_size_cell_ParamLimits

0x3e10,	// (0x00027f52) aid_cams_size_cell

0x3e24,	// (0x00027f66) grid_cams_pane_ParamLimits

0x3e3e,	// (0x00027f80) linegrid_cams_pane_ParamLimits

0x3f73,	// (0x000280b5) call_video_pane_t1

0x3f91,	// (0x000280d3) call_video_pane_t2

0x0001,

0xf222,	// (0x00033364) call_video_pane_t

0x461b,	// (0x0002875d) aid_cale_month_size_cell_pane_ParamLimits

0x461b,	// (0x0002875d) aid_cale_month_size_cell_pane

0xf5ad,	// (0x000336ef) smil_status_volume_pane_g

0xc1aa,	// (0x000302ec) volume_smil_pane_ParamLimits

0xb14c,	// (0x0002f28e) aid_popup2_width_pane

0x35c8,	// (0x0002770a) cell_qdial_pane_g4_ParamLimits

0x35c8,	// (0x0002770a) cell_qdial_pane_g4

0x5726,	// (0x00029868) aid_blid_cardinal_pane_ParamLimits

0x5732,	// (0x00029874) aid_blid_destination_pane_ParamLimits

0x5732,	// (0x00029874) aid_blid_destination_pane

0x32f2,	// (0x00027434) bg_popup_call_poc_act_pane_ParamLimits

0x32f2,	// (0x00027434) bg_popup_call_poc_act_pane

0x32f2,	// (0x00027434) bg_popup_call_poc_inact_pane_ParamLimits

0x32f2,	// (0x00027434) bg_popup_call_poc_inact_pane

0xbf8a,	// (0x000300cc) bg_popup_call_poc_act_pane_g1

0xbf92,	// (0x000300d4) bg_popup_call_poc_act_pane_g2

0xbf9a,	// (0x000300dc) bg_popup_call_poc_act_pane_g3

0xbf5a,	// (0x0003009c) bg_popup_call_poc_act_pane_g4

0xbf62,	// (0x000300a4) bg_popup_call_poc_act_pane_g5

0xbfa2,	// (0x000300e4) bg_popup_call_poc_act_pane_g6

0xbf72,	// (0x000300b4) bg_popup_call_poc_act_pane_g7

0xbfaa,	// (0x000300ec) bg_popup_call_poc_act_pane_g8

0x3097,	// (0x000271d9) main_usb_pane

0xc0b6,	// (0x000301f8) popup_cale_lunar_info_window

0x42bd,	// (0x000283ff) im_reading_pane_t1_ParamLimits

0x42f7,	// (0x00028439) list_im_pane_ParamLimits

0x4308,	// (0x0002844a) scroll_pane_cp07_ParamLimits

0x3097,	// (0x000271d9) grid_highlight_pane_cp012

0x32f2,	// (0x00027434) mup_scale_pane_ParamLimits

0x5fb8,	// (0x0002a0fa) main_usb_pane_g1_ParamLimits

0x5fb8,	// (0x0002a0fa) main_usb_pane_g1

0x697b,	// (0x0002aabd) main_usb_pane_g2_ParamLimits

0x697b,	// (0x0002aabd) main_usb_pane_g2

0x0001,

0xf552,	// (0x00033694) main_usb_pane_g_ParamLimits

0xf552,	// (0x00033694) main_usb_pane_g

0x6991,	// (0x0002aad3) main_usb_pane_t1_ParamLimits

0x6991,	// (0x0002aad3) main_usb_pane_t1

0x69a3,	// (0x0002aae5) main_usb_pane_t2_ParamLimits

0x69a3,	// (0x0002aae5) main_usb_pane_t2

0x69b5,	// (0x0002aaf7) main_usb_pane_t3_ParamLimits

0x69b5,	// (0x0002aaf7) main_usb_pane_t3

0x69c7,	// (0x0002ab09) main_usb_pane_t4_ParamLimits

0x69c7,	// (0x0002ab09) main_usb_pane_t4

0x69d9,	// (0x0002ab1b) main_usb_pane_t5_ParamLimits

0x69d9,	// (0x0002ab1b) main_usb_pane_t5

0x69eb,	// (0x0002ab2d) main_usb_pane_t6_ParamLimits

0x69eb,	// (0x0002ab2d) main_usb_pane_t6

0x0005,

0xf557,	// (0x00033699) main_usb_pane_t_ParamLimits

0x56d5,	// (0x00029817) aid_text_placing

0x56de,	// (0x00029820) main_location2_pane_t1_ParamLimits

0x56f0,	// (0x00029832) main_location2_pane_t2_ParamLimits

0x5702,	// (0x00029844) main_location2_pane_t3_ParamLimits

0x5714,	// (0x00029856) main_location2_pane_t4_ParamLimits

0x5714,	// (0x00029856) main_location2_pane_t4

0xf35e,	// (0x000334a0) main_location2_pane_t_ParamLimits

0x332e,	// (0x00027470) find_pinb_pane_g2_ParamLimits

0x332e,	// (0x00027470) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0003321c) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0003321c) find_pinb_pane_g

0x333a,	// (0x0002747c) find_pinb_pane_t1_ParamLimits

0x334c,	// (0x0002748e) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00033221) find_pinb_pane_t_ParamLimits

0x3097,	// (0x000271d9) main_call3_pane

0x4b41,	// (0x00028c83) cale_month_day_heading_pane_t1_ParamLimits

0x4b83,	// (0x00028cc5) cale_month_day_heading_pane_t2_ParamLimits

0x4bb8,	// (0x00028cfa) cale_month_day_heading_pane_t3_ParamLimits

0x4bed,	// (0x00028d2f) cale_month_day_heading_pane_t4_ParamLimits

0x4c2a,	// (0x00028d6c) cale_month_day_heading_pane_t5_ParamLimits

0x4c6f,	// (0x00028db1) cale_month_day_heading_pane_t6_ParamLimits

0x4cb4,	// (0x00028df6) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0003339c) cale_month_day_heading_pane_t_ParamLimits

0x4ef2,	// (0x00029034) smil_status_volume_pane

0x5f94,	// (0x0002a0d6) postcard_address_pane_ParamLimits

0x5f94,	// (0x0002a0d6) postcard_address_pane

0x5fa6,	// (0x0002a0e8) postcard_message_pane_ParamLimits

0x5fa6,	// (0x0002a0e8) postcard_message_pane

0x6958,	// (0x0002aa9a) call2_cli_visual_pane_t1_ParamLimits

0x6958,	// (0x0002aa9a) call2_cli_visual_pane_t1

0xc1d7,	// (0x00030319) postcard_message_pane_t1_ParamLimits

0xc1d7,	// (0x00030319) postcard_message_pane_t1

0xc1bf,	// (0x00030301) postcard_address_pane_t1_ParamLimits

0xc1bf,	// (0x00030301) postcard_address_pane_t1

0x6e2e,	// (0x0002af70) popup_call3_audio_in_window_ParamLimits

0x6e2e,	// (0x0002af70) popup_call3_audio_in_window

0x6cb9,	// (0x0002adfb) bg_popup_call3_in_pane_ParamLimits

0x6cb9,	// (0x0002adfb) bg_popup_call3_in_pane

0x6d2f,	// (0x0002ae71) popup_call3_audio_in_window_g1_ParamLimits

0x6d2f,	// (0x0002ae71) popup_call3_audio_in_window_g1

0x6d4f,	// (0x0002ae91) popup_call3_audio_in_window_g2_ParamLimits

0x6d4f,	// (0x0002ae91) popup_call3_audio_in_window_g2

0x6d6f,	// (0x0002aeb1) popup_call3_audio_in_window_g3_ParamLimits

0x6d6f,	// (0x0002aeb1) popup_call3_audio_in_window_g3

0x0003,

0xf5b4,	// (0x000336f6) popup_call3_audio_in_window_g_ParamLimits

0xf5b4,	// (0x000336f6) popup_call3_audio_in_window_g

0x6da0,	// (0x0002aee2) popup_call3_audio_in_window_t1_ParamLimits

0x6da0,	// (0x0002aee2) popup_call3_audio_in_window_t1

0x6dde,	// (0x0002af20) popup_call3_audio_in_window_t2_ParamLimits

0x6dde,	// (0x0002af20) popup_call3_audio_in_window_t2

0x6e1c,	// (0x0002af5e) popup_call3_audio_in_window_t3_ParamLimits

0x6e1c,	// (0x0002af5e) popup_call3_audio_in_window_t3

0x0002,

0xf5bd,	// (0x000336ff) popup_call3_audio_in_window_t_ParamLimits

0xf5bd,	// (0x000336ff) popup_call3_audio_in_window_t

0x3c19,	// (0x00027d5b) bg_popup_call3_rect_pane

0xbf02,	// (0x00030044) bg_popup_call3_rect_pane_g1

0x3670,	// (0x000277b2) bg_popup_call3_rect_pane_g2

0xbf0a,	// (0x0003004c) bg_popup_call3_rect_pane_g3

0xbf12,	// (0x00030054) bg_popup_call3_rect_pane_g4

0xbf1a,	// (0x0003005c) bg_popup_call3_rect_pane_g5

0xbf22,	// (0x00030064) bg_popup_call3_rect_pane_g6

0xbf2a,	// (0x0003006c) bg_popup_call3_rect_pane_g7

0x2bdc,	// (0x00026d1e) mup_visualizer_osc_pane

0x2bdc,	// (0x00026d1e) mup_visualizer_spec_pane

0x6ce9,	// (0x0002ae2b) call3_video_qcif_pane_ParamLimits

0x6ce9,	// (0x0002ae2b) call3_video_qcif_pane

0x6cfc,	// (0x0002ae3e) call3_video_qcif_uncrop_pane_ParamLimits

0x6cfc,	// (0x0002ae3e) call3_video_qcif_uncrop_pane

0x6d0a,	// (0x0002ae4c) call3_video_subqcif_pane_ParamLimits

0x6d0a,	// (0x0002ae4c) call3_video_subqcif_pane

0x6d1e,	// (0x0002ae60) call3_video_subqcif_uncrop_pane_ParamLimits

0x6d1e,	// (0x0002ae60) call3_video_subqcif_uncrop_pane

0x6d8f,	// (0x0002aed1) popup_call3_audio_in_window_g4_ParamLimits

0x6d8f,	// (0x0002aed1) popup_call3_audio_in_window_g4

0x2bdc,	// (0x00026d1e) mup_spec_half_pane

0x2bdc,	// (0x00026d1e) mup_spec_half_pane_cp

0x2bdc,	// (0x00026d1e) mup_osc_middle_pane

0x3e06,	// (0x00027f48) mup_visualizer_osc_pane_g1

0xc150,	// (0x00030292) mup_spec_bar_pane_ParamLimits

0xc150,	// (0x00030292) mup_spec_bar_pane

0x3e06,	// (0x00027f48) mup_spec_bar_pane_g1

0x3e06,	// (0x00027f48) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x0003351a) mup_spec_bar_pane_g

0x3702,	// (0x00027844) aid_cale_week_size_cell_pane_ParamLimits

0x371c,	// (0x0002785e) bg_cale_heading_pane_ParamLimits

0x3734,	// (0x00027876) bg_cale_pane_cp01_ParamLimits

0x3751,	// (0x00027893) cale_week_corner_pane_ParamLimits

0x3770,	// (0x000278b2) cale_week_day_heading_pane_ParamLimits

0x378d,	// (0x000278cf) cale_week_scroll_pane_g1_ParamLimits

0x37a0,	// (0x000278e2) cale_week_scroll_pane_g2_ParamLimits

0x37b8,	// (0x000278fa) cale_week_scroll_pane_g3_ParamLimits

0x37d0,	// (0x00027912) cale_week_scroll_pane_g4_ParamLimits

0x37e8,	// (0x0002792a) cale_week_scroll_pane_g5_ParamLimits

0x3808,	// (0x0002794a) cale_week_scroll_pane_g6_ParamLimits

0x3828,	// (0x0002796a) cale_week_scroll_pane_g7_ParamLimits

0x3848,	// (0x0002798a) cale_week_scroll_pane_g8_ParamLimits

0x386c,	// (0x000279ae) cale_week_scroll_pane_g9_ParamLimits

0x3884,	// (0x000279c6) cale_week_scroll_pane_g10_ParamLimits

0x389c,	// (0x000279de) cale_week_scroll_pane_g11_ParamLimits

0x38b4,	// (0x000279f6) cale_week_scroll_pane_g12_ParamLimits

0x38cc,	// (0x00027a0e) cale_week_scroll_pane_g13_ParamLimits

0x38cc,	// (0x00027a0e) cale_week_scroll_pane_g14_ParamLimits

0x38cc,	// (0x00027a0e) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x000332ad) cale_week_scroll_pane_g_ParamLimits

0x3908,	// (0x00027a4a) cale_week_time_pane_ParamLimits

0x392c,	// (0x00027a6e) grid_cale_week_pane_ParamLimits

0x3952,	// (0x00027a94) listscroll_cale_week_pane_t1

0x3964,	// (0x00027aa6) scroll_pane_cp08_ParamLimits

0x46a8,	// (0x000287ea) cale_month_corner_pane_ParamLimits

0x4ac2,	// (0x00028c04) cale_month_pane_t1

0x4ad4,	// (0x00028c16) cale_month_week_pane_ParamLimits

0x5349,	// (0x0002948b) popup_call_status_window_g1_ParamLimits

0x535d,	// (0x0002949f) popup_call_status_window_g2_ParamLimits

0x5371,	// (0x000294b3) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x00033427) popup_call_status_window_g_ParamLimits

0x53d9,	// (0x0002951b) aid_call2_pane

0x5dd5,	// (0x00029f17) msg_header_pane_g1

0x5f94,	// (0x0002a0d6) postcard_address2_pane_ParamLimits

0x5f94,	// (0x0002a0d6) postcard_address2_pane

0x5fa6,	// (0x0002a0e8) postcard_message2_pane_ParamLimits

0x5fa6,	// (0x0002a0e8) postcard_message2_pane

0x6c89,	// (0x0002adcb) message2_row_pane_ParamLimits

0x6c89,	// (0x0002adcb) message2_row_pane

0x6ca6,	// (0x0002ade8) address2_row_pane_ParamLimits

0x6ca6,	// (0x0002ade8) address2_row_pane

0xc11d,	// (0x0003025f) postcard_message2_row_pane_g1

0xc125,	// (0x00030267) postcard_message2_row_pane_t1

0xc11d,	// (0x0003025f) address2_row_pane_g1

0xc125,	// (0x00030267) address2_row_pane_t1

0x3c11,	// (0x00027d53) aid_size_cell_vorec

0x3097,	// (0x000271d9) main_rss_pane

0xc133,	// (0x00030275) rss_list_single_pane_ParamLimits

0xc133,	// (0x00030275) rss_list_single_pane

0xc141,	// (0x00030283) rss_list_single_pane_t1

0xc141,	// (0x00030283) rss_list_single_pane_t2

0x0001,

0xf5a8,	// (0x000336ea) rss_list_single_pane_t

0x3097,	// (0x000271d9) main_camera2_pane

0x3097,	// (0x000271d9) main_video2_pane

0xc1f3,	// (0x00030335) cams_zoom_pane_cp2_ParamLimits

0xc1f3,	// (0x00030335) cams_zoom_pane_cp2

0xc1f3,	// (0x00030335) image2_vga_pane_ParamLimits

0xc1f3,	// (0x00030335) image2_vga_pane

0xc201,	// (0x00030343) main_camera2_pane_g1_ParamLimits

0xc201,	// (0x00030343) main_camera2_pane_g1

0xc201,	// (0x00030343) main_camera2_pane_g2_ParamLimits

0xc201,	// (0x00030343) main_camera2_pane_g2

0xc201,	// (0x00030343) main_camera2_pane_g3_ParamLimits

0xc201,	// (0x00030343) main_camera2_pane_g3

0xc201,	// (0x00030343) main_camera2_pane_g4_ParamLimits

0xc201,	// (0x00030343) main_camera2_pane_g4

0xc201,	// (0x00030343) main_camera2_pane_g5_ParamLimits

0xc201,	// (0x00030343) main_camera2_pane_g5

0xc201,	// (0x00030343) main_camera2_pane_g6_ParamLimits

0xc201,	// (0x00030343) main_camera2_pane_g6

0xc201,	// (0x00030343) main_camera2_pane_g7_ParamLimits

0xc201,	// (0x00030343) main_camera2_pane_g7

0xc201,	// (0x00030343) main_camera2_pane_g8_ParamLimits

0xc201,	// (0x00030343) main_camera2_pane_g8

0x0008,

0xf5c4,	// (0x00033706) main_camera2_pane_g_ParamLimits

0xf5c4,	// (0x00033706) main_camera2_pane_g

0x1eff,	// (0x00026041) main_camera2_pane_t1_ParamLimits

0x1eff,	// (0x00026041) main_camera2_pane_t1

0x1eff,	// (0x00026041) main_camera2_pane_t2_ParamLimits

0x1eff,	// (0x00026041) main_camera2_pane_t2

0x1eff,	// (0x00026041) main_camera2_pane_t3_ParamLimits

0x1eff,	// (0x00026041) main_camera2_pane_t3

0x1eff,	// (0x00026041) main_camera2_pane_t4_ParamLimits

0x1eff,	// (0x00026041) main_camera2_pane_t4

0x0006,

0xf5d7,	// (0x00033719) main_camera2_pane_t_ParamLimits

0xf5d7,	// (0x00033719) main_camera2_pane_t

0xc245,	// (0x00030387) cams_zoom_pane_cp4_ParamLimits

0xc245,	// (0x00030387) cams_zoom_pane_cp4

0x1f13,	// (0x00026055) image2_cif_pane_ParamLimits

0x1f13,	// (0x00026055) image2_cif_pane

0xb1a9,	// (0x0002f2eb) image2_subqcif_pane_ParamLimits

0xb1a9,	// (0x0002f2eb) image2_subqcif_pane

0x1f21,	// (0x00026063) main_video2_pane_g1_ParamLimits

0x1f21,	// (0x00026063) main_video2_pane_g1

0x1f21,	// (0x00026063) main_video2_pane_g2_ParamLimits

0x1f21,	// (0x00026063) main_video2_pane_g2

0x1f21,	// (0x00026063) main_video2_pane_g3_ParamLimits

0x1f21,	// (0x00026063) main_video2_pane_g3

0x1f21,	// (0x00026063) main_video2_pane_g4_ParamLimits

0x1f21,	// (0x00026063) main_video2_pane_g4

0x1f21,	// (0x00026063) main_video2_pane_g5_ParamLimits

0x1f21,	// (0x00026063) main_video2_pane_g5

0x1f21,	// (0x00026063) main_video2_pane_g6_ParamLimits

0x1f21,	// (0x00026063) main_video2_pane_g6

0x0005,

0xf5e6,	// (0x00033728) main_video2_pane_g_ParamLimits

0xf5e6,	// (0x00033728) main_video2_pane_g

0x1f2f,	// (0x00026071) main_video2_pane_t1_ParamLimits

0x1f2f,	// (0x00026071) main_video2_pane_t1

0x1f2f,	// (0x00026071) main_video2_pane_t2_ParamLimits

0x1f2f,	// (0x00026071) main_video2_pane_t2

0x1f2f,	// (0x00026071) main_video2_pane_t3_ParamLimits

0x1f2f,	// (0x00026071) main_video2_pane_t3

0x0002,

0xf5f3,	// (0x00033735) main_video2_pane_t_ParamLimits

0xf5f3,	// (0x00033735) main_video2_pane_t

0x6a7f,	// (0x0002abc1) call_muted_g2

0x0001,

0xf59a,	// (0x000336dc) call_muted_g

0x3097,	// (0x000271d9) main_mup2_pane

0x5a7b,	// (0x00029bbd) main_mup2_pane_g1_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup2_pane_g1

0x5a7b,	// (0x00029bbd) main_mup2_pane_g2_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup2_pane_g2

0xc33d,	// (0x0003047f) main_mup_pane_g13_cp1

0xb1b7,	// (0x0002f2f9) mup_volume_pane_cp1

0x5a7b,	// (0x00029bbd) main_mup2_pane_g4_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup2_pane_g4

0x5a7b,	// (0x00029bbd) main_mup2_pane_g5_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup2_pane_g5

0x5a7b,	// (0x00029bbd) main_mup2_pane_g6_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup2_pane_g6

0x5a7b,	// (0x00029bbd) main_mup2_pane_g7_ParamLimits

0x5a7b,	// (0x00029bbd) main_mup2_pane_g7

0x0006,

0xf5fa,	// (0x0003373c) main_mup2_pane_g_ParamLimits

0xf5fa,	// (0x0003373c) main_mup2_pane_g

0x5a89,	// (0x00029bcb) main_mup2_pane_t1_ParamLimits

0x5a89,	// (0x00029bcb) main_mup2_pane_t1

0x5a89,	// (0x00029bcb) main_mup2_pane_t2_ParamLimits

0x5a89,	// (0x00029bcb) main_mup2_pane_t2

0x5a89,	// (0x00029bcb) main_mup2_pane_t3_ParamLimits

0x5a89,	// (0x00029bcb) main_mup2_pane_t3

0x5a89,	// (0x00029bcb) main_mup2_pane_t4_ParamLimits

0x5a89,	// (0x00029bcb) main_mup2_pane_t4

0x5a89,	// (0x00029bcb) main_mup2_pane_t5_ParamLimits

0x5a89,	// (0x00029bcb) main_mup2_pane_t5

0x5a89,	// (0x00029bcb) main_mup2_pane_t6_ParamLimits

0x5a89,	// (0x00029bcb) main_mup2_pane_t6

0x0005,

0xf609,	// (0x0003374b) main_mup2_pane_t_ParamLimits

0xf609,	// (0x0003374b) main_mup2_pane_t

0x5ab1,	// (0x00029bf3) mup2_visualizer_pane_ParamLimits

0x5ab1,	// (0x00029bf3) mup2_visualizer_pane

0x5ab1,	// (0x00029bf3) mup_progress_pane_cp_ParamLimits

0x5ab1,	// (0x00029bf3) mup_progress_pane_cp

0xc31e,	// (0x00030460) mup_volume_pane_cp_ParamLimits

0xc31e,	// (0x00030460) mup_volume_pane_cp

0x337b,	// (0x000274bd) mup2_visualizer_pane_g1_ParamLimits

0x337b,	// (0x000274bd) mup2_visualizer_pane_g1

0x3389,	// (0x000274cb) mup2_visualizer_pane_g2_ParamLimits

0x3389,	// (0x000274cb) mup2_visualizer_pane_g2

0x3389,	// (0x000274cb) mup2_visualizer_pane_g3_ParamLimits

0x3389,	// (0x000274cb) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00033226) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00033226) mup2_visualizer_pane_g

0x6361,	// (0x0002a4a3) aid_size_cell_fmradio

0x1c31,	// (0x00025d73) aid_height_parent_landcape

0x43bf,	// (0x00028501) wml_content_pane_cp

0x43c7,	// (0x00028509) wml_tabs_pane

0x43d0,	// (0x00028512) popup_wml_miniature_window

0x43d8,	// (0x0002851a) scroll_pane_cp021

0x43ec,	// (0x0002852e) wml_content_pane_comp8

0x3097,	// (0x000271d9) bg_popup_sub_pane_cp05

0xc269,	// (0x000303ab) popup_wml_miniature_window_g1

0xc271,	// (0x000303b3) wml_miniature_view_pane

0x6e42,	// (0x0002af84) aid_size_wml_view

0x6e4a,	// (0x0002af8c) wml_miniature_view_pane_g1

0x6e53,	// (0x0002af95) wml_miniature_view_pane_g2

0x6e5c,	// (0x0002af9e) wml_miniature_view_pane_g3

0x6e64,	// (0x0002afa6) wml_miniature_view_pane_g4

0x6e6c,	// (0x0002afae) wml_miniature_view_pane_g5

0x6e74,	// (0x0002afb6) wml_miniature_view_pane_g6

0x6e7c,	// (0x0002afbe) wml_miniature_view_pane_g7

0x6e84,	// (0x0002afc6) wml_miniature_view_pane_g8

0x0007,

0xf616,	// (0x00033758) wml_miniature_view_pane_g

0xc279,	// (0x000303bb) background_graphic_ParamLimits

0xc279,	// (0x000303bb) background_graphic

0xc285,	// (0x000303c7) wml_tabs_2_pane

0xc28e,	// (0x000303d0) wml_tabs_3_pane_ParamLimits

0xc28e,	// (0x000303d0) wml_tabs_3_pane

0xc2a0,	// (0x000303e2) wml_tabs_4_pane_ParamLimits

0xc2a0,	// (0x000303e2) wml_tabs_4_pane

0xc2b6,	// (0x000303f8) wml_tabs_5_pane_ParamLimits

0xc2b6,	// (0x000303f8) wml_tabs_5_pane

0xc2d0,	// (0x00030412) wml_tabs_pane_g2_ParamLimits

0xc2d0,	// (0x00030412) wml_tabs_pane_g2

0xc2e5,	// (0x00030427) wml_tabs_pane_g3_ParamLimits

0xc2e5,	// (0x00030427) wml_tabs_pane_g3

0xc2fa,	// (0x0003043c) wml_tabs_2_active_pane_ParamLimits

0xc2fa,	// (0x0003043c) wml_tabs_2_active_pane

0xc2fa,	// (0x0003043c) wml_tabs_2_passive_pane_ParamLimits

0xc2fa,	// (0x0003043c) wml_tabs_2_passive_pane

0x6e8c,	// (0x0002afce) wml_tabs_3_active_pane_cp_ParamLimits

0x6e8c,	// (0x0002afce) wml_tabs_3_active_pane_cp

0x6ea1,	// (0x0002afe3) wml_tabs_3_passive_pane_ParamLimits

0x6ea1,	// (0x0002afe3) wml_tabs_3_passive_pane

0x6eb4,	// (0x0002aff6) wml_tabs_3_passive_pane_cp_ParamLimits

0x6eb4,	// (0x0002aff6) wml_tabs_3_passive_pane_cp

0x6ecb,	// (0x0002b00d) tabs_4_active_pane

0x6ed3,	// (0x0002b015) tabs_4_passive_pane

0x6edd,	// (0x0002b01f) tabs_4_passive_pane_cp

0x6ee5,	// (0x0002b027) tabs_4_passive_pane_cp2

0x6973,	// (0x0002aab5) aid_height_text

0x5ab1,	// (0x00029bf3) mup_volume_cont_pane_ParamLimits

0x5ab1,	// (0x00029bf3) mup_volume_cont_pane

0x2bdc,	// (0x00026d1e) aid_size_cell_pinb

0x2bdc,	// (0x00026d1e) aid_size_list_pinb

0x5ab1,	// (0x00029bf3) mup2_volume_cont_pane_ParamLimits

0x5ab1,	// (0x00029bf3) mup2_volume_cont_pane

0xc308,	// (0x0003044a) mup2_volume_cont_pane_g1_ParamLimits

0xc308,	// (0x0003044a) mup2_volume_cont_pane_g1

0x1780,	// (0x000258c2) aid_size_cell_touch_ParamLimits

0x1780,	// (0x000258c2) aid_size_cell_touch

0x1968,	// (0x00025aaa) touch_pane_ParamLimits

0x1968,	// (0x00025aaa) touch_pane

0xb1b7,	// (0x0002f2f9) main_rss2_pane

0xc347,	// (0x00030489) listscroll_rss2_pane

0xc350,	// (0x00030492) rss2_navigation_pane

0xc358,	// (0x0003049a) list_rss2_pane

0x5563,	// (0x000296a5) scroll_pane_cp22

0xc360,	// (0x000304a2) rss2_navigation_pane_g1

0xc369,	// (0x000304ab) rss2_navigation_pane_g2

0xc371,	// (0x000304b3) rss2_navigation_pane_g3

0x0002,

0xf627,	// (0x00033769) rss2_navigation_pane_g

0xc379,	// (0x000304bb) rss2_navigation_pane_t1

0x6eef,	// (0x0002b031) rss2_list_single_pane_ParamLimits

0x6eef,	// (0x0002b031) rss2_list_single_pane

0xc387,	// (0x000304c9) rss2_list_single_pane_t2

0xc395,	// (0x000304d7) rss2_list_single_pane_t3_ParamLimits

0xc395,	// (0x000304d7) rss2_list_single_pane_t3

0xc3b2,	// (0x000304f4) rss2_list_single_pane_t4

0x4eda,	// (0x0002901c) smil_status_pane_g1

0xb1a9,	// (0x0002f2eb) main_image2_pane_ParamLimits

0xb1a9,	// (0x0002f2eb) main_image2_pane

0xc201,	// (0x00030343) main_camera2_pane_g9_ParamLimits

0xc201,	// (0x00030343) main_camera2_pane_g9

0x1eff,	// (0x00026041) main_camera2_pane_t5_ParamLimits

0x1eff,	// (0x00026041) main_camera2_pane_t5

0xc20f,	// (0x00030351) main_camera2_pane_t6_ParamLimits

0xc20f,	// (0x00030351) main_camera2_pane_t6

0x6f05,	// (0x0002b047) main_image2_pane_g1_ParamLimits

0x6f05,	// (0x0002b047) main_image2_pane_g1

0x6317,	// (0x0002a459) smil2_video_pane_ParamLimits

0x6317,	// (0x0002a459) smil2_video_pane

0xb158,	// (0x0002f29a) aid_zoom_text_primary_cp

0xb19f,	// (0x0002f2e1) popup_preview_fixed_window

0x42b5,	// (0x000283f7) im_reading_pane_g1

0x1ef1,	// (0x00026033) cams2_bc_adjust_pane_cp_ParamLimits

0x1ef1,	// (0x00026033) cams2_bc_adjust_pane_cp

0xc237,	// (0x00030379) cams2_bc_adjust_pane_ParamLimits

0xc237,	// (0x00030379) cams2_bc_adjust_pane

0xc33d,	// (0x0003047f) cams2_bc_adjust_pane_g1

0xb1b7,	// (0x0002f2f9) cams2_slider_pane

0xc33d,	// (0x0003047f) cams2_slider_pane_g1

0xc33d,	// (0x0003047f) cams2_slider_pane_g2

0x0006,

0xf62e,	// (0x00033770) cams2_slider_pane_g

0x19d8,	// (0x00025b1a) calc_display_pane_ParamLimits

0x19fd,	// (0x00025b3f) calc_paper_pane_ParamLimits

0x1a20,	// (0x00025b62) grid_calc_pane_ParamLimits

0xb2ee,	// (0x0002f430) popup_clock_digital_window_t1_ParamLimits

0x619e,	// (0x0002a2e0) main_image_pane_t1

0x19ba,	// (0x00025afc) aid_size_cell_calc_ParamLimits

0x19ba,	// (0x00025afc) aid_size_cell_calc

0x1c95,	// (0x00025dd7) popup_blid_sat_info2_window_ParamLimits

0x1c95,	// (0x00025dd7) popup_blid_sat_info2_window

0xc3c0,	// (0x00030502) aid_size_cell_blid

0xc3c8,	// (0x0003050a) bg_popup_window_pane_cp07

0xc3eb,	// (0x0003052d) grid_popup_blid_pane

0xc3f5,	// (0x00030537) heading_pane_cp05_ParamLimits

0xc3f5,	// (0x00030537) heading_pane_cp05

0xc4bf,	// (0x00030601) cell_popup_blid_pane_ParamLimits

0xc4bf,	// (0x00030601) cell_popup_blid_pane

0xc4e3,	// (0x00030625) cell_popup_blid_pane_g1

0xc4eb,	// (0x0003062d) cell_popup_blid_pane_t1

0x5ab1,	// (0x00029bf3) mup2_indicator_pane_ParamLimits

0x5ab1,	// (0x00029bf3) mup2_indicator_pane

0x2bdc,	// (0x00026d1e) mup2_visualizer_osc_pane

0xc253,	// (0x00030395) mup2_visualizer_spec_pane_ParamLimits

0xc253,	// (0x00030395) mup2_visualizer_spec_pane

0x2bdc,	// (0x00026d1e) mup2_spec_half_pane

0x2bdc,	// (0x00026d1e) mup2_spec_half_pane_cp

0xc4f9,	// (0x0003063b) mup2_spec_bar_pane_ParamLimits

0xc4f9,	// (0x0003063b) mup2_spec_bar_pane

0x3e06,	// (0x00027f48) mup2_spec_bar_pane_g1

0xc518,	// (0x0003065a) mup2_spec_bar_pane_g2

0x0001,

0xf654,	// (0x00033796) mup2_spec_bar_pane_g

0x2bdc,	// (0x00026d1e) mup2_osc_middle_pane

0x3e06,	// (0x00027f48) mup2_visualizer_osc_pane_g1

0x2c4b,	// (0x00026d8d) popup_number_entry_window_t1_ParamLimits

0x2c5e,	// (0x00026da0) popup_number_entry_window_t2_ParamLimits

0x2c70,	// (0x00026db2) popup_number_entry_window_t3_ParamLimits

0x2c82,	// (0x00026dc4) popup_number_entry_window_t5_ParamLimits

0x2c82,	// (0x00026dc4) popup_number_entry_window_t5

0xf085,	// (0x000331c7) popup_number_entry_window_t_ParamLimits

0x2cb7,	// (0x00026df9) text_title_cp2_ParamLimits

0xb32d,	// (0x0002f46f) aid_hotspot_pointer_text2_pane

0xb347,	// (0x0002f489) main_viewer_pane_g9_ParamLimits

0xb347,	// (0x0002f489) main_viewer_pane_g9

0x4ac2,	// (0x00028c04) cale_month_pane_t1_ParamLimits

0x4f54,	// (0x00029096) bg_cale_pane_ParamLimits

0x4f6c,	// (0x000290ae) list_cale_pane_ParamLimits

0x4f7d,	// (0x000290bf) listscroll_cale_day_pane_t1

0x4f8f,	// (0x000290d1) scroll_pane_cp09_ParamLimits

0x5b18,	// (0x00029c5a) main_mup_eq_pane_t1_ParamLimits

0x5b18,	// (0x00029c5a) main_mup_eq_pane_t1

0x5b32,	// (0x00029c74) main_mup_eq_pane_t2_ParamLimits

0x5b32,	// (0x00029c74) main_mup_eq_pane_t2

0x5b4c,	// (0x00029c8e) main_mup_eq_pane_t3_ParamLimits

0x5b4c,	// (0x00029c8e) main_mup_eq_pane_t3

0x5b68,	// (0x00029caa) main_mup_eq_pane_t4_ParamLimits

0x5b68,	// (0x00029caa) main_mup_eq_pane_t4

0x5b84,	// (0x00029cc6) main_mup_eq_pane_t5_ParamLimits

0x5b84,	// (0x00029cc6) main_mup_eq_pane_t5

0x5ba0,	// (0x00029ce2) main_mup_eq_pane_t6_ParamLimits

0x5ba0,	// (0x00029ce2) main_mup_eq_pane_t6

0x5bb4,	// (0x00029cf6) main_mup_eq_pane_t7_ParamLimits

0x5bb4,	// (0x00029cf6) main_mup_eq_pane_t7

0x5bc8,	// (0x00029d0a) main_mup_eq_pane_t8_ParamLimits

0x5bc8,	// (0x00029d0a) main_mup_eq_pane_t8

0x5bdc,	// (0x00029d1e) main_mup_eq_pane_t9_ParamLimits

0x5bdc,	// (0x00029d1e) main_mup_eq_pane_t9

0x5bf6,	// (0x00029d38) main_mup_eq_pane_t10_ParamLimits

0x5bf6,	// (0x00029d38) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x00033526) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x00033526) main_mup_eq_pane_t

0x5ca5,	// (0x00029de7) mup_equalizer_pane_cp5_ParamLimits

0x5cb9,	// (0x00029dfb) mup_equalizer_pane_cp6_ParamLimits

0x5ccd,	// (0x00029e0f) mup_equalizer_pane_cp7_ParamLimits

0xb1b7,	// (0x0002f2f9) main_gallery_pane

0xc16f,	// (0x000302b1) smil2_volume_pane

0xc177,	// (0x000302b9) smil_status_volume_pane_g1_ParamLimits

0xc18a,	// (0x000302cc) smil_status_volume_pane_g2_ParamLimits

0xc19d,	// (0x000302df) smil_status_volume_pane_g3_ParamLimits

0xf5ad,	// (0x000336ef) smil_status_volume_pane_g_ParamLimits

0xc3c8,	// (0x0003050a) bg_popup_window_pane_cp07_ParamLimits

0xc3d6,	// (0x00030518) blid_firmament_pane

0x3314,	// (0x00027456) aid_size_cell_gallery_ParamLimits

0x3314,	// (0x00027456) aid_size_cell_gallery

0x3314,	// (0x00027456) grid_gallery_pane_ParamLimits

0x3314,	// (0x00027456) grid_gallery_pane

0xc3c8,	// (0x0003050a) cell_gallery_pane_ParamLimits

0xc3c8,	// (0x0003050a) cell_gallery_pane

0x3314,	// (0x00027456) bg_cell_gallery_focus_pane_ParamLimits

0x3314,	// (0x00027456) bg_cell_gallery_focus_pane

0x337b,	// (0x000274bd) cell_gallery_pane_g1_ParamLimits

0x337b,	// (0x000274bd) cell_gallery_pane_g1

0x337b,	// (0x000274bd) cell_gallery_pane_g2_ParamLimits

0x337b,	// (0x000274bd) cell_gallery_pane_g2

0x337b,	// (0x000274bd) cell_gallery_pane_g3_ParamLimits

0x337b,	// (0x000274bd) cell_gallery_pane_g3

0x3389,	// (0x000274cb) cell_gallery_pane_g4_ParamLimits

0x3389,	// (0x000274cb) cell_gallery_pane_g4

0x0003,

0xf659,	// (0x0003379b) cell_gallery_pane_g_ParamLimits

0xf659,	// (0x0003379b) cell_gallery_pane_g

0xc522,	// (0x00030664) bg_cell_gallery_focus_pane_g1

0xc52a,	// (0x0003066c) bg_cell_gallery_focus_pane_g2

0xc532,	// (0x00030674) bg_cell_gallery_focus_pane_g3

0xc53a,	// (0x0003067c) bg_cell_gallery_focus_pane_g4

0xc542,	// (0x00030684) bg_cell_gallery_focus_pane_g5

0xc54a,	// (0x0003068c) bg_cell_gallery_focus_pane_g6

0xc552,	// (0x00030694) bg_cell_gallery_focus_pane_g7

0xc55a,	// (0x0003069c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf662,	// (0x000337a4) bg_cell_gallery_focus_pane_g

0xc562,	// (0x000306a4) aid_firma_cardinal

0xc576,	// (0x000306b8) blid_firmament_pane_t1

0xc58d,	// (0x000306cf) blid_firmament_pane_t2

0xc5a4,	// (0x000306e6) blid_firmament_pane_t3

0xc5bb,	// (0x000306fd) blid_firmament_pane_t4

0x0003,

0xf673,	// (0x000337b5) blid_firmament_pane_t

0xc5d2,	// (0x00030714) blid_sat_info_pane

0x3e06,	// (0x00027f48) blid_sat_info_pane_g1

0x3e06,	// (0x00027f48) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x0003351a) blid_sat_info_pane_g

0xc5e2,	// (0x00030724) blid_sat_info_pane_t1

0xc5f0,	// (0x00030732) smil2_volume_content_pane

0xc5f9,	// (0x0003073b) smil2_volume_pane_g1

0x358d,	// (0x000276cf) smil2_volume_content_pane_g1

0xc601,	// (0x00030743) smil2_volume_content_pane_g2

0xc60a,	// (0x0003074c) smil2_volume_content_pane_g3

0xc613,	// (0x00030755) smil2_volume_content_pane_g4

0xc61c,	// (0x0003075e) smil2_volume_content_pane_g5

0xc625,	// (0x00030767) smil2_volume_content_pane_g6

0xc62e,	// (0x00030770) smil2_volume_content_pane_g7

0xc637,	// (0x00030779) smil2_volume_content_pane_g8

0xc640,	// (0x00030782) smil2_volume_content_pane_g9

0xc649,	// (0x0003078b) smil2_volume_content_pane_g10

0x0009,

0xf67c,	// (0x000337be) smil2_volume_content_pane_g

0x3a0f,	// (0x00027b51) cale_week_day_heading_pane_t1_ParamLimits

0x3a39,	// (0x00027b7b) cale_week_day_heading_pane_t2_ParamLimits

0x3a68,	// (0x00027baa) cale_week_day_heading_pane_t3_ParamLimits

0x3a97,	// (0x00027bd9) cale_week_day_heading_pane_t4_ParamLimits

0x3ac6,	// (0x00027c08) cale_week_day_heading_pane_t5_ParamLimits

0x3afd,	// (0x00027c3f) cale_week_day_heading_pane_t6_ParamLimits

0x3b34,	// (0x00027c76) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x000332ce) cale_week_day_heading_pane_t_ParamLimits

0x3b5e,	// (0x00027ca0) bg_cale_side_pane_ParamLimits

0x1af7,	// (0x00025c39) cale_week_time_pane_t1_ParamLimits

0x1b11,	// (0x00025c53) cale_week_time_pane_t2_ParamLimits

0x1b2b,	// (0x00025c6d) cale_week_time_pane_t3_ParamLimits

0x1b45,	// (0x00025c87) cale_week_time_pane_t4_ParamLimits

0x1b5f,	// (0x00025ca1) cale_week_time_pane_t5_ParamLimits

0x1b79,	// (0x00025cbb) cale_week_time_pane_t6_ParamLimits

0x1b93,	// (0x00025cd5) cale_week_time_pane_t7_ParamLimits

0x1bad,	// (0x00025cef) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x000332dd) cale_week_time_pane_t_ParamLimits

0x3b6c,	// (0x00027cae) cell_cale_week_pane_g2_ParamLimits

0x3b5e,	// (0x00027ca0) bg_cale_side_pane_cp01_ParamLimits

0x4d01,	// (0x00028e43) cale_month_week_pane_t1_ParamLimits

0x4d1a,	// (0x00028e5c) cale_month_week_pane_t2_ParamLimits

0x4d33,	// (0x00028e75) cale_month_week_pane_t3_ParamLimits

0x4d4c,	// (0x00028e8e) cale_month_week_pane_t4_ParamLimits

0x4d65,	// (0x00028ea7) cale_month_week_pane_t5_ParamLimits

0x4d7e,	// (0x00028ec0) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x000333ab) cale_month_week_pane_t_ParamLimits

0xb262,	// (0x0002f3a4) cell_cale_month_pane_g1_ParamLimits

0xb1b7,	// (0x0002f2f9) main_cale_event_viewer_pane

0x2bdc,	// (0x00026d1e) listscroll_cale_event_viewer_pane

0xc652,	// (0x00030794) list_cale_ev_pane

0xc65a,	// (0x0003079c) scroll_pane_cp023

0xc666,	// (0x000307a8) field_cale_ev_pane_ParamLimits

0xc666,	// (0x000307a8) field_cale_ev_pane

0xc684,	// (0x000307c6) field_cale_ev_content_pane_ParamLimits

0xc684,	// (0x000307c6) field_cale_ev_content_pane

0xc690,	// (0x000307d2) field_cale_ev_pane_g1_ParamLimits

0xc690,	// (0x000307d2) field_cale_ev_pane_g1

0xc69c,	// (0x000307de) field_cale_ev_pane_g2_ParamLimits

0xc69c,	// (0x000307de) field_cale_ev_pane_g2

0xc6b4,	// (0x000307f6) field_cale_ev_pane_g3_ParamLimits

0xc6b4,	// (0x000307f6) field_cale_ev_pane_g3

0x0002,

0xf691,	// (0x000337d3) field_cale_ev_pane_g_ParamLimits

0xf691,	// (0x000337d3) field_cale_ev_pane_g

0xc6cc,	// (0x0003080e) field_cale_ev_pane_t1_ParamLimits

0xc6cc,	// (0x0003080e) field_cale_ev_pane_t1

0xc6e3,	// (0x00030825) field_cale_ev_content_pane_t1_ParamLimits

0xc6e3,	// (0x00030825) field_cale_ev_content_pane_t1

0x5dc3,	// (0x00029f05) bg_button_pane_cp01

0x36e7,	// (0x00027829) listscroll_cale_week_pane_ParamLimits

0x36f9,	// (0x0002783b) popup_toolbar_window_cp01

0x3952,	// (0x00027a94) listscroll_cale_week_pane_t1_ParamLimits

0x36e7,	// (0x00027829) listscroll_cale_day_pane_ParamLimits

0x36f9,	// (0x0002783b) popup_toolbar_window_cp02

0x4f7d,	// (0x000290bf) listscroll_cale_day_pane_t1_ParamLimits

0x1c4f,	// (0x00025d91) main_cale_month_pane_ParamLimits

0xc0ed,	// (0x0003022f) popup_toolbar_window_cp03_ParamLimits

0xc0ed,	// (0x0003022f) popup_toolbar_window_cp03

0x617c,	// (0x0002a2be) main_image_pane_g2_ParamLimits

0x617c,	// (0x0002a2be) main_image_pane_g2

0x618d,	// (0x0002a2cf) main_image_pane_g3_ParamLimits

0x618d,	// (0x0002a2cf) main_image_pane_g3

0x0002,

0xf476,	// (0x000335b8) main_image_pane_g_ParamLimits

0xf476,	// (0x000335b8) main_image_pane_g

0x619e,	// (0x0002a2e0) main_image_pane_t1_ParamLimits

0x61b5,	// (0x0002a2f7) main_image_pane_t2_ParamLimits

0x61b5,	// (0x0002a2f7) main_image_pane_t2

0x61c7,	// (0x0002a309) main_image_pane_t3_ParamLimits

0x61c7,	// (0x0002a309) main_image_pane_t3

0x61ef,	// (0x0002a331) main_image_pane_t4_ParamLimits

0x61ef,	// (0x0002a331) main_image_pane_t4

0x0003,

0xf47d,	// (0x000335bf) main_image_pane_t_ParamLimits

0xf47d,	// (0x000335bf) main_image_pane_t

0x620f,	// (0x0002a351) popup_image_details_window_cp01

0x6219,	// (0x0002a35b) popup_toobar_trans_pane_cp01_ParamLimits

0x6219,	// (0x0002a35b) popup_toobar_trans_pane_cp01

0x1d66,	// (0x00025ea8) popup_image_details_window_ParamLimits

0x1d66,	// (0x00025ea8) popup_image_details_window

0xc0c0,	// (0x00030202) popup_image_focus_window

0xc1f3,	// (0x00030335) camera2_autofocus_pane_ParamLimits

0xc1f3,	// (0x00030335) camera2_autofocus_pane

0x2bdc,	// (0x00026d1e) bg_popup_sub_pane_cp06

0xc701,	// (0x00030843) popup_image_focus_window_g1

0xc709,	// (0x0003084b) popup_image_focus_window_g2

0xc711,	// (0x00030853) popup_image_focus_window_g3

0xc719,	// (0x0003085b) popup_image_focus_window_g4

0x0003,

0xf698,	// (0x000337da) popup_image_focus_window_g

0xc721,	// (0x00030863) popup_image_focus_window_t1

0xc72f,	// (0x00030871) popup_image_focus_window_t2

0xc73f,	// (0x00030881) popup_image_focus_window_t3

0x0002,

0xf6a1,	// (0x000337e3) popup_image_focus_window_t

0x337b,	// (0x000274bd) camera2_autofocus_pane_g1

0x3314,	// (0x00027456) bg_tb_trans_pane_cp01

0xc74d,	// (0x0003088f) popup_image_details_window_g1

0xc760,	// (0x000308a2) popup_image_details_window_g2

0x0002,

0xf6b3,	// (0x000337f5) popup_image_details_window_g

0xc789,	// (0x000308cb) popup_image_details_window_t1

0xc79b,	// (0x000308dd) popup_image_details_window_t2

0xc7b4,	// (0x000308f6) popup_image_details_window_t3

0xc7c8,	// (0x0003090a) popup_image_details_window_t4

0xc7e3,	// (0x00030925) popup_image_details_window_t5

0x0004,

0xf6ba,	// (0x000337fc) popup_image_details_window_t

0x34a9,	// (0x000275eb) bg_calc_paper_pane_ParamLimits

0xb1b7,	// (0x0002f2f9) grid_highlight_pane_cp013

0xb1c9,	// (0x0002f30b) list_calc_pane_ParamLimits

0xb1db,	// (0x0002f31d) scroll_pane_cp024

0x34bd,	// (0x000275ff) bg_calc_display_pane_ParamLimits

0x1a4e,	// (0x00025b90) calc_display_pane_t1_ParamLimits

0x1a60,	// (0x00025ba2) calc_display_pane_t2_ParamLimits

0xb1e3,	// (0x0002f325) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0003324e) calc_display_pane_t_ParamLimits

0x1ac1,	// (0x00025c03) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0003326b) cell_calc_pane_g

0x1aca,	// (0x00025c0c) cell_calc_pane_t1

0x356b,	// (0x000276ad) grid_highlight_pane_cp02_ParamLimits

0x3581,	// (0x000276c3) toolbar_button_pane_cp01_ParamLimits

0x3581,	// (0x000276c3) toolbar_button_pane_cp01

0x625b,	// (0x0002a39d) temp_image_control_pane_ParamLimits

0x625b,	// (0x0002a39d) temp_image_control_pane

0xb1a9,	// (0x0002f2eb) main_mp3_pane

0xc7fd,	// (0x0003093f) temp_image_control_pane_g1_ParamLimits

0xc7fd,	// (0x0003093f) temp_image_control_pane_g1

0xc80b,	// (0x0003094d) temp_image_control_pane_g2_ParamLimits

0xc80b,	// (0x0003094d) temp_image_control_pane_g2

0xc81d,	// (0x0003095f) temp_image_control_pane_g3_ParamLimits

0xc81d,	// (0x0003095f) temp_image_control_pane_g3

0x6f1b,	// (0x0002b05d) temp_image_control_pane_g4_ParamLimits

0x6f1b,	// (0x0002b05d) temp_image_control_pane_g4

0x0003,

0xf6c5,	// (0x00033807) temp_image_control_pane_g_ParamLimits

0xf6c5,	// (0x00033807) temp_image_control_pane_g

0xc7fd,	// (0x0003093f) main_mp3_pane_g1

0x6f2e,	// (0x0002b070) main_mp3_pane_g2

0x0007,

0xf6ce,	// (0x00033810) main_mp3_pane_g

0xc852,	// (0x00030994) main_mp3_pane_t1

0x3389,	// (0x000274cb) main_camera_pane_g8_ParamLimits

0x3389,	// (0x000274cb) main_camera_pane_g8

0x3db4,	// (0x00027ef6) main_video_pane_g7_ParamLimits

0x3db4,	// (0x00027ef6) main_video_pane_g7

0xc223,	// (0x00030365) main_camera2_pane_t7_ParamLimits

0xc223,	// (0x00030365) main_camera2_pane_t7

0x437f,	// (0x000284c1) scroll_pane_cp025_ParamLimits

0x437f,	// (0x000284c1) scroll_pane_cp025

0x4393,	// (0x000284d5) scroll_pane_cp026_ParamLimits

0x4393,	// (0x000284d5) scroll_pane_cp026

0x43a2,	// (0x000284e4) wml_content_pane_ParamLimits

0xb1b7,	// (0x0002f2f9) main_touch_calib_pane

0x7002,	// (0x0002b144) main_touch_calib_pane_g1

0x7014,	// (0x0002b156) main_touch_calib_pane_g2

0x7026,	// (0x0002b168) main_touch_calib_pane_g3

0x7038,	// (0x0002b17a) main_touch_calib_pane_g4

0x0003,

0xf6ec,	// (0x0003382e) main_touch_calib_pane_g

0x704a,	// (0x0002b18c) main_touch_calib_pane_t1

0x7064,	// (0x0002b1a6) main_touch_calib_pane_t2

0x0004,

0xf6f5,	// (0x00033837) main_touch_calib_pane_t

0x580b,	// (0x0002994d) mup_progress_pane_cp02

0x5840,	// (0x00029982) navi_pane_g1

0x58fb,	// (0x00029a3d) navi_pane_mp_t3

0xb1a9,	// (0x0002f2eb) main_mp3_pane_ParamLimits

0x6c31,	// (0x0002ad73) navi_pane_ParamLimits

0xc7fd,	// (0x0003093f) main_mp3_pane_g1_ParamLimits

0x6f2e,	// (0x0002b070) main_mp3_pane_g2_ParamLimits

0x6f3c,	// (0x0002b07e) main_mp3_pane_g3_ParamLimits

0x6f3c,	// (0x0002b07e) main_mp3_pane_g3

0x6f4a,	// (0x0002b08c) main_mp3_pane_g4_ParamLimits

0x6f4a,	// (0x0002b08c) main_mp3_pane_g4

0x337b,	// (0x000274bd) main_mp3_pane_g5_ParamLimits

0x337b,	// (0x000274bd) main_mp3_pane_g5

0xc82d,	// (0x0003096f) main_mp3_pane_g6_ParamLimits

0xc82d,	// (0x0003096f) main_mp3_pane_g6

0xc83a,	// (0x0003097c) main_mp3_pane_g7_ParamLimits

0xc83a,	// (0x0003097c) main_mp3_pane_g7

0xc846,	// (0x00030988) main_mp3_pane_g8_ParamLimits

0xc846,	// (0x00030988) main_mp3_pane_g8

0xf6ce,	// (0x00033810) main_mp3_pane_g_ParamLimits

0x6f56,	// (0x0002b098) main_mp3_pane_t2

0x6f64,	// (0x0002b0a6) main_mp3_pane_t3

0xc860,	// (0x000309a2) main_mp3_pane_t4

0xc86e,	// (0x000309b0) main_mp3_pane_t5

0x0005,

0xf6df,	// (0x00033821) main_mp3_pane_t

0xc87c,	// (0x000309be) mup_progress_pane_cp01

0xb158,	// (0x0002f29a) aid_zoom_text_secondary2

0xc652,	// (0x00030794) list_cale_ev2_pane

0xc65a,	// (0x0003079c) scroll_pane_cp023_ParamLimits

0x70ba,	// (0x0002b1fc) field_cale_ev2_pane_ParamLimits

0x70ba,	// (0x0002b1fc) field_cale_ev2_pane

0xc884,	// (0x000309c6) field_cale_ev2_pane_g1_ParamLimits

0xc884,	// (0x000309c6) field_cale_ev2_pane_g1

0xc890,	// (0x000309d2) field_cale_ev2_pane_g2_ParamLimits

0xc890,	// (0x000309d2) field_cale_ev2_pane_g2

0xc8a8,	// (0x000309ea) field_cale_ev2_pane_g3_ParamLimits

0xc8a8,	// (0x000309ea) field_cale_ev2_pane_g3

0x0003,

0xf700,	// (0x00033842) field_cale_ev2_pane_g_ParamLimits

0xf700,	// (0x00033842) field_cale_ev2_pane_g

0xc8cc,	// (0x00030a0e) field_cale_ev2_pane_t1_ParamLimits

0xc8cc,	// (0x00030a0e) field_cale_ev2_pane_t1

0xc8e3,	// (0x00030a25) field_cale_ev2_pane_t2_ParamLimits

0xc8e3,	// (0x00030a25) field_cale_ev2_pane_t2

0x0001,

0xf709,	// (0x0003384b) field_cale_ev2_pane_t_ParamLimits

0xf709,	// (0x0003384b) field_cale_ev2_pane_t

0x5f4a,	// (0x0002a08c) main_postcard_pane_g5_ParamLimits

0x5f4a,	// (0x0002a08c) main_postcard_pane_g5

0x5f60,	// (0x0002a0a2) main_postcard_pane_g6_ParamLimits

0x5f60,	// (0x0002a0a2) main_postcard_pane_g6

0x3314,	// (0x00027456) camera2_autofocus_pane_cp_ParamLimits

0x3314,	// (0x00027456) camera2_autofocus_pane_cp

0xb1a9,	// (0x0002f2eb) main_mup3_pane

0x711f,	// (0x0002b261) main_mup3_pane_g1_ParamLimits

0x711f,	// (0x0002b261) main_mup3_pane_g1

0x7141,	// (0x0002b283) main_mup3_pane_g2_ParamLimits

0x7141,	// (0x0002b283) main_mup3_pane_g2

0x71c1,	// (0x0002b303) main_mup3_pane_g3_ParamLimits

0x71c1,	// (0x0002b303) main_mup3_pane_g3

0x7207,	// (0x0002b349) main_mup3_pane_g4_ParamLimits

0x7207,	// (0x0002b349) main_mup3_pane_g4

0x724d,	// (0x0002b38f) main_mup3_pane_g5_ParamLimits

0x724d,	// (0x0002b38f) main_mup3_pane_g5

0x7293,	// (0x0002b3d5) main_mup3_pane_g6_ParamLimits

0x7293,	// (0x0002b3d5) main_mup3_pane_g6

0x3389,	// (0x000274cb) main_mup3_pane_g7_ParamLimits

0x3389,	// (0x000274cb) main_mup3_pane_g7

0x0007,

0xf719,	// (0x0003385b) main_mup3_pane_g_ParamLimits

0xf719,	// (0x0003385b) main_mup3_pane_g

0x7311,	// (0x0002b453) main_mup3_pane_t1_ParamLimits

0x7311,	// (0x0002b453) main_mup3_pane_t1

0x7385,	// (0x0002b4c7) main_mup3_pane_t2_ParamLimits

0x7385,	// (0x0002b4c7) main_mup3_pane_t2

0x7459,	// (0x0002b59b) main_mup3_pane_t4_ParamLimits

0x7459,	// (0x0002b59b) main_mup3_pane_t4

0x74af,	// (0x0002b5f1) main_mup3_pane_t5_ParamLimits

0x74af,	// (0x0002b5f1) main_mup3_pane_t5

0x756b,	// (0x0002b6ad) main_mup3_pane_t6_ParamLimits

0x756b,	// (0x0002b6ad) main_mup3_pane_t6

0x0005,

0xf72a,	// (0x0003386c) main_mup3_pane_t_ParamLimits

0xf72a,	// (0x0003386c) main_mup3_pane_t

0x7623,	// (0x0002b765) mup3_progress_pane_ParamLimits

0x7623,	// (0x0002b765) mup3_progress_pane

0x76af,	// (0x0002b7f1) popup_mup3_control_window_ParamLimits

0x76af,	// (0x0002b7f1) popup_mup3_control_window

0xc8f8,	// (0x00030a3a) popup_mup3_text_window

0x76e1,	// (0x0002b823) mup3_progress_pane_t1

0x7700,	// (0x0002b842) mup3_progress_pane_t2

0xc900,	// (0x00030a42) mup3_progress_pane_t3

0x0002,

0xf737,	// (0x00033879) mup3_progress_pane_t

0xc91d,	// (0x00030a5f) mup_progress_pane_cp03

0x2bdc,	// (0x00026d1e) bg_tb_trans_pane_cp04

0x771f,	// (0x0002b861) mup3_volume_pane

0x7727,	// (0x0002b869) popup_mup3_control_window_g1

0x7730,	// (0x0002b872) mup3_volume_pane_g1

0x7739,	// (0x0002b87b) mup3_volume_pane_g2

0x7742,	// (0x0002b884) mup3_volume_pane_g3

0x0002,

0xf73e,	// (0x00033880) mup3_volume_pane_g

0x2bdc,	// (0x00026d1e) bg_tb_trans_pane_cp03

0xc92d,	// (0x00030a6f) popup_mup3_text_window_g1

0xc935,	// (0x00030a77) popup_mup3_text_window_t1

0x355e,	// (0x000276a0) list_calc_item_pane_g1_ParamLimits

0xc334,	// (0x00030476) mup_volume_pane_cp_g1

0x707e,	// (0x0002b1c0) main_touch_calib_pane_t3

0x7092,	// (0x0002b1d4) main_touch_calib_pane_t4

0x70a6,	// (0x0002b1e8) main_touch_calib_pane_t5

0xb144,	// (0x0002f286) aid_cell_size_toolbar2

0xb14c,	// (0x0002f28e) aid_popup3_width_pane

0xb158,	// (0x0002f29a) aid_zoom_text_msg_primary

0x3c61,	// (0x00027da3) vorec_t7

0x34c9,	// (0x0002760b) bg_calc_paper_pane_g1_ParamLimits

0x34d5,	// (0x00027617) bg_calc_paper_pane_g2_ParamLimits

0x34e1,	// (0x00027623) bg_calc_paper_pane_g3_ParamLimits

0x34ed,	// (0x0002762f) bg_calc_paper_pane_g4_ParamLimits

0x34f9,	// (0x0002763b) bg_calc_paper_pane_g5_ParamLimits

0x3505,	// (0x00027647) bg_calc_paper_pane_g6_ParamLimits

0x3514,	// (0x00027656) bg_calc_paper_pane_g7_ParamLimits

0x3523,	// (0x00027665) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00033255) bg_calc_paper_pane_g_ParamLimits

0x3536,	// (0x00027678) calc_bg_paper_pane_g9_ParamLimits

0x3314,	// (0x00027456) image_qvga_pane_ParamLimits

0x3314,	// (0x00027456) image_qvga_pane

0x32f2,	// (0x00027434) bg_popup_sub_pane_cp04_ParamLimits

0x60da,	// (0x0002a21c) popup_mup_playback_window_g1_ParamLimits

0x60e6,	// (0x0002a228) popup_mup_playback_window_t1_ParamLimits

0x60fb,	// (0x0002a23d) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x000335b3) popup_mup_playback_window_t_ParamLimits

0x3389,	// (0x000274cb) main_mup2_pane_g3_ParamLimits

0x3389,	// (0x000274cb) main_mup2_pane_g3

0x401c,	// (0x0002815e) popup_toolbar_window_cp04

0xb353,	// (0x0002f495) popup_call2_audio_second_window_g3_ParamLimits

0xb353,	// (0x0002f495) popup_call2_audio_second_window_g3

0xb76b,	// (0x0002f8ad) popup_call2_audio_first_window_g4_ParamLimits

0xb76b,	// (0x0002f8ad) popup_call2_audio_first_window_g4

0xbd92,	// (0x0002fed4) popup_call2_audio_in_window_g4_ParamLimits

0xbd92,	// (0x0002fed4) popup_call2_audio_in_window_g4

0x6110,	// (0x0002a252) aid_area_sk_bg_cut_ParamLimits

0x6110,	// (0x0002a252) aid_area_sk_bg_cut

0x612e,	// (0x0002a270) aid_area_sk_bg_cut_2_ParamLimits

0x612e,	// (0x0002a270) aid_area_sk_bg_cut_2

0x2bdc,	// (0x00026d1e) aid_placing_details_win

0x2bdc,	// (0x00026d1e) aid_placing_details_win_2

0x337b,	// (0x000274bd) camera2_autofocus_pane_g1_ParamLimits

0x190d,	// (0x00025a4f) popup_fixed_preview_cale_window_ParamLimits

0x190d,	// (0x00025a4f) popup_fixed_preview_cale_window

0x59bb,	// (0x00029afd) navi_slider_pane_g3

0x59c4,	// (0x00029b06) navi_slider_pane_g4

0x59cd,	// (0x00029b0f) navi_slider_pane_g5

0x59bb,	// (0x00029afd) navi_slider_pane_g6

0xb314,	// (0x0002f456) navi_slider_pane_g7

0x5cea,	// (0x00029e2c) mup_scale_pane_g3

0x5cf3,	// (0x00029e35) mup_scale_pane_g4

0x5cfc,	// (0x00029e3e) mup_scale_pane_g5

0x5d05,	// (0x00029e47) mup_scale_pane_g6

0x5d0e,	// (0x00029e50) mup_scale_pane_g7

0xc33d,	// (0x0003047f) cams2_slider_pane_g3

0xc33d,	// (0x0003047f) cams2_slider_pane_g4

0xc33d,	// (0x0003047f) cams2_slider_pane_g5

0xc33d,	// (0x0003047f) cams2_slider_pane_g6

0xc33d,	// (0x0003047f) cams2_slider_pane_g7

0x3e06,	// (0x00027f48) camera2_autofocus_pane_cp_g1

0xc0a2,	// (0x000301e4) bg_popup_preview_window_pane_cp02_ParamLimits

0xc0a2,	// (0x000301e4) bg_popup_preview_window_pane_cp02

0xc943,	// (0x00030a85) list_fp_cale_pane_ParamLimits

0xc943,	// (0x00030a85) list_fp_cale_pane

0xc94f,	// (0x00030a91) popup_fixed_preview_cale_window_t1_ParamLimits

0xc94f,	// (0x00030a91) popup_fixed_preview_cale_window_t1

0x774b,	// (0x0002b88d) popup_fixed_preview_cale_window_t2_ParamLimits

0x774b,	// (0x0002b88d) popup_fixed_preview_cale_window_t2

0x7760,	// (0x0002b8a2) popup_fixed_preview_cale_window_t3_ParamLimits

0x7760,	// (0x0002b8a2) popup_fixed_preview_cale_window_t3

0x0002,

0xf745,	// (0x00033887) popup_fixed_preview_cale_window_t_ParamLimits

0xf745,	// (0x00033887) popup_fixed_preview_cale_window_t

0x7775,	// (0x0002b8b7) list_single_fp_cale_pane_ParamLimits

0x7775,	// (0x0002b8b7) list_single_fp_cale_pane

0xc96d,	// (0x00030aaf) list_single_fp_cale_pane_g1_ParamLimits

0xc96d,	// (0x00030aaf) list_single_fp_cale_pane_g1

0xc979,	// (0x00030abb) list_single_fp_cale_pane_g2_ParamLimits

0xc979,	// (0x00030abb) list_single_fp_cale_pane_g2

0x0002,

0xf74c,	// (0x0003388e) list_single_fp_cale_pane_g_ParamLimits

0xf74c,	// (0x0003388e) list_single_fp_cale_pane_g

0xc992,	// (0x00030ad4) list_single_fp_cale_pane_t1_ParamLimits

0xc992,	// (0x00030ad4) list_single_fp_cale_pane_t1

0xc9a4,	// (0x00030ae6) list_single_fp_cale_pane_t2_ParamLimits

0xc9a4,	// (0x00030ae6) list_single_fp_cale_pane_t2

0x0001,

0xf753,	// (0x00033895) list_single_fp_cale_pane_t_ParamLimits

0xf753,	// (0x00033895) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb1b7,	// (0x0002f2f9) main_dialer_pane

0x2bdc,	// (0x00026d1e) aid_cell_size_keypad

0x2bdc,	// (0x00026d1e) dialer_ne_pane

0x2bdc,	// (0x00026d1e) grid_dialer_command_1_pane

0x2bdc,	// (0x00026d1e) grid_dialer_command_2_pane

0x2bdc,	// (0x00026d1e) grid_dialer_keypad_pane

0x778b,	// (0x0002b8cd) bg_popup_call_pane_cp06_ParamLimits

0x778b,	// (0x0002b8cd) bg_popup_call_pane_cp06

0x778b,	// (0x0002b8cd) dialer_ne_clear_pane_ParamLimits

0x778b,	// (0x0002b8cd) dialer_ne_clear_pane

0x3e06,	// (0x00027f48) dialer_ne_pane_g1

0x5a9d,	// (0x00029bdf) dialer_ne_pane_t1_ParamLimits

0x5a9d,	// (0x00029bdf) dialer_ne_pane_t1

0x7799,	// (0x0002b8db) dialer_ne_pane_t2_ParamLimits

0x7799,	// (0x0002b8db) dialer_ne_pane_t2

0x77c1,	// (0x0002b903) dialer_ne_pane_t3_ParamLimits

0x77c1,	// (0x0002b903) dialer_ne_pane_t3

0x0002,

0xf758,	// (0x0003389a) dialer_ne_pane_t_ParamLimits

0xf758,	// (0x0003389a) dialer_ne_pane_t

0x77c1,	// (0x0002b903) dialer_ne_pane_t3_copy1_ParamLimits

0x77c1,	// (0x0002b903) dialer_ne_pane_t3_copy1

0xc9d7,	// (0x00030b19) cell_dialer_keypad_pane_ParamLimits

0xc9d7,	// (0x00030b19) cell_dialer_keypad_pane

0x3314,	// (0x00027456) cell_dialer_command_1_pane_ParamLimits

0x3314,	// (0x00027456) cell_dialer_command_1_pane

0xc9ee,	// (0x00030b30) cell_dialer_command_2_pane_ParamLimits

0xc9ee,	// (0x00030b30) cell_dialer_command_2_pane

0x3314,	// (0x00027456) bg_button_pane_cp02_ParamLimits

0x3314,	// (0x00027456) bg_button_pane_cp02

0x337b,	// (0x000274bd) cell_dialer_keypad_pane_g1_ParamLimits

0x337b,	// (0x000274bd) cell_dialer_keypad_pane_g1

0x3314,	// (0x00027456) bg_button_pane_cp03_ParamLimits

0x3314,	// (0x00027456) bg_button_pane_cp03

0x337b,	// (0x000274bd) cell_dialer_command_1_pane_g1_ParamLimits

0x337b,	// (0x000274bd) cell_dialer_command_1_pane_g1

0x2bdc,	// (0x00026d1e) bg_button_pane_cp04

0x3e06,	// (0x00027f48) cell_dialer_command_2_pane_g1

0x2bdc,	// (0x00026d1e) bg_button_pane_cp06

0x3e06,	// (0x00027f48) dialer_ne_clear_pane_g1

0x584c,	// (0x0002998e) navi_pane_g2

0x587a,	// (0x000299bc) navi_pane_g3

0x0002,

0xf374,	// (0x000334b6) navi_pane_g

0x5909,	// (0x00029a4b) navi_pane_mv_g2

0x5930,	// (0x00029a72) navi_pane_mv_g5

0x5938,	// (0x00029a7a) navi_pane_mv_t1

0x34bd,	// (0x000275ff) main_clock2_pane

0x3314,	// (0x00027456) main_clock2_list_pane_ParamLimits

0x3314,	// (0x00027456) main_clock2_list_pane

0x7857,	// (0x0002b999) main_clock2_pane_t1_ParamLimits

0x7857,	// (0x0002b999) main_clock2_pane_t1

0x7892,	// (0x0002b9d4) main_clock2_pane_t2_ParamLimits

0x7892,	// (0x0002b9d4) main_clock2_pane_t2

0x0004,

0xf764,	// (0x000338a6) main_clock2_pane_t_ParamLimits

0xf764,	// (0x000338a6) main_clock2_pane_t

0x7932,	// (0x0002ba74) popup_clock_analogue_window_cp03_ParamLimits

0x7932,	// (0x0002ba74) popup_clock_analogue_window_cp03

0x7957,	// (0x0002ba99) popup_clock_digital_window_cp02_ParamLimits

0x7957,	// (0x0002ba99) popup_clock_digital_window_cp02

0x79ba,	// (0x0002bafc) main_clock2_list_single_pane_ParamLimits

0x79ba,	// (0x0002bafc) main_clock2_list_single_pane

0x3c19,	// (0x00027d5b) list_highlight_pane_cp05

0xca31,	// (0x00030b73) main_clock2_list_single_pane_t1

0x401c,	// (0x0002815e) popup_toolbar_window_cp04_ParamLimits

0x3389,	// (0x000274cb) camera2_autofocus_pane_g2_ParamLimits

0x3389,	// (0x000274cb) camera2_autofocus_pane_g2

0x3389,	// (0x000274cb) camera2_autofocus_pane_g3_ParamLimits

0x3389,	// (0x000274cb) camera2_autofocus_pane_g3

0x3389,	// (0x000274cb) camera2_autofocus_pane_g4_ParamLimits

0x3389,	// (0x000274cb) camera2_autofocus_pane_g4

0x3389,	// (0x000274cb) camera2_autofocus_pane_g5_ParamLimits

0x3389,	// (0x000274cb) camera2_autofocus_pane_g5

0x0004,

0xf6a8,	// (0x000337ea) camera2_autofocus_pane_g_ParamLimits

0xf6a8,	// (0x000337ea) camera2_autofocus_pane_g

0x70db,	// (0x0002b21d) camera2_autofocus_pane_cp_g2

0x70e3,	// (0x0002b225) camera2_autofocus_pane_cp_g3

0x70eb,	// (0x0002b22d) camera2_autofocus_pane_cp_g4

0x70f3,	// (0x0002b235) camera2_autofocus_pane_cp_g5

0x0004,

0xf70e,	// (0x00033850) camera2_autofocus_pane_cp_g

0x2bdc,	// (0x00026d1e) popup_dialer_spcha_window

0x2bdc,	// (0x00026d1e) bg_popup_sub_pane_cp07

0x2bdc,	// (0x00026d1e) list_spcha_pane

0xca3f,	// (0x00030b81) list_single_spcha_pane_ParamLimits

0xca3f,	// (0x00030b81) list_single_spcha_pane

0x2bdc,	// (0x00026d1e) list_highlight_pane_cp06

0x521b,	// (0x0002935d) list_single_spcha_pane_t1

0xbb3c,	// (0x0002fc7e) popup_call2_audio_out_window_g4_ParamLimits

0xbb3c,	// (0x0002fc7e) popup_call2_audio_out_window_g4

0xb1b7,	// (0x0002f2f9) main_imed2_pane

0xc0c8,	// (0x0003020a) popup_imed_adjust2_window

0x1d7e,	// (0x00025ec0) popup_imed_trans_window_ParamLimits

0x1d7e,	// (0x00025ec0) popup_imed_trans_window

0xc421,	// (0x00030563) popup_blid_sat_info2_window_t1

0xc42f,	// (0x00030571) popup_blid_sat_info2_window_t2

0x000a,

0xf63d,	// (0x0003377f) popup_blid_sat_info2_window_t

0x79cc,	// (0x0002bb0e) aid_size_cell_colour_35

0x79ec,	// (0x0002bb2e) aid_size_cell_colour_112

0x7a0c,	// (0x0002bb4e) aid_size_cell_effect

0x5ab1,	// (0x00029bf3) bg_tb_trans_pane_cp02

0x50ce,	// (0x00029210) heading_imed_pane

0x7a2c,	// (0x0002bb6e) listscroll_imed_pane

0xca51,	// (0x00030b93) heading_imed_pane_g1

0xca59,	// (0x00030b9b) heading_imed_pane_t1

0xca67,	// (0x00030ba9) grid_imed_colour_35_pane_ParamLimits

0xca67,	// (0x00030ba9) grid_imed_colour_35_pane

0x7a38,	// (0x0002bb7a) grid_imed_effect_pane

0xca7f,	// (0x00030bc1) list_imed_aspect_pane

0x7a4e,	// (0x0002bb90) scroll_pane_cp027_ParamLimits

0x7a4e,	// (0x0002bb90) scroll_pane_cp027

0x7a5f,	// (0x0002bba1) cell_imed_effect_pane_ParamLimits

0x7a5f,	// (0x0002bba1) cell_imed_effect_pane

0xca87,	// (0x00030bc9) cell_imed_colour_pane_ParamLimits

0xca87,	// (0x00030bc9) cell_imed_colour_pane

0xcac9,	// (0x00030c0b) cell_imed_colour_pane_g1_ParamLimits

0xcac9,	// (0x00030c0b) cell_imed_colour_pane_g1

0xcada,	// (0x00030c1c) hgihlgiht_grid_pane_cp016_ParamLimits

0xcada,	// (0x00030c1c) hgihlgiht_grid_pane_cp016

0x7a86,	// (0x0002bbc8) cell_imed_effect_pane_g1

0x7a8e,	// (0x0002bbd0) grid_highlight_pane_cp017

0xcaeb,	// (0x00030c2d) list_imed_single_pane_ParamLimits

0xcaeb,	// (0x00030c2d) list_imed_single_pane

0x2bdc,	// (0x00026d1e) list_highlight_pane_cp07

0xcb00,	// (0x00030c42) list_imed_aspect_pane_comp1_t1

0x5ab1,	// (0x00029bf3) bg_tb_trans_pane_cp05

0xcb22,	// (0x00030c64) popup_imed_adjust2_window_g1

0xcb49,	// (0x00030c8b) popup_imed_adjust2_window_t1

0xcb61,	// (0x00030ca3) slider_imed_adjust_pane

0xcb75,	// (0x00030cb7) slider_imed_adjust_pane_g1

0xcb85,	// (0x00030cc7) slider_imed_adjust_pane_g2

0xcb95,	// (0x00030cd7) slider_imed_adjust_pane_g3

0xcba6,	// (0x00030ce8) slider_imed_adjust_pane_g4

0x0003,

0xf781,	// (0x000338c3) slider_imed_adjust_pane_g

0x7a97,	// (0x0002bbd9) aid_size_cell_clipart2

0x7aa3,	// (0x0002bbe5) grid_imed_clipart_pane

0xcbb7,	// (0x00030cf9) scroll_pane_cp031

0x7aad,	// (0x0002bbef) cell_imed_clipart_pane_ParamLimits

0x7aad,	// (0x0002bbef) cell_imed_clipart_pane

0x7acf,	// (0x0002bc11) cell_imed_clipart_pane_g1

0x2bdc,	// (0x00026d1e) grid_highlight_pane_cp014

0x7833,	// (0x0002b975) main_clock2_pane_g1_ParamLimits

0x7833,	// (0x0002b975) main_clock2_pane_g1

0x7977,	// (0x0002bab9) aid_call2_pane_cp10

0x7989,	// (0x0002bacb) aid_call_pane_cp10

0x5746,	// (0x00029888) popup_clock_analogue_window_cp10_g1

0x5746,	// (0x00029888) popup_clock_analogue_window_cp10_g2

0x1f43,	// (0x00026085) popup_clock_analogue_window_cp10_g3

0x1f43,	// (0x00026085) popup_clock_analogue_window_cp10_g4

0x5746,	// (0x00029888) popup_clock_analogue_window_cp10_g5

0x0004,

0xf76f,	// (0x000338b1) popup_clock_analogue_window_cp10_g

0x799b,	// (0x0002badd) popup_clock_analogue_window_cp10_t1

0x1f59,	// (0x0002609b) clock_digital_number_pane_cp10_ParamLimits

0x1f59,	// (0x0002609b) clock_digital_number_pane_cp10

0x1f71,	// (0x000260b3) clock_digital_number_pane_cp11_ParamLimits

0x1f71,	// (0x000260b3) clock_digital_number_pane_cp11

0x1f89,	// (0x000260cb) clock_digital_number_pane_cp12_ParamLimits

0x1f89,	// (0x000260cb) clock_digital_number_pane_cp12

0x1fa3,	// (0x000260e5) clock_digital_number_pane_cp13_ParamLimits

0x1fa3,	// (0x000260e5) clock_digital_number_pane_cp13

0x1fbd,	// (0x000260ff) clock_digital_separator_pane_cp10_ParamLimits

0x1fbd,	// (0x000260ff) clock_digital_separator_pane_cp10

0x1fd7,	// (0x00026119) popup_clock_digital_window_cp02_t1_ParamLimits

0x1fd7,	// (0x00026119) popup_clock_digital_window_cp02_t1

0x32ea,	// (0x0002742c) clock_digital_number_pane_cp10_g1

0x32ea,	// (0x0002742c) clock_digital_number_pane_cp10_g2

0x0001,

0xf78a,	// (0x000338cc) clock_digital_number_pane_cp10_g

0x32ea,	// (0x0002742c) clock_digital_separator_pane_cp10_g1

0x32ea,	// (0x0002742c) clock_digital_separator_pane_g2_cp10

0x597a,	// (0x00029abc) navi_pane_vded_g4

0x5983,	// (0x00029ac5) navi_pane_vded_g5

0x598c,	// (0x00029ace) navi_pane_vded_t1

0xb1b7,	// (0x0002f2f9) main_vded_pane

0x7ad8,	// (0x0002bc1a) main_vded_pane_g1

0x7ae2,	// (0x0002bc24) main_vded_pane_g2

0x7aec,	// (0x0002bc2e) main_vded_pane_g3

0x0002,

0xf78f,	// (0x000338d1) main_vded_pane_g

0x7af6,	// (0x0002bc38) main_vded_pane_t1

0x7b04,	// (0x0002bc46) main_vded_pane_t2

0x0001,

0xf796,	// (0x000338d8) main_vded_pane_t

0x7b12,	// (0x0002bc54) vded_slider_pane

0x7b1a,	// (0x0002bc5c) vded_video_pane

0xcbbf,	// (0x00030d01) vded_video_pane_g1

0x7b22,	// (0x0002bc64) vded_video_pane_g2

0x3e06,	// (0x00027f48) vded_video_pane_g3

0x0002,

0xf79b,	// (0x000338dd) vded_video_pane_g

0xcbc9,	// (0x00030d0b) vded_slider_pane_g1

0xc334,	// (0x00030476) vded_slider_pane_g2

0xcbd2,	// (0x00030d14) vded_slider_pane_g3

0xcbdb,	// (0x00030d1d) vded_slider_pane_g4

0xcbe4,	// (0x00030d26) vded_slider_pane_g5

0x0004,

0xf7a2,	// (0x000338e4) vded_slider_pane_g

0x7697,	// (0x0002b7d9) mup3_rocker_pane_ParamLimits

0x7697,	// (0x0002b7d9) mup3_rocker_pane

0x7b2b,	// (0x0002bc6d) mup3_control_keys_pane_g1

0x7b33,	// (0x0002bc75) mup3_control_keys_pane_g2

0x7b3b,	// (0x0002bc7d) mup3_control_keys_pane_g3

0x7b43,	// (0x0002bc85) mup3_control_keys_pane_g4

0x0003,

0xf7ad,	// (0x000338ef) mup3_control_keys_pane_g

0x1944,	// (0x00025a86) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1944,	// (0x00025a86) popup_toolbar2_fixed_window_cp01

0x76cb,	// (0x0002b80d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x76cb,	// (0x0002b80d) popup_toolbar2_fixed_window_cp02

0xb4c5,	// (0x0002f607) popup_call2_audio_second_window_t4_ParamLimits

0xb4c5,	// (0x0002f607) popup_call2_audio_second_window_t4

0xba01,	// (0x0002fb43) popup_call2_audio_first_window_t6_ParamLimits

0xba01,	// (0x0002fb43) popup_call2_audio_first_window_t6

0xbc3f,	// (0x0002fd81) popup_call2_audio_out_window_t6_ParamLimits

0xbc3f,	// (0x0002fd81) popup_call2_audio_out_window_t6

0xb1b7,	// (0x0002f2f9) main_vitu_pane

0x3314,	// (0x00027456) aid_size_cell_itu_ParamLimits

0x3314,	// (0x00027456) aid_size_cell_itu

0x3314,	// (0x00027456) bg_popup_window_pane_cp08_ParamLimits

0x3314,	// (0x00027456) bg_popup_window_pane_cp08

0x3314,	// (0x00027456) field_vitu_entry_pane_ParamLimits

0x3314,	// (0x00027456) field_vitu_entry_pane

0x3314,	// (0x00027456) grid_vitu_function_pane_ParamLimits

0x3314,	// (0x00027456) grid_vitu_function_pane

0x3314,	// (0x00027456) grid_vitu_itu_pane_ParamLimits

0x3314,	// (0x00027456) grid_vitu_itu_pane

0x3314,	// (0x00027456) cell_vitu_itu_pane_ParamLimits

0x3314,	// (0x00027456) cell_vitu_itu_pane

0x3314,	// (0x00027456) cell_vitu_function_pane_ParamLimits

0x3314,	// (0x00027456) cell_vitu_function_pane

0x3314,	// (0x00027456) bg_popup_sub_pane_cp08_ParamLimits

0x3314,	// (0x00027456) bg_popup_sub_pane_cp08

0x3c82,	// (0x00027dc4) field_vitu_entry_pane_t1_ParamLimits

0x3c82,	// (0x00027dc4) field_vitu_entry_pane_t1

0xcbed,	// (0x00030d2f) field_vitu_entry_pane_t2_ParamLimits

0xcbed,	// (0x00030d2f) field_vitu_entry_pane_t2

0x0001,

0xf7b6,	// (0x000338f8) field_vitu_entry_pane_t_ParamLimits

0xf7b6,	// (0x000338f8) field_vitu_entry_pane_t

0xc3c8,	// (0x0003050a) bg_button_pane_cp05_ParamLimits

0xc3c8,	// (0x0003050a) bg_button_pane_cp05

0xcc0a,	// (0x00030d4c) cell_vitu_itu_pane_g1

0x5a89,	// (0x00029bcb) cell_vitu_itu_pane_t1_ParamLimits

0x5a89,	// (0x00029bcb) cell_vitu_itu_pane_t1

0x5a89,	// (0x00029bcb) cell_vitu_itu_pane_t2_ParamLimits

0x5a89,	// (0x00029bcb) cell_vitu_itu_pane_t2

0x0002,

0xf7bb,	// (0x000338fd) cell_vitu_itu_pane_t_ParamLimits

0xf7bb,	// (0x000338fd) cell_vitu_itu_pane_t

0x2bdc,	// (0x00026d1e) bg_button_pane_cp07

0x3e06,	// (0x00027f48) cell_vitu_function_pane_g1

0xb1c1,	// (0x0002f303) main_calc_pane_g1

0x17a4,	// (0x000258e6) aid_visual_content_pane

0xb1b7,	// (0x0002f2f9) main_vradio_pane

0x337b,	// (0x000274bd) main_vradio_pane_g1_ParamLimits

0x337b,	// (0x000274bd) main_vradio_pane_g1

0x3389,	// (0x000274cb) main_vradio_pane_g2_ParamLimits

0x3389,	// (0x000274cb) main_vradio_pane_g2

0x0001,

0xf7c2,	// (0x00033904) main_vradio_pane_g_ParamLimits

0xf7c2,	// (0x00033904) main_vradio_pane_g

0x3c82,	// (0x00027dc4) main_vradio_pane_t1_ParamLimits

0x3c82,	// (0x00027dc4) main_vradio_pane_t1

0x3c82,	// (0x00027dc4) main_vradio_pane_t2_ParamLimits

0x3c82,	// (0x00027dc4) main_vradio_pane_t2

0x5a9d,	// (0x00029bdf) main_vradio_pane_t3_ParamLimits

0x5a9d,	// (0x00029bdf) main_vradio_pane_t3

0x0002,

0xf7c7,	// (0x00033909) main_vradio_pane_t_ParamLimits

0xf7c7,	// (0x00033909) main_vradio_pane_t

0x3314,	// (0x00027456) vradio_rocker_control_pane_ParamLimits

0x3314,	// (0x00027456) vradio_rocker_control_pane

0x3314,	// (0x00027456) vradio_station_info_pane_ParamLimits

0x3314,	// (0x00027456) vradio_station_info_pane

0x3314,	// (0x00027456) vradio_frequency_info_pane_ParamLimits

0x3314,	// (0x00027456) vradio_frequency_info_pane

0x3e06,	// (0x00027f48) vradio_station_info_pane_g1

0x5a89,	// (0x00029bcb) vradio_station_info_pane_t1_ParamLimits

0x5a89,	// (0x00029bcb) vradio_station_info_pane_t1

0x5a9d,	// (0x00029bdf) vradio_station_info_pane_t2_ParamLimits

0x5a9d,	// (0x00029bdf) vradio_station_info_pane_t2

0x0001,

0xf7ce,	// (0x00033910) vradio_station_info_pane_t_ParamLimits

0xf7ce,	// (0x00033910) vradio_station_info_pane_t

0x2bdc,	// (0x00026d1e) vradio_tuning_pane

0x7b53,	// (0x0002bc95) vradio_rocker_control_pane_g1

0xcc26,	// (0x00030d68) vradio_rocker_control_pane_g2

0x7b5d,	// (0x0002bc9f) vradio_rocker_control_pane_g3

0x7b67,	// (0x0002bca9) vradio_rocker_control_pane_g4

0x7b71,	// (0x0002bcb3) vradio_rocker_control_pane_g5

0x0004,

0xf7d3,	// (0x00033915) vradio_rocker_control_pane_g

0x3e06,	// (0x00027f48) vradio_frequency_info_pane_g1

0x3c82,	// (0x00027dc4) vradio_frequency_info_pane_t1_ParamLimits

0x3c82,	// (0x00027dc4) vradio_frequency_info_pane_t1

0x7b7b,	// (0x0002bcbd) vradio_tuning_pane_g1

0x7b86,	// (0x0002bcc8) vradio_tuning_pane_t1

0xb168,	// (0x0002f2aa) area_side_right_pane_ParamLimits

0xb168,	// (0x0002f2aa) area_side_right_pane

0xc069,	// (0x000301ab) status_small_pane_g1

0xc071,	// (0x000301b3) status_small_pane_g2

0xc07a,	// (0x000301bc) status_small_pane_g3

0xc083,	// (0x000301c5) status_small_pane_g4

0x0003,

0xf59f,	// (0x000336e1) status_small_pane_g

0xc08c,	// (0x000301ce) status_small_pane_t1

0xb1b7,	// (0x0002f2f9) main_video3_pane

0xcc2e,	// (0x00030d70) cams_zoom_vslider_pane

0xcc36,	// (0x00030d78) image3_wide_pane_ParamLimits

0xcc36,	// (0x00030d78) image3_wide_pane

0xcc50,	// (0x00030d92) image3_wide_small_pane

0xcc5c,	// (0x00030d9e) main_video3_pane_g1_ParamLimits

0xcc5c,	// (0x00030d9e) main_video3_pane_g1

0xcc78,	// (0x00030dba) main_video3_pane_g2_ParamLimits

0xcc78,	// (0x00030dba) main_video3_pane_g2

0x0001,

0xf7de,	// (0x00033920) main_video3_pane_g_ParamLimits

0xf7de,	// (0x00033920) main_video3_pane_g

0xcc94,	// (0x00030dd6) main_video3_pane_t1_ParamLimits

0xcc94,	// (0x00030dd6) main_video3_pane_t1

0xccbf,	// (0x00030e01) main_video3_pane_t2_ParamLimits

0xccbf,	// (0x00030e01) main_video3_pane_t2

0xccea,	// (0x00030e2c) main_video3_pane_t3_ParamLimits

0xccea,	// (0x00030e2c) main_video3_pane_t3

0x0002,

0xf7e3,	// (0x00033925) main_video3_pane_t_ParamLimits

0xf7e3,	// (0x00033925) main_video3_pane_t

0xcd17,	// (0x00030e59) cams_zoom_vslider_pane_g1

0xcd20,	// (0x00030e62) cams_zoom_vslider_pane_g2

0x0001,

0xf7ea,	// (0x0003392c) cams_zoom_vslider_pane_g

0xcd28,	// (0x00030e6a) small_slider_vertical_pane

0x3e06,	// (0x00027f48) small_slider_vertical_pane_g1

0x3e06,	// (0x00027f48) small_slider_vertical_pane_g2

0xcd30,	// (0x00030e72) small_slider_vertical_pane_g3

0x0002,

0xf7ef,	// (0x00033931) small_slider_vertical_pane_g

0xb1b7,	// (0x0002f2f9) main_hwr_training_pane

0xcd39,	// (0x00030e7b) hwr_training_instruct_pane_ParamLimits

0xcd39,	// (0x00030e7b) hwr_training_instruct_pane

0x7b95,	// (0x0002bcd7) hwr_training_navi_pane_ParamLimits

0x7b95,	// (0x0002bcd7) hwr_training_navi_pane

0x7bb4,	// (0x0002bcf6) hwr_training_write_pane_ParamLimits

0x7bb4,	// (0x0002bcf6) hwr_training_write_pane

0x2bdc,	// (0x00026d1e) bg_frame_shadow_pane

0xcd70,	// (0x00030eb2) hwr_training_write_pane_g1

0xcd78,	// (0x00030eba) hwr_training_write_pane_g2

0xcd80,	// (0x00030ec2) hwr_training_write_pane_g3

0xcd88,	// (0x00030eca) hwr_training_write_pane_g4

0xcd90,	// (0x00030ed2) hwr_training_write_pane_g5

0xcd98,	// (0x00030eda) hwr_training_write_pane_g6

0xcda0,	// (0x00030ee2) hwr_training_write_pane_g7

0x0006,

0xf7f6,	// (0x00033938) hwr_training_write_pane_g

0xcda8,	// (0x00030eea) hwr_training_navi_pane_g1_ParamLimits

0xcda8,	// (0x00030eea) hwr_training_navi_pane_g1

0xcdba,	// (0x00030efc) hwr_training_navi_pane_g2_ParamLimits

0xcdba,	// (0x00030efc) hwr_training_navi_pane_g2

0xcdcc,	// (0x00030f0e) hwr_training_navi_pane_g3_ParamLimits

0xcdcc,	// (0x00030f0e) hwr_training_navi_pane_g3

0xcddc,	// (0x00030f1e) hwr_training_navi_pane_g4_ParamLimits

0xcddc,	// (0x00030f1e) hwr_training_navi_pane_g4

0x0004,

0xf805,	// (0x00033947) hwr_training_navi_pane_g_ParamLimits

0xf805,	// (0x00033947) hwr_training_navi_pane_g

0xcde9,	// (0x00030f2b) hwr_training_navi_pane_t1

0x7bef,	// (0x0002bd31) list_single_hwr_training_instruct_pane_ParamLimits

0x7bef,	// (0x0002bd31) list_single_hwr_training_instruct_pane

0xcdf7,	// (0x00030f39) list_single_hwr_training_instruct_pane_t1

0xc522,	// (0x00030664) bg_frame_shadow_pane_g1

0xce06,	// (0x00030f48) bg_frame_shadow_pane_g2

0xce0e,	// (0x00030f50) bg_frame_shadow_pane_g3

0xce16,	// (0x00030f58) bg_frame_shadow_pane_g4

0xce1e,	// (0x00030f60) bg_frame_shadow_pane_g5

0xce26,	// (0x00030f68) bg_frame_shadow_pane_g6

0xce2e,	// (0x00030f70) bg_frame_shadow_pane_g7

0x3648,	// (0x0002778a) bg_frame_shadow_pane_g8

0x0007,

0xf810,	// (0x00033952) bg_frame_shadow_pane_g

0xb1b7,	// (0x0002f2f9) main_video_tele_dialer_pane

0x2007,	// (0x00026149) aid_size_cell_video_keypad_ParamLimits

0x2007,	// (0x00026149) aid_size_cell_video_keypad

0x2021,	// (0x00026163) grid_video_dialer_keypad_pane_ParamLimits

0x2021,	// (0x00026163) grid_video_dialer_keypad_pane

0x206f,	// (0x000261b1) video_down_pane_cp_ParamLimits

0x206f,	// (0x000261b1) video_down_pane_cp

0x2085,	// (0x000261c7) cell_video_dialer_keypad_pane_ParamLimits

0x2085,	// (0x000261c7) cell_video_dialer_keypad_pane

0xce36,	// (0x00030f78) bg_button_pane_cp08_ParamLimits

0xce36,	// (0x00030f78) bg_button_pane_cp08

0x7c21,	// (0x0002bd63) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7c21,	// (0x0002bd63) cell_video_dialer_keypad_pane_g1

0x7681,	// (0x0002b7c3) mup3_rocker2_pane_ParamLimits

0x7681,	// (0x0002b7c3) mup3_rocker2_pane

0x3e06,	// (0x00027f48) mup3_rocker2_pane_g1

0x1c61,	// (0x00025da3) main_dialer2_pane

0xb1b7,	// (0x0002f2f9) main_mp4_pane

0xce60,	// (0x00030fa2) main_mp4_pane_g1_ParamLimits

0xce60,	// (0x00030fa2) main_mp4_pane_g1

0xce60,	// (0x00030fa2) main_mp4_pane_g2_ParamLimits

0xce60,	// (0x00030fa2) main_mp4_pane_g2

0x20a7,	// (0x000261e9) main_mp4_pane_g3_ParamLimits

0x20a7,	// (0x000261e9) main_mp4_pane_g3

0xce6e,	// (0x00030fb0) main_mp4_pane_g4_ParamLimits

0xce6e,	// (0x00030fb0) main_mp4_pane_g4

0xce9c,	// (0x00030fde) main_mp4_pane_g5_ParamLimits

0xce9c,	// (0x00030fde) main_mp4_pane_g5

0x0007,

0xf830,	// (0x00033972) main_mp4_pane_g_ParamLimits

0xf830,	// (0x00033972) main_mp4_pane_g

0xcf10,	// (0x00031052) main_mp4_pane_t1_ParamLimits

0xcf10,	// (0x00031052) main_mp4_pane_t1

0xcf6c,	// (0x000310ae) main_mp4_pane_t2_ParamLimits

0xcf6c,	// (0x000310ae) main_mp4_pane_t2

0xcfbe,	// (0x00031100) main_mp4_pane_t3_ParamLimits

0xcfbe,	// (0x00031100) main_mp4_pane_t3

0xcfe4,	// (0x00031126) main_mp4_pane_t4_ParamLimits

0xcfe4,	// (0x00031126) main_mp4_pane_t4

0x0003,

0xf841,	// (0x00033983) main_mp4_pane_t_ParamLimits

0xf841,	// (0x00033983) main_mp4_pane_t

0xd028,	// (0x0003116a) mp4_progress_pane_ParamLimits

0xd028,	// (0x0003116a) mp4_progress_pane

0xd072,	// (0x000311b4) mp4_rocker_pane_ParamLimits

0xd072,	// (0x000311b4) mp4_rocker_pane

0xd09a,	// (0x000311dc) mp4_progress_pane_t1

0xd0b3,	// (0x000311f5) mp4_progress_pane_t2

0x0001,

0xf84a,	// (0x0003398c) mp4_progress_pane_t

0xd0cc,	// (0x0003120e) mup_progress_pane_cp04

0xc33d,	// (0x0003047f) mp4_rocker_pane_g1

0x20e3,	// (0x00026225) aid_cell_size_keypad2_ParamLimits

0x20e3,	// (0x00026225) aid_cell_size_keypad2

0x20f9,	// (0x0002623b) dialer2_ne_pane_ParamLimits

0x20f9,	// (0x0002623b) dialer2_ne_pane

0x2113,	// (0x00026255) grid_dialer2_keypad_pane_ParamLimits

0x2113,	// (0x00026255) grid_dialer2_keypad_pane

0xc3c8,	// (0x0003050a) bg_popup_call_pane_cp07_ParamLimits

0xc3c8,	// (0x0003050a) bg_popup_call_pane_cp07

0x7c5b,	// (0x0002bd9d) dialer2_ne_pane_t1_ParamLimits

0x7c5b,	// (0x0002bd9d) dialer2_ne_pane_t1

0x212f,	// (0x00026271) cell_dialer2_keypad_pane_ParamLimits

0x212f,	// (0x00026271) cell_dialer2_keypad_pane

0xd0f1,	// (0x00031233) bg_button_pane_pane_cp04_ParamLimits

0xd0f1,	// (0x00031233) bg_button_pane_pane_cp04

0x7c97,	// (0x0002bdd9) cell_dialer2_keypad_pane_g1_ParamLimits

0x7c97,	// (0x0002bdd9) cell_dialer2_keypad_pane_g1

0x3ede,	// (0x00028020) aid_placing_vt_set_content_ParamLimits

0x3ede,	// (0x00028020) aid_placing_vt_set_content

0x3f06,	// (0x00028048) aid_placing_vt_set_title_ParamLimits

0x3f06,	// (0x00028048) aid_placing_vt_set_title

0xb1b7,	// (0x0002f2f9) main_image3_pane

0x21af,	// (0x000262f1) area_side_right_pane_cp01_ParamLimits

0x21af,	// (0x000262f1) area_side_right_pane_cp01

0xce60,	// (0x00030fa2) main_image3_pane_g1_ParamLimits

0xce60,	// (0x00030fa2) main_image3_pane_g1

0x21c6,	// (0x00026308) main_image3_pane_g2_ParamLimits

0x21c6,	// (0x00026308) main_image3_pane_g2

0x21ee,	// (0x00026330) main_image3_pane_g3_ParamLimits

0x21ee,	// (0x00026330) main_image3_pane_g3

0x2218,	// (0x0002635a) main_image3_pane_g4_ParamLimits

0x2218,	// (0x0002635a) main_image3_pane_g4

0x0003,

0xf859,	// (0x0003399b) main_image3_pane_g_ParamLimits

0xf859,	// (0x0003399b) main_image3_pane_g

0x2242,	// (0x00026384) main_image3_pane_t1_ParamLimits

0x2242,	// (0x00026384) main_image3_pane_t1

0x229a,	// (0x000263dc) main_image3_pane_t2_ParamLimits

0x229a,	// (0x000263dc) main_image3_pane_t2

0x22ec,	// (0x0002642e) main_image3_pane_t3_ParamLimits

0x22ec,	// (0x0002642e) main_image3_pane_t3

0x0003,

0xf862,	// (0x000339a4) main_image3_pane_t_ParamLimits

0xf862,	// (0x000339a4) main_image3_pane_t

0x3314,	// (0x00027456) grid_sctrl_middle_pane_cp01_ParamLimits

0x3314,	// (0x00027456) grid_sctrl_middle_pane_cp01

0x7cff,	// (0x0002be41) cell_sctrl_middle_pane_cp01_ParamLimits

0x7cff,	// (0x0002be41) cell_sctrl_middle_pane_cp01

0x7d1c,	// (0x0002be5e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7d1c,	// (0x0002be5e) cell_sctrl_middle_pane_cp01_g1

0xb1b7,	// (0x0002f2f9) main_call4_pane

0x2374,	// (0x000264b6) aid_size_button_call4_ParamLimits

0x2374,	// (0x000264b6) aid_size_button_call4

0x23a7,	// (0x000264e9) call4_windows_pane_ParamLimits

0x23a7,	// (0x000264e9) call4_windows_pane

0x23c6,	// (0x00026508) grid_call4_button_pane_ParamLimits

0x23c6,	// (0x00026508) grid_call4_button_pane

0x7d3c,	// (0x0002be7e) call4_windows_conf_pane

0x7d51,	// (0x0002be93) popup_call4_audio_first_window_ParamLimits

0x7d51,	// (0x0002be93) popup_call4_audio_first_window

0x7da1,	// (0x0002bee3) popup_call4_audio_second_window_ParamLimits

0x7da1,	// (0x0002bee3) popup_call4_audio_second_window

0x7db8,	// (0x0002befa) popup_call4_audio_wait_window_ParamLimits

0x7db8,	// (0x0002befa) popup_call4_audio_wait_window

0x23ef,	// (0x00026531) cell_call4_button_pane_ParamLimits

0x23ef,	// (0x00026531) cell_call4_button_pane

0x7dc6,	// (0x0002bf08) bg_button_pane_cp09_ParamLimits

0x7dc6,	// (0x0002bf08) bg_button_pane_cp09

0x2414,	// (0x00026556) cell_call4_button_pane_g1_ParamLimits

0x2414,	// (0x00026556) cell_call4_button_pane_g1

0x243a,	// (0x0002657c) cell_call4_button_pane_t1_ParamLimits

0x243a,	// (0x0002657c) cell_call4_button_pane_t1

0xd169,	// (0x000312ab) popup_call4_audio_conf_window_ParamLimits

0xd169,	// (0x000312ab) popup_call4_audio_conf_window

0x76e1,	// (0x0002b823) mup3_progress_pane_t1_ParamLimits

0x7700,	// (0x0002b842) mup3_progress_pane_t2_ParamLimits

0xc900,	// (0x00030a42) mup3_progress_pane_t3_ParamLimits

0xf737,	// (0x00033879) mup3_progress_pane_t_ParamLimits

0xc91d,	// (0x00030a5f) mup_progress_pane_cp03_ParamLimits

0x7b4b,	// (0x0002bc8d) mup3_control_keys_pane_g4_copy1

0xd056,	// (0x00031198) mp4_rocker2_pane_ParamLimits

0xd056,	// (0x00031198) mp4_rocker2_pane

0xd17d,	// (0x000312bf) mp4_rocker2_pane_g1

0xd185,	// (0x000312c7) mp4_rocker2_pane_g2

0xd18d,	// (0x000312cf) mp4_rocker2_pane_g3

0xd195,	// (0x000312d7) mp4_rocker2_pane_g4

0xd19d,	// (0x000312df) mp4_rocker2_pane_g5

0x0004,

0xf86b,	// (0x000339ad) mp4_rocker2_pane_g

0xb1b7,	// (0x0002f2f9) main_camera4_pane

0xb1b7,	// (0x0002f2f9) main_video4_pane

0x203d,	// (0x0002617f) main_video_tele_dialer_pane_t1_ParamLimits

0x203d,	// (0x0002617f) main_video_tele_dialer_pane_t1

0x2056,	// (0x00026198) main_video_tele_dialer_pane_t2_ParamLimits

0x2056,	// (0x00026198) main_video_tele_dialer_pane_t2

0x0001,

0xf821,	// (0x00033963) main_video_tele_dialer_pane_t_ParamLimits

0xf821,	// (0x00033963) main_video_tele_dialer_pane_t

0x247c,	// (0x000265be) cam4_autofocus_pane_ParamLimits

0x247c,	// (0x000265be) cam4_autofocus_pane

0x2492,	// (0x000265d4) cam4_image_uncrop_pane_ParamLimits

0x2492,	// (0x000265d4) cam4_image_uncrop_pane

0x24ac,	// (0x000265ee) cam4_indicators_pane_ParamLimits

0x24ac,	// (0x000265ee) cam4_indicators_pane

0x24d7,	// (0x00026619) main_camera4_pane_g1_ParamLimits

0x24d7,	// (0x00026619) main_camera4_pane_g1

0x24e9,	// (0x0002662b) main_camera4_pane_g2_ParamLimits

0x24e9,	// (0x0002662b) main_camera4_pane_g2

0x24fc,	// (0x0002663e) main_camera4_pane_g3_ParamLimits

0x24fc,	// (0x0002663e) main_camera4_pane_g3

0x250f,	// (0x00026651) main_camera4_pane_g4_ParamLimits

0x250f,	// (0x00026651) main_camera4_pane_g4

0x2522,	// (0x00026664) main_camera4_pane_g5_ParamLimits

0x2522,	// (0x00026664) main_camera4_pane_g5

0x0005,

0xf876,	// (0x000339b8) main_camera4_pane_g_ParamLimits

0xf876,	// (0x000339b8) main_camera4_pane_g

0x2546,	// (0x00026688) main_camera4_pane_t1_ParamLimits

0x2546,	// (0x00026688) main_camera4_pane_t1

0xd1c1,	// (0x00031303) bg_tb_trans_pane_cp06

0xd1d7,	// (0x00031319) cam4_indicators_pane_g1

0xd1e8,	// (0x0003132a) cam4_indicators_pane_g2

0x0002,

0xf891,	// (0x000339d3) cam4_indicators_pane_g

0xd200,	// (0x00031342) cam4_indicators_pane_t1

0x2596,	// (0x000266d8) main_video4_pane_g1_ParamLimits

0x2596,	// (0x000266d8) main_video4_pane_g1

0x25a5,	// (0x000266e7) main_video4_pane_g2_ParamLimits

0x25a5,	// (0x000266e7) main_video4_pane_g2

0x25b4,	// (0x000266f6) main_video4_pane_g3_ParamLimits

0x25b4,	// (0x000266f6) main_video4_pane_g3

0x25c3,	// (0x00026705) main_video4_pane_g4_ParamLimits

0x25c3,	// (0x00026705) main_video4_pane_g4

0x0004,

0xf898,	// (0x000339da) main_video4_pane_g_ParamLimits

0xf898,	// (0x000339da) main_video4_pane_g

0x25e1,	// (0x00026723) vid4_indicators_pane_ParamLimits

0x25e1,	// (0x00026723) vid4_indicators_pane

0x260f,	// (0x00026751) video4_image_uncrop_cif_pane_ParamLimits

0x260f,	// (0x00026751) video4_image_uncrop_cif_pane

0x2629,	// (0x0002676b) video4_image_uncrop_nhd_pane_ParamLimits

0x2629,	// (0x0002676b) video4_image_uncrop_nhd_pane

0x2492,	// (0x000265d4) video4_image_uncrop_vga_pane_ParamLimits

0x2492,	// (0x000265d4) video4_image_uncrop_vga_pane

0xb1a9,	// (0x0002f2eb) bg_tb_trans_pane_cp07

0xd22a,	// (0x0003136c) vid4_indicators_pane_g1

0xd23e,	// (0x00031380) vid4_indicators_pane_g2

0xd252,	// (0x00031394) vid4_indicators_pane_g3

0x0004,

0xf8a3,	// (0x000339e5) vid4_indicators_pane_g

0xd27f,	// (0x000313c1) vid4_indicators_pane_t1

0x7de6,	// (0x0002bf28) cam4_autofocus_pane_g1

0x7dee,	// (0x0002bf30) cam4_autofocus_pane_g2

0x7df6,	// (0x0002bf38) cam4_autofocus_pane_g3

0x0002,

0xf8ae,	// (0x000339f0) cam4_autofocus_pane_g

0x7dfe,	// (0x0002bf40) cam4_autofocus_pane_g3_copy1

0x7c05,	// (0x0002bd47) video_down_pane_cp_t1

0x7c13,	// (0x0002bd55) video_down_pane_cp_t2

0x0001,

0xf826,	// (0x00033968) video_down_pane_cp_t

0xb1a9,	// (0x0002f2eb) popup_vitu2_window_ParamLimits

0xb1a9,	// (0x0002f2eb) popup_vitu2_window

0x263d,	// (0x0002677f) aid_size_cell2_itu2_ParamLimits

0x263d,	// (0x0002677f) aid_size_cell2_itu2

0x265d,	// (0x0002679f) aid_size_cell_itu2_ParamLimits

0x265d,	// (0x0002679f) aid_size_cell_itu2

0x26aa,	// (0x000267ec) bg_popup_window_pane_cp09_ParamLimits

0x26aa,	// (0x000267ec) bg_popup_window_pane_cp09

0x26b8,	// (0x000267fa) field_vitu2_entry_pane_ParamLimits

0x26b8,	// (0x000267fa) field_vitu2_entry_pane

0x26db,	// (0x0002681d) grid_vitu2_function_pane_ParamLimits

0x26db,	// (0x0002681d) grid_vitu2_function_pane

0x2726,	// (0x00026868) grid_vitu2_itu_pane_ParamLimits

0x2726,	// (0x00026868) grid_vitu2_itu_pane

0x27b4,	// (0x000268f6) cell_vitu2_itu_pane_ParamLimits

0x27b4,	// (0x000268f6) cell_vitu2_itu_pane

0x27e0,	// (0x00026922) cell_vitu2_function_pane_ParamLimits

0x27e0,	// (0x00026922) cell_vitu2_function_pane

0xd296,	// (0x000313d8) bg_popup_call_pane_cp08_ParamLimits

0xd296,	// (0x000313d8) bg_popup_call_pane_cp08

0xd2ad,	// (0x000313ef) field_vitu2_entry_pane_g1

0xd2b9,	// (0x000313fb) field_vitu2_entry_pane_g2

0x0002,

0xf8b5,	// (0x000339f7) field_vitu2_entry_pane_g

0x7e06,	// (0x0002bf48) field_vitu2_entry_pane_t1_ParamLimits

0x7e06,	// (0x0002bf48) field_vitu2_entry_pane_t1

0xd2c5,	// (0x00031407) field_vitu2_entry_pane_t2_ParamLimits

0xd2c5,	// (0x00031407) field_vitu2_entry_pane_t2

0x0001,

0xf8bc,	// (0x000339fe) field_vitu2_entry_pane_t_ParamLimits

0xf8bc,	// (0x000339fe) field_vitu2_entry_pane_t

0x281f,	// (0x00026961) bg_button_pane_cp010_ParamLimits

0x281f,	// (0x00026961) bg_button_pane_cp010

0x282d,	// (0x0002696f) cell_vitu2_itu_pane_g1

0x2853,	// (0x00026995) cell_vitu2_itu_pane_t1_ParamLimits

0x2853,	// (0x00026995) cell_vitu2_itu_pane_t1

0x28b1,	// (0x000269f3) cell_vitu2_itu_pane_t2_ParamLimits

0x28b1,	// (0x000269f3) cell_vitu2_itu_pane_t2

0x0002,

0xf8c6,	// (0x00033a08) cell_vitu2_itu_pane_t_ParamLimits

0xf8c6,	// (0x00033a08) cell_vitu2_itu_pane_t

0xb1a9,	// (0x0002f2eb) bg_button_pane_cp011

0x299d,	// (0x00026adf) cell_vitu2_function_pane_g1

0xb1b7,	// (0x0002f2f9) main_myfav_hc_pane

0x233c,	// (0x0002647e) popup_image3_note_pane_ParamLimits

0x233c,	// (0x0002647e) popup_image3_note_pane

0x2358,	// (0x0002649a) popup_image3_tool_bar_pane_ParamLimits

0x2358,	// (0x0002649a) popup_image3_tool_bar_pane

0x293f,	// (0x00026a81) cell_vitu2_itu_pane_t3_ParamLimits

0x293f,	// (0x00026a81) cell_vitu2_itu_pane_t3

0x2bdc,	// (0x00026d1e) bg_popup_trans_pane

0xd2ea,	// (0x0003142c) grid_image3_tool_bar_pane

0xd2f4,	// (0x00031436) bg_popup_trans_pane_g1

0x44cd,	// (0x0002860f) bg_popup_trans_pane_g2

0xd2fc,	// (0x0003143e) bg_popup_trans_pane_g3

0xd304,	// (0x00031446) bg_popup_trans_pane_g4

0xd30c,	// (0x0003144e) bg_popup_trans_pane_g5

0xd314,	// (0x00031456) bg_popup_trans_pane_g6

0xd31c,	// (0x0003145e) bg_popup_trans_pane_g7

0xd324,	// (0x00031466) bg_popup_trans_pane_g8

0x44ad,	// (0x000285ef) bg_popup_trans_pane_g9

0x0008,

0xf8cd,	// (0x00033a0f) bg_popup_trans_pane_g

0xd32c,	// (0x0003146e) cell_image3_tool_bar_pane_ParamLimits

0xd32c,	// (0x0003146e) cell_image3_tool_bar_pane

0x3e06,	// (0x00027f48) cell_image3_tool_bar_pane_g1

0x2bdc,	// (0x00026d1e) bg_popup_trans_pane_cp1

0xd340,	// (0x00031482) popup_image3_note_pane_t1

0xd34e,	// (0x00031490) popup_image3_note_pane_t2

0xd35c,	// (0x0003149e) popup_image3_note_pane_t3

0x0002,

0xf8e0,	// (0x00033a22) popup_image3_note_pane_t

0xd36a,	// (0x000314ac) popup_image3_note_pane_t3_copy1

0x7e36,	// (0x0002bf78) bg_myfav_hc_instruction_pane_ParamLimits

0x7e36,	// (0x0002bf78) bg_myfav_hc_instruction_pane

0x7e4a,	// (0x0002bf8c) cell_myfav_contact_pane_ParamLimits

0x7e4a,	// (0x0002bf8c) cell_myfav_contact_pane

0x7e68,	// (0x0002bfaa) cell_myfav_contact_pane_cp1_ParamLimits

0x7e68,	// (0x0002bfaa) cell_myfav_contact_pane_cp1

0x7e80,	// (0x0002bfc2) cell_myfav_contact_pane_cp2_ParamLimits

0x7e80,	// (0x0002bfc2) cell_myfav_contact_pane_cp2

0x7e98,	// (0x0002bfda) cell_myfav_contact_pane_cp3_ParamLimits

0x7e98,	// (0x0002bfda) cell_myfav_contact_pane_cp3

0x7eaf,	// (0x0002bff1) cell_myfav_contact_pane_cp4_ParamLimits

0x7eaf,	// (0x0002bff1) cell_myfav_contact_pane_cp4

0x7ec7,	// (0x0002c009) cell_myfav_contact_pane_cp5_ParamLimits

0x7ec7,	// (0x0002c009) cell_myfav_contact_pane_cp5

0x7edb,	// (0x0002c01d) cell_myfav_contact_pane_cp6_ParamLimits

0x7edb,	// (0x0002c01d) cell_myfav_contact_pane_cp6

0x7ef1,	// (0x0002c033) cell_myfav_contact_pane_cp7_ParamLimits

0x7ef1,	// (0x0002c033) cell_myfav_contact_pane_cp7

0xd378,	// (0x000314ba) listscroll_gen_pane_cp05

0x7f0b,	// (0x0002c04d) main_myfav_hc_pane_g1_ParamLimits

0x7f0b,	// (0x0002c04d) main_myfav_hc_pane_g1

0x7f25,	// (0x0002c067) main_myfav_hc_pane_g2_ParamLimits

0x7f25,	// (0x0002c067) main_myfav_hc_pane_g2

0x0002,

0xf8e7,	// (0x00033a29) main_myfav_hc_pane_g_ParamLimits

0xf8e7,	// (0x00033a29) main_myfav_hc_pane_g

0x7f57,	// (0x0002c099) main_myfav_hc_pane_t1_ParamLimits

0x7f57,	// (0x0002c099) main_myfav_hc_pane_t1

0xd381,	// (0x000314c3) main_myfav_hc_pane_t2_ParamLimits

0xd381,	// (0x000314c3) main_myfav_hc_pane_t2

0xd393,	// (0x000314d5) main_myfav_hc_pane_t3_ParamLimits

0xd393,	// (0x000314d5) main_myfav_hc_pane_t3

0x7f6e,	// (0x0002c0b0) main_myfav_hc_pane_t4_ParamLimits

0x7f6e,	// (0x0002c0b0) main_myfav_hc_pane_t4

0x0004,

0xf8ee,	// (0x00033a30) main_myfav_hc_pane_t_ParamLimits

0xf8ee,	// (0x00033a30) main_myfav_hc_pane_t

0x3e06,	// (0x00027f48) bg_myfav_hc_instruction_pane_g1

0xd3a5,	// (0x000314e7) cell_myfav_contact_pane_g1_ParamLimits

0xd3a5,	// (0x000314e7) cell_myfav_contact_pane_g1

0xd3a5,	// (0x000314e7) cell_myfav_contact_pane_g2_ParamLimits

0xd3a5,	// (0x000314e7) cell_myfav_contact_pane_g2

0xd3b1,	// (0x000314f3) cell_myfav_contact_pane_g3_ParamLimits

0xd3b1,	// (0x000314f3) cell_myfav_contact_pane_g3

0x3389,	// (0x000274cb) cell_myfav_contact_pane_g4_ParamLimits

0x3389,	// (0x000274cb) cell_myfav_contact_pane_g4

0xd3be,	// (0x00031500) cell_myfav_contact_pane_g5_ParamLimits

0xd3be,	// (0x00031500) cell_myfav_contact_pane_g5

0x0004,

0xf8f9,	// (0x00033a3b) cell_myfav_contact_pane_g_ParamLimits

0xf8f9,	// (0x00033a3b) cell_myfav_contact_pane_g

0x7f3f,	// (0x0002c081) main_myfav_hc_pane_g3_ParamLimits

0x7f3f,	// (0x0002c081) main_myfav_hc_pane_g3

0x18a6,	// (0x000259e8) popup_adpt_find_window

0x7f96,	// (0x0002c0d8) afind_page_pane_ParamLimits

0x7f96,	// (0x0002c0d8) afind_page_pane

0x7fab,	// (0x0002c0ed) aid_size_cell_afind_ParamLimits

0x7fab,	// (0x0002c0ed) aid_size_cell_afind

0x7fc9,	// (0x0002c10b) bg_popup_sub_pane_cp09_ParamLimits

0x7fc9,	// (0x0002c10b) bg_popup_sub_pane_cp09

0x7fd6,	// (0x0002c118) find_pane_cp01_ParamLimits

0x7fd6,	// (0x0002c118) find_pane_cp01

0xd3ca,	// (0x0003150c) grid_afind_control_pane_ParamLimits

0xd3ca,	// (0x0003150c) grid_afind_control_pane

0x7fe3,	// (0x0002c125) grid_afind_pane_ParamLimits

0x7fe3,	// (0x0002c125) grid_afind_pane

0x8002,	// (0x0002c144) cell_afind_pane_ParamLimits

0x8002,	// (0x0002c144) cell_afind_pane

0x3e06,	// (0x00027f48) afind_page_pane_g1

0x8069,	// (0x0002c1ab) afind_page_pane_g2

0x8072,	// (0x0002c1b4) afind_page_pane_g3

0x0002,

0xf904,	// (0x00033a46) afind_page_pane_g

0x807b,	// (0x0002c1bd) afind_page_pane_t1

0xd3de,	// (0x00031520) cell_afind_grid_control_pane_ParamLimits

0xd3de,	// (0x00031520) cell_afind_grid_control_pane

0xd0f1,	// (0x00031233) bg_button_pane_cp69_ParamLimits

0xd0f1,	// (0x00031233) bg_button_pane_cp69

0x809b,	// (0x0002c1dd) cell_afind_pane_g1_ParamLimits

0x809b,	// (0x0002c1dd) cell_afind_pane_g1

0x80a8,	// (0x0002c1ea) cell_afind_pane_t1_ParamLimits

0x80a8,	// (0x0002c1ea) cell_afind_pane_t1

0x3e71,	// (0x00027fb3) bg_button_pane_cp72

0xd3ed,	// (0x0003152f) cell_afind_grid_control_pane_g1

0x650e,	// (0x0002a650) aid_image_placing_area_ParamLimits

0x650e,	// (0x0002a650) aid_image_placing_area

0x337b,	// (0x000274bd) field_vitu_entry_pane_g1_ParamLimits

0x337b,	// (0x000274bd) field_vitu_entry_pane_g1

0x337b,	// (0x000274bd) field_vitu_entry_pane_g2_ParamLimits

0x337b,	// (0x000274bd) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00033343) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00033343) field_vitu_entry_pane_g

0xcc0a,	// (0x00030d4c) cell_vitu_itu_pane_g1_ParamLimits

0xcbed,	// (0x00030d2f) cell_vitu_itu_pane_t3_ParamLimits

0xcbed,	// (0x00030d2f) cell_vitu_itu_pane_t3

0xd09a,	// (0x000311dc) mp4_progress_pane_t1_ParamLimits

0xd0b3,	// (0x000311f5) mp4_progress_pane_t2_ParamLimits

0xf84a,	// (0x0003398c) mp4_progress_pane_t_ParamLimits

0xd0cc,	// (0x0003120e) mup_progress_pane_cp04_ParamLimits

0x7f82,	// (0x0002c0c4) main_myfav_hc_pane_t5_ParamLimits

0x7f82,	// (0x0002c0c4) main_myfav_hc_pane_t5

0xb160,	// (0x0002f2a2) aid_zoom_text_primary

0x18a6,	// (0x000259e8) popup_adpt_find_window_ParamLimits

0xb1a9,	// (0x0002f2eb) main_cam_set_pane

0x24c3,	// (0x00026605) cam4_zoom_pane_ParamLimits

0x24c3,	// (0x00026605) cam4_zoom_pane

0x80ba,	// (0x0002c1fc) main_cam_set_pane_g1_ParamLimits

0x80ba,	// (0x0002c1fc) main_cam_set_pane_g1

0x80c8,	// (0x0002c20a) main_cam_set_pane_g2_ParamLimits

0x80c8,	// (0x0002c20a) main_cam_set_pane_g2

0x0001,

0xf90b,	// (0x00033a4d) main_cam_set_pane_g_ParamLimits

0xf90b,	// (0x00033a4d) main_cam_set_pane_g

0x80e9,	// (0x0002c22b) main_cam_set_pane_t1_ParamLimits

0x80e9,	// (0x0002c22b) main_cam_set_pane_t1

0x8104,	// (0x0002c246) main_cset_listscroll_pane_ParamLimits

0x8104,	// (0x0002c246) main_cset_listscroll_pane

0x812a,	// (0x0002c26c) main_cset_slider_pane_ParamLimits

0x812a,	// (0x0002c26c) main_cset_slider_pane

0xd3fe,	// (0x00031540) main_cset_list_pane_ParamLimits

0xd3fe,	// (0x00031540) main_cset_list_pane

0xd40e,	// (0x00031550) scroll_pane_cp028

0x8150,	// (0x0002c292) aid_area_touch_slider

0x816c,	// (0x0002c2ae) cset_slider_pane

0x818f,	// (0x0002c2d1) main_cset_slider_pane_g1

0x81a4,	// (0x0002c2e6) main_cset_slider_pane_g2

0x0011,

0xf910,	// (0x00033a52) main_cset_slider_pane_g

0xd45f,	// (0x000315a1) main_cset_slider_pane_t1

0x8248,	// (0x0002c38a) main_cset_slider_pane_t2

0x8262,	// (0x0002c3a4) main_cset_slider_pane_t3

0x827c,	// (0x0002c3be) main_cset_slider_pane_t4

0x8296,	// (0x0002c3d8) main_cset_slider_pane_t5

0x82b0,	// (0x0002c3f2) main_cset_slider_pane_t6

0x82c5,	// (0x0002c407) main_cset_slider_pane_t7

0x000e,

0xf935,	// (0x00033a77) main_cset_slider_pane_t

0x83c9,	// (0x0002c50b) cset_list_set_pane_ParamLimits

0x83c9,	// (0x0002c50b) cset_list_set_pane

0xd4f9,	// (0x0003163b) aid_position_infowindow_above

0xd501,	// (0x00031643) aid_position_infowindow_below

0x83db,	// (0x0002c51d) cset_list_set_pane_g1_ParamLimits

0x83db,	// (0x0002c51d) cset_list_set_pane_g1

0x83e7,	// (0x0002c529) cset_list_set_pane_g3_ParamLimits

0x83e7,	// (0x0002c529) cset_list_set_pane_g3

0x0001,

0xf954,	// (0x00033a96) cset_list_set_pane_g_ParamLimits

0xf954,	// (0x00033a96) cset_list_set_pane_g

0x83f6,	// (0x0002c538) cset_list_set_pane_t1_ParamLimits

0x83f6,	// (0x0002c538) cset_list_set_pane_t1

0x3314,	// (0x00027456) list_highlight_pane_cp021_ParamLimits

0x3314,	// (0x00027456) list_highlight_pane_cp021

0x5cea,	// (0x00029e2c) cset_slider_pane_g1

0x5cfc,	// (0x00029e3e) cset_slider_pane_g2

0x5cf3,	// (0x00029e35) cset_slider_pane_g3

0x0002,

0xf959,	// (0x00033a9b) cset_slider_pane_g

0xd509,	// (0x0003164b) aid_area_touch_cam4_zoom

0xd511,	// (0x00031653) cam4_zoom_cont_pane

0xd519,	// (0x0003165b) cam4_zoom_pane_g1

0xd521,	// (0x00031663) cam4_zoom_pane_g2

0x29b1,	// (0x00026af3) cam4_zoom_pane_g3

0x0002,

0xf960,	// (0x00033aa2) cam4_zoom_pane_g

0xd529,	// (0x0003166b) cam4_zoom_cont_pane_g1

0xd532,	// (0x00031674) cam4_zoom_cont_pane_g2

0xd53b,	// (0x0003167d) cam4_zoom_cont_pane_g3

0x0002,

0xf967,	// (0x00033aa9) cam4_zoom_cont_pane_g

0x2392,	// (0x000264d4) call4_image_pane_ParamLimits

0x2392,	// (0x000264d4) call4_image_pane

0x7d3c,	// (0x0002be7e) call4_windows_conf_pane_ParamLimits

0x7d7f,	// (0x0002bec1) popup_call4_audio_in_window_ParamLimits

0x7d7f,	// (0x0002bec1) popup_call4_audio_in_window

0x2bdc,	// (0x00026d1e) bg_popup_call2_act_pane_cp02

0xd161,	// (0x000312a3) call4_list_conf_pane

0x3e06,	// (0x00027f48) call4_image_pane_g1

0x3e06,	// (0x00027f48) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x0003351a) call4_image_pane_g

0xd544,	// (0x00031686) list_single_graphic_popup_conf4_pane_ParamLimits

0xd544,	// (0x00031686) list_single_graphic_popup_conf4_pane

0x2bdc,	// (0x00026d1e) list_highlight_pane_cp022

0xd557,	// (0x00031699) list_single_graphic_popup_conf4_pane_g1

0x545e,	// (0x000295a0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf96e,	// (0x00033ab0) list_single_graphic_popup_conf4_pane_g

0xd55f,	// (0x000316a1) list_single_graphic_popup_conf4_pane_t1

0x403c,	// (0x0002817e) popup_vtel_slider_window_ParamLimits

0x403c,	// (0x0002817e) popup_vtel_slider_window

0xd0df,	// (0x00031221) dialer2_ne_pane_t2_ParamLimits

0xd0df,	// (0x00031221) dialer2_ne_pane_t2

0x0001,

0xf84f,	// (0x00033991) dialer2_ne_pane_t_ParamLimits

0xf84f,	// (0x00033991) dialer2_ne_pane_t

0xc3c8,	// (0x0003050a) bg_popup_sub_pane_cp010_ParamLimits

0xc3c8,	// (0x0003050a) bg_popup_sub_pane_cp010

0x840b,	// (0x0002c54d) popup_vtel_slider_window_g1_ParamLimits

0x840b,	// (0x0002c54d) popup_vtel_slider_window_g1

0x841e,	// (0x0002c560) popup_vtel_slider_window_g2_ParamLimits

0x841e,	// (0x0002c560) popup_vtel_slider_window_g2

0x0003,

0xf973,	// (0x00033ab5) popup_vtel_slider_window_g_ParamLimits

0xf973,	// (0x00033ab5) popup_vtel_slider_window_g

0x8474,	// (0x0002c5b6) vtel_slider_pane_ParamLimits

0x8474,	// (0x0002c5b6) vtel_slider_pane

0x8496,	// (0x0002c5d8) vtel_slider_pane_g1_ParamLimits

0x8496,	// (0x0002c5d8) vtel_slider_pane_g1

0x84aa,	// (0x0002c5ec) vtel_slider_pane_g2_ParamLimits

0x84aa,	// (0x0002c5ec) vtel_slider_pane_g2

0x84c2,	// (0x0002c604) vtel_slider_pane_g3_ParamLimits

0x84c2,	// (0x0002c604) vtel_slider_pane_g3

0x8496,	// (0x0002c5d8) vtel_slider_pane_g4_ParamLimits

0x8496,	// (0x0002c5d8) vtel_slider_pane_g4

0x84d8,	// (0x0002c61a) vtel_slider_pane_g5_ParamLimits

0x84d8,	// (0x0002c61a) vtel_slider_pane_g5

0x0004,

0xf97c,	// (0x00033abe) vtel_slider_pane_g_ParamLimits

0xf97c,	// (0x00033abe) vtel_slider_pane_g

0xb1a9,	// (0x0002f2eb) main_gallery2_pane

0x267d,	// (0x000267bf) aid_size_row_itut2_dropdow_list_ParamLimits

0x267d,	// (0x000267bf) aid_size_row_itut2_dropdow_list

0x2700,	// (0x00026842) grid_vitu2_function_top_pane_ParamLimits

0x2700,	// (0x00026842) grid_vitu2_function_top_pane

0x2762,	// (0x000268a4) popup_vitu2_dropdown_list_window_ParamLimits

0x2762,	// (0x000268a4) popup_vitu2_dropdown_list_window

0x2788,	// (0x000268ca) popup_vitu2_match_list_window

0x29b9,	// (0x00026afb) cell_vitu2_function_top_pane_ParamLimits

0x29b9,	// (0x00026afb) cell_vitu2_function_top_pane

0x29d1,	// (0x00026b13) cell_vitu2_function_top_pane_cp01_ParamLimits

0x29d1,	// (0x00026b13) cell_vitu2_function_top_pane_cp01

0x29ed,	// (0x00026b2f) cell_vitu2_function_top_wide_pane_ParamLimits

0x29ed,	// (0x00026b2f) cell_vitu2_function_top_wide_pane

0xb1a9,	// (0x0002f2eb) bg_button_pane_cp012

0x2a0b,	// (0x00026b4d) cell_vitu2_function_top_pane_g1

0xd575,	// (0x000316b7) bg_button_pane_cp013_ParamLimits

0xd575,	// (0x000316b7) bg_button_pane_cp013

0x84ee,	// (0x0002c630) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x84ee,	// (0x0002c630) cell_vitu2_function_top_wide_pane_g1

0xb1a9,	// (0x0002f2eb) bg_popup_sub_pane_cp20

0x2a1f,	// (0x00026b61) list_vitu2_match_list_pane

0xd2f4,	// (0x00031436) bg_popup_sub_pane_cp20_g1

0xd2fc,	// (0x0003143e) bg_popup_sub_pane_cp20_g2

0x44cd,	// (0x0002860f) bg_popup_sub_pane_cp20_g3

0xd304,	// (0x00031446) bg_popup_sub_pane_cp20_g4

0x44ad,	// (0x000285ef) bg_popup_sub_pane_cp20_g5

0xd591,	// (0x000316d3) bg_popup_sub_pane_cp20_g6

0xd314,	// (0x00031456) bg_popup_sub_pane_cp20_g7

0xd31c,	// (0x0003145e) bg_popup_sub_pane_cp20_g8

0xd324,	// (0x00031466) bg_popup_sub_pane_cp20_g9

0x0008,

0xf987,	// (0x00033ac9) bg_popup_sub_pane_cp20_g

0xd599,	// (0x000316db) list_vitu2_match_list_item_pane_ParamLimits

0xd599,	// (0x000316db) list_vitu2_match_list_item_pane

0xd5ab,	// (0x000316ed) list_vitu2_match_list_item_pane_t1

0xb1b7,	// (0x0002f2f9) bg_popup_sub_pane_cp21

0x3c19,	// (0x00027d5b) grid_vitu2_dropdown_list_pane

0x2a37,	// (0x00026b79) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2a37,	// (0x00026b79) cell_vitu2_dropdown_list_char_pane

0x2a58,	// (0x00026b9a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2a58,	// (0x00026b9a) cell_vitu2_dropdown_list_ctrl_pane

0xd5b9,	// (0x000316fb) cell_vitu2_dropdown_list_char_pane_g1

0xd5c2,	// (0x00031704) cell_vitu2_dropdown_list_char_pane_g2

0xd5cb,	// (0x0003170d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x00033adc) cell_vitu2_dropdown_list_char_pane_g

0x2a82,	// (0x00026bc4) cell_vitu2_dropdown_list_char_pane_t1

0x8506,	// (0x0002c648) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8506,	// (0x0002c648) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8516,	// (0x0002c658) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8516,	// (0x0002c658) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8527,	// (0x0002c669) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8527,	// (0x0002c669) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2a90,	// (0x00026bd2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2a90,	// (0x00026bd2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd1c1,	// (0x00031303) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd1c1,	// (0x00031303) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x00033ae3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x00033ae3) cell_vitu2_dropdown_list_ctrl_pane_g

0x8537,	// (0x0002c679) aid_size_cell_gallery2_ParamLimits

0x8537,	// (0x0002c679) aid_size_cell_gallery2

0x8555,	// (0x0002c697) grid_gallery2_pane_ParamLimits

0x8555,	// (0x0002c697) grid_gallery2_pane

0x856f,	// (0x0002c6b1) scroll_pane_cp029_ParamLimits

0x856f,	// (0x0002c6b1) scroll_pane_cp029

0x8580,	// (0x0002c6c2) cell_gallery2_pane_ParamLimits

0x8580,	// (0x0002c6c2) cell_gallery2_pane

0xd5d4,	// (0x00031716) cell_gallery2_pane_g2

0x85df,	// (0x0002c721) cell_gallery2_pane_g3

0xd5dc,	// (0x0003171e) cell_gallery2_pane_g4

0xd5e4,	// (0x00031726) cell_gallery2_pane_g5

0x3c19,	// (0x00027d5b) grid_highlight_pane_cp10

0x2788,	// (0x000268ca) popup_vitu2_match_list_window_ParamLimits

0x279d,	// (0x000268df) popup_vitu2_query_window_ParamLimits

0x279d,	// (0x000268df) popup_vitu2_query_window

0xb1b7,	// (0x0002f2f9) bg_vitu2_candi_button_pane

0xd5b9,	// (0x000316fb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd5c2,	// (0x00031704) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd5cb,	// (0x0003170d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x85e7,	// (0x0002c729) bg_button_pane_cp015

0x85f9,	// (0x0002c73b) bg_button_pane_cp016

0x860c,	// (0x0002c74e) bg_button_pane_cp017

0x5ab1,	// (0x00029bf3) bg_popup_sub_pane_cp22

0xd5ec,	// (0x0003172e) popup_vitu2_query_window_g1

0x864f,	// (0x0002c791) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x00033aee) popup_vitu2_query_window_g

0x866e,	// (0x0002c7b0) popup_vitu2_query_window_t1_ParamLimits

0x866e,	// (0x0002c7b0) popup_vitu2_query_window_t1

0x86a3,	// (0x0002c7e5) popup_vitu2_query_window_t2_ParamLimits

0x86a3,	// (0x0002c7e5) popup_vitu2_query_window_t2

0x86b5,	// (0x0002c7f7) popup_vitu2_query_window_t3_ParamLimits

0x86b5,	// (0x0002c7f7) popup_vitu2_query_window_t3

0x86dd,	// (0x0002c81f) popup_vitu2_query_window_t4_ParamLimits

0x86dd,	// (0x0002c81f) popup_vitu2_query_window_t4

0x86fe,	// (0x0002c840) popup_vitu2_query_window_t5_ParamLimits

0x86fe,	// (0x0002c840) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x00033af5) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x00033af5) popup_vitu2_query_window_t

0xd3f6,	// (0x00031538) main_cset_text_pane

0x8150,	// (0x0002c292) aid_area_touch_slider_ParamLimits

0x816c,	// (0x0002c2ae) cset_slider_pane_ParamLimits

0x818f,	// (0x0002c2d1) main_cset_slider_pane_g1_ParamLimits

0x81a4,	// (0x0002c2e6) main_cset_slider_pane_g2_ParamLimits

0xd417,	// (0x00031559) main_cset_slider_pane_g3_ParamLimits

0xd417,	// (0x00031559) main_cset_slider_pane_g3

0x81b9,	// (0x0002c2fb) main_cset_slider_pane_g4_ParamLimits

0x81b9,	// (0x0002c2fb) main_cset_slider_pane_g4

0x81c8,	// (0x0002c30a) main_cset_slider_pane_g5_ParamLimits

0x81c8,	// (0x0002c30a) main_cset_slider_pane_g5

0x81d4,	// (0x0002c316) main_cset_slider_pane_g6_ParamLimits

0x81d4,	// (0x0002c316) main_cset_slider_pane_g6

0xf910,	// (0x00033a52) main_cset_slider_pane_g_ParamLimits

0xd45f,	// (0x000315a1) main_cset_slider_pane_t1_ParamLimits

0x8248,	// (0x0002c38a) main_cset_slider_pane_t2_ParamLimits

0x8262,	// (0x0002c3a4) main_cset_slider_pane_t3_ParamLimits

0x827c,	// (0x0002c3be) main_cset_slider_pane_t4_ParamLimits

0x8296,	// (0x0002c3d8) main_cset_slider_pane_t5_ParamLimits

0x82b0,	// (0x0002c3f2) main_cset_slider_pane_t6_ParamLimits

0x82c5,	// (0x0002c407) main_cset_slider_pane_t7_ParamLimits

0x82ef,	// (0x0002c431) main_cset_slider_pane_t8_ParamLimits

0x82ef,	// (0x0002c431) main_cset_slider_pane_t8

0x8317,	// (0x0002c459) main_cset_slider_pane_t9_ParamLimits

0x8317,	// (0x0002c459) main_cset_slider_pane_t9

0x833f,	// (0x0002c481) main_cset_slider_pane_t10_ParamLimits

0x833f,	// (0x0002c481) main_cset_slider_pane_t10

0x8367,	// (0x0002c4a9) main_cset_slider_pane_t11_ParamLimits

0x8367,	// (0x0002c4a9) main_cset_slider_pane_t11

0x838f,	// (0x0002c4d1) main_cset_slider_pane_t12_ParamLimits

0x838f,	// (0x0002c4d1) main_cset_slider_pane_t12

0x83ac,	// (0x0002c4ee) main_cset_slider_pane_t13_ParamLimits

0x83ac,	// (0x0002c4ee) main_cset_slider_pane_t13

0xf935,	// (0x00033a77) main_cset_slider_pane_t_ParamLimits

0x2bdc,	// (0x00026d1e) bg_popup_sub_pane_cp011

0xd5f8,	// (0x0003173a) main_cset_text_pane_g1

0xd600,	// (0x00031742) main_cset_text_pane_t1

0xd60e,	// (0x00031750) main_cset_text_pane_t2

0xd61c,	// (0x0003175e) main_cset_text_pane_t3

0xd62a,	// (0x0003176c) main_cset_text_pane_t4

0xd638,	// (0x0003177a) main_cset_text_pane_t5

0xd646,	// (0x00031788) main_cset_text_pane_t6

0xd654,	// (0x00031796) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x00033b04) main_cset_text_pane_t

0xb1b7,	// (0x0002f2f9) main_cam4_burst_pane

0xb1b7,	// (0x0002f2f9) main_cam5_pane

0x8089,	// (0x0002c1cb) bg_button_pane_cp019

0x8092,	// (0x0002c1d4) bg_button_pane_cp020

0xd423,	// (0x00031565) main_cset_slider_pane_g7_ParamLimits

0xd423,	// (0x00031565) main_cset_slider_pane_g7

0xd42f,	// (0x00031571) main_cset_slider_pane_g8_ParamLimits

0xd42f,	// (0x00031571) main_cset_slider_pane_g8

0x81e8,	// (0x0002c32a) main_cset_slider_pane_g9_ParamLimits

0x81e8,	// (0x0002c32a) main_cset_slider_pane_g9

0x81f4,	// (0x0002c336) main_cset_slider_pane_g10_ParamLimits

0x81f4,	// (0x0002c336) main_cset_slider_pane_g10

0x8200,	// (0x0002c342) main_cset_slider_pane_g11_ParamLimits

0x8200,	// (0x0002c342) main_cset_slider_pane_g11

0x820c,	// (0x0002c34e) main_cset_slider_pane_g12_ParamLimits

0x820c,	// (0x0002c34e) main_cset_slider_pane_g12

0x8218,	// (0x0002c35a) main_cset_slider_pane_g13_ParamLimits

0x8218,	// (0x0002c35a) main_cset_slider_pane_g13

0x8224,	// (0x0002c366) main_cset_slider_pane_g14_ParamLimits

0x8224,	// (0x0002c366) main_cset_slider_pane_g14

0x8230,	// (0x0002c372) main_cset_slider_pane_g15_ParamLimits

0x8230,	// (0x0002c372) main_cset_slider_pane_g15

0xd487,	// (0x000315c9) main_cset_slider_pane_t14_ParamLimits

0xd487,	// (0x000315c9) main_cset_slider_pane_t14

0xd4c0,	// (0x00031602) main_cset_slider_pane_t15_ParamLimits

0xd4c0,	// (0x00031602) main_cset_slider_pane_t15

0x8775,	// (0x0002c8b7) aid_cam4_burst_size_cell_ParamLimits

0x8775,	// (0x0002c8b7) aid_cam4_burst_size_cell

0x8795,	// (0x0002c8d7) grid_cam4_burst_pane_ParamLimits

0x8795,	// (0x0002c8d7) grid_cam4_burst_pane

0x87cd,	// (0x0002c90f) linegrid_cam4_burst_pane_ParamLimits

0x87cd,	// (0x0002c90f) linegrid_cam4_burst_pane

0xd662,	// (0x000317a4) scroll_pane_cp30_ParamLimits

0xd662,	// (0x000317a4) scroll_pane_cp30

0x87f1,	// (0x0002c933) cell_cam4_burst_pane_ParamLimits

0x87f1,	// (0x0002c933) cell_cam4_burst_pane

0xd66e,	// (0x000317b0) linegrid_cam4_burst_pane_g1_ParamLimits

0xd66e,	// (0x000317b0) linegrid_cam4_burst_pane_g1

0x883e,	// (0x0002c980) linegrid_cam4_burst_pane_g2_ParamLimits

0x883e,	// (0x0002c980) linegrid_cam4_burst_pane_g2

0xd67b,	// (0x000317bd) linegrid_cam4_burst_pane_g3_ParamLimits

0xd67b,	// (0x000317bd) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x00033b13) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x00033b13) linegrid_cam4_burst_pane_g

0x884f,	// (0x0002c991) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x884f,	// (0x0002c991) linegrid_cam4_burst_pane_g3_copy1

0xd688,	// (0x000317ca) linegrid_cam4_burst_pane_g4_ParamLimits

0xd688,	// (0x000317ca) linegrid_cam4_burst_pane_g4

0x8869,	// (0x0002c9ab) linegrid_cam4_burst_pane_g5_ParamLimits

0x8869,	// (0x0002c9ab) linegrid_cam4_burst_pane_g5

0x887a,	// (0x0002c9bc) linegrid_cam4_burst_pane_g6_ParamLimits

0x887a,	// (0x0002c9bc) linegrid_cam4_burst_pane_g6

0xd695,	// (0x000317d7) linegrid_cam4_burst_pane_g7_ParamLimits

0xd695,	// (0x000317d7) linegrid_cam4_burst_pane_g7

0x8891,	// (0x0002c9d3) cell_cam4_burst_pane_g1

0xd6ae,	// (0x000317f0) main_cam5_pane_t1_ParamLimits

0xd6ae,	// (0x000317f0) main_cam5_pane_t1

0xd6c0,	// (0x00031802) main_cam5_pane_t2_ParamLimits

0xd6c0,	// (0x00031802) main_cam5_pane_t2

0xd6d2,	// (0x00031814) main_cam5_pane_t3_ParamLimits

0xd6d2,	// (0x00031814) main_cam5_pane_t3

0xd6e4,	// (0x00031826) main_cam5_pane_t4_ParamLimits

0xd6e4,	// (0x00031826) main_cam5_pane_t4

0xd6fc,	// (0x0003183e) main_cam5_pane_t5_ParamLimits

0xd6fc,	// (0x0003183e) main_cam5_pane_t5

0xd710,	// (0x00031852) main_cam5_pane_t6_ParamLimits

0xd710,	// (0x00031852) main_cam5_pane_t6

0xd724,	// (0x00031866) main_cam5_pane_t7_ParamLimits

0xd724,	// (0x00031866) main_cam5_pane_t7

0xd736,	// (0x00031878) main_cam5_pane_t8_ParamLimits

0xd736,	// (0x00031878) main_cam5_pane_t8

0xd752,	// (0x00031894) main_cam5_pane_t9_ParamLimits

0xd752,	// (0x00031894) main_cam5_pane_t9

0xd764,	// (0x000318a6) main_cam5_pane_t10_ParamLimits

0xd764,	// (0x000318a6) main_cam5_pane_t10

0xd776,	// (0x000318b8) main_cam5_pane_t11_ParamLimits

0xd776,	// (0x000318b8) main_cam5_pane_t11

0xd788,	// (0x000318ca) main_cam5_pane_t12_ParamLimits

0xd788,	// (0x000318ca) main_cam5_pane_t12

0xd79d,	// (0x000318df) main_cam5_pane_t13_ParamLimits

0xd79d,	// (0x000318df) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x00033b1f) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x00033b1f) main_cam5_pane_t

0x1928,	// (0x00025a6a) popup_scut_keymap_window_ParamLimits

0x1928,	// (0x00025a6a) popup_scut_keymap_window

0x88a4,	// (0x0002c9e6) aid_size_cell_brow_shortcut

0x3c19,	// (0x00027d5b) bg_popup_window_pane_cp010

0x88b0,	// (0x0002c9f2) grid_scut_pane

0x88bc,	// (0x0002c9fe) cell_scut_pane_ParamLimits

0x88bc,	// (0x0002c9fe) cell_scut_pane

0x88d3,	// (0x0002ca15) cell_scut_pane_g1

0xd7ba,	// (0x000318fc) cell_scut_pane_t1

0xd7c9,	// (0x0003190b) cell_scut_pane_t2

0x88dc,	// (0x0002ca1e) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x00033b3a) cell_scut_pane_t

0x72a4,	// (0x0002b3e6) main_mup3_pane_g8_ParamLimits

0x72a4,	// (0x0002b3e6) main_mup3_pane_g8

0x2694,	// (0x000267d6) area_vitu2_query_pane_ParamLimits

0x2694,	// (0x000267d6) area_vitu2_query_pane

0x861f,	// (0x0002c761) input_focus_pane_cp08

0xd7d8,	// (0x0003191a) area_vitu2_query_pane_g1

0x88ea,	// (0x0002ca2c) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x00033b41) area_vitu2_query_pane_g

0x88fb,	// (0x0002ca3d) area_vitu2_query_pane_t1_ParamLimits

0x88fb,	// (0x0002ca3d) area_vitu2_query_pane_t1

0x890f,	// (0x0002ca51) area_vitu2_query_pane_t2_ParamLimits

0x890f,	// (0x0002ca51) area_vitu2_query_pane_t2

0x8923,	// (0x0002ca65) area_vitu2_query_pane_t3_ParamLimits

0x8923,	// (0x0002ca65) area_vitu2_query_pane_t3

0xd7e4,	// (0x00031926) area_vitu2_query_pane_t4_ParamLimits

0xd7e4,	// (0x00031926) area_vitu2_query_pane_t4

0xd80c,	// (0x0003194e) area_vitu2_query_pane_t5_ParamLimits

0xd80c,	// (0x0003194e) area_vitu2_query_pane_t5

0xd834,	// (0x00031976) area_vitu2_query_pane_t6_ParamLimits

0xd834,	// (0x00031976) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x00033b46) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x00033b46) area_vitu2_query_pane_t

0x894b,	// (0x0002ca8d) bg_button_pane_cp018

0x8959,	// (0x0002ca9b) bg_button_pane_cp021

0x8965,	// (0x0002caa7) bg_button_pane_cp022

0x8976,	// (0x0002cab8) input_focus_pane_cp09

0x57b7,	// (0x000298f9) aid_size_touch_mv_arrow_left

0x57e2,	// (0x00029924) aid_size_touch_mv_arrow_right

0xd43b,	// (0x0003157d) main_cset_slider_pane_g16_ParamLimits

0xd43b,	// (0x0003157d) main_cset_slider_pane_g16

0xd447,	// (0x00031589) main_cset_slider_pane_g17_ParamLimits

0xd447,	// (0x00031589) main_cset_slider_pane_g17

0x8891,	// (0x0002c9d3) cell_cam4_burst_pane_g1_ParamLimits

0x2bdc,	// (0x00026d1e) compa_mode_pane

0x842e,	// (0x0002c570) popup_vtel_slider_window_g3_ParamLimits

0x842e,	// (0x0002c570) popup_vtel_slider_window_g3

0x8445,	// (0x0002c587) popup_vtel_slider_window_g4_ParamLimits

0x8445,	// (0x0002c587) popup_vtel_slider_window_g4

0x845c,	// (0x0002c59e) popup_vtel_slider_window_t1_ParamLimits

0x845c,	// (0x0002c59e) popup_vtel_slider_window_t1

0xb1b7,	// (0x0002f2f9) main_cl_pane

0xc0c8,	// (0x0003020a) popup_imed_adjust2_window_ParamLimits

0x5ab1,	// (0x00029bf3) bg_tb_trans_pane_cp05_ParamLimits

0xcb22,	// (0x00030c64) popup_imed_adjust2_window_g1_ParamLimits

0xcb31,	// (0x00030c73) popup_imed_adjust2_window_g2_ParamLimits

0xcb31,	// (0x00030c73) popup_imed_adjust2_window_g2

0xcb3d,	// (0x00030c7f) popup_imed_adjust2_window_g3_ParamLimits

0xcb3d,	// (0x00030c7f) popup_imed_adjust2_window_g3

0x0002,

0xf77a,	// (0x000338bc) popup_imed_adjust2_window_g_ParamLimits

0xf77a,	// (0x000338bc) popup_imed_adjust2_window_g

0xcb49,	// (0x00030c8b) popup_imed_adjust2_window_t1_ParamLimits

0xcb61,	// (0x00030ca3) slider_imed_adjust_pane_ParamLimits

0xcb75,	// (0x00030cb7) slider_imed_adjust_pane_g1_ParamLimits

0xcb85,	// (0x00030cc7) slider_imed_adjust_pane_g2_ParamLimits

0xcb95,	// (0x00030cd7) slider_imed_adjust_pane_g3_ParamLimits

0xcba6,	// (0x00030ce8) slider_imed_adjust_pane_g4_ParamLimits

0xf781,	// (0x000338c3) slider_imed_adjust_pane_g_ParamLimits

0x2464,	// (0x000265a6) aid_touch_area_cam4_ParamLimits

0x2464,	// (0x000265a6) aid_touch_area_cam4

0xd1a5,	// (0x000312e7) battery_pane_cp01

0x2533,	// (0x00026675) main_camera4_pane_g6_ParamLimits

0x2533,	// (0x00026675) main_camera4_pane_g6

0x255d,	// (0x0002669f) main_camera4_pane_t2_ParamLimits

0x255d,	// (0x0002669f) main_camera4_pane_t2

0x0001,

0xf883,	// (0x000339c5) main_camera4_pane_t_ParamLimits

0xf883,	// (0x000339c5) main_camera4_pane_t

0x257e,	// (0x000266c0) aid_touch_area_vid4_ParamLimits

0x257e,	// (0x000266c0) aid_touch_area_vid4

0x25d2,	// (0x00026714) main_video4_pane_g5_ParamLimits

0x25d2,	// (0x00026714) main_video4_pane_g5

0x25f7,	// (0x00026739) vid4_progress_pane_ParamLimits

0x25f7,	// (0x00026739) vid4_progress_pane

0xd453,	// (0x00031595) main_cset_slider_pane_g18_ParamLimits

0xd453,	// (0x00031595) main_cset_slider_pane_g18

0xd6a2,	// (0x000317e4) cell_cam4_burst_pane_g2_ParamLimits

0xd6a2,	// (0x000317e4) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x00033b1a) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x00033b1a) cell_cam4_burst_pane_g

0x34bd,	// (0x000275ff) bg_cl_pane_ParamLimits

0x34bd,	// (0x000275ff) bg_cl_pane

0x8987,	// (0x0002cac9) cl_header_pane_ParamLimits

0x8987,	// (0x0002cac9) cl_header_pane

0x899b,	// (0x0002cadd) cl_listscroll_pane_ParamLimits

0x899b,	// (0x0002cadd) cl_listscroll_pane

0xd880,	// (0x000319c2) bg_cl_pane_g1

0xd888,	// (0x000319ca) bg_cl_pane_g2

0xd890,	// (0x000319d2) bg_cl_pane_g3

0xd898,	// (0x000319da) bg_cl_pane_g4

0xd8a0,	// (0x000319e2) bg_cl_pane_g5

0xd8a8,	// (0x000319ea) bg_cl_pane_g6

0xd8b0,	// (0x000319f2) bg_cl_pane_g7

0xd8b8,	// (0x000319fa) bg_cl_pane_g8

0xd8c0,	// (0x00031a02) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x00033b55) bg_cl_pane_g

0x89ab,	// (0x0002caed) aid_height_cl_leading_ParamLimits

0x89ab,	// (0x0002caed) aid_height_cl_leading

0x89b7,	// (0x0002caf9) aid_height_cl_text_ParamLimits

0x89b7,	// (0x0002caf9) aid_height_cl_text

0x3314,	// (0x00027456) bg_cl_header_pane_ParamLimits

0x3314,	// (0x00027456) bg_cl_header_pane

0x89d6,	// (0x0002cb18) cl_header_pane_g1_ParamLimits

0x89d6,	// (0x0002cb18) cl_header_pane_g1

0x89ec,	// (0x0002cb2e) cl_header_pane_t1_ParamLimits

0x89ec,	// (0x0002cb2e) cl_header_pane_t1

0xd8c8,	// (0x00031a0a) cl_list_pane

0xd40e,	// (0x00031550) hc_scroll_pane_cp01

0x44ad,	// (0x000285ef) bg_cl_header_pane_g1

0xd2f4,	// (0x00031436) bg_cl_header_pane_g2

0x44cd,	// (0x0002860f) bg_cl_header_pane_g3

0xd304,	// (0x00031446) bg_cl_header_pane_g4

0xd2fc,	// (0x0003143e) bg_cl_header_pane_g5

0xd591,	// (0x000316d3) bg_cl_header_pane_g6

0xd31c,	// (0x0003145e) bg_cl_header_pane_g7

0xd324,	// (0x00031466) bg_cl_header_pane_g8

0xd314,	// (0x00031456) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x00033b68) bg_cl_header_pane_g

0x8a05,	// (0x0002cb47) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8a05,	// (0x0002cb47) hc_cl_list_double_graphic_heading_pane

0x8a16,	// (0x0002cb58) hc_cl_list_single_graphic_pane_ParamLimits

0x8a16,	// (0x0002cb58) hc_cl_list_single_graphic_pane

0x8a2f,	// (0x0002cb71) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8a2f,	// (0x0002cb71) hc_cl_list_single_graphic_pane_g1

0x8a3b,	// (0x0002cb7d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8a3b,	// (0x0002cb7d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x00033b7b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x00033b7b) hc_cl_list_single_graphic_pane_g

0x8a4f,	// (0x0002cb91) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8a4f,	// (0x0002cb91) hc_cl_list_single_graphic_pane_t1

0x8a2f,	// (0x0002cb71) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8a2f,	// (0x0002cb71) hc_cl_list_double_graphic_heading_pane_g1

0x8a64,	// (0x0002cba6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8a64,	// (0x0002cba6) hc_cl_list_double_graphic_heading_pane_g2

0x8a78,	// (0x0002cbba) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8a78,	// (0x0002cbba) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x00033b80) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x00033b80) hc_cl_list_double_graphic_heading_pane_g

0x8a8c,	// (0x0002cbce) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8a8c,	// (0x0002cbce) hc_cl_list_double_graphic_heading_pane_t1

0x8aa1,	// (0x0002cbe3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8aa1,	// (0x0002cbe3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x00033b87) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x00033b87) hc_cl_list_double_graphic_heading_pane_t

0xd8d9,	// (0x00031a1b) vid4_progress_pane_g1

0xd8e9,	// (0x00031a2b) vid4_progress_pane_g2

0x2aac,	// (0x00026bee) vid4_progress_pane_g3

0xd8f9,	// (0x00031a3b) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x00033b8c) vid4_progress_pane_g

0x2abe,	// (0x00026c00) vid4_progress_pane_t1

0xd911,	// (0x00031a53) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x00033b97) vid4_progress_pane_t

0x2ad4,	// (0x00026c16) wait_bar_pane_cp07

0xc3d6,	// (0x00030518) blid_firmament_pane_ParamLimits

0xc419,	// (0x0003055b) popup_blid_sat_info2_window_g1

0xc43d,	// (0x0003057f) popup_blid_sat_info2_window_t3

0xc44b,	// (0x0003058d) popup_blid_sat_info2_window_t4

0xc459,	// (0x0003059b) popup_blid_sat_info2_window_t5

0xc467,	// (0x000305a9) popup_blid_sat_info2_window_t6

0xc477,	// (0x000305b9) popup_blid_sat_info2_window_t7

0xc485,	// (0x000305c7) popup_blid_sat_info2_window_t8

0xc493,	// (0x000305d5) popup_blid_sat_info2_window_t9

0xc4a1,	// (0x000305e3) popup_blid_sat_info2_window_t10

0xc562,	// (0x000306a4) aid_firma_cardinal_ParamLimits

0xc576,	// (0x000306b8) blid_firmament_pane_t1_ParamLimits

0xc58d,	// (0x000306cf) blid_firmament_pane_t2_ParamLimits

0xc5a4,	// (0x000306e6) blid_firmament_pane_t3_ParamLimits

0xc5bb,	// (0x000306fd) blid_firmament_pane_t4_ParamLimits

0xf673,	// (0x000337b5) blid_firmament_pane_t_ParamLimits

0xc5d2,	// (0x00030714) blid_sat_info_pane_ParamLimits

0xb1a9,	// (0x0002f2eb) main_cam_set_pane_ParamLimits

0x79cc,	// (0x0002bb0e) aid_size_cell_colour_35_ParamLimits

0x79ec,	// (0x0002bb2e) aid_size_cell_colour_112_ParamLimits

0x7a0c,	// (0x0002bb4e) aid_size_cell_effect_ParamLimits

0x5ab1,	// (0x00029bf3) bg_tb_trans_pane_cp02_ParamLimits

0x50ce,	// (0x00029210) heading_imed_pane_ParamLimits

0x7a2c,	// (0x0002bb6e) listscroll_imed_pane_ParamLimits

0xb77d,	// (0x0002f8bf) popup_call2_audio_first_window_g5_ParamLimits

0xb77d,	// (0x0002f8bf) popup_call2_audio_first_window_g5

0x2151,	// (0x00026293) aid_size_touch_image3_arrow_left_ParamLimits

0x2151,	// (0x00026293) aid_size_touch_image3_arrow_left

0x217d,	// (0x000262bf) aid_size_touch_image3_arrow_right_ParamLimits

0x217d,	// (0x000262bf) aid_size_touch_image3_arrow_right

0xd926,	// (0x00031a68) vid4_progress_pane_t3

0x7bcf,	// (0x0002bd11) main_hwr_training_symbol_option_pane_ParamLimits

0x7bcf,	// (0x0002bd11) main_hwr_training_symbol_option_pane

0xcd5b,	// (0x00030e9d) popup_hwr_training_preview_window_ParamLimits

0xcd5b,	// (0x00030e9d) popup_hwr_training_preview_window

0x1ff8,	// (0x0002613a) hwr_training_navi_pane_g5_ParamLimits

0x1ff8,	// (0x0002613a) hwr_training_navi_pane_g5

0xd2e2,	// (0x00031424) popup_char_count_window

0xb1a9,	// (0x0002f2eb) bg_popup_sub_pane_cp20_ParamLimits

0x2a1f,	// (0x00026b61) list_vitu2_match_list_pane_ParamLimits

0x2a2b,	// (0x00026b6d) vitu2_page_scroll_pane_ParamLimits

0x2a2b,	// (0x00026b6d) vitu2_page_scroll_pane

0xd95e,	// (0x00031aa0) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd95e,	// (0x00031aa0) list_single_hwr_training_symbol_option_pane

0xd971,	// (0x00031ab3) list_single_hwr_training_symbol_option_pane_g1

0xd979,	// (0x00031abb) list_single_hwr_training_symbol_option_pane_t1

0xd987,	// (0x00031ac9) bg_button_pane_cp023

0xd990,	// (0x00031ad2) bg_button_pane_cp024

0xd9c3,	// (0x00031b05) vitu2_page_scroll_pane_g1

0xd9cb,	// (0x00031b0d) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x00033b9e) vitu2_page_scroll_pane_g

0xd9d3,	// (0x00031b15) vitu2_page_scroll_pane_t1

0x358d,	// (0x000276cf) popup_char_count_window_g1

0xd9e2,	// (0x00031b24) popup_char_count_window_g2

0xb207,	// (0x0002f349) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x00033ba3) popup_char_count_window_g

0xd9eb,	// (0x00031b2d) popup_char_count_window_t1

0xb1b7,	// (0x0002f2f9) main_vded2_pane

0xcb0e,	// (0x00030c50) aid_size_cell_imed_line

0xcb18,	// (0x00030c5a) grid_imed_line_width_pane

0xd263,	// (0x000313a5) vid4_indicators_pane_g4

0xd9f9,	// (0x00031b3b) cell_imed_line_width_pane_ParamLimits

0xd9f9,	// (0x00031b3b) cell_imed_line_width_pane

0xda0d,	// (0x00031b4f) cell_imed_line_width_pane_g1

0xda16,	// (0x00031b58) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x00033baa) cell_imed_line_width_pane_g

0x8aca,	// (0x0002cc0c) main_vded2_pane_g1_ParamLimits

0x8aca,	// (0x0002cc0c) main_vded2_pane_g1

0x8ae0,	// (0x0002cc22) main_vded2_pane_g2_ParamLimits

0x8ae0,	// (0x0002cc22) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x00033baf) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x00033baf) main_vded2_pane_g

0x8af2,	// (0x0002cc34) vded2_slider_pane_ParamLimits

0x8af2,	// (0x0002cc34) vded2_slider_pane

0x8b02,	// (0x0002cc44) aid_size_touch_vded2_end

0x8b0c,	// (0x0002cc4e) aid_size_touch_vded2_playhead

0xda1e,	// (0x00031b60) aid_size_touch_vded2_start

0xda26,	// (0x00031b68) vded2_slider_bg_pane

0xda2f,	// (0x00031b71) vded2_slider_pane_g1

0xda38,	// (0x00031b7a) vded2_slider_pane_g2

0x8b16,	// (0x0002cc58) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x00033bb4) vded2_slider_pane_g

0xda40,	// (0x00031b82) vded2_slider_bg_pane_g1

0xda49,	// (0x00031b8b) vded2_slider_bg_pane_g2

0xda52,	// (0x00031b94) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x00033bbb) vded2_slider_bg_pane_g

0x5ec3,	// (0x0002a005) aid_postcard_touch_down_pane_ParamLimits

0x5ec3,	// (0x0002a005) aid_postcard_touch_down_pane

0x5ed9,	// (0x0002a01b) aid_postcard_touch_up_pane_ParamLimits

0x5ed9,	// (0x0002a01b) aid_postcard_touch_up_pane

0xb1b7,	// (0x0002f2f9) main_blid2_pane

0xc0ae,	// (0x000301f0) popup_blid2_search_window

0x2bdc,	// (0x00026d1e) blid2_gps_pane

0x2bdc,	// (0x00026d1e) blid2_navig_pane

0x2bdc,	// (0x00026d1e) blid2_search_pane

0x2bdc,	// (0x00026d1e) blid2_tripm_pane

0x8b21,	// (0x0002cc63) blid2_search_pane_g1_ParamLimits

0x8b21,	// (0x0002cc63) blid2_search_pane_g1

0x8b39,	// (0x0002cc7b) blid2_search_pane_t1_ParamLimits

0x8b39,	// (0x0002cc7b) blid2_search_pane_t1

0x8b4b,	// (0x0002cc8d) aid_size_cell_blid2_gps_ParamLimits

0x8b4b,	// (0x0002cc8d) aid_size_cell_blid2_gps

0x8b63,	// (0x0002cca5) blid2_gps_pane_g1_ParamLimits

0x8b63,	// (0x0002cca5) blid2_gps_pane_g1

0x8b77,	// (0x0002ccb9) grid_blid2_satellite_pane_ParamLimits

0x8b77,	// (0x0002ccb9) grid_blid2_satellite_pane

0x8b91,	// (0x0002ccd3) blid2_navig_pane_g1_ParamLimits

0x8b91,	// (0x0002ccd3) blid2_navig_pane_g1

0x8b9d,	// (0x0002ccdf) blid2_navig_pane_t1_ParamLimits

0x8b9d,	// (0x0002ccdf) blid2_navig_pane_t1

0x8bb8,	// (0x0002ccfa) blid2_navig_pane_t2_ParamLimits

0x8bb8,	// (0x0002ccfa) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x00033bc2) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x00033bc2) blid2_navig_pane_t

0x8bd3,	// (0x0002cd15) blid2_navig_ring_pane_ParamLimits

0x8bd3,	// (0x0002cd15) blid2_navig_ring_pane

0x8bec,	// (0x0002cd2e) blid2_speed_pane_ParamLimits

0x8bec,	// (0x0002cd2e) blid2_speed_pane

0x8bf8,	// (0x0002cd3a) blid2_tripm_pane_g1_ParamLimits

0x8bf8,	// (0x0002cd3a) blid2_tripm_pane_g1

0x8c13,	// (0x0002cd55) blid2_tripm_pane_g2_ParamLimits

0x8c13,	// (0x0002cd55) blid2_tripm_pane_g2

0x8c27,	// (0x0002cd69) blid2_tripm_pane_g3_ParamLimits

0x8c27,	// (0x0002cd69) blid2_tripm_pane_g3

0x8c3b,	// (0x0002cd7d) blid2_tripm_pane_g4_ParamLimits

0x8c3b,	// (0x0002cd7d) blid2_tripm_pane_g4

0x8c4f,	// (0x0002cd91) blid2_tripm_pane_g5_ParamLimits

0x8c4f,	// (0x0002cd91) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x00033bc7) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x00033bc7) blid2_tripm_pane_g

0x8c75,	// (0x0002cdb7) blid2_tripm_pane_t1_ParamLimits

0x8c75,	// (0x0002cdb7) blid2_tripm_pane_t1

0x8c90,	// (0x0002cdd2) blid2_tripm_pane_t2_ParamLimits

0x8c90,	// (0x0002cdd2) blid2_tripm_pane_t2

0x8ca9,	// (0x0002cdeb) blid2_tripm_pane_t3_ParamLimits

0x8ca9,	// (0x0002cdeb) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x00033bd4) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x00033bd4) blid2_tripm_pane_t

0x8cf0,	// (0x0002ce32) cell_blid2_satellite_pane_ParamLimits

0x8cf0,	// (0x0002ce32) cell_blid2_satellite_pane

0x8d0e,	// (0x0002ce50) cell_blid2_satellite_pane_g1

0xda5b,	// (0x00031b9d) cell_blid2_satellite_pane_t1

0x3e06,	// (0x00027f48) blid2_speed_pane_g1

0xda69,	// (0x00031bab) blid2_speed_pane_t1

0xda77,	// (0x00031bb9) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x00033bdd) blid2_speed_pane_t

0x3e06,	// (0x00027f48) blid2_navig_ring_pane_g1

0x8d17,	// (0x0002ce59) blid2_navig_ring_pane_g2

0x8d1f,	// (0x0002ce61) blid2_navig_ring_pane_g3

0x8d27,	// (0x0002ce69) blid2_navig_ring_pane_g4

0x8d2f,	// (0x0002ce71) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x00033be2) blid2_navig_ring_pane_g

0x2bdc,	// (0x00026d1e) bg_popup_window_pane_cp011

0xda85,	// (0x00031bc7) popup_blid2_search_window_g1

0xda8d,	// (0x00031bcf) popup_blid2_search_window_t1

0xda9b,	// (0x00031bdd) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x00033bed) popup_blid2_search_window_t

0x4377,	// (0x000284b9) main_browser_pane_g1

0x34bd,	// (0x000275ff) main_browser_pane_ParamLimits

0xb1a9,	// (0x0002f2eb) bg_button_pane_cp011_ParamLimits

0x299d,	// (0x00026adf) cell_vitu2_function_pane_g1_ParamLimits

0x5ab1,	// (0x00029bf3) bg_popup_sub_pane_cp22_ParamLimits

0x861f,	// (0x0002c761) input_focus_pane_cp08_ParamLimits

0x8636,	// (0x0002c778) popup_vitu2_query_button_pane_ParamLimits

0x8636,	// (0x0002c778) popup_vitu2_query_button_pane

0x8647,	// (0x0002c789) popup_vitu2_query_input_button_pane

0xd5ec,	// (0x0003172e) popup_vitu2_query_window_g1_ParamLimits

0x864f,	// (0x0002c791) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x00033aee) popup_vitu2_query_window_g_ParamLimits

0x2bdc,	// (0x00026d1e) bg_button_pane_cp026

0x8d37,	// (0x0002ce79) popup_vitu2_query_input_button_pane_g1

0x2bdc,	// (0x00026d1e) bg_button_pane_cp025

0xdaa9,	// (0x00031beb) popup_vitu2_query_button_pane_t1

0x6f72,	// (0x0002b0b4) main_mp3_pane_t6

0x6f80,	// (0x0002b0c2) popup_slider_window_cp01

0xd1cf,	// (0x00031311) cam4_battery_pane

0xd222,	// (0x00031364) cam4_battery_pane_cp02

0xd8d1,	// (0x00031a13) cam4_battery_pane_cp01

0xd8d1,	// (0x00031a13) cam4_battery_pane_cp03

0xc33d,	// (0x0003047f) cam4_battery_pane_g1

0x3e06,	// (0x00027f48) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x00033bf2) cam4_battery_pane_g

0xc4af,	// (0x000305f1) popup_blid_sat_info2_window_t11

0x57b7,	// (0x000298f9) aid_size_touch_mv_arrow_left_ParamLimits

0x57e2,	// (0x00029924) aid_size_touch_mv_arrow_right_ParamLimits

0x5840,	// (0x00029982) navi_pane_g1_ParamLimits

0x584c,	// (0x0002998e) navi_pane_g2_ParamLimits

0x587a,	// (0x000299bc) navi_pane_g3_ParamLimits

0xf374,	// (0x000334b6) navi_pane_g_ParamLimits

0x5938,	// (0x00029a7a) navi_pane_mv_t1_ParamLimits

0x7a38,	// (0x0002bb7a) grid_imed_effect_pane_ParamLimits

0x3f27,	// (0x00028069) aid_placing_vt_slider_lsc

0x3f37,	// (0x00028079) aid_placing_vt_slider_prt

0x3314,	// (0x00027456) bg_tb_trans_pane_cp01_ParamLimits

0xc74d,	// (0x0003088f) popup_image_details_window_g1_ParamLimits

0xc760,	// (0x000308a2) popup_image_details_window_g2_ParamLimits

0xc775,	// (0x000308b7) popup_image_details_window_g3_ParamLimits

0xc775,	// (0x000308b7) popup_image_details_window_g3

0xf6b3,	// (0x000337f5) popup_image_details_window_g_ParamLimits

0xc789,	// (0x000308cb) popup_image_details_window_t1_ParamLimits

0xc79b,	// (0x000308dd) popup_image_details_window_t2_ParamLimits

0xc7b4,	// (0x000308f6) popup_image_details_window_t3_ParamLimits

0xc7c8,	// (0x0003090a) popup_image_details_window_t4_ParamLimits

0xc7e3,	// (0x00030925) popup_image_details_window_t5_ParamLimits

0xf6ba,	// (0x000337fc) popup_image_details_window_t_ParamLimits

0x89c3,	// (0x0002cb05) cl_header_name_pane_ParamLimits

0x89c3,	// (0x0002cb05) cl_header_name_pane

0x8d3f,	// (0x0002ce81) cl_header_name_pane_t1_ParamLimits

0x8d3f,	// (0x0002ce81) cl_header_name_pane_t1

0x8d60,	// (0x0002cea2) cl_header_name_pane_t2_ParamLimits

0x8d60,	// (0x0002cea2) cl_header_name_pane_t2

0x8da2,	// (0x0002cee4) cl_header_name_pane_t3_ParamLimits

0x8da2,	// (0x0002cee4) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x00033bf7) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x00033bf7) cl_header_name_pane_t

0x5909,	// (0x00029a4b) navi_pane_mv_g2_ParamLimits

0xd2ad,	// (0x000313ef) field_vitu2_entry_pane_g1_ParamLimits

0xd2b9,	// (0x000313fb) field_vitu2_entry_pane_g2_ParamLimits

0x5a7b,	// (0x00029bbd) field_vitu2_entry_pane_g3_ParamLimits

0x5a7b,	// (0x00029bbd) field_vitu2_entry_pane_g3

0xf8b5,	// (0x000339f7) field_vitu2_entry_pane_g_ParamLimits

0x282d,	// (0x0002696f) cell_vitu2_itu_pane_g1_ParamLimits

0x2845,	// (0x00026987) cell_vitu2_itu_pane_g2_ParamLimits

0x2845,	// (0x00026987) cell_vitu2_itu_pane_g2

0x0001,

0xf8c1,	// (0x00033a03) cell_vitu2_itu_pane_g_ParamLimits

0xf8c1,	// (0x00033a03) cell_vitu2_itu_pane_g

0xb1a9,	// (0x0002f2eb) bg_vkb2_func_pane_cp05_ParamLimits

0xb1a9,	// (0x0002f2eb) bg_vkb2_func_pane_cp05

0xb1a9,	// (0x0002f2eb) bg_vkb2_func_pane_cp03

0xb1a9,	// (0x0002f2eb) bg_vkb2_func_pane_cp04

0xb1a9,	// (0x0002f2eb) bg_vkb2_func_pane_cp10_ParamLimits

0xb1a9,	// (0x0002f2eb) bg_vkb2_func_pane_cp10

0x8965,	// (0x0002caa7) bg_vkb2_func_pane_cp08

0x894b,	// (0x0002ca8d) bg_vkb2_func_pane_cp06

0x8959,	// (0x0002ca9b) bg_vkb2_func_pane_cp07

0xd999,	// (0x00031adb) bg_vkb2_func_pane_cp11_ParamLimits

0xd999,	// (0x00031adb) bg_vkb2_func_pane_cp11

0xd9ae,	// (0x00031af0) bg_vkb2_func_pane_cp12_ParamLimits

0xd9ae,	// (0x00031af0) bg_vkb2_func_pane_cp12

0x2bdc,	// (0x00026d1e) bg_vkb2_func_pane_cp09

0xd2f4,	// (0x00031436) bg_vkb2_func_pane_g1

0x44cd,	// (0x0002860f) bg_vkb2_func_pane_g2

0xd2fc,	// (0x0003143e) bg_vkb2_func_pane_g3

0xd304,	// (0x00031446) bg_vkb2_func_pane_g4

0xd591,	// (0x000316d3) bg_vkb2_func_pane_g5

0xd31c,	// (0x0003145e) bg_vkb2_func_pane_g6

0xd324,	// (0x00031466) bg_vkb2_func_pane_g7

0xd314,	// (0x00031456) bg_vkb2_func_pane_g8

0x44ad,	// (0x000285ef) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x00033bfe) bg_vkb2_func_pane_g

0x8c63,	// (0x0002cda5) blid2_tripm_pane_g6_ParamLimits

0x8c63,	// (0x0002cda5) blid2_tripm_pane_g6

0xd092,	// (0x000311d4) mp4_progress_pane_g1

0x8cdc,	// (0x0002ce1e) blid2_tripm_values_pane_ParamLimits

0x8cdc,	// (0x0002ce1e) blid2_tripm_values_pane

0x8dd3,	// (0x0002cf15) blid2_tripm_values_pane_t1

0x8de1,	// (0x0002cf23) blid2_tripm_values_pane_t2

0x8def,	// (0x0002cf31) blid2_tripm_values_pane_t3

0x8dfd,	// (0x0002cf3f) blid2_tripm_values_pane_t4

0x8e0b,	// (0x0002cf4d) blid2_tripm_values_pane_t5

0x8e19,	// (0x0002cf5b) blid2_tripm_values_pane_t6

0x8e27,	// (0x0002cf69) blid2_tripm_values_pane_t7

0x8e35,	// (0x0002cf77) blid2_tripm_values_pane_t8

0x8e43,	// (0x0002cf85) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x00033c11) blid2_tripm_values_pane_t

0x3f73,	// (0x000280b5) call_video_pane_t1_ParamLimits

0x3f91,	// (0x000280d3) call_video_pane_t2_ParamLimits

0xf222,	// (0x00033364) call_video_pane_t_ParamLimits

0x5dd5,	// (0x00029f17) msg_header_pane_g1_ParamLimits

0x5de3,	// (0x00029f25) msg_header_pane_g2_ParamLimits

0x5de3,	// (0x00029f25) msg_header_pane_g2

0x0001,

0xf417,	// (0x00033559) msg_header_pane_g_ParamLimits

0xf417,	// (0x00033559) msg_header_pane_g

0x34bd,	// (0x000275ff) main_clock2_pane_ParamLimits

0x77ee,	// (0x0002b930) grid_clock2_toolbar_pane_ParamLimits

0x77ee,	// (0x0002b930) grid_clock2_toolbar_pane

0x77ee,	// (0x0002b930) listscroll_clock2_pane_ParamLimits

0x77ee,	// (0x0002b930) listscroll_clock2_pane

0x78d2,	// (0x0002ba14) main_clock2_pane_t3_ParamLimits

0x78d2,	// (0x0002ba14) main_clock2_pane_t3

0x78f6,	// (0x0002ba38) main_clock2_pane_t4_ParamLimits

0x78f6,	// (0x0002ba38) main_clock2_pane_t4

0xdab7,	// (0x00031bf9) cell_clock2_toolbar_pane

0xdabf,	// (0x00031c01) cell_clock2_toolbar_pane_cp01

0xdabf,	// (0x00031c01) cell_clock2_toolbar_pane_cp02

0xdac7,	// (0x00031c09) cell_clock2_toolbar_pane_cp03

0xdacf,	// (0x00031c11) list_clock2_pane

0x5563,	// (0x000296a5) scroll_pane_cp10

0xdad7,	// (0x00031c19) list_single_clock2_pane_ParamLimits

0xdad7,	// (0x00031c19) list_single_clock2_pane

0x3c19,	// (0x00027d5b) list_highlight_pane_cp08

0xdae4,	// (0x00031c26) list_single_clock2_pane_t1

0xdaf2,	// (0x00031c34) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x00033c24) list_single_clock2_pane_t

0x2bdc,	// (0x00026d1e) bg_button_pane_cp10

0xdb00,	// (0x00031c42) cell_clock2_toolbar_pane_g1

0x1bf9,	// (0x00025d3b) aid_main_viewer_pane_g1_ParamLimits

0x1bf9,	// (0x00025d3b) aid_main_viewer_pane_g1

0x1c07,	// (0x00025d49) aid_main_viewer_pane_g2_ParamLimits

0x1c07,	// (0x00025d49) aid_main_viewer_pane_g2

0x5e79,	// (0x00029fbb) aid_main_viewer_pane_g3_ParamLimits

0x5e79,	// (0x00029fbb) aid_main_viewer_pane_g3

0x5e88,	// (0x00029fca) aid_main_viewer_pane_g4_ParamLimits

0x5e88,	// (0x00029fca) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x0003356a) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x0003356a) aid_main_viewer_pane_g

0x1c3b,	// (0x00025d7d) main_calc_pane_ParamLimits

0x1c61,	// (0x00025da3) main_dialer2_pane_ParamLimits

0xb1b7,	// (0x0002f2f9) main_cam6_pane

0xb1b7,	// (0x0002f2f9) main_vid6_pane

0x77fa,	// (0x0002b93c) listscroll_gen_pane_cp06_ParamLimits

0x77fa,	// (0x0002b93c) listscroll_gen_pane_cp06

0x7919,	// (0x0002ba5b) main_clock2_pane_t5_ParamLimits

0x7919,	// (0x0002ba5b) main_clock2_pane_t5

0x7977,	// (0x0002bab9) aid_call2_pane_cp10_ParamLimits

0x7989,	// (0x0002bacb) aid_call_pane_cp10_ParamLimits

0x5746,	// (0x00029888) popup_clock_analogue_window_cp10_g1_ParamLimits

0x5746,	// (0x00029888) popup_clock_analogue_window_cp10_g2_ParamLimits

0x1f43,	// (0x00026085) popup_clock_analogue_window_cp10_g3_ParamLimits

0x1f43,	// (0x00026085) popup_clock_analogue_window_cp10_g4_ParamLimits

0x5746,	// (0x00029888) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf76f,	// (0x000338b1) popup_clock_analogue_window_cp10_g_ParamLimits

0x799b,	// (0x0002badd) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7cac,	// (0x0002bdee) cell_dialer2_keypad_pane_g2_ParamLimits

0x7cac,	// (0x0002bdee) cell_dialer2_keypad_pane_g2

0x0001,

0xf854,	// (0x00033996) cell_dialer2_keypad_pane_g_ParamLimits

0xf854,	// (0x00033996) cell_dialer2_keypad_pane_g

0x7cc8,	// (0x0002be0a) cell_dialer2_keypad_pane_t1

0x8142,	// (0x0002c284) main_cset_text2_pane_ParamLimits

0x8142,	// (0x0002c284) main_cset_text2_pane

0xd7d8,	// (0x0003191a) area_vitu2_query_pane_g1_ParamLimits

0x88ea,	// (0x0002ca2c) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x00033b41) area_vitu2_query_pane_g_ParamLimits

0xd85c,	// (0x0003199e) area_vitu2_query_pane_t7_ParamLimits

0xd85c,	// (0x0003199e) area_vitu2_query_pane_t7

0x894b,	// (0x0002ca8d) bg_button_pane_cp018_ParamLimits

0x8959,	// (0x0002ca9b) bg_button_pane_cp021_ParamLimits

0x8965,	// (0x0002caa7) bg_button_pane_cp022_ParamLimits

0x8965,	// (0x0002caa7) bg_vkb2_func_pane_cp08_ParamLimits

0x894b,	// (0x0002ca8d) bg_vkb2_func_pane_cp06_ParamLimits

0x8959,	// (0x0002ca9b) bg_vkb2_func_pane_cp07_ParamLimits

0x8976,	// (0x0002cab8) input_focus_pane_cp09_ParamLimits

0xdb08,	// (0x00031c4a) cam6_autofocus_pane_ParamLimits

0xdb08,	// (0x00031c4a) cam6_autofocus_pane

0x2ae5,	// (0x00026c27) cam6_image_uncrop_pane_ParamLimits

0x2ae5,	// (0x00026c27) cam6_image_uncrop_pane

0x2af4,	// (0x00026c36) cam6_indi_pane_ParamLimits

0x2af4,	// (0x00026c36) cam6_indi_pane

0x2b0a,	// (0x00026c4c) cam6_mode_pane_ParamLimits

0x2b0a,	// (0x00026c4c) cam6_mode_pane

0x2b1c,	// (0x00026c5e) cam6_timer_pane_ParamLimits

0x2b1c,	// (0x00026c5e) cam6_timer_pane

0x2b2c,	// (0x00026c6e) cam6_zoom_pane_ParamLimits

0x2b2c,	// (0x00026c6e) cam6_zoom_pane

0x8e51,	// (0x0002cf93) cam6_mode_pane_g1_ParamLimits

0x8e51,	// (0x0002cf93) cam6_mode_pane_g1

0x8e61,	// (0x0002cfa3) cam6_mode_pane_g2_ParamLimits

0x8e61,	// (0x0002cfa3) cam6_mode_pane_g2

0x8e71,	// (0x0002cfb3) cam6_mode_pane_g3_ParamLimits

0x8e71,	// (0x0002cfb3) cam6_mode_pane_g3

0x8e81,	// (0x0002cfc3) cam6_mode_pane_g4_ParamLimits

0x8e81,	// (0x0002cfc3) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x00033c29) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x00033c29) cam6_mode_pane_g

0xdb16,	// (0x00031c58) bg_tb_trans_pane_cp08_ParamLimits

0xdb16,	// (0x00031c58) bg_tb_trans_pane_cp08

0xdb24,	// (0x00031c66) cam6_battery_pane_ParamLimits

0xdb24,	// (0x00031c66) cam6_battery_pane

0xdb3a,	// (0x00031c7c) cam6_indi_pane_g1_ParamLimits

0xdb3a,	// (0x00031c7c) cam6_indi_pane_g1

0xdb4c,	// (0x00031c8e) cam6_indi_pane_g2_ParamLimits

0xdb4c,	// (0x00031c8e) cam6_indi_pane_g2

0xdb5e,	// (0x00031ca0) cam6_indi_pane_g3_ParamLimits

0xdb5e,	// (0x00031ca0) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x00033c32) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x00033c32) cam6_indi_pane_g

0xdb70,	// (0x00031cb2) cam6_indi_pane_t1_ParamLimits

0xdb70,	// (0x00031cb2) cam6_indi_pane_t1

0x8e91,	// (0x0002cfd3) cam6_autofocus_pane_g1

0x8e99,	// (0x0002cfdb) cam6_autofocus_pane_g2

0x8ea1,	// (0x0002cfe3) cam6_autofocus_pane_g3

0x8ea9,	// (0x0002cfeb) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x00033c39) cam6_autofocus_pane_g

0xdb96,	// (0x00031cd8) cam6_timer_pane_g1

0xdb9e,	// (0x00031ce0) cam6_timer_pane_t1

0xdbac,	// (0x00031cee) cam6_zoom_cont_pane

0xdbb4,	// (0x00031cf6) cam6_zoom_pane_g1

0xdbbc,	// (0x00031cfe) cam6_zoom_pane_g2

0x8eb1,	// (0x0002cff3) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x00033c42) cam6_zoom_pane_g

0x3e06,	// (0x00027f48) cam6_battery_pane_g1

0x3e06,	// (0x00027f48) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x0003351a) cam6_battery_pane_g

0xdbc4,	// (0x00031d06) cam6_zoom_cont_pane_g1

0xdbcd,	// (0x00031d0f) cam6_zoom_cont_pane_g2

0xdbd6,	// (0x00031d18) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x00033c49) cam6_zoom_cont_pane_g

0x8ece,	// (0x0002d010) cam6_mode_pane_cp_ParamLimits

0x8ece,	// (0x0002d010) cam6_mode_pane_cp

0x8ee0,	// (0x0002d022) cam6_zoom_pane_cp_ParamLimits

0x8ee0,	// (0x0002d022) cam6_zoom_pane_cp

0x8eec,	// (0x0002d02e) vid6_image_uncrop_cif_pane_ParamLimits

0x8eec,	// (0x0002d02e) vid6_image_uncrop_cif_pane

0x8efc,	// (0x0002d03e) vid6_image_uncrop_nhd_pane_ParamLimits

0x8efc,	// (0x0002d03e) vid6_image_uncrop_nhd_pane

0x8f0b,	// (0x0002d04d) vid6_image_uncrop_vga_pane_ParamLimits

0x8f0b,	// (0x0002d04d) vid6_image_uncrop_vga_pane

0x8f1a,	// (0x0002d05c) vid6_image_uncrop_wvga_pane_ParamLimits

0x8f1a,	// (0x0002d05c) vid6_image_uncrop_wvga_pane

0x8f29,	// (0x0002d06b) vid6_indi_pane_ParamLimits

0x8f29,	// (0x0002d06b) vid6_indi_pane

0xdb16,	// (0x00031c58) bg_tb_trans_pane_cp09_ParamLimits

0xdb16,	// (0x00031c58) bg_tb_trans_pane_cp09

0xdbee,	// (0x00031d30) cam6_battery_pane_cp_ParamLimits

0xdbee,	// (0x00031d30) cam6_battery_pane_cp

0xdbfa,	// (0x00031d3c) vid6_indi_pane_g1_ParamLimits

0xdbfa,	// (0x00031d3c) vid6_indi_pane_g1

0xdc0c,	// (0x00031d4e) vid6_indi_pane_g2_ParamLimits

0xdc0c,	// (0x00031d4e) vid6_indi_pane_g2

0xdc1e,	// (0x00031d60) vid6_indi_pane_g3_ParamLimits

0xdc1e,	// (0x00031d60) vid6_indi_pane_g3

0xdc33,	// (0x00031d75) vid6_indi_pane_g4_ParamLimits

0xdc33,	// (0x00031d75) vid6_indi_pane_g4

0xdc48,	// (0x00031d8a) vid6_indi_pane_g5_ParamLimits

0xdc48,	// (0x00031d8a) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x00033c50) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x00033c50) vid6_indi_pane_g

0xdc62,	// (0x00031da4) vid6_indi_pane_t1_ParamLimits

0xdc62,	// (0x00031da4) vid6_indi_pane_t1

0xdc78,	// (0x00031dba) vid6_indi_pane_t2_ParamLimits

0xdc78,	// (0x00031dba) vid6_indi_pane_t2

0xdca0,	// (0x00031de2) vid6_indi_pane_t3_ParamLimits

0xdca0,	// (0x00031de2) vid6_indi_pane_t3

0xdcc8,	// (0x00031e0a) vid6_indi_pane_t4_ParamLimits

0xdcc8,	// (0x00031e0a) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x00033c5b) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x00033c5b) vid6_indi_pane_t

0xdcec,	// (0x00031e2e) wait_bar_pane_cp08

0x8f41,	// (0x0002d083) main_cset_text2_pane_t1_ParamLimits

0x8f41,	// (0x0002d083) main_cset_text2_pane_t1

0x8eb9,	// (0x0002cffb) listscroll_gen_pane_cp06_t1_ParamLimits

0x8eb9,	// (0x0002cffb) listscroll_gen_pane_cp06_t1

0xb1b7,	// (0x0002f2f9) main_cam6_set_pane

0xd1c1,	// (0x00031303) bg_tb_trans_pane_cp06_ParamLimits

0xd1d7,	// (0x00031319) cam4_indicators_pane_g1_ParamLimits

0xd1e8,	// (0x0003132a) cam4_indicators_pane_g2_ParamLimits

0xf891,	// (0x000339d3) cam4_indicators_pane_g_ParamLimits

0xd200,	// (0x00031342) cam4_indicators_pane_t1_ParamLimits

0xb1a9,	// (0x0002f2eb) bg_tb_trans_pane_cp07_ParamLimits

0xd22a,	// (0x0003136c) vid4_indicators_pane_g1_ParamLimits

0xd23e,	// (0x00031380) vid4_indicators_pane_g2_ParamLimits

0xd252,	// (0x00031394) vid4_indicators_pane_g3_ParamLimits

0xd263,	// (0x000313a5) vid4_indicators_pane_g4_ParamLimits

0xf8a3,	// (0x000339e5) vid4_indicators_pane_g_ParamLimits

0xd27f,	// (0x000313c1) vid4_indicators_pane_t1_ParamLimits

0xd8d9,	// (0x00031a1b) vid4_progress_pane_g1_ParamLimits

0xd8e9,	// (0x00031a2b) vid4_progress_pane_g2_ParamLimits

0x2aac,	// (0x00026bee) vid4_progress_pane_g3_ParamLimits

0xd8f9,	// (0x00031a3b) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x00033b8c) vid4_progress_pane_g_ParamLimits

0x2abe,	// (0x00026c00) vid4_progress_pane_t1_ParamLimits

0xd911,	// (0x00031a53) vid4_progress_pane_t2_ParamLimits

0xd926,	// (0x00031a68) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x00033b97) vid4_progress_pane_t_ParamLimits

0x2ad4,	// (0x00026c16) wait_bar_pane_cp07_ParamLimits

0x8f5f,	// (0x0002d0a1) main_cam6_set_pane_g2_ParamLimits

0x8f5f,	// (0x0002d0a1) main_cam6_set_pane_g2

0x8f83,	// (0x0002d0c5) main_cset6_listscroll_pane_ParamLimits

0x8f83,	// (0x0002d0c5) main_cset6_listscroll_pane

0x8f9f,	// (0x0002d0e1) main_cset6_slider_pane_ParamLimits

0x8f9f,	// (0x0002d0e1) main_cset6_slider_pane

0x8fb5,	// (0x0002d0f7) main_cset6_text2_pane_ParamLimits

0x8fb5,	// (0x0002d0f7) main_cset6_text2_pane

0xdcfb,	// (0x00031e3d) main_cset6_text_pane

0xdd03,	// (0x00031e45) main_cset_list_pane_copy1_ParamLimits

0xdd03,	// (0x00031e45) main_cset_list_pane_copy1

0xdd13,	// (0x00031e55) scroll_pane_cp028_copy1

0x8fc3,	// (0x0002d105) cset_list_set_pane_copy1

0x8fd5,	// (0x0002d117) aid_position_infowindow_above_copy1

0x8fdd,	// (0x0002d11f) aid_position_infowindow_below_copy1

0xdd1c,	// (0x00031e5e) cset_list_set_pane_g1_copy1

0xdd24,	// (0x00031e66) cset_list_set_pane_g3_copy1_ParamLimits

0xdd24,	// (0x00031e66) cset_list_set_pane_g3_copy1

0xdd33,	// (0x00031e75) cset_list_set_pane_t1_copy1_ParamLimits

0xdd33,	// (0x00031e75) cset_list_set_pane_t1_copy1

0x3314,	// (0x00027456) list_highlight_pane_cp021_copy1_ParamLimits

0x3314,	// (0x00027456) list_highlight_pane_cp021_copy1

0xdd48,	// (0x00031e8a) cset6_slider_pane_ParamLimits

0xdd48,	// (0x00031e8a) cset6_slider_pane

0xdd74,	// (0x00031eb6) main_cset6_slider_pane_g1_ParamLimits

0xdd74,	// (0x00031eb6) main_cset6_slider_pane_g1

0x8fe5,	// (0x0002d127) main_cset6_slider_pane_g2_ParamLimits

0x8fe5,	// (0x0002d127) main_cset6_slider_pane_g2

0xdd9c,	// (0x00031ede) main_cset6_slider_pane_g3_ParamLimits

0xdd9c,	// (0x00031ede) main_cset6_slider_pane_g3

0x900d,	// (0x0002d14f) main_cset6_slider_pane_g4_ParamLimits

0x900d,	// (0x0002d14f) main_cset6_slider_pane_g4

0xdda8,	// (0x00031eea) main_cset6_slider_pane_g5_ParamLimits

0xdda8,	// (0x00031eea) main_cset6_slider_pane_g5

0xd423,	// (0x00031565) main_cset6_slider_pane_g7_ParamLimits

0xd423,	// (0x00031565) main_cset6_slider_pane_g7

0xd42f,	// (0x00031571) main_cset6_slider_pane_g8_ParamLimits

0xd42f,	// (0x00031571) main_cset6_slider_pane_g8

0x81e8,	// (0x0002c32a) main_cset6_slider_pane_g9_ParamLimits

0x81e8,	// (0x0002c32a) main_cset6_slider_pane_g9

0x81f4,	// (0x0002c336) main_cset6_slider_pane_g10_ParamLimits

0x81f4,	// (0x0002c336) main_cset6_slider_pane_g10

0x8200,	// (0x0002c342) main_cset6_slider_pane_g11_ParamLimits

0x8200,	// (0x0002c342) main_cset6_slider_pane_g11

0x820c,	// (0x0002c34e) main_cset6_slider_pane_g12_ParamLimits

0x820c,	// (0x0002c34e) main_cset6_slider_pane_g12

0x8218,	// (0x0002c35a) main_cset6_slider_pane_g13_ParamLimits

0x8218,	// (0x0002c35a) main_cset6_slider_pane_g13

0x8224,	// (0x0002c366) main_cset6_slider_pane_g14_ParamLimits

0x8224,	// (0x0002c366) main_cset6_slider_pane_g14

0x9019,	// (0x0002d15b) main_cset6_slider_pane_g15_ParamLimits

0x9019,	// (0x0002d15b) main_cset6_slider_pane_g15

0xd43b,	// (0x0003157d) main_cset6_slider_pane_g16_ParamLimits

0xd43b,	// (0x0003157d) main_cset6_slider_pane_g16

0xd447,	// (0x00031589) main_cset6_slider_pane_g17_ParamLimits

0xd447,	// (0x00031589) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x00033c64) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x00033c64) main_cset6_slider_pane_g

0xddb4,	// (0x00031ef6) main_cset6_slider_pane_t1_ParamLimits

0xddb4,	// (0x00031ef6) main_cset6_slider_pane_t1

0x9049,	// (0x0002d18b) main_cset6_slider_pane_t2_ParamLimits

0x9049,	// (0x0002d18b) main_cset6_slider_pane_t2

0x9074,	// (0x0002d1b6) main_cset6_slider_pane_t3_ParamLimits

0x9074,	// (0x0002d1b6) main_cset6_slider_pane_t3

0x909f,	// (0x0002d1e1) main_cset6_slider_pane_t4_ParamLimits

0x909f,	// (0x0002d1e1) main_cset6_slider_pane_t4

0x90ca,	// (0x0002d20c) main_cset6_slider_pane_t5_ParamLimits

0x90ca,	// (0x0002d20c) main_cset6_slider_pane_t5

0xddf5,	// (0x00031f37) main_cset6_slider_pane_t7_ParamLimits

0xddf5,	// (0x00031f37) main_cset6_slider_pane_t7

0x90f5,	// (0x0002d237) main_cset6_slider_pane_t8_ParamLimits

0x90f5,	// (0x0002d237) main_cset6_slider_pane_t8

0x9119,	// (0x0002d25b) main_cset6_slider_pane_t9_ParamLimits

0x9119,	// (0x0002d25b) main_cset6_slider_pane_t9

0x913d,	// (0x0002d27f) main_cset6_slider_pane_t10_ParamLimits

0x913d,	// (0x0002d27f) main_cset6_slider_pane_t10

0x9161,	// (0x0002d2a3) main_cset6_slider_pane_t11_ParamLimits

0x9161,	// (0x0002d2a3) main_cset6_slider_pane_t11

0xde2b,	// (0x00031f6d) main_cset6_slider_pane_t14_ParamLimits

0xde2b,	// (0x00031f6d) main_cset6_slider_pane_t14

0xde64,	// (0x00031fa6) main_cset6_slider_pane_t15_ParamLimits

0xde64,	// (0x00031fa6) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x00033c89) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x00033c89) main_cset6_slider_pane_t

0xcd30,	// (0x00030e72) cset_slider_pane_g1_copy1

0xde9d,	// (0x00031fdf) cset_slider_pane_g2_copy1

0xdea6,	// (0x00031fe8) cset_slider_pane_g3_copy1

0x2bdc,	// (0x00026d1e) bg_popup_sub_pane_cp011_copy1

0xdeb8,	// (0x00031ffa) main_cset_text_pane_g1_copy1

0xd600,	// (0x00031742) main_cset_text_pane_t1_copy1

0xd60e,	// (0x00031750) main_cset_text_pane_t2_copy1

0xd61c,	// (0x0003175e) main_cset_text_pane_t3_copy1

0xd62a,	// (0x0003176c) main_cset_text_pane_t4_copy1

0xd638,	// (0x0003177a) main_cset_text_pane_t5_copy1

0xdec0,	// (0x00032002) main_cset_text_pane_t6_copy1

0xdece,	// (0x00032010) main_cset_text_pane_t7_copy1

0x8f41,	// (0x0002d083) main_cset_text2_pane_t1_copy1

0xb1a9,	// (0x0002f2eb) main_ncimui_pane

0x1eb1,	// (0x00025ff3) popup_query_ncimui_window_ParamLimits

0x1eb1,	// (0x00025ff3) popup_query_ncimui_window

0xc8c0,	// (0x00030a02) field_cale_ev2_pane_g4_ParamLimits

0xc8c0,	// (0x00030a02) field_cale_ev2_pane_g4

0x7c35,	// (0x0002bd77) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7c35,	// (0x0002bd77) cell_video_dialer_keypad_pane_g2

0x0001,

0xf82b,	// (0x0003396d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf82b,	// (0x0003396d) cell_video_dialer_keypad_pane_g

0x7c4d,	// (0x0002bd8f) cell_video_dialer_keypad_pane_t1

0x2bdc,	// (0x00026d1e) bg_popup_window_pane_cp012

0xc00a,	// (0x0003014c) heading_pane_cp06

0xdefa,	// (0x0003203c) ncim_query_content_pane

0x2bdc,	// (0x00026d1e) bg_popup_heading_pane_cp01

0xdf02,	// (0x00032044) ncim_heading_pane_t1

0xdf10,	// (0x00032052) ncim_indicator_popup_pane

0xdf22,	// (0x00032064) ncim_query_button_pane

0xdf36,	// (0x00032078) ncim_query_content_pane_t1

0xdf48,	// (0x0003208a) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x00033ccd) ncim_query_content_pane_t

0xdf82,	// (0x000320c4) ncim_query_list_pane

0xdf94,	// (0x000320d6) ncim_query_popup_pane

0xdf10,	// (0x00032052) ncim_indicator_popup_pane_ParamLimits

0x92cb,	// (0x0002d40d) ncim_query_content_pane_g1_ParamLimits

0x92cb,	// (0x0002d40d) ncim_query_content_pane_g1

0xdf36,	// (0x00032078) ncim_query_content_pane_t1_ParamLimits

0xdf48,	// (0x0003208a) ncim_query_content_pane_t2_ParamLimits

0x92d7,	// (0x0002d419) ncim_query_content_pane_t3_ParamLimits

0x92d7,	// (0x0002d419) ncim_query_content_pane_t3

0x92ff,	// (0x0002d441) ncim_query_content_pane_t4_ParamLimits

0x92ff,	// (0x0002d441) ncim_query_content_pane_t4

0x9327,	// (0x0002d469) ncim_query_content_pane_t5_ParamLimits

0x9327,	// (0x0002d469) ncim_query_content_pane_t5

0xdf5a,	// (0x0003209c) ncim_query_content_pane_t6_ParamLimits

0xdf5a,	// (0x0003209c) ncim_query_content_pane_t6

0xfb8b,	// (0x00033ccd) ncim_query_content_pane_t_ParamLimits

0xdf82,	// (0x000320c4) ncim_query_list_pane_ParamLimits

0xdf94,	// (0x000320d6) ncim_query_popup_pane_ParamLimits

0xdfa8,	// (0x000320ea) wait_bar_pane_cp04

0x2bdc,	// (0x00026d1e) input_focus_pane_cp011

0xdfb0,	// (0x000320f2) ncim_query_popup_pane_t1

0xdfbe,	// (0x00032100) ncim_list_query_list_pane_ParamLimits

0xdfbe,	// (0x00032100) ncim_list_query_list_pane

0x2bdc,	// (0x00026d1e) bg_button_pane_cp027

0xdfcb,	// (0x0003210d) ncim_query_button_pane_g1

0x2bdc,	// (0x00026d1e) list_highlight_pane_cp012

0xdfd5,	// (0x00032117) ncim_list_query_list_pane_g1

0xdfdd,	// (0x0003211f) ncim_list_query_list_pane_t1

0xd1f4,	// (0x00031336) cam4_indicators_pane_g3_ParamLimits

0xd1f4,	// (0x00031336) cam4_indicators_pane_g3

0xd26f,	// (0x000313b1) vid4_indicators_pane_g5_ParamLimits

0xd26f,	// (0x000313b1) vid4_indicators_pane_g5

0xd905,	// (0x00031a47) vid4_progress_pane_g5_ParamLimits

0xd905,	// (0x00031a47) vid4_progress_pane_g5

0x91b6,	// (0x0002d2f8) main_ncimui_pane_g1

0x921f,	// (0x0002d361) ncimui_group_query_pane_ParamLimits

0x921f,	// (0x0002d361) ncimui_group_query_pane

0x9267,	// (0x0002d3a9) ncimui_list_pane_ParamLimits

0x9267,	// (0x0002d3a9) ncimui_list_pane

0x928e,	// (0x0002d3d0) ncimui_text_pane_ParamLimits

0x928e,	// (0x0002d3d0) ncimui_text_pane

0x934f,	// (0x0002d491) ncimui_text_pane_t1_ParamLimits

0x934f,	// (0x0002d491) ncimui_text_pane_t1

0xdfeb,	// (0x0003212d) ncimui_list_single_graphic_pane_ParamLimits

0xdfeb,	// (0x0003212d) ncimui_list_single_graphic_pane

0x936d,	// (0x0002d4af) ncimui_query_pane_ParamLimits

0x936d,	// (0x0002d4af) ncimui_query_pane

0x2bdc,	// (0x00026d1e) list_highlight_pane_cp013

0xdffb,	// (0x0003213d) ncim_list_query_list_pane_t1_copy1

0xe009,	// (0x0003214b) ncim_list_single_graphic_pane_g1

0x9380,	// (0x0002d4c2) ncim_query_button_pane_cp01

0x938c,	// (0x0002d4ce) ncim_query_entry_pane_ParamLimits

0x938c,	// (0x0002d4ce) ncim_query_entry_pane

0x939f,	// (0x0002d4e1) ncimui_query_pane_g1

0x93ab,	// (0x0002d4ed) ncimui_query_pane_t1_ParamLimits

0x93ab,	// (0x0002d4ed) ncimui_query_pane_t1

0x3314,	// (0x00027456) input_focus_pane_cp012

0xe011,	// (0x00032153) ncim_query_entry_pane_t1

0x34bd,	// (0x000275ff) main_im_pane_ParamLimits

0xb1a9,	// (0x0002f2eb) main_mobtv_pane_ParamLimits

0xb1a9,	// (0x0002f2eb) main_mobtv_pane

0x9031,	// (0x0002d173) main_cset6_slider_pane_g18_ParamLimits

0x9031,	// (0x0002d173) main_cset6_slider_pane_g18

0x903d,	// (0x0002d17f) main_cset6_slider_pane_g19_ParamLimits

0x903d,	// (0x0002d17f) main_cset6_slider_pane_g19

0x3397,	// (0x000274d9) bg_main_mobtv_pane_ParamLimits

0x3397,	// (0x000274d9) bg_main_mobtv_pane

0x93c4,	// (0x0002d506) main_mobtv_info_pane

0x93cd,	// (0x0002d50f) main_mobtv_loading_pane_ParamLimits

0x93cd,	// (0x0002d50f) main_mobtv_loading_pane

0xe023,	// (0x00032165) main_mobtv_pg_channel_list_pane

0xe02d,	// (0x0003216f) main_mobtv_pg_hdr_pane

0x93da,	// (0x0002d51c) main_mobtv_programe_curr_pane_ParamLimits

0x93da,	// (0x0002d51c) main_mobtv_programe_curr_pane

0x93e7,	// (0x0002d529) main_mobtv_programe_next_pane_ParamLimits

0x93e7,	// (0x0002d529) main_mobtv_programe_next_pane

0xe036,	// (0x00032178) popup_mobtv_noti_window

0x3e06,	// (0x00027f48) main_tv_pg_hdr_pane_g1

0xe03e,	// (0x00032180) main_tv_pg_hdr_pane_g2

0xe046,	// (0x00032188) main_tv_pg_hdr_pane_g3

0xe04e,	// (0x00032190) main_tv_pg_hdr_pane_g4

0xe056,	// (0x00032198) main_tv_pg_hdr_pane_g5

0xe060,	// (0x000321a2) main_tv_pg_hdr_pane_g6

0xe06a,	// (0x000321ac) main_tv_pg_hdr_pane_g7

0xe074,	// (0x000321b6) main_tv_pg_hdr_pane_g8

0xe07e,	// (0x000321c0) main_tv_pg_hdr_pane_g9

0xe088,	// (0x000321ca) main_tv_pg_hdr_pane_g10

0xe092,	// (0x000321d4) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x00033cda) main_tv_pg_hdr_pane_g

0xe09c,	// (0x000321de) main_tv_pg_hdr_pane_t1

0xe0aa,	// (0x000321ec) main_tv_pg_hdr_pane_t2

0xe0b8,	// (0x000321fa) main_tv_pg_hdr_pane_t3

0xe0c8,	// (0x0003220a) main_tv_pg_hdr_pane_t4

0xe0d8,	// (0x0003221a) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x00033cf1) main_tv_pg_hdr_pane_t

0xe0e8,	// (0x0003222a) single_mobtv_pg_channel_pane_ParamLimits

0xe0e8,	// (0x0003222a) single_mobtv_pg_channel_pane

0xe0fa,	// (0x0003223c) single_mobtv_pg_channel_table_pane

0x4ef2,	// (0x00029034) single_mobtv_pg_channel_thumb_pane

0xe103,	// (0x00032245) single_tv_pg_channel_pane_g1

0xe10c,	// (0x0003224e) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x00033cfc) single_tv_pg_channel_pane_g

0x337b,	// (0x000274bd) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x337b,	// (0x000274bd) bg_single_mobtv_pg_channel_thumb_pane

0xe115,	// (0x00032257) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe115,	// (0x00032257) single_mobtv_pg_channel_thumb_pane_g1

0xe123,	// (0x00032265) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe123,	// (0x00032265) single_mobtv_pg_channel_thumb_pane_g2

0xe12f,	// (0x00032271) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe12f,	// (0x00032271) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x00033d01) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x00033d01) single_mobtv_pg_channel_thumb_pane_g

0xe13b,	// (0x0003227d) single_mobtv_pg_channel_thumb_pane_t1

0xe149,	// (0x0003228b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x00033d08) single_mobtv_pg_channel_thumb_pane_t

0x3e06,	// (0x00027f48) bg_single_mobtv_pg_channel_table_pane_g1

0x3e06,	// (0x00027f48) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x0003351a) bg_single_mobtv_pg_channel_table_pane_g

0xe157,	// (0x00032299) single_mobtv_pg_channel_table_pane_t1

0xe165,	// (0x000322a7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x00033d0d) single_mobtv_pg_channel_table_pane_t

0x93fc,	// (0x0002d53e) main_mobtv_info_pane_g1_ParamLimits

0x93fc,	// (0x0002d53e) main_mobtv_info_pane_g1

0x941a,	// (0x0002d55c) main_mobtv_info_pane_t1_ParamLimits

0x941a,	// (0x0002d55c) main_mobtv_info_pane_t1

0x9492,	// (0x0002d5d4) main_mobtv_info_pane_t2_ParamLimits

0x9492,	// (0x0002d5d4) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x00033d17) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x00033d17) main_mobtv_info_pane_t

0x9521,	// (0x0002d663) wait_bar_pane_cp05

0x9533,	// (0x0002d675) main_mobtv_loading_pane_g1_ParamLimits

0x9533,	// (0x0002d675) main_mobtv_loading_pane_g1

0x9546,	// (0x0002d688) main_mobtv_loading_pane_g2_ParamLimits

0x9546,	// (0x0002d688) main_mobtv_loading_pane_g2

0x9552,	// (0x0002d694) main_mobtv_loading_pane_g3_ParamLimits

0x9552,	// (0x0002d694) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x00033d1e) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x00033d1e) main_mobtv_loading_pane_g

0xe173,	// (0x000322b5) main_mobtv_loading_pane_t1_ParamLimits

0xe173,	// (0x000322b5) main_mobtv_loading_pane_t1

0xe18b,	// (0x000322cd) main_mobtv_loading_pane_t2_ParamLimits

0xe18b,	// (0x000322cd) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x00033d25) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x00033d25) main_mobtv_loading_pane_t

0x9565,	// (0x0002d6a7) wait_bar_pane_cp06_ParamLimits

0x9565,	// (0x0002d6a7) wait_bar_pane_cp06

0xe1af,	// (0x000322f1) main_mobtv_programe_curr_pane_t1

0xe1bd,	// (0x000322ff) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x00033d2a) main_mobtv_programe_curr_pane_t

0xe1cb,	// (0x0003230d) main_mobtv_programe_next_pane_t1

0xe1d9,	// (0x0003231b) main_mobtv_programe_next_pane_t2

0xe1e7,	// (0x00032329) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x00033d2f) main_mobtv_programe_next_pane_t

0x2bdc,	// (0x00026d1e) bg_popup_mobtv_noti_window_pane

0xe1f5,	// (0x00032337) popup_mobtv_noti_window_g1

0xe1fd,	// (0x0003233f) popup_mobtv_noti_window_t1

0xe20b,	// (0x0003234d) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x00033d36) popup_mobtv_noti_window_t

0x3e06,	// (0x00027f48) bg_popup_mobtv_noti_window_pane_g1

0xb1b7,	// (0x0002f2f9) sc_clock_pane

0xb1b7,	// (0x0002f2f9) main_fs_bigclock_pane

0x8cc6,	// (0x0002ce08) blid2_tripm_pane_t4_ParamLimits

0x8cc6,	// (0x0002ce08) blid2_tripm_pane_t4

0x9574,	// (0x0002d6b6) sc_clock_pane_g1_ParamLimits

0x9574,	// (0x0002d6b6) sc_clock_pane_g1

0x9586,	// (0x0002d6c8) sc_clock_pane_t1_ParamLimits

0x9586,	// (0x0002d6c8) sc_clock_pane_t1

0x95a8,	// (0x0002d6ea) sc_clock_pane_t2_ParamLimits

0x95a8,	// (0x0002d6ea) sc_clock_pane_t2

0x95c0,	// (0x0002d702) sc_clock_pane_t3_ParamLimits

0x95c0,	// (0x0002d702) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x00033d3b) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x00033d3b) sc_clock_pane_t

0xa2d9,	// (0x0002e41b) main_fs_bigclock_indicator_pane_ParamLimits

0xa2d9,	// (0x0002e41b) main_fs_bigclock_indicator_pane

0x9666,	// (0x0002d7a8) main_fs_bigclock_pane_g1_ParamLimits

0x9666,	// (0x0002d7a8) main_fs_bigclock_pane_g1

0xa2e5,	// (0x0002e427) main_fs_bigclock_pane_t1_ParamLimits

0xa2e5,	// (0x0002e427) main_fs_bigclock_pane_t1

0xa2f7,	// (0x0002e439) main_fs_bigclock_pane_t2_ParamLimits

0xa2f7,	// (0x0002e439) main_fs_bigclock_pane_t2

0xa30b,	// (0x0002e44d) main_fs_bigclock_pane_t3_ParamLimits

0xa30b,	// (0x0002e44d) main_fs_bigclock_pane_t3

0x0002,

0xfd8a,	// (0x00033ecc) main_fs_bigclock_pane_t_ParamLimits

0xfd8a,	// (0x00033ecc) main_fs_bigclock_pane_t

0xed7f,	// (0x00032ec1) main_fs_bigclock_indicator_pane_g1

0xdf2a,	// (0x0003206c) ncim_query_content_pane_g2_ParamLimits

0xdf2a,	// (0x0003206c) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x00033cc8) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x00033cc8) ncim_query_content_pane_g

0x95d9,	// (0x0002d71b) sc_clock_pane_t4_ParamLimits

0x95d9,	// (0x0002d71b) sc_clock_pane_t4

0xb1a9,	// (0x0002f2eb) main_radioblah_pane

0xd12f,	// (0x00031271) cell_call4_button_pane_t1_copy1_ParamLimits

0xd12f,	// (0x00031271) cell_call4_button_pane_t1_copy1

0x91ce,	// (0x0002d310) main_ncimui_pane_t1_ParamLimits

0x91ce,	// (0x0002d310) main_ncimui_pane_t1

0x91e8,	// (0x0002d32a) main_ncimui_pane_t2_ParamLimits

0x91e8,	// (0x0002d32a) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x00033cc1) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x00033cc1) main_ncimui_pane_t

0xe351,	// (0x00032493) main_radioblah_anim_pane_ParamLimits

0xe351,	// (0x00032493) main_radioblah_anim_pane

0xe362,	// (0x000324a4) main_radioblah_info_pane_ParamLimits

0xe362,	// (0x000324a4) main_radioblah_info_pane

0xe376,	// (0x000324b8) main_radioblah_pane_t1_ParamLimits

0xe376,	// (0x000324b8) main_radioblah_pane_t1

0xe392,	// (0x000324d4) main_radioblah_pane_t2_ParamLimits

0xe392,	// (0x000324d4) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x00033d5c) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x00033d5c) main_radioblah_pane_t

0x96c5,	// (0x0002d807) main_radioblah_rocker_ctrl_pane_ParamLimits

0x96c5,	// (0x0002d807) main_radioblah_rocker_ctrl_pane

0xe3da,	// (0x0003251c) main_radioblah_info_pane_t1_ParamLimits

0xe3da,	// (0x0003251c) main_radioblah_info_pane_t1

0x971d,	// (0x0002d85f) main_radioblah_info_pane_t2_ParamLimits

0x971d,	// (0x0002d85f) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x00033d65) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x00033d65) main_radioblah_info_pane_t

0x3e06,	// (0x00027f48) main_radioblah_rocker_ctrl_pane_g1

0x97cd,	// (0x0002d90f) main_radioblah_rocker_ctrl_pane_g2

0x97d5,	// (0x0002d917) main_radioblah_rocker_ctrl_pane_g3

0x97dd,	// (0x0002d91f) main_radioblah_rocker_ctrl_pane_g4

0x97e5,	// (0x0002d927) main_radioblah_rocker_ctrl_pane_g5

0x97ed,	// (0x0002d92f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x00033d6e) main_radioblah_rocker_ctrl_pane_g

0x8f41,	// (0x0002d083) main_cset_text2_pane_t1_copy1_ParamLimits

0xd1b9,	// (0x000312fb) cam4_image_uncrop_qvga_pane

0xd21a,	// (0x0003135c) vid4_image_uncrop_qcif_pane

0xdb08,	// (0x00031c4a) cam6_image_uncrop_qvga_pane_ParamLimits

0xdb08,	// (0x00031c4a) cam6_image_uncrop_qvga_pane

0xdbde,	// (0x00031d20) vid6_image_uncrop_qcif_pane_ParamLimits

0xdbde,	// (0x00031d20) vid6_image_uncrop_qcif_pane

0x2bdc,	// (0x00026d1e) bg_popup_preview_window_pane_cp03

0xdedc,	// (0x0003201e) list_cset_text2_pane

0xdee4,	// (0x00032026) main_cset6_text2_pane_g1

0xdeec,	// (0x0003202e) main_cset6_text2_pane_t1

0x0388,	// (0x000244ca) list_cset_text2_pane_t1_ParamLimits

0x0388,	// (0x000244ca) list_cset_text2_pane_t1

0xb1a9,	// (0x0002f2eb) main_radioblah_pane_ParamLimits

0x950d,	// (0x0002d64f) main_mobtv_info_pane_t3_ParamLimits

0x950d,	// (0x0002d64f) main_mobtv_info_pane_t3

0x96b3,	// (0x0002d7f5) main_radioblah_pane_g1

0x96ed,	// (0x0002d82f) main_radioblah_info_pane_g1

0x9772,	// (0x0002d8b4) main_radioblah_info_pane_t3_ParamLimits

0x9772,	// (0x0002d8b4) main_radioblah_info_pane_t3

0x4e9f,	// (0x00028fe1) highlight_cell_cale_month_pane_ParamLimits

0x4e9f,	// (0x00028fe1) highlight_cell_cale_month_pane

0xb1b7,	// (0x0002f2f9) main_phob_fisheye_pane

0xc961,	// (0x00030aa3) scroll_pane_cp0031_ParamLimits

0xc961,	// (0x00030aa3) scroll_pane_cp0031

0xdcec,	// (0x00031e2e) wait_bar_pane_cp08_ParamLimits

0x8fc3,	// (0x0002d105) cset_list_set_pane_copy1_ParamLimits

0xe414,	// (0x00032556) highlight_cell_cale_month_pane_g1

0x97f5,	// (0x0002d937) highlight_cell_cale_month_pane_t1

0xd8c8,	// (0x00031a0a) list_gen_pane_cp01

0xd40e,	// (0x00031550) scroll_pane_01

0x9803,	// (0x0002d945) list_single_double_fisheye_pane

0x980c,	// (0x0002d94e) list_double_fisheye_pane_g1_ParamLimits

0x980c,	// (0x0002d94e) list_double_fisheye_pane_g1

0x9818,	// (0x0002d95a) list_double_fisheye_pane_g2_ParamLimits

0x9818,	// (0x0002d95a) list_double_fisheye_pane_g2

0x982c,	// (0x0002d96e) list_double_fisheye_pane_g3_ParamLimits

0x982c,	// (0x0002d96e) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x00033d7b) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x00033d7b) list_double_fisheye_pane_g

0x9855,	// (0x0002d997) list_double_fisheye_pane_t1_ParamLimits

0x9855,	// (0x0002d997) list_double_fisheye_pane_t1

0x9870,	// (0x0002d9b2) list_double_fisheye_pane_t2_ParamLimits

0x9870,	// (0x0002d9b2) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x00033d86) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x00033d86) list_double_fisheye_pane_t

0xb1b7,	// (0x0002f2f9) main_call5_pane

0x9604,	// (0x0002d746) sc_swipe_pane_ParamLimits

0x9604,	// (0x0002d746) sc_swipe_pane

0x98a5,	// (0x0002d9e7) call5_image_pane_ParamLimits

0x98a5,	// (0x0002d9e7) call5_image_pane

0x98c2,	// (0x0002da04) call5_swipe_1_pane_ParamLimits

0x98c2,	// (0x0002da04) call5_swipe_1_pane

0x98d5,	// (0x0002da17) call5_swipe_2_pane_ParamLimits

0x98d5,	// (0x0002da17) call5_swipe_2_pane

0x9900,	// (0x0002da42) popup_call5_audio_first_window_ParamLimits

0x9900,	// (0x0002da42) popup_call5_audio_first_window

0x337b,	// (0x000274bd) call5_swipe_1_pane_g1_ParamLimits

0x337b,	// (0x000274bd) call5_swipe_1_pane_g1

0xe41c,	// (0x0003255e) call5_swipe_1_pane_g2_ParamLimits

0xe41c,	// (0x0003255e) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x00033d8b) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x00033d8b) call5_swipe_1_pane_g

0xe428,	// (0x0003256a) call5_swipe_1_pane_t1_ParamLimits

0xe428,	// (0x0003256a) call5_swipe_1_pane_t1

0x337b,	// (0x000274bd) call5_swipe_2_pane_g1_ParamLimits

0x337b,	// (0x000274bd) call5_swipe_2_pane_g1

0xe43d,	// (0x0003257f) call5_swipe_2_pane_g2_ParamLimits

0xe43d,	// (0x0003257f) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x00033d90) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x00033d90) call5_swipe_2_pane_g

0xe449,	// (0x0003258b) call5_swipe_2_pane_t1_ParamLimits

0xe449,	// (0x0003258b) call5_swipe_2_pane_t1

0xe45e,	// (0x000325a0) sc_swipe_pane_g1_ParamLimits

0xe45e,	// (0x000325a0) sc_swipe_pane_g1

0xe46b,	// (0x000325ad) sc_swipe_pane_g2_ParamLimits

0xe46b,	// (0x000325ad) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x00033d95) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x00033d95) sc_swipe_pane_g

0xe477,	// (0x000325b9) sc_swipe_pane_t1_ParamLimits

0xe477,	// (0x000325b9) sc_swipe_pane_t1

0xb1b7,	// (0x0002f2f9) main_cmail_launcher_pane

0x9911,	// (0x0002da53) aid_size_cell_cmail_l_ParamLimits

0x9911,	// (0x0002da53) aid_size_cell_cmail_l

0x991f,	// (0x0002da61) grid_cmail_l_pane_ParamLimits

0x991f,	// (0x0002da61) grid_cmail_l_pane

0x9939,	// (0x0002da7b) cell_cmail_l_pane_ParamLimits

0x9939,	// (0x0002da7b) cell_cmail_l_pane

0xe48c,	// (0x000325ce) cell_cmail_l_pane_g1_ParamLimits

0xe48c,	// (0x000325ce) cell_cmail_l_pane_g1

0xe498,	// (0x000325da) cell_cmail_l_pane_t1_ParamLimits

0xe498,	// (0x000325da) cell_cmail_l_pane_t1

0xe4ae,	// (0x000325f0) cell_cmail_l_pane_t2_ParamLimits

0xe4ae,	// (0x000325f0) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x00033d9a) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x00033d9a) cell_cmail_l_pane_t

0x3314,	// (0x00027456) grid_highlight_pane_cp018_ParamLimits

0x3314,	// (0x00027456) grid_highlight_pane_cp018

0x180d,	// (0x0002594f) main2_pane_ParamLimits

0x180d,	// (0x0002594f) main2_pane

0x3628,	// (0x0002776a) popup_sp_fs_action_menu_bg_pane_g1

0x3630,	// (0x00027772) popup_sp_fs_action_menu_bg_pane_g2

0x3638,	// (0x0002777a) popup_sp_fs_action_menu_bg_pane_g3

0x3640,	// (0x00027782) popup_sp_fs_action_menu_bg_pane_g4

0x3648,	// (0x0002778a) popup_sp_fs_action_menu_bg_pane_g5

0x3650,	// (0x00027792) popup_sp_fs_action_menu_bg_pane_g6

0x3658,	// (0x0002779a) popup_sp_fs_action_menu_bg_pane_g7

0x3660,	// (0x000277a2) popup_sp_fs_action_menu_bg_pane_g8

0x3668,	// (0x000277aa) popup_sp_fs_action_menu_bg_pane_g9

0x3670,	// (0x000277b2) popup_sp_fs_action_menu_bg_pane_g10

0x3670,	// (0x000277b2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00033287) popup_sp_fs_action_menu_bg_pane_g

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g3_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g3_g1

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g3_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g3_g2

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00033335) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00033335) list_medium_line_x2_t3_g3_g

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g3_t1

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g3_t2

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0003333c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0003333c) list_medium_line_x2_t3_g3_t

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g2_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g2_g1

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00033343) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00033343) list_medium_line_x2_t3_g2_g

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g2_t1

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g2_t2

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0003333c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0003333c) list_medium_line_x2_t3_g2_t

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g4_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g4_g1

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g4_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g4_g2

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g4_g3_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g4_g3

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g4_g4_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00033348) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00033348) list_medium_line_x2_t4_g4_g

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g4_t1

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g4_t2

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g4_t3

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00033351) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00033351) list_medium_line_x2_t4_g4_t

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g4_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g4_g1

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g4_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g4_g2

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g4_g3_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g4_g3

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00033348) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00033348) list_medium_line_x2_t2_g4_g

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g4_t1

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x00033318) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x00033318) list_medium_line_x2_t2_g4_t

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g3_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g3_g1

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g3_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g3_g2

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00033335) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00033335) list_medium_line_x2_t2_g3_g

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g3_t1

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x00033318) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x00033318) list_medium_line_x2_t2_g3_t

0x520f,	// (0x00029351) main_sp_fs_list_pane_ParamLimits

0x520f,	// (0x00029351) main_sp_fs_list_pane

0xb290,	// (0x0002f3d2) sp_fs_scroll_pane_ParamLimits

0xb290,	// (0x0002f3d2) sp_fs_scroll_pane

0x521b,	// (0x0002935d) list_medium_line_x2_t3_t1

0x521b,	// (0x0002935d) list_medium_line_x2_t3_t2

0x521b,	// (0x0002935d) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x000333fe) list_medium_line_x2_t3_t

0x521b,	// (0x0002935d) list_medium_line_x3_t4_t1

0x521b,	// (0x0002935d) list_medium_line_x3_t4_t2

0x521b,	// (0x0002935d) list_medium_line_x3_t4_t3

0x521b,	// (0x0002935d) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x00033405) list_medium_line_x3_t4_t

0x521b,	// (0x0002935d) list_medium_line_x4_t5_t1

0x521b,	// (0x0002935d) list_medium_line_x4_t5_t2

0x521b,	// (0x0002935d) list_medium_line_x4_t5_t3

0x521b,	// (0x0002935d) list_medium_line_x4_t5_t4

0x521b,	// (0x0002935d) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x0003340e) list_medium_line_x4_t5_t

0x337b,	// (0x000274bd) list_medium_line_t4_g4_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t4_g4_g1

0x337b,	// (0x000274bd) list_medium_line_t4_g4_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t4_g4_g2

0x337b,	// (0x000274bd) list_medium_line_t4_g4_g3_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t4_g4_g3

0x337b,	// (0x000274bd) list_medium_line_t4_g4_g4_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00033348) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00033348) list_medium_line_t4_g4_g

0x3c82,	// (0x00027dc4) list_medium_line_t4_g4_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t4_g4_t1

0x3c82,	// (0x00027dc4) list_medium_line_t4_g4_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t4_g4_t2

0x3c82,	// (0x00027dc4) list_medium_line_t4_g4_t3_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t4_g4_t3

0x3c82,	// (0x00027dc4) list_medium_line_t4_g4_t4_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x00033351) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x00033351) list_medium_line_t4_g4_t

0x5530,	// (0x00029672) chi_dic_find_pane_g1

0x1c81,	// (0x00025dc3) main_tport_pane

0x521b,	// (0x0002935d) list_medium_line_plain_t1

0x337b,	// (0x000274bd) list_medium_line_t2_g2_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t2_g2_g1

0x337b,	// (0x000274bd) list_medium_line_t2_g2_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00033343) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00033343) list_medium_line_t2_g2_g

0x3c82,	// (0x00027dc4) list_medium_line_t2_g2_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t2_g2_t1

0x3c82,	// (0x00027dc4) list_medium_line_t2_g2_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x00033318) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x00033318) list_medium_line_t2_g2_t

0xd93c,	// (0x00031a7e) aid_sp_fs_list_icon_a_sm

0xd944,	// (0x00031a86) aid_sp_fs_list_icon_d

0xd94c,	// (0x00031a8e) aid_sp_fs_text_primary

0xd955,	// (0x00031a97) aid_sp_fs_text_secondary

0x2bdc,	// (0x00026d1e) list_medium_line

0x2bdc,	// (0x00026d1e) list_medium_line_g2

0x2bdc,	// (0x00026d1e) list_medium_line_g3

0x2bdc,	// (0x00026d1e) list_medium_line_plain

0x2bdc,	// (0x00026d1e) list_medium_line_plain_t2

0x2bdc,	// (0x00026d1e) list_medium_line_plain_t3

0x2bdc,	// (0x00026d1e) list_medium_line_right_icon

0x2bdc,	// (0x00026d1e) list_medium_line_right_iconx2

0x2bdc,	// (0x00026d1e) list_medium_line_t2

0x2bdc,	// (0x00026d1e) list_medium_line_t2_g2

0x2bdc,	// (0x00026d1e) list_medium_line_t2_g3

0x2bdc,	// (0x00026d1e) list_medium_line_t2_right_icon

0x2bdc,	// (0x00026d1e) list_medium_line_t2_right_iconx2

0x2bdc,	// (0x00026d1e) list_medium_line_t3

0x2bdc,	// (0x00026d1e) list_medium_line_t3_g2

0x2bdc,	// (0x00026d1e) list_medium_line_t3_g3

0x2bdc,	// (0x00026d1e) list_medium_line_t3_right_iconx2

0x2bdc,	// (0x00026d1e) list_medium_line_t4_g4

0x2bdc,	// (0x00026d1e) list_medium_line_x2

0x2bdc,	// (0x00026d1e) list_medium_line_x2_t2_g2

0x2bdc,	// (0x00026d1e) list_medium_line_x2_t2_g3

0x2bdc,	// (0x00026d1e) list_medium_line_x2_t2_g4

0x2bdc,	// (0x00026d1e) list_medium_line_x2_t3

0x2bdc,	// (0x00026d1e) list_medium_line_x2_t3_g2

0x2bdc,	// (0x00026d1e) list_medium_line_x2_t3_g3

0x2bdc,	// (0x00026d1e) list_medium_line_x2_t3_g4

0x2bdc,	// (0x00026d1e) list_medium_line_x2_t4_g2

0x2bdc,	// (0x00026d1e) list_medium_line_x2_t4_g4

0x2bdc,	// (0x00026d1e) list_medium_line_x3

0x2bdc,	// (0x00026d1e) list_medium_line_x3_t4

0x2bdc,	// (0x00026d1e) list_medium_line_x3_t4_g4

0x2bdc,	// (0x00026d1e) list_medium_line_x4_t4

0x2bdc,	// (0x00026d1e) list_medium_line_x4_t4_g7

0x2bdc,	// (0x00026d1e) list_medium_line_x4_t5

0x8ab6,	// (0x0002cbf8) list_single_fs_dyc_pane_ParamLimits

0x8ab6,	// (0x0002cbf8) list_single_fs_dyc_pane

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g1

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g2

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g3_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g3

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g4_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g4

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g5_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g5

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g6_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x4_t4_g7_g6

0x3389,	// (0x000274cb) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3389,	// (0x000274cb) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x00033ca2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x00033ca2) list_medium_line_x4_t4_g7_g

0x3c82,	// (0x00027dc4) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x4_t4_g7_t1

0x3c82,	// (0x00027dc4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x4_t4_g7_t2

0x3c82,	// (0x00027dc4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x4_t4_g7_t3

0x5a9d,	// (0x00029bdf) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5a9d,	// (0x00029bdf) list_medium_line_x4_t4_g7_t4

0x5a9d,	// (0x00029bdf) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5a9d,	// (0x00029bdf) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x00033cb1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x00033cb1) list_medium_line_x4_t4_g7_t

0x9185,	// (0x0002d2c7) list_single_dyc_row_pane_ParamLimits

0x9185,	// (0x0002d2c7) list_single_dyc_row_pane

0x9892,	// (0x0002d9d4) call5_gesture_pane_ParamLimits

0x9892,	// (0x0002d9d4) call5_gesture_pane

0x98e8,	// (0x0002da2a) call5_windows_pane_ParamLimits

0x98e8,	// (0x0002da2a) call5_windows_pane

0x9953,	// (0x0002da95) call5_swipe_1_pane_cp_ParamLimits

0x9953,	// (0x0002da95) call5_swipe_1_pane_cp

0x995f,	// (0x0002daa1) call5_swipe_2_pane_cp_ParamLimits

0x995f,	// (0x0002daa1) call5_swipe_2_pane_cp

0x3c19,	// (0x00027d5b) call5_image_pane_cp

0x996b,	// (0x0002daad) popup_call5_audio_first_window_cp_ParamLimits

0x996b,	// (0x0002daad) popup_call5_audio_first_window_cp

0xe45e,	// (0x000325a0) call5_swipe_1_pane_g1_cp_ParamLimits

0xe45e,	// (0x000325a0) call5_swipe_1_pane_g1_cp

0xe4cb,	// (0x0003260d) call5_swipe_1_pane_g2_cp

0xe477,	// (0x000325b9) call5_swipe_1_pane_t1_cp_ParamLimits

0xe477,	// (0x000325b9) call5_swipe_1_pane_t1_cp

0xe45e,	// (0x000325a0) call5_swipe_2_pane_g1_cp_ParamLimits

0xe45e,	// (0x000325a0) call5_swipe_2_pane_g1_cp

0xe4d3,	// (0x00032615) call5_swipe_2_pane_g2_cp

0xe4db,	// (0x0003261d) call5_swipe_2_pane_t1_cp_ParamLimits

0xe4db,	// (0x0003261d) call5_swipe_2_pane_t1_cp

0x3314,	// (0x00027456) main_sp_fs_email_pane

0xe4f0,	// (0x00032632) main_sp_fs_listscroll_pane_te

0x9979,	// (0x0002dabb) popup_sp_fs_action_menu_pane_ParamLimits

0x9979,	// (0x0002dabb) popup_sp_fs_action_menu_pane

0x3e06,	// (0x00027f48) bg_sp_fs_ctrlbar_pane_g1

0xe4f9,	// (0x0003263b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe502,	// (0x00032644) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc083,	// (0x000301c5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x3e06,	// (0x00027f48) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x00033d9f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc3c8,	// (0x0003050a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc3c8,	// (0x0003050a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe50b,	// (0x0003264d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe50b,	// (0x0003264d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe517,	// (0x00032659) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe517,	// (0x00032659) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x00033da8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x00033da8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe523,	// (0x00032665) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe523,	// (0x00032665) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3e06,	// (0x00027f48) list_medium_line_t2_right_icon_g1

0x521b,	// (0x0002935d) list_medium_line_t2_right_icon_t1

0x521b,	// (0x0002935d) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x00033dad) list_medium_line_t2_right_icon_t

0x5ab1,	// (0x00029bf3) bg_sp_fs_ctrlbar_pane_ParamLimits

0x5ab1,	// (0x00029bf3) bg_sp_fs_ctrlbar_pane

0x9a03,	// (0x0002db45) main_sp_fs_ctrlbar_button_pane_cp01

0x9a0d,	// (0x0002db4f) main_sp_fs_ctrlbar_ddmenu_pane

0xe575,	// (0x000326b7) main_sp_fs_ctrlbar_pane_g1

0xe581,	// (0x000326c3) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x00033db2) main_sp_fs_ctrlbar_pane_g

0x9a4b,	// (0x0002db8d) main_sp_fs_ctrlbar_pane_t1

0x9a8a,	// (0x0002dbcc) main_sp_fs_ctrlbar_pane

0x9aae,	// (0x0002dbf0) main_sp_fs_listscroll_pane_te_cp01

0x9ace,	// (0x0002dc10) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9ace,	// (0x0002dc10) popup_sp_fs_action_menu_pane_cp01

0x3314,	// (0x00027456) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3314,	// (0x00027456) bg_sp_fs_highlight_list_pane_cp01

0xe5a8,	// (0x000326ea) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe5a8,	// (0x000326ea) sp_fs_action_menu_list_gene_pane_g1

0xe5b7,	// (0x000326f9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe5b7,	// (0x000326f9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x00033dc0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x00033dc0) sp_fs_action_menu_list_gene_pane_g

0xe5c4,	// (0x00032706) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe5c4,	// (0x00032706) sp_fs_action_menu_list_gene_pane_t1

0xe5dc,	// (0x0003271e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe5dc,	// (0x0003271e) sp_fs_action_menu_list_gene_pane

0xe5fb,	// (0x0003273d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe5fb,	// (0x0003273d) popup_sp_fs_action_menu_bg_pane

0xe609,	// (0x0003274b) sp_fs_action_menu_list_pane_ParamLimits

0xe609,	// (0x0003274b) sp_fs_action_menu_list_pane

0x9af3,	// (0x0002dc35) sp_fs_scroll_pane_cp01_ParamLimits

0x9af3,	// (0x0002dc35) sp_fs_scroll_pane_cp01

0x521b,	// (0x0002935d) list_medium_line_plain_t2_t1

0x521b,	// (0x0002935d) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x00033dad) list_medium_line_plain_t2_t

0x521b,	// (0x0002935d) list_medium_line_plain_t3_t1

0x521b,	// (0x0002935d) list_medium_line_plain_t3_t2

0x521b,	// (0x0002935d) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x000333fe) list_medium_line_plain_t3_t

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g2_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g2_g1

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00033343) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00033343) list_medium_line_x2_t2_g2_g

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g2_t1

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x00033318) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x00033318) list_medium_line_x2_t2_g2_t

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g2_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g2_g1

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g2_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00033343) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00033343) list_medium_line_x2_t4_g2_g

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g2_t1

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g2_t2

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g2_t3

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00033351) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00033351) list_medium_line_x2_t4_g2_t

0x3e06,	// (0x00027f48) list_medium_line_t3_right_iconx2_g1

0x3e06,	// (0x00027f48) list_medium_line_t3_right_iconx2_g2

0x3e06,	// (0x00027f48) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x0003351f) list_medium_line_t3_right_iconx2_g

0x521b,	// (0x0002935d) list_medium_line_t3_right_iconx2_t1

0x521b,	// (0x0002935d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x00033dad) list_medium_line_t3_right_iconx2_t

0x337b,	// (0x000274bd) list_medium_line_x3_t4_g4_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x3_t4_g4_g1

0x337b,	// (0x000274bd) list_medium_line_x3_t4_g4_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x3_t4_g4_g2

0x337b,	// (0x000274bd) list_medium_line_x3_t4_g4_g3_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x3_t4_g4_g3

0x337b,	// (0x000274bd) list_medium_line_x3_t4_g4_g4_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00033348) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00033348) list_medium_line_x3_t4_g4_g

0x3c82,	// (0x00027dc4) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x3_t4_g4_t1

0x3c82,	// (0x00027dc4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x3_t4_g4_t2

0x3c82,	// (0x00027dc4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x3_t4_g4_t3

0x3c82,	// (0x00027dc4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x00033351) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x00033351) list_medium_line_x3_t4_g4_t

0x9b19,	// (0x0002dc5b) list_single_dyc_row_text_pane_t1_ParamLimits

0x9b19,	// (0x0002dc5b) list_single_dyc_row_text_pane_t1

0x9b62,	// (0x0002dca4) list_single_dyc_row_text_pane_t2_ParamLimits

0x9b62,	// (0x0002dca4) list_single_dyc_row_text_pane_t2

0xe629,	// (0x0003276b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe629,	// (0x0003276b) list_single_dyc_row_text_pane_t3

0x0005,

0xfc83,	// (0x00033dc5) list_single_dyc_row_text_pane_t_ParamLimits

0xfc83,	// (0x00033dc5) list_single_dyc_row_text_pane_t

0xe64d,	// (0x0003278f) list_single_dyc_row_pane_g1_ParamLimits

0xe64d,	// (0x0003278f) list_single_dyc_row_pane_g1

0xe659,	// (0x0003279b) list_single_dyc_row_pane_g2_ParamLimits

0xe659,	// (0x0003279b) list_single_dyc_row_pane_g2

0xe665,	// (0x000327a7) list_single_dyc_row_pane_g3_ParamLimits

0xe665,	// (0x000327a7) list_single_dyc_row_pane_g3

0xe671,	// (0x000327b3) list_single_dyc_row_pane_g4_ParamLimits

0xe671,	// (0x000327b3) list_single_dyc_row_pane_g4

0x0003,

0xfc90,	// (0x00033dd2) list_single_dyc_row_pane_g_ParamLimits

0xfc90,	// (0x00033dd2) list_single_dyc_row_pane_g

0xe67d,	// (0x000327bf) list_single_dyc_row_text_pane_ParamLimits

0xe67d,	// (0x000327bf) list_single_dyc_row_text_pane

0x2bdc,	// (0x00026d1e) bg_sp_fs_scroll_pane

0xe69c,	// (0x000327de) thumb_sp_fs_scroll_pane

0x337b,	// (0x000274bd) list_medium_line_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_g1

0x3c82,	// (0x00027dc4) list_medium_line_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t1

0x337b,	// (0x000274bd) list_medium_line_x2_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_g1

0x337b,	// (0x000274bd) list_medium_line_x2_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00033343) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00033343) list_medium_line_x2_g

0x3c82,	// (0x00027dc4) list_medium_line_x2_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t1

0x337b,	// (0x000274bd) list_medium_line_x3_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x3_g1

0xd1c1,	// (0x00031303) list_medium_line_x3_g2_ParamLimits

0xd1c1,	// (0x00031303) list_medium_line_x3_g2

0x0001,

0xfc99,	// (0x00033ddb) list_medium_line_x3_g_ParamLimits

0xfc99,	// (0x00033ddb) list_medium_line_x3_g

0xe6a5,	// (0x000327e7) list_medium_line_x3_t1_ParamLimits

0xe6a5,	// (0x000327e7) list_medium_line_x3_t1

0xe6b9,	// (0x000327fb) thumb_sp_fs_scroll_pane_g1

0xe6c2,	// (0x00032804) thumb_sp_fs_scroll_pane_g2

0xe6cb,	// (0x0003280d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x00033de0) thumb_sp_fs_scroll_pane_g

0xe6b9,	// (0x000327fb) bg_sp_fs_scroll_pane_g1

0xe6c2,	// (0x00032804) bg_sp_fs_scroll_pane_g2

0xe6cb,	// (0x0003280d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x00033de0) bg_sp_fs_scroll_pane_g

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g4_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g4_g1

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g4_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g4_g2

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g4_g3_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g4_g3

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00033348) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00033348) list_medium_line_x2_t3_g4_g

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g4_t1

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g4_t2

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0003333c) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0003333c) list_medium_line_x2_t3_g4_t

0x337b,	// (0x000274bd) list_medium_line_g2_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_g2_g1

0x337b,	// (0x000274bd) list_medium_line_g2_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00033343) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00033343) list_medium_line_g2_g

0x3c82,	// (0x00027dc4) list_medium_line_g2_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_g2_t1

0x337b,	// (0x000274bd) list_medium_line_t3_g2_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t3_g2_g1

0x337b,	// (0x000274bd) list_medium_line_t3_g2_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00033343) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00033343) list_medium_line_t3_g2_g

0x3c82,	// (0x00027dc4) list_medium_line_t3_g2_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t3_g2_t1

0x3c82,	// (0x00027dc4) list_medium_line_t3_g2_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t3_g2_t2

0x3c82,	// (0x00027dc4) list_medium_line_t3_g2_t3_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0003333c) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0003333c) list_medium_line_t3_g2_t

0x3e06,	// (0x00027f48) list_medium_line_right_icon_g1

0x521b,	// (0x0002935d) list_medium_line_right_icon_t1

0x337b,	// (0x000274bd) list_medium_line_t2_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t2_g1

0x3c82,	// (0x00027dc4) list_medium_line_t2_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t2_t1

0x3c82,	// (0x00027dc4) list_medium_line_t2_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x00033318) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x00033318) list_medium_line_t2_t

0x337b,	// (0x000274bd) list_medium_line_t3_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t3_g1

0x3c82,	// (0x00027dc4) list_medium_line_t3_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t3_t1

0x3c82,	// (0x00027dc4) list_medium_line_t3_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t3_t2

0x3c82,	// (0x00027dc4) list_medium_line_t3_t3_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0003333c) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0003333c) list_medium_line_t3_t

0x337b,	// (0x000274bd) list_medium_line_g3_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_g3_g1

0x337b,	// (0x000274bd) list_medium_line_g3_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_g3_g2

0x337b,	// (0x000274bd) list_medium_line_g3_g3_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00033335) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00033335) list_medium_line_g3_g

0x3c82,	// (0x00027dc4) list_medium_line_g3_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_g3_t1

0x337b,	// (0x000274bd) list_medium_line_t2_g3_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t2_g3_g1

0x337b,	// (0x000274bd) list_medium_line_t2_g3_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t2_g3_g2

0x337b,	// (0x000274bd) list_medium_line_t2_g3_g3_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00033335) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00033335) list_medium_line_t2_g3_g

0x3c82,	// (0x00027dc4) list_medium_line_t2_g3_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t2_g3_t1

0x3c82,	// (0x00027dc4) list_medium_line_t2_g3_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x00033318) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x00033318) list_medium_line_t2_g3_t

0x337b,	// (0x000274bd) list_medium_line_t3_g3_g1_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t3_g3_g1

0x337b,	// (0x000274bd) list_medium_line_t3_g3_g2_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t3_g3_g2

0x337b,	// (0x000274bd) list_medium_line_t3_g3_g3_ParamLimits

0x337b,	// (0x000274bd) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00033335) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00033335) list_medium_line_t3_g3_g

0x3c82,	// (0x00027dc4) list_medium_line_t3_g3_t1_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t3_g3_t1

0x3c82,	// (0x00027dc4) list_medium_line_t3_g3_t2_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t3_g3_t2

0x3c82,	// (0x00027dc4) list_medium_line_t3_g3_t3_ParamLimits

0x3c82,	// (0x00027dc4) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0003333c) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0003333c) list_medium_line_t3_g3_t

0x3e06,	// (0x00027f48) list_medium_line_right_iconx2_g1

0x3e06,	// (0x00027f48) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0003351a) list_medium_line_right_iconx2_g

0x521b,	// (0x0002935d) list_medium_line_right_iconx2_t1

0x3e06,	// (0x00027f48) list_medium_line_t2_right_iconx2_g1

0x3e06,	// (0x00027f48) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0003351a) list_medium_line_t2_right_iconx2_g

0x521b,	// (0x0002935d) list_medium_line_t2_right_iconx2_t1

0x521b,	// (0x0002935d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x00033dad) list_medium_line_t2_right_iconx2_t

0x521b,	// (0x0002935d) list_medium_line_x4_t4_t1

0x521b,	// (0x0002935d) list_medium_line_x4_t4_t2

0x521b,	// (0x0002935d) list_medium_line_x4_t4_t3

0x521b,	// (0x0002935d) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x00033405) list_medium_line_x4_t4_t

0x9cda,	// (0x0002de1c) tport_appsw_pane_ParamLimits

0x9cda,	// (0x0002de1c) tport_appsw_pane

0x9cf2,	// (0x0002de34) tport_contact_pane_ParamLimits

0x9cf2,	// (0x0002de34) tport_contact_pane

0x9d0a,	// (0x0002de4c) tport_listscroll_pane_ParamLimits

0x9d0a,	// (0x0002de4c) tport_listscroll_pane

0x9d24,	// (0x0002de66) cell_tport_appsw_pane_ParamLimits

0x9d24,	// (0x0002de66) cell_tport_appsw_pane

0x5a7b,	// (0x00029bbd) tport_appsw_pane_g1_ParamLimits

0x5a7b,	// (0x00029bbd) tport_appsw_pane_g1

0xe6d4,	// (0x00032816) tport_contact_pane_g1

0xe6dd,	// (0x0003281f) tport_contact_pane_t1

0xe6eb,	// (0x0003282d) tport_contact_pane_t2

0x0001,

0xfca5,	// (0x00033de7) tport_contact_pane_t

0xe6f9,	// (0x0003283b) list_tport_pane

0xe702,	// (0x00032844) scroll_pane_cp_030

0x9d6c,	// (0x0002deae) cell_tport_appsw_pane_g1

0x9d7c,	// (0x0002debe) cell_tport_appsw_pane_t1

0x9d8a,	// (0x0002decc) grid_highlight_pane_cp019

0x9d92,	// (0x0002ded4) list_tport_double_graphic_pane_ParamLimits

0x9d92,	// (0x0002ded4) list_tport_double_graphic_pane

0x3314,	// (0x00027456) list_highlight_pane_cp023_ParamLimits

0x3314,	// (0x00027456) list_highlight_pane_cp023

0x9d9f,	// (0x0002dee1) list_tport_double_graphic_pane_g1_ParamLimits

0x9d9f,	// (0x0002dee1) list_tport_double_graphic_pane_g1

0x9dac,	// (0x0002deee) list_tport_double_graphic_pane_t1_ParamLimits

0x9dac,	// (0x0002deee) list_tport_double_graphic_pane_t1

0x9dc1,	// (0x0002df03) list_tport_double_graphic_pane_t2_ParamLimits

0x9dc1,	// (0x0002df03) list_tport_double_graphic_pane_t2

0x0001,

0xfcb1,	// (0x00033df3) list_tport_double_graphic_pane_t_ParamLimits

0xfcb1,	// (0x00033df3) list_tport_double_graphic_pane_t

0x2bdc,	// (0x00026d1e) main_cale_note_pane

0x2805,	// (0x00026947) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x2805,	// (0x00026947) cell_vitu2_function_top_wide_pane_cp01

0x9521,	// (0x0002d663) wait_bar_pane_cp05_ParamLimits

0x3314,	// (0x00027456) listscroll_cmail_pane

0xe70b,	// (0x0003284d) list_cmail_pane

0x9dd3,	// (0x0002df15) list_cmail_body_pane

0x9de9,	// (0x0002df2b) list_single_cmail_header_caption_pane

0x9e00,	// (0x0002df42) list_single_cmail_header_detail_pane_ParamLimits

0x9e00,	// (0x0002df42) list_single_cmail_header_detail_pane

0xe71b,	// (0x0003285d) list_single_cmail_header_caption_pane_t1

0x9e2a,	// (0x0002df6c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9e2a,	// (0x0002df6c) list_single_cmail_header_detail_pane_g1

0xe732,	// (0x00032874) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe732,	// (0x00032874) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcb6,	// (0x00033df8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcb6,	// (0x00033df8) list_single_cmail_header_detail_pane_g

0xe74b,	// (0x0003288d) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe74b,	// (0x0003288d) list_single_cmail_header_detail_pane_t1

0xe7ab,	// (0x000328ed) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe7ab,	// (0x000328ed) list_single_cmail_header_editor_pane_bg

0xe10c,	// (0x0003224e) list_cmail_body_pane_g1

0xe7c2,	// (0x00032904) list_cmail_body_pane_t1

0xd2f4,	// (0x00031436) list_single_cmail_header_editor_pane_bg_g1

0x44cd,	// (0x0002860f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd304,	// (0x00031446) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2fc,	// (0x0003143e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd591,	// (0x000316d3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd324,	// (0x00031466) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd314,	// (0x00031456) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd31c,	// (0x0003145e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x44ad,	// (0x000285ef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9e42,	// (0x0002df84) calenote_gesture_pane_ParamLimits

0x9e42,	// (0x0002df84) calenote_gesture_pane

0x9e62,	// (0x0002dfa4) calenote_window_pane_ParamLimits

0x9e62,	// (0x0002dfa4) calenote_window_pane

0xe7d0,	// (0x00032912) popup_note_window_cp01

0x9e7e,	// (0x0002dfc0) calenote_swipe_1_pane_ParamLimits

0x9e7e,	// (0x0002dfc0) calenote_swipe_1_pane

0x995f,	// (0x0002daa1) calenote_swipe_2_pane_ParamLimits

0x995f,	// (0x0002daa1) calenote_swipe_2_pane

0xe45e,	// (0x000325a0) calenote_swipe_1_pane_g1_ParamLimits

0xe45e,	// (0x000325a0) calenote_swipe_1_pane_g1

0xe46b,	// (0x000325ad) calenote_swipe_1_pane_g2_ParamLimits

0xe46b,	// (0x000325ad) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x00033d95) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x00033d95) calenote_swipe_1_pane_g

0xe7e2,	// (0x00032924) calenote_swipe_1_pane_t1_ParamLimits

0xe7e2,	// (0x00032924) calenote_swipe_1_pane_t1

0xe45e,	// (0x000325a0) calenote_swipe_2_pane_g1_ParamLimits

0xe45e,	// (0x000325a0) calenote_swipe_2_pane_g1

0xe801,	// (0x00032943) calenote_swipe_2_pane_g2_ParamLimits

0xe801,	// (0x00032943) calenote_swipe_2_pane_g2

0x0001,

0xfcc2,	// (0x00033e04) calenote_swipe_2_pane_g_ParamLimits

0xfcc2,	// (0x00033e04) calenote_swipe_2_pane_g

0xe80d,	// (0x0003294f) calenote_swipe_2_pane_t1_ParamLimits

0xe80d,	// (0x0003294f) calenote_swipe_2_pane_t1

0x2bdc,	// (0x00026d1e) main_mup_navstr_pane

0x757d,	// (0x0002b6bf) main_mup3_pane_t7_ParamLimits

0x757d,	// (0x0002b6bf) main_mup3_pane_t7

0xceca,	// (0x0003100c) main_mp4_pane_g6_ParamLimits

0xceca,	// (0x0003100c) main_mp4_pane_g6

0xd11d,	// (0x0003125f) main_image3_pane_t4_ParamLimits

0xd11d,	// (0x0003125f) main_image3_pane_t4

0x9e93,	// (0x0002dfd5) popup_navstr_preview_pane_ParamLimits

0x9e93,	// (0x0002dfd5) popup_navstr_preview_pane

0x9ea7,	// (0x0002dfe9) scroll_navstr_pane_ParamLimits

0x9ea7,	// (0x0002dfe9) scroll_navstr_pane

0x2bdc,	// (0x00026d1e) bg_popup_preview_window_pane_cp04

0xe834,	// (0x00032976) popup_navstr_preview_pane_t1

0x9ebb,	// (0x0002dffd) scroll_navstr_pane_g1_ParamLimits

0x9ebb,	// (0x0002dffd) scroll_navstr_pane_g1

0x9ecf,	// (0x0002e011) scroll_navstr_pane_t1_ParamLimits

0x9ecf,	// (0x0002e011) scroll_navstr_pane_t1

0xe7d9,	// (0x0003291b) bg_button_pane_cp014

0xe7d9,	// (0x0003291b) bg_button_pane_cp030

0x9838,	// (0x0002d97a) list_double_fisheye_pane_g4_ParamLimits

0x9838,	// (0x0002d97a) list_double_fisheye_pane_g4

0x9844,	// (0x0002d986) list_double_fisheye_pane_g5_ParamLimits

0x9844,	// (0x0002d986) list_double_fisheye_pane_g5

0xb290,	// (0x0002f3d2) sp_fs_scroll_pane_cp03

0xe575,	// (0x000326b7) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe581,	// (0x000326c3) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x00033db2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9a4b,	// (0x0002db8d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe713,	// (0x00032855) sp_fs_scroll_pane_cp02

0x36d6,	// (0x00027818) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x36d6,	// (0x00027818) popup_sp_fs_calendar_preview_list_single_pane

0x2bdc,	// (0x00026d1e) main_cam6_pano_pane

0xb1a9,	// (0x0002f2eb) main_mup3_pane_ParamLimits

0x2bdc,	// (0x00026d1e) main_phacti_pane

0x93f4,	// (0x0002d536) bg_button_pane_cp11

0x940e,	// (0x0002d550) main_mobtv_info_pane_g2_ParamLimits

0x940e,	// (0x0002d550) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x00033d12) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x00033d12) main_mobtv_info_pane_g

0x95eb,	// (0x0002d72d) sc_clock_pane_t5_ParamLimits

0x95eb,	// (0x0002d72d) sc_clock_pane_t5

0x96b3,	// (0x0002d7f5) main_radioblah_pane_g1_ParamLimits

0xe3aa,	// (0x000324ec) main_radioblah_pane_t3_ParamLimits

0xe3aa,	// (0x000324ec) main_radioblah_pane_t3

0xe3c2,	// (0x00032504) main_radioblah_pane_t4_ParamLimits

0xe3c2,	// (0x00032504) main_radioblah_pane_t4

0x96db,	// (0x0002d81d) main_radioblah_text_pane_ParamLimits

0x96db,	// (0x0002d81d) main_radioblah_text_pane

0x96ed,	// (0x0002d82f) main_radioblah_info_pane_g1_ParamLimits

0x9786,	// (0x0002d8c8) main_radioblah_info_pane_t4_ParamLimits

0x9786,	// (0x0002d8c8) main_radioblah_info_pane_t4

0x3314,	// (0x00027456) main_sp_fs_calendar_pane

0x9ee6,	// (0x0002e028) main_phacti_pane_g1

0x9eee,	// (0x0002e030) phacti_note_pane_ParamLimits

0x9eee,	// (0x0002e030) phacti_note_pane

0xe84b,	// (0x0003298d) phacti_term_pane_ParamLimits

0xe84b,	// (0x0003298d) phacti_term_pane

0xe860,	// (0x000329a2) phacti_note_pane_t1_ParamLimits

0xe860,	// (0x000329a2) phacti_note_pane_t1

0xe877,	// (0x000329b9) phacti_term_pane_g1

0xe87f,	// (0x000329c1) phacti_term_pane_t1_ParamLimits

0xe87f,	// (0x000329c1) phacti_term_pane_t1

0xe8a9,	// (0x000329eb) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8b1,	// (0x000329f3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfccc,	// (0x00033e0e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b9,	// (0x000329fb) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b9,	// (0x000329fb) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8cf,	// (0x00032a11) aid_popup_sp_fs_bg_corner_pane

0x3e06,	// (0x00027f48) popup_sp_fs_calendar_preview_bg_pane_g1

0x2bdc,	// (0x00026d1e) popup_sp_fs_calendar_preview_bg_pane

0xe8d7,	// (0x00032a19) popup_sp_fs_calendar_preview_list_pane

0x5ab1,	// (0x00029bf3) bg_main_sp_fs_cale_pane_ParamLimits

0x5ab1,	// (0x00029bf3) bg_main_sp_fs_cale_pane

0xe8e8,	// (0x00032a2a) listscroll_cale_mrui_pane_ParamLimits

0xe8e8,	// (0x00032a2a) listscroll_cale_mrui_pane

0xe8fd,	// (0x00032a3f) listscroll_sp_fs_schedule_track_pane

0xe906,	// (0x00032a48) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe906,	// (0x00032a48) main_sp_fs_ctrlbar_pane_cp01

0xe919,	// (0x00032a5b) main_sp_fs_ribbon_pane

0xe921,	// (0x00032a63) popup_sp_fs_cale_preview_window

0x9f63,	// (0x0002e0a5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9f63,	// (0x0002e0a5) list_single_sp_fs_schedule_track_pane

0x3314,	// (0x00027456) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3314,	// (0x00027456) bg_sp_fs_highlight_list_pane_cp03

0x9f77,	// (0x0002e0b9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9f77,	// (0x0002e0b9) list_single_sp_fs_schedule_track_pane_g1

0x9f83,	// (0x0002e0c5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9f83,	// (0x0002e0c5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcd1,	// (0x00033e13) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcd1,	// (0x00033e13) list_single_sp_fs_schedule_track_pane_g

0x9f8f,	// (0x0002e0d1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9f8f,	// (0x0002e0d1) list_single_sp_fs_schedule_track_pane_t1

0x9fa9,	// (0x0002e0eb) sp_fs_schedule_track_pane_ParamLimits

0x9fa9,	// (0x0002e0eb) sp_fs_schedule_track_pane

0xe933,	// (0x00032a75) sp_fs_schedule_track_pane_g1

0xe93b,	// (0x00032a7d) sp_fs_schedule_track_pane_g2

0xe943,	// (0x00032a85) sp_fs_schedule_track_pane_g3

0xe94b,	// (0x00032a8d) sp_fs_schedule_track_pane_g4

0xe953,	// (0x00032a95) sp_fs_schedule_track_pane_g5

0x0004,

0xfcd6,	// (0x00033e18) sp_fs_schedule_track_pane_g

0xd2f4,	// (0x00031436) bg_sp_fs_schedule_viewer_highlight_g1

0x44cd,	// (0x0002860f) bg_sp_fs_schedule_viewer_highlight_g2

0xd2fc,	// (0x0003143e) bg_sp_fs_schedule_viewer_highlight_g3

0xd304,	// (0x00031446) bg_sp_fs_schedule_viewer_highlight_g4

0xd591,	// (0x000316d3) bg_sp_fs_schedule_viewer_highlight_g5

0xd314,	// (0x00031456) bg_sp_fs_schedule_viewer_highlight_g6

0xd31c,	// (0x0003145e) bg_sp_fs_schedule_viewer_highlight_g7

0xd324,	// (0x00031466) bg_sp_fs_schedule_viewer_highlight_g8

0x44ad,	// (0x000285ef) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfce1,	// (0x00033e23) bg_sp_fs_schedule_viewer_highlight_g

0x2bdc,	// (0x00026d1e) bg_main_sp_fs_ribbon_pane

0x9fba,	// (0x0002e0fc) main_sp_fs_ribbon_pane_g1

0xe95b,	// (0x00032a9d) main_sp_fs_ribbon_pane_t1

0x9fc3,	// (0x0002e105) main_sp_fs_ribbon_pane_t2

0xe96a,	// (0x00032aac) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcf4,	// (0x00033e36) main_sp_fs_ribbon_pane_t

0xe979,	// (0x00032abb) main_sp_fs_ribbon_scheduler_pane

0xe981,	// (0x00032ac3) bg_main_sp_fs_ribbon_pane_g1

0xe98a,	// (0x00032acc) bg_main_sp_fs_ribbon_pane_g2

0xe993,	// (0x00032ad5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcfb,	// (0x00033e3d) bg_main_sp_fs_ribbon_pane_g

0xe99b,	// (0x00032add) main_sp_fs_ribbon_scheduler_pane_g1

0xe9a4,	// (0x00032ae6) main_sp_fs_ribbon_scheduler_pane_g2

0xe9ad,	// (0x00032aef) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd02,	// (0x00033e44) main_sp_fs_ribbon_scheduler_pane_g

0xe9b6,	// (0x00032af8) list_cale_mrui_pane

0x9fd2,	// (0x0002e114) sp_fs_scroll_pane_cp07_ParamLimits

0x9fd2,	// (0x0002e114) sp_fs_scroll_pane_cp07

0x9fee,	// (0x0002e130) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9fee,	// (0x0002e130) bg_sp_fs_schedule_viewer_highlight

0xe9c3,	// (0x00032b05) list_single_sp_fs_schedule_track_pane_cp01

0xe9cb,	// (0x00032b0d) list_sp_fs_schedule_track_pane

0xe9d3,	// (0x00032b15) sp_fs_scroll_pane_cp06_ParamLimits

0xe9d3,	// (0x00032b15) sp_fs_scroll_pane_cp06

0x3e06,	// (0x00027f48) bgmain_sp_fs_calendar_pane_g1

0x9ffe,	// (0x0002e140) list_single_cale_mrui_pane_ParamLimits

0x9ffe,	// (0x0002e140) list_single_cale_mrui_pane

0xe9e5,	// (0x00032b27) list_single_cale_mrui_row_pane_ParamLimits

0xe9e5,	// (0x00032b27) list_single_cale_mrui_row_pane

0xe9f2,	// (0x00032b34) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe9f2,	// (0x00032b34) list_single_cale_mrui_row_pane_g1

0xea37,	// (0x00032b79) list_single_cale_mrui_row_pane_t1_ParamLimits

0xea37,	// (0x00032b79) list_single_cale_mrui_row_pane_t1

0xa01f,	// (0x0002e161) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa01f,	// (0x0002e161) list_single_cale_mrui_row_pane_t2

0xea49,	// (0x00032b8b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xea49,	// (0x00032b8b) list_single_cale_mrui_row_pane_t3

0xea78,	// (0x00032bba) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea78,	// (0x00032bba) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd10,	// (0x00033e52) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd10,	// (0x00033e52) list_single_cale_mrui_row_pane_t

0xa087,	// (0x0002e1c9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa087,	// (0x0002e1c9) list_single_cmail_header_editor_pane_bg_cp01

0xa0ad,	// (0x0002e1ef) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa0ad,	// (0x0002e1ef) list_single_cmail_header_editor_pane_bg_cp02

0xa0cd,	// (0x0002e20f) main_radioblah_text_pane_t1_ParamLimits

0xa0cd,	// (0x0002e20f) main_radioblah_text_pane_t1

0xeaa7,	// (0x00032be9) cam6_indi_pane_cp01

0xeaaf,	// (0x00032bf1) cam6_mode_pane_cp01

0xeab7,	// (0x00032bf9) cam6_pano_pane

0xeac0,	// (0x00032c02) cam6_zoom_pane_cp01

0xeac8,	// (0x00032c0a) cam6_pano_image_pane

0xead3,	// (0x00032c15) cam6_pano_pane_g1

0xe10c,	// (0x0003224e) cam6_pano_pane_g2

0xeadc,	// (0x00032c1e) cam6_pano_pane_g3

0xeae5,	// (0x00032c27) cam6_pano_pane_g4

0xcbbf,	// (0x00030d01) cam6_pano_pane_g5

0xeaee,	// (0x00032c30) cam6_pano_pane_g6

0xeaf8,	// (0x00032c3a) cam6_pano_pane_g7

0xeb00,	// (0x00032c42) cam6_pano_pane_g8

0xeb09,	// (0x00032c4b) cam6_pano_pane_g9

0x0008,

0xfd19,	// (0x00033e5b) cam6_pano_pane_g

0x2bdc,	// (0x00026d1e) main_browser_tag_pane

0xe82c,	// (0x0003296e) grid_navstr_albumart_pane

0xeb14,	// (0x00032c56) cell_navstr_albumart_pane_ParamLimits

0xeb14,	// (0x00032c56) cell_navstr_albumart_pane

0xeb34,	// (0x00032c76) cell_navstr_albumart_pane_g1

0xbf0a,	// (0x0003004c) cell_navstr_albumart_pane_g2

0xbf1a,	// (0x0003005c) cell_navstr_albumart_pane_g3

0xbf12,	// (0x00030054) cell_navstr_albumart_pane_g4

0x0003,

0xfd2c,	// (0x00033e6e) cell_navstr_albumart_pane_g

0xa0e8,	// (0x0002e22a) bt_list_pane_ParamLimits

0xa0e8,	// (0x0002e22a) bt_list_pane

0xa0fc,	// (0x0002e23e) bt_list_pane_t1

0xa10b,	// (0x0002e24d) bt_list_pane_t2

0x0001,

0xfd35,	// (0x00033e77) bt_list_pane_t

0x2bdc,	// (0x00026d1e) main_cale_prevew_pane

0xa11a,	// (0x0002e25c) popup_cale_preview_window_ParamLimits

0xa11a,	// (0x0002e25c) popup_cale_preview_window

0x3314,	// (0x00027456) bg_popup_preview_window_pane_cp05_ParamLimits

0x3314,	// (0x00027456) bg_popup_preview_window_pane_cp05

0xeb3c,	// (0x00032c7e) list_cale_preview_pane_ParamLimits

0xeb3c,	// (0x00032c7e) list_cale_preview_pane

0xa133,	// (0x0002e275) list_double_cale_preview_pane_ParamLimits

0xa133,	// (0x0002e275) list_double_cale_preview_pane

0xd32c,	// (0x0003146e) list_single_cale_preview_pane_ParamLimits

0xd32c,	// (0x0003146e) list_single_cale_preview_pane

0xa145,	// (0x0002e287) list_single_cale_preview_pane_g1

0xa14d,	// (0x0002e28f) list_single_cale_preview_pane_t1_ParamLimits

0xa14d,	// (0x0002e28f) list_single_cale_preview_pane_t1

0xa162,	// (0x0002e2a4) list_double_cale_preview_pane_g1

0xa16a,	// (0x0002e2ac) list_double_cale_preview_pane_t1_ParamLimits

0xa16a,	// (0x0002e2ac) list_double_cale_preview_pane_t1

0xa17f,	// (0x0002e2c1) list_double_cale_preview_pane_t2_ParamLimits

0xa17f,	// (0x0002e2c1) list_double_cale_preview_pane_t2

0x0001,

0xfd3a,	// (0x00033e7c) list_double_cale_preview_pane_t_ParamLimits

0xfd3a,	// (0x00033e7c) list_double_cale_preview_pane_t

0x2bdc,	// (0x00026d1e) main_ezdial_pane

0x3314,	// (0x00027456) main_sp_fs_email_pane_ParamLimits

0x99bb,	// (0x0002dafd) cmail_ddmenu_btn01_pane_ParamLimits

0x99bb,	// (0x0002dafd) cmail_ddmenu_btn01_pane

0x99ce,	// (0x0002db10) cmail_ddmenu_btn02_pane_ParamLimits

0x99ce,	// (0x0002db10) cmail_ddmenu_btn02_pane

0x99f1,	// (0x0002db33) cmail_ddmenu_btn03_pane_ParamLimits

0x99f1,	// (0x0002db33) cmail_ddmenu_btn03_pane

0x9a8a,	// (0x0002dbcc) main_sp_fs_ctrlbar_pane_ParamLimits

0x9aae,	// (0x0002dbf0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9dd3,	// (0x0002df15) list_cmail_body_pane_ParamLimits

0xe729,	// (0x0003286b) bg_button_pane_cp12

0xe73e,	// (0x00032880) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe73e,	// (0x00032880) list_single_cmail_header_detail_pane_g3

0xe787,	// (0x000328c9) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe787,	// (0x000328c9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcbd,	// (0x00033dff) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcbd,	// (0x00033dff) list_single_cmail_header_detail_pane_t

0xe894,	// (0x000329d6) phacti_term_pane_t2_ParamLimits

0xe894,	// (0x000329d6) phacti_term_pane_t2

0x0001,

0xfcc7,	// (0x00033e09) phacti_term_pane_t_ParamLimits

0xfcc7,	// (0x00033e09) phacti_term_pane_t

0xeb48,	// (0x00032c8a) aid_size_list_single_double

0xa197,	// (0x0002e2d9) popup_ezdial_listscroll_window

0xa1b3,	// (0x0002e2f5) popup_number_entry_window_cp01

0x3c19,	// (0x00027d5b) bg_popup_call_pane_cp09

0xeb54,	// (0x00032c96) ezdial_list_pane

0xeb5c,	// (0x00032c9e) scroll_pane_cp23

0x5ab1,	// (0x00029bf3) bg_button_pane_cp028_ParamLimits

0x5ab1,	// (0x00029bf3) bg_button_pane_cp028

0xa1c1,	// (0x0002e303) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa1c1,	// (0x0002e303) cmail_ddmenu_btn01_pane_g1

0xa1cd,	// (0x0002e30f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa1cd,	// (0x0002e30f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd3f,	// (0x00033e81) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd3f,	// (0x00033e81) cmail_ddmenu_btn01_pane_g

0xeb64,	// (0x00032ca6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb64,	// (0x00032ca6) cmail_ddmenu_btn01_pane_t1

0x5ab1,	// (0x00029bf3) bg_button_pane_cp029_ParamLimits

0x5ab1,	// (0x00029bf3) bg_button_pane_cp029

0xa1d9,	// (0x0002e31b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa1d9,	// (0x0002e31b) cmail_ddmenu_btn02_pane_g1

0xa1f1,	// (0x0002e333) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa1f1,	// (0x0002e333) cmail_ddmenu_btn02_pane_t1

0x3314,	// (0x00027456) bg_button_pane_cp031_ParamLimits

0x3314,	// (0x00027456) bg_button_pane_cp031

0xa1d9,	// (0x0002e31b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa1d9,	// (0x0002e31b) cmail_ddmenu_btn03_pane_g1

0xa1f1,	// (0x0002e333) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa1f1,	// (0x0002e333) cmail_ddmenu_btn03_pane_t1

0x7cc8,	// (0x0002be0a) cell_dialer2_keypad_pane_t1_ParamLimits

0x7ce2,	// (0x0002be24) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7ce2,	// (0x0002be24) cell_dialer2_keypad_pane_t1_copy1

0x9217,	// (0x0002d359) ncimui_group_button_pane

0x3314,	// (0x00027456) main_sp_fs_calendar_pane_ParamLimits

0x9de9,	// (0x0002df2b) list_single_cmail_header_caption_pane_ParamLimits

0xe8df,	// (0x00032a21) aid_recal_txt_sm_pane

0x2bdc,	// (0x00026d1e) mian_recal_day_pane

0xe921,	// (0x00032a63) popup_sp_fs_cale_preview_window_ParamLimits

0xeb79,	// (0x00032cbb) list_recal_day_pane

0xebbb,	// (0x00032cfd) list_single_recal_day_pane_ParamLimits

0xebbb,	// (0x00032cfd) list_single_recal_day_pane

0xebcd,	// (0x00032d0f) list_single_recal_day_pane_g1_ParamLimits

0xebcd,	// (0x00032d0f) list_single_recal_day_pane_g1

0xebd9,	// (0x00032d1b) list_single_recal_day_pane_g2_ParamLimits

0xebd9,	// (0x00032d1b) list_single_recal_day_pane_g2

0xebe5,	// (0x00032d27) list_single_recal_day_pane_g3_ParamLimits

0xebe5,	// (0x00032d27) list_single_recal_day_pane_g3

0xa215,	// (0x0002e357) list_single_recal_day_pane_g4_ParamLimits

0xa215,	// (0x0002e357) list_single_recal_day_pane_g4

0xebf1,	// (0x00032d33) list_single_recal_day_pane_g5_ParamLimits

0xebf1,	// (0x00032d33) list_single_recal_day_pane_g5

0xebfd,	// (0x00032d3f) list_single_recal_day_pane_g6_ParamLimits

0xebfd,	// (0x00032d3f) list_single_recal_day_pane_g6

0x0004,

0xfd4e,	// (0x00033e90) list_single_recal_day_pane_g_ParamLimits

0xfd4e,	// (0x00033e90) list_single_recal_day_pane_g

0xec11,	// (0x00032d53) list_single_recal_day_pane_t1

0xec23,	// (0x00032d65) list_single_recal_day_pane_t2

0x0001,

0xfd59,	// (0x00033e9b) list_single_recal_day_pane_t

0xa22d,	// (0x0002e36f) ncimui_query_button_pane_ParamLimits

0xa22d,	// (0x0002e36f) ncimui_query_button_pane

0xa23d,	// (0x0002e37f) ncimui_query_button_pane_t1_ParamLimits

0xa23d,	// (0x0002e37f) ncimui_query_button_pane_t1

0xec35,	// (0x00032d77) ncimui_query_button_pane_t2_ParamLimits

0xec35,	// (0x00032d77) ncimui_query_button_pane_t2

0x0001,

0xfd5e,	// (0x00033ea0) ncimui_query_button_pane_t_ParamLimits

0xfd5e,	// (0x00033ea0) ncimui_query_button_pane_t

0xa250,	// (0x0002e392) query_button_pane_ParamLimits

0xa250,	// (0x0002e392) query_button_pane

0x2bdc,	// (0x00026d1e) bg_button_pane_cp0028

0xec48,	// (0x00032d8a) query_button_pane_t1

0x1c81,	// (0x00025dc3) main_tport_pane_ParamLimits

0x9c97,	// (0x0002ddd9) bg_popup_window_pane_cp01_ParamLimits

0x9c97,	// (0x0002ddd9) bg_popup_window_pane_cp01

0x9cb2,	// (0x0002ddf4) heading_pane_cp08_ParamLimits

0x9cb2,	// (0x0002ddf4) heading_pane_cp08

0x9cc5,	// (0x0002de07) heading_pane_cp07_ParamLimits

0x9cc5,	// (0x0002de07) heading_pane_cp07

0x9d6c,	// (0x0002deae) cell_tport_appsw_pane_g2

0x0002,

0xfcaa,	// (0x00033dec) cell_tport_appsw_pane_g

0x5d3f,	// (0x00029e81) input_candi_list_open_g1

0x5049,	// (0x0002918b) list_cale_time_pane_g6_ParamLimits

0x5049,	// (0x0002918b) list_cale_time_pane_g6

0x6f8a,	// (0x0002b0cc) aid_size_touch_calib_1_ParamLimits

0x6f8a,	// (0x0002b0cc) aid_size_touch_calib_1

0x6f9c,	// (0x0002b0de) aid_size_touch_calib_2_ParamLimits

0x6f9c,	// (0x0002b0de) aid_size_touch_calib_2

0x6fb4,	// (0x0002b0f6) aid_size_touch_calib_3_ParamLimits

0x6fb4,	// (0x0002b0f6) aid_size_touch_calib_3

0x6fd2,	// (0x0002b114) aid_size_touch_calib_4_ParamLimits

0x6fd2,	// (0x0002b114) aid_size_touch_calib_4

0x6fea,	// (0x0002b12c) main_touch_calib_button_group_pane_ParamLimits

0x6fea,	// (0x0002b12c) main_touch_calib_button_group_pane

0x7002,	// (0x0002b144) main_touch_calib_pane_g1_ParamLimits

0x7014,	// (0x0002b156) main_touch_calib_pane_g2_ParamLimits

0x7026,	// (0x0002b168) main_touch_calib_pane_g3_ParamLimits

0x7038,	// (0x0002b17a) main_touch_calib_pane_g4_ParamLimits

0xf6ec,	// (0x0003382e) main_touch_calib_pane_g_ParamLimits

0x704a,	// (0x0002b18c) main_touch_calib_pane_t1_ParamLimits

0x7064,	// (0x0002b1a6) main_touch_calib_pane_t2_ParamLimits

0x707e,	// (0x0002b1c0) main_touch_calib_pane_t3_ParamLimits

0x7092,	// (0x0002b1d4) main_touch_calib_pane_t4_ParamLimits

0x70a6,	// (0x0002b1e8) main_touch_calib_pane_t5_ParamLimits

0xf6f5,	// (0x00033837) main_touch_calib_pane_t_ParamLimits

0xc985,	// (0x00030ac7) list_single_fp_cale_pane_g3_ParamLimits

0xc985,	// (0x00030ac7) list_single_fp_cale_pane_g3

0xb1a9,	// (0x0002f2eb) bg_button_pane_cp012_ParamLimits

0xb1a9,	// (0x0002f2eb) bg_vkb2_func_pane_cp03_ParamLimits

0x2a0b,	// (0x00026b4d) cell_vitu2_function_top_pane_g1_ParamLimits

0xb1a9,	// (0x0002f2eb) bg_vkb2_func_pane_cp04_ParamLimits

0x91a2,	// (0x0002d2e4) main_ncimui_button_group_pane_ParamLimits

0x91a2,	// (0x0002d2e4) main_ncimui_button_group_pane

0x9202,	// (0x0002d344) main_ncimui_pane_t3_ParamLimits

0x9202,	// (0x0002d344) main_ncimui_pane_t3

0xe842,	// (0x00032984) phacti_button_group_pane

0xeb48,	// (0x00032c8a) aid_size_list_single_double_ParamLimits

0xa197,	// (0x0002e2d9) popup_ezdial_listscroll_window_ParamLimits

0xa1b3,	// (0x0002e2f5) popup_number_entry_window_cp01_ParamLimits

0xa263,	// (0x0002e3a5) phacti_button_pane_ParamLimits

0xa263,	// (0x0002e3a5) phacti_button_pane

0x2bdc,	// (0x00026d1e) bg_button_pane_cp14

0xec56,	// (0x00032d98) phacti_button_pane_t1

0xa274,	// (0x0002e3b6) main_touch_calib_button_pane_ParamLimits

0xa274,	// (0x0002e3b6) main_touch_calib_button_pane

0x34bd,	// (0x000275ff) bg_button_pane_cp18_ParamLimits

0x34bd,	// (0x000275ff) bg_button_pane_cp18

0xec64,	// (0x00032da6) main_touch_calib_button_pane_t1_ParamLimits

0xec64,	// (0x00032da6) main_touch_calib_button_pane_t1

0xec7a,	// (0x00032dbc) main_touch_calib_button_pane_t2_ParamLimits

0xec7a,	// (0x00032dbc) main_touch_calib_button_pane_t2

0x0001,

0xfd63,	// (0x00033ea5) main_touch_calib_button_pane_t_ParamLimits

0xfd63,	// (0x00033ea5) main_touch_calib_button_pane_t

0x2bdc,	// (0x00026d1e) cell_ncimui_button_pane

0x2bdc,	// (0x00026d1e) bg_button_pane_cp032

0xec98,	// (0x00032dda) cell_ncimui_button_pane_t1

0xd0fd,	// (0x0003123f) image3_infobar_pane_ParamLimits

0xd0fd,	// (0x0003123f) image3_infobar_pane

0x9617,	// (0x0002d759) fs_bigclock_status_pane_ParamLimits

0x9617,	// (0x0002d759) fs_bigclock_status_pane

0x9624,	// (0x0002d766) main_fs_bigclock_clock_pane_ParamLimits

0x9624,	// (0x0002d766) main_fs_bigclock_clock_pane

0x9642,	// (0x0002d784) main_fs_bigclock_indi_pane_ParamLimits

0x9642,	// (0x0002d784) main_fs_bigclock_indi_pane

0x9674,	// (0x0002d7b6) main_fs_bigclock_swipe_pane_ParamLimits

0x9674,	// (0x0002d7b6) main_fs_bigclock_swipe_pane

0x2bdc,	// (0x00026d1e) main_fs_clock_dumped_data

0xe219,	// (0x0003235b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe219,	// (0x0003235b) list_single_fs_bigclock_indicator_pane_g1

0xe235,	// (0x00032377) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe235,	// (0x00032377) list_single_fs_bigclock_indicator_pane_g2

0xe24f,	// (0x00032391) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe24f,	// (0x00032391) list_single_fs_bigclock_indicator_pane_g3

0xe269,	// (0x000323ab) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe269,	// (0x000323ab) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x00033d46) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x00033d46) list_single_fs_bigclock_indicator_pane_g

0xe294,	// (0x000323d6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe294,	// (0x000323d6) list_single_fs_bigclock_indicator_pane_t1

0xe2bc,	// (0x000323fe) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe2bc,	// (0x000323fe) list_single_fs_bigclock_indicator_pane_t2

0xe2e4,	// (0x00032426) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe2e4,	// (0x00032426) list_single_fs_bigclock_indicator_pane_t3

0xe30c,	// (0x0003244e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe30c,	// (0x0003244e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x00033d51) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x00033d51) list_single_fs_bigclock_indicator_pane_t

0xeca6,	// (0x00032de8) image3_infobar_fav_pane_ParamLimits

0xeca6,	// (0x00032de8) image3_infobar_fav_pane

0xecb6,	// (0x00032df8) image3_infobar_loc_pane_ParamLimits

0xecb6,	// (0x00032df8) image3_infobar_loc_pane

0xecca,	// (0x00032e0c) image3_infobar_time_pane_ParamLimits

0xecca,	// (0x00032e0c) image3_infobar_time_pane

0x3e06,	// (0x00027f48) image3_infobar_time_pane_g1

0xecda,	// (0x00032e1c) image3_infobar_time_pane_t1

0x3e06,	// (0x00027f48) image3_infobar_loc_pane_g1

0xece8,	// (0x00032e2a) image3_infobar_loc_pane_g2

0x0001,

0xfd68,	// (0x00033eaa) image3_infobar_loc_pane_g

0xecf0,	// (0x00032e32) image3_infobar_loc_pane_t1

0x3e06,	// (0x00027f48) image3_infobar_fav_pane_g1

0xecfe,	// (0x00032e40) image3_infobar_fav_pane_g2

0x0001,

0xfd6d,	// (0x00033eaf) image3_infobar_fav_pane_g

0xed06,	// (0x00032e48) fs_bigclock_status_battery_pane

0xed0f,	// (0x00032e51) fs_bigclock_status_signal_pane

0xed18,	// (0x00032e5a) fs_bigclock_status_title_pane

0xed21,	// (0x00032e63) fs_bigclock_status_signal_pane_g1

0xed2a,	// (0x00032e6c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd72,	// (0x00033eb4) fs_bigclock_status_signal_pane_g

0xed32,	// (0x00032e74) fs_bigclock_status_battery_pane_g1

0xed3b,	// (0x00032e7d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd77,	// (0x00033eb9) fs_bigclock_status_battery_pane_g

0xed43,	// (0x00032e85) fs_bigclock_status_title_pane_t1

0xa289,	// (0x0002e3cb) main_fs_bigclock_clock_pane_g1

0xa289,	// (0x0002e3cb) main_fs_bigclock_clock_pane_g2

0xa29a,	// (0x0002e3dc) main_fs_bigclock_clock_pane_g3

0xa29a,	// (0x0002e3dc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd7c,	// (0x00033ebe) main_fs_bigclock_clock_pane_g

0xa2ad,	// (0x0002e3ef) main_fs_bigclock_clock_pane_t1

0xa2c3,	// (0x0002e405) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd85,	// (0x00033ec7) main_fs_bigclock_clock_pane_t

0xed51,	// (0x00032e93) list_single_fs_bigclock_indicator_pane_ParamLimits

0xed51,	// (0x00032e93) list_single_fs_bigclock_indicator_pane

0xed62,	// (0x00032ea4) list_single_fs_bigclock_pane_ParamLimits

0xed62,	// (0x00032ea4) list_single_fs_bigclock_pane

0xed88,	// (0x00032eca) main_fs_bigclock_indicator_pane_t1

0xed97,	// (0x00032ed9) list_single_fs_bigclock_pane_g1

0xed9f,	// (0x00032ee1) list_single_fs_bigclock_pane_t1

0x3e06,	// (0x00027f48) main_fs_bigclock_swipe_pane_g1

0xede2,	// (0x00032f24) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd96,	// (0x00033ed8) main_fs_bigclock_swipe_pane_g

0xedea,	// (0x00032f2c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xedea,	// (0x00032f2c) main_fs_bigclock_swipe_pane_t1

0x5339,	// (0x0002947b) call_type_pane_ParamLimits

0x2bdc,	// (0x00026d1e) main_btmg_pane

0xea1e,	// (0x00032b60) list_single_cale_mrui_row_pane_g2_ParamLimits

0xea1e,	// (0x00032b60) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd09,	// (0x00033e4b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd09,	// (0x00033e4b) list_single_cale_mrui_row_pane_g

0xeba2,	// (0x00032ce4) list_recal_vselct_arw_lo_pane

0xebaa,	// (0x00032cec) list_recal_vselct_arw_up_pane

0xebb2,	// (0x00032cf4) list_recal_vselct_pane

0xa31d,	// (0x0002e45f) btmg_button_pane

0xa327,	// (0x0002e469) main_btmg_pane_g1

0x2bdc,	// (0x00026d1e) bg_button_pane_cp044

0xee07,	// (0x00032f49) btmg_button_pane_t1

0xc09a,	// (0x000301dc) aid_listscroll_gen

0x3314,	// (0x00027456) main_cntbar_detail_pane

0xe70b,	// (0x0003284d) list_cmail_folder_pane

0xb290,	// (0x0002f3d2) sp_fs_scroll_pane_cp03_ParamLimits

0xa331,	// (0x0002e473) list_single_fs_dyc_pane_cp01_ParamLimits

0xa331,	// (0x0002e473) list_single_fs_dyc_pane_cp01

0xee15,	// (0x00032f57) aid_size_cmail_indent

0xee1e,	// (0x00032f60) list_single_dyc_row_pane_cp01

0xa37a,	// (0x0002e4bc) cntbar_detail_list_pane_ParamLimits

0xa37a,	// (0x0002e4bc) cntbar_detail_list_pane

0xa3c6,	// (0x0002e508) main_cntbar_detail_cont_pane_ParamLimits

0xa3c6,	// (0x0002e508) main_cntbar_detail_cont_pane

0xb290,	// (0x0002f3d2) scroll_pane_cp032_ParamLimits

0xb290,	// (0x0002f3d2) scroll_pane_cp032

0xa3da,	// (0x0002e51c) cntbar_detail_list_event_pane_ParamLimits

0xa3da,	// (0x0002e51c) cntbar_detail_list_event_pane

0xa38a,	// (0x0002e4cc) cntbar_detail_list_shct_pane

0x4523,	// (0x00028665) aid_list_gen

0xee27,	// (0x00032f69) aid_scroll

0xee30,	// (0x00032f72) aid_size_touch_scroll_bar

0xa3ea,	// (0x0002e52c) aid_list_double

0xa3f3,	// (0x0002e535) aid_list_single

0xa3ea,	// (0x0002e52c) aid_list_single_lg

0xa3fc,	// (0x0002e53e) aid_list_z_g_a_sm

0xa404,	// (0x0002e546) aid_list_z_g_d

0xa40c,	// (0x0002e54e) aid_txt_z_prm

0xa41a,	// (0x0002e55c) aid_txt_z_prm_cp01

0xa428,	// (0x0002e56a) aid_txt_z_sec

0xa436,	// (0x0002e578) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa436,	// (0x0002e578) main_cntbar_detail_cont_pane_g1

0xa44a,	// (0x0002e58c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa44a,	// (0x0002e58c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd9b,	// (0x00033edd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd9b,	// (0x00033edd) main_cntbar_detail_cont_pane_g

0xee39,	// (0x00032f7b) main_cntbar_detail_cont_pane_t1

0xee47,	// (0x00032f89) main_cntbar_detail_cont_pane_t2

0xee55,	// (0x00032f97) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda0,	// (0x00033ee2) main_cntbar_detail_cont_pane_t

0xa45a,	// (0x0002e59c) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa45a,	// (0x0002e59c) cell_cntbar_detail_list_shct_pane

0xee63,	// (0x00032fa5) cntbar_detail_list_shct_pane_g1

0xee6c,	// (0x00032fae) cntbar_detail_list_shct_pane_g2

0x0001,

0xfda7,	// (0x00033ee9) cntbar_detail_list_shct_pane_g

0xa46e,	// (0x0002e5b0) cntbar_detail_list_event_pane_g1_ParamLimits

0xa46e,	// (0x0002e5b0) cntbar_detail_list_event_pane_g1

0xa47a,	// (0x0002e5bc) cntbar_detail_list_event_pane_g2_ParamLimits

0xa47a,	// (0x0002e5bc) cntbar_detail_list_event_pane_g2

0x0005,

0xfdac,	// (0x00033eee) cntbar_detail_list_event_pane_g_ParamLimits

0xfdac,	// (0x00033eee) cntbar_detail_list_event_pane_g

0xa4e6,	// (0x0002e628) cntbar_detail_list_event_pane_t1_ParamLimits

0xa4e6,	// (0x0002e628) cntbar_detail_list_event_pane_t1

0xa4fb,	// (0x0002e63d) cntbar_detail_list_event_pane_t2_ParamLimits

0xa4fb,	// (0x0002e63d) cntbar_detail_list_event_pane_t2

0x0002,

0xfdb9,	// (0x00033efb) cntbar_detail_list_event_pane_t_ParamLimits

0xfdb9,	// (0x00033efb) cntbar_detail_list_event_pane_t

0x3e06,	// (0x00027f48) cell_cntbar_detail_list_shct_pane_g1

0x5928,	// (0x00029a6a) navi_pane_mv_g3

0x3314,	// (0x00027456) main_cntbar_detail_pane_ParamLimits

0x2bdc,	// (0x00026d1e) main_notif_wgt_pane

0xce58,	// (0x00030f9a) aid_tch_main_mp4_pane_g4

0xd08a,	// (0x000311cc) popup_slider_window_cp02

0xeb98,	// (0x00032cda) list_recal_day_event_pane

0xa348,	// (0x0002e48a) cntbar_detail_btn_pane_ParamLimits

0xa348,	// (0x0002e48a) cntbar_detail_btn_pane

0xa361,	// (0x0002e4a3) cntbar_detail_btn_pane_cp01_ParamLimits

0xa361,	// (0x0002e4a3) cntbar_detail_btn_pane_cp01

0xa38a,	// (0x0002e4cc) cntbar_detail_list_shct_pane_ParamLimits

0xa39a,	// (0x0002e4dc) cntbar_detail_pane_g1_ParamLimits

0xa39a,	// (0x0002e4dc) cntbar_detail_pane_g1

0xa3aa,	// (0x0002e4ec) cntbar_detail_pane_t1_ParamLimits

0xa3aa,	// (0x0002e4ec) cntbar_detail_pane_t1

0xa486,	// (0x0002e5c8) cntbar_detail_list_event_pane_g3_ParamLimits

0xa486,	// (0x0002e5c8) cntbar_detail_list_event_pane_g3

0xa49e,	// (0x0002e5e0) cntbar_detail_list_event_pane_g4_ParamLimits

0xa49e,	// (0x0002e5e0) cntbar_detail_list_event_pane_g4

0xa4b6,	// (0x0002e5f8) cntbar_detail_list_event_pane_g5_ParamLimits

0xa4b6,	// (0x0002e5f8) cntbar_detail_list_event_pane_g5

0xa4ce,	// (0x0002e610) cntbar_detail_list_event_pane_g6_ParamLimits

0xa4ce,	// (0x0002e610) cntbar_detail_list_event_pane_g6

0xa510,	// (0x0002e652) cntbar_detail_list_event_pane_t3_ParamLimits

0xa510,	// (0x0002e652) cntbar_detail_list_event_pane_t3

0xa522,	// (0x0002e664) popup_notif_wgt_window_ParamLimits

0xa522,	// (0x0002e664) popup_notif_wgt_window

0xa53b,	// (0x0002e67d) popup_submenu_window_cp01_ParamLimits

0xa53b,	// (0x0002e67d) popup_submenu_window_cp01

0x3c19,	// (0x00027d5b) bg_popup_window_pane_cp10

0xee75,	// (0x00032fb7) listscroll_notif_wgt_pane

0xee87,	// (0x00032fc9) list_notif_wgt_window

0xee90,	// (0x00032fd2) scroll_pane_cp033

0xa54d,	// (0x0002e68f) list_notif_wgt_row_pane_ParamLimits

0xa54d,	// (0x0002e68f) list_notif_wgt_row_pane

0xee99,	// (0x00032fdb) aid_size_list_notif_wgt_del

0xeea6,	// (0x00032fe8) list_notif_wgt_row_pane_g1

0xeeb2,	// (0x00032ff4) list_notif_wgt_row_pane_g2

0xeec1,	// (0x00033003) list_notif_wgt_row_pane_g3

0x0002,

0xfdc0,	// (0x00033f02) list_notif_wgt_row_pane_g

0xeece,	// (0x00033010) list_notif_wgt_row_pane_t1

0xeee4,	// (0x00033026) list_notif_wgt_row_pane_t2

0xeef6,	// (0x00033038) list_notif_wgt_row_pane_t3

0x0002,

0xfdc7,	// (0x00033f09) list_notif_wgt_row_pane_t

0xd5cb,	// (0x0003170d) list_recal_day_event_pane_g1

0xef08,	// (0x0003304a) list_recal_day_event_pane_t1

0x2bdc,	// (0x00026d1e) bg_button_pane_cp045

0xa55d,	// (0x0002e69f) cntbar_detail_btn_pane_t1

0x5ab1,	// (0x00029bf3) main_callh_pane_ParamLimits

0x5ab1,	// (0x00029bf3) main_callh_pane

0x2bdc,	// (0x00026d1e) main_coverflow0_pane

0x2bdc,	// (0x00026d1e) main_wgtman_pane

0x968c,	// (0x0002d7ce) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x968c,	// (0x0002d7ce) main_fs_bigclock_unlock_btn_pane

0x9d64,	// (0x0002dea6) bg_button_pane_cp16

0x9d74,	// (0x0002deb6) cell_tport_appsw_pane_g3

0xa56b,	// (0x0002e6ad) cf0_flow_pane_ParamLimits

0xa56b,	// (0x0002e6ad) cf0_flow_pane

0xef17,	// (0x00033059) listscroll_cf0_pane

0xef22,	// (0x00033064) main_cf0_pane_g1

0xa580,	// (0x0002e6c2) main_cf0_pane_t1_ParamLimits

0xa580,	// (0x0002e6c2) main_cf0_pane_t1

0xa597,	// (0x0002e6d9) main_cf0_pane_t2_ParamLimits

0xa597,	// (0x0002e6d9) main_cf0_pane_t2

0x0001,

0xfdd3,	// (0x00033f15) main_cf0_pane_t_ParamLimits

0xfdd3,	// (0x00033f15) main_cf0_pane_t

0xef34,	// (0x00033076) scroll_pane_cp11

0xa5ae,	// (0x0002e6f0) cf0_flow_pane_g1

0xa5b6,	// (0x0002e6f8) cf0_flow_pane_g2

0x0001,

0xfdd8,	// (0x00033f1a) cf0_flow_pane_g

0xa5be,	// (0x0002e700) cf0_flow_pane_t1

0x2bdc,	// (0x00026d1e) main_call6_pane

0x2bdc,	// (0x00026d1e) main_calllock_pane

0x2b38,	// (0x00026c7a) call6_btn_grp_pane_ParamLimits

0x2b38,	// (0x00026c7a) call6_btn_grp_pane

0x2b52,	// (0x00026c94) call6_pane_g1_ParamLimits

0x2b52,	// (0x00026c94) call6_pane_g1

0x2b68,	// (0x00026caa) popup_call6_1st_window_ParamLimits

0x2b68,	// (0x00026caa) popup_call6_1st_window

0x2b79,	// (0x00026cbb) popup_call6_2nd_window_ParamLimits

0x2b79,	// (0x00026cbb) popup_call6_2nd_window

0x2b8a,	// (0x00026ccc) cell_call6_btn_pane_ParamLimits

0x2b8a,	// (0x00026ccc) cell_call6_btn_pane

0x3c19,	// (0x00027d5b) bg_popup_call2_in_pane_cp03

0xef3f,	// (0x00033081) popup_call6_1st_window_g1

0xef47,	// (0x00033089) popup_call6_1st_window_g2

0xef4f,	// (0x00033091) popup_call6_1st_window_g3

0x0002,

0xfddd,	// (0x00033f1f) popup_call6_1st_window_g

0xef57,	// (0x00033099) popup_call6_1st_window_t1

0xef66,	// (0x000330a8) popup_call6_1st_window_t2

0xef74,	// (0x000330b6) popup_call6_1st_window_t3

0x0002,

0xfde4,	// (0x00033f26) popup_call6_1st_window_t

0x3c19,	// (0x00027d5b) bg_popup_call2_in_pane_cp04

0xef82,	// (0x000330c4) popup_call6_2nd_window_g1

0xef8a,	// (0x000330cc) popup_call6_2nd_window_g2

0xef92,	// (0x000330d4) popup_call6_2nd_window_g3

0x0002,

0xfdeb,	// (0x00033f2d) popup_call6_2nd_window_g

0xef9a,	// (0x000330dc) popup_call6_2nd_window_t1

0xb1b7,	// (0x0002f2f9) bg_button_pane_cp15

0xefa9,	// (0x000330eb) cell_call6_btn_pane_g1

0xefb2,	// (0x000330f4) cell_call6_btn_pane_t1

0xa5cc,	// (0x0002e70e) listscroll_wgtman_pane_ParamLimits

0xa5cc,	// (0x0002e70e) listscroll_wgtman_pane

0xa5ed,	// (0x0002e72f) wgtman_btn_pane_ParamLimits

0xa5ed,	// (0x0002e72f) wgtman_btn_pane

0x5563,	// (0x000296a5) aid_scroll_copy1

0xefc1,	// (0x00033103) list_wgtman_pane

0xa630,	// (0x0002e772) wgtman_btn_pane_g1_ParamLimits

0xa630,	// (0x0002e772) wgtman_btn_pane_g1

0xa65c,	// (0x0002e79e) wgtman_btn_pane_t1_ParamLimits

0xa65c,	// (0x0002e79e) wgtman_btn_pane_t1

0xefcb,	// (0x0003310d) wgtman_btn_pane_t2_ParamLimits

0xefcb,	// (0x0003310d) wgtman_btn_pane_t2

0x0001,

0xfdf2,	// (0x00033f34) wgtman_btn_pane_t_ParamLimits

0xfdf2,	// (0x00033f34) wgtman_btn_pane_t

0xa699,	// (0x0002e7db) listrow_wgtman_pane_ParamLimits

0xa699,	// (0x0002e7db) listrow_wgtman_pane

0xa6ac,	// (0x0002e7ee) listrow_wgtman_pane_g1

0xa6b9,	// (0x0002e7fb) listrow_wgtman_pane_g2

0x0001,

0xfdf7,	// (0x00033f39) listrow_wgtman_pane_g

0xa6d7,	// (0x0002e819) listrow_wgtman_pane_t1

0xa6ef,	// (0x0002e831) listrow_wgtman_pane_t2

0x0001,

0xfdfc,	// (0x00033f3e) listrow_wgtman_pane_t

0xa715,	// (0x0002e857) wait_bar_pane_cp09

0xefe2,	// (0x00033124) main_calllock_btn_pane

0xefec,	// (0x0003312e) main_calllock_pane_g1

0x2bdc,	// (0x00026d1e) bg_button_pane_cp17

0xeff4,	// (0x00033136) main_calllock_btn_pane_g1

0xeffd,	// (0x0003313f) main_calllock_btn_pane_t1

0x2bdc,	// (0x00026d1e) main_dialer3_pane

0x2bdc,	// (0x00026d1e) main_fmrd2_pane

0x3e06,	// (0x00027f48) main_fs_bigclock_unlock_btn_pane_g1

0xa72f,	// (0x0002e871) main_fs_bigclock_unlock_btn_pane_t1

0xa73d,	// (0x0002e87f) area_fmrd2_info_pane_ParamLimits

0xa73d,	// (0x0002e87f) area_fmrd2_info_pane

0xa74e,	// (0x0002e890) area_fmrd2_visual_pane_ParamLimits

0xa74e,	// (0x0002e890) area_fmrd2_visual_pane

0xa75c,	// (0x0002e89e) fmrd2_indi_pane_ParamLimits

0xa75c,	// (0x0002e89e) fmrd2_indi_pane

0xa769,	// (0x0002e8ab) area_fmrd2_visual_pane_g1

0xa771,	// (0x0002e8b3) area_fmrd2_visual_pane_t1

0xa781,	// (0x0002e8c3) area_fmrd2_visual_pane_t2

0xa791,	// (0x0002e8d3) area_fmrd2_visual_pane_t3

0x0002,

0xfe06,	// (0x00033f48) area_fmrd2_visual_pane_t

0xa7a1,	// (0x0002e8e3) area_fmrd2_info_pane_g1

0xa7a9,	// (0x0002e8eb) area_fmrd2_info_pane_t1

0xa7b9,	// (0x0002e8fb) area_fmrd2_info_pane_t2

0xa7c9,	// (0x0002e90b) area_fmrd2_info_pane_t3

0xa7d9,	// (0x0002e91b) area_fmrd2_info_pane_t4

0x0003,

0xfe0d,	// (0x00033f4f) area_fmrd2_info_pane_t

0xa7e7,	// (0x0002e929) fmrd2_indi_pane_t1

0xa7f7,	// (0x0002e939) fmrd2_indi_pane_t2

0xa807,	// (0x0002e949) fmrd2_indi_pane_t3

0x0002,

0xfe16,	// (0x00033f58) fmrd2_indi_pane_t

0xe278,	// (0x000323ba) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe278,	// (0x000323ba) list_single_fs_bigclock_indicator_pane_g5

0xe329,	// (0x0003246b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe329,	// (0x0003246b) list_single_fs_bigclock_indicator_pane_t5

0x9f02,	// (0x0002e044) aid_cell_bcale_month_pane_ParamLimits

0x9f02,	// (0x0002e044) aid_cell_bcale_month_pane

0x9f20,	// (0x0002e062) bcale_month_pane_ParamLimits

0x9f20,	// (0x0002e062) bcale_month_pane

0x9f44,	// (0x0002e086) bcale_preview_pane_ParamLimits

0x9f44,	// (0x0002e086) bcale_preview_pane

0xed9f,	// (0x00032ee1) list_single_fs_bigclock_pane_t1_ParamLimits

0xedbe,	// (0x00032f00) list_single_fs_bigclock_pane_t2_ParamLimits

0xedbe,	// (0x00032f00) list_single_fs_bigclock_pane_t2

0x0001,

0xfd91,	// (0x00033ed3) list_single_fs_bigclock_pane_t_ParamLimits

0xfd91,	// (0x00033ed3) list_single_fs_bigclock_pane_t

0xa727,	// (0x0002e869) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe01,	// (0x00033f43) main_fs_bigclock_unlock_btn_pane_g

0xa817,	// (0x0002e959) aid_dia3_key_size_ParamLimits

0xa817,	// (0x0002e959) aid_dia3_key_size

0xa826,	// (0x0002e968) aid_dia3_listrow_size_ParamLimits

0xa826,	// (0x0002e968) aid_dia3_listrow_size

0xa83b,	// (0x0002e97d) dia3_keypad_fun_pane_ParamLimits

0xa83b,	// (0x0002e97d) dia3_keypad_fun_pane

0xa857,	// (0x0002e999) dia3_keypad_num_pane_ParamLimits

0xa857,	// (0x0002e999) dia3_keypad_num_pane

0xa872,	// (0x0002e9b4) dia3_listscroll_pane_ParamLimits

0xa872,	// (0x0002e9b4) dia3_listscroll_pane

0xa885,	// (0x0002e9c7) dia3_numentry_pane_ParamLimits

0xa885,	// (0x0002e9c7) dia3_numentry_pane

0xf00c,	// (0x0003314e) dia3_list_pane

0xf017,	// (0x00033159) scroll_pane_cp12

0x2bdc,	// (0x00026d1e) bg_dia3_numentry_pane

0xa89d,	// (0x0002e9df) dia3_numentry_pane_t1

0xa8ac,	// (0x0002e9ee) cell_dia3_key_num_pane

0xa8b4,	// (0x0002e9f6) cell_dia3_key0_fun_pane_ParamLimits

0xa8b4,	// (0x0002e9f6) cell_dia3_key0_fun_pane

0xa8c8,	// (0x0002ea0a) cell_dia3_key1_fun_pane_ParamLimits

0xa8c8,	// (0x0002ea0a) cell_dia3_key1_fun_pane

0xa8e0,	// (0x0002ea22) dia3_listrow_pane

0xdfcb,	// (0x0003210d) bg_dia3_numentry_pane_g1

0x2bdc,	// (0x00026d1e) bg_button_pane_cp21

0xf022,	// (0x00033164) cell_dia3_key_num_pane_t1

0xf030,	// (0x00033172) cell_dia3_key_num_pane_t2

0xf03f,	// (0x00033181) cell_dia3_key_num_pane_t3

0xf04e,	// (0x00033190) cell_dia3_key_num_pane_t4

0x0003,

0xfe1d,	// (0x00033f5f) cell_dia3_key_num_pane_t

0x2bdc,	// (0x00026d1e) bg_button_pane_cp19

0xa8f2,	// (0x0002ea34) cell_dia3_key0_fun_pane_g1

0x2bdc,	// (0x00026d1e) bg_button_pane_cp20

0xa8fa,	// (0x0002ea3c) cell_dia3_key1_fun_pane_g1

0xa902,	// (0x0002ea44) area_left_week_number_pane

0xa90e,	// (0x0002ea50) area_top_day_name_pane

0xa921,	// (0x0002ea63) frame_month_view_pane

0xf05d,	// (0x0003319f) grid_month_view_pane

0xa934,	// (0x0002ea76) cell_top_day_name_pane_ParamLimits

0xa934,	// (0x0002ea76) cell_top_day_name_pane

0xa961,	// (0x0002eaa3) cell_area_left_week_number_pane_ParamLimits

0xa961,	// (0x0002eaa3) cell_area_left_week_number_pane

0xa975,	// (0x0002eab7) cell_month_view_pane_ParamLimits

0xa975,	// (0x0002eab7) cell_month_view_pane

0xf06b,	// (0x000331ad) frm_month_g1

0xa9a2,	// (0x0002eae4) frm_month_g2

0xa9b5,	// (0x0002eaf7) frm_month_g3

0xa9c8,	// (0x0002eb0a) frm_month_g4

0xa9db,	// (0x0002eb1d) frm_month_g5

0xa9ee,	// (0x0002eb30) frm_month_g6

0xaa01,	// (0x0002eb43) frm_month_g7

0xf078,	// (0x000331ba) frm_month_g8

0xaa14,	// (0x0002eb56) frm_month_g9

0xaa24,	// (0x0002eb66) frm_month_g10

0xaa34,	// (0x0002eb76) frm_month_g11

0xaa44,	// (0x0002eb86) frm_month_g12

0xaa56,	// (0x0002eb98) frm_month_g13

0xaa68,	// (0x0002ebaa) frm_month_g14

0xaa7c,	// (0x0002ebbe) frm_month_g15

0xaa90,	// (0x0002ebd2) frm_month_g16

0x000f,

0xfe26,	// (0x00033f68) frm_month_g

0x0068,	// (0x000241aa) cell_top_day_name_pane_t1

0xaaa4,	// (0x0002ebe6) cell_area_left_week_number_pane_g1

0xaab0,	// (0x0002ebf2) cell_area_left_week_number_pane_t1

0x337b,	// (0x000274bd) cell_month_view_pane_g1

0xaac3,	// (0x0002ec05) cell_month_view_pane_t1

0x2bdc,	// (0x00026d1e) main_fps_pane

0xe53d,	// (0x0003267f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe53d,	// (0x0003267f) cmail_ddmenu_btn02_pane_cp1

0xe559,	// (0x0003269b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe559,	// (0x0003269b) cmail_ddmenu_btn02_pane_cp2

0xa1e5,	// (0x0002e327) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa1e5,	// (0x0002e327) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd44,	// (0x00033e86) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd44,	// (0x00033e86) cmail_ddmenu_btn02_pane_g

0xa203,	// (0x0002e345) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa203,	// (0x0002e345) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd49,	// (0x00033e8b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd49,	// (0x00033e8b) cmail_ddmenu_btn02_pane_t

0xaad6,	// (0x0002ec18) fps_text_pane_ParamLimits

0xaad6,	// (0x0002ec18) fps_text_pane

0xaaed,	// (0x0002ec2f) main_fps_pane_g1_ParamLimits

0xaaed,	// (0x0002ec2f) main_fps_pane_g1

0xab07,	// (0x0002ec49) wait_bar_pane_cp010_ParamLimits

0xab07,	// (0x0002ec49) wait_bar_pane_cp010

0xab18,	// (0x0002ec5a) fps_text_pane_t1_ParamLimits

0xab18,	// (0x0002ec5a) fps_text_pane_t1

0x03a3,	// (0x000244e5) cam4_image_uncrop_pane_g1

0x03ac,	// (0x000244ee) cam4_image_uncrop_pane_g2

0x7dd2,	// (0x0002bf14) cam4_image_uncrop_pane_g3

0x7ddb,	// (0x0002bf1d) cam4_image_uncrop_pane_g4

0x0003,

0xf888,	// (0x000339ca) cam4_image_uncrop_pane_g

0xa8e0,	// (0x0002ea22) dia3_listrow_pane_ParamLimits

0x2bdc,	// (0x00026d1e) main_phob2_pane

0x9d35,	// (0x0002de77) cell_tport_appsw_pane_cp02_ParamLimits

0x9d35,	// (0x0002de77) cell_tport_appsw_pane_cp02

0x9d49,	// (0x0002de8b) cell_tport_appsw_pane_cp03_ParamLimits

0x9d49,	// (0x0002de8b) cell_tport_appsw_pane_cp03

0x2bdc,	// (0x00026d1e) phob2_contact_card_pane

0x2bdc,	// (0x00026d1e) phob2_listscroll_pane

0x00f6,	// (0x00024238) phob2_list_pane

0x00fe,	// (0x00024240) scroll_pane_cp034

0xab30,	// (0x0002ec72) phob2_cc_data_pane_ParamLimits

0xab30,	// (0x0002ec72) phob2_cc_data_pane

0xab4f,	// (0x0002ec91) phob2_cc_listscroll_pane_ParamLimits

0xab4f,	// (0x0002ec91) phob2_cc_listscroll_pane

0xa699,	// (0x0002e7db) list_double_large_graphic_phob2_pane_ParamLimits

0xa699,	// (0x0002e7db) list_double_large_graphic_phob2_pane

0xab6d,	// (0x0002ecaf) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xab6d,	// (0x0002ecaf) list_double_large_graphic_phob2_pane_g1

0xab7a,	// (0x0002ecbc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xab7a,	// (0x0002ecbc) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe47,	// (0x00033f89) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe47,	// (0x00033f89) list_double_large_graphic_phob2_pane_g

0xaba0,	// (0x0002ece2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xaba0,	// (0x0002ece2) list_double_large_graphic_phob2_pane_t1

0xabb5,	// (0x0002ecf7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xabb5,	// (0x0002ecf7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe50,	// (0x00033f92) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe50,	// (0x00033f92) list_double_large_graphic_phob2_pane_t

0x2bdc,	// (0x00026d1e) list_highlight_pane_cp024

0x0197,	// (0x000242d9) phob2_cc_button_pane

0xabca,	// (0x0002ed0c) phob2_cc_data_pane_g1_ParamLimits

0xabca,	// (0x0002ed0c) phob2_cc_data_pane_g1

0xabe1,	// (0x0002ed23) phob2_cc_data_pane_g2_ParamLimits

0xabe1,	// (0x0002ed23) phob2_cc_data_pane_g2

0x0001,

0xfe55,	// (0x00033f97) phob2_cc_data_pane_g_ParamLimits

0xfe55,	// (0x00033f97) phob2_cc_data_pane_g

0xabf3,	// (0x0002ed35) phob2_cc_data_pane_t1_ParamLimits

0xabf3,	// (0x0002ed35) phob2_cc_data_pane_t1

0xac0b,	// (0x0002ed4d) phob2_cc_data_pane_t2_ParamLimits

0xac0b,	// (0x0002ed4d) phob2_cc_data_pane_t2

0xac23,	// (0x0002ed65) phob2_cc_data_pane_t3_ParamLimits

0xac23,	// (0x0002ed65) phob2_cc_data_pane_t3

0x0002,

0xfe5a,	// (0x00033f9c) phob2_cc_data_pane_t_ParamLimits

0xfe5a,	// (0x00033f9c) phob2_cc_data_pane_t

0x01fc,	// (0x0002433e) phob2_cc_list_pane_ParamLimits

0x01fc,	// (0x0002433e) phob2_cc_list_pane

0xd662,	// (0x000317a4) scroll_pane_cp035_ParamLimits

0xd662,	// (0x000317a4) scroll_pane_cp035

0x3314,	// (0x00027456) bg_button_pane_cp033

0x0208,	// (0x0002434a) phob2_cc_button_pane_g1

0x0214,	// (0x00024356) phob2_cc_button_pane_t1

0x0229,	// (0x0002436b) phob2_cc_button_pane_t2

0x0001,

0xfe61,	// (0x00033fa3) phob2_cc_button_pane_t

0xac3b,	// (0x0002ed7d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xac3b,	// (0x0002ed7d) list_double_large_graphic_phob2_cc_pane

0xac6d,	// (0x0002edaf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xac6d,	// (0x0002edaf) list_double_large_graphic_phob2_cc_pane_g1

0x02e4,	// (0x00024426) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x02e4,	// (0x00024426) list_double_large_graphic_phob2_cc_pane_g2

0xac79,	// (0x0002edbb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xac79,	// (0x0002edbb) list_double_large_graphic_phob2_cc_pane_g3

0xac85,	// (0x0002edc7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xac85,	// (0x0002edc7) list_double_large_graphic_phob2_cc_pane_g4

0xac91,	// (0x0002edd3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xac91,	// (0x0002edd3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe66,	// (0x00033fa8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe66,	// (0x00033fa8) list_double_large_graphic_phob2_cc_pane_g

0xac9d,	// (0x0002eddf) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xac9d,	// (0x0002eddf) list_double_large_graphic_phob2_cc_pane_t1

0xacc6,	// (0x0002ee08) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xacc6,	// (0x0002ee08) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe71,	// (0x00033fb3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe71,	// (0x00033fb3) list_double_large_graphic_phob2_cc_pane_t

0x0342,	// (0x00024484) list_highlight_pane_cp025_ParamLimits

0x0342,	// (0x00024484) list_highlight_pane_cp025

0x3314,	// (0x00027456) bg_button_pane_cp033_ParamLimits

0x0208,	// (0x0002434a) phob2_cc_button_pane_g1_ParamLimits

0x0214,	// (0x00024356) phob2_cc_button_pane_t1_ParamLimits

0x0229,	// (0x0002436b) phob2_cc_button_pane_t2_ParamLimits

0xfe61,	// (0x00033fa3) phob2_cc_button_pane_t_ParamLimits

0x2c1f,	// (0x00026d61) popup_wgtman_window

0xd40e,	// (0x00031550) scroll_pane_cp038

0xa612,	// (0x0002e754) wgtman_btn_pane_cp_01_ParamLimits

0xa612,	// (0x0002e754) wgtman_btn_pane_cp_01

0x0350,	// (0x00024492) wgtman_content_pane

0x0359,	// (0x0002449b) wgtman_heading_pane

0x2bdc,	// (0x00026d1e) bg_heading_pane_cp02

0x0362,	// (0x000244a4) wgtman_heading_pane_g1

0x036a,	// (0x000244ac) wgtman_heading_pane_t1

0x0378,	// (0x000244ba) scroll_pane_cp036

0x0380,	// (0x000244c2) wgtman_list_pane

0x0388,	// (0x000244ca) wgtman_list_pane_t1_ParamLimits

0x0388,	// (0x000244ca) wgtman_list_pane_t1

0xd1ad,	// (0x000312ef) cam4_grid_pane

0x85e7,	// (0x0002c729) bg_button_pane_cp015_ParamLimits

0x85f9,	// (0x0002c73b) bg_button_pane_cp016_ParamLimits

0x860c,	// (0x0002c74e) bg_button_pane_cp017_ParamLimits

0x8662,	// (0x0002c7a4) popup_vitu2_query_window_g3_ParamLimits

0x8662,	// (0x0002c7a4) popup_vitu2_query_window_g3

0x871f,	// (0x0002c861) popup_vitu2_query_window_t6_ParamLimits

0x871f,	// (0x0002c861) popup_vitu2_query_window_t6

0x874a,	// (0x0002c88c) popup_vitu2_query_window_t7_ParamLimits

0x874a,	// (0x0002c88c) popup_vitu2_query_window_t7

0x03a3,	// (0x000244e5) cam4_grid_pane_g1

0x03ac,	// (0x000244ee) cam4_grid_pane_g2

0x03b5,	// (0x000244f7) cam4_grid_pane_g3

0x03be,	// (0x00024500) cam4_grid_pane_g4

0x0003,

0xfe76,	// (0x00033fb8) cam4_grid_pane_g

0x3f27,	// (0x00028069) aid_placing_vt_slider_lsc_ParamLimits

0x4274,	// (0x000283b6) vidtel_button_pane_ParamLimits

0x4274,	// (0x000283b6) vidtel_button_pane

0x2bdc,	// (0x00026d1e) bg_button_pane_cp034

0x03c9,	// (0x0002450b) vidtel_button_pane_g1

0x03d1,	// (0x00024513) vidtel_button_pane_t1

0xd56d,	// (0x000316af) aid_size_vtel_slider_touch

0xd662,	// (0x000317a4) scroll_pane_cp039

0x9380,	// (0x0002d4c2) ncim_query_button_pane_cp01_ParamLimits

0x939f,	// (0x0002d4e1) ncimui_query_pane_g1_ParamLimits

0x3314,	// (0x00027456) input_focus_pane_cp012_ParamLimits

0xe011,	// (0x00032153) ncim_query_entry_pane_t1_ParamLimits

0xd662,	// (0x000317a4) scroll_pane_cp039_ParamLimits

0x5813,	// (0x00029955) navi_pane_bcale_mc_g1

0x581b,	// (0x0002995d) navi_pane_bcale_mc_t1

0xe58d,	// (0x000326cf) main_sp_fs_email_pane_g1

0xe599,	// (0x000326db) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x00033dbb) main_sp_fs_email_pane_g

0xea2a,	// (0x00032b6c) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea2a,	// (0x00032b6c) list_single_cale_mrui_row_pane_g3

0xa223,	// (0x0002e365) list_single_recal_day_pane_g5_event_pane

0xec09,	// (0x00032d4b) list_single_recal_day_pane_g7

0x03e7,	// (0x00024529) list_recal_day_event_pane_cp01

0x03f0,	// (0x00024532) list_recal_vselct_arw_lo_pane_cp01

0x03f8,	// (0x0002453a) list_recal_vselct_arw_up_pane_cp01

0x0400,	// (0x00024542) list_recal_vselct_pane_cp01

0xd5cb,	// (0x0003170d) list_recal_day_event_pane_cp01_g1

0x040a,	// (0x0002454c) list_recal_day_event_pane_cp01_t1

0xec11,	// (0x00032d53) list_single_recal_day_pane_t1_ParamLimits

0xec23,	// (0x00032d65) list_single_recal_day_pane_t2_ParamLimits

0xfd59,	// (0x00033e9b) list_single_recal_day_pane_t_ParamLimits

0x32f2,	// (0x00027434) bg_notes_pane_ParamLimits

0x3487,	// (0x000275c9) list_notes_pane_ParamLimits

0x3495,	// (0x000275d7) scroll_pane_cp06_ParamLimits

0x34bd,	// (0x000275ff) main_notes_pane_ParamLimits

0x3314,	// (0x00027456) main_welc_pane

0xad0b,	// (0x0002ee4d) main_welc_body_pane_ParamLimits

0xad0b,	// (0x0002ee4d) main_welc_body_pane

0xad28,	// (0x0002ee6a) main_welc_opti_pane_ParamLimits

0xad28,	// (0x0002ee6a) main_welc_opti_pane

0xad9c,	// (0x0002eede) main_welc_pane_t1_ParamLimits

0xad9c,	// (0x0002eede) main_welc_pane_t1

0xaf02,	// (0x0002f044) main_welc_body_row_pane_ParamLimits

0xaf02,	// (0x0002f044) main_welc_body_row_pane

0x336d,	// (0x000274af) main_welc_opti_row_pane_ParamLimits

0x336d,	// (0x000274af) main_welc_opti_row_pane

0x05e2,	// (0x00024724) main_welc_opti_row_pane_g1

0xaf17,	// (0x0002f059) main_welc_opti_row_pane_t1

0x05f9,	// (0x0002473b) main_welc_body_row_pane_t1

0xee7f,	// (0x00032fc1) popup_notif_wgt_heading_pane

0xee99,	// (0x00032fdb) aid_size_list_notif_wgt_del_ParamLimits

0xeea6,	// (0x00032fe8) list_notif_wgt_row_pane_g1_ParamLimits

0xeeb2,	// (0x00032ff4) list_notif_wgt_row_pane_g2_ParamLimits

0xeec1,	// (0x00033003) list_notif_wgt_row_pane_g3_ParamLimits

0xfdc0,	// (0x00033f02) list_notif_wgt_row_pane_g_ParamLimits

0xeece,	// (0x00033010) list_notif_wgt_row_pane_t1_ParamLimits

0xeee4,	// (0x00033026) list_notif_wgt_row_pane_t2_ParamLimits

0xeef6,	// (0x00033038) list_notif_wgt_row_pane_t3_ParamLimits

0xfdc7,	// (0x00033f09) list_notif_wgt_row_pane_t_ParamLimits

0xa6ac,	// (0x0002e7ee) listrow_wgtman_pane_g1_ParamLimits

0xa6b9,	// (0x0002e7fb) listrow_wgtman_pane_g2_ParamLimits

0xfdf7,	// (0x00033f39) listrow_wgtman_pane_g_ParamLimits

0xa6d7,	// (0x0002e819) listrow_wgtman_pane_t1_ParamLimits

0xa6ef,	// (0x0002e831) listrow_wgtman_pane_t2_ParamLimits

0xfdfc,	// (0x00033f3e) listrow_wgtman_pane_t_ParamLimits

0xa715,	// (0x0002e857) wait_bar_pane_cp09_ParamLimits

0x2bdc,	// (0x00026d1e) bg_popup_heading_pane_cp02

0x0608,	// (0x0002474a) popup_notif_wgt_heading_pane_g1

0x0610,	// (0x00024752) popup_notif_wgt_heading_pane_t1

0x2bdc,	// (0x00026d1e) main_vids_pane

0x2bdc,	// (0x00026d1e) vids_listscroll_pane

0xaf26,	// (0x0002f068) scroll_pane_cp040

0x2bdc,	// (0x00026d1e) vids_list_pane

0xaf31,	// (0x0002f073) vids_list_double_pane_ParamLimits

0xaf31,	// (0x0002f073) vids_list_double_pane

0xaf42,	// (0x0002f084) vids_list_double_pane_g1

0xaf4b,	// (0x0002f08d) vids_list_double_pane_t1

0xaf5a,	// (0x0002f09c) vids_list_double_pane_t2

0x0001,

0xfe95,	// (0x00033fd7) vids_list_double_pane_t

0xb1a9,	// (0x0002f2eb) main_ncimui_pane_ParamLimits

0x91b6,	// (0x0002d2f8) main_ncimui_pane_g1_ParamLimits

0x91c2,	// (0x0002d304) main_ncimui_pane_g2_ParamLimits

0x91c2,	// (0x0002d304) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x00033cbc) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x00033cbc) main_ncimui_pane_g

0xad43,	// (0x0002ee85) main_welc_pane_g1_ParamLimits

0xad43,	// (0x0002ee85) main_welc_pane_g1

0xad58,	// (0x0002ee9a) main_welc_pane_g2_ParamLimits

0xad58,	// (0x0002ee9a) main_welc_pane_g2

0x0003,

0xfe7f,	// (0x00033fc1) main_welc_pane_g_ParamLimits

0xfe7f,	// (0x00033fc1) main_welc_pane_g

0x32f2,	// (0x00027434) listscroll_mce_pane_ParamLimits

0x59aa,	// (0x00029aec) wait_bar_pane_cp10

0xc0a2,	// (0x000301e4) main_cale_day_pane_ParamLimits

0xc0a2,	// (0x000301e4) main_cale_week_pane_ParamLimits

0x32f2,	// (0x00027434) main_messa_pane_ParamLimits

0x781f,	// (0x0002b961) main_clock2_btn_pane_ParamLimits

0x781f,	// (0x0002b961) main_clock2_btn_pane

0xc9ff,	// (0x00030b41) main_clock2_btn_pane_cp01_ParamLimits

0xc9ff,	// (0x00030b41) main_clock2_btn_pane_cp01

0xe9b6,	// (0x00032af8) list_cale_mrui_pane_ParamLimits

0xef2c,	// (0x0003306e) main_cf0_pane_g2

0x0001,

0xfdce,	// (0x00033f10) main_cf0_pane_g

0xa902,	// (0x0002ea44) area_left_week_number_pane_ParamLimits

0xa90e,	// (0x0002ea50) area_top_day_name_pane_ParamLimits

0xa921,	// (0x0002ea63) frame_month_view_pane_ParamLimits

0xf05d,	// (0x0003319f) grid_month_view_pane_ParamLimits

0xf06b,	// (0x000331ad) frm_month_g1_ParamLimits

0xa9a2,	// (0x0002eae4) frm_month_g2_ParamLimits

0xa9b5,	// (0x0002eaf7) frm_month_g3_ParamLimits

0xa9c8,	// (0x0002eb0a) frm_month_g4_ParamLimits

0xa9db,	// (0x0002eb1d) frm_month_g5_ParamLimits

0xa9ee,	// (0x0002eb30) frm_month_g6_ParamLimits

0xaa01,	// (0x0002eb43) frm_month_g7_ParamLimits

0xf078,	// (0x000331ba) frm_month_g8_ParamLimits

0xaa14,	// (0x0002eb56) frm_month_g9_ParamLimits

0xaa24,	// (0x0002eb66) frm_month_g10_ParamLimits

0xaa34,	// (0x0002eb76) frm_month_g11_ParamLimits

0xaa44,	// (0x0002eb86) frm_month_g12_ParamLimits

0xaa56,	// (0x0002eb98) frm_month_g13_ParamLimits

0xaa68,	// (0x0002ebaa) frm_month_g14_ParamLimits

0xaa7c,	// (0x0002ebbe) frm_month_g15_ParamLimits

0xaa90,	// (0x0002ebd2) frm_month_g16_ParamLimits

0xfe26,	// (0x00033f68) frm_month_g_ParamLimits

0x0068,	// (0x000241aa) cell_top_day_name_pane_t1_ParamLimits

0xaaa4,	// (0x0002ebe6) cell_area_left_week_number_pane_g1_ParamLimits

0xaab0,	// (0x0002ebf2) cell_area_left_week_number_pane_t1_ParamLimits

0x337b,	// (0x000274bd) cell_month_view_pane_g1_ParamLimits

0xaac3,	// (0x0002ec05) cell_month_view_pane_t1_ParamLimits

0x32ea,	// (0x0002742c) main_clock2_btn_pane_g1

0x0668,	// (0x000247aa) main_clock2_btn_pane_t1

0x3314,	// (0x00027456) listscroll_cmail_pane_ParamLimits

0xe58d,	// (0x000326cf) main_sp_fs_email_pane_g1_ParamLimits

0xe599,	// (0x000326db) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x00033dbb) main_sp_fs_email_pane_g_ParamLimits

0xeb79,	// (0x00032cbb) list_recal_day_pane_ParamLimits

0xeb8a,	// (0x00032ccc) mian_recal_day_pane_t1

0x9bd8,	// (0x0002dd1a) list_single_dyc_row_text_pane_t4_ParamLimits

0x9bd8,	// (0x0002dd1a) list_single_dyc_row_text_pane_t4

0x9c21,	// (0x0002dd63) list_single_dyc_row_text_pane_t5_ParamLimits

0x9c21,	// (0x0002dd63) list_single_dyc_row_text_pane_t5

0xe63b,	// (0x0003277d) list_single_dyc_row_text_pane_t6_ParamLimits

0xe63b,	// (0x0003277d) list_single_dyc_row_text_pane_t6

0x4fe8,	// (0x0002912a) aid_mgn_list_cale_time_pane

0xb1a9,	// (0x0002f2eb) main_gallery2_pane_ParamLimits

0xca15,	// (0x00030b57) main_clock2_pane_cp01_t1

0xca23,	// (0x00030b65) main_clock2_pane_cp01_t3

0x0001,

0xf75f,	// (0x000338a1) main_clock2_pane_cp01_t

0x38e4,	// (0x00027a26) cale_week_scroll_pane_g16_ParamLimits

0x38e4,	// (0x00027a26) cale_week_scroll_pane_g16

0x3c19,	// (0x00027d5b) vorec_slider_pane

0x03d1,	// (0x00024513) vidtel_button_pane_t1_ParamLimits

0xa289,	// (0x0002e3cb) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa289,	// (0x0002e3cb) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa29a,	// (0x0002e3dc) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa29a,	// (0x0002e3dc) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd7c,	// (0x00033ebe) main_fs_bigclock_clock_pane_g_ParamLimits

0xa2ad,	// (0x0002e3ef) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa2c3,	// (0x0002e405) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd85,	// (0x00033ec7) main_fs_bigclock_clock_pane_t_ParamLimits

0x70fb,	// (0x0002b23d) main_mup3_lyrics_pane_ParamLimits

0x70fb,	// (0x0002b23d) main_mup3_lyrics_pane

0xaf6a,	// (0x0002f0ac) main_mup3_lyrics_pane_t1_ParamLimits

0xaf6a,	// (0x0002f0ac) main_mup3_lyrics_pane_t1

0xce42,	// (0x00030f84) aid_main_mp4_pane_t1_area

0xce4c,	// (0x00030f8e) aid_main_mp4_pane_t2_area

0xcef8,	// (0x0003103a) main_mp4_pane_g7_ParamLimits

0xcef8,	// (0x0003103a) main_mp4_pane_g7

0xcf04,	// (0x00031046) main_mp4_pane_g8_ParamLimits

0xcf04,	// (0x00031046) main_mp4_pane_g8

0x7d32,	// (0x0002be74) aid_call6_pane_g1_size

0xac56,	// (0x0002ed98) list_double_large_graphic_phob2_other_pane_ParamLimits

0xac56,	// (0x0002ed98) list_double_large_graphic_phob2_other_pane

0x559f,	// (0x000296e1) list_double_large_graphic_phob2_other_pane_g1

0x2bdc,	// (0x00026d1e) list_highlight_pane_cp026

0x3314,	// (0x00027456) main_welc_pane_ParamLimits

0x9a17,	// (0x0002db59) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9a17,	// (0x0002db59) main_sp_fs_ctrlbar_pane_g3

0x9a31,	// (0x0002db73) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9a31,	// (0x0002db73) main_sp_fs_ctrlbar_pane_g4

0x9a65,	// (0x0002dba7) toolbar2_fixed_button_pane_cp01

0x9a70,	// (0x0002dbb2) toolbar2_fixed_button_pane_cp02

0x9a7d,	// (0x0002dbbf) toolbar2_fixed_button_pane_cp03

0xacef,	// (0x0002ee31) list_welc_entry_pane_ParamLimits

0xacef,	// (0x0002ee31) list_welc_entry_pane

0xad6d,	// (0x0002eeaf) main_welc_pane_g3_ParamLimits

0xad6d,	// (0x0002eeaf) main_welc_pane_g3

0xadba,	// (0x0002eefc) main_welc_pane_t2_ParamLimits

0xadba,	// (0x0002eefc) main_welc_pane_t2

0xadd4,	// (0x0002ef16) main_welc_pane_t3_ParamLimits

0xadd4,	// (0x0002ef16) main_welc_pane_t3

0x0005,

0xfe88,	// (0x00033fca) main_welc_pane_t_ParamLimits

0xfe88,	// (0x00033fca) main_welc_pane_t

0xae86,	// (0x0002efc8) welc_button_pane_ParamLimits

0xae86,	// (0x0002efc8) welc_button_pane

0xaeee,	// (0x0002f030) welc_service_logo_pane_ParamLimits

0xaeee,	// (0x0002f030) welc_service_logo_pane

0xaf86,	// (0x0002f0c8) list_single_welc_entry_pane_ParamLimits

0xaf86,	// (0x0002f0c8) list_single_welc_entry_pane

0xaf97,	// (0x0002f0d9) list_single_welc_entry_pane_g1

0xaf9f,	// (0x0002f0e1) list_single_welc_entry_pane_t1

0xafad,	// (0x0002f0ef) list_single_welc_entry_pane_t2

0x0001,

0xfe9a,	// (0x00033fdc) list_single_welc_entry_pane_t

0x2bdc,	// (0x00026d1e) bg_button_pane_cp035

0x06e1,	// (0x00024823) welc_button_pane_t1

0x06ef,	// (0x00024831) welc_service_logo_pane_g1

0x06f8,	// (0x0002483a) welc_service_logo_pane_g2

0x0001,

0xfe9f,	// (0x00033fe1) welc_service_logo_pane_g

0xb1b7,	// (0x0002f2f9) main_int_radio_pane

0xdeaf,	// (0x00031ff1) list_single_fs_dyc_pane_g1

0xab86,	// (0x0002ecc8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xab86,	// (0x0002ecc8) list_double_large_graphic_phob2_pane_g3

0xab92,	// (0x0002ecd4) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xab92,	// (0x0002ecd4) list_double_large_graphic_phob2_pane_g4

0xafbb,	// (0x0002f0fd) main_int_radio1_pane_ParamLimits

0xafbb,	// (0x0002f0fd) main_int_radio1_pane

0x0713,	// (0x00024855) find_pane_cp02

0xafd8,	// (0x0002f11a) input_focus_pane_cp12_ParamLimits

0xafd8,	// (0x0002f11a) input_focus_pane_cp12

0xafe8,	// (0x0002f12a) input_focus_pane_cp13_ParamLimits

0xafe8,	// (0x0002f12a) input_focus_pane_cp13

0xaffc,	// (0x0002f13e) input_focus_pane_cp14_ParamLimits

0xaffc,	// (0x0002f13e) input_focus_pane_cp14

0x0758,	// (0x0002489a) int_radio1_listscroll_pane

0xb010,	// (0x0002f152) main_int_radio1_pane_g1_ParamLimits

0xb010,	// (0x0002f152) main_int_radio1_pane_g1

0xb028,	// (0x0002f16a) main_int_radio1_pane_t1_ParamLimits

0xb028,	// (0x0002f16a) main_int_radio1_pane_t1

0xb043,	// (0x0002f185) main_int_radio1_pane_t2_ParamLimits

0xb043,	// (0x0002f185) main_int_radio1_pane_t2

0xb05e,	// (0x0002f1a0) main_int_radio1_pane_t3_ParamLimits

0xb05e,	// (0x0002f1a0) main_int_radio1_pane_t3

0xb079,	// (0x0002f1bb) main_int_radio1_pane_t4_ParamLimits

0xb079,	// (0x0002f1bb) main_int_radio1_pane_t4

0x07c5,	// (0x00024907) main_int_radio1_pane_t5_ParamLimits

0x07c5,	// (0x00024907) main_int_radio1_pane_t5

0xb08b,	// (0x0002f1cd) main_int_radio1_pane_t6_ParamLimits

0xb08b,	// (0x0002f1cd) main_int_radio1_pane_t6

0xb0a0,	// (0x0002f1e2) main_int_radio1_pane_t7_ParamLimits

0xb0a0,	// (0x0002f1e2) main_int_radio1_pane_t7

0xb0b5,	// (0x0002f1f7) main_int_radio1_pane_t8_ParamLimits

0xb0b5,	// (0x0002f1f7) main_int_radio1_pane_t8

0xb0d4,	// (0x0002f216) main_int_radio1_pane_t9_ParamLimits

0xb0d4,	// (0x0002f216) main_int_radio1_pane_t9

0xb0e6,	// (0x0002f228) main_int_radio1_pane_t10_ParamLimits

0xb0e6,	// (0x0002f228) main_int_radio1_pane_t10

0xb10c,	// (0x0002f24e) main_int_radio1_pane_t11_ParamLimits

0xb10c,	// (0x0002f24e) main_int_radio1_pane_t11

0xb132,	// (0x0002f274) main_int_radio1_pane_t12_ParamLimits

0xb132,	// (0x0002f274) main_int_radio1_pane_t12

0x000b,

0xfea4,	// (0x00033fe6) main_int_radio1_pane_t_ParamLimits

0xfea4,	// (0x00033fe6) main_int_radio1_pane_t

0x089a,	// (0x000249dc) int_radio_list_pane

0x00fe,	// (0x00024240) scroll_pane_cp037

0x08a2,	// (0x000249e4) list_double_large_graphic_int_radio_pane_ParamLimits

0x08a2,	// (0x000249e4) list_double_large_graphic_int_radio_pane

0x08bb,	// (0x000249fd) list_double_large_graphic_int_radio_pane_g1

0x08c4,	// (0x00024a06) list_double_large_graphic_int_radio_pane_t1

0x08d2,	// (0x00024a14) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfebd,	// (0x00033fff) list_double_large_graphic_int_radio_pane_t

0x2bdc,	// (0x00026d1e) list_highlight_pane_cp027

0x0427,	// (0x00024569) main_button_pane_4

0xad7d,	// (0x0002eebf) main_welc_pane_g4_ParamLimits

0xad7d,	// (0x0002eebf) main_welc_pane_g4

0xadec,	// (0x0002ef2e) main_welc_pane_t4_ParamLimits

0xadec,	// (0x0002ef2e) main_welc_pane_t4

0xae01,	// (0x0002ef43) main_welc_pane_t5_ParamLimits

0xae01,	// (0x0002ef43) main_welc_pane_t5

0xae4b,	// (0x0002ef8d) main_welc_pane_t6_ParamLimits

0xae4b,	// (0x0002ef8d) main_welc_pane_t6

0xae9d,	// (0x0002efdf) welc_button_pane_2_ParamLimits

0xae9d,	// (0x0002efdf) welc_button_pane_2

0xaeb9,	// (0x0002effb) welc_button_pane_3_ParamLimits

0xaeb9,	// (0x0002effb) welc_button_pane_3

0x0427,	// (0x00024569) welc_button_pane_4

0xaed8,	// (0x0002f01a) welc_button_pane_5_ParamLimits

0xaed8,	// (0x0002f01a) welc_button_pane_5

0x1c75,	// (0x00025db7) main_popup_welc_pane

0x08e0,	// (0x00024a22) main_welc_sk_g3

0x08ea,	// (0x00024a2c) main_welc_sk_g4

0x08f4,	// (0x00024a36) main_welc_sk_t3

0x0904,	// (0x00024a46) main_welc_sk_t4

0x0914,	// (0x00024a56) popup_welc_pane_t4

0x0922,	// (0x00024a64) popup_welc_pane_t5

0x0930,	// (0x00024a72) popup_welc_pane_t6
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal

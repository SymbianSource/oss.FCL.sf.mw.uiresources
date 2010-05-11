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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007b2bb };

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
0x2014,	// (0x0007d2cf) Screen

0x2020,	// (0x0007d2db) application_window

0x207c,	// (0x0007d337) area_bottom_pane_ParamLimits

0x207c,	// (0x0007d337) area_bottom_pane

0x20d5,	// (0x0007d390) area_top_pane_ParamLimits

0x20d5,	// (0x0007d390) area_top_pane

0x2139,	// (0x0007d3f4) call_video_uplink_pane_ParamLimits

0x2139,	// (0x0007d3f4) call_video_uplink_pane

0x2178,	// (0x0007d433) main_pane_ParamLimits

0x2178,	// (0x0007d433) main_pane

0xc867,	// (0x00087b22) context_pane

0x5504,	// (0x000807bf) navi_pane

0x552a,	// (0x000807e5) popup_cale_events_window_ParamLimits

0x552a,	// (0x000807e5) popup_cale_events_window

0xc87a,	// (0x00087b35) popup_mup_playback_window

0x5542,	// (0x000807fd) signal_pane

0xa792,	// (0x00085a4d) main_browser_pane

0xa969,	// (0x00085c24) main_burst_pane

0x5394,	// (0x0008064f) main_calc_pane

0xc84d,	// (0x00087b08) main_cale_day_pane

0x28b1,	// (0x0007db6c) main_cale_month_pane

0xc84d,	// (0x00087b08) main_cale_week_pane

0xa969,	// (0x00085c24) main_call_pane

0xa458,	// (0x00085713) main_call_poc_pane

0xa969,	// (0x00085c24) main_camera_pane

0xa969,	// (0x00085c24) main_chi_dic_pane

0xb1b0,	// (0x0008646b) main_clock_pane

0xa458,	// (0x00085713) main_fmradio_pane

0xa969,	// (0x00085c24) main_graph_messa_pane

0xa458,	// (0x00085713) main_help_pane

0xa792,	// (0x00085a4d) main_im_pane

0xa6b3,	// (0x0008596e) main_image_pane_ParamLimits

0xa6b3,	// (0x0008596e) main_image_pane

0xa458,	// (0x00085713) main_location2_pane

0xa969,	// (0x00085c24) main_location_pane

0xa6b3,	// (0x0008596e) main_messa_pane

0xa458,	// (0x00085713) main_mp2_pane

0xa969,	// (0x00085c24) main_mp_pane

0xa458,	// (0x00085713) main_msg_pane

0xa458,	// (0x00085713) main_mup_eq_pane

0xa458,	// (0x00085713) main_mup_pane

0xa792,	// (0x00085a4d) main_notes_pane

0xa458,	// (0x00085713) main_pec_pane

0xa458,	// (0x00085713) main_phob_pane

0xa458,	// (0x00085713) main_pinb_pane

0xa458,	// (0x00085713) main_postcard_pane

0xa458,	// (0x00085713) main_qdial_pane

0xa969,	// (0x00085c24) main_skin_pane

0xa458,	// (0x00085713) main_smil2_pane

0xa969,	// (0x00085c24) main_smil_pane

0xa969,	// (0x00085c24) main_video_pane

0xa969,	// (0x00085c24) main_video_tele_pane

0xa6b3,	// (0x0008596e) main_viewer_pane_ParamLimits

0xa6b3,	// (0x0008596e) main_viewer_pane

0xa969,	// (0x00085c24) main_vorec_pane

0x53d2,	// (0x0008068d) popup_blid_sat_info_window_ParamLimits

0x53d2,	// (0x0008068d) popup_blid_sat_info_window

0x53f2,	// (0x000806ad) popup_dyc_status_message_window_ParamLimits

0x53f2,	// (0x000806ad) popup_dyc_status_message_window

0x5400,	// (0x000806bb) popup_grid_large_graphic_window_ParamLimits

0x5400,	// (0x000806bb) popup_grid_large_graphic_window

0x548f,	// (0x0008074a) popup_loc_request_window_ParamLimits

0x548f,	// (0x0008074a) popup_loc_request_window

0x54dc,	// (0x00080797) popup_wml_address_window_ParamLimits

0x54dc,	// (0x00080797) popup_wml_address_window

0x526c,	// (0x00080527) call_muted_g1

0x4f28,	// (0x000801e3) popup_call_audio_conf_window_ParamLimits

0x4f28,	// (0x000801e3) popup_call_audio_conf_window

0x527c,	// (0x00080537) popup_call_audio_first_window_ParamLimits

0x527c,	// (0x00080537) popup_call_audio_first_window

0x52bc,	// (0x00080577) popup_call_audio_in_window_ParamLimits

0x52bc,	// (0x00080577) popup_call_audio_in_window

0x52e0,	// (0x0008059b) popup_call_audio_out_window_ParamLimits

0x52e0,	// (0x0008059b) popup_call_audio_out_window

0x5302,	// (0x000805bd) popup_call_audio_second_window_ParamLimits

0x5302,	// (0x000805bd) popup_call_audio_second_window

0x5332,	// (0x000805ed) popup_call_audio_wait_window_ParamLimits

0x5332,	// (0x000805ed) popup_call_audio_wait_window

0x5353,	// (0x0008060e) popup_number_entry_window_ParamLimits

0x5353,	// (0x0008060e) popup_number_entry_window

0xa045,	// (0x00085300) bg_popup_call_pane_cp05_ParamLimits

0xa045,	// (0x00085300) bg_popup_call_pane_cp05

0xa065,	// (0x00085320) popup_number_entry_window_t1

0xa078,	// (0x00085333) popup_number_entry_window_t2

0xa08a,	// (0x00085345) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0008a385) popup_number_entry_window_t

0xa09c,	// (0x00085357) text_title_cp2

0xa0af,	// (0x0008536a) bg_popup_call_pane_cp_ParamLimits

0xa0af,	// (0x0008536a) bg_popup_call_pane_cp

0xa0bd,	// (0x00085378) call_thumbnail_pane

0xa0c5,	// (0x00085380) popup_call_audio_in_window_g1_ParamLimits

0xa0c5,	// (0x00085380) popup_call_audio_in_window_g1

0xa0d1,	// (0x0008538c) popup_call_audio_in_window_g2_ParamLimits

0xa0d1,	// (0x0008538c) popup_call_audio_in_window_g2

0xa0dd,	// (0x00085398) popup_call_audio_in_window_g3_ParamLimits

0xa0dd,	// (0x00085398) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0008a38e) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0008a38e) popup_call_audio_in_window_g

0xa0e9,	// (0x000853a4) popup_call_audio_in_window_t1_ParamLimits

0xa0e9,	// (0x000853a4) popup_call_audio_in_window_t1

0xa105,	// (0x000853c0) popup_call_audio_in_window_t2_ParamLimits

0xa105,	// (0x000853c0) popup_call_audio_in_window_t2

0xa121,	// (0x000853dc) popup_call_audio_in_window_t3_ParamLimits

0xa121,	// (0x000853dc) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0008a395) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0008a395) popup_call_audio_in_window_t

0xa0af,	// (0x0008536a) bg_popup_call_pane_cp01_ParamLimits

0xa0af,	// (0x0008536a) bg_popup_call_pane_cp01

0xa0bd,	// (0x00085378) call_thumbnail_pane_cp02

0xa134,	// (0x000853ef) call_type_pane_cp022

0xa13c,	// (0x000853f7) popup_call_audio_out_window_g1_ParamLimits

0xa13c,	// (0x000853f7) popup_call_audio_out_window_g1

0xa14e,	// (0x00085409) popup_call_audio_out_window_g2_ParamLimits

0xa14e,	// (0x00085409) popup_call_audio_out_window_g2

0xa15a,	// (0x00085415) popup_call_audio_out_window_g3_ParamLimits

0xa15a,	// (0x00085415) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0008a39c) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0008a39c) popup_call_audio_out_window_g

0xa16c,	// (0x00085427) popup_call_audio_out_window_t1_ParamLimits

0xa16c,	// (0x00085427) popup_call_audio_out_window_t1

0xa184,	// (0x0008543f) popup_call_audio_out_window_t2_ParamLimits

0xa184,	// (0x0008543f) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0008a3a3) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0008a3a3) popup_call_audio_out_window_t

0xa199,	// (0x00085454) bg_popup_call_pane_ParamLimits

0xa199,	// (0x00085454) bg_popup_call_pane

0x237c,	// (0x0007d637) call_thumbnail_pane_cp_ParamLimits

0x237c,	// (0x0007d637) call_thumbnail_pane_cp

0xa21d,	// (0x000854d8) call_type_pane_cp01_ParamLimits

0xa21d,	// (0x000854d8) call_type_pane_cp01

0xa261,	// (0x0008551c) popup_call_audio_first_window_g1_ParamLimits

0xa261,	// (0x0008551c) popup_call_audio_first_window_g1

0xa2ad,	// (0x00085568) popup_call_audio_first_window_g2_ParamLimits

0xa2ad,	// (0x00085568) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0008a3a8) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0008a3a8) popup_call_audio_first_window_g

0xa2f1,	// (0x000855ac) popup_call_audio_first_window_t1_ParamLimits

0xa2f1,	// (0x000855ac) popup_call_audio_first_window_t1

0xa39d,	// (0x00085658) popup_call_audio_first_window_t4_ParamLimits

0xa39d,	// (0x00085658) popup_call_audio_first_window_t4

0xa429,	// (0x000856e4) popup_call_audio_first_window_t5_ParamLimits

0xa429,	// (0x000856e4) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0008a3ad) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0008a3ad) popup_call_audio_first_window_t

0xa458,	// (0x00085713) bg_popup_call_pane_cp02

0xa462,	// (0x0008571d) call_type_pane_cp023

0xa46a,	// (0x00085725) popup_call_audio_wait_window_g1

0xa472,	// (0x0008572d) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008a3b4) popup_call_audio_wait_window_g

0xa47a,	// (0x00085735) popup_call_audio_wait_window_t3

0xa488,	// (0x00085743) bg_popup_call_pane_cp03_ParamLimits

0xa488,	// (0x00085743) bg_popup_call_pane_cp03

0xa4e8,	// (0x000857a3) call_thumbnail_pane_cp011_ParamLimits

0xa4e8,	// (0x000857a3) call_thumbnail_pane_cp011

0xa4f4,	// (0x000857af) call_type_pane_cp034_ParamLimits

0xa4f4,	// (0x000857af) call_type_pane_cp034

0xa530,	// (0x000857eb) popup_call_audio_second_window_g1_ParamLimits

0xa530,	// (0x000857eb) popup_call_audio_second_window_g1

0xa56c,	// (0x00085827) popup_call_audio_second_window_g2_ParamLimits

0xa56c,	// (0x00085827) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0008a3b9) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0008a3b9) popup_call_audio_second_window_g

0xa5a8,	// (0x00085863) popup_call_audio_second_window_t1_ParamLimits

0xa5a8,	// (0x00085863) popup_call_audio_second_window_t1

0xa629,	// (0x000858e4) popup_call_audio_second_window_t2_ParamLimits

0xa629,	// (0x000858e4) popup_call_audio_second_window_t2

0xa65f,	// (0x0008591a) popup_call_audio_second_window_t3_ParamLimits

0xa65f,	// (0x0008591a) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0008a3be) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0008a3be) popup_call_audio_second_window_t

0xa458,	// (0x00085713) bg_popup_call_pane_cp04

0xa695,	// (0x00085950) list_conf_pane

0xa69d,	// (0x00085958) popup_call_audio_conf_window_t1

0xa6ab,	// (0x00085966) call_thumbnail_pane_g1

0xa6b3,	// (0x0008596e) bg_pinb_pane_ParamLimits

0xa6b3,	// (0x0008596e) bg_pinb_pane

0xa6c1,	// (0x0008597c) find_pinb_pane

0xa6ca,	// (0x00085985) listscroll_pinb_pane_ParamLimits

0xa6ca,	// (0x00085985) listscroll_pinb_pane

0xa6d9,	// (0x00085994) pinb_bg_pane_g1

0x23a0,	// (0x0007d65b) pinb_bg_pane_g2

0x23ac,	// (0x0007d667) pinb_bg_pane_g3

0x23b8,	// (0x0007d673) pinb_bg_pane_g4

0x23c4,	// (0x0007d67f) pinb_bg_pane_g5

0x23d0,	// (0x0007d68b) pinb_bg_pane_g6

0x23db,	// (0x0007d696) pinb_bg_pane_g7

0x23e6,	// (0x0007d6a1) pinb_bg_pane_g8

0x23f1,	// (0x0007d6ac) pinb_bg_pane_g9

0x23fb,	// (0x0007d6b6) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0008a3c5) pinb_bg_pane_g

0x2418,	// (0x0007d6d3) grid_pinb_pane

0x2423,	// (0x0007d6de) list_pinb_pane

0x242e,	// (0x0007d6e9) scroll_pane_cp01_ParamLimits

0x242e,	// (0x0007d6e9) scroll_pane_cp01

0xa6e3,	// (0x0008599e) find_pinb_pane_g1_ParamLimits

0xa6e3,	// (0x0008599e) find_pinb_pane_g1

0xa709,	// (0x000859c4) find_pinb_pane_t1

0xa71b,	// (0x000859d6) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0008a3df) find_pinb_pane_t

0xa730,	// (0x000859eb) input_focus_pane_cp01_ParamLimits

0xa730,	// (0x000859eb) input_focus_pane_cp01

0x2440,	// (0x0007d6fb) cell_pinb_pane_ParamLimits

0x2440,	// (0x0007d6fb) cell_pinb_pane

0x246b,	// (0x0007d726) cell_pinb_pane_g1_ParamLimits

0x246b,	// (0x0007d726) cell_pinb_pane_g1

0xa73c,	// (0x000859f7) cell_pinb_pane_g2_ParamLimits

0xa73c,	// (0x000859f7) cell_pinb_pane_g2

0xa748,	// (0x00085a03) cell_pinb_pane_g3_ParamLimits

0xa748,	// (0x00085a03) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0008a3e4) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0008a3e4) cell_pinb_pane_g

0xa458,	// (0x00085713) grid_highlight_pane_cp01

0x2480,	// (0x0007d73b) list_pinb_item_pane_ParamLimits

0x2480,	// (0x0007d73b) list_pinb_item_pane

0xa458,	// (0x00085713) list_highlight_pane_cp02

0x24a9,	// (0x0007d764) list_pinb_item_pane_g1_ParamLimits

0x24a9,	// (0x0007d764) list_pinb_item_pane_g1

0x24b6,	// (0x0007d771) list_pinb_item_pane_g2_ParamLimits

0x24b6,	// (0x0007d771) list_pinb_item_pane_g2

0x24c2,	// (0x0007d77d) list_pinb_item_pane_g3_ParamLimits

0x24c2,	// (0x0007d77d) list_pinb_item_pane_g3

0x24d3,	// (0x0007d78e) list_pinb_item_pane_g4_ParamLimits

0x24d3,	// (0x0007d78e) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0008a3eb) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0008a3eb) list_pinb_item_pane_g

0x24df,	// (0x0007d79a) list_pinb_item_pane_t1_ParamLimits

0x24df,	// (0x0007d79a) list_pinb_item_pane_t1

0x2510,	// (0x0007d7cb) calc_display_pane

0x252e,	// (0x0007d7e9) calc_paper_pane

0x254a,	// (0x0007d805) grid_calc_pane

0xa458,	// (0x00085713) bg_list_pane_cp01

0x2576,	// (0x0007d831) clock_g1

0x257e,	// (0x0007d839) clock_g2

0x0001,

0xf139,	// (0x0008a3f4) clock_g

0x2588,	// (0x0007d843) clock_t1_ParamLimits

0x2588,	// (0x0007d843) clock_t1

0x259d,	// (0x0007d858) clock_t2_ParamLimits

0x259d,	// (0x0007d858) clock_t2

0x25af,	// (0x0007d86a) clock_t3_ParamLimits

0x25af,	// (0x0007d86a) clock_t3

0x25c1,	// (0x0007d87c) clock_t4_ParamLimits

0x25c1,	// (0x0007d87c) clock_t4

0x25d3,	// (0x0007d88e) clock_t5_ParamLimits

0x25d3,	// (0x0007d88e) clock_t5

0x25e8,	// (0x0007d8a3) clock_t6_ParamLimits

0x25e8,	// (0x0007d8a3) clock_t6

0x25fa,	// (0x0007d8b5) clock_t7_ParamLimits

0x25fa,	// (0x0007d8b5) clock_t7

0x260c,	// (0x0007d8c7) clock_t8_ParamLimits

0x260c,	// (0x0007d8c7) clock_t8

0x2622,	// (0x0007d8dd) clock_t9_ParamLimits

0x2622,	// (0x0007d8dd) clock_t9

0x0008,

0xf13e,	// (0x0008a3f9) clock_t_ParamLimits

0xf13e,	// (0x0008a3f9) clock_t

0xa754,	// (0x00085a0f) popup_clock_analogue_window_cp02

0xa754,	// (0x00085a0f) popup_clock_digital_window_cp01

0xa75c,	// (0x00085a17) listscroll_help_pane

0xa458,	// (0x00085713) phob_pre_status_pane

0xa766,	// (0x00085a21) grid_qdial_pane

0xa6b3,	// (0x0008596e) listscroll_mce_pane

0xa6b3,	// (0x0008596e) bg_notes_pane

0xa770,	// (0x00085a2b) list_notes_pane

0x2638,	// (0x0007d8f3) scroll_pane_cp06

0xa77e,	// (0x00085a39) bg_calc_paper_pane

0x2647,	// (0x0007d902) list_calc_pane

0xa792,	// (0x00085a4d) bg_calc_display_pane

0x2661,	// (0x0007d91c) calc_display_pane_t1

0x2676,	// (0x0007d931) calc_display_pane_t2

0x268b,	// (0x0007d946) calc_display_pane_t3

0x0002,

0xf151,	// (0x0008a40c) calc_display_pane_t

0x269d,	// (0x0007d958) cell_calc_pane_ParamLimits

0x269d,	// (0x0007d958) cell_calc_pane

0xa79e,	// (0x00085a59) bg_calc_paper_pane_g1

0xa7aa,	// (0x00085a65) bg_calc_paper_pane_g2

0xa7b6,	// (0x00085a71) bg_calc_paper_pane_g3

0xa7c2,	// (0x00085a7d) bg_calc_paper_pane_g4

0xa7ce,	// (0x00085a89) bg_calc_paper_pane_g5

0x26ca,	// (0x0007d985) bg_calc_paper_pane_g6

0x26db,	// (0x0007d996) bg_calc_paper_pane_g7

0x26ec,	// (0x0007d9a7) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0008a413) bg_calc_paper_pane_g

0x26fd,	// (0x0007d9b8) calc_bg_paper_pane_g9

0x270e,	// (0x0007d9c9) list_calc_item_pane_ParamLimits

0x270e,	// (0x0007d9c9) list_calc_item_pane

0xa7da,	// (0x00085a95) list_calc_item_pane_g1

0x273e,	// (0x0007d9f9) list_calc_item_pane_t1_ParamLimits

0x273e,	// (0x0007d9f9) list_calc_item_pane_t1

0x2750,	// (0x0007da0b) list_calc_item_pane_t2_ParamLimits

0x2750,	// (0x0007da0b) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0008a424) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0008a424) list_calc_item_pane_t

0xa7e7,	// (0x00085aa2) cell_calc_pane_g1

0xa7f1,	// (0x00085aac) grid_highlight_pane_cp02

0xa813,	// (0x00085ace) bg_calc_display_pane_g1

0x2780,	// (0x0007da3b) bg_calc_display_pane_g2

0xa81c,	// (0x00085ad7) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0008a42e) bg_calc_display_pane_g

0x278a,	// (0x0007da45) cell_qdial_pane_ParamLimits

0x278a,	// (0x0007da45) cell_qdial_pane

0x279e,	// (0x0007da59) cell_qdial_pane_g1_ParamLimits

0x279e,	// (0x0007da59) cell_qdial_pane_g1

0x27ab,	// (0x0007da66) cell_qdial_pane_g2_ParamLimits

0x27ab,	// (0x0007da66) cell_qdial_pane_g2

0xa825,	// (0x00085ae0) cell_qdial_pane_g3_ParamLimits

0xa825,	// (0x00085ae0) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0008a435) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0008a435) cell_qdial_pane_g

0x27c8,	// (0x0007da83) cell_qdial_pane_t1_ParamLimits

0x27c8,	// (0x0007da83) cell_qdial_pane_t1

0x27e0,	// (0x0007da9b) cell_qdial_pane_t2_ParamLimits

0x27e0,	// (0x0007da9b) cell_qdial_pane_t2

0x27f3,	// (0x0007daae) cell_qdial_pane_t3_ParamLimits

0x27f3,	// (0x0007daae) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0008a43e) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0008a43e) cell_qdial_pane_t

0xa458,	// (0x00085713) grid_highlight_pane_cp04

0xa831,	// (0x00085aec) thumbnail_qdial_pane_ParamLimits

0xa831,	// (0x00085aec) thumbnail_qdial_pane

0xa88d,	// (0x00085b48) list_help_pane

0xa896,	// (0x00085b51) scroll_pane_cp02

0x2806,	// (0x0007dac1) help_list_pane_t1_ParamLimits

0x2806,	// (0x0007dac1) help_list_pane_t1

0x283d,	// (0x0007daf8) bg_notes_pane_g2

0x2845,	// (0x0007db00) bg_notes_pane_g3

0x284d,	// (0x0007db08) notes_bg_pane_g1

0x2855,	// (0x0007db10) notes_bg_pane_g4

0x285d,	// (0x0007db18) notes_bg_pane_g5

0x2865,	// (0x0007db20) notes_bg_pane_g6

0x286d,	// (0x0007db28) notes_bg_pane_g7

0x2875,	// (0x0007db30) notes_bg_pane_g8

0x287d,	// (0x0007db38) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0008a45c) notes_bg_pane_g

0x2885,	// (0x0007db40) list_notes_text_pane_ParamLimits

0x2885,	// (0x0007db40) list_notes_text_pane

0xa89f,	// (0x00085b5a) list_notes_text_pane_g1

0x0d5f,	// (0x0007c01a) list_notes_text_pane_t1

0x28b1,	// (0x0007db6c) listscroll_cale_week_pane

0x28d6,	// (0x0007db91) bg_cale_heading_pane

0xa8c2,	// (0x00085b7d) bg_cale_pane_cp01

0x28f8,	// (0x0007dbb3) cale_week_corner_pane

0x2912,	// (0x0007dbcd) cale_week_day_heading_pane

0x2934,	// (0x0007dbef) cale_week_scroll_pane_g1

0x2951,	// (0x0007dc0c) cale_week_scroll_pane_g2

0x2964,	// (0x0007dc1f) cale_week_scroll_pane_g3

0x2977,	// (0x0007dc32) cale_week_scroll_pane_g4

0x298a,	// (0x0007dc45) cale_week_scroll_pane_g5

0x299d,	// (0x0007dc58) cale_week_scroll_pane_g6

0x29b0,	// (0x0007dc6b) cale_week_scroll_pane_g7

0x29c3,	// (0x0007dc7e) cale_week_scroll_pane_g8

0x29d8,	// (0x0007dc93) cale_week_scroll_pane_g9

0x29eb,	// (0x0007dca6) cale_week_scroll_pane_g10

0x29fe,	// (0x0007dcb9) cale_week_scroll_pane_g11

0x2a11,	// (0x0007dccc) cale_week_scroll_pane_g12

0x2a28,	// (0x0007dce3) cale_week_scroll_pane_g13

0x2a43,	// (0x0007dcfe) cale_week_scroll_pane_g14

0x2a5e,	// (0x0007dd19) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0008a46b) cale_week_scroll_pane_g

0x2a8e,	// (0x0007dd49) cale_week_time_pane

0x2aa3,	// (0x0007dd5e) grid_cale_week_pane

0xa8f1,	// (0x00085bac) scroll_pane_cp08

0x2ac4,	// (0x0007dd7f) cell_cale_week_pane_ParamLimits

0x2ac4,	// (0x0007dd7f) cell_cale_week_pane

0x2b28,	// (0x0007dde3) cale_week_day_heading_pane_t1

0x2b63,	// (0x0007de1e) cale_week_day_heading_pane_t2

0x2b9e,	// (0x0007de59) cale_week_day_heading_pane_t3

0x2bd9,	// (0x0007de94) cale_week_day_heading_pane_t4

0x2c14,	// (0x0007decf) cale_week_day_heading_pane_t5

0x2c4f,	// (0x0007df0a) cale_week_day_heading_pane_t6

0x2c8a,	// (0x0007df45) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0008a48c) cale_week_day_heading_pane_t

0xa90e,	// (0x00085bc9) bg_cale_side_pane

0x2cc5,	// (0x0007df80) cale_week_time_pane_t1

0x2cdf,	// (0x0007df9a) cale_week_time_pane_t2

0x2cf9,	// (0x0007dfb4) cale_week_time_pane_t3

0x2d13,	// (0x0007dfce) cale_week_time_pane_t4

0x2d2d,	// (0x0007dfe8) cale_week_time_pane_t5

0x2d47,	// (0x0007e002) cale_week_time_pane_t6

0x2d67,	// (0x0007e022) cale_week_time_pane_t7

0x2d8b,	// (0x0007e046) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0008a49b) cale_week_time_pane_t

0x2daf,	// (0x0007e06a) cell_cale_week_pane_g2

0x2dd3,	// (0x0007e08e) cell_cale_week_pane_g3_ParamLimits

0x2dd3,	// (0x0007e08e) cell_cale_week_pane_g3

0xa91c,	// (0x00085bd7) grid_highlight_pane_cp07

0xa924,	// (0x00085bdf) listscroll_gms_pane

0xa92e,	// (0x00085be9) grid_gms_pane

0xa937,	// (0x00085bf2) listscroll_gms_pane_g1

0xa93f,	// (0x00085bfa) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0008a4ac) listscroll_gms_pane_g

0x2deb,	// (0x0007e0a6) scroll_pane_cp010

0x2df6,	// (0x0007e0b1) cell_gms_pane_ParamLimits

0x2df6,	// (0x0007e0b1) cell_gms_pane

0x2e06,	// (0x0007e0c1) cell_gms_pane_g1

0xa947,	// (0x00085c02) cell_gms_pane_g2

0xa94f,	// (0x00085c0a) cell_gms_pane_g3

0xa958,	// (0x00085c13) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0008a4b1) cell_gms_pane_g

0xa961,	// (0x00085c1c) grid_highlight_pane_cp09

0x5214,	// (0x000804cf) phob_pre_status_pane_g1

0x521c,	// (0x000804d7) phob_pre_status_pane_g2

0x5224,	// (0x000804df) phob_pre_status_pane_g3

0x522c,	// (0x000804e7) phob_pre_status_pane_g4

0x0004,

0xf5ef,	// (0x0008a8aa) phob_pre_status_pane_g

0x523c,	// (0x000804f7) phob_pre_status_pane_t1

0x524c,	// (0x00080507) phob_pre_status_pane_t2

0x525c,	// (0x00080517) phob_pre_status_pane_t3

0x0002,

0xf5fa,	// (0x0008a8b5) phob_pre_status_pane_t

0xa969,	// (0x00085c24) bg_list_pane_cp05

0x2e16,	// (0x0007e0d1) grid_vorec_pane

0x2e20,	// (0x0007e0db) vorec_t1

0x2e2e,	// (0x0007e0e9) vorec_t2

0x2e3c,	// (0x0007e0f7) vorec_t3

0x2e4a,	// (0x0007e105) vorec_t4

0xa015,	// (0x000852d0) vorec_t5

0xa023,	// (0x000852de) vorec_t6

0x0004,

0xf1ff,	// (0x0008a4ba) vorec_t

0xa031,	// (0x000852ec) wait_bar_pane_cp01

0x2e66,	// (0x0007e121) cell_vorec_pane_ParamLimits

0x2e66,	// (0x0007e121) cell_vorec_pane

0x2e79,	// (0x0007e134) cell_vorec_pane_g1

0xa458,	// (0x00085713) grid_highlight_pane_cp05

0x2e93,	// (0x0007e14e) cams_zoom_pane

0x2e9f,	// (0x0007e15a) image_vga_pane

0x2eae,	// (0x0007e169) main_camera_pane_g1

0x2ebc,	// (0x0007e177) main_camera_pane_g2

0x2ec8,	// (0x0007e183) main_camera_pane_g3

0x2ed4,	// (0x0007e18f) main_camera_pane_g4

0x2ee0,	// (0x0007e19b) main_camera_pane_g5

0x2eec,	// (0x0007e1a7) main_camera_pane_g6

0x2ef8,	// (0x0007e1b3) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0008a4c5) main_camera_pane_g

0x2f04,	// (0x0007e1bf) main_camera_pane_t1

0x2f16,	// (0x0007e1d1) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0008a4d6) main_camera_pane_t

0x2f37,	// (0x0007e1f2) cams_zoom_pane_cp_ParamLimits

0x2f37,	// (0x0007e1f2) cams_zoom_pane_cp

0x2f5b,	// (0x0007e216) image_cif_pane_ParamLimits

0x2f5b,	// (0x0007e216) image_cif_pane

0x2f79,	// (0x0007e234) image_subqcif_pane

0x2f81,	// (0x0007e23c) main_video_pane_g1_ParamLimits

0x2f81,	// (0x0007e23c) main_video_pane_g1

0x2fa1,	// (0x0007e25c) main_video_pane_g2_ParamLimits

0x2fa1,	// (0x0007e25c) main_video_pane_g2

0x2fd1,	// (0x0007e28c) main_video_pane_g3_ParamLimits

0x2fd1,	// (0x0007e28c) main_video_pane_g3

0x2ffa,	// (0x0007e2b5) main_video_pane_g4_ParamLimits

0x2ffa,	// (0x0007e2b5) main_video_pane_g4

0x3023,	// (0x0007e2de) main_video_pane_g5_ParamLimits

0x3023,	// (0x0007e2de) main_video_pane_g5

0xa97d,	// (0x00085c38) main_video_pane_g6_ParamLimits

0xa97d,	// (0x00085c38) main_video_pane_g6

0x0006,

0xf220,	// (0x0008a4db) main_video_pane_g_ParamLimits

0xf220,	// (0x0008a4db) main_video_pane_g

0x3045,	// (0x0007e300) main_video_pane_t1_ParamLimits

0x3045,	// (0x0007e300) main_video_pane_t1

0xa997,	// (0x00085c52) cams_zoom_pane_g1

0xa9a0,	// (0x00085c5b) cams_zoom_pane_g2

0xa9a9,	// (0x00085c64) cams_zoom_pane_g3

0xaa0d,	// (0x00085cc8) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0008a4ea) cams_zoom_pane_g

0x308f,	// (0x0007e34a) grid_cams_pane

0x309d,	// (0x0007e358) linegrid_cams_pane

0x30ab,	// (0x0007e366) cell_cams_pane_ParamLimits

0x30ab,	// (0x0007e366) cell_cams_pane

0xaa16,	// (0x00085cd1) cams_burst_image_pane

0xaa1e,	// (0x00085cd9) cell_cams_pane_g1

0xa458,	// (0x00085713) grid_highlight_pane_cp03

0xa7e7,	// (0x00085aa2) mp_bg_pane_g1

0xa458,	// (0x00085713) bg_list_pane_cp03

0xc772,	// (0x00087a2d) bg_mp_pane

0xc77a,	// (0x00087a35) grid_mp_pane

0xc782,	// (0x00087a3d) media_player_g1

0xc78a,	// (0x00087a45) media_player_t1

0xc798,	// (0x00087a53) media_player_t2

0xc7a6,	// (0x00087a61) media_player_t3

0xc7b4,	// (0x00087a6f) media_player_t4

0xc7c2,	// (0x00087a7d) media_player_t5

0xc7d0,	// (0x00087a8b) media_player_t6

0xc7de,	// (0x00087a99) media_player_t7

0x0006,

0xf5d9,	// (0x0008a894) media_player_t

0xc7ec,	// (0x00087aa7) wait_bar_pane_cp02

0xf5be,	// (0x0008a879) main_usb_pane_t

0x520b,	// (0x000804c6) cell_mp_pane

0xa7e7,	// (0x00085aa2) cell_mp_pane_g1

0xa458,	// (0x00085713) grid_highlight_pane_cp06

0xaa26,	// (0x00085ce1) grid_skin_colour_pane

0xaa2e,	// (0x00085ce9) list_highlight_pane_cp03

0x30be,	// (0x0007e379) skin_g1

0xaa36,	// (0x00085cf1) skin_t1

0xaa45,	// (0x00085d00) skin_t2

0x0001,

0x0047,	// (0x0007b302) skin_t

0x30c8,	// (0x0007e383) cell_skin_colour_pane_ParamLimits

0x30c8,	// (0x0007e383) cell_skin_colour_pane

0xaa53,	// (0x00085d0e) cell_skin_colour_pane_g1

0x314c,	// (0x0007e407) call_video_g1_ParamLimits

0x314c,	// (0x0007e407) call_video_g1

0x315c,	// (0x0007e417) call_video_g2_ParamLimits

0x315c,	// (0x0007e417) call_video_g2

0x0001,

0xf264,	// (0x0008a51f) call_video_g_ParamLimits

0xf264,	// (0x0008a51f) call_video_g

0x31b6,	// (0x0007e471) call_video_uplink_pane_cp1_ParamLimits

0x31b6,	// (0x0007e471) call_video_uplink_pane_cp1

0xaa65,	// (0x00085d20) call_video_uplink_pane_cp2

0x3282,	// (0x0007e53d) video_down_crop_pane_ParamLimits

0x3282,	// (0x0007e53d) video_down_crop_pane

0x3374,	// (0x0007e62f) video_down_pane_ParamLimits

0x3374,	// (0x0007e62f) video_down_pane

0xaa6d,	// (0x00085d28) video_down_subqcif_pane_ParamLimits

0xaa6d,	// (0x00085d28) video_down_subqcif_pane

0xaa85,	// (0x00085d40) video_down_subqcif_pane_cp_ParamLimits

0xaa85,	// (0x00085d40) video_down_subqcif_pane_cp

0xaaab,	// (0x00085d66) im_reading_pane_ParamLimits

0xaaab,	// (0x00085d66) im_reading_pane

0x3494,	// (0x0007e74f) im_writing_pane_ParamLimits

0x3494,	// (0x0007e74f) im_writing_pane

0x34b2,	// (0x0007e76d) im_reading_pane_t1

0xaac5,	// (0x00085d80) list_im_pane

0xaad6,	// (0x00085d91) scroll_pane_cp07

0x350a,	// (0x0007e7c5) im_writing_pane_t1_ParamLimits

0x350a,	// (0x0007e7c5) im_writing_pane_t1

0xaaef,	// (0x00085daa) im_writing_pane_t2_ParamLimits

0xaaef,	// (0x00085daa) im_writing_pane_t2

0x0001,

0xf26e,	// (0x0008a529) im_writing_pane_t_ParamLimits

0xf26e,	// (0x0008a529) im_writing_pane_t

0xa458,	// (0x00085713) input_focus_pane_cp04

0xa458,	// (0x00085713) input_focus_pane_cp05

0x351c,	// (0x0007e7d7) list_im_single_pane_ParamLimits

0x351c,	// (0x0007e7d7) list_im_single_pane

0x3543,	// (0x0007e7fe) list_single_im_pane_t1

0x51cf,	// (0x0008048a) blid_accuracy_pane

0x51d7,	// (0x00080492) blid_compass_pane

0x51e1,	// (0x0008049c) main_location_t1

0x51ef,	// (0x000804aa) main_location_t2

0x51fd,	// (0x000804b8) main_location_t3

0x0002,

0xf5e8,	// (0x0008a8a3) main_location_t

0xa458,	// (0x00085713) aid_levels_location

0xa7e7,	// (0x00085aa2) blid_accuracy_pane_g1

0xa7e7,	// (0x00085aa2) blid_accuracy_pane_g2

0x0001,

0xf2d0,	// (0x0008a58b) blid_accuracy_pane_g

0xab37,	// (0x00085df2) wml_content_pane

0xab7e,	// (0x00085e39) wml_button_pane_ParamLimits

0xab7e,	// (0x00085e39) wml_button_pane

0x3552,	// (0x0007e80d) wml_list_single_large_pane_ParamLimits

0x3552,	// (0x0007e80d) wml_list_single_large_pane

0x357d,	// (0x0007e838) wml_list_single_medium_pane_ParamLimits

0x357d,	// (0x0007e838) wml_list_single_medium_pane

0x35af,	// (0x0007e86a) wml_list_single_small_pane_ParamLimits

0x35af,	// (0x0007e86a) wml_list_single_small_pane

0xab92,	// (0x00085e4d) wml_selection_box_pane_ParamLimits

0xab92,	// (0x00085e4d) wml_selection_box_pane

0xaba5,	// (0x00085e60) wml_list_single_pane_t1

0xabb4,	// (0x00085e6f) wml_list_single_medium_pane_t1

0xabc3,	// (0x00085e7e) wml_list_single_large_pane_t1

0xabd2,	// (0x00085e8d) input_focus_pane_cp02_ParamLimits

0xabd2,	// (0x00085e8d) input_focus_pane_cp02

0xabe5,	// (0x00085ea0) wml_selection_box_pane_g1

0xabee,	// (0x00085ea9) wml_selection_box_pane_t1_ParamLimits

0xabee,	// (0x00085ea9) wml_selection_box_pane_t1

0xa6b3,	// (0x0008596e) bg_wml_button_pane_ParamLimits

0xa6b3,	// (0x0008596e) bg_wml_button_pane

0xac06,	// (0x00085ec1) wml_button_pane_g1

0xac0e,	// (0x00085ec9) wml_button_pane_t1

0xac06,	// (0x00085ec1) wml_button_bg_pane_g1

0xac1e,	// (0x00085ed9) wml_button_bg_pane_g2

0xac26,	// (0x00085ee1) wml_button_bg_pane_g3

0xac2e,	// (0x00085ee9) wml_button_bg_pane_g4

0xac36,	// (0x00085ef1) wml_button_bg_pane_g5

0xac3e,	// (0x00085ef9) wml_button_bg_pane_g6

0xac46,	// (0x00085f01) wml_button_bg_pane_g7

0xac4e,	// (0x00085f09) wml_button_bg_pane_g8

0xac56,	// (0x00085f11) wml_button_bg_pane_g9

0x0008,

0xf273,	// (0x0008a52e) wml_button_bg_pane_g

0x35ec,	// (0x0007e8a7) bg_list_pane_cp02

0xac5e,	// (0x00085f19) mce_header_pane_ParamLimits

0xac5e,	// (0x00085f19) mce_header_pane

0xac74,	// (0x00085f2f) mce_icon_pane

0xac74,	// (0x00085f2f) mce_image_pane

0xac7d,	// (0x00085f38) mce_text_pane_ParamLimits

0xac7d,	// (0x00085f38) mce_text_pane

0x35f6,	// (0x0007e8b1) scroll_pane_cp03

0xab76,	// (0x00085e31) scroll_pane_cp04

0xac90,	// (0x00085f4b) scroll_pane_cp05_ParamLimits

0xac90,	// (0x00085f4b) scroll_pane_cp05

0x3600,	// (0x0007e8bb) mce_header_field_pane_ParamLimits

0x3600,	// (0x0007e8bb) mce_header_field_pane

0x3620,	// (0x0007e8db) mce_header_field_pane_2_ParamLimits

0x3620,	// (0x0007e8db) mce_header_field_pane_2

0x3636,	// (0x0007e8f1) mce_header_field_pane_3

0x363e,	// (0x0007e8f9) list_single_mce_message_pane_ParamLimits

0x363e,	// (0x0007e8f9) list_single_mce_message_pane

0x366c,	// (0x0007e927) list_single_mce_smart_pane_ParamLimits

0x366c,	// (0x0007e927) list_single_mce_smart_pane

0xac9c,	// (0x00085f57) input_focus_pane_cp03

0xaca5,	// (0x00085f60) list_header_data_pane

0x36a5,	// (0x0007e960) mce_header_field_pane_t1

0x36b3,	// (0x0007e96e) list_single_mce_header_pane_ParamLimits

0x36b3,	// (0x0007e96e) list_single_mce_header_pane

0xacad,	// (0x00085f68) list_single_mce_header_pane_t1

0xacbc,	// (0x00085f77) list_single_mce_message_pane_g1

0xacc4,	// (0x00085f7f) list_single_mce_message_pane_t1

0x3709,	// (0x0007e9c4) bg_cale_heading_pane_cp01_ParamLimits

0x3709,	// (0x0007e9c4) bg_cale_heading_pane_cp01

0xacd2,	// (0x00085f8d) bg_cale_pane_cp02_ParamLimits

0xacd2,	// (0x00085f8d) bg_cale_pane_cp02

0x374c,	// (0x0007ea07) cale_month_corner_pane

0x3766,	// (0x0007ea21) cale_month_day_heading_pane_ParamLimits

0x3766,	// (0x0007ea21) cale_month_day_heading_pane

0x37c1,	// (0x0007ea7c) cale_month_pane_g1_ParamLimits

0x37c1,	// (0x0007ea7c) cale_month_pane_g1

0x37f9,	// (0x0007eab4) cale_month_pane_g2_ParamLimits

0x37f9,	// (0x0007eab4) cale_month_pane_g2

0x3824,	// (0x0007eadf) cale_month_pane_g3_ParamLimits

0x3824,	// (0x0007eadf) cale_month_pane_g3

0x3874,	// (0x0007eb2f) cale_month_pane_g4_ParamLimits

0x3874,	// (0x0007eb2f) cale_month_pane_g4

0x38c4,	// (0x0007eb7f) cale_month_pane_g5_ParamLimits

0x38c4,	// (0x0007eb7f) cale_month_pane_g5

0x3914,	// (0x0007ebcf) cale_month_pane_g6_ParamLimits

0x3914,	// (0x0007ebcf) cale_month_pane_g6

0x3964,	// (0x0007ec1f) cale_month_pane_g7_ParamLimits

0x3964,	// (0x0007ec1f) cale_month_pane_g7

0x39cc,	// (0x0007ec87) cale_month_pane_g8_ParamLimits

0x39cc,	// (0x0007ec87) cale_month_pane_g8

0x3a34,	// (0x0007ecef) cale_month_pane_g9_ParamLimits

0x3a34,	// (0x0007ecef) cale_month_pane_g9

0x3a92,	// (0x0007ed4d) cale_month_pane_g10_ParamLimits

0x3a92,	// (0x0007ed4d) cale_month_pane_g10

0x3af0,	// (0x0007edab) cale_month_pane_g11_ParamLimits

0x3af0,	// (0x0007edab) cale_month_pane_g11

0x3b44,	// (0x0007edff) cale_month_pane_g12_ParamLimits

0x3b44,	// (0x0007edff) cale_month_pane_g12

0x3b9a,	// (0x0007ee55) cale_month_pane_g13_ParamLimits

0x3b9a,	// (0x0007ee55) cale_month_pane_g13

0x000c,

0xf286,	// (0x0008a541) cale_month_pane_g_ParamLimits

0xf286,	// (0x0008a541) cale_month_pane_g

0x3bf0,	// (0x0007eeab) cale_month_week_pane

0x3c05,	// (0x0007eec0) grid_cale_month_pane_ParamLimits

0x3c05,	// (0x0007eec0) grid_cale_month_pane

0x3c57,	// (0x0007ef12) cale_month_day_heading_pane_t1

0x3cdd,	// (0x0007ef98) cale_month_day_heading_pane_t2

0x3d6e,	// (0x0007f029) cale_month_day_heading_pane_t3

0x3dff,	// (0x0007f0ba) cale_month_day_heading_pane_t4

0x3e90,	// (0x0007f14b) cale_month_day_heading_pane_t5

0x3f21,	// (0x0007f1dc) cale_month_day_heading_pane_t6

0x3fbe,	// (0x0007f279) cale_month_day_heading_pane_t7

0x0006,

0xf2a1,	// (0x0008a55c) cale_month_day_heading_pane_t

0xa90e,	// (0x00085bc9) bg_cale_side_pane_cp01

0x4067,	// (0x0007f322) cale_month_week_pane_t1

0x4080,	// (0x0007f33b) cale_month_week_pane_t2

0x4099,	// (0x0007f354) cale_month_week_pane_t3

0x40b2,	// (0x0007f36d) cale_month_week_pane_t4

0x40cd,	// (0x0007f388) cale_month_week_pane_t5

0x40ee,	// (0x0007f3a9) cale_month_week_pane_t6

0x0005,

0xf2b0,	// (0x0008a56b) cale_month_week_pane_t

0x410f,	// (0x0007f3ca) cell_cale_month_pane_ParamLimits

0x410f,	// (0x0007f3ca) cell_cale_month_pane

0x4235,	// (0x0007f4f0) cell_cale_month_pane_g1

0x425b,	// (0x0007f516) cell_cale_month_pane_t1_ParamLimits

0x425b,	// (0x0007f516) cell_cale_month_pane_t1

0xa91c,	// (0x00085bd7) grid_highlight_pane_cp08

0xa7e7,	// (0x00085aa2) main_smil_g1

0x4287,	// (0x0007f542) smil_status_pane

0xad11,	// (0x00085fcc) smil_text_pane

0xc652,	// (0x0008790d) bg_popup_call3_rect_pane_g8

0xc65a,	// (0x00087915) bg_popup_call3_rect_pane_g9

0x0008,

0xf569,	// (0x0008a824) bg_popup_call3_rect_pane_g

0xc8e1,	// (0x00087b9c) smil_status_volume_pane_g1

0xad1b,	// (0x00085fd6) smil_status_pane_t1

0x55f8,	// (0x000808b3) volume_smil_pane

0xad32,	// (0x00085fed) list_smil_text_pane

0x429a,	// (0x0007f555) scroll_pane_cp011

0x42a5,	// (0x0007f560) smil_text_list_pane_t1_ParamLimits

0x42a5,	// (0x0007f560) smil_text_list_pane_t1

0x4332,	// (0x0007f5ed) aid_volume_smil_ParamLimits

0x4332,	// (0x0007f5ed) aid_volume_smil

0xa7e7,	// (0x00085aa2) smil_volume_pane_g1

0xa7e7,	// (0x00085aa2) smil_volume_pane_g2

0x0001,

0xf2d0,	// (0x0008a58b) smil_volume_pane_g

0x28b1,	// (0x0007db6c) listscroll_cale_day_pane

0xad3c,	// (0x00085ff7) bg_cale_pane

0xad54,	// (0x0008600f) list_cale_pane

0xad77,	// (0x00086032) scroll_pane_cp09

0xad88,	// (0x00086043) cale_bg_pane_g1

0xad90,	// (0x0008604b) cale_bg_pane_g2

0xad98,	// (0x00086053) cale_bg_pane_g3

0xada0,	// (0x0008605b) cale_bg_pane_g4

0xada8,	// (0x00086063) cale_bg_pane_g5

0xadb0,	// (0x0008606b) cale_bg_pane_g6

0xadb8,	// (0x00086073) cale_bg_pane_g7

0xadc0,	// (0x0008607b) cale_bg_pane_g8

0xadc8,	// (0x00086083) cale_bg_pane_g9

0x0008,

0xf2d5,	// (0x0008a590) cale_bg_pane_g

0x435c,	// (0x0007f617) list_cale_time_pane_ParamLimits

0x435c,	// (0x0007f617) list_cale_time_pane

0xadd0,	// (0x0008608b) list_cale_time_pane_g1_ParamLimits

0xadd0,	// (0x0008608b) list_cale_time_pane_g1

0xaddc,	// (0x00086097) list_cale_time_pane_g2_ParamLimits

0xaddc,	// (0x00086097) list_cale_time_pane_g2

0x4384,	// (0x0007f63f) list_cale_time_pane_g3_ParamLimits

0x4384,	// (0x0007f63f) list_cale_time_pane_g3

0x4392,	// (0x0007f64d) list_cale_time_pane_g4_ParamLimits

0x4392,	// (0x0007f64d) list_cale_time_pane_g4

0x43a0,	// (0x0007f65b) list_cale_time_pane_g5_ParamLimits

0x43a0,	// (0x0007f65b) list_cale_time_pane_g5

0x0005,

0xf2e8,	// (0x0008a5a3) list_cale_time_pane_g_ParamLimits

0xf2e8,	// (0x0008a5a3) list_cale_time_pane_g

0xadf6,	// (0x000860b1) list_cale_time_pane_t1_ParamLimits

0xadf6,	// (0x000860b1) list_cale_time_pane_t1

0xae1e,	// (0x000860d9) list_cale_time_pane_t2_ParamLimits

0xae1e,	// (0x000860d9) list_cale_time_pane_t2

0x467f,	// (0x0007f93a) aid_blid_cardinal_pane

0x46c1,	// (0x0007f97c) compass_pane_t4

0xae46,	// (0x00086101) list_cale_time_pane_t4_ParamLimits

0xae46,	// (0x00086101) list_cale_time_pane_t4

0x46cf,	// (0x0007f98a) compass_pane_t5

0x46df,	// (0x0007f99a) compass_pane_t6

0x46ed,	// (0x0007f9a8) compass_pane_t7

0xb2ca,	// (0x00086585) navi_pane_cc_t1

0xb4b5,	// (0x00086770) aid_phob_thumbnail_center_pane

0x4cd0,	// (0x0007ff8b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f5,	// (0x0008a5b0) list_cale_time_pane_t_ParamLimits

0xf2f5,	// (0x0008a5b0) list_cale_time_pane_t

0xa0af,	// (0x0008536a) bg_popup_window_pane_cp02_ParamLimits

0xa0af,	// (0x0008536a) bg_popup_window_pane_cp02

0xae6e,	// (0x00086129) heading_pane_cp01_ParamLimits

0xae6e,	// (0x00086129) heading_pane_cp01

0xae7a,	// (0x00086135) loc_req_pane_ParamLimits

0xae7a,	// (0x00086135) loc_req_pane

0xae8a,	// (0x00086145) loc_type_pane_ParamLimits

0xae8a,	// (0x00086145) loc_type_pane

0xae9c,	// (0x00086157) loc_type_pane_t1_ParamLimits

0xae9c,	// (0x00086157) loc_type_pane_t1

0xaeae,	// (0x00086169) loc_type_pane_t2_ParamLimits

0xaeae,	// (0x00086169) loc_type_pane_t2

0xaec0,	// (0x0008617b) loc_type_pane_t3_ParamLimits

0xaec0,	// (0x0008617b) loc_type_pane_t3

0x0002,

0xf2fc,	// (0x0008a5b7) loc_type_pane_t_ParamLimits

0xf2fc,	// (0x0008a5b7) loc_type_pane_t

0xaed2,	// (0x0008618d) list_loc_req_pane

0xaedc,	// (0x00086197) scroll_pane_cp012

0x0e8e,	// (0x0007c149) list_single_loc_request_popup_menu_pane_ParamLimits

0x0e8e,	// (0x0007c149) list_single_loc_request_popup_menu_pane

0xaee7,	// (0x000861a2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaee7,	// (0x000861a2) list_single_loc_request_popup_menu_pane_g1

0xaef3,	// (0x000861ae) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaef3,	// (0x000861ae) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf303,	// (0x0008a5be) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf303,	// (0x0008a5be) list_single_loc_request_popup_menu_pane_g

0xaeff,	// (0x000861ba) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaeff,	// (0x000861ba) list_single_loc_request_popup_menu_pane_t1

0x43ae,	// (0x0007f669) bg_popup_window_pane_cp03_ParamLimits

0x43ae,	// (0x0007f669) bg_popup_window_pane_cp03

0x43bc,	// (0x0007f677) heading_loc_req_pane_ParamLimits

0x43bc,	// (0x0007f677) heading_loc_req_pane

0x43c8,	// (0x0007f683) popup_dyc_status_message_window_g1_ParamLimits

0x43c8,	// (0x0007f683) popup_dyc_status_message_window_g1

0x43d4,	// (0x0007f68f) popup_dyc_status_message_window_t1_ParamLimits

0x43d4,	// (0x0007f68f) popup_dyc_status_message_window_t1

0x43e6,	// (0x0007f6a1) popup_dyc_status_message_window_t2_ParamLimits

0x43e6,	// (0x0007f6a1) popup_dyc_status_message_window_t2

0x43f8,	// (0x0007f6b3) popup_dyc_status_message_window_t3_ParamLimits

0x43f8,	// (0x0007f6b3) popup_dyc_status_message_window_t3

0x0002,

0xf308,	// (0x0008a5c3) popup_dyc_status_message_window_t_ParamLimits

0xf308,	// (0x0008a5c3) popup_dyc_status_message_window_t

0xa458,	// (0x00085713) bg_heading_pane_cp01

0xaf15,	// (0x000861d0) heading_loc_req_pane_g1

0xaf1d,	// (0x000861d8) heading_loc_req_pane_g2

0xaf25,	// (0x000861e0) heading_loc_req_pane_g3

0x0002,

0xf30f,	// (0x0008a5ca) heading_loc_req_pane_g

0xaf2d,	// (0x000861e8) heading_loc_req_pane_t1

0xaf3c,	// (0x000861f7) bg_popup_sub_pane_cp01_ParamLimits

0xaf3c,	// (0x000861f7) bg_popup_sub_pane_cp01

0xaf4a,	// (0x00086205) popup_cale_events_window_g1_ParamLimits

0xaf4a,	// (0x00086205) popup_cale_events_window_g1

0xaf6a,	// (0x00086225) popup_cale_events_window_g2_ParamLimits

0xaf6a,	// (0x00086225) popup_cale_events_window_g2

0x0001,

0xf343,	// (0x0008a5fe) popup_cale_events_window_g_ParamLimits

0xf343,	// (0x0008a5fe) popup_cale_events_window_g

0xaf8a,	// (0x00086245) popup_cale_events_window_t1_ParamLimits

0xaf8a,	// (0x00086245) popup_cale_events_window_t1

0xafa8,	// (0x00086263) popup_cale_events_window_t2_ParamLimits

0xafa8,	// (0x00086263) popup_cale_events_window_t2

0xafe6,	// (0x000862a1) popup_cale_events_window_t3_ParamLimits

0xafe6,	// (0x000862a1) popup_cale_events_window_t3

0xb020,	// (0x000862db) popup_cale_events_window_t4_ParamLimits

0xb020,	// (0x000862db) popup_cale_events_window_t4

0x0003,

0xf348,	// (0x0008a603) popup_cale_events_window_t_ParamLimits

0xf348,	// (0x0008a603) popup_cale_events_window_t

0x4422,	// (0x0007f6dd) call_type_pane

0xb3d9,	// (0x00086694) popup_call_status_window_g1

0x442e,	// (0x0007f6e9) popup_call_status_window_g2

0x443a,	// (0x0007f6f5) popup_call_status_window_g3

0x0002,

0xf351,	// (0x0008a60c) popup_call_status_window_g

0xb056,	// (0x00086311) call_type_pane_g1

0xb05f,	// (0x0008631a) call_type_pane_g2

0x0001,

0xf358,	// (0x0008a613) call_type_pane_g

0xa458,	// (0x00085713) bg_popup_sub_pane_cp02

0xb068,	// (0x00086323) listscroll_popup_wml_pane

0xb070,	// (0x0008632b) list_wml_pane

0xb07a,	// (0x00086335) scroll_pane_cp013

0xb085,	// (0x00086340) list_single_graphic_popup_wml_pane_ParamLimits

0xb085,	// (0x00086340) list_single_graphic_popup_wml_pane

0xa7e7,	// (0x00085aa2) list_single_graphic_popup_wml_pane_g1

0xb099,	// (0x00086354) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35d,	// (0x0008a618) list_single_graphic_popup_wml_pane_g

0xb0a1,	// (0x0008635c) list_single_graphic_popup_wml_pane_t1

0xb0b7,	// (0x00086372) aid_call_pane

0xa6ab,	// (0x00085966) popup_clock_analogue_window_g1

0xa6ab,	// (0x00085966) popup_clock_analogue_window_g2

0x4446,	// (0x0007f701) popup_clock_analogue_window_g3

0x4446,	// (0x0007f701) popup_clock_analogue_window_g4

0xa7e7,	// (0x00085aa2) popup_clock_analogue_window_g5

0x0004,

0xf362,	// (0x0008a61d) popup_clock_analogue_window_g

0x444e,	// (0x0007f709) popup_clock_analogue_window_t1

0x445c,	// (0x0007f717) clock_digital_number_pane_ParamLimits

0x445c,	// (0x0007f717) clock_digital_number_pane

0x4468,	// (0x0007f723) clock_digital_number_pane_cp02_ParamLimits

0x4468,	// (0x0007f723) clock_digital_number_pane_cp02

0x4474,	// (0x0007f72f) clock_digital_number_pane_cp03_ParamLimits

0x4474,	// (0x0007f72f) clock_digital_number_pane_cp03

0x4480,	// (0x0007f73b) clock_digital_number_pane_cp04_ParamLimits

0x4480,	// (0x0007f73b) clock_digital_number_pane_cp04

0x448c,	// (0x0007f747) clock_digital_separator_pane_ParamLimits

0x448c,	// (0x0007f747) clock_digital_separator_pane

0x4498,	// (0x0007f753) popup_clock_digital_window_t1

0xa7e7,	// (0x00085aa2) clock_digital_number_pane_g1

0xa7e7,	// (0x00085aa2) clock_digital_number_pane_g2

0x0001,

0xf2d0,	// (0x0008a58b) clock_digital_number_pane_g

0xa7e7,	// (0x00085aa2) clock_digital_separator_pane_g1

0xa7e7,	// (0x00085aa2) clock_digital_separator_pane_g2

0x0001,

0xf2d0,	// (0x0008a58b) clock_digital_separator_pane_g

0xa458,	// (0x00085713) bg_popup_window_pane_cp04

0xb0bf,	// (0x0008637a) heading_pane_cp03

0xb0c7,	// (0x00086382) listscroll_popup_gms_pane

0xb0cf,	// (0x0008638a) grid_large_graphic_popup_pane

0xb0d9,	// (0x00086394) listscroll_popup_gms_pane_g1

0xb0e1,	// (0x0008639c) listscroll_popup_gms_pane_g2

0x0001,

0xf36d,	// (0x0008a628) listscroll_popup_gms_pane_g

0xab76,	// (0x00085e31) scroll_pane_cp014

0x44b5,	// (0x0007f770) cell_large_graphic_popup_pane_ParamLimits

0x44b5,	// (0x0007f770) cell_large_graphic_popup_pane

0x44cd,	// (0x0007f788) cell_large_graphic_popup_pane_g1_ParamLimits

0x44cd,	// (0x0007f788) cell_large_graphic_popup_pane_g1

0xb0e9,	// (0x000863a4) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0e9,	// (0x000863a4) cell_large_graphic_popup_pane_g2

0xb0f5,	// (0x000863b0) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0f5,	// (0x000863b0) cell_large_graphic_popup_pane_g3

0xb102,	// (0x000863bd) cell_large_graphic_popup_pane_g4_ParamLimits

0xb102,	// (0x000863bd) cell_large_graphic_popup_pane_g4

0x0003,

0xf372,	// (0x0008a62d) cell_large_graphic_popup_pane_g_ParamLimits

0xf372,	// (0x0008a62d) cell_large_graphic_popup_pane_g

0xb112,	// (0x000863cd) grid_highlight_pane_cp010

0xa7e7,	// (0x00085aa2) bg_popup_call_pane_g1

0xb11c,	// (0x000863d7) list_single_graphic_popup_conf_pane_ParamLimits

0xb11c,	// (0x000863d7) list_single_graphic_popup_conf_pane

0xb12f,	// (0x000863ea) list_highlight_pane_cp01

0xb138,	// (0x000863f3) list_single_graphic_popup_conf_pane_g1

0xb140,	// (0x000863fb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37b,	// (0x0008a636) list_single_graphic_popup_conf_pane_g

0xb148,	// (0x00086403) list_single_graphic_popup_conf_pane_t1

0xb156,	// (0x00086411) linegrid_cams_pane_g1

0x44d9,	// (0x0007f794) linegrid_cams_pane_g2

0xa94f,	// (0x00085c0a) linegrid_cams_pane_g3

0xb15f,	// (0x0008641a) linegrid_cams_pane_g4

0x44e2,	// (0x0007f79d) linegrid_cams_pane_g5

0x44eb,	// (0x0007f7a6) linegrid_cams_pane_g6

0xa958,	// (0x00085c13) linegrid_cams_pane_g7

0x0006,

0xf380,	// (0x0008a63b) linegrid_cams_pane_g

0xb168,	// (0x00086423) popup_clock_analogue_window

0xb168,	// (0x00086423) popup_clock_digital_window

0xa458,	// (0x00085713) popup_phob_thumbnail_window

0xa7e7,	// (0x00085aa2) call_video_uplink_pane_g1

0xb171,	// (0x0008642c) call_video_uplink_pane_g2

0x0001,

0xf38f,	// (0x0008a64a) call_video_uplink_pane_g

0xb179,	// (0x00086434) video_uplink_pane

0xb181,	// (0x0008643c) mce_image_pane_g1

0x44f4,	// (0x0007f7af) mce_image_pane_g2

0x44fc,	// (0x0007f7b7) mce_image_pane_g3

0x4504,	// (0x0007f7bf) mce_image_pane_g4

0x450c,	// (0x0007f7c7) mce_image_pane_g5

0x0004,

0xf394,	// (0x0008a64f) mce_image_pane_g

0xb18b,	// (0x00086446) control_top_pane_stacon_cp01_ParamLimits

0xb18b,	// (0x00086446) control_top_pane_stacon_cp01

0xb19f,	// (0x0008645a) uni_indicator_pane_stacon_cp01_ParamLimits

0xb19f,	// (0x0008645a) uni_indicator_pane_stacon_cp01

0xb1b0,	// (0x0008646b) bg_popup_sub_pane_cp03

0x4514,	// (0x0007f7cf) chi_dic_find_pane

0x451c,	// (0x0007f7d7) listscroll_chi_dic_pane

0x4525,	// (0x0007f7e0) main_pane_chidic_g1

0x4538,	// (0x0007f7f3) chi_dic_find_pane_t1

0xb1ba,	// (0x00086475) find_chidic_pane

0xb1c3,	// (0x0008647e) chi_dic_list_pane_ParamLimits

0xb1c3,	// (0x0008647e) chi_dic_list_pane

0xb1d4,	// (0x0008648f) scroll_pane_cp020

0x4546,	// (0x0007f801) find_chidic_pane_t1

0xa458,	// (0x00085713) input_focus_pane_cp06

0x4555,	// (0x0007f810) list_chi_dic_pane_ParamLimits

0x4555,	// (0x0007f810) list_chi_dic_pane

0x4572,	// (0x0007f82d) list_chi_dic_pane_t1_ParamLimits

0x4572,	// (0x0007f82d) list_chi_dic_pane_t1

0xa458,	// (0x00085713) list_highlight_pane_cp020

0xb1dc,	// (0x00086497) bg_cale_heading_pane_g1

0x4585,	// (0x0007f840) bg_cale_heading_pane_g2

0x458d,	// (0x0007f848) bg_cale_heading_pane_g3

0x4595,	// (0x0007f850) bg_cale_heading_pane_g4

0x459f,	// (0x0007f85a) bg_cale_heading_pane_g5

0x45a9,	// (0x0007f864) bg_cale_heading_pane_g6

0x45b1,	// (0x0007f86c) bg_cale_heading_pane_g7

0x45b9,	// (0x0007f874) bg_cale_heading_pane_g8

0x45c3,	// (0x0007f87e) bg_cale_heading_pane_g9

0x0008,

0xf39f,	// (0x0008a65a) bg_cale_heading_pane_g

0xb1dc,	// (0x00086497) bg_cale_side_pane_g1

0x45cd,	// (0x0007f888) bg_cale_side_pane_g2

0x45d7,	// (0x0007f892) bg_cale_side_pane_g3

0x45e1,	// (0x0007f89c) bg_cale_side_pane_g4

0x45eb,	// (0x0007f8a6) bg_cale_side_pane_g5

0x45f5,	// (0x0007f8b0) bg_cale_side_pane_g6

0x45ff,	// (0x0007f8ba) bg_cale_side_pane_g7

0x4609,	// (0x0007f8c4) bg_cale_side_pane_g8

0x4611,	// (0x0007f8cc) bg_cale_side_pane_g9

0x0008,

0xf3b2,	// (0x0008a66d) bg_cale_side_pane_g

0x4619,	// (0x0007f8d4) popup_call_status_window_ParamLimits

0x4619,	// (0x0007f8d4) popup_call_status_window

0xb1e4,	// (0x0008649f) stacon_top_pane

0xb1ec,	// (0x000864a7) status_pane_ParamLimits

0xb1ec,	// (0x000864a7) status_pane

0xb201,	// (0x000864bc) status_small_pane

0xb209,	// (0x000864c4) control_pane

0xa458,	// (0x00085713) stacon_bottom_pane

0xb211,	// (0x000864cc) list_single_mce_smart_pane_t1_ParamLimits

0xb211,	// (0x000864cc) list_single_mce_smart_pane_t1

0xb224,	// (0x000864df) list_single_mce_smart_pane_t2_ParamLimits

0xb224,	// (0x000864df) list_single_mce_smart_pane_t2

0x0001,

0xf3c5,	// (0x0008a680) list_single_mce_smart_pane_t_ParamLimits

0xf3c5,	// (0x0008a680) list_single_mce_smart_pane_t

0x4625,	// (0x0007f8e0) compass_pane

0x4631,	// (0x0007f8ec) main_location2_pane_t1

0x4645,	// (0x0007f900) main_location2_pane_t2

0x4659,	// (0x0007f914) main_location2_pane_t3

0x0003,

0xf3ca,	// (0x0008a685) main_location2_pane_t

0xb243,	// (0x000864fe) compass_pane_g1_ParamLimits

0xb243,	// (0x000864fe) compass_pane_g1

0x46a3,	// (0x0007f95e) compass_pane_t1

0x46b2,	// (0x0007f96d) compass_pane_t2

0x0005,

0xf3d3,	// (0x0008a68e) compass_pane_t

0x46fd,	// (0x0007f9b8) text_secondary_cp61

0xb2c1,	// (0x0008657c) navi_pane_cams_g5

0xb33d,	// (0x000865f8) navi_pane_im_t1

0xb34b,	// (0x00086606) navi_pane_mp_g1_ParamLimits

0xb34b,	// (0x00086606) navi_pane_mp_g1

0xb35f,	// (0x0008661a) navi_pane_mp_g2_ParamLimits

0xb35f,	// (0x0008661a) navi_pane_mp_g2

0xb36b,	// (0x00086626) navi_pane_mp_g3_ParamLimits

0xb36b,	// (0x00086626) navi_pane_mp_g3

0x0002,

0xf3e7,	// (0x0008a6a2) navi_pane_mp_g_ParamLimits

0xf3e7,	// (0x0008a6a2) navi_pane_mp_g

0xb377,	// (0x00086632) navi_pane_mp_t1

0xb385,	// (0x00086640) navi_pane_mp_t2

0x0002,

0xf3ee,	// (0x0008a6a9) navi_pane_mp_t

0xb3fe,	// (0x000866b9) navi_pane_vt_g1

0xb377,	// (0x00086632) navi_pane_vt_t1

0xb406,	// (0x000866c1) navi_slider_pane

0xa969,	// (0x00085c24) zooming_pane

0xb416,	// (0x000866d1) navi_slider_pane_g1

0x4738,	// (0x0007f9f3) navi_slider_pane_g2

0x0006,

0xf3f5,	// (0x0008a6b0) navi_slider_pane_g

0xb43a,	// (0x000866f5) aid_levels_zoom

0xb442,	// (0x000866fd) zooming_pane_g1

0xb44a,	// (0x00086705) zooming_pane_g2

0xb44a,	// (0x00086705) zooming_pane_g3

0x0002,

0xf404,	// (0x0008a6bf) zooming_pane_g

0xb452,	// (0x0008670d) level_10_zoom

0xb45b,	// (0x00086716) level_11_zoom

0xb464,	// (0x0008671f) level_1_zoom

0xb46d,	// (0x00086728) level_2_zoom

0xb476,	// (0x00086731) level_3_zoom

0xb47f,	// (0x0008673a) level_4_zoom

0xb488,	// (0x00086743) level_5_zoom

0xb491,	// (0x0008674c) level_6_zoom

0xb49a,	// (0x00086755) level_7_zoom

0xb4a3,	// (0x0008675e) level_8_zoom

0xb4ac,	// (0x00086767) level_9_zoom

0xb4bd,	// (0x00086778) popup_phob_thumbnail_window_g1

0xb4c5,	// (0x00086780) popup_phob_thumbnail_window_g2

0x0001,

0xf40b,	// (0x0008a6c6) popup_phob_thumbnail_window_g

0xc7f4,	// (0x00087aaf) level_1_location

0xc7fc,	// (0x00087ab7) level_2_location

0xc804,	// (0x00087abf) level_3_location

0xc80c,	// (0x00087ac7) level_4_location

0xa969,	// (0x00085c24) level_5_location

0x474a,	// (0x0007fa05) mce_icon_pane_g1

0x4752,	// (0x0007fa0d) mce_icon_pane_g2

0x0001,

0xf410,	// (0x0008a6cb) mce_icon_pane_g

0x475a,	// (0x0007fa15) main_mup_pane_g1_ParamLimits

0x475a,	// (0x0007fa15) main_mup_pane_g1

0x4772,	// (0x0007fa2d) main_mup_pane_g2_ParamLimits

0x4772,	// (0x0007fa2d) main_mup_pane_g2

0x4786,	// (0x0007fa41) main_mup_pane_g3_ParamLimits

0x4786,	// (0x0007fa41) main_mup_pane_g3

0x479a,	// (0x0007fa55) main_mup_pane_g4_ParamLimits

0x479a,	// (0x0007fa55) main_mup_pane_g4

0x47b6,	// (0x0007fa71) main_mup_pane_g5_ParamLimits

0x47b6,	// (0x0007fa71) main_mup_pane_g5

0x47d7,	// (0x0007fa92) main_mup_pane_g6_ParamLimits

0x47d7,	// (0x0007fa92) main_mup_pane_g6

0x47f3,	// (0x0007faae) main_mup_pane_g7_ParamLimits

0x47f3,	// (0x0007faae) main_mup_pane_g7

0x480f,	// (0x0007faca) main_mup_pane_g8_ParamLimits

0x480f,	// (0x0007faca) main_mup_pane_g8

0x482b,	// (0x0007fae6) main_mup_pane_g9_ParamLimits

0x482b,	// (0x0007fae6) main_mup_pane_g9

0x484a,	// (0x0007fb05) main_mup_pane_g10_ParamLimits

0x484a,	// (0x0007fb05) main_mup_pane_g10

0x4869,	// (0x0007fb24) main_mup_pane_g11_ParamLimits

0x4869,	// (0x0007fb24) main_mup_pane_g11

0x4881,	// (0x0007fb3c) main_mup_pane_g12_ParamLimits

0x4881,	// (0x0007fb3c) main_mup_pane_g12

0x488f,	// (0x0007fb4a) main_mup_pane_g13_ParamLimits

0x488f,	// (0x0007fb4a) main_mup_pane_g13

0x000c,

0xf415,	// (0x0008a6d0) main_mup_pane_g_ParamLimits

0xf415,	// (0x0008a6d0) main_mup_pane_g

0x48a5,	// (0x0007fb60) main_mup_pane_t1_ParamLimits

0x48a5,	// (0x0007fb60) main_mup_pane_t1

0x48c2,	// (0x0007fb7d) main_mup_pane_t2_ParamLimits

0x48c2,	// (0x0007fb7d) main_mup_pane_t2

0x48dc,	// (0x0007fb97) main_mup_pane_t3_ParamLimits

0x48dc,	// (0x0007fb97) main_mup_pane_t3

0x48f6,	// (0x0007fbb1) main_mup_pane_t4_ParamLimits

0x48f6,	// (0x0007fbb1) main_mup_pane_t4

0x4908,	// (0x0007fbc3) main_mup_pane_t5_ParamLimits

0x4908,	// (0x0007fbc3) main_mup_pane_t5

0x491a,	// (0x0007fbd5) main_mup_pane_t6_ParamLimits

0x491a,	// (0x0007fbd5) main_mup_pane_t6

0x0005,

0xf430,	// (0x0008a6eb) main_mup_pane_t_ParamLimits

0xf430,	// (0x0008a6eb) main_mup_pane_t

0x4930,	// (0x0007fbeb) mup_progress_pane_ParamLimits

0x4930,	// (0x0007fbeb) mup_progress_pane

0x493c,	// (0x0007fbf7) mup_visualizer_pane_ParamLimits

0x493c,	// (0x0007fbf7) mup_visualizer_pane

0x497a,	// (0x0007fc35) mup_volume_pane_ParamLimits

0x497a,	// (0x0007fc35) mup_volume_pane

0xb3d9,	// (0x00086694) mup_visualizer_pane_g1_ParamLimits

0xb3d9,	// (0x00086694) mup_visualizer_pane_g1

0xb3d9,	// (0x00086694) mup_visualizer_pane_g2_ParamLimits

0xb3d9,	// (0x00086694) mup_visualizer_pane_g2

0xb243,	// (0x000864fe) mup_visualizer_pane_g3_ParamLimits

0xb243,	// (0x000864fe) mup_visualizer_pane_g3

0x0002,

0xf43d,	// (0x0008a6f8) mup_visualizer_pane_g_ParamLimits

0xf43d,	// (0x0008a6f8) mup_visualizer_pane_g

0xa7e7,	// (0x00085aa2) mup_volume_pane_g1

0xb4d5,	// (0x00086790) mup_volume_pane_g2

0x0001,

0xf444,	// (0x0008a6ff) mup_volume_pane_g

0xa7e7,	// (0x00085aa2) mup_progress_pane_g1

0xb4de,	// (0x00086799) mup_progress_pane_g2

0xb4e7,	// (0x000867a2) mup_progress_pane_g3

0x0002,

0xf449,	// (0x0008a704) mup_progress_pane_g

0xa458,	// (0x00085713) bg_popup_window_pane_cp05

0xb4f0,	// (0x000867ab) heading_pane_cp02_ParamLimits

0xb4f0,	// (0x000867ab) heading_pane_cp02

0xb50a,	// (0x000867c5) list_popup_blid_pane

0xb512,	// (0x000867cd) list_blid_sat_info_pane_ParamLimits

0xb512,	// (0x000867cd) list_blid_sat_info_pane

0xb525,	// (0x000867e0) list_blid_sat_info_pane_g1

0xb52d,	// (0x000867e8) list_blid_sat_info_pane_t1

0x4a85,	// (0x0007fd40) mup_equalizer_pane_ParamLimits

0x4a85,	// (0x0007fd40) mup_equalizer_pane

0x4aa6,	// (0x0007fd61) mup_equalizer_pane_cp1_ParamLimits

0x4aa6,	// (0x0007fd61) mup_equalizer_pane_cp1

0x4ac7,	// (0x0007fd82) mup_equalizer_pane_cp2_ParamLimits

0x4ac7,	// (0x0007fd82) mup_equalizer_pane_cp2

0x4ae8,	// (0x0007fda3) mup_equalizer_pane_cp3_ParamLimits

0x4ae8,	// (0x0007fda3) mup_equalizer_pane_cp3

0x4b09,	// (0x0007fdc4) mup_equalizer_pane_cp4_ParamLimits

0x4b09,	// (0x0007fdc4) mup_equalizer_pane_cp4

0x4b2a,	// (0x0007fde5) mup_equalizer_pane_cp5

0x4b40,	// (0x0007fdfb) mup_equalizer_pane_cp6

0x4b58,	// (0x0007fe13) mup_equalizer_pane_cp7

0xc6d2,	// (0x0008798d) bg_popup_call_poc_act_pane_g9

0xc6da,	// (0x00087995) bg_popup_call_poc_act_pane_g10

0xc6e2,	// (0x0008799d) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6b3,	// (0x0008596e) mup_scale_pane

0xa7e7,	// (0x00085aa2) mup_scale_pane_g1

0xb53b,	// (0x000867f6) mup_scale_pane_g2

0x0006,

0xf465,	// (0x0008a720) mup_scale_pane_g

0xb55f,	// (0x0008681a) msg_data_pane

0xb567,	// (0x00086822) scroll_pane_cp017

0x0f77,	// (0x0007c232) bg_list_pane_cp04_ParamLimits

0x0f77,	// (0x0007c232) bg_list_pane_cp04

0xb56f,	// (0x0008682a) msg_data_pane_g1

0x4b82,	// (0x0007fe3d) msg_data_pane_g2

0x4b8a,	// (0x0007fe45) msg_data_pane_g3

0x4b92,	// (0x0007fe4d) msg_data_pane_g4

0x4b9a,	// (0x0007fe55) msg_data_pane_g5

0x4ba2,	// (0x0007fe5d) msg_data_pane_g6

0x4baa,	// (0x0007fe65) msg_data_pane_g7

0x0006,

0xf474,	// (0x0008a72f) msg_data_pane_g

0x0f9b,	// (0x0007c256) msg_text_pane_ParamLimits

0x0f9b,	// (0x0007c256) msg_text_pane

0x4bb2,	// (0x0007fe6d) qrid_highlight_pane_cp011_ParamLimits

0x4bb2,	// (0x0007fe6d) qrid_highlight_pane_cp011

0xa458,	// (0x00085713) msg_body_pane

0xa458,	// (0x00085713) msg_header_pane

0xb580,	// (0x0008683b) input_focus_pane_cp07

0x0fe6,	// (0x0007c2a1) msg_header_pane_t1_ParamLimits

0x0fe6,	// (0x0007c2a1) msg_header_pane_t1

0x0ff8,	// (0x0007c2b3) msg_header_pane_t2_ParamLimits

0x0ff8,	// (0x0007c2b3) msg_header_pane_t2

0x0001,

0xf488,	// (0x0008a743) msg_header_pane_t_ParamLimits

0xf488,	// (0x0008a743) msg_header_pane_t

0xb595,	// (0x00086850) msg_body_pane_g1

0x100a,	// (0x0007c2c5) msg_body_pane_t1_ParamLimits

0x100a,	// (0x0007c2c5) msg_body_pane_t1

0x103b,	// (0x0007c2f6) msg_body_pane_t2_ParamLimits

0x103b,	// (0x0007c2f6) msg_body_pane_t2

0x104d,	// (0x0007c308) msg_body_pane_t3_ParamLimits

0x104d,	// (0x0007c308) msg_body_pane_t3

0x0002,

0xf48d,	// (0x0008a748) msg_body_pane_t_ParamLimits

0xf48d,	// (0x0008a748) msg_body_pane_t

0x4c20,	// (0x0007fedb) main_viewer_pane_g1_ParamLimits

0x4c20,	// (0x0007fedb) main_viewer_pane_g1

0x4c2c,	// (0x0007fee7) main_viewer_pane_g2_ParamLimits

0x4c2c,	// (0x0007fee7) main_viewer_pane_g2

0x4c38,	// (0x0007fef3) main_viewer_pane_g3_ParamLimits

0x4c38,	// (0x0007fef3) main_viewer_pane_g3

0x4c49,	// (0x0007ff04) main_viewer_pane_g4_ParamLimits

0x4c49,	// (0x0007ff04) main_viewer_pane_g4

0x4c5a,	// (0x0007ff15) main_viewer_pane_g5_ParamLimits

0x4c5a,	// (0x0007ff15) main_viewer_pane_g5

0x4c5a,	// (0x0007ff15) main_viewer_pane_g7_ParamLimits

0x4c5a,	// (0x0007ff15) main_viewer_pane_g7

0x4c6c,	// (0x0007ff27) main_viewer_pane_g8_ParamLimits

0x4c6c,	// (0x0007ff27) main_viewer_pane_g8

0x0007,

0xf49d,	// (0x0008a758) main_viewer_pane_g_ParamLimits

0xf49d,	// (0x0008a758) main_viewer_pane_g

0xb59d,	// (0x00086858) viewer_content_pane_ParamLimits

0xb59d,	// (0x00086858) viewer_content_pane

0x4ca4,	// (0x0007ff5f) main_postcard_pane_g1_ParamLimits

0x4ca4,	// (0x0007ff5f) main_postcard_pane_g1

0x4cb2,	// (0x0007ff6d) main_postcard_pane_g2_ParamLimits

0x4cb2,	// (0x0007ff6d) main_postcard_pane_g2

0x4cc0,	// (0x0007ff7b) main_postcard_pane_g3_ParamLimits

0x4cc0,	// (0x0007ff7b) main_postcard_pane_g3

0x0005,

0xf4ae,	// (0x0008a769) main_postcard_pane_g_ParamLimits

0xf4ae,	// (0x0008a769) main_postcard_pane_g

0x4cd0,	// (0x0007ff8b) main_postcard_pane_g4

0xc8f4,	// (0x00087baf) smil_status_volume_pane_g2

0x4cfc,	// (0x0007ffb7) postcard_pane_ParamLimits

0x4cfc,	// (0x0007ffb7) postcard_pane

0xb3d9,	// (0x00086694) postcard_pane_g1_ParamLimits

0xb3d9,	// (0x00086694) postcard_pane_g1

0x4d2e,	// (0x0007ffe9) postcard_pane_g2_ParamLimits

0x4d2e,	// (0x0007ffe9) postcard_pane_g2

0x4d3a,	// (0x0007fff5) postcard_pane_g3_ParamLimits

0x4d3a,	// (0x0007fff5) postcard_pane_g3

0xb5ab,	// (0x00086866) postcard_pane_g4_ParamLimits

0xb5ab,	// (0x00086866) postcard_pane_g4

0x4d46,	// (0x00080001) postcard_pane_g5_ParamLimits

0x4d46,	// (0x00080001) postcard_pane_g5

0x4d52,	// (0x0008000d) postcard_pane_g6_ParamLimits

0x4d52,	// (0x0008000d) postcard_pane_g6

0xb5b9,	// (0x00086874) postcard_pane_g7_ParamLimits

0xb5b9,	// (0x00086874) postcard_pane_g7

0x0006,

0xf4bb,	// (0x0008a776) postcard_pane_g_ParamLimits

0xf4bb,	// (0x0008a776) postcard_pane_g

0x4d5e,	// (0x00080019) main_mp2_pane_g1_ParamLimits

0x4d5e,	// (0x00080019) main_mp2_pane_g1

0x4d6a,	// (0x00080025) main_mp2_pane_g2_ParamLimits

0x4d6a,	// (0x00080025) main_mp2_pane_g2

0x4d76,	// (0x00080031) main_mp2_pane_g3_ParamLimits

0x4d76,	// (0x00080031) main_mp2_pane_g3

0x0002,

0xf4ca,	// (0x0008a785) main_mp2_pane_g_ParamLimits

0xf4ca,	// (0x0008a785) main_mp2_pane_g

0x4d82,	// (0x0008003d) main_mp2_pane_t1_ParamLimits

0x4d82,	// (0x0008003d) main_mp2_pane_t1

0x4d99,	// (0x00080054) main_mp2_pane_t2_ParamLimits

0x4d99,	// (0x00080054) main_mp2_pane_t2

0x4dab,	// (0x00080066) main_mp2_pane_t3_ParamLimits

0x4dab,	// (0x00080066) main_mp2_pane_t3

0x0002,

0xf4d1,	// (0x0008a78c) main_mp2_pane_t_ParamLimits

0xf4d1,	// (0x0008a78c) main_mp2_pane_t

0xb5c7,	// (0x00086882) pec_content_pane_ParamLimits

0xb5c7,	// (0x00086882) pec_content_pane

0xab76,	// (0x00085e31) scroll_pane_cp015

0xb5d9,	// (0x00086894) pec_attribute_pane_ParamLimits

0xb5d9,	// (0x00086894) pec_attribute_pane

0x4dbd,	// (0x00080078) pec_content_pane_g1_ParamLimits

0x4dbd,	// (0x00080078) pec_content_pane_g1

0xb5e9,	// (0x000868a4) pec_content_pane_t1_ParamLimits

0xb5e9,	// (0x000868a4) pec_content_pane_t1

0xb5fb,	// (0x000868b6) pec_content_pane_t2_ParamLimits

0xb5fb,	// (0x000868b6) pec_content_pane_t2

0x0001,

0xf4d8,	// (0x0008a793) pec_content_pane_t_ParamLimits

0xf4d8,	// (0x0008a793) pec_content_pane_t

0x4dc9,	// (0x00080084) list_single_graphic_pane_cp01_ParamLimits

0x4dc9,	// (0x00080084) list_single_graphic_pane_cp01

0xa6b3,	// (0x0008596e) bg_popup_sub_pane_cp04

0xb60d,	// (0x000868c8) popup_mup_playback_window_g1

0xb619,	// (0x000868d4) popup_mup_playback_window_t1

0xb62e,	// (0x000868e9) popup_mup_playback_window_t2

0x0001,

0xf4dd,	// (0x0008a798) popup_mup_playback_window_t

0xb665,	// (0x00086920) main_image_pane_g1_ParamLimits

0xb665,	// (0x00086920) main_image_pane_g1

0xb6a8,	// (0x00086963) scroll_pane_cp018_ParamLimits

0xb6a8,	// (0x00086963) scroll_pane_cp018

0xb6c0,	// (0x0008697b) scroll_pane_cp016_ParamLimits

0xb6c0,	// (0x0008697b) scroll_pane_cp016

0x4e63,	// (0x0008011e) smil2_image_pane_ParamLimits

0x4e63,	// (0x0008011e) smil2_image_pane

0x4e93,	// (0x0008014e) smil2_root_pane_ParamLimits

0x4e93,	// (0x0008014e) smil2_root_pane

0x4ebf,	// (0x0008017a) smil2_text_pane_ParamLimits

0x4ebf,	// (0x0008017a) smil2_text_pane

0xa458,	// (0x00085713) bg_list_pane_cp06

0xb6fc,	// (0x000869b7) grid_radio_pane

0xa458,	// (0x00085713) bg_popup_window_pane_cp06

0xb704,	// (0x000869bf) main_fmradio_pane_t1

0xb0bf,	// (0x0008637a) heading_pane_cp04

0xb712,	// (0x000869cd) main_fmradio_pane_t2

0xc72a,	// (0x000879e5) popup_cale_lunar_info_window_g1

0xb720,	// (0x000869db) main_fmradio_pane_t3

0xc732,	// (0x000879ed) popup_cale_lunar_info_window_g2

0xb72e,	// (0x000869e9) main_fmradio_pane_t4

0x0001,

0xb73c,	// (0x000869f7) main_fmradio_pane_t5

0x0004,

0xf5cb,	// (0x0008a886) popup_cale_lunar_info_window_g

0xf4f2,	// (0x0008a7ad) main_fmradio_pane_t

0xb74a,	// (0x00086a05) wait_bar_pane_cp03

0xb752,	// (0x00086a0d) cell_fmradio_pane_ParamLimits

0xb752,	// (0x00086a0d) cell_fmradio_pane

0xb5b9,	// (0x00086874) cell_fmradio_pane_g1_ParamLimits

0xb5b9,	// (0x00086874) cell_fmradio_pane_g1

0xa458,	// (0x00085713) grid_highlight_pane_cp011

0xb765,	// (0x00086a20) poc_content_pane_ParamLimits

0xb765,	// (0x00086a20) poc_content_pane

0xb777,	// (0x00086a32) scroll_pane_cp019

0x4eff,	// (0x000801ba) popup_call_poc_act_window_ParamLimits

0x4eff,	// (0x000801ba) popup_call_poc_act_window

0x4f0c,	// (0x000801c7) popup_call_poc_inact_window_ParamLimits

0x4f0c,	// (0x000801c7) popup_call_poc_inact_window

0xf58f,	// (0x0008a84a) bg_popup_call_poc_act_pane_g

0xc6ea,	// (0x000879a5) bg_popup_call_poc_inact_pane_g1

0xc6f2,	// (0x000879ad) bg_popup_call_poc_inact_pane_g2

0xb77f,	// (0x00086a3a) popup_call_poc_act_window_g2

0xc6fa,	// (0x000879b5) bg_popup_call_poc_inact_pane_g3

0xc67a,	// (0x00087935) bg_popup_call_poc_inact_pane_g4

0xc702,	// (0x000879bd) bg_popup_call_poc_inact_pane_g5

0xb787,	// (0x00086a42) popup_call_poc_act_window_t1_ParamLimits

0xb787,	// (0x00086a42) popup_call_poc_act_window_t1

0xb7af,	// (0x00086a6a) popup_call_poc_act_window_t2_ParamLimits

0xb7af,	// (0x00086a6a) popup_call_poc_act_window_t2

0xb7d7,	// (0x00086a92) popup_call_poc_act_window_t3_ParamLimits

0xb7d7,	// (0x00086a92) popup_call_poc_act_window_t3

0xb7ff,	// (0x00086aba) popup_call_poc_act_window_t4_ParamLimits

0xb7ff,	// (0x00086aba) popup_call_poc_act_window_t4

0x0003,

0xf4fd,	// (0x0008a7b8) popup_call_poc_act_window_t_ParamLimits

0xf4fd,	// (0x0008a7b8) popup_call_poc_act_window_t

0xc70a,	// (0x000879c5) bg_popup_call_poc_inact_pane_g6

0xc712,	// (0x000879cd) bg_popup_call_poc_inact_pane_g7

0xc71a,	// (0x000879d5) bg_popup_call_poc_inact_pane_g8

0xb811,	// (0x00086acc) popup_call_poc_inact_window_g2

0xc722,	// (0x000879dd) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a6,	// (0x0008a861) bg_popup_call_poc_inact_pane_g

0xb819,	// (0x00086ad4) popup_call_poc_inact_window_t1_ParamLimits

0xb819,	// (0x00086ad4) popup_call_poc_inact_window_t1

0xb82e,	// (0x00086ae9) popup_call_poc_inact_window_t2_ParamLimits

0xb82e,	// (0x00086ae9) popup_call_poc_inact_window_t2

0xb843,	// (0x00086afe) popup_call_poc_inact_window_t3_ParamLimits

0xb843,	// (0x00086afe) popup_call_poc_inact_window_t3

0x0002,

0xf506,	// (0x0008a7c1) popup_call_poc_inact_window_t_ParamLimits

0xf506,	// (0x0008a7c1) popup_call_poc_inact_window_t

0xc867,	// (0x00087b22) context_pane_ParamLimits

0x5542,	// (0x000807fd) signal_pane_ParamLimits

0xa969,	// (0x00085c24) main_call2_pane

0x54b5,	// (0x00080770) popup_phob_thumbnail2_window_ParamLimits

0x54b5,	// (0x00080770) popup_phob_thumbnail2_window

0x4bce,	// (0x0007fe89) aid_hotspot_pointer_arrow_pane

0x4bd6,	// (0x0007fe91) aid_hotspot_pointer_hand_pane

0x5234,	// (0x000804ef) phob_pre_status_pane_g5

0x2e93,	// (0x0007e14e) cams_zoom_pane_ParamLimits

0x2e9f,	// (0x0007e15a) image_vga_pane_ParamLimits

0x2eae,	// (0x0007e169) main_camera_pane_g1_ParamLimits

0x2ebc,	// (0x0007e177) main_camera_pane_g2_ParamLimits

0x2ec8,	// (0x0007e183) main_camera_pane_g3_ParamLimits

0x2ed4,	// (0x0007e18f) main_camera_pane_g4_ParamLimits

0x2ee0,	// (0x0007e19b) main_camera_pane_g5_ParamLimits

0x2eec,	// (0x0007e1a7) main_camera_pane_g6_ParamLimits

0x2ef8,	// (0x0007e1b3) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0008a4c5) main_camera_pane_g_ParamLimits

0x2f04,	// (0x0007e1bf) main_camera_pane_t1_ParamLimits

0x2f16,	// (0x0007e1d1) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0008a4d6) main_camera_pane_t_ParamLimits

0xa6b3,	// (0x0008596e) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6b3,	// (0x0008596e) bg_popup_preview_window_pane_cp01

0xb858,	// (0x00086b13) popup_phob_thumbnail2_window_g1_ParamLimits

0xb858,	// (0x00086b13) popup_phob_thumbnail2_window_g1

0xa458,	// (0x00085713) call2_cli_visual_pane

0x4f28,	// (0x000801e3) popup_call2_audio_conf_window_ParamLimits

0x4f28,	// (0x000801e3) popup_call2_audio_conf_window

0x4f3d,	// (0x000801f8) popup_call2_audio_first_window_ParamLimits

0x4f3d,	// (0x000801f8) popup_call2_audio_first_window

0x4fdb,	// (0x00080296) popup_call2_audio_in_window_ParamLimits

0x4fdb,	// (0x00080296) popup_call2_audio_in_window

0x501d,	// (0x000802d8) popup_call2_audio_out_window_ParamLimits

0x501d,	// (0x000802d8) popup_call2_audio_out_window

0x507f,	// (0x0008033a) popup_call2_audio_second_window_ParamLimits

0x507f,	// (0x0008033a) popup_call2_audio_second_window

0x50dd,	// (0x00080398) popup_call2_audio_wait_window_ParamLimits

0x50dd,	// (0x00080398) popup_call2_audio_wait_window

0xa458,	// (0x00085713) bg_popup_call2_act_pane_cp03

0xa695,	// (0x00085950) list_conf_pane_cp

0xb864,	// (0x00086b1f) popup_call2_audio_conf_window_t1

0xb872,	// (0x00086b2d) list_single_graphic_popup_conf2_pane_ParamLimits

0xb872,	// (0x00086b2d) list_single_graphic_popup_conf2_pane

0xb12f,	// (0x000863ea) list_highlight_pane_cp04

0xb885,	// (0x00086b40) list_single_graphic_popup_conf2_pane_g1

0xb140,	// (0x000863fb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50d,	// (0x0008a7c8) list_single_graphic_popup_conf2_pane_g

0xb88f,	// (0x00086b4a) list_single_graphic_popup_conf2_pane_t1

0xb89d,	// (0x00086b58) bg_popup_call2_act_pane_cp01_ParamLimits

0xb89d,	// (0x00086b58) bg_popup_call2_act_pane_cp01

0xb927,	// (0x00086be2) call_type_pane_cp05_ParamLimits

0xb927,	// (0x00086be2) call_type_pane_cp05

0xb97b,	// (0x00086c36) popup_call2_audio_second_window_g1_ParamLimits

0xb97b,	// (0x00086c36) popup_call2_audio_second_window_g1

0xb9cf,	// (0x00086c8a) popup_call2_audio_second_window_g2_ParamLimits

0xb9cf,	// (0x00086c8a) popup_call2_audio_second_window_g2

0x0002,

0xf512,	// (0x0008a7cd) popup_call2_audio_second_window_g_ParamLimits

0xf512,	// (0x0008a7cd) popup_call2_audio_second_window_g

0xba34,	// (0x00086cef) popup_call2_audio_second_window_t1_ParamLimits

0xba34,	// (0x00086cef) popup_call2_audio_second_window_t1

0xbaef,	// (0x00086daa) popup_call2_audio_second_window_t2_ParamLimits

0xbaef,	// (0x00086daa) popup_call2_audio_second_window_t2

0xbb42,	// (0x00086dfd) popup_call2_audio_second_window_t3_ParamLimits

0xbb42,	// (0x00086dfd) popup_call2_audio_second_window_t3

0x0003,

0xf519,	// (0x0008a7d4) popup_call2_audio_second_window_t_ParamLimits

0xf519,	// (0x0008a7d4) popup_call2_audio_second_window_t

0xa458,	// (0x00085713) bg_popup_call2_in_pane_cp02

0xa462,	// (0x0008571d) call_type_pane_cp04

0xa46a,	// (0x00085725) popup_call2_audio_wait_window_g1

0xa472,	// (0x0008572d) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008a3b4) popup_call2_audio_wait_window_g

0xa47a,	// (0x00085735) popup_call2_audio_wait_window_t3

0xbc35,	// (0x00086ef0) bg_popup_call2_act_pane_ParamLimits

0xbc35,	// (0x00086ef0) bg_popup_call2_act_pane

0xbcf5,	// (0x00086fb0) call_type_pane_cp03_ParamLimits

0xbcf5,	// (0x00086fb0) call_type_pane_cp03

0xbd59,	// (0x00087014) popup_call2_audio_first_window_g1_ParamLimits

0xbd59,	// (0x00087014) popup_call2_audio_first_window_g1

0xbdc9,	// (0x00087084) popup_call2_audio_first_window_g2_ParamLimits

0xbdc9,	// (0x00087084) popup_call2_audio_first_window_g2

0xb3d9,	// (0x00086694) popup_call2_audio_first_window_g3_ParamLimits

0xb3d9,	// (0x00086694) popup_call2_audio_first_window_g3

0x0004,

0xf522,	// (0x0008a7dd) popup_call2_audio_first_window_g_ParamLimits

0xf522,	// (0x0008a7dd) popup_call2_audio_first_window_g

0xbea7,	// (0x00087162) popup_call2_audio_first_window_t1_ParamLimits

0xbea7,	// (0x00087162) popup_call2_audio_first_window_t1

0xbfaa,	// (0x00087265) popup_call2_audio_first_window_t4_ParamLimits

0xbfaa,	// (0x00087265) popup_call2_audio_first_window_t4

0xc08d,	// (0x00087348) popup_call2_audio_first_window_t5_ParamLimits

0xc08d,	// (0x00087348) popup_call2_audio_first_window_t5

0x0003,

0xf52d,	// (0x0008a7e8) popup_call2_audio_first_window_t_ParamLimits

0xf52d,	// (0x0008a7e8) popup_call2_audio_first_window_t

0xa6ab,	// (0x00085966) bg_popup_call2_act_pane_g1

0xc73a,	// (0x000879f5) popup_cale_lunar_info_window_t1

0xc748,	// (0x00087a03) popup_cale_lunar_info_window_t2

0xc756,	// (0x00087a11) popup_cale_lunar_info_window_t3

0xa458,	// (0x00085713) bg_popup_call2_bubble_pane

0xc18e,	// (0x00087449) bg_popup_call2_in_pane_cp01_ParamLimits

0xc18e,	// (0x00087449) bg_popup_call2_in_pane_cp01

0xa134,	// (0x000853ef) call_type_pane_cp02

0xc1d6,	// (0x00087491) popup_call2_audio_out_window_g1_ParamLimits

0xc1d6,	// (0x00087491) popup_call2_audio_out_window_g1

0xc202,	// (0x000874bd) popup_call2_audio_out_window_g2_ParamLimits

0xc202,	// (0x000874bd) popup_call2_audio_out_window_g2

0xc22a,	// (0x000874e5) popup_call2_audio_out_window_g3_ParamLimits

0xc22a,	// (0x000874e5) popup_call2_audio_out_window_g3

0x0003,

0xf536,	// (0x0008a7f1) popup_call2_audio_out_window_g_ParamLimits

0xf536,	// (0x0008a7f1) popup_call2_audio_out_window_g

0xc265,	// (0x00087520) popup_call2_audio_out_window_t1_ParamLimits

0xc265,	// (0x00087520) popup_call2_audio_out_window_t1

0xc2c4,	// (0x0008757f) popup_call2_audio_out_window_t2_ParamLimits

0xc2c4,	// (0x0008757f) popup_call2_audio_out_window_t2

0xc318,	// (0x000875d3) popup_call2_audio_out_window_t3_ParamLimits

0xc318,	// (0x000875d3) popup_call2_audio_out_window_t3

0xc32e,	// (0x000875e9) popup_call2_audio_out_window_t4_ParamLimits

0xc32e,	// (0x000875e9) popup_call2_audio_out_window_t4

0xc344,	// (0x000875ff) popup_call2_audio_out_window_t5_ParamLimits

0xc344,	// (0x000875ff) popup_call2_audio_out_window_t5

0x0005,

0xf53f,	// (0x0008a7fa) popup_call2_audio_out_window_t_ParamLimits

0xf53f,	// (0x0008a7fa) popup_call2_audio_out_window_t

0xc3a8,	// (0x00087663) bg_popup_call2_in_pane_ParamLimits

0xc3a8,	// (0x00087663) bg_popup_call2_in_pane

0xc404,	// (0x000876bf) popup_call2_audio_in_window_g1_ParamLimits

0xc404,	// (0x000876bf) popup_call2_audio_in_window_g1

0xc43c,	// (0x000876f7) popup_call2_audio_in_window_g2_ParamLimits

0xc43c,	// (0x000876f7) popup_call2_audio_in_window_g2

0xc474,	// (0x0008772f) popup_call2_audio_in_window_g3_ParamLimits

0xc474,	// (0x0008772f) popup_call2_audio_in_window_g3

0x0003,

0xf54c,	// (0x0008a807) popup_call2_audio_in_window_g_ParamLimits

0xf54c,	// (0x0008a807) popup_call2_audio_in_window_g

0xc4cc,	// (0x00087787) popup_call2_audio_in_window_t1_ParamLimits

0xc4cc,	// (0x00087787) popup_call2_audio_in_window_t1

0xc54c,	// (0x00087807) popup_call2_audio_in_window_t2_ParamLimits

0xc54c,	// (0x00087807) popup_call2_audio_in_window_t2

0xc5cc,	// (0x00087887) popup_call2_audio_in_window_t3_ParamLimits

0xc5cc,	// (0x00087887) popup_call2_audio_in_window_t3

0xc5e6,	// (0x000878a1) popup_call2_audio_in_window_t4_ParamLimits

0xc5e6,	// (0x000878a1) popup_call2_audio_in_window_t4

0xc5f8,	// (0x000878b3) popup_call2_audio_in_window_t5_ParamLimits

0xc5f8,	// (0x000878b3) popup_call2_audio_in_window_t5

0xc60d,	// (0x000878c8) popup_call2_audio_in_window_t6_ParamLimits

0xc60d,	// (0x000878c8) popup_call2_audio_in_window_t6

0x0005,

0xf555,	// (0x0008a810) popup_call2_audio_in_window_t_ParamLimits

0xf555,	// (0x0008a810) popup_call2_audio_in_window_t

0xa6ab,	// (0x00085966) bg_popup_call2_in_pane_g1

0xc764,	// (0x00087a1f) popup_cale_lunar_info_window_t4

0x0003,

0xf5d0,	// (0x0008a88b) popup_cale_lunar_info_window_t

0xa6b3,	// (0x0008596e) bg_popup_call2_rect_pane_ParamLimits

0xa6b3,	// (0x0008596e) bg_popup_call2_rect_pane

0xa458,	// (0x00085713) call2_cli_visual_graphic_pane

0xa458,	// (0x00085713) call2_cli_visual_text_pane

0x55eb,	// (0x000808a6) smil_status_volume_pane_g3

0x0002,

0xa7e7,	// (0x00085aa2) call2_cli_visual_graphic_pane_g1

0xa7e7,	// (0x00085aa2) call2_cli_visual_graphic_pane_g2

0xa7e7,	// (0x00085aa2) call2_cli_visual_graphic_pane_g3

0x0002,

0xf562,	// (0x0008a81d) call2_cli_visual_graphic_pane_g

0xc622,	// (0x000878dd) bg_popup_call2_rect_pane_g1

0xa885,	// (0x00085b40) bg_popup_call2_rect_pane_g2

0xc62a,	// (0x000878e5) bg_popup_call2_rect_pane_g3

0xc632,	// (0x000878ed) bg_popup_call2_rect_pane_g4

0xc63a,	// (0x000878f5) bg_popup_call2_rect_pane_g5

0xc642,	// (0x000878fd) bg_popup_call2_rect_pane_g6

0xc64a,	// (0x00087905) bg_popup_call2_rect_pane_g7

0xc652,	// (0x0008790d) bg_popup_call2_rect_pane_g8

0xc65a,	// (0x00087915) bg_popup_call2_rect_pane_g9

0x0008,

0xf569,	// (0x0008a824) bg_popup_call2_rect_pane_g

0xc662,	// (0x0008791d) bg_popup_call2_bubble_pane_g1

0xc66a,	// (0x00087925) bg_popup_call2_bubble_pane_g2

0xc672,	// (0x0008792d) bg_popup_call2_bubble_pane_g3

0xc67a,	// (0x00087935) bg_popup_call2_bubble_pane_g4

0xc682,	// (0x0008793d) bg_popup_call2_bubble_pane_g5

0xc68a,	// (0x00087945) bg_popup_call2_bubble_pane_g6

0xc692,	// (0x0008794d) bg_popup_call2_bubble_pane_g7

0xc69a,	// (0x00087955) bg_popup_call2_bubble_pane_g8

0xc6a2,	// (0x0008795d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57c,	// (0x0008a837) bg_popup_call2_bubble_pane_g

0x28c1,	// (0x0007db7c) aid_cale_week_size_cell_pane

0x2f28,	// (0x0007e1e3) aid_cams_cif_uncrop_pane_ParamLimits

0x2f28,	// (0x0007e1e3) aid_cams_cif_uncrop_pane

0x3083,	// (0x0007e33e) aid_cams_size_cell_ParamLimits

0x3083,	// (0x0007e33e) aid_cams_size_cell

0x308f,	// (0x0007e34a) grid_cams_pane_ParamLimits

0x309d,	// (0x0007e358) linegrid_cams_pane_ParamLimits

0x3174,	// (0x0007e42f) call_video_pane_t1

0x3195,	// (0x0007e450) call_video_pane_t2

0x0001,

0xf269,	// (0x0008a524) call_video_pane_t

0x36e3,	// (0x0007e99e) aid_cale_month_size_cell_pane_ParamLimits

0x36e3,	// (0x0007e99e) aid_cale_month_size_cell_pane

0xf619,	// (0x0008a8d4) smil_status_volume_pane_g

0x55f8,	// (0x000808b3) volume_smil_pane_ParamLimits

0x2034,	// (0x0007d2ef) aid_popup2_width_pane

0x27bb,	// (0x0007da76) cell_qdial_pane_g4_ParamLimits

0x27bb,	// (0x0007da76) cell_qdial_pane_g4

0x467f,	// (0x0007f93a) aid_blid_cardinal_pane_ParamLimits

0x468f,	// (0x0007f94a) aid_blid_destination_pane_ParamLimits

0x468f,	// (0x0007f94a) aid_blid_destination_pane

0xa6b3,	// (0x0008596e) bg_popup_call_poc_act_pane_ParamLimits

0xa6b3,	// (0x0008596e) bg_popup_call_poc_act_pane

0xa6b3,	// (0x0008596e) bg_popup_call_poc_inact_pane_ParamLimits

0xa6b3,	// (0x0008596e) bg_popup_call_poc_inact_pane

0xc6aa,	// (0x00087965) bg_popup_call_poc_act_pane_g1

0xc6b2,	// (0x0008796d) bg_popup_call_poc_act_pane_g2

0xc6ba,	// (0x00087975) bg_popup_call_poc_act_pane_g3

0xc67a,	// (0x00087935) bg_popup_call_poc_act_pane_g4

0xc682,	// (0x0008793d) bg_popup_call_poc_act_pane_g5

0xc6c2,	// (0x0008797d) bg_popup_call_poc_act_pane_g6

0xc692,	// (0x0008794d) bg_popup_call_poc_act_pane_g7

0xc6ca,	// (0x00087985) bg_popup_call_poc_act_pane_g8

0xa458,	// (0x00085713) main_usb_pane

0x53e8,	// (0x000806a3) popup_cale_lunar_info_window

0x34b2,	// (0x0007e76d) im_reading_pane_t1_ParamLimits

0xaac5,	// (0x00085d80) list_im_pane_ParamLimits

0xaad6,	// (0x00085d91) scroll_pane_cp07_ParamLimits

0xa458,	// (0x00085713) grid_highlight_pane_cp012

0xa6b3,	// (0x0008596e) mup_scale_pane_ParamLimits

0xb3d9,	// (0x00086694) main_usb_pane_g1_ParamLimits

0xb3d9,	// (0x00086694) main_usb_pane_g1

0x5157,	// (0x00080412) main_usb_pane_g2_ParamLimits

0x5157,	// (0x00080412) main_usb_pane_g2

0x0001,

0xf5b9,	// (0x0008a874) main_usb_pane_g_ParamLimits

0xf5b9,	// (0x0008a874) main_usb_pane_g

0x5163,	// (0x0008041e) main_usb_pane_t1_ParamLimits

0x5163,	// (0x0008041e) main_usb_pane_t1

0x5175,	// (0x00080430) main_usb_pane_t2_ParamLimits

0x5175,	// (0x00080430) main_usb_pane_t2

0x5187,	// (0x00080442) main_usb_pane_t3_ParamLimits

0x5187,	// (0x00080442) main_usb_pane_t3

0x5199,	// (0x00080454) main_usb_pane_t4_ParamLimits

0x5199,	// (0x00080454) main_usb_pane_t4

0x51ab,	// (0x00080466) main_usb_pane_t5_ParamLimits

0x51ab,	// (0x00080466) main_usb_pane_t5

0x51bd,	// (0x00080478) main_usb_pane_t6_ParamLimits

0x51bd,	// (0x00080478) main_usb_pane_t6

0x0005,

0xf5be,	// (0x0008a879) main_usb_pane_t_ParamLimits

0x4625,	// (0x0007f8e0) aid_text_placing

0x4631,	// (0x0007f8ec) main_location2_pane_t1_ParamLimits

0x4645,	// (0x0007f900) main_location2_pane_t2_ParamLimits

0x4659,	// (0x0007f914) main_location2_pane_t3_ParamLimits

0x466d,	// (0x0007f928) main_location2_pane_t4_ParamLimits

0x466d,	// (0x0007f928) main_location2_pane_t4

0xf3ca,	// (0x0008a685) main_location2_pane_t_ParamLimits

0xa6ef,	// (0x000859aa) find_pinb_pane_g2_ParamLimits

0xa6ef,	// (0x000859aa) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0008a3da) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0008a3da) find_pinb_pane_g

0xa709,	// (0x000859c4) find_pinb_pane_t1_ParamLimits

0xa71b,	// (0x000859d6) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0008a3df) find_pinb_pane_t_ParamLimits

0xa458,	// (0x00085713) main_call3_pane

0x3c57,	// (0x0007ef12) cale_month_day_heading_pane_t1_ParamLimits

0x3cdd,	// (0x0007ef98) cale_month_day_heading_pane_t2_ParamLimits

0x3d6e,	// (0x0007f029) cale_month_day_heading_pane_t3_ParamLimits

0x3dff,	// (0x0007f0ba) cale_month_day_heading_pane_t4_ParamLimits

0x3e90,	// (0x0007f14b) cale_month_day_heading_pane_t5_ParamLimits

0x3f21,	// (0x0007f1dc) cale_month_day_heading_pane_t6_ParamLimits

0x3fbe,	// (0x0007f279) cale_month_day_heading_pane_t7_ParamLimits

0xf2a1,	// (0x0008a55c) cale_month_day_heading_pane_t_ParamLimits

0xad29,	// (0x00085fe4) smil_status_volume_pane

0x4d16,	// (0x0007ffd1) postcard_address_pane_ParamLimits

0x4d16,	// (0x0007ffd1) postcard_address_pane

0x4d22,	// (0x0007ffdd) postcard_message_pane_ParamLimits

0x4d22,	// (0x0007ffdd) postcard_message_pane

0x511c,	// (0x000803d7) call2_cli_visual_pane_t1_ParamLimits

0x511c,	// (0x000803d7) call2_cli_visual_pane_t1

0x574f,	// (0x00080a0a) postcard_message_pane_t1_ParamLimits

0x574f,	// (0x00080a0a) postcard_message_pane_t1

0x5738,	// (0x000809f3) postcard_address_pane_t1_ParamLimits

0x5738,	// (0x000809f3) postcard_address_pane_t1

0x5729,	// (0x000809e4) popup_call3_audio_in_window_ParamLimits

0x5729,	// (0x000809e4) popup_call3_audio_in_window

0x560d,	// (0x000808c8) bg_popup_call3_in_pane_ParamLimits

0x560d,	// (0x000808c8) bg_popup_call3_in_pane

0x566f,	// (0x0008092a) popup_call3_audio_in_window_g1_ParamLimits

0x566f,	// (0x0008092a) popup_call3_audio_in_window_g1

0x5687,	// (0x00080942) popup_call3_audio_in_window_g2_ParamLimits

0x5687,	// (0x00080942) popup_call3_audio_in_window_g2

0x569f,	// (0x0008095a) popup_call3_audio_in_window_g3_ParamLimits

0x569f,	// (0x0008095a) popup_call3_audio_in_window_g3

0x0003,

0xf620,	// (0x0008a8db) popup_call3_audio_in_window_g_ParamLimits

0xf620,	// (0x0008a8db) popup_call3_audio_in_window_g

0x56c7,	// (0x00080982) popup_call3_audio_in_window_t1_ParamLimits

0x56c7,	// (0x00080982) popup_call3_audio_in_window_t1

0x56ef,	// (0x000809aa) popup_call3_audio_in_window_t2_ParamLimits

0x56ef,	// (0x000809aa) popup_call3_audio_in_window_t2

0x5717,	// (0x000809d2) popup_call3_audio_in_window_t3_ParamLimits

0x5717,	// (0x000809d2) popup_call3_audio_in_window_t3

0x0002,

0xf629,	// (0x0008a8e4) popup_call3_audio_in_window_t_ParamLimits

0xf629,	// (0x0008a8e4) popup_call3_audio_in_window_t

0xa969,	// (0x00085c24) bg_popup_call3_rect_pane

0xc622,	// (0x000878dd) bg_popup_call3_rect_pane_g1

0xa885,	// (0x00085b40) bg_popup_call3_rect_pane_g2

0xc62a,	// (0x000878e5) bg_popup_call3_rect_pane_g3

0xc632,	// (0x000878ed) bg_popup_call3_rect_pane_g4

0xc63a,	// (0x000878f5) bg_popup_call3_rect_pane_g5

0xc642,	// (0x000878fd) bg_popup_call3_rect_pane_g6

0xc64a,	// (0x00087905) bg_popup_call3_rect_pane_g7

0x4995,	// (0x0007fc50) mup_visualizer_osc_pane

0xb4cd,	// (0x00086788) mup_visualizer_spec_pane

0x562d,	// (0x000808e8) call3_video_qcif_pane_ParamLimits

0x562d,	// (0x000808e8) call3_video_qcif_pane

0x563f,	// (0x000808fa) call3_video_qcif_uncrop_pane_ParamLimits

0x563f,	// (0x000808fa) call3_video_qcif_uncrop_pane

0x564d,	// (0x00080908) call3_video_subqcif_pane_ParamLimits

0x564d,	// (0x00080908) call3_video_subqcif_pane

0x565f,	// (0x0008091a) call3_video_subqcif_uncrop_pane_ParamLimits

0x565f,	// (0x0008091a) call3_video_subqcif_uncrop_pane

0x56b7,	// (0x00080972) popup_call3_audio_in_window_g4_ParamLimits

0x56b7,	// (0x00080972) popup_call3_audio_in_window_g4

0x55d8,	// (0x00080893) mup_spec_half_pane

0x55e1,	// (0x0008089c) mup_spec_half_pane_cp

0xc8c7,	// (0x00087b82) mup_osc_middle_pane

0xc8d0,	// (0x00087b8b) mup_visualizer_osc_pane_g1

0x55b9,	// (0x00080874) mup_spec_bar_pane_ParamLimits

0x55b9,	// (0x00080874) mup_spec_bar_pane

0xc8b4,	// (0x00087b6f) mup_spec_bar_pane_g1

0xc8be,	// (0x00087b79) mup_spec_bar_pane_g2

0x0001,

0xf614,	// (0x0008a8cf) mup_spec_bar_pane_g

0x28c1,	// (0x0007db7c) aid_cale_week_size_cell_pane_ParamLimits

0x28d6,	// (0x0007db91) bg_cale_heading_pane_ParamLimits

0xa8c2,	// (0x00085b7d) bg_cale_pane_cp01_ParamLimits

0x28f8,	// (0x0007dbb3) cale_week_corner_pane_ParamLimits

0x2912,	// (0x0007dbcd) cale_week_day_heading_pane_ParamLimits

0x2934,	// (0x0007dbef) cale_week_scroll_pane_g1_ParamLimits

0x2951,	// (0x0007dc0c) cale_week_scroll_pane_g2_ParamLimits

0x2964,	// (0x0007dc1f) cale_week_scroll_pane_g3_ParamLimits

0x2977,	// (0x0007dc32) cale_week_scroll_pane_g4_ParamLimits

0x298a,	// (0x0007dc45) cale_week_scroll_pane_g5_ParamLimits

0x299d,	// (0x0007dc58) cale_week_scroll_pane_g6_ParamLimits

0x29b0,	// (0x0007dc6b) cale_week_scroll_pane_g7_ParamLimits

0x29c3,	// (0x0007dc7e) cale_week_scroll_pane_g8_ParamLimits

0x29d8,	// (0x0007dc93) cale_week_scroll_pane_g9_ParamLimits

0x29eb,	// (0x0007dca6) cale_week_scroll_pane_g10_ParamLimits

0x29fe,	// (0x0007dcb9) cale_week_scroll_pane_g11_ParamLimits

0x2a11,	// (0x0007dccc) cale_week_scroll_pane_g12_ParamLimits

0x2a28,	// (0x0007dce3) cale_week_scroll_pane_g13_ParamLimits

0x2a43,	// (0x0007dcfe) cale_week_scroll_pane_g14_ParamLimits

0x2a5e,	// (0x0007dd19) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0008a46b) cale_week_scroll_pane_g_ParamLimits

0x2a8e,	// (0x0007dd49) cale_week_time_pane_ParamLimits

0x2aa3,	// (0x0007dd5e) grid_cale_week_pane_ParamLimits

0xa8df,	// (0x00085b9a) listscroll_cale_week_pane_t1

0xa8f1,	// (0x00085bac) scroll_pane_cp08_ParamLimits

0x374c,	// (0x0007ea07) cale_month_corner_pane_ParamLimits

0xacff,	// (0x00085fba) cale_month_pane_t1

0x3bf0,	// (0x0007eeab) cale_month_week_pane_ParamLimits

0xb3d9,	// (0x00086694) popup_call_status_window_g1_ParamLimits

0x442e,	// (0x0007f6e9) popup_call_status_window_g2_ParamLimits

0x443a,	// (0x0007f6f5) popup_call_status_window_g3_ParamLimits

0xf351,	// (0x0008a60c) popup_call_status_window_g_ParamLimits

0xb0af,	// (0x0008636a) aid_call2_pane

0x0fda,	// (0x0007c295) msg_header_pane_g1

0x4d16,	// (0x0007ffd1) postcard_address2_pane_ParamLimits

0x4d16,	// (0x0007ffd1) postcard_address2_pane

0x4d22,	// (0x0007ffdd) postcard_message2_pane_ParamLimits

0x4d22,	// (0x0007ffdd) postcard_message2_pane

0x5550,	// (0x0008080b) message2_row_pane_ParamLimits

0x5550,	// (0x0008080b) message2_row_pane

0x556b,	// (0x00080826) address2_row_pane_ParamLimits

0x556b,	// (0x00080826) address2_row_pane

0xc882,	// (0x00087b3d) postcard_message2_row_pane_g1

0xc88a,	// (0x00087b45) postcard_message2_row_pane_t1

0xc882,	// (0x00087b3d) address2_row_pane_g1

0xc88a,	// (0x00087b45) address2_row_pane_t1

0x2e0e,	// (0x0007e0c9) aid_size_cell_vorec

0xa458,	// (0x00085713) main_rss_pane

0x557e,	// (0x00080839) rss_list_single_pane_ParamLimits

0x557e,	// (0x00080839) rss_list_single_pane

0xc898,	// (0x00087b53) rss_list_single_pane_t1

0xc8a6,	// (0x00087b61) rss_list_single_pane_t2

0x0001,

0xf60f,	// (0x0008a8ca) rss_list_single_pane_t

0xa458,	// (0x00085713) main_camera2_pane

0xa458,	// (0x00085713) main_video2_pane

0x57b3,	// (0x00080a6e) cams_zoom_pane_cp2_ParamLimits

0x57b3,	// (0x00080a6e) cams_zoom_pane_cp2

0x57bf,	// (0x00080a7a) image2_vga_pane_ParamLimits

0x57bf,	// (0x00080a7a) image2_vga_pane

0x57ce,	// (0x00080a89) main_camera2_pane_g1_ParamLimits

0x57ce,	// (0x00080a89) main_camera2_pane_g1

0x57da,	// (0x00080a95) main_camera2_pane_g2_ParamLimits

0x57da,	// (0x00080a95) main_camera2_pane_g2

0x57e6,	// (0x00080aa1) main_camera2_pane_g3_ParamLimits

0x57e6,	// (0x00080aa1) main_camera2_pane_g3

0x57f2,	// (0x00080aad) main_camera2_pane_g4_ParamLimits

0x57f2,	// (0x00080aad) main_camera2_pane_g4

0x57fe,	// (0x00080ab9) main_camera2_pane_g5_ParamLimits

0x57fe,	// (0x00080ab9) main_camera2_pane_g5

0x580a,	// (0x00080ac5) main_camera2_pane_g6_ParamLimits

0x580a,	// (0x00080ac5) main_camera2_pane_g6

0x5816,	// (0x00080ad1) main_camera2_pane_g7_ParamLimits

0x5816,	// (0x00080ad1) main_camera2_pane_g7

0x5822,	// (0x00080add) main_camera2_pane_g8_ParamLimits

0x5822,	// (0x00080add) main_camera2_pane_g8

0x0008,

0xf630,	// (0x0008a8eb) main_camera2_pane_g_ParamLimits

0xf630,	// (0x0008a8eb) main_camera2_pane_g

0x583a,	// (0x00080af5) main_camera2_pane_t1_ParamLimits

0x583a,	// (0x00080af5) main_camera2_pane_t1

0x584c,	// (0x00080b07) main_camera2_pane_t2_ParamLimits

0x584c,	// (0x00080b07) main_camera2_pane_t2

0x585e,	// (0x00080b19) main_camera2_pane_t3_ParamLimits

0x585e,	// (0x00080b19) main_camera2_pane_t3

0x5870,	// (0x00080b2b) main_camera2_pane_t4_ParamLimits

0x5870,	// (0x00080b2b) main_camera2_pane_t4

0x0006,

0xf643,	// (0x0008a8fe) main_camera2_pane_t_ParamLimits

0xf643,	// (0x0008a8fe) main_camera2_pane_t

0x58d2,	// (0x00080b8d) cams_zoom_pane_cp4_ParamLimits

0x58d2,	// (0x00080b8d) cams_zoom_pane_cp4

0x58e2,	// (0x00080b9d) image2_cif_pane_ParamLimits

0x58e2,	// (0x00080b9d) image2_cif_pane

0x58f7,	// (0x00080bb2) image2_subqcif_pane_ParamLimits

0x58f7,	// (0x00080bb2) image2_subqcif_pane

0x5906,	// (0x00080bc1) main_video2_pane_g1_ParamLimits

0x5906,	// (0x00080bc1) main_video2_pane_g1

0x5918,	// (0x00080bd3) main_video2_pane_g2_ParamLimits

0x5918,	// (0x00080bd3) main_video2_pane_g2

0x5928,	// (0x00080be3) main_video2_pane_g3_ParamLimits

0x5928,	// (0x00080be3) main_video2_pane_g3

0x5938,	// (0x00080bf3) main_video2_pane_g4_ParamLimits

0x5938,	// (0x00080bf3) main_video2_pane_g4

0x5948,	// (0x00080c03) main_video2_pane_g5_ParamLimits

0x5948,	// (0x00080c03) main_video2_pane_g5

0x5958,	// (0x00080c13) main_video2_pane_g6_ParamLimits

0x5958,	// (0x00080c13) main_video2_pane_g6

0x0005,

0xf652,	// (0x0008a90d) main_video2_pane_g_ParamLimits

0xf652,	// (0x0008a90d) main_video2_pane_g

0x596a,	// (0x00080c25) main_video2_pane_t1_ParamLimits

0x596a,	// (0x00080c25) main_video2_pane_t1

0x5984,	// (0x00080c3f) main_video2_pane_t2_ParamLimits

0x5984,	// (0x00080c3f) main_video2_pane_t2

0x59aa,	// (0x00080c65) main_video2_pane_t3_ParamLimits

0x59aa,	// (0x00080c65) main_video2_pane_t3

0x0002,

0xf65f,	// (0x0008a91a) main_video2_pane_t_ParamLimits

0xf65f,	// (0x0008a91a) main_video2_pane_t

0x5274,	// (0x0008052f) call_muted_g2

0x0001,

0xf601,	// (0x0008a8bc) call_muted_g

0xa458,	// (0x00085713) main_mup2_pane

0xc907,	// (0x00087bc2) main_mup2_pane_g1_ParamLimits

0xc907,	// (0x00087bc2) main_mup2_pane_g1

0x59d0,	// (0x00080c8b) main_mup2_pane_g2_ParamLimits

0x59d0,	// (0x00080c8b) main_mup2_pane_g2

0x5c52,	// (0x00080f0d) main_mup_pane_g13_cp1

0x5c5a,	// (0x00080f15) mup_volume_pane_cp1

0x59f0,	// (0x00080cab) main_mup2_pane_g4_ParamLimits

0x59f0,	// (0x00080cab) main_mup2_pane_g4

0x5a05,	// (0x00080cc0) main_mup2_pane_g5_ParamLimits

0x5a05,	// (0x00080cc0) main_mup2_pane_g5

0x5a1a,	// (0x00080cd5) main_mup2_pane_g6_ParamLimits

0x5a1a,	// (0x00080cd5) main_mup2_pane_g6

0x5a2f,	// (0x00080cea) main_mup2_pane_g7_ParamLimits

0x5a2f,	// (0x00080cea) main_mup2_pane_g7

0x0006,

0xf666,	// (0x0008a921) main_mup2_pane_g_ParamLimits

0xf666,	// (0x0008a921) main_mup2_pane_g

0x5a4b,	// (0x00080d06) main_mup2_pane_t1_ParamLimits

0x5a4b,	// (0x00080d06) main_mup2_pane_t1

0x5a62,	// (0x00080d1d) main_mup2_pane_t2_ParamLimits

0x5a62,	// (0x00080d1d) main_mup2_pane_t2

0x5a79,	// (0x00080d34) main_mup2_pane_t3_ParamLimits

0x5a79,	// (0x00080d34) main_mup2_pane_t3

0x5a90,	// (0x00080d4b) main_mup2_pane_t4_ParamLimits

0x5a90,	// (0x00080d4b) main_mup2_pane_t4

0x5aaa,	// (0x00080d65) main_mup2_pane_t5_ParamLimits

0x5aaa,	// (0x00080d65) main_mup2_pane_t5

0x5ac4,	// (0x00080d7f) main_mup2_pane_t6_ParamLimits

0x5ac4,	// (0x00080d7f) main_mup2_pane_t6

0x0005,

0xf675,	// (0x0008a930) main_mup2_pane_t_ParamLimits

0xf675,	// (0x0008a930) main_mup2_pane_t

0x5afc,	// (0x00080db7) mup2_visualizer_pane_ParamLimits

0x5afc,	// (0x00080db7) mup2_visualizer_pane

0x5b32,	// (0x00080ded) mup_progress_pane_cp_ParamLimits

0x5b32,	// (0x00080ded) mup_progress_pane_cp

0x5c3d,	// (0x00080ef8) mup_volume_pane_cp_ParamLimits

0x5c3d,	// (0x00080ef8) mup_volume_pane_cp

0x5b49,	// (0x00080e04) mup2_visualizer_pane_g1_ParamLimits

0x5b49,	// (0x00080e04) mup2_visualizer_pane_g1

0xc913,	// (0x00087bce) mup2_visualizer_pane_g2_ParamLimits

0xc913,	// (0x00087bce) mup2_visualizer_pane_g2

0x5b5e,	// (0x00080e19) mup2_visualizer_pane_g3_ParamLimits

0x5b5e,	// (0x00080e19) mup2_visualizer_pane_g3

0x0002,

0xf682,	// (0x0008a93d) mup2_visualizer_pane_g_ParamLimits

0xf682,	// (0x0008a93d) mup2_visualizer_pane_g

0xb6f4,	// (0x000869af) aid_size_cell_fmradio

0x538a,	// (0x00080645) aid_height_parent_landcape

0xab54,	// (0x00085e0f) wml_content_pane_cp

0xab5c,	// (0x00085e17) wml_tabs_pane

0xab6e,	// (0x00085e29) popup_wml_miniature_window

0xab76,	// (0x00085e31) scroll_pane_cp021

0xab8a,	// (0x00085e45) wml_content_pane_comp8

0xa458,	// (0x00085713) bg_popup_sub_pane_cp05

0xc931,	// (0x00087bec) popup_wml_miniature_window_g1

0xc939,	// (0x00087bf4) wml_miniature_view_pane

0x5b6c,	// (0x00080e27) aid_size_wml_view

0x5b74,	// (0x00080e2f) wml_miniature_view_pane_g1

0x5b7d,	// (0x00080e38) wml_miniature_view_pane_g2

0x5b86,	// (0x00080e41) wml_miniature_view_pane_g3

0x5b8e,	// (0x00080e49) wml_miniature_view_pane_g4

0x5b96,	// (0x00080e51) wml_miniature_view_pane_g5

0x5b9e,	// (0x00080e59) wml_miniature_view_pane_g6

0x5ba6,	// (0x00080e61) wml_miniature_view_pane_g7

0x5bae,	// (0x00080e69) wml_miniature_view_pane_g8

0x0007,

0xf689,	// (0x0008a944) wml_miniature_view_pane_g

0xc907,	// (0x00087bc2) background_graphic_ParamLimits

0xc907,	// (0x00087bc2) background_graphic

0xc941,	// (0x00087bfc) wml_tabs_2_pane

0xc94a,	// (0x00087c05) wml_tabs_3_pane_ParamLimits

0xc94a,	// (0x00087c05) wml_tabs_3_pane

0xc95c,	// (0x00087c17) wml_tabs_4_pane_ParamLimits

0xc95c,	// (0x00087c17) wml_tabs_4_pane

0xc972,	// (0x00087c2d) wml_tabs_5_pane_ParamLimits

0xc972,	// (0x00087c2d) wml_tabs_5_pane

0xc98c,	// (0x00087c47) wml_tabs_pane_g2_ParamLimits

0xc98c,	// (0x00087c47) wml_tabs_pane_g2

0xc9a0,	// (0x00087c5b) wml_tabs_pane_g3_ParamLimits

0xc9a0,	// (0x00087c5b) wml_tabs_pane_g3

0x5bb6,	// (0x00080e71) wml_tabs_2_active_pane_ParamLimits

0x5bb6,	// (0x00080e71) wml_tabs_2_active_pane

0x5bc6,	// (0x00080e81) wml_tabs_2_passive_pane_ParamLimits

0x5bc6,	// (0x00080e81) wml_tabs_2_passive_pane

0x5bd6,	// (0x00080e91) wml_tabs_3_active_pane_cp_ParamLimits

0x5bd6,	// (0x00080e91) wml_tabs_3_active_pane_cp

0x5be7,	// (0x00080ea2) wml_tabs_3_passive_pane_ParamLimits

0x5be7,	// (0x00080ea2) wml_tabs_3_passive_pane

0x5bf8,	// (0x00080eb3) wml_tabs_3_passive_pane_cp_ParamLimits

0x5bf8,	// (0x00080eb3) wml_tabs_3_passive_pane_cp

0x5c09,	// (0x00080ec4) tabs_4_active_pane

0x5c11,	// (0x00080ecc) tabs_4_passive_pane

0x5c19,	// (0x00080ed4) tabs_4_passive_pane_cp

0x5c21,	// (0x00080edc) tabs_4_passive_pane_cp2

0x514f,	// (0x0008040a) aid_height_text

0x495e,	// (0x0007fc19) mup_volume_cont_pane_ParamLimits

0x495e,	// (0x0007fc19) mup_volume_cont_pane

0x2406,	// (0x0007d6c1) aid_size_cell_pinb

0x2410,	// (0x0007d6cb) aid_size_list_pinb

0x5b1b,	// (0x00080dd6) mup2_volume_cont_pane_ParamLimits

0x5b1b,	// (0x00080dd6) mup2_volume_cont_pane

0x5c29,	// (0x00080ee4) mup2_volume_cont_pane_g1_ParamLimits

0x5c29,	// (0x00080ee4) mup2_volume_cont_pane_g1

0x2040,	// (0x0007d2fb) aid_size_cell_touch_ParamLimits

0x2040,	// (0x0007d2fb) aid_size_cell_touch

0x22e9,	// (0x0007d5a4) touch_pane_ParamLimits

0x22e9,	// (0x0007d5a4) touch_pane

0xa03b,	// (0x000852f6) main_rss2_pane

0xc9bd,	// (0x00087c78) listscroll_rss2_pane

0xc9c6,	// (0x00087c81) rss2_navigation_pane

0xc9ce,	// (0x00087c89) list_rss2_pane

0xb1d4,	// (0x0008648f) scroll_pane_cp22

0xc9d6,	// (0x00087c91) rss2_navigation_pane_g1

0xc9df,	// (0x00087c9a) rss2_navigation_pane_g2

0xc9e7,	// (0x00087ca2) rss2_navigation_pane_g3

0x0002,

0xf69a,	// (0x0008a955) rss2_navigation_pane_g

0xc9ef,	// (0x00087caa) rss2_navigation_pane_t1

0x5c62,	// (0x00080f1d) rss2_list_single_pane_ParamLimits

0x5c62,	// (0x00080f1d) rss2_list_single_pane

0xc9fd,	// (0x00087cb8) rss2_list_single_pane_t2

0xca0b,	// (0x00087cc6) rss2_list_single_pane_t3_ParamLimits

0xca0b,	// (0x00087cc6) rss2_list_single_pane_t3

0xca28,	// (0x00087ce3) rss2_list_single_pane_t4

0x4292,	// (0x0007f54d) smil_status_pane_g1

0xa9b2,	// (0x00085c6d) main_image2_pane_ParamLimits

0xa9b2,	// (0x00085c6d) main_image2_pane

0x582e,	// (0x00080ae9) main_camera2_pane_g9_ParamLimits

0x582e,	// (0x00080ae9) main_camera2_pane_g9

0x5882,	// (0x00080b3d) main_camera2_pane_t5_ParamLimits

0x5882,	// (0x00080b3d) main_camera2_pane_t5

0x5894,	// (0x00080b4f) main_camera2_pane_t6_ParamLimits

0x5894,	// (0x00080b4f) main_camera2_pane_t6

0x5c96,	// (0x00080f51) main_image2_pane_g1_ParamLimits

0x5c96,	// (0x00080f51) main_image2_pane_g1

0x4ee9,	// (0x000801a4) smil2_video_pane_ParamLimits

0x4ee9,	// (0x000801a4) smil2_video_pane

0x2074,	// (0x0007d32f) aid_zoom_text_primary_cp

0x2292,	// (0x0007d54d) popup_preview_fixed_window

0xaabd,	// (0x00085d78) im_reading_pane_g1

0x5778,	// (0x00080a33) cams2_bc_adjust_pane_cp_ParamLimits

0x5778,	// (0x00080a33) cams2_bc_adjust_pane_cp

0x58c4,	// (0x00080b7f) cams2_bc_adjust_pane_ParamLimits

0x58c4,	// (0x00080b7f) cams2_bc_adjust_pane

0x5ca2,	// (0x00080f5d) cams2_bc_adjust_pane_g1

0x5caa,	// (0x00080f65) cams2_slider_pane

0x5cb3,	// (0x00080f6e) cams2_slider_pane_g1

0x5cbc,	// (0x00080f77) cams2_slider_pane_g2

0x0006,

0xf6a1,	// (0x0008a95c) cams2_slider_pane_g

0x2510,	// (0x0007d7cb) calc_display_pane_ParamLimits

0x252e,	// (0x0007d7e9) calc_paper_pane_ParamLimits

0x254a,	// (0x0007d805) grid_calc_pane_ParamLimits

0x4498,	// (0x0007f753) popup_clock_digital_window_t1_ParamLimits

0xb691,	// (0x0008694c) main_image_pane_t1

0x24f6,	// (0x0007d7b1) aid_size_cell_calc_ParamLimits

0x24f6,	// (0x0007d7b1) aid_size_cell_calc

0x53c4,	// (0x0008067f) popup_blid_sat_info2_window_ParamLimits

0x53c4,	// (0x0008067f) popup_blid_sat_info2_window

0xca3e,	// (0x00087cf9) aid_size_cell_blid

0xca46,	// (0x00087d01) bg_popup_window_pane_cp07

0xca69,	// (0x00087d24) grid_popup_blid_pane

0xca73,	// (0x00087d2e) heading_pane_cp05_ParamLimits

0xca73,	// (0x00087d2e) heading_pane_cp05

0xcb3d,	// (0x00087df8) cell_popup_blid_pane_ParamLimits

0xcb3d,	// (0x00087df8) cell_popup_blid_pane

0xcb61,	// (0x00087e1c) cell_popup_blid_pane_g1

0xcb69,	// (0x00087e24) cell_popup_blid_pane_t1

0x5ae1,	// (0x00080d9c) mup2_indicator_pane_ParamLimits

0x5ae1,	// (0x00080d9c) mup2_indicator_pane

0xa969,	// (0x00085c24) mup2_visualizer_osc_pane

0xc91f,	// (0x00087bda) mup2_visualizer_spec_pane_ParamLimits

0xc91f,	// (0x00087bda) mup2_visualizer_spec_pane

0x5cd6,	// (0x00080f91) mup2_spec_half_pane

0x5cdf,	// (0x00080f9a) mup2_spec_half_pane_cp

0x5ce9,	// (0x00080fa4) mup2_spec_bar_pane_ParamLimits

0x5ce9,	// (0x00080fa4) mup2_spec_bar_pane

0xc8b4,	// (0x00087b6f) mup2_spec_bar_pane_g1

0xc8be,	// (0x00087b79) mup2_spec_bar_pane_g2

0x0001,

0xf614,	// (0x0008a8cf) mup2_spec_bar_pane_g

0x5d08,	// (0x00080fc3) mup2_osc_middle_pane

0xc8d0,	// (0x00087b8b) mup2_visualizer_osc_pane_g1

0xa065,	// (0x00085320) popup_number_entry_window_t1_ParamLimits

0xa078,	// (0x00085333) popup_number_entry_window_t2_ParamLimits

0xa08a,	// (0x00085345) popup_number_entry_window_t3_ParamLimits

0x2340,	// (0x0007d5fb) popup_number_entry_window_t5_ParamLimits

0x2340,	// (0x0007d5fb) popup_number_entry_window_t5

0xf0ca,	// (0x0008a385) popup_number_entry_window_t_ParamLimits

0xa09c,	// (0x00085357) text_title_cp2_ParamLimits

0x4bde,	// (0x0007fe99) aid_hotspot_pointer_text2_pane

0x4c78,	// (0x0007ff33) main_viewer_pane_g9_ParamLimits

0x4c78,	// (0x0007ff33) main_viewer_pane_g9

0xacff,	// (0x00085fba) cale_month_pane_t1_ParamLimits

0xad3c,	// (0x00085ff7) bg_cale_pane_ParamLimits

0xad54,	// (0x0008600f) list_cale_pane_ParamLimits

0xad65,	// (0x00086020) listscroll_cale_day_pane_t1

0xad77,	// (0x00086032) scroll_pane_cp09_ParamLimits

0x499d,	// (0x0007fc58) main_mup_eq_pane_t1_ParamLimits

0x499d,	// (0x0007fc58) main_mup_eq_pane_t1

0x49b7,	// (0x0007fc72) main_mup_eq_pane_t2_ParamLimits

0x49b7,	// (0x0007fc72) main_mup_eq_pane_t2

0x49cf,	// (0x0007fc8a) main_mup_eq_pane_t3_ParamLimits

0x49cf,	// (0x0007fc8a) main_mup_eq_pane_t3

0x49e7,	// (0x0007fca2) main_mup_eq_pane_t4_ParamLimits

0x49e7,	// (0x0007fca2) main_mup_eq_pane_t4

0x49ff,	// (0x0007fcba) main_mup_eq_pane_t5_ParamLimits

0x49ff,	// (0x0007fcba) main_mup_eq_pane_t5

0x4a17,	// (0x0007fcd2) main_mup_eq_pane_t6_ParamLimits

0x4a17,	// (0x0007fcd2) main_mup_eq_pane_t6

0x4a2b,	// (0x0007fce6) main_mup_eq_pane_t7_ParamLimits

0x4a2b,	// (0x0007fce6) main_mup_eq_pane_t7

0x4a3f,	// (0x0007fcfa) main_mup_eq_pane_t8_ParamLimits

0x4a3f,	// (0x0007fcfa) main_mup_eq_pane_t8

0x4a55,	// (0x0007fd10) main_mup_eq_pane_t9_ParamLimits

0x4a55,	// (0x0007fd10) main_mup_eq_pane_t9

0x4a6d,	// (0x0007fd28) main_mup_eq_pane_t10_ParamLimits

0x4a6d,	// (0x0007fd28) main_mup_eq_pane_t10

0x0009,

0xf450,	// (0x0008a70b) main_mup_eq_pane_t_ParamLimits

0xf450,	// (0x0008a70b) main_mup_eq_pane_t

0x4b2a,	// (0x0007fde5) mup_equalizer_pane_cp5_ParamLimits

0x4b40,	// (0x0007fdfb) mup_equalizer_pane_cp6_ParamLimits

0x4b58,	// (0x0007fe13) mup_equalizer_pane_cp7_ParamLimits

0xa03b,	// (0x000852f6) main_gallery_pane

0xc8d9,	// (0x00087b94) smil2_volume_pane

0xc8e1,	// (0x00087b9c) smil_status_volume_pane_g1_ParamLimits

0xc8f4,	// (0x00087baf) smil_status_volume_pane_g2_ParamLimits

0x55eb,	// (0x000808a6) smil_status_volume_pane_g3_ParamLimits

0xf619,	// (0x0008a8d4) smil_status_volume_pane_g_ParamLimits

0xca46,	// (0x00087d01) bg_popup_window_pane_cp07_ParamLimits

0xca54,	// (0x00087d0f) blid_firmament_pane

0x5d11,	// (0x00080fcc) aid_size_cell_gallery_ParamLimits

0x5d11,	// (0x00080fcc) aid_size_cell_gallery

0x5d1f,	// (0x00080fda) grid_gallery_pane_ParamLimits

0x5d1f,	// (0x00080fda) grid_gallery_pane

0x5d2f,	// (0x00080fea) cell_gallery_pane_ParamLimits

0x5d2f,	// (0x00080fea) cell_gallery_pane

0xcb77,	// (0x00087e32) bg_cell_gallery_focus_pane_ParamLimits

0xcb77,	// (0x00087e32) bg_cell_gallery_focus_pane

0xcb89,	// (0x00087e44) cell_gallery_pane_g1_ParamLimits

0xcb89,	// (0x00087e44) cell_gallery_pane_g1

0x5d7d,	// (0x00081038) cell_gallery_pane_g2_ParamLimits

0x5d7d,	// (0x00081038) cell_gallery_pane_g2

0x5d8a,	// (0x00081045) cell_gallery_pane_g3_ParamLimits

0x5d8a,	// (0x00081045) cell_gallery_pane_g3

0xcb95,	// (0x00087e50) cell_gallery_pane_g4_ParamLimits

0xcb95,	// (0x00087e50) cell_gallery_pane_g4

0x0003,

0xf6c7,	// (0x0008a982) cell_gallery_pane_g_ParamLimits

0xf6c7,	// (0x0008a982) cell_gallery_pane_g

0xcba1,	// (0x00087e5c) bg_cell_gallery_focus_pane_g1

0xcba9,	// (0x00087e64) bg_cell_gallery_focus_pane_g2

0xcbb1,	// (0x00087e6c) bg_cell_gallery_focus_pane_g3

0xcbb9,	// (0x00087e74) bg_cell_gallery_focus_pane_g4

0xcbc1,	// (0x00087e7c) bg_cell_gallery_focus_pane_g5

0xcbc9,	// (0x00087e84) bg_cell_gallery_focus_pane_g6

0xcbd1,	// (0x00087e8c) bg_cell_gallery_focus_pane_g7

0xcbd9,	// (0x00087e94) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d0,	// (0x0008a98b) bg_cell_gallery_focus_pane_g

0xcbe1,	// (0x00087e9c) aid_firma_cardinal

0xcbf5,	// (0x00087eb0) blid_firmament_pane_t1

0xcc0c,	// (0x00087ec7) blid_firmament_pane_t2

0xcc23,	// (0x00087ede) blid_firmament_pane_t3

0xcc46,	// (0x00087f01) blid_firmament_pane_t4

0x0003,

0xf6e1,	// (0x0008a99c) blid_firmament_pane_t

0xcc5d,	// (0x00087f18) blid_sat_info_pane

0xcc6d,	// (0x00087f28) blid_sat_info_pane_g1

0xcc6d,	// (0x00087f28) blid_sat_info_pane_g2

0x0001,

0xf6ea,	// (0x0008a9a5) blid_sat_info_pane_g

0xcc77,	// (0x00087f32) blid_sat_info_pane_t1

0xcc85,	// (0x00087f40) smil2_volume_content_pane

0xcc8e,	// (0x00087f49) smil2_volume_pane_g1

0xcc96,	// (0x00087f51) smil2_volume_content_pane_g1

0xcc9f,	// (0x00087f5a) smil2_volume_content_pane_g2

0xcca8,	// (0x00087f63) smil2_volume_content_pane_g3

0xccb1,	// (0x00087f6c) smil2_volume_content_pane_g4

0xccba,	// (0x00087f75) smil2_volume_content_pane_g5

0xccc3,	// (0x00087f7e) smil2_volume_content_pane_g6

0xcccc,	// (0x00087f87) smil2_volume_content_pane_g7

0xccd5,	// (0x00087f90) smil2_volume_content_pane_g8

0xccde,	// (0x00087f99) smil2_volume_content_pane_g9

0xcce7,	// (0x00087fa2) smil2_volume_content_pane_g10

0x0009,

0xf6ef,	// (0x0008a9aa) smil2_volume_content_pane_g

0x2b28,	// (0x0007dde3) cale_week_day_heading_pane_t1_ParamLimits

0x2b63,	// (0x0007de1e) cale_week_day_heading_pane_t2_ParamLimits

0x2b9e,	// (0x0007de59) cale_week_day_heading_pane_t3_ParamLimits

0x2bd9,	// (0x0007de94) cale_week_day_heading_pane_t4_ParamLimits

0x2c14,	// (0x0007decf) cale_week_day_heading_pane_t5_ParamLimits

0x2c4f,	// (0x0007df0a) cale_week_day_heading_pane_t6_ParamLimits

0x2c8a,	// (0x0007df45) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0008a48c) cale_week_day_heading_pane_t_ParamLimits

0xa90e,	// (0x00085bc9) bg_cale_side_pane_ParamLimits

0x2cc5,	// (0x0007df80) cale_week_time_pane_t1_ParamLimits

0x2cdf,	// (0x0007df9a) cale_week_time_pane_t2_ParamLimits

0x2cf9,	// (0x0007dfb4) cale_week_time_pane_t3_ParamLimits

0x2d13,	// (0x0007dfce) cale_week_time_pane_t4_ParamLimits

0x2d2d,	// (0x0007dfe8) cale_week_time_pane_t5_ParamLimits

0x2d47,	// (0x0007e002) cale_week_time_pane_t6_ParamLimits

0x2d67,	// (0x0007e022) cale_week_time_pane_t7_ParamLimits

0x2d8b,	// (0x0007e046) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0008a49b) cale_week_time_pane_t_ParamLimits

0x2daf,	// (0x0007e06a) cell_cale_week_pane_g2_ParamLimits

0xa90e,	// (0x00085bc9) bg_cale_side_pane_cp01_ParamLimits

0x4067,	// (0x0007f322) cale_month_week_pane_t1_ParamLimits

0x4080,	// (0x0007f33b) cale_month_week_pane_t2_ParamLimits

0x4099,	// (0x0007f354) cale_month_week_pane_t3_ParamLimits

0x40b2,	// (0x0007f36d) cale_month_week_pane_t4_ParamLimits

0x40cd,	// (0x0007f388) cale_month_week_pane_t5_ParamLimits

0x40ee,	// (0x0007f3a9) cale_month_week_pane_t6_ParamLimits

0xf2b0,	// (0x0008a56b) cale_month_week_pane_t_ParamLimits

0x4235,	// (0x0007f4f0) cell_cale_month_pane_g1_ParamLimits

0xa03b,	// (0x000852f6) main_cale_event_viewer_pane

0xa03b,	// (0x000852f6) listscroll_cale_event_viewer_pane

0xccf0,	// (0x00087fab) list_cale_ev_pane

0xccf8,	// (0x00087fb3) scroll_pane_cp023

0xcd04,	// (0x00087fbf) field_cale_ev_pane_ParamLimits

0xcd04,	// (0x00087fbf) field_cale_ev_pane

0xcd22,	// (0x00087fdd) field_cale_ev_content_pane_ParamLimits

0xcd22,	// (0x00087fdd) field_cale_ev_content_pane

0xcd2e,	// (0x00087fe9) field_cale_ev_pane_g1_ParamLimits

0xcd2e,	// (0x00087fe9) field_cale_ev_pane_g1

0xcd3a,	// (0x00087ff5) field_cale_ev_pane_g2_ParamLimits

0xcd3a,	// (0x00087ff5) field_cale_ev_pane_g2

0xcd52,	// (0x0008800d) field_cale_ev_pane_g3_ParamLimits

0xcd52,	// (0x0008800d) field_cale_ev_pane_g3

0x0002,

0xf704,	// (0x0008a9bf) field_cale_ev_pane_g_ParamLimits

0xf704,	// (0x0008a9bf) field_cale_ev_pane_g

0xcd6a,	// (0x00088025) field_cale_ev_pane_t1_ParamLimits

0xcd6a,	// (0x00088025) field_cale_ev_pane_t1

0xa9c0,	// (0x00085c7b) field_cale_ev_content_pane_t1_ParamLimits

0xa9c0,	// (0x00085c7b) field_cale_ev_content_pane_t1

0xb577,	// (0x00086832) bg_button_pane_cp01

0x28b1,	// (0x0007db6c) listscroll_cale_week_pane_ParamLimits

0xa8b9,	// (0x00085b74) popup_toolbar_window_cp01

0xa8df,	// (0x00085b9a) listscroll_cale_week_pane_t1_ParamLimits

0x28b1,	// (0x0007db6c) listscroll_cale_day_pane_ParamLimits

0xa8b9,	// (0x00085b74) popup_toolbar_window_cp02

0xad65,	// (0x00086020) listscroll_cale_day_pane_t1_ParamLimits

0x28b1,	// (0x0007db6c) main_cale_month_pane_ParamLimits

0x54c7,	// (0x00080782) popup_toolbar_window_cp03_ParamLimits

0x54c7,	// (0x00080782) popup_toolbar_window_cp03

0x4dff,	// (0x000800ba) main_image_pane_g2_ParamLimits

0x4dff,	// (0x000800ba) main_image_pane_g2

0x4e0b,	// (0x000800c6) main_image_pane_g3_ParamLimits

0x4e0b,	// (0x000800c6) main_image_pane_g3

0x0002,

0xf4e2,	// (0x0008a79d) main_image_pane_g_ParamLimits

0xf4e2,	// (0x0008a79d) main_image_pane_g

0xb691,	// (0x0008694c) main_image_pane_t1_ParamLimits

0x4e17,	// (0x000800d2) main_image_pane_t2_ParamLimits

0x4e17,	// (0x000800d2) main_image_pane_t2

0x4e29,	// (0x000800e4) main_image_pane_t3_ParamLimits

0x4e29,	// (0x000800e4) main_image_pane_t3

0x4e3b,	// (0x000800f6) main_image_pane_t4_ParamLimits

0x4e3b,	// (0x000800f6) main_image_pane_t4

0x0003,

0xf4e9,	// (0x0008a7a4) main_image_pane_t_ParamLimits

0xf4e9,	// (0x0008a7a4) main_image_pane_t

0x4e4d,	// (0x00080108) popup_image_details_window_cp01

0x4e57,	// (0x00080112) popup_toobar_trans_pane_cp01_ParamLimits

0x4e57,	// (0x00080112) popup_toobar_trans_pane_cp01

0x5417,	// (0x000806d2) popup_image_details_window_ParamLimits

0x5417,	// (0x000806d2) popup_image_details_window

0x5425,	// (0x000806e0) popup_image_focus_window

0x576a,	// (0x00080a25) camera2_autofocus_pane_ParamLimits

0x576a,	// (0x00080a25) camera2_autofocus_pane

0xa03b,	// (0x000852f6) bg_popup_sub_pane_cp06

0xcd81,	// (0x0008803c) popup_image_focus_window_g1

0xcd89,	// (0x00088044) popup_image_focus_window_g2

0xcd91,	// (0x0008804c) popup_image_focus_window_g3

0xcd99,	// (0x00088054) popup_image_focus_window_g4

0x0003,

0xf70b,	// (0x0008a9c6) popup_image_focus_window_g

0xcda1,	// (0x0008805c) popup_image_focus_window_t1

0xcdaf,	// (0x0008806a) popup_image_focus_window_t2

0xcdbf,	// (0x0008807a) popup_image_focus_window_t3

0x0002,

0xf714,	// (0x0008a9cf) popup_image_focus_window_t

0xcdcd,	// (0x00088088) camera2_autofocus_pane_g1

0xa9b2,	// (0x00085c6d) bg_tb_trans_pane_cp01

0xcddb,	// (0x00088096) popup_image_details_window_g1

0xcdee,	// (0x000880a9) popup_image_details_window_g2

0x0002,

0xf726,	// (0x0008a9e1) popup_image_details_window_g

0xce17,	// (0x000880d2) popup_image_details_window_t1

0xce29,	// (0x000880e4) popup_image_details_window_t2

0xce42,	// (0x000880fd) popup_image_details_window_t3

0xce56,	// (0x00088111) popup_image_details_window_t4

0xce71,	// (0x0008812c) popup_image_details_window_t5

0x0004,

0xf72d,	// (0x0008a9e8) popup_image_details_window_t

0xa77e,	// (0x00085a39) bg_calc_paper_pane_ParamLimits

0xa03b,	// (0x000852f6) grid_highlight_pane_cp013

0x2647,	// (0x0007d902) list_calc_pane_ParamLimits

0x2659,	// (0x0007d914) scroll_pane_cp024

0xa792,	// (0x00085a4d) bg_calc_display_pane_ParamLimits

0x2661,	// (0x0007d91c) calc_display_pane_t1_ParamLimits

0x2676,	// (0x0007d931) calc_display_pane_t2_ParamLimits

0x268b,	// (0x0007d946) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0008a40c) calc_display_pane_t_ParamLimits

0x2768,	// (0x0007da23) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0008a429) cell_calc_pane_g

0x2771,	// (0x0007da2c) cell_calc_pane_t1

0xa7f1,	// (0x00085aac) grid_highlight_pane_cp02_ParamLimits

0xa807,	// (0x00085ac2) toolbar_button_pane_cp01_ParamLimits

0xa807,	// (0x00085ac2) toolbar_button_pane_cp01

0xb6d6,	// (0x00086991) temp_image_control_pane_ParamLimits

0xb6d6,	// (0x00086991) temp_image_control_pane

0xa9b2,	// (0x00085c6d) main_mp3_pane

0xce8b,	// (0x00088146) temp_image_control_pane_g1_ParamLimits

0xce8b,	// (0x00088146) temp_image_control_pane_g1

0xce99,	// (0x00088154) temp_image_control_pane_g2_ParamLimits

0xce99,	// (0x00088154) temp_image_control_pane_g2

0xceab,	// (0x00088166) temp_image_control_pane_g3_ParamLimits

0xceab,	// (0x00088166) temp_image_control_pane_g3

0x5dc7,	// (0x00081082) temp_image_control_pane_g4_ParamLimits

0x5dc7,	// (0x00081082) temp_image_control_pane_g4

0x0003,

0xf738,	// (0x0008a9f3) temp_image_control_pane_g_ParamLimits

0xf738,	// (0x0008a9f3) temp_image_control_pane_g

0xce8b,	// (0x00088146) main_mp3_pane_g1

0x5dd8,	// (0x00081093) main_mp3_pane_g2

0x0007,

0xf741,	// (0x0008a9fc) main_mp3_pane_g

0xceee,	// (0x000881a9) main_mp3_pane_t1

0xa971,	// (0x00085c2c) main_camera_pane_g8_ParamLimits

0xa971,	// (0x00085c2c) main_camera_pane_g8

0x3039,	// (0x0007e2f4) main_video_pane_g7_ParamLimits

0x3039,	// (0x0007e2f4) main_video_pane_g7

0x58b2,	// (0x00080b6d) main_camera2_pane_t7_ParamLimits

0x58b2,	// (0x00080b6d) main_camera2_pane_t7

0xab14,	// (0x00085dcf) scroll_pane_cp025_ParamLimits

0xab14,	// (0x00085dcf) scroll_pane_cp025

0xab28,	// (0x00085de3) scroll_pane_cp026_ParamLimits

0xab28,	// (0x00085de3) scroll_pane_cp026

0xab37,	// (0x00085df2) wml_content_pane_ParamLimits

0xa03b,	// (0x000852f6) main_touch_calib_pane

0x5e7c,	// (0x00081137) main_touch_calib_pane_g1

0x5e88,	// (0x00081143) main_touch_calib_pane_g2

0x5e94,	// (0x0008114f) main_touch_calib_pane_g3

0x5ea0,	// (0x0008115b) main_touch_calib_pane_g4

0x0003,

0xf75f,	// (0x0008aa1a) main_touch_calib_pane_g

0x5eac,	// (0x00081167) main_touch_calib_pane_t1

0x5ec5,	// (0x00081180) main_touch_calib_pane_t2

0x0004,

0xf768,	// (0x0008aa23) main_touch_calib_pane_t

0xb2a3,	// (0x0008655e) mup_progress_pane_cp02

0xb2d8,	// (0x00086593) navi_pane_g1

0xb393,	// (0x0008664e) navi_pane_mp_t3

0xa9b2,	// (0x00085c6d) main_mp3_pane_ParamLimits

0x5504,	// (0x000807bf) navi_pane_ParamLimits

0xce8b,	// (0x00088146) main_mp3_pane_g1_ParamLimits

0x5dd8,	// (0x00081093) main_mp3_pane_g2_ParamLimits

0x5de4,	// (0x0008109f) main_mp3_pane_g3_ParamLimits

0x5de4,	// (0x0008109f) main_mp3_pane_g3

0x5df0,	// (0x000810ab) main_mp3_pane_g4_ParamLimits

0x5df0,	// (0x000810ab) main_mp3_pane_g4

0xcebb,	// (0x00088176) main_mp3_pane_g5_ParamLimits

0xcebb,	// (0x00088176) main_mp3_pane_g5

0xcec9,	// (0x00088184) main_mp3_pane_g6_ParamLimits

0xcec9,	// (0x00088184) main_mp3_pane_g6

0xced6,	// (0x00088191) main_mp3_pane_g7_ParamLimits

0xced6,	// (0x00088191) main_mp3_pane_g7

0xcee2,	// (0x0008819d) main_mp3_pane_g8_ParamLimits

0xcee2,	// (0x0008819d) main_mp3_pane_g8

0xf741,	// (0x0008a9fc) main_mp3_pane_g_ParamLimits

0x5dfc,	// (0x000810b7) main_mp3_pane_t2

0x5e0c,	// (0x000810c7) main_mp3_pane_t3

0xcefc,	// (0x000881b7) main_mp3_pane_t4

0xcf0a,	// (0x000881c5) main_mp3_pane_t5

0x0005,

0xf752,	// (0x0008aa0d) main_mp3_pane_t

0xcf18,	// (0x000881d3) mup_progress_pane_cp01

0x2074,	// (0x0007d32f) aid_zoom_text_secondary2

0xccf0,	// (0x00087fab) list_cale_ev2_pane

0xccf8,	// (0x00087fb3) scroll_pane_cp023_ParamLimits

0x5f20,	// (0x000811db) field_cale_ev2_pane_ParamLimits

0x5f20,	// (0x000811db) field_cale_ev2_pane

0x5f4a,	// (0x00081205) field_cale_ev2_pane_g1_ParamLimits

0x5f4a,	// (0x00081205) field_cale_ev2_pane_g1

0x5f56,	// (0x00081211) field_cale_ev2_pane_g2_ParamLimits

0x5f56,	// (0x00081211) field_cale_ev2_pane_g2

0x5f6e,	// (0x00081229) field_cale_ev2_pane_g3_ParamLimits

0x5f6e,	// (0x00081229) field_cale_ev2_pane_g3

0x0003,

0xf773,	// (0x0008aa2e) field_cale_ev2_pane_g_ParamLimits

0xf773,	// (0x0008aa2e) field_cale_ev2_pane_g

0x105f,	// (0x0007c31a) field_cale_ev2_pane_t1_ParamLimits

0x105f,	// (0x0007c31a) field_cale_ev2_pane_t1

0x1076,	// (0x0007c331) field_cale_ev2_pane_t2_ParamLimits

0x1076,	// (0x0007c331) field_cale_ev2_pane_t2

0x0001,

0xf77c,	// (0x0008aa37) field_cale_ev2_pane_t_ParamLimits

0xf77c,	// (0x0008aa37) field_cale_ev2_pane_t

0x4ce0,	// (0x0007ff9b) main_postcard_pane_g5_ParamLimits

0x4ce0,	// (0x0007ff9b) main_postcard_pane_g5

0x4cee,	// (0x0007ffa9) main_postcard_pane_g6_ParamLimits

0x4cee,	// (0x0007ffa9) main_postcard_pane_g6

0x2e83,	// (0x0007e13e) camera2_autofocus_pane_cp_ParamLimits

0x2e83,	// (0x0007e13e) camera2_autofocus_pane_cp

0xa9b2,	// (0x00085c6d) main_mup3_pane

0x5fb2,	// (0x0008126d) main_mup3_pane_g1_ParamLimits

0x5fb2,	// (0x0008126d) main_mup3_pane_g1

0x5fd3,	// (0x0008128e) main_mup3_pane_g2_ParamLimits

0x5fd3,	// (0x0008128e) main_mup3_pane_g2

0x604d,	// (0x00081308) main_mup3_pane_g3_ParamLimits

0x604d,	// (0x00081308) main_mup3_pane_g3

0x6090,	// (0x0008134b) main_mup3_pane_g4_ParamLimits

0x6090,	// (0x0008134b) main_mup3_pane_g4

0x60d3,	// (0x0008138e) main_mup3_pane_g5_ParamLimits

0x60d3,	// (0x0008138e) main_mup3_pane_g5

0x6116,	// (0x000813d1) main_mup3_pane_g6_ParamLimits

0x6116,	// (0x000813d1) main_mup3_pane_g6

0xcf20,	// (0x000881db) main_mup3_pane_g7_ParamLimits

0xcf20,	// (0x000881db) main_mup3_pane_g7

0x0007,

0xf78c,	// (0x0008aa47) main_mup3_pane_g_ParamLimits

0xf78c,	// (0x0008aa47) main_mup3_pane_g

0x618c,	// (0x00081447) main_mup3_pane_t1_ParamLimits

0x618c,	// (0x00081447) main_mup3_pane_t1

0x61fb,	// (0x000814b6) main_mup3_pane_t2_ParamLimits

0x61fb,	// (0x000814b6) main_mup3_pane_t2

0x62c4,	// (0x0008157f) main_mup3_pane_t4_ParamLimits

0x62c4,	// (0x0008157f) main_mup3_pane_t4

0x6312,	// (0x000815cd) main_mup3_pane_t5_ParamLimits

0x6312,	// (0x000815cd) main_mup3_pane_t5

0x63c2,	// (0x0008167d) main_mup3_pane_t6_ParamLimits

0x63c2,	// (0x0008167d) main_mup3_pane_t6

0x0005,

0xf79d,	// (0x0008aa58) main_mup3_pane_t_ParamLimits

0xf79d,	// (0x0008aa58) main_mup3_pane_t

0x646e,	// (0x00081729) mup3_progress_pane_ParamLimits

0x646e,	// (0x00081729) mup3_progress_pane

0x64e2,	// (0x0008179d) popup_mup3_control_window_ParamLimits

0x64e2,	// (0x0008179d) popup_mup3_control_window

0xcf2e,	// (0x000881e9) popup_mup3_text_window

0x64fb,	// (0x000817b6) mup3_progress_pane_t1

0x651a,	// (0x000817d5) mup3_progress_pane_t2

0xcf36,	// (0x000881f1) mup3_progress_pane_t3

0x0002,

0xf7aa,	// (0x0008aa65) mup3_progress_pane_t

0xcf53,	// (0x0008820e) mup_progress_pane_cp03

0xa03b,	// (0x000852f6) bg_tb_trans_pane_cp04

0x6539,	// (0x000817f4) mup3_volume_pane

0x6541,	// (0x000817fc) popup_mup3_control_window_g1

0x654a,	// (0x00081805) mup3_volume_pane_g1

0x6553,	// (0x0008180e) mup3_volume_pane_g2

0x655c,	// (0x00081817) mup3_volume_pane_g3

0x0002,

0xf7b1,	// (0x0008aa6c) mup3_volume_pane_g

0xa03b,	// (0x000852f6) bg_tb_trans_pane_cp03

0xcf63,	// (0x0008821e) popup_mup3_text_window_g1

0xcf6b,	// (0x00088226) popup_mup3_text_window_t1

0xa7da,	// (0x00085a95) list_calc_item_pane_g1_ParamLimits

0xc9b4,	// (0x00087c6f) mup_volume_pane_cp_g1

0x5ede,	// (0x00081199) main_touch_calib_pane_t3

0x5ef4,	// (0x000811af) main_touch_calib_pane_t4

0x5f0a,	// (0x000811c5) main_touch_calib_pane_t5

0x202c,	// (0x0007d2e7) aid_cell_size_toolbar2

0x2034,	// (0x0007d2ef) aid_popup3_width_pane

0x0d4f,	// (0x0007c00a) aid_zoom_text_msg_primary

0x2e58,	// (0x0007e113) vorec_t7

0xa79e,	// (0x00085a59) bg_calc_paper_pane_g1_ParamLimits

0xa7aa,	// (0x00085a65) bg_calc_paper_pane_g2_ParamLimits

0xa7b6,	// (0x00085a71) bg_calc_paper_pane_g3_ParamLimits

0xa7c2,	// (0x00085a7d) bg_calc_paper_pane_g4_ParamLimits

0xa7ce,	// (0x00085a89) bg_calc_paper_pane_g5_ParamLimits

0x26ca,	// (0x0007d985) bg_calc_paper_pane_g6_ParamLimits

0x26db,	// (0x0007d996) bg_calc_paper_pane_g7_ParamLimits

0x26ec,	// (0x0007d9a7) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0008a413) bg_calc_paper_pane_g_ParamLimits

0x26fd,	// (0x0007d9b8) calc_bg_paper_pane_g9_ParamLimits

0x2f6a,	// (0x0007e225) image_qvga_pane_ParamLimits

0x2f6a,	// (0x0007e225) image_qvga_pane

0xa6b3,	// (0x0008596e) bg_popup_sub_pane_cp04_ParamLimits

0xb60d,	// (0x000868c8) popup_mup_playback_window_g1_ParamLimits

0xb619,	// (0x000868d4) popup_mup_playback_window_t1_ParamLimits

0xb62e,	// (0x000868e9) popup_mup_playback_window_t2_ParamLimits

0xf4dd,	// (0x0008a798) popup_mup_playback_window_t_ParamLimits

0x59e1,	// (0x00080c9c) main_mup2_pane_g3_ParamLimits

0x59e1,	// (0x00080c9c) main_mup2_pane_g3

0x3222,	// (0x0007e4dd) popup_toolbar_window_cp04

0xba23,	// (0x00086cde) popup_call2_audio_second_window_g3_ParamLimits

0xba23,	// (0x00086cde) popup_call2_audio_second_window_g3

0xbe2d,	// (0x000870e8) popup_call2_audio_first_window_g4_ParamLimits

0xbe2d,	// (0x000870e8) popup_call2_audio_first_window_g4

0xc4ac,	// (0x00087767) popup_call2_audio_in_window_g4_ParamLimits

0xc4ac,	// (0x00087767) popup_call2_audio_in_window_g4

0x4df2,	// (0x000800ad) aid_area_sk_bg_cut_ParamLimits

0x4df2,	// (0x000800ad) aid_area_sk_bg_cut

0xb643,	// (0x000868fe) aid_area_sk_bg_cut_2_ParamLimits

0xb643,	// (0x000868fe) aid_area_sk_bg_cut_2

0x5d6d,	// (0x00081028) aid_placing_details_win

0x5d75,	// (0x00081030) aid_placing_details_win_2

0xcdcd,	// (0x00088088) camera2_autofocus_pane_g1_ParamLimits

0x2283,	// (0x0007d53e) popup_fixed_preview_cale_window_ParamLimits

0x2283,	// (0x0007d53e) popup_fixed_preview_cale_window

0xb41f,	// (0x000866da) navi_slider_pane_g3

0xb428,	// (0x000866e3) navi_slider_pane_g4

0xb431,	// (0x000866ec) navi_slider_pane_g5

0xb41f,	// (0x000866da) navi_slider_pane_g6

0x4741,	// (0x0007f9fc) navi_slider_pane_g7

0xb544,	// (0x000867ff) mup_scale_pane_g3

0xb54d,	// (0x00086808) mup_scale_pane_g4

0xb556,	// (0x00086811) mup_scale_pane_g5

0x4b70,	// (0x0007fe2b) mup_scale_pane_g6

0x4b79,	// (0x0007fe34) mup_scale_pane_g7

0xb41f,	// (0x000866da) cams2_slider_pane_g3

0xca36,	// (0x00087cf1) cams2_slider_pane_g4

0x5cc5,	// (0x00080f80) cams2_slider_pane_g5

0xb41f,	// (0x000866da) cams2_slider_pane_g6

0x5ccd,	// (0x00080f88) cams2_slider_pane_g7

0xcc6d,	// (0x00087f28) camera2_autofocus_pane_cp_g1

0xc84d,	// (0x00087b08) bg_popup_preview_window_pane_cp02_ParamLimits

0xc84d,	// (0x00087b08) bg_popup_preview_window_pane_cp02

0xcf79,	// (0x00088234) list_fp_cale_pane_ParamLimits

0xcf79,	// (0x00088234) list_fp_cale_pane

0xcf85,	// (0x00088240) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf85,	// (0x00088240) popup_fixed_preview_cale_window_t1

0x6565,	// (0x00081820) popup_fixed_preview_cale_window_t2_ParamLimits

0x6565,	// (0x00081820) popup_fixed_preview_cale_window_t2

0x657a,	// (0x00081835) popup_fixed_preview_cale_window_t3_ParamLimits

0x657a,	// (0x00081835) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b8,	// (0x0008aa73) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b8,	// (0x0008aa73) popup_fixed_preview_cale_window_t

0x658f,	// (0x0008184a) list_single_fp_cale_pane_ParamLimits

0x658f,	// (0x0008184a) list_single_fp_cale_pane

0xcfa3,	// (0x0008825e) list_single_fp_cale_pane_g1_ParamLimits

0xcfa3,	// (0x0008825e) list_single_fp_cale_pane_g1

0xcfaf,	// (0x0008826a) list_single_fp_cale_pane_g2_ParamLimits

0xcfaf,	// (0x0008826a) list_single_fp_cale_pane_g2

0x0002,

0xf7bf,	// (0x0008aa7a) list_single_fp_cale_pane_g_ParamLimits

0xf7bf,	// (0x0008aa7a) list_single_fp_cale_pane_g

0xcfc8,	// (0x00088283) list_single_fp_cale_pane_t1_ParamLimits

0xcfc8,	// (0x00088283) list_single_fp_cale_pane_t1

0xcfda,	// (0x00088295) list_single_fp_cale_pane_t2_ParamLimits

0xcfda,	// (0x00088295) list_single_fp_cale_pane_t2

0x0001,

0xf7c6,	// (0x0008aa81) list_single_fp_cale_pane_t_ParamLimits

0xf7c6,	// (0x0008aa81) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa03b,	// (0x000852f6) main_dialer_pane

0x65a2,	// (0x0008185d) aid_cell_size_keypad

0x65ac,	// (0x00081867) dialer_ne_pane

0x65b6,	// (0x00081871) grid_dialer_command_1_pane

0x65be,	// (0x00081879) grid_dialer_command_2_pane

0x65c6,	// (0x00081881) grid_dialer_keypad_pane

0x65da,	// (0x00081895) bg_popup_call_pane_cp06_ParamLimits

0x65da,	// (0x00081895) bg_popup_call_pane_cp06

0x65e6,	// (0x000818a1) dialer_ne_clear_pane_ParamLimits

0x65e6,	// (0x000818a1) dialer_ne_clear_pane

0xd00d,	// (0x000882c8) dialer_ne_pane_g1

0xd015,	// (0x000882d0) dialer_ne_pane_t1_ParamLimits

0xd015,	// (0x000882d0) dialer_ne_pane_t1

0x65f2,	// (0x000818ad) dialer_ne_pane_t2_ParamLimits

0x65f2,	// (0x000818ad) dialer_ne_pane_t2

0x660f,	// (0x000818ca) dialer_ne_pane_t3_ParamLimits

0x660f,	// (0x000818ca) dialer_ne_pane_t3

0x0002,

0xf7cb,	// (0x0008aa86) dialer_ne_pane_t_ParamLimits

0xf7cb,	// (0x0008aa86) dialer_ne_pane_t

0x6633,	// (0x000818ee) dialer_ne_pane_t3_copy1_ParamLimits

0x6633,	// (0x000818ee) dialer_ne_pane_t3_copy1

0x6657,	// (0x00081912) cell_dialer_keypad_pane_ParamLimits

0x6657,	// (0x00081912) cell_dialer_keypad_pane

0x666e,	// (0x00081929) cell_dialer_command_1_pane_ParamLimits

0x666e,	// (0x00081929) cell_dialer_command_1_pane

0x6684,	// (0x0008193f) cell_dialer_command_2_pane_ParamLimits

0x6684,	// (0x0008193f) cell_dialer_command_2_pane

0xd027,	// (0x000882e2) bg_button_pane_cp02_ParamLimits

0xd027,	// (0x000882e2) bg_button_pane_cp02

0x6693,	// (0x0008194e) cell_dialer_keypad_pane_g1_ParamLimits

0x6693,	// (0x0008194e) cell_dialer_keypad_pane_g1

0xd027,	// (0x000882e2) bg_button_pane_cp03_ParamLimits

0xd027,	// (0x000882e2) bg_button_pane_cp03

0x66a8,	// (0x00081963) cell_dialer_command_1_pane_g1_ParamLimits

0x66a8,	// (0x00081963) cell_dialer_command_1_pane_g1

0xd033,	// (0x000882ee) bg_button_pane_cp04

0x66bc,	// (0x00081977) cell_dialer_command_2_pane_g1

0xa969,	// (0x00085c24) bg_button_pane_cp06

0xd03b,	// (0x000882f6) dialer_ne_clear_pane_g1

0xb2e4,	// (0x0008659f) navi_pane_g2

0xb312,	// (0x000865cd) navi_pane_g3

0x0002,

0xf3e0,	// (0x0008a69b) navi_pane_g

0xb3a1,	// (0x0008665c) navi_pane_mv_g2

0xb3c8,	// (0x00086683) navi_pane_mv_g5

0x470c,	// (0x0007f9c7) navi_pane_mv_t1

0xa792,	// (0x00085a4d) main_clock2_pane

0x66fa,	// (0x000819b5) main_clock2_list_pane_ParamLimits

0x66fa,	// (0x000819b5) main_clock2_list_pane

0x6724,	// (0x000819df) main_clock2_pane_t1_ParamLimits

0x6724,	// (0x000819df) main_clock2_pane_t1

0x6748,	// (0x00081a03) main_clock2_pane_t2_ParamLimits

0x6748,	// (0x00081a03) main_clock2_pane_t2

0x0004,

0xf7d7,	// (0x0008aa92) main_clock2_pane_t_ParamLimits

0xf7d7,	// (0x0008aa92) main_clock2_pane_t

0x67a3,	// (0x00081a5e) popup_clock_analogue_window_cp03_ParamLimits

0x67a3,	// (0x00081a5e) popup_clock_analogue_window_cp03

0x67c1,	// (0x00081a7c) popup_clock_digital_window_cp02_ParamLimits

0x67c1,	// (0x00081a7c) popup_clock_digital_window_cp02

0x682e,	// (0x00081ae9) main_clock2_list_single_pane_ParamLimits

0x682e,	// (0x00081ae9) main_clock2_list_single_pane

0xa969,	// (0x00085c24) list_highlight_pane_cp05

0xd075,	// (0x00088330) main_clock2_list_single_pane_t1

0x3222,	// (0x0007e4dd) popup_toolbar_window_cp04_ParamLimits

0x5d97,	// (0x00081052) camera2_autofocus_pane_g2_ParamLimits

0x5d97,	// (0x00081052) camera2_autofocus_pane_g2

0x5da3,	// (0x0008105e) camera2_autofocus_pane_g3_ParamLimits

0x5da3,	// (0x0008105e) camera2_autofocus_pane_g3

0x5daf,	// (0x0008106a) camera2_autofocus_pane_g4_ParamLimits

0x5daf,	// (0x0008106a) camera2_autofocus_pane_g4

0x5dbb,	// (0x00081076) camera2_autofocus_pane_g5_ParamLimits

0x5dbb,	// (0x00081076) camera2_autofocus_pane_g5

0x0004,

0xf71b,	// (0x0008a9d6) camera2_autofocus_pane_g_ParamLimits

0xf71b,	// (0x0008a9d6) camera2_autofocus_pane_g

0x5f92,	// (0x0008124d) camera2_autofocus_pane_cp_g2

0x5f9a,	// (0x00081255) camera2_autofocus_pane_cp_g3

0x5fa2,	// (0x0008125d) camera2_autofocus_pane_cp_g4

0x5faa,	// (0x00081265) camera2_autofocus_pane_cp_g5

0x0004,

0xf781,	// (0x0008aa3c) camera2_autofocus_pane_cp_g

0x65d2,	// (0x0008188d) popup_dialer_spcha_window

0xa03b,	// (0x000852f6) bg_popup_sub_pane_cp07

0xd083,	// (0x0008833e) list_spcha_pane

0xd08b,	// (0x00088346) list_single_spcha_pane_ParamLimits

0xd08b,	// (0x00088346) list_single_spcha_pane

0xa03b,	// (0x000852f6) list_highlight_pane_cp06

0xd09c,	// (0x00088357) list_single_spcha_pane_t1

0xc256,	// (0x00087511) popup_call2_audio_out_window_g4_ParamLimits

0xc256,	// (0x00087511) popup_call2_audio_out_window_g4

0xa03b,	// (0x000852f6) main_imed2_pane

0x542d,	// (0x000806e8) popup_imed_adjust2_window

0x5440,	// (0x000806fb) popup_imed_trans_window_ParamLimits

0x5440,	// (0x000806fb) popup_imed_trans_window

0xca9f,	// (0x00087d5a) popup_blid_sat_info2_window_t1

0xcaad,	// (0x00087d68) popup_blid_sat_info2_window_t2

0x000a,

0xf6b0,	// (0x0008a96b) popup_blid_sat_info2_window_t

0x68d8,	// (0x00081b93) aid_size_cell_colour_35

0x68f2,	// (0x00081bad) aid_size_cell_colour_112

0x6909,	// (0x00081bc4) aid_size_cell_effect

0xa9b2,	// (0x00085c6d) bg_tb_trans_pane_cp02

0xaf9c,	// (0x00086257) heading_imed_pane

0x6923,	// (0x00081bde) listscroll_imed_pane

0xd0aa,	// (0x00088365) heading_imed_pane_g1

0xd0b2,	// (0x0008836d) heading_imed_pane_t1

0xd0c0,	// (0x0008837b) grid_imed_colour_35_pane_ParamLimits

0xd0c0,	// (0x0008837b) grid_imed_colour_35_pane

0x692f,	// (0x00081bea) grid_imed_effect_pane

0xd0d8,	// (0x00088393) list_imed_aspect_pane

0x693f,	// (0x00081bfa) scroll_pane_cp027_ParamLimits

0x693f,	// (0x00081bfa) scroll_pane_cp027

0x694b,	// (0x00081c06) cell_imed_effect_pane_ParamLimits

0x694b,	// (0x00081c06) cell_imed_effect_pane

0xd0e0,	// (0x0008839b) cell_imed_colour_pane_ParamLimits

0xd0e0,	// (0x0008839b) cell_imed_colour_pane

0xd122,	// (0x000883dd) cell_imed_colour_pane_g1_ParamLimits

0xd122,	// (0x000883dd) cell_imed_colour_pane_g1

0xd133,	// (0x000883ee) hgihlgiht_grid_pane_cp016_ParamLimits

0xd133,	// (0x000883ee) hgihlgiht_grid_pane_cp016

0x6963,	// (0x00081c1e) cell_imed_effect_pane_g1

0x696b,	// (0x00081c26) grid_highlight_pane_cp017

0xd144,	// (0x000883ff) list_imed_single_pane_ParamLimits

0xd144,	// (0x000883ff) list_imed_single_pane

0xa03b,	// (0x000852f6) list_highlight_pane_cp07

0xd159,	// (0x00088414) list_imed_aspect_pane_comp1_t1

0xc859,	// (0x00087b14) bg_tb_trans_pane_cp05

0xd17b,	// (0x00088436) popup_imed_adjust2_window_g1

0xd1a2,	// (0x0008845d) popup_imed_adjust2_window_t1

0xd1ba,	// (0x00088475) slider_imed_adjust_pane

0xd1ce,	// (0x00088489) slider_imed_adjust_pane_g1

0xd1de,	// (0x00088499) slider_imed_adjust_pane_g2

0xd1ee,	// (0x000884a9) slider_imed_adjust_pane_g3

0xd1ff,	// (0x000884ba) slider_imed_adjust_pane_g4

0x0003,

0xf7f4,	// (0x0008aaaf) slider_imed_adjust_pane_g

0x6974,	// (0x00081c2f) aid_size_cell_clipart2

0x6980,	// (0x00081c3b) grid_imed_clipart_pane

0xd210,	// (0x000884cb) scroll_pane_cp031

0x698a,	// (0x00081c45) cell_imed_clipart_pane_ParamLimits

0x698a,	// (0x00081c45) cell_imed_clipart_pane

0x69ad,	// (0x00081c68) cell_imed_clipart_pane_g1

0xa03b,	// (0x000852f6) grid_highlight_pane_cp014

0x6706,	// (0x000819c1) main_clock2_pane_g1_ParamLimits

0x6706,	// (0x000819c1) main_clock2_pane_g1

0x67d9,	// (0x00081a94) aid_call2_pane_cp10

0x67eb,	// (0x00081aa6) aid_call_pane_cp10

0xb243,	// (0x000864fe) popup_clock_analogue_window_cp10_g1

0xb243,	// (0x000864fe) popup_clock_analogue_window_cp10_g2

0x67fd,	// (0x00081ab8) popup_clock_analogue_window_cp10_g3

0x67fd,	// (0x00081ab8) popup_clock_analogue_window_cp10_g4

0xb243,	// (0x000864fe) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e2,	// (0x0008aa9d) popup_clock_analogue_window_cp10_g

0x680f,	// (0x00081aca) popup_clock_analogue_window_cp10_t1

0x6840,	// (0x00081afb) clock_digital_number_pane_cp10_ParamLimits

0x6840,	// (0x00081afb) clock_digital_number_pane_cp10

0x6858,	// (0x00081b13) clock_digital_number_pane_cp11_ParamLimits

0x6858,	// (0x00081b13) clock_digital_number_pane_cp11

0x6870,	// (0x00081b2b) clock_digital_number_pane_cp12_ParamLimits

0x6870,	// (0x00081b2b) clock_digital_number_pane_cp12

0x6888,	// (0x00081b43) clock_digital_number_pane_cp13_ParamLimits

0x6888,	// (0x00081b43) clock_digital_number_pane_cp13

0x68a0,	// (0x00081b5b) clock_digital_separator_pane_cp10_ParamLimits

0x68a0,	// (0x00081b5b) clock_digital_separator_pane_cp10

0x68b8,	// (0x00081b73) popup_clock_digital_window_cp02_t1_ParamLimits

0x68b8,	// (0x00081b73) popup_clock_digital_window_cp02_t1

0xa6ab,	// (0x00085966) clock_digital_number_pane_cp10_g1

0xa6ab,	// (0x00085966) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fd,	// (0x0008aab8) clock_digital_number_pane_cp10_g

0xa6ab,	// (0x00085966) clock_digital_separator_pane_cp10_g1

0xa6ab,	// (0x00085966) clock_digital_separator_pane_g2_cp10

0xb3d0,	// (0x0008668b) navi_pane_vded_g4

0xb3e7,	// (0x000866a2) navi_pane_vded_g5

0xb3f0,	// (0x000866ab) navi_pane_vded_t1

0xa03b,	// (0x000852f6) main_vded_pane

0x69b6,	// (0x00081c71) main_vded_pane_g1

0x69c2,	// (0x00081c7d) main_vded_pane_g2

0x69cc,	// (0x00081c87) main_vded_pane_g3

0x0002,

0xf802,	// (0x0008aabd) main_vded_pane_g

0x69d6,	// (0x00081c91) main_vded_pane_t1

0x69e4,	// (0x00081c9f) main_vded_pane_t2

0x0001,

0xf809,	// (0x0008aac4) main_vded_pane_t

0x69f2,	// (0x00081cad) vded_slider_pane

0x69fc,	// (0x00081cb7) vded_video_pane

0xd218,	// (0x000884d3) vded_video_pane_g1

0x6a06,	// (0x00081cc1) vded_video_pane_g2

0xcc6d,	// (0x00087f28) vded_video_pane_g3

0x0002,

0xf80e,	// (0x0008aac9) vded_video_pane_g

0xd222,	// (0x000884dd) vded_slider_pane_g1

0xc9b4,	// (0x00087c6f) vded_slider_pane_g2

0xd22b,	// (0x000884e6) vded_slider_pane_g3

0xd234,	// (0x000884ef) vded_slider_pane_g4

0xd23d,	// (0x000884f8) vded_slider_pane_g5

0x0004,

0xf815,	// (0x0008aad0) vded_slider_pane_g

0x64d4,	// (0x0008178f) mup3_rocker_pane_ParamLimits

0x64d4,	// (0x0008178f) mup3_rocker_pane

0x6a0f,	// (0x00081cca) mup3_control_keys_pane_g1

0x6a17,	// (0x00081cd2) mup3_control_keys_pane_g2

0x6a1f,	// (0x00081cda) mup3_control_keys_pane_g3

0x6a27,	// (0x00081ce2) mup3_control_keys_pane_g4

0x0003,

0xf820,	// (0x0008aadb) mup3_control_keys_pane_g

0x22ab,	// (0x0007d566) popup_toolbar2_fixed_window_cp01_ParamLimits

0x22ab,	// (0x0007d566) popup_toolbar2_fixed_window_cp01

0x64ee,	// (0x000817a9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x64ee,	// (0x000817a9) popup_toolbar2_fixed_window_cp02

0xbb95,	// (0x00086e50) popup_call2_audio_second_window_t4_ParamLimits

0xbb95,	// (0x00086e50) popup_call2_audio_second_window_t4

0xc0c3,	// (0x0008737e) popup_call2_audio_first_window_t6_ParamLimits

0xc0c3,	// (0x0008737e) popup_call2_audio_first_window_t6

0xc359,	// (0x00087614) popup_call2_audio_out_window_t6_ParamLimits

0xc359,	// (0x00087614) popup_call2_audio_out_window_t6

0xa03b,	// (0x000852f6) main_vitu_pane

0x6a37,	// (0x00081cf2) aid_size_cell_itu_ParamLimits

0x6a37,	// (0x00081cf2) aid_size_cell_itu

0xed61,	// (0x0008a01c) bg_popup_window_pane_cp08_ParamLimits

0xed61,	// (0x0008a01c) bg_popup_window_pane_cp08

0x6a45,	// (0x00081d00) field_vitu_entry_pane_ParamLimits

0x6a45,	// (0x00081d00) field_vitu_entry_pane

0x6a54,	// (0x00081d0f) grid_vitu_function_pane_ParamLimits

0x6a54,	// (0x00081d0f) grid_vitu_function_pane

0x6a64,	// (0x00081d1f) grid_vitu_itu_pane_ParamLimits

0x6a64,	// (0x00081d1f) grid_vitu_itu_pane

0x6a74,	// (0x00081d2f) cell_vitu_itu_pane_ParamLimits

0x6a74,	// (0x00081d2f) cell_vitu_itu_pane

0x6a89,	// (0x00081d44) cell_vitu_function_pane_ParamLimits

0x6a89,	// (0x00081d44) cell_vitu_function_pane

0xa9b2,	// (0x00085c6d) bg_popup_sub_pane_cp08_ParamLimits

0xa9b2,	// (0x00085c6d) bg_popup_sub_pane_cp08

0x6a9b,	// (0x00081d56) field_vitu_entry_pane_t1_ParamLimits

0x6a9b,	// (0x00081d56) field_vitu_entry_pane_t1

0xd25e,	// (0x00088519) field_vitu_entry_pane_t2_ParamLimits

0xd25e,	// (0x00088519) field_vitu_entry_pane_t2

0x0001,

0xf82e,	// (0x0008aae9) field_vitu_entry_pane_t_ParamLimits

0xf82e,	// (0x0008aae9) field_vitu_entry_pane_t

0xd27b,	// (0x00088536) bg_button_pane_cp05_ParamLimits

0xd27b,	// (0x00088536) bg_button_pane_cp05

0x6ab8,	// (0x00081d73) cell_vitu_itu_pane_g1

0x6ad0,	// (0x00081d8b) cell_vitu_itu_pane_t1_ParamLimits

0x6ad0,	// (0x00081d8b) cell_vitu_itu_pane_t1

0x6ae2,	// (0x00081d9d) cell_vitu_itu_pane_t2_ParamLimits

0x6ae2,	// (0x00081d9d) cell_vitu_itu_pane_t2

0x0002,

0xf833,	// (0x0008aaee) cell_vitu_itu_pane_t_ParamLimits

0xf833,	// (0x0008aaee) cell_vitu_itu_pane_t

0xd289,	// (0x00088544) bg_button_pane_cp07

0x6b17,	// (0x00081dd2) cell_vitu_function_pane_g1

0x256e,	// (0x0007d829) main_calc_pane_g1

0x2068,	// (0x0007d323) aid_visual_content_pane

0xa03b,	// (0x000852f6) main_vradio_pane

0x6b20,	// (0x00081ddb) main_vradio_pane_g1_ParamLimits

0x6b20,	// (0x00081ddb) main_vradio_pane_g1

0xd293,	// (0x0008854e) main_vradio_pane_g2_ParamLimits

0xd293,	// (0x0008854e) main_vradio_pane_g2

0x0001,

0xf83a,	// (0x0008aaf5) main_vradio_pane_g_ParamLimits

0xf83a,	// (0x0008aaf5) main_vradio_pane_g

0x6b30,	// (0x00081deb) main_vradio_pane_t1_ParamLimits

0x6b30,	// (0x00081deb) main_vradio_pane_t1

0x6b42,	// (0x00081dfd) main_vradio_pane_t2_ParamLimits

0x6b42,	// (0x00081dfd) main_vradio_pane_t2

0xd2a0,	// (0x0008855b) main_vradio_pane_t3_ParamLimits

0xd2a0,	// (0x0008855b) main_vradio_pane_t3

0x0002,

0xf83f,	// (0x0008aafa) main_vradio_pane_t_ParamLimits

0xf83f,	// (0x0008aafa) main_vradio_pane_t

0x6b54,	// (0x00081e0f) vradio_rocker_control_pane_ParamLimits

0x6b54,	// (0x00081e0f) vradio_rocker_control_pane

0x6b60,	// (0x00081e1b) vradio_station_info_pane_ParamLimits

0x6b60,	// (0x00081e1b) vradio_station_info_pane

0xd2b4,	// (0x0008856f) vradio_frequency_info_pane_ParamLimits

0xd2b4,	// (0x0008856f) vradio_frequency_info_pane

0xcc6d,	// (0x00087f28) vradio_station_info_pane_g1

0xd2c3,	// (0x0008857e) vradio_station_info_pane_t1_ParamLimits

0xd2c3,	// (0x0008857e) vradio_station_info_pane_t1

0xd2e5,	// (0x000885a0) vradio_station_info_pane_t2_ParamLimits

0xd2e5,	// (0x000885a0) vradio_station_info_pane_t2

0x0001,

0xf846,	// (0x0008ab01) vradio_station_info_pane_t_ParamLimits

0xf846,	// (0x0008ab01) vradio_station_info_pane_t

0xd2f7,	// (0x000885b2) vradio_tuning_pane

0xd2ff,	// (0x000885ba) vradio_rocker_control_pane_g1

0xd307,	// (0x000885c2) vradio_rocker_control_pane_g2

0xd30f,	// (0x000885ca) vradio_rocker_control_pane_g3

0xd317,	// (0x000885d2) vradio_rocker_control_pane_g4

0xd31f,	// (0x000885da) vradio_rocker_control_pane_g5

0x0004,

0xf84b,	// (0x0008ab06) vradio_rocker_control_pane_g

0x6b6f,	// (0x00081e2a) vradio_frequency_info_pane_g1

0xd327,	// (0x000885e2) vradio_frequency_info_pane_t1_ParamLimits

0xd327,	// (0x000885e2) vradio_frequency_info_pane_t1

0x6b79,	// (0x00081e34) vradio_tuning_pane_g1

0x6b82,	// (0x00081e3d) vradio_tuning_pane_t1

0x20b1,	// (0x0007d36c) area_side_right_pane_ParamLimits

0x20b1,	// (0x0007d36c) area_side_right_pane

0xc814,	// (0x00087acf) status_small_pane_g1

0xc81c,	// (0x00087ad7) status_small_pane_g2

0xc825,	// (0x00087ae0) status_small_pane_g3

0xc82e,	// (0x00087ae9) status_small_pane_g4

0x0003,

0xf606,	// (0x0008a8c1) status_small_pane_g

0xc837,	// (0x00087af2) status_small_pane_t1

0xa03b,	// (0x000852f6) main_video3_pane

0xd33b,	// (0x000885f6) cams_zoom_vslider_pane

0xd343,	// (0x000885fe) image3_wide_pane_ParamLimits

0xd343,	// (0x000885fe) image3_wide_pane

0xd35d,	// (0x00088618) image3_wide_small_pane

0xd369,	// (0x00088624) main_video3_pane_g1_ParamLimits

0xd369,	// (0x00088624) main_video3_pane_g1

0xd385,	// (0x00088640) main_video3_pane_g2_ParamLimits

0xd385,	// (0x00088640) main_video3_pane_g2

0x0001,

0xf856,	// (0x0008ab11) main_video3_pane_g_ParamLimits

0xf856,	// (0x0008ab11) main_video3_pane_g

0xd3a1,	// (0x0008865c) main_video3_pane_t1_ParamLimits

0xd3a1,	// (0x0008865c) main_video3_pane_t1

0xd3cc,	// (0x00088687) main_video3_pane_t2_ParamLimits

0xd3cc,	// (0x00088687) main_video3_pane_t2

0xd3f7,	// (0x000886b2) main_video3_pane_t3_ParamLimits

0xd3f7,	// (0x000886b2) main_video3_pane_t3

0x0002,

0xf85b,	// (0x0008ab16) main_video3_pane_t_ParamLimits

0xf85b,	// (0x0008ab16) main_video3_pane_t

0xd424,	// (0x000886df) cams_zoom_vslider_pane_g1

0xd42d,	// (0x000886e8) cams_zoom_vslider_pane_g2

0x0001,

0xf862,	// (0x0008ab1d) cams_zoom_vslider_pane_g

0xd435,	// (0x000886f0) small_slider_vertical_pane

0xcc6d,	// (0x00087f28) small_slider_vertical_pane_g1

0xcc6d,	// (0x00087f28) small_slider_vertical_pane_g2

0xd43d,	// (0x000886f8) small_slider_vertical_pane_g3

0x0002,

0xf867,	// (0x0008ab22) small_slider_vertical_pane_g

0xa03b,	// (0x000852f6) main_hwr_training_pane

0xd446,	// (0x00088701) hwr_training_instruct_pane_ParamLimits

0xd446,	// (0x00088701) hwr_training_instruct_pane

0x6b91,	// (0x00081e4c) hwr_training_navi_pane_ParamLimits

0x6b91,	// (0x00081e4c) hwr_training_navi_pane

0x6bab,	// (0x00081e66) hwr_training_write_pane_ParamLimits

0x6bab,	// (0x00081e66) hwr_training_write_pane

0xa03b,	// (0x000852f6) bg_frame_shadow_pane

0xd47d,	// (0x00088738) hwr_training_write_pane_g1

0xd485,	// (0x00088740) hwr_training_write_pane_g2

0xd48d,	// (0x00088748) hwr_training_write_pane_g3

0xd495,	// (0x00088750) hwr_training_write_pane_g4

0xd49d,	// (0x00088758) hwr_training_write_pane_g5

0xd4a5,	// (0x00088760) hwr_training_write_pane_g6

0xd4ad,	// (0x00088768) hwr_training_write_pane_g7

0x0006,

0xf86e,	// (0x0008ab29) hwr_training_write_pane_g

0x6be3,	// (0x00081e9e) hwr_training_navi_pane_g1_ParamLimits

0x6be3,	// (0x00081e9e) hwr_training_navi_pane_g1

0x6bf5,	// (0x00081eb0) hwr_training_navi_pane_g2_ParamLimits

0x6bf5,	// (0x00081eb0) hwr_training_navi_pane_g2

0x6c07,	// (0x00081ec2) hwr_training_navi_pane_g3_ParamLimits

0x6c07,	// (0x00081ec2) hwr_training_navi_pane_g3

0x6c17,	// (0x00081ed2) hwr_training_navi_pane_g4_ParamLimits

0x6c17,	// (0x00081ed2) hwr_training_navi_pane_g4

0x0004,

0xf87d,	// (0x0008ab38) hwr_training_navi_pane_g_ParamLimits

0xf87d,	// (0x0008ab38) hwr_training_navi_pane_g

0x6c31,	// (0x00081eec) hwr_training_navi_pane_t1

0x6c3f,	// (0x00081efa) list_single_hwr_training_instruct_pane_ParamLimits

0x6c3f,	// (0x00081efa) list_single_hwr_training_instruct_pane

0xd4b5,	// (0x00088770) list_single_hwr_training_instruct_pane_t1

0xcba1,	// (0x00087e5c) bg_frame_shadow_pane_g1

0xd4c4,	// (0x0008877f) bg_frame_shadow_pane_g2

0xd4cc,	// (0x00088787) bg_frame_shadow_pane_g3

0xd4d4,	// (0x0008878f) bg_frame_shadow_pane_g4

0xd4dc,	// (0x00088797) bg_frame_shadow_pane_g5

0xd4e4,	// (0x0008879f) bg_frame_shadow_pane_g6

0xd4ec,	// (0x000887a7) bg_frame_shadow_pane_g7

0xa85d,	// (0x00085b18) bg_frame_shadow_pane_g8

0x0007,

0xf888,	// (0x0008ab43) bg_frame_shadow_pane_g

0xa03b,	// (0x000852f6) main_video_tele_dialer_pane

0x6c68,	// (0x00081f23) aid_size_cell_video_keypad_ParamLimits

0x6c68,	// (0x00081f23) aid_size_cell_video_keypad

0x6c78,	// (0x00081f33) grid_video_dialer_keypad_pane_ParamLimits

0x6c78,	// (0x00081f33) grid_video_dialer_keypad_pane

0x6cac,	// (0x00081f67) video_down_pane_cp_ParamLimits

0x6cac,	// (0x00081f67) video_down_pane_cp

0x6cd6,	// (0x00081f91) cell_video_dialer_keypad_pane_ParamLimits

0x6cd6,	// (0x00081f91) cell_video_dialer_keypad_pane

0xd4f4,	// (0x000887af) bg_button_pane_cp08_ParamLimits

0xd4f4,	// (0x000887af) bg_button_pane_cp08

0x6ceb,	// (0x00081fa6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6ceb,	// (0x00081fa6) cell_video_dialer_keypad_pane_g1

0x64c8,	// (0x00081783) mup3_rocker2_pane_ParamLimits

0x64c8,	// (0x00081783) mup3_rocker2_pane

0xcc6d,	// (0x00087f28) mup3_rocker2_pane_g1

0x53a1,	// (0x0008065c) main_dialer2_pane

0xa03b,	// (0x000852f6) main_mp4_pane

0x6d2d,	// (0x00081fe8) main_mp4_pane_g1_ParamLimits

0x6d2d,	// (0x00081fe8) main_mp4_pane_g1

0x6d3b,	// (0x00081ff6) main_mp4_pane_g2_ParamLimits

0x6d3b,	// (0x00081ff6) main_mp4_pane_g2

0x6d49,	// (0x00082004) main_mp4_pane_g3_ParamLimits

0x6d49,	// (0x00082004) main_mp4_pane_g3

0x6d8e,	// (0x00082049) main_mp4_pane_g4_ParamLimits

0x6d8e,	// (0x00082049) main_mp4_pane_g4

0x6db6,	// (0x00082071) main_mp4_pane_g5_ParamLimits

0x6db6,	// (0x00082071) main_mp4_pane_g5

0x0005,

0xf8a8,	// (0x0008ab63) main_mp4_pane_g_ParamLimits

0xf8a8,	// (0x0008ab63) main_mp4_pane_g

0x6e06,	// (0x000820c1) main_mp4_pane_t1_ParamLimits

0x6e06,	// (0x000820c1) main_mp4_pane_t1

0x6e62,	// (0x0008211d) main_mp4_pane_t2_ParamLimits

0x6e62,	// (0x0008211d) main_mp4_pane_t2

0xd500,	// (0x000887bb) main_mp4_pane_t3_ParamLimits

0xd500,	// (0x000887bb) main_mp4_pane_t3

0x6eb4,	// (0x0008216f) main_mp4_pane_t4_ParamLimits

0x6eb4,	// (0x0008216f) main_mp4_pane_t4

0x0003,

0xf8b5,	// (0x0008ab70) main_mp4_pane_t_ParamLimits

0xf8b5,	// (0x0008ab70) main_mp4_pane_t

0x6ef8,	// (0x000821b3) mp4_progress_pane_ParamLimits

0x6ef8,	// (0x000821b3) mp4_progress_pane

0x6f42,	// (0x000821fd) mp4_rocker_pane_ParamLimits

0x6f42,	// (0x000821fd) mp4_rocker_pane

0xd528,	// (0x000887e3) mp4_progress_pane_t1

0xd541,	// (0x000887fc) mp4_progress_pane_t2

0x0001,

0xf8be,	// (0x0008ab79) mp4_progress_pane_t

0xd55a,	// (0x00088815) mup_progress_pane_cp04

0xcc6d,	// (0x00087f28) mp4_rocker_pane_g1

0x6f62,	// (0x0008221d) aid_cell_size_keypad2_ParamLimits

0x6f62,	// (0x0008221d) aid_cell_size_keypad2

0x6f72,	// (0x0008222d) dialer2_ne_pane_ParamLimits

0x6f72,	// (0x0008222d) dialer2_ne_pane

0x6f80,	// (0x0008223b) grid_dialer2_keypad_pane_ParamLimits

0x6f80,	// (0x0008223b) grid_dialer2_keypad_pane

0xdd02,	// (0x00088fbd) bg_popup_call_pane_cp07_ParamLimits

0xdd02,	// (0x00088fbd) bg_popup_call_pane_cp07

0x6f90,	// (0x0008224b) dialer2_ne_pane_t1_ParamLimits

0x6f90,	// (0x0008224b) dialer2_ne_pane_t1

0x6fb5,	// (0x00082270) cell_dialer2_keypad_pane_ParamLimits

0x6fb5,	// (0x00082270) cell_dialer2_keypad_pane

0xd578,	// (0x00088833) bg_button_pane_pane_cp04_ParamLimits

0xd578,	// (0x00088833) bg_button_pane_pane_cp04

0x6fca,	// (0x00082285) cell_dialer2_keypad_pane_g1_ParamLimits

0x6fca,	// (0x00082285) cell_dialer2_keypad_pane_g1

0x30e4,	// (0x0007e39f) aid_placing_vt_set_content_ParamLimits

0x30e4,	// (0x0007e39f) aid_placing_vt_set_content

0x3110,	// (0x0007e3cb) aid_placing_vt_set_title_ParamLimits

0x3110,	// (0x0007e3cb) aid_placing_vt_set_title

0xa03b,	// (0x000852f6) main_image3_pane

0x7064,	// (0x0008231f) area_side_right_pane_cp01_ParamLimits

0x7064,	// (0x0008231f) area_side_right_pane_cp01

0xa6fb,	// (0x000859b6) main_image3_pane_g1_ParamLimits

0xa6fb,	// (0x000859b6) main_image3_pane_g1

0x7091,	// (0x0008234c) main_image3_pane_g2_ParamLimits

0x7091,	// (0x0008234c) main_image3_pane_g2

0x70aa,	// (0x00082365) main_image3_pane_g3_ParamLimits

0x70aa,	// (0x00082365) main_image3_pane_g3

0x70c3,	// (0x0008237e) main_image3_pane_g4_ParamLimits

0x70c3,	// (0x0008237e) main_image3_pane_g4

0x0003,

0xf8cd,	// (0x0008ab88) main_image3_pane_g_ParamLimits

0xf8cd,	// (0x0008ab88) main_image3_pane_g

0x70dc,	// (0x00082397) main_image3_pane_t1_ParamLimits

0x70dc,	// (0x00082397) main_image3_pane_t1

0x7101,	// (0x000823bc) main_image3_pane_t2_ParamLimits

0x7101,	// (0x000823bc) main_image3_pane_t2

0x7120,	// (0x000823db) main_image3_pane_t3_ParamLimits

0x7120,	// (0x000823db) main_image3_pane_t3

0x0003,

0xf8d6,	// (0x0008ab91) main_image3_pane_t_ParamLimits

0xf8d6,	// (0x0008ab91) main_image3_pane_t

0xed61,	// (0x0008a01c) grid_sctrl_middle_pane_cp01_ParamLimits

0xed61,	// (0x0008a01c) grid_sctrl_middle_pane_cp01

0x7181,	// (0x0008243c) cell_sctrl_middle_pane_cp01_ParamLimits

0x7181,	// (0x0008243c) cell_sctrl_middle_pane_cp01

0x7192,	// (0x0008244d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7192,	// (0x0008244d) cell_sctrl_middle_pane_cp01_g1

0xa03b,	// (0x000852f6) main_call4_pane

0x719f,	// (0x0008245a) aid_size_button_call4_ParamLimits

0x719f,	// (0x0008245a) aid_size_button_call4

0x71cf,	// (0x0008248a) call4_windows_pane_ParamLimits

0x71cf,	// (0x0008248a) call4_windows_pane

0x71e9,	// (0x000824a4) grid_call4_button_pane_ParamLimits

0x71e9,	// (0x000824a4) grid_call4_button_pane

0xd584,	// (0x0008883f) call4_windows_conf_pane

0xd59b,	// (0x00088856) popup_call4_audio_first_window_ParamLimits

0xd59b,	// (0x00088856) popup_call4_audio_first_window

0xd5e7,	// (0x000888a2) popup_call4_audio_second_window_ParamLimits

0xd5e7,	// (0x000888a2) popup_call4_audio_second_window

0xd5fb,	// (0x000888b6) popup_call4_audio_wait_window_ParamLimits

0xd5fb,	// (0x000888b6) popup_call4_audio_wait_window

0x720d,	// (0x000824c8) cell_call4_button_pane_ParamLimits

0x720d,	// (0x000824c8) cell_call4_button_pane

0x7232,	// (0x000824ed) bg_button_pane_cp09_ParamLimits

0x7232,	// (0x000824ed) bg_button_pane_cp09

0x723e,	// (0x000824f9) cell_call4_button_pane_g1_ParamLimits

0x723e,	// (0x000824f9) cell_call4_button_pane_g1

0x724b,	// (0x00082506) cell_call4_button_pane_t1_ParamLimits

0x724b,	// (0x00082506) cell_call4_button_pane_t1

0xd643,	// (0x000888fe) popup_call4_audio_conf_window_ParamLimits

0xd643,	// (0x000888fe) popup_call4_audio_conf_window

0x64fb,	// (0x000817b6) mup3_progress_pane_t1_ParamLimits

0x651a,	// (0x000817d5) mup3_progress_pane_t2_ParamLimits

0xcf36,	// (0x000881f1) mup3_progress_pane_t3_ParamLimits

0xf7aa,	// (0x0008aa65) mup3_progress_pane_t_ParamLimits

0xcf53,	// (0x0008820e) mup_progress_pane_cp03_ParamLimits

0x6a2f,	// (0x00081cea) mup3_control_keys_pane_g4_copy1

0x6f26,	// (0x000821e1) mp4_rocker2_pane_ParamLimits

0x6f26,	// (0x000821e1) mp4_rocker2_pane

0xd657,	// (0x00088912) mp4_rocker2_pane_g1

0xd65f,	// (0x0008891a) mp4_rocker2_pane_g2

0x725d,	// (0x00082518) mp4_rocker2_pane_g3

0x7265,	// (0x00082520) mp4_rocker2_pane_g4

0x726d,	// (0x00082528) mp4_rocker2_pane_g5

0x0004,

0xf8df,	// (0x0008ab9a) mp4_rocker2_pane_g

0xa03b,	// (0x000852f6) main_camera4_pane

0xa03b,	// (0x000852f6) main_video4_pane

0x6c88,	// (0x00081f43) main_video_tele_dialer_pane_t1_ParamLimits

0x6c88,	// (0x00081f43) main_video_tele_dialer_pane_t1

0x6c9a,	// (0x00081f55) main_video_tele_dialer_pane_t2_ParamLimits

0x6c9a,	// (0x00081f55) main_video_tele_dialer_pane_t2

0x0001,

0xf899,	// (0x0008ab54) main_video_tele_dialer_pane_t_ParamLimits

0xf899,	// (0x0008ab54) main_video_tele_dialer_pane_t

0x728d,	// (0x00082548) cam4_autofocus_pane_ParamLimits

0x728d,	// (0x00082548) cam4_autofocus_pane

0x72a7,	// (0x00082562) cam4_image_uncrop_pane_ParamLimits

0x72a7,	// (0x00082562) cam4_image_uncrop_pane

0x72be,	// (0x00082579) cam4_indicators_pane_ParamLimits

0x72be,	// (0x00082579) cam4_indicators_pane

0x72da,	// (0x00082595) main_camera4_pane_g1_ParamLimits

0x72da,	// (0x00082595) main_camera4_pane_g1

0x72e6,	// (0x000825a1) main_camera4_pane_g2_ParamLimits

0x72e6,	// (0x000825a1) main_camera4_pane_g2

0x72e6,	// (0x000825a1) main_camera4_pane_g3_ParamLimits

0x72e6,	// (0x000825a1) main_camera4_pane_g3

0x72f2,	// (0x000825ad) main_camera4_pane_g4_ParamLimits

0x72f2,	// (0x000825ad) main_camera4_pane_g4

0x72fe,	// (0x000825b9) main_camera4_pane_g5_ParamLimits

0x72fe,	// (0x000825b9) main_camera4_pane_g5

0x0005,

0xf8ea,	// (0x0008aba5) main_camera4_pane_g_ParamLimits

0xf8ea,	// (0x0008aba5) main_camera4_pane_g

0x7318,	// (0x000825d3) main_camera4_pane_t1_ParamLimits

0x7318,	// (0x000825d3) main_camera4_pane_t1

0xcebb,	// (0x00088176) bg_tb_trans_pane_cp06

0x7368,	// (0x00082623) cam4_indicators_pane_g1

0x7379,	// (0x00082634) cam4_indicators_pane_g2

0x0002,

0xf905,	// (0x0008abc0) cam4_indicators_pane_g

0x7391,	// (0x0008264c) cam4_indicators_pane_t1

0x73bb,	// (0x00082676) main_video4_pane_g1_ParamLimits

0x73bb,	// (0x00082676) main_video4_pane_g1

0x73c7,	// (0x00082682) main_video4_pane_g2_ParamLimits

0x73c7,	// (0x00082682) main_video4_pane_g2

0x73d3,	// (0x0008268e) main_video4_pane_g3_ParamLimits

0x73d3,	// (0x0008268e) main_video4_pane_g3

0x73df,	// (0x0008269a) main_video4_pane_g4_ParamLimits

0x73df,	// (0x0008269a) main_video4_pane_g4

0x0004,

0xf90c,	// (0x0008abc7) main_video4_pane_g_ParamLimits

0xf90c,	// (0x0008abc7) main_video4_pane_g

0x73ff,	// (0x000826ba) vid4_indicators_pane_ParamLimits

0x73ff,	// (0x000826ba) vid4_indicators_pane

0x741e,	// (0x000826d9) video4_image_uncrop_cif_pane_ParamLimits

0x741e,	// (0x000826d9) video4_image_uncrop_cif_pane

0x742d,	// (0x000826e8) video4_image_uncrop_nhd_pane_ParamLimits

0x742d,	// (0x000826e8) video4_image_uncrop_nhd_pane

0x72a7,	// (0x00082562) video4_image_uncrop_vga_pane_ParamLimits

0x72a7,	// (0x00082562) video4_image_uncrop_vga_pane

0xa9b2,	// (0x00085c6d) bg_tb_trans_pane_cp07

0x7442,	// (0x000826fd) vid4_indicators_pane_g1

0x7456,	// (0x00082711) vid4_indicators_pane_g2

0x746a,	// (0x00082725) vid4_indicators_pane_g3

0x0004,

0xf917,	// (0x0008abd2) vid4_indicators_pane_g

0x7497,	// (0x00082752) vid4_indicators_pane_t1

0x74ae,	// (0x00082769) cam4_autofocus_pane_g1

0x74b6,	// (0x00082771) cam4_autofocus_pane_g2

0x74be,	// (0x00082779) cam4_autofocus_pane_g3

0x0002,

0xf922,	// (0x0008abdd) cam4_autofocus_pane_g

0x74c6,	// (0x00082781) cam4_autofocus_pane_g3_copy1

0x6cba,	// (0x00081f75) video_down_pane_cp_t1

0x6cc8,	// (0x00081f83) video_down_pane_cp_t2

0x0001,

0xf89e,	// (0x0008ab59) video_down_pane_cp_t

0xed61,	// (0x0008a01c) popup_vitu2_window_ParamLimits

0xed61,	// (0x0008a01c) popup_vitu2_window

0x74ce,	// (0x00082789) aid_size_cell2_itu2_ParamLimits

0x74ce,	// (0x00082789) aid_size_cell2_itu2

0x74f0,	// (0x000827ab) aid_size_cell_itu2_ParamLimits

0x74f0,	// (0x000827ab) aid_size_cell_itu2

0xdd02,	// (0x00088fbd) bg_popup_window_pane_cp09_ParamLimits

0xdd02,	// (0x00088fbd) bg_popup_window_pane_cp09

0x7534,	// (0x000827ef) field_vitu2_entry_pane_ParamLimits

0x7534,	// (0x000827ef) field_vitu2_entry_pane

0x7554,	// (0x0008280f) grid_vitu2_function_pane_ParamLimits

0x7554,	// (0x0008280f) grid_vitu2_function_pane

0x7598,	// (0x00082853) grid_vitu2_itu_pane_ParamLimits

0x7598,	// (0x00082853) grid_vitu2_itu_pane

0x7612,	// (0x000828cd) cell_vitu2_itu_pane_ParamLimits

0x7612,	// (0x000828cd) cell_vitu2_itu_pane

0x762b,	// (0x000828e6) cell_vitu2_function_pane_ParamLimits

0x762b,	// (0x000828e6) cell_vitu2_function_pane

0xd667,	// (0x00088922) bg_popup_call_pane_cp08_ParamLimits

0xd667,	// (0x00088922) bg_popup_call_pane_cp08

0xd67e,	// (0x00088939) field_vitu2_entry_pane_g1

0xd68a,	// (0x00088945) field_vitu2_entry_pane_g2

0x0002,

0xf929,	// (0x0008abe4) field_vitu2_entry_pane_g

0x108b,	// (0x0007c346) field_vitu2_entry_pane_t1_ParamLimits

0x108b,	// (0x0007c346) field_vitu2_entry_pane_t1

0x10bb,	// (0x0007c376) field_vitu2_entry_pane_t2_ParamLimits

0x10bb,	// (0x0007c376) field_vitu2_entry_pane_t2

0x0001,

0xf930,	// (0x0008abeb) field_vitu2_entry_pane_t_ParamLimits

0xf930,	// (0x0008abeb) field_vitu2_entry_pane_t

0x766c,	// (0x00082927) bg_button_pane_cp010_ParamLimits

0x766c,	// (0x00082927) bg_button_pane_cp010

0x767a,	// (0x00082935) cell_vitu2_itu_pane_g1

0x769a,	// (0x00082955) cell_vitu2_itu_pane_t1_ParamLimits

0x769a,	// (0x00082955) cell_vitu2_itu_pane_t1

0x10d8,	// (0x0007c393) cell_vitu2_itu_pane_t2_ParamLimits

0x10d8,	// (0x0007c393) cell_vitu2_itu_pane_t2

0x0002,

0xf93a,	// (0x0008abf5) cell_vitu2_itu_pane_t_ParamLimits

0xf93a,	// (0x0008abf5) cell_vitu2_itu_pane_t

0xa9b2,	// (0x00085c6d) bg_button_pane_cp011

0x76e6,	// (0x000829a1) cell_vitu2_function_pane_g1

0xa03b,	// (0x000852f6) main_myfav_hc_pane

0x7162,	// (0x0008241d) popup_image3_note_pane_ParamLimits

0x7162,	// (0x0008241d) popup_image3_note_pane

0x7170,	// (0x0008242b) popup_image3_tool_bar_pane_ParamLimits

0x7170,	// (0x0008242b) popup_image3_tool_bar_pane

0x114e,	// (0x0007c409) cell_vitu2_itu_pane_t3_ParamLimits

0x114e,	// (0x0007c409) cell_vitu2_itu_pane_t3

0xa03b,	// (0x000852f6) bg_popup_trans_pane

0xd6ac,	// (0x00088967) grid_image3_tool_bar_pane

0xd6b6,	// (0x00088971) bg_popup_trans_pane_g1

0xac26,	// (0x00085ee1) bg_popup_trans_pane_g2

0xd6be,	// (0x00088979) bg_popup_trans_pane_g3

0xd6c6,	// (0x00088981) bg_popup_trans_pane_g4

0xd6ce,	// (0x00088989) bg_popup_trans_pane_g5

0xd6d6,	// (0x00088991) bg_popup_trans_pane_g6

0xd6de,	// (0x00088999) bg_popup_trans_pane_g7

0xd6e6,	// (0x000889a1) bg_popup_trans_pane_g8

0xac06,	// (0x00085ec1) bg_popup_trans_pane_g9

0x0008,

0xf941,	// (0x0008abfc) bg_popup_trans_pane_g

0xd6ee,	// (0x000889a9) cell_image3_tool_bar_pane_ParamLimits

0xd6ee,	// (0x000889a9) cell_image3_tool_bar_pane

0xcc6d,	// (0x00087f28) cell_image3_tool_bar_pane_g1

0xa03b,	// (0x000852f6) bg_popup_trans_pane_cp1

0xd702,	// (0x000889bd) popup_image3_note_pane_t1

0xd710,	// (0x000889cb) popup_image3_note_pane_t2

0xd71e,	// (0x000889d9) popup_image3_note_pane_t3

0x0002,

0xf954,	// (0x0008ac0f) popup_image3_note_pane_t

0xd72c,	// (0x000889e7) popup_image3_note_pane_t3_copy1

0x76fa,	// (0x000829b5) bg_myfav_hc_instruction_pane_ParamLimits

0x76fa,	// (0x000829b5) bg_myfav_hc_instruction_pane

0x7712,	// (0x000829cd) cell_myfav_contact_pane_ParamLimits

0x7712,	// (0x000829cd) cell_myfav_contact_pane

0x772c,	// (0x000829e7) cell_myfav_contact_pane_cp1_ParamLimits

0x772c,	// (0x000829e7) cell_myfav_contact_pane_cp1

0x7744,	// (0x000829ff) cell_myfav_contact_pane_cp2_ParamLimits

0x7744,	// (0x000829ff) cell_myfav_contact_pane_cp2

0x775c,	// (0x00082a17) cell_myfav_contact_pane_cp3_ParamLimits

0x775c,	// (0x00082a17) cell_myfav_contact_pane_cp3

0x7773,	// (0x00082a2e) cell_myfav_contact_pane_cp4_ParamLimits

0x7773,	// (0x00082a2e) cell_myfav_contact_pane_cp4

0x7789,	// (0x00082a44) cell_myfav_contact_pane_cp5_ParamLimits

0x7789,	// (0x00082a44) cell_myfav_contact_pane_cp5

0x779d,	// (0x00082a58) cell_myfav_contact_pane_cp6_ParamLimits

0x779d,	// (0x00082a58) cell_myfav_contact_pane_cp6

0x77b1,	// (0x00082a6c) cell_myfav_contact_pane_cp7_ParamLimits

0x77b1,	// (0x00082a6c) cell_myfav_contact_pane_cp7

0xd73a,	// (0x000889f5) listscroll_gen_pane_cp05

0x77c9,	// (0x00082a84) main_myfav_hc_pane_g1_ParamLimits

0x77c9,	// (0x00082a84) main_myfav_hc_pane_g1

0x77df,	// (0x00082a9a) main_myfav_hc_pane_g2_ParamLimits

0x77df,	// (0x00082a9a) main_myfav_hc_pane_g2

0x0002,

0xf95b,	// (0x0008ac16) main_myfav_hc_pane_g_ParamLimits

0xf95b,	// (0x0008ac16) main_myfav_hc_pane_g

0x780f,	// (0x00082aca) main_myfav_hc_pane_t1_ParamLimits

0x780f,	// (0x00082aca) main_myfav_hc_pane_t1

0xd743,	// (0x000889fe) main_myfav_hc_pane_t2_ParamLimits

0xd743,	// (0x000889fe) main_myfav_hc_pane_t2

0xd75d,	// (0x00088a18) main_myfav_hc_pane_t3_ParamLimits

0xd75d,	// (0x00088a18) main_myfav_hc_pane_t3

0x7826,	// (0x00082ae1) main_myfav_hc_pane_t4_ParamLimits

0x7826,	// (0x00082ae1) main_myfav_hc_pane_t4

0x0004,

0xf962,	// (0x0008ac1d) main_myfav_hc_pane_t_ParamLimits

0xf962,	// (0x0008ac1d) main_myfav_hc_pane_t

0xcc6d,	// (0x00087f28) bg_myfav_hc_instruction_pane_g1

0xd76f,	// (0x00088a2a) cell_myfav_contact_pane_g1_ParamLimits

0xd76f,	// (0x00088a2a) cell_myfav_contact_pane_g1

0xd76f,	// (0x00088a2a) cell_myfav_contact_pane_g2_ParamLimits

0xd76f,	// (0x00088a2a) cell_myfav_contact_pane_g2

0xd77b,	// (0x00088a36) cell_myfav_contact_pane_g3_ParamLimits

0xd77b,	// (0x00088a36) cell_myfav_contact_pane_g3

0xcf20,	// (0x000881db) cell_myfav_contact_pane_g4_ParamLimits

0xcf20,	// (0x000881db) cell_myfav_contact_pane_g4

0xd788,	// (0x00088a43) cell_myfav_contact_pane_g5_ParamLimits

0xd788,	// (0x00088a43) cell_myfav_contact_pane_g5

0x0004,

0xf96d,	// (0x0008ac28) cell_myfav_contact_pane_g_ParamLimits

0xf96d,	// (0x0008ac28) cell_myfav_contact_pane_g

0x77f7,	// (0x00082ab2) main_myfav_hc_pane_g3_ParamLimits

0x77f7,	// (0x00082ab2) main_myfav_hc_pane_g3

0x21e6,	// (0x0007d4a1) popup_adpt_find_window

0x7850,	// (0x00082b0b) afind_page_pane_ParamLimits

0x7850,	// (0x00082b0b) afind_page_pane

0x785d,	// (0x00082b18) aid_size_cell_afind_ParamLimits

0x785d,	// (0x00082b18) aid_size_cell_afind

0x7877,	// (0x00082b32) bg_popup_sub_pane_cp09_ParamLimits

0x7877,	// (0x00082b32) bg_popup_sub_pane_cp09

0x7884,	// (0x00082b3f) find_pane_cp01_ParamLimits

0x7884,	// (0x00082b3f) find_pane_cp01

0xd794,	// (0x00088a4f) grid_afind_control_pane_ParamLimits

0xd794,	// (0x00088a4f) grid_afind_control_pane

0x7891,	// (0x00082b4c) grid_afind_pane_ParamLimits

0x7891,	// (0x00082b4c) grid_afind_pane

0x78ab,	// (0x00082b66) cell_afind_pane_ParamLimits

0x78ab,	// (0x00082b66) cell_afind_pane

0xcc6d,	// (0x00087f28) afind_page_pane_g1

0x78f3,	// (0x00082bae) afind_page_pane_g2

0x78fc,	// (0x00082bb7) afind_page_pane_g3

0x0002,

0xf978,	// (0x0008ac33) afind_page_pane_g

0x7905,	// (0x00082bc0) afind_page_pane_t1

0xd7a8,	// (0x00088a63) cell_afind_grid_control_pane_ParamLimits

0xd7a8,	// (0x00088a63) cell_afind_grid_control_pane

0xd578,	// (0x00088833) bg_button_pane_cp69_ParamLimits

0xd578,	// (0x00088833) bg_button_pane_cp69

0x7925,	// (0x00082be0) cell_afind_pane_g1_ParamLimits

0x7925,	// (0x00082be0) cell_afind_pane_g1

0x7932,	// (0x00082bed) cell_afind_pane_t1_ParamLimits

0x7932,	// (0x00082bed) cell_afind_pane_t1

0xaa16,	// (0x00085cd1) bg_button_pane_cp72

0xd7b7,	// (0x00088a72) cell_afind_grid_control_pane_g1

0x4f19,	// (0x000801d4) aid_image_placing_area_ParamLimits

0x4f19,	// (0x000801d4) aid_image_placing_area

0xd246,	// (0x00088501) field_vitu_entry_pane_g1_ParamLimits

0xd246,	// (0x00088501) field_vitu_entry_pane_g1

0xd252,	// (0x0008850d) field_vitu_entry_pane_g2_ParamLimits

0xd252,	// (0x0008850d) field_vitu_entry_pane_g2

0x0001,

0xf829,	// (0x0008aae4) field_vitu_entry_pane_g_ParamLimits

0xf829,	// (0x0008aae4) field_vitu_entry_pane_g

0x6ab8,	// (0x00081d73) cell_vitu_itu_pane_g1_ParamLimits

0x6afa,	// (0x00081db5) cell_vitu_itu_pane_t3_ParamLimits

0x6afa,	// (0x00081db5) cell_vitu_itu_pane_t3

0xd528,	// (0x000887e3) mp4_progress_pane_t1_ParamLimits

0xd541,	// (0x000887fc) mp4_progress_pane_t2_ParamLimits

0xf8be,	// (0x0008ab79) mp4_progress_pane_t_ParamLimits

0xd55a,	// (0x00088815) mup_progress_pane_cp04_ParamLimits

0x783a,	// (0x00082af5) main_myfav_hc_pane_t5_ParamLimits

0x783a,	// (0x00082af5) main_myfav_hc_pane_t5

0x0d57,	// (0x0007c012) aid_zoom_text_primary

0x21e6,	// (0x0007d4a1) popup_adpt_find_window_ParamLimits

0xa9b2,	// (0x00085c6d) main_cam_set_pane

0x72cc,	// (0x00082587) cam4_zoom_pane_ParamLimits

0x72cc,	// (0x00082587) cam4_zoom_pane

0x7944,	// (0x00082bff) main_cam_set_pane_g1_ParamLimits

0x7944,	// (0x00082bff) main_cam_set_pane_g1

0x7952,	// (0x00082c0d) main_cam_set_pane_g2_ParamLimits

0x7952,	// (0x00082c0d) main_cam_set_pane_g2

0x0001,

0xf97f,	// (0x0008ac3a) main_cam_set_pane_g_ParamLimits

0xf97f,	// (0x0008ac3a) main_cam_set_pane_g

0x795e,	// (0x00082c19) main_cam_set_pane_t1_ParamLimits

0x795e,	// (0x00082c19) main_cam_set_pane_t1

0x797a,	// (0x00082c35) main_cset_listscroll_pane_ParamLimits

0x797a,	// (0x00082c35) main_cset_listscroll_pane

0x79a5,	// (0x00082c60) main_cset_slider_pane_ParamLimits

0x79a5,	// (0x00082c60) main_cset_slider_pane

0xd7c8,	// (0x00088a83) main_cset_list_pane_ParamLimits

0xd7c8,	// (0x00088a83) main_cset_list_pane

0xd7d8,	// (0x00088a93) scroll_pane_cp028

0x79c4,	// (0x00082c7f) aid_area_touch_slider

0x79e0,	// (0x00082c9b) cset_slider_pane

0x7a0a,	// (0x00082cc5) main_cset_slider_pane_g1

0x7a1f,	// (0x00082cda) main_cset_slider_pane_g2

0x0011,

0xf984,	// (0x0008ac3f) main_cset_slider_pane_g

0xd811,	// (0x00088acc) main_cset_slider_pane_t1

0x7ae5,	// (0x00082da0) main_cset_slider_pane_t2

0x7aff,	// (0x00082dba) main_cset_slider_pane_t3

0x7b19,	// (0x00082dd4) main_cset_slider_pane_t4

0x7b37,	// (0x00082df2) main_cset_slider_pane_t5

0x7b55,	// (0x00082e10) main_cset_slider_pane_t6

0x7b6c,	// (0x00082e27) main_cset_slider_pane_t7

0x000e,

0xf9a9,	// (0x0008ac64) main_cset_slider_pane_t

0x7c7a,	// (0x00082f35) cset_list_set_pane_ParamLimits

0x7c7a,	// (0x00082f35) cset_list_set_pane

0x7c93,	// (0x00082f4e) aid_position_infowindow_above

0x7c9b,	// (0x00082f56) aid_position_infowindow_below

0x7ca3,	// (0x00082f5e) cset_list_set_pane_g1_ParamLimits

0x7ca3,	// (0x00082f5e) cset_list_set_pane_g1

0x11a0,	// (0x0007c45b) cset_list_set_pane_g3_ParamLimits

0x11a0,	// (0x0007c45b) cset_list_set_pane_g3

0x0001,

0xf9c8,	// (0x0008ac83) cset_list_set_pane_g_ParamLimits

0xf9c8,	// (0x0008ac83) cset_list_set_pane_g

0x11af,	// (0x0007c46a) cset_list_set_pane_t1_ParamLimits

0x11af,	// (0x0007c46a) cset_list_set_pane_t1

0xa9b2,	// (0x00085c6d) list_highlight_pane_cp021_ParamLimits

0xa9b2,	// (0x00085c6d) list_highlight_pane_cp021

0xb544,	// (0x000867ff) cset_slider_pane_g1

0xb556,	// (0x00086811) cset_slider_pane_g2

0xb54d,	// (0x00086808) cset_slider_pane_g3

0x0002,

0xf9cd,	// (0x0008ac88) cset_slider_pane_g

0x7caf,	// (0x00082f6a) aid_area_touch_cam4_zoom

0x7cb7,	// (0x00082f72) cam4_zoom_cont_pane

0x7cbf,	// (0x00082f7a) cam4_zoom_pane_g1

0x7cc7,	// (0x00082f82) cam4_zoom_pane_g2

0x7ccf,	// (0x00082f8a) cam4_zoom_pane_g3

0x0002,

0xf9d4,	// (0x0008ac8f) cam4_zoom_pane_g

0xd43d,	// (0x000886f8) cam4_zoom_cont_pane_g1

0xdfd9,	// (0x00089294) cam4_zoom_cont_pane_g2

0xdfe2,	// (0x0008929d) cam4_zoom_cont_pane_g3

0x0002,

0xf9db,	// (0x0008ac96) cam4_zoom_cont_pane_g

0x71b9,	// (0x00082474) call4_image_pane_ParamLimits

0x71b9,	// (0x00082474) call4_image_pane

0xd584,	// (0x0008883f) call4_windows_conf_pane_ParamLimits

0xd5c5,	// (0x00088880) popup_call4_audio_in_window_ParamLimits

0xd5c5,	// (0x00088880) popup_call4_audio_in_window

0xa03b,	// (0x000852f6) bg_popup_call2_act_pane_cp02

0xd63b,	// (0x000888f6) call4_list_conf_pane

0xcc6d,	// (0x00087f28) call4_image_pane_g1

0xcc6d,	// (0x00087f28) call4_image_pane_g2

0x0001,

0xf6ea,	// (0x0008a9a5) call4_image_pane_g

0xd8e5,	// (0x00088ba0) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8e5,	// (0x00088ba0) list_single_graphic_popup_conf4_pane

0xa03b,	// (0x000852f6) list_highlight_pane_cp022

0xd8f8,	// (0x00088bb3) list_single_graphic_popup_conf4_pane_g1

0xb140,	// (0x000863fb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e2,	// (0x0008ac9d) list_single_graphic_popup_conf4_pane_g

0xd900,	// (0x00088bbb) list_single_graphic_popup_conf4_pane_t1

0x3274,	// (0x0007e52f) popup_vtel_slider_window_ParamLimits

0x3274,	// (0x0007e52f) popup_vtel_slider_window

0xd566,	// (0x00088821) dialer2_ne_pane_t2_ParamLimits

0xd566,	// (0x00088821) dialer2_ne_pane_t2

0x0001,

0xf8c3,	// (0x0008ab7e) dialer2_ne_pane_t_ParamLimits

0xf8c3,	// (0x0008ab7e) dialer2_ne_pane_t

0xa9b2,	// (0x00085c6d) bg_popup_sub_pane_cp010_ParamLimits

0xa9b2,	// (0x00085c6d) bg_popup_sub_pane_cp010

0x7cd7,	// (0x00082f92) popup_vtel_slider_window_g1_ParamLimits

0x7cd7,	// (0x00082f92) popup_vtel_slider_window_g1

0x7ce3,	// (0x00082f9e) popup_vtel_slider_window_g2_ParamLimits

0x7ce3,	// (0x00082f9e) popup_vtel_slider_window_g2

0x0003,

0xf9e7,	// (0x0008aca2) popup_vtel_slider_window_g_ParamLimits

0xf9e7,	// (0x0008aca2) popup_vtel_slider_window_g

0x7d2b,	// (0x00082fe6) vtel_slider_pane_ParamLimits

0x7d2b,	// (0x00082fe6) vtel_slider_pane

0x7d3a,	// (0x00082ff5) vtel_slider_pane_g1_ParamLimits

0x7d3a,	// (0x00082ff5) vtel_slider_pane_g1

0x7d47,	// (0x00083002) vtel_slider_pane_g2_ParamLimits

0x7d47,	// (0x00083002) vtel_slider_pane_g2

0x7d54,	// (0x0008300f) vtel_slider_pane_g3_ParamLimits

0x7d54,	// (0x0008300f) vtel_slider_pane_g3

0x7d3a,	// (0x00082ff5) vtel_slider_pane_g4_ParamLimits

0x7d3a,	// (0x00082ff5) vtel_slider_pane_g4

0x7d61,	// (0x0008301c) vtel_slider_pane_g5_ParamLimits

0x7d61,	// (0x0008301c) vtel_slider_pane_g5

0x0004,

0xf9f0,	// (0x0008acab) vtel_slider_pane_g_ParamLimits

0xf9f0,	// (0x0008acab) vtel_slider_pane_g

0xa9b2,	// (0x00085c6d) main_gallery2_pane

0x7516,	// (0x000827d1) aid_size_row_itut2_dropdow_list_ParamLimits

0x7516,	// (0x000827d1) aid_size_row_itut2_dropdow_list

0x7576,	// (0x00082831) grid_vitu2_function_top_pane_ParamLimits

0x7576,	// (0x00082831) grid_vitu2_function_top_pane

0x75d0,	// (0x0008288b) popup_vitu2_dropdown_list_window_ParamLimits

0x75d0,	// (0x0008288b) popup_vitu2_dropdown_list_window

0x75f0,	// (0x000828ab) popup_vitu2_match_list_window

0x7d6e,	// (0x00083029) cell_vitu2_function_top_pane_ParamLimits

0x7d6e,	// (0x00083029) cell_vitu2_function_top_pane

0x7d88,	// (0x00083043) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7d88,	// (0x00083043) cell_vitu2_function_top_pane_cp01

0x7da4,	// (0x0008305f) cell_vitu2_function_top_wide_pane_ParamLimits

0x7da4,	// (0x0008305f) cell_vitu2_function_top_wide_pane

0xa9b2,	// (0x00085c6d) bg_button_pane_cp012

0x7dc0,	// (0x0008307b) cell_vitu2_function_top_pane_g1

0x7dd4,	// (0x0008308f) bg_button_pane_cp013_ParamLimits

0x7dd4,	// (0x0008308f) bg_button_pane_cp013

0x7df0,	// (0x000830ab) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7df0,	// (0x000830ab) cell_vitu2_function_top_wide_pane_g1

0xed61,	// (0x0008a01c) bg_popup_sub_pane_cp20

0x7e08,	// (0x000830c3) list_vitu2_match_list_pane

0xd6b6,	// (0x00088971) bg_popup_sub_pane_cp20_g1

0xd6be,	// (0x00088979) bg_popup_sub_pane_cp20_g2

0xac26,	// (0x00085ee1) bg_popup_sub_pane_cp20_g3

0xd6c6,	// (0x00088981) bg_popup_sub_pane_cp20_g4

0xac06,	// (0x00085ec1) bg_popup_sub_pane_cp20_g5

0xd916,	// (0x00088bd1) bg_popup_sub_pane_cp20_g6

0xd6d6,	// (0x00088991) bg_popup_sub_pane_cp20_g7

0xd6de,	// (0x00088999) bg_popup_sub_pane_cp20_g8

0xd6e6,	// (0x000889a1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9fb,	// (0x0008acb6) bg_popup_sub_pane_cp20_g

0x7e20,	// (0x000830db) list_vitu2_match_list_item_pane_ParamLimits

0x7e20,	// (0x000830db) list_vitu2_match_list_item_pane

0x7e32,	// (0x000830ed) list_vitu2_match_list_item_pane_t1

0xa03b,	// (0x000852f6) bg_popup_sub_pane_cp21

0xb068,	// (0x00086323) grid_vitu2_dropdown_list_pane

0x7e4c,	// (0x00083107) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7e4c,	// (0x00083107) cell_vitu2_dropdown_list_char_pane

0x7e6d,	// (0x00083128) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7e6d,	// (0x00083128) cell_vitu2_dropdown_list_ctrl_pane

0xd91e,	// (0x00088bd9) cell_vitu2_dropdown_list_char_pane_g1

0xd927,	// (0x00088be2) cell_vitu2_dropdown_list_char_pane_g2

0xd930,	// (0x00088beb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa18,	// (0x0008acd3) cell_vitu2_dropdown_list_char_pane_g

0x7e99,	// (0x00083154) cell_vitu2_dropdown_list_char_pane_t1

0x7ea7,	// (0x00083162) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7ea7,	// (0x00083162) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7eb7,	// (0x00083172) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7eb7,	// (0x00083172) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7ec8,	// (0x00083183) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7ec8,	// (0x00083183) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7ed8,	// (0x00083193) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7ed8,	// (0x00083193) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcebb,	// (0x00088176) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcebb,	// (0x00088176) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1f,	// (0x0008acda) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1f,	// (0x0008acda) cell_vitu2_dropdown_list_ctrl_pane_g

0x7ef4,	// (0x000831af) aid_size_cell_gallery2_ParamLimits

0x7ef4,	// (0x000831af) aid_size_cell_gallery2

0x7f0e,	// (0x000831c9) grid_gallery2_pane_ParamLimits

0x7f0e,	// (0x000831c9) grid_gallery2_pane

0x693f,	// (0x00081bfa) scroll_pane_cp029_ParamLimits

0x693f,	// (0x00081bfa) scroll_pane_cp029

0x7f25,	// (0x000831e0) cell_gallery2_pane_ParamLimits

0x7f25,	// (0x000831e0) cell_gallery2_pane

0xd939,	// (0x00088bf4) cell_gallery2_pane_g2

0x7f77,	// (0x00083232) cell_gallery2_pane_g3

0xd941,	// (0x00088bfc) cell_gallery2_pane_g4

0xd949,	// (0x00088c04) cell_gallery2_pane_g5

0xa969,	// (0x00085c24) grid_highlight_pane_cp10

0x75f0,	// (0x000828ab) popup_vitu2_match_list_window_ParamLimits

0x7602,	// (0x000828bd) popup_vitu2_query_window_ParamLimits

0x7602,	// (0x000828bd) popup_vitu2_query_window

0xa03b,	// (0x000852f6) bg_vitu2_candi_button_pane

0xd91e,	// (0x00088bd9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd927,	// (0x00088be2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd930,	// (0x00088beb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x120e,	// (0x0007c4c9) bg_button_pane_cp015

0x7f7f,	// (0x0008323a) bg_button_pane_cp016

0x7f92,	// (0x0008324d) bg_button_pane_cp017

0xc859,	// (0x00087b14) bg_popup_sub_pane_cp22

0xd951,	// (0x00088c0c) popup_vitu2_query_window_g1

0x1241,	// (0x0007c4fc) popup_vitu2_query_window_g2

0x0002,

0xfa2a,	// (0x0008ace5) popup_vitu2_query_window_g

0x125e,	// (0x0007c519) popup_vitu2_query_window_t1_ParamLimits

0x125e,	// (0x0007c519) popup_vitu2_query_window_t1

0x1291,	// (0x0007c54c) popup_vitu2_query_window_t2_ParamLimits

0x1291,	// (0x0007c54c) popup_vitu2_query_window_t2

0x12a3,	// (0x0007c55e) popup_vitu2_query_window_t3_ParamLimits

0x12a3,	// (0x0007c55e) popup_vitu2_query_window_t3

0x7fb6,	// (0x00083271) popup_vitu2_query_window_t4_ParamLimits

0x7fb6,	// (0x00083271) popup_vitu2_query_window_t4

0x7fd7,	// (0x00083292) popup_vitu2_query_window_t5_ParamLimits

0x7fd7,	// (0x00083292) popup_vitu2_query_window_t5

0x0006,

0xfa31,	// (0x0008acec) popup_vitu2_query_window_t_ParamLimits

0xfa31,	// (0x0008acec) popup_vitu2_query_window_t

0xd7c0,	// (0x00088a7b) main_cset_text_pane

0x79c4,	// (0x00082c7f) aid_area_touch_slider_ParamLimits

0x79e0,	// (0x00082c9b) cset_slider_pane_ParamLimits

0x7a0a,	// (0x00082cc5) main_cset_slider_pane_g1_ParamLimits

0x7a1f,	// (0x00082cda) main_cset_slider_pane_g2_ParamLimits

0xd7e1,	// (0x00088a9c) main_cset_slider_pane_g3_ParamLimits

0xd7e1,	// (0x00088a9c) main_cset_slider_pane_g3

0x7a34,	// (0x00082cef) main_cset_slider_pane_g4_ParamLimits

0x7a34,	// (0x00082cef) main_cset_slider_pane_g4

0x7a43,	// (0x00082cfe) main_cset_slider_pane_g5_ParamLimits

0x7a43,	// (0x00082cfe) main_cset_slider_pane_g5

0x7a51,	// (0x00082d0c) main_cset_slider_pane_g6_ParamLimits

0x7a51,	// (0x00082d0c) main_cset_slider_pane_g6

0xf984,	// (0x0008ac3f) main_cset_slider_pane_g_ParamLimits

0xd811,	// (0x00088acc) main_cset_slider_pane_t1_ParamLimits

0x7ae5,	// (0x00082da0) main_cset_slider_pane_t2_ParamLimits

0x7aff,	// (0x00082dba) main_cset_slider_pane_t3_ParamLimits

0x7b19,	// (0x00082dd4) main_cset_slider_pane_t4_ParamLimits

0x7b37,	// (0x00082df2) main_cset_slider_pane_t5_ParamLimits

0x7b55,	// (0x00082e10) main_cset_slider_pane_t6_ParamLimits

0x7b6c,	// (0x00082e27) main_cset_slider_pane_t7_ParamLimits

0x7b9a,	// (0x00082e55) main_cset_slider_pane_t8_ParamLimits

0x7b9a,	// (0x00082e55) main_cset_slider_pane_t8

0x7bc2,	// (0x00082e7d) main_cset_slider_pane_t9_ParamLimits

0x7bc2,	// (0x00082e7d) main_cset_slider_pane_t9

0x7bea,	// (0x00082ea5) main_cset_slider_pane_t10_ParamLimits

0x7bea,	// (0x00082ea5) main_cset_slider_pane_t10

0x7c12,	// (0x00082ecd) main_cset_slider_pane_t11_ParamLimits

0x7c12,	// (0x00082ecd) main_cset_slider_pane_t11

0x7c3c,	// (0x00082ef7) main_cset_slider_pane_t12_ParamLimits

0x7c3c,	// (0x00082ef7) main_cset_slider_pane_t12

0x7c5b,	// (0x00082f16) main_cset_slider_pane_t13_ParamLimits

0x7c5b,	// (0x00082f16) main_cset_slider_pane_t13

0xf9a9,	// (0x0008ac64) main_cset_slider_pane_t_ParamLimits

0xa03b,	// (0x000852f6) bg_popup_sub_pane_cp011

0xd95d,	// (0x00088c18) main_cset_text_pane_g1

0xd965,	// (0x00088c20) main_cset_text_pane_t1

0xd973,	// (0x00088c2e) main_cset_text_pane_t2

0xd981,	// (0x00088c3c) main_cset_text_pane_t3

0xd98f,	// (0x00088c4a) main_cset_text_pane_t4

0xd99d,	// (0x00088c58) main_cset_text_pane_t5

0xd9ab,	// (0x00088c66) main_cset_text_pane_t6

0xd9b9,	// (0x00088c74) main_cset_text_pane_t7

0x0006,

0xfa40,	// (0x0008acfb) main_cset_text_pane_t

0xa03b,	// (0x000852f6) main_cam4_burst_pane

0xa03b,	// (0x000852f6) main_cam5_pane

0x7913,	// (0x00082bce) bg_button_pane_cp019

0x791c,	// (0x00082bd7) bg_button_pane_cp020

0xd7ed,	// (0x00088aa8) main_cset_slider_pane_g7_ParamLimits

0xd7ed,	// (0x00088aa8) main_cset_slider_pane_g7

0xd7f9,	// (0x00088ab4) main_cset_slider_pane_g8_ParamLimits

0xd7f9,	// (0x00088ab4) main_cset_slider_pane_g8

0x7a65,	// (0x00082d20) main_cset_slider_pane_g9_ParamLimits

0x7a65,	// (0x00082d20) main_cset_slider_pane_g9

0x7a71,	// (0x00082d2c) main_cset_slider_pane_g10_ParamLimits

0x7a71,	// (0x00082d2c) main_cset_slider_pane_g10

0x7a7d,	// (0x00082d38) main_cset_slider_pane_g11_ParamLimits

0x7a7d,	// (0x00082d38) main_cset_slider_pane_g11

0x7a89,	// (0x00082d44) main_cset_slider_pane_g12_ParamLimits

0x7a89,	// (0x00082d44) main_cset_slider_pane_g12

0x7a95,	// (0x00082d50) main_cset_slider_pane_g13_ParamLimits

0x7a95,	// (0x00082d50) main_cset_slider_pane_g13

0x7aa3,	// (0x00082d5e) main_cset_slider_pane_g14_ParamLimits

0x7aa3,	// (0x00082d5e) main_cset_slider_pane_g14

0x7ab1,	// (0x00082d6c) main_cset_slider_pane_g15_ParamLimits

0x7ab1,	// (0x00082d6c) main_cset_slider_pane_g15

0xd83f,	// (0x00088afa) main_cset_slider_pane_t14_ParamLimits

0xd83f,	// (0x00088afa) main_cset_slider_pane_t14

0xd878,	// (0x00088b33) main_cset_slider_pane_t15_ParamLimits

0xd878,	// (0x00088b33) main_cset_slider_pane_t15

0x7ff8,	// (0x000832b3) aid_cam4_burst_size_cell_ParamLimits

0x7ff8,	// (0x000832b3) aid_cam4_burst_size_cell

0x8014,	// (0x000832cf) grid_cam4_burst_pane_ParamLimits

0x8014,	// (0x000832cf) grid_cam4_burst_pane

0x8044,	// (0x000832ff) linegrid_cam4_burst_pane_ParamLimits

0x8044,	// (0x000832ff) linegrid_cam4_burst_pane

0x8064,	// (0x0008331f) scroll_pane_cp30_ParamLimits

0x8064,	// (0x0008331f) scroll_pane_cp30

0x8070,	// (0x0008332b) cell_cam4_burst_pane_ParamLimits

0x8070,	// (0x0008332b) cell_cam4_burst_pane

0xd9c7,	// (0x00088c82) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c7,	// (0x00088c82) linegrid_cam4_burst_pane_g1

0x80ac,	// (0x00083367) linegrid_cam4_burst_pane_g2_ParamLimits

0x80ac,	// (0x00083367) linegrid_cam4_burst_pane_g2

0xd9d4,	// (0x00088c8f) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d4,	// (0x00088c8f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4f,	// (0x0008ad0a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0008ad0a) linegrid_cam4_burst_pane_g

0x80bd,	// (0x00083378) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x80bd,	// (0x00083378) linegrid_cam4_burst_pane_g3_copy1

0xd9e1,	// (0x00088c9c) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e1,	// (0x00088c9c) linegrid_cam4_burst_pane_g4

0x80d7,	// (0x00083392) linegrid_cam4_burst_pane_g5_ParamLimits

0x80d7,	// (0x00083392) linegrid_cam4_burst_pane_g5

0x80e8,	// (0x000833a3) linegrid_cam4_burst_pane_g6_ParamLimits

0x80e8,	// (0x000833a3) linegrid_cam4_burst_pane_g6

0xd9ee,	// (0x00088ca9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9ee,	// (0x00088ca9) linegrid_cam4_burst_pane_g7

0x80f9,	// (0x000833b4) cell_cam4_burst_pane_g1

0xda07,	// (0x00088cc2) main_cam5_pane_t1_ParamLimits

0xda07,	// (0x00088cc2) main_cam5_pane_t1

0xda19,	// (0x00088cd4) main_cam5_pane_t2_ParamLimits

0xda19,	// (0x00088cd4) main_cam5_pane_t2

0xda2b,	// (0x00088ce6) main_cam5_pane_t3_ParamLimits

0xda2b,	// (0x00088ce6) main_cam5_pane_t3

0xda49,	// (0x00088d04) main_cam5_pane_t4_ParamLimits

0xda49,	// (0x00088d04) main_cam5_pane_t4

0xda61,	// (0x00088d1c) main_cam5_pane_t5_ParamLimits

0xda61,	// (0x00088d1c) main_cam5_pane_t5

0xda75,	// (0x00088d30) main_cam5_pane_t6_ParamLimits

0xda75,	// (0x00088d30) main_cam5_pane_t6

0xda89,	// (0x00088d44) main_cam5_pane_t7_ParamLimits

0xda89,	// (0x00088d44) main_cam5_pane_t7

0xda9b,	// (0x00088d56) main_cam5_pane_t8_ParamLimits

0xda9b,	// (0x00088d56) main_cam5_pane_t8

0xdab7,	// (0x00088d72) main_cam5_pane_t9_ParamLimits

0xdab7,	// (0x00088d72) main_cam5_pane_t9

0xdac9,	// (0x00088d84) main_cam5_pane_t10_ParamLimits

0xdac9,	// (0x00088d84) main_cam5_pane_t10

0xdadb,	// (0x00088d96) main_cam5_pane_t11_ParamLimits

0xdadb,	// (0x00088d96) main_cam5_pane_t11

0xdaed,	// (0x00088da8) main_cam5_pane_t12_ParamLimits

0xdaed,	// (0x00088da8) main_cam5_pane_t12

0xdb02,	// (0x00088dbd) main_cam5_pane_t13_ParamLimits

0xdb02,	// (0x00088dbd) main_cam5_pane_t13

0x000c,

0xfa5b,	// (0x0008ad16) main_cam5_pane_t_ParamLimits

0xfa5b,	// (0x0008ad16) main_cam5_pane_t

0x229c,	// (0x0007d557) popup_scut_keymap_window_ParamLimits

0x229c,	// (0x0007d557) popup_scut_keymap_window

0x810c,	// (0x000833c7) aid_size_cell_brow_shortcut

0xa969,	// (0x00085c24) bg_popup_window_pane_cp010

0x8118,	// (0x000833d3) grid_scut_pane

0x8124,	// (0x000833df) cell_scut_pane_ParamLimits

0x8124,	// (0x000833df) cell_scut_pane

0x813b,	// (0x000833f6) cell_scut_pane_g1

0xdb1f,	// (0x00088dda) cell_scut_pane_t1

0xdb2e,	// (0x00088de9) cell_scut_pane_t2

0x8144,	// (0x000833ff) cell_scut_pane_t3

0x0002,

0xfa76,	// (0x0008ad31) cell_scut_pane_t

0x6124,	// (0x000813df) main_mup3_pane_g8_ParamLimits

0x6124,	// (0x000813df) main_mup3_pane_g8

0x7524,	// (0x000827df) area_vitu2_query_pane_ParamLimits

0x7524,	// (0x000827df) area_vitu2_query_pane

0x1220,	// (0x0007c4db) input_focus_pane_cp08

0xdb3d,	// (0x00088df8) area_vitu2_query_pane_g1

0x1321,	// (0x0007c5dc) area_vitu2_query_pane_g2

0x0001,

0xfa7d,	// (0x0008ad38) area_vitu2_query_pane_g

0x8152,	// (0x0008340d) area_vitu2_query_pane_t1_ParamLimits

0x8152,	// (0x0008340d) area_vitu2_query_pane_t1

0x8166,	// (0x00083421) area_vitu2_query_pane_t2_ParamLimits

0x8166,	// (0x00083421) area_vitu2_query_pane_t2

0x1332,	// (0x0007c5ed) area_vitu2_query_pane_t3_ParamLimits

0x1332,	// (0x0007c5ed) area_vitu2_query_pane_t3

0x135a,	// (0x0007c615) area_vitu2_query_pane_t4_ParamLimits

0x135a,	// (0x0007c615) area_vitu2_query_pane_t4

0x1382,	// (0x0007c63d) area_vitu2_query_pane_t5_ParamLimits

0x1382,	// (0x0007c63d) area_vitu2_query_pane_t5

0x13aa,	// (0x0007c665) area_vitu2_query_pane_t6_ParamLimits

0x13aa,	// (0x0007c665) area_vitu2_query_pane_t6

0x0006,

0xfa82,	// (0x0008ad3d) area_vitu2_query_pane_t_ParamLimits

0xfa82,	// (0x0008ad3d) area_vitu2_query_pane_t

0x817a,	// (0x00083435) bg_button_pane_cp018

0x8188,	// (0x00083443) bg_button_pane_cp021

0x13f6,	// (0x0007c6b1) bg_button_pane_cp022

0x1407,	// (0x0007c6c2) input_focus_pane_cp09

0xb24f,	// (0x0008650a) aid_size_touch_mv_arrow_left

0xb27a,	// (0x00086535) aid_size_touch_mv_arrow_right

0x7ac9,	// (0x00082d84) main_cset_slider_pane_g16_ParamLimits

0x7ac9,	// (0x00082d84) main_cset_slider_pane_g16

0x7ad7,	// (0x00082d92) main_cset_slider_pane_g17_ParamLimits

0x7ad7,	// (0x00082d92) main_cset_slider_pane_g17

0x80f9,	// (0x000833b4) cell_cam4_burst_pane_g1_ParamLimits

0xa03b,	// (0x000852f6) compa_mode_pane

0x7cef,	// (0x00082faa) popup_vtel_slider_window_g3_ParamLimits

0x7cef,	// (0x00082faa) popup_vtel_slider_window_g3

0x7d03,	// (0x00082fbe) popup_vtel_slider_window_g4_ParamLimits

0x7d03,	// (0x00082fbe) popup_vtel_slider_window_g4

0x7d17,	// (0x00082fd2) popup_vtel_slider_window_t1_ParamLimits

0x7d17,	// (0x00082fd2) popup_vtel_slider_window_t1

0xa03b,	// (0x000852f6) main_cl_pane

0x542d,	// (0x000806e8) popup_imed_adjust2_window_ParamLimits

0xc859,	// (0x00087b14) bg_tb_trans_pane_cp05_ParamLimits

0xd17b,	// (0x00088436) popup_imed_adjust2_window_g1_ParamLimits

0xd18a,	// (0x00088445) popup_imed_adjust2_window_g2_ParamLimits

0xd18a,	// (0x00088445) popup_imed_adjust2_window_g2

0xd196,	// (0x00088451) popup_imed_adjust2_window_g3_ParamLimits

0xd196,	// (0x00088451) popup_imed_adjust2_window_g3

0x0002,

0xf7ed,	// (0x0008aaa8) popup_imed_adjust2_window_g_ParamLimits

0xf7ed,	// (0x0008aaa8) popup_imed_adjust2_window_g

0xd1a2,	// (0x0008845d) popup_imed_adjust2_window_t1_ParamLimits

0xd1ba,	// (0x00088475) slider_imed_adjust_pane_ParamLimits

0xd1ce,	// (0x00088489) slider_imed_adjust_pane_g1_ParamLimits

0xd1de,	// (0x00088499) slider_imed_adjust_pane_g2_ParamLimits

0xd1ee,	// (0x000884a9) slider_imed_adjust_pane_g3_ParamLimits

0xd1ff,	// (0x000884ba) slider_imed_adjust_pane_g4_ParamLimits

0xf7f4,	// (0x0008aaaf) slider_imed_adjust_pane_g_ParamLimits

0x7275,	// (0x00082530) aid_touch_area_cam4_ParamLimits

0x7275,	// (0x00082530) aid_touch_area_cam4

0x7285,	// (0x00082540) battery_pane_cp01

0x730c,	// (0x000825c7) main_camera4_pane_g6_ParamLimits

0x730c,	// (0x000825c7) main_camera4_pane_g6

0x732a,	// (0x000825e5) main_camera4_pane_t2_ParamLimits

0x732a,	// (0x000825e5) main_camera4_pane_t2

0x0001,

0xf8f7,	// (0x0008abb2) main_camera4_pane_t_ParamLimits

0xf8f7,	// (0x0008abb2) main_camera4_pane_t

0x73ab,	// (0x00082666) aid_touch_area_vid4_ParamLimits

0x73ab,	// (0x00082666) aid_touch_area_vid4

0x73eb,	// (0x000826a6) main_video4_pane_g5_ParamLimits

0x73eb,	// (0x000826a6) main_video4_pane_g5

0x740f,	// (0x000826ca) vid4_progress_pane_ParamLimits

0x740f,	// (0x000826ca) vid4_progress_pane

0xd805,	// (0x00088ac0) main_cset_slider_pane_g18_ParamLimits

0xd805,	// (0x00088ac0) main_cset_slider_pane_g18

0xd9fb,	// (0x00088cb6) cell_cam4_burst_pane_g2_ParamLimits

0xd9fb,	// (0x00088cb6) cell_cam4_burst_pane_g2

0x0001,

0xfa56,	// (0x0008ad11) cell_cam4_burst_pane_g_ParamLimits

0xfa56,	// (0x0008ad11) cell_cam4_burst_pane_g

0x8194,	// (0x0008344f) bg_cl_pane_ParamLimits

0x8194,	// (0x0008344f) bg_cl_pane

0x81a0,	// (0x0008345b) cl_header_pane_ParamLimits

0x81a0,	// (0x0008345b) cl_header_pane

0x81ac,	// (0x00083467) cl_listscroll_pane_ParamLimits

0x81ac,	// (0x00083467) cl_listscroll_pane

0xdb49,	// (0x00088e04) bg_cl_pane_g1

0xdb51,	// (0x00088e0c) bg_cl_pane_g2

0xdb59,	// (0x00088e14) bg_cl_pane_g3

0xdb61,	// (0x00088e1c) bg_cl_pane_g4

0xdb69,	// (0x00088e24) bg_cl_pane_g5

0xdb71,	// (0x00088e2c) bg_cl_pane_g6

0xdb79,	// (0x00088e34) bg_cl_pane_g7

0xdb81,	// (0x00088e3c) bg_cl_pane_g8

0xdb89,	// (0x00088e44) bg_cl_pane_g9

0x0008,

0xfa91,	// (0x0008ad4c) bg_cl_pane_g

0x81b8,	// (0x00083473) aid_height_cl_leading_ParamLimits

0x81b8,	// (0x00083473) aid_height_cl_leading

0x81c4,	// (0x0008347f) aid_height_cl_text_ParamLimits

0x81c4,	// (0x0008347f) aid_height_cl_text

0xed61,	// (0x0008a01c) bg_cl_header_pane_ParamLimits

0xed61,	// (0x0008a01c) bg_cl_header_pane

0x81dc,	// (0x00083497) cl_header_pane_g1_ParamLimits

0x81dc,	// (0x00083497) cl_header_pane_g1

0x81e9,	// (0x000834a4) cl_header_pane_t1_ParamLimits

0x81e9,	// (0x000834a4) cl_header_pane_t1

0xdb91,	// (0x00088e4c) cl_list_pane

0xd7d8,	// (0x00088a93) hc_scroll_pane_cp01

0xac06,	// (0x00085ec1) bg_cl_header_pane_g1

0xd6b6,	// (0x00088971) bg_cl_header_pane_g2

0xac26,	// (0x00085ee1) bg_cl_header_pane_g3

0xd6c6,	// (0x00088981) bg_cl_header_pane_g4

0xd6be,	// (0x00088979) bg_cl_header_pane_g5

0xd916,	// (0x00088bd1) bg_cl_header_pane_g6

0xd6de,	// (0x00088999) bg_cl_header_pane_g7

0xd6e6,	// (0x000889a1) bg_cl_header_pane_g8

0xd6d6,	// (0x00088991) bg_cl_header_pane_g9

0x0008,

0xfaa4,	// (0x0008ad5f) bg_cl_header_pane_g

0x81fb,	// (0x000834b6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x81fb,	// (0x000834b6) hc_cl_list_double_graphic_heading_pane

0x820f,	// (0x000834ca) hc_cl_list_single_graphic_pane_ParamLimits

0x820f,	// (0x000834ca) hc_cl_list_single_graphic_pane

0x8229,	// (0x000834e4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8229,	// (0x000834e4) hc_cl_list_single_graphic_pane_g1

0x8235,	// (0x000834f0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8235,	// (0x000834f0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab7,	// (0x0008ad72) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab7,	// (0x0008ad72) hc_cl_list_single_graphic_pane_g

0x8249,	// (0x00083504) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8249,	// (0x00083504) hc_cl_list_single_graphic_pane_t1

0x8229,	// (0x000834e4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8229,	// (0x000834e4) hc_cl_list_double_graphic_heading_pane_g1

0x825e,	// (0x00083519) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x825e,	// (0x00083519) hc_cl_list_double_graphic_heading_pane_g2

0x8272,	// (0x0008352d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8272,	// (0x0008352d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfabc,	// (0x0008ad77) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfabc,	// (0x0008ad77) hc_cl_list_double_graphic_heading_pane_g

0x8286,	// (0x00083541) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8286,	// (0x00083541) hc_cl_list_double_graphic_heading_pane_t1

0x829b,	// (0x00083556) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x829b,	// (0x00083556) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac3,	// (0x0008ad7e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac3,	// (0x0008ad7e) hc_cl_list_double_graphic_heading_pane_t

0x82b8,	// (0x00083573) vid4_progress_pane_g1

0x82c8,	// (0x00083583) vid4_progress_pane_g2

0x82d8,	// (0x00083593) vid4_progress_pane_g3

0x82ea,	// (0x000835a5) vid4_progress_pane_g4

0x0004,

0xfac8,	// (0x0008ad83) vid4_progress_pane_g

0x8302,	// (0x000835bd) vid4_progress_pane_t1

0x8318,	// (0x000835d3) vid4_progress_pane_t2

0x0002,

0xfad3,	// (0x0008ad8e) vid4_progress_pane_t

0x8343,	// (0x000835fe) wait_bar_pane_cp07

0xca54,	// (0x00087d0f) blid_firmament_pane_ParamLimits

0xca97,	// (0x00087d52) popup_blid_sat_info2_window_g1

0xcabb,	// (0x00087d76) popup_blid_sat_info2_window_t3

0xcac9,	// (0x00087d84) popup_blid_sat_info2_window_t4

0xcad7,	// (0x00087d92) popup_blid_sat_info2_window_t5

0xcae5,	// (0x00087da0) popup_blid_sat_info2_window_t6

0xcaf5,	// (0x00087db0) popup_blid_sat_info2_window_t7

0xcb03,	// (0x00087dbe) popup_blid_sat_info2_window_t8

0xcb11,	// (0x00087dcc) popup_blid_sat_info2_window_t9

0xcb1f,	// (0x00087dda) popup_blid_sat_info2_window_t10

0xcbe1,	// (0x00087e9c) aid_firma_cardinal_ParamLimits

0xcbf5,	// (0x00087eb0) blid_firmament_pane_t1_ParamLimits

0xcc0c,	// (0x00087ec7) blid_firmament_pane_t2_ParamLimits

0xcc23,	// (0x00087ede) blid_firmament_pane_t3_ParamLimits

0xcc46,	// (0x00087f01) blid_firmament_pane_t4_ParamLimits

0xf6e1,	// (0x0008a99c) blid_firmament_pane_t_ParamLimits

0xcc5d,	// (0x00087f18) blid_sat_info_pane_ParamLimits

0xa9b2,	// (0x00085c6d) main_cam_set_pane_ParamLimits

0x68d8,	// (0x00081b93) aid_size_cell_colour_35_ParamLimits

0x68f2,	// (0x00081bad) aid_size_cell_colour_112_ParamLimits

0x6909,	// (0x00081bc4) aid_size_cell_effect_ParamLimits

0xa9b2,	// (0x00085c6d) bg_tb_trans_pane_cp02_ParamLimits

0xaf9c,	// (0x00086257) heading_imed_pane_ParamLimits

0x6923,	// (0x00081bde) listscroll_imed_pane_ParamLimits

0xbe3f,	// (0x000870fa) popup_call2_audio_first_window_g5_ParamLimits

0xbe3f,	// (0x000870fa) popup_call2_audio_first_window_g5

0x7032,	// (0x000822ed) aid_size_touch_image3_arrow_left_ParamLimits

0x7032,	// (0x000822ed) aid_size_touch_image3_arrow_left

0x7048,	// (0x00082303) aid_size_touch_image3_arrow_right_ParamLimits

0x7048,	// (0x00082303) aid_size_touch_image3_arrow_right

0x832d,	// (0x000835e8) vid4_progress_pane_t3

0x6bc3,	// (0x00081e7e) main_hwr_training_symbol_option_pane_ParamLimits

0x6bc3,	// (0x00081e7e) main_hwr_training_symbol_option_pane

0xd468,	// (0x00088723) popup_hwr_training_preview_window_ParamLimits

0xd468,	// (0x00088723) popup_hwr_training_preview_window

0x6c24,	// (0x00081edf) hwr_training_navi_pane_g5_ParamLimits

0x6c24,	// (0x00081edf) hwr_training_navi_pane_g5

0xd6a4,	// (0x0008895f) popup_char_count_window

0xed61,	// (0x0008a01c) bg_popup_sub_pane_cp20_ParamLimits

0x7e08,	// (0x000830c3) list_vitu2_match_list_pane_ParamLimits

0x7e14,	// (0x000830cf) vitu2_page_scroll_pane_ParamLimits

0x7e14,	// (0x000830cf) vitu2_page_scroll_pane

0xdb9a,	// (0x00088e55) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb9a,	// (0x00088e55) list_single_hwr_training_symbol_option_pane

0xdbad,	// (0x00088e68) list_single_hwr_training_symbol_option_pane_g1

0xdbb5,	// (0x00088e70) list_single_hwr_training_symbol_option_pane_t1

0xdbc3,	// (0x00088e7e) bg_button_pane_cp023

0xdbcc,	// (0x00088e87) bg_button_pane_cp024

0x8365,	// (0x00083620) vitu2_page_scroll_pane_g1

0x836d,	// (0x00083628) vitu2_page_scroll_pane_g2

0x0001,

0xfada,	// (0x0008ad95) vitu2_page_scroll_pane_g

0x8375,	// (0x00083630) vitu2_page_scroll_pane_t1

0xcc96,	// (0x00087f51) popup_char_count_window_g1

0xdbff,	// (0x00088eba) popup_char_count_window_g2

0xdc08,	// (0x00088ec3) popup_char_count_window_g3

0x0002,

0xfadf,	// (0x0008ad9a) popup_char_count_window_g

0xdc11,	// (0x00088ecc) popup_char_count_window_t1

0xa03b,	// (0x000852f6) main_vded2_pane

0xd167,	// (0x00088422) aid_size_cell_imed_line

0xd171,	// (0x0008842c) grid_imed_line_width_pane

0x747b,	// (0x00082736) vid4_indicators_pane_g4

0xdc1f,	// (0x00088eda) cell_imed_line_width_pane_ParamLimits

0xdc1f,	// (0x00088eda) cell_imed_line_width_pane

0xdc33,	// (0x00088eee) cell_imed_line_width_pane_g1

0xd755,	// (0x00088a10) cell_imed_line_width_pane_g2

0x0001,

0xfae6,	// (0x0008ada1) cell_imed_line_width_pane_g

0x8384,	// (0x0008363f) main_vded2_pane_g1_ParamLimits

0x8384,	// (0x0008363f) main_vded2_pane_g1

0x8391,	// (0x0008364c) main_vded2_pane_g2_ParamLimits

0x8391,	// (0x0008364c) main_vded2_pane_g2

0x0001,

0xfaeb,	// (0x0008ada6) main_vded2_pane_g_ParamLimits

0xfaeb,	// (0x0008ada6) main_vded2_pane_g

0x839f,	// (0x0008365a) vded2_slider_pane_ParamLimits

0x839f,	// (0x0008365a) vded2_slider_pane

0x83ac,	// (0x00083667) aid_size_touch_vded2_end

0x83b6,	// (0x00083671) aid_size_touch_vded2_playhead

0xdc3c,	// (0x00088ef7) aid_size_touch_vded2_start

0xdc44,	// (0x00088eff) vded2_slider_bg_pane

0xdc4d,	// (0x00088f08) vded2_slider_pane_g1

0xdc56,	// (0x00088f11) vded2_slider_pane_g2

0x83be,	// (0x00083679) vded2_slider_pane_g3

0x0002,

0xfaf0,	// (0x0008adab) vded2_slider_pane_g

0xdc5e,	// (0x00088f19) vded2_slider_bg_pane_g1

0xdc67,	// (0x00088f22) vded2_slider_bg_pane_g2

0xdc70,	// (0x00088f2b) vded2_slider_bg_pane_g3

0x0002,

0x08df,	// (0x0007bb9a) vded2_slider_bg_pane_g

0x4c84,	// (0x0007ff3f) aid_postcard_touch_down_pane_ParamLimits

0x4c84,	// (0x0007ff3f) aid_postcard_touch_down_pane

0x4c94,	// (0x0007ff4f) aid_postcard_touch_up_pane_ParamLimits

0x4c94,	// (0x0007ff4f) aid_postcard_touch_up_pane

0xa03b,	// (0x000852f6) main_blid2_pane

0x53bc,	// (0x00080677) popup_blid2_search_window

0xa03b,	// (0x000852f6) blid2_gps_pane

0xa03b,	// (0x000852f6) blid2_navig_pane

0xa03b,	// (0x000852f6) blid2_search_pane

0xa03b,	// (0x000852f6) blid2_tripm_pane

0x83c7,	// (0x00083682) blid2_search_pane_g1_ParamLimits

0x83c7,	// (0x00083682) blid2_search_pane_g1

0x83d7,	// (0x00083692) blid2_search_pane_t1_ParamLimits

0x83d7,	// (0x00083692) blid2_search_pane_t1

0x83e9,	// (0x000836a4) aid_size_cell_blid2_gps_ParamLimits

0x83e9,	// (0x000836a4) aid_size_cell_blid2_gps

0x83f9,	// (0x000836b4) blid2_gps_pane_g1_ParamLimits

0x83f9,	// (0x000836b4) blid2_gps_pane_g1

0x8405,	// (0x000836c0) grid_blid2_satellite_pane_ParamLimits

0x8405,	// (0x000836c0) grid_blid2_satellite_pane

0x8415,	// (0x000836d0) blid2_navig_pane_g1_ParamLimits

0x8415,	// (0x000836d0) blid2_navig_pane_g1

0x8421,	// (0x000836dc) blid2_navig_pane_t1_ParamLimits

0x8421,	// (0x000836dc) blid2_navig_pane_t1

0x8433,	// (0x000836ee) blid2_navig_pane_t2_ParamLimits

0x8433,	// (0x000836ee) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0008adb2) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0008adb2) blid2_navig_pane_t

0x8445,	// (0x00083700) blid2_navig_ring_pane_ParamLimits

0x8445,	// (0x00083700) blid2_navig_ring_pane

0x8455,	// (0x00083710) blid2_speed_pane_ParamLimits

0x8455,	// (0x00083710) blid2_speed_pane

0x8461,	// (0x0008371c) blid2_tripm_pane_g1_ParamLimits

0x8461,	// (0x0008371c) blid2_tripm_pane_g1

0x8471,	// (0x0008372c) blid2_tripm_pane_g2_ParamLimits

0x8471,	// (0x0008372c) blid2_tripm_pane_g2

0x847d,	// (0x00083738) blid2_tripm_pane_g3_ParamLimits

0x847d,	// (0x00083738) blid2_tripm_pane_g3

0x8489,	// (0x00083744) blid2_tripm_pane_g4_ParamLimits

0x8489,	// (0x00083744) blid2_tripm_pane_g4

0x8495,	// (0x00083750) blid2_tripm_pane_g5_ParamLimits

0x8495,	// (0x00083750) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0008adb7) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0008adb7) blid2_tripm_pane_g

0x84b1,	// (0x0008376c) blid2_tripm_pane_t1_ParamLimits

0x84b1,	// (0x0008376c) blid2_tripm_pane_t1

0x84c5,	// (0x00083780) blid2_tripm_pane_t2_ParamLimits

0x84c5,	// (0x00083780) blid2_tripm_pane_t2

0x84d7,	// (0x00083792) blid2_tripm_pane_t3_ParamLimits

0x84d7,	// (0x00083792) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0008adc4) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0008adc4) blid2_tripm_pane_t

0x8509,	// (0x000837c4) cell_blid2_satellite_pane_ParamLimits

0x8509,	// (0x000837c4) cell_blid2_satellite_pane

0x8523,	// (0x000837de) cell_blid2_satellite_pane_g1

0xdc79,	// (0x00088f34) cell_blid2_satellite_pane_t1

0xcc6d,	// (0x00087f28) blid2_speed_pane_g1

0xdc87,	// (0x00088f42) blid2_speed_pane_t1

0xdc95,	// (0x00088f50) blid2_speed_pane_t2

0x0001,

0x0901,	// (0x0007bbbc) blid2_speed_pane_t

0xcc6d,	// (0x00087f28) blid2_navig_ring_pane_g1

0x852c,	// (0x000837e7) blid2_navig_ring_pane_g2

0x8534,	// (0x000837ef) blid2_navig_ring_pane_g3

0x853c,	// (0x000837f7) blid2_navig_ring_pane_g4

0x8544,	// (0x000837ff) blid2_navig_ring_pane_g5

0x0004,

0xfb12,	// (0x0008adcd) blid2_navig_ring_pane_g

0xa03b,	// (0x000852f6) bg_popup_window_pane_cp011

0xdca3,	// (0x00088f5e) popup_blid2_search_window_g1

0xdcab,	// (0x00088f66) popup_blid2_search_window_t1

0xdcb9,	// (0x00088f74) popup_blid2_search_window_t2

0x0001,

0x0911,	// (0x0007bbcc) popup_blid2_search_window_t

0xab0c,	// (0x00085dc7) main_browser_pane_g1

0xa792,	// (0x00085a4d) main_browser_pane_ParamLimits

0xa9b2,	// (0x00085c6d) bg_button_pane_cp011_ParamLimits

0x76e6,	// (0x000829a1) cell_vitu2_function_pane_g1_ParamLimits

0xc859,	// (0x00087b14) bg_popup_sub_pane_cp22_ParamLimits

0x1220,	// (0x0007c4db) input_focus_pane_cp08_ParamLimits

0x7fa5,	// (0x00083260) popup_vitu2_query_button_pane_ParamLimits

0x7fa5,	// (0x00083260) popup_vitu2_query_button_pane

0x1237,	// (0x0007c4f2) popup_vitu2_query_input_button_pane

0xd951,	// (0x00088c0c) popup_vitu2_query_window_g1_ParamLimits

0x1241,	// (0x0007c4fc) popup_vitu2_query_window_g2_ParamLimits

0xfa2a,	// (0x0008ace5) popup_vitu2_query_window_g_ParamLimits

0xa03b,	// (0x000852f6) bg_button_pane_cp026

0x854c,	// (0x00083807) popup_vitu2_query_input_button_pane_g1

0xa03b,	// (0x000852f6) bg_button_pane_cp025

0xdcc7,	// (0x00088f82) popup_vitu2_query_button_pane_t1

0x5e1c,	// (0x000810d7) main_mp3_pane_t6

0x5e2c,	// (0x000810e7) popup_slider_window_cp01

0x7360,	// (0x0008261b) cam4_battery_pane

0x743a,	// (0x000826f5) cam4_battery_pane_cp02

0x82b0,	// (0x0008356b) cam4_battery_pane_cp01

0x82b0,	// (0x0008356b) cam4_battery_pane_cp03

0xcc6d,	// (0x00087f28) cam4_battery_pane_g1

0xd8b1,	// (0x00088b6c) cam4_battery_pane_g2

0x0001,

0xfb1d,	// (0x0008add8) cam4_battery_pane_g

0xcb2d,	// (0x00087de8) popup_blid_sat_info2_window_t11

0xb24f,	// (0x0008650a) aid_size_touch_mv_arrow_left_ParamLimits

0xb27a,	// (0x00086535) aid_size_touch_mv_arrow_right_ParamLimits

0xb2d8,	// (0x00086593) navi_pane_g1_ParamLimits

0xb2e4,	// (0x0008659f) navi_pane_g2_ParamLimits

0xb312,	// (0x000865cd) navi_pane_g3_ParamLimits

0xf3e0,	// (0x0008a69b) navi_pane_g_ParamLimits

0x470c,	// (0x0007f9c7) navi_pane_mv_t1_ParamLimits

0x692f,	// (0x00081bea) grid_imed_effect_pane_ParamLimits

0x3134,	// (0x0007e3ef) aid_placing_vt_slider_lsc

0xaa5b,	// (0x00085d16) aid_placing_vt_slider_prt

0xa9b2,	// (0x00085c6d) bg_tb_trans_pane_cp01_ParamLimits

0xcddb,	// (0x00088096) popup_image_details_window_g1_ParamLimits

0xcdee,	// (0x000880a9) popup_image_details_window_g2_ParamLimits

0xce03,	// (0x000880be) popup_image_details_window_g3_ParamLimits

0xce03,	// (0x000880be) popup_image_details_window_g3

0xf726,	// (0x0008a9e1) popup_image_details_window_g_ParamLimits

0xce17,	// (0x000880d2) popup_image_details_window_t1_ParamLimits

0xce29,	// (0x000880e4) popup_image_details_window_t2_ParamLimits

0xce42,	// (0x000880fd) popup_image_details_window_t3_ParamLimits

0xce56,	// (0x00088111) popup_image_details_window_t4_ParamLimits

0xce71,	// (0x0008812c) popup_image_details_window_t5_ParamLimits

0xf72d,	// (0x0008a9e8) popup_image_details_window_t_ParamLimits

0x81d0,	// (0x0008348b) cl_header_name_pane_ParamLimits

0x81d0,	// (0x0008348b) cl_header_name_pane

0x8554,	// (0x0008380f) cl_header_name_pane_t1_ParamLimits

0x8554,	// (0x0008380f) cl_header_name_pane_t1

0x856b,	// (0x00083826) cl_header_name_pane_t2_ParamLimits

0x856b,	// (0x00083826) cl_header_name_pane_t2

0x8595,	// (0x00083850) cl_header_name_pane_t3_ParamLimits

0x8595,	// (0x00083850) cl_header_name_pane_t3

0x0002,

0xfb22,	// (0x0008addd) cl_header_name_pane_t_ParamLimits

0xfb22,	// (0x0008addd) cl_header_name_pane_t

0xb3a1,	// (0x0008665c) navi_pane_mv_g2_ParamLimits

0xd67e,	// (0x00088939) field_vitu2_entry_pane_g1_ParamLimits

0xd68a,	// (0x00088945) field_vitu2_entry_pane_g2_ParamLimits

0xd696,	// (0x00088951) field_vitu2_entry_pane_g3_ParamLimits

0xd696,	// (0x00088951) field_vitu2_entry_pane_g3

0xf929,	// (0x0008abe4) field_vitu2_entry_pane_g_ParamLimits

0x767a,	// (0x00082935) cell_vitu2_itu_pane_g1_ParamLimits

0x768c,	// (0x00082947) cell_vitu2_itu_pane_g2_ParamLimits

0x768c,	// (0x00082947) cell_vitu2_itu_pane_g2

0x0001,

0xf935,	// (0x0008abf0) cell_vitu2_itu_pane_g_ParamLimits

0xf935,	// (0x0008abf0) cell_vitu2_itu_pane_g

0xa9b2,	// (0x00085c6d) bg_vkb2_func_pane_cp05_ParamLimits

0xa9b2,	// (0x00085c6d) bg_vkb2_func_pane_cp05

0xa9b2,	// (0x00085c6d) bg_vkb2_func_pane_cp03

0xa9b2,	// (0x00085c6d) bg_vkb2_func_pane_cp04

0xa9b2,	// (0x00085c6d) bg_vkb2_func_pane_cp10_ParamLimits

0xa9b2,	// (0x00085c6d) bg_vkb2_func_pane_cp10

0x13f6,	// (0x0007c6b1) bg_vkb2_func_pane_cp08

0x817a,	// (0x00083435) bg_vkb2_func_pane_cp06

0x8188,	// (0x00083443) bg_vkb2_func_pane_cp07

0xdbd5,	// (0x00088e90) bg_vkb2_func_pane_cp11_ParamLimits

0xdbd5,	// (0x00088e90) bg_vkb2_func_pane_cp11

0xdbea,	// (0x00088ea5) bg_vkb2_func_pane_cp12_ParamLimits

0xdbea,	// (0x00088ea5) bg_vkb2_func_pane_cp12

0xa03b,	// (0x000852f6) bg_vkb2_func_pane_cp09

0xd6b6,	// (0x00088971) bg_vkb2_func_pane_g1

0xac26,	// (0x00085ee1) bg_vkb2_func_pane_g2

0xd6be,	// (0x00088979) bg_vkb2_func_pane_g3

0xd6c6,	// (0x00088981) bg_vkb2_func_pane_g4

0xd916,	// (0x00088bd1) bg_vkb2_func_pane_g5

0xd6de,	// (0x00088999) bg_vkb2_func_pane_g6

0xd6e6,	// (0x000889a1) bg_vkb2_func_pane_g7

0xd6d6,	// (0x00088991) bg_vkb2_func_pane_g8

0xac06,	// (0x00085ec1) bg_vkb2_func_pane_g9

0x0008,

0xfb29,	// (0x0008ade4) bg_vkb2_func_pane_g

0x84a3,	// (0x0008375e) blid2_tripm_pane_g6_ParamLimits

0x84a3,	// (0x0008375e) blid2_tripm_pane_g6

0xd520,	// (0x000887db) mp4_progress_pane_g1

0x84fd,	// (0x000837b8) blid2_tripm_values_pane_ParamLimits

0x84fd,	// (0x000837b8) blid2_tripm_values_pane

0x85ba,	// (0x00083875) blid2_tripm_values_pane_t1

0x85c8,	// (0x00083883) blid2_tripm_values_pane_t2

0x85d6,	// (0x00083891) blid2_tripm_values_pane_t3

0x85e4,	// (0x0008389f) blid2_tripm_values_pane_t4

0x85f2,	// (0x000838ad) blid2_tripm_values_pane_t5

0x8600,	// (0x000838bb) blid2_tripm_values_pane_t6

0x860e,	// (0x000838c9) blid2_tripm_values_pane_t7

0x861c,	// (0x000838d7) blid2_tripm_values_pane_t8

0x862a,	// (0x000838e5) blid2_tripm_values_pane_t9

0x0008,

0xfb3c,	// (0x0008adf7) blid2_tripm_values_pane_t

0x3174,	// (0x0007e42f) call_video_pane_t1_ParamLimits

0x3195,	// (0x0007e450) call_video_pane_t2_ParamLimits

0xf269,	// (0x0008a524) call_video_pane_t_ParamLimits

0x0fda,	// (0x0007c295) msg_header_pane_g1_ParamLimits

0xb589,	// (0x00086844) msg_header_pane_g2_ParamLimits

0xb589,	// (0x00086844) msg_header_pane_g2

0x0001,

0xf483,	// (0x0008a73e) msg_header_pane_g_ParamLimits

0xf483,	// (0x0008a73e) msg_header_pane_g

0xa792,	// (0x00085a4d) main_clock2_pane_ParamLimits

0x66c4,	// (0x0008197f) grid_clock2_toolbar_pane_ParamLimits

0x66c4,	// (0x0008197f) grid_clock2_toolbar_pane

0x66c4,	// (0x0008197f) listscroll_clock2_pane_ParamLimits

0x66c4,	// (0x0008197f) listscroll_clock2_pane

0x676c,	// (0x00081a27) main_clock2_pane_t3_ParamLimits

0x676c,	// (0x00081a27) main_clock2_pane_t3

0x677e,	// (0x00081a39) main_clock2_pane_t4_ParamLimits

0x677e,	// (0x00081a39) main_clock2_pane_t4

0xdcd5,	// (0x00088f90) cell_clock2_toolbar_pane

0xdcdd,	// (0x00088f98) cell_clock2_toolbar_pane_cp01

0xdcdd,	// (0x00088f98) cell_clock2_toolbar_pane_cp02

0xdce5,	// (0x00088fa0) cell_clock2_toolbar_pane_cp03

0xdced,	// (0x00088fa8) list_clock2_pane

0xb1d4,	// (0x0008648f) scroll_pane_cp10

0xdcf5,	// (0x00088fb0) list_single_clock2_pane_ParamLimits

0xdcf5,	// (0x00088fb0) list_single_clock2_pane

0xa969,	// (0x00085c24) list_highlight_pane_cp08

0xdd10,	// (0x00088fcb) list_single_clock2_pane_t1

0xdd1e,	// (0x00088fd9) list_single_clock2_pane_t2

0x0001,

0xfb4f,	// (0x0008ae0a) list_single_clock2_pane_t

0xa03b,	// (0x000852f6) bg_button_pane_cp10

0xdd2c,	// (0x00088fe7) cell_clock2_toolbar_pane_g1

0x4be6,	// (0x0007fea1) aid_main_viewer_pane_g1_ParamLimits

0x4be6,	// (0x0007fea1) aid_main_viewer_pane_g1

0x4bf2,	// (0x0007fead) aid_main_viewer_pane_g2_ParamLimits

0x4bf2,	// (0x0007fead) aid_main_viewer_pane_g2

0x4bfe,	// (0x0007feb9) aid_main_viewer_pane_g3_ParamLimits

0x4bfe,	// (0x0007feb9) aid_main_viewer_pane_g3

0x4c0f,	// (0x0007feca) aid_main_viewer_pane_g4_ParamLimits

0x4c0f,	// (0x0007feca) aid_main_viewer_pane_g4

0x0003,

0xf494,	// (0x0008a74f) aid_main_viewer_pane_g_ParamLimits

0xf494,	// (0x0008a74f) aid_main_viewer_pane_g

0x5394,	// (0x0008064f) main_calc_pane_ParamLimits

0x53a1,	// (0x0008065c) main_dialer2_pane_ParamLimits

0xa03b,	// (0x000852f6) main_cam6_pane

0xa03b,	// (0x000852f6) main_vid6_pane

0x66d0,	// (0x0008198b) listscroll_gen_pane_cp06_ParamLimits

0x66d0,	// (0x0008198b) listscroll_gen_pane_cp06

0x6790,	// (0x00081a4b) main_clock2_pane_t5_ParamLimits

0x6790,	// (0x00081a4b) main_clock2_pane_t5

0x67d9,	// (0x00081a94) aid_call2_pane_cp10_ParamLimits

0x67eb,	// (0x00081aa6) aid_call_pane_cp10_ParamLimits

0xb243,	// (0x000864fe) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb243,	// (0x000864fe) popup_clock_analogue_window_cp10_g2_ParamLimits

0x67fd,	// (0x00081ab8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x67fd,	// (0x00081ab8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb243,	// (0x000864fe) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e2,	// (0x0008aa9d) popup_clock_analogue_window_cp10_g_ParamLimits

0x680f,	// (0x00081aca) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6fdf,	// (0x0008229a) cell_dialer2_keypad_pane_g2_ParamLimits

0x6fdf,	// (0x0008229a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c8,	// (0x0008ab83) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c8,	// (0x0008ab83) cell_dialer2_keypad_pane_g

0x6ffb,	// (0x000822b6) cell_dialer2_keypad_pane_t1

0x79b1,	// (0x00082c6c) main_cset_text2_pane_ParamLimits

0x79b1,	// (0x00082c6c) main_cset_text2_pane

0xdb3d,	// (0x00088df8) area_vitu2_query_pane_g1_ParamLimits

0x1321,	// (0x0007c5dc) area_vitu2_query_pane_g2_ParamLimits

0xfa7d,	// (0x0008ad38) area_vitu2_query_pane_g_ParamLimits

0x13d2,	// (0x0007c68d) area_vitu2_query_pane_t7_ParamLimits

0x13d2,	// (0x0007c68d) area_vitu2_query_pane_t7

0x817a,	// (0x00083435) bg_button_pane_cp018_ParamLimits

0x8188,	// (0x00083443) bg_button_pane_cp021_ParamLimits

0x13f6,	// (0x0007c6b1) bg_button_pane_cp022_ParamLimits

0x13f6,	// (0x0007c6b1) bg_vkb2_func_pane_cp08_ParamLimits

0x817a,	// (0x00083435) bg_vkb2_func_pane_cp06_ParamLimits

0x8188,	// (0x00083443) bg_vkb2_func_pane_cp07_ParamLimits

0x1407,	// (0x0007c6c2) input_focus_pane_cp09_ParamLimits

0x8638,	// (0x000838f3) cam6_autofocus_pane_ParamLimits

0x8638,	// (0x000838f3) cam6_autofocus_pane

0x865a,	// (0x00083915) cam6_image_uncrop_pane_ParamLimits

0x865a,	// (0x00083915) cam6_image_uncrop_pane

0x8687,	// (0x00083942) cam6_indi_pane_ParamLimits

0x8687,	// (0x00083942) cam6_indi_pane

0x86a1,	// (0x0008395c) cam6_mode_pane_ParamLimits

0x86a1,	// (0x0008395c) cam6_mode_pane

0x86b5,	// (0x00083970) cam6_timer_pane_ParamLimits

0x86b5,	// (0x00083970) cam6_timer_pane

0x86c6,	// (0x00083981) cam6_zoom_pane_ParamLimits

0x86c6,	// (0x00083981) cam6_zoom_pane

0x86de,	// (0x00083999) cam6_mode_pane_g1_ParamLimits

0x86de,	// (0x00083999) cam6_mode_pane_g1

0x86ea,	// (0x000839a5) cam6_mode_pane_g2_ParamLimits

0x86ea,	// (0x000839a5) cam6_mode_pane_g2

0x86f6,	// (0x000839b1) cam6_mode_pane_g3_ParamLimits

0x86f6,	// (0x000839b1) cam6_mode_pane_g3

0x8702,	// (0x000839bd) cam6_mode_pane_g4_ParamLimits

0x8702,	// (0x000839bd) cam6_mode_pane_g4

0x0003,

0xfb54,	// (0x0008ae0f) cam6_mode_pane_g_ParamLimits

0xfb54,	// (0x0008ae0f) cam6_mode_pane_g

0xdd02,	// (0x00088fbd) bg_tb_trans_pane_cp08_ParamLimits

0xdd02,	// (0x00088fbd) bg_tb_trans_pane_cp08

0xdd34,	// (0x00088fef) cam6_battery_pane_ParamLimits

0xdd34,	// (0x00088fef) cam6_battery_pane

0xdd4a,	// (0x00089005) cam6_indi_pane_g1_ParamLimits

0xdd4a,	// (0x00089005) cam6_indi_pane_g1

0xdd5c,	// (0x00089017) cam6_indi_pane_g2_ParamLimits

0xdd5c,	// (0x00089017) cam6_indi_pane_g2

0xdd6e,	// (0x00089029) cam6_indi_pane_g3_ParamLimits

0xdd6e,	// (0x00089029) cam6_indi_pane_g3

0x0002,

0x0956,	// (0x0007bc11) cam6_indi_pane_g_ParamLimits

0x0956,	// (0x0007bc11) cam6_indi_pane_g

0xdd80,	// (0x0008903b) cam6_indi_pane_t1_ParamLimits

0xdd80,	// (0x0008903b) cam6_indi_pane_t1

0x74ae,	// (0x00082769) cam6_autofocus_pane_g1

0x74b6,	// (0x00082771) cam6_autofocus_pane_g2

0x74be,	// (0x00082779) cam6_autofocus_pane_g3

0x74c6,	// (0x00082781) cam6_autofocus_pane_g4

0x0003,

0xfb5d,	// (0x0008ae18) cam6_autofocus_pane_g

0xdda6,	// (0x00089061) cam6_timer_pane_g1

0xddae,	// (0x00089069) cam6_timer_pane_t1

0xddbc,	// (0x00089077) cam6_zoom_cont_pane

0xddc4,	// (0x0008907f) cam6_zoom_pane_g1

0xddcc,	// (0x00089087) cam6_zoom_pane_g2

0x870e,	// (0x000839c9) cam6_zoom_pane_g3

0x0002,

0xfb66,	// (0x0008ae21) cam6_zoom_pane_g

0xcc6d,	// (0x00087f28) cam6_battery_pane_g1

0xcc6d,	// (0x00087f28) cam6_battery_pane_g2

0x0001,

0xf6ea,	// (0x0008a9a5) cam6_battery_pane_g

0xddd4,	// (0x0008908f) cam6_zoom_cont_pane_g1

0xdddd,	// (0x00089098) cam6_zoom_cont_pane_g2

0xdde6,	// (0x000890a1) cam6_zoom_cont_pane_g3

0x0002,

0x096d,	// (0x0007bc28) cam6_zoom_cont_pane_g

0x872b,	// (0x000839e6) cam6_mode_pane_cp_ParamLimits

0x872b,	// (0x000839e6) cam6_mode_pane_cp

0x86c6,	// (0x00083981) cam6_zoom_pane_cp_ParamLimits

0x86c6,	// (0x00083981) cam6_zoom_pane_cp

0x873f,	// (0x000839fa) vid6_image_uncrop_cif_pane_ParamLimits

0x873f,	// (0x000839fa) vid6_image_uncrop_cif_pane

0x876b,	// (0x00083a26) vid6_image_uncrop_nhd_pane_ParamLimits

0x876b,	// (0x00083a26) vid6_image_uncrop_nhd_pane

0x865a,	// (0x00083915) vid6_image_uncrop_vga_pane_ParamLimits

0x865a,	// (0x00083915) vid6_image_uncrop_vga_pane

0x8788,	// (0x00083a43) vid6_image_uncrop_wvga_pane_ParamLimits

0x8788,	// (0x00083a43) vid6_image_uncrop_wvga_pane

0x87a5,	// (0x00083a60) vid6_indi_pane_ParamLimits

0x87a5,	// (0x00083a60) vid6_indi_pane

0xdd02,	// (0x00088fbd) bg_tb_trans_pane_cp09_ParamLimits

0xdd02,	// (0x00088fbd) bg_tb_trans_pane_cp09

0xddfe,	// (0x000890b9) cam6_battery_pane_cp_ParamLimits

0xddfe,	// (0x000890b9) cam6_battery_pane_cp

0xde0a,	// (0x000890c5) vid6_indi_pane_g1_ParamLimits

0xde0a,	// (0x000890c5) vid6_indi_pane_g1

0xde1c,	// (0x000890d7) vid6_indi_pane_g2_ParamLimits

0xde1c,	// (0x000890d7) vid6_indi_pane_g2

0xde2e,	// (0x000890e9) vid6_indi_pane_g3_ParamLimits

0xde2e,	// (0x000890e9) vid6_indi_pane_g3

0xde43,	// (0x000890fe) vid6_indi_pane_g4_ParamLimits

0xde43,	// (0x000890fe) vid6_indi_pane_g4

0xde58,	// (0x00089113) vid6_indi_pane_g5_ParamLimits

0xde58,	// (0x00089113) vid6_indi_pane_g5

0x0004,

0x0974,	// (0x0007bc2f) vid6_indi_pane_g_ParamLimits

0x0974,	// (0x0007bc2f) vid6_indi_pane_g

0xde72,	// (0x0008912d) vid6_indi_pane_t1_ParamLimits

0xde72,	// (0x0008912d) vid6_indi_pane_t1

0xde88,	// (0x00089143) vid6_indi_pane_t2_ParamLimits

0xde88,	// (0x00089143) vid6_indi_pane_t2

0xdeb0,	// (0x0008916b) vid6_indi_pane_t3_ParamLimits

0xdeb0,	// (0x0008916b) vid6_indi_pane_t3

0xded8,	// (0x00089193) vid6_indi_pane_t4_ParamLimits

0xded8,	// (0x00089193) vid6_indi_pane_t4

0x0003,

0x097f,	// (0x0007bc3a) vid6_indi_pane_t_ParamLimits

0x097f,	// (0x0007bc3a) vid6_indi_pane_t

0xdefc,	// (0x000891b7) wait_bar_pane_cp08

0x87c8,	// (0x00083a83) main_cset_text2_pane_t1_ParamLimits

0x87c8,	// (0x00083a83) main_cset_text2_pane_t1

0x8716,	// (0x000839d1) listscroll_gen_pane_cp06_t1_ParamLimits

0x8716,	// (0x000839d1) listscroll_gen_pane_cp06_t1

0xa03b,	// (0x000852f6) main_cam6_set_pane

0xcebb,	// (0x00088176) bg_tb_trans_pane_cp06_ParamLimits

0x7368,	// (0x00082623) cam4_indicators_pane_g1_ParamLimits

0x7379,	// (0x00082634) cam4_indicators_pane_g2_ParamLimits

0xf905,	// (0x0008abc0) cam4_indicators_pane_g_ParamLimits

0x7391,	// (0x0008264c) cam4_indicators_pane_t1_ParamLimits

0xa9b2,	// (0x00085c6d) bg_tb_trans_pane_cp07_ParamLimits

0x7442,	// (0x000826fd) vid4_indicators_pane_g1_ParamLimits

0x7456,	// (0x00082711) vid4_indicators_pane_g2_ParamLimits

0x746a,	// (0x00082725) vid4_indicators_pane_g3_ParamLimits

0x747b,	// (0x00082736) vid4_indicators_pane_g4_ParamLimits

0xf917,	// (0x0008abd2) vid4_indicators_pane_g_ParamLimits

0x7497,	// (0x00082752) vid4_indicators_pane_t1_ParamLimits

0x82b8,	// (0x00083573) vid4_progress_pane_g1_ParamLimits

0x82c8,	// (0x00083583) vid4_progress_pane_g2_ParamLimits

0x82d8,	// (0x00083593) vid4_progress_pane_g3_ParamLimits

0x82ea,	// (0x000835a5) vid4_progress_pane_g4_ParamLimits

0xfac8,	// (0x0008ad83) vid4_progress_pane_g_ParamLimits

0x8302,	// (0x000835bd) vid4_progress_pane_t1_ParamLimits

0x8318,	// (0x000835d3) vid4_progress_pane_t2_ParamLimits

0x832d,	// (0x000835e8) vid4_progress_pane_t3_ParamLimits

0xfad3,	// (0x0008ad8e) vid4_progress_pane_t_ParamLimits

0x8343,	// (0x000835fe) wait_bar_pane_cp07_ParamLimits

0x87ff,	// (0x00083aba) main_cam6_set_pane_g2_ParamLimits

0x87ff,	// (0x00083aba) main_cam6_set_pane_g2

0x880b,	// (0x00083ac6) main_cset6_listscroll_pane_ParamLimits

0x880b,	// (0x00083ac6) main_cset6_listscroll_pane

0x8836,	// (0x00083af1) main_cset6_slider_pane_ParamLimits

0x8836,	// (0x00083af1) main_cset6_slider_pane

0x8842,	// (0x00083afd) main_cset6_text2_pane_ParamLimits

0x8842,	// (0x00083afd) main_cset6_text2_pane

0xdf0b,	// (0x000891c6) main_cset6_text_pane

0xdf13,	// (0x000891ce) main_cset_list_pane_copy1_ParamLimits

0xdf13,	// (0x000891ce) main_cset_list_pane_copy1

0xdf23,	// (0x000891de) scroll_pane_cp028_copy1

0x8855,	// (0x00083b10) cset_list_set_pane_copy1

0x886b,	// (0x00083b26) aid_position_infowindow_above_copy1

0x8873,	// (0x00083b2e) aid_position_infowindow_below_copy1

0x887b,	// (0x00083b36) cset_list_set_pane_g1_copy1

0x144f,	// (0x0007c70a) cset_list_set_pane_g3_copy1_ParamLimits

0x144f,	// (0x0007c70a) cset_list_set_pane_g3_copy1

0x145e,	// (0x0007c719) cset_list_set_pane_t1_copy1_ParamLimits

0x145e,	// (0x0007c719) cset_list_set_pane_t1_copy1

0xa9b2,	// (0x00085c6d) list_highlight_pane_cp021_copy1_ParamLimits

0xa9b2,	// (0x00085c6d) list_highlight_pane_cp021_copy1

0xdf2c,	// (0x000891e7) cset6_slider_pane_ParamLimits

0xdf2c,	// (0x000891e7) cset6_slider_pane

0xdf58,	// (0x00089213) main_cset6_slider_pane_g1_ParamLimits

0xdf58,	// (0x00089213) main_cset6_slider_pane_g1

0x8883,	// (0x00083b3e) main_cset6_slider_pane_g2_ParamLimits

0x8883,	// (0x00083b3e) main_cset6_slider_pane_g2

0xdf80,	// (0x0008923b) main_cset6_slider_pane_g3_ParamLimits

0xdf80,	// (0x0008923b) main_cset6_slider_pane_g3

0x88ab,	// (0x00083b66) main_cset6_slider_pane_g4_ParamLimits

0x88ab,	// (0x00083b66) main_cset6_slider_pane_g4

0x88b7,	// (0x00083b72) main_cset6_slider_pane_g5_ParamLimits

0x88b7,	// (0x00083b72) main_cset6_slider_pane_g5

0xd7ed,	// (0x00088aa8) main_cset6_slider_pane_g7_ParamLimits

0xd7ed,	// (0x00088aa8) main_cset6_slider_pane_g7

0xd7f9,	// (0x00088ab4) main_cset6_slider_pane_g8_ParamLimits

0xd7f9,	// (0x00088ab4) main_cset6_slider_pane_g8

0x88c5,	// (0x00083b80) main_cset6_slider_pane_g9_ParamLimits

0x88c5,	// (0x00083b80) main_cset6_slider_pane_g9

0x88d1,	// (0x00083b8c) main_cset6_slider_pane_g10_ParamLimits

0x88d1,	// (0x00083b8c) main_cset6_slider_pane_g10

0x88dd,	// (0x00083b98) main_cset6_slider_pane_g11_ParamLimits

0x88dd,	// (0x00083b98) main_cset6_slider_pane_g11

0x88e9,	// (0x00083ba4) main_cset6_slider_pane_g12_ParamLimits

0x88e9,	// (0x00083ba4) main_cset6_slider_pane_g12

0xd8bb,	// (0x00088b76) main_cset6_slider_pane_g13_ParamLimits

0xd8bb,	// (0x00088b76) main_cset6_slider_pane_g13

0xd8c7,	// (0x00088b82) main_cset6_slider_pane_g14_ParamLimits

0xd8c7,	// (0x00088b82) main_cset6_slider_pane_g14

0x88f5,	// (0x00083bb0) main_cset6_slider_pane_g15_ParamLimits

0x88f5,	// (0x00083bb0) main_cset6_slider_pane_g15

0x890d,	// (0x00083bc8) main_cset6_slider_pane_g16_ParamLimits

0x890d,	// (0x00083bc8) main_cset6_slider_pane_g16

0x891b,	// (0x00083bd6) main_cset6_slider_pane_g17_ParamLimits

0x891b,	// (0x00083bd6) main_cset6_slider_pane_g17

0x0011,

0xfb6d,	// (0x0008ae28) main_cset6_slider_pane_g_ParamLimits

0xfb6d,	// (0x0008ae28) main_cset6_slider_pane_g

0xdf98,	// (0x00089253) main_cset6_slider_pane_t1_ParamLimits

0xdf98,	// (0x00089253) main_cset6_slider_pane_t1

0x8935,	// (0x00083bf0) main_cset6_slider_pane_t2_ParamLimits

0x8935,	// (0x00083bf0) main_cset6_slider_pane_t2

0x8960,	// (0x00083c1b) main_cset6_slider_pane_t3_ParamLimits

0x8960,	// (0x00083c1b) main_cset6_slider_pane_t3

0x898b,	// (0x00083c46) main_cset6_slider_pane_t4_ParamLimits

0x898b,	// (0x00083c46) main_cset6_slider_pane_t4

0x89b6,	// (0x00083c71) main_cset6_slider_pane_t5_ParamLimits

0x89b6,	// (0x00083c71) main_cset6_slider_pane_t5

0xdfeb,	// (0x000892a6) main_cset6_slider_pane_t7_ParamLimits

0xdfeb,	// (0x000892a6) main_cset6_slider_pane_t7

0x89e3,	// (0x00083c9e) main_cset6_slider_pane_t8_ParamLimits

0x89e3,	// (0x00083c9e) main_cset6_slider_pane_t8

0x8a07,	// (0x00083cc2) main_cset6_slider_pane_t9_ParamLimits

0x8a07,	// (0x00083cc2) main_cset6_slider_pane_t9

0x8a2b,	// (0x00083ce6) main_cset6_slider_pane_t10_ParamLimits

0x8a2b,	// (0x00083ce6) main_cset6_slider_pane_t10

0x8a4f,	// (0x00083d0a) main_cset6_slider_pane_t11_ParamLimits

0x8a4f,	// (0x00083d0a) main_cset6_slider_pane_t11

0xe021,	// (0x000892dc) main_cset6_slider_pane_t14_ParamLimits

0xe021,	// (0x000892dc) main_cset6_slider_pane_t14

0xe05a,	// (0x00089315) main_cset6_slider_pane_t15_ParamLimits

0xe05a,	// (0x00089315) main_cset6_slider_pane_t15

0x000b,

0xfb92,	// (0x0008ae4d) main_cset6_slider_pane_t_ParamLimits

0xfb92,	// (0x0008ae4d) main_cset6_slider_pane_t

0xd43d,	// (0x000886f8) cset_slider_pane_g1_copy1

0xdfd9,	// (0x00089294) cset_slider_pane_g2_copy1

0xdfe2,	// (0x0008929d) cset_slider_pane_g3_copy1

0xa03b,	// (0x000852f6) bg_popup_sub_pane_cp011_copy1

0xe093,	// (0x0008934e) main_cset_text_pane_g1_copy1

0xd965,	// (0x00088c20) main_cset_text_pane_t1_copy1

0xd973,	// (0x00088c2e) main_cset_text_pane_t2_copy1

0xd981,	// (0x00088c3c) main_cset_text_pane_t3_copy1

0xd98f,	// (0x00088c4a) main_cset_text_pane_t4_copy1

0xd99d,	// (0x00088c58) main_cset_text_pane_t5_copy1

0xe09b,	// (0x00089356) main_cset_text_pane_t6_copy1

0xe0a9,	// (0x00089364) main_cset_text_pane_t7_copy1

0x8a75,	// (0x00083d30) main_cset_text2_pane_t1_copy1

0xa9b2,	// (0x00085c6d) main_ncimui_pane

0x53f2,	// (0x000806ad) popup_query_ncimui_window_ParamLimits

0x53f2,	// (0x000806ad) popup_query_ncimui_window

0x5f86,	// (0x00081241) field_cale_ev2_pane_g4_ParamLimits

0x5f86,	// (0x00081241) field_cale_ev2_pane_g4

0x6cff,	// (0x00081fba) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6cff,	// (0x00081fba) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0008ab5e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0008ab5e) cell_video_dialer_keypad_pane_g

0x6d17,	// (0x00081fd2) cell_video_dialer_keypad_pane_t1

0xa03b,	// (0x000852f6) bg_popup_window_pane_cp012

0xb0bf,	// (0x0008637a) heading_pane_cp06

0xe0d5,	// (0x00089390) ncim_query_content_pane

0xa03b,	// (0x000852f6) bg_popup_heading_pane_cp01

0xe0dd,	// (0x00089398) ncim_heading_pane_t1

0xe0eb,	// (0x000893a6) ncim_indicator_popup_pane

0xe0fd,	// (0x000893b8) ncim_query_button_pane

0xe111,	// (0x000893cc) ncim_query_content_pane_t1

0xe123,	// (0x000893de) ncim_query_content_pane_t2

0x0005,

0xfbd6,	// (0x0008ae91) ncim_query_content_pane_t

0xe15d,	// (0x00089418) ncim_query_list_pane

0xe16f,	// (0x0008942a) ncim_query_popup_pane

0xe0eb,	// (0x000893a6) ncim_indicator_popup_pane_ParamLimits

0x8bc9,	// (0x00083e84) ncim_query_content_pane_g1_ParamLimits

0x8bc9,	// (0x00083e84) ncim_query_content_pane_g1

0xe111,	// (0x000893cc) ncim_query_content_pane_t1_ParamLimits

0xe123,	// (0x000893de) ncim_query_content_pane_t2_ParamLimits

0x8bd5,	// (0x00083e90) ncim_query_content_pane_t3_ParamLimits

0x8bd5,	// (0x00083e90) ncim_query_content_pane_t3

0x8bf2,	// (0x00083ead) ncim_query_content_pane_t4_ParamLimits

0x8bf2,	// (0x00083ead) ncim_query_content_pane_t4

0x8c0f,	// (0x00083eca) ncim_query_content_pane_t5_ParamLimits

0x8c0f,	// (0x00083eca) ncim_query_content_pane_t5

0xe135,	// (0x000893f0) ncim_query_content_pane_t6_ParamLimits

0xe135,	// (0x000893f0) ncim_query_content_pane_t6

0xfbd6,	// (0x0008ae91) ncim_query_content_pane_t_ParamLimits

0xe15d,	// (0x00089418) ncim_query_list_pane_ParamLimits

0xe16f,	// (0x0008942a) ncim_query_popup_pane_ParamLimits

0xe183,	// (0x0008943e) wait_bar_pane_cp04

0xa03b,	// (0x000852f6) input_focus_pane_cp011

0xe18b,	// (0x00089446) ncim_query_popup_pane_t1

0xe199,	// (0x00089454) ncim_list_query_list_pane_ParamLimits

0xe199,	// (0x00089454) ncim_list_query_list_pane

0xa03b,	// (0x000852f6) bg_button_pane_cp027

0xe1a6,	// (0x00089461) ncim_query_button_pane_g1

0xa03b,	// (0x000852f6) list_highlight_pane_cp012

0xe1b0,	// (0x0008946b) ncim_list_query_list_pane_g1

0xe1b8,	// (0x00089473) ncim_list_query_list_pane_t1

0x7385,	// (0x00082640) cam4_indicators_pane_g3_ParamLimits

0x7385,	// (0x00082640) cam4_indicators_pane_g3

0x7487,	// (0x00082742) vid4_indicators_pane_g5_ParamLimits

0x7487,	// (0x00082742) vid4_indicators_pane_g5

0x82f6,	// (0x000835b1) vid4_progress_pane_g5_ParamLimits

0x82f6,	// (0x000835b1) vid4_progress_pane_g5

0x8ab5,	// (0x00083d70) main_ncimui_pane_g1

0x8b1d,	// (0x00083dd8) ncimui_group_query_pane_ParamLimits

0x8b1d,	// (0x00083dd8) ncimui_group_query_pane

0x8b65,	// (0x00083e20) ncimui_list_pane_ParamLimits

0x8b65,	// (0x00083e20) ncimui_list_pane

0x8b8c,	// (0x00083e47) ncimui_text_pane_ParamLimits

0x8b8c,	// (0x00083e47) ncimui_text_pane

0x8c2c,	// (0x00083ee7) ncimui_text_pane_t1_ParamLimits

0x8c2c,	// (0x00083ee7) ncimui_text_pane_t1

0xe1c6,	// (0x00089481) ncimui_list_single_graphic_pane_ParamLimits

0xe1c6,	// (0x00089481) ncimui_list_single_graphic_pane

0x8c4b,	// (0x00083f06) ncimui_query_pane_ParamLimits

0x8c4b,	// (0x00083f06) ncimui_query_pane

0xa03b,	// (0x000852f6) list_highlight_pane_cp013

0xe1d6,	// (0x00089491) ncim_list_query_list_pane_t1_copy1

0xe1e4,	// (0x0008949f) ncim_list_single_graphic_pane_g1

0xe1ec,	// (0x000894a7) ncim_query_button_pane_cp01

0xe1f8,	// (0x000894b3) ncim_query_entry_pane_ParamLimits

0xe1f8,	// (0x000894b3) ncim_query_entry_pane

0xe20b,	// (0x000894c6) ncimui_query_pane_g1

0xe217,	// (0x000894d2) ncimui_query_pane_t1_ParamLimits

0xe217,	// (0x000894d2) ncimui_query_pane_t1

0xa9b2,	// (0x00085c6d) input_focus_pane_cp012

0xe230,	// (0x000894eb) ncim_query_entry_pane_t1

0xa792,	// (0x00085a4d) main_im_pane_ParamLimits

0xa9b2,	// (0x00085c6d) main_mobtv_pane_ParamLimits

0xa9b2,	// (0x00085c6d) main_mobtv_pane

0x8929,	// (0x00083be4) main_cset6_slider_pane_g18_ParamLimits

0x8929,	// (0x00083be4) main_cset6_slider_pane_g18

0xdf8c,	// (0x00089247) main_cset6_slider_pane_g19_ParamLimits

0xdf8c,	// (0x00089247) main_cset6_slider_pane_g19

0xd696,	// (0x00088951) bg_main_mobtv_pane_ParamLimits

0xd696,	// (0x00088951) bg_main_mobtv_pane

0x8c5e,	// (0x00083f19) main_mobtv_info_pane

0x8c69,	// (0x00083f24) main_mobtv_loading_pane_ParamLimits

0x8c69,	// (0x00083f24) main_mobtv_loading_pane

0xe242,	// (0x000894fd) main_mobtv_pg_channel_list_pane

0xe24c,	// (0x00089507) main_mobtv_pg_hdr_pane

0x8c76,	// (0x00083f31) main_mobtv_programe_curr_pane_ParamLimits

0x8c76,	// (0x00083f31) main_mobtv_programe_curr_pane

0x8c83,	// (0x00083f3e) main_mobtv_programe_next_pane_ParamLimits

0x8c83,	// (0x00083f3e) main_mobtv_programe_next_pane

0xe255,	// (0x00089510) popup_mobtv_noti_window

0xcc6d,	// (0x00087f28) main_tv_pg_hdr_pane_g1

0xe25d,	// (0x00089518) main_tv_pg_hdr_pane_g2

0xe265,	// (0x00089520) main_tv_pg_hdr_pane_g3

0xe26d,	// (0x00089528) main_tv_pg_hdr_pane_g4

0xe275,	// (0x00089530) main_tv_pg_hdr_pane_g5

0xe27f,	// (0x0008953a) main_tv_pg_hdr_pane_g6

0xe289,	// (0x00089544) main_tv_pg_hdr_pane_g7

0xe293,	// (0x0008954e) main_tv_pg_hdr_pane_g8

0xe29d,	// (0x00089558) main_tv_pg_hdr_pane_g9

0xe2a7,	// (0x00089562) main_tv_pg_hdr_pane_g10

0xe2b1,	// (0x0008956c) main_tv_pg_hdr_pane_g11

0x000a,

0xfbe3,	// (0x0008ae9e) main_tv_pg_hdr_pane_g

0xe2bb,	// (0x00089576) main_tv_pg_hdr_pane_t1

0xe2c9,	// (0x00089584) main_tv_pg_hdr_pane_t2

0xe2d7,	// (0x00089592) main_tv_pg_hdr_pane_t3

0xe2e7,	// (0x000895a2) main_tv_pg_hdr_pane_t4

0xe2f7,	// (0x000895b2) main_tv_pg_hdr_pane_t5

0x0004,

0x0a15,	// (0x0007bcd0) main_tv_pg_hdr_pane_t

0xe307,	// (0x000895c2) single_mobtv_pg_channel_pane_ParamLimits

0xe307,	// (0x000895c2) single_mobtv_pg_channel_pane

0xe319,	// (0x000895d4) single_mobtv_pg_channel_table_pane

0xad29,	// (0x00085fe4) single_mobtv_pg_channel_thumb_pane

0xe322,	// (0x000895dd) single_tv_pg_channel_pane_g1

0xe32b,	// (0x000895e6) single_tv_pg_channel_pane_g2

0x0001,

0x0a20,	// (0x0007bcdb) single_tv_pg_channel_pane_g

0xcebb,	// (0x00088176) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcebb,	// (0x00088176) bg_single_mobtv_pg_channel_thumb_pane

0xe334,	// (0x000895ef) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe334,	// (0x000895ef) single_mobtv_pg_channel_thumb_pane_g1

0xe342,	// (0x000895fd) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe342,	// (0x000895fd) single_mobtv_pg_channel_thumb_pane_g2

0xe34e,	// (0x00089609) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe34e,	// (0x00089609) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0a25,	// (0x0007bce0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0a25,	// (0x0007bce0) single_mobtv_pg_channel_thumb_pane_g

0xe35a,	// (0x00089615) single_mobtv_pg_channel_thumb_pane_t1

0xe368,	// (0x00089623) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0a2c,	// (0x0007bce7) single_mobtv_pg_channel_thumb_pane_t

0xcc6d,	// (0x00087f28) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6d,	// (0x00087f28) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ea,	// (0x0008a9a5) bg_single_mobtv_pg_channel_table_pane_g

0xe376,	// (0x00089631) single_mobtv_pg_channel_table_pane_t1

0xe384,	// (0x0008963f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0a31,	// (0x0007bcec) single_mobtv_pg_channel_table_pane_t

0x8c98,	// (0x00083f53) main_mobtv_info_pane_g1_ParamLimits

0x8c98,	// (0x00083f53) main_mobtv_info_pane_g1

0x8cb4,	// (0x00083f6f) main_mobtv_info_pane_t1_ParamLimits

0x8cb4,	// (0x00083f6f) main_mobtv_info_pane_t1

0x8d2c,	// (0x00083fe7) main_mobtv_info_pane_t2_ParamLimits

0x8d2c,	// (0x00083fe7) main_mobtv_info_pane_t2

0x0002,

0xfbff,	// (0x0008aeba) main_mobtv_info_pane_t_ParamLimits

0xfbff,	// (0x0008aeba) main_mobtv_info_pane_t

0x8dbb,	// (0x00084076) wait_bar_pane_cp05

0x8dcd,	// (0x00084088) main_mobtv_loading_pane_g1_ParamLimits

0x8dcd,	// (0x00084088) main_mobtv_loading_pane_g1

0x8ddb,	// (0x00084096) main_mobtv_loading_pane_g2_ParamLimits

0x8ddb,	// (0x00084096) main_mobtv_loading_pane_g2

0x8de7,	// (0x000840a2) main_mobtv_loading_pane_g3_ParamLimits

0x8de7,	// (0x000840a2) main_mobtv_loading_pane_g3

0x0002,

0xfc06,	// (0x0008aec1) main_mobtv_loading_pane_g_ParamLimits

0xfc06,	// (0x0008aec1) main_mobtv_loading_pane_g

0xe392,	// (0x0008964d) main_mobtv_loading_pane_t1_ParamLimits

0xe392,	// (0x0008964d) main_mobtv_loading_pane_t1

0xe3aa,	// (0x00089665) main_mobtv_loading_pane_t2_ParamLimits

0xe3aa,	// (0x00089665) main_mobtv_loading_pane_t2

0x0001,

0x0a49,	// (0x0007bd04) main_mobtv_loading_pane_t_ParamLimits

0x0a49,	// (0x0007bd04) main_mobtv_loading_pane_t

0x8df5,	// (0x000840b0) wait_bar_pane_cp06_ParamLimits

0x8df5,	// (0x000840b0) wait_bar_pane_cp06

0xe3ce,	// (0x00089689) main_mobtv_programe_curr_pane_t1

0xe3dc,	// (0x00089697) main_mobtv_programe_curr_pane_t2

0x0001,

0x0a4e,	// (0x0007bd09) main_mobtv_programe_curr_pane_t

0xe3ea,	// (0x000896a5) main_mobtv_programe_next_pane_t1

0xe3f8,	// (0x000896b3) main_mobtv_programe_next_pane_t2

0xe406,	// (0x000896c1) main_mobtv_programe_next_pane_t3

0x0002,

0x0a53,	// (0x0007bd0e) main_mobtv_programe_next_pane_t

0xa03b,	// (0x000852f6) bg_popup_mobtv_noti_window_pane

0xe414,	// (0x000896cf) popup_mobtv_noti_window_g1

0xe41c,	// (0x000896d7) popup_mobtv_noti_window_t1

0xe42a,	// (0x000896e5) popup_mobtv_noti_window_t2

0x0001,

0x0a5a,	// (0x0007bd15) popup_mobtv_noti_window_t

0xcc6d,	// (0x00087f28) bg_popup_mobtv_noti_window_pane_g1

0xa03b,	// (0x000852f6) sc_clock_pane

0xa03b,	// (0x000852f6) main_fs_bigclock_pane

0x84eb,	// (0x000837a6) blid2_tripm_pane_t4_ParamLimits

0x84eb,	// (0x000837a6) blid2_tripm_pane_t4

0x8e01,	// (0x000840bc) sc_clock_pane_g1_ParamLimits

0x8e01,	// (0x000840bc) sc_clock_pane_g1

0x8e0f,	// (0x000840ca) sc_clock_pane_t1_ParamLimits

0x8e0f,	// (0x000840ca) sc_clock_pane_t1

0x8e22,	// (0x000840dd) sc_clock_pane_t2_ParamLimits

0x8e22,	// (0x000840dd) sc_clock_pane_t2

0x8e34,	// (0x000840ef) sc_clock_pane_t3_ParamLimits

0x8e34,	// (0x000840ef) sc_clock_pane_t3

0x0004,

0xfc0d,	// (0x0008aec8) sc_clock_pane_t_ParamLimits

0xfc0d,	// (0x0008aec8) sc_clock_pane_t

0x9722,	// (0x000849dd) main_fs_bigclock_indicator_pane_ParamLimits

0x9722,	// (0x000849dd) main_fs_bigclock_indicator_pane

0x8ebd,	// (0x00084178) main_fs_bigclock_pane_g1_ParamLimits

0x8ebd,	// (0x00084178) main_fs_bigclock_pane_g1

0x972e,	// (0x000849e9) main_fs_bigclock_pane_t1_ParamLimits

0x972e,	// (0x000849e9) main_fs_bigclock_pane_t1

0x9740,	// (0x000849fb) main_fs_bigclock_pane_t2_ParamLimits

0x9740,	// (0x000849fb) main_fs_bigclock_pane_t2

0x9754,	// (0x00084a0f) main_fs_bigclock_pane_t3_ParamLimits

0x9754,	// (0x00084a0f) main_fs_bigclock_pane_t3

0x0002,

0xfdb0,	// (0x0008b06b) main_fs_bigclock_pane_t_ParamLimits

0xfdb0,	// (0x0008b06b) main_fs_bigclock_pane_t

0xec94,	// (0x00089f4f) main_fs_bigclock_indicator_pane_g1

0xe105,	// (0x000893c0) ncim_query_content_pane_g2_ParamLimits

0xe105,	// (0x000893c0) ncim_query_content_pane_g2

0x0001,

0xfbd1,	// (0x0008ae8c) ncim_query_content_pane_g_ParamLimits

0xfbd1,	// (0x0008ae8c) ncim_query_content_pane_g

0x8e48,	// (0x00084103) sc_clock_pane_t4_ParamLimits

0x8e48,	// (0x00084103) sc_clock_pane_t4

0xa9b2,	// (0x00085c6d) main_radioblah_pane

0xd609,	// (0x000888c4) cell_call4_button_pane_t1_copy1_ParamLimits

0xd609,	// (0x000888c4) cell_call4_button_pane_t1_copy1

0x8acf,	// (0x00083d8a) main_ncimui_pane_t1_ParamLimits

0x8acf,	// (0x00083d8a) main_ncimui_pane_t1

0x8ae9,	// (0x00083da4) main_ncimui_pane_t2_ParamLimits

0x8ae9,	// (0x00083da4) main_ncimui_pane_t2

0x0002,

0xfbca,	// (0x0008ae85) main_ncimui_pane_t_ParamLimits

0xfbca,	// (0x0008ae85) main_ncimui_pane_t

0xe56f,	// (0x0008982a) main_radioblah_anim_pane_ParamLimits

0xe56f,	// (0x0008982a) main_radioblah_anim_pane

0xe580,	// (0x0008983b) main_radioblah_info_pane_ParamLimits

0xe580,	// (0x0008983b) main_radioblah_info_pane

0xe594,	// (0x0008984f) main_radioblah_pane_t1_ParamLimits

0xe594,	// (0x0008984f) main_radioblah_pane_t1

0xe5b0,	// (0x0008986b) main_radioblah_pane_t2_ParamLimits

0xe5b0,	// (0x0008986b) main_radioblah_pane_t2

0x0003,

0x0a80,	// (0x0007bd3b) main_radioblah_pane_t_ParamLimits

0x0a80,	// (0x0007bd3b) main_radioblah_pane_t

0x8f0f,	// (0x000841ca) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8f0f,	// (0x000841ca) main_radioblah_rocker_ctrl_pane

0xe5f8,	// (0x000898b3) main_radioblah_info_pane_t1_ParamLimits

0xe5f8,	// (0x000898b3) main_radioblah_info_pane_t1

0x8f54,	// (0x0008420f) main_radioblah_info_pane_t2_ParamLimits

0x8f54,	// (0x0008420f) main_radioblah_info_pane_t2

0x0003,

0xfc18,	// (0x0008aed3) main_radioblah_info_pane_t_ParamLimits

0xfc18,	// (0x0008aed3) main_radioblah_info_pane_t

0xcc6d,	// (0x00087f28) main_radioblah_rocker_ctrl_pane_g1

0x9004,	// (0x000842bf) main_radioblah_rocker_ctrl_pane_g2

0x900c,	// (0x000842c7) main_radioblah_rocker_ctrl_pane_g3

0x9014,	// (0x000842cf) main_radioblah_rocker_ctrl_pane_g4

0x901c,	// (0x000842d7) main_radioblah_rocker_ctrl_pane_g5

0x9024,	// (0x000842df) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc21,	// (0x0008aedc) main_radioblah_rocker_ctrl_pane_g

0x8a75,	// (0x00083d30) main_cset_text2_pane_t1_copy1_ParamLimits

0x72b6,	// (0x00082571) cam4_image_uncrop_qvga_pane

0x73f7,	// (0x000826b2) vid4_image_uncrop_qcif_pane

0x8679,	// (0x00083934) cam6_image_uncrop_qvga_pane_ParamLimits

0x8679,	// (0x00083934) cam6_image_uncrop_qvga_pane

0xddee,	// (0x000890a9) vid6_image_uncrop_qcif_pane_ParamLimits

0xddee,	// (0x000890a9) vid6_image_uncrop_qcif_pane

0xa03b,	// (0x000852f6) bg_popup_preview_window_pane_cp03

0xe0b7,	// (0x00089372) list_cset_text2_pane

0xe0bf,	// (0x0008937a) main_cset6_text2_pane_g1

0xe0c7,	// (0x00089382) main_cset6_text2_pane_t1

0x902c,	// (0x000842e7) list_cset_text2_pane_t1_ParamLimits

0x902c,	// (0x000842e7) list_cset_text2_pane_t1

0xa9b2,	// (0x00085c6d) main_radioblah_pane_ParamLimits

0x8da7,	// (0x00084062) main_mobtv_info_pane_t3_ParamLimits

0x8da7,	// (0x00084062) main_mobtv_info_pane_t3

0x8efd,	// (0x000841b8) main_radioblah_pane_g1

0x8f28,	// (0x000841e3) main_radioblah_info_pane_g1

0x8fa9,	// (0x00084264) main_radioblah_info_pane_t3_ParamLimits

0x8fa9,	// (0x00084264) main_radioblah_info_pane_t3

0x420f,	// (0x0007f4ca) highlight_cell_cale_month_pane_ParamLimits

0x420f,	// (0x0007f4ca) highlight_cell_cale_month_pane

0xa03b,	// (0x000852f6) main_phob_fisheye_pane

0xcf97,	// (0x00088252) scroll_pane_cp0031_ParamLimits

0xcf97,	// (0x00088252) scroll_pane_cp0031

0xdefc,	// (0x000891b7) wait_bar_pane_cp08_ParamLimits

0x8855,	// (0x00083b10) cset_list_set_pane_copy1_ParamLimits

0xe632,	// (0x000898ed) highlight_cell_cale_month_pane_g1

0x904d,	// (0x00084308) highlight_cell_cale_month_pane_t1

0xdb91,	// (0x00088e4c) list_gen_pane_cp01

0xd7d8,	// (0x00088a93) scroll_pane_01

0x1542,	// (0x0007c7fd) list_single_double_fisheye_pane

0x154b,	// (0x0007c806) list_double_fisheye_pane_g1_ParamLimits

0x154b,	// (0x0007c806) list_double_fisheye_pane_g1

0x905b,	// (0x00084316) list_double_fisheye_pane_g2_ParamLimits

0x905b,	// (0x00084316) list_double_fisheye_pane_g2

0x1557,	// (0x0007c812) list_double_fisheye_pane_g3_ParamLimits

0x1557,	// (0x0007c812) list_double_fisheye_pane_g3

0x0004,

0xfc2e,	// (0x0008aee9) list_double_fisheye_pane_g_ParamLimits

0xfc2e,	// (0x0008aee9) list_double_fisheye_pane_g

0x156f,	// (0x0007c82a) list_double_fisheye_pane_t1_ParamLimits

0x156f,	// (0x0007c82a) list_double_fisheye_pane_t1

0x158a,	// (0x0007c845) list_double_fisheye_pane_t2_ParamLimits

0x158a,	// (0x0007c845) list_double_fisheye_pane_t2

0x0001,

0xfc39,	// (0x0008aef4) list_double_fisheye_pane_t_ParamLimits

0xfc39,	// (0x0008aef4) list_double_fisheye_pane_t

0xa03b,	// (0x000852f6) main_call5_pane

0x8e6e,	// (0x00084129) sc_swipe_pane_ParamLimits

0x8e6e,	// (0x00084129) sc_swipe_pane

0x908c,	// (0x00084347) call5_image_pane_ParamLimits

0x908c,	// (0x00084347) call5_image_pane

0x909c,	// (0x00084357) call5_swipe_1_pane_ParamLimits

0x909c,	// (0x00084357) call5_swipe_1_pane

0x90a8,	// (0x00084363) call5_swipe_2_pane_ParamLimits

0x90a8,	// (0x00084363) call5_swipe_2_pane

0x90c2,	// (0x0008437d) popup_call5_audio_first_window_ParamLimits

0x90c2,	// (0x0008437d) popup_call5_audio_first_window

0xcebb,	// (0x00088176) call5_swipe_1_pane_g1_ParamLimits

0xcebb,	// (0x00088176) call5_swipe_1_pane_g1

0xe63a,	// (0x000898f5) call5_swipe_1_pane_g2_ParamLimits

0xe63a,	// (0x000898f5) call5_swipe_1_pane_g2

0x0001,

0xfc3e,	// (0x0008aef9) call5_swipe_1_pane_g_ParamLimits

0xfc3e,	// (0x0008aef9) call5_swipe_1_pane_g

0xe646,	// (0x00089901) call5_swipe_1_pane_t1_ParamLimits

0xe646,	// (0x00089901) call5_swipe_1_pane_t1

0xcebb,	// (0x00088176) call5_swipe_2_pane_g1_ParamLimits

0xcebb,	// (0x00088176) call5_swipe_2_pane_g1

0xe65b,	// (0x00089916) call5_swipe_2_pane_g2_ParamLimits

0xe65b,	// (0x00089916) call5_swipe_2_pane_g2

0x0001,

0xfc43,	// (0x0008aefe) call5_swipe_2_pane_g_ParamLimits

0xfc43,	// (0x0008aefe) call5_swipe_2_pane_g

0xe667,	// (0x00089922) call5_swipe_2_pane_t1_ParamLimits

0xe667,	// (0x00089922) call5_swipe_2_pane_t1

0xe67c,	// (0x00089937) sc_swipe_pane_g1_ParamLimits

0xe67c,	// (0x00089937) sc_swipe_pane_g1

0xe6a4,	// (0x0008995f) sc_swipe_pane_g2_ParamLimits

0xe6a4,	// (0x0008995f) sc_swipe_pane_g2

0x0001,

0xfc48,	// (0x0008af03) sc_swipe_pane_g_ParamLimits

0xfc48,	// (0x0008af03) sc_swipe_pane_g

0xe6b0,	// (0x0008996b) sc_swipe_pane_t1_ParamLimits

0xe6b0,	// (0x0008996b) sc_swipe_pane_t1

0xa03b,	// (0x000852f6) main_cmail_launcher_pane

0x90d0,	// (0x0008438b) aid_size_cell_cmail_l_ParamLimits

0x90d0,	// (0x0008438b) aid_size_cell_cmail_l

0x90e0,	// (0x0008439b) grid_cmail_l_pane_ParamLimits

0x90e0,	// (0x0008439b) grid_cmail_l_pane

0x90f0,	// (0x000843ab) cell_cmail_l_pane_ParamLimits

0x90f0,	// (0x000843ab) cell_cmail_l_pane

0x9104,	// (0x000843bf) cell_cmail_l_pane_g1_ParamLimits

0x9104,	// (0x000843bf) cell_cmail_l_pane_g1

0x9115,	// (0x000843d0) cell_cmail_l_pane_t1_ParamLimits

0x9115,	// (0x000843d0) cell_cmail_l_pane_t1

0xe6c5,	// (0x00089980) cell_cmail_l_pane_t2_ParamLimits

0xe6c5,	// (0x00089980) cell_cmail_l_pane_t2

0x0001,

0xfc4d,	// (0x0008af08) cell_cmail_l_pane_t_ParamLimits

0xfc4d,	// (0x0008af08) cell_cmail_l_pane_t

0xa9b2,	// (0x00085c6d) grid_highlight_pane_cp018_ParamLimits

0xa9b2,	// (0x00085c6d) grid_highlight_pane_cp018

0x214d,	// (0x0007d408) main2_pane_ParamLimits

0x214d,	// (0x0007d408) main2_pane

0xa83d,	// (0x00085af8) popup_sp_fs_action_menu_bg_pane_g1

0xa845,	// (0x00085b00) popup_sp_fs_action_menu_bg_pane_g2

0xa84d,	// (0x00085b08) popup_sp_fs_action_menu_bg_pane_g3

0xa855,	// (0x00085b10) popup_sp_fs_action_menu_bg_pane_g4

0xa85d,	// (0x00085b18) popup_sp_fs_action_menu_bg_pane_g5

0xa865,	// (0x00085b20) popup_sp_fs_action_menu_bg_pane_g6

0xa86d,	// (0x00085b28) popup_sp_fs_action_menu_bg_pane_g7

0xa875,	// (0x00085b30) popup_sp_fs_action_menu_bg_pane_g8

0xa87d,	// (0x00085b38) popup_sp_fs_action_menu_bg_pane_g9

0xa885,	// (0x00085b40) popup_sp_fs_action_menu_bg_pane_g10

0xa885,	// (0x00085b40) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0008a445) popup_sp_fs_action_menu_bg_pane_g

0x0d6d,	// (0x0007c028) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x2_t3_g3_g1

0x0d79,	// (0x0007c034) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0d79,	// (0x0007c034) list_medium_line_x2_t3_g3_g2

0x0d85,	// (0x0007c040) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d85,	// (0x0007c040) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008a4f3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008a4f3) list_medium_line_x2_t3_g3_g

0x0d91,	// (0x0007c04c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d91,	// (0x0007c04c) list_medium_line_x2_t3_g3_t1

0x0da6,	// (0x0007c061) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0da6,	// (0x0007c061) list_medium_line_x2_t3_g3_t2

0x0db8,	// (0x0007c073) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0db8,	// (0x0007c073) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0008a4fa) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0008a4fa) list_medium_line_x2_t3_g3_t

0x0d6d,	// (0x0007c028) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x2_t3_g2_g1

0x0d85,	// (0x0007c040) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d85,	// (0x0007c040) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008a501) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008a501) list_medium_line_x2_t3_g2_g

0x0dcd,	// (0x0007c088) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0dcd,	// (0x0007c088) list_medium_line_x2_t3_g2_t1

0x0de3,	// (0x0007c09e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0de3,	// (0x0007c09e) list_medium_line_x2_t3_g2_t2

0x0db8,	// (0x0007c073) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0db8,	// (0x0007c073) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0008a506) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0008a506) list_medium_line_x2_t3_g2_t

0x0d6d,	// (0x0007c028) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x2_t4_g4_g1

0x0df5,	// (0x0007c0b0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0df5,	// (0x0007c0b0) list_medium_line_x2_t4_g4_g2

0x0d79,	// (0x0007c034) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0d79,	// (0x0007c034) list_medium_line_x2_t4_g4_g3

0x0e01,	// (0x0007c0bc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0e01,	// (0x0007c0bc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0008a50d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0008a50d) list_medium_line_x2_t4_g4_g

0x0e0d,	// (0x0007c0c8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0e0d,	// (0x0007c0c8) list_medium_line_x2_t4_g4_t1

0x0e27,	// (0x0007c0e2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e27,	// (0x0007c0e2) list_medium_line_x2_t4_g4_t2

0x0e3d,	// (0x0007c0f8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e3d,	// (0x0007c0f8) list_medium_line_x2_t4_g4_t3

0x0e52,	// (0x0007c10d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e52,	// (0x0007c10d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0008a516) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0008a516) list_medium_line_x2_t4_g4_t

0x0d6d,	// (0x0007c028) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x2_t2_g4_g1

0x0df5,	// (0x0007c0b0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0df5,	// (0x0007c0b0) list_medium_line_x2_t2_g4_g2

0x0d79,	// (0x0007c034) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0d79,	// (0x0007c034) list_medium_line_x2_t2_g4_g3

0x0d85,	// (0x0007c040) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d85,	// (0x0007c040) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2bd,	// (0x0008a578) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2bd,	// (0x0008a578) list_medium_line_x2_t2_g4_g

0x0e64,	// (0x0007c11f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0e64,	// (0x0007c11f) list_medium_line_x2_t2_g4_t1

0x0db8,	// (0x0007c073) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0db8,	// (0x0007c073) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c6,	// (0x0008a581) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c6,	// (0x0008a581) list_medium_line_x2_t2_g4_t

0x0d6d,	// (0x0007c028) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x2_t2_g3_g1

0x0d79,	// (0x0007c034) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0d79,	// (0x0007c034) list_medium_line_x2_t2_g3_g2

0x0d85,	// (0x0007c040) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d85,	// (0x0007c040) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008a4f3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008a4f3) list_medium_line_x2_t2_g3_g

0x0e79,	// (0x0007c134) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0e79,	// (0x0007c134) list_medium_line_x2_t2_g3_t1

0x0db8,	// (0x0007c073) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0db8,	// (0x0007c073) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cb,	// (0x0008a586) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cb,	// (0x0008a586) list_medium_line_x2_t2_g3_t

0x440a,	// (0x0007f6c5) main_sp_fs_list_pane_ParamLimits

0x440a,	// (0x0007f6c5) main_sp_fs_list_pane

0x4416,	// (0x0007f6d1) sp_fs_scroll_pane_ParamLimits

0x4416,	// (0x0007f6d1) sp_fs_scroll_pane

0x0ea8,	// (0x0007c163) list_medium_line_x2_t3_t1

0x0eb8,	// (0x0007c173) list_medium_line_x2_t3_t2

0x0ec6,	// (0x0007c181) list_medium_line_x2_t3_t3

0x0002,

0xf316,	// (0x0008a5d1) list_medium_line_x2_t3_t

0x0ed4,	// (0x0007c18f) list_medium_line_x3_t4_t1

0x0ee4,	// (0x0007c19f) list_medium_line_x3_t4_t2

0x0ef2,	// (0x0007c1ad) list_medium_line_x3_t4_t3

0x0ec6,	// (0x0007c181) list_medium_line_x3_t4_t4

0x0003,

0xf31d,	// (0x0008a5d8) list_medium_line_x3_t4_t

0x0f00,	// (0x0007c1bb) list_medium_line_x4_t5_t1

0x0f10,	// (0x0007c1cb) list_medium_line_x4_t5_t2

0x0ef2,	// (0x0007c1ad) list_medium_line_x4_t5_t3

0x0f1e,	// (0x0007c1d9) list_medium_line_x4_t5_t4

0x0ec6,	// (0x0007c181) list_medium_line_x4_t5_t5

0x0004,

0xf326,	// (0x0008a5e1) list_medium_line_x4_t5_t

0x0d6d,	// (0x0007c028) list_medium_line_t4_g4_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_t4_g4_g1

0x0e01,	// (0x0007c0bc) list_medium_line_t4_g4_g2_ParamLimits

0x0e01,	// (0x0007c0bc) list_medium_line_t4_g4_g2

0x0f2c,	// (0x0007c1e7) list_medium_line_t4_g4_g3_ParamLimits

0x0f2c,	// (0x0007c1e7) list_medium_line_t4_g4_g3

0x0d85,	// (0x0007c040) list_medium_line_t4_g4_g4_ParamLimits

0x0d85,	// (0x0007c040) list_medium_line_t4_g4_g4

0x0003,

0xf331,	// (0x0008a5ec) list_medium_line_t4_g4_g_ParamLimits

0xf331,	// (0x0008a5ec) list_medium_line_t4_g4_g

0x0f38,	// (0x0007c1f3) list_medium_line_t4_g4_t1_ParamLimits

0x0f38,	// (0x0007c1f3) list_medium_line_t4_g4_t1

0x0f4d,	// (0x0007c208) list_medium_line_t4_g4_t2_ParamLimits

0x0f4d,	// (0x0007c208) list_medium_line_t4_g4_t2

0x0f62,	// (0x0007c21d) list_medium_line_t4_g4_t3_ParamLimits

0x0f62,	// (0x0007c21d) list_medium_line_t4_g4_t3

0x0db8,	// (0x0007c073) list_medium_line_t4_g4_t4_ParamLimits

0x0db8,	// (0x0007c073) list_medium_line_t4_g4_t4

0x0003,

0xf33a,	// (0x0008a5f5) list_medium_line_t4_g4_t_ParamLimits

0xf33a,	// (0x0008a5f5) list_medium_line_t4_g4_t

0x452d,	// (0x0007f7e8) chi_dic_find_pane_g1

0x53af,	// (0x0008066a) main_tport_pane

0x11c4,	// (0x0007c47f) list_medium_line_plain_t1

0x11d2,	// (0x0007c48d) list_medium_line_t2_g2_g1_ParamLimits

0x11d2,	// (0x0007c48d) list_medium_line_t2_g2_g1

0x7e40,	// (0x000830fb) list_medium_line_t2_g2_g2_ParamLimits

0x7e40,	// (0x000830fb) list_medium_line_t2_g2_g2

0x0001,

0xfa0e,	// (0x0008acc9) list_medium_line_t2_g2_g_ParamLimits

0xfa0e,	// (0x0008acc9) list_medium_line_t2_g2_g

0x11de,	// (0x0007c499) list_medium_line_t2_g2_t1_ParamLimits

0x11de,	// (0x0007c499) list_medium_line_t2_g2_t1

0x11f8,	// (0x0007c4b3) list_medium_line_t2_g2_t2_ParamLimits

0x11f8,	// (0x0007c4b3) list_medium_line_t2_g2_t2

0x0001,

0xfa13,	// (0x0008acce) list_medium_line_t2_g2_t_ParamLimits

0xfa13,	// (0x0008acce) list_medium_line_t2_g2_t

0x1418,	// (0x0007c6d3) aid_sp_fs_list_icon_a_sm

0x8354,	// (0x0008360f) aid_sp_fs_list_icon_d

0xab65,	// (0x00085e20) aid_sp_fs_text_primary

0xa9de,	// (0x00085c99) aid_sp_fs_text_secondary

0x835c,	// (0x00083617) list_medium_line

0x835c,	// (0x00083617) list_medium_line_g2

0x835c,	// (0x00083617) list_medium_line_g3

0x835c,	// (0x00083617) list_medium_line_plain

0x835c,	// (0x00083617) list_medium_line_plain_t2

0x835c,	// (0x00083617) list_medium_line_plain_t3

0x835c,	// (0x00083617) list_medium_line_right_icon

0x835c,	// (0x00083617) list_medium_line_right_iconx2

0x835c,	// (0x00083617) list_medium_line_t2

0x835c,	// (0x00083617) list_medium_line_t2_g2

0x835c,	// (0x00083617) list_medium_line_t2_g3

0x835c,	// (0x00083617) list_medium_line_t2_right_icon

0x835c,	// (0x00083617) list_medium_line_t2_right_iconx2

0x835c,	// (0x00083617) list_medium_line_t3

0x835c,	// (0x00083617) list_medium_line_t3_g2

0x835c,	// (0x00083617) list_medium_line_t3_g3

0x835c,	// (0x00083617) list_medium_line_t3_right_iconx2

0x1420,	// (0x0007c6db) list_medium_line_t4_g4

0x1429,	// (0x0007c6e4) list_medium_line_x2

0x1429,	// (0x0007c6e4) list_medium_line_x2_t2_g2

0x1429,	// (0x0007c6e4) list_medium_line_x2_t2_g3

0x1429,	// (0x0007c6e4) list_medium_line_x2_t2_g4

0x1429,	// (0x0007c6e4) list_medium_line_x2_t3

0x1429,	// (0x0007c6e4) list_medium_line_x2_t3_g2

0x1429,	// (0x0007c6e4) list_medium_line_x2_t3_g3

0x1429,	// (0x0007c6e4) list_medium_line_x2_t3_g4

0x1429,	// (0x0007c6e4) list_medium_line_x2_t4_g2

0x1429,	// (0x0007c6e4) list_medium_line_x2_t4_g4

0x1432,	// (0x0007c6ed) list_medium_line_x3

0x1432,	// (0x0007c6ed) list_medium_line_x3_t4

0x1432,	// (0x0007c6ed) list_medium_line_x3_t4_g4

0x1420,	// (0x0007c6db) list_medium_line_x4_t4

0x1420,	// (0x0007c6db) list_medium_line_x4_t4_g7

0x1420,	// (0x0007c6db) list_medium_line_x4_t5

0x143b,	// (0x0007c6f6) list_single_fs_dyc_pane_ParamLimits

0x143b,	// (0x0007c6f6) list_single_fs_dyc_pane

0x0d6d,	// (0x0007c028) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x4_t4_g7_g1

0x1473,	// (0x0007c72e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1473,	// (0x0007c72e) list_medium_line_x4_t4_g7_g2

0x147f,	// (0x0007c73a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x147f,	// (0x0007c73a) list_medium_line_x4_t4_g7_g3

0x148e,	// (0x0007c749) list_medium_line_x4_t4_g7_g4_ParamLimits

0x148e,	// (0x0007c749) list_medium_line_x4_t4_g7_g4

0x149a,	// (0x0007c755) list_medium_line_x4_t4_g7_g5_ParamLimits

0x149a,	// (0x0007c755) list_medium_line_x4_t4_g7_g5

0x14a9,	// (0x0007c764) list_medium_line_x4_t4_g7_g6_ParamLimits

0x14a9,	// (0x0007c764) list_medium_line_x4_t4_g7_g6

0x14b8,	// (0x0007c773) list_medium_line_x4_t4_g7_g7_ParamLimits

0x14b8,	// (0x0007c773) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbab,	// (0x0008ae66) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbab,	// (0x0008ae66) list_medium_line_x4_t4_g7_g

0x14c4,	// (0x0007c77f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x14c4,	// (0x0007c77f) list_medium_line_x4_t4_g7_t1

0x14d9,	// (0x0007c794) list_medium_line_x4_t4_g7_t2_ParamLimits

0x14d9,	// (0x0007c794) list_medium_line_x4_t4_g7_t2

0x14ee,	// (0x0007c7a9) list_medium_line_x4_t4_g7_t3_ParamLimits

0x14ee,	// (0x0007c7a9) list_medium_line_x4_t4_g7_t3

0x1503,	// (0x0007c7be) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1503,	// (0x0007c7be) list_medium_line_x4_t4_g7_t4

0x1515,	// (0x0007c7d0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1515,	// (0x0007c7d0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbba,	// (0x0008ae75) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbba,	// (0x0008ae75) list_medium_line_x4_t4_g7_t

0x1527,	// (0x0007c7e2) list_single_dyc_row_pane_ParamLimits

0x1527,	// (0x0007c7e2) list_single_dyc_row_pane

0x9080,	// (0x0008433b) call5_gesture_pane_ParamLimits

0x9080,	// (0x0008433b) call5_gesture_pane

0x90b4,	// (0x0008436f) call5_windows_pane_ParamLimits

0x90b4,	// (0x0008436f) call5_windows_pane

0x912b,	// (0x000843e6) call5_swipe_1_pane_cp_ParamLimits

0x912b,	// (0x000843e6) call5_swipe_1_pane_cp

0x9137,	// (0x000843f2) call5_swipe_2_pane_cp_ParamLimits

0x9137,	// (0x000843f2) call5_swipe_2_pane_cp

0xa969,	// (0x00085c24) call5_image_pane_cp

0x9143,	// (0x000843fe) popup_call5_audio_first_window_cp_ParamLimits

0x9143,	// (0x000843fe) popup_call5_audio_first_window_cp

0xe67c,	// (0x00089937) call5_swipe_1_pane_g1_cp_ParamLimits

0xe67c,	// (0x00089937) call5_swipe_1_pane_g1_cp

0xe6d7,	// (0x00089992) call5_swipe_1_pane_g2_cp

0xe6b0,	// (0x0008996b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b0,	// (0x0008996b) call5_swipe_1_pane_t1_cp

0xe67c,	// (0x00089937) call5_swipe_2_pane_g1_cp_ParamLimits

0xe67c,	// (0x00089937) call5_swipe_2_pane_g1_cp

0xe6df,	// (0x0008999a) call5_swipe_2_pane_g2_cp

0xe6e7,	// (0x000899a2) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6e7,	// (0x000899a2) call5_swipe_2_pane_t1_cp

0xa9b2,	// (0x00085c6d) main_sp_fs_email_pane

0xe6fc,	// (0x000899b7) main_sp_fs_listscroll_pane_te

0x9151,	// (0x0008440c) popup_sp_fs_action_menu_pane_ParamLimits

0x9151,	// (0x0008440c) popup_sp_fs_action_menu_pane

0xcc6d,	// (0x00087f28) bg_sp_fs_ctrlbar_pane_g1

0xe705,	// (0x000899c0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe70e,	// (0x000899c9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe717,	// (0x000899d2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6d,	// (0x00087f28) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc52,	// (0x0008af0d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca46,	// (0x00087d01) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca46,	// (0x00087d01) bg_sp_fs_ctrlbar_ddmenu_pane

0xe720,	// (0x000899db) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe720,	// (0x000899db) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe72c,	// (0x000899e7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe72c,	// (0x000899e7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0acc,	// (0x0007bd87) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0acc,	// (0x0007bd87) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe738,	// (0x000899f3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe738,	// (0x000899f3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9195,	// (0x00084450) list_medium_line_t2_right_icon_g1

0x15ac,	// (0x0007c867) list_medium_line_t2_right_icon_t1

0x15bc,	// (0x0007c877) list_medium_line_t2_right_icon_t2

0x0001,

0xfc5b,	// (0x0008af16) list_medium_line_t2_right_icon_t

0xc859,	// (0x00087b14) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc859,	// (0x00087b14) bg_sp_fs_ctrlbar_pane

0x91e0,	// (0x0008449b) main_sp_fs_ctrlbar_button_pane_cp01

0x91e8,	// (0x000844a3) main_sp_fs_ctrlbar_ddmenu_pane

0xe78a,	// (0x00089a45) main_sp_fs_ctrlbar_pane_g1

0xe796,	// (0x00089a51) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0ad6,	// (0x0007bd91) main_sp_fs_ctrlbar_pane_g

0xe7a2,	// (0x00089a5d) main_sp_fs_ctrlbar_pane_t1

0x91f2,	// (0x000844ad) main_sp_fs_ctrlbar_pane

0x9208,	// (0x000844c3) main_sp_fs_listscroll_pane_te_cp01

0x15ca,	// (0x0007c885) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x15ca,	// (0x0007c885) popup_sp_fs_action_menu_pane_cp01

0xa9b2,	// (0x00085c6d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa9b2,	// (0x00085c6d) bg_sp_fs_highlight_list_pane_cp01

0x15f4,	// (0x0007c8af) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x15f4,	// (0x0007c8af) sp_fs_action_menu_list_gene_pane_g1

0xe7d2,	// (0x00089a8d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d2,	// (0x00089a8d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc60,	// (0x0008af1b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc60,	// (0x0008af1b) sp_fs_action_menu_list_gene_pane_g

0x1603,	// (0x0007c8be) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1603,	// (0x0007c8be) sp_fs_action_menu_list_gene_pane_t1

0x161b,	// (0x0007c8d6) sp_fs_action_menu_list_gene_pane_ParamLimits

0x161b,	// (0x0007c8d6) sp_fs_action_menu_list_gene_pane

0xe7df,	// (0x00089a9a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7df,	// (0x00089a9a) popup_sp_fs_action_menu_bg_pane

0x163a,	// (0x0007c8f5) sp_fs_action_menu_list_pane_ParamLimits

0x163a,	// (0x0007c8f5) sp_fs_action_menu_list_pane

0xa9e7,	// (0x00085ca2) sp_fs_scroll_pane_cp01_ParamLimits

0xa9e7,	// (0x00085ca2) sp_fs_scroll_pane_cp01

0x165a,	// (0x0007c915) list_medium_line_plain_t2_t1

0x166a,	// (0x0007c925) list_medium_line_plain_t2_t2

0x0001,

0xfc65,	// (0x0008af20) list_medium_line_plain_t2_t

0x1678,	// (0x0007c933) list_medium_line_plain_t3_t1

0x1688,	// (0x0007c943) list_medium_line_plain_t3_t2

0x1696,	// (0x0007c951) list_medium_line_plain_t3_t3

0x0002,

0xfc6a,	// (0x0008af25) list_medium_line_plain_t3_t

0x0d6d,	// (0x0007c028) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x2_t2_g2_g1

0x0d85,	// (0x0007c040) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d85,	// (0x0007c040) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008a501) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008a501) list_medium_line_x2_t2_g2_g

0x0f38,	// (0x0007c1f3) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0f38,	// (0x0007c1f3) list_medium_line_x2_t2_g2_t1

0x0db8,	// (0x0007c073) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0db8,	// (0x0007c073) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc71,	// (0x0008af2c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc71,	// (0x0008af2c) list_medium_line_x2_t2_g2_t

0x0d6d,	// (0x0007c028) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x2_t4_g2_g1

0x16a4,	// (0x0007c95f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x16a4,	// (0x0007c95f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc76,	// (0x0008af31) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc76,	// (0x0008af31) list_medium_line_x2_t4_g2_g

0x16b6,	// (0x0007c971) list_medium_line_x2_t4_g2_t1_ParamLimits

0x16b6,	// (0x0007c971) list_medium_line_x2_t4_g2_t1

0x16d0,	// (0x0007c98b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x16d0,	// (0x0007c98b) list_medium_line_x2_t4_g2_t2

0x16e6,	// (0x0007c9a1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x16e6,	// (0x0007c9a1) list_medium_line_x2_t4_g2_t3

0x0db8,	// (0x0007c073) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0db8,	// (0x0007c073) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc7b,	// (0x0008af36) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc7b,	// (0x0008af36) list_medium_line_x2_t4_g2_t

0x9219,	// (0x000844d4) list_medium_line_t3_right_iconx2_g1

0x9195,	// (0x00084450) list_medium_line_t3_right_iconx2_g2

0x16fb,	// (0x0007c9b6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc84,	// (0x0008af3f) list_medium_line_t3_right_iconx2_g

0x1703,	// (0x0007c9be) list_medium_line_t3_right_iconx2_t1

0x1713,	// (0x0007c9ce) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc8b,	// (0x0008af46) list_medium_line_t3_right_iconx2_t

0x0d6d,	// (0x0007c028) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x3_t4_g4_g1

0x0d79,	// (0x0007c034) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0d79,	// (0x0007c034) list_medium_line_x3_t4_g4_g2

0x0e01,	// (0x0007c0bc) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0e01,	// (0x0007c0bc) list_medium_line_x3_t4_g4_g3

0x1721,	// (0x0007c9dc) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1721,	// (0x0007c9dc) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc90,	// (0x0008af4b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc90,	// (0x0008af4b) list_medium_line_x3_t4_g4_g

0x172d,	// (0x0007c9e8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x172d,	// (0x0007c9e8) list_medium_line_x3_t4_g4_t1

0x1744,	// (0x0007c9ff) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1744,	// (0x0007c9ff) list_medium_line_x3_t4_g4_t2

0x0f4d,	// (0x0007c208) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0f4d,	// (0x0007c208) list_medium_line_x3_t4_g4_t3

0x1759,	// (0x0007ca14) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1759,	// (0x0007ca14) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc99,	// (0x0008af54) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc99,	// (0x0008af54) list_medium_line_x3_t4_g4_t

0x1776,	// (0x0007ca31) list_single_dyc_row_text_pane_t1_ParamLimits

0x1776,	// (0x0007ca31) list_single_dyc_row_text_pane_t1

0x17ad,	// (0x0007ca68) list_single_dyc_row_text_pane_t2_ParamLimits

0x17ad,	// (0x0007ca68) list_single_dyc_row_text_pane_t2

0x1823,	// (0x0007cade) list_single_dyc_row_text_pane_t3_ParamLimits

0x1823,	// (0x0007cade) list_single_dyc_row_text_pane_t3

0x0005,

0xfca2,	// (0x0008af5d) list_single_dyc_row_text_pane_t_ParamLimits

0xfca2,	// (0x0008af5d) list_single_dyc_row_text_pane_t

0x18f4,	// (0x0007cbaf) list_single_dyc_row_pane_g1_ParamLimits

0x18f4,	// (0x0007cbaf) list_single_dyc_row_pane_g1

0x1900,	// (0x0007cbbb) list_single_dyc_row_pane_g2_ParamLimits

0x1900,	// (0x0007cbbb) list_single_dyc_row_pane_g2

0x190c,	// (0x0007cbc7) list_single_dyc_row_pane_g3_ParamLimits

0x190c,	// (0x0007cbc7) list_single_dyc_row_pane_g3

0x1918,	// (0x0007cbd3) list_single_dyc_row_pane_g4_ParamLimits

0x1918,	// (0x0007cbd3) list_single_dyc_row_pane_g4

0x0003,

0xfcaf,	// (0x0008af6a) list_single_dyc_row_pane_g_ParamLimits

0xfcaf,	// (0x0008af6a) list_single_dyc_row_pane_g

0x1924,	// (0x0007cbdf) list_single_dyc_row_text_pane_ParamLimits

0x1924,	// (0x0007cbdf) list_single_dyc_row_text_pane

0xa03b,	// (0x000852f6) bg_sp_fs_scroll_pane

0xe7ed,	// (0x00089aa8) thumb_sp_fs_scroll_pane

0x11d2,	// (0x0007c48d) list_medium_line_g1_ParamLimits

0x11d2,	// (0x0007c48d) list_medium_line_g1

0x1943,	// (0x0007cbfe) list_medium_line_t1_ParamLimits

0x1943,	// (0x0007cbfe) list_medium_line_t1

0x0d6d,	// (0x0007c028) list_medium_line_x2_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x2_g1

0x0d79,	// (0x0007c034) list_medium_line_x2_g2_ParamLimits

0x0d79,	// (0x0007c034) list_medium_line_x2_g2

0x0001,

0xfcb8,	// (0x0008af73) list_medium_line_x2_g_ParamLimits

0xfcb8,	// (0x0008af73) list_medium_line_x2_g

0x1958,	// (0x0007cc13) list_medium_line_x2_t1_ParamLimits

0x1958,	// (0x0007cc13) list_medium_line_x2_t1

0x0d6d,	// (0x0007c028) list_medium_line_x3_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x3_g1

0x0d79,	// (0x0007c034) list_medium_line_x3_g2_ParamLimits

0x0d79,	// (0x0007c034) list_medium_line_x3_g2

0x0001,

0xfcb8,	// (0x0008af73) list_medium_line_x3_g_ParamLimits

0xfcb8,	// (0x0008af73) list_medium_line_x3_g

0x1958,	// (0x0007cc13) list_medium_line_x3_t1_ParamLimits

0x1958,	// (0x0007cc13) list_medium_line_x3_t1

0xe7f6,	// (0x00089ab1) thumb_sp_fs_scroll_pane_g1

0xe7ff,	// (0x00089aba) thumb_sp_fs_scroll_pane_g2

0xe808,	// (0x00089ac3) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0b3d,	// (0x0007bdf8) thumb_sp_fs_scroll_pane_g

0xe7f6,	// (0x00089ab1) bg_sp_fs_scroll_pane_g1

0xe7ff,	// (0x00089aba) bg_sp_fs_scroll_pane_g2

0xe808,	// (0x00089ac3) bg_sp_fs_scroll_pane_g3

0x0002,

0x0b3d,	// (0x0007bdf8) bg_sp_fs_scroll_pane_g

0x0d6d,	// (0x0007c028) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d6d,	// (0x0007c028) list_medium_line_x2_t3_g4_g1

0x0df5,	// (0x0007c0b0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0df5,	// (0x0007c0b0) list_medium_line_x2_t3_g4_g2

0x0d79,	// (0x0007c034) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0d79,	// (0x0007c034) list_medium_line_x2_t3_g4_g3

0x0d85,	// (0x0007c040) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d85,	// (0x0007c040) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2bd,	// (0x0008a578) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2bd,	// (0x0008a578) list_medium_line_x2_t3_g4_g

0x196e,	// (0x0007cc29) list_medium_line_x2_t3_g4_t1_ParamLimits

0x196e,	// (0x0007cc29) list_medium_line_x2_t3_g4_t1

0x1984,	// (0x0007cc3f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1984,	// (0x0007cc3f) list_medium_line_x2_t3_g4_t2

0x0db8,	// (0x0007c073) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0db8,	// (0x0007c073) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcbd,	// (0x0008af78) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcbd,	// (0x0008af78) list_medium_line_x2_t3_g4_t

0x11d2,	// (0x0007c48d) list_medium_line_g2_g1_ParamLimits

0x11d2,	// (0x0007c48d) list_medium_line_g2_g1

0x7e40,	// (0x000830fb) list_medium_line_g2_g2_ParamLimits

0x7e40,	// (0x000830fb) list_medium_line_g2_g2

0x0001,

0xfa0e,	// (0x0008acc9) list_medium_line_g2_g_ParamLimits

0xfa0e,	// (0x0008acc9) list_medium_line_g2_g

0x199d,	// (0x0007cc58) list_medium_line_g2_t1_ParamLimits

0x199d,	// (0x0007cc58) list_medium_line_g2_t1

0x11d2,	// (0x0007c48d) list_medium_line_t3_g2_g1_ParamLimits

0x11d2,	// (0x0007c48d) list_medium_line_t3_g2_g1

0x7e40,	// (0x000830fb) list_medium_line_t3_g2_g2_ParamLimits

0x7e40,	// (0x000830fb) list_medium_line_t3_g2_g2

0x0001,

0xfa0e,	// (0x0008acc9) list_medium_line_t3_g2_g_ParamLimits

0xfa0e,	// (0x0008acc9) list_medium_line_t3_g2_g

0x19b2,	// (0x0007cc6d) list_medium_line_t3_g2_t1_ParamLimits

0x19b2,	// (0x0007cc6d) list_medium_line_t3_g2_t1

0x19cc,	// (0x0007cc87) list_medium_line_t3_g2_t2_ParamLimits

0x19cc,	// (0x0007cc87) list_medium_line_t3_g2_t2

0x19e2,	// (0x0007cc9d) list_medium_line_t3_g2_t3_ParamLimits

0x19e2,	// (0x0007cc9d) list_medium_line_t3_g2_t3

0x0002,

0xfcc4,	// (0x0008af7f) list_medium_line_t3_g2_t_ParamLimits

0xfcc4,	// (0x0008af7f) list_medium_line_t3_g2_t

0x9195,	// (0x00084450) list_medium_line_right_icon_g1

0x19f7,	// (0x0007ccb2) list_medium_line_right_icon_t1

0x11d2,	// (0x0007c48d) list_medium_line_t2_g1_ParamLimits

0x11d2,	// (0x0007c48d) list_medium_line_t2_g1

0x1a05,	// (0x0007ccc0) list_medium_line_t2_t1_ParamLimits

0x1a05,	// (0x0007ccc0) list_medium_line_t2_t1

0x1a1f,	// (0x0007ccda) list_medium_line_t2_t2_ParamLimits

0x1a1f,	// (0x0007ccda) list_medium_line_t2_t2

0x0001,

0xfccb,	// (0x0008af86) list_medium_line_t2_t_ParamLimits

0xfccb,	// (0x0008af86) list_medium_line_t2_t

0x11d2,	// (0x0007c48d) list_medium_line_t3_g1_ParamLimits

0x11d2,	// (0x0007c48d) list_medium_line_t3_g1

0x1a34,	// (0x0007ccef) list_medium_line_t3_t1_ParamLimits

0x1a34,	// (0x0007ccef) list_medium_line_t3_t1

0x1a4b,	// (0x0007cd06) list_medium_line_t3_t2_ParamLimits

0x1a4b,	// (0x0007cd06) list_medium_line_t3_t2

0x1a60,	// (0x0007cd1b) list_medium_line_t3_t3_ParamLimits

0x1a60,	// (0x0007cd1b) list_medium_line_t3_t3

0x0002,

0xfcd0,	// (0x0008af8b) list_medium_line_t3_t_ParamLimits

0xfcd0,	// (0x0008af8b) list_medium_line_t3_t

0x11d2,	// (0x0007c48d) list_medium_line_g3_g1_ParamLimits

0x11d2,	// (0x0007c48d) list_medium_line_g3_g1

0x9221,	// (0x000844dc) list_medium_line_g3_g2_ParamLimits

0x9221,	// (0x000844dc) list_medium_line_g3_g2

0x7e40,	// (0x000830fb) list_medium_line_g3_g3_ParamLimits

0x7e40,	// (0x000830fb) list_medium_line_g3_g3

0x0002,

0xfcd7,	// (0x0008af92) list_medium_line_g3_g_ParamLimits

0xfcd7,	// (0x0008af92) list_medium_line_g3_g

0x1a72,	// (0x0007cd2d) list_medium_line_g3_t1_ParamLimits

0x1a72,	// (0x0007cd2d) list_medium_line_g3_t1

0x11d2,	// (0x0007c48d) list_medium_line_t2_g3_g1_ParamLimits

0x11d2,	// (0x0007c48d) list_medium_line_t2_g3_g1

0x9221,	// (0x000844dc) list_medium_line_t2_g3_g2_ParamLimits

0x9221,	// (0x000844dc) list_medium_line_t2_g3_g2

0x7e40,	// (0x000830fb) list_medium_line_t2_g3_g3_ParamLimits

0x7e40,	// (0x000830fb) list_medium_line_t2_g3_g3

0x0002,

0xfcd7,	// (0x0008af92) list_medium_line_t2_g3_g_ParamLimits

0xfcd7,	// (0x0008af92) list_medium_line_t2_g3_g

0x1a87,	// (0x0007cd42) list_medium_line_t2_g3_t1_ParamLimits

0x1a87,	// (0x0007cd42) list_medium_line_t2_g3_t1

0x1aa1,	// (0x0007cd5c) list_medium_line_t2_g3_t2_ParamLimits

0x1aa1,	// (0x0007cd5c) list_medium_line_t2_g3_t2

0x0001,

0xfcde,	// (0x0008af99) list_medium_line_t2_g3_t_ParamLimits

0xfcde,	// (0x0008af99) list_medium_line_t2_g3_t

0x11d2,	// (0x0007c48d) list_medium_line_t3_g3_g1_ParamLimits

0x11d2,	// (0x0007c48d) list_medium_line_t3_g3_g1

0x9221,	// (0x000844dc) list_medium_line_t3_g3_g2_ParamLimits

0x9221,	// (0x000844dc) list_medium_line_t3_g3_g2

0x7e40,	// (0x000830fb) list_medium_line_t3_g3_g3_ParamLimits

0x7e40,	// (0x000830fb) list_medium_line_t3_g3_g3

0x0002,

0xfcd7,	// (0x0008af92) list_medium_line_t3_g3_g_ParamLimits

0xfcd7,	// (0x0008af92) list_medium_line_t3_g3_g

0x1ab7,	// (0x0007cd72) list_medium_line_t3_g3_t1_ParamLimits

0x1ab7,	// (0x0007cd72) list_medium_line_t3_g3_t1

0x1acb,	// (0x0007cd86) list_medium_line_t3_g3_t2_ParamLimits

0x1acb,	// (0x0007cd86) list_medium_line_t3_g3_t2

0x1add,	// (0x0007cd98) list_medium_line_t3_g3_t3_ParamLimits

0x1add,	// (0x0007cd98) list_medium_line_t3_g3_t3

0x0002,

0xfce3,	// (0x0008af9e) list_medium_line_t3_g3_t_ParamLimits

0xfce3,	// (0x0008af9e) list_medium_line_t3_g3_t

0x9219,	// (0x000844d4) list_medium_line_right_iconx2_g1

0x9195,	// (0x00084450) list_medium_line_right_iconx2_g2

0x0001,

0xfcea,	// (0x0008afa5) list_medium_line_right_iconx2_g

0x922d,	// (0x000844e8) list_medium_line_right_iconx2_t1

0x9219,	// (0x000844d4) list_medium_line_t2_right_iconx2_g1

0x9195,	// (0x00084450) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcea,	// (0x0008afa5) list_medium_line_t2_right_iconx2_g

0x1aef,	// (0x0007cdaa) list_medium_line_t2_right_iconx2_t1

0x1aff,	// (0x0007cdba) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcef,	// (0x0008afaa) list_medium_line_t2_right_iconx2_t

0x1b0d,	// (0x0007cdc8) list_medium_line_x4_t4_t1

0x1b1b,	// (0x0007cdd6) list_medium_line_x4_t4_t2

0x1b2b,	// (0x0007cde6) list_medium_line_x4_t4_t3

0x1b3b,	// (0x0007cdf6) list_medium_line_x4_t4_t4

0x0003,

0xfcf4,	// (0x0008afaf) list_medium_line_x4_t4_t

0x9265,	// (0x00084520) tport_appsw_pane_ParamLimits

0x9265,	// (0x00084520) tport_appsw_pane

0x9273,	// (0x0008452e) tport_contact_pane_ParamLimits

0x9273,	// (0x0008452e) tport_contact_pane

0x9283,	// (0x0008453e) tport_listscroll_pane_ParamLimits

0x9283,	// (0x0008453e) tport_listscroll_pane

0x9293,	// (0x0008454e) cell_tport_appsw_pane_ParamLimits

0x9293,	// (0x0008454e) cell_tport_appsw_pane

0xcf20,	// (0x000881db) tport_appsw_pane_g1_ParamLimits

0xcf20,	// (0x000881db) tport_appsw_pane_g1

0xe811,	// (0x00089acc) tport_contact_pane_g1

0xe81a,	// (0x00089ad5) tport_contact_pane_t1

0xe828,	// (0x00089ae3) tport_contact_pane_t2

0x0001,

0x0b84,	// (0x0007be3f) tport_contact_pane_t

0xe836,	// (0x00089af1) list_tport_pane

0xe83f,	// (0x00089afa) scroll_pane_cp_030

0x92c6,	// (0x00084581) cell_tport_appsw_pane_g1

0x92d6,	// (0x00084591) cell_tport_appsw_pane_t1

0x92e4,	// (0x0008459f) grid_highlight_pane_cp019

0x92ec,	// (0x000845a7) list_tport_double_graphic_pane_ParamLimits

0x92ec,	// (0x000845a7) list_tport_double_graphic_pane

0xa9b2,	// (0x00085c6d) list_highlight_pane_cp023_ParamLimits

0xa9b2,	// (0x00085c6d) list_highlight_pane_cp023

0x92fd,	// (0x000845b8) list_tport_double_graphic_pane_g1_ParamLimits

0x92fd,	// (0x000845b8) list_tport_double_graphic_pane_g1

0x930a,	// (0x000845c5) list_tport_double_graphic_pane_t1_ParamLimits

0x930a,	// (0x000845c5) list_tport_double_graphic_pane_t1

0x931f,	// (0x000845da) list_tport_double_graphic_pane_t2_ParamLimits

0x931f,	// (0x000845da) list_tport_double_graphic_pane_t2

0x0001,

0xfd04,	// (0x0008afbf) list_tport_double_graphic_pane_t_ParamLimits

0xfd04,	// (0x0008afbf) list_tport_double_graphic_pane_t

0xa03b,	// (0x000852f6) main_cale_note_pane

0x7652,	// (0x0008290d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7652,	// (0x0008290d) cell_vitu2_function_top_wide_pane_cp01

0x8dbb,	// (0x00084076) wait_bar_pane_cp05_ParamLimits

0xa9b2,	// (0x00085c6d) listscroll_cmail_pane

0xe848,	// (0x00089b03) list_cmail_pane

0x9331,	// (0x000845ec) list_cmail_body_pane

0x9354,	// (0x0008460f) list_single_cmail_header_caption_pane

0x9380,	// (0x0008463b) list_single_cmail_header_detail_pane_ParamLimits

0x9380,	// (0x0008463b) list_single_cmail_header_detail_pane

0xe858,	// (0x00089b13) list_single_cmail_header_caption_pane_t1

0x1b4b,	// (0x0007ce06) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1b4b,	// (0x0007ce06) list_single_cmail_header_detail_pane_g1

0x93b9,	// (0x00084674) list_single_cmail_header_detail_pane_g2_ParamLimits

0x93b9,	// (0x00084674) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd09,	// (0x0008afc4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd09,	// (0x0008afc4) list_single_cmail_header_detail_pane_g

0x1b61,	// (0x0007ce1c) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1b61,	// (0x0007ce1c) list_single_cmail_header_detail_pane_t1

0x1bc1,	// (0x0007ce7c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1bc1,	// (0x0007ce7c) list_single_cmail_header_editor_pane_bg

0xe32b,	// (0x000895e6) list_cmail_body_pane_g1

0xe87c,	// (0x00089b37) list_cmail_body_pane_t1

0xd6b6,	// (0x00088971) list_single_cmail_header_editor_pane_bg_g1

0xac26,	// (0x00085ee1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6c6,	// (0x00088981) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6be,	// (0x00088979) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd916,	// (0x00088bd1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6e6,	// (0x000889a1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6d6,	// (0x00088991) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6de,	// (0x00088999) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac06,	// (0x00085ec1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x93c5,	// (0x00084680) calenote_gesture_pane_ParamLimits

0x93c5,	// (0x00084680) calenote_gesture_pane

0x93df,	// (0x0008469a) calenote_window_pane_ParamLimits

0x93df,	// (0x0008469a) calenote_window_pane

0xe88a,	// (0x00089b45) popup_note_window_cp01

0x93f7,	// (0x000846b2) calenote_swipe_1_pane_ParamLimits

0x93f7,	// (0x000846b2) calenote_swipe_1_pane

0x9137,	// (0x000843f2) calenote_swipe_2_pane_ParamLimits

0x9137,	// (0x000843f2) calenote_swipe_2_pane

0xe67c,	// (0x00089937) calenote_swipe_1_pane_g1_ParamLimits

0xe67c,	// (0x00089937) calenote_swipe_1_pane_g1

0xe6a4,	// (0x0008995f) calenote_swipe_1_pane_g2_ParamLimits

0xe6a4,	// (0x0008995f) calenote_swipe_1_pane_g2

0x0001,

0xfc48,	// (0x0008af03) calenote_swipe_1_pane_g_ParamLimits

0xfc48,	// (0x0008af03) calenote_swipe_1_pane_g

0xe89c,	// (0x00089b57) calenote_swipe_1_pane_t1_ParamLimits

0xe89c,	// (0x00089b57) calenote_swipe_1_pane_t1

0xe67c,	// (0x00089937) calenote_swipe_2_pane_g1_ParamLimits

0xe67c,	// (0x00089937) calenote_swipe_2_pane_g1

0xe8bb,	// (0x00089b76) calenote_swipe_2_pane_g2_ParamLimits

0xe8bb,	// (0x00089b76) calenote_swipe_2_pane_g2

0x0001,

0xfd15,	// (0x0008afd0) calenote_swipe_2_pane_g_ParamLimits

0xfd15,	// (0x0008afd0) calenote_swipe_2_pane_g

0xe8c7,	// (0x00089b82) calenote_swipe_2_pane_t1_ParamLimits

0xe8c7,	// (0x00089b82) calenote_swipe_2_pane_t1

0xa03b,	// (0x000852f6) main_mup_navstr_pane

0x63d4,	// (0x0008168f) main_mup3_pane_t7_ParamLimits

0x63d4,	// (0x0008168f) main_mup3_pane_t7

0x6dde,	// (0x00082099) main_mp4_pane_g6_ParamLimits

0x6dde,	// (0x00082099) main_mp4_pane_g6

0x7150,	// (0x0008240b) main_image3_pane_t4_ParamLimits

0x7150,	// (0x0008240b) main_image3_pane_t4

0x940a,	// (0x000846c5) popup_navstr_preview_pane_ParamLimits

0x940a,	// (0x000846c5) popup_navstr_preview_pane

0x9416,	// (0x000846d1) scroll_navstr_pane_ParamLimits

0x9416,	// (0x000846d1) scroll_navstr_pane

0xa03b,	// (0x000852f6) bg_popup_preview_window_pane_cp04

0xe8ee,	// (0x00089ba9) popup_navstr_preview_pane_t1

0x9422,	// (0x000846dd) scroll_navstr_pane_g1_ParamLimits

0x9422,	// (0x000846dd) scroll_navstr_pane_g1

0x942f,	// (0x000846ea) scroll_navstr_pane_t1_ParamLimits

0x942f,	// (0x000846ea) scroll_navstr_pane_t1

0xe893,	// (0x00089b4e) bg_button_pane_cp014

0xe893,	// (0x00089b4e) bg_button_pane_cp030

0x1563,	// (0x0007c81e) list_double_fisheye_pane_g4_ParamLimits

0x1563,	// (0x0007c81e) list_double_fisheye_pane_g4

0x906f,	// (0x0008432a) list_double_fisheye_pane_g5_ParamLimits

0x906f,	// (0x0008432a) list_double_fisheye_pane_g5

0xcc3a,	// (0x00087ef5) sp_fs_scroll_pane_cp03

0xe78a,	// (0x00089a45) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe796,	// (0x00089a51) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0ad6,	// (0x0007bd91) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a2,	// (0x00089a5d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe850,	// (0x00089b0b) sp_fs_scroll_pane_cp02

0xa8a8,	// (0x00085b63) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8a8,	// (0x00085b63) popup_sp_fs_calendar_preview_list_single_pane

0xa03b,	// (0x000852f6) main_cam6_pano_pane

0xa9b2,	// (0x00085c6d) main_mup3_pane_ParamLimits

0xa03b,	// (0x000852f6) main_phacti_pane

0x8c90,	// (0x00083f4b) bg_button_pane_cp11

0x8ca8,	// (0x00083f63) main_mobtv_info_pane_g2_ParamLimits

0x8ca8,	// (0x00083f63) main_mobtv_info_pane_g2

0x0001,

0xfbfa,	// (0x0008aeb5) main_mobtv_info_pane_g_ParamLimits

0xfbfa,	// (0x0008aeb5) main_mobtv_info_pane_g

0x8e5a,	// (0x00084115) sc_clock_pane_t5_ParamLimits

0x8e5a,	// (0x00084115) sc_clock_pane_t5

0x8efd,	// (0x000841b8) main_radioblah_pane_g1_ParamLimits

0xe5c8,	// (0x00089883) main_radioblah_pane_t3_ParamLimits

0xe5c8,	// (0x00089883) main_radioblah_pane_t3

0xe5e0,	// (0x0008989b) main_radioblah_pane_t4_ParamLimits

0xe5e0,	// (0x0008989b) main_radioblah_pane_t4

0x8f1b,	// (0x000841d6) main_radioblah_text_pane_ParamLimits

0x8f1b,	// (0x000841d6) main_radioblah_text_pane

0x8f28,	// (0x000841e3) main_radioblah_info_pane_g1_ParamLimits

0x8fbd,	// (0x00084278) main_radioblah_info_pane_t4_ParamLimits

0x8fbd,	// (0x00084278) main_radioblah_info_pane_t4

0xa9b2,	// (0x00085c6d) main_sp_fs_calendar_pane

0x9441,	// (0x000846fc) main_phacti_pane_g1

0x9449,	// (0x00084704) phacti_note_pane_ParamLimits

0x9449,	// (0x00084704) phacti_note_pane

0xe905,	// (0x00089bc0) phacti_term_pane_ParamLimits

0xe905,	// (0x00089bc0) phacti_term_pane

0xe91a,	// (0x00089bd5) phacti_note_pane_t1_ParamLimits

0xe91a,	// (0x00089bd5) phacti_note_pane_t1

0x1bd8,	// (0x0007ce93) phacti_term_pane_g1

0x1be0,	// (0x0007ce9b) phacti_term_pane_t1_ParamLimits

0x1be0,	// (0x0007ce9b) phacti_term_pane_t1

0xe931,	// (0x00089bec) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe939,	// (0x00089bf4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0bab,	// (0x0007be66) popup_sp_fs_calendar_preview_list_single_pane_g

0xe941,	// (0x00089bfc) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe941,	// (0x00089bfc) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe957,	// (0x00089c12) aid_popup_sp_fs_bg_corner_pane

0xcc6d,	// (0x00087f28) popup_sp_fs_calendar_preview_bg_pane_g1

0xa03b,	// (0x000852f6) popup_sp_fs_calendar_preview_bg_pane

0x945f,	// (0x0008471a) popup_sp_fs_calendar_preview_list_pane

0xc859,	// (0x00087b14) bg_main_sp_fs_cale_pane_ParamLimits

0xc859,	// (0x00087b14) bg_main_sp_fs_cale_pane

0x1c13,	// (0x0007cece) listscroll_cale_mrui_pane_ParamLimits

0x1c13,	// (0x0007cece) listscroll_cale_mrui_pane

0x1c28,	// (0x0007cee3) listscroll_sp_fs_schedule_track_pane

0x1c31,	// (0x0007ceec) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1c31,	// (0x0007ceec) main_sp_fs_ctrlbar_pane_cp01

0xe95f,	// (0x00089c1a) main_sp_fs_ribbon_pane

0x1c44,	// (0x0007ceff) popup_sp_fs_cale_preview_window

0x94b4,	// (0x0008476f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x94b4,	// (0x0008476f) list_single_sp_fs_schedule_track_pane

0xed61,	// (0x0008a01c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xed61,	// (0x0008a01c) bg_sp_fs_highlight_list_pane_cp03

0x94d7,	// (0x00084792) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x94d7,	// (0x00084792) list_single_sp_fs_schedule_track_pane_g1

0x94e3,	// (0x0008479e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x94e3,	// (0x0008479e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd1f,	// (0x0008afda) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd1f,	// (0x0008afda) list_single_sp_fs_schedule_track_pane_g

0x94ef,	// (0x000847aa) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x94ef,	// (0x000847aa) list_single_sp_fs_schedule_track_pane_t1

0x9507,	// (0x000847c2) sp_fs_schedule_track_pane_ParamLimits

0x9507,	// (0x000847c2) sp_fs_schedule_track_pane

0xe967,	// (0x00089c22) sp_fs_schedule_track_pane_g1

0xe96f,	// (0x00089c2a) sp_fs_schedule_track_pane_g2

0xe977,	// (0x00089c32) sp_fs_schedule_track_pane_g3

0xe97f,	// (0x00089c3a) sp_fs_schedule_track_pane_g4

0xe987,	// (0x00089c42) sp_fs_schedule_track_pane_g5

0x0004,

0x0bb5,	// (0x0007be70) sp_fs_schedule_track_pane_g

0xd6b6,	// (0x00088971) bg_sp_fs_schedule_viewer_highlight_g1

0xac26,	// (0x00085ee1) bg_sp_fs_schedule_viewer_highlight_g2

0xd6be,	// (0x00088979) bg_sp_fs_schedule_viewer_highlight_g3

0xd6c6,	// (0x00088981) bg_sp_fs_schedule_viewer_highlight_g4

0xd916,	// (0x00088bd1) bg_sp_fs_schedule_viewer_highlight_g5

0xd6d6,	// (0x00088991) bg_sp_fs_schedule_viewer_highlight_g6

0xd6de,	// (0x00088999) bg_sp_fs_schedule_viewer_highlight_g7

0xd6e6,	// (0x000889a1) bg_sp_fs_schedule_viewer_highlight_g8

0xac06,	// (0x00085ec1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd24,	// (0x0008afdf) bg_sp_fs_schedule_viewer_highlight_g

0xa03b,	// (0x000852f6) bg_main_sp_fs_ribbon_pane

0x9517,	// (0x000847d2) main_sp_fs_ribbon_pane_g1

0xe98f,	// (0x00089c4a) main_sp_fs_ribbon_pane_t1

0x9520,	// (0x000847db) main_sp_fs_ribbon_pane_t2

0xe99e,	// (0x00089c59) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd37,	// (0x0008aff2) main_sp_fs_ribbon_pane_t

0xe9ad,	// (0x00089c68) main_sp_fs_ribbon_scheduler_pane

0xe9b5,	// (0x00089c70) bg_main_sp_fs_ribbon_pane_g1

0xe9be,	// (0x00089c79) bg_main_sp_fs_ribbon_pane_g2

0xe9c7,	// (0x00089c82) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0bda,	// (0x0007be95) bg_main_sp_fs_ribbon_pane_g

0xe9cf,	// (0x00089c8a) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d8,	// (0x00089c93) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e1,	// (0x00089c9c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0be1,	// (0x0007be9c) main_sp_fs_ribbon_scheduler_pane_g

0xe9ea,	// (0x00089ca5) list_cale_mrui_pane

0x952f,	// (0x000847ea) sp_fs_scroll_pane_cp07_ParamLimits

0x952f,	// (0x000847ea) sp_fs_scroll_pane_cp07

0x954b,	// (0x00084806) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x954b,	// (0x00084806) bg_sp_fs_schedule_viewer_highlight

0xe9f7,	// (0x00089cb2) list_single_sp_fs_schedule_track_pane_cp01

0xe9ff,	// (0x00089cba) list_sp_fs_schedule_track_pane

0xea07,	// (0x00089cc2) sp_fs_scroll_pane_cp06_ParamLimits

0xea07,	// (0x00089cc2) sp_fs_scroll_pane_cp06

0xcc6d,	// (0x00087f28) bgmain_sp_fs_calendar_pane_g1

0x1c56,	// (0x0007cf11) list_single_cale_mrui_pane_ParamLimits

0x1c56,	// (0x0007cf11) list_single_cale_mrui_pane

0x1c84,	// (0x0007cf3f) list_single_cale_mrui_row_pane_ParamLimits

0x1c84,	// (0x0007cf3f) list_single_cale_mrui_row_pane

0x1c91,	// (0x0007cf4c) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1c91,	// (0x0007cf4c) list_single_cale_mrui_row_pane_g1

0x1cc9,	// (0x0007cf84) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1cc9,	// (0x0007cf84) list_single_cale_mrui_row_pane_t1

0x1cdb,	// (0x0007cf96) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1cdb,	// (0x0007cf96) list_single_cale_mrui_row_pane_t2

0x1d41,	// (0x0007cffc) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1d41,	// (0x0007cffc) list_single_cale_mrui_row_pane_t3

0x1d70,	// (0x0007d02b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1d70,	// (0x0007d02b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd45,	// (0x0008b000) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd45,	// (0x0008b000) list_single_cale_mrui_row_pane_t

0x1d9f,	// (0x0007d05a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1d9f,	// (0x0007d05a) list_single_cmail_header_editor_pane_bg_cp01

0x1dbf,	// (0x0007d07a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1dbf,	// (0x0007d07a) list_single_cmail_header_editor_pane_bg_cp02

0x9558,	// (0x00084813) main_radioblah_text_pane_t1_ParamLimits

0x9558,	// (0x00084813) main_radioblah_text_pane_t1

0xea26,	// (0x00089ce1) cam6_indi_pane_cp01

0xea2e,	// (0x00089ce9) cam6_mode_pane_cp01

0xea36,	// (0x00089cf1) cam6_pano_pane

0xea3f,	// (0x00089cfa) cam6_zoom_pane_cp01

0xea47,	// (0x00089d02) cam6_pano_image_pane

0xea52,	// (0x00089d0d) cam6_pano_pane_g1

0xe32b,	// (0x000895e6) cam6_pano_pane_g2

0xea5b,	// (0x00089d16) cam6_pano_pane_g3

0xea64,	// (0x00089d1f) cam6_pano_pane_g4

0xd218,	// (0x000884d3) cam6_pano_pane_g5

0xea6d,	// (0x00089d28) cam6_pano_pane_g6

0xea77,	// (0x00089d32) cam6_pano_pane_g7

0xea7f,	// (0x00089d3a) cam6_pano_pane_g8

0xea88,	// (0x00089d43) cam6_pano_pane_g9

0x0008,

0xfd4e,	// (0x0008b009) cam6_pano_pane_g

0xa03b,	// (0x000852f6) main_browser_tag_pane

0xe8e6,	// (0x00089ba1) grid_navstr_albumart_pane

0xea93,	// (0x00089d4e) cell_navstr_albumart_pane_ParamLimits

0xea93,	// (0x00089d4e) cell_navstr_albumart_pane

0xeab3,	// (0x00089d6e) cell_navstr_albumart_pane_g1

0xc62a,	// (0x000878e5) cell_navstr_albumart_pane_g2

0xc63a,	// (0x000878f5) cell_navstr_albumart_pane_g3

0xc632,	// (0x000878ed) cell_navstr_albumart_pane_g4

0x0003,

0xfd61,	// (0x0008b01c) cell_navstr_albumart_pane_g

0x9573,	// (0x0008482e) bt_list_pane_ParamLimits

0x9573,	// (0x0008482e) bt_list_pane

0x9594,	// (0x0008484f) bt_list_pane_t1

0x95a3,	// (0x0008485e) bt_list_pane_t2

0x0001,

0xfd6a,	// (0x0008b025) bt_list_pane_t

0xa03b,	// (0x000852f6) main_cale_prevew_pane

0x95b2,	// (0x0008486d) popup_cale_preview_window_ParamLimits

0x95b2,	// (0x0008486d) popup_cale_preview_window

0xa9b2,	// (0x00085c6d) bg_popup_preview_window_pane_cp05_ParamLimits

0xa9b2,	// (0x00085c6d) bg_popup_preview_window_pane_cp05

0xeabb,	// (0x00089d76) list_cale_preview_pane_ParamLimits

0xeabb,	// (0x00089d76) list_cale_preview_pane

0x95cb,	// (0x00084886) list_double_cale_preview_pane_ParamLimits

0x95cb,	// (0x00084886) list_double_cale_preview_pane

0x95dd,	// (0x00084898) list_single_cale_preview_pane_ParamLimits

0x95dd,	// (0x00084898) list_single_cale_preview_pane

0x95f1,	// (0x000848ac) list_single_cale_preview_pane_g1

0x95f9,	// (0x000848b4) list_single_cale_preview_pane_t1_ParamLimits

0x95f9,	// (0x000848b4) list_single_cale_preview_pane_t1

0x960e,	// (0x000848c9) list_double_cale_preview_pane_g1

0x9616,	// (0x000848d1) list_double_cale_preview_pane_t1_ParamLimits

0x9616,	// (0x000848d1) list_double_cale_preview_pane_t1

0x962b,	// (0x000848e6) list_double_cale_preview_pane_t2_ParamLimits

0x962b,	// (0x000848e6) list_double_cale_preview_pane_t2

0x0001,

0xfd6f,	// (0x0008b02a) list_double_cale_preview_pane_t_ParamLimits

0xfd6f,	// (0x0008b02a) list_double_cale_preview_pane_t

0xa03b,	// (0x000852f6) main_ezdial_pane

0xa9b2,	// (0x00085c6d) main_sp_fs_email_pane_ParamLimits

0x919d,	// (0x00084458) cmail_ddmenu_btn01_pane_ParamLimits

0x919d,	// (0x00084458) cmail_ddmenu_btn01_pane

0x91b2,	// (0x0008446d) cmail_ddmenu_btn02_pane_ParamLimits

0x91b2,	// (0x0008446d) cmail_ddmenu_btn02_pane

0x91ca,	// (0x00084485) cmail_ddmenu_btn03_pane_ParamLimits

0x91ca,	// (0x00084485) cmail_ddmenu_btn03_pane

0x91f2,	// (0x000844ad) main_sp_fs_ctrlbar_pane_ParamLimits

0x9208,	// (0x000844c3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9331,	// (0x000845ec) list_cmail_body_pane_ParamLimits

0xe866,	// (0x00089b21) bg_button_pane_cp12

0xe86f,	// (0x00089b2a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe86f,	// (0x00089b2a) list_single_cmail_header_detail_pane_g3

0x1b9d,	// (0x0007ce58) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1b9d,	// (0x0007ce58) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd10,	// (0x0008afcb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd10,	// (0x0008afcb) list_single_cmail_header_detail_pane_t

0x1bf5,	// (0x0007ceb0) phacti_term_pane_t2_ParamLimits

0x1bf5,	// (0x0007ceb0) phacti_term_pane_t2

0x0001,

0xfd1a,	// (0x0008afd5) phacti_term_pane_t_ParamLimits

0xfd1a,	// (0x0008afd5) phacti_term_pane_t

0xeac7,	// (0x00089d82) aid_size_list_single_double

0x9643,	// (0x000848fe) popup_ezdial_listscroll_window

0x9667,	// (0x00084922) popup_number_entry_window_cp01

0xa969,	// (0x00085c24) bg_popup_call_pane_cp09

0xead3,	// (0x00089d8e) ezdial_list_pane

0xeadb,	// (0x00089d96) scroll_pane_cp23

0xca46,	// (0x00087d01) bg_button_pane_cp028_ParamLimits

0xca46,	// (0x00087d01) bg_button_pane_cp028

0x9675,	// (0x00084930) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9675,	// (0x00084930) cmail_ddmenu_btn01_pane_g1

0x9685,	// (0x00084940) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9685,	// (0x00084940) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd74,	// (0x0008b02f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd74,	// (0x0008b02f) cmail_ddmenu_btn01_pane_g

0xeae3,	// (0x00089d9e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae3,	// (0x00089d9e) cmail_ddmenu_btn01_pane_t1

0xc859,	// (0x00087b14) bg_button_pane_cp029_ParamLimits

0xc859,	// (0x00087b14) bg_button_pane_cp029

0x9685,	// (0x00084940) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9685,	// (0x00084940) cmail_ddmenu_btn02_pane_g1

0x969e,	// (0x00084959) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x969e,	// (0x00084959) cmail_ddmenu_btn02_pane_t1

0xed61,	// (0x0008a01c) bg_button_pane_cp031_ParamLimits

0xed61,	// (0x0008a01c) bg_button_pane_cp031

0x9685,	// (0x00084940) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9685,	// (0x00084940) cmail_ddmenu_btn03_pane_g1

0x969e,	// (0x00084959) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x969e,	// (0x00084959) cmail_ddmenu_btn03_pane_t1

0x6ffb,	// (0x000822b6) cell_dialer2_keypad_pane_t1_ParamLimits

0x7015,	// (0x000822d0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7015,	// (0x000822d0) cell_dialer2_keypad_pane_t1_copy1

0x8b15,	// (0x00083dd0) ncimui_group_button_pane

0xa9b2,	// (0x00085c6d) main_sp_fs_calendar_pane_ParamLimits

0x9354,	// (0x0008460f) list_single_cmail_header_caption_pane_ParamLimits

0x1c0a,	// (0x0007cec5) aid_recal_txt_sm_pane

0xa03b,	// (0x000852f6) mian_recal_day_pane

0x1c44,	// (0x0007ceff) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf8,	// (0x00089db3) list_recal_day_pane

0x1df6,	// (0x0007d0b1) list_single_recal_day_pane_ParamLimits

0x1df6,	// (0x0007d0b1) list_single_recal_day_pane

0xeb1f,	// (0x00089dda) list_single_recal_day_pane_g1_ParamLimits

0xeb1f,	// (0x00089dda) list_single_recal_day_pane_g1

0x1e08,	// (0x0007d0c3) list_single_recal_day_pane_g2_ParamLimits

0x1e08,	// (0x0007d0c3) list_single_recal_day_pane_g2

0x1e18,	// (0x0007d0d3) list_single_recal_day_pane_g3_ParamLimits

0x1e18,	// (0x0007d0d3) list_single_recal_day_pane_g3

0x1e24,	// (0x0007d0df) list_single_recal_day_pane_g4_ParamLimits

0x1e24,	// (0x0007d0df) list_single_recal_day_pane_g4

0x1e3a,	// (0x0007d0f5) list_single_recal_day_pane_g5_ParamLimits

0x1e3a,	// (0x0007d0f5) list_single_recal_day_pane_g5

0x1e54,	// (0x0007d10f) list_single_recal_day_pane_g6_ParamLimits

0x1e54,	// (0x0007d10f) list_single_recal_day_pane_g6

0x0004,

0xfd83,	// (0x0008b03e) list_single_recal_day_pane_g_ParamLimits

0xfd83,	// (0x0008b03e) list_single_recal_day_pane_g

0x1e68,	// (0x0007d123) list_single_recal_day_pane_t1

0x1e7a,	// (0x0007d135) list_single_recal_day_pane_t2

0x0001,

0xfd8e,	// (0x0008b049) list_single_recal_day_pane_t

0x96c2,	// (0x0008497d) ncimui_query_button_pane_ParamLimits

0x96c2,	// (0x0008497d) ncimui_query_button_pane

0x96d2,	// (0x0008498d) ncimui_query_button_pane_t1_ParamLimits

0x96d2,	// (0x0008498d) ncimui_query_button_pane_t1

0xeb2b,	// (0x00089de6) ncimui_query_button_pane_t2_ParamLimits

0xeb2b,	// (0x00089de6) ncimui_query_button_pane_t2

0x0001,

0xfd93,	// (0x0008b04e) ncimui_query_button_pane_t_ParamLimits

0xfd93,	// (0x0008b04e) ncimui_query_button_pane_t

0x96e5,	// (0x000849a0) query_button_pane_ParamLimits

0x96e5,	// (0x000849a0) query_button_pane

0xa03b,	// (0x000852f6) bg_button_pane_cp0028

0xeb3e,	// (0x00089df9) query_button_pane_t1

0x53af,	// (0x0008066a) main_tport_pane_ParamLimits

0x923b,	// (0x000844f6) bg_popup_window_pane_cp01_ParamLimits

0x923b,	// (0x000844f6) bg_popup_window_pane_cp01

0x9249,	// (0x00084504) heading_pane_cp08_ParamLimits

0x9249,	// (0x00084504) heading_pane_cp08

0x9257,	// (0x00084512) heading_pane_cp07_ParamLimits

0x9257,	// (0x00084512) heading_pane_cp07

0x92c6,	// (0x00084581) cell_tport_appsw_pane_g2

0x0002,

0xfcfd,	// (0x0008afb8) cell_tport_appsw_pane_g

0x0f93,	// (0x0007c24e) input_candi_list_open_g1

0xade9,	// (0x000860a4) list_cale_time_pane_g6_ParamLimits

0xade9,	// (0x000860a4) list_cale_time_pane_g6

0x5e36,	// (0x000810f1) aid_size_touch_calib_1_ParamLimits

0x5e36,	// (0x000810f1) aid_size_touch_calib_1

0x5e42,	// (0x000810fd) aid_size_touch_calib_2_ParamLimits

0x5e42,	// (0x000810fd) aid_size_touch_calib_2

0x5e50,	// (0x0008110b) aid_size_touch_calib_3_ParamLimits

0x5e50,	// (0x0008110b) aid_size_touch_calib_3

0x5e60,	// (0x0008111b) aid_size_touch_calib_4_ParamLimits

0x5e60,	// (0x0008111b) aid_size_touch_calib_4

0x5e6e,	// (0x00081129) main_touch_calib_button_group_pane_ParamLimits

0x5e6e,	// (0x00081129) main_touch_calib_button_group_pane

0x5e7c,	// (0x00081137) main_touch_calib_pane_g1_ParamLimits

0x5e88,	// (0x00081143) main_touch_calib_pane_g2_ParamLimits

0x5e94,	// (0x0008114f) main_touch_calib_pane_g3_ParamLimits

0x5ea0,	// (0x0008115b) main_touch_calib_pane_g4_ParamLimits

0xf75f,	// (0x0008aa1a) main_touch_calib_pane_g_ParamLimits

0x5eac,	// (0x00081167) main_touch_calib_pane_t1_ParamLimits

0x5ec5,	// (0x00081180) main_touch_calib_pane_t2_ParamLimits

0x5ede,	// (0x00081199) main_touch_calib_pane_t3_ParamLimits

0x5ef4,	// (0x000811af) main_touch_calib_pane_t4_ParamLimits

0x5f0a,	// (0x000811c5) main_touch_calib_pane_t5_ParamLimits

0xf768,	// (0x0008aa23) main_touch_calib_pane_t_ParamLimits

0xcfbb,	// (0x00088276) list_single_fp_cale_pane_g3_ParamLimits

0xcfbb,	// (0x00088276) list_single_fp_cale_pane_g3

0xa9b2,	// (0x00085c6d) bg_button_pane_cp012_ParamLimits

0xa9b2,	// (0x00085c6d) bg_vkb2_func_pane_cp03_ParamLimits

0x7dc0,	// (0x0008307b) cell_vitu2_function_top_pane_g1_ParamLimits

0xa9b2,	// (0x00085c6d) bg_vkb2_func_pane_cp04_ParamLimits

0x8a9d,	// (0x00083d58) main_ncimui_button_group_pane_ParamLimits

0x8a9d,	// (0x00083d58) main_ncimui_button_group_pane

0x8b03,	// (0x00083dbe) main_ncimui_pane_t3_ParamLimits

0x8b03,	// (0x00083dbe) main_ncimui_pane_t3

0xe8fc,	// (0x00089bb7) phacti_button_group_pane

0xeac7,	// (0x00089d82) aid_size_list_single_double_ParamLimits

0x9643,	// (0x000848fe) popup_ezdial_listscroll_window_ParamLimits

0x9667,	// (0x00084922) popup_number_entry_window_cp01_ParamLimits

0x96f2,	// (0x000849ad) phacti_button_pane_ParamLimits

0x96f2,	// (0x000849ad) phacti_button_pane

0xa03b,	// (0x000852f6) bg_button_pane_cp14

0xeb4c,	// (0x00089e07) phacti_button_pane_t1

0x9703,	// (0x000849be) main_touch_calib_button_pane_ParamLimits

0x9703,	// (0x000849be) main_touch_calib_button_pane

0xa792,	// (0x00085a4d) bg_button_pane_cp18_ParamLimits

0xa792,	// (0x00085a4d) bg_button_pane_cp18

0xeb5a,	// (0x00089e15) main_touch_calib_button_pane_t1_ParamLimits

0xeb5a,	// (0x00089e15) main_touch_calib_button_pane_t1

0xeb70,	// (0x00089e2b) main_touch_calib_button_pane_t2_ParamLimits

0xeb70,	// (0x00089e2b) main_touch_calib_button_pane_t2

0x0001,

0x0c42,	// (0x0007befd) main_touch_calib_button_pane_t_ParamLimits

0x0c42,	// (0x0007befd) main_touch_calib_button_pane_t

0xa03b,	// (0x000852f6) cell_ncimui_button_pane

0xa03b,	// (0x000852f6) bg_button_pane_cp032

0xeb8e,	// (0x00089e49) cell_ncimui_button_pane_t1

0x7071,	// (0x0008232c) image3_infobar_pane_ParamLimits

0x7071,	// (0x0008232c) image3_infobar_pane

0x8e7c,	// (0x00084137) fs_bigclock_status_pane_ParamLimits

0x8e7c,	// (0x00084137) fs_bigclock_status_pane

0x8e89,	// (0x00084144) main_fs_bigclock_clock_pane_ParamLimits

0x8e89,	// (0x00084144) main_fs_bigclock_clock_pane

0x8ea3,	// (0x0008415e) main_fs_bigclock_indi_pane_ParamLimits

0x8ea3,	// (0x0008415e) main_fs_bigclock_indi_pane

0x8ecb,	// (0x00084186) main_fs_bigclock_swipe_pane_ParamLimits

0x8ecb,	// (0x00084186) main_fs_bigclock_swipe_pane

0xa03b,	// (0x000852f6) main_fs_clock_dumped_data

0xe438,	// (0x000896f3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe438,	// (0x000896f3) list_single_fs_bigclock_indicator_pane_g1

0xe454,	// (0x0008970f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe454,	// (0x0008970f) list_single_fs_bigclock_indicator_pane_g2

0xe46e,	// (0x00089729) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe46e,	// (0x00089729) list_single_fs_bigclock_indicator_pane_g3

0xe488,	// (0x00089743) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe488,	// (0x00089743) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0a6a,	// (0x0007bd25) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0a6a,	// (0x0007bd25) list_single_fs_bigclock_indicator_pane_g

0xe4b3,	// (0x0008976e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b3,	// (0x0008976e) list_single_fs_bigclock_indicator_pane_t1

0xe4db,	// (0x00089796) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4db,	// (0x00089796) list_single_fs_bigclock_indicator_pane_t2

0xe503,	// (0x000897be) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe503,	// (0x000897be) list_single_fs_bigclock_indicator_pane_t3

0xe52b,	// (0x000897e6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52b,	// (0x000897e6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0a75,	// (0x0007bd30) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0a75,	// (0x0007bd30) list_single_fs_bigclock_indicator_pane_t

0xeb9c,	// (0x00089e57) image3_infobar_fav_pane_ParamLimits

0xeb9c,	// (0x00089e57) image3_infobar_fav_pane

0xebac,	// (0x00089e67) image3_infobar_loc_pane_ParamLimits

0xebac,	// (0x00089e67) image3_infobar_loc_pane

0xebc0,	// (0x00089e7b) image3_infobar_time_pane_ParamLimits

0xebc0,	// (0x00089e7b) image3_infobar_time_pane

0xcc6d,	// (0x00087f28) image3_infobar_time_pane_g1

0xebd0,	// (0x00089e8b) image3_infobar_time_pane_t1

0xcc6d,	// (0x00087f28) image3_infobar_loc_pane_g1

0xebde,	// (0x00089e99) image3_infobar_loc_pane_g2

0x0001,

0xfd98,	// (0x0008b053) image3_infobar_loc_pane_g

0xebe6,	// (0x00089ea1) image3_infobar_loc_pane_t1

0xcc6d,	// (0x00087f28) image3_infobar_fav_pane_g1

0xebf4,	// (0x00089eaf) image3_infobar_fav_pane_g2

0x0001,

0xfd9d,	// (0x0008b058) image3_infobar_fav_pane_g

0xebfc,	// (0x00089eb7) fs_bigclock_status_battery_pane

0xec05,	// (0x00089ec0) fs_bigclock_status_signal_pane

0xec0e,	// (0x00089ec9) fs_bigclock_status_title_pane

0xec17,	// (0x00089ed2) fs_bigclock_status_signal_pane_g1

0xec20,	// (0x00089edb) fs_bigclock_status_signal_pane_g2

0x0001,

0x0c51,	// (0x0007bf0c) fs_bigclock_status_signal_pane_g

0xec28,	// (0x00089ee3) fs_bigclock_status_battery_pane_g1

0xec31,	// (0x00089eec) fs_bigclock_status_battery_pane_g2

0x0001,

0x0c56,	// (0x0007bf11) fs_bigclock_status_battery_pane_g

0xec39,	// (0x00089ef4) fs_bigclock_status_title_pane_t1

0xcc6d,	// (0x00087f28) main_fs_bigclock_clock_pane_g1

0xec47,	// (0x00089f02) main_fs_bigclock_clock_pane_g2

0xec50,	// (0x00089f0b) main_fs_bigclock_clock_pane_g3

0xec50,	// (0x00089f0b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfda2,	// (0x0008b05d) main_fs_bigclock_clock_pane_g

0xec58,	// (0x00089f13) main_fs_bigclock_clock_pane_t1

0x9713,	// (0x000849ce) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdab,	// (0x0008b066) main_fs_bigclock_clock_pane_t

0xec66,	// (0x00089f21) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec66,	// (0x00089f21) list_single_fs_bigclock_indicator_pane

0xec77,	// (0x00089f32) list_single_fs_bigclock_pane_ParamLimits

0xec77,	// (0x00089f32) list_single_fs_bigclock_pane

0xec9d,	// (0x00089f58) main_fs_bigclock_indicator_pane_t1

0xecac,	// (0x00089f67) list_single_fs_bigclock_pane_g1

0xecb4,	// (0x00089f6f) list_single_fs_bigclock_pane_t1

0xcc6d,	// (0x00087f28) main_fs_bigclock_swipe_pane_g1

0xecf7,	// (0x00089fb2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdb7,	// (0x0008b072) main_fs_bigclock_swipe_pane_g

0xecff,	// (0x00089fba) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecff,	// (0x00089fba) main_fs_bigclock_swipe_pane_t1

0x4422,	// (0x0007f6dd) call_type_pane_ParamLimits

0xa03b,	// (0x000852f6) main_btmg_pane

0x1cbd,	// (0x0007cf78) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1cbd,	// (0x0007cf78) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd3e,	// (0x0008aff9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd3e,	// (0x0008aff9) list_single_cale_mrui_row_pane_g

0x1de5,	// (0x0007d0a0) list_recal_vselct_arw_lo_pane

0xeb17,	// (0x00089dd2) list_recal_vselct_arw_up_pane

0x1ded,	// (0x0007d0a8) list_recal_vselct_pane

0x9766,	// (0x00084a21) btmg_button_pane

0x9772,	// (0x00084a2d) main_btmg_pane_g1

0xa03b,	// (0x000852f6) bg_button_pane_cp044

0xed1c,	// (0x00089fd7) btmg_button_pane_t1

0xc845,	// (0x00087b00) aid_listscroll_gen

0xa9b2,	// (0x00085c6d) main_cntbar_detail_pane

0xe848,	// (0x00089b03) list_cmail_folder_pane

0xcc3a,	// (0x00087ef5) sp_fs_scroll_pane_cp03_ParamLimits

0x1e8c,	// (0x0007d147) list_single_fs_dyc_pane_cp01_ParamLimits

0x1e8c,	// (0x0007d147) list_single_fs_dyc_pane_cp01

0xed2a,	// (0x00089fe5) aid_size_cmail_indent

0x1eb4,	// (0x0007d16f) list_single_dyc_row_pane_cp01

0x979a,	// (0x00084a55) cntbar_detail_list_pane_ParamLimits

0x979a,	// (0x00084a55) cntbar_detail_list_pane

0x97d4,	// (0x00084a8f) main_cntbar_detail_cont_pane_ParamLimits

0x97d4,	// (0x00084a8f) main_cntbar_detail_cont_pane

0x4416,	// (0x0007f6d1) scroll_pane_cp032_ParamLimits

0x4416,	// (0x0007f6d1) scroll_pane_cp032

0x97e0,	// (0x00084a9b) cntbar_detail_list_event_pane_ParamLimits

0x97e0,	// (0x00084a9b) cntbar_detail_list_event_pane

0x97a6,	// (0x00084a61) cntbar_detail_list_shct_pane

0xac74,	// (0x00085f2f) aid_list_gen

0xed33,	// (0x00089fee) aid_scroll

0xed3c,	// (0x00089ff7) aid_size_touch_scroll_bar

0x1429,	// (0x0007c6e4) aid_list_double

0x97f4,	// (0x00084aaf) aid_list_single

0x835c,	// (0x00083617) aid_list_single_lg

0x1ebd,	// (0x0007d178) aid_list_z_g_a_sm

0x97fd,	// (0x00084ab8) aid_list_z_g_d

0x1ec5,	// (0x0007d180) aid_txt_z_prm

0x1ed3,	// (0x0007d18e) aid_txt_z_prm_cp01

0x1ee1,	// (0x0007d19c) aid_txt_z_sec

0x9805,	// (0x00084ac0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9805,	// (0x00084ac0) main_cntbar_detail_cont_pane_g1

0x9812,	// (0x00084acd) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9812,	// (0x00084acd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdbc,	// (0x0008b077) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdbc,	// (0x0008b077) main_cntbar_detail_cont_pane_g

0xed45,	// (0x0008a000) main_cntbar_detail_cont_pane_t1

0xed53,	// (0x0008a00e) main_cntbar_detail_cont_pane_t2

0xed6f,	// (0x0008a02a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdc1,	// (0x0008b07c) main_cntbar_detail_cont_pane_t

0x981e,	// (0x00084ad9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x981e,	// (0x00084ad9) cell_cntbar_detail_list_shct_pane

0xed7d,	// (0x0008a038) cntbar_detail_list_shct_pane_g1

0xed86,	// (0x0008a041) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdc8,	// (0x0008b083) cntbar_detail_list_shct_pane_g

0x9832,	// (0x00084aed) cntbar_detail_list_event_pane_g1_ParamLimits

0x9832,	// (0x00084aed) cntbar_detail_list_event_pane_g1

0x983e,	// (0x00084af9) cntbar_detail_list_event_pane_g2_ParamLimits

0x983e,	// (0x00084af9) cntbar_detail_list_event_pane_g2

0x0005,

0xfdcd,	// (0x0008b088) cntbar_detail_list_event_pane_g_ParamLimits

0xfdcd,	// (0x0008b088) cntbar_detail_list_event_pane_g

0x98aa,	// (0x00084b65) cntbar_detail_list_event_pane_t1_ParamLimits

0x98aa,	// (0x00084b65) cntbar_detail_list_event_pane_t1

0x98bf,	// (0x00084b7a) cntbar_detail_list_event_pane_t2_ParamLimits

0x98bf,	// (0x00084b7a) cntbar_detail_list_event_pane_t2

0x0002,

0xfdda,	// (0x0008b095) cntbar_detail_list_event_pane_t_ParamLimits

0xfdda,	// (0x0008b095) cntbar_detail_list_event_pane_t

0xcc6d,	// (0x00087f28) cell_cntbar_detail_list_shct_pane_g1

0xb3c0,	// (0x0008667b) navi_pane_mv_g3

0xa9b2,	// (0x00085c6d) main_cntbar_detail_pane_ParamLimits

0xa03b,	// (0x000852f6) main_notif_wgt_pane

0x6d25,	// (0x00081fe0) aid_tch_main_mp4_pane_g4

0x6f5a,	// (0x00082215) popup_slider_window_cp02

0x1ddb,	// (0x0007d096) list_recal_day_event_pane

0x977a,	// (0x00084a35) cntbar_detail_btn_pane_ParamLimits

0x977a,	// (0x00084a35) cntbar_detail_btn_pane

0x978a,	// (0x00084a45) cntbar_detail_btn_pane_cp01_ParamLimits

0x978a,	// (0x00084a45) cntbar_detail_btn_pane_cp01

0x97a6,	// (0x00084a61) cntbar_detail_list_shct_pane_ParamLimits

0x97b2,	// (0x00084a6d) cntbar_detail_pane_g1_ParamLimits

0x97b2,	// (0x00084a6d) cntbar_detail_pane_g1

0x97be,	// (0x00084a79) cntbar_detail_pane_t1_ParamLimits

0x97be,	// (0x00084a79) cntbar_detail_pane_t1

0x984a,	// (0x00084b05) cntbar_detail_list_event_pane_g3_ParamLimits

0x984a,	// (0x00084b05) cntbar_detail_list_event_pane_g3

0x9862,	// (0x00084b1d) cntbar_detail_list_event_pane_g4_ParamLimits

0x9862,	// (0x00084b1d) cntbar_detail_list_event_pane_g4

0x987a,	// (0x00084b35) cntbar_detail_list_event_pane_g5_ParamLimits

0x987a,	// (0x00084b35) cntbar_detail_list_event_pane_g5

0x9892,	// (0x00084b4d) cntbar_detail_list_event_pane_g6_ParamLimits

0x9892,	// (0x00084b4d) cntbar_detail_list_event_pane_g6

0x98d4,	// (0x00084b8f) cntbar_detail_list_event_pane_t3_ParamLimits

0x98d4,	// (0x00084b8f) cntbar_detail_list_event_pane_t3

0x98e6,	// (0x00084ba1) popup_notif_wgt_window_ParamLimits

0x98e6,	// (0x00084ba1) popup_notif_wgt_window

0x98f6,	// (0x00084bb1) popup_submenu_window_cp01_ParamLimits

0x98f6,	// (0x00084bb1) popup_submenu_window_cp01

0xa969,	// (0x00085c24) bg_popup_window_pane_cp10

0xed8f,	// (0x0008a04a) listscroll_notif_wgt_pane

0xeda1,	// (0x0008a05c) list_notif_wgt_window

0xedaa,	// (0x0008a065) scroll_pane_cp033

0x9904,	// (0x00084bbf) list_notif_wgt_row_pane_ParamLimits

0x9904,	// (0x00084bbf) list_notif_wgt_row_pane

0xedb3,	// (0x0008a06e) aid_size_list_notif_wgt_del

0xedc0,	// (0x0008a07b) list_notif_wgt_row_pane_g1

0xedcc,	// (0x0008a087) list_notif_wgt_row_pane_g2

0xede0,	// (0x0008a09b) list_notif_wgt_row_pane_g3

0x0002,

0xfde1,	// (0x0008b09c) list_notif_wgt_row_pane_g

0xeded,	// (0x0008a0a8) list_notif_wgt_row_pane_t1

0xee03,	// (0x0008a0be) list_notif_wgt_row_pane_t2

0xee15,	// (0x0008a0d0) list_notif_wgt_row_pane_t3

0x0002,

0x0ca6,	// (0x0007bf61) list_notif_wgt_row_pane_t

0xd91e,	// (0x00088bd9) list_recal_day_event_pane_g1

0xee27,	// (0x0008a0e2) list_recal_day_event_pane_t1

0xa03b,	// (0x000852f6) bg_button_pane_cp045

0x9916,	// (0x00084bd1) cntbar_detail_btn_pane_t1

0xc859,	// (0x00087b14) main_callh_pane_ParamLimits

0xc859,	// (0x00087b14) main_callh_pane

0xa03b,	// (0x000852f6) main_coverflow0_pane

0xa03b,	// (0x000852f6) main_wgtman_pane

0x8ee3,	// (0x0008419e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8ee3,	// (0x0008419e) main_fs_bigclock_unlock_btn_pane

0x92be,	// (0x00084579) bg_button_pane_cp16

0x92ce,	// (0x00084589) cell_tport_appsw_pane_g3

0x9924,	// (0x00084bdf) cf0_flow_pane_ParamLimits

0x9924,	// (0x00084bdf) cf0_flow_pane

0xee36,	// (0x0008a0f1) listscroll_cf0_pane

0xee41,	// (0x0008a0fc) main_cf0_pane_g1

0x9933,	// (0x00084bee) main_cf0_pane_t1_ParamLimits

0x9933,	// (0x00084bee) main_cf0_pane_t1

0x9947,	// (0x00084c02) main_cf0_pane_t2_ParamLimits

0x9947,	// (0x00084c02) main_cf0_pane_t2

0x0001,

0xfde8,	// (0x0008b0a3) main_cf0_pane_t_ParamLimits

0xfde8,	// (0x0008b0a3) main_cf0_pane_t

0xee53,	// (0x0008a10e) scroll_pane_cp11

0x995b,	// (0x00084c16) cf0_flow_pane_g1

0x9963,	// (0x00084c1e) cf0_flow_pane_g2

0x0001,

0xfded,	// (0x0008b0a8) cf0_flow_pane_g

0x996b,	// (0x00084c26) cf0_flow_pane_t1

0xa03b,	// (0x000852f6) main_call6_pane

0xa03b,	// (0x000852f6) main_calllock_pane

0x9979,	// (0x00084c34) call6_btn_grp_pane_ParamLimits

0x9979,	// (0x00084c34) call6_btn_grp_pane

0x9988,	// (0x00084c43) call6_pane_g1_ParamLimits

0x9988,	// (0x00084c43) call6_pane_g1

0x9997,	// (0x00084c52) popup_call6_1st_window_ParamLimits

0x9997,	// (0x00084c52) popup_call6_1st_window

0x99a5,	// (0x00084c60) popup_call6_2nd_window_ParamLimits

0x99a5,	// (0x00084c60) popup_call6_2nd_window

0x99b3,	// (0x00084c6e) cell_call6_btn_pane_ParamLimits

0x99b3,	// (0x00084c6e) cell_call6_btn_pane

0xa969,	// (0x00085c24) bg_popup_call2_in_pane_cp03

0xee5e,	// (0x0008a119) popup_call6_1st_window_g1

0xee66,	// (0x0008a121) popup_call6_1st_window_g2

0xee6e,	// (0x0008a129) popup_call6_1st_window_g3

0x0002,

0x0cbc,	// (0x0007bf77) popup_call6_1st_window_g

0xee76,	// (0x0008a131) popup_call6_1st_window_t1

0xee85,	// (0x0008a140) popup_call6_1st_window_t2

0xee95,	// (0x0008a150) popup_call6_1st_window_t3

0x0002,

0x0cc3,	// (0x0007bf7e) popup_call6_1st_window_t

0xa969,	// (0x00085c24) bg_popup_call2_in_pane_cp04

0xee5e,	// (0x0008a119) popup_call6_2nd_window_g1

0xee66,	// (0x0008a121) popup_call6_2nd_window_g2

0xee6e,	// (0x0008a129) popup_call6_2nd_window_g3

0x0002,

0x0cbc,	// (0x0007bf77) popup_call6_2nd_window_g

0xee76,	// (0x0008a131) popup_call6_2nd_window_t1

0xa03b,	// (0x000852f6) bg_button_pane_cp15

0xeea5,	// (0x0008a160) cell_call6_btn_pane_g1

0xeeae,	// (0x0008a169) cell_call6_btn_pane_t1

0x99c2,	// (0x00084c7d) listscroll_wgtman_pane_ParamLimits

0x99c2,	// (0x00084c7d) listscroll_wgtman_pane

0x99de,	// (0x00084c99) wgtman_btn_pane_ParamLimits

0x99de,	// (0x00084c99) wgtman_btn_pane

0xb1d4,	// (0x0008648f) aid_scroll_copy1

0xeebd,	// (0x0008a178) list_wgtman_pane

0x9a13,	// (0x00084cce) wgtman_btn_pane_g1_ParamLimits

0x9a13,	// (0x00084cce) wgtman_btn_pane_g1

0x9a3b,	// (0x00084cf6) wgtman_btn_pane_t1_ParamLimits

0x9a3b,	// (0x00084cf6) wgtman_btn_pane_t1

0xeec7,	// (0x0008a182) wgtman_btn_pane_t2_ParamLimits

0xeec7,	// (0x0008a182) wgtman_btn_pane_t2

0x0001,

0xfdf2,	// (0x0008b0ad) wgtman_btn_pane_t_ParamLimits

0xfdf2,	// (0x0008b0ad) wgtman_btn_pane_t

0x9a72,	// (0x00084d2d) listrow_wgtman_pane_ParamLimits

0x9a72,	// (0x00084d2d) listrow_wgtman_pane

0x9a8e,	// (0x00084d49) listrow_wgtman_pane_g1

0x9a9b,	// (0x00084d56) listrow_wgtman_pane_g2

0x0001,

0xfdf7,	// (0x0008b0b2) listrow_wgtman_pane_g

0x1eef,	// (0x0007d1aa) listrow_wgtman_pane_t1

0x1f07,	// (0x0007d1c2) listrow_wgtman_pane_t2

0x0001,

0xfdfc,	// (0x0008b0b7) listrow_wgtman_pane_t

0x1f2d,	// (0x0007d1e8) wait_bar_pane_cp09

0xeede,	// (0x0008a199) main_calllock_btn_pane

0xeee8,	// (0x0008a1a3) main_calllock_pane_g1

0xa03b,	// (0x000852f6) bg_button_pane_cp17

0xeef3,	// (0x0008a1ae) main_calllock_btn_pane_g1

0xeefc,	// (0x0008a1b7) main_calllock_btn_pane_t1

0xa03b,	// (0x000852f6) main_dialer3_pane

0xa03b,	// (0x000852f6) main_fmrd2_pane

0xcc6d,	// (0x00087f28) main_fs_bigclock_unlock_btn_pane_g1

0xef13,	// (0x0008a1ce) main_fs_bigclock_unlock_btn_pane_t1

0x9ab9,	// (0x00084d74) area_fmrd2_info_pane_ParamLimits

0x9ab9,	// (0x00084d74) area_fmrd2_info_pane

0x9ac7,	// (0x00084d82) area_fmrd2_visual_pane_ParamLimits

0x9ac7,	// (0x00084d82) area_fmrd2_visual_pane

0x9ad5,	// (0x00084d90) fmrd2_indi_pane_ParamLimits

0x9ad5,	// (0x00084d90) fmrd2_indi_pane

0x9ae2,	// (0x00084d9d) area_fmrd2_visual_pane_g1

0x9aea,	// (0x00084da5) area_fmrd2_visual_pane_t1

0x9afa,	// (0x00084db5) area_fmrd2_visual_pane_t2

0x9b0a,	// (0x00084dc5) area_fmrd2_visual_pane_t3

0x0002,

0xfe06,	// (0x0008b0c1) area_fmrd2_visual_pane_t

0x9b1a,	// (0x00084dd5) area_fmrd2_info_pane_g1

0x9b22,	// (0x00084ddd) area_fmrd2_info_pane_t1

0x9b32,	// (0x00084ded) area_fmrd2_info_pane_t2

0x9b42,	// (0x00084dfd) area_fmrd2_info_pane_t3

0x9b52,	// (0x00084e0d) area_fmrd2_info_pane_t4

0x0003,

0xfe0d,	// (0x0008b0c8) area_fmrd2_info_pane_t

0x9b60,	// (0x00084e1b) fmrd2_indi_pane_t1

0x9b70,	// (0x00084e2b) fmrd2_indi_pane_t2

0x9b80,	// (0x00084e3b) fmrd2_indi_pane_t3

0x0002,

0xfe16,	// (0x0008b0d1) fmrd2_indi_pane_t

0xe497,	// (0x00089752) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe497,	// (0x00089752) list_single_fs_bigclock_indicator_pane_g5

0xe547,	// (0x00089802) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe547,	// (0x00089802) list_single_fs_bigclock_indicator_pane_t5

0x9467,	// (0x00084722) aid_cell_bcale_month_pane_ParamLimits

0x9467,	// (0x00084722) aid_cell_bcale_month_pane

0x9485,	// (0x00084740) bcale_month_pane_ParamLimits

0x9485,	// (0x00084740) bcale_month_pane

0x94a3,	// (0x0008475e) bcale_preview_pane_ParamLimits

0x94a3,	// (0x0008475e) bcale_preview_pane

0xecb4,	// (0x00089f6f) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd3,	// (0x00089f8e) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd3,	// (0x00089f8e) list_single_fs_bigclock_pane_t2

0x0001,

0x0c70,	// (0x0007bf2b) list_single_fs_bigclock_pane_t_ParamLimits

0x0c70,	// (0x0007bf2b) list_single_fs_bigclock_pane_t

0xef0b,	// (0x0008a1c6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe01,	// (0x0008b0bc) main_fs_bigclock_unlock_btn_pane_g

0x9b8e,	// (0x00084e49) aid_dia3_key_size_ParamLimits

0x9b8e,	// (0x00084e49) aid_dia3_key_size

0x9b9a,	// (0x00084e55) aid_dia3_listrow_size_ParamLimits

0x9b9a,	// (0x00084e55) aid_dia3_listrow_size

0x9baa,	// (0x00084e65) dia3_keypad_fun_pane_ParamLimits

0x9baa,	// (0x00084e65) dia3_keypad_fun_pane

0x9bbc,	// (0x00084e77) dia3_keypad_num_pane_ParamLimits

0x9bbc,	// (0x00084e77) dia3_keypad_num_pane

0x9bce,	// (0x00084e89) dia3_listscroll_pane_ParamLimits

0x9bce,	// (0x00084e89) dia3_listscroll_pane

0x9bdc,	// (0x00084e97) dia3_numentry_pane_ParamLimits

0x9bdc,	// (0x00084e97) dia3_numentry_pane

0xef21,	// (0x0008a1dc) dia3_list_pane

0xef2c,	// (0x0008a1e7) scroll_pane_cp12

0xa03b,	// (0x000852f6) bg_dia3_numentry_pane

0x9bea,	// (0x00084ea5) dia3_numentry_pane_t1

0x9bf9,	// (0x00084eb4) cell_dia3_key_num_pane

0x9c01,	// (0x00084ebc) cell_dia3_key0_fun_pane_ParamLimits

0x9c01,	// (0x00084ebc) cell_dia3_key0_fun_pane

0x9c0e,	// (0x00084ec9) cell_dia3_key1_fun_pane_ParamLimits

0x9c0e,	// (0x00084ec9) cell_dia3_key1_fun_pane

0x9c1b,	// (0x00084ed6) dia3_listrow_pane

0xe1a6,	// (0x00089461) bg_dia3_numentry_pane_g1

0xa03b,	// (0x000852f6) bg_button_pane_cp21

0xef37,	// (0x0008a1f2) cell_dia3_key_num_pane_t1

0xef45,	// (0x0008a200) cell_dia3_key_num_pane_t2

0xef54,	// (0x0008a20f) cell_dia3_key_num_pane_t3

0xef63,	// (0x0008a21e) cell_dia3_key_num_pane_t4

0x0003,

0xfe1d,	// (0x0008b0d8) cell_dia3_key_num_pane_t

0xa03b,	// (0x000852f6) bg_button_pane_cp19

0x9c28,	// (0x00084ee3) cell_dia3_key0_fun_pane_g1

0xa03b,	// (0x000852f6) bg_button_pane_cp20

0x9c30,	// (0x00084eeb) cell_dia3_key1_fun_pane_g1

0x9c38,	// (0x00084ef3) area_left_week_number_pane

0x9c4b,	// (0x00084f06) area_top_day_name_pane

0x9c59,	// (0x00084f14) frame_month_view_pane

0xef72,	// (0x0008a22d) grid_month_view_pane

0x9c6e,	// (0x00084f29) cell_top_day_name_pane_ParamLimits

0x9c6e,	// (0x00084f29) cell_top_day_name_pane

0x9c88,	// (0x00084f43) cell_area_left_week_number_pane_ParamLimits

0x9c88,	// (0x00084f43) cell_area_left_week_number_pane

0x9cab,	// (0x00084f66) cell_month_view_pane_ParamLimits

0x9cab,	// (0x00084f66) cell_month_view_pane

0xef80,	// (0x0008a23b) frm_month_g1

0x9cd7,	// (0x00084f92) frm_month_g2

0x9ce8,	// (0x00084fa3) frm_month_g3

0x9cf9,	// (0x00084fb4) frm_month_g4

0x9d0a,	// (0x00084fc5) frm_month_g5

0x9d1d,	// (0x00084fd8) frm_month_g6

0x9d30,	// (0x00084feb) frm_month_g7

0xef8d,	// (0x0008a248) frm_month_g8

0x9d43,	// (0x00084ffe) frm_month_g9

0x9d50,	// (0x0008500b) frm_month_g10

0x9d5d,	// (0x00085018) frm_month_g11

0x9d6a,	// (0x00085025) frm_month_g12

0x9d77,	// (0x00085032) frm_month_g13

0x9d84,	// (0x0008503f) frm_month_g14

0x9d93,	// (0x0008504e) frm_month_g15

0x9da2,	// (0x0008505d) frm_month_g16

0x000f,

0xfe26,	// (0x0008b0e1) frm_month_g

0xef9a,	// (0x0008a255) cell_top_day_name_pane_t1

0x9db1,	// (0x0008506c) cell_area_left_week_number_pane_g1

0x9dc0,	// (0x0008507b) cell_area_left_week_number_pane_t1

0xcebb,	// (0x00088176) cell_month_view_pane_g1

0x9dd6,	// (0x00085091) cell_month_view_pane_t1

0xa03b,	// (0x000852f6) main_fps_pane

0xe752,	// (0x00089a0d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe752,	// (0x00089a0d) cmail_ddmenu_btn02_pane_cp1

0xe76e,	// (0x00089a29) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76e,	// (0x00089a29) cmail_ddmenu_btn02_pane_cp2

0x9691,	// (0x0008494c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9691,	// (0x0008494c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd79,	// (0x0008b034) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd79,	// (0x0008b034) cmail_ddmenu_btn02_pane_g

0x96b0,	// (0x0008496b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x96b0,	// (0x0008496b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd7e,	// (0x0008b039) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd7e,	// (0x0008b039) cmail_ddmenu_btn02_pane_t

0x9dec,	// (0x000850a7) fps_text_pane_ParamLimits

0x9dec,	// (0x000850a7) fps_text_pane

0x9df9,	// (0x000850b4) main_fps_pane_g1_ParamLimits

0x9df9,	// (0x000850b4) main_fps_pane_g1

0x9e07,	// (0x000850c2) wait_bar_pane_cp010_ParamLimits

0x9e07,	// (0x000850c2) wait_bar_pane_cp010

0x9e13,	// (0x000850ce) fps_text_pane_t1_ParamLimits

0x9e13,	// (0x000850ce) fps_text_pane_t1

0x733c,	// (0x000825f7) cam4_image_uncrop_pane_g1

0x7345,	// (0x00082600) cam4_image_uncrop_pane_g2

0x734e,	// (0x00082609) cam4_image_uncrop_pane_g3

0x7357,	// (0x00082612) cam4_image_uncrop_pane_g4

0x0003,

0xf8fc,	// (0x0008abb7) cam4_image_uncrop_pane_g

0x9c1b,	// (0x00084ed6) dia3_listrow_pane_ParamLimits

0xa03b,	// (0x000852f6) main_phob2_pane

0x92a0,	// (0x0008455b) cell_tport_appsw_pane_cp02_ParamLimits

0x92a0,	// (0x0008455b) cell_tport_appsw_pane_cp02

0x92af,	// (0x0008456a) cell_tport_appsw_pane_cp03_ParamLimits

0x92af,	// (0x0008456a) cell_tport_appsw_pane_cp03

0xa03b,	// (0x000852f6) phob2_contact_card_pane

0xa03b,	// (0x000852f6) phob2_listscroll_pane

0xefad,	// (0x0008a268) phob2_list_pane

0xefb5,	// (0x0008a270) scroll_pane_cp034

0x9e2c,	// (0x000850e7) phob2_cc_data_pane_ParamLimits

0x9e2c,	// (0x000850e7) phob2_cc_data_pane

0x9e46,	// (0x00085101) phob2_cc_listscroll_pane_ParamLimits

0x9e46,	// (0x00085101) phob2_cc_listscroll_pane

0x9e60,	// (0x0008511b) list_double_large_graphic_phob2_pane_ParamLimits

0x9e60,	// (0x0008511b) list_double_large_graphic_phob2_pane

0x9e7f,	// (0x0008513a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9e7f,	// (0x0008513a) list_double_large_graphic_phob2_pane_g1

0x1f3f,	// (0x0007d1fa) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1f3f,	// (0x0007d1fa) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe47,	// (0x0008b102) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe47,	// (0x0008b102) list_double_large_graphic_phob2_pane_g

0x1f4b,	// (0x0007d206) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1f4b,	// (0x0007d206) list_double_large_graphic_phob2_pane_t1

0x1f61,	// (0x0007d21c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1f61,	// (0x0007d21c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe4c,	// (0x0008b107) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe4c,	// (0x0008b107) list_double_large_graphic_phob2_pane_t

0xa03b,	// (0x000852f6) list_highlight_pane_cp024

0x9e95,	// (0x00085150) phob2_cc_button_pane

0x9e9d,	// (0x00085158) phob2_cc_data_pane_g1_ParamLimits

0x9e9d,	// (0x00085158) phob2_cc_data_pane_g1

0x9ea9,	// (0x00085164) phob2_cc_data_pane_g2_ParamLimits

0x9ea9,	// (0x00085164) phob2_cc_data_pane_g2

0x0001,

0xfe51,	// (0x0008b10c) phob2_cc_data_pane_g_ParamLimits

0xfe51,	// (0x0008b10c) phob2_cc_data_pane_g

0x9eb5,	// (0x00085170) phob2_cc_data_pane_t1_ParamLimits

0x9eb5,	// (0x00085170) phob2_cc_data_pane_t1

0x9ec7,	// (0x00085182) phob2_cc_data_pane_t2_ParamLimits

0x9ec7,	// (0x00085182) phob2_cc_data_pane_t2

0x9ed9,	// (0x00085194) phob2_cc_data_pane_t3_ParamLimits

0x9ed9,	// (0x00085194) phob2_cc_data_pane_t3

0x0002,

0xfe56,	// (0x0008b111) phob2_cc_data_pane_t_ParamLimits

0xfe56,	// (0x0008b111) phob2_cc_data_pane_t

0xefbd,	// (0x0008a278) phob2_cc_list_pane_ParamLimits

0xefbd,	// (0x0008a278) phob2_cc_list_pane

0xda3d,	// (0x00088cf8) scroll_pane_cp035_ParamLimits

0xda3d,	// (0x00088cf8) scroll_pane_cp035

0xa9b2,	// (0x00085c6d) bg_button_pane_cp033

0xefc9,	// (0x0008a284) phob2_cc_button_pane_g1

0xefd5,	// (0x0008a290) phob2_cc_button_pane_t1

0xefea,	// (0x0008a2a5) phob2_cc_button_pane_t2

0x0001,

0xfe5d,	// (0x0008b118) phob2_cc_button_pane_t

0x9eeb,	// (0x000851a6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9eeb,	// (0x000851a6) list_double_large_graphic_phob2_cc_pane

0x9f14,	// (0x000851cf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f14,	// (0x000851cf) list_double_large_graphic_phob2_cc_pane_g1

0x1f76,	// (0x0007d231) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1f76,	// (0x0007d231) list_double_large_graphic_phob2_cc_pane_g2

0x1f85,	// (0x0007d240) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1f85,	// (0x0007d240) list_double_large_graphic_phob2_cc_pane_g3

0x1f94,	// (0x0007d24f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1f94,	// (0x0007d24f) list_double_large_graphic_phob2_cc_pane_g4

0x1fa5,	// (0x0007d260) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1fa5,	// (0x0007d260) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe62,	// (0x0008b11d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe62,	// (0x0008b11d) list_double_large_graphic_phob2_cc_pane_g

0x1fb4,	// (0x0007d26f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1fb4,	// (0x0007d26f) list_double_large_graphic_phob2_cc_pane_t1

0x1fdd,	// (0x0007d298) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1fdd,	// (0x0007d298) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe6d,	// (0x0008b128) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe6d,	// (0x0008b128) list_double_large_graphic_phob2_cc_pane_t

0xeffc,	// (0x0008a2b7) list_highlight_pane_cp025_ParamLimits

0xeffc,	// (0x0008a2b7) list_highlight_pane_cp025

0xa9b2,	// (0x00085c6d) bg_button_pane_cp033_ParamLimits

0xefc9,	// (0x0008a284) phob2_cc_button_pane_g1_ParamLimits

0xefd5,	// (0x0008a290) phob2_cc_button_pane_t1_ParamLimits

0xefea,	// (0x0008a2a5) phob2_cc_button_pane_t2_ParamLimits

0xfe5d,	// (0x0008b118) phob2_cc_button_pane_t_ParamLimits

0x22dd,	// (0x0007d598) popup_wgtman_window

0xd7d8,	// (0x00088a93) scroll_pane_cp038

0x99fb,	// (0x00084cb6) wgtman_btn_pane_cp_01_ParamLimits

0x99fb,	// (0x00084cb6) wgtman_btn_pane_cp_01

0xf00a,	// (0x0008a2c5) wgtman_content_pane

0xf013,	// (0x0008a2ce) wgtman_heading_pane

0xa03b,	// (0x000852f6) bg_heading_pane_cp02

0xf01c,	// (0x0008a2d7) wgtman_heading_pane_g1

0xf024,	// (0x0008a2df) wgtman_heading_pane_t1

0xf032,	// (0x0008a2ed) scroll_pane_cp036

0xf03a,	// (0x0008a2f5) wgtman_list_pane

0xe689,	// (0x00089944) wgtman_list_pane_t1_ParamLimits

0xe689,	// (0x00089944) wgtman_list_pane_t1

0x729b,	// (0x00082556) cam4_grid_pane

0x120e,	// (0x0007c4c9) bg_button_pane_cp015_ParamLimits

0x7f7f,	// (0x0008323a) bg_button_pane_cp016_ParamLimits

0x7f92,	// (0x0008324d) bg_button_pane_cp017_ParamLimits

0x1252,	// (0x0007c50d) popup_vitu2_query_window_g3_ParamLimits

0x1252,	// (0x0007c50d) popup_vitu2_query_window_g3

0x12cb,	// (0x0007c586) popup_vitu2_query_window_t6_ParamLimits

0x12cb,	// (0x0007c586) popup_vitu2_query_window_t6

0x12f6,	// (0x0007c5b1) popup_vitu2_query_window_t7_ParamLimits

0x12f6,	// (0x0007c5b1) popup_vitu2_query_window_t7

0xd8d3,	// (0x00088b8e) cam4_grid_pane_g1

0xd8dc,	// (0x00088b97) cam4_grid_pane_g2

0xf042,	// (0x0008a2fd) cam4_grid_pane_g3

0xf04b,	// (0x0008a306) cam4_grid_pane_g4

0x0003,

0xfe72,	// (0x0008b12d) cam4_grid_pane_g

0x3134,	// (0x0007e3ef) aid_placing_vt_slider_lsc_ParamLimits

0x3474,	// (0x0007e72f) vidtel_button_pane_ParamLimits

0x3474,	// (0x0007e72f) vidtel_button_pane

0xa03b,	// (0x000852f6) bg_button_pane_cp034

0x9f25,	// (0x000851e0) vidtel_button_pane_g1

0xf056,	// (0x0008a311) vidtel_button_pane_t1

0xd90e,	// (0x00088bc9) aid_size_vtel_slider_touch

0xda3d,	// (0x00088cf8) scroll_pane_cp039

0xe1ec,	// (0x000894a7) ncim_query_button_pane_cp01_ParamLimits

0xe20b,	// (0x000894c6) ncimui_query_pane_g1_ParamLimits

0xa9b2,	// (0x00085c6d) input_focus_pane_cp012_ParamLimits

0xe230,	// (0x000894eb) ncim_query_entry_pane_t1_ParamLimits

0xda3d,	// (0x00088cf8) scroll_pane_cp039_ParamLimits

0xb2ab,	// (0x00086566) navi_pane_bcale_mc_g1

0xb2b3,	// (0x0008656e) navi_pane_bcale_mc_t1

0xe7b7,	// (0x00089a72) main_sp_fs_email_pane_g1

0xe7c3,	// (0x00089a7e) main_sp_fs_email_pane_g2

0x0001,

0x0adb,	// (0x0007bd96) main_sp_fs_email_pane_g

0xea19,	// (0x00089cd4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea19,	// (0x00089cd4) list_single_cale_mrui_row_pane_g3

0x1e4a,	// (0x0007d105) list_single_recal_day_pane_g5_event_pane

0x1e60,	// (0x0007d11b) list_single_recal_day_pane_g7

0xf06c,	// (0x0008a327) list_recal_day_event_pane_cp01

0xf075,	// (0x0008a330) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0008a338) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0008a340) list_recal_vselct_pane_cp01

0xd91e,	// (0x00088bd9) list_recal_day_event_pane_cp01_g1

0x2006,	// (0x0007d2c1) list_recal_day_event_pane_cp01_t1

0x1e68,	// (0x0007d123) list_single_recal_day_pane_t1_ParamLimits

0x1e7a,	// (0x0007d135) list_single_recal_day_pane_t2_ParamLimits

0xfd8e,	// (0x0008b049) list_single_recal_day_pane_t_ParamLimits

0xa6b3,	// (0x0008596e) bg_notes_pane_ParamLimits

0xa770,	// (0x00085a2b) list_notes_pane_ParamLimits

0x2638,	// (0x0007d8f3) scroll_pane_cp06_ParamLimits

0xa792,	// (0x00085a4d) main_notes_pane_ParamLimits

0xa03b,	// (0x000852f6) main_welc_pane

0x9f2d,	// (0x000851e8) main_welc_body_pane_ParamLimits

0x9f2d,	// (0x000851e8) main_welc_body_pane

0x9f46,	// (0x00085201) main_welc_opti_pane_ParamLimits

0x9f46,	// (0x00085201) main_welc_opti_pane

0x9f79,	// (0x00085234) main_welc_pane_t1_ParamLimits

0x9f79,	// (0x00085234) main_welc_pane_t1

0x9f93,	// (0x0008524e) main_welc_body_row_pane_ParamLimits

0x9f93,	// (0x0008524e) main_welc_body_row_pane

0xed61,	// (0x0008a01c) main_welc_opti_row_pane_ParamLimits

0xed61,	// (0x0008a01c) main_welc_opti_row_pane

0xf08f,	// (0x0008a34a) main_welc_opti_row_pane_g1

0x9fbc,	// (0x00085277) main_welc_opti_row_pane_t1

0xf097,	// (0x0008a352) main_welc_body_row_pane_t1

0xed99,	// (0x0008a054) popup_notif_wgt_heading_pane

0xedb3,	// (0x0008a06e) aid_size_list_notif_wgt_del_ParamLimits

0xedc0,	// (0x0008a07b) list_notif_wgt_row_pane_g1_ParamLimits

0xedcc,	// (0x0008a087) list_notif_wgt_row_pane_g2_ParamLimits

0xede0,	// (0x0008a09b) list_notif_wgt_row_pane_g3_ParamLimits

0xfde1,	// (0x0008b09c) list_notif_wgt_row_pane_g_ParamLimits

0xeded,	// (0x0008a0a8) list_notif_wgt_row_pane_t1_ParamLimits

0xee03,	// (0x0008a0be) list_notif_wgt_row_pane_t2_ParamLimits

0xee15,	// (0x0008a0d0) list_notif_wgt_row_pane_t3_ParamLimits

0x0ca6,	// (0x0007bf61) list_notif_wgt_row_pane_t_ParamLimits

0x9a8e,	// (0x00084d49) listrow_wgtman_pane_g1_ParamLimits

0x9a9b,	// (0x00084d56) listrow_wgtman_pane_g2_ParamLimits

0xfdf7,	// (0x0008b0b2) listrow_wgtman_pane_g_ParamLimits

0x1eef,	// (0x0007d1aa) listrow_wgtman_pane_t1_ParamLimits

0x1f07,	// (0x0007d1c2) listrow_wgtman_pane_t2_ParamLimits

0xfdfc,	// (0x0008b0b7) listrow_wgtman_pane_t_ParamLimits

0x1f2d,	// (0x0007d1e8) wait_bar_pane_cp09_ParamLimits

0xa03b,	// (0x000852f6) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0008a361) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0008a369) popup_notif_wgt_heading_pane_t1

0xa03b,	// (0x000852f6) main_vids_pane

0xa03b,	// (0x000852f6) vids_listscroll_pane

0x9fcb,	// (0x00085286) scroll_pane_cp040

0xa03b,	// (0x000852f6) vids_list_pane

0x9fd6,	// (0x00085291) vids_list_double_pane_ParamLimits

0x9fd6,	// (0x00085291) vids_list_double_pane

0x9fee,	// (0x000852a9) vids_list_double_pane_g1

0x9ff7,	// (0x000852b2) vids_list_double_pane_t1

0xa007,	// (0x000852c2) vids_list_double_pane_t2

0x0001,

0xfe80,	// (0x0008b13b) vids_list_double_pane_t

0xa9b2,	// (0x00085c6d) main_ncimui_pane_ParamLimits

0x8ab5,	// (0x00083d70) main_ncimui_pane_g1_ParamLimits

0x8ac1,	// (0x00083d7c) main_ncimui_pane_g2_ParamLimits

0x8ac1,	// (0x00083d7c) main_ncimui_pane_g2

0x0001,

0xfbc5,	// (0x0008ae80) main_ncimui_pane_g_ParamLimits

0xfbc5,	// (0x0008ae80) main_ncimui_pane_g

0x9f5f,	// (0x0008521a) main_welc_pane_g1_ParamLimits

0x9f5f,	// (0x0008521a) main_welc_pane_g1

0x9f6b,	// (0x00085226) main_welc_pane_g2_ParamLimits

0x9f6b,	// (0x00085226) main_welc_pane_g2

0x0001,

0xfe7b,	// (0x0008b136) main_welc_pane_g_ParamLimits

0xfe7b,	// (0x0008b136) main_welc_pane_g

0xa6b3,	// (0x0008596e) listscroll_mce_pane_ParamLimits

0xb40e,	// (0x000866c9) wait_bar_pane_cp10

0xc84d,	// (0x00087b08) main_cale_day_pane_ParamLimits

0xc84d,	// (0x00087b08) main_cale_week_pane_ParamLimits

0xa6b3,	// (0x0008596e) main_messa_pane_ParamLimits

0x66ee,	// (0x000819a9) main_clock2_btn_pane_ParamLimits

0x66ee,	// (0x000819a9) main_clock2_btn_pane

0xd043,	// (0x000882fe) main_clock2_btn_pane_cp01_ParamLimits

0xd043,	// (0x000882fe) main_clock2_btn_pane_cp01

0xe9ea,	// (0x00089ca5) list_cale_mrui_pane_ParamLimits

0xee4b,	// (0x0008a106) main_cf0_pane_g2

0x0001,

0x0cad,	// (0x0007bf68) main_cf0_pane_g

0x9c38,	// (0x00084ef3) area_left_week_number_pane_ParamLimits

0x9c4b,	// (0x00084f06) area_top_day_name_pane_ParamLimits

0x9c59,	// (0x00084f14) frame_month_view_pane_ParamLimits

0xef72,	// (0x0008a22d) grid_month_view_pane_ParamLimits

0xef80,	// (0x0008a23b) frm_month_g1_ParamLimits

0x9cd7,	// (0x00084f92) frm_month_g2_ParamLimits

0x9ce8,	// (0x00084fa3) frm_month_g3_ParamLimits

0x9cf9,	// (0x00084fb4) frm_month_g4_ParamLimits

0x9d0a,	// (0x00084fc5) frm_month_g5_ParamLimits

0x9d1d,	// (0x00084fd8) frm_month_g6_ParamLimits

0x9d30,	// (0x00084feb) frm_month_g7_ParamLimits

0xef8d,	// (0x0008a248) frm_month_g8_ParamLimits

0x9d43,	// (0x00084ffe) frm_month_g9_ParamLimits

0x9d50,	// (0x0008500b) frm_month_g10_ParamLimits

0x9d5d,	// (0x00085018) frm_month_g11_ParamLimits

0x9d6a,	// (0x00085025) frm_month_g12_ParamLimits

0x9d77,	// (0x00085032) frm_month_g13_ParamLimits

0x9d84,	// (0x0008503f) frm_month_g14_ParamLimits

0x9d93,	// (0x0008504e) frm_month_g15_ParamLimits

0x9da2,	// (0x0008505d) frm_month_g16_ParamLimits

0xfe26,	// (0x0008b0e1) frm_month_g_ParamLimits

0xef9a,	// (0x0008a255) cell_top_day_name_pane_t1_ParamLimits

0x9db1,	// (0x0008506c) cell_area_left_week_number_pane_g1_ParamLimits

0x9dc0,	// (0x0008507b) cell_area_left_week_number_pane_t1_ParamLimits

0xcebb,	// (0x00088176) cell_month_view_pane_g1_ParamLimits

0x9dd6,	// (0x00085091) cell_month_view_pane_t1_ParamLimits

0xa6ab,	// (0x00085966) main_clock2_btn_pane_g1

0xf0bc,	// (0x0008a377) main_clock2_btn_pane_t1

0xa9b2,	// (0x00085c6d) listscroll_cmail_pane_ParamLimits

0xe7b7,	// (0x00089a72) main_sp_fs_email_pane_g1_ParamLimits

0xe7c3,	// (0x00089a7e) main_sp_fs_email_pane_g2_ParamLimits

0x0adb,	// (0x0007bd96) main_sp_fs_email_pane_g_ParamLimits

0xeaf8,	// (0x00089db3) list_recal_day_pane_ParamLimits

0xeb09,	// (0x00089dc4) mian_recal_day_pane_t1

0x1835,	// (0x0007caf0) list_single_dyc_row_text_pane_t4_ParamLimits

0x1835,	// (0x0007caf0) list_single_dyc_row_text_pane_t4

0x186c,	// (0x0007cb27) list_single_dyc_row_text_pane_t5_ParamLimits

0x186c,	// (0x0007cb27) list_single_dyc_row_text_pane_t5

0x18e2,	// (0x0007cb9d) list_single_dyc_row_text_pane_t6_ParamLimits

0x18e2,	// (0x0007cb9d) list_single_dyc_row_text_pane_t6

0x4354,	// (0x0007f60f) aid_mgn_list_cale_time_pane

0xa9b2,	// (0x00085c6d) main_gallery2_pane_ParamLimits

0xd059,	// (0x00088314) main_clock2_pane_cp01_t1

0xd067,	// (0x00088322) main_clock2_pane_cp01_t3

0x0001,

0xf7d2,	// (0x0008aa8d) main_clock2_pane_cp01_t

0x2a79,	// (0x0007dd34) cale_week_scroll_pane_g16_ParamLimits

0x2a79,	// (0x0007dd34) cale_week_scroll_pane_g16

0xa969,	// (0x00085c24) vorec_slider_pane

0xf056,	// (0x0008a311) vidtel_button_pane_t1_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large

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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000eb40 };

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
0x03be,	// (0x0000eefe) Screen

0x03ca,	// (0x0000ef0a) application_window

0x0406,	// (0x0000ef46) area_bottom_pane_ParamLimits

0x0406,	// (0x0000ef46) area_bottom_pane

0x043f,	// (0x0000ef7f) area_top_pane_ParamLimits

0x043f,	// (0x0000ef7f) area_top_pane

0x9655,	// (0x00018195) call_video_uplink_pane_ParamLimits

0x9655,	// (0x00018195) call_video_uplink_pane

0x04cd,	// (0x0000f00d) main_pane_ParamLimits

0x04cd,	// (0x0000f00d) main_pane

0xbf5b,	// (0x0001aa9b) context_pane

0x3b67,	// (0x000126a7) navi_pane

0x3b8f,	// (0x000126cf) popup_cale_events_window_ParamLimits

0x3b8f,	// (0x000126cf) popup_cale_events_window

0xbf6e,	// (0x0001aaae) popup_mup_playback_window

0x3ba7,	// (0x000126e7) signal_pane

0x9dd6,	// (0x00018916) main_browser_pane

0xaa27,	// (0x00019567) main_burst_pane

0x38c7,	// (0x00012407) main_calc_pane

0xbeed,	// (0x0001aa2d) main_cale_day_pane

0x0b23,	// (0x0000f663) main_cale_month_pane

0xbeed,	// (0x0001aa2d) main_cale_week_pane

0xaa27,	// (0x00019567) main_call_pane

0x9a94,	// (0x000185d4) main_call_poc_pane

0xaa27,	// (0x00019567) main_camera_pane

0xaa27,	// (0x00019567) main_chi_dic_pane

0xa89c,	// (0x000193dc) main_clock_pane

0x9a94,	// (0x000185d4) main_fmradio_pane

0xaa27,	// (0x00019567) main_graph_messa_pane

0x9a94,	// (0x000185d4) main_help_pane

0x9dd6,	// (0x00018916) main_im_pane

0x9cef,	// (0x0001882f) main_image_pane_ParamLimits

0x9cef,	// (0x0001882f) main_image_pane

0x9a94,	// (0x000185d4) main_location2_pane

0xaa27,	// (0x00019567) main_location_pane

0x9cef,	// (0x0001882f) main_messa_pane

0x9a94,	// (0x000185d4) main_mp2_pane

0xaa27,	// (0x00019567) main_mp_pane

0x9a94,	// (0x000185d4) main_msg_pane

0x9a94,	// (0x000185d4) main_mup_eq_pane

0x9a94,	// (0x000185d4) main_mup_pane

0x9dd6,	// (0x00018916) main_notes_pane

0x9a94,	// (0x000185d4) main_pec_pane

0x9a94,	// (0x000185d4) main_phob_pane

0x9a94,	// (0x000185d4) main_pinb_pane

0x9a94,	// (0x000185d4) main_postcard_pane

0x9a94,	// (0x000185d4) main_qdial_pane

0xaa27,	// (0x00019567) main_skin_pane

0x9a94,	// (0x000185d4) main_smil2_pane

0xaa27,	// (0x00019567) main_smil_pane

0xaa27,	// (0x00019567) main_video_pane

0xaa27,	// (0x00019567) main_video_tele_pane

0x9cef,	// (0x0001882f) main_viewer_pane_ParamLimits

0x9cef,	// (0x0001882f) main_viewer_pane

0xaa27,	// (0x00019567) main_vorec_pane

0x391b,	// (0x0001245b) popup_blid_sat_info_window_ParamLimits

0x391b,	// (0x0001245b) popup_blid_sat_info_window

0x3973,	// (0x000124b3) popup_dyc_status_message_window_ParamLimits

0x3973,	// (0x000124b3) popup_dyc_status_message_window

0x398d,	// (0x000124cd) popup_grid_large_graphic_window_ParamLimits

0x398d,	// (0x000124cd) popup_grid_large_graphic_window

0x3a49,	// (0x00012589) popup_loc_request_window_ParamLimits

0x3a49,	// (0x00012589) popup_loc_request_window

0x3b3f,	// (0x0001267f) popup_wml_address_window_ParamLimits

0x3b3f,	// (0x0001267f) popup_wml_address_window

0x3701,	// (0x00012241) call_muted_g1

0x33b6,	// (0x00011ef6) popup_call_audio_conf_window_ParamLimits

0x33b6,	// (0x00011ef6) popup_call_audio_conf_window

0x3715,	// (0x00012255) popup_call_audio_first_window_ParamLimits

0x3715,	// (0x00012255) popup_call_audio_first_window

0x378b,	// (0x000122cb) popup_call_audio_in_window_ParamLimits

0x378b,	// (0x000122cb) popup_call_audio_in_window

0x37c7,	// (0x00012307) popup_call_audio_out_window_ParamLimits

0x37c7,	// (0x00012307) popup_call_audio_out_window

0x3801,	// (0x00012341) popup_call_audio_second_window_ParamLimits

0x3801,	// (0x00012341) popup_call_audio_second_window

0x3857,	// (0x00012397) popup_call_audio_wait_window_ParamLimits

0x3857,	// (0x00012397) popup_call_audio_wait_window

0x388c,	// (0x000123cc) popup_number_entry_window_ParamLimits

0x388c,	// (0x000123cc) popup_number_entry_window

0x9681,	// (0x000181c1) bg_popup_call_pane_cp05_ParamLimits

0x9681,	// (0x000181c1) bg_popup_call_pane_cp05

0x96a1,	// (0x000181e1) popup_number_entry_window_t1

0x96b4,	// (0x000181f4) popup_number_entry_window_t2

0x96c6,	// (0x00018206) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0001dc13) popup_number_entry_window_t

0x96d8,	// (0x00018218) text_title_cp2

0x96eb,	// (0x0001822b) bg_popup_call_pane_cp_ParamLimits

0x96eb,	// (0x0001822b) bg_popup_call_pane_cp

0x96f9,	// (0x00018239) call_thumbnail_pane

0x9701,	// (0x00018241) popup_call_audio_in_window_g1_ParamLimits

0x9701,	// (0x00018241) popup_call_audio_in_window_g1

0x970d,	// (0x0001824d) popup_call_audio_in_window_g2_ParamLimits

0x970d,	// (0x0001824d) popup_call_audio_in_window_g2

0x9719,	// (0x00018259) popup_call_audio_in_window_g3_ParamLimits

0x9719,	// (0x00018259) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0001dc1c) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0001dc1c) popup_call_audio_in_window_g

0x9725,	// (0x00018265) popup_call_audio_in_window_t1_ParamLimits

0x9725,	// (0x00018265) popup_call_audio_in_window_t1

0x9741,	// (0x00018281) popup_call_audio_in_window_t2_ParamLimits

0x9741,	// (0x00018281) popup_call_audio_in_window_t2

0x975d,	// (0x0001829d) popup_call_audio_in_window_t3_ParamLimits

0x975d,	// (0x0001829d) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0001dc23) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0001dc23) popup_call_audio_in_window_t

0x96eb,	// (0x0001822b) bg_popup_call_pane_cp01_ParamLimits

0x96eb,	// (0x0001822b) bg_popup_call_pane_cp01

0x96f9,	// (0x00018239) call_thumbnail_pane_cp02

0x9770,	// (0x000182b0) call_type_pane_cp022

0x9778,	// (0x000182b8) popup_call_audio_out_window_g1_ParamLimits

0x9778,	// (0x000182b8) popup_call_audio_out_window_g1

0x978a,	// (0x000182ca) popup_call_audio_out_window_g2_ParamLimits

0x978a,	// (0x000182ca) popup_call_audio_out_window_g2

0x9796,	// (0x000182d6) popup_call_audio_out_window_g3_ParamLimits

0x9796,	// (0x000182d6) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0001dc2a) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0001dc2a) popup_call_audio_out_window_g

0x97a8,	// (0x000182e8) popup_call_audio_out_window_t1_ParamLimits

0x97a8,	// (0x000182e8) popup_call_audio_out_window_t1

0x97c0,	// (0x00018300) popup_call_audio_out_window_t2_ParamLimits

0x97c0,	// (0x00018300) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0001dc31) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0001dc31) popup_call_audio_out_window_t

0x97d5,	// (0x00018315) bg_popup_call_pane_ParamLimits

0x97d5,	// (0x00018315) bg_popup_call_pane

0x0689,	// (0x0000f1c9) call_thumbnail_pane_cp_ParamLimits

0x0689,	// (0x0000f1c9) call_thumbnail_pane_cp

0x9859,	// (0x00018399) call_type_pane_cp01_ParamLimits

0x9859,	// (0x00018399) call_type_pane_cp01

0x989d,	// (0x000183dd) popup_call_audio_first_window_g1_ParamLimits

0x989d,	// (0x000183dd) popup_call_audio_first_window_g1

0x98e9,	// (0x00018429) popup_call_audio_first_window_g2_ParamLimits

0x98e9,	// (0x00018429) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0001dc36) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0001dc36) popup_call_audio_first_window_g

0x992d,	// (0x0001846d) popup_call_audio_first_window_t1_ParamLimits

0x992d,	// (0x0001846d) popup_call_audio_first_window_t1

0x99d9,	// (0x00018519) popup_call_audio_first_window_t4_ParamLimits

0x99d9,	// (0x00018519) popup_call_audio_first_window_t4

0x9a65,	// (0x000185a5) popup_call_audio_first_window_t5_ParamLimits

0x9a65,	// (0x000185a5) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0001dc3b) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0001dc3b) popup_call_audio_first_window_t

0x9a94,	// (0x000185d4) bg_popup_call_pane_cp02

0x9a9e,	// (0x000185de) call_type_pane_cp023

0x9aa6,	// (0x000185e6) popup_call_audio_wait_window_g1

0x9aae,	// (0x000185ee) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0001dc42) popup_call_audio_wait_window_g

0x9ab6,	// (0x000185f6) popup_call_audio_wait_window_t3

0x9ac4,	// (0x00018604) bg_popup_call_pane_cp03_ParamLimits

0x9ac4,	// (0x00018604) bg_popup_call_pane_cp03

0x9b24,	// (0x00018664) call_thumbnail_pane_cp011_ParamLimits

0x9b24,	// (0x00018664) call_thumbnail_pane_cp011

0x9b30,	// (0x00018670) call_type_pane_cp034_ParamLimits

0x9b30,	// (0x00018670) call_type_pane_cp034

0x9b6c,	// (0x000186ac) popup_call_audio_second_window_g1_ParamLimits

0x9b6c,	// (0x000186ac) popup_call_audio_second_window_g1

0x9ba8,	// (0x000186e8) popup_call_audio_second_window_g2_ParamLimits

0x9ba8,	// (0x000186e8) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0001dc47) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0001dc47) popup_call_audio_second_window_g

0x9be4,	// (0x00018724) popup_call_audio_second_window_t1_ParamLimits

0x9be4,	// (0x00018724) popup_call_audio_second_window_t1

0x9c65,	// (0x000187a5) popup_call_audio_second_window_t2_ParamLimits

0x9c65,	// (0x000187a5) popup_call_audio_second_window_t2

0x9c9b,	// (0x000187db) popup_call_audio_second_window_t3_ParamLimits

0x9c9b,	// (0x000187db) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0001dc4c) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0001dc4c) popup_call_audio_second_window_t

0x9a94,	// (0x000185d4) bg_popup_call_pane_cp04

0x9cd1,	// (0x00018811) list_conf_pane

0x9cd9,	// (0x00018819) popup_call_audio_conf_window_t1

0x9ce7,	// (0x00018827) call_thumbnail_pane_g1

0x9cef,	// (0x0001882f) bg_pinb_pane_ParamLimits

0x9cef,	// (0x0001882f) bg_pinb_pane

0x9cfd,	// (0x0001883d) find_pinb_pane

0x9d06,	// (0x00018846) listscroll_pinb_pane_ParamLimits

0x9d06,	// (0x00018846) listscroll_pinb_pane

0x9d15,	// (0x00018855) pinb_bg_pane_g1

0x06ad,	// (0x0000f1ed) pinb_bg_pane_g2

0x06b9,	// (0x0000f1f9) pinb_bg_pane_g3

0x06c5,	// (0x0000f205) pinb_bg_pane_g4

0x06d1,	// (0x0000f211) pinb_bg_pane_g5

0x06dd,	// (0x0000f21d) pinb_bg_pane_g6

0x06e8,	// (0x0000f228) pinb_bg_pane_g7

0x06f3,	// (0x0000f233) pinb_bg_pane_g8

0x06fe,	// (0x0000f23e) pinb_bg_pane_g9

0x0708,	// (0x0000f248) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0001dc53) pinb_bg_pane_g

0x0725,	// (0x0000f265) grid_pinb_pane

0x072e,	// (0x0000f26e) list_pinb_pane

0x0737,	// (0x0000f277) scroll_pane_cp01_ParamLimits

0x0737,	// (0x0000f277) scroll_pane_cp01

0x9d1f,	// (0x0001885f) find_pinb_pane_g1_ParamLimits

0x9d1f,	// (0x0001885f) find_pinb_pane_g1

0x9d37,	// (0x00018877) find_pinb_pane_t1

0x9d49,	// (0x00018889) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0001dc6d) find_pinb_pane_t

0x9d5e,	// (0x0001889e) input_focus_pane_cp01_ParamLimits

0x9d5e,	// (0x0001889e) input_focus_pane_cp01

0x0749,	// (0x0000f289) cell_pinb_pane_ParamLimits

0x0749,	// (0x0000f289) cell_pinb_pane

0x0772,	// (0x0000f2b2) cell_pinb_pane_g1_ParamLimits

0x0772,	// (0x0000f2b2) cell_pinb_pane_g1

0x0782,	// (0x0000f2c2) cell_pinb_pane_g2_ParamLimits

0x0782,	// (0x0000f2c2) cell_pinb_pane_g2

0x9d6a,	// (0x000188aa) cell_pinb_pane_g3_ParamLimits

0x9d6a,	// (0x000188aa) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0001dc72) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0001dc72) cell_pinb_pane_g

0x9a94,	// (0x000185d4) grid_highlight_pane_cp01

0x078e,	// (0x0000f2ce) list_pinb_item_pane_ParamLimits

0x078e,	// (0x0000f2ce) list_pinb_item_pane

0x9a94,	// (0x000185d4) list_highlight_pane_cp02

0x07a0,	// (0x0000f2e0) list_pinb_item_pane_g1_ParamLimits

0x07a0,	// (0x0000f2e0) list_pinb_item_pane_g1

0x07ad,	// (0x0000f2ed) list_pinb_item_pane_g2_ParamLimits

0x07ad,	// (0x0000f2ed) list_pinb_item_pane_g2

0x07b9,	// (0x0000f2f9) list_pinb_item_pane_g3_ParamLimits

0x07b9,	// (0x0000f2f9) list_pinb_item_pane_g3

0x07ca,	// (0x0000f30a) list_pinb_item_pane_g4_ParamLimits

0x07ca,	// (0x0000f30a) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0001dc79) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0001dc79) list_pinb_item_pane_g

0x07d6,	// (0x0000f316) list_pinb_item_pane_t1_ParamLimits

0x07d6,	// (0x0000f316) list_pinb_item_pane_t1

0x080b,	// (0x0000f34b) calc_display_pane

0x0833,	// (0x0000f373) calc_paper_pane

0x0856,	// (0x0000f396) grid_calc_pane

0x9a94,	// (0x000185d4) bg_list_pane_cp01

0x0884,	// (0x0000f3c4) clock_g1

0x088c,	// (0x0000f3cc) clock_g2

0x0001,

0xf142,	// (0x0001dc82) clock_g

0x0894,	// (0x0000f3d4) clock_t1_ParamLimits

0x0894,	// (0x0000f3d4) clock_t1

0x08a9,	// (0x0000f3e9) clock_t2_ParamLimits

0x08a9,	// (0x0000f3e9) clock_t2

0x08bb,	// (0x0000f3fb) clock_t3_ParamLimits

0x08bb,	// (0x0000f3fb) clock_t3

0x08cd,	// (0x0000f40d) clock_t4_ParamLimits

0x08cd,	// (0x0000f40d) clock_t4

0x08df,	// (0x0000f41f) clock_t5_ParamLimits

0x08df,	// (0x0000f41f) clock_t5

0x08f4,	// (0x0000f434) clock_t6_ParamLimits

0x08f4,	// (0x0000f434) clock_t6

0x0906,	// (0x0000f446) clock_t7_ParamLimits

0x0906,	// (0x0000f446) clock_t7

0x0918,	// (0x0000f458) clock_t8_ParamLimits

0x0918,	// (0x0000f458) clock_t8

0x092c,	// (0x0000f46c) clock_t9_ParamLimits

0x092c,	// (0x0000f46c) clock_t9

0x0008,

0xf147,	// (0x0001dc87) clock_t_ParamLimits

0xf147,	// (0x0001dc87) clock_t

0x9d7e,	// (0x000188be) popup_clock_analogue_window_cp02

0x9d7e,	// (0x000188be) popup_clock_digital_window_cp01

0x9d86,	// (0x000188c6) listscroll_help_pane

0x9a94,	// (0x000185d4) phob_pre_status_pane

0x9d90,	// (0x000188d0) grid_qdial_pane

0x9cef,	// (0x0001882f) listscroll_mce_pane

0x9cef,	// (0x0001882f) bg_notes_pane

0x9d9a,	// (0x000188da) list_notes_pane

0x0940,	// (0x0000f480) scroll_pane_cp06

0x9da8,	// (0x000188e8) bg_calc_paper_pane

0x9dbc,	// (0x000188fc) list_calc_pane

0x9dd6,	// (0x00018916) bg_calc_display_pane

0x0954,	// (0x0000f494) calc_display_pane_t1

0x0966,	// (0x0000f4a6) calc_display_pane_t2

0x9de2,	// (0x00018922) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0001dc9a) calc_display_pane_t

0x0978,	// (0x0000f4b8) cell_calc_pane_ParamLimits

0x0978,	// (0x0000f4b8) cell_calc_pane

0x9df4,	// (0x00018934) bg_calc_paper_pane_g1

0x9e00,	// (0x00018940) bg_calc_paper_pane_g2

0x9e0c,	// (0x0001894c) bg_calc_paper_pane_g3

0x9e18,	// (0x00018958) bg_calc_paper_pane_g4

0x9e24,	// (0x00018964) bg_calc_paper_pane_g5

0x09ad,	// (0x0000f4ed) bg_calc_paper_pane_g6

0x09bc,	// (0x0000f4fc) bg_calc_paper_pane_g7

0x09cb,	// (0x0000f50b) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0001dca1) bg_calc_paper_pane_g

0x09de,	// (0x0000f51e) calc_bg_paper_pane_g9

0x09f1,	// (0x0000f531) list_calc_item_pane_ParamLimits

0x09f1,	// (0x0000f531) list_calc_item_pane

0x9e30,	// (0x00018970) list_calc_item_pane_g1

0x9e3d,	// (0x0001897d) list_calc_item_pane_t1_ParamLimits

0x9e3d,	// (0x0001897d) list_calc_item_pane_t1

0x0a06,	// (0x0000f546) list_calc_item_pane_t2_ParamLimits

0x0a06,	// (0x0000f546) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0001dcb2) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0001dcb2) list_calc_item_pane_t

0x9e4f,	// (0x0001898f) cell_calc_pane_g1

0x9e59,	// (0x00018999) grid_highlight_pane_cp02

0x0a38,	// (0x0000f578) bg_calc_display_pane_g1

0x0a41,	// (0x0000f581) bg_calc_display_pane_g2

0x0a4b,	// (0x0000f58b) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0001dcbc) bg_calc_display_pane_g

0x0a54,	// (0x0000f594) cell_qdial_pane_ParamLimits

0x0a54,	// (0x0000f594) cell_qdial_pane

0x0a68,	// (0x0000f5a8) cell_qdial_pane_g1_ParamLimits

0x0a68,	// (0x0000f5a8) cell_qdial_pane_g1

0x0a7e,	// (0x0000f5be) cell_qdial_pane_g2_ParamLimits

0x0a7e,	// (0x0000f5be) cell_qdial_pane_g2

0x9e7b,	// (0x000189bb) cell_qdial_pane_g3_ParamLimits

0x9e7b,	// (0x000189bb) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0001dcc3) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0001dcc3) cell_qdial_pane_g

0x0aa5,	// (0x0000f5e5) cell_qdial_pane_t1_ParamLimits

0x0aa5,	// (0x0000f5e5) cell_qdial_pane_t1

0x0abd,	// (0x0000f5fd) cell_qdial_pane_t2_ParamLimits

0x0abd,	// (0x0000f5fd) cell_qdial_pane_t2

0x0ad0,	// (0x0000f610) cell_qdial_pane_t3_ParamLimits

0x0ad0,	// (0x0000f610) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0001dccc) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0001dccc) cell_qdial_pane_t

0x9a94,	// (0x000185d4) grid_highlight_pane_cp04

0x9e87,	// (0x000189c7) thumbnail_qdial_pane_ParamLimits

0x9e87,	// (0x000189c7) thumbnail_qdial_pane

0x9ee3,	// (0x00018a23) list_help_pane

0x9eec,	// (0x00018a2c) scroll_pane_cp02

0x0ae3,	// (0x0000f623) help_list_pane_t1_ParamLimits

0x0ae3,	// (0x0000f623) help_list_pane_t1

0x9ef5,	// (0x00018a35) bg_notes_pane_g2

0x9efd,	// (0x00018a3d) bg_notes_pane_g3

0x9f05,	// (0x00018a45) notes_bg_pane_g1

0x9f0d,	// (0x00018a4d) notes_bg_pane_g4

0x9f15,	// (0x00018a55) notes_bg_pane_g5

0x9f1d,	// (0x00018a5d) notes_bg_pane_g6

0x9f25,	// (0x00018a65) notes_bg_pane_g7

0x9f2d,	// (0x00018a6d) notes_bg_pane_g8

0x9f35,	// (0x00018a75) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0001dcea) notes_bg_pane_g

0x0b00,	// (0x0000f640) list_notes_text_pane_ParamLimits

0x0b00,	// (0x0000f640) list_notes_text_pane

0x9f3d,	// (0x00018a7d) list_notes_text_pane_g1

0x0b15,	// (0x0000f655) list_notes_text_pane_t1

0x0b23,	// (0x0000f663) listscroll_cale_week_pane

0x0b4f,	// (0x0000f68f) bg_cale_heading_pane

0x9f60,	// (0x00018aa0) bg_cale_pane_cp01

0x0b67,	// (0x0000f6a7) cale_week_corner_pane

0x0b86,	// (0x0000f6c6) cale_week_day_heading_pane

0x0ba3,	// (0x0000f6e3) cale_week_scroll_pane_g1

0x0bb6,	// (0x0000f6f6) cale_week_scroll_pane_g2

0x0bce,	// (0x0000f70e) cale_week_scroll_pane_g3

0x0be6,	// (0x0000f726) cale_week_scroll_pane_g4

0x0bfe,	// (0x0000f73e) cale_week_scroll_pane_g5

0x0c1e,	// (0x0000f75e) cale_week_scroll_pane_g6

0x0c3e,	// (0x0000f77e) cale_week_scroll_pane_g7

0x0c5e,	// (0x0000f79e) cale_week_scroll_pane_g8

0x0c82,	// (0x0000f7c2) cale_week_scroll_pane_g9

0x0c9a,	// (0x0000f7da) cale_week_scroll_pane_g10

0x0cb2,	// (0x0000f7f2) cale_week_scroll_pane_g11

0x0cca,	// (0x0000f80a) cale_week_scroll_pane_g12

0x0ce2,	// (0x0000f822) cale_week_scroll_pane_g13

0x0ce2,	// (0x0000f822) cale_week_scroll_pane_g14

0x0ce2,	// (0x0000f822) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0001dcf9) cale_week_scroll_pane_g

0x0cfa,	// (0x0000f83a) cale_week_time_pane

0x0d1e,	// (0x0000f85e) grid_cale_week_pane

0x9f90,	// (0x00018ad0) scroll_pane_cp08

0x0d44,	// (0x0000f884) cell_cale_week_pane_ParamLimits

0x0d44,	// (0x0000f884) cell_cale_week_pane

0x0dd2,	// (0x0000f912) cale_week_day_heading_pane_t1

0x0e17,	// (0x0000f957) cale_week_day_heading_pane_t2

0x0e61,	// (0x0000f9a1) cale_week_day_heading_pane_t3

0x0eab,	// (0x0000f9eb) cale_week_day_heading_pane_t4

0x0ef5,	// (0x0000fa35) cale_week_day_heading_pane_t5

0x0f47,	// (0x0000fa87) cale_week_day_heading_pane_t6

0x0f99,	// (0x0000fad9) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0001dd18) cale_week_day_heading_pane_t

0x9fad,	// (0x00018aed) bg_cale_side_pane

0x0fde,	// (0x0000fb1e) cale_week_time_pane_t1

0x0ff8,	// (0x0000fb38) cale_week_time_pane_t2

0x1012,	// (0x0000fb52) cale_week_time_pane_t3

0x102c,	// (0x0000fb6c) cale_week_time_pane_t4

0x1046,	// (0x0000fb86) cale_week_time_pane_t5

0x1060,	// (0x0000fba0) cale_week_time_pane_t6

0x107a,	// (0x0000fbba) cale_week_time_pane_t7

0x1094,	// (0x0000fbd4) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0001dd27) cale_week_time_pane_t

0x10b4,	// (0x0000fbf4) cell_cale_week_pane_g2

0x10d3,	// (0x0000fc13) cell_cale_week_pane_g3_ParamLimits

0x10d3,	// (0x0000fc13) cell_cale_week_pane_g3

0x9fbb,	// (0x00018afb) grid_highlight_pane_cp07

0x9fc3,	// (0x00018b03) listscroll_gms_pane

0x9fcd,	// (0x00018b0d) grid_gms_pane

0x9fd6,	// (0x00018b16) listscroll_gms_pane_g1

0x9fde,	// (0x00018b1e) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0001dd38) listscroll_gms_pane_g

0x10eb,	// (0x0000fc2b) scroll_pane_cp010

0x10f6,	// (0x0000fc36) cell_gms_pane_ParamLimits

0x10f6,	// (0x0000fc36) cell_gms_pane

0x1109,	// (0x0000fc49) cell_gms_pane_g1

0x9fe6,	// (0x00018b26) cell_gms_pane_g2

0x9fee,	// (0x00018b2e) cell_gms_pane_g3

0x9ff7,	// (0x00018b37) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0001dd3d) cell_gms_pane_g

0xa000,	// (0x00018b40) grid_highlight_pane_cp09

0x36ab,	// (0x000121eb) phob_pre_status_pane_g1

0x36b3,	// (0x000121f3) phob_pre_status_pane_g2

0x36bb,	// (0x000121fb) phob_pre_status_pane_g3

0x36c3,	// (0x00012203) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0001e12c) phob_pre_status_pane_g

0x36d3,	// (0x00012213) phob_pre_status_pane_t1

0x36e1,	// (0x00012221) phob_pre_status_pane_t2

0x36f1,	// (0x00012231) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0001e137) phob_pre_status_pane_t

0x9a94,	// (0x000185d4) bg_list_pane_cp05

0x1119,	// (0x0000fc59) grid_vorec_pane

0x1123,	// (0x0000fc63) vorec_t1

0x1131,	// (0x0000fc71) vorec_t2

0x113f,	// (0x0000fc7f) vorec_t3

0x114d,	// (0x0000fc8d) vorec_t4

0x115b,	// (0x0000fc9b) vorec_t5

0xa008,	// (0x00018b48) vorec_t6

0x0006,

0xf206,	// (0x0001dd46) vorec_t

0x1177,	// (0x0000fcb7) wait_bar_pane_cp01

0x117f,	// (0x0000fcbf) cell_vorec_pane_ParamLimits

0x117f,	// (0x0000fcbf) cell_vorec_pane

0xa016,	// (0x00018b56) cell_vorec_pane_g1

0x9a94,	// (0x000185d4) grid_highlight_pane_cp05

0x11a7,	// (0x0000fce7) cams_zoom_pane

0x11b6,	// (0x0000fcf6) image_vga_pane

0x11d0,	// (0x0000fd10) main_camera_pane_g1

0x11e2,	// (0x0000fd22) main_camera_pane_g2

0x11f2,	// (0x0000fd32) main_camera_pane_g3

0x1202,	// (0x0000fd42) main_camera_pane_g4

0x1212,	// (0x0000fd52) main_camera_pane_g5

0x1222,	// (0x0000fd62) main_camera_pane_g6

0x1234,	// (0x0000fd74) main_camera_pane_g7

0x0007,

0xf215,	// (0x0001dd55) main_camera_pane_g

0x1244,	// (0x0000fd84) main_camera_pane_t1

0x125a,	// (0x0000fd9a) main_camera_pane_t2

0x0001,

0xf226,	// (0x0001dd66) main_camera_pane_t

0x1294,	// (0x0000fdd4) cams_zoom_pane_cp_ParamLimits

0x1294,	// (0x0000fdd4) cams_zoom_pane_cp

0x12bc,	// (0x0000fdfc) image_cif_pane_ParamLimits

0x12bc,	// (0x0000fdfc) image_cif_pane

0x12f2,	// (0x0000fe32) image_subqcif_pane

0x12fa,	// (0x0000fe3a) main_video_pane_g1_ParamLimits

0x12fa,	// (0x0000fe3a) main_video_pane_g1

0x131e,	// (0x0000fe5e) main_video_pane_g2_ParamLimits

0x131e,	// (0x0000fe5e) main_video_pane_g2

0x1352,	// (0x0000fe92) main_video_pane_g3_ParamLimits

0x1352,	// (0x0000fe92) main_video_pane_g3

0x1380,	// (0x0000fec0) main_video_pane_g4_ParamLimits

0x1380,	// (0x0000fec0) main_video_pane_g4

0x13ae,	// (0x0000feee) main_video_pane_g5_ParamLimits

0x13ae,	// (0x0000feee) main_video_pane_g5

0xa02c,	// (0x00018b6c) main_video_pane_g6_ParamLimits

0xa02c,	// (0x00018b6c) main_video_pane_g6

0x0006,

0xf22b,	// (0x0001dd6b) main_video_pane_g_ParamLimits

0xf22b,	// (0x0001dd6b) main_video_pane_g

0x13d7,	// (0x0000ff17) main_video_pane_t1_ParamLimits

0x13d7,	// (0x0000ff17) main_video_pane_t1

0xa046,	// (0x00018b86) cams_zoom_pane_g1

0xa04f,	// (0x00018b8f) cams_zoom_pane_g2

0xa058,	// (0x00018b98) cams_zoom_pane_g3

0xa061,	// (0x00018ba1) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0001dd7a) cams_zoom_pane_g

0x1434,	// (0x0000ff74) grid_cams_pane

0x144e,	// (0x0000ff8e) linegrid_cams_pane

0x1462,	// (0x0000ffa2) cell_cams_pane_ParamLimits

0x1462,	// (0x0000ffa2) cell_cams_pane

0xa06a,	// (0x00018baa) cams_burst_image_pane

0xa072,	// (0x00018bb2) cell_cams_pane_g1

0x9a94,	// (0x000185d4) grid_highlight_pane_cp03

0x9e4f,	// (0x0001898f) mp_bg_pane_g1

0x9a94,	// (0x000185d4) bg_list_pane_cp03

0xbe12,	// (0x0001a952) bg_mp_pane

0xbe1a,	// (0x0001a95a) grid_mp_pane

0xbe22,	// (0x0001a962) media_player_g1

0xbe2a,	// (0x0001a96a) media_player_t1

0xbe38,	// (0x0001a978) media_player_t2

0xbe46,	// (0x0001a986) media_player_t3

0xbe54,	// (0x0001a994) media_player_t4

0xbe62,	// (0x0001a9a2) media_player_t5

0xbe70,	// (0x0001a9b0) media_player_t6

0xbe7e,	// (0x0001a9be) media_player_t7

0x0006,

0xf5d6,	// (0x0001e116) media_player_t

0xbe8c,	// (0x0001a9cc) wait_bar_pane_cp02

0xf5bb,	// (0x0001e0fb) main_usb_pane_t

0x36a2,	// (0x000121e2) cell_mp_pane

0x9e4f,	// (0x0001898f) cell_mp_pane_g1

0x9a94,	// (0x000185d4) grid_highlight_pane_cp06

0xa07a,	// (0x00018bba) grid_skin_colour_pane

0xa082,	// (0x00018bc2) list_highlight_pane_cp03

0x1568,	// (0x000100a8) skin_g1

0xa08a,	// (0x00018bca) skin_t1

0xa099,	// (0x00018bd9) skin_t2

0x0001,

0xf26f,	// (0x0001ddaf) skin_t

0x1570,	// (0x000100b0) cell_skin_colour_pane_ParamLimits

0x1570,	// (0x000100b0) cell_skin_colour_pane

0xa0a7,	// (0x00018be7) cell_skin_colour_pane_g1

0x15e9,	// (0x00010129) call_video_g1_ParamLimits

0x15e9,	// (0x00010129) call_video_g1

0x1605,	// (0x00010145) call_video_g2_ParamLimits

0x1605,	// (0x00010145) call_video_g2

0x0001,

0xf274,	// (0x0001ddb4) call_video_g_ParamLimits

0xf274,	// (0x0001ddb4) call_video_g

0x1657,	// (0x00010197) call_video_uplink_pane_cp1_ParamLimits

0x1657,	// (0x00010197) call_video_uplink_pane_cp1

0xa0b9,	// (0x00018bf9) call_video_uplink_pane_cp2

0x16f6,	// (0x00010236) video_down_crop_pane_ParamLimits

0x16f6,	// (0x00010236) video_down_crop_pane

0x17ed,	// (0x0001032d) video_down_pane_ParamLimits

0x17ed,	// (0x0001032d) video_down_pane

0xa0c1,	// (0x00018c01) video_down_subqcif_pane_ParamLimits

0xa0c1,	// (0x00018c01) video_down_subqcif_pane

0xa0d9,	// (0x00018c19) video_down_subqcif_pane_cp_ParamLimits

0xa0d9,	// (0x00018c19) video_down_subqcif_pane_cp

0xa0ff,	// (0x00018c3f) im_reading_pane_ParamLimits

0xa0ff,	// (0x00018c3f) im_reading_pane

0x18fb,	// (0x0001043b) im_writing_pane_ParamLimits

0x18fb,	// (0x0001043b) im_writing_pane

0x1911,	// (0x00010451) im_reading_pane_t1

0xa119,	// (0x00018c59) list_im_pane

0xa12a,	// (0x00018c6a) scroll_pane_cp07

0x194a,	// (0x0001048a) im_writing_pane_t1_ParamLimits

0x194a,	// (0x0001048a) im_writing_pane_t1

0xa143,	// (0x00018c83) im_writing_pane_t2_ParamLimits

0xa143,	// (0x00018c83) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0001ddbe) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0001ddbe) im_writing_pane_t

0x9a94,	// (0x000185d4) input_focus_pane_cp04

0x9a94,	// (0x000185d4) input_focus_pane_cp05

0x195f,	// (0x0001049f) list_im_single_pane_ParamLimits

0x195f,	// (0x0001049f) list_im_single_pane

0x1973,	// (0x000104b3) list_single_im_pane_t1

0x3662,	// (0x000121a2) blid_accuracy_pane

0x366a,	// (0x000121aa) blid_compass_pane

0x3674,	// (0x000121b4) main_location_t1

0x3684,	// (0x000121c4) main_location_t2

0x3694,	// (0x000121d4) main_location_t3

0x0002,

0xf5e5,	// (0x0001e125) main_location_t

0x9a94,	// (0x000185d4) aid_levels_location

0x9e4f,	// (0x0001898f) blid_accuracy_pane_g1

0x9e4f,	// (0x0001898f) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0001de20) blid_accuracy_pane_g

0xa18b,	// (0x00018ccb) wml_content_pane

0xa1c9,	// (0x00018d09) wml_button_pane_ParamLimits

0xa1c9,	// (0x00018d09) wml_button_pane

0x1982,	// (0x000104c2) wml_list_single_large_pane_ParamLimits

0x1982,	// (0x000104c2) wml_list_single_large_pane

0x1997,	// (0x000104d7) wml_list_single_medium_pane_ParamLimits

0x1997,	// (0x000104d7) wml_list_single_medium_pane

0x19ad,	// (0x000104ed) wml_list_single_small_pane_ParamLimits

0x19ad,	// (0x000104ed) wml_list_single_small_pane

0xa1dd,	// (0x00018d1d) wml_selection_box_pane_ParamLimits

0xa1dd,	// (0x00018d1d) wml_selection_box_pane

0xa1f0,	// (0x00018d30) wml_list_single_pane_t1

0xa1ff,	// (0x00018d3f) wml_list_single_medium_pane_t1

0xa20e,	// (0x00018d4e) wml_list_single_large_pane_t1

0xa21d,	// (0x00018d5d) input_focus_pane_cp02_ParamLimits

0xa21d,	// (0x00018d5d) input_focus_pane_cp02

0xa230,	// (0x00018d70) wml_selection_box_pane_g1

0xa239,	// (0x00018d79) wml_selection_box_pane_t1_ParamLimits

0xa239,	// (0x00018d79) wml_selection_box_pane_t1

0x9cef,	// (0x0001882f) bg_wml_button_pane_ParamLimits

0x9cef,	// (0x0001882f) bg_wml_button_pane

0xa251,	// (0x00018d91) wml_button_pane_g1

0xa259,	// (0x00018d99) wml_button_pane_t1

0xa251,	// (0x00018d91) wml_button_bg_pane_g1

0xa269,	// (0x00018da9) wml_button_bg_pane_g2

0xa271,	// (0x00018db1) wml_button_bg_pane_g3

0xa279,	// (0x00018db9) wml_button_bg_pane_g4

0xa281,	// (0x00018dc1) wml_button_bg_pane_g5

0xa289,	// (0x00018dc9) wml_button_bg_pane_g6

0xa291,	// (0x00018dd1) wml_button_bg_pane_g7

0xa299,	// (0x00018dd9) wml_button_bg_pane_g8

0xa2a1,	// (0x00018de1) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0001ddc3) wml_button_bg_pane_g

0x19c5,	// (0x00010505) bg_list_pane_cp02

0xa2a9,	// (0x00018de9) mce_header_pane_ParamLimits

0xa2a9,	// (0x00018de9) mce_header_pane

0xa2bf,	// (0x00018dff) mce_icon_pane

0xa2bf,	// (0x00018dff) mce_image_pane

0xa2c8,	// (0x00018e08) mce_text_pane_ParamLimits

0xa2c8,	// (0x00018e08) mce_text_pane

0x19cd,	// (0x0001050d) scroll_pane_cp03

0xa1c1,	// (0x00018d01) scroll_pane_cp04

0xa2db,	// (0x00018e1b) scroll_pane_cp05_ParamLimits

0xa2db,	// (0x00018e1b) scroll_pane_cp05

0x19d7,	// (0x00010517) mce_header_field_pane_ParamLimits

0x19d7,	// (0x00010517) mce_header_field_pane

0x19ee,	// (0x0001052e) mce_header_field_pane_2_ParamLimits

0x19ee,	// (0x0001052e) mce_header_field_pane_2

0x1a04,	// (0x00010544) mce_header_field_pane_3

0x1a0c,	// (0x0001054c) list_single_mce_message_pane_ParamLimits

0x1a0c,	// (0x0001054c) list_single_mce_message_pane

0x1a21,	// (0x00010561) list_single_mce_smart_pane_ParamLimits

0x1a21,	// (0x00010561) list_single_mce_smart_pane

0xa2e7,	// (0x00018e27) input_focus_pane_cp03

0xa2f0,	// (0x00018e30) list_header_data_pane

0x1a41,	// (0x00010581) mce_header_field_pane_t1

0x1a51,	// (0x00010591) list_single_mce_header_pane_ParamLimits

0x1a51,	// (0x00010591) list_single_mce_header_pane

0xa2f8,	// (0x00018e38) list_single_mce_header_pane_t1

0xa307,	// (0x00018e47) list_single_mce_message_pane_g1

0xa30f,	// (0x00018e4f) list_single_mce_message_pane_t1

0x1a8b,	// (0x000105cb) bg_cale_heading_pane_cp01_ParamLimits

0x1a8b,	// (0x000105cb) bg_cale_heading_pane_cp01

0xa31d,	// (0x00018e5d) bg_cale_pane_cp02_ParamLimits

0xa31d,	// (0x00018e5d) bg_cale_pane_cp02

0x1aba,	// (0x000105fa) cale_month_corner_pane

0x1ad9,	// (0x00010619) cale_month_day_heading_pane_ParamLimits

0x1ad9,	// (0x00010619) cale_month_day_heading_pane

0x1b20,	// (0x00010660) cale_month_pane_g1_ParamLimits

0x1b20,	// (0x00010660) cale_month_pane_g1

0x1b44,	// (0x00010684) cale_month_pane_g2_ParamLimits

0x1b44,	// (0x00010684) cale_month_pane_g2

0x1b74,	// (0x000106b4) cale_month_pane_g3_ParamLimits

0x1b74,	// (0x000106b4) cale_month_pane_g3

0x1bb0,	// (0x000106f0) cale_month_pane_g4_ParamLimits

0x1bb0,	// (0x000106f0) cale_month_pane_g4

0x1bec,	// (0x0001072c) cale_month_pane_g5_ParamLimits

0x1bec,	// (0x0001072c) cale_month_pane_g5

0x1c34,	// (0x00010774) cale_month_pane_g6_ParamLimits

0x1c34,	// (0x00010774) cale_month_pane_g6

0x1c80,	// (0x000107c0) cale_month_pane_g7_ParamLimits

0x1c80,	// (0x000107c0) cale_month_pane_g7

0x1cd4,	// (0x00010814) cale_month_pane_g8_ParamLimits

0x1cd4,	// (0x00010814) cale_month_pane_g8

0x1d28,	// (0x00010868) cale_month_pane_g9_ParamLimits

0x1d28,	// (0x00010868) cale_month_pane_g9

0x1d7a,	// (0x000108ba) cale_month_pane_g10_ParamLimits

0x1d7a,	// (0x000108ba) cale_month_pane_g10

0x1dcc,	// (0x0001090c) cale_month_pane_g11_ParamLimits

0x1dcc,	// (0x0001090c) cale_month_pane_g11

0x1e1e,	// (0x0001095e) cale_month_pane_g12_ParamLimits

0x1e1e,	// (0x0001095e) cale_month_pane_g12

0x1e70,	// (0x000109b0) cale_month_pane_g13_ParamLimits

0x1e70,	// (0x000109b0) cale_month_pane_g13

0x000c,

0xf296,	// (0x0001ddd6) cale_month_pane_g_ParamLimits

0xf296,	// (0x0001ddd6) cale_month_pane_g

0x1ec2,	// (0x00010a02) cale_month_week_pane

0x1ee6,	// (0x00010a26) grid_cale_month_pane_ParamLimits

0x1ee6,	// (0x00010a26) grid_cale_month_pane

0x1f24,	// (0x00010a64) cale_month_day_heading_pane_t1

0x1faa,	// (0x00010aea) cale_month_day_heading_pane_t2

0x203b,	// (0x00010b7b) cale_month_day_heading_pane_t3

0x20cc,	// (0x00010c0c) cale_month_day_heading_pane_t4

0x2161,	// (0x00010ca1) cale_month_day_heading_pane_t5

0x2202,	// (0x00010d42) cale_month_day_heading_pane_t6

0x22a3,	// (0x00010de3) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0001ddf1) cale_month_day_heading_pane_t

0x9fad,	// (0x00018aed) bg_cale_side_pane_cp01

0x234c,	// (0x00010e8c) cale_month_week_pane_t1

0x2365,	// (0x00010ea5) cale_month_week_pane_t2

0x237e,	// (0x00010ebe) cale_month_week_pane_t3

0x2397,	// (0x00010ed7) cale_month_week_pane_t4

0x23b0,	// (0x00010ef0) cale_month_week_pane_t5

0x23c9,	// (0x00010f09) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0001de00) cale_month_week_pane_t

0x23e2,	// (0x00010f22) cell_cale_month_pane_ParamLimits

0x23e2,	// (0x00010f22) cell_cale_month_pane

0xa35c,	// (0x00018e9c) cell_cale_month_pane_g1

0x2536,	// (0x00011076) cell_cale_month_pane_t1_ParamLimits

0x2536,	// (0x00011076) cell_cale_month_pane_t1

0x9fbb,	// (0x00018afb) grid_highlight_pane_cp08

0x9e4f,	// (0x0001898f) main_smil_g1

0x2556,	// (0x00011096) smil_status_pane

0xa368,	// (0x00018ea8) smil_text_pane

0xbd32,	// (0x0001a872) bg_popup_call3_rect_pane_g8

0xbd3a,	// (0x0001a87a) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0001e0b9) bg_popup_call3_rect_pane_g

0xbfd5,	// (0x0001ab15) smil_status_volume_pane_g1

0xa372,	// (0x00018eb2) smil_status_pane_t1

0xc008,	// (0x0001ab48) volume_smil_pane

0xa389,	// (0x00018ec9) list_smil_text_pane

0x2569,	// (0x000110a9) scroll_pane_cp011

0x2574,	// (0x000110b4) smil_text_list_pane_t1_ParamLimits

0x2574,	// (0x000110b4) smil_text_list_pane_t1

0xa393,	// (0x00018ed3) aid_volume_smil_ParamLimits

0xa393,	// (0x00018ed3) aid_volume_smil

0x9e4f,	// (0x0001898f) smil_volume_pane_g1

0x9e4f,	// (0x0001898f) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0001de20) smil_volume_pane_g

0x0b23,	// (0x0000f663) listscroll_cale_day_pane

0xa3b5,	// (0x00018ef5) bg_cale_pane

0xa3cd,	// (0x00018f0d) list_cale_pane

0xa3f0,	// (0x00018f30) scroll_pane_cp09

0xa401,	// (0x00018f41) cale_bg_pane_g1

0xa409,	// (0x00018f49) cale_bg_pane_g2

0xa411,	// (0x00018f51) cale_bg_pane_g3

0xa419,	// (0x00018f59) cale_bg_pane_g4

0xa421,	// (0x00018f61) cale_bg_pane_g5

0xa429,	// (0x00018f69) cale_bg_pane_g6

0xa431,	// (0x00018f71) cale_bg_pane_g7

0xa439,	// (0x00018f79) cale_bg_pane_g8

0xa441,	// (0x00018f81) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0001de25) cale_bg_pane_g

0x25b0,	// (0x000110f0) list_cale_time_pane_ParamLimits

0x25b0,	// (0x000110f0) list_cale_time_pane

0xa449,	// (0x00018f89) list_cale_time_pane_g1_ParamLimits

0xa449,	// (0x00018f89) list_cale_time_pane_g1

0xa455,	// (0x00018f95) list_cale_time_pane_g2_ParamLimits

0xa455,	// (0x00018f95) list_cale_time_pane_g2

0x25c3,	// (0x00011103) list_cale_time_pane_g3_ParamLimits

0x25c3,	// (0x00011103) list_cale_time_pane_g3

0x25d1,	// (0x00011111) list_cale_time_pane_g4_ParamLimits

0x25d1,	// (0x00011111) list_cale_time_pane_g4

0x25df,	// (0x0001111f) list_cale_time_pane_g5_ParamLimits

0x25df,	// (0x0001111f) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0001de38) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0001de38) list_cale_time_pane_g

0xa46f,	// (0x00018faf) list_cale_time_pane_t1_ParamLimits

0xa46f,	// (0x00018faf) list_cale_time_pane_t1

0xa497,	// (0x00018fd7) list_cale_time_pane_t2_ParamLimits

0xa497,	// (0x00018fd7) list_cale_time_pane_t2

0x2934,	// (0x00011474) aid_blid_cardinal_pane

0x2972,	// (0x000114b2) compass_pane_t4

0xa4bf,	// (0x00018fff) list_cale_time_pane_t4_ParamLimits

0xa4bf,	// (0x00018fff) list_cale_time_pane_t4

0x2980,	// (0x000114c0) compass_pane_t5

0x298e,	// (0x000114ce) compass_pane_t6

0x299c,	// (0x000114dc) compass_pane_t7

0xa979,	// (0x000194b9) navi_pane_cc_t1

0xaae0,	// (0x00019620) aid_phob_thumbnail_center_pane

0x307a,	// (0x00011bba) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0001de45) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0001de45) list_cale_time_pane_t

0x96eb,	// (0x0001822b) bg_popup_window_pane_cp02_ParamLimits

0x96eb,	// (0x0001822b) bg_popup_window_pane_cp02

0xa4e7,	// (0x00019027) heading_pane_cp01_ParamLimits

0xa4e7,	// (0x00019027) heading_pane_cp01

0xa4f3,	// (0x00019033) loc_req_pane_ParamLimits

0xa4f3,	// (0x00019033) loc_req_pane

0xa503,	// (0x00019043) loc_type_pane_ParamLimits

0xa503,	// (0x00019043) loc_type_pane

0xa515,	// (0x00019055) loc_type_pane_t1_ParamLimits

0xa515,	// (0x00019055) loc_type_pane_t1

0xa527,	// (0x00019067) loc_type_pane_t2_ParamLimits

0xa527,	// (0x00019067) loc_type_pane_t2

0xa539,	// (0x00019079) loc_type_pane_t3_ParamLimits

0xa539,	// (0x00019079) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0001de4c) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0001de4c) loc_type_pane_t

0xa54b,	// (0x0001908b) list_loc_req_pane

0xa555,	// (0x00019095) scroll_pane_cp012

0x25ed,	// (0x0001112d) list_single_loc_request_popup_menu_pane_ParamLimits

0x25ed,	// (0x0001112d) list_single_loc_request_popup_menu_pane

0xa560,	// (0x000190a0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa560,	// (0x000190a0) list_single_loc_request_popup_menu_pane_g1

0xa56c,	// (0x000190ac) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa56c,	// (0x000190ac) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0001de53) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0001de53) list_single_loc_request_popup_menu_pane_g

0xa578,	// (0x000190b8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa578,	// (0x000190b8) list_single_loc_request_popup_menu_pane_t1

0x9cef,	// (0x0001882f) bg_popup_window_pane_cp03_ParamLimits

0x9cef,	// (0x0001882f) bg_popup_window_pane_cp03

0xa58e,	// (0x000190ce) heading_loc_req_pane_ParamLimits

0xa58e,	// (0x000190ce) heading_loc_req_pane

0x25fa,	// (0x0001113a) popup_dyc_status_message_window_g1_ParamLimits

0x25fa,	// (0x0001113a) popup_dyc_status_message_window_g1

0x260e,	// (0x0001114e) popup_dyc_status_message_window_t1_ParamLimits

0x260e,	// (0x0001114e) popup_dyc_status_message_window_t1

0x2623,	// (0x00011163) popup_dyc_status_message_window_t2_ParamLimits

0x2623,	// (0x00011163) popup_dyc_status_message_window_t2

0x2638,	// (0x00011178) popup_dyc_status_message_window_t3_ParamLimits

0x2638,	// (0x00011178) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0001de58) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0001de58) popup_dyc_status_message_window_t

0x9a94,	// (0x000185d4) bg_heading_pane_cp01

0xa59a,	// (0x000190da) heading_loc_req_pane_g1

0xa5a2,	// (0x000190e2) heading_loc_req_pane_g2

0xa5aa,	// (0x000190ea) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0001de5f) heading_loc_req_pane_g

0xa5b2,	// (0x000190f2) heading_loc_req_pane_t1

0xa5c1,	// (0x00019101) bg_popup_sub_pane_cp01_ParamLimits

0xa5c1,	// (0x00019101) bg_popup_sub_pane_cp01

0xa5cf,	// (0x0001910f) popup_cale_events_window_g1_ParamLimits

0xa5cf,	// (0x0001910f) popup_cale_events_window_g1

0xa5ef,	// (0x0001912f) popup_cale_events_window_g2_ParamLimits

0xa5ef,	// (0x0001912f) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0001de93) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0001de93) popup_cale_events_window_g

0xa60f,	// (0x0001914f) popup_cale_events_window_t1_ParamLimits

0xa60f,	// (0x0001914f) popup_cale_events_window_t1

0xa621,	// (0x00019161) popup_cale_events_window_t2_ParamLimits

0xa621,	// (0x00019161) popup_cale_events_window_t2

0xa65f,	// (0x0001919f) popup_cale_events_window_t3_ParamLimits

0xa65f,	// (0x0001919f) popup_cale_events_window_t3

0xa699,	// (0x000191d9) popup_cale_events_window_t4_ParamLimits

0xa699,	// (0x000191d9) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0001de98) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0001de98) popup_cale_events_window_t

0x272f,	// (0x0001126f) call_type_pane

0x273f,	// (0x0001127f) popup_call_status_window_g1

0x2753,	// (0x00011293) popup_call_status_window_g2

0x2767,	// (0x000112a7) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0001dea1) popup_call_status_window_g

0xa6cf,	// (0x0001920f) call_type_pane_g1

0xa6d8,	// (0x00019218) call_type_pane_g2

0x0001,

0xf368,	// (0x0001dea8) call_type_pane_g

0x9a94,	// (0x000185d4) bg_popup_sub_pane_cp02

0xa6e1,	// (0x00019221) listscroll_popup_wml_pane

0xa6e9,	// (0x00019229) list_wml_pane

0xa6f3,	// (0x00019233) scroll_pane_cp013

0xa6fe,	// (0x0001923e) list_single_graphic_popup_wml_pane_ParamLimits

0xa6fe,	// (0x0001923e) list_single_graphic_popup_wml_pane

0x9e4f,	// (0x0001898f) list_single_graphic_popup_wml_pane_g1

0xa712,	// (0x00019252) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0001dead) list_single_graphic_popup_wml_pane_g

0xa71a,	// (0x0001925a) list_single_graphic_popup_wml_pane_t1

0xa730,	// (0x00019270) aid_call_pane

0x9ce7,	// (0x00018827) popup_clock_analogue_window_g1

0x9ce7,	// (0x00018827) popup_clock_analogue_window_g2

0xa738,	// (0x00019278) popup_clock_analogue_window_g3

0xa738,	// (0x00019278) popup_clock_analogue_window_g4

0x9e4f,	// (0x0001898f) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0001deb2) popup_clock_analogue_window_g

0xa740,	// (0x00019280) popup_clock_analogue_window_t1

0xa74e,	// (0x0001928e) clock_digital_number_pane_ParamLimits

0xa74e,	// (0x0001928e) clock_digital_number_pane

0xa75a,	// (0x0001929a) clock_digital_number_pane_cp02_ParamLimits

0xa75a,	// (0x0001929a) clock_digital_number_pane_cp02

0xa766,	// (0x000192a6) clock_digital_number_pane_cp03_ParamLimits

0xa766,	// (0x000192a6) clock_digital_number_pane_cp03

0xa772,	// (0x000192b2) clock_digital_number_pane_cp04_ParamLimits

0xa772,	// (0x000192b2) clock_digital_number_pane_cp04

0xa782,	// (0x000192c2) clock_digital_separator_pane_ParamLimits

0xa782,	// (0x000192c2) clock_digital_separator_pane

0xa78e,	// (0x000192ce) popup_clock_digital_window_t1

0x9e4f,	// (0x0001898f) clock_digital_number_pane_g1

0x9e4f,	// (0x0001898f) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0001de20) clock_digital_number_pane_g

0x9e4f,	// (0x0001898f) clock_digital_separator_pane_g1

0x9e4f,	// (0x0001898f) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0001de20) clock_digital_separator_pane_g

0x9a94,	// (0x000185d4) bg_popup_window_pane_cp04

0xa7ab,	// (0x000192eb) heading_pane_cp03

0xa7b3,	// (0x000192f3) listscroll_popup_gms_pane

0xa7bb,	// (0x000192fb) grid_large_graphic_popup_pane

0xa7c5,	// (0x00019305) listscroll_popup_gms_pane_g1

0xa7cd,	// (0x0001930d) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0001debd) listscroll_popup_gms_pane_g

0xa1c1,	// (0x00018d01) scroll_pane_cp014

0x2776,	// (0x000112b6) cell_large_graphic_popup_pane_ParamLimits

0x2776,	// (0x000112b6) cell_large_graphic_popup_pane

0x278e,	// (0x000112ce) cell_large_graphic_popup_pane_g1_ParamLimits

0x278e,	// (0x000112ce) cell_large_graphic_popup_pane_g1

0xa7d5,	// (0x00019315) cell_large_graphic_popup_pane_g2_ParamLimits

0xa7d5,	// (0x00019315) cell_large_graphic_popup_pane_g2

0xa7e1,	// (0x00019321) cell_large_graphic_popup_pane_g3_ParamLimits

0xa7e1,	// (0x00019321) cell_large_graphic_popup_pane_g3

0xa7ee,	// (0x0001932e) cell_large_graphic_popup_pane_g4_ParamLimits

0xa7ee,	// (0x0001932e) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0001dec2) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0001dec2) cell_large_graphic_popup_pane_g

0xa7fe,	// (0x0001933e) grid_highlight_pane_cp010

0x9e4f,	// (0x0001898f) bg_popup_call_pane_g1

0xa808,	// (0x00019348) list_single_graphic_popup_conf_pane_ParamLimits

0xa808,	// (0x00019348) list_single_graphic_popup_conf_pane

0xa81b,	// (0x0001935b) list_highlight_pane_cp01

0xa824,	// (0x00019364) list_single_graphic_popup_conf_pane_g1

0xa82c,	// (0x0001936c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0001decb) list_single_graphic_popup_conf_pane_g

0xa834,	// (0x00019374) list_single_graphic_popup_conf_pane_t1

0xa842,	// (0x00019382) linegrid_cams_pane_g1

0x279a,	// (0x000112da) linegrid_cams_pane_g2

0x9fee,	// (0x00018b2e) linegrid_cams_pane_g3

0xa84b,	// (0x0001938b) linegrid_cams_pane_g4

0x27a3,	// (0x000112e3) linegrid_cams_pane_g5

0x27ac,	// (0x000112ec) linegrid_cams_pane_g6

0x9ff7,	// (0x00018b37) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0001ded0) linegrid_cams_pane_g

0xa854,	// (0x00019394) popup_clock_analogue_window

0xa854,	// (0x00019394) popup_clock_digital_window

0x9a94,	// (0x000185d4) popup_phob_thumbnail_window

0x9e4f,	// (0x0001898f) call_video_uplink_pane_g1

0xa85d,	// (0x0001939d) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0001dedf) call_video_uplink_pane_g

0xa865,	// (0x000193a5) video_uplink_pane

0xa86d,	// (0x000193ad) mce_image_pane_g1

0x27b7,	// (0x000112f7) mce_image_pane_g2

0x27c1,	// (0x00011301) mce_image_pane_g3

0x27c9,	// (0x00011309) mce_image_pane_g4

0x27d1,	// (0x00011311) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0001dee4) mce_image_pane_g

0xa877,	// (0x000193b7) control_top_pane_stacon_cp01_ParamLimits

0xa877,	// (0x000193b7) control_top_pane_stacon_cp01

0xa88b,	// (0x000193cb) uni_indicator_pane_stacon_cp01_ParamLimits

0xa88b,	// (0x000193cb) uni_indicator_pane_stacon_cp01

0xa89c,	// (0x000193dc) bg_popup_sub_pane_cp03

0xa8a6,	// (0x000193e6) chi_dic_find_pane

0x27d9,	// (0x00011319) listscroll_chi_dic_pane

0xa8ae,	// (0x000193ee) main_pane_chidic_g1

0xa8b6,	// (0x000193f6) chi_dic_find_pane_t1

0xa8c4,	// (0x00019404) find_chidic_pane

0xa8cd,	// (0x0001940d) chi_dic_list_pane_ParamLimits

0xa8cd,	// (0x0001940d) chi_dic_list_pane

0xa8de,	// (0x0001941e) scroll_pane_cp020

0xa8e6,	// (0x00019426) find_chidic_pane_t1

0x9a94,	// (0x000185d4) input_focus_pane_cp06

0x27ed,	// (0x0001132d) list_chi_dic_pane_ParamLimits

0x27ed,	// (0x0001132d) list_chi_dic_pane

0x27ff,	// (0x0001133f) list_chi_dic_pane_t1_ParamLimits

0x27ff,	// (0x0001133f) list_chi_dic_pane_t1

0x9a94,	// (0x000185d4) list_highlight_pane_cp020

0xa8f5,	// (0x00019435) bg_cale_heading_pane_g1

0x2812,	// (0x00011352) bg_cale_heading_pane_g2

0x281a,	// (0x0001135a) bg_cale_heading_pane_g3

0x2822,	// (0x00011362) bg_cale_heading_pane_g4

0x282c,	// (0x0001136c) bg_cale_heading_pane_g5

0x2836,	// (0x00011376) bg_cale_heading_pane_g6

0x283e,	// (0x0001137e) bg_cale_heading_pane_g7

0x2846,	// (0x00011386) bg_cale_heading_pane_g8

0x2850,	// (0x00011390) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0001deef) bg_cale_heading_pane_g

0xa8f5,	// (0x00019435) bg_cale_side_pane_g1

0x285a,	// (0x0001139a) bg_cale_side_pane_g2

0x2862,	// (0x000113a2) bg_cale_side_pane_g3

0x286a,	// (0x000113aa) bg_cale_side_pane_g4

0x2872,	// (0x000113b2) bg_cale_side_pane_g5

0x287a,	// (0x000113ba) bg_cale_side_pane_g6

0x2882,	// (0x000113c2) bg_cale_side_pane_g7

0x288a,	// (0x000113ca) bg_cale_side_pane_g8

0x2892,	// (0x000113d2) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0001df02) bg_cale_side_pane_g

0x289a,	// (0x000113da) popup_call_status_window_ParamLimits

0x289a,	// (0x000113da) popup_call_status_window

0xa8fd,	// (0x0001943d) stacon_top_pane

0xa905,	// (0x00019445) status_pane_ParamLimits

0xa905,	// (0x00019445) status_pane

0xa91a,	// (0x0001945a) status_small_pane

0xa922,	// (0x00019462) control_pane

0x9a94,	// (0x000185d4) stacon_bottom_pane

0xa92a,	// (0x0001946a) list_single_mce_smart_pane_t1_ParamLimits

0xa92a,	// (0x0001946a) list_single_mce_smart_pane_t1

0xa93d,	// (0x0001947d) list_single_mce_smart_pane_t2_ParamLimits

0xa93d,	// (0x0001947d) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0001df15) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0001df15) list_single_mce_smart_pane_t

0x28e3,	// (0x00011423) compass_pane

0x28ec,	// (0x0001142c) main_location2_pane_t1

0x28fe,	// (0x0001143e) main_location2_pane_t2

0x2910,	// (0x00011450) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0001df1a) main_location2_pane_t

0xa95c,	// (0x0001949c) compass_pane_g1_ParamLimits

0xa95c,	// (0x0001949c) compass_pane_g1

0x2954,	// (0x00011494) compass_pane_t1

0x2963,	// (0x000114a3) compass_pane_t2

0x0005,

0xf3e3,	// (0x0001df23) compass_pane_t

0x29aa,	// (0x000114ea) text_secondary_cp61

0xa970,	// (0x000194b0) navi_pane_cams_g5

0xa993,	// (0x000194d3) navi_pane_im_t1

0xa9a1,	// (0x000194e1) navi_pane_mp_g1_ParamLimits

0xa9a1,	// (0x000194e1) navi_pane_mp_g1

0xa9b5,	// (0x000194f5) navi_pane_mp_g2_ParamLimits

0xa9b5,	// (0x000194f5) navi_pane_mp_g2

0xa9c1,	// (0x00019501) navi_pane_mp_g3_ParamLimits

0xa9c1,	// (0x00019501) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0001df37) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0001df37) navi_pane_mp_g

0xa9cd,	// (0x0001950d) navi_pane_mp_t1

0xa9db,	// (0x0001951b) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0001df3e) navi_pane_mp_t

0xaa17,	// (0x00019557) navi_pane_vt_g1

0xa9cd,	// (0x0001950d) navi_pane_vt_t1

0xaa1f,	// (0x0001955f) navi_slider_pane

0xaa27,	// (0x00019567) zooming_pane

0xaa2f,	// (0x0001956f) navi_slider_pane_g1

0xaa38,	// (0x00019578) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0001df45) navi_slider_pane_g

0xaa65,	// (0x000195a5) aid_levels_zoom

0xaa6d,	// (0x000195ad) zooming_pane_g1

0xaa75,	// (0x000195b5) zooming_pane_g2

0xaa75,	// (0x000195b5) zooming_pane_g3

0x0002,

0xf414,	// (0x0001df54) zooming_pane_g

0xaa7d,	// (0x000195bd) level_10_zoom

0xaa86,	// (0x000195c6) level_11_zoom

0xaa8f,	// (0x000195cf) level_1_zoom

0xaa98,	// (0x000195d8) level_2_zoom

0xaaa1,	// (0x000195e1) level_3_zoom

0xaaaa,	// (0x000195ea) level_4_zoom

0xaab3,	// (0x000195f3) level_5_zoom

0xaabc,	// (0x000195fc) level_6_zoom

0xaac5,	// (0x00019605) level_7_zoom

0xaace,	// (0x0001960e) level_8_zoom

0xaad7,	// (0x00019617) level_9_zoom

0xaae8,	// (0x00019628) popup_phob_thumbnail_window_g1

0xaaf0,	// (0x00019630) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0001df5b) popup_phob_thumbnail_window_g

0xbe94,	// (0x0001a9d4) level_1_location

0xbe9c,	// (0x0001a9dc) level_2_location

0xbea4,	// (0x0001a9e4) level_3_location

0xbeac,	// (0x0001a9ec) level_4_location

0xaa27,	// (0x00019567) level_5_location

0x2aed,	// (0x0001162d) mce_icon_pane_g1

0x2af7,	// (0x00011637) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0001df60) mce_icon_pane_g

0x2aff,	// (0x0001163f) main_mup_pane_g1_ParamLimits

0x2aff,	// (0x0001163f) main_mup_pane_g1

0x2b15,	// (0x00011655) main_mup_pane_g2_ParamLimits

0x2b15,	// (0x00011655) main_mup_pane_g2

0x2b2d,	// (0x0001166d) main_mup_pane_g3_ParamLimits

0x2b2d,	// (0x0001166d) main_mup_pane_g3

0x2b45,	// (0x00011685) main_mup_pane_g4_ParamLimits

0x2b45,	// (0x00011685) main_mup_pane_g4

0x2b5d,	// (0x0001169d) main_mup_pane_g5_ParamLimits

0x2b5d,	// (0x0001169d) main_mup_pane_g5

0x2b79,	// (0x000116b9) main_mup_pane_g6_ParamLimits

0x2b79,	// (0x000116b9) main_mup_pane_g6

0x2b91,	// (0x000116d1) main_mup_pane_g7_ParamLimits

0x2b91,	// (0x000116d1) main_mup_pane_g7

0x2ba9,	// (0x000116e9) main_mup_pane_g8_ParamLimits

0x2ba9,	// (0x000116e9) main_mup_pane_g8

0x2bc3,	// (0x00011703) main_mup_pane_g9_ParamLimits

0x2bc3,	// (0x00011703) main_mup_pane_g9

0x2bdd,	// (0x0001171d) main_mup_pane_g10_ParamLimits

0x2bdd,	// (0x0001171d) main_mup_pane_g10

0x2bf7,	// (0x00011737) main_mup_pane_g11_ParamLimits

0x2bf7,	// (0x00011737) main_mup_pane_g11

0x2c0b,	// (0x0001174b) main_mup_pane_g12_ParamLimits

0x2c0b,	// (0x0001174b) main_mup_pane_g12

0x2c21,	// (0x00011761) main_mup_pane_g13_ParamLimits

0x2c21,	// (0x00011761) main_mup_pane_g13

0x000c,

0xf425,	// (0x0001df65) main_mup_pane_g_ParamLimits

0xf425,	// (0x0001df65) main_mup_pane_g

0x2c35,	// (0x00011775) main_mup_pane_t1_ParamLimits

0x2c35,	// (0x00011775) main_mup_pane_t1

0x2c4f,	// (0x0001178f) main_mup_pane_t2_ParamLimits

0x2c4f,	// (0x0001178f) main_mup_pane_t2

0x2c67,	// (0x000117a7) main_mup_pane_t3_ParamLimits

0x2c67,	// (0x000117a7) main_mup_pane_t3

0x2c7f,	// (0x000117bf) main_mup_pane_t4_ParamLimits

0x2c7f,	// (0x000117bf) main_mup_pane_t4

0x2c9d,	// (0x000117dd) main_mup_pane_t5_ParamLimits

0x2c9d,	// (0x000117dd) main_mup_pane_t5

0x2cb2,	// (0x000117f2) main_mup_pane_t6_ParamLimits

0x2cb2,	// (0x000117f2) main_mup_pane_t6

0x0005,

0xf440,	// (0x0001df80) main_mup_pane_t_ParamLimits

0xf440,	// (0x0001df80) main_mup_pane_t

0x2cc4,	// (0x00011804) mup_progress_pane_ParamLimits

0x2cc4,	// (0x00011804) mup_progress_pane

0x2cd0,	// (0x00011810) mup_visualizer_pane_ParamLimits

0x2cd0,	// (0x00011810) mup_visualizer_pane

0x2d00,	// (0x00011840) mup_volume_pane_ParamLimits

0x2d00,	// (0x00011840) mup_volume_pane

0xaaf8,	// (0x00019638) mup_visualizer_pane_g1_ParamLimits

0xaaf8,	// (0x00019638) mup_visualizer_pane_g1

0xaaf8,	// (0x00019638) mup_visualizer_pane_g2_ParamLimits

0xaaf8,	// (0x00019638) mup_visualizer_pane_g2

0xa95c,	// (0x0001949c) mup_visualizer_pane_g3_ParamLimits

0xa95c,	// (0x0001949c) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0001df8d) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0001df8d) mup_visualizer_pane_g

0x9e4f,	// (0x0001898f) mup_volume_pane_g1

0xab0e,	// (0x0001964e) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0001df94) mup_volume_pane_g

0x9e4f,	// (0x0001898f) mup_progress_pane_g1

0xab17,	// (0x00019657) mup_progress_pane_g2

0xab20,	// (0x00019660) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0001df99) mup_progress_pane_g

0x9a94,	// (0x000185d4) bg_popup_window_pane_cp05

0xab29,	// (0x00019669) heading_pane_cp02_ParamLimits

0xab29,	// (0x00019669) heading_pane_cp02

0xab43,	// (0x00019683) list_popup_blid_pane

0xab4b,	// (0x0001968b) list_blid_sat_info_pane_ParamLimits

0xab4b,	// (0x0001968b) list_blid_sat_info_pane

0xab5e,	// (0x0001969e) list_blid_sat_info_pane_g1

0xab66,	// (0x000196a6) list_blid_sat_info_pane_t1

0x2e16,	// (0x00011956) mup_equalizer_pane_ParamLimits

0x2e16,	// (0x00011956) mup_equalizer_pane

0x2e2f,	// (0x0001196f) mup_equalizer_pane_cp1_ParamLimits

0x2e2f,	// (0x0001196f) mup_equalizer_pane_cp1

0x2e4c,	// (0x0001198c) mup_equalizer_pane_cp2_ParamLimits

0x2e4c,	// (0x0001198c) mup_equalizer_pane_cp2

0x2e69,	// (0x000119a9) mup_equalizer_pane_cp3_ParamLimits

0x2e69,	// (0x000119a9) mup_equalizer_pane_cp3

0x2e8a,	// (0x000119ca) mup_equalizer_pane_cp4_ParamLimits

0x2e8a,	// (0x000119ca) mup_equalizer_pane_cp4

0x2eab,	// (0x000119eb) mup_equalizer_pane_cp5

0x2ebf,	// (0x000119ff) mup_equalizer_pane_cp6

0x2ed3,	// (0x00011a13) mup_equalizer_pane_cp7

0xbdb2,	// (0x0001a8f2) bg_popup_call_poc_act_pane_g9

0xbdba,	// (0x0001a8fa) bg_popup_call_poc_act_pane_g10

0xbdc2,	// (0x0001a902) bg_popup_call_poc_act_pane_g11

0x000a,

0x9cef,	// (0x0001882f) mup_scale_pane

0x9e4f,	// (0x0001898f) mup_scale_pane_g1

0xab74,	// (0x000196b4) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0001dfb5) mup_scale_pane_g

0xab98,	// (0x000196d8) msg_data_pane

0xaba0,	// (0x000196e0) scroll_pane_cp017

0x2ef9,	// (0x00011a39) bg_list_pane_cp04_ParamLimits

0x2ef9,	// (0x00011a39) bg_list_pane_cp04

0xabb0,	// (0x000196f0) msg_data_pane_g1

0x2f11,	// (0x00011a51) msg_data_pane_g2

0x2f1b,	// (0x00011a5b) msg_data_pane_g3

0x2f23,	// (0x00011a63) msg_data_pane_g4

0x2f2b,	// (0x00011a6b) msg_data_pane_g5

0x2f33,	// (0x00011a73) msg_data_pane_g6

0x2f3b,	// (0x00011a7b) msg_data_pane_g7

0x0006,

0xf484,	// (0x0001dfc4) msg_data_pane_g

0x2f43,	// (0x00011a83) msg_text_pane_ParamLimits

0x2f43,	// (0x00011a83) msg_text_pane

0x2f67,	// (0x00011aa7) qrid_highlight_pane_cp011_ParamLimits

0x2f67,	// (0x00011aa7) qrid_highlight_pane_cp011

0x9a94,	// (0x000185d4) msg_body_pane

0x9a94,	// (0x000185d4) msg_header_pane

0xabb8,	// (0x000196f8) input_focus_pane_cp07

0xabcd,	// (0x0001970d) msg_header_pane_t1_ParamLimits

0xabcd,	// (0x0001970d) msg_header_pane_t1

0xabdf,	// (0x0001971f) msg_header_pane_t2_ParamLimits

0xabdf,	// (0x0001971f) msg_header_pane_t2

0x0001,

0xf498,	// (0x0001dfd8) msg_header_pane_t_ParamLimits

0xf498,	// (0x0001dfd8) msg_header_pane_t

0xabf1,	// (0x00019731) msg_body_pane_g1

0xabf9,	// (0x00019739) msg_body_pane_t1_ParamLimits

0xabf9,	// (0x00019739) msg_body_pane_t1

0xac2a,	// (0x0001976a) msg_body_pane_t2_ParamLimits

0xac2a,	// (0x0001976a) msg_body_pane_t2

0xac3c,	// (0x0001977c) msg_body_pane_t3_ParamLimits

0xac3c,	// (0x0001977c) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0001dfdd) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0001dfdd) msg_body_pane_t

0x2fd0,	// (0x00011b10) main_viewer_pane_g1_ParamLimits

0x2fd0,	// (0x00011b10) main_viewer_pane_g1

0x2fde,	// (0x00011b1e) main_viewer_pane_g2_ParamLimits

0x2fde,	// (0x00011b1e) main_viewer_pane_g2

0x2fec,	// (0x00011b2c) main_viewer_pane_g3_ParamLimits

0x2fec,	// (0x00011b2c) main_viewer_pane_g3

0x2ffb,	// (0x00011b3b) main_viewer_pane_g4_ParamLimits

0x2ffb,	// (0x00011b3b) main_viewer_pane_g4

0xac66,	// (0x000197a6) main_viewer_pane_g5_ParamLimits

0xac66,	// (0x000197a6) main_viewer_pane_g5

0xac66,	// (0x000197a6) main_viewer_pane_g7_ParamLimits

0xac66,	// (0x000197a6) main_viewer_pane_g7

0xac78,	// (0x000197b8) main_viewer_pane_g8_ParamLimits

0xac78,	// (0x000197b8) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0001dfed) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0001dfed) main_viewer_pane_g

0xac90,	// (0x000197d0) viewer_content_pane_ParamLimits

0xac90,	// (0x000197d0) viewer_content_pane

0x3037,	// (0x00011b77) main_postcard_pane_g1_ParamLimits

0x3037,	// (0x00011b77) main_postcard_pane_g1

0x304d,	// (0x00011b8d) main_postcard_pane_g2_ParamLimits

0x304d,	// (0x00011b8d) main_postcard_pane_g2

0x3063,	// (0x00011ba3) main_postcard_pane_g3_ParamLimits

0x3063,	// (0x00011ba3) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0001dffe) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0001dffe) main_postcard_pane_g

0x307a,	// (0x00011bba) main_postcard_pane_g4

0xbfe8,	// (0x0001ab28) smil_status_volume_pane_g2

0x30bd,	// (0x00011bfd) postcard_pane_ParamLimits

0x30bd,	// (0x00011bfd) postcard_pane

0xac9e,	// (0x000197de) postcard_pane_g1_ParamLimits

0xac9e,	// (0x000197de) postcard_pane_g1

0x30ff,	// (0x00011c3f) postcard_pane_g2_ParamLimits

0x30ff,	// (0x00011c3f) postcard_pane_g2

0x310b,	// (0x00011c4b) postcard_pane_g3_ParamLimits

0x310b,	// (0x00011c4b) postcard_pane_g3

0xacac,	// (0x000197ec) postcard_pane_g4_ParamLimits

0xacac,	// (0x000197ec) postcard_pane_g4

0x3117,	// (0x00011c57) postcard_pane_g5_ParamLimits

0x3117,	// (0x00011c57) postcard_pane_g5

0x312c,	// (0x00011c6c) postcard_pane_g6_ParamLimits

0x312c,	// (0x00011c6c) postcard_pane_g6

0xac9e,	// (0x000197de) postcard_pane_g7_ParamLimits

0xac9e,	// (0x000197de) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0001e00b) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0001e00b) postcard_pane_g

0x3140,	// (0x00011c80) main_mp2_pane_g1_ParamLimits

0x3140,	// (0x00011c80) main_mp2_pane_g1

0x314c,	// (0x00011c8c) main_mp2_pane_g2_ParamLimits

0x314c,	// (0x00011c8c) main_mp2_pane_g2

0x3158,	// (0x00011c98) main_mp2_pane_g3_ParamLimits

0x3158,	// (0x00011c98) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0001e01a) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0001e01a) main_mp2_pane_g

0x3164,	// (0x00011ca4) main_mp2_pane_t1_ParamLimits

0x3164,	// (0x00011ca4) main_mp2_pane_t1

0x3179,	// (0x00011cb9) main_mp2_pane_t2_ParamLimits

0x3179,	// (0x00011cb9) main_mp2_pane_t2

0x318b,	// (0x00011ccb) main_mp2_pane_t3_ParamLimits

0x318b,	// (0x00011ccb) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0001e021) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0001e021) main_mp2_pane_t

0xacba,	// (0x000197fa) pec_content_pane_ParamLimits

0xacba,	// (0x000197fa) pec_content_pane

0xa1c1,	// (0x00018d01) scroll_pane_cp015

0xaccc,	// (0x0001980c) pec_attribute_pane_ParamLimits

0xaccc,	// (0x0001980c) pec_attribute_pane

0x319d,	// (0x00011cdd) pec_content_pane_g1_ParamLimits

0x319d,	// (0x00011cdd) pec_content_pane_g1

0xacdc,	// (0x0001981c) pec_content_pane_t1_ParamLimits

0xacdc,	// (0x0001981c) pec_content_pane_t1

0xacee,	// (0x0001982e) pec_content_pane_t2_ParamLimits

0xacee,	// (0x0001982e) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0001e028) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0001e028) pec_content_pane_t

0x31a9,	// (0x00011ce9) list_single_graphic_pane_cp01_ParamLimits

0x31a9,	// (0x00011ce9) list_single_graphic_pane_cp01

0x9cef,	// (0x0001882f) bg_popup_sub_pane_cp04

0xad00,	// (0x00019840) popup_mup_playback_window_g1

0xad0c,	// (0x0001984c) popup_mup_playback_window_t1

0xad21,	// (0x00019861) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0001e02d) popup_mup_playback_window_t

0xad58,	// (0x00019898) main_image_pane_g1_ParamLimits

0xad58,	// (0x00019898) main_image_pane_g1

0xad9b,	// (0x000198db) scroll_pane_cp018_ParamLimits

0xad9b,	// (0x000198db) scroll_pane_cp018

0xadb3,	// (0x000198f3) scroll_pane_cp016_ParamLimits

0xadb3,	// (0x000198f3) scroll_pane_cp016

0x3276,	// (0x00011db6) smil2_image_pane_ParamLimits

0x3276,	// (0x00011db6) smil2_image_pane

0x32a6,	// (0x00011de6) smil2_root_pane_ParamLimits

0x32a6,	// (0x00011de6) smil2_root_pane

0x32de,	// (0x00011e1e) smil2_text_pane_ParamLimits

0x32de,	// (0x00011e1e) smil2_text_pane

0x9a94,	// (0x000185d4) bg_list_pane_cp06

0xadef,	// (0x0001992f) grid_radio_pane

0x9a94,	// (0x000185d4) bg_popup_window_pane_cp06

0xadf7,	// (0x00019937) main_fmradio_pane_t1

0xa7ab,	// (0x000192eb) heading_pane_cp04

0xae05,	// (0x00019945) main_fmradio_pane_t2

0xbdca,	// (0x0001a90a) popup_cale_lunar_info_window_g1

0xae13,	// (0x00019953) main_fmradio_pane_t3

0xbdd2,	// (0x0001a912) popup_cale_lunar_info_window_g2

0xae21,	// (0x00019961) main_fmradio_pane_t4

0x0001,

0xae2f,	// (0x0001996f) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0001e108) popup_cale_lunar_info_window_g

0xf502,	// (0x0001e042) main_fmradio_pane_t

0xae3d,	// (0x0001997d) wait_bar_pane_cp03

0xae45,	// (0x00019985) cell_fmradio_pane_ParamLimits

0xae45,	// (0x00019985) cell_fmradio_pane

0xac9e,	// (0x000197de) cell_fmradio_pane_g1_ParamLimits

0xac9e,	// (0x000197de) cell_fmradio_pane_g1

0x9a94,	// (0x000185d4) grid_highlight_pane_cp011

0xae58,	// (0x00019998) poc_content_pane_ParamLimits

0xae58,	// (0x00019998) poc_content_pane

0xae6a,	// (0x000199aa) scroll_pane_cp019

0x335e,	// (0x00011e9e) popup_call_poc_act_window_ParamLimits

0x335e,	// (0x00011e9e) popup_call_poc_act_window

0x3382,	// (0x00011ec2) popup_call_poc_inact_window_ParamLimits

0x3382,	// (0x00011ec2) popup_call_poc_inact_window

0xf59f,	// (0x0001e0df) bg_popup_call_poc_act_pane_g

0xbd42,	// (0x0001a882) bg_popup_call_poc_inact_pane_g1

0xbd4a,	// (0x0001a88a) bg_popup_call_poc_inact_pane_g2

0xae72,	// (0x000199b2) popup_call_poc_act_window_g2

0xbd52,	// (0x0001a892) bg_popup_call_poc_inact_pane_g3

0xbd5a,	// (0x0001a89a) bg_popup_call_poc_inact_pane_g4

0xbd62,	// (0x0001a8a2) bg_popup_call_poc_inact_pane_g5

0xae7a,	// (0x000199ba) popup_call_poc_act_window_t1_ParamLimits

0xae7a,	// (0x000199ba) popup_call_poc_act_window_t1

0xaea2,	// (0x000199e2) popup_call_poc_act_window_t2_ParamLimits

0xaea2,	// (0x000199e2) popup_call_poc_act_window_t2

0xaeca,	// (0x00019a0a) popup_call_poc_act_window_t3_ParamLimits

0xaeca,	// (0x00019a0a) popup_call_poc_act_window_t3

0xaef2,	// (0x00019a32) popup_call_poc_act_window_t4_ParamLimits

0xaef2,	// (0x00019a32) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0001e04d) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0001e04d) popup_call_poc_act_window_t

0xbd6a,	// (0x0001a8aa) bg_popup_call_poc_inact_pane_g6

0xbd72,	// (0x0001a8b2) bg_popup_call_poc_inact_pane_g7

0xbd7a,	// (0x0001a8ba) bg_popup_call_poc_inact_pane_g8

0xaf04,	// (0x00019a44) popup_call_poc_inact_window_g2

0xbd82,	// (0x0001a8c2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0001e0cc) bg_popup_call_poc_inact_pane_g

0xaf0c,	// (0x00019a4c) popup_call_poc_inact_window_t1_ParamLimits

0xaf0c,	// (0x00019a4c) popup_call_poc_inact_window_t1

0xaf21,	// (0x00019a61) popup_call_poc_inact_window_t2_ParamLimits

0xaf21,	// (0x00019a61) popup_call_poc_inact_window_t2

0xaf36,	// (0x00019a76) popup_call_poc_inact_window_t3_ParamLimits

0xaf36,	// (0x00019a76) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0001e056) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0001e056) popup_call_poc_inact_window_t

0xbf5b,	// (0x0001aa9b) context_pane_ParamLimits

0x3ba7,	// (0x000126e7) signal_pane_ParamLimits

0xaa27,	// (0x00019567) main_call2_pane

0xbf34,	// (0x0001aa74) popup_phob_thumbnail2_window_ParamLimits

0xbf34,	// (0x0001aa74) popup_phob_thumbnail2_window

0xac4e,	// (0x0001978e) aid_hotspot_pointer_arrow_pane

0xac56,	// (0x00019796) aid_hotspot_pointer_hand_pane

0x36cb,	// (0x0001220b) phob_pre_status_pane_g5

0x11a7,	// (0x0000fce7) cams_zoom_pane_ParamLimits

0x11b6,	// (0x0000fcf6) image_vga_pane_ParamLimits

0x11d0,	// (0x0000fd10) main_camera_pane_g1_ParamLimits

0x11e2,	// (0x0000fd22) main_camera_pane_g2_ParamLimits

0x11f2,	// (0x0000fd32) main_camera_pane_g3_ParamLimits

0x1202,	// (0x0000fd42) main_camera_pane_g4_ParamLimits

0x1212,	// (0x0000fd52) main_camera_pane_g5_ParamLimits

0x1222,	// (0x0000fd62) main_camera_pane_g6_ParamLimits

0x1234,	// (0x0000fd74) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0001dd55) main_camera_pane_g_ParamLimits

0x1244,	// (0x0000fd84) main_camera_pane_t1_ParamLimits

0x125a,	// (0x0000fd9a) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0001dd66) main_camera_pane_t_ParamLimits

0x9cef,	// (0x0001882f) bg_popup_preview_window_pane_cp01_ParamLimits

0x9cef,	// (0x0001882f) bg_popup_preview_window_pane_cp01

0xaf4b,	// (0x00019a8b) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf4b,	// (0x00019a8b) popup_phob_thumbnail2_window_g1

0x9a94,	// (0x000185d4) call2_cli_visual_pane

0x33b6,	// (0x00011ef6) popup_call2_audio_conf_window_ParamLimits

0x33b6,	// (0x00011ef6) popup_call2_audio_conf_window

0x33d6,	// (0x00011f16) popup_call2_audio_first_window_ParamLimits

0x33d6,	// (0x00011f16) popup_call2_audio_first_window

0x346c,	// (0x00011fac) popup_call2_audio_in_window_ParamLimits

0x346c,	// (0x00011fac) popup_call2_audio_in_window

0x34b4,	// (0x00011ff4) popup_call2_audio_out_window_ParamLimits

0x34b4,	// (0x00011ff4) popup_call2_audio_out_window

0x351e,	// (0x0001205e) popup_call2_audio_second_window_ParamLimits

0x351e,	// (0x0001205e) popup_call2_audio_second_window

0x3584,	// (0x000120c4) popup_call2_audio_wait_window_ParamLimits

0x3584,	// (0x000120c4) popup_call2_audio_wait_window

0x9a94,	// (0x000185d4) bg_popup_call2_act_pane_cp03

0x9cd1,	// (0x00018811) list_conf_pane_cp

0xaf57,	// (0x00019a97) popup_call2_audio_conf_window_t1

0xa808,	// (0x00019348) list_single_graphic_popup_conf2_pane_ParamLimits

0xa808,	// (0x00019348) list_single_graphic_popup_conf2_pane

0xa81b,	// (0x0001935b) list_highlight_pane_cp04

0xaf65,	// (0x00019aa5) list_single_graphic_popup_conf2_pane_g1

0xa82c,	// (0x0001936c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0001e05d) list_single_graphic_popup_conf2_pane_g

0xaf6f,	// (0x00019aaf) list_single_graphic_popup_conf2_pane_t1

0xaf7d,	// (0x00019abd) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf7d,	// (0x00019abd) bg_popup_call2_act_pane_cp01

0xb007,	// (0x00019b47) call_type_pane_cp05_ParamLimits

0xb007,	// (0x00019b47) call_type_pane_cp05

0xb05b,	// (0x00019b9b) popup_call2_audio_second_window_g1_ParamLimits

0xb05b,	// (0x00019b9b) popup_call2_audio_second_window_g1

0xb0af,	// (0x00019bef) popup_call2_audio_second_window_g2_ParamLimits

0xb0af,	// (0x00019bef) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0001e062) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0001e062) popup_call2_audio_second_window_g

0xb114,	// (0x00019c54) popup_call2_audio_second_window_t1_ParamLimits

0xb114,	// (0x00019c54) popup_call2_audio_second_window_t1

0xb1cf,	// (0x00019d0f) popup_call2_audio_second_window_t2_ParamLimits

0xb1cf,	// (0x00019d0f) popup_call2_audio_second_window_t2

0xb222,	// (0x00019d62) popup_call2_audio_second_window_t3_ParamLimits

0xb222,	// (0x00019d62) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0001e069) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0001e069) popup_call2_audio_second_window_t

0x9a94,	// (0x000185d4) bg_popup_call2_in_pane_cp02

0x9a9e,	// (0x000185de) call_type_pane_cp04

0x9aa6,	// (0x000185e6) popup_call2_audio_wait_window_g1

0x9aae,	// (0x000185ee) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0001dc42) popup_call2_audio_wait_window_g

0x9ab6,	// (0x000185f6) popup_call2_audio_wait_window_t3

0xb315,	// (0x00019e55) bg_popup_call2_act_pane_ParamLimits

0xb315,	// (0x00019e55) bg_popup_call2_act_pane

0xb3d5,	// (0x00019f15) call_type_pane_cp03_ParamLimits

0xb3d5,	// (0x00019f15) call_type_pane_cp03

0xb439,	// (0x00019f79) popup_call2_audio_first_window_g1_ParamLimits

0xb439,	// (0x00019f79) popup_call2_audio_first_window_g1

0xb4a9,	// (0x00019fe9) popup_call2_audio_first_window_g2_ParamLimits

0xb4a9,	// (0x00019fe9) popup_call2_audio_first_window_g2

0xaaf8,	// (0x00019638) popup_call2_audio_first_window_g3_ParamLimits

0xaaf8,	// (0x00019638) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0001e072) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0001e072) popup_call2_audio_first_window_g

0xb587,	// (0x0001a0c7) popup_call2_audio_first_window_t1_ParamLimits

0xb587,	// (0x0001a0c7) popup_call2_audio_first_window_t1

0xb68a,	// (0x0001a1ca) popup_call2_audio_first_window_t4_ParamLimits

0xb68a,	// (0x0001a1ca) popup_call2_audio_first_window_t4

0xb76d,	// (0x0001a2ad) popup_call2_audio_first_window_t5_ParamLimits

0xb76d,	// (0x0001a2ad) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0001e07d) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0001e07d) popup_call2_audio_first_window_t

0x9ce7,	// (0x00018827) bg_popup_call2_act_pane_g1

0xbdda,	// (0x0001a91a) popup_cale_lunar_info_window_t1

0xbde8,	// (0x0001a928) popup_cale_lunar_info_window_t2

0xbdf6,	// (0x0001a936) popup_cale_lunar_info_window_t3

0x9a94,	// (0x000185d4) bg_popup_call2_bubble_pane

0xb86e,	// (0x0001a3ae) bg_popup_call2_in_pane_cp01_ParamLimits

0xb86e,	// (0x0001a3ae) bg_popup_call2_in_pane_cp01

0x9770,	// (0x000182b0) call_type_pane_cp02

0xb8b6,	// (0x0001a3f6) popup_call2_audio_out_window_g1_ParamLimits

0xb8b6,	// (0x0001a3f6) popup_call2_audio_out_window_g1

0xb8e2,	// (0x0001a422) popup_call2_audio_out_window_g2_ParamLimits

0xb8e2,	// (0x0001a422) popup_call2_audio_out_window_g2

0xb90a,	// (0x0001a44a) popup_call2_audio_out_window_g3_ParamLimits

0xb90a,	// (0x0001a44a) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0001e086) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0001e086) popup_call2_audio_out_window_g

0xb945,	// (0x0001a485) popup_call2_audio_out_window_t1_ParamLimits

0xb945,	// (0x0001a485) popup_call2_audio_out_window_t1

0xb9a4,	// (0x0001a4e4) popup_call2_audio_out_window_t2_ParamLimits

0xb9a4,	// (0x0001a4e4) popup_call2_audio_out_window_t2

0xb9f8,	// (0x0001a538) popup_call2_audio_out_window_t3_ParamLimits

0xb9f8,	// (0x0001a538) popup_call2_audio_out_window_t3

0xba0e,	// (0x0001a54e) popup_call2_audio_out_window_t4_ParamLimits

0xba0e,	// (0x0001a54e) popup_call2_audio_out_window_t4

0xba24,	// (0x0001a564) popup_call2_audio_out_window_t5_ParamLimits

0xba24,	// (0x0001a564) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0001e08f) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0001e08f) popup_call2_audio_out_window_t

0xba88,	// (0x0001a5c8) bg_popup_call2_in_pane_ParamLimits

0xba88,	// (0x0001a5c8) bg_popup_call2_in_pane

0xbae4,	// (0x0001a624) popup_call2_audio_in_window_g1_ParamLimits

0xbae4,	// (0x0001a624) popup_call2_audio_in_window_g1

0xbb1c,	// (0x0001a65c) popup_call2_audio_in_window_g2_ParamLimits

0xbb1c,	// (0x0001a65c) popup_call2_audio_in_window_g2

0xbb54,	// (0x0001a694) popup_call2_audio_in_window_g3_ParamLimits

0xbb54,	// (0x0001a694) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0001e09c) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0001e09c) popup_call2_audio_in_window_g

0xbbac,	// (0x0001a6ec) popup_call2_audio_in_window_t1_ParamLimits

0xbbac,	// (0x0001a6ec) popup_call2_audio_in_window_t1

0xbc2c,	// (0x0001a76c) popup_call2_audio_in_window_t2_ParamLimits

0xbc2c,	// (0x0001a76c) popup_call2_audio_in_window_t2

0xbcac,	// (0x0001a7ec) popup_call2_audio_in_window_t3_ParamLimits

0xbcac,	// (0x0001a7ec) popup_call2_audio_in_window_t3

0xbcc6,	// (0x0001a806) popup_call2_audio_in_window_t4_ParamLimits

0xbcc6,	// (0x0001a806) popup_call2_audio_in_window_t4

0xbcd8,	// (0x0001a818) popup_call2_audio_in_window_t5_ParamLimits

0xbcd8,	// (0x0001a818) popup_call2_audio_in_window_t5

0xbced,	// (0x0001a82d) popup_call2_audio_in_window_t6_ParamLimits

0xbced,	// (0x0001a82d) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0001e0a5) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0001e0a5) popup_call2_audio_in_window_t

0x9ce7,	// (0x00018827) bg_popup_call2_in_pane_g1

0xbe04,	// (0x0001a944) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0001e10d) popup_cale_lunar_info_window_t

0x9cef,	// (0x0001882f) bg_popup_call2_rect_pane_ParamLimits

0x9cef,	// (0x0001882f) bg_popup_call2_rect_pane

0x9a94,	// (0x000185d4) call2_cli_visual_graphic_pane

0x9a94,	// (0x000185d4) call2_cli_visual_text_pane

0xbffb,	// (0x0001ab3b) smil_status_volume_pane_g3

0x0002,

0x9e4f,	// (0x0001898f) call2_cli_visual_graphic_pane_g1

0x9e4f,	// (0x0001898f) call2_cli_visual_graphic_pane_g2

0x9e4f,	// (0x0001898f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0001e0b2) call2_cli_visual_graphic_pane_g

0xbd02,	// (0x0001a842) bg_popup_call2_rect_pane_g1

0x9edb,	// (0x00018a1b) bg_popup_call2_rect_pane_g2

0xbd0a,	// (0x0001a84a) bg_popup_call2_rect_pane_g3

0xbd12,	// (0x0001a852) bg_popup_call2_rect_pane_g4

0xbd1a,	// (0x0001a85a) bg_popup_call2_rect_pane_g5

0xbd22,	// (0x0001a862) bg_popup_call2_rect_pane_g6

0xbd2a,	// (0x0001a86a) bg_popup_call2_rect_pane_g7

0xbd32,	// (0x0001a872) bg_popup_call2_rect_pane_g8

0xbd3a,	// (0x0001a87a) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0001e0b9) bg_popup_call2_rect_pane_g

0xbd42,	// (0x0001a882) bg_popup_call2_bubble_pane_g1

0xbd4a,	// (0x0001a88a) bg_popup_call2_bubble_pane_g2

0xbd52,	// (0x0001a892) bg_popup_call2_bubble_pane_g3

0xbd5a,	// (0x0001a89a) bg_popup_call2_bubble_pane_g4

0xbd62,	// (0x0001a8a2) bg_popup_call2_bubble_pane_g5

0xbd6a,	// (0x0001a8aa) bg_popup_call2_bubble_pane_g6

0xbd72,	// (0x0001a8b2) bg_popup_call2_bubble_pane_g7

0xbd7a,	// (0x0001a8ba) bg_popup_call2_bubble_pane_g8

0xbd82,	// (0x0001a8c2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0001e0cc) bg_popup_call2_bubble_pane_g

0x0b35,	// (0x0000f675) aid_cale_week_size_cell_pane

0x1270,	// (0x0000fdb0) aid_cams_cif_uncrop_pane_ParamLimits

0x1270,	// (0x0000fdb0) aid_cams_cif_uncrop_pane

0x1420,	// (0x0000ff60) aid_cams_size_cell_ParamLimits

0x1420,	// (0x0000ff60) aid_cams_size_cell

0x1434,	// (0x0000ff74) grid_cams_pane_ParamLimits

0x144e,	// (0x0000ff8e) linegrid_cams_pane_ParamLimits

0x161b,	// (0x0001015b) call_video_pane_t1

0x1639,	// (0x00010179) call_video_pane_t2

0x0001,

0xf279,	// (0x0001ddb9) call_video_pane_t

0x1a65,	// (0x000105a5) aid_cale_month_size_cell_pane_ParamLimits

0x1a65,	// (0x000105a5) aid_cale_month_size_cell_pane

0xf616,	// (0x0001e156) smil_status_volume_pane_g

0xc008,	// (0x0001ab48) volume_smil_pane_ParamLimits

0x9615,	// (0x00018155) aid_popup2_width_pane

0x0a8f,	// (0x0000f5cf) cell_qdial_pane_g4_ParamLimits

0x0a8f,	// (0x0000f5cf) cell_qdial_pane_g4

0x2934,	// (0x00011474) aid_blid_cardinal_pane_ParamLimits

0x2940,	// (0x00011480) aid_blid_destination_pane_ParamLimits

0x2940,	// (0x00011480) aid_blid_destination_pane

0x9cef,	// (0x0001882f) bg_popup_call_poc_act_pane_ParamLimits

0x9cef,	// (0x0001882f) bg_popup_call_poc_act_pane

0x9cef,	// (0x0001882f) bg_popup_call_poc_inact_pane_ParamLimits

0x9cef,	// (0x0001882f) bg_popup_call_poc_inact_pane

0xbd8a,	// (0x0001a8ca) bg_popup_call_poc_act_pane_g1

0xbd92,	// (0x0001a8d2) bg_popup_call_poc_act_pane_g2

0xbd9a,	// (0x0001a8da) bg_popup_call_poc_act_pane_g3

0xbd5a,	// (0x0001a89a) bg_popup_call_poc_act_pane_g4

0xbd62,	// (0x0001a8a2) bg_popup_call_poc_act_pane_g5

0xbda2,	// (0x0001a8e2) bg_popup_call_poc_act_pane_g6

0xbd72,	// (0x0001a8b2) bg_popup_call_poc_act_pane_g7

0xbdaa,	// (0x0001a8ea) bg_popup_call_poc_act_pane_g8

0x9a94,	// (0x000185d4) main_usb_pane

0xbf0f,	// (0x0001aa4f) popup_cale_lunar_info_window

0x1911,	// (0x00010451) im_reading_pane_t1_ParamLimits

0xa119,	// (0x00018c59) list_im_pane_ParamLimits

0xa12a,	// (0x00018c6a) scroll_pane_cp07_ParamLimits

0x9a94,	// (0x000185d4) grid_highlight_pane_cp012

0x9cef,	// (0x0001882f) mup_scale_pane_ParamLimits

0xac9e,	// (0x000197de) main_usb_pane_g1_ParamLimits

0xac9e,	// (0x000197de) main_usb_pane_g1

0x35e0,	// (0x00012120) main_usb_pane_g2_ParamLimits

0x35e0,	// (0x00012120) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0001e0f6) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0001e0f6) main_usb_pane_g

0x35f6,	// (0x00012136) main_usb_pane_t1_ParamLimits

0x35f6,	// (0x00012136) main_usb_pane_t1

0x3608,	// (0x00012148) main_usb_pane_t2_ParamLimits

0x3608,	// (0x00012148) main_usb_pane_t2

0x361a,	// (0x0001215a) main_usb_pane_t3_ParamLimits

0x361a,	// (0x0001215a) main_usb_pane_t3

0x362c,	// (0x0001216c) main_usb_pane_t4_ParamLimits

0x362c,	// (0x0001216c) main_usb_pane_t4

0x363e,	// (0x0001217e) main_usb_pane_t5_ParamLimits

0x363e,	// (0x0001217e) main_usb_pane_t5

0x3650,	// (0x00012190) main_usb_pane_t6_ParamLimits

0x3650,	// (0x00012190) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0001e0fb) main_usb_pane_t_ParamLimits

0x28e3,	// (0x00011423) aid_text_placing

0x28ec,	// (0x0001142c) main_location2_pane_t1_ParamLimits

0x28fe,	// (0x0001143e) main_location2_pane_t2_ParamLimits

0x2910,	// (0x00011450) main_location2_pane_t3_ParamLimits

0x2922,	// (0x00011462) main_location2_pane_t4_ParamLimits

0x2922,	// (0x00011462) main_location2_pane_t4

0xf3da,	// (0x0001df1a) main_location2_pane_t_ParamLimits

0x9d2b,	// (0x0001886b) find_pinb_pane_g2_ParamLimits

0x9d2b,	// (0x0001886b) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0001dc68) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0001dc68) find_pinb_pane_g

0x9d37,	// (0x00018877) find_pinb_pane_t1_ParamLimits

0x9d49,	// (0x00018889) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0001dc6d) find_pinb_pane_t_ParamLimits

0x9a94,	// (0x000185d4) main_call3_pane

0x1f24,	// (0x00010a64) cale_month_day_heading_pane_t1_ParamLimits

0x1faa,	// (0x00010aea) cale_month_day_heading_pane_t2_ParamLimits

0x203b,	// (0x00010b7b) cale_month_day_heading_pane_t3_ParamLimits

0x20cc,	// (0x00010c0c) cale_month_day_heading_pane_t4_ParamLimits

0x2161,	// (0x00010ca1) cale_month_day_heading_pane_t5_ParamLimits

0x2202,	// (0x00010d42) cale_month_day_heading_pane_t6_ParamLimits

0x22a3,	// (0x00010de3) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0001ddf1) cale_month_day_heading_pane_t_ParamLimits

0xa380,	// (0x00018ec0) smil_status_volume_pane

0x30db,	// (0x00011c1b) postcard_address_pane_ParamLimits

0x30db,	// (0x00011c1b) postcard_address_pane

0x30ed,	// (0x00011c2d) postcard_message_pane_ParamLimits

0x30ed,	// (0x00011c2d) postcard_message_pane

0x35be,	// (0x000120fe) call2_cli_visual_pane_t1_ParamLimits

0x35be,	// (0x000120fe) call2_cli_visual_pane_t1

0x3dd4,	// (0x00012914) postcard_message_pane_t1_ParamLimits

0x3dd4,	// (0x00012914) postcard_message_pane_t1

0x3dbd,	// (0x000128fd) postcard_address_pane_t1_ParamLimits

0x3dbd,	// (0x000128fd) postcard_address_pane_t1

0x3da9,	// (0x000128e9) popup_call3_audio_in_window_ParamLimits

0x3da9,	// (0x000128e9) popup_call3_audio_in_window

0x3c34,	// (0x00012774) bg_popup_call3_in_pane_ParamLimits

0x3c34,	// (0x00012774) bg_popup_call3_in_pane

0x3caa,	// (0x000127ea) popup_call3_audio_in_window_g1_ParamLimits

0x3caa,	// (0x000127ea) popup_call3_audio_in_window_g1

0x3cca,	// (0x0001280a) popup_call3_audio_in_window_g2_ParamLimits

0x3cca,	// (0x0001280a) popup_call3_audio_in_window_g2

0x3cea,	// (0x0001282a) popup_call3_audio_in_window_g3_ParamLimits

0x3cea,	// (0x0001282a) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0001e15d) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0001e15d) popup_call3_audio_in_window_g

0x3d1b,	// (0x0001285b) popup_call3_audio_in_window_t1_ParamLimits

0x3d1b,	// (0x0001285b) popup_call3_audio_in_window_t1

0x3d59,	// (0x00012899) popup_call3_audio_in_window_t2_ParamLimits

0x3d59,	// (0x00012899) popup_call3_audio_in_window_t2

0x3d97,	// (0x000128d7) popup_call3_audio_in_window_t3_ParamLimits

0x3d97,	// (0x000128d7) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0001e166) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0001e166) popup_call3_audio_in_window_t

0xaa27,	// (0x00019567) bg_popup_call3_rect_pane

0xbd02,	// (0x0001a842) bg_popup_call3_rect_pane_g1

0x9edb,	// (0x00018a1b) bg_popup_call3_rect_pane_g2

0xbd0a,	// (0x0001a84a) bg_popup_call3_rect_pane_g3

0xbd12,	// (0x0001a852) bg_popup_call3_rect_pane_g4

0xbd1a,	// (0x0001a85a) bg_popup_call3_rect_pane_g5

0xbd22,	// (0x0001a862) bg_popup_call3_rect_pane_g6

0xbd2a,	// (0x0001a86a) bg_popup_call3_rect_pane_g7

0x2d16,	// (0x00011856) mup_visualizer_osc_pane

0xab06,	// (0x00019646) mup_visualizer_spec_pane

0x3c64,	// (0x000127a4) call3_video_qcif_pane_ParamLimits

0x3c64,	// (0x000127a4) call3_video_qcif_pane

0x3c77,	// (0x000127b7) call3_video_qcif_uncrop_pane_ParamLimits

0x3c77,	// (0x000127b7) call3_video_qcif_uncrop_pane

0x3c85,	// (0x000127c5) call3_video_subqcif_pane_ParamLimits

0x3c85,	// (0x000127c5) call3_video_subqcif_pane

0x3c99,	// (0x000127d9) call3_video_subqcif_uncrop_pane_ParamLimits

0x3c99,	// (0x000127d9) call3_video_subqcif_uncrop_pane

0x3d0a,	// (0x0001284a) popup_call3_audio_in_window_g4_ParamLimits

0x3d0a,	// (0x0001284a) popup_call3_audio_in_window_g4

0x3c23,	// (0x00012763) mup_spec_half_pane

0x3c2c,	// (0x0001276c) mup_spec_half_pane_cp

0xbfbb,	// (0x0001aafb) mup_osc_middle_pane

0xbfc4,	// (0x0001ab04) mup_visualizer_osc_pane_g1

0x3c03,	// (0x00012743) mup_spec_bar_pane_ParamLimits

0x3c03,	// (0x00012743) mup_spec_bar_pane

0xbfa8,	// (0x0001aae8) mup_spec_bar_pane_g1

0xbfb2,	// (0x0001aaf2) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0001e151) mup_spec_bar_pane_g

0x0b35,	// (0x0000f675) aid_cale_week_size_cell_pane_ParamLimits

0x0b4f,	// (0x0000f68f) bg_cale_heading_pane_ParamLimits

0x9f60,	// (0x00018aa0) bg_cale_pane_cp01_ParamLimits

0x0b67,	// (0x0000f6a7) cale_week_corner_pane_ParamLimits

0x0b86,	// (0x0000f6c6) cale_week_day_heading_pane_ParamLimits

0x0ba3,	// (0x0000f6e3) cale_week_scroll_pane_g1_ParamLimits

0x0bb6,	// (0x0000f6f6) cale_week_scroll_pane_g2_ParamLimits

0x0bce,	// (0x0000f70e) cale_week_scroll_pane_g3_ParamLimits

0x0be6,	// (0x0000f726) cale_week_scroll_pane_g4_ParamLimits

0x0bfe,	// (0x0000f73e) cale_week_scroll_pane_g5_ParamLimits

0x0c1e,	// (0x0000f75e) cale_week_scroll_pane_g6_ParamLimits

0x0c3e,	// (0x0000f77e) cale_week_scroll_pane_g7_ParamLimits

0x0c5e,	// (0x0000f79e) cale_week_scroll_pane_g8_ParamLimits

0x0c82,	// (0x0000f7c2) cale_week_scroll_pane_g9_ParamLimits

0x0c9a,	// (0x0000f7da) cale_week_scroll_pane_g10_ParamLimits

0x0cb2,	// (0x0000f7f2) cale_week_scroll_pane_g11_ParamLimits

0x0cca,	// (0x0000f80a) cale_week_scroll_pane_g12_ParamLimits

0x0ce2,	// (0x0000f822) cale_week_scroll_pane_g13_ParamLimits

0x0ce2,	// (0x0000f822) cale_week_scroll_pane_g14_ParamLimits

0x0ce2,	// (0x0000f822) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0001dcf9) cale_week_scroll_pane_g_ParamLimits

0x0cfa,	// (0x0000f83a) cale_week_time_pane_ParamLimits

0x0d1e,	// (0x0000f85e) grid_cale_week_pane_ParamLimits

0x9f7e,	// (0x00018abe) listscroll_cale_week_pane_t1

0x9f90,	// (0x00018ad0) scroll_pane_cp08_ParamLimits

0x1aba,	// (0x000105fa) cale_month_corner_pane_ParamLimits

0xa34a,	// (0x00018e8a) cale_month_pane_t1

0x1ec2,	// (0x00010a02) cale_month_week_pane_ParamLimits

0x273f,	// (0x0001127f) popup_call_status_window_g1_ParamLimits

0x2753,	// (0x00011293) popup_call_status_window_g2_ParamLimits

0x2767,	// (0x000112a7) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0001dea1) popup_call_status_window_g_ParamLimits

0xa728,	// (0x00019268) aid_call2_pane

0x2f88,	// (0x00011ac8) msg_header_pane_g1

0x30db,	// (0x00011c1b) postcard_address2_pane_ParamLimits

0x30db,	// (0x00011c1b) postcard_address2_pane

0x30ed,	// (0x00011c2d) postcard_message2_pane_ParamLimits

0x30ed,	// (0x00011c2d) postcard_message2_pane

0x3bb5,	// (0x000126f5) message2_row_pane_ParamLimits

0x3bb5,	// (0x000126f5) message2_row_pane

0x3bd1,	// (0x00012711) address2_row_pane_ParamLimits

0x3bd1,	// (0x00012711) address2_row_pane

0xbf76,	// (0x0001aab6) postcard_message2_row_pane_g1

0xbf7e,	// (0x0001aabe) postcard_message2_row_pane_t1

0xbf76,	// (0x0001aab6) address2_row_pane_g1

0xbf7e,	// (0x0001aabe) address2_row_pane_t1

0x1111,	// (0x0000fc51) aid_size_cell_vorec

0x9a94,	// (0x000185d4) main_rss_pane

0x3be4,	// (0x00012724) rss_list_single_pane_ParamLimits

0x3be4,	// (0x00012724) rss_list_single_pane

0xbf8c,	// (0x0001aacc) rss_list_single_pane_t1

0xbf9a,	// (0x0001aada) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0001e14c) rss_list_single_pane_t

0x9a94,	// (0x000185d4) main_camera2_pane

0x9a94,	// (0x000185d4) main_video2_pane

0x3e4d,	// (0x0001298d) cams_zoom_pane_cp2_ParamLimits

0x3e4d,	// (0x0001298d) cams_zoom_pane_cp2

0x3e6d,	// (0x000129ad) image2_vga_pane_ParamLimits

0x3e6d,	// (0x000129ad) image2_vga_pane

0x3ebe,	// (0x000129fe) main_camera2_pane_g1_ParamLimits

0x3ebe,	// (0x000129fe) main_camera2_pane_g1

0x3ede,	// (0x00012a1e) main_camera2_pane_g2_ParamLimits

0x3ede,	// (0x00012a1e) main_camera2_pane_g2

0x3efe,	// (0x00012a3e) main_camera2_pane_g3_ParamLimits

0x3efe,	// (0x00012a3e) main_camera2_pane_g3

0x3f1e,	// (0x00012a5e) main_camera2_pane_g4_ParamLimits

0x3f1e,	// (0x00012a5e) main_camera2_pane_g4

0x3f3e,	// (0x00012a7e) main_camera2_pane_g5_ParamLimits

0x3f3e,	// (0x00012a7e) main_camera2_pane_g5

0x3f5e,	// (0x00012a9e) main_camera2_pane_g6_ParamLimits

0x3f5e,	// (0x00012a9e) main_camera2_pane_g6

0x3f7e,	// (0x00012abe) main_camera2_pane_g7_ParamLimits

0x3f7e,	// (0x00012abe) main_camera2_pane_g7

0x3f9e,	// (0x00012ade) main_camera2_pane_g8_ParamLimits

0x3f9e,	// (0x00012ade) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0001e16d) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0001e16d) main_camera2_pane_g

0x3fde,	// (0x00012b1e) main_camera2_pane_t1_ParamLimits

0x3fde,	// (0x00012b1e) main_camera2_pane_t1

0x4013,	// (0x00012b53) main_camera2_pane_t2_ParamLimits

0x4013,	// (0x00012b53) main_camera2_pane_t2

0x4039,	// (0x00012b79) main_camera2_pane_t3_ParamLimits

0x4039,	// (0x00012b79) main_camera2_pane_t3

0x4097,	// (0x00012bd7) main_camera2_pane_t4_ParamLimits

0x4097,	// (0x00012bd7) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0001e180) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0001e180) main_camera2_pane_t

0x4129,	// (0x00012c69) cams_zoom_pane_cp4_ParamLimits

0x4129,	// (0x00012c69) cams_zoom_pane_cp4

0x413f,	// (0x00012c7f) image2_cif_pane_ParamLimits

0x413f,	// (0x00012c7f) image2_cif_pane

0x416a,	// (0x00012caa) image2_subqcif_pane_ParamLimits

0x416a,	// (0x00012caa) image2_subqcif_pane

0x4184,	// (0x00012cc4) main_video2_pane_g1_ParamLimits

0x4184,	// (0x00012cc4) main_video2_pane_g1

0x419e,	// (0x00012cde) main_video2_pane_g2_ParamLimits

0x419e,	// (0x00012cde) main_video2_pane_g2

0x41b4,	// (0x00012cf4) main_video2_pane_g3_ParamLimits

0x41b4,	// (0x00012cf4) main_video2_pane_g3

0x41ca,	// (0x00012d0a) main_video2_pane_g4_ParamLimits

0x41ca,	// (0x00012d0a) main_video2_pane_g4

0x41e0,	// (0x00012d20) main_video2_pane_g5_ParamLimits

0x41e0,	// (0x00012d20) main_video2_pane_g5

0x41f6,	// (0x00012d36) main_video2_pane_g6_ParamLimits

0x41f6,	// (0x00012d36) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0001e18f) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0001e18f) main_video2_pane_g

0x4210,	// (0x00012d50) main_video2_pane_t1_ParamLimits

0x4210,	// (0x00012d50) main_video2_pane_t1

0x4234,	// (0x00012d74) main_video2_pane_t2_ParamLimits

0x4234,	// (0x00012d74) main_video2_pane_t2

0x4282,	// (0x00012dc2) main_video2_pane_t3_ParamLimits

0x4282,	// (0x00012dc2) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0001e19c) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0001e19c) main_video2_pane_t

0x370b,	// (0x0001224b) call_muted_g2

0x0001,

0xf5fe,	// (0x0001e13e) call_muted_g

0x9a94,	// (0x000185d4) main_mup2_pane

0x42c6,	// (0x00012e06) main_mup2_pane_g1_ParamLimits

0x42c6,	// (0x00012e06) main_mup2_pane_g1

0x42d2,	// (0x00012e12) main_mup2_pane_g2_ParamLimits

0x42d2,	// (0x00012e12) main_mup2_pane_g2

0xc12c,	// (0x0001ac6c) main_mup_pane_g13_cp1

0xc134,	// (0x0001ac74) mup_volume_pane_cp1

0x42ee,	// (0x00012e2e) main_mup2_pane_g4_ParamLimits

0x42ee,	// (0x00012e2e) main_mup2_pane_g4

0x4300,	// (0x00012e40) main_mup2_pane_g5_ParamLimits

0x4300,	// (0x00012e40) main_mup2_pane_g5

0x4312,	// (0x00012e52) main_mup2_pane_g6_ParamLimits

0x4312,	// (0x00012e52) main_mup2_pane_g6

0x4324,	// (0x00012e64) main_mup2_pane_g7_ParamLimits

0x4324,	// (0x00012e64) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0001e1a3) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0001e1a3) main_mup2_pane_g

0x433c,	// (0x00012e7c) main_mup2_pane_t1_ParamLimits

0x433c,	// (0x00012e7c) main_mup2_pane_t1

0x4352,	// (0x00012e92) main_mup2_pane_t2_ParamLimits

0x4352,	// (0x00012e92) main_mup2_pane_t2

0x4368,	// (0x00012ea8) main_mup2_pane_t3_ParamLimits

0x4368,	// (0x00012ea8) main_mup2_pane_t3

0x437e,	// (0x00012ebe) main_mup2_pane_t4_ParamLimits

0x437e,	// (0x00012ebe) main_mup2_pane_t4

0x4396,	// (0x00012ed6) main_mup2_pane_t5_ParamLimits

0x4396,	// (0x00012ed6) main_mup2_pane_t5

0x43ae,	// (0x00012eee) main_mup2_pane_t6_ParamLimits

0x43ae,	// (0x00012eee) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0001e1b2) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0001e1b2) main_mup2_pane_t

0x43de,	// (0x00012f1e) mup2_visualizer_pane_ParamLimits

0x43de,	// (0x00012f1e) mup2_visualizer_pane

0x440c,	// (0x00012f4c) mup_progress_pane_cp_ParamLimits

0x440c,	// (0x00012f4c) mup_progress_pane_cp

0xc10e,	// (0x0001ac4e) mup_volume_pane_cp_ParamLimits

0xc10e,	// (0x0001ac4e) mup_volume_pane_cp

0x4420,	// (0x00012f60) mup2_visualizer_pane_g1_ParamLimits

0x4420,	// (0x00012f60) mup2_visualizer_pane_g1

0xc04d,	// (0x0001ab8d) mup2_visualizer_pane_g2_ParamLimits

0xc04d,	// (0x0001ab8d) mup2_visualizer_pane_g2

0x4437,	// (0x00012f77) mup2_visualizer_pane_g3_ParamLimits

0x4437,	// (0x00012f77) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0001e1bf) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0001e1bf) mup2_visualizer_pane_g

0xade7,	// (0x00019927) aid_size_cell_fmradio

0x38bd,	// (0x000123fd) aid_height_parent_landcape

0xa1a8,	// (0x00018ce8) wml_content_pane_cp

0xa1b0,	// (0x00018cf0) wml_tabs_pane

0xa1b9,	// (0x00018cf9) popup_wml_miniature_window

0xa1c1,	// (0x00018d01) scroll_pane_cp021

0xa1d5,	// (0x00018d15) wml_content_pane_comp8

0x9a94,	// (0x000185d4) bg_popup_sub_pane_cp05

0xc06b,	// (0x0001abab) popup_wml_miniature_window_g1

0xc073,	// (0x0001abb3) wml_miniature_view_pane

0x4443,	// (0x00012f83) aid_size_wml_view

0x444b,	// (0x00012f8b) wml_miniature_view_pane_g1

0x4454,	// (0x00012f94) wml_miniature_view_pane_g2

0x445d,	// (0x00012f9d) wml_miniature_view_pane_g3

0x4465,	// (0x00012fa5) wml_miniature_view_pane_g4

0x446d,	// (0x00012fad) wml_miniature_view_pane_g5

0x4475,	// (0x00012fb5) wml_miniature_view_pane_g6

0x447d,	// (0x00012fbd) wml_miniature_view_pane_g7

0x4485,	// (0x00012fc5) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0001e1c6) wml_miniature_view_pane_g

0xc07b,	// (0x0001abbb) background_graphic_ParamLimits

0xc07b,	// (0x0001abbb) background_graphic

0xc087,	// (0x0001abc7) wml_tabs_2_pane

0xc090,	// (0x0001abd0) wml_tabs_3_pane_ParamLimits

0xc090,	// (0x0001abd0) wml_tabs_3_pane

0xc0a2,	// (0x0001abe2) wml_tabs_4_pane_ParamLimits

0xc0a2,	// (0x0001abe2) wml_tabs_4_pane

0xc0b8,	// (0x0001abf8) wml_tabs_5_pane_ParamLimits

0xc0b8,	// (0x0001abf8) wml_tabs_5_pane

0xc0d2,	// (0x0001ac12) wml_tabs_pane_g2_ParamLimits

0xc0d2,	// (0x0001ac12) wml_tabs_pane_g2

0xc0e6,	// (0x0001ac26) wml_tabs_pane_g3_ParamLimits

0xc0e6,	// (0x0001ac26) wml_tabs_pane_g3

0x448d,	// (0x00012fcd) wml_tabs_2_active_pane_ParamLimits

0x448d,	// (0x00012fcd) wml_tabs_2_active_pane

0x44a1,	// (0x00012fe1) wml_tabs_2_passive_pane_ParamLimits

0x44a1,	// (0x00012fe1) wml_tabs_2_passive_pane

0x44b5,	// (0x00012ff5) wml_tabs_3_active_pane_cp_ParamLimits

0x44b5,	// (0x00012ff5) wml_tabs_3_active_pane_cp

0x44ca,	// (0x0001300a) wml_tabs_3_passive_pane_ParamLimits

0x44ca,	// (0x0001300a) wml_tabs_3_passive_pane

0x44dd,	// (0x0001301d) wml_tabs_3_passive_pane_cp_ParamLimits

0x44dd,	// (0x0001301d) wml_tabs_3_passive_pane_cp

0x44f4,	// (0x00013034) tabs_4_active_pane

0x44fc,	// (0x0001303c) tabs_4_passive_pane

0x4506,	// (0x00013046) tabs_4_passive_pane_cp

0x450e,	// (0x0001304e) tabs_4_passive_pane_cp2

0x35d8,	// (0x00012118) aid_height_text

0x2cec,	// (0x0001182c) mup_volume_cont_pane_ParamLimits

0x2cec,	// (0x0001182c) mup_volume_cont_pane

0x0713,	// (0x0000f253) aid_size_cell_pinb

0x071d,	// (0x0000f25d) aid_size_list_pinb

0x43f8,	// (0x00012f38) mup2_volume_cont_pane_ParamLimits

0x43f8,	// (0x00012f38) mup2_volume_cont_pane

0xc0fa,	// (0x0001ac3a) mup2_volume_cont_pane_g1_ParamLimits

0xc0fa,	// (0x0001ac3a) mup2_volume_cont_pane_g1

0x03d6,	// (0x0000ef16) aid_size_cell_touch_ParamLimits

0x03d6,	// (0x0000ef16) aid_size_cell_touch

0x0603,	// (0x0000f143) touch_pane_ParamLimits

0x0603,	// (0x0000f143) touch_pane

0x9603,	// (0x00018143) main_rss2_pane

0xc13c,	// (0x0001ac7c) listscroll_rss2_pane

0xc145,	// (0x0001ac85) rss2_navigation_pane

0xc14d,	// (0x0001ac8d) list_rss2_pane

0xa8de,	// (0x0001941e) scroll_pane_cp22

0xc155,	// (0x0001ac95) rss2_navigation_pane_g1

0xc15e,	// (0x0001ac9e) rss2_navigation_pane_g2

0xc166,	// (0x0001aca6) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0001e1d7) rss2_navigation_pane_g

0xc16e,	// (0x0001acae) rss2_navigation_pane_t1

0x4518,	// (0x00013058) rss2_list_single_pane_ParamLimits

0x4518,	// (0x00013058) rss2_list_single_pane

0xc17c,	// (0x0001acbc) rss2_list_single_pane_t2

0xc18a,	// (0x0001acca) rss2_list_single_pane_t3_ParamLimits

0xc18a,	// (0x0001acca) rss2_list_single_pane_t3

0xc1a7,	// (0x0001ace7) rss2_list_single_pane_t4

0x255f,	// (0x0001109f) smil_status_pane_g1

0x9673,	// (0x000181b3) main_image2_pane_ParamLimits

0x9673,	// (0x000181b3) main_image2_pane

0x3fbe,	// (0x00012afe) main_camera2_pane_g9_ParamLimits

0x3fbe,	// (0x00012afe) main_camera2_pane_g9

0x40ec,	// (0x00012c2c) main_camera2_pane_t5_ParamLimits

0x40ec,	// (0x00012c2c) main_camera2_pane_t5

0xc01d,	// (0x0001ab5d) main_camera2_pane_t6_ParamLimits

0xc01d,	// (0x0001ab5d) main_camera2_pane_t6

0x452d,	// (0x0001306d) main_image2_pane_g1_ParamLimits

0x452d,	// (0x0001306d) main_image2_pane_g1

0x3314,	// (0x00011e54) smil2_video_pane_ParamLimits

0x3314,	// (0x00011e54) smil2_video_pane

0x9621,	// (0x00018161) aid_zoom_text_primary_cp

0x9669,	// (0x000181a9) popup_preview_fixed_window

0xa111,	// (0x00018c51) im_reading_pane_g1

0x3e35,	// (0x00012975) cams2_bc_adjust_pane_cp_ParamLimits

0x3e35,	// (0x00012975) cams2_bc_adjust_pane_cp

0x411b,	// (0x00012c5b) cams2_bc_adjust_pane_ParamLimits

0x411b,	// (0x00012c5b) cams2_bc_adjust_pane

0xc1b5,	// (0x0001acf5) cams2_bc_adjust_pane_g1

0xc1bd,	// (0x0001acfd) cams2_slider_pane

0xc1c6,	// (0x0001ad06) cams2_slider_pane_g1

0xc1cf,	// (0x0001ad0f) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0001e1de) cams2_slider_pane_g

0x080b,	// (0x0000f34b) calc_display_pane_ParamLimits

0x0833,	// (0x0000f373) calc_paper_pane_ParamLimits

0x0856,	// (0x0000f396) grid_calc_pane_ParamLimits

0xa78e,	// (0x000192ce) popup_clock_digital_window_t1_ParamLimits

0xad84,	// (0x000198c4) main_image_pane_t1

0x07ed,	// (0x0000f32d) aid_size_cell_calc_ParamLimits

0x07ed,	// (0x0000f32d) aid_size_cell_calc

0x3903,	// (0x00012443) popup_blid_sat_info2_window_ParamLimits

0x3903,	// (0x00012443) popup_blid_sat_info2_window

0xc1f1,	// (0x0001ad31) aid_size_cell_blid

0xc1f9,	// (0x0001ad39) bg_popup_window_pane_cp07

0xc21c,	// (0x0001ad5c) grid_popup_blid_pane

0xc226,	// (0x0001ad66) heading_pane_cp05_ParamLimits

0xc226,	// (0x0001ad66) heading_pane_cp05

0xc2f0,	// (0x0001ae30) cell_popup_blid_pane_ParamLimits

0xc2f0,	// (0x0001ae30) cell_popup_blid_pane

0xc314,	// (0x0001ae54) cell_popup_blid_pane_g1

0xc31c,	// (0x0001ae5c) cell_popup_blid_pane_t1

0x43c8,	// (0x00012f08) mup2_indicator_pane_ParamLimits

0x43c8,	// (0x00012f08) mup2_indicator_pane

0xaa27,	// (0x00019567) mup2_visualizer_osc_pane

0xc059,	// (0x0001ab99) mup2_visualizer_spec_pane_ParamLimits

0xc059,	// (0x0001ab99) mup2_visualizer_spec_pane

0x4543,	// (0x00013083) mup2_spec_half_pane

0x454c,	// (0x0001308c) mup2_spec_half_pane_cp

0x4554,	// (0x00013094) mup2_spec_bar_pane_ParamLimits

0x4554,	// (0x00013094) mup2_spec_bar_pane

0xbfa8,	// (0x0001aae8) mup2_spec_bar_pane_g1

0xbfb2,	// (0x0001aaf2) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0001e151) mup2_spec_bar_pane_g

0x4574,	// (0x000130b4) mup2_osc_middle_pane

0xbfc4,	// (0x0001ab04) mup2_visualizer_osc_pane_g1

0x96a1,	// (0x000181e1) popup_number_entry_window_t1_ParamLimits

0x96b4,	// (0x000181f4) popup_number_entry_window_t2_ParamLimits

0x96c6,	// (0x00018206) popup_number_entry_window_t3_ParamLimits

0x0655,	// (0x0000f195) popup_number_entry_window_t5_ParamLimits

0x0655,	// (0x0000f195) popup_number_entry_window_t5

0xf0d3,	// (0x0001dc13) popup_number_entry_window_t_ParamLimits

0x96d8,	// (0x00018218) text_title_cp2_ParamLimits

0xac5e,	// (0x0001979e) aid_hotspot_pointer_text2_pane

0xac84,	// (0x000197c4) main_viewer_pane_g9_ParamLimits

0xac84,	// (0x000197c4) main_viewer_pane_g9

0xa34a,	// (0x00018e8a) cale_month_pane_t1_ParamLimits

0xa3b5,	// (0x00018ef5) bg_cale_pane_ParamLimits

0xa3cd,	// (0x00018f0d) list_cale_pane_ParamLimits

0xa3de,	// (0x00018f1e) listscroll_cale_day_pane_t1

0xa3f0,	// (0x00018f30) scroll_pane_cp09_ParamLimits

0x2d1e,	// (0x0001185e) main_mup_eq_pane_t1_ParamLimits

0x2d1e,	// (0x0001185e) main_mup_eq_pane_t1

0x2d38,	// (0x00011878) main_mup_eq_pane_t2_ParamLimits

0x2d38,	// (0x00011878) main_mup_eq_pane_t2

0x2d52,	// (0x00011892) main_mup_eq_pane_t3_ParamLimits

0x2d52,	// (0x00011892) main_mup_eq_pane_t3

0x2d6e,	// (0x000118ae) main_mup_eq_pane_t4_ParamLimits

0x2d6e,	// (0x000118ae) main_mup_eq_pane_t4

0x2d8a,	// (0x000118ca) main_mup_eq_pane_t5_ParamLimits

0x2d8a,	// (0x000118ca) main_mup_eq_pane_t5

0x2da6,	// (0x000118e6) main_mup_eq_pane_t6_ParamLimits

0x2da6,	// (0x000118e6) main_mup_eq_pane_t6

0x2dba,	// (0x000118fa) main_mup_eq_pane_t7_ParamLimits

0x2dba,	// (0x000118fa) main_mup_eq_pane_t7

0x2dce,	// (0x0001190e) main_mup_eq_pane_t8_ParamLimits

0x2dce,	// (0x0001190e) main_mup_eq_pane_t8

0x2de2,	// (0x00011922) main_mup_eq_pane_t9_ParamLimits

0x2de2,	// (0x00011922) main_mup_eq_pane_t9

0x2dfc,	// (0x0001193c) main_mup_eq_pane_t10_ParamLimits

0x2dfc,	// (0x0001193c) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0001dfa0) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0001dfa0) main_mup_eq_pane_t

0x2eab,	// (0x000119eb) mup_equalizer_pane_cp5_ParamLimits

0x2ebf,	// (0x000119ff) mup_equalizer_pane_cp6_ParamLimits

0x2ed3,	// (0x00011a13) mup_equalizer_pane_cp7_ParamLimits

0x9603,	// (0x00018143) main_gallery_pane

0xbfcd,	// (0x0001ab0d) smil2_volume_pane

0xbfd5,	// (0x0001ab15) smil_status_volume_pane_g1_ParamLimits

0xbfe8,	// (0x0001ab28) smil_status_volume_pane_g2_ParamLimits

0xbffb,	// (0x0001ab3b) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0001e156) smil_status_volume_pane_g_ParamLimits

0xc1f9,	// (0x0001ad39) bg_popup_window_pane_cp07_ParamLimits

0xc207,	// (0x0001ad47) blid_firmament_pane

0x457d,	// (0x000130bd) aid_size_cell_gallery_ParamLimits

0x457d,	// (0x000130bd) aid_size_cell_gallery

0x4593,	// (0x000130d3) grid_gallery_pane_ParamLimits

0x4593,	// (0x000130d3) grid_gallery_pane

0x45ac,	// (0x000130ec) cell_gallery_pane_ParamLimits

0x45ac,	// (0x000130ec) cell_gallery_pane

0xc32a,	// (0x0001ae6a) bg_cell_gallery_focus_pane_ParamLimits

0xc32a,	// (0x0001ae6a) bg_cell_gallery_focus_pane

0xc33c,	// (0x0001ae7c) cell_gallery_pane_g1_ParamLimits

0xc33c,	// (0x0001ae7c) cell_gallery_pane_g1

0x45f5,	// (0x00013135) cell_gallery_pane_g2_ParamLimits

0x45f5,	// (0x00013135) cell_gallery_pane_g2

0x4602,	// (0x00013142) cell_gallery_pane_g3_ParamLimits

0x4602,	// (0x00013142) cell_gallery_pane_g3

0xc348,	// (0x0001ae88) cell_gallery_pane_g4_ParamLimits

0xc348,	// (0x0001ae88) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0001e204) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0001e204) cell_gallery_pane_g

0xc354,	// (0x0001ae94) bg_cell_gallery_focus_pane_g1

0xc35c,	// (0x0001ae9c) bg_cell_gallery_focus_pane_g2

0xc364,	// (0x0001aea4) bg_cell_gallery_focus_pane_g3

0xc36c,	// (0x0001aeac) bg_cell_gallery_focus_pane_g4

0xc374,	// (0x0001aeb4) bg_cell_gallery_focus_pane_g5

0xc37c,	// (0x0001aebc) bg_cell_gallery_focus_pane_g6

0xc384,	// (0x0001aec4) bg_cell_gallery_focus_pane_g7

0xc38c,	// (0x0001aecc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0001e20d) bg_cell_gallery_focus_pane_g

0xc394,	// (0x0001aed4) aid_firma_cardinal

0xc3a8,	// (0x0001aee8) blid_firmament_pane_t1

0xc3bf,	// (0x0001aeff) blid_firmament_pane_t2

0xc3d6,	// (0x0001af16) blid_firmament_pane_t3

0xc3ed,	// (0x0001af2d) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0001e21e) blid_firmament_pane_t

0xc404,	// (0x0001af44) blid_sat_info_pane

0xc414,	// (0x0001af54) blid_sat_info_pane_g1

0xc414,	// (0x0001af54) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0001e227) blid_sat_info_pane_g

0xc41e,	// (0x0001af5e) blid_sat_info_pane_t1

0xc42c,	// (0x0001af6c) smil2_volume_content_pane

0xc435,	// (0x0001af75) smil2_volume_pane_g1

0xc43d,	// (0x0001af7d) smil2_volume_content_pane_g1

0xc446,	// (0x0001af86) smil2_volume_content_pane_g2

0xc44f,	// (0x0001af8f) smil2_volume_content_pane_g3

0xc458,	// (0x0001af98) smil2_volume_content_pane_g4

0xc461,	// (0x0001afa1) smil2_volume_content_pane_g5

0xc46a,	// (0x0001afaa) smil2_volume_content_pane_g6

0xc473,	// (0x0001afb3) smil2_volume_content_pane_g7

0xc47c,	// (0x0001afbc) smil2_volume_content_pane_g8

0xc485,	// (0x0001afc5) smil2_volume_content_pane_g9

0xc48e,	// (0x0001afce) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0001e22c) smil2_volume_content_pane_g

0x0dd2,	// (0x0000f912) cale_week_day_heading_pane_t1_ParamLimits

0x0e17,	// (0x0000f957) cale_week_day_heading_pane_t2_ParamLimits

0x0e61,	// (0x0000f9a1) cale_week_day_heading_pane_t3_ParamLimits

0x0eab,	// (0x0000f9eb) cale_week_day_heading_pane_t4_ParamLimits

0x0ef5,	// (0x0000fa35) cale_week_day_heading_pane_t5_ParamLimits

0x0f47,	// (0x0000fa87) cale_week_day_heading_pane_t6_ParamLimits

0x0f99,	// (0x0000fad9) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0001dd18) cale_week_day_heading_pane_t_ParamLimits

0x9fad,	// (0x00018aed) bg_cale_side_pane_ParamLimits

0x0fde,	// (0x0000fb1e) cale_week_time_pane_t1_ParamLimits

0x0ff8,	// (0x0000fb38) cale_week_time_pane_t2_ParamLimits

0x1012,	// (0x0000fb52) cale_week_time_pane_t3_ParamLimits

0x102c,	// (0x0000fb6c) cale_week_time_pane_t4_ParamLimits

0x1046,	// (0x0000fb86) cale_week_time_pane_t5_ParamLimits

0x1060,	// (0x0000fba0) cale_week_time_pane_t6_ParamLimits

0x107a,	// (0x0000fbba) cale_week_time_pane_t7_ParamLimits

0x1094,	// (0x0000fbd4) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0001dd27) cale_week_time_pane_t_ParamLimits

0x10b4,	// (0x0000fbf4) cell_cale_week_pane_g2_ParamLimits

0x9fad,	// (0x00018aed) bg_cale_side_pane_cp01_ParamLimits

0x234c,	// (0x00010e8c) cale_month_week_pane_t1_ParamLimits

0x2365,	// (0x00010ea5) cale_month_week_pane_t2_ParamLimits

0x237e,	// (0x00010ebe) cale_month_week_pane_t3_ParamLimits

0x2397,	// (0x00010ed7) cale_month_week_pane_t4_ParamLimits

0x23b0,	// (0x00010ef0) cale_month_week_pane_t5_ParamLimits

0x23c9,	// (0x00010f09) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0001de00) cale_month_week_pane_t_ParamLimits

0xa35c,	// (0x00018e9c) cell_cale_month_pane_g1_ParamLimits

0x9603,	// (0x00018143) main_cale_event_viewer_pane

0x9603,	// (0x00018143) listscroll_cale_event_viewer_pane

0xc497,	// (0x0001afd7) list_cale_ev_pane

0xc49f,	// (0x0001afdf) scroll_pane_cp023

0xc4ab,	// (0x0001afeb) field_cale_ev_pane_ParamLimits

0xc4ab,	// (0x0001afeb) field_cale_ev_pane

0xc4c9,	// (0x0001b009) field_cale_ev_content_pane_ParamLimits

0xc4c9,	// (0x0001b009) field_cale_ev_content_pane

0xc4d5,	// (0x0001b015) field_cale_ev_pane_g1_ParamLimits

0xc4d5,	// (0x0001b015) field_cale_ev_pane_g1

0xc4e1,	// (0x0001b021) field_cale_ev_pane_g2_ParamLimits

0xc4e1,	// (0x0001b021) field_cale_ev_pane_g2

0xc4f9,	// (0x0001b039) field_cale_ev_pane_g3_ParamLimits

0xc4f9,	// (0x0001b039) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0001e241) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0001e241) field_cale_ev_pane_g

0xc511,	// (0x0001b051) field_cale_ev_pane_t1_ParamLimits

0xc511,	// (0x0001b051) field_cale_ev_pane_t1

0xc528,	// (0x0001b068) field_cale_ev_content_pane_t1_ParamLimits

0xc528,	// (0x0001b068) field_cale_ev_content_pane_t1

0x2f7d,	// (0x00011abd) bg_button_pane_cp01

0x0b23,	// (0x0000f663) listscroll_cale_week_pane_ParamLimits

0x9f57,	// (0x00018a97) popup_toolbar_window_cp01

0x9f7e,	// (0x00018abe) listscroll_cale_week_pane_t1_ParamLimits

0x0b23,	// (0x0000f663) listscroll_cale_day_pane_ParamLimits

0x9f57,	// (0x00018a97) popup_toolbar_window_cp02

0xa3de,	// (0x00018f1e) listscroll_cale_day_pane_t1_ParamLimits

0x0b23,	// (0x0000f663) main_cale_month_pane_ParamLimits

0xbf46,	// (0x0001aa86) popup_toolbar_window_cp03_ParamLimits

0xbf46,	// (0x0001aa86) popup_toolbar_window_cp03

0x31dc,	// (0x00011d1c) main_image_pane_g2_ParamLimits

0x31dc,	// (0x00011d1c) main_image_pane_g2

0x31ed,	// (0x00011d2d) main_image_pane_g3_ParamLimits

0x31ed,	// (0x00011d2d) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0001e032) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0001e032) main_image_pane_g

0xad84,	// (0x000198c4) main_image_pane_t1_ParamLimits

0x31fe,	// (0x00011d3e) main_image_pane_t2_ParamLimits

0x31fe,	// (0x00011d3e) main_image_pane_t2

0x3210,	// (0x00011d50) main_image_pane_t3_ParamLimits

0x3210,	// (0x00011d50) main_image_pane_t3

0x3238,	// (0x00011d78) main_image_pane_t4_ParamLimits

0x3238,	// (0x00011d78) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0001e039) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0001e039) main_image_pane_t

0x3258,	// (0x00011d98) popup_image_details_window_cp01

0x3262,	// (0x00011da2) popup_toobar_trans_pane_cp01_ParamLimits

0x3262,	// (0x00011da2) popup_toobar_trans_pane_cp01

0x39e2,	// (0x00012522) popup_image_details_window_ParamLimits

0x39e2,	// (0x00012522) popup_image_details_window

0xbf19,	// (0x0001aa59) popup_image_focus_window

0x3def,	// (0x0001292f) camera2_autofocus_pane_ParamLimits

0x3def,	// (0x0001292f) camera2_autofocus_pane

0x9603,	// (0x00018143) bg_popup_sub_pane_cp06

0xc546,	// (0x0001b086) popup_image_focus_window_g1

0xc54e,	// (0x0001b08e) popup_image_focus_window_g2

0xc556,	// (0x0001b096) popup_image_focus_window_g3

0xc55e,	// (0x0001b09e) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0001e248) popup_image_focus_window_g

0xc566,	// (0x0001b0a6) popup_image_focus_window_t1

0xc574,	// (0x0001b0b4) popup_image_focus_window_t2

0xc584,	// (0x0001b0c4) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0001e251) popup_image_focus_window_t

0xc592,	// (0x0001b0d2) camera2_autofocus_pane_g1

0x9673,	// (0x000181b3) bg_tb_trans_pane_cp01

0xc5a0,	// (0x0001b0e0) popup_image_details_window_g1

0xc5b3,	// (0x0001b0f3) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0001e263) popup_image_details_window_g

0xc5dc,	// (0x0001b11c) popup_image_details_window_t1

0xc5ee,	// (0x0001b12e) popup_image_details_window_t2

0xc607,	// (0x0001b147) popup_image_details_window_t3

0xc61b,	// (0x0001b15b) popup_image_details_window_t4

0xc636,	// (0x0001b176) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0001e26a) popup_image_details_window_t

0x9da8,	// (0x000188e8) bg_calc_paper_pane_ParamLimits

0x9603,	// (0x00018143) grid_highlight_pane_cp013

0x9dbc,	// (0x000188fc) list_calc_pane_ParamLimits

0x9dce,	// (0x0001890e) scroll_pane_cp024

0x9dd6,	// (0x00018916) bg_calc_display_pane_ParamLimits

0x0954,	// (0x0000f494) calc_display_pane_t1_ParamLimits

0x0966,	// (0x0000f4a6) calc_display_pane_t2_ParamLimits

0x9de2,	// (0x00018922) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0001dc9a) calc_display_pane_t_ParamLimits

0x0a20,	// (0x0000f560) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0001dcb7) cell_calc_pane_g

0x0a29,	// (0x0000f569) cell_calc_pane_t1

0x9e59,	// (0x00018999) grid_highlight_pane_cp02_ParamLimits

0x9e6f,	// (0x000189af) toolbar_button_pane_cp01_ParamLimits

0x9e6f,	// (0x000189af) toolbar_button_pane_cp01

0xadc9,	// (0x00019909) temp_image_control_pane_ParamLimits

0xadc9,	// (0x00019909) temp_image_control_pane

0x9673,	// (0x000181b3) main_mp3_pane

0xc650,	// (0x0001b190) temp_image_control_pane_g1_ParamLimits

0xc650,	// (0x0001b190) temp_image_control_pane_g1

0xc65e,	// (0x0001b19e) temp_image_control_pane_g2_ParamLimits

0xc65e,	// (0x0001b19e) temp_image_control_pane_g2

0xc670,	// (0x0001b1b0) temp_image_control_pane_g3_ParamLimits

0xc670,	// (0x0001b1b0) temp_image_control_pane_g3

0x463f,	// (0x0001317f) temp_image_control_pane_g4_ParamLimits

0x463f,	// (0x0001317f) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0001e275) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0001e275) temp_image_control_pane_g

0xc650,	// (0x0001b190) main_mp3_pane_g1

0x4652,	// (0x00013192) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0001e27e) main_mp3_pane_g

0xc6b3,	// (0x0001b1f3) main_mp3_pane_t1

0xa020,	// (0x00018b60) main_camera_pane_g8_ParamLimits

0xa020,	// (0x00018b60) main_camera_pane_g8

0x13c6,	// (0x0000ff06) main_video_pane_g7_ParamLimits

0x13c6,	// (0x0000ff06) main_video_pane_g7

0xc03b,	// (0x0001ab7b) main_camera2_pane_t7_ParamLimits

0xc03b,	// (0x0001ab7b) main_camera2_pane_t7

0xa168,	// (0x00018ca8) scroll_pane_cp025_ParamLimits

0xa168,	// (0x00018ca8) scroll_pane_cp025

0xa17c,	// (0x00018cbc) scroll_pane_cp026_ParamLimits

0xa17c,	// (0x00018cbc) scroll_pane_cp026

0xa18b,	// (0x00018ccb) wml_content_pane_ParamLimits

0x9603,	// (0x00018143) main_touch_calib_pane

0x4726,	// (0x00013266) main_touch_calib_pane_g1

0x4738,	// (0x00013278) main_touch_calib_pane_g2

0x474a,	// (0x0001328a) main_touch_calib_pane_g3

0x475c,	// (0x0001329c) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0001e29c) main_touch_calib_pane_g

0x476e,	// (0x000132ae) main_touch_calib_pane_t1

0x4788,	// (0x000132c8) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0001e2a5) main_touch_calib_pane_t

0xa968,	// (0x000194a8) mup_progress_pane_cp02

0xa987,	// (0x000194c7) navi_pane_g1

0xa9e9,	// (0x00019529) navi_pane_mp_t3

0x9673,	// (0x000181b3) main_mp3_pane_ParamLimits

0x3b67,	// (0x000126a7) navi_pane_ParamLimits

0xc650,	// (0x0001b190) main_mp3_pane_g1_ParamLimits

0x4652,	// (0x00013192) main_mp3_pane_g2_ParamLimits

0x4660,	// (0x000131a0) main_mp3_pane_g3_ParamLimits

0x4660,	// (0x000131a0) main_mp3_pane_g3

0x466e,	// (0x000131ae) main_mp3_pane_g4_ParamLimits

0x466e,	// (0x000131ae) main_mp3_pane_g4

0xc680,	// (0x0001b1c0) main_mp3_pane_g5_ParamLimits

0xc680,	// (0x0001b1c0) main_mp3_pane_g5

0xc68e,	// (0x0001b1ce) main_mp3_pane_g6_ParamLimits

0xc68e,	// (0x0001b1ce) main_mp3_pane_g6

0xc69b,	// (0x0001b1db) main_mp3_pane_g7_ParamLimits

0xc69b,	// (0x0001b1db) main_mp3_pane_g7

0xc6a7,	// (0x0001b1e7) main_mp3_pane_g8_ParamLimits

0xc6a7,	// (0x0001b1e7) main_mp3_pane_g8

0xf73e,	// (0x0001e27e) main_mp3_pane_g_ParamLimits

0x467a,	// (0x000131ba) main_mp3_pane_t2

0x4688,	// (0x000131c8) main_mp3_pane_t3

0xc6c1,	// (0x0001b201) main_mp3_pane_t4

0xc6cf,	// (0x0001b20f) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0001e28f) main_mp3_pane_t

0xc6dd,	// (0x0001b21d) mup_progress_pane_cp01

0x9621,	// (0x00018161) aid_zoom_text_secondary2

0xc497,	// (0x0001afd7) list_cale_ev2_pane

0xc49f,	// (0x0001afdf) scroll_pane_cp023_ParamLimits

0x47de,	// (0x0001331e) field_cale_ev2_pane_ParamLimits

0x47de,	// (0x0001331e) field_cale_ev2_pane

0x47fe,	// (0x0001333e) field_cale_ev2_pane_g1_ParamLimits

0x47fe,	// (0x0001333e) field_cale_ev2_pane_g1

0x480a,	// (0x0001334a) field_cale_ev2_pane_g2_ParamLimits

0x480a,	// (0x0001334a) field_cale_ev2_pane_g2

0x4822,	// (0x00013362) field_cale_ev2_pane_g3_ParamLimits

0x4822,	// (0x00013362) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0001e2b0) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0001e2b0) field_cale_ev2_pane_g

0x483a,	// (0x0001337a) field_cale_ev2_pane_t1_ParamLimits

0x483a,	// (0x0001337a) field_cale_ev2_pane_t1

0x4851,	// (0x00013391) field_cale_ev2_pane_t2_ParamLimits

0x4851,	// (0x00013391) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0001e2b9) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0001e2b9) field_cale_ev2_pane_t

0x3091,	// (0x00011bd1) main_postcard_pane_g5_ParamLimits

0x3091,	// (0x00011bd1) main_postcard_pane_g5

0x30a7,	// (0x00011be7) main_postcard_pane_g6_ParamLimits

0x30a7,	// (0x00011be7) main_postcard_pane_g6

0x1192,	// (0x0000fcd2) camera2_autofocus_pane_cp_ParamLimits

0x1192,	// (0x0000fcd2) camera2_autofocus_pane_cp

0x9673,	// (0x000181b3) main_mup3_pane

0x4866,	// (0x000133a6) main_mup3_pane_g1_ParamLimits

0x4866,	// (0x000133a6) main_mup3_pane_g1

0x4888,	// (0x000133c8) main_mup3_pane_g2_ParamLimits

0x4888,	// (0x000133c8) main_mup3_pane_g2

0x4906,	// (0x00013446) main_mup3_pane_g3_ParamLimits

0x4906,	// (0x00013446) main_mup3_pane_g3

0x494c,	// (0x0001348c) main_mup3_pane_g4_ParamLimits

0x494c,	// (0x0001348c) main_mup3_pane_g4

0x4992,	// (0x000134d2) main_mup3_pane_g5_ParamLimits

0x4992,	// (0x000134d2) main_mup3_pane_g5

0x49d8,	// (0x00013518) main_mup3_pane_g6_ParamLimits

0x49d8,	// (0x00013518) main_mup3_pane_g6

0xc711,	// (0x0001b251) main_mup3_pane_g7_ParamLimits

0xc711,	// (0x0001b251) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0001e2c9) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0001e2c9) main_mup3_pane_g

0x4a56,	// (0x00013596) main_mup3_pane_t1_ParamLimits

0x4a56,	// (0x00013596) main_mup3_pane_t1

0x4aca,	// (0x0001360a) main_mup3_pane_t2_ParamLimits

0x4aca,	// (0x0001360a) main_mup3_pane_t2

0x4b9e,	// (0x000136de) main_mup3_pane_t4_ParamLimits

0x4b9e,	// (0x000136de) main_mup3_pane_t4

0x4bf4,	// (0x00013734) main_mup3_pane_t5_ParamLimits

0x4bf4,	// (0x00013734) main_mup3_pane_t5

0x4cb0,	// (0x000137f0) main_mup3_pane_t6_ParamLimits

0x4cb0,	// (0x000137f0) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0001e2da) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0001e2da) main_mup3_pane_t

0x4d68,	// (0x000138a8) mup3_progress_pane_ParamLimits

0x4d68,	// (0x000138a8) mup3_progress_pane

0x4dfe,	// (0x0001393e) popup_mup3_control_window_ParamLimits

0x4dfe,	// (0x0001393e) popup_mup3_control_window

0xc71f,	// (0x0001b25f) popup_mup3_text_window

0x4e30,	// (0x00013970) mup3_progress_pane_t1

0x4e4f,	// (0x0001398f) mup3_progress_pane_t2

0xc727,	// (0x0001b267) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0001e2e7) mup3_progress_pane_t

0xc744,	// (0x0001b284) mup_progress_pane_cp03

0x9603,	// (0x00018143) bg_tb_trans_pane_cp04

0x4e6e,	// (0x000139ae) mup3_volume_pane

0x4e76,	// (0x000139b6) popup_mup3_control_window_g1

0x4e7f,	// (0x000139bf) mup3_volume_pane_g1

0x4e88,	// (0x000139c8) mup3_volume_pane_g2

0x4e91,	// (0x000139d1) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0001e2ee) mup3_volume_pane_g

0x9603,	// (0x00018143) bg_tb_trans_pane_cp03

0xc754,	// (0x0001b294) popup_mup3_text_window_g1

0xc75c,	// (0x0001b29c) popup_mup3_text_window_t1

0x9e30,	// (0x00018970) list_calc_item_pane_g1_ParamLimits

0xc123,	// (0x0001ac63) mup_volume_pane_cp_g1

0x47a2,	// (0x000132e2) main_touch_calib_pane_t3

0x47b6,	// (0x000132f6) main_touch_calib_pane_t4

0x47ca,	// (0x0001330a) main_touch_calib_pane_t5

0x960d,	// (0x0001814d) aid_cell_size_toolbar2

0x9615,	// (0x00018155) aid_popup3_width_pane

0x9621,	// (0x00018161) aid_zoom_text_msg_primary

0x1169,	// (0x0000fca9) vorec_t7

0x9df4,	// (0x00018934) bg_calc_paper_pane_g1_ParamLimits

0x9e00,	// (0x00018940) bg_calc_paper_pane_g2_ParamLimits

0x9e0c,	// (0x0001894c) bg_calc_paper_pane_g3_ParamLimits

0x9e18,	// (0x00018958) bg_calc_paper_pane_g4_ParamLimits

0x9e24,	// (0x00018964) bg_calc_paper_pane_g5_ParamLimits

0x09ad,	// (0x0000f4ed) bg_calc_paper_pane_g6_ParamLimits

0x09bc,	// (0x0000f4fc) bg_calc_paper_pane_g7_ParamLimits

0x09cb,	// (0x0000f50b) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0001dca1) bg_calc_paper_pane_g_ParamLimits

0x09de,	// (0x0000f51e) calc_bg_paper_pane_g9_ParamLimits

0x12dd,	// (0x0000fe1d) image_qvga_pane_ParamLimits

0x12dd,	// (0x0000fe1d) image_qvga_pane

0x9cef,	// (0x0001882f) bg_popup_sub_pane_cp04_ParamLimits

0xad00,	// (0x00019840) popup_mup_playback_window_g1_ParamLimits

0xad0c,	// (0x0001984c) popup_mup_playback_window_t1_ParamLimits

0xad21,	// (0x00019861) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0001e02d) popup_mup_playback_window_t_ParamLimits

0x42e2,	// (0x00012e22) main_mup2_pane_g3_ParamLimits

0x42e2,	// (0x00012e22) main_mup2_pane_g3

0x16bc,	// (0x000101fc) popup_toolbar_window_cp04

0xb103,	// (0x00019c43) popup_call2_audio_second_window_g3_ParamLimits

0xb103,	// (0x00019c43) popup_call2_audio_second_window_g3

0xb50d,	// (0x0001a04d) popup_call2_audio_first_window_g4_ParamLimits

0xb50d,	// (0x0001a04d) popup_call2_audio_first_window_g4

0xbb8c,	// (0x0001a6cc) popup_call2_audio_in_window_g4_ParamLimits

0xbb8c,	// (0x0001a6cc) popup_call2_audio_in_window_g4

0x31be,	// (0x00011cfe) aid_area_sk_bg_cut_ParamLimits

0x31be,	// (0x00011cfe) aid_area_sk_bg_cut

0xad36,	// (0x00019876) aid_area_sk_bg_cut_2_ParamLimits

0xad36,	// (0x00019876) aid_area_sk_bg_cut_2

0x45e5,	// (0x00013125) aid_placing_details_win

0x45ed,	// (0x0001312d) aid_placing_details_win_2

0xc592,	// (0x0001b0d2) camera2_autofocus_pane_g1_ParamLimits

0x059c,	// (0x0000f0dc) popup_fixed_preview_cale_window_ParamLimits

0x059c,	// (0x0000f0dc) popup_fixed_preview_cale_window

0xaa41,	// (0x00019581) navi_slider_pane_g3

0xaa4a,	// (0x0001958a) navi_slider_pane_g4

0xaa53,	// (0x00019593) navi_slider_pane_g5

0xaa41,	// (0x00019581) navi_slider_pane_g6

0xaa5c,	// (0x0001959c) navi_slider_pane_g7

0xab7d,	// (0x000196bd) mup_scale_pane_g3

0xab86,	// (0x000196c6) mup_scale_pane_g4

0xab8f,	// (0x000196cf) mup_scale_pane_g5

0x2ee7,	// (0x00011a27) mup_scale_pane_g6

0x2ef0,	// (0x00011a30) mup_scale_pane_g7

0xaa41,	// (0x00019581) cams2_slider_pane_g3

0xc1d8,	// (0x0001ad18) cams2_slider_pane_g4

0xc1e0,	// (0x0001ad20) cams2_slider_pane_g5

0xaa41,	// (0x00019581) cams2_slider_pane_g6

0xc1e8,	// (0x0001ad28) cams2_slider_pane_g7

0xc414,	// (0x0001af54) camera2_autofocus_pane_cp_g1

0xbeed,	// (0x0001aa2d) bg_popup_preview_window_pane_cp02_ParamLimits

0xbeed,	// (0x0001aa2d) bg_popup_preview_window_pane_cp02

0xc76a,	// (0x0001b2aa) list_fp_cale_pane_ParamLimits

0xc76a,	// (0x0001b2aa) list_fp_cale_pane

0xc776,	// (0x0001b2b6) popup_fixed_preview_cale_window_t1_ParamLimits

0xc776,	// (0x0001b2b6) popup_fixed_preview_cale_window_t1

0x4e9a,	// (0x000139da) popup_fixed_preview_cale_window_t2_ParamLimits

0x4e9a,	// (0x000139da) popup_fixed_preview_cale_window_t2

0x4eaf,	// (0x000139ef) popup_fixed_preview_cale_window_t3_ParamLimits

0x4eaf,	// (0x000139ef) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0001e2f5) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0001e2f5) popup_fixed_preview_cale_window_t

0x4ec4,	// (0x00013a04) list_single_fp_cale_pane_ParamLimits

0x4ec4,	// (0x00013a04) list_single_fp_cale_pane

0xc794,	// (0x0001b2d4) list_single_fp_cale_pane_g1_ParamLimits

0xc794,	// (0x0001b2d4) list_single_fp_cale_pane_g1

0xc7a0,	// (0x0001b2e0) list_single_fp_cale_pane_g2_ParamLimits

0xc7a0,	// (0x0001b2e0) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0001e2fc) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0001e2fc) list_single_fp_cale_pane_g

0xc7b9,	// (0x0001b2f9) list_single_fp_cale_pane_t1_ParamLimits

0xc7b9,	// (0x0001b2f9) list_single_fp_cale_pane_t1

0xc7cb,	// (0x0001b30b) list_single_fp_cale_pane_t2_ParamLimits

0xc7cb,	// (0x0001b30b) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0001e303) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0001e303) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9603,	// (0x00018143) main_dialer_pane

0x4ed9,	// (0x00013a19) aid_cell_size_keypad

0x4ee3,	// (0x00013a23) dialer_ne_pane

0x4eeb,	// (0x00013a2b) grid_dialer_command_1_pane

0x4ef3,	// (0x00013a33) grid_dialer_command_2_pane

0x4efb,	// (0x00013a3b) grid_dialer_keypad_pane

0x4f0d,	// (0x00013a4d) bg_popup_call_pane_cp06_ParamLimits

0x4f0d,	// (0x00013a4d) bg_popup_call_pane_cp06

0x4f19,	// (0x00013a59) dialer_ne_clear_pane_ParamLimits

0x4f19,	// (0x00013a59) dialer_ne_clear_pane

0xc7fe,	// (0x0001b33e) dialer_ne_pane_g1

0xc806,	// (0x0001b346) dialer_ne_pane_t1_ParamLimits

0xc806,	// (0x0001b346) dialer_ne_pane_t1

0x4f25,	// (0x00013a65) dialer_ne_pane_t2_ParamLimits

0x4f25,	// (0x00013a65) dialer_ne_pane_t2

0x4f4f,	// (0x00013a8f) dialer_ne_pane_t3_ParamLimits

0x4f4f,	// (0x00013a8f) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0001e308) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0001e308) dialer_ne_pane_t

0x4f7f,	// (0x00013abf) dialer_ne_pane_t3_copy1_ParamLimits

0x4f7f,	// (0x00013abf) dialer_ne_pane_t3_copy1

0x4fae,	// (0x00013aee) cell_dialer_keypad_pane_ParamLimits

0x4fae,	// (0x00013aee) cell_dialer_keypad_pane

0x4fc5,	// (0x00013b05) cell_dialer_command_1_pane_ParamLimits

0x4fc5,	// (0x00013b05) cell_dialer_command_1_pane

0x4fdb,	// (0x00013b1b) cell_dialer_command_2_pane_ParamLimits

0x4fdb,	// (0x00013b1b) cell_dialer_command_2_pane

0xc818,	// (0x0001b358) bg_button_pane_cp02_ParamLimits

0xc818,	// (0x0001b358) bg_button_pane_cp02

0x4fea,	// (0x00013b2a) cell_dialer_keypad_pane_g1_ParamLimits

0x4fea,	// (0x00013b2a) cell_dialer_keypad_pane_g1

0xc818,	// (0x0001b358) bg_button_pane_cp03_ParamLimits

0xc818,	// (0x0001b358) bg_button_pane_cp03

0x4ffe,	// (0x00013b3e) cell_dialer_command_1_pane_g1_ParamLimits

0x4ffe,	// (0x00013b3e) cell_dialer_command_1_pane_g1

0xc824,	// (0x0001b364) bg_button_pane_cp04

0x5012,	// (0x00013b52) cell_dialer_command_2_pane_g1

0xaa27,	// (0x00019567) bg_button_pane_cp06

0xc82c,	// (0x0001b36c) dialer_ne_clear_pane_g1

0x2a21,	// (0x00011561) navi_pane_g2

0x2a4f,	// (0x0001158f) navi_pane_g3

0x0002,

0xf3f0,	// (0x0001df30) navi_pane_g

0x2a78,	// (0x000115b8) navi_pane_mv_g2

0x2a9f,	// (0x000115df) navi_pane_mv_g5

0x2aa7,	// (0x000115e7) navi_pane_mv_t1

0x9dd6,	// (0x00018916) main_clock2_pane

0x505d,	// (0x00013b9d) main_clock2_list_pane_ParamLimits

0x505d,	// (0x00013b9d) main_clock2_list_pane

0x5095,	// (0x00013bd5) main_clock2_pane_t1_ParamLimits

0x5095,	// (0x00013bd5) main_clock2_pane_t1

0x50d1,	// (0x00013c11) main_clock2_pane_t2_ParamLimits

0x50d1,	// (0x00013c11) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0001e30f) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0001e30f) main_clock2_pane_t

0x516f,	// (0x00013caf) popup_clock_analogue_window_cp03_ParamLimits

0x516f,	// (0x00013caf) popup_clock_analogue_window_cp03

0x5194,	// (0x00013cd4) popup_clock_digital_window_cp02_ParamLimits

0x5194,	// (0x00013cd4) popup_clock_digital_window_cp02

0x5205,	// (0x00013d45) main_clock2_list_single_pane_ParamLimits

0x5205,	// (0x00013d45) main_clock2_list_single_pane

0xaa27,	// (0x00019567) list_highlight_pane_cp05

0xc84a,	// (0x0001b38a) main_clock2_list_single_pane_t1

0x16bc,	// (0x000101fc) popup_toolbar_window_cp04_ParamLimits

0x460f,	// (0x0001314f) camera2_autofocus_pane_g2_ParamLimits

0x460f,	// (0x0001314f) camera2_autofocus_pane_g2

0x461b,	// (0x0001315b) camera2_autofocus_pane_g3_ParamLimits

0x461b,	// (0x0001315b) camera2_autofocus_pane_g3

0x4627,	// (0x00013167) camera2_autofocus_pane_g4_ParamLimits

0x4627,	// (0x00013167) camera2_autofocus_pane_g4

0x4633,	// (0x00013173) camera2_autofocus_pane_g5_ParamLimits

0x4633,	// (0x00013173) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0001e258) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0001e258) camera2_autofocus_pane_g

0xc6f1,	// (0x0001b231) camera2_autofocus_pane_cp_g2

0xc6f9,	// (0x0001b239) camera2_autofocus_pane_cp_g3

0xc701,	// (0x0001b241) camera2_autofocus_pane_cp_g4

0xc709,	// (0x0001b249) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0001e2be) camera2_autofocus_pane_cp_g

0x4f05,	// (0x00013a45) popup_dialer_spcha_window

0x9603,	// (0x00018143) bg_popup_sub_pane_cp07

0xc858,	// (0x0001b398) list_spcha_pane

0xc860,	// (0x0001b3a0) list_single_spcha_pane_ParamLimits

0xc860,	// (0x0001b3a0) list_single_spcha_pane

0x9603,	// (0x00018143) list_highlight_pane_cp06

0xc871,	// (0x0001b3b1) list_single_spcha_pane_t1

0xb936,	// (0x0001a476) popup_call2_audio_out_window_g4_ParamLimits

0xb936,	// (0x0001a476) popup_call2_audio_out_window_g4

0x9603,	// (0x00018143) main_imed2_pane

0xbf21,	// (0x0001aa61) popup_imed_adjust2_window

0x39fa,	// (0x0001253a) popup_imed_trans_window_ParamLimits

0x39fa,	// (0x0001253a) popup_imed_trans_window

0xc252,	// (0x0001ad92) popup_blid_sat_info2_window_t1

0xc260,	// (0x0001ada0) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0001e1ed) popup_blid_sat_info2_window_t

0x52af,	// (0x00013def) aid_size_cell_colour_35

0x52cf,	// (0x00013e0f) aid_size_cell_colour_112

0x52ef,	// (0x00013e2f) aid_size_cell_effect

0xbef9,	// (0x0001aa39) bg_tb_trans_pane_cp02

0xa4e7,	// (0x00019027) heading_imed_pane

0x530f,	// (0x00013e4f) listscroll_imed_pane

0xc87f,	// (0x0001b3bf) heading_imed_pane_g1

0xc887,	// (0x0001b3c7) heading_imed_pane_t1

0xc895,	// (0x0001b3d5) grid_imed_colour_35_pane_ParamLimits

0xc895,	// (0x0001b3d5) grid_imed_colour_35_pane

0x531b,	// (0x00013e5b) grid_imed_effect_pane

0xc8ac,	// (0x0001b3ec) list_imed_aspect_pane

0x5331,	// (0x00013e71) scroll_pane_cp027_ParamLimits

0x5331,	// (0x00013e71) scroll_pane_cp027

0x5342,	// (0x00013e82) cell_imed_effect_pane_ParamLimits

0x5342,	// (0x00013e82) cell_imed_effect_pane

0xc8b4,	// (0x0001b3f4) cell_imed_colour_pane_ParamLimits

0xc8b4,	// (0x0001b3f4) cell_imed_colour_pane

0xc8f6,	// (0x0001b436) cell_imed_colour_pane_g1_ParamLimits

0xc8f6,	// (0x0001b436) cell_imed_colour_pane_g1

0xc907,	// (0x0001b447) hgihlgiht_grid_pane_cp016_ParamLimits

0xc907,	// (0x0001b447) hgihlgiht_grid_pane_cp016

0x5369,	// (0x00013ea9) cell_imed_effect_pane_g1

0x5371,	// (0x00013eb1) grid_highlight_pane_cp017

0xc918,	// (0x0001b458) list_imed_single_pane_ParamLimits

0xc918,	// (0x0001b458) list_imed_single_pane

0x9603,	// (0x00018143) list_highlight_pane_cp07

0xc92d,	// (0x0001b46d) list_imed_aspect_pane_comp1_t1

0xbef9,	// (0x0001aa39) bg_tb_trans_pane_cp05

0xc94f,	// (0x0001b48f) popup_imed_adjust2_window_g1

0xc976,	// (0x0001b4b6) popup_imed_adjust2_window_t1

0xc98e,	// (0x0001b4ce) slider_imed_adjust_pane

0xc9a2,	// (0x0001b4e2) slider_imed_adjust_pane_g1

0xc9b2,	// (0x0001b4f2) slider_imed_adjust_pane_g2

0xc9c2,	// (0x0001b502) slider_imed_adjust_pane_g3

0xc9d3,	// (0x0001b513) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0001e32c) slider_imed_adjust_pane_g

0x537a,	// (0x00013eba) aid_size_cell_clipart2

0x5386,	// (0x00013ec6) grid_imed_clipart_pane

0xc9e4,	// (0x0001b524) scroll_pane_cp031

0x5390,	// (0x00013ed0) cell_imed_clipart_pane_ParamLimits

0x5390,	// (0x00013ed0) cell_imed_clipart_pane

0x53b2,	// (0x00013ef2) cell_imed_clipart_pane_g1

0x9603,	// (0x00018143) grid_highlight_pane_cp014

0x5072,	// (0x00013bb2) main_clock2_pane_g1_ParamLimits

0x5072,	// (0x00013bb2) main_clock2_pane_g1

0x51b0,	// (0x00013cf0) aid_call2_pane_cp10

0x51c2,	// (0x00013d02) aid_call_pane_cp10

0xa95c,	// (0x0001949c) popup_clock_analogue_window_cp10_g1

0xa95c,	// (0x0001949c) popup_clock_analogue_window_cp10_g2

0x51d4,	// (0x00013d14) popup_clock_analogue_window_cp10_g3

0x51d4,	// (0x00013d14) popup_clock_analogue_window_cp10_g4

0xa95c,	// (0x0001949c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0001e31a) popup_clock_analogue_window_cp10_g

0x51e6,	// (0x00013d26) popup_clock_analogue_window_cp10_t1

0x5217,	// (0x00013d57) clock_digital_number_pane_cp10_ParamLimits

0x5217,	// (0x00013d57) clock_digital_number_pane_cp10

0x522f,	// (0x00013d6f) clock_digital_number_pane_cp11_ParamLimits

0x522f,	// (0x00013d6f) clock_digital_number_pane_cp11

0x5247,	// (0x00013d87) clock_digital_number_pane_cp12_ParamLimits

0x5247,	// (0x00013d87) clock_digital_number_pane_cp12

0x525f,	// (0x00013d9f) clock_digital_number_pane_cp13_ParamLimits

0x525f,	// (0x00013d9f) clock_digital_number_pane_cp13

0x5277,	// (0x00013db7) clock_digital_separator_pane_cp10_ParamLimits

0x5277,	// (0x00013db7) clock_digital_separator_pane_cp10

0x528f,	// (0x00013dcf) popup_clock_digital_window_cp02_t1_ParamLimits

0x528f,	// (0x00013dcf) popup_clock_digital_window_cp02_t1

0x9ce7,	// (0x00018827) clock_digital_number_pane_cp10_g1

0x9ce7,	// (0x00018827) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0001e335) clock_digital_number_pane_cp10_g

0x9ce7,	// (0x00018827) clock_digital_separator_pane_cp10_g1

0x9ce7,	// (0x00018827) clock_digital_separator_pane_g2_cp10

0xa9f7,	// (0x00019537) navi_pane_vded_g4

0xaa00,	// (0x00019540) navi_pane_vded_g5

0xaa09,	// (0x00019549) navi_pane_vded_t1

0x9603,	// (0x00018143) main_vded_pane

0x53bb,	// (0x00013efb) main_vded_pane_g1

0x53c5,	// (0x00013f05) main_vded_pane_g2

0x53cf,	// (0x00013f0f) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0001e33a) main_vded_pane_g

0x53d9,	// (0x00013f19) main_vded_pane_t1

0x53e7,	// (0x00013f27) main_vded_pane_t2

0x0001,

0xf801,	// (0x0001e341) main_vded_pane_t

0x53f5,	// (0x00013f35) vded_slider_pane

0x53fd,	// (0x00013f3d) vded_video_pane

0xc9ec,	// (0x0001b52c) vded_video_pane_g1

0x5405,	// (0x00013f45) vded_video_pane_g2

0xc414,	// (0x0001af54) vded_video_pane_g3

0x0002,

0xf806,	// (0x0001e346) vded_video_pane_g

0xc9f6,	// (0x0001b536) vded_slider_pane_g1

0xc123,	// (0x0001ac63) vded_slider_pane_g2

0xc9ff,	// (0x0001b53f) vded_slider_pane_g3

0xca08,	// (0x0001b548) vded_slider_pane_g4

0xca11,	// (0x0001b551) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0001e34d) vded_slider_pane_g

0x4de6,	// (0x00013926) mup3_rocker_pane_ParamLimits

0x4de6,	// (0x00013926) mup3_rocker_pane

0x540e,	// (0x00013f4e) mup3_control_keys_pane_g1

0x5416,	// (0x00013f56) mup3_control_keys_pane_g2

0x541e,	// (0x00013f5e) mup3_control_keys_pane_g3

0x5426,	// (0x00013f66) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0001e358) mup3_control_keys_pane_g

0x05d3,	// (0x0000f113) popup_toolbar2_fixed_window_cp01_ParamLimits

0x05d3,	// (0x0000f113) popup_toolbar2_fixed_window_cp01

0x4e1a,	// (0x0001395a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4e1a,	// (0x0001395a) popup_toolbar2_fixed_window_cp02

0xb275,	// (0x00019db5) popup_call2_audio_second_window_t4_ParamLimits

0xb275,	// (0x00019db5) popup_call2_audio_second_window_t4

0xb7a3,	// (0x0001a2e3) popup_call2_audio_first_window_t6_ParamLimits

0xb7a3,	// (0x0001a2e3) popup_call2_audio_first_window_t6

0xba39,	// (0x0001a579) popup_call2_audio_out_window_t6_ParamLimits

0xba39,	// (0x0001a579) popup_call2_audio_out_window_t6

0x9603,	// (0x00018143) main_vitu_pane

0x5436,	// (0x00013f76) aid_size_cell_itu_ParamLimits

0x5436,	// (0x00013f76) aid_size_cell_itu

0x9673,	// (0x000181b3) bg_popup_window_pane_cp08_ParamLimits

0x9673,	// (0x000181b3) bg_popup_window_pane_cp08

0x544c,	// (0x00013f8c) field_vitu_entry_pane_ParamLimits

0x544c,	// (0x00013f8c) field_vitu_entry_pane

0x5463,	// (0x00013fa3) grid_vitu_function_pane_ParamLimits

0x5463,	// (0x00013fa3) grid_vitu_function_pane

0x547e,	// (0x00013fbe) grid_vitu_itu_pane_ParamLimits

0x547e,	// (0x00013fbe) grid_vitu_itu_pane

0x549c,	// (0x00013fdc) cell_vitu_itu_pane_ParamLimits

0x549c,	// (0x00013fdc) cell_vitu_itu_pane

0x54be,	// (0x00013ffe) cell_vitu_function_pane_ParamLimits

0x54be,	// (0x00013ffe) cell_vitu_function_pane

0x9673,	// (0x000181b3) bg_popup_sub_pane_cp08_ParamLimits

0x9673,	// (0x000181b3) bg_popup_sub_pane_cp08

0x54d7,	// (0x00014017) field_vitu_entry_pane_t1_ParamLimits

0x54d7,	// (0x00014017) field_vitu_entry_pane_t1

0xca32,	// (0x0001b572) field_vitu_entry_pane_t2_ParamLimits

0xca32,	// (0x0001b572) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0001e366) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0001e366) field_vitu_entry_pane_t

0xca4f,	// (0x0001b58f) bg_button_pane_cp05_ParamLimits

0xca4f,	// (0x0001b58f) bg_button_pane_cp05

0x54f5,	// (0x00014035) cell_vitu_itu_pane_g1

0x550d,	// (0x0001404d) cell_vitu_itu_pane_t1_ParamLimits

0x550d,	// (0x0001404d) cell_vitu_itu_pane_t1

0x551f,	// (0x0001405f) cell_vitu_itu_pane_t2_ParamLimits

0x551f,	// (0x0001405f) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0001e36b) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0001e36b) cell_vitu_itu_pane_t

0xca5d,	// (0x0001b59d) bg_button_pane_cp07

0x5554,	// (0x00014094) cell_vitu_function_pane_g1

0x9d76,	// (0x000188b6) main_calc_pane_g1

0x03fa,	// (0x0000ef3a) aid_visual_content_pane

0x9603,	// (0x00018143) main_vradio_pane

0x555d,	// (0x0001409d) main_vradio_pane_g1_ParamLimits

0x555d,	// (0x0001409d) main_vradio_pane_g1

0xca67,	// (0x0001b5a7) main_vradio_pane_g2_ParamLimits

0xca67,	// (0x0001b5a7) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0001e372) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0001e372) main_vradio_pane_g

0x5576,	// (0x000140b6) main_vradio_pane_t1_ParamLimits

0x5576,	// (0x000140b6) main_vradio_pane_t1

0x558b,	// (0x000140cb) main_vradio_pane_t2_ParamLimits

0x558b,	// (0x000140cb) main_vradio_pane_t2

0xca74,	// (0x0001b5b4) main_vradio_pane_t3_ParamLimits

0xca74,	// (0x0001b5b4) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0001e377) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0001e377) main_vradio_pane_t

0x55a0,	// (0x000140e0) vradio_rocker_control_pane_ParamLimits

0x55a0,	// (0x000140e0) vradio_rocker_control_pane

0x55b2,	// (0x000140f2) vradio_station_info_pane_ParamLimits

0x55b2,	// (0x000140f2) vradio_station_info_pane

0xca88,	// (0x0001b5c8) vradio_frequency_info_pane_ParamLimits

0xca88,	// (0x0001b5c8) vradio_frequency_info_pane

0xc414,	// (0x0001af54) vradio_station_info_pane_g1

0xca97,	// (0x0001b5d7) vradio_station_info_pane_t1_ParamLimits

0xca97,	// (0x0001b5d7) vradio_station_info_pane_t1

0xcab9,	// (0x0001b5f9) vradio_station_info_pane_t2_ParamLimits

0xcab9,	// (0x0001b5f9) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0001e37e) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0001e37e) vradio_station_info_pane_t

0xcacb,	// (0x0001b60b) vradio_tuning_pane

0xcad3,	// (0x0001b613) vradio_rocker_control_pane_g1

0xcadb,	// (0x0001b61b) vradio_rocker_control_pane_g2

0xcae3,	// (0x0001b623) vradio_rocker_control_pane_g3

0xcaeb,	// (0x0001b62b) vradio_rocker_control_pane_g4

0xcaf3,	// (0x0001b633) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0001e383) vradio_rocker_control_pane_g

0x55c4,	// (0x00014104) vradio_frequency_info_pane_g1

0xcafb,	// (0x0001b63b) vradio_frequency_info_pane_t1_ParamLimits

0xcafb,	// (0x0001b63b) vradio_frequency_info_pane_t1

0x55ce,	// (0x0001410e) vradio_tuning_pane_g1

0x55d9,	// (0x00014119) vradio_tuning_pane_t1

0x9631,	// (0x00018171) area_side_right_pane_ParamLimits

0x9631,	// (0x00018171) area_side_right_pane

0xbeb4,	// (0x0001a9f4) status_small_pane_g1

0xbebc,	// (0x0001a9fc) status_small_pane_g2

0xbec5,	// (0x0001aa05) status_small_pane_g3

0xbece,	// (0x0001aa0e) status_small_pane_g4

0x0003,

0xf603,	// (0x0001e143) status_small_pane_g

0xbed7,	// (0x0001aa17) status_small_pane_t1

0x9603,	// (0x00018143) main_video3_pane

0xcb0f,	// (0x0001b64f) cams_zoom_vslider_pane

0xcb17,	// (0x0001b657) image3_wide_pane_ParamLimits

0xcb17,	// (0x0001b657) image3_wide_pane

0xcb31,	// (0x0001b671) image3_wide_small_pane

0xcb3d,	// (0x0001b67d) main_video3_pane_g1_ParamLimits

0xcb3d,	// (0x0001b67d) main_video3_pane_g1

0xcb59,	// (0x0001b699) main_video3_pane_g2_ParamLimits

0xcb59,	// (0x0001b699) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0001e38e) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0001e38e) main_video3_pane_g

0xcb75,	// (0x0001b6b5) main_video3_pane_t1_ParamLimits

0xcb75,	// (0x0001b6b5) main_video3_pane_t1

0xcba0,	// (0x0001b6e0) main_video3_pane_t2_ParamLimits

0xcba0,	// (0x0001b6e0) main_video3_pane_t2

0xcbcb,	// (0x0001b70b) main_video3_pane_t3_ParamLimits

0xcbcb,	// (0x0001b70b) main_video3_pane_t3

0x0002,

0xf853,	// (0x0001e393) main_video3_pane_t_ParamLimits

0xf853,	// (0x0001e393) main_video3_pane_t

0xcbf8,	// (0x0001b738) cams_zoom_vslider_pane_g1

0xcc01,	// (0x0001b741) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0001e39a) cams_zoom_vslider_pane_g

0xcc09,	// (0x0001b749) small_slider_vertical_pane

0xc414,	// (0x0001af54) small_slider_vertical_pane_g1

0xc414,	// (0x0001af54) small_slider_vertical_pane_g2

0xcc11,	// (0x0001b751) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0001e39f) small_slider_vertical_pane_g

0x9603,	// (0x00018143) main_hwr_training_pane

0xcc1a,	// (0x0001b75a) hwr_training_instruct_pane_ParamLimits

0xcc1a,	// (0x0001b75a) hwr_training_instruct_pane

0x55e8,	// (0x00014128) hwr_training_navi_pane_ParamLimits

0x55e8,	// (0x00014128) hwr_training_navi_pane

0x5607,	// (0x00014147) hwr_training_write_pane_ParamLimits

0x5607,	// (0x00014147) hwr_training_write_pane

0x9603,	// (0x00018143) bg_frame_shadow_pane

0xcc51,	// (0x0001b791) hwr_training_write_pane_g1

0xcc59,	// (0x0001b799) hwr_training_write_pane_g2

0xcc61,	// (0x0001b7a1) hwr_training_write_pane_g3

0xcc69,	// (0x0001b7a9) hwr_training_write_pane_g4

0xcc71,	// (0x0001b7b1) hwr_training_write_pane_g5

0xcc79,	// (0x0001b7b9) hwr_training_write_pane_g6

0xcc81,	// (0x0001b7c1) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0001e3a6) hwr_training_write_pane_g

0xcc89,	// (0x0001b7c9) hwr_training_navi_pane_g1_ParamLimits

0xcc89,	// (0x0001b7c9) hwr_training_navi_pane_g1

0xcc9b,	// (0x0001b7db) hwr_training_navi_pane_g2_ParamLimits

0xcc9b,	// (0x0001b7db) hwr_training_navi_pane_g2

0xccad,	// (0x0001b7ed) hwr_training_navi_pane_g3_ParamLimits

0xccad,	// (0x0001b7ed) hwr_training_navi_pane_g3

0xccbd,	// (0x0001b7fd) hwr_training_navi_pane_g4_ParamLimits

0xccbd,	// (0x0001b7fd) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0001e3b5) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0001e3b5) hwr_training_navi_pane_g

0xccca,	// (0x0001b80a) hwr_training_navi_pane_t1

0x564f,	// (0x0001418f) list_single_hwr_training_instruct_pane_ParamLimits

0x564f,	// (0x0001418f) list_single_hwr_training_instruct_pane

0xccd8,	// (0x0001b818) list_single_hwr_training_instruct_pane_t1

0xc354,	// (0x0001ae94) bg_frame_shadow_pane_g1

0xcce7,	// (0x0001b827) bg_frame_shadow_pane_g2

0xccef,	// (0x0001b82f) bg_frame_shadow_pane_g3

0xccf7,	// (0x0001b837) bg_frame_shadow_pane_g4

0xccff,	// (0x0001b83f) bg_frame_shadow_pane_g5

0xcd07,	// (0x0001b847) bg_frame_shadow_pane_g6

0xcd0f,	// (0x0001b84f) bg_frame_shadow_pane_g7

0x9eb3,	// (0x000189f3) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0001e3c0) bg_frame_shadow_pane_g

0x9603,	// (0x00018143) main_video_tele_dialer_pane

0x5664,	// (0x000141a4) aid_size_cell_video_keypad_ParamLimits

0x5664,	// (0x000141a4) aid_size_cell_video_keypad

0x567e,	// (0x000141be) grid_video_dialer_keypad_pane_ParamLimits

0x567e,	// (0x000141be) grid_video_dialer_keypad_pane

0x56ca,	// (0x0001420a) video_down_pane_cp_ParamLimits

0x56ca,	// (0x0001420a) video_down_pane_cp

0x56fc,	// (0x0001423c) cell_video_dialer_keypad_pane_ParamLimits

0x56fc,	// (0x0001423c) cell_video_dialer_keypad_pane

0xcd17,	// (0x0001b857) bg_button_pane_cp08_ParamLimits

0xcd17,	// (0x0001b857) bg_button_pane_cp08

0x571e,	// (0x0001425e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x571e,	// (0x0001425e) cell_video_dialer_keypad_pane_g1

0x4dd0,	// (0x00013910) mup3_rocker2_pane_ParamLimits

0x4dd0,	// (0x00013910) mup3_rocker2_pane

0xc414,	// (0x0001af54) mup3_rocker2_pane_g1

0x38db,	// (0x0001241b) main_dialer2_pane

0x9603,	// (0x00018143) main_mp4_pane

0xcd2b,	// (0x0001b86b) main_mp4_pane_g1_ParamLimits

0xcd2b,	// (0x0001b86b) main_mp4_pane_g1

0xcd2b,	// (0x0001b86b) main_mp4_pane_g2_ParamLimits

0xcd2b,	// (0x0001b86b) main_mp4_pane_g2

0x5755,	// (0x00014295) main_mp4_pane_g3_ParamLimits

0x5755,	// (0x00014295) main_mp4_pane_g3

0xcd39,	// (0x0001b879) main_mp4_pane_g4_ParamLimits

0xcd39,	// (0x0001b879) main_mp4_pane_g4

0xcd61,	// (0x0001b8a1) main_mp4_pane_g5_ParamLimits

0xcd61,	// (0x0001b8a1) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0001e3e0) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0001e3e0) main_mp4_pane_g

0xcdb1,	// (0x0001b8f1) main_mp4_pane_t1_ParamLimits

0xcdb1,	// (0x0001b8f1) main_mp4_pane_t1

0xce0d,	// (0x0001b94d) main_mp4_pane_t2_ParamLimits

0xce0d,	// (0x0001b94d) main_mp4_pane_t2

0xce5f,	// (0x0001b99f) main_mp4_pane_t3_ParamLimits

0xce5f,	// (0x0001b99f) main_mp4_pane_t3

0xce7f,	// (0x0001b9bf) main_mp4_pane_t4_ParamLimits

0xce7f,	// (0x0001b9bf) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0001e3ed) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0001e3ed) main_mp4_pane_t

0xcec3,	// (0x0001ba03) mp4_progress_pane_ParamLimits

0xcec3,	// (0x0001ba03) mp4_progress_pane

0xcf0d,	// (0x0001ba4d) mp4_rocker_pane_ParamLimits

0xcf0d,	// (0x0001ba4d) mp4_rocker_pane

0xcf35,	// (0x0001ba75) mp4_progress_pane_t1

0xcf4e,	// (0x0001ba8e) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0001e3f6) mp4_progress_pane_t

0xcf67,	// (0x0001baa7) mup_progress_pane_cp04

0xc414,	// (0x0001af54) mp4_rocker_pane_g1

0x5791,	// (0x000142d1) aid_cell_size_keypad2_ParamLimits

0x5791,	// (0x000142d1) aid_cell_size_keypad2

0x57a7,	// (0x000142e7) dialer2_ne_pane_ParamLimits

0x57a7,	// (0x000142e7) dialer2_ne_pane

0x57c1,	// (0x00014301) grid_dialer2_keypad_pane_ParamLimits

0x57c1,	// (0x00014301) grid_dialer2_keypad_pane

0xc1f9,	// (0x0001ad39) bg_popup_call_pane_cp07_ParamLimits

0xc1f9,	// (0x0001ad39) bg_popup_call_pane_cp07

0x57dd,	// (0x0001431d) dialer2_ne_pane_t1_ParamLimits

0x57dd,	// (0x0001431d) dialer2_ne_pane_t1

0x5818,	// (0x00014358) cell_dialer2_keypad_pane_ParamLimits

0x5818,	// (0x00014358) cell_dialer2_keypad_pane

0xcf85,	// (0x0001bac5) bg_button_pane_pane_cp04_ParamLimits

0xcf85,	// (0x0001bac5) bg_button_pane_pane_cp04

0x583a,	// (0x0001437a) cell_dialer2_keypad_pane_g1_ParamLimits

0x583a,	// (0x0001437a) cell_dialer2_keypad_pane_g1

0x1590,	// (0x000100d0) aid_placing_vt_set_content_ParamLimits

0x1590,	// (0x000100d0) aid_placing_vt_set_content

0x15b8,	// (0x000100f8) aid_placing_vt_set_title_ParamLimits

0x15b8,	// (0x000100f8) aid_placing_vt_set_title

0x9603,	// (0x00018143) main_image3_pane

0x5900,	// (0x00014440) area_side_right_pane_cp01_ParamLimits

0x5900,	// (0x00014440) area_side_right_pane_cp01

0xcd2b,	// (0x0001b86b) main_image3_pane_g1_ParamLimits

0xcd2b,	// (0x0001b86b) main_image3_pane_g1

0x5917,	// (0x00014457) main_image3_pane_g2_ParamLimits

0x5917,	// (0x00014457) main_image3_pane_g2

0x593f,	// (0x0001447f) main_image3_pane_g3_ParamLimits

0x593f,	// (0x0001447f) main_image3_pane_g3

0x5969,	// (0x000144a9) main_image3_pane_g4_ParamLimits

0x5969,	// (0x000144a9) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0001e405) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0001e405) main_image3_pane_g

0x5993,	// (0x000144d3) main_image3_pane_t1_ParamLimits

0x5993,	// (0x000144d3) main_image3_pane_t1

0x59eb,	// (0x0001452b) main_image3_pane_t2_ParamLimits

0x59eb,	// (0x0001452b) main_image3_pane_t2

0x5a3d,	// (0x0001457d) main_image3_pane_t3_ParamLimits

0x5a3d,	// (0x0001457d) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0001e40e) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0001e40e) main_image3_pane_t

0x9673,	// (0x000181b3) grid_sctrl_middle_pane_cp01_ParamLimits

0x9673,	// (0x000181b3) grid_sctrl_middle_pane_cp01

0x5ac5,	// (0x00014605) cell_sctrl_middle_pane_cp01_ParamLimits

0x5ac5,	// (0x00014605) cell_sctrl_middle_pane_cp01

0x5ae2,	// (0x00014622) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5ae2,	// (0x00014622) cell_sctrl_middle_pane_cp01_g1

0x9603,	// (0x00018143) main_call4_pane

0x5af8,	// (0x00014638) aid_size_button_call4_ParamLimits

0x5af8,	// (0x00014638) aid_size_button_call4

0x5b29,	// (0x00014669) call4_windows_pane_ParamLimits

0x5b29,	// (0x00014669) call4_windows_pane

0x5b49,	// (0x00014689) grid_call4_button_pane_ParamLimits

0x5b49,	// (0x00014689) grid_call4_button_pane

0xcfc3,	// (0x0001bb03) call4_windows_conf_pane

0xcfda,	// (0x0001bb1a) popup_call4_audio_first_window_ParamLimits

0xcfda,	// (0x0001bb1a) popup_call4_audio_first_window

0xd026,	// (0x0001bb66) popup_call4_audio_second_window_ParamLimits

0xd026,	// (0x0001bb66) popup_call4_audio_second_window

0xd03a,	// (0x0001bb7a) popup_call4_audio_wait_window_ParamLimits

0xd03a,	// (0x0001bb7a) popup_call4_audio_wait_window

0x5b76,	// (0x000146b6) cell_call4_button_pane_ParamLimits

0x5b76,	// (0x000146b6) cell_call4_button_pane

0x5b9f,	// (0x000146df) bg_button_pane_cp09_ParamLimits

0x5b9f,	// (0x000146df) bg_button_pane_cp09

0x5bab,	// (0x000146eb) cell_call4_button_pane_g1_ParamLimits

0x5bab,	// (0x000146eb) cell_call4_button_pane_g1

0x5bd1,	// (0x00014711) cell_call4_button_pane_t1_ParamLimits

0x5bd1,	// (0x00014711) cell_call4_button_pane_t1

0xd082,	// (0x0001bbc2) popup_call4_audio_conf_window_ParamLimits

0xd082,	// (0x0001bbc2) popup_call4_audio_conf_window

0x4e30,	// (0x00013970) mup3_progress_pane_t1_ParamLimits

0x4e4f,	// (0x0001398f) mup3_progress_pane_t2_ParamLimits

0xc727,	// (0x0001b267) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0001e2e7) mup3_progress_pane_t_ParamLimits

0xc744,	// (0x0001b284) mup_progress_pane_cp03_ParamLimits

0x542e,	// (0x00013f6e) mup3_control_keys_pane_g4_copy1

0xcef1,	// (0x0001ba31) mp4_rocker2_pane_ParamLimits

0xcef1,	// (0x0001ba31) mp4_rocker2_pane

0xd096,	// (0x0001bbd6) mp4_rocker2_pane_g1

0xd09e,	// (0x0001bbde) mp4_rocker2_pane_g2

0xd0a6,	// (0x0001bbe6) mp4_rocker2_pane_g3

0xd0ae,	// (0x0001bbee) mp4_rocker2_pane_g4

0xd0b6,	// (0x0001bbf6) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0001e417) mp4_rocker2_pane_g

0x9603,	// (0x00018143) main_camera4_pane

0x9603,	// (0x00018143) main_video4_pane

0x5698,	// (0x000141d8) main_video_tele_dialer_pane_t1_ParamLimits

0x5698,	// (0x000141d8) main_video_tele_dialer_pane_t1

0x56b1,	// (0x000141f1) main_video_tele_dialer_pane_t2_ParamLimits

0x56b1,	// (0x000141f1) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0001e3d1) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0001e3d1) main_video_tele_dialer_pane_t

0x5c0f,	// (0x0001474f) cam4_autofocus_pane_ParamLimits

0x5c0f,	// (0x0001474f) cam4_autofocus_pane

0x5c25,	// (0x00014765) cam4_image_uncrop_pane_ParamLimits

0x5c25,	// (0x00014765) cam4_image_uncrop_pane

0x5c3f,	// (0x0001477f) cam4_indicators_pane_ParamLimits

0x5c3f,	// (0x0001477f) cam4_indicators_pane

0x5c6a,	// (0x000147aa) main_camera4_pane_g1_ParamLimits

0x5c6a,	// (0x000147aa) main_camera4_pane_g1

0x5c7c,	// (0x000147bc) main_camera4_pane_g2_ParamLimits

0x5c7c,	// (0x000147bc) main_camera4_pane_g2

0x5c8f,	// (0x000147cf) main_camera4_pane_g3_ParamLimits

0x5c8f,	// (0x000147cf) main_camera4_pane_g3

0x5ca2,	// (0x000147e2) main_camera4_pane_g4_ParamLimits

0x5ca2,	// (0x000147e2) main_camera4_pane_g4

0x5cb5,	// (0x000147f5) main_camera4_pane_g5_ParamLimits

0x5cb5,	// (0x000147f5) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0001e422) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0001e422) main_camera4_pane_g

0x5cd9,	// (0x00014819) main_camera4_pane_t1_ParamLimits

0x5cd9,	// (0x00014819) main_camera4_pane_t1

0xc680,	// (0x0001b1c0) bg_tb_trans_pane_cp06

0xd0e2,	// (0x0001bc22) cam4_indicators_pane_g1

0xd0f3,	// (0x0001bc33) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0001e43d) cam4_indicators_pane_g

0xd111,	// (0x0001bc51) cam4_indicators_pane_t1

0x5d3d,	// (0x0001487d) main_video4_pane_g1_ParamLimits

0x5d3d,	// (0x0001487d) main_video4_pane_g1

0x5d4c,	// (0x0001488c) main_video4_pane_g2_ParamLimits

0x5d4c,	// (0x0001488c) main_video4_pane_g2

0x5d5b,	// (0x0001489b) main_video4_pane_g3_ParamLimits

0x5d5b,	// (0x0001489b) main_video4_pane_g3

0x5d6a,	// (0x000148aa) main_video4_pane_g4_ParamLimits

0x5d6a,	// (0x000148aa) main_video4_pane_g4

0x0004,

0xf904,	// (0x0001e444) main_video4_pane_g_ParamLimits

0xf904,	// (0x0001e444) main_video4_pane_g

0x5d88,	// (0x000148c8) vid4_indicators_pane_ParamLimits

0x5d88,	// (0x000148c8) vid4_indicators_pane

0x5db6,	// (0x000148f6) video4_image_uncrop_cif_pane_ParamLimits

0x5db6,	// (0x000148f6) video4_image_uncrop_cif_pane

0x5dd0,	// (0x00014910) video4_image_uncrop_nhd_pane_ParamLimits

0x5dd0,	// (0x00014910) video4_image_uncrop_nhd_pane

0x5c25,	// (0x00014765) video4_image_uncrop_vga_pane_ParamLimits

0x5c25,	// (0x00014765) video4_image_uncrop_vga_pane

0x9673,	// (0x000181b3) bg_tb_trans_pane_cp07

0xd13d,	// (0x0001bc7d) vid4_indicators_pane_g1

0xd151,	// (0x0001bc91) vid4_indicators_pane_g2

0xd165,	// (0x0001bca5) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0001e44f) vid4_indicators_pane_g

0xd194,	// (0x0001bcd4) vid4_indicators_pane_t1

0x5de4,	// (0x00014924) cam4_autofocus_pane_g1

0x5dec,	// (0x0001492c) cam4_autofocus_pane_g2

0x5df4,	// (0x00014934) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0001e45a) cam4_autofocus_pane_g

0x5dfc,	// (0x0001493c) cam4_autofocus_pane_g3_copy1

0x56e0,	// (0x00014220) video_down_pane_cp_t1

0x56ee,	// (0x0001422e) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0001e3d6) video_down_pane_cp_t

0x9673,	// (0x000181b3) popup_vitu2_window_ParamLimits

0x9673,	// (0x000181b3) popup_vitu2_window

0x5e04,	// (0x00014944) aid_size_cell2_itu2_ParamLimits

0x5e04,	// (0x00014944) aid_size_cell2_itu2

0x5e2a,	// (0x0001496a) aid_size_cell_itu2_ParamLimits

0x5e2a,	// (0x0001496a) aid_size_cell_itu2

0x5e86,	// (0x000149c6) bg_popup_window_pane_cp09_ParamLimits

0x5e86,	// (0x000149c6) bg_popup_window_pane_cp09

0x5e94,	// (0x000149d4) field_vitu2_entry_pane_ParamLimits

0x5e94,	// (0x000149d4) field_vitu2_entry_pane

0x5eba,	// (0x000149fa) grid_vitu2_function_pane_ParamLimits

0x5eba,	// (0x000149fa) grid_vitu2_function_pane

0x5f0b,	// (0x00014a4b) grid_vitu2_itu_pane_ParamLimits

0x5f0b,	// (0x00014a4b) grid_vitu2_itu_pane

0x5f9e,	// (0x00014ade) cell_vitu2_itu_pane_ParamLimits

0x5f9e,	// (0x00014ade) cell_vitu2_itu_pane

0x5fc2,	// (0x00014b02) cell_vitu2_function_pane_ParamLimits

0x5fc2,	// (0x00014b02) cell_vitu2_function_pane

0xd1ab,	// (0x0001bceb) bg_popup_call_pane_cp08_ParamLimits

0xd1ab,	// (0x0001bceb) bg_popup_call_pane_cp08

0xd1c4,	// (0x0001bd04) field_vitu2_entry_pane_g1

0xd1d0,	// (0x0001bd10) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0001e461) field_vitu2_entry_pane_g

0xd1ea,	// (0x0001bd2a) field_vitu2_entry_pane_t1_ParamLimits

0xd1ea,	// (0x0001bd2a) field_vitu2_entry_pane_t1

0xd219,	// (0x0001bd59) field_vitu2_entry_pane_t2_ParamLimits

0xd219,	// (0x0001bd59) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0001e468) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0001e468) field_vitu2_entry_pane_t

0x6001,	// (0x00014b41) bg_button_pane_cp010_ParamLimits

0x6001,	// (0x00014b41) bg_button_pane_cp010

0x600f,	// (0x00014b4f) cell_vitu2_itu_pane_g1

0x602d,	// (0x00014b6d) cell_vitu2_itu_pane_t1_ParamLimits

0x602d,	// (0x00014b6d) cell_vitu2_itu_pane_t1

0x6093,	// (0x00014bd3) cell_vitu2_itu_pane_t2_ParamLimits

0x6093,	// (0x00014bd3) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0001e472) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0001e472) cell_vitu2_itu_pane_t

0x9673,	// (0x000181b3) bg_button_pane_cp011

0x616f,	// (0x00014caf) cell_vitu2_function_pane_g1

0x9603,	// (0x00018143) main_myfav_hc_pane

0x5a8d,	// (0x000145cd) popup_image3_note_pane_ParamLimits

0x5a8d,	// (0x000145cd) popup_image3_note_pane

0x5aa9,	// (0x000145e9) popup_image3_tool_bar_pane_ParamLimits

0x5aa9,	// (0x000145e9) popup_image3_tool_bar_pane

0x6117,	// (0x00014c57) cell_vitu2_itu_pane_t3_ParamLimits

0x6117,	// (0x00014c57) cell_vitu2_itu_pane_t3

0x9603,	// (0x00018143) bg_popup_trans_pane

0xd23e,	// (0x0001bd7e) grid_image3_tool_bar_pane

0xd248,	// (0x0001bd88) bg_popup_trans_pane_g1

0xa271,	// (0x00018db1) bg_popup_trans_pane_g2

0xd250,	// (0x0001bd90) bg_popup_trans_pane_g3

0xd258,	// (0x0001bd98) bg_popup_trans_pane_g4

0xd2a2,	// (0x0001bde2) bg_popup_trans_pane_g5

0xd2aa,	// (0x0001bdea) bg_popup_trans_pane_g6

0xd2b2,	// (0x0001bdf2) bg_popup_trans_pane_g7

0xd2ba,	// (0x0001bdfa) bg_popup_trans_pane_g8

0xa251,	// (0x00018d91) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0001e479) bg_popup_trans_pane_g

0xd2c2,	// (0x0001be02) cell_image3_tool_bar_pane_ParamLimits

0xd2c2,	// (0x0001be02) cell_image3_tool_bar_pane

0xc414,	// (0x0001af54) cell_image3_tool_bar_pane_g1

0x9603,	// (0x00018143) bg_popup_trans_pane_cp1

0xd2d6,	// (0x0001be16) popup_image3_note_pane_t1

0xd2e4,	// (0x0001be24) popup_image3_note_pane_t2

0xd2f2,	// (0x0001be32) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0001e48c) popup_image3_note_pane_t

0xd300,	// (0x0001be40) popup_image3_note_pane_t3_copy1

0x6183,	// (0x00014cc3) bg_myfav_hc_instruction_pane_ParamLimits

0x6183,	// (0x00014cc3) bg_myfav_hc_instruction_pane

0x6197,	// (0x00014cd7) cell_myfav_contact_pane_ParamLimits

0x6197,	// (0x00014cd7) cell_myfav_contact_pane

0x61b5,	// (0x00014cf5) cell_myfav_contact_pane_cp1_ParamLimits

0x61b5,	// (0x00014cf5) cell_myfav_contact_pane_cp1

0x61cd,	// (0x00014d0d) cell_myfav_contact_pane_cp2_ParamLimits

0x61cd,	// (0x00014d0d) cell_myfav_contact_pane_cp2

0x61e5,	// (0x00014d25) cell_myfav_contact_pane_cp3_ParamLimits

0x61e5,	// (0x00014d25) cell_myfav_contact_pane_cp3

0x61fc,	// (0x00014d3c) cell_myfav_contact_pane_cp4_ParamLimits

0x61fc,	// (0x00014d3c) cell_myfav_contact_pane_cp4

0x6214,	// (0x00014d54) cell_myfav_contact_pane_cp5_ParamLimits

0x6214,	// (0x00014d54) cell_myfav_contact_pane_cp5

0x6228,	// (0x00014d68) cell_myfav_contact_pane_cp6_ParamLimits

0x6228,	// (0x00014d68) cell_myfav_contact_pane_cp6

0x623e,	// (0x00014d7e) cell_myfav_contact_pane_cp7_ParamLimits

0x623e,	// (0x00014d7e) cell_myfav_contact_pane_cp7

0xd30e,	// (0x0001be4e) listscroll_gen_pane_cp05

0x6258,	// (0x00014d98) main_myfav_hc_pane_g1_ParamLimits

0x6258,	// (0x00014d98) main_myfav_hc_pane_g1

0x6272,	// (0x00014db2) main_myfav_hc_pane_g2_ParamLimits

0x6272,	// (0x00014db2) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0001e493) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0001e493) main_myfav_hc_pane_g

0x62a4,	// (0x00014de4) main_myfav_hc_pane_t1_ParamLimits

0x62a4,	// (0x00014de4) main_myfav_hc_pane_t1

0xd317,	// (0x0001be57) main_myfav_hc_pane_t2_ParamLimits

0xd317,	// (0x0001be57) main_myfav_hc_pane_t2

0xd329,	// (0x0001be69) main_myfav_hc_pane_t3_ParamLimits

0xd329,	// (0x0001be69) main_myfav_hc_pane_t3

0x62bb,	// (0x00014dfb) main_myfav_hc_pane_t4_ParamLimits

0x62bb,	// (0x00014dfb) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0001e49a) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0001e49a) main_myfav_hc_pane_t

0xc414,	// (0x0001af54) bg_myfav_hc_instruction_pane_g1

0xd33b,	// (0x0001be7b) cell_myfav_contact_pane_g1_ParamLimits

0xd33b,	// (0x0001be7b) cell_myfav_contact_pane_g1

0xd33b,	// (0x0001be7b) cell_myfav_contact_pane_g2_ParamLimits

0xd33b,	// (0x0001be7b) cell_myfav_contact_pane_g2

0xd347,	// (0x0001be87) cell_myfav_contact_pane_g3_ParamLimits

0xd347,	// (0x0001be87) cell_myfav_contact_pane_g3

0xc711,	// (0x0001b251) cell_myfav_contact_pane_g4_ParamLimits

0xc711,	// (0x0001b251) cell_myfav_contact_pane_g4

0xd354,	// (0x0001be94) cell_myfav_contact_pane_g5_ParamLimits

0xd354,	// (0x0001be94) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0001e4a5) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0001e4a5) cell_myfav_contact_pane_g

0x628c,	// (0x00014dcc) main_myfav_hc_pane_g3_ParamLimits

0x628c,	// (0x00014dcc) main_myfav_hc_pane_g3

0x0535,	// (0x0000f075) popup_adpt_find_window

0x62e3,	// (0x00014e23) afind_page_pane_ParamLimits

0x62e3,	// (0x00014e23) afind_page_pane

0x62f8,	// (0x00014e38) aid_size_cell_afind_ParamLimits

0x62f8,	// (0x00014e38) aid_size_cell_afind

0x6316,	// (0x00014e56) bg_popup_sub_pane_cp09_ParamLimits

0x6316,	// (0x00014e56) bg_popup_sub_pane_cp09

0x6323,	// (0x00014e63) find_pane_cp01_ParamLimits

0x6323,	// (0x00014e63) find_pane_cp01

0xd360,	// (0x0001bea0) grid_afind_control_pane_ParamLimits

0xd360,	// (0x0001bea0) grid_afind_control_pane

0x6330,	// (0x00014e70) grid_afind_pane_ParamLimits

0x6330,	// (0x00014e70) grid_afind_pane

0x6352,	// (0x00014e92) cell_afind_pane_ParamLimits

0x6352,	// (0x00014e92) cell_afind_pane

0xc414,	// (0x0001af54) afind_page_pane_g1

0x63b3,	// (0x00014ef3) afind_page_pane_g2

0x63bc,	// (0x00014efc) afind_page_pane_g3

0x0002,

0xf970,	// (0x0001e4b0) afind_page_pane_g

0x63c5,	// (0x00014f05) afind_page_pane_t1

0xd374,	// (0x0001beb4) cell_afind_grid_control_pane_ParamLimits

0xd374,	// (0x0001beb4) cell_afind_grid_control_pane

0xcf85,	// (0x0001bac5) bg_button_pane_cp69_ParamLimits

0xcf85,	// (0x0001bac5) bg_button_pane_cp69

0x63e5,	// (0x00014f25) cell_afind_pane_g1_ParamLimits

0x63e5,	// (0x00014f25) cell_afind_pane_g1

0x63f2,	// (0x00014f32) cell_afind_pane_t1_ParamLimits

0x63f2,	// (0x00014f32) cell_afind_pane_t1

0xa06a,	// (0x00018baa) bg_button_pane_cp72

0xd383,	// (0x0001bec3) cell_afind_grid_control_pane_g1

0x339b,	// (0x00011edb) aid_image_placing_area_ParamLimits

0x339b,	// (0x00011edb) aid_image_placing_area

0xca1a,	// (0x0001b55a) field_vitu_entry_pane_g1_ParamLimits

0xca1a,	// (0x0001b55a) field_vitu_entry_pane_g1

0xca26,	// (0x0001b566) field_vitu_entry_pane_g2_ParamLimits

0xca26,	// (0x0001b566) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0001e361) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0001e361) field_vitu_entry_pane_g

0x54f5,	// (0x00014035) cell_vitu_itu_pane_g1_ParamLimits

0x5537,	// (0x00014077) cell_vitu_itu_pane_t3_ParamLimits

0x5537,	// (0x00014077) cell_vitu_itu_pane_t3

0xcf35,	// (0x0001ba75) mp4_progress_pane_t1_ParamLimits

0xcf4e,	// (0x0001ba8e) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0001e3f6) mp4_progress_pane_t_ParamLimits

0xcf67,	// (0x0001baa7) mup_progress_pane_cp04_ParamLimits

0x62cf,	// (0x00014e0f) main_myfav_hc_pane_t5_ParamLimits

0x62cf,	// (0x00014e0f) main_myfav_hc_pane_t5

0x9629,	// (0x00018169) aid_zoom_text_primary

0x0535,	// (0x0000f075) popup_adpt_find_window_ParamLimits

0x9673,	// (0x000181b3) main_cam_set_pane

0x5c56,	// (0x00014796) cam4_zoom_pane_ParamLimits

0x5c56,	// (0x00014796) cam4_zoom_pane

0x6404,	// (0x00014f44) main_cam_set_pane_g1_ParamLimits

0x6404,	// (0x00014f44) main_cam_set_pane_g1

0x6412,	// (0x00014f52) main_cam_set_pane_g2_ParamLimits

0x6412,	// (0x00014f52) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0001e4b7) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0001e4b7) main_cam_set_pane_g

0x6433,	// (0x00014f73) main_cam_set_pane_t1_ParamLimits

0x6433,	// (0x00014f73) main_cam_set_pane_t1

0x644e,	// (0x00014f8e) main_cset_listscroll_pane_ParamLimits

0x644e,	// (0x00014f8e) main_cset_listscroll_pane

0x646e,	// (0x00014fae) main_cset_slider_pane_ParamLimits

0x646e,	// (0x00014fae) main_cset_slider_pane

0xd394,	// (0x0001bed4) main_cset_list_pane_ParamLimits

0xd394,	// (0x0001bed4) main_cset_list_pane

0xd3a4,	// (0x0001bee4) scroll_pane_cp028

0x6494,	// (0x00014fd4) aid_area_touch_slider

0x64b0,	// (0x00014ff0) cset_slider_pane

0x64da,	// (0x0001501a) main_cset_slider_pane_g1

0x64ef,	// (0x0001502f) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0001e4bc) main_cset_slider_pane_g

0xd3dd,	// (0x0001bf1d) main_cset_slider_pane_t1

0x65ab,	// (0x000150eb) main_cset_slider_pane_t2

0x65c5,	// (0x00015105) main_cset_slider_pane_t3

0x65df,	// (0x0001511f) main_cset_slider_pane_t4

0x65f9,	// (0x00015139) main_cset_slider_pane_t5

0x6613,	// (0x00015153) main_cset_slider_pane_t6

0x6628,	// (0x00015168) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0001e4e1) main_cset_slider_pane_t

0x672c,	// (0x0001526c) cset_list_set_pane_ParamLimits

0x672c,	// (0x0001526c) cset_list_set_pane

0x673e,	// (0x0001527e) aid_position_infowindow_above

0x6746,	// (0x00015286) aid_position_infowindow_below

0xd47d,	// (0x0001bfbd) cset_list_set_pane_g1_ParamLimits

0xd47d,	// (0x0001bfbd) cset_list_set_pane_g1

0xd489,	// (0x0001bfc9) cset_list_set_pane_g3_ParamLimits

0xd489,	// (0x0001bfc9) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0001e500) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0001e500) cset_list_set_pane_g

0xd498,	// (0x0001bfd8) cset_list_set_pane_t1_ParamLimits

0xd498,	// (0x0001bfd8) cset_list_set_pane_t1

0x9673,	// (0x000181b3) list_highlight_pane_cp021_ParamLimits

0x9673,	// (0x000181b3) list_highlight_pane_cp021

0xab7d,	// (0x000196bd) cset_slider_pane_g1

0xab8f,	// (0x000196cf) cset_slider_pane_g2

0xab86,	// (0x000196c6) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0001e505) cset_slider_pane_g

0xd4ad,	// (0x0001bfed) aid_area_touch_cam4_zoom

0xd4b5,	// (0x0001bff5) cam4_zoom_cont_pane

0xd4bd,	// (0x0001bffd) cam4_zoom_pane_g1

0xd4c5,	// (0x0001c005) cam4_zoom_pane_g2

0x674e,	// (0x0001528e) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0001e50c) cam4_zoom_pane_g

0xd4cd,	// (0x0001c00d) cam4_zoom_cont_pane_g1

0xd4d6,	// (0x0001c016) cam4_zoom_cont_pane_g2

0xd4df,	// (0x0001c01f) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0001e513) cam4_zoom_cont_pane_g

0x5b16,	// (0x00014656) call4_image_pane_ParamLimits

0x5b16,	// (0x00014656) call4_image_pane

0xcfc3,	// (0x0001bb03) call4_windows_conf_pane_ParamLimits

0xd004,	// (0x0001bb44) popup_call4_audio_in_window_ParamLimits

0xd004,	// (0x0001bb44) popup_call4_audio_in_window

0x9603,	// (0x00018143) bg_popup_call2_act_pane_cp02

0xd07a,	// (0x0001bbba) call4_list_conf_pane

0xc414,	// (0x0001af54) call4_image_pane_g1

0xc414,	// (0x0001af54) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0001e227) call4_image_pane_g

0xd4e8,	// (0x0001c028) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4e8,	// (0x0001c028) list_single_graphic_popup_conf4_pane

0x9603,	// (0x00018143) list_highlight_pane_cp022

0xd4fb,	// (0x0001c03b) list_single_graphic_popup_conf4_pane_g1

0xa82c,	// (0x0001936c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0001e51a) list_single_graphic_popup_conf4_pane_g

0xd503,	// (0x0001c043) list_single_graphic_popup_conf4_pane_t1

0x16dc,	// (0x0001021c) popup_vtel_slider_window_ParamLimits

0x16dc,	// (0x0001021c) popup_vtel_slider_window

0xcf73,	// (0x0001bab3) dialer2_ne_pane_t2_ParamLimits

0xcf73,	// (0x0001bab3) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0001e3fb) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0001e3fb) dialer2_ne_pane_t

0xc1f9,	// (0x0001ad39) bg_popup_sub_pane_cp010_ParamLimits

0xc1f9,	// (0x0001ad39) bg_popup_sub_pane_cp010

0x6756,	// (0x00015296) popup_vtel_slider_window_g1_ParamLimits

0x6756,	// (0x00015296) popup_vtel_slider_window_g1

0x6769,	// (0x000152a9) popup_vtel_slider_window_g2_ParamLimits

0x6769,	// (0x000152a9) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0001e51f) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0001e51f) popup_vtel_slider_window_g

0x67bf,	// (0x000152ff) vtel_slider_pane_ParamLimits

0x67bf,	// (0x000152ff) vtel_slider_pane

0x67e1,	// (0x00015321) vtel_slider_pane_g1_ParamLimits

0x67e1,	// (0x00015321) vtel_slider_pane_g1

0x67f5,	// (0x00015335) vtel_slider_pane_g2_ParamLimits

0x67f5,	// (0x00015335) vtel_slider_pane_g2

0x680d,	// (0x0001534d) vtel_slider_pane_g3_ParamLimits

0x680d,	// (0x0001534d) vtel_slider_pane_g3

0x67e1,	// (0x00015321) vtel_slider_pane_g4_ParamLimits

0x67e1,	// (0x00015321) vtel_slider_pane_g4

0x6823,	// (0x00015363) vtel_slider_pane_g5_ParamLimits

0x6823,	// (0x00015363) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0001e528) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0001e528) vtel_slider_pane_g

0x9603,	// (0x00018143) main_gallery2_pane

0x5e56,	// (0x00014996) aid_size_row_itut2_dropdow_list_ParamLimits

0x5e56,	// (0x00014996) aid_size_row_itut2_dropdow_list

0x5ee2,	// (0x00014a22) grid_vitu2_function_top_pane_ParamLimits

0x5ee2,	// (0x00014a22) grid_vitu2_function_top_pane

0x5f47,	// (0x00014a87) popup_vitu2_dropdown_list_window_ParamLimits

0x5f47,	// (0x00014a87) popup_vitu2_dropdown_list_window

0x5f70,	// (0x00014ab0) popup_vitu2_match_list_window

0x6847,	// (0x00015387) cell_vitu2_function_top_pane_ParamLimits

0x6847,	// (0x00015387) cell_vitu2_function_top_pane

0x6865,	// (0x000153a5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6865,	// (0x000153a5) cell_vitu2_function_top_pane_cp01

0x6883,	// (0x000153c3) cell_vitu2_function_top_wide_pane_ParamLimits

0x6883,	// (0x000153c3) cell_vitu2_function_top_wide_pane

0x9673,	// (0x000181b3) bg_button_pane_cp012

0x68a1,	// (0x000153e1) cell_vitu2_function_top_pane_g1

0xd519,	// (0x0001c059) bg_button_pane_cp013_ParamLimits

0xd519,	// (0x0001c059) bg_button_pane_cp013

0x68b5,	// (0x000153f5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x68b5,	// (0x000153f5) cell_vitu2_function_top_wide_pane_g1

0x9673,	// (0x000181b3) bg_popup_sub_pane_cp20

0x68cd,	// (0x0001540d) list_vitu2_match_list_pane

0xd248,	// (0x0001bd88) bg_popup_sub_pane_cp20_g1

0xd250,	// (0x0001bd90) bg_popup_sub_pane_cp20_g2

0xa271,	// (0x00018db1) bg_popup_sub_pane_cp20_g3

0xd258,	// (0x0001bd98) bg_popup_sub_pane_cp20_g4

0xa251,	// (0x00018d91) bg_popup_sub_pane_cp20_g5

0xd535,	// (0x0001c075) bg_popup_sub_pane_cp20_g6

0xd2aa,	// (0x0001bdea) bg_popup_sub_pane_cp20_g7

0xd2b2,	// (0x0001bdf2) bg_popup_sub_pane_cp20_g8

0xd2ba,	// (0x0001bdfa) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0001e533) bg_popup_sub_pane_cp20_g

0xd53d,	// (0x0001c07d) list_vitu2_match_list_item_pane_ParamLimits

0xd53d,	// (0x0001c07d) list_vitu2_match_list_item_pane

0xd54f,	// (0x0001c08f) list_vitu2_match_list_item_pane_t1

0x9603,	// (0x00018143) bg_popup_sub_pane_cp21

0xa6e1,	// (0x00019221) grid_vitu2_dropdown_list_pane

0x6938,	// (0x00015478) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6938,	// (0x00015478) cell_vitu2_dropdown_list_char_pane

0x6959,	// (0x00015499) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6959,	// (0x00015499) cell_vitu2_dropdown_list_ctrl_pane

0xd55d,	// (0x0001c09d) cell_vitu2_dropdown_list_char_pane_g1

0xd566,	// (0x0001c0a6) cell_vitu2_dropdown_list_char_pane_g2

0xd56f,	// (0x0001c0af) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0001e550) cell_vitu2_dropdown_list_char_pane_g

0x6985,	// (0x000154c5) cell_vitu2_dropdown_list_char_pane_t1

0x6993,	// (0x000154d3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6993,	// (0x000154d3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x69a0,	// (0x000154e0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x69a0,	// (0x000154e0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x69ad,	// (0x000154ed) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x69ad,	// (0x000154ed) cell_vitu2_dropdown_list_ctrl_pane_g3

0x69ba,	// (0x000154fa) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x69ba,	// (0x000154fa) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc680,	// (0x0001b1c0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc680,	// (0x0001b1c0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0001e557) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0001e557) cell_vitu2_dropdown_list_ctrl_pane_g

0x69d6,	// (0x00015516) aid_size_cell_gallery2_ParamLimits

0x69d6,	// (0x00015516) aid_size_cell_gallery2

0x69ec,	// (0x0001552c) grid_gallery2_pane_ParamLimits

0x69ec,	// (0x0001552c) grid_gallery2_pane

0x6a00,	// (0x00015540) scroll_pane_cp029_ParamLimits

0x6a00,	// (0x00015540) scroll_pane_cp029

0x6a0c,	// (0x0001554c) cell_gallery2_pane_ParamLimits

0x6a0c,	// (0x0001554c) cell_gallery2_pane

0xd578,	// (0x0001c0b8) cell_gallery2_pane_g2

0x6a42,	// (0x00015582) cell_gallery2_pane_g3

0xd582,	// (0x0001c0c2) cell_gallery2_pane_g4

0xd58a,	// (0x0001c0ca) cell_gallery2_pane_g5

0xaa27,	// (0x00019567) grid_highlight_pane_cp10

0x5f70,	// (0x00014ab0) popup_vitu2_match_list_window_ParamLimits

0x5f87,	// (0x00014ac7) popup_vitu2_query_window_ParamLimits

0x5f87,	// (0x00014ac7) popup_vitu2_query_window

0x9603,	// (0x00018143) bg_vitu2_candi_button_pane

0xd55d,	// (0x0001c09d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd566,	// (0x0001c0a6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd56f,	// (0x0001c0af) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6a4a,	// (0x0001558a) bg_button_pane_cp015

0x6a5c,	// (0x0001559c) bg_button_pane_cp016

0x6a6f,	// (0x000155af) bg_button_pane_cp017

0xbef9,	// (0x0001aa39) bg_popup_sub_pane_cp22

0xd592,	// (0x0001c0d2) popup_vitu2_query_window_g1

0x6ab4,	// (0x000155f4) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0001e562) popup_vitu2_query_window_g

0x6ad3,	// (0x00015613) popup_vitu2_query_window_t1_ParamLimits

0x6ad3,	// (0x00015613) popup_vitu2_query_window_t1

0x6b08,	// (0x00015648) popup_vitu2_query_window_t2_ParamLimits

0x6b08,	// (0x00015648) popup_vitu2_query_window_t2

0x6b1a,	// (0x0001565a) popup_vitu2_query_window_t3_ParamLimits

0x6b1a,	// (0x0001565a) popup_vitu2_query_window_t3

0x6b42,	// (0x00015682) popup_vitu2_query_window_t4_ParamLimits

0x6b42,	// (0x00015682) popup_vitu2_query_window_t4

0x6b63,	// (0x000156a3) popup_vitu2_query_window_t5_ParamLimits

0x6b63,	// (0x000156a3) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0001e569) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0001e569) popup_vitu2_query_window_t

0xd38c,	// (0x0001becc) main_cset_text_pane

0x6494,	// (0x00014fd4) aid_area_touch_slider_ParamLimits

0x64b0,	// (0x00014ff0) cset_slider_pane_ParamLimits

0x64da,	// (0x0001501a) main_cset_slider_pane_g1_ParamLimits

0x64ef,	// (0x0001502f) main_cset_slider_pane_g2_ParamLimits

0xd3ad,	// (0x0001beed) main_cset_slider_pane_g3_ParamLimits

0xd3ad,	// (0x0001beed) main_cset_slider_pane_g3

0x6504,	// (0x00015044) main_cset_slider_pane_g4_ParamLimits

0x6504,	// (0x00015044) main_cset_slider_pane_g4

0x6513,	// (0x00015053) main_cset_slider_pane_g5_ParamLimits

0x6513,	// (0x00015053) main_cset_slider_pane_g5

0x651f,	// (0x0001505f) main_cset_slider_pane_g6_ParamLimits

0x651f,	// (0x0001505f) main_cset_slider_pane_g6

0xf97c,	// (0x0001e4bc) main_cset_slider_pane_g_ParamLimits

0xd3dd,	// (0x0001bf1d) main_cset_slider_pane_t1_ParamLimits

0x65ab,	// (0x000150eb) main_cset_slider_pane_t2_ParamLimits

0x65c5,	// (0x00015105) main_cset_slider_pane_t3_ParamLimits

0x65df,	// (0x0001511f) main_cset_slider_pane_t4_ParamLimits

0x65f9,	// (0x00015139) main_cset_slider_pane_t5_ParamLimits

0x6613,	// (0x00015153) main_cset_slider_pane_t6_ParamLimits

0x6628,	// (0x00015168) main_cset_slider_pane_t7_ParamLimits

0x6652,	// (0x00015192) main_cset_slider_pane_t8_ParamLimits

0x6652,	// (0x00015192) main_cset_slider_pane_t8

0x667a,	// (0x000151ba) main_cset_slider_pane_t9_ParamLimits

0x667a,	// (0x000151ba) main_cset_slider_pane_t9

0x66a2,	// (0x000151e2) main_cset_slider_pane_t10_ParamLimits

0x66a2,	// (0x000151e2) main_cset_slider_pane_t10

0x66ca,	// (0x0001520a) main_cset_slider_pane_t11_ParamLimits

0x66ca,	// (0x0001520a) main_cset_slider_pane_t11

0x66f2,	// (0x00015232) main_cset_slider_pane_t12_ParamLimits

0x66f2,	// (0x00015232) main_cset_slider_pane_t12

0x670f,	// (0x0001524f) main_cset_slider_pane_t13_ParamLimits

0x670f,	// (0x0001524f) main_cset_slider_pane_t13

0xf9a1,	// (0x0001e4e1) main_cset_slider_pane_t_ParamLimits

0x9603,	// (0x00018143) bg_popup_sub_pane_cp011

0xd59e,	// (0x0001c0de) main_cset_text_pane_g1

0xd5a6,	// (0x0001c0e6) main_cset_text_pane_t1

0xd5b4,	// (0x0001c0f4) main_cset_text_pane_t2

0xd5c2,	// (0x0001c102) main_cset_text_pane_t3

0xd5d0,	// (0x0001c110) main_cset_text_pane_t4

0xd5de,	// (0x0001c11e) main_cset_text_pane_t5

0xd5ec,	// (0x0001c12c) main_cset_text_pane_t6

0xd5fa,	// (0x0001c13a) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0001e578) main_cset_text_pane_t

0x9603,	// (0x00018143) main_cam4_burst_pane

0x9603,	// (0x00018143) main_cam5_pane

0x63d3,	// (0x00014f13) bg_button_pane_cp019

0x63dc,	// (0x00014f1c) bg_button_pane_cp020

0xd3b9,	// (0x0001bef9) main_cset_slider_pane_g7_ParamLimits

0xd3b9,	// (0x0001bef9) main_cset_slider_pane_g7

0xd3c5,	// (0x0001bf05) main_cset_slider_pane_g8_ParamLimits

0xd3c5,	// (0x0001bf05) main_cset_slider_pane_g8

0x6533,	// (0x00015073) main_cset_slider_pane_g9_ParamLimits

0x6533,	// (0x00015073) main_cset_slider_pane_g9

0x653f,	// (0x0001507f) main_cset_slider_pane_g10_ParamLimits

0x653f,	// (0x0001507f) main_cset_slider_pane_g10

0x654b,	// (0x0001508b) main_cset_slider_pane_g11_ParamLimits

0x654b,	// (0x0001508b) main_cset_slider_pane_g11

0x6557,	// (0x00015097) main_cset_slider_pane_g12_ParamLimits

0x6557,	// (0x00015097) main_cset_slider_pane_g12

0x6563,	// (0x000150a3) main_cset_slider_pane_g13_ParamLimits

0x6563,	// (0x000150a3) main_cset_slider_pane_g13

0x656f,	// (0x000150af) main_cset_slider_pane_g14_ParamLimits

0x656f,	// (0x000150af) main_cset_slider_pane_g14

0x657b,	// (0x000150bb) main_cset_slider_pane_g15_ParamLimits

0x657b,	// (0x000150bb) main_cset_slider_pane_g15

0xd40b,	// (0x0001bf4b) main_cset_slider_pane_t14_ParamLimits

0xd40b,	// (0x0001bf4b) main_cset_slider_pane_t14

0xd444,	// (0x0001bf84) main_cset_slider_pane_t15_ParamLimits

0xd444,	// (0x0001bf84) main_cset_slider_pane_t15

0x6bda,	// (0x0001571a) aid_cam4_burst_size_cell_ParamLimits

0x6bda,	// (0x0001571a) aid_cam4_burst_size_cell

0x6bfa,	// (0x0001573a) grid_cam4_burst_pane_ParamLimits

0x6bfa,	// (0x0001573a) grid_cam4_burst_pane

0x6c32,	// (0x00015772) linegrid_cam4_burst_pane_ParamLimits

0x6c32,	// (0x00015772) linegrid_cam4_burst_pane

0xd608,	// (0x0001c148) scroll_pane_cp30_ParamLimits

0xd608,	// (0x0001c148) scroll_pane_cp30

0x6c56,	// (0x00015796) cell_cam4_burst_pane_ParamLimits

0x6c56,	// (0x00015796) cell_cam4_burst_pane

0xd614,	// (0x0001c154) linegrid_cam4_burst_pane_g1_ParamLimits

0xd614,	// (0x0001c154) linegrid_cam4_burst_pane_g1

0x6ca3,	// (0x000157e3) linegrid_cam4_burst_pane_g2_ParamLimits

0x6ca3,	// (0x000157e3) linegrid_cam4_burst_pane_g2

0xd621,	// (0x0001c161) linegrid_cam4_burst_pane_g3_ParamLimits

0xd621,	// (0x0001c161) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0001e587) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0001e587) linegrid_cam4_burst_pane_g

0x6cb4,	// (0x000157f4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6cb4,	// (0x000157f4) linegrid_cam4_burst_pane_g3_copy1

0xd62e,	// (0x0001c16e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd62e,	// (0x0001c16e) linegrid_cam4_burst_pane_g4

0x6cce,	// (0x0001580e) linegrid_cam4_burst_pane_g5_ParamLimits

0x6cce,	// (0x0001580e) linegrid_cam4_burst_pane_g5

0x6cdf,	// (0x0001581f) linegrid_cam4_burst_pane_g6_ParamLimits

0x6cdf,	// (0x0001581f) linegrid_cam4_burst_pane_g6

0xd63b,	// (0x0001c17b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd63b,	// (0x0001c17b) linegrid_cam4_burst_pane_g7

0x6cf6,	// (0x00015836) cell_cam4_burst_pane_g1

0xd654,	// (0x0001c194) main_cam5_pane_t1_ParamLimits

0xd654,	// (0x0001c194) main_cam5_pane_t1

0xd666,	// (0x0001c1a6) main_cam5_pane_t2_ParamLimits

0xd666,	// (0x0001c1a6) main_cam5_pane_t2

0xd678,	// (0x0001c1b8) main_cam5_pane_t3_ParamLimits

0xd678,	// (0x0001c1b8) main_cam5_pane_t3

0xd68a,	// (0x0001c1ca) main_cam5_pane_t4_ParamLimits

0xd68a,	// (0x0001c1ca) main_cam5_pane_t4

0xd6a2,	// (0x0001c1e2) main_cam5_pane_t5_ParamLimits

0xd6a2,	// (0x0001c1e2) main_cam5_pane_t5

0xd6b6,	// (0x0001c1f6) main_cam5_pane_t6_ParamLimits

0xd6b6,	// (0x0001c1f6) main_cam5_pane_t6

0xd6ca,	// (0x0001c20a) main_cam5_pane_t7_ParamLimits

0xd6ca,	// (0x0001c20a) main_cam5_pane_t7

0xd6dc,	// (0x0001c21c) main_cam5_pane_t8_ParamLimits

0xd6dc,	// (0x0001c21c) main_cam5_pane_t8

0xd6f8,	// (0x0001c238) main_cam5_pane_t9_ParamLimits

0xd6f8,	// (0x0001c238) main_cam5_pane_t9

0xd70a,	// (0x0001c24a) main_cam5_pane_t10_ParamLimits

0xd70a,	// (0x0001c24a) main_cam5_pane_t10

0xd71c,	// (0x0001c25c) main_cam5_pane_t11_ParamLimits

0xd71c,	// (0x0001c25c) main_cam5_pane_t11

0xd72e,	// (0x0001c26e) main_cam5_pane_t12_ParamLimits

0xd72e,	// (0x0001c26e) main_cam5_pane_t12

0xd743,	// (0x0001c283) main_cam5_pane_t13_ParamLimits

0xd743,	// (0x0001c283) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0001e593) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0001e593) main_cam5_pane_t

0x05b7,	// (0x0000f0f7) popup_scut_keymap_window_ParamLimits

0x05b7,	// (0x0000f0f7) popup_scut_keymap_window

0x6d09,	// (0x00015849) aid_size_cell_brow_shortcut

0xaa27,	// (0x00019567) bg_popup_window_pane_cp010

0x6d15,	// (0x00015855) grid_scut_pane

0x6d21,	// (0x00015861) cell_scut_pane_ParamLimits

0x6d21,	// (0x00015861) cell_scut_pane

0x6d38,	// (0x00015878) cell_scut_pane_g1

0xd760,	// (0x0001c2a0) cell_scut_pane_t1

0xd76f,	// (0x0001c2af) cell_scut_pane_t2

0x6d41,	// (0x00015881) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0001e5ae) cell_scut_pane_t

0x49e9,	// (0x00013529) main_mup3_pane_g8_ParamLimits

0x49e9,	// (0x00013529) main_mup3_pane_g8

0x5e6e,	// (0x000149ae) area_vitu2_query_pane_ParamLimits

0x5e6e,	// (0x000149ae) area_vitu2_query_pane

0x6a82,	// (0x000155c2) input_focus_pane_cp08

0xd77e,	// (0x0001c2be) area_vitu2_query_pane_g1

0x6d4f,	// (0x0001588f) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0001e5b5) area_vitu2_query_pane_g

0x6d60,	// (0x000158a0) area_vitu2_query_pane_t1_ParamLimits

0x6d60,	// (0x000158a0) area_vitu2_query_pane_t1

0x6d74,	// (0x000158b4) area_vitu2_query_pane_t2_ParamLimits

0x6d74,	// (0x000158b4) area_vitu2_query_pane_t2

0x6d88,	// (0x000158c8) area_vitu2_query_pane_t3_ParamLimits

0x6d88,	// (0x000158c8) area_vitu2_query_pane_t3

0xd78a,	// (0x0001c2ca) area_vitu2_query_pane_t4_ParamLimits

0xd78a,	// (0x0001c2ca) area_vitu2_query_pane_t4

0xd7b2,	// (0x0001c2f2) area_vitu2_query_pane_t5_ParamLimits

0xd7b2,	// (0x0001c2f2) area_vitu2_query_pane_t5

0xd7da,	// (0x0001c31a) area_vitu2_query_pane_t6_ParamLimits

0xd7da,	// (0x0001c31a) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0001e5ba) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0001e5ba) area_vitu2_query_pane_t

0x6db0,	// (0x000158f0) bg_button_pane_cp018

0x6dbe,	// (0x000158fe) bg_button_pane_cp021

0x6dca,	// (0x0001590a) bg_button_pane_cp022

0x6dd9,	// (0x00015919) input_focus_pane_cp09

0x29b9,	// (0x000114f9) aid_size_touch_mv_arrow_left

0x29e2,	// (0x00011522) aid_size_touch_mv_arrow_right

0x6593,	// (0x000150d3) main_cset_slider_pane_g16_ParamLimits

0x6593,	// (0x000150d3) main_cset_slider_pane_g16

0x659f,	// (0x000150df) main_cset_slider_pane_g17_ParamLimits

0x659f,	// (0x000150df) main_cset_slider_pane_g17

0x6cf6,	// (0x00015836) cell_cam4_burst_pane_g1_ParamLimits

0x9603,	// (0x00018143) compa_mode_pane

0x6779,	// (0x000152b9) popup_vtel_slider_window_g3_ParamLimits

0x6779,	// (0x000152b9) popup_vtel_slider_window_g3

0x6790,	// (0x000152d0) popup_vtel_slider_window_g4_ParamLimits

0x6790,	// (0x000152d0) popup_vtel_slider_window_g4

0x67a7,	// (0x000152e7) popup_vtel_slider_window_t1_ParamLimits

0x67a7,	// (0x000152e7) popup_vtel_slider_window_t1

0x9603,	// (0x00018143) main_cl_pane

0xbf21,	// (0x0001aa61) popup_imed_adjust2_window_ParamLimits

0xbef9,	// (0x0001aa39) bg_tb_trans_pane_cp05_ParamLimits

0xc94f,	// (0x0001b48f) popup_imed_adjust2_window_g1_ParamLimits

0xc95e,	// (0x0001b49e) popup_imed_adjust2_window_g2_ParamLimits

0xc95e,	// (0x0001b49e) popup_imed_adjust2_window_g2

0xc96a,	// (0x0001b4aa) popup_imed_adjust2_window_g3_ParamLimits

0xc96a,	// (0x0001b4aa) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0001e325) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0001e325) popup_imed_adjust2_window_g

0xc976,	// (0x0001b4b6) popup_imed_adjust2_window_t1_ParamLimits

0xc98e,	// (0x0001b4ce) slider_imed_adjust_pane_ParamLimits

0xc9a2,	// (0x0001b4e2) slider_imed_adjust_pane_g1_ParamLimits

0xc9b2,	// (0x0001b4f2) slider_imed_adjust_pane_g2_ParamLimits

0xc9c2,	// (0x0001b502) slider_imed_adjust_pane_g3_ParamLimits

0xc9d3,	// (0x0001b513) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0001e32c) slider_imed_adjust_pane_g_ParamLimits

0x5bf7,	// (0x00014737) aid_touch_area_cam4_ParamLimits

0x5bf7,	// (0x00014737) aid_touch_area_cam4

0xd0be,	// (0x0001bbfe) battery_pane_cp01

0x5cc6,	// (0x00014806) main_camera4_pane_g6_ParamLimits

0x5cc6,	// (0x00014806) main_camera4_pane_g6

0x5cf0,	// (0x00014830) main_camera4_pane_t2_ParamLimits

0x5cf0,	// (0x00014830) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0001e42f) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0001e42f) main_camera4_pane_t

0x5d25,	// (0x00014865) aid_touch_area_vid4_ParamLimits

0x5d25,	// (0x00014865) aid_touch_area_vid4

0x5d79,	// (0x000148b9) main_video4_pane_g5_ParamLimits

0x5d79,	// (0x000148b9) main_video4_pane_g5

0x5d9e,	// (0x000148de) vid4_progress_pane_ParamLimits

0x5d9e,	// (0x000148de) vid4_progress_pane

0xd3d1,	// (0x0001bf11) main_cset_slider_pane_g18_ParamLimits

0xd3d1,	// (0x0001bf11) main_cset_slider_pane_g18

0xd648,	// (0x0001c188) cell_cam4_burst_pane_g2_ParamLimits

0xd648,	// (0x0001c188) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0001e58e) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0001e58e) cell_cam4_burst_pane_g

0x9dd6,	// (0x00018916) bg_cl_pane_ParamLimits

0x9dd6,	// (0x00018916) bg_cl_pane

0x6de8,	// (0x00015928) cl_header_pane_ParamLimits

0x6de8,	// (0x00015928) cl_header_pane

0x6dfc,	// (0x0001593c) cl_listscroll_pane_ParamLimits

0x6dfc,	// (0x0001593c) cl_listscroll_pane

0xd826,	// (0x0001c366) bg_cl_pane_g1

0xd82e,	// (0x0001c36e) bg_cl_pane_g2

0xd836,	// (0x0001c376) bg_cl_pane_g3

0xd83e,	// (0x0001c37e) bg_cl_pane_g4

0xd846,	// (0x0001c386) bg_cl_pane_g5

0xd84e,	// (0x0001c38e) bg_cl_pane_g6

0xd856,	// (0x0001c396) bg_cl_pane_g7

0xd85e,	// (0x0001c39e) bg_cl_pane_g8

0xd866,	// (0x0001c3a6) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0001e5c9) bg_cl_pane_g

0x6e0c,	// (0x0001594c) aid_height_cl_leading_ParamLimits

0x6e0c,	// (0x0001594c) aid_height_cl_leading

0x6e18,	// (0x00015958) aid_height_cl_text_ParamLimits

0x6e18,	// (0x00015958) aid_height_cl_text

0x9673,	// (0x000181b3) bg_cl_header_pane_ParamLimits

0x9673,	// (0x000181b3) bg_cl_header_pane

0x6e37,	// (0x00015977) cl_header_pane_g1_ParamLimits

0x6e37,	// (0x00015977) cl_header_pane_g1

0x6e4d,	// (0x0001598d) cl_header_pane_t1_ParamLimits

0x6e4d,	// (0x0001598d) cl_header_pane_t1

0xd86e,	// (0x0001c3ae) cl_list_pane

0xd3a4,	// (0x0001bee4) hc_scroll_pane_cp01

0xa251,	// (0x00018d91) bg_cl_header_pane_g1

0xd248,	// (0x0001bd88) bg_cl_header_pane_g2

0xa271,	// (0x00018db1) bg_cl_header_pane_g3

0xd258,	// (0x0001bd98) bg_cl_header_pane_g4

0xd250,	// (0x0001bd90) bg_cl_header_pane_g5

0xd535,	// (0x0001c075) bg_cl_header_pane_g6

0xd2b2,	// (0x0001bdf2) bg_cl_header_pane_g7

0xd2ba,	// (0x0001bdfa) bg_cl_header_pane_g8

0xd2aa,	// (0x0001bdea) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0001e5dc) bg_cl_header_pane_g

0x6e66,	// (0x000159a6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6e66,	// (0x000159a6) hc_cl_list_double_graphic_heading_pane

0x6e77,	// (0x000159b7) hc_cl_list_single_graphic_pane_ParamLimits

0x6e77,	// (0x000159b7) hc_cl_list_single_graphic_pane

0x6e8d,	// (0x000159cd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6e8d,	// (0x000159cd) hc_cl_list_single_graphic_pane_g1

0x6e99,	// (0x000159d9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6e99,	// (0x000159d9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0001e5ef) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0001e5ef) hc_cl_list_single_graphic_pane_g

0x6ead,	// (0x000159ed) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6ead,	// (0x000159ed) hc_cl_list_single_graphic_pane_t1

0x6e8d,	// (0x000159cd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6e8d,	// (0x000159cd) hc_cl_list_double_graphic_heading_pane_g1

0x6ec2,	// (0x00015a02) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ec2,	// (0x00015a02) hc_cl_list_double_graphic_heading_pane_g2

0x6ed6,	// (0x00015a16) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6ed6,	// (0x00015a16) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0001e5f4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0001e5f4) hc_cl_list_double_graphic_heading_pane_g

0x6eea,	// (0x00015a2a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6eea,	// (0x00015a2a) hc_cl_list_double_graphic_heading_pane_t1

0x6eff,	// (0x00015a3f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6eff,	// (0x00015a3f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0001e5fb) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0001e5fb) hc_cl_list_double_graphic_heading_pane_t

0x6f14,	// (0x00015a54) vid4_progress_pane_g1

0x6f26,	// (0x00015a66) vid4_progress_pane_g2

0xac78,	// (0x000197b8) vid4_progress_pane_g3

0xd87f,	// (0x0001c3bf) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0001e600) vid4_progress_pane_g

0xd89d,	// (0x0001c3dd) vid4_progress_pane_t1

0xd8b2,	// (0x0001c3f2) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0001e60b) vid4_progress_pane_t

0xd8dd,	// (0x0001c41d) wait_bar_pane_cp07

0xc207,	// (0x0001ad47) blid_firmament_pane_ParamLimits

0xc24a,	// (0x0001ad8a) popup_blid_sat_info2_window_g1

0xc26e,	// (0x0001adae) popup_blid_sat_info2_window_t3

0xc27c,	// (0x0001adbc) popup_blid_sat_info2_window_t4

0xc28a,	// (0x0001adca) popup_blid_sat_info2_window_t5

0xc298,	// (0x0001add8) popup_blid_sat_info2_window_t6

0xc2a8,	// (0x0001ade8) popup_blid_sat_info2_window_t7

0xc2b6,	// (0x0001adf6) popup_blid_sat_info2_window_t8

0xc2c4,	// (0x0001ae04) popup_blid_sat_info2_window_t9

0xc2d2,	// (0x0001ae12) popup_blid_sat_info2_window_t10

0xc394,	// (0x0001aed4) aid_firma_cardinal_ParamLimits

0xc3a8,	// (0x0001aee8) blid_firmament_pane_t1_ParamLimits

0xc3bf,	// (0x0001aeff) blid_firmament_pane_t2_ParamLimits

0xc3d6,	// (0x0001af16) blid_firmament_pane_t3_ParamLimits

0xc3ed,	// (0x0001af2d) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0001e21e) blid_firmament_pane_t_ParamLimits

0xc404,	// (0x0001af44) blid_sat_info_pane_ParamLimits

0x9673,	// (0x000181b3) main_cam_set_pane_ParamLimits

0x52af,	// (0x00013def) aid_size_cell_colour_35_ParamLimits

0x52cf,	// (0x00013e0f) aid_size_cell_colour_112_ParamLimits

0x52ef,	// (0x00013e2f) aid_size_cell_effect_ParamLimits

0xbef9,	// (0x0001aa39) bg_tb_trans_pane_cp02_ParamLimits

0xa4e7,	// (0x00019027) heading_imed_pane_ParamLimits

0x530f,	// (0x00013e4f) listscroll_imed_pane_ParamLimits

0xb51f,	// (0x0001a05f) popup_call2_audio_first_window_g5_ParamLimits

0xb51f,	// (0x0001a05f) popup_call2_audio_first_window_g5

0x58a2,	// (0x000143e2) aid_size_touch_image3_arrow_left_ParamLimits

0x58a2,	// (0x000143e2) aid_size_touch_image3_arrow_left

0x58ce,	// (0x0001440e) aid_size_touch_image3_arrow_right_ParamLimits

0x58ce,	// (0x0001440e) aid_size_touch_image3_arrow_right

0xd8c8,	// (0x0001c408) vid4_progress_pane_t3

0x5622,	// (0x00014162) main_hwr_training_symbol_option_pane_ParamLimits

0x5622,	// (0x00014162) main_hwr_training_symbol_option_pane

0xcc3c,	// (0x0001b77c) popup_hwr_training_preview_window_ParamLimits

0xcc3c,	// (0x0001b77c) popup_hwr_training_preview_window

0x5642,	// (0x00014182) hwr_training_navi_pane_g5_ParamLimits

0x5642,	// (0x00014182) hwr_training_navi_pane_g5

0xd236,	// (0x0001bd76) popup_char_count_window

0x9673,	// (0x000181b3) bg_popup_sub_pane_cp20_ParamLimits

0x68cd,	// (0x0001540d) list_vitu2_match_list_pane_ParamLimits

0x68dc,	// (0x0001541c) vitu2_page_scroll_pane_ParamLimits

0x68dc,	// (0x0001541c) vitu2_page_scroll_pane

0xd911,	// (0x0001c451) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd911,	// (0x0001c451) list_single_hwr_training_symbol_option_pane

0xd924,	// (0x0001c464) list_single_hwr_training_symbol_option_pane_g1

0xd92c,	// (0x0001c46c) list_single_hwr_training_symbol_option_pane_t1

0xd93a,	// (0x0001c47a) bg_button_pane_cp023

0xd943,	// (0x0001c483) bg_button_pane_cp024

0x6f70,	// (0x00015ab0) vitu2_page_scroll_pane_g1

0x6f78,	// (0x00015ab8) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0001e612) vitu2_page_scroll_pane_g

0x6f80,	// (0x00015ac0) vitu2_page_scroll_pane_t1

0xd976,	// (0x0001c4b6) popup_char_count_window_g1

0xd97f,	// (0x0001c4bf) popup_char_count_window_g2

0xd988,	// (0x0001c4c8) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0001e617) popup_char_count_window_g

0xd991,	// (0x0001c4d1) popup_char_count_window_t1

0x9603,	// (0x00018143) main_vded2_pane

0xc93b,	// (0x0001b47b) aid_size_cell_imed_line

0xc945,	// (0x0001b485) grid_imed_line_width_pane

0xd176,	// (0x0001bcb6) vid4_indicators_pane_g4

0xd99f,	// (0x0001c4df) cell_imed_line_width_pane_ParamLimits

0xd99f,	// (0x0001c4df) cell_imed_line_width_pane

0xd9b3,	// (0x0001c4f3) cell_imed_line_width_pane_g1

0xd9bc,	// (0x0001c4fc) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0001e61e) cell_imed_line_width_pane_g

0x6f8f,	// (0x00015acf) main_vded2_pane_g1_ParamLimits

0x6f8f,	// (0x00015acf) main_vded2_pane_g1

0x6fa5,	// (0x00015ae5) main_vded2_pane_g2_ParamLimits

0x6fa5,	// (0x00015ae5) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0001e623) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0001e623) main_vded2_pane_g

0x6fb7,	// (0x00015af7) vded2_slider_pane_ParamLimits

0x6fb7,	// (0x00015af7) vded2_slider_pane

0x6fc7,	// (0x00015b07) aid_size_touch_vded2_end

0x6fd1,	// (0x00015b11) aid_size_touch_vded2_playhead

0xd9c4,	// (0x0001c504) aid_size_touch_vded2_start

0xd9cc,	// (0x0001c50c) vded2_slider_bg_pane

0xd9d5,	// (0x0001c515) vded2_slider_pane_g1

0xd9de,	// (0x0001c51e) vded2_slider_pane_g2

0x6fdb,	// (0x00015b1b) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0001e628) vded2_slider_pane_g

0xd9e6,	// (0x0001c526) vded2_slider_bg_pane_g1

0xd9ef,	// (0x0001c52f) vded2_slider_bg_pane_g2

0xd9f8,	// (0x0001c538) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0001e62f) vded2_slider_bg_pane_g

0x300a,	// (0x00011b4a) aid_postcard_touch_down_pane_ParamLimits

0x300a,	// (0x00011b4a) aid_postcard_touch_down_pane

0x3020,	// (0x00011b60) aid_postcard_touch_up_pane_ParamLimits

0x3020,	// (0x00011b60) aid_postcard_touch_up_pane

0x9603,	// (0x00018143) main_blid2_pane

0xbf07,	// (0x0001aa47) popup_blid2_search_window

0x9603,	// (0x00018143) blid2_gps_pane

0x9603,	// (0x00018143) blid2_navig_pane

0x9603,	// (0x00018143) blid2_search_pane

0x9603,	// (0x00018143) blid2_tripm_pane

0x6fe6,	// (0x00015b26) blid2_search_pane_g1_ParamLimits

0x6fe6,	// (0x00015b26) blid2_search_pane_g1

0x7000,	// (0x00015b40) blid2_search_pane_t1_ParamLimits

0x7000,	// (0x00015b40) blid2_search_pane_t1

0x7012,	// (0x00015b52) aid_size_cell_blid2_gps_ParamLimits

0x7012,	// (0x00015b52) aid_size_cell_blid2_gps

0x702a,	// (0x00015b6a) blid2_gps_pane_g1_ParamLimits

0x702a,	// (0x00015b6a) blid2_gps_pane_g1

0x703e,	// (0x00015b7e) grid_blid2_satellite_pane_ParamLimits

0x703e,	// (0x00015b7e) grid_blid2_satellite_pane

0x7058,	// (0x00015b98) blid2_navig_pane_g1_ParamLimits

0x7058,	// (0x00015b98) blid2_navig_pane_g1

0x7064,	// (0x00015ba4) blid2_navig_pane_t1_ParamLimits

0x7064,	// (0x00015ba4) blid2_navig_pane_t1

0x707f,	// (0x00015bbf) blid2_navig_pane_t2_ParamLimits

0x707f,	// (0x00015bbf) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0001e636) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0001e636) blid2_navig_pane_t

0x709a,	// (0x00015bda) blid2_navig_ring_pane_ParamLimits

0x709a,	// (0x00015bda) blid2_navig_ring_pane

0x70b3,	// (0x00015bf3) blid2_speed_pane_ParamLimits

0x70b3,	// (0x00015bf3) blid2_speed_pane

0x70bf,	// (0x00015bff) blid2_tripm_pane_g1_ParamLimits

0x70bf,	// (0x00015bff) blid2_tripm_pane_g1

0x70d8,	// (0x00015c18) blid2_tripm_pane_g2_ParamLimits

0x70d8,	// (0x00015c18) blid2_tripm_pane_g2

0x70ec,	// (0x00015c2c) blid2_tripm_pane_g3_ParamLimits

0x70ec,	// (0x00015c2c) blid2_tripm_pane_g3

0x7100,	// (0x00015c40) blid2_tripm_pane_g4_ParamLimits

0x7100,	// (0x00015c40) blid2_tripm_pane_g4

0x7114,	// (0x00015c54) blid2_tripm_pane_g5_ParamLimits

0x7114,	// (0x00015c54) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0001e63b) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0001e63b) blid2_tripm_pane_g

0x713a,	// (0x00015c7a) blid2_tripm_pane_t1_ParamLimits

0x713a,	// (0x00015c7a) blid2_tripm_pane_t1

0x7155,	// (0x00015c95) blid2_tripm_pane_t2_ParamLimits

0x7155,	// (0x00015c95) blid2_tripm_pane_t2

0x716e,	// (0x00015cae) blid2_tripm_pane_t3_ParamLimits

0x716e,	// (0x00015cae) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0001e648) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0001e648) blid2_tripm_pane_t

0x71b5,	// (0x00015cf5) cell_blid2_satellite_pane_ParamLimits

0x71b5,	// (0x00015cf5) cell_blid2_satellite_pane

0x71d3,	// (0x00015d13) cell_blid2_satellite_pane_g1

0xda01,	// (0x0001c541) cell_blid2_satellite_pane_t1

0xc414,	// (0x0001af54) blid2_speed_pane_g1

0xda0f,	// (0x0001c54f) blid2_speed_pane_t1

0xda1d,	// (0x0001c55d) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0001e651) blid2_speed_pane_t

0xc414,	// (0x0001af54) blid2_navig_ring_pane_g1

0x71dc,	// (0x00015d1c) blid2_navig_ring_pane_g2

0x71e4,	// (0x00015d24) blid2_navig_ring_pane_g3

0x71ec,	// (0x00015d2c) blid2_navig_ring_pane_g4

0x71f4,	// (0x00015d34) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0001e656) blid2_navig_ring_pane_g

0x9603,	// (0x00018143) bg_popup_window_pane_cp011

0xda2b,	// (0x0001c56b) popup_blid2_search_window_g1

0xda33,	// (0x0001c573) popup_blid2_search_window_t1

0xda41,	// (0x0001c581) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0001e661) popup_blid2_search_window_t

0xa160,	// (0x00018ca0) main_browser_pane_g1

0x9dd6,	// (0x00018916) main_browser_pane_ParamLimits

0x9673,	// (0x000181b3) bg_button_pane_cp011_ParamLimits

0x616f,	// (0x00014caf) cell_vitu2_function_pane_g1_ParamLimits

0xbef9,	// (0x0001aa39) bg_popup_sub_pane_cp22_ParamLimits

0x6a82,	// (0x000155c2) input_focus_pane_cp08_ParamLimits

0x6a99,	// (0x000155d9) popup_vitu2_query_button_pane_ParamLimits

0x6a99,	// (0x000155d9) popup_vitu2_query_button_pane

0x6aaa,	// (0x000155ea) popup_vitu2_query_input_button_pane

0xd592,	// (0x0001c0d2) popup_vitu2_query_window_g1_ParamLimits

0x6ab4,	// (0x000155f4) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0001e562) popup_vitu2_query_window_g_ParamLimits

0x9603,	// (0x00018143) bg_button_pane_cp026

0x71fc,	// (0x00015d3c) popup_vitu2_query_input_button_pane_g1

0x9603,	// (0x00018143) bg_button_pane_cp025

0xda4f,	// (0x0001c58f) popup_vitu2_query_button_pane_t1

0x4696,	// (0x000131d6) main_mp3_pane_t6

0x46a4,	// (0x000131e4) popup_slider_window_cp01

0xd0da,	// (0x0001bc1a) cam4_battery_pane

0xd133,	// (0x0001bc73) cam4_battery_pane_cp02

0xd877,	// (0x0001c3b7) cam4_battery_pane_cp01

0xd877,	// (0x0001c3b7) cam4_battery_pane_cp03

0xc414,	// (0x0001af54) cam4_battery_pane_g1

0xda5d,	// (0x0001c59d) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0001e666) cam4_battery_pane_g

0xc2e0,	// (0x0001ae20) popup_blid_sat_info2_window_t11

0x29b9,	// (0x000114f9) aid_size_touch_mv_arrow_left_ParamLimits

0x29e2,	// (0x00011522) aid_size_touch_mv_arrow_right_ParamLimits

0xa987,	// (0x000194c7) navi_pane_g1_ParamLimits

0x2a21,	// (0x00011561) navi_pane_g2_ParamLimits

0x2a4f,	// (0x0001158f) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0001df30) navi_pane_g_ParamLimits

0x2aa7,	// (0x000115e7) navi_pane_mv_t1_ParamLimits

0x531b,	// (0x00013e5b) grid_imed_effect_pane_ParamLimits

0x15d9,	// (0x00010119) aid_placing_vt_slider_lsc

0xa0af,	// (0x00018bef) aid_placing_vt_slider_prt

0x9673,	// (0x000181b3) bg_tb_trans_pane_cp01_ParamLimits

0xc5a0,	// (0x0001b0e0) popup_image_details_window_g1_ParamLimits

0xc5b3,	// (0x0001b0f3) popup_image_details_window_g2_ParamLimits

0xc5c8,	// (0x0001b108) popup_image_details_window_g3_ParamLimits

0xc5c8,	// (0x0001b108) popup_image_details_window_g3

0xf723,	// (0x0001e263) popup_image_details_window_g_ParamLimits

0xc5dc,	// (0x0001b11c) popup_image_details_window_t1_ParamLimits

0xc5ee,	// (0x0001b12e) popup_image_details_window_t2_ParamLimits

0xc607,	// (0x0001b147) popup_image_details_window_t3_ParamLimits

0xc61b,	// (0x0001b15b) popup_image_details_window_t4_ParamLimits

0xc636,	// (0x0001b176) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0001e26a) popup_image_details_window_t_ParamLimits

0x6e24,	// (0x00015964) cl_header_name_pane_ParamLimits

0x6e24,	// (0x00015964) cl_header_name_pane

0x7204,	// (0x00015d44) cl_header_name_pane_t1_ParamLimits

0x7204,	// (0x00015d44) cl_header_name_pane_t1

0x7225,	// (0x00015d65) cl_header_name_pane_t2_ParamLimits

0x7225,	// (0x00015d65) cl_header_name_pane_t2

0x7267,	// (0x00015da7) cl_header_name_pane_t3_ParamLimits

0x7267,	// (0x00015da7) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0001e66b) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0001e66b) cl_header_name_pane_t

0x2a78,	// (0x000115b8) navi_pane_mv_g2_ParamLimits

0xd1c4,	// (0x0001bd04) field_vitu2_entry_pane_g1_ParamLimits

0xd1d0,	// (0x0001bd10) field_vitu2_entry_pane_g2_ParamLimits

0xd1dc,	// (0x0001bd1c) field_vitu2_entry_pane_g3_ParamLimits

0xd1dc,	// (0x0001bd1c) field_vitu2_entry_pane_g3

0xf921,	// (0x0001e461) field_vitu2_entry_pane_g_ParamLimits

0x600f,	// (0x00014b4f) cell_vitu2_itu_pane_g1_ParamLimits

0x601f,	// (0x00014b5f) cell_vitu2_itu_pane_g2_ParamLimits

0x601f,	// (0x00014b5f) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0001e46d) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0001e46d) cell_vitu2_itu_pane_g

0x9673,	// (0x000181b3) bg_vkb2_func_pane_cp05_ParamLimits

0x9673,	// (0x000181b3) bg_vkb2_func_pane_cp05

0x9673,	// (0x000181b3) bg_vkb2_func_pane_cp03

0x9673,	// (0x000181b3) bg_vkb2_func_pane_cp04

0x9673,	// (0x000181b3) bg_vkb2_func_pane_cp10_ParamLimits

0x9673,	// (0x000181b3) bg_vkb2_func_pane_cp10

0x6dca,	// (0x0001590a) bg_vkb2_func_pane_cp08

0x6db0,	// (0x000158f0) bg_vkb2_func_pane_cp06

0x6dbe,	// (0x000158fe) bg_vkb2_func_pane_cp07

0xd94c,	// (0x0001c48c) bg_vkb2_func_pane_cp11_ParamLimits

0xd94c,	// (0x0001c48c) bg_vkb2_func_pane_cp11

0xd961,	// (0x0001c4a1) bg_vkb2_func_pane_cp12_ParamLimits

0xd961,	// (0x0001c4a1) bg_vkb2_func_pane_cp12

0x9603,	// (0x00018143) bg_vkb2_func_pane_cp09

0xd248,	// (0x0001bd88) bg_vkb2_func_pane_g1

0xa271,	// (0x00018db1) bg_vkb2_func_pane_g2

0xd250,	// (0x0001bd90) bg_vkb2_func_pane_g3

0xd258,	// (0x0001bd98) bg_vkb2_func_pane_g4

0xd535,	// (0x0001c075) bg_vkb2_func_pane_g5

0xd2b2,	// (0x0001bdf2) bg_vkb2_func_pane_g6

0xd2ba,	// (0x0001bdfa) bg_vkb2_func_pane_g7

0xd2aa,	// (0x0001bdea) bg_vkb2_func_pane_g8

0xa251,	// (0x00018d91) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0001e672) bg_vkb2_func_pane_g

0x7128,	// (0x00015c68) blid2_tripm_pane_g6_ParamLimits

0x7128,	// (0x00015c68) blid2_tripm_pane_g6

0xcf2d,	// (0x0001ba6d) mp4_progress_pane_g1

0x71a1,	// (0x00015ce1) blid2_tripm_values_pane_ParamLimits

0x71a1,	// (0x00015ce1) blid2_tripm_values_pane

0x7298,	// (0x00015dd8) blid2_tripm_values_pane_t1

0x72a6,	// (0x00015de6) blid2_tripm_values_pane_t2

0x72b4,	// (0x00015df4) blid2_tripm_values_pane_t3

0x72c2,	// (0x00015e02) blid2_tripm_values_pane_t4

0x72d0,	// (0x00015e10) blid2_tripm_values_pane_t5

0x72de,	// (0x00015e1e) blid2_tripm_values_pane_t6

0x72ec,	// (0x00015e2c) blid2_tripm_values_pane_t7

0x72fa,	// (0x00015e3a) blid2_tripm_values_pane_t8

0x7308,	// (0x00015e48) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0001e685) blid2_tripm_values_pane_t

0x161b,	// (0x0001015b) call_video_pane_t1_ParamLimits

0x1639,	// (0x00010179) call_video_pane_t2_ParamLimits

0xf279,	// (0x0001ddb9) call_video_pane_t_ParamLimits

0x2f88,	// (0x00011ac8) msg_header_pane_g1_ParamLimits

0xabc1,	// (0x00019701) msg_header_pane_g2_ParamLimits

0xabc1,	// (0x00019701) msg_header_pane_g2

0x0001,

0xf493,	// (0x0001dfd3) msg_header_pane_g_ParamLimits

0xf493,	// (0x0001dfd3) msg_header_pane_g

0x9dd6,	// (0x00018916) main_clock2_pane_ParamLimits

0x501a,	// (0x00013b5a) grid_clock2_toolbar_pane_ParamLimits

0x501a,	// (0x00013b5a) grid_clock2_toolbar_pane

0x501a,	// (0x00013b5a) listscroll_clock2_pane_ParamLimits

0x501a,	// (0x00013b5a) listscroll_clock2_pane

0x510f,	// (0x00013c4f) main_clock2_pane_t3_ParamLimits

0x510f,	// (0x00013c4f) main_clock2_pane_t3

0x5133,	// (0x00013c73) main_clock2_pane_t4_ParamLimits

0x5133,	// (0x00013c73) main_clock2_pane_t4

0xda67,	// (0x0001c5a7) cell_clock2_toolbar_pane

0xda6f,	// (0x0001c5af) cell_clock2_toolbar_pane_cp01

0xda6f,	// (0x0001c5af) cell_clock2_toolbar_pane_cp02

0xda77,	// (0x0001c5b7) cell_clock2_toolbar_pane_cp03

0xda7f,	// (0x0001c5bf) list_clock2_pane

0xa8de,	// (0x0001941e) scroll_pane_cp10

0xda87,	// (0x0001c5c7) list_single_clock2_pane_ParamLimits

0xda87,	// (0x0001c5c7) list_single_clock2_pane

0xaa27,	// (0x00019567) list_highlight_pane_cp08

0xda94,	// (0x0001c5d4) list_single_clock2_pane_t1

0xdaa2,	// (0x0001c5e2) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0001e698) list_single_clock2_pane_t

0x9603,	// (0x00018143) bg_button_pane_cp10

0xdab0,	// (0x0001c5f0) cell_clock2_toolbar_pane_g1

0x2f96,	// (0x00011ad6) aid_main_viewer_pane_g1_ParamLimits

0x2f96,	// (0x00011ad6) aid_main_viewer_pane_g1

0x2fa4,	// (0x00011ae4) aid_main_viewer_pane_g2_ParamLimits

0x2fa4,	// (0x00011ae4) aid_main_viewer_pane_g2

0x2fb2,	// (0x00011af2) aid_main_viewer_pane_g3_ParamLimits

0x2fb2,	// (0x00011af2) aid_main_viewer_pane_g3

0x2fc1,	// (0x00011b01) aid_main_viewer_pane_g4_ParamLimits

0x2fc1,	// (0x00011b01) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0001dfe4) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0001dfe4) aid_main_viewer_pane_g

0x38c7,	// (0x00012407) main_calc_pane_ParamLimits

0x38db,	// (0x0001241b) main_dialer2_pane_ParamLimits

0x9603,	// (0x00018143) main_cam6_pane

0x9603,	// (0x00018143) main_vid6_pane

0x5026,	// (0x00013b66) listscroll_gen_pane_cp06_ParamLimits

0x5026,	// (0x00013b66) listscroll_gen_pane_cp06

0x5156,	// (0x00013c96) main_clock2_pane_t5_ParamLimits

0x5156,	// (0x00013c96) main_clock2_pane_t5

0x51b0,	// (0x00013cf0) aid_call2_pane_cp10_ParamLimits

0x51c2,	// (0x00013d02) aid_call_pane_cp10_ParamLimits

0xa95c,	// (0x0001949c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa95c,	// (0x0001949c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x51d4,	// (0x00013d14) popup_clock_analogue_window_cp10_g3_ParamLimits

0x51d4,	// (0x00013d14) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa95c,	// (0x0001949c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0001e31a) popup_clock_analogue_window_cp10_g_ParamLimits

0x51e6,	// (0x00013d26) popup_clock_analogue_window_cp10_t1_ParamLimits

0x584f,	// (0x0001438f) cell_dialer2_keypad_pane_g2_ParamLimits

0x584f,	// (0x0001438f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0001e400) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0001e400) cell_dialer2_keypad_pane_g

0x586b,	// (0x000143ab) cell_dialer2_keypad_pane_t1

0x6486,	// (0x00014fc6) main_cset_text2_pane_ParamLimits

0x6486,	// (0x00014fc6) main_cset_text2_pane

0xd77e,	// (0x0001c2be) area_vitu2_query_pane_g1_ParamLimits

0x6d4f,	// (0x0001588f) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0001e5b5) area_vitu2_query_pane_g_ParamLimits

0xd802,	// (0x0001c342) area_vitu2_query_pane_t7_ParamLimits

0xd802,	// (0x0001c342) area_vitu2_query_pane_t7

0x6db0,	// (0x000158f0) bg_button_pane_cp018_ParamLimits

0x6dbe,	// (0x000158fe) bg_button_pane_cp021_ParamLimits

0x6dca,	// (0x0001590a) bg_button_pane_cp022_ParamLimits

0x6dca,	// (0x0001590a) bg_vkb2_func_pane_cp08_ParamLimits

0x6db0,	// (0x000158f0) bg_vkb2_func_pane_cp06_ParamLimits

0x6dbe,	// (0x000158fe) bg_vkb2_func_pane_cp07_ParamLimits

0x6dd9,	// (0x00015919) input_focus_pane_cp09_ParamLimits

0xdab8,	// (0x0001c5f8) cam6_autofocus_pane_ParamLimits

0xdab8,	// (0x0001c5f8) cam6_autofocus_pane

0x7316,	// (0x00015e56) cam6_image_uncrop_pane_ParamLimits

0x7316,	// (0x00015e56) cam6_image_uncrop_pane

0x7325,	// (0x00015e65) cam6_indi_pane_ParamLimits

0x7325,	// (0x00015e65) cam6_indi_pane

0x733b,	// (0x00015e7b) cam6_mode_pane_ParamLimits

0x733b,	// (0x00015e7b) cam6_mode_pane

0x734d,	// (0x00015e8d) cam6_timer_pane_ParamLimits

0x734d,	// (0x00015e8d) cam6_timer_pane

0x7359,	// (0x00015e99) cam6_zoom_pane_ParamLimits

0x7359,	// (0x00015e99) cam6_zoom_pane

0x7365,	// (0x00015ea5) cam6_mode_pane_g1_ParamLimits

0x7365,	// (0x00015ea5) cam6_mode_pane_g1

0x7375,	// (0x00015eb5) cam6_mode_pane_g2_ParamLimits

0x7375,	// (0x00015eb5) cam6_mode_pane_g2

0x7385,	// (0x00015ec5) cam6_mode_pane_g3_ParamLimits

0x7385,	// (0x00015ec5) cam6_mode_pane_g3

0x7395,	// (0x00015ed5) cam6_mode_pane_g4_ParamLimits

0x7395,	// (0x00015ed5) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0001e69d) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0001e69d) cam6_mode_pane_g

0xd260,	// (0x0001bda0) bg_tb_trans_pane_cp08_ParamLimits

0xd260,	// (0x0001bda0) bg_tb_trans_pane_cp08

0xdac6,	// (0x0001c606) cam6_battery_pane_ParamLimits

0xdac6,	// (0x0001c606) cam6_battery_pane

0xdadc,	// (0x0001c61c) cam6_indi_pane_g1_ParamLimits

0xdadc,	// (0x0001c61c) cam6_indi_pane_g1

0xdaee,	// (0x0001c62e) cam6_indi_pane_g2_ParamLimits

0xdaee,	// (0x0001c62e) cam6_indi_pane_g2

0xdb00,	// (0x0001c640) cam6_indi_pane_g3_ParamLimits

0xdb00,	// (0x0001c640) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0001e6a6) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0001e6a6) cam6_indi_pane_g

0xdb12,	// (0x0001c652) cam6_indi_pane_t1_ParamLimits

0xdb12,	// (0x0001c652) cam6_indi_pane_t1

0x73a5,	// (0x00015ee5) cam6_autofocus_pane_g1

0x73ad,	// (0x00015eed) cam6_autofocus_pane_g2

0x73b5,	// (0x00015ef5) cam6_autofocus_pane_g3

0x73bd,	// (0x00015efd) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0001e6ad) cam6_autofocus_pane_g

0xdb38,	// (0x0001c678) cam6_timer_pane_g1

0xdb40,	// (0x0001c680) cam6_timer_pane_t1

0xdb4e,	// (0x0001c68e) cam6_zoom_cont_pane

0xdb56,	// (0x0001c696) cam6_zoom_pane_g1

0xdb5e,	// (0x0001c69e) cam6_zoom_pane_g2

0x73c5,	// (0x00015f05) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0001e6b6) cam6_zoom_pane_g

0xc414,	// (0x0001af54) cam6_battery_pane_g1

0xc414,	// (0x0001af54) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0001e227) cam6_battery_pane_g

0xdb66,	// (0x0001c6a6) cam6_zoom_cont_pane_g1

0xdb6f,	// (0x0001c6af) cam6_zoom_cont_pane_g2

0xdb78,	// (0x0001c6b8) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0001e6bd) cam6_zoom_cont_pane_g

0x73e2,	// (0x00015f22) cam6_mode_pane_cp_ParamLimits

0x73e2,	// (0x00015f22) cam6_mode_pane_cp

0x7359,	// (0x00015e99) cam6_zoom_pane_cp_ParamLimits

0x7359,	// (0x00015e99) cam6_zoom_pane_cp

0x73f4,	// (0x00015f34) vid6_image_uncrop_cif_pane_ParamLimits

0x73f4,	// (0x00015f34) vid6_image_uncrop_cif_pane

0x7404,	// (0x00015f44) vid6_image_uncrop_nhd_pane_ParamLimits

0x7404,	// (0x00015f44) vid6_image_uncrop_nhd_pane

0x7316,	// (0x00015e56) vid6_image_uncrop_vga_pane_ParamLimits

0x7316,	// (0x00015e56) vid6_image_uncrop_vga_pane

0x7413,	// (0x00015f53) vid6_image_uncrop_wvga_pane_ParamLimits

0x7413,	// (0x00015f53) vid6_image_uncrop_wvga_pane

0x7422,	// (0x00015f62) vid6_indi_pane_ParamLimits

0x7422,	// (0x00015f62) vid6_indi_pane

0xd260,	// (0x0001bda0) bg_tb_trans_pane_cp09_ParamLimits

0xd260,	// (0x0001bda0) bg_tb_trans_pane_cp09

0xdb90,	// (0x0001c6d0) cam6_battery_pane_cp_ParamLimits

0xdb90,	// (0x0001c6d0) cam6_battery_pane_cp

0xdb9c,	// (0x0001c6dc) vid6_indi_pane_g1_ParamLimits

0xdb9c,	// (0x0001c6dc) vid6_indi_pane_g1

0xdbae,	// (0x0001c6ee) vid6_indi_pane_g2_ParamLimits

0xdbae,	// (0x0001c6ee) vid6_indi_pane_g2

0xdbc0,	// (0x0001c700) vid6_indi_pane_g3_ParamLimits

0xdbc0,	// (0x0001c700) vid6_indi_pane_g3

0xdbd5,	// (0x0001c715) vid6_indi_pane_g4_ParamLimits

0xdbd5,	// (0x0001c715) vid6_indi_pane_g4

0xdbea,	// (0x0001c72a) vid6_indi_pane_g5_ParamLimits

0xdbea,	// (0x0001c72a) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0001e6c4) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0001e6c4) vid6_indi_pane_g

0xdc04,	// (0x0001c744) vid6_indi_pane_t1_ParamLimits

0xdc04,	// (0x0001c744) vid6_indi_pane_t1

0xdc1a,	// (0x0001c75a) vid6_indi_pane_t2_ParamLimits

0xdc1a,	// (0x0001c75a) vid6_indi_pane_t2

0xdc42,	// (0x0001c782) vid6_indi_pane_t3_ParamLimits

0xdc42,	// (0x0001c782) vid6_indi_pane_t3

0xdc6a,	// (0x0001c7aa) vid6_indi_pane_t4_ParamLimits

0xdc6a,	// (0x0001c7aa) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0001e6cf) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0001e6cf) vid6_indi_pane_t

0xdc8e,	// (0x0001c7ce) wait_bar_pane_cp08

0x743a,	// (0x00015f7a) main_cset_text2_pane_t1_ParamLimits

0x743a,	// (0x00015f7a) main_cset_text2_pane_t1

0x73cd,	// (0x00015f0d) listscroll_gen_pane_cp06_t1_ParamLimits

0x73cd,	// (0x00015f0d) listscroll_gen_pane_cp06_t1

0x9603,	// (0x00018143) main_cam6_set_pane

0xc680,	// (0x0001b1c0) bg_tb_trans_pane_cp06_ParamLimits

0xd0e2,	// (0x0001bc22) cam4_indicators_pane_g1_ParamLimits

0xd0f3,	// (0x0001bc33) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0001e43d) cam4_indicators_pane_g_ParamLimits

0xd111,	// (0x0001bc51) cam4_indicators_pane_t1_ParamLimits

0x9673,	// (0x000181b3) bg_tb_trans_pane_cp07_ParamLimits

0xd13d,	// (0x0001bc7d) vid4_indicators_pane_g1_ParamLimits

0xd151,	// (0x0001bc91) vid4_indicators_pane_g2_ParamLimits

0xd165,	// (0x0001bca5) vid4_indicators_pane_g3_ParamLimits

0xd176,	// (0x0001bcb6) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0001e44f) vid4_indicators_pane_g_ParamLimits

0xd194,	// (0x0001bcd4) vid4_indicators_pane_t1_ParamLimits

0x6f14,	// (0x00015a54) vid4_progress_pane_g1_ParamLimits

0x6f26,	// (0x00015a66) vid4_progress_pane_g2_ParamLimits

0xac78,	// (0x000197b8) vid4_progress_pane_g3_ParamLimits

0xd87f,	// (0x0001c3bf) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0001e600) vid4_progress_pane_g_ParamLimits

0xd89d,	// (0x0001c3dd) vid4_progress_pane_t1_ParamLimits

0xd8b2,	// (0x0001c3f2) vid4_progress_pane_t2_ParamLimits

0xd8c8,	// (0x0001c408) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0001e60b) vid4_progress_pane_t_ParamLimits

0xd8dd,	// (0x0001c41d) wait_bar_pane_cp07_ParamLimits

0x7457,	// (0x00015f97) main_cam6_set_pane_g2_ParamLimits

0x7457,	// (0x00015f97) main_cam6_set_pane_g2

0x747b,	// (0x00015fbb) main_cset6_listscroll_pane_ParamLimits

0x747b,	// (0x00015fbb) main_cset6_listscroll_pane

0x749b,	// (0x00015fdb) main_cset6_slider_pane_ParamLimits

0x749b,	// (0x00015fdb) main_cset6_slider_pane

0x74b1,	// (0x00015ff1) main_cset6_text2_pane_ParamLimits

0x74b1,	// (0x00015ff1) main_cset6_text2_pane

0xdc9d,	// (0x0001c7dd) main_cset6_text_pane

0xdca5,	// (0x0001c7e5) main_cset_list_pane_copy1_ParamLimits

0xdca5,	// (0x0001c7e5) main_cset_list_pane_copy1

0xdcb5,	// (0x0001c7f5) scroll_pane_cp028_copy1

0x74bf,	// (0x00015fff) cset_list_set_pane_copy1

0x74d0,	// (0x00016010) aid_position_infowindow_above_copy1

0x74d8,	// (0x00016018) aid_position_infowindow_below_copy1

0x74e0,	// (0x00016020) cset_list_set_pane_g1_copy1

0x74e8,	// (0x00016028) cset_list_set_pane_g3_copy1_ParamLimits

0x74e8,	// (0x00016028) cset_list_set_pane_g3_copy1

0x74f7,	// (0x00016037) cset_list_set_pane_t1_copy1_ParamLimits

0x74f7,	// (0x00016037) cset_list_set_pane_t1_copy1

0x9673,	// (0x000181b3) list_highlight_pane_cp021_copy1_ParamLimits

0x9673,	// (0x000181b3) list_highlight_pane_cp021_copy1

0xdcbe,	// (0x0001c7fe) cset6_slider_pane_ParamLimits

0xdcbe,	// (0x0001c7fe) cset6_slider_pane

0xdcea,	// (0x0001c82a) main_cset6_slider_pane_g1_ParamLimits

0xdcea,	// (0x0001c82a) main_cset6_slider_pane_g1

0x750c,	// (0x0001604c) main_cset6_slider_pane_g2_ParamLimits

0x750c,	// (0x0001604c) main_cset6_slider_pane_g2

0xdd12,	// (0x0001c852) main_cset6_slider_pane_g3_ParamLimits

0xdd12,	// (0x0001c852) main_cset6_slider_pane_g3

0x7534,	// (0x00016074) main_cset6_slider_pane_g4_ParamLimits

0x7534,	// (0x00016074) main_cset6_slider_pane_g4

0x7540,	// (0x00016080) main_cset6_slider_pane_g5_ParamLimits

0x7540,	// (0x00016080) main_cset6_slider_pane_g5

0xd3b9,	// (0x0001bef9) main_cset6_slider_pane_g7_ParamLimits

0xd3b9,	// (0x0001bef9) main_cset6_slider_pane_g7

0xd3c5,	// (0x0001bf05) main_cset6_slider_pane_g8_ParamLimits

0xd3c5,	// (0x0001bf05) main_cset6_slider_pane_g8

0x6533,	// (0x00015073) main_cset6_slider_pane_g9_ParamLimits

0x6533,	// (0x00015073) main_cset6_slider_pane_g9

0x653f,	// (0x0001507f) main_cset6_slider_pane_g10_ParamLimits

0x653f,	// (0x0001507f) main_cset6_slider_pane_g10

0x654b,	// (0x0001508b) main_cset6_slider_pane_g11_ParamLimits

0x654b,	// (0x0001508b) main_cset6_slider_pane_g11

0x6557,	// (0x00015097) main_cset6_slider_pane_g12_ParamLimits

0x6557,	// (0x00015097) main_cset6_slider_pane_g12

0x6563,	// (0x000150a3) main_cset6_slider_pane_g13_ParamLimits

0x6563,	// (0x000150a3) main_cset6_slider_pane_g13

0x656f,	// (0x000150af) main_cset6_slider_pane_g14_ParamLimits

0x656f,	// (0x000150af) main_cset6_slider_pane_g14

0x754c,	// (0x0001608c) main_cset6_slider_pane_g15_ParamLimits

0x754c,	// (0x0001608c) main_cset6_slider_pane_g15

0x6593,	// (0x000150d3) main_cset6_slider_pane_g16_ParamLimits

0x6593,	// (0x000150d3) main_cset6_slider_pane_g16

0x659f,	// (0x000150df) main_cset6_slider_pane_g17_ParamLimits

0x659f,	// (0x000150df) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0001e6d8) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0001e6d8) main_cset6_slider_pane_g

0xdd1e,	// (0x0001c85e) main_cset6_slider_pane_t1_ParamLimits

0xdd1e,	// (0x0001c85e) main_cset6_slider_pane_t1

0x757c,	// (0x000160bc) main_cset6_slider_pane_t2_ParamLimits

0x757c,	// (0x000160bc) main_cset6_slider_pane_t2

0x75a7,	// (0x000160e7) main_cset6_slider_pane_t3_ParamLimits

0x75a7,	// (0x000160e7) main_cset6_slider_pane_t3

0x75d2,	// (0x00016112) main_cset6_slider_pane_t4_ParamLimits

0x75d2,	// (0x00016112) main_cset6_slider_pane_t4

0x75fd,	// (0x0001613d) main_cset6_slider_pane_t5_ParamLimits

0x75fd,	// (0x0001613d) main_cset6_slider_pane_t5

0xdd5f,	// (0x0001c89f) main_cset6_slider_pane_t7_ParamLimits

0xdd5f,	// (0x0001c89f) main_cset6_slider_pane_t7

0x7628,	// (0x00016168) main_cset6_slider_pane_t8_ParamLimits

0x7628,	// (0x00016168) main_cset6_slider_pane_t8

0x764c,	// (0x0001618c) main_cset6_slider_pane_t9_ParamLimits

0x764c,	// (0x0001618c) main_cset6_slider_pane_t9

0x7670,	// (0x000161b0) main_cset6_slider_pane_t10_ParamLimits

0x7670,	// (0x000161b0) main_cset6_slider_pane_t10

0x7694,	// (0x000161d4) main_cset6_slider_pane_t11_ParamLimits

0x7694,	// (0x000161d4) main_cset6_slider_pane_t11

0xdd95,	// (0x0001c8d5) main_cset6_slider_pane_t14_ParamLimits

0xdd95,	// (0x0001c8d5) main_cset6_slider_pane_t14

0xddce,	// (0x0001c90e) main_cset6_slider_pane_t15_ParamLimits

0xddce,	// (0x0001c90e) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0001e6fd) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0001e6fd) main_cset6_slider_pane_t

0xd4cd,	// (0x0001c00d) cset_slider_pane_g1_copy1

0xd4d6,	// (0x0001c016) cset_slider_pane_g2_copy1

0xd4df,	// (0x0001c01f) cset_slider_pane_g3_copy1

0x9603,	// (0x00018143) bg_popup_sub_pane_cp011_copy1

0xde07,	// (0x0001c947) main_cset_text_pane_g1_copy1

0xd5a6,	// (0x0001c0e6) main_cset_text_pane_t1_copy1

0xd5b4,	// (0x0001c0f4) main_cset_text_pane_t2_copy1

0xd5c2,	// (0x0001c102) main_cset_text_pane_t3_copy1

0xd5d0,	// (0x0001c110) main_cset_text_pane_t4_copy1

0xd5de,	// (0x0001c11e) main_cset_text_pane_t5_copy1

0xde0f,	// (0x0001c94f) main_cset_text_pane_t6_copy1

0xd5fa,	// (0x0001c13a) main_cset_text_pane_t7_copy1

0x743a,	// (0x00015f7a) main_cset_text2_pane_t1_copy1

0x9673,	// (0x000181b3) main_ncimui_pane

0x3b25,	// (0x00012665) popup_query_ncimui_window_ParamLimits

0x3b25,	// (0x00012665) popup_query_ncimui_window

0xc6e5,	// (0x0001b225) field_cale_ev2_pane_g4_ParamLimits

0xc6e5,	// (0x0001b225) field_cale_ev2_pane_g4

0x572f,	// (0x0001426f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x572f,	// (0x0001426f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0001e3db) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0001e3db) cell_video_dialer_keypad_pane_g

0x5747,	// (0x00014287) cell_video_dialer_keypad_pane_t1

0x9603,	// (0x00018143) bg_popup_window_pane_cp012

0xa7ab,	// (0x000192eb) heading_pane_cp06

0xde3b,	// (0x0001c97b) ncim_query_content_pane

0x9603,	// (0x00018143) bg_popup_heading_pane_cp01

0xde43,	// (0x0001c983) ncim_heading_pane_t1

0xde51,	// (0x0001c991) ncim_indicator_popup_pane

0xde63,	// (0x0001c9a3) ncim_query_button_pane

0xde77,	// (0x0001c9b7) ncim_query_content_pane_t1

0xde89,	// (0x0001c9c9) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0001e741) ncim_query_content_pane_t

0xdec3,	// (0x0001ca03) ncim_query_list_pane

0xded5,	// (0x0001ca15) ncim_query_popup_pane

0xde51,	// (0x0001c991) ncim_indicator_popup_pane_ParamLimits

0x78ae,	// (0x000163ee) ncim_query_content_pane_g1_ParamLimits

0x78ae,	// (0x000163ee) ncim_query_content_pane_g1

0xde77,	// (0x0001c9b7) ncim_query_content_pane_t1_ParamLimits

0xde89,	// (0x0001c9c9) ncim_query_content_pane_t2_ParamLimits

0x78ba,	// (0x000163fa) ncim_query_content_pane_t3_ParamLimits

0x78ba,	// (0x000163fa) ncim_query_content_pane_t3

0x78e2,	// (0x00016422) ncim_query_content_pane_t4_ParamLimits

0x78e2,	// (0x00016422) ncim_query_content_pane_t4

0x790a,	// (0x0001644a) ncim_query_content_pane_t5_ParamLimits

0x790a,	// (0x0001644a) ncim_query_content_pane_t5

0xde9b,	// (0x0001c9db) ncim_query_content_pane_t6_ParamLimits

0xde9b,	// (0x0001c9db) ncim_query_content_pane_t6

0xfc01,	// (0x0001e741) ncim_query_content_pane_t_ParamLimits

0xdec3,	// (0x0001ca03) ncim_query_list_pane_ParamLimits

0xded5,	// (0x0001ca15) ncim_query_popup_pane_ParamLimits

0xdee9,	// (0x0001ca29) wait_bar_pane_cp04

0x9603,	// (0x00018143) input_focus_pane_cp011

0xdef1,	// (0x0001ca31) ncim_query_popup_pane_t1

0xdeff,	// (0x0001ca3f) ncim_list_query_list_pane_ParamLimits

0xdeff,	// (0x0001ca3f) ncim_list_query_list_pane

0x9603,	// (0x00018143) bg_button_pane_cp027

0xdf0c,	// (0x0001ca4c) ncim_query_button_pane_g1

0x9603,	// (0x00018143) list_highlight_pane_cp012

0xdf16,	// (0x0001ca56) ncim_list_query_list_pane_g1

0xdf1e,	// (0x0001ca5e) ncim_list_query_list_pane_t1

0xd102,	// (0x0001bc42) cam4_indicators_pane_g3_ParamLimits

0xd102,	// (0x0001bc42) cam4_indicators_pane_g3

0xd182,	// (0x0001bcc2) vid4_indicators_pane_g5_ParamLimits

0xd182,	// (0x0001bcc2) vid4_indicators_pane_g5

0xd88e,	// (0x0001c3ce) vid4_progress_pane_g5_ParamLimits

0xd88e,	// (0x0001c3ce) vid4_progress_pane_g5

0x779c,	// (0x000162dc) main_ncimui_pane_g1

0x7802,	// (0x00016342) ncimui_group_query_pane_ParamLimits

0x7802,	// (0x00016342) ncimui_group_query_pane

0x784a,	// (0x0001638a) ncimui_list_pane_ParamLimits

0x784a,	// (0x0001638a) ncimui_list_pane

0x7871,	// (0x000163b1) ncimui_text_pane_ParamLimits

0x7871,	// (0x000163b1) ncimui_text_pane

0x7932,	// (0x00016472) ncimui_text_pane_t1_ParamLimits

0x7932,	// (0x00016472) ncimui_text_pane_t1

0xdf2c,	// (0x0001ca6c) ncimui_list_single_graphic_pane_ParamLimits

0xdf2c,	// (0x0001ca6c) ncimui_list_single_graphic_pane

0x7950,	// (0x00016490) ncimui_query_pane_ParamLimits

0x7950,	// (0x00016490) ncimui_query_pane

0x9603,	// (0x00018143) list_highlight_pane_cp013

0xdf3c,	// (0x0001ca7c) ncim_list_query_list_pane_t1_copy1

0xdf16,	// (0x0001ca56) ncim_list_single_graphic_pane_g1

0xdf4a,	// (0x0001ca8a) ncim_query_button_pane_cp01

0xdf56,	// (0x0001ca96) ncim_query_entry_pane_ParamLimits

0xdf56,	// (0x0001ca96) ncim_query_entry_pane

0xdf69,	// (0x0001caa9) ncimui_query_pane_g1

0xdf75,	// (0x0001cab5) ncimui_query_pane_t1_ParamLimits

0xdf75,	// (0x0001cab5) ncimui_query_pane_t1

0x9673,	// (0x000181b3) input_focus_pane_cp012

0xdf8e,	// (0x0001cace) ncim_query_entry_pane_t1

0x9dd6,	// (0x00018916) main_im_pane_ParamLimits

0x9673,	// (0x000181b3) main_mobtv_pane_ParamLimits

0x9673,	// (0x000181b3) main_mobtv_pane

0x7564,	// (0x000160a4) main_cset6_slider_pane_g18_ParamLimits

0x7564,	// (0x000160a4) main_cset6_slider_pane_g18

0x7570,	// (0x000160b0) main_cset6_slider_pane_g19_ParamLimits

0x7570,	// (0x000160b0) main_cset6_slider_pane_g19

0xd26e,	// (0x0001bdae) bg_main_mobtv_pane_ParamLimits

0xd26e,	// (0x0001bdae) bg_main_mobtv_pane

0x7963,	// (0x000164a3) main_mobtv_info_pane

0x796c,	// (0x000164ac) main_mobtv_loading_pane_ParamLimits

0x796c,	// (0x000164ac) main_mobtv_loading_pane

0xdfa0,	// (0x0001cae0) main_mobtv_pg_channel_list_pane

0xdfaa,	// (0x0001caea) main_mobtv_pg_hdr_pane

0x7979,	// (0x000164b9) main_mobtv_programe_curr_pane_ParamLimits

0x7979,	// (0x000164b9) main_mobtv_programe_curr_pane

0x7986,	// (0x000164c6) main_mobtv_programe_next_pane_ParamLimits

0x7986,	// (0x000164c6) main_mobtv_programe_next_pane

0xdfb3,	// (0x0001caf3) popup_mobtv_noti_window

0xc414,	// (0x0001af54) main_tv_pg_hdr_pane_g1

0xdfbb,	// (0x0001cafb) main_tv_pg_hdr_pane_g2

0xdfc3,	// (0x0001cb03) main_tv_pg_hdr_pane_g3

0xdfcb,	// (0x0001cb0b) main_tv_pg_hdr_pane_g4

0xdfd3,	// (0x0001cb13) main_tv_pg_hdr_pane_g5

0xdfdd,	// (0x0001cb1d) main_tv_pg_hdr_pane_g6

0xdfe7,	// (0x0001cb27) main_tv_pg_hdr_pane_g7

0xdff1,	// (0x0001cb31) main_tv_pg_hdr_pane_g8

0xdffb,	// (0x0001cb3b) main_tv_pg_hdr_pane_g9

0xe005,	// (0x0001cb45) main_tv_pg_hdr_pane_g10

0xe00f,	// (0x0001cb4f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0001e74e) main_tv_pg_hdr_pane_g

0xe019,	// (0x0001cb59) main_tv_pg_hdr_pane_t1

0xe027,	// (0x0001cb67) main_tv_pg_hdr_pane_t2

0xe035,	// (0x0001cb75) main_tv_pg_hdr_pane_t3

0xe045,	// (0x0001cb85) main_tv_pg_hdr_pane_t4

0xe055,	// (0x0001cb95) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0001e765) main_tv_pg_hdr_pane_t

0xe065,	// (0x0001cba5) single_mobtv_pg_channel_pane_ParamLimits

0xe065,	// (0x0001cba5) single_mobtv_pg_channel_pane

0xe077,	// (0x0001cbb7) single_mobtv_pg_channel_table_pane

0xe080,	// (0x0001cbc0) single_mobtv_pg_channel_thumb_pane

0xe089,	// (0x0001cbc9) single_tv_pg_channel_pane_g1

0xe092,	// (0x0001cbd2) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0001e770) single_tv_pg_channel_pane_g

0xc680,	// (0x0001b1c0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc680,	// (0x0001b1c0) bg_single_mobtv_pg_channel_thumb_pane

0xe09b,	// (0x0001cbdb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe09b,	// (0x0001cbdb) single_mobtv_pg_channel_thumb_pane_g1

0xe0a9,	// (0x0001cbe9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0a9,	// (0x0001cbe9) single_mobtv_pg_channel_thumb_pane_g2

0xe0b5,	// (0x0001cbf5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0b5,	// (0x0001cbf5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0001e775) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0001e775) single_mobtv_pg_channel_thumb_pane_g

0xe0c1,	// (0x0001cc01) single_mobtv_pg_channel_thumb_pane_t1

0xe0cf,	// (0x0001cc0f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0001e77c) single_mobtv_pg_channel_thumb_pane_t

0xc414,	// (0x0001af54) bg_single_mobtv_pg_channel_table_pane_g1

0xc414,	// (0x0001af54) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0001e227) bg_single_mobtv_pg_channel_table_pane_g

0xe0dd,	// (0x0001cc1d) single_mobtv_pg_channel_table_pane_t1

0xe0eb,	// (0x0001cc2b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0001e781) single_mobtv_pg_channel_table_pane_t

0x799b,	// (0x000164db) main_mobtv_info_pane_g1_ParamLimits

0x799b,	// (0x000164db) main_mobtv_info_pane_g1

0x79b9,	// (0x000164f9) main_mobtv_info_pane_t1_ParamLimits

0x79b9,	// (0x000164f9) main_mobtv_info_pane_t1

0x7a31,	// (0x00016571) main_mobtv_info_pane_t2_ParamLimits

0x7a31,	// (0x00016571) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0001e78b) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0001e78b) main_mobtv_info_pane_t

0x7ac0,	// (0x00016600) wait_bar_pane_cp05

0x7ad2,	// (0x00016612) main_mobtv_loading_pane_g1_ParamLimits

0x7ad2,	// (0x00016612) main_mobtv_loading_pane_g1

0x7ae5,	// (0x00016625) main_mobtv_loading_pane_g2_ParamLimits

0x7ae5,	// (0x00016625) main_mobtv_loading_pane_g2

0x7af1,	// (0x00016631) main_mobtv_loading_pane_g3_ParamLimits

0x7af1,	// (0x00016631) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0001e792) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0001e792) main_mobtv_loading_pane_g

0xe0f9,	// (0x0001cc39) main_mobtv_loading_pane_t1_ParamLimits

0xe0f9,	// (0x0001cc39) main_mobtv_loading_pane_t1

0xe111,	// (0x0001cc51) main_mobtv_loading_pane_t2_ParamLimits

0xe111,	// (0x0001cc51) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0001e799) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0001e799) main_mobtv_loading_pane_t

0x7b04,	// (0x00016644) wait_bar_pane_cp06_ParamLimits

0x7b04,	// (0x00016644) wait_bar_pane_cp06

0xe135,	// (0x0001cc75) main_mobtv_programe_curr_pane_t1

0xe143,	// (0x0001cc83) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0001e79e) main_mobtv_programe_curr_pane_t

0xe151,	// (0x0001cc91) main_mobtv_programe_next_pane_t1

0xe15f,	// (0x0001cc9f) main_mobtv_programe_next_pane_t2

0xe16d,	// (0x0001ccad) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0001e7a3) main_mobtv_programe_next_pane_t

0x9603,	// (0x00018143) bg_popup_mobtv_noti_window_pane

0xe17b,	// (0x0001ccbb) popup_mobtv_noti_window_g1

0xe183,	// (0x0001ccc3) popup_mobtv_noti_window_t1

0xe191,	// (0x0001ccd1) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0001e7aa) popup_mobtv_noti_window_t

0xc414,	// (0x0001af54) bg_popup_mobtv_noti_window_pane_g1

0x9603,	// (0x00018143) sc_clock_pane

0x9603,	// (0x00018143) main_fs_bigclock_pane

0x718b,	// (0x00015ccb) blid2_tripm_pane_t4_ParamLimits

0x718b,	// (0x00015ccb) blid2_tripm_pane_t4

0x7b13,	// (0x00016653) sc_clock_pane_g1_ParamLimits

0x7b13,	// (0x00016653) sc_clock_pane_g1

0x7b25,	// (0x00016665) sc_clock_pane_t1_ParamLimits

0x7b25,	// (0x00016665) sc_clock_pane_t1

0x7b47,	// (0x00016687) sc_clock_pane_t2_ParamLimits

0x7b47,	// (0x00016687) sc_clock_pane_t2

0x7b5f,	// (0x0001669f) sc_clock_pane_t3_ParamLimits

0x7b5f,	// (0x0001669f) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0001e7af) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0001e7af) sc_clock_pane_t

0x8b18,	// (0x00017658) main_fs_bigclock_indicator_pane_ParamLimits

0x8b18,	// (0x00017658) main_fs_bigclock_indicator_pane

0xc650,	// (0x0001b190) main_fs_bigclock_pane_g1_ParamLimits

0xc650,	// (0x0001b190) main_fs_bigclock_pane_g1

0x8b24,	// (0x00017664) main_fs_bigclock_pane_t1_ParamLimits

0x8b24,	// (0x00017664) main_fs_bigclock_pane_t1

0x8b36,	// (0x00017676) main_fs_bigclock_pane_t2_ParamLimits

0x8b36,	// (0x00017676) main_fs_bigclock_pane_t2

0x8b4a,	// (0x0001768a) main_fs_bigclock_pane_t3_ParamLimits

0x8b4a,	// (0x0001768a) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001e9ae) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001e9ae) main_fs_bigclock_pane_t

0xec5c,	// (0x0001d79c) main_fs_bigclock_indicator_pane_g1

0xde6b,	// (0x0001c9ab) ncim_query_content_pane_g2_ParamLimits

0xde6b,	// (0x0001c9ab) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0001e73c) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0001e73c) ncim_query_content_pane_g

0x7b78,	// (0x000166b8) sc_clock_pane_t4_ParamLimits

0x7b78,	// (0x000166b8) sc_clock_pane_t4

0x9673,	// (0x000181b3) main_radioblah_pane

0xd048,	// (0x0001bb88) cell_call4_button_pane_t1_copy1_ParamLimits

0xd048,	// (0x0001bb88) cell_call4_button_pane_t1_copy1

0x77b4,	// (0x000162f4) main_ncimui_pane_t1_ParamLimits

0x77b4,	// (0x000162f4) main_ncimui_pane_t1

0x77ce,	// (0x0001630e) main_ncimui_pane_t2_ParamLimits

0x77ce,	// (0x0001630e) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0001e735) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0001e735) main_ncimui_pane_t

0xe2cb,	// (0x0001ce0b) main_radioblah_anim_pane_ParamLimits

0xe2cb,	// (0x0001ce0b) main_radioblah_anim_pane

0xe2dc,	// (0x0001ce1c) main_radioblah_info_pane_ParamLimits

0xe2dc,	// (0x0001ce1c) main_radioblah_info_pane

0xe2f0,	// (0x0001ce30) main_radioblah_pane_t1_ParamLimits

0xe2f0,	// (0x0001ce30) main_radioblah_pane_t1

0xe30c,	// (0x0001ce4c) main_radioblah_pane_t2_ParamLimits

0xe30c,	// (0x0001ce4c) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0001e7d0) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0001e7d0) main_radioblah_pane_t

0x7c2e,	// (0x0001676e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7c2e,	// (0x0001676e) main_radioblah_rocker_ctrl_pane

0xe354,	// (0x0001ce94) main_radioblah_info_pane_t1_ParamLimits

0xe354,	// (0x0001ce94) main_radioblah_info_pane_t1

0x7c86,	// (0x000167c6) main_radioblah_info_pane_t2_ParamLimits

0x7c86,	// (0x000167c6) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0001e7d9) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0001e7d9) main_radioblah_info_pane_t

0xc414,	// (0x0001af54) main_radioblah_rocker_ctrl_pane_g1

0x7d36,	// (0x00016876) main_radioblah_rocker_ctrl_pane_g2

0x7d3e,	// (0x0001687e) main_radioblah_rocker_ctrl_pane_g3

0x7d46,	// (0x00016886) main_radioblah_rocker_ctrl_pane_g4

0x7d4e,	// (0x0001688e) main_radioblah_rocker_ctrl_pane_g5

0x7d56,	// (0x00016896) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0001e7e2) main_radioblah_rocker_ctrl_pane_g

0x743a,	// (0x00015f7a) main_cset_text2_pane_t1_copy1_ParamLimits

0xd0d2,	// (0x0001bc12) cam4_image_uncrop_qvga_pane

0xd12b,	// (0x0001bc6b) vid4_image_uncrop_qcif_pane

0xdab8,	// (0x0001c5f8) cam6_image_uncrop_qvga_pane_ParamLimits

0xdab8,	// (0x0001c5f8) cam6_image_uncrop_qvga_pane

0xdb80,	// (0x0001c6c0) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb80,	// (0x0001c6c0) vid6_image_uncrop_qcif_pane

0x9603,	// (0x00018143) bg_popup_preview_window_pane_cp03

0xde1d,	// (0x0001c95d) list_cset_text2_pane

0xde25,	// (0x0001c965) main_cset6_text2_pane_g1

0xde2d,	// (0x0001c96d) main_cset6_text2_pane_t1

0x7d5e,	// (0x0001689e) list_cset_text2_pane_t1_ParamLimits

0x7d5e,	// (0x0001689e) list_cset_text2_pane_t1

0x9673,	// (0x000181b3) main_radioblah_pane_ParamLimits

0x7aac,	// (0x000165ec) main_mobtv_info_pane_t3_ParamLimits

0x7aac,	// (0x000165ec) main_mobtv_info_pane_t3

0x7c1c,	// (0x0001675c) main_radioblah_pane_g1

0x7c56,	// (0x00016796) main_radioblah_info_pane_g1

0x7cdb,	// (0x0001681b) main_radioblah_info_pane_t3_ParamLimits

0x7cdb,	// (0x0001681b) main_radioblah_info_pane_t3

0x24e6,	// (0x00011026) highlight_cell_cale_month_pane_ParamLimits

0x24e6,	// (0x00011026) highlight_cell_cale_month_pane

0x9603,	// (0x00018143) main_phob_fisheye_pane

0xc788,	// (0x0001b2c8) scroll_pane_cp0031_ParamLimits

0xc788,	// (0x0001b2c8) scroll_pane_cp0031

0xdc8e,	// (0x0001c7ce) wait_bar_pane_cp08_ParamLimits

0x74bf,	// (0x00015fff) cset_list_set_pane_copy1_ParamLimits

0xe38e,	// (0x0001cece) highlight_cell_cale_month_pane_g1

0x7d77,	// (0x000168b7) highlight_cell_cale_month_pane_t1

0xd86e,	// (0x0001c3ae) list_gen_pane_cp01

0xd3a4,	// (0x0001bee4) scroll_pane_01

0xe396,	// (0x0001ced6) list_single_double_fisheye_pane

0x7d85,	// (0x000168c5) list_double_fisheye_pane_g1_ParamLimits

0x7d85,	// (0x000168c5) list_double_fisheye_pane_g1

0x7d91,	// (0x000168d1) list_double_fisheye_pane_g2_ParamLimits

0x7d91,	// (0x000168d1) list_double_fisheye_pane_g2

0x7da5,	// (0x000168e5) list_double_fisheye_pane_g3_ParamLimits

0x7da5,	// (0x000168e5) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0001e7ef) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0001e7ef) list_double_fisheye_pane_g

0x7dce,	// (0x0001690e) list_double_fisheye_pane_t1_ParamLimits

0x7dce,	// (0x0001690e) list_double_fisheye_pane_t1

0x7de9,	// (0x00016929) list_double_fisheye_pane_t2_ParamLimits

0x7de9,	// (0x00016929) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0001e7fa) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0001e7fa) list_double_fisheye_pane_t

0x9603,	// (0x00018143) main_call5_pane

0x7ba3,	// (0x000166e3) sc_swipe_pane_ParamLimits

0x7ba3,	// (0x000166e3) sc_swipe_pane

0x7e1e,	// (0x0001695e) call5_image_pane_ParamLimits

0x7e1e,	// (0x0001695e) call5_image_pane

0x7e3b,	// (0x0001697b) call5_swipe_1_pane_ParamLimits

0x7e3b,	// (0x0001697b) call5_swipe_1_pane

0x7e4e,	// (0x0001698e) call5_swipe_2_pane_ParamLimits

0x7e4e,	// (0x0001698e) call5_swipe_2_pane

0x7e79,	// (0x000169b9) popup_call5_audio_first_window_ParamLimits

0x7e79,	// (0x000169b9) popup_call5_audio_first_window

0xc680,	// (0x0001b1c0) call5_swipe_1_pane_g1_ParamLimits

0xc680,	// (0x0001b1c0) call5_swipe_1_pane_g1

0xe39f,	// (0x0001cedf) call5_swipe_1_pane_g2_ParamLimits

0xe39f,	// (0x0001cedf) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0001e7ff) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0001e7ff) call5_swipe_1_pane_g

0xe3ab,	// (0x0001ceeb) call5_swipe_1_pane_t1_ParamLimits

0xe3ab,	// (0x0001ceeb) call5_swipe_1_pane_t1

0xc680,	// (0x0001b1c0) call5_swipe_2_pane_g1_ParamLimits

0xc680,	// (0x0001b1c0) call5_swipe_2_pane_g1

0xe3c0,	// (0x0001cf00) call5_swipe_2_pane_g2_ParamLimits

0xe3c0,	// (0x0001cf00) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0001e804) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0001e804) call5_swipe_2_pane_g

0xe3cc,	// (0x0001cf0c) call5_swipe_2_pane_t1_ParamLimits

0xe3cc,	// (0x0001cf0c) call5_swipe_2_pane_t1

0xe3e1,	// (0x0001cf21) sc_swipe_pane_g1_ParamLimits

0xe3e1,	// (0x0001cf21) sc_swipe_pane_g1

0xe3ee,	// (0x0001cf2e) sc_swipe_pane_g2_ParamLimits

0xe3ee,	// (0x0001cf2e) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0001e809) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0001e809) sc_swipe_pane_g

0xe3fa,	// (0x0001cf3a) sc_swipe_pane_t1_ParamLimits

0xe3fa,	// (0x0001cf3a) sc_swipe_pane_t1

0x9603,	// (0x00018143) main_cmail_launcher_pane

0x7e8a,	// (0x000169ca) aid_size_cell_cmail_l_ParamLimits

0x7e8a,	// (0x000169ca) aid_size_cell_cmail_l

0x7ea4,	// (0x000169e4) grid_cmail_l_pane_ParamLimits

0x7ea4,	// (0x000169e4) grid_cmail_l_pane

0x7ebf,	// (0x000169ff) cell_cmail_l_pane_ParamLimits

0x7ebf,	// (0x000169ff) cell_cmail_l_pane

0x7ee5,	// (0x00016a25) cell_cmail_l_pane_g1_ParamLimits

0x7ee5,	// (0x00016a25) cell_cmail_l_pane_g1

0x7ef1,	// (0x00016a31) cell_cmail_l_pane_t1_ParamLimits

0x7ef1,	// (0x00016a31) cell_cmail_l_pane_t1

0xe40f,	// (0x0001cf4f) cell_cmail_l_pane_t2_ParamLimits

0xe40f,	// (0x0001cf4f) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0001e80e) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0001e80e) cell_cmail_l_pane_t

0x9673,	// (0x000181b3) grid_highlight_pane_cp018_ParamLimits

0x9673,	// (0x000181b3) grid_highlight_pane_cp018

0x049c,	// (0x0000efdc) main2_pane_ParamLimits

0x049c,	// (0x0000efdc) main2_pane

0x9e93,	// (0x000189d3) popup_sp_fs_action_menu_bg_pane_g1

0x9e9b,	// (0x000189db) popup_sp_fs_action_menu_bg_pane_g2

0x9ea3,	// (0x000189e3) popup_sp_fs_action_menu_bg_pane_g3

0x9eab,	// (0x000189eb) popup_sp_fs_action_menu_bg_pane_g4

0x9eb3,	// (0x000189f3) popup_sp_fs_action_menu_bg_pane_g5

0x9ebb,	// (0x000189fb) popup_sp_fs_action_menu_bg_pane_g6

0x9ec3,	// (0x00018a03) popup_sp_fs_action_menu_bg_pane_g7

0x9ecb,	// (0x00018a0b) popup_sp_fs_action_menu_bg_pane_g8

0x9ed3,	// (0x00018a13) popup_sp_fs_action_menu_bg_pane_g9

0x9edb,	// (0x00018a1b) popup_sp_fs_action_menu_bg_pane_g10

0x9edb,	// (0x00018a1b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0001dcd3) popup_sp_fs_action_menu_bg_pane_g

0xd28a,	// (0x0001bdca) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x2_t3_g3_g1

0x1482,	// (0x0000ffc2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1482,	// (0x0000ffc2) list_medium_line_x2_t3_g3_g2

0x148e,	// (0x0000ffce) list_medium_line_x2_t3_g3_g3_ParamLimits

0x148e,	// (0x0000ffce) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0001dd83) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0001dd83) list_medium_line_x2_t3_g3_g

0x149a,	// (0x0000ffda) list_medium_line_x2_t3_g3_t1_ParamLimits

0x149a,	// (0x0000ffda) list_medium_line_x2_t3_g3_t1

0x14af,	// (0x0000ffef) list_medium_line_x2_t3_g3_t2_ParamLimits

0x14af,	// (0x0000ffef) list_medium_line_x2_t3_g3_t2

0x14c3,	// (0x00010003) list_medium_line_x2_t3_g3_t3_ParamLimits

0x14c3,	// (0x00010003) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0001dd8a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0001dd8a) list_medium_line_x2_t3_g3_t

0xd28a,	// (0x0001bdca) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x2_t3_g2_g1

0x148e,	// (0x0000ffce) list_medium_line_x2_t3_g2_g2_ParamLimits

0x148e,	// (0x0000ffce) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0001dd91) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0001dd91) list_medium_line_x2_t3_g2_g

0x14d8,	// (0x00010018) list_medium_line_x2_t3_g2_t1_ParamLimits

0x14d8,	// (0x00010018) list_medium_line_x2_t3_g2_t1

0x14ee,	// (0x0001002e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x14ee,	// (0x0001002e) list_medium_line_x2_t3_g2_t2

0x14c3,	// (0x00010003) list_medium_line_x2_t3_g2_t3_ParamLimits

0x14c3,	// (0x00010003) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0001dd96) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0001dd96) list_medium_line_x2_t3_g2_t

0xd28a,	// (0x0001bdca) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x2_t4_g4_g1

0x1500,	// (0x00010040) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1500,	// (0x00010040) list_medium_line_x2_t4_g4_g2

0x1482,	// (0x0000ffc2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1482,	// (0x0000ffc2) list_medium_line_x2_t4_g4_g3

0x150c,	// (0x0001004c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x150c,	// (0x0001004c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0001dd9d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0001dd9d) list_medium_line_x2_t4_g4_g

0x1518,	// (0x00010058) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1518,	// (0x00010058) list_medium_line_x2_t4_g4_t1

0x152f,	// (0x0001006f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x152f,	// (0x0001006f) list_medium_line_x2_t4_g4_t2

0x1544,	// (0x00010084) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1544,	// (0x00010084) list_medium_line_x2_t4_g4_t3

0x1556,	// (0x00010096) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1556,	// (0x00010096) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0001dda6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0001dda6) list_medium_line_x2_t4_g4_t

0xd28a,	// (0x0001bdca) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x2_t2_g4_g1

0x1500,	// (0x00010040) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1500,	// (0x00010040) list_medium_line_x2_t2_g4_g2

0x1482,	// (0x0000ffc2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1482,	// (0x0000ffc2) list_medium_line_x2_t2_g4_g3

0x148e,	// (0x0000ffce) list_medium_line_x2_t2_g4_g4_ParamLimits

0x148e,	// (0x0000ffce) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0001de0d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0001de0d) list_medium_line_x2_t2_g4_g

0x250c,	// (0x0001104c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x250c,	// (0x0001104c) list_medium_line_x2_t2_g4_t1

0x14c3,	// (0x00010003) list_medium_line_x2_t2_g4_t2_ParamLimits

0x14c3,	// (0x00010003) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0001de16) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0001de16) list_medium_line_x2_t2_g4_t

0xd28a,	// (0x0001bdca) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x2_t2_g3_g1

0x1482,	// (0x0000ffc2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1482,	// (0x0000ffc2) list_medium_line_x2_t2_g3_g2

0x148e,	// (0x0000ffce) list_medium_line_x2_t2_g3_g3_ParamLimits

0x148e,	// (0x0000ffce) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0001dd83) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0001dd83) list_medium_line_x2_t2_g3_g

0x2521,	// (0x00011061) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2521,	// (0x00011061) list_medium_line_x2_t2_g3_t1

0x14c3,	// (0x00010003) list_medium_line_x2_t2_g3_t2_ParamLimits

0x14c3,	// (0x00010003) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0001de1b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0001de1b) list_medium_line_x2_t2_g3_t

0x2654,	// (0x00011194) main_sp_fs_list_pane_ParamLimits

0x2654,	// (0x00011194) main_sp_fs_list_pane

0xd296,	// (0x0001bdd6) sp_fs_scroll_pane_ParamLimits

0xd296,	// (0x0001bdd6) sp_fs_scroll_pane

0x2660,	// (0x000111a0) list_medium_line_x2_t3_t1

0x2670,	// (0x000111b0) list_medium_line_x2_t3_t2

0x267e,	// (0x000111be) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0001de66) list_medium_line_x2_t3_t

0x268c,	// (0x000111cc) list_medium_line_x3_t4_t1

0x269c,	// (0x000111dc) list_medium_line_x3_t4_t2

0x26aa,	// (0x000111ea) list_medium_line_x3_t4_t3

0x267e,	// (0x000111be) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0001de6d) list_medium_line_x3_t4_t

0x26b8,	// (0x000111f8) list_medium_line_x4_t5_t1

0x26c8,	// (0x00011208) list_medium_line_x4_t5_t2

0x26aa,	// (0x000111ea) list_medium_line_x4_t5_t3

0x26d6,	// (0x00011216) list_medium_line_x4_t5_t4

0x267e,	// (0x000111be) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0001de76) list_medium_line_x4_t5_t

0xd28a,	// (0x0001bdca) list_medium_line_t4_g4_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_t4_g4_g1

0x150c,	// (0x0001004c) list_medium_line_t4_g4_g2_ParamLimits

0x150c,	// (0x0001004c) list_medium_line_t4_g4_g2

0x26e4,	// (0x00011224) list_medium_line_t4_g4_g3_ParamLimits

0x26e4,	// (0x00011224) list_medium_line_t4_g4_g3

0x148e,	// (0x0000ffce) list_medium_line_t4_g4_g4_ParamLimits

0x148e,	// (0x0000ffce) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0001de81) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0001de81) list_medium_line_t4_g4_g

0x26f0,	// (0x00011230) list_medium_line_t4_g4_t1_ParamLimits

0x26f0,	// (0x00011230) list_medium_line_t4_g4_t1

0x2705,	// (0x00011245) list_medium_line_t4_g4_t2_ParamLimits

0x2705,	// (0x00011245) list_medium_line_t4_g4_t2

0x271a,	// (0x0001125a) list_medium_line_t4_g4_t3_ParamLimits

0x271a,	// (0x0001125a) list_medium_line_t4_g4_t3

0x14c3,	// (0x00010003) list_medium_line_t4_g4_t4_ParamLimits

0x14c3,	// (0x00010003) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0001de8a) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0001de8a) list_medium_line_t4_g4_t

0x27e2,	// (0x00011322) chi_dic_find_pane_g1

0x38ef,	// (0x0001242f) main_tport_pane

0x6839,	// (0x00015379) list_medium_line_plain_t1

0x68eb,	// (0x0001542b) list_medium_line_t2_g2_g1_ParamLimits

0x68eb,	// (0x0001542b) list_medium_line_t2_g2_g1

0x68f7,	// (0x00015437) list_medium_line_t2_g2_g2_ParamLimits

0x68f7,	// (0x00015437) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0001e546) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0001e546) list_medium_line_t2_g2_g

0x6903,	// (0x00015443) list_medium_line_t2_g2_t1_ParamLimits

0x6903,	// (0x00015443) list_medium_line_t2_g2_t1

0x691d,	// (0x0001545d) list_medium_line_t2_g2_t2_ParamLimits

0x691d,	// (0x0001545d) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0001e54b) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0001e54b) list_medium_line_t2_g2_t

0xd8ef,	// (0x0001c42f) aid_sp_fs_list_icon_a_sm

0xd8f7,	// (0x0001c437) aid_sp_fs_list_icon_d

0xd8ff,	// (0x0001c43f) aid_sp_fs_text_primary

0xd908,	// (0x0001c448) aid_sp_fs_text_secondary

0x6f38,	// (0x00015a78) list_medium_line

0x6f38,	// (0x00015a78) list_medium_line_g2

0x6f38,	// (0x00015a78) list_medium_line_g3

0x6f38,	// (0x00015a78) list_medium_line_plain

0x6f38,	// (0x00015a78) list_medium_line_plain_t2

0x6f38,	// (0x00015a78) list_medium_line_plain_t3

0x6f38,	// (0x00015a78) list_medium_line_right_icon

0x6f38,	// (0x00015a78) list_medium_line_right_iconx2

0x6f38,	// (0x00015a78) list_medium_line_t2

0x6f38,	// (0x00015a78) list_medium_line_t2_g2

0x6f38,	// (0x00015a78) list_medium_line_t2_g3

0x6f38,	// (0x00015a78) list_medium_line_t2_right_icon

0x6f38,	// (0x00015a78) list_medium_line_t2_right_iconx2

0x6f38,	// (0x00015a78) list_medium_line_t3

0x6f38,	// (0x00015a78) list_medium_line_t3_g2

0x6f38,	// (0x00015a78) list_medium_line_t3_g3

0x6f38,	// (0x00015a78) list_medium_line_t3_right_iconx2

0x6f41,	// (0x00015a81) list_medium_line_t4_g4

0x6f4a,	// (0x00015a8a) list_medium_line_x2

0x6f4a,	// (0x00015a8a) list_medium_line_x2_t2_g2

0x6f4a,	// (0x00015a8a) list_medium_line_x2_t2_g3

0x6f4a,	// (0x00015a8a) list_medium_line_x2_t2_g4

0x6f4a,	// (0x00015a8a) list_medium_line_x2_t3

0x6f4a,	// (0x00015a8a) list_medium_line_x2_t3_g2

0x6f4a,	// (0x00015a8a) list_medium_line_x2_t3_g3

0x6f4a,	// (0x00015a8a) list_medium_line_x2_t3_g4

0x6f4a,	// (0x00015a8a) list_medium_line_x2_t4_g2

0x6f4a,	// (0x00015a8a) list_medium_line_x2_t4_g4

0x6f53,	// (0x00015a93) list_medium_line_x3

0x6f53,	// (0x00015a93) list_medium_line_x3_t4

0x6f53,	// (0x00015a93) list_medium_line_x3_t4_g4

0x6f41,	// (0x00015a81) list_medium_line_x4_t4

0x6f41,	// (0x00015a81) list_medium_line_x4_t4_g7

0x6f41,	// (0x00015a81) list_medium_line_x4_t5

0x6f5c,	// (0x00015a9c) list_single_fs_dyc_pane_ParamLimits

0x6f5c,	// (0x00015a9c) list_single_fs_dyc_pane

0xd28a,	// (0x0001bdca) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x4_t4_g7_g1

0x76b8,	// (0x000161f8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x76b8,	// (0x000161f8) list_medium_line_x4_t4_g7_g2

0x76c4,	// (0x00016204) list_medium_line_x4_t4_g7_g3_ParamLimits

0x76c4,	// (0x00016204) list_medium_line_x4_t4_g7_g3

0x76d3,	// (0x00016213) list_medium_line_x4_t4_g7_g4_ParamLimits

0x76d3,	// (0x00016213) list_medium_line_x4_t4_g7_g4

0x76df,	// (0x0001621f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x76df,	// (0x0001621f) list_medium_line_x4_t4_g7_g5

0x76ee,	// (0x0001622e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x76ee,	// (0x0001622e) list_medium_line_x4_t4_g7_g6

0x76fd,	// (0x0001623d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x76fd,	// (0x0001623d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0001e716) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0001e716) list_medium_line_x4_t4_g7_g

0x7709,	// (0x00016249) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7709,	// (0x00016249) list_medium_line_x4_t4_g7_t1

0x771e,	// (0x0001625e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x771e,	// (0x0001625e) list_medium_line_x4_t4_g7_t2

0x7733,	// (0x00016273) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7733,	// (0x00016273) list_medium_line_x4_t4_g7_t3

0x7748,	// (0x00016288) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7748,	// (0x00016288) list_medium_line_x4_t4_g7_t4

0x775a,	// (0x0001629a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x775a,	// (0x0001629a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0001e725) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0001e725) list_medium_line_x4_t4_g7_t

0x776c,	// (0x000162ac) list_single_dyc_row_pane_ParamLimits

0x776c,	// (0x000162ac) list_single_dyc_row_pane

0x7e0b,	// (0x0001694b) call5_gesture_pane_ParamLimits

0x7e0b,	// (0x0001694b) call5_gesture_pane

0x7e61,	// (0x000169a1) call5_windows_pane_ParamLimits

0x7e61,	// (0x000169a1) call5_windows_pane

0x7f07,	// (0x00016a47) call5_swipe_1_pane_cp_ParamLimits

0x7f07,	// (0x00016a47) call5_swipe_1_pane_cp

0x7f13,	// (0x00016a53) call5_swipe_2_pane_cp_ParamLimits

0x7f13,	// (0x00016a53) call5_swipe_2_pane_cp

0xaa27,	// (0x00019567) call5_image_pane_cp

0x7f1f,	// (0x00016a5f) popup_call5_audio_first_window_cp_ParamLimits

0x7f1f,	// (0x00016a5f) popup_call5_audio_first_window_cp

0xe3e1,	// (0x0001cf21) call5_swipe_1_pane_g1_cp_ParamLimits

0xe3e1,	// (0x0001cf21) call5_swipe_1_pane_g1_cp

0xe421,	// (0x0001cf61) call5_swipe_1_pane_g2_cp

0xe3fa,	// (0x0001cf3a) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3fa,	// (0x0001cf3a) call5_swipe_1_pane_t1_cp

0xe3e1,	// (0x0001cf21) call5_swipe_2_pane_g1_cp_ParamLimits

0xe3e1,	// (0x0001cf21) call5_swipe_2_pane_g1_cp

0xe429,	// (0x0001cf69) call5_swipe_2_pane_g2_cp

0xe431,	// (0x0001cf71) call5_swipe_2_pane_t1_cp_ParamLimits

0xe431,	// (0x0001cf71) call5_swipe_2_pane_t1_cp

0x9673,	// (0x000181b3) main_sp_fs_email_pane

0xe446,	// (0x0001cf86) main_sp_fs_listscroll_pane_te

0x7f2d,	// (0x00016a6d) popup_sp_fs_action_menu_pane_ParamLimits

0x7f2d,	// (0x00016a6d) popup_sp_fs_action_menu_pane

0xc414,	// (0x0001af54) bg_sp_fs_ctrlbar_pane_g1

0xe44f,	// (0x0001cf8f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe458,	// (0x0001cf98) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe461,	// (0x0001cfa1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc414,	// (0x0001af54) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0001e813) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1f9,	// (0x0001ad39) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1f9,	// (0x0001ad39) bg_sp_fs_ctrlbar_ddmenu_pane

0xe46a,	// (0x0001cfaa) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe46a,	// (0x0001cfaa) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd28a,	// (0x0001bdca) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd28a,	// (0x0001bdca) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0001e81c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0001e81c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe476,	// (0x0001cfb6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe476,	// (0x0001cfb6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7f71,	// (0x00016ab1) list_medium_line_t2_right_icon_g1

0x7f79,	// (0x00016ab9) list_medium_line_t2_right_icon_t1

0x7f89,	// (0x00016ac9) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0001e821) list_medium_line_t2_right_icon_t

0xbef9,	// (0x0001aa39) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbef9,	// (0x0001aa39) bg_sp_fs_ctrlbar_pane

0x7fe3,	// (0x00016b23) main_sp_fs_ctrlbar_button_pane_cp01

0x7fed,	// (0x00016b2d) main_sp_fs_ctrlbar_ddmenu_pane

0xe4c8,	// (0x0001d008) main_sp_fs_ctrlbar_pane_g1

0xe4d4,	// (0x0001d014) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0001e826) main_sp_fs_ctrlbar_pane_g

0xe4e0,	// (0x0001d020) main_sp_fs_ctrlbar_pane_t1

0x7ff7,	// (0x00016b37) main_sp_fs_ctrlbar_pane

0x801b,	// (0x00016b5b) main_sp_fs_listscroll_pane_te_cp01

0x803b,	// (0x00016b7b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x803b,	// (0x00016b7b) popup_sp_fs_action_menu_pane_cp01

0x9673,	// (0x000181b3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9673,	// (0x000181b3) bg_sp_fs_highlight_list_pane_cp01

0xe510,	// (0x0001d050) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe510,	// (0x0001d050) sp_fs_action_menu_list_gene_pane_g1

0xe51f,	// (0x0001d05f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe51f,	// (0x0001d05f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0001e830) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0001e830) sp_fs_action_menu_list_gene_pane_g

0xe52c,	// (0x0001d06c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe52c,	// (0x0001d06c) sp_fs_action_menu_list_gene_pane_t1

0xe544,	// (0x0001d084) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe544,	// (0x0001d084) sp_fs_action_menu_list_gene_pane

0xe565,	// (0x0001d0a5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe565,	// (0x0001d0a5) popup_sp_fs_action_menu_bg_pane

0xe573,	// (0x0001d0b3) sp_fs_action_menu_list_pane_ParamLimits

0xe573,	// (0x0001d0b3) sp_fs_action_menu_list_pane

0x806b,	// (0x00016bab) sp_fs_scroll_pane_cp01_ParamLimits

0x806b,	// (0x00016bab) sp_fs_scroll_pane_cp01

0x8091,	// (0x00016bd1) list_medium_line_plain_t2_t1

0x80a1,	// (0x00016be1) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0001e835) list_medium_line_plain_t2_t

0x80b1,	// (0x00016bf1) list_medium_line_plain_t3_t1

0x80c1,	// (0x00016c01) list_medium_line_plain_t3_t2

0x80cf,	// (0x00016c0f) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0001e83a) list_medium_line_plain_t3_t

0xd28a,	// (0x0001bdca) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x2_t2_g2_g1

0x148e,	// (0x0000ffce) list_medium_line_x2_t2_g2_g2_ParamLimits

0x148e,	// (0x0000ffce) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0001dd91) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0001dd91) list_medium_line_x2_t2_g2_g

0x26f0,	// (0x00011230) list_medium_line_x2_t2_g2_t1_ParamLimits

0x26f0,	// (0x00011230) list_medium_line_x2_t2_g2_t1

0x14c3,	// (0x00010003) list_medium_line_x2_t2_g2_t2_ParamLimits

0x14c3,	// (0x00010003) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0001e841) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0001e841) list_medium_line_x2_t2_g2_t

0xd28a,	// (0x0001bdca) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x2_t4_g2_g1

0x148e,	// (0x0000ffce) list_medium_line_x2_t4_g2_g2_ParamLimits

0x148e,	// (0x0000ffce) list_medium_line_x2_t4_g2_g2

0x0001,

0xf251,	// (0x0001dd91) list_medium_line_x2_t4_g2_g_ParamLimits

0xf251,	// (0x0001dd91) list_medium_line_x2_t4_g2_g

0x80dd,	// (0x00016c1d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x80dd,	// (0x00016c1d) list_medium_line_x2_t4_g2_t1

0x80f7,	// (0x00016c37) list_medium_line_x2_t4_g2_t2_ParamLimits

0x80f7,	// (0x00016c37) list_medium_line_x2_t4_g2_t2

0x810c,	// (0x00016c4c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x810c,	// (0x00016c4c) list_medium_line_x2_t4_g2_t3

0x14c3,	// (0x00010003) list_medium_line_x2_t4_g2_t4_ParamLimits

0x14c3,	// (0x00010003) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd06,	// (0x0001e846) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd06,	// (0x0001e846) list_medium_line_x2_t4_g2_t

0x8121,	// (0x00016c61) list_medium_line_t3_right_iconx2_g1

0x7f71,	// (0x00016ab1) list_medium_line_t3_right_iconx2_g2

0x8129,	// (0x00016c69) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0f,	// (0x0001e84f) list_medium_line_t3_right_iconx2_g

0x8133,	// (0x00016c73) list_medium_line_t3_right_iconx2_t1

0x8143,	// (0x00016c83) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd16,	// (0x0001e856) list_medium_line_t3_right_iconx2_t

0xd28a,	// (0x0001bdca) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x3_t4_g4_g1

0x1482,	// (0x0000ffc2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1482,	// (0x0000ffc2) list_medium_line_x3_t4_g4_g2

0x150c,	// (0x0001004c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x150c,	// (0x0001004c) list_medium_line_x3_t4_g4_g3

0x8151,	// (0x00016c91) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8151,	// (0x00016c91) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1b,	// (0x0001e85b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1b,	// (0x0001e85b) list_medium_line_x3_t4_g4_g

0x815d,	// (0x00016c9d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x815d,	// (0x00016c9d) list_medium_line_x3_t4_g4_t1

0x8174,	// (0x00016cb4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8174,	// (0x00016cb4) list_medium_line_x3_t4_g4_t2

0x2705,	// (0x00011245) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2705,	// (0x00011245) list_medium_line_x3_t4_g4_t3

0x818f,	// (0x00016ccf) list_medium_line_x3_t4_g4_t4_ParamLimits

0x818f,	// (0x00016ccf) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd24,	// (0x0001e864) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd24,	// (0x0001e864) list_medium_line_x3_t4_g4_t

0x81ac,	// (0x00016cec) list_single_dyc_row_text_pane_t1_ParamLimits

0x81ac,	// (0x00016cec) list_single_dyc_row_text_pane_t1

0x81f5,	// (0x00016d35) list_single_dyc_row_text_pane_t2_ParamLimits

0x81f5,	// (0x00016d35) list_single_dyc_row_text_pane_t2

0xe595,	// (0x0001d0d5) list_single_dyc_row_text_pane_t3_ParamLimits

0xe595,	// (0x0001d0d5) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2d,	// (0x0001e86d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2d,	// (0x0001e86d) list_single_dyc_row_text_pane_t

0xe5a7,	// (0x0001d0e7) list_single_dyc_row_pane_g1_ParamLimits

0xe5a7,	// (0x0001d0e7) list_single_dyc_row_pane_g1

0xe5b3,	// (0x0001d0f3) list_single_dyc_row_pane_g2_ParamLimits

0xe5b3,	// (0x0001d0f3) list_single_dyc_row_pane_g2

0xe5bf,	// (0x0001d0ff) list_single_dyc_row_pane_g3_ParamLimits

0xe5bf,	// (0x0001d0ff) list_single_dyc_row_pane_g3

0xe5cb,	// (0x0001d10b) list_single_dyc_row_pane_g4_ParamLimits

0xe5cb,	// (0x0001d10b) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001e874) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001e874) list_single_dyc_row_pane_g

0xe5d7,	// (0x0001d117) list_single_dyc_row_text_pane_ParamLimits

0xe5d7,	// (0x0001d117) list_single_dyc_row_text_pane

0x9603,	// (0x00018143) bg_sp_fs_scroll_pane

0xe5f6,	// (0x0001d136) thumb_sp_fs_scroll_pane

0x68eb,	// (0x0001542b) list_medium_line_g1_ParamLimits

0x68eb,	// (0x0001542b) list_medium_line_g1

0x824f,	// (0x00016d8f) list_medium_line_t1_ParamLimits

0x824f,	// (0x00016d8f) list_medium_line_t1

0xd28a,	// (0x0001bdca) list_medium_line_x2_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x2_g1

0x1482,	// (0x0000ffc2) list_medium_line_x2_g2_ParamLimits

0x1482,	// (0x0000ffc2) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001e87d) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001e87d) list_medium_line_x2_g

0xe5ff,	// (0x0001d13f) list_medium_line_x2_t1_ParamLimits

0xe5ff,	// (0x0001d13f) list_medium_line_x2_t1

0xd28a,	// (0x0001bdca) list_medium_line_x3_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x3_g1

0x1482,	// (0x0000ffc2) list_medium_line_x3_g2_ParamLimits

0x1482,	// (0x0000ffc2) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001e87d) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001e87d) list_medium_line_x3_g

0xe5ff,	// (0x0001d13f) list_medium_line_x3_t1_ParamLimits

0xe5ff,	// (0x0001d13f) list_medium_line_x3_t1

0xe615,	// (0x0001d155) thumb_sp_fs_scroll_pane_g1

0xe61e,	// (0x0001d15e) thumb_sp_fs_scroll_pane_g2

0xe627,	// (0x0001d167) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001e882) thumb_sp_fs_scroll_pane_g

0xe615,	// (0x0001d155) bg_sp_fs_scroll_pane_g1

0xe61e,	// (0x0001d15e) bg_sp_fs_scroll_pane_g2

0xe627,	// (0x0001d167) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001e882) bg_sp_fs_scroll_pane_g

0xd28a,	// (0x0001bdca) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd28a,	// (0x0001bdca) list_medium_line_x2_t3_g4_g1

0x1500,	// (0x00010040) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1500,	// (0x00010040) list_medium_line_x2_t3_g4_g2

0x1482,	// (0x0000ffc2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1482,	// (0x0000ffc2) list_medium_line_x2_t3_g4_g3

0x148e,	// (0x0000ffce) list_medium_line_x2_t3_g4_g4_ParamLimits

0x148e,	// (0x0000ffce) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0001de0d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0001de0d) list_medium_line_x2_t3_g4_g

0x8264,	// (0x00016da4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8264,	// (0x00016da4) list_medium_line_x2_t3_g4_t1

0x827e,	// (0x00016dbe) list_medium_line_x2_t3_g4_t2_ParamLimits

0x827e,	// (0x00016dbe) list_medium_line_x2_t3_g4_t2

0x14c3,	// (0x00010003) list_medium_line_x2_t3_g4_t3_ParamLimits

0x14c3,	// (0x00010003) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001e889) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001e889) list_medium_line_x2_t3_g4_t

0x68eb,	// (0x0001542b) list_medium_line_g2_g1_ParamLimits

0x68eb,	// (0x0001542b) list_medium_line_g2_g1

0x68f7,	// (0x00015437) list_medium_line_g2_g2_ParamLimits

0x68f7,	// (0x00015437) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0001e546) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0001e546) list_medium_line_g2_g

0x8298,	// (0x00016dd8) list_medium_line_g2_t1_ParamLimits

0x8298,	// (0x00016dd8) list_medium_line_g2_t1

0x68eb,	// (0x0001542b) list_medium_line_t3_g2_g1_ParamLimits

0x68eb,	// (0x0001542b) list_medium_line_t3_g2_g1

0x68f7,	// (0x00015437) list_medium_line_t3_g2_g2_ParamLimits

0x68f7,	// (0x00015437) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0001e546) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0001e546) list_medium_line_t3_g2_g

0x82ad,	// (0x00016ded) list_medium_line_t3_g2_t1_ParamLimits

0x82ad,	// (0x00016ded) list_medium_line_t3_g2_t1

0x82c7,	// (0x00016e07) list_medium_line_t3_g2_t2_ParamLimits

0x82c7,	// (0x00016e07) list_medium_line_t3_g2_t2

0x82dc,	// (0x00016e1c) list_medium_line_t3_g2_t3_ParamLimits

0x82dc,	// (0x00016e1c) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001e890) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001e890) list_medium_line_t3_g2_t

0x7f71,	// (0x00016ab1) list_medium_line_right_icon_g1

0x82f6,	// (0x00016e36) list_medium_line_right_icon_t1

0x68eb,	// (0x0001542b) list_medium_line_t2_g1_ParamLimits

0x68eb,	// (0x0001542b) list_medium_line_t2_g1

0x8304,	// (0x00016e44) list_medium_line_t2_t1_ParamLimits

0x8304,	// (0x00016e44) list_medium_line_t2_t1

0x831e,	// (0x00016e5e) list_medium_line_t2_t2_ParamLimits

0x831e,	// (0x00016e5e) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001e897) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001e897) list_medium_line_t2_t

0x68eb,	// (0x0001542b) list_medium_line_t3_g1_ParamLimits

0x68eb,	// (0x0001542b) list_medium_line_t3_g1

0x8337,	// (0x00016e77) list_medium_line_t3_t1_ParamLimits

0x8337,	// (0x00016e77) list_medium_line_t3_t1

0x834e,	// (0x00016e8e) list_medium_line_t3_t2_ParamLimits

0x834e,	// (0x00016e8e) list_medium_line_t3_t2

0x8363,	// (0x00016ea3) list_medium_line_t3_t3_ParamLimits

0x8363,	// (0x00016ea3) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001e89c) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001e89c) list_medium_line_t3_t

0x68eb,	// (0x0001542b) list_medium_line_g3_g1_ParamLimits

0x68eb,	// (0x0001542b) list_medium_line_g3_g1

0x8375,	// (0x00016eb5) list_medium_line_g3_g2_ParamLimits

0x8375,	// (0x00016eb5) list_medium_line_g3_g2

0x68f7,	// (0x00015437) list_medium_line_g3_g3_ParamLimits

0x68f7,	// (0x00015437) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001e8a3) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001e8a3) list_medium_line_g3_g

0x8381,	// (0x00016ec1) list_medium_line_g3_t1_ParamLimits

0x8381,	// (0x00016ec1) list_medium_line_g3_t1

0x68eb,	// (0x0001542b) list_medium_line_t2_g3_g1_ParamLimits

0x68eb,	// (0x0001542b) list_medium_line_t2_g3_g1

0x8375,	// (0x00016eb5) list_medium_line_t2_g3_g2_ParamLimits

0x8375,	// (0x00016eb5) list_medium_line_t2_g3_g2

0x68f7,	// (0x00015437) list_medium_line_t2_g3_g3_ParamLimits

0x68f7,	// (0x00015437) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001e8a3) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001e8a3) list_medium_line_t2_g3_g

0x8396,	// (0x00016ed6) list_medium_line_t2_g3_t1_ParamLimits

0x8396,	// (0x00016ed6) list_medium_line_t2_g3_t1

0x83b0,	// (0x00016ef0) list_medium_line_t2_g3_t2_ParamLimits

0x83b0,	// (0x00016ef0) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001e8aa) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001e8aa) list_medium_line_t2_g3_t

0x68eb,	// (0x0001542b) list_medium_line_t3_g3_g1_ParamLimits

0x68eb,	// (0x0001542b) list_medium_line_t3_g3_g1

0x8375,	// (0x00016eb5) list_medium_line_t3_g3_g2_ParamLimits

0x8375,	// (0x00016eb5) list_medium_line_t3_g3_g2

0x68f7,	// (0x00015437) list_medium_line_t3_g3_g3_ParamLimits

0x68f7,	// (0x00015437) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001e8a3) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001e8a3) list_medium_line_t3_g3_g

0x83cb,	// (0x00016f0b) list_medium_line_t3_g3_t1_ParamLimits

0x83cb,	// (0x00016f0b) list_medium_line_t3_g3_t1

0x83e4,	// (0x00016f24) list_medium_line_t3_g3_t2_ParamLimits

0x83e4,	// (0x00016f24) list_medium_line_t3_g3_t2

0x83fa,	// (0x00016f3a) list_medium_line_t3_g3_t3_ParamLimits

0x83fa,	// (0x00016f3a) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001e8af) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001e8af) list_medium_line_t3_g3_t

0x8121,	// (0x00016c61) list_medium_line_right_iconx2_g1

0x7f71,	// (0x00016ab1) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001e8b6) list_medium_line_right_iconx2_g

0x8414,	// (0x00016f54) list_medium_line_right_iconx2_t1

0x8121,	// (0x00016c61) list_medium_line_t2_right_iconx2_g1

0x7f71,	// (0x00016ab1) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001e8b6) list_medium_line_t2_right_iconx2_g

0x8422,	// (0x00016f62) list_medium_line_t2_right_iconx2_t1

0x8432,	// (0x00016f72) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001e8bb) list_medium_line_t2_right_iconx2_t

0x8444,	// (0x00016f84) list_medium_line_x4_t4_t1

0x8452,	// (0x00016f92) list_medium_line_x4_t4_t2

0x8462,	// (0x00016fa2) list_medium_line_x4_t4_t3

0x8472,	// (0x00016fb2) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001e8c0) list_medium_line_x4_t4_t

0x84c5,	// (0x00017005) tport_appsw_pane_ParamLimits

0x84c5,	// (0x00017005) tport_appsw_pane

0x84dd,	// (0x0001701d) tport_contact_pane_ParamLimits

0x84dd,	// (0x0001701d) tport_contact_pane

0x84f5,	// (0x00017035) tport_listscroll_pane_ParamLimits

0x84f5,	// (0x00017035) tport_listscroll_pane

0x850f,	// (0x0001704f) cell_tport_appsw_pane_ParamLimits

0x850f,	// (0x0001704f) cell_tport_appsw_pane

0xd1dc,	// (0x0001bd1c) tport_appsw_pane_g1_ParamLimits

0xd1dc,	// (0x0001bd1c) tport_appsw_pane_g1

0xe630,	// (0x0001d170) tport_contact_pane_g1

0xdef1,	// (0x0001ca31) tport_contact_pane_t1

0xe639,	// (0x0001d179) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001e8c9) tport_contact_pane_t

0xe647,	// (0x0001d187) list_tport_pane

0xe650,	// (0x0001d190) scroll_pane_cp_030

0x8557,	// (0x00017097) cell_tport_appsw_pane_g1

0x8567,	// (0x000170a7) cell_tport_appsw_pane_t1

0x9603,	// (0x00018143) grid_highlight_pane_cp019

0x8575,	// (0x000170b5) list_tport_double_graphic_pane_ParamLimits

0x8575,	// (0x000170b5) list_tport_double_graphic_pane

0x9673,	// (0x000181b3) list_highlight_pane_cp023_ParamLimits

0x9673,	// (0x000181b3) list_highlight_pane_cp023

0x8582,	// (0x000170c2) list_tport_double_graphic_pane_g1_ParamLimits

0x8582,	// (0x000170c2) list_tport_double_graphic_pane_g1

0x858f,	// (0x000170cf) list_tport_double_graphic_pane_t1_ParamLimits

0x858f,	// (0x000170cf) list_tport_double_graphic_pane_t1

0x85a4,	// (0x000170e4) list_tport_double_graphic_pane_t2_ParamLimits

0x85a4,	// (0x000170e4) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001e8d5) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001e8d5) list_tport_double_graphic_pane_t

0x9603,	// (0x00018143) main_cale_note_pane

0x5fe7,	// (0x00014b27) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5fe7,	// (0x00014b27) cell_vitu2_function_top_wide_pane_cp01

0x7ac0,	// (0x00016600) wait_bar_pane_cp05_ParamLimits

0x9673,	// (0x000181b3) listscroll_cmail_pane

0xe659,	// (0x0001d199) list_cmail_pane

0xd4e8,	// (0x0001c028) list_cmail_body_pane

0x85b6,	// (0x000170f6) list_single_cmail_header_caption_pane

0x85cc,	// (0x0001710c) list_single_cmail_header_detail_pane_ParamLimits

0x85cc,	// (0x0001710c) list_single_cmail_header_detail_pane

0xe669,	// (0x0001d1a9) list_single_cmail_header_caption_pane_t1

0x8600,	// (0x00017140) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8600,	// (0x00017140) list_single_cmail_header_detail_pane_g1

0xe677,	// (0x0001d1b7) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe677,	// (0x0001d1b7) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001e8da) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001e8da) list_single_cmail_header_detail_pane_g

0x8618,	// (0x00017158) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8618,	// (0x00017158) list_single_cmail_header_detail_pane_t1

0x8656,	// (0x00017196) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8656,	// (0x00017196) list_single_cmail_header_editor_pane_bg

0xe092,	// (0x0001cbd2) list_cmail_body_pane_g1

0xe6b4,	// (0x0001d1f4) list_cmail_body_pane_t1

0xd248,	// (0x0001bd88) list_single_cmail_header_editor_pane_bg_g1

0xa271,	// (0x00018db1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd258,	// (0x0001bd98) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd250,	// (0x0001bd90) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd535,	// (0x0001c075) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2ba,	// (0x0001bdfa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2aa,	// (0x0001bdea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2b2,	// (0x0001bdf2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa251,	// (0x00018d91) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x866f,	// (0x000171af) calenote_gesture_pane_ParamLimits

0x866f,	// (0x000171af) calenote_gesture_pane

0x868f,	// (0x000171cf) calenote_window_pane_ParamLimits

0x868f,	// (0x000171cf) calenote_window_pane

0xe6c2,	// (0x0001d202) popup_note_window_cp01

0x86ab,	// (0x000171eb) calenote_swipe_1_pane_ParamLimits

0x86ab,	// (0x000171eb) calenote_swipe_1_pane

0x7f13,	// (0x00016a53) calenote_swipe_2_pane_ParamLimits

0x7f13,	// (0x00016a53) calenote_swipe_2_pane

0xe3e1,	// (0x0001cf21) calenote_swipe_1_pane_g1_ParamLimits

0xe3e1,	// (0x0001cf21) calenote_swipe_1_pane_g1

0xe3ee,	// (0x0001cf2e) calenote_swipe_1_pane_g2_ParamLimits

0xe3ee,	// (0x0001cf2e) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0001e809) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0001e809) calenote_swipe_1_pane_g

0xe6d4,	// (0x0001d214) calenote_swipe_1_pane_t1_ParamLimits

0xe6d4,	// (0x0001d214) calenote_swipe_1_pane_t1

0xe3e1,	// (0x0001cf21) calenote_swipe_2_pane_g1_ParamLimits

0xe3e1,	// (0x0001cf21) calenote_swipe_2_pane_g1

0xe6f3,	// (0x0001d233) calenote_swipe_2_pane_g2_ParamLimits

0xe6f3,	// (0x0001d233) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001e8e6) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001e8e6) calenote_swipe_2_pane_g

0xe6ff,	// (0x0001d23f) calenote_swipe_2_pane_t1_ParamLimits

0xe6ff,	// (0x0001d23f) calenote_swipe_2_pane_t1

0x9603,	// (0x00018143) main_mup_navstr_pane

0x4cc2,	// (0x00013802) main_mup3_pane_t7_ParamLimits

0x4cc2,	// (0x00013802) main_mup3_pane_t7

0xcd89,	// (0x0001b8c9) main_mp4_pane_g6_ParamLimits

0xcd89,	// (0x0001b8c9) main_mp4_pane_g6

0xcfb1,	// (0x0001baf1) main_image3_pane_t4_ParamLimits

0xcfb1,	// (0x0001baf1) main_image3_pane_t4

0x86c0,	// (0x00017200) popup_navstr_preview_pane_ParamLimits

0x86c0,	// (0x00017200) popup_navstr_preview_pane

0x86d4,	// (0x00017214) scroll_navstr_pane_ParamLimits

0x86d4,	// (0x00017214) scroll_navstr_pane

0x9603,	// (0x00018143) bg_popup_preview_window_pane_cp04

0xe726,	// (0x0001d266) popup_navstr_preview_pane_t1

0x86e8,	// (0x00017228) scroll_navstr_pane_g1_ParamLimits

0x86e8,	// (0x00017228) scroll_navstr_pane_g1

0x86fc,	// (0x0001723c) scroll_navstr_pane_t1_ParamLimits

0x86fc,	// (0x0001723c) scroll_navstr_pane_t1

0xe6cb,	// (0x0001d20b) bg_button_pane_cp014

0xe6cb,	// (0x0001d20b) bg_button_pane_cp030

0x7db1,	// (0x000168f1) list_double_fisheye_pane_g4_ParamLimits

0x7db1,	// (0x000168f1) list_double_fisheye_pane_g4

0x7dbd,	// (0x000168fd) list_double_fisheye_pane_g5_ParamLimits

0x7dbd,	// (0x000168fd) list_double_fisheye_pane_g5

0xd296,	// (0x0001bdd6) sp_fs_scroll_pane_cp03

0xe4c8,	// (0x0001d008) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe4d4,	// (0x0001d014) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0001e826) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe4e0,	// (0x0001d020) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe661,	// (0x0001d1a1) sp_fs_scroll_pane_cp02

0x9f46,	// (0x00018a86) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9f46,	// (0x00018a86) popup_sp_fs_calendar_preview_list_single_pane

0x9603,	// (0x00018143) main_cam6_pano_pane

0x9673,	// (0x000181b3) main_mup3_pane_ParamLimits

0x9603,	// (0x00018143) main_phacti_pane

0x7993,	// (0x000164d3) bg_button_pane_cp11

0x79ad,	// (0x000164ed) main_mobtv_info_pane_g2_ParamLimits

0x79ad,	// (0x000164ed) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0001e786) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0001e786) main_mobtv_info_pane_g

0x7b8a,	// (0x000166ca) sc_clock_pane_t5_ParamLimits

0x7b8a,	// (0x000166ca) sc_clock_pane_t5

0x7c1c,	// (0x0001675c) main_radioblah_pane_g1_ParamLimits

0xe324,	// (0x0001ce64) main_radioblah_pane_t3_ParamLimits

0xe324,	// (0x0001ce64) main_radioblah_pane_t3

0xe33c,	// (0x0001ce7c) main_radioblah_pane_t4_ParamLimits

0xe33c,	// (0x0001ce7c) main_radioblah_pane_t4

0x7c44,	// (0x00016784) main_radioblah_text_pane_ParamLimits

0x7c44,	// (0x00016784) main_radioblah_text_pane

0x7c56,	// (0x00016796) main_radioblah_info_pane_g1_ParamLimits

0x7cef,	// (0x0001682f) main_radioblah_info_pane_t4_ParamLimits

0x7cef,	// (0x0001682f) main_radioblah_info_pane_t4

0x9673,	// (0x000181b3) main_sp_fs_calendar_pane

0x8713,	// (0x00017253) main_phacti_pane_g1

0x871b,	// (0x0001725b) phacti_note_pane_ParamLimits

0x871b,	// (0x0001725b) phacti_note_pane

0xe73d,	// (0x0001d27d) phacti_term_pane_ParamLimits

0xe73d,	// (0x0001d27d) phacti_term_pane

0xe752,	// (0x0001d292) phacti_note_pane_t1_ParamLimits

0xe752,	// (0x0001d292) phacti_note_pane_t1

0xe769,	// (0x0001d2a9) phacti_term_pane_g1

0xe771,	// (0x0001d2b1) phacti_term_pane_t1_ParamLimits

0xe771,	// (0x0001d2b1) phacti_term_pane_t1

0xe79b,	// (0x0001d2db) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa072,	// (0x00018bb2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001e8f0) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7a3,	// (0x0001d2e3) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7a3,	// (0x0001d2e3) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7b8,	// (0x0001d2f8) aid_popup_sp_fs_bg_corner_pane

0xc414,	// (0x0001af54) popup_sp_fs_calendar_preview_bg_pane_g1

0x9603,	// (0x00018143) popup_sp_fs_calendar_preview_bg_pane

0xe7c0,	// (0x0001d300) popup_sp_fs_calendar_preview_list_pane

0xbef9,	// (0x0001aa39) bg_main_sp_fs_cale_pane_ParamLimits

0xbef9,	// (0x0001aa39) bg_main_sp_fs_cale_pane

0xe7d1,	// (0x0001d311) listscroll_cale_mrui_pane_ParamLimits

0xe7d1,	// (0x0001d311) listscroll_cale_mrui_pane

0xd30e,	// (0x0001be4e) listscroll_sp_fs_schedule_track_pane

0xe7e6,	// (0x0001d326) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7e6,	// (0x0001d326) main_sp_fs_ctrlbar_pane_cp01

0xe7f9,	// (0x0001d339) main_sp_fs_ribbon_pane

0xe801,	// (0x0001d341) popup_sp_fs_cale_preview_window

0x8790,	// (0x000172d0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8790,	// (0x000172d0) list_single_sp_fs_schedule_track_pane

0x9673,	// (0x000181b3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9673,	// (0x000181b3) bg_sp_fs_highlight_list_pane_cp03

0x87a3,	// (0x000172e3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x87a3,	// (0x000172e3) list_single_sp_fs_schedule_track_pane_g1

0x87af,	// (0x000172ef) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x87af,	// (0x000172ef) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001e8f5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001e8f5) list_single_sp_fs_schedule_track_pane_g

0x87bb,	// (0x000172fb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x87bb,	// (0x000172fb) list_single_sp_fs_schedule_track_pane_t1

0x87d5,	// (0x00017315) sp_fs_schedule_track_pane_ParamLimits

0x87d5,	// (0x00017315) sp_fs_schedule_track_pane

0xe813,	// (0x0001d353) sp_fs_schedule_track_pane_g1

0xe81b,	// (0x0001d35b) sp_fs_schedule_track_pane_g2

0xe823,	// (0x0001d363) sp_fs_schedule_track_pane_g3

0xe82b,	// (0x0001d36b) sp_fs_schedule_track_pane_g4

0xe833,	// (0x0001d373) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001e8fa) sp_fs_schedule_track_pane_g

0xd248,	// (0x0001bd88) bg_sp_fs_schedule_viewer_highlight_g1

0xa271,	// (0x00018db1) bg_sp_fs_schedule_viewer_highlight_g2

0xd250,	// (0x0001bd90) bg_sp_fs_schedule_viewer_highlight_g3

0xd258,	// (0x0001bd98) bg_sp_fs_schedule_viewer_highlight_g4

0xd535,	// (0x0001c075) bg_sp_fs_schedule_viewer_highlight_g5

0xd2aa,	// (0x0001bdea) bg_sp_fs_schedule_viewer_highlight_g6

0xd2b2,	// (0x0001bdf2) bg_sp_fs_schedule_viewer_highlight_g7

0xd2ba,	// (0x0001bdfa) bg_sp_fs_schedule_viewer_highlight_g8

0xa251,	// (0x00018d91) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001e905) bg_sp_fs_schedule_viewer_highlight_g

0x9603,	// (0x00018143) bg_main_sp_fs_ribbon_pane

0x87e6,	// (0x00017326) main_sp_fs_ribbon_pane_g1

0xe83b,	// (0x0001d37b) main_sp_fs_ribbon_pane_t1

0x87ef,	// (0x0001732f) main_sp_fs_ribbon_pane_t2

0xe84a,	// (0x0001d38a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001e918) main_sp_fs_ribbon_pane_t

0xe859,	// (0x0001d399) main_sp_fs_ribbon_scheduler_pane

0xe861,	// (0x0001d3a1) bg_main_sp_fs_ribbon_pane_g1

0xe86a,	// (0x0001d3aa) bg_main_sp_fs_ribbon_pane_g2

0xe873,	// (0x0001d3b3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001e91f) bg_main_sp_fs_ribbon_pane_g

0xe87b,	// (0x0001d3bb) main_sp_fs_ribbon_scheduler_pane_g1

0xe884,	// (0x0001d3c4) main_sp_fs_ribbon_scheduler_pane_g2

0xe88d,	// (0x0001d3cd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001e926) main_sp_fs_ribbon_scheduler_pane_g

0xe896,	// (0x0001d3d6) list_cale_mrui_pane

0x87fe,	// (0x0001733e) sp_fs_scroll_pane_cp07_ParamLimits

0x87fe,	// (0x0001733e) sp_fs_scroll_pane_cp07

0x881a,	// (0x0001735a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x881a,	// (0x0001735a) bg_sp_fs_schedule_viewer_highlight

0xe8a3,	// (0x0001d3e3) list_single_sp_fs_schedule_track_pane_cp01

0xe8ab,	// (0x0001d3eb) list_sp_fs_schedule_track_pane

0xe8b3,	// (0x0001d3f3) sp_fs_scroll_pane_cp06_ParamLimits

0xe8b3,	// (0x0001d3f3) sp_fs_scroll_pane_cp06

0xc414,	// (0x0001af54) bgmain_sp_fs_calendar_pane_g1

0x882a,	// (0x0001736a) list_single_cale_mrui_pane_ParamLimits

0x882a,	// (0x0001736a) list_single_cale_mrui_pane

0xe8c5,	// (0x0001d405) list_single_cale_mrui_row_pane_ParamLimits

0xe8c5,	// (0x0001d405) list_single_cale_mrui_row_pane

0xe8d2,	// (0x0001d412) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8d2,	// (0x0001d412) list_single_cale_mrui_row_pane_g1

0xe917,	// (0x0001d457) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe917,	// (0x0001d457) list_single_cale_mrui_row_pane_t1

0x884b,	// (0x0001738b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x884b,	// (0x0001738b) list_single_cale_mrui_row_pane_t2

0xe929,	// (0x0001d469) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe929,	// (0x0001d469) list_single_cale_mrui_row_pane_t3

0xe958,	// (0x0001d498) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe958,	// (0x0001d498) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001e934) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001e934) list_single_cale_mrui_row_pane_t

0x88b3,	// (0x000173f3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x88b3,	// (0x000173f3) list_single_cmail_header_editor_pane_bg_cp01

0x88d9,	// (0x00017419) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x88d9,	// (0x00017419) list_single_cmail_header_editor_pane_bg_cp02

0x88f9,	// (0x00017439) main_radioblah_text_pane_t1_ParamLimits

0x88f9,	// (0x00017439) main_radioblah_text_pane_t1

0xe9a1,	// (0x0001d4e1) cam6_indi_pane_cp01

0xe9a9,	// (0x0001d4e9) cam6_mode_pane_cp01

0xe9b1,	// (0x0001d4f1) cam6_pano_pane

0xe9ba,	// (0x0001d4fa) cam6_zoom_pane_cp01

0xe9c2,	// (0x0001d502) cam6_pano_image_pane

0xe9cd,	// (0x0001d50d) cam6_pano_pane_g1

0xe092,	// (0x0001cbd2) cam6_pano_pane_g2

0xe9d6,	// (0x0001d516) cam6_pano_pane_g3

0xe9df,	// (0x0001d51f) cam6_pano_pane_g4

0xc9ec,	// (0x0001b52c) cam6_pano_pane_g5

0xe9e8,	// (0x0001d528) cam6_pano_pane_g6

0xe987,	// (0x0001d4c7) cam6_pano_pane_g7

0xe9f2,	// (0x0001d532) cam6_pano_pane_g8

0xe9fb,	// (0x0001d53b) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001e93d) cam6_pano_pane_g

0x9603,	// (0x00018143) main_browser_tag_pane

0xe71e,	// (0x0001d25e) grid_navstr_albumart_pane

0xea06,	// (0x0001d546) cell_navstr_albumart_pane_ParamLimits

0xea06,	// (0x0001d546) cell_navstr_albumart_pane

0xea26,	// (0x0001d566) cell_navstr_albumart_pane_g1

0xbd0a,	// (0x0001a84a) cell_navstr_albumart_pane_g2

0xbd1a,	// (0x0001a85a) cell_navstr_albumart_pane_g3

0xbd12,	// (0x0001a852) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001e950) cell_navstr_albumart_pane_g

0x8913,	// (0x00017453) bt_list_pane_ParamLimits

0x8913,	// (0x00017453) bt_list_pane

0x8927,	// (0x00017467) bt_list_pane_t1

0x8936,	// (0x00017476) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001e959) bt_list_pane_t

0x9603,	// (0x00018143) main_cale_prevew_pane

0x8945,	// (0x00017485) popup_cale_preview_window_ParamLimits

0x8945,	// (0x00017485) popup_cale_preview_window

0x9673,	// (0x000181b3) bg_popup_preview_window_pane_cp05_ParamLimits

0x9673,	// (0x000181b3) bg_popup_preview_window_pane_cp05

0xea2e,	// (0x0001d56e) list_cale_preview_pane_ParamLimits

0xea2e,	// (0x0001d56e) list_cale_preview_pane

0x8960,	// (0x000174a0) list_double_cale_preview_pane_ParamLimits

0x8960,	// (0x000174a0) list_double_cale_preview_pane

0x8972,	// (0x000174b2) list_single_cale_preview_pane_ParamLimits

0x8972,	// (0x000174b2) list_single_cale_preview_pane

0x8988,	// (0x000174c8) list_single_cale_preview_pane_g1

0x8990,	// (0x000174d0) list_single_cale_preview_pane_t1_ParamLimits

0x8990,	// (0x000174d0) list_single_cale_preview_pane_t1

0x89a5,	// (0x000174e5) list_double_cale_preview_pane_g1

0x89ad,	// (0x000174ed) list_double_cale_preview_pane_t1_ParamLimits

0x89ad,	// (0x000174ed) list_double_cale_preview_pane_t1

0x89c2,	// (0x00017502) list_double_cale_preview_pane_t2_ParamLimits

0x89c2,	// (0x00017502) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001e95e) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001e95e) list_double_cale_preview_pane_t

0x9603,	// (0x00018143) main_ezdial_pane

0x9673,	// (0x000181b3) main_sp_fs_email_pane_ParamLimits

0x7f9b,	// (0x00016adb) cmail_ddmenu_btn01_pane_ParamLimits

0x7f9b,	// (0x00016adb) cmail_ddmenu_btn01_pane

0x7fae,	// (0x00016aee) cmail_ddmenu_btn02_pane_ParamLimits

0x7fae,	// (0x00016aee) cmail_ddmenu_btn02_pane

0x7fd1,	// (0x00016b11) cmail_ddmenu_btn03_pane_ParamLimits

0x7fd1,	// (0x00016b11) cmail_ddmenu_btn03_pane

0x7ff7,	// (0x00016b37) main_sp_fs_ctrlbar_pane_ParamLimits

0x801b,	// (0x00016b5b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd4e8,	// (0x0001c028) list_cmail_body_pane_ParamLimits

0x85f5,	// (0x00017135) bg_button_pane_cp12

0xe683,	// (0x0001d1c3) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe683,	// (0x0001d1c3) list_single_cmail_header_detail_pane_g3

0xe690,	// (0x0001d1d0) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe690,	// (0x0001d1d0) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001e8e1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001e8e1) list_single_cmail_header_detail_pane_t

0xe786,	// (0x0001d2c6) phacti_term_pane_t2_ParamLimits

0xe786,	// (0x0001d2c6) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001e8eb) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001e8eb) phacti_term_pane_t

0xea3a,	// (0x0001d57a) aid_size_list_single_double

0x89da,	// (0x0001751a) popup_ezdial_listscroll_window

0x89f6,	// (0x00017536) popup_number_entry_window_cp01

0xaa27,	// (0x00019567) bg_popup_call_pane_cp09

0xea46,	// (0x0001d586) ezdial_list_pane

0xea4e,	// (0x0001d58e) scroll_pane_cp23

0xbef9,	// (0x0001aa39) bg_button_pane_cp028_ParamLimits

0xbef9,	// (0x0001aa39) bg_button_pane_cp028

0x8a04,	// (0x00017544) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8a04,	// (0x00017544) cmail_ddmenu_btn01_pane_g1

0x8a10,	// (0x00017550) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8a10,	// (0x00017550) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001e963) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001e963) cmail_ddmenu_btn01_pane_g

0xea56,	// (0x0001d596) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea56,	// (0x0001d596) cmail_ddmenu_btn01_pane_t1

0xbef9,	// (0x0001aa39) bg_button_pane_cp029_ParamLimits

0xbef9,	// (0x0001aa39) bg_button_pane_cp029

0x8a1c,	// (0x0001755c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8a1c,	// (0x0001755c) cmail_ddmenu_btn02_pane_g1

0x8a34,	// (0x00017574) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8a34,	// (0x00017574) cmail_ddmenu_btn02_pane_t1

0x9673,	// (0x000181b3) bg_button_pane_cp031_ParamLimits

0x9673,	// (0x000181b3) bg_button_pane_cp031

0x8a1c,	// (0x0001755c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8a1c,	// (0x0001755c) cmail_ddmenu_btn03_pane_g1

0x8a34,	// (0x00017574) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8a34,	// (0x00017574) cmail_ddmenu_btn03_pane_t1

0x586b,	// (0x000143ab) cell_dialer2_keypad_pane_t1_ParamLimits

0x5885,	// (0x000143c5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5885,	// (0x000143c5) cell_dialer2_keypad_pane_t1_copy1

0x77fa,	// (0x0001633a) ncimui_group_button_pane

0x9673,	// (0x000181b3) main_sp_fs_calendar_pane_ParamLimits

0x85b6,	// (0x000170f6) list_single_cmail_header_caption_pane_ParamLimits

0xe7c8,	// (0x0001d308) aid_recal_txt_sm_pane

0x9603,	// (0x00018143) mian_recal_day_pane

0xe801,	// (0x0001d341) popup_sp_fs_cale_preview_window_ParamLimits

0xea6b,	// (0x0001d5ab) list_recal_day_pane

0xeaad,	// (0x0001d5ed) list_single_recal_day_pane_ParamLimits

0xeaad,	// (0x0001d5ed) list_single_recal_day_pane

0xeabf,	// (0x0001d5ff) list_single_recal_day_pane_g1_ParamLimits

0xeabf,	// (0x0001d5ff) list_single_recal_day_pane_g1

0xeacb,	// (0x0001d60b) list_single_recal_day_pane_g2_ParamLimits

0xeacb,	// (0x0001d60b) list_single_recal_day_pane_g2

0xeadb,	// (0x0001d61b) list_single_recal_day_pane_g3_ParamLimits

0xeadb,	// (0x0001d61b) list_single_recal_day_pane_g3

0x8a58,	// (0x00017598) list_single_recal_day_pane_g4_ParamLimits

0x8a58,	// (0x00017598) list_single_recal_day_pane_g4

0xeae7,	// (0x0001d627) list_single_recal_day_pane_g5_ParamLimits

0xeae7,	// (0x0001d627) list_single_recal_day_pane_g5

0xeaf7,	// (0x0001d637) list_single_recal_day_pane_g6_ParamLimits

0xeaf7,	// (0x0001d637) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001e972) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001e972) list_single_recal_day_pane_g

0xeb0b,	// (0x0001d64b) list_single_recal_day_pane_t1

0xeb1d,	// (0x0001d65d) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001e97d) list_single_recal_day_pane_t

0x8a78,	// (0x000175b8) ncimui_query_button_pane_ParamLimits

0x8a78,	// (0x000175b8) ncimui_query_button_pane

0x8a88,	// (0x000175c8) ncimui_query_button_pane_t1_ParamLimits

0x8a88,	// (0x000175c8) ncimui_query_button_pane_t1

0xeb2f,	// (0x0001d66f) ncimui_query_button_pane_t2_ParamLimits

0xeb2f,	// (0x0001d66f) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001e982) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001e982) ncimui_query_button_pane_t

0x8a9b,	// (0x000175db) query_button_pane_ParamLimits

0x8a9b,	// (0x000175db) query_button_pane

0x9603,	// (0x00018143) bg_button_pane_cp0028

0xeb42,	// (0x0001d682) query_button_pane_t1

0x38ef,	// (0x0001242f) main_tport_pane_ParamLimits

0x8482,	// (0x00016fc2) bg_popup_window_pane_cp01_ParamLimits

0x8482,	// (0x00016fc2) bg_popup_window_pane_cp01

0x849d,	// (0x00016fdd) heading_pane_cp08_ParamLimits

0x849d,	// (0x00016fdd) heading_pane_cp08

0x84b0,	// (0x00016ff0) heading_pane_cp07_ParamLimits

0x84b0,	// (0x00016ff0) heading_pane_cp07

0x8557,	// (0x00017097) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001e8ce) cell_tport_appsw_pane_g

0xaba8,	// (0x000196e8) input_candi_list_open_g1

0xa462,	// (0x00018fa2) list_cale_time_pane_g6_ParamLimits

0xa462,	// (0x00018fa2) list_cale_time_pane_g6

0x46ae,	// (0x000131ee) aid_size_touch_calib_1_ParamLimits

0x46ae,	// (0x000131ee) aid_size_touch_calib_1

0x46c0,	// (0x00013200) aid_size_touch_calib_2_ParamLimits

0x46c0,	// (0x00013200) aid_size_touch_calib_2

0x46d8,	// (0x00013218) aid_size_touch_calib_3_ParamLimits

0x46d8,	// (0x00013218) aid_size_touch_calib_3

0x46f6,	// (0x00013236) aid_size_touch_calib_4_ParamLimits

0x46f6,	// (0x00013236) aid_size_touch_calib_4

0x470e,	// (0x0001324e) main_touch_calib_button_group_pane_ParamLimits

0x470e,	// (0x0001324e) main_touch_calib_button_group_pane

0x4726,	// (0x00013266) main_touch_calib_pane_g1_ParamLimits

0x4738,	// (0x00013278) main_touch_calib_pane_g2_ParamLimits

0x474a,	// (0x0001328a) main_touch_calib_pane_g3_ParamLimits

0x475c,	// (0x0001329c) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0001e29c) main_touch_calib_pane_g_ParamLimits

0x476e,	// (0x000132ae) main_touch_calib_pane_t1_ParamLimits

0x4788,	// (0x000132c8) main_touch_calib_pane_t2_ParamLimits

0x47a2,	// (0x000132e2) main_touch_calib_pane_t3_ParamLimits

0x47b6,	// (0x000132f6) main_touch_calib_pane_t4_ParamLimits

0x47ca,	// (0x0001330a) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0001e2a5) main_touch_calib_pane_t_ParamLimits

0xc7ac,	// (0x0001b2ec) list_single_fp_cale_pane_g3_ParamLimits

0xc7ac,	// (0x0001b2ec) list_single_fp_cale_pane_g3

0x9673,	// (0x000181b3) bg_button_pane_cp012_ParamLimits

0x9673,	// (0x000181b3) bg_vkb2_func_pane_cp03_ParamLimits

0x68a1,	// (0x000153e1) cell_vitu2_function_top_pane_g1_ParamLimits

0x9673,	// (0x000181b3) bg_vkb2_func_pane_cp04_ParamLimits

0x7788,	// (0x000162c8) main_ncimui_button_group_pane_ParamLimits

0x7788,	// (0x000162c8) main_ncimui_button_group_pane

0x77e8,	// (0x00016328) main_ncimui_pane_t3_ParamLimits

0x77e8,	// (0x00016328) main_ncimui_pane_t3

0xe734,	// (0x0001d274) phacti_button_group_pane

0xea3a,	// (0x0001d57a) aid_size_list_single_double_ParamLimits

0x89da,	// (0x0001751a) popup_ezdial_listscroll_window_ParamLimits

0x89f6,	// (0x00017536) popup_number_entry_window_cp01_ParamLimits

0x8aae,	// (0x000175ee) phacti_button_pane_ParamLimits

0x8aae,	// (0x000175ee) phacti_button_pane

0x9603,	// (0x00018143) bg_button_pane_cp14

0xeb50,	// (0x0001d690) phacti_button_pane_t1

0x8abf,	// (0x000175ff) main_touch_calib_button_pane_ParamLimits

0x8abf,	// (0x000175ff) main_touch_calib_button_pane

0x9dd6,	// (0x00018916) bg_button_pane_cp18_ParamLimits

0x9dd6,	// (0x00018916) bg_button_pane_cp18

0xeb5e,	// (0x0001d69e) main_touch_calib_button_pane_t1_ParamLimits

0xeb5e,	// (0x0001d69e) main_touch_calib_button_pane_t1

0xeb74,	// (0x0001d6b4) main_touch_calib_button_pane_t2_ParamLimits

0xeb74,	// (0x0001d6b4) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001e987) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001e987) main_touch_calib_button_pane_t

0x9603,	// (0x00018143) cell_ncimui_button_pane

0x9603,	// (0x00018143) bg_button_pane_cp032

0xeb92,	// (0x0001d6d2) cell_ncimui_button_pane_t1

0xcf91,	// (0x0001bad1) image3_infobar_pane_ParamLimits

0xcf91,	// (0x0001bad1) image3_infobar_pane

0x7bb6,	// (0x000166f6) fs_bigclock_status_pane_ParamLimits

0x7bb6,	// (0x000166f6) fs_bigclock_status_pane

0x7bc3,	// (0x00016703) main_fs_bigclock_clock_pane_ParamLimits

0x7bc3,	// (0x00016703) main_fs_bigclock_clock_pane

0x7bdf,	// (0x0001671f) main_fs_bigclock_indi_pane_ParamLimits

0x7bdf,	// (0x0001671f) main_fs_bigclock_indi_pane

0x7bf8,	// (0x00016738) main_fs_bigclock_swipe_pane_ParamLimits

0x7bf8,	// (0x00016738) main_fs_bigclock_swipe_pane

0x9603,	// (0x00018143) main_fs_clock_dumped_data

0xe19f,	// (0x0001ccdf) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe19f,	// (0x0001ccdf) list_single_fs_bigclock_indicator_pane_g1

0xe1b9,	// (0x0001ccf9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1b9,	// (0x0001ccf9) list_single_fs_bigclock_indicator_pane_g2

0xe1d3,	// (0x0001cd13) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe1d3,	// (0x0001cd13) list_single_fs_bigclock_indicator_pane_g3

0xe1ed,	// (0x0001cd2d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1ed,	// (0x0001cd2d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0001e7ba) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0001e7ba) list_single_fs_bigclock_indicator_pane_g

0xe216,	// (0x0001cd56) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe216,	// (0x0001cd56) list_single_fs_bigclock_indicator_pane_t1

0xe23e,	// (0x0001cd7e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe23e,	// (0x0001cd7e) list_single_fs_bigclock_indicator_pane_t2

0xe266,	// (0x0001cda6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe266,	// (0x0001cda6) list_single_fs_bigclock_indicator_pane_t3

0xe28e,	// (0x0001cdce) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe28e,	// (0x0001cdce) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0001e7c5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0001e7c5) list_single_fs_bigclock_indicator_pane_t

0xeba0,	// (0x0001d6e0) image3_infobar_fav_pane_ParamLimits

0xeba0,	// (0x0001d6e0) image3_infobar_fav_pane

0xebb0,	// (0x0001d6f0) image3_infobar_loc_pane_ParamLimits

0xebb0,	// (0x0001d6f0) image3_infobar_loc_pane

0xebc4,	// (0x0001d704) image3_infobar_time_pane_ParamLimits

0xebc4,	// (0x0001d704) image3_infobar_time_pane

0xc414,	// (0x0001af54) image3_infobar_time_pane_g1

0xebd4,	// (0x0001d714) image3_infobar_time_pane_t1

0xc414,	// (0x0001af54) image3_infobar_loc_pane_g1

0xebe2,	// (0x0001d722) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001e98c) image3_infobar_loc_pane_g

0xebea,	// (0x0001d72a) image3_infobar_loc_pane_t1

0xc414,	// (0x0001af54) image3_infobar_fav_pane_g1

0xebf8,	// (0x0001d738) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001e991) image3_infobar_fav_pane_g

0xec00,	// (0x0001d740) fs_bigclock_status_battery_pane

0xec09,	// (0x0001d749) fs_bigclock_status_signal_pane

0xec12,	// (0x0001d752) fs_bigclock_status_title_pane

0xec1b,	// (0x0001d75b) fs_bigclock_status_signal_pane_g1

0xec24,	// (0x0001d764) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001e996) fs_bigclock_status_signal_pane_g

0xec2c,	// (0x0001d76c) fs_bigclock_status_battery_pane_g1

0xec35,	// (0x0001d775) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001e99b) fs_bigclock_status_battery_pane_g

0xec3d,	// (0x0001d77d) fs_bigclock_status_title_pane_t1

0xc414,	// (0x0001af54) main_fs_bigclock_clock_pane_g1

0x8ad4,	// (0x00017614) main_fs_bigclock_clock_pane_g2

0x8ad4,	// (0x00017614) main_fs_bigclock_clock_pane_g3

0x8ad4,	// (0x00017614) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001e9a0) main_fs_bigclock_clock_pane_g

0x8adc,	// (0x0001761c) main_fs_bigclock_clock_pane_t1

0x8aea,	// (0x0001762a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001e9a9) main_fs_bigclock_clock_pane_t

0xec4b,	// (0x0001d78b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec4b,	// (0x0001d78b) list_single_fs_bigclock_indicator_pane

0x8af9,	// (0x00017639) list_single_fs_bigclock_pane_ParamLimits

0x8af9,	// (0x00017639) list_single_fs_bigclock_pane

0xec65,	// (0x0001d7a5) main_fs_bigclock_indicator_pane_t1

0xec74,	// (0x0001d7b4) list_single_fs_bigclock_pane_g1

0xec7c,	// (0x0001d7bc) list_single_fs_bigclock_pane_t1

0xc414,	// (0x0001af54) main_fs_bigclock_swipe_pane_g1

0xecbf,	// (0x0001d7ff) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001e9ba) main_fs_bigclock_swipe_pane_g

0xecc7,	// (0x0001d807) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc7,	// (0x0001d807) main_fs_bigclock_swipe_pane_t1

0x272f,	// (0x0001126f) call_type_pane_ParamLimits

0x9603,	// (0x00018143) main_btmg_pane

0xe8fe,	// (0x0001d43e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8fe,	// (0x0001d43e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001e92d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001e92d) list_single_cale_mrui_row_pane_g

0xea94,	// (0x0001d5d4) list_recal_vselct_arw_lo_pane

0xea9c,	// (0x0001d5dc) list_recal_vselct_arw_up_pane

0xeaa4,	// (0x0001d5e4) list_recal_vselct_pane

0x8b5c,	// (0x0001769c) btmg_button_pane

0x8b66,	// (0x000176a6) main_btmg_pane_g1

0x9603,	// (0x00018143) bg_button_pane_cp044

0xece4,	// (0x0001d824) btmg_button_pane_t1

0xbee5,	// (0x0001aa25) aid_listscroll_gen

0x9673,	// (0x000181b3) main_cntbar_detail_pane

0xe659,	// (0x0001d199) list_cmail_folder_pane

0xd296,	// (0x0001bdd6) sp_fs_scroll_pane_cp03_ParamLimits

0x85b6,	// (0x000170f6) list_single_fs_dyc_pane_cp01_ParamLimits

0x85b6,	// (0x000170f6) list_single_fs_dyc_pane_cp01

0xecf2,	// (0x0001d832) aid_size_cmail_indent

0xecfb,	// (0x0001d83b) list_single_dyc_row_pane_cp01

0x8ba2,	// (0x000176e2) cntbar_detail_list_pane_ParamLimits

0x8ba2,	// (0x000176e2) cntbar_detail_list_pane

0x8bee,	// (0x0001772e) main_cntbar_detail_cont_pane_ParamLimits

0x8bee,	// (0x0001772e) main_cntbar_detail_cont_pane

0xd296,	// (0x0001bdd6) scroll_pane_cp032_ParamLimits

0xd296,	// (0x0001bdd6) scroll_pane_cp032

0x8c02,	// (0x00017742) cntbar_detail_list_event_pane_ParamLimits

0x8c02,	// (0x00017742) cntbar_detail_list_event_pane

0x8bb2,	// (0x000176f2) cntbar_detail_list_shct_pane

0xa2bf,	// (0x00018dff) aid_list_gen

0xed04,	// (0x0001d844) aid_scroll

0xed0d,	// (0x0001d84d) aid_size_touch_scroll_bar

0x6f4a,	// (0x00015a8a) aid_list_double

0x6f38,	// (0x00015a78) aid_list_single

0x6f38,	// (0x00015a78) aid_list_single_lg

0x8c12,	// (0x00017752) aid_list_z_g_a_sm

0x8c1a,	// (0x0001775a) aid_list_z_g_d

0x8c22,	// (0x00017762) aid_txt_z_prm

0x8c30,	// (0x00017770) aid_txt_z_prm_cp01

0x8c3e,	// (0x0001777e) aid_txt_z_sec

0x8c4c,	// (0x0001778c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8c4c,	// (0x0001778c) main_cntbar_detail_cont_pane_g1

0x8c60,	// (0x000177a0) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8c60,	// (0x000177a0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001e9bf) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001e9bf) main_cntbar_detail_cont_pane_g

0xed16,	// (0x0001d856) main_cntbar_detail_cont_pane_t1

0xed24,	// (0x0001d864) main_cntbar_detail_cont_pane_t2

0xed32,	// (0x0001d872) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001e9c4) main_cntbar_detail_cont_pane_t

0x8c70,	// (0x000177b0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8c70,	// (0x000177b0) cell_cntbar_detail_list_shct_pane

0xed40,	// (0x0001d880) cntbar_detail_list_shct_pane_g1

0xed49,	// (0x0001d889) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001e9cb) cntbar_detail_list_shct_pane_g

0x8c84,	// (0x000177c4) cntbar_detail_list_event_pane_g1_ParamLimits

0x8c84,	// (0x000177c4) cntbar_detail_list_event_pane_g1

0x8c90,	// (0x000177d0) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c90,	// (0x000177d0) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001e9d0) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001e9d0) cntbar_detail_list_event_pane_g

0x8cfc,	// (0x0001783c) cntbar_detail_list_event_pane_t1_ParamLimits

0x8cfc,	// (0x0001783c) cntbar_detail_list_event_pane_t1

0x8d11,	// (0x00017851) cntbar_detail_list_event_pane_t2_ParamLimits

0x8d11,	// (0x00017851) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001e9dd) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001e9dd) cntbar_detail_list_event_pane_t

0xc414,	// (0x0001af54) cell_cntbar_detail_list_shct_pane_g1

0x2a97,	// (0x000115d7) navi_pane_mv_g3

0x9673,	// (0x000181b3) main_cntbar_detail_pane_ParamLimits

0x9603,	// (0x00018143) main_notif_wgt_pane

0xcd23,	// (0x0001b863) aid_tch_main_mp4_pane_g4

0xcf25,	// (0x0001ba65) popup_slider_window_cp02

0xea8a,	// (0x0001d5ca) list_recal_day_event_pane

0x8b70,	// (0x000176b0) cntbar_detail_btn_pane_ParamLimits

0x8b70,	// (0x000176b0) cntbar_detail_btn_pane

0x8b89,	// (0x000176c9) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b89,	// (0x000176c9) cntbar_detail_btn_pane_cp01

0x8bb2,	// (0x000176f2) cntbar_detail_list_shct_pane_ParamLimits

0x8bc2,	// (0x00017702) cntbar_detail_pane_g1_ParamLimits

0x8bc2,	// (0x00017702) cntbar_detail_pane_g1

0x8bd2,	// (0x00017712) cntbar_detail_pane_t1_ParamLimits

0x8bd2,	// (0x00017712) cntbar_detail_pane_t1

0x8c9c,	// (0x000177dc) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c9c,	// (0x000177dc) cntbar_detail_list_event_pane_g3

0x8cb4,	// (0x000177f4) cntbar_detail_list_event_pane_g4_ParamLimits

0x8cb4,	// (0x000177f4) cntbar_detail_list_event_pane_g4

0x8ccc,	// (0x0001780c) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ccc,	// (0x0001780c) cntbar_detail_list_event_pane_g5

0x8ce4,	// (0x00017824) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ce4,	// (0x00017824) cntbar_detail_list_event_pane_g6

0x8d26,	// (0x00017866) cntbar_detail_list_event_pane_t3_ParamLimits

0x8d26,	// (0x00017866) cntbar_detail_list_event_pane_t3

0x8d38,	// (0x00017878) popup_notif_wgt_window_ParamLimits

0x8d38,	// (0x00017878) popup_notif_wgt_window

0x8d51,	// (0x00017891) popup_submenu_window_cp01_ParamLimits

0x8d51,	// (0x00017891) popup_submenu_window_cp01

0xaa27,	// (0x00019567) bg_popup_window_pane_cp10

0xed52,	// (0x0001d892) listscroll_notif_wgt_pane

0xed64,	// (0x0001d8a4) list_notif_wgt_window

0xed6d,	// (0x0001d8ad) scroll_pane_cp033

0x8a78,	// (0x000175b8) list_notif_wgt_row_pane_ParamLimits

0x8a78,	// (0x000175b8) list_notif_wgt_row_pane

0xed76,	// (0x0001d8b6) aid_size_list_notif_wgt_del

0xed83,	// (0x0001d8c3) list_notif_wgt_row_pane_g1

0xed8f,	// (0x0001d8cf) list_notif_wgt_row_pane_g2

0xed9b,	// (0x0001d8db) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001e9e4) list_notif_wgt_row_pane_g

0xeda8,	// (0x0001d8e8) list_notif_wgt_row_pane_t1

0xedbd,	// (0x0001d8fd) list_notif_wgt_row_pane_t2

0xedcf,	// (0x0001d90f) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001e9eb) list_notif_wgt_row_pane_t

0xd55d,	// (0x0001c09d) list_recal_day_event_pane_g1

0xede1,	// (0x0001d921) list_recal_day_event_pane_t1

0x9603,	// (0x00018143) bg_button_pane_cp045

0x8d67,	// (0x000178a7) cntbar_detail_btn_pane_t1

0xbef9,	// (0x0001aa39) main_callh_pane_ParamLimits

0xbef9,	// (0x0001aa39) main_callh_pane

0x9603,	// (0x00018143) main_coverflow0_pane

0x9603,	// (0x00018143) main_wgtman_pane

0x7c06,	// (0x00016746) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7c06,	// (0x00016746) main_fs_bigclock_unlock_btn_pane

0x854f,	// (0x0001708f) bg_button_pane_cp16

0x855f,	// (0x0001709f) cell_tport_appsw_pane_g3

0x8d75,	// (0x000178b5) cf0_flow_pane_ParamLimits

0x8d75,	// (0x000178b5) cf0_flow_pane

0xedf0,	// (0x0001d930) listscroll_cf0_pane

0xedfb,	// (0x0001d93b) main_cf0_pane_g1

0x8d8a,	// (0x000178ca) main_cf0_pane_t1_ParamLimits

0x8d8a,	// (0x000178ca) main_cf0_pane_t1

0x8da1,	// (0x000178e1) main_cf0_pane_t2_ParamLimits

0x8da1,	// (0x000178e1) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001e9f7) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001e9f7) main_cf0_pane_t

0xee0d,	// (0x0001d94d) scroll_pane_cp11

0x8db8,	// (0x000178f8) cf0_flow_pane_g1

0x8dc0,	// (0x00017900) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001e9fc) cf0_flow_pane_g

0x8dc8,	// (0x00017908) cf0_flow_pane_t1

0x9603,	// (0x00018143) main_call6_pane

0x9603,	// (0x00018143) main_calllock_pane

0x8dd6,	// (0x00017916) call6_btn_grp_pane_ParamLimits

0x8dd6,	// (0x00017916) call6_btn_grp_pane

0x8df0,	// (0x00017930) call6_pane_g1_ParamLimits

0x8df0,	// (0x00017930) call6_pane_g1

0x8e05,	// (0x00017945) popup_call6_1st_window_ParamLimits

0x8e05,	// (0x00017945) popup_call6_1st_window

0x8e16,	// (0x00017956) popup_call6_2nd_window_ParamLimits

0x8e16,	// (0x00017956) popup_call6_2nd_window

0x8e27,	// (0x00017967) cell_call6_btn_pane_ParamLimits

0x8e27,	// (0x00017967) cell_call6_btn_pane

0xaa27,	// (0x00019567) bg_popup_call2_in_pane_cp03

0xee18,	// (0x0001d958) popup_call6_1st_window_g1

0xee20,	// (0x0001d960) popup_call6_1st_window_g2

0xee28,	// (0x0001d968) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001ea01) popup_call6_1st_window_g

0xee30,	// (0x0001d970) popup_call6_1st_window_t1

0xee3f,	// (0x0001d97f) popup_call6_1st_window_t2

0xee4f,	// (0x0001d98f) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001ea08) popup_call6_1st_window_t

0xaa27,	// (0x00019567) bg_popup_call2_in_pane_cp04

0xee18,	// (0x0001d958) popup_call6_2nd_window_g1

0xee20,	// (0x0001d960) popup_call6_2nd_window_g2

0xee28,	// (0x0001d968) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001ea01) popup_call6_2nd_window_g

0xee30,	// (0x0001d970) popup_call6_2nd_window_t1

0x9603,	// (0x00018143) bg_button_pane_cp15

0xee5f,	// (0x0001d99f) cell_call6_btn_pane_g1

0xee68,	// (0x0001d9a8) cell_call6_btn_pane_t1

0x8e3b,	// (0x0001797b) listscroll_wgtman_pane_ParamLimits

0x8e3b,	// (0x0001797b) listscroll_wgtman_pane

0x8e5e,	// (0x0001799e) wgtman_btn_pane_ParamLimits

0x8e5e,	// (0x0001799e) wgtman_btn_pane

0xa8de,	// (0x0001941e) aid_scroll_copy1

0xee77,	// (0x0001d9b7) list_wgtman_pane

0x8ea1,	// (0x000179e1) wgtman_btn_pane_g1_ParamLimits

0x8ea1,	// (0x000179e1) wgtman_btn_pane_g1

0x8ecd,	// (0x00017a0d) wgtman_btn_pane_t1_ParamLimits

0x8ecd,	// (0x00017a0d) wgtman_btn_pane_t1

0xee81,	// (0x0001d9c1) wgtman_btn_pane_t2_ParamLimits

0xee81,	// (0x0001d9c1) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001ea0f) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001ea0f) wgtman_btn_pane_t

0x8f0a,	// (0x00017a4a) listrow_wgtman_pane_ParamLimits

0x8f0a,	// (0x00017a4a) listrow_wgtman_pane

0x8f1c,	// (0x00017a5c) listrow_wgtman_pane_g1

0x8f29,	// (0x00017a69) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001ea14) listrow_wgtman_pane_g

0x8f47,	// (0x00017a87) listrow_wgtman_pane_t1

0x8f5f,	// (0x00017a9f) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001ea19) listrow_wgtman_pane_t

0x8f85,	// (0x00017ac5) wait_bar_pane_cp09

0xee98,	// (0x0001d9d8) main_calllock_btn_pane

0xeea2,	// (0x0001d9e2) main_calllock_pane_g1

0x9603,	// (0x00018143) bg_button_pane_cp17

0xeeae,	// (0x0001d9ee) main_calllock_btn_pane_g1

0xeeb7,	// (0x0001d9f7) main_calllock_btn_pane_t1

0x9603,	// (0x00018143) main_dialer3_pane

0x9603,	// (0x00018143) main_fmrd2_pane

0xc414,	// (0x0001af54) main_fs_bigclock_unlock_btn_pane_g1

0xeece,	// (0x0001da0e) main_fs_bigclock_unlock_btn_pane_t1

0x8f97,	// (0x00017ad7) area_fmrd2_info_pane_ParamLimits

0x8f97,	// (0x00017ad7) area_fmrd2_info_pane

0x8fa8,	// (0x00017ae8) area_fmrd2_visual_pane_ParamLimits

0x8fa8,	// (0x00017ae8) area_fmrd2_visual_pane

0x8fb6,	// (0x00017af6) fmrd2_indi_pane_ParamLimits

0x8fb6,	// (0x00017af6) fmrd2_indi_pane

0x8fc3,	// (0x00017b03) area_fmrd2_visual_pane_g1

0x8fcb,	// (0x00017b0b) area_fmrd2_visual_pane_t1

0x8fdb,	// (0x00017b1b) area_fmrd2_visual_pane_t2

0x8feb,	// (0x00017b2b) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001ea23) area_fmrd2_visual_pane_t

0x8ffb,	// (0x00017b3b) area_fmrd2_info_pane_g1

0x9003,	// (0x00017b43) area_fmrd2_info_pane_t1

0x9013,	// (0x00017b53) area_fmrd2_info_pane_t2

0x9023,	// (0x00017b63) area_fmrd2_info_pane_t3

0x9033,	// (0x00017b73) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001ea2a) area_fmrd2_info_pane_t

0x9041,	// (0x00017b81) fmrd2_indi_pane_t1

0x9051,	// (0x00017b91) fmrd2_indi_pane_t2

0x9061,	// (0x00017ba1) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001ea33) fmrd2_indi_pane_t

0xe1fc,	// (0x0001cd3c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe1fc,	// (0x0001cd3c) list_single_fs_bigclock_indicator_pane_g5

0xe2a3,	// (0x0001cde3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2a3,	// (0x0001cde3) list_single_fs_bigclock_indicator_pane_t5

0x872f,	// (0x0001726f) aid_cell_bcale_month_pane_ParamLimits

0x872f,	// (0x0001726f) aid_cell_bcale_month_pane

0x874d,	// (0x0001728d) bcale_month_pane_ParamLimits

0x874d,	// (0x0001728d) bcale_month_pane

0x8771,	// (0x000172b1) bcale_preview_pane_ParamLimits

0x8771,	// (0x000172b1) bcale_preview_pane

0xec7c,	// (0x0001d7bc) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9b,	// (0x0001d7db) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9b,	// (0x0001d7db) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001e9b5) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001e9b5) list_single_fs_bigclock_pane_t

0xeec6,	// (0x0001da06) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001ea1e) main_fs_bigclock_unlock_btn_pane_g

0x9071,	// (0x00017bb1) aid_dia3_key_size_ParamLimits

0x9071,	// (0x00017bb1) aid_dia3_key_size

0x9080,	// (0x00017bc0) aid_dia3_listrow_size_ParamLimits

0x9080,	// (0x00017bc0) aid_dia3_listrow_size

0x9095,	// (0x00017bd5) dia3_keypad_fun_pane_ParamLimits

0x9095,	// (0x00017bd5) dia3_keypad_fun_pane

0x90b1,	// (0x00017bf1) dia3_keypad_num_pane_ParamLimits

0x90b1,	// (0x00017bf1) dia3_keypad_num_pane

0x90cc,	// (0x00017c0c) dia3_listscroll_pane_ParamLimits

0x90cc,	// (0x00017c0c) dia3_listscroll_pane

0x90df,	// (0x00017c1f) dia3_numentry_pane_ParamLimits

0x90df,	// (0x00017c1f) dia3_numentry_pane

0xeedc,	// (0x0001da1c) dia3_list_pane

0xeee7,	// (0x0001da27) scroll_pane_cp12

0x9603,	// (0x00018143) bg_dia3_numentry_pane

0x90f3,	// (0x00017c33) dia3_numentry_pane_t1

0x9102,	// (0x00017c42) cell_dia3_key_num_pane

0x910a,	// (0x00017c4a) cell_dia3_key0_fun_pane_ParamLimits

0x910a,	// (0x00017c4a) cell_dia3_key0_fun_pane

0x911e,	// (0x00017c5e) cell_dia3_key1_fun_pane_ParamLimits

0x911e,	// (0x00017c5e) cell_dia3_key1_fun_pane

0x9136,	// (0x00017c76) dia3_listrow_pane

0xdf0c,	// (0x0001ca4c) bg_dia3_numentry_pane_g1

0x9603,	// (0x00018143) bg_button_pane_cp21

0xeef2,	// (0x0001da32) cell_dia3_key_num_pane_t1

0xef00,	// (0x0001da40) cell_dia3_key_num_pane_t2

0xef0f,	// (0x0001da4f) cell_dia3_key_num_pane_t3

0xef1e,	// (0x0001da5e) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001ea3a) cell_dia3_key_num_pane_t

0x9603,	// (0x00018143) bg_button_pane_cp19

0x9148,	// (0x00017c88) cell_dia3_key0_fun_pane_g1

0x9603,	// (0x00018143) bg_button_pane_cp20

0x9150,	// (0x00017c90) cell_dia3_key1_fun_pane_g1

0x9158,	// (0x00017c98) area_left_week_number_pane

0x9164,	// (0x00017ca4) area_top_day_name_pane

0x9177,	// (0x00017cb7) frame_month_view_pane

0xef2d,	// (0x0001da6d) grid_month_view_pane

0x918a,	// (0x00017cca) cell_top_day_name_pane_ParamLimits

0x918a,	// (0x00017cca) cell_top_day_name_pane

0x91b7,	// (0x00017cf7) cell_area_left_week_number_pane_ParamLimits

0x91b7,	// (0x00017cf7) cell_area_left_week_number_pane

0x91cb,	// (0x00017d0b) cell_month_view_pane_ParamLimits

0x91cb,	// (0x00017d0b) cell_month_view_pane

0xef3b,	// (0x0001da7b) frm_month_g1

0x91f8,	// (0x00017d38) frm_month_g2

0x920b,	// (0x00017d4b) frm_month_g3

0x921e,	// (0x00017d5e) frm_month_g4

0x9231,	// (0x00017d71) frm_month_g5

0x9244,	// (0x00017d84) frm_month_g6

0x9257,	// (0x00017d97) frm_month_g7

0xef48,	// (0x0001da88) frm_month_g8

0x926a,	// (0x00017daa) frm_month_g9

0x927a,	// (0x00017dba) frm_month_g10

0x928a,	// (0x00017dca) frm_month_g11

0x929a,	// (0x00017dda) frm_month_g12

0x92ac,	// (0x00017dec) frm_month_g13

0x92be,	// (0x00017dfe) frm_month_g14

0x92d2,	// (0x00017e12) frm_month_g15

0x92e6,	// (0x00017e26) frm_month_g16

0x000f,

0xff03,	// (0x0001ea43) frm_month_g

0xef55,	// (0x0001da95) cell_top_day_name_pane_t1

0x92fa,	// (0x00017e3a) cell_area_left_week_number_pane_g1

0x9306,	// (0x00017e46) cell_area_left_week_number_pane_t1

0xc680,	// (0x0001b1c0) cell_month_view_pane_g1

0x9319,	// (0x00017e59) cell_month_view_pane_t1

0x9603,	// (0x00018143) main_fps_pane

0xe490,	// (0x0001cfd0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe490,	// (0x0001cfd0) cmail_ddmenu_btn02_pane_cp1

0xe4ac,	// (0x0001cfec) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe4ac,	// (0x0001cfec) cmail_ddmenu_btn02_pane_cp2

0x8a28,	// (0x00017568) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8a28,	// (0x00017568) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001e968) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001e968) cmail_ddmenu_btn02_pane_g

0x8a46,	// (0x00017586) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8a46,	// (0x00017586) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001e96d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001e96d) cmail_ddmenu_btn02_pane_t

0x932c,	// (0x00017e6c) fps_text_pane_ParamLimits

0x932c,	// (0x00017e6c) fps_text_pane

0x9343,	// (0x00017e83) main_fps_pane_g1_ParamLimits

0x9343,	// (0x00017e83) main_fps_pane_g1

0x935d,	// (0x00017e9d) wait_bar_pane_cp010_ParamLimits

0x935d,	// (0x00017e9d) wait_bar_pane_cp010

0x936e,	// (0x00017eae) fps_text_pane_t1_ParamLimits

0x936e,	// (0x00017eae) fps_text_pane_t1

0xe98f,	// (0x0001d4cf) cam4_image_uncrop_pane_g1

0xe998,	// (0x0001d4d8) cam4_image_uncrop_pane_g2

0x5d11,	// (0x00014851) cam4_image_uncrop_pane_g3

0x5d1a,	// (0x0001485a) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0001e434) cam4_image_uncrop_pane_g

0x9136,	// (0x00017c76) dia3_listrow_pane_ParamLimits

0x9603,	// (0x00018143) main_phob2_pane

0x8520,	// (0x00017060) cell_tport_appsw_pane_cp02_ParamLimits

0x8520,	// (0x00017060) cell_tport_appsw_pane_cp02

0x8534,	// (0x00017074) cell_tport_appsw_pane_cp03_ParamLimits

0x8534,	// (0x00017074) cell_tport_appsw_pane_cp03

0x9603,	// (0x00018143) phob2_contact_card_pane

0x9603,	// (0x00018143) phob2_listscroll_pane

0xef68,	// (0x0001daa8) phob2_list_pane

0xef70,	// (0x0001dab0) scroll_pane_cp034

0x9386,	// (0x00017ec6) phob2_cc_data_pane_ParamLimits

0x9386,	// (0x00017ec6) phob2_cc_data_pane

0x93a5,	// (0x00017ee5) phob2_cc_listscroll_pane_ParamLimits

0x93a5,	// (0x00017ee5) phob2_cc_listscroll_pane

0x93c3,	// (0x00017f03) list_double_large_graphic_phob2_pane_ParamLimits

0x93c3,	// (0x00017f03) list_double_large_graphic_phob2_pane

0x93d5,	// (0x00017f15) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x93d5,	// (0x00017f15) list_double_large_graphic_phob2_pane_g1

0xef78,	// (0x0001dab8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef78,	// (0x0001dab8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001ea64) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001ea64) list_double_large_graphic_phob2_pane_g

0x93eb,	// (0x00017f2b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x93eb,	// (0x00017f2b) list_double_large_graphic_phob2_pane_t1

0x9400,	// (0x00017f40) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9400,	// (0x00017f40) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001ea69) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001ea69) list_double_large_graphic_phob2_pane_t

0x9603,	// (0x00018143) list_highlight_pane_cp024

0xef84,	// (0x0001dac4) phob2_cc_button_pane

0x9412,	// (0x00017f52) phob2_cc_data_pane_g1_ParamLimits

0x9412,	// (0x00017f52) phob2_cc_data_pane_g1

0x9427,	// (0x00017f67) phob2_cc_data_pane_g2_ParamLimits

0x9427,	// (0x00017f67) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001ea6e) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001ea6e) phob2_cc_data_pane_g

0x9439,	// (0x00017f79) phob2_cc_data_pane_t1_ParamLimits

0x9439,	// (0x00017f79) phob2_cc_data_pane_t1

0x9451,	// (0x00017f91) phob2_cc_data_pane_t2_ParamLimits

0x9451,	// (0x00017f91) phob2_cc_data_pane_t2

0x9469,	// (0x00017fa9) phob2_cc_data_pane_t3_ParamLimits

0x9469,	// (0x00017fa9) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001ea73) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001ea73) phob2_cc_data_pane_t

0xef8c,	// (0x0001dacc) phob2_cc_list_pane_ParamLimits

0xef8c,	// (0x0001dacc) phob2_cc_list_pane

0xd608,	// (0x0001c148) scroll_pane_cp035_ParamLimits

0xd608,	// (0x0001c148) scroll_pane_cp035

0x9673,	// (0x000181b3) bg_button_pane_cp033

0xef98,	// (0x0001dad8) phob2_cc_button_pane_g1

0xefa4,	// (0x0001dae4) phob2_cc_button_pane_t1

0xefb9,	// (0x0001daf9) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001ea7a) phob2_cc_button_pane_t

0x9481,	// (0x00017fc1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9481,	// (0x00017fc1) list_double_large_graphic_phob2_cc_pane

0x9493,	// (0x00017fd3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9493,	// (0x00017fd3) list_double_large_graphic_phob2_cc_pane_g1

0x949f,	// (0x00017fdf) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x949f,	// (0x00017fdf) list_double_large_graphic_phob2_cc_pane_g2

0x94ab,	// (0x00017feb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x94ab,	// (0x00017feb) list_double_large_graphic_phob2_cc_pane_g3

0x94b7,	// (0x00017ff7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x94b7,	// (0x00017ff7) list_double_large_graphic_phob2_cc_pane_g4

0x94c3,	// (0x00018003) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x94c3,	// (0x00018003) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001ea7f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001ea7f) list_double_large_graphic_phob2_cc_pane_g

0x94cf,	// (0x0001800f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x94cf,	// (0x0001800f) list_double_large_graphic_phob2_cc_pane_t1

0x94f8,	// (0x00018038) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x94f8,	// (0x00018038) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001ea8a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001ea8a) list_double_large_graphic_phob2_cc_pane_t

0xefcb,	// (0x0001db0b) list_highlight_pane_cp025_ParamLimits

0xefcb,	// (0x0001db0b) list_highlight_pane_cp025

0x9673,	// (0x000181b3) bg_button_pane_cp033_ParamLimits

0xef98,	// (0x0001dad8) phob2_cc_button_pane_g1_ParamLimits

0xefa4,	// (0x0001dae4) phob2_cc_button_pane_t1_ParamLimits

0xefb9,	// (0x0001daf9) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001ea7a) phob2_cc_button_pane_t_ParamLimits

0x05f7,	// (0x0000f137) popup_wgtman_window

0xd3a4,	// (0x0001bee4) scroll_pane_cp038

0x8e83,	// (0x000179c3) wgtman_btn_pane_cp_01_ParamLimits

0x8e83,	// (0x000179c3) wgtman_btn_pane_cp_01

0xefd9,	// (0x0001db19) wgtman_content_pane

0xefe2,	// (0x0001db22) wgtman_heading_pane

0x9603,	// (0x00018143) bg_heading_pane_cp02

0xefeb,	// (0x0001db2b) wgtman_heading_pane_g1

0xeff3,	// (0x0001db33) wgtman_heading_pane_t1

0xf001,	// (0x0001db41) scroll_pane_cp036

0xf009,	// (0x0001db49) wgtman_list_pane

0xf011,	// (0x0001db51) wgtman_list_pane_t1_ParamLimits

0xf011,	// (0x0001db51) wgtman_list_pane_t1

0xd0c6,	// (0x0001bc06) cam4_grid_pane

0x6a4a,	// (0x0001558a) bg_button_pane_cp015_ParamLimits

0x6a5c,	// (0x0001559c) bg_button_pane_cp016_ParamLimits

0x6a6f,	// (0x000155af) bg_button_pane_cp017_ParamLimits

0x6ac7,	// (0x00015607) popup_vitu2_query_window_g3_ParamLimits

0x6ac7,	// (0x00015607) popup_vitu2_query_window_g3

0x6b84,	// (0x000156c4) popup_vitu2_query_window_t6_ParamLimits

0x6b84,	// (0x000156c4) popup_vitu2_query_window_t6

0x6baf,	// (0x000156ef) popup_vitu2_query_window_t7_ParamLimits

0x6baf,	// (0x000156ef) popup_vitu2_query_window_t7

0xe98f,	// (0x0001d4cf) cam4_grid_pane_g1

0xe998,	// (0x0001d4d8) cam4_grid_pane_g2

0xf02b,	// (0x0001db6b) cam4_grid_pane_g3

0xf034,	// (0x0001db74) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001ea8f) cam4_grid_pane_g

0x15d9,	// (0x00010119) aid_placing_vt_slider_lsc_ParamLimits

0x18e4,	// (0x00010424) vidtel_button_pane_ParamLimits

0x18e4,	// (0x00010424) vidtel_button_pane

0xf03f,	// (0x0001db7f) bg_button_pane_cp034

0x9521,	// (0x00018061) vidtel_button_pane_g1

0xf049,	// (0x0001db89) vidtel_button_pane_t1

0xd511,	// (0x0001c051) aid_size_vtel_slider_touch

0xd608,	// (0x0001c148) scroll_pane_cp039

0xdf4a,	// (0x0001ca8a) ncim_query_button_pane_cp01_ParamLimits

0xdf69,	// (0x0001caa9) ncimui_query_pane_g1_ParamLimits

0x9673,	// (0x000181b3) input_focus_pane_cp012_ParamLimits

0xdf8e,	// (0x0001cace) ncim_query_entry_pane_t1_ParamLimits

0xd608,	// (0x0001c148) scroll_pane_cp039_ParamLimits

0x2a0b,	// (0x0001154b) navi_pane_bcale_mc_g1

0x2a13,	// (0x00011553) navi_pane_bcale_mc_t1

0xe4f5,	// (0x0001d035) main_sp_fs_email_pane_g1

0xe501,	// (0x0001d041) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0001e82b) main_sp_fs_email_pane_g

0xe90a,	// (0x0001d44a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe90a,	// (0x0001d44a) list_single_cale_mrui_row_pane_g3

0x8a6e,	// (0x000175ae) list_single_recal_day_pane_g5_event_pane

0xeb03,	// (0x0001d643) list_single_recal_day_pane_g7

0xf057,	// (0x0001db97) list_recal_day_event_pane_cp01

0xf060,	// (0x0001dba0) list_recal_vselct_arw_lo_pane_cp01

0xf068,	// (0x0001dba8) list_recal_vselct_arw_up_pane_cp01

0xf070,	// (0x0001dbb0) list_recal_vselct_pane_cp01

0xd55d,	// (0x0001c09d) list_recal_day_event_pane_cp01_g1

0xf07a,	// (0x0001dbba) list_recal_day_event_pane_cp01_t1

0xeb0b,	// (0x0001d64b) list_single_recal_day_pane_t1_ParamLimits

0xeb1d,	// (0x0001d65d) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001e97d) list_single_recal_day_pane_t_ParamLimits

0x9cef,	// (0x0001882f) bg_notes_pane_ParamLimits

0x9d9a,	// (0x000188da) list_notes_pane_ParamLimits

0x0940,	// (0x0000f480) scroll_pane_cp06_ParamLimits

0x9dd6,	// (0x00018916) main_notes_pane_ParamLimits

0x9603,	// (0x00018143) main_welc_pane

0x9529,	// (0x00018069) main_welc_body_pane_ParamLimits

0x9529,	// (0x00018069) main_welc_body_pane

0x9547,	// (0x00018087) main_welc_opti_pane_ParamLimits

0x9547,	// (0x00018087) main_welc_opti_pane

0x958c,	// (0x000180cc) main_welc_pane_t1_ParamLimits

0x958c,	// (0x000180cc) main_welc_pane_t1

0x95aa,	// (0x000180ea) main_welc_body_row_pane_ParamLimits

0x95aa,	// (0x000180ea) main_welc_body_row_pane

0xd27c,	// (0x0001bdbc) main_welc_opti_row_pane_ParamLimits

0xd27c,	// (0x0001bdbc) main_welc_opti_row_pane

0xf088,	// (0x0001dbc8) main_welc_opti_row_pane_g1

0xf090,	// (0x0001dbd0) main_welc_opti_row_pane_t1

0xf0a0,	// (0x0001dbe0) main_welc_body_row_pane_t1

0xed5c,	// (0x0001d89c) popup_notif_wgt_heading_pane

0xed76,	// (0x0001d8b6) aid_size_list_notif_wgt_del_ParamLimits

0xed83,	// (0x0001d8c3) list_notif_wgt_row_pane_g1_ParamLimits

0xed8f,	// (0x0001d8cf) list_notif_wgt_row_pane_g2_ParamLimits

0xed9b,	// (0x0001d8db) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001e9e4) list_notif_wgt_row_pane_g_ParamLimits

0xeda8,	// (0x0001d8e8) list_notif_wgt_row_pane_t1_ParamLimits

0xedbd,	// (0x0001d8fd) list_notif_wgt_row_pane_t2_ParamLimits

0xedcf,	// (0x0001d90f) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001e9eb) list_notif_wgt_row_pane_t_ParamLimits

0x8f1c,	// (0x00017a5c) listrow_wgtman_pane_g1_ParamLimits

0x8f29,	// (0x00017a69) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001ea14) listrow_wgtman_pane_g_ParamLimits

0x8f47,	// (0x00017a87) listrow_wgtman_pane_t1_ParamLimits

0x8f5f,	// (0x00017a9f) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001ea19) listrow_wgtman_pane_t_ParamLimits

0x8f85,	// (0x00017ac5) wait_bar_pane_cp09_ParamLimits

0x9603,	// (0x00018143) bg_popup_heading_pane_cp02

0xf0af,	// (0x0001dbef) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x0001dbf7) popup_notif_wgt_heading_pane_t1

0x9603,	// (0x00018143) main_vids_pane

0x9603,	// (0x00018143) vids_listscroll_pane

0x95be,	// (0x000180fe) scroll_pane_cp040

0x9603,	// (0x00018143) vids_list_pane

0x95c9,	// (0x00018109) vids_list_double_pane_ParamLimits

0x95c9,	// (0x00018109) vids_list_double_pane

0x95da,	// (0x0001811a) vids_list_double_pane_g1

0x95e3,	// (0x00018123) vids_list_double_pane_t1

0x95f3,	// (0x00018133) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001ea9d) vids_list_double_pane_t

0x9673,	// (0x000181b3) main_ncimui_pane_ParamLimits

0x779c,	// (0x000162dc) main_ncimui_pane_g1_ParamLimits

0x77a8,	// (0x000162e8) main_ncimui_pane_g2_ParamLimits

0x77a8,	// (0x000162e8) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0001e730) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0001e730) main_ncimui_pane_g

0x9562,	// (0x000180a2) main_welc_pane_g1_ParamLimits

0x9562,	// (0x000180a2) main_welc_pane_g1

0x9577,	// (0x000180b7) main_welc_pane_g2_ParamLimits

0x9577,	// (0x000180b7) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001ea98) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001ea98) main_welc_pane_g

0x9cef,	// (0x0001882f) listscroll_mce_pane_ParamLimits

0x2ae5,	// (0x00011625) wait_bar_pane_cp10

0xbeed,	// (0x0001aa2d) main_cale_day_pane_ParamLimits

0xbeed,	// (0x0001aa2d) main_cale_week_pane_ParamLimits

0x9cef,	// (0x0001882f) main_messa_pane_ParamLimits

0x504b,	// (0x00013b8b) main_clock2_btn_pane_ParamLimits

0x504b,	// (0x00013b8b) main_clock2_btn_pane

0xc834,	// (0x0001b374) main_clock2_btn_pane_cp01_ParamLimits

0xc834,	// (0x0001b374) main_clock2_btn_pane_cp01

0xe896,	// (0x0001d3d6) list_cale_mrui_pane_ParamLimits

0xee05,	// (0x0001d945) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001e9f2) main_cf0_pane_g

0x9158,	// (0x00017c98) area_left_week_number_pane_ParamLimits

0x9164,	// (0x00017ca4) area_top_day_name_pane_ParamLimits

0x9177,	// (0x00017cb7) frame_month_view_pane_ParamLimits

0xef2d,	// (0x0001da6d) grid_month_view_pane_ParamLimits

0xef3b,	// (0x0001da7b) frm_month_g1_ParamLimits

0x91f8,	// (0x00017d38) frm_month_g2_ParamLimits

0x920b,	// (0x00017d4b) frm_month_g3_ParamLimits

0x921e,	// (0x00017d5e) frm_month_g4_ParamLimits

0x9231,	// (0x00017d71) frm_month_g5_ParamLimits

0x9244,	// (0x00017d84) frm_month_g6_ParamLimits

0x9257,	// (0x00017d97) frm_month_g7_ParamLimits

0xef48,	// (0x0001da88) frm_month_g8_ParamLimits

0x926a,	// (0x00017daa) frm_month_g9_ParamLimits

0x927a,	// (0x00017dba) frm_month_g10_ParamLimits

0x928a,	// (0x00017dca) frm_month_g11_ParamLimits

0x929a,	// (0x00017dda) frm_month_g12_ParamLimits

0x92ac,	// (0x00017dec) frm_month_g13_ParamLimits

0x92be,	// (0x00017dfe) frm_month_g14_ParamLimits

0x92d2,	// (0x00017e12) frm_month_g15_ParamLimits

0x92e6,	// (0x00017e26) frm_month_g16_ParamLimits

0xff03,	// (0x0001ea43) frm_month_g_ParamLimits

0xef55,	// (0x0001da95) cell_top_day_name_pane_t1_ParamLimits

0x92fa,	// (0x00017e3a) cell_area_left_week_number_pane_g1_ParamLimits

0x9306,	// (0x00017e46) cell_area_left_week_number_pane_t1_ParamLimits

0xc680,	// (0x0001b1c0) cell_month_view_pane_g1_ParamLimits

0x9319,	// (0x00017e59) cell_month_view_pane_t1_ParamLimits

0x9ce7,	// (0x00018827) main_clock2_btn_pane_g1

0xf0c5,	// (0x0001dc05) main_clock2_btn_pane_t1

0x9673,	// (0x000181b3) listscroll_cmail_pane_ParamLimits

0xe4f5,	// (0x0001d035) main_sp_fs_email_pane_g1_ParamLimits

0xe501,	// (0x0001d041) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0001e82b) main_sp_fs_email_pane_g_ParamLimits

0xea6b,	// (0x0001d5ab) list_recal_day_pane_ParamLimits

0xea7c,	// (0x0001d5bc) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal

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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0006ea4b };

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
0xfb06,	// (0x0006e551) Screen

0xfb12,	// (0x0006e55d) application_window

0xfb7a,	// (0x0006e5c5) area_bottom_pane_ParamLimits

0xfb7a,	// (0x0006e5c5) area_bottom_pane

0xfbdc,	// (0x0006e627) area_top_pane_ParamLimits

0xfbdc,	// (0x0006e627) area_top_pane

0xfc39,	// (0x0006e684) call_video_uplink_pane_ParamLimits

0xfc39,	// (0x0006e684) call_video_uplink_pane

0xfc7e,	// (0x0006e6c9) main_pane_ParamLimits

0xfc7e,	// (0x0006e6c9) main_pane

0xc9f1,	// (0x0007b43c) context_pane

0x355a,	// (0x00071fa5) navi_pane

0x358e,	// (0x00071fd9) popup_cale_events_window_ParamLimits

0x358e,	// (0x00071fd9) popup_cale_events_window

0xca04,	// (0x0007b44f) popup_mup_playback_window

0x35a6,	// (0x00071ff1) signal_pane

0x9e2c,	// (0x00078877) main_browser_pane

0xab5c,	// (0x000795a7) main_burst_pane

0x3262,	// (0x00071cad) main_calc_pane

0xc9d7,	// (0x0007b422) main_cale_day_pane

0x3276,	// (0x00071cc1) main_cale_month_pane

0xc9d7,	// (0x0007b422) main_cale_week_pane

0xab5c,	// (0x000795a7) main_call_pane

0x9aea,	// (0x00078535) main_call_poc_pane

0xab5c,	// (0x000795a7) main_camera_pane

0xab5c,	// (0x000795a7) main_chi_dic_pane

0xb358,	// (0x00079da3) main_clock_pane

0x9aea,	// (0x00078535) main_fmradio_pane

0xab5c,	// (0x000795a7) main_graph_messa_pane

0x9aea,	// (0x00078535) main_help_pane

0x9e2c,	// (0x00078877) main_im_pane

0x9d45,	// (0x00078790) main_image_pane_ParamLimits

0x9d45,	// (0x00078790) main_image_pane

0x9aea,	// (0x00078535) main_location2_pane

0xab5c,	// (0x000795a7) main_location_pane

0x9d45,	// (0x00078790) main_messa_pane

0x9aea,	// (0x00078535) main_mp2_pane

0xab5c,	// (0x000795a7) main_mp_pane

0x9aea,	// (0x00078535) main_msg_pane

0x9aea,	// (0x00078535) main_mup_eq_pane

0x9aea,	// (0x00078535) main_mup_pane

0x9e2c,	// (0x00078877) main_notes_pane

0x9aea,	// (0x00078535) main_pec_pane

0x9aea,	// (0x00078535) main_phob_pane

0x9aea,	// (0x00078535) main_pinb_pane

0x9aea,	// (0x00078535) main_postcard_pane

0x9aea,	// (0x00078535) main_qdial_pane

0xab5c,	// (0x000795a7) main_skin_pane

0x9aea,	// (0x00078535) main_smil2_pane

0xab5c,	// (0x000795a7) main_smil_pane

0xab5c,	// (0x000795a7) main_video_pane

0xab5c,	// (0x000795a7) main_video_tele_pane

0x9d45,	// (0x00078790) main_viewer_pane_ParamLimits

0x9d45,	// (0x00078790) main_viewer_pane

0xab5c,	// (0x000795a7) main_vorec_pane

0x32c8,	// (0x00071d13) popup_blid_sat_info_window_ParamLimits

0x32c8,	// (0x00071d13) popup_blid_sat_info_window

0x332c,	// (0x00071d77) popup_dyc_status_message_window_ParamLimits

0x332c,	// (0x00071d77) popup_dyc_status_message_window

0x3346,	// (0x00071d91) popup_grid_large_graphic_window_ParamLimits

0x3346,	// (0x00071d91) popup_grid_large_graphic_window

0x3408,	// (0x00071e53) popup_loc_request_window_ParamLimits

0x3408,	// (0x00071e53) popup_loc_request_window

0x352e,	// (0x00071f79) popup_wml_address_window_ParamLimits

0x352e,	// (0x00071f79) popup_wml_address_window

0x30a0,	// (0x00071aeb) call_muted_g1

0x2d31,	// (0x0007177c) popup_call_audio_conf_window_ParamLimits

0x2d31,	// (0x0007177c) popup_call_audio_conf_window

0x30b0,	// (0x00071afb) popup_call_audio_first_window_ParamLimits

0x30b0,	// (0x00071afb) popup_call_audio_first_window

0x3126,	// (0x00071b71) popup_call_audio_in_window_ParamLimits

0x3126,	// (0x00071b71) popup_call_audio_in_window

0x3162,	// (0x00071bad) popup_call_audio_out_window_ParamLimits

0x3162,	// (0x00071bad) popup_call_audio_out_window

0x319c,	// (0x00071be7) popup_call_audio_second_window_ParamLimits

0x319c,	// (0x00071be7) popup_call_audio_second_window

0x31f2,	// (0x00071c3d) popup_call_audio_wait_window_ParamLimits

0x31f2,	// (0x00071c3d) popup_call_audio_wait_window

0x3227,	// (0x00071c72) popup_number_entry_window_ParamLimits

0x3227,	// (0x00071c72) popup_number_entry_window

0x96a2,	// (0x000780ed) bg_popup_call_pane_cp05_ParamLimits

0x96a2,	// (0x000780ed) bg_popup_call_pane_cp05

0x96c2,	// (0x0007810d) popup_number_entry_window_t1

0x96d5,	// (0x00078120) popup_number_entry_window_t2

0x96e7,	// (0x00078132) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0007dafa) popup_number_entry_window_t

0x972e,	// (0x00078179) text_title_cp2

0x9741,	// (0x0007818c) bg_popup_call_pane_cp_ParamLimits

0x9741,	// (0x0007818c) bg_popup_call_pane_cp

0x974f,	// (0x0007819a) call_thumbnail_pane

0x9757,	// (0x000781a2) popup_call_audio_in_window_g1_ParamLimits

0x9757,	// (0x000781a2) popup_call_audio_in_window_g1

0x9763,	// (0x000781ae) popup_call_audio_in_window_g2_ParamLimits

0x9763,	// (0x000781ae) popup_call_audio_in_window_g2

0x976f,	// (0x000781ba) popup_call_audio_in_window_g3_ParamLimits

0x976f,	// (0x000781ba) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0007db03) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0007db03) popup_call_audio_in_window_g

0x977b,	// (0x000781c6) popup_call_audio_in_window_t1_ParamLimits

0x977b,	// (0x000781c6) popup_call_audio_in_window_t1

0x9797,	// (0x000781e2) popup_call_audio_in_window_t2_ParamLimits

0x9797,	// (0x000781e2) popup_call_audio_in_window_t2

0x97b3,	// (0x000781fe) popup_call_audio_in_window_t3_ParamLimits

0x97b3,	// (0x000781fe) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0007db0a) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0007db0a) popup_call_audio_in_window_t

0x9741,	// (0x0007818c) bg_popup_call_pane_cp01_ParamLimits

0x9741,	// (0x0007818c) bg_popup_call_pane_cp01

0x974f,	// (0x0007819a) call_thumbnail_pane_cp02

0x97c6,	// (0x00078211) call_type_pane_cp022

0x97ce,	// (0x00078219) popup_call_audio_out_window_g1_ParamLimits

0x97ce,	// (0x00078219) popup_call_audio_out_window_g1

0x97e0,	// (0x0007822b) popup_call_audio_out_window_g2_ParamLimits

0x97e0,	// (0x0007822b) popup_call_audio_out_window_g2

0x97ec,	// (0x00078237) popup_call_audio_out_window_g3_ParamLimits

0x97ec,	// (0x00078237) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0007db11) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0007db11) popup_call_audio_out_window_g

0x97fe,	// (0x00078249) popup_call_audio_out_window_t1_ParamLimits

0x97fe,	// (0x00078249) popup_call_audio_out_window_t1

0x9816,	// (0x00078261) popup_call_audio_out_window_t2_ParamLimits

0x9816,	// (0x00078261) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0007db18) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0007db18) popup_call_audio_out_window_t

0x982b,	// (0x00078276) bg_popup_call_pane_ParamLimits

0x982b,	// (0x00078276) bg_popup_call_pane

0xfe1b,	// (0x0006e866) call_thumbnail_pane_cp_ParamLimits

0xfe1b,	// (0x0006e866) call_thumbnail_pane_cp

0x98af,	// (0x000782fa) call_type_pane_cp01_ParamLimits

0x98af,	// (0x000782fa) call_type_pane_cp01

0x98f3,	// (0x0007833e) popup_call_audio_first_window_g1_ParamLimits

0x98f3,	// (0x0007833e) popup_call_audio_first_window_g1

0x993f,	// (0x0007838a) popup_call_audio_first_window_g2_ParamLimits

0x993f,	// (0x0007838a) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0007db1d) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0007db1d) popup_call_audio_first_window_g

0x9983,	// (0x000783ce) popup_call_audio_first_window_t1_ParamLimits

0x9983,	// (0x000783ce) popup_call_audio_first_window_t1

0x9a2f,	// (0x0007847a) popup_call_audio_first_window_t4_ParamLimits

0x9a2f,	// (0x0007847a) popup_call_audio_first_window_t4

0x9abb,	// (0x00078506) popup_call_audio_first_window_t5_ParamLimits

0x9abb,	// (0x00078506) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0007db22) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0007db22) popup_call_audio_first_window_t

0x9aea,	// (0x00078535) bg_popup_call_pane_cp02

0x9af4,	// (0x0007853f) call_type_pane_cp023

0x9afc,	// (0x00078547) popup_call_audio_wait_window_g1

0x9b04,	// (0x0007854f) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0007db29) popup_call_audio_wait_window_g

0x9b0c,	// (0x00078557) popup_call_audio_wait_window_t3

0x9b1a,	// (0x00078565) bg_popup_call_pane_cp03_ParamLimits

0x9b1a,	// (0x00078565) bg_popup_call_pane_cp03

0x9b7a,	// (0x000785c5) call_thumbnail_pane_cp011_ParamLimits

0x9b7a,	// (0x000785c5) call_thumbnail_pane_cp011

0x9b86,	// (0x000785d1) call_type_pane_cp034_ParamLimits

0x9b86,	// (0x000785d1) call_type_pane_cp034

0x9bc2,	// (0x0007860d) popup_call_audio_second_window_g1_ParamLimits

0x9bc2,	// (0x0007860d) popup_call_audio_second_window_g1

0x9bfe,	// (0x00078649) popup_call_audio_second_window_g2_ParamLimits

0x9bfe,	// (0x00078649) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0007db2e) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0007db2e) popup_call_audio_second_window_g

0x9c3a,	// (0x00078685) popup_call_audio_second_window_t1_ParamLimits

0x9c3a,	// (0x00078685) popup_call_audio_second_window_t1

0x9cbb,	// (0x00078706) popup_call_audio_second_window_t2_ParamLimits

0x9cbb,	// (0x00078706) popup_call_audio_second_window_t2

0x9cf1,	// (0x0007873c) popup_call_audio_second_window_t3_ParamLimits

0x9cf1,	// (0x0007873c) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0007db33) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0007db33) popup_call_audio_second_window_t

0x9aea,	// (0x00078535) bg_popup_call_pane_cp04

0x9d27,	// (0x00078772) list_conf_pane

0x9d2f,	// (0x0007877a) popup_call_audio_conf_window_t1

0x9d3d,	// (0x00078788) call_thumbnail_pane_g1

0x9d45,	// (0x00078790) bg_pinb_pane_ParamLimits

0x9d45,	// (0x00078790) bg_pinb_pane

0x9d53,	// (0x0007879e) find_pinb_pane

0x9d5c,	// (0x000787a7) listscroll_pinb_pane_ParamLimits

0x9d5c,	// (0x000787a7) listscroll_pinb_pane

0x9d6b,	// (0x000787b6) pinb_bg_pane_g1

0xfe3f,	// (0x0006e88a) pinb_bg_pane_g2

0xfe4b,	// (0x0006e896) pinb_bg_pane_g3

0xfe57,	// (0x0006e8a2) pinb_bg_pane_g4

0xfe63,	// (0x0006e8ae) pinb_bg_pane_g5

0xfe6f,	// (0x0006e8ba) pinb_bg_pane_g6

0xfe7a,	// (0x0006e8c5) pinb_bg_pane_g7

0xfe85,	// (0x0006e8d0) pinb_bg_pane_g8

0xfe90,	// (0x0006e8db) pinb_bg_pane_g9

0xfe9a,	// (0x0006e8e5) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0007db3a) pinb_bg_pane_g

0xfeb7,	// (0x0006e902) grid_pinb_pane

0xfec2,	// (0x0006e90d) list_pinb_pane

0xfecd,	// (0x0006e918) scroll_pane_cp01_ParamLimits

0xfecd,	// (0x0006e918) scroll_pane_cp01

0x9d75,	// (0x000787c0) find_pinb_pane_g1_ParamLimits

0x9d75,	// (0x000787c0) find_pinb_pane_g1

0x9d8d,	// (0x000787d8) find_pinb_pane_t1

0x9d9f,	// (0x000787ea) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0007db54) find_pinb_pane_t

0x9db4,	// (0x000787ff) input_focus_pane_cp01_ParamLimits

0x9db4,	// (0x000787ff) input_focus_pane_cp01

0xfedf,	// (0x0006e92a) cell_pinb_pane_ParamLimits

0xfedf,	// (0x0006e92a) cell_pinb_pane

0xff01,	// (0x0006e94c) cell_pinb_pane_g1_ParamLimits

0xff01,	// (0x0006e94c) cell_pinb_pane_g1

0xff15,	// (0x0006e960) cell_pinb_pane_g2_ParamLimits

0xff15,	// (0x0006e960) cell_pinb_pane_g2

0x9dc0,	// (0x0007880b) cell_pinb_pane_g3_ParamLimits

0x9dc0,	// (0x0007880b) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0007db59) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0007db59) cell_pinb_pane_g

0x9aea,	// (0x00078535) grid_highlight_pane_cp01

0xff21,	// (0x0006e96c) list_pinb_item_pane_ParamLimits

0xff21,	// (0x0006e96c) list_pinb_item_pane

0x9aea,	// (0x00078535) list_highlight_pane_cp02

0xff34,	// (0x0006e97f) list_pinb_item_pane_g1_ParamLimits

0xff34,	// (0x0006e97f) list_pinb_item_pane_g1

0xff41,	// (0x0006e98c) list_pinb_item_pane_g2_ParamLimits

0xff41,	// (0x0006e98c) list_pinb_item_pane_g2

0xff4d,	// (0x0006e998) list_pinb_item_pane_g3_ParamLimits

0xff4d,	// (0x0006e998) list_pinb_item_pane_g3

0xff5e,	// (0x0006e9a9) list_pinb_item_pane_g4_ParamLimits

0xff5e,	// (0x0006e9a9) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0007db60) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0007db60) list_pinb_item_pane_g

0xff6a,	// (0x0006e9b5) list_pinb_item_pane_t1_ParamLimits

0xff6a,	// (0x0006e9b5) list_pinb_item_pane_t1

0xffa1,	// (0x0006e9ec) calc_display_pane

0xffc6,	// (0x0006ea11) calc_paper_pane

0xffe9,	// (0x0006ea34) grid_calc_pane

0x9aea,	// (0x00078535) bg_list_pane_cp01

0x0017,	// (0x0006ea62) clock_g1

0x001f,	// (0x0006ea6a) clock_g2

0x0001,

0xf11e,	// (0x0007db69) clock_g

0x0027,	// (0x0006ea72) clock_t1_ParamLimits

0x0027,	// (0x0006ea72) clock_t1

0x003c,	// (0x0006ea87) clock_t2_ParamLimits

0x003c,	// (0x0006ea87) clock_t2

0x004e,	// (0x0006ea99) clock_t3_ParamLimits

0x004e,	// (0x0006ea99) clock_t3

0x0060,	// (0x0006eaab) clock_t4_ParamLimits

0x0060,	// (0x0006eaab) clock_t4

0x0072,	// (0x0006eabd) clock_t5_ParamLimits

0x0072,	// (0x0006eabd) clock_t5

0x0087,	// (0x0006ead2) clock_t6_ParamLimits

0x0087,	// (0x0006ead2) clock_t6

0x0099,	// (0x0006eae4) clock_t7_ParamLimits

0x0099,	// (0x0006eae4) clock_t7

0x00ab,	// (0x0006eaf6) clock_t8_ParamLimits

0x00ab,	// (0x0006eaf6) clock_t8

0x00bf,	// (0x0006eb0a) clock_t9_ParamLimits

0x00bf,	// (0x0006eb0a) clock_t9

0x0008,

0xf123,	// (0x0007db6e) clock_t_ParamLimits

0xf123,	// (0x0007db6e) clock_t

0x9dd4,	// (0x0007881f) popup_clock_analogue_window_cp02

0x9dd4,	// (0x0007881f) popup_clock_digital_window_cp01

0x9ddc,	// (0x00078827) listscroll_help_pane

0x9aea,	// (0x00078535) phob_pre_status_pane

0x9de6,	// (0x00078831) grid_qdial_pane

0x9d45,	// (0x00078790) listscroll_mce_pane

0x9d45,	// (0x00078790) bg_notes_pane

0x9df0,	// (0x0007883b) list_notes_pane

0x00d5,	// (0x0006eb20) scroll_pane_cp06

0x9dfe,	// (0x00078849) bg_calc_paper_pane

0x9e12,	// (0x0007885d) list_calc_pane

0x9e2c,	// (0x00078877) bg_calc_display_pane

0x00e9,	// (0x0006eb34) calc_display_pane_t1

0x00fb,	// (0x0006eb46) calc_display_pane_t2

0x9e38,	// (0x00078883) calc_display_pane_t3

0x0002,

0xf136,	// (0x0007db81) calc_display_pane_t

0x010d,	// (0x0006eb58) cell_calc_pane_ParamLimits

0x010d,	// (0x0006eb58) cell_calc_pane

0x9e4a,	// (0x00078895) bg_calc_paper_pane_g1

0x9e56,	// (0x000788a1) bg_calc_paper_pane_g2

0x9e62,	// (0x000788ad) bg_calc_paper_pane_g3

0x9e6e,	// (0x000788b9) bg_calc_paper_pane_g4

0x9e7a,	// (0x000788c5) bg_calc_paper_pane_g5

0x0148,	// (0x0006eb93) bg_calc_paper_pane_g6

0x0156,	// (0x0006eba1) bg_calc_paper_pane_g7

0x0164,	// (0x0006ebaf) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0007db88) bg_calc_paper_pane_g

0x0177,	// (0x0006ebc2) calc_bg_paper_pane_g9

0x018a,	// (0x0006ebd5) list_calc_item_pane_ParamLimits

0x018a,	// (0x0006ebd5) list_calc_item_pane

0x9e86,	// (0x000788d1) list_calc_item_pane_g1

0x9e93,	// (0x000788de) list_calc_item_pane_t1_ParamLimits

0x9e93,	// (0x000788de) list_calc_item_pane_t1

0x01a2,	// (0x0006ebed) list_calc_item_pane_t2_ParamLimits

0x01a2,	// (0x0006ebed) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0007db99) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0007db99) list_calc_item_pane_t

0x9ea5,	// (0x000788f0) cell_calc_pane_g1

0x9eaf,	// (0x000788fa) grid_highlight_pane_cp02

0x01d4,	// (0x0006ec1f) bg_calc_display_pane_g1

0x01dd,	// (0x0006ec28) bg_calc_display_pane_g2

0x9ed1,	// (0x0007891c) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0007dba3) bg_calc_display_pane_g

0x01e7,	// (0x0006ec32) cell_qdial_pane_ParamLimits

0x01e7,	// (0x0006ec32) cell_qdial_pane

0x01fb,	// (0x0006ec46) cell_qdial_pane_g1_ParamLimits

0x01fb,	// (0x0006ec46) cell_qdial_pane_g1

0x0211,	// (0x0006ec5c) cell_qdial_pane_g2_ParamLimits

0x0211,	// (0x0006ec5c) cell_qdial_pane_g2

0x9eda,	// (0x00078925) cell_qdial_pane_g3_ParamLimits

0x9eda,	// (0x00078925) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0007dbaa) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0007dbaa) cell_qdial_pane_g

0x0238,	// (0x0006ec83) cell_qdial_pane_t1_ParamLimits

0x0238,	// (0x0006ec83) cell_qdial_pane_t1

0x0250,	// (0x0006ec9b) cell_qdial_pane_t2_ParamLimits

0x0250,	// (0x0006ec9b) cell_qdial_pane_t2

0x0263,	// (0x0006ecae) cell_qdial_pane_t3_ParamLimits

0x0263,	// (0x0006ecae) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0007dbb3) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0007dbb3) cell_qdial_pane_t

0x9aea,	// (0x00078535) grid_highlight_pane_cp04

0x9ee6,	// (0x00078931) thumbnail_qdial_pane_ParamLimits

0x9ee6,	// (0x00078931) thumbnail_qdial_pane

0x9f42,	// (0x0007898d) list_help_pane

0x9f4b,	// (0x00078996) scroll_pane_cp02

0x0276,	// (0x0006ecc1) help_list_pane_t1_ParamLimits

0x0276,	// (0x0006ecc1) help_list_pane_t1

0x9f54,	// (0x0007899f) bg_notes_pane_g2

0x9f5c,	// (0x000789a7) bg_notes_pane_g3

0x9f64,	// (0x000789af) notes_bg_pane_g1

0x9f6c,	// (0x000789b7) notes_bg_pane_g4

0x9f74,	// (0x000789bf) notes_bg_pane_g5

0x9f7c,	// (0x000789c7) notes_bg_pane_g6

0x9f84,	// (0x000789cf) notes_bg_pane_g7

0x9f8c,	// (0x000789d7) notes_bg_pane_g8

0x9f94,	// (0x000789df) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0007dbd1) notes_bg_pane_g

0x029a,	// (0x0006ece5) list_notes_text_pane_ParamLimits

0x029a,	// (0x0006ece5) list_notes_text_pane

0x9f9c,	// (0x000789e7) list_notes_text_pane_g1

0x02b1,	// (0x0006ecfc) list_notes_text_pane_t1

0x02bf,	// (0x0006ed0a) listscroll_cale_week_pane

0x02e9,	// (0x0006ed34) bg_cale_heading_pane

0x030d,	// (0x0006ed58) bg_cale_pane_cp01

0x032a,	// (0x0006ed75) cale_week_corner_pane

0x0349,	// (0x0006ed94) cale_week_day_heading_pane

0x0372,	// (0x0006edbd) cale_week_scroll_pane_g1

0x0391,	// (0x0006eddc) cale_week_scroll_pane_g2

0x03a9,	// (0x0006edf4) cale_week_scroll_pane_g3

0x03c1,	// (0x0006ee0c) cale_week_scroll_pane_g4

0x03d9,	// (0x0006ee24) cale_week_scroll_pane_g5

0x03f9,	// (0x0006ee44) cale_week_scroll_pane_g6

0x0419,	// (0x0006ee64) cale_week_scroll_pane_g7

0x043d,	// (0x0006ee88) cale_week_scroll_pane_g8

0x0461,	// (0x0006eeac) cale_week_scroll_pane_g9

0x0479,	// (0x0006eec4) cale_week_scroll_pane_g10

0x0491,	// (0x0006eedc) cale_week_scroll_pane_g11

0x04a9,	// (0x0006eef4) cale_week_scroll_pane_g12

0x04cd,	// (0x0006ef18) cale_week_scroll_pane_g13

0x04cd,	// (0x0006ef18) cale_week_scroll_pane_g14

0x04cd,	// (0x0006ef18) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0007dbe0) cale_week_scroll_pane_g

0x0515,	// (0x0006ef60) cale_week_time_pane

0x0539,	// (0x0006ef84) grid_cale_week_pane

0x9fd1,	// (0x00078a1c) scroll_pane_cp08

0x056b,	// (0x0006efb6) cell_cale_week_pane_ParamLimits

0x056b,	// (0x0006efb6) cell_cale_week_pane

0x0607,	// (0x0006f052) cale_week_day_heading_pane_t1

0x0631,	// (0x0006f07c) cale_week_day_heading_pane_t2

0x0660,	// (0x0006f0ab) cale_week_day_heading_pane_t3

0x068f,	// (0x0006f0da) cale_week_day_heading_pane_t4

0x06be,	// (0x0006f109) cale_week_day_heading_pane_t5

0x06f1,	// (0x0006f13c) cale_week_day_heading_pane_t6

0x0728,	// (0x0006f173) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0007dc01) cale_week_day_heading_pane_t

0x9fee,	// (0x00078a39) bg_cale_side_pane

0x0752,	// (0x0006f19d) cale_week_time_pane_t1

0x076c,	// (0x0006f1b7) cale_week_time_pane_t2

0x0786,	// (0x0006f1d1) cale_week_time_pane_t3

0x07a0,	// (0x0006f1eb) cale_week_time_pane_t4

0x07ba,	// (0x0006f205) cale_week_time_pane_t5

0x07d4,	// (0x0006f21f) cale_week_time_pane_t6

0x07f4,	// (0x0006f23f) cale_week_time_pane_t7

0x081a,	// (0x0006f265) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0007dc10) cale_week_time_pane_t

0x0840,	// (0x0006f28b) cell_cale_week_pane_g2

0x0864,	// (0x0006f2af) cell_cale_week_pane_g3_ParamLimits

0x0864,	// (0x0006f2af) cell_cale_week_pane_g3

0xab0f,	// (0x0007955a) grid_highlight_pane_cp07

0xab17,	// (0x00079562) listscroll_gms_pane

0xab21,	// (0x0007956c) grid_gms_pane

0xab2a,	// (0x00079575) listscroll_gms_pane_g1

0xab32,	// (0x0007957d) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0007dc21) listscroll_gms_pane_g

0x087c,	// (0x0006f2c7) scroll_pane_cp010

0x0887,	// (0x0006f2d2) cell_gms_pane_ParamLimits

0x0887,	// (0x0006f2d2) cell_gms_pane

0x089e,	// (0x0006f2e9) cell_gms_pane_g1

0xab3a,	// (0x00079585) cell_gms_pane_g2

0xab42,	// (0x0007958d) cell_gms_pane_g3

0xab4b,	// (0x00079596) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0007dc26) cell_gms_pane_g

0xab54,	// (0x0007959f) grid_highlight_pane_cp09

0x3048,	// (0x00071a93) phob_pre_status_pane_g1

0x3050,	// (0x00071a9b) phob_pre_status_pane_g2

0x3058,	// (0x00071aa3) phob_pre_status_pane_g3

0x3060,	// (0x00071aab) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0007e011) phob_pre_status_pane_g

0x3070,	// (0x00071abb) phob_pre_status_pane_t1

0x3080,	// (0x00071acb) phob_pre_status_pane_t2

0x3090,	// (0x00071adb) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0007e01c) phob_pre_status_pane_t

0xab5c,	// (0x000795a7) bg_list_pane_cp05

0x08ae,	// (0x0006f2f9) grid_vorec_pane

0x08b8,	// (0x0006f303) vorec_t1

0x08c6,	// (0x0006f311) vorec_t2

0x08d4,	// (0x0006f31f) vorec_t3

0x08e2,	// (0x0006f32d) vorec_t4

0x9641,	// (0x0007808c) vorec_t5

0x964f,	// (0x0007809a) vorec_t6

0x0004,

0xf1e4,	// (0x0007dc2f) vorec_t

0x965d,	// (0x000780a8) wait_bar_pane_cp01

0xab64,	// (0x000795af) cell_vorec_pane_ParamLimits

0xab64,	// (0x000795af) cell_vorec_pane

0x9ffc,	// (0x00078a47) cell_vorec_pane_g1

0x9aea,	// (0x00078535) grid_highlight_pane_cp05

0x0914,	// (0x0006f35f) cams_zoom_pane

0x0923,	// (0x0006f36e) image_vga_pane

0x093d,	// (0x0006f388) main_camera_pane_g1

0x094f,	// (0x0006f39a) main_camera_pane_g2

0x095f,	// (0x0006f3aa) main_camera_pane_g3

0x0973,	// (0x0006f3be) main_camera_pane_g4

0x0987,	// (0x0006f3d2) main_camera_pane_g5

0x099b,	// (0x0006f3e6) main_camera_pane_g6

0x09af,	// (0x0006f3fa) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0007dc3a) main_camera_pane_g

0x09c3,	// (0x0006f40e) main_camera_pane_t1

0x09d9,	// (0x0006f424) main_camera_pane_t2

0x0001,

0xf200,	// (0x0007dc4b) main_camera_pane_t

0x0a17,	// (0x0006f462) cams_zoom_pane_cp_ParamLimits

0x0a17,	// (0x0006f462) cams_zoom_pane_cp

0x0a3f,	// (0x0006f48a) image_cif_pane_ParamLimits

0x0a3f,	// (0x0006f48a) image_cif_pane

0x0a7a,	// (0x0006f4c5) image_subqcif_pane

0x0a84,	// (0x0006f4cf) main_video_pane_g1_ParamLimits

0x0a84,	// (0x0006f4cf) main_video_pane_g1

0x0aa8,	// (0x0006f4f3) main_video_pane_g2_ParamLimits

0x0aa8,	// (0x0006f4f3) main_video_pane_g2

0x0ade,	// (0x0006f529) main_video_pane_g3_ParamLimits

0x0ade,	// (0x0006f529) main_video_pane_g3

0x0b0c,	// (0x0006f557) main_video_pane_g4_ParamLimits

0x0b0c,	// (0x0006f557) main_video_pane_g4

0x0b3a,	// (0x0006f585) main_video_pane_g5_ParamLimits

0x0b3a,	// (0x0006f585) main_video_pane_g5

0xab85,	// (0x000795d0) main_video_pane_g6_ParamLimits

0xab85,	// (0x000795d0) main_video_pane_g6

0x0006,

0xf205,	// (0x0007dc50) main_video_pane_g_ParamLimits

0xf205,	// (0x0007dc50) main_video_pane_g

0x0b63,	// (0x0006f5ae) main_video_pane_t1_ParamLimits

0x0b63,	// (0x0006f5ae) main_video_pane_t1

0xab9f,	// (0x000795ea) cams_zoom_pane_g1

0xaba8,	// (0x000795f3) cams_zoom_pane_g2

0xabb1,	// (0x000795fc) cams_zoom_pane_g3

0xabba,	// (0x00079605) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0007dc5f) cams_zoom_pane_g

0x0bc0,	// (0x0006f60b) grid_cams_pane

0x0bda,	// (0x0006f625) linegrid_cams_pane

0x0bec,	// (0x0006f637) cell_cams_pane_ParamLimits

0x0bec,	// (0x0006f637) cell_cams_pane

0xabc3,	// (0x0007960e) cams_burst_image_pane

0xabcb,	// (0x00079616) cell_cams_pane_g1

0x9aea,	// (0x00078535) grid_highlight_pane_cp03

0x9ea5,	// (0x000788f0) mp_bg_pane_g1

0x9aea,	// (0x00078535) bg_list_pane_cp03

0xc8fa,	// (0x0007b345) bg_mp_pane

0xc902,	// (0x0007b34d) grid_mp_pane

0xc90a,	// (0x0007b355) media_player_g1

0xc914,	// (0x0007b35f) media_player_t1

0xc922,	// (0x0007b36d) media_player_t2

0xc930,	// (0x0007b37b) media_player_t3

0xc93e,	// (0x0007b389) media_player_t4

0xc94c,	// (0x0007b397) media_player_t5

0xc95a,	// (0x0007b3a5) media_player_t6

0xc968,	// (0x0007b3b3) media_player_t7

0x0006,

0xf5b0,	// (0x0007dffb) media_player_t

0xc976,	// (0x0007b3c1) wait_bar_pane_cp02

0xf595,	// (0x0007dfe0) main_usb_pane_t

0x303f,	// (0x00071a8a) cell_mp_pane

0x9ea5,	// (0x000788f0) cell_mp_pane_g1

0x9aea,	// (0x00078535) grid_highlight_pane_cp06

0xabd3,	// (0x0007961e) grid_skin_colour_pane

0xabdb,	// (0x00079626) list_highlight_pane_cp03

0x0d25,	// (0x0006f770) skin_g1

0xabe3,	// (0x0007962e) skin_t1

0xabf2,	// (0x0007963d) skin_t2

0x0001,

0xf249,	// (0x0007dc94) skin_t

0x0d2f,	// (0x0006f77a) cell_skin_colour_pane_ParamLimits

0x0d2f,	// (0x0006f77a) cell_skin_colour_pane

0xac00,	// (0x0007964b) cell_skin_colour_pane_g1

0x0da2,	// (0x0006f7ed) call_video_g1_ParamLimits

0x0da2,	// (0x0006f7ed) call_video_g1

0x0dbe,	// (0x0006f809) call_video_g2_ParamLimits

0x0dbe,	// (0x0006f809) call_video_g2

0x0001,

0xf24e,	// (0x0007dc99) call_video_g_ParamLimits

0xf24e,	// (0x0007dc99) call_video_g

0x0e03,	// (0x0006f84e) call_video_uplink_pane_cp1_ParamLimits

0x0e03,	// (0x0006f84e) call_video_uplink_pane_cp1

0xac12,	// (0x0007965d) call_video_uplink_pane_cp2

0x0ea4,	// (0x0006f8ef) video_down_crop_pane_ParamLimits

0x0ea4,	// (0x0006f8ef) video_down_crop_pane

0x0f8d,	// (0x0006f9d8) video_down_pane_ParamLimits

0x0f8d,	// (0x0006f9d8) video_down_pane

0xac1a,	// (0x00079665) video_down_subqcif_pane_ParamLimits

0xac1a,	// (0x00079665) video_down_subqcif_pane

0xac34,	// (0x0007967f) video_down_subqcif_pane_cp_ParamLimits

0xac34,	// (0x0007967f) video_down_subqcif_pane_cp

0xac5c,	// (0x000796a7) im_reading_pane_ParamLimits

0xac5c,	// (0x000796a7) im_reading_pane

0x1098,	// (0x0006fae3) im_writing_pane_ParamLimits

0x1098,	// (0x0006fae3) im_writing_pane

0x10b6,	// (0x0006fb01) im_reading_pane_t1

0xac76,	// (0x000796c1) list_im_pane

0xac87,	// (0x000796d2) scroll_pane_cp07

0x10f5,	// (0x0006fb40) im_writing_pane_t1_ParamLimits

0x10f5,	// (0x0006fb40) im_writing_pane_t1

0xaca0,	// (0x000796eb) im_writing_pane_t2_ParamLimits

0xaca0,	// (0x000796eb) im_writing_pane_t2

0x0001,

0xf258,	// (0x0007dca3) im_writing_pane_t_ParamLimits

0xf258,	// (0x0007dca3) im_writing_pane_t

0x9aea,	// (0x00078535) input_focus_pane_cp04

0x9aea,	// (0x00078535) input_focus_pane_cp05

0x110a,	// (0x0006fb55) list_im_single_pane_ParamLimits

0x110a,	// (0x0006fb55) list_im_single_pane

0x1123,	// (0x0006fb6e) list_single_im_pane_t1

0x2fff,	// (0x00071a4a) blid_accuracy_pane

0x3007,	// (0x00071a52) blid_compass_pane

0x3011,	// (0x00071a5c) main_location_t1

0x3021,	// (0x00071a6c) main_location_t2

0x3031,	// (0x00071a7c) main_location_t3

0x0002,

0xf5bf,	// (0x0007e00a) main_location_t

0x9aea,	// (0x00078535) aid_levels_location

0x9ea5,	// (0x000788f0) blid_accuracy_pane_g1

0x9ea5,	// (0x000788f0) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0007dd05) blid_accuracy_pane_g

0xace8,	// (0x00079733) wml_content_pane

0xad26,	// (0x00079771) wml_button_pane_ParamLimits

0xad26,	// (0x00079771) wml_button_pane

0x1132,	// (0x0006fb7d) wml_list_single_large_pane_ParamLimits

0x1132,	// (0x0006fb7d) wml_list_single_large_pane

0x114b,	// (0x0006fb96) wml_list_single_medium_pane_ParamLimits

0x114b,	// (0x0006fb96) wml_list_single_medium_pane

0x1165,	// (0x0006fbb0) wml_list_single_small_pane_ParamLimits

0x1165,	// (0x0006fbb0) wml_list_single_small_pane

0xad3a,	// (0x00079785) wml_selection_box_pane_ParamLimits

0xad3a,	// (0x00079785) wml_selection_box_pane

0xad4d,	// (0x00079798) wml_list_single_pane_t1

0xad5c,	// (0x000797a7) wml_list_single_medium_pane_t1

0xad6b,	// (0x000797b6) wml_list_single_large_pane_t1

0xad7a,	// (0x000797c5) input_focus_pane_cp02_ParamLimits

0xad7a,	// (0x000797c5) input_focus_pane_cp02

0xad8d,	// (0x000797d8) wml_selection_box_pane_g1

0xad96,	// (0x000797e1) wml_selection_box_pane_t1_ParamLimits

0xad96,	// (0x000797e1) wml_selection_box_pane_t1

0x9d45,	// (0x00078790) bg_wml_button_pane_ParamLimits

0x9d45,	// (0x00078790) bg_wml_button_pane

0xadae,	// (0x000797f9) wml_button_pane_g1

0xadb6,	// (0x00079801) wml_button_pane_t1

0xadae,	// (0x000797f9) wml_button_bg_pane_g1

0xadc6,	// (0x00079811) wml_button_bg_pane_g2

0xadce,	// (0x00079819) wml_button_bg_pane_g3

0xadd6,	// (0x00079821) wml_button_bg_pane_g4

0xadde,	// (0x00079829) wml_button_bg_pane_g5

0xade6,	// (0x00079831) wml_button_bg_pane_g6

0xadee,	// (0x00079839) wml_button_bg_pane_g7

0xadf6,	// (0x00079841) wml_button_bg_pane_g8

0xadfe,	// (0x00079849) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0007dca8) wml_button_bg_pane_g

0x1184,	// (0x0006fbcf) bg_list_pane_cp02

0xae06,	// (0x00079851) mce_header_pane_ParamLimits

0xae06,	// (0x00079851) mce_header_pane

0xae1c,	// (0x00079867) mce_icon_pane

0xae1c,	// (0x00079867) mce_image_pane

0xae25,	// (0x00079870) mce_text_pane_ParamLimits

0xae25,	// (0x00079870) mce_text_pane

0x118e,	// (0x0006fbd9) scroll_pane_cp03

0xad1e,	// (0x00079769) scroll_pane_cp04

0xae38,	// (0x00079883) scroll_pane_cp05_ParamLimits

0xae38,	// (0x00079883) scroll_pane_cp05

0x1198,	// (0x0006fbe3) mce_header_field_pane_ParamLimits

0x1198,	// (0x0006fbe3) mce_header_field_pane

0x11b1,	// (0x0006fbfc) mce_header_field_pane_2_ParamLimits

0x11b1,	// (0x0006fbfc) mce_header_field_pane_2

0x11c7,	// (0x0006fc12) mce_header_field_pane_3

0x11cf,	// (0x0006fc1a) list_single_mce_message_pane_ParamLimits

0x11cf,	// (0x0006fc1a) list_single_mce_message_pane

0x11eb,	// (0x0006fc36) list_single_mce_smart_pane_ParamLimits

0x11eb,	// (0x0006fc36) list_single_mce_smart_pane

0xae44,	// (0x0007988f) input_focus_pane_cp03

0xae4d,	// (0x00079898) list_header_data_pane

0x1212,	// (0x0006fc5d) mce_header_field_pane_t1

0x1222,	// (0x0006fc6d) list_single_mce_header_pane_ParamLimits

0x1222,	// (0x0006fc6d) list_single_mce_header_pane

0xae55,	// (0x000798a0) list_single_mce_header_pane_t1

0xae64,	// (0x000798af) list_single_mce_message_pane_g1

0xae6c,	// (0x000798b7) list_single_mce_message_pane_t1

0x125c,	// (0x0006fca7) bg_cale_heading_pane_cp01_ParamLimits

0x125c,	// (0x0006fca7) bg_cale_heading_pane_cp01

0xae7a,	// (0x000798c5) bg_cale_pane_cp02_ParamLimits

0xae7a,	// (0x000798c5) bg_cale_pane_cp02

0x12ae,	// (0x0006fcf9) cale_month_corner_pane

0x12cd,	// (0x0006fd18) cale_month_day_heading_pane_ParamLimits

0x12cd,	// (0x0006fd18) cale_month_day_heading_pane

0x1337,	// (0x0006fd82) cale_month_pane_g1_ParamLimits

0x1337,	// (0x0006fd82) cale_month_pane_g1

0x137e,	// (0x0006fdc9) cale_month_pane_g2_ParamLimits

0x137e,	// (0x0006fdc9) cale_month_pane_g2

0x13ba,	// (0x0006fe05) cale_month_pane_g3_ParamLimits

0x13ba,	// (0x0006fe05) cale_month_pane_g3

0x140e,	// (0x0006fe59) cale_month_pane_g4_ParamLimits

0x140e,	// (0x0006fe59) cale_month_pane_g4

0x1462,	// (0x0006fead) cale_month_pane_g5_ParamLimits

0x1462,	// (0x0006fead) cale_month_pane_g5

0x14be,	// (0x0006ff09) cale_month_pane_g6_ParamLimits

0x14be,	// (0x0006ff09) cale_month_pane_g6

0x1526,	// (0x0006ff71) cale_month_pane_g7_ParamLimits

0x1526,	// (0x0006ff71) cale_month_pane_g7

0x1592,	// (0x0006ffdd) cale_month_pane_g8_ParamLimits

0x1592,	// (0x0006ffdd) cale_month_pane_g8

0x15fe,	// (0x00070049) cale_month_pane_g9_ParamLimits

0x15fe,	// (0x00070049) cale_month_pane_g9

0x1662,	// (0x000700ad) cale_month_pane_g10_ParamLimits

0x1662,	// (0x000700ad) cale_month_pane_g10

0x16b4,	// (0x000700ff) cale_month_pane_g11_ParamLimits

0x16b4,	// (0x000700ff) cale_month_pane_g11

0x1706,	// (0x00070151) cale_month_pane_g12_ParamLimits

0x1706,	// (0x00070151) cale_month_pane_g12

0x175e,	// (0x000701a9) cale_month_pane_g13_ParamLimits

0x175e,	// (0x000701a9) cale_month_pane_g13

0x000c,

0xf270,	// (0x0007dcbb) cale_month_pane_g_ParamLimits

0xf270,	// (0x0007dcbb) cale_month_pane_g

0x17b6,	// (0x00070201) cale_month_week_pane

0x17da,	// (0x00070225) grid_cale_month_pane_ParamLimits

0x17da,	// (0x00070225) grid_cale_month_pane

0x183b,	// (0x00070286) cale_month_day_heading_pane_t1

0x18c1,	// (0x0007030c) cale_month_day_heading_pane_t2

0x193a,	// (0x00070385) cale_month_day_heading_pane_t3

0x19b3,	// (0x000703fe) cale_month_day_heading_pane_t4

0x1a34,	// (0x0007047f) cale_month_day_heading_pane_t5

0x1abd,	// (0x00070508) cale_month_day_heading_pane_t6

0x1b4e,	// (0x00070599) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0007dcd6) cale_month_day_heading_pane_t

0x9fee,	// (0x00078a39) bg_cale_side_pane_cp01

0x1bdf,	// (0x0007062a) cale_month_week_pane_t1

0x1bf8,	// (0x00070643) cale_month_week_pane_t2

0x1c11,	// (0x0007065c) cale_month_week_pane_t3

0x1c2a,	// (0x00070675) cale_month_week_pane_t4

0x1c43,	// (0x0007068e) cale_month_week_pane_t5

0x1c5c,	// (0x000706a7) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0007dce5) cale_month_week_pane_t

0x1c81,	// (0x000706cc) cell_cale_month_pane_ParamLimits

0x1c81,	// (0x000706cc) cell_cale_month_pane

0xa006,	// (0x00078a51) cell_cale_month_pane_g1

0x1df5,	// (0x00070840) cell_cale_month_pane_t1_ParamLimits

0x1df5,	// (0x00070840) cell_cale_month_pane_t1

0xab0f,	// (0x0007955a) grid_highlight_pane_cp08

0x9ea5,	// (0x000788f0) main_smil_g1

0x1e21,	// (0x0007086c) smil_status_pane

0xaeb9,	// (0x00079904) smil_text_pane

0xc818,	// (0x0007b263) bg_popup_call3_rect_pane_g8

0xc820,	// (0x0007b26b) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0007df9e) bg_popup_call3_rect_pane_g

0xca7e,	// (0x0007b4c9) smil_status_volume_pane_g1

0xaec3,	// (0x0007990e) smil_status_pane_t1

0xa15c,	// (0x00078ba7) volume_smil_pane

0xaeda,	// (0x00079925) list_smil_text_pane

0x1e36,	// (0x00070881) scroll_pane_cp011

0x1e41,	// (0x0007088c) smil_text_list_pane_t1_ParamLimits

0x1e41,	// (0x0007088c) smil_text_list_pane_t1

0xa012,	// (0x00078a5d) aid_volume_smil_ParamLimits

0xa012,	// (0x00078a5d) aid_volume_smil

0x9ea5,	// (0x000788f0) smil_volume_pane_g1

0x9ea5,	// (0x000788f0) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0007dd05) smil_volume_pane_g

0x02bf,	// (0x0006ed0a) listscroll_cale_day_pane

0xaee4,	// (0x0007992f) bg_cale_pane

0xaefc,	// (0x00079947) list_cale_pane

0xaf1f,	// (0x0007996a) scroll_pane_cp09

0xaf30,	// (0x0007997b) cale_bg_pane_g1

0xaf38,	// (0x00079983) cale_bg_pane_g2

0xaf40,	// (0x0007998b) cale_bg_pane_g3

0xaf48,	// (0x00079993) cale_bg_pane_g4

0xaf50,	// (0x0007999b) cale_bg_pane_g5

0xaf58,	// (0x000799a3) cale_bg_pane_g6

0xaf60,	// (0x000799ab) cale_bg_pane_g7

0xaf68,	// (0x000799b3) cale_bg_pane_g8

0xaf70,	// (0x000799bb) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0007dd0a) cale_bg_pane_g

0x1e94,	// (0x000708df) list_cale_time_pane_ParamLimits

0x1e94,	// (0x000708df) list_cale_time_pane

0xaf78,	// (0x000799c3) list_cale_time_pane_g1_ParamLimits

0xaf78,	// (0x000799c3) list_cale_time_pane_g1

0xaf84,	// (0x000799cf) list_cale_time_pane_g2_ParamLimits

0xaf84,	// (0x000799cf) list_cale_time_pane_g2

0x1eae,	// (0x000708f9) list_cale_time_pane_g3_ParamLimits

0x1eae,	// (0x000708f9) list_cale_time_pane_g3

0x1ebc,	// (0x00070907) list_cale_time_pane_g4_ParamLimits

0x1ebc,	// (0x00070907) list_cale_time_pane_g4

0x1eca,	// (0x00070915) list_cale_time_pane_g5_ParamLimits

0x1eca,	// (0x00070915) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0007dd1d) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0007dd1d) list_cale_time_pane_g

0xaf9e,	// (0x000799e9) list_cale_time_pane_t1_ParamLimits

0xaf9e,	// (0x000799e9) list_cale_time_pane_t1

0xafc6,	// (0x00079a11) list_cale_time_pane_t2_ParamLimits

0xafc6,	// (0x00079a11) list_cale_time_pane_t2

0x2271,	// (0x00070cbc) aid_blid_cardinal_pane

0x22b3,	// (0x00070cfe) compass_pane_t4

0xafee,	// (0x00079a39) list_cale_time_pane_t4_ParamLimits

0xafee,	// (0x00079a39) list_cale_time_pane_t4

0x22c1,	// (0x00070d0c) compass_pane_t5

0x22d1,	// (0x00070d1c) compass_pane_t6

0x22df,	// (0x00070d2a) compass_pane_t7

0xb472,	// (0x00079ebd) navi_pane_cc_t1

0xb651,	// (0x0007a09c) aid_phob_thumbnail_center_pane

0x29c2,	// (0x0007140d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0007dd2a) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0007dd2a) list_cale_time_pane_t

0x9741,	// (0x0007818c) bg_popup_window_pane_cp02_ParamLimits

0x9741,	// (0x0007818c) bg_popup_window_pane_cp02

0xb016,	// (0x00079a61) heading_pane_cp01_ParamLimits

0xb016,	// (0x00079a61) heading_pane_cp01

0xb022,	// (0x00079a6d) loc_req_pane_ParamLimits

0xb022,	// (0x00079a6d) loc_req_pane

0xb032,	// (0x00079a7d) loc_type_pane_ParamLimits

0xb032,	// (0x00079a7d) loc_type_pane

0xb044,	// (0x00079a8f) loc_type_pane_t1_ParamLimits

0xb044,	// (0x00079a8f) loc_type_pane_t1

0xb056,	// (0x00079aa1) loc_type_pane_t2_ParamLimits

0xb056,	// (0x00079aa1) loc_type_pane_t2

0xb068,	// (0x00079ab3) loc_type_pane_t3_ParamLimits

0xb068,	// (0x00079ab3) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0007dd31) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0007dd31) loc_type_pane_t

0xb07a,	// (0x00079ac5) list_loc_req_pane

0xb084,	// (0x00079acf) scroll_pane_cp012

0x1ed8,	// (0x00070923) list_single_loc_request_popup_menu_pane_ParamLimits

0x1ed8,	// (0x00070923) list_single_loc_request_popup_menu_pane

0xb08f,	// (0x00079ada) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb08f,	// (0x00079ada) list_single_loc_request_popup_menu_pane_g1

0xb09b,	// (0x00079ae6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb09b,	// (0x00079ae6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0007dd38) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0007dd38) list_single_loc_request_popup_menu_pane_g

0xb0a7,	// (0x00079af2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb0a7,	// (0x00079af2) list_single_loc_request_popup_menu_pane_t1

0x9d45,	// (0x00078790) bg_popup_window_pane_cp03_ParamLimits

0x9d45,	// (0x00078790) bg_popup_window_pane_cp03

0xb0bd,	// (0x00079b08) heading_loc_req_pane_ParamLimits

0xb0bd,	// (0x00079b08) heading_loc_req_pane

0x1ee5,	// (0x00070930) popup_dyc_status_message_window_g1_ParamLimits

0x1ee5,	// (0x00070930) popup_dyc_status_message_window_g1

0x1ef9,	// (0x00070944) popup_dyc_status_message_window_t1_ParamLimits

0x1ef9,	// (0x00070944) popup_dyc_status_message_window_t1

0x1f0e,	// (0x00070959) popup_dyc_status_message_window_t2_ParamLimits

0x1f0e,	// (0x00070959) popup_dyc_status_message_window_t2

0x1f23,	// (0x0007096e) popup_dyc_status_message_window_t3_ParamLimits

0x1f23,	// (0x0007096e) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0007dd3d) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0007dd3d) popup_dyc_status_message_window_t

0x9aea,	// (0x00078535) bg_heading_pane_cp01

0xb0c9,	// (0x00079b14) heading_loc_req_pane_g1

0xb0d1,	// (0x00079b1c) heading_loc_req_pane_g2

0xb0d9,	// (0x00079b24) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0007dd44) heading_loc_req_pane_g

0xb0e1,	// (0x00079b2c) heading_loc_req_pane_t1

0xb0f1,	// (0x00079b3c) bg_popup_sub_pane_cp01_ParamLimits

0xb0f1,	// (0x00079b3c) bg_popup_sub_pane_cp01

0xb0ff,	// (0x00079b4a) popup_cale_events_window_g1_ParamLimits

0xb0ff,	// (0x00079b4a) popup_cale_events_window_g1

0xb11f,	// (0x00079b6a) popup_cale_events_window_g2_ParamLimits

0xb11f,	// (0x00079b6a) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0007dd78) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0007dd78) popup_cale_events_window_g

0xb13f,	// (0x00079b8a) popup_cale_events_window_t1_ParamLimits

0xb13f,	// (0x00079b8a) popup_cale_events_window_t1

0xb151,	// (0x00079b9c) popup_cale_events_window_t2_ParamLimits

0xb151,	// (0x00079b9c) popup_cale_events_window_t2

0xb18f,	// (0x00079bda) popup_cale_events_window_t3_ParamLimits

0xb18f,	// (0x00079bda) popup_cale_events_window_t3

0xb1c9,	// (0x00079c14) popup_cale_events_window_t4_ParamLimits

0xb1c9,	// (0x00079c14) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0007dd7d) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0007dd7d) popup_cale_events_window_t

0x201c,	// (0x00070a67) call_type_pane

0x202c,	// (0x00070a77) popup_call_status_window_g1

0x2040,	// (0x00070a8b) popup_call_status_window_g2

0x2054,	// (0x00070a9f) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0007dd86) popup_call_status_window_g

0xb1ff,	// (0x00079c4a) call_type_pane_g1

0xb208,	// (0x00079c53) call_type_pane_g2

0x0001,

0xf342,	// (0x0007dd8d) call_type_pane_g

0x9aea,	// (0x00078535) bg_popup_sub_pane_cp02

0xb211,	// (0x00079c5c) listscroll_popup_wml_pane

0xb219,	// (0x00079c64) list_wml_pane

0xb223,	// (0x00079c6e) scroll_pane_cp013

0xb22e,	// (0x00079c79) list_single_graphic_popup_wml_pane_ParamLimits

0xb22e,	// (0x00079c79) list_single_graphic_popup_wml_pane

0x9ea5,	// (0x000788f0) list_single_graphic_popup_wml_pane_g1

0xb242,	// (0x00079c8d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0007dd92) list_single_graphic_popup_wml_pane_g

0xb24a,	// (0x00079c95) list_single_graphic_popup_wml_pane_t1

0xb260,	// (0x00079cab) aid_call_pane

0x9d3d,	// (0x00078788) popup_clock_analogue_window_g1

0x9d3d,	// (0x00078788) popup_clock_analogue_window_g2

0xa034,	// (0x00078a7f) popup_clock_analogue_window_g3

0xa034,	// (0x00078a7f) popup_clock_analogue_window_g4

0x9ea5,	// (0x000788f0) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0007dd97) popup_clock_analogue_window_g

0xa03c,	// (0x00078a87) popup_clock_analogue_window_t1

0xa04a,	// (0x00078a95) clock_digital_number_pane_ParamLimits

0xa04a,	// (0x00078a95) clock_digital_number_pane

0xa056,	// (0x00078aa1) clock_digital_number_pane_cp02_ParamLimits

0xa056,	// (0x00078aa1) clock_digital_number_pane_cp02

0xa062,	// (0x00078aad) clock_digital_number_pane_cp03_ParamLimits

0xa062,	// (0x00078aad) clock_digital_number_pane_cp03

0xa06e,	// (0x00078ab9) clock_digital_number_pane_cp04_ParamLimits

0xa06e,	// (0x00078ab9) clock_digital_number_pane_cp04

0xa07a,	// (0x00078ac5) clock_digital_separator_pane_ParamLimits

0xa07a,	// (0x00078ac5) clock_digital_separator_pane

0xa086,	// (0x00078ad1) popup_clock_digital_window_t1

0x9ea5,	// (0x000788f0) clock_digital_number_pane_g1

0x9ea5,	// (0x000788f0) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0007dd05) clock_digital_number_pane_g

0x9ea5,	// (0x000788f0) clock_digital_separator_pane_g1

0x9ea5,	// (0x000788f0) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0007dd05) clock_digital_separator_pane_g

0x9aea,	// (0x00078535) bg_popup_window_pane_cp04

0xb268,	// (0x00079cb3) heading_pane_cp03

0xb270,	// (0x00079cbb) listscroll_popup_gms_pane

0xb278,	// (0x00079cc3) grid_large_graphic_popup_pane

0xb282,	// (0x00079ccd) listscroll_popup_gms_pane_g1

0xb28a,	// (0x00079cd5) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0007dda2) listscroll_popup_gms_pane_g

0xad1e,	// (0x00079769) scroll_pane_cp014

0x2064,	// (0x00070aaf) cell_large_graphic_popup_pane_ParamLimits

0x2064,	// (0x00070aaf) cell_large_graphic_popup_pane

0x207c,	// (0x00070ac7) cell_large_graphic_popup_pane_g1_ParamLimits

0x207c,	// (0x00070ac7) cell_large_graphic_popup_pane_g1

0xb292,	// (0x00079cdd) cell_large_graphic_popup_pane_g2_ParamLimits

0xb292,	// (0x00079cdd) cell_large_graphic_popup_pane_g2

0xb29e,	// (0x00079ce9) cell_large_graphic_popup_pane_g3_ParamLimits

0xb29e,	// (0x00079ce9) cell_large_graphic_popup_pane_g3

0xb2ab,	// (0x00079cf6) cell_large_graphic_popup_pane_g4_ParamLimits

0xb2ab,	// (0x00079cf6) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0007dda7) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0007dda7) cell_large_graphic_popup_pane_g

0xb2bb,	// (0x00079d06) grid_highlight_pane_cp010

0x9ea5,	// (0x000788f0) bg_popup_call_pane_g1

0xb2c5,	// (0x00079d10) list_single_graphic_popup_conf_pane_ParamLimits

0xb2c5,	// (0x00079d10) list_single_graphic_popup_conf_pane

0xb2d7,	// (0x00079d22) list_highlight_pane_cp01

0xb2e0,	// (0x00079d2b) list_single_graphic_popup_conf_pane_g1

0xb2e8,	// (0x00079d33) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0007ddb0) list_single_graphic_popup_conf_pane_g

0xb2f0,	// (0x00079d3b) list_single_graphic_popup_conf_pane_t1

0xb2fe,	// (0x00079d49) linegrid_cams_pane_g1

0x2088,	// (0x00070ad3) linegrid_cams_pane_g2

0xab42,	// (0x0007958d) linegrid_cams_pane_g3

0xb307,	// (0x00079d52) linegrid_cams_pane_g4

0x2091,	// (0x00070adc) linegrid_cams_pane_g5

0x209a,	// (0x00070ae5) linegrid_cams_pane_g6

0xab4b,	// (0x00079596) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0007ddb5) linegrid_cams_pane_g

0xb310,	// (0x00079d5b) popup_clock_analogue_window

0xb310,	// (0x00079d5b) popup_clock_digital_window

0x9aea,	// (0x00078535) popup_phob_thumbnail_window

0x9ea5,	// (0x000788f0) call_video_uplink_pane_g1

0xb319,	// (0x00079d64) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0007ddc4) call_video_uplink_pane_g

0xb321,	// (0x00079d6c) video_uplink_pane

0xb329,	// (0x00079d74) mce_image_pane_g1

0x20a5,	// (0x00070af0) mce_image_pane_g2

0x20af,	// (0x00070afa) mce_image_pane_g3

0x20b9,	// (0x00070b04) mce_image_pane_g4

0x20c1,	// (0x00070b0c) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0007ddc9) mce_image_pane_g

0xb333,	// (0x00079d7e) control_top_pane_stacon_cp01_ParamLimits

0xb333,	// (0x00079d7e) control_top_pane_stacon_cp01

0xb347,	// (0x00079d92) uni_indicator_pane_stacon_cp01_ParamLimits

0xb347,	// (0x00079d92) uni_indicator_pane_stacon_cp01

0xb358,	// (0x00079da3) bg_popup_sub_pane_cp03

0x20c9,	// (0x00070b14) chi_dic_find_pane

0x20d1,	// (0x00070b1c) listscroll_chi_dic_pane

0x20da,	// (0x00070b25) main_pane_chidic_g1

0x20ed,	// (0x00070b38) chi_dic_find_pane_t1

0xb362,	// (0x00079dad) find_chidic_pane

0xb36b,	// (0x00079db6) chi_dic_list_pane_ParamLimits

0xb36b,	// (0x00079db6) chi_dic_list_pane

0xb37c,	// (0x00079dc7) scroll_pane_cp020

0x20fb,	// (0x00070b46) find_chidic_pane_t1

0x9aea,	// (0x00078535) input_focus_pane_cp06

0x210a,	// (0x00070b55) list_chi_dic_pane_ParamLimits

0x210a,	// (0x00070b55) list_chi_dic_pane

0x211c,	// (0x00070b67) list_chi_dic_pane_t1_ParamLimits

0x211c,	// (0x00070b67) list_chi_dic_pane_t1

0x9aea,	// (0x00078535) list_highlight_pane_cp020

0xb384,	// (0x00079dcf) bg_cale_heading_pane_g1

0x212f,	// (0x00070b7a) bg_cale_heading_pane_g2

0x2137,	// (0x00070b82) bg_cale_heading_pane_g3

0x213f,	// (0x00070b8a) bg_cale_heading_pane_g4

0x2149,	// (0x00070b94) bg_cale_heading_pane_g5

0x2153,	// (0x00070b9e) bg_cale_heading_pane_g6

0x215b,	// (0x00070ba6) bg_cale_heading_pane_g7

0x2163,	// (0x00070bae) bg_cale_heading_pane_g8

0x216d,	// (0x00070bb8) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0007ddd4) bg_cale_heading_pane_g

0xb384,	// (0x00079dcf) bg_cale_side_pane_g1

0x2177,	// (0x00070bc2) bg_cale_side_pane_g2

0x2181,	// (0x00070bcc) bg_cale_side_pane_g3

0x218b,	// (0x00070bd6) bg_cale_side_pane_g4

0x2195,	// (0x00070be0) bg_cale_side_pane_g5

0x219f,	// (0x00070bea) bg_cale_side_pane_g6

0x21a9,	// (0x00070bf4) bg_cale_side_pane_g7

0x21b3,	// (0x00070bfe) bg_cale_side_pane_g8

0x21bb,	// (0x00070c06) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0007dde7) bg_cale_side_pane_g

0x21c3,	// (0x00070c0e) popup_call_status_window_ParamLimits

0x21c3,	// (0x00070c0e) popup_call_status_window

0xb38c,	// (0x00079dd7) stacon_top_pane

0xb394,	// (0x00079ddf) status_pane_ParamLimits

0xb394,	// (0x00079ddf) status_pane

0xb3a9,	// (0x00079df4) status_small_pane

0xb3b1,	// (0x00079dfc) control_pane

0x9aea,	// (0x00078535) stacon_bottom_pane

0xb3b9,	// (0x00079e04) list_single_mce_smart_pane_t1_ParamLimits

0xb3b9,	// (0x00079e04) list_single_mce_smart_pane_t1

0xb3cc,	// (0x00079e17) list_single_mce_smart_pane_t2_ParamLimits

0xb3cc,	// (0x00079e17) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0007ddfa) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0007ddfa) list_single_mce_smart_pane_t

0x2210,	// (0x00070c5b) compass_pane

0x221b,	// (0x00070c66) main_location2_pane_t1

0x2231,	// (0x00070c7c) main_location2_pane_t2

0x2247,	// (0x00070c92) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0007ddff) main_location2_pane_t

0xb3eb,	// (0x00079e36) compass_pane_g1_ParamLimits

0xb3eb,	// (0x00079e36) compass_pane_g1

0x2295,	// (0x00070ce0) compass_pane_t1

0x22a4,	// (0x00070cef) compass_pane_t2

0x0005,

0xf3bd,	// (0x0007de08) compass_pane_t

0x22ef,	// (0x00070d3a) text_secondary_cp61

0xb469,	// (0x00079eb4) navi_pane_cams_g5

0xb4e5,	// (0x00079f30) navi_pane_im_t1

0xb4f3,	// (0x00079f3e) navi_pane_mp_g1_ParamLimits

0xb4f3,	// (0x00079f3e) navi_pane_mp_g1

0xb507,	// (0x00079f52) navi_pane_mp_g2_ParamLimits

0xb507,	// (0x00079f52) navi_pane_mp_g2

0xb513,	// (0x00079f5e) navi_pane_mp_g3_ParamLimits

0xb513,	// (0x00079f5e) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0007de1c) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0007de1c) navi_pane_mp_g

0xb51f,	// (0x00079f6a) navi_pane_mp_t1

0xb52d,	// (0x00079f78) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0007de23) navi_pane_mp_t

0xb59a,	// (0x00079fe5) navi_pane_vt_g1

0xb51f,	// (0x00079f6a) navi_pane_vt_t1

0xb5a2,	// (0x00079fed) navi_slider_pane

0xab5c,	// (0x000795a7) zooming_pane

0xb5b2,	// (0x00079ffd) navi_slider_pane_g1

0xa0a3,	// (0x00078aee) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0007de2a) navi_slider_pane_g

0xb5d6,	// (0x0007a021) aid_levels_zoom

0xb5de,	// (0x0007a029) zooming_pane_g1

0xb5e6,	// (0x0007a031) zooming_pane_g2

0xb5e6,	// (0x0007a031) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0007de39) zooming_pane_g

0xb5ee,	// (0x0007a039) level_10_zoom

0xb5f7,	// (0x0007a042) level_11_zoom

0xb600,	// (0x0007a04b) level_1_zoom

0xb609,	// (0x0007a054) level_2_zoom

0xb612,	// (0x0007a05d) level_3_zoom

0xb61b,	// (0x0007a066) level_4_zoom

0xb624,	// (0x0007a06f) level_5_zoom

0xb62d,	// (0x0007a078) level_6_zoom

0xb636,	// (0x0007a081) level_7_zoom

0xb63f,	// (0x0007a08a) level_8_zoom

0xb648,	// (0x0007a093) level_9_zoom

0xb659,	// (0x0007a0a4) popup_phob_thumbnail_window_g1

0xb661,	// (0x0007a0ac) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0007de40) popup_phob_thumbnail_window_g

0xc97e,	// (0x0007b3c9) level_1_location

0xc986,	// (0x0007b3d1) level_2_location

0xc98e,	// (0x0007b3d9) level_3_location

0xc996,	// (0x0007b3e1) level_4_location

0xab5c,	// (0x000795a7) level_5_location

0x2340,	// (0x00070d8b) mce_icon_pane_g1

0x234a,	// (0x00070d95) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0007de45) mce_icon_pane_g

0x2352,	// (0x00070d9d) main_mup_pane_g1_ParamLimits

0x2352,	// (0x00070d9d) main_mup_pane_g1

0x2368,	// (0x00070db3) main_mup_pane_g2_ParamLimits

0x2368,	// (0x00070db3) main_mup_pane_g2

0x2380,	// (0x00070dcb) main_mup_pane_g3_ParamLimits

0x2380,	// (0x00070dcb) main_mup_pane_g3

0x2398,	// (0x00070de3) main_mup_pane_g4_ParamLimits

0x2398,	// (0x00070de3) main_mup_pane_g4

0x23aa,	// (0x00070df5) main_mup_pane_g5_ParamLimits

0x23aa,	// (0x00070df5) main_mup_pane_g5

0x23c6,	// (0x00070e11) main_mup_pane_g6_ParamLimits

0x23c6,	// (0x00070e11) main_mup_pane_g6

0x23e0,	// (0x00070e2b) main_mup_pane_g7_ParamLimits

0x23e0,	// (0x00070e2b) main_mup_pane_g7

0x23fe,	// (0x00070e49) main_mup_pane_g8_ParamLimits

0x23fe,	// (0x00070e49) main_mup_pane_g8

0x241c,	// (0x00070e67) main_mup_pane_g9_ParamLimits

0x241c,	// (0x00070e67) main_mup_pane_g9

0x2438,	// (0x00070e83) main_mup_pane_g10_ParamLimits

0x2438,	// (0x00070e83) main_mup_pane_g10

0x2456,	// (0x00070ea1) main_mup_pane_g11_ParamLimits

0x2456,	// (0x00070ea1) main_mup_pane_g11

0x2470,	// (0x00070ebb) main_mup_pane_g12_ParamLimits

0x2470,	// (0x00070ebb) main_mup_pane_g12

0x2486,	// (0x00070ed1) main_mup_pane_g13_ParamLimits

0x2486,	// (0x00070ed1) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0007de4a) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0007de4a) main_mup_pane_g

0x249a,	// (0x00070ee5) main_mup_pane_t1_ParamLimits

0x249a,	// (0x00070ee5) main_mup_pane_t1

0x24b6,	// (0x00070f01) main_mup_pane_t2_ParamLimits

0x24b6,	// (0x00070f01) main_mup_pane_t2

0x24ce,	// (0x00070f19) main_mup_pane_t3_ParamLimits

0x24ce,	// (0x00070f19) main_mup_pane_t3

0x24e6,	// (0x00070f31) main_mup_pane_t4_ParamLimits

0x24e6,	// (0x00070f31) main_mup_pane_t4

0x2504,	// (0x00070f4f) main_mup_pane_t5_ParamLimits

0x2504,	// (0x00070f4f) main_mup_pane_t5

0x2519,	// (0x00070f64) main_mup_pane_t6_ParamLimits

0x2519,	// (0x00070f64) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0007de65) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0007de65) main_mup_pane_t

0x252b,	// (0x00070f76) mup_progress_pane_ParamLimits

0x252b,	// (0x00070f76) mup_progress_pane

0x2537,	// (0x00070f82) mup_visualizer_pane_ParamLimits

0x2537,	// (0x00070f82) mup_visualizer_pane

0x256b,	// (0x00070fb6) mup_volume_pane_ParamLimits

0x256b,	// (0x00070fb6) mup_volume_pane

0xb669,	// (0x0007a0b4) mup_visualizer_pane_g1_ParamLimits

0xb669,	// (0x0007a0b4) mup_visualizer_pane_g1

0xb669,	// (0x0007a0b4) mup_visualizer_pane_g2_ParamLimits

0xb669,	// (0x0007a0b4) mup_visualizer_pane_g2

0xb3eb,	// (0x00079e36) mup_visualizer_pane_g3_ParamLimits

0xb3eb,	// (0x00079e36) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0007de72) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0007de72) mup_visualizer_pane_g

0x9ea5,	// (0x000788f0) mup_volume_pane_g1

0xb67f,	// (0x0007a0ca) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0007de79) mup_volume_pane_g

0x9ea5,	// (0x000788f0) mup_progress_pane_g1

0xb688,	// (0x0007a0d3) mup_progress_pane_g2

0xb691,	// (0x0007a0dc) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0007de7e) mup_progress_pane_g

0x9aea,	// (0x00078535) bg_popup_window_pane_cp05

0xb69a,	// (0x0007a0e5) heading_pane_cp02_ParamLimits

0xb69a,	// (0x0007a0e5) heading_pane_cp02

0xb6b6,	// (0x0007a101) list_popup_blid_pane

0xb6be,	// (0x0007a109) list_blid_sat_info_pane_ParamLimits

0xb6be,	// (0x0007a109) list_blid_sat_info_pane

0xb6d1,	// (0x0007a11c) list_blid_sat_info_pane_g1

0xb6d9,	// (0x0007a124) list_blid_sat_info_pane_t1

0x2695,	// (0x000710e0) mup_equalizer_pane_ParamLimits

0x2695,	// (0x000710e0) mup_equalizer_pane

0x26b6,	// (0x00071101) mup_equalizer_pane_cp1_ParamLimits

0x26b6,	// (0x00071101) mup_equalizer_pane_cp1

0x26d7,	// (0x00071122) mup_equalizer_pane_cp2_ParamLimits

0x26d7,	// (0x00071122) mup_equalizer_pane_cp2

0x26fc,	// (0x00071147) mup_equalizer_pane_cp3_ParamLimits

0x26fc,	// (0x00071147) mup_equalizer_pane_cp3

0x2725,	// (0x00071170) mup_equalizer_pane_cp4_ParamLimits

0x2725,	// (0x00071170) mup_equalizer_pane_cp4

0x274e,	// (0x00071199) mup_equalizer_pane_cp5

0x2766,	// (0x000711b1) mup_equalizer_pane_cp6

0x277e,	// (0x000711c9) mup_equalizer_pane_cp7

0xc898,	// (0x0007b2e3) bg_popup_call_poc_act_pane_g9

0xc8a0,	// (0x0007b2eb) bg_popup_call_poc_act_pane_g10

0xc8a8,	// (0x0007b2f3) bg_popup_call_poc_act_pane_g11

0x000a,

0x9d45,	// (0x00078790) mup_scale_pane

0x9ea5,	// (0x000788f0) mup_scale_pane_g1

0xb6e7,	// (0x0007a132) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0007de9a) mup_scale_pane_g

0xb70b,	// (0x0007a156) msg_data_pane

0xb713,	// (0x0007a15e) scroll_pane_cp017

0x27a8,	// (0x000711f3) bg_list_pane_cp04_ParamLimits

0x27a8,	// (0x000711f3) bg_list_pane_cp04

0xb71b,	// (0x0007a166) msg_data_pane_g1

0x27ce,	// (0x00071219) msg_data_pane_g2

0x27d8,	// (0x00071223) msg_data_pane_g3

0x27e2,	// (0x0007122d) msg_data_pane_g4

0x27ea,	// (0x00071235) msg_data_pane_g5

0x27f2,	// (0x0007123d) msg_data_pane_g6

0x27fa,	// (0x00071245) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0007dea9) msg_data_pane_g

0x2802,	// (0x0007124d) msg_text_pane_ParamLimits

0x2802,	// (0x0007124d) msg_text_pane

0x283f,	// (0x0007128a) qrid_highlight_pane_cp011_ParamLimits

0x283f,	// (0x0007128a) qrid_highlight_pane_cp011

0x9aea,	// (0x00078535) msg_body_pane

0x9aea,	// (0x00078535) msg_header_pane

0xb72c,	// (0x0007a177) input_focus_pane_cp07

0x2863,	// (0x000712ae) msg_header_pane_t1_ParamLimits

0x2863,	// (0x000712ae) msg_header_pane_t1

0x2875,	// (0x000712c0) msg_header_pane_t2_ParamLimits

0x2875,	// (0x000712c0) msg_header_pane_t2

0x0001,

0xf472,	// (0x0007debd) msg_header_pane_t_ParamLimits

0xf472,	// (0x0007debd) msg_header_pane_t

0xb741,	// (0x0007a18c) msg_body_pane_g1

0x2887,	// (0x000712d2) msg_body_pane_t1_ParamLimits

0x2887,	// (0x000712d2) msg_body_pane_t1

0x28b8,	// (0x00071303) msg_body_pane_t2_ParamLimits

0x28b8,	// (0x00071303) msg_body_pane_t2

0x28ca,	// (0x00071315) msg_body_pane_t3_ParamLimits

0x28ca,	// (0x00071315) msg_body_pane_t3

0x0002,

0xf477,	// (0x0007dec2) msg_body_pane_t_ParamLimits

0xf477,	// (0x0007dec2) msg_body_pane_t

0x2916,	// (0x00071361) main_viewer_pane_g1_ParamLimits

0x2916,	// (0x00071361) main_viewer_pane_g1

0x2924,	// (0x0007136f) main_viewer_pane_g2_ParamLimits

0x2924,	// (0x0007136f) main_viewer_pane_g2

0x2932,	// (0x0007137d) main_viewer_pane_g3_ParamLimits

0x2932,	// (0x0007137d) main_viewer_pane_g3

0x2941,	// (0x0007138c) main_viewer_pane_g4_ParamLimits

0x2941,	// (0x0007138c) main_viewer_pane_g4

0xa0cd,	// (0x00078b18) main_viewer_pane_g5_ParamLimits

0xa0cd,	// (0x00078b18) main_viewer_pane_g5

0xa0cd,	// (0x00078b18) main_viewer_pane_g7_ParamLimits

0xa0cd,	// (0x00078b18) main_viewer_pane_g7

0xa0df,	// (0x00078b2a) main_viewer_pane_g8_ParamLimits

0xa0df,	// (0x00078b2a) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0007ded2) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0007ded2) main_viewer_pane_g

0xb749,	// (0x0007a194) viewer_content_pane_ParamLimits

0xb749,	// (0x0007a194) viewer_content_pane

0x297f,	// (0x000713ca) main_postcard_pane_g1_ParamLimits

0x297f,	// (0x000713ca) main_postcard_pane_g1

0x2995,	// (0x000713e0) main_postcard_pane_g2_ParamLimits

0x2995,	// (0x000713e0) main_postcard_pane_g2

0x29ab,	// (0x000713f6) main_postcard_pane_g3_ParamLimits

0x29ab,	// (0x000713f6) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0007dee3) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0007dee3) main_postcard_pane_g

0x29c2,	// (0x0007140d) main_postcard_pane_g4

0xca91,	// (0x0007b4dc) smil_status_volume_pane_g2

0x2a05,	// (0x00071450) postcard_pane_ParamLimits

0x2a05,	// (0x00071450) postcard_pane

0xb757,	// (0x0007a1a2) postcard_pane_g1_ParamLimits

0xb757,	// (0x0007a1a2) postcard_pane_g1

0x2a55,	// (0x000714a0) postcard_pane_g2_ParamLimits

0x2a55,	// (0x000714a0) postcard_pane_g2

0x2a61,	// (0x000714ac) postcard_pane_g3_ParamLimits

0x2a61,	// (0x000714ac) postcard_pane_g3

0xb765,	// (0x0007a1b0) postcard_pane_g4_ParamLimits

0xb765,	// (0x0007a1b0) postcard_pane_g4

0x2a6d,	// (0x000714b8) postcard_pane_g5_ParamLimits

0x2a6d,	// (0x000714b8) postcard_pane_g5

0x2a82,	// (0x000714cd) postcard_pane_g6_ParamLimits

0x2a82,	// (0x000714cd) postcard_pane_g6

0xb757,	// (0x0007a1a2) postcard_pane_g7_ParamLimits

0xb757,	// (0x0007a1a2) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0007def0) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0007def0) postcard_pane_g

0x2a9a,	// (0x000714e5) main_mp2_pane_g1_ParamLimits

0x2a9a,	// (0x000714e5) main_mp2_pane_g1

0x2aa8,	// (0x000714f3) main_mp2_pane_g2_ParamLimits

0x2aa8,	// (0x000714f3) main_mp2_pane_g2

0x2ab4,	// (0x000714ff) main_mp2_pane_g3_ParamLimits

0x2ab4,	// (0x000714ff) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0007deff) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0007deff) main_mp2_pane_g

0x2ac0,	// (0x0007150b) main_mp2_pane_t1_ParamLimits

0x2ac0,	// (0x0007150b) main_mp2_pane_t1

0x2ad7,	// (0x00071522) main_mp2_pane_t2_ParamLimits

0x2ad7,	// (0x00071522) main_mp2_pane_t2

0x2aeb,	// (0x00071536) main_mp2_pane_t3_ParamLimits

0x2aeb,	// (0x00071536) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0007df06) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0007df06) main_mp2_pane_t

0xb773,	// (0x0007a1be) pec_content_pane_ParamLimits

0xb773,	// (0x0007a1be) pec_content_pane

0xad1e,	// (0x00079769) scroll_pane_cp015

0xb785,	// (0x0007a1d0) pec_attribute_pane_ParamLimits

0xb785,	// (0x0007a1d0) pec_attribute_pane

0x2afd,	// (0x00071548) pec_content_pane_g1_ParamLimits

0x2afd,	// (0x00071548) pec_content_pane_g1

0xb795,	// (0x0007a1e0) pec_content_pane_t1_ParamLimits

0xb795,	// (0x0007a1e0) pec_content_pane_t1

0xb7a7,	// (0x0007a1f2) pec_content_pane_t2_ParamLimits

0xb7a7,	// (0x0007a1f2) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0007df0d) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0007df0d) pec_content_pane_t

0x2b09,	// (0x00071554) list_single_graphic_pane_cp01_ParamLimits

0x2b09,	// (0x00071554) list_single_graphic_pane_cp01

0x9d45,	// (0x00078790) bg_popup_sub_pane_cp04

0xb7b9,	// (0x0007a204) popup_mup_playback_window_g1

0xb7c5,	// (0x0007a210) popup_mup_playback_window_t1

0xb7da,	// (0x0007a225) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0007df12) popup_mup_playback_window_t

0xb811,	// (0x0007a25c) main_image_pane_g1_ParamLimits

0xb811,	// (0x0007a25c) main_image_pane_g1

0xb854,	// (0x0007a29f) scroll_pane_cp018_ParamLimits

0xb854,	// (0x0007a29f) scroll_pane_cp018

0xb86c,	// (0x0007a2b7) scroll_pane_cp016_ParamLimits

0xb86c,	// (0x0007a2b7) scroll_pane_cp016

0x2bdb,	// (0x00071626) smil2_image_pane_ParamLimits

0x2bdb,	// (0x00071626) smil2_image_pane

0x2c11,	// (0x0007165c) smil2_root_pane_ParamLimits

0x2c11,	// (0x0007165c) smil2_root_pane

0x2c49,	// (0x00071694) smil2_text_pane_ParamLimits

0x2c49,	// (0x00071694) smil2_text_pane

0x9aea,	// (0x00078535) bg_list_pane_cp06

0xb8a8,	// (0x0007a2f3) grid_radio_pane

0x9aea,	// (0x00078535) bg_popup_window_pane_cp06

0xb8b2,	// (0x0007a2fd) main_fmradio_pane_t1

0xb268,	// (0x00079cb3) heading_pane_cp04

0xb8c0,	// (0x0007a30b) main_fmradio_pane_t2

0xc8b0,	// (0x0007b2fb) popup_cale_lunar_info_window_g1

0xb8ce,	// (0x0007a319) main_fmradio_pane_t3

0xc8b8,	// (0x0007b303) popup_cale_lunar_info_window_g2

0xb8de,	// (0x0007a329) main_fmradio_pane_t4

0x0001,

0xb8ec,	// (0x0007a337) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0007dfed) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0007df27) main_fmradio_pane_t

0xb8fa,	// (0x0007a345) wait_bar_pane_cp03

0xb902,	// (0x0007a34d) cell_fmradio_pane_ParamLimits

0xb902,	// (0x0007a34d) cell_fmradio_pane

0xb757,	// (0x0007a1a2) cell_fmradio_pane_g1_ParamLimits

0xb757,	// (0x0007a1a2) cell_fmradio_pane_g1

0x9aea,	// (0x00078535) grid_highlight_pane_cp011

0xb917,	// (0x0007a362) poc_content_pane_ParamLimits

0xb917,	// (0x0007a362) poc_content_pane

0xb929,	// (0x0007a374) scroll_pane_cp019

0x2cd9,	// (0x00071724) popup_call_poc_act_window_ParamLimits

0x2cd9,	// (0x00071724) popup_call_poc_act_window

0x2cfd,	// (0x00071748) popup_call_poc_inact_window_ParamLimits

0x2cfd,	// (0x00071748) popup_call_poc_inact_window

0xf579,	// (0x0007dfc4) bg_popup_call_poc_act_pane_g

0xc828,	// (0x0007b273) bg_popup_call_poc_inact_pane_g1

0xc830,	// (0x0007b27b) bg_popup_call_poc_inact_pane_g2

0xb931,	// (0x0007a37c) popup_call_poc_act_window_g2

0xc838,	// (0x0007b283) bg_popup_call_poc_inact_pane_g3

0xc840,	// (0x0007b28b) bg_popup_call_poc_inact_pane_g4

0xc848,	// (0x0007b293) bg_popup_call_poc_inact_pane_g5

0xb939,	// (0x0007a384) popup_call_poc_act_window_t1_ParamLimits

0xb939,	// (0x0007a384) popup_call_poc_act_window_t1

0xb961,	// (0x0007a3ac) popup_call_poc_act_window_t2_ParamLimits

0xb961,	// (0x0007a3ac) popup_call_poc_act_window_t2

0xb989,	// (0x0007a3d4) popup_call_poc_act_window_t3_ParamLimits

0xb989,	// (0x0007a3d4) popup_call_poc_act_window_t3

0xb9b1,	// (0x0007a3fc) popup_call_poc_act_window_t4_ParamLimits

0xb9b1,	// (0x0007a3fc) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0007df32) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0007df32) popup_call_poc_act_window_t

0xc850,	// (0x0007b29b) bg_popup_call_poc_inact_pane_g6

0xc858,	// (0x0007b2a3) bg_popup_call_poc_inact_pane_g7

0xc860,	// (0x0007b2ab) bg_popup_call_poc_inact_pane_g8

0xb9c3,	// (0x0007a40e) popup_call_poc_inact_window_g2

0xc868,	// (0x0007b2b3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0007dfb1) bg_popup_call_poc_inact_pane_g

0xb9cb,	// (0x0007a416) popup_call_poc_inact_window_t1_ParamLimits

0xb9cb,	// (0x0007a416) popup_call_poc_inact_window_t1

0xb9e0,	// (0x0007a42b) popup_call_poc_inact_window_t2_ParamLimits

0xb9e0,	// (0x0007a42b) popup_call_poc_inact_window_t2

0xb9f5,	// (0x0007a440) popup_call_poc_inact_window_t3_ParamLimits

0xb9f5,	// (0x0007a440) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0007df3b) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0007df3b) popup_call_poc_inact_window_t

0xc9f1,	// (0x0007b43c) context_pane_ParamLimits

0x35a6,	// (0x00071ff1) signal_pane_ParamLimits

0xab5c,	// (0x000795a7) main_call2_pane

0xa128,	// (0x00078b73) popup_phob_thumbnail2_window_ParamLimits

0xa128,	// (0x00078b73) popup_phob_thumbnail2_window

0xa0b5,	// (0x00078b00) aid_hotspot_pointer_arrow_pane

0xa0bd,	// (0x00078b08) aid_hotspot_pointer_hand_pane

0x3068,	// (0x00071ab3) phob_pre_status_pane_g5

0x0914,	// (0x0006f35f) cams_zoom_pane_ParamLimits

0x0923,	// (0x0006f36e) image_vga_pane_ParamLimits

0x093d,	// (0x0006f388) main_camera_pane_g1_ParamLimits

0x094f,	// (0x0006f39a) main_camera_pane_g2_ParamLimits

0x095f,	// (0x0006f3aa) main_camera_pane_g3_ParamLimits

0x0973,	// (0x0006f3be) main_camera_pane_g4_ParamLimits

0x0987,	// (0x0006f3d2) main_camera_pane_g5_ParamLimits

0x099b,	// (0x0006f3e6) main_camera_pane_g6_ParamLimits

0x09af,	// (0x0006f3fa) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0007dc3a) main_camera_pane_g_ParamLimits

0x09c3,	// (0x0006f40e) main_camera_pane_t1_ParamLimits

0x09d9,	// (0x0006f424) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0007dc4b) main_camera_pane_t_ParamLimits

0x9d45,	// (0x00078790) bg_popup_preview_window_pane_cp01_ParamLimits

0x9d45,	// (0x00078790) bg_popup_preview_window_pane_cp01

0xba0a,	// (0x0007a455) popup_phob_thumbnail2_window_g1_ParamLimits

0xba0a,	// (0x0007a455) popup_phob_thumbnail2_window_g1

0x9aea,	// (0x00078535) call2_cli_visual_pane

0x2d31,	// (0x0007177c) popup_call2_audio_conf_window_ParamLimits

0x2d31,	// (0x0007177c) popup_call2_audio_conf_window

0x2d59,	// (0x000717a4) popup_call2_audio_first_window_ParamLimits

0x2d59,	// (0x000717a4) popup_call2_audio_first_window

0x2def,	// (0x0007183a) popup_call2_audio_in_window_ParamLimits

0x2def,	// (0x0007183a) popup_call2_audio_in_window

0x2e3b,	// (0x00071886) popup_call2_audio_out_window_ParamLimits

0x2e3b,	// (0x00071886) popup_call2_audio_out_window

0x2ead,	// (0x000718f8) popup_call2_audio_second_window_ParamLimits

0x2ead,	// (0x000718f8) popup_call2_audio_second_window

0x2f13,	// (0x0007195e) popup_call2_audio_wait_window_ParamLimits

0x2f13,	// (0x0007195e) popup_call2_audio_wait_window

0x9aea,	// (0x00078535) bg_popup_call2_act_pane_cp03

0x9d27,	// (0x00078772) list_conf_pane_cp

0xba16,	// (0x0007a461) popup_call2_audio_conf_window_t1

0xba24,	// (0x0007a46f) list_single_graphic_popup_conf2_pane_ParamLimits

0xba24,	// (0x0007a46f) list_single_graphic_popup_conf2_pane

0xb2d7,	// (0x00079d22) list_highlight_pane_cp04

0xba37,	// (0x0007a482) list_single_graphic_popup_conf2_pane_g1

0xb2e8,	// (0x00079d33) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0007df42) list_single_graphic_popup_conf2_pane_g

0xba41,	// (0x0007a48c) list_single_graphic_popup_conf2_pane_t1

0xba4f,	// (0x0007a49a) bg_popup_call2_act_pane_cp01_ParamLimits

0xba4f,	// (0x0007a49a) bg_popup_call2_act_pane_cp01

0xbad9,	// (0x0007a524) call_type_pane_cp05_ParamLimits

0xbad9,	// (0x0007a524) call_type_pane_cp05

0xbb2d,	// (0x0007a578) popup_call2_audio_second_window_g1_ParamLimits

0xbb2d,	// (0x0007a578) popup_call2_audio_second_window_g1

0xbb81,	// (0x0007a5cc) popup_call2_audio_second_window_g2_ParamLimits

0xbb81,	// (0x0007a5cc) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0007df47) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0007df47) popup_call2_audio_second_window_g

0xbbe6,	// (0x0007a631) popup_call2_audio_second_window_t1_ParamLimits

0xbbe6,	// (0x0007a631) popup_call2_audio_second_window_t1

0xbca1,	// (0x0007a6ec) popup_call2_audio_second_window_t2_ParamLimits

0xbca1,	// (0x0007a6ec) popup_call2_audio_second_window_t2

0xbcf4,	// (0x0007a73f) popup_call2_audio_second_window_t3_ParamLimits

0xbcf4,	// (0x0007a73f) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0007df4e) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0007df4e) popup_call2_audio_second_window_t

0x9aea,	// (0x00078535) bg_popup_call2_in_pane_cp02

0x9af4,	// (0x0007853f) call_type_pane_cp04

0x9afc,	// (0x00078547) popup_call2_audio_wait_window_g1

0x9b04,	// (0x0007854f) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0007db29) popup_call2_audio_wait_window_g

0x9b0c,	// (0x00078557) popup_call2_audio_wait_window_t3

0xbde7,	// (0x0007a832) bg_popup_call2_act_pane_ParamLimits

0xbde7,	// (0x0007a832) bg_popup_call2_act_pane

0xbea7,	// (0x0007a8f2) call_type_pane_cp03_ParamLimits

0xbea7,	// (0x0007a8f2) call_type_pane_cp03

0xbf0b,	// (0x0007a956) popup_call2_audio_first_window_g1_ParamLimits

0xbf0b,	// (0x0007a956) popup_call2_audio_first_window_g1

0xbf95,	// (0x0007a9e0) popup_call2_audio_first_window_g2_ParamLimits

0xbf95,	// (0x0007a9e0) popup_call2_audio_first_window_g2

0xb669,	// (0x0007a0b4) popup_call2_audio_first_window_g3_ParamLimits

0xb669,	// (0x0007a0b4) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0007df57) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0007df57) popup_call2_audio_first_window_g

0xc073,	// (0x0007aabe) popup_call2_audio_first_window_t1_ParamLimits

0xc073,	// (0x0007aabe) popup_call2_audio_first_window_t1

0xc176,	// (0x0007abc1) popup_call2_audio_first_window_t4_ParamLimits

0xc176,	// (0x0007abc1) popup_call2_audio_first_window_t4

0xc259,	// (0x0007aca4) popup_call2_audio_first_window_t5_ParamLimits

0xc259,	// (0x0007aca4) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0007df62) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0007df62) popup_call2_audio_first_window_t

0x9d3d,	// (0x00078788) bg_popup_call2_act_pane_g1

0xc8c2,	// (0x0007b30d) popup_cale_lunar_info_window_t1

0xc8d0,	// (0x0007b31b) popup_cale_lunar_info_window_t2

0xc8de,	// (0x0007b329) popup_cale_lunar_info_window_t3

0x9aea,	// (0x00078535) bg_popup_call2_bubble_pane

0xc35a,	// (0x0007ada5) bg_popup_call2_in_pane_cp01_ParamLimits

0xc35a,	// (0x0007ada5) bg_popup_call2_in_pane_cp01

0x97c6,	// (0x00078211) call_type_pane_cp02

0xc3a2,	// (0x0007aded) popup_call2_audio_out_window_g1_ParamLimits

0xc3a2,	// (0x0007aded) popup_call2_audio_out_window_g1

0xc3ce,	// (0x0007ae19) popup_call2_audio_out_window_g2_ParamLimits

0xc3ce,	// (0x0007ae19) popup_call2_audio_out_window_g2

0xc3f6,	// (0x0007ae41) popup_call2_audio_out_window_g3_ParamLimits

0xc3f6,	// (0x0007ae41) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0007df6b) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0007df6b) popup_call2_audio_out_window_g

0xc431,	// (0x0007ae7c) popup_call2_audio_out_window_t1_ParamLimits

0xc431,	// (0x0007ae7c) popup_call2_audio_out_window_t1

0xc490,	// (0x0007aedb) popup_call2_audio_out_window_t2_ParamLimits

0xc490,	// (0x0007aedb) popup_call2_audio_out_window_t2

0xc4e4,	// (0x0007af2f) popup_call2_audio_out_window_t3_ParamLimits

0xc4e4,	// (0x0007af2f) popup_call2_audio_out_window_t3

0xc4fa,	// (0x0007af45) popup_call2_audio_out_window_t4_ParamLimits

0xc4fa,	// (0x0007af45) popup_call2_audio_out_window_t4

0xc510,	// (0x0007af5b) popup_call2_audio_out_window_t5_ParamLimits

0xc510,	// (0x0007af5b) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0007df74) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0007df74) popup_call2_audio_out_window_t

0xc574,	// (0x0007afbf) bg_popup_call2_in_pane_ParamLimits

0xc574,	// (0x0007afbf) bg_popup_call2_in_pane

0xc5d0,	// (0x0007b01b) popup_call2_audio_in_window_g1_ParamLimits

0xc5d0,	// (0x0007b01b) popup_call2_audio_in_window_g1

0xc608,	// (0x0007b053) popup_call2_audio_in_window_g2_ParamLimits

0xc608,	// (0x0007b053) popup_call2_audio_in_window_g2

0xc640,	// (0x0007b08b) popup_call2_audio_in_window_g3_ParamLimits

0xc640,	// (0x0007b08b) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0007df81) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0007df81) popup_call2_audio_in_window_g

0xc698,	// (0x0007b0e3) popup_call2_audio_in_window_t1_ParamLimits

0xc698,	// (0x0007b0e3) popup_call2_audio_in_window_t1

0xc718,	// (0x0007b163) popup_call2_audio_in_window_t2_ParamLimits

0xc718,	// (0x0007b163) popup_call2_audio_in_window_t2

0xc798,	// (0x0007b1e3) popup_call2_audio_in_window_t3_ParamLimits

0xc798,	// (0x0007b1e3) popup_call2_audio_in_window_t3

0xc7b2,	// (0x0007b1fd) popup_call2_audio_in_window_t4_ParamLimits

0xc7b2,	// (0x0007b1fd) popup_call2_audio_in_window_t4

0xc7c4,	// (0x0007b20f) popup_call2_audio_in_window_t5_ParamLimits

0xc7c4,	// (0x0007b20f) popup_call2_audio_in_window_t5

0xc7d6,	// (0x0007b221) popup_call2_audio_in_window_t6_ParamLimits

0xc7d6,	// (0x0007b221) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0007df8a) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0007df8a) popup_call2_audio_in_window_t

0x9d3d,	// (0x00078788) bg_popup_call2_in_pane_g1

0xc8ec,	// (0x0007b337) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0007dff2) popup_cale_lunar_info_window_t

0x9d45,	// (0x00078790) bg_popup_call2_rect_pane_ParamLimits

0x9d45,	// (0x00078790) bg_popup_call2_rect_pane

0x9aea,	// (0x00078535) call2_cli_visual_graphic_pane

0x9aea,	// (0x00078535) call2_cli_visual_text_pane

0xa14f,	// (0x00078b9a) smil_status_volume_pane_g3

0x0002,

0x9ea5,	// (0x000788f0) call2_cli_visual_graphic_pane_g1

0x9ea5,	// (0x000788f0) call2_cli_visual_graphic_pane_g2

0x9ea5,	// (0x000788f0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0007df97) call2_cli_visual_graphic_pane_g

0xc7e8,	// (0x0007b233) bg_popup_call2_rect_pane_g1

0x9f3a,	// (0x00078985) bg_popup_call2_rect_pane_g2

0xc7f0,	// (0x0007b23b) bg_popup_call2_rect_pane_g3

0xc7f8,	// (0x0007b243) bg_popup_call2_rect_pane_g4

0xc800,	// (0x0007b24b) bg_popup_call2_rect_pane_g5

0xc808,	// (0x0007b253) bg_popup_call2_rect_pane_g6

0xc810,	// (0x0007b25b) bg_popup_call2_rect_pane_g7

0xc818,	// (0x0007b263) bg_popup_call2_rect_pane_g8

0xc820,	// (0x0007b26b) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0007df9e) bg_popup_call2_rect_pane_g

0xc828,	// (0x0007b273) bg_popup_call2_bubble_pane_g1

0xc830,	// (0x0007b27b) bg_popup_call2_bubble_pane_g2

0xc838,	// (0x0007b283) bg_popup_call2_bubble_pane_g3

0xc840,	// (0x0007b28b) bg_popup_call2_bubble_pane_g4

0xc848,	// (0x0007b293) bg_popup_call2_bubble_pane_g5

0xc850,	// (0x0007b29b) bg_popup_call2_bubble_pane_g6

0xc858,	// (0x0007b2a3) bg_popup_call2_bubble_pane_g7

0xc860,	// (0x0007b2ab) bg_popup_call2_bubble_pane_g8

0xc868,	// (0x0007b2b3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0007dfb1) bg_popup_call2_bubble_pane_g

0x02cf,	// (0x0006ed1a) aid_cale_week_size_cell_pane

0x09f3,	// (0x0006f43e) aid_cams_cif_uncrop_pane_ParamLimits

0x09f3,	// (0x0006f43e) aid_cams_cif_uncrop_pane

0x0bac,	// (0x0006f5f7) aid_cams_size_cell_ParamLimits

0x0bac,	// (0x0006f5f7) aid_cams_size_cell

0x0bc0,	// (0x0006f60b) grid_cams_pane_ParamLimits

0x0bda,	// (0x0006f625) linegrid_cams_pane_ParamLimits

0x0dcf,	// (0x0006f81a) call_video_pane_t1

0x0de9,	// (0x0006f834) call_video_pane_t2

0x0001,

0xf253,	// (0x0007dc9e) call_video_pane_t

0x1236,	// (0x0006fc81) aid_cale_month_size_cell_pane_ParamLimits

0x1236,	// (0x0006fc81) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0007e03b) smil_status_volume_pane_g

0xa15c,	// (0x00078ba7) volume_smil_pane_ParamLimits

0xfb26,	// (0x0006e571) aid_popup2_width_pane

0x0222,	// (0x0006ec6d) cell_qdial_pane_g4_ParamLimits

0x0222,	// (0x0006ec6d) cell_qdial_pane_g4

0x2271,	// (0x00070cbc) aid_blid_cardinal_pane_ParamLimits

0x2281,	// (0x00070ccc) aid_blid_destination_pane_ParamLimits

0x2281,	// (0x00070ccc) aid_blid_destination_pane

0x9d45,	// (0x00078790) bg_popup_call_poc_act_pane_ParamLimits

0x9d45,	// (0x00078790) bg_popup_call_poc_act_pane

0x9d45,	// (0x00078790) bg_popup_call_poc_inact_pane_ParamLimits

0x9d45,	// (0x00078790) bg_popup_call_poc_inact_pane

0xc870,	// (0x0007b2bb) bg_popup_call_poc_act_pane_g1

0xc878,	// (0x0007b2c3) bg_popup_call_poc_act_pane_g2

0xc880,	// (0x0007b2cb) bg_popup_call_poc_act_pane_g3

0xc840,	// (0x0007b28b) bg_popup_call_poc_act_pane_g4

0xc848,	// (0x0007b293) bg_popup_call_poc_act_pane_g5

0xc888,	// (0x0007b2d3) bg_popup_call_poc_act_pane_g6

0xc858,	// (0x0007b2a3) bg_popup_call_poc_act_pane_g7

0xc890,	// (0x0007b2db) bg_popup_call_poc_act_pane_g8

0x9aea,	// (0x00078535) main_usb_pane

0xa0ff,	// (0x00078b4a) popup_cale_lunar_info_window

0x10b6,	// (0x0006fb01) im_reading_pane_t1_ParamLimits

0xac76,	// (0x000796c1) list_im_pane_ParamLimits

0xac87,	// (0x000796d2) scroll_pane_cp07_ParamLimits

0x9aea,	// (0x00078535) grid_highlight_pane_cp012

0x9d45,	// (0x00078790) mup_scale_pane_ParamLimits

0xb757,	// (0x0007a1a2) main_usb_pane_g1_ParamLimits

0xb757,	// (0x0007a1a2) main_usb_pane_g1

0x2f74,	// (0x000719bf) main_usb_pane_g2_ParamLimits

0x2f74,	// (0x000719bf) main_usb_pane_g2

0x0001,

0xf590,	// (0x0007dfdb) main_usb_pane_g_ParamLimits

0xf590,	// (0x0007dfdb) main_usb_pane_g

0x2f8a,	// (0x000719d5) main_usb_pane_t1_ParamLimits

0x2f8a,	// (0x000719d5) main_usb_pane_t1

0x2f9c,	// (0x000719e7) main_usb_pane_t2_ParamLimits

0x2f9c,	// (0x000719e7) main_usb_pane_t2

0x2fae,	// (0x000719f9) main_usb_pane_t3_ParamLimits

0x2fae,	// (0x000719f9) main_usb_pane_t3

0x2fc0,	// (0x00071a0b) main_usb_pane_t4_ParamLimits

0x2fc0,	// (0x00071a0b) main_usb_pane_t4

0x2fd5,	// (0x00071a20) main_usb_pane_t5_ParamLimits

0x2fd5,	// (0x00071a20) main_usb_pane_t5

0x2fea,	// (0x00071a35) main_usb_pane_t6_ParamLimits

0x2fea,	// (0x00071a35) main_usb_pane_t6

0x0005,

0xf595,	// (0x0007dfe0) main_usb_pane_t_ParamLimits

0x2210,	// (0x00070c5b) aid_text_placing

0x221b,	// (0x00070c66) main_location2_pane_t1_ParamLimits

0x2231,	// (0x00070c7c) main_location2_pane_t2_ParamLimits

0x2247,	// (0x00070c92) main_location2_pane_t3_ParamLimits

0x225d,	// (0x00070ca8) main_location2_pane_t4_ParamLimits

0x225d,	// (0x00070ca8) main_location2_pane_t4

0xf3b4,	// (0x0007ddff) main_location2_pane_t_ParamLimits

0x9d81,	// (0x000787cc) find_pinb_pane_g2_ParamLimits

0x9d81,	// (0x000787cc) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0007db4f) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0007db4f) find_pinb_pane_g

0x9d8d,	// (0x000787d8) find_pinb_pane_t1_ParamLimits

0x9d9f,	// (0x000787ea) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0007db54) find_pinb_pane_t_ParamLimits

0x9aea,	// (0x00078535) main_call3_pane

0x183b,	// (0x00070286) cale_month_day_heading_pane_t1_ParamLimits

0x18c1,	// (0x0007030c) cale_month_day_heading_pane_t2_ParamLimits

0x193a,	// (0x00070385) cale_month_day_heading_pane_t3_ParamLimits

0x19b3,	// (0x000703fe) cale_month_day_heading_pane_t4_ParamLimits

0x1a34,	// (0x0007047f) cale_month_day_heading_pane_t5_ParamLimits

0x1abd,	// (0x00070508) cale_month_day_heading_pane_t6_ParamLimits

0x1b4e,	// (0x00070599) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0007dcd6) cale_month_day_heading_pane_t_ParamLimits

0xaed1,	// (0x0007991c) smil_status_volume_pane

0x2a29,	// (0x00071474) postcard_address_pane_ParamLimits

0x2a29,	// (0x00071474) postcard_address_pane

0x2a3f,	// (0x0007148a) postcard_message_pane_ParamLimits

0x2a3f,	// (0x0007148a) postcard_message_pane

0x2f4d,	// (0x00071998) call2_cli_visual_pane_t1_ParamLimits

0x2f4d,	// (0x00071998) call2_cli_visual_pane_t1

0x37b7,	// (0x00072202) postcard_message_pane_t1_ParamLimits

0x37b7,	// (0x00072202) postcard_message_pane_t1

0xcaa4,	// (0x0007b4ef) postcard_address_pane_t1_ParamLimits

0xcaa4,	// (0x0007b4ef) postcard_address_pane_t1

0x37a3,	// (0x000721ee) popup_call3_audio_in_window_ParamLimits

0x37a3,	// (0x000721ee) popup_call3_audio_in_window

0x3628,	// (0x00072073) bg_popup_call3_in_pane_ParamLimits

0x3628,	// (0x00072073) bg_popup_call3_in_pane

0x36a4,	// (0x000720ef) popup_call3_audio_in_window_g1_ParamLimits

0x36a4,	// (0x000720ef) popup_call3_audio_in_window_g1

0x36c4,	// (0x0007210f) popup_call3_audio_in_window_g2_ParamLimits

0x36c4,	// (0x0007210f) popup_call3_audio_in_window_g2

0x36e4,	// (0x0007212f) popup_call3_audio_in_window_g3_ParamLimits

0x36e4,	// (0x0007212f) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0007e042) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0007e042) popup_call3_audio_in_window_g

0x3715,	// (0x00072160) popup_call3_audio_in_window_t1_ParamLimits

0x3715,	// (0x00072160) popup_call3_audio_in_window_t1

0x3753,	// (0x0007219e) popup_call3_audio_in_window_t2_ParamLimits

0x3753,	// (0x0007219e) popup_call3_audio_in_window_t2

0x3791,	// (0x000721dc) popup_call3_audio_in_window_t3_ParamLimits

0x3791,	// (0x000721dc) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0007e04b) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0007e04b) popup_call3_audio_in_window_t

0xab5c,	// (0x000795a7) bg_popup_call3_rect_pane

0xc7e8,	// (0x0007b233) bg_popup_call3_rect_pane_g1

0x9f3a,	// (0x00078985) bg_popup_call3_rect_pane_g2

0xc7f0,	// (0x0007b23b) bg_popup_call3_rect_pane_g3

0xc7f8,	// (0x0007b243) bg_popup_call3_rect_pane_g4

0xc800,	// (0x0007b24b) bg_popup_call3_rect_pane_g5

0xc808,	// (0x0007b253) bg_popup_call3_rect_pane_g6

0xc810,	// (0x0007b25b) bg_popup_call3_rect_pane_g7

0x2581,	// (0x00070fcc) mup_visualizer_osc_pane

0xb677,	// (0x0007a0c2) mup_visualizer_spec_pane

0x3658,	// (0x000720a3) call3_video_qcif_pane_ParamLimits

0x3658,	// (0x000720a3) call3_video_qcif_pane

0x366b,	// (0x000720b6) call3_video_qcif_uncrop_pane_ParamLimits

0x366b,	// (0x000720b6) call3_video_qcif_uncrop_pane

0x367b,	// (0x000720c6) call3_video_subqcif_pane_ParamLimits

0x367b,	// (0x000720c6) call3_video_subqcif_pane

0x3691,	// (0x000720dc) call3_video_subqcif_uncrop_pane_ParamLimits

0x3691,	// (0x000720dc) call3_video_subqcif_uncrop_pane

0x3704,	// (0x0007214f) popup_call3_audio_in_window_g4_ParamLimits

0x3704,	// (0x0007214f) popup_call3_audio_in_window_g4

0x3617,	// (0x00072062) mup_spec_half_pane

0x3620,	// (0x0007206b) mup_spec_half_pane_cp

0xca64,	// (0x0007b4af) mup_osc_middle_pane

0xca6d,	// (0x0007b4b8) mup_visualizer_osc_pane_g1

0x35f7,	// (0x00072042) mup_spec_bar_pane_ParamLimits

0x35f7,	// (0x00072042) mup_spec_bar_pane

0xca51,	// (0x0007b49c) mup_spec_bar_pane_g1

0xca5b,	// (0x0007b4a6) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0007e036) mup_spec_bar_pane_g

0x02cf,	// (0x0006ed1a) aid_cale_week_size_cell_pane_ParamLimits

0x02e9,	// (0x0006ed34) bg_cale_heading_pane_ParamLimits

0x030d,	// (0x0006ed58) bg_cale_pane_cp01_ParamLimits

0x032a,	// (0x0006ed75) cale_week_corner_pane_ParamLimits

0x0349,	// (0x0006ed94) cale_week_day_heading_pane_ParamLimits

0x0372,	// (0x0006edbd) cale_week_scroll_pane_g1_ParamLimits

0x0391,	// (0x0006eddc) cale_week_scroll_pane_g2_ParamLimits

0x03a9,	// (0x0006edf4) cale_week_scroll_pane_g3_ParamLimits

0x03c1,	// (0x0006ee0c) cale_week_scroll_pane_g4_ParamLimits

0x03d9,	// (0x0006ee24) cale_week_scroll_pane_g5_ParamLimits

0x03f9,	// (0x0006ee44) cale_week_scroll_pane_g6_ParamLimits

0x0419,	// (0x0006ee64) cale_week_scroll_pane_g7_ParamLimits

0x043d,	// (0x0006ee88) cale_week_scroll_pane_g8_ParamLimits

0x0461,	// (0x0006eeac) cale_week_scroll_pane_g9_ParamLimits

0x0479,	// (0x0006eec4) cale_week_scroll_pane_g10_ParamLimits

0x0491,	// (0x0006eedc) cale_week_scroll_pane_g11_ParamLimits

0x04a9,	// (0x0006eef4) cale_week_scroll_pane_g12_ParamLimits

0x04cd,	// (0x0006ef18) cale_week_scroll_pane_g13_ParamLimits

0x04cd,	// (0x0006ef18) cale_week_scroll_pane_g14_ParamLimits

0x04cd,	// (0x0006ef18) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0007dbe0) cale_week_scroll_pane_g_ParamLimits

0x0515,	// (0x0006ef60) cale_week_time_pane_ParamLimits

0x0539,	// (0x0006ef84) grid_cale_week_pane_ParamLimits

0x9fbf,	// (0x00078a0a) listscroll_cale_week_pane_t1

0x9fd1,	// (0x00078a1c) scroll_pane_cp08_ParamLimits

0x12ae,	// (0x0006fcf9) cale_month_corner_pane_ParamLimits

0xaea7,	// (0x000798f2) cale_month_pane_t1

0x17b6,	// (0x00070201) cale_month_week_pane_ParamLimits

0x202c,	// (0x00070a77) popup_call_status_window_g1_ParamLimits

0x2040,	// (0x00070a8b) popup_call_status_window_g2_ParamLimits

0x2054,	// (0x00070a9f) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0007dd86) popup_call_status_window_g_ParamLimits

0xb258,	// (0x00079ca3) aid_call2_pane

0x2855,	// (0x000712a0) msg_header_pane_g1

0x2a29,	// (0x00071474) postcard_address2_pane_ParamLimits

0x2a29,	// (0x00071474) postcard_address2_pane

0x2a3f,	// (0x0007148a) postcard_message2_pane_ParamLimits

0x2a3f,	// (0x0007148a) postcard_message2_pane

0x35b4,	// (0x00071fff) message2_row_pane_ParamLimits

0x35b4,	// (0x00071fff) message2_row_pane

0xca0c,	// (0x0007b457) address2_row_pane_ParamLimits

0xca0c,	// (0x0007b457) address2_row_pane

0xca1f,	// (0x0007b46a) postcard_message2_row_pane_g1

0xca27,	// (0x0007b472) postcard_message2_row_pane_t1

0xca1f,	// (0x0007b46a) address2_row_pane_g1

0xca27,	// (0x0007b472) address2_row_pane_t1

0x08a6,	// (0x0006f2f1) aid_size_cell_vorec

0x9aea,	// (0x00078535) main_rss_pane

0x35d7,	// (0x00072022) rss_list_single_pane_ParamLimits

0x35d7,	// (0x00072022) rss_list_single_pane

0xca35,	// (0x0007b480) rss_list_single_pane_t1

0xca43,	// (0x0007b48e) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0007e031) rss_list_single_pane_t

0x9aea,	// (0x00078535) main_camera2_pane

0x9aea,	// (0x00078535) main_video2_pane

0x3826,	// (0x00072271) cams_zoom_pane_cp2_ParamLimits

0x3826,	// (0x00072271) cams_zoom_pane_cp2

0x383d,	// (0x00072288) image2_vga_pane_ParamLimits

0x383d,	// (0x00072288) image2_vga_pane

0x3885,	// (0x000722d0) main_camera2_pane_g1_ParamLimits

0x3885,	// (0x000722d0) main_camera2_pane_g1

0x38a5,	// (0x000722f0) main_camera2_pane_g2_ParamLimits

0x38a5,	// (0x000722f0) main_camera2_pane_g2

0x38bc,	// (0x00072307) main_camera2_pane_g3_ParamLimits

0x38bc,	// (0x00072307) main_camera2_pane_g3

0x38d3,	// (0x0007231e) main_camera2_pane_g4_ParamLimits

0x38d3,	// (0x0007231e) main_camera2_pane_g4

0x38ea,	// (0x00072335) main_camera2_pane_g5_ParamLimits

0x38ea,	// (0x00072335) main_camera2_pane_g5

0x3901,	// (0x0007234c) main_camera2_pane_g6_ParamLimits

0x3901,	// (0x0007234c) main_camera2_pane_g6

0x3918,	// (0x00072363) main_camera2_pane_g7_ParamLimits

0x3918,	// (0x00072363) main_camera2_pane_g7

0x392f,	// (0x0007237a) main_camera2_pane_g8_ParamLimits

0x392f,	// (0x0007237a) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0007e052) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0007e052) main_camera2_pane_g

0x395d,	// (0x000723a8) main_camera2_pane_t1_ParamLimits

0x395d,	// (0x000723a8) main_camera2_pane_t1

0x3992,	// (0x000723dd) main_camera2_pane_t2_ParamLimits

0x3992,	// (0x000723dd) main_camera2_pane_t2

0x39af,	// (0x000723fa) main_camera2_pane_t3_ParamLimits

0x39af,	// (0x000723fa) main_camera2_pane_t3

0x3a0d,	// (0x00072458) main_camera2_pane_t4_ParamLimits

0x3a0d,	// (0x00072458) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0007e065) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0007e065) main_camera2_pane_t

0x3a96,	// (0x000724e1) cams_zoom_pane_cp4_ParamLimits

0x3a96,	// (0x000724e1) cams_zoom_pane_cp4

0x3aac,	// (0x000724f7) image2_cif_pane_ParamLimits

0x3aac,	// (0x000724f7) image2_cif_pane

0x3ad7,	// (0x00072522) image2_subqcif_pane_ParamLimits

0x3ad7,	// (0x00072522) image2_subqcif_pane

0x3af2,	// (0x0007253d) main_video2_pane_g1_ParamLimits

0x3af2,	// (0x0007253d) main_video2_pane_g1

0x3b0c,	// (0x00072557) main_video2_pane_g2_ParamLimits

0x3b0c,	// (0x00072557) main_video2_pane_g2

0x3b22,	// (0x0007256d) main_video2_pane_g3_ParamLimits

0x3b22,	// (0x0007256d) main_video2_pane_g3

0x3b38,	// (0x00072583) main_video2_pane_g4_ParamLimits

0x3b38,	// (0x00072583) main_video2_pane_g4

0x3b4e,	// (0x00072599) main_video2_pane_g5_ParamLimits

0x3b4e,	// (0x00072599) main_video2_pane_g5

0x3b64,	// (0x000725af) main_video2_pane_g6_ParamLimits

0x3b64,	// (0x000725af) main_video2_pane_g6

0x0005,

0xf629,	// (0x0007e074) main_video2_pane_g_ParamLimits

0xf629,	// (0x0007e074) main_video2_pane_g

0x3b7e,	// (0x000725c9) main_video2_pane_t1_ParamLimits

0x3b7e,	// (0x000725c9) main_video2_pane_t1

0x3ba2,	// (0x000725ed) main_video2_pane_t2_ParamLimits

0x3ba2,	// (0x000725ed) main_video2_pane_t2

0x3bf2,	// (0x0007263d) main_video2_pane_t3_ParamLimits

0x3bf2,	// (0x0007263d) main_video2_pane_t3

0x0002,

0xf636,	// (0x0007e081) main_video2_pane_t_ParamLimits

0xf636,	// (0x0007e081) main_video2_pane_t

0x30a8,	// (0x00071af3) call_muted_g2

0x0001,

0xf5d8,	// (0x0007e023) call_muted_g

0x9aea,	// (0x00078535) main_mup2_pane

0x3c3a,	// (0x00072685) main_mup2_pane_g1_ParamLimits

0x3c3a,	// (0x00072685) main_mup2_pane_g1

0x3c46,	// (0x00072691) main_mup2_pane_g2_ParamLimits

0x3c46,	// (0x00072691) main_mup2_pane_g2

0xa1c5,	// (0x00078c10) main_mup_pane_g13_cp1

0xa1cd,	// (0x00078c18) mup_volume_pane_cp1

0x3c64,	// (0x000726af) main_mup2_pane_g4_ParamLimits

0x3c64,	// (0x000726af) main_mup2_pane_g4

0x3c76,	// (0x000726c1) main_mup2_pane_g5_ParamLimits

0x3c76,	// (0x000726c1) main_mup2_pane_g5

0x3c88,	// (0x000726d3) main_mup2_pane_g6_ParamLimits

0x3c88,	// (0x000726d3) main_mup2_pane_g6

0x3c9a,	// (0x000726e5) main_mup2_pane_g7_ParamLimits

0x3c9a,	// (0x000726e5) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0007e088) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0007e088) main_mup2_pane_g

0x3cb2,	// (0x000726fd) main_mup2_pane_t1_ParamLimits

0x3cb2,	// (0x000726fd) main_mup2_pane_t1

0x3cc8,	// (0x00072713) main_mup2_pane_t2_ParamLimits

0x3cc8,	// (0x00072713) main_mup2_pane_t2

0x3cde,	// (0x00072729) main_mup2_pane_t3_ParamLimits

0x3cde,	// (0x00072729) main_mup2_pane_t3

0x3cf4,	// (0x0007273f) main_mup2_pane_t4_ParamLimits

0x3cf4,	// (0x0007273f) main_mup2_pane_t4

0x3d0c,	// (0x00072757) main_mup2_pane_t5_ParamLimits

0x3d0c,	// (0x00072757) main_mup2_pane_t5

0x3d24,	// (0x0007276f) main_mup2_pane_t6_ParamLimits

0x3d24,	// (0x0007276f) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0007e097) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0007e097) main_mup2_pane_t

0x3d54,	// (0x0007279f) mup2_visualizer_pane_ParamLimits

0x3d54,	// (0x0007279f) mup2_visualizer_pane

0x3d82,	// (0x000727cd) mup_progress_pane_cp_ParamLimits

0x3d82,	// (0x000727cd) mup_progress_pane_cp

0xa1b0,	// (0x00078bfb) mup_volume_pane_cp_ParamLimits

0xa1b0,	// (0x00078bfb) mup_volume_pane_cp

0x3d98,	// (0x000727e3) mup2_visualizer_pane_g1_ParamLimits

0x3d98,	// (0x000727e3) mup2_visualizer_pane_g1

0xcabb,	// (0x0007b506) mup2_visualizer_pane_g2_ParamLimits

0xcabb,	// (0x0007b506) mup2_visualizer_pane_g2

0x3dad,	// (0x000727f8) mup2_visualizer_pane_g3_ParamLimits

0x3dad,	// (0x000727f8) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0007e0a4) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0007e0a4) mup2_visualizer_pane_g

0xb8a0,	// (0x0007a2eb) aid_size_cell_fmradio

0x3258,	// (0x00071ca3) aid_height_parent_landcape

0xad05,	// (0x00079750) wml_content_pane_cp

0xad0d,	// (0x00079758) wml_tabs_pane

0xad16,	// (0x00079761) popup_wml_miniature_window

0xad1e,	// (0x00079769) scroll_pane_cp021

0xad32,	// (0x0007977d) wml_content_pane_comp8

0x9aea,	// (0x00078535) bg_popup_sub_pane_cp05

0xcad9,	// (0x0007b524) popup_wml_miniature_window_g1

0xcae1,	// (0x0007b52c) wml_miniature_view_pane

0x3db9,	// (0x00072804) aid_size_wml_view

0x3dc1,	// (0x0007280c) wml_miniature_view_pane_g1

0x3dca,	// (0x00072815) wml_miniature_view_pane_g2

0x3dd3,	// (0x0007281e) wml_miniature_view_pane_g3

0x3ddb,	// (0x00072826) wml_miniature_view_pane_g4

0x3de3,	// (0x0007282e) wml_miniature_view_pane_g5

0x3deb,	// (0x00072836) wml_miniature_view_pane_g6

0x3df3,	// (0x0007283e) wml_miniature_view_pane_g7

0x3dfb,	// (0x00072846) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0007e0ab) wml_miniature_view_pane_g

0xcae9,	// (0x0007b534) background_graphic_ParamLimits

0xcae9,	// (0x0007b534) background_graphic

0xcaf5,	// (0x0007b540) wml_tabs_2_pane

0xcafe,	// (0x0007b549) wml_tabs_3_pane_ParamLimits

0xcafe,	// (0x0007b549) wml_tabs_3_pane

0xcb10,	// (0x0007b55b) wml_tabs_4_pane_ParamLimits

0xcb10,	// (0x0007b55b) wml_tabs_4_pane

0xcb26,	// (0x0007b571) wml_tabs_5_pane_ParamLimits

0xcb26,	// (0x0007b571) wml_tabs_5_pane

0xcb40,	// (0x0007b58b) wml_tabs_pane_g2_ParamLimits

0xcb40,	// (0x0007b58b) wml_tabs_pane_g2

0xcb54,	// (0x0007b59f) wml_tabs_pane_g3_ParamLimits

0xcb54,	// (0x0007b59f) wml_tabs_pane_g3

0x3e03,	// (0x0007284e) wml_tabs_2_active_pane_ParamLimits

0x3e03,	// (0x0007284e) wml_tabs_2_active_pane

0x3e17,	// (0x00072862) wml_tabs_2_passive_pane_ParamLimits

0x3e17,	// (0x00072862) wml_tabs_2_passive_pane

0x3e2b,	// (0x00072876) wml_tabs_3_active_pane_cp_ParamLimits

0x3e2b,	// (0x00072876) wml_tabs_3_active_pane_cp

0x3e40,	// (0x0007288b) wml_tabs_3_passive_pane_ParamLimits

0x3e40,	// (0x0007288b) wml_tabs_3_passive_pane

0x3e53,	// (0x0007289e) wml_tabs_3_passive_pane_cp_ParamLimits

0x3e53,	// (0x0007289e) wml_tabs_3_passive_pane_cp

0x3e6a,	// (0x000728b5) tabs_4_active_pane

0x3e72,	// (0x000728bd) tabs_4_passive_pane

0x3e7c,	// (0x000728c7) tabs_4_passive_pane_cp

0x3e84,	// (0x000728cf) tabs_4_passive_pane_cp2

0x2f6c,	// (0x000719b7) aid_height_text

0x2553,	// (0x00070f9e) mup_volume_cont_pane_ParamLimits

0x2553,	// (0x00070f9e) mup_volume_cont_pane

0xfea5,	// (0x0006e8f0) aid_size_cell_pinb

0xfeaf,	// (0x0006e8fa) aid_size_list_pinb

0x3d6e,	// (0x000727b9) mup2_volume_cont_pane_ParamLimits

0x3d6e,	// (0x000727b9) mup2_volume_cont_pane

0xa19c,	// (0x00078be7) mup2_volume_cont_pane_g1_ParamLimits

0xa19c,	// (0x00078be7) mup2_volume_cont_pane_g1

0xfb32,	// (0x0006e57d) aid_size_cell_touch_ParamLimits

0xfb32,	// (0x0006e57d) aid_size_cell_touch

0xfdc9,	// (0x0006e814) touch_pane_ParamLimits

0xfdc9,	// (0x0006e814) touch_pane

0xf09d,	// (0x0007dae8) main_rss2_pane

0xcb71,	// (0x0007b5bc) listscroll_rss2_pane

0xcb7a,	// (0x0007b5c5) rss2_navigation_pane

0xcb82,	// (0x0007b5cd) list_rss2_pane

0xb37c,	// (0x00079dc7) scroll_pane_cp22

0xcb8a,	// (0x0007b5d5) rss2_navigation_pane_g1

0xcb93,	// (0x0007b5de) rss2_navigation_pane_g2

0xcb9b,	// (0x0007b5e6) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0007e0bc) rss2_navigation_pane_g

0xcba3,	// (0x0007b5ee) rss2_navigation_pane_t1

0x3e8e,	// (0x000728d9) rss2_list_single_pane_ParamLimits

0x3e8e,	// (0x000728d9) rss2_list_single_pane

0xcbb1,	// (0x0007b5fc) rss2_list_single_pane_t2

0xcbbf,	// (0x0007b60a) rss2_list_single_pane_t3_ParamLimits

0xcbbf,	// (0x0007b60a) rss2_list_single_pane_t3

0xcbdc,	// (0x0007b627) rss2_list_single_pane_t4

0x1e2c,	// (0x00070877) smil_status_pane_g1

0x9694,	// (0x000780df) main_image2_pane_ParamLimits

0x9694,	// (0x000780df) main_image2_pane

0x3946,	// (0x00072391) main_camera2_pane_g9_ParamLimits

0x3946,	// (0x00072391) main_camera2_pane_g9

0x3a62,	// (0x000724ad) main_camera2_pane_t5_ParamLimits

0x3a62,	// (0x000724ad) main_camera2_pane_t5

0xa171,	// (0x00078bbc) main_camera2_pane_t6_ParamLimits

0xa171,	// (0x00078bbc) main_camera2_pane_t6

0x3ea8,	// (0x000728f3) main_image2_pane_g1_ParamLimits

0x3ea8,	// (0x000728f3) main_image2_pane_g1

0x2c83,	// (0x000716ce) smil2_video_pane_ParamLimits

0x2c83,	// (0x000716ce) smil2_video_pane

0xfb72,	// (0x0006e5bd) aid_zoom_text_primary_cp

0xfd69,	// (0x0006e7b4) popup_preview_fixed_window

0xac6e,	// (0x000796b9) im_reading_pane_g1

0x3818,	// (0x00072263) cams2_bc_adjust_pane_cp_ParamLimits

0x3818,	// (0x00072263) cams2_bc_adjust_pane_cp

0x3a88,	// (0x000724d3) cams2_bc_adjust_pane_ParamLimits

0x3a88,	// (0x000724d3) cams2_bc_adjust_pane

0xcbea,	// (0x0007b635) cams2_bc_adjust_pane_g1

0xa1d5,	// (0x00078c20) cams2_slider_pane

0xa1de,	// (0x00078c29) cams2_slider_pane_g1

0xa1e7,	// (0x00078c32) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0007e0c3) cams2_slider_pane_g

0xffa1,	// (0x0006e9ec) calc_display_pane_ParamLimits

0xffc6,	// (0x0006ea11) calc_paper_pane_ParamLimits

0xffe9,	// (0x0006ea34) grid_calc_pane_ParamLimits

0xa086,	// (0x00078ad1) popup_clock_digital_window_t1_ParamLimits

0xb83d,	// (0x0007a288) main_image_pane_t1

0xff81,	// (0x0006e9cc) aid_size_cell_calc_ParamLimits

0xff81,	// (0x0006e9cc) aid_size_cell_calc

0x32ae,	// (0x00071cf9) popup_blid_sat_info2_window_ParamLimits

0x32ae,	// (0x00071cf9) popup_blid_sat_info2_window

0xcbfa,	// (0x0007b645) aid_size_cell_blid

0xcc02,	// (0x0007b64d) bg_popup_window_pane_cp07

0xcc25,	// (0x0007b670) grid_popup_blid_pane

0xcc2f,	// (0x0007b67a) heading_pane_cp05_ParamLimits

0xcc2f,	// (0x0007b67a) heading_pane_cp05

0xccf9,	// (0x0007b744) cell_popup_blid_pane_ParamLimits

0xccf9,	// (0x0007b744) cell_popup_blid_pane

0xcd23,	// (0x0007b76e) cell_popup_blid_pane_g1

0xcd2b,	// (0x0007b776) cell_popup_blid_pane_t1

0x3d3e,	// (0x00072789) mup2_indicator_pane_ParamLimits

0x3d3e,	// (0x00072789) mup2_indicator_pane

0xab5c,	// (0x000795a7) mup2_visualizer_osc_pane

0xcac7,	// (0x0007b512) mup2_visualizer_spec_pane_ParamLimits

0xcac7,	// (0x0007b512) mup2_visualizer_spec_pane

0x3ebe,	// (0x00072909) mup2_spec_half_pane

0x3ec7,	// (0x00072912) mup2_spec_half_pane_cp

0x3ecf,	// (0x0007291a) mup2_spec_bar_pane_ParamLimits

0x3ecf,	// (0x0007291a) mup2_spec_bar_pane

0xca51,	// (0x0007b49c) mup2_spec_bar_pane_g1

0xca5b,	// (0x0007b4a6) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0007e036) mup2_spec_bar_pane_g

0x3eef,	// (0x0007293a) mup2_osc_middle_pane

0xca6d,	// (0x0007b4b8) mup2_visualizer_osc_pane_g1

0x96c2,	// (0x0007810d) popup_number_entry_window_t1_ParamLimits

0x96d5,	// (0x00078120) popup_number_entry_window_t2_ParamLimits

0x96e7,	// (0x00078132) popup_number_entry_window_t3_ParamLimits

0x96f9,	// (0x00078144) popup_number_entry_window_t5_ParamLimits

0x96f9,	// (0x00078144) popup_number_entry_window_t5

0xf0af,	// (0x0007dafa) popup_number_entry_window_t_ParamLimits

0x972e,	// (0x00078179) text_title_cp2_ParamLimits

0xa0c5,	// (0x00078b10) aid_hotspot_pointer_text2_pane

0xa0eb,	// (0x00078b36) main_viewer_pane_g9_ParamLimits

0xa0eb,	// (0x00078b36) main_viewer_pane_g9

0xaea7,	// (0x000798f2) cale_month_pane_t1_ParamLimits

0xaee4,	// (0x0007992f) bg_cale_pane_ParamLimits

0xaefc,	// (0x00079947) list_cale_pane_ParamLimits

0xaf0d,	// (0x00079958) listscroll_cale_day_pane_t1

0xaf1f,	// (0x0007996a) scroll_pane_cp09_ParamLimits

0x2589,	// (0x00070fd4) main_mup_eq_pane_t1_ParamLimits

0x2589,	// (0x00070fd4) main_mup_eq_pane_t1

0x25a5,	// (0x00070ff0) main_mup_eq_pane_t2_ParamLimits

0x25a5,	// (0x00070ff0) main_mup_eq_pane_t2

0x25c1,	// (0x0007100c) main_mup_eq_pane_t3_ParamLimits

0x25c1,	// (0x0007100c) main_mup_eq_pane_t3

0x25df,	// (0x0007102a) main_mup_eq_pane_t4_ParamLimits

0x25df,	// (0x0007102a) main_mup_eq_pane_t4

0x25fd,	// (0x00071048) main_mup_eq_pane_t5_ParamLimits

0x25fd,	// (0x00071048) main_mup_eq_pane_t5

0x261b,	// (0x00071066) main_mup_eq_pane_t6_ParamLimits

0x261b,	// (0x00071066) main_mup_eq_pane_t6

0x2631,	// (0x0007107c) main_mup_eq_pane_t7_ParamLimits

0x2631,	// (0x0007107c) main_mup_eq_pane_t7

0x2647,	// (0x00071092) main_mup_eq_pane_t8_ParamLimits

0x2647,	// (0x00071092) main_mup_eq_pane_t8

0x265d,	// (0x000710a8) main_mup_eq_pane_t9_ParamLimits

0x265d,	// (0x000710a8) main_mup_eq_pane_t9

0x2679,	// (0x000710c4) main_mup_eq_pane_t10_ParamLimits

0x2679,	// (0x000710c4) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0007de85) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0007de85) main_mup_eq_pane_t

0x274e,	// (0x00071199) mup_equalizer_pane_cp5_ParamLimits

0x2766,	// (0x000711b1) mup_equalizer_pane_cp6_ParamLimits

0x277e,	// (0x000711c9) mup_equalizer_pane_cp7_ParamLimits

0xf09d,	// (0x0007dae8) main_gallery_pane

0xca76,	// (0x0007b4c1) smil2_volume_pane

0xca7e,	// (0x0007b4c9) smil_status_volume_pane_g1_ParamLimits

0xca91,	// (0x0007b4dc) smil_status_volume_pane_g2_ParamLimits

0xa14f,	// (0x00078b9a) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0007e03b) smil_status_volume_pane_g_ParamLimits

0xcc02,	// (0x0007b64d) bg_popup_window_pane_cp07_ParamLimits

0xcc10,	// (0x0007b65b) blid_firmament_pane

0x3ef8,	// (0x00072943) aid_size_cell_gallery_ParamLimits

0x3ef8,	// (0x00072943) aid_size_cell_gallery

0x3f0e,	// (0x00072959) grid_gallery_pane_ParamLimits

0x3f0e,	// (0x00072959) grid_gallery_pane

0x3f29,	// (0x00072974) cell_gallery_pane_ParamLimits

0x3f29,	// (0x00072974) cell_gallery_pane

0xcd39,	// (0x0007b784) bg_cell_gallery_focus_pane_ParamLimits

0xcd39,	// (0x0007b784) bg_cell_gallery_focus_pane

0xcd4b,	// (0x0007b796) cell_gallery_pane_g1_ParamLimits

0xcd4b,	// (0x0007b796) cell_gallery_pane_g1

0x3f7a,	// (0x000729c5) cell_gallery_pane_g2_ParamLimits

0x3f7a,	// (0x000729c5) cell_gallery_pane_g2

0x3f87,	// (0x000729d2) cell_gallery_pane_g3_ParamLimits

0x3f87,	// (0x000729d2) cell_gallery_pane_g3

0xcd57,	// (0x0007b7a2) cell_gallery_pane_g4_ParamLimits

0xcd57,	// (0x0007b7a2) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0007e0e9) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0007e0e9) cell_gallery_pane_g

0xcd63,	// (0x0007b7ae) bg_cell_gallery_focus_pane_g1

0xcd6b,	// (0x0007b7b6) bg_cell_gallery_focus_pane_g2

0xcd73,	// (0x0007b7be) bg_cell_gallery_focus_pane_g3

0xcd7b,	// (0x0007b7c6) bg_cell_gallery_focus_pane_g4

0xcd83,	// (0x0007b7ce) bg_cell_gallery_focus_pane_g5

0xcd8b,	// (0x0007b7d6) bg_cell_gallery_focus_pane_g6

0xcd93,	// (0x0007b7de) bg_cell_gallery_focus_pane_g7

0xcd9b,	// (0x0007b7e6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0007e0f2) bg_cell_gallery_focus_pane_g

0xcda3,	// (0x0007b7ee) aid_firma_cardinal

0xcdb7,	// (0x0007b802) blid_firmament_pane_t1

0xcdce,	// (0x0007b819) blid_firmament_pane_t2

0xcde5,	// (0x0007b830) blid_firmament_pane_t3

0xcdfc,	// (0x0007b847) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0007e103) blid_firmament_pane_t

0xce13,	// (0x0007b85e) blid_sat_info_pane

0xce23,	// (0x0007b86e) blid_sat_info_pane_g1

0xce23,	// (0x0007b86e) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0007e10c) blid_sat_info_pane_g

0xce2d,	// (0x0007b878) blid_sat_info_pane_t1

0xce3b,	// (0x0007b886) smil2_volume_content_pane

0xce44,	// (0x0007b88f) smil2_volume_pane_g1

0x9ed1,	// (0x0007891c) smil2_volume_content_pane_g1

0xce4c,	// (0x0007b897) smil2_volume_content_pane_g2

0xce55,	// (0x0007b8a0) smil2_volume_content_pane_g3

0xce5e,	// (0x0007b8a9) smil2_volume_content_pane_g4

0xce67,	// (0x0007b8b2) smil2_volume_content_pane_g5

0xce70,	// (0x0007b8bb) smil2_volume_content_pane_g6

0xce79,	// (0x0007b8c4) smil2_volume_content_pane_g7

0xce82,	// (0x0007b8cd) smil2_volume_content_pane_g8

0xce8b,	// (0x0007b8d6) smil2_volume_content_pane_g9

0xce94,	// (0x0007b8df) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0007e111) smil2_volume_content_pane_g

0x0607,	// (0x0006f052) cale_week_day_heading_pane_t1_ParamLimits

0x0631,	// (0x0006f07c) cale_week_day_heading_pane_t2_ParamLimits

0x0660,	// (0x0006f0ab) cale_week_day_heading_pane_t3_ParamLimits

0x068f,	// (0x0006f0da) cale_week_day_heading_pane_t4_ParamLimits

0x06be,	// (0x0006f109) cale_week_day_heading_pane_t5_ParamLimits

0x06f1,	// (0x0006f13c) cale_week_day_heading_pane_t6_ParamLimits

0x0728,	// (0x0006f173) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0007dc01) cale_week_day_heading_pane_t_ParamLimits

0x9fee,	// (0x00078a39) bg_cale_side_pane_ParamLimits

0x0752,	// (0x0006f19d) cale_week_time_pane_t1_ParamLimits

0x076c,	// (0x0006f1b7) cale_week_time_pane_t2_ParamLimits

0x0786,	// (0x0006f1d1) cale_week_time_pane_t3_ParamLimits

0x07a0,	// (0x0006f1eb) cale_week_time_pane_t4_ParamLimits

0x07ba,	// (0x0006f205) cale_week_time_pane_t5_ParamLimits

0x07d4,	// (0x0006f21f) cale_week_time_pane_t6_ParamLimits

0x07f4,	// (0x0006f23f) cale_week_time_pane_t7_ParamLimits

0x081a,	// (0x0006f265) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0007dc10) cale_week_time_pane_t_ParamLimits

0x0840,	// (0x0006f28b) cell_cale_week_pane_g2_ParamLimits

0x9fee,	// (0x00078a39) bg_cale_side_pane_cp01_ParamLimits

0x1bdf,	// (0x0007062a) cale_month_week_pane_t1_ParamLimits

0x1bf8,	// (0x00070643) cale_month_week_pane_t2_ParamLimits

0x1c11,	// (0x0007065c) cale_month_week_pane_t3_ParamLimits

0x1c2a,	// (0x00070675) cale_month_week_pane_t4_ParamLimits

0x1c43,	// (0x0007068e) cale_month_week_pane_t5_ParamLimits

0x1c5c,	// (0x000706a7) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0007dce5) cale_month_week_pane_t_ParamLimits

0xa006,	// (0x00078a51) cell_cale_month_pane_g1_ParamLimits

0xf09d,	// (0x0007dae8) main_cale_event_viewer_pane

0x968a,	// (0x000780d5) listscroll_cale_event_viewer_pane

0xce9d,	// (0x0007b8e8) list_cale_ev_pane

0xcea5,	// (0x0007b8f0) scroll_pane_cp023

0x3f94,	// (0x000729df) field_cale_ev_pane_ParamLimits

0x3f94,	// (0x000729df) field_cale_ev_pane

0xceb1,	// (0x0007b8fc) field_cale_ev_content_pane_ParamLimits

0xceb1,	// (0x0007b8fc) field_cale_ev_content_pane

0xcebd,	// (0x0007b908) field_cale_ev_pane_g1_ParamLimits

0xcebd,	// (0x0007b908) field_cale_ev_pane_g1

0xcec9,	// (0x0007b914) field_cale_ev_pane_g2_ParamLimits

0xcec9,	// (0x0007b914) field_cale_ev_pane_g2

0xcee1,	// (0x0007b92c) field_cale_ev_pane_g3_ParamLimits

0xcee1,	// (0x0007b92c) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0007e126) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0007e126) field_cale_ev_pane_g

0xcef9,	// (0x0007b944) field_cale_ev_pane_t1_ParamLimits

0xcef9,	// (0x0007b944) field_cale_ev_pane_t1

0x3fb8,	// (0x00072a03) field_cale_ev_content_pane_t1_ParamLimits

0x3fb8,	// (0x00072a03) field_cale_ev_content_pane_t1

0xb723,	// (0x0007a16e) bg_button_pane_cp01

0x02bf,	// (0x0006ed0a) listscroll_cale_week_pane_ParamLimits

0x9fb6,	// (0x00078a01) popup_toolbar_window_cp01

0x9fbf,	// (0x00078a0a) listscroll_cale_week_pane_t1_ParamLimits

0x02bf,	// (0x0006ed0a) listscroll_cale_day_pane_ParamLimits

0x9fb6,	// (0x00078a01) popup_toolbar_window_cp02

0xaf0d,	// (0x00079958) listscroll_cale_day_pane_t1_ParamLimits

0x3276,	// (0x00071cc1) main_cale_month_pane_ParamLimits

0xa13a,	// (0x00078b85) popup_toolbar_window_cp03_ParamLimits

0xa13a,	// (0x00078b85) popup_toolbar_window_cp03

0x2b41,	// (0x0007158c) main_image_pane_g2_ParamLimits

0x2b41,	// (0x0007158c) main_image_pane_g2

0x2b52,	// (0x0007159d) main_image_pane_g3_ParamLimits

0x2b52,	// (0x0007159d) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0007df17) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0007df17) main_image_pane_g

0xb83d,	// (0x0007a288) main_image_pane_t1_ParamLimits

0x2b63,	// (0x000715ae) main_image_pane_t2_ParamLimits

0x2b63,	// (0x000715ae) main_image_pane_t2

0x2b75,	// (0x000715c0) main_image_pane_t3_ParamLimits

0x2b75,	// (0x000715c0) main_image_pane_t3

0x2b9d,	// (0x000715e8) main_image_pane_t4_ParamLimits

0x2b9d,	// (0x000715e8) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0007df1e) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0007df1e) main_image_pane_t

0x2bbd,	// (0x00071608) popup_image_details_window_cp01

0x2bc7,	// (0x00071612) popup_toobar_trans_pane_cp01_ParamLimits

0x2bc7,	// (0x00071612) popup_toobar_trans_pane_cp01

0x33a1,	// (0x00071dec) popup_image_details_window_ParamLimits

0x33a1,	// (0x00071dec) popup_image_details_window

0xa10b,	// (0x00078b56) popup_image_focus_window

0x37d2,	// (0x0007221d) camera2_autofocus_pane_ParamLimits

0x37d2,	// (0x0007221d) camera2_autofocus_pane

0x968a,	// (0x000780d5) bg_popup_sub_pane_cp06

0xcf10,	// (0x0007b95b) popup_image_focus_window_g1

0xcf18,	// (0x0007b963) popup_image_focus_window_g2

0xcf20,	// (0x0007b96b) popup_image_focus_window_g3

0xcf28,	// (0x0007b973) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0007e12d) popup_image_focus_window_g

0xcf30,	// (0x0007b97b) popup_image_focus_window_t1

0xcf3e,	// (0x0007b989) popup_image_focus_window_t2

0xcf4e,	// (0x0007b999) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0007e136) popup_image_focus_window_t

0xcf5c,	// (0x0007b9a7) camera2_autofocus_pane_g1

0xbf7b,	// (0x0007a9c6) bg_tb_trans_pane_cp01

0xcf6a,	// (0x0007b9b5) popup_image_details_window_g1

0xcf7d,	// (0x0007b9c8) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0007e148) popup_image_details_window_g

0xcfa6,	// (0x0007b9f1) popup_image_details_window_t1

0xcfb8,	// (0x0007ba03) popup_image_details_window_t2

0xcfd1,	// (0x0007ba1c) popup_image_details_window_t3

0xcfe5,	// (0x0007ba30) popup_image_details_window_t4

0xd000,	// (0x0007ba4b) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0007e14f) popup_image_details_window_t

0x9dfe,	// (0x00078849) bg_calc_paper_pane_ParamLimits

0xf09d,	// (0x0007dae8) grid_highlight_pane_cp013

0x9e12,	// (0x0007885d) list_calc_pane_ParamLimits

0x9e24,	// (0x0007886f) scroll_pane_cp024

0x9e2c,	// (0x00078877) bg_calc_display_pane_ParamLimits

0x00e9,	// (0x0006eb34) calc_display_pane_t1_ParamLimits

0x00fb,	// (0x0006eb46) calc_display_pane_t2_ParamLimits

0x9e38,	// (0x00078883) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0007db81) calc_display_pane_t_ParamLimits

0x01bc,	// (0x0006ec07) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0007db9e) cell_calc_pane_g

0x01c5,	// (0x0006ec10) cell_calc_pane_t1

0x9eaf,	// (0x000788fa) grid_highlight_pane_cp02_ParamLimits

0x9ec5,	// (0x00078910) toolbar_button_pane_cp01_ParamLimits

0x9ec5,	// (0x00078910) toolbar_button_pane_cp01

0xb882,	// (0x0007a2cd) temp_image_control_pane_ParamLimits

0xb882,	// (0x0007a2cd) temp_image_control_pane

0x9694,	// (0x000780df) main_mp3_pane

0xd01a,	// (0x0007ba65) temp_image_control_pane_g1_ParamLimits

0xd01a,	// (0x0007ba65) temp_image_control_pane_g1

0xd028,	// (0x0007ba73) temp_image_control_pane_g2_ParamLimits

0xd028,	// (0x0007ba73) temp_image_control_pane_g2

0xd03a,	// (0x0007ba85) temp_image_control_pane_g3_ParamLimits

0xd03a,	// (0x0007ba85) temp_image_control_pane_g3

0x4009,	// (0x00072a54) temp_image_control_pane_g4_ParamLimits

0x4009,	// (0x00072a54) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0007e15a) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0007e15a) temp_image_control_pane_g

0xd01a,	// (0x0007ba65) main_mp3_pane_g1

0x401c,	// (0x00072a67) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0007e163) main_mp3_pane_g

0xd07d,	// (0x0007bac8) main_mp3_pane_t1

0xab79,	// (0x000795c4) main_camera_pane_g8_ParamLimits

0xab79,	// (0x000795c4) main_camera_pane_g8

0x0b52,	// (0x0006f59d) main_video_pane_g7_ParamLimits

0x0b52,	// (0x0006f59d) main_video_pane_g7

0xa18a,	// (0x00078bd5) main_camera2_pane_t7_ParamLimits

0xa18a,	// (0x00078bd5) main_camera2_pane_t7

0xacc5,	// (0x00079710) scroll_pane_cp025_ParamLimits

0xacc5,	// (0x00079710) scroll_pane_cp025

0xacd9,	// (0x00079724) scroll_pane_cp026_ParamLimits

0xacd9,	// (0x00079724) scroll_pane_cp026

0xace8,	// (0x00079733) wml_content_pane_ParamLimits

0xf09d,	// (0x0007dae8) main_touch_calib_pane

0x40ee,	// (0x00072b39) main_touch_calib_pane_g1

0x4100,	// (0x00072b4b) main_touch_calib_pane_g2

0x4112,	// (0x00072b5d) main_touch_calib_pane_g3

0x4124,	// (0x00072b6f) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0007e181) main_touch_calib_pane_g

0x4136,	// (0x00072b81) main_touch_calib_pane_t1

0x4150,	// (0x00072b9b) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0007e18a) main_touch_calib_pane_t

0xb44b,	// (0x00079e96) mup_progress_pane_cp02

0xb480,	// (0x00079ecb) navi_pane_g1

0xb53b,	// (0x00079f86) navi_pane_mp_t3

0x9694,	// (0x000780df) main_mp3_pane_ParamLimits

0x355a,	// (0x00071fa5) navi_pane_ParamLimits

0xd01a,	// (0x0007ba65) main_mp3_pane_g1_ParamLimits

0x401c,	// (0x00072a67) main_mp3_pane_g2_ParamLimits

0x4028,	// (0x00072a73) main_mp3_pane_g3_ParamLimits

0x4028,	// (0x00072a73) main_mp3_pane_g3

0x4036,	// (0x00072a81) main_mp3_pane_g4_ParamLimits

0x4036,	// (0x00072a81) main_mp3_pane_g4

0xd04a,	// (0x0007ba95) main_mp3_pane_g5_ParamLimits

0xd04a,	// (0x0007ba95) main_mp3_pane_g5

0xd058,	// (0x0007baa3) main_mp3_pane_g6_ParamLimits

0xd058,	// (0x0007baa3) main_mp3_pane_g6

0xd065,	// (0x0007bab0) main_mp3_pane_g7_ParamLimits

0xd065,	// (0x0007bab0) main_mp3_pane_g7

0xd071,	// (0x0007babc) main_mp3_pane_g8_ParamLimits

0xd071,	// (0x0007babc) main_mp3_pane_g8

0xf718,	// (0x0007e163) main_mp3_pane_g_ParamLimits

0x4042,	// (0x00072a8d) main_mp3_pane_t2

0x4050,	// (0x00072a9b) main_mp3_pane_t3

0xd08b,	// (0x0007bad6) main_mp3_pane_t4

0xd099,	// (0x0007bae4) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0007e174) main_mp3_pane_t

0xd0a7,	// (0x0007baf2) mup_progress_pane_cp01

0xf0a7,	// (0x0007daf2) aid_zoom_text_secondary2

0xce9d,	// (0x0007b8e8) list_cale_ev2_pane

0xcea5,	// (0x0007b8f0) scroll_pane_cp023_ParamLimits

0x41aa,	// (0x00072bf5) field_cale_ev2_pane_ParamLimits

0x41aa,	// (0x00072bf5) field_cale_ev2_pane

0x41ce,	// (0x00072c19) field_cale_ev2_pane_g1_ParamLimits

0x41ce,	// (0x00072c19) field_cale_ev2_pane_g1

0x41da,	// (0x00072c25) field_cale_ev2_pane_g2_ParamLimits

0x41da,	// (0x00072c25) field_cale_ev2_pane_g2

0x41f2,	// (0x00072c3d) field_cale_ev2_pane_g3_ParamLimits

0x41f2,	// (0x00072c3d) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0007e195) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0007e195) field_cale_ev2_pane_g

0x420a,	// (0x00072c55) field_cale_ev2_pane_t1_ParamLimits

0x420a,	// (0x00072c55) field_cale_ev2_pane_t1

0x4221,	// (0x00072c6c) field_cale_ev2_pane_t2_ParamLimits

0x4221,	// (0x00072c6c) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0007e19e) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0007e19e) field_cale_ev2_pane_t

0x29d9,	// (0x00071424) main_postcard_pane_g5_ParamLimits

0x29d9,	// (0x00071424) main_postcard_pane_g5

0x29ef,	// (0x0007143a) main_postcard_pane_g6_ParamLimits

0x29ef,	// (0x0007143a) main_postcard_pane_g6

0x08fe,	// (0x0006f349) camera2_autofocus_pane_cp_ParamLimits

0x08fe,	// (0x0006f349) camera2_autofocus_pane_cp

0x9694,	// (0x000780df) main_mup3_pane

0x4280,	// (0x00072ccb) main_mup3_pane_g1_ParamLimits

0x4280,	// (0x00072ccb) main_mup3_pane_g1

0x42a2,	// (0x00072ced) main_mup3_pane_g2_ParamLimits

0x42a2,	// (0x00072ced) main_mup3_pane_g2

0x431d,	// (0x00072d68) main_mup3_pane_g3_ParamLimits

0x431d,	// (0x00072d68) main_mup3_pane_g3

0x4387,	// (0x00072dd2) main_mup3_pane_g4_ParamLimits

0x4387,	// (0x00072dd2) main_mup3_pane_g4

0x43f1,	// (0x00072e3c) main_mup3_pane_g5_ParamLimits

0x43f1,	// (0x00072e3c) main_mup3_pane_g5

0x445b,	// (0x00072ea6) main_mup3_pane_g6_ParamLimits

0x445b,	// (0x00072ea6) main_mup3_pane_g6

0xd0af,	// (0x0007bafa) main_mup3_pane_g7_ParamLimits

0xd0af,	// (0x0007bafa) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0007e1ae) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0007e1ae) main_mup3_pane_g

0x44db,	// (0x00072f26) main_mup3_pane_t1_ParamLimits

0x44db,	// (0x00072f26) main_mup3_pane_t1

0x454d,	// (0x00072f98) main_mup3_pane_t2_ParamLimits

0x454d,	// (0x00072f98) main_mup3_pane_t2

0x461f,	// (0x0007306a) main_mup3_pane_t4_ParamLimits

0x461f,	// (0x0007306a) main_mup3_pane_t4

0x467d,	// (0x000730c8) main_mup3_pane_t5_ParamLimits

0x467d,	// (0x000730c8) main_mup3_pane_t5

0x4739,	// (0x00073184) main_mup3_pane_t6_ParamLimits

0x4739,	// (0x00073184) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0007e1bf) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0007e1bf) main_mup3_pane_t

0x47f1,	// (0x0007323c) mup3_progress_pane_ParamLimits

0x47f1,	// (0x0007323c) mup3_progress_pane

0x4889,	// (0x000732d4) popup_mup3_control_window_ParamLimits

0x4889,	// (0x000732d4) popup_mup3_control_window

0xd0bd,	// (0x0007bb08) popup_mup3_text_window

0x48bf,	// (0x0007330a) mup3_progress_pane_t1

0x48de,	// (0x00073329) mup3_progress_pane_t2

0xd0c5,	// (0x0007bb10) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0007e1cc) mup3_progress_pane_t

0xd0e2,	// (0x0007bb2d) mup_progress_pane_cp03

0x968a,	// (0x000780d5) bg_tb_trans_pane_cp04

0x48fd,	// (0x00073348) mup3_volume_pane

0x4905,	// (0x00073350) popup_mup3_control_window_g1

0x490e,	// (0x00073359) mup3_volume_pane_g1

0x4917,	// (0x00073362) mup3_volume_pane_g2

0x4920,	// (0x0007336b) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0007e1d3) mup3_volume_pane_g

0x968a,	// (0x000780d5) bg_tb_trans_pane_cp03

0xd0f2,	// (0x0007bb3d) popup_mup3_text_window_g1

0xd0fa,	// (0x0007bb45) popup_mup3_text_window_t1

0x9e86,	// (0x000788d1) list_calc_item_pane_g1_ParamLimits

0xcb68,	// (0x0007b5b3) mup_volume_pane_cp_g1

0x416a,	// (0x00072bb5) main_touch_calib_pane_t3

0x417e,	// (0x00072bc9) main_touch_calib_pane_t4

0x4194,	// (0x00072bdf) main_touch_calib_pane_t5

0xfb1e,	// (0x0006e569) aid_cell_size_toolbar2

0xf091,	// (0x0007dadc) aid_popup3_width_pane

0xfb62,	// (0x0006e5ad) aid_zoom_text_msg_primary

0x08f0,	// (0x0006f33b) vorec_t7

0x9e4a,	// (0x00078895) bg_calc_paper_pane_g1_ParamLimits

0x9e56,	// (0x000788a1) bg_calc_paper_pane_g2_ParamLimits

0x9e62,	// (0x000788ad) bg_calc_paper_pane_g3_ParamLimits

0x9e6e,	// (0x000788b9) bg_calc_paper_pane_g4_ParamLimits

0x9e7a,	// (0x000788c5) bg_calc_paper_pane_g5_ParamLimits

0x0148,	// (0x0006eb93) bg_calc_paper_pane_g6_ParamLimits

0x0156,	// (0x0006eba1) bg_calc_paper_pane_g7_ParamLimits

0x0164,	// (0x0006ebaf) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0007db88) bg_calc_paper_pane_g_ParamLimits

0x0177,	// (0x0006ebc2) calc_bg_paper_pane_g9_ParamLimits

0x0a60,	// (0x0006f4ab) image_qvga_pane_ParamLimits

0x0a60,	// (0x0006f4ab) image_qvga_pane

0x9d45,	// (0x00078790) bg_popup_sub_pane_cp04_ParamLimits

0xb7b9,	// (0x0007a204) popup_mup_playback_window_g1_ParamLimits

0xb7c5,	// (0x0007a210) popup_mup_playback_window_t1_ParamLimits

0xb7da,	// (0x0007a225) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0007df12) popup_mup_playback_window_t_ParamLimits

0x3c56,	// (0x000726a1) main_mup2_pane_g3_ParamLimits

0x3c56,	// (0x000726a1) main_mup2_pane_g3

0x0e68,	// (0x0006f8b3) popup_toolbar_window_cp04

0xbbd5,	// (0x0007a620) popup_call2_audio_second_window_g3_ParamLimits

0xbbd5,	// (0x0007a620) popup_call2_audio_second_window_g3

0xbff9,	// (0x0007aa44) popup_call2_audio_first_window_g4_ParamLimits

0xbff9,	// (0x0007aa44) popup_call2_audio_first_window_g4

0xc678,	// (0x0007b0c3) popup_call2_audio_in_window_g4_ParamLimits

0xc678,	// (0x0007b0c3) popup_call2_audio_in_window_g4

0x2b23,	// (0x0007156e) aid_area_sk_bg_cut_ParamLimits

0x2b23,	// (0x0007156e) aid_area_sk_bg_cut

0xb7ef,	// (0x0007a23a) aid_area_sk_bg_cut_2_ParamLimits

0xb7ef,	// (0x0007a23a) aid_area_sk_bg_cut_2

0x3f6a,	// (0x000729b5) aid_placing_details_win

0x3f72,	// (0x000729bd) aid_placing_details_win_2

0xcf5c,	// (0x0007b9a7) camera2_autofocus_pane_g1_ParamLimits

0xfd50,	// (0x0006e79b) popup_fixed_preview_cale_window_ParamLimits

0xfd50,	// (0x0006e79b) popup_fixed_preview_cale_window

0xb5bb,	// (0x0007a006) navi_slider_pane_g3

0xb5c4,	// (0x0007a00f) navi_slider_pane_g4

0xb5cd,	// (0x0007a018) navi_slider_pane_g5

0xb5bb,	// (0x0007a006) navi_slider_pane_g6

0xa0ac,	// (0x00078af7) navi_slider_pane_g7

0xb6f0,	// (0x0007a13b) mup_scale_pane_g3

0xb6f9,	// (0x0007a144) mup_scale_pane_g4

0xb702,	// (0x0007a14d) mup_scale_pane_g5

0x2796,	// (0x000711e1) mup_scale_pane_g6

0x279f,	// (0x000711ea) mup_scale_pane_g7

0xb5bb,	// (0x0007a006) cams2_slider_pane_g3

0xcbf2,	// (0x0007b63d) cams2_slider_pane_g4

0xa1f0,	// (0x00078c3b) cams2_slider_pane_g5

0xb5bb,	// (0x0007a006) cams2_slider_pane_g6

0xa1f8,	// (0x00078c43) cams2_slider_pane_g7

0xce23,	// (0x0007b86e) camera2_autofocus_pane_cp_g1

0xc9d7,	// (0x0007b422) bg_popup_preview_window_pane_cp02_ParamLimits

0xc9d7,	// (0x0007b422) bg_popup_preview_window_pane_cp02

0xd108,	// (0x0007bb53) list_fp_cale_pane_ParamLimits

0xd108,	// (0x0007bb53) list_fp_cale_pane

0xd114,	// (0x0007bb5f) popup_fixed_preview_cale_window_t1_ParamLimits

0xd114,	// (0x0007bb5f) popup_fixed_preview_cale_window_t1

0x4929,	// (0x00073374) popup_fixed_preview_cale_window_t2_ParamLimits

0x4929,	// (0x00073374) popup_fixed_preview_cale_window_t2

0x493e,	// (0x00073389) popup_fixed_preview_cale_window_t3_ParamLimits

0x493e,	// (0x00073389) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0007e1da) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0007e1da) popup_fixed_preview_cale_window_t

0x4955,	// (0x000733a0) list_single_fp_cale_pane_ParamLimits

0x4955,	// (0x000733a0) list_single_fp_cale_pane

0xd132,	// (0x0007bb7d) list_single_fp_cale_pane_g1_ParamLimits

0xd132,	// (0x0007bb7d) list_single_fp_cale_pane_g1

0xd13e,	// (0x0007bb89) list_single_fp_cale_pane_g2_ParamLimits

0xd13e,	// (0x0007bb89) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0007e1e1) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0007e1e1) list_single_fp_cale_pane_g

0xd157,	// (0x0007bba2) list_single_fp_cale_pane_t1_ParamLimits

0xd157,	// (0x0007bba2) list_single_fp_cale_pane_t1

0xd169,	// (0x0007bbb4) list_single_fp_cale_pane_t2_ParamLimits

0xd169,	// (0x0007bbb4) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0007e1e8) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0007e1e8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf09d,	// (0x0007dae8) main_dialer_pane

0x496d,	// (0x000733b8) aid_cell_size_keypad

0x4977,	// (0x000733c2) dialer_ne_pane

0x4981,	// (0x000733cc) grid_dialer_command_1_pane

0x4989,	// (0x000733d4) grid_dialer_command_2_pane

0x4991,	// (0x000733dc) grid_dialer_keypad_pane

0x49a5,	// (0x000733f0) bg_popup_call_pane_cp06_ParamLimits

0x49a5,	// (0x000733f0) bg_popup_call_pane_cp06

0x49b1,	// (0x000733fc) dialer_ne_clear_pane_ParamLimits

0x49b1,	// (0x000733fc) dialer_ne_clear_pane

0xd19c,	// (0x0007bbe7) dialer_ne_pane_g1

0xd1a4,	// (0x0007bbef) dialer_ne_pane_t1_ParamLimits

0xd1a4,	// (0x0007bbef) dialer_ne_pane_t1

0x49bd,	// (0x00073408) dialer_ne_pane_t2_ParamLimits

0x49bd,	// (0x00073408) dialer_ne_pane_t2

0x49e7,	// (0x00073432) dialer_ne_pane_t3_ParamLimits

0x49e7,	// (0x00073432) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0007e1ed) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0007e1ed) dialer_ne_pane_t

0x4a17,	// (0x00073462) dialer_ne_pane_t3_copy1_ParamLimits

0x4a17,	// (0x00073462) dialer_ne_pane_t3_copy1

0x4a46,	// (0x00073491) cell_dialer_keypad_pane_ParamLimits

0x4a46,	// (0x00073491) cell_dialer_keypad_pane

0x4a5d,	// (0x000734a8) cell_dialer_command_1_pane_ParamLimits

0x4a5d,	// (0x000734a8) cell_dialer_command_1_pane

0x4a73,	// (0x000734be) cell_dialer_command_2_pane_ParamLimits

0x4a73,	// (0x000734be) cell_dialer_command_2_pane

0xd1b6,	// (0x0007bc01) bg_button_pane_cp02_ParamLimits

0xd1b6,	// (0x0007bc01) bg_button_pane_cp02

0x4a82,	// (0x000734cd) cell_dialer_keypad_pane_g1_ParamLimits

0x4a82,	// (0x000734cd) cell_dialer_keypad_pane_g1

0xd1b6,	// (0x0007bc01) bg_button_pane_cp03_ParamLimits

0xd1b6,	// (0x0007bc01) bg_button_pane_cp03

0x4a93,	// (0x000734de) cell_dialer_command_1_pane_g1_ParamLimits

0x4a93,	// (0x000734de) cell_dialer_command_1_pane_g1

0xd1c2,	// (0x0007bc0d) bg_button_pane_cp04

0x4aa7,	// (0x000734f2) cell_dialer_command_2_pane_g1

0xab5c,	// (0x000795a7) bg_button_pane_cp06

0xd1ca,	// (0x0007bc15) dialer_ne_clear_pane_g1

0xb48c,	// (0x00079ed7) navi_pane_g2

0xb4ba,	// (0x00079f05) navi_pane_g3

0x0002,

0xf3ca,	// (0x0007de15) navi_pane_g

0xb549,	// (0x00079f94) navi_pane_mv_g2

0xb572,	// (0x00079fbd) navi_pane_mv_g5

0x22fe,	// (0x00070d49) navi_pane_mv_t1

0x9e2c,	// (0x00078877) main_clock2_pane

0xbf7b,	// (0x0007a9c6) main_clock2_list_pane_ParamLimits

0xbf7b,	// (0x0007a9c6) main_clock2_list_pane

0x4b13,	// (0x0007355e) main_clock2_pane_t1_ParamLimits

0x4b13,	// (0x0007355e) main_clock2_pane_t1

0x4b4e,	// (0x00073599) main_clock2_pane_t2_ParamLimits

0x4b4e,	// (0x00073599) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0007e1f9) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0007e1f9) main_clock2_pane_t

0x4bed,	// (0x00073638) popup_clock_analogue_window_cp03_ParamLimits

0x4bed,	// (0x00073638) popup_clock_analogue_window_cp03

0x4c12,	// (0x0007365d) popup_clock_digital_window_cp02_ParamLimits

0x4c12,	// (0x0007365d) popup_clock_digital_window_cp02

0x4c8b,	// (0x000736d6) main_clock2_list_single_pane_ParamLimits

0x4c8b,	// (0x000736d6) main_clock2_list_single_pane

0xab5c,	// (0x000795a7) list_highlight_pane_cp05

0xd202,	// (0x0007bc4d) main_clock2_list_single_pane_t1

0x0e68,	// (0x0006f8b3) popup_toolbar_window_cp04_ParamLimits

0x3fd9,	// (0x00072a24) camera2_autofocus_pane_g2_ParamLimits

0x3fd9,	// (0x00072a24) camera2_autofocus_pane_g2

0x3fe5,	// (0x00072a30) camera2_autofocus_pane_g3_ParamLimits

0x3fe5,	// (0x00072a30) camera2_autofocus_pane_g3

0x3ff1,	// (0x00072a3c) camera2_autofocus_pane_g4_ParamLimits

0x3ff1,	// (0x00072a3c) camera2_autofocus_pane_g4

0x3ffd,	// (0x00072a48) camera2_autofocus_pane_g5_ParamLimits

0x3ffd,	// (0x00072a48) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0007e13d) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0007e13d) camera2_autofocus_pane_g

0x4236,	// (0x00072c81) camera2_autofocus_pane_cp_g2

0x423e,	// (0x00072c89) camera2_autofocus_pane_cp_g3

0x4246,	// (0x00072c91) camera2_autofocus_pane_cp_g4

0x424e,	// (0x00072c99) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0007e1a3) camera2_autofocus_pane_cp_g

0x499d,	// (0x000733e8) popup_dialer_spcha_window

0x968a,	// (0x000780d5) bg_popup_sub_pane_cp07

0xd210,	// (0x0007bc5b) list_spcha_pane

0xd218,	// (0x0007bc63) list_single_spcha_pane_ParamLimits

0xd218,	// (0x0007bc63) list_single_spcha_pane

0x968a,	// (0x000780d5) list_highlight_pane_cp06

0xd229,	// (0x0007bc74) list_single_spcha_pane_t1

0xc422,	// (0x0007ae6d) popup_call2_audio_out_window_g4_ParamLimits

0xc422,	// (0x0007ae6d) popup_call2_audio_out_window_g4

0xf09d,	// (0x0007dae8) main_imed2_pane

0xa115,	// (0x00078b60) popup_imed_adjust2_window

0x33b9,	// (0x00071e04) popup_imed_trans_window_ParamLimits

0x33b9,	// (0x00071e04) popup_imed_trans_window

0xcc5b,	// (0x0007b6a6) popup_blid_sat_info2_window_t1

0xcc69,	// (0x0007b6b4) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0007e0d2) popup_blid_sat_info2_window_t

0x4d46,	// (0x00073791) aid_size_cell_colour_35

0x4d66,	// (0x000737b1) aid_size_cell_colour_112

0x4d86,	// (0x000737d1) aid_size_cell_effect

0xc9e3,	// (0x0007b42e) bg_tb_trans_pane_cp02

0xb016,	// (0x00079a61) heading_imed_pane

0x4da6,	// (0x000737f1) listscroll_imed_pane

0xd237,	// (0x0007bc82) heading_imed_pane_g1

0xd23f,	// (0x0007bc8a) heading_imed_pane_t1

0xd24d,	// (0x0007bc98) grid_imed_colour_35_pane_ParamLimits

0xd24d,	// (0x0007bc98) grid_imed_colour_35_pane

0x4db2,	// (0x000737fd) grid_imed_effect_pane

0xd269,	// (0x0007bcb4) list_imed_aspect_pane

0x4dc9,	// (0x00073814) scroll_pane_cp027_ParamLimits

0x4dc9,	// (0x00073814) scroll_pane_cp027

0x4dda,	// (0x00073825) cell_imed_effect_pane_ParamLimits

0x4dda,	// (0x00073825) cell_imed_effect_pane

0xd271,	// (0x0007bcbc) cell_imed_colour_pane_ParamLimits

0xd271,	// (0x0007bcbc) cell_imed_colour_pane

0xd2bb,	// (0x0007bd06) cell_imed_colour_pane_g1_ParamLimits

0xd2bb,	// (0x0007bd06) cell_imed_colour_pane_g1

0xd2cc,	// (0x0007bd17) hgihlgiht_grid_pane_cp016_ParamLimits

0xd2cc,	// (0x0007bd17) hgihlgiht_grid_pane_cp016

0x4e05,	// (0x00073850) cell_imed_effect_pane_g1

0x4e0d,	// (0x00073858) grid_highlight_pane_cp017

0xd2dd,	// (0x0007bd28) list_imed_single_pane_ParamLimits

0xd2dd,	// (0x0007bd28) list_imed_single_pane

0x968a,	// (0x000780d5) list_highlight_pane_cp07

0xd2f1,	// (0x0007bd3c) list_imed_aspect_pane_comp1_t1

0xc9e3,	// (0x0007b42e) bg_tb_trans_pane_cp05

0xd313,	// (0x0007bd5e) popup_imed_adjust2_window_g1

0xd33a,	// (0x0007bd85) popup_imed_adjust2_window_t1

0xd352,	// (0x0007bd9d) slider_imed_adjust_pane

0xd366,	// (0x0007bdb1) slider_imed_adjust_pane_g1

0xd376,	// (0x0007bdc1) slider_imed_adjust_pane_g2

0xd386,	// (0x0007bdd1) slider_imed_adjust_pane_g3

0xd397,	// (0x0007bde2) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0007e216) slider_imed_adjust_pane_g

0x4e16,	// (0x00073861) aid_size_cell_clipart2

0xd3a8,	// (0x0007bdf3) grid_imed_clipart_pane

0xd3b2,	// (0x0007bdfd) scroll_pane_cp031

0x4e22,	// (0x0007386d) cell_imed_clipart_pane_ParamLimits

0x4e22,	// (0x0007386d) cell_imed_clipart_pane

0x4e3f,	// (0x0007388a) cell_imed_clipart_pane_g1

0x968a,	// (0x000780d5) grid_highlight_pane_cp014

0x4af1,	// (0x0007353c) main_clock2_pane_g1_ParamLimits

0x4af1,	// (0x0007353c) main_clock2_pane_g1

0x4c32,	// (0x0007367d) aid_call2_pane_cp10

0x4c44,	// (0x0007368f) aid_call_pane_cp10

0xb3eb,	// (0x00079e36) popup_clock_analogue_window_cp10_g1

0xb3eb,	// (0x00079e36) popup_clock_analogue_window_cp10_g2

0x4c56,	// (0x000736a1) popup_clock_analogue_window_cp10_g3

0x4c56,	// (0x000736a1) popup_clock_analogue_window_cp10_g4

0xb3eb,	// (0x00079e36) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0007e204) popup_clock_analogue_window_cp10_g

0x4c6c,	// (0x000736b7) popup_clock_analogue_window_cp10_t1

0x4c9d,	// (0x000736e8) clock_digital_number_pane_cp10_ParamLimits

0x4c9d,	// (0x000736e8) clock_digital_number_pane_cp10

0x4cb7,	// (0x00073702) clock_digital_number_pane_cp11_ParamLimits

0x4cb7,	// (0x00073702) clock_digital_number_pane_cp11

0x4cd1,	// (0x0007371c) clock_digital_number_pane_cp12_ParamLimits

0x4cd1,	// (0x0007371c) clock_digital_number_pane_cp12

0x4ced,	// (0x00073738) clock_digital_number_pane_cp13_ParamLimits

0x4ced,	// (0x00073738) clock_digital_number_pane_cp13

0x4d09,	// (0x00073754) clock_digital_separator_pane_cp10_ParamLimits

0x4d09,	// (0x00073754) clock_digital_separator_pane_cp10

0x4d25,	// (0x00073770) popup_clock_digital_window_cp02_t1_ParamLimits

0x4d25,	// (0x00073770) popup_clock_digital_window_cp02_t1

0x9d3d,	// (0x00078788) clock_digital_number_pane_cp10_g1

0x9d3d,	// (0x00078788) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0007e21f) clock_digital_number_pane_cp10_g

0x9d3d,	// (0x00078788) clock_digital_separator_pane_cp10_g1

0x9d3d,	// (0x00078788) clock_digital_separator_pane_g2_cp10

0xb57a,	// (0x00079fc5) navi_pane_vded_g4

0xb583,	// (0x00079fce) navi_pane_vded_g5

0xb58c,	// (0x00079fd7) navi_pane_vded_t1

0xf09d,	// (0x0007dae8) main_vded_pane

0x4e48,	// (0x00073893) main_vded_pane_g1

0x4e54,	// (0x0007389f) main_vded_pane_g2

0x4e60,	// (0x000738ab) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0007e224) main_vded_pane_g

0x4e6c,	// (0x000738b7) main_vded_pane_t1

0x4e7a,	// (0x000738c5) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0007e22b) main_vded_pane_t

0x4e88,	// (0x000738d3) vded_slider_pane

0x4e92,	// (0x000738dd) vded_video_pane

0xd3ba,	// (0x0007be05) vded_video_pane_g1

0x4e9e,	// (0x000738e9) vded_video_pane_g2

0xce23,	// (0x0007b86e) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0007e230) vded_video_pane_g

0xd3c4,	// (0x0007be0f) vded_slider_pane_g1

0xcb68,	// (0x0007b5b3) vded_slider_pane_g2

0xd408,	// (0x0007be53) vded_slider_pane_g3

0xd411,	// (0x0007be5c) vded_slider_pane_g4

0xd41a,	// (0x0007be65) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0007e237) vded_slider_pane_g

0x4873,	// (0x000732be) mup3_rocker_pane_ParamLimits

0x4873,	// (0x000732be) mup3_rocker_pane

0x4ea7,	// (0x000738f2) mup3_control_keys_pane_g1

0x4eaf,	// (0x000738fa) mup3_control_keys_pane_g2

0x4eb7,	// (0x00073902) mup3_control_keys_pane_g3

0x4ebf,	// (0x0007390a) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0007e242) mup3_control_keys_pane_g

0xfd8f,	// (0x0006e7da) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfd8f,	// (0x0006e7da) popup_toolbar2_fixed_window_cp01

0x48a9,	// (0x000732f4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x48a9,	// (0x000732f4) popup_toolbar2_fixed_window_cp02

0xbd47,	// (0x0007a792) popup_call2_audio_second_window_t4_ParamLimits

0xbd47,	// (0x0007a792) popup_call2_audio_second_window_t4

0xc28f,	// (0x0007acda) popup_call2_audio_first_window_t6_ParamLimits

0xc28f,	// (0x0007acda) popup_call2_audio_first_window_t6

0xc525,	// (0x0007af70) popup_call2_audio_out_window_t6_ParamLimits

0xc525,	// (0x0007af70) popup_call2_audio_out_window_t6

0xf09d,	// (0x0007dae8) main_vitu_pane

0x4ecf,	// (0x0007391a) aid_size_cell_itu_ParamLimits

0x4ecf,	// (0x0007391a) aid_size_cell_itu

0xbf7b,	// (0x0007a9c6) bg_popup_window_pane_cp08_ParamLimits

0xbf7b,	// (0x0007a9c6) bg_popup_window_pane_cp08

0x4ee5,	// (0x00073930) field_vitu_entry_pane_ParamLimits

0x4ee5,	// (0x00073930) field_vitu_entry_pane

0x4efc,	// (0x00073947) grid_vitu_function_pane_ParamLimits

0x4efc,	// (0x00073947) grid_vitu_function_pane

0x4f17,	// (0x00073962) grid_vitu_itu_pane_ParamLimits

0x4f17,	// (0x00073962) grid_vitu_itu_pane

0x4f35,	// (0x00073980) cell_vitu_itu_pane_ParamLimits

0x4f35,	// (0x00073980) cell_vitu_itu_pane

0x4f5b,	// (0x000739a6) cell_vitu_function_pane_ParamLimits

0x4f5b,	// (0x000739a6) cell_vitu_function_pane

0xbf7b,	// (0x0007a9c6) bg_popup_sub_pane_cp08_ParamLimits

0xbf7b,	// (0x0007a9c6) bg_popup_sub_pane_cp08

0x4f76,	// (0x000739c1) field_vitu_entry_pane_t1_ParamLimits

0x4f76,	// (0x000739c1) field_vitu_entry_pane_t1

0xd43b,	// (0x0007be86) field_vitu_entry_pane_t2_ParamLimits

0xd43b,	// (0x0007be86) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0007e250) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0007e250) field_vitu_entry_pane_t

0xd458,	// (0x0007bea3) bg_button_pane_cp05_ParamLimits

0xd458,	// (0x0007bea3) bg_button_pane_cp05

0x4f96,	// (0x000739e1) cell_vitu_itu_pane_g1

0x4fae,	// (0x000739f9) cell_vitu_itu_pane_t1_ParamLimits

0x4fae,	// (0x000739f9) cell_vitu_itu_pane_t1

0x4fc0,	// (0x00073a0b) cell_vitu_itu_pane_t2_ParamLimits

0x4fc0,	// (0x00073a0b) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0007e255) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0007e255) cell_vitu_itu_pane_t

0xd466,	// (0x0007beb1) bg_button_pane_cp07

0x4ff5,	// (0x00073a40) cell_vitu_function_pane_g1

0x9dcc,	// (0x00078817) main_calc_pane_g1

0xfb56,	// (0x0006e5a1) aid_visual_content_pane

0xf09d,	// (0x0007dae8) main_vradio_pane

0x4ffe,	// (0x00073a49) main_vradio_pane_g1_ParamLimits

0x4ffe,	// (0x00073a49) main_vradio_pane_g1

0xd470,	// (0x0007bebb) main_vradio_pane_g2_ParamLimits

0xd470,	// (0x0007bebb) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0007e25c) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0007e25c) main_vradio_pane_g

0x5015,	// (0x00073a60) main_vradio_pane_t1_ParamLimits

0x5015,	// (0x00073a60) main_vradio_pane_t1

0x502a,	// (0x00073a75) main_vradio_pane_t2_ParamLimits

0x502a,	// (0x00073a75) main_vradio_pane_t2

0xd47d,	// (0x0007bec8) main_vradio_pane_t3_ParamLimits

0xd47d,	// (0x0007bec8) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0007e261) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0007e261) main_vradio_pane_t

0x503f,	// (0x00073a8a) vradio_rocker_control_pane_ParamLimits

0x503f,	// (0x00073a8a) vradio_rocker_control_pane

0x5051,	// (0x00073a9c) vradio_station_info_pane_ParamLimits

0x5051,	// (0x00073a9c) vradio_station_info_pane

0xd491,	// (0x0007bedc) vradio_frequency_info_pane_ParamLimits

0xd491,	// (0x0007bedc) vradio_frequency_info_pane

0xce23,	// (0x0007b86e) vradio_station_info_pane_g1

0xd4a0,	// (0x0007beeb) vradio_station_info_pane_t1_ParamLimits

0xd4a0,	// (0x0007beeb) vradio_station_info_pane_t1

0xd4c2,	// (0x0007bf0d) vradio_station_info_pane_t2_ParamLimits

0xd4c2,	// (0x0007bf0d) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0007e268) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0007e268) vradio_station_info_pane_t

0xd4d4,	// (0x0007bf1f) vradio_tuning_pane

0xd4dc,	// (0x0007bf27) vradio_rocker_control_pane_g1

0xd4e4,	// (0x0007bf2f) vradio_rocker_control_pane_g2

0xd4ec,	// (0x0007bf37) vradio_rocker_control_pane_g3

0xd4f4,	// (0x0007bf3f) vradio_rocker_control_pane_g4

0xd4fc,	// (0x0007bf47) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0007e26d) vradio_rocker_control_pane_g

0x5061,	// (0x00073aac) vradio_frequency_info_pane_g1

0xd504,	// (0x0007bf4f) vradio_frequency_info_pane_t1_ParamLimits

0xd504,	// (0x0007bf4f) vradio_frequency_info_pane_t1

0x506b,	// (0x00073ab6) vradio_tuning_pane_g1

0x5076,	// (0x00073ac1) vradio_tuning_pane_t1

0xfbb3,	// (0x0006e5fe) area_side_right_pane_ParamLimits

0xfbb3,	// (0x0006e5fe) area_side_right_pane

0xc99e,	// (0x0007b3e9) status_small_pane_g1

0xc9a6,	// (0x0007b3f1) status_small_pane_g2

0xc9af,	// (0x0007b3fa) status_small_pane_g3

0xc9b8,	// (0x0007b403) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0007e028) status_small_pane_g

0xc9c1,	// (0x0007b40c) status_small_pane_t1

0xf09d,	// (0x0007dae8) main_video3_pane

0xd518,	// (0x0007bf63) cams_zoom_vslider_pane

0xd520,	// (0x0007bf6b) image3_wide_pane_ParamLimits

0xd520,	// (0x0007bf6b) image3_wide_pane

0xd53a,	// (0x0007bf85) image3_wide_small_pane

0xd546,	// (0x0007bf91) main_video3_pane_g1_ParamLimits

0xd546,	// (0x0007bf91) main_video3_pane_g1

0xd562,	// (0x0007bfad) main_video3_pane_g2_ParamLimits

0xd562,	// (0x0007bfad) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0007e278) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0007e278) main_video3_pane_g

0xd57e,	// (0x0007bfc9) main_video3_pane_t1_ParamLimits

0xd57e,	// (0x0007bfc9) main_video3_pane_t1

0xd5a9,	// (0x0007bff4) main_video3_pane_t2_ParamLimits

0xd5a9,	// (0x0007bff4) main_video3_pane_t2

0xd5d6,	// (0x0007c021) main_video3_pane_t3_ParamLimits

0xd5d6,	// (0x0007c021) main_video3_pane_t3

0x0002,

0xf832,	// (0x0007e27d) main_video3_pane_t_ParamLimits

0xf832,	// (0x0007e27d) main_video3_pane_t

0xd603,	// (0x0007c04e) cams_zoom_vslider_pane_g1

0xd60c,	// (0x0007c057) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0007e284) cams_zoom_vslider_pane_g

0xd614,	// (0x0007c05f) small_slider_vertical_pane

0xce23,	// (0x0007b86e) small_slider_vertical_pane_g1

0xce23,	// (0x0007b86e) small_slider_vertical_pane_g2

0xd61c,	// (0x0007c067) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0007e289) small_slider_vertical_pane_g

0xf09d,	// (0x0007dae8) main_hwr_training_pane

0xd625,	// (0x0007c070) hwr_training_instruct_pane_ParamLimits

0xd625,	// (0x0007c070) hwr_training_instruct_pane

0x5085,	// (0x00073ad0) hwr_training_navi_pane_ParamLimits

0x5085,	// (0x00073ad0) hwr_training_navi_pane

0x50a4,	// (0x00073aef) hwr_training_write_pane_ParamLimits

0x50a4,	// (0x00073aef) hwr_training_write_pane

0x968a,	// (0x000780d5) bg_frame_shadow_pane

0xd65c,	// (0x0007c0a7) hwr_training_write_pane_g1

0xd664,	// (0x0007c0af) hwr_training_write_pane_g2

0xd66c,	// (0x0007c0b7) hwr_training_write_pane_g3

0xd674,	// (0x0007c0bf) hwr_training_write_pane_g4

0xd67c,	// (0x0007c0c7) hwr_training_write_pane_g5

0xd684,	// (0x0007c0cf) hwr_training_write_pane_g6

0xd68c,	// (0x0007c0d7) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0007e290) hwr_training_write_pane_g

0xa20d,	// (0x00078c58) hwr_training_navi_pane_g1_ParamLimits

0xa20d,	// (0x00078c58) hwr_training_navi_pane_g1

0xa21f,	// (0x00078c6a) hwr_training_navi_pane_g2_ParamLimits

0xa21f,	// (0x00078c6a) hwr_training_navi_pane_g2

0xa231,	// (0x00078c7c) hwr_training_navi_pane_g3_ParamLimits

0xa231,	// (0x00078c7c) hwr_training_navi_pane_g3

0xa241,	// (0x00078c8c) hwr_training_navi_pane_g4_ParamLimits

0xa241,	// (0x00078c8c) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0007e29f) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0007e29f) hwr_training_navi_pane_g

0xa24e,	// (0x00078c99) hwr_training_navi_pane_t1

0x50ec,	// (0x00073b37) list_single_hwr_training_instruct_pane_ParamLimits

0x50ec,	// (0x00073b37) list_single_hwr_training_instruct_pane

0xd694,	// (0x0007c0df) list_single_hwr_training_instruct_pane_t1

0xcd63,	// (0x0007b7ae) bg_frame_shadow_pane_g1

0xd6a3,	// (0x0007c0ee) bg_frame_shadow_pane_g2

0xd6ab,	// (0x0007c0f6) bg_frame_shadow_pane_g3

0xd6b3,	// (0x0007c0fe) bg_frame_shadow_pane_g4

0xd6bb,	// (0x0007c106) bg_frame_shadow_pane_g5

0xd6c3,	// (0x0007c10e) bg_frame_shadow_pane_g6

0xd6cb,	// (0x0007c116) bg_frame_shadow_pane_g7

0x9f12,	// (0x0007895d) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0007e2aa) bg_frame_shadow_pane_g

0xf09d,	// (0x0007dae8) main_video_tele_dialer_pane

0x5108,	// (0x00073b53) aid_size_cell_video_keypad_ParamLimits

0x5108,	// (0x00073b53) aid_size_cell_video_keypad

0x5122,	// (0x00073b6d) grid_video_dialer_keypad_pane_ParamLimits

0x5122,	// (0x00073b6d) grid_video_dialer_keypad_pane

0x516e,	// (0x00073bb9) video_down_pane_cp_ParamLimits

0x516e,	// (0x00073bb9) video_down_pane_cp

0x51a0,	// (0x00073beb) cell_video_dialer_keypad_pane_ParamLimits

0x51a0,	// (0x00073beb) cell_video_dialer_keypad_pane

0xd6d3,	// (0x0007c11e) bg_button_pane_cp08_ParamLimits

0xd6d3,	// (0x0007c11e) bg_button_pane_cp08

0x51c6,	// (0x00073c11) cell_video_dialer_keypad_pane_g1_ParamLimits

0x51c6,	// (0x00073c11) cell_video_dialer_keypad_pane_g1

0x485d,	// (0x000732a8) mup3_rocker2_pane_ParamLimits

0x485d,	// (0x000732a8) mup3_rocker2_pane

0xce23,	// (0x0007b86e) mup3_rocker2_pane_g1

0x3286,	// (0x00071cd1) main_dialer2_pane

0xf09d,	// (0x0007dae8) main_mp4_pane

0xa27a,	// (0x00078cc5) main_mp4_pane_g1_ParamLimits

0xa27a,	// (0x00078cc5) main_mp4_pane_g1

0xa27a,	// (0x00078cc5) main_mp4_pane_g2_ParamLimits

0xa27a,	// (0x00078cc5) main_mp4_pane_g2

0x5201,	// (0x00073c4c) main_mp4_pane_g3_ParamLimits

0x5201,	// (0x00073c4c) main_mp4_pane_g3

0xa288,	// (0x00078cd3) main_mp4_pane_g4_ParamLimits

0xa288,	// (0x00078cd3) main_mp4_pane_g4

0xa2b6,	// (0x00078d01) main_mp4_pane_g5_ParamLimits

0xa2b6,	// (0x00078d01) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0007e2ca) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0007e2ca) main_mp4_pane_g

0xa32a,	// (0x00078d75) main_mp4_pane_t1_ParamLimits

0xa32a,	// (0x00078d75) main_mp4_pane_t1

0xa386,	// (0x00078dd1) main_mp4_pane_t2_ParamLimits

0xa386,	// (0x00078dd1) main_mp4_pane_t2

0xd6df,	// (0x0007c12a) main_mp4_pane_t3_ParamLimits

0xd6df,	// (0x0007c12a) main_mp4_pane_t3

0xa3d8,	// (0x00078e23) main_mp4_pane_t4_ParamLimits

0xa3d8,	// (0x00078e23) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0007e2db) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0007e2db) main_mp4_pane_t

0xa418,	// (0x00078e63) mp4_progress_pane_ParamLimits

0xa418,	// (0x00078e63) mp4_progress_pane

0xa462,	// (0x00078ead) mp4_rocker_pane_ParamLimits

0xa462,	// (0x00078ead) mp4_rocker_pane

0xd70d,	// (0x0007c158) mp4_progress_pane_t1

0xd726,	// (0x0007c171) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0007e2e4) mp4_progress_pane_t

0xd73f,	// (0x0007c18a) mup_progress_pane_cp04

0xd752,	// (0x0007c19d) mp4_rocker_pane_g1

0x524b,	// (0x00073c96) aid_cell_size_keypad2_ParamLimits

0x524b,	// (0x00073c96) aid_cell_size_keypad2

0x5261,	// (0x00073cac) dialer2_ne_pane_ParamLimits

0x5261,	// (0x00073cac) dialer2_ne_pane

0x5279,	// (0x00073cc4) grid_dialer2_keypad_pane_ParamLimits

0x5279,	// (0x00073cc4) grid_dialer2_keypad_pane

0xcc02,	// (0x0007b64d) bg_popup_call_pane_cp07_ParamLimits

0xcc02,	// (0x0007b64d) bg_popup_call_pane_cp07

0x5295,	// (0x00073ce0) dialer2_ne_pane_t1_ParamLimits

0x5295,	// (0x00073ce0) dialer2_ne_pane_t1

0x52d5,	// (0x00073d20) cell_dialer2_keypad_pane_ParamLimits

0x52d5,	// (0x00073d20) cell_dialer2_keypad_pane

0xd76e,	// (0x0007c1b9) bg_button_pane_pane_cp04_ParamLimits

0xd76e,	// (0x0007c1b9) bg_button_pane_pane_cp04

0x52fb,	// (0x00073d46) cell_dialer2_keypad_pane_g1_ParamLimits

0x52fb,	// (0x00073d46) cell_dialer2_keypad_pane_g1

0x0d4f,	// (0x0006f79a) aid_placing_vt_set_content_ParamLimits

0x0d4f,	// (0x0006f79a) aid_placing_vt_set_content

0x0d73,	// (0x0006f7be) aid_placing_vt_set_title_ParamLimits

0x0d73,	// (0x0006f7be) aid_placing_vt_set_title

0xf09d,	// (0x0007dae8) main_image3_pane

0x53c1,	// (0x00073e0c) area_side_right_pane_cp01_ParamLimits

0x53c1,	// (0x00073e0c) area_side_right_pane_cp01

0xa27a,	// (0x00078cc5) main_image3_pane_g1_ParamLimits

0xa27a,	// (0x00078cc5) main_image3_pane_g1

0x53da,	// (0x00073e25) main_image3_pane_g2_ParamLimits

0x53da,	// (0x00073e25) main_image3_pane_g2

0x5402,	// (0x00073e4d) main_image3_pane_g3_ParamLimits

0x5402,	// (0x00073e4d) main_image3_pane_g3

0x542c,	// (0x00073e77) main_image3_pane_g4_ParamLimits

0x542c,	// (0x00073e77) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0007e2f3) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0007e2f3) main_image3_pane_g

0x5456,	// (0x00073ea1) main_image3_pane_t1_ParamLimits

0x5456,	// (0x00073ea1) main_image3_pane_t1

0x54ae,	// (0x00073ef9) main_image3_pane_t2_ParamLimits

0x54ae,	// (0x00073ef9) main_image3_pane_t2

0x5500,	// (0x00073f4b) main_image3_pane_t3_ParamLimits

0x5500,	// (0x00073f4b) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0007e2fc) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0007e2fc) main_image3_pane_t

0xbf7b,	// (0x0007a9c6) grid_sctrl_middle_pane_cp01_ParamLimits

0xbf7b,	// (0x0007a9c6) grid_sctrl_middle_pane_cp01

0x5588,	// (0x00073fd3) cell_sctrl_middle_pane_cp01_ParamLimits

0x5588,	// (0x00073fd3) cell_sctrl_middle_pane_cp01

0x55a5,	// (0x00073ff0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x55a5,	// (0x00073ff0) cell_sctrl_middle_pane_cp01_g1

0xf09d,	// (0x0007dae8) main_call4_pane

0x55ba,	// (0x00074005) aid_size_button_call4_ParamLimits

0x55ba,	// (0x00074005) aid_size_button_call4

0x55ed,	// (0x00074038) call4_windows_pane_ParamLimits

0x55ed,	// (0x00074038) call4_windows_pane

0x560c,	// (0x00074057) grid_call4_button_pane_ParamLimits

0x560c,	// (0x00074057) grid_call4_button_pane

0x5643,	// (0x0007408e) call4_windows_conf_pane

0x565e,	// (0x000740a9) popup_call4_audio_first_window_ParamLimits

0x565e,	// (0x000740a9) popup_call4_audio_first_window

0x56b0,	// (0x000740fb) popup_call4_audio_second_window_ParamLimits

0x56b0,	// (0x000740fb) popup_call4_audio_second_window

0x56c9,	// (0x00074114) popup_call4_audio_wait_window_ParamLimits

0x56c9,	// (0x00074114) popup_call4_audio_wait_window

0x56d7,	// (0x00074122) cell_call4_button_pane_ParamLimits

0x56d7,	// (0x00074122) cell_call4_button_pane

0x56fe,	// (0x00074149) bg_button_pane_cp09_ParamLimits

0x56fe,	// (0x00074149) bg_button_pane_cp09

0x570a,	// (0x00074155) cell_call4_button_pane_g1_ParamLimits

0x570a,	// (0x00074155) cell_call4_button_pane_g1

0x5730,	// (0x0007417b) cell_call4_button_pane_t1_ParamLimits

0x5730,	// (0x0007417b) cell_call4_button_pane_t1

0xd782,	// (0x0007c1cd) popup_call4_audio_conf_window_ParamLimits

0xd782,	// (0x0007c1cd) popup_call4_audio_conf_window

0x48bf,	// (0x0007330a) mup3_progress_pane_t1_ParamLimits

0x48de,	// (0x00073329) mup3_progress_pane_t2_ParamLimits

0xd0c5,	// (0x0007bb10) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0007e1cc) mup3_progress_pane_t_ParamLimits

0xd0e2,	// (0x0007bb2d) mup_progress_pane_cp03_ParamLimits

0x4ec7,	// (0x00073912) mup3_control_keys_pane_g4_copy1

0xa446,	// (0x00078e91) mp4_rocker2_pane_ParamLimits

0xa446,	// (0x00078e91) mp4_rocker2_pane

0xd79c,	// (0x0007c1e7) mp4_rocker2_pane_g1

0xd7a4,	// (0x0007c1ef) mp4_rocker2_pane_g2

0xa4e8,	// (0x00078f33) mp4_rocker2_pane_g3

0xa4f0,	// (0x00078f3b) mp4_rocker2_pane_g4

0xa4f8,	// (0x00078f43) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0007e305) mp4_rocker2_pane_g

0xf09d,	// (0x0007dae8) main_camera4_pane

0xf09d,	// (0x0007dae8) main_video4_pane

0x513c,	// (0x00073b87) main_video_tele_dialer_pane_t1_ParamLimits

0x513c,	// (0x00073b87) main_video_tele_dialer_pane_t1

0x5155,	// (0x00073ba0) main_video_tele_dialer_pane_t2_ParamLimits

0x5155,	// (0x00073ba0) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0007e2bb) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0007e2bb) main_video_tele_dialer_pane_t

0x576e,	// (0x000741b9) cam4_autofocus_pane_ParamLimits

0x576e,	// (0x000741b9) cam4_autofocus_pane

0x5784,	// (0x000741cf) cam4_image_uncrop_pane_ParamLimits

0x5784,	// (0x000741cf) cam4_image_uncrop_pane

0x579d,	// (0x000741e8) cam4_indicators_pane_ParamLimits

0x579d,	// (0x000741e8) cam4_indicators_pane

0x57cd,	// (0x00074218) main_camera4_pane_g1_ParamLimits

0x57cd,	// (0x00074218) main_camera4_pane_g1

0x57df,	// (0x0007422a) main_camera4_pane_g2_ParamLimits

0x57df,	// (0x0007422a) main_camera4_pane_g2

0x57f2,	// (0x0007423d) main_camera4_pane_g3_ParamLimits

0x57f2,	// (0x0007423d) main_camera4_pane_g3

0x5805,	// (0x00074250) main_camera4_pane_g4_ParamLimits

0x5805,	// (0x00074250) main_camera4_pane_g4

0x5818,	// (0x00074263) main_camera4_pane_g5_ParamLimits

0x5818,	// (0x00074263) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0007e310) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0007e310) main_camera4_pane_g

0x583c,	// (0x00074287) main_camera4_pane_t1_ParamLimits

0x583c,	// (0x00074287) main_camera4_pane_t1

0xa51e,	// (0x00078f69) bg_tb_trans_pane_cp06

0xa534,	// (0x00078f7f) cam4_indicators_pane_g1

0xa545,	// (0x00078f90) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0007e32b) cam4_indicators_pane_g

0xa55d,	// (0x00078fa8) cam4_indicators_pane_t1

0x58a0,	// (0x000742eb) main_video4_pane_g1_ParamLimits

0x58a0,	// (0x000742eb) main_video4_pane_g1

0x58af,	// (0x000742fa) main_video4_pane_g2_ParamLimits

0x58af,	// (0x000742fa) main_video4_pane_g2

0x58be,	// (0x00074309) main_video4_pane_g3_ParamLimits

0x58be,	// (0x00074309) main_video4_pane_g3

0x58cd,	// (0x00074318) main_video4_pane_g4_ParamLimits

0x58cd,	// (0x00074318) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0007e332) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0007e332) main_video4_pane_g

0x58eb,	// (0x00074336) vid4_indicators_pane_ParamLimits

0x58eb,	// (0x00074336) vid4_indicators_pane

0x5919,	// (0x00074364) video4_image_uncrop_cif_pane_ParamLimits

0x5919,	// (0x00074364) video4_image_uncrop_cif_pane

0x5933,	// (0x0007437e) video4_image_uncrop_nhd_pane_ParamLimits

0x5933,	// (0x0007437e) video4_image_uncrop_nhd_pane

0x5784,	// (0x000741cf) video4_image_uncrop_vga_pane_ParamLimits

0x5784,	// (0x000741cf) video4_image_uncrop_vga_pane

0x9694,	// (0x000780df) bg_tb_trans_pane_cp07

0xa58b,	// (0x00078fd6) vid4_indicators_pane_g1

0xa5a1,	// (0x00078fec) vid4_indicators_pane_g2

0xa5b5,	// (0x00079000) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0007e33d) vid4_indicators_pane_g

0xa5e6,	// (0x00079031) vid4_indicators_pane_t1

0x5949,	// (0x00074394) cam4_autofocus_pane_g1

0x5951,	// (0x0007439c) cam4_autofocus_pane_g2

0x5959,	// (0x000743a4) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0007e348) cam4_autofocus_pane_g

0x5961,	// (0x000743ac) cam4_autofocus_pane_g3_copy1

0x5184,	// (0x00073bcf) video_down_pane_cp_t1

0x5192,	// (0x00073bdd) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0007e2c0) video_down_pane_cp_t

0x9694,	// (0x000780df) popup_vitu2_window_ParamLimits

0x9694,	// (0x000780df) popup_vitu2_window

0x5969,	// (0x000743b4) aid_size_cell2_itu2_ParamLimits

0x5969,	// (0x000743b4) aid_size_cell2_itu2

0x598f,	// (0x000743da) aid_size_cell_itu2_ParamLimits

0x598f,	// (0x000743da) aid_size_cell_itu2

0x59ef,	// (0x0007443a) bg_popup_window_pane_cp09_ParamLimits

0x59ef,	// (0x0007443a) bg_popup_window_pane_cp09

0x59fd,	// (0x00074448) field_vitu2_entry_pane_ParamLimits

0x59fd,	// (0x00074448) field_vitu2_entry_pane

0x5a25,	// (0x00074470) grid_vitu2_function_pane_ParamLimits

0x5a25,	// (0x00074470) grid_vitu2_function_pane

0x5a76,	// (0x000744c1) grid_vitu2_itu_pane_ParamLimits

0x5a76,	// (0x000744c1) grid_vitu2_itu_pane

0x5b06,	// (0x00074551) cell_vitu2_itu_pane_ParamLimits

0x5b06,	// (0x00074551) cell_vitu2_itu_pane

0x5b33,	// (0x0007457e) cell_vitu2_function_pane_ParamLimits

0x5b33,	// (0x0007457e) cell_vitu2_function_pane

0xd7ac,	// (0x0007c1f7) bg_popup_call_pane_cp08_ParamLimits

0xd7ac,	// (0x0007c1f7) bg_popup_call_pane_cp08

0xd7c3,	// (0x0007c20e) field_vitu2_entry_pane_g1

0xd7cf,	// (0x0007c21a) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0007e34f) field_vitu2_entry_pane_g

0x5b77,	// (0x000745c2) field_vitu2_entry_pane_t1_ParamLimits

0x5b77,	// (0x000745c2) field_vitu2_entry_pane_t1

0xa5fd,	// (0x00079048) field_vitu2_entry_pane_t2_ParamLimits

0xa5fd,	// (0x00079048) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0007e356) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0007e356) field_vitu2_entry_pane_t

0x5ba6,	// (0x000745f1) bg_button_pane_cp010_ParamLimits

0x5ba6,	// (0x000745f1) bg_button_pane_cp010

0xa61a,	// (0x00079065) cell_vitu2_itu_pane_g1

0x5bc2,	// (0x0007460d) cell_vitu2_itu_pane_t1_ParamLimits

0x5bc2,	// (0x0007460d) cell_vitu2_itu_pane_t1

0xfa1a,	// (0x0006e465) cell_vitu2_itu_pane_t2_ParamLimits

0xfa1a,	// (0x0006e465) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0007e360) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0007e360) cell_vitu2_itu_pane_t

0x9694,	// (0x000780df) bg_button_pane_cp011

0x5c20,	// (0x0007466b) cell_vitu2_function_pane_g1

0xf09d,	// (0x0007dae8) main_myfav_hc_pane

0x5550,	// (0x00073f9b) popup_image3_note_pane_ParamLimits

0x5550,	// (0x00073f9b) popup_image3_note_pane

0x556c,	// (0x00073fb7) popup_image3_tool_bar_pane_ParamLimits

0x556c,	// (0x00073fb7) popup_image3_tool_bar_pane

0xfaa8,	// (0x0006e4f3) cell_vitu2_itu_pane_t3_ParamLimits

0xfaa8,	// (0x0006e4f3) cell_vitu2_itu_pane_t3

0x968a,	// (0x000780d5) bg_popup_trans_pane

0xd7f1,	// (0x0007c23c) grid_image3_tool_bar_pane

0xd7fb,	// (0x0007c246) bg_popup_trans_pane_g1

0xadce,	// (0x00079819) bg_popup_trans_pane_g2

0xd803,	// (0x0007c24e) bg_popup_trans_pane_g3

0xd80b,	// (0x0007c256) bg_popup_trans_pane_g4

0xd813,	// (0x0007c25e) bg_popup_trans_pane_g5

0xd81b,	// (0x0007c266) bg_popup_trans_pane_g6

0xd823,	// (0x0007c26e) bg_popup_trans_pane_g7

0xd82b,	// (0x0007c276) bg_popup_trans_pane_g8

0xadae,	// (0x000797f9) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0007e367) bg_popup_trans_pane_g

0xd833,	// (0x0007c27e) cell_image3_tool_bar_pane_ParamLimits

0xd833,	// (0x0007c27e) cell_image3_tool_bar_pane

0xce23,	// (0x0007b86e) cell_image3_tool_bar_pane_g1

0x968a,	// (0x000780d5) bg_popup_trans_pane_cp1

0xd849,	// (0x0007c294) popup_image3_note_pane_t1

0xd857,	// (0x0007c2a2) popup_image3_note_pane_t2

0xd865,	// (0x0007c2b0) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0007e37a) popup_image3_note_pane_t

0xd875,	// (0x0007c2c0) popup_image3_note_pane_t3_copy1

0x5c34,	// (0x0007467f) bg_myfav_hc_instruction_pane_ParamLimits

0x5c34,	// (0x0007467f) bg_myfav_hc_instruction_pane

0x5c4c,	// (0x00074697) cell_myfav_contact_pane_ParamLimits

0x5c4c,	// (0x00074697) cell_myfav_contact_pane

0x5c68,	// (0x000746b3) cell_myfav_contact_pane_cp1_ParamLimits

0x5c68,	// (0x000746b3) cell_myfav_contact_pane_cp1

0x5c80,	// (0x000746cb) cell_myfav_contact_pane_cp2_ParamLimits

0x5c80,	// (0x000746cb) cell_myfav_contact_pane_cp2

0x5c98,	// (0x000746e3) cell_myfav_contact_pane_cp3_ParamLimits

0x5c98,	// (0x000746e3) cell_myfav_contact_pane_cp3

0x5caf,	// (0x000746fa) cell_myfav_contact_pane_cp4_ParamLimits

0x5caf,	// (0x000746fa) cell_myfav_contact_pane_cp4

0x5cc7,	// (0x00074712) cell_myfav_contact_pane_cp5_ParamLimits

0x5cc7,	// (0x00074712) cell_myfav_contact_pane_cp5

0x5cdb,	// (0x00074726) cell_myfav_contact_pane_cp6_ParamLimits

0x5cdb,	// (0x00074726) cell_myfav_contact_pane_cp6

0x5cf1,	// (0x0007473c) cell_myfav_contact_pane_cp7_ParamLimits

0x5cf1,	// (0x0007473c) cell_myfav_contact_pane_cp7

0xd883,	// (0x0007c2ce) listscroll_gen_pane_cp05

0x5d09,	// (0x00074754) main_myfav_hc_pane_g1_ParamLimits

0x5d09,	// (0x00074754) main_myfav_hc_pane_g1

0x5d23,	// (0x0007476e) main_myfav_hc_pane_g2_ParamLimits

0x5d23,	// (0x0007476e) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0007e381) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0007e381) main_myfav_hc_pane_g

0x5d57,	// (0x000747a2) main_myfav_hc_pane_t1_ParamLimits

0x5d57,	// (0x000747a2) main_myfav_hc_pane_t1

0xd88c,	// (0x0007c2d7) main_myfav_hc_pane_t2_ParamLimits

0xd88c,	// (0x0007c2d7) main_myfav_hc_pane_t2

0xd89e,	// (0x0007c2e9) main_myfav_hc_pane_t3_ParamLimits

0xd89e,	// (0x0007c2e9) main_myfav_hc_pane_t3

0x5d6e,	// (0x000747b9) main_myfav_hc_pane_t4_ParamLimits

0x5d6e,	// (0x000747b9) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0007e388) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0007e388) main_myfav_hc_pane_t

0xce23,	// (0x0007b86e) bg_myfav_hc_instruction_pane_g1

0xd8b0,	// (0x0007c2fb) cell_myfav_contact_pane_g1_ParamLimits

0xd8b0,	// (0x0007c2fb) cell_myfav_contact_pane_g1

0xd8b0,	// (0x0007c2fb) cell_myfav_contact_pane_g2_ParamLimits

0xd8b0,	// (0x0007c2fb) cell_myfav_contact_pane_g2

0xd8bc,	// (0x0007c307) cell_myfav_contact_pane_g3_ParamLimits

0xd8bc,	// (0x0007c307) cell_myfav_contact_pane_g3

0xd0af,	// (0x0007bafa) cell_myfav_contact_pane_g4_ParamLimits

0xd0af,	// (0x0007bafa) cell_myfav_contact_pane_g4

0xd8c9,	// (0x0007c314) cell_myfav_contact_pane_g5_ParamLimits

0xd8c9,	// (0x0007c314) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0007e393) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0007e393) cell_myfav_contact_pane_g

0x5d3d,	// (0x00074788) main_myfav_hc_pane_g3_ParamLimits

0x5d3d,	// (0x00074788) main_myfav_hc_pane_g3

0xfce8,	// (0x0006e733) popup_adpt_find_window

0x5d98,	// (0x000747e3) afind_page_pane_ParamLimits

0x5d98,	// (0x000747e3) afind_page_pane

0x5dad,	// (0x000747f8) aid_size_cell_afind_ParamLimits

0x5dad,	// (0x000747f8) aid_size_cell_afind

0x5dcb,	// (0x00074816) bg_popup_sub_pane_cp09_ParamLimits

0x5dcb,	// (0x00074816) bg_popup_sub_pane_cp09

0x5dd8,	// (0x00074823) find_pane_cp01_ParamLimits

0x5dd8,	// (0x00074823) find_pane_cp01

0xd8d5,	// (0x0007c320) grid_afind_control_pane_ParamLimits

0xd8d5,	// (0x0007c320) grid_afind_control_pane

0x5de5,	// (0x00074830) grid_afind_pane_ParamLimits

0x5de5,	// (0x00074830) grid_afind_pane

0x5e07,	// (0x00074852) cell_afind_pane_ParamLimits

0x5e07,	// (0x00074852) cell_afind_pane

0xce23,	// (0x0007b86e) afind_page_pane_g1

0x5e74,	// (0x000748bf) afind_page_pane_g2

0x5e7d,	// (0x000748c8) afind_page_pane_g3

0x0002,

0xf953,	// (0x0007e39e) afind_page_pane_g

0x5e86,	// (0x000748d1) afind_page_pane_t1

0xd8e9,	// (0x0007c334) cell_afind_grid_control_pane_ParamLimits

0xd8e9,	// (0x0007c334) cell_afind_grid_control_pane

0xd76e,	// (0x0007c1b9) bg_button_pane_cp69_ParamLimits

0xd76e,	// (0x0007c1b9) bg_button_pane_cp69

0x5ea6,	// (0x000748f1) cell_afind_pane_g1_ParamLimits

0x5ea6,	// (0x000748f1) cell_afind_pane_g1

0x5eb3,	// (0x000748fe) cell_afind_pane_t1_ParamLimits

0x5eb3,	// (0x000748fe) cell_afind_pane_t1

0xabc3,	// (0x0007960e) bg_button_pane_cp72

0xd8f8,	// (0x0007c343) cell_afind_grid_control_pane_g1

0x2d16,	// (0x00071761) aid_image_placing_area_ParamLimits

0x2d16,	// (0x00071761) aid_image_placing_area

0xd423,	// (0x0007be6e) field_vitu_entry_pane_g1_ParamLimits

0xd423,	// (0x0007be6e) field_vitu_entry_pane_g1

0xd42f,	// (0x0007be7a) field_vitu_entry_pane_g2_ParamLimits

0xd42f,	// (0x0007be7a) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0007e24b) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0007e24b) field_vitu_entry_pane_g

0x4f96,	// (0x000739e1) cell_vitu_itu_pane_g1_ParamLimits

0x4fd8,	// (0x00073a23) cell_vitu_itu_pane_t3_ParamLimits

0x4fd8,	// (0x00073a23) cell_vitu_itu_pane_t3

0xd70d,	// (0x0007c158) mp4_progress_pane_t1_ParamLimits

0xd726,	// (0x0007c171) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0007e2e4) mp4_progress_pane_t_ParamLimits

0xd73f,	// (0x0007c18a) mup_progress_pane_cp04_ParamLimits

0x5d82,	// (0x000747cd) main_myfav_hc_pane_t5_ParamLimits

0x5d82,	// (0x000747cd) main_myfav_hc_pane_t5

0xfb6a,	// (0x0006e5b5) aid_zoom_text_primary

0xfce8,	// (0x0006e733) popup_adpt_find_window_ParamLimits

0x9694,	// (0x000780df) main_cam_set_pane

0x57b6,	// (0x00074201) cam4_zoom_pane_ParamLimits

0x57b6,	// (0x00074201) cam4_zoom_pane

0x5ec5,	// (0x00074910) main_cam_set_pane_g1_ParamLimits

0x5ec5,	// (0x00074910) main_cam_set_pane_g1

0x5ed3,	// (0x0007491e) main_cam_set_pane_g2_ParamLimits

0x5ed3,	// (0x0007491e) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0007e3a5) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0007e3a5) main_cam_set_pane_g

0x5ef4,	// (0x0007493f) main_cam_set_pane_t1_ParamLimits

0x5ef4,	// (0x0007493f) main_cam_set_pane_t1

0x5f0f,	// (0x0007495a) main_cset_listscroll_pane_ParamLimits

0x5f0f,	// (0x0007495a) main_cset_listscroll_pane

0x5f33,	// (0x0007497e) main_cset_slider_pane_ParamLimits

0x5f33,	// (0x0007497e) main_cset_slider_pane

0xd909,	// (0x0007c354) main_cset_list_pane_ParamLimits

0xd909,	// (0x0007c354) main_cset_list_pane

0xd919,	// (0x0007c364) scroll_pane_cp028

0x5f5d,	// (0x000749a8) aid_area_touch_slider

0x5f79,	// (0x000749c4) cset_slider_pane

0x5fa3,	// (0x000749ee) main_cset_slider_pane_g1

0x5fb8,	// (0x00074a03) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0007e3aa) main_cset_slider_pane_g

0xd952,	// (0x0007c39d) main_cset_slider_pane_t1

0x607a,	// (0x00074ac5) main_cset_slider_pane_t2

0x6094,	// (0x00074adf) main_cset_slider_pane_t3

0x60ae,	// (0x00074af9) main_cset_slider_pane_t4

0x60c8,	// (0x00074b13) main_cset_slider_pane_t5

0x60e6,	// (0x00074b31) main_cset_slider_pane_t6

0x60fd,	// (0x00074b48) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0007e3cf) main_cset_slider_pane_t

0x6209,	// (0x00074c54) cset_list_set_pane_ParamLimits

0x6209,	// (0x00074c54) cset_list_set_pane

0x621d,	// (0x00074c68) aid_position_infowindow_above

0x6225,	// (0x00074c70) aid_position_infowindow_below

0x622d,	// (0x00074c78) cset_list_set_pane_g1_ParamLimits

0x622d,	// (0x00074c78) cset_list_set_pane_g1

0x6239,	// (0x00074c84) cset_list_set_pane_g3_ParamLimits

0x6239,	// (0x00074c84) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0007e3ee) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0007e3ee) cset_list_set_pane_g

0x6248,	// (0x00074c93) cset_list_set_pane_t1_ParamLimits

0x6248,	// (0x00074c93) cset_list_set_pane_t1

0xbf7b,	// (0x0007a9c6) list_highlight_pane_cp021_ParamLimits

0xbf7b,	// (0x0007a9c6) list_highlight_pane_cp021

0xb6f0,	// (0x0007a13b) cset_slider_pane_g1

0xb702,	// (0x0007a14d) cset_slider_pane_g2

0xb6f9,	// (0x0007a144) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0007e3f3) cset_slider_pane_g

0xa62c,	// (0x00079077) aid_area_touch_cam4_zoom

0x625d,	// (0x00074ca8) cam4_zoom_cont_pane

0x6265,	// (0x00074cb0) cam4_zoom_pane_g1

0x626d,	// (0x00074cb8) cam4_zoom_pane_g2

0x6275,	// (0x00074cc0) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0007e3fa) cam4_zoom_pane_g

0xa635,	// (0x00079080) cam4_zoom_cont_pane_g1

0xa63e,	// (0x00079089) cam4_zoom_cont_pane_g2

0xa647,	// (0x00079092) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0007e401) cam4_zoom_cont_pane_g

0x55d8,	// (0x00074023) call4_image_pane_ParamLimits

0x55d8,	// (0x00074023) call4_image_pane

0x5643,	// (0x0007408e) call4_windows_conf_pane_ParamLimits

0x568e,	// (0x000740d9) popup_call4_audio_in_window_ParamLimits

0x568e,	// (0x000740d9) popup_call4_audio_in_window

0x968a,	// (0x000780d5) bg_popup_call2_act_pane_cp02

0xd77a,	// (0x0007c1c5) call4_list_conf_pane

0xce23,	// (0x0007b86e) call4_image_pane_g1

0xce23,	// (0x0007b86e) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0007e10c) call4_image_pane_g

0xd9f2,	// (0x0007c43d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd9f2,	// (0x0007c43d) list_single_graphic_popup_conf4_pane

0x968a,	// (0x000780d5) list_highlight_pane_cp022

0xda07,	// (0x0007c452) list_single_graphic_popup_conf4_pane_g1

0xb2e8,	// (0x00079d33) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0007e408) list_single_graphic_popup_conf4_pane_g

0xda0f,	// (0x0007c45a) list_single_graphic_popup_conf4_pane_t1

0x0e8a,	// (0x0006f8d5) popup_vtel_slider_window_ParamLimits

0x0e8a,	// (0x0006f8d5) popup_vtel_slider_window

0xd75c,	// (0x0007c1a7) dialer2_ne_pane_t2_ParamLimits

0xd75c,	// (0x0007c1a7) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0007e2e9) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0007e2e9) dialer2_ne_pane_t

0xcc02,	// (0x0007b64d) bg_popup_sub_pane_cp010_ParamLimits

0xcc02,	// (0x0007b64d) bg_popup_sub_pane_cp010

0x627e,	// (0x00074cc9) popup_vtel_slider_window_g1_ParamLimits

0x627e,	// (0x00074cc9) popup_vtel_slider_window_g1

0x6291,	// (0x00074cdc) popup_vtel_slider_window_g2_ParamLimits

0x6291,	// (0x00074cdc) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0007e40d) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0007e40d) popup_vtel_slider_window_g

0x62e7,	// (0x00074d32) vtel_slider_pane_ParamLimits

0x62e7,	// (0x00074d32) vtel_slider_pane

0x6309,	// (0x00074d54) vtel_slider_pane_g1_ParamLimits

0x6309,	// (0x00074d54) vtel_slider_pane_g1

0x631d,	// (0x00074d68) vtel_slider_pane_g2_ParamLimits

0x631d,	// (0x00074d68) vtel_slider_pane_g2

0x6335,	// (0x00074d80) vtel_slider_pane_g3_ParamLimits

0x6335,	// (0x00074d80) vtel_slider_pane_g3

0x6309,	// (0x00074d54) vtel_slider_pane_g4_ParamLimits

0x6309,	// (0x00074d54) vtel_slider_pane_g4

0x634b,	// (0x00074d96) vtel_slider_pane_g5_ParamLimits

0x634b,	// (0x00074d96) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0007e416) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0007e416) vtel_slider_pane_g

0x9694,	// (0x000780df) main_gallery2_pane

0x59bb,	// (0x00074406) aid_size_row_itut2_dropdow_list_ParamLimits

0x59bb,	// (0x00074406) aid_size_row_itut2_dropdow_list

0x5a4d,	// (0x00074498) grid_vitu2_function_top_pane_ParamLimits

0x5a4d,	// (0x00074498) grid_vitu2_function_top_pane

0x5ab1,	// (0x000744fc) popup_vitu2_dropdown_list_window_ParamLimits

0x5ab1,	// (0x000744fc) popup_vitu2_dropdown_list_window

0x5ada,	// (0x00074525) popup_vitu2_match_list_window

0x636f,	// (0x00074dba) cell_vitu2_function_top_pane_ParamLimits

0x636f,	// (0x00074dba) cell_vitu2_function_top_pane

0x6391,	// (0x00074ddc) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6391,	// (0x00074ddc) cell_vitu2_function_top_pane_cp01

0x63ad,	// (0x00074df8) cell_vitu2_function_top_wide_pane_ParamLimits

0x63ad,	// (0x00074df8) cell_vitu2_function_top_wide_pane

0x9694,	// (0x000780df) bg_button_pane_cp012

0x63c9,	// (0x00074e14) cell_vitu2_function_top_pane_g1

0xa650,	// (0x0007909b) bg_button_pane_cp013_ParamLimits

0xa650,	// (0x0007909b) bg_button_pane_cp013

0x63dd,	// (0x00074e28) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x63dd,	// (0x00074e28) cell_vitu2_function_top_wide_pane_g1

0x9694,	// (0x000780df) bg_popup_sub_pane_cp20

0x63f5,	// (0x00074e40) list_vitu2_match_list_pane

0xd7fb,	// (0x0007c246) bg_popup_sub_pane_cp20_g1

0xd803,	// (0x0007c24e) bg_popup_sub_pane_cp20_g2

0xadce,	// (0x00079819) bg_popup_sub_pane_cp20_g3

0xd80b,	// (0x0007c256) bg_popup_sub_pane_cp20_g4

0xadae,	// (0x000797f9) bg_popup_sub_pane_cp20_g5

0xda25,	// (0x0007c470) bg_popup_sub_pane_cp20_g6

0xd81b,	// (0x0007c266) bg_popup_sub_pane_cp20_g7

0xd823,	// (0x0007c26e) bg_popup_sub_pane_cp20_g8

0xd82b,	// (0x0007c276) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0007e421) bg_popup_sub_pane_cp20_g

0xa66c,	// (0x000790b7) list_vitu2_match_list_item_pane_ParamLimits

0xa66c,	// (0x000790b7) list_vitu2_match_list_item_pane

0xa67e,	// (0x000790c9) list_vitu2_match_list_item_pane_t1

0xf09d,	// (0x0007dae8) bg_popup_sub_pane_cp21

0xa68c,	// (0x000790d7) grid_vitu2_dropdown_list_pane

0x645f,	// (0x00074eaa) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x645f,	// (0x00074eaa) cell_vitu2_dropdown_list_char_pane

0x6482,	// (0x00074ecd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6482,	// (0x00074ecd) cell_vitu2_dropdown_list_ctrl_pane

0xda2d,	// (0x0007c478) cell_vitu2_dropdown_list_char_pane_g1

0xda36,	// (0x0007c481) cell_vitu2_dropdown_list_char_pane_g2

0xda3f,	// (0x0007c48a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0007e43e) cell_vitu2_dropdown_list_char_pane_g

0x64b0,	// (0x00074efb) cell_vitu2_dropdown_list_char_pane_t1

0x64be,	// (0x00074f09) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x64be,	// (0x00074f09) cell_vitu2_dropdown_list_ctrl_pane_g1

0x64ce,	// (0x00074f19) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x64ce,	// (0x00074f19) cell_vitu2_dropdown_list_ctrl_pane_g2

0x64df,	// (0x00074f2a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x64df,	// (0x00074f2a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x64ef,	// (0x00074f3a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x64ef,	// (0x00074f3a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa51e,	// (0x00078f69) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa51e,	// (0x00078f69) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0007e445) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0007e445) cell_vitu2_dropdown_list_ctrl_pane_g

0x650b,	// (0x00074f56) aid_size_cell_gallery2_ParamLimits

0x650b,	// (0x00074f56) aid_size_cell_gallery2

0x6529,	// (0x00074f74) grid_gallery2_pane_ParamLimits

0x6529,	// (0x00074f74) grid_gallery2_pane

0x6543,	// (0x00074f8e) scroll_pane_cp029_ParamLimits

0x6543,	// (0x00074f8e) scroll_pane_cp029

0x6554,	// (0x00074f9f) cell_gallery2_pane_ParamLimits

0x6554,	// (0x00074f9f) cell_gallery2_pane

0xda48,	// (0x0007c493) cell_gallery2_pane_g2

0x65b8,	// (0x00075003) cell_gallery2_pane_g3

0xda50,	// (0x0007c49b) cell_gallery2_pane_g4

0xda58,	// (0x0007c4a3) cell_gallery2_pane_g5

0xab5c,	// (0x000795a7) grid_highlight_pane_cp10

0x5ada,	// (0x00074525) popup_vitu2_match_list_window_ParamLimits

0x5af1,	// (0x0007453c) popup_vitu2_query_window_ParamLimits

0x5af1,	// (0x0007453c) popup_vitu2_query_window

0xf09d,	// (0x0007dae8) bg_vitu2_candi_button_pane

0xda2d,	// (0x0007c478) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda36,	// (0x0007c481) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda3f,	// (0x0007c48a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x65c0,	// (0x0007500b) bg_button_pane_cp015

0x65d4,	// (0x0007501f) bg_button_pane_cp016

0x65e7,	// (0x00075032) bg_button_pane_cp017

0xc9e3,	// (0x0007b42e) bg_popup_sub_pane_cp22

0xda60,	// (0x0007c4ab) popup_vitu2_query_window_g1

0x662c,	// (0x00075077) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0007e450) popup_vitu2_query_window_g

0x664b,	// (0x00075096) popup_vitu2_query_window_t1_ParamLimits

0x664b,	// (0x00075096) popup_vitu2_query_window_t1

0x6680,	// (0x000750cb) popup_vitu2_query_window_t2_ParamLimits

0x6680,	// (0x000750cb) popup_vitu2_query_window_t2

0x6692,	// (0x000750dd) popup_vitu2_query_window_t3_ParamLimits

0x6692,	// (0x000750dd) popup_vitu2_query_window_t3

0x66ba,	// (0x00075105) popup_vitu2_query_window_t4_ParamLimits

0x66ba,	// (0x00075105) popup_vitu2_query_window_t4

0x66db,	// (0x00075126) popup_vitu2_query_window_t5_ParamLimits

0x66db,	// (0x00075126) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0007e457) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0007e457) popup_vitu2_query_window_t

0xd901,	// (0x0007c34c) main_cset_text_pane

0x5f5d,	// (0x000749a8) aid_area_touch_slider_ParamLimits

0x5f79,	// (0x000749c4) cset_slider_pane_ParamLimits

0x5fa3,	// (0x000749ee) main_cset_slider_pane_g1_ParamLimits

0x5fb8,	// (0x00074a03) main_cset_slider_pane_g2_ParamLimits

0xd922,	// (0x0007c36d) main_cset_slider_pane_g3_ParamLimits

0xd922,	// (0x0007c36d) main_cset_slider_pane_g3

0x5fcd,	// (0x00074a18) main_cset_slider_pane_g4_ParamLimits

0x5fcd,	// (0x00074a18) main_cset_slider_pane_g4

0x5fdc,	// (0x00074a27) main_cset_slider_pane_g5_ParamLimits

0x5fdc,	// (0x00074a27) main_cset_slider_pane_g5

0x5fea,	// (0x00074a35) main_cset_slider_pane_g6_ParamLimits

0x5fea,	// (0x00074a35) main_cset_slider_pane_g6

0xf95f,	// (0x0007e3aa) main_cset_slider_pane_g_ParamLimits

0xd952,	// (0x0007c39d) main_cset_slider_pane_t1_ParamLimits

0x607a,	// (0x00074ac5) main_cset_slider_pane_t2_ParamLimits

0x6094,	// (0x00074adf) main_cset_slider_pane_t3_ParamLimits

0x60ae,	// (0x00074af9) main_cset_slider_pane_t4_ParamLimits

0x60c8,	// (0x00074b13) main_cset_slider_pane_t5_ParamLimits

0x60e6,	// (0x00074b31) main_cset_slider_pane_t6_ParamLimits

0x60fd,	// (0x00074b48) main_cset_slider_pane_t7_ParamLimits

0x612b,	// (0x00074b76) main_cset_slider_pane_t8_ParamLimits

0x612b,	// (0x00074b76) main_cset_slider_pane_t8

0x6153,	// (0x00074b9e) main_cset_slider_pane_t9_ParamLimits

0x6153,	// (0x00074b9e) main_cset_slider_pane_t9

0x617b,	// (0x00074bc6) main_cset_slider_pane_t10_ParamLimits

0x617b,	// (0x00074bc6) main_cset_slider_pane_t10

0x61a3,	// (0x00074bee) main_cset_slider_pane_t11_ParamLimits

0x61a3,	// (0x00074bee) main_cset_slider_pane_t11

0x61cd,	// (0x00074c18) main_cset_slider_pane_t12_ParamLimits

0x61cd,	// (0x00074c18) main_cset_slider_pane_t12

0x61ea,	// (0x00074c35) main_cset_slider_pane_t13_ParamLimits

0x61ea,	// (0x00074c35) main_cset_slider_pane_t13

0xf984,	// (0x0007e3cf) main_cset_slider_pane_t_ParamLimits

0x968a,	// (0x000780d5) bg_popup_sub_pane_cp011

0xda6c,	// (0x0007c4b7) main_cset_text_pane_g1

0xda74,	// (0x0007c4bf) main_cset_text_pane_t1

0xda82,	// (0x0007c4cd) main_cset_text_pane_t2

0xda90,	// (0x0007c4db) main_cset_text_pane_t3

0xda9e,	// (0x0007c4e9) main_cset_text_pane_t4

0xdaac,	// (0x0007c4f7) main_cset_text_pane_t5

0xdaba,	// (0x0007c505) main_cset_text_pane_t6

0xdac8,	// (0x0007c513) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0007e466) main_cset_text_pane_t

0xf09d,	// (0x0007dae8) main_cam4_burst_pane

0xf09d,	// (0x0007dae8) main_cam5_pane

0x5e94,	// (0x000748df) bg_button_pane_cp019

0x5e9d,	// (0x000748e8) bg_button_pane_cp020

0xd92e,	// (0x0007c379) main_cset_slider_pane_g7_ParamLimits

0xd92e,	// (0x0007c379) main_cset_slider_pane_g7

0xd93a,	// (0x0007c385) main_cset_slider_pane_g8_ParamLimits

0xd93a,	// (0x0007c385) main_cset_slider_pane_g8

0x5ffe,	// (0x00074a49) main_cset_slider_pane_g9_ParamLimits

0x5ffe,	// (0x00074a49) main_cset_slider_pane_g9

0x600a,	// (0x00074a55) main_cset_slider_pane_g10_ParamLimits

0x600a,	// (0x00074a55) main_cset_slider_pane_g10

0x6016,	// (0x00074a61) main_cset_slider_pane_g11_ParamLimits

0x6016,	// (0x00074a61) main_cset_slider_pane_g11

0x6022,	// (0x00074a6d) main_cset_slider_pane_g12_ParamLimits

0x6022,	// (0x00074a6d) main_cset_slider_pane_g12

0x602e,	// (0x00074a79) main_cset_slider_pane_g13_ParamLimits

0x602e,	// (0x00074a79) main_cset_slider_pane_g13

0x603a,	// (0x00074a85) main_cset_slider_pane_g14_ParamLimits

0x603a,	// (0x00074a85) main_cset_slider_pane_g14

0x6046,	// (0x00074a91) main_cset_slider_pane_g15_ParamLimits

0x6046,	// (0x00074a91) main_cset_slider_pane_g15

0xd980,	// (0x0007c3cb) main_cset_slider_pane_t14_ParamLimits

0xd980,	// (0x0007c3cb) main_cset_slider_pane_t14

0xd9b9,	// (0x0007c404) main_cset_slider_pane_t15_ParamLimits

0xd9b9,	// (0x0007c404) main_cset_slider_pane_t15

0x6752,	// (0x0007519d) aid_cam4_burst_size_cell_ParamLimits

0x6752,	// (0x0007519d) aid_cam4_burst_size_cell

0x6772,	// (0x000751bd) grid_cam4_burst_pane_ParamLimits

0x6772,	// (0x000751bd) grid_cam4_burst_pane

0x67ac,	// (0x000751f7) linegrid_cam4_burst_pane_ParamLimits

0x67ac,	// (0x000751f7) linegrid_cam4_burst_pane

0xdad6,	// (0x0007c521) scroll_pane_cp30_ParamLimits

0xdad6,	// (0x0007c521) scroll_pane_cp30

0x67ce,	// (0x00075219) cell_cam4_burst_pane_ParamLimits

0x67ce,	// (0x00075219) cell_cam4_burst_pane

0xdae2,	// (0x0007c52d) linegrid_cam4_burst_pane_g1_ParamLimits

0xdae2,	// (0x0007c52d) linegrid_cam4_burst_pane_g1

0x6823,	// (0x0007526e) linegrid_cam4_burst_pane_g2_ParamLimits

0x6823,	// (0x0007526e) linegrid_cam4_burst_pane_g2

0xdaef,	// (0x0007c53a) linegrid_cam4_burst_pane_g3_ParamLimits

0xdaef,	// (0x0007c53a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0007e475) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0007e475) linegrid_cam4_burst_pane_g

0x6834,	// (0x0007527f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6834,	// (0x0007527f) linegrid_cam4_burst_pane_g3_copy1

0xdafc,	// (0x0007c547) linegrid_cam4_burst_pane_g4_ParamLimits

0xdafc,	// (0x0007c547) linegrid_cam4_burst_pane_g4

0x6852,	// (0x0007529d) linegrid_cam4_burst_pane_g5_ParamLimits

0x6852,	// (0x0007529d) linegrid_cam4_burst_pane_g5

0x6863,	// (0x000752ae) linegrid_cam4_burst_pane_g6_ParamLimits

0x6863,	// (0x000752ae) linegrid_cam4_burst_pane_g6

0xdb09,	// (0x0007c554) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb09,	// (0x0007c554) linegrid_cam4_burst_pane_g7

0x687a,	// (0x000752c5) cell_cam4_burst_pane_g1

0xdb22,	// (0x0007c56d) main_cam5_pane_t1_ParamLimits

0xdb22,	// (0x0007c56d) main_cam5_pane_t1

0xdb34,	// (0x0007c57f) main_cam5_pane_t2_ParamLimits

0xdb34,	// (0x0007c57f) main_cam5_pane_t2

0xdb46,	// (0x0007c591) main_cam5_pane_t3_ParamLimits

0xdb46,	// (0x0007c591) main_cam5_pane_t3

0xdb58,	// (0x0007c5a3) main_cam5_pane_t4_ParamLimits

0xdb58,	// (0x0007c5a3) main_cam5_pane_t4

0xdb70,	// (0x0007c5bb) main_cam5_pane_t5_ParamLimits

0xdb70,	// (0x0007c5bb) main_cam5_pane_t5

0xdb84,	// (0x0007c5cf) main_cam5_pane_t6_ParamLimits

0xdb84,	// (0x0007c5cf) main_cam5_pane_t6

0xdb98,	// (0x0007c5e3) main_cam5_pane_t7_ParamLimits

0xdb98,	// (0x0007c5e3) main_cam5_pane_t7

0xdbaa,	// (0x0007c5f5) main_cam5_pane_t8_ParamLimits

0xdbaa,	// (0x0007c5f5) main_cam5_pane_t8

0xdbc8,	// (0x0007c613) main_cam5_pane_t9_ParamLimits

0xdbc8,	// (0x0007c613) main_cam5_pane_t9

0xdbda,	// (0x0007c625) main_cam5_pane_t10_ParamLimits

0xdbda,	// (0x0007c625) main_cam5_pane_t10

0xdbec,	// (0x0007c637) main_cam5_pane_t11_ParamLimits

0xdbec,	// (0x0007c637) main_cam5_pane_t11

0xdc00,	// (0x0007c64b) main_cam5_pane_t12_ParamLimits

0xdc00,	// (0x0007c64b) main_cam5_pane_t12

0xdc17,	// (0x0007c662) main_cam5_pane_t13_ParamLimits

0xdc17,	// (0x0007c662) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0007e481) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0007e481) main_cam5_pane_t

0xfd73,	// (0x0006e7be) popup_scut_keymap_window_ParamLimits

0xfd73,	// (0x0006e7be) popup_scut_keymap_window

0x688d,	// (0x000752d8) aid_size_cell_brow_shortcut

0xab5c,	// (0x000795a7) bg_popup_window_pane_cp010

0x6899,	// (0x000752e4) grid_scut_pane

0x68a5,	// (0x000752f0) cell_scut_pane_ParamLimits

0x68a5,	// (0x000752f0) cell_scut_pane

0x68be,	// (0x00075309) cell_scut_pane_g1

0xdc3a,	// (0x0007c685) cell_scut_pane_t1

0xdc49,	// (0x0007c694) cell_scut_pane_t2

0x68c7,	// (0x00075312) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0007e49c) cell_scut_pane_t

0x446e,	// (0x00072eb9) main_mup3_pane_g8_ParamLimits

0x446e,	// (0x00072eb9) main_mup3_pane_g8

0x59d7,	// (0x00074422) area_vitu2_query_pane_ParamLimits

0x59d7,	// (0x00074422) area_vitu2_query_pane

0x65fa,	// (0x00075045) input_focus_pane_cp08

0xdc58,	// (0x0007c6a3) area_vitu2_query_pane_g1

0x68d5,	// (0x00075320) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0007e4a3) area_vitu2_query_pane_g

0x68e6,	// (0x00075331) area_vitu2_query_pane_t1_ParamLimits

0x68e6,	// (0x00075331) area_vitu2_query_pane_t1

0x68fa,	// (0x00075345) area_vitu2_query_pane_t2_ParamLimits

0x68fa,	// (0x00075345) area_vitu2_query_pane_t2

0x690e,	// (0x00075359) area_vitu2_query_pane_t3_ParamLimits

0x690e,	// (0x00075359) area_vitu2_query_pane_t3

0xa694,	// (0x000790df) area_vitu2_query_pane_t4_ParamLimits

0xa694,	// (0x000790df) area_vitu2_query_pane_t4

0xa6bc,	// (0x00079107) area_vitu2_query_pane_t5_ParamLimits

0xa6bc,	// (0x00079107) area_vitu2_query_pane_t5

0xa6e4,	// (0x0007912f) area_vitu2_query_pane_t6_ParamLimits

0xa6e4,	// (0x0007912f) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0007e4a8) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0007e4a8) area_vitu2_query_pane_t

0x6936,	// (0x00075381) bg_button_pane_cp018

0x6944,	// (0x0007538f) bg_button_pane_cp021

0x6950,	// (0x0007539b) bg_button_pane_cp022

0x6961,	// (0x000753ac) input_focus_pane_cp09

0xb3f7,	// (0x00079e42) aid_size_touch_mv_arrow_left

0xb422,	// (0x00079e6d) aid_size_touch_mv_arrow_right

0x605e,	// (0x00074aa9) main_cset_slider_pane_g16_ParamLimits

0x605e,	// (0x00074aa9) main_cset_slider_pane_g16

0x606c,	// (0x00074ab7) main_cset_slider_pane_g17_ParamLimits

0x606c,	// (0x00074ab7) main_cset_slider_pane_g17

0x687a,	// (0x000752c5) cell_cam4_burst_pane_g1_ParamLimits

0x968a,	// (0x000780d5) compa_mode_pane

0x62a1,	// (0x00074cec) popup_vtel_slider_window_g3_ParamLimits

0x62a1,	// (0x00074cec) popup_vtel_slider_window_g3

0x62b8,	// (0x00074d03) popup_vtel_slider_window_g4_ParamLimits

0x62b8,	// (0x00074d03) popup_vtel_slider_window_g4

0x62cf,	// (0x00074d1a) popup_vtel_slider_window_t1_ParamLimits

0x62cf,	// (0x00074d1a) popup_vtel_slider_window_t1

0xf09d,	// (0x0007dae8) main_cl_pane

0xa115,	// (0x00078b60) popup_imed_adjust2_window_ParamLimits

0xc9e3,	// (0x0007b42e) bg_tb_trans_pane_cp05_ParamLimits

0xd313,	// (0x0007bd5e) popup_imed_adjust2_window_g1_ParamLimits

0xd322,	// (0x0007bd6d) popup_imed_adjust2_window_g2_ParamLimits

0xd322,	// (0x0007bd6d) popup_imed_adjust2_window_g2

0xd32e,	// (0x0007bd79) popup_imed_adjust2_window_g3_ParamLimits

0xd32e,	// (0x0007bd79) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0007e20f) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0007e20f) popup_imed_adjust2_window_g

0xd33a,	// (0x0007bd85) popup_imed_adjust2_window_t1_ParamLimits

0xd352,	// (0x0007bd9d) slider_imed_adjust_pane_ParamLimits

0xd366,	// (0x0007bdb1) slider_imed_adjust_pane_g1_ParamLimits

0xd376,	// (0x0007bdc1) slider_imed_adjust_pane_g2_ParamLimits

0xd386,	// (0x0007bdd1) slider_imed_adjust_pane_g3_ParamLimits

0xd397,	// (0x0007bde2) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0007e216) slider_imed_adjust_pane_g_ParamLimits

0x5756,	// (0x000741a1) aid_touch_area_cam4_ParamLimits

0x5756,	// (0x000741a1) aid_touch_area_cam4

0xa500,	// (0x00078f4b) battery_pane_cp01

0x5829,	// (0x00074274) main_camera4_pane_g6_ParamLimits

0x5829,	// (0x00074274) main_camera4_pane_g6

0x5853,	// (0x0007429e) main_camera4_pane_t2_ParamLimits

0x5853,	// (0x0007429e) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0007e31d) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0007e31d) main_camera4_pane_t

0x5888,	// (0x000742d3) aid_touch_area_vid4_ParamLimits

0x5888,	// (0x000742d3) aid_touch_area_vid4

0x58dc,	// (0x00074327) main_video4_pane_g5_ParamLimits

0x58dc,	// (0x00074327) main_video4_pane_g5

0x5901,	// (0x0007434c) vid4_progress_pane_ParamLimits

0x5901,	// (0x0007434c) vid4_progress_pane

0xd946,	// (0x0007c391) main_cset_slider_pane_g18_ParamLimits

0xd946,	// (0x0007c391) main_cset_slider_pane_g18

0xdb16,	// (0x0007c561) cell_cam4_burst_pane_g2_ParamLimits

0xdb16,	// (0x0007c561) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0007e47c) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0007e47c) cell_cam4_burst_pane_g

0x9e2c,	// (0x00078877) bg_cl_pane_ParamLimits

0x9e2c,	// (0x00078877) bg_cl_pane

0x6972,	// (0x000753bd) cl_header_pane_ParamLimits

0x6972,	// (0x000753bd) cl_header_pane

0x6986,	// (0x000753d1) cl_listscroll_pane_ParamLimits

0x6986,	// (0x000753d1) cl_listscroll_pane

0xdc64,	// (0x0007c6af) bg_cl_pane_g1

0xdc6c,	// (0x0007c6b7) bg_cl_pane_g2

0xdc74,	// (0x0007c6bf) bg_cl_pane_g3

0xdc7c,	// (0x0007c6c7) bg_cl_pane_g4

0xdc84,	// (0x0007c6cf) bg_cl_pane_g5

0xdc8c,	// (0x0007c6d7) bg_cl_pane_g6

0xdc94,	// (0x0007c6df) bg_cl_pane_g7

0xdc9c,	// (0x0007c6e7) bg_cl_pane_g8

0xdca4,	// (0x0007c6ef) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0007e4b7) bg_cl_pane_g

0x6996,	// (0x000753e1) aid_height_cl_leading_ParamLimits

0x6996,	// (0x000753e1) aid_height_cl_leading

0x69a2,	// (0x000753ed) aid_height_cl_text_ParamLimits

0x69a2,	// (0x000753ed) aid_height_cl_text

0xbf7b,	// (0x0007a9c6) bg_cl_header_pane_ParamLimits

0xbf7b,	// (0x0007a9c6) bg_cl_header_pane

0x69c1,	// (0x0007540c) cl_header_pane_g1_ParamLimits

0x69c1,	// (0x0007540c) cl_header_pane_g1

0x69d7,	// (0x00075422) cl_header_pane_t1_ParamLimits

0x69d7,	// (0x00075422) cl_header_pane_t1

0xdcac,	// (0x0007c6f7) cl_list_pane

0xd919,	// (0x0007c364) hc_scroll_pane_cp01

0xadae,	// (0x000797f9) bg_cl_header_pane_g1

0xd7fb,	// (0x0007c246) bg_cl_header_pane_g2

0xadce,	// (0x00079819) bg_cl_header_pane_g3

0xd80b,	// (0x0007c256) bg_cl_header_pane_g4

0xd803,	// (0x0007c24e) bg_cl_header_pane_g5

0xda25,	// (0x0007c470) bg_cl_header_pane_g6

0xd823,	// (0x0007c26e) bg_cl_header_pane_g7

0xd82b,	// (0x0007c276) bg_cl_header_pane_g8

0xd81b,	// (0x0007c266) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0007e4ca) bg_cl_header_pane_g

0x69f0,	// (0x0007543b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x69f0,	// (0x0007543b) hc_cl_list_double_graphic_heading_pane

0x6a03,	// (0x0007544e) hc_cl_list_single_graphic_pane_ParamLimits

0x6a03,	// (0x0007544e) hc_cl_list_single_graphic_pane

0x6a1b,	// (0x00075466) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6a1b,	// (0x00075466) hc_cl_list_single_graphic_pane_g1

0x6a27,	// (0x00075472) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6a27,	// (0x00075472) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0007e4dd) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0007e4dd) hc_cl_list_single_graphic_pane_g

0x6a3b,	// (0x00075486) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6a3b,	// (0x00075486) hc_cl_list_single_graphic_pane_t1

0x6a1b,	// (0x00075466) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6a1b,	// (0x00075466) hc_cl_list_double_graphic_heading_pane_g1

0x6a50,	// (0x0007549b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6a50,	// (0x0007549b) hc_cl_list_double_graphic_heading_pane_g2

0x6a64,	// (0x000754af) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6a64,	// (0x000754af) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0007e4e2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0007e4e2) hc_cl_list_double_graphic_heading_pane_g

0x6a78,	// (0x000754c3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6a78,	// (0x000754c3) hc_cl_list_double_graphic_heading_pane_t1

0x6a8d,	// (0x000754d8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6a8d,	// (0x000754d8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0007e4e9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0007e4e9) hc_cl_list_double_graphic_heading_pane_t

0xa738,	// (0x00079183) vid4_progress_pane_g1

0xa748,	// (0x00079193) vid4_progress_pane_g2

0x6aa2,	// (0x000754ed) vid4_progress_pane_g3

0xa545,	// (0x00078f90) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0007e4ee) vid4_progress_pane_g

0x6ab4,	// (0x000754ff) vid4_progress_pane_t1

0xa758,	// (0x000791a3) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0007e4f9) vid4_progress_pane_t

0x6acc,	// (0x00075517) wait_bar_pane_cp07

0xcc10,	// (0x0007b65b) blid_firmament_pane_ParamLimits

0xcc53,	// (0x0007b69e) popup_blid_sat_info2_window_g1

0xcc77,	// (0x0007b6c2) popup_blid_sat_info2_window_t3

0xcc85,	// (0x0007b6d0) popup_blid_sat_info2_window_t4

0xcc93,	// (0x0007b6de) popup_blid_sat_info2_window_t5

0xcca1,	// (0x0007b6ec) popup_blid_sat_info2_window_t6

0xccb1,	// (0x0007b6fc) popup_blid_sat_info2_window_t7

0xccbf,	// (0x0007b70a) popup_blid_sat_info2_window_t8

0xcccd,	// (0x0007b718) popup_blid_sat_info2_window_t9

0xccdb,	// (0x0007b726) popup_blid_sat_info2_window_t10

0xcda3,	// (0x0007b7ee) aid_firma_cardinal_ParamLimits

0xcdb7,	// (0x0007b802) blid_firmament_pane_t1_ParamLimits

0xcdce,	// (0x0007b819) blid_firmament_pane_t2_ParamLimits

0xcde5,	// (0x0007b830) blid_firmament_pane_t3_ParamLimits

0xcdfc,	// (0x0007b847) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0007e103) blid_firmament_pane_t_ParamLimits

0xce13,	// (0x0007b85e) blid_sat_info_pane_ParamLimits

0x9694,	// (0x000780df) main_cam_set_pane_ParamLimits

0x4d46,	// (0x00073791) aid_size_cell_colour_35_ParamLimits

0x4d66,	// (0x000737b1) aid_size_cell_colour_112_ParamLimits

0x4d86,	// (0x000737d1) aid_size_cell_effect_ParamLimits

0xc9e3,	// (0x0007b42e) bg_tb_trans_pane_cp02_ParamLimits

0xb016,	// (0x00079a61) heading_imed_pane_ParamLimits

0x4da6,	// (0x000737f1) listscroll_imed_pane_ParamLimits

0xc00b,	// (0x0007aa56) popup_call2_audio_first_window_g5_ParamLimits

0xc00b,	// (0x0007aa56) popup_call2_audio_first_window_g5

0x5363,	// (0x00073dae) aid_size_touch_image3_arrow_left_ParamLimits

0x5363,	// (0x00073dae) aid_size_touch_image3_arrow_left

0x538f,	// (0x00073dda) aid_size_touch_image3_arrow_right_ParamLimits

0x538f,	// (0x00073dda) aid_size_touch_image3_arrow_right

0xa76d,	// (0x000791b8) vid4_progress_pane_t3

0x50bf,	// (0x00073b0a) main_hwr_training_symbol_option_pane_ParamLimits

0x50bf,	// (0x00073b0a) main_hwr_training_symbol_option_pane

0xd647,	// (0x0007c092) popup_hwr_training_preview_window_ParamLimits

0xd647,	// (0x0007c092) popup_hwr_training_preview_window

0x50df,	// (0x00073b2a) hwr_training_navi_pane_g5_ParamLimits

0x50df,	// (0x00073b2a) hwr_training_navi_pane_g5

0xd7e9,	// (0x0007c234) popup_char_count_window

0x9694,	// (0x000780df) bg_popup_sub_pane_cp20_ParamLimits

0x63f5,	// (0x00074e40) list_vitu2_match_list_pane_ParamLimits

0x6404,	// (0x00074e4f) vitu2_page_scroll_pane_ParamLimits

0x6404,	// (0x00074e4f) vitu2_page_scroll_pane

0xdcbe,	// (0x0007c709) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdcbe,	// (0x0007c709) list_single_hwr_training_symbol_option_pane

0xdcd1,	// (0x0007c71c) list_single_hwr_training_symbol_option_pane_g1

0xdcd9,	// (0x0007c724) list_single_hwr_training_symbol_option_pane_t1

0xdce7,	// (0x0007c732) bg_button_pane_cp023

0xdcf0,	// (0x0007c73b) bg_button_pane_cp024

0x6b0e,	// (0x00075559) vitu2_page_scroll_pane_g1

0x6b16,	// (0x00075561) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0007e500) vitu2_page_scroll_pane_g

0x6b20,	// (0x0007556b) vitu2_page_scroll_pane_t1

0xd3cd,	// (0x0007be18) popup_char_count_window_g1

0xdd23,	// (0x0007c76e) popup_char_count_window_g2

0xd3d6,	// (0x0007be21) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0007e505) popup_char_count_window_g

0xdd2c,	// (0x0007c777) popup_char_count_window_t1

0xf09d,	// (0x0007dae8) main_vded2_pane

0xd2ff,	// (0x0007bd4a) aid_size_cell_imed_line

0xd309,	// (0x0007bd54) grid_imed_line_width_pane

0xa5c8,	// (0x00079013) vid4_indicators_pane_g4

0xdd3a,	// (0x0007c785) cell_imed_line_width_pane_ParamLimits

0xdd3a,	// (0x0007c785) cell_imed_line_width_pane

0xdd50,	// (0x0007c79b) cell_imed_line_width_pane_g1

0xcbea,	// (0x0007b635) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0007e50c) cell_imed_line_width_pane_g

0x6b2f,	// (0x0007557a) main_vded2_pane_g1_ParamLimits

0x6b2f,	// (0x0007557a) main_vded2_pane_g1

0x6b4a,	// (0x00075595) main_vded2_pane_g2_ParamLimits

0x6b4a,	// (0x00075595) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0007e511) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0007e511) main_vded2_pane_g

0x6b5c,	// (0x000755a7) vded2_slider_pane_ParamLimits

0x6b5c,	// (0x000755a7) vded2_slider_pane

0x6b6c,	// (0x000755b7) aid_size_touch_vded2_end

0x6b76,	// (0x000755c1) aid_size_touch_vded2_playhead

0xdd59,	// (0x0007c7a4) aid_size_touch_vded2_start

0xdd61,	// (0x0007c7ac) vded2_slider_bg_pane

0xdd6a,	// (0x0007c7b5) vded2_slider_pane_g1

0xdd73,	// (0x0007c7be) vded2_slider_pane_g2

0x6b80,	// (0x000755cb) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0007e516) vded2_slider_pane_g

0xd3df,	// (0x0007be2a) vded2_slider_bg_pane_g1

0xd3e8,	// (0x0007be33) vded2_slider_bg_pane_g2

0xd3f1,	// (0x0007be3c) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x0007e51d) vded2_slider_bg_pane_g

0x2950,	// (0x0007139b) aid_postcard_touch_down_pane_ParamLimits

0x2950,	// (0x0007139b) aid_postcard_touch_down_pane

0x2968,	// (0x000713b3) aid_postcard_touch_up_pane_ParamLimits

0x2968,	// (0x000713b3) aid_postcard_touch_up_pane

0xf09d,	// (0x0007dae8) main_blid2_pane

0xa0f7,	// (0x00078b42) popup_blid2_search_window

0x968a,	// (0x000780d5) blid2_gps_pane

0x968a,	// (0x000780d5) blid2_navig_pane

0x968a,	// (0x000780d5) blid2_search_pane

0x968a,	// (0x000780d5) blid2_tripm_pane

0x6b8b,	// (0x000755d6) blid2_search_pane_g1_ParamLimits

0x6b8b,	// (0x000755d6) blid2_search_pane_g1

0x6b9e,	// (0x000755e9) blid2_search_pane_t1_ParamLimits

0x6b9e,	// (0x000755e9) blid2_search_pane_t1

0x6bb0,	// (0x000755fb) aid_size_cell_blid2_gps_ParamLimits

0x6bb0,	// (0x000755fb) aid_size_cell_blid2_gps

0x6bc8,	// (0x00075613) blid2_gps_pane_g1_ParamLimits

0x6bc8,	// (0x00075613) blid2_gps_pane_g1

0x6bdc,	// (0x00075627) grid_blid2_satellite_pane_ParamLimits

0x6bdc,	// (0x00075627) grid_blid2_satellite_pane

0x6bf4,	// (0x0007563f) blid2_navig_pane_g1_ParamLimits

0x6bf4,	// (0x0007563f) blid2_navig_pane_g1

0x6c00,	// (0x0007564b) blid2_navig_pane_t1_ParamLimits

0x6c00,	// (0x0007564b) blid2_navig_pane_t1

0x6c1b,	// (0x00075666) blid2_navig_pane_t2_ParamLimits

0x6c1b,	// (0x00075666) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x0007e524) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x0007e524) blid2_navig_pane_t

0x6c36,	// (0x00075681) blid2_navig_ring_pane_ParamLimits

0x6c36,	// (0x00075681) blid2_navig_ring_pane

0x6c51,	// (0x0007569c) blid2_speed_pane_ParamLimits

0x6c51,	// (0x0007569c) blid2_speed_pane

0x6c5d,	// (0x000756a8) blid2_tripm_pane_g1_ParamLimits

0x6c5d,	// (0x000756a8) blid2_tripm_pane_g1

0x6c78,	// (0x000756c3) blid2_tripm_pane_g2_ParamLimits

0x6c78,	// (0x000756c3) blid2_tripm_pane_g2

0x6c8c,	// (0x000756d7) blid2_tripm_pane_g3_ParamLimits

0x6c8c,	// (0x000756d7) blid2_tripm_pane_g3

0x6ca0,	// (0x000756eb) blid2_tripm_pane_g4_ParamLimits

0x6ca0,	// (0x000756eb) blid2_tripm_pane_g4

0x6cb4,	// (0x000756ff) blid2_tripm_pane_g5_ParamLimits

0x6cb4,	// (0x000756ff) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x0007e529) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x0007e529) blid2_tripm_pane_g

0x6cda,	// (0x00075725) blid2_tripm_pane_t1_ParamLimits

0x6cda,	// (0x00075725) blid2_tripm_pane_t1

0x6cf3,	// (0x0007573e) blid2_tripm_pane_t2_ParamLimits

0x6cf3,	// (0x0007573e) blid2_tripm_pane_t2

0x6d0c,	// (0x00075757) blid2_tripm_pane_t3_ParamLimits

0x6d0c,	// (0x00075757) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x0007e536) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x0007e536) blid2_tripm_pane_t

0x6d53,	// (0x0007579e) cell_blid2_satellite_pane_ParamLimits

0x6d53,	// (0x0007579e) cell_blid2_satellite_pane

0x6d6f,	// (0x000757ba) cell_blid2_satellite_pane_g1

0xdd7b,	// (0x0007c7c6) cell_blid2_satellite_pane_t1

0xce23,	// (0x0007b86e) blid2_speed_pane_g1

0xdd89,	// (0x0007c7d4) blid2_speed_pane_t1

0xdd97,	// (0x0007c7e2) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x0007e53f) blid2_speed_pane_t

0xce23,	// (0x0007b86e) blid2_navig_ring_pane_g1

0x6d78,	// (0x000757c3) blid2_navig_ring_pane_g2

0x6d80,	// (0x000757cb) blid2_navig_ring_pane_g3

0x6d88,	// (0x000757d3) blid2_navig_ring_pane_g4

0x6d90,	// (0x000757db) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x0007e544) blid2_navig_ring_pane_g

0x968a,	// (0x000780d5) bg_popup_window_pane_cp011

0xdda5,	// (0x0007c7f0) popup_blid2_search_window_g1

0xddad,	// (0x0007c7f8) popup_blid2_search_window_t1

0xddbb,	// (0x0007c806) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x0007e54f) popup_blid2_search_window_t

0xacbd,	// (0x00079708) main_browser_pane_g1

0x9e2c,	// (0x00078877) main_browser_pane_ParamLimits

0x9694,	// (0x000780df) bg_button_pane_cp011_ParamLimits

0x5c20,	// (0x0007466b) cell_vitu2_function_pane_g1_ParamLimits

0xc9e3,	// (0x0007b42e) bg_popup_sub_pane_cp22_ParamLimits

0x65fa,	// (0x00075045) input_focus_pane_cp08_ParamLimits

0x6611,	// (0x0007505c) popup_vitu2_query_button_pane_ParamLimits

0x6611,	// (0x0007505c) popup_vitu2_query_button_pane

0x6622,	// (0x0007506d) popup_vitu2_query_input_button_pane

0xda60,	// (0x0007c4ab) popup_vitu2_query_window_g1_ParamLimits

0x662c,	// (0x00075077) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0007e450) popup_vitu2_query_window_g_ParamLimits

0x968a,	// (0x000780d5) bg_button_pane_cp026

0x6d98,	// (0x000757e3) popup_vitu2_query_input_button_pane_g1

0x968a,	// (0x000780d5) bg_button_pane_cp025

0xddc9,	// (0x0007c814) popup_vitu2_query_button_pane_t1

0x405e,	// (0x00072aa9) main_mp3_pane_t6

0x406c,	// (0x00072ab7) popup_slider_window_cp01

0xa52c,	// (0x00078f77) cam4_battery_pane

0xa581,	// (0x00078fcc) cam4_battery_pane_cp02

0xa730,	// (0x0007917b) cam4_battery_pane_cp01

0xa730,	// (0x0007917b) cam4_battery_pane_cp03

0xd752,	// (0x0007c19d) cam4_battery_pane_g1

0xce23,	// (0x0007b86e) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x0007e554) cam4_battery_pane_g

0xcce9,	// (0x0007b734) popup_blid_sat_info2_window_t11

0xb3f7,	// (0x00079e42) aid_size_touch_mv_arrow_left_ParamLimits

0xb422,	// (0x00079e6d) aid_size_touch_mv_arrow_right_ParamLimits

0xb480,	// (0x00079ecb) navi_pane_g1_ParamLimits

0xb48c,	// (0x00079ed7) navi_pane_g2_ParamLimits

0xb4ba,	// (0x00079f05) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0007de15) navi_pane_g_ParamLimits

0x22fe,	// (0x00070d49) navi_pane_mv_t1_ParamLimits

0x4db2,	// (0x000737fd) grid_imed_effect_pane_ParamLimits

0x0d92,	// (0x0006f7dd) aid_placing_vt_slider_lsc

0xac08,	// (0x00079653) aid_placing_vt_slider_prt

0xbf7b,	// (0x0007a9c6) bg_tb_trans_pane_cp01_ParamLimits

0xcf6a,	// (0x0007b9b5) popup_image_details_window_g1_ParamLimits

0xcf7d,	// (0x0007b9c8) popup_image_details_window_g2_ParamLimits

0xcf92,	// (0x0007b9dd) popup_image_details_window_g3_ParamLimits

0xcf92,	// (0x0007b9dd) popup_image_details_window_g3

0xf6fd,	// (0x0007e148) popup_image_details_window_g_ParamLimits

0xcfa6,	// (0x0007b9f1) popup_image_details_window_t1_ParamLimits

0xcfb8,	// (0x0007ba03) popup_image_details_window_t2_ParamLimits

0xcfd1,	// (0x0007ba1c) popup_image_details_window_t3_ParamLimits

0xcfe5,	// (0x0007ba30) popup_image_details_window_t4_ParamLimits

0xd000,	// (0x0007ba4b) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0007e14f) popup_image_details_window_t_ParamLimits

0x69ae,	// (0x000753f9) cl_header_name_pane_ParamLimits

0x69ae,	// (0x000753f9) cl_header_name_pane

0x6da0,	// (0x000757eb) cl_header_name_pane_t1_ParamLimits

0x6da0,	// (0x000757eb) cl_header_name_pane_t1

0x6dc1,	// (0x0007580c) cl_header_name_pane_t2_ParamLimits

0x6dc1,	// (0x0007580c) cl_header_name_pane_t2

0x6e03,	// (0x0007584e) cl_header_name_pane_t3_ParamLimits

0x6e03,	// (0x0007584e) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x0007e559) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x0007e559) cl_header_name_pane_t

0xb549,	// (0x00079f94) navi_pane_mv_g2_ParamLimits

0xd7c3,	// (0x0007c20e) field_vitu2_entry_pane_g1_ParamLimits

0xd7cf,	// (0x0007c21a) field_vitu2_entry_pane_g2_ParamLimits

0xd7db,	// (0x0007c226) field_vitu2_entry_pane_g3_ParamLimits

0xd7db,	// (0x0007c226) field_vitu2_entry_pane_g3

0xf904,	// (0x0007e34f) field_vitu2_entry_pane_g_ParamLimits

0xa61a,	// (0x00079065) cell_vitu2_itu_pane_g1_ParamLimits

0x5bb4,	// (0x000745ff) cell_vitu2_itu_pane_g2_ParamLimits

0x5bb4,	// (0x000745ff) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0007e35b) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0007e35b) cell_vitu2_itu_pane_g

0x9694,	// (0x000780df) bg_vkb2_func_pane_cp05_ParamLimits

0x9694,	// (0x000780df) bg_vkb2_func_pane_cp05

0x9694,	// (0x000780df) bg_vkb2_func_pane_cp03

0x9694,	// (0x000780df) bg_vkb2_func_pane_cp04

0x9694,	// (0x000780df) bg_vkb2_func_pane_cp10_ParamLimits

0x9694,	// (0x000780df) bg_vkb2_func_pane_cp10

0x6950,	// (0x0007539b) bg_vkb2_func_pane_cp08

0x6936,	// (0x00075381) bg_vkb2_func_pane_cp06

0x6944,	// (0x0007538f) bg_vkb2_func_pane_cp07

0xdcf9,	// (0x0007c744) bg_vkb2_func_pane_cp11_ParamLimits

0xdcf9,	// (0x0007c744) bg_vkb2_func_pane_cp11

0xdd0e,	// (0x0007c759) bg_vkb2_func_pane_cp12_ParamLimits

0xdd0e,	// (0x0007c759) bg_vkb2_func_pane_cp12

0x968a,	// (0x000780d5) bg_vkb2_func_pane_cp09

0xd7fb,	// (0x0007c246) bg_vkb2_func_pane_g1

0xadce,	// (0x00079819) bg_vkb2_func_pane_g2

0xd803,	// (0x0007c24e) bg_vkb2_func_pane_g3

0xd80b,	// (0x0007c256) bg_vkb2_func_pane_g4

0xda25,	// (0x0007c470) bg_vkb2_func_pane_g5

0xd823,	// (0x0007c26e) bg_vkb2_func_pane_g6

0xd82b,	// (0x0007c276) bg_vkb2_func_pane_g7

0xd81b,	// (0x0007c266) bg_vkb2_func_pane_g8

0xadae,	// (0x000797f9) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x0007e560) bg_vkb2_func_pane_g

0x6cc8,	// (0x00075713) blid2_tripm_pane_g6_ParamLimits

0x6cc8,	// (0x00075713) blid2_tripm_pane_g6

0xd705,	// (0x0007c150) mp4_progress_pane_g1

0x6d3f,	// (0x0007578a) blid2_tripm_values_pane_ParamLimits

0x6d3f,	// (0x0007578a) blid2_tripm_values_pane

0x6e34,	// (0x0007587f) blid2_tripm_values_pane_t1

0x6e42,	// (0x0007588d) blid2_tripm_values_pane_t2

0x6e50,	// (0x0007589b) blid2_tripm_values_pane_t3

0x6e5e,	// (0x000758a9) blid2_tripm_values_pane_t4

0x6e6c,	// (0x000758b7) blid2_tripm_values_pane_t5

0x6e7a,	// (0x000758c5) blid2_tripm_values_pane_t6

0x6e88,	// (0x000758d3) blid2_tripm_values_pane_t7

0x6e96,	// (0x000758e1) blid2_tripm_values_pane_t8

0x6ea4,	// (0x000758ef) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x0007e573) blid2_tripm_values_pane_t

0x0dcf,	// (0x0006f81a) call_video_pane_t1_ParamLimits

0x0de9,	// (0x0006f834) call_video_pane_t2_ParamLimits

0xf253,	// (0x0007dc9e) call_video_pane_t_ParamLimits

0x2855,	// (0x000712a0) msg_header_pane_g1_ParamLimits

0xb735,	// (0x0007a180) msg_header_pane_g2_ParamLimits

0xb735,	// (0x0007a180) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0007deb8) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0007deb8) msg_header_pane_g

0x9e2c,	// (0x00078877) main_clock2_pane_ParamLimits

0x4aaf,	// (0x000734fa) grid_clock2_toolbar_pane_ParamLimits

0x4aaf,	// (0x000734fa) grid_clock2_toolbar_pane

0x4aaf,	// (0x000734fa) listscroll_clock2_pane_ParamLimits

0x4aaf,	// (0x000734fa) listscroll_clock2_pane

0x4b8e,	// (0x000735d9) main_clock2_pane_t3_ParamLimits

0x4b8e,	// (0x000735d9) main_clock2_pane_t3

0x4bb1,	// (0x000735fc) main_clock2_pane_t4_ParamLimits

0x4bb1,	// (0x000735fc) main_clock2_pane_t4

0xddd7,	// (0x0007c822) cell_clock2_toolbar_pane

0xdddf,	// (0x0007c82a) cell_clock2_toolbar_pane_cp01

0xdddf,	// (0x0007c82a) cell_clock2_toolbar_pane_cp02

0xdde7,	// (0x0007c832) cell_clock2_toolbar_pane_cp03

0xddef,	// (0x0007c83a) list_clock2_pane

0xb37c,	// (0x00079dc7) scroll_pane_cp10

0xddf7,	// (0x0007c842) list_single_clock2_pane_ParamLimits

0xddf7,	// (0x0007c842) list_single_clock2_pane

0xab5c,	// (0x000795a7) list_highlight_pane_cp08

0xde04,	// (0x0007c84f) list_single_clock2_pane_t1

0xde12,	// (0x0007c85d) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x0007e586) list_single_clock2_pane_t

0x968a,	// (0x000780d5) bg_button_pane_cp10

0xde20,	// (0x0007c86b) cell_clock2_toolbar_pane_g1

0x28dc,	// (0x00071327) aid_main_viewer_pane_g1_ParamLimits

0x28dc,	// (0x00071327) aid_main_viewer_pane_g1

0x28ea,	// (0x00071335) aid_main_viewer_pane_g2_ParamLimits

0x28ea,	// (0x00071335) aid_main_viewer_pane_g2

0x28f8,	// (0x00071343) aid_main_viewer_pane_g3_ParamLimits

0x28f8,	// (0x00071343) aid_main_viewer_pane_g3

0x2907,	// (0x00071352) aid_main_viewer_pane_g4_ParamLimits

0x2907,	// (0x00071352) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0007dec9) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0007dec9) aid_main_viewer_pane_g

0x3262,	// (0x00071cad) main_calc_pane_ParamLimits

0x3286,	// (0x00071cd1) main_dialer2_pane_ParamLimits

0xf09d,	// (0x0007dae8) main_cam6_pane

0xf09d,	// (0x0007dae8) main_vid6_pane

0x4abb,	// (0x00073506) listscroll_gen_pane_cp06_ParamLimits

0x4abb,	// (0x00073506) listscroll_gen_pane_cp06

0x4bd4,	// (0x0007361f) main_clock2_pane_t5_ParamLimits

0x4bd4,	// (0x0007361f) main_clock2_pane_t5

0x4c32,	// (0x0007367d) aid_call2_pane_cp10_ParamLimits

0x4c44,	// (0x0007368f) aid_call_pane_cp10_ParamLimits

0xb3eb,	// (0x00079e36) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb3eb,	// (0x00079e36) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4c56,	// (0x000736a1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4c56,	// (0x000736a1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb3eb,	// (0x00079e36) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0007e204) popup_clock_analogue_window_cp10_g_ParamLimits

0x4c6c,	// (0x000736b7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5310,	// (0x00073d5b) cell_dialer2_keypad_pane_g2_ParamLimits

0x5310,	// (0x00073d5b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0007e2ee) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0007e2ee) cell_dialer2_keypad_pane_g

0x532c,	// (0x00073d77) cell_dialer2_keypad_pane_t1

0x5f4f,	// (0x0007499a) main_cset_text2_pane_ParamLimits

0x5f4f,	// (0x0007499a) main_cset_text2_pane

0xdc58,	// (0x0007c6a3) area_vitu2_query_pane_g1_ParamLimits

0x68d5,	// (0x00075320) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0007e4a3) area_vitu2_query_pane_g_ParamLimits

0xa70c,	// (0x00079157) area_vitu2_query_pane_t7_ParamLimits

0xa70c,	// (0x00079157) area_vitu2_query_pane_t7

0x6936,	// (0x00075381) bg_button_pane_cp018_ParamLimits

0x6944,	// (0x0007538f) bg_button_pane_cp021_ParamLimits

0x6950,	// (0x0007539b) bg_button_pane_cp022_ParamLimits

0x6950,	// (0x0007539b) bg_vkb2_func_pane_cp08_ParamLimits

0x6936,	// (0x00075381) bg_vkb2_func_pane_cp06_ParamLimits

0x6944,	// (0x0007538f) bg_vkb2_func_pane_cp07_ParamLimits

0x6961,	// (0x000753ac) input_focus_pane_cp09_ParamLimits

0xa79b,	// (0x000791e6) cam6_autofocus_pane_ParamLimits

0xa79b,	// (0x000791e6) cam6_autofocus_pane

0x6eb2,	// (0x000758fd) cam6_image_uncrop_pane_ParamLimits

0x6eb2,	// (0x000758fd) cam6_image_uncrop_pane

0x6ec1,	// (0x0007590c) cam6_indi_pane_ParamLimits

0x6ec1,	// (0x0007590c) cam6_indi_pane

0x6ed7,	// (0x00075922) cam6_mode_pane_ParamLimits

0x6ed7,	// (0x00075922) cam6_mode_pane

0x6ee9,	// (0x00075934) cam6_timer_pane_ParamLimits

0x6ee9,	// (0x00075934) cam6_timer_pane

0x6ef5,	// (0x00075940) cam6_zoom_pane_ParamLimits

0x6ef5,	// (0x00075940) cam6_zoom_pane

0x6f03,	// (0x0007594e) cam6_mode_pane_g1_ParamLimits

0x6f03,	// (0x0007594e) cam6_mode_pane_g1

0x6f13,	// (0x0007595e) cam6_mode_pane_g2_ParamLimits

0x6f13,	// (0x0007595e) cam6_mode_pane_g2

0x6f23,	// (0x0007596e) cam6_mode_pane_g3_ParamLimits

0x6f23,	// (0x0007596e) cam6_mode_pane_g3

0x6f33,	// (0x0007597e) cam6_mode_pane_g4_ParamLimits

0x6f33,	// (0x0007597e) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x0007e58b) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x0007e58b) cam6_mode_pane_g

0xde28,	// (0x0007c873) bg_tb_trans_pane_cp08_ParamLimits

0xde28,	// (0x0007c873) bg_tb_trans_pane_cp08

0xde36,	// (0x0007c881) cam6_battery_pane_ParamLimits

0xde36,	// (0x0007c881) cam6_battery_pane

0xde4c,	// (0x0007c897) cam6_indi_pane_g1_ParamLimits

0xde4c,	// (0x0007c897) cam6_indi_pane_g1

0xde5e,	// (0x0007c8a9) cam6_indi_pane_g2_ParamLimits

0xde5e,	// (0x0007c8a9) cam6_indi_pane_g2

0xde70,	// (0x0007c8bb) cam6_indi_pane_g3_ParamLimits

0xde70,	// (0x0007c8bb) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x0007e594) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x0007e594) cam6_indi_pane_g

0xde82,	// (0x0007c8cd) cam6_indi_pane_t1_ParamLimits

0xde82,	// (0x0007c8cd) cam6_indi_pane_t1

0x5951,	// (0x0007439c) cam6_autofocus_pane_g1

0x5949,	// (0x00074394) cam6_autofocus_pane_g2

0x5961,	// (0x000743ac) cam6_autofocus_pane_g3

0x5959,	// (0x000743a4) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x0007e59b) cam6_autofocus_pane_g

0xdea8,	// (0x0007c8f3) cam6_timer_pane_g1

0xdeb0,	// (0x0007c8fb) cam6_timer_pane_t1

0xdebe,	// (0x0007c909) cam6_zoom_cont_pane

0xdec6,	// (0x0007c911) cam6_zoom_pane_g1

0xdece,	// (0x0007c919) cam6_zoom_pane_g2

0x6f43,	// (0x0007598e) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x0007e5a4) cam6_zoom_pane_g

0xce23,	// (0x0007b86e) cam6_battery_pane_g1

0xce23,	// (0x0007b86e) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0007e10c) cam6_battery_pane_g

0xded6,	// (0x0007c921) cam6_zoom_cont_pane_g1

0xdedf,	// (0x0007c92a) cam6_zoom_cont_pane_g2

0xdee8,	// (0x0007c933) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x0007e5ab) cam6_zoom_cont_pane_g

0x6f60,	// (0x000759ab) cam6_mode_pane_cp_ParamLimits

0x6f60,	// (0x000759ab) cam6_mode_pane_cp

0x6f72,	// (0x000759bd) cam6_zoom_pane_cp_ParamLimits

0x6f72,	// (0x000759bd) cam6_zoom_pane_cp

0x6f80,	// (0x000759cb) vid6_image_uncrop_cif_pane_ParamLimits

0x6f80,	// (0x000759cb) vid6_image_uncrop_cif_pane

0x6f90,	// (0x000759db) vid6_image_uncrop_nhd_pane_ParamLimits

0x6f90,	// (0x000759db) vid6_image_uncrop_nhd_pane

0x6f9f,	// (0x000759ea) vid6_image_uncrop_vga_pane_ParamLimits

0x6f9f,	// (0x000759ea) vid6_image_uncrop_vga_pane

0x6fae,	// (0x000759f9) vid6_image_uncrop_wvga_pane_ParamLimits

0x6fae,	// (0x000759f9) vid6_image_uncrop_wvga_pane

0x6fbd,	// (0x00075a08) vid6_indi_pane_ParamLimits

0x6fbd,	// (0x00075a08) vid6_indi_pane

0xde28,	// (0x0007c873) bg_tb_trans_pane_cp09_ParamLimits

0xde28,	// (0x0007c873) bg_tb_trans_pane_cp09

0xdf00,	// (0x0007c94b) cam6_battery_pane_cp_ParamLimits

0xdf00,	// (0x0007c94b) cam6_battery_pane_cp

0xdf0c,	// (0x0007c957) vid6_indi_pane_g1_ParamLimits

0xdf0c,	// (0x0007c957) vid6_indi_pane_g1

0xdf1e,	// (0x0007c969) vid6_indi_pane_g2_ParamLimits

0xdf1e,	// (0x0007c969) vid6_indi_pane_g2

0xdf30,	// (0x0007c97b) vid6_indi_pane_g3_ParamLimits

0xdf30,	// (0x0007c97b) vid6_indi_pane_g3

0xdf47,	// (0x0007c992) vid6_indi_pane_g4_ParamLimits

0xdf47,	// (0x0007c992) vid6_indi_pane_g4

0xdf5e,	// (0x0007c9a9) vid6_indi_pane_g5_ParamLimits

0xdf5e,	// (0x0007c9a9) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x0007e5b2) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x0007e5b2) vid6_indi_pane_g

0xdf78,	// (0x0007c9c3) vid6_indi_pane_t1_ParamLimits

0xdf78,	// (0x0007c9c3) vid6_indi_pane_t1

0xdf8e,	// (0x0007c9d9) vid6_indi_pane_t2_ParamLimits

0xdf8e,	// (0x0007c9d9) vid6_indi_pane_t2

0xdfb6,	// (0x0007ca01) vid6_indi_pane_t3_ParamLimits

0xdfb6,	// (0x0007ca01) vid6_indi_pane_t3

0xdfde,	// (0x0007ca29) vid6_indi_pane_t4_ParamLimits

0xdfde,	// (0x0007ca29) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x0007e5bd) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x0007e5bd) vid6_indi_pane_t

0xe002,	// (0x0007ca4d) wait_bar_pane_cp08

0x6fd5,	// (0x00075a20) main_cset_text2_pane_t1_ParamLimits

0x6fd5,	// (0x00075a20) main_cset_text2_pane_t1

0x6f4b,	// (0x00075996) listscroll_gen_pane_cp06_t1_ParamLimits

0x6f4b,	// (0x00075996) listscroll_gen_pane_cp06_t1

0xf09d,	// (0x0007dae8) main_cam6_set_pane

0xa51e,	// (0x00078f69) bg_tb_trans_pane_cp06_ParamLimits

0xa534,	// (0x00078f7f) cam4_indicators_pane_g1_ParamLimits

0xa545,	// (0x00078f90) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0007e32b) cam4_indicators_pane_g_ParamLimits

0xa55d,	// (0x00078fa8) cam4_indicators_pane_t1_ParamLimits

0x9694,	// (0x000780df) bg_tb_trans_pane_cp07_ParamLimits

0xa58b,	// (0x00078fd6) vid4_indicators_pane_g1_ParamLimits

0xa5a1,	// (0x00078fec) vid4_indicators_pane_g2_ParamLimits

0xa5b5,	// (0x00079000) vid4_indicators_pane_g3_ParamLimits

0xa5c8,	// (0x00079013) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0007e33d) vid4_indicators_pane_g_ParamLimits

0xa5e6,	// (0x00079031) vid4_indicators_pane_t1_ParamLimits

0xa738,	// (0x00079183) vid4_progress_pane_g1_ParamLimits

0xa748,	// (0x00079193) vid4_progress_pane_g2_ParamLimits

0x6aa2,	// (0x000754ed) vid4_progress_pane_g3_ParamLimits

0xa545,	// (0x00078f90) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0007e4ee) vid4_progress_pane_g_ParamLimits

0x6ab4,	// (0x000754ff) vid4_progress_pane_t1_ParamLimits

0xa758,	// (0x000791a3) vid4_progress_pane_t2_ParamLimits

0xa76d,	// (0x000791b8) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0007e4f9) vid4_progress_pane_t_ParamLimits

0x6acc,	// (0x00075517) wait_bar_pane_cp07_ParamLimits

0x6ff6,	// (0x00075a41) main_cam6_set_pane_g2_ParamLimits

0x6ff6,	// (0x00075a41) main_cam6_set_pane_g2

0x701c,	// (0x00075a67) main_cset6_listscroll_pane_ParamLimits

0x701c,	// (0x00075a67) main_cset6_listscroll_pane

0x703a,	// (0x00075a85) main_cset6_slider_pane_ParamLimits

0x703a,	// (0x00075a85) main_cset6_slider_pane

0x7050,	// (0x00075a9b) main_cset6_text2_pane_ParamLimits

0x7050,	// (0x00075a9b) main_cset6_text2_pane

0xe011,	// (0x0007ca5c) main_cset6_text_pane

0xe019,	// (0x0007ca64) main_cset_list_pane_copy1_ParamLimits

0xe019,	// (0x0007ca64) main_cset_list_pane_copy1

0xe029,	// (0x0007ca74) scroll_pane_cp028_copy1

0x705e,	// (0x00075aa9) cset_list_set_pane_copy1

0x7072,	// (0x00075abd) aid_position_infowindow_above_copy1

0x707a,	// (0x00075ac5) aid_position_infowindow_below_copy1

0x7082,	// (0x00075acd) cset_list_set_pane_g1_copy1

0x708a,	// (0x00075ad5) cset_list_set_pane_g3_copy1_ParamLimits

0x708a,	// (0x00075ad5) cset_list_set_pane_g3_copy1

0x7099,	// (0x00075ae4) cset_list_set_pane_t1_copy1_ParamLimits

0x7099,	// (0x00075ae4) cset_list_set_pane_t1_copy1

0xbf7b,	// (0x0007a9c6) list_highlight_pane_cp021_copy1_ParamLimits

0xbf7b,	// (0x0007a9c6) list_highlight_pane_cp021_copy1

0xe032,	// (0x0007ca7d) cset6_slider_pane_ParamLimits

0xe032,	// (0x0007ca7d) cset6_slider_pane

0xe05e,	// (0x0007caa9) main_cset6_slider_pane_g1_ParamLimits

0xe05e,	// (0x0007caa9) main_cset6_slider_pane_g1

0x70ae,	// (0x00075af9) main_cset6_slider_pane_g2_ParamLimits

0x70ae,	// (0x00075af9) main_cset6_slider_pane_g2

0xe086,	// (0x0007cad1) main_cset6_slider_pane_g3_ParamLimits

0xe086,	// (0x0007cad1) main_cset6_slider_pane_g3

0x70d6,	// (0x00075b21) main_cset6_slider_pane_g4_ParamLimits

0x70d6,	// (0x00075b21) main_cset6_slider_pane_g4

0x70e2,	// (0x00075b2d) main_cset6_slider_pane_g5_ParamLimits

0x70e2,	// (0x00075b2d) main_cset6_slider_pane_g5

0xd92e,	// (0x0007c379) main_cset6_slider_pane_g7_ParamLimits

0xd92e,	// (0x0007c379) main_cset6_slider_pane_g7

0xd93a,	// (0x0007c385) main_cset6_slider_pane_g8_ParamLimits

0xd93a,	// (0x0007c385) main_cset6_slider_pane_g8

0x5ffe,	// (0x00074a49) main_cset6_slider_pane_g9_ParamLimits

0x5ffe,	// (0x00074a49) main_cset6_slider_pane_g9

0x600a,	// (0x00074a55) main_cset6_slider_pane_g10_ParamLimits

0x600a,	// (0x00074a55) main_cset6_slider_pane_g10

0x6016,	// (0x00074a61) main_cset6_slider_pane_g11_ParamLimits

0x6016,	// (0x00074a61) main_cset6_slider_pane_g11

0x6022,	// (0x00074a6d) main_cset6_slider_pane_g12_ParamLimits

0x6022,	// (0x00074a6d) main_cset6_slider_pane_g12

0x602e,	// (0x00074a79) main_cset6_slider_pane_g13_ParamLimits

0x602e,	// (0x00074a79) main_cset6_slider_pane_g13

0x603a,	// (0x00074a85) main_cset6_slider_pane_g14_ParamLimits

0x603a,	// (0x00074a85) main_cset6_slider_pane_g14

0x70f0,	// (0x00075b3b) main_cset6_slider_pane_g15_ParamLimits

0x70f0,	// (0x00075b3b) main_cset6_slider_pane_g15

0x605e,	// (0x00074aa9) main_cset6_slider_pane_g16_ParamLimits

0x605e,	// (0x00074aa9) main_cset6_slider_pane_g16

0x606c,	// (0x00074ab7) main_cset6_slider_pane_g17_ParamLimits

0x606c,	// (0x00074ab7) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x0007e5c6) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x0007e5c6) main_cset6_slider_pane_g

0xe092,	// (0x0007cadd) main_cset6_slider_pane_t1_ParamLimits

0xe092,	// (0x0007cadd) main_cset6_slider_pane_t1

0x7120,	// (0x00075b6b) main_cset6_slider_pane_t2_ParamLimits

0x7120,	// (0x00075b6b) main_cset6_slider_pane_t2

0x714b,	// (0x00075b96) main_cset6_slider_pane_t3_ParamLimits

0x714b,	// (0x00075b96) main_cset6_slider_pane_t3

0x7176,	// (0x00075bc1) main_cset6_slider_pane_t4_ParamLimits

0x7176,	// (0x00075bc1) main_cset6_slider_pane_t4

0x71a3,	// (0x00075bee) main_cset6_slider_pane_t5_ParamLimits

0x71a3,	// (0x00075bee) main_cset6_slider_pane_t5

0xe0d3,	// (0x0007cb1e) main_cset6_slider_pane_t7_ParamLimits

0xe0d3,	// (0x0007cb1e) main_cset6_slider_pane_t7

0x71d0,	// (0x00075c1b) main_cset6_slider_pane_t8_ParamLimits

0x71d0,	// (0x00075c1b) main_cset6_slider_pane_t8

0x71f4,	// (0x00075c3f) main_cset6_slider_pane_t9_ParamLimits

0x71f4,	// (0x00075c3f) main_cset6_slider_pane_t9

0x7218,	// (0x00075c63) main_cset6_slider_pane_t10_ParamLimits

0x7218,	// (0x00075c63) main_cset6_slider_pane_t10

0x723c,	// (0x00075c87) main_cset6_slider_pane_t11_ParamLimits

0x723c,	// (0x00075c87) main_cset6_slider_pane_t11

0xe109,	// (0x0007cb54) main_cset6_slider_pane_t14_ParamLimits

0xe109,	// (0x0007cb54) main_cset6_slider_pane_t14

0xe142,	// (0x0007cb8d) main_cset6_slider_pane_t15_ParamLimits

0xe142,	// (0x0007cb8d) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x0007e5eb) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x0007e5eb) main_cset6_slider_pane_t

0xe17b,	// (0x0007cbc6) cset_slider_pane_g1_copy1

0xe184,	// (0x0007cbcf) cset_slider_pane_g2_copy1

0xe18d,	// (0x0007cbd8) cset_slider_pane_g3_copy1

0x968a,	// (0x000780d5) bg_popup_sub_pane_cp011_copy1

0xe196,	// (0x0007cbe1) main_cset_text_pane_g1_copy1

0xda74,	// (0x0007c4bf) main_cset_text_pane_t1_copy1

0xda82,	// (0x0007c4cd) main_cset_text_pane_t2_copy1

0xda90,	// (0x0007c4db) main_cset_text_pane_t3_copy1

0xda9e,	// (0x0007c4e9) main_cset_text_pane_t4_copy1

0xdaac,	// (0x0007c4f7) main_cset_text_pane_t5_copy1

0xe19e,	// (0x0007cbe9) main_cset_text_pane_t6_copy1

0xe1ac,	// (0x0007cbf7) main_cset_text_pane_t7_copy1

0x6fd5,	// (0x00075a20) main_cset_text2_pane_t1_copy1

0x9694,	// (0x000780df) main_ncimui_pane

0x3514,	// (0x00071f5f) popup_query_ncimui_window_ParamLimits

0x3514,	// (0x00071f5f) popup_query_ncimui_window

0xa201,	// (0x00078c4c) field_cale_ev2_pane_g4_ParamLimits

0xa201,	// (0x00078c4c) field_cale_ev2_pane_g4

0x51db,	// (0x00073c26) cell_video_dialer_keypad_pane_g2_ParamLimits

0x51db,	// (0x00073c26) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0007e2c5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0007e2c5) cell_video_dialer_keypad_pane_g

0x51f3,	// (0x00073c3e) cell_video_dialer_keypad_pane_t1

0x968a,	// (0x000780d5) bg_popup_window_pane_cp012

0xb268,	// (0x00079cb3) heading_pane_cp06

0xe1d8,	// (0x0007cc23) ncim_query_content_pane

0x968a,	// (0x000780d5) bg_popup_heading_pane_cp01

0xe1e0,	// (0x0007cc2b) ncim_heading_pane_t1

0xe1ee,	// (0x0007cc39) ncim_indicator_popup_pane

0xe200,	// (0x0007cc4b) ncim_query_button_pane

0xe216,	// (0x0007cc61) ncim_query_content_pane_t1

0xe228,	// (0x0007cc73) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x0007e62f) ncim_query_content_pane_t

0xe262,	// (0x0007ccad) ncim_query_list_pane

0xe274,	// (0x0007ccbf) ncim_query_popup_pane

0xe1ee,	// (0x0007cc39) ncim_indicator_popup_pane_ParamLimits

0x7461,	// (0x00075eac) ncim_query_content_pane_g1_ParamLimits

0x7461,	// (0x00075eac) ncim_query_content_pane_g1

0xe216,	// (0x0007cc61) ncim_query_content_pane_t1_ParamLimits

0xe228,	// (0x0007cc73) ncim_query_content_pane_t2_ParamLimits

0x746d,	// (0x00075eb8) ncim_query_content_pane_t3_ParamLimits

0x746d,	// (0x00075eb8) ncim_query_content_pane_t3

0x7495,	// (0x00075ee0) ncim_query_content_pane_t4_ParamLimits

0x7495,	// (0x00075ee0) ncim_query_content_pane_t4

0x74bd,	// (0x00075f08) ncim_query_content_pane_t5_ParamLimits

0x74bd,	// (0x00075f08) ncim_query_content_pane_t5

0xe23a,	// (0x0007cc85) ncim_query_content_pane_t6_ParamLimits

0xe23a,	// (0x0007cc85) ncim_query_content_pane_t6

0xfbe4,	// (0x0007e62f) ncim_query_content_pane_t_ParamLimits

0xe262,	// (0x0007ccad) ncim_query_list_pane_ParamLimits

0xe274,	// (0x0007ccbf) ncim_query_popup_pane_ParamLimits

0xe288,	// (0x0007ccd3) wait_bar_pane_cp04

0x968a,	// (0x000780d5) input_focus_pane_cp011

0xe290,	// (0x0007ccdb) ncim_query_popup_pane_t1

0xe29e,	// (0x0007cce9) ncim_list_query_list_pane_ParamLimits

0xe29e,	// (0x0007cce9) ncim_list_query_list_pane

0x968a,	// (0x000780d5) bg_button_pane_cp027

0xe2b1,	// (0x0007ccfc) ncim_query_button_pane_g1

0x968a,	// (0x000780d5) list_highlight_pane_cp012

0xe2bb,	// (0x0007cd06) ncim_list_query_list_pane_g1

0xe2c3,	// (0x0007cd0e) ncim_list_query_list_pane_t1

0xa551,	// (0x00078f9c) cam4_indicators_pane_g3_ParamLimits

0xa551,	// (0x00078f9c) cam4_indicators_pane_g3

0xa5d4,	// (0x0007901f) vid4_indicators_pane_g5_ParamLimits

0xa5d4,	// (0x0007901f) vid4_indicators_pane_g5

0xa551,	// (0x00078f9c) vid4_progress_pane_g5_ParamLimits

0xa551,	// (0x00078f9c) vid4_progress_pane_g5

0x734c,	// (0x00075d97) main_ncimui_pane_g1

0x73b5,	// (0x00075e00) ncimui_group_query_pane_ParamLimits

0x73b5,	// (0x00075e00) ncimui_group_query_pane

0x73fd,	// (0x00075e48) ncimui_list_pane_ParamLimits

0x73fd,	// (0x00075e48) ncimui_list_pane

0x7424,	// (0x00075e6f) ncimui_text_pane_ParamLimits

0x7424,	// (0x00075e6f) ncimui_text_pane

0x74e5,	// (0x00075f30) ncimui_text_pane_t1_ParamLimits

0x74e5,	// (0x00075f30) ncimui_text_pane_t1

0xe2d1,	// (0x0007cd1c) ncimui_list_single_graphic_pane_ParamLimits

0xe2d1,	// (0x0007cd1c) ncimui_list_single_graphic_pane

0x7503,	// (0x00075f4e) ncimui_query_pane_ParamLimits

0x7503,	// (0x00075f4e) ncimui_query_pane

0x968a,	// (0x000780d5) list_highlight_pane_cp013

0xe2e1,	// (0x0007cd2c) ncim_list_query_list_pane_t1_copy1

0xe2bb,	// (0x0007cd06) ncim_list_single_graphic_pane_g1

0x7516,	// (0x00075f61) ncim_query_button_pane_cp01

0x7522,	// (0x00075f6d) ncim_query_entry_pane_ParamLimits

0x7522,	// (0x00075f6d) ncim_query_entry_pane

0x7535,	// (0x00075f80) ncimui_query_pane_g1

0x7541,	// (0x00075f8c) ncimui_query_pane_t1_ParamLimits

0x7541,	// (0x00075f8c) ncimui_query_pane_t1

0xbf7b,	// (0x0007a9c6) input_focus_pane_cp012

0xe2ef,	// (0x0007cd3a) ncim_query_entry_pane_t1

0x9e2c,	// (0x00078877) main_im_pane_ParamLimits

0x9694,	// (0x000780df) main_mobtv_pane_ParamLimits

0x9694,	// (0x000780df) main_mobtv_pane

0x7108,	// (0x00075b53) main_cset6_slider_pane_g18_ParamLimits

0x7108,	// (0x00075b53) main_cset6_slider_pane_g18

0x7114,	// (0x00075b5f) main_cset6_slider_pane_g19_ParamLimits

0x7114,	// (0x00075b5f) main_cset6_slider_pane_g19

0x755a,	// (0x00075fa5) bg_main_mobtv_pane_ParamLimits

0x755a,	// (0x00075fa5) bg_main_mobtv_pane

0x7568,	// (0x00075fb3) main_mobtv_info_pane

0x7573,	// (0x00075fbe) main_mobtv_loading_pane_ParamLimits

0x7573,	// (0x00075fbe) main_mobtv_loading_pane

0xe301,	// (0x0007cd4c) main_mobtv_pg_channel_list_pane

0xe30b,	// (0x0007cd56) main_mobtv_pg_hdr_pane

0x7580,	// (0x00075fcb) main_mobtv_programe_curr_pane_ParamLimits

0x7580,	// (0x00075fcb) main_mobtv_programe_curr_pane

0x758d,	// (0x00075fd8) main_mobtv_programe_next_pane_ParamLimits

0x758d,	// (0x00075fd8) main_mobtv_programe_next_pane

0xe314,	// (0x0007cd5f) popup_mobtv_noti_window

0xce23,	// (0x0007b86e) main_tv_pg_hdr_pane_g1

0xe31e,	// (0x0007cd69) main_tv_pg_hdr_pane_g2

0xe326,	// (0x0007cd71) main_tv_pg_hdr_pane_g3

0xe32e,	// (0x0007cd79) main_tv_pg_hdr_pane_g4

0xe336,	// (0x0007cd81) main_tv_pg_hdr_pane_g5

0xe340,	// (0x0007cd8b) main_tv_pg_hdr_pane_g6

0xe34a,	// (0x0007cd95) main_tv_pg_hdr_pane_g7

0xe354,	// (0x0007cd9f) main_tv_pg_hdr_pane_g8

0xe35e,	// (0x0007cda9) main_tv_pg_hdr_pane_g9

0xe368,	// (0x0007cdb3) main_tv_pg_hdr_pane_g10

0xe372,	// (0x0007cdbd) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x0007e63c) main_tv_pg_hdr_pane_g

0xe37c,	// (0x0007cdc7) main_tv_pg_hdr_pane_t1

0xe38a,	// (0x0007cdd5) main_tv_pg_hdr_pane_t2

0xe398,	// (0x0007cde3) main_tv_pg_hdr_pane_t3

0xe3a8,	// (0x0007cdf3) main_tv_pg_hdr_pane_t4

0xe3b8,	// (0x0007ce03) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x0007e653) main_tv_pg_hdr_pane_t

0xe3c8,	// (0x0007ce13) single_mobtv_pg_channel_pane_ParamLimits

0xe3c8,	// (0x0007ce13) single_mobtv_pg_channel_pane

0xe3da,	// (0x0007ce25) single_mobtv_pg_channel_table_pane

0xe3e3,	// (0x0007ce2e) single_mobtv_pg_channel_thumb_pane

0xe3ec,	// (0x0007ce37) single_tv_pg_channel_pane_g1

0xe3f5,	// (0x0007ce40) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x0007e65e) single_tv_pg_channel_pane_g

0xd04a,	// (0x0007ba95) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd04a,	// (0x0007ba95) bg_single_mobtv_pg_channel_thumb_pane

0xe3fe,	// (0x0007ce49) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe3fe,	// (0x0007ce49) single_mobtv_pg_channel_thumb_pane_g1

0xe40c,	// (0x0007ce57) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe40c,	// (0x0007ce57) single_mobtv_pg_channel_thumb_pane_g2

0xe418,	// (0x0007ce63) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe418,	// (0x0007ce63) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x0007e663) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x0007e663) single_mobtv_pg_channel_thumb_pane_g

0xe424,	// (0x0007ce6f) single_mobtv_pg_channel_thumb_pane_t1

0xe432,	// (0x0007ce7d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x0007e66a) single_mobtv_pg_channel_thumb_pane_t

0xce23,	// (0x0007b86e) bg_single_mobtv_pg_channel_table_pane_g1

0xce23,	// (0x0007b86e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0007e10c) bg_single_mobtv_pg_channel_table_pane_g

0xe440,	// (0x0007ce8b) single_mobtv_pg_channel_table_pane_t1

0xe44e,	// (0x0007ce99) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x0007e66f) single_mobtv_pg_channel_table_pane_t

0x75a2,	// (0x00075fed) main_mobtv_info_pane_g1_ParamLimits

0x75a2,	// (0x00075fed) main_mobtv_info_pane_g1

0x75c0,	// (0x0007600b) main_mobtv_info_pane_t1_ParamLimits

0x75c0,	// (0x0007600b) main_mobtv_info_pane_t1

0x7638,	// (0x00076083) main_mobtv_info_pane_t2_ParamLimits

0x7638,	// (0x00076083) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x0007e679) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x0007e679) main_mobtv_info_pane_t

0x76c9,	// (0x00076114) wait_bar_pane_cp05

0x76db,	// (0x00076126) main_mobtv_loading_pane_g1_ParamLimits

0x76db,	// (0x00076126) main_mobtv_loading_pane_g1

0x76ec,	// (0x00076137) main_mobtv_loading_pane_g2_ParamLimits

0x76ec,	// (0x00076137) main_mobtv_loading_pane_g2

0x76f8,	// (0x00076143) main_mobtv_loading_pane_g3_ParamLimits

0x76f8,	// (0x00076143) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x0007e680) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x0007e680) main_mobtv_loading_pane_g

0xe45c,	// (0x0007cea7) main_mobtv_loading_pane_t1_ParamLimits

0xe45c,	// (0x0007cea7) main_mobtv_loading_pane_t1

0xe474,	// (0x0007cebf) main_mobtv_loading_pane_t2_ParamLimits

0xe474,	// (0x0007cebf) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x0007e687) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x0007e687) main_mobtv_loading_pane_t

0x770b,	// (0x00076156) wait_bar_pane_cp06_ParamLimits

0x770b,	// (0x00076156) wait_bar_pane_cp06

0xe498,	// (0x0007cee3) main_mobtv_programe_curr_pane_t1

0xe4a6,	// (0x0007cef1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x0007e68c) main_mobtv_programe_curr_pane_t

0xe4b4,	// (0x0007ceff) main_mobtv_programe_next_pane_t1

0xe4c2,	// (0x0007cf0d) main_mobtv_programe_next_pane_t2

0xe4d0,	// (0x0007cf1b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x0007e691) main_mobtv_programe_next_pane_t

0x968a,	// (0x000780d5) bg_popup_mobtv_noti_window_pane

0xe4de,	// (0x0007cf29) popup_mobtv_noti_window_g1

0xe4e6,	// (0x0007cf31) popup_mobtv_noti_window_t1

0xe4f4,	// (0x0007cf3f) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x0007e698) popup_mobtv_noti_window_t

0xce23,	// (0x0007b86e) bg_popup_mobtv_noti_window_pane_g1

0xfdbf,	// (0x0006e80a) sc_clock_pane

0xf09d,	// (0x0007dae8) main_fs_bigclock_pane

0x6d29,	// (0x00075774) blid2_tripm_pane_t4_ParamLimits

0x6d29,	// (0x00075774) blid2_tripm_pane_t4

0x771a,	// (0x00076165) sc_clock_pane_g1_ParamLimits

0x771a,	// (0x00076165) sc_clock_pane_g1

0x772c,	// (0x00076177) sc_clock_pane_t1_ParamLimits

0x772c,	// (0x00076177) sc_clock_pane_t1

0x7750,	// (0x0007619b) sc_clock_pane_t2_ParamLimits

0x7750,	// (0x0007619b) sc_clock_pane_t2

0x7768,	// (0x000761b3) sc_clock_pane_t3_ParamLimits

0x7768,	// (0x000761b3) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x0007e69d) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x0007e69d) sc_clock_pane_t

0x89bd,	// (0x00077408) main_fs_bigclock_indicator_pane_ParamLimits

0x89bd,	// (0x00077408) main_fs_bigclock_indicator_pane

0x782e,	// (0x00076279) main_fs_bigclock_pane_g1_ParamLimits

0x782e,	// (0x00076279) main_fs_bigclock_pane_g1

0x89c9,	// (0x00077414) main_fs_bigclock_pane_t1_ParamLimits

0x89c9,	// (0x00077414) main_fs_bigclock_pane_t1

0x89db,	// (0x00077426) main_fs_bigclock_pane_t2_ParamLimits

0x89db,	// (0x00077426) main_fs_bigclock_pane_t2

0x89ef,	// (0x0007743a) main_fs_bigclock_pane_t3_ParamLimits

0x89ef,	// (0x0007743a) main_fs_bigclock_pane_t3

0x0002,

0xfe60,	// (0x0007e8ab) main_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x0007e8ab) main_fs_bigclock_pane_t

0xec6b,	// (0x0007d6b6) main_fs_bigclock_indicator_pane_g1

0xe208,	// (0x0007cc53) ncim_query_content_pane_g2_ParamLimits

0xe208,	// (0x0007cc53) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x0007e62a) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x0007e62a) ncim_query_content_pane_g

0x777f,	// (0x000761ca) sc_clock_pane_t4_ParamLimits

0x777f,	// (0x000761ca) sc_clock_pane_t4

0x9694,	// (0x000780df) main_radioblah_pane

0xa4b6,	// (0x00078f01) cell_call4_button_pane_t1_copy1_ParamLimits

0xa4b6,	// (0x00078f01) cell_call4_button_pane_t1_copy1

0x7364,	// (0x00075daf) main_ncimui_pane_t1_ParamLimits

0x7364,	// (0x00075daf) main_ncimui_pane_t1

0x737e,	// (0x00075dc9) main_ncimui_pane_t2_ParamLimits

0x737e,	// (0x00075dc9) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x0007e623) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x0007e623) main_ncimui_pane_t

0xe502,	// (0x0007cf4d) main_radioblah_anim_pane_ParamLimits

0xe502,	// (0x0007cf4d) main_radioblah_anim_pane

0xe513,	// (0x0007cf5e) main_radioblah_info_pane_ParamLimits

0xe513,	// (0x0007cf5e) main_radioblah_info_pane

0xe527,	// (0x0007cf72) main_radioblah_pane_t1_ParamLimits

0xe527,	// (0x0007cf72) main_radioblah_pane_t1

0xe543,	// (0x0007cf8e) main_radioblah_pane_t2_ParamLimits

0xe543,	// (0x0007cf8e) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x0007e6be) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x0007e6be) main_radioblah_pane_t

0x79d7,	// (0x00076422) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79d7,	// (0x00076422) main_radioblah_rocker_ctrl_pane

0xe58b,	// (0x0007cfd6) main_radioblah_info_pane_t1_ParamLimits

0xe58b,	// (0x0007cfd6) main_radioblah_info_pane_t1

0x7a2f,	// (0x0007647a) main_radioblah_info_pane_t2_ParamLimits

0x7a2f,	// (0x0007647a) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x0007e6c7) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x0007e6c7) main_radioblah_info_pane_t

0xce23,	// (0x0007b86e) main_radioblah_rocker_ctrl_pane_g1

0x7adf,	// (0x0007652a) main_radioblah_rocker_ctrl_pane_g2

0x7ae7,	// (0x00076532) main_radioblah_rocker_ctrl_pane_g3

0x7aef,	// (0x0007653a) main_radioblah_rocker_ctrl_pane_g4

0x7af7,	// (0x00076542) main_radioblah_rocker_ctrl_pane_g5

0x7aff,	// (0x0007654a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x0007e6d0) main_radioblah_rocker_ctrl_pane_g

0x6fd5,	// (0x00075a20) main_cset_text2_pane_t1_copy1_ParamLimits

0xa514,	// (0x00078f5f) cam4_image_uncrop_qvga_pane

0xa577,	// (0x00078fc2) vid4_image_uncrop_qcif_pane

0xa79b,	// (0x000791e6) cam6_image_uncrop_qvga_pane_ParamLimits

0xa79b,	// (0x000791e6) cam6_image_uncrop_qvga_pane

0xdef0,	// (0x0007c93b) vid6_image_uncrop_qcif_pane_ParamLimits

0xdef0,	// (0x0007c93b) vid6_image_uncrop_qcif_pane

0x968a,	// (0x000780d5) bg_popup_preview_window_pane_cp03

0xe1ba,	// (0x0007cc05) list_cset_text2_pane

0xe1c2,	// (0x0007cc0d) main_cset6_text2_pane_g1

0xe1ca,	// (0x0007cc15) main_cset6_text2_pane_t1

0xe89f,	// (0x0007d2ea) list_cset_text2_pane_t1_ParamLimits

0xe89f,	// (0x0007d2ea) list_cset_text2_pane_t1

0x9694,	// (0x000780df) main_radioblah_pane_ParamLimits

0x76b5,	// (0x00076100) main_mobtv_info_pane_t3_ParamLimits

0x76b5,	// (0x00076100) main_mobtv_info_pane_t3

0x79c5,	// (0x00076410) main_radioblah_pane_g1

0x79ff,	// (0x0007644a) main_radioblah_info_pane_g1

0x7a84,	// (0x000764cf) main_radioblah_info_pane_t3_ParamLimits

0x7a84,	// (0x000764cf) main_radioblah_info_pane_t3

0x1da5,	// (0x000707f0) highlight_cell_cale_month_pane_ParamLimits

0x1da5,	// (0x000707f0) highlight_cell_cale_month_pane

0xf09d,	// (0x0007dae8) main_phob_fisheye_pane

0xd126,	// (0x0007bb71) scroll_pane_cp0031_ParamLimits

0xd126,	// (0x0007bb71) scroll_pane_cp0031

0xe002,	// (0x0007ca4d) wait_bar_pane_cp08_ParamLimits

0x705e,	// (0x00075aa9) cset_list_set_pane_copy1_ParamLimits

0xe5c5,	// (0x0007d010) highlight_cell_cale_month_pane_g1

0x7b07,	// (0x00076552) highlight_cell_cale_month_pane_t1

0xdcac,	// (0x0007c6f7) list_gen_pane_cp01

0xd919,	// (0x0007c364) scroll_pane_01

0x7b15,	// (0x00076560) list_single_double_fisheye_pane

0x7b1e,	// (0x00076569) list_double_fisheye_pane_g1_ParamLimits

0x7b1e,	// (0x00076569) list_double_fisheye_pane_g1

0x7b2a,	// (0x00076575) list_double_fisheye_pane_g2_ParamLimits

0x7b2a,	// (0x00076575) list_double_fisheye_pane_g2

0x7b3e,	// (0x00076589) list_double_fisheye_pane_g3_ParamLimits

0x7b3e,	// (0x00076589) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x0007e6dd) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x0007e6dd) list_double_fisheye_pane_g

0x7b67,	// (0x000765b2) list_double_fisheye_pane_t1_ParamLimits

0x7b67,	// (0x000765b2) list_double_fisheye_pane_t1

0x7b82,	// (0x000765cd) list_double_fisheye_pane_t2_ParamLimits

0x7b82,	// (0x000765cd) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x0007e6e8) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x0007e6e8) list_double_fisheye_pane_t

0xf09d,	// (0x0007dae8) main_call5_pane

0x77aa,	// (0x000761f5) sc_swipe_pane_ParamLimits

0x77aa,	// (0x000761f5) sc_swipe_pane

0x7bb7,	// (0x00076602) call5_image_pane_ParamLimits

0x7bb7,	// (0x00076602) call5_image_pane

0x7bd4,	// (0x0007661f) call5_swipe_1_pane_ParamLimits

0x7bd4,	// (0x0007661f) call5_swipe_1_pane

0x7be7,	// (0x00076632) call5_swipe_2_pane_ParamLimits

0x7be7,	// (0x00076632) call5_swipe_2_pane

0x7c12,	// (0x0007665d) popup_call5_audio_first_window_ParamLimits

0x7c12,	// (0x0007665d) popup_call5_audio_first_window

0xd04a,	// (0x0007ba95) call5_swipe_1_pane_g1_ParamLimits

0xd04a,	// (0x0007ba95) call5_swipe_1_pane_g1

0xe5cd,	// (0x0007d018) call5_swipe_1_pane_g2_ParamLimits

0xe5cd,	// (0x0007d018) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x0007e6ed) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x0007e6ed) call5_swipe_1_pane_g

0xe5d9,	// (0x0007d024) call5_swipe_1_pane_t1_ParamLimits

0xe5d9,	// (0x0007d024) call5_swipe_1_pane_t1

0xd04a,	// (0x0007ba95) call5_swipe_2_pane_g1_ParamLimits

0xd04a,	// (0x0007ba95) call5_swipe_2_pane_g1

0xe5ee,	// (0x0007d039) call5_swipe_2_pane_g2_ParamLimits

0xe5ee,	// (0x0007d039) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x0007e6f2) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x0007e6f2) call5_swipe_2_pane_g

0xe5fa,	// (0x0007d045) call5_swipe_2_pane_t1_ParamLimits

0xe5fa,	// (0x0007d045) call5_swipe_2_pane_t1

0xe60f,	// (0x0007d05a) sc_swipe_pane_g1_ParamLimits

0xe60f,	// (0x0007d05a) sc_swipe_pane_g1

0xe61c,	// (0x0007d067) sc_swipe_pane_g2_ParamLimits

0xe61c,	// (0x0007d067) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x0007e6f7) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x0007e6f7) sc_swipe_pane_g

0xe628,	// (0x0007d073) sc_swipe_pane_t1_ParamLimits

0xe628,	// (0x0007d073) sc_swipe_pane_t1

0xf09d,	// (0x0007dae8) main_cmail_launcher_pane

0x7c27,	// (0x00076672) aid_size_cell_cmail_l_ParamLimits

0x7c27,	// (0x00076672) aid_size_cell_cmail_l

0x7c35,	// (0x00076680) grid_cmail_l_pane_ParamLimits

0x7c35,	// (0x00076680) grid_cmail_l_pane

0x7c4e,	// (0x00076699) cell_cmail_l_pane_ParamLimits

0x7c4e,	// (0x00076699) cell_cmail_l_pane

0xe63d,	// (0x0007d088) cell_cmail_l_pane_g1_ParamLimits

0xe63d,	// (0x0007d088) cell_cmail_l_pane_g1

0xe649,	// (0x0007d094) cell_cmail_l_pane_t1_ParamLimits

0xe649,	// (0x0007d094) cell_cmail_l_pane_t1

0xe65f,	// (0x0007d0aa) cell_cmail_l_pane_t2_ParamLimits

0xe65f,	// (0x0007d0aa) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x0007e6fc) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x0007e6fc) cell_cmail_l_pane_t

0xbf7b,	// (0x0007a9c6) grid_highlight_pane_cp018_ParamLimits

0xbf7b,	// (0x0007a9c6) grid_highlight_pane_cp018

0xfc4d,	// (0x0006e698) main2_pane_ParamLimits

0xfc4d,	// (0x0006e698) main2_pane

0x9ef2,	// (0x0007893d) popup_sp_fs_action_menu_bg_pane_g1

0x9efa,	// (0x00078945) popup_sp_fs_action_menu_bg_pane_g2

0x9f02,	// (0x0007894d) popup_sp_fs_action_menu_bg_pane_g3

0x9f0a,	// (0x00078955) popup_sp_fs_action_menu_bg_pane_g4

0x9f12,	// (0x0007895d) popup_sp_fs_action_menu_bg_pane_g5

0x9f1a,	// (0x00078965) popup_sp_fs_action_menu_bg_pane_g6

0x9f22,	// (0x0007896d) popup_sp_fs_action_menu_bg_pane_g7

0x9f2a,	// (0x00078975) popup_sp_fs_action_menu_bg_pane_g8

0x9f32,	// (0x0007897d) popup_sp_fs_action_menu_bg_pane_g9

0x9f3a,	// (0x00078985) popup_sp_fs_action_menu_bg_pane_g10

0x9f3a,	// (0x00078985) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0007dbba) popup_sp_fs_action_menu_bg_pane_g

0x0c0e,	// (0x0006f659) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x2_t3_g3_g1

0x0c1a,	// (0x0006f665) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0c1a,	// (0x0006f665) list_medium_line_x2_t3_g3_g2

0x0c26,	// (0x0006f671) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0c26,	// (0x0006f671) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0007dc68) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0007dc68) list_medium_line_x2_t3_g3_g

0x0c32,	// (0x0006f67d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0c32,	// (0x0006f67d) list_medium_line_x2_t3_g3_t1

0x0c47,	// (0x0006f692) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0c47,	// (0x0006f692) list_medium_line_x2_t3_g3_t2

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0007dc6f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0007dc6f) list_medium_line_x2_t3_g3_t

0x0c0e,	// (0x0006f659) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x2_t3_g2_g1

0x0c26,	// (0x0006f671) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0c26,	// (0x0006f671) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0007dc76) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0007dc76) list_medium_line_x2_t3_g2_g

0x0c70,	// (0x0006f6bb) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0c70,	// (0x0006f6bb) list_medium_line_x2_t3_g2_t1

0x0c86,	// (0x0006f6d1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0c86,	// (0x0006f6d1) list_medium_line_x2_t3_g2_t2

0x0c98,	// (0x0006f6e3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0c98,	// (0x0006f6e3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0007dc7b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0007dc7b) list_medium_line_x2_t3_g2_t

0x0c0e,	// (0x0006f659) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x2_t4_g4_g1

0x0cb6,	// (0x0006f701) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0cb6,	// (0x0006f701) list_medium_line_x2_t4_g4_g2

0x0c1a,	// (0x0006f665) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0c1a,	// (0x0006f665) list_medium_line_x2_t4_g4_g3

0x0cc2,	// (0x0006f70d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0cc2,	// (0x0006f70d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0007dc82) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0007dc82) list_medium_line_x2_t4_g4_g

0x0cce,	// (0x0006f719) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0cce,	// (0x0006f719) list_medium_line_x2_t4_g4_t1

0x0ce8,	// (0x0006f733) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0ce8,	// (0x0006f733) list_medium_line_x2_t4_g4_t2

0x0cfe,	// (0x0006f749) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0cfe,	// (0x0006f749) list_medium_line_x2_t4_g4_t3

0x0d13,	// (0x0006f75e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0d13,	// (0x0006f75e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0007dc8b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0007dc8b) list_medium_line_x2_t4_g4_t

0x0c0e,	// (0x0006f659) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x2_t2_g4_g1

0x0cb6,	// (0x0006f701) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0cb6,	// (0x0006f701) list_medium_line_x2_t2_g4_g2

0x0c1a,	// (0x0006f665) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0c1a,	// (0x0006f665) list_medium_line_x2_t2_g4_g3

0x0c26,	// (0x0006f671) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0c26,	// (0x0006f671) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0007dcf2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0007dcf2) list_medium_line_x2_t2_g4_g

0x1dcb,	// (0x00070816) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1dcb,	// (0x00070816) list_medium_line_x2_t2_g4_t1

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0007dcfb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0007dcfb) list_medium_line_x2_t2_g4_t

0x0c0e,	// (0x0006f659) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x2_t2_g3_g1

0x0c1a,	// (0x0006f665) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0c1a,	// (0x0006f665) list_medium_line_x2_t2_g3_g2

0x0c26,	// (0x0006f671) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0c26,	// (0x0006f671) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0007dc68) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0007dc68) list_medium_line_x2_t2_g3_g

0x1de0,	// (0x0007082b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1de0,	// (0x0007082b) list_medium_line_x2_t2_g3_t1

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0007dd00) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0007dd00) list_medium_line_x2_t2_g3_t

0x1f3f,	// (0x0007098a) main_sp_fs_list_pane_ParamLimits

0x1f3f,	// (0x0007098a) main_sp_fs_list_pane

0xbf89,	// (0x0007a9d4) sp_fs_scroll_pane_ParamLimits

0xbf89,	// (0x0007a9d4) sp_fs_scroll_pane

0x1f4b,	// (0x00070996) list_medium_line_x2_t3_t1

0x1f5b,	// (0x000709a6) list_medium_line_x2_t3_t2

0x1f69,	// (0x000709b4) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0007dd4b) list_medium_line_x2_t3_t

0x1f77,	// (0x000709c2) list_medium_line_x3_t4_t1

0x1f87,	// (0x000709d2) list_medium_line_x3_t4_t2

0x1f95,	// (0x000709e0) list_medium_line_x3_t4_t3

0x1f69,	// (0x000709b4) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0007dd52) list_medium_line_x3_t4_t

0x1fa3,	// (0x000709ee) list_medium_line_x4_t5_t1

0x1fb3,	// (0x000709fe) list_medium_line_x4_t5_t2

0x1f95,	// (0x000709e0) list_medium_line_x4_t5_t3

0x1fc1,	// (0x00070a0c) list_medium_line_x4_t5_t4

0x1f69,	// (0x000709b4) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0007dd5b) list_medium_line_x4_t5_t

0x0c0e,	// (0x0006f659) list_medium_line_t4_g4_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_t4_g4_g1

0x0cc2,	// (0x0006f70d) list_medium_line_t4_g4_g2_ParamLimits

0x0cc2,	// (0x0006f70d) list_medium_line_t4_g4_g2

0x1fcf,	// (0x00070a1a) list_medium_line_t4_g4_g3_ParamLimits

0x1fcf,	// (0x00070a1a) list_medium_line_t4_g4_g3

0x0c26,	// (0x0006f671) list_medium_line_t4_g4_g4_ParamLimits

0x0c26,	// (0x0006f671) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0007dd66) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0007dd66) list_medium_line_t4_g4_g

0x1fdb,	// (0x00070a26) list_medium_line_t4_g4_t1_ParamLimits

0x1fdb,	// (0x00070a26) list_medium_line_t4_g4_t1

0x1ff0,	// (0x00070a3b) list_medium_line_t4_g4_t2_ParamLimits

0x1ff0,	// (0x00070a3b) list_medium_line_t4_g4_t2

0x2006,	// (0x00070a51) list_medium_line_t4_g4_t3_ParamLimits

0x2006,	// (0x00070a51) list_medium_line_t4_g4_t3

0x0c5b,	// (0x0006f6a6) list_medium_line_t4_g4_t4_ParamLimits

0x0c5b,	// (0x0006f6a6) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0007dd6f) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0007dd6f) list_medium_line_t4_g4_t

0x20e2,	// (0x00070b2d) chi_dic_find_pane_g1

0x329a,	// (0x00071ce5) main_tport_pane

0x6361,	// (0x00074dac) list_medium_line_plain_t1

0x6413,	// (0x00074e5e) list_medium_line_t2_g2_g1_ParamLimits

0x6413,	// (0x00074e5e) list_medium_line_t2_g2_g1

0x641f,	// (0x00074e6a) list_medium_line_t2_g2_g2_ParamLimits

0x641f,	// (0x00074e6a) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0007e434) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0007e434) list_medium_line_t2_g2_g

0x642b,	// (0x00074e76) list_medium_line_t2_g2_t1_ParamLimits

0x642b,	// (0x00074e76) list_medium_line_t2_g2_t1

0x6445,	// (0x00074e90) list_medium_line_t2_g2_t2_ParamLimits

0x6445,	// (0x00074e90) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0007e439) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0007e439) list_medium_line_t2_g2_t

0xa782,	// (0x000791cd) aid_sp_fs_list_icon_a_sm

0xa78a,	// (0x000791d5) aid_sp_fs_list_icon_d

0xa792,	// (0x000791dd) aid_sp_fs_text_primary

0xdcb5,	// (0x0007c700) aid_sp_fs_text_secondary

0x6adf,	// (0x0007552a) list_medium_line

0x6adf,	// (0x0007552a) list_medium_line_g2

0x6adf,	// (0x0007552a) list_medium_line_g3

0x6adf,	// (0x0007552a) list_medium_line_plain

0x6adf,	// (0x0007552a) list_medium_line_plain_t2

0x6adf,	// (0x0007552a) list_medium_line_plain_t3

0x6adf,	// (0x0007552a) list_medium_line_right_icon

0x6adf,	// (0x0007552a) list_medium_line_right_iconx2

0x6adf,	// (0x0007552a) list_medium_line_t2

0x6adf,	// (0x0007552a) list_medium_line_t2_g2

0x6adf,	// (0x0007552a) list_medium_line_t2_g3

0x6adf,	// (0x0007552a) list_medium_line_t2_right_icon

0x6adf,	// (0x0007552a) list_medium_line_t2_right_iconx2

0x6adf,	// (0x0007552a) list_medium_line_t3

0x6adf,	// (0x0007552a) list_medium_line_t3_g2

0x6adf,	// (0x0007552a) list_medium_line_t3_g3

0x6adf,	// (0x0007552a) list_medium_line_t3_right_iconx2

0x6ae8,	// (0x00075533) list_medium_line_t4_g4

0x6adf,	// (0x0007552a) list_medium_line_x2

0x6adf,	// (0x0007552a) list_medium_line_x2_t2_g2

0x6adf,	// (0x0007552a) list_medium_line_x2_t2_g3

0x6adf,	// (0x0007552a) list_medium_line_x2_t2_g4

0x6adf,	// (0x0007552a) list_medium_line_x2_t3

0x6adf,	// (0x0007552a) list_medium_line_x2_t3_g2

0x6adf,	// (0x0007552a) list_medium_line_x2_t3_g3

0x6adf,	// (0x0007552a) list_medium_line_x2_t3_g4

0x6adf,	// (0x0007552a) list_medium_line_x2_t4_g2

0x6adf,	// (0x0007552a) list_medium_line_x2_t4_g4

0x6af1,	// (0x0007553c) list_medium_line_x3

0x6af1,	// (0x0007553c) list_medium_line_x3_t4

0x6af1,	// (0x0007553c) list_medium_line_x3_t4_g4

0x6ae8,	// (0x00075533) list_medium_line_x4_t4

0x6ae8,	// (0x00075533) list_medium_line_x4_t4_g7

0x6ae8,	// (0x00075533) list_medium_line_x4_t5

0x6afa,	// (0x00075545) list_single_fs_dyc_pane_ParamLimits

0x6afa,	// (0x00075545) list_single_fs_dyc_pane

0x0c0e,	// (0x0006f659) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x4_t4_g7_g1

0x7262,	// (0x00075cad) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7262,	// (0x00075cad) list_medium_line_x4_t4_g7_g2

0x726e,	// (0x00075cb9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x726e,	// (0x00075cb9) list_medium_line_x4_t4_g7_g3

0x727d,	// (0x00075cc8) list_medium_line_x4_t4_g7_g4_ParamLimits

0x727d,	// (0x00075cc8) list_medium_line_x4_t4_g7_g4

0x7289,	// (0x00075cd4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7289,	// (0x00075cd4) list_medium_line_x4_t4_g7_g5

0x7298,	// (0x00075ce3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7298,	// (0x00075ce3) list_medium_line_x4_t4_g7_g6

0x72a7,	// (0x00075cf2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x72a7,	// (0x00075cf2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x0007e604) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x0007e604) list_medium_line_x4_t4_g7_g

0x72b3,	// (0x00075cfe) list_medium_line_x4_t4_g7_t1_ParamLimits

0x72b3,	// (0x00075cfe) list_medium_line_x4_t4_g7_t1

0x72c8,	// (0x00075d13) list_medium_line_x4_t4_g7_t2_ParamLimits

0x72c8,	// (0x00075d13) list_medium_line_x4_t4_g7_t2

0x72dd,	// (0x00075d28) list_medium_line_x4_t4_g7_t3_ParamLimits

0x72dd,	// (0x00075d28) list_medium_line_x4_t4_g7_t3

0x72f2,	// (0x00075d3d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x72f2,	// (0x00075d3d) list_medium_line_x4_t4_g7_t4

0x7304,	// (0x00075d4f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7304,	// (0x00075d4f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x0007e613) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x0007e613) list_medium_line_x4_t4_g7_t

0x7316,	// (0x00075d61) list_single_dyc_row_pane_ParamLimits

0x7316,	// (0x00075d61) list_single_dyc_row_pane

0x7ba4,	// (0x000765ef) call5_gesture_pane_ParamLimits

0x7ba4,	// (0x000765ef) call5_gesture_pane

0x7bfa,	// (0x00076645) call5_windows_pane_ParamLimits

0x7bfa,	// (0x00076645) call5_windows_pane

0x7c60,	// (0x000766ab) call5_swipe_1_pane_cp_ParamLimits

0x7c60,	// (0x000766ab) call5_swipe_1_pane_cp

0x7c6c,	// (0x000766b7) call5_swipe_2_pane_cp_ParamLimits

0x7c6c,	// (0x000766b7) call5_swipe_2_pane_cp

0xab5c,	// (0x000795a7) call5_image_pane_cp

0x7c78,	// (0x000766c3) popup_call5_audio_first_window_cp_ParamLimits

0x7c78,	// (0x000766c3) popup_call5_audio_first_window_cp

0xe60f,	// (0x0007d05a) call5_swipe_1_pane_g1_cp_ParamLimits

0xe60f,	// (0x0007d05a) call5_swipe_1_pane_g1_cp

0xe67c,	// (0x0007d0c7) call5_swipe_1_pane_g2_cp

0xe628,	// (0x0007d073) call5_swipe_1_pane_t1_cp_ParamLimits

0xe628,	// (0x0007d073) call5_swipe_1_pane_t1_cp

0xe60f,	// (0x0007d05a) call5_swipe_2_pane_g1_cp_ParamLimits

0xe60f,	// (0x0007d05a) call5_swipe_2_pane_g1_cp

0xe684,	// (0x0007d0cf) call5_swipe_2_pane_g2_cp

0xe68c,	// (0x0007d0d7) call5_swipe_2_pane_t1_cp_ParamLimits

0xe68c,	// (0x0007d0d7) call5_swipe_2_pane_t1_cp

0xbf7b,	// (0x0007a9c6) main_sp_fs_email_pane

0xe6a1,	// (0x0007d0ec) main_sp_fs_listscroll_pane_te

0x7c86,	// (0x000766d1) popup_sp_fs_action_menu_pane_ParamLimits

0x7c86,	// (0x000766d1) popup_sp_fs_action_menu_pane

0xce23,	// (0x0007b86e) bg_sp_fs_ctrlbar_pane_g1

0xe6aa,	// (0x0007d0f5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6b3,	// (0x0007d0fe) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6bc,	// (0x0007d107) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce23,	// (0x0007b86e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x0007e701) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc02,	// (0x0007b64d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc02,	// (0x0007b64d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6c5,	// (0x0007d110) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6c5,	// (0x0007d110) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6d1,	// (0x0007d11c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6d1,	// (0x0007d11c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x0007e70a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x0007e70a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6dd,	// (0x0007d128) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6dd,	// (0x0007d128) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7ccc,	// (0x00076717) list_medium_line_t2_right_icon_g1

0x7cd4,	// (0x0007671f) list_medium_line_t2_right_icon_t1

0x7ce4,	// (0x0007672f) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x0007e70f) list_medium_line_t2_right_icon_t

0xc9e3,	// (0x0007b42e) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc9e3,	// (0x0007b42e) bg_sp_fs_ctrlbar_pane

0x7d43,	// (0x0007678e) main_sp_fs_ctrlbar_button_pane_cp01

0x7d4d,	// (0x00076798) main_sp_fs_ctrlbar_ddmenu_pane

0xe731,	// (0x0007d17c) main_sp_fs_ctrlbar_pane_g1

0xe73d,	// (0x0007d188) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x0007e714) main_sp_fs_ctrlbar_pane_g

0x7d8b,	// (0x000767d6) main_sp_fs_ctrlbar_pane_t1

0x7dca,	// (0x00076815) main_sp_fs_ctrlbar_pane

0x7dee,	// (0x00076839) main_sp_fs_listscroll_pane_te_cp01

0x7e0e,	// (0x00076859) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e0e,	// (0x00076859) popup_sp_fs_action_menu_pane_cp01

0xbf7b,	// (0x0007a9c6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbf7b,	// (0x0007a9c6) bg_sp_fs_highlight_list_pane_cp01

0xa7a9,	// (0x000791f4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa7a9,	// (0x000791f4) sp_fs_action_menu_list_gene_pane_g1

0xe764,	// (0x0007d1af) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe764,	// (0x0007d1af) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x0007e722) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x0007e722) sp_fs_action_menu_list_gene_pane_g

0xa7b8,	// (0x00079203) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa7b8,	// (0x00079203) sp_fs_action_menu_list_gene_pane_t1

0xa7d0,	// (0x0007921b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa7d0,	// (0x0007921b) sp_fs_action_menu_list_gene_pane

0xe771,	// (0x0007d1bc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe771,	// (0x0007d1bc) popup_sp_fs_action_menu_bg_pane

0xa7f3,	// (0x0007923e) sp_fs_action_menu_list_pane_ParamLimits

0xa7f3,	// (0x0007923e) sp_fs_action_menu_list_pane

0x7e3e,	// (0x00076889) sp_fs_scroll_pane_cp01_ParamLimits

0x7e3e,	// (0x00076889) sp_fs_scroll_pane_cp01

0x7e64,	// (0x000768af) list_medium_line_plain_t2_t1

0x7e74,	// (0x000768bf) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x0007e727) list_medium_line_plain_t2_t

0x7e84,	// (0x000768cf) list_medium_line_plain_t3_t1

0x7e94,	// (0x000768df) list_medium_line_plain_t3_t2

0x7ea2,	// (0x000768ed) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x0007e72c) list_medium_line_plain_t3_t

0x0c0e,	// (0x0006f659) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x2_t2_g2_g1

0x0c26,	// (0x0006f671) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0c26,	// (0x0006f671) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0007dc76) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0007dc76) list_medium_line_x2_t2_g2_g

0x1fdb,	// (0x00070a26) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1fdb,	// (0x00070a26) list_medium_line_x2_t2_g2_t1

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x0007e733) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x0007e733) list_medium_line_x2_t2_g2_t

0x0c0e,	// (0x0006f659) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x2_t4_g2_g1

0x7eb0,	// (0x000768fb) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7eb0,	// (0x000768fb) list_medium_line_x2_t4_g2_g2

0x0001,

0xfced,	// (0x0007e738) list_medium_line_x2_t4_g2_g_ParamLimits

0xfced,	// (0x0007e738) list_medium_line_x2_t4_g2_g

0x7ec2,	// (0x0007690d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7ec2,	// (0x0007690d) list_medium_line_x2_t4_g2_t1

0x7edc,	// (0x00076927) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7edc,	// (0x00076927) list_medium_line_x2_t4_g2_t2

0x7ef2,	// (0x0007693d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7ef2,	// (0x0007693d) list_medium_line_x2_t4_g2_t3

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf2,	// (0x0007e73d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf2,	// (0x0007e73d) list_medium_line_x2_t4_g2_t

0x7f07,	// (0x00076952) list_medium_line_t3_right_iconx2_g1

0x7ccc,	// (0x00076717) list_medium_line_t3_right_iconx2_g2

0x7f0f,	// (0x0007695a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcfb,	// (0x0007e746) list_medium_line_t3_right_iconx2_g

0x7f19,	// (0x00076964) list_medium_line_t3_right_iconx2_t1

0x7f29,	// (0x00076974) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd02,	// (0x0007e74d) list_medium_line_t3_right_iconx2_t

0x0c0e,	// (0x0006f659) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x3_t4_g4_g1

0x0c1a,	// (0x0006f665) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0c1a,	// (0x0006f665) list_medium_line_x3_t4_g4_g2

0x0cc2,	// (0x0006f70d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0cc2,	// (0x0006f70d) list_medium_line_x3_t4_g4_g3

0x7f37,	// (0x00076982) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f37,	// (0x00076982) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd07,	// (0x0007e752) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd07,	// (0x0007e752) list_medium_line_x3_t4_g4_g

0x7f43,	// (0x0007698e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f43,	// (0x0007698e) list_medium_line_x3_t4_g4_t1

0x7f5a,	// (0x000769a5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f5a,	// (0x000769a5) list_medium_line_x3_t4_g4_t2

0x7f73,	// (0x000769be) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7f73,	// (0x000769be) list_medium_line_x3_t4_g4_t3

0x7f88,	// (0x000769d3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f88,	// (0x000769d3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd10,	// (0x0007e75b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd10,	// (0x0007e75b) list_medium_line_x3_t4_g4_t

0x7fa5,	// (0x000769f0) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fa5,	// (0x000769f0) list_single_dyc_row_text_pane_t1

0x7fee,	// (0x00076a39) list_single_dyc_row_text_pane_t2_ParamLimits

0x7fee,	// (0x00076a39) list_single_dyc_row_text_pane_t2

0xa817,	// (0x00079262) list_single_dyc_row_text_pane_t3_ParamLimits

0xa817,	// (0x00079262) list_single_dyc_row_text_pane_t3

0x0005,

0xfd19,	// (0x0007e764) list_single_dyc_row_text_pane_t_ParamLimits

0xfd19,	// (0x0007e764) list_single_dyc_row_text_pane_t

0xa83b,	// (0x00079286) list_single_dyc_row_pane_g1_ParamLimits

0xa83b,	// (0x00079286) list_single_dyc_row_pane_g1

0xa847,	// (0x00079292) list_single_dyc_row_pane_g2_ParamLimits

0xa847,	// (0x00079292) list_single_dyc_row_pane_g2

0xa853,	// (0x0007929e) list_single_dyc_row_pane_g3_ParamLimits

0xa853,	// (0x0007929e) list_single_dyc_row_pane_g3

0xa85f,	// (0x000792aa) list_single_dyc_row_pane_g4_ParamLimits

0xa85f,	// (0x000792aa) list_single_dyc_row_pane_g4

0x0003,

0xfd26,	// (0x0007e771) list_single_dyc_row_pane_g_ParamLimits

0xfd26,	// (0x0007e771) list_single_dyc_row_pane_g

0xa86b,	// (0x000792b6) list_single_dyc_row_text_pane_ParamLimits

0xa86b,	// (0x000792b6) list_single_dyc_row_text_pane

0x968a,	// (0x000780d5) bg_sp_fs_scroll_pane

0xe77f,	// (0x0007d1ca) thumb_sp_fs_scroll_pane

0x6413,	// (0x00074e5e) list_medium_line_g1_ParamLimits

0x6413,	// (0x00074e5e) list_medium_line_g1

0x8123,	// (0x00076b6e) list_medium_line_t1_ParamLimits

0x8123,	// (0x00076b6e) list_medium_line_t1

0x0c0e,	// (0x0006f659) list_medium_line_x2_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x2_g1

0x0c1a,	// (0x0006f665) list_medium_line_x2_g2_ParamLimits

0x0c1a,	// (0x0006f665) list_medium_line_x2_g2

0x0001,

0xfd2f,	// (0x0007e77a) list_medium_line_x2_g_ParamLimits

0xfd2f,	// (0x0007e77a) list_medium_line_x2_g

0xa88a,	// (0x000792d5) list_medium_line_x2_t1_ParamLimits

0xa88a,	// (0x000792d5) list_medium_line_x2_t1

0x0c0e,	// (0x0006f659) list_medium_line_x3_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x3_g1

0x0c1a,	// (0x0006f665) list_medium_line_x3_g2_ParamLimits

0x0c1a,	// (0x0006f665) list_medium_line_x3_g2

0x0001,

0xfd2f,	// (0x0007e77a) list_medium_line_x3_g_ParamLimits

0xfd2f,	// (0x0007e77a) list_medium_line_x3_g

0xa88a,	// (0x000792d5) list_medium_line_x3_t1_ParamLimits

0xa88a,	// (0x000792d5) list_medium_line_x3_t1

0xe788,	// (0x0007d1d3) thumb_sp_fs_scroll_pane_g1

0xe791,	// (0x0007d1dc) thumb_sp_fs_scroll_pane_g2

0xe79a,	// (0x0007d1e5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0007e77f) thumb_sp_fs_scroll_pane_g

0xe788,	// (0x0007d1d3) bg_sp_fs_scroll_pane_g1

0xe791,	// (0x0007d1dc) bg_sp_fs_scroll_pane_g2

0xe79a,	// (0x0007d1e5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0007e77f) bg_sp_fs_scroll_pane_g

0x0c0e,	// (0x0006f659) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0c0e,	// (0x0006f659) list_medium_line_x2_t3_g4_g1

0x0cb6,	// (0x0006f701) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0cb6,	// (0x0006f701) list_medium_line_x2_t3_g4_g2

0x0c1a,	// (0x0006f665) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0c1a,	// (0x0006f665) list_medium_line_x2_t3_g4_g3

0x0c26,	// (0x0006f671) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0c26,	// (0x0006f671) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0007dcf2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0007dcf2) list_medium_line_x2_t3_g4_g

0x8138,	// (0x00076b83) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8138,	// (0x00076b83) list_medium_line_x2_t3_g4_t1

0x814e,	// (0x00076b99) list_medium_line_x2_t3_g4_t2_ParamLimits

0x814e,	// (0x00076b99) list_medium_line_x2_t3_g4_t2

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0c5b,	// (0x0006f6a6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd3b,	// (0x0007e786) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd3b,	// (0x0007e786) list_medium_line_x2_t3_g4_t

0x6413,	// (0x00074e5e) list_medium_line_g2_g1_ParamLimits

0x6413,	// (0x00074e5e) list_medium_line_g2_g1

0x641f,	// (0x00074e6a) list_medium_line_g2_g2_ParamLimits

0x641f,	// (0x00074e6a) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0007e434) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0007e434) list_medium_line_g2_g

0x8168,	// (0x00076bb3) list_medium_line_g2_t1_ParamLimits

0x8168,	// (0x00076bb3) list_medium_line_g2_t1

0x6413,	// (0x00074e5e) list_medium_line_t3_g2_g1_ParamLimits

0x6413,	// (0x00074e5e) list_medium_line_t3_g2_g1

0x641f,	// (0x00074e6a) list_medium_line_t3_g2_g2_ParamLimits

0x641f,	// (0x00074e6a) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0007e434) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0007e434) list_medium_line_t3_g2_g

0x817d,	// (0x00076bc8) list_medium_line_t3_g2_t1_ParamLimits

0x817d,	// (0x00076bc8) list_medium_line_t3_g2_t1

0x8197,	// (0x00076be2) list_medium_line_t3_g2_t2_ParamLimits

0x8197,	// (0x00076be2) list_medium_line_t3_g2_t2

0x81ad,	// (0x00076bf8) list_medium_line_t3_g2_t3_ParamLimits

0x81ad,	// (0x00076bf8) list_medium_line_t3_g2_t3

0x0002,

0xfd42,	// (0x0007e78d) list_medium_line_t3_g2_t_ParamLimits

0xfd42,	// (0x0007e78d) list_medium_line_t3_g2_t

0x7ccc,	// (0x00076717) list_medium_line_right_icon_g1

0x81c7,	// (0x00076c12) list_medium_line_right_icon_t1

0x6413,	// (0x00074e5e) list_medium_line_t2_g1_ParamLimits

0x6413,	// (0x00074e5e) list_medium_line_t2_g1

0x81d5,	// (0x00076c20) list_medium_line_t2_t1_ParamLimits

0x81d5,	// (0x00076c20) list_medium_line_t2_t1

0x81ef,	// (0x00076c3a) list_medium_line_t2_t2_ParamLimits

0x81ef,	// (0x00076c3a) list_medium_line_t2_t2

0x0001,

0xfd49,	// (0x0007e794) list_medium_line_t2_t_ParamLimits

0xfd49,	// (0x0007e794) list_medium_line_t2_t

0x6413,	// (0x00074e5e) list_medium_line_t3_g1_ParamLimits

0x6413,	// (0x00074e5e) list_medium_line_t3_g1

0x8208,	// (0x00076c53) list_medium_line_t3_t1_ParamLimits

0x8208,	// (0x00076c53) list_medium_line_t3_t1

0x8222,	// (0x00076c6d) list_medium_line_t3_t2_ParamLimits

0x8222,	// (0x00076c6d) list_medium_line_t3_t2

0x8238,	// (0x00076c83) list_medium_line_t3_t3_ParamLimits

0x8238,	// (0x00076c83) list_medium_line_t3_t3

0x0002,

0xfd4e,	// (0x0007e799) list_medium_line_t3_t_ParamLimits

0xfd4e,	// (0x0007e799) list_medium_line_t3_t

0x6413,	// (0x00074e5e) list_medium_line_g3_g1_ParamLimits

0x6413,	// (0x00074e5e) list_medium_line_g3_g1

0x824d,	// (0x00076c98) list_medium_line_g3_g2_ParamLimits

0x824d,	// (0x00076c98) list_medium_line_g3_g2

0x641f,	// (0x00074e6a) list_medium_line_g3_g3_ParamLimits

0x641f,	// (0x00074e6a) list_medium_line_g3_g3

0x0002,

0xfd55,	// (0x0007e7a0) list_medium_line_g3_g_ParamLimits

0xfd55,	// (0x0007e7a0) list_medium_line_g3_g

0x8259,	// (0x00076ca4) list_medium_line_g3_t1_ParamLimits

0x8259,	// (0x00076ca4) list_medium_line_g3_t1

0x6413,	// (0x00074e5e) list_medium_line_t2_g3_g1_ParamLimits

0x6413,	// (0x00074e5e) list_medium_line_t2_g3_g1

0x824d,	// (0x00076c98) list_medium_line_t2_g3_g2_ParamLimits

0x824d,	// (0x00076c98) list_medium_line_t2_g3_g2

0x641f,	// (0x00074e6a) list_medium_line_t2_g3_g3_ParamLimits

0x641f,	// (0x00074e6a) list_medium_line_t2_g3_g3

0x0002,

0xfd55,	// (0x0007e7a0) list_medium_line_t2_g3_g_ParamLimits

0xfd55,	// (0x0007e7a0) list_medium_line_t2_g3_g

0x826e,	// (0x00076cb9) list_medium_line_t2_g3_t1_ParamLimits

0x826e,	// (0x00076cb9) list_medium_line_t2_g3_t1

0x8288,	// (0x00076cd3) list_medium_line_t2_g3_t2_ParamLimits

0x8288,	// (0x00076cd3) list_medium_line_t2_g3_t2

0x0001,

0xfd5c,	// (0x0007e7a7) list_medium_line_t2_g3_t_ParamLimits

0xfd5c,	// (0x0007e7a7) list_medium_line_t2_g3_t

0x6413,	// (0x00074e5e) list_medium_line_t3_g3_g1_ParamLimits

0x6413,	// (0x00074e5e) list_medium_line_t3_g3_g1

0x824d,	// (0x00076c98) list_medium_line_t3_g3_g2_ParamLimits

0x824d,	// (0x00076c98) list_medium_line_t3_g3_g2

0x641f,	// (0x00074e6a) list_medium_line_t3_g3_g3_ParamLimits

0x641f,	// (0x00074e6a) list_medium_line_t3_g3_g3

0x0002,

0xfd55,	// (0x0007e7a0) list_medium_line_t3_g3_g_ParamLimits

0xfd55,	// (0x0007e7a0) list_medium_line_t3_g3_g

0x82a2,	// (0x00076ced) list_medium_line_t3_g3_t1_ParamLimits

0x82a2,	// (0x00076ced) list_medium_line_t3_g3_t1

0x82bb,	// (0x00076d06) list_medium_line_t3_g3_t2_ParamLimits

0x82bb,	// (0x00076d06) list_medium_line_t3_g3_t2

0x82d1,	// (0x00076d1c) list_medium_line_t3_g3_t3_ParamLimits

0x82d1,	// (0x00076d1c) list_medium_line_t3_g3_t3

0x0002,

0xfd61,	// (0x0007e7ac) list_medium_line_t3_g3_t_ParamLimits

0xfd61,	// (0x0007e7ac) list_medium_line_t3_g3_t

0x7f07,	// (0x00076952) list_medium_line_right_iconx2_g1

0x7ccc,	// (0x00076717) list_medium_line_right_iconx2_g2

0x0001,

0xfd68,	// (0x0007e7b3) list_medium_line_right_iconx2_g

0x82eb,	// (0x00076d36) list_medium_line_right_iconx2_t1

0x7f07,	// (0x00076952) list_medium_line_t2_right_iconx2_g1

0x7ccc,	// (0x00076717) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd68,	// (0x0007e7b3) list_medium_line_t2_right_iconx2_g

0x82f9,	// (0x00076d44) list_medium_line_t2_right_iconx2_t1

0x8309,	// (0x00076d54) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd6d,	// (0x0007e7b8) list_medium_line_t2_right_iconx2_t

0x831b,	// (0x00076d66) list_medium_line_x4_t4_t1

0x8329,	// (0x00076d74) list_medium_line_x4_t4_t2

0x8339,	// (0x00076d84) list_medium_line_x4_t4_t3

0x8349,	// (0x00076d94) list_medium_line_x4_t4_t4

0x0003,

0xfd72,	// (0x0007e7bd) list_medium_line_x4_t4_t

0x839a,	// (0x00076de5) tport_appsw_pane_ParamLimits

0x839a,	// (0x00076de5) tport_appsw_pane

0x83b1,	// (0x00076dfc) tport_contact_pane_ParamLimits

0x83b1,	// (0x00076dfc) tport_contact_pane

0x83c9,	// (0x00076e14) tport_listscroll_pane_ParamLimits

0x83c9,	// (0x00076e14) tport_listscroll_pane

0x83dd,	// (0x00076e28) cell_tport_appsw_pane_ParamLimits

0x83dd,	// (0x00076e28) cell_tport_appsw_pane

0xd7db,	// (0x0007c226) tport_appsw_pane_g1_ParamLimits

0xd7db,	// (0x0007c226) tport_appsw_pane_g1

0xe7a3,	// (0x0007d1ee) tport_contact_pane_g1

0xe7ac,	// (0x0007d1f7) tport_contact_pane_t1

0xe7ba,	// (0x0007d205) tport_contact_pane_t2

0x0001,

0xfd7b,	// (0x0007e7c6) tport_contact_pane_t

0xe7c8,	// (0x0007d213) list_tport_pane

0xe7d1,	// (0x0007d21c) scroll_pane_cp_030

0x8427,	// (0x00076e72) cell_tport_appsw_pane_g1

0x8437,	// (0x00076e82) cell_tport_appsw_pane_t1

0x8445,	// (0x00076e90) grid_highlight_pane_cp019

0x844d,	// (0x00076e98) list_tport_double_graphic_pane_ParamLimits

0x844d,	// (0x00076e98) list_tport_double_graphic_pane

0xbf7b,	// (0x0007a9c6) list_highlight_pane_cp023_ParamLimits

0xbf7b,	// (0x0007a9c6) list_highlight_pane_cp023

0x8464,	// (0x00076eaf) list_tport_double_graphic_pane_g1_ParamLimits

0x8464,	// (0x00076eaf) list_tport_double_graphic_pane_g1

0x8471,	// (0x00076ebc) list_tport_double_graphic_pane_t1_ParamLimits

0x8471,	// (0x00076ebc) list_tport_double_graphic_pane_t1

0x8486,	// (0x00076ed1) list_tport_double_graphic_pane_t2_ParamLimits

0x8486,	// (0x00076ed1) list_tport_double_graphic_pane_t2

0x0001,

0xfd87,	// (0x0007e7d2) list_tport_double_graphic_pane_t_ParamLimits

0xfd87,	// (0x0007e7d2) list_tport_double_graphic_pane_t

0x968a,	// (0x000780d5) main_cale_note_pane

0x5b5c,	// (0x000745a7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5b5c,	// (0x000745a7) cell_vitu2_function_top_wide_pane_cp01

0x76c9,	// (0x00076114) wait_bar_pane_cp05_ParamLimits

0xbf7b,	// (0x0007a9c6) listscroll_cmail_pane

0xe7da,	// (0x0007d225) list_cmail_pane

0x8498,	// (0x00076ee3) list_cmail_body_pane

0x84af,	// (0x00076efa) list_single_cmail_header_caption_pane

0xe7ea,	// (0x0007d235) list_single_cmail_header_detail_pane_ParamLimits

0xe7ea,	// (0x0007d235) list_single_cmail_header_detail_pane

0xe81c,	// (0x0007d267) list_single_cmail_header_caption_pane_t1

0x84cc,	// (0x00076f17) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84cc,	// (0x00076f17) list_single_cmail_header_detail_pane_g1

0xa8a0,	// (0x000792eb) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa8a0,	// (0x000792eb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8c,	// (0x0007e7d7) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8c,	// (0x0007e7d7) list_single_cmail_header_detail_pane_g

0xa8ac,	// (0x000792f7) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa8ac,	// (0x000792f7) list_single_cmail_header_detail_pane_t1

0xa90c,	// (0x00079357) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa90c,	// (0x00079357) list_single_cmail_header_editor_pane_bg

0xe3f5,	// (0x0007ce40) list_cmail_body_pane_g1

0xe840,	// (0x0007d28b) list_cmail_body_pane_t1

0xd7fb,	// (0x0007c246) list_single_cmail_header_editor_pane_bg_g1

0xadce,	// (0x00079819) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd80b,	// (0x0007c256) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd803,	// (0x0007c24e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda25,	// (0x0007c470) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd82b,	// (0x0007c276) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd81b,	// (0x0007c266) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd823,	// (0x0007c26e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xadae,	// (0x000797f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84e4,	// (0x00076f2f) calenote_gesture_pane_ParamLimits

0x84e4,	// (0x00076f2f) calenote_gesture_pane

0x8504,	// (0x00076f4f) calenote_window_pane_ParamLimits

0x8504,	// (0x00076f4f) calenote_window_pane

0xe84e,	// (0x0007d299) popup_note_window_cp01

0x8520,	// (0x00076f6b) calenote_swipe_1_pane_ParamLimits

0x8520,	// (0x00076f6b) calenote_swipe_1_pane

0x7c6c,	// (0x000766b7) calenote_swipe_2_pane_ParamLimits

0x7c6c,	// (0x000766b7) calenote_swipe_2_pane

0xe60f,	// (0x0007d05a) calenote_swipe_1_pane_g1_ParamLimits

0xe60f,	// (0x0007d05a) calenote_swipe_1_pane_g1

0xe61c,	// (0x0007d067) calenote_swipe_1_pane_g2_ParamLimits

0xe61c,	// (0x0007d067) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x0007e6f7) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x0007e6f7) calenote_swipe_1_pane_g

0xe860,	// (0x0007d2ab) calenote_swipe_1_pane_t1_ParamLimits

0xe860,	// (0x0007d2ab) calenote_swipe_1_pane_t1

0xe60f,	// (0x0007d05a) calenote_swipe_2_pane_g1_ParamLimits

0xe60f,	// (0x0007d05a) calenote_swipe_2_pane_g1

0xe87f,	// (0x0007d2ca) calenote_swipe_2_pane_g2_ParamLimits

0xe87f,	// (0x0007d2ca) calenote_swipe_2_pane_g2

0x0001,

0xfd98,	// (0x0007e7e3) calenote_swipe_2_pane_g_ParamLimits

0xfd98,	// (0x0007e7e3) calenote_swipe_2_pane_g

0xe8b9,	// (0x0007d304) calenote_swipe_2_pane_t1_ParamLimits

0xe8b9,	// (0x0007d304) calenote_swipe_2_pane_t1

0x968a,	// (0x000780d5) main_mup_navstr_pane

0x474b,	// (0x00073196) main_mup3_pane_t7_ParamLimits

0x474b,	// (0x00073196) main_mup3_pane_t7

0xa2e4,	// (0x00078d2f) main_mp4_pane_g6_ParamLimits

0xa2e4,	// (0x00078d2f) main_mp4_pane_g6

0xa4a4,	// (0x00078eef) main_image3_pane_t4_ParamLimits

0xa4a4,	// (0x00078eef) main_image3_pane_t4

0x8535,	// (0x00076f80) popup_navstr_preview_pane_ParamLimits

0x8535,	// (0x00076f80) popup_navstr_preview_pane

0x8545,	// (0x00076f90) scroll_navstr_pane_ParamLimits

0x8545,	// (0x00076f90) scroll_navstr_pane

0x968a,	// (0x000780d5) bg_popup_preview_window_pane_cp04

0xe8e0,	// (0x0007d32b) popup_navstr_preview_pane_t1

0x8559,	// (0x00076fa4) scroll_navstr_pane_g1_ParamLimits

0x8559,	// (0x00076fa4) scroll_navstr_pane_g1

0x856d,	// (0x00076fb8) scroll_navstr_pane_t1_ParamLimits

0x856d,	// (0x00076fb8) scroll_navstr_pane_t1

0xe857,	// (0x0007d2a2) bg_button_pane_cp014

0xe857,	// (0x0007d2a2) bg_button_pane_cp030

0x7b4a,	// (0x00076595) list_double_fisheye_pane_g4_ParamLimits

0x7b4a,	// (0x00076595) list_double_fisheye_pane_g4

0x7b56,	// (0x000765a1) list_double_fisheye_pane_g5_ParamLimits

0x7b56,	// (0x000765a1) list_double_fisheye_pane_g5

0xbf89,	// (0x0007a9d4) sp_fs_scroll_pane_cp03

0xe731,	// (0x0007d17c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe73d,	// (0x0007d188) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x0007e714) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7d8b,	// (0x000767d6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7e2,	// (0x0007d22d) sp_fs_scroll_pane_cp02

0x9fa5,	// (0x000789f0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9fa5,	// (0x000789f0) popup_sp_fs_calendar_preview_list_single_pane

0x968a,	// (0x000780d5) main_cam6_pano_pane

0x9694,	// (0x000780df) main_mup3_pane_ParamLimits

0x968a,	// (0x000780d5) main_phacti_pane

0x759a,	// (0x00075fe5) bg_button_pane_cp11

0x75b4,	// (0x00075fff) main_mobtv_info_pane_g2_ParamLimits

0x75b4,	// (0x00075fff) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x0007e674) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x0007e674) main_mobtv_info_pane_g

0x7791,	// (0x000761dc) sc_clock_pane_t5_ParamLimits

0x7791,	// (0x000761dc) sc_clock_pane_t5

0x79c5,	// (0x00076410) main_radioblah_pane_g1_ParamLimits

0xe55b,	// (0x0007cfa6) main_radioblah_pane_t3_ParamLimits

0xe55b,	// (0x0007cfa6) main_radioblah_pane_t3

0xe573,	// (0x0007cfbe) main_radioblah_pane_t4_ParamLimits

0xe573,	// (0x0007cfbe) main_radioblah_pane_t4

0x79ed,	// (0x00076438) main_radioblah_text_pane_ParamLimits

0x79ed,	// (0x00076438) main_radioblah_text_pane

0x79ff,	// (0x0007644a) main_radioblah_info_pane_g1_ParamLimits

0x7a98,	// (0x000764e3) main_radioblah_info_pane_t4_ParamLimits

0x7a98,	// (0x000764e3) main_radioblah_info_pane_t4

0xbf7b,	// (0x0007a9c6) main_sp_fs_calendar_pane

0x8584,	// (0x00076fcf) main_phacti_pane_g1

0x858c,	// (0x00076fd7) phacti_note_pane_ParamLimits

0x858c,	// (0x00076fd7) phacti_note_pane

0xe8f7,	// (0x0007d342) phacti_term_pane_ParamLimits

0xe8f7,	// (0x0007d342) phacti_term_pane

0xe90c,	// (0x0007d357) phacti_note_pane_t1_ParamLimits

0xe90c,	// (0x0007d357) phacti_note_pane_t1

0xa923,	// (0x0007936e) phacti_term_pane_g1

0xa92b,	// (0x00079376) phacti_term_pane_t1_ParamLimits

0xa92b,	// (0x00079376) phacti_term_pane_t1

0xe923,	// (0x0007d36e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe92b,	// (0x0007d376) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda2,	// (0x0007e7ed) popup_sp_fs_calendar_preview_list_single_pane_g

0xe933,	// (0x0007d37e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe933,	// (0x0007d37e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe949,	// (0x0007d394) aid_popup_sp_fs_bg_corner_pane

0xce23,	// (0x0007b86e) popup_sp_fs_calendar_preview_bg_pane_g1

0x968a,	// (0x000780d5) popup_sp_fs_calendar_preview_bg_pane

0xe951,	// (0x0007d39c) popup_sp_fs_calendar_preview_list_pane

0xc9e3,	// (0x0007b42e) bg_main_sp_fs_cale_pane_ParamLimits

0xc9e3,	// (0x0007b42e) bg_main_sp_fs_cale_pane

0xa95e,	// (0x000793a9) listscroll_cale_mrui_pane_ParamLimits

0xa95e,	// (0x000793a9) listscroll_cale_mrui_pane

0xa973,	// (0x000793be) listscroll_sp_fs_schedule_track_pane

0xa97c,	// (0x000793c7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa97c,	// (0x000793c7) main_sp_fs_ctrlbar_pane_cp01

0xe959,	// (0x0007d3a4) main_sp_fs_ribbon_pane

0xa98f,	// (0x000793da) popup_sp_fs_cale_preview_window

0x8601,	// (0x0007704c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8601,	// (0x0007704c) list_single_sp_fs_schedule_track_pane

0xbf7b,	// (0x0007a9c6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbf7b,	// (0x0007a9c6) bg_sp_fs_highlight_list_pane_cp03

0x8615,	// (0x00077060) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8615,	// (0x00077060) list_single_sp_fs_schedule_track_pane_g1

0x8621,	// (0x0007706c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8621,	// (0x0007706c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda7,	// (0x0007e7f2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda7,	// (0x0007e7f2) list_single_sp_fs_schedule_track_pane_g

0x862d,	// (0x00077078) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x862d,	// (0x00077078) list_single_sp_fs_schedule_track_pane_t1

0x864f,	// (0x0007709a) sp_fs_schedule_track_pane_ParamLimits

0x864f,	// (0x0007709a) sp_fs_schedule_track_pane

0xe961,	// (0x0007d3ac) sp_fs_schedule_track_pane_g1

0xe969,	// (0x0007d3b4) sp_fs_schedule_track_pane_g2

0xe971,	// (0x0007d3bc) sp_fs_schedule_track_pane_g3

0xe979,	// (0x0007d3c4) sp_fs_schedule_track_pane_g4

0xe981,	// (0x0007d3cc) sp_fs_schedule_track_pane_g5

0x0004,

0xfdac,	// (0x0007e7f7) sp_fs_schedule_track_pane_g

0xd7fb,	// (0x0007c246) bg_sp_fs_schedule_viewer_highlight_g1

0xadce,	// (0x00079819) bg_sp_fs_schedule_viewer_highlight_g2

0xd803,	// (0x0007c24e) bg_sp_fs_schedule_viewer_highlight_g3

0xd80b,	// (0x0007c256) bg_sp_fs_schedule_viewer_highlight_g4

0xda25,	// (0x0007c470) bg_sp_fs_schedule_viewer_highlight_g5

0xd81b,	// (0x0007c266) bg_sp_fs_schedule_viewer_highlight_g6

0xd823,	// (0x0007c26e) bg_sp_fs_schedule_viewer_highlight_g7

0xd82b,	// (0x0007c276) bg_sp_fs_schedule_viewer_highlight_g8

0xadae,	// (0x000797f9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb7,	// (0x0007e802) bg_sp_fs_schedule_viewer_highlight_g

0x968a,	// (0x000780d5) bg_main_sp_fs_ribbon_pane

0x8664,	// (0x000770af) main_sp_fs_ribbon_pane_g1

0xe989,	// (0x0007d3d4) main_sp_fs_ribbon_pane_t1

0x866d,	// (0x000770b8) main_sp_fs_ribbon_pane_t2

0xe998,	// (0x0007d3e3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdca,	// (0x0007e815) main_sp_fs_ribbon_pane_t

0xe9a7,	// (0x0007d3f2) main_sp_fs_ribbon_scheduler_pane

0xe9af,	// (0x0007d3fa) bg_main_sp_fs_ribbon_pane_g1

0xe9b8,	// (0x0007d403) bg_main_sp_fs_ribbon_pane_g2

0xe9c1,	// (0x0007d40c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd1,	// (0x0007e81c) bg_main_sp_fs_ribbon_pane_g

0xe9c9,	// (0x0007d414) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d2,	// (0x0007d41d) main_sp_fs_ribbon_scheduler_pane_g2

0xe9db,	// (0x0007d426) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd8,	// (0x0007e823) main_sp_fs_ribbon_scheduler_pane_g

0xe9e4,	// (0x0007d42f) list_cale_mrui_pane

0x867c,	// (0x000770c7) sp_fs_scroll_pane_cp07_ParamLimits

0x867c,	// (0x000770c7) sp_fs_scroll_pane_cp07

0x8698,	// (0x000770e3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8698,	// (0x000770e3) bg_sp_fs_schedule_viewer_highlight

0xe9f1,	// (0x0007d43c) list_single_sp_fs_schedule_track_pane_cp01

0xe9f9,	// (0x0007d444) list_sp_fs_schedule_track_pane

0xea01,	// (0x0007d44c) sp_fs_scroll_pane_cp06_ParamLimits

0xea01,	// (0x0007d44c) sp_fs_scroll_pane_cp06

0xce23,	// (0x0007b86e) bgmain_sp_fs_calendar_pane_g1

0x86aa,	// (0x000770f5) list_single_cale_mrui_pane_ParamLimits

0x86aa,	// (0x000770f5) list_single_cale_mrui_pane

0xa9a1,	// (0x000793ec) list_single_cale_mrui_row_pane_ParamLimits

0xa9a1,	// (0x000793ec) list_single_cale_mrui_row_pane

0xa9ae,	// (0x000793f9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa9ae,	// (0x000793f9) list_single_cale_mrui_row_pane_g1

0xa9e6,	// (0x00079431) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa9e6,	// (0x00079431) list_single_cale_mrui_row_pane_t1

0x86ce,	// (0x00077119) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86ce,	// (0x00077119) list_single_cale_mrui_row_pane_t2

0xa9f8,	// (0x00079443) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa9f8,	// (0x00079443) list_single_cale_mrui_row_pane_t3

0xaa27,	// (0x00079472) list_single_cale_mrui_row_pane_t4_ParamLimits

0xaa27,	// (0x00079472) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde6,	// (0x0007e831) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde6,	// (0x0007e831) list_single_cale_mrui_row_pane_t

0x8734,	// (0x0007717f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8734,	// (0x0007717f) list_single_cmail_header_editor_pane_bg_cp01

0x8758,	// (0x000771a3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8758,	// (0x000771a3) list_single_cmail_header_editor_pane_bg_cp02

0x8776,	// (0x000771c1) main_radioblah_text_pane_t1_ParamLimits

0x8776,	// (0x000771c1) main_radioblah_text_pane_t1

0xea20,	// (0x0007d46b) cam6_indi_pane_cp01

0xea28,	// (0x0007d473) cam6_mode_pane_cp01

0xea30,	// (0x0007d47b) cam6_pano_pane

0xea39,	// (0x0007d484) cam6_zoom_pane_cp01

0xea43,	// (0x0007d48e) cam6_pano_image_pane

0xea4c,	// (0x0007d497) cam6_pano_pane_g1

0xe3f5,	// (0x0007ce40) cam6_pano_pane_g2

0xea55,	// (0x0007d4a0) cam6_pano_pane_g3

0xea5e,	// (0x0007d4a9) cam6_pano_pane_g4

0xd3ba,	// (0x0007be05) cam6_pano_pane_g5

0xea67,	// (0x0007d4b2) cam6_pano_pane_g6

0xea6f,	// (0x0007d4ba) cam6_pano_pane_g7

0xea77,	// (0x0007d4c2) cam6_pano_pane_g8

0xea80,	// (0x0007d4cb) cam6_pano_pane_g9

0x0008,

0xfdef,	// (0x0007e83a) cam6_pano_pane_g

0x968a,	// (0x000780d5) main_browser_tag_pane

0xe8d8,	// (0x0007d323) grid_navstr_albumart_pane

0xea8b,	// (0x0007d4d6) cell_navstr_albumart_pane_ParamLimits

0xea8b,	// (0x0007d4d6) cell_navstr_albumart_pane

0xeaa7,	// (0x0007d4f2) cell_navstr_albumart_pane_g1

0xc7f0,	// (0x0007b23b) cell_navstr_albumart_pane_g2

0xc800,	// (0x0007b24b) cell_navstr_albumart_pane_g3

0xc7f8,	// (0x0007b243) cell_navstr_albumart_pane_g4

0x0003,

0xfe02,	// (0x0007e84d) cell_navstr_albumart_pane_g

0x8791,	// (0x000771dc) bt_list_pane_ParamLimits

0x8791,	// (0x000771dc) bt_list_pane

0x87a7,	// (0x000771f2) bt_list_pane_t1

0x87b6,	// (0x00077201) bt_list_pane_t2

0x0001,

0xfe0b,	// (0x0007e856) bt_list_pane_t

0x968a,	// (0x000780d5) main_cale_prevew_pane

0x87c5,	// (0x00077210) popup_cale_preview_window_ParamLimits

0x87c5,	// (0x00077210) popup_cale_preview_window

0xbf7b,	// (0x0007a9c6) bg_popup_preview_window_pane_cp05_ParamLimits

0xbf7b,	// (0x0007a9c6) bg_popup_preview_window_pane_cp05

0xeaaf,	// (0x0007d4fa) list_cale_preview_pane_ParamLimits

0xeaaf,	// (0x0007d4fa) list_cale_preview_pane

0x87e2,	// (0x0007722d) list_double_cale_preview_pane_ParamLimits

0x87e2,	// (0x0007722d) list_double_cale_preview_pane

0x87f6,	// (0x00077241) list_single_cale_preview_pane_ParamLimits

0x87f6,	// (0x00077241) list_single_cale_preview_pane

0x880e,	// (0x00077259) list_single_cale_preview_pane_g1

0x8816,	// (0x00077261) list_single_cale_preview_pane_t1_ParamLimits

0x8816,	// (0x00077261) list_single_cale_preview_pane_t1

0x882b,	// (0x00077276) list_double_cale_preview_pane_g1

0x8833,	// (0x0007727e) list_double_cale_preview_pane_t1_ParamLimits

0x8833,	// (0x0007727e) list_double_cale_preview_pane_t1

0x8848,	// (0x00077293) list_double_cale_preview_pane_t2_ParamLimits

0x8848,	// (0x00077293) list_double_cale_preview_pane_t2

0x0001,

0xfe10,	// (0x0007e85b) list_double_cale_preview_pane_t_ParamLimits

0xfe10,	// (0x0007e85b) list_double_cale_preview_pane_t

0x968a,	// (0x000780d5) main_ezdial_pane

0xbf7b,	// (0x0007a9c6) main_sp_fs_email_pane_ParamLimits

0x7cf6,	// (0x00076741) cmail_ddmenu_btn01_pane_ParamLimits

0x7cf6,	// (0x00076741) cmail_ddmenu_btn01_pane

0x7d09,	// (0x00076754) cmail_ddmenu_btn02_pane_ParamLimits

0x7d09,	// (0x00076754) cmail_ddmenu_btn02_pane

0x7d2c,	// (0x00076777) cmail_ddmenu_btn03_pane_ParamLimits

0x7d2c,	// (0x00076777) cmail_ddmenu_btn03_pane

0x7dca,	// (0x00076815) main_sp_fs_ctrlbar_pane_ParamLimits

0x7dee,	// (0x00076839) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8498,	// (0x00076ee3) list_cmail_body_pane_ParamLimits

0xe82a,	// (0x0007d275) bg_button_pane_cp12

0xe833,	// (0x0007d27e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe833,	// (0x0007d27e) list_single_cmail_header_detail_pane_g3

0xa8e8,	// (0x00079333) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa8e8,	// (0x00079333) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd93,	// (0x0007e7de) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd93,	// (0x0007e7de) list_single_cmail_header_detail_pane_t

0xa940,	// (0x0007938b) phacti_term_pane_t2_ParamLimits

0xa940,	// (0x0007938b) phacti_term_pane_t2

0x0001,

0xfd9d,	// (0x0007e7e8) phacti_term_pane_t_ParamLimits

0xfd9d,	// (0x0007e7e8) phacti_term_pane_t

0xeabb,	// (0x0007d506) aid_size_list_single_double

0x8860,	// (0x000772ab) popup_ezdial_listscroll_window

0x887c,	// (0x000772c7) popup_number_entry_window_cp01

0xab5c,	// (0x000795a7) bg_popup_call_pane_cp09

0xeac7,	// (0x0007d512) ezdial_list_pane

0xeacf,	// (0x0007d51a) scroll_pane_cp23

0xc9e3,	// (0x0007b42e) bg_button_pane_cp028_ParamLimits

0xc9e3,	// (0x0007b42e) bg_button_pane_cp028

0x888a,	// (0x000772d5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x888a,	// (0x000772d5) cmail_ddmenu_btn01_pane_g1

0x8899,	// (0x000772e4) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8899,	// (0x000772e4) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe15,	// (0x0007e860) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe15,	// (0x0007e860) cmail_ddmenu_btn01_pane_g

0xead7,	// (0x0007d522) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead7,	// (0x0007d522) cmail_ddmenu_btn01_pane_t1

0xc9e3,	// (0x0007b42e) bg_button_pane_cp029_ParamLimits

0xc9e3,	// (0x0007b42e) bg_button_pane_cp029

0x88a9,	// (0x000772f4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88a9,	// (0x000772f4) cmail_ddmenu_btn02_pane_g1

0x88c4,	// (0x0007730f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88c4,	// (0x0007730f) cmail_ddmenu_btn02_pane_t1

0xbf7b,	// (0x0007a9c6) bg_button_pane_cp031_ParamLimits

0xbf7b,	// (0x0007a9c6) bg_button_pane_cp031

0x88a9,	// (0x000772f4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88a9,	// (0x000772f4) cmail_ddmenu_btn03_pane_g1

0x88c4,	// (0x0007730f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88c4,	// (0x0007730f) cmail_ddmenu_btn03_pane_t1

0x532c,	// (0x00073d77) cell_dialer2_keypad_pane_t1_ParamLimits

0x5346,	// (0x00073d91) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5346,	// (0x00073d91) cell_dialer2_keypad_pane_t1_copy1

0x73ad,	// (0x00075df8) ncimui_group_button_pane

0xbf7b,	// (0x0007a9c6) main_sp_fs_calendar_pane_ParamLimits

0x84af,	// (0x00076efa) list_single_cmail_header_caption_pane_ParamLimits

0xa955,	// (0x000793a0) aid_recal_txt_sm_pane

0x968a,	// (0x000780d5) mian_recal_day_pane

0xa98f,	// (0x000793da) popup_sp_fs_cale_preview_window_ParamLimits

0xeaec,	// (0x0007d537) list_recal_day_pane

0xaa72,	// (0x000794bd) list_single_recal_day_pane_ParamLimits

0xaa72,	// (0x000794bd) list_single_recal_day_pane

0xeb13,	// (0x0007d55e) list_single_recal_day_pane_g1_ParamLimits

0xeb13,	// (0x0007d55e) list_single_recal_day_pane_g1

0xaa84,	// (0x000794cf) list_single_recal_day_pane_g2_ParamLimits

0xaa84,	// (0x000794cf) list_single_recal_day_pane_g2

0xaa90,	// (0x000794db) list_single_recal_day_pane_g3_ParamLimits

0xaa90,	// (0x000794db) list_single_recal_day_pane_g3

0x88eb,	// (0x00077336) list_single_recal_day_pane_g4_ParamLimits

0x88eb,	// (0x00077336) list_single_recal_day_pane_g4

0xaa9c,	// (0x000794e7) list_single_recal_day_pane_g5_ParamLimits

0xaa9c,	// (0x000794e7) list_single_recal_day_pane_g5

0xaaa8,	// (0x000794f3) list_single_recal_day_pane_g6_ParamLimits

0xaaa8,	// (0x000794f3) list_single_recal_day_pane_g6

0x0004,

0xfe24,	// (0x0007e86f) list_single_recal_day_pane_g_ParamLimits

0xfe24,	// (0x0007e86f) list_single_recal_day_pane_g

0xaabc,	// (0x00079507) list_single_recal_day_pane_t1

0xaace,	// (0x00079519) list_single_recal_day_pane_t2

0x0001,

0xfe2f,	// (0x0007e87a) list_single_recal_day_pane_t

0x8903,	// (0x0007734e) ncimui_query_button_pane_ParamLimits

0x8903,	// (0x0007734e) ncimui_query_button_pane

0x8913,	// (0x0007735e) ncimui_query_button_pane_t1_ParamLimits

0x8913,	// (0x0007735e) ncimui_query_button_pane_t1

0xeb1f,	// (0x0007d56a) ncimui_query_button_pane_t2_ParamLimits

0xeb1f,	// (0x0007d56a) ncimui_query_button_pane_t2

0x0001,

0xfe34,	// (0x0007e87f) ncimui_query_button_pane_t_ParamLimits

0xfe34,	// (0x0007e87f) ncimui_query_button_pane_t

0x8926,	// (0x00077371) query_button_pane_ParamLimits

0x8926,	// (0x00077371) query_button_pane

0x968a,	// (0x000780d5) bg_button_pane_cp0028

0xeb32,	// (0x0007d57d) query_button_pane_t1

0x329a,	// (0x00071ce5) main_tport_pane_ParamLimits

0x8359,	// (0x00076da4) bg_popup_window_pane_cp01_ParamLimits

0x8359,	// (0x00076da4) bg_popup_window_pane_cp01

0x8372,	// (0x00076dbd) heading_pane_cp08_ParamLimits

0x8372,	// (0x00076dbd) heading_pane_cp08

0x8385,	// (0x00076dd0) heading_pane_cp07_ParamLimits

0x8385,	// (0x00076dd0) heading_pane_cp07

0x8427,	// (0x00076e72) cell_tport_appsw_pane_g2

0x0002,

0xfd80,	// (0x0007e7cb) cell_tport_appsw_pane_g

0x27c6,	// (0x00071211) input_candi_list_open_g1

0xaf91,	// (0x000799dc) list_cale_time_pane_g6_ParamLimits

0xaf91,	// (0x000799dc) list_cale_time_pane_g6

0x4076,	// (0x00072ac1) aid_size_touch_calib_1_ParamLimits

0x4076,	// (0x00072ac1) aid_size_touch_calib_1

0x4088,	// (0x00072ad3) aid_size_touch_calib_2_ParamLimits

0x4088,	// (0x00072ad3) aid_size_touch_calib_2

0x40a0,	// (0x00072aeb) aid_size_touch_calib_3_ParamLimits

0x40a0,	// (0x00072aeb) aid_size_touch_calib_3

0x40be,	// (0x00072b09) aid_size_touch_calib_4_ParamLimits

0x40be,	// (0x00072b09) aid_size_touch_calib_4

0x40d6,	// (0x00072b21) main_touch_calib_button_group_pane_ParamLimits

0x40d6,	// (0x00072b21) main_touch_calib_button_group_pane

0x40ee,	// (0x00072b39) main_touch_calib_pane_g1_ParamLimits

0x4100,	// (0x00072b4b) main_touch_calib_pane_g2_ParamLimits

0x4112,	// (0x00072b5d) main_touch_calib_pane_g3_ParamLimits

0x4124,	// (0x00072b6f) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0007e181) main_touch_calib_pane_g_ParamLimits

0x4136,	// (0x00072b81) main_touch_calib_pane_t1_ParamLimits

0x4150,	// (0x00072b9b) main_touch_calib_pane_t2_ParamLimits

0x416a,	// (0x00072bb5) main_touch_calib_pane_t3_ParamLimits

0x417e,	// (0x00072bc9) main_touch_calib_pane_t4_ParamLimits

0x4194,	// (0x00072bdf) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0007e18a) main_touch_calib_pane_t_ParamLimits

0xd14a,	// (0x0007bb95) list_single_fp_cale_pane_g3_ParamLimits

0xd14a,	// (0x0007bb95) list_single_fp_cale_pane_g3

0x9694,	// (0x000780df) bg_button_pane_cp012_ParamLimits

0x9694,	// (0x000780df) bg_vkb2_func_pane_cp03_ParamLimits

0x63c9,	// (0x00074e14) cell_vitu2_function_top_pane_g1_ParamLimits

0x9694,	// (0x000780df) bg_vkb2_func_pane_cp04_ParamLimits

0x7338,	// (0x00075d83) main_ncimui_button_group_pane_ParamLimits

0x7338,	// (0x00075d83) main_ncimui_button_group_pane

0x7398,	// (0x00075de3) main_ncimui_pane_t3_ParamLimits

0x7398,	// (0x00075de3) main_ncimui_pane_t3

0xe8ee,	// (0x0007d339) phacti_button_group_pane

0xeabb,	// (0x0007d506) aid_size_list_single_double_ParamLimits

0x8860,	// (0x000772ab) popup_ezdial_listscroll_window_ParamLimits

0x887c,	// (0x000772c7) popup_number_entry_window_cp01_ParamLimits

0x8939,	// (0x00077384) phacti_button_pane_ParamLimits

0x8939,	// (0x00077384) phacti_button_pane

0x968a,	// (0x000780d5) bg_button_pane_cp14

0xeb40,	// (0x0007d58b) phacti_button_pane_t1

0x894a,	// (0x00077395) main_touch_calib_button_pane_ParamLimits

0x894a,	// (0x00077395) main_touch_calib_button_pane

0x9e2c,	// (0x00078877) bg_button_pane_cp18_ParamLimits

0x9e2c,	// (0x00078877) bg_button_pane_cp18

0xeb4e,	// (0x0007d599) main_touch_calib_button_pane_t1_ParamLimits

0xeb4e,	// (0x0007d599) main_touch_calib_button_pane_t1

0xeb64,	// (0x0007d5af) main_touch_calib_button_pane_t2_ParamLimits

0xeb64,	// (0x0007d5af) main_touch_calib_button_pane_t2

0x0001,

0xfe39,	// (0x0007e884) main_touch_calib_button_pane_t_ParamLimits

0xfe39,	// (0x0007e884) main_touch_calib_button_pane_t

0x968a,	// (0x000780d5) cell_ncimui_button_pane

0x968a,	// (0x000780d5) bg_button_pane_cp032

0xeb82,	// (0x0007d5cd) cell_ncimui_button_pane_t1

0xa482,	// (0x00078ecd) image3_infobar_pane_ParamLimits

0xa482,	// (0x00078ecd) image3_infobar_pane

0x77bd,	// (0x00076208) fs_bigclock_status_pane_ParamLimits

0x77bd,	// (0x00076208) fs_bigclock_status_pane

0x77ca,	// (0x00076215) main_fs_bigclock_clock_pane_ParamLimits

0x77ca,	// (0x00076215) main_fs_bigclock_clock_pane

0x77fc,	// (0x00076247) main_fs_bigclock_indi_pane_ParamLimits

0x77fc,	// (0x00076247) main_fs_bigclock_indi_pane

0x783c,	// (0x00076287) main_fs_bigclock_swipe_pane_ParamLimits

0x783c,	// (0x00076287) main_fs_bigclock_swipe_pane

0x968a,	// (0x000780d5) main_fs_clock_dumped_data

0x7888,	// (0x000762d3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7888,	// (0x000762d3) list_single_fs_bigclock_indicator_pane_g1

0x78a1,	// (0x000762ec) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x78a1,	// (0x000762ec) list_single_fs_bigclock_indicator_pane_g2

0x78bb,	// (0x00076306) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x78bb,	// (0x00076306) list_single_fs_bigclock_indicator_pane_g3

0x78d5,	// (0x00076320) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x78d5,	// (0x00076320) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x0007e6a8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x0007e6a8) list_single_fs_bigclock_indicator_pane_g

0x7904,	// (0x0007634f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7904,	// (0x0007634f) list_single_fs_bigclock_indicator_pane_t1

0x792c,	// (0x00076377) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x792c,	// (0x00076377) list_single_fs_bigclock_indicator_pane_t2

0x7954,	// (0x0007639f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7954,	// (0x0007639f) list_single_fs_bigclock_indicator_pane_t3

0x797c,	// (0x000763c7) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x797c,	// (0x000763c7) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x0007e6b3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x0007e6b3) list_single_fs_bigclock_indicator_pane_t

0xeb90,	// (0x0007d5db) image3_infobar_fav_pane_ParamLimits

0xeb90,	// (0x0007d5db) image3_infobar_fav_pane

0xeba0,	// (0x0007d5eb) image3_infobar_loc_pane_ParamLimits

0xeba0,	// (0x0007d5eb) image3_infobar_loc_pane

0xebb6,	// (0x0007d601) image3_infobar_time_pane_ParamLimits

0xebb6,	// (0x0007d601) image3_infobar_time_pane

0xce23,	// (0x0007b86e) image3_infobar_time_pane_g1

0xebc6,	// (0x0007d611) image3_infobar_time_pane_t1

0xce23,	// (0x0007b86e) image3_infobar_loc_pane_g1

0xebd4,	// (0x0007d61f) image3_infobar_loc_pane_g2

0x0001,

0xfe3e,	// (0x0007e889) image3_infobar_loc_pane_g

0xebdc,	// (0x0007d627) image3_infobar_loc_pane_t1

0xce23,	// (0x0007b86e) image3_infobar_fav_pane_g1

0xebea,	// (0x0007d635) image3_infobar_fav_pane_g2

0x0001,

0xfe43,	// (0x0007e88e) image3_infobar_fav_pane_g

0xebf2,	// (0x0007d63d) fs_bigclock_status_battery_pane

0xebfb,	// (0x0007d646) fs_bigclock_status_signal_pane

0xec04,	// (0x0007d64f) fs_bigclock_status_title_pane

0xec0d,	// (0x0007d658) fs_bigclock_status_signal_pane_g1

0xec16,	// (0x0007d661) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe48,	// (0x0007e893) fs_bigclock_status_signal_pane_g

0xec1e,	// (0x0007d669) fs_bigclock_status_battery_pane_g1

0xec27,	// (0x0007d672) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe4d,	// (0x0007e898) fs_bigclock_status_battery_pane_g

0xec2f,	// (0x0007d67a) fs_bigclock_status_title_pane_t1

0x895f,	// (0x000773aa) main_fs_bigclock_clock_pane_g1

0x895f,	// (0x000773aa) main_fs_bigclock_clock_pane_g2

0x8972,	// (0x000773bd) main_fs_bigclock_clock_pane_g3

0x8972,	// (0x000773bd) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe52,	// (0x0007e89d) main_fs_bigclock_clock_pane_g

0x8989,	// (0x000773d4) main_fs_bigclock_clock_pane_t1

0x899f,	// (0x000773ea) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5b,	// (0x0007e8a6) main_fs_bigclock_clock_pane_t

0xec3d,	// (0x0007d688) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec3d,	// (0x0007d688) list_single_fs_bigclock_indicator_pane

0xec4e,	// (0x0007d699) list_single_fs_bigclock_pane_ParamLimits

0xec4e,	// (0x0007d699) list_single_fs_bigclock_pane

0xec74,	// (0x0007d6bf) main_fs_bigclock_indicator_pane_t1

0xec83,	// (0x0007d6ce) list_single_fs_bigclock_pane_g1

0xec8b,	// (0x0007d6d6) list_single_fs_bigclock_pane_t1

0xce23,	// (0x0007b86e) main_fs_bigclock_swipe_pane_g1

0xecce,	// (0x0007d719) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6c,	// (0x0007e8b7) main_fs_bigclock_swipe_pane_g

0xecd6,	// (0x0007d721) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd6,	// (0x0007d721) main_fs_bigclock_swipe_pane_t1

0x201c,	// (0x00070a67) call_type_pane_ParamLimits

0x968a,	// (0x000780d5) main_btmg_pane

0xa9da,	// (0x00079425) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa9da,	// (0x00079425) list_single_cale_mrui_row_pane_g2

0x0002,

0xfddf,	// (0x0007e82a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfddf,	// (0x0007e82a) list_single_cale_mrui_row_pane_g

0xaa60,	// (0x000794ab) list_recal_vselct_arw_lo_pane

0xeb0b,	// (0x0007d556) list_recal_vselct_arw_up_pane

0xaa68,	// (0x000794b3) list_recal_vselct_pane

0x8a01,	// (0x0007744c) btmg_button_pane

0x8a0b,	// (0x00077456) main_btmg_pane_g1

0x968a,	// (0x000780d5) bg_button_pane_cp044

0xecf3,	// (0x0007d73e) btmg_button_pane_t1

0xc9cf,	// (0x0007b41a) aid_listscroll_gen

0xbf7b,	// (0x0007a9c6) main_cntbar_detail_pane

0xe7da,	// (0x0007d225) list_cmail_folder_pane

0xbf89,	// (0x0007a9d4) sp_fs_scroll_pane_cp03_ParamLimits

0x8a15,	// (0x00077460) list_single_fs_dyc_pane_cp01_ParamLimits

0x8a15,	// (0x00077460) list_single_fs_dyc_pane_cp01

0xed01,	// (0x0007d74c) aid_size_cmail_indent

0xaae0,	// (0x0007952b) list_single_dyc_row_pane_cp01

0x8a64,	// (0x000774af) cntbar_detail_list_pane_ParamLimits

0x8a64,	// (0x000774af) cntbar_detail_list_pane

0x8ab6,	// (0x00077501) main_cntbar_detail_cont_pane_ParamLimits

0x8ab6,	// (0x00077501) main_cntbar_detail_cont_pane

0xbf89,	// (0x0007a9d4) scroll_pane_cp032_ParamLimits

0xbf89,	// (0x0007a9d4) scroll_pane_cp032

0x8aca,	// (0x00077515) cntbar_detail_list_event_pane_ParamLimits

0x8aca,	// (0x00077515) cntbar_detail_list_event_pane

0x8a76,	// (0x000774c1) cntbar_detail_list_shct_pane

0xae1c,	// (0x00079867) aid_list_gen

0xed0a,	// (0x0007d755) aid_scroll

0xed13,	// (0x0007d75e) aid_size_touch_scroll_bar

0x6adf,	// (0x0007552a) aid_list_double

0x8ada,	// (0x00077525) aid_list_single

0x6adf,	// (0x0007552a) aid_list_single_lg

0x8ae3,	// (0x0007752e) aid_list_z_g_a_sm

0x8aeb,	// (0x00077536) aid_list_z_g_d

0x8af3,	// (0x0007753e) aid_txt_z_prm

0x8b01,	// (0x0007754c) aid_txt_z_prm_cp01

0x8b0f,	// (0x0007755a) aid_txt_z_sec

0x8b1d,	// (0x00077568) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b1d,	// (0x00077568) main_cntbar_detail_cont_pane_g1

0x8b31,	// (0x0007757c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b31,	// (0x0007757c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe71,	// (0x0007e8bc) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe71,	// (0x0007e8bc) main_cntbar_detail_cont_pane_g

0xed1c,	// (0x0007d767) main_cntbar_detail_cont_pane_t1

0xed2a,	// (0x0007d775) main_cntbar_detail_cont_pane_t2

0xed38,	// (0x0007d783) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe76,	// (0x0007e8c1) main_cntbar_detail_cont_pane_t

0x8b41,	// (0x0007758c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b41,	// (0x0007758c) cell_cntbar_detail_list_shct_pane

0xed46,	// (0x0007d791) cntbar_detail_list_shct_pane_g1

0xed4f,	// (0x0007d79a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe7d,	// (0x0007e8c8) cntbar_detail_list_shct_pane_g

0x8b53,	// (0x0007759e) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b53,	// (0x0007759e) cntbar_detail_list_event_pane_g1

0x8b5f,	// (0x000775aa) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b5f,	// (0x000775aa) cntbar_detail_list_event_pane_g2

0x0005,

0xfe82,	// (0x0007e8cd) cntbar_detail_list_event_pane_g_ParamLimits

0xfe82,	// (0x0007e8cd) cntbar_detail_list_event_pane_g

0x8bcd,	// (0x00077618) cntbar_detail_list_event_pane_t1_ParamLimits

0x8bcd,	// (0x00077618) cntbar_detail_list_event_pane_t1

0x8be2,	// (0x0007762d) cntbar_detail_list_event_pane_t2_ParamLimits

0x8be2,	// (0x0007762d) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8f,	// (0x0007e8da) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8f,	// (0x0007e8da) cntbar_detail_list_event_pane_t

0xce23,	// (0x0007b86e) cell_cntbar_detail_list_shct_pane_g1

0xb56a,	// (0x00079fb5) navi_pane_mv_g3

0xbf7b,	// (0x0007a9c6) main_cntbar_detail_pane_ParamLimits

0x968a,	// (0x000780d5) main_notif_wgt_pane

0xa272,	// (0x00078cbd) aid_tch_main_mp4_pane_g4

0xa47a,	// (0x00078ec5) popup_slider_window_cp02

0xaa56,	// (0x000794a1) list_recal_day_event_pane

0x8a30,	// (0x0007747b) cntbar_detail_btn_pane_ParamLimits

0x8a30,	// (0x0007747b) cntbar_detail_btn_pane

0x8a49,	// (0x00077494) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a49,	// (0x00077494) cntbar_detail_btn_pane_cp01

0x8a76,	// (0x000774c1) cntbar_detail_list_shct_pane_ParamLimits

0x8a86,	// (0x000774d1) cntbar_detail_pane_g1_ParamLimits

0x8a86,	// (0x000774d1) cntbar_detail_pane_g1

0x8a9a,	// (0x000774e5) cntbar_detail_pane_t1_ParamLimits

0x8a9a,	// (0x000774e5) cntbar_detail_pane_t1

0x8b6b,	// (0x000775b6) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b6b,	// (0x000775b6) cntbar_detail_list_event_pane_g3

0x8b83,	// (0x000775ce) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b83,	// (0x000775ce) cntbar_detail_list_event_pane_g4

0x8b9b,	// (0x000775e6) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b9b,	// (0x000775e6) cntbar_detail_list_event_pane_g5

0x8bb3,	// (0x000775fe) cntbar_detail_list_event_pane_g6_ParamLimits

0x8bb3,	// (0x000775fe) cntbar_detail_list_event_pane_g6

0x8bf7,	// (0x00077642) cntbar_detail_list_event_pane_t3_ParamLimits

0x8bf7,	// (0x00077642) cntbar_detail_list_event_pane_t3

0x8c09,	// (0x00077654) popup_notif_wgt_window_ParamLimits

0x8c09,	// (0x00077654) popup_notif_wgt_window

0x8c22,	// (0x0007766d) popup_submenu_window_cp01_ParamLimits

0x8c22,	// (0x0007766d) popup_submenu_window_cp01

0xab5c,	// (0x000795a7) bg_popup_window_pane_cp10

0xed58,	// (0x0007d7a3) listscroll_notif_wgt_pane

0xed6a,	// (0x0007d7b5) list_notif_wgt_window

0xed73,	// (0x0007d7be) scroll_pane_cp033

0x8c36,	// (0x00077681) list_notif_wgt_row_pane_ParamLimits

0x8c36,	// (0x00077681) list_notif_wgt_row_pane

0xed7c,	// (0x0007d7c7) aid_size_list_notif_wgt_del

0xed89,	// (0x0007d7d4) list_notif_wgt_row_pane_g1

0xed95,	// (0x0007d7e0) list_notif_wgt_row_pane_g2

0xeda4,	// (0x0007d7ef) list_notif_wgt_row_pane_g3

0x0002,

0xfe96,	// (0x0007e8e1) list_notif_wgt_row_pane_g

0xedb1,	// (0x0007d7fc) list_notif_wgt_row_pane_t1

0xedc7,	// (0x0007d812) list_notif_wgt_row_pane_t2

0xedd9,	// (0x0007d824) list_notif_wgt_row_pane_t3

0x0002,

0xfe9d,	// (0x0007e8e8) list_notif_wgt_row_pane_t

0xda3f,	// (0x0007c48a) list_recal_day_event_pane_g1

0xedeb,	// (0x0007d836) list_recal_day_event_pane_t1

0x968a,	// (0x000780d5) bg_button_pane_cp045

0x8c46,	// (0x00077691) cntbar_detail_btn_pane_t1

0xc9e3,	// (0x0007b42e) main_callh_pane_ParamLimits

0xc9e3,	// (0x0007b42e) main_callh_pane

0x968a,	// (0x000780d5) main_coverflow0_pane

0x968a,	// (0x000780d5) main_wgtman_pane

0x785d,	// (0x000762a8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x785d,	// (0x000762a8) main_fs_bigclock_unlock_btn_pane

0x841f,	// (0x00076e6a) bg_button_pane_cp16

0x842f,	// (0x00076e7a) cell_tport_appsw_pane_g3

0x8c54,	// (0x0007769f) cf0_flow_pane_ParamLimits

0x8c54,	// (0x0007769f) cf0_flow_pane

0xedfa,	// (0x0007d845) listscroll_cf0_pane

0xee05,	// (0x0007d850) main_cf0_pane_g1

0x8c69,	// (0x000776b4) main_cf0_pane_t1_ParamLimits

0x8c69,	// (0x000776b4) main_cf0_pane_t1

0x8c80,	// (0x000776cb) main_cf0_pane_t2_ParamLimits

0x8c80,	// (0x000776cb) main_cf0_pane_t2

0x0001,

0xfea9,	// (0x0007e8f4) main_cf0_pane_t_ParamLimits

0xfea9,	// (0x0007e8f4) main_cf0_pane_t

0xee17,	// (0x0007d862) scroll_pane_cp11

0x8c97,	// (0x000776e2) cf0_flow_pane_g1

0x8ca3,	// (0x000776ee) cf0_flow_pane_g2

0x0001,

0xfeae,	// (0x0007e8f9) cf0_flow_pane_g

0x8caf,	// (0x000776fa) cf0_flow_pane_t1

0x968a,	// (0x000780d5) main_call6_pane

0x968a,	// (0x000780d5) main_calllock_pane

0x8cc1,	// (0x0007770c) call6_btn_grp_pane_ParamLimits

0x8cc1,	// (0x0007770c) call6_btn_grp_pane

0x8cdb,	// (0x00077726) call6_pane_g1_ParamLimits

0x8cdb,	// (0x00077726) call6_pane_g1

0x8cf4,	// (0x0007773f) popup_call6_1st_window_ParamLimits

0x8cf4,	// (0x0007773f) popup_call6_1st_window

0x8d08,	// (0x00077753) popup_call6_2nd_window_ParamLimits

0x8d08,	// (0x00077753) popup_call6_2nd_window

0x8d1c,	// (0x00077767) cell_call6_btn_pane_ParamLimits

0x8d1c,	// (0x00077767) cell_call6_btn_pane

0xab5c,	// (0x000795a7) bg_popup_call2_in_pane_cp03

0xee22,	// (0x0007d86d) popup_call6_1st_window_g1

0xee2a,	// (0x0007d875) popup_call6_1st_window_g2

0xee32,	// (0x0007d87d) popup_call6_1st_window_g3

0x0002,

0xfeb3,	// (0x0007e8fe) popup_call6_1st_window_g

0xee3a,	// (0x0007d885) popup_call6_1st_window_t1

0xee49,	// (0x0007d894) popup_call6_1st_window_t2

0xee59,	// (0x0007d8a4) popup_call6_1st_window_t3

0x0002,

0xfeba,	// (0x0007e905) popup_call6_1st_window_t

0xab5c,	// (0x000795a7) bg_popup_call2_in_pane_cp04

0xee22,	// (0x0007d86d) popup_call6_2nd_window_g1

0xee2a,	// (0x0007d875) popup_call6_2nd_window_g2

0xee32,	// (0x0007d87d) popup_call6_2nd_window_g3

0x0002,

0xfeb3,	// (0x0007e8fe) popup_call6_2nd_window_g

0xee3a,	// (0x0007d885) popup_call6_2nd_window_t1

0xf09d,	// (0x0007dae8) bg_button_pane_cp15

0xaae9,	// (0x00079534) cell_call6_btn_pane_g1

0xaaf2,	// (0x0007953d) cell_call6_btn_pane_t1

0x8d30,	// (0x0007777b) listscroll_wgtman_pane_ParamLimits

0x8d30,	// (0x0007777b) listscroll_wgtman_pane

0x8d51,	// (0x0007779c) wgtman_btn_pane_ParamLimits

0x8d51,	// (0x0007779c) wgtman_btn_pane

0xb37c,	// (0x00079dc7) aid_scroll_copy1

0xee69,	// (0x0007d8b4) list_wgtman_pane

0x8d94,	// (0x000777df) wgtman_btn_pane_g1_ParamLimits

0x8d94,	// (0x000777df) wgtman_btn_pane_g1

0x8dc0,	// (0x0007780b) wgtman_btn_pane_t1_ParamLimits

0x8dc0,	// (0x0007780b) wgtman_btn_pane_t1

0xee73,	// (0x0007d8be) wgtman_btn_pane_t2_ParamLimits

0xee73,	// (0x0007d8be) wgtman_btn_pane_t2

0x0001,

0xfec1,	// (0x0007e90c) wgtman_btn_pane_t_ParamLimits

0xfec1,	// (0x0007e90c) wgtman_btn_pane_t

0x8dfd,	// (0x00077848) listrow_wgtman_pane_ParamLimits

0x8dfd,	// (0x00077848) listrow_wgtman_pane

0x8e11,	// (0x0007785c) listrow_wgtman_pane_g1

0x8e1e,	// (0x00077869) listrow_wgtman_pane_g2

0x0001,

0xfec6,	// (0x0007e911) listrow_wgtman_pane_g

0x8e3c,	// (0x00077887) listrow_wgtman_pane_t1

0x8e54,	// (0x0007789f) listrow_wgtman_pane_t2

0x0001,

0xfecb,	// (0x0007e916) listrow_wgtman_pane_t

0x8e7a,	// (0x000778c5) wait_bar_pane_cp09

0xee8a,	// (0x0007d8d5) main_calllock_btn_pane

0xee94,	// (0x0007d8df) main_calllock_pane_g1

0x968a,	// (0x000780d5) bg_button_pane_cp17

0xeea0,	// (0x0007d8eb) main_calllock_btn_pane_g1

0xeea9,	// (0x0007d8f4) main_calllock_btn_pane_t1

0x968a,	// (0x000780d5) main_dialer3_pane

0x968a,	// (0x000780d5) main_fmrd2_pane

0xce23,	// (0x0007b86e) main_fs_bigclock_unlock_btn_pane_g1

0x8e94,	// (0x000778df) main_fs_bigclock_unlock_btn_pane_t1

0x8ea2,	// (0x000778ed) area_fmrd2_info_pane_ParamLimits

0x8ea2,	// (0x000778ed) area_fmrd2_info_pane

0x8eb3,	// (0x000778fe) area_fmrd2_visual_pane_ParamLimits

0x8eb3,	// (0x000778fe) area_fmrd2_visual_pane

0x8ec1,	// (0x0007790c) fmrd2_indi_pane_ParamLimits

0x8ec1,	// (0x0007790c) fmrd2_indi_pane

0x8ece,	// (0x00077919) area_fmrd2_visual_pane_g1

0x8ed6,	// (0x00077921) area_fmrd2_visual_pane_t1

0x8ee6,	// (0x00077931) area_fmrd2_visual_pane_t2

0x8ef6,	// (0x00077941) area_fmrd2_visual_pane_t3

0x0002,

0xfed5,	// (0x0007e920) area_fmrd2_visual_pane_t

0x8f06,	// (0x00077951) area_fmrd2_info_pane_g1

0x8f0e,	// (0x00077959) area_fmrd2_info_pane_t1

0x8f1e,	// (0x00077969) area_fmrd2_info_pane_t2

0x8f2e,	// (0x00077979) area_fmrd2_info_pane_t3

0x8f3e,	// (0x00077989) area_fmrd2_info_pane_t4

0x0003,

0xfedc,	// (0x0007e927) area_fmrd2_info_pane_t

0x8f4e,	// (0x00077999) fmrd2_indi_pane_t1

0x8f5e,	// (0x000779a9) fmrd2_indi_pane_t2

0x8f6e,	// (0x000779b9) fmrd2_indi_pane_t3

0x0002,

0xfee5,	// (0x0007e930) fmrd2_indi_pane_t

0x78e6,	// (0x00076331) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x78e6,	// (0x00076331) list_single_fs_bigclock_indicator_pane_g5

0x799b,	// (0x000763e6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x799b,	// (0x000763e6) list_single_fs_bigclock_indicator_pane_t5

0x85a0,	// (0x00076feb) aid_cell_bcale_month_pane_ParamLimits

0x85a0,	// (0x00076feb) aid_cell_bcale_month_pane

0x85be,	// (0x00077009) bcale_month_pane_ParamLimits

0x85be,	// (0x00077009) bcale_month_pane

0x85e2,	// (0x0007702d) bcale_preview_pane_ParamLimits

0x85e2,	// (0x0007702d) bcale_preview_pane

0xec8b,	// (0x0007d6d6) list_single_fs_bigclock_pane_t1_ParamLimits

0xecaa,	// (0x0007d6f5) list_single_fs_bigclock_pane_t2_ParamLimits

0xecaa,	// (0x0007d6f5) list_single_fs_bigclock_pane_t2

0x0001,

0xfe67,	// (0x0007e8b2) list_single_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x0007e8b2) list_single_fs_bigclock_pane_t

0x8e8c,	// (0x000778d7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed0,	// (0x0007e91b) main_fs_bigclock_unlock_btn_pane_g

0x8f7e,	// (0x000779c9) aid_dia3_key_size_ParamLimits

0x8f7e,	// (0x000779c9) aid_dia3_key_size

0x8f92,	// (0x000779dd) aid_dia3_listrow_size_ParamLimits

0x8f92,	// (0x000779dd) aid_dia3_listrow_size

0x8fac,	// (0x000779f7) dia3_keypad_fun_pane_ParamLimits

0x8fac,	// (0x000779f7) dia3_keypad_fun_pane

0x8fc8,	// (0x00077a13) dia3_keypad_num_pane_ParamLimits

0x8fc8,	// (0x00077a13) dia3_keypad_num_pane

0x8fe4,	// (0x00077a2f) dia3_listscroll_pane_ParamLimits

0x8fe4,	// (0x00077a2f) dia3_listscroll_pane

0x8ffa,	// (0x00077a45) dia3_numentry_pane_ParamLimits

0x8ffa,	// (0x00077a45) dia3_numentry_pane

0xeeb8,	// (0x0007d903) dia3_list_pane

0x9013,	// (0x00077a5e) scroll_pane_cp12

0x968a,	// (0x000780d5) bg_dia3_numentry_pane

0x901e,	// (0x00077a69) dia3_numentry_pane_t1

0x902d,	// (0x00077a78) cell_dia3_key_num_pane

0x9035,	// (0x00077a80) cell_dia3_key0_fun_pane_ParamLimits

0x9035,	// (0x00077a80) cell_dia3_key0_fun_pane

0x9049,	// (0x00077a94) cell_dia3_key1_fun_pane_ParamLimits

0x9049,	// (0x00077a94) cell_dia3_key1_fun_pane

0x9060,	// (0x00077aab) dia3_listrow_pane

0xe2b1,	// (0x0007ccfc) bg_dia3_numentry_pane_g1

0x968a,	// (0x000780d5) bg_button_pane_cp21

0x9072,	// (0x00077abd) cell_dia3_key_num_pane_t1

0x9080,	// (0x00077acb) cell_dia3_key_num_pane_t2

0x908f,	// (0x00077ada) cell_dia3_key_num_pane_t3

0x909e,	// (0x00077ae9) cell_dia3_key_num_pane_t4

0x0003,

0xfeec,	// (0x0007e937) cell_dia3_key_num_pane_t

0x968a,	// (0x000780d5) bg_button_pane_cp19

0x90ad,	// (0x00077af8) cell_dia3_key0_fun_pane_g1

0x968a,	// (0x000780d5) bg_button_pane_cp20

0x90ad,	// (0x00077af8) cell_dia3_key1_fun_pane_g1

0x90b5,	// (0x00077b00) area_left_week_number_pane

0x90c3,	// (0x00077b0e) area_top_day_name_pane

0x90d6,	// (0x00077b21) frame_month_view_pane

0xeec3,	// (0x0007d90e) grid_month_view_pane

0x90eb,	// (0x00077b36) cell_top_day_name_pane_ParamLimits

0x90eb,	// (0x00077b36) cell_top_day_name_pane

0x911a,	// (0x00077b65) cell_area_left_week_number_pane_ParamLimits

0x911a,	// (0x00077b65) cell_area_left_week_number_pane

0x9130,	// (0x00077b7b) cell_month_view_pane_ParamLimits

0x9130,	// (0x00077b7b) cell_month_view_pane

0xeed1,	// (0x0007d91c) frm_month_g1

0x9161,	// (0x00077bac) frm_month_g2

0x9174,	// (0x00077bbf) frm_month_g3

0x9187,	// (0x00077bd2) frm_month_g4

0x919a,	// (0x00077be5) frm_month_g5

0x91ad,	// (0x00077bf8) frm_month_g6

0x91c2,	// (0x00077c0d) frm_month_g7

0xeede,	// (0x0007d929) frm_month_g8

0x91d7,	// (0x00077c22) frm_month_g9

0x91e7,	// (0x00077c32) frm_month_g10

0x91f7,	// (0x00077c42) frm_month_g11

0x9207,	// (0x00077c52) frm_month_g12

0x9219,	// (0x00077c64) frm_month_g13

0x922d,	// (0x00077c78) frm_month_g14

0x9241,	// (0x00077c8c) frm_month_g15

0x9255,	// (0x00077ca0) frm_month_g16

0x000f,

0xfef5,	// (0x0007e940) frm_month_g

0xeeeb,	// (0x0007d936) cell_top_day_name_pane_t1

0x9269,	// (0x00077cb4) cell_area_left_week_number_pane_g1

0x9275,	// (0x00077cc0) cell_area_left_week_number_pane_t1

0xd04a,	// (0x0007ba95) cell_month_view_pane_g1

0x9288,	// (0x00077cd3) cell_month_view_pane_t1

0x968a,	// (0x000780d5) main_fps_pane

0xe6f7,	// (0x0007d142) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6f7,	// (0x0007d142) cmail_ddmenu_btn02_pane_cp1

0xe713,	// (0x0007d15e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe713,	// (0x0007d15e) cmail_ddmenu_btn02_pane_cp2

0x88b8,	// (0x00077303) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88b8,	// (0x00077303) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe1a,	// (0x0007e865) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe1a,	// (0x0007e865) cmail_ddmenu_btn02_pane_g

0x88d9,	// (0x00077324) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88d9,	// (0x00077324) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1f,	// (0x0007e86a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1f,	// (0x0007e86a) cmail_ddmenu_btn02_pane_t

0x929b,	// (0x00077ce6) fps_text_pane_ParamLimits

0x929b,	// (0x00077ce6) fps_text_pane

0x92b2,	// (0x00077cfd) main_fps_pane_g1_ParamLimits

0x92b2,	// (0x00077cfd) main_fps_pane_g1

0x92ca,	// (0x00077d15) wait_bar_pane_cp010_ParamLimits

0x92ca,	// (0x00077d15) wait_bar_pane_cp010

0x92dd,	// (0x00077d28) fps_text_pane_t1_ParamLimits

0x92dd,	// (0x00077d28) fps_text_pane_t1

0xe88b,	// (0x0007d2d6) cam4_image_uncrop_pane_g1

0xe894,	// (0x0007d2df) cam4_image_uncrop_pane_g2

0x5874,	// (0x000742bf) cam4_image_uncrop_pane_g3

0x587d,	// (0x000742c8) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0007e322) cam4_image_uncrop_pane_g

0x9060,	// (0x00077aab) dia3_listrow_pane_ParamLimits

0x968a,	// (0x000780d5) main_phob2_pane

0x83f2,	// (0x00076e3d) cell_tport_appsw_pane_cp02_ParamLimits

0x83f2,	// (0x00076e3d) cell_tport_appsw_pane_cp02

0x8406,	// (0x00076e51) cell_tport_appsw_pane_cp03_ParamLimits

0x8406,	// (0x00076e51) cell_tport_appsw_pane_cp03

0x968a,	// (0x000780d5) phob2_contact_card_pane

0x968a,	// (0x000780d5) phob2_listscroll_pane

0xeefe,	// (0x0007d949) phob2_list_pane

0xef06,	// (0x0007d951) scroll_pane_cp034

0x92f5,	// (0x00077d40) phob2_cc_data_pane_ParamLimits

0x92f5,	// (0x00077d40) phob2_cc_data_pane

0x930e,	// (0x00077d59) phob2_cc_listscroll_pane_ParamLimits

0x930e,	// (0x00077d59) phob2_cc_listscroll_pane

0x8dfd,	// (0x00077848) list_double_large_graphic_phob2_pane_ParamLimits

0x8dfd,	// (0x00077848) list_double_large_graphic_phob2_pane

0x9330,	// (0x00077d7b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9330,	// (0x00077d7b) list_double_large_graphic_phob2_pane_g1

0x9346,	// (0x00077d91) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9346,	// (0x00077d91) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff16,	// (0x0007e961) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff16,	// (0x0007e961) list_double_large_graphic_phob2_pane_g

0x9352,	// (0x00077d9d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9352,	// (0x00077d9d) list_double_large_graphic_phob2_pane_t1

0x9367,	// (0x00077db2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9367,	// (0x00077db2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff1b,	// (0x0007e966) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff1b,	// (0x0007e966) list_double_large_graphic_phob2_pane_t

0x968a,	// (0x000780d5) list_highlight_pane_cp024

0x9379,	// (0x00077dc4) phob2_cc_button_pane

0x9383,	// (0x00077dce) phob2_cc_data_pane_g1_ParamLimits

0x9383,	// (0x00077dce) phob2_cc_data_pane_g1

0x939b,	// (0x00077de6) phob2_cc_data_pane_g2_ParamLimits

0x939b,	// (0x00077de6) phob2_cc_data_pane_g2

0x0001,

0xff20,	// (0x0007e96b) phob2_cc_data_pane_g_ParamLimits

0xff20,	// (0x0007e96b) phob2_cc_data_pane_g

0x93ab,	// (0x00077df6) phob2_cc_data_pane_t1_ParamLimits

0x93ab,	// (0x00077df6) phob2_cc_data_pane_t1

0x93cd,	// (0x00077e18) phob2_cc_data_pane_t2_ParamLimits

0x93cd,	// (0x00077e18) phob2_cc_data_pane_t2

0x93ef,	// (0x00077e3a) phob2_cc_data_pane_t3_ParamLimits

0x93ef,	// (0x00077e3a) phob2_cc_data_pane_t3

0x0002,

0xff25,	// (0x0007e970) phob2_cc_data_pane_t_ParamLimits

0xff25,	// (0x0007e970) phob2_cc_data_pane_t

0xef0e,	// (0x0007d959) phob2_cc_list_pane_ParamLimits

0xef0e,	// (0x0007d959) phob2_cc_list_pane

0xdad6,	// (0x0007c521) scroll_pane_cp035_ParamLimits

0xdad6,	// (0x0007c521) scroll_pane_cp035

0xbf7b,	// (0x0007a9c6) bg_button_pane_cp033

0xef1a,	// (0x0007d965) phob2_cc_button_pane_g1

0xef26,	// (0x0007d971) phob2_cc_button_pane_t1

0xef3b,	// (0x0007d986) phob2_cc_button_pane_t2

0x0001,

0xff2c,	// (0x0007e977) phob2_cc_button_pane_t

0x9411,	// (0x00077e5c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9411,	// (0x00077e5c) list_double_large_graphic_phob2_cc_pane

0x944f,	// (0x00077e9a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x944f,	// (0x00077e9a) list_double_large_graphic_phob2_cc_pane_g1

0x945b,	// (0x00077ea6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x945b,	// (0x00077ea6) list_double_large_graphic_phob2_cc_pane_g2

0x9467,	// (0x00077eb2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9467,	// (0x00077eb2) list_double_large_graphic_phob2_cc_pane_g3

0x9473,	// (0x00077ebe) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9473,	// (0x00077ebe) list_double_large_graphic_phob2_cc_pane_g4

0x947f,	// (0x00077eca) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x947f,	// (0x00077eca) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff31,	// (0x0007e97c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff31,	// (0x0007e97c) list_double_large_graphic_phob2_cc_pane_g

0x948b,	// (0x00077ed6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x948b,	// (0x00077ed6) list_double_large_graphic_phob2_cc_pane_t1

0x94b4,	// (0x00077eff) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x94b4,	// (0x00077eff) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff3c,	// (0x0007e987) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff3c,	// (0x0007e987) list_double_large_graphic_phob2_cc_pane_t

0xef4d,	// (0x0007d998) list_highlight_pane_cp025_ParamLimits

0xef4d,	// (0x0007d998) list_highlight_pane_cp025

0xbf7b,	// (0x0007a9c6) bg_button_pane_cp033_ParamLimits

0xef1a,	// (0x0007d965) phob2_cc_button_pane_g1_ParamLimits

0xef26,	// (0x0007d971) phob2_cc_button_pane_t1_ParamLimits

0xef3b,	// (0x0007d986) phob2_cc_button_pane_t2_ParamLimits

0xff2c,	// (0x0007e977) phob2_cc_button_pane_t_ParamLimits

0xfdb3,	// (0x0006e7fe) popup_wgtman_window

0xd919,	// (0x0007c364) scroll_pane_cp038

0x8d76,	// (0x000777c1) wgtman_btn_pane_cp_01_ParamLimits

0x8d76,	// (0x000777c1) wgtman_btn_pane_cp_01

0xef5b,	// (0x0007d9a6) wgtman_content_pane

0xef64,	// (0x0007d9af) wgtman_heading_pane

0x968a,	// (0x000780d5) bg_heading_pane_cp02

0xef6d,	// (0x0007d9b8) wgtman_heading_pane_g1

0xef75,	// (0x0007d9c0) wgtman_heading_pane_t1

0xef83,	// (0x0007d9ce) scroll_pane_cp036

0xef8b,	// (0x0007d9d6) wgtman_list_pane

0xe89f,	// (0x0007d2ea) wgtman_list_pane_t1_ParamLimits

0xe89f,	// (0x0007d2ea) wgtman_list_pane_t1

0xa508,	// (0x00078f53) cam4_grid_pane

0x65c0,	// (0x0007500b) bg_button_pane_cp015_ParamLimits

0x65d4,	// (0x0007501f) bg_button_pane_cp016_ParamLimits

0x65e7,	// (0x00075032) bg_button_pane_cp017_ParamLimits

0x663f,	// (0x0007508a) popup_vitu2_query_window_g3_ParamLimits

0x663f,	// (0x0007508a) popup_vitu2_query_window_g3

0x66fc,	// (0x00075147) popup_vitu2_query_window_t6_ParamLimits

0x66fc,	// (0x00075147) popup_vitu2_query_window_t6

0x6727,	// (0x00075172) popup_vitu2_query_window_t7_ParamLimits

0x6727,	// (0x00075172) popup_vitu2_query_window_t7

0xe88b,	// (0x0007d2d6) cam4_grid_pane_g1

0xe894,	// (0x0007d2df) cam4_grid_pane_g2

0xef93,	// (0x0007d9de) cam4_grid_pane_g3

0xef9c,	// (0x0007d9e7) cam4_grid_pane_g4

0x0003,

0xff41,	// (0x0007e98c) cam4_grid_pane_g

0x0d92,	// (0x0006f7dd) aid_placing_vt_slider_lsc_ParamLimits

0x107f,	// (0x0006faca) vidtel_button_pane_ParamLimits

0x107f,	// (0x0006faca) vidtel_button_pane

0x968a,	// (0x000780d5) bg_button_pane_cp034

0xefa7,	// (0x0007d9f2) vidtel_button_pane_g1

0xefaf,	// (0x0007d9fa) vidtel_button_pane_t1

0xda1d,	// (0x0007c468) aid_size_vtel_slider_touch

0xdad6,	// (0x0007c521) scroll_pane_cp039

0x7516,	// (0x00075f61) ncim_query_button_pane_cp01_ParamLimits

0x7535,	// (0x00075f80) ncimui_query_pane_g1_ParamLimits

0xbf7b,	// (0x0007a9c6) input_focus_pane_cp012_ParamLimits

0xe2ef,	// (0x0007cd3a) ncim_query_entry_pane_t1_ParamLimits

0xdad6,	// (0x0007c521) scroll_pane_cp039_ParamLimits

0xb453,	// (0x00079e9e) navi_pane_bcale_mc_g1

0xb45b,	// (0x00079ea6) navi_pane_bcale_mc_t1

0xe749,	// (0x0007d194) main_sp_fs_email_pane_g1

0xe755,	// (0x0007d1a0) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x0007e71d) main_sp_fs_email_pane_g

0xea13,	// (0x0007d45e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea13,	// (0x0007d45e) list_single_cale_mrui_row_pane_g3

0x88f9,	// (0x00077344) list_single_recal_day_pane_g5_event_pane

0xaab4,	// (0x000794ff) list_single_recal_day_pane_g7

0xefc5,	// (0x0007da10) list_recal_day_event_pane_cp01

0xefce,	// (0x0007da19) list_recal_vselct_arw_lo_pane_cp01

0xefd6,	// (0x0007da21) list_recal_vselct_arw_up_pane_cp01

0xefde,	// (0x0007da29) list_recal_vselct_pane_cp01

0xda3f,	// (0x0007c48a) list_recal_day_event_pane_cp01_g1

0xab01,	// (0x0007954c) list_recal_day_event_pane_cp01_t1

0xaabc,	// (0x00079507) list_single_recal_day_pane_t1_ParamLimits

0xaace,	// (0x00079519) list_single_recal_day_pane_t2_ParamLimits

0xfe2f,	// (0x0007e87a) list_single_recal_day_pane_t_ParamLimits

0x9d45,	// (0x00078790) bg_notes_pane_ParamLimits

0x9df0,	// (0x0007883b) list_notes_pane_ParamLimits

0x00d5,	// (0x0006eb20) scroll_pane_cp06_ParamLimits

0x9e2c,	// (0x00078877) main_notes_pane_ParamLimits

0xbf7b,	// (0x0007a9c6) main_welc_pane

0x94f4,	// (0x00077f3f) main_welc_body_pane_ParamLimits

0x94f4,	// (0x00077f3f) main_welc_body_pane

0x9513,	// (0x00077f5e) main_welc_opti_pane_ParamLimits

0x9513,	// (0x00077f5e) main_welc_opti_pane

0x956b,	// (0x00077fb6) main_welc_pane_t1_ParamLimits

0x956b,	// (0x00077fb6) main_welc_pane_t1

0xefe8,	// (0x0007da33) main_welc_body_row_pane_ParamLimits

0xefe8,	// (0x0007da33) main_welc_body_row_pane

0xd3fa,	// (0x0007be45) main_welc_opti_row_pane_ParamLimits

0xd3fa,	// (0x0007be45) main_welc_opti_row_pane

0xefff,	// (0x0007da4a) main_welc_opti_row_pane_g1

0x95ed,	// (0x00078038) main_welc_opti_row_pane_t1

0xf007,	// (0x0007da52) main_welc_body_row_pane_t1

0xed62,	// (0x0007d7ad) popup_notif_wgt_heading_pane

0xed7c,	// (0x0007d7c7) aid_size_list_notif_wgt_del_ParamLimits

0xed89,	// (0x0007d7d4) list_notif_wgt_row_pane_g1_ParamLimits

0xed95,	// (0x0007d7e0) list_notif_wgt_row_pane_g2_ParamLimits

0xeda4,	// (0x0007d7ef) list_notif_wgt_row_pane_g3_ParamLimits

0xfe96,	// (0x0007e8e1) list_notif_wgt_row_pane_g_ParamLimits

0xedb1,	// (0x0007d7fc) list_notif_wgt_row_pane_t1_ParamLimits

0xedc7,	// (0x0007d812) list_notif_wgt_row_pane_t2_ParamLimits

0xedd9,	// (0x0007d824) list_notif_wgt_row_pane_t3_ParamLimits

0xfe9d,	// (0x0007e8e8) list_notif_wgt_row_pane_t_ParamLimits

0x8e11,	// (0x0007785c) listrow_wgtman_pane_g1_ParamLimits

0x8e1e,	// (0x00077869) listrow_wgtman_pane_g2_ParamLimits

0xfec6,	// (0x0007e911) listrow_wgtman_pane_g_ParamLimits

0x8e3c,	// (0x00077887) listrow_wgtman_pane_t1_ParamLimits

0x8e54,	// (0x0007789f) listrow_wgtman_pane_t2_ParamLimits

0xfecb,	// (0x0007e916) listrow_wgtman_pane_t_ParamLimits

0x8e7a,	// (0x000778c5) wait_bar_pane_cp09_ParamLimits

0x968a,	// (0x000780d5) bg_popup_heading_pane_cp02

0xf016,	// (0x0007da61) popup_notif_wgt_heading_pane_g1

0xf01e,	// (0x0007da69) popup_notif_wgt_heading_pane_t1

0x968a,	// (0x000780d5) main_vids_pane

0x968a,	// (0x000780d5) vids_listscroll_pane

0x95fc,	// (0x00078047) scroll_pane_cp040

0x968a,	// (0x000780d5) vids_list_pane

0x9607,	// (0x00078052) vids_list_double_pane_ParamLimits

0x9607,	// (0x00078052) vids_list_double_pane

0x9618,	// (0x00078063) vids_list_double_pane_g1

0x9621,	// (0x0007806c) vids_list_double_pane_t1

0x9631,	// (0x0007807c) vids_list_double_pane_t2

0x0001,

0xff58,	// (0x0007e9a3) vids_list_double_pane_t

0x9694,	// (0x000780df) main_ncimui_pane_ParamLimits

0x734c,	// (0x00075d97) main_ncimui_pane_g1_ParamLimits

0x7358,	// (0x00075da3) main_ncimui_pane_g2_ParamLimits

0x7358,	// (0x00075da3) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x0007e61e) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x0007e61e) main_ncimui_pane_g

0x9532,	// (0x00077f7d) main_welc_pane_g1_ParamLimits

0x9532,	// (0x00077f7d) main_welc_pane_g1

0x9547,	// (0x00077f92) main_welc_pane_g2_ParamLimits

0x9547,	// (0x00077f92) main_welc_pane_g2

0x0002,

0xff4a,	// (0x0007e995) main_welc_pane_g_ParamLimits

0xff4a,	// (0x0007e995) main_welc_pane_g

0x9d45,	// (0x00078790) listscroll_mce_pane_ParamLimits

0xb5aa,	// (0x00079ff5) wait_bar_pane_cp10

0xc9d7,	// (0x0007b422) main_cale_day_pane_ParamLimits

0xc9d7,	// (0x0007b422) main_cale_week_pane_ParamLimits

0x9d45,	// (0x00078790) main_messa_pane_ParamLimits

0x4adf,	// (0x0007352a) main_clock2_btn_pane_ParamLimits

0x4adf,	// (0x0007352a) main_clock2_btn_pane

0xd1d2,	// (0x0007bc1d) main_clock2_btn_pane_cp01_ParamLimits

0xd1d2,	// (0x0007bc1d) main_clock2_btn_pane_cp01

0xe9e4,	// (0x0007d42f) list_cale_mrui_pane_ParamLimits

0xee0f,	// (0x0007d85a) main_cf0_pane_g2

0x0001,

0xfea4,	// (0x0007e8ef) main_cf0_pane_g

0x90b5,	// (0x00077b00) area_left_week_number_pane_ParamLimits

0x90c3,	// (0x00077b0e) area_top_day_name_pane_ParamLimits

0x90d6,	// (0x00077b21) frame_month_view_pane_ParamLimits

0xeec3,	// (0x0007d90e) grid_month_view_pane_ParamLimits

0xeed1,	// (0x0007d91c) frm_month_g1_ParamLimits

0x9161,	// (0x00077bac) frm_month_g2_ParamLimits

0x9174,	// (0x00077bbf) frm_month_g3_ParamLimits

0x9187,	// (0x00077bd2) frm_month_g4_ParamLimits

0x919a,	// (0x00077be5) frm_month_g5_ParamLimits

0x91ad,	// (0x00077bf8) frm_month_g6_ParamLimits

0x91c2,	// (0x00077c0d) frm_month_g7_ParamLimits

0xeede,	// (0x0007d929) frm_month_g8_ParamLimits

0x91d7,	// (0x00077c22) frm_month_g9_ParamLimits

0x91e7,	// (0x00077c32) frm_month_g10_ParamLimits

0x91f7,	// (0x00077c42) frm_month_g11_ParamLimits

0x9207,	// (0x00077c52) frm_month_g12_ParamLimits

0x9219,	// (0x00077c64) frm_month_g13_ParamLimits

0x922d,	// (0x00077c78) frm_month_g14_ParamLimits

0x9241,	// (0x00077c8c) frm_month_g15_ParamLimits

0x9255,	// (0x00077ca0) frm_month_g16_ParamLimits

0xfef5,	// (0x0007e940) frm_month_g_ParamLimits

0xeeeb,	// (0x0007d936) cell_top_day_name_pane_t1_ParamLimits

0x9269,	// (0x00077cb4) cell_area_left_week_number_pane_g1_ParamLimits

0x9275,	// (0x00077cc0) cell_area_left_week_number_pane_t1_ParamLimits

0xd04a,	// (0x0007ba95) cell_month_view_pane_g1_ParamLimits

0x9288,	// (0x00077cd3) cell_month_view_pane_t1_ParamLimits

0x9d3d,	// (0x00078788) main_clock2_btn_pane_g1

0xf02c,	// (0x0007da77) main_clock2_btn_pane_t1

0xbf7b,	// (0x0007a9c6) listscroll_cmail_pane_ParamLimits

0xe749,	// (0x0007d194) main_sp_fs_email_pane_g1_ParamLimits

0xe755,	// (0x0007d1a0) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x0007e71d) main_sp_fs_email_pane_g_ParamLimits

0xeaec,	// (0x0007d537) list_recal_day_pane_ParamLimits

0xeafd,	// (0x0007d548) mian_recal_day_pane_t1

0x8064,	// (0x00076aaf) list_single_dyc_row_text_pane_t4_ParamLimits

0x8064,	// (0x00076aaf) list_single_dyc_row_text_pane_t4

0x80ad,	// (0x00076af8) list_single_dyc_row_text_pane_t5_ParamLimits

0x80ad,	// (0x00076af8) list_single_dyc_row_text_pane_t5

0xa829,	// (0x00079274) list_single_dyc_row_text_pane_t6_ParamLimits

0xa829,	// (0x00079274) list_single_dyc_row_text_pane_t6

0x1e8c,	// (0x000708d7) aid_mgn_list_cale_time_pane

0x9694,	// (0x000780df) main_gallery2_pane_ParamLimits

0xd1e6,	// (0x0007bc31) main_clock2_pane_cp01_t1

0xd1f4,	// (0x0007bc3f) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0007e1f4) main_clock2_pane_cp01_t

0x04f1,	// (0x0006ef3c) cale_week_scroll_pane_g16_ParamLimits

0x04f1,	// (0x0006ef3c) cale_week_scroll_pane_g16

0xab5c,	// (0x000795a7) vorec_slider_pane

0xefaf,	// (0x0007d9fa) vidtel_button_pane_t1_ParamLimits

0x895f,	// (0x000773aa) main_fs_bigclock_clock_pane_g1_ParamLimits

0x895f,	// (0x000773aa) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8972,	// (0x000773bd) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8972,	// (0x000773bd) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe52,	// (0x0007e89d) main_fs_bigclock_clock_pane_g_ParamLimits

0x8989,	// (0x000773d4) main_fs_bigclock_clock_pane_t1_ParamLimits

0x899f,	// (0x000773ea) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe5b,	// (0x0007e8a6) main_fs_bigclock_clock_pane_t_ParamLimits

0x4256,	// (0x00072ca1) main_mup3_lyrics_pane_ParamLimits

0x4256,	// (0x00072ca1) main_mup3_lyrics_pane

0x9667,	// (0x000780b2) main_mup3_lyrics_pane_t1_ParamLimits

0x9667,	// (0x000780b2) main_mup3_lyrics_pane_t1

0xa25c,	// (0x00078ca7) aid_main_mp4_pane_t1_area

0xa266,	// (0x00078cb1) aid_main_mp4_pane_t2_area

0xa312,	// (0x00078d5d) main_mp4_pane_g7_ParamLimits

0xa312,	// (0x00078d5d) main_mp4_pane_g7

0xa31e,	// (0x00078d69) main_mp4_pane_g8_ParamLimits

0xa31e,	// (0x00078d69) main_mp4_pane_g8

0x5637,	// (0x00074082) aid_call6_pane_g1_size

0x943f,	// (0x00077e8a) list_double_large_graphic_phob2_other_pane_ParamLimits

0x943f,	// (0x00077e8a) list_double_large_graphic_phob2_other_pane

0x9682,	// (0x000780cd) list_double_large_graphic_phob2_other_pane_g1

0x968a,	// (0x000780d5) list_highlight_pane_cp026

0xbf7b,	// (0x0007a9c6) main_welc_pane_ParamLimits

0x7d57,	// (0x000767a2) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7d57,	// (0x000767a2) main_sp_fs_ctrlbar_pane_g3

0x7d71,	// (0x000767bc) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7d71,	// (0x000767bc) main_sp_fs_ctrlbar_pane_g4

0x7da5,	// (0x000767f0) toolbar2_fixed_button_pane_cp01

0x7db0,	// (0x000767fb) toolbar2_fixed_button_pane_cp02

0x7dbd,	// (0x00076808) toolbar2_fixed_button_pane_cp03

0x94dd,	// (0x00077f28) list_welc_entry_pane_ParamLimits

0x94dd,	// (0x00077f28) list_welc_entry_pane

0x955c,	// (0x00077fa7) main_welc_pane_g3_ParamLimits

0x955c,	// (0x00077fa7) main_welc_pane_g3

0x958d,	// (0x00077fd8) main_welc_pane_t2_ParamLimits

0x958d,	// (0x00077fd8) main_welc_pane_t2

0x95a8,	// (0x00077ff3) main_welc_pane_t3_ParamLimits

0x95a8,	// (0x00077ff3) main_welc_pane_t3

0x0002,

0xff51,	// (0x0007e99c) main_welc_pane_t_ParamLimits

0xff51,	// (0x0007e99c) main_welc_pane_t

0x95c2,	// (0x0007800d) welc_button_pane_ParamLimits

0x95c2,	// (0x0007800d) welc_button_pane

0x95d9,	// (0x00078024) welc_service_logo_pane_ParamLimits

0x95d9,	// (0x00078024) welc_service_logo_pane

0xf03a,	// (0x0007da85) list_single_welc_entry_pane_ParamLimits

0xf03a,	// (0x0007da85) list_single_welc_entry_pane

0xf04d,	// (0x0007da98) list_single_welc_entry_pane_g1

0xf055,	// (0x0007daa0) list_single_welc_entry_pane_t1

0xf063,	// (0x0007daae) list_single_welc_entry_pane_t2

0x0001,

0xff5d,	// (0x0007e9a8) list_single_welc_entry_pane_t

0x968a,	// (0x000780d5) bg_button_pane_cp035

0xf071,	// (0x0007dabc) welc_button_pane_t1

0xf07f,	// (0x0007daca) welc_service_logo_pane_g1

0xf088,	// (0x0007dad3) welc_service_logo_pane_g2

0x0001,

0xff62,	// (0x0007e9ad) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small

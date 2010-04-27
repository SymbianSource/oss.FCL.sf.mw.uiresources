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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002f0bc };

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
0x0e62,	// (0x0002ff1e) Screen

0x0e6e,	// (0x0002ff2a) application_window

0x0eaa,	// (0x0002ff66) area_bottom_pane_ParamLimits

0x0eaa,	// (0x0002ff66) area_bottom_pane

0x0ee3,	// (0x0002ff9f) area_top_pane_ParamLimits

0x0ee3,	// (0x0002ff9f) area_top_pane

0x9c2e,	// (0x00038cea) call_video_uplink_pane_ParamLimits

0x9c2e,	// (0x00038cea) call_video_uplink_pane

0x0f71,	// (0x0003002d) main_pane_ParamLimits

0x0f71,	// (0x0003002d) main_pane

0xc343,	// (0x0003b3ff) context_pane

0x4948,	// (0x00033a04) navi_pane

0x4978,	// (0x00033a34) popup_cale_events_window_ParamLimits

0x4978,	// (0x00033a34) popup_cale_events_window

0xc356,	// (0x0003b412) popup_mup_playback_window

0x4990,	// (0x00033a4c) signal_pane

0xa38d,	// (0x00039449) main_browser_pane

0xa543,	// (0x000395ff) main_burst_pane

0x464a,	// (0x00033706) main_calc_pane

0xc2e6,	// (0x0003b3a2) main_cale_day_pane

0x1525,	// (0x000305e1) main_cale_month_pane

0xc2e6,	// (0x0003b3a2) main_cale_week_pane

0xa543,	// (0x000395ff) main_call_pane

0xa06d,	// (0x00039129) main_call_poc_pane

0xa543,	// (0x000395ff) main_camera_pane

0xa543,	// (0x000395ff) main_chi_dic_pane

0xad0f,	// (0x00039dcb) main_clock_pane

0xa06d,	// (0x00039129) main_fmradio_pane

0xa543,	// (0x000395ff) main_graph_messa_pane

0xa06d,	// (0x00039129) main_help_pane

0xa38d,	// (0x00039449) main_im_pane

0xa2c8,	// (0x00039384) main_image_pane_ParamLimits

0xa2c8,	// (0x00039384) main_image_pane

0xa06d,	// (0x00039129) main_location2_pane

0xa543,	// (0x000395ff) main_location_pane

0xa2c8,	// (0x00039384) main_messa_pane

0xa06d,	// (0x00039129) main_mp2_pane

0xa543,	// (0x000395ff) main_mp_pane

0xa06d,	// (0x00039129) main_msg_pane

0xa06d,	// (0x00039129) main_mup_eq_pane

0xa06d,	// (0x00039129) main_mup_pane

0xa38d,	// (0x00039449) main_notes_pane

0xa06d,	// (0x00039129) main_pec_pane

0xa06d,	// (0x00039129) main_phob_pane

0xa06d,	// (0x00039129) main_pinb_pane

0xa06d,	// (0x00039129) main_postcard_pane

0xa06d,	// (0x00039129) main_qdial_pane

0xa543,	// (0x000395ff) main_skin_pane

0xa06d,	// (0x00039129) main_smil2_pane

0xa543,	// (0x000395ff) main_smil_pane

0xa543,	// (0x000395ff) main_video_pane

0xa543,	// (0x000395ff) main_video_tele_pane

0xa2c8,	// (0x00039384) main_viewer_pane_ParamLimits

0xa2c8,	// (0x00039384) main_viewer_pane

0xa543,	// (0x000395ff) main_vorec_pane

0x46a0,	// (0x0003375c) popup_blid_sat_info_window_ParamLimits

0x46a0,	// (0x0003375c) popup_blid_sat_info_window

0x4704,	// (0x000337c0) popup_dyc_status_message_window_ParamLimits

0x4704,	// (0x000337c0) popup_dyc_status_message_window

0x471e,	// (0x000337da) popup_grid_large_graphic_window_ParamLimits

0x471e,	// (0x000337da) popup_grid_large_graphic_window

0x47e0,	// (0x0003389c) popup_loc_request_window_ParamLimits

0x47e0,	// (0x0003389c) popup_loc_request_window

0x491c,	// (0x000339d8) popup_wml_address_window_ParamLimits

0x491c,	// (0x000339d8) popup_wml_address_window

0x4488,	// (0x00033544) call_muted_g1

0x411c,	// (0x000331d8) popup_call_audio_conf_window_ParamLimits

0x411c,	// (0x000331d8) popup_call_audio_conf_window

0x4498,	// (0x00033554) popup_call_audio_first_window_ParamLimits

0x4498,	// (0x00033554) popup_call_audio_first_window

0x450e,	// (0x000335ca) popup_call_audio_in_window_ParamLimits

0x450e,	// (0x000335ca) popup_call_audio_in_window

0x454a,	// (0x00033606) popup_call_audio_out_window_ParamLimits

0x454a,	// (0x00033606) popup_call_audio_out_window

0x4584,	// (0x00033640) popup_call_audio_second_window_ParamLimits

0x4584,	// (0x00033640) popup_call_audio_second_window

0x45da,	// (0x00033696) popup_call_audio_wait_window_ParamLimits

0x45da,	// (0x00033696) popup_call_audio_wait_window

0x460f,	// (0x000336cb) popup_number_entry_window_ParamLimits

0x460f,	// (0x000336cb) popup_number_entry_window

0x9c5a,	// (0x00038d16) bg_popup_call_pane_cp05_ParamLimits

0x9c5a,	// (0x00038d16) bg_popup_call_pane_cp05

0x9c7a,	// (0x00038d36) popup_number_entry_window_t1

0x9c8d,	// (0x00038d49) popup_number_entry_window_t2

0x9c9f,	// (0x00038d5b) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0003e186) popup_number_entry_window_t

0x9cb1,	// (0x00038d6d) text_title_cp2

0x9cc4,	// (0x00038d80) bg_popup_call_pane_cp_ParamLimits

0x9cc4,	// (0x00038d80) bg_popup_call_pane_cp

0x9cd2,	// (0x00038d8e) call_thumbnail_pane

0x9cda,	// (0x00038d96) popup_call_audio_in_window_g1_ParamLimits

0x9cda,	// (0x00038d96) popup_call_audio_in_window_g1

0x9ce6,	// (0x00038da2) popup_call_audio_in_window_g2_ParamLimits

0x9ce6,	// (0x00038da2) popup_call_audio_in_window_g2

0x9cf2,	// (0x00038dae) popup_call_audio_in_window_g3_ParamLimits

0x9cf2,	// (0x00038dae) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0003e18f) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0003e18f) popup_call_audio_in_window_g

0x9cfe,	// (0x00038dba) popup_call_audio_in_window_t1_ParamLimits

0x9cfe,	// (0x00038dba) popup_call_audio_in_window_t1

0x9d1a,	// (0x00038dd6) popup_call_audio_in_window_t2_ParamLimits

0x9d1a,	// (0x00038dd6) popup_call_audio_in_window_t2

0x9d36,	// (0x00038df2) popup_call_audio_in_window_t3_ParamLimits

0x9d36,	// (0x00038df2) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0003e196) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0003e196) popup_call_audio_in_window_t

0x9cc4,	// (0x00038d80) bg_popup_call_pane_cp01_ParamLimits

0x9cc4,	// (0x00038d80) bg_popup_call_pane_cp01

0x9cd2,	// (0x00038d8e) call_thumbnail_pane_cp02

0x9d49,	// (0x00038e05) call_type_pane_cp022

0x9d51,	// (0x00038e0d) popup_call_audio_out_window_g1_ParamLimits

0x9d51,	// (0x00038e0d) popup_call_audio_out_window_g1

0x9d63,	// (0x00038e1f) popup_call_audio_out_window_g2_ParamLimits

0x9d63,	// (0x00038e1f) popup_call_audio_out_window_g2

0x9d6f,	// (0x00038e2b) popup_call_audio_out_window_g3_ParamLimits

0x9d6f,	// (0x00038e2b) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0003e19d) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0003e19d) popup_call_audio_out_window_g

0x9d81,	// (0x00038e3d) popup_call_audio_out_window_t1_ParamLimits

0x9d81,	// (0x00038e3d) popup_call_audio_out_window_t1

0x9d99,	// (0x00038e55) popup_call_audio_out_window_t2_ParamLimits

0x9d99,	// (0x00038e55) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003e1a4) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003e1a4) popup_call_audio_out_window_t

0x9dae,	// (0x00038e6a) bg_popup_call_pane_ParamLimits

0x9dae,	// (0x00038e6a) bg_popup_call_pane

0x1130,	// (0x000301ec) call_thumbnail_pane_cp_ParamLimits

0x1130,	// (0x000301ec) call_thumbnail_pane_cp

0x9e32,	// (0x00038eee) call_type_pane_cp01_ParamLimits

0x9e32,	// (0x00038eee) call_type_pane_cp01

0x9e76,	// (0x00038f32) popup_call_audio_first_window_g1_ParamLimits

0x9e76,	// (0x00038f32) popup_call_audio_first_window_g1

0x9ec2,	// (0x00038f7e) popup_call_audio_first_window_g2_ParamLimits

0x9ec2,	// (0x00038f7e) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0003e1a9) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0003e1a9) popup_call_audio_first_window_g

0x9f06,	// (0x00038fc2) popup_call_audio_first_window_t1_ParamLimits

0x9f06,	// (0x00038fc2) popup_call_audio_first_window_t1

0x9fb2,	// (0x0003906e) popup_call_audio_first_window_t4_ParamLimits

0x9fb2,	// (0x0003906e) popup_call_audio_first_window_t4

0xa03e,	// (0x000390fa) popup_call_audio_first_window_t5_ParamLimits

0xa03e,	// (0x000390fa) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0003e1ae) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0003e1ae) popup_call_audio_first_window_t

0xa06d,	// (0x00039129) bg_popup_call_pane_cp02

0xa077,	// (0x00039133) call_type_pane_cp023

0xa07f,	// (0x0003913b) popup_call_audio_wait_window_g1

0xa087,	// (0x00039143) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003e1b5) popup_call_audio_wait_window_g

0xa08f,	// (0x0003914b) popup_call_audio_wait_window_t3

0xa09d,	// (0x00039159) bg_popup_call_pane_cp03_ParamLimits

0xa09d,	// (0x00039159) bg_popup_call_pane_cp03

0xa0fd,	// (0x000391b9) call_thumbnail_pane_cp011_ParamLimits

0xa0fd,	// (0x000391b9) call_thumbnail_pane_cp011

0xa109,	// (0x000391c5) call_type_pane_cp034_ParamLimits

0xa109,	// (0x000391c5) call_type_pane_cp034

0xa145,	// (0x00039201) popup_call_audio_second_window_g1_ParamLimits

0xa145,	// (0x00039201) popup_call_audio_second_window_g1

0xa181,	// (0x0003923d) popup_call_audio_second_window_g2_ParamLimits

0xa181,	// (0x0003923d) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0003e1ba) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0003e1ba) popup_call_audio_second_window_g

0xa1bd,	// (0x00039279) popup_call_audio_second_window_t1_ParamLimits

0xa1bd,	// (0x00039279) popup_call_audio_second_window_t1

0xa23e,	// (0x000392fa) popup_call_audio_second_window_t2_ParamLimits

0xa23e,	// (0x000392fa) popup_call_audio_second_window_t2

0xa274,	// (0x00039330) popup_call_audio_second_window_t3_ParamLimits

0xa274,	// (0x00039330) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0003e1bf) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0003e1bf) popup_call_audio_second_window_t

0xa06d,	// (0x00039129) bg_popup_call_pane_cp04

0xa2aa,	// (0x00039366) list_conf_pane

0xa2b2,	// (0x0003936e) popup_call_audio_conf_window_t1

0xa2c0,	// (0x0003937c) call_thumbnail_pane_g1

0xa2c8,	// (0x00039384) bg_pinb_pane_ParamLimits

0xa2c8,	// (0x00039384) bg_pinb_pane

0xa2d6,	// (0x00039392) find_pinb_pane

0xa2df,	// (0x0003939b) listscroll_pinb_pane_ParamLimits

0xa2df,	// (0x0003939b) listscroll_pinb_pane

0xa2ee,	// (0x000393aa) pinb_bg_pane_g1

0x1154,	// (0x00030210) pinb_bg_pane_g2

0x1160,	// (0x0003021c) pinb_bg_pane_g3

0x116c,	// (0x00030228) pinb_bg_pane_g4

0x1178,	// (0x00030234) pinb_bg_pane_g5

0x1184,	// (0x00030240) pinb_bg_pane_g6

0x118f,	// (0x0003024b) pinb_bg_pane_g7

0x119a,	// (0x00030256) pinb_bg_pane_g8

0x11a5,	// (0x00030261) pinb_bg_pane_g9

0x11af,	// (0x0003026b) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0003e1c6) pinb_bg_pane_g

0x11cc,	// (0x00030288) grid_pinb_pane

0x11d7,	// (0x00030293) list_pinb_pane

0x11e2,	// (0x0003029e) scroll_pane_cp01_ParamLimits

0x11e2,	// (0x0003029e) scroll_pane_cp01

0xa2f8,	// (0x000393b4) find_pinb_pane_g1_ParamLimits

0xa2f8,	// (0x000393b4) find_pinb_pane_g1

0xa310,	// (0x000393cc) find_pinb_pane_t1

0xa322,	// (0x000393de) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003e1e0) find_pinb_pane_t

0xa337,	// (0x000393f3) input_focus_pane_cp01_ParamLimits

0xa337,	// (0x000393f3) input_focus_pane_cp01

0x11f4,	// (0x000302b0) cell_pinb_pane_ParamLimits

0x11f4,	// (0x000302b0) cell_pinb_pane

0x1216,	// (0x000302d2) cell_pinb_pane_g1_ParamLimits

0x1216,	// (0x000302d2) cell_pinb_pane_g1

0x122b,	// (0x000302e7) cell_pinb_pane_g2_ParamLimits

0x122b,	// (0x000302e7) cell_pinb_pane_g2

0xa343,	// (0x000393ff) cell_pinb_pane_g3_ParamLimits

0xa343,	// (0x000393ff) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003e1e5) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003e1e5) cell_pinb_pane_g

0xa06d,	// (0x00039129) grid_highlight_pane_cp01

0x1237,	// (0x000302f3) list_pinb_item_pane_ParamLimits

0x1237,	// (0x000302f3) list_pinb_item_pane

0xa06d,	// (0x00039129) list_highlight_pane_cp02

0x1249,	// (0x00030305) list_pinb_item_pane_g1_ParamLimits

0x1249,	// (0x00030305) list_pinb_item_pane_g1

0x1256,	// (0x00030312) list_pinb_item_pane_g2_ParamLimits

0x1256,	// (0x00030312) list_pinb_item_pane_g2

0x1262,	// (0x0003031e) list_pinb_item_pane_g3_ParamLimits

0x1262,	// (0x0003031e) list_pinb_item_pane_g3

0x1273,	// (0x0003032f) list_pinb_item_pane_g4_ParamLimits

0x1273,	// (0x0003032f) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0003e1ec) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0003e1ec) list_pinb_item_pane_g

0x127f,	// (0x0003033b) list_pinb_item_pane_t1_ParamLimits

0x127f,	// (0x0003033b) list_pinb_item_pane_t1

0xfb97,	// (0x0002ec53) calc_display_pane

0xfbbf,	// (0x0002ec7b) calc_paper_pane

0xfbe2,	// (0x0002ec9e) grid_calc_pane

0xa06d,	// (0x00039129) bg_list_pane_cp01

0x129e,	// (0x0003035a) clock_g1

0x12a6,	// (0x00030362) clock_g2

0x0001,

0xf139,	// (0x0003e1f5) clock_g

0x12ae,	// (0x0003036a) clock_t1_ParamLimits

0x12ae,	// (0x0003036a) clock_t1

0x12c3,	// (0x0003037f) clock_t2_ParamLimits

0x12c3,	// (0x0003037f) clock_t2

0x12d5,	// (0x00030391) clock_t3_ParamLimits

0x12d5,	// (0x00030391) clock_t3

0x12e7,	// (0x000303a3) clock_t4_ParamLimits

0x12e7,	// (0x000303a3) clock_t4

0x12f9,	// (0x000303b5) clock_t5_ParamLimits

0x12f9,	// (0x000303b5) clock_t5

0x130e,	// (0x000303ca) clock_t6_ParamLimits

0x130e,	// (0x000303ca) clock_t6

0x1320,	// (0x000303dc) clock_t7_ParamLimits

0x1320,	// (0x000303dc) clock_t7

0x1332,	// (0x000303ee) clock_t8_ParamLimits

0x1332,	// (0x000303ee) clock_t8

0x1346,	// (0x00030402) clock_t9_ParamLimits

0x1346,	// (0x00030402) clock_t9

0x0008,

0xf13e,	// (0x0003e1fa) clock_t_ParamLimits

0xf13e,	// (0x0003e1fa) clock_t

0xa34f,	// (0x0003940b) popup_clock_analogue_window_cp02

0xa34f,	// (0x0003940b) popup_clock_digital_window_cp01

0xa357,	// (0x00039413) listscroll_help_pane

0xa06d,	// (0x00039129) phob_pre_status_pane

0xa361,	// (0x0003941d) grid_qdial_pane

0xa2c8,	// (0x00039384) listscroll_mce_pane

0xa2c8,	// (0x00039384) bg_notes_pane

0xa36b,	// (0x00039427) list_notes_pane

0x135c,	// (0x00030418) scroll_pane_cp06

0xa379,	// (0x00039435) bg_calc_paper_pane

0x137a,	// (0x00030436) list_calc_pane

0xa38d,	// (0x00039449) bg_calc_display_pane

0xfc10,	// (0x0002eccc) calc_display_pane_t1

0xfc22,	// (0x0002ecde) calc_display_pane_t2

0x1394,	// (0x00030450) calc_display_pane_t3

0x0002,

0xf151,	// (0x0003e20d) calc_display_pane_t

0xfc34,	// (0x0002ecf0) cell_calc_pane_ParamLimits

0xfc34,	// (0x0002ecf0) cell_calc_pane

0xa399,	// (0x00039455) bg_calc_paper_pane_g1

0xa3a5,	// (0x00039461) bg_calc_paper_pane_g2

0xa3b1,	// (0x0003946d) bg_calc_paper_pane_g3

0xa3bd,	// (0x00039479) bg_calc_paper_pane_g4

0xa3c9,	// (0x00039485) bg_calc_paper_pane_g5

0x13a6,	// (0x00030462) bg_calc_paper_pane_g6

0x13b9,	// (0x00030475) bg_calc_paper_pane_g7

0x13cc,	// (0x00030488) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0003e214) bg_calc_paper_pane_g

0x13dd,	// (0x00030499) calc_bg_paper_pane_g9

0x13ee,	// (0x000304aa) list_calc_item_pane_ParamLimits

0x13ee,	// (0x000304aa) list_calc_item_pane

0xa3d5,	// (0x00039491) list_calc_item_pane_g1

0x1406,	// (0x000304c2) list_calc_item_pane_t1_ParamLimits

0x1406,	// (0x000304c2) list_calc_item_pane_t1

0xfc71,	// (0x0002ed2d) list_calc_item_pane_t2_ParamLimits

0xfc71,	// (0x0002ed2d) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0003e225) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0003e225) list_calc_item_pane_t

0xa3e2,	// (0x0003949e) cell_calc_pane_g1

0xa3ec,	// (0x000394a8) grid_highlight_pane_cp02

0xa40e,	// (0x000394ca) bg_calc_display_pane_g1

0x1418,	// (0x000304d4) bg_calc_display_pane_g2

0xa417,	// (0x000394d3) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0003e22f) bg_calc_display_pane_g

0xfca3,	// (0x0002ed5f) cell_qdial_pane_ParamLimits

0xfca3,	// (0x0002ed5f) cell_qdial_pane

0x1422,	// (0x000304de) cell_qdial_pane_g1_ParamLimits

0x1422,	// (0x000304de) cell_qdial_pane_g1

0x1438,	// (0x000304f4) cell_qdial_pane_g2_ParamLimits

0x1438,	// (0x000304f4) cell_qdial_pane_g2

0xa420,	// (0x000394dc) cell_qdial_pane_g3_ParamLimits

0xa420,	// (0x000394dc) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0003e236) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0003e236) cell_qdial_pane_g

0x145f,	// (0x0003051b) cell_qdial_pane_t1_ParamLimits

0x145f,	// (0x0003051b) cell_qdial_pane_t1

0x1477,	// (0x00030533) cell_qdial_pane_t2_ParamLimits

0x1477,	// (0x00030533) cell_qdial_pane_t2

0x148a,	// (0x00030546) cell_qdial_pane_t3_ParamLimits

0x148a,	// (0x00030546) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0003e23f) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0003e23f) cell_qdial_pane_t

0xa06d,	// (0x00039129) grid_highlight_pane_cp04

0xa42c,	// (0x000394e8) thumbnail_qdial_pane_ParamLimits

0xa42c,	// (0x000394e8) thumbnail_qdial_pane

0xa488,	// (0x00039544) list_help_pane

0xa491,	// (0x0003954d) scroll_pane_cp02

0x149d,	// (0x00030559) help_list_pane_t1_ParamLimits

0x149d,	// (0x00030559) help_list_pane_t1

0x14bb,	// (0x00030577) bg_notes_pane_g2

0x14c3,	// (0x0003057f) bg_notes_pane_g3

0x14cb,	// (0x00030587) notes_bg_pane_g1

0x14d3,	// (0x0003058f) notes_bg_pane_g4

0x14db,	// (0x00030597) notes_bg_pane_g5

0x14e3,	// (0x0003059f) notes_bg_pane_g6

0x14eb,	// (0x000305a7) notes_bg_pane_g7

0x14f3,	// (0x000305af) notes_bg_pane_g8

0x14fb,	// (0x000305b7) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0003e25d) notes_bg_pane_g

0x1503,	// (0x000305bf) list_notes_text_pane_ParamLimits

0x1503,	// (0x000305bf) list_notes_text_pane

0xa49a,	// (0x00039556) list_notes_text_pane_g1

0x1517,	// (0x000305d3) list_notes_text_pane_t1

0x1525,	// (0x000305e1) listscroll_cale_week_pane

0x155b,	// (0x00030617) bg_cale_heading_pane

0x1584,	// (0x00030640) bg_cale_pane_cp01

0x15a6,	// (0x00030662) cale_week_corner_pane

0x15c5,	// (0x00030681) cale_week_day_heading_pane

0x15f3,	// (0x000306af) cale_week_scroll_pane_g1

0x1617,	// (0x000306d3) cale_week_scroll_pane_g2

0x162f,	// (0x000306eb) cale_week_scroll_pane_g3

0x1647,	// (0x00030703) cale_week_scroll_pane_g4

0x1663,	// (0x0003071f) cale_week_scroll_pane_g5

0x1683,	// (0x0003073f) cale_week_scroll_pane_g6

0x16a3,	// (0x0003075f) cale_week_scroll_pane_g7

0x16c7,	// (0x00030783) cale_week_scroll_pane_g8

0x16eb,	// (0x000307a7) cale_week_scroll_pane_g9

0x1708,	// (0x000307c4) cale_week_scroll_pane_g10

0x1725,	// (0x000307e1) cale_week_scroll_pane_g11

0x1742,	// (0x000307fe) cale_week_scroll_pane_g12

0x175f,	// (0x0003081b) cale_week_scroll_pane_g13

0x177c,	// (0x00030838) cale_week_scroll_pane_g14

0x17a5,	// (0x00030861) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0003e26c) cale_week_scroll_pane_g

0x17f2,	// (0x000308ae) cale_week_time_pane

0x1816,	// (0x000308d2) grid_cale_week_pane

0xa4c6,	// (0x00039582) scroll_pane_cp08

0x184d,	// (0x00030909) cell_cale_week_pane_ParamLimits

0x184d,	// (0x00030909) cell_cale_week_pane

0x18dd,	// (0x00030999) cale_week_day_heading_pane_t1

0x1927,	// (0x000309e3) cale_week_day_heading_pane_t2

0x1976,	// (0x00030a32) cale_week_day_heading_pane_t3

0x19c5,	// (0x00030a81) cale_week_day_heading_pane_t4

0x1a14,	// (0x00030ad0) cale_week_day_heading_pane_t5

0x1a67,	// (0x00030b23) cale_week_day_heading_pane_t6

0x1abe,	// (0x00030b7a) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0003e28d) cale_week_day_heading_pane_t

0xa4e8,	// (0x000395a4) bg_cale_side_pane

0xfcb7,	// (0x0002ed73) cale_week_time_pane_t1

0xfcf1,	// (0x0002edad) cale_week_time_pane_t2

0xfd2b,	// (0x0002ede7) cale_week_time_pane_t3

0xfd65,	// (0x0002ee21) cale_week_time_pane_t4

0xfd9f,	// (0x0002ee5b) cale_week_time_pane_t5

0xfdd9,	// (0x0002ee95) cale_week_time_pane_t6

0xfe13,	// (0x0002eecf) cale_week_time_pane_t7

0xfe4d,	// (0x0002ef09) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0003e29c) cale_week_time_pane_t

0x1b08,	// (0x00030bc4) cell_cale_week_pane_g2

0x1b27,	// (0x00030be3) cell_cale_week_pane_g3_ParamLimits

0x1b27,	// (0x00030be3) cell_cale_week_pane_g3

0xa4f6,	// (0x000395b2) grid_highlight_pane_cp07

0xa4fe,	// (0x000395ba) listscroll_gms_pane

0xa508,	// (0x000395c4) grid_gms_pane

0xa511,	// (0x000395cd) listscroll_gms_pane_g1

0xa519,	// (0x000395d5) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0003e2ad) listscroll_gms_pane_g

0x1b3f,	// (0x00030bfb) scroll_pane_cp010

0x1b4a,	// (0x00030c06) cell_gms_pane_ParamLimits

0x1b4a,	// (0x00030c06) cell_gms_pane

0x1b64,	// (0x00030c20) cell_gms_pane_g1

0xa521,	// (0x000395dd) cell_gms_pane_g2

0xa529,	// (0x000395e5) cell_gms_pane_g3

0xa532,	// (0x000395ee) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003e2b2) cell_gms_pane_g

0xa53b,	// (0x000395f7) grid_highlight_pane_cp09

0x4430,	// (0x000334ec) phob_pre_status_pane_g1

0x4438,	// (0x000334f4) phob_pre_status_pane_g2

0x4440,	// (0x000334fc) phob_pre_status_pane_g3

0x4448,	// (0x00033504) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0003e69d) phob_pre_status_pane_g

0x4458,	// (0x00033514) phob_pre_status_pane_t1

0x4468,	// (0x00033524) phob_pre_status_pane_t2

0x4478,	// (0x00033534) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0003e6a8) phob_pre_status_pane_t

0xa543,	// (0x000395ff) bg_list_pane_cp05

0x1b74,	// (0x00030c30) grid_vorec_pane

0x1b80,	// (0x00030c3c) vorec_t1

0x1b8e,	// (0x00030c4a) vorec_t2

0x1b9c,	// (0x00030c58) vorec_t3

0x1baa,	// (0x00030c66) vorec_t4

0x0e3c,	// (0x0002fef8) vorec_t5

0x0e4a,	// (0x0002ff06) vorec_t6

0x0004,

0xf1ff,	// (0x0003e2bb) vorec_t

0x0e58,	// (0x0002ff14) wait_bar_pane_cp01

0x1bc6,	// (0x00030c82) cell_vorec_pane_ParamLimits

0x1bc6,	// (0x00030c82) cell_vorec_pane

0x1bdb,	// (0x00030c97) cell_vorec_pane_g1

0xa06d,	// (0x00039129) grid_highlight_pane_cp05

0x1bfb,	// (0x00030cb7) cams_zoom_pane

0x1c0a,	// (0x00030cc6) image_vga_pane

0x1c24,	// (0x00030ce0) main_camera_pane_g1

0x1c36,	// (0x00030cf2) main_camera_pane_g2

0x1c46,	// (0x00030d02) main_camera_pane_g3

0x1c5a,	// (0x00030d16) main_camera_pane_g4

0x1c6e,	// (0x00030d2a) main_camera_pane_g5

0x1c82,	// (0x00030d3e) main_camera_pane_g6

0x1c96,	// (0x00030d52) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003e2c6) main_camera_pane_g

0x1caa,	// (0x00030d66) main_camera_pane_t1

0x1cc0,	// (0x00030d7c) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003e2d7) main_camera_pane_t

0x1cfe,	// (0x00030dba) cams_zoom_pane_cp_ParamLimits

0x1cfe,	// (0x00030dba) cams_zoom_pane_cp

0x1d26,	// (0x00030de2) image_cif_pane_ParamLimits

0x1d26,	// (0x00030de2) image_cif_pane

0x1d61,	// (0x00030e1d) image_subqcif_pane

0x1d6b,	// (0x00030e27) main_video_pane_g1_ParamLimits

0x1d6b,	// (0x00030e27) main_video_pane_g1

0x1d8f,	// (0x00030e4b) main_video_pane_g2_ParamLimits

0x1d8f,	// (0x00030e4b) main_video_pane_g2

0x1dc5,	// (0x00030e81) main_video_pane_g3_ParamLimits

0x1dc5,	// (0x00030e81) main_video_pane_g3

0x1df3,	// (0x00030eaf) main_video_pane_g4_ParamLimits

0x1df3,	// (0x00030eaf) main_video_pane_g4

0x1e21,	// (0x00030edd) main_video_pane_g5_ParamLimits

0x1e21,	// (0x00030edd) main_video_pane_g5

0xa557,	// (0x00039613) main_video_pane_g6_ParamLimits

0xa557,	// (0x00039613) main_video_pane_g6

0x0006,

0xf220,	// (0x0003e2dc) main_video_pane_g_ParamLimits

0xf220,	// (0x0003e2dc) main_video_pane_g

0x1e4a,	// (0x00030f06) main_video_pane_t1_ParamLimits

0x1e4a,	// (0x00030f06) main_video_pane_t1

0xa571,	// (0x0003962d) cams_zoom_pane_g1

0xa57a,	// (0x00039636) cams_zoom_pane_g2

0xa583,	// (0x0003963f) cams_zoom_pane_g3

0xa58c,	// (0x00039648) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003e2eb) cams_zoom_pane_g

0x1ea7,	// (0x00030f63) grid_cams_pane

0x1ec1,	// (0x00030f7d) linegrid_cams_pane

0x1ed3,	// (0x00030f8f) cell_cams_pane_ParamLimits

0x1ed3,	// (0x00030f8f) cell_cams_pane

0xa595,	// (0x00039651) cams_burst_image_pane

0xa59d,	// (0x00039659) cell_cams_pane_g1

0xa06d,	// (0x00039129) grid_highlight_pane_cp03

0xa3e2,	// (0x0003949e) mp_bg_pane_g1

0xa06d,	// (0x00039129) bg_list_pane_cp03

0xc1fd,	// (0x0003b2b9) bg_mp_pane

0xc205,	// (0x0003b2c1) grid_mp_pane

0xc20d,	// (0x0003b2c9) media_player_g1

0xc217,	// (0x0003b2d3) media_player_t1

0xc231,	// (0x0003b2ed) media_player_t2

0xc23f,	// (0x0003b2fb) media_player_t3

0xc24d,	// (0x0003b309) media_player_t4

0xc25b,	// (0x0003b317) media_player_t5

0xc269,	// (0x0003b325) media_player_t6

0xc277,	// (0x0003b333) media_player_t7

0x0006,

0xf5cb,	// (0x0003e687) media_player_t

0xc285,	// (0x0003b341) wait_bar_pane_cp02

0xf5b0,	// (0x0003e66c) main_usb_pane_t

0x4427,	// (0x000334e3) cell_mp_pane

0xa3e2,	// (0x0003949e) cell_mp_pane_g1

0xa06d,	// (0x00039129) grid_highlight_pane_cp06

0xa5a5,	// (0x00039661) grid_skin_colour_pane

0xa5ad,	// (0x00039669) list_highlight_pane_cp03

0x1ff9,	// (0x000310b5) skin_g1

0xa5b5,	// (0x00039671) skin_t1

0xa5c4,	// (0x00039680) skin_t2

0x0001,

0xf264,	// (0x0003e320) skin_t

0x2001,	// (0x000310bd) cell_skin_colour_pane_ParamLimits

0x2001,	// (0x000310bd) cell_skin_colour_pane

0xa5d2,	// (0x0003968e) cell_skin_colour_pane_g1

0x2074,	// (0x00031130) call_video_g1_ParamLimits

0x2074,	// (0x00031130) call_video_g1

0x2090,	// (0x0003114c) call_video_g2_ParamLimits

0x2090,	// (0x0003114c) call_video_g2

0x0001,

0xf269,	// (0x0003e325) call_video_g_ParamLimits

0xf269,	// (0x0003e325) call_video_g

0x20d5,	// (0x00031191) call_video_uplink_pane_cp1_ParamLimits

0x20d5,	// (0x00031191) call_video_uplink_pane_cp1

0xa5e4,	// (0x000396a0) call_video_uplink_pane_cp2

0x2176,	// (0x00031232) video_down_crop_pane_ParamLimits

0x2176,	// (0x00031232) video_down_crop_pane

0x225f,	// (0x0003131b) video_down_pane_ParamLimits

0x225f,	// (0x0003131b) video_down_pane

0xa5ec,	// (0x000396a8) video_down_subqcif_pane_ParamLimits

0xa5ec,	// (0x000396a8) video_down_subqcif_pane

0xa606,	// (0x000396c2) video_down_subqcif_pane_cp_ParamLimits

0xa606,	// (0x000396c2) video_down_subqcif_pane_cp

0xa62e,	// (0x000396ea) im_reading_pane_ParamLimits

0xa62e,	// (0x000396ea) im_reading_pane

0x2368,	// (0x00031424) im_writing_pane_ParamLimits

0x2368,	// (0x00031424) im_writing_pane

0x2384,	// (0x00031440) im_reading_pane_t1

0xa648,	// (0x00039704) list_im_pane

0xa659,	// (0x00039715) scroll_pane_cp07

0x23c0,	// (0x0003147c) im_writing_pane_t1_ParamLimits

0x23c0,	// (0x0003147c) im_writing_pane_t1

0xa672,	// (0x0003972e) im_writing_pane_t2_ParamLimits

0xa672,	// (0x0003972e) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003e32f) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003e32f) im_writing_pane_t

0xa06d,	// (0x00039129) input_focus_pane_cp04

0xa06d,	// (0x00039129) input_focus_pane_cp05

0x23d5,	// (0x00031491) list_im_single_pane_ParamLimits

0x23d5,	// (0x00031491) list_im_single_pane

0x23eb,	// (0x000314a7) list_single_im_pane_t1

0x43e7,	// (0x000334a3) blid_accuracy_pane

0x43ef,	// (0x000334ab) blid_compass_pane

0x43f9,	// (0x000334b5) main_location_t1

0x4409,	// (0x000334c5) main_location_t2

0x4419,	// (0x000334d5) main_location_t3

0x0002,

0xf5da,	// (0x0003e696) main_location_t

0xa06d,	// (0x00039129) aid_levels_location

0xa3e2,	// (0x0003949e) blid_accuracy_pane_g1

0xa3e2,	// (0x0003949e) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003e391) blid_accuracy_pane_g

0xa6ba,	// (0x00039776) wml_content_pane

0xa6f8,	// (0x000397b4) wml_button_pane_ParamLimits

0xa6f8,	// (0x000397b4) wml_button_pane

0x23fa,	// (0x000314b6) wml_list_single_large_pane_ParamLimits

0x23fa,	// (0x000314b6) wml_list_single_large_pane

0x2410,	// (0x000314cc) wml_list_single_medium_pane_ParamLimits

0x2410,	// (0x000314cc) wml_list_single_medium_pane

0x2427,	// (0x000314e3) wml_list_single_small_pane_ParamLimits

0x2427,	// (0x000314e3) wml_list_single_small_pane

0xa70c,	// (0x000397c8) wml_selection_box_pane_ParamLimits

0xa70c,	// (0x000397c8) wml_selection_box_pane

0xa71f,	// (0x000397db) wml_list_single_pane_t1

0xa72e,	// (0x000397ea) wml_list_single_medium_pane_t1

0xa73d,	// (0x000397f9) wml_list_single_large_pane_t1

0xa74c,	// (0x00039808) input_focus_pane_cp02_ParamLimits

0xa74c,	// (0x00039808) input_focus_pane_cp02

0xa75f,	// (0x0003981b) wml_selection_box_pane_g1

0xa768,	// (0x00039824) wml_selection_box_pane_t1_ParamLimits

0xa768,	// (0x00039824) wml_selection_box_pane_t1

0xa2c8,	// (0x00039384) bg_wml_button_pane_ParamLimits

0xa2c8,	// (0x00039384) bg_wml_button_pane

0xa780,	// (0x0003983c) wml_button_pane_g1

0xa788,	// (0x00039844) wml_button_pane_t1

0xa780,	// (0x0003983c) wml_button_bg_pane_g1

0xa798,	// (0x00039854) wml_button_bg_pane_g2

0xa7a0,	// (0x0003985c) wml_button_bg_pane_g3

0xa7a8,	// (0x00039864) wml_button_bg_pane_g4

0xa7b0,	// (0x0003986c) wml_button_bg_pane_g5

0xa7b8,	// (0x00039874) wml_button_bg_pane_g6

0xa7c0,	// (0x0003987c) wml_button_bg_pane_g7

0xa7c8,	// (0x00039884) wml_button_bg_pane_g8

0xa7d0,	// (0x0003988c) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003e334) wml_button_bg_pane_g

0x2443,	// (0x000314ff) bg_list_pane_cp02

0xa7d8,	// (0x00039894) mce_header_pane_ParamLimits

0xa7d8,	// (0x00039894) mce_header_pane

0xa7ee,	// (0x000398aa) mce_icon_pane

0xa7ee,	// (0x000398aa) mce_image_pane

0xa7f7,	// (0x000398b3) mce_text_pane_ParamLimits

0xa7f7,	// (0x000398b3) mce_text_pane

0x244d,	// (0x00031509) scroll_pane_cp03

0xa6f0,	// (0x000397ac) scroll_pane_cp04

0xa80a,	// (0x000398c6) scroll_pane_cp05_ParamLimits

0xa80a,	// (0x000398c6) scroll_pane_cp05

0x2457,	// (0x00031513) mce_header_field_pane_ParamLimits

0x2457,	// (0x00031513) mce_header_field_pane

0x2470,	// (0x0003152c) mce_header_field_pane_2_ParamLimits

0x2470,	// (0x0003152c) mce_header_field_pane_2

0x2486,	// (0x00031542) mce_header_field_pane_3

0x248e,	// (0x0003154a) list_single_mce_message_pane_ParamLimits

0x248e,	// (0x0003154a) list_single_mce_message_pane

0x24a7,	// (0x00031563) list_single_mce_smart_pane_ParamLimits

0x24a7,	// (0x00031563) list_single_mce_smart_pane

0xa816,	// (0x000398d2) input_focus_pane_cp03

0xa81f,	// (0x000398db) list_header_data_pane

0x24cb,	// (0x00031587) mce_header_field_pane_t1

0x24db,	// (0x00031597) list_single_mce_header_pane_ParamLimits

0x24db,	// (0x00031597) list_single_mce_header_pane

0xa827,	// (0x000398e3) list_single_mce_header_pane_t1

0xa836,	// (0x000398f2) list_single_mce_message_pane_g1

0xa83e,	// (0x000398fa) list_single_mce_message_pane_t1

0x2515,	// (0x000315d1) bg_cale_heading_pane_cp01_ParamLimits

0x2515,	// (0x000315d1) bg_cale_heading_pane_cp01

0xa84c,	// (0x00039908) bg_cale_pane_cp02_ParamLimits

0xa84c,	// (0x00039908) bg_cale_pane_cp02

0x255c,	// (0x00031618) cale_month_corner_pane

0x257b,	// (0x00031637) cale_month_day_heading_pane_ParamLimits

0x257b,	// (0x00031637) cale_month_day_heading_pane

0x25da,	// (0x00031696) cale_month_pane_g1_ParamLimits

0x25da,	// (0x00031696) cale_month_pane_g1

0x2616,	// (0x000316d2) cale_month_pane_g2_ParamLimits

0x2616,	// (0x000316d2) cale_month_pane_g2

0x2652,	// (0x0003170e) cale_month_pane_g3_ParamLimits

0x2652,	// (0x0003170e) cale_month_pane_g3

0x26a6,	// (0x00031762) cale_month_pane_g4_ParamLimits

0x26a6,	// (0x00031762) cale_month_pane_g4

0x26fa,	// (0x000317b6) cale_month_pane_g5_ParamLimits

0x26fa,	// (0x000317b6) cale_month_pane_g5

0x2756,	// (0x00031812) cale_month_pane_g6_ParamLimits

0x2756,	// (0x00031812) cale_month_pane_g6

0x27ba,	// (0x00031876) cale_month_pane_g7_ParamLimits

0x27ba,	// (0x00031876) cale_month_pane_g7

0x2826,	// (0x000318e2) cale_month_pane_g8_ParamLimits

0x2826,	// (0x000318e2) cale_month_pane_g8

0x2892,	// (0x0003194e) cale_month_pane_g9_ParamLimits

0x2892,	// (0x0003194e) cale_month_pane_g9

0x28f0,	// (0x000319ac) cale_month_pane_g10_ParamLimits

0x28f0,	// (0x000319ac) cale_month_pane_g10

0x2942,	// (0x000319fe) cale_month_pane_g11_ParamLimits

0x2942,	// (0x000319fe) cale_month_pane_g11

0x2994,	// (0x00031a50) cale_month_pane_g12_ParamLimits

0x2994,	// (0x00031a50) cale_month_pane_g12

0x29ec,	// (0x00031aa8) cale_month_pane_g13_ParamLimits

0x29ec,	// (0x00031aa8) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003e347) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003e347) cale_month_pane_g

0x2a44,	// (0x00031b00) cale_month_week_pane

0x2a68,	// (0x00031b24) grid_cale_month_pane_ParamLimits

0x2a68,	// (0x00031b24) grid_cale_month_pane

0x2abe,	// (0x00031b7a) cale_month_day_heading_pane_t1

0x2b44,	// (0x00031c00) cale_month_day_heading_pane_t2

0x2bd5,	// (0x00031c91) cale_month_day_heading_pane_t3

0x2c66,	// (0x00031d22) cale_month_day_heading_pane_t4

0x2cf7,	// (0x00031db3) cale_month_day_heading_pane_t5

0x2d98,	// (0x00031e54) cale_month_day_heading_pane_t6

0x2e3d,	// (0x00031ef9) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003e362) cale_month_day_heading_pane_t

0xa4e8,	// (0x000395a4) bg_cale_side_pane_cp01

0x2ee6,	// (0x00031fa2) cale_month_week_pane_t1

0x2eff,	// (0x00031fbb) cale_month_week_pane_t2

0x2f18,	// (0x00031fd4) cale_month_week_pane_t3

0x2f31,	// (0x00031fed) cale_month_week_pane_t4

0x2f4a,	// (0x00032006) cale_month_week_pane_t5

0x2f63,	// (0x0003201f) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003e371) cale_month_week_pane_t

0x2f82,	// (0x0003203e) cell_cale_month_pane_ParamLimits

0x2f82,	// (0x0003203e) cell_cale_month_pane

0x30d6,	// (0x00032192) cell_cale_month_pane_g1

0xfe8d,	// (0x0002ef49) cell_cale_month_pane_t1_ParamLimits

0xfe8d,	// (0x0002ef49) cell_cale_month_pane_t1

0xa4f6,	// (0x000395b2) grid_highlight_pane_cp08

0xa3e2,	// (0x0003949e) main_smil_g1

0x30e2,	// (0x0003219e) smil_status_pane

0xa88b,	// (0x00039947) smil_text_pane

0xc11b,	// (0x0003b1d7) bg_popup_call3_rect_pane_g8

0xc123,	// (0x0003b1df) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003e62a) bg_popup_call3_rect_pane_g

0xc3bd,	// (0x0003b479) smil_status_volume_pane_g1

0x30f5,	// (0x000321b1) smil_status_pane_t1

0x4a2c,	// (0x00033ae8) volume_smil_pane

0xa895,	// (0x00039951) list_smil_text_pane

0x310e,	// (0x000321ca) scroll_pane_cp011

0x3119,	// (0x000321d5) smil_text_list_pane_t1_ParamLimits

0x3119,	// (0x000321d5) smil_text_list_pane_t1

0x3152,	// (0x0003220e) aid_volume_smil_ParamLimits

0x3152,	// (0x0003220e) aid_volume_smil

0xa3e2,	// (0x0003949e) smil_volume_pane_g1

0xa3e2,	// (0x0003949e) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003e391) smil_volume_pane_g

0x1525,	// (0x000305e1) listscroll_cale_day_pane

0xa89f,	// (0x0003995b) bg_cale_pane

0xa8b7,	// (0x00039973) list_cale_pane

0xa8da,	// (0x00039996) scroll_pane_cp09

0xa8eb,	// (0x000399a7) cale_bg_pane_g1

0xa8f3,	// (0x000399af) cale_bg_pane_g2

0xa8fb,	// (0x000399b7) cale_bg_pane_g3

0xa903,	// (0x000399bf) cale_bg_pane_g4

0xa90b,	// (0x000399c7) cale_bg_pane_g5

0xa913,	// (0x000399cf) cale_bg_pane_g6

0xa91b,	// (0x000399d7) cale_bg_pane_g7

0xa923,	// (0x000399df) cale_bg_pane_g8

0xa92b,	// (0x000399e7) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003e396) cale_bg_pane_g

0x3174,	// (0x00032230) list_cale_time_pane_ParamLimits

0x3174,	// (0x00032230) list_cale_time_pane

0xa93b,	// (0x000399f7) list_cale_time_pane_g1_ParamLimits

0xa93b,	// (0x000399f7) list_cale_time_pane_g1

0xa947,	// (0x00039a03) list_cale_time_pane_g2_ParamLimits

0xa947,	// (0x00039a03) list_cale_time_pane_g2

0x3188,	// (0x00032244) list_cale_time_pane_g3_ParamLimits

0x3188,	// (0x00032244) list_cale_time_pane_g3

0x3196,	// (0x00032252) list_cale_time_pane_g4_ParamLimits

0x3196,	// (0x00032252) list_cale_time_pane_g4

0x31a4,	// (0x00032260) list_cale_time_pane_g5_ParamLimits

0x31a4,	// (0x00032260) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003e3a9) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003e3a9) list_cale_time_pane_g

0xa961,	// (0x00039a1d) list_cale_time_pane_t1_ParamLimits

0xa961,	// (0x00039a1d) list_cale_time_pane_t1

0xa989,	// (0x00039a45) list_cale_time_pane_t2_ParamLimits

0xa989,	// (0x00039a45) list_cale_time_pane_t2

0x35b2,	// (0x0003266e) aid_blid_cardinal_pane

0x35f0,	// (0x000326ac) compass_pane_t4

0xa9b1,	// (0x00039a6d) list_cale_time_pane_t4_ParamLimits

0xa9b1,	// (0x00039a6d) list_cale_time_pane_t4

0x35fe,	// (0x000326ba) compass_pane_t5

0x360c,	// (0x000326c8) compass_pane_t6

0x361a,	// (0x000326d6) compass_pane_t7

0xadbf,	// (0x00039e7b) navi_pane_cc_t1

0xaf26,	// (0x00039fe2) aid_phob_thumbnail_center_pane

0x3db2,	// (0x00032e6e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003e3b6) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003e3b6) list_cale_time_pane_t

0x9cc4,	// (0x00038d80) bg_popup_window_pane_cp02_ParamLimits

0x9cc4,	// (0x00038d80) bg_popup_window_pane_cp02

0xa9d9,	// (0x00039a95) heading_pane_cp01_ParamLimits

0xa9d9,	// (0x00039a95) heading_pane_cp01

0xa9e5,	// (0x00039aa1) loc_req_pane_ParamLimits

0xa9e5,	// (0x00039aa1) loc_req_pane

0xa9f5,	// (0x00039ab1) loc_type_pane_ParamLimits

0xa9f5,	// (0x00039ab1) loc_type_pane

0xaa07,	// (0x00039ac3) loc_type_pane_t1_ParamLimits

0xaa07,	// (0x00039ac3) loc_type_pane_t1

0xaa19,	// (0x00039ad5) loc_type_pane_t2_ParamLimits

0xaa19,	// (0x00039ad5) loc_type_pane_t2

0xaa2b,	// (0x00039ae7) loc_type_pane_t3_ParamLimits

0xaa2b,	// (0x00039ae7) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003e3bd) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003e3bd) loc_type_pane_t

0xaa3d,	// (0x00039af9) list_loc_req_pane

0xaa47,	// (0x00039b03) scroll_pane_cp012

0x31b2,	// (0x0003226e) list_single_loc_request_popup_menu_pane_ParamLimits

0x31b2,	// (0x0003226e) list_single_loc_request_popup_menu_pane

0xaa52,	// (0x00039b0e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa52,	// (0x00039b0e) list_single_loc_request_popup_menu_pane_g1

0xaa5e,	// (0x00039b1a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa5e,	// (0x00039b1a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003e3c4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003e3c4) list_single_loc_request_popup_menu_pane_g

0xaa6a,	// (0x00039b26) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa6a,	// (0x00039b26) list_single_loc_request_popup_menu_pane_t1

0xa2c8,	// (0x00039384) bg_popup_window_pane_cp03_ParamLimits

0xa2c8,	// (0x00039384) bg_popup_window_pane_cp03

0xaf08,	// (0x00039fc4) heading_loc_req_pane_ParamLimits

0xaf08,	// (0x00039fc4) heading_loc_req_pane

0x31bf,	// (0x0003227b) popup_dyc_status_message_window_g1_ParamLimits

0x31bf,	// (0x0003227b) popup_dyc_status_message_window_g1

0x31d3,	// (0x0003228f) popup_dyc_status_message_window_t1_ParamLimits

0x31d3,	// (0x0003228f) popup_dyc_status_message_window_t1

0x31e8,	// (0x000322a4) popup_dyc_status_message_window_t2_ParamLimits

0x31e8,	// (0x000322a4) popup_dyc_status_message_window_t2

0x31fd,	// (0x000322b9) popup_dyc_status_message_window_t3_ParamLimits

0x31fd,	// (0x000322b9) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003e3c9) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003e3c9) popup_dyc_status_message_window_t

0xa06d,	// (0x00039129) bg_heading_pane_cp01

0xaa80,	// (0x00039b3c) heading_loc_req_pane_g1

0xaa88,	// (0x00039b44) heading_loc_req_pane_g2

0xaa90,	// (0x00039b4c) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003e3d0) heading_loc_req_pane_g

0xaa98,	// (0x00039b54) heading_loc_req_pane_t1

0xaaa8,	// (0x00039b64) bg_popup_sub_pane_cp01_ParamLimits

0xaaa8,	// (0x00039b64) bg_popup_sub_pane_cp01

0xaab6,	// (0x00039b72) popup_cale_events_window_g1_ParamLimits

0xaab6,	// (0x00039b72) popup_cale_events_window_g1

0xaad6,	// (0x00039b92) popup_cale_events_window_g2_ParamLimits

0xaad6,	// (0x00039b92) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003e404) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003e404) popup_cale_events_window_g

0xaaf6,	// (0x00039bb2) popup_cale_events_window_t1_ParamLimits

0xaaf6,	// (0x00039bb2) popup_cale_events_window_t1

0xab08,	// (0x00039bc4) popup_cale_events_window_t2_ParamLimits

0xab08,	// (0x00039bc4) popup_cale_events_window_t2

0xab46,	// (0x00039c02) popup_cale_events_window_t3_ParamLimits

0xab46,	// (0x00039c02) popup_cale_events_window_t3

0xab80,	// (0x00039c3c) popup_cale_events_window_t4_ParamLimits

0xab80,	// (0x00039c3c) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003e409) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003e409) popup_cale_events_window_t

0x3302,	// (0x000323be) call_type_pane

0x3312,	// (0x000323ce) popup_call_status_window_g1

0x3326,	// (0x000323e2) popup_call_status_window_g2

0x333a,	// (0x000323f6) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003e412) popup_call_status_window_g

0xabb6,	// (0x00039c72) call_type_pane_g1

0xabbf,	// (0x00039c7b) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003e419) call_type_pane_g

0xa06d,	// (0x00039129) bg_popup_sub_pane_cp02

0xabc8,	// (0x00039c84) listscroll_popup_wml_pane

0xabd0,	// (0x00039c8c) list_wml_pane

0xabda,	// (0x00039c96) scroll_pane_cp013

0xabe5,	// (0x00039ca1) list_single_graphic_popup_wml_pane_ParamLimits

0xabe5,	// (0x00039ca1) list_single_graphic_popup_wml_pane

0xa3e2,	// (0x0003949e) list_single_graphic_popup_wml_pane_g1

0xabf9,	// (0x00039cb5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003e41e) list_single_graphic_popup_wml_pane_g

0xac01,	// (0x00039cbd) list_single_graphic_popup_wml_pane_t1

0xac17,	// (0x00039cd3) aid_call_pane

0xa2c0,	// (0x0003937c) popup_clock_analogue_window_g1

0xa2c0,	// (0x0003937c) popup_clock_analogue_window_g2

0x334a,	// (0x00032406) popup_clock_analogue_window_g3

0x334a,	// (0x00032406) popup_clock_analogue_window_g4

0xa3e2,	// (0x0003949e) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003e423) popup_clock_analogue_window_g

0x3352,	// (0x0003240e) popup_clock_analogue_window_t1

0x3360,	// (0x0003241c) clock_digital_number_pane_ParamLimits

0x3360,	// (0x0003241c) clock_digital_number_pane

0x336c,	// (0x00032428) clock_digital_number_pane_cp02_ParamLimits

0x336c,	// (0x00032428) clock_digital_number_pane_cp02

0x3378,	// (0x00032434) clock_digital_number_pane_cp03_ParamLimits

0x3378,	// (0x00032434) clock_digital_number_pane_cp03

0x3384,	// (0x00032440) clock_digital_number_pane_cp04_ParamLimits

0x3384,	// (0x00032440) clock_digital_number_pane_cp04

0x3390,	// (0x0003244c) clock_digital_separator_pane_ParamLimits

0x3390,	// (0x0003244c) clock_digital_separator_pane

0x339c,	// (0x00032458) popup_clock_digital_window_t1

0xa3e2,	// (0x0003949e) clock_digital_number_pane_g1

0xa3e2,	// (0x0003949e) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003e391) clock_digital_number_pane_g

0xa3e2,	// (0x0003949e) clock_digital_separator_pane_g1

0xa3e2,	// (0x0003949e) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003e391) clock_digital_separator_pane_g

0xa06d,	// (0x00039129) bg_popup_window_pane_cp04

0xac1f,	// (0x00039cdb) heading_pane_cp03

0xac27,	// (0x00039ce3) listscroll_popup_gms_pane

0xac2f,	// (0x00039ceb) grid_large_graphic_popup_pane

0xac39,	// (0x00039cf5) listscroll_popup_gms_pane_g1

0xac41,	// (0x00039cfd) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003e42e) listscroll_popup_gms_pane_g

0xa6f0,	// (0x000397ac) scroll_pane_cp014

0x33b9,	// (0x00032475) cell_large_graphic_popup_pane_ParamLimits

0x33b9,	// (0x00032475) cell_large_graphic_popup_pane

0x33d1,	// (0x0003248d) cell_large_graphic_popup_pane_g1_ParamLimits

0x33d1,	// (0x0003248d) cell_large_graphic_popup_pane_g1

0xac49,	// (0x00039d05) cell_large_graphic_popup_pane_g2_ParamLimits

0xac49,	// (0x00039d05) cell_large_graphic_popup_pane_g2

0xac55,	// (0x00039d11) cell_large_graphic_popup_pane_g3_ParamLimits

0xac55,	// (0x00039d11) cell_large_graphic_popup_pane_g3

0xac62,	// (0x00039d1e) cell_large_graphic_popup_pane_g4_ParamLimits

0xac62,	// (0x00039d1e) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003e433) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003e433) cell_large_graphic_popup_pane_g

0xac72,	// (0x00039d2e) grid_highlight_pane_cp010

0xa3e2,	// (0x0003949e) bg_popup_call_pane_g1

0xac7c,	// (0x00039d38) list_single_graphic_popup_conf_pane_ParamLimits

0xac7c,	// (0x00039d38) list_single_graphic_popup_conf_pane

0xac8e,	// (0x00039d4a) list_highlight_pane_cp01

0xac97,	// (0x00039d53) list_single_graphic_popup_conf_pane_g1

0xac9f,	// (0x00039d5b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003e43c) list_single_graphic_popup_conf_pane_g

0xaca7,	// (0x00039d63) list_single_graphic_popup_conf_pane_t1

0xacb5,	// (0x00039d71) linegrid_cams_pane_g1

0x33dd,	// (0x00032499) linegrid_cams_pane_g2

0xa529,	// (0x000395e5) linegrid_cams_pane_g3

0xacbe,	// (0x00039d7a) linegrid_cams_pane_g4

0x33e6,	// (0x000324a2) linegrid_cams_pane_g5

0x33ef,	// (0x000324ab) linegrid_cams_pane_g6

0xa532,	// (0x000395ee) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003e441) linegrid_cams_pane_g

0xacc7,	// (0x00039d83) popup_clock_analogue_window

0xacc7,	// (0x00039d83) popup_clock_digital_window

0xa06d,	// (0x00039129) popup_phob_thumbnail_window

0xa3e2,	// (0x0003949e) call_video_uplink_pane_g1

0xacd0,	// (0x00039d8c) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003e450) call_video_uplink_pane_g

0xacd8,	// (0x00039d94) video_uplink_pane

0xace0,	// (0x00039d9c) mce_image_pane_g1

0x33fa,	// (0x000324b6) mce_image_pane_g2

0x3404,	// (0x000324c0) mce_image_pane_g3

0x340e,	// (0x000324ca) mce_image_pane_g4

0x3416,	// (0x000324d2) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003e455) mce_image_pane_g

0xacea,	// (0x00039da6) control_top_pane_stacon_cp01_ParamLimits

0xacea,	// (0x00039da6) control_top_pane_stacon_cp01

0xacfe,	// (0x00039dba) uni_indicator_pane_stacon_cp01_ParamLimits

0xacfe,	// (0x00039dba) uni_indicator_pane_stacon_cp01

0xad0f,	// (0x00039dcb) bg_popup_sub_pane_cp03

0x341e,	// (0x000324da) chi_dic_find_pane

0x3426,	// (0x000324e2) listscroll_chi_dic_pane

0x342f,	// (0x000324eb) main_pane_chidic_g1

0x3442,	// (0x000324fe) chi_dic_find_pane_t1

0xad19,	// (0x00039dd5) find_chidic_pane

0xad22,	// (0x00039dde) chi_dic_list_pane_ParamLimits

0xad22,	// (0x00039dde) chi_dic_list_pane

0xad33,	// (0x00039def) scroll_pane_cp020

0x3450,	// (0x0003250c) find_chidic_pane_t1

0xa06d,	// (0x00039129) input_focus_pane_cp06

0x1237,	// (0x000302f3) list_chi_dic_pane_ParamLimits

0x1237,	// (0x000302f3) list_chi_dic_pane

0x345f,	// (0x0003251b) list_chi_dic_pane_t1_ParamLimits

0x345f,	// (0x0003251b) list_chi_dic_pane_t1

0xa06d,	// (0x00039129) list_highlight_pane_cp020

0xad3b,	// (0x00039df7) bg_cale_heading_pane_g1

0x3472,	// (0x0003252e) bg_cale_heading_pane_g2

0x347a,	// (0x00032536) bg_cale_heading_pane_g3

0x3482,	// (0x0003253e) bg_cale_heading_pane_g4

0x348c,	// (0x00032548) bg_cale_heading_pane_g5

0x3496,	// (0x00032552) bg_cale_heading_pane_g6

0x349e,	// (0x0003255a) bg_cale_heading_pane_g7

0x34a6,	// (0x00032562) bg_cale_heading_pane_g8

0x34b0,	// (0x0003256c) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003e460) bg_cale_heading_pane_g

0xad3b,	// (0x00039df7) bg_cale_side_pane_g1

0x34ba,	// (0x00032576) bg_cale_side_pane_g2

0x34c4,	// (0x00032580) bg_cale_side_pane_g3

0x34ce,	// (0x0003258a) bg_cale_side_pane_g4

0x34d8,	// (0x00032594) bg_cale_side_pane_g5

0x34e2,	// (0x0003259e) bg_cale_side_pane_g6

0x34ec,	// (0x000325a8) bg_cale_side_pane_g7

0x34f6,	// (0x000325b2) bg_cale_side_pane_g8

0x34fe,	// (0x000325ba) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003e473) bg_cale_side_pane_g

0x3506,	// (0x000325c2) popup_call_status_window_ParamLimits

0x3506,	// (0x000325c2) popup_call_status_window

0xad43,	// (0x00039dff) stacon_top_pane

0xad4b,	// (0x00039e07) status_pane_ParamLimits

0xad4b,	// (0x00039e07) status_pane

0xad60,	// (0x00039e1c) status_small_pane

0xad68,	// (0x00039e24) control_pane

0xa06d,	// (0x00039129) stacon_bottom_pane

0xad70,	// (0x00039e2c) list_single_mce_smart_pane_t1_ParamLimits

0xad70,	// (0x00039e2c) list_single_mce_smart_pane_t1

0xad83,	// (0x00039e3f) list_single_mce_smart_pane_t2_ParamLimits

0xad83,	// (0x00039e3f) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003e486) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003e486) list_single_mce_smart_pane_t

0x3553,	// (0x0003260f) compass_pane

0x355e,	// (0x0003261a) main_location2_pane_t1

0x3572,	// (0x0003262e) main_location2_pane_t2

0x3588,	// (0x00032644) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003e48b) main_location2_pane_t

0xada2,	// (0x00039e5e) compass_pane_g1_ParamLimits

0xada2,	// (0x00039e5e) compass_pane_g1

0x35d2,	// (0x0003268e) compass_pane_t1

0x35e1,	// (0x0003269d) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003e494) compass_pane_t

0x3628,	// (0x000326e4) text_secondary_cp61

0xadb6,	// (0x00039e72) navi_pane_cams_g5

0xadd9,	// (0x00039e95) navi_pane_im_t1

0xade7,	// (0x00039ea3) navi_pane_mp_g1_ParamLimits

0xade7,	// (0x00039ea3) navi_pane_mp_g1

0xadfb,	// (0x00039eb7) navi_pane_mp_g2_ParamLimits

0xadfb,	// (0x00039eb7) navi_pane_mp_g2

0xae07,	// (0x00039ec3) navi_pane_mp_g3_ParamLimits

0xae07,	// (0x00039ec3) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003e4a8) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003e4a8) navi_pane_mp_g

0xae13,	// (0x00039ecf) navi_pane_mp_t1

0xae21,	// (0x00039edd) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003e4af) navi_pane_mp_t

0xae5d,	// (0x00039f19) navi_pane_vt_g1

0xae13,	// (0x00039ecf) navi_pane_vt_t1

0xae65,	// (0x00039f21) navi_slider_pane

0xa543,	// (0x000395ff) zooming_pane

0xae6d,	// (0x00039f29) navi_slider_pane_g1

0x3771,	// (0x0003282d) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003e4b6) navi_slider_pane_g

0xae91,	// (0x00039f4d) aid_levels_zoom

0xae99,	// (0x00039f55) zooming_pane_g1

0xaea1,	// (0x00039f5d) zooming_pane_g2

0xaea1,	// (0x00039f5d) zooming_pane_g3

0x0002,

0xf409,	// (0x0003e4c5) zooming_pane_g

0xaea9,	// (0x00039f65) level_10_zoom

0xaeb2,	// (0x00039f6e) level_11_zoom

0xaebb,	// (0x00039f77) level_1_zoom

0xaec4,	// (0x00039f80) level_2_zoom

0xaecd,	// (0x00039f89) level_3_zoom

0xaed6,	// (0x00039f92) level_4_zoom

0xaedf,	// (0x00039f9b) level_5_zoom

0xaee8,	// (0x00039fa4) level_6_zoom

0xaef1,	// (0x00039fad) level_7_zoom

0xaf14,	// (0x00039fd0) level_8_zoom

0xaf1d,	// (0x00039fd9) level_9_zoom

0xaf2e,	// (0x00039fea) popup_phob_thumbnail_window_g1

0xaf36,	// (0x00039ff2) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003e4cc) popup_phob_thumbnail_window_g

0xc28d,	// (0x0003b349) level_1_location

0xc295,	// (0x0003b351) level_2_location

0xc29d,	// (0x0003b359) level_3_location

0xc2a5,	// (0x0003b361) level_4_location

0xa543,	// (0x000395ff) level_5_location

0x3783,	// (0x0003283f) mce_icon_pane_g1

0x378d,	// (0x00032849) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003e4d1) mce_icon_pane_g

0x3795,	// (0x00032851) main_mup_pane_g1_ParamLimits

0x3795,	// (0x00032851) main_mup_pane_g1

0x37ab,	// (0x00032867) main_mup_pane_g2_ParamLimits

0x37ab,	// (0x00032867) main_mup_pane_g2

0x37c3,	// (0x0003287f) main_mup_pane_g3_ParamLimits

0x37c3,	// (0x0003287f) main_mup_pane_g3

0x37db,	// (0x00032897) main_mup_pane_g4_ParamLimits

0x37db,	// (0x00032897) main_mup_pane_g4

0x37f3,	// (0x000328af) main_mup_pane_g5_ParamLimits

0x37f3,	// (0x000328af) main_mup_pane_g5

0x380f,	// (0x000328cb) main_mup_pane_g6_ParamLimits

0x380f,	// (0x000328cb) main_mup_pane_g6

0x3829,	// (0x000328e5) main_mup_pane_g7_ParamLimits

0x3829,	// (0x000328e5) main_mup_pane_g7

0x3847,	// (0x00032903) main_mup_pane_g8_ParamLimits

0x3847,	// (0x00032903) main_mup_pane_g8

0x3865,	// (0x00032921) main_mup_pane_g9_ParamLimits

0x3865,	// (0x00032921) main_mup_pane_g9

0x3881,	// (0x0003293d) main_mup_pane_g10_ParamLimits

0x3881,	// (0x0003293d) main_mup_pane_g10

0x389f,	// (0x0003295b) main_mup_pane_g11_ParamLimits

0x389f,	// (0x0003295b) main_mup_pane_g11

0x38b9,	// (0x00032975) main_mup_pane_g12_ParamLimits

0x38b9,	// (0x00032975) main_mup_pane_g12

0x38cf,	// (0x0003298b) main_mup_pane_g13_ParamLimits

0x38cf,	// (0x0003298b) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003e4d6) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003e4d6) main_mup_pane_g

0x38e3,	// (0x0003299f) main_mup_pane_t1_ParamLimits

0x38e3,	// (0x0003299f) main_mup_pane_t1

0x38ff,	// (0x000329bb) main_mup_pane_t2_ParamLimits

0x38ff,	// (0x000329bb) main_mup_pane_t2

0x3917,	// (0x000329d3) main_mup_pane_t3_ParamLimits

0x3917,	// (0x000329d3) main_mup_pane_t3

0x392f,	// (0x000329eb) main_mup_pane_t4_ParamLimits

0x392f,	// (0x000329eb) main_mup_pane_t4

0x394d,	// (0x00032a09) main_mup_pane_t5_ParamLimits

0x394d,	// (0x00032a09) main_mup_pane_t5

0x3962,	// (0x00032a1e) main_mup_pane_t6_ParamLimits

0x3962,	// (0x00032a1e) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003e4f1) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003e4f1) main_mup_pane_t

0x3974,	// (0x00032a30) mup_progress_pane_ParamLimits

0x3974,	// (0x00032a30) mup_progress_pane

0x3980,	// (0x00032a3c) mup_visualizer_pane_ParamLimits

0x3980,	// (0x00032a3c) mup_visualizer_pane

0x39b4,	// (0x00032a70) mup_volume_pane_ParamLimits

0x39b4,	// (0x00032a70) mup_volume_pane

0xaefa,	// (0x00039fb6) mup_visualizer_pane_g1_ParamLimits

0xaefa,	// (0x00039fb6) mup_visualizer_pane_g1

0xaefa,	// (0x00039fb6) mup_visualizer_pane_g2_ParamLimits

0xaefa,	// (0x00039fb6) mup_visualizer_pane_g2

0xada2,	// (0x00039e5e) mup_visualizer_pane_g3_ParamLimits

0xada2,	// (0x00039e5e) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003e4fe) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003e4fe) mup_visualizer_pane_g

0xa3e2,	// (0x0003949e) mup_volume_pane_g1

0xaf46,	// (0x0003a002) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003e505) mup_volume_pane_g

0xa3e2,	// (0x0003949e) mup_progress_pane_g1

0xaf4f,	// (0x0003a00b) mup_progress_pane_g2

0xaf58,	// (0x0003a014) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003e50a) mup_progress_pane_g

0xa06d,	// (0x00039129) bg_popup_window_pane_cp05

0xaf61,	// (0x0003a01d) heading_pane_cp02_ParamLimits

0xaf61,	// (0x0003a01d) heading_pane_cp02

0xaf7d,	// (0x0003a039) list_popup_blid_pane

0xaf85,	// (0x0003a041) list_blid_sat_info_pane_ParamLimits

0xaf85,	// (0x0003a041) list_blid_sat_info_pane

0xaf98,	// (0x0003a054) list_blid_sat_info_pane_g1

0xafa0,	// (0x0003a05c) list_blid_sat_info_pane_t1

0x3ade,	// (0x00032b9a) mup_equalizer_pane_ParamLimits

0x3ade,	// (0x00032b9a) mup_equalizer_pane

0x3aff,	// (0x00032bbb) mup_equalizer_pane_cp1_ParamLimits

0x3aff,	// (0x00032bbb) mup_equalizer_pane_cp1

0x3b20,	// (0x00032bdc) mup_equalizer_pane_cp2_ParamLimits

0x3b20,	// (0x00032bdc) mup_equalizer_pane_cp2

0x3b45,	// (0x00032c01) mup_equalizer_pane_cp3_ParamLimits

0x3b45,	// (0x00032c01) mup_equalizer_pane_cp3

0x3b6e,	// (0x00032c2a) mup_equalizer_pane_cp4_ParamLimits

0x3b6e,	// (0x00032c2a) mup_equalizer_pane_cp4

0x3b97,	// (0x00032c53) mup_equalizer_pane_cp5

0x3baf,	// (0x00032c6b) mup_equalizer_pane_cp6

0x3bc7,	// (0x00032c83) mup_equalizer_pane_cp7

0xc19b,	// (0x0003b257) bg_popup_call_poc_act_pane_g9

0xc1a3,	// (0x0003b25f) bg_popup_call_poc_act_pane_g10

0xc1ab,	// (0x0003b267) bg_popup_call_poc_act_pane_g11

0x000a,

0xa2c8,	// (0x00039384) mup_scale_pane

0xa3e2,	// (0x0003949e) mup_scale_pane_g1

0xafae,	// (0x0003a06a) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003e526) mup_scale_pane_g

0xafd2,	// (0x0003a08e) msg_data_pane

0xafda,	// (0x0003a096) scroll_pane_cp017

0x3bf1,	// (0x00032cad) bg_list_pane_cp04_ParamLimits

0x3bf1,	// (0x00032cad) bg_list_pane_cp04

0xafea,	// (0x0003a0a6) msg_data_pane_g1

0x3c11,	// (0x00032ccd) msg_data_pane_g2

0x3c1b,	// (0x00032cd7) msg_data_pane_g3

0x3c25,	// (0x00032ce1) msg_data_pane_g4

0x3c2d,	// (0x00032ce9) msg_data_pane_g5

0x3c35,	// (0x00032cf1) msg_data_pane_g6

0x3c3d,	// (0x00032cf9) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003e535) msg_data_pane_g

0x3c45,	// (0x00032d01) msg_text_pane_ParamLimits

0x3c45,	// (0x00032d01) msg_text_pane

0x3c6d,	// (0x00032d29) qrid_highlight_pane_cp011_ParamLimits

0x3c6d,	// (0x00032d29) qrid_highlight_pane_cp011

0xa06d,	// (0x00039129) msg_body_pane

0xa06d,	// (0x00039129) msg_header_pane

0xaffb,	// (0x0003a0b7) input_focus_pane_cp07

0xb010,	// (0x0003a0cc) msg_header_pane_t1_ParamLimits

0xb010,	// (0x0003a0cc) msg_header_pane_t1

0xb022,	// (0x0003a0de) msg_header_pane_t2_ParamLimits

0xb022,	// (0x0003a0de) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003e549) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003e549) msg_header_pane_t

0xb034,	// (0x0003a0f0) msg_body_pane_g1

0x3c91,	// (0x00032d4d) msg_body_pane_t1_ParamLimits

0x3c91,	// (0x00032d4d) msg_body_pane_t1

0xb03c,	// (0x0003a0f8) msg_body_pane_t2_ParamLimits

0xb03c,	// (0x0003a0f8) msg_body_pane_t2

0xb04e,	// (0x0003a10a) msg_body_pane_t3_ParamLimits

0xb04e,	// (0x0003a10a) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003e54e) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003e54e) msg_body_pane_t

0xfec9,	// (0x0002ef85) main_viewer_pane_g1_ParamLimits

0xfec9,	// (0x0002ef85) main_viewer_pane_g1

0xfed7,	// (0x0002ef93) main_viewer_pane_g2_ParamLimits

0xfed7,	// (0x0002ef93) main_viewer_pane_g2

0x3cf8,	// (0x00032db4) main_viewer_pane_g3_ParamLimits

0x3cf8,	// (0x00032db4) main_viewer_pane_g3

0x3d07,	// (0x00032dc3) main_viewer_pane_g4_ParamLimits

0x3d07,	// (0x00032dc3) main_viewer_pane_g4

0x3d16,	// (0x00032dd2) main_viewer_pane_g5_ParamLimits

0x3d16,	// (0x00032dd2) main_viewer_pane_g5

0x3d16,	// (0x00032dd2) main_viewer_pane_g7_ParamLimits

0x3d16,	// (0x00032dd2) main_viewer_pane_g7

0x3d28,	// (0x00032de4) main_viewer_pane_g8_ParamLimits

0x3d28,	// (0x00032de4) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003e55e) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003e55e) main_viewer_pane_g

0xb060,	// (0x0003a11c) viewer_content_pane_ParamLimits

0xb060,	// (0x0003a11c) viewer_content_pane

0x3d6f,	// (0x00032e2b) main_postcard_pane_g1_ParamLimits

0x3d6f,	// (0x00032e2b) main_postcard_pane_g1

0x3d85,	// (0x00032e41) main_postcard_pane_g2_ParamLimits

0x3d85,	// (0x00032e41) main_postcard_pane_g2

0x3d9b,	// (0x00032e57) main_postcard_pane_g3_ParamLimits

0x3d9b,	// (0x00032e57) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003e56f) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003e56f) main_postcard_pane_g

0x3db2,	// (0x00032e6e) main_postcard_pane_g4

0xc3d0,	// (0x0003b48c) smil_status_volume_pane_g2

0x3df5,	// (0x00032eb1) postcard_pane_ParamLimits

0x3df5,	// (0x00032eb1) postcard_pane

0xb06e,	// (0x0003a12a) postcard_pane_g1_ParamLimits

0xb06e,	// (0x0003a12a) postcard_pane_g1

0x3e45,	// (0x00032f01) postcard_pane_g2_ParamLimits

0x3e45,	// (0x00032f01) postcard_pane_g2

0x3e51,	// (0x00032f0d) postcard_pane_g3_ParamLimits

0x3e51,	// (0x00032f0d) postcard_pane_g3

0xb07c,	// (0x0003a138) postcard_pane_g4_ParamLimits

0xb07c,	// (0x0003a138) postcard_pane_g4

0x3e5d,	// (0x00032f19) postcard_pane_g5_ParamLimits

0x3e5d,	// (0x00032f19) postcard_pane_g5

0x3e72,	// (0x00032f2e) postcard_pane_g6_ParamLimits

0x3e72,	// (0x00032f2e) postcard_pane_g6

0xb06e,	// (0x0003a12a) postcard_pane_g7_ParamLimits

0xb06e,	// (0x0003a12a) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003e57c) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003e57c) postcard_pane_g

0x3e8a,	// (0x00032f46) main_mp2_pane_g1_ParamLimits

0x3e8a,	// (0x00032f46) main_mp2_pane_g1

0x3e98,	// (0x00032f54) main_mp2_pane_g2_ParamLimits

0x3e98,	// (0x00032f54) main_mp2_pane_g2

0x3ea4,	// (0x00032f60) main_mp2_pane_g3_ParamLimits

0x3ea4,	// (0x00032f60) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003e58b) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003e58b) main_mp2_pane_g

0x3eb0,	// (0x00032f6c) main_mp2_pane_t1_ParamLimits

0x3eb0,	// (0x00032f6c) main_mp2_pane_t1

0x3ec7,	// (0x00032f83) main_mp2_pane_t2_ParamLimits

0x3ec7,	// (0x00032f83) main_mp2_pane_t2

0x3ed9,	// (0x00032f95) main_mp2_pane_t3_ParamLimits

0x3ed9,	// (0x00032f95) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003e592) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003e592) main_mp2_pane_t

0xb08a,	// (0x0003a146) pec_content_pane_ParamLimits

0xb08a,	// (0x0003a146) pec_content_pane

0xa6f0,	// (0x000397ac) scroll_pane_cp015

0xb09c,	// (0x0003a158) pec_attribute_pane_ParamLimits

0xb09c,	// (0x0003a158) pec_attribute_pane

0x3eeb,	// (0x00032fa7) pec_content_pane_g1_ParamLimits

0x3eeb,	// (0x00032fa7) pec_content_pane_g1

0xb0ac,	// (0x0003a168) pec_content_pane_t1_ParamLimits

0xb0ac,	// (0x0003a168) pec_content_pane_t1

0xb0be,	// (0x0003a17a) pec_content_pane_t2_ParamLimits

0xb0be,	// (0x0003a17a) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003e599) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003e599) pec_content_pane_t

0x3ef7,	// (0x00032fb3) list_single_graphic_pane_cp01_ParamLimits

0x3ef7,	// (0x00032fb3) list_single_graphic_pane_cp01

0xa2c8,	// (0x00039384) bg_popup_sub_pane_cp04

0xb0d0,	// (0x0003a18c) popup_mup_playback_window_g1

0xb0dc,	// (0x0003a198) popup_mup_playback_window_t1

0xb0f1,	// (0x0003a1ad) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003e59e) popup_mup_playback_window_t

0xb128,	// (0x0003a1e4) main_image_pane_g1_ParamLimits

0xb128,	// (0x0003a1e4) main_image_pane_g1

0xb16b,	// (0x0003a227) scroll_pane_cp018_ParamLimits

0xb16b,	// (0x0003a227) scroll_pane_cp018

0xb183,	// (0x0003a23f) scroll_pane_cp016_ParamLimits

0xb183,	// (0x0003a23f) scroll_pane_cp016

0x3fc6,	// (0x00033082) smil2_image_pane_ParamLimits

0x3fc6,	// (0x00033082) smil2_image_pane

0x3ffc,	// (0x000330b8) smil2_root_pane_ParamLimits

0x3ffc,	// (0x000330b8) smil2_root_pane

0x4034,	// (0x000330f0) smil2_text_pane_ParamLimits

0x4034,	// (0x000330f0) smil2_text_pane

0xa06d,	// (0x00039129) bg_list_pane_cp06

0xb1bf,	// (0x0003a27b) grid_radio_pane

0xa06d,	// (0x00039129) bg_popup_window_pane_cp06

0xb1c9,	// (0x0003a285) main_fmradio_pane_t1

0xac1f,	// (0x00039cdb) heading_pane_cp04

0xb1d7,	// (0x0003a293) main_fmradio_pane_t2

0xc1b3,	// (0x0003b26f) popup_cale_lunar_info_window_g1

0xb1e5,	// (0x0003a2a1) main_fmradio_pane_t3

0xc1bb,	// (0x0003b277) popup_cale_lunar_info_window_g2

0xb1f5,	// (0x0003a2b1) main_fmradio_pane_t4

0x0001,

0xb203,	// (0x0003a2bf) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0003e679) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003e5b3) main_fmradio_pane_t

0xb211,	// (0x0003a2cd) wait_bar_pane_cp03

0xb219,	// (0x0003a2d5) cell_fmradio_pane_ParamLimits

0xb219,	// (0x0003a2d5) cell_fmradio_pane

0xb06e,	// (0x0003a12a) cell_fmradio_pane_g1_ParamLimits

0xb06e,	// (0x0003a12a) cell_fmradio_pane_g1

0xa06d,	// (0x00039129) grid_highlight_pane_cp011

0xb22e,	// (0x0003a2ea) poc_content_pane_ParamLimits

0xb22e,	// (0x0003a2ea) poc_content_pane

0xb240,	// (0x0003a2fc) scroll_pane_cp019

0x40c4,	// (0x00033180) popup_call_poc_act_window_ParamLimits

0x40c4,	// (0x00033180) popup_call_poc_act_window

0x40e8,	// (0x000331a4) popup_call_poc_inact_window_ParamLimits

0x40e8,	// (0x000331a4) popup_call_poc_inact_window

0xf594,	// (0x0003e650) bg_popup_call_poc_act_pane_g

0xc12b,	// (0x0003b1e7) bg_popup_call_poc_inact_pane_g1

0xc133,	// (0x0003b1ef) bg_popup_call_poc_inact_pane_g2

0xb248,	// (0x0003a304) popup_call_poc_act_window_g2

0xc13b,	// (0x0003b1f7) bg_popup_call_poc_inact_pane_g3

0xc143,	// (0x0003b1ff) bg_popup_call_poc_inact_pane_g4

0xc14b,	// (0x0003b207) bg_popup_call_poc_inact_pane_g5

0xb250,	// (0x0003a30c) popup_call_poc_act_window_t1_ParamLimits

0xb250,	// (0x0003a30c) popup_call_poc_act_window_t1

0xb278,	// (0x0003a334) popup_call_poc_act_window_t2_ParamLimits

0xb278,	// (0x0003a334) popup_call_poc_act_window_t2

0xb2a0,	// (0x0003a35c) popup_call_poc_act_window_t3_ParamLimits

0xb2a0,	// (0x0003a35c) popup_call_poc_act_window_t3

0xb2c8,	// (0x0003a384) popup_call_poc_act_window_t4_ParamLimits

0xb2c8,	// (0x0003a384) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003e5be) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003e5be) popup_call_poc_act_window_t

0xc153,	// (0x0003b20f) bg_popup_call_poc_inact_pane_g6

0xc15b,	// (0x0003b217) bg_popup_call_poc_inact_pane_g7

0xc163,	// (0x0003b21f) bg_popup_call_poc_inact_pane_g8

0xb2da,	// (0x0003a396) popup_call_poc_inact_window_g2

0xc16b,	// (0x0003b227) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0003e63d) bg_popup_call_poc_inact_pane_g

0xb2e2,	// (0x0003a39e) popup_call_poc_inact_window_t1_ParamLimits

0xb2e2,	// (0x0003a39e) popup_call_poc_inact_window_t1

0xb2f7,	// (0x0003a3b3) popup_call_poc_inact_window_t2_ParamLimits

0xb2f7,	// (0x0003a3b3) popup_call_poc_inact_window_t2

0xb30c,	// (0x0003a3c8) popup_call_poc_inact_window_t3_ParamLimits

0xb30c,	// (0x0003a3c8) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003e5c7) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003e5c7) popup_call_poc_inact_window_t

0xc343,	// (0x0003b3ff) context_pane_ParamLimits

0x4990,	// (0x00033a4c) signal_pane_ParamLimits

0xa543,	// (0x000395ff) main_call2_pane

0xc331,	// (0x0003b3ed) popup_phob_thumbnail2_window_ParamLimits

0xc331,	// (0x0003b3ed) popup_phob_thumbnail2_window

0x3cc2,	// (0x00032d7e) aid_hotspot_pointer_arrow_pane

0x3cca,	// (0x00032d86) aid_hotspot_pointer_hand_pane

0x4450,	// (0x0003350c) phob_pre_status_pane_g5

0x1bfb,	// (0x00030cb7) cams_zoom_pane_ParamLimits

0x1c0a,	// (0x00030cc6) image_vga_pane_ParamLimits

0x1c24,	// (0x00030ce0) main_camera_pane_g1_ParamLimits

0x1c36,	// (0x00030cf2) main_camera_pane_g2_ParamLimits

0x1c46,	// (0x00030d02) main_camera_pane_g3_ParamLimits

0x1c5a,	// (0x00030d16) main_camera_pane_g4_ParamLimits

0x1c6e,	// (0x00030d2a) main_camera_pane_g5_ParamLimits

0x1c82,	// (0x00030d3e) main_camera_pane_g6_ParamLimits

0x1c96,	// (0x00030d52) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003e2c6) main_camera_pane_g_ParamLimits

0x1caa,	// (0x00030d66) main_camera_pane_t1_ParamLimits

0x1cc0,	// (0x00030d7c) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003e2d7) main_camera_pane_t_ParamLimits

0xa2c8,	// (0x00039384) bg_popup_preview_window_pane_cp01_ParamLimits

0xa2c8,	// (0x00039384) bg_popup_preview_window_pane_cp01

0xb321,	// (0x0003a3dd) popup_phob_thumbnail2_window_g1_ParamLimits

0xb321,	// (0x0003a3dd) popup_phob_thumbnail2_window_g1

0xa06d,	// (0x00039129) call2_cli_visual_pane

0x411c,	// (0x000331d8) popup_call2_audio_conf_window_ParamLimits

0x411c,	// (0x000331d8) popup_call2_audio_conf_window

0x4144,	// (0x00033200) popup_call2_audio_first_window_ParamLimits

0x4144,	// (0x00033200) popup_call2_audio_first_window

0x41da,	// (0x00033296) popup_call2_audio_in_window_ParamLimits

0x41da,	// (0x00033296) popup_call2_audio_in_window

0x4226,	// (0x000332e2) popup_call2_audio_out_window_ParamLimits

0x4226,	// (0x000332e2) popup_call2_audio_out_window

0x4298,	// (0x00033354) popup_call2_audio_second_window_ParamLimits

0x4298,	// (0x00033354) popup_call2_audio_second_window

0x42fe,	// (0x000333ba) popup_call2_audio_wait_window_ParamLimits

0x42fe,	// (0x000333ba) popup_call2_audio_wait_window

0xa06d,	// (0x00039129) bg_popup_call2_act_pane_cp03

0xa2aa,	// (0x00039366) list_conf_pane_cp

0xb32d,	// (0x0003a3e9) popup_call2_audio_conf_window_t1

0xb33b,	// (0x0003a3f7) list_single_graphic_popup_conf2_pane_ParamLimits

0xb33b,	// (0x0003a3f7) list_single_graphic_popup_conf2_pane

0xac8e,	// (0x00039d4a) list_highlight_pane_cp04

0xb34e,	// (0x0003a40a) list_single_graphic_popup_conf2_pane_g1

0xac9f,	// (0x00039d5b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003e5ce) list_single_graphic_popup_conf2_pane_g

0xb358,	// (0x0003a414) list_single_graphic_popup_conf2_pane_t1

0xb366,	// (0x0003a422) bg_popup_call2_act_pane_cp01_ParamLimits

0xb366,	// (0x0003a422) bg_popup_call2_act_pane_cp01

0xb3f0,	// (0x0003a4ac) call_type_pane_cp05_ParamLimits

0xb3f0,	// (0x0003a4ac) call_type_pane_cp05

0xb444,	// (0x0003a500) popup_call2_audio_second_window_g1_ParamLimits

0xb444,	// (0x0003a500) popup_call2_audio_second_window_g1

0xb498,	// (0x0003a554) popup_call2_audio_second_window_g2_ParamLimits

0xb498,	// (0x0003a554) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003e5d3) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003e5d3) popup_call2_audio_second_window_g

0xb4fd,	// (0x0003a5b9) popup_call2_audio_second_window_t1_ParamLimits

0xb4fd,	// (0x0003a5b9) popup_call2_audio_second_window_t1

0xb5b8,	// (0x0003a674) popup_call2_audio_second_window_t2_ParamLimits

0xb5b8,	// (0x0003a674) popup_call2_audio_second_window_t2

0xb60b,	// (0x0003a6c7) popup_call2_audio_second_window_t3_ParamLimits

0xb60b,	// (0x0003a6c7) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003e5da) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003e5da) popup_call2_audio_second_window_t

0xa06d,	// (0x00039129) bg_popup_call2_in_pane_cp02

0xa077,	// (0x00039133) call_type_pane_cp04

0xa07f,	// (0x0003913b) popup_call2_audio_wait_window_g1

0xa087,	// (0x00039143) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003e1b5) popup_call2_audio_wait_window_g

0xa08f,	// (0x0003914b) popup_call2_audio_wait_window_t3

0xb6fe,	// (0x0003a7ba) bg_popup_call2_act_pane_ParamLimits

0xb6fe,	// (0x0003a7ba) bg_popup_call2_act_pane

0xb7be,	// (0x0003a87a) call_type_pane_cp03_ParamLimits

0xb7be,	// (0x0003a87a) call_type_pane_cp03

0xb822,	// (0x0003a8de) popup_call2_audio_first_window_g1_ParamLimits

0xb822,	// (0x0003a8de) popup_call2_audio_first_window_g1

0xb892,	// (0x0003a94e) popup_call2_audio_first_window_g2_ParamLimits

0xb892,	// (0x0003a94e) popup_call2_audio_first_window_g2

0xaefa,	// (0x00039fb6) popup_call2_audio_first_window_g3_ParamLimits

0xaefa,	// (0x00039fb6) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003e5e3) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003e5e3) popup_call2_audio_first_window_g

0xb970,	// (0x0003aa2c) popup_call2_audio_first_window_t1_ParamLimits

0xb970,	// (0x0003aa2c) popup_call2_audio_first_window_t1

0xba73,	// (0x0003ab2f) popup_call2_audio_first_window_t4_ParamLimits

0xba73,	// (0x0003ab2f) popup_call2_audio_first_window_t4

0xbb56,	// (0x0003ac12) popup_call2_audio_first_window_t5_ParamLimits

0xbb56,	// (0x0003ac12) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003e5ee) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003e5ee) popup_call2_audio_first_window_t

0xa2c0,	// (0x0003937c) bg_popup_call2_act_pane_g1

0xc1c5,	// (0x0003b281) popup_cale_lunar_info_window_t1

0xc1d3,	// (0x0003b28f) popup_cale_lunar_info_window_t2

0xc1e1,	// (0x0003b29d) popup_cale_lunar_info_window_t3

0xa06d,	// (0x00039129) bg_popup_call2_bubble_pane

0xbc57,	// (0x0003ad13) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc57,	// (0x0003ad13) bg_popup_call2_in_pane_cp01

0x9d49,	// (0x00038e05) call_type_pane_cp02

0xbc9f,	// (0x0003ad5b) popup_call2_audio_out_window_g1_ParamLimits

0xbc9f,	// (0x0003ad5b) popup_call2_audio_out_window_g1

0xbccb,	// (0x0003ad87) popup_call2_audio_out_window_g2_ParamLimits

0xbccb,	// (0x0003ad87) popup_call2_audio_out_window_g2

0xbcf3,	// (0x0003adaf) popup_call2_audio_out_window_g3_ParamLimits

0xbcf3,	// (0x0003adaf) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003e5f7) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003e5f7) popup_call2_audio_out_window_g

0xbd2e,	// (0x0003adea) popup_call2_audio_out_window_t1_ParamLimits

0xbd2e,	// (0x0003adea) popup_call2_audio_out_window_t1

0xbd8d,	// (0x0003ae49) popup_call2_audio_out_window_t2_ParamLimits

0xbd8d,	// (0x0003ae49) popup_call2_audio_out_window_t2

0xbde1,	// (0x0003ae9d) popup_call2_audio_out_window_t3_ParamLimits

0xbde1,	// (0x0003ae9d) popup_call2_audio_out_window_t3

0xbdf7,	// (0x0003aeb3) popup_call2_audio_out_window_t4_ParamLimits

0xbdf7,	// (0x0003aeb3) popup_call2_audio_out_window_t4

0xbe0d,	// (0x0003aec9) popup_call2_audio_out_window_t5_ParamLimits

0xbe0d,	// (0x0003aec9) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003e600) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003e600) popup_call2_audio_out_window_t

0xbe71,	// (0x0003af2d) bg_popup_call2_in_pane_ParamLimits

0xbe71,	// (0x0003af2d) bg_popup_call2_in_pane

0xbecd,	// (0x0003af89) popup_call2_audio_in_window_g1_ParamLimits

0xbecd,	// (0x0003af89) popup_call2_audio_in_window_g1

0xbf05,	// (0x0003afc1) popup_call2_audio_in_window_g2_ParamLimits

0xbf05,	// (0x0003afc1) popup_call2_audio_in_window_g2

0xbf3d,	// (0x0003aff9) popup_call2_audio_in_window_g3_ParamLimits

0xbf3d,	// (0x0003aff9) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003e60d) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003e60d) popup_call2_audio_in_window_g

0xbf95,	// (0x0003b051) popup_call2_audio_in_window_t1_ParamLimits

0xbf95,	// (0x0003b051) popup_call2_audio_in_window_t1

0xc015,	// (0x0003b0d1) popup_call2_audio_in_window_t2_ParamLimits

0xc015,	// (0x0003b0d1) popup_call2_audio_in_window_t2

0xc095,	// (0x0003b151) popup_call2_audio_in_window_t3_ParamLimits

0xc095,	// (0x0003b151) popup_call2_audio_in_window_t3

0xc0af,	// (0x0003b16b) popup_call2_audio_in_window_t4_ParamLimits

0xc0af,	// (0x0003b16b) popup_call2_audio_in_window_t4

0xc0c1,	// (0x0003b17d) popup_call2_audio_in_window_t5_ParamLimits

0xc0c1,	// (0x0003b17d) popup_call2_audio_in_window_t5

0xc0d6,	// (0x0003b192) popup_call2_audio_in_window_t6_ParamLimits

0xc0d6,	// (0x0003b192) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003e616) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003e616) popup_call2_audio_in_window_t

0xa2c0,	// (0x0003937c) bg_popup_call2_in_pane_g1

0xc1ef,	// (0x0003b2ab) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0003e67e) popup_cale_lunar_info_window_t

0xa2c8,	// (0x00039384) bg_popup_call2_rect_pane_ParamLimits

0xa2c8,	// (0x00039384) bg_popup_call2_rect_pane

0xa06d,	// (0x00039129) call2_cli_visual_graphic_pane

0xa06d,	// (0x00039129) call2_cli_visual_text_pane

0x4a1f,	// (0x00033adb) smil_status_volume_pane_g3

0x0002,

0xa3e2,	// (0x0003949e) call2_cli_visual_graphic_pane_g1

0xa3e2,	// (0x0003949e) call2_cli_visual_graphic_pane_g2

0xa3e2,	// (0x0003949e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003e623) call2_cli_visual_graphic_pane_g

0xc0eb,	// (0x0003b1a7) bg_popup_call2_rect_pane_g1

0xa480,	// (0x0003953c) bg_popup_call2_rect_pane_g2

0xc0f3,	// (0x0003b1af) bg_popup_call2_rect_pane_g3

0xc0fb,	// (0x0003b1b7) bg_popup_call2_rect_pane_g4

0xc103,	// (0x0003b1bf) bg_popup_call2_rect_pane_g5

0xc10b,	// (0x0003b1c7) bg_popup_call2_rect_pane_g6

0xc113,	// (0x0003b1cf) bg_popup_call2_rect_pane_g7

0xc11b,	// (0x0003b1d7) bg_popup_call2_rect_pane_g8

0xc123,	// (0x0003b1df) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003e62a) bg_popup_call2_rect_pane_g

0xc12b,	// (0x0003b1e7) bg_popup_call2_bubble_pane_g1

0xc133,	// (0x0003b1ef) bg_popup_call2_bubble_pane_g2

0xc13b,	// (0x0003b1f7) bg_popup_call2_bubble_pane_g3

0xc143,	// (0x0003b1ff) bg_popup_call2_bubble_pane_g4

0xc14b,	// (0x0003b207) bg_popup_call2_bubble_pane_g5

0xc153,	// (0x0003b20f) bg_popup_call2_bubble_pane_g6

0xc15b,	// (0x0003b217) bg_popup_call2_bubble_pane_g7

0xc163,	// (0x0003b21f) bg_popup_call2_bubble_pane_g8

0xc16b,	// (0x0003b227) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003e63d) bg_popup_call2_bubble_pane_g

0x1541,	// (0x000305fd) aid_cale_week_size_cell_pane

0x1cda,	// (0x00030d96) aid_cams_cif_uncrop_pane_ParamLimits

0x1cda,	// (0x00030d96) aid_cams_cif_uncrop_pane

0x1e93,	// (0x00030f4f) aid_cams_size_cell_ParamLimits

0x1e93,	// (0x00030f4f) aid_cams_size_cell

0x1ea7,	// (0x00030f63) grid_cams_pane_ParamLimits

0x1ec1,	// (0x00030f7d) linegrid_cams_pane_ParamLimits

0x20a1,	// (0x0003115d) call_video_pane_t1

0x20bb,	// (0x00031177) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003e32a) call_video_pane_t

0x24ef,	// (0x000315ab) aid_cale_month_size_cell_pane_ParamLimits

0x24ef,	// (0x000315ab) aid_cale_month_size_cell_pane

0xf60b,	// (0x0003e6c7) smil_status_volume_pane_g

0x4a2c,	// (0x00033ae8) volume_smil_pane_ParamLimits

0x9bfd,	// (0x00038cb9) aid_popup2_width_pane

0x1449,	// (0x00030505) cell_qdial_pane_g4_ParamLimits

0x1449,	// (0x00030505) cell_qdial_pane_g4

0x35b2,	// (0x0003266e) aid_blid_cardinal_pane_ParamLimits

0x35be,	// (0x0003267a) aid_blid_destination_pane_ParamLimits

0x35be,	// (0x0003267a) aid_blid_destination_pane

0xa2c8,	// (0x00039384) bg_popup_call_poc_act_pane_ParamLimits

0xa2c8,	// (0x00039384) bg_popup_call_poc_act_pane

0xa2c8,	// (0x00039384) bg_popup_call_poc_inact_pane_ParamLimits

0xa2c8,	// (0x00039384) bg_popup_call_poc_inact_pane

0xc173,	// (0x0003b22f) bg_popup_call_poc_act_pane_g1

0xc17b,	// (0x0003b237) bg_popup_call_poc_act_pane_g2

0xc183,	// (0x0003b23f) bg_popup_call_poc_act_pane_g3

0xc143,	// (0x0003b1ff) bg_popup_call_poc_act_pane_g4

0xc14b,	// (0x0003b207) bg_popup_call_poc_act_pane_g5

0xc18b,	// (0x0003b247) bg_popup_call_poc_act_pane_g6

0xc15b,	// (0x0003b217) bg_popup_call_poc_act_pane_g7

0xc193,	// (0x0003b24f) bg_popup_call_poc_act_pane_g8

0xa06d,	// (0x00039129) main_usb_pane

0xc308,	// (0x0003b3c4) popup_cale_lunar_info_window

0x2384,	// (0x00031440) im_reading_pane_t1_ParamLimits

0xa648,	// (0x00039704) list_im_pane_ParamLimits

0xa659,	// (0x00039715) scroll_pane_cp07_ParamLimits

0xa06d,	// (0x00039129) grid_highlight_pane_cp012

0xa2c8,	// (0x00039384) mup_scale_pane_ParamLimits

0xb06e,	// (0x0003a12a) main_usb_pane_g1_ParamLimits

0xb06e,	// (0x0003a12a) main_usb_pane_g1

0x435c,	// (0x00033418) main_usb_pane_g2_ParamLimits

0x435c,	// (0x00033418) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0003e667) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0003e667) main_usb_pane_g

0x4372,	// (0x0003342e) main_usb_pane_t1_ParamLimits

0x4372,	// (0x0003342e) main_usb_pane_t1

0x4384,	// (0x00033440) main_usb_pane_t2_ParamLimits

0x4384,	// (0x00033440) main_usb_pane_t2

0x4396,	// (0x00033452) main_usb_pane_t3_ParamLimits

0x4396,	// (0x00033452) main_usb_pane_t3

0x43a8,	// (0x00033464) main_usb_pane_t4_ParamLimits

0x43a8,	// (0x00033464) main_usb_pane_t4

0x43bd,	// (0x00033479) main_usb_pane_t5_ParamLimits

0x43bd,	// (0x00033479) main_usb_pane_t5

0x43d2,	// (0x0003348e) main_usb_pane_t6_ParamLimits

0x43d2,	// (0x0003348e) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0003e66c) main_usb_pane_t_ParamLimits

0x3553,	// (0x0003260f) aid_text_placing

0x355e,	// (0x0003261a) main_location2_pane_t1_ParamLimits

0x3572,	// (0x0003262e) main_location2_pane_t2_ParamLimits

0x3588,	// (0x00032644) main_location2_pane_t3_ParamLimits

0x359e,	// (0x0003265a) main_location2_pane_t4_ParamLimits

0x359e,	// (0x0003265a) main_location2_pane_t4

0xf3cf,	// (0x0003e48b) main_location2_pane_t_ParamLimits

0xa304,	// (0x000393c0) find_pinb_pane_g2_ParamLimits

0xa304,	// (0x000393c0) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0003e1db) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0003e1db) find_pinb_pane_g

0xa310,	// (0x000393cc) find_pinb_pane_t1_ParamLimits

0xa322,	// (0x000393de) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003e1e0) find_pinb_pane_t_ParamLimits

0xa06d,	// (0x00039129) main_call3_pane

0x2abe,	// (0x00031b7a) cale_month_day_heading_pane_t1_ParamLimits

0x2b44,	// (0x00031c00) cale_month_day_heading_pane_t2_ParamLimits

0x2bd5,	// (0x00031c91) cale_month_day_heading_pane_t3_ParamLimits

0x2c66,	// (0x00031d22) cale_month_day_heading_pane_t4_ParamLimits

0x2cf7,	// (0x00031db3) cale_month_day_heading_pane_t5_ParamLimits

0x2d98,	// (0x00031e54) cale_month_day_heading_pane_t6_ParamLimits

0x2e3d,	// (0x00031ef9) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003e362) cale_month_day_heading_pane_t_ParamLimits

0x3105,	// (0x000321c1) smil_status_volume_pane

0x3e19,	// (0x00032ed5) postcard_address_pane_ParamLimits

0x3e19,	// (0x00032ed5) postcard_address_pane

0x3e2f,	// (0x00032eeb) postcard_message_pane_ParamLimits

0x3e2f,	// (0x00032eeb) postcard_message_pane

0x4338,	// (0x000333f4) call2_cli_visual_pane_t1_ParamLimits

0x4338,	// (0x000333f4) call2_cli_visual_pane_t1

0x4be9,	// (0x00033ca5) postcard_message_pane_t1_ParamLimits

0x4be9,	// (0x00033ca5) postcard_message_pane_t1

0x4bd2,	// (0x00033c8e) postcard_address_pane_t1_ParamLimits

0x4bd2,	// (0x00033c8e) postcard_address_pane_t1

0x4bbe,	// (0x00033c7a) popup_call3_audio_in_window_ParamLimits

0x4bbe,	// (0x00033c7a) popup_call3_audio_in_window

0x4a43,	// (0x00033aff) bg_popup_call3_in_pane_ParamLimits

0x4a43,	// (0x00033aff) bg_popup_call3_in_pane

0x4abf,	// (0x00033b7b) popup_call3_audio_in_window_g1_ParamLimits

0x4abf,	// (0x00033b7b) popup_call3_audio_in_window_g1

0x4adf,	// (0x00033b9b) popup_call3_audio_in_window_g2_ParamLimits

0x4adf,	// (0x00033b9b) popup_call3_audio_in_window_g2

0x4aff,	// (0x00033bbb) popup_call3_audio_in_window_g3_ParamLimits

0x4aff,	// (0x00033bbb) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0003e6ce) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0003e6ce) popup_call3_audio_in_window_g

0x4b30,	// (0x00033bec) popup_call3_audio_in_window_t1_ParamLimits

0x4b30,	// (0x00033bec) popup_call3_audio_in_window_t1

0x4b6e,	// (0x00033c2a) popup_call3_audio_in_window_t2_ParamLimits

0x4b6e,	// (0x00033c2a) popup_call3_audio_in_window_t2

0x4bac,	// (0x00033c68) popup_call3_audio_in_window_t3_ParamLimits

0x4bac,	// (0x00033c68) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0003e6d7) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0003e6d7) popup_call3_audio_in_window_t

0xa543,	// (0x000395ff) bg_popup_call3_rect_pane

0xc0eb,	// (0x0003b1a7) bg_popup_call3_rect_pane_g1

0xa480,	// (0x0003953c) bg_popup_call3_rect_pane_g2

0xc0f3,	// (0x0003b1af) bg_popup_call3_rect_pane_g3

0xc0fb,	// (0x0003b1b7) bg_popup_call3_rect_pane_g4

0xc103,	// (0x0003b1bf) bg_popup_call3_rect_pane_g5

0xc10b,	// (0x0003b1c7) bg_popup_call3_rect_pane_g6

0xc113,	// (0x0003b1cf) bg_popup_call3_rect_pane_g7

0x39ca,	// (0x00032a86) mup_visualizer_osc_pane

0xaf3e,	// (0x00039ffa) mup_visualizer_spec_pane

0x4a73,	// (0x00033b2f) call3_video_qcif_pane_ParamLimits

0x4a73,	// (0x00033b2f) call3_video_qcif_pane

0x4a86,	// (0x00033b42) call3_video_qcif_uncrop_pane_ParamLimits

0x4a86,	// (0x00033b42) call3_video_qcif_uncrop_pane

0x4a96,	// (0x00033b52) call3_video_subqcif_pane_ParamLimits

0x4a96,	// (0x00033b52) call3_video_subqcif_pane

0x4aac,	// (0x00033b68) call3_video_subqcif_uncrop_pane_ParamLimits

0x4aac,	// (0x00033b68) call3_video_subqcif_uncrop_pane

0x4b1f,	// (0x00033bdb) popup_call3_audio_in_window_g4_ParamLimits

0x4b1f,	// (0x00033bdb) popup_call3_audio_in_window_g4

0x4a0e,	// (0x00033aca) mup_spec_half_pane

0x4a17,	// (0x00033ad3) mup_spec_half_pane_cp

0xc3a3,	// (0x0003b45f) mup_osc_middle_pane

0xc3ac,	// (0x0003b468) mup_visualizer_osc_pane_g1

0x49ee,	// (0x00033aaa) mup_spec_bar_pane_ParamLimits

0x49ee,	// (0x00033aaa) mup_spec_bar_pane

0xc390,	// (0x0003b44c) mup_spec_bar_pane_g1

0xc39a,	// (0x0003b456) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003e6c2) mup_spec_bar_pane_g

0x1541,	// (0x000305fd) aid_cale_week_size_cell_pane_ParamLimits

0x155b,	// (0x00030617) bg_cale_heading_pane_ParamLimits

0x1584,	// (0x00030640) bg_cale_pane_cp01_ParamLimits

0x15a6,	// (0x00030662) cale_week_corner_pane_ParamLimits

0x15c5,	// (0x00030681) cale_week_day_heading_pane_ParamLimits

0x15f3,	// (0x000306af) cale_week_scroll_pane_g1_ParamLimits

0x1617,	// (0x000306d3) cale_week_scroll_pane_g2_ParamLimits

0x162f,	// (0x000306eb) cale_week_scroll_pane_g3_ParamLimits

0x1647,	// (0x00030703) cale_week_scroll_pane_g4_ParamLimits

0x1663,	// (0x0003071f) cale_week_scroll_pane_g5_ParamLimits

0x1683,	// (0x0003073f) cale_week_scroll_pane_g6_ParamLimits

0x16a3,	// (0x0003075f) cale_week_scroll_pane_g7_ParamLimits

0x16c7,	// (0x00030783) cale_week_scroll_pane_g8_ParamLimits

0x16eb,	// (0x000307a7) cale_week_scroll_pane_g9_ParamLimits

0x1708,	// (0x000307c4) cale_week_scroll_pane_g10_ParamLimits

0x1725,	// (0x000307e1) cale_week_scroll_pane_g11_ParamLimits

0x1742,	// (0x000307fe) cale_week_scroll_pane_g12_ParamLimits

0x175f,	// (0x0003081b) cale_week_scroll_pane_g13_ParamLimits

0x177c,	// (0x00030838) cale_week_scroll_pane_g14_ParamLimits

0x17a5,	// (0x00030861) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0003e26c) cale_week_scroll_pane_g_ParamLimits

0x17f2,	// (0x000308ae) cale_week_time_pane_ParamLimits

0x1816,	// (0x000308d2) grid_cale_week_pane_ParamLimits

0xa4b4,	// (0x00039570) listscroll_cale_week_pane_t1

0xa4c6,	// (0x00039582) scroll_pane_cp08_ParamLimits

0x255c,	// (0x00031618) cale_month_corner_pane_ParamLimits

0xa879,	// (0x00039935) cale_month_pane_t1

0x2a44,	// (0x00031b00) cale_month_week_pane_ParamLimits

0x3312,	// (0x000323ce) popup_call_status_window_g1_ParamLimits

0x3326,	// (0x000323e2) popup_call_status_window_g2_ParamLimits

0x333a,	// (0x000323f6) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003e412) popup_call_status_window_g_ParamLimits

0xac0f,	// (0x00039ccb) aid_call2_pane

0x3c83,	// (0x00032d3f) msg_header_pane_g1

0x3e19,	// (0x00032ed5) postcard_address2_pane_ParamLimits

0x3e19,	// (0x00032ed5) postcard_address2_pane

0x3e2f,	// (0x00032eeb) postcard_message2_pane_ParamLimits

0x3e2f,	// (0x00032eeb) postcard_message2_pane

0x499e,	// (0x00033a5a) message2_row_pane_ParamLimits

0x499e,	// (0x00033a5a) message2_row_pane

0x49bb,	// (0x00033a77) address2_row_pane_ParamLimits

0x49bb,	// (0x00033a77) address2_row_pane

0xc35e,	// (0x0003b41a) postcard_message2_row_pane_g1

0xc366,	// (0x0003b422) postcard_message2_row_pane_t1

0xc35e,	// (0x0003b41a) address2_row_pane_g1

0xc366,	// (0x0003b422) address2_row_pane_t1

0x1b6c,	// (0x00030c28) aid_size_cell_vorec

0xa06d,	// (0x00039129) main_rss_pane

0x49ce,	// (0x00033a8a) rss_list_single_pane_ParamLimits

0x49ce,	// (0x00033a8a) rss_list_single_pane

0xc374,	// (0x0003b430) rss_list_single_pane_t1

0xc382,	// (0x0003b43e) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0003e6bd) rss_list_single_pane_t

0xa06d,	// (0x00039129) main_camera2_pane

0xa06d,	// (0x00039129) main_video2_pane

0xff39,	// (0x0002eff5) cams_zoom_pane_cp2_ParamLimits

0xff39,	// (0x0002eff5) cams_zoom_pane_cp2

0xff50,	// (0x0002f00c) image2_vga_pane_ParamLimits

0xff50,	// (0x0002f00c) image2_vga_pane

0xff98,	// (0x0002f054) main_camera2_pane_g1_ParamLimits

0xff98,	// (0x0002f054) main_camera2_pane_g1

0xffb8,	// (0x0002f074) main_camera2_pane_g2_ParamLimits

0xffb8,	// (0x0002f074) main_camera2_pane_g2

0xffcf,	// (0x0002f08b) main_camera2_pane_g3_ParamLimits

0xffcf,	// (0x0002f08b) main_camera2_pane_g3

0xffe6,	// (0x0002f0a2) main_camera2_pane_g4_ParamLimits

0xffe6,	// (0x0002f0a2) main_camera2_pane_g4

0xfffd,	// (0x0002f0b9) main_camera2_pane_g5_ParamLimits

0xfffd,	// (0x0002f0b9) main_camera2_pane_g5

0x0014,	// (0x0002f0d0) main_camera2_pane_g6_ParamLimits

0x0014,	// (0x0002f0d0) main_camera2_pane_g6

0x002b,	// (0x0002f0e7) main_camera2_pane_g7_ParamLimits

0x002b,	// (0x0002f0e7) main_camera2_pane_g7

0x0042,	// (0x0002f0fe) main_camera2_pane_g8_ParamLimits

0x0042,	// (0x0002f0fe) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0003e6de) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0003e6de) main_camera2_pane_g

0x0070,	// (0x0002f12c) main_camera2_pane_t1_ParamLimits

0x0070,	// (0x0002f12c) main_camera2_pane_t1

0x00a5,	// (0x0002f161) main_camera2_pane_t2_ParamLimits

0x00a5,	// (0x0002f161) main_camera2_pane_t2

0x00c2,	// (0x0002f17e) main_camera2_pane_t3_ParamLimits

0x00c2,	// (0x0002f17e) main_camera2_pane_t3

0x0120,	// (0x0002f1dc) main_camera2_pane_t4_ParamLimits

0x0120,	// (0x0002f1dc) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0003e6f1) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0003e6f1) main_camera2_pane_t

0x01a9,	// (0x0002f265) cams_zoom_pane_cp4_ParamLimits

0x01a9,	// (0x0002f265) cams_zoom_pane_cp4

0x01bf,	// (0x0002f27b) image2_cif_pane_ParamLimits

0x01bf,	// (0x0002f27b) image2_cif_pane

0x01ea,	// (0x0002f2a6) image2_subqcif_pane_ParamLimits

0x01ea,	// (0x0002f2a6) image2_subqcif_pane

0x0205,	// (0x0002f2c1) main_video2_pane_g1_ParamLimits

0x0205,	// (0x0002f2c1) main_video2_pane_g1

0x021f,	// (0x0002f2db) main_video2_pane_g2_ParamLimits

0x021f,	// (0x0002f2db) main_video2_pane_g2

0x0235,	// (0x0002f2f1) main_video2_pane_g3_ParamLimits

0x0235,	// (0x0002f2f1) main_video2_pane_g3

0x024b,	// (0x0002f307) main_video2_pane_g4_ParamLimits

0x024b,	// (0x0002f307) main_video2_pane_g4

0x0261,	// (0x0002f31d) main_video2_pane_g5_ParamLimits

0x0261,	// (0x0002f31d) main_video2_pane_g5

0x0277,	// (0x0002f333) main_video2_pane_g6_ParamLimits

0x0277,	// (0x0002f333) main_video2_pane_g6

0x0005,

0xf644,	// (0x0003e700) main_video2_pane_g_ParamLimits

0xf644,	// (0x0003e700) main_video2_pane_g

0x0291,	// (0x0002f34d) main_video2_pane_t1_ParamLimits

0x0291,	// (0x0002f34d) main_video2_pane_t1

0x02b5,	// (0x0002f371) main_video2_pane_t2_ParamLimits

0x02b5,	// (0x0002f371) main_video2_pane_t2

0x0305,	// (0x0002f3c1) main_video2_pane_t3_ParamLimits

0x0305,	// (0x0002f3c1) main_video2_pane_t3

0x0002,

0xf651,	// (0x0003e70d) main_video2_pane_t_ParamLimits

0xf651,	// (0x0003e70d) main_video2_pane_t

0x4490,	// (0x0003354c) call_muted_g2

0x0001,

0xf5f3,	// (0x0003e6af) call_muted_g

0xa06d,	// (0x00039129) main_mup2_pane

0x4c2f,	// (0x00033ceb) main_mup2_pane_g1_ParamLimits

0x4c2f,	// (0x00033ceb) main_mup2_pane_g1

0x4c3b,	// (0x00033cf7) main_mup2_pane_g2_ParamLimits

0x4c3b,	// (0x00033cf7) main_mup2_pane_g2

0x4eae,	// (0x00033f6a) main_mup_pane_g13_cp1

0x4eb6,	// (0x00033f72) mup_volume_pane_cp1

0x4c59,	// (0x00033d15) main_mup2_pane_g4_ParamLimits

0x4c59,	// (0x00033d15) main_mup2_pane_g4

0x4c6b,	// (0x00033d27) main_mup2_pane_g5_ParamLimits

0x4c6b,	// (0x00033d27) main_mup2_pane_g5

0x4c7d,	// (0x00033d39) main_mup2_pane_g6_ParamLimits

0x4c7d,	// (0x00033d39) main_mup2_pane_g6

0x4c8f,	// (0x00033d4b) main_mup2_pane_g7_ParamLimits

0x4c8f,	// (0x00033d4b) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0003e714) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0003e714) main_mup2_pane_g

0x4ca7,	// (0x00033d63) main_mup2_pane_t1_ParamLimits

0x4ca7,	// (0x00033d63) main_mup2_pane_t1

0x4cbd,	// (0x00033d79) main_mup2_pane_t2_ParamLimits

0x4cbd,	// (0x00033d79) main_mup2_pane_t2

0x4cd3,	// (0x00033d8f) main_mup2_pane_t3_ParamLimits

0x4cd3,	// (0x00033d8f) main_mup2_pane_t3

0x4ce9,	// (0x00033da5) main_mup2_pane_t4_ParamLimits

0x4ce9,	// (0x00033da5) main_mup2_pane_t4

0x4d01,	// (0x00033dbd) main_mup2_pane_t5_ParamLimits

0x4d01,	// (0x00033dbd) main_mup2_pane_t5

0x4d19,	// (0x00033dd5) main_mup2_pane_t6_ParamLimits

0x4d19,	// (0x00033dd5) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0003e723) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0003e723) main_mup2_pane_t

0x4d49,	// (0x00033e05) mup2_visualizer_pane_ParamLimits

0x4d49,	// (0x00033e05) mup2_visualizer_pane

0x4d77,	// (0x00033e33) mup_progress_pane_cp_ParamLimits

0x4d77,	// (0x00033e33) mup_progress_pane_cp

0x4e99,	// (0x00033f55) mup_volume_pane_cp_ParamLimits

0x4e99,	// (0x00033f55) mup_volume_pane_cp

0x4d8d,	// (0x00033e49) mup2_visualizer_pane_g1_ParamLimits

0x4d8d,	// (0x00033e49) mup2_visualizer_pane_g1

0xc3e3,	// (0x0003b49f) mup2_visualizer_pane_g2_ParamLimits

0xc3e3,	// (0x0003b49f) mup2_visualizer_pane_g2

0x4da4,	// (0x00033e60) mup2_visualizer_pane_g3_ParamLimits

0x4da4,	// (0x00033e60) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0003e730) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0003e730) mup2_visualizer_pane_g

0xb1b7,	// (0x0003a273) aid_size_cell_fmradio

0x4640,	// (0x000336fc) aid_height_parent_landcape

0xa6d7,	// (0x00039793) wml_content_pane_cp

0xa6df,	// (0x0003979b) wml_tabs_pane

0xa6e8,	// (0x000397a4) popup_wml_miniature_window

0xa6f0,	// (0x000397ac) scroll_pane_cp021

0xa704,	// (0x000397c0) wml_content_pane_comp8

0xa06d,	// (0x00039129) bg_popup_sub_pane_cp05

0xc401,	// (0x0003b4bd) popup_wml_miniature_window_g1

0xc409,	// (0x0003b4c5) wml_miniature_view_pane

0x4db0,	// (0x00033e6c) aid_size_wml_view

0x4db8,	// (0x00033e74) wml_miniature_view_pane_g1

0x4dc1,	// (0x00033e7d) wml_miniature_view_pane_g2

0x4dca,	// (0x00033e86) wml_miniature_view_pane_g3

0x4dd2,	// (0x00033e8e) wml_miniature_view_pane_g4

0x4dda,	// (0x00033e96) wml_miniature_view_pane_g5

0x4de2,	// (0x00033e9e) wml_miniature_view_pane_g6

0x4dea,	// (0x00033ea6) wml_miniature_view_pane_g7

0x4df2,	// (0x00033eae) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0003e737) wml_miniature_view_pane_g

0xc411,	// (0x0003b4cd) background_graphic_ParamLimits

0xc411,	// (0x0003b4cd) background_graphic

0xc41d,	// (0x0003b4d9) wml_tabs_2_pane

0xc426,	// (0x0003b4e2) wml_tabs_3_pane_ParamLimits

0xc426,	// (0x0003b4e2) wml_tabs_3_pane

0xc438,	// (0x0003b4f4) wml_tabs_4_pane_ParamLimits

0xc438,	// (0x0003b4f4) wml_tabs_4_pane

0xc44e,	// (0x0003b50a) wml_tabs_5_pane_ParamLimits

0xc44e,	// (0x0003b50a) wml_tabs_5_pane

0xc468,	// (0x0003b524) wml_tabs_pane_g2_ParamLimits

0xc468,	// (0x0003b524) wml_tabs_pane_g2

0xc47c,	// (0x0003b538) wml_tabs_pane_g3_ParamLimits

0xc47c,	// (0x0003b538) wml_tabs_pane_g3

0x4dfa,	// (0x00033eb6) wml_tabs_2_active_pane_ParamLimits

0x4dfa,	// (0x00033eb6) wml_tabs_2_active_pane

0x4e0e,	// (0x00033eca) wml_tabs_2_passive_pane_ParamLimits

0x4e0e,	// (0x00033eca) wml_tabs_2_passive_pane

0x4e22,	// (0x00033ede) wml_tabs_3_active_pane_cp_ParamLimits

0x4e22,	// (0x00033ede) wml_tabs_3_active_pane_cp

0x4e37,	// (0x00033ef3) wml_tabs_3_passive_pane_ParamLimits

0x4e37,	// (0x00033ef3) wml_tabs_3_passive_pane

0x4e4a,	// (0x00033f06) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e4a,	// (0x00033f06) wml_tabs_3_passive_pane_cp

0x4e61,	// (0x00033f1d) tabs_4_active_pane

0x4e69,	// (0x00033f25) tabs_4_passive_pane

0x4e73,	// (0x00033f2f) tabs_4_passive_pane_cp

0x4e7b,	// (0x00033f37) tabs_4_passive_pane_cp2

0x4354,	// (0x00033410) aid_height_text

0x399c,	// (0x00032a58) mup_volume_cont_pane_ParamLimits

0x399c,	// (0x00032a58) mup_volume_cont_pane

0x11ba,	// (0x00030276) aid_size_cell_pinb

0x11c4,	// (0x00030280) aid_size_list_pinb

0x4d63,	// (0x00033e1f) mup2_volume_cont_pane_ParamLimits

0x4d63,	// (0x00033e1f) mup2_volume_cont_pane

0x4e85,	// (0x00033f41) mup2_volume_cont_pane_g1_ParamLimits

0x4e85,	// (0x00033f41) mup2_volume_cont_pane_g1

0x0e7a,	// (0x0002ff36) aid_size_cell_touch_ParamLimits

0x0e7a,	// (0x0002ff36) aid_size_cell_touch

0x10aa,	// (0x00030166) touch_pane_ParamLimits

0x10aa,	// (0x00030166) touch_pane

0x9beb,	// (0x00038ca7) main_rss2_pane

0xc499,	// (0x0003b555) listscroll_rss2_pane

0xc4a2,	// (0x0003b55e) rss2_navigation_pane

0xc4aa,	// (0x0003b566) list_rss2_pane

0xad33,	// (0x00039def) scroll_pane_cp22

0xc4b2,	// (0x0003b56e) rss2_navigation_pane_g1

0xc4bb,	// (0x0003b577) rss2_navigation_pane_g2

0xc4c3,	// (0x0003b57f) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0003e748) rss2_navigation_pane_g

0xc4cb,	// (0x0003b587) rss2_navigation_pane_t1

0x4ebe,	// (0x00033f7a) rss2_list_single_pane_ParamLimits

0x4ebe,	// (0x00033f7a) rss2_list_single_pane

0xc4d9,	// (0x0003b595) rss2_list_single_pane_t2

0xc4e7,	// (0x0003b5a3) rss2_list_single_pane_t3_ParamLimits

0xc4e7,	// (0x0003b5a3) rss2_list_single_pane_t3

0xc504,	// (0x0003b5c0) rss2_list_single_pane_t4

0x30ed,	// (0x000321a9) smil_status_pane_g1

0x9c4c,	// (0x00038d08) main_image2_pane_ParamLimits

0x9c4c,	// (0x00038d08) main_image2_pane

0x0059,	// (0x0002f115) main_camera2_pane_g9_ParamLimits

0x0059,	// (0x0002f115) main_camera2_pane_g9

0x0175,	// (0x0002f231) main_camera2_pane_t5_ParamLimits

0x0175,	// (0x0002f231) main_camera2_pane_t5

0x4c04,	// (0x00033cc0) main_camera2_pane_t6_ParamLimits

0x4c04,	// (0x00033cc0) main_camera2_pane_t6

0x4ed4,	// (0x00033f90) main_image2_pane_g1_ParamLimits

0x4ed4,	// (0x00033f90) main_image2_pane_g1

0x406e,	// (0x0003312a) smil2_video_pane_ParamLimits

0x406e,	// (0x0003312a) smil2_video_pane

0x9c09,	// (0x00038cc5) aid_zoom_text_primary_cp

0x9c42,	// (0x00038cfe) popup_preview_fixed_window

0xa640,	// (0x000396fc) im_reading_pane_g1

0xff2b,	// (0x0002efe7) cams2_bc_adjust_pane_cp_ParamLimits

0xff2b,	// (0x0002efe7) cams2_bc_adjust_pane_cp

0x019b,	// (0x0002f257) cams2_bc_adjust_pane_ParamLimits

0x019b,	// (0x0002f257) cams2_bc_adjust_pane

0xc512,	// (0x0003b5ce) cams2_bc_adjust_pane_g1

0x4eea,	// (0x00033fa6) cams2_slider_pane

0x4ef3,	// (0x00033faf) cams2_slider_pane_g1

0x4efc,	// (0x00033fb8) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0003e74f) cams2_slider_pane_g

0xfb97,	// (0x0002ec53) calc_display_pane_ParamLimits

0xfbbf,	// (0x0002ec7b) calc_paper_pane_ParamLimits

0xfbe2,	// (0x0002ec9e) grid_calc_pane_ParamLimits

0x339c,	// (0x00032458) popup_clock_digital_window_t1_ParamLimits

0xb154,	// (0x0003a210) main_image_pane_t1

0xfb79,	// (0x0002ec35) aid_size_cell_calc_ParamLimits

0xfb79,	// (0x0002ec35) aid_size_cell_calc

0x4686,	// (0x00033742) popup_blid_sat_info2_window_ParamLimits

0x4686,	// (0x00033742) popup_blid_sat_info2_window

0xc522,	// (0x0003b5de) aid_size_cell_blid

0xc52a,	// (0x0003b5e6) bg_popup_window_pane_cp07

0xc54d,	// (0x0003b609) grid_popup_blid_pane

0xc557,	// (0x0003b613) heading_pane_cp05_ParamLimits

0xc557,	// (0x0003b613) heading_pane_cp05

0xc621,	// (0x0003b6dd) cell_popup_blid_pane_ParamLimits

0xc621,	// (0x0003b6dd) cell_popup_blid_pane

0xc64b,	// (0x0003b707) cell_popup_blid_pane_g1

0xc653,	// (0x0003b70f) cell_popup_blid_pane_t1

0x4d33,	// (0x00033def) mup2_indicator_pane_ParamLimits

0x4d33,	// (0x00033def) mup2_indicator_pane

0xa543,	// (0x000395ff) mup2_visualizer_osc_pane

0xc3ef,	// (0x0003b4ab) mup2_visualizer_spec_pane_ParamLimits

0xc3ef,	// (0x0003b4ab) mup2_visualizer_spec_pane

0x4f16,	// (0x00033fd2) mup2_spec_half_pane

0x4f1f,	// (0x00033fdb) mup2_spec_half_pane_cp

0x4f27,	// (0x00033fe3) mup2_spec_bar_pane_ParamLimits

0x4f27,	// (0x00033fe3) mup2_spec_bar_pane

0xc390,	// (0x0003b44c) mup2_spec_bar_pane_g1

0xc39a,	// (0x0003b456) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003e6c2) mup2_spec_bar_pane_g

0x4f47,	// (0x00034003) mup2_osc_middle_pane

0xc3ac,	// (0x0003b468) mup2_visualizer_osc_pane_g1

0x9c7a,	// (0x00038d36) popup_number_entry_window_t1_ParamLimits

0x9c8d,	// (0x00038d49) popup_number_entry_window_t2_ParamLimits

0x9c9f,	// (0x00038d5b) popup_number_entry_window_t3_ParamLimits

0x10fc,	// (0x000301b8) popup_number_entry_window_t5_ParamLimits

0x10fc,	// (0x000301b8) popup_number_entry_window_t5

0xf0ca,	// (0x0003e186) popup_number_entry_window_t_ParamLimits

0x9cb1,	// (0x00038d6d) text_title_cp2_ParamLimits

0x3cd2,	// (0x00032d8e) aid_hotspot_pointer_text2_pane

0x3d34,	// (0x00032df0) main_viewer_pane_g9_ParamLimits

0x3d34,	// (0x00032df0) main_viewer_pane_g9

0xa879,	// (0x00039935) cale_month_pane_t1_ParamLimits

0xa89f,	// (0x0003995b) bg_cale_pane_ParamLimits

0xa8b7,	// (0x00039973) list_cale_pane_ParamLimits

0xa8c8,	// (0x00039984) listscroll_cale_day_pane_t1

0xa8da,	// (0x00039996) scroll_pane_cp09_ParamLimits

0x39d2,	// (0x00032a8e) main_mup_eq_pane_t1_ParamLimits

0x39d2,	// (0x00032a8e) main_mup_eq_pane_t1

0x39ee,	// (0x00032aaa) main_mup_eq_pane_t2_ParamLimits

0x39ee,	// (0x00032aaa) main_mup_eq_pane_t2

0x3a0a,	// (0x00032ac6) main_mup_eq_pane_t3_ParamLimits

0x3a0a,	// (0x00032ac6) main_mup_eq_pane_t3

0x3a28,	// (0x00032ae4) main_mup_eq_pane_t4_ParamLimits

0x3a28,	// (0x00032ae4) main_mup_eq_pane_t4

0x3a46,	// (0x00032b02) main_mup_eq_pane_t5_ParamLimits

0x3a46,	// (0x00032b02) main_mup_eq_pane_t5

0x3a64,	// (0x00032b20) main_mup_eq_pane_t6_ParamLimits

0x3a64,	// (0x00032b20) main_mup_eq_pane_t6

0x3a7a,	// (0x00032b36) main_mup_eq_pane_t7_ParamLimits

0x3a7a,	// (0x00032b36) main_mup_eq_pane_t7

0x3a90,	// (0x00032b4c) main_mup_eq_pane_t8_ParamLimits

0x3a90,	// (0x00032b4c) main_mup_eq_pane_t8

0x3aa6,	// (0x00032b62) main_mup_eq_pane_t9_ParamLimits

0x3aa6,	// (0x00032b62) main_mup_eq_pane_t9

0x3ac2,	// (0x00032b7e) main_mup_eq_pane_t10_ParamLimits

0x3ac2,	// (0x00032b7e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003e511) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003e511) main_mup_eq_pane_t

0x3b97,	// (0x00032c53) mup_equalizer_pane_cp5_ParamLimits

0x3baf,	// (0x00032c6b) mup_equalizer_pane_cp6_ParamLimits

0x3bc7,	// (0x00032c83) mup_equalizer_pane_cp7_ParamLimits

0x9beb,	// (0x00038ca7) main_gallery_pane

0xc3b5,	// (0x0003b471) smil2_volume_pane

0xc3bd,	// (0x0003b479) smil_status_volume_pane_g1_ParamLimits

0xc3d0,	// (0x0003b48c) smil_status_volume_pane_g2_ParamLimits

0x4a1f,	// (0x00033adb) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0003e6c7) smil_status_volume_pane_g_ParamLimits

0xc52a,	// (0x0003b5e6) bg_popup_window_pane_cp07_ParamLimits

0xc538,	// (0x0003b5f4) blid_firmament_pane

0x4f50,	// (0x0003400c) aid_size_cell_gallery_ParamLimits

0x4f50,	// (0x0003400c) aid_size_cell_gallery

0x4f66,	// (0x00034022) grid_gallery_pane_ParamLimits

0x4f66,	// (0x00034022) grid_gallery_pane

0x4f81,	// (0x0003403d) cell_gallery_pane_ParamLimits

0x4f81,	// (0x0003403d) cell_gallery_pane

0xc661,	// (0x0003b71d) bg_cell_gallery_focus_pane_ParamLimits

0xc661,	// (0x0003b71d) bg_cell_gallery_focus_pane

0xc673,	// (0x0003b72f) cell_gallery_pane_g1_ParamLimits

0xc673,	// (0x0003b72f) cell_gallery_pane_g1

0x4fcc,	// (0x00034088) cell_gallery_pane_g2_ParamLimits

0x4fcc,	// (0x00034088) cell_gallery_pane_g2

0x4fd9,	// (0x00034095) cell_gallery_pane_g3_ParamLimits

0x4fd9,	// (0x00034095) cell_gallery_pane_g3

0xc67f,	// (0x0003b73b) cell_gallery_pane_g4_ParamLimits

0xc67f,	// (0x0003b73b) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0003e775) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0003e775) cell_gallery_pane_g

0xc68b,	// (0x0003b747) bg_cell_gallery_focus_pane_g1

0xc693,	// (0x0003b74f) bg_cell_gallery_focus_pane_g2

0xc69b,	// (0x0003b757) bg_cell_gallery_focus_pane_g3

0xc6a3,	// (0x0003b75f) bg_cell_gallery_focus_pane_g4

0xc6ab,	// (0x0003b767) bg_cell_gallery_focus_pane_g5

0xc6b3,	// (0x0003b76f) bg_cell_gallery_focus_pane_g6

0xc6bb,	// (0x0003b777) bg_cell_gallery_focus_pane_g7

0xc6c3,	// (0x0003b77f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0003e77e) bg_cell_gallery_focus_pane_g

0xc6cb,	// (0x0003b787) aid_firma_cardinal

0xc6df,	// (0x0003b79b) blid_firmament_pane_t1

0xc6f6,	// (0x0003b7b2) blid_firmament_pane_t2

0xc70d,	// (0x0003b7c9) blid_firmament_pane_t3

0xc724,	// (0x0003b7e0) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0003e78f) blid_firmament_pane_t

0xc73b,	// (0x0003b7f7) blid_sat_info_pane

0xc74b,	// (0x0003b807) blid_sat_info_pane_g1

0xc74b,	// (0x0003b807) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0003e798) blid_sat_info_pane_g

0xc755,	// (0x0003b811) blid_sat_info_pane_t1

0xc763,	// (0x0003b81f) smil2_volume_content_pane

0xc76c,	// (0x0003b828) smil2_volume_pane_g1

0xc774,	// (0x0003b830) smil2_volume_content_pane_g1

0xc77d,	// (0x0003b839) smil2_volume_content_pane_g2

0xc786,	// (0x0003b842) smil2_volume_content_pane_g3

0xc78f,	// (0x0003b84b) smil2_volume_content_pane_g4

0xc798,	// (0x0003b854) smil2_volume_content_pane_g5

0xc7a1,	// (0x0003b85d) smil2_volume_content_pane_g6

0xc7aa,	// (0x0003b866) smil2_volume_content_pane_g7

0xc7b3,	// (0x0003b86f) smil2_volume_content_pane_g8

0xc7bc,	// (0x0003b878) smil2_volume_content_pane_g9

0xc7c5,	// (0x0003b881) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0003e79d) smil2_volume_content_pane_g

0x18dd,	// (0x00030999) cale_week_day_heading_pane_t1_ParamLimits

0x1927,	// (0x000309e3) cale_week_day_heading_pane_t2_ParamLimits

0x1976,	// (0x00030a32) cale_week_day_heading_pane_t3_ParamLimits

0x19c5,	// (0x00030a81) cale_week_day_heading_pane_t4_ParamLimits

0x1a14,	// (0x00030ad0) cale_week_day_heading_pane_t5_ParamLimits

0x1a67,	// (0x00030b23) cale_week_day_heading_pane_t6_ParamLimits

0x1abe,	// (0x00030b7a) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0003e28d) cale_week_day_heading_pane_t_ParamLimits

0xa4e8,	// (0x000395a4) bg_cale_side_pane_ParamLimits

0xfcb7,	// (0x0002ed73) cale_week_time_pane_t1_ParamLimits

0xfcf1,	// (0x0002edad) cale_week_time_pane_t2_ParamLimits

0xfd2b,	// (0x0002ede7) cale_week_time_pane_t3_ParamLimits

0xfd65,	// (0x0002ee21) cale_week_time_pane_t4_ParamLimits

0xfd9f,	// (0x0002ee5b) cale_week_time_pane_t5_ParamLimits

0xfdd9,	// (0x0002ee95) cale_week_time_pane_t6_ParamLimits

0xfe13,	// (0x0002eecf) cale_week_time_pane_t7_ParamLimits

0xfe4d,	// (0x0002ef09) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0003e29c) cale_week_time_pane_t_ParamLimits

0x1b08,	// (0x00030bc4) cell_cale_week_pane_g2_ParamLimits

0xa4e8,	// (0x000395a4) bg_cale_side_pane_cp01_ParamLimits

0x2ee6,	// (0x00031fa2) cale_month_week_pane_t1_ParamLimits

0x2eff,	// (0x00031fbb) cale_month_week_pane_t2_ParamLimits

0x2f18,	// (0x00031fd4) cale_month_week_pane_t3_ParamLimits

0x2f31,	// (0x00031fed) cale_month_week_pane_t4_ParamLimits

0x2f4a,	// (0x00032006) cale_month_week_pane_t5_ParamLimits

0x2f63,	// (0x0003201f) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003e371) cale_month_week_pane_t_ParamLimits

0x30d6,	// (0x00032192) cell_cale_month_pane_g1_ParamLimits

0x9beb,	// (0x00038ca7) main_cale_event_viewer_pane

0x9beb,	// (0x00038ca7) listscroll_cale_event_viewer_pane

0xc7ce,	// (0x0003b88a) list_cale_ev_pane

0xc7d6,	// (0x0003b892) scroll_pane_cp023

0x4fe6,	// (0x000340a2) field_cale_ev_pane_ParamLimits

0x4fe6,	// (0x000340a2) field_cale_ev_pane

0xc7e2,	// (0x0003b89e) field_cale_ev_content_pane_ParamLimits

0xc7e2,	// (0x0003b89e) field_cale_ev_content_pane

0xc7ee,	// (0x0003b8aa) field_cale_ev_pane_g1_ParamLimits

0xc7ee,	// (0x0003b8aa) field_cale_ev_pane_g1

0xc7fa,	// (0x0003b8b6) field_cale_ev_pane_g2_ParamLimits

0xc7fa,	// (0x0003b8b6) field_cale_ev_pane_g2

0xc812,	// (0x0003b8ce) field_cale_ev_pane_g3_ParamLimits

0xc812,	// (0x0003b8ce) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0003e7b2) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0003e7b2) field_cale_ev_pane_g

0xc82a,	// (0x0003b8e6) field_cale_ev_pane_t1_ParamLimits

0xc82a,	// (0x0003b8e6) field_cale_ev_pane_t1

0x500a,	// (0x000340c6) field_cale_ev_content_pane_t1_ParamLimits

0x500a,	// (0x000340c6) field_cale_ev_content_pane_t1

0xaff2,	// (0x0003a0ae) bg_button_pane_cp01

0x1525,	// (0x000305e1) listscroll_cale_week_pane_ParamLimits

0x1537,	// (0x000305f3) popup_toolbar_window_cp01

0xa4b4,	// (0x00039570) listscroll_cale_week_pane_t1_ParamLimits

0x1525,	// (0x000305e1) listscroll_cale_day_pane_ParamLimits

0x1537,	// (0x000305f3) popup_toolbar_window_cp02

0xa8c8,	// (0x00039984) listscroll_cale_day_pane_t1_ParamLimits

0x1525,	// (0x000305e1) main_cale_month_pane_ParamLimits

0x4906,	// (0x000339c2) popup_toolbar_window_cp03_ParamLimits

0x4906,	// (0x000339c2) popup_toolbar_window_cp03

0x3f2c,	// (0x00032fe8) main_image_pane_g2_ParamLimits

0x3f2c,	// (0x00032fe8) main_image_pane_g2

0x3f3d,	// (0x00032ff9) main_image_pane_g3_ParamLimits

0x3f3d,	// (0x00032ff9) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003e5a3) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003e5a3) main_image_pane_g

0xb154,	// (0x0003a210) main_image_pane_t1_ParamLimits

0x3f4e,	// (0x0003300a) main_image_pane_t2_ParamLimits

0x3f4e,	// (0x0003300a) main_image_pane_t2

0x3f60,	// (0x0003301c) main_image_pane_t3_ParamLimits

0x3f60,	// (0x0003301c) main_image_pane_t3

0x3f88,	// (0x00033044) main_image_pane_t4_ParamLimits

0x3f88,	// (0x00033044) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003e5aa) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003e5aa) main_image_pane_t

0x3fa8,	// (0x00033064) popup_image_details_window_cp01

0x3fb2,	// (0x0003306e) popup_toobar_trans_pane_cp01_ParamLimits

0x3fb2,	// (0x0003306e) popup_toobar_trans_pane_cp01

0x4779,	// (0x00033835) popup_image_details_window_ParamLimits

0x4779,	// (0x00033835) popup_image_details_window

0xc314,	// (0x0003b3d0) popup_image_focus_window

0xfee5,	// (0x0002efa1) camera2_autofocus_pane_ParamLimits

0xfee5,	// (0x0002efa1) camera2_autofocus_pane

0x9beb,	// (0x00038ca7) bg_popup_sub_pane_cp06

0xc841,	// (0x0003b8fd) popup_image_focus_window_g1

0xc849,	// (0x0003b905) popup_image_focus_window_g2

0xc851,	// (0x0003b90d) popup_image_focus_window_g3

0xc859,	// (0x0003b915) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0003e7b9) popup_image_focus_window_g

0xc861,	// (0x0003b91d) popup_image_focus_window_t1

0xc86f,	// (0x0003b92b) popup_image_focus_window_t2

0xc87f,	// (0x0003b93b) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0003e7c2) popup_image_focus_window_t

0xc88d,	// (0x0003b949) camera2_autofocus_pane_g1

0x9c4c,	// (0x00038d08) bg_tb_trans_pane_cp01

0xc89b,	// (0x0003b957) popup_image_details_window_g1

0xc8ae,	// (0x0003b96a) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0003e7d4) popup_image_details_window_g

0xc8d7,	// (0x0003b993) popup_image_details_window_t1

0xc8e9,	// (0x0003b9a5) popup_image_details_window_t2

0xc902,	// (0x0003b9be) popup_image_details_window_t3

0xc916,	// (0x0003b9d2) popup_image_details_window_t4

0xc931,	// (0x0003b9ed) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0003e7db) popup_image_details_window_t

0xa379,	// (0x00039435) bg_calc_paper_pane_ParamLimits

0x1370,	// (0x0003042c) grid_highlight_pane_cp013

0x137a,	// (0x00030436) list_calc_pane_ParamLimits

0x138c,	// (0x00030448) scroll_pane_cp024

0xa38d,	// (0x00039449) bg_calc_display_pane_ParamLimits

0xfc10,	// (0x0002eccc) calc_display_pane_t1_ParamLimits

0xfc22,	// (0x0002ecde) calc_display_pane_t2_ParamLimits

0x1394,	// (0x00030450) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0003e20d) calc_display_pane_t_ParamLimits

0xfc8b,	// (0x0002ed47) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0003e22a) cell_calc_pane_g

0xfc94,	// (0x0002ed50) cell_calc_pane_t1

0xa3ec,	// (0x000394a8) grid_highlight_pane_cp02_ParamLimits

0xa402,	// (0x000394be) toolbar_button_pane_cp01_ParamLimits

0xa402,	// (0x000394be) toolbar_button_pane_cp01

0xb199,	// (0x0003a255) temp_image_control_pane_ParamLimits

0xb199,	// (0x0003a255) temp_image_control_pane

0x9c4c,	// (0x00038d08) main_mp3_pane

0xc94b,	// (0x0003ba07) temp_image_control_pane_g1_ParamLimits

0xc94b,	// (0x0003ba07) temp_image_control_pane_g1

0xc959,	// (0x0003ba15) temp_image_control_pane_g2_ParamLimits

0xc959,	// (0x0003ba15) temp_image_control_pane_g2

0xc96b,	// (0x0003ba27) temp_image_control_pane_g3_ParamLimits

0xc96b,	// (0x0003ba27) temp_image_control_pane_g3

0x505b,	// (0x00034117) temp_image_control_pane_g4_ParamLimits

0x505b,	// (0x00034117) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0003e7e6) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0003e7e6) temp_image_control_pane_g

0xc94b,	// (0x0003ba07) main_mp3_pane_g1

0x506e,	// (0x0003412a) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0003e7ef) main_mp3_pane_g

0xc9ae,	// (0x0003ba6a) main_mp3_pane_t1

0xa54b,	// (0x00039607) main_camera_pane_g8_ParamLimits

0xa54b,	// (0x00039607) main_camera_pane_g8

0x1e39,	// (0x00030ef5) main_video_pane_g7_ParamLimits

0x1e39,	// (0x00030ef5) main_video_pane_g7

0x4c1d,	// (0x00033cd9) main_camera2_pane_t7_ParamLimits

0x4c1d,	// (0x00033cd9) main_camera2_pane_t7

0xa697,	// (0x00039753) scroll_pane_cp025_ParamLimits

0xa697,	// (0x00039753) scroll_pane_cp025

0xa6ab,	// (0x00039767) scroll_pane_cp026_ParamLimits

0xa6ab,	// (0x00039767) scroll_pane_cp026

0xa6ba,	// (0x00039776) wml_content_pane_ParamLimits

0x9beb,	// (0x00038ca7) main_touch_calib_pane

0x5140,	// (0x000341fc) main_touch_calib_pane_g1

0x5152,	// (0x0003420e) main_touch_calib_pane_g2

0x5164,	// (0x00034220) main_touch_calib_pane_g3

0x5176,	// (0x00034232) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0003e80d) main_touch_calib_pane_g

0x5188,	// (0x00034244) main_touch_calib_pane_t1

0x51a2,	// (0x0003425e) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0003e816) main_touch_calib_pane_t

0xadae,	// (0x00039e6a) mup_progress_pane_cp02

0xadcd,	// (0x00039e89) navi_pane_g1

0xae2f,	// (0x00039eeb) navi_pane_mp_t3

0x9c4c,	// (0x00038d08) main_mp3_pane_ParamLimits

0x4948,	// (0x00033a04) navi_pane_ParamLimits

0xc94b,	// (0x0003ba07) main_mp3_pane_g1_ParamLimits

0x506e,	// (0x0003412a) main_mp3_pane_g2_ParamLimits

0x507a,	// (0x00034136) main_mp3_pane_g3_ParamLimits

0x507a,	// (0x00034136) main_mp3_pane_g3

0x5088,	// (0x00034144) main_mp3_pane_g4_ParamLimits

0x5088,	// (0x00034144) main_mp3_pane_g4

0xc97b,	// (0x0003ba37) main_mp3_pane_g5_ParamLimits

0xc97b,	// (0x0003ba37) main_mp3_pane_g5

0xc989,	// (0x0003ba45) main_mp3_pane_g6_ParamLimits

0xc989,	// (0x0003ba45) main_mp3_pane_g6

0xc996,	// (0x0003ba52) main_mp3_pane_g7_ParamLimits

0xc996,	// (0x0003ba52) main_mp3_pane_g7

0xc9a2,	// (0x0003ba5e) main_mp3_pane_g8_ParamLimits

0xc9a2,	// (0x0003ba5e) main_mp3_pane_g8

0xf733,	// (0x0003e7ef) main_mp3_pane_g_ParamLimits

0x5094,	// (0x00034150) main_mp3_pane_t2

0x50a2,	// (0x0003415e) main_mp3_pane_t3

0xc9bc,	// (0x0003ba78) main_mp3_pane_t4

0xc9ca,	// (0x0003ba86) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0003e800) main_mp3_pane_t

0xc9d8,	// (0x0003ba94) mup_progress_pane_cp01

0x9c09,	// (0x00038cc5) aid_zoom_text_secondary2

0xc7ce,	// (0x0003b88a) list_cale_ev2_pane

0xc7d6,	// (0x0003b892) scroll_pane_cp023_ParamLimits

0x51fc,	// (0x000342b8) field_cale_ev2_pane_ParamLimits

0x51fc,	// (0x000342b8) field_cale_ev2_pane

0x5220,	// (0x000342dc) field_cale_ev2_pane_g1_ParamLimits

0x5220,	// (0x000342dc) field_cale_ev2_pane_g1

0x522c,	// (0x000342e8) field_cale_ev2_pane_g2_ParamLimits

0x522c,	// (0x000342e8) field_cale_ev2_pane_g2

0x5244,	// (0x00034300) field_cale_ev2_pane_g3_ParamLimits

0x5244,	// (0x00034300) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0003e821) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0003e821) field_cale_ev2_pane_g

0x525c,	// (0x00034318) field_cale_ev2_pane_t1_ParamLimits

0x525c,	// (0x00034318) field_cale_ev2_pane_t1

0x5273,	// (0x0003432f) field_cale_ev2_pane_t2_ParamLimits

0x5273,	// (0x0003432f) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0003e82a) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0003e82a) field_cale_ev2_pane_t

0x3dc9,	// (0x00032e85) main_postcard_pane_g5_ParamLimits

0x3dc9,	// (0x00032e85) main_postcard_pane_g5

0x3ddf,	// (0x00032e9b) main_postcard_pane_g6_ParamLimits

0x3ddf,	// (0x00032e9b) main_postcard_pane_g6

0x1be5,	// (0x00030ca1) camera2_autofocus_pane_cp_ParamLimits

0x1be5,	// (0x00030ca1) camera2_autofocus_pane_cp

0x9c4c,	// (0x00038d08) main_mup3_pane

0x52a8,	// (0x00034364) main_mup3_pane_g1_ParamLimits

0x52a8,	// (0x00034364) main_mup3_pane_g1

0x52ca,	// (0x00034386) main_mup3_pane_g2_ParamLimits

0x52ca,	// (0x00034386) main_mup3_pane_g2

0x534d,	// (0x00034409) main_mup3_pane_g3_ParamLimits

0x534d,	// (0x00034409) main_mup3_pane_g3

0x5395,	// (0x00034451) main_mup3_pane_g4_ParamLimits

0x5395,	// (0x00034451) main_mup3_pane_g4

0x53db,	// (0x00034497) main_mup3_pane_g5_ParamLimits

0x53db,	// (0x00034497) main_mup3_pane_g5

0x5423,	// (0x000344df) main_mup3_pane_g6_ParamLimits

0x5423,	// (0x000344df) main_mup3_pane_g6

0xc9ec,	// (0x0003baa8) main_mup3_pane_g7_ParamLimits

0xc9ec,	// (0x0003baa8) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0003e83a) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0003e83a) main_mup3_pane_g

0x54a3,	// (0x0003455f) main_mup3_pane_t1_ParamLimits

0x54a3,	// (0x0003455f) main_mup3_pane_t1

0x5511,	// (0x000345cd) main_mup3_pane_t2_ParamLimits

0x5511,	// (0x000345cd) main_mup3_pane_t2

0x55e7,	// (0x000346a3) main_mup3_pane_t4_ParamLimits

0x55e7,	// (0x000346a3) main_mup3_pane_t4

0x5645,	// (0x00034701) main_mup3_pane_t5_ParamLimits

0x5645,	// (0x00034701) main_mup3_pane_t5

0x56ff,	// (0x000347bb) main_mup3_pane_t6_ParamLimits

0x56ff,	// (0x000347bb) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0003e84b) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0003e84b) main_mup3_pane_t

0x57b7,	// (0x00034873) mup3_progress_pane_ParamLimits

0x57b7,	// (0x00034873) mup3_progress_pane

0x5849,	// (0x00034905) popup_mup3_control_window_ParamLimits

0x5849,	// (0x00034905) popup_mup3_control_window

0xc9fa,	// (0x0003bab6) popup_mup3_text_window

0x587f,	// (0x0003493b) mup3_progress_pane_t1

0x589d,	// (0x00034959) mup3_progress_pane_t2

0xca02,	// (0x0003babe) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0003e858) mup3_progress_pane_t

0xca1f,	// (0x0003badb) mup_progress_pane_cp03

0x9beb,	// (0x00038ca7) bg_tb_trans_pane_cp04

0x58bb,	// (0x00034977) mup3_volume_pane

0x58c3,	// (0x0003497f) popup_mup3_control_window_g1

0x58cc,	// (0x00034988) mup3_volume_pane_g1

0x58d5,	// (0x00034991) mup3_volume_pane_g2

0x58de,	// (0x0003499a) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0003e85f) mup3_volume_pane_g

0x9beb,	// (0x00038ca7) bg_tb_trans_pane_cp03

0xca2f,	// (0x0003baeb) popup_mup3_text_window_g1

0xca37,	// (0x0003baf3) popup_mup3_text_window_t1

0xa3d5,	// (0x00039491) list_calc_item_pane_g1_ParamLimits

0xc490,	// (0x0003b54c) mup_volume_pane_cp_g1

0x51bc,	// (0x00034278) main_touch_calib_pane_t3

0x51d0,	// (0x0003428c) main_touch_calib_pane_t4

0x51e6,	// (0x000342a2) main_touch_calib_pane_t5

0x9bf5,	// (0x00038cb1) aid_cell_size_toolbar2

0x9bfd,	// (0x00038cb9) aid_popup3_width_pane

0x9c09,	// (0x00038cc5) aid_zoom_text_msg_primary

0x1bb8,	// (0x00030c74) vorec_t7

0xa399,	// (0x00039455) bg_calc_paper_pane_g1_ParamLimits

0xa3a5,	// (0x00039461) bg_calc_paper_pane_g2_ParamLimits

0xa3b1,	// (0x0003946d) bg_calc_paper_pane_g3_ParamLimits

0xa3bd,	// (0x00039479) bg_calc_paper_pane_g4_ParamLimits

0xa3c9,	// (0x00039485) bg_calc_paper_pane_g5_ParamLimits

0x13a6,	// (0x00030462) bg_calc_paper_pane_g6_ParamLimits

0x13b9,	// (0x00030475) bg_calc_paper_pane_g7_ParamLimits

0x13cc,	// (0x00030488) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0003e214) bg_calc_paper_pane_g_ParamLimits

0x13dd,	// (0x00030499) calc_bg_paper_pane_g9_ParamLimits

0x1d47,	// (0x00030e03) image_qvga_pane_ParamLimits

0x1d47,	// (0x00030e03) image_qvga_pane

0xa2c8,	// (0x00039384) bg_popup_sub_pane_cp04_ParamLimits

0xb0d0,	// (0x0003a18c) popup_mup_playback_window_g1_ParamLimits

0xb0dc,	// (0x0003a198) popup_mup_playback_window_t1_ParamLimits

0xb0f1,	// (0x0003a1ad) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003e59e) popup_mup_playback_window_t_ParamLimits

0x4c4b,	// (0x00033d07) main_mup2_pane_g3_ParamLimits

0x4c4b,	// (0x00033d07) main_mup2_pane_g3

0x213a,	// (0x000311f6) popup_toolbar_window_cp04

0xb4ec,	// (0x0003a5a8) popup_call2_audio_second_window_g3_ParamLimits

0xb4ec,	// (0x0003a5a8) popup_call2_audio_second_window_g3

0xb8f6,	// (0x0003a9b2) popup_call2_audio_first_window_g4_ParamLimits

0xb8f6,	// (0x0003a9b2) popup_call2_audio_first_window_g4

0xbf75,	// (0x0003b031) popup_call2_audio_in_window_g4_ParamLimits

0xbf75,	// (0x0003b031) popup_call2_audio_in_window_g4

0x3f0e,	// (0x00032fca) aid_area_sk_bg_cut_ParamLimits

0x3f0e,	// (0x00032fca) aid_area_sk_bg_cut

0xb106,	// (0x0003a1c2) aid_area_sk_bg_cut_2_ParamLimits

0xb106,	// (0x0003a1c2) aid_area_sk_bg_cut_2

0x4fbc,	// (0x00034078) aid_placing_details_win

0x4fc4,	// (0x00034080) aid_placing_details_win_2

0xc88d,	// (0x0003b949) camera2_autofocus_pane_g1_ParamLimits

0x1043,	// (0x000300ff) popup_fixed_preview_cale_window_ParamLimits

0x1043,	// (0x000300ff) popup_fixed_preview_cale_window

0xae76,	// (0x00039f32) navi_slider_pane_g3

0xae7f,	// (0x00039f3b) navi_slider_pane_g4

0xae88,	// (0x00039f44) navi_slider_pane_g5

0xae76,	// (0x00039f32) navi_slider_pane_g6

0x377a,	// (0x00032836) navi_slider_pane_g7

0xafb7,	// (0x0003a073) mup_scale_pane_g3

0xafc0,	// (0x0003a07c) mup_scale_pane_g4

0xafc9,	// (0x0003a085) mup_scale_pane_g5

0x3bdf,	// (0x00032c9b) mup_scale_pane_g6

0x3be8,	// (0x00032ca4) mup_scale_pane_g7

0xae76,	// (0x00039f32) cams2_slider_pane_g3

0xc51a,	// (0x0003b5d6) cams2_slider_pane_g4

0x4f05,	// (0x00033fc1) cams2_slider_pane_g5

0xae76,	// (0x00039f32) cams2_slider_pane_g6

0x4f0d,	// (0x00033fc9) cams2_slider_pane_g7

0xc74b,	// (0x0003b807) camera2_autofocus_pane_cp_g1

0xc2e6,	// (0x0003b3a2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2e6,	// (0x0003b3a2) bg_popup_preview_window_pane_cp02

0xca45,	// (0x0003bb01) list_fp_cale_pane_ParamLimits

0xca45,	// (0x0003bb01) list_fp_cale_pane

0xca51,	// (0x0003bb0d) popup_fixed_preview_cale_window_t1_ParamLimits

0xca51,	// (0x0003bb0d) popup_fixed_preview_cale_window_t1

0x58e7,	// (0x000349a3) popup_fixed_preview_cale_window_t2_ParamLimits

0x58e7,	// (0x000349a3) popup_fixed_preview_cale_window_t2

0x58fc,	// (0x000349b8) popup_fixed_preview_cale_window_t3_ParamLimits

0x58fc,	// (0x000349b8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0003e866) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0003e866) popup_fixed_preview_cale_window_t

0x5911,	// (0x000349cd) list_single_fp_cale_pane_ParamLimits

0x5911,	// (0x000349cd) list_single_fp_cale_pane

0xca6f,	// (0x0003bb2b) list_single_fp_cale_pane_g1_ParamLimits

0xca6f,	// (0x0003bb2b) list_single_fp_cale_pane_g1

0xca7b,	// (0x0003bb37) list_single_fp_cale_pane_g2_ParamLimits

0xca7b,	// (0x0003bb37) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0003e86d) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0003e86d) list_single_fp_cale_pane_g

0xca94,	// (0x0003bb50) list_single_fp_cale_pane_t1_ParamLimits

0xca94,	// (0x0003bb50) list_single_fp_cale_pane_t1

0xcaa6,	// (0x0003bb62) list_single_fp_cale_pane_t2_ParamLimits

0xcaa6,	// (0x0003bb62) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0003e874) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0003e874) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9beb,	// (0x00038ca7) main_dialer_pane

0x5926,	// (0x000349e2) aid_cell_size_keypad

0x5930,	// (0x000349ec) dialer_ne_pane

0x593a,	// (0x000349f6) grid_dialer_command_1_pane

0x5942,	// (0x000349fe) grid_dialer_command_2_pane

0x594a,	// (0x00034a06) grid_dialer_keypad_pane

0x595c,	// (0x00034a18) bg_popup_call_pane_cp06_ParamLimits

0x595c,	// (0x00034a18) bg_popup_call_pane_cp06

0x5968,	// (0x00034a24) dialer_ne_clear_pane_ParamLimits

0x5968,	// (0x00034a24) dialer_ne_clear_pane

0xcad9,	// (0x0003bb95) dialer_ne_pane_g1

0xcae1,	// (0x0003bb9d) dialer_ne_pane_t1_ParamLimits

0xcae1,	// (0x0003bb9d) dialer_ne_pane_t1

0x5974,	// (0x00034a30) dialer_ne_pane_t2_ParamLimits

0x5974,	// (0x00034a30) dialer_ne_pane_t2

0x599e,	// (0x00034a5a) dialer_ne_pane_t3_ParamLimits

0x599e,	// (0x00034a5a) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0003e879) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0003e879) dialer_ne_pane_t

0x59ce,	// (0x00034a8a) dialer_ne_pane_t3_copy1_ParamLimits

0x59ce,	// (0x00034a8a) dialer_ne_pane_t3_copy1

0x59fd,	// (0x00034ab9) cell_dialer_keypad_pane_ParamLimits

0x59fd,	// (0x00034ab9) cell_dialer_keypad_pane

0x5a14,	// (0x00034ad0) cell_dialer_command_1_pane_ParamLimits

0x5a14,	// (0x00034ad0) cell_dialer_command_1_pane

0x5a2a,	// (0x00034ae6) cell_dialer_command_2_pane_ParamLimits

0x5a2a,	// (0x00034ae6) cell_dialer_command_2_pane

0xcaf3,	// (0x0003bbaf) bg_button_pane_cp02_ParamLimits

0xcaf3,	// (0x0003bbaf) bg_button_pane_cp02

0x5a39,	// (0x00034af5) cell_dialer_keypad_pane_g1_ParamLimits

0x5a39,	// (0x00034af5) cell_dialer_keypad_pane_g1

0xcaf3,	// (0x0003bbaf) bg_button_pane_cp03_ParamLimits

0xcaf3,	// (0x0003bbaf) bg_button_pane_cp03

0x5a4e,	// (0x00034b0a) cell_dialer_command_1_pane_g1_ParamLimits

0x5a4e,	// (0x00034b0a) cell_dialer_command_1_pane_g1

0xcaff,	// (0x0003bbbb) bg_button_pane_cp04

0x5a62,	// (0x00034b1e) cell_dialer_command_2_pane_g1

0xa543,	// (0x000395ff) bg_button_pane_cp06

0xcb07,	// (0x0003bbc3) dialer_ne_clear_pane_g1

0x369f,	// (0x0003275b) navi_pane_g2

0x36cd,	// (0x00032789) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003e4a1) navi_pane_g

0x36f8,	// (0x000327b4) navi_pane_mv_g2

0x371f,	// (0x000327db) navi_pane_mv_g5

0x3727,	// (0x000327e3) navi_pane_mv_t1

0xa38d,	// (0x00039449) main_clock2_pane

0x5aad,	// (0x00034b69) main_clock2_list_pane_ParamLimits

0x5aad,	// (0x00034b69) main_clock2_list_pane

0x5ae5,	// (0x00034ba1) main_clock2_pane_t1_ParamLimits

0x5ae5,	// (0x00034ba1) main_clock2_pane_t1

0x5b21,	// (0x00034bdd) main_clock2_pane_t2_ParamLimits

0x5b21,	// (0x00034bdd) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003e885) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003e885) main_clock2_pane_t

0x5bc1,	// (0x00034c7d) popup_clock_analogue_window_cp03_ParamLimits

0x5bc1,	// (0x00034c7d) popup_clock_analogue_window_cp03

0x5be8,	// (0x00034ca4) popup_clock_digital_window_cp02_ParamLimits

0x5be8,	// (0x00034ca4) popup_clock_digital_window_cp02

0x5c61,	// (0x00034d1d) main_clock2_list_single_pane_ParamLimits

0x5c61,	// (0x00034d1d) main_clock2_list_single_pane

0xa543,	// (0x000395ff) list_highlight_pane_cp05

0xcb43,	// (0x0003bbff) main_clock2_list_single_pane_t1

0x213a,	// (0x000311f6) popup_toolbar_window_cp04_ParamLimits

0x502b,	// (0x000340e7) camera2_autofocus_pane_g2_ParamLimits

0x502b,	// (0x000340e7) camera2_autofocus_pane_g2

0x5037,	// (0x000340f3) camera2_autofocus_pane_g3_ParamLimits

0x5037,	// (0x000340f3) camera2_autofocus_pane_g3

0x5043,	// (0x000340ff) camera2_autofocus_pane_g4_ParamLimits

0x5043,	// (0x000340ff) camera2_autofocus_pane_g4

0x504f,	// (0x0003410b) camera2_autofocus_pane_g5_ParamLimits

0x504f,	// (0x0003410b) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0003e7c9) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0003e7c9) camera2_autofocus_pane_g

0x5288,	// (0x00034344) camera2_autofocus_pane_cp_g2

0x5290,	// (0x0003434c) camera2_autofocus_pane_cp_g3

0x5298,	// (0x00034354) camera2_autofocus_pane_cp_g4

0x52a0,	// (0x0003435c) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0003e82f) camera2_autofocus_pane_cp_g

0x5954,	// (0x00034a10) popup_dialer_spcha_window

0x9beb,	// (0x00038ca7) bg_popup_sub_pane_cp07

0xcb51,	// (0x0003bc0d) list_spcha_pane

0xcb59,	// (0x0003bc15) list_single_spcha_pane_ParamLimits

0xcb59,	// (0x0003bc15) list_single_spcha_pane

0x9beb,	// (0x00038ca7) list_highlight_pane_cp06

0xcb6a,	// (0x0003bc26) list_single_spcha_pane_t1

0xbd1f,	// (0x0003addb) popup_call2_audio_out_window_g4_ParamLimits

0xbd1f,	// (0x0003addb) popup_call2_audio_out_window_g4

0x9beb,	// (0x00038ca7) main_imed2_pane

0xc31e,	// (0x0003b3da) popup_imed_adjust2_window

0x4791,	// (0x0003384d) popup_imed_trans_window_ParamLimits

0x4791,	// (0x0003384d) popup_imed_trans_window

0xc583,	// (0x0003b63f) popup_blid_sat_info2_window_t1

0xc591,	// (0x0003b64d) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0003e75e) popup_blid_sat_info2_window_t

0x5c95,	// (0x00034d51) aid_size_cell_colour_35

0x5cb5,	// (0x00034d71) aid_size_cell_colour_112

0x5cd5,	// (0x00034d91) aid_size_cell_effect

0xc2f2,	// (0x0003b3ae) bg_tb_trans_pane_cp02

0xa9d9,	// (0x00039a95) heading_imed_pane

0x5cf5,	// (0x00034db1) listscroll_imed_pane

0xcb78,	// (0x0003bc34) heading_imed_pane_g1

0xcb80,	// (0x0003bc3c) heading_imed_pane_t1

0xcb8e,	// (0x0003bc4a) grid_imed_colour_35_pane_ParamLimits

0xcb8e,	// (0x0003bc4a) grid_imed_colour_35_pane

0x5d01,	// (0x00034dbd) grid_imed_effect_pane

0xcbaa,	// (0x0003bc66) list_imed_aspect_pane

0x5d16,	// (0x00034dd2) scroll_pane_cp027_ParamLimits

0x5d16,	// (0x00034dd2) scroll_pane_cp027

0x5d27,	// (0x00034de3) cell_imed_effect_pane_ParamLimits

0x5d27,	// (0x00034de3) cell_imed_effect_pane

0xcbb2,	// (0x0003bc6e) cell_imed_colour_pane_ParamLimits

0xcbb2,	// (0x0003bc6e) cell_imed_colour_pane

0xcbfc,	// (0x0003bcb8) cell_imed_colour_pane_g1_ParamLimits

0xcbfc,	// (0x0003bcb8) cell_imed_colour_pane_g1

0xcc0d,	// (0x0003bcc9) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc0d,	// (0x0003bcc9) hgihlgiht_grid_pane_cp016

0x5d52,	// (0x00034e0e) cell_imed_effect_pane_g1

0x5d5a,	// (0x00034e16) grid_highlight_pane_cp017

0xcc1e,	// (0x0003bcda) list_imed_single_pane_ParamLimits

0xcc1e,	// (0x0003bcda) list_imed_single_pane

0x9beb,	// (0x00038ca7) list_highlight_pane_cp07

0xcc32,	// (0x0003bcee) list_imed_aspect_pane_comp1_t1

0xc2f2,	// (0x0003b3ae) bg_tb_trans_pane_cp05

0xcc54,	// (0x0003bd10) popup_imed_adjust2_window_g1

0xcc7b,	// (0x0003bd37) popup_imed_adjust2_window_t1

0xcc93,	// (0x0003bd4f) slider_imed_adjust_pane

0xcca7,	// (0x0003bd63) slider_imed_adjust_pane_g1

0xccb7,	// (0x0003bd73) slider_imed_adjust_pane_g2

0xccc7,	// (0x0003bd83) slider_imed_adjust_pane_g3

0xccd8,	// (0x0003bd94) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003e8a2) slider_imed_adjust_pane_g

0x5d63,	// (0x00034e1f) aid_size_cell_clipart2

0x5d6f,	// (0x00034e2b) grid_imed_clipart_pane

0xcce9,	// (0x0003bda5) scroll_pane_cp031

0x5d79,	// (0x00034e35) cell_imed_clipart_pane_ParamLimits

0x5d79,	// (0x00034e35) cell_imed_clipart_pane

0x5d96,	// (0x00034e52) cell_imed_clipart_pane_g1

0x9beb,	// (0x00038ca7) grid_highlight_pane_cp014

0x5ac2,	// (0x00034b7e) main_clock2_pane_g1_ParamLimits

0x5ac2,	// (0x00034b7e) main_clock2_pane_g1

0x5c08,	// (0x00034cc4) aid_call2_pane_cp10

0x5c1a,	// (0x00034cd6) aid_call_pane_cp10

0xada2,	// (0x00039e5e) popup_clock_analogue_window_cp10_g1

0xada2,	// (0x00039e5e) popup_clock_analogue_window_cp10_g2

0x5c2c,	// (0x00034ce8) popup_clock_analogue_window_cp10_g3

0x5c2c,	// (0x00034ce8) popup_clock_analogue_window_cp10_g4

0xada2,	// (0x00039e5e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003e890) popup_clock_analogue_window_cp10_g

0x5c42,	// (0x00034cfe) popup_clock_analogue_window_cp10_t1

0x034d,	// (0x0002f409) clock_digital_number_pane_cp10_ParamLimits

0x034d,	// (0x0002f409) clock_digital_number_pane_cp10

0x0367,	// (0x0002f423) clock_digital_number_pane_cp11_ParamLimits

0x0367,	// (0x0002f423) clock_digital_number_pane_cp11

0x0381,	// (0x0002f43d) clock_digital_number_pane_cp12_ParamLimits

0x0381,	// (0x0002f43d) clock_digital_number_pane_cp12

0x039b,	// (0x0002f457) clock_digital_number_pane_cp13_ParamLimits

0x039b,	// (0x0002f457) clock_digital_number_pane_cp13

0x03b5,	// (0x0002f471) clock_digital_separator_pane_cp10_ParamLimits

0x03b5,	// (0x0002f471) clock_digital_separator_pane_cp10

0x5c73,	// (0x00034d2f) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c73,	// (0x00034d2f) popup_clock_digital_window_cp02_t1

0xa2c0,	// (0x0003937c) clock_digital_number_pane_cp10_g1

0xa2c0,	// (0x0003937c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003e8ab) clock_digital_number_pane_cp10_g

0xa2c0,	// (0x0003937c) clock_digital_separator_pane_cp10_g1

0xa2c0,	// (0x0003937c) clock_digital_separator_pane_g2_cp10

0xae3d,	// (0x00039ef9) navi_pane_vded_g4

0xae46,	// (0x00039f02) navi_pane_vded_g5

0xae4f,	// (0x00039f0b) navi_pane_vded_t1

0x9beb,	// (0x00038ca7) main_vded_pane

0x5d9f,	// (0x00034e5b) main_vded_pane_g1

0x5dab,	// (0x00034e67) main_vded_pane_g2

0x5db7,	// (0x00034e73) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003e8b0) main_vded_pane_g

0x5dc3,	// (0x00034e7f) main_vded_pane_t1

0x5dd1,	// (0x00034e8d) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003e8b7) main_vded_pane_t

0x5ddf,	// (0x00034e9b) vded_slider_pane

0x5de9,	// (0x00034ea5) vded_video_pane

0xccf1,	// (0x0003bdad) vded_video_pane_g1

0x5df3,	// (0x00034eaf) vded_video_pane_g2

0xc74b,	// (0x0003b807) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003e8bc) vded_video_pane_g

0xccfb,	// (0x0003bdb7) vded_slider_pane_g1

0xc490,	// (0x0003b54c) vded_slider_pane_g2

0xcd04,	// (0x0003bdc0) vded_slider_pane_g3

0xcd0d,	// (0x0003bdc9) vded_slider_pane_g4

0xcd16,	// (0x0003bdd2) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003e8c3) vded_slider_pane_g

0x5833,	// (0x000348ef) mup3_rocker_pane_ParamLimits

0x5833,	// (0x000348ef) mup3_rocker_pane

0x5dfc,	// (0x00034eb8) mup3_control_keys_pane_g1

0x5e04,	// (0x00034ec0) mup3_control_keys_pane_g2

0x5e0c,	// (0x00034ec8) mup3_control_keys_pane_g3

0x5e14,	// (0x00034ed0) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003e8ce) mup3_control_keys_pane_g

0x107a,	// (0x00030136) popup_toolbar2_fixed_window_cp01_ParamLimits

0x107a,	// (0x00030136) popup_toolbar2_fixed_window_cp01

0x5869,	// (0x00034925) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5869,	// (0x00034925) popup_toolbar2_fixed_window_cp02

0xb65e,	// (0x0003a71a) popup_call2_audio_second_window_t4_ParamLimits

0xb65e,	// (0x0003a71a) popup_call2_audio_second_window_t4

0xbb8c,	// (0x0003ac48) popup_call2_audio_first_window_t6_ParamLimits

0xbb8c,	// (0x0003ac48) popup_call2_audio_first_window_t6

0xbe22,	// (0x0003aede) popup_call2_audio_out_window_t6_ParamLimits

0xbe22,	// (0x0003aede) popup_call2_audio_out_window_t6

0x9beb,	// (0x00038ca7) main_vitu_pane

0x5e24,	// (0x00034ee0) aid_size_cell_itu_ParamLimits

0x5e24,	// (0x00034ee0) aid_size_cell_itu

0x9c4c,	// (0x00038d08) bg_popup_window_pane_cp08_ParamLimits

0x9c4c,	// (0x00038d08) bg_popup_window_pane_cp08

0x5e3a,	// (0x00034ef6) field_vitu_entry_pane_ParamLimits

0x5e3a,	// (0x00034ef6) field_vitu_entry_pane

0x5e51,	// (0x00034f0d) grid_vitu_function_pane_ParamLimits

0x5e51,	// (0x00034f0d) grid_vitu_function_pane

0x5e6c,	// (0x00034f28) grid_vitu_itu_pane_ParamLimits

0x5e6c,	// (0x00034f28) grid_vitu_itu_pane

0x5e8a,	// (0x00034f46) cell_vitu_itu_pane_ParamLimits

0x5e8a,	// (0x00034f46) cell_vitu_itu_pane

0x5eb0,	// (0x00034f6c) cell_vitu_function_pane_ParamLimits

0x5eb0,	// (0x00034f6c) cell_vitu_function_pane

0x9c4c,	// (0x00038d08) bg_popup_sub_pane_cp08_ParamLimits

0x9c4c,	// (0x00038d08) bg_popup_sub_pane_cp08

0x5ecb,	// (0x00034f87) field_vitu_entry_pane_t1_ParamLimits

0x5ecb,	// (0x00034f87) field_vitu_entry_pane_t1

0xcd37,	// (0x0003bdf3) field_vitu_entry_pane_t2_ParamLimits

0xcd37,	// (0x0003bdf3) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003e8dc) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003e8dc) field_vitu_entry_pane_t

0xcd54,	// (0x0003be10) bg_button_pane_cp05_ParamLimits

0xcd54,	// (0x0003be10) bg_button_pane_cp05

0x5eeb,	// (0x00034fa7) cell_vitu_itu_pane_g1

0x5f03,	// (0x00034fbf) cell_vitu_itu_pane_t1_ParamLimits

0x5f03,	// (0x00034fbf) cell_vitu_itu_pane_t1

0x5f15,	// (0x00034fd1) cell_vitu_itu_pane_t2_ParamLimits

0x5f15,	// (0x00034fd1) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003e8e1) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003e8e1) cell_vitu_itu_pane_t

0xcd62,	// (0x0003be1e) bg_button_pane_cp07

0x5f4a,	// (0x00035006) cell_vitu_function_pane_g1

0x1296,	// (0x00030352) main_calc_pane_g1

0x0e9e,	// (0x0002ff5a) aid_visual_content_pane

0x9beb,	// (0x00038ca7) main_vradio_pane

0x5f53,	// (0x0003500f) main_vradio_pane_g1_ParamLimits

0x5f53,	// (0x0003500f) main_vradio_pane_g1

0xcd6c,	// (0x0003be28) main_vradio_pane_g2_ParamLimits

0xcd6c,	// (0x0003be28) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003e8e8) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003e8e8) main_vradio_pane_g

0x5f6a,	// (0x00035026) main_vradio_pane_t1_ParamLimits

0x5f6a,	// (0x00035026) main_vradio_pane_t1

0x5f7f,	// (0x0003503b) main_vradio_pane_t2_ParamLimits

0x5f7f,	// (0x0003503b) main_vradio_pane_t2

0xcd79,	// (0x0003be35) main_vradio_pane_t3_ParamLimits

0xcd79,	// (0x0003be35) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003e8ed) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003e8ed) main_vradio_pane_t

0x5f94,	// (0x00035050) vradio_rocker_control_pane_ParamLimits

0x5f94,	// (0x00035050) vradio_rocker_control_pane

0x5fa6,	// (0x00035062) vradio_station_info_pane_ParamLimits

0x5fa6,	// (0x00035062) vradio_station_info_pane

0xcd8d,	// (0x0003be49) vradio_frequency_info_pane_ParamLimits

0xcd8d,	// (0x0003be49) vradio_frequency_info_pane

0xc74b,	// (0x0003b807) vradio_station_info_pane_g1

0xcd9c,	// (0x0003be58) vradio_station_info_pane_t1_ParamLimits

0xcd9c,	// (0x0003be58) vradio_station_info_pane_t1

0xcdbe,	// (0x0003be7a) vradio_station_info_pane_t2_ParamLimits

0xcdbe,	// (0x0003be7a) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003e8f4) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003e8f4) vradio_station_info_pane_t

0xcdd0,	// (0x0003be8c) vradio_tuning_pane

0xcdd8,	// (0x0003be94) vradio_rocker_control_pane_g1

0xcde0,	// (0x0003be9c) vradio_rocker_control_pane_g2

0xcde8,	// (0x0003bea4) vradio_rocker_control_pane_g3

0xcdf0,	// (0x0003beac) vradio_rocker_control_pane_g4

0xcdf8,	// (0x0003beb4) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003e8f9) vradio_rocker_control_pane_g

0x5fb6,	// (0x00035072) vradio_frequency_info_pane_g1

0xce00,	// (0x0003bebc) vradio_frequency_info_pane_t1_ParamLimits

0xce00,	// (0x0003bebc) vradio_frequency_info_pane_t1

0x5fc0,	// (0x0003507c) vradio_tuning_pane_g1

0x5fcb,	// (0x00035087) vradio_tuning_pane_t1

0x9c19,	// (0x00038cd5) area_side_right_pane_ParamLimits

0x9c19,	// (0x00038cd5) area_side_right_pane

0xc2ad,	// (0x0003b369) status_small_pane_g1

0xc2b5,	// (0x0003b371) status_small_pane_g2

0xc2be,	// (0x0003b37a) status_small_pane_g3

0xc2c7,	// (0x0003b383) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0003e6b4) status_small_pane_g

0xc2d0,	// (0x0003b38c) status_small_pane_t1

0x9beb,	// (0x00038ca7) main_video3_pane

0xce14,	// (0x0003bed0) cams_zoom_vslider_pane

0xce1c,	// (0x0003bed8) image3_wide_pane_ParamLimits

0xce1c,	// (0x0003bed8) image3_wide_pane

0xce36,	// (0x0003bef2) image3_wide_small_pane

0xce42,	// (0x0003befe) main_video3_pane_g1_ParamLimits

0xce42,	// (0x0003befe) main_video3_pane_g1

0xce5e,	// (0x0003bf1a) main_video3_pane_g2_ParamLimits

0xce5e,	// (0x0003bf1a) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003e904) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003e904) main_video3_pane_g

0xce7a,	// (0x0003bf36) main_video3_pane_t1_ParamLimits

0xce7a,	// (0x0003bf36) main_video3_pane_t1

0xcea5,	// (0x0003bf61) main_video3_pane_t2_ParamLimits

0xcea5,	// (0x0003bf61) main_video3_pane_t2

0xced2,	// (0x0003bf8e) main_video3_pane_t3_ParamLimits

0xced2,	// (0x0003bf8e) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003e909) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003e909) main_video3_pane_t

0xceff,	// (0x0003bfbb) cams_zoom_vslider_pane_g1

0xcf08,	// (0x0003bfc4) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003e910) cams_zoom_vslider_pane_g

0xcf10,	// (0x0003bfcc) small_slider_vertical_pane

0xc74b,	// (0x0003b807) small_slider_vertical_pane_g1

0xc74b,	// (0x0003b807) small_slider_vertical_pane_g2

0xcf18,	// (0x0003bfd4) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003e915) small_slider_vertical_pane_g

0x9beb,	// (0x00038ca7) main_hwr_training_pane

0xcf21,	// (0x0003bfdd) hwr_training_instruct_pane_ParamLimits

0xcf21,	// (0x0003bfdd) hwr_training_instruct_pane

0x5fda,	// (0x00035096) hwr_training_navi_pane_ParamLimits

0x5fda,	// (0x00035096) hwr_training_navi_pane

0x5ff9,	// (0x000350b5) hwr_training_write_pane_ParamLimits

0x5ff9,	// (0x000350b5) hwr_training_write_pane

0x9beb,	// (0x00038ca7) bg_frame_shadow_pane

0xcf58,	// (0x0003c014) hwr_training_write_pane_g1

0xcf60,	// (0x0003c01c) hwr_training_write_pane_g2

0xcf68,	// (0x0003c024) hwr_training_write_pane_g3

0xcf70,	// (0x0003c02c) hwr_training_write_pane_g4

0xcf78,	// (0x0003c034) hwr_training_write_pane_g5

0xcf80,	// (0x0003c03c) hwr_training_write_pane_g6

0xcf88,	// (0x0003c044) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003e91c) hwr_training_write_pane_g

0x6034,	// (0x000350f0) hwr_training_navi_pane_g1_ParamLimits

0x6034,	// (0x000350f0) hwr_training_navi_pane_g1

0x6046,	// (0x00035102) hwr_training_navi_pane_g2_ParamLimits

0x6046,	// (0x00035102) hwr_training_navi_pane_g2

0x6058,	// (0x00035114) hwr_training_navi_pane_g3_ParamLimits

0x6058,	// (0x00035114) hwr_training_navi_pane_g3

0x6068,	// (0x00035124) hwr_training_navi_pane_g4_ParamLimits

0x6068,	// (0x00035124) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003e92b) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003e92b) hwr_training_navi_pane_g

0x6075,	// (0x00035131) hwr_training_navi_pane_t1

0x6083,	// (0x0003513f) list_single_hwr_training_instruct_pane_ParamLimits

0x6083,	// (0x0003513f) list_single_hwr_training_instruct_pane

0xcf90,	// (0x0003c04c) list_single_hwr_training_instruct_pane_t1

0xc68b,	// (0x0003b747) bg_frame_shadow_pane_g1

0xcf9f,	// (0x0003c05b) bg_frame_shadow_pane_g2

0xcfa7,	// (0x0003c063) bg_frame_shadow_pane_g3

0xcfaf,	// (0x0003c06b) bg_frame_shadow_pane_g4

0xcfb7,	// (0x0003c073) bg_frame_shadow_pane_g5

0xcfbf,	// (0x0003c07b) bg_frame_shadow_pane_g6

0xcfc7,	// (0x0003c083) bg_frame_shadow_pane_g7

0xa458,	// (0x00039514) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003e936) bg_frame_shadow_pane_g

0x9beb,	// (0x00038ca7) main_video_tele_dialer_pane

0x03dc,	// (0x0002f498) aid_size_cell_video_keypad_ParamLimits

0x03dc,	// (0x0002f498) aid_size_cell_video_keypad

0x03f6,	// (0x0002f4b2) grid_video_dialer_keypad_pane_ParamLimits

0x03f6,	// (0x0002f4b2) grid_video_dialer_keypad_pane

0x0442,	// (0x0002f4fe) video_down_pane_cp_ParamLimits

0x0442,	// (0x0002f4fe) video_down_pane_cp

0x0456,	// (0x0002f512) cell_video_dialer_keypad_pane_ParamLimits

0x0456,	// (0x0002f512) cell_video_dialer_keypad_pane

0xcfcf,	// (0x0003c08b) bg_button_pane_cp08_ParamLimits

0xcfcf,	// (0x0003c08b) bg_button_pane_cp08

0x60b4,	// (0x00035170) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60b4,	// (0x00035170) cell_video_dialer_keypad_pane_g1

0x581d,	// (0x000348d9) mup3_rocker2_pane_ParamLimits

0x581d,	// (0x000348d9) mup3_rocker2_pane

0xc74b,	// (0x0003b807) mup3_rocker2_pane_g1

0x465e,	// (0x0003371a) main_dialer2_pane

0x9beb,	// (0x00038ca7) main_mp4_pane

0x60f7,	// (0x000351b3) main_mp4_pane_g1_ParamLimits

0x60f7,	// (0x000351b3) main_mp4_pane_g1

0x60f7,	// (0x000351b3) main_mp4_pane_g2_ParamLimits

0x60f7,	// (0x000351b3) main_mp4_pane_g2

0x047a,	// (0x0002f536) main_mp4_pane_g3_ParamLimits

0x047a,	// (0x0002f536) main_mp4_pane_g3

0x6105,	// (0x000351c1) main_mp4_pane_g4_ParamLimits

0x6105,	// (0x000351c1) main_mp4_pane_g4

0x612d,	// (0x000351e9) main_mp4_pane_g5_ParamLimits

0x612d,	// (0x000351e9) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003e956) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003e956) main_mp4_pane_g

0x617d,	// (0x00035239) main_mp4_pane_t1_ParamLimits

0x617d,	// (0x00035239) main_mp4_pane_t1

0x61d9,	// (0x00035295) main_mp4_pane_t2_ParamLimits

0x61d9,	// (0x00035295) main_mp4_pane_t2

0xcfdb,	// (0x0003c097) main_mp4_pane_t3_ParamLimits

0xcfdb,	// (0x0003c097) main_mp4_pane_t3

0x622b,	// (0x000352e7) main_mp4_pane_t4_ParamLimits

0x622b,	// (0x000352e7) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003e963) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003e963) main_mp4_pane_t

0x626b,	// (0x00035327) mp4_progress_pane_ParamLimits

0x626b,	// (0x00035327) mp4_progress_pane

0x62b5,	// (0x00035371) mp4_rocker_pane_ParamLimits

0x62b5,	// (0x00035371) mp4_rocker_pane

0xd003,	// (0x0003c0bf) mp4_progress_pane_t1

0xd01c,	// (0x0003c0d8) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003e96c) mp4_progress_pane_t

0xd035,	// (0x0003c0f1) mup_progress_pane_cp04

0xd041,	// (0x0003c0fd) mp4_rocker_pane_g1

0x04c4,	// (0x0002f580) aid_cell_size_keypad2_ParamLimits

0x04c4,	// (0x0002f580) aid_cell_size_keypad2

0x04da,	// (0x0002f596) dialer2_ne_pane_ParamLimits

0x04da,	// (0x0002f596) dialer2_ne_pane

0x04f2,	// (0x0002f5ae) grid_dialer2_keypad_pane_ParamLimits

0x04f2,	// (0x0002f5ae) grid_dialer2_keypad_pane

0xc52a,	// (0x0003b5e6) bg_popup_call_pane_cp07_ParamLimits

0xc52a,	// (0x0003b5e6) bg_popup_call_pane_cp07

0x62d7,	// (0x00035393) dialer2_ne_pane_t1_ParamLimits

0x62d7,	// (0x00035393) dialer2_ne_pane_t1

0x050e,	// (0x0002f5ca) cell_dialer2_keypad_pane_ParamLimits

0x050e,	// (0x0002f5ca) cell_dialer2_keypad_pane

0xd05d,	// (0x0003c119) bg_button_pane_pane_cp04_ParamLimits

0xd05d,	// (0x0003c119) bg_button_pane_pane_cp04

0x6312,	// (0x000353ce) cell_dialer2_keypad_pane_g1_ParamLimits

0x6312,	// (0x000353ce) cell_dialer2_keypad_pane_g1

0x2021,	// (0x000310dd) aid_placing_vt_set_content_ParamLimits

0x2021,	// (0x000310dd) aid_placing_vt_set_content

0x2045,	// (0x00031101) aid_placing_vt_set_title_ParamLimits

0x2045,	// (0x00031101) aid_placing_vt_set_title

0x9beb,	// (0x00038ca7) main_image3_pane

0x0590,	// (0x0002f64c) area_side_right_pane_cp01_ParamLimits

0x0590,	// (0x0002f64c) area_side_right_pane_cp01

0x60f7,	// (0x000351b3) main_image3_pane_g1_ParamLimits

0x60f7,	// (0x000351b3) main_image3_pane_g1

0x05a9,	// (0x0002f665) main_image3_pane_g2_ParamLimits

0x05a9,	// (0x0002f665) main_image3_pane_g2

0x05d1,	// (0x0002f68d) main_image3_pane_g3_ParamLimits

0x05d1,	// (0x0002f68d) main_image3_pane_g3

0x05fb,	// (0x0002f6b7) main_image3_pane_g4_ParamLimits

0x05fb,	// (0x0002f6b7) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003e97b) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003e97b) main_image3_pane_g

0x0625,	// (0x0002f6e1) main_image3_pane_t1_ParamLimits

0x0625,	// (0x0002f6e1) main_image3_pane_t1

0x067d,	// (0x0002f739) main_image3_pane_t2_ParamLimits

0x067d,	// (0x0002f739) main_image3_pane_t2

0x06cf,	// (0x0002f78b) main_image3_pane_t3_ParamLimits

0x06cf,	// (0x0002f78b) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003e984) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003e984) main_image3_pane_t

0x9c4c,	// (0x00038d08) grid_sctrl_middle_pane_cp01_ParamLimits

0x9c4c,	// (0x00038d08) grid_sctrl_middle_pane_cp01

0x63ae,	// (0x0003546a) cell_sctrl_middle_pane_cp01_ParamLimits

0x63ae,	// (0x0003546a) cell_sctrl_middle_pane_cp01

0x63cb,	// (0x00035487) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63cb,	// (0x00035487) cell_sctrl_middle_pane_cp01_g1

0x9beb,	// (0x00038ca7) main_call4_pane

0x63e0,	// (0x0003549c) aid_size_button_call4_ParamLimits

0x63e0,	// (0x0003549c) aid_size_button_call4

0x6413,	// (0x000354cf) call4_windows_pane_ParamLimits

0x6413,	// (0x000354cf) call4_windows_pane

0x6435,	// (0x000354f1) grid_call4_button_pane_ParamLimits

0x6435,	// (0x000354f1) grid_call4_button_pane

0xd069,	// (0x0003c125) call4_windows_conf_pane

0x6460,	// (0x0003551c) popup_call4_audio_first_window_ParamLimits

0x6460,	// (0x0003551c) popup_call4_audio_first_window

0x648c,	// (0x00035548) popup_call4_audio_second_window_ParamLimits

0x648c,	// (0x00035548) popup_call4_audio_second_window

0xd0a6,	// (0x0003c162) popup_call4_audio_wait_window_ParamLimits

0xd0a6,	// (0x0003c162) popup_call4_audio_wait_window

0x64a2,	// (0x0003555e) cell_call4_button_pane_ParamLimits

0x64a2,	// (0x0003555e) cell_call4_button_pane

0x64c9,	// (0x00035585) bg_button_pane_cp09_ParamLimits

0x64c9,	// (0x00035585) bg_button_pane_cp09

0x64d5,	// (0x00035591) cell_call4_button_pane_g1_ParamLimits

0x64d5,	// (0x00035591) cell_call4_button_pane_g1

0x64fb,	// (0x000355b7) cell_call4_button_pane_t1_ParamLimits

0x64fb,	// (0x000355b7) cell_call4_button_pane_t1

0xd0ee,	// (0x0003c1aa) popup_call4_audio_conf_window_ParamLimits

0xd0ee,	// (0x0003c1aa) popup_call4_audio_conf_window

0x587f,	// (0x0003493b) mup3_progress_pane_t1_ParamLimits

0x589d,	// (0x00034959) mup3_progress_pane_t2_ParamLimits

0xca02,	// (0x0003babe) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0003e858) mup3_progress_pane_t_ParamLimits

0xca1f,	// (0x0003badb) mup_progress_pane_cp03_ParamLimits

0x5e1c,	// (0x00034ed8) mup3_control_keys_pane_g4_copy1

0x6299,	// (0x00035355) mp4_rocker2_pane_ParamLimits

0x6299,	// (0x00035355) mp4_rocker2_pane

0xd108,	// (0x0003c1c4) mp4_rocker2_pane_g1

0xd110,	// (0x0003c1cc) mp4_rocker2_pane_g2

0x6521,	// (0x000355dd) mp4_rocker2_pane_g3

0x6529,	// (0x000355e5) mp4_rocker2_pane_g4

0x6531,	// (0x000355ed) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003e98d) mp4_rocker2_pane_g

0x9beb,	// (0x00038ca7) main_camera4_pane

0x9beb,	// (0x00038ca7) main_video4_pane

0x0410,	// (0x0002f4cc) main_video_tele_dialer_pane_t1_ParamLimits

0x0410,	// (0x0002f4cc) main_video_tele_dialer_pane_t1

0x0429,	// (0x0002f4e5) main_video_tele_dialer_pane_t2_ParamLimits

0x0429,	// (0x0002f4e5) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003e947) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003e947) main_video_tele_dialer_pane_t

0x076f,	// (0x0002f82b) cam4_autofocus_pane_ParamLimits

0x076f,	// (0x0002f82b) cam4_autofocus_pane

0x0785,	// (0x0002f841) cam4_image_uncrop_pane_ParamLimits

0x0785,	// (0x0002f841) cam4_image_uncrop_pane

0x079e,	// (0x0002f85a) cam4_indicators_pane_ParamLimits

0x079e,	// (0x0002f85a) cam4_indicators_pane

0x07cd,	// (0x0002f889) main_camera4_pane_g1_ParamLimits

0x07cd,	// (0x0002f889) main_camera4_pane_g1

0x07df,	// (0x0002f89b) main_camera4_pane_g2_ParamLimits

0x07df,	// (0x0002f89b) main_camera4_pane_g2

0x07f2,	// (0x0002f8ae) main_camera4_pane_g3_ParamLimits

0x07f2,	// (0x0002f8ae) main_camera4_pane_g3

0x0805,	// (0x0002f8c1) main_camera4_pane_g4_ParamLimits

0x0805,	// (0x0002f8c1) main_camera4_pane_g4

0x0818,	// (0x0002f8d4) main_camera4_pane_g5_ParamLimits

0x0818,	// (0x0002f8d4) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003e998) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003e998) main_camera4_pane_g

0x083c,	// (0x0002f8f8) main_camera4_pane_t1_ParamLimits

0x083c,	// (0x0002f8f8) main_camera4_pane_t1

0x656b,	// (0x00035627) bg_tb_trans_pane_cp06

0x6581,	// (0x0003563d) cam4_indicators_pane_g1

0x6592,	// (0x0003564e) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003e9b3) cam4_indicators_pane_g

0x65aa,	// (0x00035666) cam4_indicators_pane_t1

0x088c,	// (0x0002f948) main_video4_pane_g1_ParamLimits

0x088c,	// (0x0002f948) main_video4_pane_g1

0x089b,	// (0x0002f957) main_video4_pane_g2_ParamLimits

0x089b,	// (0x0002f957) main_video4_pane_g2

0x08aa,	// (0x0002f966) main_video4_pane_g3_ParamLimits

0x08aa,	// (0x0002f966) main_video4_pane_g3

0x08b9,	// (0x0002f975) main_video4_pane_g4_ParamLimits

0x08b9,	// (0x0002f975) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003e9ba) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003e9ba) main_video4_pane_g

0x08d7,	// (0x0002f993) vid4_indicators_pane_ParamLimits

0x08d7,	// (0x0002f993) vid4_indicators_pane

0x0905,	// (0x0002f9c1) video4_image_uncrop_cif_pane_ParamLimits

0x0905,	// (0x0002f9c1) video4_image_uncrop_cif_pane

0x091f,	// (0x0002f9db) video4_image_uncrop_nhd_pane_ParamLimits

0x091f,	// (0x0002f9db) video4_image_uncrop_nhd_pane

0x0785,	// (0x0002f841) video4_image_uncrop_vga_pane_ParamLimits

0x0785,	// (0x0002f841) video4_image_uncrop_vga_pane

0x65ce,	// (0x0003568a) bg_tb_trans_pane_cp07

0x65e6,	// (0x000356a2) vid4_indicators_pane_g1

0x65fc,	// (0x000356b8) vid4_indicators_pane_g2

0x6610,	// (0x000356cc) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003e9c5) vid4_indicators_pane_g

0x6641,	// (0x000356fd) vid4_indicators_pane_t1

0x6658,	// (0x00035714) cam4_autofocus_pane_g1

0x6660,	// (0x0003571c) cam4_autofocus_pane_g2

0x6668,	// (0x00035724) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003e9d0) cam4_autofocus_pane_g

0x6670,	// (0x0003572c) cam4_autofocus_pane_g3_copy1

0x6098,	// (0x00035154) video_down_pane_cp_t1

0x60a6,	// (0x00035162) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003e94c) video_down_pane_cp_t

0x9c4c,	// (0x00038d08) popup_vitu2_window_ParamLimits

0x9c4c,	// (0x00038d08) popup_vitu2_window

0x0935,	// (0x0002f9f1) aid_size_cell2_itu2_ParamLimits

0x0935,	// (0x0002f9f1) aid_size_cell2_itu2

0x095b,	// (0x0002fa17) aid_size_cell_itu2_ParamLimits

0x095b,	// (0x0002fa17) aid_size_cell_itu2

0x09bb,	// (0x0002fa77) bg_popup_window_pane_cp09_ParamLimits

0x09bb,	// (0x0002fa77) bg_popup_window_pane_cp09

0x09c9,	// (0x0002fa85) field_vitu2_entry_pane_ParamLimits

0x09c9,	// (0x0002fa85) field_vitu2_entry_pane

0x09f1,	// (0x0002faad) grid_vitu2_function_pane_ParamLimits

0x09f1,	// (0x0002faad) grid_vitu2_function_pane

0x0a42,	// (0x0002fafe) grid_vitu2_itu_pane_ParamLimits

0x0a42,	// (0x0002fafe) grid_vitu2_itu_pane

0x0ad6,	// (0x0002fb92) cell_vitu2_itu_pane_ParamLimits

0x0ad6,	// (0x0002fb92) cell_vitu2_itu_pane

0x0afc,	// (0x0002fbb8) cell_vitu2_function_pane_ParamLimits

0x0afc,	// (0x0002fbb8) cell_vitu2_function_pane

0xd118,	// (0x0003c1d4) bg_popup_call_pane_cp08_ParamLimits

0xd118,	// (0x0003c1d4) bg_popup_call_pane_cp08

0xd12f,	// (0x0003c1eb) field_vitu2_entry_pane_g1

0xd13b,	// (0x0003c1f7) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003e9d7) field_vitu2_entry_pane_g

0x6678,	// (0x00035734) field_vitu2_entry_pane_t1_ParamLimits

0x6678,	// (0x00035734) field_vitu2_entry_pane_t1

0xd155,	// (0x0003c211) field_vitu2_entry_pane_t2_ParamLimits

0xd155,	// (0x0003c211) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003e9de) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003e9de) field_vitu2_entry_pane_t

0x0b40,	// (0x0002fbfc) bg_button_pane_cp010_ParamLimits

0x0b40,	// (0x0002fbfc) bg_button_pane_cp010

0x66a7,	// (0x00035763) cell_vitu2_itu_pane_g1

0x0b5c,	// (0x0002fc18) cell_vitu2_itu_pane_t1_ParamLimits

0x0b5c,	// (0x0002fc18) cell_vitu2_itu_pane_t1

0x0bba,	// (0x0002fc76) cell_vitu2_itu_pane_t2_ParamLimits

0x0bba,	// (0x0002fc76) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003e9e8) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003e9e8) cell_vitu2_itu_pane_t

0x65ce,	// (0x0003568a) bg_button_pane_cp011

0x0ca6,	// (0x0002fd62) cell_vitu2_function_pane_g1

0x9beb,	// (0x00038ca7) main_myfav_hc_pane

0x071f,	// (0x0002f7db) popup_image3_note_pane_ParamLimits

0x071f,	// (0x0002f7db) popup_image3_note_pane

0x073b,	// (0x0002f7f7) popup_image3_tool_bar_pane_ParamLimits

0x073b,	// (0x0002f7f7) popup_image3_tool_bar_pane

0x0c48,	// (0x0002fd04) cell_vitu2_itu_pane_t3_ParamLimits

0x0c48,	// (0x0002fd04) cell_vitu2_itu_pane_t3

0x9beb,	// (0x00038ca7) bg_popup_trans_pane

0xd17a,	// (0x0003c236) grid_image3_tool_bar_pane

0xd184,	// (0x0003c240) bg_popup_trans_pane_g1

0xa7a0,	// (0x0003985c) bg_popup_trans_pane_g2

0xd18c,	// (0x0003c248) bg_popup_trans_pane_g3

0xd194,	// (0x0003c250) bg_popup_trans_pane_g4

0xd19c,	// (0x0003c258) bg_popup_trans_pane_g5

0xd1a4,	// (0x0003c260) bg_popup_trans_pane_g6

0xd1ac,	// (0x0003c268) bg_popup_trans_pane_g7

0xd1b4,	// (0x0003c270) bg_popup_trans_pane_g8

0xa780,	// (0x0003983c) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003e9ef) bg_popup_trans_pane_g

0xd1bc,	// (0x0003c278) cell_image3_tool_bar_pane_ParamLimits

0xd1bc,	// (0x0003c278) cell_image3_tool_bar_pane

0xc74b,	// (0x0003b807) cell_image3_tool_bar_pane_g1

0x9beb,	// (0x00038ca7) bg_popup_trans_pane_cp1

0xd1d2,	// (0x0003c28e) popup_image3_note_pane_t1

0xd1e0,	// (0x0003c29c) popup_image3_note_pane_t2

0xd1ee,	// (0x0003c2aa) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003ea02) popup_image3_note_pane_t

0xd1fe,	// (0x0003c2ba) popup_image3_note_pane_t3_copy1

0x66b9,	// (0x00035775) bg_myfav_hc_instruction_pane_ParamLimits

0x66b9,	// (0x00035775) bg_myfav_hc_instruction_pane

0x66d1,	// (0x0003578d) cell_myfav_contact_pane_ParamLimits

0x66d1,	// (0x0003578d) cell_myfav_contact_pane

0x66ed,	// (0x000357a9) cell_myfav_contact_pane_cp1_ParamLimits

0x66ed,	// (0x000357a9) cell_myfav_contact_pane_cp1

0x6705,	// (0x000357c1) cell_myfav_contact_pane_cp2_ParamLimits

0x6705,	// (0x000357c1) cell_myfav_contact_pane_cp2

0x671d,	// (0x000357d9) cell_myfav_contact_pane_cp3_ParamLimits

0x671d,	// (0x000357d9) cell_myfav_contact_pane_cp3

0x6734,	// (0x000357f0) cell_myfav_contact_pane_cp4_ParamLimits

0x6734,	// (0x000357f0) cell_myfav_contact_pane_cp4

0x674c,	// (0x00035808) cell_myfav_contact_pane_cp5_ParamLimits

0x674c,	// (0x00035808) cell_myfav_contact_pane_cp5

0x6760,	// (0x0003581c) cell_myfav_contact_pane_cp6_ParamLimits

0x6760,	// (0x0003581c) cell_myfav_contact_pane_cp6

0x6776,	// (0x00035832) cell_myfav_contact_pane_cp7_ParamLimits

0x6776,	// (0x00035832) cell_myfav_contact_pane_cp7

0xd20c,	// (0x0003c2c8) listscroll_gen_pane_cp05

0x678e,	// (0x0003584a) main_myfav_hc_pane_g1_ParamLimits

0x678e,	// (0x0003584a) main_myfav_hc_pane_g1

0x67a8,	// (0x00035864) main_myfav_hc_pane_g2_ParamLimits

0x67a8,	// (0x00035864) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003ea09) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003ea09) main_myfav_hc_pane_g

0x67dc,	// (0x00035898) main_myfav_hc_pane_t1_ParamLimits

0x67dc,	// (0x00035898) main_myfav_hc_pane_t1

0xd215,	// (0x0003c2d1) main_myfav_hc_pane_t2_ParamLimits

0xd215,	// (0x0003c2d1) main_myfav_hc_pane_t2

0xd227,	// (0x0003c2e3) main_myfav_hc_pane_t3_ParamLimits

0xd227,	// (0x0003c2e3) main_myfav_hc_pane_t3

0x67f3,	// (0x000358af) main_myfav_hc_pane_t4_ParamLimits

0x67f3,	// (0x000358af) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003ea10) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003ea10) main_myfav_hc_pane_t

0xc74b,	// (0x0003b807) bg_myfav_hc_instruction_pane_g1

0xd239,	// (0x0003c2f5) cell_myfav_contact_pane_g1_ParamLimits

0xd239,	// (0x0003c2f5) cell_myfav_contact_pane_g1

0xd239,	// (0x0003c2f5) cell_myfav_contact_pane_g2_ParamLimits

0xd239,	// (0x0003c2f5) cell_myfav_contact_pane_g2

0xd245,	// (0x0003c301) cell_myfav_contact_pane_g3_ParamLimits

0xd245,	// (0x0003c301) cell_myfav_contact_pane_g3

0xc9ec,	// (0x0003baa8) cell_myfav_contact_pane_g4_ParamLimits

0xc9ec,	// (0x0003baa8) cell_myfav_contact_pane_g4

0xd252,	// (0x0003c30e) cell_myfav_contact_pane_g5_ParamLimits

0xd252,	// (0x0003c30e) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003ea1b) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003ea1b) cell_myfav_contact_pane_g

0x67c2,	// (0x0003587e) main_myfav_hc_pane_g3_ParamLimits

0x67c2,	// (0x0003587e) main_myfav_hc_pane_g3

0x0fdb,	// (0x00030097) popup_adpt_find_window

0x681d,	// (0x000358d9) afind_page_pane_ParamLimits

0x681d,	// (0x000358d9) afind_page_pane

0x6832,	// (0x000358ee) aid_size_cell_afind_ParamLimits

0x6832,	// (0x000358ee) aid_size_cell_afind

0x6850,	// (0x0003590c) bg_popup_sub_pane_cp09_ParamLimits

0x6850,	// (0x0003590c) bg_popup_sub_pane_cp09

0x685d,	// (0x00035919) find_pane_cp01_ParamLimits

0x685d,	// (0x00035919) find_pane_cp01

0xd25e,	// (0x0003c31a) grid_afind_control_pane_ParamLimits

0xd25e,	// (0x0003c31a) grid_afind_control_pane

0x686a,	// (0x00035926) grid_afind_pane_ParamLimits

0x686a,	// (0x00035926) grid_afind_pane

0x688c,	// (0x00035948) cell_afind_pane_ParamLimits

0x688c,	// (0x00035948) cell_afind_pane

0xc74b,	// (0x0003b807) afind_page_pane_g1

0x68f5,	// (0x000359b1) afind_page_pane_g2

0x68fe,	// (0x000359ba) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003ea26) afind_page_pane_g

0x6907,	// (0x000359c3) afind_page_pane_t1

0xd272,	// (0x0003c32e) cell_afind_grid_control_pane_ParamLimits

0xd272,	// (0x0003c32e) cell_afind_grid_control_pane

0xd05d,	// (0x0003c119) bg_button_pane_cp69_ParamLimits

0xd05d,	// (0x0003c119) bg_button_pane_cp69

0x6927,	// (0x000359e3) cell_afind_pane_g1_ParamLimits

0x6927,	// (0x000359e3) cell_afind_pane_g1

0x6934,	// (0x000359f0) cell_afind_pane_t1_ParamLimits

0x6934,	// (0x000359f0) cell_afind_pane_t1

0xa595,	// (0x00039651) bg_button_pane_cp72

0xd281,	// (0x0003c33d) cell_afind_grid_control_pane_g1

0x4101,	// (0x000331bd) aid_image_placing_area_ParamLimits

0x4101,	// (0x000331bd) aid_image_placing_area

0xcd1f,	// (0x0003bddb) field_vitu_entry_pane_g1_ParamLimits

0xcd1f,	// (0x0003bddb) field_vitu_entry_pane_g1

0xcd2b,	// (0x0003bde7) field_vitu_entry_pane_g2_ParamLimits

0xcd2b,	// (0x0003bde7) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003e8d7) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003e8d7) field_vitu_entry_pane_g

0x5eeb,	// (0x00034fa7) cell_vitu_itu_pane_g1_ParamLimits

0x5f2d,	// (0x00034fe9) cell_vitu_itu_pane_t3_ParamLimits

0x5f2d,	// (0x00034fe9) cell_vitu_itu_pane_t3

0xd003,	// (0x0003c0bf) mp4_progress_pane_t1_ParamLimits

0xd01c,	// (0x0003c0d8) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003e96c) mp4_progress_pane_t_ParamLimits

0xd035,	// (0x0003c0f1) mup_progress_pane_cp04_ParamLimits

0x6807,	// (0x000358c3) main_myfav_hc_pane_t5_ParamLimits

0x6807,	// (0x000358c3) main_myfav_hc_pane_t5

0x9c11,	// (0x00038ccd) aid_zoom_text_primary

0x0fdb,	// (0x00030097) popup_adpt_find_window_ParamLimits

0x9c4c,	// (0x00038d08) main_cam_set_pane

0x07b7,	// (0x0002f873) cam4_zoom_pane_ParamLimits

0x07b7,	// (0x0002f873) cam4_zoom_pane

0x6946,	// (0x00035a02) main_cam_set_pane_g1_ParamLimits

0x6946,	// (0x00035a02) main_cam_set_pane_g1

0x6954,	// (0x00035a10) main_cam_set_pane_g2_ParamLimits

0x6954,	// (0x00035a10) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003ea2d) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003ea2d) main_cam_set_pane_g

0x6975,	// (0x00035a31) main_cam_set_pane_t1_ParamLimits

0x6975,	// (0x00035a31) main_cam_set_pane_t1

0x6990,	// (0x00035a4c) main_cset_listscroll_pane_ParamLimits

0x6990,	// (0x00035a4c) main_cset_listscroll_pane

0x69b4,	// (0x00035a70) main_cset_slider_pane_ParamLimits

0x69b4,	// (0x00035a70) main_cset_slider_pane

0xd292,	// (0x0003c34e) main_cset_list_pane_ParamLimits

0xd292,	// (0x0003c34e) main_cset_list_pane

0xd2a2,	// (0x0003c35e) scroll_pane_cp028

0x69de,	// (0x00035a9a) aid_area_touch_slider

0x69fa,	// (0x00035ab6) cset_slider_pane

0x6a24,	// (0x00035ae0) main_cset_slider_pane_g1

0x6a39,	// (0x00035af5) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003ea32) main_cset_slider_pane_g

0xd2db,	// (0x0003c397) main_cset_slider_pane_t1

0x6afb,	// (0x00035bb7) main_cset_slider_pane_t2

0x6b15,	// (0x00035bd1) main_cset_slider_pane_t3

0x6b2f,	// (0x00035beb) main_cset_slider_pane_t4

0x6b49,	// (0x00035c05) main_cset_slider_pane_t5

0x6b67,	// (0x00035c23) main_cset_slider_pane_t6

0x6b7c,	// (0x00035c38) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003ea57) main_cset_slider_pane_t

0x6c88,	// (0x00035d44) cset_list_set_pane_ParamLimits

0x6c88,	// (0x00035d44) cset_list_set_pane

0x6c9c,	// (0x00035d58) aid_position_infowindow_above

0x6ca4,	// (0x00035d60) aid_position_infowindow_below

0x6cac,	// (0x00035d68) cset_list_set_pane_g1_ParamLimits

0x6cac,	// (0x00035d68) cset_list_set_pane_g1

0x6cb8,	// (0x00035d74) cset_list_set_pane_g3_ParamLimits

0x6cb8,	// (0x00035d74) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003ea76) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003ea76) cset_list_set_pane_g

0x6cc7,	// (0x00035d83) cset_list_set_pane_t1_ParamLimits

0x6cc7,	// (0x00035d83) cset_list_set_pane_t1

0x9c4c,	// (0x00038d08) list_highlight_pane_cp021_ParamLimits

0x9c4c,	// (0x00038d08) list_highlight_pane_cp021

0xafb7,	// (0x0003a073) cset_slider_pane_g1

0xafc9,	// (0x0003a085) cset_slider_pane_g2

0xafc0,	// (0x0003a07c) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003ea7b) cset_slider_pane_g

0x6cdc,	// (0x00035d98) aid_area_touch_cam4_zoom

0x6ce4,	// (0x00035da0) cam4_zoom_cont_pane

0x6cec,	// (0x00035da8) cam4_zoom_pane_g1

0x6cf4,	// (0x00035db0) cam4_zoom_pane_g2

0x0cba,	// (0x0002fd76) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003ea82) cam4_zoom_pane_g

0x6cfc,	// (0x00035db8) cam4_zoom_cont_pane_g1

0x6d05,	// (0x00035dc1) cam4_zoom_cont_pane_g2

0x6d0e,	// (0x00035dca) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003ea89) cam4_zoom_cont_pane_g

0x63fe,	// (0x000354ba) call4_image_pane_ParamLimits

0x63fe,	// (0x000354ba) call4_image_pane

0xd069,	// (0x0003c125) call4_windows_conf_pane_ParamLimits

0xd084,	// (0x0003c140) popup_call4_audio_in_window_ParamLimits

0xd084,	// (0x0003c140) popup_call4_audio_in_window

0x9beb,	// (0x00038ca7) bg_popup_call2_act_pane_cp02

0xd0e6,	// (0x0003c1a2) call4_list_conf_pane

0xc74b,	// (0x0003b807) call4_image_pane_g1

0xc74b,	// (0x0003b807) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0003e798) call4_image_pane_g

0xd37b,	// (0x0003c437) list_single_graphic_popup_conf4_pane_ParamLimits

0xd37b,	// (0x0003c437) list_single_graphic_popup_conf4_pane

0x9beb,	// (0x00038ca7) list_highlight_pane_cp022

0xd390,	// (0x0003c44c) list_single_graphic_popup_conf4_pane_g1

0xac9f,	// (0x00039d5b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003ea90) list_single_graphic_popup_conf4_pane_g

0xd398,	// (0x0003c454) list_single_graphic_popup_conf4_pane_t1

0x215c,	// (0x00031218) popup_vtel_slider_window_ParamLimits

0x215c,	// (0x00031218) popup_vtel_slider_window

0xd04b,	// (0x0003c107) dialer2_ne_pane_t2_ParamLimits

0xd04b,	// (0x0003c107) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003e971) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003e971) dialer2_ne_pane_t

0xc52a,	// (0x0003b5e6) bg_popup_sub_pane_cp010_ParamLimits

0xc52a,	// (0x0003b5e6) bg_popup_sub_pane_cp010

0x6d17,	// (0x00035dd3) popup_vtel_slider_window_g1_ParamLimits

0x6d17,	// (0x00035dd3) popup_vtel_slider_window_g1

0x6d2a,	// (0x00035de6) popup_vtel_slider_window_g2_ParamLimits

0x6d2a,	// (0x00035de6) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003ea95) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003ea95) popup_vtel_slider_window_g

0x6d80,	// (0x00035e3c) vtel_slider_pane_ParamLimits

0x6d80,	// (0x00035e3c) vtel_slider_pane

0x6da2,	// (0x00035e5e) vtel_slider_pane_g1_ParamLimits

0x6da2,	// (0x00035e5e) vtel_slider_pane_g1

0x6db6,	// (0x00035e72) vtel_slider_pane_g2_ParamLimits

0x6db6,	// (0x00035e72) vtel_slider_pane_g2

0x6dce,	// (0x00035e8a) vtel_slider_pane_g3_ParamLimits

0x6dce,	// (0x00035e8a) vtel_slider_pane_g3

0x6da2,	// (0x00035e5e) vtel_slider_pane_g4_ParamLimits

0x6da2,	// (0x00035e5e) vtel_slider_pane_g4

0x6de4,	// (0x00035ea0) vtel_slider_pane_g5_ParamLimits

0x6de4,	// (0x00035ea0) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003ea9e) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003ea9e) vtel_slider_pane_g

0x9c4c,	// (0x00038d08) main_gallery2_pane

0x0987,	// (0x0002fa43) aid_size_row_itut2_dropdow_list_ParamLimits

0x0987,	// (0x0002fa43) aid_size_row_itut2_dropdow_list

0x0a19,	// (0x0002fad5) grid_vitu2_function_top_pane_ParamLimits

0x0a19,	// (0x0002fad5) grid_vitu2_function_top_pane

0x0a7d,	// (0x0002fb39) popup_vitu2_dropdown_list_window_ParamLimits

0x0a7d,	// (0x0002fb39) popup_vitu2_dropdown_list_window

0x0aaa,	// (0x0002fb66) popup_vitu2_match_list_window

0x0cc2,	// (0x0002fd7e) cell_vitu2_function_top_pane_ParamLimits

0x0cc2,	// (0x0002fd7e) cell_vitu2_function_top_pane

0x0ce2,	// (0x0002fd9e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x0ce2,	// (0x0002fd9e) cell_vitu2_function_top_pane_cp01

0x0cfe,	// (0x0002fdba) cell_vitu2_function_top_wide_pane_ParamLimits

0x0cfe,	// (0x0002fdba) cell_vitu2_function_top_wide_pane

0x65ce,	// (0x0003568a) bg_button_pane_cp012

0x0d1a,	// (0x0002fdd6) cell_vitu2_function_top_pane_g1

0x6dfa,	// (0x00035eb6) bg_button_pane_cp013_ParamLimits

0x6dfa,	// (0x00035eb6) bg_button_pane_cp013

0x6e16,	// (0x00035ed2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e16,	// (0x00035ed2) cell_vitu2_function_top_wide_pane_g1

0x65ce,	// (0x0003568a) bg_popup_sub_pane_cp20

0x0d2e,	// (0x0002fdea) list_vitu2_match_list_pane

0xd184,	// (0x0003c240) bg_popup_sub_pane_cp20_g1

0xd18c,	// (0x0003c248) bg_popup_sub_pane_cp20_g2

0xa7a0,	// (0x0003985c) bg_popup_sub_pane_cp20_g3

0xd194,	// (0x0003c250) bg_popup_sub_pane_cp20_g4

0xa780,	// (0x0003983c) bg_popup_sub_pane_cp20_g5

0xd3bc,	// (0x0003c478) bg_popup_sub_pane_cp20_g6

0xd1a4,	// (0x0003c260) bg_popup_sub_pane_cp20_g7

0xd1ac,	// (0x0003c268) bg_popup_sub_pane_cp20_g8

0xd1b4,	// (0x0003c270) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003eaa9) bg_popup_sub_pane_cp20_g

0x6e2e,	// (0x00035eea) list_vitu2_match_list_item_pane_ParamLimits

0x6e2e,	// (0x00035eea) list_vitu2_match_list_item_pane

0x6e40,	// (0x00035efc) list_vitu2_match_list_item_pane_t1

0x1370,	// (0x0003042c) bg_popup_sub_pane_cp21

0x6e8c,	// (0x00035f48) grid_vitu2_dropdown_list_pane

0x0d4c,	// (0x0002fe08) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x0d4c,	// (0x0002fe08) cell_vitu2_dropdown_list_char_pane

0x0d6f,	// (0x0002fe2b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x0d6f,	// (0x0002fe2b) cell_vitu2_dropdown_list_ctrl_pane

0xd3d0,	// (0x0003c48c) cell_vitu2_dropdown_list_char_pane_g1

0xd3d9,	// (0x0003c495) cell_vitu2_dropdown_list_char_pane_g2

0xd3e2,	// (0x0003c49e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003eac6) cell_vitu2_dropdown_list_char_pane_g

0x0d9d,	// (0x0002fe59) cell_vitu2_dropdown_list_char_pane_t1

0x6e94,	// (0x00035f50) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e94,	// (0x00035f50) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6ea4,	// (0x00035f60) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6ea4,	// (0x00035f60) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6eb5,	// (0x00035f71) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6eb5,	// (0x00035f71) cell_vitu2_dropdown_list_ctrl_pane_g3

0x0dab,	// (0x0002fe67) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x0dab,	// (0x0002fe67) cell_vitu2_dropdown_list_ctrl_pane_g4

0x656b,	// (0x00035627) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x656b,	// (0x00035627) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003eacd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003eacd) cell_vitu2_dropdown_list_ctrl_pane_g

0x6ec5,	// (0x00035f81) aid_size_cell_gallery2_ParamLimits

0x6ec5,	// (0x00035f81) aid_size_cell_gallery2

0x6ee3,	// (0x00035f9f) grid_gallery2_pane_ParamLimits

0x6ee3,	// (0x00035f9f) grid_gallery2_pane

0x6efd,	// (0x00035fb9) scroll_pane_cp029_ParamLimits

0x6efd,	// (0x00035fb9) scroll_pane_cp029

0x6f09,	// (0x00035fc5) cell_gallery2_pane_ParamLimits

0x6f09,	// (0x00035fc5) cell_gallery2_pane

0xd3eb,	// (0x0003c4a7) cell_gallery2_pane_g2

0x6f6a,	// (0x00036026) cell_gallery2_pane_g3

0xd3f3,	// (0x0003c4af) cell_gallery2_pane_g4

0xd3fb,	// (0x0003c4b7) cell_gallery2_pane_g5

0xa543,	// (0x000395ff) grid_highlight_pane_cp10

0x0aaa,	// (0x0002fb66) popup_vitu2_match_list_window_ParamLimits

0x0ac1,	// (0x0002fb7d) popup_vitu2_query_window_ParamLimits

0x0ac1,	// (0x0002fb7d) popup_vitu2_query_window

0x1370,	// (0x0003042c) bg_vitu2_candi_button_pane

0xd3d0,	// (0x0003c48c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3d9,	// (0x0003c495) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3e2,	// (0x0003c49e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f72,	// (0x0003602e) bg_button_pane_cp015

0x6f86,	// (0x00036042) bg_button_pane_cp016

0x6f99,	// (0x00036055) bg_button_pane_cp017

0xc2f2,	// (0x0003b3ae) bg_popup_sub_pane_cp22

0xd403,	// (0x0003c4bf) popup_vitu2_query_window_g1

0x6fde,	// (0x0003609a) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003ead8) popup_vitu2_query_window_g

0x6ffd,	// (0x000360b9) popup_vitu2_query_window_t1_ParamLimits

0x6ffd,	// (0x000360b9) popup_vitu2_query_window_t1

0x7032,	// (0x000360ee) popup_vitu2_query_window_t2_ParamLimits

0x7032,	// (0x000360ee) popup_vitu2_query_window_t2

0x7044,	// (0x00036100) popup_vitu2_query_window_t3_ParamLimits

0x7044,	// (0x00036100) popup_vitu2_query_window_t3

0x706c,	// (0x00036128) popup_vitu2_query_window_t4_ParamLimits

0x706c,	// (0x00036128) popup_vitu2_query_window_t4

0x708d,	// (0x00036149) popup_vitu2_query_window_t5_ParamLimits

0x708d,	// (0x00036149) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003eadf) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003eadf) popup_vitu2_query_window_t

0xd28a,	// (0x0003c346) main_cset_text_pane

0x69de,	// (0x00035a9a) aid_area_touch_slider_ParamLimits

0x69fa,	// (0x00035ab6) cset_slider_pane_ParamLimits

0x6a24,	// (0x00035ae0) main_cset_slider_pane_g1_ParamLimits

0x6a39,	// (0x00035af5) main_cset_slider_pane_g2_ParamLimits

0xd2ab,	// (0x0003c367) main_cset_slider_pane_g3_ParamLimits

0xd2ab,	// (0x0003c367) main_cset_slider_pane_g3

0x6a4e,	// (0x00035b0a) main_cset_slider_pane_g4_ParamLimits

0x6a4e,	// (0x00035b0a) main_cset_slider_pane_g4

0x6a5d,	// (0x00035b19) main_cset_slider_pane_g5_ParamLimits

0x6a5d,	// (0x00035b19) main_cset_slider_pane_g5

0x6a6b,	// (0x00035b27) main_cset_slider_pane_g6_ParamLimits

0x6a6b,	// (0x00035b27) main_cset_slider_pane_g6

0xf976,	// (0x0003ea32) main_cset_slider_pane_g_ParamLimits

0xd2db,	// (0x0003c397) main_cset_slider_pane_t1_ParamLimits

0x6afb,	// (0x00035bb7) main_cset_slider_pane_t2_ParamLimits

0x6b15,	// (0x00035bd1) main_cset_slider_pane_t3_ParamLimits

0x6b2f,	// (0x00035beb) main_cset_slider_pane_t4_ParamLimits

0x6b49,	// (0x00035c05) main_cset_slider_pane_t5_ParamLimits

0x6b67,	// (0x00035c23) main_cset_slider_pane_t6_ParamLimits

0x6b7c,	// (0x00035c38) main_cset_slider_pane_t7_ParamLimits

0x6baa,	// (0x00035c66) main_cset_slider_pane_t8_ParamLimits

0x6baa,	// (0x00035c66) main_cset_slider_pane_t8

0x6bd2,	// (0x00035c8e) main_cset_slider_pane_t9_ParamLimits

0x6bd2,	// (0x00035c8e) main_cset_slider_pane_t9

0x6bfa,	// (0x00035cb6) main_cset_slider_pane_t10_ParamLimits

0x6bfa,	// (0x00035cb6) main_cset_slider_pane_t10

0x6c22,	// (0x00035cde) main_cset_slider_pane_t11_ParamLimits

0x6c22,	// (0x00035cde) main_cset_slider_pane_t11

0x6c4c,	// (0x00035d08) main_cset_slider_pane_t12_ParamLimits

0x6c4c,	// (0x00035d08) main_cset_slider_pane_t12

0x6c69,	// (0x00035d25) main_cset_slider_pane_t13_ParamLimits

0x6c69,	// (0x00035d25) main_cset_slider_pane_t13

0xf99b,	// (0x0003ea57) main_cset_slider_pane_t_ParamLimits

0x9beb,	// (0x00038ca7) bg_popup_sub_pane_cp011

0xd40f,	// (0x0003c4cb) main_cset_text_pane_g1

0xd417,	// (0x0003c4d3) main_cset_text_pane_t1

0xd425,	// (0x0003c4e1) main_cset_text_pane_t2

0xd433,	// (0x0003c4ef) main_cset_text_pane_t3

0xd441,	// (0x0003c4fd) main_cset_text_pane_t4

0xd44f,	// (0x0003c50b) main_cset_text_pane_t5

0xd45d,	// (0x0003c519) main_cset_text_pane_t6

0xd46b,	// (0x0003c527) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003eaee) main_cset_text_pane_t

0x9beb,	// (0x00038ca7) main_cam4_burst_pane

0x9beb,	// (0x00038ca7) main_cam5_pane

0x6915,	// (0x000359d1) bg_button_pane_cp019

0x691e,	// (0x000359da) bg_button_pane_cp020

0xd2b7,	// (0x0003c373) main_cset_slider_pane_g7_ParamLimits

0xd2b7,	// (0x0003c373) main_cset_slider_pane_g7

0xd2c3,	// (0x0003c37f) main_cset_slider_pane_g8_ParamLimits

0xd2c3,	// (0x0003c37f) main_cset_slider_pane_g8

0x6a7f,	// (0x00035b3b) main_cset_slider_pane_g9_ParamLimits

0x6a7f,	// (0x00035b3b) main_cset_slider_pane_g9

0x6a8b,	// (0x00035b47) main_cset_slider_pane_g10_ParamLimits

0x6a8b,	// (0x00035b47) main_cset_slider_pane_g10

0x6a97,	// (0x00035b53) main_cset_slider_pane_g11_ParamLimits

0x6a97,	// (0x00035b53) main_cset_slider_pane_g11

0x6aa3,	// (0x00035b5f) main_cset_slider_pane_g12_ParamLimits

0x6aa3,	// (0x00035b5f) main_cset_slider_pane_g12

0x6aaf,	// (0x00035b6b) main_cset_slider_pane_g13_ParamLimits

0x6aaf,	// (0x00035b6b) main_cset_slider_pane_g13

0x6abb,	// (0x00035b77) main_cset_slider_pane_g14_ParamLimits

0x6abb,	// (0x00035b77) main_cset_slider_pane_g14

0x6ac7,	// (0x00035b83) main_cset_slider_pane_g15_ParamLimits

0x6ac7,	// (0x00035b83) main_cset_slider_pane_g15

0xd309,	// (0x0003c3c5) main_cset_slider_pane_t14_ParamLimits

0xd309,	// (0x0003c3c5) main_cset_slider_pane_t14

0xd342,	// (0x0003c3fe) main_cset_slider_pane_t15_ParamLimits

0xd342,	// (0x0003c3fe) main_cset_slider_pane_t15

0x7104,	// (0x000361c0) aid_cam4_burst_size_cell_ParamLimits

0x7104,	// (0x000361c0) aid_cam4_burst_size_cell

0x7124,	// (0x000361e0) grid_cam4_burst_pane_ParamLimits

0x7124,	// (0x000361e0) grid_cam4_burst_pane

0x715e,	// (0x0003621a) linegrid_cam4_burst_pane_ParamLimits

0x715e,	// (0x0003621a) linegrid_cam4_burst_pane

0xd479,	// (0x0003c535) scroll_pane_cp30_ParamLimits

0xd479,	// (0x0003c535) scroll_pane_cp30

0x7180,	// (0x0003623c) cell_cam4_burst_pane_ParamLimits

0x7180,	// (0x0003623c) cell_cam4_burst_pane

0xd485,	// (0x0003c541) linegrid_cam4_burst_pane_g1_ParamLimits

0xd485,	// (0x0003c541) linegrid_cam4_burst_pane_g1

0x71d5,	// (0x00036291) linegrid_cam4_burst_pane_g2_ParamLimits

0x71d5,	// (0x00036291) linegrid_cam4_burst_pane_g2

0xd492,	// (0x0003c54e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd492,	// (0x0003c54e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003eafd) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003eafd) linegrid_cam4_burst_pane_g

0x71e6,	// (0x000362a2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71e6,	// (0x000362a2) linegrid_cam4_burst_pane_g3_copy1

0xd49f,	// (0x0003c55b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd49f,	// (0x0003c55b) linegrid_cam4_burst_pane_g4

0x7204,	// (0x000362c0) linegrid_cam4_burst_pane_g5_ParamLimits

0x7204,	// (0x000362c0) linegrid_cam4_burst_pane_g5

0x7215,	// (0x000362d1) linegrid_cam4_burst_pane_g6_ParamLimits

0x7215,	// (0x000362d1) linegrid_cam4_burst_pane_g6

0xd4ac,	// (0x0003c568) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4ac,	// (0x0003c568) linegrid_cam4_burst_pane_g7

0x722c,	// (0x000362e8) cell_cam4_burst_pane_g1

0xd4c5,	// (0x0003c581) main_cam5_pane_t1_ParamLimits

0xd4c5,	// (0x0003c581) main_cam5_pane_t1

0xd4d7,	// (0x0003c593) main_cam5_pane_t2_ParamLimits

0xd4d7,	// (0x0003c593) main_cam5_pane_t2

0xd548,	// (0x0003c604) main_cam5_pane_t3_ParamLimits

0xd548,	// (0x0003c604) main_cam5_pane_t3

0xd55a,	// (0x0003c616) main_cam5_pane_t4_ParamLimits

0xd55a,	// (0x0003c616) main_cam5_pane_t4

0xd572,	// (0x0003c62e) main_cam5_pane_t5_ParamLimits

0xd572,	// (0x0003c62e) main_cam5_pane_t5

0xd586,	// (0x0003c642) main_cam5_pane_t6_ParamLimits

0xd586,	// (0x0003c642) main_cam5_pane_t6

0xd59a,	// (0x0003c656) main_cam5_pane_t7_ParamLimits

0xd59a,	// (0x0003c656) main_cam5_pane_t7

0xd5ac,	// (0x0003c668) main_cam5_pane_t8_ParamLimits

0xd5ac,	// (0x0003c668) main_cam5_pane_t8

0xd5ca,	// (0x0003c686) main_cam5_pane_t9_ParamLimits

0xd5ca,	// (0x0003c686) main_cam5_pane_t9

0xd5dc,	// (0x0003c698) main_cam5_pane_t10_ParamLimits

0xd5dc,	// (0x0003c698) main_cam5_pane_t10

0xd5ee,	// (0x0003c6aa) main_cam5_pane_t11_ParamLimits

0xd5ee,	// (0x0003c6aa) main_cam5_pane_t11

0xd602,	// (0x0003c6be) main_cam5_pane_t12_ParamLimits

0xd602,	// (0x0003c6be) main_cam5_pane_t12

0xd619,	// (0x0003c6d5) main_cam5_pane_t13_ParamLimits

0xd619,	// (0x0003c6d5) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003eb09) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003eb09) main_cam5_pane_t

0x105e,	// (0x0003011a) popup_scut_keymap_window_ParamLimits

0x105e,	// (0x0003011a) popup_scut_keymap_window

0x723f,	// (0x000362fb) aid_size_cell_brow_shortcut

0xa543,	// (0x000395ff) bg_popup_window_pane_cp010

0x724b,	// (0x00036307) grid_scut_pane

0x7257,	// (0x00036313) cell_scut_pane_ParamLimits

0x7257,	// (0x00036313) cell_scut_pane

0x7270,	// (0x0003632c) cell_scut_pane_g1

0xd63c,	// (0x0003c6f8) cell_scut_pane_t1

0xd64b,	// (0x0003c707) cell_scut_pane_t2

0x7279,	// (0x00036335) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003eb24) cell_scut_pane_t

0x5436,	// (0x000344f2) main_mup3_pane_g8_ParamLimits

0x5436,	// (0x000344f2) main_mup3_pane_g8

0x09a3,	// (0x0002fa5f) area_vitu2_query_pane_ParamLimits

0x09a3,	// (0x0002fa5f) area_vitu2_query_pane

0x6fac,	// (0x00036068) input_focus_pane_cp08

0xd65a,	// (0x0003c716) area_vitu2_query_pane_g1

0x7287,	// (0x00036343) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003eb2b) area_vitu2_query_pane_g

0x7298,	// (0x00036354) area_vitu2_query_pane_t1_ParamLimits

0x7298,	// (0x00036354) area_vitu2_query_pane_t1

0x72ac,	// (0x00036368) area_vitu2_query_pane_t2_ParamLimits

0x72ac,	// (0x00036368) area_vitu2_query_pane_t2

0x72c0,	// (0x0003637c) area_vitu2_query_pane_t3_ParamLimits

0x72c0,	// (0x0003637c) area_vitu2_query_pane_t3

0xd666,	// (0x0003c722) area_vitu2_query_pane_t4_ParamLimits

0xd666,	// (0x0003c722) area_vitu2_query_pane_t4

0xd68e,	// (0x0003c74a) area_vitu2_query_pane_t5_ParamLimits

0xd68e,	// (0x0003c74a) area_vitu2_query_pane_t5

0xd6b6,	// (0x0003c772) area_vitu2_query_pane_t6_ParamLimits

0xd6b6,	// (0x0003c772) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003eb30) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003eb30) area_vitu2_query_pane_t

0x72e8,	// (0x000363a4) bg_button_pane_cp018

0x72f6,	// (0x000363b2) bg_button_pane_cp021

0x7302,	// (0x000363be) bg_button_pane_cp022

0x7313,	// (0x000363cf) input_focus_pane_cp09

0x3637,	// (0x000326f3) aid_size_touch_mv_arrow_left

0x3660,	// (0x0003271c) aid_size_touch_mv_arrow_right

0x6adf,	// (0x00035b9b) main_cset_slider_pane_g16_ParamLimits

0x6adf,	// (0x00035b9b) main_cset_slider_pane_g16

0x6aed,	// (0x00035ba9) main_cset_slider_pane_g17_ParamLimits

0x6aed,	// (0x00035ba9) main_cset_slider_pane_g17

0x722c,	// (0x000362e8) cell_cam4_burst_pane_g1_ParamLimits

0x9beb,	// (0x00038ca7) compa_mode_pane

0x6d3a,	// (0x00035df6) popup_vtel_slider_window_g3_ParamLimits

0x6d3a,	// (0x00035df6) popup_vtel_slider_window_g3

0x6d51,	// (0x00035e0d) popup_vtel_slider_window_g4_ParamLimits

0x6d51,	// (0x00035e0d) popup_vtel_slider_window_g4

0x6d68,	// (0x00035e24) popup_vtel_slider_window_t1_ParamLimits

0x6d68,	// (0x00035e24) popup_vtel_slider_window_t1

0x9beb,	// (0x00038ca7) main_cl_pane

0xc31e,	// (0x0003b3da) popup_imed_adjust2_window_ParamLimits

0xc2f2,	// (0x0003b3ae) bg_tb_trans_pane_cp05_ParamLimits

0xcc54,	// (0x0003bd10) popup_imed_adjust2_window_g1_ParamLimits

0xcc63,	// (0x0003bd1f) popup_imed_adjust2_window_g2_ParamLimits

0xcc63,	// (0x0003bd1f) popup_imed_adjust2_window_g2

0xcc6f,	// (0x0003bd2b) popup_imed_adjust2_window_g3_ParamLimits

0xcc6f,	// (0x0003bd2b) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003e89b) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003e89b) popup_imed_adjust2_window_g

0xcc7b,	// (0x0003bd37) popup_imed_adjust2_window_t1_ParamLimits

0xcc93,	// (0x0003bd4f) slider_imed_adjust_pane_ParamLimits

0xcca7,	// (0x0003bd63) slider_imed_adjust_pane_g1_ParamLimits

0xccb7,	// (0x0003bd73) slider_imed_adjust_pane_g2_ParamLimits

0xccc7,	// (0x0003bd83) slider_imed_adjust_pane_g3_ParamLimits

0xccd8,	// (0x0003bd94) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003e8a2) slider_imed_adjust_pane_g_ParamLimits

0x0757,	// (0x0002f813) aid_touch_area_cam4_ParamLimits

0x0757,	// (0x0002f813) aid_touch_area_cam4

0x6539,	// (0x000355f5) battery_pane_cp01

0x0829,	// (0x0002f8e5) main_camera4_pane_g6_ParamLimits

0x0829,	// (0x0002f8e5) main_camera4_pane_g6

0x0853,	// (0x0002f90f) main_camera4_pane_t2_ParamLimits

0x0853,	// (0x0002f90f) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003e9a5) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003e9a5) main_camera4_pane_t

0x0874,	// (0x0002f930) aid_touch_area_vid4_ParamLimits

0x0874,	// (0x0002f930) aid_touch_area_vid4

0x08c8,	// (0x0002f984) main_video4_pane_g5_ParamLimits

0x08c8,	// (0x0002f984) main_video4_pane_g5

0x08ed,	// (0x0002f9a9) vid4_progress_pane_ParamLimits

0x08ed,	// (0x0002f9a9) vid4_progress_pane

0xd2cf,	// (0x0003c38b) main_cset_slider_pane_g18_ParamLimits

0xd2cf,	// (0x0003c38b) main_cset_slider_pane_g18

0xd4b9,	// (0x0003c575) cell_cam4_burst_pane_g2_ParamLimits

0xd4b9,	// (0x0003c575) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003eb04) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003eb04) cell_cam4_burst_pane_g

0xa38d,	// (0x00039449) bg_cl_pane_ParamLimits

0xa38d,	// (0x00039449) bg_cl_pane

0x7324,	// (0x000363e0) cl_header_pane_ParamLimits

0x7324,	// (0x000363e0) cl_header_pane

0x7338,	// (0x000363f4) cl_listscroll_pane_ParamLimits

0x7338,	// (0x000363f4) cl_listscroll_pane

0xd702,	// (0x0003c7be) bg_cl_pane_g1

0xd70a,	// (0x0003c7c6) bg_cl_pane_g2

0xd712,	// (0x0003c7ce) bg_cl_pane_g3

0xd71a,	// (0x0003c7d6) bg_cl_pane_g4

0xd722,	// (0x0003c7de) bg_cl_pane_g5

0xd72a,	// (0x0003c7e6) bg_cl_pane_g6

0xd732,	// (0x0003c7ee) bg_cl_pane_g7

0xd73a,	// (0x0003c7f6) bg_cl_pane_g8

0xd742,	// (0x0003c7fe) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003eb3f) bg_cl_pane_g

0x7348,	// (0x00036404) aid_height_cl_leading_ParamLimits

0x7348,	// (0x00036404) aid_height_cl_leading

0x7354,	// (0x00036410) aid_height_cl_text_ParamLimits

0x7354,	// (0x00036410) aid_height_cl_text

0x9c4c,	// (0x00038d08) bg_cl_header_pane_ParamLimits

0x9c4c,	// (0x00038d08) bg_cl_header_pane

0x7373,	// (0x0003642f) cl_header_pane_g1_ParamLimits

0x7373,	// (0x0003642f) cl_header_pane_g1

0x7389,	// (0x00036445) cl_header_pane_t1_ParamLimits

0x7389,	// (0x00036445) cl_header_pane_t1

0xd74a,	// (0x0003c806) cl_list_pane

0xd2a2,	// (0x0003c35e) hc_scroll_pane_cp01

0xa780,	// (0x0003983c) bg_cl_header_pane_g1

0xd184,	// (0x0003c240) bg_cl_header_pane_g2

0xa7a0,	// (0x0003985c) bg_cl_header_pane_g3

0xd194,	// (0x0003c250) bg_cl_header_pane_g4

0xd18c,	// (0x0003c248) bg_cl_header_pane_g5

0xd3bc,	// (0x0003c478) bg_cl_header_pane_g6

0xd1ac,	// (0x0003c268) bg_cl_header_pane_g7

0xd1b4,	// (0x0003c270) bg_cl_header_pane_g8

0xd1a4,	// (0x0003c260) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003eb52) bg_cl_header_pane_g

0x73a2,	// (0x0003645e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x73a2,	// (0x0003645e) hc_cl_list_double_graphic_heading_pane

0x73b5,	// (0x00036471) hc_cl_list_single_graphic_pane_ParamLimits

0x73b5,	// (0x00036471) hc_cl_list_single_graphic_pane

0x73cd,	// (0x00036489) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x73cd,	// (0x00036489) hc_cl_list_single_graphic_pane_g1

0x73d9,	// (0x00036495) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x73d9,	// (0x00036495) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003eb65) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003eb65) hc_cl_list_single_graphic_pane_g

0x73ed,	// (0x000364a9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x73ed,	// (0x000364a9) hc_cl_list_single_graphic_pane_t1

0x73cd,	// (0x00036489) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x73cd,	// (0x00036489) hc_cl_list_double_graphic_heading_pane_g1

0x7402,	// (0x000364be) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7402,	// (0x000364be) hc_cl_list_double_graphic_heading_pane_g2

0x7416,	// (0x000364d2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7416,	// (0x000364d2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003eb6a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003eb6a) hc_cl_list_double_graphic_heading_pane_g

0x742a,	// (0x000364e6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x742a,	// (0x000364e6) hc_cl_list_double_graphic_heading_pane_t1

0x743f,	// (0x000364fb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x743f,	// (0x000364fb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003eb71) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003eb71) hc_cl_list_double_graphic_heading_pane_t

0x0dc7,	// (0x0002fe83) vid4_progress_pane_g1

0x0dd9,	// (0x0002fe95) vid4_progress_pane_g2

0x3d28,	// (0x00032de4) vid4_progress_pane_g3

0x745c,	// (0x00036518) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003eb76) vid4_progress_pane_g

0x747a,	// (0x00036536) vid4_progress_pane_t1

0x748f,	// (0x0003654b) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003eb81) vid4_progress_pane_t

0x74ba,	// (0x00036576) wait_bar_pane_cp07

0xc538,	// (0x0003b5f4) blid_firmament_pane_ParamLimits

0xc57b,	// (0x0003b637) popup_blid_sat_info2_window_g1

0xc59f,	// (0x0003b65b) popup_blid_sat_info2_window_t3

0xc5ad,	// (0x0003b669) popup_blid_sat_info2_window_t4

0xc5bb,	// (0x0003b677) popup_blid_sat_info2_window_t5

0xc5c9,	// (0x0003b685) popup_blid_sat_info2_window_t6

0xc5d9,	// (0x0003b695) popup_blid_sat_info2_window_t7

0xc5e7,	// (0x0003b6a3) popup_blid_sat_info2_window_t8

0xc5f5,	// (0x0003b6b1) popup_blid_sat_info2_window_t9

0xc603,	// (0x0003b6bf) popup_blid_sat_info2_window_t10

0xc6cb,	// (0x0003b787) aid_firma_cardinal_ParamLimits

0xc6df,	// (0x0003b79b) blid_firmament_pane_t1_ParamLimits

0xc6f6,	// (0x0003b7b2) blid_firmament_pane_t2_ParamLimits

0xc70d,	// (0x0003b7c9) blid_firmament_pane_t3_ParamLimits

0xc724,	// (0x0003b7e0) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0003e78f) blid_firmament_pane_t_ParamLimits

0xc73b,	// (0x0003b7f7) blid_sat_info_pane_ParamLimits

0x9c4c,	// (0x00038d08) main_cam_set_pane_ParamLimits

0x5c95,	// (0x00034d51) aid_size_cell_colour_35_ParamLimits

0x5cb5,	// (0x00034d71) aid_size_cell_colour_112_ParamLimits

0x5cd5,	// (0x00034d91) aid_size_cell_effect_ParamLimits

0xc2f2,	// (0x0003b3ae) bg_tb_trans_pane_cp02_ParamLimits

0xa9d9,	// (0x00039a95) heading_imed_pane_ParamLimits

0x5cf5,	// (0x00034db1) listscroll_imed_pane_ParamLimits

0xb908,	// (0x0003a9c4) popup_call2_audio_first_window_g5_ParamLimits

0xb908,	// (0x0003a9c4) popup_call2_audio_first_window_g5

0x0532,	// (0x0002f5ee) aid_size_touch_image3_arrow_left_ParamLimits

0x0532,	// (0x0002f5ee) aid_size_touch_image3_arrow_left

0x055e,	// (0x0002f61a) aid_size_touch_image3_arrow_right_ParamLimits

0x055e,	// (0x0002f61a) aid_size_touch_image3_arrow_right

0x74a5,	// (0x00036561) vid4_progress_pane_t3

0x6014,	// (0x000350d0) main_hwr_training_symbol_option_pane_ParamLimits

0x6014,	// (0x000350d0) main_hwr_training_symbol_option_pane

0xcf43,	// (0x0003bfff) popup_hwr_training_preview_window_ParamLimits

0xcf43,	// (0x0003bfff) popup_hwr_training_preview_window

0x03cf,	// (0x0002f48b) hwr_training_navi_pane_g5_ParamLimits

0x03cf,	// (0x0002f48b) hwr_training_navi_pane_g5

0xd172,	// (0x0003c22e) popup_char_count_window

0x65ce,	// (0x0003568a) bg_popup_sub_pane_cp20_ParamLimits

0x0d2e,	// (0x0002fdea) list_vitu2_match_list_pane_ParamLimits

0x0d3d,	// (0x0002fdf9) vitu2_page_scroll_pane_ParamLimits

0x0d3d,	// (0x0002fdf9) vitu2_page_scroll_pane

0xd775,	// (0x0003c831) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd775,	// (0x0003c831) list_single_hwr_training_symbol_option_pane

0xd788,	// (0x0003c844) list_single_hwr_training_symbol_option_pane_g1

0xd790,	// (0x0003c84c) list_single_hwr_training_symbol_option_pane_t1

0xd79e,	// (0x0003c85a) bg_button_pane_cp023

0xd7a7,	// (0x0003c863) bg_button_pane_cp024

0x74fd,	// (0x000365b9) vitu2_page_scroll_pane_g1

0x7505,	// (0x000365c1) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003eb88) vitu2_page_scroll_pane_g

0x750f,	// (0x000365cb) vitu2_page_scroll_pane_t1

0xd7da,	// (0x0003c896) popup_char_count_window_g1

0xd7e3,	// (0x0003c89f) popup_char_count_window_g2

0xd7ec,	// (0x0003c8a8) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003eb8d) popup_char_count_window_g

0xd7f5,	// (0x0003c8b1) popup_char_count_window_t1

0x9beb,	// (0x00038ca7) main_vded2_pane

0xcc40,	// (0x0003bcfc) aid_size_cell_imed_line

0xcc4a,	// (0x0003bd06) grid_imed_line_width_pane

0x6623,	// (0x000356df) vid4_indicators_pane_g4

0xd803,	// (0x0003c8bf) cell_imed_line_width_pane_ParamLimits

0xd803,	// (0x0003c8bf) cell_imed_line_width_pane

0xd819,	// (0x0003c8d5) cell_imed_line_width_pane_g1

0xc512,	// (0x0003b5ce) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003eb94) cell_imed_line_width_pane_g

0x751e,	// (0x000365da) main_vded2_pane_g1_ParamLimits

0x751e,	// (0x000365da) main_vded2_pane_g1

0x7539,	// (0x000365f5) main_vded2_pane_g2_ParamLimits

0x7539,	// (0x000365f5) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003eb99) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003eb99) main_vded2_pane_g

0x754b,	// (0x00036607) vded2_slider_pane_ParamLimits

0x754b,	// (0x00036607) vded2_slider_pane

0x755b,	// (0x00036617) aid_size_touch_vded2_end

0x7565,	// (0x00036621) aid_size_touch_vded2_playhead

0xd822,	// (0x0003c8de) aid_size_touch_vded2_start

0xd82a,	// (0x0003c8e6) vded2_slider_bg_pane

0xd833,	// (0x0003c8ef) vded2_slider_pane_g1

0xd83c,	// (0x0003c8f8) vded2_slider_pane_g2

0x756f,	// (0x0003662b) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003eb9e) vded2_slider_pane_g

0xd4e9,	// (0x0003c5a5) vded2_slider_bg_pane_g1

0xd4f2,	// (0x0003c5ae) vded2_slider_bg_pane_g2

0xd4fb,	// (0x0003c5b7) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003eba5) vded2_slider_bg_pane_g

0x3d40,	// (0x00032dfc) aid_postcard_touch_down_pane_ParamLimits

0x3d40,	// (0x00032dfc) aid_postcard_touch_down_pane

0x3d58,	// (0x00032e14) aid_postcard_touch_up_pane_ParamLimits

0x3d58,	// (0x00032e14) aid_postcard_touch_up_pane

0x9beb,	// (0x00038ca7) main_blid2_pane

0xc300,	// (0x0003b3bc) popup_blid2_search_window

0x9beb,	// (0x00038ca7) blid2_gps_pane

0x9beb,	// (0x00038ca7) blid2_navig_pane

0x9beb,	// (0x00038ca7) blid2_search_pane

0x9beb,	// (0x00038ca7) blid2_tripm_pane

0x757a,	// (0x00036636) blid2_search_pane_g1_ParamLimits

0x757a,	// (0x00036636) blid2_search_pane_g1

0x758d,	// (0x00036649) blid2_search_pane_t1_ParamLimits

0x758d,	// (0x00036649) blid2_search_pane_t1

0x759f,	// (0x0003665b) aid_size_cell_blid2_gps_ParamLimits

0x759f,	// (0x0003665b) aid_size_cell_blid2_gps

0x75b7,	// (0x00036673) blid2_gps_pane_g1_ParamLimits

0x75b7,	// (0x00036673) blid2_gps_pane_g1

0x75cb,	// (0x00036687) grid_blid2_satellite_pane_ParamLimits

0x75cb,	// (0x00036687) grid_blid2_satellite_pane

0x75e3,	// (0x0003669f) blid2_navig_pane_g1_ParamLimits

0x75e3,	// (0x0003669f) blid2_navig_pane_g1

0x75ef,	// (0x000366ab) blid2_navig_pane_t1_ParamLimits

0x75ef,	// (0x000366ab) blid2_navig_pane_t1

0x760a,	// (0x000366c6) blid2_navig_pane_t2_ParamLimits

0x760a,	// (0x000366c6) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003ebac) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003ebac) blid2_navig_pane_t

0x7625,	// (0x000366e1) blid2_navig_ring_pane_ParamLimits

0x7625,	// (0x000366e1) blid2_navig_ring_pane

0x7640,	// (0x000366fc) blid2_speed_pane_ParamLimits

0x7640,	// (0x000366fc) blid2_speed_pane

0x764c,	// (0x00036708) blid2_tripm_pane_g1_ParamLimits

0x764c,	// (0x00036708) blid2_tripm_pane_g1

0x7667,	// (0x00036723) blid2_tripm_pane_g2_ParamLimits

0x7667,	// (0x00036723) blid2_tripm_pane_g2

0x767b,	// (0x00036737) blid2_tripm_pane_g3_ParamLimits

0x767b,	// (0x00036737) blid2_tripm_pane_g3

0x768f,	// (0x0003674b) blid2_tripm_pane_g4_ParamLimits

0x768f,	// (0x0003674b) blid2_tripm_pane_g4

0x76a3,	// (0x0003675f) blid2_tripm_pane_g5_ParamLimits

0x76a3,	// (0x0003675f) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003ebb1) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003ebb1) blid2_tripm_pane_g

0x76c9,	// (0x00036785) blid2_tripm_pane_t1_ParamLimits

0x76c9,	// (0x00036785) blid2_tripm_pane_t1

0x76e2,	// (0x0003679e) blid2_tripm_pane_t2_ParamLimits

0x76e2,	// (0x0003679e) blid2_tripm_pane_t2

0x76fb,	// (0x000367b7) blid2_tripm_pane_t3_ParamLimits

0x76fb,	// (0x000367b7) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003ebbe) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003ebbe) blid2_tripm_pane_t

0x7742,	// (0x000367fe) cell_blid2_satellite_pane_ParamLimits

0x7742,	// (0x000367fe) cell_blid2_satellite_pane

0x7760,	// (0x0003681c) cell_blid2_satellite_pane_g1

0xd844,	// (0x0003c900) cell_blid2_satellite_pane_t1

0xc74b,	// (0x0003b807) blid2_speed_pane_g1

0xd852,	// (0x0003c90e) blid2_speed_pane_t1

0xd860,	// (0x0003c91c) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003ebc7) blid2_speed_pane_t

0xc74b,	// (0x0003b807) blid2_navig_ring_pane_g1

0x7769,	// (0x00036825) blid2_navig_ring_pane_g2

0x7771,	// (0x0003682d) blid2_navig_ring_pane_g3

0x7779,	// (0x00036835) blid2_navig_ring_pane_g4

0x7781,	// (0x0003683d) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003ebcc) blid2_navig_ring_pane_g

0x9beb,	// (0x00038ca7) bg_popup_window_pane_cp011

0xd86e,	// (0x0003c92a) popup_blid2_search_window_g1

0xd876,	// (0x0003c932) popup_blid2_search_window_t1

0xd884,	// (0x0003c940) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003ebd7) popup_blid2_search_window_t

0xa68f,	// (0x0003974b) main_browser_pane_g1

0xa38d,	// (0x00039449) main_browser_pane_ParamLimits

0x65ce,	// (0x0003568a) bg_button_pane_cp011_ParamLimits

0x0ca6,	// (0x0002fd62) cell_vitu2_function_pane_g1_ParamLimits

0xc2f2,	// (0x0003b3ae) bg_popup_sub_pane_cp22_ParamLimits

0x6fac,	// (0x00036068) input_focus_pane_cp08_ParamLimits

0x6fc3,	// (0x0003607f) popup_vitu2_query_button_pane_ParamLimits

0x6fc3,	// (0x0003607f) popup_vitu2_query_button_pane

0x6fd4,	// (0x00036090) popup_vitu2_query_input_button_pane

0xd403,	// (0x0003c4bf) popup_vitu2_query_window_g1_ParamLimits

0x6fde,	// (0x0003609a) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003ead8) popup_vitu2_query_window_g_ParamLimits

0x9beb,	// (0x00038ca7) bg_button_pane_cp026

0x7789,	// (0x00036845) popup_vitu2_query_input_button_pane_g1

0x9beb,	// (0x00038ca7) bg_button_pane_cp025

0xd892,	// (0x0003c94e) popup_vitu2_query_button_pane_t1

0x50b0,	// (0x0003416c) main_mp3_pane_t6

0x50be,	// (0x0003417a) popup_slider_window_cp01

0x6579,	// (0x00035635) cam4_battery_pane

0x65dc,	// (0x00035698) cam4_battery_pane_cp02

0x7454,	// (0x00036510) cam4_battery_pane_cp01

0x7454,	// (0x00036510) cam4_battery_pane_cp03

0xd041,	// (0x0003c0fd) cam4_battery_pane_g1

0xc74b,	// (0x0003b807) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003ebdc) cam4_battery_pane_g

0xc611,	// (0x0003b6cd) popup_blid_sat_info2_window_t11

0x3637,	// (0x000326f3) aid_size_touch_mv_arrow_left_ParamLimits

0x3660,	// (0x0003271c) aid_size_touch_mv_arrow_right_ParamLimits

0xadcd,	// (0x00039e89) navi_pane_g1_ParamLimits

0x369f,	// (0x0003275b) navi_pane_g2_ParamLimits

0x36cd,	// (0x00032789) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003e4a1) navi_pane_g_ParamLimits

0x3727,	// (0x000327e3) navi_pane_mv_t1_ParamLimits

0x5d01,	// (0x00034dbd) grid_imed_effect_pane_ParamLimits

0x2064,	// (0x00031120) aid_placing_vt_slider_lsc

0xa5da,	// (0x00039696) aid_placing_vt_slider_prt

0x9c4c,	// (0x00038d08) bg_tb_trans_pane_cp01_ParamLimits

0xc89b,	// (0x0003b957) popup_image_details_window_g1_ParamLimits

0xc8ae,	// (0x0003b96a) popup_image_details_window_g2_ParamLimits

0xc8c3,	// (0x0003b97f) popup_image_details_window_g3_ParamLimits

0xc8c3,	// (0x0003b97f) popup_image_details_window_g3

0xf718,	// (0x0003e7d4) popup_image_details_window_g_ParamLimits

0xc8d7,	// (0x0003b993) popup_image_details_window_t1_ParamLimits

0xc8e9,	// (0x0003b9a5) popup_image_details_window_t2_ParamLimits

0xc902,	// (0x0003b9be) popup_image_details_window_t3_ParamLimits

0xc916,	// (0x0003b9d2) popup_image_details_window_t4_ParamLimits

0xc931,	// (0x0003b9ed) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0003e7db) popup_image_details_window_t_ParamLimits

0x7360,	// (0x0003641c) cl_header_name_pane_ParamLimits

0x7360,	// (0x0003641c) cl_header_name_pane

0x7791,	// (0x0003684d) cl_header_name_pane_t1_ParamLimits

0x7791,	// (0x0003684d) cl_header_name_pane_t1

0x77b2,	// (0x0003686e) cl_header_name_pane_t2_ParamLimits

0x77b2,	// (0x0003686e) cl_header_name_pane_t2

0x77f4,	// (0x000368b0) cl_header_name_pane_t3_ParamLimits

0x77f4,	// (0x000368b0) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003ebe1) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003ebe1) cl_header_name_pane_t

0x36f8,	// (0x000327b4) navi_pane_mv_g2_ParamLimits

0xd12f,	// (0x0003c1eb) field_vitu2_entry_pane_g1_ParamLimits

0xd13b,	// (0x0003c1f7) field_vitu2_entry_pane_g2_ParamLimits

0xd147,	// (0x0003c203) field_vitu2_entry_pane_g3_ParamLimits

0xd147,	// (0x0003c203) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003e9d7) field_vitu2_entry_pane_g_ParamLimits

0x66a7,	// (0x00035763) cell_vitu2_itu_pane_g1_ParamLimits

0x0b4e,	// (0x0002fc0a) cell_vitu2_itu_pane_g2_ParamLimits

0x0b4e,	// (0x0002fc0a) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003e9e3) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003e9e3) cell_vitu2_itu_pane_g

0x65ce,	// (0x0003568a) bg_vkb2_func_pane_cp05_ParamLimits

0x65ce,	// (0x0003568a) bg_vkb2_func_pane_cp05

0x65ce,	// (0x0003568a) bg_vkb2_func_pane_cp03

0x65ce,	// (0x0003568a) bg_vkb2_func_pane_cp04

0x65ce,	// (0x0003568a) bg_vkb2_func_pane_cp10_ParamLimits

0x65ce,	// (0x0003568a) bg_vkb2_func_pane_cp10

0x7302,	// (0x000363be) bg_vkb2_func_pane_cp08

0x72e8,	// (0x000363a4) bg_vkb2_func_pane_cp06

0x72f6,	// (0x000363b2) bg_vkb2_func_pane_cp07

0xd7b0,	// (0x0003c86c) bg_vkb2_func_pane_cp11_ParamLimits

0xd7b0,	// (0x0003c86c) bg_vkb2_func_pane_cp11

0xd7c5,	// (0x0003c881) bg_vkb2_func_pane_cp12_ParamLimits

0xd7c5,	// (0x0003c881) bg_vkb2_func_pane_cp12

0x9beb,	// (0x00038ca7) bg_vkb2_func_pane_cp09

0xd184,	// (0x0003c240) bg_vkb2_func_pane_g1

0xa7a0,	// (0x0003985c) bg_vkb2_func_pane_g2

0xd18c,	// (0x0003c248) bg_vkb2_func_pane_g3

0xd194,	// (0x0003c250) bg_vkb2_func_pane_g4

0xd3bc,	// (0x0003c478) bg_vkb2_func_pane_g5

0xd1ac,	// (0x0003c268) bg_vkb2_func_pane_g6

0xd1b4,	// (0x0003c270) bg_vkb2_func_pane_g7

0xd1a4,	// (0x0003c260) bg_vkb2_func_pane_g8

0xa780,	// (0x0003983c) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003ebe8) bg_vkb2_func_pane_g

0x76b7,	// (0x00036773) blid2_tripm_pane_g6_ParamLimits

0x76b7,	// (0x00036773) blid2_tripm_pane_g6

0xcffb,	// (0x0003c0b7) mp4_progress_pane_g1

0x772e,	// (0x000367ea) blid2_tripm_values_pane_ParamLimits

0x772e,	// (0x000367ea) blid2_tripm_values_pane

0x7825,	// (0x000368e1) blid2_tripm_values_pane_t1

0x7833,	// (0x000368ef) blid2_tripm_values_pane_t2

0x7841,	// (0x000368fd) blid2_tripm_values_pane_t3

0x784f,	// (0x0003690b) blid2_tripm_values_pane_t4

0x785d,	// (0x00036919) blid2_tripm_values_pane_t5

0x786b,	// (0x00036927) blid2_tripm_values_pane_t6

0x7879,	// (0x00036935) blid2_tripm_values_pane_t7

0x7887,	// (0x00036943) blid2_tripm_values_pane_t8

0x7895,	// (0x00036951) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003ebfb) blid2_tripm_values_pane_t

0x20a1,	// (0x0003115d) call_video_pane_t1_ParamLimits

0x20bb,	// (0x00031177) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003e32a) call_video_pane_t_ParamLimits

0x3c83,	// (0x00032d3f) msg_header_pane_g1_ParamLimits

0xb004,	// (0x0003a0c0) msg_header_pane_g2_ParamLimits

0xb004,	// (0x0003a0c0) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003e544) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003e544) msg_header_pane_g

0xa38d,	// (0x00039449) main_clock2_pane_ParamLimits

0x5a6a,	// (0x00034b26) grid_clock2_toolbar_pane_ParamLimits

0x5a6a,	// (0x00034b26) grid_clock2_toolbar_pane

0x5a6a,	// (0x00034b26) listscroll_clock2_pane_ParamLimits

0x5a6a,	// (0x00034b26) listscroll_clock2_pane

0x5b61,	// (0x00034c1d) main_clock2_pane_t3_ParamLimits

0x5b61,	// (0x00034c1d) main_clock2_pane_t3

0x5b85,	// (0x00034c41) main_clock2_pane_t4_ParamLimits

0x5b85,	// (0x00034c41) main_clock2_pane_t4

0xd8a0,	// (0x0003c95c) cell_clock2_toolbar_pane

0xd8a8,	// (0x0003c964) cell_clock2_toolbar_pane_cp01

0xd8a8,	// (0x0003c964) cell_clock2_toolbar_pane_cp02

0xd8b0,	// (0x0003c96c) cell_clock2_toolbar_pane_cp03

0xd8b8,	// (0x0003c974) list_clock2_pane

0xad33,	// (0x00039def) scroll_pane_cp10

0xd8c0,	// (0x0003c97c) list_single_clock2_pane_ParamLimits

0xd8c0,	// (0x0003c97c) list_single_clock2_pane

0xa543,	// (0x000395ff) list_highlight_pane_cp08

0xd8cd,	// (0x0003c989) list_single_clock2_pane_t1

0xd8db,	// (0x0003c997) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003ec0e) list_single_clock2_pane_t

0x9beb,	// (0x00038ca7) bg_button_pane_cp10

0xd8e9,	// (0x0003c9a5) cell_clock2_toolbar_pane_g1

0xfead,	// (0x0002ef69) aid_main_viewer_pane_g1_ParamLimits

0xfead,	// (0x0002ef69) aid_main_viewer_pane_g1

0xfebb,	// (0x0002ef77) aid_main_viewer_pane_g2_ParamLimits

0xfebb,	// (0x0002ef77) aid_main_viewer_pane_g2

0x3cda,	// (0x00032d96) aid_main_viewer_pane_g3_ParamLimits

0x3cda,	// (0x00032d96) aid_main_viewer_pane_g3

0x3ce9,	// (0x00032da5) aid_main_viewer_pane_g4_ParamLimits

0x3ce9,	// (0x00032da5) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003e555) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003e555) aid_main_viewer_pane_g

0x464a,	// (0x00033706) main_calc_pane_ParamLimits

0x465e,	// (0x0003371a) main_dialer2_pane_ParamLimits

0x9beb,	// (0x00038ca7) main_cam6_pane

0x9beb,	// (0x00038ca7) main_vid6_pane

0x5a76,	// (0x00034b32) listscroll_gen_pane_cp06_ParamLimits

0x5a76,	// (0x00034b32) listscroll_gen_pane_cp06

0x5ba8,	// (0x00034c64) main_clock2_pane_t5_ParamLimits

0x5ba8,	// (0x00034c64) main_clock2_pane_t5

0x5c08,	// (0x00034cc4) aid_call2_pane_cp10_ParamLimits

0x5c1a,	// (0x00034cd6) aid_call_pane_cp10_ParamLimits

0xada2,	// (0x00039e5e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xada2,	// (0x00039e5e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c2c,	// (0x00034ce8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c2c,	// (0x00034ce8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xada2,	// (0x00039e5e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003e890) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c42,	// (0x00034cfe) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6327,	// (0x000353e3) cell_dialer2_keypad_pane_g2_ParamLimits

0x6327,	// (0x000353e3) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003e976) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003e976) cell_dialer2_keypad_pane_g

0x6343,	// (0x000353ff) cell_dialer2_keypad_pane_t1

0x69d0,	// (0x00035a8c) main_cset_text2_pane_ParamLimits

0x69d0,	// (0x00035a8c) main_cset_text2_pane

0xd65a,	// (0x0003c716) area_vitu2_query_pane_g1_ParamLimits

0x7287,	// (0x00036343) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003eb2b) area_vitu2_query_pane_g_ParamLimits

0xd6de,	// (0x0003c79a) area_vitu2_query_pane_t7_ParamLimits

0xd6de,	// (0x0003c79a) area_vitu2_query_pane_t7

0x72e8,	// (0x000363a4) bg_button_pane_cp018_ParamLimits

0x72f6,	// (0x000363b2) bg_button_pane_cp021_ParamLimits

0x7302,	// (0x000363be) bg_button_pane_cp022_ParamLimits

0x7302,	// (0x000363be) bg_vkb2_func_pane_cp08_ParamLimits

0x72e8,	// (0x000363a4) bg_vkb2_func_pane_cp06_ParamLimits

0x72f6,	// (0x000363b2) bg_vkb2_func_pane_cp07_ParamLimits

0x7313,	// (0x000363cf) input_focus_pane_cp09_ParamLimits

0x78a3,	// (0x0003695f) cam6_autofocus_pane_ParamLimits

0x78a3,	// (0x0003695f) cam6_autofocus_pane

0x0deb,	// (0x0002fea7) cam6_image_uncrop_pane_ParamLimits

0x0deb,	// (0x0002fea7) cam6_image_uncrop_pane

0x0dfa,	// (0x0002feb6) cam6_indi_pane_ParamLimits

0x0dfa,	// (0x0002feb6) cam6_indi_pane

0x0e10,	// (0x0002fecc) cam6_mode_pane_ParamLimits

0x0e10,	// (0x0002fecc) cam6_mode_pane

0x0e22,	// (0x0002fede) cam6_timer_pane_ParamLimits

0x0e22,	// (0x0002fede) cam6_timer_pane

0x0e2e,	// (0x0002feea) cam6_zoom_pane_ParamLimits

0x0e2e,	// (0x0002feea) cam6_zoom_pane

0x78b1,	// (0x0003696d) cam6_mode_pane_g1_ParamLimits

0x78b1,	// (0x0003696d) cam6_mode_pane_g1

0x78c1,	// (0x0003697d) cam6_mode_pane_g2_ParamLimits

0x78c1,	// (0x0003697d) cam6_mode_pane_g2

0x78d1,	// (0x0003698d) cam6_mode_pane_g3_ParamLimits

0x78d1,	// (0x0003698d) cam6_mode_pane_g3

0x78e1,	// (0x0003699d) cam6_mode_pane_g4_ParamLimits

0x78e1,	// (0x0003699d) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003ec13) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003ec13) cam6_mode_pane_g

0xd504,	// (0x0003c5c0) bg_tb_trans_pane_cp08_ParamLimits

0xd504,	// (0x0003c5c0) bg_tb_trans_pane_cp08

0xd8f1,	// (0x0003c9ad) cam6_battery_pane_ParamLimits

0xd8f1,	// (0x0003c9ad) cam6_battery_pane

0xd907,	// (0x0003c9c3) cam6_indi_pane_g1_ParamLimits

0xd907,	// (0x0003c9c3) cam6_indi_pane_g1

0xd919,	// (0x0003c9d5) cam6_indi_pane_g2_ParamLimits

0xd919,	// (0x0003c9d5) cam6_indi_pane_g2

0xd92b,	// (0x0003c9e7) cam6_indi_pane_g3_ParamLimits

0xd92b,	// (0x0003c9e7) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003ec1c) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003ec1c) cam6_indi_pane_g

0xd93d,	// (0x0003c9f9) cam6_indi_pane_t1_ParamLimits

0xd93d,	// (0x0003c9f9) cam6_indi_pane_t1

0x6660,	// (0x0003571c) cam6_autofocus_pane_g1

0x6658,	// (0x00035714) cam6_autofocus_pane_g2

0x6670,	// (0x0003572c) cam6_autofocus_pane_g3

0x6668,	// (0x00035724) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003ec23) cam6_autofocus_pane_g

0xd963,	// (0x0003ca1f) cam6_timer_pane_g1

0xd96b,	// (0x0003ca27) cam6_timer_pane_t1

0xd979,	// (0x0003ca35) cam6_zoom_cont_pane

0xd981,	// (0x0003ca3d) cam6_zoom_pane_g1

0xd989,	// (0x0003ca45) cam6_zoom_pane_g2

0x78f1,	// (0x000369ad) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003ec2c) cam6_zoom_pane_g

0xc74b,	// (0x0003b807) cam6_battery_pane_g1

0xc74b,	// (0x0003b807) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0003e798) cam6_battery_pane_g

0xd991,	// (0x0003ca4d) cam6_zoom_cont_pane_g1

0xd99a,	// (0x0003ca56) cam6_zoom_cont_pane_g2

0xd9a3,	// (0x0003ca5f) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003ec33) cam6_zoom_cont_pane_g

0x790e,	// (0x000369ca) cam6_mode_pane_cp_ParamLimits

0x790e,	// (0x000369ca) cam6_mode_pane_cp

0x7920,	// (0x000369dc) cam6_zoom_pane_cp_ParamLimits

0x7920,	// (0x000369dc) cam6_zoom_pane_cp

0x792e,	// (0x000369ea) vid6_image_uncrop_cif_pane_ParamLimits

0x792e,	// (0x000369ea) vid6_image_uncrop_cif_pane

0x793e,	// (0x000369fa) vid6_image_uncrop_nhd_pane_ParamLimits

0x793e,	// (0x000369fa) vid6_image_uncrop_nhd_pane

0x794d,	// (0x00036a09) vid6_image_uncrop_vga_pane_ParamLimits

0x794d,	// (0x00036a09) vid6_image_uncrop_vga_pane

0x795c,	// (0x00036a18) vid6_image_uncrop_wvga_pane_ParamLimits

0x795c,	// (0x00036a18) vid6_image_uncrop_wvga_pane

0x796b,	// (0x00036a27) vid6_indi_pane_ParamLimits

0x796b,	// (0x00036a27) vid6_indi_pane

0xd504,	// (0x0003c5c0) bg_tb_trans_pane_cp09_ParamLimits

0xd504,	// (0x0003c5c0) bg_tb_trans_pane_cp09

0xd9bb,	// (0x0003ca77) cam6_battery_pane_cp_ParamLimits

0xd9bb,	// (0x0003ca77) cam6_battery_pane_cp

0xd9c7,	// (0x0003ca83) vid6_indi_pane_g1_ParamLimits

0xd9c7,	// (0x0003ca83) vid6_indi_pane_g1

0xd9d9,	// (0x0003ca95) vid6_indi_pane_g2_ParamLimits

0xd9d9,	// (0x0003ca95) vid6_indi_pane_g2

0xd9eb,	// (0x0003caa7) vid6_indi_pane_g3_ParamLimits

0xd9eb,	// (0x0003caa7) vid6_indi_pane_g3

0xda02,	// (0x0003cabe) vid6_indi_pane_g4_ParamLimits

0xda02,	// (0x0003cabe) vid6_indi_pane_g4

0xda19,	// (0x0003cad5) vid6_indi_pane_g5_ParamLimits

0xda19,	// (0x0003cad5) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003ec3a) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003ec3a) vid6_indi_pane_g

0xda33,	// (0x0003caef) vid6_indi_pane_t1_ParamLimits

0xda33,	// (0x0003caef) vid6_indi_pane_t1

0xda49,	// (0x0003cb05) vid6_indi_pane_t2_ParamLimits

0xda49,	// (0x0003cb05) vid6_indi_pane_t2

0xda71,	// (0x0003cb2d) vid6_indi_pane_t3_ParamLimits

0xda71,	// (0x0003cb2d) vid6_indi_pane_t3

0xda99,	// (0x0003cb55) vid6_indi_pane_t4_ParamLimits

0xda99,	// (0x0003cb55) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003ec45) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003ec45) vid6_indi_pane_t

0xdabd,	// (0x0003cb79) wait_bar_pane_cp08

0x7983,	// (0x00036a3f) main_cset_text2_pane_t1_ParamLimits

0x7983,	// (0x00036a3f) main_cset_text2_pane_t1

0x78f9,	// (0x000369b5) listscroll_gen_pane_cp06_t1_ParamLimits

0x78f9,	// (0x000369b5) listscroll_gen_pane_cp06_t1

0x9beb,	// (0x00038ca7) main_cam6_set_pane

0x656b,	// (0x00035627) bg_tb_trans_pane_cp06_ParamLimits

0x6581,	// (0x0003563d) cam4_indicators_pane_g1_ParamLimits

0x6592,	// (0x0003564e) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003e9b3) cam4_indicators_pane_g_ParamLimits

0x65aa,	// (0x00035666) cam4_indicators_pane_t1_ParamLimits

0x65ce,	// (0x0003568a) bg_tb_trans_pane_cp07_ParamLimits

0x65e6,	// (0x000356a2) vid4_indicators_pane_g1_ParamLimits

0x65fc,	// (0x000356b8) vid4_indicators_pane_g2_ParamLimits

0x6610,	// (0x000356cc) vid4_indicators_pane_g3_ParamLimits

0x6623,	// (0x000356df) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003e9c5) vid4_indicators_pane_g_ParamLimits

0x6641,	// (0x000356fd) vid4_indicators_pane_t1_ParamLimits

0x0dc7,	// (0x0002fe83) vid4_progress_pane_g1_ParamLimits

0x0dd9,	// (0x0002fe95) vid4_progress_pane_g2_ParamLimits

0x3d28,	// (0x00032de4) vid4_progress_pane_g3_ParamLimits

0x745c,	// (0x00036518) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003eb76) vid4_progress_pane_g_ParamLimits

0x747a,	// (0x00036536) vid4_progress_pane_t1_ParamLimits

0x748f,	// (0x0003654b) vid4_progress_pane_t2_ParamLimits

0x74a5,	// (0x00036561) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003eb81) vid4_progress_pane_t_ParamLimits

0x74ba,	// (0x00036576) wait_bar_pane_cp07_ParamLimits

0x79a1,	// (0x00036a5d) main_cam6_set_pane_g2_ParamLimits

0x79a1,	// (0x00036a5d) main_cam6_set_pane_g2

0x79c7,	// (0x00036a83) main_cset6_listscroll_pane_ParamLimits

0x79c7,	// (0x00036a83) main_cset6_listscroll_pane

0x79e5,	// (0x00036aa1) main_cset6_slider_pane_ParamLimits

0x79e5,	// (0x00036aa1) main_cset6_slider_pane

0x79fb,	// (0x00036ab7) main_cset6_text2_pane_ParamLimits

0x79fb,	// (0x00036ab7) main_cset6_text2_pane

0xdacc,	// (0x0003cb88) main_cset6_text_pane

0xdad4,	// (0x0003cb90) main_cset_list_pane_copy1_ParamLimits

0xdad4,	// (0x0003cb90) main_cset_list_pane_copy1

0xdae4,	// (0x0003cba0) scroll_pane_cp028_copy1

0x3174,	// (0x00032230) cset_list_set_pane_copy1

0x7a09,	// (0x00036ac5) aid_position_infowindow_above_copy1

0x7a11,	// (0x00036acd) aid_position_infowindow_below_copy1

0x7a19,	// (0x00036ad5) cset_list_set_pane_g1_copy1

0x7a21,	// (0x00036add) cset_list_set_pane_g3_copy1_ParamLimits

0x7a21,	// (0x00036add) cset_list_set_pane_g3_copy1

0x7a30,	// (0x00036aec) cset_list_set_pane_t1_copy1_ParamLimits

0x7a30,	// (0x00036aec) cset_list_set_pane_t1_copy1

0x9c4c,	// (0x00038d08) list_highlight_pane_cp021_copy1_ParamLimits

0x9c4c,	// (0x00038d08) list_highlight_pane_cp021_copy1

0xdaed,	// (0x0003cba9) cset6_slider_pane_ParamLimits

0xdaed,	// (0x0003cba9) cset6_slider_pane

0xdb19,	// (0x0003cbd5) main_cset6_slider_pane_g1_ParamLimits

0xdb19,	// (0x0003cbd5) main_cset6_slider_pane_g1

0x7a45,	// (0x00036b01) main_cset6_slider_pane_g2_ParamLimits

0x7a45,	// (0x00036b01) main_cset6_slider_pane_g2

0xdb41,	// (0x0003cbfd) main_cset6_slider_pane_g3_ParamLimits

0xdb41,	// (0x0003cbfd) main_cset6_slider_pane_g3

0x7a6d,	// (0x00036b29) main_cset6_slider_pane_g4_ParamLimits

0x7a6d,	// (0x00036b29) main_cset6_slider_pane_g4

0x7a79,	// (0x00036b35) main_cset6_slider_pane_g5_ParamLimits

0x7a79,	// (0x00036b35) main_cset6_slider_pane_g5

0xd2b7,	// (0x0003c373) main_cset6_slider_pane_g7_ParamLimits

0xd2b7,	// (0x0003c373) main_cset6_slider_pane_g7

0xd2c3,	// (0x0003c37f) main_cset6_slider_pane_g8_ParamLimits

0xd2c3,	// (0x0003c37f) main_cset6_slider_pane_g8

0x6a7f,	// (0x00035b3b) main_cset6_slider_pane_g9_ParamLimits

0x6a7f,	// (0x00035b3b) main_cset6_slider_pane_g9

0x6a8b,	// (0x00035b47) main_cset6_slider_pane_g10_ParamLimits

0x6a8b,	// (0x00035b47) main_cset6_slider_pane_g10

0x6a97,	// (0x00035b53) main_cset6_slider_pane_g11_ParamLimits

0x6a97,	// (0x00035b53) main_cset6_slider_pane_g11

0x6aa3,	// (0x00035b5f) main_cset6_slider_pane_g12_ParamLimits

0x6aa3,	// (0x00035b5f) main_cset6_slider_pane_g12

0x6aaf,	// (0x00035b6b) main_cset6_slider_pane_g13_ParamLimits

0x6aaf,	// (0x00035b6b) main_cset6_slider_pane_g13

0x6abb,	// (0x00035b77) main_cset6_slider_pane_g14_ParamLimits

0x6abb,	// (0x00035b77) main_cset6_slider_pane_g14

0x7a87,	// (0x00036b43) main_cset6_slider_pane_g15_ParamLimits

0x7a87,	// (0x00036b43) main_cset6_slider_pane_g15

0x6adf,	// (0x00035b9b) main_cset6_slider_pane_g16_ParamLimits

0x6adf,	// (0x00035b9b) main_cset6_slider_pane_g16

0x6aed,	// (0x00035ba9) main_cset6_slider_pane_g17_ParamLimits

0x6aed,	// (0x00035ba9) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003ec4e) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003ec4e) main_cset6_slider_pane_g

0xdb4d,	// (0x0003cc09) main_cset6_slider_pane_t1_ParamLimits

0xdb4d,	// (0x0003cc09) main_cset6_slider_pane_t1

0x7ab7,	// (0x00036b73) main_cset6_slider_pane_t2_ParamLimits

0x7ab7,	// (0x00036b73) main_cset6_slider_pane_t2

0x7ae2,	// (0x00036b9e) main_cset6_slider_pane_t3_ParamLimits

0x7ae2,	// (0x00036b9e) main_cset6_slider_pane_t3

0x7b0d,	// (0x00036bc9) main_cset6_slider_pane_t4_ParamLimits

0x7b0d,	// (0x00036bc9) main_cset6_slider_pane_t4

0x7b38,	// (0x00036bf4) main_cset6_slider_pane_t5_ParamLimits

0x7b38,	// (0x00036bf4) main_cset6_slider_pane_t5

0xdb8e,	// (0x0003cc4a) main_cset6_slider_pane_t7_ParamLimits

0xdb8e,	// (0x0003cc4a) main_cset6_slider_pane_t7

0x7b65,	// (0x00036c21) main_cset6_slider_pane_t8_ParamLimits

0x7b65,	// (0x00036c21) main_cset6_slider_pane_t8

0x7b89,	// (0x00036c45) main_cset6_slider_pane_t9_ParamLimits

0x7b89,	// (0x00036c45) main_cset6_slider_pane_t9

0x7bad,	// (0x00036c69) main_cset6_slider_pane_t10_ParamLimits

0x7bad,	// (0x00036c69) main_cset6_slider_pane_t10

0x7bd1,	// (0x00036c8d) main_cset6_slider_pane_t11_ParamLimits

0x7bd1,	// (0x00036c8d) main_cset6_slider_pane_t11

0xdbc4,	// (0x0003cc80) main_cset6_slider_pane_t14_ParamLimits

0xdbc4,	// (0x0003cc80) main_cset6_slider_pane_t14

0xdbfd,	// (0x0003ccb9) main_cset6_slider_pane_t15_ParamLimits

0xdbfd,	// (0x0003ccb9) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003ec73) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003ec73) main_cset6_slider_pane_t

0xd512,	// (0x0003c5ce) cset_slider_pane_g1_copy1

0xd51b,	// (0x0003c5d7) cset_slider_pane_g2_copy1

0xd524,	// (0x0003c5e0) cset_slider_pane_g3_copy1

0x9beb,	// (0x00038ca7) bg_popup_sub_pane_cp011_copy1

0xdc36,	// (0x0003ccf2) main_cset_text_pane_g1_copy1

0xd417,	// (0x0003c4d3) main_cset_text_pane_t1_copy1

0xd425,	// (0x0003c4e1) main_cset_text_pane_t2_copy1

0xd433,	// (0x0003c4ef) main_cset_text_pane_t3_copy1

0xd441,	// (0x0003c4fd) main_cset_text_pane_t4_copy1

0xd44f,	// (0x0003c50b) main_cset_text_pane_t5_copy1

0xdc3e,	// (0x0003ccfa) main_cset_text_pane_t6_copy1

0xdc4c,	// (0x0003cd08) main_cset_text_pane_t7_copy1

0x7983,	// (0x00036a3f) main_cset_text2_pane_t1_copy1

0x9c4c,	// (0x00038d08) main_ncimui_pane

0x48ec,	// (0x000339a8) popup_query_ncimui_window_ParamLimits

0x48ec,	// (0x000339a8) popup_query_ncimui_window

0xc9e0,	// (0x0003ba9c) field_cale_ev2_pane_g4_ParamLimits

0xc9e0,	// (0x0003ba9c) field_cale_ev2_pane_g4

0x60c9,	// (0x00035185) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60c9,	// (0x00035185) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003e951) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003e951) cell_video_dialer_keypad_pane_g

0x60e1,	// (0x0003519d) cell_video_dialer_keypad_pane_t1

0x9beb,	// (0x00038ca7) bg_popup_window_pane_cp012

0xac1f,	// (0x00039cdb) heading_pane_cp06

0xdc78,	// (0x0003cd34) ncim_query_content_pane

0x9beb,	// (0x00038ca7) bg_popup_heading_pane_cp01

0xdc80,	// (0x0003cd3c) ncim_heading_pane_t1

0xdc8e,	// (0x0003cd4a) ncim_indicator_popup_pane

0xdca0,	// (0x0003cd5c) ncim_query_button_pane

0xdcb6,	// (0x0003cd72) ncim_query_content_pane_t1

0xdcc8,	// (0x0003cd84) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003ecb7) ncim_query_content_pane_t

0xdd02,	// (0x0003cdbe) ncim_query_list_pane

0xdd14,	// (0x0003cdd0) ncim_query_popup_pane

0xdc8e,	// (0x0003cd4a) ncim_indicator_popup_pane_ParamLimits

0x7dec,	// (0x00036ea8) ncim_query_content_pane_g1_ParamLimits

0x7dec,	// (0x00036ea8) ncim_query_content_pane_g1

0xdcb6,	// (0x0003cd72) ncim_query_content_pane_t1_ParamLimits

0xdcc8,	// (0x0003cd84) ncim_query_content_pane_t2_ParamLimits

0x7df8,	// (0x00036eb4) ncim_query_content_pane_t3_ParamLimits

0x7df8,	// (0x00036eb4) ncim_query_content_pane_t3

0x7e20,	// (0x00036edc) ncim_query_content_pane_t4_ParamLimits

0x7e20,	// (0x00036edc) ncim_query_content_pane_t4

0x7e48,	// (0x00036f04) ncim_query_content_pane_t5_ParamLimits

0x7e48,	// (0x00036f04) ncim_query_content_pane_t5

0xdcda,	// (0x0003cd96) ncim_query_content_pane_t6_ParamLimits

0xdcda,	// (0x0003cd96) ncim_query_content_pane_t6

0xfbfb,	// (0x0003ecb7) ncim_query_content_pane_t_ParamLimits

0xdd02,	// (0x0003cdbe) ncim_query_list_pane_ParamLimits

0xdd14,	// (0x0003cdd0) ncim_query_popup_pane_ParamLimits

0xdd28,	// (0x0003cde4) wait_bar_pane_cp04

0x9beb,	// (0x00038ca7) input_focus_pane_cp011

0xdd30,	// (0x0003cdec) ncim_query_popup_pane_t1

0xdd3e,	// (0x0003cdfa) ncim_list_query_list_pane_ParamLimits

0xdd3e,	// (0x0003cdfa) ncim_list_query_list_pane

0x9beb,	// (0x00038ca7) bg_button_pane_cp027

0xdd51,	// (0x0003ce0d) ncim_query_button_pane_g1

0x9beb,	// (0x00038ca7) list_highlight_pane_cp012

0xdd5b,	// (0x0003ce17) ncim_list_query_list_pane_g1

0xdd63,	// (0x0003ce1f) ncim_list_query_list_pane_t1

0x659e,	// (0x0003565a) cam4_indicators_pane_g3_ParamLimits

0x659e,	// (0x0003565a) cam4_indicators_pane_g3

0x662f,	// (0x000356eb) vid4_indicators_pane_g5_ParamLimits

0x662f,	// (0x000356eb) vid4_indicators_pane_g5

0x746b,	// (0x00036527) vid4_progress_pane_g5_ParamLimits

0x746b,	// (0x00036527) vid4_progress_pane_g5

0x7cda,	// (0x00036d96) main_ncimui_pane_g1

0x7d40,	// (0x00036dfc) ncimui_group_query_pane_ParamLimits

0x7d40,	// (0x00036dfc) ncimui_group_query_pane

0x7d88,	// (0x00036e44) ncimui_list_pane_ParamLimits

0x7d88,	// (0x00036e44) ncimui_list_pane

0x7daf,	// (0x00036e6b) ncimui_text_pane_ParamLimits

0x7daf,	// (0x00036e6b) ncimui_text_pane

0x7e70,	// (0x00036f2c) ncimui_text_pane_t1_ParamLimits

0x7e70,	// (0x00036f2c) ncimui_text_pane_t1

0xdd71,	// (0x0003ce2d) ncimui_list_single_graphic_pane_ParamLimits

0xdd71,	// (0x0003ce2d) ncimui_list_single_graphic_pane

0x7e8e,	// (0x00036f4a) ncimui_query_pane_ParamLimits

0x7e8e,	// (0x00036f4a) ncimui_query_pane

0x9beb,	// (0x00038ca7) list_highlight_pane_cp013

0xdd81,	// (0x0003ce3d) ncim_list_query_list_pane_t1_copy1

0xdd5b,	// (0x0003ce17) ncim_list_single_graphic_pane_g1

0xdd8f,	// (0x0003ce4b) ncim_query_button_pane_cp01

0xdd9b,	// (0x0003ce57) ncim_query_entry_pane_ParamLimits

0xdd9b,	// (0x0003ce57) ncim_query_entry_pane

0xddae,	// (0x0003ce6a) ncimui_query_pane_g1

0xddba,	// (0x0003ce76) ncimui_query_pane_t1_ParamLimits

0xddba,	// (0x0003ce76) ncimui_query_pane_t1

0x9c4c,	// (0x00038d08) input_focus_pane_cp012

0xddd3,	// (0x0003ce8f) ncim_query_entry_pane_t1

0xa38d,	// (0x00039449) main_im_pane_ParamLimits

0x9c4c,	// (0x00038d08) main_mobtv_pane_ParamLimits

0x9c4c,	// (0x00038d08) main_mobtv_pane

0x7a9f,	// (0x00036b5b) main_cset6_slider_pane_g18_ParamLimits

0x7a9f,	// (0x00036b5b) main_cset6_slider_pane_g18

0x7aab,	// (0x00036b67) main_cset6_slider_pane_g19_ParamLimits

0x7aab,	// (0x00036b67) main_cset6_slider_pane_g19

0x7ea1,	// (0x00036f5d) bg_main_mobtv_pane_ParamLimits

0x7ea1,	// (0x00036f5d) bg_main_mobtv_pane

0x7eaf,	// (0x00036f6b) main_mobtv_info_pane

0x7eba,	// (0x00036f76) main_mobtv_loading_pane_ParamLimits

0x7eba,	// (0x00036f76) main_mobtv_loading_pane

0xdde5,	// (0x0003cea1) main_mobtv_pg_channel_list_pane

0xddef,	// (0x0003ceab) main_mobtv_pg_hdr_pane

0x7ec7,	// (0x00036f83) main_mobtv_programe_curr_pane_ParamLimits

0x7ec7,	// (0x00036f83) main_mobtv_programe_curr_pane

0x7ed4,	// (0x00036f90) main_mobtv_programe_next_pane_ParamLimits

0x7ed4,	// (0x00036f90) main_mobtv_programe_next_pane

0xddf8,	// (0x0003ceb4) popup_mobtv_noti_window

0xc74b,	// (0x0003b807) main_tv_pg_hdr_pane_g1

0xde02,	// (0x0003cebe) main_tv_pg_hdr_pane_g2

0xde0a,	// (0x0003cec6) main_tv_pg_hdr_pane_g3

0xde12,	// (0x0003cece) main_tv_pg_hdr_pane_g4

0xde1a,	// (0x0003ced6) main_tv_pg_hdr_pane_g5

0xde24,	// (0x0003cee0) main_tv_pg_hdr_pane_g6

0xde2e,	// (0x0003ceea) main_tv_pg_hdr_pane_g7

0xde38,	// (0x0003cef4) main_tv_pg_hdr_pane_g8

0xde42,	// (0x0003cefe) main_tv_pg_hdr_pane_g9

0xde4c,	// (0x0003cf08) main_tv_pg_hdr_pane_g10

0xde56,	// (0x0003cf12) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003ecc4) main_tv_pg_hdr_pane_g

0xde60,	// (0x0003cf1c) main_tv_pg_hdr_pane_t1

0xde6e,	// (0x0003cf2a) main_tv_pg_hdr_pane_t2

0xde7c,	// (0x0003cf38) main_tv_pg_hdr_pane_t3

0xde8c,	// (0x0003cf48) main_tv_pg_hdr_pane_t4

0xde9c,	// (0x0003cf58) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003ecdb) main_tv_pg_hdr_pane_t

0xdeac,	// (0x0003cf68) single_mobtv_pg_channel_pane_ParamLimits

0xdeac,	// (0x0003cf68) single_mobtv_pg_channel_pane

0xdebe,	// (0x0003cf7a) single_mobtv_pg_channel_table_pane

0xdec7,	// (0x0003cf83) single_mobtv_pg_channel_thumb_pane

0xded0,	// (0x0003cf8c) single_tv_pg_channel_pane_g1

0xded9,	// (0x0003cf95) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003ece6) single_tv_pg_channel_pane_g

0xc97b,	// (0x0003ba37) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc97b,	// (0x0003ba37) bg_single_mobtv_pg_channel_thumb_pane

0xdee2,	// (0x0003cf9e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdee2,	// (0x0003cf9e) single_mobtv_pg_channel_thumb_pane_g1

0xdef0,	// (0x0003cfac) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdef0,	// (0x0003cfac) single_mobtv_pg_channel_thumb_pane_g2

0xdefc,	// (0x0003cfb8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdefc,	// (0x0003cfb8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003eceb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003eceb) single_mobtv_pg_channel_thumb_pane_g

0xdf08,	// (0x0003cfc4) single_mobtv_pg_channel_thumb_pane_t1

0xdf16,	// (0x0003cfd2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003ecf2) single_mobtv_pg_channel_thumb_pane_t

0xc74b,	// (0x0003b807) bg_single_mobtv_pg_channel_table_pane_g1

0xc74b,	// (0x0003b807) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0003e798) bg_single_mobtv_pg_channel_table_pane_g

0xdf24,	// (0x0003cfe0) single_mobtv_pg_channel_table_pane_t1

0xdf32,	// (0x0003cfee) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003ecf7) single_mobtv_pg_channel_table_pane_t

0x7ee9,	// (0x00036fa5) main_mobtv_info_pane_g1_ParamLimits

0x7ee9,	// (0x00036fa5) main_mobtv_info_pane_g1

0x7f07,	// (0x00036fc3) main_mobtv_info_pane_t1_ParamLimits

0x7f07,	// (0x00036fc3) main_mobtv_info_pane_t1

0x7f7f,	// (0x0003703b) main_mobtv_info_pane_t2_ParamLimits

0x7f7f,	// (0x0003703b) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003ed01) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003ed01) main_mobtv_info_pane_t

0x800e,	// (0x000370ca) wait_bar_pane_cp05

0x8020,	// (0x000370dc) main_mobtv_loading_pane_g1_ParamLimits

0x8020,	// (0x000370dc) main_mobtv_loading_pane_g1

0x8031,	// (0x000370ed) main_mobtv_loading_pane_g2_ParamLimits

0x8031,	// (0x000370ed) main_mobtv_loading_pane_g2

0x803d,	// (0x000370f9) main_mobtv_loading_pane_g3_ParamLimits

0x803d,	// (0x000370f9) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003ed08) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003ed08) main_mobtv_loading_pane_g

0xdf40,	// (0x0003cffc) main_mobtv_loading_pane_t1_ParamLimits

0xdf40,	// (0x0003cffc) main_mobtv_loading_pane_t1

0xdf58,	// (0x0003d014) main_mobtv_loading_pane_t2_ParamLimits

0xdf58,	// (0x0003d014) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003ed0f) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003ed0f) main_mobtv_loading_pane_t

0x8050,	// (0x0003710c) wait_bar_pane_cp06_ParamLimits

0x8050,	// (0x0003710c) wait_bar_pane_cp06

0xdf7c,	// (0x0003d038) main_mobtv_programe_curr_pane_t1

0xdf8a,	// (0x0003d046) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003ed14) main_mobtv_programe_curr_pane_t

0xdf98,	// (0x0003d054) main_mobtv_programe_next_pane_t1

0xdfa6,	// (0x0003d062) main_mobtv_programe_next_pane_t2

0xdfb4,	// (0x0003d070) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003ed19) main_mobtv_programe_next_pane_t

0x9beb,	// (0x00038ca7) bg_popup_mobtv_noti_window_pane

0xdfc2,	// (0x0003d07e) popup_mobtv_noti_window_g1

0xdfca,	// (0x0003d086) popup_mobtv_noti_window_t1

0xdfd8,	// (0x0003d094) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003ed20) popup_mobtv_noti_window_t

0xc74b,	// (0x0003b807) bg_popup_mobtv_noti_window_pane_g1

0x9beb,	// (0x00038ca7) sc_clock_pane

0x9beb,	// (0x00038ca7) main_fs_bigclock_pane

0x7718,	// (0x000367d4) blid2_tripm_pane_t4_ParamLimits

0x7718,	// (0x000367d4) blid2_tripm_pane_t4

0x805f,	// (0x0003711b) sc_clock_pane_g1_ParamLimits

0x805f,	// (0x0003711b) sc_clock_pane_g1

0x8071,	// (0x0003712d) sc_clock_pane_t1_ParamLimits

0x8071,	// (0x0003712d) sc_clock_pane_t1

0x8095,	// (0x00037151) sc_clock_pane_t2_ParamLimits

0x8095,	// (0x00037151) sc_clock_pane_t2

0x80ad,	// (0x00037169) sc_clock_pane_t3_ParamLimits

0x80ad,	// (0x00037169) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003ed25) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003ed25) sc_clock_pane_t

0x90a3,	// (0x0003815f) main_fs_bigclock_indicator_pane_ParamLimits

0x90a3,	// (0x0003815f) main_fs_bigclock_indicator_pane

0x8169,	// (0x00037225) main_fs_bigclock_pane_g1_ParamLimits

0x8169,	// (0x00037225) main_fs_bigclock_pane_g1

0x90af,	// (0x0003816b) main_fs_bigclock_pane_t1_ParamLimits

0x90af,	// (0x0003816b) main_fs_bigclock_pane_t1

0x90c1,	// (0x0003817d) main_fs_bigclock_pane_t2_ParamLimits

0x90c1,	// (0x0003817d) main_fs_bigclock_pane_t2

0x90d5,	// (0x00038191) main_fs_bigclock_pane_t3_ParamLimits

0x90d5,	// (0x00038191) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003ef2a) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003ef2a) main_fs_bigclock_pane_t

0xec38,	// (0x0003dcf4) main_fs_bigclock_indicator_pane_g1

0xdca8,	// (0x0003cd64) ncim_query_content_pane_g2_ParamLimits

0xdca8,	// (0x0003cd64) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003ecb2) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003ecb2) ncim_query_content_pane_g

0x80c4,	// (0x00037180) sc_clock_pane_t4_ParamLimits

0x80c4,	// (0x00037180) sc_clock_pane_t4

0x9c4c,	// (0x00038d08) main_radioblah_pane

0xd0b4,	// (0x0003c170) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0b4,	// (0x0003c170) cell_call4_button_pane_t1_copy1

0x7cf2,	// (0x00036dae) main_ncimui_pane_t1_ParamLimits

0x7cf2,	// (0x00036dae) main_ncimui_pane_t1

0x7d0c,	// (0x00036dc8) main_ncimui_pane_t2_ParamLimits

0x7d0c,	// (0x00036dc8) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003ecab) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003ecab) main_ncimui_pane_t

0xe12b,	// (0x0003d1e7) main_radioblah_anim_pane_ParamLimits

0xe12b,	// (0x0003d1e7) main_radioblah_anim_pane

0xe13c,	// (0x0003d1f8) main_radioblah_info_pane_ParamLimits

0xe13c,	// (0x0003d1f8) main_radioblah_info_pane

0xe150,	// (0x0003d20c) main_radioblah_pane_t1_ParamLimits

0xe150,	// (0x0003d20c) main_radioblah_pane_t1

0xe16c,	// (0x0003d228) main_radioblah_pane_t2_ParamLimits

0xe16c,	// (0x0003d228) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003ed46) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003ed46) main_radioblah_pane_t

0x81c6,	// (0x00037282) main_radioblah_rocker_ctrl_pane_ParamLimits

0x81c6,	// (0x00037282) main_radioblah_rocker_ctrl_pane

0xe1b4,	// (0x0003d270) main_radioblah_info_pane_t1_ParamLimits

0xe1b4,	// (0x0003d270) main_radioblah_info_pane_t1

0x821e,	// (0x000372da) main_radioblah_info_pane_t2_ParamLimits

0x821e,	// (0x000372da) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003ed4f) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003ed4f) main_radioblah_info_pane_t

0xc74b,	// (0x0003b807) main_radioblah_rocker_ctrl_pane_g1

0x82ce,	// (0x0003738a) main_radioblah_rocker_ctrl_pane_g2

0x82d6,	// (0x00037392) main_radioblah_rocker_ctrl_pane_g3

0x82de,	// (0x0003739a) main_radioblah_rocker_ctrl_pane_g4

0x82e6,	// (0x000373a2) main_radioblah_rocker_ctrl_pane_g5

0x82ee,	// (0x000373aa) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003ed58) main_radioblah_rocker_ctrl_pane_g

0x7983,	// (0x00036a3f) main_cset_text2_pane_t1_copy1_ParamLimits

0x654d,	// (0x00035609) cam4_image_uncrop_qvga_pane

0x65c4,	// (0x00035680) vid4_image_uncrop_qcif_pane

0x78a3,	// (0x0003695f) cam6_image_uncrop_qvga_pane_ParamLimits

0x78a3,	// (0x0003695f) cam6_image_uncrop_qvga_pane

0xd9ab,	// (0x0003ca67) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9ab,	// (0x0003ca67) vid6_image_uncrop_qcif_pane

0x9beb,	// (0x00038ca7) bg_popup_preview_window_pane_cp03

0xdc5a,	// (0x0003cd16) list_cset_text2_pane

0xdc62,	// (0x0003cd1e) main_cset6_text2_pane_g1

0xdc6a,	// (0x0003cd26) main_cset6_text2_pane_t1

0x82f6,	// (0x000373b2) list_cset_text2_pane_t1_ParamLimits

0x82f6,	// (0x000373b2) list_cset_text2_pane_t1

0x9c4c,	// (0x00038d08) main_radioblah_pane_ParamLimits

0x7ffa,	// (0x000370b6) main_mobtv_info_pane_t3_ParamLimits

0x7ffa,	// (0x000370b6) main_mobtv_info_pane_t3

0x81b4,	// (0x00037270) main_radioblah_pane_g1

0x81ee,	// (0x000372aa) main_radioblah_info_pane_g1

0x8273,	// (0x0003732f) main_radioblah_info_pane_t3_ParamLimits

0x8273,	// (0x0003732f) main_radioblah_info_pane_t3

0x3086,	// (0x00032142) highlight_cell_cale_month_pane_ParamLimits

0x3086,	// (0x00032142) highlight_cell_cale_month_pane

0x9beb,	// (0x00038ca7) main_phob_fisheye_pane

0xca63,	// (0x0003bb1f) scroll_pane_cp0031_ParamLimits

0xca63,	// (0x0003bb1f) scroll_pane_cp0031

0xdabd,	// (0x0003cb79) wait_bar_pane_cp08_ParamLimits

0x3174,	// (0x00032230) cset_list_set_pane_copy1_ParamLimits

0xe1ee,	// (0x0003d2aa) highlight_cell_cale_month_pane_g1

0x830f,	// (0x000373cb) highlight_cell_cale_month_pane_t1

0xd74a,	// (0x0003c806) list_gen_pane_cp01

0xd2a2,	// (0x0003c35e) scroll_pane_01

0x831d,	// (0x000373d9) list_single_double_fisheye_pane

0x8326,	// (0x000373e2) list_double_fisheye_pane_g1_ParamLimits

0x8326,	// (0x000373e2) list_double_fisheye_pane_g1

0x8332,	// (0x000373ee) list_double_fisheye_pane_g2_ParamLimits

0x8332,	// (0x000373ee) list_double_fisheye_pane_g2

0x8346,	// (0x00037402) list_double_fisheye_pane_g3_ParamLimits

0x8346,	// (0x00037402) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003ed65) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003ed65) list_double_fisheye_pane_g

0x836f,	// (0x0003742b) list_double_fisheye_pane_t1_ParamLimits

0x836f,	// (0x0003742b) list_double_fisheye_pane_t1

0x838a,	// (0x00037446) list_double_fisheye_pane_t2_ParamLimits

0x838a,	// (0x00037446) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003ed70) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003ed70) list_double_fisheye_pane_t

0x9beb,	// (0x00038ca7) main_call5_pane

0x80ef,	// (0x000371ab) sc_swipe_pane_ParamLimits

0x80ef,	// (0x000371ab) sc_swipe_pane

0x83bf,	// (0x0003747b) call5_image_pane_ParamLimits

0x83bf,	// (0x0003747b) call5_image_pane

0x83dc,	// (0x00037498) call5_swipe_1_pane_ParamLimits

0x83dc,	// (0x00037498) call5_swipe_1_pane

0x83ef,	// (0x000374ab) call5_swipe_2_pane_ParamLimits

0x83ef,	// (0x000374ab) call5_swipe_2_pane

0x841c,	// (0x000374d8) popup_call5_audio_first_window_ParamLimits

0x841c,	// (0x000374d8) popup_call5_audio_first_window

0xc97b,	// (0x0003ba37) call5_swipe_1_pane_g1_ParamLimits

0xc97b,	// (0x0003ba37) call5_swipe_1_pane_g1

0xe1f6,	// (0x0003d2b2) call5_swipe_1_pane_g2_ParamLimits

0xe1f6,	// (0x0003d2b2) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003ed75) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003ed75) call5_swipe_1_pane_g

0xe202,	// (0x0003d2be) call5_swipe_1_pane_t1_ParamLimits

0xe202,	// (0x0003d2be) call5_swipe_1_pane_t1

0xc97b,	// (0x0003ba37) call5_swipe_2_pane_g1_ParamLimits

0xc97b,	// (0x0003ba37) call5_swipe_2_pane_g1

0xe217,	// (0x0003d2d3) call5_swipe_2_pane_g2_ParamLimits

0xe217,	// (0x0003d2d3) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003ed7a) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003ed7a) call5_swipe_2_pane_g

0xe223,	// (0x0003d2df) call5_swipe_2_pane_t1_ParamLimits

0xe223,	// (0x0003d2df) call5_swipe_2_pane_t1

0xe238,	// (0x0003d2f4) sc_swipe_pane_g1_ParamLimits

0xe238,	// (0x0003d2f4) sc_swipe_pane_g1

0xe245,	// (0x0003d301) sc_swipe_pane_g2_ParamLimits

0xe245,	// (0x0003d301) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003ed7f) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003ed7f) sc_swipe_pane_g

0xe251,	// (0x0003d30d) sc_swipe_pane_t1_ParamLimits

0xe251,	// (0x0003d30d) sc_swipe_pane_t1

0x9beb,	// (0x00038ca7) main_cmail_launcher_pane

0x8431,	// (0x000374ed) aid_size_cell_cmail_l_ParamLimits

0x8431,	// (0x000374ed) aid_size_cell_cmail_l

0x844b,	// (0x00037507) grid_cmail_l_pane_ParamLimits

0x844b,	// (0x00037507) grid_cmail_l_pane

0x8466,	// (0x00037522) cell_cmail_l_pane_ParamLimits

0x8466,	// (0x00037522) cell_cmail_l_pane

0x848e,	// (0x0003754a) cell_cmail_l_pane_g1_ParamLimits

0x848e,	// (0x0003754a) cell_cmail_l_pane_g1

0x849a,	// (0x00037556) cell_cmail_l_pane_t1_ParamLimits

0x849a,	// (0x00037556) cell_cmail_l_pane_t1

0xe266,	// (0x0003d322) cell_cmail_l_pane_t2_ParamLimits

0xe266,	// (0x0003d322) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003ed84) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003ed84) cell_cmail_l_pane_t

0x9c4c,	// (0x00038d08) grid_highlight_pane_cp018_ParamLimits

0x9c4c,	// (0x00038d08) grid_highlight_pane_cp018

0x0f40,	// (0x0002fffc) main2_pane_ParamLimits

0x0f40,	// (0x0002fffc) main2_pane

0xa438,	// (0x000394f4) popup_sp_fs_action_menu_bg_pane_g1

0xa440,	// (0x000394fc) popup_sp_fs_action_menu_bg_pane_g2

0xa448,	// (0x00039504) popup_sp_fs_action_menu_bg_pane_g3

0xa450,	// (0x0003950c) popup_sp_fs_action_menu_bg_pane_g4

0xa458,	// (0x00039514) popup_sp_fs_action_menu_bg_pane_g5

0xa460,	// (0x0003951c) popup_sp_fs_action_menu_bg_pane_g6

0xa468,	// (0x00039524) popup_sp_fs_action_menu_bg_pane_g7

0xa470,	// (0x0003952c) popup_sp_fs_action_menu_bg_pane_g8

0xa478,	// (0x00039534) popup_sp_fs_action_menu_bg_pane_g9

0xa480,	// (0x0003953c) popup_sp_fs_action_menu_bg_pane_g10

0xa480,	// (0x0003953c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0003e246) popup_sp_fs_action_menu_bg_pane_g

0xc225,	// (0x0003b2e1) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x2_t3_g3_g1

0x1ef5,	// (0x00030fb1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ef5,	// (0x00030fb1) list_medium_line_x2_t3_g3_g2

0x1f01,	// (0x00030fbd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1f01,	// (0x00030fbd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003e2f4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003e2f4) list_medium_line_x2_t3_g3_g

0x1f0d,	// (0x00030fc9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1f0d,	// (0x00030fc9) list_medium_line_x2_t3_g3_t1

0x1f22,	// (0x00030fde) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f22,	// (0x00030fde) list_medium_line_x2_t3_g3_t2

0x1f36,	// (0x00030ff2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f36,	// (0x00030ff2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003e2fb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003e2fb) list_medium_line_x2_t3_g3_t

0xc225,	// (0x0003b2e1) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x2_t3_g2_g1

0x1f01,	// (0x00030fbd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1f01,	// (0x00030fbd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003e302) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003e302) list_medium_line_x2_t3_g2_g

0x1f4b,	// (0x00031007) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f4b,	// (0x00031007) list_medium_line_x2_t3_g2_t1

0x1f61,	// (0x0003101d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f61,	// (0x0003101d) list_medium_line_x2_t3_g2_t2

0x1f73,	// (0x0003102f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f73,	// (0x0003102f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003e307) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003e307) list_medium_line_x2_t3_g2_t

0xc225,	// (0x0003b2e1) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x2_t4_g4_g1

0x1f91,	// (0x0003104d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f91,	// (0x0003104d) list_medium_line_x2_t4_g4_g2

0x1ef5,	// (0x00030fb1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ef5,	// (0x00030fb1) list_medium_line_x2_t4_g4_g3

0x1f9d,	// (0x00031059) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f9d,	// (0x00031059) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003e30e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003e30e) list_medium_line_x2_t4_g4_g

0x1fa9,	// (0x00031065) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1fa9,	// (0x00031065) list_medium_line_x2_t4_g4_t1

0x1fc0,	// (0x0003107c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1fc0,	// (0x0003107c) list_medium_line_x2_t4_g4_t2

0x1fd5,	// (0x00031091) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1fd5,	// (0x00031091) list_medium_line_x2_t4_g4_t3

0x1fe7,	// (0x000310a3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1fe7,	// (0x000310a3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003e317) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003e317) list_medium_line_x2_t4_g4_t

0xc225,	// (0x0003b2e1) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x2_t2_g4_g1

0x1f91,	// (0x0003104d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f91,	// (0x0003104d) list_medium_line_x2_t2_g4_g2

0x1ef5,	// (0x00030fb1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ef5,	// (0x00030fb1) list_medium_line_x2_t2_g4_g3

0x1f01,	// (0x00030fbd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1f01,	// (0x00030fbd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003e37e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003e37e) list_medium_line_x2_t2_g4_g

0x30ac,	// (0x00032168) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30ac,	// (0x00032168) list_medium_line_x2_t2_g4_t1

0x1f36,	// (0x00030ff2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f36,	// (0x00030ff2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003e387) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003e387) list_medium_line_x2_t2_g4_t

0xc225,	// (0x0003b2e1) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x2_t2_g3_g1

0x1ef5,	// (0x00030fb1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ef5,	// (0x00030fb1) list_medium_line_x2_t2_g3_g2

0x1f01,	// (0x00030fbd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1f01,	// (0x00030fbd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003e2f4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003e2f4) list_medium_line_x2_t2_g3_g

0x30c1,	// (0x0003217d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30c1,	// (0x0003217d) list_medium_line_x2_t2_g3_t1

0x1f36,	// (0x00030ff2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f36,	// (0x00030ff2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003e38c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003e38c) list_medium_line_x2_t2_g3_t

0x3219,	// (0x000322d5) main_sp_fs_list_pane_ParamLimits

0x3219,	// (0x000322d5) main_sp_fs_list_pane

0x3225,	// (0x000322e1) sp_fs_scroll_pane_ParamLimits

0x3225,	// (0x000322e1) sp_fs_scroll_pane

0x3231,	// (0x000322ed) list_medium_line_x2_t3_t1

0x3241,	// (0x000322fd) list_medium_line_x2_t3_t2

0x324f,	// (0x0003230b) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003e3d7) list_medium_line_x2_t3_t

0x325d,	// (0x00032319) list_medium_line_x3_t4_t1

0x326d,	// (0x00032329) list_medium_line_x3_t4_t2

0x327b,	// (0x00032337) list_medium_line_x3_t4_t3

0x324f,	// (0x0003230b) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003e3de) list_medium_line_x3_t4_t

0x3289,	// (0x00032345) list_medium_line_x4_t5_t1

0x3299,	// (0x00032355) list_medium_line_x4_t5_t2

0x327b,	// (0x00032337) list_medium_line_x4_t5_t3

0x32a7,	// (0x00032363) list_medium_line_x4_t5_t4

0x324f,	// (0x0003230b) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003e3e7) list_medium_line_x4_t5_t

0xc225,	// (0x0003b2e1) list_medium_line_t4_g4_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_t4_g4_g1

0x1f9d,	// (0x00031059) list_medium_line_t4_g4_g2_ParamLimits

0x1f9d,	// (0x00031059) list_medium_line_t4_g4_g2

0x32b5,	// (0x00032371) list_medium_line_t4_g4_g3_ParamLimits

0x32b5,	// (0x00032371) list_medium_line_t4_g4_g3

0x1f01,	// (0x00030fbd) list_medium_line_t4_g4_g4_ParamLimits

0x1f01,	// (0x00030fbd) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003e3f2) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003e3f2) list_medium_line_t4_g4_g

0x32c1,	// (0x0003237d) list_medium_line_t4_g4_t1_ParamLimits

0x32c1,	// (0x0003237d) list_medium_line_t4_g4_t1

0x32d6,	// (0x00032392) list_medium_line_t4_g4_t2_ParamLimits

0x32d6,	// (0x00032392) list_medium_line_t4_g4_t2

0x32ec,	// (0x000323a8) list_medium_line_t4_g4_t3_ParamLimits

0x32ec,	// (0x000323a8) list_medium_line_t4_g4_t3

0x1f36,	// (0x00030ff2) list_medium_line_t4_g4_t4_ParamLimits

0x1f36,	// (0x00030ff2) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003e3fb) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003e3fb) list_medium_line_t4_g4_t

0x3437,	// (0x000324f3) chi_dic_find_pane_g1

0x4672,	// (0x0003372e) main_tport_pane

0xd3ae,	// (0x0003c46a) list_medium_line_plain_t1

0x6e4e,	// (0x00035f0a) list_medium_line_t2_g2_g1_ParamLimits

0x6e4e,	// (0x00035f0a) list_medium_line_t2_g2_g1

0xd3c4,	// (0x0003c480) list_medium_line_t2_g2_g2_ParamLimits

0xd3c4,	// (0x0003c480) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003eabc) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003eabc) list_medium_line_t2_g2_g

0x6e5a,	// (0x00035f16) list_medium_line_t2_g2_t1_ParamLimits

0x6e5a,	// (0x00035f16) list_medium_line_t2_g2_t1

0x6e71,	// (0x00035f2d) list_medium_line_t2_g2_t2_ParamLimits

0x6e71,	// (0x00035f2d) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003eac1) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003eac1) list_medium_line_t2_g2_t

0xd753,	// (0x0003c80f) aid_sp_fs_list_icon_a_sm

0xd75b,	// (0x0003c817) aid_sp_fs_list_icon_d

0xd763,	// (0x0003c81f) aid_sp_fs_text_primary

0xd76c,	// (0x0003c828) aid_sp_fs_text_secondary

0x74ce,	// (0x0003658a) list_medium_line

0x74ce,	// (0x0003658a) list_medium_line_g2

0x74ce,	// (0x0003658a) list_medium_line_g3

0x74ce,	// (0x0003658a) list_medium_line_plain

0x74ce,	// (0x0003658a) list_medium_line_plain_t2

0x74ce,	// (0x0003658a) list_medium_line_plain_t3

0x74ce,	// (0x0003658a) list_medium_line_right_icon

0x74ce,	// (0x0003658a) list_medium_line_right_iconx2

0x74ce,	// (0x0003658a) list_medium_line_t2

0x74ce,	// (0x0003658a) list_medium_line_t2_g2

0x74ce,	// (0x0003658a) list_medium_line_t2_g3

0x74ce,	// (0x0003658a) list_medium_line_t2_right_icon

0x74ce,	// (0x0003658a) list_medium_line_t2_right_iconx2

0x74ce,	// (0x0003658a) list_medium_line_t3

0x74ce,	// (0x0003658a) list_medium_line_t3_g2

0x74ce,	// (0x0003658a) list_medium_line_t3_g3

0x74ce,	// (0x0003658a) list_medium_line_t3_right_iconx2

0x74d7,	// (0x00036593) list_medium_line_t4_g4

0x74ce,	// (0x0003658a) list_medium_line_x2

0x74ce,	// (0x0003658a) list_medium_line_x2_t2_g2

0x74ce,	// (0x0003658a) list_medium_line_x2_t2_g3

0x74ce,	// (0x0003658a) list_medium_line_x2_t2_g4

0x74ce,	// (0x0003658a) list_medium_line_x2_t3

0x74ce,	// (0x0003658a) list_medium_line_x2_t3_g2

0x74ce,	// (0x0003658a) list_medium_line_x2_t3_g3

0x74ce,	// (0x0003658a) list_medium_line_x2_t3_g4

0x74ce,	// (0x0003658a) list_medium_line_x2_t4_g2

0x74ce,	// (0x0003658a) list_medium_line_x2_t4_g4

0x74e0,	// (0x0003659c) list_medium_line_x3

0x74e0,	// (0x0003659c) list_medium_line_x3_t4

0x74e0,	// (0x0003659c) list_medium_line_x3_t4_g4

0x74d7,	// (0x00036593) list_medium_line_x4_t4

0x74d7,	// (0x00036593) list_medium_line_x4_t4_g7

0x74d7,	// (0x00036593) list_medium_line_x4_t5

0x74e9,	// (0x000365a5) list_single_fs_dyc_pane_ParamLimits

0x74e9,	// (0x000365a5) list_single_fs_dyc_pane

0xc225,	// (0x0003b2e1) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x4_t4_g7_g1

0x7bf7,	// (0x00036cb3) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7bf7,	// (0x00036cb3) list_medium_line_x4_t4_g7_g2

0x7c03,	// (0x00036cbf) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c03,	// (0x00036cbf) list_medium_line_x4_t4_g7_g3

0x7c12,	// (0x00036cce) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7c12,	// (0x00036cce) list_medium_line_x4_t4_g7_g4

0x7c1e,	// (0x00036cda) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7c1e,	// (0x00036cda) list_medium_line_x4_t4_g7_g5

0x7c2d,	// (0x00036ce9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7c2d,	// (0x00036ce9) list_medium_line_x4_t4_g7_g6

0x7c3c,	// (0x00036cf8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7c3c,	// (0x00036cf8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003ec8c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003ec8c) list_medium_line_x4_t4_g7_g

0x7c48,	// (0x00036d04) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7c48,	// (0x00036d04) list_medium_line_x4_t4_g7_t1

0x7c5d,	// (0x00036d19) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c5d,	// (0x00036d19) list_medium_line_x4_t4_g7_t2

0x7c72,	// (0x00036d2e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c72,	// (0x00036d2e) list_medium_line_x4_t4_g7_t3

0x7c87,	// (0x00036d43) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c87,	// (0x00036d43) list_medium_line_x4_t4_g7_t4

0x7c99,	// (0x00036d55) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c99,	// (0x00036d55) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003ec9b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003ec9b) list_medium_line_x4_t4_g7_t

0x7cab,	// (0x00036d67) list_single_dyc_row_pane_ParamLimits

0x7cab,	// (0x00036d67) list_single_dyc_row_pane

0x83ac,	// (0x00037468) call5_gesture_pane_ParamLimits

0x83ac,	// (0x00037468) call5_gesture_pane

0x8402,	// (0x000374be) call5_windows_pane_ParamLimits

0x8402,	// (0x000374be) call5_windows_pane

0x84b0,	// (0x0003756c) call5_swipe_1_pane_cp_ParamLimits

0x84b0,	// (0x0003756c) call5_swipe_1_pane_cp

0x84bc,	// (0x00037578) call5_swipe_2_pane_cp_ParamLimits

0x84bc,	// (0x00037578) call5_swipe_2_pane_cp

0xa543,	// (0x000395ff) call5_image_pane_cp

0x84c8,	// (0x00037584) popup_call5_audio_first_window_cp_ParamLimits

0x84c8,	// (0x00037584) popup_call5_audio_first_window_cp

0xe238,	// (0x0003d2f4) call5_swipe_1_pane_g1_cp_ParamLimits

0xe238,	// (0x0003d2f4) call5_swipe_1_pane_g1_cp

0xe278,	// (0x0003d334) call5_swipe_1_pane_g2_cp

0xe251,	// (0x0003d30d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe251,	// (0x0003d30d) call5_swipe_1_pane_t1_cp

0xe238,	// (0x0003d2f4) call5_swipe_2_pane_g1_cp_ParamLimits

0xe238,	// (0x0003d2f4) call5_swipe_2_pane_g1_cp

0xe280,	// (0x0003d33c) call5_swipe_2_pane_g2_cp

0xe288,	// (0x0003d344) call5_swipe_2_pane_t1_cp_ParamLimits

0xe288,	// (0x0003d344) call5_swipe_2_pane_t1_cp

0x9c4c,	// (0x00038d08) main_sp_fs_email_pane

0xe29d,	// (0x0003d359) main_sp_fs_listscroll_pane_te

0xe2a6,	// (0x0003d362) popup_sp_fs_action_menu_pane_ParamLimits

0xe2a6,	// (0x0003d362) popup_sp_fs_action_menu_pane

0xc74b,	// (0x0003b807) bg_sp_fs_ctrlbar_pane_g1

0xcd04,	// (0x0003bdc0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd16,	// (0x0003bdd2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcd0d,	// (0x0003bdc9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc74b,	// (0x0003b807) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003ed89) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc52a,	// (0x0003b5e6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc52a,	// (0x0003b5e6) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2ec,	// (0x0003d3a8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2ec,	// (0x0003d3a8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2f8,	// (0x0003d3b4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2f8,	// (0x0003d3b4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003ed92) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003ed92) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe304,	// (0x0003d3c0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe304,	// (0x0003d3c0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe31e,	// (0x0003d3da) list_medium_line_t2_right_icon_g1

0x84d6,	// (0x00037592) list_medium_line_t2_right_icon_t1

0x84e6,	// (0x000375a2) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003ed97) list_medium_line_t2_right_icon_t

0xc2f2,	// (0x0003b3ae) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc2f2,	// (0x0003b3ae) bg_sp_fs_ctrlbar_pane

0x8545,	// (0x00037601) main_sp_fs_ctrlbar_button_pane_cp01

0x854f,	// (0x0003760b) main_sp_fs_ctrlbar_ddmenu_pane

0xc225,	// (0x0003b2e1) main_sp_fs_ctrlbar_pane_g1

0xe35e,	// (0x0003d41a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003ed9c) main_sp_fs_ctrlbar_pane_g

0xe36a,	// (0x0003d426) main_sp_fs_ctrlbar_pane_t1

0x8559,	// (0x00037615) main_sp_fs_ctrlbar_pane

0x857d,	// (0x00037639) main_sp_fs_listscroll_pane_te_cp01

0x859d,	// (0x00037659) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x859d,	// (0x00037659) popup_sp_fs_action_menu_pane_cp01

0x9c4c,	// (0x00038d08) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9c4c,	// (0x00038d08) bg_sp_fs_highlight_list_pane_cp01

0xe39a,	// (0x0003d456) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe39a,	// (0x0003d456) sp_fs_action_menu_list_gene_pane_g1

0xe3a9,	// (0x0003d465) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3a9,	// (0x0003d465) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003eda6) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003eda6) sp_fs_action_menu_list_gene_pane_g

0xe3b6,	// (0x0003d472) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3b6,	// (0x0003d472) sp_fs_action_menu_list_gene_pane_t1

0xe3ce,	// (0x0003d48a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3ce,	// (0x0003d48a) sp_fs_action_menu_list_gene_pane

0xe3f1,	// (0x0003d4ad) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3f1,	// (0x0003d4ad) popup_sp_fs_action_menu_bg_pane

0xe3ff,	// (0x0003d4bb) sp_fs_action_menu_list_pane_ParamLimits

0xe3ff,	// (0x0003d4bb) sp_fs_action_menu_list_pane

0xe423,	// (0x0003d4df) sp_fs_scroll_pane_cp01_ParamLimits

0xe423,	// (0x0003d4df) sp_fs_scroll_pane_cp01

0x85d3,	// (0x0003768f) list_medium_line_plain_t2_t1

0x85e3,	// (0x0003769f) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003edab) list_medium_line_plain_t2_t

0x85f3,	// (0x000376af) list_medium_line_plain_t3_t1

0x8603,	// (0x000376bf) list_medium_line_plain_t3_t2

0x8611,	// (0x000376cd) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003edb0) list_medium_line_plain_t3_t

0xc225,	// (0x0003b2e1) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x2_t2_g2_g1

0x1f01,	// (0x00030fbd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1f01,	// (0x00030fbd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003e302) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003e302) list_medium_line_x2_t2_g2_g

0x32c1,	// (0x0003237d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x32c1,	// (0x0003237d) list_medium_line_x2_t2_g2_t1

0x1f36,	// (0x00030ff2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f36,	// (0x00030ff2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003edb7) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003edb7) list_medium_line_x2_t2_g2_t

0xc225,	// (0x0003b2e1) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x2_t4_g2_g1

0x1f01,	// (0x00030fbd) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1f01,	// (0x00030fbd) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003e302) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003e302) list_medium_line_x2_t4_g2_g

0x861f,	// (0x000376db) list_medium_line_x2_t4_g2_t1_ParamLimits

0x861f,	// (0x000376db) list_medium_line_x2_t4_g2_t1

0x8639,	// (0x000376f5) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8639,	// (0x000376f5) list_medium_line_x2_t4_g2_t2

0x864f,	// (0x0003770b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x864f,	// (0x0003770b) list_medium_line_x2_t4_g2_t3

0x1f36,	// (0x00030ff2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f36,	// (0x00030ff2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003edbc) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003edbc) list_medium_line_x2_t4_g2_t

0xe449,	// (0x0003d505) list_medium_line_t3_right_iconx2_g1

0xe31e,	// (0x0003d3da) list_medium_line_t3_right_iconx2_g2

0x8664,	// (0x00037720) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003edc5) list_medium_line_t3_right_iconx2_g

0x866e,	// (0x0003772a) list_medium_line_t3_right_iconx2_t1

0x867e,	// (0x0003773a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003edcc) list_medium_line_t3_right_iconx2_t

0xc225,	// (0x0003b2e1) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x3_t4_g4_g1

0x1ef5,	// (0x00030fb1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ef5,	// (0x00030fb1) list_medium_line_x3_t4_g4_g2

0x1f9d,	// (0x00031059) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1f9d,	// (0x00031059) list_medium_line_x3_t4_g4_g3

0x868c,	// (0x00037748) list_medium_line_x3_t4_g4_g4_ParamLimits

0x868c,	// (0x00037748) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003edd1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003edd1) list_medium_line_x3_t4_g4_g

0x8698,	// (0x00037754) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8698,	// (0x00037754) list_medium_line_x3_t4_g4_t1

0x86af,	// (0x0003776b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86af,	// (0x0003776b) list_medium_line_x3_t4_g4_t2

0x86ca,	// (0x00037786) list_medium_line_x3_t4_g4_t3_ParamLimits

0x86ca,	// (0x00037786) list_medium_line_x3_t4_g4_t3

0x86df,	// (0x0003779b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x86df,	// (0x0003779b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003edda) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003edda) list_medium_line_x3_t4_g4_t

0x86fc,	// (0x000377b8) list_single_dyc_row_text_pane_t1_ParamLimits

0x86fc,	// (0x000377b8) list_single_dyc_row_text_pane_t1

0x8745,	// (0x00037801) list_single_dyc_row_text_pane_t2_ParamLimits

0x8745,	// (0x00037801) list_single_dyc_row_text_pane_t2

0xe451,	// (0x0003d50d) list_single_dyc_row_text_pane_t3_ParamLimits

0xe451,	// (0x0003d50d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003ede3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003ede3) list_single_dyc_row_text_pane_t

0xe475,	// (0x0003d531) list_single_dyc_row_pane_g1_ParamLimits

0xe475,	// (0x0003d531) list_single_dyc_row_pane_g1

0xe481,	// (0x0003d53d) list_single_dyc_row_pane_g2_ParamLimits

0xe481,	// (0x0003d53d) list_single_dyc_row_pane_g2

0xe48d,	// (0x0003d549) list_single_dyc_row_pane_g3_ParamLimits

0xe48d,	// (0x0003d549) list_single_dyc_row_pane_g3

0xe499,	// (0x0003d555) list_single_dyc_row_pane_g4_ParamLimits

0xe499,	// (0x0003d555) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003edf0) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003edf0) list_single_dyc_row_pane_g

0xe4a5,	// (0x0003d561) list_single_dyc_row_text_pane_ParamLimits

0xe4a5,	// (0x0003d561) list_single_dyc_row_text_pane

0x9beb,	// (0x00038ca7) bg_sp_fs_scroll_pane

0xe4c4,	// (0x0003d580) thumb_sp_fs_scroll_pane

0x6e4e,	// (0x00035f0a) list_medium_line_g1_ParamLimits

0x6e4e,	// (0x00035f0a) list_medium_line_g1

0xe4cd,	// (0x0003d589) list_medium_line_t1_ParamLimits

0xe4cd,	// (0x0003d589) list_medium_line_t1

0xc225,	// (0x0003b2e1) list_medium_line_x2_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x2_g1

0x1ef5,	// (0x00030fb1) list_medium_line_x2_g2_ParamLimits

0x1ef5,	// (0x00030fb1) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003edf9) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003edf9) list_medium_line_x2_g

0xe4e2,	// (0x0003d59e) list_medium_line_x2_t1_ParamLimits

0xe4e2,	// (0x0003d59e) list_medium_line_x2_t1

0xc225,	// (0x0003b2e1) list_medium_line_x3_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x3_g1

0x1ef5,	// (0x00030fb1) list_medium_line_x3_g2_ParamLimits

0x1ef5,	// (0x00030fb1) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003edf9) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003edf9) list_medium_line_x3_g

0xe4e2,	// (0x0003d59e) list_medium_line_x3_t1_ParamLimits

0xe4e2,	// (0x0003d59e) list_medium_line_x3_t1

0xe4f8,	// (0x0003d5b4) thumb_sp_fs_scroll_pane_g1

0xe501,	// (0x0003d5bd) thumb_sp_fs_scroll_pane_g2

0xe50a,	// (0x0003d5c6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003edfe) thumb_sp_fs_scroll_pane_g

0xe4f8,	// (0x0003d5b4) bg_sp_fs_scroll_pane_g1

0xe501,	// (0x0003d5bd) bg_sp_fs_scroll_pane_g2

0xe50a,	// (0x0003d5c6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003edfe) bg_sp_fs_scroll_pane_g

0xc225,	// (0x0003b2e1) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc225,	// (0x0003b2e1) list_medium_line_x2_t3_g4_g1

0x1f91,	// (0x0003104d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f91,	// (0x0003104d) list_medium_line_x2_t3_g4_g2

0x1ef5,	// (0x00030fb1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ef5,	// (0x00030fb1) list_medium_line_x2_t3_g4_g3

0x1f01,	// (0x00030fbd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1f01,	// (0x00030fbd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003e37e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003e37e) list_medium_line_x2_t3_g4_g

0x887a,	// (0x00037936) list_medium_line_x2_t3_g4_t1_ParamLimits

0x887a,	// (0x00037936) list_medium_line_x2_t3_g4_t1

0x8890,	// (0x0003794c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8890,	// (0x0003794c) list_medium_line_x2_t3_g4_t2

0x1f36,	// (0x00030ff2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f36,	// (0x00030ff2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003ee05) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003ee05) list_medium_line_x2_t3_g4_t

0x6e4e,	// (0x00035f0a) list_medium_line_g2_g1_ParamLimits

0x6e4e,	// (0x00035f0a) list_medium_line_g2_g1

0xd3c4,	// (0x0003c480) list_medium_line_g2_g2_ParamLimits

0xd3c4,	// (0x0003c480) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003eabc) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003eabc) list_medium_line_g2_g

0xe513,	// (0x0003d5cf) list_medium_line_g2_t1_ParamLimits

0xe513,	// (0x0003d5cf) list_medium_line_g2_t1

0x6e4e,	// (0x00035f0a) list_medium_line_t3_g2_g1_ParamLimits

0x6e4e,	// (0x00035f0a) list_medium_line_t3_g2_g1

0xd3c4,	// (0x0003c480) list_medium_line_t3_g2_g2_ParamLimits

0xd3c4,	// (0x0003c480) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003eabc) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003eabc) list_medium_line_t3_g2_g

0x88a9,	// (0x00037965) list_medium_line_t3_g2_t1_ParamLimits

0x88a9,	// (0x00037965) list_medium_line_t3_g2_t1

0x88c3,	// (0x0003797f) list_medium_line_t3_g2_t2_ParamLimits

0x88c3,	// (0x0003797f) list_medium_line_t3_g2_t2

0x88d9,	// (0x00037995) list_medium_line_t3_g2_t3_ParamLimits

0x88d9,	// (0x00037995) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003ee0c) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003ee0c) list_medium_line_t3_g2_t

0xe31e,	// (0x0003d3da) list_medium_line_right_icon_g1

0xe528,	// (0x0003d5e4) list_medium_line_right_icon_t1

0x6e4e,	// (0x00035f0a) list_medium_line_t2_g1_ParamLimits

0x6e4e,	// (0x00035f0a) list_medium_line_t2_g1

0x88f0,	// (0x000379ac) list_medium_line_t2_t1_ParamLimits

0x88f0,	// (0x000379ac) list_medium_line_t2_t1

0x890a,	// (0x000379c6) list_medium_line_t2_t2_ParamLimits

0x890a,	// (0x000379c6) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003ee13) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003ee13) list_medium_line_t2_t

0x6e4e,	// (0x00035f0a) list_medium_line_t3_g1_ParamLimits

0x6e4e,	// (0x00035f0a) list_medium_line_t3_g1

0x8923,	// (0x000379df) list_medium_line_t3_t1_ParamLimits

0x8923,	// (0x000379df) list_medium_line_t3_t1

0x893a,	// (0x000379f6) list_medium_line_t3_t2_ParamLimits

0x893a,	// (0x000379f6) list_medium_line_t3_t2

0x894f,	// (0x00037a0b) list_medium_line_t3_t3_ParamLimits

0x894f,	// (0x00037a0b) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003ee18) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003ee18) list_medium_line_t3_t

0x6e4e,	// (0x00035f0a) list_medium_line_g3_g1_ParamLimits

0x6e4e,	// (0x00035f0a) list_medium_line_g3_g1

0xe536,	// (0x0003d5f2) list_medium_line_g3_g2_ParamLimits

0xe536,	// (0x0003d5f2) list_medium_line_g3_g2

0xd3c4,	// (0x0003c480) list_medium_line_g3_g3_ParamLimits

0xd3c4,	// (0x0003c480) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003ee1f) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003ee1f) list_medium_line_g3_g

0xe542,	// (0x0003d5fe) list_medium_line_g3_t1_ParamLimits

0xe542,	// (0x0003d5fe) list_medium_line_g3_t1

0x6e4e,	// (0x00035f0a) list_medium_line_t2_g3_g1_ParamLimits

0x6e4e,	// (0x00035f0a) list_medium_line_t2_g3_g1

0xe536,	// (0x0003d5f2) list_medium_line_t2_g3_g2_ParamLimits

0xe536,	// (0x0003d5f2) list_medium_line_t2_g3_g2

0xd3c4,	// (0x0003c480) list_medium_line_t2_g3_g3_ParamLimits

0xd3c4,	// (0x0003c480) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003ee1f) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003ee1f) list_medium_line_t2_g3_g

0x8961,	// (0x00037a1d) list_medium_line_t2_g3_t1_ParamLimits

0x8961,	// (0x00037a1d) list_medium_line_t2_g3_t1

0x8978,	// (0x00037a34) list_medium_line_t2_g3_t2_ParamLimits

0x8978,	// (0x00037a34) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003ee26) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003ee26) list_medium_line_t2_g3_t

0x6e4e,	// (0x00035f0a) list_medium_line_t3_g3_g1_ParamLimits

0x6e4e,	// (0x00035f0a) list_medium_line_t3_g3_g1

0xe536,	// (0x0003d5f2) list_medium_line_t3_g3_g2_ParamLimits

0xe536,	// (0x0003d5f2) list_medium_line_t3_g3_g2

0xd3c4,	// (0x0003c480) list_medium_line_t3_g3_g3_ParamLimits

0xd3c4,	// (0x0003c480) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003ee1f) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003ee1f) list_medium_line_t3_g3_g

0x8991,	// (0x00037a4d) list_medium_line_t3_g3_t1_ParamLimits

0x8991,	// (0x00037a4d) list_medium_line_t3_g3_t1

0x89aa,	// (0x00037a66) list_medium_line_t3_g3_t2_ParamLimits

0x89aa,	// (0x00037a66) list_medium_line_t3_g3_t2

0x89c0,	// (0x00037a7c) list_medium_line_t3_g3_t3_ParamLimits

0x89c0,	// (0x00037a7c) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003ee2b) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003ee2b) list_medium_line_t3_g3_t

0xe449,	// (0x0003d505) list_medium_line_right_iconx2_g1

0xe31e,	// (0x0003d3da) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003ee32) list_medium_line_right_iconx2_g

0xe557,	// (0x0003d613) list_medium_line_right_iconx2_t1

0xe449,	// (0x0003d505) list_medium_line_t2_right_iconx2_g1

0xe31e,	// (0x0003d3da) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003ee32) list_medium_line_t2_right_iconx2_g

0x89da,	// (0x00037a96) list_medium_line_t2_right_iconx2_t1

0x89ea,	// (0x00037aa6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003ee37) list_medium_line_t2_right_iconx2_t

0x89fc,	// (0x00037ab8) list_medium_line_x4_t4_t1

0x8a0a,	// (0x00037ac6) list_medium_line_x4_t4_t2

0x8a1a,	// (0x00037ad6) list_medium_line_x4_t4_t3

0x8a2a,	// (0x00037ae6) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003ee3c) list_medium_line_x4_t4_t

0x8a7d,	// (0x00037b39) tport_appsw_pane_ParamLimits

0x8a7d,	// (0x00037b39) tport_appsw_pane

0x8a95,	// (0x00037b51) tport_contact_pane_ParamLimits

0x8a95,	// (0x00037b51) tport_contact_pane

0x8aad,	// (0x00037b69) tport_listscroll_pane_ParamLimits

0x8aad,	// (0x00037b69) tport_listscroll_pane

0x8ac7,	// (0x00037b83) cell_tport_appsw_pane_ParamLimits

0x8ac7,	// (0x00037b83) cell_tport_appsw_pane

0xd147,	// (0x0003c203) tport_appsw_pane_g1_ParamLimits

0xd147,	// (0x0003c203) tport_appsw_pane_g1

0xe565,	// (0x0003d621) tport_contact_pane_g1

0xe56e,	// (0x0003d62a) tport_contact_pane_t1

0xe57c,	// (0x0003d638) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003ee45) tport_contact_pane_t

0xe58a,	// (0x0003d646) list_tport_pane

0xe593,	// (0x0003d64f) scroll_pane_cp_030

0x8b19,	// (0x00037bd5) cell_tport_appsw_pane_g1

0x8b29,	// (0x00037be5) cell_tport_appsw_pane_t1

0x8b37,	// (0x00037bf3) grid_highlight_pane_cp019

0x8b3f,	// (0x00037bfb) list_tport_double_graphic_pane_ParamLimits

0x8b3f,	// (0x00037bfb) list_tport_double_graphic_pane

0x9c4c,	// (0x00038d08) list_highlight_pane_cp023_ParamLimits

0x9c4c,	// (0x00038d08) list_highlight_pane_cp023

0x8b4c,	// (0x00037c08) list_tport_double_graphic_pane_g1_ParamLimits

0x8b4c,	// (0x00037c08) list_tport_double_graphic_pane_g1

0x8b59,	// (0x00037c15) list_tport_double_graphic_pane_t1_ParamLimits

0x8b59,	// (0x00037c15) list_tport_double_graphic_pane_t1

0x8b6e,	// (0x00037c2a) list_tport_double_graphic_pane_t2_ParamLimits

0x8b6e,	// (0x00037c2a) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003ee51) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003ee51) list_tport_double_graphic_pane_t

0x9beb,	// (0x00038ca7) main_cale_note_pane

0x0b25,	// (0x0002fbe1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x0b25,	// (0x0002fbe1) cell_vitu2_function_top_wide_pane_cp01

0x800e,	// (0x000370ca) wait_bar_pane_cp05_ParamLimits

0x9c4c,	// (0x00038d08) listscroll_cmail_pane

0xe5a4,	// (0x0003d660) list_cmail_pane

0x8b8a,	// (0x00037c46) list_cmail_body_pane

0xd52d,	// (0x0003c5e9) list_single_cmail_header_caption_pane

0x8b9d,	// (0x00037c59) list_single_cmail_header_detail_pane_ParamLimits

0x8b9d,	// (0x00037c59) list_single_cmail_header_detail_pane

0x8bc8,	// (0x00037c84) list_single_cmail_header_caption_pane_t1

0x8bd8,	// (0x00037c94) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bd8,	// (0x00037c94) list_single_cmail_header_detail_pane_g1

0xe5c4,	// (0x0003d680) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5c4,	// (0x0003d680) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003ee56) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003ee56) list_single_cmail_header_detail_pane_g

0xe5dd,	// (0x0003d699) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5dd,	// (0x0003d699) list_single_cmail_header_detail_pane_t1

0xe64f,	// (0x0003d70b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe64f,	// (0x0003d70b) list_single_cmail_header_editor_pane_bg

0xded9,	// (0x0003cf95) list_cmail_body_pane_g1

0xe666,	// (0x0003d722) list_cmail_body_pane_t1

0xd184,	// (0x0003c240) list_single_cmail_header_editor_pane_bg_g1

0xa7a0,	// (0x0003985c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd194,	// (0x0003c250) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd18c,	// (0x0003c248) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3bc,	// (0x0003c478) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1b4,	// (0x0003c270) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1a4,	// (0x0003c260) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1ac,	// (0x0003c268) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa780,	// (0x0003983c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8bf0,	// (0x00037cac) calenote_gesture_pane_ParamLimits

0x8bf0,	// (0x00037cac) calenote_gesture_pane

0x8c10,	// (0x00037ccc) calenote_window_pane_ParamLimits

0x8c10,	// (0x00037ccc) calenote_window_pane

0xe674,	// (0x0003d730) popup_note_window_cp01

0x8c2c,	// (0x00037ce8) calenote_swipe_1_pane_ParamLimits

0x8c2c,	// (0x00037ce8) calenote_swipe_1_pane

0x84bc,	// (0x00037578) calenote_swipe_2_pane_ParamLimits

0x84bc,	// (0x00037578) calenote_swipe_2_pane

0xe238,	// (0x0003d2f4) calenote_swipe_1_pane_g1_ParamLimits

0xe238,	// (0x0003d2f4) calenote_swipe_1_pane_g1

0xe245,	// (0x0003d301) calenote_swipe_1_pane_g2_ParamLimits

0xe245,	// (0x0003d301) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003ed7f) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003ed7f) calenote_swipe_1_pane_g

0xe686,	// (0x0003d742) calenote_swipe_1_pane_t1_ParamLimits

0xe686,	// (0x0003d742) calenote_swipe_1_pane_t1

0xe238,	// (0x0003d2f4) calenote_swipe_2_pane_g1_ParamLimits

0xe238,	// (0x0003d2f4) calenote_swipe_2_pane_g1

0xe6a5,	// (0x0003d761) calenote_swipe_2_pane_g2_ParamLimits

0xe6a5,	// (0x0003d761) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003ee62) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003ee62) calenote_swipe_2_pane_g

0xe6b1,	// (0x0003d76d) calenote_swipe_2_pane_t1_ParamLimits

0xe6b1,	// (0x0003d76d) calenote_swipe_2_pane_t1

0x9beb,	// (0x00038ca7) main_mup_navstr_pane

0x5711,	// (0x000347cd) main_mup3_pane_t7_ParamLimits

0x5711,	// (0x000347cd) main_mup3_pane_t7

0x6155,	// (0x00035211) main_mp4_pane_g6_ParamLimits

0x6155,	// (0x00035211) main_mp4_pane_g6

0x639c,	// (0x00035458) main_image3_pane_t4_ParamLimits

0x639c,	// (0x00035458) main_image3_pane_t4

0x8c41,	// (0x00037cfd) popup_navstr_preview_pane_ParamLimits

0x8c41,	// (0x00037cfd) popup_navstr_preview_pane

0x8c51,	// (0x00037d0d) scroll_navstr_pane_ParamLimits

0x8c51,	// (0x00037d0d) scroll_navstr_pane

0x9beb,	// (0x00038ca7) bg_popup_preview_window_pane_cp04

0xe6d8,	// (0x0003d794) popup_navstr_preview_pane_t1

0x8c65,	// (0x00037d21) scroll_navstr_pane_g1_ParamLimits

0x8c65,	// (0x00037d21) scroll_navstr_pane_g1

0x8c79,	// (0x00037d35) scroll_navstr_pane_t1_ParamLimits

0x8c79,	// (0x00037d35) scroll_navstr_pane_t1

0xe67d,	// (0x0003d739) bg_button_pane_cp014

0xe67d,	// (0x0003d739) bg_button_pane_cp030

0x8352,	// (0x0003740e) list_double_fisheye_pane_g4_ParamLimits

0x8352,	// (0x0003740e) list_double_fisheye_pane_g4

0x835e,	// (0x0003741a) list_double_fisheye_pane_g5_ParamLimits

0x835e,	// (0x0003741a) list_double_fisheye_pane_g5

0xe5ac,	// (0x0003d668) sp_fs_scroll_pane_cp03

0xc225,	// (0x0003b2e1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe35e,	// (0x0003d41a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003ed9c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe36a,	// (0x0003d426) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8b80,	// (0x00037c3c) sp_fs_scroll_pane_cp02

0xa4a3,	// (0x0003955f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4a3,	// (0x0003955f) popup_sp_fs_calendar_preview_list_single_pane

0x9beb,	// (0x00038ca7) main_cam6_pano_pane

0x9c4c,	// (0x00038d08) main_mup3_pane_ParamLimits

0x9beb,	// (0x00038ca7) main_phacti_pane

0x7ee1,	// (0x00036f9d) bg_button_pane_cp11

0x7efb,	// (0x00036fb7) main_mobtv_info_pane_g2_ParamLimits

0x7efb,	// (0x00036fb7) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003ecfc) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003ecfc) main_mobtv_info_pane_g

0x80d6,	// (0x00037192) sc_clock_pane_t5_ParamLimits

0x80d6,	// (0x00037192) sc_clock_pane_t5

0x81b4,	// (0x00037270) main_radioblah_pane_g1_ParamLimits

0xe184,	// (0x0003d240) main_radioblah_pane_t3_ParamLimits

0xe184,	// (0x0003d240) main_radioblah_pane_t3

0xe19c,	// (0x0003d258) main_radioblah_pane_t4_ParamLimits

0xe19c,	// (0x0003d258) main_radioblah_pane_t4

0x81dc,	// (0x00037298) main_radioblah_text_pane_ParamLimits

0x81dc,	// (0x00037298) main_radioblah_text_pane

0x81ee,	// (0x000372aa) main_radioblah_info_pane_g1_ParamLimits

0x8287,	// (0x00037343) main_radioblah_info_pane_t4_ParamLimits

0x8287,	// (0x00037343) main_radioblah_info_pane_t4

0x9c4c,	// (0x00038d08) main_sp_fs_calendar_pane

0x8c90,	// (0x00037d4c) main_phacti_pane_g1

0x8c98,	// (0x00037d54) phacti_note_pane_ParamLimits

0x8c98,	// (0x00037d54) phacti_note_pane

0xe6ef,	// (0x0003d7ab) phacti_term_pane_ParamLimits

0xe6ef,	// (0x0003d7ab) phacti_term_pane

0xe704,	// (0x0003d7c0) phacti_note_pane_t1_ParamLimits

0xe704,	// (0x0003d7c0) phacti_note_pane_t1

0xe71b,	// (0x0003d7d7) phacti_term_pane_g1

0xe723,	// (0x0003d7df) phacti_term_pane_t1_ParamLimits

0xe723,	// (0x0003d7df) phacti_term_pane_t1

0xe74d,	// (0x0003d809) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe755,	// (0x0003d811) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003ee6c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe75d,	// (0x0003d819) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe75d,	// (0x0003d819) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe773,	// (0x0003d82f) aid_popup_sp_fs_bg_corner_pane

0xc74b,	// (0x0003b807) popup_sp_fs_calendar_preview_bg_pane_g1

0x9beb,	// (0x00038ca7) popup_sp_fs_calendar_preview_bg_pane

0xe77b,	// (0x0003d837) popup_sp_fs_calendar_preview_list_pane

0xc2f2,	// (0x0003b3ae) bg_main_sp_fs_cale_pane_ParamLimits

0xc2f2,	// (0x0003b3ae) bg_main_sp_fs_cale_pane

0xe78c,	// (0x0003d848) listscroll_cale_mrui_pane_ParamLimits

0xe78c,	// (0x0003d848) listscroll_cale_mrui_pane

0xe7a1,	// (0x0003d85d) listscroll_sp_fs_schedule_track_pane

0xe7aa,	// (0x0003d866) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7aa,	// (0x0003d866) main_sp_fs_ctrlbar_pane_cp01

0xe7bd,	// (0x0003d879) main_sp_fs_ribbon_pane

0xe7c5,	// (0x0003d881) popup_sp_fs_cale_preview_window

0x8d09,	// (0x00037dc5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d09,	// (0x00037dc5) list_single_sp_fs_schedule_track_pane

0x9c4c,	// (0x00038d08) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9c4c,	// (0x00038d08) bg_sp_fs_highlight_list_pane_cp03

0x8d1d,	// (0x00037dd9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d1d,	// (0x00037dd9) list_single_sp_fs_schedule_track_pane_g1

0x8d29,	// (0x00037de5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d29,	// (0x00037de5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003ee71) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003ee71) list_single_sp_fs_schedule_track_pane_g

0x8d35,	// (0x00037df1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d35,	// (0x00037df1) list_single_sp_fs_schedule_track_pane_t1

0x8d57,	// (0x00037e13) sp_fs_schedule_track_pane_ParamLimits

0x8d57,	// (0x00037e13) sp_fs_schedule_track_pane

0xe7d7,	// (0x0003d893) sp_fs_schedule_track_pane_g1

0xe7df,	// (0x0003d89b) sp_fs_schedule_track_pane_g2

0xe7e7,	// (0x0003d8a3) sp_fs_schedule_track_pane_g3

0xe7ef,	// (0x0003d8ab) sp_fs_schedule_track_pane_g4

0xe7f7,	// (0x0003d8b3) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003ee76) sp_fs_schedule_track_pane_g

0xd184,	// (0x0003c240) bg_sp_fs_schedule_viewer_highlight_g1

0xa7a0,	// (0x0003985c) bg_sp_fs_schedule_viewer_highlight_g2

0xd18c,	// (0x0003c248) bg_sp_fs_schedule_viewer_highlight_g3

0xd194,	// (0x0003c250) bg_sp_fs_schedule_viewer_highlight_g4

0xd3bc,	// (0x0003c478) bg_sp_fs_schedule_viewer_highlight_g5

0xd1a4,	// (0x0003c260) bg_sp_fs_schedule_viewer_highlight_g6

0xd1ac,	// (0x0003c268) bg_sp_fs_schedule_viewer_highlight_g7

0xd1b4,	// (0x0003c270) bg_sp_fs_schedule_viewer_highlight_g8

0xa780,	// (0x0003983c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003ee81) bg_sp_fs_schedule_viewer_highlight_g

0x9beb,	// (0x00038ca7) bg_main_sp_fs_ribbon_pane

0x8d6c,	// (0x00037e28) main_sp_fs_ribbon_pane_g1

0xe7ff,	// (0x0003d8bb) main_sp_fs_ribbon_pane_t1

0x8d75,	// (0x00037e31) main_sp_fs_ribbon_pane_t2

0xe80e,	// (0x0003d8ca) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003ee94) main_sp_fs_ribbon_pane_t

0xe81d,	// (0x0003d8d9) main_sp_fs_ribbon_scheduler_pane

0xe825,	// (0x0003d8e1) bg_main_sp_fs_ribbon_pane_g1

0xe82e,	// (0x0003d8ea) bg_main_sp_fs_ribbon_pane_g2

0xe837,	// (0x0003d8f3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003ee9b) bg_main_sp_fs_ribbon_pane_g

0xe83f,	// (0x0003d8fb) main_sp_fs_ribbon_scheduler_pane_g1

0xe848,	// (0x0003d904) main_sp_fs_ribbon_scheduler_pane_g2

0xe851,	// (0x0003d90d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003eea2) main_sp_fs_ribbon_scheduler_pane_g

0xe85a,	// (0x0003d916) list_cale_mrui_pane

0x8d84,	// (0x00037e40) sp_fs_scroll_pane_cp07_ParamLimits

0x8d84,	// (0x00037e40) sp_fs_scroll_pane_cp07

0x8da0,	// (0x00037e5c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8da0,	// (0x00037e5c) bg_sp_fs_schedule_viewer_highlight

0xe87b,	// (0x0003d937) list_single_sp_fs_schedule_track_pane_cp01

0xe883,	// (0x0003d93f) list_sp_fs_schedule_track_pane

0xe88b,	// (0x0003d947) sp_fs_scroll_pane_cp06_ParamLimits

0xe88b,	// (0x0003d947) sp_fs_scroll_pane_cp06

0xc74b,	// (0x0003b807) bgmain_sp_fs_calendar_pane_g1

0x8db2,	// (0x00037e6e) list_single_cale_mrui_pane_ParamLimits

0x8db2,	// (0x00037e6e) list_single_cale_mrui_pane

0xe89d,	// (0x0003d959) list_single_cale_mrui_row_pane_ParamLimits

0xe89d,	// (0x0003d959) list_single_cale_mrui_row_pane

0xe8b3,	// (0x0003d96f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8b3,	// (0x0003d96f) list_single_cale_mrui_row_pane_g1

0xe8f8,	// (0x0003d9b4) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8f8,	// (0x0003d9b4) list_single_cale_mrui_row_pane_t1

0x8dc7,	// (0x00037e83) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8dc7,	// (0x00037e83) list_single_cale_mrui_row_pane_t2

0xe90a,	// (0x0003d9c6) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe90a,	// (0x0003d9c6) list_single_cale_mrui_row_pane_t3

0xe939,	// (0x0003d9f5) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe939,	// (0x0003d9f5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003eeb0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003eeb0) list_single_cale_mrui_row_pane_t

0x8e2f,	// (0x00037eeb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e2f,	// (0x00037eeb) list_single_cmail_header_editor_pane_bg_cp01

0x8e55,	// (0x00037f11) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e55,	// (0x00037f11) list_single_cmail_header_editor_pane_bg_cp02

0x8e75,	// (0x00037f31) main_radioblah_text_pane_t1_ParamLimits

0x8e75,	// (0x00037f31) main_radioblah_text_pane_t1

0xe968,	// (0x0003da24) cam6_indi_pane_cp01

0xe970,	// (0x0003da2c) cam6_mode_pane_cp01

0xe978,	// (0x0003da34) cam6_pano_pane

0xe981,	// (0x0003da3d) cam6_zoom_pane_cp01

0xe98b,	// (0x0003da47) cam6_pano_image_pane

0xe994,	// (0x0003da50) cam6_pano_pane_g1

0xded9,	// (0x0003cf95) cam6_pano_pane_g2

0xe99d,	// (0x0003da59) cam6_pano_pane_g3

0xe9a6,	// (0x0003da62) cam6_pano_pane_g4

0xccf1,	// (0x0003bdad) cam6_pano_pane_g5

0xe9af,	// (0x0003da6b) cam6_pano_pane_g6

0xe9b7,	// (0x0003da73) cam6_pano_pane_g7

0xe9bf,	// (0x0003da7b) cam6_pano_pane_g8

0xe9c8,	// (0x0003da84) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003eeb9) cam6_pano_pane_g

0x9beb,	// (0x00038ca7) main_browser_tag_pane

0xe6d0,	// (0x0003d78c) grid_navstr_albumart_pane

0xe9d3,	// (0x0003da8f) cell_navstr_albumart_pane_ParamLimits

0xe9d3,	// (0x0003da8f) cell_navstr_albumart_pane

0xe9f2,	// (0x0003daae) cell_navstr_albumart_pane_g1

0xc0f3,	// (0x0003b1af) cell_navstr_albumart_pane_g2

0xc103,	// (0x0003b1bf) cell_navstr_albumart_pane_g3

0xc0fb,	// (0x0003b1b7) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003eecc) cell_navstr_albumart_pane_g

0x8e90,	// (0x00037f4c) bt_list_pane_ParamLimits

0x8e90,	// (0x00037f4c) bt_list_pane

0x8ea6,	// (0x00037f62) bt_list_pane_t1

0x8eb5,	// (0x00037f71) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003eed5) bt_list_pane_t

0x9beb,	// (0x00038ca7) main_cale_prevew_pane

0x8ec4,	// (0x00037f80) popup_cale_preview_window_ParamLimits

0x8ec4,	// (0x00037f80) popup_cale_preview_window

0x9c4c,	// (0x00038d08) bg_popup_preview_window_pane_cp05_ParamLimits

0x9c4c,	// (0x00038d08) bg_popup_preview_window_pane_cp05

0xe9fa,	// (0x0003dab6) list_cale_preview_pane_ParamLimits

0xe9fa,	// (0x0003dab6) list_cale_preview_pane

0x8ee1,	// (0x00037f9d) list_double_cale_preview_pane_ParamLimits

0x8ee1,	// (0x00037f9d) list_double_cale_preview_pane

0x8ef5,	// (0x00037fb1) list_single_cale_preview_pane_ParamLimits

0x8ef5,	// (0x00037fb1) list_single_cale_preview_pane

0x8f0d,	// (0x00037fc9) list_single_cale_preview_pane_g1

0x8f15,	// (0x00037fd1) list_single_cale_preview_pane_t1_ParamLimits

0x8f15,	// (0x00037fd1) list_single_cale_preview_pane_t1

0x8f2a,	// (0x00037fe6) list_double_cale_preview_pane_g1

0x8f32,	// (0x00037fee) list_double_cale_preview_pane_t1_ParamLimits

0x8f32,	// (0x00037fee) list_double_cale_preview_pane_t1

0x8f47,	// (0x00038003) list_double_cale_preview_pane_t2_ParamLimits

0x8f47,	// (0x00038003) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003eeda) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003eeda) list_double_cale_preview_pane_t

0x9beb,	// (0x00038ca7) main_ezdial_pane

0x9c4c,	// (0x00038d08) main_sp_fs_email_pane_ParamLimits

0x84f8,	// (0x000375b4) cmail_ddmenu_btn01_pane_ParamLimits

0x84f8,	// (0x000375b4) cmail_ddmenu_btn01_pane

0x850b,	// (0x000375c7) cmail_ddmenu_btn02_pane_ParamLimits

0x850b,	// (0x000375c7) cmail_ddmenu_btn02_pane

0x852e,	// (0x000375ea) cmail_ddmenu_btn03_pane_ParamLimits

0x852e,	// (0x000375ea) cmail_ddmenu_btn03_pane

0x8559,	// (0x00037615) main_sp_fs_ctrlbar_pane_ParamLimits

0x857d,	// (0x00037639) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b8a,	// (0x00037c46) list_cmail_body_pane_ParamLimits

0xe5bb,	// (0x0003d677) bg_button_pane_cp12

0xe5d0,	// (0x0003d68c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5d0,	// (0x0003d68c) list_single_cmail_header_detail_pane_g3

0xe62b,	// (0x0003d6e7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe62b,	// (0x0003d6e7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003ee5d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003ee5d) list_single_cmail_header_detail_pane_t

0xe738,	// (0x0003d7f4) phacti_term_pane_t2_ParamLimits

0xe738,	// (0x0003d7f4) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003ee67) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003ee67) phacti_term_pane_t

0xea06,	// (0x0003dac2) aid_size_list_single_double

0x8f5f,	// (0x0003801b) popup_ezdial_listscroll_window

0x8f7b,	// (0x00038037) popup_number_entry_window_cp01

0xa543,	// (0x000395ff) bg_popup_call_pane_cp09

0xea12,	// (0x0003dace) ezdial_list_pane

0xea1a,	// (0x0003dad6) scroll_pane_cp23

0xc2f2,	// (0x0003b3ae) bg_button_pane_cp028_ParamLimits

0xc2f2,	// (0x0003b3ae) bg_button_pane_cp028

0x8f89,	// (0x00038045) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f89,	// (0x00038045) cmail_ddmenu_btn01_pane_g1

0x8f98,	// (0x00038054) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f98,	// (0x00038054) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003eedf) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003eedf) cmail_ddmenu_btn01_pane_g

0xea22,	// (0x0003dade) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea22,	// (0x0003dade) cmail_ddmenu_btn01_pane_t1

0xc2f2,	// (0x0003b3ae) bg_button_pane_cp029_ParamLimits

0xc2f2,	// (0x0003b3ae) bg_button_pane_cp029

0x8fae,	// (0x0003806a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fae,	// (0x0003806a) cmail_ddmenu_btn02_pane_g1

0x8fc9,	// (0x00038085) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fc9,	// (0x00038085) cmail_ddmenu_btn02_pane_t1

0x9c4c,	// (0x00038d08) bg_button_pane_cp031_ParamLimits

0x9c4c,	// (0x00038d08) bg_button_pane_cp031

0x8fae,	// (0x0003806a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fae,	// (0x0003806a) cmail_ddmenu_btn03_pane_g1

0x8fc9,	// (0x00038085) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fc9,	// (0x00038085) cmail_ddmenu_btn03_pane_t1

0x6343,	// (0x000353ff) cell_dialer2_keypad_pane_t1_ParamLimits

0x635d,	// (0x00035419) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x635d,	// (0x00035419) cell_dialer2_keypad_pane_t1_copy1

0x7d38,	// (0x00036df4) ncimui_group_button_pane

0x9c4c,	// (0x00038d08) main_sp_fs_calendar_pane_ParamLimits

0xd52d,	// (0x0003c5e9) list_single_cmail_header_caption_pane_ParamLimits

0xe783,	// (0x0003d83f) aid_recal_txt_sm_pane

0x9beb,	// (0x00038ca7) mian_recal_day_pane

0xe7c5,	// (0x0003d881) popup_sp_fs_cale_preview_window_ParamLimits

0xea38,	// (0x0003daf4) list_recal_day_pane

0xea7b,	// (0x0003db37) list_single_recal_day_pane_ParamLimits

0xea7b,	// (0x0003db37) list_single_recal_day_pane

0xea8d,	// (0x0003db49) list_single_recal_day_pane_g1_ParamLimits

0xea8d,	// (0x0003db49) list_single_recal_day_pane_g1

0xea99,	// (0x0003db55) list_single_recal_day_pane_g2_ParamLimits

0xea99,	// (0x0003db55) list_single_recal_day_pane_g2

0xeaa5,	// (0x0003db61) list_single_recal_day_pane_g3_ParamLimits

0xeaa5,	// (0x0003db61) list_single_recal_day_pane_g3

0x8ff0,	// (0x000380ac) list_single_recal_day_pane_g4_ParamLimits

0x8ff0,	// (0x000380ac) list_single_recal_day_pane_g4

0xeab1,	// (0x0003db6d) list_single_recal_day_pane_g5_ParamLimits

0xeab1,	// (0x0003db6d) list_single_recal_day_pane_g5

0xeabd,	// (0x0003db79) list_single_recal_day_pane_g6_ParamLimits

0xeabd,	// (0x0003db79) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003eeee) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003eeee) list_single_recal_day_pane_g

0xead1,	// (0x0003db8d) list_single_recal_day_pane_t1

0xeae3,	// (0x0003db9f) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003eef9) list_single_recal_day_pane_t

0x9008,	// (0x000380c4) ncimui_query_button_pane_ParamLimits

0x9008,	// (0x000380c4) ncimui_query_button_pane

0x9018,	// (0x000380d4) ncimui_query_button_pane_t1_ParamLimits

0x9018,	// (0x000380d4) ncimui_query_button_pane_t1

0xeaf5,	// (0x0003dbb1) ncimui_query_button_pane_t2_ParamLimits

0xeaf5,	// (0x0003dbb1) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003eefe) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003eefe) ncimui_query_button_pane_t

0x902b,	// (0x000380e7) query_button_pane_ParamLimits

0x902b,	// (0x000380e7) query_button_pane

0x9beb,	// (0x00038ca7) bg_button_pane_cp0028

0xeb08,	// (0x0003dbc4) query_button_pane_t1

0x4672,	// (0x0003372e) main_tport_pane_ParamLimits

0x8a3a,	// (0x00037af6) bg_popup_window_pane_cp01_ParamLimits

0x8a3a,	// (0x00037af6) bg_popup_window_pane_cp01

0x8a55,	// (0x00037b11) heading_pane_cp08_ParamLimits

0x8a55,	// (0x00037b11) heading_pane_cp08

0x8a68,	// (0x00037b24) heading_pane_cp07_ParamLimits

0x8a68,	// (0x00037b24) heading_pane_cp07

0x8b19,	// (0x00037bd5) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003ee4a) cell_tport_appsw_pane_g

0xafe2,	// (0x0003a09e) input_candi_list_open_g1

0xa954,	// (0x00039a10) list_cale_time_pane_g6_ParamLimits

0xa954,	// (0x00039a10) list_cale_time_pane_g6

0x50c8,	// (0x00034184) aid_size_touch_calib_1_ParamLimits

0x50c8,	// (0x00034184) aid_size_touch_calib_1

0x50da,	// (0x00034196) aid_size_touch_calib_2_ParamLimits

0x50da,	// (0x00034196) aid_size_touch_calib_2

0x50f2,	// (0x000341ae) aid_size_touch_calib_3_ParamLimits

0x50f2,	// (0x000341ae) aid_size_touch_calib_3

0x5110,	// (0x000341cc) aid_size_touch_calib_4_ParamLimits

0x5110,	// (0x000341cc) aid_size_touch_calib_4

0x5128,	// (0x000341e4) main_touch_calib_button_group_pane_ParamLimits

0x5128,	// (0x000341e4) main_touch_calib_button_group_pane

0x5140,	// (0x000341fc) main_touch_calib_pane_g1_ParamLimits

0x5152,	// (0x0003420e) main_touch_calib_pane_g2_ParamLimits

0x5164,	// (0x00034220) main_touch_calib_pane_g3_ParamLimits

0x5176,	// (0x00034232) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0003e80d) main_touch_calib_pane_g_ParamLimits

0x5188,	// (0x00034244) main_touch_calib_pane_t1_ParamLimits

0x51a2,	// (0x0003425e) main_touch_calib_pane_t2_ParamLimits

0x51bc,	// (0x00034278) main_touch_calib_pane_t3_ParamLimits

0x51d0,	// (0x0003428c) main_touch_calib_pane_t4_ParamLimits

0x51e6,	// (0x000342a2) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0003e816) main_touch_calib_pane_t_ParamLimits

0xca87,	// (0x0003bb43) list_single_fp_cale_pane_g3_ParamLimits

0xca87,	// (0x0003bb43) list_single_fp_cale_pane_g3

0x65ce,	// (0x0003568a) bg_button_pane_cp012_ParamLimits

0x65ce,	// (0x0003568a) bg_vkb2_func_pane_cp03_ParamLimits

0x0d1a,	// (0x0002fdd6) cell_vitu2_function_top_pane_g1_ParamLimits

0x65ce,	// (0x0003568a) bg_vkb2_func_pane_cp04_ParamLimits

0x7cc6,	// (0x00036d82) main_ncimui_button_group_pane_ParamLimits

0x7cc6,	// (0x00036d82) main_ncimui_button_group_pane

0x7d26,	// (0x00036de2) main_ncimui_pane_t3_ParamLimits

0x7d26,	// (0x00036de2) main_ncimui_pane_t3

0xe6e6,	// (0x0003d7a2) phacti_button_group_pane

0xea06,	// (0x0003dac2) aid_size_list_single_double_ParamLimits

0x8f5f,	// (0x0003801b) popup_ezdial_listscroll_window_ParamLimits

0x8f7b,	// (0x00038037) popup_number_entry_window_cp01_ParamLimits

0x903e,	// (0x000380fa) phacti_button_pane_ParamLimits

0x903e,	// (0x000380fa) phacti_button_pane

0x9beb,	// (0x00038ca7) bg_button_pane_cp14

0xeb16,	// (0x0003dbd2) phacti_button_pane_t1

0x904f,	// (0x0003810b) main_touch_calib_button_pane_ParamLimits

0x904f,	// (0x0003810b) main_touch_calib_button_pane

0xa38d,	// (0x00039449) bg_button_pane_cp18_ParamLimits

0xa38d,	// (0x00039449) bg_button_pane_cp18

0xeb24,	// (0x0003dbe0) main_touch_calib_button_pane_t1_ParamLimits

0xeb24,	// (0x0003dbe0) main_touch_calib_button_pane_t1

0xeb3a,	// (0x0003dbf6) main_touch_calib_button_pane_t2_ParamLimits

0xeb3a,	// (0x0003dbf6) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003ef03) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003ef03) main_touch_calib_button_pane_t

0x9beb,	// (0x00038ca7) cell_ncimui_button_pane

0x9beb,	// (0x00038ca7) bg_button_pane_cp032

0xeb58,	// (0x0003dc14) cell_ncimui_button_pane_t1

0x637a,	// (0x00035436) image3_infobar_pane_ParamLimits

0x637a,	// (0x00035436) image3_infobar_pane

0x8102,	// (0x000371be) fs_bigclock_status_pane_ParamLimits

0x8102,	// (0x000371be) fs_bigclock_status_pane

0x810f,	// (0x000371cb) main_fs_bigclock_clock_pane_ParamLimits

0x810f,	// (0x000371cb) main_fs_bigclock_clock_pane

0x8139,	// (0x000371f5) main_fs_bigclock_indi_pane_ParamLimits

0x8139,	// (0x000371f5) main_fs_bigclock_indi_pane

0x8177,	// (0x00037233) main_fs_bigclock_swipe_pane_ParamLimits

0x8177,	// (0x00037233) main_fs_bigclock_swipe_pane

0x9beb,	// (0x00038ca7) main_fs_clock_dumped_data

0xdfe6,	// (0x0003d0a2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfe6,	// (0x0003d0a2) list_single_fs_bigclock_indicator_pane_g1

0xe010,	// (0x0003d0cc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe010,	// (0x0003d0cc) list_single_fs_bigclock_indicator_pane_g2

0xe02a,	// (0x0003d0e6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe02a,	// (0x0003d0e6) list_single_fs_bigclock_indicator_pane_g3

0xe044,	// (0x0003d100) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe044,	// (0x0003d100) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003ed30) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003ed30) list_single_fs_bigclock_indicator_pane_g

0xe06f,	// (0x0003d12b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe06f,	// (0x0003d12b) list_single_fs_bigclock_indicator_pane_t1

0xe097,	// (0x0003d153) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe097,	// (0x0003d153) list_single_fs_bigclock_indicator_pane_t2

0xe0bf,	// (0x0003d17b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0bf,	// (0x0003d17b) list_single_fs_bigclock_indicator_pane_t3

0xe0e7,	// (0x0003d1a3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0e7,	// (0x0003d1a3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003ed3b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003ed3b) list_single_fs_bigclock_indicator_pane_t

0xeb66,	// (0x0003dc22) image3_infobar_fav_pane_ParamLimits

0xeb66,	// (0x0003dc22) image3_infobar_fav_pane

0xeb76,	// (0x0003dc32) image3_infobar_loc_pane_ParamLimits

0xeb76,	// (0x0003dc32) image3_infobar_loc_pane

0xeb8c,	// (0x0003dc48) image3_infobar_time_pane_ParamLimits

0xeb8c,	// (0x0003dc48) image3_infobar_time_pane

0xc74b,	// (0x0003b807) image3_infobar_time_pane_g1

0xeb9c,	// (0x0003dc58) image3_infobar_time_pane_t1

0xc74b,	// (0x0003b807) image3_infobar_loc_pane_g1

0xebaa,	// (0x0003dc66) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003ef08) image3_infobar_loc_pane_g

0xebb2,	// (0x0003dc6e) image3_infobar_loc_pane_t1

0xc74b,	// (0x0003b807) image3_infobar_fav_pane_g1

0xebc0,	// (0x0003dc7c) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003ef0d) image3_infobar_fav_pane_g

0xebc8,	// (0x0003dc84) fs_bigclock_status_battery_pane

0xebd1,	// (0x0003dc8d) fs_bigclock_status_signal_pane

0xebda,	// (0x0003dc96) fs_bigclock_status_title_pane

0xebe3,	// (0x0003dc9f) fs_bigclock_status_signal_pane_g1

0xebec,	// (0x0003dca8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003ef12) fs_bigclock_status_signal_pane_g

0xebf4,	// (0x0003dcb0) fs_bigclock_status_battery_pane_g1

0xebfd,	// (0x0003dcb9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003ef17) fs_bigclock_status_battery_pane_g

0xec05,	// (0x0003dcc1) fs_bigclock_status_title_pane_t1

0xc74b,	// (0x0003b807) main_fs_bigclock_clock_pane_g1

0xec13,	// (0x0003dccf) main_fs_bigclock_clock_pane_g2

0xec1e,	// (0x0003dcda) main_fs_bigclock_clock_pane_g3

0xec1e,	// (0x0003dcda) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003ef1c) main_fs_bigclock_clock_pane_g

0xec2a,	// (0x0003dce6) main_fs_bigclock_clock_pane_t1

0x9064,	// (0x00038120) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003ef25) main_fs_bigclock_clock_pane_t

0x9073,	// (0x0003812f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9073,	// (0x0003812f) list_single_fs_bigclock_indicator_pane

0x9084,	// (0x00038140) list_single_fs_bigclock_pane_ParamLimits

0x9084,	// (0x00038140) list_single_fs_bigclock_pane

0xec41,	// (0x0003dcfd) main_fs_bigclock_indicator_pane_t1

0xec50,	// (0x0003dd0c) list_single_fs_bigclock_pane_g1

0xec58,	// (0x0003dd14) list_single_fs_bigclock_pane_t1

0xc74b,	// (0x0003b807) main_fs_bigclock_swipe_pane_g1

0xec9b,	// (0x0003dd57) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003ef36) main_fs_bigclock_swipe_pane_g

0xeca3,	// (0x0003dd5f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca3,	// (0x0003dd5f) main_fs_bigclock_swipe_pane_t1

0x3302,	// (0x000323be) call_type_pane_ParamLimits

0x9beb,	// (0x00038ca7) main_btmg_pane

0xe8df,	// (0x0003d99b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8df,	// (0x0003d99b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003eea9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003eea9) list_single_cale_mrui_row_pane_g

0xea61,	// (0x0003db1d) list_recal_vselct_arw_lo_pane

0xea69,	// (0x0003db25) list_recal_vselct_arw_up_pane

0xea71,	// (0x0003db2d) list_recal_vselct_pane

0x90e7,	// (0x000381a3) btmg_button_pane

0x90f1,	// (0x000381ad) main_btmg_pane_g1

0x9beb,	// (0x00038ca7) bg_button_pane_cp044

0xecc0,	// (0x0003dd7c) btmg_button_pane_t1

0xc2de,	// (0x0003b39a) aid_listscroll_gen

0x9c4c,	// (0x00038d08) main_cntbar_detail_pane

0xe59c,	// (0x0003d658) list_cmail_folder_pane

0xe5ac,	// (0x0003d668) sp_fs_scroll_pane_cp03_ParamLimits

0x90fb,	// (0x000381b7) list_single_fs_dyc_pane_cp01_ParamLimits

0x90fb,	// (0x000381b7) list_single_fs_dyc_pane_cp01

0xecce,	// (0x0003dd8a) aid_size_cmail_indent

0xecd7,	// (0x0003dd93) list_single_dyc_row_pane_cp01

0x9143,	// (0x000381ff) cntbar_detail_list_pane_ParamLimits

0x9143,	// (0x000381ff) cntbar_detail_list_pane

0x9195,	// (0x00038251) main_cntbar_detail_cont_pane_ParamLimits

0x9195,	// (0x00038251) main_cntbar_detail_cont_pane

0x3225,	// (0x000322e1) scroll_pane_cp032_ParamLimits

0x3225,	// (0x000322e1) scroll_pane_cp032

0x91a9,	// (0x00038265) cntbar_detail_list_event_pane_ParamLimits

0x91a9,	// (0x00038265) cntbar_detail_list_event_pane

0x9155,	// (0x00038211) cntbar_detail_list_shct_pane

0xa7ee,	// (0x000398aa) aid_list_gen

0xece0,	// (0x0003dd9c) aid_scroll

0xece9,	// (0x0003dda5) aid_size_touch_scroll_bar

0x74ce,	// (0x0003658a) aid_list_double

0xecf2,	// (0x0003ddae) aid_list_single

0x74ce,	// (0x0003658a) aid_list_single_lg

0xecfb,	// (0x0003ddb7) aid_list_z_g_a_sm

0xed03,	// (0x0003ddbf) aid_list_z_g_d

0x91b9,	// (0x00038275) aid_txt_z_prm

0x91c9,	// (0x00038285) aid_txt_z_prm_cp01

0x91d7,	// (0x00038293) aid_txt_z_sec

0x91e5,	// (0x000382a1) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91e5,	// (0x000382a1) main_cntbar_detail_cont_pane_g1

0x91f9,	// (0x000382b5) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91f9,	// (0x000382b5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003ef3b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003ef3b) main_cntbar_detail_cont_pane_g

0xed0b,	// (0x0003ddc7) main_cntbar_detail_cont_pane_t1

0xed19,	// (0x0003ddd5) main_cntbar_detail_cont_pane_t2

0xed27,	// (0x0003dde3) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003ef40) main_cntbar_detail_cont_pane_t

0x9209,	// (0x000382c5) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9209,	// (0x000382c5) cell_cntbar_detail_list_shct_pane

0xed35,	// (0x0003ddf1) cntbar_detail_list_shct_pane_g1

0xed3e,	// (0x0003ddfa) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003ef47) cntbar_detail_list_shct_pane_g

0x921b,	// (0x000382d7) cntbar_detail_list_event_pane_g1_ParamLimits

0x921b,	// (0x000382d7) cntbar_detail_list_event_pane_g1

0x9227,	// (0x000382e3) cntbar_detail_list_event_pane_g2_ParamLimits

0x9227,	// (0x000382e3) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003ef4c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003ef4c) cntbar_detail_list_event_pane_g

0x9295,	// (0x00038351) cntbar_detail_list_event_pane_t1_ParamLimits

0x9295,	// (0x00038351) cntbar_detail_list_event_pane_t1

0x92aa,	// (0x00038366) cntbar_detail_list_event_pane_t2_ParamLimits

0x92aa,	// (0x00038366) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003ef59) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003ef59) cntbar_detail_list_event_pane_t

0xc74b,	// (0x0003b807) cell_cntbar_detail_list_shct_pane_g1

0x3717,	// (0x000327d3) navi_pane_mv_g3

0x9c4c,	// (0x00038d08) main_cntbar_detail_pane_ParamLimits

0x9beb,	// (0x00038ca7) main_notif_wgt_pane

0x60ef,	// (0x000351ab) aid_tch_main_mp4_pane_g4

0x62cd,	// (0x00035389) popup_slider_window_cp02

0xea57,	// (0x0003db13) list_recal_day_event_pane

0x9113,	// (0x000381cf) cntbar_detail_btn_pane_ParamLimits

0x9113,	// (0x000381cf) cntbar_detail_btn_pane

0x912b,	// (0x000381e7) cntbar_detail_btn_pane_cp01_ParamLimits

0x912b,	// (0x000381e7) cntbar_detail_btn_pane_cp01

0x9155,	// (0x00038211) cntbar_detail_list_shct_pane_ParamLimits

0x9165,	// (0x00038221) cntbar_detail_pane_g1_ParamLimits

0x9165,	// (0x00038221) cntbar_detail_pane_g1

0x9179,	// (0x00038235) cntbar_detail_pane_t1_ParamLimits

0x9179,	// (0x00038235) cntbar_detail_pane_t1

0x9233,	// (0x000382ef) cntbar_detail_list_event_pane_g3_ParamLimits

0x9233,	// (0x000382ef) cntbar_detail_list_event_pane_g3

0x924b,	// (0x00038307) cntbar_detail_list_event_pane_g4_ParamLimits

0x924b,	// (0x00038307) cntbar_detail_list_event_pane_g4

0x9263,	// (0x0003831f) cntbar_detail_list_event_pane_g5_ParamLimits

0x9263,	// (0x0003831f) cntbar_detail_list_event_pane_g5

0x927b,	// (0x00038337) cntbar_detail_list_event_pane_g6_ParamLimits

0x927b,	// (0x00038337) cntbar_detail_list_event_pane_g6

0x92bf,	// (0x0003837b) cntbar_detail_list_event_pane_t3_ParamLimits

0x92bf,	// (0x0003837b) cntbar_detail_list_event_pane_t3

0x92d1,	// (0x0003838d) popup_notif_wgt_window_ParamLimits

0x92d1,	// (0x0003838d) popup_notif_wgt_window

0x92ea,	// (0x000383a6) popup_submenu_window_cp01_ParamLimits

0x92ea,	// (0x000383a6) popup_submenu_window_cp01

0xa543,	// (0x000395ff) bg_popup_window_pane_cp10

0xed47,	// (0x0003de03) listscroll_notif_wgt_pane

0xed59,	// (0x0003de15) list_notif_wgt_window

0xed62,	// (0x0003de1e) scroll_pane_cp033

0x92fe,	// (0x000383ba) list_notif_wgt_row_pane_ParamLimits

0x92fe,	// (0x000383ba) list_notif_wgt_row_pane

0xed6b,	// (0x0003de27) aid_size_list_notif_wgt_del

0xed78,	// (0x0003de34) list_notif_wgt_row_pane_g1

0xed84,	// (0x0003de40) list_notif_wgt_row_pane_g2

0xed98,	// (0x0003de54) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003ef60) list_notif_wgt_row_pane_g

0xeda5,	// (0x0003de61) list_notif_wgt_row_pane_t1

0xedbb,	// (0x0003de77) list_notif_wgt_row_pane_t2

0xedcd,	// (0x0003de89) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003ef67) list_notif_wgt_row_pane_t

0xd3e2,	// (0x0003c49e) list_recal_day_event_pane_g1

0xeddf,	// (0x0003de9b) list_recal_day_event_pane_t1

0x9beb,	// (0x00038ca7) bg_button_pane_cp045

0xedee,	// (0x0003deaa) cntbar_detail_btn_pane_t1

0xc2f2,	// (0x0003b3ae) main_callh_pane_ParamLimits

0xc2f2,	// (0x0003b3ae) main_callh_pane

0x9beb,	// (0x00038ca7) main_coverflow0_pane

0x9beb,	// (0x00038ca7) main_wgtman_pane

0x818f,	// (0x0003724b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x818f,	// (0x0003724b) main_fs_bigclock_unlock_btn_pane

0x8b11,	// (0x00037bcd) bg_button_pane_cp16

0x8b21,	// (0x00037bdd) cell_tport_appsw_pane_g3

0x930e,	// (0x000383ca) cf0_flow_pane_ParamLimits

0x930e,	// (0x000383ca) cf0_flow_pane

0xedfc,	// (0x0003deb8) listscroll_cf0_pane

0xee07,	// (0x0003dec3) main_cf0_pane_g1

0x9323,	// (0x000383df) main_cf0_pane_t1_ParamLimits

0x9323,	// (0x000383df) main_cf0_pane_t1

0x933a,	// (0x000383f6) main_cf0_pane_t2_ParamLimits

0x933a,	// (0x000383f6) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003ef73) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003ef73) main_cf0_pane_t

0xee19,	// (0x0003ded5) scroll_pane_cp11

0x9351,	// (0x0003840d) cf0_flow_pane_g1

0x935d,	// (0x00038419) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003ef78) cf0_flow_pane_g

0x9369,	// (0x00038425) cf0_flow_pane_t1

0x9beb,	// (0x00038ca7) main_call6_pane

0x9beb,	// (0x00038ca7) main_calllock_pane

0x937b,	// (0x00038437) call6_btn_grp_pane_ParamLimits

0x937b,	// (0x00038437) call6_btn_grp_pane

0x9395,	// (0x00038451) call6_pane_g1_ParamLimits

0x9395,	// (0x00038451) call6_pane_g1

0x93ab,	// (0x00038467) popup_call6_1st_window_ParamLimits

0x93ab,	// (0x00038467) popup_call6_1st_window

0x93bc,	// (0x00038478) popup_call6_2nd_window_ParamLimits

0x93bc,	// (0x00038478) popup_call6_2nd_window

0x93cd,	// (0x00038489) cell_call6_btn_pane_ParamLimits

0x93cd,	// (0x00038489) cell_call6_btn_pane

0xa543,	// (0x000395ff) bg_popup_call2_in_pane_cp03

0xee24,	// (0x0003dee0) popup_call6_1st_window_g1

0xee2c,	// (0x0003dee8) popup_call6_1st_window_g2

0xee34,	// (0x0003def0) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003ef7d) popup_call6_1st_window_g

0xee3c,	// (0x0003def8) popup_call6_1st_window_t1

0xee4b,	// (0x0003df07) popup_call6_1st_window_t2

0xee5b,	// (0x0003df17) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003ef84) popup_call6_1st_window_t

0xa543,	// (0x000395ff) bg_popup_call2_in_pane_cp04

0xee24,	// (0x0003dee0) popup_call6_2nd_window_g1

0xee2c,	// (0x0003dee8) popup_call6_2nd_window_g2

0xee34,	// (0x0003def0) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003ef7d) popup_call6_2nd_window_g

0xee3c,	// (0x0003def8) popup_call6_2nd_window_t1

0x9beb,	// (0x00038ca7) bg_button_pane_cp15

0xee6b,	// (0x0003df27) cell_call6_btn_pane_g1

0xee74,	// (0x0003df30) cell_call6_btn_pane_t1

0x93e1,	// (0x0003849d) listscroll_wgtman_pane_ParamLimits

0x93e1,	// (0x0003849d) listscroll_wgtman_pane

0x9402,	// (0x000384be) wgtman_btn_pane_ParamLimits

0x9402,	// (0x000384be) wgtman_btn_pane

0xad33,	// (0x00039def) aid_scroll_copy1

0xee83,	// (0x0003df3f) list_wgtman_pane

0x9445,	// (0x00038501) wgtman_btn_pane_g1_ParamLimits

0x9445,	// (0x00038501) wgtman_btn_pane_g1

0x9471,	// (0x0003852d) wgtman_btn_pane_t1_ParamLimits

0x9471,	// (0x0003852d) wgtman_btn_pane_t1

0xee8d,	// (0x0003df49) wgtman_btn_pane_t2_ParamLimits

0xee8d,	// (0x0003df49) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003ef8b) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003ef8b) wgtman_btn_pane_t

0x94ae,	// (0x0003856a) listrow_wgtman_pane_ParamLimits

0x94ae,	// (0x0003856a) listrow_wgtman_pane

0x94c0,	// (0x0003857c) listrow_wgtman_pane_g1

0x94cd,	// (0x00038589) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003ef90) listrow_wgtman_pane_g

0x94eb,	// (0x000385a7) listrow_wgtman_pane_t1

0x9503,	// (0x000385bf) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003ef95) listrow_wgtman_pane_t

0x9529,	// (0x000385e5) wait_bar_pane_cp09

0xeea4,	// (0x0003df60) main_calllock_btn_pane

0xeeae,	// (0x0003df6a) main_calllock_pane_g1

0x9beb,	// (0x00038ca7) bg_button_pane_cp17

0xeeba,	// (0x0003df76) main_calllock_btn_pane_g1

0xeec3,	// (0x0003df7f) main_calllock_btn_pane_t1

0x9beb,	// (0x00038ca7) main_dialer3_pane

0x9beb,	// (0x00038ca7) main_fmrd2_pane

0xc74b,	// (0x0003b807) main_fs_bigclock_unlock_btn_pane_g1

0xeeda,	// (0x0003df96) main_fs_bigclock_unlock_btn_pane_t1

0x953b,	// (0x000385f7) area_fmrd2_info_pane_ParamLimits

0x953b,	// (0x000385f7) area_fmrd2_info_pane

0x954a,	// (0x00038606) area_fmrd2_visual_pane_ParamLimits

0x954a,	// (0x00038606) area_fmrd2_visual_pane

0x9558,	// (0x00038614) fmrd2_indi_pane_ParamLimits

0x9558,	// (0x00038614) fmrd2_indi_pane

0x9565,	// (0x00038621) area_fmrd2_visual_pane_g1

0x956d,	// (0x00038629) area_fmrd2_visual_pane_t1

0x957d,	// (0x00038639) area_fmrd2_visual_pane_t2

0x958d,	// (0x00038649) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003ef9f) area_fmrd2_visual_pane_t

0x959d,	// (0x00038659) area_fmrd2_info_pane_g1

0x95a5,	// (0x00038661) area_fmrd2_info_pane_t1

0x95b5,	// (0x00038671) area_fmrd2_info_pane_t2

0x95c5,	// (0x00038681) area_fmrd2_info_pane_t3

0x95d5,	// (0x00038691) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003efa6) area_fmrd2_info_pane_t

0x95e5,	// (0x000386a1) fmrd2_indi_pane_t1

0x95f5,	// (0x000386b1) fmrd2_indi_pane_t2

0x9605,	// (0x000386c1) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003efaf) fmrd2_indi_pane_t

0xe053,	// (0x0003d10f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe053,	// (0x0003d10f) list_single_fs_bigclock_indicator_pane_g5

0xe103,	// (0x0003d1bf) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe103,	// (0x0003d1bf) list_single_fs_bigclock_indicator_pane_t5

0x8cac,	// (0x00037d68) aid_cell_bcale_month_pane_ParamLimits

0x8cac,	// (0x00037d68) aid_cell_bcale_month_pane

0x8cca,	// (0x00037d86) bcale_month_pane_ParamLimits

0x8cca,	// (0x00037d86) bcale_month_pane

0x8cec,	// (0x00037da8) bcale_preview_pane_ParamLimits

0x8cec,	// (0x00037da8) bcale_preview_pane

0xec58,	// (0x0003dd14) list_single_fs_bigclock_pane_t1_ParamLimits

0xec77,	// (0x0003dd33) list_single_fs_bigclock_pane_t2_ParamLimits

0xec77,	// (0x0003dd33) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003ef31) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003ef31) list_single_fs_bigclock_pane_t

0xeed2,	// (0x0003df8e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003ef9a) main_fs_bigclock_unlock_btn_pane_g

0x9615,	// (0x000386d1) aid_dia3_key_size_ParamLimits

0x9615,	// (0x000386d1) aid_dia3_key_size

0x9624,	// (0x000386e0) aid_dia3_listrow_size_ParamLimits

0x9624,	// (0x000386e0) aid_dia3_listrow_size

0x9639,	// (0x000386f5) dia3_keypad_fun_pane_ParamLimits

0x9639,	// (0x000386f5) dia3_keypad_fun_pane

0x9655,	// (0x00038711) dia3_keypad_num_pane_ParamLimits

0x9655,	// (0x00038711) dia3_keypad_num_pane

0x966e,	// (0x0003872a) dia3_listscroll_pane_ParamLimits

0x966e,	// (0x0003872a) dia3_listscroll_pane

0x9681,	// (0x0003873d) dia3_numentry_pane_ParamLimits

0x9681,	// (0x0003873d) dia3_numentry_pane

0xeee8,	// (0x0003dfa4) dia3_list_pane

0xeef3,	// (0x0003dfaf) scroll_pane_cp12

0x9beb,	// (0x00038ca7) bg_dia3_numentry_pane

0x9695,	// (0x00038751) dia3_numentry_pane_t1

0x96a4,	// (0x00038760) cell_dia3_key_num_pane

0x96ac,	// (0x00038768) cell_dia3_key0_fun_pane_ParamLimits

0x96ac,	// (0x00038768) cell_dia3_key0_fun_pane

0x96c0,	// (0x0003877c) cell_dia3_key1_fun_pane_ParamLimits

0x96c0,	// (0x0003877c) cell_dia3_key1_fun_pane

0x96d8,	// (0x00038794) dia3_listrow_pane

0xdd51,	// (0x0003ce0d) bg_dia3_numentry_pane_g1

0x9beb,	// (0x00038ca7) bg_button_pane_cp21

0xeefe,	// (0x0003dfba) cell_dia3_key_num_pane_t1

0xef0c,	// (0x0003dfc8) cell_dia3_key_num_pane_t2

0xef1b,	// (0x0003dfd7) cell_dia3_key_num_pane_t3

0xef2a,	// (0x0003dfe6) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003efb6) cell_dia3_key_num_pane_t

0x9beb,	// (0x00038ca7) bg_button_pane_cp19

0x96ea,	// (0x000387a6) cell_dia3_key0_fun_pane_g1

0x9beb,	// (0x00038ca7) bg_button_pane_cp20

0x96f2,	// (0x000387ae) cell_dia3_key1_fun_pane_g1

0x96fa,	// (0x000387b6) area_left_week_number_pane

0x9708,	// (0x000387c4) area_top_day_name_pane

0x971b,	// (0x000387d7) frame_month_view_pane

0xef39,	// (0x0003dff5) grid_month_view_pane

0x9730,	// (0x000387ec) cell_top_day_name_pane_ParamLimits

0x9730,	// (0x000387ec) cell_top_day_name_pane

0x975f,	// (0x0003881b) cell_area_left_week_number_pane_ParamLimits

0x975f,	// (0x0003881b) cell_area_left_week_number_pane

0x9773,	// (0x0003882f) cell_month_view_pane_ParamLimits

0x9773,	// (0x0003882f) cell_month_view_pane

0xef47,	// (0x0003e003) frm_month_g1

0x97a2,	// (0x0003885e) frm_month_g2

0x97b5,	// (0x00038871) frm_month_g3

0x97c8,	// (0x00038884) frm_month_g4

0x97db,	// (0x00038897) frm_month_g5

0x97ee,	// (0x000388aa) frm_month_g6

0x9801,	// (0x000388bd) frm_month_g7

0xef54,	// (0x0003e010) frm_month_g8

0x9816,	// (0x000388d2) frm_month_g9

0x9826,	// (0x000388e2) frm_month_g10

0x9836,	// (0x000388f2) frm_month_g11

0x9846,	// (0x00038902) frm_month_g12

0x9858,	// (0x00038914) frm_month_g13

0x986c,	// (0x00038928) frm_month_g14

0x9880,	// (0x0003893c) frm_month_g15

0x9894,	// (0x00038950) frm_month_g16

0x000f,

0xff03,	// (0x0003efbf) frm_month_g

0xef61,	// (0x0003e01d) cell_top_day_name_pane_t1

0x98a8,	// (0x00038964) cell_area_left_week_number_pane_g1

0x98b4,	// (0x00038970) cell_area_left_week_number_pane_t1

0xc97b,	// (0x0003ba37) cell_month_view_pane_g1

0x98c7,	// (0x00038983) cell_month_view_pane_t1

0x9beb,	// (0x00038ca7) main_fps_pane

0xe326,	// (0x0003d3e2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe326,	// (0x0003d3e2) cmail_ddmenu_btn02_pane_cp1

0xe342,	// (0x0003d3fe) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe342,	// (0x0003d3fe) cmail_ddmenu_btn02_pane_cp2

0x8fbd,	// (0x00038079) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fbd,	// (0x00038079) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003eee4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003eee4) cmail_ddmenu_btn02_pane_g

0x8fde,	// (0x0003809a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fde,	// (0x0003809a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003eee9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003eee9) cmail_ddmenu_btn02_pane_t

0x98da,	// (0x00038996) fps_text_pane_ParamLimits

0x98da,	// (0x00038996) fps_text_pane

0x98f1,	// (0x000389ad) main_fps_pane_g1_ParamLimits

0x98f1,	// (0x000389ad) main_fps_pane_g1

0x9909,	// (0x000389c5) wait_bar_pane_cp010_ParamLimits

0x9909,	// (0x000389c5) wait_bar_pane_cp010

0x991c,	// (0x000389d8) fps_text_pane_t1_ParamLimits

0x991c,	// (0x000389d8) fps_text_pane_t1

0xe867,	// (0x0003d923) cam4_image_uncrop_pane_g1

0xe870,	// (0x0003d92c) cam4_image_uncrop_pane_g2

0x6557,	// (0x00035613) cam4_image_uncrop_pane_g3

0x6560,	// (0x0003561c) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003e9aa) cam4_image_uncrop_pane_g

0x96d8,	// (0x00038794) dia3_listrow_pane_ParamLimits

0x9beb,	// (0x00038ca7) main_phob2_pane

0x8ae0,	// (0x00037b9c) cell_tport_appsw_pane_cp02_ParamLimits

0x8ae0,	// (0x00037b9c) cell_tport_appsw_pane_cp02

0x8af4,	// (0x00037bb0) cell_tport_appsw_pane_cp03_ParamLimits

0x8af4,	// (0x00037bb0) cell_tport_appsw_pane_cp03

0x9beb,	// (0x00038ca7) phob2_contact_card_pane

0x9beb,	// (0x00038ca7) phob2_listscroll_pane

0xef74,	// (0x0003e030) phob2_list_pane

0xef7c,	// (0x0003e038) scroll_pane_cp034

0x9934,	// (0x000389f0) phob2_cc_data_pane_ParamLimits

0x9934,	// (0x000389f0) phob2_cc_data_pane

0x9955,	// (0x00038a11) phob2_cc_listscroll_pane_ParamLimits

0x9955,	// (0x00038a11) phob2_cc_listscroll_pane

0x9977,	// (0x00038a33) list_double_large_graphic_phob2_pane_ParamLimits

0x9977,	// (0x00038a33) list_double_large_graphic_phob2_pane

0x998b,	// (0x00038a47) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x998b,	// (0x00038a47) list_double_large_graphic_phob2_pane_g1

0x99a1,	// (0x00038a5d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99a1,	// (0x00038a5d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003efe0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003efe0) list_double_large_graphic_phob2_pane_g

0x99ad,	// (0x00038a69) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99ad,	// (0x00038a69) list_double_large_graphic_phob2_pane_t1

0x99c2,	// (0x00038a7e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99c2,	// (0x00038a7e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003efe5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003efe5) list_double_large_graphic_phob2_pane_t

0x9beb,	// (0x00038ca7) list_highlight_pane_cp024

0x99d4,	// (0x00038a90) phob2_cc_button_pane

0x99dc,	// (0x00038a98) phob2_cc_data_pane_g1_ParamLimits

0x99dc,	// (0x00038a98) phob2_cc_data_pane_g1

0x99f2,	// (0x00038aae) phob2_cc_data_pane_g2_ParamLimits

0x99f2,	// (0x00038aae) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003efea) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003efea) phob2_cc_data_pane_g

0x9a02,	// (0x00038abe) phob2_cc_data_pane_t1_ParamLimits

0x9a02,	// (0x00038abe) phob2_cc_data_pane_t1

0x9a1a,	// (0x00038ad6) phob2_cc_data_pane_t2_ParamLimits

0x9a1a,	// (0x00038ad6) phob2_cc_data_pane_t2

0x9a34,	// (0x00038af0) phob2_cc_data_pane_t3_ParamLimits

0x9a34,	// (0x00038af0) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003efef) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003efef) phob2_cc_data_pane_t

0xef84,	// (0x0003e040) phob2_cc_list_pane_ParamLimits

0xef84,	// (0x0003e040) phob2_cc_list_pane

0xd479,	// (0x0003c535) scroll_pane_cp035_ParamLimits

0xd479,	// (0x0003c535) scroll_pane_cp035

0x9c4c,	// (0x00038d08) bg_button_pane_cp033

0xef90,	// (0x0003e04c) phob2_cc_button_pane_g1

0xef9c,	// (0x0003e058) phob2_cc_button_pane_t1

0xefb1,	// (0x0003e06d) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003eff6) phob2_cc_button_pane_t

0x9a4e,	// (0x00038b0a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a4e,	// (0x00038b0a) list_double_large_graphic_phob2_cc_pane

0x9a62,	// (0x00038b1e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a62,	// (0x00038b1e) list_double_large_graphic_phob2_cc_pane_g1

0x9a6e,	// (0x00038b2a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a6e,	// (0x00038b2a) list_double_large_graphic_phob2_cc_pane_g2

0x9a7a,	// (0x00038b36) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a7a,	// (0x00038b36) list_double_large_graphic_phob2_cc_pane_g3

0x9a86,	// (0x00038b42) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a86,	// (0x00038b42) list_double_large_graphic_phob2_cc_pane_g4

0x9a92,	// (0x00038b4e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a92,	// (0x00038b4e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003effb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003effb) list_double_large_graphic_phob2_cc_pane_g

0x9a9e,	// (0x00038b5a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a9e,	// (0x00038b5a) list_double_large_graphic_phob2_cc_pane_t1

0x9ac7,	// (0x00038b83) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ac7,	// (0x00038b83) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003f006) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003f006) list_double_large_graphic_phob2_cc_pane_t

0xefc3,	// (0x0003e07f) list_highlight_pane_cp025_ParamLimits

0xefc3,	// (0x0003e07f) list_highlight_pane_cp025

0x9c4c,	// (0x00038d08) bg_button_pane_cp033_ParamLimits

0xef90,	// (0x0003e04c) phob2_cc_button_pane_g1_ParamLimits

0xef9c,	// (0x0003e058) phob2_cc_button_pane_t1_ParamLimits

0xefb1,	// (0x0003e06d) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003eff6) phob2_cc_button_pane_t_ParamLimits

0x109e,	// (0x0003015a) popup_wgtman_window

0xd2a2,	// (0x0003c35e) scroll_pane_cp038

0x9427,	// (0x000384e3) wgtman_btn_pane_cp_01_ParamLimits

0x9427,	// (0x000384e3) wgtman_btn_pane_cp_01

0xefd1,	// (0x0003e08d) wgtman_content_pane

0xefda,	// (0x0003e096) wgtman_heading_pane

0x9beb,	// (0x00038ca7) bg_heading_pane_cp02

0xefe3,	// (0x0003e09f) wgtman_heading_pane_g1

0xefeb,	// (0x0003e0a7) wgtman_heading_pane_t1

0xeff9,	// (0x0003e0b5) scroll_pane_cp036

0xf001,	// (0x0003e0bd) wgtman_list_pane

0xf009,	// (0x0003e0c5) wgtman_list_pane_t1_ParamLimits

0xf009,	// (0x0003e0c5) wgtman_list_pane_t1

0x6541,	// (0x000355fd) cam4_grid_pane

0x6f72,	// (0x0003602e) bg_button_pane_cp015_ParamLimits

0x6f86,	// (0x00036042) bg_button_pane_cp016_ParamLimits

0x6f99,	// (0x00036055) bg_button_pane_cp017_ParamLimits

0x6ff1,	// (0x000360ad) popup_vitu2_query_window_g3_ParamLimits

0x6ff1,	// (0x000360ad) popup_vitu2_query_window_g3

0x70ae,	// (0x0003616a) popup_vitu2_query_window_t6_ParamLimits

0x70ae,	// (0x0003616a) popup_vitu2_query_window_t6

0x70d9,	// (0x00036195) popup_vitu2_query_window_t7_ParamLimits

0x70d9,	// (0x00036195) popup_vitu2_query_window_t7

0xe867,	// (0x0003d923) cam4_grid_pane_g1

0xe870,	// (0x0003d92c) cam4_grid_pane_g2

0xf023,	// (0x0003e0df) cam4_grid_pane_g3

0xf02c,	// (0x0003e0e8) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003f00b) cam4_grid_pane_g

0x2064,	// (0x00031120) aid_placing_vt_slider_lsc_ParamLimits

0x2351,	// (0x0003140d) vidtel_button_pane_ParamLimits

0x2351,	// (0x0003140d) vidtel_button_pane

0xf037,	// (0x0003e0f3) bg_button_pane_cp034

0x9af0,	// (0x00038bac) vidtel_button_pane_g1

0xf041,	// (0x0003e0fd) vidtel_button_pane_t1

0xd3a6,	// (0x0003c462) aid_size_vtel_slider_touch

0xd479,	// (0x0003c535) scroll_pane_cp039

0xdd8f,	// (0x0003ce4b) ncim_query_button_pane_cp01_ParamLimits

0xddae,	// (0x0003ce6a) ncimui_query_pane_g1_ParamLimits

0x9c4c,	// (0x00038d08) input_focus_pane_cp012_ParamLimits

0xddd3,	// (0x0003ce8f) ncim_query_entry_pane_t1_ParamLimits

0xd479,	// (0x0003c535) scroll_pane_cp039_ParamLimits

0x3689,	// (0x00032745) navi_pane_bcale_mc_g1

0x3691,	// (0x0003274d) navi_pane_bcale_mc_t1

0xe37f,	// (0x0003d43b) main_sp_fs_email_pane_g1

0xe38b,	// (0x0003d447) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003eda1) main_sp_fs_email_pane_g

0xe8eb,	// (0x0003d9a7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8eb,	// (0x0003d9a7) list_single_cale_mrui_row_pane_g3

0x8ffe,	// (0x000380ba) list_single_recal_day_pane_g5_event_pane

0xeac9,	// (0x0003db85) list_single_recal_day_pane_g7

0xf04f,	// (0x0003e10b) list_recal_day_event_pane_cp01

0xf058,	// (0x0003e114) list_recal_vselct_arw_lo_pane_cp01

0xf060,	// (0x0003e11c) list_recal_vselct_arw_up_pane_cp01

0xf068,	// (0x0003e124) list_recal_vselct_pane_cp01

0xd3e2,	// (0x0003c49e) list_recal_day_event_pane_cp01_g1

0xf072,	// (0x0003e12e) list_recal_day_event_pane_cp01_t1

0xead1,	// (0x0003db8d) list_single_recal_day_pane_t1_ParamLimits

0xeae3,	// (0x0003db9f) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003eef9) list_single_recal_day_pane_t_ParamLimits

0xa2c8,	// (0x00039384) bg_notes_pane_ParamLimits

0xa36b,	// (0x00039427) list_notes_pane_ParamLimits

0x135c,	// (0x00030418) scroll_pane_cp06_ParamLimits

0xa38d,	// (0x00039449) main_notes_pane_ParamLimits

0x9beb,	// (0x00038ca7) main_welc_pane

0x9af8,	// (0x00038bb4) main_welc_body_pane_ParamLimits

0x9af8,	// (0x00038bb4) main_welc_body_pane

0x9b17,	// (0x00038bd3) main_welc_opti_pane_ParamLimits

0x9b17,	// (0x00038bd3) main_welc_opti_pane

0x9b60,	// (0x00038c1c) main_welc_pane_t1_ParamLimits

0x9b60,	// (0x00038c1c) main_welc_pane_t1

0x9b82,	// (0x00038c3e) main_welc_body_row_pane_ParamLimits

0x9b82,	// (0x00038c3e) main_welc_body_row_pane

0x9b96,	// (0x00038c52) main_welc_opti_row_pane_ParamLimits

0x9b96,	// (0x00038c52) main_welc_opti_row_pane

0xf080,	// (0x0003e13c) main_welc_opti_row_pane_g1

0xf088,	// (0x0003e144) main_welc_opti_row_pane_t1

0xf097,	// (0x0003e153) main_welc_body_row_pane_t1

0xed51,	// (0x0003de0d) popup_notif_wgt_heading_pane

0xed6b,	// (0x0003de27) aid_size_list_notif_wgt_del_ParamLimits

0xed78,	// (0x0003de34) list_notif_wgt_row_pane_g1_ParamLimits

0xed84,	// (0x0003de40) list_notif_wgt_row_pane_g2_ParamLimits

0xed98,	// (0x0003de54) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003ef60) list_notif_wgt_row_pane_g_ParamLimits

0xeda5,	// (0x0003de61) list_notif_wgt_row_pane_t1_ParamLimits

0xedbb,	// (0x0003de77) list_notif_wgt_row_pane_t2_ParamLimits

0xedcd,	// (0x0003de89) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003ef67) list_notif_wgt_row_pane_t_ParamLimits

0x94c0,	// (0x0003857c) listrow_wgtman_pane_g1_ParamLimits

0x94cd,	// (0x00038589) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003ef90) listrow_wgtman_pane_g_ParamLimits

0x94eb,	// (0x000385a7) listrow_wgtman_pane_t1_ParamLimits

0x9503,	// (0x000385bf) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003ef95) listrow_wgtman_pane_t_ParamLimits

0x9529,	// (0x000385e5) wait_bar_pane_cp09_ParamLimits

0x9beb,	// (0x00038ca7) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0003e162) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0003e16a) popup_notif_wgt_heading_pane_t1

0x9beb,	// (0x00038ca7) main_vids_pane

0x9beb,	// (0x00038ca7) vids_listscroll_pane

0x9ba6,	// (0x00038c62) scroll_pane_cp040

0x9beb,	// (0x00038ca7) vids_list_pane

0x9bb1,	// (0x00038c6d) vids_list_double_pane_ParamLimits

0x9bb1,	// (0x00038c6d) vids_list_double_pane

0x9bc2,	// (0x00038c7e) vids_list_double_pane_g1

0x9bcb,	// (0x00038c87) vids_list_double_pane_t1

0x9bdb,	// (0x00038c97) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003f019) vids_list_double_pane_t

0x9c4c,	// (0x00038d08) main_ncimui_pane_ParamLimits

0x7cda,	// (0x00036d96) main_ncimui_pane_g1_ParamLimits

0x7ce6,	// (0x00036da2) main_ncimui_pane_g2_ParamLimits

0x7ce6,	// (0x00036da2) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003eca6) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003eca6) main_ncimui_pane_g

0x9b36,	// (0x00038bf2) main_welc_pane_g1_ParamLimits

0x9b36,	// (0x00038bf2) main_welc_pane_g1

0x9b4b,	// (0x00038c07) main_welc_pane_g2_ParamLimits

0x9b4b,	// (0x00038c07) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003f014) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003f014) main_welc_pane_g

0xa2c8,	// (0x00039384) listscroll_mce_pane_ParamLimits

0x3769,	// (0x00032825) wait_bar_pane_cp10

0xc2e6,	// (0x0003b3a2) main_cale_day_pane_ParamLimits

0xc2e6,	// (0x0003b3a2) main_cale_week_pane_ParamLimits

0xa2c8,	// (0x00039384) main_messa_pane_ParamLimits

0x5a9b,	// (0x00034b57) main_clock2_btn_pane_ParamLimits

0x5a9b,	// (0x00034b57) main_clock2_btn_pane

0xcb0f,	// (0x0003bbcb) main_clock2_btn_pane_cp01_ParamLimits

0xcb0f,	// (0x0003bbcb) main_clock2_btn_pane_cp01

0xe85a,	// (0x0003d916) list_cale_mrui_pane_ParamLimits

0xee11,	// (0x0003decd) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003ef6e) main_cf0_pane_g

0x96fa,	// (0x000387b6) area_left_week_number_pane_ParamLimits

0x9708,	// (0x000387c4) area_top_day_name_pane_ParamLimits

0x971b,	// (0x000387d7) frame_month_view_pane_ParamLimits

0xef39,	// (0x0003dff5) grid_month_view_pane_ParamLimits

0xef47,	// (0x0003e003) frm_month_g1_ParamLimits

0x97a2,	// (0x0003885e) frm_month_g2_ParamLimits

0x97b5,	// (0x00038871) frm_month_g3_ParamLimits

0x97c8,	// (0x00038884) frm_month_g4_ParamLimits

0x97db,	// (0x00038897) frm_month_g5_ParamLimits

0x97ee,	// (0x000388aa) frm_month_g6_ParamLimits

0x9801,	// (0x000388bd) frm_month_g7_ParamLimits

0xef54,	// (0x0003e010) frm_month_g8_ParamLimits

0x9816,	// (0x000388d2) frm_month_g9_ParamLimits

0x9826,	// (0x000388e2) frm_month_g10_ParamLimits

0x9836,	// (0x000388f2) frm_month_g11_ParamLimits

0x9846,	// (0x00038902) frm_month_g12_ParamLimits

0x9858,	// (0x00038914) frm_month_g13_ParamLimits

0x986c,	// (0x00038928) frm_month_g14_ParamLimits

0x9880,	// (0x0003893c) frm_month_g15_ParamLimits

0x9894,	// (0x00038950) frm_month_g16_ParamLimits

0xff03,	// (0x0003efbf) frm_month_g_ParamLimits

0xef61,	// (0x0003e01d) cell_top_day_name_pane_t1_ParamLimits

0x98a8,	// (0x00038964) cell_area_left_week_number_pane_g1_ParamLimits

0x98b4,	// (0x00038970) cell_area_left_week_number_pane_t1_ParamLimits

0xc97b,	// (0x0003ba37) cell_month_view_pane_g1_ParamLimits

0x98c7,	// (0x00038983) cell_month_view_pane_t1_ParamLimits

0xa2c0,	// (0x0003937c) main_clock2_btn_pane_g1

0xf0bc,	// (0x0003e178) main_clock2_btn_pane_t1

0x9c4c,	// (0x00038d08) listscroll_cmail_pane_ParamLimits

0xe37f,	// (0x0003d43b) main_sp_fs_email_pane_g1_ParamLimits

0xe38b,	// (0x0003d447) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003eda1) main_sp_fs_email_pane_g_ParamLimits

0xea38,	// (0x0003daf4) list_recal_day_pane_ParamLimits

0xea49,	// (0x0003db05) mian_recal_day_pane_t1

0x87bb,	// (0x00037877) list_single_dyc_row_text_pane_t4_ParamLimits

0x87bb,	// (0x00037877) list_single_dyc_row_text_pane_t4

0x8804,	// (0x000378c0) list_single_dyc_row_text_pane_t5_ParamLimits

0x8804,	// (0x000378c0) list_single_dyc_row_text_pane_t5

0xe463,	// (0x0003d51f) list_single_dyc_row_text_pane_t6_ParamLimits

0xe463,	// (0x0003d51f) list_single_dyc_row_text_pane_t6

0xa933,	// (0x000399ef) aid_mgn_list_cale_time_pane

0x9c4c,	// (0x00038d08) main_gallery2_pane_ParamLimits

0xcb23,	// (0x0003bbdf) main_clock2_pane_cp01_t1

0xcb33,	// (0x0003bbef) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0003e880) main_clock2_pane_cp01_t

0x17ce,	// (0x0003088a) cale_week_scroll_pane_g16_ParamLimits

0x17ce,	// (0x0003088a) cale_week_scroll_pane_g16

0xa543,	// (0x000395ff) vorec_slider_pane
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal

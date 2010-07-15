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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007df43 };

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
0x1d50,	// (0x0007fc93) Screen

0x1d5c,	// (0x0007fc9f) application_window

0x1db0,	// (0x0007fcf3) area_bottom_pane_ParamLimits

0x1db0,	// (0x0007fcf3) area_bottom_pane

0x1e0e,	// (0x0007fd51) area_top_pane_ParamLimits

0x1e0e,	// (0x0007fd51) area_top_pane

0x1e72,	// (0x0007fdb5) call_video_uplink_pane_ParamLimits

0x1e72,	// (0x0007fdb5) call_video_uplink_pane

0x1eb1,	// (0x0007fdf4) main_pane_ParamLimits

0x1eb1,	// (0x0007fdf4) main_pane

0xca18,	// (0x0008a95b) context_pane

0x5237,	// (0x0008317a) navi_pane

0x525f,	// (0x000831a2) popup_cale_events_window_ParamLimits

0x525f,	// (0x000831a2) popup_cale_events_window

0xca2b,	// (0x0008a96e) popup_mup_playback_window

0x5277,	// (0x000831ba) signal_pane

0xa98c,	// (0x000888cf) main_browser_pane

0xab71,	// (0x00088ab4) main_burst_pane

0x50a7,	// (0x00082fea) main_calc_pane

0xc9fe,	// (0x0008a941) main_cale_day_pane

0x258e,	// (0x000804d1) main_cale_month_pane

0xc9fe,	// (0x0008a941) main_cale_week_pane

0xab71,	// (0x00088ab4) main_call_pane

0xa66c,	// (0x000885af) main_call_poc_pane

0xab71,	// (0x00088ab4) main_camera_pane

0xab71,	// (0x00088ab4) main_chi_dic_pane

0xb373,	// (0x000892b6) main_clock_pane

0xa66c,	// (0x000885af) main_fmradio_pane

0xab71,	// (0x00088ab4) main_graph_messa_pane

0xa66c,	// (0x000885af) main_help_pane

0xa98c,	// (0x000888cf) main_im_pane

0xa8c7,	// (0x0008880a) main_image_pane_ParamLimits

0xa8c7,	// (0x0008880a) main_image_pane

0xa66c,	// (0x000885af) main_location2_pane

0xab71,	// (0x00088ab4) main_location_pane

0xa8c7,	// (0x0008880a) main_messa_pane

0xa66c,	// (0x000885af) main_mp2_pane

0xab71,	// (0x00088ab4) main_mp_pane

0xa66c,	// (0x000885af) main_msg_pane

0xa66c,	// (0x000885af) main_mup_eq_pane

0xa66c,	// (0x000885af) main_mup_pane

0xa98c,	// (0x000888cf) main_notes_pane

0xa66c,	// (0x000885af) main_pec_pane

0xa66c,	// (0x000885af) main_phob_pane

0xa66c,	// (0x000885af) main_pinb_pane

0xa66c,	// (0x000885af) main_postcard_pane

0xa66c,	// (0x000885af) main_qdial_pane

0xab71,	// (0x00088ab4) main_skin_pane

0xa66c,	// (0x000885af) main_smil2_pane

0xab71,	// (0x00088ab4) main_smil_pane

0xab71,	// (0x00088ab4) main_video_pane

0xab71,	// (0x00088ab4) main_video_tele_pane

0xa8c7,	// (0x0008880a) main_viewer_pane_ParamLimits

0xa8c7,	// (0x0008880a) main_viewer_pane

0xab71,	// (0x00088ab4) main_vorec_pane

0x50e7,	// (0x0008302a) popup_blid_sat_info_window_ParamLimits

0x50e7,	// (0x0008302a) popup_blid_sat_info_window

0x510d,	// (0x00083050) popup_dyc_status_message_window_ParamLimits

0x510d,	// (0x00083050) popup_dyc_status_message_window

0x511d,	// (0x00083060) popup_grid_large_graphic_window_ParamLimits

0x511d,	// (0x00083060) popup_grid_large_graphic_window

0x51b2,	// (0x000830f5) popup_loc_request_window_ParamLimits

0x51b2,	// (0x000830f5) popup_loc_request_window

0x520b,	// (0x0008314e) popup_wml_address_window_ParamLimits

0x520b,	// (0x0008314e) popup_wml_address_window

0x4f7f,	// (0x00082ec2) call_muted_g1

0x4c3e,	// (0x00082b81) popup_call_audio_conf_window_ParamLimits

0x4c3e,	// (0x00082b81) popup_call_audio_conf_window

0x4f8f,	// (0x00082ed2) popup_call_audio_first_window_ParamLimits

0x4f8f,	// (0x00082ed2) popup_call_audio_first_window

0x4fcf,	// (0x00082f12) popup_call_audio_in_window_ParamLimits

0x4fcf,	// (0x00082f12) popup_call_audio_in_window

0x4ff3,	// (0x00082f36) popup_call_audio_out_window_ParamLimits

0x4ff3,	// (0x00082f36) popup_call_audio_out_window

0x5015,	// (0x00082f58) popup_call_audio_second_window_ParamLimits

0x5015,	// (0x00082f58) popup_call_audio_second_window

0x5045,	// (0x00082f88) popup_call_audio_wait_window_ParamLimits

0x5045,	// (0x00082f88) popup_call_audio_wait_window

0x5066,	// (0x00082fa9) popup_number_entry_window_ParamLimits

0x5066,	// (0x00082fa9) popup_number_entry_window

0xa224,	// (0x00088167) bg_popup_call_pane_cp05_ParamLimits

0xa224,	// (0x00088167) bg_popup_call_pane_cp05

0xa244,	// (0x00088187) popup_number_entry_window_t1

0xa257,	// (0x0008819a) popup_number_entry_window_t2

0xa269,	// (0x000881ac) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0008cff2) popup_number_entry_window_t

0xa2b0,	// (0x000881f3) text_title_cp2

0xa2c3,	// (0x00088206) bg_popup_call_pane_cp_ParamLimits

0xa2c3,	// (0x00088206) bg_popup_call_pane_cp

0xa2d1,	// (0x00088214) call_thumbnail_pane

0xa2d9,	// (0x0008821c) popup_call_audio_in_window_g1_ParamLimits

0xa2d9,	// (0x0008821c) popup_call_audio_in_window_g1

0xa2e5,	// (0x00088228) popup_call_audio_in_window_g2_ParamLimits

0xa2e5,	// (0x00088228) popup_call_audio_in_window_g2

0xa2f1,	// (0x00088234) popup_call_audio_in_window_g3_ParamLimits

0xa2f1,	// (0x00088234) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0008cffb) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0008cffb) popup_call_audio_in_window_g

0xa2fd,	// (0x00088240) popup_call_audio_in_window_t1_ParamLimits

0xa2fd,	// (0x00088240) popup_call_audio_in_window_t1

0xa319,	// (0x0008825c) popup_call_audio_in_window_t2_ParamLimits

0xa319,	// (0x0008825c) popup_call_audio_in_window_t2

0xa335,	// (0x00088278) popup_call_audio_in_window_t3_ParamLimits

0xa335,	// (0x00088278) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0008d002) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0008d002) popup_call_audio_in_window_t

0xa2c3,	// (0x00088206) bg_popup_call_pane_cp01_ParamLimits

0xa2c3,	// (0x00088206) bg_popup_call_pane_cp01

0xa2d1,	// (0x00088214) call_thumbnail_pane_cp02

0xa348,	// (0x0008828b) call_type_pane_cp022

0xa350,	// (0x00088293) popup_call_audio_out_window_g1_ParamLimits

0xa350,	// (0x00088293) popup_call_audio_out_window_g1

0xa362,	// (0x000882a5) popup_call_audio_out_window_g2_ParamLimits

0xa362,	// (0x000882a5) popup_call_audio_out_window_g2

0xa36e,	// (0x000882b1) popup_call_audio_out_window_g3_ParamLimits

0xa36e,	// (0x000882b1) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0008d009) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0008d009) popup_call_audio_out_window_g

0xa380,	// (0x000882c3) popup_call_audio_out_window_t1_ParamLimits

0xa380,	// (0x000882c3) popup_call_audio_out_window_t1

0xa398,	// (0x000882db) popup_call_audio_out_window_t2_ParamLimits

0xa398,	// (0x000882db) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0008d010) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0008d010) popup_call_audio_out_window_t

0xa3ad,	// (0x000882f0) bg_popup_call_pane_ParamLimits

0xa3ad,	// (0x000882f0) bg_popup_call_pane

0x207c,	// (0x0007ffbf) call_thumbnail_pane_cp_ParamLimits

0x207c,	// (0x0007ffbf) call_thumbnail_pane_cp

0xa431,	// (0x00088374) call_type_pane_cp01_ParamLimits

0xa431,	// (0x00088374) call_type_pane_cp01

0xa475,	// (0x000883b8) popup_call_audio_first_window_g1_ParamLimits

0xa475,	// (0x000883b8) popup_call_audio_first_window_g1

0xa4c1,	// (0x00088404) popup_call_audio_first_window_g2_ParamLimits

0xa4c1,	// (0x00088404) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0008d015) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0008d015) popup_call_audio_first_window_g

0xa505,	// (0x00088448) popup_call_audio_first_window_t1_ParamLimits

0xa505,	// (0x00088448) popup_call_audio_first_window_t1

0xa5b1,	// (0x000884f4) popup_call_audio_first_window_t4_ParamLimits

0xa5b1,	// (0x000884f4) popup_call_audio_first_window_t4

0xa63d,	// (0x00088580) popup_call_audio_first_window_t5_ParamLimits

0xa63d,	// (0x00088580) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0008d01a) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0008d01a) popup_call_audio_first_window_t

0xa66c,	// (0x000885af) bg_popup_call_pane_cp02

0xa676,	// (0x000885b9) call_type_pane_cp023

0xa67e,	// (0x000885c1) popup_call_audio_wait_window_g1

0xa686,	// (0x000885c9) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0008d021) popup_call_audio_wait_window_g

0xa68e,	// (0x000885d1) popup_call_audio_wait_window_t3

0xa69c,	// (0x000885df) bg_popup_call_pane_cp03_ParamLimits

0xa69c,	// (0x000885df) bg_popup_call_pane_cp03

0xa6fc,	// (0x0008863f) call_thumbnail_pane_cp011_ParamLimits

0xa6fc,	// (0x0008863f) call_thumbnail_pane_cp011

0xa708,	// (0x0008864b) call_type_pane_cp034_ParamLimits

0xa708,	// (0x0008864b) call_type_pane_cp034

0xa744,	// (0x00088687) popup_call_audio_second_window_g1_ParamLimits

0xa744,	// (0x00088687) popup_call_audio_second_window_g1

0xa780,	// (0x000886c3) popup_call_audio_second_window_g2_ParamLimits

0xa780,	// (0x000886c3) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0008d026) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0008d026) popup_call_audio_second_window_g

0xa7bc,	// (0x000886ff) popup_call_audio_second_window_t1_ParamLimits

0xa7bc,	// (0x000886ff) popup_call_audio_second_window_t1

0xa83d,	// (0x00088780) popup_call_audio_second_window_t2_ParamLimits

0xa83d,	// (0x00088780) popup_call_audio_second_window_t2

0xa873,	// (0x000887b6) popup_call_audio_second_window_t3_ParamLimits

0xa873,	// (0x000887b6) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0008d02b) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0008d02b) popup_call_audio_second_window_t

0xa66c,	// (0x000885af) bg_popup_call_pane_cp04

0xa8a9,	// (0x000887ec) list_conf_pane

0xa8b1,	// (0x000887f4) popup_call_audio_conf_window_t1

0xa8bf,	// (0x00088802) call_thumbnail_pane_g1

0xa8c7,	// (0x0008880a) bg_pinb_pane_ParamLimits

0xa8c7,	// (0x0008880a) bg_pinb_pane

0xa8d5,	// (0x00088818) find_pinb_pane

0xa8de,	// (0x00088821) listscroll_pinb_pane_ParamLimits

0xa8de,	// (0x00088821) listscroll_pinb_pane

0xa8ed,	// (0x00088830) pinb_bg_pane_g1

0x20a0,	// (0x0007ffe3) pinb_bg_pane_g2

0x20ac,	// (0x0007ffef) pinb_bg_pane_g3

0x20b8,	// (0x0007fffb) pinb_bg_pane_g4

0x20c4,	// (0x00080007) pinb_bg_pane_g5

0x20d0,	// (0x00080013) pinb_bg_pane_g6

0x20db,	// (0x0008001e) pinb_bg_pane_g7

0x20e6,	// (0x00080029) pinb_bg_pane_g8

0x20f1,	// (0x00080034) pinb_bg_pane_g9

0x20fb,	// (0x0008003e) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0008d032) pinb_bg_pane_g

0x2118,	// (0x0008005b) grid_pinb_pane

0x2123,	// (0x00080066) list_pinb_pane

0x212e,	// (0x00080071) scroll_pane_cp01_ParamLimits

0x212e,	// (0x00080071) scroll_pane_cp01

0xa8f7,	// (0x0008883a) find_pinb_pane_g1_ParamLimits

0xa8f7,	// (0x0008883a) find_pinb_pane_g1

0xa90f,	// (0x00088852) find_pinb_pane_t1

0xa921,	// (0x00088864) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0008d04c) find_pinb_pane_t

0xa936,	// (0x00088879) input_focus_pane_cp01_ParamLimits

0xa936,	// (0x00088879) input_focus_pane_cp01

0x2140,	// (0x00080083) cell_pinb_pane_ParamLimits

0x2140,	// (0x00080083) cell_pinb_pane

0x2165,	// (0x000800a8) cell_pinb_pane_g1_ParamLimits

0x2165,	// (0x000800a8) cell_pinb_pane_g1

0x217a,	// (0x000800bd) cell_pinb_pane_g2_ParamLimits

0x217a,	// (0x000800bd) cell_pinb_pane_g2

0xa942,	// (0x00088885) cell_pinb_pane_g3_ParamLimits

0xa942,	// (0x00088885) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0008d051) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0008d051) cell_pinb_pane_g

0xa66c,	// (0x000885af) grid_highlight_pane_cp01

0x2186,	// (0x000800c9) list_pinb_item_pane_ParamLimits

0x2186,	// (0x000800c9) list_pinb_item_pane

0xa66c,	// (0x000885af) list_highlight_pane_cp02

0x21a4,	// (0x000800e7) list_pinb_item_pane_g1_ParamLimits

0x21a4,	// (0x000800e7) list_pinb_item_pane_g1

0x21b1,	// (0x000800f4) list_pinb_item_pane_g2_ParamLimits

0x21b1,	// (0x000800f4) list_pinb_item_pane_g2

0x21bd,	// (0x00080100) list_pinb_item_pane_g3_ParamLimits

0x21bd,	// (0x00080100) list_pinb_item_pane_g3

0x21ce,	// (0x00080111) list_pinb_item_pane_g4_ParamLimits

0x21ce,	// (0x00080111) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0008d058) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0008d058) list_pinb_item_pane_g

0x21da,	// (0x0008011d) list_pinb_item_pane_t1_ParamLimits

0x21da,	// (0x0008011d) list_pinb_item_pane_t1

0x220b,	// (0x0008014e) calc_display_pane

0x2229,	// (0x0008016c) calc_paper_pane

0x2245,	// (0x00080188) grid_calc_pane

0xa66c,	// (0x000885af) bg_list_pane_cp01

0x2271,	// (0x000801b4) clock_g1

0x2279,	// (0x000801bc) clock_g2

0x0001,

0xf11e,	// (0x0008d061) clock_g

0x2283,	// (0x000801c6) clock_t1_ParamLimits

0x2283,	// (0x000801c6) clock_t1

0x2298,	// (0x000801db) clock_t2_ParamLimits

0x2298,	// (0x000801db) clock_t2

0x22aa,	// (0x000801ed) clock_t3_ParamLimits

0x22aa,	// (0x000801ed) clock_t3

0x22bc,	// (0x000801ff) clock_t4_ParamLimits

0x22bc,	// (0x000801ff) clock_t4

0x22ce,	// (0x00080211) clock_t5_ParamLimits

0x22ce,	// (0x00080211) clock_t5

0x22e3,	// (0x00080226) clock_t6_ParamLimits

0x22e3,	// (0x00080226) clock_t6

0x22f5,	// (0x00080238) clock_t7_ParamLimits

0x22f5,	// (0x00080238) clock_t7

0x2307,	// (0x0008024a) clock_t8_ParamLimits

0x2307,	// (0x0008024a) clock_t8

0x231d,	// (0x00080260) clock_t9_ParamLimits

0x231d,	// (0x00080260) clock_t9

0x0008,

0xf123,	// (0x0008d066) clock_t_ParamLimits

0xf123,	// (0x0008d066) clock_t

0xa94e,	// (0x00088891) popup_clock_analogue_window_cp02

0xa94e,	// (0x00088891) popup_clock_digital_window_cp01

0xa956,	// (0x00088899) listscroll_help_pane

0xa66c,	// (0x000885af) phob_pre_status_pane

0xa960,	// (0x000888a3) grid_qdial_pane

0xa8c7,	// (0x0008880a) listscroll_mce_pane

0xa8c7,	// (0x0008880a) bg_notes_pane

0xa96a,	// (0x000888ad) list_notes_pane

0x2333,	// (0x00080276) scroll_pane_cp06

0xa978,	// (0x000888bb) bg_calc_paper_pane

0x2342,	// (0x00080285) list_calc_pane

0xa98c,	// (0x000888cf) bg_calc_display_pane

0x235c,	// (0x0008029f) calc_display_pane_t1

0x2371,	// (0x000802b4) calc_display_pane_t2

0x2386,	// (0x000802c9) calc_display_pane_t3

0x0002,

0xf136,	// (0x0008d079) calc_display_pane_t

0x2398,	// (0x000802db) cell_calc_pane_ParamLimits

0x2398,	// (0x000802db) cell_calc_pane

0xa998,	// (0x000888db) bg_calc_paper_pane_g1

0xa9a4,	// (0x000888e7) bg_calc_paper_pane_g2

0xa9b0,	// (0x000888f3) bg_calc_paper_pane_g3

0xa9bc,	// (0x000888ff) bg_calc_paper_pane_g4

0xa9c8,	// (0x0008890b) bg_calc_paper_pane_g5

0x23c7,	// (0x0008030a) bg_calc_paper_pane_g6

0x23d8,	// (0x0008031b) bg_calc_paper_pane_g7

0x23e9,	// (0x0008032c) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0008d080) bg_calc_paper_pane_g

0x23fa,	// (0x0008033d) calc_bg_paper_pane_g9

0x240b,	// (0x0008034e) list_calc_item_pane_ParamLimits

0x240b,	// (0x0008034e) list_calc_item_pane

0xa9d4,	// (0x00088917) list_calc_item_pane_g1

0x242c,	// (0x0008036f) list_calc_item_pane_t1_ParamLimits

0x242c,	// (0x0008036f) list_calc_item_pane_t1

0x243e,	// (0x00080381) list_calc_item_pane_t2_ParamLimits

0x243e,	// (0x00080381) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0008d091) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0008d091) list_calc_item_pane_t

0xa9e1,	// (0x00088924) cell_calc_pane_g1

0xa9eb,	// (0x0008892e) grid_highlight_pane_cp02

0xd3ab,	// (0x0008b2ee) bg_calc_display_pane_g1

0x246e,	// (0x000803b1) bg_calc_display_pane_g2

0xd3b4,	// (0x0008b2f7) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0008d09b) bg_calc_display_pane_g

0x2478,	// (0x000803bb) cell_qdial_pane_ParamLimits

0x2478,	// (0x000803bb) cell_qdial_pane

0x248e,	// (0x000803d1) cell_qdial_pane_g1_ParamLimits

0x248e,	// (0x000803d1) cell_qdial_pane_g1

0x249b,	// (0x000803de) cell_qdial_pane_g2_ParamLimits

0x249b,	// (0x000803de) cell_qdial_pane_g2

0xaa0d,	// (0x00088950) cell_qdial_pane_g3_ParamLimits

0xaa0d,	// (0x00088950) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0008d0a2) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0008d0a2) cell_qdial_pane_g

0x24b9,	// (0x000803fc) cell_qdial_pane_t1_ParamLimits

0x24b9,	// (0x000803fc) cell_qdial_pane_t1

0x24d1,	// (0x00080414) cell_qdial_pane_t2_ParamLimits

0x24d1,	// (0x00080414) cell_qdial_pane_t2

0x24e4,	// (0x00080427) cell_qdial_pane_t3_ParamLimits

0x24e4,	// (0x00080427) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0008d0ab) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0008d0ab) cell_qdial_pane_t

0xa66c,	// (0x000885af) grid_highlight_pane_cp04

0xaa19,	// (0x0008895c) thumbnail_qdial_pane_ParamLimits

0xaa19,	// (0x0008895c) thumbnail_qdial_pane

0xaa75,	// (0x000889b8) list_help_pane

0xaa7e,	// (0x000889c1) scroll_pane_cp02

0x24f7,	// (0x0008043a) help_list_pane_t1_ParamLimits

0x24f7,	// (0x0008043a) help_list_pane_t1

0x251e,	// (0x00080461) bg_notes_pane_g2

0x2526,	// (0x00080469) bg_notes_pane_g3

0x252e,	// (0x00080471) notes_bg_pane_g1

0x2536,	// (0x00080479) notes_bg_pane_g4

0x253e,	// (0x00080481) notes_bg_pane_g5

0x2546,	// (0x00080489) notes_bg_pane_g6

0x254e,	// (0x00080491) notes_bg_pane_g7

0x2556,	// (0x00080499) notes_bg_pane_g8

0x255e,	// (0x000804a1) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0008d0c9) notes_bg_pane_g

0x2566,	// (0x000804a9) list_notes_text_pane_ParamLimits

0x2566,	// (0x000804a9) list_notes_text_pane

0xaa87,	// (0x000889ca) list_notes_text_pane_g1

0x0a87,	// (0x0007e9ca) list_notes_text_pane_t1

0x258e,	// (0x000804d1) listscroll_cale_week_pane

0x25ba,	// (0x000804fd) bg_cale_heading_pane

0x25e3,	// (0x00080526) bg_cale_pane_cp01

0x2605,	// (0x00080548) cale_week_corner_pane

0x2624,	// (0x00080567) cale_week_day_heading_pane

0x2652,	// (0x00080595) cale_week_scroll_pane_g1

0x2676,	// (0x000805b9) cale_week_scroll_pane_g2

0x268e,	// (0x000805d1) cale_week_scroll_pane_g3

0x26a6,	// (0x000805e9) cale_week_scroll_pane_g4

0x26be,	// (0x00080601) cale_week_scroll_pane_g5

0x26d6,	// (0x00080619) cale_week_scroll_pane_g6

0x26f6,	// (0x00080639) cale_week_scroll_pane_g7

0x2716,	// (0x00080659) cale_week_scroll_pane_g8

0x2736,	// (0x00080679) cale_week_scroll_pane_g9

0x2753,	// (0x00080696) cale_week_scroll_pane_g10

0x2770,	// (0x000806b3) cale_week_scroll_pane_g11

0x278f,	// (0x000806d2) cale_week_scroll_pane_g12

0x27b4,	// (0x000806f7) cale_week_scroll_pane_g13

0x27dd,	// (0x00080720) cale_week_scroll_pane_g14

0x2806,	// (0x00080749) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0008d0d8) cale_week_scroll_pane_g

0x284f,	// (0x00080792) cale_week_time_pane

0x286f,	// (0x000807b2) grid_cale_week_pane

0xaabc,	// (0x000889ff) scroll_pane_cp08

0x28a0,	// (0x000807e3) cell_cale_week_pane_ParamLimits

0x28a0,	// (0x000807e3) cell_cale_week_pane

0x2930,	// (0x00080873) cale_week_day_heading_pane_t1

0x2958,	// (0x0008089b) cale_week_day_heading_pane_t2

0x2985,	// (0x000808c8) cale_week_day_heading_pane_t3

0x29b2,	// (0x000808f5) cale_week_day_heading_pane_t4

0x29df,	// (0x00080922) cale_week_day_heading_pane_t5

0x2a0c,	// (0x0008094f) cale_week_day_heading_pane_t6

0x2a39,	// (0x0008097c) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0008d0f9) cale_week_day_heading_pane_t

0xaad9,	// (0x00088a1c) bg_cale_side_pane

0x2a61,	// (0x000809a4) cale_week_time_pane_t1

0x2a85,	// (0x000809c8) cale_week_time_pane_t2

0x2aa9,	// (0x000809ec) cale_week_time_pane_t3

0x2acd,	// (0x00080a10) cale_week_time_pane_t4

0x2af1,	// (0x00080a34) cale_week_time_pane_t5

0x2b17,	// (0x00080a5a) cale_week_time_pane_t6

0x2b3f,	// (0x00080a82) cale_week_time_pane_t7

0x2b6b,	// (0x00080aae) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0008d108) cale_week_time_pane_t

0x2b9b,	// (0x00080ade) cell_cale_week_pane_g2

0x2bbf,	// (0x00080b02) cell_cale_week_pane_g3_ParamLimits

0x2bbf,	// (0x00080b02) cell_cale_week_pane_g3

0xab24,	// (0x00088a67) grid_highlight_pane_cp07

0xab2c,	// (0x00088a6f) listscroll_gms_pane

0xab36,	// (0x00088a79) grid_gms_pane

0xab3f,	// (0x00088a82) listscroll_gms_pane_g1

0xab47,	// (0x00088a8a) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0008d119) listscroll_gms_pane_g

0x2bd7,	// (0x00080b1a) scroll_pane_cp010

0x2be2,	// (0x00080b25) cell_gms_pane_ParamLimits

0x2be2,	// (0x00080b25) cell_gms_pane

0x2bf5,	// (0x00080b38) cell_gms_pane_g1

0xab4f,	// (0x00088a92) cell_gms_pane_g2

0xab57,	// (0x00088a9a) cell_gms_pane_g3

0xab60,	// (0x00088aa3) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0008d11e) cell_gms_pane_g

0xab69,	// (0x00088aac) grid_highlight_pane_cp09

0x4f27,	// (0x00082e6a) phob_pre_status_pane_g1

0x4f2f,	// (0x00082e72) phob_pre_status_pane_g2

0x4f37,	// (0x00082e7a) phob_pre_status_pane_g3

0x4f3f,	// (0x00082e82) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0008d509) phob_pre_status_pane_g

0x4f4f,	// (0x00082e92) phob_pre_status_pane_t1

0x4f5f,	// (0x00082ea2) phob_pre_status_pane_t2

0x4f6f,	// (0x00082eb2) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0008d514) phob_pre_status_pane_t

0xab71,	// (0x00088ab4) bg_list_pane_cp05

0x2c05,	// (0x00080b48) grid_vorec_pane

0x2c0f,	// (0x00080b52) vorec_t1

0x2c1d,	// (0x00080b60) vorec_t2

0x2c2b,	// (0x00080b6e) vorec_t3

0x2c39,	// (0x00080b7c) vorec_t4

0xa1c5,	// (0x00088108) vorec_t5

0xa1d3,	// (0x00088116) vorec_t6

0x0004,

0xf1e4,	// (0x0008d127) vorec_t

0xa1e1,	// (0x00088124) wait_bar_pane_cp01

0x2c55,	// (0x00080b98) cell_vorec_pane_ParamLimits

0x2c55,	// (0x00080b98) cell_vorec_pane

0x2c6a,	// (0x00080bad) cell_vorec_pane_g1

0xa66c,	// (0x000885af) grid_highlight_pane_cp05

0x2c82,	// (0x00080bc5) cams_zoom_pane

0x2c8e,	// (0x00080bd1) image_vga_pane

0x2c9d,	// (0x00080be0) main_camera_pane_g1

0x2cab,	// (0x00080bee) main_camera_pane_g2

0x2cb7,	// (0x00080bfa) main_camera_pane_g3

0x2cc5,	// (0x00080c08) main_camera_pane_g4

0x2cd3,	// (0x00080c16) main_camera_pane_g5

0x2ce1,	// (0x00080c24) main_camera_pane_g6

0x2cef,	// (0x00080c32) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0008d132) main_camera_pane_g

0x2cfd,	// (0x00080c40) main_camera_pane_t1

0x2d0f,	// (0x00080c52) main_camera_pane_t2

0x0001,

0xf200,	// (0x0008d143) main_camera_pane_t

0x2d32,	// (0x00080c75) cams_zoom_pane_cp_ParamLimits

0x2d32,	// (0x00080c75) cams_zoom_pane_cp

0x2d56,	// (0x00080c99) image_cif_pane_ParamLimits

0x2d56,	// (0x00080c99) image_cif_pane

0x2d74,	// (0x00080cb7) image_subqcif_pane

0x2d7e,	// (0x00080cc1) main_video_pane_g1_ParamLimits

0x2d7e,	// (0x00080cc1) main_video_pane_g1

0x2d9e,	// (0x00080ce1) main_video_pane_g2_ParamLimits

0x2d9e,	// (0x00080ce1) main_video_pane_g2

0x2dce,	// (0x00080d11) main_video_pane_g3_ParamLimits

0x2dce,	// (0x00080d11) main_video_pane_g3

0x2df7,	// (0x00080d3a) main_video_pane_g4_ParamLimits

0x2df7,	// (0x00080d3a) main_video_pane_g4

0x2e20,	// (0x00080d63) main_video_pane_g5_ParamLimits

0x2e20,	// (0x00080d63) main_video_pane_g5

0xab85,	// (0x00088ac8) main_video_pane_g6_ParamLimits

0xab85,	// (0x00088ac8) main_video_pane_g6

0x0006,

0xf205,	// (0x0008d148) main_video_pane_g_ParamLimits

0xf205,	// (0x0008d148) main_video_pane_g

0x2e42,	// (0x00080d85) main_video_pane_t1_ParamLimits

0x2e42,	// (0x00080d85) main_video_pane_t1

0xab9f,	// (0x00088ae2) cams_zoom_pane_g1

0xaba8,	// (0x00088aeb) cams_zoom_pane_g2

0xabb1,	// (0x00088af4) cams_zoom_pane_g3

0xabba,	// (0x00088afd) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0008d157) cams_zoom_pane_g

0x2e8c,	// (0x00080dcf) grid_cams_pane

0x2e9a,	// (0x00080ddd) linegrid_cams_pane

0x2ea6,	// (0x00080de9) cell_cams_pane_ParamLimits

0x2ea6,	// (0x00080de9) cell_cams_pane

0xabc3,	// (0x00088b06) cams_burst_image_pane

0xabcb,	// (0x00088b0e) cell_cams_pane_g1

0xa66c,	// (0x000885af) grid_highlight_pane_cp03

0xa9e1,	// (0x00088924) mp_bg_pane_g1

0xa66c,	// (0x000885af) bg_list_pane_cp03

0xc921,	// (0x0008a864) bg_mp_pane

0xc929,	// (0x0008a86c) grid_mp_pane

0xc931,	// (0x0008a874) media_player_g1

0xc93b,	// (0x0008a87e) media_player_t1

0xc949,	// (0x0008a88c) media_player_t2

0xc957,	// (0x0008a89a) media_player_t3

0xc965,	// (0x0008a8a8) media_player_t4

0xc973,	// (0x0008a8b6) media_player_t5

0xc981,	// (0x0008a8c4) media_player_t6

0xc98f,	// (0x0008a8d2) media_player_t7

0x0006,

0xf5b0,	// (0x0008d4f3) media_player_t

0xc99d,	// (0x0008a8e0) wait_bar_pane_cp02

0xf595,	// (0x0008d4d8) main_usb_pane_t

0x4f1e,	// (0x00082e61) cell_mp_pane

0xa9e1,	// (0x00088924) cell_mp_pane_g1

0xa66c,	// (0x000885af) grid_highlight_pane_cp06

0xabd3,	// (0x00088b16) grid_skin_colour_pane

0xabdb,	// (0x00088b1e) list_highlight_pane_cp03

0x2ebb,	// (0x00080dfe) skin_g1

0xabe3,	// (0x00088b26) skin_t1

0xabf2,	// (0x00088b35) skin_t2

0x0001,

0xf249,	// (0x0008d18c) skin_t

0x2ec5,	// (0x00080e08) cell_skin_colour_pane_ParamLimits

0x2ec5,	// (0x00080e08) cell_skin_colour_pane

0xac00,	// (0x00088b43) cell_skin_colour_pane_g1

0x2f45,	// (0x00080e88) call_video_g1_ParamLimits

0x2f45,	// (0x00080e88) call_video_g1

0x2f55,	// (0x00080e98) call_video_g2_ParamLimits

0x2f55,	// (0x00080e98) call_video_g2

0x0001,

0xf24e,	// (0x0008d191) call_video_g_ParamLimits

0xf24e,	// (0x0008d191) call_video_g

0x2fa5,	// (0x00080ee8) call_video_uplink_pane_cp1_ParamLimits

0x2fa5,	// (0x00080ee8) call_video_uplink_pane_cp1

0xac12,	// (0x00088b55) call_video_uplink_pane_cp2

0x3073,	// (0x00080fb6) video_down_crop_pane_ParamLimits

0x3073,	// (0x00080fb6) video_down_crop_pane

0x3165,	// (0x000810a8) video_down_pane_ParamLimits

0x3165,	// (0x000810a8) video_down_pane

0xac1a,	// (0x00088b5d) video_down_subqcif_pane_ParamLimits

0xac1a,	// (0x00088b5d) video_down_subqcif_pane

0xac34,	// (0x00088b77) video_down_subqcif_pane_cp_ParamLimits

0xac34,	// (0x00088b77) video_down_subqcif_pane_cp

0xac5c,	// (0x00088b9f) im_reading_pane_ParamLimits

0xac5c,	// (0x00088b9f) im_reading_pane

0x3282,	// (0x000811c5) im_writing_pane_ParamLimits

0x3282,	// (0x000811c5) im_writing_pane

0x32a0,	// (0x000811e3) im_reading_pane_t1

0xac76,	// (0x00088bb9) list_im_pane

0xac87,	// (0x00088bca) scroll_pane_cp07

0x32e2,	// (0x00081225) im_writing_pane_t1_ParamLimits

0x32e2,	// (0x00081225) im_writing_pane_t1

0xaca0,	// (0x00088be3) im_writing_pane_t2_ParamLimits

0xaca0,	// (0x00088be3) im_writing_pane_t2

0x0001,

0xf258,	// (0x0008d19b) im_writing_pane_t_ParamLimits

0xf258,	// (0x0008d19b) im_writing_pane_t

0xa66c,	// (0x000885af) input_focus_pane_cp04

0xa66c,	// (0x000885af) input_focus_pane_cp05

0x32f4,	// (0x00081237) list_im_single_pane_ParamLimits

0x32f4,	// (0x00081237) list_im_single_pane

0x330d,	// (0x00081250) list_single_im_pane_t1

0x4ee2,	// (0x00082e25) blid_accuracy_pane

0x4eea,	// (0x00082e2d) blid_compass_pane

0x4ef4,	// (0x00082e37) main_location_t1

0x4f02,	// (0x00082e45) main_location_t2

0x4f10,	// (0x00082e53) main_location_t3

0x0002,

0xf5bf,	// (0x0008d502) main_location_t

0xa66c,	// (0x000885af) aid_levels_location

0xa9e1,	// (0x00088924) blid_accuracy_pane_g1

0xa9e1,	// (0x00088924) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0008d1fd) blid_accuracy_pane_g

0xace8,	// (0x00088c2b) wml_content_pane

0xad26,	// (0x00088c69) wml_button_pane_ParamLimits

0xad26,	// (0x00088c69) wml_button_pane

0x331c,	// (0x0008125f) wml_list_single_large_pane_ParamLimits

0x331c,	// (0x0008125f) wml_list_single_large_pane

0x333e,	// (0x00081281) wml_list_single_medium_pane_ParamLimits

0x333e,	// (0x00081281) wml_list_single_medium_pane

0x3361,	// (0x000812a4) wml_list_single_small_pane_ParamLimits

0x3361,	// (0x000812a4) wml_list_single_small_pane

0xad3a,	// (0x00088c7d) wml_selection_box_pane_ParamLimits

0xad3a,	// (0x00088c7d) wml_selection_box_pane

0xad4d,	// (0x00088c90) wml_list_single_pane_t1

0xad5c,	// (0x00088c9f) wml_list_single_medium_pane_t1

0xad6b,	// (0x00088cae) wml_list_single_large_pane_t1

0xad7a,	// (0x00088cbd) input_focus_pane_cp02_ParamLimits

0xad7a,	// (0x00088cbd) input_focus_pane_cp02

0xad8d,	// (0x00088cd0) wml_selection_box_pane_g1

0xad96,	// (0x00088cd9) wml_selection_box_pane_t1_ParamLimits

0xad96,	// (0x00088cd9) wml_selection_box_pane_t1

0xa8c7,	// (0x0008880a) bg_wml_button_pane_ParamLimits

0xa8c7,	// (0x0008880a) bg_wml_button_pane

0xadae,	// (0x00088cf1) wml_button_pane_g1

0xadb6,	// (0x00088cf9) wml_button_pane_t1

0xadae,	// (0x00088cf1) wml_button_bg_pane_g1

0xadc6,	// (0x00088d09) wml_button_bg_pane_g2

0xadce,	// (0x00088d11) wml_button_bg_pane_g3

0xadd6,	// (0x00088d19) wml_button_bg_pane_g4

0xadde,	// (0x00088d21) wml_button_bg_pane_g5

0xade6,	// (0x00088d29) wml_button_bg_pane_g6

0xadee,	// (0x00088d31) wml_button_bg_pane_g7

0xadf6,	// (0x00088d39) wml_button_bg_pane_g8

0xadfe,	// (0x00088d41) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0008d1a0) wml_button_bg_pane_g

0x3389,	// (0x000812cc) bg_list_pane_cp02

0xae06,	// (0x00088d49) mce_header_pane_ParamLimits

0xae06,	// (0x00088d49) mce_header_pane

0xae1c,	// (0x00088d5f) mce_icon_pane

0xae1c,	// (0x00088d5f) mce_image_pane

0xae25,	// (0x00088d68) mce_text_pane_ParamLimits

0xae25,	// (0x00088d68) mce_text_pane

0x3393,	// (0x000812d6) scroll_pane_cp03

0xad1e,	// (0x00088c61) scroll_pane_cp04

0xae38,	// (0x00088d7b) scroll_pane_cp05_ParamLimits

0xae38,	// (0x00088d7b) scroll_pane_cp05

0x339d,	// (0x000812e0) mce_header_field_pane_ParamLimits

0x339d,	// (0x000812e0) mce_header_field_pane

0x33bf,	// (0x00081302) mce_header_field_pane_2_ParamLimits

0x33bf,	// (0x00081302) mce_header_field_pane_2

0x33d5,	// (0x00081318) mce_header_field_pane_3

0x33dd,	// (0x00081320) list_single_mce_message_pane_ParamLimits

0x33dd,	// (0x00081320) list_single_mce_message_pane

0x33fc,	// (0x0008133f) list_single_mce_smart_pane_ParamLimits

0x33fc,	// (0x0008133f) list_single_mce_smart_pane

0xae44,	// (0x00088d87) input_focus_pane_cp03

0xae4d,	// (0x00088d90) list_header_data_pane

0x3426,	// (0x00081369) mce_header_field_pane_t1

0x3436,	// (0x00081379) list_single_mce_header_pane_ParamLimits

0x3436,	// (0x00081379) list_single_mce_header_pane

0xae55,	// (0x00088d98) list_single_mce_header_pane_t1

0xae64,	// (0x00088da7) list_single_mce_message_pane_g1

0xae6c,	// (0x00088daf) list_single_mce_message_pane_t1

0x347a,	// (0x000813bd) bg_cale_heading_pane_cp01_ParamLimits

0x347a,	// (0x000813bd) bg_cale_heading_pane_cp01

0xae7a,	// (0x00088dbd) bg_cale_pane_cp02_ParamLimits

0xae7a,	// (0x00088dbd) bg_cale_pane_cp02

0x34cc,	// (0x0008140f) cale_month_corner_pane

0x34eb,	// (0x0008142e) cale_month_day_heading_pane_ParamLimits

0x34eb,	// (0x0008142e) cale_month_day_heading_pane

0x354d,	// (0x00081490) cale_month_pane_g1_ParamLimits

0x354d,	// (0x00081490) cale_month_pane_g1

0x3594,	// (0x000814d7) cale_month_pane_g2_ParamLimits

0x3594,	// (0x000814d7) cale_month_pane_g2

0x35cc,	// (0x0008150f) cale_month_pane_g3_ParamLimits

0x35cc,	// (0x0008150f) cale_month_pane_g3

0x3620,	// (0x00081563) cale_month_pane_g4_ParamLimits

0x3620,	// (0x00081563) cale_month_pane_g4

0x3674,	// (0x000815b7) cale_month_pane_g5_ParamLimits

0x3674,	// (0x000815b7) cale_month_pane_g5

0x36c8,	// (0x0008160b) cale_month_pane_g6_ParamLimits

0x36c8,	// (0x0008160b) cale_month_pane_g6

0x372c,	// (0x0008166f) cale_month_pane_g7_ParamLimits

0x372c,	// (0x0008166f) cale_month_pane_g7

0x3790,	// (0x000816d3) cale_month_pane_g8_ParamLimits

0x3790,	// (0x000816d3) cale_month_pane_g8

0x37f4,	// (0x00081737) cale_month_pane_g9_ParamLimits

0x37f4,	// (0x00081737) cale_month_pane_g9

0x384e,	// (0x00081791) cale_month_pane_g10_ParamLimits

0x384e,	// (0x00081791) cale_month_pane_g10

0x38a0,	// (0x000817e3) cale_month_pane_g11_ParamLimits

0x38a0,	// (0x000817e3) cale_month_pane_g11

0x38ee,	// (0x00081831) cale_month_pane_g12_ParamLimits

0x38ee,	// (0x00081831) cale_month_pane_g12

0x393e,	// (0x00081881) cale_month_pane_g13_ParamLimits

0x393e,	// (0x00081881) cale_month_pane_g13

0x000c,

0xf270,	// (0x0008d1b3) cale_month_pane_g_ParamLimits

0xf270,	// (0x0008d1b3) cale_month_pane_g

0x398e,	// (0x000818d1) cale_month_week_pane

0x39ae,	// (0x000818f1) grid_cale_month_pane_ParamLimits

0x39ae,	// (0x000818f1) grid_cale_month_pane

0x3a07,	// (0x0008194a) cale_month_day_heading_pane_t1

0x3a89,	// (0x000819cc) cale_month_day_heading_pane_t2

0x3b02,	// (0x00081a45) cale_month_day_heading_pane_t3

0x3b7b,	// (0x00081abe) cale_month_day_heading_pane_t4

0x3bf4,	// (0x00081b37) cale_month_day_heading_pane_t5

0x3c75,	// (0x00081bb8) cale_month_day_heading_pane_t6

0x3cfe,	// (0x00081c41) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0008d1ce) cale_month_day_heading_pane_t

0xaad9,	// (0x00088a1c) bg_cale_side_pane_cp01

0x3d87,	// (0x00081cca) cale_month_week_pane_t1

0x3da0,	// (0x00081ce3) cale_month_week_pane_t2

0x3db9,	// (0x00081cfc) cale_month_week_pane_t3

0x3dd2,	// (0x00081d15) cale_month_week_pane_t4

0x3deb,	// (0x00081d2e) cale_month_week_pane_t5

0x3e08,	// (0x00081d4b) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0008d1dd) cale_month_week_pane_t

0x3e2b,	// (0x00081d6e) cell_cale_month_pane_ParamLimits

0x3e2b,	// (0x00081d6e) cell_cale_month_pane

0x3f59,	// (0x00081e9c) cell_cale_month_pane_g1

0x3f65,	// (0x00081ea8) cell_cale_month_pane_t1_ParamLimits

0x3f65,	// (0x00081ea8) cell_cale_month_pane_t1

0xab24,	// (0x00088a67) grid_highlight_pane_cp08

0xa9e1,	// (0x00088924) main_smil_g1

0x3f91,	// (0x00081ed4) smil_status_pane

0xaeb9,	// (0x00088dfc) smil_text_pane

0xc83f,	// (0x0008a782) bg_popup_call3_rect_pane_g8

0xc847,	// (0x0008a78a) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0008d496) bg_popup_call3_rect_pane_g

0xcaa5,	// (0x0008a9e8) smil_status_volume_pane_g1

0xaec3,	// (0x00088e06) smil_status_pane_t1

0x5309,	// (0x0008324c) volume_smil_pane

0xaeda,	// (0x00088e1d) list_smil_text_pane

0x3fa4,	// (0x00081ee7) scroll_pane_cp011

0x3faf,	// (0x00081ef2) smil_text_list_pane_t1_ParamLimits

0x3faf,	// (0x00081ef2) smil_text_list_pane_t1

0x4003,	// (0x00081f46) aid_volume_smil_ParamLimits

0x4003,	// (0x00081f46) aid_volume_smil

0xa9e1,	// (0x00088924) smil_volume_pane_g1

0xa9e1,	// (0x00088924) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0008d1fd) smil_volume_pane_g

0x258e,	// (0x000804d1) listscroll_cale_day_pane

0xaee4,	// (0x00088e27) bg_cale_pane

0xaefc,	// (0x00088e3f) list_cale_pane

0xaf1f,	// (0x00088e62) scroll_pane_cp09

0xaf30,	// (0x00088e73) cale_bg_pane_g1

0xaf38,	// (0x00088e7b) cale_bg_pane_g2

0xaf40,	// (0x00088e83) cale_bg_pane_g3

0xaf48,	// (0x00088e8b) cale_bg_pane_g4

0xaf50,	// (0x00088e93) cale_bg_pane_g5

0xaf58,	// (0x00088e9b) cale_bg_pane_g6

0xaf60,	// (0x00088ea3) cale_bg_pane_g7

0xaf68,	// (0x00088eab) cale_bg_pane_g8

0xaf97,	// (0x00088eda) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0008d202) cale_bg_pane_g

0x402d,	// (0x00081f70) list_cale_time_pane_ParamLimits

0x402d,	// (0x00081f70) list_cale_time_pane

0xaf9f,	// (0x00088ee2) list_cale_time_pane_g1_ParamLimits

0xaf9f,	// (0x00088ee2) list_cale_time_pane_g1

0xafab,	// (0x00088eee) list_cale_time_pane_g2_ParamLimits

0xafab,	// (0x00088eee) list_cale_time_pane_g2

0x4044,	// (0x00081f87) list_cale_time_pane_g3_ParamLimits

0x4044,	// (0x00081f87) list_cale_time_pane_g3

0x4052,	// (0x00081f95) list_cale_time_pane_g4_ParamLimits

0x4052,	// (0x00081f95) list_cale_time_pane_g4

0x4060,	// (0x00081fa3) list_cale_time_pane_g5_ParamLimits

0x4060,	// (0x00081fa3) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0008d215) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0008d215) list_cale_time_pane_g

0xafc5,	// (0x00088f08) list_cale_time_pane_t1_ParamLimits

0xafc5,	// (0x00088f08) list_cale_time_pane_t1

0xafed,	// (0x00088f30) list_cale_time_pane_t2_ParamLimits

0xafed,	// (0x00088f30) list_cale_time_pane_t2

0x4343,	// (0x00082286) aid_blid_cardinal_pane

0x4385,	// (0x000822c8) compass_pane_t4

0xb015,	// (0x00088f58) list_cale_time_pane_t4_ParamLimits

0xb015,	// (0x00088f58) list_cale_time_pane_t4

0x4393,	// (0x000822d6) compass_pane_t5

0x43a3,	// (0x000822e6) compass_pane_t6

0x43b1,	// (0x000822f4) compass_pane_t7

0xb4a7,	// (0x000893ea) navi_pane_cc_t1

0xb686,	// (0x000895c9) aid_phob_thumbnail_center_pane

0x49de,	// (0x00082921) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0008d222) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0008d222) list_cale_time_pane_t

0xa2c3,	// (0x00088206) bg_popup_window_pane_cp02_ParamLimits

0xa2c3,	// (0x00088206) bg_popup_window_pane_cp02

0xb03d,	// (0x00088f80) heading_pane_cp01_ParamLimits

0xb03d,	// (0x00088f80) heading_pane_cp01

0xb049,	// (0x00088f8c) loc_req_pane_ParamLimits

0xb049,	// (0x00088f8c) loc_req_pane

0xb059,	// (0x00088f9c) loc_type_pane_ParamLimits

0xb059,	// (0x00088f9c) loc_type_pane

0xb06b,	// (0x00088fae) loc_type_pane_t1_ParamLimits

0xb06b,	// (0x00088fae) loc_type_pane_t1

0xb07d,	// (0x00088fc0) loc_type_pane_t2_ParamLimits

0xb07d,	// (0x00088fc0) loc_type_pane_t2

0xb08f,	// (0x00088fd2) loc_type_pane_t3_ParamLimits

0xb08f,	// (0x00088fd2) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0008d229) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0008d229) loc_type_pane_t

0xb0a1,	// (0x00088fe4) list_loc_req_pane

0xb0ab,	// (0x00088fee) scroll_pane_cp012

0x406e,	// (0x00081fb1) list_single_loc_request_popup_menu_pane_ParamLimits

0x406e,	// (0x00081fb1) list_single_loc_request_popup_menu_pane

0xb0b6,	// (0x00088ff9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb0b6,	// (0x00088ff9) list_single_loc_request_popup_menu_pane_g1

0xb0c2,	// (0x00089005) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb0c2,	// (0x00089005) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0008d230) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0008d230) list_single_loc_request_popup_menu_pane_g

0xb0ce,	// (0x00089011) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb0ce,	// (0x00089011) list_single_loc_request_popup_menu_pane_t1

0x4080,	// (0x00081fc3) bg_popup_window_pane_cp03_ParamLimits

0x4080,	// (0x00081fc3) bg_popup_window_pane_cp03

0x408e,	// (0x00081fd1) heading_loc_req_pane_ParamLimits

0x408e,	// (0x00081fd1) heading_loc_req_pane

0x409a,	// (0x00081fdd) popup_dyc_status_message_window_g1_ParamLimits

0x409a,	// (0x00081fdd) popup_dyc_status_message_window_g1

0x40a6,	// (0x00081fe9) popup_dyc_status_message_window_t1_ParamLimits

0x40a6,	// (0x00081fe9) popup_dyc_status_message_window_t1

0x40b8,	// (0x00081ffb) popup_dyc_status_message_window_t2_ParamLimits

0x40b8,	// (0x00081ffb) popup_dyc_status_message_window_t2

0x40ca,	// (0x0008200d) popup_dyc_status_message_window_t3_ParamLimits

0x40ca,	// (0x0008200d) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0008d235) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0008d235) popup_dyc_status_message_window_t

0xa66c,	// (0x000885af) bg_heading_pane_cp01

0xb0e4,	// (0x00089027) heading_loc_req_pane_g1

0xb0ec,	// (0x0008902f) heading_loc_req_pane_g2

0xb0f4,	// (0x00089037) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0008d23c) heading_loc_req_pane_g

0xb0fc,	// (0x0008903f) heading_loc_req_pane_t1

0xb10c,	// (0x0008904f) bg_popup_sub_pane_cp01_ParamLimits

0xb10c,	// (0x0008904f) bg_popup_sub_pane_cp01

0xb11a,	// (0x0008905d) popup_cale_events_window_g1_ParamLimits

0xb11a,	// (0x0008905d) popup_cale_events_window_g1

0xb13a,	// (0x0008907d) popup_cale_events_window_g2_ParamLimits

0xb13a,	// (0x0008907d) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0008d270) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0008d270) popup_cale_events_window_g

0xb15a,	// (0x0008909d) popup_cale_events_window_t1_ParamLimits

0xb15a,	// (0x0008909d) popup_cale_events_window_t1

0xb16c,	// (0x000890af) popup_cale_events_window_t2_ParamLimits

0xb16c,	// (0x000890af) popup_cale_events_window_t2

0xb1aa,	// (0x000890ed) popup_cale_events_window_t3_ParamLimits

0xb1aa,	// (0x000890ed) popup_cale_events_window_t3

0xb1e4,	// (0x00089127) popup_cale_events_window_t4_ParamLimits

0xb1e4,	// (0x00089127) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0008d275) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0008d275) popup_cale_events_window_t

0x40f4,	// (0x00082037) call_type_pane

0xb412,	// (0x00089355) popup_call_status_window_g1

0x4100,	// (0x00082043) popup_call_status_window_g2

0x410c,	// (0x0008204f) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0008d27e) popup_call_status_window_g

0xb21a,	// (0x0008915d) call_type_pane_g1

0xb223,	// (0x00089166) call_type_pane_g2

0x0001,

0xf342,	// (0x0008d285) call_type_pane_g

0xa66c,	// (0x000885af) bg_popup_sub_pane_cp02

0xb22c,	// (0x0008916f) listscroll_popup_wml_pane

0xb234,	// (0x00089177) list_wml_pane

0xb23e,	// (0x00089181) scroll_pane_cp013

0xb249,	// (0x0008918c) list_single_graphic_popup_wml_pane_ParamLimits

0xb249,	// (0x0008918c) list_single_graphic_popup_wml_pane

0xa9e1,	// (0x00088924) list_single_graphic_popup_wml_pane_g1

0xb25d,	// (0x000891a0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0008d28a) list_single_graphic_popup_wml_pane_g

0xb265,	// (0x000891a8) list_single_graphic_popup_wml_pane_t1

0xb27b,	// (0x000891be) aid_call_pane

0xa8bf,	// (0x00088802) popup_clock_analogue_window_g1

0xa8bf,	// (0x00088802) popup_clock_analogue_window_g2

0x4118,	// (0x0008205b) popup_clock_analogue_window_g3

0x4118,	// (0x0008205b) popup_clock_analogue_window_g4

0xa9e1,	// (0x00088924) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0008d28f) popup_clock_analogue_window_g

0x4120,	// (0x00082063) popup_clock_analogue_window_t1

0x412e,	// (0x00082071) clock_digital_number_pane_ParamLimits

0x412e,	// (0x00082071) clock_digital_number_pane

0x413a,	// (0x0008207d) clock_digital_number_pane_cp02_ParamLimits

0x413a,	// (0x0008207d) clock_digital_number_pane_cp02

0x4146,	// (0x00082089) clock_digital_number_pane_cp03_ParamLimits

0x4146,	// (0x00082089) clock_digital_number_pane_cp03

0x4152,	// (0x00082095) clock_digital_number_pane_cp04_ParamLimits

0x4152,	// (0x00082095) clock_digital_number_pane_cp04

0x415e,	// (0x000820a1) clock_digital_separator_pane_ParamLimits

0x415e,	// (0x000820a1) clock_digital_separator_pane

0x416a,	// (0x000820ad) popup_clock_digital_window_t1

0xa9e1,	// (0x00088924) clock_digital_number_pane_g1

0xa9e1,	// (0x00088924) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0008d1fd) clock_digital_number_pane_g

0xa9e1,	// (0x00088924) clock_digital_separator_pane_g1

0xa9e1,	// (0x00088924) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0008d1fd) clock_digital_separator_pane_g

0xa66c,	// (0x000885af) bg_popup_window_pane_cp04

0xb283,	// (0x000891c6) heading_pane_cp03

0xb28b,	// (0x000891ce) listscroll_popup_gms_pane

0xb293,	// (0x000891d6) grid_large_graphic_popup_pane

0xb29d,	// (0x000891e0) listscroll_popup_gms_pane_g1

0xb2a5,	// (0x000891e8) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0008d29a) listscroll_popup_gms_pane_g

0xad1e,	// (0x00088c61) scroll_pane_cp014

0x4187,	// (0x000820ca) cell_large_graphic_popup_pane_ParamLimits

0x4187,	// (0x000820ca) cell_large_graphic_popup_pane

0x41a1,	// (0x000820e4) cell_large_graphic_popup_pane_g1_ParamLimits

0x41a1,	// (0x000820e4) cell_large_graphic_popup_pane_g1

0xb2ad,	// (0x000891f0) cell_large_graphic_popup_pane_g2_ParamLimits

0xb2ad,	// (0x000891f0) cell_large_graphic_popup_pane_g2

0xb2b9,	// (0x000891fc) cell_large_graphic_popup_pane_g3_ParamLimits

0xb2b9,	// (0x000891fc) cell_large_graphic_popup_pane_g3

0xb2c6,	// (0x00089209) cell_large_graphic_popup_pane_g4_ParamLimits

0xb2c6,	// (0x00089209) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0008d29f) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0008d29f) cell_large_graphic_popup_pane_g

0xb2d6,	// (0x00089219) grid_highlight_pane_cp010

0xa9e1,	// (0x00088924) bg_popup_call_pane_g1

0xb2e0,	// (0x00089223) list_single_graphic_popup_conf_pane_ParamLimits

0xb2e0,	// (0x00089223) list_single_graphic_popup_conf_pane

0xb2f2,	// (0x00089235) list_highlight_pane_cp01

0xb2fb,	// (0x0008923e) list_single_graphic_popup_conf_pane_g1

0xb303,	// (0x00089246) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0008d2a8) list_single_graphic_popup_conf_pane_g

0xb30b,	// (0x0008924e) list_single_graphic_popup_conf_pane_t1

0xb319,	// (0x0008925c) linegrid_cams_pane_g1

0x41ad,	// (0x000820f0) linegrid_cams_pane_g2

0xab57,	// (0x00088a9a) linegrid_cams_pane_g3

0xb322,	// (0x00089265) linegrid_cams_pane_g4

0x41b6,	// (0x000820f9) linegrid_cams_pane_g5

0x41bf,	// (0x00082102) linegrid_cams_pane_g6

0xab60,	// (0x00088aa3) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0008d2ad) linegrid_cams_pane_g

0xb32b,	// (0x0008926e) popup_clock_analogue_window

0xb32b,	// (0x0008926e) popup_clock_digital_window

0xa66c,	// (0x000885af) popup_phob_thumbnail_window

0xa9e1,	// (0x00088924) call_video_uplink_pane_g1

0xb334,	// (0x00089277) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0008d2bc) call_video_uplink_pane_g

0xb33c,	// (0x0008927f) video_uplink_pane

0xb344,	// (0x00089287) mce_image_pane_g1

0x41ca,	// (0x0008210d) mce_image_pane_g2

0x41d4,	// (0x00082117) mce_image_pane_g3

0x41de,	// (0x00082121) mce_image_pane_g4

0x41e6,	// (0x00082129) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0008d2c1) mce_image_pane_g

0xb34e,	// (0x00089291) control_top_pane_stacon_cp01_ParamLimits

0xb34e,	// (0x00089291) control_top_pane_stacon_cp01

0xb362,	// (0x000892a5) uni_indicator_pane_stacon_cp01_ParamLimits

0xb362,	// (0x000892a5) uni_indicator_pane_stacon_cp01

0xb373,	// (0x000892b6) bg_popup_sub_pane_cp03

0x41ee,	// (0x00082131) chi_dic_find_pane

0x41f6,	// (0x00082139) listscroll_chi_dic_pane

0x41ff,	// (0x00082142) main_pane_chidic_g1

0x4212,	// (0x00082155) chi_dic_find_pane_t1

0xb37d,	// (0x000892c0) find_chidic_pane

0xb386,	// (0x000892c9) chi_dic_list_pane_ParamLimits

0xb386,	// (0x000892c9) chi_dic_list_pane

0xb397,	// (0x000892da) scroll_pane_cp020

0x4220,	// (0x00082163) find_chidic_pane_t1

0xa66c,	// (0x000885af) input_focus_pane_cp06

0xaf70,	// (0x00088eb3) list_chi_dic_pane_ParamLimits

0xaf70,	// (0x00088eb3) list_chi_dic_pane

0x422f,	// (0x00082172) list_chi_dic_pane_t1_ParamLimits

0x422f,	// (0x00082172) list_chi_dic_pane_t1

0xa66c,	// (0x000885af) list_highlight_pane_cp020

0xb39f,	// (0x000892e2) bg_cale_heading_pane_g1

0x4242,	// (0x00082185) bg_cale_heading_pane_g2

0x424a,	// (0x0008218d) bg_cale_heading_pane_g3

0x4252,	// (0x00082195) bg_cale_heading_pane_g4

0x425c,	// (0x0008219f) bg_cale_heading_pane_g5

0x4266,	// (0x000821a9) bg_cale_heading_pane_g6

0x426e,	// (0x000821b1) bg_cale_heading_pane_g7

0x4276,	// (0x000821b9) bg_cale_heading_pane_g8

0x4280,	// (0x000821c3) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0008d2cc) bg_cale_heading_pane_g

0xb39f,	// (0x000892e2) bg_cale_side_pane_g1

0x428a,	// (0x000821cd) bg_cale_side_pane_g2

0x4294,	// (0x000821d7) bg_cale_side_pane_g3

0x429e,	// (0x000821e1) bg_cale_side_pane_g4

0x42a8,	// (0x000821eb) bg_cale_side_pane_g5

0x42b2,	// (0x000821f5) bg_cale_side_pane_g6

0x42bc,	// (0x000821ff) bg_cale_side_pane_g7

0x42c6,	// (0x00082209) bg_cale_side_pane_g8

0x42ce,	// (0x00082211) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0008d2df) bg_cale_side_pane_g

0x42d6,	// (0x00082219) popup_call_status_window_ParamLimits

0x42d6,	// (0x00082219) popup_call_status_window

0xb3a7,	// (0x000892ea) stacon_top_pane

0xb3af,	// (0x000892f2) status_pane_ParamLimits

0xb3af,	// (0x000892f2) status_pane

0xb3c4,	// (0x00089307) status_small_pane

0xb3cc,	// (0x0008930f) control_pane

0xa66c,	// (0x000885af) stacon_bottom_pane

0xb3d4,	// (0x00089317) list_single_mce_smart_pane_t1_ParamLimits

0xb3d4,	// (0x00089317) list_single_mce_smart_pane_t1

0xb3e7,	// (0x0008932a) list_single_mce_smart_pane_t2_ParamLimits

0xb3e7,	// (0x0008932a) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0008d2f2) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0008d2f2) list_single_mce_smart_pane_t

0x42e2,	// (0x00082225) compass_pane

0x42ed,	// (0x00082230) main_location2_pane_t1

0x4303,	// (0x00082246) main_location2_pane_t2

0x4319,	// (0x0008225c) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0008d2f7) main_location2_pane_t

0xb420,	// (0x00089363) compass_pane_g1_ParamLimits

0xb420,	// (0x00089363) compass_pane_g1

0x4367,	// (0x000822aa) compass_pane_t1

0x4376,	// (0x000822b9) compass_pane_t2

0x0005,

0xf3bd,	// (0x0008d300) compass_pane_t

0x43c1,	// (0x00082304) text_secondary_cp61

0xb49e,	// (0x000893e1) navi_pane_cams_g5

0xb51a,	// (0x0008945d) navi_pane_im_t1

0xb528,	// (0x0008946b) navi_pane_mp_g1_ParamLimits

0xb528,	// (0x0008946b) navi_pane_mp_g1

0xb53c,	// (0x0008947f) navi_pane_mp_g2_ParamLimits

0xb53c,	// (0x0008947f) navi_pane_mp_g2

0xb548,	// (0x0008948b) navi_pane_mp_g3_ParamLimits

0xb548,	// (0x0008948b) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0008d314) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0008d314) navi_pane_mp_g

0xb554,	// (0x00089497) navi_pane_mp_t1

0xb562,	// (0x000894a5) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0008d31b) navi_pane_mp_t

0xb5cf,	// (0x00089512) navi_pane_vt_g1

0xb554,	// (0x00089497) navi_pane_vt_t1

0xb5d7,	// (0x0008951a) navi_slider_pane

0xab71,	// (0x00088ab4) zooming_pane

0xb5e7,	// (0x0008952a) navi_slider_pane_g1

0x43fc,	// (0x0008233f) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0008d322) navi_slider_pane_g

0xb60b,	// (0x0008954e) aid_levels_zoom

0xb613,	// (0x00089556) zooming_pane_g1

0xb61b,	// (0x0008955e) zooming_pane_g2

0xb61b,	// (0x0008955e) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0008d331) zooming_pane_g

0xb623,	// (0x00089566) level_10_zoom

0xb62c,	// (0x0008956f) level_11_zoom

0xb635,	// (0x00089578) level_1_zoom

0xb63e,	// (0x00089581) level_2_zoom

0xb647,	// (0x0008958a) level_3_zoom

0xb650,	// (0x00089593) level_4_zoom

0xb659,	// (0x0008959c) level_5_zoom

0xb662,	// (0x000895a5) level_6_zoom

0xb66b,	// (0x000895ae) level_7_zoom

0xb674,	// (0x000895b7) level_8_zoom

0xb67d,	// (0x000895c0) level_9_zoom

0xb68e,	// (0x000895d1) popup_phob_thumbnail_window_g1

0xb696,	// (0x000895d9) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0008d338) popup_phob_thumbnail_window_g

0xc9a5,	// (0x0008a8e8) level_1_location

0xc9ad,	// (0x0008a8f0) level_2_location

0xc9b5,	// (0x0008a8f8) level_3_location

0xc9bd,	// (0x0008a900) level_4_location

0xab71,	// (0x00088ab4) level_5_location

0x440e,	// (0x00082351) mce_icon_pane_g1

0x4416,	// (0x00082359) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0008d33d) mce_icon_pane_g

0x441e,	// (0x00082361) main_mup_pane_g1_ParamLimits

0x441e,	// (0x00082361) main_mup_pane_g1

0x4436,	// (0x00082379) main_mup_pane_g2_ParamLimits

0x4436,	// (0x00082379) main_mup_pane_g2

0x4452,	// (0x00082395) main_mup_pane_g3_ParamLimits

0x4452,	// (0x00082395) main_mup_pane_g3

0x446e,	// (0x000823b1) main_mup_pane_g4_ParamLimits

0x446e,	// (0x000823b1) main_mup_pane_g4

0x4482,	// (0x000823c5) main_mup_pane_g5_ParamLimits

0x4482,	// (0x000823c5) main_mup_pane_g5

0x44a3,	// (0x000823e6) main_mup_pane_g6_ParamLimits

0x44a3,	// (0x000823e6) main_mup_pane_g6

0x44c3,	// (0x00082406) main_mup_pane_g7_ParamLimits

0x44c3,	// (0x00082406) main_mup_pane_g7

0x44e7,	// (0x0008242a) main_mup_pane_g8_ParamLimits

0x44e7,	// (0x0008242a) main_mup_pane_g8

0x450b,	// (0x0008244e) main_mup_pane_g9_ParamLimits

0x450b,	// (0x0008244e) main_mup_pane_g9

0x452e,	// (0x00082471) main_mup_pane_g10_ParamLimits

0x452e,	// (0x00082471) main_mup_pane_g10

0x4551,	// (0x00082494) main_mup_pane_g11_ParamLimits

0x4551,	// (0x00082494) main_mup_pane_g11

0x4571,	// (0x000824b4) main_mup_pane_g12_ParamLimits

0x4571,	// (0x000824b4) main_mup_pane_g12

0x457f,	// (0x000824c2) main_mup_pane_g13_ParamLimits

0x457f,	// (0x000824c2) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0008d342) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0008d342) main_mup_pane_g

0x4595,	// (0x000824d8) main_mup_pane_t1_ParamLimits

0x4595,	// (0x000824d8) main_mup_pane_t1

0x45b4,	// (0x000824f7) main_mup_pane_t2_ParamLimits

0x45b4,	// (0x000824f7) main_mup_pane_t2

0x45ce,	// (0x00082511) main_mup_pane_t3_ParamLimits

0x45ce,	// (0x00082511) main_mup_pane_t3

0x45e8,	// (0x0008252b) main_mup_pane_t4_ParamLimits

0x45e8,	// (0x0008252b) main_mup_pane_t4

0x45fa,	// (0x0008253d) main_mup_pane_t5_ParamLimits

0x45fa,	// (0x0008253d) main_mup_pane_t5

0x460c,	// (0x0008254f) main_mup_pane_t6_ParamLimits

0x460c,	// (0x0008254f) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0008d35d) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0008d35d) main_mup_pane_t

0x4622,	// (0x00082565) mup_progress_pane_ParamLimits

0x4622,	// (0x00082565) mup_progress_pane

0x462e,	// (0x00082571) mup_visualizer_pane_ParamLimits

0x462e,	// (0x00082571) mup_visualizer_pane

0x466c,	// (0x000825af) mup_volume_pane_ParamLimits

0x466c,	// (0x000825af) mup_volume_pane

0xb412,	// (0x00089355) mup_visualizer_pane_g1_ParamLimits

0xb412,	// (0x00089355) mup_visualizer_pane_g1

0xb412,	// (0x00089355) mup_visualizer_pane_g2_ParamLimits

0xb412,	// (0x00089355) mup_visualizer_pane_g2

0xb420,	// (0x00089363) mup_visualizer_pane_g3_ParamLimits

0xb420,	// (0x00089363) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0008d36a) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0008d36a) mup_visualizer_pane_g

0xa9e1,	// (0x00088924) mup_volume_pane_g1

0xb6a6,	// (0x000895e9) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0008d371) mup_volume_pane_g

0xa9e1,	// (0x00088924) mup_progress_pane_g1

0xb6af,	// (0x000895f2) mup_progress_pane_g2

0xb6b8,	// (0x000895fb) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0008d376) mup_progress_pane_g

0xa66c,	// (0x000885af) bg_popup_window_pane_cp05

0xb6c1,	// (0x00089604) heading_pane_cp02_ParamLimits

0xb6c1,	// (0x00089604) heading_pane_cp02

0xb6dd,	// (0x00089620) list_popup_blid_pane

0xb6e5,	// (0x00089628) list_blid_sat_info_pane_ParamLimits

0xb6e5,	// (0x00089628) list_blid_sat_info_pane

0xb6f8,	// (0x0008963b) list_blid_sat_info_pane_g1

0xb700,	// (0x00089643) list_blid_sat_info_pane_t1

0x478b,	// (0x000826ce) mup_equalizer_pane_ParamLimits

0x478b,	// (0x000826ce) mup_equalizer_pane

0x47ac,	// (0x000826ef) mup_equalizer_pane_cp1_ParamLimits

0x47ac,	// (0x000826ef) mup_equalizer_pane_cp1

0x47cd,	// (0x00082710) mup_equalizer_pane_cp2_ParamLimits

0x47cd,	// (0x00082710) mup_equalizer_pane_cp2

0x47ee,	// (0x00082731) mup_equalizer_pane_cp3_ParamLimits

0x47ee,	// (0x00082731) mup_equalizer_pane_cp3

0x4813,	// (0x00082756) mup_equalizer_pane_cp4_ParamLimits

0x4813,	// (0x00082756) mup_equalizer_pane_cp4

0x4838,	// (0x0008277b) mup_equalizer_pane_cp5

0x4850,	// (0x00082793) mup_equalizer_pane_cp6

0x4868,	// (0x000827ab) mup_equalizer_pane_cp7

0xc8bf,	// (0x0008a802) bg_popup_call_poc_act_pane_g9

0xc8c7,	// (0x0008a80a) bg_popup_call_poc_act_pane_g10

0xc8cf,	// (0x0008a812) bg_popup_call_poc_act_pane_g11

0x000a,

0xa8c7,	// (0x0008880a) mup_scale_pane

0xa9e1,	// (0x00088924) mup_scale_pane_g1

0xb70e,	// (0x00089651) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0008d392) mup_scale_pane_g

0xb732,	// (0x00089675) msg_data_pane

0xb73a,	// (0x0008967d) scroll_pane_cp017

0x0c85,	// (0x0007ebc8) bg_list_pane_cp04_ParamLimits

0x0c85,	// (0x0007ebc8) bg_list_pane_cp04

0xb742,	// (0x00089685) msg_data_pane_g1

0x4892,	// (0x000827d5) msg_data_pane_g2

0x489c,	// (0x000827df) msg_data_pane_g3

0x48a6,	// (0x000827e9) msg_data_pane_g4

0x48ae,	// (0x000827f1) msg_data_pane_g5

0x48b6,	// (0x000827f9) msg_data_pane_g6

0x48be,	// (0x00082801) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0008d3a1) msg_data_pane_g

0x0cad,	// (0x0007ebf0) msg_text_pane_ParamLimits

0x0cad,	// (0x0007ebf0) msg_text_pane

0x48c6,	// (0x00082809) qrid_highlight_pane_cp011_ParamLimits

0x48c6,	// (0x00082809) qrid_highlight_pane_cp011

0xa66c,	// (0x000885af) msg_body_pane

0xa66c,	// (0x000885af) msg_header_pane

0xb753,	// (0x00089696) input_focus_pane_cp07

0x0cea,	// (0x0007ec2d) msg_header_pane_t1_ParamLimits

0x0cea,	// (0x0007ec2d) msg_header_pane_t1

0x0cfc,	// (0x0007ec3f) msg_header_pane_t2_ParamLimits

0x0cfc,	// (0x0007ec3f) msg_header_pane_t2

0x0001,

0xf472,	// (0x0008d3b5) msg_header_pane_t_ParamLimits

0xf472,	// (0x0008d3b5) msg_header_pane_t

0xb768,	// (0x000896ab) msg_body_pane_g1

0x0d0e,	// (0x0007ec51) msg_body_pane_t1_ParamLimits

0x0d0e,	// (0x0007ec51) msg_body_pane_t1

0x0d3f,	// (0x0007ec82) msg_body_pane_t2_ParamLimits

0x0d3f,	// (0x0007ec82) msg_body_pane_t2

0x0d51,	// (0x0007ec94) msg_body_pane_t3_ParamLimits

0x0d51,	// (0x0007ec94) msg_body_pane_t3

0x0002,

0xf477,	// (0x0008d3ba) msg_body_pane_t_ParamLimits

0xf477,	// (0x0008d3ba) msg_body_pane_t

0x492e,	// (0x00082871) main_viewer_pane_g1_ParamLimits

0x492e,	// (0x00082871) main_viewer_pane_g1

0x493a,	// (0x0008287d) main_viewer_pane_g2_ParamLimits

0x493a,	// (0x0008287d) main_viewer_pane_g2

0x4946,	// (0x00082889) main_viewer_pane_g3_ParamLimits

0x4946,	// (0x00082889) main_viewer_pane_g3

0x4957,	// (0x0008289a) main_viewer_pane_g4_ParamLimits

0x4957,	// (0x0008289a) main_viewer_pane_g4

0x4968,	// (0x000828ab) main_viewer_pane_g5_ParamLimits

0x4968,	// (0x000828ab) main_viewer_pane_g5

0x4968,	// (0x000828ab) main_viewer_pane_g7_ParamLimits

0x4968,	// (0x000828ab) main_viewer_pane_g7

0x497a,	// (0x000828bd) main_viewer_pane_g8_ParamLimits

0x497a,	// (0x000828bd) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0008d3ca) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0008d3ca) main_viewer_pane_g

0xb770,	// (0x000896b3) viewer_content_pane_ParamLimits

0xb770,	// (0x000896b3) viewer_content_pane

0x49b2,	// (0x000828f5) main_postcard_pane_g1_ParamLimits

0x49b2,	// (0x000828f5) main_postcard_pane_g1

0x49c0,	// (0x00082903) main_postcard_pane_g2_ParamLimits

0x49c0,	// (0x00082903) main_postcard_pane_g2

0x49ce,	// (0x00082911) main_postcard_pane_g3_ParamLimits

0x49ce,	// (0x00082911) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0008d3db) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0008d3db) main_postcard_pane_g

0x49de,	// (0x00082921) main_postcard_pane_g4

0xcab8,	// (0x0008a9fb) smil_status_volume_pane_g2

0x4a0a,	// (0x0008294d) postcard_pane_ParamLimits

0x4a0a,	// (0x0008294d) postcard_pane

0xb412,	// (0x00089355) postcard_pane_g1_ParamLimits

0xb412,	// (0x00089355) postcard_pane_g1

0x4a44,	// (0x00082987) postcard_pane_g2_ParamLimits

0x4a44,	// (0x00082987) postcard_pane_g2

0x4a50,	// (0x00082993) postcard_pane_g3_ParamLimits

0x4a50,	// (0x00082993) postcard_pane_g3

0xb77e,	// (0x000896c1) postcard_pane_g4_ParamLimits

0xb77e,	// (0x000896c1) postcard_pane_g4

0x4a5c,	// (0x0008299f) postcard_pane_g5_ParamLimits

0x4a5c,	// (0x0008299f) postcard_pane_g5

0x4a68,	// (0x000829ab) postcard_pane_g6_ParamLimits

0x4a68,	// (0x000829ab) postcard_pane_g6

0xb78c,	// (0x000896cf) postcard_pane_g7_ParamLimits

0xb78c,	// (0x000896cf) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0008d3e8) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0008d3e8) postcard_pane_g

0x4a76,	// (0x000829b9) main_mp2_pane_g1_ParamLimits

0x4a76,	// (0x000829b9) main_mp2_pane_g1

0x4a84,	// (0x000829c7) main_mp2_pane_g2_ParamLimits

0x4a84,	// (0x000829c7) main_mp2_pane_g2

0x4a90,	// (0x000829d3) main_mp2_pane_g3_ParamLimits

0x4a90,	// (0x000829d3) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0008d3f7) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0008d3f7) main_mp2_pane_g

0x4a9c,	// (0x000829df) main_mp2_pane_t1_ParamLimits

0x4a9c,	// (0x000829df) main_mp2_pane_t1

0x4ab3,	// (0x000829f6) main_mp2_pane_t2_ParamLimits

0x4ab3,	// (0x000829f6) main_mp2_pane_t2

0x4ac7,	// (0x00082a0a) main_mp2_pane_t3_ParamLimits

0x4ac7,	// (0x00082a0a) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0008d3fe) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0008d3fe) main_mp2_pane_t

0xb79a,	// (0x000896dd) pec_content_pane_ParamLimits

0xb79a,	// (0x000896dd) pec_content_pane

0xad1e,	// (0x00088c61) scroll_pane_cp015

0xb7ac,	// (0x000896ef) pec_attribute_pane_ParamLimits

0xb7ac,	// (0x000896ef) pec_attribute_pane

0x4ad9,	// (0x00082a1c) pec_content_pane_g1_ParamLimits

0x4ad9,	// (0x00082a1c) pec_content_pane_g1

0xb7bc,	// (0x000896ff) pec_content_pane_t1_ParamLimits

0xb7bc,	// (0x000896ff) pec_content_pane_t1

0xb7ce,	// (0x00089711) pec_content_pane_t2_ParamLimits

0xb7ce,	// (0x00089711) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0008d405) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0008d405) pec_content_pane_t

0x4ae5,	// (0x00082a28) list_single_graphic_pane_cp01_ParamLimits

0x4ae5,	// (0x00082a28) list_single_graphic_pane_cp01

0xa8c7,	// (0x0008880a) bg_popup_sub_pane_cp04

0xb7e0,	// (0x00089723) popup_mup_playback_window_g1

0xb7ec,	// (0x0008972f) popup_mup_playback_window_t1

0xb801,	// (0x00089744) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0008d40a) popup_mup_playback_window_t

0xb838,	// (0x0008977b) main_image_pane_g1_ParamLimits

0xb838,	// (0x0008977b) main_image_pane_g1

0xb87b,	// (0x000897be) scroll_pane_cp018_ParamLimits

0xb87b,	// (0x000897be) scroll_pane_cp018

0xb893,	// (0x000897d6) scroll_pane_cp016_ParamLimits

0xb893,	// (0x000897d6) scroll_pane_cp016

0x4b73,	// (0x00082ab6) smil2_image_pane_ParamLimits

0x4b73,	// (0x00082ab6) smil2_image_pane

0x4ba9,	// (0x00082aec) smil2_root_pane_ParamLimits

0x4ba9,	// (0x00082aec) smil2_root_pane

0x4bd5,	// (0x00082b18) smil2_text_pane_ParamLimits

0x4bd5,	// (0x00082b18) smil2_text_pane

0xa66c,	// (0x000885af) bg_list_pane_cp06

0xb8cf,	// (0x00089812) grid_radio_pane

0xa66c,	// (0x000885af) bg_popup_window_pane_cp06

0xb8d9,	// (0x0008981c) main_fmradio_pane_t1

0xb283,	// (0x000891c6) heading_pane_cp04

0xb8e7,	// (0x0008982a) main_fmradio_pane_t2

0xc8d7,	// (0x0008a81a) popup_cale_lunar_info_window_g1

0xb8f5,	// (0x00089838) main_fmradio_pane_t3

0xc8df,	// (0x0008a822) popup_cale_lunar_info_window_g2

0xb905,	// (0x00089848) main_fmradio_pane_t4

0x0001,

0xb913,	// (0x00089856) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0008d4e5) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0008d41f) main_fmradio_pane_t

0xb921,	// (0x00089864) wait_bar_pane_cp03

0xb929,	// (0x0008986c) cell_fmradio_pane_ParamLimits

0xb929,	// (0x0008986c) cell_fmradio_pane

0xb78c,	// (0x000896cf) cell_fmradio_pane_g1_ParamLimits

0xb78c,	// (0x000896cf) cell_fmradio_pane_g1

0xa66c,	// (0x000885af) grid_highlight_pane_cp011

0xb93e,	// (0x00089881) poc_content_pane_ParamLimits

0xb93e,	// (0x00089881) poc_content_pane

0xb950,	// (0x00089893) scroll_pane_cp019

0x4c15,	// (0x00082b58) popup_call_poc_act_window_ParamLimits

0x4c15,	// (0x00082b58) popup_call_poc_act_window

0x4c22,	// (0x00082b65) popup_call_poc_inact_window_ParamLimits

0x4c22,	// (0x00082b65) popup_call_poc_inact_window

0xf579,	// (0x0008d4bc) bg_popup_call_poc_act_pane_g

0xc84f,	// (0x0008a792) bg_popup_call_poc_inact_pane_g1

0xc857,	// (0x0008a79a) bg_popup_call_poc_inact_pane_g2

0xb958,	// (0x0008989b) popup_call_poc_act_window_g2

0xc85f,	// (0x0008a7a2) bg_popup_call_poc_inact_pane_g3

0xc867,	// (0x0008a7aa) bg_popup_call_poc_inact_pane_g4

0xc86f,	// (0x0008a7b2) bg_popup_call_poc_inact_pane_g5

0xb960,	// (0x000898a3) popup_call_poc_act_window_t1_ParamLimits

0xb960,	// (0x000898a3) popup_call_poc_act_window_t1

0xb988,	// (0x000898cb) popup_call_poc_act_window_t2_ParamLimits

0xb988,	// (0x000898cb) popup_call_poc_act_window_t2

0xb9b0,	// (0x000898f3) popup_call_poc_act_window_t3_ParamLimits

0xb9b0,	// (0x000898f3) popup_call_poc_act_window_t3

0xb9d8,	// (0x0008991b) popup_call_poc_act_window_t4_ParamLimits

0xb9d8,	// (0x0008991b) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0008d42a) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0008d42a) popup_call_poc_act_window_t

0xc877,	// (0x0008a7ba) bg_popup_call_poc_inact_pane_g6

0xc87f,	// (0x0008a7c2) bg_popup_call_poc_inact_pane_g7

0xc887,	// (0x0008a7ca) bg_popup_call_poc_inact_pane_g8

0xb9ea,	// (0x0008992d) popup_call_poc_inact_window_g2

0xc88f,	// (0x0008a7d2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0008d4a9) bg_popup_call_poc_inact_pane_g

0xb9f2,	// (0x00089935) popup_call_poc_inact_window_t1_ParamLimits

0xb9f2,	// (0x00089935) popup_call_poc_inact_window_t1

0xba07,	// (0x0008994a) popup_call_poc_inact_window_t2_ParamLimits

0xba07,	// (0x0008994a) popup_call_poc_inact_window_t2

0xba1c,	// (0x0008995f) popup_call_poc_inact_window_t3_ParamLimits

0xba1c,	// (0x0008995f) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0008d433) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0008d433) popup_call_poc_inact_window_t

0xca18,	// (0x0008a95b) context_pane_ParamLimits

0x5277,	// (0x000831ba) signal_pane_ParamLimits

0xab71,	// (0x00088ab4) main_call2_pane

0x51e4,	// (0x00083127) popup_phob_thumbnail2_window_ParamLimits

0x51e4,	// (0x00083127) popup_phob_thumbnail2_window

0x48dc,	// (0x0008281f) aid_hotspot_pointer_arrow_pane

0x48e4,	// (0x00082827) aid_hotspot_pointer_hand_pane

0x4f47,	// (0x00082e8a) phob_pre_status_pane_g5

0x2c82,	// (0x00080bc5) cams_zoom_pane_ParamLimits

0x2c8e,	// (0x00080bd1) image_vga_pane_ParamLimits

0x2c9d,	// (0x00080be0) main_camera_pane_g1_ParamLimits

0x2cab,	// (0x00080bee) main_camera_pane_g2_ParamLimits

0x2cb7,	// (0x00080bfa) main_camera_pane_g3_ParamLimits

0x2cc5,	// (0x00080c08) main_camera_pane_g4_ParamLimits

0x2cd3,	// (0x00080c16) main_camera_pane_g5_ParamLimits

0x2ce1,	// (0x00080c24) main_camera_pane_g6_ParamLimits

0x2cef,	// (0x00080c32) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0008d132) main_camera_pane_g_ParamLimits

0x2cfd,	// (0x00080c40) main_camera_pane_t1_ParamLimits

0x2d0f,	// (0x00080c52) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0008d143) main_camera_pane_t_ParamLimits

0xa8c7,	// (0x0008880a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa8c7,	// (0x0008880a) bg_popup_preview_window_pane_cp01

0xba31,	// (0x00089974) popup_phob_thumbnail2_window_g1_ParamLimits

0xba31,	// (0x00089974) popup_phob_thumbnail2_window_g1

0xa66c,	// (0x000885af) call2_cli_visual_pane

0x4c3e,	// (0x00082b81) popup_call2_audio_conf_window_ParamLimits

0x4c3e,	// (0x00082b81) popup_call2_audio_conf_window

0x4c57,	// (0x00082b9a) popup_call2_audio_first_window_ParamLimits

0x4c57,	// (0x00082b9a) popup_call2_audio_first_window

0x4cf5,	// (0x00082c38) popup_call2_audio_in_window_ParamLimits

0x4cf5,	// (0x00082c38) popup_call2_audio_in_window

0x4d39,	// (0x00082c7c) popup_call2_audio_out_window_ParamLimits

0x4d39,	// (0x00082c7c) popup_call2_audio_out_window

0x4da3,	// (0x00082ce6) popup_call2_audio_second_window_ParamLimits

0x4da3,	// (0x00082ce6) popup_call2_audio_second_window

0x4e01,	// (0x00082d44) popup_call2_audio_wait_window_ParamLimits

0x4e01,	// (0x00082d44) popup_call2_audio_wait_window

0xa66c,	// (0x000885af) bg_popup_call2_act_pane_cp03

0xa8a9,	// (0x000887ec) list_conf_pane_cp

0xba3d,	// (0x00089980) popup_call2_audio_conf_window_t1

0xba4b,	// (0x0008998e) list_single_graphic_popup_conf2_pane_ParamLimits

0xba4b,	// (0x0008998e) list_single_graphic_popup_conf2_pane

0xb2f2,	// (0x00089235) list_highlight_pane_cp04

0xba5e,	// (0x000899a1) list_single_graphic_popup_conf2_pane_g1

0xb303,	// (0x00089246) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0008d43a) list_single_graphic_popup_conf2_pane_g

0xba68,	// (0x000899ab) list_single_graphic_popup_conf2_pane_t1

0xba76,	// (0x000899b9) bg_popup_call2_act_pane_cp01_ParamLimits

0xba76,	// (0x000899b9) bg_popup_call2_act_pane_cp01

0xbb00,	// (0x00089a43) call_type_pane_cp05_ParamLimits

0xbb00,	// (0x00089a43) call_type_pane_cp05

0xbb54,	// (0x00089a97) popup_call2_audio_second_window_g1_ParamLimits

0xbb54,	// (0x00089a97) popup_call2_audio_second_window_g1

0xbba8,	// (0x00089aeb) popup_call2_audio_second_window_g2_ParamLimits

0xbba8,	// (0x00089aeb) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0008d43f) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0008d43f) popup_call2_audio_second_window_g

0xbc0d,	// (0x00089b50) popup_call2_audio_second_window_t1_ParamLimits

0xbc0d,	// (0x00089b50) popup_call2_audio_second_window_t1

0xbcc8,	// (0x00089c0b) popup_call2_audio_second_window_t2_ParamLimits

0xbcc8,	// (0x00089c0b) popup_call2_audio_second_window_t2

0xbd1b,	// (0x00089c5e) popup_call2_audio_second_window_t3_ParamLimits

0xbd1b,	// (0x00089c5e) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0008d446) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0008d446) popup_call2_audio_second_window_t

0xa66c,	// (0x000885af) bg_popup_call2_in_pane_cp02

0xa676,	// (0x000885b9) call_type_pane_cp04

0xa67e,	// (0x000885c1) popup_call2_audio_wait_window_g1

0xa686,	// (0x000885c9) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0008d021) popup_call2_audio_wait_window_g

0xa68e,	// (0x000885d1) popup_call2_audio_wait_window_t3

0xbe0e,	// (0x00089d51) bg_popup_call2_act_pane_ParamLimits

0xbe0e,	// (0x00089d51) bg_popup_call2_act_pane

0xbece,	// (0x00089e11) call_type_pane_cp03_ParamLimits

0xbece,	// (0x00089e11) call_type_pane_cp03

0xbf32,	// (0x00089e75) popup_call2_audio_first_window_g1_ParamLimits

0xbf32,	// (0x00089e75) popup_call2_audio_first_window_g1

0xbfa2,	// (0x00089ee5) popup_call2_audio_first_window_g2_ParamLimits

0xbfa2,	// (0x00089ee5) popup_call2_audio_first_window_g2

0xb412,	// (0x00089355) popup_call2_audio_first_window_g3_ParamLimits

0xb412,	// (0x00089355) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0008d44f) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0008d44f) popup_call2_audio_first_window_g

0xc080,	// (0x00089fc3) popup_call2_audio_first_window_t1_ParamLimits

0xc080,	// (0x00089fc3) popup_call2_audio_first_window_t1

0xc19d,	// (0x0008a0e0) popup_call2_audio_first_window_t4_ParamLimits

0xc19d,	// (0x0008a0e0) popup_call2_audio_first_window_t4

0xc280,	// (0x0008a1c3) popup_call2_audio_first_window_t5_ParamLimits

0xc280,	// (0x0008a1c3) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0008d45a) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0008d45a) popup_call2_audio_first_window_t

0xa8bf,	// (0x00088802) bg_popup_call2_act_pane_g1

0xc8e9,	// (0x0008a82c) popup_cale_lunar_info_window_t1

0xc8f7,	// (0x0008a83a) popup_cale_lunar_info_window_t2

0xc905,	// (0x0008a848) popup_cale_lunar_info_window_t3

0xa66c,	// (0x000885af) bg_popup_call2_bubble_pane

0xc381,	// (0x0008a2c4) bg_popup_call2_in_pane_cp01_ParamLimits

0xc381,	// (0x0008a2c4) bg_popup_call2_in_pane_cp01

0xa348,	// (0x0008828b) call_type_pane_cp02

0xc3c9,	// (0x0008a30c) popup_call2_audio_out_window_g1_ParamLimits

0xc3c9,	// (0x0008a30c) popup_call2_audio_out_window_g1

0xc3f5,	// (0x0008a338) popup_call2_audio_out_window_g2_ParamLimits

0xc3f5,	// (0x0008a338) popup_call2_audio_out_window_g2

0xc41d,	// (0x0008a360) popup_call2_audio_out_window_g3_ParamLimits

0xc41d,	// (0x0008a360) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0008d463) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0008d463) popup_call2_audio_out_window_g

0xc458,	// (0x0008a39b) popup_call2_audio_out_window_t1_ParamLimits

0xc458,	// (0x0008a39b) popup_call2_audio_out_window_t1

0xc4b7,	// (0x0008a3fa) popup_call2_audio_out_window_t2_ParamLimits

0xc4b7,	// (0x0008a3fa) popup_call2_audio_out_window_t2

0xc50b,	// (0x0008a44e) popup_call2_audio_out_window_t3_ParamLimits

0xc50b,	// (0x0008a44e) popup_call2_audio_out_window_t3

0xc521,	// (0x0008a464) popup_call2_audio_out_window_t4_ParamLimits

0xc521,	// (0x0008a464) popup_call2_audio_out_window_t4

0xc537,	// (0x0008a47a) popup_call2_audio_out_window_t5_ParamLimits

0xc537,	// (0x0008a47a) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0008d46c) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0008d46c) popup_call2_audio_out_window_t

0xc59b,	// (0x0008a4de) bg_popup_call2_in_pane_ParamLimits

0xc59b,	// (0x0008a4de) bg_popup_call2_in_pane

0xc5f7,	// (0x0008a53a) popup_call2_audio_in_window_g1_ParamLimits

0xc5f7,	// (0x0008a53a) popup_call2_audio_in_window_g1

0xc62f,	// (0x0008a572) popup_call2_audio_in_window_g2_ParamLimits

0xc62f,	// (0x0008a572) popup_call2_audio_in_window_g2

0xc667,	// (0x0008a5aa) popup_call2_audio_in_window_g3_ParamLimits

0xc667,	// (0x0008a5aa) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0008d479) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0008d479) popup_call2_audio_in_window_g

0xc6bf,	// (0x0008a602) popup_call2_audio_in_window_t1_ParamLimits

0xc6bf,	// (0x0008a602) popup_call2_audio_in_window_t1

0xc73f,	// (0x0008a682) popup_call2_audio_in_window_t2_ParamLimits

0xc73f,	// (0x0008a682) popup_call2_audio_in_window_t2

0xc7bf,	// (0x0008a702) popup_call2_audio_in_window_t3_ParamLimits

0xc7bf,	// (0x0008a702) popup_call2_audio_in_window_t3

0xc7d9,	// (0x0008a71c) popup_call2_audio_in_window_t4_ParamLimits

0xc7d9,	// (0x0008a71c) popup_call2_audio_in_window_t4

0xc7eb,	// (0x0008a72e) popup_call2_audio_in_window_t5_ParamLimits

0xc7eb,	// (0x0008a72e) popup_call2_audio_in_window_t5

0xc7fd,	// (0x0008a740) popup_call2_audio_in_window_t6_ParamLimits

0xc7fd,	// (0x0008a740) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0008d482) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0008d482) popup_call2_audio_in_window_t

0xa8bf,	// (0x00088802) bg_popup_call2_in_pane_g1

0xc913,	// (0x0008a856) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0008d4ea) popup_cale_lunar_info_window_t

0xa8c7,	// (0x0008880a) bg_popup_call2_rect_pane_ParamLimits

0xa8c7,	// (0x0008880a) bg_popup_call2_rect_pane

0xa66c,	// (0x000885af) call2_cli_visual_graphic_pane

0xa66c,	// (0x000885af) call2_cli_visual_text_pane

0x52fc,	// (0x0008323f) smil_status_volume_pane_g3

0x0002,

0xa9e1,	// (0x00088924) call2_cli_visual_graphic_pane_g1

0xa9e1,	// (0x00088924) call2_cli_visual_graphic_pane_g2

0xa9e1,	// (0x00088924) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0008d48f) call2_cli_visual_graphic_pane_g

0xc80f,	// (0x0008a752) bg_popup_call2_rect_pane_g1

0xaa6d,	// (0x000889b0) bg_popup_call2_rect_pane_g2

0xc817,	// (0x0008a75a) bg_popup_call2_rect_pane_g3

0xc81f,	// (0x0008a762) bg_popup_call2_rect_pane_g4

0xc827,	// (0x0008a76a) bg_popup_call2_rect_pane_g5

0xc82f,	// (0x0008a772) bg_popup_call2_rect_pane_g6

0xc837,	// (0x0008a77a) bg_popup_call2_rect_pane_g7

0xc83f,	// (0x0008a782) bg_popup_call2_rect_pane_g8

0xc847,	// (0x0008a78a) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0008d496) bg_popup_call2_rect_pane_g

0xc84f,	// (0x0008a792) bg_popup_call2_bubble_pane_g1

0xc857,	// (0x0008a79a) bg_popup_call2_bubble_pane_g2

0xc85f,	// (0x0008a7a2) bg_popup_call2_bubble_pane_g3

0xc867,	// (0x0008a7aa) bg_popup_call2_bubble_pane_g4

0xc86f,	// (0x0008a7b2) bg_popup_call2_bubble_pane_g5

0xc877,	// (0x0008a7ba) bg_popup_call2_bubble_pane_g6

0xc87f,	// (0x0008a7c2) bg_popup_call2_bubble_pane_g7

0xc887,	// (0x0008a7ca) bg_popup_call2_bubble_pane_g8

0xc88f,	// (0x0008a7d2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0008d4a9) bg_popup_call2_bubble_pane_g

0x25a0,	// (0x000804e3) aid_cale_week_size_cell_pane

0x2d23,	// (0x00080c66) aid_cams_cif_uncrop_pane_ParamLimits

0x2d23,	// (0x00080c66) aid_cams_cif_uncrop_pane

0x2e80,	// (0x00080dc3) aid_cams_size_cell_ParamLimits

0x2e80,	// (0x00080dc3) aid_cams_size_cell

0x2e8c,	// (0x00080dcf) grid_cams_pane_ParamLimits

0x2e9a,	// (0x00080ddd) linegrid_cams_pane_ParamLimits

0x2f6b,	// (0x00080eae) call_video_pane_t1

0x2f88,	// (0x00080ecb) call_video_pane_t2

0x0001,

0xf253,	// (0x0008d196) call_video_pane_t

0x3454,	// (0x00081397) aid_cale_month_size_cell_pane_ParamLimits

0x3454,	// (0x00081397) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0008d533) smil_status_volume_pane_g

0x5309,	// (0x0008324c) volume_smil_pane_ParamLimits

0x1d70,	// (0x0007fcb3) aid_popup2_width_pane

0x24ac,	// (0x000803ef) cell_qdial_pane_g4_ParamLimits

0x24ac,	// (0x000803ef) cell_qdial_pane_g4

0x4343,	// (0x00082286) aid_blid_cardinal_pane_ParamLimits

0x4353,	// (0x00082296) aid_blid_destination_pane_ParamLimits

0x4353,	// (0x00082296) aid_blid_destination_pane

0xa8c7,	// (0x0008880a) bg_popup_call_poc_act_pane_ParamLimits

0xa8c7,	// (0x0008880a) bg_popup_call_poc_act_pane

0xa8c7,	// (0x0008880a) bg_popup_call_poc_inact_pane_ParamLimits

0xa8c7,	// (0x0008880a) bg_popup_call_poc_inact_pane

0xc897,	// (0x0008a7da) bg_popup_call_poc_act_pane_g1

0xc89f,	// (0x0008a7e2) bg_popup_call_poc_act_pane_g2

0xc8a7,	// (0x0008a7ea) bg_popup_call_poc_act_pane_g3

0xc867,	// (0x0008a7aa) bg_popup_call_poc_act_pane_g4

0xc86f,	// (0x0008a7b2) bg_popup_call_poc_act_pane_g5

0xc8af,	// (0x0008a7f2) bg_popup_call_poc_act_pane_g6

0xc87f,	// (0x0008a7c2) bg_popup_call_poc_act_pane_g7

0xc8b7,	// (0x0008a7fa) bg_popup_call_poc_act_pane_g8

0xa66c,	// (0x000885af) main_usb_pane

0x5101,	// (0x00083044) popup_cale_lunar_info_window

0x32a0,	// (0x000811e3) im_reading_pane_t1_ParamLimits

0xac76,	// (0x00088bb9) list_im_pane_ParamLimits

0xac87,	// (0x00088bca) scroll_pane_cp07_ParamLimits

0xa66c,	// (0x000885af) grid_highlight_pane_cp012

0xa8c7,	// (0x0008880a) mup_scale_pane_ParamLimits

0xb412,	// (0x00089355) main_usb_pane_g1_ParamLimits

0xb412,	// (0x00089355) main_usb_pane_g1

0x4e6a,	// (0x00082dad) main_usb_pane_g2_ParamLimits

0x4e6a,	// (0x00082dad) main_usb_pane_g2

0x0001,

0xf590,	// (0x0008d4d3) main_usb_pane_g_ParamLimits

0xf590,	// (0x0008d4d3) main_usb_pane_g

0x4e76,	// (0x00082db9) main_usb_pane_t1_ParamLimits

0x4e76,	// (0x00082db9) main_usb_pane_t1

0x4e88,	// (0x00082dcb) main_usb_pane_t2_ParamLimits

0x4e88,	// (0x00082dcb) main_usb_pane_t2

0x4e9a,	// (0x00082ddd) main_usb_pane_t3_ParamLimits

0x4e9a,	// (0x00082ddd) main_usb_pane_t3

0x4eac,	// (0x00082def) main_usb_pane_t4_ParamLimits

0x4eac,	// (0x00082def) main_usb_pane_t4

0x4ebe,	// (0x00082e01) main_usb_pane_t5_ParamLimits

0x4ebe,	// (0x00082e01) main_usb_pane_t5

0x4ed0,	// (0x00082e13) main_usb_pane_t6_ParamLimits

0x4ed0,	// (0x00082e13) main_usb_pane_t6

0x0005,

0xf595,	// (0x0008d4d8) main_usb_pane_t_ParamLimits

0x42e2,	// (0x00082225) aid_text_placing

0x42ed,	// (0x00082230) main_location2_pane_t1_ParamLimits

0x4303,	// (0x00082246) main_location2_pane_t2_ParamLimits

0x4319,	// (0x0008225c) main_location2_pane_t3_ParamLimits

0x432f,	// (0x00082272) main_location2_pane_t4_ParamLimits

0x432f,	// (0x00082272) main_location2_pane_t4

0xf3b4,	// (0x0008d2f7) main_location2_pane_t_ParamLimits

0xa903,	// (0x00088846) find_pinb_pane_g2_ParamLimits

0xa903,	// (0x00088846) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0008d047) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0008d047) find_pinb_pane_g

0xa90f,	// (0x00088852) find_pinb_pane_t1_ParamLimits

0xa921,	// (0x00088864) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0008d04c) find_pinb_pane_t_ParamLimits

0xa66c,	// (0x000885af) main_call3_pane

0x3a07,	// (0x0008194a) cale_month_day_heading_pane_t1_ParamLimits

0x3a89,	// (0x000819cc) cale_month_day_heading_pane_t2_ParamLimits

0x3b02,	// (0x00081a45) cale_month_day_heading_pane_t3_ParamLimits

0x3b7b,	// (0x00081abe) cale_month_day_heading_pane_t4_ParamLimits

0x3bf4,	// (0x00081b37) cale_month_day_heading_pane_t5_ParamLimits

0x3c75,	// (0x00081bb8) cale_month_day_heading_pane_t6_ParamLimits

0x3cfe,	// (0x00081c41) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0008d1ce) cale_month_day_heading_pane_t_ParamLimits

0xaed1,	// (0x00088e14) smil_status_volume_pane

0x4a28,	// (0x0008296b) postcard_address_pane_ParamLimits

0x4a28,	// (0x0008296b) postcard_address_pane

0x4a36,	// (0x00082979) postcard_message_pane_ParamLimits

0x4a36,	// (0x00082979) postcard_message_pane

0x4e40,	// (0x00082d83) call2_cli_visual_pane_t1_ParamLimits

0x4e40,	// (0x00082d83) call2_cli_visual_pane_t1

0x544f,	// (0x00083392) postcard_message_pane_t1_ParamLimits

0x544f,	// (0x00083392) postcard_message_pane_t1

0xcacb,	// (0x0008aa0e) postcard_address_pane_t1_ParamLimits

0xcacb,	// (0x0008aa0e) postcard_address_pane_t1

0x5440,	// (0x00083383) popup_call3_audio_in_window_ParamLimits

0x5440,	// (0x00083383) popup_call3_audio_in_window

0x531e,	// (0x00083261) bg_popup_call3_in_pane_ParamLimits

0x531e,	// (0x00083261) bg_popup_call3_in_pane

0x5386,	// (0x000832c9) popup_call3_audio_in_window_g1_ParamLimits

0x5386,	// (0x000832c9) popup_call3_audio_in_window_g1

0x539e,	// (0x000832e1) popup_call3_audio_in_window_g2_ParamLimits

0x539e,	// (0x000832e1) popup_call3_audio_in_window_g2

0x53b6,	// (0x000832f9) popup_call3_audio_in_window_g3_ParamLimits

0x53b6,	// (0x000832f9) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0008d53a) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0008d53a) popup_call3_audio_in_window_g

0x53de,	// (0x00083321) popup_call3_audio_in_window_t1_ParamLimits

0x53de,	// (0x00083321) popup_call3_audio_in_window_t1

0x5406,	// (0x00083349) popup_call3_audio_in_window_t2_ParamLimits

0x5406,	// (0x00083349) popup_call3_audio_in_window_t2

0x542e,	// (0x00083371) popup_call3_audio_in_window_t3_ParamLimits

0x542e,	// (0x00083371) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0008d543) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0008d543) popup_call3_audio_in_window_t

0xab71,	// (0x00088ab4) bg_popup_call3_rect_pane

0xc80f,	// (0x0008a752) bg_popup_call3_rect_pane_g1

0xaa6d,	// (0x000889b0) bg_popup_call3_rect_pane_g2

0xc817,	// (0x0008a75a) bg_popup_call3_rect_pane_g3

0xc81f,	// (0x0008a762) bg_popup_call3_rect_pane_g4

0xc827,	// (0x0008a76a) bg_popup_call3_rect_pane_g5

0xc82f,	// (0x0008a772) bg_popup_call3_rect_pane_g6

0xc837,	// (0x0008a77a) bg_popup_call3_rect_pane_g7

0x4687,	// (0x000825ca) mup_visualizer_osc_pane

0xb69e,	// (0x000895e1) mup_visualizer_spec_pane

0x533e,	// (0x00083281) call3_video_qcif_pane_ParamLimits

0x533e,	// (0x00083281) call3_video_qcif_pane

0x5350,	// (0x00083293) call3_video_qcif_uncrop_pane_ParamLimits

0x5350,	// (0x00083293) call3_video_qcif_uncrop_pane

0x5360,	// (0x000832a3) call3_video_subqcif_pane_ParamLimits

0x5360,	// (0x000832a3) call3_video_subqcif_pane

0x5374,	// (0x000832b7) call3_video_subqcif_uncrop_pane_ParamLimits

0x5374,	// (0x000832b7) call3_video_subqcif_uncrop_pane

0x53ce,	// (0x00083311) popup_call3_audio_in_window_g4_ParamLimits

0x53ce,	// (0x00083311) popup_call3_audio_in_window_g4

0x52eb,	// (0x0008322e) mup_spec_half_pane

0x52f4,	// (0x00083237) mup_spec_half_pane_cp

0xca8b,	// (0x0008a9ce) mup_osc_middle_pane

0xca94,	// (0x0008a9d7) mup_visualizer_osc_pane_g1

0x52cb,	// (0x0008320e) mup_spec_bar_pane_ParamLimits

0x52cb,	// (0x0008320e) mup_spec_bar_pane

0xca78,	// (0x0008a9bb) mup_spec_bar_pane_g1

0xca82,	// (0x0008a9c5) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0008d52e) mup_spec_bar_pane_g

0x25a0,	// (0x000804e3) aid_cale_week_size_cell_pane_ParamLimits

0x25ba,	// (0x000804fd) bg_cale_heading_pane_ParamLimits

0x25e3,	// (0x00080526) bg_cale_pane_cp01_ParamLimits

0x2605,	// (0x00080548) cale_week_corner_pane_ParamLimits

0x2624,	// (0x00080567) cale_week_day_heading_pane_ParamLimits

0x2652,	// (0x00080595) cale_week_scroll_pane_g1_ParamLimits

0x2676,	// (0x000805b9) cale_week_scroll_pane_g2_ParamLimits

0x268e,	// (0x000805d1) cale_week_scroll_pane_g3_ParamLimits

0x26a6,	// (0x000805e9) cale_week_scroll_pane_g4_ParamLimits

0x26be,	// (0x00080601) cale_week_scroll_pane_g5_ParamLimits

0x26d6,	// (0x00080619) cale_week_scroll_pane_g6_ParamLimits

0x26f6,	// (0x00080639) cale_week_scroll_pane_g7_ParamLimits

0x2716,	// (0x00080659) cale_week_scroll_pane_g8_ParamLimits

0x2736,	// (0x00080679) cale_week_scroll_pane_g9_ParamLimits

0x2753,	// (0x00080696) cale_week_scroll_pane_g10_ParamLimits

0x2770,	// (0x000806b3) cale_week_scroll_pane_g11_ParamLimits

0x278f,	// (0x000806d2) cale_week_scroll_pane_g12_ParamLimits

0x27b4,	// (0x000806f7) cale_week_scroll_pane_g13_ParamLimits

0x27dd,	// (0x00080720) cale_week_scroll_pane_g14_ParamLimits

0x2806,	// (0x00080749) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0008d0d8) cale_week_scroll_pane_g_ParamLimits

0x284f,	// (0x00080792) cale_week_time_pane_ParamLimits

0x286f,	// (0x000807b2) grid_cale_week_pane_ParamLimits

0xaaaa,	// (0x000889ed) listscroll_cale_week_pane_t1

0xaabc,	// (0x000889ff) scroll_pane_cp08_ParamLimits

0x34cc,	// (0x0008140f) cale_month_corner_pane_ParamLimits

0xaea7,	// (0x00088dea) cale_month_pane_t1

0x398e,	// (0x000818d1) cale_month_week_pane_ParamLimits

0xb412,	// (0x00089355) popup_call_status_window_g1_ParamLimits

0x4100,	// (0x00082043) popup_call_status_window_g2_ParamLimits

0x410c,	// (0x0008204f) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0008d27e) popup_call_status_window_g_ParamLimits

0xb273,	// (0x000891b6) aid_call2_pane

0x0cdc,	// (0x0007ec1f) msg_header_pane_g1

0x4a28,	// (0x0008296b) postcard_address2_pane_ParamLimits

0x4a28,	// (0x0008296b) postcard_address2_pane

0x4a36,	// (0x00082979) postcard_message2_pane_ParamLimits

0x4a36,	// (0x00082979) postcard_message2_pane

0x5285,	// (0x000831c8) message2_row_pane_ParamLimits

0x5285,	// (0x000831c8) message2_row_pane

0xca33,	// (0x0008a976) address2_row_pane_ParamLimits

0xca33,	// (0x0008a976) address2_row_pane

0xca46,	// (0x0008a989) postcard_message2_row_pane_g1

0xca4e,	// (0x0008a991) postcard_message2_row_pane_t1

0xca46,	// (0x0008a989) address2_row_pane_g1

0xca4e,	// (0x0008a991) address2_row_pane_t1

0x2bfd,	// (0x00080b40) aid_size_cell_vorec

0xa66c,	// (0x000885af) main_rss_pane

0x529f,	// (0x000831e2) rss_list_single_pane_ParamLimits

0x529f,	// (0x000831e2) rss_list_single_pane

0xca5c,	// (0x0008a99f) rss_list_single_pane_t1

0xca6a,	// (0x0008a9ad) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0008d529) rss_list_single_pane_t

0xa66c,	// (0x000885af) main_camera2_pane

0xa66c,	// (0x000885af) main_video2_pane

0x54b3,	// (0x000833f6) cams_zoom_pane_cp2_ParamLimits

0x54b3,	// (0x000833f6) cams_zoom_pane_cp2

0x54bf,	// (0x00083402) image2_vga_pane_ParamLimits

0x54bf,	// (0x00083402) image2_vga_pane

0x54ce,	// (0x00083411) main_camera2_pane_g1_ParamLimits

0x54ce,	// (0x00083411) main_camera2_pane_g1

0x54da,	// (0x0008341d) main_camera2_pane_g2_ParamLimits

0x54da,	// (0x0008341d) main_camera2_pane_g2

0x54e6,	// (0x00083429) main_camera2_pane_g3_ParamLimits

0x54e6,	// (0x00083429) main_camera2_pane_g3

0x54f2,	// (0x00083435) main_camera2_pane_g4_ParamLimits

0x54f2,	// (0x00083435) main_camera2_pane_g4

0x54fe,	// (0x00083441) main_camera2_pane_g5_ParamLimits

0x54fe,	// (0x00083441) main_camera2_pane_g5

0x550a,	// (0x0008344d) main_camera2_pane_g6_ParamLimits

0x550a,	// (0x0008344d) main_camera2_pane_g6

0x5516,	// (0x00083459) main_camera2_pane_g7_ParamLimits

0x5516,	// (0x00083459) main_camera2_pane_g7

0x5522,	// (0x00083465) main_camera2_pane_g8_ParamLimits

0x5522,	// (0x00083465) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0008d54a) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0008d54a) main_camera2_pane_g

0x553a,	// (0x0008347d) main_camera2_pane_t1_ParamLimits

0x553a,	// (0x0008347d) main_camera2_pane_t1

0x554c,	// (0x0008348f) main_camera2_pane_t2_ParamLimits

0x554c,	// (0x0008348f) main_camera2_pane_t2

0x555e,	// (0x000834a1) main_camera2_pane_t3_ParamLimits

0x555e,	// (0x000834a1) main_camera2_pane_t3

0x5570,	// (0x000834b3) main_camera2_pane_t4_ParamLimits

0x5570,	// (0x000834b3) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0008d55d) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0008d55d) main_camera2_pane_t

0x55cd,	// (0x00083510) cams_zoom_pane_cp4_ParamLimits

0x55cd,	// (0x00083510) cams_zoom_pane_cp4

0x55dd,	// (0x00083520) image2_cif_pane_ParamLimits

0x55dd,	// (0x00083520) image2_cif_pane

0x55f2,	// (0x00083535) image2_subqcif_pane_ParamLimits

0x55f2,	// (0x00083535) image2_subqcif_pane

0x5601,	// (0x00083544) main_video2_pane_g1_ParamLimits

0x5601,	// (0x00083544) main_video2_pane_g1

0x5613,	// (0x00083556) main_video2_pane_g2_ParamLimits

0x5613,	// (0x00083556) main_video2_pane_g2

0x5623,	// (0x00083566) main_video2_pane_g3_ParamLimits

0x5623,	// (0x00083566) main_video2_pane_g3

0x5633,	// (0x00083576) main_video2_pane_g4_ParamLimits

0x5633,	// (0x00083576) main_video2_pane_g4

0x5643,	// (0x00083586) main_video2_pane_g5_ParamLimits

0x5643,	// (0x00083586) main_video2_pane_g5

0x5653,	// (0x00083596) main_video2_pane_g6_ParamLimits

0x5653,	// (0x00083596) main_video2_pane_g6

0x0005,

0xf629,	// (0x0008d56c) main_video2_pane_g_ParamLimits

0xf629,	// (0x0008d56c) main_video2_pane_g

0x5665,	// (0x000835a8) main_video2_pane_t1_ParamLimits

0x5665,	// (0x000835a8) main_video2_pane_t1

0x567f,	// (0x000835c2) main_video2_pane_t2_ParamLimits

0x567f,	// (0x000835c2) main_video2_pane_t2

0x56a5,	// (0x000835e8) main_video2_pane_t3_ParamLimits

0x56a5,	// (0x000835e8) main_video2_pane_t3

0x0002,

0xf636,	// (0x0008d579) main_video2_pane_t_ParamLimits

0xf636,	// (0x0008d579) main_video2_pane_t

0x4f87,	// (0x00082eca) call_muted_g2

0x0001,

0xf5d8,	// (0x0008d51b) call_muted_g

0xa66c,	// (0x000885af) main_mup2_pane

0xcae2,	// (0x0008aa25) main_mup2_pane_g1_ParamLimits

0xcae2,	// (0x0008aa25) main_mup2_pane_g1

0x56cb,	// (0x0008360e) main_mup2_pane_g2_ParamLimits

0x56cb,	// (0x0008360e) main_mup2_pane_g2

0x595d,	// (0x000838a0) main_mup_pane_g13_cp1

0x5965,	// (0x000838a8) mup_volume_pane_cp1

0x56ed,	// (0x00083630) main_mup2_pane_g4_ParamLimits

0x56ed,	// (0x00083630) main_mup2_pane_g4

0x5702,	// (0x00083645) main_mup2_pane_g5_ParamLimits

0x5702,	// (0x00083645) main_mup2_pane_g5

0x5717,	// (0x0008365a) main_mup2_pane_g6_ParamLimits

0x5717,	// (0x0008365a) main_mup2_pane_g6

0x572c,	// (0x0008366f) main_mup2_pane_g7_ParamLimits

0x572c,	// (0x0008366f) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0008d580) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0008d580) main_mup2_pane_g

0x5748,	// (0x0008368b) main_mup2_pane_t1_ParamLimits

0x5748,	// (0x0008368b) main_mup2_pane_t1

0x575f,	// (0x000836a2) main_mup2_pane_t2_ParamLimits

0x575f,	// (0x000836a2) main_mup2_pane_t2

0x5776,	// (0x000836b9) main_mup2_pane_t3_ParamLimits

0x5776,	// (0x000836b9) main_mup2_pane_t3

0x578d,	// (0x000836d0) main_mup2_pane_t4_ParamLimits

0x578d,	// (0x000836d0) main_mup2_pane_t4

0x57a7,	// (0x000836ea) main_mup2_pane_t5_ParamLimits

0x57a7,	// (0x000836ea) main_mup2_pane_t5

0x57c1,	// (0x00083704) main_mup2_pane_t6_ParamLimits

0x57c1,	// (0x00083704) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0008d58f) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0008d58f) main_mup2_pane_t

0x57f9,	// (0x0008373c) mup2_visualizer_pane_ParamLimits

0x57f9,	// (0x0008373c) mup2_visualizer_pane

0x582f,	// (0x00083772) mup_progress_pane_cp_ParamLimits

0x582f,	// (0x00083772) mup_progress_pane_cp

0x5948,	// (0x0008388b) mup_volume_pane_cp_ParamLimits

0x5948,	// (0x0008388b) mup_volume_pane_cp

0x5848,	// (0x0008378b) mup2_visualizer_pane_g1_ParamLimits

0x5848,	// (0x0008378b) mup2_visualizer_pane_g1

0xcaee,	// (0x0008aa31) mup2_visualizer_pane_g2_ParamLimits

0xcaee,	// (0x0008aa31) mup2_visualizer_pane_g2

0x585d,	// (0x000837a0) mup2_visualizer_pane_g3_ParamLimits

0x585d,	// (0x000837a0) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0008d59c) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0008d59c) mup2_visualizer_pane_g

0xb8c7,	// (0x0008980a) aid_size_cell_fmradio

0x509d,	// (0x00082fe0) aid_height_parent_landcape

0xad05,	// (0x00088c48) wml_content_pane_cp

0xad0d,	// (0x00088c50) wml_tabs_pane

0xad16,	// (0x00088c59) popup_wml_miniature_window

0xad1e,	// (0x00088c61) scroll_pane_cp021

0xad32,	// (0x00088c75) wml_content_pane_comp8

0xa66c,	// (0x000885af) bg_popup_sub_pane_cp05

0xcb0c,	// (0x0008aa4f) popup_wml_miniature_window_g1

0xcb14,	// (0x0008aa57) wml_miniature_view_pane

0x586b,	// (0x000837ae) aid_size_wml_view

0x5873,	// (0x000837b6) wml_miniature_view_pane_g1

0x587c,	// (0x000837bf) wml_miniature_view_pane_g2

0x5885,	// (0x000837c8) wml_miniature_view_pane_g3

0x588d,	// (0x000837d0) wml_miniature_view_pane_g4

0x5895,	// (0x000837d8) wml_miniature_view_pane_g5

0x589d,	// (0x000837e0) wml_miniature_view_pane_g6

0x58a5,	// (0x000837e8) wml_miniature_view_pane_g7

0x58ad,	// (0x000837f0) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0008d5a3) wml_miniature_view_pane_g

0xcae2,	// (0x0008aa25) background_graphic_ParamLimits

0xcae2,	// (0x0008aa25) background_graphic

0xcb1c,	// (0x0008aa5f) wml_tabs_2_pane

0xcb25,	// (0x0008aa68) wml_tabs_3_pane_ParamLimits

0xcb25,	// (0x0008aa68) wml_tabs_3_pane

0xcb37,	// (0x0008aa7a) wml_tabs_4_pane_ParamLimits

0xcb37,	// (0x0008aa7a) wml_tabs_4_pane

0xcb4d,	// (0x0008aa90) wml_tabs_5_pane_ParamLimits

0xcb4d,	// (0x0008aa90) wml_tabs_5_pane

0xcb67,	// (0x0008aaaa) wml_tabs_pane_g2_ParamLimits

0xcb67,	// (0x0008aaaa) wml_tabs_pane_g2

0xcb7b,	// (0x0008aabe) wml_tabs_pane_g3_ParamLimits

0xcb7b,	// (0x0008aabe) wml_tabs_pane_g3

0x58b5,	// (0x000837f8) wml_tabs_2_active_pane_ParamLimits

0x58b5,	// (0x000837f8) wml_tabs_2_active_pane

0x58c7,	// (0x0008380a) wml_tabs_2_passive_pane_ParamLimits

0x58c7,	// (0x0008380a) wml_tabs_2_passive_pane

0x58d9,	// (0x0008381c) wml_tabs_3_active_pane_cp_ParamLimits

0x58d9,	// (0x0008381c) wml_tabs_3_active_pane_cp

0x58ec,	// (0x0008382f) wml_tabs_3_passive_pane_ParamLimits

0x58ec,	// (0x0008382f) wml_tabs_3_passive_pane

0x58fd,	// (0x00083840) wml_tabs_3_passive_pane_cp_ParamLimits

0x58fd,	// (0x00083840) wml_tabs_3_passive_pane_cp

0x5912,	// (0x00083855) tabs_4_active_pane

0x591a,	// (0x0008385d) tabs_4_passive_pane

0x5922,	// (0x00083865) tabs_4_passive_pane_cp

0x592a,	// (0x0008386d) tabs_4_passive_pane_cp2

0x4e62,	// (0x00082da5) aid_height_text

0x4650,	// (0x00082593) mup_volume_cont_pane_ParamLimits

0x4650,	// (0x00082593) mup_volume_cont_pane

0x2106,	// (0x00080049) aid_size_cell_pinb

0x2110,	// (0x00080053) aid_size_list_pinb

0x5818,	// (0x0008375b) mup2_volume_cont_pane_ParamLimits

0x5818,	// (0x0008375b) mup2_volume_cont_pane

0x5934,	// (0x00083877) mup2_volume_cont_pane_g1_ParamLimits

0x5934,	// (0x00083877) mup2_volume_cont_pane_g1

0x1d7c,	// (0x0007fcbf) aid_size_cell_touch_ParamLimits

0x1d7c,	// (0x0007fcbf) aid_size_cell_touch

0x2025,	// (0x0007ff68) touch_pane_ParamLimits

0x2025,	// (0x0007ff68) touch_pane

0xa21a,	// (0x0008815d) main_rss2_pane

0xcb98,	// (0x0008aadb) listscroll_rss2_pane

0xcba1,	// (0x0008aae4) rss2_navigation_pane

0xcba9,	// (0x0008aaec) list_rss2_pane

0xb397,	// (0x000892da) scroll_pane_cp22

0xcbb1,	// (0x0008aaf4) rss2_navigation_pane_g1

0xcbba,	// (0x0008aafd) rss2_navigation_pane_g2

0xcbc2,	// (0x0008ab05) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0008d5b4) rss2_navigation_pane_g

0xcbca,	// (0x0008ab0d) rss2_navigation_pane_t1

0x596d,	// (0x000838b0) rss2_list_single_pane_ParamLimits

0x596d,	// (0x000838b0) rss2_list_single_pane

0xcbd8,	// (0x0008ab1b) rss2_list_single_pane_t2

0xcbe6,	// (0x0008ab29) rss2_list_single_pane_t3_ParamLimits

0xcbe6,	// (0x0008ab29) rss2_list_single_pane_t3

0xcc03,	// (0x0008ab46) rss2_list_single_pane_t4

0x3f9c,	// (0x00081edf) smil_status_pane_g1

0xc183,	// (0x0008a0c6) main_image2_pane_ParamLimits

0xc183,	// (0x0008a0c6) main_image2_pane

0x552e,	// (0x00083471) main_camera2_pane_g9_ParamLimits

0x552e,	// (0x00083471) main_camera2_pane_g9

0x5582,	// (0x000834c5) main_camera2_pane_t5_ParamLimits

0x5582,	// (0x000834c5) main_camera2_pane_t5

0x5594,	// (0x000834d7) main_camera2_pane_t6_ParamLimits

0x5594,	// (0x000834d7) main_camera2_pane_t6

0x5990,	// (0x000838d3) main_image2_pane_g1_ParamLimits

0x5990,	// (0x000838d3) main_image2_pane_g1

0x4bff,	// (0x00082b42) smil2_video_pane_ParamLimits

0x4bff,	// (0x00082b42) smil2_video_pane

0x0a7f,	// (0x0007e9c2) aid_zoom_text_primary_cp

0x1fce,	// (0x0007ff11) popup_preview_fixed_window

0xac6e,	// (0x00088bb1) im_reading_pane_g1

0x5478,	// (0x000833bb) cams2_bc_adjust_pane_cp_ParamLimits

0x5478,	// (0x000833bb) cams2_bc_adjust_pane_cp

0x55bf,	// (0x00083502) cams2_bc_adjust_pane_ParamLimits

0x55bf,	// (0x00083502) cams2_bc_adjust_pane

0x599c,	// (0x000838df) cams2_bc_adjust_pane_g1

0x59a4,	// (0x000838e7) cams2_slider_pane

0x59ad,	// (0x000838f0) cams2_slider_pane_g1

0x59b6,	// (0x000838f9) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0008d5bb) cams2_slider_pane_g

0x220b,	// (0x0008014e) calc_display_pane_ParamLimits

0x2229,	// (0x0008016c) calc_paper_pane_ParamLimits

0x2245,	// (0x00080188) grid_calc_pane_ParamLimits

0x416a,	// (0x000820ad) popup_clock_digital_window_t1_ParamLimits

0xb864,	// (0x000897a7) main_image_pane_t1

0x21f1,	// (0x00080134) aid_size_cell_calc_ParamLimits

0x21f1,	// (0x00080134) aid_size_cell_calc

0x50d7,	// (0x0008301a) popup_blid_sat_info2_window_ParamLimits

0x50d7,	// (0x0008301a) popup_blid_sat_info2_window

0xcc19,	// (0x0008ab5c) aid_size_cell_blid

0xcc21,	// (0x0008ab64) bg_popup_window_pane_cp07

0xcc44,	// (0x0008ab87) grid_popup_blid_pane

0xcc4e,	// (0x0008ab91) heading_pane_cp05_ParamLimits

0xcc4e,	// (0x0008ab91) heading_pane_cp05

0xcd18,	// (0x0008ac5b) cell_popup_blid_pane_ParamLimits

0xcd18,	// (0x0008ac5b) cell_popup_blid_pane

0xcd42,	// (0x0008ac85) cell_popup_blid_pane_g1

0xcd4a,	// (0x0008ac8d) cell_popup_blid_pane_t1

0x57de,	// (0x00083721) mup2_indicator_pane_ParamLimits

0x57de,	// (0x00083721) mup2_indicator_pane

0xab71,	// (0x00088ab4) mup2_visualizer_osc_pane

0xcafa,	// (0x0008aa3d) mup2_visualizer_spec_pane_ParamLimits

0xcafa,	// (0x0008aa3d) mup2_visualizer_spec_pane

0x59d0,	// (0x00083913) mup2_spec_half_pane

0x59d9,	// (0x0008391c) mup2_spec_half_pane_cp

0x59e3,	// (0x00083926) mup2_spec_bar_pane_ParamLimits

0x59e3,	// (0x00083926) mup2_spec_bar_pane

0xca78,	// (0x0008a9bb) mup2_spec_bar_pane_g1

0xca82,	// (0x0008a9c5) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0008d52e) mup2_spec_bar_pane_g

0x5a02,	// (0x00083945) mup2_osc_middle_pane

0xca94,	// (0x0008a9d7) mup2_visualizer_osc_pane_g1

0xa244,	// (0x00088187) popup_number_entry_window_t1_ParamLimits

0xa257,	// (0x0008819a) popup_number_entry_window_t2_ParamLimits

0xa269,	// (0x000881ac) popup_number_entry_window_t3_ParamLimits

0xa27b,	// (0x000881be) popup_number_entry_window_t5_ParamLimits

0xa27b,	// (0x000881be) popup_number_entry_window_t5

0xf0af,	// (0x0008cff2) popup_number_entry_window_t_ParamLimits

0xa2b0,	// (0x000881f3) text_title_cp2_ParamLimits

0x48ec,	// (0x0008282f) aid_hotspot_pointer_text2_pane

0x4986,	// (0x000828c9) main_viewer_pane_g9_ParamLimits

0x4986,	// (0x000828c9) main_viewer_pane_g9

0xaea7,	// (0x00088dea) cale_month_pane_t1_ParamLimits

0xaee4,	// (0x00088e27) bg_cale_pane_ParamLimits

0xaefc,	// (0x00088e3f) list_cale_pane_ParamLimits

0xaf0d,	// (0x00088e50) listscroll_cale_day_pane_t1

0xaf1f,	// (0x00088e62) scroll_pane_cp09_ParamLimits

0x468f,	// (0x000825d2) main_mup_eq_pane_t1_ParamLimits

0x468f,	// (0x000825d2) main_mup_eq_pane_t1

0x46ab,	// (0x000825ee) main_mup_eq_pane_t2_ParamLimits

0x46ab,	// (0x000825ee) main_mup_eq_pane_t2

0x46c7,	// (0x0008260a) main_mup_eq_pane_t3_ParamLimits

0x46c7,	// (0x0008260a) main_mup_eq_pane_t3

0x46e1,	// (0x00082624) main_mup_eq_pane_t4_ParamLimits

0x46e1,	// (0x00082624) main_mup_eq_pane_t4

0x46fb,	// (0x0008263e) main_mup_eq_pane_t5_ParamLimits

0x46fb,	// (0x0008263e) main_mup_eq_pane_t5

0x4715,	// (0x00082658) main_mup_eq_pane_t6_ParamLimits

0x4715,	// (0x00082658) main_mup_eq_pane_t6

0x472b,	// (0x0008266e) main_mup_eq_pane_t7_ParamLimits

0x472b,	// (0x0008266e) main_mup_eq_pane_t7

0x4741,	// (0x00082684) main_mup_eq_pane_t8_ParamLimits

0x4741,	// (0x00082684) main_mup_eq_pane_t8

0x4757,	// (0x0008269a) main_mup_eq_pane_t9_ParamLimits

0x4757,	// (0x0008269a) main_mup_eq_pane_t9

0x4773,	// (0x000826b6) main_mup_eq_pane_t10_ParamLimits

0x4773,	// (0x000826b6) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0008d37d) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0008d37d) main_mup_eq_pane_t

0x4838,	// (0x0008277b) mup_equalizer_pane_cp5_ParamLimits

0x4850,	// (0x00082793) mup_equalizer_pane_cp6_ParamLimits

0x4868,	// (0x000827ab) mup_equalizer_pane_cp7_ParamLimits

0xa21a,	// (0x0008815d) main_gallery_pane

0xca9d,	// (0x0008a9e0) smil2_volume_pane

0xcaa5,	// (0x0008a9e8) smil_status_volume_pane_g1_ParamLimits

0xcab8,	// (0x0008a9fb) smil_status_volume_pane_g2_ParamLimits

0x52fc,	// (0x0008323f) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0008d533) smil_status_volume_pane_g_ParamLimits

0xcc21,	// (0x0008ab64) bg_popup_window_pane_cp07_ParamLimits

0xcc2f,	// (0x0008ab72) blid_firmament_pane

0x5a0b,	// (0x0008394e) aid_size_cell_gallery_ParamLimits

0x5a0b,	// (0x0008394e) aid_size_cell_gallery

0x5a19,	// (0x0008395c) grid_gallery_pane_ParamLimits

0x5a19,	// (0x0008395c) grid_gallery_pane

0x5a29,	// (0x0008396c) cell_gallery_pane_ParamLimits

0x5a29,	// (0x0008396c) cell_gallery_pane

0xcd58,	// (0x0008ac9b) bg_cell_gallery_focus_pane_ParamLimits

0xcd58,	// (0x0008ac9b) bg_cell_gallery_focus_pane

0xcd6a,	// (0x0008acad) cell_gallery_pane_g1_ParamLimits

0xcd6a,	// (0x0008acad) cell_gallery_pane_g1

0x5a74,	// (0x000839b7) cell_gallery_pane_g2_ParamLimits

0x5a74,	// (0x000839b7) cell_gallery_pane_g2

0x5a81,	// (0x000839c4) cell_gallery_pane_g3_ParamLimits

0x5a81,	// (0x000839c4) cell_gallery_pane_g3

0xcd76,	// (0x0008acb9) cell_gallery_pane_g4_ParamLimits

0xcd76,	// (0x0008acb9) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0008d5e1) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0008d5e1) cell_gallery_pane_g

0xcd82,	// (0x0008acc5) bg_cell_gallery_focus_pane_g1

0xcd8a,	// (0x0008accd) bg_cell_gallery_focus_pane_g2

0xcd92,	// (0x0008acd5) bg_cell_gallery_focus_pane_g3

0xcd9a,	// (0x0008acdd) bg_cell_gallery_focus_pane_g4

0xcda2,	// (0x0008ace5) bg_cell_gallery_focus_pane_g5

0xcdaa,	// (0x0008aced) bg_cell_gallery_focus_pane_g6

0xcdb2,	// (0x0008acf5) bg_cell_gallery_focus_pane_g7

0xcdba,	// (0x0008acfd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0008d5ea) bg_cell_gallery_focus_pane_g

0xcdc2,	// (0x0008ad05) aid_firma_cardinal

0xcdd6,	// (0x0008ad19) blid_firmament_pane_t1

0xcded,	// (0x0008ad30) blid_firmament_pane_t2

0xce04,	// (0x0008ad47) blid_firmament_pane_t3

0xce1b,	// (0x0008ad5e) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0008d5fb) blid_firmament_pane_t

0xce32,	// (0x0008ad75) blid_sat_info_pane

0xce42,	// (0x0008ad85) blid_sat_info_pane_g1

0xce42,	// (0x0008ad85) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0008d604) blid_sat_info_pane_g

0xce4c,	// (0x0008ad8f) blid_sat_info_pane_t1

0xce5a,	// (0x0008ad9d) smil2_volume_content_pane

0xce63,	// (0x0008ada6) smil2_volume_pane_g1

0xaae7,	// (0x00088a2a) smil2_volume_content_pane_g1

0xce6b,	// (0x0008adae) smil2_volume_content_pane_g2

0xce74,	// (0x0008adb7) smil2_volume_content_pane_g3

0xce7d,	// (0x0008adc0) smil2_volume_content_pane_g4

0xce86,	// (0x0008adc9) smil2_volume_content_pane_g5

0xce8f,	// (0x0008add2) smil2_volume_content_pane_g6

0xce98,	// (0x0008addb) smil2_volume_content_pane_g7

0xcea1,	// (0x0008ade4) smil2_volume_content_pane_g8

0xceaa,	// (0x0008aded) smil2_volume_content_pane_g9

0xceb3,	// (0x0008adf6) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0008d609) smil2_volume_content_pane_g

0x2930,	// (0x00080873) cale_week_day_heading_pane_t1_ParamLimits

0x2958,	// (0x0008089b) cale_week_day_heading_pane_t2_ParamLimits

0x2985,	// (0x000808c8) cale_week_day_heading_pane_t3_ParamLimits

0x29b2,	// (0x000808f5) cale_week_day_heading_pane_t4_ParamLimits

0x29df,	// (0x00080922) cale_week_day_heading_pane_t5_ParamLimits

0x2a0c,	// (0x0008094f) cale_week_day_heading_pane_t6_ParamLimits

0x2a39,	// (0x0008097c) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0008d0f9) cale_week_day_heading_pane_t_ParamLimits

0xaad9,	// (0x00088a1c) bg_cale_side_pane_ParamLimits

0x2a61,	// (0x000809a4) cale_week_time_pane_t1_ParamLimits

0x2a85,	// (0x000809c8) cale_week_time_pane_t2_ParamLimits

0x2aa9,	// (0x000809ec) cale_week_time_pane_t3_ParamLimits

0x2acd,	// (0x00080a10) cale_week_time_pane_t4_ParamLimits

0x2af1,	// (0x00080a34) cale_week_time_pane_t5_ParamLimits

0x2b17,	// (0x00080a5a) cale_week_time_pane_t6_ParamLimits

0x2b3f,	// (0x00080a82) cale_week_time_pane_t7_ParamLimits

0x2b6b,	// (0x00080aae) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0008d108) cale_week_time_pane_t_ParamLimits

0x2b9b,	// (0x00080ade) cell_cale_week_pane_g2_ParamLimits

0xaad9,	// (0x00088a1c) bg_cale_side_pane_cp01_ParamLimits

0x3d87,	// (0x00081cca) cale_month_week_pane_t1_ParamLimits

0x3da0,	// (0x00081ce3) cale_month_week_pane_t2_ParamLimits

0x3db9,	// (0x00081cfc) cale_month_week_pane_t3_ParamLimits

0x3dd2,	// (0x00081d15) cale_month_week_pane_t4_ParamLimits

0x3deb,	// (0x00081d2e) cale_month_week_pane_t5_ParamLimits

0x3e08,	// (0x00081d4b) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0008d1dd) cale_month_week_pane_t_ParamLimits

0x3f59,	// (0x00081e9c) cell_cale_month_pane_g1_ParamLimits

0xa21a,	// (0x0008815d) main_cale_event_viewer_pane

0xa21a,	// (0x0008815d) listscroll_cale_event_viewer_pane

0xcebc,	// (0x0008adff) list_cale_ev_pane

0xcec4,	// (0x0008ae07) scroll_pane_cp023

0x5a8e,	// (0x000839d1) field_cale_ev_pane_ParamLimits

0x5a8e,	// (0x000839d1) field_cale_ev_pane

0xced0,	// (0x0008ae13) field_cale_ev_content_pane_ParamLimits

0xced0,	// (0x0008ae13) field_cale_ev_content_pane

0xcedc,	// (0x0008ae1f) field_cale_ev_pane_g1_ParamLimits

0xcedc,	// (0x0008ae1f) field_cale_ev_pane_g1

0xcee8,	// (0x0008ae2b) field_cale_ev_pane_g2_ParamLimits

0xcee8,	// (0x0008ae2b) field_cale_ev_pane_g2

0xcf00,	// (0x0008ae43) field_cale_ev_pane_g3_ParamLimits

0xcf00,	// (0x0008ae43) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0008d61e) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0008d61e) field_cale_ev_pane_g

0xcf20,	// (0x0008ae63) field_cale_ev_pane_t1_ParamLimits

0xcf20,	// (0x0008ae63) field_cale_ev_pane_t1

0x5ab2,	// (0x000839f5) field_cale_ev_content_pane_t1_ParamLimits

0x5ab2,	// (0x000839f5) field_cale_ev_content_pane_t1

0xb74a,	// (0x0008968d) bg_button_pane_cp01

0x258e,	// (0x000804d1) listscroll_cale_week_pane_ParamLimits

0xaaa1,	// (0x000889e4) popup_toolbar_window_cp01

0xaaaa,	// (0x000889ed) listscroll_cale_week_pane_t1_ParamLimits

0x258e,	// (0x000804d1) listscroll_cale_day_pane_ParamLimits

0xaaa1,	// (0x000889e4) popup_toolbar_window_cp02

0xaf0d,	// (0x00088e50) listscroll_cale_day_pane_t1_ParamLimits

0x258e,	// (0x000804d1) main_cale_month_pane_ParamLimits

0x51f6,	// (0x00083139) popup_toolbar_window_cp03_ParamLimits

0x51f6,	// (0x00083139) popup_toolbar_window_cp03

0x4b0f,	// (0x00082a52) main_image_pane_g2_ParamLimits

0x4b0f,	// (0x00082a52) main_image_pane_g2

0x4b1b,	// (0x00082a5e) main_image_pane_g3_ParamLimits

0x4b1b,	// (0x00082a5e) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0008d40f) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0008d40f) main_image_pane_g

0xb864,	// (0x000897a7) main_image_pane_t1_ParamLimits

0x4b27,	// (0x00082a6a) main_image_pane_t2_ParamLimits

0x4b27,	// (0x00082a6a) main_image_pane_t2

0x4b39,	// (0x00082a7c) main_image_pane_t3_ParamLimits

0x4b39,	// (0x00082a7c) main_image_pane_t3

0x4b4b,	// (0x00082a8e) main_image_pane_t4_ParamLimits

0x4b4b,	// (0x00082a8e) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0008d416) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0008d416) main_image_pane_t

0x4b5d,	// (0x00082aa0) popup_image_details_window_cp01

0x4b67,	// (0x00082aaa) popup_toobar_trans_pane_cp01_ParamLimits

0x4b67,	// (0x00082aaa) popup_toobar_trans_pane_cp01

0x5138,	// (0x0008307b) popup_image_details_window_ParamLimits

0x5138,	// (0x0008307b) popup_image_details_window

0x5146,	// (0x00083089) popup_image_focus_window

0x546a,	// (0x000833ad) camera2_autofocus_pane_ParamLimits

0x546a,	// (0x000833ad) camera2_autofocus_pane

0xa21a,	// (0x0008815d) bg_popup_sub_pane_cp06

0xcf37,	// (0x0008ae7a) popup_image_focus_window_g1

0xcf3f,	// (0x0008ae82) popup_image_focus_window_g2

0xcf47,	// (0x0008ae8a) popup_image_focus_window_g3

0xcf4f,	// (0x0008ae92) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0008d625) popup_image_focus_window_g

0xcf57,	// (0x0008ae9a) popup_image_focus_window_t1

0xcf65,	// (0x0008aea8) popup_image_focus_window_t2

0xcf75,	// (0x0008aeb8) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0008d62e) popup_image_focus_window_t

0xcf83,	// (0x0008aec6) camera2_autofocus_pane_g1

0xc183,	// (0x0008a0c6) bg_tb_trans_pane_cp01

0xcf91,	// (0x0008aed4) popup_image_details_window_g1

0xcfa4,	// (0x0008aee7) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0008d640) popup_image_details_window_g

0xcfcd,	// (0x0008af10) popup_image_details_window_t1

0xcfdf,	// (0x0008af22) popup_image_details_window_t2

0xcff8,	// (0x0008af3b) popup_image_details_window_t3

0xd00c,	// (0x0008af4f) popup_image_details_window_t4

0xd027,	// (0x0008af6a) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0008d647) popup_image_details_window_t

0xa978,	// (0x000888bb) bg_calc_paper_pane_ParamLimits

0xa21a,	// (0x0008815d) grid_highlight_pane_cp013

0x2342,	// (0x00080285) list_calc_pane_ParamLimits

0x2354,	// (0x00080297) scroll_pane_cp024

0xa98c,	// (0x000888cf) bg_calc_display_pane_ParamLimits

0x235c,	// (0x0008029f) calc_display_pane_t1_ParamLimits

0x2371,	// (0x000802b4) calc_display_pane_t2_ParamLimits

0x2386,	// (0x000802c9) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0008d079) calc_display_pane_t_ParamLimits

0x2456,	// (0x00080399) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0008d096) cell_calc_pane_g

0x245f,	// (0x000803a2) cell_calc_pane_t1

0xa9eb,	// (0x0008892e) grid_highlight_pane_cp02_ParamLimits

0xaa01,	// (0x00088944) toolbar_button_pane_cp01_ParamLimits

0xaa01,	// (0x00088944) toolbar_button_pane_cp01

0xb8a9,	// (0x000897ec) temp_image_control_pane_ParamLimits

0xb8a9,	// (0x000897ec) temp_image_control_pane

0xc183,	// (0x0008a0c6) main_mp3_pane

0xd041,	// (0x0008af84) temp_image_control_pane_g1_ParamLimits

0xd041,	// (0x0008af84) temp_image_control_pane_g1

0xd04f,	// (0x0008af92) temp_image_control_pane_g2_ParamLimits

0xd04f,	// (0x0008af92) temp_image_control_pane_g2

0xd061,	// (0x0008afa4) temp_image_control_pane_g3_ParamLimits

0xd061,	// (0x0008afa4) temp_image_control_pane_g3

0x5afd,	// (0x00083a40) temp_image_control_pane_g4_ParamLimits

0x5afd,	// (0x00083a40) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0008d652) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0008d652) temp_image_control_pane_g

0xd041,	// (0x0008af84) main_mp3_pane_g1

0x5b0e,	// (0x00083a51) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0008d65b) main_mp3_pane_g

0xd0a4,	// (0x0008afe7) main_mp3_pane_t1

0xab79,	// (0x00088abc) main_camera_pane_g8_ParamLimits

0xab79,	// (0x00088abc) main_camera_pane_g8

0x2e36,	// (0x00080d79) main_video_pane_g7_ParamLimits

0x2e36,	// (0x00080d79) main_video_pane_g7

0x55ad,	// (0x000834f0) main_camera2_pane_t7_ParamLimits

0x55ad,	// (0x000834f0) main_camera2_pane_t7

0xacc5,	// (0x00088c08) scroll_pane_cp025_ParamLimits

0xacc5,	// (0x00088c08) scroll_pane_cp025

0xacd9,	// (0x00088c1c) scroll_pane_cp026_ParamLimits

0xacd9,	// (0x00088c1c) scroll_pane_cp026

0xace8,	// (0x00088c2b) wml_content_pane_ParamLimits

0xa21a,	// (0x0008815d) main_touch_calib_pane

0x5bb2,	// (0x00083af5) main_touch_calib_pane_g1

0x5bbe,	// (0x00083b01) main_touch_calib_pane_g2

0x5bca,	// (0x00083b0d) main_touch_calib_pane_g3

0x5bd6,	// (0x00083b19) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0008d679) main_touch_calib_pane_g

0x5be2,	// (0x00083b25) main_touch_calib_pane_t1

0x5bf9,	// (0x00083b3c) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0008d682) main_touch_calib_pane_t

0xb480,	// (0x000893c3) mup_progress_pane_cp02

0xb4b5,	// (0x000893f8) navi_pane_g1

0xb570,	// (0x000894b3) navi_pane_mp_t3

0xc183,	// (0x0008a0c6) main_mp3_pane_ParamLimits

0x5237,	// (0x0008317a) navi_pane_ParamLimits

0xd041,	// (0x0008af84) main_mp3_pane_g1_ParamLimits

0x5b0e,	// (0x00083a51) main_mp3_pane_g2_ParamLimits

0x5b1a,	// (0x00083a5d) main_mp3_pane_g3_ParamLimits

0x5b1a,	// (0x00083a5d) main_mp3_pane_g3

0x5b26,	// (0x00083a69) main_mp3_pane_g4_ParamLimits

0x5b26,	// (0x00083a69) main_mp3_pane_g4

0xd071,	// (0x0008afb4) main_mp3_pane_g5_ParamLimits

0xd071,	// (0x0008afb4) main_mp3_pane_g5

0xd07f,	// (0x0008afc2) main_mp3_pane_g6_ParamLimits

0xd07f,	// (0x0008afc2) main_mp3_pane_g6

0xd08c,	// (0x0008afcf) main_mp3_pane_g7_ParamLimits

0xd08c,	// (0x0008afcf) main_mp3_pane_g7

0xd098,	// (0x0008afdb) main_mp3_pane_g8_ParamLimits

0xd098,	// (0x0008afdb) main_mp3_pane_g8

0xf718,	// (0x0008d65b) main_mp3_pane_g_ParamLimits

0x5b32,	// (0x00083a75) main_mp3_pane_t2

0x5b42,	// (0x00083a85) main_mp3_pane_t3

0xd0b2,	// (0x0008aff5) main_mp3_pane_t4

0xd0c0,	// (0x0008b003) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0008d66c) main_mp3_pane_t

0xd0ce,	// (0x0008b011) mup_progress_pane_cp01

0x0a7f,	// (0x0007e9c2) aid_zoom_text_secondary2

0xcebc,	// (0x0008adff) list_cale_ev2_pane

0xcec4,	// (0x0008ae07) scroll_pane_cp023_ParamLimits

0x5c54,	// (0x00083b97) field_cale_ev2_pane_ParamLimits

0x5c54,	// (0x00083b97) field_cale_ev2_pane

0x5c6f,	// (0x00083bb2) field_cale_ev2_pane_g1_ParamLimits

0x5c6f,	// (0x00083bb2) field_cale_ev2_pane_g1

0x5c7b,	// (0x00083bbe) field_cale_ev2_pane_g2_ParamLimits

0x5c7b,	// (0x00083bbe) field_cale_ev2_pane_g2

0x5c93,	// (0x00083bd6) field_cale_ev2_pane_g3_ParamLimits

0x5c93,	// (0x00083bd6) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0008d68d) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0008d68d) field_cale_ev2_pane_g

0x0d63,	// (0x0007eca6) field_cale_ev2_pane_t1_ParamLimits

0x0d63,	// (0x0007eca6) field_cale_ev2_pane_t1

0x0d7a,	// (0x0007ecbd) field_cale_ev2_pane_t2_ParamLimits

0x0d7a,	// (0x0007ecbd) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0008d696) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0008d696) field_cale_ev2_pane_t

0x49ee,	// (0x00082931) main_postcard_pane_g5_ParamLimits

0x49ee,	// (0x00082931) main_postcard_pane_g5

0x49fc,	// (0x0008293f) main_postcard_pane_g6_ParamLimits

0x49fc,	// (0x0008293f) main_postcard_pane_g6

0x2c74,	// (0x00080bb7) camera2_autofocus_pane_cp_ParamLimits

0x2c74,	// (0x00080bb7) camera2_autofocus_pane_cp

0xc183,	// (0x0008a0c6) main_mup3_pane

0x5cfa,	// (0x00083c3d) main_mup3_pane_g1_ParamLimits

0x5cfa,	// (0x00083c3d) main_mup3_pane_g1

0x5d1b,	// (0x00083c5e) main_mup3_pane_g2_ParamLimits

0x5d1b,	// (0x00083c5e) main_mup3_pane_g2

0x5d8f,	// (0x00083cd2) main_mup3_pane_g3_ParamLimits

0x5d8f,	// (0x00083cd2) main_mup3_pane_g3

0x5df4,	// (0x00083d37) main_mup3_pane_g4_ParamLimits

0x5df4,	// (0x00083d37) main_mup3_pane_g4

0x5e59,	// (0x00083d9c) main_mup3_pane_g5_ParamLimits

0x5e59,	// (0x00083d9c) main_mup3_pane_g5

0x5ebe,	// (0x00083e01) main_mup3_pane_g6_ParamLimits

0x5ebe,	// (0x00083e01) main_mup3_pane_g6

0xd0d6,	// (0x0008b019) main_mup3_pane_g7_ParamLimits

0xd0d6,	// (0x0008b019) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0008d6a6) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0008d6a6) main_mup3_pane_g

0x5f34,	// (0x00083e77) main_mup3_pane_t1_ParamLimits

0x5f34,	// (0x00083e77) main_mup3_pane_t1

0x5f9f,	// (0x00083ee2) main_mup3_pane_t2_ParamLimits

0x5f9f,	// (0x00083ee2) main_mup3_pane_t2

0x6064,	// (0x00083fa7) main_mup3_pane_t4_ParamLimits

0x6064,	// (0x00083fa7) main_mup3_pane_t4

0x60b8,	// (0x00083ffb) main_mup3_pane_t5_ParamLimits

0x60b8,	// (0x00083ffb) main_mup3_pane_t5

0x6168,	// (0x000840ab) main_mup3_pane_t6_ParamLimits

0x6168,	// (0x000840ab) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0008d6b7) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0008d6b7) main_mup3_pane_t

0x6212,	// (0x00084155) mup3_progress_pane_ParamLimits

0x6212,	// (0x00084155) mup3_progress_pane

0x6290,	// (0x000841d3) popup_mup3_control_window_ParamLimits

0x6290,	// (0x000841d3) popup_mup3_control_window

0xd0e4,	// (0x0008b027) popup_mup3_text_window

0x62ad,	// (0x000841f0) mup3_progress_pane_t1

0x62cc,	// (0x0008420f) mup3_progress_pane_t2

0xd0ec,	// (0x0008b02f) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0008d6c4) mup3_progress_pane_t

0xd109,	// (0x0008b04c) mup_progress_pane_cp03

0xa21a,	// (0x0008815d) bg_tb_trans_pane_cp04

0x62eb,	// (0x0008422e) mup3_volume_pane

0x62f3,	// (0x00084236) popup_mup3_control_window_g1

0xd3bd,	// (0x0008b300) mup3_volume_pane_g1

0xd3c6,	// (0x0008b309) mup3_volume_pane_g2

0xd3cf,	// (0x0008b312) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0008d6cb) mup3_volume_pane_g

0xa21a,	// (0x0008815d) bg_tb_trans_pane_cp03

0xd119,	// (0x0008b05c) popup_mup3_text_window_g1

0xd121,	// (0x0008b064) popup_mup3_text_window_t1

0xa9d4,	// (0x00088917) list_calc_item_pane_g1_ParamLimits

0xcb8f,	// (0x0008aad2) mup_volume_pane_cp_g1

0x5c12,	// (0x00083b55) main_touch_calib_pane_t3

0x5c28,	// (0x00083b6b) main_touch_calib_pane_t4

0x5c3e,	// (0x00083b81) main_touch_calib_pane_t5

0x1d68,	// (0x0007fcab) aid_cell_size_toolbar2

0x1d70,	// (0x0007fcb3) aid_popup3_width_pane

0x0a6f,	// (0x0007e9b2) aid_zoom_text_msg_primary

0x2c47,	// (0x00080b8a) vorec_t7

0xa998,	// (0x000888db) bg_calc_paper_pane_g1_ParamLimits

0xa9a4,	// (0x000888e7) bg_calc_paper_pane_g2_ParamLimits

0xa9b0,	// (0x000888f3) bg_calc_paper_pane_g3_ParamLimits

0xa9bc,	// (0x000888ff) bg_calc_paper_pane_g4_ParamLimits

0xa9c8,	// (0x0008890b) bg_calc_paper_pane_g5_ParamLimits

0x23c7,	// (0x0008030a) bg_calc_paper_pane_g6_ParamLimits

0x23d8,	// (0x0008031b) bg_calc_paper_pane_g7_ParamLimits

0x23e9,	// (0x0008032c) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0008d080) bg_calc_paper_pane_g_ParamLimits

0x23fa,	// (0x0008033d) calc_bg_paper_pane_g9_ParamLimits

0x2d65,	// (0x00080ca8) image_qvga_pane_ParamLimits

0x2d65,	// (0x00080ca8) image_qvga_pane

0xa8c7,	// (0x0008880a) bg_popup_sub_pane_cp04_ParamLimits

0xb7e0,	// (0x00089723) popup_mup_playback_window_g1_ParamLimits

0xb7ec,	// (0x0008972f) popup_mup_playback_window_t1_ParamLimits

0xb801,	// (0x00089744) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0008d40a) popup_mup_playback_window_t_ParamLimits

0x56dc,	// (0x0008361f) main_mup2_pane_g3_ParamLimits

0x56dc,	// (0x0008361f) main_mup2_pane_g3

0x3011,	// (0x00080f54) popup_toolbar_window_cp04

0xbbfc,	// (0x00089b3f) popup_call2_audio_second_window_g3_ParamLimits

0xbbfc,	// (0x00089b3f) popup_call2_audio_second_window_g3

0xc006,	// (0x00089f49) popup_call2_audio_first_window_g4_ParamLimits

0xc006,	// (0x00089f49) popup_call2_audio_first_window_g4

0xc69f,	// (0x0008a5e2) popup_call2_audio_in_window_g4_ParamLimits

0xc69f,	// (0x0008a5e2) popup_call2_audio_in_window_g4

0x4b02,	// (0x00082a45) aid_area_sk_bg_cut_ParamLimits

0x4b02,	// (0x00082a45) aid_area_sk_bg_cut

0xb816,	// (0x00089759) aid_area_sk_bg_cut_2_ParamLimits

0xb816,	// (0x00089759) aid_area_sk_bg_cut_2

0x5a64,	// (0x000839a7) aid_placing_details_win

0x5a6c,	// (0x000839af) aid_placing_details_win_2

0xcf83,	// (0x0008aec6) camera2_autofocus_pane_g1_ParamLimits

0x1fbf,	// (0x0007ff02) popup_fixed_preview_cale_window_ParamLimits

0x1fbf,	// (0x0007ff02) popup_fixed_preview_cale_window

0xb5f0,	// (0x00089533) navi_slider_pane_g3

0xb5f9,	// (0x0008953c) navi_slider_pane_g4

0xb602,	// (0x00089545) navi_slider_pane_g5

0xb5f0,	// (0x00089533) navi_slider_pane_g6

0x4405,	// (0x00082348) navi_slider_pane_g7

0xb717,	// (0x0008965a) mup_scale_pane_g3

0xb720,	// (0x00089663) mup_scale_pane_g4

0xb729,	// (0x0008966c) mup_scale_pane_g5

0x4880,	// (0x000827c3) mup_scale_pane_g6

0x4889,	// (0x000827cc) mup_scale_pane_g7

0xb5f0,	// (0x00089533) cams2_slider_pane_g3

0xcc11,	// (0x0008ab54) cams2_slider_pane_g4

0x59bf,	// (0x00083902) cams2_slider_pane_g5

0xb5f0,	// (0x00089533) cams2_slider_pane_g6

0x59c7,	// (0x0008390a) cams2_slider_pane_g7

0xce42,	// (0x0008ad85) camera2_autofocus_pane_cp_g1

0xc9fe,	// (0x0008a941) bg_popup_preview_window_pane_cp02_ParamLimits

0xc9fe,	// (0x0008a941) bg_popup_preview_window_pane_cp02

0xd12f,	// (0x0008b072) list_fp_cale_pane_ParamLimits

0xd12f,	// (0x0008b072) list_fp_cale_pane

0xd13b,	// (0x0008b07e) popup_fixed_preview_cale_window_t1_ParamLimits

0xd13b,	// (0x0008b07e) popup_fixed_preview_cale_window_t1

0x62fc,	// (0x0008423f) popup_fixed_preview_cale_window_t2_ParamLimits

0x62fc,	// (0x0008423f) popup_fixed_preview_cale_window_t2

0x6311,	// (0x00084254) popup_fixed_preview_cale_window_t3_ParamLimits

0x6311,	// (0x00084254) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0008d6d2) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0008d6d2) popup_fixed_preview_cale_window_t

0x6326,	// (0x00084269) list_single_fp_cale_pane_ParamLimits

0x6326,	// (0x00084269) list_single_fp_cale_pane

0xd159,	// (0x0008b09c) list_single_fp_cale_pane_g1_ParamLimits

0xd159,	// (0x0008b09c) list_single_fp_cale_pane_g1

0xd165,	// (0x0008b0a8) list_single_fp_cale_pane_g2_ParamLimits

0xd165,	// (0x0008b0a8) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0008d6d9) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0008d6d9) list_single_fp_cale_pane_g

0xd17e,	// (0x0008b0c1) list_single_fp_cale_pane_t1_ParamLimits

0xd17e,	// (0x0008b0c1) list_single_fp_cale_pane_t1

0xd190,	// (0x0008b0d3) list_single_fp_cale_pane_t2_ParamLimits

0xd190,	// (0x0008b0d3) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0008d6e0) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0008d6e0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa21a,	// (0x0008815d) main_dialer_pane

0x6336,	// (0x00084279) aid_cell_size_keypad

0x6340,	// (0x00084283) dialer_ne_pane

0x634a,	// (0x0008428d) grid_dialer_command_1_pane

0x6352,	// (0x00084295) grid_dialer_command_2_pane

0x635a,	// (0x0008429d) grid_dialer_keypad_pane

0x636e,	// (0x000842b1) bg_popup_call_pane_cp06_ParamLimits

0x636e,	// (0x000842b1) bg_popup_call_pane_cp06

0x637a,	// (0x000842bd) dialer_ne_clear_pane_ParamLimits

0x637a,	// (0x000842bd) dialer_ne_clear_pane

0xd1c3,	// (0x0008b106) dialer_ne_pane_g1

0xd1cb,	// (0x0008b10e) dialer_ne_pane_t1_ParamLimits

0xd1cb,	// (0x0008b10e) dialer_ne_pane_t1

0x6386,	// (0x000842c9) dialer_ne_pane_t2_ParamLimits

0x6386,	// (0x000842c9) dialer_ne_pane_t2

0x63a3,	// (0x000842e6) dialer_ne_pane_t3_ParamLimits

0x63a3,	// (0x000842e6) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0008d6e5) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0008d6e5) dialer_ne_pane_t

0x63c7,	// (0x0008430a) dialer_ne_pane_t3_copy1_ParamLimits

0x63c7,	// (0x0008430a) dialer_ne_pane_t3_copy1

0x63eb,	// (0x0008432e) cell_dialer_keypad_pane_ParamLimits

0x63eb,	// (0x0008432e) cell_dialer_keypad_pane

0x6402,	// (0x00084345) cell_dialer_command_1_pane_ParamLimits

0x6402,	// (0x00084345) cell_dialer_command_1_pane

0x6418,	// (0x0008435b) cell_dialer_command_2_pane_ParamLimits

0x6418,	// (0x0008435b) cell_dialer_command_2_pane

0xd1dd,	// (0x0008b120) bg_button_pane_cp02_ParamLimits

0xd1dd,	// (0x0008b120) bg_button_pane_cp02

0x6427,	// (0x0008436a) cell_dialer_keypad_pane_g1_ParamLimits

0x6427,	// (0x0008436a) cell_dialer_keypad_pane_g1

0xd1dd,	// (0x0008b120) bg_button_pane_cp03_ParamLimits

0xd1dd,	// (0x0008b120) bg_button_pane_cp03

0x643c,	// (0x0008437f) cell_dialer_command_1_pane_g1_ParamLimits

0x643c,	// (0x0008437f) cell_dialer_command_1_pane_g1

0xd1e9,	// (0x0008b12c) bg_button_pane_cp04

0x6450,	// (0x00084393) cell_dialer_command_2_pane_g1

0xab71,	// (0x00088ab4) bg_button_pane_cp06

0xd1f1,	// (0x0008b134) dialer_ne_clear_pane_g1

0xb4c1,	// (0x00089404) navi_pane_g2

0xb4ef,	// (0x00089432) navi_pane_g3

0x0002,

0xf3ca,	// (0x0008d30d) navi_pane_g

0xb57e,	// (0x000894c1) navi_pane_mv_g2

0xb5a7,	// (0x000894ea) navi_pane_mv_g5

0x43d0,	// (0x00082313) navi_pane_mv_t1

0xa98c,	// (0x000888cf) main_clock2_pane

0xd39d,	// (0x0008b2e0) main_clock2_list_pane_ParamLimits

0xd39d,	// (0x0008b2e0) main_clock2_list_pane

0x64ab,	// (0x000843ee) main_clock2_pane_t1_ParamLimits

0x64ab,	// (0x000843ee) main_clock2_pane_t1

0x64d9,	// (0x0008441c) main_clock2_pane_t2_ParamLimits

0x64d9,	// (0x0008441c) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0008d6f1) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0008d6f1) main_clock2_pane_t

0x653e,	// (0x00084481) popup_clock_analogue_window_cp03_ParamLimits

0x653e,	// (0x00084481) popup_clock_analogue_window_cp03

0x655c,	// (0x0008449f) popup_clock_digital_window_cp02_ParamLimits

0x655c,	// (0x0008449f) popup_clock_digital_window_cp02

0x65d1,	// (0x00084514) main_clock2_list_single_pane_ParamLimits

0x65d1,	// (0x00084514) main_clock2_list_single_pane

0xab71,	// (0x00088ab4) list_highlight_pane_cp05

0xd229,	// (0x0008b16c) main_clock2_list_single_pane_t1

0x3011,	// (0x00080f54) popup_toolbar_window_cp04_ParamLimits

0x5acd,	// (0x00083a10) camera2_autofocus_pane_g2_ParamLimits

0x5acd,	// (0x00083a10) camera2_autofocus_pane_g2

0x5ad9,	// (0x00083a1c) camera2_autofocus_pane_g3_ParamLimits

0x5ad9,	// (0x00083a1c) camera2_autofocus_pane_g3

0x5ae5,	// (0x00083a28) camera2_autofocus_pane_g4_ParamLimits

0x5ae5,	// (0x00083a28) camera2_autofocus_pane_g4

0x5af1,	// (0x00083a34) camera2_autofocus_pane_g5_ParamLimits

0x5af1,	// (0x00083a34) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0008d635) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0008d635) camera2_autofocus_pane_g

0x5cb7,	// (0x00083bfa) camera2_autofocus_pane_cp_g2

0x5cbf,	// (0x00083c02) camera2_autofocus_pane_cp_g3

0x5cc7,	// (0x00083c0a) camera2_autofocus_pane_cp_g4

0x5ccf,	// (0x00083c12) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0008d69b) camera2_autofocus_pane_cp_g

0x6366,	// (0x000842a9) popup_dialer_spcha_window

0xa21a,	// (0x0008815d) bg_popup_sub_pane_cp07

0xd237,	// (0x0008b17a) list_spcha_pane

0xd23f,	// (0x0008b182) list_single_spcha_pane_ParamLimits

0xd23f,	// (0x0008b182) list_single_spcha_pane

0xa21a,	// (0x0008815d) list_highlight_pane_cp06

0xd250,	// (0x0008b193) list_single_spcha_pane_t1

0xc449,	// (0x0008a38c) popup_call2_audio_out_window_g4_ParamLimits

0xc449,	// (0x0008a38c) popup_call2_audio_out_window_g4

0xa21a,	// (0x0008815d) main_imed2_pane

0x5150,	// (0x00083093) popup_imed_adjust2_window

0x5163,	// (0x000830a6) popup_imed_trans_window_ParamLimits

0x5163,	// (0x000830a6) popup_imed_trans_window

0xcc7a,	// (0x0008abbd) popup_blid_sat_info2_window_t1

0xcc88,	// (0x0008abcb) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0008d5ca) popup_blid_sat_info2_window_t

0x6688,	// (0x000845cb) aid_size_cell_colour_35

0x66a2,	// (0x000845e5) aid_size_cell_colour_112

0x66b9,	// (0x000845fc) aid_size_cell_effect

0xc183,	// (0x0008a0c6) bg_tb_trans_pane_cp02

0xb406,	// (0x00089349) heading_imed_pane

0x66d3,	// (0x00084616) listscroll_imed_pane

0xd25e,	// (0x0008b1a1) heading_imed_pane_g1

0xd266,	// (0x0008b1a9) heading_imed_pane_t1

0xd274,	// (0x0008b1b7) grid_imed_colour_35_pane_ParamLimits

0xd274,	// (0x0008b1b7) grid_imed_colour_35_pane

0x66df,	// (0x00084622) grid_imed_effect_pane

0xd290,	// (0x0008b1d3) list_imed_aspect_pane

0x66ef,	// (0x00084632) scroll_pane_cp027_ParamLimits

0x66ef,	// (0x00084632) scroll_pane_cp027

0x66fb,	// (0x0008463e) cell_imed_effect_pane_ParamLimits

0x66fb,	// (0x0008463e) cell_imed_effect_pane

0xd298,	// (0x0008b1db) cell_imed_colour_pane_ParamLimits

0xd298,	// (0x0008b1db) cell_imed_colour_pane

0xd2e2,	// (0x0008b225) cell_imed_colour_pane_g1_ParamLimits

0xd2e2,	// (0x0008b225) cell_imed_colour_pane_g1

0xd2f3,	// (0x0008b236) hgihlgiht_grid_pane_cp016_ParamLimits

0xd2f3,	// (0x0008b236) hgihlgiht_grid_pane_cp016

0x6717,	// (0x0008465a) cell_imed_effect_pane_g1

0x671f,	// (0x00084662) grid_highlight_pane_cp017

0xd304,	// (0x0008b247) list_imed_single_pane_ParamLimits

0xd304,	// (0x0008b247) list_imed_single_pane

0xa21a,	// (0x0008815d) list_highlight_pane_cp07

0xd318,	// (0x0008b25b) list_imed_aspect_pane_comp1_t1

0xca0a,	// (0x0008a94d) bg_tb_trans_pane_cp05

0xd33a,	// (0x0008b27d) popup_imed_adjust2_window_g1

0xd361,	// (0x0008b2a4) popup_imed_adjust2_window_t1

0xd379,	// (0x0008b2bc) slider_imed_adjust_pane

0xd38d,	// (0x0008b2d0) slider_imed_adjust_pane_g1

0xd3d8,	// (0x0008b31b) slider_imed_adjust_pane_g2

0xd3e8,	// (0x0008b32b) slider_imed_adjust_pane_g3

0xd3f9,	// (0x0008b33c) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0008d70e) slider_imed_adjust_pane_g

0x6728,	// (0x0008466b) aid_size_cell_clipart2

0xd40a,	// (0x0008b34d) grid_imed_clipart_pane

0xd414,	// (0x0008b357) scroll_pane_cp031

0x6734,	// (0x00084677) cell_imed_clipart_pane_ParamLimits

0x6734,	// (0x00084677) cell_imed_clipart_pane

0x6752,	// (0x00084695) cell_imed_clipart_pane_g1

0xa21a,	// (0x0008815d) grid_highlight_pane_cp014

0x648d,	// (0x000843d0) main_clock2_pane_g1_ParamLimits

0x648d,	// (0x000843d0) main_clock2_pane_g1

0x6578,	// (0x000844bb) aid_call2_pane_cp10

0x658a,	// (0x000844cd) aid_call_pane_cp10

0xb420,	// (0x00089363) popup_clock_analogue_window_cp10_g1

0xb420,	// (0x00089363) popup_clock_analogue_window_cp10_g2

0x659c,	// (0x000844df) popup_clock_analogue_window_cp10_g3

0x659c,	// (0x000844df) popup_clock_analogue_window_cp10_g4

0xb420,	// (0x00089363) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0008d6fc) popup_clock_analogue_window_cp10_g

0x65b2,	// (0x000844f5) popup_clock_analogue_window_cp10_t1

0x65e3,	// (0x00084526) clock_digital_number_pane_cp10_ParamLimits

0x65e3,	// (0x00084526) clock_digital_number_pane_cp10

0x65fd,	// (0x00084540) clock_digital_number_pane_cp11_ParamLimits

0x65fd,	// (0x00084540) clock_digital_number_pane_cp11

0x6617,	// (0x0008455a) clock_digital_number_pane_cp12_ParamLimits

0x6617,	// (0x0008455a) clock_digital_number_pane_cp12

0x6631,	// (0x00084574) clock_digital_number_pane_cp13_ParamLimits

0x6631,	// (0x00084574) clock_digital_number_pane_cp13

0x664d,	// (0x00084590) clock_digital_separator_pane_cp10_ParamLimits

0x664d,	// (0x00084590) clock_digital_separator_pane_cp10

0x6667,	// (0x000845aa) popup_clock_digital_window_cp02_t1_ParamLimits

0x6667,	// (0x000845aa) popup_clock_digital_window_cp02_t1

0xa8bf,	// (0x00088802) clock_digital_number_pane_cp10_g1

0xa8bf,	// (0x00088802) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0008d717) clock_digital_number_pane_cp10_g

0xa8bf,	// (0x00088802) clock_digital_separator_pane_cp10_g1

0xa8bf,	// (0x00088802) clock_digital_separator_pane_g2_cp10

0xb5af,	// (0x000894f2) navi_pane_vded_g4

0xb5b8,	// (0x000894fb) navi_pane_vded_g5

0xb5c1,	// (0x00089504) navi_pane_vded_t1

0xa21a,	// (0x0008815d) main_vded_pane

0x675b,	// (0x0008469e) main_vded_pane_g1

0x6767,	// (0x000846aa) main_vded_pane_g2

0x6771,	// (0x000846b4) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0008d71c) main_vded_pane_g

0x677b,	// (0x000846be) main_vded_pane_t1

0x6789,	// (0x000846cc) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0008d723) main_vded_pane_t

0x6797,	// (0x000846da) vded_slider_pane

0x67a1,	// (0x000846e4) vded_video_pane

0xd41c,	// (0x0008b35f) vded_video_pane_g1

0x67ad,	// (0x000846f0) vded_video_pane_g2

0xce42,	// (0x0008ad85) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0008d728) vded_video_pane_g

0xd426,	// (0x0008b369) vded_slider_pane_g1

0xcb8f,	// (0x0008aad2) vded_slider_pane_g2

0xd42f,	// (0x0008b372) vded_slider_pane_g3

0xd438,	// (0x0008b37b) vded_slider_pane_g4

0xd441,	// (0x0008b384) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0008d72f) vded_slider_pane_g

0x6284,	// (0x000841c7) mup3_rocker_pane_ParamLimits

0x6284,	// (0x000841c7) mup3_rocker_pane

0x67b6,	// (0x000846f9) mup3_control_keys_pane_g1

0x67be,	// (0x00084701) mup3_control_keys_pane_g2

0x67c6,	// (0x00084709) mup3_control_keys_pane_g3

0x67ce,	// (0x00084711) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0008d73a) mup3_control_keys_pane_g

0x1fe7,	// (0x0007ff2a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1fe7,	// (0x0007ff2a) popup_toolbar2_fixed_window_cp01

0x62a0,	// (0x000841e3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x62a0,	// (0x000841e3) popup_toolbar2_fixed_window_cp02

0xbd6e,	// (0x00089cb1) popup_call2_audio_second_window_t4_ParamLimits

0xbd6e,	// (0x00089cb1) popup_call2_audio_second_window_t4

0xc2b6,	// (0x0008a1f9) popup_call2_audio_first_window_t6_ParamLimits

0xc2b6,	// (0x0008a1f9) popup_call2_audio_first_window_t6

0xc54c,	// (0x0008a48f) popup_call2_audio_out_window_t6_ParamLimits

0xc54c,	// (0x0008a48f) popup_call2_audio_out_window_t6

0xa21a,	// (0x0008815d) main_vitu_pane

0x67de,	// (0x00084721) aid_size_cell_itu_ParamLimits

0x67de,	// (0x00084721) aid_size_cell_itu

0xd39d,	// (0x0008b2e0) bg_popup_window_pane_cp08_ParamLimits

0xd39d,	// (0x0008b2e0) bg_popup_window_pane_cp08

0x67ec,	// (0x0008472f) field_vitu_entry_pane_ParamLimits

0x67ec,	// (0x0008472f) field_vitu_entry_pane

0x67fb,	// (0x0008473e) grid_vitu_function_pane_ParamLimits

0x67fb,	// (0x0008473e) grid_vitu_function_pane

0x680b,	// (0x0008474e) grid_vitu_itu_pane_ParamLimits

0x680b,	// (0x0008474e) grid_vitu_itu_pane

0x681b,	// (0x0008475e) cell_vitu_itu_pane_ParamLimits

0x681b,	// (0x0008475e) cell_vitu_itu_pane

0x6832,	// (0x00084775) cell_vitu_function_pane_ParamLimits

0x6832,	// (0x00084775) cell_vitu_function_pane

0xc183,	// (0x0008a0c6) bg_popup_sub_pane_cp08_ParamLimits

0xc183,	// (0x0008a0c6) bg_popup_sub_pane_cp08

0x6846,	// (0x00084789) field_vitu_entry_pane_t1_ParamLimits

0x6846,	// (0x00084789) field_vitu_entry_pane_t1

0xd462,	// (0x0008b3a5) field_vitu_entry_pane_t2_ParamLimits

0xd462,	// (0x0008b3a5) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0008d748) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0008d748) field_vitu_entry_pane_t

0xd47f,	// (0x0008b3c2) bg_button_pane_cp05_ParamLimits

0xd47f,	// (0x0008b3c2) bg_button_pane_cp05

0x6860,	// (0x000847a3) cell_vitu_itu_pane_g1

0x6878,	// (0x000847bb) cell_vitu_itu_pane_t1_ParamLimits

0x6878,	// (0x000847bb) cell_vitu_itu_pane_t1

0x688a,	// (0x000847cd) cell_vitu_itu_pane_t2_ParamLimits

0x688a,	// (0x000847cd) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0008d74d) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0008d74d) cell_vitu_itu_pane_t

0xd48d,	// (0x0008b3d0) bg_button_pane_cp07

0x68cd,	// (0x00084810) cell_vitu_function_pane_g1

0x2269,	// (0x000801ac) main_calc_pane_g1

0x1da4,	// (0x0007fce7) aid_visual_content_pane

0xa21a,	// (0x0008815d) main_vradio_pane

0x68d6,	// (0x00084819) main_vradio_pane_g1_ParamLimits

0x68d6,	// (0x00084819) main_vradio_pane_g1

0xd497,	// (0x0008b3da) main_vradio_pane_g2_ParamLimits

0xd497,	// (0x0008b3da) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0008d754) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0008d754) main_vradio_pane_g

0x68e4,	// (0x00084827) main_vradio_pane_t1_ParamLimits

0x68e4,	// (0x00084827) main_vradio_pane_t1

0x68f6,	// (0x00084839) main_vradio_pane_t2_ParamLimits

0x68f6,	// (0x00084839) main_vradio_pane_t2

0xd4a4,	// (0x0008b3e7) main_vradio_pane_t3_ParamLimits

0xd4a4,	// (0x0008b3e7) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0008d759) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0008d759) main_vradio_pane_t

0x6908,	// (0x0008484b) vradio_rocker_control_pane_ParamLimits

0x6908,	// (0x0008484b) vradio_rocker_control_pane

0x6914,	// (0x00084857) vradio_station_info_pane_ParamLimits

0x6914,	// (0x00084857) vradio_station_info_pane

0xd4b8,	// (0x0008b3fb) vradio_frequency_info_pane_ParamLimits

0xd4b8,	// (0x0008b3fb) vradio_frequency_info_pane

0xce42,	// (0x0008ad85) vradio_station_info_pane_g1

0xd4c7,	// (0x0008b40a) vradio_station_info_pane_t1_ParamLimits

0xd4c7,	// (0x0008b40a) vradio_station_info_pane_t1

0xd4e9,	// (0x0008b42c) vradio_station_info_pane_t2_ParamLimits

0xd4e9,	// (0x0008b42c) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0008d760) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0008d760) vradio_station_info_pane_t

0xd4fb,	// (0x0008b43e) vradio_tuning_pane

0xd503,	// (0x0008b446) vradio_rocker_control_pane_g1

0xd50b,	// (0x0008b44e) vradio_rocker_control_pane_g2

0xd513,	// (0x0008b456) vradio_rocker_control_pane_g3

0xd51b,	// (0x0008b45e) vradio_rocker_control_pane_g4

0xd523,	// (0x0008b466) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0008d765) vradio_rocker_control_pane_g

0x6921,	// (0x00084864) vradio_frequency_info_pane_g1

0xd52b,	// (0x0008b46e) vradio_frequency_info_pane_t1_ParamLimits

0xd52b,	// (0x0008b46e) vradio_frequency_info_pane_t1

0x692b,	// (0x0008486e) vradio_tuning_pane_g1

0x6936,	// (0x00084879) vradio_tuning_pane_t1

0x1de5,	// (0x0007fd28) area_side_right_pane_ParamLimits

0x1de5,	// (0x0007fd28) area_side_right_pane

0xc9c5,	// (0x0008a908) status_small_pane_g1

0xc9cd,	// (0x0008a910) status_small_pane_g2

0xc9d6,	// (0x0008a919) status_small_pane_g3

0xc9df,	// (0x0008a922) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0008d520) status_small_pane_g

0xc9e8,	// (0x0008a92b) status_small_pane_t1

0xa21a,	// (0x0008815d) main_video3_pane

0xd53f,	// (0x0008b482) cams_zoom_vslider_pane

0xd547,	// (0x0008b48a) image3_wide_pane_ParamLimits

0xd547,	// (0x0008b48a) image3_wide_pane

0xd561,	// (0x0008b4a4) image3_wide_small_pane

0xd56d,	// (0x0008b4b0) main_video3_pane_g1_ParamLimits

0xd56d,	// (0x0008b4b0) main_video3_pane_g1

0xd589,	// (0x0008b4cc) main_video3_pane_g2_ParamLimits

0xd589,	// (0x0008b4cc) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0008d770) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0008d770) main_video3_pane_g

0xd5a5,	// (0x0008b4e8) main_video3_pane_t1_ParamLimits

0xd5a5,	// (0x0008b4e8) main_video3_pane_t1

0xd5d0,	// (0x0008b513) main_video3_pane_t2_ParamLimits

0xd5d0,	// (0x0008b513) main_video3_pane_t2

0xd5fd,	// (0x0008b540) main_video3_pane_t3_ParamLimits

0xd5fd,	// (0x0008b540) main_video3_pane_t3

0x0002,

0xf832,	// (0x0008d775) main_video3_pane_t_ParamLimits

0xf832,	// (0x0008d775) main_video3_pane_t

0xd62a,	// (0x0008b56d) cams_zoom_vslider_pane_g1

0xd633,	// (0x0008b576) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0008d77c) cams_zoom_vslider_pane_g

0xd63b,	// (0x0008b57e) small_slider_vertical_pane

0xce42,	// (0x0008ad85) small_slider_vertical_pane_g1

0xce42,	// (0x0008ad85) small_slider_vertical_pane_g2

0xd643,	// (0x0008b586) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0008d781) small_slider_vertical_pane_g

0xa21a,	// (0x0008815d) main_hwr_training_pane

0xd64c,	// (0x0008b58f) hwr_training_instruct_pane_ParamLimits

0xd64c,	// (0x0008b58f) hwr_training_instruct_pane

0x6945,	// (0x00084888) hwr_training_navi_pane_ParamLimits

0x6945,	// (0x00084888) hwr_training_navi_pane

0x695f,	// (0x000848a2) hwr_training_write_pane_ParamLimits

0x695f,	// (0x000848a2) hwr_training_write_pane

0xa21a,	// (0x0008815d) bg_frame_shadow_pane

0xd683,	// (0x0008b5c6) hwr_training_write_pane_g1

0xd68b,	// (0x0008b5ce) hwr_training_write_pane_g2

0xd693,	// (0x0008b5d6) hwr_training_write_pane_g3

0xd69b,	// (0x0008b5de) hwr_training_write_pane_g4

0xd6a3,	// (0x0008b5e6) hwr_training_write_pane_g5

0xd6ab,	// (0x0008b5ee) hwr_training_write_pane_g6

0xd6b3,	// (0x0008b5f6) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0008d788) hwr_training_write_pane_g

0x6997,	// (0x000848da) hwr_training_navi_pane_g1_ParamLimits

0x6997,	// (0x000848da) hwr_training_navi_pane_g1

0x69a9,	// (0x000848ec) hwr_training_navi_pane_g2_ParamLimits

0x69a9,	// (0x000848ec) hwr_training_navi_pane_g2

0x69bb,	// (0x000848fe) hwr_training_navi_pane_g3_ParamLimits

0x69bb,	// (0x000848fe) hwr_training_navi_pane_g3

0x69cb,	// (0x0008490e) hwr_training_navi_pane_g4_ParamLimits

0x69cb,	// (0x0008490e) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0008d797) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0008d797) hwr_training_navi_pane_g

0x69e5,	// (0x00084928) hwr_training_navi_pane_t1

0x69f3,	// (0x00084936) list_single_hwr_training_instruct_pane_ParamLimits

0x69f3,	// (0x00084936) list_single_hwr_training_instruct_pane

0xd6bb,	// (0x0008b5fe) list_single_hwr_training_instruct_pane_t1

0xcd82,	// (0x0008acc5) bg_frame_shadow_pane_g1

0xd6ca,	// (0x0008b60d) bg_frame_shadow_pane_g2

0xd6d2,	// (0x0008b615) bg_frame_shadow_pane_g3

0xd6da,	// (0x0008b61d) bg_frame_shadow_pane_g4

0xd6e2,	// (0x0008b625) bg_frame_shadow_pane_g5

0xd6ea,	// (0x0008b62d) bg_frame_shadow_pane_g6

0xd6f2,	// (0x0008b635) bg_frame_shadow_pane_g7

0xaa45,	// (0x00088988) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0008d7a2) bg_frame_shadow_pane_g

0xa21a,	// (0x0008815d) main_video_tele_dialer_pane

0x6a0c,	// (0x0008494f) aid_size_cell_video_keypad_ParamLimits

0x6a0c,	// (0x0008494f) aid_size_cell_video_keypad

0x6a1c,	// (0x0008495f) grid_video_dialer_keypad_pane_ParamLimits

0x6a1c,	// (0x0008495f) grid_video_dialer_keypad_pane

0x6a4e,	// (0x00084991) video_down_pane_cp_ParamLimits

0x6a4e,	// (0x00084991) video_down_pane_cp

0x6a78,	// (0x000849bb) cell_video_dialer_keypad_pane_ParamLimits

0x6a78,	// (0x000849bb) cell_video_dialer_keypad_pane

0xd6fa,	// (0x0008b63d) bg_button_pane_cp08_ParamLimits

0xd6fa,	// (0x0008b63d) bg_button_pane_cp08

0x6a8f,	// (0x000849d2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6a8f,	// (0x000849d2) cell_video_dialer_keypad_pane_g1

0x6278,	// (0x000841bb) mup3_rocker2_pane_ParamLimits

0x6278,	// (0x000841bb) mup3_rocker2_pane

0xce42,	// (0x0008ad85) mup3_rocker2_pane_g1

0x50b4,	// (0x00082ff7) main_dialer2_pane

0xa21a,	// (0x0008815d) main_mp4_pane

0x6ae8,	// (0x00084a2b) main_mp4_pane_g1_ParamLimits

0x6ae8,	// (0x00084a2b) main_mp4_pane_g1

0x6af6,	// (0x00084a39) main_mp4_pane_g2_ParamLimits

0x6af6,	// (0x00084a39) main_mp4_pane_g2

0x6b04,	// (0x00084a47) main_mp4_pane_g3_ParamLimits

0x6b04,	// (0x00084a47) main_mp4_pane_g3

0x6b57,	// (0x00084a9a) main_mp4_pane_g4_ParamLimits

0x6b57,	// (0x00084a9a) main_mp4_pane_g4

0x6b85,	// (0x00084ac8) main_mp4_pane_g5_ParamLimits

0x6b85,	// (0x00084ac8) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0008d7c2) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0008d7c2) main_mp4_pane_g

0x6bf9,	// (0x00084b3c) main_mp4_pane_t1_ParamLimits

0x6bf9,	// (0x00084b3c) main_mp4_pane_t1

0x6c55,	// (0x00084b98) main_mp4_pane_t2_ParamLimits

0x6c55,	// (0x00084b98) main_mp4_pane_t2

0xd706,	// (0x0008b649) main_mp4_pane_t3_ParamLimits

0xd706,	// (0x0008b649) main_mp4_pane_t3

0x6ca7,	// (0x00084bea) main_mp4_pane_t4_ParamLimits

0x6ca7,	// (0x00084bea) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0008d7d3) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0008d7d3) main_mp4_pane_t

0x6ce7,	// (0x00084c2a) mp4_progress_pane_ParamLimits

0x6ce7,	// (0x00084c2a) mp4_progress_pane

0x6d31,	// (0x00084c74) mp4_rocker_pane_ParamLimits

0x6d31,	// (0x00084c74) mp4_rocker_pane

0xd734,	// (0x0008b677) mp4_progress_pane_t1

0xd74d,	// (0x0008b690) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0008d7dc) mp4_progress_pane_t

0xd766,	// (0x0008b6a9) mup_progress_pane_cp04

0xce42,	// (0x0008ad85) mp4_rocker_pane_g1

0x6d51,	// (0x00084c94) aid_cell_size_keypad2_ParamLimits

0x6d51,	// (0x00084c94) aid_cell_size_keypad2

0x6d61,	// (0x00084ca4) dialer2_ne_pane_ParamLimits

0x6d61,	// (0x00084ca4) dialer2_ne_pane

0x6d6d,	// (0x00084cb0) grid_dialer2_keypad_pane_ParamLimits

0x6d6d,	// (0x00084cb0) grid_dialer2_keypad_pane

0xdc8b,	// (0x0008bbce) bg_popup_call_pane_cp07_ParamLimits

0xdc8b,	// (0x0008bbce) bg_popup_call_pane_cp07

0x6d7b,	// (0x00084cbe) dialer2_ne_pane_t1_ParamLimits

0x6d7b,	// (0x00084cbe) dialer2_ne_pane_t1

0x6da0,	// (0x00084ce3) cell_dialer2_keypad_pane_ParamLimits

0x6da0,	// (0x00084ce3) cell_dialer2_keypad_pane

0xd78b,	// (0x0008b6ce) bg_button_pane_pane_cp04_ParamLimits

0xd78b,	// (0x0008b6ce) bg_button_pane_pane_cp04

0x6db7,	// (0x00084cfa) cell_dialer2_keypad_pane_g1_ParamLimits

0x6db7,	// (0x00084cfa) cell_dialer2_keypad_pane_g1

0x2ee3,	// (0x00080e26) aid_placing_vt_set_content_ParamLimits

0x2ee3,	// (0x00080e26) aid_placing_vt_set_content

0x2f0b,	// (0x00080e4e) aid_placing_vt_set_title_ParamLimits

0x2f0b,	// (0x00080e4e) aid_placing_vt_set_title

0xa21a,	// (0x0008815d) main_image3_pane

0x6e51,	// (0x00084d94) area_side_right_pane_cp01_ParamLimits

0x6e51,	// (0x00084d94) area_side_right_pane_cp01

0xaaf0,	// (0x00088a33) main_image3_pane_g1_ParamLimits

0xaaf0,	// (0x00088a33) main_image3_pane_g1

0x6e80,	// (0x00084dc3) main_image3_pane_g2_ParamLimits

0x6e80,	// (0x00084dc3) main_image3_pane_g2

0x6e99,	// (0x00084ddc) main_image3_pane_g3_ParamLimits

0x6e99,	// (0x00084ddc) main_image3_pane_g3

0x6eb2,	// (0x00084df5) main_image3_pane_g4_ParamLimits

0x6eb2,	// (0x00084df5) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0008d7eb) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0008d7eb) main_image3_pane_g

0x6ecb,	// (0x00084e0e) main_image3_pane_t1_ParamLimits

0x6ecb,	// (0x00084e0e) main_image3_pane_t1

0x6ef0,	// (0x00084e33) main_image3_pane_t2_ParamLimits

0x6ef0,	// (0x00084e33) main_image3_pane_t2

0x6f0f,	// (0x00084e52) main_image3_pane_t3_ParamLimits

0x6f0f,	// (0x00084e52) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0008d7f4) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0008d7f4) main_image3_pane_t

0xd39d,	// (0x0008b2e0) grid_sctrl_middle_pane_cp01_ParamLimits

0xd39d,	// (0x0008b2e0) grid_sctrl_middle_pane_cp01

0x6f70,	// (0x00084eb3) cell_sctrl_middle_pane_cp01_ParamLimits

0x6f70,	// (0x00084eb3) cell_sctrl_middle_pane_cp01

0x6f81,	// (0x00084ec4) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6f81,	// (0x00084ec4) cell_sctrl_middle_pane_cp01_g1

0xa21a,	// (0x0008815d) main_call4_pane

0x6f8e,	// (0x00084ed1) aid_size_button_call4_ParamLimits

0x6f8e,	// (0x00084ed1) aid_size_button_call4

0x6fc4,	// (0x00084f07) call4_windows_pane_ParamLimits

0x6fc4,	// (0x00084f07) call4_windows_pane

0x6fd9,	// (0x00084f1c) grid_call4_button_pane_ParamLimits

0x6fd9,	// (0x00084f1c) grid_call4_button_pane

0x7009,	// (0x00084f4c) call4_windows_conf_pane

0x7024,	// (0x00084f67) popup_call4_audio_first_window_ParamLimits

0x7024,	// (0x00084f67) popup_call4_audio_first_window

0x7076,	// (0x00084fb9) popup_call4_audio_second_window_ParamLimits

0x7076,	// (0x00084fb9) popup_call4_audio_second_window

0x708f,	// (0x00084fd2) popup_call4_audio_wait_window_ParamLimits

0x708f,	// (0x00084fd2) popup_call4_audio_wait_window

0x709d,	// (0x00084fe0) cell_call4_button_pane_ParamLimits

0x709d,	// (0x00084fe0) cell_call4_button_pane

0x70c0,	// (0x00085003) bg_button_pane_cp09_ParamLimits

0x70c0,	// (0x00085003) bg_button_pane_cp09

0x70cc,	// (0x0008500f) cell_call4_button_pane_g1_ParamLimits

0x70cc,	// (0x0008500f) cell_call4_button_pane_g1

0x70d9,	// (0x0008501c) cell_call4_button_pane_t1_ParamLimits

0x70d9,	// (0x0008501c) cell_call4_button_pane_t1

0xd79f,	// (0x0008b6e2) popup_call4_audio_conf_window_ParamLimits

0xd79f,	// (0x0008b6e2) popup_call4_audio_conf_window

0x62ad,	// (0x000841f0) mup3_progress_pane_t1_ParamLimits

0x62cc,	// (0x0008420f) mup3_progress_pane_t2_ParamLimits

0xd0ec,	// (0x0008b02f) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0008d6c4) mup3_progress_pane_t_ParamLimits

0xd109,	// (0x0008b04c) mup_progress_pane_cp03_ParamLimits

0x67d6,	// (0x00084719) mup3_control_keys_pane_g4_copy1

0x6d15,	// (0x00084c58) mp4_rocker2_pane_ParamLimits

0x6d15,	// (0x00084c58) mp4_rocker2_pane

0xd7b9,	// (0x0008b6fc) mp4_rocker2_pane_g1

0xd7c1,	// (0x0008b704) mp4_rocker2_pane_g2

0x711d,	// (0x00085060) mp4_rocker2_pane_g3

0x7125,	// (0x00085068) mp4_rocker2_pane_g4

0x712d,	// (0x00085070) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0008d7fd) mp4_rocker2_pane_g

0xa21a,	// (0x0008815d) main_camera4_pane

0xa21a,	// (0x0008815d) main_video4_pane

0x6a2a,	// (0x0008496d) main_video_tele_dialer_pane_t1_ParamLimits

0x6a2a,	// (0x0008496d) main_video_tele_dialer_pane_t1

0x6a3c,	// (0x0008497f) main_video_tele_dialer_pane_t2_ParamLimits

0x6a3c,	// (0x0008497f) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0008d7b3) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0008d7b3) main_video_tele_dialer_pane_t

0x714d,	// (0x00085090) cam4_autofocus_pane_ParamLimits

0x714d,	// (0x00085090) cam4_autofocus_pane

0x7165,	// (0x000850a8) cam4_image_uncrop_pane_ParamLimits

0x7165,	// (0x000850a8) cam4_image_uncrop_pane

0x717e,	// (0x000850c1) cam4_indicators_pane_ParamLimits

0x717e,	// (0x000850c1) cam4_indicators_pane

0x719a,	// (0x000850dd) main_camera4_pane_g1_ParamLimits

0x719a,	// (0x000850dd) main_camera4_pane_g1

0x71a6,	// (0x000850e9) main_camera4_pane_g2_ParamLimits

0x71a6,	// (0x000850e9) main_camera4_pane_g2

0x71a6,	// (0x000850e9) main_camera4_pane_g3_ParamLimits

0x71a6,	// (0x000850e9) main_camera4_pane_g3

0x71b2,	// (0x000850f5) main_camera4_pane_g4_ParamLimits

0x71b2,	// (0x000850f5) main_camera4_pane_g4

0x71be,	// (0x00085101) main_camera4_pane_g5_ParamLimits

0x71be,	// (0x00085101) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0008d808) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0008d808) main_camera4_pane_g

0x71d8,	// (0x0008511b) main_camera4_pane_t1_ParamLimits

0x71d8,	// (0x0008511b) main_camera4_pane_t1

0xd071,	// (0x0008afb4) bg_tb_trans_pane_cp06

0x722a,	// (0x0008516d) cam4_indicators_pane_g1

0x723b,	// (0x0008517e) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0008d823) cam4_indicators_pane_g

0x7253,	// (0x00085196) cam4_indicators_pane_t1

0x727d,	// (0x000851c0) main_video4_pane_g1_ParamLimits

0x727d,	// (0x000851c0) main_video4_pane_g1

0x7289,	// (0x000851cc) main_video4_pane_g2_ParamLimits

0x7289,	// (0x000851cc) main_video4_pane_g2

0x7295,	// (0x000851d8) main_video4_pane_g3_ParamLimits

0x7295,	// (0x000851d8) main_video4_pane_g3

0x72a1,	// (0x000851e4) main_video4_pane_g4_ParamLimits

0x72a1,	// (0x000851e4) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0008d82a) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0008d82a) main_video4_pane_g

0x72c3,	// (0x00085206) vid4_indicators_pane_ParamLimits

0x72c3,	// (0x00085206) vid4_indicators_pane

0x72e2,	// (0x00085225) video4_image_uncrop_cif_pane_ParamLimits

0x72e2,	// (0x00085225) video4_image_uncrop_cif_pane

0x72f1,	// (0x00085234) video4_image_uncrop_nhd_pane_ParamLimits

0x72f1,	// (0x00085234) video4_image_uncrop_nhd_pane

0x7165,	// (0x000850a8) video4_image_uncrop_vga_pane_ParamLimits

0x7165,	// (0x000850a8) video4_image_uncrop_vga_pane

0xc183,	// (0x0008a0c6) bg_tb_trans_pane_cp07

0x730a,	// (0x0008524d) vid4_indicators_pane_g1

0x7320,	// (0x00085263) vid4_indicators_pane_g2

0x7334,	// (0x00085277) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0008d835) vid4_indicators_pane_g

0x7365,	// (0x000852a8) vid4_indicators_pane_t1

0x737c,	// (0x000852bf) cam4_autofocus_pane_g1

0x7384,	// (0x000852c7) cam4_autofocus_pane_g2

0x738c,	// (0x000852cf) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0008d840) cam4_autofocus_pane_g

0x7394,	// (0x000852d7) cam4_autofocus_pane_g3_copy1

0x6a5c,	// (0x0008499f) video_down_pane_cp_t1

0x6a6a,	// (0x000849ad) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0008d7b8) video_down_pane_cp_t

0xd39d,	// (0x0008b2e0) popup_vitu2_window_ParamLimits

0xd39d,	// (0x0008b2e0) popup_vitu2_window

0x739c,	// (0x000852df) aid_size_cell2_itu2_ParamLimits

0x739c,	// (0x000852df) aid_size_cell2_itu2

0x73be,	// (0x00085301) aid_size_cell_itu2_ParamLimits

0x73be,	// (0x00085301) aid_size_cell_itu2

0xdc8b,	// (0x0008bbce) bg_popup_window_pane_cp09_ParamLimits

0xdc8b,	// (0x0008bbce) bg_popup_window_pane_cp09

0x7404,	// (0x00085347) field_vitu2_entry_pane_ParamLimits

0x7404,	// (0x00085347) field_vitu2_entry_pane

0x7424,	// (0x00085367) grid_vitu2_function_pane_ParamLimits

0x7424,	// (0x00085367) grid_vitu2_function_pane

0x7468,	// (0x000853ab) grid_vitu2_itu_pane_ParamLimits

0x7468,	// (0x000853ab) grid_vitu2_itu_pane

0x74e0,	// (0x00085423) cell_vitu2_itu_pane_ParamLimits

0x74e0,	// (0x00085423) cell_vitu2_itu_pane

0x74fb,	// (0x0008543e) cell_vitu2_function_pane_ParamLimits

0x74fb,	// (0x0008543e) cell_vitu2_function_pane

0xd7c9,	// (0x0008b70c) bg_popup_call_pane_cp08_ParamLimits

0xd7c9,	// (0x0008b70c) bg_popup_call_pane_cp08

0xd7e0,	// (0x0008b723) field_vitu2_entry_pane_g1

0xd7ec,	// (0x0008b72f) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0008d847) field_vitu2_entry_pane_g

0x0d8f,	// (0x0007ecd2) field_vitu2_entry_pane_t1_ParamLimits

0x0d8f,	// (0x0007ecd2) field_vitu2_entry_pane_t1

0x0dbd,	// (0x0007ed00) field_vitu2_entry_pane_t2_ParamLimits

0x0dbd,	// (0x0007ed00) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0008d84e) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0008d84e) field_vitu2_entry_pane_t

0x753f,	// (0x00085482) bg_button_pane_cp010_ParamLimits

0x753f,	// (0x00085482) bg_button_pane_cp010

0x754d,	// (0x00085490) cell_vitu2_itu_pane_g1

0x756d,	// (0x000854b0) cell_vitu2_itu_pane_t1_ParamLimits

0x756d,	// (0x000854b0) cell_vitu2_itu_pane_t1

0x0dda,	// (0x0007ed1d) cell_vitu2_itu_pane_t2_ParamLimits

0x0dda,	// (0x0007ed1d) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0008d858) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0008d858) cell_vitu2_itu_pane_t

0xc183,	// (0x0008a0c6) bg_button_pane_cp011

0x75b9,	// (0x000854fc) cell_vitu2_function_pane_g1

0xa21a,	// (0x0008815d) main_myfav_hc_pane

0x6f51,	// (0x00084e94) popup_image3_note_pane_ParamLimits

0x6f51,	// (0x00084e94) popup_image3_note_pane

0x6f5f,	// (0x00084ea2) popup_image3_tool_bar_pane_ParamLimits

0x6f5f,	// (0x00084ea2) popup_image3_tool_bar_pane

0x0e50,	// (0x0007ed93) cell_vitu2_itu_pane_t3_ParamLimits

0x0e50,	// (0x0007ed93) cell_vitu2_itu_pane_t3

0xa21a,	// (0x0008815d) bg_popup_trans_pane

0xd818,	// (0x0008b75b) grid_image3_tool_bar_pane

0xd822,	// (0x0008b765) bg_popup_trans_pane_g1

0xadce,	// (0x00088d11) bg_popup_trans_pane_g2

0xd82a,	// (0x0008b76d) bg_popup_trans_pane_g3

0xd832,	// (0x0008b775) bg_popup_trans_pane_g4

0xd83a,	// (0x0008b77d) bg_popup_trans_pane_g5

0xd842,	// (0x0008b785) bg_popup_trans_pane_g6

0xd84a,	// (0x0008b78d) bg_popup_trans_pane_g7

0xd852,	// (0x0008b795) bg_popup_trans_pane_g8

0xadae,	// (0x00088cf1) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0008d85f) bg_popup_trans_pane_g

0xd85a,	// (0x0008b79d) cell_image3_tool_bar_pane_ParamLimits

0xd85a,	// (0x0008b79d) cell_image3_tool_bar_pane

0xce42,	// (0x0008ad85) cell_image3_tool_bar_pane_g1

0xa21a,	// (0x0008815d) bg_popup_trans_pane_cp1

0xd870,	// (0x0008b7b3) popup_image3_note_pane_t1

0xd87e,	// (0x0008b7c1) popup_image3_note_pane_t2

0xd88c,	// (0x0008b7cf) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0008d872) popup_image3_note_pane_t

0xd89c,	// (0x0008b7df) popup_image3_note_pane_t3_copy1

0x75cd,	// (0x00085510) bg_myfav_hc_instruction_pane_ParamLimits

0x75cd,	// (0x00085510) bg_myfav_hc_instruction_pane

0x75e5,	// (0x00085528) cell_myfav_contact_pane_ParamLimits

0x75e5,	// (0x00085528) cell_myfav_contact_pane

0x75ff,	// (0x00085542) cell_myfav_contact_pane_cp1_ParamLimits

0x75ff,	// (0x00085542) cell_myfav_contact_pane_cp1

0x7617,	// (0x0008555a) cell_myfav_contact_pane_cp2_ParamLimits

0x7617,	// (0x0008555a) cell_myfav_contact_pane_cp2

0x762f,	// (0x00085572) cell_myfav_contact_pane_cp3_ParamLimits

0x762f,	// (0x00085572) cell_myfav_contact_pane_cp3

0x7646,	// (0x00085589) cell_myfav_contact_pane_cp4_ParamLimits

0x7646,	// (0x00085589) cell_myfav_contact_pane_cp4

0x765c,	// (0x0008559f) cell_myfav_contact_pane_cp5_ParamLimits

0x765c,	// (0x0008559f) cell_myfav_contact_pane_cp5

0x7670,	// (0x000855b3) cell_myfav_contact_pane_cp6_ParamLimits

0x7670,	// (0x000855b3) cell_myfav_contact_pane_cp6

0x7684,	// (0x000855c7) cell_myfav_contact_pane_cp7_ParamLimits

0x7684,	// (0x000855c7) cell_myfav_contact_pane_cp7

0xd8aa,	// (0x0008b7ed) listscroll_gen_pane_cp05

0x769c,	// (0x000855df) main_myfav_hc_pane_g1_ParamLimits

0x769c,	// (0x000855df) main_myfav_hc_pane_g1

0x76b6,	// (0x000855f9) main_myfav_hc_pane_g2_ParamLimits

0x76b6,	// (0x000855f9) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0008d879) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0008d879) main_myfav_hc_pane_g

0x76e8,	// (0x0008562b) main_myfav_hc_pane_t1_ParamLimits

0x76e8,	// (0x0008562b) main_myfav_hc_pane_t1

0xd8b3,	// (0x0008b7f6) main_myfav_hc_pane_t2_ParamLimits

0xd8b3,	// (0x0008b7f6) main_myfav_hc_pane_t2

0xd8c5,	// (0x0008b808) main_myfav_hc_pane_t3_ParamLimits

0xd8c5,	// (0x0008b808) main_myfav_hc_pane_t3

0x76ff,	// (0x00085642) main_myfav_hc_pane_t4_ParamLimits

0x76ff,	// (0x00085642) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0008d880) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0008d880) main_myfav_hc_pane_t

0xce42,	// (0x0008ad85) bg_myfav_hc_instruction_pane_g1

0xd8d7,	// (0x0008b81a) cell_myfav_contact_pane_g1_ParamLimits

0xd8d7,	// (0x0008b81a) cell_myfav_contact_pane_g1

0xd8d7,	// (0x0008b81a) cell_myfav_contact_pane_g2_ParamLimits

0xd8d7,	// (0x0008b81a) cell_myfav_contact_pane_g2

0xd8e3,	// (0x0008b826) cell_myfav_contact_pane_g3_ParamLimits

0xd8e3,	// (0x0008b826) cell_myfav_contact_pane_g3

0xd0d6,	// (0x0008b019) cell_myfav_contact_pane_g4_ParamLimits

0xd0d6,	// (0x0008b019) cell_myfav_contact_pane_g4

0xd8f0,	// (0x0008b833) cell_myfav_contact_pane_g5_ParamLimits

0xd8f0,	// (0x0008b833) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0008d88b) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0008d88b) cell_myfav_contact_pane_g

0x76d0,	// (0x00085613) main_myfav_hc_pane_g3_ParamLimits

0x76d0,	// (0x00085613) main_myfav_hc_pane_g3

0x1f21,	// (0x0007fe64) popup_adpt_find_window

0x7729,	// (0x0008566c) afind_page_pane_ParamLimits

0x7729,	// (0x0008566c) afind_page_pane

0x7736,	// (0x00085679) aid_size_cell_afind_ParamLimits

0x7736,	// (0x00085679) aid_size_cell_afind

0x7750,	// (0x00085693) bg_popup_sub_pane_cp09_ParamLimits

0x7750,	// (0x00085693) bg_popup_sub_pane_cp09

0x775d,	// (0x000856a0) find_pane_cp01_ParamLimits

0x775d,	// (0x000856a0) find_pane_cp01

0xd8fc,	// (0x0008b83f) grid_afind_control_pane_ParamLimits

0xd8fc,	// (0x0008b83f) grid_afind_control_pane

0x776a,	// (0x000856ad) grid_afind_pane_ParamLimits

0x776a,	// (0x000856ad) grid_afind_pane

0x7786,	// (0x000856c9) cell_afind_pane_ParamLimits

0x7786,	// (0x000856c9) cell_afind_pane

0xce42,	// (0x0008ad85) afind_page_pane_g1

0x77d2,	// (0x00085715) afind_page_pane_g2

0x77db,	// (0x0008571e) afind_page_pane_g3

0x0002,

0xf953,	// (0x0008d896) afind_page_pane_g

0x77e4,	// (0x00085727) afind_page_pane_t1

0xd910,	// (0x0008b853) cell_afind_grid_control_pane_ParamLimits

0xd910,	// (0x0008b853) cell_afind_grid_control_pane

0xd78b,	// (0x0008b6ce) bg_button_pane_cp69_ParamLimits

0xd78b,	// (0x0008b6ce) bg_button_pane_cp69

0x7804,	// (0x00085747) cell_afind_pane_g1_ParamLimits

0x7804,	// (0x00085747) cell_afind_pane_g1

0x7811,	// (0x00085754) cell_afind_pane_t1_ParamLimits

0x7811,	// (0x00085754) cell_afind_pane_t1

0xabc3,	// (0x00088b06) bg_button_pane_cp72

0xd91f,	// (0x0008b862) cell_afind_grid_control_pane_g1

0x4c2f,	// (0x00082b72) aid_image_placing_area_ParamLimits

0x4c2f,	// (0x00082b72) aid_image_placing_area

0xd44a,	// (0x0008b38d) field_vitu_entry_pane_g1_ParamLimits

0xd44a,	// (0x0008b38d) field_vitu_entry_pane_g1

0xd456,	// (0x0008b399) field_vitu_entry_pane_g2_ParamLimits

0xd456,	// (0x0008b399) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0008d743) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0008d743) field_vitu_entry_pane_g

0x6860,	// (0x000847a3) cell_vitu_itu_pane_g1_ParamLimits

0x68b0,	// (0x000847f3) cell_vitu_itu_pane_t3_ParamLimits

0x68b0,	// (0x000847f3) cell_vitu_itu_pane_t3

0xd734,	// (0x0008b677) mp4_progress_pane_t1_ParamLimits

0xd74d,	// (0x0008b690) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0008d7dc) mp4_progress_pane_t_ParamLimits

0xd766,	// (0x0008b6a9) mup_progress_pane_cp04_ParamLimits

0x7713,	// (0x00085656) main_myfav_hc_pane_t5_ParamLimits

0x7713,	// (0x00085656) main_myfav_hc_pane_t5

0x0a77,	// (0x0007e9ba) aid_zoom_text_primary

0x1f21,	// (0x0007fe64) popup_adpt_find_window_ParamLimits

0xc183,	// (0x0008a0c6) main_cam_set_pane

0x718c,	// (0x000850cf) cam4_zoom_pane_ParamLimits

0x718c,	// (0x000850cf) cam4_zoom_pane

0x7823,	// (0x00085766) main_cam_set_pane_g1_ParamLimits

0x7823,	// (0x00085766) main_cam_set_pane_g1

0x7831,	// (0x00085774) main_cam_set_pane_g2_ParamLimits

0x7831,	// (0x00085774) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0008d89d) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0008d89d) main_cam_set_pane_g

0x783d,	// (0x00085780) main_cam_set_pane_t1_ParamLimits

0x783d,	// (0x00085780) main_cam_set_pane_t1

0x7859,	// (0x0008579c) main_cset_listscroll_pane_ParamLimits

0x7859,	// (0x0008579c) main_cset_listscroll_pane

0x7888,	// (0x000857cb) main_cset_slider_pane_ParamLimits

0x7888,	// (0x000857cb) main_cset_slider_pane

0xd930,	// (0x0008b873) main_cset_list_pane_ParamLimits

0xd930,	// (0x0008b873) main_cset_list_pane

0xd940,	// (0x0008b883) scroll_pane_cp028

0x78a9,	// (0x000857ec) aid_area_touch_slider

0x78c5,	// (0x00085808) cset_slider_pane

0x78ef,	// (0x00085832) main_cset_slider_pane_g1

0x7904,	// (0x00085847) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0008d8a2) main_cset_slider_pane_g

0xd979,	// (0x0008b8bc) main_cset_slider_pane_t1

0x79c0,	// (0x00085903) main_cset_slider_pane_t2

0x79da,	// (0x0008591d) main_cset_slider_pane_t3

0x79f4,	// (0x00085937) main_cset_slider_pane_t4

0x7a0e,	// (0x00085951) main_cset_slider_pane_t5

0x7a28,	// (0x0008596b) main_cset_slider_pane_t6

0x7a3d,	// (0x00085980) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0008d8c7) main_cset_slider_pane_t

0x7b41,	// (0x00085a84) cset_list_set_pane_ParamLimits

0x7b41,	// (0x00085a84) cset_list_set_pane

0x7b52,	// (0x00085a95) aid_position_infowindow_above

0x7b5a,	// (0x00085a9d) aid_position_infowindow_below

0x7b62,	// (0x00085aa5) cset_list_set_pane_g1_ParamLimits

0x7b62,	// (0x00085aa5) cset_list_set_pane_g1

0x0ea2,	// (0x0007ede5) cset_list_set_pane_g3_ParamLimits

0x0ea2,	// (0x0007ede5) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0008d8e6) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0008d8e6) cset_list_set_pane_g

0x0eb1,	// (0x0007edf4) cset_list_set_pane_t1_ParamLimits

0x0eb1,	// (0x0007edf4) cset_list_set_pane_t1

0xc183,	// (0x0008a0c6) list_highlight_pane_cp021_ParamLimits

0xc183,	// (0x0008a0c6) list_highlight_pane_cp021

0xb717,	// (0x0008965a) cset_slider_pane_g1

0xb729,	// (0x0008966c) cset_slider_pane_g2

0xb720,	// (0x00089663) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0008d8eb) cset_slider_pane_g

0xe591,	// (0x0008c4d4) aid_area_touch_cam4_zoom

0x7b6e,	// (0x00085ab1) cam4_zoom_cont_pane

0x7b76,	// (0x00085ab9) cam4_zoom_pane_g1

0x7b7e,	// (0x00085ac1) cam4_zoom_pane_g2

0x7b86,	// (0x00085ac9) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0008d8f2) cam4_zoom_pane_g

0x7b8f,	// (0x00085ad2) cam4_zoom_cont_pane_g1

0x7b98,	// (0x00085adb) cam4_zoom_cont_pane_g2

0x7ba1,	// (0x00085ae4) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0008d8f9) cam4_zoom_cont_pane_g

0x6fa8,	// (0x00084eeb) call4_image_pane_ParamLimits

0x6fa8,	// (0x00084eeb) call4_image_pane

0x7009,	// (0x00084f4c) call4_windows_conf_pane_ParamLimits

0x7054,	// (0x00084f97) popup_call4_audio_in_window_ParamLimits

0x7054,	// (0x00084f97) popup_call4_audio_in_window

0xa21a,	// (0x0008815d) bg_popup_call2_act_pane_cp02

0xd797,	// (0x0008b6da) call4_list_conf_pane

0xce42,	// (0x0008ad85) call4_image_pane_g1

0xce42,	// (0x0008ad85) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0008d604) call4_image_pane_g

0xda19,	// (0x0008b95c) list_single_graphic_popup_conf4_pane_ParamLimits

0xda19,	// (0x0008b95c) list_single_graphic_popup_conf4_pane

0xa21a,	// (0x0008815d) list_highlight_pane_cp022

0xda2e,	// (0x0008b971) list_single_graphic_popup_conf4_pane_g1

0xb303,	// (0x00089246) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0008d900) list_single_graphic_popup_conf4_pane_g

0xda36,	// (0x0008b979) list_single_graphic_popup_conf4_pane_t1

0x3065,	// (0x00080fa8) popup_vtel_slider_window_ParamLimits

0x3065,	// (0x00080fa8) popup_vtel_slider_window

0xd779,	// (0x0008b6bc) dialer2_ne_pane_t2_ParamLimits

0xd779,	// (0x0008b6bc) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0008d7e1) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0008d7e1) dialer2_ne_pane_t

0xc183,	// (0x0008a0c6) bg_popup_sub_pane_cp010_ParamLimits

0xc183,	// (0x0008a0c6) bg_popup_sub_pane_cp010

0x7baa,	// (0x00085aed) popup_vtel_slider_window_g1_ParamLimits

0x7baa,	// (0x00085aed) popup_vtel_slider_window_g1

0x7bb6,	// (0x00085af9) popup_vtel_slider_window_g2_ParamLimits

0x7bb6,	// (0x00085af9) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0008d905) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0008d905) popup_vtel_slider_window_g

0x7bfe,	// (0x00085b41) vtel_slider_pane_ParamLimits

0x7bfe,	// (0x00085b41) vtel_slider_pane

0x7c0d,	// (0x00085b50) vtel_slider_pane_g1_ParamLimits

0x7c0d,	// (0x00085b50) vtel_slider_pane_g1

0x7c1a,	// (0x00085b5d) vtel_slider_pane_g2_ParamLimits

0x7c1a,	// (0x00085b5d) vtel_slider_pane_g2

0x7c27,	// (0x00085b6a) vtel_slider_pane_g3_ParamLimits

0x7c27,	// (0x00085b6a) vtel_slider_pane_g3

0x7c0d,	// (0x00085b50) vtel_slider_pane_g4_ParamLimits

0x7c0d,	// (0x00085b50) vtel_slider_pane_g4

0x7c34,	// (0x00085b77) vtel_slider_pane_g5_ParamLimits

0x7c34,	// (0x00085b77) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0008d90e) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0008d90e) vtel_slider_pane_g

0xc183,	// (0x0008a0c6) main_gallery2_pane

0x73e4,	// (0x00085327) aid_size_row_itut2_dropdow_list_ParamLimits

0x73e4,	// (0x00085327) aid_size_row_itut2_dropdow_list

0x7446,	// (0x00085389) grid_vitu2_function_top_pane_ParamLimits

0x7446,	// (0x00085389) grid_vitu2_function_top_pane

0x749c,	// (0x000853df) popup_vitu2_dropdown_list_window_ParamLimits

0x749c,	// (0x000853df) popup_vitu2_dropdown_list_window

0x74bc,	// (0x000853ff) popup_vitu2_match_list_window

0x7c41,	// (0x00085b84) cell_vitu2_function_top_pane_ParamLimits

0x7c41,	// (0x00085b84) cell_vitu2_function_top_pane

0x7c65,	// (0x00085ba8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7c65,	// (0x00085ba8) cell_vitu2_function_top_pane_cp01

0x7c81,	// (0x00085bc4) cell_vitu2_function_top_wide_pane_ParamLimits

0x7c81,	// (0x00085bc4) cell_vitu2_function_top_wide_pane

0xc183,	// (0x0008a0c6) bg_button_pane_cp012

0x7c9d,	// (0x00085be0) cell_vitu2_function_top_pane_g1

0x7cb1,	// (0x00085bf4) bg_button_pane_cp013_ParamLimits

0x7cb1,	// (0x00085bf4) bg_button_pane_cp013

0x7ccd,	// (0x00085c10) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7ccd,	// (0x00085c10) cell_vitu2_function_top_wide_pane_g1

0xd39d,	// (0x0008b2e0) bg_popup_sub_pane_cp20

0x7ce5,	// (0x00085c28) list_vitu2_match_list_pane

0xd822,	// (0x0008b765) bg_popup_sub_pane_cp20_g1

0xd82a,	// (0x0008b76d) bg_popup_sub_pane_cp20_g2

0xadce,	// (0x00088d11) bg_popup_sub_pane_cp20_g3

0xd832,	// (0x0008b775) bg_popup_sub_pane_cp20_g4

0xadae,	// (0x00088cf1) bg_popup_sub_pane_cp20_g5

0xda4c,	// (0x0008b98f) bg_popup_sub_pane_cp20_g6

0xd842,	// (0x0008b785) bg_popup_sub_pane_cp20_g7

0xd84a,	// (0x0008b78d) bg_popup_sub_pane_cp20_g8

0xd852,	// (0x0008b795) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0008d919) bg_popup_sub_pane_cp20_g

0x7cfd,	// (0x00085c40) list_vitu2_match_list_item_pane_ParamLimits

0x7cfd,	// (0x00085c40) list_vitu2_match_list_item_pane

0x7d0f,	// (0x00085c52) list_vitu2_match_list_item_pane_t1

0xa21a,	// (0x0008815d) bg_popup_sub_pane_cp21

0xb22c,	// (0x0008916f) grid_vitu2_dropdown_list_pane

0x7d29,	// (0x00085c6c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7d29,	// (0x00085c6c) cell_vitu2_dropdown_list_char_pane

0x7d4e,	// (0x00085c91) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7d4e,	// (0x00085c91) cell_vitu2_dropdown_list_ctrl_pane

0xda54,	// (0x0008b997) cell_vitu2_dropdown_list_char_pane_g1

0xda5d,	// (0x0008b9a0) cell_vitu2_dropdown_list_char_pane_g2

0xda66,	// (0x0008b9a9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0008d936) cell_vitu2_dropdown_list_char_pane_g

0x7d7c,	// (0x00085cbf) cell_vitu2_dropdown_list_char_pane_t1

0x7d8a,	// (0x00085ccd) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7d8a,	// (0x00085ccd) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7d9a,	// (0x00085cdd) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7d9a,	// (0x00085cdd) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7dab,	// (0x00085cee) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7dab,	// (0x00085cee) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7dbb,	// (0x00085cfe) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7dbb,	// (0x00085cfe) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd071,	// (0x0008afb4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd071,	// (0x0008afb4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0008d93d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0008d93d) cell_vitu2_dropdown_list_ctrl_pane_g

0x7dd4,	// (0x00085d17) aid_size_cell_gallery2_ParamLimits

0x7dd4,	// (0x00085d17) aid_size_cell_gallery2

0x7dee,	// (0x00085d31) grid_gallery2_pane_ParamLimits

0x7dee,	// (0x00085d31) grid_gallery2_pane

0x7e05,	// (0x00085d48) scroll_pane_cp029_ParamLimits

0x7e05,	// (0x00085d48) scroll_pane_cp029

0x7e15,	// (0x00085d58) cell_gallery2_pane_ParamLimits

0x7e15,	// (0x00085d58) cell_gallery2_pane

0xda6f,	// (0x0008b9b2) cell_gallery2_pane_g2

0x7e6c,	// (0x00085daf) cell_gallery2_pane_g3

0xda77,	// (0x0008b9ba) cell_gallery2_pane_g4

0xda7f,	// (0x0008b9c2) cell_gallery2_pane_g5

0xab71,	// (0x00088ab4) grid_highlight_pane_cp10

0x74bc,	// (0x000853ff) popup_vitu2_match_list_window_ParamLimits

0x74d0,	// (0x00085413) popup_vitu2_query_window_ParamLimits

0x74d0,	// (0x00085413) popup_vitu2_query_window

0xa21a,	// (0x0008815d) bg_vitu2_candi_button_pane

0xda54,	// (0x0008b997) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda5d,	// (0x0008b9a0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda66,	// (0x0008b9a9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0f10,	// (0x0007ee53) bg_button_pane_cp015

0x7e74,	// (0x00085db7) bg_button_pane_cp016

0x7e87,	// (0x00085dca) bg_button_pane_cp017

0xca0a,	// (0x0008a94d) bg_popup_sub_pane_cp22

0xda87,	// (0x0008b9ca) popup_vitu2_query_window_g1

0x0f43,	// (0x0007ee86) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0008d948) popup_vitu2_query_window_g

0x0f60,	// (0x0007eea3) popup_vitu2_query_window_t1_ParamLimits

0x0f60,	// (0x0007eea3) popup_vitu2_query_window_t1

0x0f93,	// (0x0007eed6) popup_vitu2_query_window_t2_ParamLimits

0x0f93,	// (0x0007eed6) popup_vitu2_query_window_t2

0x0fa5,	// (0x0007eee8) popup_vitu2_query_window_t3_ParamLimits

0x0fa5,	// (0x0007eee8) popup_vitu2_query_window_t3

0x7eab,	// (0x00085dee) popup_vitu2_query_window_t4_ParamLimits

0x7eab,	// (0x00085dee) popup_vitu2_query_window_t4

0x7ece,	// (0x00085e11) popup_vitu2_query_window_t5_ParamLimits

0x7ece,	// (0x00085e11) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0008d94f) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0008d94f) popup_vitu2_query_window_t

0xd928,	// (0x0008b86b) main_cset_text_pane

0x78a9,	// (0x000857ec) aid_area_touch_slider_ParamLimits

0x78c5,	// (0x00085808) cset_slider_pane_ParamLimits

0x78ef,	// (0x00085832) main_cset_slider_pane_g1_ParamLimits

0x7904,	// (0x00085847) main_cset_slider_pane_g2_ParamLimits

0xd949,	// (0x0008b88c) main_cset_slider_pane_g3_ParamLimits

0xd949,	// (0x0008b88c) main_cset_slider_pane_g3

0x7919,	// (0x0008585c) main_cset_slider_pane_g4_ParamLimits

0x7919,	// (0x0008585c) main_cset_slider_pane_g4

0x7928,	// (0x0008586b) main_cset_slider_pane_g5_ParamLimits

0x7928,	// (0x0008586b) main_cset_slider_pane_g5

0x7934,	// (0x00085877) main_cset_slider_pane_g6_ParamLimits

0x7934,	// (0x00085877) main_cset_slider_pane_g6

0xf95f,	// (0x0008d8a2) main_cset_slider_pane_g_ParamLimits

0xd979,	// (0x0008b8bc) main_cset_slider_pane_t1_ParamLimits

0x79c0,	// (0x00085903) main_cset_slider_pane_t2_ParamLimits

0x79da,	// (0x0008591d) main_cset_slider_pane_t3_ParamLimits

0x79f4,	// (0x00085937) main_cset_slider_pane_t4_ParamLimits

0x7a0e,	// (0x00085951) main_cset_slider_pane_t5_ParamLimits

0x7a28,	// (0x0008596b) main_cset_slider_pane_t6_ParamLimits

0x7a3d,	// (0x00085980) main_cset_slider_pane_t7_ParamLimits

0x7a67,	// (0x000859aa) main_cset_slider_pane_t8_ParamLimits

0x7a67,	// (0x000859aa) main_cset_slider_pane_t8

0x7a8f,	// (0x000859d2) main_cset_slider_pane_t9_ParamLimits

0x7a8f,	// (0x000859d2) main_cset_slider_pane_t9

0x7ab7,	// (0x000859fa) main_cset_slider_pane_t10_ParamLimits

0x7ab7,	// (0x000859fa) main_cset_slider_pane_t10

0x7adf,	// (0x00085a22) main_cset_slider_pane_t11_ParamLimits

0x7adf,	// (0x00085a22) main_cset_slider_pane_t11

0x7b07,	// (0x00085a4a) main_cset_slider_pane_t12_ParamLimits

0x7b07,	// (0x00085a4a) main_cset_slider_pane_t12

0x7b24,	// (0x00085a67) main_cset_slider_pane_t13_ParamLimits

0x7b24,	// (0x00085a67) main_cset_slider_pane_t13

0xf984,	// (0x0008d8c7) main_cset_slider_pane_t_ParamLimits

0xa21a,	// (0x0008815d) bg_popup_sub_pane_cp011

0xda93,	// (0x0008b9d6) main_cset_text_pane_g1

0xda9b,	// (0x0008b9de) main_cset_text_pane_t1

0xdaa9,	// (0x0008b9ec) main_cset_text_pane_t2

0xdab7,	// (0x0008b9fa) main_cset_text_pane_t3

0xdac5,	// (0x0008ba08) main_cset_text_pane_t4

0xdad3,	// (0x0008ba16) main_cset_text_pane_t5

0xdae1,	// (0x0008ba24) main_cset_text_pane_t6

0xdaef,	// (0x0008ba32) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0008d95e) main_cset_text_pane_t

0xa21a,	// (0x0008815d) main_cam4_burst_pane

0xa21a,	// (0x0008815d) main_cam5_pane

0x77f2,	// (0x00085735) bg_button_pane_cp019

0x77fb,	// (0x0008573e) bg_button_pane_cp020

0xd955,	// (0x0008b898) main_cset_slider_pane_g7_ParamLimits

0xd955,	// (0x0008b898) main_cset_slider_pane_g7

0xd961,	// (0x0008b8a4) main_cset_slider_pane_g8_ParamLimits

0xd961,	// (0x0008b8a4) main_cset_slider_pane_g8

0x7948,	// (0x0008588b) main_cset_slider_pane_g9_ParamLimits

0x7948,	// (0x0008588b) main_cset_slider_pane_g9

0x7954,	// (0x00085897) main_cset_slider_pane_g10_ParamLimits

0x7954,	// (0x00085897) main_cset_slider_pane_g10

0x7960,	// (0x000858a3) main_cset_slider_pane_g11_ParamLimits

0x7960,	// (0x000858a3) main_cset_slider_pane_g11

0x796c,	// (0x000858af) main_cset_slider_pane_g12_ParamLimits

0x796c,	// (0x000858af) main_cset_slider_pane_g12

0x7978,	// (0x000858bb) main_cset_slider_pane_g13_ParamLimits

0x7978,	// (0x000858bb) main_cset_slider_pane_g13

0x7984,	// (0x000858c7) main_cset_slider_pane_g14_ParamLimits

0x7984,	// (0x000858c7) main_cset_slider_pane_g14

0x7990,	// (0x000858d3) main_cset_slider_pane_g15_ParamLimits

0x7990,	// (0x000858d3) main_cset_slider_pane_g15

0xd9a7,	// (0x0008b8ea) main_cset_slider_pane_t14_ParamLimits

0xd9a7,	// (0x0008b8ea) main_cset_slider_pane_t14

0xd9e0,	// (0x0008b923) main_cset_slider_pane_t15_ParamLimits

0xd9e0,	// (0x0008b923) main_cset_slider_pane_t15

0x7ef1,	// (0x00085e34) aid_cam4_burst_size_cell_ParamLimits

0x7ef1,	// (0x00085e34) aid_cam4_burst_size_cell

0x7f0d,	// (0x00085e50) grid_cam4_burst_pane_ParamLimits

0x7f0d,	// (0x00085e50) grid_cam4_burst_pane

0x7f3f,	// (0x00085e82) linegrid_cam4_burst_pane_ParamLimits

0x7f3f,	// (0x00085e82) linegrid_cam4_burst_pane

0x7f5d,	// (0x00085ea0) scroll_pane_cp30_ParamLimits

0x7f5d,	// (0x00085ea0) scroll_pane_cp30

0x7f69,	// (0x00085eac) cell_cam4_burst_pane_ParamLimits

0x7f69,	// (0x00085eac) cell_cam4_burst_pane

0xdafd,	// (0x0008ba40) linegrid_cam4_burst_pane_g1_ParamLimits

0xdafd,	// (0x0008ba40) linegrid_cam4_burst_pane_g1

0x7fa9,	// (0x00085eec) linegrid_cam4_burst_pane_g2_ParamLimits

0x7fa9,	// (0x00085eec) linegrid_cam4_burst_pane_g2

0xdb0a,	// (0x0008ba4d) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb0a,	// (0x0008ba4d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0008d96d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0008d96d) linegrid_cam4_burst_pane_g

0x7fba,	// (0x00085efd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7fba,	// (0x00085efd) linegrid_cam4_burst_pane_g3_copy1

0xdb17,	// (0x0008ba5a) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb17,	// (0x0008ba5a) linegrid_cam4_burst_pane_g4

0x7fd4,	// (0x00085f17) linegrid_cam4_burst_pane_g5_ParamLimits

0x7fd4,	// (0x00085f17) linegrid_cam4_burst_pane_g5

0x7fe5,	// (0x00085f28) linegrid_cam4_burst_pane_g6_ParamLimits

0x7fe5,	// (0x00085f28) linegrid_cam4_burst_pane_g6

0xdb24,	// (0x0008ba67) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb24,	// (0x0008ba67) linegrid_cam4_burst_pane_g7

0x7ffc,	// (0x00085f3f) cell_cam4_burst_pane_g1

0xdb3d,	// (0x0008ba80) main_cam5_pane_t1_ParamLimits

0xdb3d,	// (0x0008ba80) main_cam5_pane_t1

0xdb4f,	// (0x0008ba92) main_cam5_pane_t2_ParamLimits

0xdb4f,	// (0x0008ba92) main_cam5_pane_t2

0xdb61,	// (0x0008baa4) main_cam5_pane_t3_ParamLimits

0xdb61,	// (0x0008baa4) main_cam5_pane_t3

0xdb73,	// (0x0008bab6) main_cam5_pane_t4_ParamLimits

0xdb73,	// (0x0008bab6) main_cam5_pane_t4

0xdb8b,	// (0x0008bace) main_cam5_pane_t5_ParamLimits

0xdb8b,	// (0x0008bace) main_cam5_pane_t5

0xdb9f,	// (0x0008bae2) main_cam5_pane_t6_ParamLimits

0xdb9f,	// (0x0008bae2) main_cam5_pane_t6

0xdbb3,	// (0x0008baf6) main_cam5_pane_t7_ParamLimits

0xdbb3,	// (0x0008baf6) main_cam5_pane_t7

0xdbc5,	// (0x0008bb08) main_cam5_pane_t8_ParamLimits

0xdbc5,	// (0x0008bb08) main_cam5_pane_t8

0xdbe3,	// (0x0008bb26) main_cam5_pane_t9_ParamLimits

0xdbe3,	// (0x0008bb26) main_cam5_pane_t9

0xdbf5,	// (0x0008bb38) main_cam5_pane_t10_ParamLimits

0xdbf5,	// (0x0008bb38) main_cam5_pane_t10

0xdc07,	// (0x0008bb4a) main_cam5_pane_t11_ParamLimits

0xdc07,	// (0x0008bb4a) main_cam5_pane_t11

0xdc1b,	// (0x0008bb5e) main_cam5_pane_t12_ParamLimits

0xdc1b,	// (0x0008bb5e) main_cam5_pane_t12

0xdc32,	// (0x0008bb75) main_cam5_pane_t13_ParamLimits

0xdc32,	// (0x0008bb75) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0008d979) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0008d979) main_cam5_pane_t

0x1fd8,	// (0x0007ff1b) popup_scut_keymap_window_ParamLimits

0x1fd8,	// (0x0007ff1b) popup_scut_keymap_window

0x800f,	// (0x00085f52) aid_size_cell_brow_shortcut

0xab71,	// (0x00088ab4) bg_popup_window_pane_cp010

0x801b,	// (0x00085f5e) grid_scut_pane

0x8027,	// (0x00085f6a) cell_scut_pane_ParamLimits

0x8027,	// (0x00085f6a) cell_scut_pane

0x8042,	// (0x00085f85) cell_scut_pane_g1

0xdc55,	// (0x0008bb98) cell_scut_pane_t1

0xdc64,	// (0x0008bba7) cell_scut_pane_t2

0x804b,	// (0x00085f8e) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0008d994) cell_scut_pane_t

0x5ecc,	// (0x00083e0f) main_mup3_pane_g8_ParamLimits

0x5ecc,	// (0x00083e0f) main_mup3_pane_g8

0x73f4,	// (0x00085337) area_vitu2_query_pane_ParamLimits

0x73f4,	// (0x00085337) area_vitu2_query_pane

0x0f22,	// (0x0007ee65) input_focus_pane_cp08

0xdc73,	// (0x0008bbb6) area_vitu2_query_pane_g1

0x1023,	// (0x0007ef66) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0008d99b) area_vitu2_query_pane_g

0x8059,	// (0x00085f9c) area_vitu2_query_pane_t1_ParamLimits

0x8059,	// (0x00085f9c) area_vitu2_query_pane_t1

0x806d,	// (0x00085fb0) area_vitu2_query_pane_t2_ParamLimits

0x806d,	// (0x00085fb0) area_vitu2_query_pane_t2

0x1034,	// (0x0007ef77) area_vitu2_query_pane_t3_ParamLimits

0x1034,	// (0x0007ef77) area_vitu2_query_pane_t3

0x105c,	// (0x0007ef9f) area_vitu2_query_pane_t4_ParamLimits

0x105c,	// (0x0007ef9f) area_vitu2_query_pane_t4

0x1084,	// (0x0007efc7) area_vitu2_query_pane_t5_ParamLimits

0x1084,	// (0x0007efc7) area_vitu2_query_pane_t5

0x10ac,	// (0x0007efef) area_vitu2_query_pane_t6_ParamLimits

0x10ac,	// (0x0007efef) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0008d9a0) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0008d9a0) area_vitu2_query_pane_t

0x8081,	// (0x00085fc4) bg_button_pane_cp018

0x808f,	// (0x00085fd2) bg_button_pane_cp021

0x10f8,	// (0x0007f03b) bg_button_pane_cp022

0x1109,	// (0x0007f04c) input_focus_pane_cp09

0xb42c,	// (0x0008936f) aid_size_touch_mv_arrow_left

0xb457,	// (0x0008939a) aid_size_touch_mv_arrow_right

0x79a8,	// (0x000858eb) main_cset_slider_pane_g16_ParamLimits

0x79a8,	// (0x000858eb) main_cset_slider_pane_g16

0x79b4,	// (0x000858f7) main_cset_slider_pane_g17_ParamLimits

0x79b4,	// (0x000858f7) main_cset_slider_pane_g17

0x7ffc,	// (0x00085f3f) cell_cam4_burst_pane_g1_ParamLimits

0xa21a,	// (0x0008815d) compa_mode_pane

0x7bc2,	// (0x00085b05) popup_vtel_slider_window_g3_ParamLimits

0x7bc2,	// (0x00085b05) popup_vtel_slider_window_g3

0x7bd6,	// (0x00085b19) popup_vtel_slider_window_g4_ParamLimits

0x7bd6,	// (0x00085b19) popup_vtel_slider_window_g4

0x7bea,	// (0x00085b2d) popup_vtel_slider_window_t1_ParamLimits

0x7bea,	// (0x00085b2d) popup_vtel_slider_window_t1

0xa21a,	// (0x0008815d) main_cl_pane

0x5150,	// (0x00083093) popup_imed_adjust2_window_ParamLimits

0xca0a,	// (0x0008a94d) bg_tb_trans_pane_cp05_ParamLimits

0xd33a,	// (0x0008b27d) popup_imed_adjust2_window_g1_ParamLimits

0xd349,	// (0x0008b28c) popup_imed_adjust2_window_g2_ParamLimits

0xd349,	// (0x0008b28c) popup_imed_adjust2_window_g2

0xd355,	// (0x0008b298) popup_imed_adjust2_window_g3_ParamLimits

0xd355,	// (0x0008b298) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0008d707) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0008d707) popup_imed_adjust2_window_g

0xd361,	// (0x0008b2a4) popup_imed_adjust2_window_t1_ParamLimits

0xd379,	// (0x0008b2bc) slider_imed_adjust_pane_ParamLimits

0xd38d,	// (0x0008b2d0) slider_imed_adjust_pane_g1_ParamLimits

0xd3d8,	// (0x0008b31b) slider_imed_adjust_pane_g2_ParamLimits

0xd3e8,	// (0x0008b32b) slider_imed_adjust_pane_g3_ParamLimits

0xd3f9,	// (0x0008b33c) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0008d70e) slider_imed_adjust_pane_g_ParamLimits

0x7135,	// (0x00085078) aid_touch_area_cam4_ParamLimits

0x7135,	// (0x00085078) aid_touch_area_cam4

0x7145,	// (0x00085088) battery_pane_cp01

0x71cc,	// (0x0008510f) main_camera4_pane_g6_ParamLimits

0x71cc,	// (0x0008510f) main_camera4_pane_g6

0x71ea,	// (0x0008512d) main_camera4_pane_t2_ParamLimits

0x71ea,	// (0x0008512d) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0008d815) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0008d815) main_camera4_pane_t

0x726d,	// (0x000851b0) aid_touch_area_vid4_ParamLimits

0x726d,	// (0x000851b0) aid_touch_area_vid4

0x72ad,	// (0x000851f0) main_video4_pane_g5_ParamLimits

0x72ad,	// (0x000851f0) main_video4_pane_g5

0x72d3,	// (0x00085216) vid4_progress_pane_ParamLimits

0x72d3,	// (0x00085216) vid4_progress_pane

0xd96d,	// (0x0008b8b0) main_cset_slider_pane_g18_ParamLimits

0xd96d,	// (0x0008b8b0) main_cset_slider_pane_g18

0xdb31,	// (0x0008ba74) cell_cam4_burst_pane_g2_ParamLimits

0xdb31,	// (0x0008ba74) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0008d974) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0008d974) cell_cam4_burst_pane_g

0x809b,	// (0x00085fde) bg_cl_pane_ParamLimits

0x809b,	// (0x00085fde) bg_cl_pane

0x80a7,	// (0x00085fea) cl_header_pane_ParamLimits

0x80a7,	// (0x00085fea) cl_header_pane

0x80b3,	// (0x00085ff6) cl_listscroll_pane_ParamLimits

0x80b3,	// (0x00085ff6) cl_listscroll_pane

0xdc99,	// (0x0008bbdc) bg_cl_pane_g1

0xdca1,	// (0x0008bbe4) bg_cl_pane_g2

0xdca9,	// (0x0008bbec) bg_cl_pane_g3

0xdcb1,	// (0x0008bbf4) bg_cl_pane_g4

0xdcb9,	// (0x0008bbfc) bg_cl_pane_g5

0xdcc1,	// (0x0008bc04) bg_cl_pane_g6

0xdcc9,	// (0x0008bc0c) bg_cl_pane_g7

0xdcd1,	// (0x0008bc14) bg_cl_pane_g8

0xdcd9,	// (0x0008bc1c) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0008d9af) bg_cl_pane_g

0x80bf,	// (0x00086002) aid_height_cl_leading_ParamLimits

0x80bf,	// (0x00086002) aid_height_cl_leading

0x80cb,	// (0x0008600e) aid_height_cl_text_ParamLimits

0x80cb,	// (0x0008600e) aid_height_cl_text

0xd39d,	// (0x0008b2e0) bg_cl_header_pane_ParamLimits

0xd39d,	// (0x0008b2e0) bg_cl_header_pane

0x80e3,	// (0x00086026) cl_header_pane_g1_ParamLimits

0x80e3,	// (0x00086026) cl_header_pane_g1

0x80f0,	// (0x00086033) cl_header_pane_t1_ParamLimits

0x80f0,	// (0x00086033) cl_header_pane_t1

0xdce1,	// (0x0008bc24) cl_list_pane

0xd940,	// (0x0008b883) hc_scroll_pane_cp01

0xadae,	// (0x00088cf1) bg_cl_header_pane_g1

0xd822,	// (0x0008b765) bg_cl_header_pane_g2

0xadce,	// (0x00088d11) bg_cl_header_pane_g3

0xd832,	// (0x0008b775) bg_cl_header_pane_g4

0xd82a,	// (0x0008b76d) bg_cl_header_pane_g5

0xda4c,	// (0x0008b98f) bg_cl_header_pane_g6

0xd84a,	// (0x0008b78d) bg_cl_header_pane_g7

0xd852,	// (0x0008b795) bg_cl_header_pane_g8

0xd842,	// (0x0008b785) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0008d9c2) bg_cl_header_pane_g

0x8102,	// (0x00086045) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8102,	// (0x00086045) hc_cl_list_double_graphic_heading_pane

0x8112,	// (0x00086055) hc_cl_list_single_graphic_pane_ParamLimits

0x8112,	// (0x00086055) hc_cl_list_single_graphic_pane

0x8124,	// (0x00086067) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8124,	// (0x00086067) hc_cl_list_single_graphic_pane_g1

0x8130,	// (0x00086073) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8130,	// (0x00086073) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0008d9d5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0008d9d5) hc_cl_list_single_graphic_pane_g

0x8144,	// (0x00086087) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8144,	// (0x00086087) hc_cl_list_single_graphic_pane_t1

0x8124,	// (0x00086067) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8124,	// (0x00086067) hc_cl_list_double_graphic_heading_pane_g1

0x8159,	// (0x0008609c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8159,	// (0x0008609c) hc_cl_list_double_graphic_heading_pane_g2

0x816d,	// (0x000860b0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x816d,	// (0x000860b0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0008d9da) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0008d9da) hc_cl_list_double_graphic_heading_pane_g

0x8181,	// (0x000860c4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8181,	// (0x000860c4) hc_cl_list_double_graphic_heading_pane_t1

0x8196,	// (0x000860d9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8196,	// (0x000860d9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0008d9e1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0008d9e1) hc_cl_list_double_graphic_heading_pane_t

0x81b3,	// (0x000860f6) vid4_progress_pane_g1

0x81c3,	// (0x00086106) vid4_progress_pane_g2

0x81d3,	// (0x00086116) vid4_progress_pane_g3

0x723b,	// (0x0008517e) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0008d9e6) vid4_progress_pane_g

0x81e5,	// (0x00086128) vid4_progress_pane_t1

0x81fb,	// (0x0008613e) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0008d9f1) vid4_progress_pane_t

0x8225,	// (0x00086168) wait_bar_pane_cp07

0xcc2f,	// (0x0008ab72) blid_firmament_pane_ParamLimits

0xcc72,	// (0x0008abb5) popup_blid_sat_info2_window_g1

0xcc96,	// (0x0008abd9) popup_blid_sat_info2_window_t3

0xcca4,	// (0x0008abe7) popup_blid_sat_info2_window_t4

0xccb2,	// (0x0008abf5) popup_blid_sat_info2_window_t5

0xccc0,	// (0x0008ac03) popup_blid_sat_info2_window_t6

0xccd0,	// (0x0008ac13) popup_blid_sat_info2_window_t7

0xccde,	// (0x0008ac21) popup_blid_sat_info2_window_t8

0xccec,	// (0x0008ac2f) popup_blid_sat_info2_window_t9

0xccfa,	// (0x0008ac3d) popup_blid_sat_info2_window_t10

0xcdc2,	// (0x0008ad05) aid_firma_cardinal_ParamLimits

0xcdd6,	// (0x0008ad19) blid_firmament_pane_t1_ParamLimits

0xcded,	// (0x0008ad30) blid_firmament_pane_t2_ParamLimits

0xce04,	// (0x0008ad47) blid_firmament_pane_t3_ParamLimits

0xce1b,	// (0x0008ad5e) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0008d5fb) blid_firmament_pane_t_ParamLimits

0xce32,	// (0x0008ad75) blid_sat_info_pane_ParamLimits

0xc183,	// (0x0008a0c6) main_cam_set_pane_ParamLimits

0x6688,	// (0x000845cb) aid_size_cell_colour_35_ParamLimits

0x66a2,	// (0x000845e5) aid_size_cell_colour_112_ParamLimits

0x66b9,	// (0x000845fc) aid_size_cell_effect_ParamLimits

0xc183,	// (0x0008a0c6) bg_tb_trans_pane_cp02_ParamLimits

0xb406,	// (0x00089349) heading_imed_pane_ParamLimits

0x66d3,	// (0x00084616) listscroll_imed_pane_ParamLimits

0xc018,	// (0x00089f5b) popup_call2_audio_first_window_g5_ParamLimits

0xc018,	// (0x00089f5b) popup_call2_audio_first_window_g5

0x6e1f,	// (0x00084d62) aid_size_touch_image3_arrow_left_ParamLimits

0x6e1f,	// (0x00084d62) aid_size_touch_image3_arrow_left

0x6e35,	// (0x00084d78) aid_size_touch_image3_arrow_right_ParamLimits

0x6e35,	// (0x00084d78) aid_size_touch_image3_arrow_right

0x8210,	// (0x00086153) vid4_progress_pane_t3

0x6977,	// (0x000848ba) main_hwr_training_symbol_option_pane_ParamLimits

0x6977,	// (0x000848ba) main_hwr_training_symbol_option_pane

0xd66e,	// (0x0008b5b1) popup_hwr_training_preview_window_ParamLimits

0xd66e,	// (0x0008b5b1) popup_hwr_training_preview_window

0x69d8,	// (0x0008491b) hwr_training_navi_pane_g5_ParamLimits

0x69d8,	// (0x0008491b) hwr_training_navi_pane_g5

0xd810,	// (0x0008b753) popup_char_count_window

0xd39d,	// (0x0008b2e0) bg_popup_sub_pane_cp20_ParamLimits

0x7ce5,	// (0x00085c28) list_vitu2_match_list_pane_ParamLimits

0x7cf1,	// (0x00085c34) vitu2_page_scroll_pane_ParamLimits

0x7cf1,	// (0x00085c34) vitu2_page_scroll_pane

0xdcea,	// (0x0008bc2d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdcea,	// (0x0008bc2d) list_single_hwr_training_symbol_option_pane

0xdcfd,	// (0x0008bc40) list_single_hwr_training_symbol_option_pane_g1

0xdd05,	// (0x0008bc48) list_single_hwr_training_symbol_option_pane_t1

0xdd13,	// (0x0008bc56) bg_button_pane_cp023

0xdd1c,	// (0x0008bc5f) bg_button_pane_cp024

0x8249,	// (0x0008618c) vitu2_page_scroll_pane_g1

0x8251,	// (0x00086194) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0008d9f8) vitu2_page_scroll_pane_g

0x825b,	// (0x0008619e) vitu2_page_scroll_pane_t1

0xd3ab,	// (0x0008b2ee) popup_char_count_window_g1

0xdd4f,	// (0x0008bc92) popup_char_count_window_g2

0xd3b4,	// (0x0008b2f7) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0008d9fd) popup_char_count_window_g

0xdd58,	// (0x0008bc9b) popup_char_count_window_t1

0xa21a,	// (0x0008815d) main_vded2_pane

0xd326,	// (0x0008b269) aid_size_cell_imed_line

0xd330,	// (0x0008b273) grid_imed_line_width_pane

0x7347,	// (0x0008528a) vid4_indicators_pane_g4

0xdd66,	// (0x0008bca9) cell_imed_line_width_pane_ParamLimits

0xdd66,	// (0x0008bca9) cell_imed_line_width_pane

0xdd7c,	// (0x0008bcbf) cell_imed_line_width_pane_g1

0xcf18,	// (0x0008ae5b) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0008da04) cell_imed_line_width_pane_g

0x826a,	// (0x000861ad) main_vded2_pane_g1_ParamLimits

0x826a,	// (0x000861ad) main_vded2_pane_g1

0x8279,	// (0x000861bc) main_vded2_pane_g2_ParamLimits

0x8279,	// (0x000861bc) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0008da09) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0008da09) main_vded2_pane_g

0x8287,	// (0x000861ca) vded2_slider_pane_ParamLimits

0x8287,	// (0x000861ca) vded2_slider_pane

0x8294,	// (0x000861d7) aid_size_touch_vded2_end

0x829e,	// (0x000861e1) aid_size_touch_vded2_playhead

0xdd85,	// (0x0008bcc8) aid_size_touch_vded2_start

0xdd8d,	// (0x0008bcd0) vded2_slider_bg_pane

0xdd96,	// (0x0008bcd9) vded2_slider_pane_g1

0xdd9f,	// (0x0008bce2) vded2_slider_pane_g2

0x82a6,	// (0x000861e9) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0008da0e) vded2_slider_pane_g

0xd3bd,	// (0x0008b300) vded2_slider_bg_pane_g1

0xd3c6,	// (0x0008b309) vded2_slider_bg_pane_g2

0xd3cf,	// (0x0008b312) vded2_slider_bg_pane_g3

0x0002,

0xf788,	// (0x0008d6cb) vded2_slider_bg_pane_g

0x4992,	// (0x000828d5) aid_postcard_touch_down_pane_ParamLimits

0x4992,	// (0x000828d5) aid_postcard_touch_down_pane

0x49a2,	// (0x000828e5) aid_postcard_touch_up_pane_ParamLimits

0x49a2,	// (0x000828e5) aid_postcard_touch_up_pane

0xa21a,	// (0x0008815d) main_blid2_pane

0x50cf,	// (0x00083012) popup_blid2_search_window

0xa21a,	// (0x0008815d) blid2_gps_pane

0xa21a,	// (0x0008815d) blid2_navig_pane

0xa21a,	// (0x0008815d) blid2_search_pane

0xa21a,	// (0x0008815d) blid2_tripm_pane

0x82af,	// (0x000861f2) blid2_search_pane_g1_ParamLimits

0x82af,	// (0x000861f2) blid2_search_pane_g1

0x82bb,	// (0x000861fe) blid2_search_pane_t1_ParamLimits

0x82bb,	// (0x000861fe) blid2_search_pane_t1

0x82cd,	// (0x00086210) aid_size_cell_blid2_gps_ParamLimits

0x82cd,	// (0x00086210) aid_size_cell_blid2_gps

0x82dd,	// (0x00086220) blid2_gps_pane_g1_ParamLimits

0x82dd,	// (0x00086220) blid2_gps_pane_g1

0x82e9,	// (0x0008622c) grid_blid2_satellite_pane_ParamLimits

0x82e9,	// (0x0008622c) grid_blid2_satellite_pane

0x82f7,	// (0x0008623a) blid2_navig_pane_g1_ParamLimits

0x82f7,	// (0x0008623a) blid2_navig_pane_g1

0x8303,	// (0x00086246) blid2_navig_pane_t1_ParamLimits

0x8303,	// (0x00086246) blid2_navig_pane_t1

0x8315,	// (0x00086258) blid2_navig_pane_t2_ParamLimits

0x8315,	// (0x00086258) blid2_navig_pane_t2

0x0001,

0xfad2,	// (0x0008da15) blid2_navig_pane_t_ParamLimits

0xfad2,	// (0x0008da15) blid2_navig_pane_t

0x8327,	// (0x0008626a) blid2_navig_ring_pane_ParamLimits

0x8327,	// (0x0008626a) blid2_navig_ring_pane

0x8337,	// (0x0008627a) blid2_speed_pane_ParamLimits

0x8337,	// (0x0008627a) blid2_speed_pane

0x8343,	// (0x00086286) blid2_tripm_pane_g1_ParamLimits

0x8343,	// (0x00086286) blid2_tripm_pane_g1

0x8353,	// (0x00086296) blid2_tripm_pane_g2_ParamLimits

0x8353,	// (0x00086296) blid2_tripm_pane_g2

0x835f,	// (0x000862a2) blid2_tripm_pane_g3_ParamLimits

0x835f,	// (0x000862a2) blid2_tripm_pane_g3

0x836b,	// (0x000862ae) blid2_tripm_pane_g4_ParamLimits

0x836b,	// (0x000862ae) blid2_tripm_pane_g4

0x8377,	// (0x000862ba) blid2_tripm_pane_g5_ParamLimits

0x8377,	// (0x000862ba) blid2_tripm_pane_g5

0x0005,

0xfad7,	// (0x0008da1a) blid2_tripm_pane_g_ParamLimits

0xfad7,	// (0x0008da1a) blid2_tripm_pane_g

0x8393,	// (0x000862d6) blid2_tripm_pane_t1_ParamLimits

0x8393,	// (0x000862d6) blid2_tripm_pane_t1

0x83a5,	// (0x000862e8) blid2_tripm_pane_t2_ParamLimits

0x83a5,	// (0x000862e8) blid2_tripm_pane_t2

0x83b7,	// (0x000862fa) blid2_tripm_pane_t3_ParamLimits

0x83b7,	// (0x000862fa) blid2_tripm_pane_t3

0x0003,

0xfae4,	// (0x0008da27) blid2_tripm_pane_t_ParamLimits

0xfae4,	// (0x0008da27) blid2_tripm_pane_t

0x83e9,	// (0x0008632c) cell_blid2_satellite_pane_ParamLimits

0x83e9,	// (0x0008632c) cell_blid2_satellite_pane

0x8407,	// (0x0008634a) cell_blid2_satellite_pane_g1

0xdda7,	// (0x0008bcea) cell_blid2_satellite_pane_t1

0xce42,	// (0x0008ad85) blid2_speed_pane_g1

0xddb5,	// (0x0008bcf8) blid2_speed_pane_t1

0xddc3,	// (0x0008bd06) blid2_speed_pane_t2

0x0001,

0xfaed,	// (0x0008da30) blid2_speed_pane_t

0xce42,	// (0x0008ad85) blid2_navig_ring_pane_g1

0x8410,	// (0x00086353) blid2_navig_ring_pane_g2

0x8418,	// (0x0008635b) blid2_navig_ring_pane_g3

0x8420,	// (0x00086363) blid2_navig_ring_pane_g4

0x8428,	// (0x0008636b) blid2_navig_ring_pane_g5

0x0004,

0xfaf2,	// (0x0008da35) blid2_navig_ring_pane_g

0xa21a,	// (0x0008815d) bg_popup_window_pane_cp011

0xddd1,	// (0x0008bd14) popup_blid2_search_window_g1

0xddd9,	// (0x0008bd1c) popup_blid2_search_window_t1

0xdde7,	// (0x0008bd2a) popup_blid2_search_window_t2

0x0001,

0xfafd,	// (0x0008da40) popup_blid2_search_window_t

0xacbd,	// (0x00088c00) main_browser_pane_g1

0xa98c,	// (0x000888cf) main_browser_pane_ParamLimits

0xc183,	// (0x0008a0c6) bg_button_pane_cp011_ParamLimits

0x75b9,	// (0x000854fc) cell_vitu2_function_pane_g1_ParamLimits

0xca0a,	// (0x0008a94d) bg_popup_sub_pane_cp22_ParamLimits

0x0f22,	// (0x0007ee65) input_focus_pane_cp08_ParamLimits

0x7e9a,	// (0x00085ddd) popup_vitu2_query_button_pane_ParamLimits

0x7e9a,	// (0x00085ddd) popup_vitu2_query_button_pane

0x0f39,	// (0x0007ee7c) popup_vitu2_query_input_button_pane

0xda87,	// (0x0008b9ca) popup_vitu2_query_window_g1_ParamLimits

0x0f43,	// (0x0007ee86) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0008d948) popup_vitu2_query_window_g_ParamLimits

0xa21a,	// (0x0008815d) bg_button_pane_cp026

0x8430,	// (0x00086373) popup_vitu2_query_input_button_pane_g1

0xa21a,	// (0x0008815d) bg_button_pane_cp025

0xddf5,	// (0x0008bd38) popup_vitu2_query_button_pane_t1

0x5b52,	// (0x00083a95) main_mp3_pane_t6

0x5b62,	// (0x00083aa5) popup_slider_window_cp01

0x7222,	// (0x00085165) cam4_battery_pane

0x7300,	// (0x00085243) cam4_battery_pane_cp02

0x81ab,	// (0x000860ee) cam4_battery_pane_cp01

0x81ab,	// (0x000860ee) cam4_battery_pane_cp03

0xce42,	// (0x0008ad85) cam4_battery_pane_g1

0xd806,	// (0x0008b749) cam4_battery_pane_g2

0x0001,

0xfb02,	// (0x0008da45) cam4_battery_pane_g

0xcd08,	// (0x0008ac4b) popup_blid_sat_info2_window_t11

0xb42c,	// (0x0008936f) aid_size_touch_mv_arrow_left_ParamLimits

0xb457,	// (0x0008939a) aid_size_touch_mv_arrow_right_ParamLimits

0xb4b5,	// (0x000893f8) navi_pane_g1_ParamLimits

0xb4c1,	// (0x00089404) navi_pane_g2_ParamLimits

0xb4ef,	// (0x00089432) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0008d30d) navi_pane_g_ParamLimits

0x43d0,	// (0x00082313) navi_pane_mv_t1_ParamLimits

0x66df,	// (0x00084622) grid_imed_effect_pane_ParamLimits

0x2f2d,	// (0x00080e70) aid_placing_vt_slider_lsc

0xac08,	// (0x00088b4b) aid_placing_vt_slider_prt

0xc183,	// (0x0008a0c6) bg_tb_trans_pane_cp01_ParamLimits

0xcf91,	// (0x0008aed4) popup_image_details_window_g1_ParamLimits

0xcfa4,	// (0x0008aee7) popup_image_details_window_g2_ParamLimits

0xcfb9,	// (0x0008aefc) popup_image_details_window_g3_ParamLimits

0xcfb9,	// (0x0008aefc) popup_image_details_window_g3

0xf6fd,	// (0x0008d640) popup_image_details_window_g_ParamLimits

0xcfcd,	// (0x0008af10) popup_image_details_window_t1_ParamLimits

0xcfdf,	// (0x0008af22) popup_image_details_window_t2_ParamLimits

0xcff8,	// (0x0008af3b) popup_image_details_window_t3_ParamLimits

0xd00c,	// (0x0008af4f) popup_image_details_window_t4_ParamLimits

0xd027,	// (0x0008af6a) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0008d647) popup_image_details_window_t_ParamLimits

0x80d7,	// (0x0008601a) cl_header_name_pane_ParamLimits

0x80d7,	// (0x0008601a) cl_header_name_pane

0x8438,	// (0x0008637b) cl_header_name_pane_t1_ParamLimits

0x8438,	// (0x0008637b) cl_header_name_pane_t1

0x844f,	// (0x00086392) cl_header_name_pane_t2_ParamLimits

0x844f,	// (0x00086392) cl_header_name_pane_t2

0x8479,	// (0x000863bc) cl_header_name_pane_t3_ParamLimits

0x8479,	// (0x000863bc) cl_header_name_pane_t3

0x0002,

0xfb07,	// (0x0008da4a) cl_header_name_pane_t_ParamLimits

0xfb07,	// (0x0008da4a) cl_header_name_pane_t

0xb57e,	// (0x000894c1) navi_pane_mv_g2_ParamLimits

0xd7e0,	// (0x0008b723) field_vitu2_entry_pane_g1_ParamLimits

0xd7ec,	// (0x0008b72f) field_vitu2_entry_pane_g2_ParamLimits

0xd7f8,	// (0x0008b73b) field_vitu2_entry_pane_g3_ParamLimits

0xd7f8,	// (0x0008b73b) field_vitu2_entry_pane_g3

0xf904,	// (0x0008d847) field_vitu2_entry_pane_g_ParamLimits

0x754d,	// (0x00085490) cell_vitu2_itu_pane_g1_ParamLimits

0x755f,	// (0x000854a2) cell_vitu2_itu_pane_g2_ParamLimits

0x755f,	// (0x000854a2) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0008d853) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0008d853) cell_vitu2_itu_pane_g

0xc183,	// (0x0008a0c6) bg_vkb2_func_pane_cp05_ParamLimits

0xc183,	// (0x0008a0c6) bg_vkb2_func_pane_cp05

0xc183,	// (0x0008a0c6) bg_vkb2_func_pane_cp03

0xc183,	// (0x0008a0c6) bg_vkb2_func_pane_cp04

0xc183,	// (0x0008a0c6) bg_vkb2_func_pane_cp10_ParamLimits

0xc183,	// (0x0008a0c6) bg_vkb2_func_pane_cp10

0x10f8,	// (0x0007f03b) bg_vkb2_func_pane_cp08

0x8081,	// (0x00085fc4) bg_vkb2_func_pane_cp06

0x808f,	// (0x00085fd2) bg_vkb2_func_pane_cp07

0xdd25,	// (0x0008bc68) bg_vkb2_func_pane_cp11_ParamLimits

0xdd25,	// (0x0008bc68) bg_vkb2_func_pane_cp11

0xdd3a,	// (0x0008bc7d) bg_vkb2_func_pane_cp12_ParamLimits

0xdd3a,	// (0x0008bc7d) bg_vkb2_func_pane_cp12

0xa21a,	// (0x0008815d) bg_vkb2_func_pane_cp09

0xd822,	// (0x0008b765) bg_vkb2_func_pane_g1

0xadce,	// (0x00088d11) bg_vkb2_func_pane_g2

0xd82a,	// (0x0008b76d) bg_vkb2_func_pane_g3

0xd832,	// (0x0008b775) bg_vkb2_func_pane_g4

0xda4c,	// (0x0008b98f) bg_vkb2_func_pane_g5

0xd84a,	// (0x0008b78d) bg_vkb2_func_pane_g6

0xd852,	// (0x0008b795) bg_vkb2_func_pane_g7

0xd842,	// (0x0008b785) bg_vkb2_func_pane_g8

0xadae,	// (0x00088cf1) bg_vkb2_func_pane_g9

0x0008,

0xfb0e,	// (0x0008da51) bg_vkb2_func_pane_g

0x8385,	// (0x000862c8) blid2_tripm_pane_g6_ParamLimits

0x8385,	// (0x000862c8) blid2_tripm_pane_g6

0xd72c,	// (0x0008b66f) mp4_progress_pane_g1

0x83dd,	// (0x00086320) blid2_tripm_values_pane_ParamLimits

0x83dd,	// (0x00086320) blid2_tripm_values_pane

0x849e,	// (0x000863e1) blid2_tripm_values_pane_t1

0x84ac,	// (0x000863ef) blid2_tripm_values_pane_t2

0x84ba,	// (0x000863fd) blid2_tripm_values_pane_t3

0x84c8,	// (0x0008640b) blid2_tripm_values_pane_t4

0x84d6,	// (0x00086419) blid2_tripm_values_pane_t5

0x84e4,	// (0x00086427) blid2_tripm_values_pane_t6

0x84f2,	// (0x00086435) blid2_tripm_values_pane_t7

0x8500,	// (0x00086443) blid2_tripm_values_pane_t8

0x850e,	// (0x00086451) blid2_tripm_values_pane_t9

0x0008,

0xfb21,	// (0x0008da64) blid2_tripm_values_pane_t

0x2f6b,	// (0x00080eae) call_video_pane_t1_ParamLimits

0x2f88,	// (0x00080ecb) call_video_pane_t2_ParamLimits

0xf253,	// (0x0008d196) call_video_pane_t_ParamLimits

0x0cdc,	// (0x0007ec1f) msg_header_pane_g1_ParamLimits

0xb75c,	// (0x0008969f) msg_header_pane_g2_ParamLimits

0xb75c,	// (0x0008969f) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0008d3b0) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0008d3b0) msg_header_pane_g

0xa98c,	// (0x000888cf) main_clock2_pane_ParamLimits

0x6458,	// (0x0008439b) grid_clock2_toolbar_pane_ParamLimits

0x6458,	// (0x0008439b) grid_clock2_toolbar_pane

0x6458,	// (0x0008439b) listscroll_clock2_pane_ParamLimits

0x6458,	// (0x0008439b) listscroll_clock2_pane

0x6507,	// (0x0008444a) main_clock2_pane_t3_ParamLimits

0x6507,	// (0x0008444a) main_clock2_pane_t3

0x6519,	// (0x0008445c) main_clock2_pane_t4_ParamLimits

0x6519,	// (0x0008445c) main_clock2_pane_t4

0xde03,	// (0x0008bd46) cell_clock2_toolbar_pane

0xde0b,	// (0x0008bd4e) cell_clock2_toolbar_pane_cp01

0xde0b,	// (0x0008bd4e) cell_clock2_toolbar_pane_cp02

0xde13,	// (0x0008bd56) cell_clock2_toolbar_pane_cp03

0xde1b,	// (0x0008bd5e) list_clock2_pane

0xb397,	// (0x000892da) scroll_pane_cp10

0xde23,	// (0x0008bd66) list_single_clock2_pane_ParamLimits

0xde23,	// (0x0008bd66) list_single_clock2_pane

0xab71,	// (0x00088ab4) list_highlight_pane_cp08

0xde30,	// (0x0008bd73) list_single_clock2_pane_t1

0xde3e,	// (0x0008bd81) list_single_clock2_pane_t2

0x0001,

0xfb34,	// (0x0008da77) list_single_clock2_pane_t

0xa21a,	// (0x0008815d) bg_button_pane_cp10

0xde4c,	// (0x0008bd8f) cell_clock2_toolbar_pane_g1

0x48f4,	// (0x00082837) aid_main_viewer_pane_g1_ParamLimits

0x48f4,	// (0x00082837) aid_main_viewer_pane_g1

0x4900,	// (0x00082843) aid_main_viewer_pane_g2_ParamLimits

0x4900,	// (0x00082843) aid_main_viewer_pane_g2

0x490c,	// (0x0008284f) aid_main_viewer_pane_g3_ParamLimits

0x490c,	// (0x0008284f) aid_main_viewer_pane_g3

0x491d,	// (0x00082860) aid_main_viewer_pane_g4_ParamLimits

0x491d,	// (0x00082860) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0008d3c1) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0008d3c1) aid_main_viewer_pane_g

0x50a7,	// (0x00082fea) main_calc_pane_ParamLimits

0x50b4,	// (0x00082ff7) main_dialer2_pane_ParamLimits

0xa21a,	// (0x0008815d) main_cam6_pane

0xa21a,	// (0x0008815d) main_vid6_pane

0x6464,	// (0x000843a7) listscroll_gen_pane_cp06_ParamLimits

0x6464,	// (0x000843a7) listscroll_gen_pane_cp06

0x652b,	// (0x0008446e) main_clock2_pane_t5_ParamLimits

0x652b,	// (0x0008446e) main_clock2_pane_t5

0x6578,	// (0x000844bb) aid_call2_pane_cp10_ParamLimits

0x658a,	// (0x000844cd) aid_call_pane_cp10_ParamLimits

0xb420,	// (0x00089363) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb420,	// (0x00089363) popup_clock_analogue_window_cp10_g2_ParamLimits

0x659c,	// (0x000844df) popup_clock_analogue_window_cp10_g3_ParamLimits

0x659c,	// (0x000844df) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb420,	// (0x00089363) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0008d6fc) popup_clock_analogue_window_cp10_g_ParamLimits

0x65b2,	// (0x000844f5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6dcc,	// (0x00084d0f) cell_dialer2_keypad_pane_g2_ParamLimits

0x6dcc,	// (0x00084d0f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0008d7e6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0008d7e6) cell_dialer2_keypad_pane_g

0x6de8,	// (0x00084d2b) cell_dialer2_keypad_pane_t1

0x7896,	// (0x000857d9) main_cset_text2_pane_ParamLimits

0x7896,	// (0x000857d9) main_cset_text2_pane

0xdc73,	// (0x0008bbb6) area_vitu2_query_pane_g1_ParamLimits

0x1023,	// (0x0007ef66) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0008d99b) area_vitu2_query_pane_g_ParamLimits

0x10d4,	// (0x0007f017) area_vitu2_query_pane_t7_ParamLimits

0x10d4,	// (0x0007f017) area_vitu2_query_pane_t7

0x8081,	// (0x00085fc4) bg_button_pane_cp018_ParamLimits

0x808f,	// (0x00085fd2) bg_button_pane_cp021_ParamLimits

0x10f8,	// (0x0007f03b) bg_button_pane_cp022_ParamLimits

0x10f8,	// (0x0007f03b) bg_vkb2_func_pane_cp08_ParamLimits

0x8081,	// (0x00085fc4) bg_vkb2_func_pane_cp06_ParamLimits

0x808f,	// (0x00085fd2) bg_vkb2_func_pane_cp07_ParamLimits

0x1109,	// (0x0007f04c) input_focus_pane_cp09_ParamLimits

0x851c,	// (0x0008645f) cam6_autofocus_pane_ParamLimits

0x851c,	// (0x0008645f) cam6_autofocus_pane

0x853e,	// (0x00086481) cam6_image_uncrop_pane_ParamLimits

0x853e,	// (0x00086481) cam6_image_uncrop_pane

0x856b,	// (0x000864ae) cam6_indi_pane_ParamLimits

0x856b,	// (0x000864ae) cam6_indi_pane

0x8585,	// (0x000864c8) cam6_mode_pane_ParamLimits

0x8585,	// (0x000864c8) cam6_mode_pane

0x8599,	// (0x000864dc) cam6_timer_pane_ParamLimits

0x8599,	// (0x000864dc) cam6_timer_pane

0x85a5,	// (0x000864e8) cam6_zoom_pane_ParamLimits

0x85a5,	// (0x000864e8) cam6_zoom_pane

0x85c1,	// (0x00086504) cam6_mode_pane_g1_ParamLimits

0x85c1,	// (0x00086504) cam6_mode_pane_g1

0x85cd,	// (0x00086510) cam6_mode_pane_g2_ParamLimits

0x85cd,	// (0x00086510) cam6_mode_pane_g2

0x85d9,	// (0x0008651c) cam6_mode_pane_g3_ParamLimits

0x85d9,	// (0x0008651c) cam6_mode_pane_g3

0x85e5,	// (0x00086528) cam6_mode_pane_g4_ParamLimits

0x85e5,	// (0x00086528) cam6_mode_pane_g4

0x0003,

0xfb39,	// (0x0008da7c) cam6_mode_pane_g_ParamLimits

0xfb39,	// (0x0008da7c) cam6_mode_pane_g

0xdc8b,	// (0x0008bbce) bg_tb_trans_pane_cp08_ParamLimits

0xdc8b,	// (0x0008bbce) bg_tb_trans_pane_cp08

0xde54,	// (0x0008bd97) cam6_battery_pane_ParamLimits

0xde54,	// (0x0008bd97) cam6_battery_pane

0xde6a,	// (0x0008bdad) cam6_indi_pane_g1_ParamLimits

0xde6a,	// (0x0008bdad) cam6_indi_pane_g1

0xde7c,	// (0x0008bdbf) cam6_indi_pane_g2_ParamLimits

0xde7c,	// (0x0008bdbf) cam6_indi_pane_g2

0xde8e,	// (0x0008bdd1) cam6_indi_pane_g3_ParamLimits

0xde8e,	// (0x0008bdd1) cam6_indi_pane_g3

0x0002,

0xfb42,	// (0x0008da85) cam6_indi_pane_g_ParamLimits

0xfb42,	// (0x0008da85) cam6_indi_pane_g

0xdea0,	// (0x0008bde3) cam6_indi_pane_t1_ParamLimits

0xdea0,	// (0x0008bde3) cam6_indi_pane_t1

0x737c,	// (0x000852bf) cam6_autofocus_pane_g1

0x7384,	// (0x000852c7) cam6_autofocus_pane_g2

0x738c,	// (0x000852cf) cam6_autofocus_pane_g3

0x7394,	// (0x000852d7) cam6_autofocus_pane_g4

0x0003,

0xfb49,	// (0x0008da8c) cam6_autofocus_pane_g

0xdec6,	// (0x0008be09) cam6_timer_pane_g1

0xdece,	// (0x0008be11) cam6_timer_pane_t1

0xdedc,	// (0x0008be1f) cam6_zoom_cont_pane

0xdee4,	// (0x0008be27) cam6_zoom_pane_g1

0xdeec,	// (0x0008be2f) cam6_zoom_pane_g2

0x85f1,	// (0x00086534) cam6_zoom_pane_g3

0x0002,

0xfb52,	// (0x0008da95) cam6_zoom_pane_g

0xce42,	// (0x0008ad85) cam6_battery_pane_g1

0xce42,	// (0x0008ad85) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0008d604) cam6_battery_pane_g

0xdef4,	// (0x0008be37) cam6_zoom_cont_pane_g1

0xdefd,	// (0x0008be40) cam6_zoom_cont_pane_g2

0xdf06,	// (0x0008be49) cam6_zoom_cont_pane_g3

0x0002,

0xfb59,	// (0x0008da9c) cam6_zoom_cont_pane_g

0x860e,	// (0x00086551) cam6_mode_pane_cp_ParamLimits

0x860e,	// (0x00086551) cam6_mode_pane_cp

0x85a5,	// (0x000864e8) cam6_zoom_pane_cp_ParamLimits

0x85a5,	// (0x000864e8) cam6_zoom_pane_cp

0x8622,	// (0x00086565) vid6_image_uncrop_cif_pane_ParamLimits

0x8622,	// (0x00086565) vid6_image_uncrop_cif_pane

0x864e,	// (0x00086591) vid6_image_uncrop_nhd_pane_ParamLimits

0x864e,	// (0x00086591) vid6_image_uncrop_nhd_pane

0x853e,	// (0x00086481) vid6_image_uncrop_vga_pane_ParamLimits

0x853e,	// (0x00086481) vid6_image_uncrop_vga_pane

0x866d,	// (0x000865b0) vid6_image_uncrop_wvga_pane_ParamLimits

0x866d,	// (0x000865b0) vid6_image_uncrop_wvga_pane

0x868c,	// (0x000865cf) vid6_indi_pane_ParamLimits

0x868c,	// (0x000865cf) vid6_indi_pane

0xdc8b,	// (0x0008bbce) bg_tb_trans_pane_cp09_ParamLimits

0xdc8b,	// (0x0008bbce) bg_tb_trans_pane_cp09

0xdf1e,	// (0x0008be61) cam6_battery_pane_cp_ParamLimits

0xdf1e,	// (0x0008be61) cam6_battery_pane_cp

0xdf2a,	// (0x0008be6d) vid6_indi_pane_g1_ParamLimits

0xdf2a,	// (0x0008be6d) vid6_indi_pane_g1

0xdf3c,	// (0x0008be7f) vid6_indi_pane_g2_ParamLimits

0xdf3c,	// (0x0008be7f) vid6_indi_pane_g2

0xdf4e,	// (0x0008be91) vid6_indi_pane_g3_ParamLimits

0xdf4e,	// (0x0008be91) vid6_indi_pane_g3

0xdf65,	// (0x0008bea8) vid6_indi_pane_g4_ParamLimits

0xdf65,	// (0x0008bea8) vid6_indi_pane_g4

0xdf7c,	// (0x0008bebf) vid6_indi_pane_g5_ParamLimits

0xdf7c,	// (0x0008bebf) vid6_indi_pane_g5

0x0004,

0xfb60,	// (0x0008daa3) vid6_indi_pane_g_ParamLimits

0xfb60,	// (0x0008daa3) vid6_indi_pane_g

0xdf96,	// (0x0008bed9) vid6_indi_pane_t1_ParamLimits

0xdf96,	// (0x0008bed9) vid6_indi_pane_t1

0xdfac,	// (0x0008beef) vid6_indi_pane_t2_ParamLimits

0xdfac,	// (0x0008beef) vid6_indi_pane_t2

0xdfd4,	// (0x0008bf17) vid6_indi_pane_t3_ParamLimits

0xdfd4,	// (0x0008bf17) vid6_indi_pane_t3

0xdffc,	// (0x0008bf3f) vid6_indi_pane_t4_ParamLimits

0xdffc,	// (0x0008bf3f) vid6_indi_pane_t4

0x0003,

0xfb6b,	// (0x0008daae) vid6_indi_pane_t_ParamLimits

0xfb6b,	// (0x0008daae) vid6_indi_pane_t

0xe020,	// (0x0008bf63) wait_bar_pane_cp08

0x86b1,	// (0x000865f4) main_cset_text2_pane_t1_ParamLimits

0x86b1,	// (0x000865f4) main_cset_text2_pane_t1

0x85f9,	// (0x0008653c) listscroll_gen_pane_cp06_t1_ParamLimits

0x85f9,	// (0x0008653c) listscroll_gen_pane_cp06_t1

0xa21a,	// (0x0008815d) main_cam6_set_pane

0xd071,	// (0x0008afb4) bg_tb_trans_pane_cp06_ParamLimits

0x722a,	// (0x0008516d) cam4_indicators_pane_g1_ParamLimits

0x723b,	// (0x0008517e) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0008d823) cam4_indicators_pane_g_ParamLimits

0x7253,	// (0x00085196) cam4_indicators_pane_t1_ParamLimits

0xc183,	// (0x0008a0c6) bg_tb_trans_pane_cp07_ParamLimits

0x730a,	// (0x0008524d) vid4_indicators_pane_g1_ParamLimits

0x7320,	// (0x00085263) vid4_indicators_pane_g2_ParamLimits

0x7334,	// (0x00085277) vid4_indicators_pane_g3_ParamLimits

0x7347,	// (0x0008528a) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0008d835) vid4_indicators_pane_g_ParamLimits

0x7365,	// (0x000852a8) vid4_indicators_pane_t1_ParamLimits

0x81b3,	// (0x000860f6) vid4_progress_pane_g1_ParamLimits

0x81c3,	// (0x00086106) vid4_progress_pane_g2_ParamLimits

0x81d3,	// (0x00086116) vid4_progress_pane_g3_ParamLimits

0x723b,	// (0x0008517e) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0008d9e6) vid4_progress_pane_g_ParamLimits

0x81e5,	// (0x00086128) vid4_progress_pane_t1_ParamLimits

0x81fb,	// (0x0008613e) vid4_progress_pane_t2_ParamLimits

0x8210,	// (0x00086153) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0008d9f1) vid4_progress_pane_t_ParamLimits

0x8225,	// (0x00086168) wait_bar_pane_cp07_ParamLimits

0x86d8,	// (0x0008661b) main_cam6_set_pane_g2_ParamLimits

0x86d8,	// (0x0008661b) main_cam6_set_pane_g2

0x86e4,	// (0x00086627) main_cset6_listscroll_pane_ParamLimits

0x86e4,	// (0x00086627) main_cset6_listscroll_pane

0x8711,	// (0x00086654) main_cset6_slider_pane_ParamLimits

0x8711,	// (0x00086654) main_cset6_slider_pane

0x871d,	// (0x00086660) main_cset6_text2_pane_ParamLimits

0x871d,	// (0x00086660) main_cset6_text2_pane

0xe02f,	// (0x0008bf72) main_cset6_text_pane

0xe037,	// (0x0008bf7a) main_cset_list_pane_copy1_ParamLimits

0xe037,	// (0x0008bf7a) main_cset_list_pane_copy1

0xe047,	// (0x0008bf8a) scroll_pane_cp028_copy1

0x8730,	// (0x00086673) cset_list_set_pane_copy1

0x8740,	// (0x00086683) aid_position_infowindow_above_copy1

0x8748,	// (0x0008668b) aid_position_infowindow_below_copy1

0x8750,	// (0x00086693) cset_list_set_pane_g1_copy1

0x1151,	// (0x0007f094) cset_list_set_pane_g3_copy1_ParamLimits

0x1151,	// (0x0007f094) cset_list_set_pane_g3_copy1

0x1160,	// (0x0007f0a3) cset_list_set_pane_t1_copy1_ParamLimits

0x1160,	// (0x0007f0a3) cset_list_set_pane_t1_copy1

0xc183,	// (0x0008a0c6) list_highlight_pane_cp021_copy1_ParamLimits

0xc183,	// (0x0008a0c6) list_highlight_pane_cp021_copy1

0xe050,	// (0x0008bf93) cset6_slider_pane_ParamLimits

0xe050,	// (0x0008bf93) cset6_slider_pane

0xe07c,	// (0x0008bfbf) main_cset6_slider_pane_g1_ParamLimits

0xe07c,	// (0x0008bfbf) main_cset6_slider_pane_g1

0x8758,	// (0x0008669b) main_cset6_slider_pane_g2_ParamLimits

0x8758,	// (0x0008669b) main_cset6_slider_pane_g2

0xe0a4,	// (0x0008bfe7) main_cset6_slider_pane_g3_ParamLimits

0xe0a4,	// (0x0008bfe7) main_cset6_slider_pane_g3

0x8780,	// (0x000866c3) main_cset6_slider_pane_g4_ParamLimits

0x8780,	// (0x000866c3) main_cset6_slider_pane_g4

0x878c,	// (0x000866cf) main_cset6_slider_pane_g5_ParamLimits

0x878c,	// (0x000866cf) main_cset6_slider_pane_g5

0xd955,	// (0x0008b898) main_cset6_slider_pane_g7_ParamLimits

0xd955,	// (0x0008b898) main_cset6_slider_pane_g7

0xd961,	// (0x0008b8a4) main_cset6_slider_pane_g8_ParamLimits

0xd961,	// (0x0008b8a4) main_cset6_slider_pane_g8

0x8798,	// (0x000866db) main_cset6_slider_pane_g9_ParamLimits

0x8798,	// (0x000866db) main_cset6_slider_pane_g9

0x87a4,	// (0x000866e7) main_cset6_slider_pane_g10_ParamLimits

0x87a4,	// (0x000866e7) main_cset6_slider_pane_g10

0x87b0,	// (0x000866f3) main_cset6_slider_pane_g11_ParamLimits

0x87b0,	// (0x000866f3) main_cset6_slider_pane_g11

0x87bc,	// (0x000866ff) main_cset6_slider_pane_g12_ParamLimits

0x87bc,	// (0x000866ff) main_cset6_slider_pane_g12

0x87c8,	// (0x0008670b) main_cset6_slider_pane_g13_ParamLimits

0x87c8,	// (0x0008670b) main_cset6_slider_pane_g13

0x87d4,	// (0x00086717) main_cset6_slider_pane_g14_ParamLimits

0x87d4,	// (0x00086717) main_cset6_slider_pane_g14

0x87e0,	// (0x00086723) main_cset6_slider_pane_g15_ParamLimits

0x87e0,	// (0x00086723) main_cset6_slider_pane_g15

0x87f8,	// (0x0008673b) main_cset6_slider_pane_g16_ParamLimits

0x87f8,	// (0x0008673b) main_cset6_slider_pane_g16

0x8804,	// (0x00086747) main_cset6_slider_pane_g17_ParamLimits

0x8804,	// (0x00086747) main_cset6_slider_pane_g17

0x0011,

0xfb74,	// (0x0008dab7) main_cset6_slider_pane_g_ParamLimits

0xfb74,	// (0x0008dab7) main_cset6_slider_pane_g

0xe0b0,	// (0x0008bff3) main_cset6_slider_pane_t1_ParamLimits

0xe0b0,	// (0x0008bff3) main_cset6_slider_pane_t1

0x8828,	// (0x0008676b) main_cset6_slider_pane_t2_ParamLimits

0x8828,	// (0x0008676b) main_cset6_slider_pane_t2

0x8853,	// (0x00086796) main_cset6_slider_pane_t3_ParamLimits

0x8853,	// (0x00086796) main_cset6_slider_pane_t3

0x887e,	// (0x000867c1) main_cset6_slider_pane_t4_ParamLimits

0x887e,	// (0x000867c1) main_cset6_slider_pane_t4

0x88a9,	// (0x000867ec) main_cset6_slider_pane_t5_ParamLimits

0x88a9,	// (0x000867ec) main_cset6_slider_pane_t5

0xe0f1,	// (0x0008c034) main_cset6_slider_pane_t7_ParamLimits

0xe0f1,	// (0x0008c034) main_cset6_slider_pane_t7

0x88d4,	// (0x00086817) main_cset6_slider_pane_t8_ParamLimits

0x88d4,	// (0x00086817) main_cset6_slider_pane_t8

0x88f8,	// (0x0008683b) main_cset6_slider_pane_t9_ParamLimits

0x88f8,	// (0x0008683b) main_cset6_slider_pane_t9

0x891c,	// (0x0008685f) main_cset6_slider_pane_t10_ParamLimits

0x891c,	// (0x0008685f) main_cset6_slider_pane_t10

0x8940,	// (0x00086883) main_cset6_slider_pane_t11_ParamLimits

0x8940,	// (0x00086883) main_cset6_slider_pane_t11

0xe127,	// (0x0008c06a) main_cset6_slider_pane_t14_ParamLimits

0xe127,	// (0x0008c06a) main_cset6_slider_pane_t14

0xe160,	// (0x0008c0a3) main_cset6_slider_pane_t15_ParamLimits

0xe160,	// (0x0008c0a3) main_cset6_slider_pane_t15

0x000b,

0xfb99,	// (0x0008dadc) main_cset6_slider_pane_t_ParamLimits

0xfb99,	// (0x0008dadc) main_cset6_slider_pane_t

0xe199,	// (0x0008c0dc) cset_slider_pane_g1_copy1

0xe1a2,	// (0x0008c0e5) cset_slider_pane_g2_copy1

0xe1ab,	// (0x0008c0ee) cset_slider_pane_g3_copy1

0xa21a,	// (0x0008815d) bg_popup_sub_pane_cp011_copy1

0xe1b4,	// (0x0008c0f7) main_cset_text_pane_g1_copy1

0xda9b,	// (0x0008b9de) main_cset_text_pane_t1_copy1

0xdaa9,	// (0x0008b9ec) main_cset_text_pane_t2_copy1

0xdab7,	// (0x0008b9fa) main_cset_text_pane_t3_copy1

0xdac5,	// (0x0008ba08) main_cset_text_pane_t4_copy1

0xdad3,	// (0x0008ba16) main_cset_text_pane_t5_copy1

0xe1bc,	// (0x0008c0ff) main_cset_text_pane_t6_copy1

0xe1ca,	// (0x0008c10d) main_cset_text_pane_t7_copy1

0x8964,	// (0x000868a7) main_cset_text2_pane_t1_copy1

0xc183,	// (0x0008a0c6) main_ncimui_pane

0x510d,	// (0x00083050) popup_query_ncimui_window_ParamLimits

0x510d,	// (0x00083050) popup_query_ncimui_window

0x5cab,	// (0x00083bee) field_cale_ev2_pane_g4_ParamLimits

0x5cab,	// (0x00083bee) field_cale_ev2_pane_g4

0x6aa4,	// (0x000849e7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6aa4,	// (0x000849e7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0008d7bd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0008d7bd) cell_video_dialer_keypad_pane_g

0x6abc,	// (0x000849ff) cell_video_dialer_keypad_pane_t1

0xa21a,	// (0x0008815d) bg_popup_window_pane_cp012

0xb283,	// (0x000891c6) heading_pane_cp06

0xe1f6,	// (0x0008c139) ncim_query_content_pane

0xa21a,	// (0x0008815d) bg_popup_heading_pane_cp01

0xe1fe,	// (0x0008c141) ncim_heading_pane_t1

0xe20c,	// (0x0008c14f) ncim_indicator_popup_pane

0xe21e,	// (0x0008c161) ncim_query_button_pane

0xe234,	// (0x0008c177) ncim_query_content_pane_t1

0xe246,	// (0x0008c189) ncim_query_content_pane_t2

0x0005,

0xfbdd,	// (0x0008db20) ncim_query_content_pane_t

0xe280,	// (0x0008c1c3) ncim_query_list_pane

0xe292,	// (0x0008c1d5) ncim_query_popup_pane

0xe20c,	// (0x0008c14f) ncim_indicator_popup_pane_ParamLimits

0x8ac0,	// (0x00086a03) ncim_query_content_pane_g1_ParamLimits

0x8ac0,	// (0x00086a03) ncim_query_content_pane_g1

0xe234,	// (0x0008c177) ncim_query_content_pane_t1_ParamLimits

0xe246,	// (0x0008c189) ncim_query_content_pane_t2_ParamLimits

0x8acc,	// (0x00086a0f) ncim_query_content_pane_t3_ParamLimits

0x8acc,	// (0x00086a0f) ncim_query_content_pane_t3

0x8ae9,	// (0x00086a2c) ncim_query_content_pane_t4_ParamLimits

0x8ae9,	// (0x00086a2c) ncim_query_content_pane_t4

0x8b06,	// (0x00086a49) ncim_query_content_pane_t5_ParamLimits

0x8b06,	// (0x00086a49) ncim_query_content_pane_t5

0xe258,	// (0x0008c19b) ncim_query_content_pane_t6_ParamLimits

0xe258,	// (0x0008c19b) ncim_query_content_pane_t6

0xfbdd,	// (0x0008db20) ncim_query_content_pane_t_ParamLimits

0xe280,	// (0x0008c1c3) ncim_query_list_pane_ParamLimits

0xe292,	// (0x0008c1d5) ncim_query_popup_pane_ParamLimits

0xe2a6,	// (0x0008c1e9) wait_bar_pane_cp04

0xa21a,	// (0x0008815d) input_focus_pane_cp011

0xe2ae,	// (0x0008c1f1) ncim_query_popup_pane_t1

0xe2bc,	// (0x0008c1ff) ncim_list_query_list_pane_ParamLimits

0xe2bc,	// (0x0008c1ff) ncim_list_query_list_pane

0xa21a,	// (0x0008815d) bg_button_pane_cp027

0xe2cf,	// (0x0008c212) ncim_query_button_pane_g1

0xa21a,	// (0x0008815d) list_highlight_pane_cp012

0xe2d9,	// (0x0008c21c) ncim_list_query_list_pane_g1

0xe2e1,	// (0x0008c224) ncim_list_query_list_pane_t1

0x7247,	// (0x0008518a) cam4_indicators_pane_g3_ParamLimits

0x7247,	// (0x0008518a) cam4_indicators_pane_g3

0x7353,	// (0x00085296) vid4_indicators_pane_g5_ParamLimits

0x7353,	// (0x00085296) vid4_indicators_pane_g5

0x7247,	// (0x0008518a) vid4_progress_pane_g5_ParamLimits

0x7247,	// (0x0008518a) vid4_progress_pane_g5

0x8996,	// (0x000868d9) main_ncimui_pane_g1

0x8a02,	// (0x00086945) ncimui_group_query_pane_ParamLimits

0x8a02,	// (0x00086945) ncimui_group_query_pane

0x8a5c,	// (0x0008699f) ncimui_list_pane_ParamLimits

0x8a5c,	// (0x0008699f) ncimui_list_pane

0x8a83,	// (0x000869c6) ncimui_text_pane_ParamLimits

0x8a83,	// (0x000869c6) ncimui_text_pane

0x8b23,	// (0x00086a66) ncimui_text_pane_t1_ParamLimits

0x8b23,	// (0x00086a66) ncimui_text_pane_t1

0xe2ef,	// (0x0008c232) ncimui_list_single_graphic_pane_ParamLimits

0xe2ef,	// (0x0008c232) ncimui_list_single_graphic_pane

0x8b42,	// (0x00086a85) ncimui_query_pane_ParamLimits

0x8b42,	// (0x00086a85) ncimui_query_pane

0xa21a,	// (0x0008815d) list_highlight_pane_cp013

0xe2ff,	// (0x0008c242) ncim_list_query_list_pane_t1_copy1

0xe2d9,	// (0x0008c21c) ncim_list_single_graphic_pane_g1

0x8b55,	// (0x00086a98) ncim_query_button_pane_cp01

0x8b61,	// (0x00086aa4) ncim_query_entry_pane_ParamLimits

0x8b61,	// (0x00086aa4) ncim_query_entry_pane

0x8b74,	// (0x00086ab7) ncimui_query_pane_g1

0x8b80,	// (0x00086ac3) ncimui_query_pane_t1_ParamLimits

0x8b80,	// (0x00086ac3) ncimui_query_pane_t1

0xc183,	// (0x0008a0c6) input_focus_pane_cp012

0xe30d,	// (0x0008c250) ncim_query_entry_pane_t1

0xa98c,	// (0x000888cf) main_im_pane_ParamLimits

0xc183,	// (0x0008a0c6) main_mobtv_pane_ParamLimits

0xc183,	// (0x0008a0c6) main_mobtv_pane

0x8810,	// (0x00086753) main_cset6_slider_pane_g18_ParamLimits

0x8810,	// (0x00086753) main_cset6_slider_pane_g18

0x881c,	// (0x0008675f) main_cset6_slider_pane_g19_ParamLimits

0x881c,	// (0x0008675f) main_cset6_slider_pane_g19

0xd7f8,	// (0x0008b73b) bg_main_mobtv_pane_ParamLimits

0xd7f8,	// (0x0008b73b) bg_main_mobtv_pane

0x8b99,	// (0x00086adc) main_mobtv_info_pane

0x8ba4,	// (0x00086ae7) main_mobtv_loading_pane_ParamLimits

0x8ba4,	// (0x00086ae7) main_mobtv_loading_pane

0xe31f,	// (0x0008c262) main_mobtv_pg_channel_list_pane

0xe329,	// (0x0008c26c) main_mobtv_pg_hdr_pane

0x8bb1,	// (0x00086af4) main_mobtv_programe_curr_pane_ParamLimits

0x8bb1,	// (0x00086af4) main_mobtv_programe_curr_pane

0x8bbe,	// (0x00086b01) main_mobtv_programe_next_pane_ParamLimits

0x8bbe,	// (0x00086b01) main_mobtv_programe_next_pane

0xe332,	// (0x0008c275) popup_mobtv_noti_window

0xce42,	// (0x0008ad85) main_tv_pg_hdr_pane_g1

0xe33c,	// (0x0008c27f) main_tv_pg_hdr_pane_g2

0xe344,	// (0x0008c287) main_tv_pg_hdr_pane_g3

0xe34c,	// (0x0008c28f) main_tv_pg_hdr_pane_g4

0xe354,	// (0x0008c297) main_tv_pg_hdr_pane_g5

0xe35e,	// (0x0008c2a1) main_tv_pg_hdr_pane_g6

0xe368,	// (0x0008c2ab) main_tv_pg_hdr_pane_g7

0xe372,	// (0x0008c2b5) main_tv_pg_hdr_pane_g8

0xe37c,	// (0x0008c2bf) main_tv_pg_hdr_pane_g9

0xe386,	// (0x0008c2c9) main_tv_pg_hdr_pane_g10

0xe390,	// (0x0008c2d3) main_tv_pg_hdr_pane_g11

0x000a,

0xfbea,	// (0x0008db2d) main_tv_pg_hdr_pane_g

0xe39a,	// (0x0008c2dd) main_tv_pg_hdr_pane_t1

0xe3a8,	// (0x0008c2eb) main_tv_pg_hdr_pane_t2

0xe3b6,	// (0x0008c2f9) main_tv_pg_hdr_pane_t3

0xe3c6,	// (0x0008c309) main_tv_pg_hdr_pane_t4

0xe3d6,	// (0x0008c319) main_tv_pg_hdr_pane_t5

0x0004,

0xfc01,	// (0x0008db44) main_tv_pg_hdr_pane_t

0xe3e6,	// (0x0008c329) single_mobtv_pg_channel_pane_ParamLimits

0xe3e6,	// (0x0008c329) single_mobtv_pg_channel_pane

0xe3f8,	// (0x0008c33b) single_mobtv_pg_channel_table_pane

0xe401,	// (0x0008c344) single_mobtv_pg_channel_thumb_pane

0xe40a,	// (0x0008c34d) single_tv_pg_channel_pane_g1

0xe413,	// (0x0008c356) single_tv_pg_channel_pane_g2

0x0001,

0xfc0c,	// (0x0008db4f) single_tv_pg_channel_pane_g

0xd071,	// (0x0008afb4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd071,	// (0x0008afb4) bg_single_mobtv_pg_channel_thumb_pane

0xe41c,	// (0x0008c35f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe41c,	// (0x0008c35f) single_mobtv_pg_channel_thumb_pane_g1

0xe42a,	// (0x0008c36d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe42a,	// (0x0008c36d) single_mobtv_pg_channel_thumb_pane_g2

0xe436,	// (0x0008c379) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe436,	// (0x0008c379) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc11,	// (0x0008db54) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc11,	// (0x0008db54) single_mobtv_pg_channel_thumb_pane_g

0xe442,	// (0x0008c385) single_mobtv_pg_channel_thumb_pane_t1

0xe450,	// (0x0008c393) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc18,	// (0x0008db5b) single_mobtv_pg_channel_thumb_pane_t

0xce42,	// (0x0008ad85) bg_single_mobtv_pg_channel_table_pane_g1

0xce42,	// (0x0008ad85) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0008d604) bg_single_mobtv_pg_channel_table_pane_g

0xe45e,	// (0x0008c3a1) single_mobtv_pg_channel_table_pane_t1

0xe46c,	// (0x0008c3af) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc1d,	// (0x0008db60) single_mobtv_pg_channel_table_pane_t

0x8bd3,	// (0x00086b16) main_mobtv_info_pane_g1_ParamLimits

0x8bd3,	// (0x00086b16) main_mobtv_info_pane_g1

0x8bef,	// (0x00086b32) main_mobtv_info_pane_t1_ParamLimits

0x8bef,	// (0x00086b32) main_mobtv_info_pane_t1

0x8c67,	// (0x00086baa) main_mobtv_info_pane_t2_ParamLimits

0x8c67,	// (0x00086baa) main_mobtv_info_pane_t2

0x0002,

0xfc27,	// (0x0008db6a) main_mobtv_info_pane_t_ParamLimits

0xfc27,	// (0x0008db6a) main_mobtv_info_pane_t

0x8cf8,	// (0x00086c3b) wait_bar_pane_cp05

0x8d0a,	// (0x00086c4d) main_mobtv_loading_pane_g1_ParamLimits

0x8d0a,	// (0x00086c4d) main_mobtv_loading_pane_g1

0x8d16,	// (0x00086c59) main_mobtv_loading_pane_g2_ParamLimits

0x8d16,	// (0x00086c59) main_mobtv_loading_pane_g2

0x8d22,	// (0x00086c65) main_mobtv_loading_pane_g3_ParamLimits

0x8d22,	// (0x00086c65) main_mobtv_loading_pane_g3

0x0002,

0xfc2e,	// (0x0008db71) main_mobtv_loading_pane_g_ParamLimits

0xfc2e,	// (0x0008db71) main_mobtv_loading_pane_g

0xe47a,	// (0x0008c3bd) main_mobtv_loading_pane_t1_ParamLimits

0xe47a,	// (0x0008c3bd) main_mobtv_loading_pane_t1

0xe492,	// (0x0008c3d5) main_mobtv_loading_pane_t2_ParamLimits

0xe492,	// (0x0008c3d5) main_mobtv_loading_pane_t2

0x0001,

0xfc35,	// (0x0008db78) main_mobtv_loading_pane_t_ParamLimits

0xfc35,	// (0x0008db78) main_mobtv_loading_pane_t

0x8d30,	// (0x00086c73) wait_bar_pane_cp06_ParamLimits

0x8d30,	// (0x00086c73) wait_bar_pane_cp06

0xe4b6,	// (0x0008c3f9) main_mobtv_programe_curr_pane_t1

0xe4c4,	// (0x0008c407) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc3a,	// (0x0008db7d) main_mobtv_programe_curr_pane_t

0xe4d2,	// (0x0008c415) main_mobtv_programe_next_pane_t1

0xe4e0,	// (0x0008c423) main_mobtv_programe_next_pane_t2

0xe4ee,	// (0x0008c431) main_mobtv_programe_next_pane_t3

0x0002,

0xfc3f,	// (0x0008db82) main_mobtv_programe_next_pane_t

0xa21a,	// (0x0008815d) bg_popup_mobtv_noti_window_pane

0xe4fc,	// (0x0008c43f) popup_mobtv_noti_window_g1

0xe504,	// (0x0008c447) popup_mobtv_noti_window_t1

0xe512,	// (0x0008c455) popup_mobtv_noti_window_t2

0x0001,

0xfc46,	// (0x0008db89) popup_mobtv_noti_window_t

0xce42,	// (0x0008ad85) bg_popup_mobtv_noti_window_pane_g1

0xa21a,	// (0x0008815d) sc_clock_pane

0xa21a,	// (0x0008815d) main_fs_bigclock_pane

0x83cb,	// (0x0008630e) blid2_tripm_pane_t4_ParamLimits

0x83cb,	// (0x0008630e) blid2_tripm_pane_t4

0x8d3c,	// (0x00086c7f) sc_clock_pane_g1_ParamLimits

0x8d3c,	// (0x00086c7f) sc_clock_pane_g1

0x8d4a,	// (0x00086c8d) sc_clock_pane_t1_ParamLimits

0x8d4a,	// (0x00086c8d) sc_clock_pane_t1

0x8d5f,	// (0x00086ca2) sc_clock_pane_t2_ParamLimits

0x8d5f,	// (0x00086ca2) sc_clock_pane_t2

0x8d71,	// (0x00086cb4) sc_clock_pane_t3_ParamLimits

0x8d71,	// (0x00086cb4) sc_clock_pane_t3

0x0004,

0xfc4b,	// (0x0008db8e) sc_clock_pane_t_ParamLimits

0xfc4b,	// (0x0008db8e) sc_clock_pane_t

0x97d9,	// (0x0008771c) main_fs_bigclock_indicator_pane_ParamLimits

0x97d9,	// (0x0008771c) main_fs_bigclock_indicator_pane

0x8e00,	// (0x00086d43) main_fs_bigclock_pane_g1_ParamLimits

0x8e00,	// (0x00086d43) main_fs_bigclock_pane_g1

0x97e5,	// (0x00087728) main_fs_bigclock_pane_t1_ParamLimits

0x97e5,	// (0x00087728) main_fs_bigclock_pane_t1

0x97f7,	// (0x0008773a) main_fs_bigclock_pane_t2_ParamLimits

0x97f7,	// (0x0008773a) main_fs_bigclock_pane_t2

0x980b,	// (0x0008774e) main_fs_bigclock_pane_t3_ParamLimits

0x980b,	// (0x0008774e) main_fs_bigclock_pane_t3

0x0002,

0xfe59,	// (0x0008dd9c) main_fs_bigclock_pane_t_ParamLimits

0xfe59,	// (0x0008dd9c) main_fs_bigclock_pane_t

0xec89,	// (0x0008cbcc) main_fs_bigclock_indicator_pane_g1

0xe226,	// (0x0008c169) ncim_query_content_pane_g2_ParamLimits

0xe226,	// (0x0008c169) ncim_query_content_pane_g2

0x0001,

0xfbd8,	// (0x0008db1b) ncim_query_content_pane_g_ParamLimits

0xfbd8,	// (0x0008db1b) ncim_query_content_pane_g

0x8d83,	// (0x00086cc6) sc_clock_pane_t4_ParamLimits

0x8d83,	// (0x00086cc6) sc_clock_pane_t4

0xc183,	// (0x0008a0c6) main_radioblah_pane

0x70eb,	// (0x0008502e) cell_call4_button_pane_t1_copy1_ParamLimits

0x70eb,	// (0x0008502e) cell_call4_button_pane_t1_copy1

0x89b2,	// (0x000868f5) main_ncimui_pane_t1_ParamLimits

0x89b2,	// (0x000868f5) main_ncimui_pane_t1

0x89cc,	// (0x0008690f) main_ncimui_pane_t2_ParamLimits

0x89cc,	// (0x0008690f) main_ncimui_pane_t2

0x0002,

0xfbd1,	// (0x0008db14) main_ncimui_pane_t_ParamLimits

0xfbd1,	// (0x0008db14) main_ncimui_pane_t

0xe520,	// (0x0008c463) main_radioblah_anim_pane_ParamLimits

0xe520,	// (0x0008c463) main_radioblah_anim_pane

0xe531,	// (0x0008c474) main_radioblah_info_pane_ParamLimits

0xe531,	// (0x0008c474) main_radioblah_info_pane

0xe545,	// (0x0008c488) main_radioblah_pane_t1_ParamLimits

0xe545,	// (0x0008c488) main_radioblah_pane_t1

0xe561,	// (0x0008c4a4) main_radioblah_pane_t2_ParamLimits

0xe561,	// (0x0008c4a4) main_radioblah_pane_t2

0x0003,

0xfc6c,	// (0x0008dbaf) main_radioblah_pane_t_ParamLimits

0xfc6c,	// (0x0008dbaf) main_radioblah_pane_t

0x8f9f,	// (0x00086ee2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8f9f,	// (0x00086ee2) main_radioblah_rocker_ctrl_pane

0xe5b2,	// (0x0008c4f5) main_radioblah_info_pane_t1_ParamLimits

0xe5b2,	// (0x0008c4f5) main_radioblah_info_pane_t1

0x8fe8,	// (0x00086f2b) main_radioblah_info_pane_t2_ParamLimits

0x8fe8,	// (0x00086f2b) main_radioblah_info_pane_t2

0x0003,

0xfc75,	// (0x0008dbb8) main_radioblah_info_pane_t_ParamLimits

0xfc75,	// (0x0008dbb8) main_radioblah_info_pane_t

0xce42,	// (0x0008ad85) main_radioblah_rocker_ctrl_pane_g1

0x9098,	// (0x00086fdb) main_radioblah_rocker_ctrl_pane_g2

0x90a0,	// (0x00086fe3) main_radioblah_rocker_ctrl_pane_g3

0x90a8,	// (0x00086feb) main_radioblah_rocker_ctrl_pane_g4

0x90b0,	// (0x00086ff3) main_radioblah_rocker_ctrl_pane_g5

0x90b8,	// (0x00086ffb) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc7e,	// (0x0008dbc1) main_radioblah_rocker_ctrl_pane_g

0x8964,	// (0x000868a7) main_cset_text2_pane_t1_copy1_ParamLimits

0x7174,	// (0x000850b7) cam4_image_uncrop_qvga_pane

0x72b9,	// (0x000851fc) vid4_image_uncrop_qcif_pane

0x855d,	// (0x000864a0) cam6_image_uncrop_qvga_pane_ParamLimits

0x855d,	// (0x000864a0) cam6_image_uncrop_qvga_pane

0xdf0e,	// (0x0008be51) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf0e,	// (0x0008be51) vid6_image_uncrop_qcif_pane

0xa21a,	// (0x0008815d) bg_popup_preview_window_pane_cp03

0xe1d8,	// (0x0008c11b) list_cset_text2_pane

0xe1e0,	// (0x0008c123) main_cset6_text2_pane_g1

0xe1e8,	// (0x0008c12b) main_cset6_text2_pane_t1

0x90c0,	// (0x00087003) list_cset_text2_pane_t1_ParamLimits

0x90c0,	// (0x00087003) list_cset_text2_pane_t1

0xc183,	// (0x0008a0c6) main_radioblah_pane_ParamLimits

0x8ce4,	// (0x00086c27) main_mobtv_info_pane_t3_ParamLimits

0x8ce4,	// (0x00086c27) main_mobtv_info_pane_t3

0x8f8d,	// (0x00086ed0) main_radioblah_pane_g1

0x8fb8,	// (0x00086efb) main_radioblah_info_pane_g1

0x903d,	// (0x00086f80) main_radioblah_info_pane_t3_ParamLimits

0x903d,	// (0x00086f80) main_radioblah_info_pane_t3

0x3f33,	// (0x00081e76) highlight_cell_cale_month_pane_ParamLimits

0x3f33,	// (0x00081e76) highlight_cell_cale_month_pane

0xa21a,	// (0x0008815d) main_phob_fisheye_pane

0xd14d,	// (0x0008b090) scroll_pane_cp0031_ParamLimits

0xd14d,	// (0x0008b090) scroll_pane_cp0031

0xe020,	// (0x0008bf63) wait_bar_pane_cp08_ParamLimits

0x8730,	// (0x00086673) cset_list_set_pane_copy1_ParamLimits

0xe5ec,	// (0x0008c52f) highlight_cell_cale_month_pane_g1

0x90d7,	// (0x0008701a) highlight_cell_cale_month_pane_t1

0xdce1,	// (0x0008bc24) list_gen_pane_cp01

0xd940,	// (0x0008b883) scroll_pane_01

0x90e5,	// (0x00087028) list_single_double_fisheye_pane

0x124b,	// (0x0007f18e) list_double_fisheye_pane_g1_ParamLimits

0x124b,	// (0x0007f18e) list_double_fisheye_pane_g1

0x1257,	// (0x0007f19a) list_double_fisheye_pane_g2_ParamLimits

0x1257,	// (0x0007f19a) list_double_fisheye_pane_g2

0x90ee,	// (0x00087031) list_double_fisheye_pane_g3_ParamLimits

0x90ee,	// (0x00087031) list_double_fisheye_pane_g3

0x0004,

0xfc8b,	// (0x0008dbce) list_double_fisheye_pane_g_ParamLimits

0xfc8b,	// (0x0008dbce) list_double_fisheye_pane_g

0x1288,	// (0x0007f1cb) list_double_fisheye_pane_t1_ParamLimits

0x1288,	// (0x0007f1cb) list_double_fisheye_pane_t1

0x12a3,	// (0x0007f1e6) list_double_fisheye_pane_t2_ParamLimits

0x12a3,	// (0x0007f1e6) list_double_fisheye_pane_t2

0x0001,

0xfc96,	// (0x0008dbd9) list_double_fisheye_pane_t_ParamLimits

0xfc96,	// (0x0008dbd9) list_double_fisheye_pane_t

0xa21a,	// (0x0008815d) main_call5_pane

0x8da9,	// (0x00086cec) sc_swipe_pane_ParamLimits

0x8da9,	// (0x00086cec) sc_swipe_pane

0x9106,	// (0x00087049) call5_image_pane_ParamLimits

0x9106,	// (0x00087049) call5_image_pane

0x9118,	// (0x0008705b) call5_swipe_1_pane_ParamLimits

0x9118,	// (0x0008705b) call5_swipe_1_pane

0x9124,	// (0x00087067) call5_swipe_2_pane_ParamLimits

0x9124,	// (0x00087067) call5_swipe_2_pane

0x913e,	// (0x00087081) popup_call5_audio_first_window_ParamLimits

0x913e,	// (0x00087081) popup_call5_audio_first_window

0xd071,	// (0x0008afb4) call5_swipe_1_pane_g1_ParamLimits

0xd071,	// (0x0008afb4) call5_swipe_1_pane_g1

0xe5f4,	// (0x0008c537) call5_swipe_1_pane_g2_ParamLimits

0xe5f4,	// (0x0008c537) call5_swipe_1_pane_g2

0x0001,

0xfc9b,	// (0x0008dbde) call5_swipe_1_pane_g_ParamLimits

0xfc9b,	// (0x0008dbde) call5_swipe_1_pane_g

0xe600,	// (0x0008c543) call5_swipe_1_pane_t1_ParamLimits

0xe600,	// (0x0008c543) call5_swipe_1_pane_t1

0xd071,	// (0x0008afb4) call5_swipe_2_pane_g1_ParamLimits

0xd071,	// (0x0008afb4) call5_swipe_2_pane_g1

0xe615,	// (0x0008c558) call5_swipe_2_pane_g2_ParamLimits

0xe615,	// (0x0008c558) call5_swipe_2_pane_g2

0x0001,

0xfca0,	// (0x0008dbe3) call5_swipe_2_pane_g_ParamLimits

0xfca0,	// (0x0008dbe3) call5_swipe_2_pane_g

0xe621,	// (0x0008c564) call5_swipe_2_pane_t1_ParamLimits

0xe621,	// (0x0008c564) call5_swipe_2_pane_t1

0xe636,	// (0x0008c579) sc_swipe_pane_g1_ParamLimits

0xe636,	// (0x0008c579) sc_swipe_pane_g1

0xe643,	// (0x0008c586) sc_swipe_pane_g2_ParamLimits

0xe643,	// (0x0008c586) sc_swipe_pane_g2

0x0001,

0xfca5,	// (0x0008dbe8) sc_swipe_pane_g_ParamLimits

0xfca5,	// (0x0008dbe8) sc_swipe_pane_g

0xe64f,	// (0x0008c592) sc_swipe_pane_t1_ParamLimits

0xe64f,	// (0x0008c592) sc_swipe_pane_t1

0xa21a,	// (0x0008815d) main_cmail_launcher_pane

0x914e,	// (0x00087091) aid_size_cell_cmail_l_ParamLimits

0x914e,	// (0x00087091) aid_size_cell_cmail_l

0x915c,	// (0x0008709f) grid_cmail_l_pane_ParamLimits

0x915c,	// (0x0008709f) grid_cmail_l_pane

0x916c,	// (0x000870af) cell_cmail_l_pane_ParamLimits

0x916c,	// (0x000870af) cell_cmail_l_pane

0xe664,	// (0x0008c5a7) cell_cmail_l_pane_g1_ParamLimits

0xe664,	// (0x0008c5a7) cell_cmail_l_pane_g1

0xe670,	// (0x0008c5b3) cell_cmail_l_pane_t1_ParamLimits

0xe670,	// (0x0008c5b3) cell_cmail_l_pane_t1

0xe686,	// (0x0008c5c9) cell_cmail_l_pane_t2_ParamLimits

0xe686,	// (0x0008c5c9) cell_cmail_l_pane_t2

0x0001,

0xfcaa,	// (0x0008dbed) cell_cmail_l_pane_t_ParamLimits

0xfcaa,	// (0x0008dbed) cell_cmail_l_pane_t

0xc183,	// (0x0008a0c6) grid_highlight_pane_cp018_ParamLimits

0xc183,	// (0x0008a0c6) grid_highlight_pane_cp018

0x1e86,	// (0x0007fdc9) main2_pane_ParamLimits

0x1e86,	// (0x0007fdc9) main2_pane

0xaa25,	// (0x00088968) popup_sp_fs_action_menu_bg_pane_g1

0xaa2d,	// (0x00088970) popup_sp_fs_action_menu_bg_pane_g2

0xaa35,	// (0x00088978) popup_sp_fs_action_menu_bg_pane_g3

0xaa3d,	// (0x00088980) popup_sp_fs_action_menu_bg_pane_g4

0xaa45,	// (0x00088988) popup_sp_fs_action_menu_bg_pane_g5

0xaa4d,	// (0x00088990) popup_sp_fs_action_menu_bg_pane_g6

0xaa55,	// (0x00088998) popup_sp_fs_action_menu_bg_pane_g7

0xaa5d,	// (0x000889a0) popup_sp_fs_action_menu_bg_pane_g8

0xaa65,	// (0x000889a8) popup_sp_fs_action_menu_bg_pane_g9

0xaa6d,	// (0x000889b0) popup_sp_fs_action_menu_bg_pane_g10

0xaa6d,	// (0x000889b0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0008d0b2) popup_sp_fs_action_menu_bg_pane_g

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t3_g3_g1

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_t3_g3_g2

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0008d160) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0008d160) list_medium_line_x2_t3_g3_g

0x0ab9,	// (0x0007e9fc) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ab9,	// (0x0007e9fc) list_medium_line_x2_t3_g3_t1

0x0ace,	// (0x0007ea11) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ace,	// (0x0007ea11) list_medium_line_x2_t3_g3_t2

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0008d167) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0008d167) list_medium_line_x2_t3_g3_t

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t3_g2_g1

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0008d16e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0008d16e) list_medium_line_x2_t3_g2_g

0x0af5,	// (0x0007ea38) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0af5,	// (0x0007ea38) list_medium_line_x2_t3_g2_t1

0x0b0b,	// (0x0007ea4e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0b0b,	// (0x0007ea4e) list_medium_line_x2_t3_g2_t2

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0008d173) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0008d173) list_medium_line_x2_t3_g2_t

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t4_g4_g1

0x0b1d,	// (0x0007ea60) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0b1d,	// (0x0007ea60) list_medium_line_x2_t4_g4_g2

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_t4_g4_g3

0x0b29,	// (0x0007ea6c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0b29,	// (0x0007ea6c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0008d17a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0008d17a) list_medium_line_x2_t4_g4_g

0x0b35,	// (0x0007ea78) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0b35,	// (0x0007ea78) list_medium_line_x2_t4_g4_t1

0x0b4f,	// (0x0007ea92) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0b4f,	// (0x0007ea92) list_medium_line_x2_t4_g4_t2

0x0b65,	// (0x0007eaa8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0b65,	// (0x0007eaa8) list_medium_line_x2_t4_g4_t3

0x0b7a,	// (0x0007eabd) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0b7a,	// (0x0007eabd) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0008d183) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0008d183) list_medium_line_x2_t4_g4_t

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t2_g4_g1

0x0b1d,	// (0x0007ea60) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0b1d,	// (0x0007ea60) list_medium_line_x2_t2_g4_g2

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_t2_g4_g3

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0008d1ea) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0008d1ea) list_medium_line_x2_t2_g4_g

0x0b8c,	// (0x0007eacf) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0b8c,	// (0x0007eacf) list_medium_line_x2_t2_g4_t1

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0008d1f3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0008d1f3) list_medium_line_x2_t2_g4_t

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t2_g3_g1

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_t2_g3_g2

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0008d160) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0008d160) list_medium_line_x2_t2_g3_g

0x0ba1,	// (0x0007eae4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0ba1,	// (0x0007eae4) list_medium_line_x2_t2_g3_t1

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0008d1f8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0008d1f8) list_medium_line_x2_t2_g3_t

0x40dc,	// (0x0008201f) main_sp_fs_list_pane_ParamLimits

0x40dc,	// (0x0008201f) main_sp_fs_list_pane

0x40e8,	// (0x0008202b) sp_fs_scroll_pane_ParamLimits

0x40e8,	// (0x0008202b) sp_fs_scroll_pane

0x0bb6,	// (0x0007eaf9) list_medium_line_x2_t3_t1

0x0bc6,	// (0x0007eb09) list_medium_line_x2_t3_t2

0x0bd4,	// (0x0007eb17) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0008d243) list_medium_line_x2_t3_t

0x0be2,	// (0x0007eb25) list_medium_line_x3_t4_t1

0x0bf2,	// (0x0007eb35) list_medium_line_x3_t4_t2

0x0c00,	// (0x0007eb43) list_medium_line_x3_t4_t3

0x0bd4,	// (0x0007eb17) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0008d24a) list_medium_line_x3_t4_t

0x0c0e,	// (0x0007eb51) list_medium_line_x4_t5_t1

0x0c1e,	// (0x0007eb61) list_medium_line_x4_t5_t2

0x0c00,	// (0x0007eb43) list_medium_line_x4_t5_t3

0x0c2c,	// (0x0007eb6f) list_medium_line_x4_t5_t4

0x0bd4,	// (0x0007eb17) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0008d253) list_medium_line_x4_t5_t

0x0a95,	// (0x0007e9d8) list_medium_line_t4_g4_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_t4_g4_g1

0x0b29,	// (0x0007ea6c) list_medium_line_t4_g4_g2_ParamLimits

0x0b29,	// (0x0007ea6c) list_medium_line_t4_g4_g2

0x0c3a,	// (0x0007eb7d) list_medium_line_t4_g4_g3_ParamLimits

0x0c3a,	// (0x0007eb7d) list_medium_line_t4_g4_g3

0x0aad,	// (0x0007e9f0) list_medium_line_t4_g4_g4_ParamLimits

0x0aad,	// (0x0007e9f0) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0008d25e) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0008d25e) list_medium_line_t4_g4_g

0x0c46,	// (0x0007eb89) list_medium_line_t4_g4_t1_ParamLimits

0x0c46,	// (0x0007eb89) list_medium_line_t4_g4_t1

0x0c5b,	// (0x0007eb9e) list_medium_line_t4_g4_t2_ParamLimits

0x0c5b,	// (0x0007eb9e) list_medium_line_t4_g4_t2

0x0c70,	// (0x0007ebb3) list_medium_line_t4_g4_t3_ParamLimits

0x0c70,	// (0x0007ebb3) list_medium_line_t4_g4_t3

0x0ae0,	// (0x0007ea23) list_medium_line_t4_g4_t4_ParamLimits

0x0ae0,	// (0x0007ea23) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0008d267) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0008d267) list_medium_line_t4_g4_t

0x4207,	// (0x0008214a) chi_dic_find_pane_g1

0x50c2,	// (0x00083005) main_tport_pane

0x0ec6,	// (0x0007ee09) list_medium_line_plain_t1

0x0ed4,	// (0x0007ee17) list_medium_line_t2_g2_g1_ParamLimits

0x0ed4,	// (0x0007ee17) list_medium_line_t2_g2_g1

0x7d1d,	// (0x00085c60) list_medium_line_t2_g2_g2_ParamLimits

0x7d1d,	// (0x00085c60) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0008d92c) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0008d92c) list_medium_line_t2_g2_g

0x0ee0,	// (0x0007ee23) list_medium_line_t2_g2_t1_ParamLimits

0x0ee0,	// (0x0007ee23) list_medium_line_t2_g2_t1

0x0efa,	// (0x0007ee3d) list_medium_line_t2_g2_t2_ParamLimits

0x0efa,	// (0x0007ee3d) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0008d931) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0008d931) list_medium_line_t2_g2_t

0x111a,	// (0x0007f05d) aid_sp_fs_list_icon_a_sm

0x8238,	// (0x0008617b) aid_sp_fs_list_icon_d

0xaf85,	// (0x00088ec8) aid_sp_fs_text_primary

0xaf8e,	// (0x00088ed1) aid_sp_fs_text_secondary

0x8240,	// (0x00086183) list_medium_line

0x8240,	// (0x00086183) list_medium_line_g2

0x8240,	// (0x00086183) list_medium_line_g3

0x8240,	// (0x00086183) list_medium_line_plain

0x8240,	// (0x00086183) list_medium_line_plain_t2

0x8240,	// (0x00086183) list_medium_line_plain_t3

0x8240,	// (0x00086183) list_medium_line_right_icon

0x8240,	// (0x00086183) list_medium_line_right_iconx2

0x8240,	// (0x00086183) list_medium_line_t2

0x8240,	// (0x00086183) list_medium_line_t2_g2

0x8240,	// (0x00086183) list_medium_line_t2_g3

0x8240,	// (0x00086183) list_medium_line_t2_right_icon

0x8240,	// (0x00086183) list_medium_line_t2_right_iconx2

0x8240,	// (0x00086183) list_medium_line_t3

0x8240,	// (0x00086183) list_medium_line_t3_g2

0x8240,	// (0x00086183) list_medium_line_t3_g3

0x8240,	// (0x00086183) list_medium_line_t3_right_iconx2

0x1122,	// (0x0007f065) list_medium_line_t4_g4

0x112b,	// (0x0007f06e) list_medium_line_x2

0x112b,	// (0x0007f06e) list_medium_line_x2_t2_g2

0x112b,	// (0x0007f06e) list_medium_line_x2_t2_g3

0x112b,	// (0x0007f06e) list_medium_line_x2_t2_g4

0x112b,	// (0x0007f06e) list_medium_line_x2_t3

0x112b,	// (0x0007f06e) list_medium_line_x2_t3_g2

0x112b,	// (0x0007f06e) list_medium_line_x2_t3_g3

0x112b,	// (0x0007f06e) list_medium_line_x2_t3_g4

0x112b,	// (0x0007f06e) list_medium_line_x2_t4_g2

0x112b,	// (0x0007f06e) list_medium_line_x2_t4_g4

0x1134,	// (0x0007f077) list_medium_line_x3

0x1134,	// (0x0007f077) list_medium_line_x3_t4

0x1134,	// (0x0007f077) list_medium_line_x3_t4_g4

0x1122,	// (0x0007f065) list_medium_line_x4_t4

0x1122,	// (0x0007f065) list_medium_line_x4_t4_g7

0x1122,	// (0x0007f065) list_medium_line_x4_t5

0x113d,	// (0x0007f080) list_single_fs_dyc_pane_ParamLimits

0x113d,	// (0x0007f080) list_single_fs_dyc_pane

0x0a95,	// (0x0007e9d8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x4_t4_g7_g1

0x1175,	// (0x0007f0b8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1175,	// (0x0007f0b8) list_medium_line_x4_t4_g7_g2

0x1181,	// (0x0007f0c4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1181,	// (0x0007f0c4) list_medium_line_x4_t4_g7_g3

0x1190,	// (0x0007f0d3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1190,	// (0x0007f0d3) list_medium_line_x4_t4_g7_g4

0x119c,	// (0x0007f0df) list_medium_line_x4_t4_g7_g5_ParamLimits

0x119c,	// (0x0007f0df) list_medium_line_x4_t4_g7_g5

0x11ab,	// (0x0007f0ee) list_medium_line_x4_t4_g7_g6_ParamLimits

0x11ab,	// (0x0007f0ee) list_medium_line_x4_t4_g7_g6

0x11ba,	// (0x0007f0fd) list_medium_line_x4_t4_g7_g7_ParamLimits

0x11ba,	// (0x0007f0fd) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb2,	// (0x0008daf5) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb2,	// (0x0008daf5) list_medium_line_x4_t4_g7_g

0x11c6,	// (0x0007f109) list_medium_line_x4_t4_g7_t1_ParamLimits

0x11c6,	// (0x0007f109) list_medium_line_x4_t4_g7_t1

0x11db,	// (0x0007f11e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x11db,	// (0x0007f11e) list_medium_line_x4_t4_g7_t2

0x11f0,	// (0x0007f133) list_medium_line_x4_t4_g7_t3_ParamLimits

0x11f0,	// (0x0007f133) list_medium_line_x4_t4_g7_t3

0x1205,	// (0x0007f148) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1205,	// (0x0007f148) list_medium_line_x4_t4_g7_t4

0x1217,	// (0x0007f15a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1217,	// (0x0007f15a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc1,	// (0x0008db04) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc1,	// (0x0008db04) list_medium_line_x4_t4_g7_t

0x1229,	// (0x0007f16c) list_single_dyc_row_pane_ParamLimits

0x1229,	// (0x0007f16c) list_single_dyc_row_pane

0x90fa,	// (0x0008703d) call5_gesture_pane_ParamLimits

0x90fa,	// (0x0008703d) call5_gesture_pane

0x9130,	// (0x00087073) call5_windows_pane_ParamLimits

0x9130,	// (0x00087073) call5_windows_pane

0x9181,	// (0x000870c4) call5_swipe_1_pane_cp_ParamLimits

0x9181,	// (0x000870c4) call5_swipe_1_pane_cp

0x918d,	// (0x000870d0) call5_swipe_2_pane_cp_ParamLimits

0x918d,	// (0x000870d0) call5_swipe_2_pane_cp

0xab71,	// (0x00088ab4) call5_image_pane_cp

0x9199,	// (0x000870dc) popup_call5_audio_first_window_cp_ParamLimits

0x9199,	// (0x000870dc) popup_call5_audio_first_window_cp

0xe636,	// (0x0008c579) call5_swipe_1_pane_g1_cp_ParamLimits

0xe636,	// (0x0008c579) call5_swipe_1_pane_g1_cp

0xe6a3,	// (0x0008c5e6) call5_swipe_1_pane_g2_cp

0xe64f,	// (0x0008c592) call5_swipe_1_pane_t1_cp_ParamLimits

0xe64f,	// (0x0008c592) call5_swipe_1_pane_t1_cp

0xe636,	// (0x0008c579) call5_swipe_2_pane_g1_cp_ParamLimits

0xe636,	// (0x0008c579) call5_swipe_2_pane_g1_cp

0xe6ab,	// (0x0008c5ee) call5_swipe_2_pane_g2_cp

0xe6b3,	// (0x0008c5f6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6b3,	// (0x0008c5f6) call5_swipe_2_pane_t1_cp

0xc183,	// (0x0008a0c6) main_sp_fs_email_pane

0xe591,	// (0x0008c4d4) main_sp_fs_listscroll_pane_te

0x91a7,	// (0x000870ea) popup_sp_fs_action_menu_pane_ParamLimits

0x91a7,	// (0x000870ea) popup_sp_fs_action_menu_pane

0xce42,	// (0x0008ad85) bg_sp_fs_ctrlbar_pane_g1

0xe6c8,	// (0x0008c60b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6d1,	// (0x0008c614) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6da,	// (0x0008c61d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce42,	// (0x0008ad85) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcaf,	// (0x0008dbf2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc21,	// (0x0008ab64) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc21,	// (0x0008ab64) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6e3,	// (0x0008c626) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6e3,	// (0x0008c626) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ef,	// (0x0008c632) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6ef,	// (0x0008c632) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcb8,	// (0x0008dbfb) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcb8,	// (0x0008dbfb) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6fb,	// (0x0008c63e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6fb,	// (0x0008c63e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x91ed,	// (0x00087130) list_medium_line_t2_right_icon_g1

0x12c5,	// (0x0007f208) list_medium_line_t2_right_icon_t1

0x12d5,	// (0x0007f218) list_medium_line_t2_right_icon_t2

0x0001,

0xfcbd,	// (0x0008dc00) list_medium_line_t2_right_icon_t

0xca0a,	// (0x0008a94d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xca0a,	// (0x0008a94d) bg_sp_fs_ctrlbar_pane

0x924e,	// (0x00087191) main_sp_fs_ctrlbar_button_pane_cp01

0x9256,	// (0x00087199) main_sp_fs_ctrlbar_ddmenu_pane

0xe74f,	// (0x0008c692) main_sp_fs_ctrlbar_pane_g1

0xe75b,	// (0x0008c69e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc2,	// (0x0008dc05) main_sp_fs_ctrlbar_pane_g

0x9294,	// (0x000871d7) main_sp_fs_ctrlbar_pane_t1

0x92d1,	// (0x00087214) main_sp_fs_ctrlbar_pane

0x92eb,	// (0x0008722e) main_sp_fs_listscroll_pane_te_cp01

0x12e3,	// (0x0007f226) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x12e3,	// (0x0007f226) popup_sp_fs_action_menu_pane_cp01

0xc183,	// (0x0008a0c6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc183,	// (0x0008a0c6) bg_sp_fs_highlight_list_pane_cp01

0x1311,	// (0x0007f254) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1311,	// (0x0007f254) sp_fs_action_menu_list_gene_pane_g1

0xe782,	// (0x0008c6c5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe782,	// (0x0008c6c5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd0,	// (0x0008dc13) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd0,	// (0x0008dc13) sp_fs_action_menu_list_gene_pane_g

0x1320,	// (0x0007f263) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1320,	// (0x0007f263) sp_fs_action_menu_list_gene_pane_t1

0x1338,	// (0x0007f27b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1338,	// (0x0007f27b) sp_fs_action_menu_list_gene_pane

0xe78f,	// (0x0008c6d2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe78f,	// (0x0008c6d2) popup_sp_fs_action_menu_bg_pane

0x135b,	// (0x0007f29e) sp_fs_action_menu_list_pane_ParamLimits

0x135b,	// (0x0007f29e) sp_fs_action_menu_list_pane

0xaafe,	// (0x00088a41) sp_fs_scroll_pane_cp01_ParamLimits

0xaafe,	// (0x00088a41) sp_fs_scroll_pane_cp01

0x137f,	// (0x0007f2c2) list_medium_line_plain_t2_t1

0x138f,	// (0x0007f2d2) list_medium_line_plain_t2_t2

0x0001,

0xfcd5,	// (0x0008dc18) list_medium_line_plain_t2_t

0x139d,	// (0x0007f2e0) list_medium_line_plain_t3_t1

0x13ad,	// (0x0007f2f0) list_medium_line_plain_t3_t2

0x13bb,	// (0x0007f2fe) list_medium_line_plain_t3_t3

0x0002,

0xfcda,	// (0x0008dc1d) list_medium_line_plain_t3_t

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t2_g2_g1

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0008d16e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0008d16e) list_medium_line_x2_t2_g2_g

0x0c46,	// (0x0007eb89) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0c46,	// (0x0007eb89) list_medium_line_x2_t2_g2_t1

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce1,	// (0x0008dc24) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce1,	// (0x0008dc24) list_medium_line_x2_t2_g2_t

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t4_g2_g1

0x13c9,	// (0x0007f30c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x13c9,	// (0x0007f30c) list_medium_line_x2_t4_g2_g2

0x0001,

0xfce6,	// (0x0008dc29) list_medium_line_x2_t4_g2_g_ParamLimits

0xfce6,	// (0x0008dc29) list_medium_line_x2_t4_g2_g

0x13db,	// (0x0007f31e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x13db,	// (0x0007f31e) list_medium_line_x2_t4_g2_t1

0x13f5,	// (0x0007f338) list_medium_line_x2_t4_g2_t2_ParamLimits

0x13f5,	// (0x0007f338) list_medium_line_x2_t4_g2_t2

0x140b,	// (0x0007f34e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x140b,	// (0x0007f34e) list_medium_line_x2_t4_g2_t3

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t4_g2_t4

0x0003,

0xfceb,	// (0x0008dc2e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfceb,	// (0x0008dc2e) list_medium_line_x2_t4_g2_t

0x92fc,	// (0x0008723f) list_medium_line_t3_right_iconx2_g1

0x91ed,	// (0x00087130) list_medium_line_t3_right_iconx2_g2

0x1420,	// (0x0007f363) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf4,	// (0x0008dc37) list_medium_line_t3_right_iconx2_g

0x1428,	// (0x0007f36b) list_medium_line_t3_right_iconx2_t1

0x1438,	// (0x0007f37b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfb,	// (0x0008dc3e) list_medium_line_t3_right_iconx2_t

0x0a95,	// (0x0007e9d8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x3_t4_g4_g1

0x0aa1,	// (0x0007e9e4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0aa1,	// (0x0007e9e4) list_medium_line_x3_t4_g4_g2

0x0b29,	// (0x0007ea6c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0b29,	// (0x0007ea6c) list_medium_line_x3_t4_g4_g3

0x1446,	// (0x0007f389) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1446,	// (0x0007f389) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd00,	// (0x0008dc43) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd00,	// (0x0008dc43) list_medium_line_x3_t4_g4_g

0x1452,	// (0x0007f395) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1452,	// (0x0007f395) list_medium_line_x3_t4_g4_t1

0x1469,	// (0x0007f3ac) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1469,	// (0x0007f3ac) list_medium_line_x3_t4_g4_t2

0x0c5b,	// (0x0007eb9e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0c5b,	// (0x0007eb9e) list_medium_line_x3_t4_g4_t3

0x147e,	// (0x0007f3c1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x147e,	// (0x0007f3c1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd09,	// (0x0008dc4c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd09,	// (0x0008dc4c) list_medium_line_x3_t4_g4_t

0x149b,	// (0x0007f3de) list_single_dyc_row_text_pane_t1_ParamLimits

0x149b,	// (0x0007f3de) list_single_dyc_row_text_pane_t1

0x14de,	// (0x0007f421) list_single_dyc_row_text_pane_t2_ParamLimits

0x14de,	// (0x0007f421) list_single_dyc_row_text_pane_t2

0x1554,	// (0x0007f497) list_single_dyc_row_text_pane_t3_ParamLimits

0x1554,	// (0x0007f497) list_single_dyc_row_text_pane_t3

0x0005,

0xfd12,	// (0x0008dc55) list_single_dyc_row_text_pane_t_ParamLimits

0xfd12,	// (0x0008dc55) list_single_dyc_row_text_pane_t

0x1633,	// (0x0007f576) list_single_dyc_row_pane_g1_ParamLimits

0x1633,	// (0x0007f576) list_single_dyc_row_pane_g1

0x163f,	// (0x0007f582) list_single_dyc_row_pane_g2_ParamLimits

0x163f,	// (0x0007f582) list_single_dyc_row_pane_g2

0x164b,	// (0x0007f58e) list_single_dyc_row_pane_g3_ParamLimits

0x164b,	// (0x0007f58e) list_single_dyc_row_pane_g3

0x1657,	// (0x0007f59a) list_single_dyc_row_pane_g4_ParamLimits

0x1657,	// (0x0007f59a) list_single_dyc_row_pane_g4

0x0003,

0xfd1f,	// (0x0008dc62) list_single_dyc_row_pane_g_ParamLimits

0xfd1f,	// (0x0008dc62) list_single_dyc_row_pane_g

0x1663,	// (0x0007f5a6) list_single_dyc_row_text_pane_ParamLimits

0x1663,	// (0x0007f5a6) list_single_dyc_row_text_pane

0xa21a,	// (0x0008815d) bg_sp_fs_scroll_pane

0xe79d,	// (0x0008c6e0) thumb_sp_fs_scroll_pane

0x0ed4,	// (0x0007ee17) list_medium_line_g1_ParamLimits

0x0ed4,	// (0x0007ee17) list_medium_line_g1

0x1682,	// (0x0007f5c5) list_medium_line_t1_ParamLimits

0x1682,	// (0x0007f5c5) list_medium_line_t1

0x0a95,	// (0x0007e9d8) list_medium_line_x2_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x2_g1

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_g2_ParamLimits

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_g2

0x0001,

0xfd28,	// (0x0008dc6b) list_medium_line_x2_g_ParamLimits

0xfd28,	// (0x0008dc6b) list_medium_line_x2_g

0x1697,	// (0x0007f5da) list_medium_line_x2_t1_ParamLimits

0x1697,	// (0x0007f5da) list_medium_line_x2_t1

0x0a95,	// (0x0007e9d8) list_medium_line_x3_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x3_g1

0x0aa1,	// (0x0007e9e4) list_medium_line_x3_g2_ParamLimits

0x0aa1,	// (0x0007e9e4) list_medium_line_x3_g2

0x0001,

0xfd28,	// (0x0008dc6b) list_medium_line_x3_g_ParamLimits

0xfd28,	// (0x0008dc6b) list_medium_line_x3_g

0x1697,	// (0x0007f5da) list_medium_line_x3_t1_ParamLimits

0x1697,	// (0x0007f5da) list_medium_line_x3_t1

0xe7a6,	// (0x0008c6e9) thumb_sp_fs_scroll_pane_g1

0xe7af,	// (0x0008c6f2) thumb_sp_fs_scroll_pane_g2

0xe7b8,	// (0x0008c6fb) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2d,	// (0x0008dc70) thumb_sp_fs_scroll_pane_g

0xe7a6,	// (0x0008c6e9) bg_sp_fs_scroll_pane_g1

0xe7af,	// (0x0008c6f2) bg_sp_fs_scroll_pane_g2

0xe7b8,	// (0x0008c6fb) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2d,	// (0x0008dc70) bg_sp_fs_scroll_pane_g

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0a95,	// (0x0007e9d8) list_medium_line_x2_t3_g4_g1

0x0b1d,	// (0x0007ea60) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0b1d,	// (0x0007ea60) list_medium_line_x2_t3_g4_g2

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0aa1,	// (0x0007e9e4) list_medium_line_x2_t3_g4_g3

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0aad,	// (0x0007e9f0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0008d1ea) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0008d1ea) list_medium_line_x2_t3_g4_g

0x16ad,	// (0x0007f5f0) list_medium_line_x2_t3_g4_t1_ParamLimits

0x16ad,	// (0x0007f5f0) list_medium_line_x2_t3_g4_t1

0x16c3,	// (0x0007f606) list_medium_line_x2_t3_g4_t2_ParamLimits

0x16c3,	// (0x0007f606) list_medium_line_x2_t3_g4_t2

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ae0,	// (0x0007ea23) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd34,	// (0x0008dc77) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd34,	// (0x0008dc77) list_medium_line_x2_t3_g4_t

0x0ed4,	// (0x0007ee17) list_medium_line_g2_g1_ParamLimits

0x0ed4,	// (0x0007ee17) list_medium_line_g2_g1

0x7d1d,	// (0x00085c60) list_medium_line_g2_g2_ParamLimits

0x7d1d,	// (0x00085c60) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0008d92c) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0008d92c) list_medium_line_g2_g

0x16dd,	// (0x0007f620) list_medium_line_g2_t1_ParamLimits

0x16dd,	// (0x0007f620) list_medium_line_g2_t1

0x0ed4,	// (0x0007ee17) list_medium_line_t3_g2_g1_ParamLimits

0x0ed4,	// (0x0007ee17) list_medium_line_t3_g2_g1

0x7d1d,	// (0x00085c60) list_medium_line_t3_g2_g2_ParamLimits

0x7d1d,	// (0x00085c60) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0008d92c) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0008d92c) list_medium_line_t3_g2_g

0x16f2,	// (0x0007f635) list_medium_line_t3_g2_t1_ParamLimits

0x16f2,	// (0x0007f635) list_medium_line_t3_g2_t1

0x170c,	// (0x0007f64f) list_medium_line_t3_g2_t2_ParamLimits

0x170c,	// (0x0007f64f) list_medium_line_t3_g2_t2

0x1722,	// (0x0007f665) list_medium_line_t3_g2_t3_ParamLimits

0x1722,	// (0x0007f665) list_medium_line_t3_g2_t3

0x0002,

0xfd3b,	// (0x0008dc7e) list_medium_line_t3_g2_t_ParamLimits

0xfd3b,	// (0x0008dc7e) list_medium_line_t3_g2_t

0x91ed,	// (0x00087130) list_medium_line_right_icon_g1

0x173c,	// (0x0007f67f) list_medium_line_right_icon_t1

0x0ed4,	// (0x0007ee17) list_medium_line_t2_g1_ParamLimits

0x0ed4,	// (0x0007ee17) list_medium_line_t2_g1

0x174a,	// (0x0007f68d) list_medium_line_t2_t1_ParamLimits

0x174a,	// (0x0007f68d) list_medium_line_t2_t1

0x1764,	// (0x0007f6a7) list_medium_line_t2_t2_ParamLimits

0x1764,	// (0x0007f6a7) list_medium_line_t2_t2

0x0001,

0xfd42,	// (0x0008dc85) list_medium_line_t2_t_ParamLimits

0xfd42,	// (0x0008dc85) list_medium_line_t2_t

0x0ed4,	// (0x0007ee17) list_medium_line_t3_g1_ParamLimits

0x0ed4,	// (0x0007ee17) list_medium_line_t3_g1

0x1779,	// (0x0007f6bc) list_medium_line_t3_t1_ParamLimits

0x1779,	// (0x0007f6bc) list_medium_line_t3_t1

0x1793,	// (0x0007f6d6) list_medium_line_t3_t2_ParamLimits

0x1793,	// (0x0007f6d6) list_medium_line_t3_t2

0x17a9,	// (0x0007f6ec) list_medium_line_t3_t3_ParamLimits

0x17a9,	// (0x0007f6ec) list_medium_line_t3_t3

0x0002,

0xfd47,	// (0x0008dc8a) list_medium_line_t3_t_ParamLimits

0xfd47,	// (0x0008dc8a) list_medium_line_t3_t

0x0ed4,	// (0x0007ee17) list_medium_line_g3_g1_ParamLimits

0x0ed4,	// (0x0007ee17) list_medium_line_g3_g1

0x9304,	// (0x00087247) list_medium_line_g3_g2_ParamLimits

0x9304,	// (0x00087247) list_medium_line_g3_g2

0x7d1d,	// (0x00085c60) list_medium_line_g3_g3_ParamLimits

0x7d1d,	// (0x00085c60) list_medium_line_g3_g3

0x0002,

0xfd4e,	// (0x0008dc91) list_medium_line_g3_g_ParamLimits

0xfd4e,	// (0x0008dc91) list_medium_line_g3_g

0x17be,	// (0x0007f701) list_medium_line_g3_t1_ParamLimits

0x17be,	// (0x0007f701) list_medium_line_g3_t1

0x0ed4,	// (0x0007ee17) list_medium_line_t2_g3_g1_ParamLimits

0x0ed4,	// (0x0007ee17) list_medium_line_t2_g3_g1

0x9304,	// (0x00087247) list_medium_line_t2_g3_g2_ParamLimits

0x9304,	// (0x00087247) list_medium_line_t2_g3_g2

0x7d1d,	// (0x00085c60) list_medium_line_t2_g3_g3_ParamLimits

0x7d1d,	// (0x00085c60) list_medium_line_t2_g3_g3

0x0002,

0xfd4e,	// (0x0008dc91) list_medium_line_t2_g3_g_ParamLimits

0xfd4e,	// (0x0008dc91) list_medium_line_t2_g3_g

0x17d3,	// (0x0007f716) list_medium_line_t2_g3_t1_ParamLimits

0x17d3,	// (0x0007f716) list_medium_line_t2_g3_t1

0x17ed,	// (0x0007f730) list_medium_line_t2_g3_t2_ParamLimits

0x17ed,	// (0x0007f730) list_medium_line_t2_g3_t2

0x0001,

0xfd55,	// (0x0008dc98) list_medium_line_t2_g3_t_ParamLimits

0xfd55,	// (0x0008dc98) list_medium_line_t2_g3_t

0x0ed4,	// (0x0007ee17) list_medium_line_t3_g3_g1_ParamLimits

0x0ed4,	// (0x0007ee17) list_medium_line_t3_g3_g1

0x9304,	// (0x00087247) list_medium_line_t3_g3_g2_ParamLimits

0x9304,	// (0x00087247) list_medium_line_t3_g3_g2

0x7d1d,	// (0x00085c60) list_medium_line_t3_g3_g3_ParamLimits

0x7d1d,	// (0x00085c60) list_medium_line_t3_g3_g3

0x0002,

0xfd4e,	// (0x0008dc91) list_medium_line_t3_g3_g_ParamLimits

0xfd4e,	// (0x0008dc91) list_medium_line_t3_g3_g

0x1803,	// (0x0007f746) list_medium_line_t3_g3_t1_ParamLimits

0x1803,	// (0x0007f746) list_medium_line_t3_g3_t1

0x181c,	// (0x0007f75f) list_medium_line_t3_g3_t2_ParamLimits

0x181c,	// (0x0007f75f) list_medium_line_t3_g3_t2

0x1832,	// (0x0007f775) list_medium_line_t3_g3_t3_ParamLimits

0x1832,	// (0x0007f775) list_medium_line_t3_g3_t3

0x0002,

0xfd5a,	// (0x0008dc9d) list_medium_line_t3_g3_t_ParamLimits

0xfd5a,	// (0x0008dc9d) list_medium_line_t3_g3_t

0x92fc,	// (0x0008723f) list_medium_line_right_iconx2_g1

0x91ed,	// (0x00087130) list_medium_line_right_iconx2_g2

0x0001,

0xfd61,	// (0x0008dca4) list_medium_line_right_iconx2_g

0x9310,	// (0x00087253) list_medium_line_right_iconx2_t1

0x92fc,	// (0x0008723f) list_medium_line_t2_right_iconx2_g1

0x91ed,	// (0x00087130) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd61,	// (0x0008dca4) list_medium_line_t2_right_iconx2_g

0x184c,	// (0x0007f78f) list_medium_line_t2_right_iconx2_t1

0x185c,	// (0x0007f79f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd66,	// (0x0008dca9) list_medium_line_t2_right_iconx2_t

0x186a,	// (0x0007f7ad) list_medium_line_x4_t4_t1

0x1878,	// (0x0007f7bb) list_medium_line_x4_t4_t2

0x1888,	// (0x0007f7cb) list_medium_line_x4_t4_t3

0x1898,	// (0x0007f7db) list_medium_line_x4_t4_t4

0x0003,

0xfd6b,	// (0x0008dcae) list_medium_line_x4_t4_t

0x9348,	// (0x0008728b) tport_appsw_pane_ParamLimits

0x9348,	// (0x0008728b) tport_appsw_pane

0x9356,	// (0x00087299) tport_contact_pane_ParamLimits

0x9356,	// (0x00087299) tport_contact_pane

0x9366,	// (0x000872a9) tport_listscroll_pane_ParamLimits

0x9366,	// (0x000872a9) tport_listscroll_pane

0x9375,	// (0x000872b8) cell_tport_appsw_pane_ParamLimits

0x9375,	// (0x000872b8) cell_tport_appsw_pane

0xd0d6,	// (0x0008b019) tport_appsw_pane_g1_ParamLimits

0xd0d6,	// (0x0008b019) tport_appsw_pane_g1

0xe7c1,	// (0x0008c704) tport_contact_pane_g1

0xe7ca,	// (0x0008c70d) tport_contact_pane_t1

0xe7d8,	// (0x0008c71b) tport_contact_pane_t2

0x0001,

0xfd74,	// (0x0008dcb7) tport_contact_pane_t

0xe7e6,	// (0x0008c729) list_tport_pane

0xe7ef,	// (0x0008c732) scroll_pane_cp_030

0x93aa,	// (0x000872ed) cell_tport_appsw_pane_g1

0x93ba,	// (0x000872fd) cell_tport_appsw_pane_t1

0x93c8,	// (0x0008730b) grid_highlight_pane_cp019

0x93d0,	// (0x00087313) list_tport_double_graphic_pane_ParamLimits

0x93d0,	// (0x00087313) list_tport_double_graphic_pane

0xc183,	// (0x0008a0c6) list_highlight_pane_cp023_ParamLimits

0xc183,	// (0x0008a0c6) list_highlight_pane_cp023

0x93ed,	// (0x00087330) list_tport_double_graphic_pane_g1_ParamLimits

0x93ed,	// (0x00087330) list_tport_double_graphic_pane_g1

0x93fa,	// (0x0008733d) list_tport_double_graphic_pane_t1_ParamLimits

0x93fa,	// (0x0008733d) list_tport_double_graphic_pane_t1

0x940f,	// (0x00087352) list_tport_double_graphic_pane_t2_ParamLimits

0x940f,	// (0x00087352) list_tport_double_graphic_pane_t2

0x0001,

0xfd80,	// (0x0008dcc3) list_tport_double_graphic_pane_t_ParamLimits

0xfd80,	// (0x0008dcc3) list_tport_double_graphic_pane_t

0xa21a,	// (0x0008815d) main_cale_note_pane

0x7524,	// (0x00085467) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7524,	// (0x00085467) cell_vitu2_function_top_wide_pane_cp01

0x8cf8,	// (0x00086c3b) wait_bar_pane_cp05_ParamLimits

0xc183,	// (0x0008a0c6) listscroll_cmail_pane

0xe7f8,	// (0x0008c73b) list_cmail_pane

0x9421,	// (0x00087364) list_cmail_body_pane

0x943b,	// (0x0008737e) list_single_cmail_header_caption_pane

0xe808,	// (0x0008c74b) list_single_cmail_header_detail_pane_ParamLimits

0xe808,	// (0x0008c74b) list_single_cmail_header_detail_pane

0xe83a,	// (0x0008c77d) list_single_cmail_header_caption_pane_t1

0x18a8,	// (0x0007f7eb) list_single_cmail_header_detail_pane_g1_ParamLimits

0x18a8,	// (0x0007f7eb) list_single_cmail_header_detail_pane_g1

0x945b,	// (0x0008739e) list_single_cmail_header_detail_pane_g2_ParamLimits

0x945b,	// (0x0008739e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd85,	// (0x0008dcc8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd85,	// (0x0008dcc8) list_single_cmail_header_detail_pane_g

0x18c0,	// (0x0007f803) list_single_cmail_header_detail_pane_t1_ParamLimits

0x18c0,	// (0x0007f803) list_single_cmail_header_detail_pane_t1

0x1920,	// (0x0007f863) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1920,	// (0x0007f863) list_single_cmail_header_editor_pane_bg

0xe413,	// (0x0008c356) list_cmail_body_pane_g1

0xe85e,	// (0x0008c7a1) list_cmail_body_pane_t1

0xd822,	// (0x0008b765) list_single_cmail_header_editor_pane_bg_g1

0xadce,	// (0x00088d11) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd832,	// (0x0008b775) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd82a,	// (0x0008b76d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda4c,	// (0x0008b98f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd852,	// (0x0008b795) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd842,	// (0x0008b785) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd84a,	// (0x0008b78d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xadae,	// (0x00088cf1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9467,	// (0x000873aa) calenote_gesture_pane_ParamLimits

0x9467,	// (0x000873aa) calenote_gesture_pane

0x9481,	// (0x000873c4) calenote_window_pane_ParamLimits

0x9481,	// (0x000873c4) calenote_window_pane

0xe86c,	// (0x0008c7af) popup_note_window_cp01

0x9499,	// (0x000873dc) calenote_swipe_1_pane_ParamLimits

0x9499,	// (0x000873dc) calenote_swipe_1_pane

0x918d,	// (0x000870d0) calenote_swipe_2_pane_ParamLimits

0x918d,	// (0x000870d0) calenote_swipe_2_pane

0xe636,	// (0x0008c579) calenote_swipe_1_pane_g1_ParamLimits

0xe636,	// (0x0008c579) calenote_swipe_1_pane_g1

0xe643,	// (0x0008c586) calenote_swipe_1_pane_g2_ParamLimits

0xe643,	// (0x0008c586) calenote_swipe_1_pane_g2

0x0001,

0xfca5,	// (0x0008dbe8) calenote_swipe_1_pane_g_ParamLimits

0xfca5,	// (0x0008dbe8) calenote_swipe_1_pane_g

0xe87e,	// (0x0008c7c1) calenote_swipe_1_pane_t1_ParamLimits

0xe87e,	// (0x0008c7c1) calenote_swipe_1_pane_t1

0xe636,	// (0x0008c579) calenote_swipe_2_pane_g1_ParamLimits

0xe636,	// (0x0008c579) calenote_swipe_2_pane_g1

0xe89d,	// (0x0008c7e0) calenote_swipe_2_pane_g2_ParamLimits

0xe89d,	// (0x0008c7e0) calenote_swipe_2_pane_g2

0x0001,

0xfd91,	// (0x0008dcd4) calenote_swipe_2_pane_g_ParamLimits

0xfd91,	// (0x0008dcd4) calenote_swipe_2_pane_g

0xe8a9,	// (0x0008c7ec) calenote_swipe_2_pane_t1_ParamLimits

0xe8a9,	// (0x0008c7ec) calenote_swipe_2_pane_t1

0xa21a,	// (0x0008815d) main_mup_navstr_pane

0x617a,	// (0x000840bd) main_mup3_pane_t7_ParamLimits

0x617a,	// (0x000840bd) main_mup3_pane_t7

0x6bb3,	// (0x00084af6) main_mp4_pane_g6_ParamLimits

0x6bb3,	// (0x00084af6) main_mp4_pane_g6

0x6f3f,	// (0x00084e82) main_image3_pane_t4_ParamLimits

0x6f3f,	// (0x00084e82) main_image3_pane_t4

0x94ac,	// (0x000873ef) popup_navstr_preview_pane_ParamLimits

0x94ac,	// (0x000873ef) popup_navstr_preview_pane

0x94b8,	// (0x000873fb) scroll_navstr_pane_ParamLimits

0x94b8,	// (0x000873fb) scroll_navstr_pane

0xa21a,	// (0x0008815d) bg_popup_preview_window_pane_cp04

0xe8d0,	// (0x0008c813) popup_navstr_preview_pane_t1

0x94c4,	// (0x00087407) scroll_navstr_pane_g1_ParamLimits

0x94c4,	// (0x00087407) scroll_navstr_pane_g1

0x94d1,	// (0x00087414) scroll_navstr_pane_t1_ParamLimits

0x94d1,	// (0x00087414) scroll_navstr_pane_t1

0xe875,	// (0x0008c7b8) bg_button_pane_cp014

0xe875,	// (0x0008c7b8) bg_button_pane_cp030

0x126b,	// (0x0007f1ae) list_double_fisheye_pane_g4_ParamLimits

0x126b,	// (0x0007f1ae) list_double_fisheye_pane_g4

0x1277,	// (0x0007f1ba) list_double_fisheye_pane_g5_ParamLimits

0x1277,	// (0x0007f1ba) list_double_fisheye_pane_g5

0xc191,	// (0x0008a0d4) sp_fs_scroll_pane_cp03

0xe74f,	// (0x0008c692) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe75b,	// (0x0008c69e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc2,	// (0x0008dc05) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9294,	// (0x000871d7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe800,	// (0x0008c743) sp_fs_scroll_pane_cp02

0xaa90,	// (0x000889d3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa90,	// (0x000889d3) popup_sp_fs_calendar_preview_list_single_pane

0xa21a,	// (0x0008815d) main_cam6_pano_pane

0xc183,	// (0x0008a0c6) main_mup3_pane_ParamLimits

0xa21a,	// (0x0008815d) main_phacti_pane

0x8bcb,	// (0x00086b0e) bg_button_pane_cp11

0x8be3,	// (0x00086b26) main_mobtv_info_pane_g2_ParamLimits

0x8be3,	// (0x00086b26) main_mobtv_info_pane_g2

0x0001,

0xfc22,	// (0x0008db65) main_mobtv_info_pane_g_ParamLimits

0xfc22,	// (0x0008db65) main_mobtv_info_pane_g

0x8d95,	// (0x00086cd8) sc_clock_pane_t5_ParamLimits

0x8d95,	// (0x00086cd8) sc_clock_pane_t5

0x8f8d,	// (0x00086ed0) main_radioblah_pane_g1_ParamLimits

0xe579,	// (0x0008c4bc) main_radioblah_pane_t3_ParamLimits

0xe579,	// (0x0008c4bc) main_radioblah_pane_t3

0xe59a,	// (0x0008c4dd) main_radioblah_pane_t4_ParamLimits

0xe59a,	// (0x0008c4dd) main_radioblah_pane_t4

0x8fab,	// (0x00086eee) main_radioblah_text_pane_ParamLimits

0x8fab,	// (0x00086eee) main_radioblah_text_pane

0x8fb8,	// (0x00086efb) main_radioblah_info_pane_g1_ParamLimits

0x9051,	// (0x00086f94) main_radioblah_info_pane_t4_ParamLimits

0x9051,	// (0x00086f94) main_radioblah_info_pane_t4

0xc183,	// (0x0008a0c6) main_sp_fs_calendar_pane

0x94e3,	// (0x00087426) main_phacti_pane_g1

0x94eb,	// (0x0008742e) phacti_note_pane_ParamLimits

0x94eb,	// (0x0008742e) phacti_note_pane

0xe8e7,	// (0x0008c82a) phacti_term_pane_ParamLimits

0xe8e7,	// (0x0008c82a) phacti_term_pane

0xe8fc,	// (0x0008c83f) phacti_note_pane_t1_ParamLimits

0xe8fc,	// (0x0008c83f) phacti_note_pane_t1

0x1937,	// (0x0007f87a) phacti_term_pane_g1

0x193f,	// (0x0007f882) phacti_term_pane_t1_ParamLimits

0x193f,	// (0x0007f882) phacti_term_pane_t1

0xe913,	// (0x0008c856) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe91b,	// (0x0008c85e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9b,	// (0x0008dcde) popup_sp_fs_calendar_preview_list_single_pane_g

0xe923,	// (0x0008c866) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe923,	// (0x0008c866) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe939,	// (0x0008c87c) aid_popup_sp_fs_bg_corner_pane

0xce42,	// (0x0008ad85) popup_sp_fs_calendar_preview_bg_pane_g1

0xa21a,	// (0x0008815d) popup_sp_fs_calendar_preview_bg_pane

0xe941,	// (0x0008c884) popup_sp_fs_calendar_preview_list_pane

0xca0a,	// (0x0008a94d) bg_main_sp_fs_cale_pane_ParamLimits

0xca0a,	// (0x0008a94d) bg_main_sp_fs_cale_pane

0x1972,	// (0x0007f8b5) listscroll_cale_mrui_pane_ParamLimits

0x1972,	// (0x0007f8b5) listscroll_cale_mrui_pane

0x1987,	// (0x0007f8ca) listscroll_sp_fs_schedule_track_pane

0x1990,	// (0x0007f8d3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1990,	// (0x0007f8d3) main_sp_fs_ctrlbar_pane_cp01

0xe949,	// (0x0008c88c) main_sp_fs_ribbon_pane

0x19a3,	// (0x0007f8e6) popup_sp_fs_cale_preview_window

0xee67,	// (0x0008cdaa) list_single_sp_fs_schedule_track_pane_ParamLimits

0xee67,	// (0x0008cdaa) list_single_sp_fs_schedule_track_pane

0xd39d,	// (0x0008b2e0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd39d,	// (0x0008b2e0) bg_sp_fs_highlight_list_pane_cp03

0x954e,	// (0x00087491) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x954e,	// (0x00087491) list_single_sp_fs_schedule_track_pane_g1

0x955a,	// (0x0008749d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x955a,	// (0x0008749d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda0,	// (0x0008dce3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda0,	// (0x0008dce3) list_single_sp_fs_schedule_track_pane_g

0x9566,	// (0x000874a9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9566,	// (0x000874a9) list_single_sp_fs_schedule_track_pane_t1

0x9584,	// (0x000874c7) sp_fs_schedule_track_pane_ParamLimits

0x9584,	// (0x000874c7) sp_fs_schedule_track_pane

0xe951,	// (0x0008c894) sp_fs_schedule_track_pane_g1

0xe959,	// (0x0008c89c) sp_fs_schedule_track_pane_g2

0xe961,	// (0x0008c8a4) sp_fs_schedule_track_pane_g3

0xe969,	// (0x0008c8ac) sp_fs_schedule_track_pane_g4

0xe971,	// (0x0008c8b4) sp_fs_schedule_track_pane_g5

0x0004,

0xfda5,	// (0x0008dce8) sp_fs_schedule_track_pane_g

0xd822,	// (0x0008b765) bg_sp_fs_schedule_viewer_highlight_g1

0xadce,	// (0x00088d11) bg_sp_fs_schedule_viewer_highlight_g2

0xd82a,	// (0x0008b76d) bg_sp_fs_schedule_viewer_highlight_g3

0xd832,	// (0x0008b775) bg_sp_fs_schedule_viewer_highlight_g4

0xda4c,	// (0x0008b98f) bg_sp_fs_schedule_viewer_highlight_g5

0xd842,	// (0x0008b785) bg_sp_fs_schedule_viewer_highlight_g6

0xd84a,	// (0x0008b78d) bg_sp_fs_schedule_viewer_highlight_g7

0xd852,	// (0x0008b795) bg_sp_fs_schedule_viewer_highlight_g8

0xadae,	// (0x00088cf1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb0,	// (0x0008dcf3) bg_sp_fs_schedule_viewer_highlight_g

0xa21a,	// (0x0008815d) bg_main_sp_fs_ribbon_pane

0x9596,	// (0x000874d9) main_sp_fs_ribbon_pane_g1

0xe979,	// (0x0008c8bc) main_sp_fs_ribbon_pane_t1

0x959f,	// (0x000874e2) main_sp_fs_ribbon_pane_t2

0xe988,	// (0x0008c8cb) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc3,	// (0x0008dd06) main_sp_fs_ribbon_pane_t

0xe997,	// (0x0008c8da) main_sp_fs_ribbon_scheduler_pane

0xe99f,	// (0x0008c8e2) bg_main_sp_fs_ribbon_pane_g1

0xe9a8,	// (0x0008c8eb) bg_main_sp_fs_ribbon_pane_g2

0xe9b1,	// (0x0008c8f4) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdca,	// (0x0008dd0d) bg_main_sp_fs_ribbon_pane_g

0xe9b9,	// (0x0008c8fc) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c2,	// (0x0008c905) main_sp_fs_ribbon_scheduler_pane_g2

0xe9f9,	// (0x0008c93c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd1,	// (0x0008dd14) main_sp_fs_ribbon_scheduler_pane_g

0xea02,	// (0x0008c945) list_cale_mrui_pane

0x95ae,	// (0x000874f1) sp_fs_scroll_pane_cp07_ParamLimits

0x95ae,	// (0x000874f1) sp_fs_scroll_pane_cp07

0x95ca,	// (0x0008750d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x95ca,	// (0x0008750d) bg_sp_fs_schedule_viewer_highlight

0xea0f,	// (0x0008c952) list_single_sp_fs_schedule_track_pane_cp01

0xea17,	// (0x0008c95a) list_sp_fs_schedule_track_pane

0xea1f,	// (0x0008c962) sp_fs_scroll_pane_cp06_ParamLimits

0xea1f,	// (0x0008c962) sp_fs_scroll_pane_cp06

0xce42,	// (0x0008ad85) bgmain_sp_fs_calendar_pane_g1

0x19b5,	// (0x0007f8f8) list_single_cale_mrui_pane_ParamLimits

0x19b5,	// (0x0007f8f8) list_single_cale_mrui_pane

0x19db,	// (0x0007f91e) list_single_cale_mrui_row_pane_ParamLimits

0x19db,	// (0x0007f91e) list_single_cale_mrui_row_pane

0x19e8,	// (0x0007f92b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x19e8,	// (0x0007f92b) list_single_cale_mrui_row_pane_g1

0x1a20,	// (0x0007f963) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1a20,	// (0x0007f963) list_single_cale_mrui_row_pane_t1

0x1a32,	// (0x0007f975) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1a32,	// (0x0007f975) list_single_cale_mrui_row_pane_t2

0x1a98,	// (0x0007f9db) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1a98,	// (0x0007f9db) list_single_cale_mrui_row_pane_t3

0x1ac7,	// (0x0007fa0a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1ac7,	// (0x0007fa0a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfddf,	// (0x0008dd22) list_single_cale_mrui_row_pane_t_ParamLimits

0xfddf,	// (0x0008dd22) list_single_cale_mrui_row_pane_t

0x1af8,	// (0x0007fa3b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1af8,	// (0x0007fa3b) list_single_cmail_header_editor_pane_bg_cp01

0x1b1a,	// (0x0007fa5d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1b1a,	// (0x0007fa5d) list_single_cmail_header_editor_pane_bg_cp02

0x95d7,	// (0x0008751a) main_radioblah_text_pane_t1_ParamLimits

0x95d7,	// (0x0008751a) main_radioblah_text_pane_t1

0xea3e,	// (0x0008c981) cam6_indi_pane_cp01

0xea46,	// (0x0008c989) cam6_mode_pane_cp01

0xea4e,	// (0x0008c991) cam6_pano_pane

0xea57,	// (0x0008c99a) cam6_zoom_pane_cp01

0xea61,	// (0x0008c9a4) cam6_pano_image_pane

0xea6a,	// (0x0008c9ad) cam6_pano_pane_g1

0xe413,	// (0x0008c356) cam6_pano_pane_g2

0xea73,	// (0x0008c9b6) cam6_pano_pane_g3

0xea7c,	// (0x0008c9bf) cam6_pano_pane_g4

0xd41c,	// (0x0008b35f) cam6_pano_pane_g5

0xea85,	// (0x0008c9c8) cam6_pano_pane_g6

0xea8d,	// (0x0008c9d0) cam6_pano_pane_g7

0xea95,	// (0x0008c9d8) cam6_pano_pane_g8

0xea9e,	// (0x0008c9e1) cam6_pano_pane_g9

0x0008,

0xfde8,	// (0x0008dd2b) cam6_pano_pane_g

0xa21a,	// (0x0008815d) main_browser_tag_pane

0xe8c8,	// (0x0008c80b) grid_navstr_albumart_pane

0xeaa9,	// (0x0008c9ec) cell_navstr_albumart_pane_ParamLimits

0xeaa9,	// (0x0008c9ec) cell_navstr_albumart_pane

0xeac5,	// (0x0008ca08) cell_navstr_albumart_pane_g1

0xc817,	// (0x0008a75a) cell_navstr_albumart_pane_g2

0xc827,	// (0x0008a76a) cell_navstr_albumart_pane_g3

0xc81f,	// (0x0008a762) cell_navstr_albumart_pane_g4

0x0003,

0xfdfb,	// (0x0008dd3e) cell_navstr_albumart_pane_g

0x95f1,	// (0x00087534) bt_list_pane_ParamLimits

0x95f1,	// (0x00087534) bt_list_pane

0x960a,	// (0x0008754d) bt_list_pane_t1

0x9619,	// (0x0008755c) bt_list_pane_t2

0x0001,

0xfe04,	// (0x0008dd47) bt_list_pane_t

0xa21a,	// (0x0008815d) main_cale_prevew_pane

0x9628,	// (0x0008756b) popup_cale_preview_window_ParamLimits

0x9628,	// (0x0008756b) popup_cale_preview_window

0xc183,	// (0x0008a0c6) bg_popup_preview_window_pane_cp05_ParamLimits

0xc183,	// (0x0008a0c6) bg_popup_preview_window_pane_cp05

0xeacd,	// (0x0008ca10) list_cale_preview_pane_ParamLimits

0xeacd,	// (0x0008ca10) list_cale_preview_pane

0x9645,	// (0x00087588) list_double_cale_preview_pane_ParamLimits

0x9645,	// (0x00087588) list_double_cale_preview_pane

0x9659,	// (0x0008759c) list_single_cale_preview_pane_ParamLimits

0x9659,	// (0x0008759c) list_single_cale_preview_pane

0x9671,	// (0x000875b4) list_single_cale_preview_pane_g1

0x9679,	// (0x000875bc) list_single_cale_preview_pane_t1_ParamLimits

0x9679,	// (0x000875bc) list_single_cale_preview_pane_t1

0x968e,	// (0x000875d1) list_double_cale_preview_pane_g1

0x9696,	// (0x000875d9) list_double_cale_preview_pane_t1_ParamLimits

0x9696,	// (0x000875d9) list_double_cale_preview_pane_t1

0x96ab,	// (0x000875ee) list_double_cale_preview_pane_t2_ParamLimits

0x96ab,	// (0x000875ee) list_double_cale_preview_pane_t2

0x0001,

0xfe09,	// (0x0008dd4c) list_double_cale_preview_pane_t_ParamLimits

0xfe09,	// (0x0008dd4c) list_double_cale_preview_pane_t

0xa21a,	// (0x0008815d) main_ezdial_pane

0xc183,	// (0x0008a0c6) main_sp_fs_email_pane_ParamLimits

0x91f5,	// (0x00087138) cmail_ddmenu_btn01_pane_ParamLimits

0x91f5,	// (0x00087138) cmail_ddmenu_btn01_pane

0x9212,	// (0x00087155) cmail_ddmenu_btn02_pane_ParamLimits

0x9212,	// (0x00087155) cmail_ddmenu_btn02_pane

0x9230,	// (0x00087173) cmail_ddmenu_btn03_pane_ParamLimits

0x9230,	// (0x00087173) cmail_ddmenu_btn03_pane

0x92d1,	// (0x00087214) main_sp_fs_ctrlbar_pane_ParamLimits

0x92eb,	// (0x0008722e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9421,	// (0x00087364) list_cmail_body_pane_ParamLimits

0xe848,	// (0x0008c78b) bg_button_pane_cp12

0xe851,	// (0x0008c794) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe851,	// (0x0008c794) list_single_cmail_header_detail_pane_g3

0x18fc,	// (0x0007f83f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x18fc,	// (0x0007f83f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8c,	// (0x0008dccf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8c,	// (0x0008dccf) list_single_cmail_header_detail_pane_t

0x1954,	// (0x0007f897) phacti_term_pane_t2_ParamLimits

0x1954,	// (0x0007f897) phacti_term_pane_t2

0x0001,

0xfd96,	// (0x0008dcd9) phacti_term_pane_t_ParamLimits

0xfd96,	// (0x0008dcd9) phacti_term_pane_t

0xead9,	// (0x0008ca1c) aid_size_list_single_double

0x96c3,	// (0x00087606) popup_ezdial_listscroll_window

0x96e5,	// (0x00087628) popup_number_entry_window_cp01

0xab71,	// (0x00088ab4) bg_popup_call_pane_cp09

0xeae5,	// (0x0008ca28) ezdial_list_pane

0xeaed,	// (0x0008ca30) scroll_pane_cp23

0xcc21,	// (0x0008ab64) bg_button_pane_cp028_ParamLimits

0xcc21,	// (0x0008ab64) bg_button_pane_cp028

0x96f3,	// (0x00087636) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x96f3,	// (0x00087636) cmail_ddmenu_btn01_pane_g1

0x9705,	// (0x00087648) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9705,	// (0x00087648) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe0e,	// (0x0008dd51) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe0e,	// (0x0008dd51) cmail_ddmenu_btn01_pane_g

0xeaf5,	// (0x0008ca38) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf5,	// (0x0008ca38) cmail_ddmenu_btn01_pane_t1

0xca0a,	// (0x0008a94d) bg_button_pane_cp029_ParamLimits

0xca0a,	// (0x0008a94d) bg_button_pane_cp029

0x9705,	// (0x00087648) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9705,	// (0x00087648) cmail_ddmenu_btn02_pane_g1

0x971d,	// (0x00087660) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x971d,	// (0x00087660) cmail_ddmenu_btn02_pane_t1

0xd39d,	// (0x0008b2e0) bg_button_pane_cp031_ParamLimits

0xd39d,	// (0x0008b2e0) bg_button_pane_cp031

0x9705,	// (0x00087648) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9705,	// (0x00087648) cmail_ddmenu_btn03_pane_g1

0x971d,	// (0x00087660) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x971d,	// (0x00087660) cmail_ddmenu_btn03_pane_t1

0x6de8,	// (0x00084d2b) cell_dialer2_keypad_pane_t1_ParamLimits

0x6e02,	// (0x00084d45) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6e02,	// (0x00084d45) cell_dialer2_keypad_pane_t1_copy1

0x89f8,	// (0x0008693b) ncimui_group_button_pane

0xc183,	// (0x0008a0c6) main_sp_fs_calendar_pane_ParamLimits

0x943b,	// (0x0008737e) list_single_cmail_header_caption_pane_ParamLimits

0x1969,	// (0x0007f8ac) aid_recal_txt_sm_pane

0xa21a,	// (0x0008815d) mian_recal_day_pane

0x19a3,	// (0x0007f8e6) popup_sp_fs_cale_preview_window_ParamLimits

0xeb0a,	// (0x0008ca4d) list_recal_day_pane

0x1b54,	// (0x0007fa97) list_single_recal_day_pane_ParamLimits

0x1b54,	// (0x0007fa97) list_single_recal_day_pane

0xeb31,	// (0x0008ca74) list_single_recal_day_pane_g1_ParamLimits

0xeb31,	// (0x0008ca74) list_single_recal_day_pane_g1

0x1b66,	// (0x0007faa9) list_single_recal_day_pane_g2_ParamLimits

0x1b66,	// (0x0007faa9) list_single_recal_day_pane_g2

0x1b72,	// (0x0007fab5) list_single_recal_day_pane_g3_ParamLimits

0x1b72,	// (0x0007fab5) list_single_recal_day_pane_g3

0x1b7e,	// (0x0007fac1) list_single_recal_day_pane_g4_ParamLimits

0x1b7e,	// (0x0007fac1) list_single_recal_day_pane_g4

0x1b8c,	// (0x0007facf) list_single_recal_day_pane_g5_ParamLimits

0x1b8c,	// (0x0007facf) list_single_recal_day_pane_g5

0x1ba2,	// (0x0007fae5) list_single_recal_day_pane_g6_ParamLimits

0x1ba2,	// (0x0007fae5) list_single_recal_day_pane_g6

0x0004,

0xfe1d,	// (0x0008dd60) list_single_recal_day_pane_g_ParamLimits

0xfe1d,	// (0x0008dd60) list_single_recal_day_pane_g

0x1bb6,	// (0x0007faf9) list_single_recal_day_pane_t1

0x1bc8,	// (0x0007fb0b) list_single_recal_day_pane_t2

0x0001,

0xfe28,	// (0x0008dd6b) list_single_recal_day_pane_t

0x9741,	// (0x00087684) ncimui_query_button_pane_ParamLimits

0x9741,	// (0x00087684) ncimui_query_button_pane

0x9751,	// (0x00087694) ncimui_query_button_pane_t1_ParamLimits

0x9751,	// (0x00087694) ncimui_query_button_pane_t1

0xeb3d,	// (0x0008ca80) ncimui_query_button_pane_t2_ParamLimits

0xeb3d,	// (0x0008ca80) ncimui_query_button_pane_t2

0x0001,

0xfe2d,	// (0x0008dd70) ncimui_query_button_pane_t_ParamLimits

0xfe2d,	// (0x0008dd70) ncimui_query_button_pane_t

0x9764,	// (0x000876a7) query_button_pane_ParamLimits

0x9764,	// (0x000876a7) query_button_pane

0xa21a,	// (0x0008815d) bg_button_pane_cp0028

0xeb50,	// (0x0008ca93) query_button_pane_t1

0x50c2,	// (0x00083005) main_tport_pane_ParamLimits

0x931e,	// (0x00087261) bg_popup_window_pane_cp01_ParamLimits

0x931e,	// (0x00087261) bg_popup_window_pane_cp01

0x932c,	// (0x0008726f) heading_pane_cp08_ParamLimits

0x932c,	// (0x0008726f) heading_pane_cp08

0x933a,	// (0x0008727d) heading_pane_cp07_ParamLimits

0x933a,	// (0x0008727d) heading_pane_cp07

0x93aa,	// (0x000872ed) cell_tport_appsw_pane_g2

0x0002,

0xfd79,	// (0x0008dcbc) cell_tport_appsw_pane_g

0x0ca5,	// (0x0007ebe8) input_candi_list_open_g1

0xafb8,	// (0x00088efb) list_cale_time_pane_g6_ParamLimits

0xafb8,	// (0x00088efb) list_cale_time_pane_g6

0x5b6c,	// (0x00083aaf) aid_size_touch_calib_1_ParamLimits

0x5b6c,	// (0x00083aaf) aid_size_touch_calib_1

0x5b78,	// (0x00083abb) aid_size_touch_calib_2_ParamLimits

0x5b78,	// (0x00083abb) aid_size_touch_calib_2

0x5b86,	// (0x00083ac9) aid_size_touch_calib_3_ParamLimits

0x5b86,	// (0x00083ac9) aid_size_touch_calib_3

0x5b96,	// (0x00083ad9) aid_size_touch_calib_4_ParamLimits

0x5b96,	// (0x00083ad9) aid_size_touch_calib_4

0x5ba4,	// (0x00083ae7) main_touch_calib_button_group_pane_ParamLimits

0x5ba4,	// (0x00083ae7) main_touch_calib_button_group_pane

0x5bb2,	// (0x00083af5) main_touch_calib_pane_g1_ParamLimits

0x5bbe,	// (0x00083b01) main_touch_calib_pane_g2_ParamLimits

0x5bca,	// (0x00083b0d) main_touch_calib_pane_g3_ParamLimits

0x5bd6,	// (0x00083b19) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0008d679) main_touch_calib_pane_g_ParamLimits

0x5be2,	// (0x00083b25) main_touch_calib_pane_t1_ParamLimits

0x5bf9,	// (0x00083b3c) main_touch_calib_pane_t2_ParamLimits

0x5c12,	// (0x00083b55) main_touch_calib_pane_t3_ParamLimits

0x5c28,	// (0x00083b6b) main_touch_calib_pane_t4_ParamLimits

0x5c3e,	// (0x00083b81) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0008d682) main_touch_calib_pane_t_ParamLimits

0xd171,	// (0x0008b0b4) list_single_fp_cale_pane_g3_ParamLimits

0xd171,	// (0x0008b0b4) list_single_fp_cale_pane_g3

0xc183,	// (0x0008a0c6) bg_button_pane_cp012_ParamLimits

0xc183,	// (0x0008a0c6) bg_vkb2_func_pane_cp03_ParamLimits

0x7c9d,	// (0x00085be0) cell_vitu2_function_top_pane_g1_ParamLimits

0xc183,	// (0x0008a0c6) bg_vkb2_func_pane_cp04_ParamLimits

0x897e,	// (0x000868c1) main_ncimui_button_group_pane_ParamLimits

0x897e,	// (0x000868c1) main_ncimui_button_group_pane

0x89e6,	// (0x00086929) main_ncimui_pane_t3_ParamLimits

0x89e6,	// (0x00086929) main_ncimui_pane_t3

0xe8de,	// (0x0008c821) phacti_button_group_pane

0xead9,	// (0x0008ca1c) aid_size_list_single_double_ParamLimits

0x96c3,	// (0x00087606) popup_ezdial_listscroll_window_ParamLimits

0x96e5,	// (0x00087628) popup_number_entry_window_cp01_ParamLimits

0x9771,	// (0x000876b4) phacti_button_pane_ParamLimits

0x9771,	// (0x000876b4) phacti_button_pane

0xa21a,	// (0x0008815d) bg_button_pane_cp14

0xeb5e,	// (0x0008caa1) phacti_button_pane_t1

0x9782,	// (0x000876c5) main_touch_calib_button_pane_ParamLimits

0x9782,	// (0x000876c5) main_touch_calib_button_pane

0xa98c,	// (0x000888cf) bg_button_pane_cp18_ParamLimits

0xa98c,	// (0x000888cf) bg_button_pane_cp18

0xeb6c,	// (0x0008caaf) main_touch_calib_button_pane_t1_ParamLimits

0xeb6c,	// (0x0008caaf) main_touch_calib_button_pane_t1

0xeb82,	// (0x0008cac5) main_touch_calib_button_pane_t2_ParamLimits

0xeb82,	// (0x0008cac5) main_touch_calib_button_pane_t2

0x0001,

0xfe32,	// (0x0008dd75) main_touch_calib_button_pane_t_ParamLimits

0xfe32,	// (0x0008dd75) main_touch_calib_button_pane_t

0xa21a,	// (0x0008815d) cell_ncimui_button_pane

0xa21a,	// (0x0008815d) bg_button_pane_cp032

0xeba0,	// (0x0008cae3) cell_ncimui_button_pane_t1

0x6e5e,	// (0x00084da1) image3_infobar_pane_ParamLimits

0x6e5e,	// (0x00084da1) image3_infobar_pane

0x8db7,	// (0x00086cfa) fs_bigclock_status_pane_ParamLimits

0x8db7,	// (0x00086cfa) fs_bigclock_status_pane

0x8dc4,	// (0x00086d07) main_fs_bigclock_clock_pane_ParamLimits

0x8dc4,	// (0x00086d07) main_fs_bigclock_clock_pane

0x8de0,	// (0x00086d23) main_fs_bigclock_indi_pane_ParamLimits

0x8de0,	// (0x00086d23) main_fs_bigclock_indi_pane

0x8e0e,	// (0x00086d51) main_fs_bigclock_swipe_pane_ParamLimits

0x8e0e,	// (0x00086d51) main_fs_bigclock_swipe_pane

0xa21a,	// (0x0008815d) main_fs_clock_dumped_data

0x8e48,	// (0x00086d8b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8e48,	// (0x00086d8b) list_single_fs_bigclock_indicator_pane_g1

0x8e67,	// (0x00086daa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8e67,	// (0x00086daa) list_single_fs_bigclock_indicator_pane_g2

0x8e81,	// (0x00086dc4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8e81,	// (0x00086dc4) list_single_fs_bigclock_indicator_pane_g3

0x8e9d,	// (0x00086de0) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8e9d,	// (0x00086de0) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc56,	// (0x0008db99) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc56,	// (0x0008db99) list_single_fs_bigclock_indicator_pane_g

0x8ecc,	// (0x00086e0f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8ecc,	// (0x00086e0f) list_single_fs_bigclock_indicator_pane_t1

0x8ef4,	// (0x00086e37) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8ef4,	// (0x00086e37) list_single_fs_bigclock_indicator_pane_t2

0x8f1c,	// (0x00086e5f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8f1c,	// (0x00086e5f) list_single_fs_bigclock_indicator_pane_t3

0x8f44,	// (0x00086e87) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8f44,	// (0x00086e87) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc61,	// (0x0008dba4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc61,	// (0x0008dba4) list_single_fs_bigclock_indicator_pane_t

0xebae,	// (0x0008caf1) image3_infobar_fav_pane_ParamLimits

0xebae,	// (0x0008caf1) image3_infobar_fav_pane

0xebbe,	// (0x0008cb01) image3_infobar_loc_pane_ParamLimits

0xebbe,	// (0x0008cb01) image3_infobar_loc_pane

0xebd4,	// (0x0008cb17) image3_infobar_time_pane_ParamLimits

0xebd4,	// (0x0008cb17) image3_infobar_time_pane

0xce42,	// (0x0008ad85) image3_infobar_time_pane_g1

0xebe4,	// (0x0008cb27) image3_infobar_time_pane_t1

0xce42,	// (0x0008ad85) image3_infobar_loc_pane_g1

0xebf2,	// (0x0008cb35) image3_infobar_loc_pane_g2

0x0001,

0xfe37,	// (0x0008dd7a) image3_infobar_loc_pane_g

0xebfa,	// (0x0008cb3d) image3_infobar_loc_pane_t1

0xce42,	// (0x0008ad85) image3_infobar_fav_pane_g1

0xec08,	// (0x0008cb4b) image3_infobar_fav_pane_g2

0x0001,

0xfe3c,	// (0x0008dd7f) image3_infobar_fav_pane_g

0xec10,	// (0x0008cb53) fs_bigclock_status_battery_pane

0xec19,	// (0x0008cb5c) fs_bigclock_status_signal_pane

0xec22,	// (0x0008cb65) fs_bigclock_status_title_pane

0xec2b,	// (0x0008cb6e) fs_bigclock_status_signal_pane_g1

0xec34,	// (0x0008cb77) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe41,	// (0x0008dd84) fs_bigclock_status_signal_pane_g

0xec3c,	// (0x0008cb7f) fs_bigclock_status_battery_pane_g1

0xec45,	// (0x0008cb88) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe46,	// (0x0008dd89) fs_bigclock_status_battery_pane_g

0xec4d,	// (0x0008cb90) fs_bigclock_status_title_pane_t1

0x9792,	// (0x000876d5) main_fs_bigclock_clock_pane_g1

0x9792,	// (0x000876d5) main_fs_bigclock_clock_pane_g2

0x97a1,	// (0x000876e4) main_fs_bigclock_clock_pane_g3

0x97a1,	// (0x000876e4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4b,	// (0x0008dd8e) main_fs_bigclock_clock_pane_g

0x97b1,	// (0x000876f4) main_fs_bigclock_clock_pane_t1

0x97c6,	// (0x00087709) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe54,	// (0x0008dd97) main_fs_bigclock_clock_pane_t

0xec5b,	// (0x0008cb9e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec5b,	// (0x0008cb9e) list_single_fs_bigclock_indicator_pane

0xec6c,	// (0x0008cbaf) list_single_fs_bigclock_pane_ParamLimits

0xec6c,	// (0x0008cbaf) list_single_fs_bigclock_pane

0xec92,	// (0x0008cbd5) main_fs_bigclock_indicator_pane_t1

0xeca1,	// (0x0008cbe4) list_single_fs_bigclock_pane_g1

0xeca9,	// (0x0008cbec) list_single_fs_bigclock_pane_t1

0xce42,	// (0x0008ad85) main_fs_bigclock_swipe_pane_g1

0xecec,	// (0x0008cc2f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe65,	// (0x0008dda8) main_fs_bigclock_swipe_pane_g

0xecf4,	// (0x0008cc37) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf4,	// (0x0008cc37) main_fs_bigclock_swipe_pane_t1

0x40f4,	// (0x00082037) call_type_pane_ParamLimits

0xa21a,	// (0x0008815d) main_btmg_pane

0x1a14,	// (0x0007f957) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1a14,	// (0x0007f957) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdd8,	// (0x0008dd1b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdd8,	// (0x0008dd1b) list_single_cale_mrui_row_pane_g

0x1b42,	// (0x0007fa85) list_recal_vselct_arw_lo_pane

0xeb29,	// (0x0008ca6c) list_recal_vselct_arw_up_pane

0x1b4a,	// (0x0007fa8d) list_recal_vselct_pane

0x981d,	// (0x00087760) btmg_button_pane

0x9829,	// (0x0008776c) main_btmg_pane_g1

0xa21a,	// (0x0008815d) bg_button_pane_cp044

0xed11,	// (0x0008cc54) btmg_button_pane_t1

0xc9f6,	// (0x0008a939) aid_listscroll_gen

0xc183,	// (0x0008a0c6) main_cntbar_detail_pane

0xe7f8,	// (0x0008c73b) list_cmail_folder_pane

0xc191,	// (0x0008a0d4) sp_fs_scroll_pane_cp03_ParamLimits

0x1bda,	// (0x0007fb1d) list_single_fs_dyc_pane_cp01_ParamLimits

0x1bda,	// (0x0007fb1d) list_single_fs_dyc_pane_cp01

0xed1f,	// (0x0008cc62) aid_size_cmail_indent

0x1bf4,	// (0x0007fb37) list_single_dyc_row_pane_cp01

0x9851,	// (0x00087794) cntbar_detail_list_pane_ParamLimits

0x9851,	// (0x00087794) cntbar_detail_list_pane

0x9891,	// (0x000877d4) main_cntbar_detail_cont_pane_ParamLimits

0x9891,	// (0x000877d4) main_cntbar_detail_cont_pane

0x40e8,	// (0x0008202b) scroll_pane_cp032_ParamLimits

0x40e8,	// (0x0008202b) scroll_pane_cp032

0x989d,	// (0x000877e0) cntbar_detail_list_event_pane_ParamLimits

0x989d,	// (0x000877e0) cntbar_detail_list_event_pane

0x985f,	// (0x000877a2) cntbar_detail_list_shct_pane

0xae1c,	// (0x00088d5f) aid_list_gen

0xed28,	// (0x0008cc6b) aid_scroll

0xed31,	// (0x0008cc74) aid_size_touch_scroll_bar

0x112b,	// (0x0007f06e) aid_list_double

0x98ad,	// (0x000877f0) aid_list_single

0x8240,	// (0x00086183) aid_list_single_lg

0x1bfd,	// (0x0007fb40) aid_list_z_g_a_sm

0x98b6,	// (0x000877f9) aid_list_z_g_d

0x1c05,	// (0x0007fb48) aid_txt_z_prm

0x1c13,	// (0x0007fb56) aid_txt_z_prm_cp01

0x1c21,	// (0x0007fb64) aid_txt_z_sec

0x98be,	// (0x00087801) main_cntbar_detail_cont_pane_g1_ParamLimits

0x98be,	// (0x00087801) main_cntbar_detail_cont_pane_g1

0x98cb,	// (0x0008780e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x98cb,	// (0x0008780e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6a,	// (0x0008ddad) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6a,	// (0x0008ddad) main_cntbar_detail_cont_pane_g

0xed3a,	// (0x0008cc7d) main_cntbar_detail_cont_pane_t1

0xed48,	// (0x0008cc8b) main_cntbar_detail_cont_pane_t2

0xed56,	// (0x0008cc99) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe6f,	// (0x0008ddb2) main_cntbar_detail_cont_pane_t

0x98d7,	// (0x0008781a) cell_cntbar_detail_list_shct_pane_ParamLimits

0x98d7,	// (0x0008781a) cell_cntbar_detail_list_shct_pane

0xed64,	// (0x0008cca7) cntbar_detail_list_shct_pane_g1

0xed6d,	// (0x0008ccb0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe76,	// (0x0008ddb9) cntbar_detail_list_shct_pane_g

0x98eb,	// (0x0008782e) cntbar_detail_list_event_pane_g1_ParamLimits

0x98eb,	// (0x0008782e) cntbar_detail_list_event_pane_g1

0x98f7,	// (0x0008783a) cntbar_detail_list_event_pane_g2_ParamLimits

0x98f7,	// (0x0008783a) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7b,	// (0x0008ddbe) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7b,	// (0x0008ddbe) cntbar_detail_list_event_pane_g

0x9965,	// (0x000878a8) cntbar_detail_list_event_pane_t1_ParamLimits

0x9965,	// (0x000878a8) cntbar_detail_list_event_pane_t1

0x997a,	// (0x000878bd) cntbar_detail_list_event_pane_t2_ParamLimits

0x997a,	// (0x000878bd) cntbar_detail_list_event_pane_t2

0x0002,

0xfe88,	// (0x0008ddcb) cntbar_detail_list_event_pane_t_ParamLimits

0xfe88,	// (0x0008ddcb) cntbar_detail_list_event_pane_t

0xce42,	// (0x0008ad85) cell_cntbar_detail_list_shct_pane_g1

0xb59f,	// (0x000894e2) navi_pane_mv_g3

0xc183,	// (0x0008a0c6) main_cntbar_detail_pane_ParamLimits

0xa21a,	// (0x0008815d) main_notif_wgt_pane

0x6ae0,	// (0x00084a23) aid_tch_main_mp4_pane_g4

0x6d49,	// (0x00084c8c) popup_slider_window_cp02

0x1b38,	// (0x0007fa7b) list_recal_day_event_pane

0x9831,	// (0x00087774) cntbar_detail_btn_pane_ParamLimits

0x9831,	// (0x00087774) cntbar_detail_btn_pane

0x9841,	// (0x00087784) cntbar_detail_btn_pane_cp01_ParamLimits

0x9841,	// (0x00087784) cntbar_detail_btn_pane_cp01

0x985f,	// (0x000877a2) cntbar_detail_list_shct_pane_ParamLimits

0x986b,	// (0x000877ae) cntbar_detail_pane_g1_ParamLimits

0x986b,	// (0x000877ae) cntbar_detail_pane_g1

0x987b,	// (0x000877be) cntbar_detail_pane_t1_ParamLimits

0x987b,	// (0x000877be) cntbar_detail_pane_t1

0x9903,	// (0x00087846) cntbar_detail_list_event_pane_g3_ParamLimits

0x9903,	// (0x00087846) cntbar_detail_list_event_pane_g3

0x991b,	// (0x0008785e) cntbar_detail_list_event_pane_g4_ParamLimits

0x991b,	// (0x0008785e) cntbar_detail_list_event_pane_g4

0x9933,	// (0x00087876) cntbar_detail_list_event_pane_g5_ParamLimits

0x9933,	// (0x00087876) cntbar_detail_list_event_pane_g5

0x994b,	// (0x0008788e) cntbar_detail_list_event_pane_g6_ParamLimits

0x994b,	// (0x0008788e) cntbar_detail_list_event_pane_g6

0x998f,	// (0x000878d2) cntbar_detail_list_event_pane_t3_ParamLimits

0x998f,	// (0x000878d2) cntbar_detail_list_event_pane_t3

0x99a1,	// (0x000878e4) popup_notif_wgt_window_ParamLimits

0x99a1,	// (0x000878e4) popup_notif_wgt_window

0x99b1,	// (0x000878f4) popup_submenu_window_cp01_ParamLimits

0x99b1,	// (0x000878f4) popup_submenu_window_cp01

0xab71,	// (0x00088ab4) bg_popup_window_pane_cp10

0xed76,	// (0x0008ccb9) listscroll_notif_wgt_pane

0xed88,	// (0x0008cccb) list_notif_wgt_window

0xed91,	// (0x0008ccd4) scroll_pane_cp033

0x99c1,	// (0x00087904) list_notif_wgt_row_pane_ParamLimits

0x99c1,	// (0x00087904) list_notif_wgt_row_pane

0xed9a,	// (0x0008ccdd) aid_size_list_notif_wgt_del

0xeda7,	// (0x0008ccea) list_notif_wgt_row_pane_g1

0xedb3,	// (0x0008ccf6) list_notif_wgt_row_pane_g2

0xedc2,	// (0x0008cd05) list_notif_wgt_row_pane_g3

0x0002,

0xfe8f,	// (0x0008ddd2) list_notif_wgt_row_pane_g

0xedcf,	// (0x0008cd12) list_notif_wgt_row_pane_t1

0xede5,	// (0x0008cd28) list_notif_wgt_row_pane_t2

0xedf7,	// (0x0008cd3a) list_notif_wgt_row_pane_t3

0x0002,

0xfe96,	// (0x0008ddd9) list_notif_wgt_row_pane_t

0xda54,	// (0x0008b997) list_recal_day_event_pane_g1

0xee09,	// (0x0008cd4c) list_recal_day_event_pane_t1

0xa21a,	// (0x0008815d) bg_button_pane_cp045

0x99d5,	// (0x00087918) cntbar_detail_btn_pane_t1

0xca0a,	// (0x0008a94d) main_callh_pane_ParamLimits

0xca0a,	// (0x0008a94d) main_callh_pane

0xa21a,	// (0x0008815d) main_coverflow0_pane

0xa21a,	// (0x0008815d) main_wgtman_pane

0x8e26,	// (0x00086d69) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8e26,	// (0x00086d69) main_fs_bigclock_unlock_btn_pane

0x93a2,	// (0x000872e5) bg_button_pane_cp16

0x93b2,	// (0x000872f5) cell_tport_appsw_pane_g3

0x99e3,	// (0x00087926) cf0_flow_pane_ParamLimits

0x99e3,	// (0x00087926) cf0_flow_pane

0xee18,	// (0x0008cd5b) listscroll_cf0_pane

0xee23,	// (0x0008cd66) main_cf0_pane_g1

0x99f2,	// (0x00087935) main_cf0_pane_t1_ParamLimits

0x99f2,	// (0x00087935) main_cf0_pane_t1

0x9a06,	// (0x00087949) main_cf0_pane_t2_ParamLimits

0x9a06,	// (0x00087949) main_cf0_pane_t2

0x0001,

0xfea2,	// (0x0008dde5) main_cf0_pane_t_ParamLimits

0xfea2,	// (0x0008dde5) main_cf0_pane_t

0xee35,	// (0x0008cd78) scroll_pane_cp11

0x9a1a,	// (0x0008795d) cf0_flow_pane_g1

0x9a22,	// (0x00087965) cf0_flow_pane_g2

0x0001,

0xfea7,	// (0x0008ddea) cf0_flow_pane_g

0x9a2a,	// (0x0008796d) cf0_flow_pane_t1

0xa21a,	// (0x0008815d) main_call6_pane

0xa21a,	// (0x0008815d) main_calllock_pane

0x9a38,	// (0x0008797b) call6_btn_grp_pane_ParamLimits

0x9a38,	// (0x0008797b) call6_btn_grp_pane

0x9a45,	// (0x00087988) call6_pane_g1_ParamLimits

0x9a45,	// (0x00087988) call6_pane_g1

0x9a55,	// (0x00087998) popup_call6_1st_window_ParamLimits

0x9a55,	// (0x00087998) popup_call6_1st_window

0x9a65,	// (0x000879a8) popup_call6_2nd_window_ParamLimits

0x9a65,	// (0x000879a8) popup_call6_2nd_window

0x9a75,	// (0x000879b8) cell_call6_btn_pane_ParamLimits

0x9a75,	// (0x000879b8) cell_call6_btn_pane

0xab71,	// (0x00088ab4) bg_popup_call2_in_pane_cp03

0xee40,	// (0x0008cd83) popup_call6_1st_window_g1

0xee48,	// (0x0008cd8b) popup_call6_1st_window_g2

0xee50,	// (0x0008cd93) popup_call6_1st_window_g3

0x0002,

0xfeac,	// (0x0008ddef) popup_call6_1st_window_g

0xee58,	// (0x0008cd9b) popup_call6_1st_window_t1

0xee7e,	// (0x0008cdc1) popup_call6_1st_window_t2

0xee8e,	// (0x0008cdd1) popup_call6_1st_window_t3

0x0002,

0xfeb3,	// (0x0008ddf6) popup_call6_1st_window_t

0xab71,	// (0x00088ab4) bg_popup_call2_in_pane_cp04

0xee40,	// (0x0008cd83) popup_call6_2nd_window_g1

0xee48,	// (0x0008cd8b) popup_call6_2nd_window_g2

0xee50,	// (0x0008cd93) popup_call6_2nd_window_g3

0x0002,

0xfeac,	// (0x0008ddef) popup_call6_2nd_window_g

0xee58,	// (0x0008cd9b) popup_call6_2nd_window_t1

0xa21a,	// (0x0008815d) bg_button_pane_cp15

0xee9e,	// (0x0008cde1) cell_call6_btn_pane_g1

0x9a86,	// (0x000879c9) cell_call6_btn_pane_t1

0x9a95,	// (0x000879d8) listscroll_wgtman_pane_ParamLimits

0x9a95,	// (0x000879d8) listscroll_wgtman_pane

0x9ab1,	// (0x000879f4) wgtman_btn_pane_ParamLimits

0x9ab1,	// (0x000879f4) wgtman_btn_pane

0xb397,	// (0x000892da) aid_scroll_copy1

0xeea7,	// (0x0008cdea) list_wgtman_pane

0x9ae6,	// (0x00087a29) wgtman_btn_pane_g1_ParamLimits

0x9ae6,	// (0x00087a29) wgtman_btn_pane_g1

0x9b0e,	// (0x00087a51) wgtman_btn_pane_t1_ParamLimits

0x9b0e,	// (0x00087a51) wgtman_btn_pane_t1

0xeeb1,	// (0x0008cdf4) wgtman_btn_pane_t2_ParamLimits

0xeeb1,	// (0x0008cdf4) wgtman_btn_pane_t2

0x0001,

0xfeba,	// (0x0008ddfd) wgtman_btn_pane_t_ParamLimits

0xfeba,	// (0x0008ddfd) wgtman_btn_pane_t

0x9b45,	// (0x00087a88) listrow_wgtman_pane_ParamLimits

0x9b45,	// (0x00087a88) listrow_wgtman_pane

0x9b5a,	// (0x00087a9d) listrow_wgtman_pane_g1

0x9b67,	// (0x00087aaa) listrow_wgtman_pane_g2

0x0001,

0xfebf,	// (0x0008de02) listrow_wgtman_pane_g

0x1c2f,	// (0x0007fb72) listrow_wgtman_pane_t1

0x1c47,	// (0x0007fb8a) listrow_wgtman_pane_t2

0x0001,

0xfec4,	// (0x0008de07) listrow_wgtman_pane_t

0x1c6d,	// (0x0007fbb0) wait_bar_pane_cp09

0xeec8,	// (0x0008ce0b) main_calllock_btn_pane

0xeed2,	// (0x0008ce15) main_calllock_pane_g1

0xa21a,	// (0x0008815d) bg_button_pane_cp17

0xee9e,	// (0x0008cde1) main_calllock_btn_pane_g1

0xeede,	// (0x0008ce21) main_calllock_btn_pane_t1

0xa21a,	// (0x0008815d) main_dialer3_pane

0xa21a,	// (0x0008815d) main_fmrd2_pane

0xce42,	// (0x0008ad85) main_fs_bigclock_unlock_btn_pane_g1

0x9b8d,	// (0x00087ad0) main_fs_bigclock_unlock_btn_pane_t1

0x9b9b,	// (0x00087ade) area_fmrd2_info_pane_ParamLimits

0x9b9b,	// (0x00087ade) area_fmrd2_info_pane

0x9ba7,	// (0x00087aea) area_fmrd2_visual_pane_ParamLimits

0x9ba7,	// (0x00087aea) area_fmrd2_visual_pane

0x9bb5,	// (0x00087af8) fmrd2_indi_pane_ParamLimits

0x9bb5,	// (0x00087af8) fmrd2_indi_pane

0x9bc2,	// (0x00087b05) area_fmrd2_visual_pane_g1

0x9bca,	// (0x00087b0d) area_fmrd2_visual_pane_t1

0x9bda,	// (0x00087b1d) area_fmrd2_visual_pane_t2

0x9bea,	// (0x00087b2d) area_fmrd2_visual_pane_t3

0x0002,

0xfece,	// (0x0008de11) area_fmrd2_visual_pane_t

0x9bfa,	// (0x00087b3d) area_fmrd2_info_pane_g1

0x9c02,	// (0x00087b45) area_fmrd2_info_pane_t1

0x9c12,	// (0x00087b55) area_fmrd2_info_pane_t2

0x9c22,	// (0x00087b65) area_fmrd2_info_pane_t3

0x9c32,	// (0x00087b75) area_fmrd2_info_pane_t4

0x0003,

0xfed5,	// (0x0008de18) area_fmrd2_info_pane_t

0x9c42,	// (0x00087b85) fmrd2_indi_pane_t1

0x9c52,	// (0x00087b95) fmrd2_indi_pane_t2

0x9c62,	// (0x00087ba5) fmrd2_indi_pane_t3

0x0002,

0xfede,	// (0x0008de21) fmrd2_indi_pane_t

0x8eae,	// (0x00086df1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8eae,	// (0x00086df1) list_single_fs_bigclock_indicator_pane_g5

0x8f63,	// (0x00086ea6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x8f63,	// (0x00086ea6) list_single_fs_bigclock_indicator_pane_t5

0x9501,	// (0x00087444) aid_cell_bcale_month_pane_ParamLimits

0x9501,	// (0x00087444) aid_cell_bcale_month_pane

0x951f,	// (0x00087462) bcale_month_pane_ParamLimits

0x951f,	// (0x00087462) bcale_month_pane

0x953d,	// (0x00087480) bcale_preview_pane_ParamLimits

0x953d,	// (0x00087480) bcale_preview_pane

0xeca9,	// (0x0008cbec) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc8,	// (0x0008cc0b) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc8,	// (0x0008cc0b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe60,	// (0x0008dda3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x0008dda3) list_single_fs_bigclock_pane_t

0x9b85,	// (0x00087ac8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfec9,	// (0x0008de0c) main_fs_bigclock_unlock_btn_pane_g

0x9c72,	// (0x00087bb5) aid_dia3_key_size_ParamLimits

0x9c72,	// (0x00087bb5) aid_dia3_key_size

0x9c7e,	// (0x00087bc1) aid_dia3_listrow_size_ParamLimits

0x9c7e,	// (0x00087bc1) aid_dia3_listrow_size

0x9c8e,	// (0x00087bd1) dia3_keypad_fun_pane_ParamLimits

0x9c8e,	// (0x00087bd1) dia3_keypad_fun_pane

0x9c9e,	// (0x00087be1) dia3_keypad_num_pane_ParamLimits

0x9c9e,	// (0x00087be1) dia3_keypad_num_pane

0x9cae,	// (0x00087bf1) dia3_listscroll_pane_ParamLimits

0x9cae,	// (0x00087bf1) dia3_listscroll_pane

0x9cbc,	// (0x00087bff) dia3_numentry_pane_ParamLimits

0x9cbc,	// (0x00087bff) dia3_numentry_pane

0xeeed,	// (0x0008ce30) dia3_list_pane

0x9cca,	// (0x00087c0d) scroll_pane_cp12

0xa21a,	// (0x0008815d) bg_dia3_numentry_pane

0x9cd5,	// (0x00087c18) dia3_numentry_pane_t1

0x9ce4,	// (0x00087c27) cell_dia3_key_num_pane

0x9cec,	// (0x00087c2f) cell_dia3_key0_fun_pane_ParamLimits

0x9cec,	// (0x00087c2f) cell_dia3_key0_fun_pane

0x9cf9,	// (0x00087c3c) cell_dia3_key1_fun_pane_ParamLimits

0x9cf9,	// (0x00087c3c) cell_dia3_key1_fun_pane

0x9d06,	// (0x00087c49) dia3_listrow_pane

0xe2cf,	// (0x0008c212) bg_dia3_numentry_pane_g1

0xa21a,	// (0x0008815d) bg_button_pane_cp21

0x9d13,	// (0x00087c56) cell_dia3_key_num_pane_t1

0x9d21,	// (0x00087c64) cell_dia3_key_num_pane_t2

0x9d30,	// (0x00087c73) cell_dia3_key_num_pane_t3

0x9d3f,	// (0x00087c82) cell_dia3_key_num_pane_t4

0x0003,

0xfee5,	// (0x0008de28) cell_dia3_key_num_pane_t

0xa21a,	// (0x0008815d) bg_button_pane_cp19

0x9d4e,	// (0x00087c91) cell_dia3_key0_fun_pane_g1

0xa21a,	// (0x0008815d) bg_button_pane_cp20

0x9d56,	// (0x00087c99) cell_dia3_key1_fun_pane_g1

0x9d5e,	// (0x00087ca1) area_left_week_number_pane

0x9d71,	// (0x00087cb4) area_top_day_name_pane

0x9d7f,	// (0x00087cc2) frame_month_view_pane

0xeef8,	// (0x0008ce3b) grid_month_view_pane

0x9d94,	// (0x00087cd7) cell_top_day_name_pane_ParamLimits

0x9d94,	// (0x00087cd7) cell_top_day_name_pane

0x9db0,	// (0x00087cf3) cell_area_left_week_number_pane_ParamLimits

0x9db0,	// (0x00087cf3) cell_area_left_week_number_pane

0x9dd1,	// (0x00087d14) cell_month_view_pane_ParamLimits

0x9dd1,	// (0x00087d14) cell_month_view_pane

0xef06,	// (0x0008ce49) frm_month_g1

0x9dfd,	// (0x00087d40) frm_month_g2

0x9e0e,	// (0x00087d51) frm_month_g3

0x9e1f,	// (0x00087d62) frm_month_g4

0x9e30,	// (0x00087d73) frm_month_g5

0x9e41,	// (0x00087d84) frm_month_g6

0x9e54,	// (0x00087d97) frm_month_g7

0xef13,	// (0x0008ce56) frm_month_g8

0x9e67,	// (0x00087daa) frm_month_g9

0x9e74,	// (0x00087db7) frm_month_g10

0x9e81,	// (0x00087dc4) frm_month_g11

0x9e8e,	// (0x00087dd1) frm_month_g12

0x9e9b,	// (0x00087dde) frm_month_g13

0x9eaa,	// (0x00087ded) frm_month_g14

0x9eb9,	// (0x00087dfc) frm_month_g15

0x9ec8,	// (0x00087e0b) frm_month_g16

0x000f,

0xfeee,	// (0x0008de31) frm_month_g

0xef20,	// (0x0008ce63) cell_top_day_name_pane_t1

0x9ed7,	// (0x00087e1a) cell_area_left_week_number_pane_g1

0x9ee6,	// (0x00087e29) cell_area_left_week_number_pane_t1

0xd071,	// (0x0008afb4) cell_month_view_pane_g1

0x9efc,	// (0x00087e3f) cell_month_view_pane_t1

0xa21a,	// (0x0008815d) main_fps_pane

0xe715,	// (0x0008c658) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe715,	// (0x0008c658) cmail_ddmenu_btn02_pane_cp1

0xe731,	// (0x0008c674) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe731,	// (0x0008c674) cmail_ddmenu_btn02_pane_cp2

0x9711,	// (0x00087654) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9711,	// (0x00087654) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe13,	// (0x0008dd56) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe13,	// (0x0008dd56) cmail_ddmenu_btn02_pane_g

0x972f,	// (0x00087672) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x972f,	// (0x00087672) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe18,	// (0x0008dd5b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe18,	// (0x0008dd5b) cmail_ddmenu_btn02_pane_t

0x9f12,	// (0x00087e55) fps_text_pane_ParamLimits

0x9f12,	// (0x00087e55) fps_text_pane

0x9f1f,	// (0x00087e62) main_fps_pane_g1_ParamLimits

0x9f1f,	// (0x00087e62) main_fps_pane_g1

0x9f2b,	// (0x00087e6e) wait_bar_pane_cp010_ParamLimits

0x9f2b,	// (0x00087e6e) wait_bar_pane_cp010

0x9f37,	// (0x00087e7a) fps_text_pane_t1_ParamLimits

0x9f37,	// (0x00087e7a) fps_text_pane_t1

0x71fc,	// (0x0008513f) cam4_image_uncrop_pane_g1

0x7205,	// (0x00085148) cam4_image_uncrop_pane_g2

0x720e,	// (0x00085151) cam4_image_uncrop_pane_g3

0x7217,	// (0x0008515a) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0008d81a) cam4_image_uncrop_pane_g

0x9d06,	// (0x00087c49) dia3_listrow_pane_ParamLimits

0xa21a,	// (0x0008815d) main_phob2_pane

0x9384,	// (0x000872c7) cell_tport_appsw_pane_cp02_ParamLimits

0x9384,	// (0x000872c7) cell_tport_appsw_pane_cp02

0x9393,	// (0x000872d6) cell_tport_appsw_pane_cp03_ParamLimits

0x9393,	// (0x000872d6) cell_tport_appsw_pane_cp03

0xa21a,	// (0x0008815d) phob2_contact_card_pane

0xa21a,	// (0x0008815d) phob2_listscroll_pane

0xef33,	// (0x0008ce76) phob2_list_pane

0xef3b,	// (0x0008ce7e) scroll_pane_cp034

0x9f50,	// (0x00087e93) phob2_cc_data_pane_ParamLimits

0x9f50,	// (0x00087e93) phob2_cc_data_pane

0x9f67,	// (0x00087eaa) phob2_cc_listscroll_pane_ParamLimits

0x9f67,	// (0x00087eaa) phob2_cc_listscroll_pane

0x9f83,	// (0x00087ec6) list_double_large_graphic_phob2_pane_ParamLimits

0x9f83,	// (0x00087ec6) list_double_large_graphic_phob2_pane

0x9f9b,	// (0x00087ede) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9f9b,	// (0x00087ede) list_double_large_graphic_phob2_pane_g1

0x1c7f,	// (0x0007fbc2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1c7f,	// (0x0007fbc2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff0f,	// (0x0008de52) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff0f,	// (0x0008de52) list_double_large_graphic_phob2_pane_g

0x1c8b,	// (0x0007fbce) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1c8b,	// (0x0007fbce) list_double_large_graphic_phob2_pane_t1

0x1ca0,	// (0x0007fbe3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1ca0,	// (0x0007fbe3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff14,	// (0x0008de57) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff14,	// (0x0008de57) list_double_large_graphic_phob2_pane_t

0xa21a,	// (0x0008815d) list_highlight_pane_cp024

0x9fb1,	// (0x00087ef4) phob2_cc_button_pane

0x9fb9,	// (0x00087efc) phob2_cc_data_pane_g1_ParamLimits

0x9fb9,	// (0x00087efc) phob2_cc_data_pane_g1

0x9fcd,	// (0x00087f10) phob2_cc_data_pane_g2_ParamLimits

0x9fcd,	// (0x00087f10) phob2_cc_data_pane_g2

0x0001,

0xff19,	// (0x0008de5c) phob2_cc_data_pane_g_ParamLimits

0xff19,	// (0x0008de5c) phob2_cc_data_pane_g

0x9fdc,	// (0x00087f1f) phob2_cc_data_pane_t1_ParamLimits

0x9fdc,	// (0x00087f1f) phob2_cc_data_pane_t1

0x9ff5,	// (0x00087f38) phob2_cc_data_pane_t2_ParamLimits

0x9ff5,	// (0x00087f38) phob2_cc_data_pane_t2

0xa00e,	// (0x00087f51) phob2_cc_data_pane_t3_ParamLimits

0xa00e,	// (0x00087f51) phob2_cc_data_pane_t3

0x0002,

0xff1e,	// (0x0008de61) phob2_cc_data_pane_t_ParamLimits

0xff1e,	// (0x0008de61) phob2_cc_data_pane_t

0xef43,	// (0x0008ce86) phob2_cc_list_pane_ParamLimits

0xef43,	// (0x0008ce86) phob2_cc_list_pane

0xdc7f,	// (0x0008bbc2) scroll_pane_cp035_ParamLimits

0xdc7f,	// (0x0008bbc2) scroll_pane_cp035

0xc183,	// (0x0008a0c6) bg_button_pane_cp033

0xef4f,	// (0x0008ce92) phob2_cc_button_pane_g1

0xef5b,	// (0x0008ce9e) phob2_cc_button_pane_t1

0xef70,	// (0x0008ceb3) phob2_cc_button_pane_t2

0x0001,

0xff25,	// (0x0008de68) phob2_cc_button_pane_t

0xa027,	// (0x00087f6a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa027,	// (0x00087f6a) list_double_large_graphic_phob2_cc_pane

0xa076,	// (0x00087fb9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa076,	// (0x00087fb9) list_double_large_graphic_phob2_cc_pane_g1

0x1cb2,	// (0x0007fbf5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1cb2,	// (0x0007fbf5) list_double_large_graphic_phob2_cc_pane_g2

0x1cc1,	// (0x0007fc04) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1cc1,	// (0x0007fc04) list_double_large_graphic_phob2_cc_pane_g3

0x1cd0,	// (0x0007fc13) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1cd0,	// (0x0007fc13) list_double_large_graphic_phob2_cc_pane_g4

0x1ce1,	// (0x0007fc24) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1ce1,	// (0x0007fc24) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2a,	// (0x0008de6d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2a,	// (0x0008de6d) list_double_large_graphic_phob2_cc_pane_g

0x1cf0,	// (0x0007fc33) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1cf0,	// (0x0007fc33) list_double_large_graphic_phob2_cc_pane_t1

0x1d19,	// (0x0007fc5c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1d19,	// (0x0007fc5c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff35,	// (0x0008de78) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff35,	// (0x0008de78) list_double_large_graphic_phob2_cc_pane_t

0xef82,	// (0x0008cec5) list_highlight_pane_cp025_ParamLimits

0xef82,	// (0x0008cec5) list_highlight_pane_cp025

0xc183,	// (0x0008a0c6) bg_button_pane_cp033_ParamLimits

0xef4f,	// (0x0008ce92) phob2_cc_button_pane_g1_ParamLimits

0xef5b,	// (0x0008ce9e) phob2_cc_button_pane_t1_ParamLimits

0xef70,	// (0x0008ceb3) phob2_cc_button_pane_t2_ParamLimits

0xff25,	// (0x0008de68) phob2_cc_button_pane_t_ParamLimits

0x2019,	// (0x0007ff5c) popup_wgtman_window

0xd940,	// (0x0008b883) scroll_pane_cp038

0x9ace,	// (0x00087a11) wgtman_btn_pane_cp_01_ParamLimits

0x9ace,	// (0x00087a11) wgtman_btn_pane_cp_01

0xef90,	// (0x0008ced3) wgtman_content_pane

0xef99,	// (0x0008cedc) wgtman_heading_pane

0xa21a,	// (0x0008815d) bg_heading_pane_cp02

0xefa2,	// (0x0008cee5) wgtman_heading_pane_g1

0xefaa,	// (0x0008ceed) wgtman_heading_pane_t1

0xefb8,	// (0x0008cefb) scroll_pane_cp036

0xefc0,	// (0x0008cf03) wgtman_list_pane

0xe9cb,	// (0x0008c90e) wgtman_list_pane_t1_ParamLimits

0xe9cb,	// (0x0008c90e) wgtman_list_pane_t1

0x7159,	// (0x0008509c) cam4_grid_pane

0x0f10,	// (0x0007ee53) bg_button_pane_cp015_ParamLimits

0x7e74,	// (0x00085db7) bg_button_pane_cp016_ParamLimits

0x7e87,	// (0x00085dca) bg_button_pane_cp017_ParamLimits

0x0f54,	// (0x0007ee97) popup_vitu2_query_window_g3_ParamLimits

0x0f54,	// (0x0007ee97) popup_vitu2_query_window_g3

0x0fcd,	// (0x0007ef10) popup_vitu2_query_window_t6_ParamLimits

0x0fcd,	// (0x0007ef10) popup_vitu2_query_window_t6

0x0ff8,	// (0x0007ef3b) popup_vitu2_query_window_t7_ParamLimits

0x0ff8,	// (0x0007ef3b) popup_vitu2_query_window_t7

0xe9e5,	// (0x0008c928) cam4_grid_pane_g1

0xe9ee,	// (0x0008c931) cam4_grid_pane_g2

0xefc8,	// (0x0008cf0b) cam4_grid_pane_g3

0xefd1,	// (0x0008cf14) cam4_grid_pane_g4

0x0003,

0xff3a,	// (0x0008de7d) cam4_grid_pane_g

0x2f2d,	// (0x00080e70) aid_placing_vt_slider_lsc_ParamLimits

0x3260,	// (0x000811a3) vidtel_button_pane_ParamLimits

0x3260,	// (0x000811a3) vidtel_button_pane

0xa21a,	// (0x0008815d) bg_button_pane_cp034

0xefdc,	// (0x0008cf1f) vidtel_button_pane_g1

0xefe4,	// (0x0008cf27) vidtel_button_pane_t1

0xda44,	// (0x0008b987) aid_size_vtel_slider_touch

0xdc7f,	// (0x0008bbc2) scroll_pane_cp039

0x8b55,	// (0x00086a98) ncim_query_button_pane_cp01_ParamLimits

0x8b74,	// (0x00086ab7) ncimui_query_pane_g1_ParamLimits

0xc183,	// (0x0008a0c6) input_focus_pane_cp012_ParamLimits

0xe30d,	// (0x0008c250) ncim_query_entry_pane_t1_ParamLimits

0xdc7f,	// (0x0008bbc2) scroll_pane_cp039_ParamLimits

0xb488,	// (0x000893cb) navi_pane_bcale_mc_g1

0xb490,	// (0x000893d3) navi_pane_bcale_mc_t1

0xe767,	// (0x0008c6aa) main_sp_fs_email_pane_g1

0xe773,	// (0x0008c6b6) main_sp_fs_email_pane_g2

0x0001,

0xfccb,	// (0x0008dc0e) main_sp_fs_email_pane_g

0xea31,	// (0x0008c974) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea31,	// (0x0008c974) list_single_cale_mrui_row_pane_g3

0x1b98,	// (0x0007fadb) list_single_recal_day_pane_g5_event_pane

0x1bae,	// (0x0007faf1) list_single_recal_day_pane_g7

0xeffa,	// (0x0008cf3d) list_recal_day_event_pane_cp01

0xf003,	// (0x0008cf46) list_recal_vselct_arw_lo_pane_cp01

0xf00b,	// (0x0008cf4e) list_recal_vselct_arw_up_pane_cp01

0xf013,	// (0x0008cf56) list_recal_vselct_pane_cp01

0xda54,	// (0x0008b997) list_recal_day_event_pane_cp01_g1

0x1d42,	// (0x0007fc85) list_recal_day_event_pane_cp01_t1

0x1bb6,	// (0x0007faf9) list_single_recal_day_pane_t1_ParamLimits

0x1bc8,	// (0x0007fb0b) list_single_recal_day_pane_t2_ParamLimits

0xfe28,	// (0x0008dd6b) list_single_recal_day_pane_t_ParamLimits

0xa8c7,	// (0x0008880a) bg_notes_pane_ParamLimits

0xa96a,	// (0x000888ad) list_notes_pane_ParamLimits

0x2333,	// (0x00080276) scroll_pane_cp06_ParamLimits

0xa98c,	// (0x000888cf) main_notes_pane_ParamLimits

0xc183,	// (0x0008a0c6) main_welc_pane

0xa096,	// (0x00087fd9) main_welc_body_pane_ParamLimits

0xa096,	// (0x00087fd9) main_welc_body_pane

0xa0b1,	// (0x00087ff4) main_welc_opti_pane_ParamLimits

0xa0b1,	// (0x00087ff4) main_welc_opti_pane

0xa0f2,	// (0x00088035) main_welc_pane_t1_ParamLimits

0xa0f2,	// (0x00088035) main_welc_pane_t1

0xa154,	// (0x00088097) main_welc_body_row_pane_ParamLimits

0xa154,	// (0x00088097) main_welc_body_row_pane

0xd39d,	// (0x0008b2e0) main_welc_opti_row_pane_ParamLimits

0xd39d,	// (0x0008b2e0) main_welc_opti_row_pane

0xf01d,	// (0x0008cf60) main_welc_opti_row_pane_g1

0xa16e,	// (0x000880b1) main_welc_opti_row_pane_t1

0xf025,	// (0x0008cf68) main_welc_body_row_pane_t1

0xed80,	// (0x0008ccc3) popup_notif_wgt_heading_pane

0xed9a,	// (0x0008ccdd) aid_size_list_notif_wgt_del_ParamLimits

0xeda7,	// (0x0008ccea) list_notif_wgt_row_pane_g1_ParamLimits

0xedb3,	// (0x0008ccf6) list_notif_wgt_row_pane_g2_ParamLimits

0xedc2,	// (0x0008cd05) list_notif_wgt_row_pane_g3_ParamLimits

0xfe8f,	// (0x0008ddd2) list_notif_wgt_row_pane_g_ParamLimits

0xedcf,	// (0x0008cd12) list_notif_wgt_row_pane_t1_ParamLimits

0xede5,	// (0x0008cd28) list_notif_wgt_row_pane_t2_ParamLimits

0xedf7,	// (0x0008cd3a) list_notif_wgt_row_pane_t3_ParamLimits

0xfe96,	// (0x0008ddd9) list_notif_wgt_row_pane_t_ParamLimits

0x9b5a,	// (0x00087a9d) listrow_wgtman_pane_g1_ParamLimits

0x9b67,	// (0x00087aaa) listrow_wgtman_pane_g2_ParamLimits

0xfebf,	// (0x0008de02) listrow_wgtman_pane_g_ParamLimits

0x1c2f,	// (0x0007fb72) listrow_wgtman_pane_t1_ParamLimits

0x1c47,	// (0x0007fb8a) listrow_wgtman_pane_t2_ParamLimits

0xfec4,	// (0x0008de07) listrow_wgtman_pane_t_ParamLimits

0x1c6d,	// (0x0007fbb0) wait_bar_pane_cp09_ParamLimits

0xa21a,	// (0x0008815d) bg_popup_heading_pane_cp02

0xf034,	// (0x0008cf77) popup_notif_wgt_heading_pane_g1

0xf03c,	// (0x0008cf7f) popup_notif_wgt_heading_pane_t1

0xa21a,	// (0x0008815d) main_vids_pane

0xa21a,	// (0x0008815d) vids_listscroll_pane

0xa17d,	// (0x000880c0) scroll_pane_cp040

0xa21a,	// (0x0008815d) vids_list_pane

0xa188,	// (0x000880cb) vids_list_double_pane_ParamLimits

0xa188,	// (0x000880cb) vids_list_double_pane

0xa19c,	// (0x000880df) vids_list_double_pane_g1

0xa1a5,	// (0x000880e8) vids_list_double_pane_t1

0xa1b5,	// (0x000880f8) vids_list_double_pane_t2

0x0001,

0xff51,	// (0x0008de94) vids_list_double_pane_t

0xc183,	// (0x0008a0c6) main_ncimui_pane_ParamLimits

0x8996,	// (0x000868d9) main_ncimui_pane_g1_ParamLimits

0x89a4,	// (0x000868e7) main_ncimui_pane_g2_ParamLimits

0x89a4,	// (0x000868e7) main_ncimui_pane_g2

0x0001,

0xfbcc,	// (0x0008db0f) main_ncimui_pane_g_ParamLimits

0xfbcc,	// (0x0008db0f) main_ncimui_pane_g

0xa0cc,	// (0x0008800f) main_welc_pane_g1_ParamLimits

0xa0cc,	// (0x0008800f) main_welc_pane_g1

0xa0d8,	// (0x0008801b) main_welc_pane_g2_ParamLimits

0xa0d8,	// (0x0008801b) main_welc_pane_g2

0x0002,

0xff43,	// (0x0008de86) main_welc_pane_g_ParamLimits

0xff43,	// (0x0008de86) main_welc_pane_g

0xa8c7,	// (0x0008880a) listscroll_mce_pane_ParamLimits

0xb5df,	// (0x00089522) wait_bar_pane_cp10

0xc9fe,	// (0x0008a941) main_cale_day_pane_ParamLimits

0xc9fe,	// (0x0008a941) main_cale_week_pane_ParamLimits

0xa8c7,	// (0x0008880a) main_messa_pane_ParamLimits

0x6481,	// (0x000843c4) main_clock2_btn_pane_ParamLimits

0x6481,	// (0x000843c4) main_clock2_btn_pane

0xd1f9,	// (0x0008b13c) main_clock2_btn_pane_cp01_ParamLimits

0xd1f9,	// (0x0008b13c) main_clock2_btn_pane_cp01

0xea02,	// (0x0008c945) list_cale_mrui_pane_ParamLimits

0xee2d,	// (0x0008cd70) main_cf0_pane_g2

0x0001,

0xfe9d,	// (0x0008dde0) main_cf0_pane_g

0x9d5e,	// (0x00087ca1) area_left_week_number_pane_ParamLimits

0x9d71,	// (0x00087cb4) area_top_day_name_pane_ParamLimits

0x9d7f,	// (0x00087cc2) frame_month_view_pane_ParamLimits

0xeef8,	// (0x0008ce3b) grid_month_view_pane_ParamLimits

0xef06,	// (0x0008ce49) frm_month_g1_ParamLimits

0x9dfd,	// (0x00087d40) frm_month_g2_ParamLimits

0x9e0e,	// (0x00087d51) frm_month_g3_ParamLimits

0x9e1f,	// (0x00087d62) frm_month_g4_ParamLimits

0x9e30,	// (0x00087d73) frm_month_g5_ParamLimits

0x9e41,	// (0x00087d84) frm_month_g6_ParamLimits

0x9e54,	// (0x00087d97) frm_month_g7_ParamLimits

0xef13,	// (0x0008ce56) frm_month_g8_ParamLimits

0x9e67,	// (0x00087daa) frm_month_g9_ParamLimits

0x9e74,	// (0x00087db7) frm_month_g10_ParamLimits

0x9e81,	// (0x00087dc4) frm_month_g11_ParamLimits

0x9e8e,	// (0x00087dd1) frm_month_g12_ParamLimits

0x9e9b,	// (0x00087dde) frm_month_g13_ParamLimits

0x9eaa,	// (0x00087ded) frm_month_g14_ParamLimits

0x9eb9,	// (0x00087dfc) frm_month_g15_ParamLimits

0x9ec8,	// (0x00087e0b) frm_month_g16_ParamLimits

0xfeee,	// (0x0008de31) frm_month_g_ParamLimits

0xef20,	// (0x0008ce63) cell_top_day_name_pane_t1_ParamLimits

0x9ed7,	// (0x00087e1a) cell_area_left_week_number_pane_g1_ParamLimits

0x9ee6,	// (0x00087e29) cell_area_left_week_number_pane_t1_ParamLimits

0xd071,	// (0x0008afb4) cell_month_view_pane_g1_ParamLimits

0x9efc,	// (0x00087e3f) cell_month_view_pane_t1_ParamLimits

0xa8bf,	// (0x00088802) main_clock2_btn_pane_g1

0xf04a,	// (0x0008cf8d) main_clock2_btn_pane_t1

0xc183,	// (0x0008a0c6) listscroll_cmail_pane_ParamLimits

0xe767,	// (0x0008c6aa) main_sp_fs_email_pane_g1_ParamLimits

0xe773,	// (0x0008c6b6) main_sp_fs_email_pane_g2_ParamLimits

0xfccb,	// (0x0008dc0e) main_sp_fs_email_pane_g_ParamLimits

0xeb0a,	// (0x0008ca4d) list_recal_day_pane_ParamLimits

0xeb1b,	// (0x0008ca5e) mian_recal_day_pane_t1

0x1566,	// (0x0007f4a9) list_single_dyc_row_text_pane_t4_ParamLimits

0x1566,	// (0x0007f4a9) list_single_dyc_row_text_pane_t4

0x15ab,	// (0x0007f4ee) list_single_dyc_row_text_pane_t5_ParamLimits

0x15ab,	// (0x0007f4ee) list_single_dyc_row_text_pane_t5

0x1621,	// (0x0007f564) list_single_dyc_row_text_pane_t6_ParamLimits

0x1621,	// (0x0007f564) list_single_dyc_row_text_pane_t6

0x4025,	// (0x00081f68) aid_mgn_list_cale_time_pane

0xc183,	// (0x0008a0c6) main_gallery2_pane_ParamLimits

0xd20d,	// (0x0008b150) main_clock2_pane_cp01_t1

0xd21b,	// (0x0008b15e) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0008d6ec) main_clock2_pane_cp01_t

0x282f,	// (0x00080772) cale_week_scroll_pane_g16_ParamLimits

0x282f,	// (0x00080772) cale_week_scroll_pane_g16

0xab71,	// (0x00088ab4) vorec_slider_pane

0xefe4,	// (0x0008cf27) vidtel_button_pane_t1_ParamLimits

0x9792,	// (0x000876d5) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9792,	// (0x000876d5) main_fs_bigclock_clock_pane_g2_ParamLimits

0x97a1,	// (0x000876e4) main_fs_bigclock_clock_pane_g3_ParamLimits

0x97a1,	// (0x000876e4) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4b,	// (0x0008dd8e) main_fs_bigclock_clock_pane_g_ParamLimits

0x97b1,	// (0x000876f4) main_fs_bigclock_clock_pane_t1_ParamLimits

0x97c6,	// (0x00087709) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe54,	// (0x0008dd97) main_fs_bigclock_clock_pane_t_ParamLimits

0x5cd7,	// (0x00083c1a) main_mup3_lyrics_pane_ParamLimits

0x5cd7,	// (0x00083c1a) main_mup3_lyrics_pane

0xa1eb,	// (0x0008812e) main_mup3_lyrics_pane_t1_ParamLimits

0xa1eb,	// (0x0008812e) main_mup3_lyrics_pane_t1

0x6aca,	// (0x00084a0d) aid_main_mp4_pane_t1_area

0x6ad4,	// (0x00084a17) aid_main_mp4_pane_t2_area

0x6be1,	// (0x00084b24) main_mp4_pane_g7_ParamLimits

0x6be1,	// (0x00084b24) main_mp4_pane_g7

0x6bed,	// (0x00084b30) main_mp4_pane_g8_ParamLimits

0x6bed,	// (0x00084b30) main_mp4_pane_g8

0x6ffd,	// (0x00084f40) aid_call6_pane_g1_size

0xa055,	// (0x00087f98) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa055,	// (0x00087f98) list_double_large_graphic_phob2_other_pane

0xa212,	// (0x00088155) list_double_large_graphic_phob2_other_pane_g1

0xa21a,	// (0x0008815d) list_highlight_pane_cp026

0xc183,	// (0x0008a0c6) main_welc_pane_ParamLimits

0x9260,	// (0x000871a3) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9260,	// (0x000871a3) main_sp_fs_ctrlbar_pane_g3

0x927a,	// (0x000871bd) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x927a,	// (0x000871bd) main_sp_fs_ctrlbar_pane_g4

0x92ac,	// (0x000871ef) toolbar2_fixed_button_pane_cp01

0x92b7,	// (0x000871fa) toolbar2_fixed_button_pane_cp02

0x92c4,	// (0x00087207) toolbar2_fixed_button_pane_cp03

0xa087,	// (0x00087fca) list_welc_entry_pane_ParamLimits

0xa087,	// (0x00087fca) list_welc_entry_pane

0xa0e6,	// (0x00088029) main_welc_pane_g3_ParamLimits

0xa0e6,	// (0x00088029) main_welc_pane_g3

0xa110,	// (0x00088053) main_welc_pane_t2_ParamLimits

0xa110,	// (0x00088053) main_welc_pane_t2

0xa124,	// (0x00088067) main_welc_pane_t3_ParamLimits

0xa124,	// (0x00088067) main_welc_pane_t3

0x0002,

0xff4a,	// (0x0008de8d) main_welc_pane_t_ParamLimits

0xff4a,	// (0x0008de8d) main_welc_pane_t

0xa138,	// (0x0008807b) welc_button_pane_ParamLimits

0xa138,	// (0x0008807b) welc_button_pane

0xa146,	// (0x00088089) welc_service_logo_pane_ParamLimits

0xa146,	// (0x00088089) welc_service_logo_pane

0xf058,	// (0x0008cf9b) list_single_welc_entry_pane_ParamLimits

0xf058,	// (0x0008cf9b) list_single_welc_entry_pane

0xf06b,	// (0x0008cfae) list_single_welc_entry_pane_g1

0xf073,	// (0x0008cfb6) list_single_welc_entry_pane_t1

0xf081,	// (0x0008cfc4) list_single_welc_entry_pane_t2

0x0001,

0xff56,	// (0x0008de99) list_single_welc_entry_pane_t

0xa21a,	// (0x0008815d) bg_button_pane_cp035

0xf08f,	// (0x0008cfd2) welc_button_pane_t1

0xf09d,	// (0x0008cfe0) welc_service_logo_pane_g1

0xf0a6,	// (0x0008cfe9) welc_service_logo_pane_g2

0x0001,

0xff5b,	// (0x0008de9e) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large

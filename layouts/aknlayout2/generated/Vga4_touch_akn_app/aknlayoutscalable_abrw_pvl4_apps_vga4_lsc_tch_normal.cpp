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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002f05c };

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
0x0ecd,	// (0x0002ff29) Screen

0x0ed9,	// (0x0002ff35) application_window

0x0f15,	// (0x0002ff71) area_bottom_pane_ParamLimits

0x0f15,	// (0x0002ff71) area_bottom_pane

0x0f4e,	// (0x0002ffaa) area_top_pane_ParamLimits

0x0f4e,	// (0x0002ffaa) area_top_pane

0x9c41,	// (0x00038c9d) call_video_uplink_pane_ParamLimits

0x9c41,	// (0x00038c9d) call_video_uplink_pane

0x0fdc,	// (0x00030038) main_pane_ParamLimits

0x0fdc,	// (0x00030038) main_pane

0xc374,	// (0x0003b3d0) context_pane

0x4945,	// (0x000339a1) navi_pane

0x4975,	// (0x000339d1) popup_cale_events_window_ParamLimits

0x4975,	// (0x000339d1) popup_cale_events_window

0xc387,	// (0x0003b3e3) popup_mup_playback_window

0x498d,	// (0x000339e9) signal_pane

0xa3a0,	// (0x000393fc) main_browser_pane

0xae96,	// (0x00039ef2) main_burst_pane

0x4647,	// (0x000336a3) main_calc_pane

0xc317,	// (0x0003b373) main_cale_day_pane

0x1590,	// (0x000305ec) main_cale_month_pane

0xc317,	// (0x0003b373) main_cale_week_pane

0xae96,	// (0x00039ef2) main_call_pane

0xa080,	// (0x000390dc) main_call_poc_pane

0xae96,	// (0x00039ef2) main_camera_pane

0xae96,	// (0x00039ef2) main_chi_dic_pane

0xad38,	// (0x00039d94) main_clock_pane

0xa080,	// (0x000390dc) main_fmradio_pane

0xae96,	// (0x00039ef2) main_graph_messa_pane

0xa080,	// (0x000390dc) main_help_pane

0xa3a0,	// (0x000393fc) main_im_pane

0xa2db,	// (0x00039337) main_image_pane_ParamLimits

0xa2db,	// (0x00039337) main_image_pane

0xa080,	// (0x000390dc) main_location2_pane

0xae96,	// (0x00039ef2) main_location_pane

0xa2db,	// (0x00039337) main_messa_pane

0xa080,	// (0x000390dc) main_mp2_pane

0xae96,	// (0x00039ef2) main_mp_pane

0xa080,	// (0x000390dc) main_msg_pane

0xa080,	// (0x000390dc) main_mup_eq_pane

0xa080,	// (0x000390dc) main_mup_pane

0xa3a0,	// (0x000393fc) main_notes_pane

0xa080,	// (0x000390dc) main_pec_pane

0xa080,	// (0x000390dc) main_phob_pane

0xa080,	// (0x000390dc) main_pinb_pane

0xa080,	// (0x000390dc) main_postcard_pane

0xa080,	// (0x000390dc) main_qdial_pane

0xae96,	// (0x00039ef2) main_skin_pane

0xa080,	// (0x000390dc) main_smil2_pane

0xae96,	// (0x00039ef2) main_smil_pane

0xae96,	// (0x00039ef2) main_video_pane

0xae96,	// (0x00039ef2) main_video_tele_pane

0xa2db,	// (0x00039337) main_viewer_pane_ParamLimits

0xa2db,	// (0x00039337) main_viewer_pane

0xae96,	// (0x00039ef2) main_vorec_pane

0x469d,	// (0x000336f9) popup_blid_sat_info_window_ParamLimits

0x469d,	// (0x000336f9) popup_blid_sat_info_window

0x4701,	// (0x0003375d) popup_dyc_status_message_window_ParamLimits

0x4701,	// (0x0003375d) popup_dyc_status_message_window

0x471b,	// (0x00033777) popup_grid_large_graphic_window_ParamLimits

0x471b,	// (0x00033777) popup_grid_large_graphic_window

0x47dd,	// (0x00033839) popup_loc_request_window_ParamLimits

0x47dd,	// (0x00033839) popup_loc_request_window

0x4919,	// (0x00033975) popup_wml_address_window_ParamLimits

0x4919,	// (0x00033975) popup_wml_address_window

0x4485,	// (0x000334e1) call_muted_g1

0x4119,	// (0x00033175) popup_call_audio_conf_window_ParamLimits

0x4119,	// (0x00033175) popup_call_audio_conf_window

0x4495,	// (0x000334f1) popup_call_audio_first_window_ParamLimits

0x4495,	// (0x000334f1) popup_call_audio_first_window

0x450b,	// (0x00033567) popup_call_audio_in_window_ParamLimits

0x450b,	// (0x00033567) popup_call_audio_in_window

0x4547,	// (0x000335a3) popup_call_audio_out_window_ParamLimits

0x4547,	// (0x000335a3) popup_call_audio_out_window

0x4581,	// (0x000335dd) popup_call_audio_second_window_ParamLimits

0x4581,	// (0x000335dd) popup_call_audio_second_window

0x45d7,	// (0x00033633) popup_call_audio_wait_window_ParamLimits

0x45d7,	// (0x00033633) popup_call_audio_wait_window

0x460c,	// (0x00033668) popup_number_entry_window_ParamLimits

0x460c,	// (0x00033668) popup_number_entry_window

0x9c6d,	// (0x00038cc9) bg_popup_call_pane_cp05_ParamLimits

0x9c6d,	// (0x00038cc9) bg_popup_call_pane_cp05

0x9c8d,	// (0x00038ce9) popup_number_entry_window_t1

0x9ca0,	// (0x00038cfc) popup_number_entry_window_t2

0x9cb2,	// (0x00038d0e) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0003e122) popup_number_entry_window_t

0x9cc4,	// (0x00038d20) text_title_cp2

0x9cd7,	// (0x00038d33) bg_popup_call_pane_cp_ParamLimits

0x9cd7,	// (0x00038d33) bg_popup_call_pane_cp

0x9ce5,	// (0x00038d41) call_thumbnail_pane

0x9ced,	// (0x00038d49) popup_call_audio_in_window_g1_ParamLimits

0x9ced,	// (0x00038d49) popup_call_audio_in_window_g1

0x9cf9,	// (0x00038d55) popup_call_audio_in_window_g2_ParamLimits

0x9cf9,	// (0x00038d55) popup_call_audio_in_window_g2

0x9d05,	// (0x00038d61) popup_call_audio_in_window_g3_ParamLimits

0x9d05,	// (0x00038d61) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0003e12b) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0003e12b) popup_call_audio_in_window_g

0x9d11,	// (0x00038d6d) popup_call_audio_in_window_t1_ParamLimits

0x9d11,	// (0x00038d6d) popup_call_audio_in_window_t1

0x9d2d,	// (0x00038d89) popup_call_audio_in_window_t2_ParamLimits

0x9d2d,	// (0x00038d89) popup_call_audio_in_window_t2

0x9d49,	// (0x00038da5) popup_call_audio_in_window_t3_ParamLimits

0x9d49,	// (0x00038da5) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0003e132) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0003e132) popup_call_audio_in_window_t

0x9cd7,	// (0x00038d33) bg_popup_call_pane_cp01_ParamLimits

0x9cd7,	// (0x00038d33) bg_popup_call_pane_cp01

0x9ce5,	// (0x00038d41) call_thumbnail_pane_cp02

0x9d5c,	// (0x00038db8) call_type_pane_cp022

0x9d64,	// (0x00038dc0) popup_call_audio_out_window_g1_ParamLimits

0x9d64,	// (0x00038dc0) popup_call_audio_out_window_g1

0x9d76,	// (0x00038dd2) popup_call_audio_out_window_g2_ParamLimits

0x9d76,	// (0x00038dd2) popup_call_audio_out_window_g2

0x9d82,	// (0x00038dde) popup_call_audio_out_window_g3_ParamLimits

0x9d82,	// (0x00038dde) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0003e139) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0003e139) popup_call_audio_out_window_g

0x9d94,	// (0x00038df0) popup_call_audio_out_window_t1_ParamLimits

0x9d94,	// (0x00038df0) popup_call_audio_out_window_t1

0x9dac,	// (0x00038e08) popup_call_audio_out_window_t2_ParamLimits

0x9dac,	// (0x00038e08) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0003e140) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0003e140) popup_call_audio_out_window_t

0x9dc1,	// (0x00038e1d) bg_popup_call_pane_ParamLimits

0x9dc1,	// (0x00038e1d) bg_popup_call_pane

0x119b,	// (0x000301f7) call_thumbnail_pane_cp_ParamLimits

0x119b,	// (0x000301f7) call_thumbnail_pane_cp

0x9e45,	// (0x00038ea1) call_type_pane_cp01_ParamLimits

0x9e45,	// (0x00038ea1) call_type_pane_cp01

0x9e89,	// (0x00038ee5) popup_call_audio_first_window_g1_ParamLimits

0x9e89,	// (0x00038ee5) popup_call_audio_first_window_g1

0x9ed5,	// (0x00038f31) popup_call_audio_first_window_g2_ParamLimits

0x9ed5,	// (0x00038f31) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0003e145) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0003e145) popup_call_audio_first_window_g

0x9f19,	// (0x00038f75) popup_call_audio_first_window_t1_ParamLimits

0x9f19,	// (0x00038f75) popup_call_audio_first_window_t1

0x9fc5,	// (0x00039021) popup_call_audio_first_window_t4_ParamLimits

0x9fc5,	// (0x00039021) popup_call_audio_first_window_t4

0xa051,	// (0x000390ad) popup_call_audio_first_window_t5_ParamLimits

0xa051,	// (0x000390ad) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0003e14a) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0003e14a) popup_call_audio_first_window_t

0xa080,	// (0x000390dc) bg_popup_call_pane_cp02

0xa08a,	// (0x000390e6) call_type_pane_cp023

0xa092,	// (0x000390ee) popup_call_audio_wait_window_g1

0xa09a,	// (0x000390f6) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0003e151) popup_call_audio_wait_window_g

0xa0a2,	// (0x000390fe) popup_call_audio_wait_window_t3

0xa0b0,	// (0x0003910c) bg_popup_call_pane_cp03_ParamLimits

0xa0b0,	// (0x0003910c) bg_popup_call_pane_cp03

0xa110,	// (0x0003916c) call_thumbnail_pane_cp011_ParamLimits

0xa110,	// (0x0003916c) call_thumbnail_pane_cp011

0xa11c,	// (0x00039178) call_type_pane_cp034_ParamLimits

0xa11c,	// (0x00039178) call_type_pane_cp034

0xa158,	// (0x000391b4) popup_call_audio_second_window_g1_ParamLimits

0xa158,	// (0x000391b4) popup_call_audio_second_window_g1

0xa194,	// (0x000391f0) popup_call_audio_second_window_g2_ParamLimits

0xa194,	// (0x000391f0) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0003e156) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0003e156) popup_call_audio_second_window_g

0xa1d0,	// (0x0003922c) popup_call_audio_second_window_t1_ParamLimits

0xa1d0,	// (0x0003922c) popup_call_audio_second_window_t1

0xa251,	// (0x000392ad) popup_call_audio_second_window_t2_ParamLimits

0xa251,	// (0x000392ad) popup_call_audio_second_window_t2

0xa287,	// (0x000392e3) popup_call_audio_second_window_t3_ParamLimits

0xa287,	// (0x000392e3) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0003e15b) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0003e15b) popup_call_audio_second_window_t

0xa080,	// (0x000390dc) bg_popup_call_pane_cp04

0xa2bd,	// (0x00039319) list_conf_pane

0xa2c5,	// (0x00039321) popup_call_audio_conf_window_t1

0xa2d3,	// (0x0003932f) call_thumbnail_pane_g1

0xa2db,	// (0x00039337) bg_pinb_pane_ParamLimits

0xa2db,	// (0x00039337) bg_pinb_pane

0xa2e9,	// (0x00039345) find_pinb_pane

0xa2f2,	// (0x0003934e) listscroll_pinb_pane_ParamLimits

0xa2f2,	// (0x0003934e) listscroll_pinb_pane

0xa301,	// (0x0003935d) pinb_bg_pane_g1

0x11bf,	// (0x0003021b) pinb_bg_pane_g2

0x11cb,	// (0x00030227) pinb_bg_pane_g3

0x11d7,	// (0x00030233) pinb_bg_pane_g4

0x11e3,	// (0x0003023f) pinb_bg_pane_g5

0x11ef,	// (0x0003024b) pinb_bg_pane_g6

0x11fa,	// (0x00030256) pinb_bg_pane_g7

0x1205,	// (0x00030261) pinb_bg_pane_g8

0x1210,	// (0x0003026c) pinb_bg_pane_g9

0x121a,	// (0x00030276) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0003e162) pinb_bg_pane_g

0x1237,	// (0x00030293) grid_pinb_pane

0x1242,	// (0x0003029e) list_pinb_pane

0x124d,	// (0x000302a9) scroll_pane_cp01_ParamLimits

0x124d,	// (0x000302a9) scroll_pane_cp01

0xa30b,	// (0x00039367) find_pinb_pane_g1_ParamLimits

0xa30b,	// (0x00039367) find_pinb_pane_g1

0xa323,	// (0x0003937f) find_pinb_pane_t1

0xa335,	// (0x00039391) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0003e17c) find_pinb_pane_t

0xa34a,	// (0x000393a6) input_focus_pane_cp01_ParamLimits

0xa34a,	// (0x000393a6) input_focus_pane_cp01

0x125f,	// (0x000302bb) cell_pinb_pane_ParamLimits

0x125f,	// (0x000302bb) cell_pinb_pane

0x1281,	// (0x000302dd) cell_pinb_pane_g1_ParamLimits

0x1281,	// (0x000302dd) cell_pinb_pane_g1

0x1296,	// (0x000302f2) cell_pinb_pane_g2_ParamLimits

0x1296,	// (0x000302f2) cell_pinb_pane_g2

0xa356,	// (0x000393b2) cell_pinb_pane_g3_ParamLimits

0xa356,	// (0x000393b2) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0003e181) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0003e181) cell_pinb_pane_g

0xa080,	// (0x000390dc) grid_highlight_pane_cp01

0x12a2,	// (0x000302fe) list_pinb_item_pane_ParamLimits

0x12a2,	// (0x000302fe) list_pinb_item_pane

0xa080,	// (0x000390dc) list_highlight_pane_cp02

0x12b4,	// (0x00030310) list_pinb_item_pane_g1_ParamLimits

0x12b4,	// (0x00030310) list_pinb_item_pane_g1

0x12c1,	// (0x0003031d) list_pinb_item_pane_g2_ParamLimits

0x12c1,	// (0x0003031d) list_pinb_item_pane_g2

0x12cd,	// (0x00030329) list_pinb_item_pane_g3_ParamLimits

0x12cd,	// (0x00030329) list_pinb_item_pane_g3

0x12de,	// (0x0003033a) list_pinb_item_pane_g4_ParamLimits

0x12de,	// (0x0003033a) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0003e188) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0003e188) list_pinb_item_pane_g

0x12ea,	// (0x00030346) list_pinb_item_pane_t1_ParamLimits

0x12ea,	// (0x00030346) list_pinb_item_pane_t1

0xfbb0,	// (0x0002ec0c) calc_display_pane

0xfbd8,	// (0x0002ec34) calc_paper_pane

0xfbfb,	// (0x0002ec57) grid_calc_pane

0xa080,	// (0x000390dc) bg_list_pane_cp01

0x1309,	// (0x00030365) clock_g1

0x1311,	// (0x0003036d) clock_g2

0x0001,

0xf135,	// (0x0003e191) clock_g

0x1319,	// (0x00030375) clock_t1_ParamLimits

0x1319,	// (0x00030375) clock_t1

0x132e,	// (0x0003038a) clock_t2_ParamLimits

0x132e,	// (0x0003038a) clock_t2

0x1340,	// (0x0003039c) clock_t3_ParamLimits

0x1340,	// (0x0003039c) clock_t3

0x1352,	// (0x000303ae) clock_t4_ParamLimits

0x1352,	// (0x000303ae) clock_t4

0x1364,	// (0x000303c0) clock_t5_ParamLimits

0x1364,	// (0x000303c0) clock_t5

0x1379,	// (0x000303d5) clock_t6_ParamLimits

0x1379,	// (0x000303d5) clock_t6

0x138b,	// (0x000303e7) clock_t7_ParamLimits

0x138b,	// (0x000303e7) clock_t7

0x139d,	// (0x000303f9) clock_t8_ParamLimits

0x139d,	// (0x000303f9) clock_t8

0x13b1,	// (0x0003040d) clock_t9_ParamLimits

0x13b1,	// (0x0003040d) clock_t9

0x0008,

0xf13a,	// (0x0003e196) clock_t_ParamLimits

0xf13a,	// (0x0003e196) clock_t

0xa362,	// (0x000393be) popup_clock_analogue_window_cp02

0xa362,	// (0x000393be) popup_clock_digital_window_cp01

0xa36a,	// (0x000393c6) listscroll_help_pane

0xa080,	// (0x000390dc) phob_pre_status_pane

0xa374,	// (0x000393d0) grid_qdial_pane

0xa2db,	// (0x00039337) listscroll_mce_pane

0xa2db,	// (0x00039337) bg_notes_pane

0xa37e,	// (0x000393da) list_notes_pane

0x13c7,	// (0x00030423) scroll_pane_cp06

0xa38c,	// (0x000393e8) bg_calc_paper_pane

0x13e5,	// (0x00030441) list_calc_pane

0xa3a0,	// (0x000393fc) bg_calc_display_pane

0xfc29,	// (0x0002ec85) calc_display_pane_t1

0xfc3b,	// (0x0002ec97) calc_display_pane_t2

0x13ff,	// (0x0003045b) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0003e1a9) calc_display_pane_t

0xfc4d,	// (0x0002eca9) cell_calc_pane_ParamLimits

0xfc4d,	// (0x0002eca9) cell_calc_pane

0xa3ac,	// (0x00039408) bg_calc_paper_pane_g1

0xa3b8,	// (0x00039414) bg_calc_paper_pane_g2

0xa3c4,	// (0x00039420) bg_calc_paper_pane_g3

0xa3d0,	// (0x0003942c) bg_calc_paper_pane_g4

0xa3dc,	// (0x00039438) bg_calc_paper_pane_g5

0x1411,	// (0x0003046d) bg_calc_paper_pane_g6

0x1424,	// (0x00030480) bg_calc_paper_pane_g7

0x1437,	// (0x00030493) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0003e1b0) bg_calc_paper_pane_g

0x1448,	// (0x000304a4) calc_bg_paper_pane_g9

0x1459,	// (0x000304b5) list_calc_item_pane_ParamLimits

0x1459,	// (0x000304b5) list_calc_item_pane

0xa3e8,	// (0x00039444) list_calc_item_pane_g1

0x1471,	// (0x000304cd) list_calc_item_pane_t1_ParamLimits

0x1471,	// (0x000304cd) list_calc_item_pane_t1

0xfc8a,	// (0x0002ece6) list_calc_item_pane_t2_ParamLimits

0xfc8a,	// (0x0002ece6) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0003e1c1) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0003e1c1) list_calc_item_pane_t

0xa3f5,	// (0x00039451) cell_calc_pane_g1

0xa3ff,	// (0x0003945b) grid_highlight_pane_cp02

0xa421,	// (0x0003947d) bg_calc_display_pane_g1

0x1483,	// (0x000304df) bg_calc_display_pane_g2

0xa42a,	// (0x00039486) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0003e1cb) bg_calc_display_pane_g

0xfcbc,	// (0x0002ed18) cell_qdial_pane_ParamLimits

0xfcbc,	// (0x0002ed18) cell_qdial_pane

0x148d,	// (0x000304e9) cell_qdial_pane_g1_ParamLimits

0x148d,	// (0x000304e9) cell_qdial_pane_g1

0x14a3,	// (0x000304ff) cell_qdial_pane_g2_ParamLimits

0x14a3,	// (0x000304ff) cell_qdial_pane_g2

0xa433,	// (0x0003948f) cell_qdial_pane_g3_ParamLimits

0xa433,	// (0x0003948f) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0003e1d2) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0003e1d2) cell_qdial_pane_g

0x14ca,	// (0x00030526) cell_qdial_pane_t1_ParamLimits

0x14ca,	// (0x00030526) cell_qdial_pane_t1

0x14e2,	// (0x0003053e) cell_qdial_pane_t2_ParamLimits

0x14e2,	// (0x0003053e) cell_qdial_pane_t2

0x14f5,	// (0x00030551) cell_qdial_pane_t3_ParamLimits

0x14f5,	// (0x00030551) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0003e1db) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0003e1db) cell_qdial_pane_t

0xa080,	// (0x000390dc) grid_highlight_pane_cp04

0xa43f,	// (0x0003949b) thumbnail_qdial_pane_ParamLimits

0xa43f,	// (0x0003949b) thumbnail_qdial_pane

0xa49b,	// (0x000394f7) list_help_pane

0xa4a4,	// (0x00039500) scroll_pane_cp02

0x1508,	// (0x00030564) help_list_pane_t1_ParamLimits

0x1508,	// (0x00030564) help_list_pane_t1

0x1526,	// (0x00030582) bg_notes_pane_g2

0x152e,	// (0x0003058a) bg_notes_pane_g3

0x1536,	// (0x00030592) notes_bg_pane_g1

0x153e,	// (0x0003059a) notes_bg_pane_g4

0x1546,	// (0x000305a2) notes_bg_pane_g5

0x154e,	// (0x000305aa) notes_bg_pane_g6

0x1556,	// (0x000305b2) notes_bg_pane_g7

0x155e,	// (0x000305ba) notes_bg_pane_g8

0x1566,	// (0x000305c2) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0003e1f9) notes_bg_pane_g

0x156e,	// (0x000305ca) list_notes_text_pane_ParamLimits

0x156e,	// (0x000305ca) list_notes_text_pane

0xa4ad,	// (0x00039509) list_notes_text_pane_g1

0x1582,	// (0x000305de) list_notes_text_pane_t1

0x1590,	// (0x000305ec) listscroll_cale_week_pane

0x15c6,	// (0x00030622) bg_cale_heading_pane

0xa4c7,	// (0x00039523) bg_cale_pane_cp01

0x15ef,	// (0x0003064b) cale_week_corner_pane

0x160e,	// (0x0003066a) cale_week_day_heading_pane

0x163c,	// (0x00030698) cale_week_scroll_pane_g1

0x1660,	// (0x000306bc) cale_week_scroll_pane_g2

0x1678,	// (0x000306d4) cale_week_scroll_pane_g3

0x1690,	// (0x000306ec) cale_week_scroll_pane_g4

0x16ac,	// (0x00030708) cale_week_scroll_pane_g5

0x16cc,	// (0x00030728) cale_week_scroll_pane_g6

0x16ec,	// (0x00030748) cale_week_scroll_pane_g7

0x1710,	// (0x0003076c) cale_week_scroll_pane_g8

0x1734,	// (0x00030790) cale_week_scroll_pane_g9

0x1751,	// (0x000307ad) cale_week_scroll_pane_g10

0x176e,	// (0x000307ca) cale_week_scroll_pane_g11

0x178b,	// (0x000307e7) cale_week_scroll_pane_g12

0x17a8,	// (0x00030804) cale_week_scroll_pane_g13

0x17c5,	// (0x00030821) cale_week_scroll_pane_g14

0x17ee,	// (0x0003084a) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0003e208) cale_week_scroll_pane_g

0x183b,	// (0x00030897) cale_week_time_pane

0x185f,	// (0x000308bb) grid_cale_week_pane

0xa4f7,	// (0x00039553) scroll_pane_cp08

0x1896,	// (0x000308f2) cell_cale_week_pane_ParamLimits

0x1896,	// (0x000308f2) cell_cale_week_pane

0x1926,	// (0x00030982) cale_week_day_heading_pane_t1

0x1970,	// (0x000309cc) cale_week_day_heading_pane_t2

0x19bf,	// (0x00030a1b) cale_week_day_heading_pane_t3

0x1a0e,	// (0x00030a6a) cale_week_day_heading_pane_t4

0x1a5d,	// (0x00030ab9) cale_week_day_heading_pane_t5

0x1ab0,	// (0x00030b0c) cale_week_day_heading_pane_t6

0x1b07,	// (0x00030b63) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0003e229) cale_week_day_heading_pane_t

0xa519,	// (0x00039575) bg_cale_side_pane

0xfcd0,	// (0x0002ed2c) cale_week_time_pane_t1

0xfd0a,	// (0x0002ed66) cale_week_time_pane_t2

0xfd44,	// (0x0002eda0) cale_week_time_pane_t3

0xfd7e,	// (0x0002edda) cale_week_time_pane_t4

0xfdb8,	// (0x0002ee14) cale_week_time_pane_t5

0xfdf2,	// (0x0002ee4e) cale_week_time_pane_t6

0xfe2c,	// (0x0002ee88) cale_week_time_pane_t7

0xfe66,	// (0x0002eec2) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0003e238) cale_week_time_pane_t

0x1b51,	// (0x00030bad) cell_cale_week_pane_g2

0x1b70,	// (0x00030bcc) cell_cale_week_pane_g3_ParamLimits

0x1b70,	// (0x00030bcc) cell_cale_week_pane_g3

0xa527,	// (0x00039583) grid_highlight_pane_cp07

0xa52f,	// (0x0003958b) listscroll_gms_pane

0xa539,	// (0x00039595) grid_gms_pane

0xa542,	// (0x0003959e) listscroll_gms_pane_g1

0xa54a,	// (0x000395a6) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0003e249) listscroll_gms_pane_g

0x1b88,	// (0x00030be4) scroll_pane_cp010

0x1b93,	// (0x00030bef) cell_gms_pane_ParamLimits

0x1b93,	// (0x00030bef) cell_gms_pane

0x1bad,	// (0x00030c09) cell_gms_pane_g1

0xa552,	// (0x000395ae) cell_gms_pane_g2

0xa55a,	// (0x000395b6) cell_gms_pane_g3

0xa563,	// (0x000395bf) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0003e24e) cell_gms_pane_g

0xa56c,	// (0x000395c8) grid_highlight_pane_cp09

0x442d,	// (0x00033489) phob_pre_status_pane_g1

0x4435,	// (0x00033491) phob_pre_status_pane_g2

0x443d,	// (0x00033499) phob_pre_status_pane_g3

0x4445,	// (0x000334a1) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0003e63d) phob_pre_status_pane_g

0x4455,	// (0x000334b1) phob_pre_status_pane_t1

0x4465,	// (0x000334c1) phob_pre_status_pane_t2

0x4475,	// (0x000334d1) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0003e648) phob_pre_status_pane_t

0xa080,	// (0x000390dc) bg_list_pane_cp05

0xfeae,	// (0x0002ef0a) grid_vorec_pane

0xfeba,	// (0x0002ef16) vorec_t1

0xfec8,	// (0x0002ef24) vorec_t2

0xfed6,	// (0x0002ef32) vorec_t3

0xfee4,	// (0x0002ef40) vorec_t4

0xfef2,	// (0x0002ef4e) vorec_t5

0x1bb5,	// (0x00030c11) vorec_t6

0x0006,

0xf1fb,	// (0x0003e257) vorec_t

0xff0e,	// (0x0002ef6a) wait_bar_pane_cp01

0x1bc3,	// (0x00030c1f) cell_vorec_pane_ParamLimits

0x1bc3,	// (0x00030c1f) cell_vorec_pane

0x1bd8,	// (0x00030c34) cell_vorec_pane_g1

0xa080,	// (0x000390dc) grid_highlight_pane_cp05

0x1bf8,	// (0x00030c54) cams_zoom_pane

0x1c07,	// (0x00030c63) image_vga_pane

0x1c21,	// (0x00030c7d) main_camera_pane_g1

0x1c33,	// (0x00030c8f) main_camera_pane_g2

0x1c43,	// (0x00030c9f) main_camera_pane_g3

0x1c57,	// (0x00030cb3) main_camera_pane_g4

0x1c6b,	// (0x00030cc7) main_camera_pane_g5

0x1c7f,	// (0x00030cdb) main_camera_pane_g6

0x1c93,	// (0x00030cef) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003e266) main_camera_pane_g

0x1ca7,	// (0x00030d03) main_camera_pane_t1

0x1cbd,	// (0x00030d19) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003e277) main_camera_pane_t

0x1cfb,	// (0x00030d57) cams_zoom_pane_cp_ParamLimits

0x1cfb,	// (0x00030d57) cams_zoom_pane_cp

0x1d23,	// (0x00030d7f) image_cif_pane_ParamLimits

0x1d23,	// (0x00030d7f) image_cif_pane

0x1d5e,	// (0x00030dba) image_subqcif_pane

0x1d68,	// (0x00030dc4) main_video_pane_g1_ParamLimits

0x1d68,	// (0x00030dc4) main_video_pane_g1

0x1d8c,	// (0x00030de8) main_video_pane_g2_ParamLimits

0x1d8c,	// (0x00030de8) main_video_pane_g2

0x1dc2,	// (0x00030e1e) main_video_pane_g3_ParamLimits

0x1dc2,	// (0x00030e1e) main_video_pane_g3

0x1df0,	// (0x00030e4c) main_video_pane_g4_ParamLimits

0x1df0,	// (0x00030e4c) main_video_pane_g4

0x1e1e,	// (0x00030e7a) main_video_pane_g5_ParamLimits

0x1e1e,	// (0x00030e7a) main_video_pane_g5

0xa580,	// (0x000395dc) main_video_pane_g6_ParamLimits

0xa580,	// (0x000395dc) main_video_pane_g6

0x0006,

0xf220,	// (0x0003e27c) main_video_pane_g_ParamLimits

0xf220,	// (0x0003e27c) main_video_pane_g

0x1e47,	// (0x00030ea3) main_video_pane_t1_ParamLimits

0x1e47,	// (0x00030ea3) main_video_pane_t1

0xa59a,	// (0x000395f6) cams_zoom_pane_g1

0xa5a3,	// (0x000395ff) cams_zoom_pane_g2

0xa5ac,	// (0x00039608) cams_zoom_pane_g3

0xa5b5,	// (0x00039611) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003e28b) cams_zoom_pane_g

0x1ea4,	// (0x00030f00) grid_cams_pane

0x1ebe,	// (0x00030f1a) linegrid_cams_pane

0x1ed0,	// (0x00030f2c) cell_cams_pane_ParamLimits

0x1ed0,	// (0x00030f2c) cell_cams_pane

0xa5be,	// (0x0003961a) cams_burst_image_pane

0xa5c6,	// (0x00039622) cell_cams_pane_g1

0xa080,	// (0x000390dc) grid_highlight_pane_cp03

0xa3f5,	// (0x00039451) mp_bg_pane_g1

0xa080,	// (0x000390dc) bg_list_pane_cp03

0xc23a,	// (0x0003b296) bg_mp_pane

0xc242,	// (0x0003b29e) grid_mp_pane

0xc24a,	// (0x0003b2a6) media_player_g1

0xc254,	// (0x0003b2b0) media_player_t1

0xc262,	// (0x0003b2be) media_player_t2

0xc270,	// (0x0003b2cc) media_player_t3

0xc27e,	// (0x0003b2da) media_player_t4

0xc28c,	// (0x0003b2e8) media_player_t5

0xc29a,	// (0x0003b2f6) media_player_t6

0xc2a8,	// (0x0003b304) media_player_t7

0x0006,

0xf5cb,	// (0x0003e627) media_player_t

0xc2b6,	// (0x0003b312) wait_bar_pane_cp02

0xf5b0,	// (0x0003e60c) main_usb_pane_t

0x4424,	// (0x00033480) cell_mp_pane

0xa3f5,	// (0x00039451) cell_mp_pane_g1

0xa080,	// (0x000390dc) grid_highlight_pane_cp06

0xa5ce,	// (0x0003962a) grid_skin_colour_pane

0xa5d6,	// (0x00039632) list_highlight_pane_cp03

0x1ff6,	// (0x00031052) skin_g1

0xa5de,	// (0x0003963a) skin_t1

0xa5ed,	// (0x00039649) skin_t2

0x0001,

0xf264,	// (0x0003e2c0) skin_t

0x1ffe,	// (0x0003105a) cell_skin_colour_pane_ParamLimits

0x1ffe,	// (0x0003105a) cell_skin_colour_pane

0xa5fb,	// (0x00039657) cell_skin_colour_pane_g1

0x2071,	// (0x000310cd) call_video_g1_ParamLimits

0x2071,	// (0x000310cd) call_video_g1

0x208d,	// (0x000310e9) call_video_g2_ParamLimits

0x208d,	// (0x000310e9) call_video_g2

0x0001,

0xf269,	// (0x0003e2c5) call_video_g_ParamLimits

0xf269,	// (0x0003e2c5) call_video_g

0x20d2,	// (0x0003112e) call_video_uplink_pane_cp1_ParamLimits

0x20d2,	// (0x0003112e) call_video_uplink_pane_cp1

0xa60d,	// (0x00039669) call_video_uplink_pane_cp2

0x2173,	// (0x000311cf) video_down_crop_pane_ParamLimits

0x2173,	// (0x000311cf) video_down_crop_pane

0x225c,	// (0x000312b8) video_down_pane_ParamLimits

0x225c,	// (0x000312b8) video_down_pane

0xa615,	// (0x00039671) video_down_subqcif_pane_ParamLimits

0xa615,	// (0x00039671) video_down_subqcif_pane

0xa62f,	// (0x0003968b) video_down_subqcif_pane_cp_ParamLimits

0xa62f,	// (0x0003968b) video_down_subqcif_pane_cp

0xa657,	// (0x000396b3) im_reading_pane_ParamLimits

0xa657,	// (0x000396b3) im_reading_pane

0x2365,	// (0x000313c1) im_writing_pane_ParamLimits

0x2365,	// (0x000313c1) im_writing_pane

0x2381,	// (0x000313dd) im_reading_pane_t1

0xa671,	// (0x000396cd) list_im_pane

0xa682,	// (0x000396de) scroll_pane_cp07

0x23bd,	// (0x00031419) im_writing_pane_t1_ParamLimits

0x23bd,	// (0x00031419) im_writing_pane_t1

0xa69b,	// (0x000396f7) im_writing_pane_t2_ParamLimits

0xa69b,	// (0x000396f7) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003e2cf) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003e2cf) im_writing_pane_t

0xa080,	// (0x000390dc) input_focus_pane_cp04

0xa080,	// (0x000390dc) input_focus_pane_cp05

0x23d2,	// (0x0003142e) list_im_single_pane_ParamLimits

0x23d2,	// (0x0003142e) list_im_single_pane

0x23e8,	// (0x00031444) list_single_im_pane_t1

0x43e4,	// (0x00033440) blid_accuracy_pane

0x43ec,	// (0x00033448) blid_compass_pane

0x43f6,	// (0x00033452) main_location_t1

0x4406,	// (0x00033462) main_location_t2

0x4416,	// (0x00033472) main_location_t3

0x0002,

0xf5da,	// (0x0003e636) main_location_t

0xa080,	// (0x000390dc) aid_levels_location

0xa3f5,	// (0x00039451) blid_accuracy_pane_g1

0xa3f5,	// (0x00039451) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003e331) blid_accuracy_pane_g

0xa6e3,	// (0x0003973f) wml_content_pane

0xa721,	// (0x0003977d) wml_button_pane_ParamLimits

0xa721,	// (0x0003977d) wml_button_pane

0x23f7,	// (0x00031453) wml_list_single_large_pane_ParamLimits

0x23f7,	// (0x00031453) wml_list_single_large_pane

0x240d,	// (0x00031469) wml_list_single_medium_pane_ParamLimits

0x240d,	// (0x00031469) wml_list_single_medium_pane

0x2424,	// (0x00031480) wml_list_single_small_pane_ParamLimits

0x2424,	// (0x00031480) wml_list_single_small_pane

0xa735,	// (0x00039791) wml_selection_box_pane_ParamLimits

0xa735,	// (0x00039791) wml_selection_box_pane

0xa748,	// (0x000397a4) wml_list_single_pane_t1

0xa757,	// (0x000397b3) wml_list_single_medium_pane_t1

0xa766,	// (0x000397c2) wml_list_single_large_pane_t1

0xa775,	// (0x000397d1) input_focus_pane_cp02_ParamLimits

0xa775,	// (0x000397d1) input_focus_pane_cp02

0xa788,	// (0x000397e4) wml_selection_box_pane_g1

0xa791,	// (0x000397ed) wml_selection_box_pane_t1_ParamLimits

0xa791,	// (0x000397ed) wml_selection_box_pane_t1

0xa2db,	// (0x00039337) bg_wml_button_pane_ParamLimits

0xa2db,	// (0x00039337) bg_wml_button_pane

0xa7a9,	// (0x00039805) wml_button_pane_g1

0xa7b1,	// (0x0003980d) wml_button_pane_t1

0xa7a9,	// (0x00039805) wml_button_bg_pane_g1

0xa7c1,	// (0x0003981d) wml_button_bg_pane_g2

0xa7c9,	// (0x00039825) wml_button_bg_pane_g3

0xa7d1,	// (0x0003982d) wml_button_bg_pane_g4

0xa7d9,	// (0x00039835) wml_button_bg_pane_g5

0xa7e1,	// (0x0003983d) wml_button_bg_pane_g6

0xa7e9,	// (0x00039845) wml_button_bg_pane_g7

0xa7f1,	// (0x0003984d) wml_button_bg_pane_g8

0xa7f9,	// (0x00039855) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003e2d4) wml_button_bg_pane_g

0x2440,	// (0x0003149c) bg_list_pane_cp02

0xa801,	// (0x0003985d) mce_header_pane_ParamLimits

0xa801,	// (0x0003985d) mce_header_pane

0xa817,	// (0x00039873) mce_icon_pane

0xa817,	// (0x00039873) mce_image_pane

0xa820,	// (0x0003987c) mce_text_pane_ParamLimits

0xa820,	// (0x0003987c) mce_text_pane

0x244a,	// (0x000314a6) scroll_pane_cp03

0xa719,	// (0x00039775) scroll_pane_cp04

0xa833,	// (0x0003988f) scroll_pane_cp05_ParamLimits

0xa833,	// (0x0003988f) scroll_pane_cp05

0x2454,	// (0x000314b0) mce_header_field_pane_ParamLimits

0x2454,	// (0x000314b0) mce_header_field_pane

0x246d,	// (0x000314c9) mce_header_field_pane_2_ParamLimits

0x246d,	// (0x000314c9) mce_header_field_pane_2

0x2483,	// (0x000314df) mce_header_field_pane_3

0x248b,	// (0x000314e7) list_single_mce_message_pane_ParamLimits

0x248b,	// (0x000314e7) list_single_mce_message_pane

0x24a4,	// (0x00031500) list_single_mce_smart_pane_ParamLimits

0x24a4,	// (0x00031500) list_single_mce_smart_pane

0xa83f,	// (0x0003989b) input_focus_pane_cp03

0xa848,	// (0x000398a4) list_header_data_pane

0x24c8,	// (0x00031524) mce_header_field_pane_t1

0x24d8,	// (0x00031534) list_single_mce_header_pane_ParamLimits

0x24d8,	// (0x00031534) list_single_mce_header_pane

0xa850,	// (0x000398ac) list_single_mce_header_pane_t1

0xa85f,	// (0x000398bb) list_single_mce_message_pane_g1

0xa867,	// (0x000398c3) list_single_mce_message_pane_t1

0x2512,	// (0x0003156e) bg_cale_heading_pane_cp01_ParamLimits

0x2512,	// (0x0003156e) bg_cale_heading_pane_cp01

0xa875,	// (0x000398d1) bg_cale_pane_cp02_ParamLimits

0xa875,	// (0x000398d1) bg_cale_pane_cp02

0x2559,	// (0x000315b5) cale_month_corner_pane

0x2578,	// (0x000315d4) cale_month_day_heading_pane_ParamLimits

0x2578,	// (0x000315d4) cale_month_day_heading_pane

0x25d7,	// (0x00031633) cale_month_pane_g1_ParamLimits

0x25d7,	// (0x00031633) cale_month_pane_g1

0x2613,	// (0x0003166f) cale_month_pane_g2_ParamLimits

0x2613,	// (0x0003166f) cale_month_pane_g2

0x264f,	// (0x000316ab) cale_month_pane_g3_ParamLimits

0x264f,	// (0x000316ab) cale_month_pane_g3

0x26a3,	// (0x000316ff) cale_month_pane_g4_ParamLimits

0x26a3,	// (0x000316ff) cale_month_pane_g4

0x26f7,	// (0x00031753) cale_month_pane_g5_ParamLimits

0x26f7,	// (0x00031753) cale_month_pane_g5

0x2753,	// (0x000317af) cale_month_pane_g6_ParamLimits

0x2753,	// (0x000317af) cale_month_pane_g6

0x27b7,	// (0x00031813) cale_month_pane_g7_ParamLimits

0x27b7,	// (0x00031813) cale_month_pane_g7

0x2823,	// (0x0003187f) cale_month_pane_g8_ParamLimits

0x2823,	// (0x0003187f) cale_month_pane_g8

0x288f,	// (0x000318eb) cale_month_pane_g9_ParamLimits

0x288f,	// (0x000318eb) cale_month_pane_g9

0x28ed,	// (0x00031949) cale_month_pane_g10_ParamLimits

0x28ed,	// (0x00031949) cale_month_pane_g10

0x293f,	// (0x0003199b) cale_month_pane_g11_ParamLimits

0x293f,	// (0x0003199b) cale_month_pane_g11

0x2991,	// (0x000319ed) cale_month_pane_g12_ParamLimits

0x2991,	// (0x000319ed) cale_month_pane_g12

0x29e9,	// (0x00031a45) cale_month_pane_g13_ParamLimits

0x29e9,	// (0x00031a45) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003e2e7) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003e2e7) cale_month_pane_g

0x2a41,	// (0x00031a9d) cale_month_week_pane

0x2a65,	// (0x00031ac1) grid_cale_month_pane_ParamLimits

0x2a65,	// (0x00031ac1) grid_cale_month_pane

0x2abb,	// (0x00031b17) cale_month_day_heading_pane_t1

0x2b41,	// (0x00031b9d) cale_month_day_heading_pane_t2

0x2bd2,	// (0x00031c2e) cale_month_day_heading_pane_t3

0x2c63,	// (0x00031cbf) cale_month_day_heading_pane_t4

0x2cf4,	// (0x00031d50) cale_month_day_heading_pane_t5

0x2d95,	// (0x00031df1) cale_month_day_heading_pane_t6

0x2e3a,	// (0x00031e96) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003e302) cale_month_day_heading_pane_t

0xa519,	// (0x00039575) bg_cale_side_pane_cp01

0x2ee3,	// (0x00031f3f) cale_month_week_pane_t1

0x2efc,	// (0x00031f58) cale_month_week_pane_t2

0x2f15,	// (0x00031f71) cale_month_week_pane_t3

0x2f2e,	// (0x00031f8a) cale_month_week_pane_t4

0x2f47,	// (0x00031fa3) cale_month_week_pane_t5

0x2f60,	// (0x00031fbc) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003e311) cale_month_week_pane_t

0x2f7f,	// (0x00031fdb) cell_cale_month_pane_ParamLimits

0x2f7f,	// (0x00031fdb) cell_cale_month_pane

0x30d3,	// (0x0003212f) cell_cale_month_pane_g1

0xff16,	// (0x0002ef72) cell_cale_month_pane_t1_ParamLimits

0xff16,	// (0x0002ef72) cell_cale_month_pane_t1

0xa527,	// (0x00039583) grid_highlight_pane_cp08

0xa3f5,	// (0x00039451) main_smil_g1

0x30df,	// (0x0003213b) smil_status_pane

0xa8b4,	// (0x00039910) smil_text_pane

0xc14c,	// (0x0003b1a8) bg_popup_call3_rect_pane_g8

0xc154,	// (0x0003b1b0) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003e5ca) bg_popup_call3_rect_pane_g

0xc3ee,	// (0x0003b44a) smil_status_volume_pane_g1

0x30f2,	// (0x0003214e) smil_status_pane_t1

0x4a29,	// (0x00033a85) volume_smil_pane

0xa8be,	// (0x0003991a) list_smil_text_pane

0x310b,	// (0x00032167) scroll_pane_cp011

0x3116,	// (0x00032172) smil_text_list_pane_t1_ParamLimits

0x3116,	// (0x00032172) smil_text_list_pane_t1

0x314f,	// (0x000321ab) aid_volume_smil_ParamLimits

0x314f,	// (0x000321ab) aid_volume_smil

0xa3f5,	// (0x00039451) smil_volume_pane_g1

0xa3f5,	// (0x00039451) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003e331) smil_volume_pane_g

0x1590,	// (0x000305ec) listscroll_cale_day_pane

0xa8c8,	// (0x00039924) bg_cale_pane

0xa8e0,	// (0x0003993c) list_cale_pane

0xa903,	// (0x0003995f) scroll_pane_cp09

0xa914,	// (0x00039970) cale_bg_pane_g1

0xa91c,	// (0x00039978) cale_bg_pane_g2

0xa924,	// (0x00039980) cale_bg_pane_g3

0xa92c,	// (0x00039988) cale_bg_pane_g4

0xa934,	// (0x00039990) cale_bg_pane_g5

0xa93c,	// (0x00039998) cale_bg_pane_g6

0xa944,	// (0x000399a0) cale_bg_pane_g7

0xa94c,	// (0x000399a8) cale_bg_pane_g8

0xa954,	// (0x000399b0) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003e336) cale_bg_pane_g

0x3171,	// (0x000321cd) list_cale_time_pane_ParamLimits

0x3171,	// (0x000321cd) list_cale_time_pane

0xa964,	// (0x000399c0) list_cale_time_pane_g1_ParamLimits

0xa964,	// (0x000399c0) list_cale_time_pane_g1

0xa970,	// (0x000399cc) list_cale_time_pane_g2_ParamLimits

0xa970,	// (0x000399cc) list_cale_time_pane_g2

0x3185,	// (0x000321e1) list_cale_time_pane_g3_ParamLimits

0x3185,	// (0x000321e1) list_cale_time_pane_g3

0x3193,	// (0x000321ef) list_cale_time_pane_g4_ParamLimits

0x3193,	// (0x000321ef) list_cale_time_pane_g4

0x31a1,	// (0x000321fd) list_cale_time_pane_g5_ParamLimits

0x31a1,	// (0x000321fd) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003e349) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003e349) list_cale_time_pane_g

0xa98a,	// (0x000399e6) list_cale_time_pane_t1_ParamLimits

0xa98a,	// (0x000399e6) list_cale_time_pane_t1

0xa9b2,	// (0x00039a0e) list_cale_time_pane_t2_ParamLimits

0xa9b2,	// (0x00039a0e) list_cale_time_pane_t2

0x35af,	// (0x0003260b) aid_blid_cardinal_pane

0x35ed,	// (0x00032649) compass_pane_t4

0xa9da,	// (0x00039a36) list_cale_time_pane_t4_ParamLimits

0xa9da,	// (0x00039a36) list_cale_time_pane_t4

0x35fb,	// (0x00032657) compass_pane_t5

0x3609,	// (0x00032665) compass_pane_t6

0x3617,	// (0x00032673) compass_pane_t7

0xade8,	// (0x00039e44) navi_pane_cc_t1

0xaf49,	// (0x00039fa5) aid_phob_thumbnail_center_pane

0x3daf,	// (0x00032e0b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003e356) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003e356) list_cale_time_pane_t

0x9cd7,	// (0x00038d33) bg_popup_window_pane_cp02_ParamLimits

0x9cd7,	// (0x00038d33) bg_popup_window_pane_cp02

0xaa02,	// (0x00039a5e) heading_pane_cp01_ParamLimits

0xaa02,	// (0x00039a5e) heading_pane_cp01

0xaa0e,	// (0x00039a6a) loc_req_pane_ParamLimits

0xaa0e,	// (0x00039a6a) loc_req_pane

0xaa1e,	// (0x00039a7a) loc_type_pane_ParamLimits

0xaa1e,	// (0x00039a7a) loc_type_pane

0xaa30,	// (0x00039a8c) loc_type_pane_t1_ParamLimits

0xaa30,	// (0x00039a8c) loc_type_pane_t1

0xaa42,	// (0x00039a9e) loc_type_pane_t2_ParamLimits

0xaa42,	// (0x00039a9e) loc_type_pane_t2

0xaa54,	// (0x00039ab0) loc_type_pane_t3_ParamLimits

0xaa54,	// (0x00039ab0) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003e35d) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003e35d) loc_type_pane_t

0xaa66,	// (0x00039ac2) list_loc_req_pane

0xaa70,	// (0x00039acc) scroll_pane_cp012

0x31af,	// (0x0003220b) list_single_loc_request_popup_menu_pane_ParamLimits

0x31af,	// (0x0003220b) list_single_loc_request_popup_menu_pane

0xaa7b,	// (0x00039ad7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa7b,	// (0x00039ad7) list_single_loc_request_popup_menu_pane_g1

0xaa87,	// (0x00039ae3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa87,	// (0x00039ae3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003e364) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003e364) list_single_loc_request_popup_menu_pane_g

0xaa93,	// (0x00039aef) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa93,	// (0x00039aef) list_single_loc_request_popup_menu_pane_t1

0xa2db,	// (0x00039337) bg_popup_window_pane_cp03_ParamLimits

0xa2db,	// (0x00039337) bg_popup_window_pane_cp03

0xaf07,	// (0x00039f63) heading_loc_req_pane_ParamLimits

0xaf07,	// (0x00039f63) heading_loc_req_pane

0x31bc,	// (0x00032218) popup_dyc_status_message_window_g1_ParamLimits

0x31bc,	// (0x00032218) popup_dyc_status_message_window_g1

0x31d0,	// (0x0003222c) popup_dyc_status_message_window_t1_ParamLimits

0x31d0,	// (0x0003222c) popup_dyc_status_message_window_t1

0x31e5,	// (0x00032241) popup_dyc_status_message_window_t2_ParamLimits

0x31e5,	// (0x00032241) popup_dyc_status_message_window_t2

0x31fa,	// (0x00032256) popup_dyc_status_message_window_t3_ParamLimits

0x31fa,	// (0x00032256) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003e369) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003e369) popup_dyc_status_message_window_t

0xa080,	// (0x000390dc) bg_heading_pane_cp01

0xaaa9,	// (0x00039b05) heading_loc_req_pane_g1

0xaab1,	// (0x00039b0d) heading_loc_req_pane_g2

0xaab9,	// (0x00039b15) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003e370) heading_loc_req_pane_g

0xaac1,	// (0x00039b1d) heading_loc_req_pane_t1

0xaad1,	// (0x00039b2d) bg_popup_sub_pane_cp01_ParamLimits

0xaad1,	// (0x00039b2d) bg_popup_sub_pane_cp01

0xaadf,	// (0x00039b3b) popup_cale_events_window_g1_ParamLimits

0xaadf,	// (0x00039b3b) popup_cale_events_window_g1

0xaaff,	// (0x00039b5b) popup_cale_events_window_g2_ParamLimits

0xaaff,	// (0x00039b5b) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003e3a4) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003e3a4) popup_cale_events_window_g

0xab1f,	// (0x00039b7b) popup_cale_events_window_t1_ParamLimits

0xab1f,	// (0x00039b7b) popup_cale_events_window_t1

0xab31,	// (0x00039b8d) popup_cale_events_window_t2_ParamLimits

0xab31,	// (0x00039b8d) popup_cale_events_window_t2

0xab6f,	// (0x00039bcb) popup_cale_events_window_t3_ParamLimits

0xab6f,	// (0x00039bcb) popup_cale_events_window_t3

0xaba9,	// (0x00039c05) popup_cale_events_window_t4_ParamLimits

0xaba9,	// (0x00039c05) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003e3a9) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003e3a9) popup_cale_events_window_t

0x32ff,	// (0x0003235b) call_type_pane

0x330f,	// (0x0003236b) popup_call_status_window_g1

0x3323,	// (0x0003237f) popup_call_status_window_g2

0x3337,	// (0x00032393) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003e3b2) popup_call_status_window_g

0xabdf,	// (0x00039c3b) call_type_pane_g1

0xabe8,	// (0x00039c44) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003e3b9) call_type_pane_g

0xa080,	// (0x000390dc) bg_popup_sub_pane_cp02

0xabf1,	// (0x00039c4d) listscroll_popup_wml_pane

0xabf9,	// (0x00039c55) list_wml_pane

0xac03,	// (0x00039c5f) scroll_pane_cp013

0xac0e,	// (0x00039c6a) list_single_graphic_popup_wml_pane_ParamLimits

0xac0e,	// (0x00039c6a) list_single_graphic_popup_wml_pane

0xa3f5,	// (0x00039451) list_single_graphic_popup_wml_pane_g1

0xac22,	// (0x00039c7e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003e3be) list_single_graphic_popup_wml_pane_g

0xac2a,	// (0x00039c86) list_single_graphic_popup_wml_pane_t1

0xac40,	// (0x00039c9c) aid_call_pane

0xa2d3,	// (0x0003932f) popup_clock_analogue_window_g1

0xa2d3,	// (0x0003932f) popup_clock_analogue_window_g2

0x3347,	// (0x000323a3) popup_clock_analogue_window_g3

0x3347,	// (0x000323a3) popup_clock_analogue_window_g4

0xa3f5,	// (0x00039451) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003e3c3) popup_clock_analogue_window_g

0x334f,	// (0x000323ab) popup_clock_analogue_window_t1

0x335d,	// (0x000323b9) clock_digital_number_pane_ParamLimits

0x335d,	// (0x000323b9) clock_digital_number_pane

0x3369,	// (0x000323c5) clock_digital_number_pane_cp02_ParamLimits

0x3369,	// (0x000323c5) clock_digital_number_pane_cp02

0x3375,	// (0x000323d1) clock_digital_number_pane_cp03_ParamLimits

0x3375,	// (0x000323d1) clock_digital_number_pane_cp03

0x3381,	// (0x000323dd) clock_digital_number_pane_cp04_ParamLimits

0x3381,	// (0x000323dd) clock_digital_number_pane_cp04

0x338d,	// (0x000323e9) clock_digital_separator_pane_ParamLimits

0x338d,	// (0x000323e9) clock_digital_separator_pane

0x3399,	// (0x000323f5) popup_clock_digital_window_t1

0xa3f5,	// (0x00039451) clock_digital_number_pane_g1

0xa3f5,	// (0x00039451) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003e331) clock_digital_number_pane_g

0xa3f5,	// (0x00039451) clock_digital_separator_pane_g1

0xa3f5,	// (0x00039451) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003e331) clock_digital_separator_pane_g

0xa080,	// (0x000390dc) bg_popup_window_pane_cp04

0xac48,	// (0x00039ca4) heading_pane_cp03

0xac50,	// (0x00039cac) listscroll_popup_gms_pane

0xac58,	// (0x00039cb4) grid_large_graphic_popup_pane

0xac62,	// (0x00039cbe) listscroll_popup_gms_pane_g1

0xac6a,	// (0x00039cc6) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003e3ce) listscroll_popup_gms_pane_g

0xa719,	// (0x00039775) scroll_pane_cp014

0x33b6,	// (0x00032412) cell_large_graphic_popup_pane_ParamLimits

0x33b6,	// (0x00032412) cell_large_graphic_popup_pane

0x33ce,	// (0x0003242a) cell_large_graphic_popup_pane_g1_ParamLimits

0x33ce,	// (0x0003242a) cell_large_graphic_popup_pane_g1

0xac72,	// (0x00039cce) cell_large_graphic_popup_pane_g2_ParamLimits

0xac72,	// (0x00039cce) cell_large_graphic_popup_pane_g2

0xac7e,	// (0x00039cda) cell_large_graphic_popup_pane_g3_ParamLimits

0xac7e,	// (0x00039cda) cell_large_graphic_popup_pane_g3

0xac8b,	// (0x00039ce7) cell_large_graphic_popup_pane_g4_ParamLimits

0xac8b,	// (0x00039ce7) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003e3d3) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003e3d3) cell_large_graphic_popup_pane_g

0xac9b,	// (0x00039cf7) grid_highlight_pane_cp010

0xa3f5,	// (0x00039451) bg_popup_call_pane_g1

0xaca5,	// (0x00039d01) list_single_graphic_popup_conf_pane_ParamLimits

0xaca5,	// (0x00039d01) list_single_graphic_popup_conf_pane

0xacb7,	// (0x00039d13) list_highlight_pane_cp01

0xacc0,	// (0x00039d1c) list_single_graphic_popup_conf_pane_g1

0xacc8,	// (0x00039d24) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003e3dc) list_single_graphic_popup_conf_pane_g

0xacd0,	// (0x00039d2c) list_single_graphic_popup_conf_pane_t1

0xacde,	// (0x00039d3a) linegrid_cams_pane_g1

0x33da,	// (0x00032436) linegrid_cams_pane_g2

0xa55a,	// (0x000395b6) linegrid_cams_pane_g3

0xace7,	// (0x00039d43) linegrid_cams_pane_g4

0x33e3,	// (0x0003243f) linegrid_cams_pane_g5

0x33ec,	// (0x00032448) linegrid_cams_pane_g6

0xa563,	// (0x000395bf) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003e3e1) linegrid_cams_pane_g

0xacf0,	// (0x00039d4c) popup_clock_analogue_window

0xacf0,	// (0x00039d4c) popup_clock_digital_window

0xa080,	// (0x000390dc) popup_phob_thumbnail_window

0xa3f5,	// (0x00039451) call_video_uplink_pane_g1

0xacf9,	// (0x00039d55) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003e3f0) call_video_uplink_pane_g

0xad01,	// (0x00039d5d) video_uplink_pane

0xad09,	// (0x00039d65) mce_image_pane_g1

0x33f7,	// (0x00032453) mce_image_pane_g2

0x3401,	// (0x0003245d) mce_image_pane_g3

0x340b,	// (0x00032467) mce_image_pane_g4

0x3413,	// (0x0003246f) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003e3f5) mce_image_pane_g

0xad13,	// (0x00039d6f) control_top_pane_stacon_cp01_ParamLimits

0xad13,	// (0x00039d6f) control_top_pane_stacon_cp01

0xad27,	// (0x00039d83) uni_indicator_pane_stacon_cp01_ParamLimits

0xad27,	// (0x00039d83) uni_indicator_pane_stacon_cp01

0xad38,	// (0x00039d94) bg_popup_sub_pane_cp03

0x341b,	// (0x00032477) chi_dic_find_pane

0x3423,	// (0x0003247f) listscroll_chi_dic_pane

0x342c,	// (0x00032488) main_pane_chidic_g1

0x343f,	// (0x0003249b) chi_dic_find_pane_t1

0xad42,	// (0x00039d9e) find_chidic_pane

0xad4b,	// (0x00039da7) chi_dic_list_pane_ParamLimits

0xad4b,	// (0x00039da7) chi_dic_list_pane

0xad5c,	// (0x00039db8) scroll_pane_cp020

0x344d,	// (0x000324a9) find_chidic_pane_t1

0xa080,	// (0x000390dc) input_focus_pane_cp06

0x12a2,	// (0x000302fe) list_chi_dic_pane_ParamLimits

0x12a2,	// (0x000302fe) list_chi_dic_pane

0x345c,	// (0x000324b8) list_chi_dic_pane_t1_ParamLimits

0x345c,	// (0x000324b8) list_chi_dic_pane_t1

0xa080,	// (0x000390dc) list_highlight_pane_cp020

0xad64,	// (0x00039dc0) bg_cale_heading_pane_g1

0x346f,	// (0x000324cb) bg_cale_heading_pane_g2

0x3477,	// (0x000324d3) bg_cale_heading_pane_g3

0x347f,	// (0x000324db) bg_cale_heading_pane_g4

0x3489,	// (0x000324e5) bg_cale_heading_pane_g5

0x3493,	// (0x000324ef) bg_cale_heading_pane_g6

0x349b,	// (0x000324f7) bg_cale_heading_pane_g7

0x34a3,	// (0x000324ff) bg_cale_heading_pane_g8

0x34ad,	// (0x00032509) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003e400) bg_cale_heading_pane_g

0xad64,	// (0x00039dc0) bg_cale_side_pane_g1

0x34b7,	// (0x00032513) bg_cale_side_pane_g2

0x34c1,	// (0x0003251d) bg_cale_side_pane_g3

0x34cb,	// (0x00032527) bg_cale_side_pane_g4

0x34d5,	// (0x00032531) bg_cale_side_pane_g5

0x34df,	// (0x0003253b) bg_cale_side_pane_g6

0x34e9,	// (0x00032545) bg_cale_side_pane_g7

0x34f3,	// (0x0003254f) bg_cale_side_pane_g8

0x34fb,	// (0x00032557) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003e413) bg_cale_side_pane_g

0x3503,	// (0x0003255f) popup_call_status_window_ParamLimits

0x3503,	// (0x0003255f) popup_call_status_window

0xad6c,	// (0x00039dc8) stacon_top_pane

0xad74,	// (0x00039dd0) status_pane_ParamLimits

0xad74,	// (0x00039dd0) status_pane

0xad89,	// (0x00039de5) status_small_pane

0xad91,	// (0x00039ded) control_pane

0xa080,	// (0x000390dc) stacon_bottom_pane

0xad99,	// (0x00039df5) list_single_mce_smart_pane_t1_ParamLimits

0xad99,	// (0x00039df5) list_single_mce_smart_pane_t1

0xadac,	// (0x00039e08) list_single_mce_smart_pane_t2_ParamLimits

0xadac,	// (0x00039e08) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003e426) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003e426) list_single_mce_smart_pane_t

0x3550,	// (0x000325ac) compass_pane

0x355b,	// (0x000325b7) main_location2_pane_t1

0x356f,	// (0x000325cb) main_location2_pane_t2

0x3585,	// (0x000325e1) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003e42b) main_location2_pane_t

0xadcb,	// (0x00039e27) compass_pane_g1_ParamLimits

0xadcb,	// (0x00039e27) compass_pane_g1

0x35cf,	// (0x0003262b) compass_pane_t1

0x35de,	// (0x0003263a) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003e434) compass_pane_t

0x3625,	// (0x00032681) text_secondary_cp61

0xaddf,	// (0x00039e3b) navi_pane_cams_g5

0xae02,	// (0x00039e5e) navi_pane_im_t1

0xae10,	// (0x00039e6c) navi_pane_mp_g1_ParamLimits

0xae10,	// (0x00039e6c) navi_pane_mp_g1

0xae24,	// (0x00039e80) navi_pane_mp_g2_ParamLimits

0xae24,	// (0x00039e80) navi_pane_mp_g2

0xae30,	// (0x00039e8c) navi_pane_mp_g3_ParamLimits

0xae30,	// (0x00039e8c) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003e448) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003e448) navi_pane_mp_g

0xae3c,	// (0x00039e98) navi_pane_mp_t1

0xae4a,	// (0x00039ea6) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003e44f) navi_pane_mp_t

0xae86,	// (0x00039ee2) navi_pane_vt_g1

0xae3c,	// (0x00039e98) navi_pane_vt_t1

0xae8e,	// (0x00039eea) navi_slider_pane

0xae96,	// (0x00039ef2) zooming_pane

0xae9e,	// (0x00039efa) navi_slider_pane_g1

0x376e,	// (0x000327ca) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003e456) navi_slider_pane_g

0xaec2,	// (0x00039f1e) aid_levels_zoom

0xaeca,	// (0x00039f26) zooming_pane_g1

0xaed2,	// (0x00039f2e) zooming_pane_g2

0xaed2,	// (0x00039f2e) zooming_pane_g3

0x0002,

0xf409,	// (0x0003e465) zooming_pane_g

0xaeda,	// (0x00039f36) level_10_zoom

0xaee3,	// (0x00039f3f) level_11_zoom

0xaeec,	// (0x00039f48) level_1_zoom

0xaef5,	// (0x00039f51) level_2_zoom

0xaefe,	// (0x00039f5a) level_3_zoom

0xaf13,	// (0x00039f6f) level_4_zoom

0xaf1c,	// (0x00039f78) level_5_zoom

0xaf25,	// (0x00039f81) level_6_zoom

0xaf2e,	// (0x00039f8a) level_7_zoom

0xaf37,	// (0x00039f93) level_8_zoom

0xaf40,	// (0x00039f9c) level_9_zoom

0xaf51,	// (0x00039fad) popup_phob_thumbnail_window_g1

0xaf59,	// (0x00039fb5) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003e46c) popup_phob_thumbnail_window_g

0xc2be,	// (0x0003b31a) level_1_location

0xc2c6,	// (0x0003b322) level_2_location

0xc2ce,	// (0x0003b32a) level_3_location

0xc2d6,	// (0x0003b332) level_4_location

0xae96,	// (0x00039ef2) level_5_location

0x3780,	// (0x000327dc) mce_icon_pane_g1

0x378a,	// (0x000327e6) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003e471) mce_icon_pane_g

0x3792,	// (0x000327ee) main_mup_pane_g1_ParamLimits

0x3792,	// (0x000327ee) main_mup_pane_g1

0x37a8,	// (0x00032804) main_mup_pane_g2_ParamLimits

0x37a8,	// (0x00032804) main_mup_pane_g2

0x37c0,	// (0x0003281c) main_mup_pane_g3_ParamLimits

0x37c0,	// (0x0003281c) main_mup_pane_g3

0x37d8,	// (0x00032834) main_mup_pane_g4_ParamLimits

0x37d8,	// (0x00032834) main_mup_pane_g4

0x37f0,	// (0x0003284c) main_mup_pane_g5_ParamLimits

0x37f0,	// (0x0003284c) main_mup_pane_g5

0x380c,	// (0x00032868) main_mup_pane_g6_ParamLimits

0x380c,	// (0x00032868) main_mup_pane_g6

0x3826,	// (0x00032882) main_mup_pane_g7_ParamLimits

0x3826,	// (0x00032882) main_mup_pane_g7

0x3844,	// (0x000328a0) main_mup_pane_g8_ParamLimits

0x3844,	// (0x000328a0) main_mup_pane_g8

0x3862,	// (0x000328be) main_mup_pane_g9_ParamLimits

0x3862,	// (0x000328be) main_mup_pane_g9

0x387e,	// (0x000328da) main_mup_pane_g10_ParamLimits

0x387e,	// (0x000328da) main_mup_pane_g10

0x389c,	// (0x000328f8) main_mup_pane_g11_ParamLimits

0x389c,	// (0x000328f8) main_mup_pane_g11

0x38b6,	// (0x00032912) main_mup_pane_g12_ParamLimits

0x38b6,	// (0x00032912) main_mup_pane_g12

0x38cc,	// (0x00032928) main_mup_pane_g13_ParamLimits

0x38cc,	// (0x00032928) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003e476) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003e476) main_mup_pane_g

0x38e0,	// (0x0003293c) main_mup_pane_t1_ParamLimits

0x38e0,	// (0x0003293c) main_mup_pane_t1

0x38fc,	// (0x00032958) main_mup_pane_t2_ParamLimits

0x38fc,	// (0x00032958) main_mup_pane_t2

0x3914,	// (0x00032970) main_mup_pane_t3_ParamLimits

0x3914,	// (0x00032970) main_mup_pane_t3

0x392c,	// (0x00032988) main_mup_pane_t4_ParamLimits

0x392c,	// (0x00032988) main_mup_pane_t4

0x394a,	// (0x000329a6) main_mup_pane_t5_ParamLimits

0x394a,	// (0x000329a6) main_mup_pane_t5

0x395f,	// (0x000329bb) main_mup_pane_t6_ParamLimits

0x395f,	// (0x000329bb) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003e491) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003e491) main_mup_pane_t

0x3971,	// (0x000329cd) mup_progress_pane_ParamLimits

0x3971,	// (0x000329cd) mup_progress_pane

0x397d,	// (0x000329d9) mup_visualizer_pane_ParamLimits

0x397d,	// (0x000329d9) mup_visualizer_pane

0x39b1,	// (0x00032a0d) mup_volume_pane_ParamLimits

0x39b1,	// (0x00032a0d) mup_volume_pane

0xaf61,	// (0x00039fbd) mup_visualizer_pane_g1_ParamLimits

0xaf61,	// (0x00039fbd) mup_visualizer_pane_g1

0xaf61,	// (0x00039fbd) mup_visualizer_pane_g2_ParamLimits

0xaf61,	// (0x00039fbd) mup_visualizer_pane_g2

0xadcb,	// (0x00039e27) mup_visualizer_pane_g3_ParamLimits

0xadcb,	// (0x00039e27) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003e49e) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003e49e) mup_visualizer_pane_g

0xa3f5,	// (0x00039451) mup_volume_pane_g1

0xaf77,	// (0x00039fd3) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003e4a5) mup_volume_pane_g

0xa3f5,	// (0x00039451) mup_progress_pane_g1

0xaf80,	// (0x00039fdc) mup_progress_pane_g2

0xaf89,	// (0x00039fe5) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003e4aa) mup_progress_pane_g

0xa080,	// (0x000390dc) bg_popup_window_pane_cp05

0xaf92,	// (0x00039fee) heading_pane_cp02_ParamLimits

0xaf92,	// (0x00039fee) heading_pane_cp02

0xafae,	// (0x0003a00a) list_popup_blid_pane

0xafb6,	// (0x0003a012) list_blid_sat_info_pane_ParamLimits

0xafb6,	// (0x0003a012) list_blid_sat_info_pane

0xafc9,	// (0x0003a025) list_blid_sat_info_pane_g1

0xafd1,	// (0x0003a02d) list_blid_sat_info_pane_t1

0x3adb,	// (0x00032b37) mup_equalizer_pane_ParamLimits

0x3adb,	// (0x00032b37) mup_equalizer_pane

0x3afc,	// (0x00032b58) mup_equalizer_pane_cp1_ParamLimits

0x3afc,	// (0x00032b58) mup_equalizer_pane_cp1

0x3b1d,	// (0x00032b79) mup_equalizer_pane_cp2_ParamLimits

0x3b1d,	// (0x00032b79) mup_equalizer_pane_cp2

0x3b42,	// (0x00032b9e) mup_equalizer_pane_cp3_ParamLimits

0x3b42,	// (0x00032b9e) mup_equalizer_pane_cp3

0x3b6b,	// (0x00032bc7) mup_equalizer_pane_cp4_ParamLimits

0x3b6b,	// (0x00032bc7) mup_equalizer_pane_cp4

0x3b94,	// (0x00032bf0) mup_equalizer_pane_cp5

0x3bac,	// (0x00032c08) mup_equalizer_pane_cp6

0x3bc4,	// (0x00032c20) mup_equalizer_pane_cp7

0xc1cc,	// (0x0003b228) bg_popup_call_poc_act_pane_g9

0xc1d4,	// (0x0003b230) bg_popup_call_poc_act_pane_g10

0xc1dc,	// (0x0003b238) bg_popup_call_poc_act_pane_g11

0x000a,

0xa2db,	// (0x00039337) mup_scale_pane

0xa3f5,	// (0x00039451) mup_scale_pane_g1

0xafdf,	// (0x0003a03b) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003e4c6) mup_scale_pane_g

0xb003,	// (0x0003a05f) msg_data_pane

0xb00b,	// (0x0003a067) scroll_pane_cp017

0x3bee,	// (0x00032c4a) bg_list_pane_cp04_ParamLimits

0x3bee,	// (0x00032c4a) bg_list_pane_cp04

0xb01b,	// (0x0003a077) msg_data_pane_g1

0x3c0e,	// (0x00032c6a) msg_data_pane_g2

0x3c18,	// (0x00032c74) msg_data_pane_g3

0x3c22,	// (0x00032c7e) msg_data_pane_g4

0x3c2a,	// (0x00032c86) msg_data_pane_g5

0x3c32,	// (0x00032c8e) msg_data_pane_g6

0x3c3a,	// (0x00032c96) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003e4d5) msg_data_pane_g

0x3c42,	// (0x00032c9e) msg_text_pane_ParamLimits

0x3c42,	// (0x00032c9e) msg_text_pane

0x3c6a,	// (0x00032cc6) qrid_highlight_pane_cp011_ParamLimits

0x3c6a,	// (0x00032cc6) qrid_highlight_pane_cp011

0xa080,	// (0x000390dc) msg_body_pane

0xa080,	// (0x000390dc) msg_header_pane

0xb02c,	// (0x0003a088) input_focus_pane_cp07

0xb041,	// (0x0003a09d) msg_header_pane_t1_ParamLimits

0xb041,	// (0x0003a09d) msg_header_pane_t1

0xb053,	// (0x0003a0af) msg_header_pane_t2_ParamLimits

0xb053,	// (0x0003a0af) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003e4e9) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003e4e9) msg_header_pane_t

0xb065,	// (0x0003a0c1) msg_body_pane_g1

0x3c8e,	// (0x00032cea) msg_body_pane_t1_ParamLimits

0x3c8e,	// (0x00032cea) msg_body_pane_t1

0xb06d,	// (0x0003a0c9) msg_body_pane_t2_ParamLimits

0xb06d,	// (0x0003a0c9) msg_body_pane_t2

0xb07f,	// (0x0003a0db) msg_body_pane_t3_ParamLimits

0xb07f,	// (0x0003a0db) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003e4ee) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003e4ee) msg_body_pane_t

0xff52,	// (0x0002efae) main_viewer_pane_g1_ParamLimits

0xff52,	// (0x0002efae) main_viewer_pane_g1

0xff60,	// (0x0002efbc) main_viewer_pane_g2_ParamLimits

0xff60,	// (0x0002efbc) main_viewer_pane_g2

0x3cf5,	// (0x00032d51) main_viewer_pane_g3_ParamLimits

0x3cf5,	// (0x00032d51) main_viewer_pane_g3

0x3d04,	// (0x00032d60) main_viewer_pane_g4_ParamLimits

0x3d04,	// (0x00032d60) main_viewer_pane_g4

0x3d13,	// (0x00032d6f) main_viewer_pane_g5_ParamLimits

0x3d13,	// (0x00032d6f) main_viewer_pane_g5

0x3d13,	// (0x00032d6f) main_viewer_pane_g7_ParamLimits

0x3d13,	// (0x00032d6f) main_viewer_pane_g7

0x3d25,	// (0x00032d81) main_viewer_pane_g8_ParamLimits

0x3d25,	// (0x00032d81) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003e4fe) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003e4fe) main_viewer_pane_g

0xb091,	// (0x0003a0ed) viewer_content_pane_ParamLimits

0xb091,	// (0x0003a0ed) viewer_content_pane

0x3d6c,	// (0x00032dc8) main_postcard_pane_g1_ParamLimits

0x3d6c,	// (0x00032dc8) main_postcard_pane_g1

0x3d82,	// (0x00032dde) main_postcard_pane_g2_ParamLimits

0x3d82,	// (0x00032dde) main_postcard_pane_g2

0x3d98,	// (0x00032df4) main_postcard_pane_g3_ParamLimits

0x3d98,	// (0x00032df4) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003e50f) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003e50f) main_postcard_pane_g

0x3daf,	// (0x00032e0b) main_postcard_pane_g4

0xc401,	// (0x0003b45d) smil_status_volume_pane_g2

0x3df2,	// (0x00032e4e) postcard_pane_ParamLimits

0x3df2,	// (0x00032e4e) postcard_pane

0xb09f,	// (0x0003a0fb) postcard_pane_g1_ParamLimits

0xb09f,	// (0x0003a0fb) postcard_pane_g1

0x3e42,	// (0x00032e9e) postcard_pane_g2_ParamLimits

0x3e42,	// (0x00032e9e) postcard_pane_g2

0x3e4e,	// (0x00032eaa) postcard_pane_g3_ParamLimits

0x3e4e,	// (0x00032eaa) postcard_pane_g3

0xb0ad,	// (0x0003a109) postcard_pane_g4_ParamLimits

0xb0ad,	// (0x0003a109) postcard_pane_g4

0x3e5a,	// (0x00032eb6) postcard_pane_g5_ParamLimits

0x3e5a,	// (0x00032eb6) postcard_pane_g5

0x3e6f,	// (0x00032ecb) postcard_pane_g6_ParamLimits

0x3e6f,	// (0x00032ecb) postcard_pane_g6

0xb09f,	// (0x0003a0fb) postcard_pane_g7_ParamLimits

0xb09f,	// (0x0003a0fb) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003e51c) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003e51c) postcard_pane_g

0x3e87,	// (0x00032ee3) main_mp2_pane_g1_ParamLimits

0x3e87,	// (0x00032ee3) main_mp2_pane_g1

0x3e95,	// (0x00032ef1) main_mp2_pane_g2_ParamLimits

0x3e95,	// (0x00032ef1) main_mp2_pane_g2

0x3ea1,	// (0x00032efd) main_mp2_pane_g3_ParamLimits

0x3ea1,	// (0x00032efd) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003e52b) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003e52b) main_mp2_pane_g

0x3ead,	// (0x00032f09) main_mp2_pane_t1_ParamLimits

0x3ead,	// (0x00032f09) main_mp2_pane_t1

0x3ec4,	// (0x00032f20) main_mp2_pane_t2_ParamLimits

0x3ec4,	// (0x00032f20) main_mp2_pane_t2

0x3ed6,	// (0x00032f32) main_mp2_pane_t3_ParamLimits

0x3ed6,	// (0x00032f32) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003e532) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003e532) main_mp2_pane_t

0xb0bb,	// (0x0003a117) pec_content_pane_ParamLimits

0xb0bb,	// (0x0003a117) pec_content_pane

0xa719,	// (0x00039775) scroll_pane_cp015

0xb0cd,	// (0x0003a129) pec_attribute_pane_ParamLimits

0xb0cd,	// (0x0003a129) pec_attribute_pane

0x3ee8,	// (0x00032f44) pec_content_pane_g1_ParamLimits

0x3ee8,	// (0x00032f44) pec_content_pane_g1

0xb0dd,	// (0x0003a139) pec_content_pane_t1_ParamLimits

0xb0dd,	// (0x0003a139) pec_content_pane_t1

0xb0ef,	// (0x0003a14b) pec_content_pane_t2_ParamLimits

0xb0ef,	// (0x0003a14b) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003e539) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003e539) pec_content_pane_t

0x3ef4,	// (0x00032f50) list_single_graphic_pane_cp01_ParamLimits

0x3ef4,	// (0x00032f50) list_single_graphic_pane_cp01

0xa2db,	// (0x00039337) bg_popup_sub_pane_cp04

0xb101,	// (0x0003a15d) popup_mup_playback_window_g1

0xb10d,	// (0x0003a169) popup_mup_playback_window_t1

0xb122,	// (0x0003a17e) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003e53e) popup_mup_playback_window_t

0xb159,	// (0x0003a1b5) main_image_pane_g1_ParamLimits

0xb159,	// (0x0003a1b5) main_image_pane_g1

0xb19c,	// (0x0003a1f8) scroll_pane_cp018_ParamLimits

0xb19c,	// (0x0003a1f8) scroll_pane_cp018

0xb1b4,	// (0x0003a210) scroll_pane_cp016_ParamLimits

0xb1b4,	// (0x0003a210) scroll_pane_cp016

0x3fc3,	// (0x0003301f) smil2_image_pane_ParamLimits

0x3fc3,	// (0x0003301f) smil2_image_pane

0x3ff9,	// (0x00033055) smil2_root_pane_ParamLimits

0x3ff9,	// (0x00033055) smil2_root_pane

0x4031,	// (0x0003308d) smil2_text_pane_ParamLimits

0x4031,	// (0x0003308d) smil2_text_pane

0xa080,	// (0x000390dc) bg_list_pane_cp06

0xb1f0,	// (0x0003a24c) grid_radio_pane

0xa080,	// (0x000390dc) bg_popup_window_pane_cp06

0xb1fa,	// (0x0003a256) main_fmradio_pane_t1

0xac48,	// (0x00039ca4) heading_pane_cp04

0xb208,	// (0x0003a264) main_fmradio_pane_t2

0xc1e4,	// (0x0003b240) popup_cale_lunar_info_window_g1

0xb216,	// (0x0003a272) main_fmradio_pane_t3

0xc1ec,	// (0x0003b248) popup_cale_lunar_info_window_g2

0xb226,	// (0x0003a282) main_fmradio_pane_t4

0x0001,

0xb234,	// (0x0003a290) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0003e619) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003e553) main_fmradio_pane_t

0xb242,	// (0x0003a29e) wait_bar_pane_cp03

0xb24a,	// (0x0003a2a6) cell_fmradio_pane_ParamLimits

0xb24a,	// (0x0003a2a6) cell_fmradio_pane

0xb09f,	// (0x0003a0fb) cell_fmradio_pane_g1_ParamLimits

0xb09f,	// (0x0003a0fb) cell_fmradio_pane_g1

0xa080,	// (0x000390dc) grid_highlight_pane_cp011

0xb25f,	// (0x0003a2bb) poc_content_pane_ParamLimits

0xb25f,	// (0x0003a2bb) poc_content_pane

0xb271,	// (0x0003a2cd) scroll_pane_cp019

0x40c1,	// (0x0003311d) popup_call_poc_act_window_ParamLimits

0x40c1,	// (0x0003311d) popup_call_poc_act_window

0x40e5,	// (0x00033141) popup_call_poc_inact_window_ParamLimits

0x40e5,	// (0x00033141) popup_call_poc_inact_window

0xf594,	// (0x0003e5f0) bg_popup_call_poc_act_pane_g

0xc15c,	// (0x0003b1b8) bg_popup_call_poc_inact_pane_g1

0xc164,	// (0x0003b1c0) bg_popup_call_poc_inact_pane_g2

0xb279,	// (0x0003a2d5) popup_call_poc_act_window_g2

0xc16c,	// (0x0003b1c8) bg_popup_call_poc_inact_pane_g3

0xc174,	// (0x0003b1d0) bg_popup_call_poc_inact_pane_g4

0xc17c,	// (0x0003b1d8) bg_popup_call_poc_inact_pane_g5

0xb281,	// (0x0003a2dd) popup_call_poc_act_window_t1_ParamLimits

0xb281,	// (0x0003a2dd) popup_call_poc_act_window_t1

0xb2a9,	// (0x0003a305) popup_call_poc_act_window_t2_ParamLimits

0xb2a9,	// (0x0003a305) popup_call_poc_act_window_t2

0xb2d1,	// (0x0003a32d) popup_call_poc_act_window_t3_ParamLimits

0xb2d1,	// (0x0003a32d) popup_call_poc_act_window_t3

0xb2f9,	// (0x0003a355) popup_call_poc_act_window_t4_ParamLimits

0xb2f9,	// (0x0003a355) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003e55e) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003e55e) popup_call_poc_act_window_t

0xc184,	// (0x0003b1e0) bg_popup_call_poc_inact_pane_g6

0xc18c,	// (0x0003b1e8) bg_popup_call_poc_inact_pane_g7

0xc194,	// (0x0003b1f0) bg_popup_call_poc_inact_pane_g8

0xb30b,	// (0x0003a367) popup_call_poc_inact_window_g2

0xc19c,	// (0x0003b1f8) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0003e5dd) bg_popup_call_poc_inact_pane_g

0xb313,	// (0x0003a36f) popup_call_poc_inact_window_t1_ParamLimits

0xb313,	// (0x0003a36f) popup_call_poc_inact_window_t1

0xb328,	// (0x0003a384) popup_call_poc_inact_window_t2_ParamLimits

0xb328,	// (0x0003a384) popup_call_poc_inact_window_t2

0xb33d,	// (0x0003a399) popup_call_poc_inact_window_t3_ParamLimits

0xb33d,	// (0x0003a399) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003e567) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003e567) popup_call_poc_inact_window_t

0xc374,	// (0x0003b3d0) context_pane_ParamLimits

0x498d,	// (0x000339e9) signal_pane_ParamLimits

0xae96,	// (0x00039ef2) main_call2_pane

0xc362,	// (0x0003b3be) popup_phob_thumbnail2_window_ParamLimits

0xc362,	// (0x0003b3be) popup_phob_thumbnail2_window

0x3cbf,	// (0x00032d1b) aid_hotspot_pointer_arrow_pane

0x3cc7,	// (0x00032d23) aid_hotspot_pointer_hand_pane

0x444d,	// (0x000334a9) phob_pre_status_pane_g5

0x1bf8,	// (0x00030c54) cams_zoom_pane_ParamLimits

0x1c07,	// (0x00030c63) image_vga_pane_ParamLimits

0x1c21,	// (0x00030c7d) main_camera_pane_g1_ParamLimits

0x1c33,	// (0x00030c8f) main_camera_pane_g2_ParamLimits

0x1c43,	// (0x00030c9f) main_camera_pane_g3_ParamLimits

0x1c57,	// (0x00030cb3) main_camera_pane_g4_ParamLimits

0x1c6b,	// (0x00030cc7) main_camera_pane_g5_ParamLimits

0x1c7f,	// (0x00030cdb) main_camera_pane_g6_ParamLimits

0x1c93,	// (0x00030cef) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003e266) main_camera_pane_g_ParamLimits

0x1ca7,	// (0x00030d03) main_camera_pane_t1_ParamLimits

0x1cbd,	// (0x00030d19) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003e277) main_camera_pane_t_ParamLimits

0xa2db,	// (0x00039337) bg_popup_preview_window_pane_cp01_ParamLimits

0xa2db,	// (0x00039337) bg_popup_preview_window_pane_cp01

0xb352,	// (0x0003a3ae) popup_phob_thumbnail2_window_g1_ParamLimits

0xb352,	// (0x0003a3ae) popup_phob_thumbnail2_window_g1

0xa080,	// (0x000390dc) call2_cli_visual_pane

0x4119,	// (0x00033175) popup_call2_audio_conf_window_ParamLimits

0x4119,	// (0x00033175) popup_call2_audio_conf_window

0x4141,	// (0x0003319d) popup_call2_audio_first_window_ParamLimits

0x4141,	// (0x0003319d) popup_call2_audio_first_window

0x41d7,	// (0x00033233) popup_call2_audio_in_window_ParamLimits

0x41d7,	// (0x00033233) popup_call2_audio_in_window

0x4223,	// (0x0003327f) popup_call2_audio_out_window_ParamLimits

0x4223,	// (0x0003327f) popup_call2_audio_out_window

0x4295,	// (0x000332f1) popup_call2_audio_second_window_ParamLimits

0x4295,	// (0x000332f1) popup_call2_audio_second_window

0x42fb,	// (0x00033357) popup_call2_audio_wait_window_ParamLimits

0x42fb,	// (0x00033357) popup_call2_audio_wait_window

0xa080,	// (0x000390dc) bg_popup_call2_act_pane_cp03

0xa2bd,	// (0x00039319) list_conf_pane_cp

0xb35e,	// (0x0003a3ba) popup_call2_audio_conf_window_t1

0xb36c,	// (0x0003a3c8) list_single_graphic_popup_conf2_pane_ParamLimits

0xb36c,	// (0x0003a3c8) list_single_graphic_popup_conf2_pane

0xacb7,	// (0x00039d13) list_highlight_pane_cp04

0xb37f,	// (0x0003a3db) list_single_graphic_popup_conf2_pane_g1

0xacc8,	// (0x00039d24) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003e56e) list_single_graphic_popup_conf2_pane_g

0xb389,	// (0x0003a3e5) list_single_graphic_popup_conf2_pane_t1

0xb397,	// (0x0003a3f3) bg_popup_call2_act_pane_cp01_ParamLimits

0xb397,	// (0x0003a3f3) bg_popup_call2_act_pane_cp01

0xb421,	// (0x0003a47d) call_type_pane_cp05_ParamLimits

0xb421,	// (0x0003a47d) call_type_pane_cp05

0xb475,	// (0x0003a4d1) popup_call2_audio_second_window_g1_ParamLimits

0xb475,	// (0x0003a4d1) popup_call2_audio_second_window_g1

0xb4c9,	// (0x0003a525) popup_call2_audio_second_window_g2_ParamLimits

0xb4c9,	// (0x0003a525) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003e573) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003e573) popup_call2_audio_second_window_g

0xb52e,	// (0x0003a58a) popup_call2_audio_second_window_t1_ParamLimits

0xb52e,	// (0x0003a58a) popup_call2_audio_second_window_t1

0xb5e9,	// (0x0003a645) popup_call2_audio_second_window_t2_ParamLimits

0xb5e9,	// (0x0003a645) popup_call2_audio_second_window_t2

0xb63c,	// (0x0003a698) popup_call2_audio_second_window_t3_ParamLimits

0xb63c,	// (0x0003a698) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003e57a) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003e57a) popup_call2_audio_second_window_t

0xa080,	// (0x000390dc) bg_popup_call2_in_pane_cp02

0xa08a,	// (0x000390e6) call_type_pane_cp04

0xa092,	// (0x000390ee) popup_call2_audio_wait_window_g1

0xa09a,	// (0x000390f6) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0003e151) popup_call2_audio_wait_window_g

0xa0a2,	// (0x000390fe) popup_call2_audio_wait_window_t3

0xb72f,	// (0x0003a78b) bg_popup_call2_act_pane_ParamLimits

0xb72f,	// (0x0003a78b) bg_popup_call2_act_pane

0xb7ef,	// (0x0003a84b) call_type_pane_cp03_ParamLimits

0xb7ef,	// (0x0003a84b) call_type_pane_cp03

0xb853,	// (0x0003a8af) popup_call2_audio_first_window_g1_ParamLimits

0xb853,	// (0x0003a8af) popup_call2_audio_first_window_g1

0xb8c3,	// (0x0003a91f) popup_call2_audio_first_window_g2_ParamLimits

0xb8c3,	// (0x0003a91f) popup_call2_audio_first_window_g2

0xaf61,	// (0x00039fbd) popup_call2_audio_first_window_g3_ParamLimits

0xaf61,	// (0x00039fbd) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003e583) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003e583) popup_call2_audio_first_window_g

0xb9a1,	// (0x0003a9fd) popup_call2_audio_first_window_t1_ParamLimits

0xb9a1,	// (0x0003a9fd) popup_call2_audio_first_window_t1

0xbaa4,	// (0x0003ab00) popup_call2_audio_first_window_t4_ParamLimits

0xbaa4,	// (0x0003ab00) popup_call2_audio_first_window_t4

0xbb87,	// (0x0003abe3) popup_call2_audio_first_window_t5_ParamLimits

0xbb87,	// (0x0003abe3) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003e58e) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003e58e) popup_call2_audio_first_window_t

0xa2d3,	// (0x0003932f) bg_popup_call2_act_pane_g1

0xc1f6,	// (0x0003b252) popup_cale_lunar_info_window_t1

0xc204,	// (0x0003b260) popup_cale_lunar_info_window_t2

0xc21e,	// (0x0003b27a) popup_cale_lunar_info_window_t3

0xa080,	// (0x000390dc) bg_popup_call2_bubble_pane

0xbc88,	// (0x0003ace4) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc88,	// (0x0003ace4) bg_popup_call2_in_pane_cp01

0x9d5c,	// (0x00038db8) call_type_pane_cp02

0xbcd0,	// (0x0003ad2c) popup_call2_audio_out_window_g1_ParamLimits

0xbcd0,	// (0x0003ad2c) popup_call2_audio_out_window_g1

0xbcfc,	// (0x0003ad58) popup_call2_audio_out_window_g2_ParamLimits

0xbcfc,	// (0x0003ad58) popup_call2_audio_out_window_g2

0xbd24,	// (0x0003ad80) popup_call2_audio_out_window_g3_ParamLimits

0xbd24,	// (0x0003ad80) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003e597) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003e597) popup_call2_audio_out_window_g

0xbd5f,	// (0x0003adbb) popup_call2_audio_out_window_t1_ParamLimits

0xbd5f,	// (0x0003adbb) popup_call2_audio_out_window_t1

0xbdbe,	// (0x0003ae1a) popup_call2_audio_out_window_t2_ParamLimits

0xbdbe,	// (0x0003ae1a) popup_call2_audio_out_window_t2

0xbe12,	// (0x0003ae6e) popup_call2_audio_out_window_t3_ParamLimits

0xbe12,	// (0x0003ae6e) popup_call2_audio_out_window_t3

0xbe28,	// (0x0003ae84) popup_call2_audio_out_window_t4_ParamLimits

0xbe28,	// (0x0003ae84) popup_call2_audio_out_window_t4

0xbe3e,	// (0x0003ae9a) popup_call2_audio_out_window_t5_ParamLimits

0xbe3e,	// (0x0003ae9a) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003e5a0) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003e5a0) popup_call2_audio_out_window_t

0xbea2,	// (0x0003aefe) bg_popup_call2_in_pane_ParamLimits

0xbea2,	// (0x0003aefe) bg_popup_call2_in_pane

0xbefe,	// (0x0003af5a) popup_call2_audio_in_window_g1_ParamLimits

0xbefe,	// (0x0003af5a) popup_call2_audio_in_window_g1

0xbf36,	// (0x0003af92) popup_call2_audio_in_window_g2_ParamLimits

0xbf36,	// (0x0003af92) popup_call2_audio_in_window_g2

0xbf6e,	// (0x0003afca) popup_call2_audio_in_window_g3_ParamLimits

0xbf6e,	// (0x0003afca) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003e5ad) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003e5ad) popup_call2_audio_in_window_g

0xbfc6,	// (0x0003b022) popup_call2_audio_in_window_t1_ParamLimits

0xbfc6,	// (0x0003b022) popup_call2_audio_in_window_t1

0xc046,	// (0x0003b0a2) popup_call2_audio_in_window_t2_ParamLimits

0xc046,	// (0x0003b0a2) popup_call2_audio_in_window_t2

0xc0c6,	// (0x0003b122) popup_call2_audio_in_window_t3_ParamLimits

0xc0c6,	// (0x0003b122) popup_call2_audio_in_window_t3

0xc0e0,	// (0x0003b13c) popup_call2_audio_in_window_t4_ParamLimits

0xc0e0,	// (0x0003b13c) popup_call2_audio_in_window_t4

0xc0f2,	// (0x0003b14e) popup_call2_audio_in_window_t5_ParamLimits

0xc0f2,	// (0x0003b14e) popup_call2_audio_in_window_t5

0xc107,	// (0x0003b163) popup_call2_audio_in_window_t6_ParamLimits

0xc107,	// (0x0003b163) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003e5b6) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003e5b6) popup_call2_audio_in_window_t

0xa2d3,	// (0x0003932f) bg_popup_call2_in_pane_g1

0xc22c,	// (0x0003b288) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0003e61e) popup_cale_lunar_info_window_t

0xa2db,	// (0x00039337) bg_popup_call2_rect_pane_ParamLimits

0xa2db,	// (0x00039337) bg_popup_call2_rect_pane

0xa080,	// (0x000390dc) call2_cli_visual_graphic_pane

0xa080,	// (0x000390dc) call2_cli_visual_text_pane

0x4a1c,	// (0x00033a78) smil_status_volume_pane_g3

0x0002,

0xa3f5,	// (0x00039451) call2_cli_visual_graphic_pane_g1

0xa3f5,	// (0x00039451) call2_cli_visual_graphic_pane_g2

0xa3f5,	// (0x00039451) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003e5c3) call2_cli_visual_graphic_pane_g

0xc11c,	// (0x0003b178) bg_popup_call2_rect_pane_g1

0xa493,	// (0x000394ef) bg_popup_call2_rect_pane_g2

0xc124,	// (0x0003b180) bg_popup_call2_rect_pane_g3

0xc12c,	// (0x0003b188) bg_popup_call2_rect_pane_g4

0xc134,	// (0x0003b190) bg_popup_call2_rect_pane_g5

0xc13c,	// (0x0003b198) bg_popup_call2_rect_pane_g6

0xc144,	// (0x0003b1a0) bg_popup_call2_rect_pane_g7

0xc14c,	// (0x0003b1a8) bg_popup_call2_rect_pane_g8

0xc154,	// (0x0003b1b0) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003e5ca) bg_popup_call2_rect_pane_g

0xc15c,	// (0x0003b1b8) bg_popup_call2_bubble_pane_g1

0xc164,	// (0x0003b1c0) bg_popup_call2_bubble_pane_g2

0xc16c,	// (0x0003b1c8) bg_popup_call2_bubble_pane_g3

0xc174,	// (0x0003b1d0) bg_popup_call2_bubble_pane_g4

0xc17c,	// (0x0003b1d8) bg_popup_call2_bubble_pane_g5

0xc184,	// (0x0003b1e0) bg_popup_call2_bubble_pane_g6

0xc18c,	// (0x0003b1e8) bg_popup_call2_bubble_pane_g7

0xc194,	// (0x0003b1f0) bg_popup_call2_bubble_pane_g8

0xc19c,	// (0x0003b1f8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003e5dd) bg_popup_call2_bubble_pane_g

0x15ac,	// (0x00030608) aid_cale_week_size_cell_pane

0x1cd7,	// (0x00030d33) aid_cams_cif_uncrop_pane_ParamLimits

0x1cd7,	// (0x00030d33) aid_cams_cif_uncrop_pane

0x1e90,	// (0x00030eec) aid_cams_size_cell_ParamLimits

0x1e90,	// (0x00030eec) aid_cams_size_cell

0x1ea4,	// (0x00030f00) grid_cams_pane_ParamLimits

0x1ebe,	// (0x00030f1a) linegrid_cams_pane_ParamLimits

0x209e,	// (0x000310fa) call_video_pane_t1

0x20b8,	// (0x00031114) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003e2ca) call_video_pane_t

0x24ec,	// (0x00031548) aid_cale_month_size_cell_pane_ParamLimits

0x24ec,	// (0x00031548) aid_cale_month_size_cell_pane

0xf60b,	// (0x0003e667) smil_status_volume_pane_g

0x4a29,	// (0x00033a85) volume_smil_pane_ParamLimits

0x9c10,	// (0x00038c6c) aid_popup2_width_pane

0x14b4,	// (0x00030510) cell_qdial_pane_g4_ParamLimits

0x14b4,	// (0x00030510) cell_qdial_pane_g4

0x35af,	// (0x0003260b) aid_blid_cardinal_pane_ParamLimits

0x35bb,	// (0x00032617) aid_blid_destination_pane_ParamLimits

0x35bb,	// (0x00032617) aid_blid_destination_pane

0xa2db,	// (0x00039337) bg_popup_call_poc_act_pane_ParamLimits

0xa2db,	// (0x00039337) bg_popup_call_poc_act_pane

0xa2db,	// (0x00039337) bg_popup_call_poc_inact_pane_ParamLimits

0xa2db,	// (0x00039337) bg_popup_call_poc_inact_pane

0xc1a4,	// (0x0003b200) bg_popup_call_poc_act_pane_g1

0xc1ac,	// (0x0003b208) bg_popup_call_poc_act_pane_g2

0xc1b4,	// (0x0003b210) bg_popup_call_poc_act_pane_g3

0xc174,	// (0x0003b1d0) bg_popup_call_poc_act_pane_g4

0xc17c,	// (0x0003b1d8) bg_popup_call_poc_act_pane_g5

0xc1bc,	// (0x0003b218) bg_popup_call_poc_act_pane_g6

0xc18c,	// (0x0003b1e8) bg_popup_call_poc_act_pane_g7

0xc1c4,	// (0x0003b220) bg_popup_call_poc_act_pane_g8

0xa080,	// (0x000390dc) main_usb_pane

0xc339,	// (0x0003b395) popup_cale_lunar_info_window

0x2381,	// (0x000313dd) im_reading_pane_t1_ParamLimits

0xa671,	// (0x000396cd) list_im_pane_ParamLimits

0xa682,	// (0x000396de) scroll_pane_cp07_ParamLimits

0xa080,	// (0x000390dc) grid_highlight_pane_cp012

0xa2db,	// (0x00039337) mup_scale_pane_ParamLimits

0xb09f,	// (0x0003a0fb) main_usb_pane_g1_ParamLimits

0xb09f,	// (0x0003a0fb) main_usb_pane_g1

0x4359,	// (0x000333b5) main_usb_pane_g2_ParamLimits

0x4359,	// (0x000333b5) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0003e607) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0003e607) main_usb_pane_g

0x436f,	// (0x000333cb) main_usb_pane_t1_ParamLimits

0x436f,	// (0x000333cb) main_usb_pane_t1

0x4381,	// (0x000333dd) main_usb_pane_t2_ParamLimits

0x4381,	// (0x000333dd) main_usb_pane_t2

0x4393,	// (0x000333ef) main_usb_pane_t3_ParamLimits

0x4393,	// (0x000333ef) main_usb_pane_t3

0x43a5,	// (0x00033401) main_usb_pane_t4_ParamLimits

0x43a5,	// (0x00033401) main_usb_pane_t4

0x43ba,	// (0x00033416) main_usb_pane_t5_ParamLimits

0x43ba,	// (0x00033416) main_usb_pane_t5

0x43cf,	// (0x0003342b) main_usb_pane_t6_ParamLimits

0x43cf,	// (0x0003342b) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0003e60c) main_usb_pane_t_ParamLimits

0x3550,	// (0x000325ac) aid_text_placing

0x355b,	// (0x000325b7) main_location2_pane_t1_ParamLimits

0x356f,	// (0x000325cb) main_location2_pane_t2_ParamLimits

0x3585,	// (0x000325e1) main_location2_pane_t3_ParamLimits

0x359b,	// (0x000325f7) main_location2_pane_t4_ParamLimits

0x359b,	// (0x000325f7) main_location2_pane_t4

0xf3cf,	// (0x0003e42b) main_location2_pane_t_ParamLimits

0xa317,	// (0x00039373) find_pinb_pane_g2_ParamLimits

0xa317,	// (0x00039373) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0003e177) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0003e177) find_pinb_pane_g

0xa323,	// (0x0003937f) find_pinb_pane_t1_ParamLimits

0xa335,	// (0x00039391) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0003e17c) find_pinb_pane_t_ParamLimits

0xa080,	// (0x000390dc) main_call3_pane

0x2abb,	// (0x00031b17) cale_month_day_heading_pane_t1_ParamLimits

0x2b41,	// (0x00031b9d) cale_month_day_heading_pane_t2_ParamLimits

0x2bd2,	// (0x00031c2e) cale_month_day_heading_pane_t3_ParamLimits

0x2c63,	// (0x00031cbf) cale_month_day_heading_pane_t4_ParamLimits

0x2cf4,	// (0x00031d50) cale_month_day_heading_pane_t5_ParamLimits

0x2d95,	// (0x00031df1) cale_month_day_heading_pane_t6_ParamLimits

0x2e3a,	// (0x00031e96) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003e302) cale_month_day_heading_pane_t_ParamLimits

0x3102,	// (0x0003215e) smil_status_volume_pane

0x3e16,	// (0x00032e72) postcard_address_pane_ParamLimits

0x3e16,	// (0x00032e72) postcard_address_pane

0x3e2c,	// (0x00032e88) postcard_message_pane_ParamLimits

0x3e2c,	// (0x00032e88) postcard_message_pane

0x4335,	// (0x00033391) call2_cli_visual_pane_t1_ParamLimits

0x4335,	// (0x00033391) call2_cli_visual_pane_t1

0x4be6,	// (0x00033c42) postcard_message_pane_t1_ParamLimits

0x4be6,	// (0x00033c42) postcard_message_pane_t1

0x4bcf,	// (0x00033c2b) postcard_address_pane_t1_ParamLimits

0x4bcf,	// (0x00033c2b) postcard_address_pane_t1

0x4bbb,	// (0x00033c17) popup_call3_audio_in_window_ParamLimits

0x4bbb,	// (0x00033c17) popup_call3_audio_in_window

0x4a40,	// (0x00033a9c) bg_popup_call3_in_pane_ParamLimits

0x4a40,	// (0x00033a9c) bg_popup_call3_in_pane

0x4abc,	// (0x00033b18) popup_call3_audio_in_window_g1_ParamLimits

0x4abc,	// (0x00033b18) popup_call3_audio_in_window_g1

0x4adc,	// (0x00033b38) popup_call3_audio_in_window_g2_ParamLimits

0x4adc,	// (0x00033b38) popup_call3_audio_in_window_g2

0x4afc,	// (0x00033b58) popup_call3_audio_in_window_g3_ParamLimits

0x4afc,	// (0x00033b58) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0003e66e) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0003e66e) popup_call3_audio_in_window_g

0x4b2d,	// (0x00033b89) popup_call3_audio_in_window_t1_ParamLimits

0x4b2d,	// (0x00033b89) popup_call3_audio_in_window_t1

0x4b6b,	// (0x00033bc7) popup_call3_audio_in_window_t2_ParamLimits

0x4b6b,	// (0x00033bc7) popup_call3_audio_in_window_t2

0x4ba9,	// (0x00033c05) popup_call3_audio_in_window_t3_ParamLimits

0x4ba9,	// (0x00033c05) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0003e677) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0003e677) popup_call3_audio_in_window_t

0xae96,	// (0x00039ef2) bg_popup_call3_rect_pane

0xc11c,	// (0x0003b178) bg_popup_call3_rect_pane_g1

0xa493,	// (0x000394ef) bg_popup_call3_rect_pane_g2

0xc124,	// (0x0003b180) bg_popup_call3_rect_pane_g3

0xc12c,	// (0x0003b188) bg_popup_call3_rect_pane_g4

0xc134,	// (0x0003b190) bg_popup_call3_rect_pane_g5

0xc13c,	// (0x0003b198) bg_popup_call3_rect_pane_g6

0xc144,	// (0x0003b1a0) bg_popup_call3_rect_pane_g7

0x39c7,	// (0x00032a23) mup_visualizer_osc_pane

0xaf6f,	// (0x00039fcb) mup_visualizer_spec_pane

0x4a70,	// (0x00033acc) call3_video_qcif_pane_ParamLimits

0x4a70,	// (0x00033acc) call3_video_qcif_pane

0x4a83,	// (0x00033adf) call3_video_qcif_uncrop_pane_ParamLimits

0x4a83,	// (0x00033adf) call3_video_qcif_uncrop_pane

0x4a93,	// (0x00033aef) call3_video_subqcif_pane_ParamLimits

0x4a93,	// (0x00033aef) call3_video_subqcif_pane

0x4aa9,	// (0x00033b05) call3_video_subqcif_uncrop_pane_ParamLimits

0x4aa9,	// (0x00033b05) call3_video_subqcif_uncrop_pane

0x4b1c,	// (0x00033b78) popup_call3_audio_in_window_g4_ParamLimits

0x4b1c,	// (0x00033b78) popup_call3_audio_in_window_g4

0x4a0b,	// (0x00033a67) mup_spec_half_pane

0x4a14,	// (0x00033a70) mup_spec_half_pane_cp

0xc3d4,	// (0x0003b430) mup_osc_middle_pane

0xc3dd,	// (0x0003b439) mup_visualizer_osc_pane_g1

0x49eb,	// (0x00033a47) mup_spec_bar_pane_ParamLimits

0x49eb,	// (0x00033a47) mup_spec_bar_pane

0xc3c1,	// (0x0003b41d) mup_spec_bar_pane_g1

0xc3cb,	// (0x0003b427) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003e662) mup_spec_bar_pane_g

0x15ac,	// (0x00030608) aid_cale_week_size_cell_pane_ParamLimits

0x15c6,	// (0x00030622) bg_cale_heading_pane_ParamLimits

0xa4c7,	// (0x00039523) bg_cale_pane_cp01_ParamLimits

0x15ef,	// (0x0003064b) cale_week_corner_pane_ParamLimits

0x160e,	// (0x0003066a) cale_week_day_heading_pane_ParamLimits

0x163c,	// (0x00030698) cale_week_scroll_pane_g1_ParamLimits

0x1660,	// (0x000306bc) cale_week_scroll_pane_g2_ParamLimits

0x1678,	// (0x000306d4) cale_week_scroll_pane_g3_ParamLimits

0x1690,	// (0x000306ec) cale_week_scroll_pane_g4_ParamLimits

0x16ac,	// (0x00030708) cale_week_scroll_pane_g5_ParamLimits

0x16cc,	// (0x00030728) cale_week_scroll_pane_g6_ParamLimits

0x16ec,	// (0x00030748) cale_week_scroll_pane_g7_ParamLimits

0x1710,	// (0x0003076c) cale_week_scroll_pane_g8_ParamLimits

0x1734,	// (0x00030790) cale_week_scroll_pane_g9_ParamLimits

0x1751,	// (0x000307ad) cale_week_scroll_pane_g10_ParamLimits

0x176e,	// (0x000307ca) cale_week_scroll_pane_g11_ParamLimits

0x178b,	// (0x000307e7) cale_week_scroll_pane_g12_ParamLimits

0x17a8,	// (0x00030804) cale_week_scroll_pane_g13_ParamLimits

0x17c5,	// (0x00030821) cale_week_scroll_pane_g14_ParamLimits

0x17ee,	// (0x0003084a) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0003e208) cale_week_scroll_pane_g_ParamLimits

0x183b,	// (0x00030897) cale_week_time_pane_ParamLimits

0x185f,	// (0x000308bb) grid_cale_week_pane_ParamLimits

0xa4e5,	// (0x00039541) listscroll_cale_week_pane_t1

0xa4f7,	// (0x00039553) scroll_pane_cp08_ParamLimits

0x2559,	// (0x000315b5) cale_month_corner_pane_ParamLimits

0xa8a2,	// (0x000398fe) cale_month_pane_t1

0x2a41,	// (0x00031a9d) cale_month_week_pane_ParamLimits

0x330f,	// (0x0003236b) popup_call_status_window_g1_ParamLimits

0x3323,	// (0x0003237f) popup_call_status_window_g2_ParamLimits

0x3337,	// (0x00032393) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003e3b2) popup_call_status_window_g_ParamLimits

0xac38,	// (0x00039c94) aid_call2_pane

0x3c80,	// (0x00032cdc) msg_header_pane_g1

0x3e16,	// (0x00032e72) postcard_address2_pane_ParamLimits

0x3e16,	// (0x00032e72) postcard_address2_pane

0x3e2c,	// (0x00032e88) postcard_message2_pane_ParamLimits

0x3e2c,	// (0x00032e88) postcard_message2_pane

0x499b,	// (0x000339f7) message2_row_pane_ParamLimits

0x499b,	// (0x000339f7) message2_row_pane

0x49b8,	// (0x00033a14) address2_row_pane_ParamLimits

0x49b8,	// (0x00033a14) address2_row_pane

0xc38f,	// (0x0003b3eb) postcard_message2_row_pane_g1

0xc397,	// (0x0003b3f3) postcard_message2_row_pane_t1

0xc38f,	// (0x0003b3eb) address2_row_pane_g1

0xc397,	// (0x0003b3f3) address2_row_pane_t1

0xfea6,	// (0x0002ef02) aid_size_cell_vorec

0xa080,	// (0x000390dc) main_rss_pane

0x49cb,	// (0x00033a27) rss_list_single_pane_ParamLimits

0x49cb,	// (0x00033a27) rss_list_single_pane

0xc3a5,	// (0x0003b401) rss_list_single_pane_t1

0xc3b3,	// (0x0003b40f) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0003e65d) rss_list_single_pane_t

0xa080,	// (0x000390dc) main_camera2_pane

0xa080,	// (0x000390dc) main_video2_pane

0xffc2,	// (0x0002f01e) cams_zoom_pane_cp2_ParamLimits

0xffc2,	// (0x0002f01e) cams_zoom_pane_cp2

0xffd9,	// (0x0002f035) image2_vga_pane_ParamLimits

0xffd9,	// (0x0002f035) image2_vga_pane

0x0021,	// (0x0002f07d) main_camera2_pane_g1_ParamLimits

0x0021,	// (0x0002f07d) main_camera2_pane_g1

0x0041,	// (0x0002f09d) main_camera2_pane_g2_ParamLimits

0x0041,	// (0x0002f09d) main_camera2_pane_g2

0x0058,	// (0x0002f0b4) main_camera2_pane_g3_ParamLimits

0x0058,	// (0x0002f0b4) main_camera2_pane_g3

0x006f,	// (0x0002f0cb) main_camera2_pane_g4_ParamLimits

0x006f,	// (0x0002f0cb) main_camera2_pane_g4

0x0086,	// (0x0002f0e2) main_camera2_pane_g5_ParamLimits

0x0086,	// (0x0002f0e2) main_camera2_pane_g5

0x009d,	// (0x0002f0f9) main_camera2_pane_g6_ParamLimits

0x009d,	// (0x0002f0f9) main_camera2_pane_g6

0x00b4,	// (0x0002f110) main_camera2_pane_g7_ParamLimits

0x00b4,	// (0x0002f110) main_camera2_pane_g7

0x00cb,	// (0x0002f127) main_camera2_pane_g8_ParamLimits

0x00cb,	// (0x0002f127) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0003e67e) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0003e67e) main_camera2_pane_g

0x00f9,	// (0x0002f155) main_camera2_pane_t1_ParamLimits

0x00f9,	// (0x0002f155) main_camera2_pane_t1

0x012e,	// (0x0002f18a) main_camera2_pane_t2_ParamLimits

0x012e,	// (0x0002f18a) main_camera2_pane_t2

0x014b,	// (0x0002f1a7) main_camera2_pane_t3_ParamLimits

0x014b,	// (0x0002f1a7) main_camera2_pane_t3

0x01a9,	// (0x0002f205) main_camera2_pane_t4_ParamLimits

0x01a9,	// (0x0002f205) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0003e691) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0003e691) main_camera2_pane_t

0x0232,	// (0x0002f28e) cams_zoom_pane_cp4_ParamLimits

0x0232,	// (0x0002f28e) cams_zoom_pane_cp4

0x0248,	// (0x0002f2a4) image2_cif_pane_ParamLimits

0x0248,	// (0x0002f2a4) image2_cif_pane

0x0273,	// (0x0002f2cf) image2_subqcif_pane_ParamLimits

0x0273,	// (0x0002f2cf) image2_subqcif_pane

0x028e,	// (0x0002f2ea) main_video2_pane_g1_ParamLimits

0x028e,	// (0x0002f2ea) main_video2_pane_g1

0x02a8,	// (0x0002f304) main_video2_pane_g2_ParamLimits

0x02a8,	// (0x0002f304) main_video2_pane_g2

0x02be,	// (0x0002f31a) main_video2_pane_g3_ParamLimits

0x02be,	// (0x0002f31a) main_video2_pane_g3

0x02d4,	// (0x0002f330) main_video2_pane_g4_ParamLimits

0x02d4,	// (0x0002f330) main_video2_pane_g4

0x02ea,	// (0x0002f346) main_video2_pane_g5_ParamLimits

0x02ea,	// (0x0002f346) main_video2_pane_g5

0x0300,	// (0x0002f35c) main_video2_pane_g6_ParamLimits

0x0300,	// (0x0002f35c) main_video2_pane_g6

0x0005,

0xf644,	// (0x0003e6a0) main_video2_pane_g_ParamLimits

0xf644,	// (0x0003e6a0) main_video2_pane_g

0x031a,	// (0x0002f376) main_video2_pane_t1_ParamLimits

0x031a,	// (0x0002f376) main_video2_pane_t1

0x033e,	// (0x0002f39a) main_video2_pane_t2_ParamLimits

0x033e,	// (0x0002f39a) main_video2_pane_t2

0x038e,	// (0x0002f3ea) main_video2_pane_t3_ParamLimits

0x038e,	// (0x0002f3ea) main_video2_pane_t3

0x0002,

0xf651,	// (0x0003e6ad) main_video2_pane_t_ParamLimits

0xf651,	// (0x0003e6ad) main_video2_pane_t

0x448d,	// (0x000334e9) call_muted_g2

0x0001,

0xf5f3,	// (0x0003e64f) call_muted_g

0xa080,	// (0x000390dc) main_mup2_pane

0x4c2c,	// (0x00033c88) main_mup2_pane_g1_ParamLimits

0x4c2c,	// (0x00033c88) main_mup2_pane_g1

0x4c38,	// (0x00033c94) main_mup2_pane_g2_ParamLimits

0x4c38,	// (0x00033c94) main_mup2_pane_g2

0x4eab,	// (0x00033f07) main_mup_pane_g13_cp1

0x4eb3,	// (0x00033f0f) mup_volume_pane_cp1

0x4c56,	// (0x00033cb2) main_mup2_pane_g4_ParamLimits

0x4c56,	// (0x00033cb2) main_mup2_pane_g4

0x4c68,	// (0x00033cc4) main_mup2_pane_g5_ParamLimits

0x4c68,	// (0x00033cc4) main_mup2_pane_g5

0x4c7a,	// (0x00033cd6) main_mup2_pane_g6_ParamLimits

0x4c7a,	// (0x00033cd6) main_mup2_pane_g6

0x4c8c,	// (0x00033ce8) main_mup2_pane_g7_ParamLimits

0x4c8c,	// (0x00033ce8) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0003e6b4) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0003e6b4) main_mup2_pane_g

0x4ca4,	// (0x00033d00) main_mup2_pane_t1_ParamLimits

0x4ca4,	// (0x00033d00) main_mup2_pane_t1

0x4cba,	// (0x00033d16) main_mup2_pane_t2_ParamLimits

0x4cba,	// (0x00033d16) main_mup2_pane_t2

0x4cd0,	// (0x00033d2c) main_mup2_pane_t3_ParamLimits

0x4cd0,	// (0x00033d2c) main_mup2_pane_t3

0x4ce6,	// (0x00033d42) main_mup2_pane_t4_ParamLimits

0x4ce6,	// (0x00033d42) main_mup2_pane_t4

0x4cfe,	// (0x00033d5a) main_mup2_pane_t5_ParamLimits

0x4cfe,	// (0x00033d5a) main_mup2_pane_t5

0x4d16,	// (0x00033d72) main_mup2_pane_t6_ParamLimits

0x4d16,	// (0x00033d72) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0003e6c3) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0003e6c3) main_mup2_pane_t

0x4d46,	// (0x00033da2) mup2_visualizer_pane_ParamLimits

0x4d46,	// (0x00033da2) mup2_visualizer_pane

0x4d74,	// (0x00033dd0) mup_progress_pane_cp_ParamLimits

0x4d74,	// (0x00033dd0) mup_progress_pane_cp

0x4e96,	// (0x00033ef2) mup_volume_pane_cp_ParamLimits

0x4e96,	// (0x00033ef2) mup_volume_pane_cp

0x4d8a,	// (0x00033de6) mup2_visualizer_pane_g1_ParamLimits

0x4d8a,	// (0x00033de6) mup2_visualizer_pane_g1

0xc414,	// (0x0003b470) mup2_visualizer_pane_g2_ParamLimits

0xc414,	// (0x0003b470) mup2_visualizer_pane_g2

0x4da1,	// (0x00033dfd) mup2_visualizer_pane_g3_ParamLimits

0x4da1,	// (0x00033dfd) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0003e6d0) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0003e6d0) mup2_visualizer_pane_g

0xb1e8,	// (0x0003a244) aid_size_cell_fmradio

0x463d,	// (0x00033699) aid_height_parent_landcape

0xa700,	// (0x0003975c) wml_content_pane_cp

0xa708,	// (0x00039764) wml_tabs_pane

0xa711,	// (0x0003976d) popup_wml_miniature_window

0xa719,	// (0x00039775) scroll_pane_cp021

0xa72d,	// (0x00039789) wml_content_pane_comp8

0xa080,	// (0x000390dc) bg_popup_sub_pane_cp05

0xc432,	// (0x0003b48e) popup_wml_miniature_window_g1

0xc43a,	// (0x0003b496) wml_miniature_view_pane

0x4dad,	// (0x00033e09) aid_size_wml_view

0x4db5,	// (0x00033e11) wml_miniature_view_pane_g1

0x4dbe,	// (0x00033e1a) wml_miniature_view_pane_g2

0x4dc7,	// (0x00033e23) wml_miniature_view_pane_g3

0x4dcf,	// (0x00033e2b) wml_miniature_view_pane_g4

0x4dd7,	// (0x00033e33) wml_miniature_view_pane_g5

0x4ddf,	// (0x00033e3b) wml_miniature_view_pane_g6

0x4de7,	// (0x00033e43) wml_miniature_view_pane_g7

0x4def,	// (0x00033e4b) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0003e6d7) wml_miniature_view_pane_g

0xc442,	// (0x0003b49e) background_graphic_ParamLimits

0xc442,	// (0x0003b49e) background_graphic

0xc44e,	// (0x0003b4aa) wml_tabs_2_pane

0xc457,	// (0x0003b4b3) wml_tabs_3_pane_ParamLimits

0xc457,	// (0x0003b4b3) wml_tabs_3_pane

0xc469,	// (0x0003b4c5) wml_tabs_4_pane_ParamLimits

0xc469,	// (0x0003b4c5) wml_tabs_4_pane

0xc47f,	// (0x0003b4db) wml_tabs_5_pane_ParamLimits

0xc47f,	// (0x0003b4db) wml_tabs_5_pane

0xc499,	// (0x0003b4f5) wml_tabs_pane_g2_ParamLimits

0xc499,	// (0x0003b4f5) wml_tabs_pane_g2

0xc4ad,	// (0x0003b509) wml_tabs_pane_g3_ParamLimits

0xc4ad,	// (0x0003b509) wml_tabs_pane_g3

0x4df7,	// (0x00033e53) wml_tabs_2_active_pane_ParamLimits

0x4df7,	// (0x00033e53) wml_tabs_2_active_pane

0x4e0b,	// (0x00033e67) wml_tabs_2_passive_pane_ParamLimits

0x4e0b,	// (0x00033e67) wml_tabs_2_passive_pane

0x4e1f,	// (0x00033e7b) wml_tabs_3_active_pane_cp_ParamLimits

0x4e1f,	// (0x00033e7b) wml_tabs_3_active_pane_cp

0x4e34,	// (0x00033e90) wml_tabs_3_passive_pane_ParamLimits

0x4e34,	// (0x00033e90) wml_tabs_3_passive_pane

0x4e47,	// (0x00033ea3) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e47,	// (0x00033ea3) wml_tabs_3_passive_pane_cp

0x4e5e,	// (0x00033eba) tabs_4_active_pane

0x4e66,	// (0x00033ec2) tabs_4_passive_pane

0x4e70,	// (0x00033ecc) tabs_4_passive_pane_cp

0x4e78,	// (0x00033ed4) tabs_4_passive_pane_cp2

0x4351,	// (0x000333ad) aid_height_text

0x3999,	// (0x000329f5) mup_volume_cont_pane_ParamLimits

0x3999,	// (0x000329f5) mup_volume_cont_pane

0x1225,	// (0x00030281) aid_size_cell_pinb

0x122f,	// (0x0003028b) aid_size_list_pinb

0x4d60,	// (0x00033dbc) mup2_volume_cont_pane_ParamLimits

0x4d60,	// (0x00033dbc) mup2_volume_cont_pane

0x4e82,	// (0x00033ede) mup2_volume_cont_pane_g1_ParamLimits

0x4e82,	// (0x00033ede) mup2_volume_cont_pane_g1

0x0ee5,	// (0x0002ff41) aid_size_cell_touch_ParamLimits

0x0ee5,	// (0x0002ff41) aid_size_cell_touch

0x1115,	// (0x00030171) touch_pane_ParamLimits

0x1115,	// (0x00030171) touch_pane

0x9bfe,	// (0x00038c5a) main_rss2_pane

0xc4ca,	// (0x0003b526) listscroll_rss2_pane

0xc4d3,	// (0x0003b52f) rss2_navigation_pane

0xc4db,	// (0x0003b537) list_rss2_pane

0xad5c,	// (0x00039db8) scroll_pane_cp22

0xc4e3,	// (0x0003b53f) rss2_navigation_pane_g1

0xc4ec,	// (0x0003b548) rss2_navigation_pane_g2

0xc4f4,	// (0x0003b550) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0003e6e8) rss2_navigation_pane_g

0xc4fc,	// (0x0003b558) rss2_navigation_pane_t1

0x4ebb,	// (0x00033f17) rss2_list_single_pane_ParamLimits

0x4ebb,	// (0x00033f17) rss2_list_single_pane

0xc50a,	// (0x0003b566) rss2_list_single_pane_t2

0xc518,	// (0x0003b574) rss2_list_single_pane_t3_ParamLimits

0xc518,	// (0x0003b574) rss2_list_single_pane_t3

0xc535,	// (0x0003b591) rss2_list_single_pane_t4

0x30ea,	// (0x00032146) smil_status_pane_g1

0x9c5f,	// (0x00038cbb) main_image2_pane_ParamLimits

0x9c5f,	// (0x00038cbb) main_image2_pane

0x00e2,	// (0x0002f13e) main_camera2_pane_g9_ParamLimits

0x00e2,	// (0x0002f13e) main_camera2_pane_g9

0x01fe,	// (0x0002f25a) main_camera2_pane_t5_ParamLimits

0x01fe,	// (0x0002f25a) main_camera2_pane_t5

0x4c01,	// (0x00033c5d) main_camera2_pane_t6_ParamLimits

0x4c01,	// (0x00033c5d) main_camera2_pane_t6

0x4ed1,	// (0x00033f2d) main_image2_pane_g1_ParamLimits

0x4ed1,	// (0x00033f2d) main_image2_pane_g1

0x406b,	// (0x000330c7) smil2_video_pane_ParamLimits

0x406b,	// (0x000330c7) smil2_video_pane

0x9c1c,	// (0x00038c78) aid_zoom_text_primary_cp

0x9c55,	// (0x00038cb1) popup_preview_fixed_window

0xa669,	// (0x000396c5) im_reading_pane_g1

0xffb4,	// (0x0002f010) cams2_bc_adjust_pane_cp_ParamLimits

0xffb4,	// (0x0002f010) cams2_bc_adjust_pane_cp

0x0224,	// (0x0002f280) cams2_bc_adjust_pane_ParamLimits

0x0224,	// (0x0002f280) cams2_bc_adjust_pane

0xc543,	// (0x0003b59f) cams2_bc_adjust_pane_g1

0x4ee7,	// (0x00033f43) cams2_slider_pane

0x4ef0,	// (0x00033f4c) cams2_slider_pane_g1

0x4ef9,	// (0x00033f55) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0003e6ef) cams2_slider_pane_g

0xfbb0,	// (0x0002ec0c) calc_display_pane_ParamLimits

0xfbd8,	// (0x0002ec34) calc_paper_pane_ParamLimits

0xfbfb,	// (0x0002ec57) grid_calc_pane_ParamLimits

0x3399,	// (0x000323f5) popup_clock_digital_window_t1_ParamLimits

0xb185,	// (0x0003a1e1) main_image_pane_t1

0xfb92,	// (0x0002ebee) aid_size_cell_calc_ParamLimits

0xfb92,	// (0x0002ebee) aid_size_cell_calc

0x4683,	// (0x000336df) popup_blid_sat_info2_window_ParamLimits

0x4683,	// (0x000336df) popup_blid_sat_info2_window

0xc553,	// (0x0003b5af) aid_size_cell_blid

0xc55b,	// (0x0003b5b7) bg_popup_window_pane_cp07

0xc57e,	// (0x0003b5da) grid_popup_blid_pane

0xc588,	// (0x0003b5e4) heading_pane_cp05_ParamLimits

0xc588,	// (0x0003b5e4) heading_pane_cp05

0xc652,	// (0x0003b6ae) cell_popup_blid_pane_ParamLimits

0xc652,	// (0x0003b6ae) cell_popup_blid_pane

0xc67c,	// (0x0003b6d8) cell_popup_blid_pane_g1

0xc684,	// (0x0003b6e0) cell_popup_blid_pane_t1

0x4d30,	// (0x00033d8c) mup2_indicator_pane_ParamLimits

0x4d30,	// (0x00033d8c) mup2_indicator_pane

0xae96,	// (0x00039ef2) mup2_visualizer_osc_pane

0xc420,	// (0x0003b47c) mup2_visualizer_spec_pane_ParamLimits

0xc420,	// (0x0003b47c) mup2_visualizer_spec_pane

0x4f13,	// (0x00033f6f) mup2_spec_half_pane

0x4f1c,	// (0x00033f78) mup2_spec_half_pane_cp

0x4f24,	// (0x00033f80) mup2_spec_bar_pane_ParamLimits

0x4f24,	// (0x00033f80) mup2_spec_bar_pane

0xc3c1,	// (0x0003b41d) mup2_spec_bar_pane_g1

0xc3cb,	// (0x0003b427) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003e662) mup2_spec_bar_pane_g

0x4f44,	// (0x00033fa0) mup2_osc_middle_pane

0xc3dd,	// (0x0003b439) mup2_visualizer_osc_pane_g1

0x9c8d,	// (0x00038ce9) popup_number_entry_window_t1_ParamLimits

0x9ca0,	// (0x00038cfc) popup_number_entry_window_t2_ParamLimits

0x9cb2,	// (0x00038d0e) popup_number_entry_window_t3_ParamLimits

0x1167,	// (0x000301c3) popup_number_entry_window_t5_ParamLimits

0x1167,	// (0x000301c3) popup_number_entry_window_t5

0xf0c6,	// (0x0003e122) popup_number_entry_window_t_ParamLimits

0x9cc4,	// (0x00038d20) text_title_cp2_ParamLimits

0x3ccf,	// (0x00032d2b) aid_hotspot_pointer_text2_pane

0x3d31,	// (0x00032d8d) main_viewer_pane_g9_ParamLimits

0x3d31,	// (0x00032d8d) main_viewer_pane_g9

0xa8a2,	// (0x000398fe) cale_month_pane_t1_ParamLimits

0xa8c8,	// (0x00039924) bg_cale_pane_ParamLimits

0xa8e0,	// (0x0003993c) list_cale_pane_ParamLimits

0xa8f1,	// (0x0003994d) listscroll_cale_day_pane_t1

0xa903,	// (0x0003995f) scroll_pane_cp09_ParamLimits

0x39cf,	// (0x00032a2b) main_mup_eq_pane_t1_ParamLimits

0x39cf,	// (0x00032a2b) main_mup_eq_pane_t1

0x39eb,	// (0x00032a47) main_mup_eq_pane_t2_ParamLimits

0x39eb,	// (0x00032a47) main_mup_eq_pane_t2

0x3a07,	// (0x00032a63) main_mup_eq_pane_t3_ParamLimits

0x3a07,	// (0x00032a63) main_mup_eq_pane_t3

0x3a25,	// (0x00032a81) main_mup_eq_pane_t4_ParamLimits

0x3a25,	// (0x00032a81) main_mup_eq_pane_t4

0x3a43,	// (0x00032a9f) main_mup_eq_pane_t5_ParamLimits

0x3a43,	// (0x00032a9f) main_mup_eq_pane_t5

0x3a61,	// (0x00032abd) main_mup_eq_pane_t6_ParamLimits

0x3a61,	// (0x00032abd) main_mup_eq_pane_t6

0x3a77,	// (0x00032ad3) main_mup_eq_pane_t7_ParamLimits

0x3a77,	// (0x00032ad3) main_mup_eq_pane_t7

0x3a8d,	// (0x00032ae9) main_mup_eq_pane_t8_ParamLimits

0x3a8d,	// (0x00032ae9) main_mup_eq_pane_t8

0x3aa3,	// (0x00032aff) main_mup_eq_pane_t9_ParamLimits

0x3aa3,	// (0x00032aff) main_mup_eq_pane_t9

0x3abf,	// (0x00032b1b) main_mup_eq_pane_t10_ParamLimits

0x3abf,	// (0x00032b1b) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003e4b1) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003e4b1) main_mup_eq_pane_t

0x3b94,	// (0x00032bf0) mup_equalizer_pane_cp5_ParamLimits

0x3bac,	// (0x00032c08) mup_equalizer_pane_cp6_ParamLimits

0x3bc4,	// (0x00032c20) mup_equalizer_pane_cp7_ParamLimits

0x9bfe,	// (0x00038c5a) main_gallery_pane

0xc3e6,	// (0x0003b442) smil2_volume_pane

0xc3ee,	// (0x0003b44a) smil_status_volume_pane_g1_ParamLimits

0xc401,	// (0x0003b45d) smil_status_volume_pane_g2_ParamLimits

0x4a1c,	// (0x00033a78) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0003e667) smil_status_volume_pane_g_ParamLimits

0xc55b,	// (0x0003b5b7) bg_popup_window_pane_cp07_ParamLimits

0xc569,	// (0x0003b5c5) blid_firmament_pane

0x4f4d,	// (0x00033fa9) aid_size_cell_gallery_ParamLimits

0x4f4d,	// (0x00033fa9) aid_size_cell_gallery

0x4f63,	// (0x00033fbf) grid_gallery_pane_ParamLimits

0x4f63,	// (0x00033fbf) grid_gallery_pane

0x4f7e,	// (0x00033fda) cell_gallery_pane_ParamLimits

0x4f7e,	// (0x00033fda) cell_gallery_pane

0xc692,	// (0x0003b6ee) bg_cell_gallery_focus_pane_ParamLimits

0xc692,	// (0x0003b6ee) bg_cell_gallery_focus_pane

0xc6a4,	// (0x0003b700) cell_gallery_pane_g1_ParamLimits

0xc6a4,	// (0x0003b700) cell_gallery_pane_g1

0x4fc9,	// (0x00034025) cell_gallery_pane_g2_ParamLimits

0x4fc9,	// (0x00034025) cell_gallery_pane_g2

0x4fd6,	// (0x00034032) cell_gallery_pane_g3_ParamLimits

0x4fd6,	// (0x00034032) cell_gallery_pane_g3

0xc6b0,	// (0x0003b70c) cell_gallery_pane_g4_ParamLimits

0xc6b0,	// (0x0003b70c) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0003e715) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0003e715) cell_gallery_pane_g

0xc6bc,	// (0x0003b718) bg_cell_gallery_focus_pane_g1

0xc6c4,	// (0x0003b720) bg_cell_gallery_focus_pane_g2

0xc6cc,	// (0x0003b728) bg_cell_gallery_focus_pane_g3

0xc6d4,	// (0x0003b730) bg_cell_gallery_focus_pane_g4

0xc6dc,	// (0x0003b738) bg_cell_gallery_focus_pane_g5

0xc6e4,	// (0x0003b740) bg_cell_gallery_focus_pane_g6

0xc6ec,	// (0x0003b748) bg_cell_gallery_focus_pane_g7

0xc6f4,	// (0x0003b750) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0003e71e) bg_cell_gallery_focus_pane_g

0xc6fc,	// (0x0003b758) aid_firma_cardinal

0xc710,	// (0x0003b76c) blid_firmament_pane_t1

0xc727,	// (0x0003b783) blid_firmament_pane_t2

0xc73e,	// (0x0003b79a) blid_firmament_pane_t3

0xc755,	// (0x0003b7b1) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0003e72f) blid_firmament_pane_t

0xc76c,	// (0x0003b7c8) blid_sat_info_pane

0xc77c,	// (0x0003b7d8) blid_sat_info_pane_g1

0xc77c,	// (0x0003b7d8) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0003e738) blid_sat_info_pane_g

0xc786,	// (0x0003b7e2) blid_sat_info_pane_t1

0xc794,	// (0x0003b7f0) smil2_volume_content_pane

0xc79d,	// (0x0003b7f9) smil2_volume_pane_g1

0xc7a5,	// (0x0003b801) smil2_volume_content_pane_g1

0xc7ae,	// (0x0003b80a) smil2_volume_content_pane_g2

0xc7b7,	// (0x0003b813) smil2_volume_content_pane_g3

0xc7c0,	// (0x0003b81c) smil2_volume_content_pane_g4

0xc7c9,	// (0x0003b825) smil2_volume_content_pane_g5

0xc7d2,	// (0x0003b82e) smil2_volume_content_pane_g6

0xc7db,	// (0x0003b837) smil2_volume_content_pane_g7

0xc7e4,	// (0x0003b840) smil2_volume_content_pane_g8

0xc7ed,	// (0x0003b849) smil2_volume_content_pane_g9

0xc7f6,	// (0x0003b852) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0003e73d) smil2_volume_content_pane_g

0x1926,	// (0x00030982) cale_week_day_heading_pane_t1_ParamLimits

0x1970,	// (0x000309cc) cale_week_day_heading_pane_t2_ParamLimits

0x19bf,	// (0x00030a1b) cale_week_day_heading_pane_t3_ParamLimits

0x1a0e,	// (0x00030a6a) cale_week_day_heading_pane_t4_ParamLimits

0x1a5d,	// (0x00030ab9) cale_week_day_heading_pane_t5_ParamLimits

0x1ab0,	// (0x00030b0c) cale_week_day_heading_pane_t6_ParamLimits

0x1b07,	// (0x00030b63) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0003e229) cale_week_day_heading_pane_t_ParamLimits

0xa519,	// (0x00039575) bg_cale_side_pane_ParamLimits

0xfcd0,	// (0x0002ed2c) cale_week_time_pane_t1_ParamLimits

0xfd0a,	// (0x0002ed66) cale_week_time_pane_t2_ParamLimits

0xfd44,	// (0x0002eda0) cale_week_time_pane_t3_ParamLimits

0xfd7e,	// (0x0002edda) cale_week_time_pane_t4_ParamLimits

0xfdb8,	// (0x0002ee14) cale_week_time_pane_t5_ParamLimits

0xfdf2,	// (0x0002ee4e) cale_week_time_pane_t6_ParamLimits

0xfe2c,	// (0x0002ee88) cale_week_time_pane_t7_ParamLimits

0xfe66,	// (0x0002eec2) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0003e238) cale_week_time_pane_t_ParamLimits

0x1b51,	// (0x00030bad) cell_cale_week_pane_g2_ParamLimits

0xa519,	// (0x00039575) bg_cale_side_pane_cp01_ParamLimits

0x2ee3,	// (0x00031f3f) cale_month_week_pane_t1_ParamLimits

0x2efc,	// (0x00031f58) cale_month_week_pane_t2_ParamLimits

0x2f15,	// (0x00031f71) cale_month_week_pane_t3_ParamLimits

0x2f2e,	// (0x00031f8a) cale_month_week_pane_t4_ParamLimits

0x2f47,	// (0x00031fa3) cale_month_week_pane_t5_ParamLimits

0x2f60,	// (0x00031fbc) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003e311) cale_month_week_pane_t_ParamLimits

0x30d3,	// (0x0003212f) cell_cale_month_pane_g1_ParamLimits

0x9bfe,	// (0x00038c5a) main_cale_event_viewer_pane

0x9bfe,	// (0x00038c5a) listscroll_cale_event_viewer_pane

0xc7ff,	// (0x0003b85b) list_cale_ev_pane

0xc807,	// (0x0003b863) scroll_pane_cp023

0x4fe3,	// (0x0003403f) field_cale_ev_pane_ParamLimits

0x4fe3,	// (0x0003403f) field_cale_ev_pane

0xc813,	// (0x0003b86f) field_cale_ev_content_pane_ParamLimits

0xc813,	// (0x0003b86f) field_cale_ev_content_pane

0xc81f,	// (0x0003b87b) field_cale_ev_pane_g1_ParamLimits

0xc81f,	// (0x0003b87b) field_cale_ev_pane_g1

0xc82b,	// (0x0003b887) field_cale_ev_pane_g2_ParamLimits

0xc82b,	// (0x0003b887) field_cale_ev_pane_g2

0xc843,	// (0x0003b89f) field_cale_ev_pane_g3_ParamLimits

0xc843,	// (0x0003b89f) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0003e752) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0003e752) field_cale_ev_pane_g

0xc85b,	// (0x0003b8b7) field_cale_ev_pane_t1_ParamLimits

0xc85b,	// (0x0003b8b7) field_cale_ev_pane_t1

0x5007,	// (0x00034063) field_cale_ev_content_pane_t1_ParamLimits

0x5007,	// (0x00034063) field_cale_ev_content_pane_t1

0xb023,	// (0x0003a07f) bg_button_pane_cp01

0x1590,	// (0x000305ec) listscroll_cale_week_pane_ParamLimits

0x15a2,	// (0x000305fe) popup_toolbar_window_cp01

0xa4e5,	// (0x00039541) listscroll_cale_week_pane_t1_ParamLimits

0x1590,	// (0x000305ec) listscroll_cale_day_pane_ParamLimits

0x15a2,	// (0x000305fe) popup_toolbar_window_cp02

0xa8f1,	// (0x0003994d) listscroll_cale_day_pane_t1_ParamLimits

0x1590,	// (0x000305ec) main_cale_month_pane_ParamLimits

0x4903,	// (0x0003395f) popup_toolbar_window_cp03_ParamLimits

0x4903,	// (0x0003395f) popup_toolbar_window_cp03

0x3f29,	// (0x00032f85) main_image_pane_g2_ParamLimits

0x3f29,	// (0x00032f85) main_image_pane_g2

0x3f3a,	// (0x00032f96) main_image_pane_g3_ParamLimits

0x3f3a,	// (0x00032f96) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003e543) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003e543) main_image_pane_g

0xb185,	// (0x0003a1e1) main_image_pane_t1_ParamLimits

0x3f4b,	// (0x00032fa7) main_image_pane_t2_ParamLimits

0x3f4b,	// (0x00032fa7) main_image_pane_t2

0x3f5d,	// (0x00032fb9) main_image_pane_t3_ParamLimits

0x3f5d,	// (0x00032fb9) main_image_pane_t3

0x3f85,	// (0x00032fe1) main_image_pane_t4_ParamLimits

0x3f85,	// (0x00032fe1) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003e54a) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003e54a) main_image_pane_t

0x3fa5,	// (0x00033001) popup_image_details_window_cp01

0x3faf,	// (0x0003300b) popup_toobar_trans_pane_cp01_ParamLimits

0x3faf,	// (0x0003300b) popup_toobar_trans_pane_cp01

0x4776,	// (0x000337d2) popup_image_details_window_ParamLimits

0x4776,	// (0x000337d2) popup_image_details_window

0xc345,	// (0x0003b3a1) popup_image_focus_window

0xff6e,	// (0x0002efca) camera2_autofocus_pane_ParamLimits

0xff6e,	// (0x0002efca) camera2_autofocus_pane

0x9bfe,	// (0x00038c5a) bg_popup_sub_pane_cp06

0xc872,	// (0x0003b8ce) popup_image_focus_window_g1

0xc87a,	// (0x0003b8d6) popup_image_focus_window_g2

0xc882,	// (0x0003b8de) popup_image_focus_window_g3

0xc88a,	// (0x0003b8e6) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0003e759) popup_image_focus_window_g

0xc892,	// (0x0003b8ee) popup_image_focus_window_t1

0xc8a0,	// (0x0003b8fc) popup_image_focus_window_t2

0xc8b0,	// (0x0003b90c) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0003e762) popup_image_focus_window_t

0xc8be,	// (0x0003b91a) camera2_autofocus_pane_g1

0x9c5f,	// (0x00038cbb) bg_tb_trans_pane_cp01

0xc8cc,	// (0x0003b928) popup_image_details_window_g1

0xc8df,	// (0x0003b93b) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0003e774) popup_image_details_window_g

0xc908,	// (0x0003b964) popup_image_details_window_t1

0xc91a,	// (0x0003b976) popup_image_details_window_t2

0xc933,	// (0x0003b98f) popup_image_details_window_t3

0xc947,	// (0x0003b9a3) popup_image_details_window_t4

0xc962,	// (0x0003b9be) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0003e77b) popup_image_details_window_t

0xa38c,	// (0x000393e8) bg_calc_paper_pane_ParamLimits

0x13db,	// (0x00030437) grid_highlight_pane_cp013

0x13e5,	// (0x00030441) list_calc_pane_ParamLimits

0x13f7,	// (0x00030453) scroll_pane_cp024

0xa3a0,	// (0x000393fc) bg_calc_display_pane_ParamLimits

0xfc29,	// (0x0002ec85) calc_display_pane_t1_ParamLimits

0xfc3b,	// (0x0002ec97) calc_display_pane_t2_ParamLimits

0x13ff,	// (0x0003045b) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0003e1a9) calc_display_pane_t_ParamLimits

0xfca4,	// (0x0002ed00) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0003e1c6) cell_calc_pane_g

0xfcad,	// (0x0002ed09) cell_calc_pane_t1

0xa3ff,	// (0x0003945b) grid_highlight_pane_cp02_ParamLimits

0xa415,	// (0x00039471) toolbar_button_pane_cp01_ParamLimits

0xa415,	// (0x00039471) toolbar_button_pane_cp01

0xb1ca,	// (0x0003a226) temp_image_control_pane_ParamLimits

0xb1ca,	// (0x0003a226) temp_image_control_pane

0x9c5f,	// (0x00038cbb) main_mp3_pane

0xc97c,	// (0x0003b9d8) temp_image_control_pane_g1_ParamLimits

0xc97c,	// (0x0003b9d8) temp_image_control_pane_g1

0xc98a,	// (0x0003b9e6) temp_image_control_pane_g2_ParamLimits

0xc98a,	// (0x0003b9e6) temp_image_control_pane_g2

0xc99c,	// (0x0003b9f8) temp_image_control_pane_g3_ParamLimits

0xc99c,	// (0x0003b9f8) temp_image_control_pane_g3

0x5058,	// (0x000340b4) temp_image_control_pane_g4_ParamLimits

0x5058,	// (0x000340b4) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0003e786) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0003e786) temp_image_control_pane_g

0xc97c,	// (0x0003b9d8) main_mp3_pane_g1

0x506b,	// (0x000340c7) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0003e78f) main_mp3_pane_g

0xc9df,	// (0x0003ba3b) main_mp3_pane_t1

0xa574,	// (0x000395d0) main_camera_pane_g8_ParamLimits

0xa574,	// (0x000395d0) main_camera_pane_g8

0x1e36,	// (0x00030e92) main_video_pane_g7_ParamLimits

0x1e36,	// (0x00030e92) main_video_pane_g7

0x4c1a,	// (0x00033c76) main_camera2_pane_t7_ParamLimits

0x4c1a,	// (0x00033c76) main_camera2_pane_t7

0xa6c0,	// (0x0003971c) scroll_pane_cp025_ParamLimits

0xa6c0,	// (0x0003971c) scroll_pane_cp025

0xa6d4,	// (0x00039730) scroll_pane_cp026_ParamLimits

0xa6d4,	// (0x00039730) scroll_pane_cp026

0xa6e3,	// (0x0003973f) wml_content_pane_ParamLimits

0x9bfe,	// (0x00038c5a) main_touch_calib_pane

0x513d,	// (0x00034199) main_touch_calib_pane_g1

0x514f,	// (0x000341ab) main_touch_calib_pane_g2

0x5161,	// (0x000341bd) main_touch_calib_pane_g3

0x5173,	// (0x000341cf) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0003e7ad) main_touch_calib_pane_g

0x5185,	// (0x000341e1) main_touch_calib_pane_t1

0x519f,	// (0x000341fb) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0003e7b6) main_touch_calib_pane_t

0xadd7,	// (0x00039e33) mup_progress_pane_cp02

0xadf6,	// (0x00039e52) navi_pane_g1

0xae58,	// (0x00039eb4) navi_pane_mp_t3

0x9c5f,	// (0x00038cbb) main_mp3_pane_ParamLimits

0x4945,	// (0x000339a1) navi_pane_ParamLimits

0xc97c,	// (0x0003b9d8) main_mp3_pane_g1_ParamLimits

0x506b,	// (0x000340c7) main_mp3_pane_g2_ParamLimits

0x5077,	// (0x000340d3) main_mp3_pane_g3_ParamLimits

0x5077,	// (0x000340d3) main_mp3_pane_g3

0x5085,	// (0x000340e1) main_mp3_pane_g4_ParamLimits

0x5085,	// (0x000340e1) main_mp3_pane_g4

0xc9ac,	// (0x0003ba08) main_mp3_pane_g5_ParamLimits

0xc9ac,	// (0x0003ba08) main_mp3_pane_g5

0xc9ba,	// (0x0003ba16) main_mp3_pane_g6_ParamLimits

0xc9ba,	// (0x0003ba16) main_mp3_pane_g6

0xc9c7,	// (0x0003ba23) main_mp3_pane_g7_ParamLimits

0xc9c7,	// (0x0003ba23) main_mp3_pane_g7

0xc9d3,	// (0x0003ba2f) main_mp3_pane_g8_ParamLimits

0xc9d3,	// (0x0003ba2f) main_mp3_pane_g8

0xf733,	// (0x0003e78f) main_mp3_pane_g_ParamLimits

0x5091,	// (0x000340ed) main_mp3_pane_t2

0x509f,	// (0x000340fb) main_mp3_pane_t3

0xc9ed,	// (0x0003ba49) main_mp3_pane_t4

0xc9fb,	// (0x0003ba57) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0003e7a0) main_mp3_pane_t

0xca09,	// (0x0003ba65) mup_progress_pane_cp01

0x9c1c,	// (0x00038c78) aid_zoom_text_secondary2

0xc7ff,	// (0x0003b85b) list_cale_ev2_pane

0xc807,	// (0x0003b863) scroll_pane_cp023_ParamLimits

0x51f9,	// (0x00034255) field_cale_ev2_pane_ParamLimits

0x51f9,	// (0x00034255) field_cale_ev2_pane

0x521d,	// (0x00034279) field_cale_ev2_pane_g1_ParamLimits

0x521d,	// (0x00034279) field_cale_ev2_pane_g1

0x5229,	// (0x00034285) field_cale_ev2_pane_g2_ParamLimits

0x5229,	// (0x00034285) field_cale_ev2_pane_g2

0x5241,	// (0x0003429d) field_cale_ev2_pane_g3_ParamLimits

0x5241,	// (0x0003429d) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0003e7c1) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0003e7c1) field_cale_ev2_pane_g

0x5259,	// (0x000342b5) field_cale_ev2_pane_t1_ParamLimits

0x5259,	// (0x000342b5) field_cale_ev2_pane_t1

0x5270,	// (0x000342cc) field_cale_ev2_pane_t2_ParamLimits

0x5270,	// (0x000342cc) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0003e7ca) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0003e7ca) field_cale_ev2_pane_t

0x3dc6,	// (0x00032e22) main_postcard_pane_g5_ParamLimits

0x3dc6,	// (0x00032e22) main_postcard_pane_g5

0x3ddc,	// (0x00032e38) main_postcard_pane_g6_ParamLimits

0x3ddc,	// (0x00032e38) main_postcard_pane_g6

0x1be2,	// (0x00030c3e) camera2_autofocus_pane_cp_ParamLimits

0x1be2,	// (0x00030c3e) camera2_autofocus_pane_cp

0x9c5f,	// (0x00038cbb) main_mup3_pane

0x52a5,	// (0x00034301) main_mup3_pane_g1_ParamLimits

0x52a5,	// (0x00034301) main_mup3_pane_g1

0x52c7,	// (0x00034323) main_mup3_pane_g2_ParamLimits

0x52c7,	// (0x00034323) main_mup3_pane_g2

0x534a,	// (0x000343a6) main_mup3_pane_g3_ParamLimits

0x534a,	// (0x000343a6) main_mup3_pane_g3

0x5392,	// (0x000343ee) main_mup3_pane_g4_ParamLimits

0x5392,	// (0x000343ee) main_mup3_pane_g4

0x53d8,	// (0x00034434) main_mup3_pane_g5_ParamLimits

0x53d8,	// (0x00034434) main_mup3_pane_g5

0x5420,	// (0x0003447c) main_mup3_pane_g6_ParamLimits

0x5420,	// (0x0003447c) main_mup3_pane_g6

0xca1d,	// (0x0003ba79) main_mup3_pane_g7_ParamLimits

0xca1d,	// (0x0003ba79) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0003e7da) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0003e7da) main_mup3_pane_g

0x54a0,	// (0x000344fc) main_mup3_pane_t1_ParamLimits

0x54a0,	// (0x000344fc) main_mup3_pane_t1

0x550e,	// (0x0003456a) main_mup3_pane_t2_ParamLimits

0x550e,	// (0x0003456a) main_mup3_pane_t2

0x55e4,	// (0x00034640) main_mup3_pane_t4_ParamLimits

0x55e4,	// (0x00034640) main_mup3_pane_t4

0x5642,	// (0x0003469e) main_mup3_pane_t5_ParamLimits

0x5642,	// (0x0003469e) main_mup3_pane_t5

0x56fc,	// (0x00034758) main_mup3_pane_t6_ParamLimits

0x56fc,	// (0x00034758) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0003e7eb) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0003e7eb) main_mup3_pane_t

0x57b4,	// (0x00034810) mup3_progress_pane_ParamLimits

0x57b4,	// (0x00034810) mup3_progress_pane

0x5846,	// (0x000348a2) popup_mup3_control_window_ParamLimits

0x5846,	// (0x000348a2) popup_mup3_control_window

0xca2b,	// (0x0003ba87) popup_mup3_text_window

0x587c,	// (0x000348d8) mup3_progress_pane_t1

0x589a,	// (0x000348f6) mup3_progress_pane_t2

0xca33,	// (0x0003ba8f) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0003e7f8) mup3_progress_pane_t

0xca50,	// (0x0003baac) mup_progress_pane_cp03

0x9bfe,	// (0x00038c5a) bg_tb_trans_pane_cp04

0x58b8,	// (0x00034914) mup3_volume_pane

0x58c0,	// (0x0003491c) popup_mup3_control_window_g1

0x58c9,	// (0x00034925) mup3_volume_pane_g1

0x58d2,	// (0x0003492e) mup3_volume_pane_g2

0x58db,	// (0x00034937) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0003e7ff) mup3_volume_pane_g

0x9bfe,	// (0x00038c5a) bg_tb_trans_pane_cp03

0xca60,	// (0x0003babc) popup_mup3_text_window_g1

0xca68,	// (0x0003bac4) popup_mup3_text_window_t1

0xa3e8,	// (0x00039444) list_calc_item_pane_g1_ParamLimits

0xc4c1,	// (0x0003b51d) mup_volume_pane_cp_g1

0x51b9,	// (0x00034215) main_touch_calib_pane_t3

0x51cd,	// (0x00034229) main_touch_calib_pane_t4

0x51e3,	// (0x0003423f) main_touch_calib_pane_t5

0x9c08,	// (0x00038c64) aid_cell_size_toolbar2

0x9c10,	// (0x00038c6c) aid_popup3_width_pane

0x9c1c,	// (0x00038c78) aid_zoom_text_msg_primary

0xff00,	// (0x0002ef5c) vorec_t7

0xa3ac,	// (0x00039408) bg_calc_paper_pane_g1_ParamLimits

0xa3b8,	// (0x00039414) bg_calc_paper_pane_g2_ParamLimits

0xa3c4,	// (0x00039420) bg_calc_paper_pane_g3_ParamLimits

0xa3d0,	// (0x0003942c) bg_calc_paper_pane_g4_ParamLimits

0xa3dc,	// (0x00039438) bg_calc_paper_pane_g5_ParamLimits

0x1411,	// (0x0003046d) bg_calc_paper_pane_g6_ParamLimits

0x1424,	// (0x00030480) bg_calc_paper_pane_g7_ParamLimits

0x1437,	// (0x00030493) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0003e1b0) bg_calc_paper_pane_g_ParamLimits

0x1448,	// (0x000304a4) calc_bg_paper_pane_g9_ParamLimits

0x1d44,	// (0x00030da0) image_qvga_pane_ParamLimits

0x1d44,	// (0x00030da0) image_qvga_pane

0xa2db,	// (0x00039337) bg_popup_sub_pane_cp04_ParamLimits

0xb101,	// (0x0003a15d) popup_mup_playback_window_g1_ParamLimits

0xb10d,	// (0x0003a169) popup_mup_playback_window_t1_ParamLimits

0xb122,	// (0x0003a17e) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003e53e) popup_mup_playback_window_t_ParamLimits

0x4c48,	// (0x00033ca4) main_mup2_pane_g3_ParamLimits

0x4c48,	// (0x00033ca4) main_mup2_pane_g3

0x2137,	// (0x00031193) popup_toolbar_window_cp04

0xb51d,	// (0x0003a579) popup_call2_audio_second_window_g3_ParamLimits

0xb51d,	// (0x0003a579) popup_call2_audio_second_window_g3

0xb927,	// (0x0003a983) popup_call2_audio_first_window_g4_ParamLimits

0xb927,	// (0x0003a983) popup_call2_audio_first_window_g4

0xbfa6,	// (0x0003b002) popup_call2_audio_in_window_g4_ParamLimits

0xbfa6,	// (0x0003b002) popup_call2_audio_in_window_g4

0x3f0b,	// (0x00032f67) aid_area_sk_bg_cut_ParamLimits

0x3f0b,	// (0x00032f67) aid_area_sk_bg_cut

0xb137,	// (0x0003a193) aid_area_sk_bg_cut_2_ParamLimits

0xb137,	// (0x0003a193) aid_area_sk_bg_cut_2

0x4fb9,	// (0x00034015) aid_placing_details_win

0x4fc1,	// (0x0003401d) aid_placing_details_win_2

0xc8be,	// (0x0003b91a) camera2_autofocus_pane_g1_ParamLimits

0x10ae,	// (0x0003010a) popup_fixed_preview_cale_window_ParamLimits

0x10ae,	// (0x0003010a) popup_fixed_preview_cale_window

0xaea7,	// (0x00039f03) navi_slider_pane_g3

0xaeb0,	// (0x00039f0c) navi_slider_pane_g4

0xaeb9,	// (0x00039f15) navi_slider_pane_g5

0xaea7,	// (0x00039f03) navi_slider_pane_g6

0x3777,	// (0x000327d3) navi_slider_pane_g7

0xafe8,	// (0x0003a044) mup_scale_pane_g3

0xaff1,	// (0x0003a04d) mup_scale_pane_g4

0xaffa,	// (0x0003a056) mup_scale_pane_g5

0x3bdc,	// (0x00032c38) mup_scale_pane_g6

0x3be5,	// (0x00032c41) mup_scale_pane_g7

0xaea7,	// (0x00039f03) cams2_slider_pane_g3

0xc54b,	// (0x0003b5a7) cams2_slider_pane_g4

0x4f02,	// (0x00033f5e) cams2_slider_pane_g5

0xaea7,	// (0x00039f03) cams2_slider_pane_g6

0x4f0a,	// (0x00033f66) cams2_slider_pane_g7

0xc77c,	// (0x0003b7d8) camera2_autofocus_pane_cp_g1

0xc317,	// (0x0003b373) bg_popup_preview_window_pane_cp02_ParamLimits

0xc317,	// (0x0003b373) bg_popup_preview_window_pane_cp02

0xca76,	// (0x0003bad2) list_fp_cale_pane_ParamLimits

0xca76,	// (0x0003bad2) list_fp_cale_pane

0xca82,	// (0x0003bade) popup_fixed_preview_cale_window_t1_ParamLimits

0xca82,	// (0x0003bade) popup_fixed_preview_cale_window_t1

0x58e4,	// (0x00034940) popup_fixed_preview_cale_window_t2_ParamLimits

0x58e4,	// (0x00034940) popup_fixed_preview_cale_window_t2

0x58f9,	// (0x00034955) popup_fixed_preview_cale_window_t3_ParamLimits

0x58f9,	// (0x00034955) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0003e806) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0003e806) popup_fixed_preview_cale_window_t

0x590e,	// (0x0003496a) list_single_fp_cale_pane_ParamLimits

0x590e,	// (0x0003496a) list_single_fp_cale_pane

0xcaa0,	// (0x0003bafc) list_single_fp_cale_pane_g1_ParamLimits

0xcaa0,	// (0x0003bafc) list_single_fp_cale_pane_g1

0xcaac,	// (0x0003bb08) list_single_fp_cale_pane_g2_ParamLimits

0xcaac,	// (0x0003bb08) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0003e80d) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0003e80d) list_single_fp_cale_pane_g

0xcac5,	// (0x0003bb21) list_single_fp_cale_pane_t1_ParamLimits

0xcac5,	// (0x0003bb21) list_single_fp_cale_pane_t1

0xcad7,	// (0x0003bb33) list_single_fp_cale_pane_t2_ParamLimits

0xcad7,	// (0x0003bb33) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0003e814) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0003e814) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9bfe,	// (0x00038c5a) main_dialer_pane

0x5923,	// (0x0003497f) aid_cell_size_keypad

0x592d,	// (0x00034989) dialer_ne_pane

0x5937,	// (0x00034993) grid_dialer_command_1_pane

0x593f,	// (0x0003499b) grid_dialer_command_2_pane

0x5947,	// (0x000349a3) grid_dialer_keypad_pane

0x5959,	// (0x000349b5) bg_popup_call_pane_cp06_ParamLimits

0x5959,	// (0x000349b5) bg_popup_call_pane_cp06

0x5965,	// (0x000349c1) dialer_ne_clear_pane_ParamLimits

0x5965,	// (0x000349c1) dialer_ne_clear_pane

0xcb0a,	// (0x0003bb66) dialer_ne_pane_g1

0xcb12,	// (0x0003bb6e) dialer_ne_pane_t1_ParamLimits

0xcb12,	// (0x0003bb6e) dialer_ne_pane_t1

0x5971,	// (0x000349cd) dialer_ne_pane_t2_ParamLimits

0x5971,	// (0x000349cd) dialer_ne_pane_t2

0x599b,	// (0x000349f7) dialer_ne_pane_t3_ParamLimits

0x599b,	// (0x000349f7) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0003e819) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0003e819) dialer_ne_pane_t

0x59cb,	// (0x00034a27) dialer_ne_pane_t3_copy1_ParamLimits

0x59cb,	// (0x00034a27) dialer_ne_pane_t3_copy1

0x59fa,	// (0x00034a56) cell_dialer_keypad_pane_ParamLimits

0x59fa,	// (0x00034a56) cell_dialer_keypad_pane

0x5a11,	// (0x00034a6d) cell_dialer_command_1_pane_ParamLimits

0x5a11,	// (0x00034a6d) cell_dialer_command_1_pane

0x5a27,	// (0x00034a83) cell_dialer_command_2_pane_ParamLimits

0x5a27,	// (0x00034a83) cell_dialer_command_2_pane

0xcb24,	// (0x0003bb80) bg_button_pane_cp02_ParamLimits

0xcb24,	// (0x0003bb80) bg_button_pane_cp02

0x5a36,	// (0x00034a92) cell_dialer_keypad_pane_g1_ParamLimits

0x5a36,	// (0x00034a92) cell_dialer_keypad_pane_g1

0xcb24,	// (0x0003bb80) bg_button_pane_cp03_ParamLimits

0xcb24,	// (0x0003bb80) bg_button_pane_cp03

0x5a4b,	// (0x00034aa7) cell_dialer_command_1_pane_g1_ParamLimits

0x5a4b,	// (0x00034aa7) cell_dialer_command_1_pane_g1

0xcb30,	// (0x0003bb8c) bg_button_pane_cp04

0x5a5f,	// (0x00034abb) cell_dialer_command_2_pane_g1

0xae96,	// (0x00039ef2) bg_button_pane_cp06

0xcb38,	// (0x0003bb94) dialer_ne_clear_pane_g1

0x369c,	// (0x000326f8) navi_pane_g2

0x36ca,	// (0x00032726) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003e441) navi_pane_g

0x36f5,	// (0x00032751) navi_pane_mv_g2

0x371c,	// (0x00032778) navi_pane_mv_g5

0x3724,	// (0x00032780) navi_pane_mv_t1

0xa3a0,	// (0x000393fc) main_clock2_pane

0x5aaa,	// (0x00034b06) main_clock2_list_pane_ParamLimits

0x5aaa,	// (0x00034b06) main_clock2_list_pane

0x5ae2,	// (0x00034b3e) main_clock2_pane_t1_ParamLimits

0x5ae2,	// (0x00034b3e) main_clock2_pane_t1

0x5b1e,	// (0x00034b7a) main_clock2_pane_t2_ParamLimits

0x5b1e,	// (0x00034b7a) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003e825) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003e825) main_clock2_pane_t

0x5bbe,	// (0x00034c1a) popup_clock_analogue_window_cp03_ParamLimits

0x5bbe,	// (0x00034c1a) popup_clock_analogue_window_cp03

0x5be5,	// (0x00034c41) popup_clock_digital_window_cp02_ParamLimits

0x5be5,	// (0x00034c41) popup_clock_digital_window_cp02

0x5c5e,	// (0x00034cba) main_clock2_list_single_pane_ParamLimits

0x5c5e,	// (0x00034cba) main_clock2_list_single_pane

0xae96,	// (0x00039ef2) list_highlight_pane_cp05

0xcb74,	// (0x0003bbd0) main_clock2_list_single_pane_t1

0x2137,	// (0x00031193) popup_toolbar_window_cp04_ParamLimits

0x5028,	// (0x00034084) camera2_autofocus_pane_g2_ParamLimits

0x5028,	// (0x00034084) camera2_autofocus_pane_g2

0x5034,	// (0x00034090) camera2_autofocus_pane_g3_ParamLimits

0x5034,	// (0x00034090) camera2_autofocus_pane_g3

0x5040,	// (0x0003409c) camera2_autofocus_pane_g4_ParamLimits

0x5040,	// (0x0003409c) camera2_autofocus_pane_g4

0x504c,	// (0x000340a8) camera2_autofocus_pane_g5_ParamLimits

0x504c,	// (0x000340a8) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0003e769) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0003e769) camera2_autofocus_pane_g

0x5285,	// (0x000342e1) camera2_autofocus_pane_cp_g2

0x528d,	// (0x000342e9) camera2_autofocus_pane_cp_g3

0x5295,	// (0x000342f1) camera2_autofocus_pane_cp_g4

0x529d,	// (0x000342f9) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0003e7cf) camera2_autofocus_pane_cp_g

0x5951,	// (0x000349ad) popup_dialer_spcha_window

0x9bfe,	// (0x00038c5a) bg_popup_sub_pane_cp07

0xcb82,	// (0x0003bbde) list_spcha_pane

0xcb8a,	// (0x0003bbe6) list_single_spcha_pane_ParamLimits

0xcb8a,	// (0x0003bbe6) list_single_spcha_pane

0x9bfe,	// (0x00038c5a) list_highlight_pane_cp06

0xcb9b,	// (0x0003bbf7) list_single_spcha_pane_t1

0xbd50,	// (0x0003adac) popup_call2_audio_out_window_g4_ParamLimits

0xbd50,	// (0x0003adac) popup_call2_audio_out_window_g4

0x9bfe,	// (0x00038c5a) main_imed2_pane

0xc34f,	// (0x0003b3ab) popup_imed_adjust2_window

0x478e,	// (0x000337ea) popup_imed_trans_window_ParamLimits

0x478e,	// (0x000337ea) popup_imed_trans_window

0xc5b4,	// (0x0003b610) popup_blid_sat_info2_window_t1

0xc5c2,	// (0x0003b61e) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0003e6fe) popup_blid_sat_info2_window_t

0x5c92,	// (0x00034cee) aid_size_cell_colour_35

0x5cb2,	// (0x00034d0e) aid_size_cell_colour_112

0x5cd2,	// (0x00034d2e) aid_size_cell_effect

0xc323,	// (0x0003b37f) bg_tb_trans_pane_cp02

0xaa02,	// (0x00039a5e) heading_imed_pane

0x5cf2,	// (0x00034d4e) listscroll_imed_pane

0xcba9,	// (0x0003bc05) heading_imed_pane_g1

0xcbb1,	// (0x0003bc0d) heading_imed_pane_t1

0xcbbf,	// (0x0003bc1b) grid_imed_colour_35_pane_ParamLimits

0xcbbf,	// (0x0003bc1b) grid_imed_colour_35_pane

0x5cfe,	// (0x00034d5a) grid_imed_effect_pane

0xcbdb,	// (0x0003bc37) list_imed_aspect_pane

0x5d13,	// (0x00034d6f) scroll_pane_cp027_ParamLimits

0x5d13,	// (0x00034d6f) scroll_pane_cp027

0x5d24,	// (0x00034d80) cell_imed_effect_pane_ParamLimits

0x5d24,	// (0x00034d80) cell_imed_effect_pane

0xcbe3,	// (0x0003bc3f) cell_imed_colour_pane_ParamLimits

0xcbe3,	// (0x0003bc3f) cell_imed_colour_pane

0xcc2d,	// (0x0003bc89) cell_imed_colour_pane_g1_ParamLimits

0xcc2d,	// (0x0003bc89) cell_imed_colour_pane_g1

0xcc3e,	// (0x0003bc9a) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc3e,	// (0x0003bc9a) hgihlgiht_grid_pane_cp016

0x5d4f,	// (0x00034dab) cell_imed_effect_pane_g1

0x5d57,	// (0x00034db3) grid_highlight_pane_cp017

0xcc4f,	// (0x0003bcab) list_imed_single_pane_ParamLimits

0xcc4f,	// (0x0003bcab) list_imed_single_pane

0x9bfe,	// (0x00038c5a) list_highlight_pane_cp07

0xcc63,	// (0x0003bcbf) list_imed_aspect_pane_comp1_t1

0xc323,	// (0x0003b37f) bg_tb_trans_pane_cp05

0xcc85,	// (0x0003bce1) popup_imed_adjust2_window_g1

0xccac,	// (0x0003bd08) popup_imed_adjust2_window_t1

0xccc4,	// (0x0003bd20) slider_imed_adjust_pane

0xccd8,	// (0x0003bd34) slider_imed_adjust_pane_g1

0xcce8,	// (0x0003bd44) slider_imed_adjust_pane_g2

0xccf8,	// (0x0003bd54) slider_imed_adjust_pane_g3

0xcd09,	// (0x0003bd65) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003e842) slider_imed_adjust_pane_g

0x5d60,	// (0x00034dbc) aid_size_cell_clipart2

0x5d6c,	// (0x00034dc8) grid_imed_clipart_pane

0xcd1a,	// (0x0003bd76) scroll_pane_cp031

0x5d76,	// (0x00034dd2) cell_imed_clipart_pane_ParamLimits

0x5d76,	// (0x00034dd2) cell_imed_clipart_pane

0x5d93,	// (0x00034def) cell_imed_clipart_pane_g1

0x9bfe,	// (0x00038c5a) grid_highlight_pane_cp014

0x5abf,	// (0x00034b1b) main_clock2_pane_g1_ParamLimits

0x5abf,	// (0x00034b1b) main_clock2_pane_g1

0x5c05,	// (0x00034c61) aid_call2_pane_cp10

0x5c17,	// (0x00034c73) aid_call_pane_cp10

0xadcb,	// (0x00039e27) popup_clock_analogue_window_cp10_g1

0xadcb,	// (0x00039e27) popup_clock_analogue_window_cp10_g2

0x5c29,	// (0x00034c85) popup_clock_analogue_window_cp10_g3

0x5c29,	// (0x00034c85) popup_clock_analogue_window_cp10_g4

0xadcb,	// (0x00039e27) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003e830) popup_clock_analogue_window_cp10_g

0x5c3f,	// (0x00034c9b) popup_clock_analogue_window_cp10_t1

0x03d6,	// (0x0002f432) clock_digital_number_pane_cp10_ParamLimits

0x03d6,	// (0x0002f432) clock_digital_number_pane_cp10

0x03f0,	// (0x0002f44c) clock_digital_number_pane_cp11_ParamLimits

0x03f0,	// (0x0002f44c) clock_digital_number_pane_cp11

0x040a,	// (0x0002f466) clock_digital_number_pane_cp12_ParamLimits

0x040a,	// (0x0002f466) clock_digital_number_pane_cp12

0x0424,	// (0x0002f480) clock_digital_number_pane_cp13_ParamLimits

0x0424,	// (0x0002f480) clock_digital_number_pane_cp13

0x043e,	// (0x0002f49a) clock_digital_separator_pane_cp10_ParamLimits

0x043e,	// (0x0002f49a) clock_digital_separator_pane_cp10

0x5c70,	// (0x00034ccc) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c70,	// (0x00034ccc) popup_clock_digital_window_cp02_t1

0xa2d3,	// (0x0003932f) clock_digital_number_pane_cp10_g1

0xa2d3,	// (0x0003932f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003e84b) clock_digital_number_pane_cp10_g

0xa2d3,	// (0x0003932f) clock_digital_separator_pane_cp10_g1

0xa2d3,	// (0x0003932f) clock_digital_separator_pane_g2_cp10

0xae66,	// (0x00039ec2) navi_pane_vded_g4

0xae6f,	// (0x00039ecb) navi_pane_vded_g5

0xae78,	// (0x00039ed4) navi_pane_vded_t1

0x9bfe,	// (0x00038c5a) main_vded_pane

0x5d9c,	// (0x00034df8) main_vded_pane_g1

0x5da8,	// (0x00034e04) main_vded_pane_g2

0x5db4,	// (0x00034e10) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003e850) main_vded_pane_g

0x5dc0,	// (0x00034e1c) main_vded_pane_t1

0x5dce,	// (0x00034e2a) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003e857) main_vded_pane_t

0x5ddc,	// (0x00034e38) vded_slider_pane

0x5de6,	// (0x00034e42) vded_video_pane

0xcd22,	// (0x0003bd7e) vded_video_pane_g1

0x5df0,	// (0x00034e4c) vded_video_pane_g2

0xc77c,	// (0x0003b7d8) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003e85c) vded_video_pane_g

0xcd2c,	// (0x0003bd88) vded_slider_pane_g1

0xc4c1,	// (0x0003b51d) vded_slider_pane_g2

0xcd35,	// (0x0003bd91) vded_slider_pane_g3

0xcd3e,	// (0x0003bd9a) vded_slider_pane_g4

0xcd47,	// (0x0003bda3) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003e863) vded_slider_pane_g

0x5830,	// (0x0003488c) mup3_rocker_pane_ParamLimits

0x5830,	// (0x0003488c) mup3_rocker_pane

0x5df9,	// (0x00034e55) mup3_control_keys_pane_g1

0x5e01,	// (0x00034e5d) mup3_control_keys_pane_g2

0x5e09,	// (0x00034e65) mup3_control_keys_pane_g3

0x5e11,	// (0x00034e6d) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003e86e) mup3_control_keys_pane_g

0x10e5,	// (0x00030141) popup_toolbar2_fixed_window_cp01_ParamLimits

0x10e5,	// (0x00030141) popup_toolbar2_fixed_window_cp01

0x5866,	// (0x000348c2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5866,	// (0x000348c2) popup_toolbar2_fixed_window_cp02

0xb68f,	// (0x0003a6eb) popup_call2_audio_second_window_t4_ParamLimits

0xb68f,	// (0x0003a6eb) popup_call2_audio_second_window_t4

0xbbbd,	// (0x0003ac19) popup_call2_audio_first_window_t6_ParamLimits

0xbbbd,	// (0x0003ac19) popup_call2_audio_first_window_t6

0xbe53,	// (0x0003aeaf) popup_call2_audio_out_window_t6_ParamLimits

0xbe53,	// (0x0003aeaf) popup_call2_audio_out_window_t6

0x9bfe,	// (0x00038c5a) main_vitu_pane

0x5e21,	// (0x00034e7d) aid_size_cell_itu_ParamLimits

0x5e21,	// (0x00034e7d) aid_size_cell_itu

0x9c5f,	// (0x00038cbb) bg_popup_window_pane_cp08_ParamLimits

0x9c5f,	// (0x00038cbb) bg_popup_window_pane_cp08

0x5e37,	// (0x00034e93) field_vitu_entry_pane_ParamLimits

0x5e37,	// (0x00034e93) field_vitu_entry_pane

0x5e4e,	// (0x00034eaa) grid_vitu_function_pane_ParamLimits

0x5e4e,	// (0x00034eaa) grid_vitu_function_pane

0x5e69,	// (0x00034ec5) grid_vitu_itu_pane_ParamLimits

0x5e69,	// (0x00034ec5) grid_vitu_itu_pane

0x5e87,	// (0x00034ee3) cell_vitu_itu_pane_ParamLimits

0x5e87,	// (0x00034ee3) cell_vitu_itu_pane

0x5ead,	// (0x00034f09) cell_vitu_function_pane_ParamLimits

0x5ead,	// (0x00034f09) cell_vitu_function_pane

0x9c5f,	// (0x00038cbb) bg_popup_sub_pane_cp08_ParamLimits

0x9c5f,	// (0x00038cbb) bg_popup_sub_pane_cp08

0x5ec8,	// (0x00034f24) field_vitu_entry_pane_t1_ParamLimits

0x5ec8,	// (0x00034f24) field_vitu_entry_pane_t1

0xcd68,	// (0x0003bdc4) field_vitu_entry_pane_t2_ParamLimits

0xcd68,	// (0x0003bdc4) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003e87c) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003e87c) field_vitu_entry_pane_t

0xcd85,	// (0x0003bde1) bg_button_pane_cp05_ParamLimits

0xcd85,	// (0x0003bde1) bg_button_pane_cp05

0x5ee8,	// (0x00034f44) cell_vitu_itu_pane_g1

0x5f00,	// (0x00034f5c) cell_vitu_itu_pane_t1_ParamLimits

0x5f00,	// (0x00034f5c) cell_vitu_itu_pane_t1

0x5f12,	// (0x00034f6e) cell_vitu_itu_pane_t2_ParamLimits

0x5f12,	// (0x00034f6e) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003e881) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003e881) cell_vitu_itu_pane_t

0xcd93,	// (0x0003bdef) bg_button_pane_cp07

0x5f47,	// (0x00034fa3) cell_vitu_function_pane_g1

0x1301,	// (0x0003035d) main_calc_pane_g1

0x0f09,	// (0x0002ff65) aid_visual_content_pane

0x9bfe,	// (0x00038c5a) main_vradio_pane

0x5f50,	// (0x00034fac) main_vradio_pane_g1_ParamLimits

0x5f50,	// (0x00034fac) main_vradio_pane_g1

0xcd9d,	// (0x0003bdf9) main_vradio_pane_g2_ParamLimits

0xcd9d,	// (0x0003bdf9) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003e888) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003e888) main_vradio_pane_g

0x5f67,	// (0x00034fc3) main_vradio_pane_t1_ParamLimits

0x5f67,	// (0x00034fc3) main_vradio_pane_t1

0x5f7c,	// (0x00034fd8) main_vradio_pane_t2_ParamLimits

0x5f7c,	// (0x00034fd8) main_vradio_pane_t2

0xcdaa,	// (0x0003be06) main_vradio_pane_t3_ParamLimits

0xcdaa,	// (0x0003be06) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003e88d) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003e88d) main_vradio_pane_t

0x5f91,	// (0x00034fed) vradio_rocker_control_pane_ParamLimits

0x5f91,	// (0x00034fed) vradio_rocker_control_pane

0x5fa3,	// (0x00034fff) vradio_station_info_pane_ParamLimits

0x5fa3,	// (0x00034fff) vradio_station_info_pane

0xcdbe,	// (0x0003be1a) vradio_frequency_info_pane_ParamLimits

0xcdbe,	// (0x0003be1a) vradio_frequency_info_pane

0xc77c,	// (0x0003b7d8) vradio_station_info_pane_g1

0xcdcd,	// (0x0003be29) vradio_station_info_pane_t1_ParamLimits

0xcdcd,	// (0x0003be29) vradio_station_info_pane_t1

0xcdef,	// (0x0003be4b) vradio_station_info_pane_t2_ParamLimits

0xcdef,	// (0x0003be4b) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003e894) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003e894) vradio_station_info_pane_t

0xce01,	// (0x0003be5d) vradio_tuning_pane

0xce09,	// (0x0003be65) vradio_rocker_control_pane_g1

0xce11,	// (0x0003be6d) vradio_rocker_control_pane_g2

0xce19,	// (0x0003be75) vradio_rocker_control_pane_g3

0xce21,	// (0x0003be7d) vradio_rocker_control_pane_g4

0xce29,	// (0x0003be85) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003e899) vradio_rocker_control_pane_g

0x5fb3,	// (0x0003500f) vradio_frequency_info_pane_g1

0xce31,	// (0x0003be8d) vradio_frequency_info_pane_t1_ParamLimits

0xce31,	// (0x0003be8d) vradio_frequency_info_pane_t1

0x5fbd,	// (0x00035019) vradio_tuning_pane_g1

0x5fc8,	// (0x00035024) vradio_tuning_pane_t1

0x9c2c,	// (0x00038c88) area_side_right_pane_ParamLimits

0x9c2c,	// (0x00038c88) area_side_right_pane

0xc2de,	// (0x0003b33a) status_small_pane_g1

0xc2e6,	// (0x0003b342) status_small_pane_g2

0xc2ef,	// (0x0003b34b) status_small_pane_g3

0xc2f8,	// (0x0003b354) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0003e654) status_small_pane_g

0xc301,	// (0x0003b35d) status_small_pane_t1

0x9bfe,	// (0x00038c5a) main_video3_pane

0xce45,	// (0x0003bea1) cams_zoom_vslider_pane

0xce4d,	// (0x0003bea9) image3_wide_pane_ParamLimits

0xce4d,	// (0x0003bea9) image3_wide_pane

0xce67,	// (0x0003bec3) image3_wide_small_pane

0xce73,	// (0x0003becf) main_video3_pane_g1_ParamLimits

0xce73,	// (0x0003becf) main_video3_pane_g1

0xce8f,	// (0x0003beeb) main_video3_pane_g2_ParamLimits

0xce8f,	// (0x0003beeb) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003e8a4) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003e8a4) main_video3_pane_g

0xceab,	// (0x0003bf07) main_video3_pane_t1_ParamLimits

0xceab,	// (0x0003bf07) main_video3_pane_t1

0xced6,	// (0x0003bf32) main_video3_pane_t2_ParamLimits

0xced6,	// (0x0003bf32) main_video3_pane_t2

0xcf03,	// (0x0003bf5f) main_video3_pane_t3_ParamLimits

0xcf03,	// (0x0003bf5f) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003e8a9) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003e8a9) main_video3_pane_t

0xcf30,	// (0x0003bf8c) cams_zoom_vslider_pane_g1

0xcf39,	// (0x0003bf95) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003e8b0) cams_zoom_vslider_pane_g

0xcf41,	// (0x0003bf9d) small_slider_vertical_pane

0xc77c,	// (0x0003b7d8) small_slider_vertical_pane_g1

0xc77c,	// (0x0003b7d8) small_slider_vertical_pane_g2

0xcf49,	// (0x0003bfa5) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003e8b5) small_slider_vertical_pane_g

0x9bfe,	// (0x00038c5a) main_hwr_training_pane

0xcf52,	// (0x0003bfae) hwr_training_instruct_pane_ParamLimits

0xcf52,	// (0x0003bfae) hwr_training_instruct_pane

0x5fd7,	// (0x00035033) hwr_training_navi_pane_ParamLimits

0x5fd7,	// (0x00035033) hwr_training_navi_pane

0x5ff6,	// (0x00035052) hwr_training_write_pane_ParamLimits

0x5ff6,	// (0x00035052) hwr_training_write_pane

0x9bfe,	// (0x00038c5a) bg_frame_shadow_pane

0xcf89,	// (0x0003bfe5) hwr_training_write_pane_g1

0xcf91,	// (0x0003bfed) hwr_training_write_pane_g2

0xcf99,	// (0x0003bff5) hwr_training_write_pane_g3

0xcfa1,	// (0x0003bffd) hwr_training_write_pane_g4

0xcfa9,	// (0x0003c005) hwr_training_write_pane_g5

0xcfb1,	// (0x0003c00d) hwr_training_write_pane_g6

0xcfb9,	// (0x0003c015) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003e8bc) hwr_training_write_pane_g

0x6031,	// (0x0003508d) hwr_training_navi_pane_g1_ParamLimits

0x6031,	// (0x0003508d) hwr_training_navi_pane_g1

0x6043,	// (0x0003509f) hwr_training_navi_pane_g2_ParamLimits

0x6043,	// (0x0003509f) hwr_training_navi_pane_g2

0x6055,	// (0x000350b1) hwr_training_navi_pane_g3_ParamLimits

0x6055,	// (0x000350b1) hwr_training_navi_pane_g3

0x6065,	// (0x000350c1) hwr_training_navi_pane_g4_ParamLimits

0x6065,	// (0x000350c1) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003e8cb) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003e8cb) hwr_training_navi_pane_g

0x6072,	// (0x000350ce) hwr_training_navi_pane_t1

0x6080,	// (0x000350dc) list_single_hwr_training_instruct_pane_ParamLimits

0x6080,	// (0x000350dc) list_single_hwr_training_instruct_pane

0xcfc1,	// (0x0003c01d) list_single_hwr_training_instruct_pane_t1

0xc6bc,	// (0x0003b718) bg_frame_shadow_pane_g1

0xcfd0,	// (0x0003c02c) bg_frame_shadow_pane_g2

0xcfd8,	// (0x0003c034) bg_frame_shadow_pane_g3

0xcfe0,	// (0x0003c03c) bg_frame_shadow_pane_g4

0xcfe8,	// (0x0003c044) bg_frame_shadow_pane_g5

0xcff0,	// (0x0003c04c) bg_frame_shadow_pane_g6

0xcff8,	// (0x0003c054) bg_frame_shadow_pane_g7

0xa46b,	// (0x000394c7) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003e8d6) bg_frame_shadow_pane_g

0x9bfe,	// (0x00038c5a) main_video_tele_dialer_pane

0x0465,	// (0x0002f4c1) aid_size_cell_video_keypad_ParamLimits

0x0465,	// (0x0002f4c1) aid_size_cell_video_keypad

0x047f,	// (0x0002f4db) grid_video_dialer_keypad_pane_ParamLimits

0x047f,	// (0x0002f4db) grid_video_dialer_keypad_pane

0x04cb,	// (0x0002f527) video_down_pane_cp_ParamLimits

0x04cb,	// (0x0002f527) video_down_pane_cp

0x04df,	// (0x0002f53b) cell_video_dialer_keypad_pane_ParamLimits

0x04df,	// (0x0002f53b) cell_video_dialer_keypad_pane

0xd000,	// (0x0003c05c) bg_button_pane_cp08_ParamLimits

0xd000,	// (0x0003c05c) bg_button_pane_cp08

0x60b1,	// (0x0003510d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60b1,	// (0x0003510d) cell_video_dialer_keypad_pane_g1

0x581a,	// (0x00034876) mup3_rocker2_pane_ParamLimits

0x581a,	// (0x00034876) mup3_rocker2_pane

0xc77c,	// (0x0003b7d8) mup3_rocker2_pane_g1

0x465b,	// (0x000336b7) main_dialer2_pane

0x9bfe,	// (0x00038c5a) main_mp4_pane

0x60f4,	// (0x00035150) main_mp4_pane_g1_ParamLimits

0x60f4,	// (0x00035150) main_mp4_pane_g1

0x60f4,	// (0x00035150) main_mp4_pane_g2_ParamLimits

0x60f4,	// (0x00035150) main_mp4_pane_g2

0x0503,	// (0x0002f55f) main_mp4_pane_g3_ParamLimits

0x0503,	// (0x0002f55f) main_mp4_pane_g3

0x6102,	// (0x0003515e) main_mp4_pane_g4_ParamLimits

0x6102,	// (0x0003515e) main_mp4_pane_g4

0x612a,	// (0x00035186) main_mp4_pane_g5_ParamLimits

0x612a,	// (0x00035186) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003e8f6) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003e8f6) main_mp4_pane_g

0x617a,	// (0x000351d6) main_mp4_pane_t1_ParamLimits

0x617a,	// (0x000351d6) main_mp4_pane_t1

0x61d6,	// (0x00035232) main_mp4_pane_t2_ParamLimits

0x61d6,	// (0x00035232) main_mp4_pane_t2

0xd00c,	// (0x0003c068) main_mp4_pane_t3_ParamLimits

0xd00c,	// (0x0003c068) main_mp4_pane_t3

0x6228,	// (0x00035284) main_mp4_pane_t4_ParamLimits

0x6228,	// (0x00035284) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003e903) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003e903) main_mp4_pane_t

0x6268,	// (0x000352c4) mp4_progress_pane_ParamLimits

0x6268,	// (0x000352c4) mp4_progress_pane

0x62b2,	// (0x0003530e) mp4_rocker_pane_ParamLimits

0x62b2,	// (0x0003530e) mp4_rocker_pane

0xd034,	// (0x0003c090) mp4_progress_pane_t1

0xd04d,	// (0x0003c0a9) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003e90c) mp4_progress_pane_t

0xd066,	// (0x0003c0c2) mup_progress_pane_cp04

0xd51c,	// (0x0003c578) mp4_rocker_pane_g1

0x054d,	// (0x0002f5a9) aid_cell_size_keypad2_ParamLimits

0x054d,	// (0x0002f5a9) aid_cell_size_keypad2

0x0563,	// (0x0002f5bf) dialer2_ne_pane_ParamLimits

0x0563,	// (0x0002f5bf) dialer2_ne_pane

0x057b,	// (0x0002f5d7) grid_dialer2_keypad_pane_ParamLimits

0x057b,	// (0x0002f5d7) grid_dialer2_keypad_pane

0xc55b,	// (0x0003b5b7) bg_popup_call_pane_cp07_ParamLimits

0xc55b,	// (0x0003b5b7) bg_popup_call_pane_cp07

0x62d4,	// (0x00035330) dialer2_ne_pane_t1_ParamLimits

0x62d4,	// (0x00035330) dialer2_ne_pane_t1

0x0597,	// (0x0002f5f3) cell_dialer2_keypad_pane_ParamLimits

0x0597,	// (0x0002f5f3) cell_dialer2_keypad_pane

0xd084,	// (0x0003c0e0) bg_button_pane_pane_cp04_ParamLimits

0xd084,	// (0x0003c0e0) bg_button_pane_pane_cp04

0x630f,	// (0x0003536b) cell_dialer2_keypad_pane_g1_ParamLimits

0x630f,	// (0x0003536b) cell_dialer2_keypad_pane_g1

0x201e,	// (0x0003107a) aid_placing_vt_set_content_ParamLimits

0x201e,	// (0x0003107a) aid_placing_vt_set_content

0x2042,	// (0x0003109e) aid_placing_vt_set_title_ParamLimits

0x2042,	// (0x0003109e) aid_placing_vt_set_title

0x9bfe,	// (0x00038c5a) main_image3_pane

0x0619,	// (0x0002f675) area_side_right_pane_cp01_ParamLimits

0x0619,	// (0x0002f675) area_side_right_pane_cp01

0x60f4,	// (0x00035150) main_image3_pane_g1_ParamLimits

0x60f4,	// (0x00035150) main_image3_pane_g1

0x0632,	// (0x0002f68e) main_image3_pane_g2_ParamLimits

0x0632,	// (0x0002f68e) main_image3_pane_g2

0x065a,	// (0x0002f6b6) main_image3_pane_g3_ParamLimits

0x065a,	// (0x0002f6b6) main_image3_pane_g3

0x0684,	// (0x0002f6e0) main_image3_pane_g4_ParamLimits

0x0684,	// (0x0002f6e0) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003e91b) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003e91b) main_image3_pane_g

0x06ae,	// (0x0002f70a) main_image3_pane_t1_ParamLimits

0x06ae,	// (0x0002f70a) main_image3_pane_t1

0x0706,	// (0x0002f762) main_image3_pane_t2_ParamLimits

0x0706,	// (0x0002f762) main_image3_pane_t2

0x0758,	// (0x0002f7b4) main_image3_pane_t3_ParamLimits

0x0758,	// (0x0002f7b4) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003e924) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003e924) main_image3_pane_t

0x9c5f,	// (0x00038cbb) grid_sctrl_middle_pane_cp01_ParamLimits

0x9c5f,	// (0x00038cbb) grid_sctrl_middle_pane_cp01

0x63ab,	// (0x00035407) cell_sctrl_middle_pane_cp01_ParamLimits

0x63ab,	// (0x00035407) cell_sctrl_middle_pane_cp01

0x63c8,	// (0x00035424) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63c8,	// (0x00035424) cell_sctrl_middle_pane_cp01_g1

0x9bfe,	// (0x00038c5a) main_call4_pane

0x63dd,	// (0x00035439) aid_size_button_call4_ParamLimits

0x63dd,	// (0x00035439) aid_size_button_call4

0x6410,	// (0x0003546c) call4_windows_pane_ParamLimits

0x6410,	// (0x0003546c) call4_windows_pane

0x6432,	// (0x0003548e) grid_call4_button_pane_ParamLimits

0x6432,	// (0x0003548e) grid_call4_button_pane

0xd090,	// (0x0003c0ec) call4_windows_conf_pane

0x645d,	// (0x000354b9) popup_call4_audio_first_window_ParamLimits

0x645d,	// (0x000354b9) popup_call4_audio_first_window

0x6489,	// (0x000354e5) popup_call4_audio_second_window_ParamLimits

0x6489,	// (0x000354e5) popup_call4_audio_second_window

0xd0cd,	// (0x0003c129) popup_call4_audio_wait_window_ParamLimits

0xd0cd,	// (0x0003c129) popup_call4_audio_wait_window

0x649f,	// (0x000354fb) cell_call4_button_pane_ParamLimits

0x649f,	// (0x000354fb) cell_call4_button_pane

0x64c6,	// (0x00035522) bg_button_pane_cp09_ParamLimits

0x64c6,	// (0x00035522) bg_button_pane_cp09

0x64d2,	// (0x0003552e) cell_call4_button_pane_g1_ParamLimits

0x64d2,	// (0x0003552e) cell_call4_button_pane_g1

0x64f8,	// (0x00035554) cell_call4_button_pane_t1_ParamLimits

0x64f8,	// (0x00035554) cell_call4_button_pane_t1

0xd115,	// (0x0003c171) popup_call4_audio_conf_window_ParamLimits

0xd115,	// (0x0003c171) popup_call4_audio_conf_window

0x587c,	// (0x000348d8) mup3_progress_pane_t1_ParamLimits

0x589a,	// (0x000348f6) mup3_progress_pane_t2_ParamLimits

0xca33,	// (0x0003ba8f) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0003e7f8) mup3_progress_pane_t_ParamLimits

0xca50,	// (0x0003baac) mup_progress_pane_cp03_ParamLimits

0x5e19,	// (0x00034e75) mup3_control_keys_pane_g4_copy1

0x6296,	// (0x000352f2) mp4_rocker2_pane_ParamLimits

0x6296,	// (0x000352f2) mp4_rocker2_pane

0xd12f,	// (0x0003c18b) mp4_rocker2_pane_g1

0xd137,	// (0x0003c193) mp4_rocker2_pane_g2

0x651e,	// (0x0003557a) mp4_rocker2_pane_g3

0x6526,	// (0x00035582) mp4_rocker2_pane_g4

0x652e,	// (0x0003558a) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003e92d) mp4_rocker2_pane_g

0x9bfe,	// (0x00038c5a) main_camera4_pane

0x9bfe,	// (0x00038c5a) main_video4_pane

0x0499,	// (0x0002f4f5) main_video_tele_dialer_pane_t1_ParamLimits

0x0499,	// (0x0002f4f5) main_video_tele_dialer_pane_t1

0x04b2,	// (0x0002f50e) main_video_tele_dialer_pane_t2_ParamLimits

0x04b2,	// (0x0002f50e) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003e8e7) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003e8e7) main_video_tele_dialer_pane_t

0x07f8,	// (0x0002f854) cam4_autofocus_pane_ParamLimits

0x07f8,	// (0x0002f854) cam4_autofocus_pane

0x080e,	// (0x0002f86a) cam4_image_uncrop_pane_ParamLimits

0x080e,	// (0x0002f86a) cam4_image_uncrop_pane

0x0827,	// (0x0002f883) cam4_indicators_pane_ParamLimits

0x0827,	// (0x0002f883) cam4_indicators_pane

0x0856,	// (0x0002f8b2) main_camera4_pane_g1_ParamLimits

0x0856,	// (0x0002f8b2) main_camera4_pane_g1

0x0868,	// (0x0002f8c4) main_camera4_pane_g2_ParamLimits

0x0868,	// (0x0002f8c4) main_camera4_pane_g2

0x087b,	// (0x0002f8d7) main_camera4_pane_g3_ParamLimits

0x087b,	// (0x0002f8d7) main_camera4_pane_g3

0x088e,	// (0x0002f8ea) main_camera4_pane_g4_ParamLimits

0x088e,	// (0x0002f8ea) main_camera4_pane_g4

0x08a1,	// (0x0002f8fd) main_camera4_pane_g5_ParamLimits

0x08a1,	// (0x0002f8fd) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003e938) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003e938) main_camera4_pane_g

0x08c5,	// (0x0002f921) main_camera4_pane_t1_ParamLimits

0x08c5,	// (0x0002f921) main_camera4_pane_t1

0x6568,	// (0x000355c4) bg_tb_trans_pane_cp06

0x657e,	// (0x000355da) cam4_indicators_pane_g1

0x658f,	// (0x000355eb) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003e953) cam4_indicators_pane_g

0x65a7,	// (0x00035603) cam4_indicators_pane_t1

0x0915,	// (0x0002f971) main_video4_pane_g1_ParamLimits

0x0915,	// (0x0002f971) main_video4_pane_g1

0x0924,	// (0x0002f980) main_video4_pane_g2_ParamLimits

0x0924,	// (0x0002f980) main_video4_pane_g2

0x0933,	// (0x0002f98f) main_video4_pane_g3_ParamLimits

0x0933,	// (0x0002f98f) main_video4_pane_g3

0x0942,	// (0x0002f99e) main_video4_pane_g4_ParamLimits

0x0942,	// (0x0002f99e) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003e95a) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003e95a) main_video4_pane_g

0x0960,	// (0x0002f9bc) vid4_indicators_pane_ParamLimits

0x0960,	// (0x0002f9bc) vid4_indicators_pane

0x098e,	// (0x0002f9ea) video4_image_uncrop_cif_pane_ParamLimits

0x098e,	// (0x0002f9ea) video4_image_uncrop_cif_pane

0x09a8,	// (0x0002fa04) video4_image_uncrop_nhd_pane_ParamLimits

0x09a8,	// (0x0002fa04) video4_image_uncrop_nhd_pane

0x080e,	// (0x0002f86a) video4_image_uncrop_vga_pane_ParamLimits

0x080e,	// (0x0002f86a) video4_image_uncrop_vga_pane

0x65cb,	// (0x00035627) bg_tb_trans_pane_cp07

0x65e3,	// (0x0003563f) vid4_indicators_pane_g1

0x65f9,	// (0x00035655) vid4_indicators_pane_g2

0x660d,	// (0x00035669) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003e965) vid4_indicators_pane_g

0x663e,	// (0x0003569a) vid4_indicators_pane_t1

0x6655,	// (0x000356b1) cam4_autofocus_pane_g1

0x665d,	// (0x000356b9) cam4_autofocus_pane_g2

0x6665,	// (0x000356c1) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003e970) cam4_autofocus_pane_g

0x666d,	// (0x000356c9) cam4_autofocus_pane_g3_copy1

0x6095,	// (0x000350f1) video_down_pane_cp_t1

0x60a3,	// (0x000350ff) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003e8ec) video_down_pane_cp_t

0x9c5f,	// (0x00038cbb) popup_vitu2_window_ParamLimits

0x9c5f,	// (0x00038cbb) popup_vitu2_window

0x09be,	// (0x0002fa1a) aid_size_cell2_itu2_ParamLimits

0x09be,	// (0x0002fa1a) aid_size_cell2_itu2

0x09e4,	// (0x0002fa40) aid_size_cell_itu2_ParamLimits

0x09e4,	// (0x0002fa40) aid_size_cell_itu2

0x0a44,	// (0x0002faa0) bg_popup_window_pane_cp09_ParamLimits

0x0a44,	// (0x0002faa0) bg_popup_window_pane_cp09

0x0a52,	// (0x0002faae) field_vitu2_entry_pane_ParamLimits

0x0a52,	// (0x0002faae) field_vitu2_entry_pane

0x0a7a,	// (0x0002fad6) grid_vitu2_function_pane_ParamLimits

0x0a7a,	// (0x0002fad6) grid_vitu2_function_pane

0x0acb,	// (0x0002fb27) grid_vitu2_itu_pane_ParamLimits

0x0acb,	// (0x0002fb27) grid_vitu2_itu_pane

0x0b56,	// (0x0002fbb2) cell_vitu2_itu_pane_ParamLimits

0x0b56,	// (0x0002fbb2) cell_vitu2_itu_pane

0x0b7c,	// (0x0002fbd8) cell_vitu2_function_pane_ParamLimits

0x0b7c,	// (0x0002fbd8) cell_vitu2_function_pane

0xd13f,	// (0x0003c19b) bg_popup_call_pane_cp08_ParamLimits

0xd13f,	// (0x0003c19b) bg_popup_call_pane_cp08

0xd156,	// (0x0003c1b2) field_vitu2_entry_pane_g1

0xd162,	// (0x0003c1be) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003e977) field_vitu2_entry_pane_g

0xd17c,	// (0x0003c1d8) field_vitu2_entry_pane_t1_ParamLimits

0xd17c,	// (0x0003c1d8) field_vitu2_entry_pane_t1

0xd1a7,	// (0x0003c203) field_vitu2_entry_pane_t2_ParamLimits

0xd1a7,	// (0x0003c203) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003e97e) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003e97e) field_vitu2_entry_pane_t

0x0bc0,	// (0x0002fc1c) bg_button_pane_cp010_ParamLimits

0x0bc0,	// (0x0002fc1c) bg_button_pane_cp010

0x0bce,	// (0x0002fc2a) cell_vitu2_itu_pane_g1

0x0bf9,	// (0x0002fc55) cell_vitu2_itu_pane_t1_ParamLimits

0x0bf9,	// (0x0002fc55) cell_vitu2_itu_pane_t1

0x0c57,	// (0x0002fcb3) cell_vitu2_itu_pane_t2_ParamLimits

0x0c57,	// (0x0002fcb3) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003e988) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003e988) cell_vitu2_itu_pane_t

0x65cb,	// (0x00035627) bg_button_pane_cp011

0x0d33,	// (0x0002fd8f) cell_vitu2_function_pane_g1

0x9bfe,	// (0x00038c5a) main_myfav_hc_pane

0x07a8,	// (0x0002f804) popup_image3_note_pane_ParamLimits

0x07a8,	// (0x0002f804) popup_image3_note_pane

0x07c4,	// (0x0002f820) popup_image3_tool_bar_pane_ParamLimits

0x07c4,	// (0x0002f820) popup_image3_tool_bar_pane

0x0cdb,	// (0x0002fd37) cell_vitu2_itu_pane_t3_ParamLimits

0x0cdb,	// (0x0002fd37) cell_vitu2_itu_pane_t3

0x9bfe,	// (0x00038c5a) bg_popup_trans_pane

0xd1cc,	// (0x0003c228) grid_image3_tool_bar_pane

0xd1d6,	// (0x0003c232) bg_popup_trans_pane_g1

0xa7c9,	// (0x00039825) bg_popup_trans_pane_g2

0xd1de,	// (0x0003c23a) bg_popup_trans_pane_g3

0xd1e6,	// (0x0003c242) bg_popup_trans_pane_g4

0xd1ee,	// (0x0003c24a) bg_popup_trans_pane_g5

0xd1f6,	// (0x0003c252) bg_popup_trans_pane_g6

0xd1fe,	// (0x0003c25a) bg_popup_trans_pane_g7

0xd206,	// (0x0003c262) bg_popup_trans_pane_g8

0xa7a9,	// (0x00039805) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003e98f) bg_popup_trans_pane_g

0xd20e,	// (0x0003c26a) cell_image3_tool_bar_pane_ParamLimits

0xd20e,	// (0x0003c26a) cell_image3_tool_bar_pane

0xc77c,	// (0x0003b7d8) cell_image3_tool_bar_pane_g1

0x9bfe,	// (0x00038c5a) bg_popup_trans_pane_cp1

0xd224,	// (0x0003c280) popup_image3_note_pane_t1

0xd232,	// (0x0003c28e) popup_image3_note_pane_t2

0xd240,	// (0x0003c29c) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003e9a2) popup_image3_note_pane_t

0xd250,	// (0x0003c2ac) popup_image3_note_pane_t3_copy1

0x6675,	// (0x000356d1) bg_myfav_hc_instruction_pane_ParamLimits

0x6675,	// (0x000356d1) bg_myfav_hc_instruction_pane

0x668d,	// (0x000356e9) cell_myfav_contact_pane_ParamLimits

0x668d,	// (0x000356e9) cell_myfav_contact_pane

0x66a9,	// (0x00035705) cell_myfav_contact_pane_cp1_ParamLimits

0x66a9,	// (0x00035705) cell_myfav_contact_pane_cp1

0x66c1,	// (0x0003571d) cell_myfav_contact_pane_cp2_ParamLimits

0x66c1,	// (0x0003571d) cell_myfav_contact_pane_cp2

0x66d9,	// (0x00035735) cell_myfav_contact_pane_cp3_ParamLimits

0x66d9,	// (0x00035735) cell_myfav_contact_pane_cp3

0x66f0,	// (0x0003574c) cell_myfav_contact_pane_cp4_ParamLimits

0x66f0,	// (0x0003574c) cell_myfav_contact_pane_cp4

0x6708,	// (0x00035764) cell_myfav_contact_pane_cp5_ParamLimits

0x6708,	// (0x00035764) cell_myfav_contact_pane_cp5

0x671c,	// (0x00035778) cell_myfav_contact_pane_cp6_ParamLimits

0x671c,	// (0x00035778) cell_myfav_contact_pane_cp6

0x6732,	// (0x0003578e) cell_myfav_contact_pane_cp7_ParamLimits

0x6732,	// (0x0003578e) cell_myfav_contact_pane_cp7

0xd25e,	// (0x0003c2ba) listscroll_gen_pane_cp05

0x674a,	// (0x000357a6) main_myfav_hc_pane_g1_ParamLimits

0x674a,	// (0x000357a6) main_myfav_hc_pane_g1

0x6764,	// (0x000357c0) main_myfav_hc_pane_g2_ParamLimits

0x6764,	// (0x000357c0) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003e9a9) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003e9a9) main_myfav_hc_pane_g

0x6798,	// (0x000357f4) main_myfav_hc_pane_t1_ParamLimits

0x6798,	// (0x000357f4) main_myfav_hc_pane_t1

0xd267,	// (0x0003c2c3) main_myfav_hc_pane_t2_ParamLimits

0xd267,	// (0x0003c2c3) main_myfav_hc_pane_t2

0xd279,	// (0x0003c2d5) main_myfav_hc_pane_t3_ParamLimits

0xd279,	// (0x0003c2d5) main_myfav_hc_pane_t3

0x67af,	// (0x0003580b) main_myfav_hc_pane_t4_ParamLimits

0x67af,	// (0x0003580b) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003e9b0) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003e9b0) main_myfav_hc_pane_t

0xc77c,	// (0x0003b7d8) bg_myfav_hc_instruction_pane_g1

0xd28b,	// (0x0003c2e7) cell_myfav_contact_pane_g1_ParamLimits

0xd28b,	// (0x0003c2e7) cell_myfav_contact_pane_g1

0xd28b,	// (0x0003c2e7) cell_myfav_contact_pane_g2_ParamLimits

0xd28b,	// (0x0003c2e7) cell_myfav_contact_pane_g2

0xd297,	// (0x0003c2f3) cell_myfav_contact_pane_g3_ParamLimits

0xd297,	// (0x0003c2f3) cell_myfav_contact_pane_g3

0xca1d,	// (0x0003ba79) cell_myfav_contact_pane_g4_ParamLimits

0xca1d,	// (0x0003ba79) cell_myfav_contact_pane_g4

0xd2a4,	// (0x0003c300) cell_myfav_contact_pane_g5_ParamLimits

0xd2a4,	// (0x0003c300) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003e9bb) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003e9bb) cell_myfav_contact_pane_g

0x677e,	// (0x000357da) main_myfav_hc_pane_g3_ParamLimits

0x677e,	// (0x000357da) main_myfav_hc_pane_g3

0x1046,	// (0x000300a2) popup_adpt_find_window

0x67d9,	// (0x00035835) afind_page_pane_ParamLimits

0x67d9,	// (0x00035835) afind_page_pane

0x67ee,	// (0x0003584a) aid_size_cell_afind_ParamLimits

0x67ee,	// (0x0003584a) aid_size_cell_afind

0x680c,	// (0x00035868) bg_popup_sub_pane_cp09_ParamLimits

0x680c,	// (0x00035868) bg_popup_sub_pane_cp09

0x6819,	// (0x00035875) find_pane_cp01_ParamLimits

0x6819,	// (0x00035875) find_pane_cp01

0xd2b0,	// (0x0003c30c) grid_afind_control_pane_ParamLimits

0xd2b0,	// (0x0003c30c) grid_afind_control_pane

0x6826,	// (0x00035882) grid_afind_pane_ParamLimits

0x6826,	// (0x00035882) grid_afind_pane

0x6848,	// (0x000358a4) cell_afind_pane_ParamLimits

0x6848,	// (0x000358a4) cell_afind_pane

0xc77c,	// (0x0003b7d8) afind_page_pane_g1

0x68af,	// (0x0003590b) afind_page_pane_g2

0x68b8,	// (0x00035914) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003e9c6) afind_page_pane_g

0x68c1,	// (0x0003591d) afind_page_pane_t1

0xd2c4,	// (0x0003c320) cell_afind_grid_control_pane_ParamLimits

0xd2c4,	// (0x0003c320) cell_afind_grid_control_pane

0xd084,	// (0x0003c0e0) bg_button_pane_cp69_ParamLimits

0xd084,	// (0x0003c0e0) bg_button_pane_cp69

0x68e1,	// (0x0003593d) cell_afind_pane_g1_ParamLimits

0x68e1,	// (0x0003593d) cell_afind_pane_g1

0x68ee,	// (0x0003594a) cell_afind_pane_t1_ParamLimits

0x68ee,	// (0x0003594a) cell_afind_pane_t1

0xa5be,	// (0x0003961a) bg_button_pane_cp72

0xd2d3,	// (0x0003c32f) cell_afind_grid_control_pane_g1

0x40fe,	// (0x0003315a) aid_image_placing_area_ParamLimits

0x40fe,	// (0x0003315a) aid_image_placing_area

0xcd50,	// (0x0003bdac) field_vitu_entry_pane_g1_ParamLimits

0xcd50,	// (0x0003bdac) field_vitu_entry_pane_g1

0xcd5c,	// (0x0003bdb8) field_vitu_entry_pane_g2_ParamLimits

0xcd5c,	// (0x0003bdb8) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003e877) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003e877) field_vitu_entry_pane_g

0x5ee8,	// (0x00034f44) cell_vitu_itu_pane_g1_ParamLimits

0x5f2a,	// (0x00034f86) cell_vitu_itu_pane_t3_ParamLimits

0x5f2a,	// (0x00034f86) cell_vitu_itu_pane_t3

0xd034,	// (0x0003c090) mp4_progress_pane_t1_ParamLimits

0xd04d,	// (0x0003c0a9) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003e90c) mp4_progress_pane_t_ParamLimits

0xd066,	// (0x0003c0c2) mup_progress_pane_cp04_ParamLimits

0x67c3,	// (0x0003581f) main_myfav_hc_pane_t5_ParamLimits

0x67c3,	// (0x0003581f) main_myfav_hc_pane_t5

0x9c24,	// (0x00038c80) aid_zoom_text_primary

0x1046,	// (0x000300a2) popup_adpt_find_window_ParamLimits

0x9c5f,	// (0x00038cbb) main_cam_set_pane

0x0840,	// (0x0002f89c) cam4_zoom_pane_ParamLimits

0x0840,	// (0x0002f89c) cam4_zoom_pane

0x6900,	// (0x0003595c) main_cam_set_pane_g1_ParamLimits

0x6900,	// (0x0003595c) main_cam_set_pane_g1

0x690e,	// (0x0003596a) main_cam_set_pane_g2_ParamLimits

0x690e,	// (0x0003596a) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003e9cd) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003e9cd) main_cam_set_pane_g

0x692f,	// (0x0003598b) main_cam_set_pane_t1_ParamLimits

0x692f,	// (0x0003598b) main_cam_set_pane_t1

0x694a,	// (0x000359a6) main_cset_listscroll_pane_ParamLimits

0x694a,	// (0x000359a6) main_cset_listscroll_pane

0x696e,	// (0x000359ca) main_cset_slider_pane_ParamLimits

0x696e,	// (0x000359ca) main_cset_slider_pane

0xd2e4,	// (0x0003c340) main_cset_list_pane_ParamLimits

0xd2e4,	// (0x0003c340) main_cset_list_pane

0xd2f4,	// (0x0003c350) scroll_pane_cp028

0x6998,	// (0x000359f4) aid_area_touch_slider

0x69b4,	// (0x00035a10) cset_slider_pane

0x69de,	// (0x00035a3a) main_cset_slider_pane_g1

0x69f3,	// (0x00035a4f) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003e9d2) main_cset_slider_pane_g

0xd32d,	// (0x0003c389) main_cset_slider_pane_t1

0x6ab5,	// (0x00035b11) main_cset_slider_pane_t2

0x6acf,	// (0x00035b2b) main_cset_slider_pane_t3

0x6ae9,	// (0x00035b45) main_cset_slider_pane_t4

0x6b03,	// (0x00035b5f) main_cset_slider_pane_t5

0x6b21,	// (0x00035b7d) main_cset_slider_pane_t6

0x6b36,	// (0x00035b92) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003e9f7) main_cset_slider_pane_t

0x6c42,	// (0x00035c9e) cset_list_set_pane_ParamLimits

0x6c42,	// (0x00035c9e) cset_list_set_pane

0x6c56,	// (0x00035cb2) aid_position_infowindow_above

0x6c5e,	// (0x00035cba) aid_position_infowindow_below

0x6c66,	// (0x00035cc2) cset_list_set_pane_g1_ParamLimits

0x6c66,	// (0x00035cc2) cset_list_set_pane_g1

0x6c72,	// (0x00035cce) cset_list_set_pane_g3_ParamLimits

0x6c72,	// (0x00035cce) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003ea16) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003ea16) cset_list_set_pane_g

0x6c81,	// (0x00035cdd) cset_list_set_pane_t1_ParamLimits

0x6c81,	// (0x00035cdd) cset_list_set_pane_t1

0x9c5f,	// (0x00038cbb) list_highlight_pane_cp021_ParamLimits

0x9c5f,	// (0x00038cbb) list_highlight_pane_cp021

0xafe8,	// (0x0003a044) cset_slider_pane_g1

0xaffa,	// (0x0003a056) cset_slider_pane_g2

0xaff1,	// (0x0003a04d) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003ea1b) cset_slider_pane_g

0x6c96,	// (0x00035cf2) aid_area_touch_cam4_zoom

0x6c9e,	// (0x00035cfa) cam4_zoom_cont_pane

0x6ca6,	// (0x00035d02) cam4_zoom_pane_g1

0x6cae,	// (0x00035d0a) cam4_zoom_pane_g2

0x0d47,	// (0x0002fda3) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003ea22) cam4_zoom_pane_g

0x6cb6,	// (0x00035d12) cam4_zoom_cont_pane_g1

0x6cbf,	// (0x00035d1b) cam4_zoom_cont_pane_g2

0x6cc8,	// (0x00035d24) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003ea29) cam4_zoom_cont_pane_g

0x63fb,	// (0x00035457) call4_image_pane_ParamLimits

0x63fb,	// (0x00035457) call4_image_pane

0xd090,	// (0x0003c0ec) call4_windows_conf_pane_ParamLimits

0xd0ab,	// (0x0003c107) popup_call4_audio_in_window_ParamLimits

0xd0ab,	// (0x0003c107) popup_call4_audio_in_window

0x9bfe,	// (0x00038c5a) bg_popup_call2_act_pane_cp02

0xd10d,	// (0x0003c169) call4_list_conf_pane

0xc77c,	// (0x0003b7d8) call4_image_pane_g1

0xc77c,	// (0x0003b7d8) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0003e738) call4_image_pane_g

0xd3cd,	// (0x0003c429) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3cd,	// (0x0003c429) list_single_graphic_popup_conf4_pane

0x9bfe,	// (0x00038c5a) list_highlight_pane_cp022

0xd3e2,	// (0x0003c43e) list_single_graphic_popup_conf4_pane_g1

0xacc8,	// (0x00039d24) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003ea30) list_single_graphic_popup_conf4_pane_g

0xd3ea,	// (0x0003c446) list_single_graphic_popup_conf4_pane_t1

0x2159,	// (0x000311b5) popup_vtel_slider_window_ParamLimits

0x2159,	// (0x000311b5) popup_vtel_slider_window

0xd072,	// (0x0003c0ce) dialer2_ne_pane_t2_ParamLimits

0xd072,	// (0x0003c0ce) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003e911) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003e911) dialer2_ne_pane_t

0xc55b,	// (0x0003b5b7) bg_popup_sub_pane_cp010_ParamLimits

0xc55b,	// (0x0003b5b7) bg_popup_sub_pane_cp010

0x6cd1,	// (0x00035d2d) popup_vtel_slider_window_g1_ParamLimits

0x6cd1,	// (0x00035d2d) popup_vtel_slider_window_g1

0x6ce4,	// (0x00035d40) popup_vtel_slider_window_g2_ParamLimits

0x6ce4,	// (0x00035d40) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003ea35) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003ea35) popup_vtel_slider_window_g

0x6d3a,	// (0x00035d96) vtel_slider_pane_ParamLimits

0x6d3a,	// (0x00035d96) vtel_slider_pane

0x6d5c,	// (0x00035db8) vtel_slider_pane_g1_ParamLimits

0x6d5c,	// (0x00035db8) vtel_slider_pane_g1

0x6d70,	// (0x00035dcc) vtel_slider_pane_g2_ParamLimits

0x6d70,	// (0x00035dcc) vtel_slider_pane_g2

0x6d88,	// (0x00035de4) vtel_slider_pane_g3_ParamLimits

0x6d88,	// (0x00035de4) vtel_slider_pane_g3

0x6d5c,	// (0x00035db8) vtel_slider_pane_g4_ParamLimits

0x6d5c,	// (0x00035db8) vtel_slider_pane_g4

0x6d9e,	// (0x00035dfa) vtel_slider_pane_g5_ParamLimits

0x6d9e,	// (0x00035dfa) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003ea3e) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003ea3e) vtel_slider_pane_g

0x9c5f,	// (0x00038cbb) main_gallery2_pane

0x0a10,	// (0x0002fa6c) aid_size_row_itut2_dropdow_list_ParamLimits

0x0a10,	// (0x0002fa6c) aid_size_row_itut2_dropdow_list

0x0aa2,	// (0x0002fafe) grid_vitu2_function_top_pane_ParamLimits

0x0aa2,	// (0x0002fafe) grid_vitu2_function_top_pane

0x0b01,	// (0x0002fb5d) popup_vitu2_dropdown_list_window_ParamLimits

0x0b01,	// (0x0002fb5d) popup_vitu2_dropdown_list_window

0x0b2a,	// (0x0002fb86) popup_vitu2_match_list_window

0x0d4f,	// (0x0002fdab) cell_vitu2_function_top_pane_ParamLimits

0x0d4f,	// (0x0002fdab) cell_vitu2_function_top_pane

0x0d6f,	// (0x0002fdcb) cell_vitu2_function_top_pane_cp01_ParamLimits

0x0d6f,	// (0x0002fdcb) cell_vitu2_function_top_pane_cp01

0x0d8d,	// (0x0002fde9) cell_vitu2_function_top_wide_pane_ParamLimits

0x0d8d,	// (0x0002fde9) cell_vitu2_function_top_wide_pane

0x65cb,	// (0x00035627) bg_button_pane_cp012

0x0dab,	// (0x0002fe07) cell_vitu2_function_top_pane_g1

0x6db4,	// (0x00035e10) bg_button_pane_cp013_ParamLimits

0x6db4,	// (0x00035e10) bg_button_pane_cp013

0x6dd0,	// (0x00035e2c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6dd0,	// (0x00035e2c) cell_vitu2_function_top_wide_pane_g1

0x65cb,	// (0x00035627) bg_popup_sub_pane_cp20

0x0dbf,	// (0x0002fe1b) list_vitu2_match_list_pane

0xd1d6,	// (0x0003c232) bg_popup_sub_pane_cp20_g1

0xd1de,	// (0x0003c23a) bg_popup_sub_pane_cp20_g2

0xa7c9,	// (0x00039825) bg_popup_sub_pane_cp20_g3

0xd1e6,	// (0x0003c242) bg_popup_sub_pane_cp20_g4

0xa7a9,	// (0x00039805) bg_popup_sub_pane_cp20_g5

0xd40e,	// (0x0003c46a) bg_popup_sub_pane_cp20_g6

0xd1f6,	// (0x0003c252) bg_popup_sub_pane_cp20_g7

0xd1fe,	// (0x0003c25a) bg_popup_sub_pane_cp20_g8

0xd206,	// (0x0003c262) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003ea49) bg_popup_sub_pane_cp20_g

0x6de8,	// (0x00035e44) list_vitu2_match_list_item_pane_ParamLimits

0x6de8,	// (0x00035e44) list_vitu2_match_list_item_pane

0x6dfa,	// (0x00035e56) list_vitu2_match_list_item_pane_t1

0x13db,	// (0x00030437) bg_popup_sub_pane_cp21

0x6e46,	// (0x00035ea2) grid_vitu2_dropdown_list_pane

0x0ddd,	// (0x0002fe39) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x0ddd,	// (0x0002fe39) cell_vitu2_dropdown_list_char_pane

0x0e00,	// (0x0002fe5c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x0e00,	// (0x0002fe5c) cell_vitu2_dropdown_list_ctrl_pane

0xd422,	// (0x0003c47e) cell_vitu2_dropdown_list_char_pane_g1

0xd42b,	// (0x0003c487) cell_vitu2_dropdown_list_char_pane_g2

0xd434,	// (0x0003c490) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003ea66) cell_vitu2_dropdown_list_char_pane_g

0x0e2e,	// (0x0002fe8a) cell_vitu2_dropdown_list_char_pane_t1

0x6e4e,	// (0x00035eaa) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e4e,	// (0x00035eaa) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e5e,	// (0x00035eba) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e5e,	// (0x00035eba) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e6f,	// (0x00035ecb) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e6f,	// (0x00035ecb) cell_vitu2_dropdown_list_ctrl_pane_g3

0x0e3c,	// (0x0002fe98) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x0e3c,	// (0x0002fe98) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6568,	// (0x000355c4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6568,	// (0x000355c4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003ea6d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003ea6d) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e7f,	// (0x00035edb) aid_size_cell_gallery2_ParamLimits

0x6e7f,	// (0x00035edb) aid_size_cell_gallery2

0x6e9d,	// (0x00035ef9) grid_gallery2_pane_ParamLimits

0x6e9d,	// (0x00035ef9) grid_gallery2_pane

0x6eb7,	// (0x00035f13) scroll_pane_cp029_ParamLimits

0x6eb7,	// (0x00035f13) scroll_pane_cp029

0x6ec3,	// (0x00035f1f) cell_gallery2_pane_ParamLimits

0x6ec3,	// (0x00035f1f) cell_gallery2_pane

0xd43d,	// (0x0003c499) cell_gallery2_pane_g2

0x6f24,	// (0x00035f80) cell_gallery2_pane_g3

0xd445,	// (0x0003c4a1) cell_gallery2_pane_g4

0xd44d,	// (0x0003c4a9) cell_gallery2_pane_g5

0xae96,	// (0x00039ef2) grid_highlight_pane_cp10

0x0b2a,	// (0x0002fb86) popup_vitu2_match_list_window_ParamLimits

0x0b41,	// (0x0002fb9d) popup_vitu2_query_window_ParamLimits

0x0b41,	// (0x0002fb9d) popup_vitu2_query_window

0x13db,	// (0x00030437) bg_vitu2_candi_button_pane

0xd422,	// (0x0003c47e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd42b,	// (0x0003c487) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd434,	// (0x0003c490) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f2c,	// (0x00035f88) bg_button_pane_cp015

0x6f40,	// (0x00035f9c) bg_button_pane_cp016

0x6f53,	// (0x00035faf) bg_button_pane_cp017

0xc323,	// (0x0003b37f) bg_popup_sub_pane_cp22

0xd455,	// (0x0003c4b1) popup_vitu2_query_window_g1

0x6f98,	// (0x00035ff4) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003ea78) popup_vitu2_query_window_g

0x6fb7,	// (0x00036013) popup_vitu2_query_window_t1_ParamLimits

0x6fb7,	// (0x00036013) popup_vitu2_query_window_t1

0x6fec,	// (0x00036048) popup_vitu2_query_window_t2_ParamLimits

0x6fec,	// (0x00036048) popup_vitu2_query_window_t2

0x6ffe,	// (0x0003605a) popup_vitu2_query_window_t3_ParamLimits

0x6ffe,	// (0x0003605a) popup_vitu2_query_window_t3

0x7026,	// (0x00036082) popup_vitu2_query_window_t4_ParamLimits

0x7026,	// (0x00036082) popup_vitu2_query_window_t4

0x7047,	// (0x000360a3) popup_vitu2_query_window_t5_ParamLimits

0x7047,	// (0x000360a3) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003ea7f) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003ea7f) popup_vitu2_query_window_t

0xd2dc,	// (0x0003c338) main_cset_text_pane

0x6998,	// (0x000359f4) aid_area_touch_slider_ParamLimits

0x69b4,	// (0x00035a10) cset_slider_pane_ParamLimits

0x69de,	// (0x00035a3a) main_cset_slider_pane_g1_ParamLimits

0x69f3,	// (0x00035a4f) main_cset_slider_pane_g2_ParamLimits

0xd2fd,	// (0x0003c359) main_cset_slider_pane_g3_ParamLimits

0xd2fd,	// (0x0003c359) main_cset_slider_pane_g3

0x6a08,	// (0x00035a64) main_cset_slider_pane_g4_ParamLimits

0x6a08,	// (0x00035a64) main_cset_slider_pane_g4

0x6a17,	// (0x00035a73) main_cset_slider_pane_g5_ParamLimits

0x6a17,	// (0x00035a73) main_cset_slider_pane_g5

0x6a25,	// (0x00035a81) main_cset_slider_pane_g6_ParamLimits

0x6a25,	// (0x00035a81) main_cset_slider_pane_g6

0xf976,	// (0x0003e9d2) main_cset_slider_pane_g_ParamLimits

0xd32d,	// (0x0003c389) main_cset_slider_pane_t1_ParamLimits

0x6ab5,	// (0x00035b11) main_cset_slider_pane_t2_ParamLimits

0x6acf,	// (0x00035b2b) main_cset_slider_pane_t3_ParamLimits

0x6ae9,	// (0x00035b45) main_cset_slider_pane_t4_ParamLimits

0x6b03,	// (0x00035b5f) main_cset_slider_pane_t5_ParamLimits

0x6b21,	// (0x00035b7d) main_cset_slider_pane_t6_ParamLimits

0x6b36,	// (0x00035b92) main_cset_slider_pane_t7_ParamLimits

0x6b64,	// (0x00035bc0) main_cset_slider_pane_t8_ParamLimits

0x6b64,	// (0x00035bc0) main_cset_slider_pane_t8

0x6b8c,	// (0x00035be8) main_cset_slider_pane_t9_ParamLimits

0x6b8c,	// (0x00035be8) main_cset_slider_pane_t9

0x6bb4,	// (0x00035c10) main_cset_slider_pane_t10_ParamLimits

0x6bb4,	// (0x00035c10) main_cset_slider_pane_t10

0x6bdc,	// (0x00035c38) main_cset_slider_pane_t11_ParamLimits

0x6bdc,	// (0x00035c38) main_cset_slider_pane_t11

0x6c06,	// (0x00035c62) main_cset_slider_pane_t12_ParamLimits

0x6c06,	// (0x00035c62) main_cset_slider_pane_t12

0x6c23,	// (0x00035c7f) main_cset_slider_pane_t13_ParamLimits

0x6c23,	// (0x00035c7f) main_cset_slider_pane_t13

0xf99b,	// (0x0003e9f7) main_cset_slider_pane_t_ParamLimits

0x9bfe,	// (0x00038c5a) bg_popup_sub_pane_cp011

0xd461,	// (0x0003c4bd) main_cset_text_pane_g1

0xd469,	// (0x0003c4c5) main_cset_text_pane_t1

0xd477,	// (0x0003c4d3) main_cset_text_pane_t2

0xd485,	// (0x0003c4e1) main_cset_text_pane_t3

0xd493,	// (0x0003c4ef) main_cset_text_pane_t4

0xd4a1,	// (0x0003c4fd) main_cset_text_pane_t5

0xd4af,	// (0x0003c50b) main_cset_text_pane_t6

0xd526,	// (0x0003c582) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003ea8e) main_cset_text_pane_t

0x9bfe,	// (0x00038c5a) main_cam4_burst_pane

0x9bfe,	// (0x00038c5a) main_cam5_pane

0x68cf,	// (0x0003592b) bg_button_pane_cp019

0x68d8,	// (0x00035934) bg_button_pane_cp020

0xd309,	// (0x0003c365) main_cset_slider_pane_g7_ParamLimits

0xd309,	// (0x0003c365) main_cset_slider_pane_g7

0xd315,	// (0x0003c371) main_cset_slider_pane_g8_ParamLimits

0xd315,	// (0x0003c371) main_cset_slider_pane_g8

0x6a39,	// (0x00035a95) main_cset_slider_pane_g9_ParamLimits

0x6a39,	// (0x00035a95) main_cset_slider_pane_g9

0x6a45,	// (0x00035aa1) main_cset_slider_pane_g10_ParamLimits

0x6a45,	// (0x00035aa1) main_cset_slider_pane_g10

0x6a51,	// (0x00035aad) main_cset_slider_pane_g11_ParamLimits

0x6a51,	// (0x00035aad) main_cset_slider_pane_g11

0x6a5d,	// (0x00035ab9) main_cset_slider_pane_g12_ParamLimits

0x6a5d,	// (0x00035ab9) main_cset_slider_pane_g12

0x6a69,	// (0x00035ac5) main_cset_slider_pane_g13_ParamLimits

0x6a69,	// (0x00035ac5) main_cset_slider_pane_g13

0x6a75,	// (0x00035ad1) main_cset_slider_pane_g14_ParamLimits

0x6a75,	// (0x00035ad1) main_cset_slider_pane_g14

0x6a81,	// (0x00035add) main_cset_slider_pane_g15_ParamLimits

0x6a81,	// (0x00035add) main_cset_slider_pane_g15

0xd35b,	// (0x0003c3b7) main_cset_slider_pane_t14_ParamLimits

0xd35b,	// (0x0003c3b7) main_cset_slider_pane_t14

0xd394,	// (0x0003c3f0) main_cset_slider_pane_t15_ParamLimits

0xd394,	// (0x0003c3f0) main_cset_slider_pane_t15

0x70be,	// (0x0003611a) aid_cam4_burst_size_cell_ParamLimits

0x70be,	// (0x0003611a) aid_cam4_burst_size_cell

0x70de,	// (0x0003613a) grid_cam4_burst_pane_ParamLimits

0x70de,	// (0x0003613a) grid_cam4_burst_pane

0x7118,	// (0x00036174) linegrid_cam4_burst_pane_ParamLimits

0x7118,	// (0x00036174) linegrid_cam4_burst_pane

0xd534,	// (0x0003c590) scroll_pane_cp30_ParamLimits

0xd534,	// (0x0003c590) scroll_pane_cp30

0x713a,	// (0x00036196) cell_cam4_burst_pane_ParamLimits

0x713a,	// (0x00036196) cell_cam4_burst_pane

0xd540,	// (0x0003c59c) linegrid_cam4_burst_pane_g1_ParamLimits

0xd540,	// (0x0003c59c) linegrid_cam4_burst_pane_g1

0x718f,	// (0x000361eb) linegrid_cam4_burst_pane_g2_ParamLimits

0x718f,	// (0x000361eb) linegrid_cam4_burst_pane_g2

0xd54d,	// (0x0003c5a9) linegrid_cam4_burst_pane_g3_ParamLimits

0xd54d,	// (0x0003c5a9) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003ea9d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003ea9d) linegrid_cam4_burst_pane_g

0x71a0,	// (0x000361fc) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71a0,	// (0x000361fc) linegrid_cam4_burst_pane_g3_copy1

0xd55a,	// (0x0003c5b6) linegrid_cam4_burst_pane_g4_ParamLimits

0xd55a,	// (0x0003c5b6) linegrid_cam4_burst_pane_g4

0x71be,	// (0x0003621a) linegrid_cam4_burst_pane_g5_ParamLimits

0x71be,	// (0x0003621a) linegrid_cam4_burst_pane_g5

0x71cf,	// (0x0003622b) linegrid_cam4_burst_pane_g6_ParamLimits

0x71cf,	// (0x0003622b) linegrid_cam4_burst_pane_g6

0xd567,	// (0x0003c5c3) linegrid_cam4_burst_pane_g7_ParamLimits

0xd567,	// (0x0003c5c3) linegrid_cam4_burst_pane_g7

0x71e6,	// (0x00036242) cell_cam4_burst_pane_g1

0xd580,	// (0x0003c5dc) main_cam5_pane_t1_ParamLimits

0xd580,	// (0x0003c5dc) main_cam5_pane_t1

0xd592,	// (0x0003c5ee) main_cam5_pane_t2_ParamLimits

0xd592,	// (0x0003c5ee) main_cam5_pane_t2

0xd5a4,	// (0x0003c600) main_cam5_pane_t3_ParamLimits

0xd5a4,	// (0x0003c600) main_cam5_pane_t3

0xd5b6,	// (0x0003c612) main_cam5_pane_t4_ParamLimits

0xd5b6,	// (0x0003c612) main_cam5_pane_t4

0xd5ce,	// (0x0003c62a) main_cam5_pane_t5_ParamLimits

0xd5ce,	// (0x0003c62a) main_cam5_pane_t5

0xd5e2,	// (0x0003c63e) main_cam5_pane_t6_ParamLimits

0xd5e2,	// (0x0003c63e) main_cam5_pane_t6

0xd5f6,	// (0x0003c652) main_cam5_pane_t7_ParamLimits

0xd5f6,	// (0x0003c652) main_cam5_pane_t7

0xd608,	// (0x0003c664) main_cam5_pane_t8_ParamLimits

0xd608,	// (0x0003c664) main_cam5_pane_t8

0xd626,	// (0x0003c682) main_cam5_pane_t9_ParamLimits

0xd626,	// (0x0003c682) main_cam5_pane_t9

0xd638,	// (0x0003c694) main_cam5_pane_t10_ParamLimits

0xd638,	// (0x0003c694) main_cam5_pane_t10

0xd64a,	// (0x0003c6a6) main_cam5_pane_t11_ParamLimits

0xd64a,	// (0x0003c6a6) main_cam5_pane_t11

0xd65e,	// (0x0003c6ba) main_cam5_pane_t12_ParamLimits

0xd65e,	// (0x0003c6ba) main_cam5_pane_t12

0xd675,	// (0x0003c6d1) main_cam5_pane_t13_ParamLimits

0xd675,	// (0x0003c6d1) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003eaa9) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003eaa9) main_cam5_pane_t

0x10c9,	// (0x00030125) popup_scut_keymap_window_ParamLimits

0x10c9,	// (0x00030125) popup_scut_keymap_window

0x71f9,	// (0x00036255) aid_size_cell_brow_shortcut

0xae96,	// (0x00039ef2) bg_popup_window_pane_cp010

0x7205,	// (0x00036261) grid_scut_pane

0x7211,	// (0x0003626d) cell_scut_pane_ParamLimits

0x7211,	// (0x0003626d) cell_scut_pane

0x722a,	// (0x00036286) cell_scut_pane_g1

0xd698,	// (0x0003c6f4) cell_scut_pane_t1

0xd6a7,	// (0x0003c703) cell_scut_pane_t2

0x7233,	// (0x0003628f) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003eac4) cell_scut_pane_t

0x5433,	// (0x0003448f) main_mup3_pane_g8_ParamLimits

0x5433,	// (0x0003448f) main_mup3_pane_g8

0x0a2c,	// (0x0002fa88) area_vitu2_query_pane_ParamLimits

0x0a2c,	// (0x0002fa88) area_vitu2_query_pane

0x6f66,	// (0x00035fc2) input_focus_pane_cp08

0xd6b6,	// (0x0003c712) area_vitu2_query_pane_g1

0x7241,	// (0x0003629d) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003eacb) area_vitu2_query_pane_g

0x7252,	// (0x000362ae) area_vitu2_query_pane_t1_ParamLimits

0x7252,	// (0x000362ae) area_vitu2_query_pane_t1

0x7266,	// (0x000362c2) area_vitu2_query_pane_t2_ParamLimits

0x7266,	// (0x000362c2) area_vitu2_query_pane_t2

0x727a,	// (0x000362d6) area_vitu2_query_pane_t3_ParamLimits

0x727a,	// (0x000362d6) area_vitu2_query_pane_t3

0xd6c2,	// (0x0003c71e) area_vitu2_query_pane_t4_ParamLimits

0xd6c2,	// (0x0003c71e) area_vitu2_query_pane_t4

0xd6ea,	// (0x0003c746) area_vitu2_query_pane_t5_ParamLimits

0xd6ea,	// (0x0003c746) area_vitu2_query_pane_t5

0xd712,	// (0x0003c76e) area_vitu2_query_pane_t6_ParamLimits

0xd712,	// (0x0003c76e) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003ead0) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003ead0) area_vitu2_query_pane_t

0x72a2,	// (0x000362fe) bg_button_pane_cp018

0x72b0,	// (0x0003630c) bg_button_pane_cp021

0x72bc,	// (0x00036318) bg_button_pane_cp022

0x72cd,	// (0x00036329) input_focus_pane_cp09

0x3634,	// (0x00032690) aid_size_touch_mv_arrow_left

0x365d,	// (0x000326b9) aid_size_touch_mv_arrow_right

0x6a99,	// (0x00035af5) main_cset_slider_pane_g16_ParamLimits

0x6a99,	// (0x00035af5) main_cset_slider_pane_g16

0x6aa7,	// (0x00035b03) main_cset_slider_pane_g17_ParamLimits

0x6aa7,	// (0x00035b03) main_cset_slider_pane_g17

0x71e6,	// (0x00036242) cell_cam4_burst_pane_g1_ParamLimits

0x9bfe,	// (0x00038c5a) compa_mode_pane

0x6cf4,	// (0x00035d50) popup_vtel_slider_window_g3_ParamLimits

0x6cf4,	// (0x00035d50) popup_vtel_slider_window_g3

0x6d0b,	// (0x00035d67) popup_vtel_slider_window_g4_ParamLimits

0x6d0b,	// (0x00035d67) popup_vtel_slider_window_g4

0x6d22,	// (0x00035d7e) popup_vtel_slider_window_t1_ParamLimits

0x6d22,	// (0x00035d7e) popup_vtel_slider_window_t1

0x9bfe,	// (0x00038c5a) main_cl_pane

0xc34f,	// (0x0003b3ab) popup_imed_adjust2_window_ParamLimits

0xc323,	// (0x0003b37f) bg_tb_trans_pane_cp05_ParamLimits

0xcc85,	// (0x0003bce1) popup_imed_adjust2_window_g1_ParamLimits

0xcc94,	// (0x0003bcf0) popup_imed_adjust2_window_g2_ParamLimits

0xcc94,	// (0x0003bcf0) popup_imed_adjust2_window_g2

0xcca0,	// (0x0003bcfc) popup_imed_adjust2_window_g3_ParamLimits

0xcca0,	// (0x0003bcfc) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003e83b) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003e83b) popup_imed_adjust2_window_g

0xccac,	// (0x0003bd08) popup_imed_adjust2_window_t1_ParamLimits

0xccc4,	// (0x0003bd20) slider_imed_adjust_pane_ParamLimits

0xccd8,	// (0x0003bd34) slider_imed_adjust_pane_g1_ParamLimits

0xcce8,	// (0x0003bd44) slider_imed_adjust_pane_g2_ParamLimits

0xccf8,	// (0x0003bd54) slider_imed_adjust_pane_g3_ParamLimits

0xcd09,	// (0x0003bd65) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003e842) slider_imed_adjust_pane_g_ParamLimits

0x07e0,	// (0x0002f83c) aid_touch_area_cam4_ParamLimits

0x07e0,	// (0x0002f83c) aid_touch_area_cam4

0x6536,	// (0x00035592) battery_pane_cp01

0x08b2,	// (0x0002f90e) main_camera4_pane_g6_ParamLimits

0x08b2,	// (0x0002f90e) main_camera4_pane_g6

0x08dc,	// (0x0002f938) main_camera4_pane_t2_ParamLimits

0x08dc,	// (0x0002f938) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003e945) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003e945) main_camera4_pane_t

0x08fd,	// (0x0002f959) aid_touch_area_vid4_ParamLimits

0x08fd,	// (0x0002f959) aid_touch_area_vid4

0x0951,	// (0x0002f9ad) main_video4_pane_g5_ParamLimits

0x0951,	// (0x0002f9ad) main_video4_pane_g5

0x0976,	// (0x0002f9d2) vid4_progress_pane_ParamLimits

0x0976,	// (0x0002f9d2) vid4_progress_pane

0xd321,	// (0x0003c37d) main_cset_slider_pane_g18_ParamLimits

0xd321,	// (0x0003c37d) main_cset_slider_pane_g18

0xd574,	// (0x0003c5d0) cell_cam4_burst_pane_g2_ParamLimits

0xd574,	// (0x0003c5d0) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003eaa4) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003eaa4) cell_cam4_burst_pane_g

0xa3a0,	// (0x000393fc) bg_cl_pane_ParamLimits

0xa3a0,	// (0x000393fc) bg_cl_pane

0x72de,	// (0x0003633a) cl_header_pane_ParamLimits

0x72de,	// (0x0003633a) cl_header_pane

0x72f2,	// (0x0003634e) cl_listscroll_pane_ParamLimits

0x72f2,	// (0x0003634e) cl_listscroll_pane

0xd75e,	// (0x0003c7ba) bg_cl_pane_g1

0xd766,	// (0x0003c7c2) bg_cl_pane_g2

0xd76e,	// (0x0003c7ca) bg_cl_pane_g3

0xd776,	// (0x0003c7d2) bg_cl_pane_g4

0xd77e,	// (0x0003c7da) bg_cl_pane_g5

0xd786,	// (0x0003c7e2) bg_cl_pane_g6

0xd78e,	// (0x0003c7ea) bg_cl_pane_g7

0xd796,	// (0x0003c7f2) bg_cl_pane_g8

0xd79e,	// (0x0003c7fa) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003eadf) bg_cl_pane_g

0x7302,	// (0x0003635e) aid_height_cl_leading_ParamLimits

0x7302,	// (0x0003635e) aid_height_cl_leading

0x730e,	// (0x0003636a) aid_height_cl_text_ParamLimits

0x730e,	// (0x0003636a) aid_height_cl_text

0x9c5f,	// (0x00038cbb) bg_cl_header_pane_ParamLimits

0x9c5f,	// (0x00038cbb) bg_cl_header_pane

0x732d,	// (0x00036389) cl_header_pane_g1_ParamLimits

0x732d,	// (0x00036389) cl_header_pane_g1

0x7343,	// (0x0003639f) cl_header_pane_t1_ParamLimits

0x7343,	// (0x0003639f) cl_header_pane_t1

0xd7a6,	// (0x0003c802) cl_list_pane

0xd2f4,	// (0x0003c350) hc_scroll_pane_cp01

0xa7a9,	// (0x00039805) bg_cl_header_pane_g1

0xd1d6,	// (0x0003c232) bg_cl_header_pane_g2

0xa7c9,	// (0x00039825) bg_cl_header_pane_g3

0xd1e6,	// (0x0003c242) bg_cl_header_pane_g4

0xd1de,	// (0x0003c23a) bg_cl_header_pane_g5

0xd40e,	// (0x0003c46a) bg_cl_header_pane_g6

0xd1fe,	// (0x0003c25a) bg_cl_header_pane_g7

0xd206,	// (0x0003c262) bg_cl_header_pane_g8

0xd1f6,	// (0x0003c252) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003eaf2) bg_cl_header_pane_g

0x735c,	// (0x000363b8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x735c,	// (0x000363b8) hc_cl_list_double_graphic_heading_pane

0x736f,	// (0x000363cb) hc_cl_list_single_graphic_pane_ParamLimits

0x736f,	// (0x000363cb) hc_cl_list_single_graphic_pane

0x7387,	// (0x000363e3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7387,	// (0x000363e3) hc_cl_list_single_graphic_pane_g1

0x7393,	// (0x000363ef) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7393,	// (0x000363ef) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003eb05) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003eb05) hc_cl_list_single_graphic_pane_g

0x73a7,	// (0x00036403) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x73a7,	// (0x00036403) hc_cl_list_single_graphic_pane_t1

0x7387,	// (0x000363e3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7387,	// (0x000363e3) hc_cl_list_double_graphic_heading_pane_g1

0x73bc,	// (0x00036418) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x73bc,	// (0x00036418) hc_cl_list_double_graphic_heading_pane_g2

0x73d0,	// (0x0003642c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73d0,	// (0x0003642c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003eb0a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003eb0a) hc_cl_list_double_graphic_heading_pane_g

0x73e4,	// (0x00036440) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73e4,	// (0x00036440) hc_cl_list_double_graphic_heading_pane_t1

0x73f9,	// (0x00036455) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73f9,	// (0x00036455) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003eb11) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003eb11) hc_cl_list_double_graphic_heading_pane_t

0x0e58,	// (0x0002feb4) vid4_progress_pane_g1

0x0e6a,	// (0x0002fec6) vid4_progress_pane_g2

0x3d25,	// (0x00032d81) vid4_progress_pane_g3

0x7416,	// (0x00036472) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003eb16) vid4_progress_pane_g

0x7434,	// (0x00036490) vid4_progress_pane_t1

0x7449,	// (0x000364a5) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003eb21) vid4_progress_pane_t

0x7474,	// (0x000364d0) wait_bar_pane_cp07

0xc569,	// (0x0003b5c5) blid_firmament_pane_ParamLimits

0xc5ac,	// (0x0003b608) popup_blid_sat_info2_window_g1

0xc5d0,	// (0x0003b62c) popup_blid_sat_info2_window_t3

0xc5de,	// (0x0003b63a) popup_blid_sat_info2_window_t4

0xc5ec,	// (0x0003b648) popup_blid_sat_info2_window_t5

0xc5fa,	// (0x0003b656) popup_blid_sat_info2_window_t6

0xc60a,	// (0x0003b666) popup_blid_sat_info2_window_t7

0xc618,	// (0x0003b674) popup_blid_sat_info2_window_t8

0xc626,	// (0x0003b682) popup_blid_sat_info2_window_t9

0xc634,	// (0x0003b690) popup_blid_sat_info2_window_t10

0xc6fc,	// (0x0003b758) aid_firma_cardinal_ParamLimits

0xc710,	// (0x0003b76c) blid_firmament_pane_t1_ParamLimits

0xc727,	// (0x0003b783) blid_firmament_pane_t2_ParamLimits

0xc73e,	// (0x0003b79a) blid_firmament_pane_t3_ParamLimits

0xc755,	// (0x0003b7b1) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0003e72f) blid_firmament_pane_t_ParamLimits

0xc76c,	// (0x0003b7c8) blid_sat_info_pane_ParamLimits

0x9c5f,	// (0x00038cbb) main_cam_set_pane_ParamLimits

0x5c92,	// (0x00034cee) aid_size_cell_colour_35_ParamLimits

0x5cb2,	// (0x00034d0e) aid_size_cell_colour_112_ParamLimits

0x5cd2,	// (0x00034d2e) aid_size_cell_effect_ParamLimits

0xc323,	// (0x0003b37f) bg_tb_trans_pane_cp02_ParamLimits

0xaa02,	// (0x00039a5e) heading_imed_pane_ParamLimits

0x5cf2,	// (0x00034d4e) listscroll_imed_pane_ParamLimits

0xb939,	// (0x0003a995) popup_call2_audio_first_window_g5_ParamLimits

0xb939,	// (0x0003a995) popup_call2_audio_first_window_g5

0x05bb,	// (0x0002f617) aid_size_touch_image3_arrow_left_ParamLimits

0x05bb,	// (0x0002f617) aid_size_touch_image3_arrow_left

0x05e7,	// (0x0002f643) aid_size_touch_image3_arrow_right_ParamLimits

0x05e7,	// (0x0002f643) aid_size_touch_image3_arrow_right

0x745f,	// (0x000364bb) vid4_progress_pane_t3

0x6011,	// (0x0003506d) main_hwr_training_symbol_option_pane_ParamLimits

0x6011,	// (0x0003506d) main_hwr_training_symbol_option_pane

0xcf74,	// (0x0003bfd0) popup_hwr_training_preview_window_ParamLimits

0xcf74,	// (0x0003bfd0) popup_hwr_training_preview_window

0x0458,	// (0x0002f4b4) hwr_training_navi_pane_g5_ParamLimits

0x0458,	// (0x0002f4b4) hwr_training_navi_pane_g5

0xd1c4,	// (0x0003c220) popup_char_count_window

0x65cb,	// (0x00035627) bg_popup_sub_pane_cp20_ParamLimits

0x0dbf,	// (0x0002fe1b) list_vitu2_match_list_pane_ParamLimits

0x0dce,	// (0x0002fe2a) vitu2_page_scroll_pane_ParamLimits

0x0dce,	// (0x0002fe2a) vitu2_page_scroll_pane

0xd7d1,	// (0x0003c82d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7d1,	// (0x0003c82d) list_single_hwr_training_symbol_option_pane

0xd7e4,	// (0x0003c840) list_single_hwr_training_symbol_option_pane_g1

0xd7ec,	// (0x0003c848) list_single_hwr_training_symbol_option_pane_t1

0xd7fa,	// (0x0003c856) bg_button_pane_cp023

0xd803,	// (0x0003c85f) bg_button_pane_cp024

0x74b7,	// (0x00036513) vitu2_page_scroll_pane_g1

0x74bf,	// (0x0003651b) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003eb28) vitu2_page_scroll_pane_g

0x74c9,	// (0x00036525) vitu2_page_scroll_pane_t1

0xc4c1,	// (0x0003b51d) popup_char_count_window_g1

0xd836,	// (0x0003c892) popup_char_count_window_g2

0xd83f,	// (0x0003c89b) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003eb2d) popup_char_count_window_g

0xd848,	// (0x0003c8a4) popup_char_count_window_t1

0x9bfe,	// (0x00038c5a) main_vded2_pane

0xcc71,	// (0x0003bccd) aid_size_cell_imed_line

0xcc7b,	// (0x0003bcd7) grid_imed_line_width_pane

0x6620,	// (0x0003567c) vid4_indicators_pane_g4

0xd856,	// (0x0003c8b2) cell_imed_line_width_pane_ParamLimits

0xd856,	// (0x0003c8b2) cell_imed_line_width_pane

0xd86c,	// (0x0003c8c8) cell_imed_line_width_pane_g1

0xc543,	// (0x0003b59f) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003eb34) cell_imed_line_width_pane_g

0x74d8,	// (0x00036534) main_vded2_pane_g1_ParamLimits

0x74d8,	// (0x00036534) main_vded2_pane_g1

0x74f3,	// (0x0003654f) main_vded2_pane_g2_ParamLimits

0x74f3,	// (0x0003654f) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003eb39) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003eb39) main_vded2_pane_g

0x7505,	// (0x00036561) vded2_slider_pane_ParamLimits

0x7505,	// (0x00036561) vded2_slider_pane

0x7515,	// (0x00036571) aid_size_touch_vded2_end

0x751f,	// (0x0003657b) aid_size_touch_vded2_playhead

0xd875,	// (0x0003c8d1) aid_size_touch_vded2_start

0xd87d,	// (0x0003c8d9) vded2_slider_bg_pane

0xd886,	// (0x0003c8e2) vded2_slider_pane_g1

0xd88f,	// (0x0003c8eb) vded2_slider_pane_g2

0x7529,	// (0x00036585) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003eb3e) vded2_slider_pane_g

0xd4bd,	// (0x0003c519) vded2_slider_bg_pane_g1

0xd4c6,	// (0x0003c522) vded2_slider_bg_pane_g2

0xd4cf,	// (0x0003c52b) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003eb45) vded2_slider_bg_pane_g

0x3d3d,	// (0x00032d99) aid_postcard_touch_down_pane_ParamLimits

0x3d3d,	// (0x00032d99) aid_postcard_touch_down_pane

0x3d55,	// (0x00032db1) aid_postcard_touch_up_pane_ParamLimits

0x3d55,	// (0x00032db1) aid_postcard_touch_up_pane

0x9bfe,	// (0x00038c5a) main_blid2_pane

0xc331,	// (0x0003b38d) popup_blid2_search_window

0x9bfe,	// (0x00038c5a) blid2_gps_pane

0x9bfe,	// (0x00038c5a) blid2_navig_pane

0x9bfe,	// (0x00038c5a) blid2_search_pane

0x9bfe,	// (0x00038c5a) blid2_tripm_pane

0x7534,	// (0x00036590) blid2_search_pane_g1_ParamLimits

0x7534,	// (0x00036590) blid2_search_pane_g1

0x7547,	// (0x000365a3) blid2_search_pane_t1_ParamLimits

0x7547,	// (0x000365a3) blid2_search_pane_t1

0x7559,	// (0x000365b5) aid_size_cell_blid2_gps_ParamLimits

0x7559,	// (0x000365b5) aid_size_cell_blid2_gps

0x7571,	// (0x000365cd) blid2_gps_pane_g1_ParamLimits

0x7571,	// (0x000365cd) blid2_gps_pane_g1

0x7585,	// (0x000365e1) grid_blid2_satellite_pane_ParamLimits

0x7585,	// (0x000365e1) grid_blid2_satellite_pane

0x759d,	// (0x000365f9) blid2_navig_pane_g1_ParamLimits

0x759d,	// (0x000365f9) blid2_navig_pane_g1

0x75a9,	// (0x00036605) blid2_navig_pane_t1_ParamLimits

0x75a9,	// (0x00036605) blid2_navig_pane_t1

0x75c4,	// (0x00036620) blid2_navig_pane_t2_ParamLimits

0x75c4,	// (0x00036620) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003eb4c) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003eb4c) blid2_navig_pane_t

0x75df,	// (0x0003663b) blid2_navig_ring_pane_ParamLimits

0x75df,	// (0x0003663b) blid2_navig_ring_pane

0x75fa,	// (0x00036656) blid2_speed_pane_ParamLimits

0x75fa,	// (0x00036656) blid2_speed_pane

0x7606,	// (0x00036662) blid2_tripm_pane_g1_ParamLimits

0x7606,	// (0x00036662) blid2_tripm_pane_g1

0x7621,	// (0x0003667d) blid2_tripm_pane_g2_ParamLimits

0x7621,	// (0x0003667d) blid2_tripm_pane_g2

0x7635,	// (0x00036691) blid2_tripm_pane_g3_ParamLimits

0x7635,	// (0x00036691) blid2_tripm_pane_g3

0x7649,	// (0x000366a5) blid2_tripm_pane_g4_ParamLimits

0x7649,	// (0x000366a5) blid2_tripm_pane_g4

0x765d,	// (0x000366b9) blid2_tripm_pane_g5_ParamLimits

0x765d,	// (0x000366b9) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003eb51) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003eb51) blid2_tripm_pane_g

0x7683,	// (0x000366df) blid2_tripm_pane_t1_ParamLimits

0x7683,	// (0x000366df) blid2_tripm_pane_t1

0x769c,	// (0x000366f8) blid2_tripm_pane_t2_ParamLimits

0x769c,	// (0x000366f8) blid2_tripm_pane_t2

0x76b5,	// (0x00036711) blid2_tripm_pane_t3_ParamLimits

0x76b5,	// (0x00036711) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003eb5e) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003eb5e) blid2_tripm_pane_t

0x76fc,	// (0x00036758) cell_blid2_satellite_pane_ParamLimits

0x76fc,	// (0x00036758) cell_blid2_satellite_pane

0x771a,	// (0x00036776) cell_blid2_satellite_pane_g1

0xd897,	// (0x0003c8f3) cell_blid2_satellite_pane_t1

0xc77c,	// (0x0003b7d8) blid2_speed_pane_g1

0xd8a5,	// (0x0003c901) blid2_speed_pane_t1

0xd8b3,	// (0x0003c90f) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003eb67) blid2_speed_pane_t

0xc77c,	// (0x0003b7d8) blid2_navig_ring_pane_g1

0x7723,	// (0x0003677f) blid2_navig_ring_pane_g2

0x772b,	// (0x00036787) blid2_navig_ring_pane_g3

0x7733,	// (0x0003678f) blid2_navig_ring_pane_g4

0x773b,	// (0x00036797) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003eb6c) blid2_navig_ring_pane_g

0x9bfe,	// (0x00038c5a) bg_popup_window_pane_cp011

0xd8c1,	// (0x0003c91d) popup_blid2_search_window_g1

0xd8c9,	// (0x0003c925) popup_blid2_search_window_t1

0xd8d7,	// (0x0003c933) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003eb77) popup_blid2_search_window_t

0xa6b8,	// (0x00039714) main_browser_pane_g1

0xa3a0,	// (0x000393fc) main_browser_pane_ParamLimits

0x65cb,	// (0x00035627) bg_button_pane_cp011_ParamLimits

0x0d33,	// (0x0002fd8f) cell_vitu2_function_pane_g1_ParamLimits

0xc323,	// (0x0003b37f) bg_popup_sub_pane_cp22_ParamLimits

0x6f66,	// (0x00035fc2) input_focus_pane_cp08_ParamLimits

0x6f7d,	// (0x00035fd9) popup_vitu2_query_button_pane_ParamLimits

0x6f7d,	// (0x00035fd9) popup_vitu2_query_button_pane

0x6f8e,	// (0x00035fea) popup_vitu2_query_input_button_pane

0xd455,	// (0x0003c4b1) popup_vitu2_query_window_g1_ParamLimits

0x6f98,	// (0x00035ff4) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003ea78) popup_vitu2_query_window_g_ParamLimits

0x9bfe,	// (0x00038c5a) bg_button_pane_cp026

0x7743,	// (0x0003679f) popup_vitu2_query_input_button_pane_g1

0x9bfe,	// (0x00038c5a) bg_button_pane_cp025

0xd8e5,	// (0x0003c941) popup_vitu2_query_button_pane_t1

0x50ad,	// (0x00034109) main_mp3_pane_t6

0x50bb,	// (0x00034117) popup_slider_window_cp01

0x6576,	// (0x000355d2) cam4_battery_pane

0x65d9,	// (0x00035635) cam4_battery_pane_cp02

0x740e,	// (0x0003646a) cam4_battery_pane_cp01

0x740e,	// (0x0003646a) cam4_battery_pane_cp03

0xd51c,	// (0x0003c578) cam4_battery_pane_g1

0xc77c,	// (0x0003b7d8) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003eb7c) cam4_battery_pane_g

0xc642,	// (0x0003b69e) popup_blid_sat_info2_window_t11

0x3634,	// (0x00032690) aid_size_touch_mv_arrow_left_ParamLimits

0x365d,	// (0x000326b9) aid_size_touch_mv_arrow_right_ParamLimits

0xadf6,	// (0x00039e52) navi_pane_g1_ParamLimits

0x369c,	// (0x000326f8) navi_pane_g2_ParamLimits

0x36ca,	// (0x00032726) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003e441) navi_pane_g_ParamLimits

0x3724,	// (0x00032780) navi_pane_mv_t1_ParamLimits

0x5cfe,	// (0x00034d5a) grid_imed_effect_pane_ParamLimits

0x2061,	// (0x000310bd) aid_placing_vt_slider_lsc

0xa603,	// (0x0003965f) aid_placing_vt_slider_prt

0x9c5f,	// (0x00038cbb) bg_tb_trans_pane_cp01_ParamLimits

0xc8cc,	// (0x0003b928) popup_image_details_window_g1_ParamLimits

0xc8df,	// (0x0003b93b) popup_image_details_window_g2_ParamLimits

0xc8f4,	// (0x0003b950) popup_image_details_window_g3_ParamLimits

0xc8f4,	// (0x0003b950) popup_image_details_window_g3

0xf718,	// (0x0003e774) popup_image_details_window_g_ParamLimits

0xc908,	// (0x0003b964) popup_image_details_window_t1_ParamLimits

0xc91a,	// (0x0003b976) popup_image_details_window_t2_ParamLimits

0xc933,	// (0x0003b98f) popup_image_details_window_t3_ParamLimits

0xc947,	// (0x0003b9a3) popup_image_details_window_t4_ParamLimits

0xc962,	// (0x0003b9be) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0003e77b) popup_image_details_window_t_ParamLimits

0x731a,	// (0x00036376) cl_header_name_pane_ParamLimits

0x731a,	// (0x00036376) cl_header_name_pane

0x774b,	// (0x000367a7) cl_header_name_pane_t1_ParamLimits

0x774b,	// (0x000367a7) cl_header_name_pane_t1

0x776c,	// (0x000367c8) cl_header_name_pane_t2_ParamLimits

0x776c,	// (0x000367c8) cl_header_name_pane_t2

0x77ae,	// (0x0003680a) cl_header_name_pane_t3_ParamLimits

0x77ae,	// (0x0003680a) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003eb81) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003eb81) cl_header_name_pane_t

0x36f5,	// (0x00032751) navi_pane_mv_g2_ParamLimits

0xd156,	// (0x0003c1b2) field_vitu2_entry_pane_g1_ParamLimits

0xd162,	// (0x0003c1be) field_vitu2_entry_pane_g2_ParamLimits

0xd16e,	// (0x0003c1ca) field_vitu2_entry_pane_g3_ParamLimits

0xd16e,	// (0x0003c1ca) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003e977) field_vitu2_entry_pane_g_ParamLimits

0x0bce,	// (0x0002fc2a) cell_vitu2_itu_pane_g1_ParamLimits

0x0bde,	// (0x0002fc3a) cell_vitu2_itu_pane_g2_ParamLimits

0x0bde,	// (0x0002fc3a) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003e983) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003e983) cell_vitu2_itu_pane_g

0x65cb,	// (0x00035627) bg_vkb2_func_pane_cp05_ParamLimits

0x65cb,	// (0x00035627) bg_vkb2_func_pane_cp05

0x65cb,	// (0x00035627) bg_vkb2_func_pane_cp03

0x65cb,	// (0x00035627) bg_vkb2_func_pane_cp04

0x65cb,	// (0x00035627) bg_vkb2_func_pane_cp10_ParamLimits

0x65cb,	// (0x00035627) bg_vkb2_func_pane_cp10

0x72bc,	// (0x00036318) bg_vkb2_func_pane_cp08

0x72a2,	// (0x000362fe) bg_vkb2_func_pane_cp06

0x72b0,	// (0x0003630c) bg_vkb2_func_pane_cp07

0xd80c,	// (0x0003c868) bg_vkb2_func_pane_cp11_ParamLimits

0xd80c,	// (0x0003c868) bg_vkb2_func_pane_cp11

0xd821,	// (0x0003c87d) bg_vkb2_func_pane_cp12_ParamLimits

0xd821,	// (0x0003c87d) bg_vkb2_func_pane_cp12

0x9bfe,	// (0x00038c5a) bg_vkb2_func_pane_cp09

0xd1d6,	// (0x0003c232) bg_vkb2_func_pane_g1

0xa7c9,	// (0x00039825) bg_vkb2_func_pane_g2

0xd1de,	// (0x0003c23a) bg_vkb2_func_pane_g3

0xd1e6,	// (0x0003c242) bg_vkb2_func_pane_g4

0xd40e,	// (0x0003c46a) bg_vkb2_func_pane_g5

0xd1fe,	// (0x0003c25a) bg_vkb2_func_pane_g6

0xd206,	// (0x0003c262) bg_vkb2_func_pane_g7

0xd1f6,	// (0x0003c252) bg_vkb2_func_pane_g8

0xa7a9,	// (0x00039805) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003eb88) bg_vkb2_func_pane_g

0x7671,	// (0x000366cd) blid2_tripm_pane_g6_ParamLimits

0x7671,	// (0x000366cd) blid2_tripm_pane_g6

0xd02c,	// (0x0003c088) mp4_progress_pane_g1

0x76e8,	// (0x00036744) blid2_tripm_values_pane_ParamLimits

0x76e8,	// (0x00036744) blid2_tripm_values_pane

0x77df,	// (0x0003683b) blid2_tripm_values_pane_t1

0x77ed,	// (0x00036849) blid2_tripm_values_pane_t2

0x77fb,	// (0x00036857) blid2_tripm_values_pane_t3

0x7809,	// (0x00036865) blid2_tripm_values_pane_t4

0x7817,	// (0x00036873) blid2_tripm_values_pane_t5

0x7825,	// (0x00036881) blid2_tripm_values_pane_t6

0x7833,	// (0x0003688f) blid2_tripm_values_pane_t7

0x7841,	// (0x0003689d) blid2_tripm_values_pane_t8

0x784f,	// (0x000368ab) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003eb9b) blid2_tripm_values_pane_t

0x209e,	// (0x000310fa) call_video_pane_t1_ParamLimits

0x20b8,	// (0x00031114) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003e2ca) call_video_pane_t_ParamLimits

0x3c80,	// (0x00032cdc) msg_header_pane_g1_ParamLimits

0xb035,	// (0x0003a091) msg_header_pane_g2_ParamLimits

0xb035,	// (0x0003a091) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003e4e4) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003e4e4) msg_header_pane_g

0xa3a0,	// (0x000393fc) main_clock2_pane_ParamLimits

0x5a67,	// (0x00034ac3) grid_clock2_toolbar_pane_ParamLimits

0x5a67,	// (0x00034ac3) grid_clock2_toolbar_pane

0x5a67,	// (0x00034ac3) listscroll_clock2_pane_ParamLimits

0x5a67,	// (0x00034ac3) listscroll_clock2_pane

0x5b5e,	// (0x00034bba) main_clock2_pane_t3_ParamLimits

0x5b5e,	// (0x00034bba) main_clock2_pane_t3

0x5b82,	// (0x00034bde) main_clock2_pane_t4_ParamLimits

0x5b82,	// (0x00034bde) main_clock2_pane_t4

0xd8f3,	// (0x0003c94f) cell_clock2_toolbar_pane

0xd8fb,	// (0x0003c957) cell_clock2_toolbar_pane_cp01

0xd8fb,	// (0x0003c957) cell_clock2_toolbar_pane_cp02

0xd903,	// (0x0003c95f) cell_clock2_toolbar_pane_cp03

0xd90b,	// (0x0003c967) list_clock2_pane

0xad5c,	// (0x00039db8) scroll_pane_cp10

0xd913,	// (0x0003c96f) list_single_clock2_pane_ParamLimits

0xd913,	// (0x0003c96f) list_single_clock2_pane

0xae96,	// (0x00039ef2) list_highlight_pane_cp08

0xd920,	// (0x0003c97c) list_single_clock2_pane_t1

0xd92e,	// (0x0003c98a) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003ebae) list_single_clock2_pane_t

0x9bfe,	// (0x00038c5a) bg_button_pane_cp10

0xd93c,	// (0x0003c998) cell_clock2_toolbar_pane_g1

0xff36,	// (0x0002ef92) aid_main_viewer_pane_g1_ParamLimits

0xff36,	// (0x0002ef92) aid_main_viewer_pane_g1

0xff44,	// (0x0002efa0) aid_main_viewer_pane_g2_ParamLimits

0xff44,	// (0x0002efa0) aid_main_viewer_pane_g2

0x3cd7,	// (0x00032d33) aid_main_viewer_pane_g3_ParamLimits

0x3cd7,	// (0x00032d33) aid_main_viewer_pane_g3

0x3ce6,	// (0x00032d42) aid_main_viewer_pane_g4_ParamLimits

0x3ce6,	// (0x00032d42) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003e4f5) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003e4f5) aid_main_viewer_pane_g

0x4647,	// (0x000336a3) main_calc_pane_ParamLimits

0x465b,	// (0x000336b7) main_dialer2_pane_ParamLimits

0x9bfe,	// (0x00038c5a) main_cam6_pane

0x9bfe,	// (0x00038c5a) main_vid6_pane

0x5a73,	// (0x00034acf) listscroll_gen_pane_cp06_ParamLimits

0x5a73,	// (0x00034acf) listscroll_gen_pane_cp06

0x5ba5,	// (0x00034c01) main_clock2_pane_t5_ParamLimits

0x5ba5,	// (0x00034c01) main_clock2_pane_t5

0x5c05,	// (0x00034c61) aid_call2_pane_cp10_ParamLimits

0x5c17,	// (0x00034c73) aid_call_pane_cp10_ParamLimits

0xadcb,	// (0x00039e27) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadcb,	// (0x00039e27) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c29,	// (0x00034c85) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c29,	// (0x00034c85) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadcb,	// (0x00039e27) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003e830) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c3f,	// (0x00034c9b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6324,	// (0x00035380) cell_dialer2_keypad_pane_g2_ParamLimits

0x6324,	// (0x00035380) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003e916) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003e916) cell_dialer2_keypad_pane_g

0x6340,	// (0x0003539c) cell_dialer2_keypad_pane_t1

0x698a,	// (0x000359e6) main_cset_text2_pane_ParamLimits

0x698a,	// (0x000359e6) main_cset_text2_pane

0xd6b6,	// (0x0003c712) area_vitu2_query_pane_g1_ParamLimits

0x7241,	// (0x0003629d) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003eacb) area_vitu2_query_pane_g_ParamLimits

0xd73a,	// (0x0003c796) area_vitu2_query_pane_t7_ParamLimits

0xd73a,	// (0x0003c796) area_vitu2_query_pane_t7

0x72a2,	// (0x000362fe) bg_button_pane_cp018_ParamLimits

0x72b0,	// (0x0003630c) bg_button_pane_cp021_ParamLimits

0x72bc,	// (0x00036318) bg_button_pane_cp022_ParamLimits

0x72bc,	// (0x00036318) bg_vkb2_func_pane_cp08_ParamLimits

0x72a2,	// (0x000362fe) bg_vkb2_func_pane_cp06_ParamLimits

0x72b0,	// (0x0003630c) bg_vkb2_func_pane_cp07_ParamLimits

0x72cd,	// (0x00036329) input_focus_pane_cp09_ParamLimits

0x785d,	// (0x000368b9) cam6_autofocus_pane_ParamLimits

0x785d,	// (0x000368b9) cam6_autofocus_pane

0x0e7c,	// (0x0002fed8) cam6_image_uncrop_pane_ParamLimits

0x0e7c,	// (0x0002fed8) cam6_image_uncrop_pane

0x0e8b,	// (0x0002fee7) cam6_indi_pane_ParamLimits

0x0e8b,	// (0x0002fee7) cam6_indi_pane

0x0ea1,	// (0x0002fefd) cam6_mode_pane_ParamLimits

0x0ea1,	// (0x0002fefd) cam6_mode_pane

0x0eb3,	// (0x0002ff0f) cam6_timer_pane_ParamLimits

0x0eb3,	// (0x0002ff0f) cam6_timer_pane

0x0ebf,	// (0x0002ff1b) cam6_zoom_pane_ParamLimits

0x0ebf,	// (0x0002ff1b) cam6_zoom_pane

0x786b,	// (0x000368c7) cam6_mode_pane_g1_ParamLimits

0x786b,	// (0x000368c7) cam6_mode_pane_g1

0x787b,	// (0x000368d7) cam6_mode_pane_g2_ParamLimits

0x787b,	// (0x000368d7) cam6_mode_pane_g2

0x788b,	// (0x000368e7) cam6_mode_pane_g3_ParamLimits

0x788b,	// (0x000368e7) cam6_mode_pane_g3

0x789b,	// (0x000368f7) cam6_mode_pane_g4_ParamLimits

0x789b,	// (0x000368f7) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003ebb3) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003ebb3) cam6_mode_pane_g

0xd4d8,	// (0x0003c534) bg_tb_trans_pane_cp08_ParamLimits

0xd4d8,	// (0x0003c534) bg_tb_trans_pane_cp08

0xd944,	// (0x0003c9a0) cam6_battery_pane_ParamLimits

0xd944,	// (0x0003c9a0) cam6_battery_pane

0xd95a,	// (0x0003c9b6) cam6_indi_pane_g1_ParamLimits

0xd95a,	// (0x0003c9b6) cam6_indi_pane_g1

0xd96c,	// (0x0003c9c8) cam6_indi_pane_g2_ParamLimits

0xd96c,	// (0x0003c9c8) cam6_indi_pane_g2

0xd97e,	// (0x0003c9da) cam6_indi_pane_g3_ParamLimits

0xd97e,	// (0x0003c9da) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003ebbc) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003ebbc) cam6_indi_pane_g

0xd990,	// (0x0003c9ec) cam6_indi_pane_t1_ParamLimits

0xd990,	// (0x0003c9ec) cam6_indi_pane_t1

0x665d,	// (0x000356b9) cam6_autofocus_pane_g1

0x6655,	// (0x000356b1) cam6_autofocus_pane_g2

0x666d,	// (0x000356c9) cam6_autofocus_pane_g3

0x6665,	// (0x000356c1) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003ebc3) cam6_autofocus_pane_g

0xd9b6,	// (0x0003ca12) cam6_timer_pane_g1

0xd9be,	// (0x0003ca1a) cam6_timer_pane_t1

0xd9cc,	// (0x0003ca28) cam6_zoom_cont_pane

0xd9d4,	// (0x0003ca30) cam6_zoom_pane_g1

0xd9dc,	// (0x0003ca38) cam6_zoom_pane_g2

0x78ab,	// (0x00036907) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003ebcc) cam6_zoom_pane_g

0xc77c,	// (0x0003b7d8) cam6_battery_pane_g1

0xc77c,	// (0x0003b7d8) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0003e738) cam6_battery_pane_g

0xd9e4,	// (0x0003ca40) cam6_zoom_cont_pane_g1

0xd9ed,	// (0x0003ca49) cam6_zoom_cont_pane_g2

0xd9f6,	// (0x0003ca52) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003ebd3) cam6_zoom_cont_pane_g

0x78c8,	// (0x00036924) cam6_mode_pane_cp_ParamLimits

0x78c8,	// (0x00036924) cam6_mode_pane_cp

0x78da,	// (0x00036936) cam6_zoom_pane_cp_ParamLimits

0x78da,	// (0x00036936) cam6_zoom_pane_cp

0x78e8,	// (0x00036944) vid6_image_uncrop_cif_pane_ParamLimits

0x78e8,	// (0x00036944) vid6_image_uncrop_cif_pane

0x78f8,	// (0x00036954) vid6_image_uncrop_nhd_pane_ParamLimits

0x78f8,	// (0x00036954) vid6_image_uncrop_nhd_pane

0x7907,	// (0x00036963) vid6_image_uncrop_vga_pane_ParamLimits

0x7907,	// (0x00036963) vid6_image_uncrop_vga_pane

0x7916,	// (0x00036972) vid6_image_uncrop_wvga_pane_ParamLimits

0x7916,	// (0x00036972) vid6_image_uncrop_wvga_pane

0x7925,	// (0x00036981) vid6_indi_pane_ParamLimits

0x7925,	// (0x00036981) vid6_indi_pane

0xd4d8,	// (0x0003c534) bg_tb_trans_pane_cp09_ParamLimits

0xd4d8,	// (0x0003c534) bg_tb_trans_pane_cp09

0xda0e,	// (0x0003ca6a) cam6_battery_pane_cp_ParamLimits

0xda0e,	// (0x0003ca6a) cam6_battery_pane_cp

0xda1a,	// (0x0003ca76) vid6_indi_pane_g1_ParamLimits

0xda1a,	// (0x0003ca76) vid6_indi_pane_g1

0xda2c,	// (0x0003ca88) vid6_indi_pane_g2_ParamLimits

0xda2c,	// (0x0003ca88) vid6_indi_pane_g2

0xda3e,	// (0x0003ca9a) vid6_indi_pane_g3_ParamLimits

0xda3e,	// (0x0003ca9a) vid6_indi_pane_g3

0xda55,	// (0x0003cab1) vid6_indi_pane_g4_ParamLimits

0xda55,	// (0x0003cab1) vid6_indi_pane_g4

0xda6c,	// (0x0003cac8) vid6_indi_pane_g5_ParamLimits

0xda6c,	// (0x0003cac8) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003ebda) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003ebda) vid6_indi_pane_g

0xda86,	// (0x0003cae2) vid6_indi_pane_t1_ParamLimits

0xda86,	// (0x0003cae2) vid6_indi_pane_t1

0xda9c,	// (0x0003caf8) vid6_indi_pane_t2_ParamLimits

0xda9c,	// (0x0003caf8) vid6_indi_pane_t2

0xdac4,	// (0x0003cb20) vid6_indi_pane_t3_ParamLimits

0xdac4,	// (0x0003cb20) vid6_indi_pane_t3

0xdaec,	// (0x0003cb48) vid6_indi_pane_t4_ParamLimits

0xdaec,	// (0x0003cb48) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003ebe5) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003ebe5) vid6_indi_pane_t

0xdb10,	// (0x0003cb6c) wait_bar_pane_cp08

0x793d,	// (0x00036999) main_cset_text2_pane_t1_ParamLimits

0x793d,	// (0x00036999) main_cset_text2_pane_t1

0x78b3,	// (0x0003690f) listscroll_gen_pane_cp06_t1_ParamLimits

0x78b3,	// (0x0003690f) listscroll_gen_pane_cp06_t1

0x9bfe,	// (0x00038c5a) main_cam6_set_pane

0x6568,	// (0x000355c4) bg_tb_trans_pane_cp06_ParamLimits

0x657e,	// (0x000355da) cam4_indicators_pane_g1_ParamLimits

0x658f,	// (0x000355eb) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003e953) cam4_indicators_pane_g_ParamLimits

0x65a7,	// (0x00035603) cam4_indicators_pane_t1_ParamLimits

0x65cb,	// (0x00035627) bg_tb_trans_pane_cp07_ParamLimits

0x65e3,	// (0x0003563f) vid4_indicators_pane_g1_ParamLimits

0x65f9,	// (0x00035655) vid4_indicators_pane_g2_ParamLimits

0x660d,	// (0x00035669) vid4_indicators_pane_g3_ParamLimits

0x6620,	// (0x0003567c) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003e965) vid4_indicators_pane_g_ParamLimits

0x663e,	// (0x0003569a) vid4_indicators_pane_t1_ParamLimits

0x0e58,	// (0x0002feb4) vid4_progress_pane_g1_ParamLimits

0x0e6a,	// (0x0002fec6) vid4_progress_pane_g2_ParamLimits

0x3d25,	// (0x00032d81) vid4_progress_pane_g3_ParamLimits

0x7416,	// (0x00036472) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003eb16) vid4_progress_pane_g_ParamLimits

0x7434,	// (0x00036490) vid4_progress_pane_t1_ParamLimits

0x7449,	// (0x000364a5) vid4_progress_pane_t2_ParamLimits

0x745f,	// (0x000364bb) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003eb21) vid4_progress_pane_t_ParamLimits

0x7474,	// (0x000364d0) wait_bar_pane_cp07_ParamLimits

0x795b,	// (0x000369b7) main_cam6_set_pane_g2_ParamLimits

0x795b,	// (0x000369b7) main_cam6_set_pane_g2

0x7981,	// (0x000369dd) main_cset6_listscroll_pane_ParamLimits

0x7981,	// (0x000369dd) main_cset6_listscroll_pane

0x799f,	// (0x000369fb) main_cset6_slider_pane_ParamLimits

0x799f,	// (0x000369fb) main_cset6_slider_pane

0x79b5,	// (0x00036a11) main_cset6_text2_pane_ParamLimits

0x79b5,	// (0x00036a11) main_cset6_text2_pane

0xdb1f,	// (0x0003cb7b) main_cset6_text_pane

0xdb27,	// (0x0003cb83) main_cset_list_pane_copy1_ParamLimits

0xdb27,	// (0x0003cb83) main_cset_list_pane_copy1

0xdb37,	// (0x0003cb93) scroll_pane_cp028_copy1

0x3171,	// (0x000321cd) cset_list_set_pane_copy1

0x79c3,	// (0x00036a1f) aid_position_infowindow_above_copy1

0x79cb,	// (0x00036a27) aid_position_infowindow_below_copy1

0x79d3,	// (0x00036a2f) cset_list_set_pane_g1_copy1

0x79db,	// (0x00036a37) cset_list_set_pane_g3_copy1_ParamLimits

0x79db,	// (0x00036a37) cset_list_set_pane_g3_copy1

0x79ea,	// (0x00036a46) cset_list_set_pane_t1_copy1_ParamLimits

0x79ea,	// (0x00036a46) cset_list_set_pane_t1_copy1

0x9c5f,	// (0x00038cbb) list_highlight_pane_cp021_copy1_ParamLimits

0x9c5f,	// (0x00038cbb) list_highlight_pane_cp021_copy1

0xdb40,	// (0x0003cb9c) cset6_slider_pane_ParamLimits

0xdb40,	// (0x0003cb9c) cset6_slider_pane

0xdb6c,	// (0x0003cbc8) main_cset6_slider_pane_g1_ParamLimits

0xdb6c,	// (0x0003cbc8) main_cset6_slider_pane_g1

0x79ff,	// (0x00036a5b) main_cset6_slider_pane_g2_ParamLimits

0x79ff,	// (0x00036a5b) main_cset6_slider_pane_g2

0xdb94,	// (0x0003cbf0) main_cset6_slider_pane_g3_ParamLimits

0xdb94,	// (0x0003cbf0) main_cset6_slider_pane_g3

0x7a27,	// (0x00036a83) main_cset6_slider_pane_g4_ParamLimits

0x7a27,	// (0x00036a83) main_cset6_slider_pane_g4

0x7a33,	// (0x00036a8f) main_cset6_slider_pane_g5_ParamLimits

0x7a33,	// (0x00036a8f) main_cset6_slider_pane_g5

0xd309,	// (0x0003c365) main_cset6_slider_pane_g7_ParamLimits

0xd309,	// (0x0003c365) main_cset6_slider_pane_g7

0xd315,	// (0x0003c371) main_cset6_slider_pane_g8_ParamLimits

0xd315,	// (0x0003c371) main_cset6_slider_pane_g8

0x6a39,	// (0x00035a95) main_cset6_slider_pane_g9_ParamLimits

0x6a39,	// (0x00035a95) main_cset6_slider_pane_g9

0x6a45,	// (0x00035aa1) main_cset6_slider_pane_g10_ParamLimits

0x6a45,	// (0x00035aa1) main_cset6_slider_pane_g10

0x6a51,	// (0x00035aad) main_cset6_slider_pane_g11_ParamLimits

0x6a51,	// (0x00035aad) main_cset6_slider_pane_g11

0x6a5d,	// (0x00035ab9) main_cset6_slider_pane_g12_ParamLimits

0x6a5d,	// (0x00035ab9) main_cset6_slider_pane_g12

0x6a69,	// (0x00035ac5) main_cset6_slider_pane_g13_ParamLimits

0x6a69,	// (0x00035ac5) main_cset6_slider_pane_g13

0x6a75,	// (0x00035ad1) main_cset6_slider_pane_g14_ParamLimits

0x6a75,	// (0x00035ad1) main_cset6_slider_pane_g14

0x7a41,	// (0x00036a9d) main_cset6_slider_pane_g15_ParamLimits

0x7a41,	// (0x00036a9d) main_cset6_slider_pane_g15

0x6a99,	// (0x00035af5) main_cset6_slider_pane_g16_ParamLimits

0x6a99,	// (0x00035af5) main_cset6_slider_pane_g16

0x6aa7,	// (0x00035b03) main_cset6_slider_pane_g17_ParamLimits

0x6aa7,	// (0x00035b03) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003ebee) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003ebee) main_cset6_slider_pane_g

0xdba0,	// (0x0003cbfc) main_cset6_slider_pane_t1_ParamLimits

0xdba0,	// (0x0003cbfc) main_cset6_slider_pane_t1

0x7a71,	// (0x00036acd) main_cset6_slider_pane_t2_ParamLimits

0x7a71,	// (0x00036acd) main_cset6_slider_pane_t2

0x7a9c,	// (0x00036af8) main_cset6_slider_pane_t3_ParamLimits

0x7a9c,	// (0x00036af8) main_cset6_slider_pane_t3

0x7ac7,	// (0x00036b23) main_cset6_slider_pane_t4_ParamLimits

0x7ac7,	// (0x00036b23) main_cset6_slider_pane_t4

0x7af2,	// (0x00036b4e) main_cset6_slider_pane_t5_ParamLimits

0x7af2,	// (0x00036b4e) main_cset6_slider_pane_t5

0xdbe1,	// (0x0003cc3d) main_cset6_slider_pane_t7_ParamLimits

0xdbe1,	// (0x0003cc3d) main_cset6_slider_pane_t7

0x7b1f,	// (0x00036b7b) main_cset6_slider_pane_t8_ParamLimits

0x7b1f,	// (0x00036b7b) main_cset6_slider_pane_t8

0x7b43,	// (0x00036b9f) main_cset6_slider_pane_t9_ParamLimits

0x7b43,	// (0x00036b9f) main_cset6_slider_pane_t9

0x7b67,	// (0x00036bc3) main_cset6_slider_pane_t10_ParamLimits

0x7b67,	// (0x00036bc3) main_cset6_slider_pane_t10

0x7b8b,	// (0x00036be7) main_cset6_slider_pane_t11_ParamLimits

0x7b8b,	// (0x00036be7) main_cset6_slider_pane_t11

0xdc17,	// (0x0003cc73) main_cset6_slider_pane_t14_ParamLimits

0xdc17,	// (0x0003cc73) main_cset6_slider_pane_t14

0xdc50,	// (0x0003ccac) main_cset6_slider_pane_t15_ParamLimits

0xdc50,	// (0x0003ccac) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003ec13) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003ec13) main_cset6_slider_pane_t

0xd4e6,	// (0x0003c542) cset_slider_pane_g1_copy1

0xd4ef,	// (0x0003c54b) cset_slider_pane_g2_copy1

0xd4f8,	// (0x0003c554) cset_slider_pane_g3_copy1

0x9bfe,	// (0x00038c5a) bg_popup_sub_pane_cp011_copy1

0xdc89,	// (0x0003cce5) main_cset_text_pane_g1_copy1

0xd469,	// (0x0003c4c5) main_cset_text_pane_t1_copy1

0xd477,	// (0x0003c4d3) main_cset_text_pane_t2_copy1

0xd485,	// (0x0003c4e1) main_cset_text_pane_t3_copy1

0xd493,	// (0x0003c4ef) main_cset_text_pane_t4_copy1

0xd4a1,	// (0x0003c4fd) main_cset_text_pane_t5_copy1

0xdc91,	// (0x0003cced) main_cset_text_pane_t6_copy1

0xdc9f,	// (0x0003ccfb) main_cset_text_pane_t7_copy1

0x793d,	// (0x00036999) main_cset_text2_pane_t1_copy1

0x9c5f,	// (0x00038cbb) main_ncimui_pane

0x48e9,	// (0x00033945) popup_query_ncimui_window_ParamLimits

0x48e9,	// (0x00033945) popup_query_ncimui_window

0xca11,	// (0x0003ba6d) field_cale_ev2_pane_g4_ParamLimits

0xca11,	// (0x0003ba6d) field_cale_ev2_pane_g4

0x60c6,	// (0x00035122) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60c6,	// (0x00035122) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003e8f1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003e8f1) cell_video_dialer_keypad_pane_g

0x60de,	// (0x0003513a) cell_video_dialer_keypad_pane_t1

0x9bfe,	// (0x00038c5a) bg_popup_window_pane_cp012

0xac48,	// (0x00039ca4) heading_pane_cp06

0xdccb,	// (0x0003cd27) ncim_query_content_pane

0x9bfe,	// (0x00038c5a) bg_popup_heading_pane_cp01

0xdcd3,	// (0x0003cd2f) ncim_heading_pane_t1

0xdce1,	// (0x0003cd3d) ncim_indicator_popup_pane

0xdcf3,	// (0x0003cd4f) ncim_query_button_pane

0xdd09,	// (0x0003cd65) ncim_query_content_pane_t1

0xdd1b,	// (0x0003cd77) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003ec57) ncim_query_content_pane_t

0xdd55,	// (0x0003cdb1) ncim_query_list_pane

0xdd67,	// (0x0003cdc3) ncim_query_popup_pane

0xdce1,	// (0x0003cd3d) ncim_indicator_popup_pane_ParamLimits

0x7da6,	// (0x00036e02) ncim_query_content_pane_g1_ParamLimits

0x7da6,	// (0x00036e02) ncim_query_content_pane_g1

0xdd09,	// (0x0003cd65) ncim_query_content_pane_t1_ParamLimits

0xdd1b,	// (0x0003cd77) ncim_query_content_pane_t2_ParamLimits

0x7db2,	// (0x00036e0e) ncim_query_content_pane_t3_ParamLimits

0x7db2,	// (0x00036e0e) ncim_query_content_pane_t3

0x7dda,	// (0x00036e36) ncim_query_content_pane_t4_ParamLimits

0x7dda,	// (0x00036e36) ncim_query_content_pane_t4

0x7e02,	// (0x00036e5e) ncim_query_content_pane_t5_ParamLimits

0x7e02,	// (0x00036e5e) ncim_query_content_pane_t5

0xdd2d,	// (0x0003cd89) ncim_query_content_pane_t6_ParamLimits

0xdd2d,	// (0x0003cd89) ncim_query_content_pane_t6

0xfbfb,	// (0x0003ec57) ncim_query_content_pane_t_ParamLimits

0xdd55,	// (0x0003cdb1) ncim_query_list_pane_ParamLimits

0xdd67,	// (0x0003cdc3) ncim_query_popup_pane_ParamLimits

0xdd7b,	// (0x0003cdd7) wait_bar_pane_cp04

0x9bfe,	// (0x00038c5a) input_focus_pane_cp011

0xdd83,	// (0x0003cddf) ncim_query_popup_pane_t1

0xdd91,	// (0x0003cded) ncim_list_query_list_pane_ParamLimits

0xdd91,	// (0x0003cded) ncim_list_query_list_pane

0x9bfe,	// (0x00038c5a) bg_button_pane_cp027

0xdda4,	// (0x0003ce00) ncim_query_button_pane_g1

0x9bfe,	// (0x00038c5a) list_highlight_pane_cp012

0xddae,	// (0x0003ce0a) ncim_list_query_list_pane_g1

0xddb6,	// (0x0003ce12) ncim_list_query_list_pane_t1

0x659b,	// (0x000355f7) cam4_indicators_pane_g3_ParamLimits

0x659b,	// (0x000355f7) cam4_indicators_pane_g3

0x662c,	// (0x00035688) vid4_indicators_pane_g5_ParamLimits

0x662c,	// (0x00035688) vid4_indicators_pane_g5

0x7425,	// (0x00036481) vid4_progress_pane_g5_ParamLimits

0x7425,	// (0x00036481) vid4_progress_pane_g5

0x7c94,	// (0x00036cf0) main_ncimui_pane_g1

0x7cfa,	// (0x00036d56) ncimui_group_query_pane_ParamLimits

0x7cfa,	// (0x00036d56) ncimui_group_query_pane

0x7d42,	// (0x00036d9e) ncimui_list_pane_ParamLimits

0x7d42,	// (0x00036d9e) ncimui_list_pane

0x7d69,	// (0x00036dc5) ncimui_text_pane_ParamLimits

0x7d69,	// (0x00036dc5) ncimui_text_pane

0x7e2a,	// (0x00036e86) ncimui_text_pane_t1_ParamLimits

0x7e2a,	// (0x00036e86) ncimui_text_pane_t1

0xddc4,	// (0x0003ce20) ncimui_list_single_graphic_pane_ParamLimits

0xddc4,	// (0x0003ce20) ncimui_list_single_graphic_pane

0x7e48,	// (0x00036ea4) ncimui_query_pane_ParamLimits

0x7e48,	// (0x00036ea4) ncimui_query_pane

0x9bfe,	// (0x00038c5a) list_highlight_pane_cp013

0xddd4,	// (0x0003ce30) ncim_list_query_list_pane_t1_copy1

0xddae,	// (0x0003ce0a) ncim_list_single_graphic_pane_g1

0xdde2,	// (0x0003ce3e) ncim_query_button_pane_cp01

0xddee,	// (0x0003ce4a) ncim_query_entry_pane_ParamLimits

0xddee,	// (0x0003ce4a) ncim_query_entry_pane

0xde01,	// (0x0003ce5d) ncimui_query_pane_g1

0xde0d,	// (0x0003ce69) ncimui_query_pane_t1_ParamLimits

0xde0d,	// (0x0003ce69) ncimui_query_pane_t1

0x9c5f,	// (0x00038cbb) input_focus_pane_cp012

0xde26,	// (0x0003ce82) ncim_query_entry_pane_t1

0xa3a0,	// (0x000393fc) main_im_pane_ParamLimits

0x9c5f,	// (0x00038cbb) main_mobtv_pane_ParamLimits

0x9c5f,	// (0x00038cbb) main_mobtv_pane

0x7a59,	// (0x00036ab5) main_cset6_slider_pane_g18_ParamLimits

0x7a59,	// (0x00036ab5) main_cset6_slider_pane_g18

0x7a65,	// (0x00036ac1) main_cset6_slider_pane_g19_ParamLimits

0x7a65,	// (0x00036ac1) main_cset6_slider_pane_g19

0x7e5b,	// (0x00036eb7) bg_main_mobtv_pane_ParamLimits

0x7e5b,	// (0x00036eb7) bg_main_mobtv_pane

0x7e69,	// (0x00036ec5) main_mobtv_info_pane

0x7e74,	// (0x00036ed0) main_mobtv_loading_pane_ParamLimits

0x7e74,	// (0x00036ed0) main_mobtv_loading_pane

0xde38,	// (0x0003ce94) main_mobtv_pg_channel_list_pane

0xde42,	// (0x0003ce9e) main_mobtv_pg_hdr_pane

0x7e81,	// (0x00036edd) main_mobtv_programe_curr_pane_ParamLimits

0x7e81,	// (0x00036edd) main_mobtv_programe_curr_pane

0x7e8e,	// (0x00036eea) main_mobtv_programe_next_pane_ParamLimits

0x7e8e,	// (0x00036eea) main_mobtv_programe_next_pane

0xde4b,	// (0x0003cea7) popup_mobtv_noti_window

0xc77c,	// (0x0003b7d8) main_tv_pg_hdr_pane_g1

0xde55,	// (0x0003ceb1) main_tv_pg_hdr_pane_g2

0xde5d,	// (0x0003ceb9) main_tv_pg_hdr_pane_g3

0xde65,	// (0x0003cec1) main_tv_pg_hdr_pane_g4

0xde6d,	// (0x0003cec9) main_tv_pg_hdr_pane_g5

0xde77,	// (0x0003ced3) main_tv_pg_hdr_pane_g6

0xde81,	// (0x0003cedd) main_tv_pg_hdr_pane_g7

0xde8b,	// (0x0003cee7) main_tv_pg_hdr_pane_g8

0xde95,	// (0x0003cef1) main_tv_pg_hdr_pane_g9

0xde9f,	// (0x0003cefb) main_tv_pg_hdr_pane_g10

0xdea9,	// (0x0003cf05) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003ec64) main_tv_pg_hdr_pane_g

0xdeb3,	// (0x0003cf0f) main_tv_pg_hdr_pane_t1

0xdec1,	// (0x0003cf1d) main_tv_pg_hdr_pane_t2

0xdecf,	// (0x0003cf2b) main_tv_pg_hdr_pane_t3

0xdedf,	// (0x0003cf3b) main_tv_pg_hdr_pane_t4

0xdeef,	// (0x0003cf4b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003ec7b) main_tv_pg_hdr_pane_t

0xdeff,	// (0x0003cf5b) single_mobtv_pg_channel_pane_ParamLimits

0xdeff,	// (0x0003cf5b) single_mobtv_pg_channel_pane

0xdf11,	// (0x0003cf6d) single_mobtv_pg_channel_table_pane

0xdf1a,	// (0x0003cf76) single_mobtv_pg_channel_thumb_pane

0xdf23,	// (0x0003cf7f) single_tv_pg_channel_pane_g1

0xdf2c,	// (0x0003cf88) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003ec86) single_tv_pg_channel_pane_g

0xc9ac,	// (0x0003ba08) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc9ac,	// (0x0003ba08) bg_single_mobtv_pg_channel_thumb_pane

0xdf35,	// (0x0003cf91) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf35,	// (0x0003cf91) single_mobtv_pg_channel_thumb_pane_g1

0xdf43,	// (0x0003cf9f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf43,	// (0x0003cf9f) single_mobtv_pg_channel_thumb_pane_g2

0xdf4f,	// (0x0003cfab) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf4f,	// (0x0003cfab) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003ec8b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003ec8b) single_mobtv_pg_channel_thumb_pane_g

0xdf5b,	// (0x0003cfb7) single_mobtv_pg_channel_thumb_pane_t1

0xdf69,	// (0x0003cfc5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003ec92) single_mobtv_pg_channel_thumb_pane_t

0xc77c,	// (0x0003b7d8) bg_single_mobtv_pg_channel_table_pane_g1

0xc77c,	// (0x0003b7d8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0003e738) bg_single_mobtv_pg_channel_table_pane_g

0xdf77,	// (0x0003cfd3) single_mobtv_pg_channel_table_pane_t1

0xdf85,	// (0x0003cfe1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003ec97) single_mobtv_pg_channel_table_pane_t

0x7ea3,	// (0x00036eff) main_mobtv_info_pane_g1_ParamLimits

0x7ea3,	// (0x00036eff) main_mobtv_info_pane_g1

0x7ec1,	// (0x00036f1d) main_mobtv_info_pane_t1_ParamLimits

0x7ec1,	// (0x00036f1d) main_mobtv_info_pane_t1

0x7f39,	// (0x00036f95) main_mobtv_info_pane_t2_ParamLimits

0x7f39,	// (0x00036f95) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003eca1) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003eca1) main_mobtv_info_pane_t

0x7fc8,	// (0x00037024) wait_bar_pane_cp05

0x7fda,	// (0x00037036) main_mobtv_loading_pane_g1_ParamLimits

0x7fda,	// (0x00037036) main_mobtv_loading_pane_g1

0x7feb,	// (0x00037047) main_mobtv_loading_pane_g2_ParamLimits

0x7feb,	// (0x00037047) main_mobtv_loading_pane_g2

0x7ff7,	// (0x00037053) main_mobtv_loading_pane_g3_ParamLimits

0x7ff7,	// (0x00037053) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003eca8) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003eca8) main_mobtv_loading_pane_g

0xdf93,	// (0x0003cfef) main_mobtv_loading_pane_t1_ParamLimits

0xdf93,	// (0x0003cfef) main_mobtv_loading_pane_t1

0xdfab,	// (0x0003d007) main_mobtv_loading_pane_t2_ParamLimits

0xdfab,	// (0x0003d007) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003ecaf) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003ecaf) main_mobtv_loading_pane_t

0x800a,	// (0x00037066) wait_bar_pane_cp06_ParamLimits

0x800a,	// (0x00037066) wait_bar_pane_cp06

0xdfcf,	// (0x0003d02b) main_mobtv_programe_curr_pane_t1

0xdfdd,	// (0x0003d039) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003ecb4) main_mobtv_programe_curr_pane_t

0xdfeb,	// (0x0003d047) main_mobtv_programe_next_pane_t1

0xdff9,	// (0x0003d055) main_mobtv_programe_next_pane_t2

0xe007,	// (0x0003d063) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003ecb9) main_mobtv_programe_next_pane_t

0x9bfe,	// (0x00038c5a) bg_popup_mobtv_noti_window_pane

0xe015,	// (0x0003d071) popup_mobtv_noti_window_g1

0xe01d,	// (0x0003d079) popup_mobtv_noti_window_t1

0xe02b,	// (0x0003d087) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003ecc0) popup_mobtv_noti_window_t

0xc77c,	// (0x0003b7d8) bg_popup_mobtv_noti_window_pane_g1

0x9bfe,	// (0x00038c5a) sc_clock_pane

0x9bfe,	// (0x00038c5a) main_fs_bigclock_pane

0x76d2,	// (0x0003672e) blid2_tripm_pane_t4_ParamLimits

0x76d2,	// (0x0003672e) blid2_tripm_pane_t4

0x8019,	// (0x00037075) sc_clock_pane_g1_ParamLimits

0x8019,	// (0x00037075) sc_clock_pane_g1

0x802b,	// (0x00037087) sc_clock_pane_t1_ParamLimits

0x802b,	// (0x00037087) sc_clock_pane_t1

0x804f,	// (0x000370ab) sc_clock_pane_t2_ParamLimits

0x804f,	// (0x000370ab) sc_clock_pane_t2

0x8067,	// (0x000370c3) sc_clock_pane_t3_ParamLimits

0x8067,	// (0x000370c3) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003ecc5) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003ecc5) sc_clock_pane_t

0x90c6,	// (0x00038122) main_fs_bigclock_indicator_pane_ParamLimits

0x90c6,	// (0x00038122) main_fs_bigclock_indicator_pane

0x8123,	// (0x0003717f) main_fs_bigclock_pane_g1_ParamLimits

0x8123,	// (0x0003717f) main_fs_bigclock_pane_g1

0x90d2,	// (0x0003812e) main_fs_bigclock_pane_t1_ParamLimits

0x90d2,	// (0x0003812e) main_fs_bigclock_pane_t1

0x90e4,	// (0x00038140) main_fs_bigclock_pane_t2_ParamLimits

0x90e4,	// (0x00038140) main_fs_bigclock_pane_t2

0x90f8,	// (0x00038154) main_fs_bigclock_pane_t3_ParamLimits

0x90f8,	// (0x00038154) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003eeca) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003eeca) main_fs_bigclock_pane_t

0xec26,	// (0x0003dc82) main_fs_bigclock_indicator_pane_g1

0xdcfb,	// (0x0003cd57) ncim_query_content_pane_g2_ParamLimits

0xdcfb,	// (0x0003cd57) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003ec52) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003ec52) ncim_query_content_pane_g

0x807e,	// (0x000370da) sc_clock_pane_t4_ParamLimits

0x807e,	// (0x000370da) sc_clock_pane_t4

0x9c5f,	// (0x00038cbb) main_radioblah_pane

0xd0db,	// (0x0003c137) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0db,	// (0x0003c137) cell_call4_button_pane_t1_copy1

0x7cac,	// (0x00036d08) main_ncimui_pane_t1_ParamLimits

0x7cac,	// (0x00036d08) main_ncimui_pane_t1

0x7cc6,	// (0x00036d22) main_ncimui_pane_t2_ParamLimits

0x7cc6,	// (0x00036d22) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003ec4b) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003ec4b) main_ncimui_pane_t

0xe17e,	// (0x0003d1da) main_radioblah_anim_pane_ParamLimits

0xe17e,	// (0x0003d1da) main_radioblah_anim_pane

0xe18f,	// (0x0003d1eb) main_radioblah_info_pane_ParamLimits

0xe18f,	// (0x0003d1eb) main_radioblah_info_pane

0xe1a3,	// (0x0003d1ff) main_radioblah_pane_t1_ParamLimits

0xe1a3,	// (0x0003d1ff) main_radioblah_pane_t1

0xe1bf,	// (0x0003d21b) main_radioblah_pane_t2_ParamLimits

0xe1bf,	// (0x0003d21b) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003ece6) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003ece6) main_radioblah_pane_t

0x8180,	// (0x000371dc) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8180,	// (0x000371dc) main_radioblah_rocker_ctrl_pane

0xe207,	// (0x0003d263) main_radioblah_info_pane_t1_ParamLimits

0xe207,	// (0x0003d263) main_radioblah_info_pane_t1

0x81d8,	// (0x00037234) main_radioblah_info_pane_t2_ParamLimits

0x81d8,	// (0x00037234) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003ecef) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003ecef) main_radioblah_info_pane_t

0xc77c,	// (0x0003b7d8) main_radioblah_rocker_ctrl_pane_g1

0x8288,	// (0x000372e4) main_radioblah_rocker_ctrl_pane_g2

0x8290,	// (0x000372ec) main_radioblah_rocker_ctrl_pane_g3

0x8298,	// (0x000372f4) main_radioblah_rocker_ctrl_pane_g4

0x82a0,	// (0x000372fc) main_radioblah_rocker_ctrl_pane_g5

0x82a8,	// (0x00037304) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003ecf8) main_radioblah_rocker_ctrl_pane_g

0x793d,	// (0x00036999) main_cset_text2_pane_t1_copy1_ParamLimits

0x654a,	// (0x000355a6) cam4_image_uncrop_qvga_pane

0x65c1,	// (0x0003561d) vid4_image_uncrop_qcif_pane

0x785d,	// (0x000368b9) cam6_image_uncrop_qvga_pane_ParamLimits

0x785d,	// (0x000368b9) cam6_image_uncrop_qvga_pane

0xd9fe,	// (0x0003ca5a) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9fe,	// (0x0003ca5a) vid6_image_uncrop_qcif_pane

0x9bfe,	// (0x00038c5a) bg_popup_preview_window_pane_cp03

0xdcad,	// (0x0003cd09) list_cset_text2_pane

0xdcb5,	// (0x0003cd11) main_cset6_text2_pane_g1

0xdcbd,	// (0x0003cd19) main_cset6_text2_pane_t1

0x82b0,	// (0x0003730c) list_cset_text2_pane_t1_ParamLimits

0x82b0,	// (0x0003730c) list_cset_text2_pane_t1

0x9c5f,	// (0x00038cbb) main_radioblah_pane_ParamLimits

0x7fb4,	// (0x00037010) main_mobtv_info_pane_t3_ParamLimits

0x7fb4,	// (0x00037010) main_mobtv_info_pane_t3

0x816e,	// (0x000371ca) main_radioblah_pane_g1

0x81a8,	// (0x00037204) main_radioblah_info_pane_g1

0x822d,	// (0x00037289) main_radioblah_info_pane_t3_ParamLimits

0x822d,	// (0x00037289) main_radioblah_info_pane_t3

0x3083,	// (0x000320df) highlight_cell_cale_month_pane_ParamLimits

0x3083,	// (0x000320df) highlight_cell_cale_month_pane

0x9bfe,	// (0x00038c5a) main_phob_fisheye_pane

0xca94,	// (0x0003baf0) scroll_pane_cp0031_ParamLimits

0xca94,	// (0x0003baf0) scroll_pane_cp0031

0xdb10,	// (0x0003cb6c) wait_bar_pane_cp08_ParamLimits

0x3171,	// (0x000321cd) cset_list_set_pane_copy1_ParamLimits

0xe241,	// (0x0003d29d) highlight_cell_cale_month_pane_g1

0x82c9,	// (0x00037325) highlight_cell_cale_month_pane_t1

0xd7a6,	// (0x0003c802) list_gen_pane_cp01

0xd2f4,	// (0x0003c350) scroll_pane_01

0x82d7,	// (0x00037333) list_single_double_fisheye_pane

0x82e0,	// (0x0003733c) list_double_fisheye_pane_g1_ParamLimits

0x82e0,	// (0x0003733c) list_double_fisheye_pane_g1

0x82ec,	// (0x00037348) list_double_fisheye_pane_g2_ParamLimits

0x82ec,	// (0x00037348) list_double_fisheye_pane_g2

0x8300,	// (0x0003735c) list_double_fisheye_pane_g3_ParamLimits

0x8300,	// (0x0003735c) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003ed05) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003ed05) list_double_fisheye_pane_g

0x8329,	// (0x00037385) list_double_fisheye_pane_t1_ParamLimits

0x8329,	// (0x00037385) list_double_fisheye_pane_t1

0x8344,	// (0x000373a0) list_double_fisheye_pane_t2_ParamLimits

0x8344,	// (0x000373a0) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003ed10) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003ed10) list_double_fisheye_pane_t

0x9bfe,	// (0x00038c5a) main_call5_pane

0x80a9,	// (0x00037105) sc_swipe_pane_ParamLimits

0x80a9,	// (0x00037105) sc_swipe_pane

0x8379,	// (0x000373d5) call5_image_pane_ParamLimits

0x8379,	// (0x000373d5) call5_image_pane

0x8396,	// (0x000373f2) call5_swipe_1_pane_ParamLimits

0x8396,	// (0x000373f2) call5_swipe_1_pane

0x83a9,	// (0x00037405) call5_swipe_2_pane_ParamLimits

0x83a9,	// (0x00037405) call5_swipe_2_pane

0x83d6,	// (0x00037432) popup_call5_audio_first_window_ParamLimits

0x83d6,	// (0x00037432) popup_call5_audio_first_window

0xc9ac,	// (0x0003ba08) call5_swipe_1_pane_g1_ParamLimits

0xc9ac,	// (0x0003ba08) call5_swipe_1_pane_g1

0xe249,	// (0x0003d2a5) call5_swipe_1_pane_g2_ParamLimits

0xe249,	// (0x0003d2a5) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003ed15) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003ed15) call5_swipe_1_pane_g

0xe255,	// (0x0003d2b1) call5_swipe_1_pane_t1_ParamLimits

0xe255,	// (0x0003d2b1) call5_swipe_1_pane_t1

0xc9ac,	// (0x0003ba08) call5_swipe_2_pane_g1_ParamLimits

0xc9ac,	// (0x0003ba08) call5_swipe_2_pane_g1

0xe26a,	// (0x0003d2c6) call5_swipe_2_pane_g2_ParamLimits

0xe26a,	// (0x0003d2c6) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003ed1a) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003ed1a) call5_swipe_2_pane_g

0xe276,	// (0x0003d2d2) call5_swipe_2_pane_t1_ParamLimits

0xe276,	// (0x0003d2d2) call5_swipe_2_pane_t1

0xe28b,	// (0x0003d2e7) sc_swipe_pane_g1_ParamLimits

0xe28b,	// (0x0003d2e7) sc_swipe_pane_g1

0xe298,	// (0x0003d2f4) sc_swipe_pane_g2_ParamLimits

0xe298,	// (0x0003d2f4) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003ed1f) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003ed1f) sc_swipe_pane_g

0xe2a4,	// (0x0003d300) sc_swipe_pane_t1_ParamLimits

0xe2a4,	// (0x0003d300) sc_swipe_pane_t1

0x9bfe,	// (0x00038c5a) main_cmail_launcher_pane

0x83eb,	// (0x00037447) aid_size_cell_cmail_l_ParamLimits

0x83eb,	// (0x00037447) aid_size_cell_cmail_l

0x8405,	// (0x00037461) grid_cmail_l_pane_ParamLimits

0x8405,	// (0x00037461) grid_cmail_l_pane

0x8420,	// (0x0003747c) cell_cmail_l_pane_ParamLimits

0x8420,	// (0x0003747c) cell_cmail_l_pane

0x8448,	// (0x000374a4) cell_cmail_l_pane_g1_ParamLimits

0x8448,	// (0x000374a4) cell_cmail_l_pane_g1

0x8454,	// (0x000374b0) cell_cmail_l_pane_t1_ParamLimits

0x8454,	// (0x000374b0) cell_cmail_l_pane_t1

0xe2b9,	// (0x0003d315) cell_cmail_l_pane_t2_ParamLimits

0xe2b9,	// (0x0003d315) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003ed24) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003ed24) cell_cmail_l_pane_t

0x9c5f,	// (0x00038cbb) grid_highlight_pane_cp018_ParamLimits

0x9c5f,	// (0x00038cbb) grid_highlight_pane_cp018

0x0fab,	// (0x00030007) main2_pane_ParamLimits

0x0fab,	// (0x00030007) main2_pane

0xa44b,	// (0x000394a7) popup_sp_fs_action_menu_bg_pane_g1

0xa453,	// (0x000394af) popup_sp_fs_action_menu_bg_pane_g2

0xa45b,	// (0x000394b7) popup_sp_fs_action_menu_bg_pane_g3

0xa463,	// (0x000394bf) popup_sp_fs_action_menu_bg_pane_g4

0xa46b,	// (0x000394c7) popup_sp_fs_action_menu_bg_pane_g5

0xa473,	// (0x000394cf) popup_sp_fs_action_menu_bg_pane_g6

0xa47b,	// (0x000394d7) popup_sp_fs_action_menu_bg_pane_g7

0xa483,	// (0x000394df) popup_sp_fs_action_menu_bg_pane_g8

0xa48b,	// (0x000394e7) popup_sp_fs_action_menu_bg_pane_g9

0xa493,	// (0x000394ef) popup_sp_fs_action_menu_bg_pane_g10

0xa493,	// (0x000394ef) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0003e1e2) popup_sp_fs_action_menu_bg_pane_g

0xc212,	// (0x0003b26e) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x2_t3_g3_g1

0x1ef2,	// (0x00030f4e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ef2,	// (0x00030f4e) list_medium_line_x2_t3_g3_g2

0x1efe,	// (0x00030f5a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1efe,	// (0x00030f5a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003e294) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003e294) list_medium_line_x2_t3_g3_g

0x1f0a,	// (0x00030f66) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1f0a,	// (0x00030f66) list_medium_line_x2_t3_g3_t1

0x1f1f,	// (0x00030f7b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f1f,	// (0x00030f7b) list_medium_line_x2_t3_g3_t2

0x1f33,	// (0x00030f8f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f33,	// (0x00030f8f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003e29b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003e29b) list_medium_line_x2_t3_g3_t

0xc212,	// (0x0003b26e) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x2_t3_g2_g1

0x1efe,	// (0x00030f5a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1efe,	// (0x00030f5a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003e2a2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003e2a2) list_medium_line_x2_t3_g2_g

0x1f48,	// (0x00030fa4) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f48,	// (0x00030fa4) list_medium_line_x2_t3_g2_t1

0x1f5e,	// (0x00030fba) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f5e,	// (0x00030fba) list_medium_line_x2_t3_g2_t2

0x1f70,	// (0x00030fcc) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f70,	// (0x00030fcc) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003e2a7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003e2a7) list_medium_line_x2_t3_g2_t

0xc212,	// (0x0003b26e) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x2_t4_g4_g1

0x1f8e,	// (0x00030fea) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f8e,	// (0x00030fea) list_medium_line_x2_t4_g4_g2

0x1ef2,	// (0x00030f4e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ef2,	// (0x00030f4e) list_medium_line_x2_t4_g4_g3

0x1f9a,	// (0x00030ff6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f9a,	// (0x00030ff6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003e2ae) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003e2ae) list_medium_line_x2_t4_g4_g

0x1fa6,	// (0x00031002) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1fa6,	// (0x00031002) list_medium_line_x2_t4_g4_t1

0x1fbd,	// (0x00031019) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1fbd,	// (0x00031019) list_medium_line_x2_t4_g4_t2

0x1fd2,	// (0x0003102e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1fd2,	// (0x0003102e) list_medium_line_x2_t4_g4_t3

0x1fe4,	// (0x00031040) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1fe4,	// (0x00031040) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003e2b7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003e2b7) list_medium_line_x2_t4_g4_t

0xc212,	// (0x0003b26e) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x2_t2_g4_g1

0x1f8e,	// (0x00030fea) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f8e,	// (0x00030fea) list_medium_line_x2_t2_g4_g2

0x1ef2,	// (0x00030f4e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ef2,	// (0x00030f4e) list_medium_line_x2_t2_g4_g3

0x1efe,	// (0x00030f5a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1efe,	// (0x00030f5a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003e31e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003e31e) list_medium_line_x2_t2_g4_g

0x30a9,	// (0x00032105) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30a9,	// (0x00032105) list_medium_line_x2_t2_g4_t1

0x1f33,	// (0x00030f8f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f33,	// (0x00030f8f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003e327) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003e327) list_medium_line_x2_t2_g4_t

0xc212,	// (0x0003b26e) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x2_t2_g3_g1

0x1ef2,	// (0x00030f4e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ef2,	// (0x00030f4e) list_medium_line_x2_t2_g3_g2

0x1efe,	// (0x00030f5a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1efe,	// (0x00030f5a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003e294) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003e294) list_medium_line_x2_t2_g3_g

0x30be,	// (0x0003211a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30be,	// (0x0003211a) list_medium_line_x2_t2_g3_t1

0x1f33,	// (0x00030f8f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f33,	// (0x00030f8f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003e32c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003e32c) list_medium_line_x2_t2_g3_t

0x3216,	// (0x00032272) main_sp_fs_list_pane_ParamLimits

0x3216,	// (0x00032272) main_sp_fs_list_pane

0x3222,	// (0x0003227e) sp_fs_scroll_pane_ParamLimits

0x3222,	// (0x0003227e) sp_fs_scroll_pane

0x322e,	// (0x0003228a) list_medium_line_x2_t3_t1

0x323e,	// (0x0003229a) list_medium_line_x2_t3_t2

0x324c,	// (0x000322a8) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003e377) list_medium_line_x2_t3_t

0x325a,	// (0x000322b6) list_medium_line_x3_t4_t1

0x326a,	// (0x000322c6) list_medium_line_x3_t4_t2

0x3278,	// (0x000322d4) list_medium_line_x3_t4_t3

0x324c,	// (0x000322a8) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003e37e) list_medium_line_x3_t4_t

0x3286,	// (0x000322e2) list_medium_line_x4_t5_t1

0x3296,	// (0x000322f2) list_medium_line_x4_t5_t2

0x3278,	// (0x000322d4) list_medium_line_x4_t5_t3

0x32a4,	// (0x00032300) list_medium_line_x4_t5_t4

0x324c,	// (0x000322a8) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003e387) list_medium_line_x4_t5_t

0xc212,	// (0x0003b26e) list_medium_line_t4_g4_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_t4_g4_g1

0x1f9a,	// (0x00030ff6) list_medium_line_t4_g4_g2_ParamLimits

0x1f9a,	// (0x00030ff6) list_medium_line_t4_g4_g2

0x32b2,	// (0x0003230e) list_medium_line_t4_g4_g3_ParamLimits

0x32b2,	// (0x0003230e) list_medium_line_t4_g4_g3

0x1efe,	// (0x00030f5a) list_medium_line_t4_g4_g4_ParamLimits

0x1efe,	// (0x00030f5a) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003e392) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003e392) list_medium_line_t4_g4_g

0x32be,	// (0x0003231a) list_medium_line_t4_g4_t1_ParamLimits

0x32be,	// (0x0003231a) list_medium_line_t4_g4_t1

0x32d3,	// (0x0003232f) list_medium_line_t4_g4_t2_ParamLimits

0x32d3,	// (0x0003232f) list_medium_line_t4_g4_t2

0x32e9,	// (0x00032345) list_medium_line_t4_g4_t3_ParamLimits

0x32e9,	// (0x00032345) list_medium_line_t4_g4_t3

0x1f33,	// (0x00030f8f) list_medium_line_t4_g4_t4_ParamLimits

0x1f33,	// (0x00030f8f) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003e39b) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003e39b) list_medium_line_t4_g4_t

0x3434,	// (0x00032490) chi_dic_find_pane_g1

0x466f,	// (0x000336cb) main_tport_pane

0xd400,	// (0x0003c45c) list_medium_line_plain_t1

0x6e08,	// (0x00035e64) list_medium_line_t2_g2_g1_ParamLimits

0x6e08,	// (0x00035e64) list_medium_line_t2_g2_g1

0xd416,	// (0x0003c472) list_medium_line_t2_g2_g2_ParamLimits

0xd416,	// (0x0003c472) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003ea5c) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003ea5c) list_medium_line_t2_g2_g

0x6e14,	// (0x00035e70) list_medium_line_t2_g2_t1_ParamLimits

0x6e14,	// (0x00035e70) list_medium_line_t2_g2_t1

0x6e2b,	// (0x00035e87) list_medium_line_t2_g2_t2_ParamLimits

0x6e2b,	// (0x00035e87) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003ea61) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003ea61) list_medium_line_t2_g2_t

0xd7af,	// (0x0003c80b) aid_sp_fs_list_icon_a_sm

0xd7b7,	// (0x0003c813) aid_sp_fs_list_icon_d

0xd7bf,	// (0x0003c81b) aid_sp_fs_text_primary

0xd7c8,	// (0x0003c824) aid_sp_fs_text_secondary

0x7488,	// (0x000364e4) list_medium_line

0x7488,	// (0x000364e4) list_medium_line_g2

0x7488,	// (0x000364e4) list_medium_line_g3

0x7488,	// (0x000364e4) list_medium_line_plain

0x7488,	// (0x000364e4) list_medium_line_plain_t2

0x7488,	// (0x000364e4) list_medium_line_plain_t3

0x7488,	// (0x000364e4) list_medium_line_right_icon

0x7488,	// (0x000364e4) list_medium_line_right_iconx2

0x7488,	// (0x000364e4) list_medium_line_t2

0x7488,	// (0x000364e4) list_medium_line_t2_g2

0x7488,	// (0x000364e4) list_medium_line_t2_g3

0x7488,	// (0x000364e4) list_medium_line_t2_right_icon

0x7488,	// (0x000364e4) list_medium_line_t2_right_iconx2

0x7488,	// (0x000364e4) list_medium_line_t3

0x7488,	// (0x000364e4) list_medium_line_t3_g2

0x7488,	// (0x000364e4) list_medium_line_t3_g3

0x7488,	// (0x000364e4) list_medium_line_t3_right_iconx2

0x7491,	// (0x000364ed) list_medium_line_t4_g4

0x7488,	// (0x000364e4) list_medium_line_x2

0x7488,	// (0x000364e4) list_medium_line_x2_t2_g2

0x7488,	// (0x000364e4) list_medium_line_x2_t2_g3

0x7488,	// (0x000364e4) list_medium_line_x2_t2_g4

0x7488,	// (0x000364e4) list_medium_line_x2_t3

0x7488,	// (0x000364e4) list_medium_line_x2_t3_g2

0x7488,	// (0x000364e4) list_medium_line_x2_t3_g3

0x7488,	// (0x000364e4) list_medium_line_x2_t3_g4

0x7488,	// (0x000364e4) list_medium_line_x2_t4_g2

0x7488,	// (0x000364e4) list_medium_line_x2_t4_g4

0x749a,	// (0x000364f6) list_medium_line_x3

0x749a,	// (0x000364f6) list_medium_line_x3_t4

0x749a,	// (0x000364f6) list_medium_line_x3_t4_g4

0x7491,	// (0x000364ed) list_medium_line_x4_t4

0x7491,	// (0x000364ed) list_medium_line_x4_t4_g7

0x7491,	// (0x000364ed) list_medium_line_x4_t5

0x74a3,	// (0x000364ff) list_single_fs_dyc_pane_ParamLimits

0x74a3,	// (0x000364ff) list_single_fs_dyc_pane

0xc212,	// (0x0003b26e) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x4_t4_g7_g1

0x7bb1,	// (0x00036c0d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7bb1,	// (0x00036c0d) list_medium_line_x4_t4_g7_g2

0x7bbd,	// (0x00036c19) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7bbd,	// (0x00036c19) list_medium_line_x4_t4_g7_g3

0x7bcc,	// (0x00036c28) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7bcc,	// (0x00036c28) list_medium_line_x4_t4_g7_g4

0x7bd8,	// (0x00036c34) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7bd8,	// (0x00036c34) list_medium_line_x4_t4_g7_g5

0x7be7,	// (0x00036c43) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7be7,	// (0x00036c43) list_medium_line_x4_t4_g7_g6

0x7bf6,	// (0x00036c52) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7bf6,	// (0x00036c52) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003ec2c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003ec2c) list_medium_line_x4_t4_g7_g

0x7c02,	// (0x00036c5e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7c02,	// (0x00036c5e) list_medium_line_x4_t4_g7_t1

0x7c17,	// (0x00036c73) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c17,	// (0x00036c73) list_medium_line_x4_t4_g7_t2

0x7c2c,	// (0x00036c88) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c2c,	// (0x00036c88) list_medium_line_x4_t4_g7_t3

0x7c41,	// (0x00036c9d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c41,	// (0x00036c9d) list_medium_line_x4_t4_g7_t4

0x7c53,	// (0x00036caf) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c53,	// (0x00036caf) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003ec3b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003ec3b) list_medium_line_x4_t4_g7_t

0x7c65,	// (0x00036cc1) list_single_dyc_row_pane_ParamLimits

0x7c65,	// (0x00036cc1) list_single_dyc_row_pane

0x8366,	// (0x000373c2) call5_gesture_pane_ParamLimits

0x8366,	// (0x000373c2) call5_gesture_pane

0x83bc,	// (0x00037418) call5_windows_pane_ParamLimits

0x83bc,	// (0x00037418) call5_windows_pane

0x846a,	// (0x000374c6) call5_swipe_1_pane_cp_ParamLimits

0x846a,	// (0x000374c6) call5_swipe_1_pane_cp

0x8476,	// (0x000374d2) call5_swipe_2_pane_cp_ParamLimits

0x8476,	// (0x000374d2) call5_swipe_2_pane_cp

0xae96,	// (0x00039ef2) call5_image_pane_cp

0x8482,	// (0x000374de) popup_call5_audio_first_window_cp_ParamLimits

0x8482,	// (0x000374de) popup_call5_audio_first_window_cp

0xe28b,	// (0x0003d2e7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe28b,	// (0x0003d2e7) call5_swipe_1_pane_g1_cp

0xe2cb,	// (0x0003d327) call5_swipe_1_pane_g2_cp

0xe2a4,	// (0x0003d300) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2a4,	// (0x0003d300) call5_swipe_1_pane_t1_cp

0xe28b,	// (0x0003d2e7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe28b,	// (0x0003d2e7) call5_swipe_2_pane_g1_cp

0xe2d3,	// (0x0003d32f) call5_swipe_2_pane_g2_cp

0xe2db,	// (0x0003d337) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2db,	// (0x0003d337) call5_swipe_2_pane_t1_cp

0x9c5f,	// (0x00038cbb) main_sp_fs_email_pane

0xe2f0,	// (0x0003d34c) main_sp_fs_listscroll_pane_te

0xe2f9,	// (0x0003d355) popup_sp_fs_action_menu_pane_ParamLimits

0xe2f9,	// (0x0003d355) popup_sp_fs_action_menu_pane

0xc77c,	// (0x0003b7d8) bg_sp_fs_ctrlbar_pane_g1

0xcd35,	// (0x0003bd91) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd47,	// (0x0003bda3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcd3e,	// (0x0003bd9a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc77c,	// (0x0003b7d8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003ed29) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc55b,	// (0x0003b5b7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc55b,	// (0x0003b5b7) bg_sp_fs_ctrlbar_ddmenu_pane

0xe33f,	// (0x0003d39b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe33f,	// (0x0003d39b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe34b,	// (0x0003d3a7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe34b,	// (0x0003d3a7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003ed32) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003ed32) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe357,	// (0x0003d3b3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe357,	// (0x0003d3b3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe371,	// (0x0003d3cd) list_medium_line_t2_right_icon_g1

0x8490,	// (0x000374ec) list_medium_line_t2_right_icon_t1

0x84a0,	// (0x000374fc) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003ed37) list_medium_line_t2_right_icon_t

0xc323,	// (0x0003b37f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc323,	// (0x0003b37f) bg_sp_fs_ctrlbar_pane

0x84ff,	// (0x0003755b) main_sp_fs_ctrlbar_button_pane_cp01

0x8509,	// (0x00037565) main_sp_fs_ctrlbar_ddmenu_pane

0xc212,	// (0x0003b26e) main_sp_fs_ctrlbar_pane_g1

0xe3b1,	// (0x0003d40d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003ed3c) main_sp_fs_ctrlbar_pane_g

0xe3bd,	// (0x0003d419) main_sp_fs_ctrlbar_pane_t1

0x8513,	// (0x0003756f) main_sp_fs_ctrlbar_pane

0x8537,	// (0x00037593) main_sp_fs_listscroll_pane_te_cp01

0x8557,	// (0x000375b3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8557,	// (0x000375b3) popup_sp_fs_action_menu_pane_cp01

0x9c5f,	// (0x00038cbb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9c5f,	// (0x00038cbb) bg_sp_fs_highlight_list_pane_cp01

0xe3ed,	// (0x0003d449) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3ed,	// (0x0003d449) sp_fs_action_menu_list_gene_pane_g1

0xe3fc,	// (0x0003d458) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3fc,	// (0x0003d458) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003ed46) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003ed46) sp_fs_action_menu_list_gene_pane_g

0xe409,	// (0x0003d465) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe409,	// (0x0003d465) sp_fs_action_menu_list_gene_pane_t1

0xe421,	// (0x0003d47d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe421,	// (0x0003d47d) sp_fs_action_menu_list_gene_pane

0xe444,	// (0x0003d4a0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe444,	// (0x0003d4a0) popup_sp_fs_action_menu_bg_pane

0xe452,	// (0x0003d4ae) sp_fs_action_menu_list_pane_ParamLimits

0xe452,	// (0x0003d4ae) sp_fs_action_menu_list_pane

0xe476,	// (0x0003d4d2) sp_fs_scroll_pane_cp01_ParamLimits

0xe476,	// (0x0003d4d2) sp_fs_scroll_pane_cp01

0x858d,	// (0x000375e9) list_medium_line_plain_t2_t1

0x859d,	// (0x000375f9) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003ed4b) list_medium_line_plain_t2_t

0x85ad,	// (0x00037609) list_medium_line_plain_t3_t1

0x85bd,	// (0x00037619) list_medium_line_plain_t3_t2

0x85cb,	// (0x00037627) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003ed50) list_medium_line_plain_t3_t

0xc212,	// (0x0003b26e) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x2_t2_g2_g1

0x1efe,	// (0x00030f5a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1efe,	// (0x00030f5a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003e2a2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003e2a2) list_medium_line_x2_t2_g2_g

0x32be,	// (0x0003231a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x32be,	// (0x0003231a) list_medium_line_x2_t2_g2_t1

0x1f33,	// (0x00030f8f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f33,	// (0x00030f8f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003ed57) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003ed57) list_medium_line_x2_t2_g2_t

0xc212,	// (0x0003b26e) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x2_t4_g2_g1

0x1efe,	// (0x00030f5a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1efe,	// (0x00030f5a) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003e2a2) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003e2a2) list_medium_line_x2_t4_g2_g

0x85d9,	// (0x00037635) list_medium_line_x2_t4_g2_t1_ParamLimits

0x85d9,	// (0x00037635) list_medium_line_x2_t4_g2_t1

0x85f3,	// (0x0003764f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x85f3,	// (0x0003764f) list_medium_line_x2_t4_g2_t2

0x8609,	// (0x00037665) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8609,	// (0x00037665) list_medium_line_x2_t4_g2_t3

0x1f33,	// (0x00030f8f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f33,	// (0x00030f8f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003ed5c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003ed5c) list_medium_line_x2_t4_g2_t

0xe49c,	// (0x0003d4f8) list_medium_line_t3_right_iconx2_g1

0xe371,	// (0x0003d3cd) list_medium_line_t3_right_iconx2_g2

0x861e,	// (0x0003767a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003ed65) list_medium_line_t3_right_iconx2_g

0x8628,	// (0x00037684) list_medium_line_t3_right_iconx2_t1

0x8638,	// (0x00037694) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003ed6c) list_medium_line_t3_right_iconx2_t

0xc212,	// (0x0003b26e) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x3_t4_g4_g1

0x1ef2,	// (0x00030f4e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ef2,	// (0x00030f4e) list_medium_line_x3_t4_g4_g2

0x1f9a,	// (0x00030ff6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1f9a,	// (0x00030ff6) list_medium_line_x3_t4_g4_g3

0x8646,	// (0x000376a2) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8646,	// (0x000376a2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003ed71) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003ed71) list_medium_line_x3_t4_g4_g

0x8652,	// (0x000376ae) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8652,	// (0x000376ae) list_medium_line_x3_t4_g4_t1

0x8669,	// (0x000376c5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8669,	// (0x000376c5) list_medium_line_x3_t4_g4_t2

0x8684,	// (0x000376e0) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8684,	// (0x000376e0) list_medium_line_x3_t4_g4_t3

0x8699,	// (0x000376f5) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8699,	// (0x000376f5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003ed7a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003ed7a) list_medium_line_x3_t4_g4_t

0x86b6,	// (0x00037712) list_single_dyc_row_text_pane_t1_ParamLimits

0x86b6,	// (0x00037712) list_single_dyc_row_text_pane_t1

0x86ff,	// (0x0003775b) list_single_dyc_row_text_pane_t2_ParamLimits

0x86ff,	// (0x0003775b) list_single_dyc_row_text_pane_t2

0xe4a4,	// (0x0003d500) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4a4,	// (0x0003d500) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003ed83) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003ed83) list_single_dyc_row_text_pane_t

0xe4c8,	// (0x0003d524) list_single_dyc_row_pane_g1_ParamLimits

0xe4c8,	// (0x0003d524) list_single_dyc_row_pane_g1

0xe4d4,	// (0x0003d530) list_single_dyc_row_pane_g2_ParamLimits

0xe4d4,	// (0x0003d530) list_single_dyc_row_pane_g2

0xe4e0,	// (0x0003d53c) list_single_dyc_row_pane_g3_ParamLimits

0xe4e0,	// (0x0003d53c) list_single_dyc_row_pane_g3

0xe4ec,	// (0x0003d548) list_single_dyc_row_pane_g4_ParamLimits

0xe4ec,	// (0x0003d548) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003ed90) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003ed90) list_single_dyc_row_pane_g

0xe4f8,	// (0x0003d554) list_single_dyc_row_text_pane_ParamLimits

0xe4f8,	// (0x0003d554) list_single_dyc_row_text_pane

0x9bfe,	// (0x00038c5a) bg_sp_fs_scroll_pane

0xe517,	// (0x0003d573) thumb_sp_fs_scroll_pane

0x6e08,	// (0x00035e64) list_medium_line_g1_ParamLimits

0x6e08,	// (0x00035e64) list_medium_line_g1

0xe520,	// (0x0003d57c) list_medium_line_t1_ParamLimits

0xe520,	// (0x0003d57c) list_medium_line_t1

0xc212,	// (0x0003b26e) list_medium_line_x2_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x2_g1

0x1ef2,	// (0x00030f4e) list_medium_line_x2_g2_ParamLimits

0x1ef2,	// (0x00030f4e) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003ed99) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003ed99) list_medium_line_x2_g

0xe535,	// (0x0003d591) list_medium_line_x2_t1_ParamLimits

0xe535,	// (0x0003d591) list_medium_line_x2_t1

0xc212,	// (0x0003b26e) list_medium_line_x3_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x3_g1

0x1ef2,	// (0x00030f4e) list_medium_line_x3_g2_ParamLimits

0x1ef2,	// (0x00030f4e) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003ed99) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003ed99) list_medium_line_x3_g

0xe535,	// (0x0003d591) list_medium_line_x3_t1_ParamLimits

0xe535,	// (0x0003d591) list_medium_line_x3_t1

0xe54b,	// (0x0003d5a7) thumb_sp_fs_scroll_pane_g1

0xe554,	// (0x0003d5b0) thumb_sp_fs_scroll_pane_g2

0xe55d,	// (0x0003d5b9) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003ed9e) thumb_sp_fs_scroll_pane_g

0xe54b,	// (0x0003d5a7) bg_sp_fs_scroll_pane_g1

0xe554,	// (0x0003d5b0) bg_sp_fs_scroll_pane_g2

0xe55d,	// (0x0003d5b9) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003ed9e) bg_sp_fs_scroll_pane_g

0xc212,	// (0x0003b26e) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc212,	// (0x0003b26e) list_medium_line_x2_t3_g4_g1

0x1f8e,	// (0x00030fea) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f8e,	// (0x00030fea) list_medium_line_x2_t3_g4_g2

0x1ef2,	// (0x00030f4e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ef2,	// (0x00030f4e) list_medium_line_x2_t3_g4_g3

0x1efe,	// (0x00030f5a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1efe,	// (0x00030f5a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003e31e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003e31e) list_medium_line_x2_t3_g4_g

0x8834,	// (0x00037890) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8834,	// (0x00037890) list_medium_line_x2_t3_g4_t1

0x884a,	// (0x000378a6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x884a,	// (0x000378a6) list_medium_line_x2_t3_g4_t2

0x1f33,	// (0x00030f8f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f33,	// (0x00030f8f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003eda5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003eda5) list_medium_line_x2_t3_g4_t

0x6e08,	// (0x00035e64) list_medium_line_g2_g1_ParamLimits

0x6e08,	// (0x00035e64) list_medium_line_g2_g1

0xd416,	// (0x0003c472) list_medium_line_g2_g2_ParamLimits

0xd416,	// (0x0003c472) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003ea5c) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003ea5c) list_medium_line_g2_g

0xe566,	// (0x0003d5c2) list_medium_line_g2_t1_ParamLimits

0xe566,	// (0x0003d5c2) list_medium_line_g2_t1

0x6e08,	// (0x00035e64) list_medium_line_t3_g2_g1_ParamLimits

0x6e08,	// (0x00035e64) list_medium_line_t3_g2_g1

0xd416,	// (0x0003c472) list_medium_line_t3_g2_g2_ParamLimits

0xd416,	// (0x0003c472) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003ea5c) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003ea5c) list_medium_line_t3_g2_g

0x8863,	// (0x000378bf) list_medium_line_t3_g2_t1_ParamLimits

0x8863,	// (0x000378bf) list_medium_line_t3_g2_t1

0x887d,	// (0x000378d9) list_medium_line_t3_g2_t2_ParamLimits

0x887d,	// (0x000378d9) list_medium_line_t3_g2_t2

0x8893,	// (0x000378ef) list_medium_line_t3_g2_t3_ParamLimits

0x8893,	// (0x000378ef) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003edac) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003edac) list_medium_line_t3_g2_t

0xe371,	// (0x0003d3cd) list_medium_line_right_icon_g1

0xe57b,	// (0x0003d5d7) list_medium_line_right_icon_t1

0x6e08,	// (0x00035e64) list_medium_line_t2_g1_ParamLimits

0x6e08,	// (0x00035e64) list_medium_line_t2_g1

0x88aa,	// (0x00037906) list_medium_line_t2_t1_ParamLimits

0x88aa,	// (0x00037906) list_medium_line_t2_t1

0x88c4,	// (0x00037920) list_medium_line_t2_t2_ParamLimits

0x88c4,	// (0x00037920) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003edb3) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003edb3) list_medium_line_t2_t

0x6e08,	// (0x00035e64) list_medium_line_t3_g1_ParamLimits

0x6e08,	// (0x00035e64) list_medium_line_t3_g1

0x88dd,	// (0x00037939) list_medium_line_t3_t1_ParamLimits

0x88dd,	// (0x00037939) list_medium_line_t3_t1

0x88f4,	// (0x00037950) list_medium_line_t3_t2_ParamLimits

0x88f4,	// (0x00037950) list_medium_line_t3_t2

0x8909,	// (0x00037965) list_medium_line_t3_t3_ParamLimits

0x8909,	// (0x00037965) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003edb8) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003edb8) list_medium_line_t3_t

0x6e08,	// (0x00035e64) list_medium_line_g3_g1_ParamLimits

0x6e08,	// (0x00035e64) list_medium_line_g3_g1

0xe589,	// (0x0003d5e5) list_medium_line_g3_g2_ParamLimits

0xe589,	// (0x0003d5e5) list_medium_line_g3_g2

0xd416,	// (0x0003c472) list_medium_line_g3_g3_ParamLimits

0xd416,	// (0x0003c472) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003edbf) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003edbf) list_medium_line_g3_g

0xe595,	// (0x0003d5f1) list_medium_line_g3_t1_ParamLimits

0xe595,	// (0x0003d5f1) list_medium_line_g3_t1

0x6e08,	// (0x00035e64) list_medium_line_t2_g3_g1_ParamLimits

0x6e08,	// (0x00035e64) list_medium_line_t2_g3_g1

0xe589,	// (0x0003d5e5) list_medium_line_t2_g3_g2_ParamLimits

0xe589,	// (0x0003d5e5) list_medium_line_t2_g3_g2

0xd416,	// (0x0003c472) list_medium_line_t2_g3_g3_ParamLimits

0xd416,	// (0x0003c472) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003edbf) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003edbf) list_medium_line_t2_g3_g

0x891b,	// (0x00037977) list_medium_line_t2_g3_t1_ParamLimits

0x891b,	// (0x00037977) list_medium_line_t2_g3_t1

0x8932,	// (0x0003798e) list_medium_line_t2_g3_t2_ParamLimits

0x8932,	// (0x0003798e) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003edc6) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003edc6) list_medium_line_t2_g3_t

0x6e08,	// (0x00035e64) list_medium_line_t3_g3_g1_ParamLimits

0x6e08,	// (0x00035e64) list_medium_line_t3_g3_g1

0xe589,	// (0x0003d5e5) list_medium_line_t3_g3_g2_ParamLimits

0xe589,	// (0x0003d5e5) list_medium_line_t3_g3_g2

0xd416,	// (0x0003c472) list_medium_line_t3_g3_g3_ParamLimits

0xd416,	// (0x0003c472) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003edbf) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003edbf) list_medium_line_t3_g3_g

0x894b,	// (0x000379a7) list_medium_line_t3_g3_t1_ParamLimits

0x894b,	// (0x000379a7) list_medium_line_t3_g3_t1

0x8964,	// (0x000379c0) list_medium_line_t3_g3_t2_ParamLimits

0x8964,	// (0x000379c0) list_medium_line_t3_g3_t2

0x897a,	// (0x000379d6) list_medium_line_t3_g3_t3_ParamLimits

0x897a,	// (0x000379d6) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003edcb) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003edcb) list_medium_line_t3_g3_t

0xe49c,	// (0x0003d4f8) list_medium_line_right_iconx2_g1

0xe371,	// (0x0003d3cd) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003edd2) list_medium_line_right_iconx2_g

0xe5aa,	// (0x0003d606) list_medium_line_right_iconx2_t1

0xe49c,	// (0x0003d4f8) list_medium_line_t2_right_iconx2_g1

0xe371,	// (0x0003d3cd) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003edd2) list_medium_line_t2_right_iconx2_g

0x8994,	// (0x000379f0) list_medium_line_t2_right_iconx2_t1

0x89a4,	// (0x00037a00) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003edd7) list_medium_line_t2_right_iconx2_t

0x89b6,	// (0x00037a12) list_medium_line_x4_t4_t1

0x89c4,	// (0x00037a20) list_medium_line_x4_t4_t2

0x89d4,	// (0x00037a30) list_medium_line_x4_t4_t3

0x89e4,	// (0x00037a40) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003eddc) list_medium_line_x4_t4_t

0x8a37,	// (0x00037a93) tport_appsw_pane_ParamLimits

0x8a37,	// (0x00037a93) tport_appsw_pane

0x8a4f,	// (0x00037aab) tport_contact_pane_ParamLimits

0x8a4f,	// (0x00037aab) tport_contact_pane

0x8a67,	// (0x00037ac3) tport_listscroll_pane_ParamLimits

0x8a67,	// (0x00037ac3) tport_listscroll_pane

0x8a81,	// (0x00037add) cell_tport_appsw_pane_ParamLimits

0x8a81,	// (0x00037add) cell_tport_appsw_pane

0xd16e,	// (0x0003c1ca) tport_appsw_pane_g1_ParamLimits

0xd16e,	// (0x0003c1ca) tport_appsw_pane_g1

0xe5b8,	// (0x0003d614) tport_contact_pane_g1

0xe5c1,	// (0x0003d61d) tport_contact_pane_t1

0xe5cf,	// (0x0003d62b) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003ede5) tport_contact_pane_t

0xe5dd,	// (0x0003d639) list_tport_pane

0xe5e6,	// (0x0003d642) scroll_pane_cp_030

0x8ad3,	// (0x00037b2f) cell_tport_appsw_pane_g1

0x8ae3,	// (0x00037b3f) cell_tport_appsw_pane_t1

0x8af1,	// (0x00037b4d) grid_highlight_pane_cp019

0x8af9,	// (0x00037b55) list_tport_double_graphic_pane_ParamLimits

0x8af9,	// (0x00037b55) list_tport_double_graphic_pane

0x9c5f,	// (0x00038cbb) list_highlight_pane_cp023_ParamLimits

0x9c5f,	// (0x00038cbb) list_highlight_pane_cp023

0x8b06,	// (0x00037b62) list_tport_double_graphic_pane_g1_ParamLimits

0x8b06,	// (0x00037b62) list_tport_double_graphic_pane_g1

0x8b13,	// (0x00037b6f) list_tport_double_graphic_pane_t1_ParamLimits

0x8b13,	// (0x00037b6f) list_tport_double_graphic_pane_t1

0x8b28,	// (0x00037b84) list_tport_double_graphic_pane_t2_ParamLimits

0x8b28,	// (0x00037b84) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003edf1) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003edf1) list_tport_double_graphic_pane_t

0x9bfe,	// (0x00038c5a) main_cale_note_pane

0x0ba5,	// (0x0002fc01) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x0ba5,	// (0x0002fc01) cell_vitu2_function_top_wide_pane_cp01

0x7fc8,	// (0x00037024) wait_bar_pane_cp05_ParamLimits

0x9c5f,	// (0x00038cbb) listscroll_cmail_pane

0xe5f7,	// (0x0003d653) list_cmail_pane

0x8b44,	// (0x00037ba0) list_cmail_body_pane

0xd501,	// (0x0003c55d) list_single_cmail_header_caption_pane

0x8b57,	// (0x00037bb3) list_single_cmail_header_detail_pane_ParamLimits

0x8b57,	// (0x00037bb3) list_single_cmail_header_detail_pane

0x8b82,	// (0x00037bde) list_single_cmail_header_caption_pane_t1

0x8b92,	// (0x00037bee) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8b92,	// (0x00037bee) list_single_cmail_header_detail_pane_g1

0xe617,	// (0x0003d673) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe617,	// (0x0003d673) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003edf6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003edf6) list_single_cmail_header_detail_pane_g

0x8baa,	// (0x00037c06) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8baa,	// (0x00037c06) list_single_cmail_header_detail_pane_t1

0x8bfa,	// (0x00037c56) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8bfa,	// (0x00037c56) list_single_cmail_header_editor_pane_bg

0xdf2c,	// (0x0003cf88) list_cmail_body_pane_g1

0xe654,	// (0x0003d6b0) list_cmail_body_pane_t1

0xd1d6,	// (0x0003c232) list_single_cmail_header_editor_pane_bg_g1

0xa7c9,	// (0x00039825) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1e6,	// (0x0003c242) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1de,	// (0x0003c23a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd40e,	// (0x0003c46a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd206,	// (0x0003c262) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1f6,	// (0x0003c252) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1fe,	// (0x0003c25a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa7a9,	// (0x00039805) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c13,	// (0x00037c6f) calenote_gesture_pane_ParamLimits

0x8c13,	// (0x00037c6f) calenote_gesture_pane

0x8c33,	// (0x00037c8f) calenote_window_pane_ParamLimits

0x8c33,	// (0x00037c8f) calenote_window_pane

0xe662,	// (0x0003d6be) popup_note_window_cp01

0x8c4f,	// (0x00037cab) calenote_swipe_1_pane_ParamLimits

0x8c4f,	// (0x00037cab) calenote_swipe_1_pane

0x8476,	// (0x000374d2) calenote_swipe_2_pane_ParamLimits

0x8476,	// (0x000374d2) calenote_swipe_2_pane

0xe28b,	// (0x0003d2e7) calenote_swipe_1_pane_g1_ParamLimits

0xe28b,	// (0x0003d2e7) calenote_swipe_1_pane_g1

0xe298,	// (0x0003d2f4) calenote_swipe_1_pane_g2_ParamLimits

0xe298,	// (0x0003d2f4) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003ed1f) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003ed1f) calenote_swipe_1_pane_g

0xe674,	// (0x0003d6d0) calenote_swipe_1_pane_t1_ParamLimits

0xe674,	// (0x0003d6d0) calenote_swipe_1_pane_t1

0xe28b,	// (0x0003d2e7) calenote_swipe_2_pane_g1_ParamLimits

0xe28b,	// (0x0003d2e7) calenote_swipe_2_pane_g1

0xe693,	// (0x0003d6ef) calenote_swipe_2_pane_g2_ParamLimits

0xe693,	// (0x0003d6ef) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003ee02) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003ee02) calenote_swipe_2_pane_g

0xe69f,	// (0x0003d6fb) calenote_swipe_2_pane_t1_ParamLimits

0xe69f,	// (0x0003d6fb) calenote_swipe_2_pane_t1

0x9bfe,	// (0x00038c5a) main_mup_navstr_pane

0x570e,	// (0x0003476a) main_mup3_pane_t7_ParamLimits

0x570e,	// (0x0003476a) main_mup3_pane_t7

0x6152,	// (0x000351ae) main_mp4_pane_g6_ParamLimits

0x6152,	// (0x000351ae) main_mp4_pane_g6

0x6399,	// (0x000353f5) main_image3_pane_t4_ParamLimits

0x6399,	// (0x000353f5) main_image3_pane_t4

0x8c64,	// (0x00037cc0) popup_navstr_preview_pane_ParamLimits

0x8c64,	// (0x00037cc0) popup_navstr_preview_pane

0x8c74,	// (0x00037cd0) scroll_navstr_pane_ParamLimits

0x8c74,	// (0x00037cd0) scroll_navstr_pane

0x9bfe,	// (0x00038c5a) bg_popup_preview_window_pane_cp04

0xe6c6,	// (0x0003d722) popup_navstr_preview_pane_t1

0x8c88,	// (0x00037ce4) scroll_navstr_pane_g1_ParamLimits

0x8c88,	// (0x00037ce4) scroll_navstr_pane_g1

0x8c9c,	// (0x00037cf8) scroll_navstr_pane_t1_ParamLimits

0x8c9c,	// (0x00037cf8) scroll_navstr_pane_t1

0xe66b,	// (0x0003d6c7) bg_button_pane_cp014

0xe66b,	// (0x0003d6c7) bg_button_pane_cp030

0x830c,	// (0x00037368) list_double_fisheye_pane_g4_ParamLimits

0x830c,	// (0x00037368) list_double_fisheye_pane_g4

0x8318,	// (0x00037374) list_double_fisheye_pane_g5_ParamLimits

0x8318,	// (0x00037374) list_double_fisheye_pane_g5

0xe5ff,	// (0x0003d65b) sp_fs_scroll_pane_cp03

0xc212,	// (0x0003b26e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3b1,	// (0x0003d40d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003ed3c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3bd,	// (0x0003d419) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8b3a,	// (0x00037b96) sp_fs_scroll_pane_cp02

0xa4b6,	// (0x00039512) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4b6,	// (0x00039512) popup_sp_fs_calendar_preview_list_single_pane

0x9bfe,	// (0x00038c5a) main_cam6_pano_pane

0x9c5f,	// (0x00038cbb) main_mup3_pane_ParamLimits

0x9bfe,	// (0x00038c5a) main_phacti_pane

0x7e9b,	// (0x00036ef7) bg_button_pane_cp11

0x7eb5,	// (0x00036f11) main_mobtv_info_pane_g2_ParamLimits

0x7eb5,	// (0x00036f11) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003ec9c) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003ec9c) main_mobtv_info_pane_g

0x8090,	// (0x000370ec) sc_clock_pane_t5_ParamLimits

0x8090,	// (0x000370ec) sc_clock_pane_t5

0x816e,	// (0x000371ca) main_radioblah_pane_g1_ParamLimits

0xe1d7,	// (0x0003d233) main_radioblah_pane_t3_ParamLimits

0xe1d7,	// (0x0003d233) main_radioblah_pane_t3

0xe1ef,	// (0x0003d24b) main_radioblah_pane_t4_ParamLimits

0xe1ef,	// (0x0003d24b) main_radioblah_pane_t4

0x8196,	// (0x000371f2) main_radioblah_text_pane_ParamLimits

0x8196,	// (0x000371f2) main_radioblah_text_pane

0x81a8,	// (0x00037204) main_radioblah_info_pane_g1_ParamLimits

0x8241,	// (0x0003729d) main_radioblah_info_pane_t4_ParamLimits

0x8241,	// (0x0003729d) main_radioblah_info_pane_t4

0x9c5f,	// (0x00038cbb) main_sp_fs_calendar_pane

0x8cb3,	// (0x00037d0f) main_phacti_pane_g1

0x8cbb,	// (0x00037d17) phacti_note_pane_ParamLimits

0x8cbb,	// (0x00037d17) phacti_note_pane

0xe6dd,	// (0x0003d739) phacti_term_pane_ParamLimits

0xe6dd,	// (0x0003d739) phacti_term_pane

0xe6f2,	// (0x0003d74e) phacti_note_pane_t1_ParamLimits

0xe6f2,	// (0x0003d74e) phacti_note_pane_t1

0xe709,	// (0x0003d765) phacti_term_pane_g1

0xe711,	// (0x0003d76d) phacti_term_pane_t1_ParamLimits

0xe711,	// (0x0003d76d) phacti_term_pane_t1

0xe73b,	// (0x0003d797) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe743,	// (0x0003d79f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003ee0c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe74b,	// (0x0003d7a7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe74b,	// (0x0003d7a7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe761,	// (0x0003d7bd) aid_popup_sp_fs_bg_corner_pane

0xc77c,	// (0x0003b7d8) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bfe,	// (0x00038c5a) popup_sp_fs_calendar_preview_bg_pane

0xe769,	// (0x0003d7c5) popup_sp_fs_calendar_preview_list_pane

0xc323,	// (0x0003b37f) bg_main_sp_fs_cale_pane_ParamLimits

0xc323,	// (0x0003b37f) bg_main_sp_fs_cale_pane

0xe77a,	// (0x0003d7d6) listscroll_cale_mrui_pane_ParamLimits

0xe77a,	// (0x0003d7d6) listscroll_cale_mrui_pane

0xe78f,	// (0x0003d7eb) listscroll_sp_fs_schedule_track_pane

0xe798,	// (0x0003d7f4) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe798,	// (0x0003d7f4) main_sp_fs_ctrlbar_pane_cp01

0xe7ab,	// (0x0003d807) main_sp_fs_ribbon_pane

0xe7b3,	// (0x0003d80f) popup_sp_fs_cale_preview_window

0x8d2c,	// (0x00037d88) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d2c,	// (0x00037d88) list_single_sp_fs_schedule_track_pane

0x9c5f,	// (0x00038cbb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9c5f,	// (0x00038cbb) bg_sp_fs_highlight_list_pane_cp03

0x8d40,	// (0x00037d9c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d40,	// (0x00037d9c) list_single_sp_fs_schedule_track_pane_g1

0x8d4c,	// (0x00037da8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d4c,	// (0x00037da8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003ee11) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003ee11) list_single_sp_fs_schedule_track_pane_g

0x8d58,	// (0x00037db4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d58,	// (0x00037db4) list_single_sp_fs_schedule_track_pane_t1

0x8d7a,	// (0x00037dd6) sp_fs_schedule_track_pane_ParamLimits

0x8d7a,	// (0x00037dd6) sp_fs_schedule_track_pane

0xe7c5,	// (0x0003d821) sp_fs_schedule_track_pane_g1

0xe7cd,	// (0x0003d829) sp_fs_schedule_track_pane_g2

0xe7d5,	// (0x0003d831) sp_fs_schedule_track_pane_g3

0xe7dd,	// (0x0003d839) sp_fs_schedule_track_pane_g4

0xe7e5,	// (0x0003d841) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003ee16) sp_fs_schedule_track_pane_g

0xd1d6,	// (0x0003c232) bg_sp_fs_schedule_viewer_highlight_g1

0xa7c9,	// (0x00039825) bg_sp_fs_schedule_viewer_highlight_g2

0xd1de,	// (0x0003c23a) bg_sp_fs_schedule_viewer_highlight_g3

0xd1e6,	// (0x0003c242) bg_sp_fs_schedule_viewer_highlight_g4

0xd40e,	// (0x0003c46a) bg_sp_fs_schedule_viewer_highlight_g5

0xd1f6,	// (0x0003c252) bg_sp_fs_schedule_viewer_highlight_g6

0xd1fe,	// (0x0003c25a) bg_sp_fs_schedule_viewer_highlight_g7

0xd206,	// (0x0003c262) bg_sp_fs_schedule_viewer_highlight_g8

0xa7a9,	// (0x00039805) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003ee21) bg_sp_fs_schedule_viewer_highlight_g

0x9bfe,	// (0x00038c5a) bg_main_sp_fs_ribbon_pane

0x8d8f,	// (0x00037deb) main_sp_fs_ribbon_pane_g1

0xe7ed,	// (0x0003d849) main_sp_fs_ribbon_pane_t1

0x8d98,	// (0x00037df4) main_sp_fs_ribbon_pane_t2

0xe7fc,	// (0x0003d858) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003ee34) main_sp_fs_ribbon_pane_t

0xe80b,	// (0x0003d867) main_sp_fs_ribbon_scheduler_pane

0xe813,	// (0x0003d86f) bg_main_sp_fs_ribbon_pane_g1

0xe81c,	// (0x0003d878) bg_main_sp_fs_ribbon_pane_g2

0xe839,	// (0x0003d895) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003ee3b) bg_main_sp_fs_ribbon_pane_g

0xe841,	// (0x0003d89d) main_sp_fs_ribbon_scheduler_pane_g1

0xe84a,	// (0x0003d8a6) main_sp_fs_ribbon_scheduler_pane_g2

0xe853,	// (0x0003d8af) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003ee42) main_sp_fs_ribbon_scheduler_pane_g

0xe85c,	// (0x0003d8b8) list_cale_mrui_pane

0x8da7,	// (0x00037e03) sp_fs_scroll_pane_cp07_ParamLimits

0x8da7,	// (0x00037e03) sp_fs_scroll_pane_cp07

0x8dc3,	// (0x00037e1f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8dc3,	// (0x00037e1f) bg_sp_fs_schedule_viewer_highlight

0xe869,	// (0x0003d8c5) list_single_sp_fs_schedule_track_pane_cp01

0xe871,	// (0x0003d8cd) list_sp_fs_schedule_track_pane

0xe879,	// (0x0003d8d5) sp_fs_scroll_pane_cp06_ParamLimits

0xe879,	// (0x0003d8d5) sp_fs_scroll_pane_cp06

0xc77c,	// (0x0003b7d8) bgmain_sp_fs_calendar_pane_g1

0x8dd5,	// (0x00037e31) list_single_cale_mrui_pane_ParamLimits

0x8dd5,	// (0x00037e31) list_single_cale_mrui_pane

0xe88b,	// (0x0003d8e7) list_single_cale_mrui_row_pane_ParamLimits

0xe88b,	// (0x0003d8e7) list_single_cale_mrui_row_pane

0xe8a1,	// (0x0003d8fd) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8a1,	// (0x0003d8fd) list_single_cale_mrui_row_pane_g1

0xe8e6,	// (0x0003d942) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8e6,	// (0x0003d942) list_single_cale_mrui_row_pane_t1

0x8dea,	// (0x00037e46) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8dea,	// (0x00037e46) list_single_cale_mrui_row_pane_t2

0xe8f8,	// (0x0003d954) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8f8,	// (0x0003d954) list_single_cale_mrui_row_pane_t3

0xe927,	// (0x0003d983) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe927,	// (0x0003d983) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003ee50) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003ee50) list_single_cale_mrui_row_pane_t

0x8e52,	// (0x00037eae) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e52,	// (0x00037eae) list_single_cmail_header_editor_pane_bg_cp01

0x8e78,	// (0x00037ed4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e78,	// (0x00037ed4) list_single_cmail_header_editor_pane_bg_cp02

0x8e98,	// (0x00037ef4) main_radioblah_text_pane_t1_ParamLimits

0x8e98,	// (0x00037ef4) main_radioblah_text_pane_t1

0xe956,	// (0x0003d9b2) cam6_indi_pane_cp01

0xe95e,	// (0x0003d9ba) cam6_mode_pane_cp01

0xe966,	// (0x0003d9c2) cam6_pano_pane

0xe96f,	// (0x0003d9cb) cam6_zoom_pane_cp01

0xe979,	// (0x0003d9d5) cam6_pano_image_pane

0xe982,	// (0x0003d9de) cam6_pano_pane_g1

0xdf2c,	// (0x0003cf88) cam6_pano_pane_g2

0xe98b,	// (0x0003d9e7) cam6_pano_pane_g3

0xe994,	// (0x0003d9f0) cam6_pano_pane_g4

0xcd22,	// (0x0003bd7e) cam6_pano_pane_g5

0xe99d,	// (0x0003d9f9) cam6_pano_pane_g6

0xe9a5,	// (0x0003da01) cam6_pano_pane_g7

0xe9ad,	// (0x0003da09) cam6_pano_pane_g8

0xe9b6,	// (0x0003da12) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003ee59) cam6_pano_pane_g

0x9bfe,	// (0x00038c5a) main_browser_tag_pane

0xe6be,	// (0x0003d71a) grid_navstr_albumart_pane

0xe9c1,	// (0x0003da1d) cell_navstr_albumart_pane_ParamLimits

0xe9c1,	// (0x0003da1d) cell_navstr_albumart_pane

0xe9e0,	// (0x0003da3c) cell_navstr_albumart_pane_g1

0xc124,	// (0x0003b180) cell_navstr_albumart_pane_g2

0xc134,	// (0x0003b190) cell_navstr_albumart_pane_g3

0xc12c,	// (0x0003b188) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003ee6c) cell_navstr_albumart_pane_g

0x8eb3,	// (0x00037f0f) bt_list_pane_ParamLimits

0x8eb3,	// (0x00037f0f) bt_list_pane

0x8ec9,	// (0x00037f25) bt_list_pane_t1

0x8ed8,	// (0x00037f34) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003ee75) bt_list_pane_t

0x9bfe,	// (0x00038c5a) main_cale_prevew_pane

0x8ee7,	// (0x00037f43) popup_cale_preview_window_ParamLimits

0x8ee7,	// (0x00037f43) popup_cale_preview_window

0x9c5f,	// (0x00038cbb) bg_popup_preview_window_pane_cp05_ParamLimits

0x9c5f,	// (0x00038cbb) bg_popup_preview_window_pane_cp05

0xe9e8,	// (0x0003da44) list_cale_preview_pane_ParamLimits

0xe9e8,	// (0x0003da44) list_cale_preview_pane

0x8f04,	// (0x00037f60) list_double_cale_preview_pane_ParamLimits

0x8f04,	// (0x00037f60) list_double_cale_preview_pane

0x8f18,	// (0x00037f74) list_single_cale_preview_pane_ParamLimits

0x8f18,	// (0x00037f74) list_single_cale_preview_pane

0x8f30,	// (0x00037f8c) list_single_cale_preview_pane_g1

0x8f38,	// (0x00037f94) list_single_cale_preview_pane_t1_ParamLimits

0x8f38,	// (0x00037f94) list_single_cale_preview_pane_t1

0x8f4d,	// (0x00037fa9) list_double_cale_preview_pane_g1

0x8f55,	// (0x00037fb1) list_double_cale_preview_pane_t1_ParamLimits

0x8f55,	// (0x00037fb1) list_double_cale_preview_pane_t1

0x8f6a,	// (0x00037fc6) list_double_cale_preview_pane_t2_ParamLimits

0x8f6a,	// (0x00037fc6) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003ee7a) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003ee7a) list_double_cale_preview_pane_t

0x9bfe,	// (0x00038c5a) main_ezdial_pane

0x9c5f,	// (0x00038cbb) main_sp_fs_email_pane_ParamLimits

0x84b2,	// (0x0003750e) cmail_ddmenu_btn01_pane_ParamLimits

0x84b2,	// (0x0003750e) cmail_ddmenu_btn01_pane

0x84c5,	// (0x00037521) cmail_ddmenu_btn02_pane_ParamLimits

0x84c5,	// (0x00037521) cmail_ddmenu_btn02_pane

0x84e8,	// (0x00037544) cmail_ddmenu_btn03_pane_ParamLimits

0x84e8,	// (0x00037544) cmail_ddmenu_btn03_pane

0x8513,	// (0x0003756f) main_sp_fs_ctrlbar_pane_ParamLimits

0x8537,	// (0x00037593) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b44,	// (0x00037ba0) list_cmail_body_pane_ParamLimits

0xe60e,	// (0x0003d66a) bg_button_pane_cp12

0xe623,	// (0x0003d67f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe623,	// (0x0003d67f) list_single_cmail_header_detail_pane_g3

0xe630,	// (0x0003d68c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe630,	// (0x0003d68c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003edfd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003edfd) list_single_cmail_header_detail_pane_t

0xe726,	// (0x0003d782) phacti_term_pane_t2_ParamLimits

0xe726,	// (0x0003d782) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003ee07) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003ee07) phacti_term_pane_t

0xe9f4,	// (0x0003da50) aid_size_list_single_double

0x8f82,	// (0x00037fde) popup_ezdial_listscroll_window

0x8f9e,	// (0x00037ffa) popup_number_entry_window_cp01

0xae96,	// (0x00039ef2) bg_popup_call_pane_cp09

0xea00,	// (0x0003da5c) ezdial_list_pane

0xea08,	// (0x0003da64) scroll_pane_cp23

0xc323,	// (0x0003b37f) bg_button_pane_cp028_ParamLimits

0xc323,	// (0x0003b37f) bg_button_pane_cp028

0x8fac,	// (0x00038008) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fac,	// (0x00038008) cmail_ddmenu_btn01_pane_g1

0x8fbb,	// (0x00038017) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fbb,	// (0x00038017) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003ee7f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003ee7f) cmail_ddmenu_btn01_pane_g

0xea10,	// (0x0003da6c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea10,	// (0x0003da6c) cmail_ddmenu_btn01_pane_t1

0xc323,	// (0x0003b37f) bg_button_pane_cp029_ParamLimits

0xc323,	// (0x0003b37f) bg_button_pane_cp029

0x8fd1,	// (0x0003802d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fd1,	// (0x0003802d) cmail_ddmenu_btn02_pane_g1

0x8fec,	// (0x00038048) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fec,	// (0x00038048) cmail_ddmenu_btn02_pane_t1

0x9c5f,	// (0x00038cbb) bg_button_pane_cp031_ParamLimits

0x9c5f,	// (0x00038cbb) bg_button_pane_cp031

0x8fd1,	// (0x0003802d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fd1,	// (0x0003802d) cmail_ddmenu_btn03_pane_g1

0x8fec,	// (0x00038048) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fec,	// (0x00038048) cmail_ddmenu_btn03_pane_t1

0x6340,	// (0x0003539c) cell_dialer2_keypad_pane_t1_ParamLimits

0x635a,	// (0x000353b6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x635a,	// (0x000353b6) cell_dialer2_keypad_pane_t1_copy1

0x7cf2,	// (0x00036d4e) ncimui_group_button_pane

0x9c5f,	// (0x00038cbb) main_sp_fs_calendar_pane_ParamLimits

0xd501,	// (0x0003c55d) list_single_cmail_header_caption_pane_ParamLimits

0xe771,	// (0x0003d7cd) aid_recal_txt_sm_pane

0x9bfe,	// (0x00038c5a) mian_recal_day_pane

0xe7b3,	// (0x0003d80f) popup_sp_fs_cale_preview_window_ParamLimits

0xea26,	// (0x0003da82) list_recal_day_pane

0xea69,	// (0x0003dac5) list_single_recal_day_pane_ParamLimits

0xea69,	// (0x0003dac5) list_single_recal_day_pane

0xea7b,	// (0x0003dad7) list_single_recal_day_pane_g1_ParamLimits

0xea7b,	// (0x0003dad7) list_single_recal_day_pane_g1

0xea87,	// (0x0003dae3) list_single_recal_day_pane_g2_ParamLimits

0xea87,	// (0x0003dae3) list_single_recal_day_pane_g2

0xea93,	// (0x0003daef) list_single_recal_day_pane_g3_ParamLimits

0xea93,	// (0x0003daef) list_single_recal_day_pane_g3

0x9013,	// (0x0003806f) list_single_recal_day_pane_g4_ParamLimits

0x9013,	// (0x0003806f) list_single_recal_day_pane_g4

0xea9f,	// (0x0003dafb) list_single_recal_day_pane_g5_ParamLimits

0xea9f,	// (0x0003dafb) list_single_recal_day_pane_g5

0xeaab,	// (0x0003db07) list_single_recal_day_pane_g6_ParamLimits

0xeaab,	// (0x0003db07) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003ee8e) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003ee8e) list_single_recal_day_pane_g

0xeabf,	// (0x0003db1b) list_single_recal_day_pane_t1

0xead1,	// (0x0003db2d) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003ee99) list_single_recal_day_pane_t

0x902b,	// (0x00038087) ncimui_query_button_pane_ParamLimits

0x902b,	// (0x00038087) ncimui_query_button_pane

0x903b,	// (0x00038097) ncimui_query_button_pane_t1_ParamLimits

0x903b,	// (0x00038097) ncimui_query_button_pane_t1

0xeae3,	// (0x0003db3f) ncimui_query_button_pane_t2_ParamLimits

0xeae3,	// (0x0003db3f) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003ee9e) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003ee9e) ncimui_query_button_pane_t

0x904e,	// (0x000380aa) query_button_pane_ParamLimits

0x904e,	// (0x000380aa) query_button_pane

0x9bfe,	// (0x00038c5a) bg_button_pane_cp0028

0xeaf6,	// (0x0003db52) query_button_pane_t1

0x466f,	// (0x000336cb) main_tport_pane_ParamLimits

0x89f4,	// (0x00037a50) bg_popup_window_pane_cp01_ParamLimits

0x89f4,	// (0x00037a50) bg_popup_window_pane_cp01

0x8a0f,	// (0x00037a6b) heading_pane_cp08_ParamLimits

0x8a0f,	// (0x00037a6b) heading_pane_cp08

0x8a22,	// (0x00037a7e) heading_pane_cp07_ParamLimits

0x8a22,	// (0x00037a7e) heading_pane_cp07

0x8ad3,	// (0x00037b2f) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003edea) cell_tport_appsw_pane_g

0xb013,	// (0x0003a06f) input_candi_list_open_g1

0xa97d,	// (0x000399d9) list_cale_time_pane_g6_ParamLimits

0xa97d,	// (0x000399d9) list_cale_time_pane_g6

0x50c5,	// (0x00034121) aid_size_touch_calib_1_ParamLimits

0x50c5,	// (0x00034121) aid_size_touch_calib_1

0x50d7,	// (0x00034133) aid_size_touch_calib_2_ParamLimits

0x50d7,	// (0x00034133) aid_size_touch_calib_2

0x50ef,	// (0x0003414b) aid_size_touch_calib_3_ParamLimits

0x50ef,	// (0x0003414b) aid_size_touch_calib_3

0x510d,	// (0x00034169) aid_size_touch_calib_4_ParamLimits

0x510d,	// (0x00034169) aid_size_touch_calib_4

0x5125,	// (0x00034181) main_touch_calib_button_group_pane_ParamLimits

0x5125,	// (0x00034181) main_touch_calib_button_group_pane

0x513d,	// (0x00034199) main_touch_calib_pane_g1_ParamLimits

0x514f,	// (0x000341ab) main_touch_calib_pane_g2_ParamLimits

0x5161,	// (0x000341bd) main_touch_calib_pane_g3_ParamLimits

0x5173,	// (0x000341cf) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0003e7ad) main_touch_calib_pane_g_ParamLimits

0x5185,	// (0x000341e1) main_touch_calib_pane_t1_ParamLimits

0x519f,	// (0x000341fb) main_touch_calib_pane_t2_ParamLimits

0x51b9,	// (0x00034215) main_touch_calib_pane_t3_ParamLimits

0x51cd,	// (0x00034229) main_touch_calib_pane_t4_ParamLimits

0x51e3,	// (0x0003423f) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0003e7b6) main_touch_calib_pane_t_ParamLimits

0xcab8,	// (0x0003bb14) list_single_fp_cale_pane_g3_ParamLimits

0xcab8,	// (0x0003bb14) list_single_fp_cale_pane_g3

0x65cb,	// (0x00035627) bg_button_pane_cp012_ParamLimits

0x65cb,	// (0x00035627) bg_vkb2_func_pane_cp03_ParamLimits

0x0dab,	// (0x0002fe07) cell_vitu2_function_top_pane_g1_ParamLimits

0x65cb,	// (0x00035627) bg_vkb2_func_pane_cp04_ParamLimits

0x7c80,	// (0x00036cdc) main_ncimui_button_group_pane_ParamLimits

0x7c80,	// (0x00036cdc) main_ncimui_button_group_pane

0x7ce0,	// (0x00036d3c) main_ncimui_pane_t3_ParamLimits

0x7ce0,	// (0x00036d3c) main_ncimui_pane_t3

0xe6d4,	// (0x0003d730) phacti_button_group_pane

0xe9f4,	// (0x0003da50) aid_size_list_single_double_ParamLimits

0x8f82,	// (0x00037fde) popup_ezdial_listscroll_window_ParamLimits

0x8f9e,	// (0x00037ffa) popup_number_entry_window_cp01_ParamLimits

0x9061,	// (0x000380bd) phacti_button_pane_ParamLimits

0x9061,	// (0x000380bd) phacti_button_pane

0x9bfe,	// (0x00038c5a) bg_button_pane_cp14

0xeb04,	// (0x0003db60) phacti_button_pane_t1

0x9072,	// (0x000380ce) main_touch_calib_button_pane_ParamLimits

0x9072,	// (0x000380ce) main_touch_calib_button_pane

0xa3a0,	// (0x000393fc) bg_button_pane_cp18_ParamLimits

0xa3a0,	// (0x000393fc) bg_button_pane_cp18

0xeb12,	// (0x0003db6e) main_touch_calib_button_pane_t1_ParamLimits

0xeb12,	// (0x0003db6e) main_touch_calib_button_pane_t1

0xeb28,	// (0x0003db84) main_touch_calib_button_pane_t2_ParamLimits

0xeb28,	// (0x0003db84) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003eea3) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003eea3) main_touch_calib_button_pane_t

0x9bfe,	// (0x00038c5a) cell_ncimui_button_pane

0x9bfe,	// (0x00038c5a) bg_button_pane_cp032

0xeb46,	// (0x0003dba2) cell_ncimui_button_pane_t1

0x6377,	// (0x000353d3) image3_infobar_pane_ParamLimits

0x6377,	// (0x000353d3) image3_infobar_pane

0x80bc,	// (0x00037118) fs_bigclock_status_pane_ParamLimits

0x80bc,	// (0x00037118) fs_bigclock_status_pane

0x80c9,	// (0x00037125) main_fs_bigclock_clock_pane_ParamLimits

0x80c9,	// (0x00037125) main_fs_bigclock_clock_pane

0x80f3,	// (0x0003714f) main_fs_bigclock_indi_pane_ParamLimits

0x80f3,	// (0x0003714f) main_fs_bigclock_indi_pane

0x8131,	// (0x0003718d) main_fs_bigclock_swipe_pane_ParamLimits

0x8131,	// (0x0003718d) main_fs_bigclock_swipe_pane

0x9bfe,	// (0x00038c5a) main_fs_clock_dumped_data

0xe039,	// (0x0003d095) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe039,	// (0x0003d095) list_single_fs_bigclock_indicator_pane_g1

0xe063,	// (0x0003d0bf) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe063,	// (0x0003d0bf) list_single_fs_bigclock_indicator_pane_g2

0xe07d,	// (0x0003d0d9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe07d,	// (0x0003d0d9) list_single_fs_bigclock_indicator_pane_g3

0xe097,	// (0x0003d0f3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe097,	// (0x0003d0f3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003ecd0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003ecd0) list_single_fs_bigclock_indicator_pane_g

0xe0c2,	// (0x0003d11e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0c2,	// (0x0003d11e) list_single_fs_bigclock_indicator_pane_t1

0xe0ea,	// (0x0003d146) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0ea,	// (0x0003d146) list_single_fs_bigclock_indicator_pane_t2

0xe112,	// (0x0003d16e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe112,	// (0x0003d16e) list_single_fs_bigclock_indicator_pane_t3

0xe13a,	// (0x0003d196) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe13a,	// (0x0003d196) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003ecdb) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003ecdb) list_single_fs_bigclock_indicator_pane_t

0xeb54,	// (0x0003dbb0) image3_infobar_fav_pane_ParamLimits

0xeb54,	// (0x0003dbb0) image3_infobar_fav_pane

0xeb64,	// (0x0003dbc0) image3_infobar_loc_pane_ParamLimits

0xeb64,	// (0x0003dbc0) image3_infobar_loc_pane

0xeb7a,	// (0x0003dbd6) image3_infobar_time_pane_ParamLimits

0xeb7a,	// (0x0003dbd6) image3_infobar_time_pane

0xc77c,	// (0x0003b7d8) image3_infobar_time_pane_g1

0xeb8a,	// (0x0003dbe6) image3_infobar_time_pane_t1

0xc77c,	// (0x0003b7d8) image3_infobar_loc_pane_g1

0xeb98,	// (0x0003dbf4) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003eea8) image3_infobar_loc_pane_g

0xeba0,	// (0x0003dbfc) image3_infobar_loc_pane_t1

0xc77c,	// (0x0003b7d8) image3_infobar_fav_pane_g1

0xebae,	// (0x0003dc0a) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003eead) image3_infobar_fav_pane_g

0xebb6,	// (0x0003dc12) fs_bigclock_status_battery_pane

0xebbf,	// (0x0003dc1b) fs_bigclock_status_signal_pane

0xebc8,	// (0x0003dc24) fs_bigclock_status_title_pane

0xebd1,	// (0x0003dc2d) fs_bigclock_status_signal_pane_g1

0xebda,	// (0x0003dc36) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003eeb2) fs_bigclock_status_signal_pane_g

0xebe2,	// (0x0003dc3e) fs_bigclock_status_battery_pane_g1

0xebeb,	// (0x0003dc47) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003eeb7) fs_bigclock_status_battery_pane_g

0xebf3,	// (0x0003dc4f) fs_bigclock_status_title_pane_t1

0xc77c,	// (0x0003b7d8) main_fs_bigclock_clock_pane_g1

0xec01,	// (0x0003dc5d) main_fs_bigclock_clock_pane_g2

0xec0c,	// (0x0003dc68) main_fs_bigclock_clock_pane_g3

0xec0c,	// (0x0003dc68) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003eebc) main_fs_bigclock_clock_pane_g

0xec18,	// (0x0003dc74) main_fs_bigclock_clock_pane_t1

0x9087,	// (0x000380e3) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003eec5) main_fs_bigclock_clock_pane_t

0x9096,	// (0x000380f2) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9096,	// (0x000380f2) list_single_fs_bigclock_indicator_pane

0x90a7,	// (0x00038103) list_single_fs_bigclock_pane_ParamLimits

0x90a7,	// (0x00038103) list_single_fs_bigclock_pane

0xec2f,	// (0x0003dc8b) main_fs_bigclock_indicator_pane_t1

0xec3e,	// (0x0003dc9a) list_single_fs_bigclock_pane_g1

0xec46,	// (0x0003dca2) list_single_fs_bigclock_pane_t1

0xc77c,	// (0x0003b7d8) main_fs_bigclock_swipe_pane_g1

0xec89,	// (0x0003dce5) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003eed6) main_fs_bigclock_swipe_pane_g

0xec91,	// (0x0003dced) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec91,	// (0x0003dced) main_fs_bigclock_swipe_pane_t1

0x32ff,	// (0x0003235b) call_type_pane_ParamLimits

0x9bfe,	// (0x00038c5a) main_btmg_pane

0xe8cd,	// (0x0003d929) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8cd,	// (0x0003d929) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003ee49) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003ee49) list_single_cale_mrui_row_pane_g

0xea4f,	// (0x0003daab) list_recal_vselct_arw_lo_pane

0xea57,	// (0x0003dab3) list_recal_vselct_arw_up_pane

0xea5f,	// (0x0003dabb) list_recal_vselct_pane

0x910a,	// (0x00038166) btmg_button_pane

0x9114,	// (0x00038170) main_btmg_pane_g1

0x9bfe,	// (0x00038c5a) bg_button_pane_cp044

0xecae,	// (0x0003dd0a) btmg_button_pane_t1

0xc30f,	// (0x0003b36b) aid_listscroll_gen

0x9c5f,	// (0x00038cbb) main_cntbar_detail_pane

0xe5ef,	// (0x0003d64b) list_cmail_folder_pane

0xe5ff,	// (0x0003d65b) sp_fs_scroll_pane_cp03_ParamLimits

0x911e,	// (0x0003817a) list_single_fs_dyc_pane_cp01_ParamLimits

0x911e,	// (0x0003817a) list_single_fs_dyc_pane_cp01

0xecbc,	// (0x0003dd18) aid_size_cmail_indent

0xecc5,	// (0x0003dd21) list_single_dyc_row_pane_cp01

0x9166,	// (0x000381c2) cntbar_detail_list_pane_ParamLimits

0x9166,	// (0x000381c2) cntbar_detail_list_pane

0x91b8,	// (0x00038214) main_cntbar_detail_cont_pane_ParamLimits

0x91b8,	// (0x00038214) main_cntbar_detail_cont_pane

0x3222,	// (0x0003227e) scroll_pane_cp032_ParamLimits

0x3222,	// (0x0003227e) scroll_pane_cp032

0x91cc,	// (0x00038228) cntbar_detail_list_event_pane_ParamLimits

0x91cc,	// (0x00038228) cntbar_detail_list_event_pane

0x9178,	// (0x000381d4) cntbar_detail_list_shct_pane

0xa817,	// (0x00039873) aid_list_gen

0xecce,	// (0x0003dd2a) aid_scroll

0xecd7,	// (0x0003dd33) aid_size_touch_scroll_bar

0x7488,	// (0x000364e4) aid_list_double

0xece0,	// (0x0003dd3c) aid_list_single

0x7488,	// (0x000364e4) aid_list_single_lg

0xece9,	// (0x0003dd45) aid_list_z_g_a_sm

0xecf1,	// (0x0003dd4d) aid_list_z_g_d

0xecf9,	// (0x0003dd55) aid_txt_z_prm

0x91dc,	// (0x00038238) aid_txt_z_prm_cp01

0x91ea,	// (0x00038246) aid_txt_z_sec

0x91f8,	// (0x00038254) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91f8,	// (0x00038254) main_cntbar_detail_cont_pane_g1

0x920c,	// (0x00038268) main_cntbar_detail_cont_pane_g2_ParamLimits

0x920c,	// (0x00038268) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003eedb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003eedb) main_cntbar_detail_cont_pane_g

0xed07,	// (0x0003dd63) main_cntbar_detail_cont_pane_t1

0xed15,	// (0x0003dd71) main_cntbar_detail_cont_pane_t2

0xed23,	// (0x0003dd7f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003eee0) main_cntbar_detail_cont_pane_t

0x921c,	// (0x00038278) cell_cntbar_detail_list_shct_pane_ParamLimits

0x921c,	// (0x00038278) cell_cntbar_detail_list_shct_pane

0xed31,	// (0x0003dd8d) cntbar_detail_list_shct_pane_g1

0xed3a,	// (0x0003dd96) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003eee7) cntbar_detail_list_shct_pane_g

0x922e,	// (0x0003828a) cntbar_detail_list_event_pane_g1_ParamLimits

0x922e,	// (0x0003828a) cntbar_detail_list_event_pane_g1

0x923a,	// (0x00038296) cntbar_detail_list_event_pane_g2_ParamLimits

0x923a,	// (0x00038296) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003eeec) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003eeec) cntbar_detail_list_event_pane_g

0x92a8,	// (0x00038304) cntbar_detail_list_event_pane_t1_ParamLimits

0x92a8,	// (0x00038304) cntbar_detail_list_event_pane_t1

0x92bd,	// (0x00038319) cntbar_detail_list_event_pane_t2_ParamLimits

0x92bd,	// (0x00038319) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003eef9) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003eef9) cntbar_detail_list_event_pane_t

0xc77c,	// (0x0003b7d8) cell_cntbar_detail_list_shct_pane_g1

0x3714,	// (0x00032770) navi_pane_mv_g3

0x9c5f,	// (0x00038cbb) main_cntbar_detail_pane_ParamLimits

0x9bfe,	// (0x00038c5a) main_notif_wgt_pane

0x60ec,	// (0x00035148) aid_tch_main_mp4_pane_g4

0x62ca,	// (0x00035326) popup_slider_window_cp02

0xea45,	// (0x0003daa1) list_recal_day_event_pane

0x9136,	// (0x00038192) cntbar_detail_btn_pane_ParamLimits

0x9136,	// (0x00038192) cntbar_detail_btn_pane

0x914e,	// (0x000381aa) cntbar_detail_btn_pane_cp01_ParamLimits

0x914e,	// (0x000381aa) cntbar_detail_btn_pane_cp01

0x9178,	// (0x000381d4) cntbar_detail_list_shct_pane_ParamLimits

0x9188,	// (0x000381e4) cntbar_detail_pane_g1_ParamLimits

0x9188,	// (0x000381e4) cntbar_detail_pane_g1

0x919c,	// (0x000381f8) cntbar_detail_pane_t1_ParamLimits

0x919c,	// (0x000381f8) cntbar_detail_pane_t1

0x9246,	// (0x000382a2) cntbar_detail_list_event_pane_g3_ParamLimits

0x9246,	// (0x000382a2) cntbar_detail_list_event_pane_g3

0x925e,	// (0x000382ba) cntbar_detail_list_event_pane_g4_ParamLimits

0x925e,	// (0x000382ba) cntbar_detail_list_event_pane_g4

0x9276,	// (0x000382d2) cntbar_detail_list_event_pane_g5_ParamLimits

0x9276,	// (0x000382d2) cntbar_detail_list_event_pane_g5

0x928e,	// (0x000382ea) cntbar_detail_list_event_pane_g6_ParamLimits

0x928e,	// (0x000382ea) cntbar_detail_list_event_pane_g6

0x92d2,	// (0x0003832e) cntbar_detail_list_event_pane_t3_ParamLimits

0x92d2,	// (0x0003832e) cntbar_detail_list_event_pane_t3

0x92e4,	// (0x00038340) popup_notif_wgt_window_ParamLimits

0x92e4,	// (0x00038340) popup_notif_wgt_window

0x92fd,	// (0x00038359) popup_submenu_window_cp01_ParamLimits

0x92fd,	// (0x00038359) popup_submenu_window_cp01

0xae96,	// (0x00039ef2) bg_popup_window_pane_cp10

0xed43,	// (0x0003dd9f) listscroll_notif_wgt_pane

0xed55,	// (0x0003ddb1) list_notif_wgt_window

0xed5e,	// (0x0003ddba) scroll_pane_cp033

0x9311,	// (0x0003836d) list_notif_wgt_row_pane_ParamLimits

0x9311,	// (0x0003836d) list_notif_wgt_row_pane

0xed67,	// (0x0003ddc3) aid_size_list_notif_wgt_del

0xed74,	// (0x0003ddd0) list_notif_wgt_row_pane_g1

0xed80,	// (0x0003dddc) list_notif_wgt_row_pane_g2

0xed94,	// (0x0003ddf0) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003ef00) list_notif_wgt_row_pane_g

0xeda1,	// (0x0003ddfd) list_notif_wgt_row_pane_t1

0xedb7,	// (0x0003de13) list_notif_wgt_row_pane_t2

0xedc9,	// (0x0003de25) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003ef07) list_notif_wgt_row_pane_t

0xd434,	// (0x0003c490) list_recal_day_event_pane_g1

0xeddb,	// (0x0003de37) list_recal_day_event_pane_t1

0x9bfe,	// (0x00038c5a) bg_button_pane_cp045

0xedea,	// (0x0003de46) cntbar_detail_btn_pane_t1

0xc323,	// (0x0003b37f) main_callh_pane_ParamLimits

0xc323,	// (0x0003b37f) main_callh_pane

0x9bfe,	// (0x00038c5a) main_coverflow0_pane

0x9bfe,	// (0x00038c5a) main_wgtman_pane

0x8149,	// (0x000371a5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8149,	// (0x000371a5) main_fs_bigclock_unlock_btn_pane

0x8acb,	// (0x00037b27) bg_button_pane_cp16

0x8adb,	// (0x00037b37) cell_tport_appsw_pane_g3

0x9321,	// (0x0003837d) cf0_flow_pane_ParamLimits

0x9321,	// (0x0003837d) cf0_flow_pane

0xedf8,	// (0x0003de54) listscroll_cf0_pane

0xee03,	// (0x0003de5f) main_cf0_pane_g1

0x9336,	// (0x00038392) main_cf0_pane_t1_ParamLimits

0x9336,	// (0x00038392) main_cf0_pane_t1

0x934d,	// (0x000383a9) main_cf0_pane_t2_ParamLimits

0x934d,	// (0x000383a9) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003ef13) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003ef13) main_cf0_pane_t

0xee15,	// (0x0003de71) scroll_pane_cp11

0x9364,	// (0x000383c0) cf0_flow_pane_g1

0x9370,	// (0x000383cc) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003ef18) cf0_flow_pane_g

0x937c,	// (0x000383d8) cf0_flow_pane_t1

0x9bfe,	// (0x00038c5a) main_call6_pane

0x9bfe,	// (0x00038c5a) main_calllock_pane

0x938e,	// (0x000383ea) call6_btn_grp_pane_ParamLimits

0x938e,	// (0x000383ea) call6_btn_grp_pane

0x93a8,	// (0x00038404) call6_pane_g1_ParamLimits

0x93a8,	// (0x00038404) call6_pane_g1

0x93be,	// (0x0003841a) popup_call6_1st_window_ParamLimits

0x93be,	// (0x0003841a) popup_call6_1st_window

0x93cf,	// (0x0003842b) popup_call6_2nd_window_ParamLimits

0x93cf,	// (0x0003842b) popup_call6_2nd_window

0x93e0,	// (0x0003843c) cell_call6_btn_pane_ParamLimits

0x93e0,	// (0x0003843c) cell_call6_btn_pane

0xae96,	// (0x00039ef2) bg_popup_call2_in_pane_cp03

0xee20,	// (0x0003de7c) popup_call6_1st_window_g1

0xee28,	// (0x0003de84) popup_call6_1st_window_g2

0xee30,	// (0x0003de8c) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003ef1d) popup_call6_1st_window_g

0xee38,	// (0x0003de94) popup_call6_1st_window_t1

0xee47,	// (0x0003dea3) popup_call6_1st_window_t2

0xee57,	// (0x0003deb3) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003ef24) popup_call6_1st_window_t

0xae96,	// (0x00039ef2) bg_popup_call2_in_pane_cp04

0xee20,	// (0x0003de7c) popup_call6_2nd_window_g1

0xee28,	// (0x0003de84) popup_call6_2nd_window_g2

0xee30,	// (0x0003de8c) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003ef1d) popup_call6_2nd_window_g

0xee38,	// (0x0003de94) popup_call6_2nd_window_t1

0x9bfe,	// (0x00038c5a) bg_button_pane_cp15

0xee67,	// (0x0003dec3) cell_call6_btn_pane_g1

0xee70,	// (0x0003decc) cell_call6_btn_pane_t1

0x93f4,	// (0x00038450) listscroll_wgtman_pane_ParamLimits

0x93f4,	// (0x00038450) listscroll_wgtman_pane

0x9415,	// (0x00038471) wgtman_btn_pane_ParamLimits

0x9415,	// (0x00038471) wgtman_btn_pane

0xad5c,	// (0x00039db8) aid_scroll_copy1

0xee7f,	// (0x0003dedb) list_wgtman_pane

0x9458,	// (0x000384b4) wgtman_btn_pane_g1_ParamLimits

0x9458,	// (0x000384b4) wgtman_btn_pane_g1

0x9484,	// (0x000384e0) wgtman_btn_pane_t1_ParamLimits

0x9484,	// (0x000384e0) wgtman_btn_pane_t1

0xee89,	// (0x0003dee5) wgtman_btn_pane_t2_ParamLimits

0xee89,	// (0x0003dee5) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003ef2b) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003ef2b) wgtman_btn_pane_t

0x94c1,	// (0x0003851d) listrow_wgtman_pane_ParamLimits

0x94c1,	// (0x0003851d) listrow_wgtman_pane

0x94d3,	// (0x0003852f) listrow_wgtman_pane_g1

0x94e0,	// (0x0003853c) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003ef30) listrow_wgtman_pane_g

0x94fe,	// (0x0003855a) listrow_wgtman_pane_t1

0x9516,	// (0x00038572) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003ef35) listrow_wgtman_pane_t

0x953c,	// (0x00038598) wait_bar_pane_cp09

0xeea0,	// (0x0003defc) main_calllock_btn_pane

0xeeaa,	// (0x0003df06) main_calllock_pane_g1

0x9bfe,	// (0x00038c5a) bg_button_pane_cp17

0xeeb6,	// (0x0003df12) main_calllock_btn_pane_g1

0xeebf,	// (0x0003df1b) main_calllock_btn_pane_t1

0x9bfe,	// (0x00038c5a) main_dialer3_pane

0x9bfe,	// (0x00038c5a) main_fmrd2_pane

0xc77c,	// (0x0003b7d8) main_fs_bigclock_unlock_btn_pane_g1

0xeed6,	// (0x0003df32) main_fs_bigclock_unlock_btn_pane_t1

0x954e,	// (0x000385aa) area_fmrd2_info_pane_ParamLimits

0x954e,	// (0x000385aa) area_fmrd2_info_pane

0x955d,	// (0x000385b9) area_fmrd2_visual_pane_ParamLimits

0x955d,	// (0x000385b9) area_fmrd2_visual_pane

0x956b,	// (0x000385c7) fmrd2_indi_pane_ParamLimits

0x956b,	// (0x000385c7) fmrd2_indi_pane

0x9578,	// (0x000385d4) area_fmrd2_visual_pane_g1

0x9580,	// (0x000385dc) area_fmrd2_visual_pane_t1

0x9590,	// (0x000385ec) area_fmrd2_visual_pane_t2

0x95a0,	// (0x000385fc) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003ef3f) area_fmrd2_visual_pane_t

0x95b0,	// (0x0003860c) area_fmrd2_info_pane_g1

0x95b8,	// (0x00038614) area_fmrd2_info_pane_t1

0x95c8,	// (0x00038624) area_fmrd2_info_pane_t2

0x95d8,	// (0x00038634) area_fmrd2_info_pane_t3

0x95e8,	// (0x00038644) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003ef46) area_fmrd2_info_pane_t

0x95f8,	// (0x00038654) fmrd2_indi_pane_t1

0x9608,	// (0x00038664) fmrd2_indi_pane_t2

0x9618,	// (0x00038674) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003ef4f) fmrd2_indi_pane_t

0xe0a6,	// (0x0003d102) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0a6,	// (0x0003d102) list_single_fs_bigclock_indicator_pane_g5

0xe156,	// (0x0003d1b2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe156,	// (0x0003d1b2) list_single_fs_bigclock_indicator_pane_t5

0x8ccf,	// (0x00037d2b) aid_cell_bcale_month_pane_ParamLimits

0x8ccf,	// (0x00037d2b) aid_cell_bcale_month_pane

0x8ced,	// (0x00037d49) bcale_month_pane_ParamLimits

0x8ced,	// (0x00037d49) bcale_month_pane

0x8d0f,	// (0x00037d6b) bcale_preview_pane_ParamLimits

0x8d0f,	// (0x00037d6b) bcale_preview_pane

0xec46,	// (0x0003dca2) list_single_fs_bigclock_pane_t1_ParamLimits

0xec65,	// (0x0003dcc1) list_single_fs_bigclock_pane_t2_ParamLimits

0xec65,	// (0x0003dcc1) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003eed1) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003eed1) list_single_fs_bigclock_pane_t

0xeece,	// (0x0003df2a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003ef3a) main_fs_bigclock_unlock_btn_pane_g

0x9628,	// (0x00038684) aid_dia3_key_size_ParamLimits

0x9628,	// (0x00038684) aid_dia3_key_size

0x9637,	// (0x00038693) aid_dia3_listrow_size_ParamLimits

0x9637,	// (0x00038693) aid_dia3_listrow_size

0x964c,	// (0x000386a8) dia3_keypad_fun_pane_ParamLimits

0x964c,	// (0x000386a8) dia3_keypad_fun_pane

0x9668,	// (0x000386c4) dia3_keypad_num_pane_ParamLimits

0x9668,	// (0x000386c4) dia3_keypad_num_pane

0x9681,	// (0x000386dd) dia3_listscroll_pane_ParamLimits

0x9681,	// (0x000386dd) dia3_listscroll_pane

0x9694,	// (0x000386f0) dia3_numentry_pane_ParamLimits

0x9694,	// (0x000386f0) dia3_numentry_pane

0xeee4,	// (0x0003df40) dia3_list_pane

0xeeef,	// (0x0003df4b) scroll_pane_cp12

0x9bfe,	// (0x00038c5a) bg_dia3_numentry_pane

0x96a8,	// (0x00038704) dia3_numentry_pane_t1

0x96b7,	// (0x00038713) cell_dia3_key_num_pane

0x96bf,	// (0x0003871b) cell_dia3_key0_fun_pane_ParamLimits

0x96bf,	// (0x0003871b) cell_dia3_key0_fun_pane

0x96d3,	// (0x0003872f) cell_dia3_key1_fun_pane_ParamLimits

0x96d3,	// (0x0003872f) cell_dia3_key1_fun_pane

0x96eb,	// (0x00038747) dia3_listrow_pane

0xdda4,	// (0x0003ce00) bg_dia3_numentry_pane_g1

0x9bfe,	// (0x00038c5a) bg_button_pane_cp21

0xeefa,	// (0x0003df56) cell_dia3_key_num_pane_t1

0xef08,	// (0x0003df64) cell_dia3_key_num_pane_t2

0xef17,	// (0x0003df73) cell_dia3_key_num_pane_t3

0xef26,	// (0x0003df82) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003ef56) cell_dia3_key_num_pane_t

0x9bfe,	// (0x00038c5a) bg_button_pane_cp19

0x96fd,	// (0x00038759) cell_dia3_key0_fun_pane_g1

0x9bfe,	// (0x00038c5a) bg_button_pane_cp20

0x9705,	// (0x00038761) cell_dia3_key1_fun_pane_g1

0x970d,	// (0x00038769) area_left_week_number_pane

0x971b,	// (0x00038777) area_top_day_name_pane

0x972e,	// (0x0003878a) frame_month_view_pane

0xef35,	// (0x0003df91) grid_month_view_pane

0x9743,	// (0x0003879f) cell_top_day_name_pane_ParamLimits

0x9743,	// (0x0003879f) cell_top_day_name_pane

0x9772,	// (0x000387ce) cell_area_left_week_number_pane_ParamLimits

0x9772,	// (0x000387ce) cell_area_left_week_number_pane

0x9786,	// (0x000387e2) cell_month_view_pane_ParamLimits

0x9786,	// (0x000387e2) cell_month_view_pane

0xef43,	// (0x0003df9f) frm_month_g1

0x97b5,	// (0x00038811) frm_month_g2

0x97c8,	// (0x00038824) frm_month_g3

0x97db,	// (0x00038837) frm_month_g4

0x97ee,	// (0x0003884a) frm_month_g5

0x9801,	// (0x0003885d) frm_month_g6

0x9814,	// (0x00038870) frm_month_g7

0xef50,	// (0x0003dfac) frm_month_g8

0x9829,	// (0x00038885) frm_month_g9

0x9839,	// (0x00038895) frm_month_g10

0x9849,	// (0x000388a5) frm_month_g11

0x9859,	// (0x000388b5) frm_month_g12

0x986b,	// (0x000388c7) frm_month_g13

0x987f,	// (0x000388db) frm_month_g14

0x9893,	// (0x000388ef) frm_month_g15

0x98a7,	// (0x00038903) frm_month_g16

0x000f,

0xff03,	// (0x0003ef5f) frm_month_g

0xef5d,	// (0x0003dfb9) cell_top_day_name_pane_t1

0x98bb,	// (0x00038917) cell_area_left_week_number_pane_g1

0x98c7,	// (0x00038923) cell_area_left_week_number_pane_t1

0xc9ac,	// (0x0003ba08) cell_month_view_pane_g1

0x98da,	// (0x00038936) cell_month_view_pane_t1

0x9bfe,	// (0x00038c5a) main_fps_pane

0xe379,	// (0x0003d3d5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe379,	// (0x0003d3d5) cmail_ddmenu_btn02_pane_cp1

0xe395,	// (0x0003d3f1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe395,	// (0x0003d3f1) cmail_ddmenu_btn02_pane_cp2

0x8fe0,	// (0x0003803c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fe0,	// (0x0003803c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003ee84) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003ee84) cmail_ddmenu_btn02_pane_g

0x9001,	// (0x0003805d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9001,	// (0x0003805d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003ee89) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003ee89) cmail_ddmenu_btn02_pane_t

0x98ed,	// (0x00038949) fps_text_pane_ParamLimits

0x98ed,	// (0x00038949) fps_text_pane

0x9904,	// (0x00038960) main_fps_pane_g1_ParamLimits

0x9904,	// (0x00038960) main_fps_pane_g1

0x991c,	// (0x00038978) wait_bar_pane_cp010_ParamLimits

0x991c,	// (0x00038978) wait_bar_pane_cp010

0x992f,	// (0x0003898b) fps_text_pane_t1_ParamLimits

0x992f,	// (0x0003898b) fps_text_pane_t1

0xe825,	// (0x0003d881) cam4_image_uncrop_pane_g1

0xe82e,	// (0x0003d88a) cam4_image_uncrop_pane_g2

0x6554,	// (0x000355b0) cam4_image_uncrop_pane_g3

0x655d,	// (0x000355b9) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003e94a) cam4_image_uncrop_pane_g

0x96eb,	// (0x00038747) dia3_listrow_pane_ParamLimits

0x9bfe,	// (0x00038c5a) main_phob2_pane

0x8a9a,	// (0x00037af6) cell_tport_appsw_pane_cp02_ParamLimits

0x8a9a,	// (0x00037af6) cell_tport_appsw_pane_cp02

0x8aae,	// (0x00037b0a) cell_tport_appsw_pane_cp03_ParamLimits

0x8aae,	// (0x00037b0a) cell_tport_appsw_pane_cp03

0x9bfe,	// (0x00038c5a) phob2_contact_card_pane

0x9bfe,	// (0x00038c5a) phob2_listscroll_pane

0xef70,	// (0x0003dfcc) phob2_list_pane

0xef78,	// (0x0003dfd4) scroll_pane_cp034

0x9947,	// (0x000389a3) phob2_cc_data_pane_ParamLimits

0x9947,	// (0x000389a3) phob2_cc_data_pane

0x9968,	// (0x000389c4) phob2_cc_listscroll_pane_ParamLimits

0x9968,	// (0x000389c4) phob2_cc_listscroll_pane

0x998a,	// (0x000389e6) list_double_large_graphic_phob2_pane_ParamLimits

0x998a,	// (0x000389e6) list_double_large_graphic_phob2_pane

0x999e,	// (0x000389fa) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x999e,	// (0x000389fa) list_double_large_graphic_phob2_pane_g1

0x99b4,	// (0x00038a10) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99b4,	// (0x00038a10) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003ef80) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003ef80) list_double_large_graphic_phob2_pane_g

0x99c0,	// (0x00038a1c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99c0,	// (0x00038a1c) list_double_large_graphic_phob2_pane_t1

0x99d5,	// (0x00038a31) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99d5,	// (0x00038a31) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003ef85) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003ef85) list_double_large_graphic_phob2_pane_t

0x9bfe,	// (0x00038c5a) list_highlight_pane_cp024

0x99e7,	// (0x00038a43) phob2_cc_button_pane

0x99ef,	// (0x00038a4b) phob2_cc_data_pane_g1_ParamLimits

0x99ef,	// (0x00038a4b) phob2_cc_data_pane_g1

0x9a05,	// (0x00038a61) phob2_cc_data_pane_g2_ParamLimits

0x9a05,	// (0x00038a61) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003ef8a) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003ef8a) phob2_cc_data_pane_g

0x9a15,	// (0x00038a71) phob2_cc_data_pane_t1_ParamLimits

0x9a15,	// (0x00038a71) phob2_cc_data_pane_t1

0x9a2d,	// (0x00038a89) phob2_cc_data_pane_t2_ParamLimits

0x9a2d,	// (0x00038a89) phob2_cc_data_pane_t2

0x9a47,	// (0x00038aa3) phob2_cc_data_pane_t3_ParamLimits

0x9a47,	// (0x00038aa3) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003ef8f) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003ef8f) phob2_cc_data_pane_t

0xef80,	// (0x0003dfdc) phob2_cc_list_pane_ParamLimits

0xef80,	// (0x0003dfdc) phob2_cc_list_pane

0xd534,	// (0x0003c590) scroll_pane_cp035_ParamLimits

0xd534,	// (0x0003c590) scroll_pane_cp035

0x9c5f,	// (0x00038cbb) bg_button_pane_cp033

0xef8c,	// (0x0003dfe8) phob2_cc_button_pane_g1

0xef98,	// (0x0003dff4) phob2_cc_button_pane_t1

0xefad,	// (0x0003e009) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003ef96) phob2_cc_button_pane_t

0x9a61,	// (0x00038abd) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a61,	// (0x00038abd) list_double_large_graphic_phob2_cc_pane

0x9a75,	// (0x00038ad1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a75,	// (0x00038ad1) list_double_large_graphic_phob2_cc_pane_g1

0x9a81,	// (0x00038add) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a81,	// (0x00038add) list_double_large_graphic_phob2_cc_pane_g2

0x9a8d,	// (0x00038ae9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a8d,	// (0x00038ae9) list_double_large_graphic_phob2_cc_pane_g3

0x9a99,	// (0x00038af5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a99,	// (0x00038af5) list_double_large_graphic_phob2_cc_pane_g4

0x9aa5,	// (0x00038b01) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9aa5,	// (0x00038b01) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003ef9b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003ef9b) list_double_large_graphic_phob2_cc_pane_g

0x9ab1,	// (0x00038b0d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ab1,	// (0x00038b0d) list_double_large_graphic_phob2_cc_pane_t1

0x9ada,	// (0x00038b36) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ada,	// (0x00038b36) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003efa6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003efa6) list_double_large_graphic_phob2_cc_pane_t

0xefbf,	// (0x0003e01b) list_highlight_pane_cp025_ParamLimits

0xefbf,	// (0x0003e01b) list_highlight_pane_cp025

0x9c5f,	// (0x00038cbb) bg_button_pane_cp033_ParamLimits

0xef8c,	// (0x0003dfe8) phob2_cc_button_pane_g1_ParamLimits

0xef98,	// (0x0003dff4) phob2_cc_button_pane_t1_ParamLimits

0xefad,	// (0x0003e009) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003ef96) phob2_cc_button_pane_t_ParamLimits

0x1109,	// (0x00030165) popup_wgtman_window

0xd2f4,	// (0x0003c350) scroll_pane_cp038

0x943a,	// (0x00038496) wgtman_btn_pane_cp_01_ParamLimits

0x943a,	// (0x00038496) wgtman_btn_pane_cp_01

0xefcd,	// (0x0003e029) wgtman_content_pane

0xefd6,	// (0x0003e032) wgtman_heading_pane

0x9bfe,	// (0x00038c5a) bg_heading_pane_cp02

0xefdf,	// (0x0003e03b) wgtman_heading_pane_g1

0xefe7,	// (0x0003e043) wgtman_heading_pane_t1

0xeff5,	// (0x0003e051) scroll_pane_cp036

0xeffd,	// (0x0003e059) wgtman_list_pane

0xf005,	// (0x0003e061) wgtman_list_pane_t1_ParamLimits

0xf005,	// (0x0003e061) wgtman_list_pane_t1

0x653e,	// (0x0003559a) cam4_grid_pane

0x6f2c,	// (0x00035f88) bg_button_pane_cp015_ParamLimits

0x6f40,	// (0x00035f9c) bg_button_pane_cp016_ParamLimits

0x6f53,	// (0x00035faf) bg_button_pane_cp017_ParamLimits

0x6fab,	// (0x00036007) popup_vitu2_query_window_g3_ParamLimits

0x6fab,	// (0x00036007) popup_vitu2_query_window_g3

0x7068,	// (0x000360c4) popup_vitu2_query_window_t6_ParamLimits

0x7068,	// (0x000360c4) popup_vitu2_query_window_t6

0x7093,	// (0x000360ef) popup_vitu2_query_window_t7_ParamLimits

0x7093,	// (0x000360ef) popup_vitu2_query_window_t7

0xe825,	// (0x0003d881) cam4_grid_pane_g1

0xe82e,	// (0x0003d88a) cam4_grid_pane_g2

0xf01f,	// (0x0003e07b) cam4_grid_pane_g3

0xf028,	// (0x0003e084) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003efab) cam4_grid_pane_g

0x2061,	// (0x000310bd) aid_placing_vt_slider_lsc_ParamLimits

0x234e,	// (0x000313aa) vidtel_button_pane_ParamLimits

0x234e,	// (0x000313aa) vidtel_button_pane

0xf033,	// (0x0003e08f) bg_button_pane_cp034

0x9b03,	// (0x00038b5f) vidtel_button_pane_g1

0xf03d,	// (0x0003e099) vidtel_button_pane_t1

0xd3f8,	// (0x0003c454) aid_size_vtel_slider_touch

0xd534,	// (0x0003c590) scroll_pane_cp039

0xdde2,	// (0x0003ce3e) ncim_query_button_pane_cp01_ParamLimits

0xde01,	// (0x0003ce5d) ncimui_query_pane_g1_ParamLimits

0x9c5f,	// (0x00038cbb) input_focus_pane_cp012_ParamLimits

0xde26,	// (0x0003ce82) ncim_query_entry_pane_t1_ParamLimits

0xd534,	// (0x0003c590) scroll_pane_cp039_ParamLimits

0x3686,	// (0x000326e2) navi_pane_bcale_mc_g1

0x368e,	// (0x000326ea) navi_pane_bcale_mc_t1

0xe3d2,	// (0x0003d42e) main_sp_fs_email_pane_g1

0xe3de,	// (0x0003d43a) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003ed41) main_sp_fs_email_pane_g

0xe8d9,	// (0x0003d935) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8d9,	// (0x0003d935) list_single_cale_mrui_row_pane_g3

0x9021,	// (0x0003807d) list_single_recal_day_pane_g5_event_pane

0xeab7,	// (0x0003db13) list_single_recal_day_pane_g7

0xf04b,	// (0x0003e0a7) list_recal_day_event_pane_cp01

0xf054,	// (0x0003e0b0) list_recal_vselct_arw_lo_pane_cp01

0xf05c,	// (0x0003e0b8) list_recal_vselct_arw_up_pane_cp01

0xf064,	// (0x0003e0c0) list_recal_vselct_pane_cp01

0xd434,	// (0x0003c490) list_recal_day_event_pane_cp01_g1

0xf06e,	// (0x0003e0ca) list_recal_day_event_pane_cp01_t1

0xeabf,	// (0x0003db1b) list_single_recal_day_pane_t1_ParamLimits

0xead1,	// (0x0003db2d) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003ee99) list_single_recal_day_pane_t_ParamLimits

0xa2db,	// (0x00039337) bg_notes_pane_ParamLimits

0xa37e,	// (0x000393da) list_notes_pane_ParamLimits

0x13c7,	// (0x00030423) scroll_pane_cp06_ParamLimits

0xa3a0,	// (0x000393fc) main_notes_pane_ParamLimits

0x9bfe,	// (0x00038c5a) main_welc_pane

0x9b0b,	// (0x00038b67) main_welc_body_pane_ParamLimits

0x9b0b,	// (0x00038b67) main_welc_body_pane

0x9b2a,	// (0x00038b86) main_welc_opti_pane_ParamLimits

0x9b2a,	// (0x00038b86) main_welc_opti_pane

0x9b73,	// (0x00038bcf) main_welc_pane_t1_ParamLimits

0x9b73,	// (0x00038bcf) main_welc_pane_t1

0x9b95,	// (0x00038bf1) main_welc_body_row_pane_ParamLimits

0x9b95,	// (0x00038bf1) main_welc_body_row_pane

0x9ba9,	// (0x00038c05) main_welc_opti_row_pane_ParamLimits

0x9ba9,	// (0x00038c05) main_welc_opti_row_pane

0xf07c,	// (0x0003e0d8) main_welc_opti_row_pane_g1

0xf084,	// (0x0003e0e0) main_welc_opti_row_pane_t1

0xf093,	// (0x0003e0ef) main_welc_body_row_pane_t1

0xed4d,	// (0x0003dda9) popup_notif_wgt_heading_pane

0xed67,	// (0x0003ddc3) aid_size_list_notif_wgt_del_ParamLimits

0xed74,	// (0x0003ddd0) list_notif_wgt_row_pane_g1_ParamLimits

0xed80,	// (0x0003dddc) list_notif_wgt_row_pane_g2_ParamLimits

0xed94,	// (0x0003ddf0) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003ef00) list_notif_wgt_row_pane_g_ParamLimits

0xeda1,	// (0x0003ddfd) list_notif_wgt_row_pane_t1_ParamLimits

0xedb7,	// (0x0003de13) list_notif_wgt_row_pane_t2_ParamLimits

0xedc9,	// (0x0003de25) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003ef07) list_notif_wgt_row_pane_t_ParamLimits

0x94d3,	// (0x0003852f) listrow_wgtman_pane_g1_ParamLimits

0x94e0,	// (0x0003853c) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003ef30) listrow_wgtman_pane_g_ParamLimits

0x94fe,	// (0x0003855a) listrow_wgtman_pane_t1_ParamLimits

0x9516,	// (0x00038572) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003ef35) listrow_wgtman_pane_t_ParamLimits

0x953c,	// (0x00038598) wait_bar_pane_cp09_ParamLimits

0x9bfe,	// (0x00038c5a) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0003e0fe) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0003e106) popup_notif_wgt_heading_pane_t1

0x9bfe,	// (0x00038c5a) main_vids_pane

0x9bfe,	// (0x00038c5a) vids_listscroll_pane

0x9bb9,	// (0x00038c15) scroll_pane_cp040

0x9bfe,	// (0x00038c5a) vids_list_pane

0x9bc4,	// (0x00038c20) vids_list_double_pane_ParamLimits

0x9bc4,	// (0x00038c20) vids_list_double_pane

0x9bd5,	// (0x00038c31) vids_list_double_pane_g1

0x9bde,	// (0x00038c3a) vids_list_double_pane_t1

0x9bee,	// (0x00038c4a) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003efb9) vids_list_double_pane_t

0x9c5f,	// (0x00038cbb) main_ncimui_pane_ParamLimits

0x7c94,	// (0x00036cf0) main_ncimui_pane_g1_ParamLimits

0x7ca0,	// (0x00036cfc) main_ncimui_pane_g2_ParamLimits

0x7ca0,	// (0x00036cfc) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003ec46) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003ec46) main_ncimui_pane_g

0x9b49,	// (0x00038ba5) main_welc_pane_g1_ParamLimits

0x9b49,	// (0x00038ba5) main_welc_pane_g1

0x9b5e,	// (0x00038bba) main_welc_pane_g2_ParamLimits

0x9b5e,	// (0x00038bba) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003efb4) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003efb4) main_welc_pane_g

0xa2db,	// (0x00039337) listscroll_mce_pane_ParamLimits

0x3766,	// (0x000327c2) wait_bar_pane_cp10

0xc317,	// (0x0003b373) main_cale_day_pane_ParamLimits

0xc317,	// (0x0003b373) main_cale_week_pane_ParamLimits

0xa2db,	// (0x00039337) main_messa_pane_ParamLimits

0x5a98,	// (0x00034af4) main_clock2_btn_pane_ParamLimits

0x5a98,	// (0x00034af4) main_clock2_btn_pane

0xcb40,	// (0x0003bb9c) main_clock2_btn_pane_cp01_ParamLimits

0xcb40,	// (0x0003bb9c) main_clock2_btn_pane_cp01

0xe85c,	// (0x0003d8b8) list_cale_mrui_pane_ParamLimits

0xee0d,	// (0x0003de69) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003ef0e) main_cf0_pane_g

0x970d,	// (0x00038769) area_left_week_number_pane_ParamLimits

0x971b,	// (0x00038777) area_top_day_name_pane_ParamLimits

0x972e,	// (0x0003878a) frame_month_view_pane_ParamLimits

0xef35,	// (0x0003df91) grid_month_view_pane_ParamLimits

0xef43,	// (0x0003df9f) frm_month_g1_ParamLimits

0x97b5,	// (0x00038811) frm_month_g2_ParamLimits

0x97c8,	// (0x00038824) frm_month_g3_ParamLimits

0x97db,	// (0x00038837) frm_month_g4_ParamLimits

0x97ee,	// (0x0003884a) frm_month_g5_ParamLimits

0x9801,	// (0x0003885d) frm_month_g6_ParamLimits

0x9814,	// (0x00038870) frm_month_g7_ParamLimits

0xef50,	// (0x0003dfac) frm_month_g8_ParamLimits

0x9829,	// (0x00038885) frm_month_g9_ParamLimits

0x9839,	// (0x00038895) frm_month_g10_ParamLimits

0x9849,	// (0x000388a5) frm_month_g11_ParamLimits

0x9859,	// (0x000388b5) frm_month_g12_ParamLimits

0x986b,	// (0x000388c7) frm_month_g13_ParamLimits

0x987f,	// (0x000388db) frm_month_g14_ParamLimits

0x9893,	// (0x000388ef) frm_month_g15_ParamLimits

0x98a7,	// (0x00038903) frm_month_g16_ParamLimits

0xff03,	// (0x0003ef5f) frm_month_g_ParamLimits

0xef5d,	// (0x0003dfb9) cell_top_day_name_pane_t1_ParamLimits

0x98bb,	// (0x00038917) cell_area_left_week_number_pane_g1_ParamLimits

0x98c7,	// (0x00038923) cell_area_left_week_number_pane_t1_ParamLimits

0xc9ac,	// (0x0003ba08) cell_month_view_pane_g1_ParamLimits

0x98da,	// (0x00038936) cell_month_view_pane_t1_ParamLimits

0xa2d3,	// (0x0003932f) main_clock2_btn_pane_g1

0xf0b8,	// (0x0003e114) main_clock2_btn_pane_t1

0x9c5f,	// (0x00038cbb) listscroll_cmail_pane_ParamLimits

0xe3d2,	// (0x0003d42e) main_sp_fs_email_pane_g1_ParamLimits

0xe3de,	// (0x0003d43a) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003ed41) main_sp_fs_email_pane_g_ParamLimits

0xea26,	// (0x0003da82) list_recal_day_pane_ParamLimits

0xea37,	// (0x0003da93) mian_recal_day_pane_t1

0x8775,	// (0x000377d1) list_single_dyc_row_text_pane_t4_ParamLimits

0x8775,	// (0x000377d1) list_single_dyc_row_text_pane_t4

0x87be,	// (0x0003781a) list_single_dyc_row_text_pane_t5_ParamLimits

0x87be,	// (0x0003781a) list_single_dyc_row_text_pane_t5

0xe4b6,	// (0x0003d512) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4b6,	// (0x0003d512) list_single_dyc_row_text_pane_t6

0xa95c,	// (0x000399b8) aid_mgn_list_cale_time_pane

0x9c5f,	// (0x00038cbb) main_gallery2_pane_ParamLimits

0xcb54,	// (0x0003bbb0) main_clock2_pane_cp01_t1

0xcb64,	// (0x0003bbc0) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0003e820) main_clock2_pane_cp01_t

0x1817,	// (0x00030873) cale_week_scroll_pane_g16_ParamLimits

0x1817,	// (0x00030873) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal

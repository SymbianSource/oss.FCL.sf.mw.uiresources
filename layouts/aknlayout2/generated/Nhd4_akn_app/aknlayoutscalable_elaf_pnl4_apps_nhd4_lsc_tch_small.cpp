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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004c5d3 };

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
0x0e8e,	// (0x0004d461) Screen

0x0e9a,	// (0x0004d46d) application_window

0x0ee6,	// (0x0004d4b9) area_bottom_pane_ParamLimits

0x0ee6,	// (0x0004d4b9) area_bottom_pane

0x0f1f,	// (0x0004d4f2) area_top_pane_ParamLimits

0x0f1f,	// (0x0004d4f2) area_top_pane

0x9ab5,	// (0x00056088) call_video_uplink_pane_ParamLimits

0x9ab5,	// (0x00056088) call_video_uplink_pane

0x0fad,	// (0x0004d580) main_pane_ParamLimits

0x0fad,	// (0x0004d580) main_pane

0xcbde,	// (0x000591b1) context_pane

0x459b,	// (0x00050b6e) navi_pane

0x45c3,	// (0x00050b96) popup_cale_events_window_ParamLimits

0x45c3,	// (0x00050b96) popup_cale_events_window

0xcbf1,	// (0x000591c4) popup_mup_playback_window

0x45db,	// (0x00050bae) signal_pane

0xacd6,	// (0x000572a9) main_browser_pane

0xb7c0,	// (0x00057d93) main_burst_pane

0x430b,	// (0x000508de) main_calc_pane

0xcbc4,	// (0x00059197) main_cale_day_pane

0x15df,	// (0x0004dbb2) main_cale_month_pane

0xcbc4,	// (0x00059197) main_cale_week_pane

0xb7c0,	// (0x00057d93) main_call_pane

0xa997,	// (0x00056f6a) main_call_poc_pane

0xb7c0,	// (0x00057d93) main_camera_pane

0xb7c0,	// (0x00057d93) main_chi_dic_pane

0xb645,	// (0x00057c18) main_clock_pane

0xa997,	// (0x00056f6a) main_fmradio_pane

0xb7c0,	// (0x00057d93) main_graph_messa_pane

0xa997,	// (0x00056f6a) main_help_pane

0xacd6,	// (0x000572a9) main_im_pane

0xabf2,	// (0x000571c5) main_image_pane_ParamLimits

0xabf2,	// (0x000571c5) main_image_pane

0xa997,	// (0x00056f6a) main_location2_pane

0xb7c0,	// (0x00057d93) main_location_pane

0xabf2,	// (0x000571c5) main_messa_pane

0xa997,	// (0x00056f6a) main_mp2_pane

0xb7c0,	// (0x00057d93) main_mp_pane

0xa997,	// (0x00056f6a) main_msg_pane

0xa997,	// (0x00056f6a) main_mup_eq_pane

0xa997,	// (0x00056f6a) main_mup_pane

0xacd6,	// (0x000572a9) main_notes_pane

0xa997,	// (0x00056f6a) main_pec_pane

0xa997,	// (0x00056f6a) main_phob_pane

0xa997,	// (0x00056f6a) main_pinb_pane

0xa997,	// (0x00056f6a) main_postcard_pane

0xa997,	// (0x00056f6a) main_qdial_pane

0xb7c0,	// (0x00057d93) main_skin_pane

0xa997,	// (0x00056f6a) main_smil2_pane

0xb7c0,	// (0x00057d93) main_smil_pane

0xb7c0,	// (0x00057d93) main_video_pane

0xb7c0,	// (0x00057d93) main_video_tele_pane

0xabf2,	// (0x000571c5) main_viewer_pane_ParamLimits

0xabf2,	// (0x000571c5) main_viewer_pane

0xb7c0,	// (0x00057d93) main_vorec_pane

0x435f,	// (0x00050932) popup_blid_sat_info_window_ParamLimits

0x435f,	// (0x00050932) popup_blid_sat_info_window

0x43b7,	// (0x0005098a) popup_dyc_status_message_window_ParamLimits

0x43b7,	// (0x0005098a) popup_dyc_status_message_window

0x43cf,	// (0x000509a2) popup_grid_large_graphic_window_ParamLimits

0x43cf,	// (0x000509a2) popup_grid_large_graphic_window

0x4485,	// (0x00050a58) popup_loc_request_window_ParamLimits

0x4485,	// (0x00050a58) popup_loc_request_window

0x4573,	// (0x00050b46) popup_wml_address_window_ParamLimits

0x4573,	// (0x00050b46) popup_wml_address_window

0x4145,	// (0x00050718) call_muted_g1

0x3df8,	// (0x000503cb) popup_call_audio_conf_window_ParamLimits

0x3df8,	// (0x000503cb) popup_call_audio_conf_window

0x4159,	// (0x0005072c) popup_call_audio_first_window_ParamLimits

0x4159,	// (0x0005072c) popup_call_audio_first_window

0x41cf,	// (0x000507a2) popup_call_audio_in_window_ParamLimits

0x41cf,	// (0x000507a2) popup_call_audio_in_window

0x420b,	// (0x000507de) popup_call_audio_out_window_ParamLimits

0x420b,	// (0x000507de) popup_call_audio_out_window

0x4245,	// (0x00050818) popup_call_audio_second_window_ParamLimits

0x4245,	// (0x00050818) popup_call_audio_second_window

0x429b,	// (0x0005086e) popup_call_audio_wait_window_ParamLimits

0x429b,	// (0x0005086e) popup_call_audio_wait_window

0x42d0,	// (0x000508a3) popup_number_entry_window_ParamLimits

0x42d0,	// (0x000508a3) popup_number_entry_window

0x9ad3,	// (0x000560a6) bg_popup_call_pane_cp05_ParamLimits

0x9ad3,	// (0x000560a6) bg_popup_call_pane_cp05

0x9af3,	// (0x000560c6) popup_number_entry_window_t1

0x9b06,	// (0x000560d9) popup_number_entry_window_t2

0x9b18,	// (0x000560eb) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0005b6a6) popup_number_entry_window_t

0x9b2a,	// (0x000560fd) text_title_cp2

0x9b3d,	// (0x00056110) bg_popup_call_pane_cp_ParamLimits

0x9b3d,	// (0x00056110) bg_popup_call_pane_cp

0x9b4b,	// (0x0005611e) call_thumbnail_pane

0x9b53,	// (0x00056126) popup_call_audio_in_window_g1_ParamLimits

0x9b53,	// (0x00056126) popup_call_audio_in_window_g1

0x9b5f,	// (0x00056132) popup_call_audio_in_window_g2_ParamLimits

0x9b5f,	// (0x00056132) popup_call_audio_in_window_g2

0x9b6b,	// (0x0005613e) popup_call_audio_in_window_g3_ParamLimits

0x9b6b,	// (0x0005613e) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0005b6af) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0005b6af) popup_call_audio_in_window_g

0x9b77,	// (0x0005614a) popup_call_audio_in_window_t1_ParamLimits

0x9b77,	// (0x0005614a) popup_call_audio_in_window_t1

0x9b93,	// (0x00056166) popup_call_audio_in_window_t2_ParamLimits

0x9b93,	// (0x00056166) popup_call_audio_in_window_t2

0x9baf,	// (0x00056182) popup_call_audio_in_window_t3_ParamLimits

0x9baf,	// (0x00056182) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0005b6b6) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0005b6b6) popup_call_audio_in_window_t

0x9b3d,	// (0x00056110) bg_popup_call_pane_cp01_ParamLimits

0x9b3d,	// (0x00056110) bg_popup_call_pane_cp01

0x9b4b,	// (0x0005611e) call_thumbnail_pane_cp02

0x9bc2,	// (0x00056195) call_type_pane_cp022

0x9bca,	// (0x0005619d) popup_call_audio_out_window_g1_ParamLimits

0x9bca,	// (0x0005619d) popup_call_audio_out_window_g1

0x9bdc,	// (0x000561af) popup_call_audio_out_window_g2_ParamLimits

0x9bdc,	// (0x000561af) popup_call_audio_out_window_g2

0x9be8,	// (0x000561bb) popup_call_audio_out_window_g3_ParamLimits

0x9be8,	// (0x000561bb) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0005b6bd) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0005b6bd) popup_call_audio_out_window_g

0x9bfa,	// (0x000561cd) popup_call_audio_out_window_t1_ParamLimits

0x9bfa,	// (0x000561cd) popup_call_audio_out_window_t1

0x9c12,	// (0x000561e5) popup_call_audio_out_window_t2_ParamLimits

0x9c12,	// (0x000561e5) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0005b6c4) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0005b6c4) popup_call_audio_out_window_t

0x9c27,	// (0x000561fa) bg_popup_call_pane_ParamLimits

0x9c27,	// (0x000561fa) bg_popup_call_pane

0x116a,	// (0x0004d73d) call_thumbnail_pane_cp_ParamLimits

0x116a,	// (0x0004d73d) call_thumbnail_pane_cp

0xa75c,	// (0x00056d2f) call_type_pane_cp01_ParamLimits

0xa75c,	// (0x00056d2f) call_type_pane_cp01

0xa7a0,	// (0x00056d73) popup_call_audio_first_window_g1_ParamLimits

0xa7a0,	// (0x00056d73) popup_call_audio_first_window_g1

0xa7ec,	// (0x00056dbf) popup_call_audio_first_window_g2_ParamLimits

0xa7ec,	// (0x00056dbf) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0005b6c9) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0005b6c9) popup_call_audio_first_window_g

0xa830,	// (0x00056e03) popup_call_audio_first_window_t1_ParamLimits

0xa830,	// (0x00056e03) popup_call_audio_first_window_t1

0xa8dc,	// (0x00056eaf) popup_call_audio_first_window_t4_ParamLimits

0xa8dc,	// (0x00056eaf) popup_call_audio_first_window_t4

0xa968,	// (0x00056f3b) popup_call_audio_first_window_t5_ParamLimits

0xa968,	// (0x00056f3b) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0005b6ce) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0005b6ce) popup_call_audio_first_window_t

0xa997,	// (0x00056f6a) bg_popup_call_pane_cp02

0xa9a1,	// (0x00056f74) call_type_pane_cp023

0xa9a9,	// (0x00056f7c) popup_call_audio_wait_window_g1

0xa9b1,	// (0x00056f84) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0005b6d5) popup_call_audio_wait_window_g

0xa9b9,	// (0x00056f8c) popup_call_audio_wait_window_t3

0xa9c7,	// (0x00056f9a) bg_popup_call_pane_cp03_ParamLimits

0xa9c7,	// (0x00056f9a) bg_popup_call_pane_cp03

0xaa27,	// (0x00056ffa) call_thumbnail_pane_cp011_ParamLimits

0xaa27,	// (0x00056ffa) call_thumbnail_pane_cp011

0xaa33,	// (0x00057006) call_type_pane_cp034_ParamLimits

0xaa33,	// (0x00057006) call_type_pane_cp034

0xaa6f,	// (0x00057042) popup_call_audio_second_window_g1_ParamLimits

0xaa6f,	// (0x00057042) popup_call_audio_second_window_g1

0xaaab,	// (0x0005707e) popup_call_audio_second_window_g2_ParamLimits

0xaaab,	// (0x0005707e) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0005b6da) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0005b6da) popup_call_audio_second_window_g

0xaae7,	// (0x000570ba) popup_call_audio_second_window_t1_ParamLimits

0xaae7,	// (0x000570ba) popup_call_audio_second_window_t1

0xab68,	// (0x0005713b) popup_call_audio_second_window_t2_ParamLimits

0xab68,	// (0x0005713b) popup_call_audio_second_window_t2

0xab9e,	// (0x00057171) popup_call_audio_second_window_t3_ParamLimits

0xab9e,	// (0x00057171) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0005b6df) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0005b6df) popup_call_audio_second_window_t

0xa997,	// (0x00056f6a) bg_popup_call_pane_cp04

0xabd4,	// (0x000571a7) list_conf_pane

0xabdc,	// (0x000571af) popup_call_audio_conf_window_t1

0xabea,	// (0x000571bd) call_thumbnail_pane_g1

0xabf2,	// (0x000571c5) bg_pinb_pane_ParamLimits

0xabf2,	// (0x000571c5) bg_pinb_pane

0xac00,	// (0x000571d3) find_pinb_pane

0xac09,	// (0x000571dc) listscroll_pinb_pane_ParamLimits

0xac09,	// (0x000571dc) listscroll_pinb_pane

0xac18,	// (0x000571eb) pinb_bg_pane_g1

0x118e,	// (0x0004d761) pinb_bg_pane_g2

0x119a,	// (0x0004d76d) pinb_bg_pane_g3

0x11a6,	// (0x0004d779) pinb_bg_pane_g4

0x11b2,	// (0x0004d785) pinb_bg_pane_g5

0x11be,	// (0x0004d791) pinb_bg_pane_g6

0x11c9,	// (0x0004d79c) pinb_bg_pane_g7

0x11d4,	// (0x0004d7a7) pinb_bg_pane_g8

0x11df,	// (0x0004d7b2) pinb_bg_pane_g9

0x11e9,	// (0x0004d7bc) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0005b6e6) pinb_bg_pane_g

0x1206,	// (0x0004d7d9) grid_pinb_pane

0x120f,	// (0x0004d7e2) list_pinb_pane

0x1218,	// (0x0004d7eb) scroll_pane_cp01_ParamLimits

0x1218,	// (0x0004d7eb) scroll_pane_cp01

0xac22,	// (0x000571f5) find_pinb_pane_g1_ParamLimits

0xac22,	// (0x000571f5) find_pinb_pane_g1

0xac3a,	// (0x0005720d) find_pinb_pane_t1

0xac4c,	// (0x0005721f) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0005b700) find_pinb_pane_t

0xac61,	// (0x00057234) input_focus_pane_cp01_ParamLimits

0xac61,	// (0x00057234) input_focus_pane_cp01

0x122a,	// (0x0004d7fd) cell_pinb_pane_ParamLimits

0x122a,	// (0x0004d7fd) cell_pinb_pane

0xac6d,	// (0x00057240) cell_pinb_pane_g1_ParamLimits

0xac6d,	// (0x00057240) cell_pinb_pane_g1

0xac80,	// (0x00057253) cell_pinb_pane_g2_ParamLimits

0xac80,	// (0x00057253) cell_pinb_pane_g2

0xac8c,	// (0x0005725f) cell_pinb_pane_g3_ParamLimits

0xac8c,	// (0x0005725f) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0005b705) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0005b705) cell_pinb_pane_g

0xa997,	// (0x00056f6a) grid_highlight_pane_cp01

0x1258,	// (0x0004d82b) list_pinb_item_pane_ParamLimits

0x1258,	// (0x0004d82b) list_pinb_item_pane

0xa997,	// (0x00056f6a) list_highlight_pane_cp02

0x126b,	// (0x0004d83e) list_pinb_item_pane_g1_ParamLimits

0x126b,	// (0x0004d83e) list_pinb_item_pane_g1

0x1278,	// (0x0004d84b) list_pinb_item_pane_g2_ParamLimits

0x1278,	// (0x0004d84b) list_pinb_item_pane_g2

0x1284,	// (0x0004d857) list_pinb_item_pane_g3_ParamLimits

0x1284,	// (0x0004d857) list_pinb_item_pane_g3

0x1295,	// (0x0004d868) list_pinb_item_pane_g4_ParamLimits

0x1295,	// (0x0004d868) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0005b70c) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0005b70c) list_pinb_item_pane_g

0x12a1,	// (0x0004d874) list_pinb_item_pane_t1_ParamLimits

0x12a1,	// (0x0004d874) list_pinb_item_pane_t1

0x12d6,	// (0x0004d8a9) calc_display_pane

0x12fe,	// (0x0004d8d1) calc_paper_pane

0x1321,	// (0x0004d8f4) grid_calc_pane

0xa997,	// (0x00056f6a) bg_list_pane_cp01

0x134f,	// (0x0004d922) clock_g1

0x1357,	// (0x0004d92a) clock_g2

0x0001,

0xf142,	// (0x0005b715) clock_g

0x135f,	// (0x0004d932) clock_t1_ParamLimits

0x135f,	// (0x0004d932) clock_t1

0x1374,	// (0x0004d947) clock_t2_ParamLimits

0x1374,	// (0x0004d947) clock_t2

0x1386,	// (0x0004d959) clock_t3_ParamLimits

0x1386,	// (0x0004d959) clock_t3

0x1398,	// (0x0004d96b) clock_t4_ParamLimits

0x1398,	// (0x0004d96b) clock_t4

0x13aa,	// (0x0004d97d) clock_t5_ParamLimits

0x13aa,	// (0x0004d97d) clock_t5

0x13bf,	// (0x0004d992) clock_t6_ParamLimits

0x13bf,	// (0x0004d992) clock_t6

0x13d1,	// (0x0004d9a4) clock_t7_ParamLimits

0x13d1,	// (0x0004d9a4) clock_t7

0x13e3,	// (0x0004d9b6) clock_t8_ParamLimits

0x13e3,	// (0x0004d9b6) clock_t8

0x13f7,	// (0x0004d9ca) clock_t9_ParamLimits

0x13f7,	// (0x0004d9ca) clock_t9

0x0008,

0xf147,	// (0x0005b71a) clock_t_ParamLimits

0xf147,	// (0x0005b71a) clock_t

0xac98,	// (0x0005726b) popup_clock_analogue_window_cp02

0xac98,	// (0x0005726b) popup_clock_digital_window_cp01

0xaca0,	// (0x00057273) listscroll_help_pane

0xa997,	// (0x00056f6a) phob_pre_status_pane

0xacaa,	// (0x0005727d) grid_qdial_pane

0xabf2,	// (0x000571c5) listscroll_mce_pane

0xabf2,	// (0x000571c5) bg_notes_pane

0xacb4,	// (0x00057287) list_notes_pane

0x140b,	// (0x0004d9de) scroll_pane_cp06

0xacc2,	// (0x00057295) bg_calc_paper_pane

0x9cb3,	// (0x00056286) list_calc_pane

0xacd6,	// (0x000572a9) bg_calc_display_pane

0x141f,	// (0x0004d9f2) calc_display_pane_t1

0x1431,	// (0x0004da04) calc_display_pane_t2

0x9ccd,	// (0x000562a0) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0005b72d) calc_display_pane_t

0x1443,	// (0x0004da16) cell_calc_pane_ParamLimits

0x1443,	// (0x0004da16) cell_calc_pane

0xace2,	// (0x000572b5) bg_calc_paper_pane_g1

0xacee,	// (0x000572c1) bg_calc_paper_pane_g2

0xacfa,	// (0x000572cd) bg_calc_paper_pane_g3

0xad06,	// (0x000572d9) bg_calc_paper_pane_g4

0xad12,	// (0x000572e5) bg_calc_paper_pane_g5

0x147a,	// (0x0004da4d) bg_calc_paper_pane_g6

0x148b,	// (0x0004da5e) bg_calc_paper_pane_g7

0x149c,	// (0x0004da6f) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0005b734) bg_calc_paper_pane_g

0x14af,	// (0x0004da82) calc_bg_paper_pane_g9

0x14c2,	// (0x0004da95) list_calc_item_pane_ParamLimits

0x14c2,	// (0x0004da95) list_calc_item_pane

0xad1e,	// (0x000572f1) list_calc_item_pane_g1

0x9cdf,	// (0x000562b2) list_calc_item_pane_t1_ParamLimits

0x9cdf,	// (0x000562b2) list_calc_item_pane_t1

0x14dc,	// (0x0004daaf) list_calc_item_pane_t2_ParamLimits

0x14dc,	// (0x0004daaf) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0005b745) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0005b745) list_calc_item_pane_t

0xad2b,	// (0x000572fe) cell_calc_pane_g1

0xad35,	// (0x00057308) grid_highlight_pane_cp02

0xad57,	// (0x0005732a) bg_calc_display_pane_g1

0x9cf1,	// (0x000562c4) bg_calc_display_pane_g2

0xad60,	// (0x00057333) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0005b74f) bg_calc_display_pane_g

0x150e,	// (0x0004dae1) cell_qdial_pane_ParamLimits

0x150e,	// (0x0004dae1) cell_qdial_pane

0x1522,	// (0x0004daf5) cell_qdial_pane_g1_ParamLimits

0x1522,	// (0x0004daf5) cell_qdial_pane_g1

0x1538,	// (0x0004db0b) cell_qdial_pane_g2_ParamLimits

0x1538,	// (0x0004db0b) cell_qdial_pane_g2

0xad69,	// (0x0005733c) cell_qdial_pane_g3_ParamLimits

0xad69,	// (0x0005733c) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0005b756) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0005b756) cell_qdial_pane_g

0x155e,	// (0x0004db31) cell_qdial_pane_t1_ParamLimits

0x155e,	// (0x0004db31) cell_qdial_pane_t1

0x1576,	// (0x0004db49) cell_qdial_pane_t2_ParamLimits

0x1576,	// (0x0004db49) cell_qdial_pane_t2

0x1589,	// (0x0004db5c) cell_qdial_pane_t3_ParamLimits

0x1589,	// (0x0004db5c) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0005b75f) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0005b75f) cell_qdial_pane_t

0xa997,	// (0x00056f6a) grid_highlight_pane_cp04

0xad75,	// (0x00057348) thumbnail_qdial_pane_ParamLimits

0xad75,	// (0x00057348) thumbnail_qdial_pane

0xadd1,	// (0x000573a4) list_help_pane

0xadda,	// (0x000573ad) scroll_pane_cp02

0x159c,	// (0x0004db6f) help_list_pane_t1_ParamLimits

0x159c,	// (0x0004db6f) help_list_pane_t1

0x9cfb,	// (0x000562ce) bg_notes_pane_g2

0x9d03,	// (0x000562d6) bg_notes_pane_g3

0x9d0b,	// (0x000562de) notes_bg_pane_g1

0x9d13,	// (0x000562e6) notes_bg_pane_g4

0x9d1b,	// (0x000562ee) notes_bg_pane_g5

0x9d23,	// (0x000562f6) notes_bg_pane_g6

0x9d2b,	// (0x000562fe) notes_bg_pane_g7

0x9d33,	// (0x00056306) notes_bg_pane_g8

0x9d3b,	// (0x0005630e) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0005b77d) notes_bg_pane_g

0x15bb,	// (0x0004db8e) list_notes_text_pane_ParamLimits

0x15bb,	// (0x0004db8e) list_notes_text_pane

0xade3,	// (0x000573b6) list_notes_text_pane_g1

0x15d1,	// (0x0004dba4) list_notes_text_pane_t1

0x15df,	// (0x0004dbb2) listscroll_cale_week_pane

0x160b,	// (0x0004dbde) bg_cale_heading_pane

0xae06,	// (0x000573d9) bg_cale_pane_cp01

0x1629,	// (0x0004dbfc) cale_week_corner_pane

0x1648,	// (0x0004dc1b) cale_week_day_heading_pane

0x166b,	// (0x0004dc3e) cale_week_scroll_pane_g1

0x1684,	// (0x0004dc57) cale_week_scroll_pane_g2

0x169c,	// (0x0004dc6f) cale_week_scroll_pane_g3

0x16b4,	// (0x0004dc87) cale_week_scroll_pane_g4

0x16cc,	// (0x0004dc9f) cale_week_scroll_pane_g5

0x16e8,	// (0x0004dcbb) cale_week_scroll_pane_g6

0x1708,	// (0x0004dcdb) cale_week_scroll_pane_g7

0x1728,	// (0x0004dcfb) cale_week_scroll_pane_g8

0x174c,	// (0x0004dd1f) cale_week_scroll_pane_g9

0x1764,	// (0x0004dd37) cale_week_scroll_pane_g10

0x177c,	// (0x0004dd4f) cale_week_scroll_pane_g11

0x1794,	// (0x0004dd67) cale_week_scroll_pane_g12

0x17ac,	// (0x0004dd7f) cale_week_scroll_pane_g13

0x17ac,	// (0x0004dd7f) cale_week_scroll_pane_g14

0x17ac,	// (0x0004dd7f) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0005b78c) cale_week_scroll_pane_g

0x17c4,	// (0x0004dd97) cale_week_time_pane

0x17e8,	// (0x0004ddbb) grid_cale_week_pane

0xae36,	// (0x00057409) scroll_pane_cp08

0x180e,	// (0x0004dde1) cell_cale_week_pane_ParamLimits

0x180e,	// (0x0004dde1) cell_cale_week_pane

0x189c,	// (0x0004de6f) cale_week_day_heading_pane_t1

0x18e6,	// (0x0004deb9) cale_week_day_heading_pane_t2

0x1935,	// (0x0004df08) cale_week_day_heading_pane_t3

0x1984,	// (0x0004df57) cale_week_day_heading_pane_t4

0x19d3,	// (0x0004dfa6) cale_week_day_heading_pane_t5

0x1a2a,	// (0x0004dffd) cale_week_day_heading_pane_t6

0x1a81,	// (0x0004e054) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0005b7ab) cale_week_day_heading_pane_t

0xae53,	// (0x00057426) bg_cale_side_pane

0x1acb,	// (0x0004e09e) cale_week_time_pane_t1

0x1ae5,	// (0x0004e0b8) cale_week_time_pane_t2

0x1aff,	// (0x0004e0d2) cale_week_time_pane_t3

0x1b19,	// (0x0004e0ec) cale_week_time_pane_t4

0x1b33,	// (0x0004e106) cale_week_time_pane_t5

0x1b4d,	// (0x0004e120) cale_week_time_pane_t6

0x1b67,	// (0x0004e13a) cale_week_time_pane_t7

0x1b87,	// (0x0004e15a) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0005b7ba) cale_week_time_pane_t

0x1ba7,	// (0x0004e17a) cell_cale_week_pane_g2

0x1bc6,	// (0x0004e199) cell_cale_week_pane_g3_ParamLimits

0x1bc6,	// (0x0004e199) cell_cale_week_pane_g3

0xae61,	// (0x00057434) grid_highlight_pane_cp07

0xae69,	// (0x0005743c) listscroll_gms_pane

0xae73,	// (0x00057446) grid_gms_pane

0xae7c,	// (0x0005744f) listscroll_gms_pane_g1

0xae84,	// (0x00057457) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0005b7cb) listscroll_gms_pane_g

0x1bde,	// (0x0004e1b1) scroll_pane_cp010

0x1be9,	// (0x0004e1bc) cell_gms_pane_ParamLimits

0x1be9,	// (0x0004e1bc) cell_gms_pane

0x1bfb,	// (0x0004e1ce) cell_gms_pane_g1

0xae8c,	// (0x0005745f) cell_gms_pane_g2

0xade3,	// (0x000573b6) cell_gms_pane_g3

0xae94,	// (0x00057467) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0005b7d0) cell_gms_pane_g

0xae9d,	// (0x00057470) grid_highlight_pane_cp09

0x40ef,	// (0x000506c2) phob_pre_status_pane_g1

0x40f7,	// (0x000506ca) phob_pre_status_pane_g2

0x40ff,	// (0x000506d2) phob_pre_status_pane_g3

0x4107,	// (0x000506da) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0005bbbf) phob_pre_status_pane_g

0x4117,	// (0x000506ea) phob_pre_status_pane_t1

0x4125,	// (0x000506f8) phob_pre_status_pane_t2

0x4135,	// (0x00050708) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0005bbca) phob_pre_status_pane_t

0xa997,	// (0x00056f6a) bg_list_pane_cp05

0x1c0b,	// (0x0004e1de) grid_vorec_pane

0x1c17,	// (0x0004e1ea) vorec_t1

0x1c25,	// (0x0004e1f8) vorec_t2

0x1c33,	// (0x0004e206) vorec_t3

0x1c41,	// (0x0004e214) vorec_t4

0x1c4f,	// (0x0004e222) vorec_t5

0x9d43,	// (0x00056316) vorec_t6

0x0006,

0xf206,	// (0x0005b7d9) vorec_t

0x1c6b,	// (0x0004e23e) wait_bar_pane_cp01

0x1c73,	// (0x0004e246) cell_vorec_pane_ParamLimits

0x1c73,	// (0x0004e246) cell_vorec_pane

0xaea5,	// (0x00057478) cell_vorec_pane_g1

0xa997,	// (0x00056f6a) grid_highlight_pane_cp05

0x1c9e,	// (0x0004e271) cams_zoom_pane

0x1cad,	// (0x0004e280) image_vga_pane

0x1cc7,	// (0x0004e29a) main_camera_pane_g1

0x1cd9,	// (0x0004e2ac) main_camera_pane_g2

0x1ce9,	// (0x0004e2bc) main_camera_pane_g3

0x1cfb,	// (0x0004e2ce) main_camera_pane_g4

0x1d0d,	// (0x0004e2e0) main_camera_pane_g5

0x1d1f,	// (0x0004e2f2) main_camera_pane_g6

0x1d31,	// (0x0004e304) main_camera_pane_g7

0x0007,

0xf215,	// (0x0005b7e8) main_camera_pane_g

0x1d43,	// (0x0004e316) main_camera_pane_t1

0x1d59,	// (0x0004e32c) main_camera_pane_t2

0x0001,

0xf226,	// (0x0005b7f9) main_camera_pane_t

0x1d95,	// (0x0004e368) cams_zoom_pane_cp_ParamLimits

0x1d95,	// (0x0004e368) cams_zoom_pane_cp

0x1dbd,	// (0x0004e390) image_cif_pane_ParamLimits

0x1dbd,	// (0x0004e390) image_cif_pane

0x1df8,	// (0x0004e3cb) image_subqcif_pane

0x1e00,	// (0x0004e3d3) main_video_pane_g1_ParamLimits

0x1e00,	// (0x0004e3d3) main_video_pane_g1

0x1e24,	// (0x0004e3f7) main_video_pane_g2_ParamLimits

0x1e24,	// (0x0004e3f7) main_video_pane_g2

0x1e58,	// (0x0004e42b) main_video_pane_g3_ParamLimits

0x1e58,	// (0x0004e42b) main_video_pane_g3

0x1e86,	// (0x0004e459) main_video_pane_g4_ParamLimits

0x1e86,	// (0x0004e459) main_video_pane_g4

0x1eb4,	// (0x0004e487) main_video_pane_g5_ParamLimits

0x1eb4,	// (0x0004e487) main_video_pane_g5

0xaebb,	// (0x0005748e) main_video_pane_g6_ParamLimits

0xaebb,	// (0x0005748e) main_video_pane_g6

0x0006,

0xf22b,	// (0x0005b7fe) main_video_pane_g_ParamLimits

0xf22b,	// (0x0005b7fe) main_video_pane_g

0x1edd,	// (0x0004e4b0) main_video_pane_t1_ParamLimits

0x1edd,	// (0x0004e4b0) main_video_pane_t1

0xaed5,	// (0x000574a8) cams_zoom_pane_g1

0xaede,	// (0x000574b1) cams_zoom_pane_g2

0xaee7,	// (0x000574ba) cams_zoom_pane_g3

0xaef0,	// (0x000574c3) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0005b80d) cams_zoom_pane_g

0x1f3a,	// (0x0004e50d) grid_cams_pane

0x1f54,	// (0x0004e527) linegrid_cams_pane

0x1f67,	// (0x0004e53a) cell_cams_pane_ParamLimits

0x1f67,	// (0x0004e53a) cell_cams_pane

0xaef9,	// (0x000574cc) cams_burst_image_pane

0xaf01,	// (0x000574d4) cell_cams_pane_g1

0xa997,	// (0x00056f6a) grid_highlight_pane_cp03

0xad2b,	// (0x000572fe) mp_bg_pane_g1

0xa997,	// (0x00056f6a) bg_list_pane_cp03

0xcae9,	// (0x000590bc) bg_mp_pane

0xcaf1,	// (0x000590c4) grid_mp_pane

0xcaf9,	// (0x000590cc) media_player_g1

0xcb01,	// (0x000590d4) media_player_t1

0xcb0f,	// (0x000590e2) media_player_t2

0xcb1d,	// (0x000590f0) media_player_t3

0xcb2b,	// (0x000590fe) media_player_t4

0xcb39,	// (0x0005910c) media_player_t5

0xcb47,	// (0x0005911a) media_player_t6

0xcb55,	// (0x00059128) media_player_t7

0x0006,

0xf5d6,	// (0x0005bba9) media_player_t

0xcb63,	// (0x00059136) wait_bar_pane_cp02

0xf5bb,	// (0x0005bb8e) main_usb_pane_t

0x40e6,	// (0x000506b9) cell_mp_pane

0xad2b,	// (0x000572fe) cell_mp_pane_g1

0xa997,	// (0x00056f6a) grid_highlight_pane_cp06

0xaf09,	// (0x000574dc) grid_skin_colour_pane

0xaf11,	// (0x000574e4) list_highlight_pane_cp03

0x1f9f,	// (0x0004e572) skin_g1

0xaf19,	// (0x000574ec) skin_t1

0xaf28,	// (0x000574fb) skin_t2

0x0001,

0xf26f,	// (0x0005b842) skin_t

0x1fa7,	// (0x0004e57a) cell_skin_colour_pane_ParamLimits

0x1fa7,	// (0x0004e57a) cell_skin_colour_pane

0xaf36,	// (0x00057509) cell_skin_colour_pane_g1

0x2020,	// (0x0004e5f3) call_video_g1_ParamLimits

0x2020,	// (0x0004e5f3) call_video_g1

0x203c,	// (0x0004e60f) call_video_g2_ParamLimits

0x203c,	// (0x0004e60f) call_video_g2

0x0001,

0xf274,	// (0x0005b847) call_video_g_ParamLimits

0xf274,	// (0x0005b847) call_video_g

0x208e,	// (0x0004e661) call_video_uplink_pane_cp1_ParamLimits

0x208e,	// (0x0004e661) call_video_uplink_pane_cp1

0xaf48,	// (0x0005751b) call_video_uplink_pane_cp2

0x212d,	// (0x0004e700) video_down_crop_pane_ParamLimits

0x212d,	// (0x0004e700) video_down_crop_pane

0x2216,	// (0x0004e7e9) video_down_pane_ParamLimits

0x2216,	// (0x0004e7e9) video_down_pane

0xaf50,	// (0x00057523) video_down_subqcif_pane_ParamLimits

0xaf50,	// (0x00057523) video_down_subqcif_pane

0xaf68,	// (0x0005753b) video_down_subqcif_pane_cp_ParamLimits

0xaf68,	// (0x0005753b) video_down_subqcif_pane_cp

0xaf8e,	// (0x00057561) im_reading_pane_ParamLimits

0xaf8e,	// (0x00057561) im_reading_pane

0x2324,	// (0x0004e8f7) im_writing_pane_ParamLimits

0x2324,	// (0x0004e8f7) im_writing_pane

0x233a,	// (0x0004e90d) im_reading_pane_t1

0xafa8,	// (0x0005757b) list_im_pane

0xafb9,	// (0x0005758c) scroll_pane_cp07

0x2377,	// (0x0004e94a) im_writing_pane_t1_ParamLimits

0x2377,	// (0x0004e94a) im_writing_pane_t1

0xafd2,	// (0x000575a5) im_writing_pane_t2_ParamLimits

0xafd2,	// (0x000575a5) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0005b851) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0005b851) im_writing_pane_t

0xa997,	// (0x00056f6a) input_focus_pane_cp04

0xa997,	// (0x00056f6a) input_focus_pane_cp05

0x238c,	// (0x0004e95f) list_im_single_pane_ParamLimits

0x238c,	// (0x0004e95f) list_im_single_pane

0x23a2,	// (0x0004e975) list_single_im_pane_t1

0x40a6,	// (0x00050679) blid_accuracy_pane

0x40ae,	// (0x00050681) blid_compass_pane

0x40b8,	// (0x0005068b) main_location_t1

0x40c8,	// (0x0005069b) main_location_t2

0x40d8,	// (0x000506ab) main_location_t3

0x0002,

0xf5e5,	// (0x0005bbb8) main_location_t

0xa997,	// (0x00056f6a) aid_levels_location

0xad2b,	// (0x000572fe) blid_accuracy_pane_g1

0xad2b,	// (0x000572fe) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0005b8b3) blid_accuracy_pane_g

0xb01a,	// (0x000575ed) wml_content_pane

0xb058,	// (0x0005762b) wml_button_pane_ParamLimits

0xb058,	// (0x0005762b) wml_button_pane

0x23b1,	// (0x0004e984) wml_list_single_large_pane_ParamLimits

0x23b1,	// (0x0004e984) wml_list_single_large_pane

0x23c7,	// (0x0004e99a) wml_list_single_medium_pane_ParamLimits

0x23c7,	// (0x0004e99a) wml_list_single_medium_pane

0x23e1,	// (0x0004e9b4) wml_list_single_small_pane_ParamLimits

0x23e1,	// (0x0004e9b4) wml_list_single_small_pane

0xb06c,	// (0x0005763f) wml_selection_box_pane_ParamLimits

0xb06c,	// (0x0005763f) wml_selection_box_pane

0xb07f,	// (0x00057652) wml_list_single_pane_t1

0xb08e,	// (0x00057661) wml_list_single_medium_pane_t1

0xb09d,	// (0x00057670) wml_list_single_large_pane_t1

0xb0ac,	// (0x0005767f) input_focus_pane_cp02_ParamLimits

0xb0ac,	// (0x0005767f) input_focus_pane_cp02

0xb0bf,	// (0x00057692) wml_selection_box_pane_g1

0xb0c8,	// (0x0005769b) wml_selection_box_pane_t1_ParamLimits

0xb0c8,	// (0x0005769b) wml_selection_box_pane_t1

0xabf2,	// (0x000571c5) bg_wml_button_pane_ParamLimits

0xabf2,	// (0x000571c5) bg_wml_button_pane

0xb0e0,	// (0x000576b3) wml_button_pane_g1

0xb0e8,	// (0x000576bb) wml_button_pane_t1

0xb0e0,	// (0x000576b3) wml_button_bg_pane_g1

0xb0f8,	// (0x000576cb) wml_button_bg_pane_g2

0xb100,	// (0x000576d3) wml_button_bg_pane_g3

0xb108,	// (0x000576db) wml_button_bg_pane_g4

0xb110,	// (0x000576e3) wml_button_bg_pane_g5

0xb118,	// (0x000576eb) wml_button_bg_pane_g6

0xb120,	// (0x000576f3) wml_button_bg_pane_g7

0xb128,	// (0x000576fb) wml_button_bg_pane_g8

0xb130,	// (0x00057703) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0005b856) wml_button_bg_pane_g

0x23fb,	// (0x0004e9ce) bg_list_pane_cp02

0xb138,	// (0x0005770b) mce_header_pane_ParamLimits

0xb138,	// (0x0005770b) mce_header_pane

0xb14e,	// (0x00057721) mce_icon_pane

0xb14e,	// (0x00057721) mce_image_pane

0xb157,	// (0x0005772a) mce_text_pane_ParamLimits

0xb157,	// (0x0005772a) mce_text_pane

0x2403,	// (0x0004e9d6) scroll_pane_cp03

0xb050,	// (0x00057623) scroll_pane_cp04

0xb16a,	// (0x0005773d) scroll_pane_cp05_ParamLimits

0xb16a,	// (0x0005773d) scroll_pane_cp05

0x240d,	// (0x0004e9e0) mce_header_field_pane_ParamLimits

0x240d,	// (0x0004e9e0) mce_header_field_pane

0x2424,	// (0x0004e9f7) mce_header_field_pane_2_ParamLimits

0x2424,	// (0x0004e9f7) mce_header_field_pane_2

0x243a,	// (0x0004ea0d) mce_header_field_pane_3

0x2442,	// (0x0004ea15) list_single_mce_message_pane_ParamLimits

0x2442,	// (0x0004ea15) list_single_mce_message_pane

0x2459,	// (0x0004ea2c) list_single_mce_smart_pane_ParamLimits

0x2459,	// (0x0004ea2c) list_single_mce_smart_pane

0xb176,	// (0x00057749) input_focus_pane_cp03

0xb17f,	// (0x00057752) list_header_data_pane

0x247b,	// (0x0004ea4e) mce_header_field_pane_t1

0x248b,	// (0x0004ea5e) list_single_mce_header_pane_ParamLimits

0x248b,	// (0x0004ea5e) list_single_mce_header_pane

0xb187,	// (0x0005775a) list_single_mce_header_pane_t1

0xb196,	// (0x00057769) list_single_mce_message_pane_g1

0xb19e,	// (0x00057771) list_single_mce_message_pane_t1

0x24c5,	// (0x0004ea98) bg_cale_heading_pane_cp01_ParamLimits

0x24c5,	// (0x0004ea98) bg_cale_heading_pane_cp01

0xb1ac,	// (0x0005777f) bg_cale_pane_cp02_ParamLimits

0xb1ac,	// (0x0005777f) bg_cale_pane_cp02

0x2500,	// (0x0004ead3) cale_month_corner_pane

0x251f,	// (0x0004eaf2) cale_month_day_heading_pane_ParamLimits

0x251f,	// (0x0004eaf2) cale_month_day_heading_pane

0x2572,	// (0x0004eb45) cale_month_pane_g1_ParamLimits

0x2572,	// (0x0004eb45) cale_month_pane_g1

0x25a2,	// (0x0004eb75) cale_month_pane_g2_ParamLimits

0x25a2,	// (0x0004eb75) cale_month_pane_g2

0x25d2,	// (0x0004eba5) cale_month_pane_g3_ParamLimits

0x25d2,	// (0x0004eba5) cale_month_pane_g3

0x260e,	// (0x0004ebe1) cale_month_pane_g4_ParamLimits

0x260e,	// (0x0004ebe1) cale_month_pane_g4

0x264a,	// (0x0004ec1d) cale_month_pane_g5_ParamLimits

0x264a,	// (0x0004ec1d) cale_month_pane_g5

0x2692,	// (0x0004ec65) cale_month_pane_g6_ParamLimits

0x2692,	// (0x0004ec65) cale_month_pane_g6

0x26de,	// (0x0004ecb1) cale_month_pane_g7_ParamLimits

0x26de,	// (0x0004ecb1) cale_month_pane_g7

0x2732,	// (0x0004ed05) cale_month_pane_g8_ParamLimits

0x2732,	// (0x0004ed05) cale_month_pane_g8

0x2786,	// (0x0004ed59) cale_month_pane_g9_ParamLimits

0x2786,	// (0x0004ed59) cale_month_pane_g9

0x27d8,	// (0x0004edab) cale_month_pane_g10_ParamLimits

0x27d8,	// (0x0004edab) cale_month_pane_g10

0x282a,	// (0x0004edfd) cale_month_pane_g11_ParamLimits

0x282a,	// (0x0004edfd) cale_month_pane_g11

0x287c,	// (0x0004ee4f) cale_month_pane_g12_ParamLimits

0x287c,	// (0x0004ee4f) cale_month_pane_g12

0x28ce,	// (0x0004eea1) cale_month_pane_g13_ParamLimits

0x28ce,	// (0x0004eea1) cale_month_pane_g13

0x000c,

0xf296,	// (0x0005b869) cale_month_pane_g_ParamLimits

0xf296,	// (0x0005b869) cale_month_pane_g

0x2920,	// (0x0004eef3) cale_month_week_pane

0x2944,	// (0x0004ef17) grid_cale_month_pane_ParamLimits

0x2944,	// (0x0004ef17) grid_cale_month_pane

0x2982,	// (0x0004ef55) cale_month_day_heading_pane_t1

0x2a08,	// (0x0004efdb) cale_month_day_heading_pane_t2

0x2a99,	// (0x0004f06c) cale_month_day_heading_pane_t3

0x2b2a,	// (0x0004f0fd) cale_month_day_heading_pane_t4

0x2bc3,	// (0x0004f196) cale_month_day_heading_pane_t5

0x2c64,	// (0x0004f237) cale_month_day_heading_pane_t6

0x2d05,	// (0x0004f2d8) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0005b884) cale_month_day_heading_pane_t

0xae53,	// (0x00057426) bg_cale_side_pane_cp01

0x2dae,	// (0x0004f381) cale_month_week_pane_t1

0x2dc7,	// (0x0004f39a) cale_month_week_pane_t2

0x2de0,	// (0x0004f3b3) cale_month_week_pane_t3

0x2df9,	// (0x0004f3cc) cale_month_week_pane_t4

0x2e12,	// (0x0004f3e5) cale_month_week_pane_t5

0x2e2b,	// (0x0004f3fe) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0005b893) cale_month_week_pane_t

0x2e44,	// (0x0004f417) cell_cale_month_pane_ParamLimits

0x2e44,	// (0x0004f417) cell_cale_month_pane

0x9d51,	// (0x00056324) cell_cale_month_pane_g1

0x2f72,	// (0x0004f545) cell_cale_month_pane_t1_ParamLimits

0x2f72,	// (0x0004f545) cell_cale_month_pane_t1

0xae61,	// (0x00057434) grid_highlight_pane_cp08

0xad2b,	// (0x000572fe) main_smil_g1

0x2f92,	// (0x0004f565) smil_status_pane

0xb1eb,	// (0x000577be) smil_text_pane

0xca09,	// (0x00058fdc) bg_popup_call3_rect_pane_g8

0xca11,	// (0x00058fe4) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0005bb4c) bg_popup_call3_rect_pane_g

0xcc58,	// (0x0005922b) smil_status_volume_pane_g1

0xb1f5,	// (0x000577c8) smil_status_pane_t1

0x9ea7,	// (0x0005647a) volume_smil_pane

0xb20c,	// (0x000577df) list_smil_text_pane

0x2fa7,	// (0x0004f57a) scroll_pane_cp011

0x2fb2,	// (0x0004f585) smil_text_list_pane_t1_ParamLimits

0x2fb2,	// (0x0004f585) smil_text_list_pane_t1

0x9d5d,	// (0x00056330) aid_volume_smil_ParamLimits

0x9d5d,	// (0x00056330) aid_volume_smil

0xad2b,	// (0x000572fe) smil_volume_pane_g1

0xad2b,	// (0x000572fe) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0005b8b3) smil_volume_pane_g

0x15df,	// (0x0004dbb2) listscroll_cale_day_pane

0xb216,	// (0x000577e9) bg_cale_pane

0xb22e,	// (0x00057801) list_cale_pane

0xb251,	// (0x00057824) scroll_pane_cp09

0xb262,	// (0x00057835) cale_bg_pane_g1

0xb26a,	// (0x0005783d) cale_bg_pane_g2

0xb272,	// (0x00057845) cale_bg_pane_g3

0xb27a,	// (0x0005784d) cale_bg_pane_g4

0xb282,	// (0x00057855) cale_bg_pane_g5

0xb28a,	// (0x0005785d) cale_bg_pane_g6

0xb292,	// (0x00057865) cale_bg_pane_g7

0xb29a,	// (0x0005786d) cale_bg_pane_g8

0xb2a2,	// (0x00057875) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0005b8b8) cale_bg_pane_g

0x2ff4,	// (0x0004f5c7) list_cale_time_pane_ParamLimits

0x2ff4,	// (0x0004f5c7) list_cale_time_pane

0x3008,	// (0x0004f5db) list_cale_time_pane_g1_ParamLimits

0x3008,	// (0x0004f5db) list_cale_time_pane_g1

0xb2aa,	// (0x0005787d) list_cale_time_pane_g2_ParamLimits

0xb2aa,	// (0x0005787d) list_cale_time_pane_g2

0x3014,	// (0x0004f5e7) list_cale_time_pane_g3_ParamLimits

0x3014,	// (0x0004f5e7) list_cale_time_pane_g3

0x3022,	// (0x0004f5f5) list_cale_time_pane_g4_ParamLimits

0x3022,	// (0x0004f5f5) list_cale_time_pane_g4

0x3030,	// (0x0004f603) list_cale_time_pane_g5_ParamLimits

0x3030,	// (0x0004f603) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0005b8cb) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0005b8cb) list_cale_time_pane_g

0x303e,	// (0x0004f611) list_cale_time_pane_t1_ParamLimits

0x303e,	// (0x0004f611) list_cale_time_pane_t1

0x3066,	// (0x0004f639) list_cale_time_pane_t2_ParamLimits

0x3066,	// (0x0004f639) list_cale_time_pane_t2

0x331b,	// (0x0004f8ee) aid_blid_cardinal_pane

0x3359,	// (0x0004f92c) compass_pane_t4

0x308e,	// (0x0004f661) list_cale_time_pane_t4_ParamLimits

0x308e,	// (0x0004f661) list_cale_time_pane_t4

0x3367,	// (0x0004f93a) compass_pane_t5

0x3375,	// (0x0004f948) compass_pane_t6

0x3383,	// (0x0004f956) compass_pane_t7

0xb712,	// (0x00057ce5) navi_pane_cc_t1

0xb867,	// (0x00057e3a) aid_phob_thumbnail_center_pane

0x3ab6,	// (0x00050089) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0005b8d8) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0005b8d8) list_cale_time_pane_t

0x9b3d,	// (0x00056110) bg_popup_window_pane_cp02_ParamLimits

0x9b3d,	// (0x00056110) bg_popup_window_pane_cp02

0xb2c4,	// (0x00057897) heading_pane_cp01_ParamLimits

0xb2c4,	// (0x00057897) heading_pane_cp01

0xb2d0,	// (0x000578a3) loc_req_pane_ParamLimits

0xb2d0,	// (0x000578a3) loc_req_pane

0xb2e0,	// (0x000578b3) loc_type_pane_ParamLimits

0xb2e0,	// (0x000578b3) loc_type_pane

0xb2f2,	// (0x000578c5) loc_type_pane_t1_ParamLimits

0xb2f2,	// (0x000578c5) loc_type_pane_t1

0xb304,	// (0x000578d7) loc_type_pane_t2_ParamLimits

0xb304,	// (0x000578d7) loc_type_pane_t2

0xb316,	// (0x000578e9) loc_type_pane_t3_ParamLimits

0xb316,	// (0x000578e9) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0005b8df) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0005b8df) loc_type_pane_t

0xb328,	// (0x000578fb) list_loc_req_pane

0xb332,	// (0x00057905) scroll_pane_cp012

0x30b6,	// (0x0004f689) list_single_loc_request_popup_menu_pane_ParamLimits

0x30b6,	// (0x0004f689) list_single_loc_request_popup_menu_pane

0xb33d,	// (0x00057910) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb33d,	// (0x00057910) list_single_loc_request_popup_menu_pane_g1

0xb349,	// (0x0005791c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb349,	// (0x0005791c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0005b8e6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0005b8e6) list_single_loc_request_popup_menu_pane_g

0xb355,	// (0x00057928) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb355,	// (0x00057928) list_single_loc_request_popup_menu_pane_t1

0xabf2,	// (0x000571c5) bg_popup_window_pane_cp03_ParamLimits

0xabf2,	// (0x000571c5) bg_popup_window_pane_cp03

0xb3b5,	// (0x00057988) heading_loc_req_pane_ParamLimits

0xb3b5,	// (0x00057988) heading_loc_req_pane

0x30c3,	// (0x0004f696) popup_dyc_status_message_window_g1_ParamLimits

0x30c3,	// (0x0004f696) popup_dyc_status_message_window_g1

0x30d7,	// (0x0004f6aa) popup_dyc_status_message_window_t1_ParamLimits

0x30d7,	// (0x0004f6aa) popup_dyc_status_message_window_t1

0x30ec,	// (0x0004f6bf) popup_dyc_status_message_window_t2_ParamLimits

0x30ec,	// (0x0004f6bf) popup_dyc_status_message_window_t2

0x3101,	// (0x0004f6d4) popup_dyc_status_message_window_t3_ParamLimits

0x3101,	// (0x0004f6d4) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0005b8eb) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0005b8eb) popup_dyc_status_message_window_t

0xa997,	// (0x00056f6a) bg_heading_pane_cp01

0xb36b,	// (0x0005793e) heading_loc_req_pane_g1

0xb373,	// (0x00057946) heading_loc_req_pane_g2

0xb37b,	// (0x0005794e) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0005b8f2) heading_loc_req_pane_g

0xb383,	// (0x00057956) heading_loc_req_pane_t1

0xb3c1,	// (0x00057994) bg_popup_sub_pane_cp01_ParamLimits

0xb3c1,	// (0x00057994) bg_popup_sub_pane_cp01

0xb3cf,	// (0x000579a2) popup_cale_events_window_g1_ParamLimits

0xb3cf,	// (0x000579a2) popup_cale_events_window_g1

0xb3ef,	// (0x000579c2) popup_cale_events_window_g2_ParamLimits

0xb3ef,	// (0x000579c2) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0005b926) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0005b926) popup_cale_events_window_g

0xb40f,	// (0x000579e2) popup_cale_events_window_t1_ParamLimits

0xb40f,	// (0x000579e2) popup_cale_events_window_t1

0xb421,	// (0x000579f4) popup_cale_events_window_t2_ParamLimits

0xb421,	// (0x000579f4) popup_cale_events_window_t2

0xb45f,	// (0x00057a32) popup_cale_events_window_t3_ParamLimits

0xb45f,	// (0x00057a32) popup_cale_events_window_t3

0xb499,	// (0x00057a6c) popup_cale_events_window_t4_ParamLimits

0xb499,	// (0x00057a6c) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0005b92b) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0005b92b) popup_cale_events_window_t

0x3129,	// (0x0004f6fc) call_type_pane

0x3139,	// (0x0004f70c) popup_call_status_window_g1

0x314d,	// (0x0004f720) popup_call_status_window_g2

0x3161,	// (0x0004f734) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0005b934) popup_call_status_window_g

0xb4cf,	// (0x00057aa2) call_type_pane_g1

0xb4d8,	// (0x00057aab) call_type_pane_g2

0x0001,

0xf368,	// (0x0005b93b) call_type_pane_g

0xa997,	// (0x00056f6a) bg_popup_sub_pane_cp02

0xb4e1,	// (0x00057ab4) listscroll_popup_wml_pane

0xb4e9,	// (0x00057abc) list_wml_pane

0xb4f3,	// (0x00057ac6) scroll_pane_cp013

0xb4fe,	// (0x00057ad1) list_single_graphic_popup_wml_pane_ParamLimits

0xb4fe,	// (0x00057ad1) list_single_graphic_popup_wml_pane

0xad2b,	// (0x000572fe) list_single_graphic_popup_wml_pane_g1

0xb512,	// (0x00057ae5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0005b940) list_single_graphic_popup_wml_pane_g

0xb51a,	// (0x00057aed) list_single_graphic_popup_wml_pane_t1

0xb530,	// (0x00057b03) aid_call_pane

0xabea,	// (0x000571bd) popup_clock_analogue_window_g1

0xabea,	// (0x000571bd) popup_clock_analogue_window_g2

0x9d7f,	// (0x00056352) popup_clock_analogue_window_g3

0x9d7f,	// (0x00056352) popup_clock_analogue_window_g4

0xad2b,	// (0x000572fe) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0005b945) popup_clock_analogue_window_g

0x9d87,	// (0x0005635a) popup_clock_analogue_window_t1

0x9d95,	// (0x00056368) clock_digital_number_pane_ParamLimits

0x9d95,	// (0x00056368) clock_digital_number_pane

0x9da1,	// (0x00056374) clock_digital_number_pane_cp02_ParamLimits

0x9da1,	// (0x00056374) clock_digital_number_pane_cp02

0x9dad,	// (0x00056380) clock_digital_number_pane_cp03_ParamLimits

0x9dad,	// (0x00056380) clock_digital_number_pane_cp03

0x9db9,	// (0x0005638c) clock_digital_number_pane_cp04_ParamLimits

0x9db9,	// (0x0005638c) clock_digital_number_pane_cp04

0x9dc9,	// (0x0005639c) clock_digital_separator_pane_ParamLimits

0x9dc9,	// (0x0005639c) clock_digital_separator_pane

0x9dd5,	// (0x000563a8) popup_clock_digital_window_t1

0xad2b,	// (0x000572fe) clock_digital_number_pane_g1

0xad2b,	// (0x000572fe) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0005b8b3) clock_digital_number_pane_g

0xad2b,	// (0x000572fe) clock_digital_separator_pane_g1

0xad2b,	// (0x000572fe) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0005b8b3) clock_digital_separator_pane_g

0xa997,	// (0x00056f6a) bg_popup_window_pane_cp04

0xb538,	// (0x00057b0b) heading_pane_cp03

0xb540,	// (0x00057b13) listscroll_popup_gms_pane

0xb548,	// (0x00057b1b) grid_large_graphic_popup_pane

0xb552,	// (0x00057b25) listscroll_popup_gms_pane_g1

0xb55a,	// (0x00057b2d) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0005b950) listscroll_popup_gms_pane_g

0xb050,	// (0x00057623) scroll_pane_cp014

0xb562,	// (0x00057b35) cell_large_graphic_popup_pane_ParamLimits

0xb562,	// (0x00057b35) cell_large_graphic_popup_pane

0xb57a,	// (0x00057b4d) cell_large_graphic_popup_pane_g1_ParamLimits

0xb57a,	// (0x00057b4d) cell_large_graphic_popup_pane_g1

0xb586,	// (0x00057b59) cell_large_graphic_popup_pane_g2_ParamLimits

0xb586,	// (0x00057b59) cell_large_graphic_popup_pane_g2

0xb592,	// (0x00057b65) cell_large_graphic_popup_pane_g3_ParamLimits

0xb592,	// (0x00057b65) cell_large_graphic_popup_pane_g3

0xb59f,	// (0x00057b72) cell_large_graphic_popup_pane_g4_ParamLimits

0xb59f,	// (0x00057b72) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0005b955) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0005b955) cell_large_graphic_popup_pane_g

0xb5af,	// (0x00057b82) grid_highlight_pane_cp010

0xad2b,	// (0x000572fe) bg_popup_call_pane_g1

0xb5b9,	// (0x00057b8c) list_single_graphic_popup_conf_pane_ParamLimits

0xb5b9,	// (0x00057b8c) list_single_graphic_popup_conf_pane

0xb5cc,	// (0x00057b9f) list_highlight_pane_cp01

0xb5d5,	// (0x00057ba8) list_single_graphic_popup_conf_pane_g1

0xb5dd,	// (0x00057bb0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0005b95e) list_single_graphic_popup_conf_pane_g

0xb5e5,	// (0x00057bb8) list_single_graphic_popup_conf_pane_t1

0xb5f3,	// (0x00057bc6) linegrid_cams_pane_g1

0x3170,	// (0x0004f743) linegrid_cams_pane_g2

0xade3,	// (0x000573b6) linegrid_cams_pane_g3

0xb5fc,	// (0x00057bcf) linegrid_cams_pane_g4

0x3179,	// (0x0004f74c) linegrid_cams_pane_g5

0x3182,	// (0x0004f755) linegrid_cams_pane_g6

0xae94,	// (0x00057467) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0005b963) linegrid_cams_pane_g

0xb605,	// (0x00057bd8) popup_clock_analogue_window

0xb605,	// (0x00057bd8) popup_clock_digital_window

0xa997,	// (0x00056f6a) popup_phob_thumbnail_window

0xad2b,	// (0x000572fe) call_video_uplink_pane_g1

0xb60e,	// (0x00057be1) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0005b972) call_video_uplink_pane_g

0xae61,	// (0x00057434) video_uplink_pane

0xb616,	// (0x00057be9) mce_image_pane_g1

0x318d,	// (0x0004f760) mce_image_pane_g2

0x3195,	// (0x0004f768) mce_image_pane_g3

0x319d,	// (0x0004f770) mce_image_pane_g4

0x31a7,	// (0x0004f77a) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0005b977) mce_image_pane_g

0xb620,	// (0x00057bf3) control_top_pane_stacon_cp01_ParamLimits

0xb620,	// (0x00057bf3) control_top_pane_stacon_cp01

0xb634,	// (0x00057c07) uni_indicator_pane_stacon_cp01_ParamLimits

0xb634,	// (0x00057c07) uni_indicator_pane_stacon_cp01

0xb645,	// (0x00057c18) bg_popup_sub_pane_cp03

0x31af,	// (0x0004f782) chi_dic_find_pane

0x31b7,	// (0x0004f78a) listscroll_chi_dic_pane

0x31c0,	// (0x0004f793) main_pane_chidic_g1

0xb64f,	// (0x00057c22) chi_dic_find_pane_t1

0xb65d,	// (0x00057c30) find_chidic_pane

0xb666,	// (0x00057c39) chi_dic_list_pane_ParamLimits

0xb666,	// (0x00057c39) chi_dic_list_pane

0xb677,	// (0x00057c4a) scroll_pane_cp020

0xb67f,	// (0x00057c52) find_chidic_pane_t1

0xa997,	// (0x00056f6a) input_focus_pane_cp06

0x31d3,	// (0x0004f7a6) list_chi_dic_pane_ParamLimits

0x31d3,	// (0x0004f7a6) list_chi_dic_pane

0x31e6,	// (0x0004f7b9) list_chi_dic_pane_t1_ParamLimits

0x31e6,	// (0x0004f7b9) list_chi_dic_pane_t1

0xa997,	// (0x00056f6a) list_highlight_pane_cp020

0xb68e,	// (0x00057c61) bg_cale_heading_pane_g1

0x31f9,	// (0x0004f7cc) bg_cale_heading_pane_g2

0x3201,	// (0x0004f7d4) bg_cale_heading_pane_g3

0x3209,	// (0x0004f7dc) bg_cale_heading_pane_g4

0x3213,	// (0x0004f7e6) bg_cale_heading_pane_g5

0x321d,	// (0x0004f7f0) bg_cale_heading_pane_g6

0x3225,	// (0x0004f7f8) bg_cale_heading_pane_g7

0x322d,	// (0x0004f800) bg_cale_heading_pane_g8

0x3237,	// (0x0004f80a) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0005b982) bg_cale_heading_pane_g

0xb68e,	// (0x00057c61) bg_cale_side_pane_g1

0x3241,	// (0x0004f814) bg_cale_side_pane_g2

0x3249,	// (0x0004f81c) bg_cale_side_pane_g3

0x3251,	// (0x0004f824) bg_cale_side_pane_g4

0x3259,	// (0x0004f82c) bg_cale_side_pane_g5

0x3261,	// (0x0004f834) bg_cale_side_pane_g6

0x3269,	// (0x0004f83c) bg_cale_side_pane_g7

0x3271,	// (0x0004f844) bg_cale_side_pane_g8

0x3279,	// (0x0004f84c) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0005b995) bg_cale_side_pane_g

0x3281,	// (0x0004f854) popup_call_status_window_ParamLimits

0x3281,	// (0x0004f854) popup_call_status_window

0xb696,	// (0x00057c69) stacon_top_pane

0xb69e,	// (0x00057c71) status_pane_ParamLimits

0xb69e,	// (0x00057c71) status_pane

0xb6b3,	// (0x00057c86) status_small_pane

0xb6bb,	// (0x00057c8e) control_pane

0xa997,	// (0x00056f6a) stacon_bottom_pane

0xb6c3,	// (0x00057c96) list_single_mce_smart_pane_t1_ParamLimits

0xb6c3,	// (0x00057c96) list_single_mce_smart_pane_t1

0xb6d6,	// (0x00057ca9) list_single_mce_smart_pane_t2_ParamLimits

0xb6d6,	// (0x00057ca9) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0005b9a8) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0005b9a8) list_single_mce_smart_pane_t

0x32c8,	// (0x0004f89b) compass_pane

0x32d1,	// (0x0004f8a4) main_location2_pane_t1

0x32e3,	// (0x0004f8b6) main_location2_pane_t2

0x32f5,	// (0x0004f8c8) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0005b9ad) main_location2_pane_t

0xb6f5,	// (0x00057cc8) compass_pane_g1_ParamLimits

0xb6f5,	// (0x00057cc8) compass_pane_g1

0x333b,	// (0x0004f90e) compass_pane_t1

0x334a,	// (0x0004f91d) compass_pane_t2

0x0005,

0xf3e3,	// (0x0005b9b6) compass_pane_t

0x3391,	// (0x0004f964) text_secondary_cp61

0xb709,	// (0x00057cdc) navi_pane_cams_g5

0xb72c,	// (0x00057cff) navi_pane_im_t1

0xb73a,	// (0x00057d0d) navi_pane_mp_g1_ParamLimits

0xb73a,	// (0x00057d0d) navi_pane_mp_g1

0xb74e,	// (0x00057d21) navi_pane_mp_g2_ParamLimits

0xb74e,	// (0x00057d21) navi_pane_mp_g2

0xb75a,	// (0x00057d2d) navi_pane_mp_g3_ParamLimits

0xb75a,	// (0x00057d2d) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0005b9ca) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0005b9ca) navi_pane_mp_g

0xb766,	// (0x00057d39) navi_pane_mp_t1

0xb774,	// (0x00057d47) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0005b9d1) navi_pane_mp_t

0xb7b0,	// (0x00057d83) navi_pane_vt_g1

0xb766,	// (0x00057d39) navi_pane_vt_t1

0xb7b8,	// (0x00057d8b) navi_slider_pane

0xb7c0,	// (0x00057d93) zooming_pane

0xb7c8,	// (0x00057d9b) navi_slider_pane_g1

0x9df2,	// (0x000563c5) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0005b9d8) navi_slider_pane_g

0xb7ec,	// (0x00057dbf) aid_levels_zoom

0xb7f4,	// (0x00057dc7) zooming_pane_g1

0xb7fc,	// (0x00057dcf) zooming_pane_g2

0xb7fc,	// (0x00057dcf) zooming_pane_g3

0x0002,

0xf414,	// (0x0005b9e7) zooming_pane_g

0xb804,	// (0x00057dd7) level_10_zoom

0xb80d,	// (0x00057de0) level_11_zoom

0xb816,	// (0x00057de9) level_1_zoom

0xb81f,	// (0x00057df2) level_2_zoom

0xb828,	// (0x00057dfb) level_3_zoom

0xb831,	// (0x00057e04) level_4_zoom

0xb83a,	// (0x00057e0d) level_5_zoom

0xb843,	// (0x00057e16) level_6_zoom

0xb84c,	// (0x00057e1f) level_7_zoom

0xb855,	// (0x00057e28) level_8_zoom

0xb85e,	// (0x00057e31) level_9_zoom

0xb86f,	// (0x00057e42) popup_phob_thumbnail_window_g1

0xb877,	// (0x00057e4a) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0005b9ee) popup_phob_thumbnail_window_g

0xcb6b,	// (0x0005913e) level_1_location

0xcb73,	// (0x00059146) level_2_location

0xcb7b,	// (0x0005914e) level_3_location

0xcb83,	// (0x00059156) level_4_location

0xb7c0,	// (0x00057d93) level_5_location

0x34d8,	// (0x0004faab) mce_icon_pane_g1

0x34e2,	// (0x0004fab5) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0005b9f3) mce_icon_pane_g

0x34ec,	// (0x0004fabf) main_mup_pane_g1_ParamLimits

0x34ec,	// (0x0004fabf) main_mup_pane_g1

0x3502,	// (0x0004fad5) main_mup_pane_g2_ParamLimits

0x3502,	// (0x0004fad5) main_mup_pane_g2

0x351a,	// (0x0004faed) main_mup_pane_g3_ParamLimits

0x351a,	// (0x0004faed) main_mup_pane_g3

0x3532,	// (0x0004fb05) main_mup_pane_g4_ParamLimits

0x3532,	// (0x0004fb05) main_mup_pane_g4

0x354a,	// (0x0004fb1d) main_mup_pane_g5_ParamLimits

0x354a,	// (0x0004fb1d) main_mup_pane_g5

0x3566,	// (0x0004fb39) main_mup_pane_g6_ParamLimits

0x3566,	// (0x0004fb39) main_mup_pane_g6

0x357e,	// (0x0004fb51) main_mup_pane_g7_ParamLimits

0x357e,	// (0x0004fb51) main_mup_pane_g7

0x3596,	// (0x0004fb69) main_mup_pane_g8_ParamLimits

0x3596,	// (0x0004fb69) main_mup_pane_g8

0x35ae,	// (0x0004fb81) main_mup_pane_g9_ParamLimits

0x35ae,	// (0x0004fb81) main_mup_pane_g9

0x35c8,	// (0x0004fb9b) main_mup_pane_g10_ParamLimits

0x35c8,	// (0x0004fb9b) main_mup_pane_g10

0x35e2,	// (0x0004fbb5) main_mup_pane_g11_ParamLimits

0x35e2,	// (0x0004fbb5) main_mup_pane_g11

0x35f6,	// (0x0004fbc9) main_mup_pane_g12_ParamLimits

0x35f6,	// (0x0004fbc9) main_mup_pane_g12

0x360c,	// (0x0004fbdf) main_mup_pane_g13_ParamLimits

0x360c,	// (0x0004fbdf) main_mup_pane_g13

0x000c,

0xf425,	// (0x0005b9f8) main_mup_pane_g_ParamLimits

0xf425,	// (0x0005b9f8) main_mup_pane_g

0x3620,	// (0x0004fbf3) main_mup_pane_t1_ParamLimits

0x3620,	// (0x0004fbf3) main_mup_pane_t1

0x363a,	// (0x0004fc0d) main_mup_pane_t2_ParamLimits

0x363a,	// (0x0004fc0d) main_mup_pane_t2

0x3652,	// (0x0004fc25) main_mup_pane_t3_ParamLimits

0x3652,	// (0x0004fc25) main_mup_pane_t3

0x366a,	// (0x0004fc3d) main_mup_pane_t4_ParamLimits

0x366a,	// (0x0004fc3d) main_mup_pane_t4

0x3688,	// (0x0004fc5b) main_mup_pane_t5_ParamLimits

0x3688,	// (0x0004fc5b) main_mup_pane_t5

0x369d,	// (0x0004fc70) main_mup_pane_t6_ParamLimits

0x369d,	// (0x0004fc70) main_mup_pane_t6

0x0005,

0xf440,	// (0x0005ba13) main_mup_pane_t_ParamLimits

0xf440,	// (0x0005ba13) main_mup_pane_t

0x36af,	// (0x0004fc82) mup_progress_pane_ParamLimits

0x36af,	// (0x0004fc82) mup_progress_pane

0x36bb,	// (0x0004fc8e) mup_visualizer_pane_ParamLimits

0x36bb,	// (0x0004fc8e) mup_visualizer_pane

0x36ef,	// (0x0004fcc2) mup_volume_pane_ParamLimits

0x36ef,	// (0x0004fcc2) mup_volume_pane

0xb87f,	// (0x00057e52) mup_visualizer_pane_g1_ParamLimits

0xb87f,	// (0x00057e52) mup_visualizer_pane_g1

0xb87f,	// (0x00057e52) mup_visualizer_pane_g2_ParamLimits

0xb87f,	// (0x00057e52) mup_visualizer_pane_g2

0xb6f5,	// (0x00057cc8) mup_visualizer_pane_g3_ParamLimits

0xb6f5,	// (0x00057cc8) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0005ba20) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0005ba20) mup_visualizer_pane_g

0xad2b,	// (0x000572fe) mup_volume_pane_g1

0xb895,	// (0x00057e68) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0005ba27) mup_volume_pane_g

0xad2b,	// (0x000572fe) mup_progress_pane_g1

0xb89e,	// (0x00057e71) mup_progress_pane_g2

0xb8a7,	// (0x00057e7a) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0005ba2c) mup_progress_pane_g

0xa997,	// (0x00056f6a) bg_popup_window_pane_cp05

0xb8b0,	// (0x00057e83) heading_pane_cp02_ParamLimits

0xb8b0,	// (0x00057e83) heading_pane_cp02

0xb8ca,	// (0x00057e9d) list_popup_blid_pane

0xb8d2,	// (0x00057ea5) list_blid_sat_info_pane_ParamLimits

0xb8d2,	// (0x00057ea5) list_blid_sat_info_pane

0xb8e5,	// (0x00057eb8) list_blid_sat_info_pane_g1

0xb8ed,	// (0x00057ec0) list_blid_sat_info_pane_t1

0x3805,	// (0x0004fdd8) mup_equalizer_pane_ParamLimits

0x3805,	// (0x0004fdd8) mup_equalizer_pane

0x381e,	// (0x0004fdf1) mup_equalizer_pane_cp1_ParamLimits

0x381e,	// (0x0004fdf1) mup_equalizer_pane_cp1

0x383b,	// (0x0004fe0e) mup_equalizer_pane_cp2_ParamLimits

0x383b,	// (0x0004fe0e) mup_equalizer_pane_cp2

0x3858,	// (0x0004fe2b) mup_equalizer_pane_cp3_ParamLimits

0x3858,	// (0x0004fe2b) mup_equalizer_pane_cp3

0x3879,	// (0x0004fe4c) mup_equalizer_pane_cp4_ParamLimits

0x3879,	// (0x0004fe4c) mup_equalizer_pane_cp4

0x389a,	// (0x0004fe6d) mup_equalizer_pane_cp5

0x38ae,	// (0x0004fe81) mup_equalizer_pane_cp6

0x38c2,	// (0x0004fe95) mup_equalizer_pane_cp7

0xca89,	// (0x0005905c) bg_popup_call_poc_act_pane_g9

0xca91,	// (0x00059064) bg_popup_call_poc_act_pane_g10

0xca99,	// (0x0005906c) bg_popup_call_poc_act_pane_g11

0x000a,

0xabf2,	// (0x000571c5) mup_scale_pane

0xad2b,	// (0x000572fe) mup_scale_pane_g1

0xb8fb,	// (0x00057ece) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0005ba48) mup_scale_pane_g

0xb91f,	// (0x00057ef2) msg_data_pane

0xb927,	// (0x00057efa) scroll_pane_cp017

0x38e8,	// (0x0004febb) bg_list_pane_cp04_ParamLimits

0x38e8,	// (0x0004febb) bg_list_pane_cp04

0xb92f,	// (0x00057f02) msg_data_pane_g1

0x3908,	// (0x0004fedb) msg_data_pane_g2

0x3910,	// (0x0004fee3) msg_data_pane_g3

0x3918,	// (0x0004feeb) msg_data_pane_g4

0x3920,	// (0x0004fef3) msg_data_pane_g5

0x3928,	// (0x0004fefb) msg_data_pane_g6

0x3930,	// (0x0004ff03) msg_data_pane_g7

0x0006,

0xf484,	// (0x0005ba57) msg_data_pane_g

0x0401,	// (0x0004c9d4) msg_text_pane_ParamLimits

0x0401,	// (0x0004c9d4) msg_text_pane

0x3938,	// (0x0004ff0b) qrid_highlight_pane_cp011_ParamLimits

0x3938,	// (0x0004ff0b) qrid_highlight_pane_cp011

0xa997,	// (0x00056f6a) msg_body_pane

0xa997,	// (0x00056f6a) msg_header_pane

0xb937,	// (0x00057f0a) input_focus_pane_cp07

0x3959,	// (0x0004ff2c) msg_header_pane_t1_ParamLimits

0x3959,	// (0x0004ff2c) msg_header_pane_t1

0x396b,	// (0x0004ff3e) msg_header_pane_t2_ParamLimits

0x396b,	// (0x0004ff3e) msg_header_pane_t2

0x0001,

0xf498,	// (0x0005ba6b) msg_header_pane_t_ParamLimits

0xf498,	// (0x0005ba6b) msg_header_pane_t

0xb94c,	// (0x00057f1f) msg_body_pane_g1

0x397d,	// (0x0004ff50) msg_body_pane_t1_ParamLimits

0x397d,	// (0x0004ff50) msg_body_pane_t1

0x39ae,	// (0x0004ff81) msg_body_pane_t2_ParamLimits

0x39ae,	// (0x0004ff81) msg_body_pane_t2

0x39c0,	// (0x0004ff93) msg_body_pane_t3_ParamLimits

0x39c0,	// (0x0004ff93) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0005ba70) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0005ba70) msg_body_pane_t

0x3a0c,	// (0x0004ffdf) main_viewer_pane_g1_ParamLimits

0x3a0c,	// (0x0004ffdf) main_viewer_pane_g1

0x3a1a,	// (0x0004ffed) main_viewer_pane_g2_ParamLimits

0x3a1a,	// (0x0004ffed) main_viewer_pane_g2

0x3a28,	// (0x0004fffb) main_viewer_pane_g3_ParamLimits

0x3a28,	// (0x0004fffb) main_viewer_pane_g3

0x3a37,	// (0x0005000a) main_viewer_pane_g4_ParamLimits

0x3a37,	// (0x0005000a) main_viewer_pane_g4

0x9e1c,	// (0x000563ef) main_viewer_pane_g5_ParamLimits

0x9e1c,	// (0x000563ef) main_viewer_pane_g5

0x9e1c,	// (0x000563ef) main_viewer_pane_g7_ParamLimits

0x9e1c,	// (0x000563ef) main_viewer_pane_g7

0x9e2e,	// (0x00056401) main_viewer_pane_g8_ParamLimits

0x9e2e,	// (0x00056401) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0005ba80) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0005ba80) main_viewer_pane_g

0xb954,	// (0x00057f27) viewer_content_pane_ParamLimits

0xb954,	// (0x00057f27) viewer_content_pane

0x3a73,	// (0x00050046) main_postcard_pane_g1_ParamLimits

0x3a73,	// (0x00050046) main_postcard_pane_g1

0x3a89,	// (0x0005005c) main_postcard_pane_g2_ParamLimits

0x3a89,	// (0x0005005c) main_postcard_pane_g2

0x3a9f,	// (0x00050072) main_postcard_pane_g3_ParamLimits

0x3a9f,	// (0x00050072) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0005ba91) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0005ba91) main_postcard_pane_g

0x3ab6,	// (0x00050089) main_postcard_pane_g4

0xcc6b,	// (0x0005923e) smil_status_volume_pane_g2

0x3af9,	// (0x000500cc) postcard_pane_ParamLimits

0x3af9,	// (0x000500cc) postcard_pane

0xb962,	// (0x00057f35) postcard_pane_g1_ParamLimits

0xb962,	// (0x00057f35) postcard_pane_g1

0x3b3b,	// (0x0005010e) postcard_pane_g2_ParamLimits

0x3b3b,	// (0x0005010e) postcard_pane_g2

0x3b47,	// (0x0005011a) postcard_pane_g3_ParamLimits

0x3b47,	// (0x0005011a) postcard_pane_g3

0xb970,	// (0x00057f43) postcard_pane_g4_ParamLimits

0xb970,	// (0x00057f43) postcard_pane_g4

0x3b53,	// (0x00050126) postcard_pane_g5_ParamLimits

0x3b53,	// (0x00050126) postcard_pane_g5

0x3b68,	// (0x0005013b) postcard_pane_g6_ParamLimits

0x3b68,	// (0x0005013b) postcard_pane_g6

0xb962,	// (0x00057f35) postcard_pane_g7_ParamLimits

0xb962,	// (0x00057f35) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0005ba9e) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0005ba9e) postcard_pane_g

0x3b7c,	// (0x0005014f) main_mp2_pane_g1_ParamLimits

0x3b7c,	// (0x0005014f) main_mp2_pane_g1

0x3b88,	// (0x0005015b) main_mp2_pane_g2_ParamLimits

0x3b88,	// (0x0005015b) main_mp2_pane_g2

0x3b94,	// (0x00050167) main_mp2_pane_g3_ParamLimits

0x3b94,	// (0x00050167) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0005baad) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0005baad) main_mp2_pane_g

0x3ba0,	// (0x00050173) main_mp2_pane_t1_ParamLimits

0x3ba0,	// (0x00050173) main_mp2_pane_t1

0x3bb5,	// (0x00050188) main_mp2_pane_t2_ParamLimits

0x3bb5,	// (0x00050188) main_mp2_pane_t2

0x3bc7,	// (0x0005019a) main_mp2_pane_t3_ParamLimits

0x3bc7,	// (0x0005019a) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0005bab4) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0005bab4) main_mp2_pane_t

0xb97e,	// (0x00057f51) pec_content_pane_ParamLimits

0xb97e,	// (0x00057f51) pec_content_pane

0xb050,	// (0x00057623) scroll_pane_cp015

0xb990,	// (0x00057f63) pec_attribute_pane_ParamLimits

0xb990,	// (0x00057f63) pec_attribute_pane

0x3bd9,	// (0x000501ac) pec_content_pane_g1_ParamLimits

0x3bd9,	// (0x000501ac) pec_content_pane_g1

0xb9a0,	// (0x00057f73) pec_content_pane_t1_ParamLimits

0xb9a0,	// (0x00057f73) pec_content_pane_t1

0xb9b2,	// (0x00057f85) pec_content_pane_t2_ParamLimits

0xb9b2,	// (0x00057f85) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0005babb) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0005babb) pec_content_pane_t

0x3be5,	// (0x000501b8) list_single_graphic_pane_cp01_ParamLimits

0x3be5,	// (0x000501b8) list_single_graphic_pane_cp01

0xabf2,	// (0x000571c5) bg_popup_sub_pane_cp04

0xb9c4,	// (0x00057f97) popup_mup_playback_window_g1

0xb9d0,	// (0x00057fa3) popup_mup_playback_window_t1

0xb9e5,	// (0x00057fb8) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0005bac0) popup_mup_playback_window_t

0xba1c,	// (0x00057fef) main_image_pane_g1_ParamLimits

0xba1c,	// (0x00057fef) main_image_pane_g1

0xba5f,	// (0x00058032) scroll_pane_cp018_ParamLimits

0xba5f,	// (0x00058032) scroll_pane_cp018

0xba77,	// (0x0005804a) scroll_pane_cp016_ParamLimits

0xba77,	// (0x0005804a) scroll_pane_cp016

0x3cb4,	// (0x00050287) smil2_image_pane_ParamLimits

0x3cb4,	// (0x00050287) smil2_image_pane

0x3ce8,	// (0x000502bb) smil2_root_pane_ParamLimits

0x3ce8,	// (0x000502bb) smil2_root_pane

0x3d20,	// (0x000502f3) smil2_text_pane_ParamLimits

0x3d20,	// (0x000502f3) smil2_text_pane

0xa997,	// (0x00056f6a) bg_list_pane_cp06

0xbab3,	// (0x00058086) grid_radio_pane

0xa997,	// (0x00056f6a) bg_popup_window_pane_cp06

0xbabb,	// (0x0005808e) main_fmradio_pane_t1

0xb538,	// (0x00057b0b) heading_pane_cp04

0xbac9,	// (0x0005809c) main_fmradio_pane_t2

0xcaa1,	// (0x00059074) popup_cale_lunar_info_window_g1

0xbad7,	// (0x000580aa) main_fmradio_pane_t3

0xcaa9,	// (0x0005907c) popup_cale_lunar_info_window_g2

0xbae5,	// (0x000580b8) main_fmradio_pane_t4

0x0001,

0xbaf3,	// (0x000580c6) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0005bb9b) popup_cale_lunar_info_window_g

0xf502,	// (0x0005bad5) main_fmradio_pane_t

0xbb01,	// (0x000580d4) wait_bar_pane_cp03

0xbb09,	// (0x000580dc) cell_fmradio_pane_ParamLimits

0xbb09,	// (0x000580dc) cell_fmradio_pane

0xb962,	// (0x00057f35) cell_fmradio_pane_g1_ParamLimits

0xb962,	// (0x00057f35) cell_fmradio_pane_g1

0xa997,	// (0x00056f6a) grid_highlight_pane_cp011

0xbb1c,	// (0x000580ef) poc_content_pane_ParamLimits

0xbb1c,	// (0x000580ef) poc_content_pane

0xbb2e,	// (0x00058101) scroll_pane_cp019

0x3da0,	// (0x00050373) popup_call_poc_act_window_ParamLimits

0x3da0,	// (0x00050373) popup_call_poc_act_window

0x3dc4,	// (0x00050397) popup_call_poc_inact_window_ParamLimits

0x3dc4,	// (0x00050397) popup_call_poc_inact_window

0xf59f,	// (0x0005bb72) bg_popup_call_poc_act_pane_g

0xca19,	// (0x00058fec) bg_popup_call_poc_inact_pane_g1

0xca21,	// (0x00058ff4) bg_popup_call_poc_inact_pane_g2

0xbb36,	// (0x00058109) popup_call_poc_act_window_g2

0xca29,	// (0x00058ffc) bg_popup_call_poc_inact_pane_g3

0xca31,	// (0x00059004) bg_popup_call_poc_inact_pane_g4

0xca39,	// (0x0005900c) bg_popup_call_poc_inact_pane_g5

0xbb3e,	// (0x00058111) popup_call_poc_act_window_t1_ParamLimits

0xbb3e,	// (0x00058111) popup_call_poc_act_window_t1

0xbb66,	// (0x00058139) popup_call_poc_act_window_t2_ParamLimits

0xbb66,	// (0x00058139) popup_call_poc_act_window_t2

0xbb8e,	// (0x00058161) popup_call_poc_act_window_t3_ParamLimits

0xbb8e,	// (0x00058161) popup_call_poc_act_window_t3

0xbbb6,	// (0x00058189) popup_call_poc_act_window_t4_ParamLimits

0xbbb6,	// (0x00058189) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0005bae0) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0005bae0) popup_call_poc_act_window_t

0xca41,	// (0x00059014) bg_popup_call_poc_inact_pane_g6

0xca49,	// (0x0005901c) bg_popup_call_poc_inact_pane_g7

0xca51,	// (0x00059024) bg_popup_call_poc_inact_pane_g8

0xbbc8,	// (0x0005819b) popup_call_poc_inact_window_g2

0xca59,	// (0x0005902c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0005bb5f) bg_popup_call_poc_inact_pane_g

0xbbd0,	// (0x000581a3) popup_call_poc_inact_window_t1_ParamLimits

0xbbd0,	// (0x000581a3) popup_call_poc_inact_window_t1

0xbbe5,	// (0x000581b8) popup_call_poc_inact_window_t2_ParamLimits

0xbbe5,	// (0x000581b8) popup_call_poc_inact_window_t2

0xbbfa,	// (0x000581cd) popup_call_poc_inact_window_t3_ParamLimits

0xbbfa,	// (0x000581cd) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0005bae9) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0005bae9) popup_call_poc_inact_window_t

0xcbde,	// (0x000591b1) context_pane_ParamLimits

0x45db,	// (0x00050bae) signal_pane_ParamLimits

0xb7c0,	// (0x00057d93) main_call2_pane

0x9e73,	// (0x00056446) popup_phob_thumbnail2_window_ParamLimits

0x9e73,	// (0x00056446) popup_phob_thumbnail2_window

0x9e04,	// (0x000563d7) aid_hotspot_pointer_arrow_pane

0x9e0c,	// (0x000563df) aid_hotspot_pointer_hand_pane

0x410f,	// (0x000506e2) phob_pre_status_pane_g5

0x1c9e,	// (0x0004e271) cams_zoom_pane_ParamLimits

0x1cad,	// (0x0004e280) image_vga_pane_ParamLimits

0x1cc7,	// (0x0004e29a) main_camera_pane_g1_ParamLimits

0x1cd9,	// (0x0004e2ac) main_camera_pane_g2_ParamLimits

0x1ce9,	// (0x0004e2bc) main_camera_pane_g3_ParamLimits

0x1cfb,	// (0x0004e2ce) main_camera_pane_g4_ParamLimits

0x1d0d,	// (0x0004e2e0) main_camera_pane_g5_ParamLimits

0x1d1f,	// (0x0004e2f2) main_camera_pane_g6_ParamLimits

0x1d31,	// (0x0004e304) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0005b7e8) main_camera_pane_g_ParamLimits

0x1d43,	// (0x0004e316) main_camera_pane_t1_ParamLimits

0x1d59,	// (0x0004e32c) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0005b7f9) main_camera_pane_t_ParamLimits

0xabf2,	// (0x000571c5) bg_popup_preview_window_pane_cp01_ParamLimits

0xabf2,	// (0x000571c5) bg_popup_preview_window_pane_cp01

0xbc0f,	// (0x000581e2) popup_phob_thumbnail2_window_g1_ParamLimits

0xbc0f,	// (0x000581e2) popup_phob_thumbnail2_window_g1

0xa997,	// (0x00056f6a) call2_cli_visual_pane

0x3df8,	// (0x000503cb) popup_call2_audio_conf_window_ParamLimits

0x3df8,	// (0x000503cb) popup_call2_audio_conf_window

0x3e18,	// (0x000503eb) popup_call2_audio_first_window_ParamLimits

0x3e18,	// (0x000503eb) popup_call2_audio_first_window

0x3eae,	// (0x00050481) popup_call2_audio_in_window_ParamLimits

0x3eae,	// (0x00050481) popup_call2_audio_in_window

0x3ef6,	// (0x000504c9) popup_call2_audio_out_window_ParamLimits

0x3ef6,	// (0x000504c9) popup_call2_audio_out_window

0x3f60,	// (0x00050533) popup_call2_audio_second_window_ParamLimits

0x3f60,	// (0x00050533) popup_call2_audio_second_window

0x3fc6,	// (0x00050599) popup_call2_audio_wait_window_ParamLimits

0x3fc6,	// (0x00050599) popup_call2_audio_wait_window

0xa997,	// (0x00056f6a) bg_popup_call2_act_pane_cp03

0xabd4,	// (0x000571a7) list_conf_pane_cp

0xbc1b,	// (0x000581ee) popup_call2_audio_conf_window_t1

0xbc29,	// (0x000581fc) list_single_graphic_popup_conf2_pane_ParamLimits

0xbc29,	// (0x000581fc) list_single_graphic_popup_conf2_pane

0xb5cc,	// (0x00057b9f) list_highlight_pane_cp04

0xbc3c,	// (0x0005820f) list_single_graphic_popup_conf2_pane_g1

0xb5dd,	// (0x00057bb0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0005baf0) list_single_graphic_popup_conf2_pane_g

0xbc46,	// (0x00058219) list_single_graphic_popup_conf2_pane_t1

0xbc54,	// (0x00058227) bg_popup_call2_act_pane_cp01_ParamLimits

0xbc54,	// (0x00058227) bg_popup_call2_act_pane_cp01

0xbcde,	// (0x000582b1) call_type_pane_cp05_ParamLimits

0xbcde,	// (0x000582b1) call_type_pane_cp05

0xbd32,	// (0x00058305) popup_call2_audio_second_window_g1_ParamLimits

0xbd32,	// (0x00058305) popup_call2_audio_second_window_g1

0xbd86,	// (0x00058359) popup_call2_audio_second_window_g2_ParamLimits

0xbd86,	// (0x00058359) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0005baf5) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0005baf5) popup_call2_audio_second_window_g

0xbdeb,	// (0x000583be) popup_call2_audio_second_window_t1_ParamLimits

0xbdeb,	// (0x000583be) popup_call2_audio_second_window_t1

0xbea6,	// (0x00058479) popup_call2_audio_second_window_t2_ParamLimits

0xbea6,	// (0x00058479) popup_call2_audio_second_window_t2

0xbef9,	// (0x000584cc) popup_call2_audio_second_window_t3_ParamLimits

0xbef9,	// (0x000584cc) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0005bafc) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0005bafc) popup_call2_audio_second_window_t

0xa997,	// (0x00056f6a) bg_popup_call2_in_pane_cp02

0xa9a1,	// (0x00056f74) call_type_pane_cp04

0xa9a9,	// (0x00056f7c) popup_call2_audio_wait_window_g1

0xa9b1,	// (0x00056f84) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0005b6d5) popup_call2_audio_wait_window_g

0xa9b9,	// (0x00056f8c) popup_call2_audio_wait_window_t3

0xbfec,	// (0x000585bf) bg_popup_call2_act_pane_ParamLimits

0xbfec,	// (0x000585bf) bg_popup_call2_act_pane

0xc0ac,	// (0x0005867f) call_type_pane_cp03_ParamLimits

0xc0ac,	// (0x0005867f) call_type_pane_cp03

0xc110,	// (0x000586e3) popup_call2_audio_first_window_g1_ParamLimits

0xc110,	// (0x000586e3) popup_call2_audio_first_window_g1

0xc180,	// (0x00058753) popup_call2_audio_first_window_g2_ParamLimits

0xc180,	// (0x00058753) popup_call2_audio_first_window_g2

0xb87f,	// (0x00057e52) popup_call2_audio_first_window_g3_ParamLimits

0xb87f,	// (0x00057e52) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0005bb05) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0005bb05) popup_call2_audio_first_window_g

0xc25e,	// (0x00058831) popup_call2_audio_first_window_t1_ParamLimits

0xc25e,	// (0x00058831) popup_call2_audio_first_window_t1

0xc361,	// (0x00058934) popup_call2_audio_first_window_t4_ParamLimits

0xc361,	// (0x00058934) popup_call2_audio_first_window_t4

0xc444,	// (0x00058a17) popup_call2_audio_first_window_t5_ParamLimits

0xc444,	// (0x00058a17) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0005bb10) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0005bb10) popup_call2_audio_first_window_t

0xabea,	// (0x000571bd) bg_popup_call2_act_pane_g1

0xcab1,	// (0x00059084) popup_cale_lunar_info_window_t1

0xcabf,	// (0x00059092) popup_cale_lunar_info_window_t2

0xcacd,	// (0x000590a0) popup_cale_lunar_info_window_t3

0xa997,	// (0x00056f6a) bg_popup_call2_bubble_pane

0xc545,	// (0x00058b18) bg_popup_call2_in_pane_cp01_ParamLimits

0xc545,	// (0x00058b18) bg_popup_call2_in_pane_cp01

0x9bc2,	// (0x00056195) call_type_pane_cp02

0xc58d,	// (0x00058b60) popup_call2_audio_out_window_g1_ParamLimits

0xc58d,	// (0x00058b60) popup_call2_audio_out_window_g1

0xc5b9,	// (0x00058b8c) popup_call2_audio_out_window_g2_ParamLimits

0xc5b9,	// (0x00058b8c) popup_call2_audio_out_window_g2

0xc5e1,	// (0x00058bb4) popup_call2_audio_out_window_g3_ParamLimits

0xc5e1,	// (0x00058bb4) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0005bb19) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0005bb19) popup_call2_audio_out_window_g

0xc61c,	// (0x00058bef) popup_call2_audio_out_window_t1_ParamLimits

0xc61c,	// (0x00058bef) popup_call2_audio_out_window_t1

0xc67b,	// (0x00058c4e) popup_call2_audio_out_window_t2_ParamLimits

0xc67b,	// (0x00058c4e) popup_call2_audio_out_window_t2

0xc6cf,	// (0x00058ca2) popup_call2_audio_out_window_t3_ParamLimits

0xc6cf,	// (0x00058ca2) popup_call2_audio_out_window_t3

0xc6e5,	// (0x00058cb8) popup_call2_audio_out_window_t4_ParamLimits

0xc6e5,	// (0x00058cb8) popup_call2_audio_out_window_t4

0xc6fb,	// (0x00058cce) popup_call2_audio_out_window_t5_ParamLimits

0xc6fb,	// (0x00058cce) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0005bb22) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0005bb22) popup_call2_audio_out_window_t

0xc75f,	// (0x00058d32) bg_popup_call2_in_pane_ParamLimits

0xc75f,	// (0x00058d32) bg_popup_call2_in_pane

0xc7bb,	// (0x00058d8e) popup_call2_audio_in_window_g1_ParamLimits

0xc7bb,	// (0x00058d8e) popup_call2_audio_in_window_g1

0xc7f3,	// (0x00058dc6) popup_call2_audio_in_window_g2_ParamLimits

0xc7f3,	// (0x00058dc6) popup_call2_audio_in_window_g2

0xc82b,	// (0x00058dfe) popup_call2_audio_in_window_g3_ParamLimits

0xc82b,	// (0x00058dfe) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0005bb2f) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0005bb2f) popup_call2_audio_in_window_g

0xc883,	// (0x00058e56) popup_call2_audio_in_window_t1_ParamLimits

0xc883,	// (0x00058e56) popup_call2_audio_in_window_t1

0xc903,	// (0x00058ed6) popup_call2_audio_in_window_t2_ParamLimits

0xc903,	// (0x00058ed6) popup_call2_audio_in_window_t2

0xc983,	// (0x00058f56) popup_call2_audio_in_window_t3_ParamLimits

0xc983,	// (0x00058f56) popup_call2_audio_in_window_t3

0xc99d,	// (0x00058f70) popup_call2_audio_in_window_t4_ParamLimits

0xc99d,	// (0x00058f70) popup_call2_audio_in_window_t4

0xc9af,	// (0x00058f82) popup_call2_audio_in_window_t5_ParamLimits

0xc9af,	// (0x00058f82) popup_call2_audio_in_window_t5

0xc9c4,	// (0x00058f97) popup_call2_audio_in_window_t6_ParamLimits

0xc9c4,	// (0x00058f97) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0005bb38) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0005bb38) popup_call2_audio_in_window_t

0xabea,	// (0x000571bd) bg_popup_call2_in_pane_g1

0xcadb,	// (0x000590ae) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0005bba0) popup_cale_lunar_info_window_t

0xabf2,	// (0x000571c5) bg_popup_call2_rect_pane_ParamLimits

0xabf2,	// (0x000571c5) bg_popup_call2_rect_pane

0xa997,	// (0x00056f6a) call2_cli_visual_graphic_pane

0xa997,	// (0x00056f6a) call2_cli_visual_text_pane

0x9e9a,	// (0x0005646d) smil_status_volume_pane_g3

0x0002,

0xad2b,	// (0x000572fe) call2_cli_visual_graphic_pane_g1

0xad2b,	// (0x000572fe) call2_cli_visual_graphic_pane_g2

0xad2b,	// (0x000572fe) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0005bb45) call2_cli_visual_graphic_pane_g

0xc9d9,	// (0x00058fac) bg_popup_call2_rect_pane_g1

0xadc9,	// (0x0005739c) bg_popup_call2_rect_pane_g2

0xc9e1,	// (0x00058fb4) bg_popup_call2_rect_pane_g3

0xc9e9,	// (0x00058fbc) bg_popup_call2_rect_pane_g4

0xc9f1,	// (0x00058fc4) bg_popup_call2_rect_pane_g5

0xc9f9,	// (0x00058fcc) bg_popup_call2_rect_pane_g6

0xca01,	// (0x00058fd4) bg_popup_call2_rect_pane_g7

0xca09,	// (0x00058fdc) bg_popup_call2_rect_pane_g8

0xca11,	// (0x00058fe4) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0005bb4c) bg_popup_call2_rect_pane_g

0xca19,	// (0x00058fec) bg_popup_call2_bubble_pane_g1

0xca21,	// (0x00058ff4) bg_popup_call2_bubble_pane_g2

0xca29,	// (0x00058ffc) bg_popup_call2_bubble_pane_g3

0xca31,	// (0x00059004) bg_popup_call2_bubble_pane_g4

0xca39,	// (0x0005900c) bg_popup_call2_bubble_pane_g5

0xca41,	// (0x00059014) bg_popup_call2_bubble_pane_g6

0xca49,	// (0x0005901c) bg_popup_call2_bubble_pane_g7

0xca51,	// (0x00059024) bg_popup_call2_bubble_pane_g8

0xca59,	// (0x0005902c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0005bb5f) bg_popup_call2_bubble_pane_g

0x15f1,	// (0x0004dbc4) aid_cale_week_size_cell_pane

0x1d71,	// (0x0004e344) aid_cams_cif_uncrop_pane_ParamLimits

0x1d71,	// (0x0004e344) aid_cams_cif_uncrop_pane

0x1f26,	// (0x0004e4f9) aid_cams_size_cell_ParamLimits

0x1f26,	// (0x0004e4f9) aid_cams_size_cell

0x1f3a,	// (0x0004e50d) grid_cams_pane_ParamLimits

0x1f54,	// (0x0004e527) linegrid_cams_pane_ParamLimits

0x2052,	// (0x0004e625) call_video_pane_t1

0x2070,	// (0x0004e643) call_video_pane_t2

0x0001,

0xf279,	// (0x0005b84c) call_video_pane_t

0x249f,	// (0x0004ea72) aid_cale_month_size_cell_pane_ParamLimits

0x249f,	// (0x0004ea72) aid_cale_month_size_cell_pane

0xf616,	// (0x0005bbe9) smil_status_volume_pane_g

0x9ea7,	// (0x0005647a) volume_smil_pane_ParamLimits

0x9a7d,	// (0x00056050) aid_popup2_width_pane

0x1548,	// (0x0004db1b) cell_qdial_pane_g4_ParamLimits

0x1548,	// (0x0004db1b) cell_qdial_pane_g4

0x331b,	// (0x0004f8ee) aid_blid_cardinal_pane_ParamLimits

0x3327,	// (0x0004f8fa) aid_blid_destination_pane_ParamLimits

0x3327,	// (0x0004f8fa) aid_blid_destination_pane

0xabf2,	// (0x000571c5) bg_popup_call_poc_act_pane_ParamLimits

0xabf2,	// (0x000571c5) bg_popup_call_poc_act_pane

0xabf2,	// (0x000571c5) bg_popup_call_poc_inact_pane_ParamLimits

0xabf2,	// (0x000571c5) bg_popup_call_poc_inact_pane

0xca61,	// (0x00059034) bg_popup_call_poc_act_pane_g1

0xca69,	// (0x0005903c) bg_popup_call_poc_act_pane_g2

0xca71,	// (0x00059044) bg_popup_call_poc_act_pane_g3

0xca31,	// (0x00059004) bg_popup_call_poc_act_pane_g4

0xca39,	// (0x0005900c) bg_popup_call_poc_act_pane_g5

0xca79,	// (0x0005904c) bg_popup_call_poc_act_pane_g6

0xca49,	// (0x0005901c) bg_popup_call_poc_act_pane_g7

0xca81,	// (0x00059054) bg_popup_call_poc_act_pane_g8

0xa997,	// (0x00056f6a) main_usb_pane

0x9e4e,	// (0x00056421) popup_cale_lunar_info_window

0x233a,	// (0x0004e90d) im_reading_pane_t1_ParamLimits

0xafa8,	// (0x0005757b) list_im_pane_ParamLimits

0xafb9,	// (0x0005758c) scroll_pane_cp07_ParamLimits

0xa997,	// (0x00056f6a) grid_highlight_pane_cp012

0xabf2,	// (0x000571c5) mup_scale_pane_ParamLimits

0xb962,	// (0x00057f35) main_usb_pane_g1_ParamLimits

0xb962,	// (0x00057f35) main_usb_pane_g1

0x4024,	// (0x000505f7) main_usb_pane_g2_ParamLimits

0x4024,	// (0x000505f7) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0005bb89) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0005bb89) main_usb_pane_g

0x403a,	// (0x0005060d) main_usb_pane_t1_ParamLimits

0x403a,	// (0x0005060d) main_usb_pane_t1

0x404c,	// (0x0005061f) main_usb_pane_t2_ParamLimits

0x404c,	// (0x0005061f) main_usb_pane_t2

0x405e,	// (0x00050631) main_usb_pane_t3_ParamLimits

0x405e,	// (0x00050631) main_usb_pane_t3

0x4070,	// (0x00050643) main_usb_pane_t4_ParamLimits

0x4070,	// (0x00050643) main_usb_pane_t4

0x4082,	// (0x00050655) main_usb_pane_t5_ParamLimits

0x4082,	// (0x00050655) main_usb_pane_t5

0x4094,	// (0x00050667) main_usb_pane_t6_ParamLimits

0x4094,	// (0x00050667) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0005bb8e) main_usb_pane_t_ParamLimits

0x32c8,	// (0x0004f89b) aid_text_placing

0x32d1,	// (0x0004f8a4) main_location2_pane_t1_ParamLimits

0x32e3,	// (0x0004f8b6) main_location2_pane_t2_ParamLimits

0x32f5,	// (0x0004f8c8) main_location2_pane_t3_ParamLimits

0x3309,	// (0x0004f8dc) main_location2_pane_t4_ParamLimits

0x3309,	// (0x0004f8dc) main_location2_pane_t4

0xf3da,	// (0x0005b9ad) main_location2_pane_t_ParamLimits

0xac2e,	// (0x00057201) find_pinb_pane_g2_ParamLimits

0xac2e,	// (0x00057201) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0005b6fb) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0005b6fb) find_pinb_pane_g

0xac3a,	// (0x0005720d) find_pinb_pane_t1_ParamLimits

0xac4c,	// (0x0005721f) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0005b700) find_pinb_pane_t_ParamLimits

0xa997,	// (0x00056f6a) main_call3_pane

0x2982,	// (0x0004ef55) cale_month_day_heading_pane_t1_ParamLimits

0x2a08,	// (0x0004efdb) cale_month_day_heading_pane_t2_ParamLimits

0x2a99,	// (0x0004f06c) cale_month_day_heading_pane_t3_ParamLimits

0x2b2a,	// (0x0004f0fd) cale_month_day_heading_pane_t4_ParamLimits

0x2bc3,	// (0x0004f196) cale_month_day_heading_pane_t5_ParamLimits

0x2c64,	// (0x0004f237) cale_month_day_heading_pane_t6_ParamLimits

0x2d05,	// (0x0004f2d8) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0005b884) cale_month_day_heading_pane_t_ParamLimits

0xb203,	// (0x000577d6) smil_status_volume_pane

0x3b17,	// (0x000500ea) postcard_address_pane_ParamLimits

0x3b17,	// (0x000500ea) postcard_address_pane

0x3b29,	// (0x000500fc) postcard_message_pane_ParamLimits

0x3b29,	// (0x000500fc) postcard_message_pane

0x4000,	// (0x000505d3) call2_cli_visual_pane_t1_ParamLimits

0x4000,	// (0x000505d3) call2_cli_visual_pane_t1

0x480a,	// (0x00050ddd) postcard_message_pane_t1_ParamLimits

0x480a,	// (0x00050ddd) postcard_message_pane_t1

0x47f3,	// (0x00050dc6) postcard_address_pane_t1_ParamLimits

0x47f3,	// (0x00050dc6) postcard_address_pane_t1

0x47df,	// (0x00050db2) popup_call3_audio_in_window_ParamLimits

0x47df,	// (0x00050db2) popup_call3_audio_in_window

0x466c,	// (0x00050c3f) bg_popup_call3_in_pane_ParamLimits

0x466c,	// (0x00050c3f) bg_popup_call3_in_pane

0x46e0,	// (0x00050cb3) popup_call3_audio_in_window_g1_ParamLimits

0x46e0,	// (0x00050cb3) popup_call3_audio_in_window_g1

0x4700,	// (0x00050cd3) popup_call3_audio_in_window_g2_ParamLimits

0x4700,	// (0x00050cd3) popup_call3_audio_in_window_g2

0x4720,	// (0x00050cf3) popup_call3_audio_in_window_g3_ParamLimits

0x4720,	// (0x00050cf3) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0005bbf0) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0005bbf0) popup_call3_audio_in_window_g

0x4751,	// (0x00050d24) popup_call3_audio_in_window_t1_ParamLimits

0x4751,	// (0x00050d24) popup_call3_audio_in_window_t1

0x478f,	// (0x00050d62) popup_call3_audio_in_window_t2_ParamLimits

0x478f,	// (0x00050d62) popup_call3_audio_in_window_t2

0x47cd,	// (0x00050da0) popup_call3_audio_in_window_t3_ParamLimits

0x47cd,	// (0x00050da0) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0005bbf9) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0005bbf9) popup_call3_audio_in_window_t

0xb7c0,	// (0x00057d93) bg_popup_call3_rect_pane

0xc9d9,	// (0x00058fac) bg_popup_call3_rect_pane_g1

0xadc9,	// (0x0005739c) bg_popup_call3_rect_pane_g2

0xc9e1,	// (0x00058fb4) bg_popup_call3_rect_pane_g3

0xc9e9,	// (0x00058fbc) bg_popup_call3_rect_pane_g4

0xc9f1,	// (0x00058fc4) bg_popup_call3_rect_pane_g5

0xc9f9,	// (0x00058fcc) bg_popup_call3_rect_pane_g6

0xca01,	// (0x00058fd4) bg_popup_call3_rect_pane_g7

0x3705,	// (0x0004fcd8) mup_visualizer_osc_pane

0xb88d,	// (0x00057e60) mup_visualizer_spec_pane

0x469c,	// (0x00050c6f) call3_video_qcif_pane_ParamLimits

0x469c,	// (0x00050c6f) call3_video_qcif_pane

0x46ad,	// (0x00050c80) call3_video_qcif_uncrop_pane_ParamLimits

0x46ad,	// (0x00050c80) call3_video_qcif_uncrop_pane

0x46bb,	// (0x00050c8e) call3_video_subqcif_pane_ParamLimits

0x46bb,	// (0x00050c8e) call3_video_subqcif_pane

0x46cf,	// (0x00050ca2) call3_video_subqcif_uncrop_pane_ParamLimits

0x46cf,	// (0x00050ca2) call3_video_subqcif_uncrop_pane

0x4740,	// (0x00050d13) popup_call3_audio_in_window_g4_ParamLimits

0x4740,	// (0x00050d13) popup_call3_audio_in_window_g4

0x465b,	// (0x00050c2e) mup_spec_half_pane

0x4664,	// (0x00050c37) mup_spec_half_pane_cp

0xcc3e,	// (0x00059211) mup_osc_middle_pane

0xcc47,	// (0x0005921a) mup_visualizer_osc_pane_g1

0x463b,	// (0x00050c0e) mup_spec_bar_pane_ParamLimits

0x463b,	// (0x00050c0e) mup_spec_bar_pane

0xcc2b,	// (0x000591fe) mup_spec_bar_pane_g1

0xcc35,	// (0x00059208) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0005bbe4) mup_spec_bar_pane_g

0x15f1,	// (0x0004dbc4) aid_cale_week_size_cell_pane_ParamLimits

0x160b,	// (0x0004dbde) bg_cale_heading_pane_ParamLimits

0xae06,	// (0x000573d9) bg_cale_pane_cp01_ParamLimits

0x1629,	// (0x0004dbfc) cale_week_corner_pane_ParamLimits

0x1648,	// (0x0004dc1b) cale_week_day_heading_pane_ParamLimits

0x166b,	// (0x0004dc3e) cale_week_scroll_pane_g1_ParamLimits

0x1684,	// (0x0004dc57) cale_week_scroll_pane_g2_ParamLimits

0x169c,	// (0x0004dc6f) cale_week_scroll_pane_g3_ParamLimits

0x16b4,	// (0x0004dc87) cale_week_scroll_pane_g4_ParamLimits

0x16cc,	// (0x0004dc9f) cale_week_scroll_pane_g5_ParamLimits

0x16e8,	// (0x0004dcbb) cale_week_scroll_pane_g6_ParamLimits

0x1708,	// (0x0004dcdb) cale_week_scroll_pane_g7_ParamLimits

0x1728,	// (0x0004dcfb) cale_week_scroll_pane_g8_ParamLimits

0x174c,	// (0x0004dd1f) cale_week_scroll_pane_g9_ParamLimits

0x1764,	// (0x0004dd37) cale_week_scroll_pane_g10_ParamLimits

0x177c,	// (0x0004dd4f) cale_week_scroll_pane_g11_ParamLimits

0x1794,	// (0x0004dd67) cale_week_scroll_pane_g12_ParamLimits

0x17ac,	// (0x0004dd7f) cale_week_scroll_pane_g13_ParamLimits

0x17ac,	// (0x0004dd7f) cale_week_scroll_pane_g14_ParamLimits

0x17ac,	// (0x0004dd7f) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0005b78c) cale_week_scroll_pane_g_ParamLimits

0x17c4,	// (0x0004dd97) cale_week_time_pane_ParamLimits

0x17e8,	// (0x0004ddbb) grid_cale_week_pane_ParamLimits

0xae24,	// (0x000573f7) listscroll_cale_week_pane_t1

0xae36,	// (0x00057409) scroll_pane_cp08_ParamLimits

0x2500,	// (0x0004ead3) cale_month_corner_pane_ParamLimits

0xb1d9,	// (0x000577ac) cale_month_pane_t1

0x2920,	// (0x0004eef3) cale_month_week_pane_ParamLimits

0x3139,	// (0x0004f70c) popup_call_status_window_g1_ParamLimits

0x314d,	// (0x0004f720) popup_call_status_window_g2_ParamLimits

0x3161,	// (0x0004f734) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0005b934) popup_call_status_window_g_ParamLimits

0xb528,	// (0x00057afb) aid_call2_pane

0x042a,	// (0x0004c9fd) msg_header_pane_g1

0x3b17,	// (0x000500ea) postcard_address2_pane_ParamLimits

0x3b17,	// (0x000500ea) postcard_address2_pane

0x3b29,	// (0x000500fc) postcard_message2_pane_ParamLimits

0x3b29,	// (0x000500fc) postcard_message2_pane

0x45e9,	// (0x00050bbc) message2_row_pane_ParamLimits

0x45e9,	// (0x00050bbc) message2_row_pane

0x4608,	// (0x00050bdb) address2_row_pane_ParamLimits

0x4608,	// (0x00050bdb) address2_row_pane

0xcbf9,	// (0x000591cc) postcard_message2_row_pane_g1

0xcc01,	// (0x000591d4) postcard_message2_row_pane_t1

0xcbf9,	// (0x000591cc) address2_row_pane_g1

0xcc01,	// (0x000591d4) address2_row_pane_t1

0x1c03,	// (0x0004e1d6) aid_size_cell_vorec

0xa997,	// (0x00056f6a) main_rss_pane

0x461b,	// (0x00050bee) rss_list_single_pane_ParamLimits

0x461b,	// (0x00050bee) rss_list_single_pane

0xcc0f,	// (0x000591e2) rss_list_single_pane_t1

0xcc1d,	// (0x000591f0) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0005bbdf) rss_list_single_pane_t

0xa997,	// (0x00056f6a) main_camera2_pane

0xa997,	// (0x00056f6a) main_video2_pane

0x4883,	// (0x00050e56) cams_zoom_pane_cp2_ParamLimits

0x4883,	// (0x00050e56) cams_zoom_pane_cp2

0x48a3,	// (0x00050e76) image2_vga_pane_ParamLimits

0x48a3,	// (0x00050e76) image2_vga_pane

0x48f4,	// (0x00050ec7) main_camera2_pane_g1_ParamLimits

0x48f4,	// (0x00050ec7) main_camera2_pane_g1

0x4914,	// (0x00050ee7) main_camera2_pane_g2_ParamLimits

0x4914,	// (0x00050ee7) main_camera2_pane_g2

0x4934,	// (0x00050f07) main_camera2_pane_g3_ParamLimits

0x4934,	// (0x00050f07) main_camera2_pane_g3

0x4954,	// (0x00050f27) main_camera2_pane_g4_ParamLimits

0x4954,	// (0x00050f27) main_camera2_pane_g4

0x4974,	// (0x00050f47) main_camera2_pane_g5_ParamLimits

0x4974,	// (0x00050f47) main_camera2_pane_g5

0x4994,	// (0x00050f67) main_camera2_pane_g6_ParamLimits

0x4994,	// (0x00050f67) main_camera2_pane_g6

0x49b4,	// (0x00050f87) main_camera2_pane_g7_ParamLimits

0x49b4,	// (0x00050f87) main_camera2_pane_g7

0x49d4,	// (0x00050fa7) main_camera2_pane_g8_ParamLimits

0x49d4,	// (0x00050fa7) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0005bc00) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0005bc00) main_camera2_pane_g

0x4a14,	// (0x00050fe7) main_camera2_pane_t1_ParamLimits

0x4a14,	// (0x00050fe7) main_camera2_pane_t1

0x4a49,	// (0x0005101c) main_camera2_pane_t2_ParamLimits

0x4a49,	// (0x0005101c) main_camera2_pane_t2

0x4a6f,	// (0x00051042) main_camera2_pane_t3_ParamLimits

0x4a6f,	// (0x00051042) main_camera2_pane_t3

0x4acd,	// (0x000510a0) main_camera2_pane_t4_ParamLimits

0x4acd,	// (0x000510a0) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0005bc13) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0005bc13) main_camera2_pane_t

0x4b5f,	// (0x00051132) cams_zoom_pane_cp4_ParamLimits

0x4b5f,	// (0x00051132) cams_zoom_pane_cp4

0x4b75,	// (0x00051148) image2_cif_pane_ParamLimits

0x4b75,	// (0x00051148) image2_cif_pane

0x4ba0,	// (0x00051173) image2_subqcif_pane_ParamLimits

0x4ba0,	// (0x00051173) image2_subqcif_pane

0x4bba,	// (0x0005118d) main_video2_pane_g1_ParamLimits

0x4bba,	// (0x0005118d) main_video2_pane_g1

0x4bd4,	// (0x000511a7) main_video2_pane_g2_ParamLimits

0x4bd4,	// (0x000511a7) main_video2_pane_g2

0x4bea,	// (0x000511bd) main_video2_pane_g3_ParamLimits

0x4bea,	// (0x000511bd) main_video2_pane_g3

0x4c00,	// (0x000511d3) main_video2_pane_g4_ParamLimits

0x4c00,	// (0x000511d3) main_video2_pane_g4

0x4c16,	// (0x000511e9) main_video2_pane_g5_ParamLimits

0x4c16,	// (0x000511e9) main_video2_pane_g5

0x4c2c,	// (0x000511ff) main_video2_pane_g6_ParamLimits

0x4c2c,	// (0x000511ff) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0005bc22) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0005bc22) main_video2_pane_g

0x4c46,	// (0x00051219) main_video2_pane_t1_ParamLimits

0x4c46,	// (0x00051219) main_video2_pane_t1

0x4c6a,	// (0x0005123d) main_video2_pane_t2_ParamLimits

0x4c6a,	// (0x0005123d) main_video2_pane_t2

0x4cb8,	// (0x0005128b) main_video2_pane_t3_ParamLimits

0x4cb8,	// (0x0005128b) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0005bc2f) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0005bc2f) main_video2_pane_t

0x414f,	// (0x00050722) call_muted_g2

0x0001,

0xf5fe,	// (0x0005bbd1) call_muted_g

0xa997,	// (0x00056f6a) main_mup2_pane

0x4d00,	// (0x000512d3) main_mup2_pane_g1_ParamLimits

0x4d00,	// (0x000512d3) main_mup2_pane_g1

0x4d0c,	// (0x000512df) main_mup2_pane_g2_ParamLimits

0x4d0c,	// (0x000512df) main_mup2_pane_g2

0x9f15,	// (0x000564e8) main_mup_pane_g13_cp1

0x9f1d,	// (0x000564f0) mup_volume_pane_cp1

0x4d28,	// (0x000512fb) main_mup2_pane_g4_ParamLimits

0x4d28,	// (0x000512fb) main_mup2_pane_g4

0x4d3a,	// (0x0005130d) main_mup2_pane_g5_ParamLimits

0x4d3a,	// (0x0005130d) main_mup2_pane_g5

0x4d4c,	// (0x0005131f) main_mup2_pane_g6_ParamLimits

0x4d4c,	// (0x0005131f) main_mup2_pane_g6

0x4d5e,	// (0x00051331) main_mup2_pane_g7_ParamLimits

0x4d5e,	// (0x00051331) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0005bc36) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0005bc36) main_mup2_pane_g

0x4d76,	// (0x00051349) main_mup2_pane_t1_ParamLimits

0x4d76,	// (0x00051349) main_mup2_pane_t1

0x4d8c,	// (0x0005135f) main_mup2_pane_t2_ParamLimits

0x4d8c,	// (0x0005135f) main_mup2_pane_t2

0x4da2,	// (0x00051375) main_mup2_pane_t3_ParamLimits

0x4da2,	// (0x00051375) main_mup2_pane_t3

0x4db8,	// (0x0005138b) main_mup2_pane_t4_ParamLimits

0x4db8,	// (0x0005138b) main_mup2_pane_t4

0x4dd0,	// (0x000513a3) main_mup2_pane_t5_ParamLimits

0x4dd0,	// (0x000513a3) main_mup2_pane_t5

0x4de8,	// (0x000513bb) main_mup2_pane_t6_ParamLimits

0x4de8,	// (0x000513bb) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0005bc45) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0005bc45) main_mup2_pane_t

0x4e18,	// (0x000513eb) mup2_visualizer_pane_ParamLimits

0x4e18,	// (0x000513eb) mup2_visualizer_pane

0x4e46,	// (0x00051419) mup_progress_pane_cp_ParamLimits

0x4e46,	// (0x00051419) mup_progress_pane_cp

0x9f00,	// (0x000564d3) mup_volume_pane_cp_ParamLimits

0x9f00,	// (0x000564d3) mup_volume_pane_cp

0x4e5a,	// (0x0005142d) mup2_visualizer_pane_g1_ParamLimits

0x4e5a,	// (0x0005142d) mup2_visualizer_pane_g1

0xcc7e,	// (0x00059251) mup2_visualizer_pane_g2_ParamLimits

0xcc7e,	// (0x00059251) mup2_visualizer_pane_g2

0x4e71,	// (0x00051444) mup2_visualizer_pane_g3_ParamLimits

0x4e71,	// (0x00051444) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0005bc52) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0005bc52) mup2_visualizer_pane_g

0xbaab,	// (0x0005807e) aid_size_cell_fmradio

0x4301,	// (0x000508d4) aid_height_parent_landcape

0xb037,	// (0x0005760a) wml_content_pane_cp

0xb03f,	// (0x00057612) wml_tabs_pane

0xb048,	// (0x0005761b) popup_wml_miniature_window

0xb050,	// (0x00057623) scroll_pane_cp021

0xb064,	// (0x00057637) wml_content_pane_comp8

0xa997,	// (0x00056f6a) bg_popup_sub_pane_cp05

0xcc9c,	// (0x0005926f) popup_wml_miniature_window_g1

0xcca4,	// (0x00059277) wml_miniature_view_pane

0x4e7d,	// (0x00051450) aid_size_wml_view

0x4e85,	// (0x00051458) wml_miniature_view_pane_g1

0x4e8e,	// (0x00051461) wml_miniature_view_pane_g2

0x4e97,	// (0x0005146a) wml_miniature_view_pane_g3

0x4e9f,	// (0x00051472) wml_miniature_view_pane_g4

0x4ea7,	// (0x0005147a) wml_miniature_view_pane_g5

0x4eaf,	// (0x00051482) wml_miniature_view_pane_g6

0x4eb7,	// (0x0005148a) wml_miniature_view_pane_g7

0x4ebf,	// (0x00051492) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0005bc59) wml_miniature_view_pane_g

0xccac,	// (0x0005927f) background_graphic_ParamLimits

0xccac,	// (0x0005927f) background_graphic

0xccb8,	// (0x0005928b) wml_tabs_2_pane

0xccc1,	// (0x00059294) wml_tabs_3_pane_ParamLimits

0xccc1,	// (0x00059294) wml_tabs_3_pane

0xccd3,	// (0x000592a6) wml_tabs_4_pane_ParamLimits

0xccd3,	// (0x000592a6) wml_tabs_4_pane

0xcce9,	// (0x000592bc) wml_tabs_5_pane_ParamLimits

0xcce9,	// (0x000592bc) wml_tabs_5_pane

0xcd03,	// (0x000592d6) wml_tabs_pane_g2_ParamLimits

0xcd03,	// (0x000592d6) wml_tabs_pane_g2

0xcd23,	// (0x000592f6) wml_tabs_pane_g3_ParamLimits

0xcd23,	// (0x000592f6) wml_tabs_pane_g3

0x4ec7,	// (0x0005149a) wml_tabs_2_active_pane_ParamLimits

0x4ec7,	// (0x0005149a) wml_tabs_2_active_pane

0x4edb,	// (0x000514ae) wml_tabs_2_passive_pane_ParamLimits

0x4edb,	// (0x000514ae) wml_tabs_2_passive_pane

0x4eef,	// (0x000514c2) wml_tabs_3_active_pane_cp_ParamLimits

0x4eef,	// (0x000514c2) wml_tabs_3_active_pane_cp

0x4f04,	// (0x000514d7) wml_tabs_3_passive_pane_ParamLimits

0x4f04,	// (0x000514d7) wml_tabs_3_passive_pane

0x4f17,	// (0x000514ea) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f17,	// (0x000514ea) wml_tabs_3_passive_pane_cp

0x4f2e,	// (0x00051501) tabs_4_active_pane

0x4f36,	// (0x00051509) tabs_4_passive_pane

0x4f40,	// (0x00051513) tabs_4_passive_pane_cp

0x4f48,	// (0x0005151b) tabs_4_passive_pane_cp2

0x401c,	// (0x000505ef) aid_height_text

0x36d7,	// (0x0004fcaa) mup_volume_cont_pane_ParamLimits

0x36d7,	// (0x0004fcaa) mup_volume_cont_pane

0x11f4,	// (0x0004d7c7) aid_size_cell_pinb

0x11fe,	// (0x0004d7d1) aid_size_list_pinb

0x4e32,	// (0x00051405) mup2_volume_cont_pane_ParamLimits

0x4e32,	// (0x00051405) mup2_volume_cont_pane

0x9eec,	// (0x000564bf) mup2_volume_cont_pane_g1_ParamLimits

0x9eec,	// (0x000564bf) mup2_volume_cont_pane_g1

0x0ea6,	// (0x0004d479) aid_size_cell_touch_ParamLimits

0x0ea6,	// (0x0004d479) aid_size_cell_touch

0x10e3,	// (0x0004d6b6) touch_pane_ParamLimits

0x10e3,	// (0x0004d6b6) touch_pane

0x9a6b,	// (0x0005603e) main_rss2_pane

0xcd40,	// (0x00059313) listscroll_rss2_pane

0xcd49,	// (0x0005931c) rss2_navigation_pane

0xcd51,	// (0x00059324) list_rss2_pane

0xb677,	// (0x00057c4a) scroll_pane_cp22

0xcd59,	// (0x0005932c) rss2_navigation_pane_g1

0xcd62,	// (0x00059335) rss2_navigation_pane_g2

0xcd6a,	// (0x0005933d) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0005bc6a) rss2_navigation_pane_g

0xcd72,	// (0x00059345) rss2_navigation_pane_t1

0x4f52,	// (0x00051525) rss2_list_single_pane_ParamLimits

0x4f52,	// (0x00051525) rss2_list_single_pane

0xcd80,	// (0x00059353) rss2_list_single_pane_t2

0xcd8e,	// (0x00059361) rss2_list_single_pane_t3_ParamLimits

0xcd8e,	// (0x00059361) rss2_list_single_pane_t3

0xcdab,	// (0x0005937e) rss2_list_single_pane_t4

0x2f9d,	// (0x0004f570) smil_status_pane_g1

0xa74e,	// (0x00056d21) main_image2_pane_ParamLimits

0xa74e,	// (0x00056d21) main_image2_pane

0x49f4,	// (0x00050fc7) main_camera2_pane_g9_ParamLimits

0x49f4,	// (0x00050fc7) main_camera2_pane_g9

0x4b22,	// (0x000510f5) main_camera2_pane_t5_ParamLimits

0x4b22,	// (0x000510f5) main_camera2_pane_t5

0x9ebc,	// (0x0005648f) main_camera2_pane_t6_ParamLimits

0x9ebc,	// (0x0005648f) main_camera2_pane_t6

0x4f69,	// (0x0005153c) main_image2_pane_g1_ParamLimits

0x4f69,	// (0x0005153c) main_image2_pane_g1

0x3d56,	// (0x00050329) smil2_video_pane_ParamLimits

0x3d56,	// (0x00050329) smil2_video_pane

0x0ede,	// (0x0004d4b1) aid_zoom_text_primary_cp

0x9ac9,	// (0x0005609c) popup_preview_fixed_window

0xafa0,	// (0x00057573) im_reading_pane_g1

0x486b,	// (0x00050e3e) cams2_bc_adjust_pane_cp_ParamLimits

0x486b,	// (0x00050e3e) cams2_bc_adjust_pane_cp

0x4b51,	// (0x00051124) cams2_bc_adjust_pane_ParamLimits

0x4b51,	// (0x00051124) cams2_bc_adjust_pane

0x9f25,	// (0x000564f8) cams2_bc_adjust_pane_g1

0x9f2d,	// (0x00056500) cams2_slider_pane

0x9f36,	// (0x00056509) cams2_slider_pane_g1

0x9f3f,	// (0x00056512) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0005bc71) cams2_slider_pane_g

0x12d6,	// (0x0004d8a9) calc_display_pane_ParamLimits

0x12fe,	// (0x0004d8d1) calc_paper_pane_ParamLimits

0x1321,	// (0x0004d8f4) grid_calc_pane_ParamLimits

0x9dd5,	// (0x000563a8) popup_clock_digital_window_t1_ParamLimits

0xba48,	// (0x0005801b) main_image_pane_t1

0x12b8,	// (0x0004d88b) aid_size_cell_calc_ParamLimits

0x12b8,	// (0x0004d88b) aid_size_cell_calc

0x4347,	// (0x0005091a) popup_blid_sat_info2_window_ParamLimits

0x4347,	// (0x0005091a) popup_blid_sat_info2_window

0xcdc1,	// (0x00059394) aid_size_cell_blid

0xcdc9,	// (0x0005939c) bg_popup_window_pane_cp07

0xcdec,	// (0x000593bf) grid_popup_blid_pane

0xcdf6,	// (0x000593c9) heading_pane_cp05_ParamLimits

0xcdf6,	// (0x000593c9) heading_pane_cp05

0xcec0,	// (0x00059493) cell_popup_blid_pane_ParamLimits

0xcec0,	// (0x00059493) cell_popup_blid_pane

0xcee6,	// (0x000594b9) cell_popup_blid_pane_g1

0xceee,	// (0x000594c1) cell_popup_blid_pane_t1

0x4e02,	// (0x000513d5) mup2_indicator_pane_ParamLimits

0x4e02,	// (0x000513d5) mup2_indicator_pane

0xb7c0,	// (0x00057d93) mup2_visualizer_osc_pane

0xcc8a,	// (0x0005925d) mup2_visualizer_spec_pane_ParamLimits

0xcc8a,	// (0x0005925d) mup2_visualizer_spec_pane

0x4f7f,	// (0x00051552) mup2_spec_half_pane

0x4f88,	// (0x0005155b) mup2_spec_half_pane_cp

0x4f90,	// (0x00051563) mup2_spec_bar_pane_ParamLimits

0x4f90,	// (0x00051563) mup2_spec_bar_pane

0xcc2b,	// (0x000591fe) mup2_spec_bar_pane_g1

0xcc35,	// (0x00059208) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0005bbe4) mup2_spec_bar_pane_g

0x4fb0,	// (0x00051583) mup2_osc_middle_pane

0xcc47,	// (0x0005921a) mup2_visualizer_osc_pane_g1

0x9af3,	// (0x000560c6) popup_number_entry_window_t1_ParamLimits

0x9b06,	// (0x000560d9) popup_number_entry_window_t2_ParamLimits

0x9b18,	// (0x000560eb) popup_number_entry_window_t3_ParamLimits

0x1135,	// (0x0004d708) popup_number_entry_window_t5_ParamLimits

0x1135,	// (0x0004d708) popup_number_entry_window_t5

0xf0d3,	// (0x0005b6a6) popup_number_entry_window_t_ParamLimits

0x9b2a,	// (0x000560fd) text_title_cp2_ParamLimits

0x9e14,	// (0x000563e7) aid_hotspot_pointer_text2_pane

0x9e3a,	// (0x0005640d) main_viewer_pane_g9_ParamLimits

0x9e3a,	// (0x0005640d) main_viewer_pane_g9

0xb1d9,	// (0x000577ac) cale_month_pane_t1_ParamLimits

0xb216,	// (0x000577e9) bg_cale_pane_ParamLimits

0xb22e,	// (0x00057801) list_cale_pane_ParamLimits

0xb23f,	// (0x00057812) listscroll_cale_day_pane_t1

0xb251,	// (0x00057824) scroll_pane_cp09_ParamLimits

0x370d,	// (0x0004fce0) main_mup_eq_pane_t1_ParamLimits

0x370d,	// (0x0004fce0) main_mup_eq_pane_t1

0x3727,	// (0x0004fcfa) main_mup_eq_pane_t2_ParamLimits

0x3727,	// (0x0004fcfa) main_mup_eq_pane_t2

0x3741,	// (0x0004fd14) main_mup_eq_pane_t3_ParamLimits

0x3741,	// (0x0004fd14) main_mup_eq_pane_t3

0x375d,	// (0x0004fd30) main_mup_eq_pane_t4_ParamLimits

0x375d,	// (0x0004fd30) main_mup_eq_pane_t4

0x3779,	// (0x0004fd4c) main_mup_eq_pane_t5_ParamLimits

0x3779,	// (0x0004fd4c) main_mup_eq_pane_t5

0x3795,	// (0x0004fd68) main_mup_eq_pane_t6_ParamLimits

0x3795,	// (0x0004fd68) main_mup_eq_pane_t6

0x37a9,	// (0x0004fd7c) main_mup_eq_pane_t7_ParamLimits

0x37a9,	// (0x0004fd7c) main_mup_eq_pane_t7

0x37bd,	// (0x0004fd90) main_mup_eq_pane_t8_ParamLimits

0x37bd,	// (0x0004fd90) main_mup_eq_pane_t8

0x37d1,	// (0x0004fda4) main_mup_eq_pane_t9_ParamLimits

0x37d1,	// (0x0004fda4) main_mup_eq_pane_t9

0x37eb,	// (0x0004fdbe) main_mup_eq_pane_t10_ParamLimits

0x37eb,	// (0x0004fdbe) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0005ba33) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0005ba33) main_mup_eq_pane_t

0x389a,	// (0x0004fe6d) mup_equalizer_pane_cp5_ParamLimits

0x38ae,	// (0x0004fe81) mup_equalizer_pane_cp6_ParamLimits

0x38c2,	// (0x0004fe95) mup_equalizer_pane_cp7_ParamLimits

0x9a6b,	// (0x0005603e) main_gallery_pane

0xcc50,	// (0x00059223) smil2_volume_pane

0xcc58,	// (0x0005922b) smil_status_volume_pane_g1_ParamLimits

0xcc6b,	// (0x0005923e) smil_status_volume_pane_g2_ParamLimits

0x9e9a,	// (0x0005646d) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0005bbe9) smil_status_volume_pane_g_ParamLimits

0xcdc9,	// (0x0005939c) bg_popup_window_pane_cp07_ParamLimits

0xcdd7,	// (0x000593aa) blid_firmament_pane

0x4fb9,	// (0x0005158c) aid_size_cell_gallery_ParamLimits

0x4fb9,	// (0x0005158c) aid_size_cell_gallery

0x4fcf,	// (0x000515a2) grid_gallery_pane_ParamLimits

0x4fcf,	// (0x000515a2) grid_gallery_pane

0x4fe8,	// (0x000515bb) cell_gallery_pane_ParamLimits

0x4fe8,	// (0x000515bb) cell_gallery_pane

0xcefc,	// (0x000594cf) bg_cell_gallery_focus_pane_ParamLimits

0xcefc,	// (0x000594cf) bg_cell_gallery_focus_pane

0xcf0e,	// (0x000594e1) cell_gallery_pane_g1_ParamLimits

0xcf0e,	// (0x000594e1) cell_gallery_pane_g1

0x5031,	// (0x00051604) cell_gallery_pane_g2_ParamLimits

0x5031,	// (0x00051604) cell_gallery_pane_g2

0x503e,	// (0x00051611) cell_gallery_pane_g3_ParamLimits

0x503e,	// (0x00051611) cell_gallery_pane_g3

0xcf1a,	// (0x000594ed) cell_gallery_pane_g4_ParamLimits

0xcf1a,	// (0x000594ed) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0005bc97) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0005bc97) cell_gallery_pane_g

0xcf26,	// (0x000594f9) bg_cell_gallery_focus_pane_g1

0xcf2e,	// (0x00059501) bg_cell_gallery_focus_pane_g2

0xcf36,	// (0x00059509) bg_cell_gallery_focus_pane_g3

0xcf3e,	// (0x00059511) bg_cell_gallery_focus_pane_g4

0xcf46,	// (0x00059519) bg_cell_gallery_focus_pane_g5

0xcf4e,	// (0x00059521) bg_cell_gallery_focus_pane_g6

0xcf56,	// (0x00059529) bg_cell_gallery_focus_pane_g7

0xcf5e,	// (0x00059531) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0005bca0) bg_cell_gallery_focus_pane_g

0xcf66,	// (0x00059539) aid_firma_cardinal

0xcf7a,	// (0x0005954d) blid_firmament_pane_t1

0xcf91,	// (0x00059564) blid_firmament_pane_t2

0xcfa8,	// (0x0005957b) blid_firmament_pane_t3

0xcfbf,	// (0x00059592) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0005bcb1) blid_firmament_pane_t

0xcfd6,	// (0x000595a9) blid_sat_info_pane

0xcfe6,	// (0x000595b9) blid_sat_info_pane_g1

0xcfe6,	// (0x000595b9) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0005bcba) blid_sat_info_pane_g

0xcff0,	// (0x000595c3) blid_sat_info_pane_t1

0xcffe,	// (0x000595d1) smil2_volume_content_pane

0xd007,	// (0x000595da) smil2_volume_pane_g1

0xad57,	// (0x0005732a) smil2_volume_content_pane_g1

0xd00f,	// (0x000595e2) smil2_volume_content_pane_g2

0xd018,	// (0x000595eb) smil2_volume_content_pane_g3

0xd021,	// (0x000595f4) smil2_volume_content_pane_g4

0xd02a,	// (0x000595fd) smil2_volume_content_pane_g5

0xd033,	// (0x00059606) smil2_volume_content_pane_g6

0xd03c,	// (0x0005960f) smil2_volume_content_pane_g7

0xd045,	// (0x00059618) smil2_volume_content_pane_g8

0xd04e,	// (0x00059621) smil2_volume_content_pane_g9

0xd057,	// (0x0005962a) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0005bcbf) smil2_volume_content_pane_g

0x189c,	// (0x0004de6f) cale_week_day_heading_pane_t1_ParamLimits

0x18e6,	// (0x0004deb9) cale_week_day_heading_pane_t2_ParamLimits

0x1935,	// (0x0004df08) cale_week_day_heading_pane_t3_ParamLimits

0x1984,	// (0x0004df57) cale_week_day_heading_pane_t4_ParamLimits

0x19d3,	// (0x0004dfa6) cale_week_day_heading_pane_t5_ParamLimits

0x1a2a,	// (0x0004dffd) cale_week_day_heading_pane_t6_ParamLimits

0x1a81,	// (0x0004e054) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0005b7ab) cale_week_day_heading_pane_t_ParamLimits

0xae53,	// (0x00057426) bg_cale_side_pane_ParamLimits

0x1acb,	// (0x0004e09e) cale_week_time_pane_t1_ParamLimits

0x1ae5,	// (0x0004e0b8) cale_week_time_pane_t2_ParamLimits

0x1aff,	// (0x0004e0d2) cale_week_time_pane_t3_ParamLimits

0x1b19,	// (0x0004e0ec) cale_week_time_pane_t4_ParamLimits

0x1b33,	// (0x0004e106) cale_week_time_pane_t5_ParamLimits

0x1b4d,	// (0x0004e120) cale_week_time_pane_t6_ParamLimits

0x1b67,	// (0x0004e13a) cale_week_time_pane_t7_ParamLimits

0x1b87,	// (0x0004e15a) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0005b7ba) cale_week_time_pane_t_ParamLimits

0x1ba7,	// (0x0004e17a) cell_cale_week_pane_g2_ParamLimits

0xae53,	// (0x00057426) bg_cale_side_pane_cp01_ParamLimits

0x2dae,	// (0x0004f381) cale_month_week_pane_t1_ParamLimits

0x2dc7,	// (0x0004f39a) cale_month_week_pane_t2_ParamLimits

0x2de0,	// (0x0004f3b3) cale_month_week_pane_t3_ParamLimits

0x2df9,	// (0x0004f3cc) cale_month_week_pane_t4_ParamLimits

0x2e12,	// (0x0004f3e5) cale_month_week_pane_t5_ParamLimits

0x2e2b,	// (0x0004f3fe) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0005b893) cale_month_week_pane_t_ParamLimits

0x9d51,	// (0x00056324) cell_cale_month_pane_g1_ParamLimits

0x9a6b,	// (0x0005603e) main_cale_event_viewer_pane

0x9a6b,	// (0x0005603e) listscroll_cale_event_viewer_pane

0xd060,	// (0x00059633) list_cale_ev_pane

0xd068,	// (0x0005963b) scroll_pane_cp023

0xd074,	// (0x00059647) field_cale_ev_pane_ParamLimits

0xd074,	// (0x00059647) field_cale_ev_pane

0xd090,	// (0x00059663) field_cale_ev_content_pane_ParamLimits

0xd090,	// (0x00059663) field_cale_ev_content_pane

0xd09c,	// (0x0005966f) field_cale_ev_pane_g1_ParamLimits

0xd09c,	// (0x0005966f) field_cale_ev_pane_g1

0xd0a8,	// (0x0005967b) field_cale_ev_pane_g2_ParamLimits

0xd0a8,	// (0x0005967b) field_cale_ev_pane_g2

0xd0c0,	// (0x00059693) field_cale_ev_pane_g3_ParamLimits

0xd0c0,	// (0x00059693) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0005bcd4) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0005bcd4) field_cale_ev_pane_g

0xd0d8,	// (0x000596ab) field_cale_ev_pane_t1_ParamLimits

0xd0d8,	// (0x000596ab) field_cale_ev_pane_t1

0xd0ef,	// (0x000596c2) field_cale_ev_content_pane_t1_ParamLimits

0xd0ef,	// (0x000596c2) field_cale_ev_content_pane_t1

0x394e,	// (0x0004ff21) bg_button_pane_cp01

0x15df,	// (0x0004dbb2) listscroll_cale_week_pane_ParamLimits

0xadfd,	// (0x000573d0) popup_toolbar_window_cp01

0xae24,	// (0x000573f7) listscroll_cale_week_pane_t1_ParamLimits

0x15df,	// (0x0004dbb2) listscroll_cale_day_pane_ParamLimits

0xadfd,	// (0x000573d0) popup_toolbar_window_cp02

0xb23f,	// (0x00057812) listscroll_cale_day_pane_t1_ParamLimits

0x15df,	// (0x0004dbb2) main_cale_month_pane_ParamLimits

0x9e85,	// (0x00056458) popup_toolbar_window_cp03_ParamLimits

0x9e85,	// (0x00056458) popup_toolbar_window_cp03

0x3c1a,	// (0x000501ed) main_image_pane_g2_ParamLimits

0x3c1a,	// (0x000501ed) main_image_pane_g2

0x3c2b,	// (0x000501fe) main_image_pane_g3_ParamLimits

0x3c2b,	// (0x000501fe) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0005bac5) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0005bac5) main_image_pane_g

0xba48,	// (0x0005801b) main_image_pane_t1_ParamLimits

0x3c3c,	// (0x0005020f) main_image_pane_t2_ParamLimits

0x3c3c,	// (0x0005020f) main_image_pane_t2

0x3c4e,	// (0x00050221) main_image_pane_t3_ParamLimits

0x3c4e,	// (0x00050221) main_image_pane_t3

0x3c76,	// (0x00050249) main_image_pane_t4_ParamLimits

0x3c76,	// (0x00050249) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0005bacc) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0005bacc) main_image_pane_t

0x3c96,	// (0x00050269) popup_image_details_window_cp01

0x3ca0,	// (0x00050273) popup_toobar_trans_pane_cp01_ParamLimits

0x3ca0,	// (0x00050273) popup_toobar_trans_pane_cp01

0x441e,	// (0x000509f1) popup_image_details_window_ParamLimits

0x441e,	// (0x000509f1) popup_image_details_window

0x9e58,	// (0x0005642b) popup_image_focus_window

0x4825,	// (0x00050df8) camera2_autofocus_pane_ParamLimits

0x4825,	// (0x00050df8) camera2_autofocus_pane

0x9a6b,	// (0x0005603e) bg_popup_sub_pane_cp06

0xd10c,	// (0x000596df) popup_image_focus_window_g1

0xd114,	// (0x000596e7) popup_image_focus_window_g2

0xd11c,	// (0x000596ef) popup_image_focus_window_g3

0xd124,	// (0x000596f7) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0005bcdb) popup_image_focus_window_g

0xd12c,	// (0x000596ff) popup_image_focus_window_t1

0xd13a,	// (0x0005970d) popup_image_focus_window_t2

0xd14a,	// (0x0005971d) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0005bce4) popup_image_focus_window_t

0xd158,	// (0x0005972b) camera2_autofocus_pane_g1

0xa74e,	// (0x00056d21) bg_tb_trans_pane_cp01

0xd166,	// (0x00059739) popup_image_details_window_g1

0xd179,	// (0x0005974c) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0005bcf6) popup_image_details_window_g

0xd1a2,	// (0x00059775) popup_image_details_window_t1

0xd1b4,	// (0x00059787) popup_image_details_window_t2

0xd1cd,	// (0x000597a0) popup_image_details_window_t3

0xd1e1,	// (0x000597b4) popup_image_details_window_t4

0xd1fc,	// (0x000597cf) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0005bcfd) popup_image_details_window_t

0xacc2,	// (0x00057295) bg_calc_paper_pane_ParamLimits

0x9a6b,	// (0x0005603e) grid_highlight_pane_cp013

0x9cb3,	// (0x00056286) list_calc_pane_ParamLimits

0x9cc5,	// (0x00056298) scroll_pane_cp024

0xacd6,	// (0x000572a9) bg_calc_display_pane_ParamLimits

0x141f,	// (0x0004d9f2) calc_display_pane_t1_ParamLimits

0x1431,	// (0x0004da04) calc_display_pane_t2_ParamLimits

0x9ccd,	// (0x000562a0) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0005b72d) calc_display_pane_t_ParamLimits

0x14f6,	// (0x0004dac9) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0005b74a) cell_calc_pane_g

0x14ff,	// (0x0004dad2) cell_calc_pane_t1

0xad35,	// (0x00057308) grid_highlight_pane_cp02_ParamLimits

0xad4b,	// (0x0005731e) toolbar_button_pane_cp01_ParamLimits

0xad4b,	// (0x0005731e) toolbar_button_pane_cp01

0xba8d,	// (0x00058060) temp_image_control_pane_ParamLimits

0xba8d,	// (0x00058060) temp_image_control_pane

0xa74e,	// (0x00056d21) main_mp3_pane

0xd216,	// (0x000597e9) temp_image_control_pane_g1_ParamLimits

0xd216,	// (0x000597e9) temp_image_control_pane_g1

0xd224,	// (0x000597f7) temp_image_control_pane_g2_ParamLimits

0xd224,	// (0x000597f7) temp_image_control_pane_g2

0xd236,	// (0x00059809) temp_image_control_pane_g3_ParamLimits

0xd236,	// (0x00059809) temp_image_control_pane_g3

0x507b,	// (0x0005164e) temp_image_control_pane_g4_ParamLimits

0x507b,	// (0x0005164e) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0005bd08) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0005bd08) temp_image_control_pane_g

0xd216,	// (0x000597e9) main_mp3_pane_g1

0x508e,	// (0x00051661) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0005bd11) main_mp3_pane_g

0xd279,	// (0x0005984c) main_mp3_pane_t1

0xaeaf,	// (0x00057482) main_camera_pane_g8_ParamLimits

0xaeaf,	// (0x00057482) main_camera_pane_g8

0x1ecc,	// (0x0004e49f) main_video_pane_g7_ParamLimits

0x1ecc,	// (0x0004e49f) main_video_pane_g7

0x9eda,	// (0x000564ad) main_camera2_pane_t7_ParamLimits

0x9eda,	// (0x000564ad) main_camera2_pane_t7

0xaff7,	// (0x000575ca) scroll_pane_cp025_ParamLimits

0xaff7,	// (0x000575ca) scroll_pane_cp025

0xb00b,	// (0x000575de) scroll_pane_cp026_ParamLimits

0xb00b,	// (0x000575de) scroll_pane_cp026

0xb01a,	// (0x000575ed) wml_content_pane_ParamLimits

0x9a6b,	// (0x0005603e) main_touch_calib_pane

0x5164,	// (0x00051737) main_touch_calib_pane_g1

0x5176,	// (0x00051749) main_touch_calib_pane_g2

0x5188,	// (0x0005175b) main_touch_calib_pane_g3

0x519a,	// (0x0005176d) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0005bd2f) main_touch_calib_pane_g

0x51ac,	// (0x0005177f) main_touch_calib_pane_t1

0x51c6,	// (0x00051799) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0005bd38) main_touch_calib_pane_t

0xb701,	// (0x00057cd4) mup_progress_pane_cp02

0xb720,	// (0x00057cf3) navi_pane_g1

0xb782,	// (0x00057d55) navi_pane_mp_t3

0xa74e,	// (0x00056d21) main_mp3_pane_ParamLimits

0x459b,	// (0x00050b6e) navi_pane_ParamLimits

0xd216,	// (0x000597e9) main_mp3_pane_g1_ParamLimits

0x508e,	// (0x00051661) main_mp3_pane_g2_ParamLimits

0x509c,	// (0x0005166f) main_mp3_pane_g3_ParamLimits

0x509c,	// (0x0005166f) main_mp3_pane_g3

0x50aa,	// (0x0005167d) main_mp3_pane_g4_ParamLimits

0x50aa,	// (0x0005167d) main_mp3_pane_g4

0xd246,	// (0x00059819) main_mp3_pane_g5_ParamLimits

0xd246,	// (0x00059819) main_mp3_pane_g5

0xd254,	// (0x00059827) main_mp3_pane_g6_ParamLimits

0xd254,	// (0x00059827) main_mp3_pane_g6

0xd261,	// (0x00059834) main_mp3_pane_g7_ParamLimits

0xd261,	// (0x00059834) main_mp3_pane_g7

0xd26d,	// (0x00059840) main_mp3_pane_g8_ParamLimits

0xd26d,	// (0x00059840) main_mp3_pane_g8

0xf73e,	// (0x0005bd11) main_mp3_pane_g_ParamLimits

0x50b8,	// (0x0005168b) main_mp3_pane_t2

0x50c6,	// (0x00051699) main_mp3_pane_t3

0xd287,	// (0x0005985a) main_mp3_pane_t4

0xd295,	// (0x00059868) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0005bd22) main_mp3_pane_t

0xd2a3,	// (0x00059876) mup_progress_pane_cp01

0x0ede,	// (0x0004d4b1) aid_zoom_text_secondary2

0xd060,	// (0x00059633) list_cale_ev2_pane

0xd068,	// (0x0005963b) scroll_pane_cp023_ParamLimits

0x521c,	// (0x000517ef) field_cale_ev2_pane_ParamLimits

0x521c,	// (0x000517ef) field_cale_ev2_pane

0x523e,	// (0x00051811) field_cale_ev2_pane_g1_ParamLimits

0x523e,	// (0x00051811) field_cale_ev2_pane_g1

0x524a,	// (0x0005181d) field_cale_ev2_pane_g2_ParamLimits

0x524a,	// (0x0005181d) field_cale_ev2_pane_g2

0x5262,	// (0x00051835) field_cale_ev2_pane_g3_ParamLimits

0x5262,	// (0x00051835) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0005bd43) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0005bd43) field_cale_ev2_pane_g

0x5286,	// (0x00051859) field_cale_ev2_pane_t1_ParamLimits

0x5286,	// (0x00051859) field_cale_ev2_pane_t1

0x529d,	// (0x00051870) field_cale_ev2_pane_t2_ParamLimits

0x529d,	// (0x00051870) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0005bd4c) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0005bd4c) field_cale_ev2_pane_t

0x3acd,	// (0x000500a0) main_postcard_pane_g5_ParamLimits

0x3acd,	// (0x000500a0) main_postcard_pane_g5

0x3ae3,	// (0x000500b6) main_postcard_pane_g6_ParamLimits

0x3ae3,	// (0x000500b6) main_postcard_pane_g6

0x1c86,	// (0x0004e259) camera2_autofocus_pane_cp_ParamLimits

0x1c86,	// (0x0004e259) camera2_autofocus_pane_cp

0xa74e,	// (0x00056d21) main_mup3_pane

0x52d2,	// (0x000518a5) main_mup3_pane_g1_ParamLimits

0x52d2,	// (0x000518a5) main_mup3_pane_g1

0x52f4,	// (0x000518c7) main_mup3_pane_g2_ParamLimits

0x52f4,	// (0x000518c7) main_mup3_pane_g2

0x5376,	// (0x00051949) main_mup3_pane_g3_ParamLimits

0x5376,	// (0x00051949) main_mup3_pane_g3

0x53bc,	// (0x0005198f) main_mup3_pane_g4_ParamLimits

0x53bc,	// (0x0005198f) main_mup3_pane_g4

0x5402,	// (0x000519d5) main_mup3_pane_g5_ParamLimits

0x5402,	// (0x000519d5) main_mup3_pane_g5

0x544a,	// (0x00051a1d) main_mup3_pane_g6_ParamLimits

0x544a,	// (0x00051a1d) main_mup3_pane_g6

0xd2ab,	// (0x0005987e) main_mup3_pane_g7_ParamLimits

0xd2ab,	// (0x0005987e) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0005bd5c) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0005bd5c) main_mup3_pane_g

0x54c8,	// (0x00051a9b) main_mup3_pane_t1_ParamLimits

0x54c8,	// (0x00051a9b) main_mup3_pane_t1

0x553c,	// (0x00051b0f) main_mup3_pane_t2_ParamLimits

0x553c,	// (0x00051b0f) main_mup3_pane_t2

0x5610,	// (0x00051be3) main_mup3_pane_t4_ParamLimits

0x5610,	// (0x00051be3) main_mup3_pane_t4

0x5666,	// (0x00051c39) main_mup3_pane_t5_ParamLimits

0x5666,	// (0x00051c39) main_mup3_pane_t5

0x5722,	// (0x00051cf5) main_mup3_pane_t6_ParamLimits

0x5722,	// (0x00051cf5) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0005bd6d) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0005bd6d) main_mup3_pane_t

0x57da,	// (0x00051dad) mup3_progress_pane_ParamLimits

0x57da,	// (0x00051dad) mup3_progress_pane

0x5866,	// (0x00051e39) popup_mup3_control_window_ParamLimits

0x5866,	// (0x00051e39) popup_mup3_control_window

0xd2b9,	// (0x0005988c) popup_mup3_text_window

0x5898,	// (0x00051e6b) mup3_progress_pane_t1

0x58b7,	// (0x00051e8a) mup3_progress_pane_t2

0xd2c1,	// (0x00059894) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0005bd7a) mup3_progress_pane_t

0xd2de,	// (0x000598b1) mup_progress_pane_cp03

0x9a6b,	// (0x0005603e) bg_tb_trans_pane_cp04

0x58d6,	// (0x00051ea9) mup3_volume_pane

0x58de,	// (0x00051eb1) popup_mup3_control_window_g1

0x58e7,	// (0x00051eba) mup3_volume_pane_g1

0x58f0,	// (0x00051ec3) mup3_volume_pane_g2

0x58f9,	// (0x00051ecc) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0005bd81) mup3_volume_pane_g

0x9a6b,	// (0x0005603e) bg_tb_trans_pane_cp03

0xd2ee,	// (0x000598c1) popup_mup3_text_window_g1

0xd2f6,	// (0x000598c9) popup_mup3_text_window_t1

0xad1e,	// (0x000572f1) list_calc_item_pane_g1_ParamLimits

0xcd37,	// (0x0005930a) mup_volume_pane_cp_g1

0x51e0,	// (0x000517b3) main_touch_calib_pane_t3

0x51f4,	// (0x000517c7) main_touch_calib_pane_t4

0x5208,	// (0x000517db) main_touch_calib_pane_t5

0x9a75,	// (0x00056048) aid_cell_size_toolbar2

0x9a7d,	// (0x00056050) aid_popup3_width_pane

0x0ed6,	// (0x0004d4a9) aid_zoom_text_msg_primary

0x1c5d,	// (0x0004e230) vorec_t7

0xace2,	// (0x000572b5) bg_calc_paper_pane_g1_ParamLimits

0xacee,	// (0x000572c1) bg_calc_paper_pane_g2_ParamLimits

0xacfa,	// (0x000572cd) bg_calc_paper_pane_g3_ParamLimits

0xad06,	// (0x000572d9) bg_calc_paper_pane_g4_ParamLimits

0xad12,	// (0x000572e5) bg_calc_paper_pane_g5_ParamLimits

0x147a,	// (0x0004da4d) bg_calc_paper_pane_g6_ParamLimits

0x148b,	// (0x0004da5e) bg_calc_paper_pane_g7_ParamLimits

0x149c,	// (0x0004da6f) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0005b734) bg_calc_paper_pane_g_ParamLimits

0x14af,	// (0x0004da82) calc_bg_paper_pane_g9_ParamLimits

0x1dde,	// (0x0004e3b1) image_qvga_pane_ParamLimits

0x1dde,	// (0x0004e3b1) image_qvga_pane

0xabf2,	// (0x000571c5) bg_popup_sub_pane_cp04_ParamLimits

0xb9c4,	// (0x00057f97) popup_mup_playback_window_g1_ParamLimits

0xb9d0,	// (0x00057fa3) popup_mup_playback_window_t1_ParamLimits

0xb9e5,	// (0x00057fb8) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0005bac0) popup_mup_playback_window_t_ParamLimits

0x4d1c,	// (0x000512ef) main_mup2_pane_g3_ParamLimits

0x4d1c,	// (0x000512ef) main_mup2_pane_g3

0x20f3,	// (0x0004e6c6) popup_toolbar_window_cp04

0xbdda,	// (0x000583ad) popup_call2_audio_second_window_g3_ParamLimits

0xbdda,	// (0x000583ad) popup_call2_audio_second_window_g3

0xc1e4,	// (0x000587b7) popup_call2_audio_first_window_g4_ParamLimits

0xc1e4,	// (0x000587b7) popup_call2_audio_first_window_g4

0xc863,	// (0x00058e36) popup_call2_audio_in_window_g4_ParamLimits

0xc863,	// (0x00058e36) popup_call2_audio_in_window_g4

0x3bfc,	// (0x000501cf) aid_area_sk_bg_cut_ParamLimits

0x3bfc,	// (0x000501cf) aid_area_sk_bg_cut

0xb9fa,	// (0x00057fcd) aid_area_sk_bg_cut_2_ParamLimits

0xb9fa,	// (0x00057fcd) aid_area_sk_bg_cut_2

0x5021,	// (0x000515f4) aid_placing_details_win

0x5029,	// (0x000515fc) aid_placing_details_win_2

0xd158,	// (0x0005972b) camera2_autofocus_pane_g1_ParamLimits

0x107c,	// (0x0004d64f) popup_fixed_preview_cale_window_ParamLimits

0x107c,	// (0x0004d64f) popup_fixed_preview_cale_window

0xb7d1,	// (0x00057da4) navi_slider_pane_g3

0xb7da,	// (0x00057dad) navi_slider_pane_g4

0xb7e3,	// (0x00057db6) navi_slider_pane_g5

0xb7d1,	// (0x00057da4) navi_slider_pane_g6

0x9dfb,	// (0x000563ce) navi_slider_pane_g7

0xb904,	// (0x00057ed7) mup_scale_pane_g3

0xb90d,	// (0x00057ee0) mup_scale_pane_g4

0xb916,	// (0x00057ee9) mup_scale_pane_g5

0x38d6,	// (0x0004fea9) mup_scale_pane_g6

0x38df,	// (0x0004feb2) mup_scale_pane_g7

0xb7d1,	// (0x00057da4) cams2_slider_pane_g3

0xcdb9,	// (0x0005938c) cams2_slider_pane_g4

0x9f48,	// (0x0005651b) cams2_slider_pane_g5

0xb7d1,	// (0x00057da4) cams2_slider_pane_g6

0x9f50,	// (0x00056523) cams2_slider_pane_g7

0xcfe6,	// (0x000595b9) camera2_autofocus_pane_cp_g1

0xcbc4,	// (0x00059197) bg_popup_preview_window_pane_cp02_ParamLimits

0xcbc4,	// (0x00059197) bg_popup_preview_window_pane_cp02

0xd304,	// (0x000598d7) list_fp_cale_pane_ParamLimits

0xd304,	// (0x000598d7) list_fp_cale_pane

0xd310,	// (0x000598e3) popup_fixed_preview_cale_window_t1_ParamLimits

0xd310,	// (0x000598e3) popup_fixed_preview_cale_window_t1

0x5902,	// (0x00051ed5) popup_fixed_preview_cale_window_t2_ParamLimits

0x5902,	// (0x00051ed5) popup_fixed_preview_cale_window_t2

0x5917,	// (0x00051eea) popup_fixed_preview_cale_window_t3_ParamLimits

0x5917,	// (0x00051eea) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0005bd88) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0005bd88) popup_fixed_preview_cale_window_t

0x592c,	// (0x00051eff) list_single_fp_cale_pane_ParamLimits

0x592c,	// (0x00051eff) list_single_fp_cale_pane

0xd32e,	// (0x00059901) list_single_fp_cale_pane_g1_ParamLimits

0xd32e,	// (0x00059901) list_single_fp_cale_pane_g1

0xd33a,	// (0x0005990d) list_single_fp_cale_pane_g2_ParamLimits

0xd33a,	// (0x0005990d) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0005bd8f) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0005bd8f) list_single_fp_cale_pane_g

0xd353,	// (0x00059926) list_single_fp_cale_pane_t1_ParamLimits

0xd353,	// (0x00059926) list_single_fp_cale_pane_t1

0xd365,	// (0x00059938) list_single_fp_cale_pane_t2_ParamLimits

0xd365,	// (0x00059938) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0005bd96) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0005bd96) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9a6b,	// (0x0005603e) main_dialer_pane

0x5943,	// (0x00051f16) aid_cell_size_keypad

0x594d,	// (0x00051f20) dialer_ne_pane

0x5955,	// (0x00051f28) grid_dialer_command_1_pane

0x595d,	// (0x00051f30) grid_dialer_command_2_pane

0x5965,	// (0x00051f38) grid_dialer_keypad_pane

0x5977,	// (0x00051f4a) bg_popup_call_pane_cp06_ParamLimits

0x5977,	// (0x00051f4a) bg_popup_call_pane_cp06

0x5983,	// (0x00051f56) dialer_ne_clear_pane_ParamLimits

0x5983,	// (0x00051f56) dialer_ne_clear_pane

0xd398,	// (0x0005996b) dialer_ne_pane_g1

0xd3a0,	// (0x00059973) dialer_ne_pane_t1_ParamLimits

0xd3a0,	// (0x00059973) dialer_ne_pane_t1

0x598f,	// (0x00051f62) dialer_ne_pane_t2_ParamLimits

0x598f,	// (0x00051f62) dialer_ne_pane_t2

0x59b9,	// (0x00051f8c) dialer_ne_pane_t3_ParamLimits

0x59b9,	// (0x00051f8c) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0005bd9b) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0005bd9b) dialer_ne_pane_t

0x59e9,	// (0x00051fbc) dialer_ne_pane_t3_copy1_ParamLimits

0x59e9,	// (0x00051fbc) dialer_ne_pane_t3_copy1

0x5a18,	// (0x00051feb) cell_dialer_keypad_pane_ParamLimits

0x5a18,	// (0x00051feb) cell_dialer_keypad_pane

0x5a2f,	// (0x00052002) cell_dialer_command_1_pane_ParamLimits

0x5a2f,	// (0x00052002) cell_dialer_command_1_pane

0x5a45,	// (0x00052018) cell_dialer_command_2_pane_ParamLimits

0x5a45,	// (0x00052018) cell_dialer_command_2_pane

0xd3b2,	// (0x00059985) bg_button_pane_cp02_ParamLimits

0xd3b2,	// (0x00059985) bg_button_pane_cp02

0x5a54,	// (0x00052027) cell_dialer_keypad_pane_g1_ParamLimits

0x5a54,	// (0x00052027) cell_dialer_keypad_pane_g1

0xd3b2,	// (0x00059985) bg_button_pane_cp03_ParamLimits

0xd3b2,	// (0x00059985) bg_button_pane_cp03

0x5a69,	// (0x0005203c) cell_dialer_command_1_pane_g1_ParamLimits

0x5a69,	// (0x0005203c) cell_dialer_command_1_pane_g1

0xd3be,	// (0x00059991) bg_button_pane_cp04

0x5a7c,	// (0x0005204f) cell_dialer_command_2_pane_g1

0xb7c0,	// (0x00057d93) bg_button_pane_cp06

0xd3c6,	// (0x00059999) dialer_ne_clear_pane_g1

0x3408,	// (0x0004f9db) navi_pane_g2

0x3436,	// (0x0004fa09) navi_pane_g3

0x0002,

0xf3f0,	// (0x0005b9c3) navi_pane_g

0x345f,	// (0x0004fa32) navi_pane_mv_g2

0x3486,	// (0x0004fa59) navi_pane_mv_g5

0x348e,	// (0x0004fa61) navi_pane_mv_t1

0xacd6,	// (0x000572a9) main_clock2_pane

0x5ac9,	// (0x0005209c) main_clock2_list_pane_ParamLimits

0x5ac9,	// (0x0005209c) main_clock2_list_pane

0x5b03,	// (0x000520d6) main_clock2_pane_t1_ParamLimits

0x5b03,	// (0x000520d6) main_clock2_pane_t1

0x5b41,	// (0x00052114) main_clock2_pane_t2_ParamLimits

0x5b41,	// (0x00052114) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0005bda2) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0005bda2) main_clock2_pane_t

0x5bdf,	// (0x000521b2) popup_clock_analogue_window_cp03_ParamLimits

0x5bdf,	// (0x000521b2) popup_clock_analogue_window_cp03

0x5c04,	// (0x000521d7) popup_clock_digital_window_cp02_ParamLimits

0x5c04,	// (0x000521d7) popup_clock_digital_window_cp02

0x5c77,	// (0x0005224a) main_clock2_list_single_pane_ParamLimits

0x5c77,	// (0x0005224a) main_clock2_list_single_pane

0xb7c0,	// (0x00057d93) list_highlight_pane_cp05

0xd3e4,	// (0x000599b7) main_clock2_list_single_pane_t1

0x20f3,	// (0x0004e6c6) popup_toolbar_window_cp04_ParamLimits

0x504b,	// (0x0005161e) camera2_autofocus_pane_g2_ParamLimits

0x504b,	// (0x0005161e) camera2_autofocus_pane_g2

0x5057,	// (0x0005162a) camera2_autofocus_pane_g3_ParamLimits

0x5057,	// (0x0005162a) camera2_autofocus_pane_g3

0x5063,	// (0x00051636) camera2_autofocus_pane_g4_ParamLimits

0x5063,	// (0x00051636) camera2_autofocus_pane_g4

0x506f,	// (0x00051642) camera2_autofocus_pane_g5_ParamLimits

0x506f,	// (0x00051642) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0005bceb) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0005bceb) camera2_autofocus_pane_g

0x52b2,	// (0x00051885) camera2_autofocus_pane_cp_g2

0x52ba,	// (0x0005188d) camera2_autofocus_pane_cp_g3

0x52c2,	// (0x00051895) camera2_autofocus_pane_cp_g4

0x52ca,	// (0x0005189d) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0005bd51) camera2_autofocus_pane_cp_g

0x596f,	// (0x00051f42) popup_dialer_spcha_window

0x9a6b,	// (0x0005603e) bg_popup_sub_pane_cp07

0xd3f2,	// (0x000599c5) list_spcha_pane

0xd3fa,	// (0x000599cd) list_single_spcha_pane_ParamLimits

0xd3fa,	// (0x000599cd) list_single_spcha_pane

0x9a6b,	// (0x0005603e) list_highlight_pane_cp06

0xd40b,	// (0x000599de) list_single_spcha_pane_t1

0xc60d,	// (0x00058be0) popup_call2_audio_out_window_g4_ParamLimits

0xc60d,	// (0x00058be0) popup_call2_audio_out_window_g4

0x9a6b,	// (0x0005603e) main_imed2_pane

0x9e60,	// (0x00056433) popup_imed_adjust2_window

0x4436,	// (0x00050a09) popup_imed_trans_window_ParamLimits

0x4436,	// (0x00050a09) popup_imed_trans_window

0xce22,	// (0x000593f5) popup_blid_sat_info2_window_t1

0xce30,	// (0x00059403) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0005bc80) popup_blid_sat_info2_window_t

0x5d21,	// (0x000522f4) aid_size_cell_colour_35

0x5d41,	// (0x00052314) aid_size_cell_colour_112

0x5d61,	// (0x00052334) aid_size_cell_effect

0xcbd0,	// (0x000591a3) bg_tb_trans_pane_cp02

0xb2c4,	// (0x00057897) heading_imed_pane

0x5d81,	// (0x00052354) listscroll_imed_pane

0xd419,	// (0x000599ec) heading_imed_pane_g1

0xd421,	// (0x000599f4) heading_imed_pane_t1

0xd42f,	// (0x00059a02) grid_imed_colour_35_pane_ParamLimits

0xd42f,	// (0x00059a02) grid_imed_colour_35_pane

0x5d8d,	// (0x00052360) grid_imed_effect_pane

0xd447,	// (0x00059a1a) list_imed_aspect_pane

0x5da3,	// (0x00052376) scroll_pane_cp027_ParamLimits

0x5da3,	// (0x00052376) scroll_pane_cp027

0x5db4,	// (0x00052387) cell_imed_effect_pane_ParamLimits

0x5db4,	// (0x00052387) cell_imed_effect_pane

0xd44f,	// (0x00059a22) cell_imed_colour_pane_ParamLimits

0xd44f,	// (0x00059a22) cell_imed_colour_pane

0xd491,	// (0x00059a64) cell_imed_colour_pane_g1_ParamLimits

0xd491,	// (0x00059a64) cell_imed_colour_pane_g1

0xd4a2,	// (0x00059a75) hgihlgiht_grid_pane_cp016_ParamLimits

0xd4a2,	// (0x00059a75) hgihlgiht_grid_pane_cp016

0x5ddb,	// (0x000523ae) cell_imed_effect_pane_g1

0x5de3,	// (0x000523b6) grid_highlight_pane_cp017

0xd4b3,	// (0x00059a86) list_imed_single_pane_ParamLimits

0xd4b3,	// (0x00059a86) list_imed_single_pane

0x9a6b,	// (0x0005603e) list_highlight_pane_cp07

0xd4c9,	// (0x00059a9c) list_imed_aspect_pane_comp1_t1

0xcbd0,	// (0x000591a3) bg_tb_trans_pane_cp05

0xd4eb,	// (0x00059abe) popup_imed_adjust2_window_g1

0xd512,	// (0x00059ae5) popup_imed_adjust2_window_t1

0xd52a,	// (0x00059afd) slider_imed_adjust_pane

0xd53e,	// (0x00059b11) slider_imed_adjust_pane_g1

0xd54e,	// (0x00059b21) slider_imed_adjust_pane_g2

0xd55e,	// (0x00059b31) slider_imed_adjust_pane_g3

0xd56f,	// (0x00059b42) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0005bdbf) slider_imed_adjust_pane_g

0x5dec,	// (0x000523bf) aid_size_cell_clipart2

0x5df8,	// (0x000523cb) grid_imed_clipart_pane

0xd580,	// (0x00059b53) scroll_pane_cp031

0x5e02,	// (0x000523d5) cell_imed_clipart_pane_ParamLimits

0x5e02,	// (0x000523d5) cell_imed_clipart_pane

0x5e26,	// (0x000523f9) cell_imed_clipart_pane_g1

0x9a6b,	// (0x0005603e) grid_highlight_pane_cp014

0x5ade,	// (0x000520b1) main_clock2_pane_g1_ParamLimits

0x5ade,	// (0x000520b1) main_clock2_pane_g1

0x5c22,	// (0x000521f5) aid_call2_pane_cp10

0x5c34,	// (0x00052207) aid_call_pane_cp10

0xb6f5,	// (0x00057cc8) popup_clock_analogue_window_cp10_g1

0xb6f5,	// (0x00057cc8) popup_clock_analogue_window_cp10_g2

0x5c46,	// (0x00052219) popup_clock_analogue_window_cp10_g3

0x5c46,	// (0x00052219) popup_clock_analogue_window_cp10_g4

0xb6f5,	// (0x00057cc8) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0005bdad) popup_clock_analogue_window_cp10_g

0x5c58,	// (0x0005222b) popup_clock_analogue_window_cp10_t1

0x5c89,	// (0x0005225c) clock_digital_number_pane_cp10_ParamLimits

0x5c89,	// (0x0005225c) clock_digital_number_pane_cp10

0x5ca1,	// (0x00052274) clock_digital_number_pane_cp11_ParamLimits

0x5ca1,	// (0x00052274) clock_digital_number_pane_cp11

0x5cb9,	// (0x0005228c) clock_digital_number_pane_cp12_ParamLimits

0x5cb9,	// (0x0005228c) clock_digital_number_pane_cp12

0x5cd1,	// (0x000522a4) clock_digital_number_pane_cp13_ParamLimits

0x5cd1,	// (0x000522a4) clock_digital_number_pane_cp13

0x5ce9,	// (0x000522bc) clock_digital_separator_pane_cp10_ParamLimits

0x5ce9,	// (0x000522bc) clock_digital_separator_pane_cp10

0x5d01,	// (0x000522d4) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d01,	// (0x000522d4) popup_clock_digital_window_cp02_t1

0xabea,	// (0x000571bd) clock_digital_number_pane_cp10_g1

0xabea,	// (0x000571bd) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0005bdc8) clock_digital_number_pane_cp10_g

0xabea,	// (0x000571bd) clock_digital_separator_pane_cp10_g1

0xabea,	// (0x000571bd) clock_digital_separator_pane_g2_cp10

0xb790,	// (0x00057d63) navi_pane_vded_g4

0xb799,	// (0x00057d6c) navi_pane_vded_g5

0xb7a2,	// (0x00057d75) navi_pane_vded_t1

0x9a6b,	// (0x0005603e) main_vded_pane

0x5e2f,	// (0x00052402) main_vded_pane_g1

0x5e39,	// (0x0005240c) main_vded_pane_g2

0x5e43,	// (0x00052416) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0005bdcd) main_vded_pane_g

0x5e4d,	// (0x00052420) main_vded_pane_t1

0x5e5b,	// (0x0005242e) main_vded_pane_t2

0x0001,

0xf801,	// (0x0005bdd4) main_vded_pane_t

0x5e69,	// (0x0005243c) vded_slider_pane

0x5e73,	// (0x00052446) vded_video_pane

0xd588,	// (0x00059b5b) vded_video_pane_g1

0x5e7d,	// (0x00052450) vded_video_pane_g2

0xcfe6,	// (0x000595b9) vded_video_pane_g3

0x0002,

0xf806,	// (0x0005bdd9) vded_video_pane_g

0xd592,	// (0x00059b65) vded_slider_pane_g1

0xd59b,	// (0x00059b6e) vded_slider_pane_g2

0xd5a4,	// (0x00059b77) vded_slider_pane_g3

0xd5ad,	// (0x00059b80) vded_slider_pane_g4

0xd5b6,	// (0x00059b89) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0005bde0) vded_slider_pane_g

0x584e,	// (0x00051e21) mup3_rocker_pane_ParamLimits

0x584e,	// (0x00051e21) mup3_rocker_pane

0x5e86,	// (0x00052459) mup3_control_keys_pane_g1

0x5e8e,	// (0x00052461) mup3_control_keys_pane_g2

0x5e96,	// (0x00052469) mup3_control_keys_pane_g3

0x5e9e,	// (0x00052471) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0005bdeb) mup3_control_keys_pane_g

0x10b3,	// (0x0004d686) popup_toolbar2_fixed_window_cp01_ParamLimits

0x10b3,	// (0x0004d686) popup_toolbar2_fixed_window_cp01

0x5882,	// (0x00051e55) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5882,	// (0x00051e55) popup_toolbar2_fixed_window_cp02

0xbf4c,	// (0x0005851f) popup_call2_audio_second_window_t4_ParamLimits

0xbf4c,	// (0x0005851f) popup_call2_audio_second_window_t4

0xc47a,	// (0x00058a4d) popup_call2_audio_first_window_t6_ParamLimits

0xc47a,	// (0x00058a4d) popup_call2_audio_first_window_t6

0xc710,	// (0x00058ce3) popup_call2_audio_out_window_t6_ParamLimits

0xc710,	// (0x00058ce3) popup_call2_audio_out_window_t6

0x9a6b,	// (0x0005603e) main_vitu_pane

0x5eae,	// (0x00052481) aid_size_cell_itu_ParamLimits

0x5eae,	// (0x00052481) aid_size_cell_itu

0xa74e,	// (0x00056d21) bg_popup_window_pane_cp08_ParamLimits

0xa74e,	// (0x00056d21) bg_popup_window_pane_cp08

0x5ec4,	// (0x00052497) field_vitu_entry_pane_ParamLimits

0x5ec4,	// (0x00052497) field_vitu_entry_pane

0x5edb,	// (0x000524ae) grid_vitu_function_pane_ParamLimits

0x5edb,	// (0x000524ae) grid_vitu_function_pane

0x5ef6,	// (0x000524c9) grid_vitu_itu_pane_ParamLimits

0x5ef6,	// (0x000524c9) grid_vitu_itu_pane

0x5f14,	// (0x000524e7) cell_vitu_itu_pane_ParamLimits

0x5f14,	// (0x000524e7) cell_vitu_itu_pane

0x5f38,	// (0x0005250b) cell_vitu_function_pane_ParamLimits

0x5f38,	// (0x0005250b) cell_vitu_function_pane

0xa74e,	// (0x00056d21) bg_popup_sub_pane_cp08_ParamLimits

0xa74e,	// (0x00056d21) bg_popup_sub_pane_cp08

0x5f53,	// (0x00052526) field_vitu_entry_pane_t1_ParamLimits

0x5f53,	// (0x00052526) field_vitu_entry_pane_t1

0xd5d7,	// (0x00059baa) field_vitu_entry_pane_t2_ParamLimits

0xd5d7,	// (0x00059baa) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0005bdf9) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0005bdf9) field_vitu_entry_pane_t

0xd5f4,	// (0x00059bc7) bg_button_pane_cp05_ParamLimits

0xd5f4,	// (0x00059bc7) bg_button_pane_cp05

0x5f72,	// (0x00052545) cell_vitu_itu_pane_g1

0x5f8a,	// (0x0005255d) cell_vitu_itu_pane_t1_ParamLimits

0x5f8a,	// (0x0005255d) cell_vitu_itu_pane_t1

0x5f9c,	// (0x0005256f) cell_vitu_itu_pane_t2_ParamLimits

0x5f9c,	// (0x0005256f) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0005bdfe) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0005bdfe) cell_vitu_itu_pane_t

0xd602,	// (0x00059bd5) bg_button_pane_cp07

0x5fdf,	// (0x000525b2) cell_vitu_function_pane_g1

0x9cab,	// (0x0005627e) main_calc_pane_g1

0x0eca,	// (0x0004d49d) aid_visual_content_pane

0x9a6b,	// (0x0005603e) main_vradio_pane

0x5fe8,	// (0x000525bb) main_vradio_pane_g1_ParamLimits

0x5fe8,	// (0x000525bb) main_vradio_pane_g1

0xd60c,	// (0x00059bdf) main_vradio_pane_g2_ParamLimits

0xd60c,	// (0x00059bdf) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0005be05) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0005be05) main_vradio_pane_g

0x6001,	// (0x000525d4) main_vradio_pane_t1_ParamLimits

0x6001,	// (0x000525d4) main_vradio_pane_t1

0x6016,	// (0x000525e9) main_vradio_pane_t2_ParamLimits

0x6016,	// (0x000525e9) main_vradio_pane_t2

0xd619,	// (0x00059bec) main_vradio_pane_t3_ParamLimits

0xd619,	// (0x00059bec) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0005be0a) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0005be0a) main_vradio_pane_t

0x602b,	// (0x000525fe) vradio_rocker_control_pane_ParamLimits

0x602b,	// (0x000525fe) vradio_rocker_control_pane

0x603d,	// (0x00052610) vradio_station_info_pane_ParamLimits

0x603d,	// (0x00052610) vradio_station_info_pane

0xd62d,	// (0x00059c00) vradio_frequency_info_pane_ParamLimits

0xd62d,	// (0x00059c00) vradio_frequency_info_pane

0xcfe6,	// (0x000595b9) vradio_station_info_pane_g1

0xd63c,	// (0x00059c0f) vradio_station_info_pane_t1_ParamLimits

0xd63c,	// (0x00059c0f) vradio_station_info_pane_t1

0xd65e,	// (0x00059c31) vradio_station_info_pane_t2_ParamLimits

0xd65e,	// (0x00059c31) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0005be11) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0005be11) vradio_station_info_pane_t

0xd670,	// (0x00059c43) vradio_tuning_pane

0xd678,	// (0x00059c4b) vradio_rocker_control_pane_g1

0xd680,	// (0x00059c53) vradio_rocker_control_pane_g2

0xd688,	// (0x00059c5b) vradio_rocker_control_pane_g3

0xd690,	// (0x00059c63) vradio_rocker_control_pane_g4

0xd698,	// (0x00059c6b) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0005be16) vradio_rocker_control_pane_g

0x604f,	// (0x00052622) vradio_frequency_info_pane_g1

0xd6a0,	// (0x00059c73) vradio_frequency_info_pane_t1_ParamLimits

0xd6a0,	// (0x00059c73) vradio_frequency_info_pane_t1

0x6059,	// (0x0005262c) vradio_tuning_pane_g1

0x6064,	// (0x00052637) vradio_tuning_pane_t1

0x9a91,	// (0x00056064) area_side_right_pane_ParamLimits

0x9a91,	// (0x00056064) area_side_right_pane

0xcb8b,	// (0x0005915e) status_small_pane_g1

0xcb93,	// (0x00059166) status_small_pane_g2

0xcb9c,	// (0x0005916f) status_small_pane_g3

0xcba5,	// (0x00059178) status_small_pane_g4

0x0003,

0xf603,	// (0x0005bbd6) status_small_pane_g

0xcbae,	// (0x00059181) status_small_pane_t1

0x9a6b,	// (0x0005603e) main_video3_pane

0xd6b4,	// (0x00059c87) cams_zoom_vslider_pane

0xd6bc,	// (0x00059c8f) image3_wide_pane_ParamLimits

0xd6bc,	// (0x00059c8f) image3_wide_pane

0xd6d6,	// (0x00059ca9) image3_wide_small_pane

0xd6e2,	// (0x00059cb5) main_video3_pane_g1_ParamLimits

0xd6e2,	// (0x00059cb5) main_video3_pane_g1

0xd6fe,	// (0x00059cd1) main_video3_pane_g2_ParamLimits

0xd6fe,	// (0x00059cd1) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0005be21) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0005be21) main_video3_pane_g

0xd71a,	// (0x00059ced) main_video3_pane_t1_ParamLimits

0xd71a,	// (0x00059ced) main_video3_pane_t1

0xd745,	// (0x00059d18) main_video3_pane_t2_ParamLimits

0xd745,	// (0x00059d18) main_video3_pane_t2

0xd770,	// (0x00059d43) main_video3_pane_t3_ParamLimits

0xd770,	// (0x00059d43) main_video3_pane_t3

0x0002,

0xf853,	// (0x0005be26) main_video3_pane_t_ParamLimits

0xf853,	// (0x0005be26) main_video3_pane_t

0xd79d,	// (0x00059d70) cams_zoom_vslider_pane_g1

0xd7a6,	// (0x00059d79) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0005be2d) cams_zoom_vslider_pane_g

0xd7ae,	// (0x00059d81) small_slider_vertical_pane

0xcfe6,	// (0x000595b9) small_slider_vertical_pane_g1

0xcfe6,	// (0x000595b9) small_slider_vertical_pane_g2

0xd7b6,	// (0x00059d89) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0005be32) small_slider_vertical_pane_g

0x9a6b,	// (0x0005603e) main_hwr_training_pane

0xd7bf,	// (0x00059d92) hwr_training_instruct_pane_ParamLimits

0xd7bf,	// (0x00059d92) hwr_training_instruct_pane

0x6073,	// (0x00052646) hwr_training_navi_pane_ParamLimits

0x6073,	// (0x00052646) hwr_training_navi_pane

0x6092,	// (0x00052665) hwr_training_write_pane_ParamLimits

0x6092,	// (0x00052665) hwr_training_write_pane

0x9a6b,	// (0x0005603e) bg_frame_shadow_pane

0xd7f6,	// (0x00059dc9) hwr_training_write_pane_g1

0xd7fe,	// (0x00059dd1) hwr_training_write_pane_g2

0xd806,	// (0x00059dd9) hwr_training_write_pane_g3

0xd80e,	// (0x00059de1) hwr_training_write_pane_g4

0xd816,	// (0x00059de9) hwr_training_write_pane_g5

0xd81e,	// (0x00059df1) hwr_training_write_pane_g6

0xd826,	// (0x00059df9) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0005be39) hwr_training_write_pane_g

0x9f59,	// (0x0005652c) hwr_training_navi_pane_g1_ParamLimits

0x9f59,	// (0x0005652c) hwr_training_navi_pane_g1

0x9f6b,	// (0x0005653e) hwr_training_navi_pane_g2_ParamLimits

0x9f6b,	// (0x0005653e) hwr_training_navi_pane_g2

0x9f7d,	// (0x00056550) hwr_training_navi_pane_g3_ParamLimits

0x9f7d,	// (0x00056550) hwr_training_navi_pane_g3

0x9f8d,	// (0x00056560) hwr_training_navi_pane_g4_ParamLimits

0x9f8d,	// (0x00056560) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0005be48) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0005be48) hwr_training_navi_pane_g

0x9f9a,	// (0x0005656d) hwr_training_navi_pane_t1

0x60dc,	// (0x000526af) list_single_hwr_training_instruct_pane_ParamLimits

0x60dc,	// (0x000526af) list_single_hwr_training_instruct_pane

0xd82e,	// (0x00059e01) list_single_hwr_training_instruct_pane_t1

0xcf26,	// (0x000594f9) bg_frame_shadow_pane_g1

0xd83d,	// (0x00059e10) bg_frame_shadow_pane_g2

0xd845,	// (0x00059e18) bg_frame_shadow_pane_g3

0xd84d,	// (0x00059e20) bg_frame_shadow_pane_g4

0xd855,	// (0x00059e28) bg_frame_shadow_pane_g5

0xd85d,	// (0x00059e30) bg_frame_shadow_pane_g6

0xd865,	// (0x00059e38) bg_frame_shadow_pane_g7

0xada1,	// (0x00057374) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0005be53) bg_frame_shadow_pane_g

0x9a6b,	// (0x0005603e) main_video_tele_dialer_pane

0x60f3,	// (0x000526c6) aid_size_cell_video_keypad_ParamLimits

0x60f3,	// (0x000526c6) aid_size_cell_video_keypad

0x610d,	// (0x000526e0) grid_video_dialer_keypad_pane_ParamLimits

0x610d,	// (0x000526e0) grid_video_dialer_keypad_pane

0x615b,	// (0x0005272e) video_down_pane_cp_ParamLimits

0x615b,	// (0x0005272e) video_down_pane_cp

0x618d,	// (0x00052760) cell_video_dialer_keypad_pane_ParamLimits

0x618d,	// (0x00052760) cell_video_dialer_keypad_pane

0xd86d,	// (0x00059e40) bg_button_pane_cp08_ParamLimits

0xd86d,	// (0x00059e40) bg_button_pane_cp08

0x61af,	// (0x00052782) cell_video_dialer_keypad_pane_g1_ParamLimits

0x61af,	// (0x00052782) cell_video_dialer_keypad_pane_g1

0x5838,	// (0x00051e0b) mup3_rocker2_pane_ParamLimits

0x5838,	// (0x00051e0b) mup3_rocker2_pane

0xcfe6,	// (0x000595b9) mup3_rocker2_pane_g1

0x431f,	// (0x000508f2) main_dialer2_pane

0x9a6b,	// (0x0005603e) main_mp4_pane

0x9fb0,	// (0x00056583) main_mp4_pane_g1_ParamLimits

0x9fb0,	// (0x00056583) main_mp4_pane_g1

0x9fb0,	// (0x00056583) main_mp4_pane_g2_ParamLimits

0x9fb0,	// (0x00056583) main_mp4_pane_g2

0x61ea,	// (0x000527bd) main_mp4_pane_g3_ParamLimits

0x61ea,	// (0x000527bd) main_mp4_pane_g3

0x9fbe,	// (0x00056591) main_mp4_pane_g4_ParamLimits

0x9fbe,	// (0x00056591) main_mp4_pane_g4

0x9fe6,	// (0x000565b9) main_mp4_pane_g5_ParamLimits

0x9fe6,	// (0x000565b9) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0005be73) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0005be73) main_mp4_pane_g

0xa036,	// (0x00056609) main_mp4_pane_t1_ParamLimits

0xa036,	// (0x00056609) main_mp4_pane_t1

0xa092,	// (0x00056665) main_mp4_pane_t2_ParamLimits

0xa092,	// (0x00056665) main_mp4_pane_t2

0xd879,	// (0x00059e4c) main_mp4_pane_t3_ParamLimits

0xd879,	// (0x00059e4c) main_mp4_pane_t3

0xa0e4,	// (0x000566b7) main_mp4_pane_t4_ParamLimits

0xa0e4,	// (0x000566b7) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0005be80) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0005be80) main_mp4_pane_t

0xa128,	// (0x000566fb) mp4_progress_pane_ParamLimits

0xa128,	// (0x000566fb) mp4_progress_pane

0xa172,	// (0x00056745) mp4_rocker_pane_ParamLimits

0xa172,	// (0x00056745) mp4_rocker_pane

0xd8a1,	// (0x00059e74) mp4_progress_pane_t1

0xd8ba,	// (0x00059e8d) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0005be89) mp4_progress_pane_t

0xd8d3,	// (0x00059ea6) mup_progress_pane_cp04

0xcfe6,	// (0x000595b9) mp4_rocker_pane_g1

0x6226,	// (0x000527f9) aid_cell_size_keypad2_ParamLimits

0x6226,	// (0x000527f9) aid_cell_size_keypad2

0x623c,	// (0x0005280f) dialer2_ne_pane_ParamLimits

0x623c,	// (0x0005280f) dialer2_ne_pane

0x6256,	// (0x00052829) grid_dialer2_keypad_pane_ParamLimits

0x6256,	// (0x00052829) grid_dialer2_keypad_pane

0xcdc9,	// (0x0005939c) bg_popup_call_pane_cp07_ParamLimits

0xcdc9,	// (0x0005939c) bg_popup_call_pane_cp07

0x6274,	// (0x00052847) dialer2_ne_pane_t1_ParamLimits

0x6274,	// (0x00052847) dialer2_ne_pane_t1

0x62b1,	// (0x00052884) cell_dialer2_keypad_pane_ParamLimits

0x62b1,	// (0x00052884) cell_dialer2_keypad_pane

0xd8f1,	// (0x00059ec4) bg_button_pane_pane_cp04_ParamLimits

0xd8f1,	// (0x00059ec4) bg_button_pane_pane_cp04

0x62d3,	// (0x000528a6) cell_dialer2_keypad_pane_g1_ParamLimits

0x62d3,	// (0x000528a6) cell_dialer2_keypad_pane_g1

0x1fc7,	// (0x0004e59a) aid_placing_vt_set_content_ParamLimits

0x1fc7,	// (0x0004e59a) aid_placing_vt_set_content

0x1fef,	// (0x0004e5c2) aid_placing_vt_set_title_ParamLimits

0x1fef,	// (0x0004e5c2) aid_placing_vt_set_title

0x9a6b,	// (0x0005603e) main_image3_pane

0x6399,	// (0x0005296c) area_side_right_pane_cp01_ParamLimits

0x6399,	// (0x0005296c) area_side_right_pane_cp01

0x9fb0,	// (0x00056583) main_image3_pane_g1_ParamLimits

0x9fb0,	// (0x00056583) main_image3_pane_g1

0x63b0,	// (0x00052983) main_image3_pane_g2_ParamLimits

0x63b0,	// (0x00052983) main_image3_pane_g2

0x63d8,	// (0x000529ab) main_image3_pane_g3_ParamLimits

0x63d8,	// (0x000529ab) main_image3_pane_g3

0x6402,	// (0x000529d5) main_image3_pane_g4_ParamLimits

0x6402,	// (0x000529d5) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0005be98) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0005be98) main_image3_pane_g

0x642c,	// (0x000529ff) main_image3_pane_t1_ParamLimits

0x642c,	// (0x000529ff) main_image3_pane_t1

0x6484,	// (0x00052a57) main_image3_pane_t2_ParamLimits

0x6484,	// (0x00052a57) main_image3_pane_t2

0x64d6,	// (0x00052aa9) main_image3_pane_t3_ParamLimits

0x64d6,	// (0x00052aa9) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0005bea1) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0005bea1) main_image3_pane_t

0xa74e,	// (0x00056d21) grid_sctrl_middle_pane_cp01_ParamLimits

0xa74e,	// (0x00056d21) grid_sctrl_middle_pane_cp01

0x655e,	// (0x00052b31) cell_sctrl_middle_pane_cp01_ParamLimits

0x655e,	// (0x00052b31) cell_sctrl_middle_pane_cp01

0x657b,	// (0x00052b4e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x657b,	// (0x00052b4e) cell_sctrl_middle_pane_cp01_g1

0x9a6b,	// (0x0005603e) main_call4_pane

0x6591,	// (0x00052b64) aid_size_button_call4_ParamLimits

0x6591,	// (0x00052b64) aid_size_button_call4

0x65c2,	// (0x00052b95) call4_windows_pane_ParamLimits

0x65c2,	// (0x00052b95) call4_windows_pane

0x65e2,	// (0x00052bb5) grid_call4_button_pane_ParamLimits

0x65e2,	// (0x00052bb5) grid_call4_button_pane

0xd8fd,	// (0x00059ed0) call4_windows_conf_pane

0xd912,	// (0x00059ee5) popup_call4_audio_first_window_ParamLimits

0xd912,	// (0x00059ee5) popup_call4_audio_first_window

0xd95e,	// (0x00059f31) popup_call4_audio_second_window_ParamLimits

0xd95e,	// (0x00059f31) popup_call4_audio_second_window

0xd972,	// (0x00059f45) popup_call4_audio_wait_window_ParamLimits

0xd972,	// (0x00059f45) popup_call4_audio_wait_window

0x660f,	// (0x00052be2) cell_call4_button_pane_ParamLimits

0x660f,	// (0x00052be2) cell_call4_button_pane

0x6638,	// (0x00052c0b) bg_button_pane_cp09_ParamLimits

0x6638,	// (0x00052c0b) bg_button_pane_cp09

0x6644,	// (0x00052c17) cell_call4_button_pane_g1_ParamLimits

0x6644,	// (0x00052c17) cell_call4_button_pane_g1

0x666a,	// (0x00052c3d) cell_call4_button_pane_t1_ParamLimits

0x666a,	// (0x00052c3d) cell_call4_button_pane_t1

0xd9ba,	// (0x00059f8d) popup_call4_audio_conf_window_ParamLimits

0xd9ba,	// (0x00059f8d) popup_call4_audio_conf_window

0x5898,	// (0x00051e6b) mup3_progress_pane_t1_ParamLimits

0x58b7,	// (0x00051e8a) mup3_progress_pane_t2_ParamLimits

0xd2c1,	// (0x00059894) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0005bd7a) mup3_progress_pane_t_ParamLimits

0xd2de,	// (0x000598b1) mup_progress_pane_cp03_ParamLimits

0x5ea6,	// (0x00052479) mup3_control_keys_pane_g4_copy1

0xa156,	// (0x00056729) mp4_rocker2_pane_ParamLimits

0xa156,	// (0x00056729) mp4_rocker2_pane

0xd9ce,	// (0x00059fa1) mp4_rocker2_pane_g1

0xd9d6,	// (0x00059fa9) mp4_rocker2_pane_g2

0xa1c4,	// (0x00056797) mp4_rocker2_pane_g3

0xa1cc,	// (0x0005679f) mp4_rocker2_pane_g4

0xa1d4,	// (0x000567a7) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0005beaa) mp4_rocker2_pane_g

0x9a6b,	// (0x0005603e) main_camera4_pane

0x9a6b,	// (0x0005603e) main_video4_pane

0x6129,	// (0x000526fc) main_video_tele_dialer_pane_t1_ParamLimits

0x6129,	// (0x000526fc) main_video_tele_dialer_pane_t1

0x6142,	// (0x00052715) main_video_tele_dialer_pane_t2_ParamLimits

0x6142,	// (0x00052715) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0005be64) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0005be64) main_video_tele_dialer_pane_t

0x66a8,	// (0x00052c7b) cam4_autofocus_pane_ParamLimits

0x66a8,	// (0x00052c7b) cam4_autofocus_pane

0x66be,	// (0x00052c91) cam4_image_uncrop_pane_ParamLimits

0x66be,	// (0x00052c91) cam4_image_uncrop_pane

0x66d8,	// (0x00052cab) cam4_indicators_pane_ParamLimits

0x66d8,	// (0x00052cab) cam4_indicators_pane

0x6703,	// (0x00052cd6) main_camera4_pane_g1_ParamLimits

0x6703,	// (0x00052cd6) main_camera4_pane_g1

0x6715,	// (0x00052ce8) main_camera4_pane_g2_ParamLimits

0x6715,	// (0x00052ce8) main_camera4_pane_g2

0x6728,	// (0x00052cfb) main_camera4_pane_g3_ParamLimits

0x6728,	// (0x00052cfb) main_camera4_pane_g3

0x673b,	// (0x00052d0e) main_camera4_pane_g4_ParamLimits

0x673b,	// (0x00052d0e) main_camera4_pane_g4

0x674e,	// (0x00052d21) main_camera4_pane_g5_ParamLimits

0x674e,	// (0x00052d21) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0005beb5) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0005beb5) main_camera4_pane_g

0x6772,	// (0x00052d45) main_camera4_pane_t1_ParamLimits

0x6772,	// (0x00052d45) main_camera4_pane_t1

0xd246,	// (0x00059819) bg_tb_trans_pane_cp06

0xa200,	// (0x000567d3) cam4_indicators_pane_g1

0xa211,	// (0x000567e4) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0005bed0) cam4_indicators_pane_g

0xa22f,	// (0x00056802) cam4_indicators_pane_t1

0x67d6,	// (0x00052da9) main_video4_pane_g1_ParamLimits

0x67d6,	// (0x00052da9) main_video4_pane_g1

0x67e5,	// (0x00052db8) main_video4_pane_g2_ParamLimits

0x67e5,	// (0x00052db8) main_video4_pane_g2

0x67f4,	// (0x00052dc7) main_video4_pane_g3_ParamLimits

0x67f4,	// (0x00052dc7) main_video4_pane_g3

0x6803,	// (0x00052dd6) main_video4_pane_g4_ParamLimits

0x6803,	// (0x00052dd6) main_video4_pane_g4

0x0004,

0xf904,	// (0x0005bed7) main_video4_pane_g_ParamLimits

0xf904,	// (0x0005bed7) main_video4_pane_g

0x6821,	// (0x00052df4) vid4_indicators_pane_ParamLimits

0x6821,	// (0x00052df4) vid4_indicators_pane

0x684f,	// (0x00052e22) video4_image_uncrop_cif_pane_ParamLimits

0x684f,	// (0x00052e22) video4_image_uncrop_cif_pane

0x6869,	// (0x00052e3c) video4_image_uncrop_nhd_pane_ParamLimits

0x6869,	// (0x00052e3c) video4_image_uncrop_nhd_pane

0x66be,	// (0x00052c91) video4_image_uncrop_vga_pane_ParamLimits

0x66be,	// (0x00052c91) video4_image_uncrop_vga_pane

0xa74e,	// (0x00056d21) bg_tb_trans_pane_cp07

0xa259,	// (0x0005682c) vid4_indicators_pane_g1

0xa26d,	// (0x00056840) vid4_indicators_pane_g2

0xa281,	// (0x00056854) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0005bee2) vid4_indicators_pane_g

0xa2ae,	// (0x00056881) vid4_indicators_pane_t1

0x687d,	// (0x00052e50) cam4_autofocus_pane_g1

0x6885,	// (0x00052e58) cam4_autofocus_pane_g2

0x688d,	// (0x00052e60) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0005beed) cam4_autofocus_pane_g

0x6895,	// (0x00052e68) cam4_autofocus_pane_g3_copy1

0x6171,	// (0x00052744) video_down_pane_cp_t1

0x617f,	// (0x00052752) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0005be69) video_down_pane_cp_t

0xa74e,	// (0x00056d21) popup_vitu2_window_ParamLimits

0xa74e,	// (0x00056d21) popup_vitu2_window

0x689d,	// (0x00052e70) aid_size_cell2_itu2_ParamLimits

0x689d,	// (0x00052e70) aid_size_cell2_itu2

0x68c3,	// (0x00052e96) aid_size_cell_itu2_ParamLimits

0x68c3,	// (0x00052e96) aid_size_cell_itu2

0x691f,	// (0x00052ef2) bg_popup_window_pane_cp09_ParamLimits

0x691f,	// (0x00052ef2) bg_popup_window_pane_cp09

0x692d,	// (0x00052f00) field_vitu2_entry_pane_ParamLimits

0x692d,	// (0x00052f00) field_vitu2_entry_pane

0x6953,	// (0x00052f26) grid_vitu2_function_pane_ParamLimits

0x6953,	// (0x00052f26) grid_vitu2_function_pane

0x69a4,	// (0x00052f77) grid_vitu2_itu_pane_ParamLimits

0x69a4,	// (0x00052f77) grid_vitu2_itu_pane

0x6a35,	// (0x00053008) cell_vitu2_itu_pane_ParamLimits

0x6a35,	// (0x00053008) cell_vitu2_itu_pane

0x6a59,	// (0x0005302c) cell_vitu2_function_pane_ParamLimits

0x6a59,	// (0x0005302c) cell_vitu2_function_pane

0xd9de,	// (0x00059fb1) bg_popup_call_pane_cp08_ParamLimits

0xd9de,	// (0x00059fb1) bg_popup_call_pane_cp08

0xd9f7,	// (0x00059fca) field_vitu2_entry_pane_g1

0xda03,	// (0x00059fd6) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0005bef4) field_vitu2_entry_pane_g

0x0438,	// (0x0004ca0b) field_vitu2_entry_pane_t1_ParamLimits

0x0438,	// (0x0004ca0b) field_vitu2_entry_pane_t1

0x6a98,	// (0x0005306b) field_vitu2_entry_pane_t2_ParamLimits

0x6a98,	// (0x0005306b) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0005befb) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0005befb) field_vitu2_entry_pane_t

0x6ab5,	// (0x00053088) bg_button_pane_cp010_ParamLimits

0x6ab5,	// (0x00053088) bg_button_pane_cp010

0x6ac3,	// (0x00053096) cell_vitu2_itu_pane_g1

0x6ae1,	// (0x000530b4) cell_vitu2_itu_pane_t1_ParamLimits

0x6ae1,	// (0x000530b4) cell_vitu2_itu_pane_t1

0x0469,	// (0x0004ca3c) cell_vitu2_itu_pane_t2_ParamLimits

0x0469,	// (0x0004ca3c) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0005bf05) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0005bf05) cell_vitu2_itu_pane_t

0xa74e,	// (0x00056d21) bg_button_pane_cp011

0x6b47,	// (0x0005311a) cell_vitu2_function_pane_g1

0x9a6b,	// (0x0005603e) main_myfav_hc_pane

0x6526,	// (0x00052af9) popup_image3_note_pane_ParamLimits

0x6526,	// (0x00052af9) popup_image3_note_pane

0x6542,	// (0x00052b15) popup_image3_tool_bar_pane_ParamLimits

0x6542,	// (0x00052b15) popup_image3_tool_bar_pane

0x04ed,	// (0x0004cac0) cell_vitu2_itu_pane_t3_ParamLimits

0x04ed,	// (0x0004cac0) cell_vitu2_itu_pane_t3

0x9a6b,	// (0x0005603e) bg_popup_trans_pane

0xda25,	// (0x00059ff8) grid_image3_tool_bar_pane

0xda2f,	// (0x0005a002) bg_popup_trans_pane_g1

0xb100,	// (0x000576d3) bg_popup_trans_pane_g2

0xda37,	// (0x0005a00a) bg_popup_trans_pane_g3

0xda3f,	// (0x0005a012) bg_popup_trans_pane_g4

0xda47,	// (0x0005a01a) bg_popup_trans_pane_g5

0xda4f,	// (0x0005a022) bg_popup_trans_pane_g6

0xda57,	// (0x0005a02a) bg_popup_trans_pane_g7

0xda5f,	// (0x0005a032) bg_popup_trans_pane_g8

0xb0e0,	// (0x000576b3) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0005bf0c) bg_popup_trans_pane_g

0xda67,	// (0x0005a03a) cell_image3_tool_bar_pane_ParamLimits

0xda67,	// (0x0005a03a) cell_image3_tool_bar_pane

0xcfe6,	// (0x000595b9) cell_image3_tool_bar_pane_g1

0x9a6b,	// (0x0005603e) bg_popup_trans_pane_cp1

0xda7b,	// (0x0005a04e) popup_image3_note_pane_t1

0xda89,	// (0x0005a05c) popup_image3_note_pane_t2

0xda97,	// (0x0005a06a) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0005bf1f) popup_image3_note_pane_t

0xdaa5,	// (0x0005a078) popup_image3_note_pane_t3_copy1

0x6b5b,	// (0x0005312e) bg_myfav_hc_instruction_pane_ParamLimits

0x6b5b,	// (0x0005312e) bg_myfav_hc_instruction_pane

0x6b71,	// (0x00053144) cell_myfav_contact_pane_ParamLimits

0x6b71,	// (0x00053144) cell_myfav_contact_pane

0x6b8f,	// (0x00053162) cell_myfav_contact_pane_cp1_ParamLimits

0x6b8f,	// (0x00053162) cell_myfav_contact_pane_cp1

0x6ba7,	// (0x0005317a) cell_myfav_contact_pane_cp2_ParamLimits

0x6ba7,	// (0x0005317a) cell_myfav_contact_pane_cp2

0x6bbf,	// (0x00053192) cell_myfav_contact_pane_cp3_ParamLimits

0x6bbf,	// (0x00053192) cell_myfav_contact_pane_cp3

0x6bd6,	// (0x000531a9) cell_myfav_contact_pane_cp4_ParamLimits

0x6bd6,	// (0x000531a9) cell_myfav_contact_pane_cp4

0x6bee,	// (0x000531c1) cell_myfav_contact_pane_cp5_ParamLimits

0x6bee,	// (0x000531c1) cell_myfav_contact_pane_cp5

0x6c02,	// (0x000531d5) cell_myfav_contact_pane_cp6_ParamLimits

0x6c02,	// (0x000531d5) cell_myfav_contact_pane_cp6

0x6c18,	// (0x000531eb) cell_myfav_contact_pane_cp7_ParamLimits

0x6c18,	// (0x000531eb) cell_myfav_contact_pane_cp7

0xdab3,	// (0x0005a086) listscroll_gen_pane_cp05

0x6c32,	// (0x00053205) main_myfav_hc_pane_g1_ParamLimits

0x6c32,	// (0x00053205) main_myfav_hc_pane_g1

0x6c4c,	// (0x0005321f) main_myfav_hc_pane_g2_ParamLimits

0x6c4c,	// (0x0005321f) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0005bf26) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0005bf26) main_myfav_hc_pane_g

0x6c7e,	// (0x00053251) main_myfav_hc_pane_t1_ParamLimits

0x6c7e,	// (0x00053251) main_myfav_hc_pane_t1

0xdabc,	// (0x0005a08f) main_myfav_hc_pane_t2_ParamLimits

0xdabc,	// (0x0005a08f) main_myfav_hc_pane_t2

0xdace,	// (0x0005a0a1) main_myfav_hc_pane_t3_ParamLimits

0xdace,	// (0x0005a0a1) main_myfav_hc_pane_t3

0x6c95,	// (0x00053268) main_myfav_hc_pane_t4_ParamLimits

0x6c95,	// (0x00053268) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0005bf2d) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0005bf2d) main_myfav_hc_pane_t

0xcfe6,	// (0x000595b9) bg_myfav_hc_instruction_pane_g1

0xdae0,	// (0x0005a0b3) cell_myfav_contact_pane_g1_ParamLimits

0xdae0,	// (0x0005a0b3) cell_myfav_contact_pane_g1

0xdae0,	// (0x0005a0b3) cell_myfav_contact_pane_g2_ParamLimits

0xdae0,	// (0x0005a0b3) cell_myfav_contact_pane_g2

0xdaec,	// (0x0005a0bf) cell_myfav_contact_pane_g3_ParamLimits

0xdaec,	// (0x0005a0bf) cell_myfav_contact_pane_g3

0xd2ab,	// (0x0005987e) cell_myfav_contact_pane_g4_ParamLimits

0xd2ab,	// (0x0005987e) cell_myfav_contact_pane_g4

0xdaf9,	// (0x0005a0cc) cell_myfav_contact_pane_g5_ParamLimits

0xdaf9,	// (0x0005a0cc) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0005bf38) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0005bf38) cell_myfav_contact_pane_g

0x6c66,	// (0x00053239) main_myfav_hc_pane_g3_ParamLimits

0x6c66,	// (0x00053239) main_myfav_hc_pane_g3

0x1015,	// (0x0004d5e8) popup_adpt_find_window

0x6cbd,	// (0x00053290) afind_page_pane_ParamLimits

0x6cbd,	// (0x00053290) afind_page_pane

0x6cd2,	// (0x000532a5) aid_size_cell_afind_ParamLimits

0x6cd2,	// (0x000532a5) aid_size_cell_afind

0x6cf0,	// (0x000532c3) bg_popup_sub_pane_cp09_ParamLimits

0x6cf0,	// (0x000532c3) bg_popup_sub_pane_cp09

0x6cfd,	// (0x000532d0) find_pane_cp01_ParamLimits

0x6cfd,	// (0x000532d0) find_pane_cp01

0xdb05,	// (0x0005a0d8) grid_afind_control_pane_ParamLimits

0xdb05,	// (0x0005a0d8) grid_afind_control_pane

0x6d0a,	// (0x000532dd) grid_afind_pane_ParamLimits

0x6d0a,	// (0x000532dd) grid_afind_pane

0x6d29,	// (0x000532fc) cell_afind_pane_ParamLimits

0x6d29,	// (0x000532fc) cell_afind_pane

0xcfe6,	// (0x000595b9) afind_page_pane_g1

0x6d8a,	// (0x0005335d) afind_page_pane_g2

0x6d93,	// (0x00053366) afind_page_pane_g3

0x0002,

0xf970,	// (0x0005bf43) afind_page_pane_g

0x6d9c,	// (0x0005336f) afind_page_pane_t1

0xdb19,	// (0x0005a0ec) cell_afind_grid_control_pane_ParamLimits

0xdb19,	// (0x0005a0ec) cell_afind_grid_control_pane

0xd8f1,	// (0x00059ec4) bg_button_pane_cp69_ParamLimits

0xd8f1,	// (0x00059ec4) bg_button_pane_cp69

0x6dbc,	// (0x0005338f) cell_afind_pane_g1_ParamLimits

0x6dbc,	// (0x0005338f) cell_afind_pane_g1

0x6dc9,	// (0x0005339c) cell_afind_pane_t1_ParamLimits

0x6dc9,	// (0x0005339c) cell_afind_pane_t1

0xaef9,	// (0x000574cc) bg_button_pane_cp72

0xdb28,	// (0x0005a0fb) cell_afind_grid_control_pane_g1

0x3ddd,	// (0x000503b0) aid_image_placing_area_ParamLimits

0x3ddd,	// (0x000503b0) aid_image_placing_area

0xd5bf,	// (0x00059b92) field_vitu_entry_pane_g1_ParamLimits

0xd5bf,	// (0x00059b92) field_vitu_entry_pane_g1

0xd5cb,	// (0x00059b9e) field_vitu_entry_pane_g2_ParamLimits

0xd5cb,	// (0x00059b9e) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0005bdf4) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0005bdf4) field_vitu_entry_pane_g

0x5f72,	// (0x00052545) cell_vitu_itu_pane_g1_ParamLimits

0x5fc2,	// (0x00052595) cell_vitu_itu_pane_t3_ParamLimits

0x5fc2,	// (0x00052595) cell_vitu_itu_pane_t3

0xd8a1,	// (0x00059e74) mp4_progress_pane_t1_ParamLimits

0xd8ba,	// (0x00059e8d) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0005be89) mp4_progress_pane_t_ParamLimits

0xd8d3,	// (0x00059ea6) mup_progress_pane_cp04_ParamLimits

0x6ca9,	// (0x0005327c) main_myfav_hc_pane_t5_ParamLimits

0x6ca9,	// (0x0005327c) main_myfav_hc_pane_t5

0x9a89,	// (0x0005605c) aid_zoom_text_primary

0x1015,	// (0x0004d5e8) popup_adpt_find_window_ParamLimits

0xa74e,	// (0x00056d21) main_cam_set_pane

0x66ef,	// (0x00052cc2) cam4_zoom_pane_ParamLimits

0x66ef,	// (0x00052cc2) cam4_zoom_pane

0x6ddb,	// (0x000533ae) main_cam_set_pane_g1_ParamLimits

0x6ddb,	// (0x000533ae) main_cam_set_pane_g1

0x6de9,	// (0x000533bc) main_cam_set_pane_g2_ParamLimits

0x6de9,	// (0x000533bc) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0005bf4a) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0005bf4a) main_cam_set_pane_g

0x6e0a,	// (0x000533dd) main_cam_set_pane_t1_ParamLimits

0x6e0a,	// (0x000533dd) main_cam_set_pane_t1

0x6e25,	// (0x000533f8) main_cset_listscroll_pane_ParamLimits

0x6e25,	// (0x000533f8) main_cset_listscroll_pane

0x6e45,	// (0x00053418) main_cset_slider_pane_ParamLimits

0x6e45,	// (0x00053418) main_cset_slider_pane

0xdb39,	// (0x0005a10c) main_cset_list_pane_ParamLimits

0xdb39,	// (0x0005a10c) main_cset_list_pane

0xdb49,	// (0x0005a11c) scroll_pane_cp028

0x6e6b,	// (0x0005343e) aid_area_touch_slider

0x6e87,	// (0x0005345a) cset_slider_pane

0x6eb1,	// (0x00053484) main_cset_slider_pane_g1

0x6ec6,	// (0x00053499) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0005bf4f) main_cset_slider_pane_g

0xdb82,	// (0x0005a155) main_cset_slider_pane_t1

0x6f82,	// (0x00053555) main_cset_slider_pane_t2

0x6f9c,	// (0x0005356f) main_cset_slider_pane_t3

0x6fb6,	// (0x00053589) main_cset_slider_pane_t4

0x6fd0,	// (0x000535a3) main_cset_slider_pane_t5

0x6fea,	// (0x000535bd) main_cset_slider_pane_t6

0x6fff,	// (0x000535d2) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0005bf74) main_cset_slider_pane_t

0x7103,	// (0x000536d6) cset_list_set_pane_ParamLimits

0x7103,	// (0x000536d6) cset_list_set_pane

0x7116,	// (0x000536e9) aid_position_infowindow_above

0x711e,	// (0x000536f1) aid_position_infowindow_below

0x7126,	// (0x000536f9) cset_list_set_pane_g1_ParamLimits

0x7126,	// (0x000536f9) cset_list_set_pane_g1

0x0545,	// (0x0004cb18) cset_list_set_pane_g3_ParamLimits

0x0545,	// (0x0004cb18) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0005bf93) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0005bf93) cset_list_set_pane_g

0x7132,	// (0x00053705) cset_list_set_pane_t1_ParamLimits

0x7132,	// (0x00053705) cset_list_set_pane_t1

0xa74e,	// (0x00056d21) list_highlight_pane_cp021_ParamLimits

0xa74e,	// (0x00056d21) list_highlight_pane_cp021

0xb904,	// (0x00057ed7) cset_slider_pane_g1

0xb916,	// (0x00057ee9) cset_slider_pane_g2

0xb90d,	// (0x00057ee0) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0005bf98) cset_slider_pane_g

0xa2c5,	// (0x00056898) aid_area_touch_cam4_zoom

0xa2cd,	// (0x000568a0) cam4_zoom_cont_pane

0xa2d5,	// (0x000568a8) cam4_zoom_pane_g1

0xa2dd,	// (0x000568b0) cam4_zoom_pane_g2

0x7147,	// (0x0005371a) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0005bf9f) cam4_zoom_pane_g

0xdc22,	// (0x0005a1f5) cam4_zoom_cont_pane_g1

0xdc2b,	// (0x0005a1fe) cam4_zoom_cont_pane_g2

0xdc34,	// (0x0005a207) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0005bfa6) cam4_zoom_cont_pane_g

0x65af,	// (0x00052b82) call4_image_pane_ParamLimits

0x65af,	// (0x00052b82) call4_image_pane

0xd8fd,	// (0x00059ed0) call4_windows_conf_pane_ParamLimits

0xd93c,	// (0x00059f0f) popup_call4_audio_in_window_ParamLimits

0xd93c,	// (0x00059f0f) popup_call4_audio_in_window

0x9a6b,	// (0x0005603e) bg_popup_call2_act_pane_cp02

0xd9b2,	// (0x00059f85) call4_list_conf_pane

0xcfe6,	// (0x000595b9) call4_image_pane_g1

0xcfe6,	// (0x000595b9) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0005bcba) call4_image_pane_g

0xdc3d,	// (0x0005a210) list_single_graphic_popup_conf4_pane_ParamLimits

0xdc3d,	// (0x0005a210) list_single_graphic_popup_conf4_pane

0x9a6b,	// (0x0005603e) list_highlight_pane_cp022

0xdc50,	// (0x0005a223) list_single_graphic_popup_conf4_pane_g1

0xb5dd,	// (0x00057bb0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0005bfad) list_single_graphic_popup_conf4_pane_g

0xdc58,	// (0x0005a22b) list_single_graphic_popup_conf4_pane_t1

0x2113,	// (0x0004e6e6) popup_vtel_slider_window_ParamLimits

0x2113,	// (0x0004e6e6) popup_vtel_slider_window

0xd8df,	// (0x00059eb2) dialer2_ne_pane_t2_ParamLimits

0xd8df,	// (0x00059eb2) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0005be8e) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0005be8e) dialer2_ne_pane_t

0xcdc9,	// (0x0005939c) bg_popup_sub_pane_cp010_ParamLimits

0xcdc9,	// (0x0005939c) bg_popup_sub_pane_cp010

0x714f,	// (0x00053722) popup_vtel_slider_window_g1_ParamLimits

0x714f,	// (0x00053722) popup_vtel_slider_window_g1

0x7162,	// (0x00053735) popup_vtel_slider_window_g2_ParamLimits

0x7162,	// (0x00053735) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0005bfb2) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0005bfb2) popup_vtel_slider_window_g

0x71b8,	// (0x0005378b) vtel_slider_pane_ParamLimits

0x71b8,	// (0x0005378b) vtel_slider_pane

0x71da,	// (0x000537ad) vtel_slider_pane_g1_ParamLimits

0x71da,	// (0x000537ad) vtel_slider_pane_g1

0x71ee,	// (0x000537c1) vtel_slider_pane_g2_ParamLimits

0x71ee,	// (0x000537c1) vtel_slider_pane_g2

0x7206,	// (0x000537d9) vtel_slider_pane_g3_ParamLimits

0x7206,	// (0x000537d9) vtel_slider_pane_g3

0x71da,	// (0x000537ad) vtel_slider_pane_g4_ParamLimits

0x71da,	// (0x000537ad) vtel_slider_pane_g4

0x721c,	// (0x000537ef) vtel_slider_pane_g5_ParamLimits

0x721c,	// (0x000537ef) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0005bfbb) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0005bfbb) vtel_slider_pane_g

0x9a6b,	// (0x0005603e) main_gallery2_pane

0x68ef,	// (0x00052ec2) aid_size_row_itut2_dropdow_list_ParamLimits

0x68ef,	// (0x00052ec2) aid_size_row_itut2_dropdow_list

0x697b,	// (0x00052f4e) grid_vitu2_function_top_pane_ParamLimits

0x697b,	// (0x00052f4e) grid_vitu2_function_top_pane

0x69e0,	// (0x00052fb3) popup_vitu2_dropdown_list_window_ParamLimits

0x69e0,	// (0x00052fb3) popup_vitu2_dropdown_list_window

0x6a09,	// (0x00052fdc) popup_vitu2_match_list_window

0x7240,	// (0x00053813) cell_vitu2_function_top_pane_ParamLimits

0x7240,	// (0x00053813) cell_vitu2_function_top_pane

0x725e,	// (0x00053831) cell_vitu2_function_top_pane_cp01_ParamLimits

0x725e,	// (0x00053831) cell_vitu2_function_top_pane_cp01

0x727c,	// (0x0005384f) cell_vitu2_function_top_wide_pane_ParamLimits

0x727c,	// (0x0005384f) cell_vitu2_function_top_wide_pane

0xa74e,	// (0x00056d21) bg_button_pane_cp012

0x729a,	// (0x0005386d) cell_vitu2_function_top_pane_g1

0xa2e5,	// (0x000568b8) bg_button_pane_cp013_ParamLimits

0xa2e5,	// (0x000568b8) bg_button_pane_cp013

0x72ae,	// (0x00053881) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x72ae,	// (0x00053881) cell_vitu2_function_top_wide_pane_g1

0xa74e,	// (0x00056d21) bg_popup_sub_pane_cp20

0x72c6,	// (0x00053899) list_vitu2_match_list_pane

0xda2f,	// (0x0005a002) bg_popup_sub_pane_cp20_g1

0xda37,	// (0x0005a00a) bg_popup_sub_pane_cp20_g2

0xb100,	// (0x000576d3) bg_popup_sub_pane_cp20_g3

0xda3f,	// (0x0005a012) bg_popup_sub_pane_cp20_g4

0xb0e0,	// (0x000576b3) bg_popup_sub_pane_cp20_g5

0xdc6e,	// (0x0005a241) bg_popup_sub_pane_cp20_g6

0xda4f,	// (0x0005a022) bg_popup_sub_pane_cp20_g7

0xda57,	// (0x0005a02a) bg_popup_sub_pane_cp20_g8

0xda5f,	// (0x0005a032) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0005bfc6) bg_popup_sub_pane_cp20_g

0xa301,	// (0x000568d4) list_vitu2_match_list_item_pane_ParamLimits

0xa301,	// (0x000568d4) list_vitu2_match_list_item_pane

0xa313,	// (0x000568e6) list_vitu2_match_list_item_pane_t1

0x9a6b,	// (0x0005603e) bg_popup_sub_pane_cp21

0xb4e1,	// (0x00057ab4) grid_vitu2_dropdown_list_pane

0x72fc,	// (0x000538cf) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x72fc,	// (0x000538cf) cell_vitu2_dropdown_list_char_pane

0x731d,	// (0x000538f0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x731d,	// (0x000538f0) cell_vitu2_dropdown_list_ctrl_pane

0xdc76,	// (0x0005a249) cell_vitu2_dropdown_list_char_pane_g1

0xdc7f,	// (0x0005a252) cell_vitu2_dropdown_list_char_pane_g2

0xdc88,	// (0x0005a25b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0005bfe3) cell_vitu2_dropdown_list_char_pane_g

0x7349,	// (0x0005391c) cell_vitu2_dropdown_list_char_pane_t1

0x7357,	// (0x0005392a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7357,	// (0x0005392a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7367,	// (0x0005393a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7367,	// (0x0005393a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7378,	// (0x0005394b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7378,	// (0x0005394b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7388,	// (0x0005395b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7388,	// (0x0005395b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd246,	// (0x00059819) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd246,	// (0x00059819) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0005bfea) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0005bfea) cell_vitu2_dropdown_list_ctrl_pane_g

0x73a4,	// (0x00053977) aid_size_cell_gallery2_ParamLimits

0x73a4,	// (0x00053977) aid_size_cell_gallery2

0x73ba,	// (0x0005398d) grid_gallery2_pane_ParamLimits

0x73ba,	// (0x0005398d) grid_gallery2_pane

0x73ce,	// (0x000539a1) scroll_pane_cp029_ParamLimits

0x73ce,	// (0x000539a1) scroll_pane_cp029

0x73da,	// (0x000539ad) cell_gallery2_pane_ParamLimits

0x73da,	// (0x000539ad) cell_gallery2_pane

0xdc91,	// (0x0005a264) cell_gallery2_pane_g2

0x7410,	// (0x000539e3) cell_gallery2_pane_g3

0xdc9b,	// (0x0005a26e) cell_gallery2_pane_g4

0xdca3,	// (0x0005a276) cell_gallery2_pane_g5

0xb7c0,	// (0x00057d93) grid_highlight_pane_cp10

0x6a09,	// (0x00052fdc) popup_vitu2_match_list_window_ParamLimits

0x6a1e,	// (0x00052ff1) popup_vitu2_query_window_ParamLimits

0x6a1e,	// (0x00052ff1) popup_vitu2_query_window

0x9a6b,	// (0x0005603e) bg_vitu2_candi_button_pane

0xdc76,	// (0x0005a249) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdc7f,	// (0x0005a252) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdc88,	// (0x0005a25b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0589,	// (0x0004cb5c) bg_button_pane_cp015

0x7418,	// (0x000539eb) bg_button_pane_cp016

0x742b,	// (0x000539fe) bg_button_pane_cp017

0xcbd0,	// (0x000591a3) bg_popup_sub_pane_cp22

0xdcab,	// (0x0005a27e) popup_vitu2_query_window_g1

0x05be,	// (0x0004cb91) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0005bff5) popup_vitu2_query_window_g

0x05dd,	// (0x0004cbb0) popup_vitu2_query_window_t1_ParamLimits

0x05dd,	// (0x0004cbb0) popup_vitu2_query_window_t1

0x0612,	// (0x0004cbe5) popup_vitu2_query_window_t2_ParamLimits

0x0612,	// (0x0004cbe5) popup_vitu2_query_window_t2

0x0624,	// (0x0004cbf7) popup_vitu2_query_window_t3_ParamLimits

0x0624,	// (0x0004cbf7) popup_vitu2_query_window_t3

0x744f,	// (0x00053a22) popup_vitu2_query_window_t4_ParamLimits

0x744f,	// (0x00053a22) popup_vitu2_query_window_t4

0x7470,	// (0x00053a43) popup_vitu2_query_window_t5_ParamLimits

0x7470,	// (0x00053a43) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0005bffc) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0005bffc) popup_vitu2_query_window_t

0xdb31,	// (0x0005a104) main_cset_text_pane

0x6e6b,	// (0x0005343e) aid_area_touch_slider_ParamLimits

0x6e87,	// (0x0005345a) cset_slider_pane_ParamLimits

0x6eb1,	// (0x00053484) main_cset_slider_pane_g1_ParamLimits

0x6ec6,	// (0x00053499) main_cset_slider_pane_g2_ParamLimits

0xdb52,	// (0x0005a125) main_cset_slider_pane_g3_ParamLimits

0xdb52,	// (0x0005a125) main_cset_slider_pane_g3

0x6edb,	// (0x000534ae) main_cset_slider_pane_g4_ParamLimits

0x6edb,	// (0x000534ae) main_cset_slider_pane_g4

0x6eea,	// (0x000534bd) main_cset_slider_pane_g5_ParamLimits

0x6eea,	// (0x000534bd) main_cset_slider_pane_g5

0x6ef6,	// (0x000534c9) main_cset_slider_pane_g6_ParamLimits

0x6ef6,	// (0x000534c9) main_cset_slider_pane_g6

0xf97c,	// (0x0005bf4f) main_cset_slider_pane_g_ParamLimits

0xdb82,	// (0x0005a155) main_cset_slider_pane_t1_ParamLimits

0x6f82,	// (0x00053555) main_cset_slider_pane_t2_ParamLimits

0x6f9c,	// (0x0005356f) main_cset_slider_pane_t3_ParamLimits

0x6fb6,	// (0x00053589) main_cset_slider_pane_t4_ParamLimits

0x6fd0,	// (0x000535a3) main_cset_slider_pane_t5_ParamLimits

0x6fea,	// (0x000535bd) main_cset_slider_pane_t6_ParamLimits

0x6fff,	// (0x000535d2) main_cset_slider_pane_t7_ParamLimits

0x7029,	// (0x000535fc) main_cset_slider_pane_t8_ParamLimits

0x7029,	// (0x000535fc) main_cset_slider_pane_t8

0x7051,	// (0x00053624) main_cset_slider_pane_t9_ParamLimits

0x7051,	// (0x00053624) main_cset_slider_pane_t9

0x7079,	// (0x0005364c) main_cset_slider_pane_t10_ParamLimits

0x7079,	// (0x0005364c) main_cset_slider_pane_t10

0x70a1,	// (0x00053674) main_cset_slider_pane_t11_ParamLimits

0x70a1,	// (0x00053674) main_cset_slider_pane_t11

0x70c9,	// (0x0005369c) main_cset_slider_pane_t12_ParamLimits

0x70c9,	// (0x0005369c) main_cset_slider_pane_t12

0x70e6,	// (0x000536b9) main_cset_slider_pane_t13_ParamLimits

0x70e6,	// (0x000536b9) main_cset_slider_pane_t13

0xf9a1,	// (0x0005bf74) main_cset_slider_pane_t_ParamLimits

0x9a6b,	// (0x0005603e) bg_popup_sub_pane_cp011

0xdcb7,	// (0x0005a28a) main_cset_text_pane_g1

0xdcbf,	// (0x0005a292) main_cset_text_pane_t1

0xdccd,	// (0x0005a2a0) main_cset_text_pane_t2

0xdcdb,	// (0x0005a2ae) main_cset_text_pane_t3

0xdce9,	// (0x0005a2bc) main_cset_text_pane_t4

0xdcf7,	// (0x0005a2ca) main_cset_text_pane_t5

0xdd05,	// (0x0005a2d8) main_cset_text_pane_t6

0xdd13,	// (0x0005a2e6) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0005c00b) main_cset_text_pane_t

0x9a6b,	// (0x0005603e) main_cam4_burst_pane

0x9a6b,	// (0x0005603e) main_cam5_pane

0x6daa,	// (0x0005337d) bg_button_pane_cp019

0x6db3,	// (0x00053386) bg_button_pane_cp020

0xdb5e,	// (0x0005a131) main_cset_slider_pane_g7_ParamLimits

0xdb5e,	// (0x0005a131) main_cset_slider_pane_g7

0xdb6a,	// (0x0005a13d) main_cset_slider_pane_g8_ParamLimits

0xdb6a,	// (0x0005a13d) main_cset_slider_pane_g8

0x6f0a,	// (0x000534dd) main_cset_slider_pane_g9_ParamLimits

0x6f0a,	// (0x000534dd) main_cset_slider_pane_g9

0x6f16,	// (0x000534e9) main_cset_slider_pane_g10_ParamLimits

0x6f16,	// (0x000534e9) main_cset_slider_pane_g10

0x6f22,	// (0x000534f5) main_cset_slider_pane_g11_ParamLimits

0x6f22,	// (0x000534f5) main_cset_slider_pane_g11

0x6f2e,	// (0x00053501) main_cset_slider_pane_g12_ParamLimits

0x6f2e,	// (0x00053501) main_cset_slider_pane_g12

0x6f3a,	// (0x0005350d) main_cset_slider_pane_g13_ParamLimits

0x6f3a,	// (0x0005350d) main_cset_slider_pane_g13

0x6f46,	// (0x00053519) main_cset_slider_pane_g14_ParamLimits

0x6f46,	// (0x00053519) main_cset_slider_pane_g14

0x6f52,	// (0x00053525) main_cset_slider_pane_g15_ParamLimits

0x6f52,	// (0x00053525) main_cset_slider_pane_g15

0xdbb0,	// (0x0005a183) main_cset_slider_pane_t14_ParamLimits

0xdbb0,	// (0x0005a183) main_cset_slider_pane_t14

0xdbe9,	// (0x0005a1bc) main_cset_slider_pane_t15_ParamLimits

0xdbe9,	// (0x0005a1bc) main_cset_slider_pane_t15

0x7491,	// (0x00053a64) aid_cam4_burst_size_cell_ParamLimits

0x7491,	// (0x00053a64) aid_cam4_burst_size_cell

0x74b1,	// (0x00053a84) grid_cam4_burst_pane_ParamLimits

0x74b1,	// (0x00053a84) grid_cam4_burst_pane

0x74e9,	// (0x00053abc) linegrid_cam4_burst_pane_ParamLimits

0x74e9,	// (0x00053abc) linegrid_cam4_burst_pane

0xdd21,	// (0x0005a2f4) scroll_pane_cp30_ParamLimits

0xdd21,	// (0x0005a2f4) scroll_pane_cp30

0x750f,	// (0x00053ae2) cell_cam4_burst_pane_ParamLimits

0x750f,	// (0x00053ae2) cell_cam4_burst_pane

0xdd2d,	// (0x0005a300) linegrid_cam4_burst_pane_g1_ParamLimits

0xdd2d,	// (0x0005a300) linegrid_cam4_burst_pane_g1

0x755c,	// (0x00053b2f) linegrid_cam4_burst_pane_g2_ParamLimits

0x755c,	// (0x00053b2f) linegrid_cam4_burst_pane_g2

0xdd3a,	// (0x0005a30d) linegrid_cam4_burst_pane_g3_ParamLimits

0xdd3a,	// (0x0005a30d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0005c01a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0005c01a) linegrid_cam4_burst_pane_g

0x756d,	// (0x00053b40) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x756d,	// (0x00053b40) linegrid_cam4_burst_pane_g3_copy1

0xdd47,	// (0x0005a31a) linegrid_cam4_burst_pane_g4_ParamLimits

0xdd47,	// (0x0005a31a) linegrid_cam4_burst_pane_g4

0x7587,	// (0x00053b5a) linegrid_cam4_burst_pane_g5_ParamLimits

0x7587,	// (0x00053b5a) linegrid_cam4_burst_pane_g5

0x7598,	// (0x00053b6b) linegrid_cam4_burst_pane_g6_ParamLimits

0x7598,	// (0x00053b6b) linegrid_cam4_burst_pane_g6

0xdd54,	// (0x0005a327) linegrid_cam4_burst_pane_g7_ParamLimits

0xdd54,	// (0x0005a327) linegrid_cam4_burst_pane_g7

0x75af,	// (0x00053b82) cell_cam4_burst_pane_g1

0xdd6d,	// (0x0005a340) main_cam5_pane_t1_ParamLimits

0xdd6d,	// (0x0005a340) main_cam5_pane_t1

0xdd7f,	// (0x0005a352) main_cam5_pane_t2_ParamLimits

0xdd7f,	// (0x0005a352) main_cam5_pane_t2

0xdd91,	// (0x0005a364) main_cam5_pane_t3_ParamLimits

0xdd91,	// (0x0005a364) main_cam5_pane_t3

0xdda3,	// (0x0005a376) main_cam5_pane_t4_ParamLimits

0xdda3,	// (0x0005a376) main_cam5_pane_t4

0xddbb,	// (0x0005a38e) main_cam5_pane_t5_ParamLimits

0xddbb,	// (0x0005a38e) main_cam5_pane_t5

0xddcf,	// (0x0005a3a2) main_cam5_pane_t6_ParamLimits

0xddcf,	// (0x0005a3a2) main_cam5_pane_t6

0xdde3,	// (0x0005a3b6) main_cam5_pane_t7_ParamLimits

0xdde3,	// (0x0005a3b6) main_cam5_pane_t7

0xddf5,	// (0x0005a3c8) main_cam5_pane_t8_ParamLimits

0xddf5,	// (0x0005a3c8) main_cam5_pane_t8

0xde11,	// (0x0005a3e4) main_cam5_pane_t9_ParamLimits

0xde11,	// (0x0005a3e4) main_cam5_pane_t9

0xde23,	// (0x0005a3f6) main_cam5_pane_t10_ParamLimits

0xde23,	// (0x0005a3f6) main_cam5_pane_t10

0xde35,	// (0x0005a408) main_cam5_pane_t11_ParamLimits

0xde35,	// (0x0005a408) main_cam5_pane_t11

0xde47,	// (0x0005a41a) main_cam5_pane_t12_ParamLimits

0xde47,	// (0x0005a41a) main_cam5_pane_t12

0xde5c,	// (0x0005a42f) main_cam5_pane_t13_ParamLimits

0xde5c,	// (0x0005a42f) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0005c026) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0005c026) main_cam5_pane_t

0x1097,	// (0x0004d66a) popup_scut_keymap_window_ParamLimits

0x1097,	// (0x0004d66a) popup_scut_keymap_window

0x75c4,	// (0x00053b97) aid_size_cell_brow_shortcut

0xb7c0,	// (0x00057d93) bg_popup_window_pane_cp010

0x75d0,	// (0x00053ba3) grid_scut_pane

0x75dc,	// (0x00053baf) cell_scut_pane_ParamLimits

0x75dc,	// (0x00053baf) cell_scut_pane

0x75f3,	// (0x00053bc6) cell_scut_pane_g1

0xde79,	// (0x0005a44c) cell_scut_pane_t1

0xde88,	// (0x0005a45b) cell_scut_pane_t2

0x75fc,	// (0x00053bcf) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0005c041) cell_scut_pane_t

0x545b,	// (0x00051a2e) main_mup3_pane_g8_ParamLimits

0x545b,	// (0x00051a2e) main_mup3_pane_g8

0x6907,	// (0x00052eda) area_vitu2_query_pane_ParamLimits

0x6907,	// (0x00052eda) area_vitu2_query_pane

0x059d,	// (0x0004cb70) input_focus_pane_cp08

0xde97,	// (0x0005a46a) area_vitu2_query_pane_g1

0x06a2,	// (0x0004cc75) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0005c048) area_vitu2_query_pane_g

0x760a,	// (0x00053bdd) area_vitu2_query_pane_t1_ParamLimits

0x760a,	// (0x00053bdd) area_vitu2_query_pane_t1

0x761e,	// (0x00053bf1) area_vitu2_query_pane_t2_ParamLimits

0x761e,	// (0x00053bf1) area_vitu2_query_pane_t2

0x06b3,	// (0x0004cc86) area_vitu2_query_pane_t3_ParamLimits

0x06b3,	// (0x0004cc86) area_vitu2_query_pane_t3

0x7632,	// (0x00053c05) area_vitu2_query_pane_t4_ParamLimits

0x7632,	// (0x00053c05) area_vitu2_query_pane_t4

0x765a,	// (0x00053c2d) area_vitu2_query_pane_t5_ParamLimits

0x765a,	// (0x00053c2d) area_vitu2_query_pane_t5

0x7682,	// (0x00053c55) area_vitu2_query_pane_t6_ParamLimits

0x7682,	// (0x00053c55) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0005c04d) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0005c04d) area_vitu2_query_pane_t

0x76ce,	// (0x00053ca1) bg_button_pane_cp018

0x76dc,	// (0x00053caf) bg_button_pane_cp021

0x06db,	// (0x0004ccae) bg_button_pane_cp022

0x06ec,	// (0x0004ccbf) input_focus_pane_cp09

0x33a0,	// (0x0004f973) aid_size_touch_mv_arrow_left

0x33c9,	// (0x0004f99c) aid_size_touch_mv_arrow_right

0x6f6a,	// (0x0005353d) main_cset_slider_pane_g16_ParamLimits

0x6f6a,	// (0x0005353d) main_cset_slider_pane_g16

0x6f76,	// (0x00053549) main_cset_slider_pane_g17_ParamLimits

0x6f76,	// (0x00053549) main_cset_slider_pane_g17

0x75af,	// (0x00053b82) cell_cam4_burst_pane_g1_ParamLimits

0x9a6b,	// (0x0005603e) compa_mode_pane

0x7172,	// (0x00053745) popup_vtel_slider_window_g3_ParamLimits

0x7172,	// (0x00053745) popup_vtel_slider_window_g3

0x7189,	// (0x0005375c) popup_vtel_slider_window_g4_ParamLimits

0x7189,	// (0x0005375c) popup_vtel_slider_window_g4

0x71a0,	// (0x00053773) popup_vtel_slider_window_t1_ParamLimits

0x71a0,	// (0x00053773) popup_vtel_slider_window_t1

0x9a6b,	// (0x0005603e) main_cl_pane

0x9e60,	// (0x00056433) popup_imed_adjust2_window_ParamLimits

0xcbd0,	// (0x000591a3) bg_tb_trans_pane_cp05_ParamLimits

0xd4eb,	// (0x00059abe) popup_imed_adjust2_window_g1_ParamLimits

0xd4fa,	// (0x00059acd) popup_imed_adjust2_window_g2_ParamLimits

0xd4fa,	// (0x00059acd) popup_imed_adjust2_window_g2

0xd506,	// (0x00059ad9) popup_imed_adjust2_window_g3_ParamLimits

0xd506,	// (0x00059ad9) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0005bdb8) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0005bdb8) popup_imed_adjust2_window_g

0xd512,	// (0x00059ae5) popup_imed_adjust2_window_t1_ParamLimits

0xd52a,	// (0x00059afd) slider_imed_adjust_pane_ParamLimits

0xd53e,	// (0x00059b11) slider_imed_adjust_pane_g1_ParamLimits

0xd54e,	// (0x00059b21) slider_imed_adjust_pane_g2_ParamLimits

0xd55e,	// (0x00059b31) slider_imed_adjust_pane_g3_ParamLimits

0xd56f,	// (0x00059b42) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0005bdbf) slider_imed_adjust_pane_g_ParamLimits

0x6690,	// (0x00052c63) aid_touch_area_cam4_ParamLimits

0x6690,	// (0x00052c63) aid_touch_area_cam4

0xa1dc,	// (0x000567af) battery_pane_cp01

0x675f,	// (0x00052d32) main_camera4_pane_g6_ParamLimits

0x675f,	// (0x00052d32) main_camera4_pane_g6

0x6789,	// (0x00052d5c) main_camera4_pane_t2_ParamLimits

0x6789,	// (0x00052d5c) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0005bec2) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0005bec2) main_camera4_pane_t

0x67be,	// (0x00052d91) aid_touch_area_vid4_ParamLimits

0x67be,	// (0x00052d91) aid_touch_area_vid4

0x6812,	// (0x00052de5) main_video4_pane_g5_ParamLimits

0x6812,	// (0x00052de5) main_video4_pane_g5

0x6837,	// (0x00052e0a) vid4_progress_pane_ParamLimits

0x6837,	// (0x00052e0a) vid4_progress_pane

0xdb76,	// (0x0005a149) main_cset_slider_pane_g18_ParamLimits

0xdb76,	// (0x0005a149) main_cset_slider_pane_g18

0xdd61,	// (0x0005a334) cell_cam4_burst_pane_g2_ParamLimits

0xdd61,	// (0x0005a334) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0005c021) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0005c021) cell_cam4_burst_pane_g

0xacd6,	// (0x000572a9) bg_cl_pane_ParamLimits

0xacd6,	// (0x000572a9) bg_cl_pane

0x76e8,	// (0x00053cbb) cl_header_pane_ParamLimits

0x76e8,	// (0x00053cbb) cl_header_pane

0x76fc,	// (0x00053ccf) cl_listscroll_pane_ParamLimits

0x76fc,	// (0x00053ccf) cl_listscroll_pane

0xdea3,	// (0x0005a476) bg_cl_pane_g1

0xdeab,	// (0x0005a47e) bg_cl_pane_g2

0xdeb3,	// (0x0005a486) bg_cl_pane_g3

0xdebb,	// (0x0005a48e) bg_cl_pane_g4

0xdec3,	// (0x0005a496) bg_cl_pane_g5

0xdecb,	// (0x0005a49e) bg_cl_pane_g6

0xded3,	// (0x0005a4a6) bg_cl_pane_g7

0xdedb,	// (0x0005a4ae) bg_cl_pane_g8

0xdee3,	// (0x0005a4b6) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0005c05c) bg_cl_pane_g

0x770c,	// (0x00053cdf) aid_height_cl_leading_ParamLimits

0x770c,	// (0x00053cdf) aid_height_cl_leading

0x7718,	// (0x00053ceb) aid_height_cl_text_ParamLimits

0x7718,	// (0x00053ceb) aid_height_cl_text

0xa74e,	// (0x00056d21) bg_cl_header_pane_ParamLimits

0xa74e,	// (0x00056d21) bg_cl_header_pane

0x7737,	// (0x00053d0a) cl_header_pane_g1_ParamLimits

0x7737,	// (0x00053d0a) cl_header_pane_g1

0x774d,	// (0x00053d20) cl_header_pane_t1_ParamLimits

0x774d,	// (0x00053d20) cl_header_pane_t1

0xdeeb,	// (0x0005a4be) cl_list_pane

0xdb49,	// (0x0005a11c) hc_scroll_pane_cp01

0xb0e0,	// (0x000576b3) bg_cl_header_pane_g1

0xda2f,	// (0x0005a002) bg_cl_header_pane_g2

0xb100,	// (0x000576d3) bg_cl_header_pane_g3

0xda3f,	// (0x0005a012) bg_cl_header_pane_g4

0xda37,	// (0x0005a00a) bg_cl_header_pane_g5

0xdc6e,	// (0x0005a241) bg_cl_header_pane_g6

0xda57,	// (0x0005a02a) bg_cl_header_pane_g7

0xda5f,	// (0x0005a032) bg_cl_header_pane_g8

0xda4f,	// (0x0005a022) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0005c06f) bg_cl_header_pane_g

0x7766,	// (0x00053d39) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7766,	// (0x00053d39) hc_cl_list_double_graphic_heading_pane

0x7777,	// (0x00053d4a) hc_cl_list_single_graphic_pane_ParamLimits

0x7777,	// (0x00053d4a) hc_cl_list_single_graphic_pane

0x7790,	// (0x00053d63) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7790,	// (0x00053d63) hc_cl_list_single_graphic_pane_g1

0x779c,	// (0x00053d6f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x779c,	// (0x00053d6f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0005c082) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0005c082) hc_cl_list_single_graphic_pane_g

0x77b0,	// (0x00053d83) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x77b0,	// (0x00053d83) hc_cl_list_single_graphic_pane_t1

0x7790,	// (0x00053d63) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7790,	// (0x00053d63) hc_cl_list_double_graphic_heading_pane_g1

0x77c5,	// (0x00053d98) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x77c5,	// (0x00053d98) hc_cl_list_double_graphic_heading_pane_g2

0x77d9,	// (0x00053dac) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x77d9,	// (0x00053dac) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0005c087) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0005c087) hc_cl_list_double_graphic_heading_pane_g

0x77ed,	// (0x00053dc0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x77ed,	// (0x00053dc0) hc_cl_list_double_graphic_heading_pane_t1

0x7802,	// (0x00053dd5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7802,	// (0x00053dd5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0005c08e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0005c08e) hc_cl_list_double_graphic_heading_pane_t

0x7817,	// (0x00053dea) vid4_progress_pane_g1

0x7829,	// (0x00053dfc) vid4_progress_pane_g2

0x9e2e,	// (0x00056401) vid4_progress_pane_g3

0xa329,	// (0x000568fc) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0005c093) vid4_progress_pane_g

0xa347,	// (0x0005691a) vid4_progress_pane_t1

0xa35c,	// (0x0005692f) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0005c09e) vid4_progress_pane_t

0xa388,	// (0x0005695b) wait_bar_pane_cp07

0xcdd7,	// (0x000593aa) blid_firmament_pane_ParamLimits

0xce1a,	// (0x000593ed) popup_blid_sat_info2_window_g1

0xce3e,	// (0x00059411) popup_blid_sat_info2_window_t3

0xce4c,	// (0x0005941f) popup_blid_sat_info2_window_t4

0xce5a,	// (0x0005942d) popup_blid_sat_info2_window_t5

0xce68,	// (0x0005943b) popup_blid_sat_info2_window_t6

0xce78,	// (0x0005944b) popup_blid_sat_info2_window_t7

0xce86,	// (0x00059459) popup_blid_sat_info2_window_t8

0xce94,	// (0x00059467) popup_blid_sat_info2_window_t9

0xcea2,	// (0x00059475) popup_blid_sat_info2_window_t10

0xcf66,	// (0x00059539) aid_firma_cardinal_ParamLimits

0xcf7a,	// (0x0005954d) blid_firmament_pane_t1_ParamLimits

0xcf91,	// (0x00059564) blid_firmament_pane_t2_ParamLimits

0xcfa8,	// (0x0005957b) blid_firmament_pane_t3_ParamLimits

0xcfbf,	// (0x00059592) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0005bcb1) blid_firmament_pane_t_ParamLimits

0xcfd6,	// (0x000595a9) blid_sat_info_pane_ParamLimits

0xa74e,	// (0x00056d21) main_cam_set_pane_ParamLimits

0x5d21,	// (0x000522f4) aid_size_cell_colour_35_ParamLimits

0x5d41,	// (0x00052314) aid_size_cell_colour_112_ParamLimits

0x5d61,	// (0x00052334) aid_size_cell_effect_ParamLimits

0xcbd0,	// (0x000591a3) bg_tb_trans_pane_cp02_ParamLimits

0xb2c4,	// (0x00057897) heading_imed_pane_ParamLimits

0x5d81,	// (0x00052354) listscroll_imed_pane_ParamLimits

0xc1f6,	// (0x000587c9) popup_call2_audio_first_window_g5_ParamLimits

0xc1f6,	// (0x000587c9) popup_call2_audio_first_window_g5

0x633b,	// (0x0005290e) aid_size_touch_image3_arrow_left_ParamLimits

0x633b,	// (0x0005290e) aid_size_touch_image3_arrow_left

0x6367,	// (0x0005293a) aid_size_touch_image3_arrow_right_ParamLimits

0x6367,	// (0x0005293a) aid_size_touch_image3_arrow_right

0xa372,	// (0x00056945) vid4_progress_pane_t3

0x60ad,	// (0x00052680) main_hwr_training_symbol_option_pane_ParamLimits

0x60ad,	// (0x00052680) main_hwr_training_symbol_option_pane

0xd7e1,	// (0x00059db4) popup_hwr_training_preview_window_ParamLimits

0xd7e1,	// (0x00059db4) popup_hwr_training_preview_window

0x60cd,	// (0x000526a0) hwr_training_navi_pane_g5_ParamLimits

0x60cd,	// (0x000526a0) hwr_training_navi_pane_g5

0xda1d,	// (0x00059ff0) popup_char_count_window

0xa74e,	// (0x00056d21) bg_popup_sub_pane_cp20_ParamLimits

0x72c6,	// (0x00053899) list_vitu2_match_list_pane_ParamLimits

0x72d5,	// (0x000538a8) vitu2_page_scroll_pane_ParamLimits

0x72d5,	// (0x000538a8) vitu2_page_scroll_pane

0xdef4,	// (0x0005a4c7) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdef4,	// (0x0005a4c7) list_single_hwr_training_symbol_option_pane

0xdf07,	// (0x0005a4da) list_single_hwr_training_symbol_option_pane_g1

0xdf0f,	// (0x0005a4e2) list_single_hwr_training_symbol_option_pane_t1

0xdf1d,	// (0x0005a4f0) bg_button_pane_cp023

0xdf26,	// (0x0005a4f9) bg_button_pane_cp024

0x7878,	// (0x00053e4b) vitu2_page_scroll_pane_g1

0x7880,	// (0x00053e53) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0005c0a5) vitu2_page_scroll_pane_g

0x7888,	// (0x00053e5b) vitu2_page_scroll_pane_t1

0xd59b,	// (0x00059b6e) popup_char_count_window_g1

0xdf59,	// (0x0005a52c) popup_char_count_window_g2

0xdf62,	// (0x0005a535) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0005c0aa) popup_char_count_window_g

0xdf6b,	// (0x0005a53e) popup_char_count_window_t1

0x9a6b,	// (0x0005603e) main_vded2_pane

0xd4d7,	// (0x00059aaa) aid_size_cell_imed_line

0xd4e1,	// (0x00059ab4) grid_imed_line_width_pane

0xa292,	// (0x00056865) vid4_indicators_pane_g4

0xdf79,	// (0x0005a54c) cell_imed_line_width_pane_ParamLimits

0xdf79,	// (0x0005a54c) cell_imed_line_width_pane

0xdf8d,	// (0x0005a560) cell_imed_line_width_pane_g1

0xdf96,	// (0x0005a569) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0005c0b1) cell_imed_line_width_pane_g

0x7897,	// (0x00053e6a) main_vded2_pane_g1_ParamLimits

0x7897,	// (0x00053e6a) main_vded2_pane_g1

0x78ad,	// (0x00053e80) main_vded2_pane_g2_ParamLimits

0x78ad,	// (0x00053e80) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0005c0b6) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0005c0b6) main_vded2_pane_g

0x78bf,	// (0x00053e92) vded2_slider_pane_ParamLimits

0x78bf,	// (0x00053e92) vded2_slider_pane

0x78cf,	// (0x00053ea2) aid_size_touch_vded2_end

0x78d9,	// (0x00053eac) aid_size_touch_vded2_playhead

0xdf9e,	// (0x0005a571) aid_size_touch_vded2_start

0xdfa6,	// (0x0005a579) vded2_slider_bg_pane

0xdfaf,	// (0x0005a582) vded2_slider_pane_g1

0xdfb8,	// (0x0005a58b) vded2_slider_pane_g2

0x78e3,	// (0x00053eb6) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0005c0bb) vded2_slider_pane_g

0xdfc0,	// (0x0005a593) vded2_slider_bg_pane_g1

0xdfc9,	// (0x0005a59c) vded2_slider_bg_pane_g2

0xdfd2,	// (0x0005a5a5) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0005c0c2) vded2_slider_bg_pane_g

0x3a46,	// (0x00050019) aid_postcard_touch_down_pane_ParamLimits

0x3a46,	// (0x00050019) aid_postcard_touch_down_pane

0x3a5c,	// (0x0005002f) aid_postcard_touch_up_pane_ParamLimits

0x3a5c,	// (0x0005002f) aid_postcard_touch_up_pane

0x9a6b,	// (0x0005603e) main_blid2_pane

0x9e46,	// (0x00056419) popup_blid2_search_window

0x9a6b,	// (0x0005603e) blid2_gps_pane

0x9a6b,	// (0x0005603e) blid2_navig_pane

0x9a6b,	// (0x0005603e) blid2_search_pane

0x9a6b,	// (0x0005603e) blid2_tripm_pane

0x78ee,	// (0x00053ec1) blid2_search_pane_g1_ParamLimits

0x78ee,	// (0x00053ec1) blid2_search_pane_g1

0x7906,	// (0x00053ed9) blid2_search_pane_t1_ParamLimits

0x7906,	// (0x00053ed9) blid2_search_pane_t1

0x7918,	// (0x00053eeb) aid_size_cell_blid2_gps_ParamLimits

0x7918,	// (0x00053eeb) aid_size_cell_blid2_gps

0x7930,	// (0x00053f03) blid2_gps_pane_g1_ParamLimits

0x7930,	// (0x00053f03) blid2_gps_pane_g1

0x7944,	// (0x00053f17) grid_blid2_satellite_pane_ParamLimits

0x7944,	// (0x00053f17) grid_blid2_satellite_pane

0x795e,	// (0x00053f31) blid2_navig_pane_g1_ParamLimits

0x795e,	// (0x00053f31) blid2_navig_pane_g1

0x796a,	// (0x00053f3d) blid2_navig_pane_t1_ParamLimits

0x796a,	// (0x00053f3d) blid2_navig_pane_t1

0x7985,	// (0x00053f58) blid2_navig_pane_t2_ParamLimits

0x7985,	// (0x00053f58) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0005c0c9) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0005c0c9) blid2_navig_pane_t

0x79a0,	// (0x00053f73) blid2_navig_ring_pane_ParamLimits

0x79a0,	// (0x00053f73) blid2_navig_ring_pane

0x79b9,	// (0x00053f8c) blid2_speed_pane_ParamLimits

0x79b9,	// (0x00053f8c) blid2_speed_pane

0x79c5,	// (0x00053f98) blid2_tripm_pane_g1_ParamLimits

0x79c5,	// (0x00053f98) blid2_tripm_pane_g1

0x79e0,	// (0x00053fb3) blid2_tripm_pane_g2_ParamLimits

0x79e0,	// (0x00053fb3) blid2_tripm_pane_g2

0x79f4,	// (0x00053fc7) blid2_tripm_pane_g3_ParamLimits

0x79f4,	// (0x00053fc7) blid2_tripm_pane_g3

0x7a08,	// (0x00053fdb) blid2_tripm_pane_g4_ParamLimits

0x7a08,	// (0x00053fdb) blid2_tripm_pane_g4

0x7a1c,	// (0x00053fef) blid2_tripm_pane_g5_ParamLimits

0x7a1c,	// (0x00053fef) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0005c0ce) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0005c0ce) blid2_tripm_pane_g

0x7a42,	// (0x00054015) blid2_tripm_pane_t1_ParamLimits

0x7a42,	// (0x00054015) blid2_tripm_pane_t1

0x7a5d,	// (0x00054030) blid2_tripm_pane_t2_ParamLimits

0x7a5d,	// (0x00054030) blid2_tripm_pane_t2

0x7a76,	// (0x00054049) blid2_tripm_pane_t3_ParamLimits

0x7a76,	// (0x00054049) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0005c0db) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0005c0db) blid2_tripm_pane_t

0x7abd,	// (0x00054090) cell_blid2_satellite_pane_ParamLimits

0x7abd,	// (0x00054090) cell_blid2_satellite_pane

0x7adb,	// (0x000540ae) cell_blid2_satellite_pane_g1

0xdfdb,	// (0x0005a5ae) cell_blid2_satellite_pane_t1

0xcfe6,	// (0x000595b9) blid2_speed_pane_g1

0xdfe9,	// (0x0005a5bc) blid2_speed_pane_t1

0xdff7,	// (0x0005a5ca) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0005c0e4) blid2_speed_pane_t

0xcfe6,	// (0x000595b9) blid2_navig_ring_pane_g1

0x7ae4,	// (0x000540b7) blid2_navig_ring_pane_g2

0x7aec,	// (0x000540bf) blid2_navig_ring_pane_g3

0x7af4,	// (0x000540c7) blid2_navig_ring_pane_g4

0x7afc,	// (0x000540cf) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0005c0e9) blid2_navig_ring_pane_g

0x9a6b,	// (0x0005603e) bg_popup_window_pane_cp011

0xe005,	// (0x0005a5d8) popup_blid2_search_window_g1

0xe00d,	// (0x0005a5e0) popup_blid2_search_window_t1

0xe01b,	// (0x0005a5ee) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0005c0f4) popup_blid2_search_window_t

0xafef,	// (0x000575c2) main_browser_pane_g1

0xacd6,	// (0x000572a9) main_browser_pane_ParamLimits

0xa74e,	// (0x00056d21) bg_button_pane_cp011_ParamLimits

0x6b47,	// (0x0005311a) cell_vitu2_function_pane_g1_ParamLimits

0xcbd0,	// (0x000591a3) bg_popup_sub_pane_cp22_ParamLimits

0x059d,	// (0x0004cb70) input_focus_pane_cp08_ParamLimits

0x743e,	// (0x00053a11) popup_vitu2_query_button_pane_ParamLimits

0x743e,	// (0x00053a11) popup_vitu2_query_button_pane

0x05b4,	// (0x0004cb87) popup_vitu2_query_input_button_pane

0xdcab,	// (0x0005a27e) popup_vitu2_query_window_g1_ParamLimits

0x05be,	// (0x0004cb91) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0005bff5) popup_vitu2_query_window_g_ParamLimits

0x9a6b,	// (0x0005603e) bg_button_pane_cp026

0x7b04,	// (0x000540d7) popup_vitu2_query_input_button_pane_g1

0x9a6b,	// (0x0005603e) bg_button_pane_cp025

0xe029,	// (0x0005a5fc) popup_vitu2_query_button_pane_t1

0x50d4,	// (0x000516a7) main_mp3_pane_t6

0x50e2,	// (0x000516b5) popup_slider_window_cp01

0xa1f8,	// (0x000567cb) cam4_battery_pane

0xa251,	// (0x00056824) cam4_battery_pane_cp02

0xa321,	// (0x000568f4) cam4_battery_pane_cp01

0xa321,	// (0x000568f4) cam4_battery_pane_cp03

0xcfe6,	// (0x000595b9) cam4_battery_pane_g1

0xe037,	// (0x0005a60a) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0005c0f9) cam4_battery_pane_g

0xceb0,	// (0x00059483) popup_blid_sat_info2_window_t11

0x33a0,	// (0x0004f973) aid_size_touch_mv_arrow_left_ParamLimits

0x33c9,	// (0x0004f99c) aid_size_touch_mv_arrow_right_ParamLimits

0xb720,	// (0x00057cf3) navi_pane_g1_ParamLimits

0x3408,	// (0x0004f9db) navi_pane_g2_ParamLimits

0x3436,	// (0x0004fa09) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0005b9c3) navi_pane_g_ParamLimits

0x348e,	// (0x0004fa61) navi_pane_mv_t1_ParamLimits

0x5d8d,	// (0x00052360) grid_imed_effect_pane_ParamLimits

0x2010,	// (0x0004e5e3) aid_placing_vt_slider_lsc

0xaf3e,	// (0x00057511) aid_placing_vt_slider_prt

0xa74e,	// (0x00056d21) bg_tb_trans_pane_cp01_ParamLimits

0xd166,	// (0x00059739) popup_image_details_window_g1_ParamLimits

0xd179,	// (0x0005974c) popup_image_details_window_g2_ParamLimits

0xd18e,	// (0x00059761) popup_image_details_window_g3_ParamLimits

0xd18e,	// (0x00059761) popup_image_details_window_g3

0xf723,	// (0x0005bcf6) popup_image_details_window_g_ParamLimits

0xd1a2,	// (0x00059775) popup_image_details_window_t1_ParamLimits

0xd1b4,	// (0x00059787) popup_image_details_window_t2_ParamLimits

0xd1cd,	// (0x000597a0) popup_image_details_window_t3_ParamLimits

0xd1e1,	// (0x000597b4) popup_image_details_window_t4_ParamLimits

0xd1fc,	// (0x000597cf) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0005bcfd) popup_image_details_window_t_ParamLimits

0x7724,	// (0x00053cf7) cl_header_name_pane_ParamLimits

0x7724,	// (0x00053cf7) cl_header_name_pane

0x7b0c,	// (0x000540df) cl_header_name_pane_t1_ParamLimits

0x7b0c,	// (0x000540df) cl_header_name_pane_t1

0x7b2d,	// (0x00054100) cl_header_name_pane_t2_ParamLimits

0x7b2d,	// (0x00054100) cl_header_name_pane_t2

0x7b6f,	// (0x00054142) cl_header_name_pane_t3_ParamLimits

0x7b6f,	// (0x00054142) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0005c0fe) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0005c0fe) cl_header_name_pane_t

0x345f,	// (0x0004fa32) navi_pane_mv_g2_ParamLimits

0xd9f7,	// (0x00059fca) field_vitu2_entry_pane_g1_ParamLimits

0xda03,	// (0x00059fd6) field_vitu2_entry_pane_g2_ParamLimits

0xda0f,	// (0x00059fe2) field_vitu2_entry_pane_g3_ParamLimits

0xda0f,	// (0x00059fe2) field_vitu2_entry_pane_g3

0xf921,	// (0x0005bef4) field_vitu2_entry_pane_g_ParamLimits

0x6ac3,	// (0x00053096) cell_vitu2_itu_pane_g1_ParamLimits

0x6ad3,	// (0x000530a6) cell_vitu2_itu_pane_g2_ParamLimits

0x6ad3,	// (0x000530a6) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0005bf00) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0005bf00) cell_vitu2_itu_pane_g

0xa74e,	// (0x00056d21) bg_vkb2_func_pane_cp05_ParamLimits

0xa74e,	// (0x00056d21) bg_vkb2_func_pane_cp05

0xa74e,	// (0x00056d21) bg_vkb2_func_pane_cp03

0xa74e,	// (0x00056d21) bg_vkb2_func_pane_cp04

0xa74e,	// (0x00056d21) bg_vkb2_func_pane_cp10_ParamLimits

0xa74e,	// (0x00056d21) bg_vkb2_func_pane_cp10

0x06db,	// (0x0004ccae) bg_vkb2_func_pane_cp08

0x76ce,	// (0x00053ca1) bg_vkb2_func_pane_cp06

0x76dc,	// (0x00053caf) bg_vkb2_func_pane_cp07

0xdf2f,	// (0x0005a502) bg_vkb2_func_pane_cp11_ParamLimits

0xdf2f,	// (0x0005a502) bg_vkb2_func_pane_cp11

0xdf44,	// (0x0005a517) bg_vkb2_func_pane_cp12_ParamLimits

0xdf44,	// (0x0005a517) bg_vkb2_func_pane_cp12

0x9a6b,	// (0x0005603e) bg_vkb2_func_pane_cp09

0xda2f,	// (0x0005a002) bg_vkb2_func_pane_g1

0xb100,	// (0x000576d3) bg_vkb2_func_pane_g2

0xda37,	// (0x0005a00a) bg_vkb2_func_pane_g3

0xda3f,	// (0x0005a012) bg_vkb2_func_pane_g4

0xdc6e,	// (0x0005a241) bg_vkb2_func_pane_g5

0xda57,	// (0x0005a02a) bg_vkb2_func_pane_g6

0xda5f,	// (0x0005a032) bg_vkb2_func_pane_g7

0xda4f,	// (0x0005a022) bg_vkb2_func_pane_g8

0xb0e0,	// (0x000576b3) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0005c105) bg_vkb2_func_pane_g

0x7a30,	// (0x00054003) blid2_tripm_pane_g6_ParamLimits

0x7a30,	// (0x00054003) blid2_tripm_pane_g6

0xd899,	// (0x00059e6c) mp4_progress_pane_g1

0x7aa9,	// (0x0005407c) blid2_tripm_values_pane_ParamLimits

0x7aa9,	// (0x0005407c) blid2_tripm_values_pane

0x7ba0,	// (0x00054173) blid2_tripm_values_pane_t1

0x7bae,	// (0x00054181) blid2_tripm_values_pane_t2

0x7bbc,	// (0x0005418f) blid2_tripm_values_pane_t3

0x7bca,	// (0x0005419d) blid2_tripm_values_pane_t4

0x7bd8,	// (0x000541ab) blid2_tripm_values_pane_t5

0x7be6,	// (0x000541b9) blid2_tripm_values_pane_t6

0x7bf4,	// (0x000541c7) blid2_tripm_values_pane_t7

0x7c02,	// (0x000541d5) blid2_tripm_values_pane_t8

0x7c10,	// (0x000541e3) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0005c118) blid2_tripm_values_pane_t

0x2052,	// (0x0004e625) call_video_pane_t1_ParamLimits

0x2070,	// (0x0004e643) call_video_pane_t2_ParamLimits

0xf279,	// (0x0005b84c) call_video_pane_t_ParamLimits

0x042a,	// (0x0004c9fd) msg_header_pane_g1_ParamLimits

0xb940,	// (0x00057f13) msg_header_pane_g2_ParamLimits

0xb940,	// (0x00057f13) msg_header_pane_g2

0x0001,

0xf493,	// (0x0005ba66) msg_header_pane_g_ParamLimits

0xf493,	// (0x0005ba66) msg_header_pane_g

0xacd6,	// (0x000572a9) main_clock2_pane_ParamLimits

0x5a84,	// (0x00052057) grid_clock2_toolbar_pane_ParamLimits

0x5a84,	// (0x00052057) grid_clock2_toolbar_pane

0x5a84,	// (0x00052057) listscroll_clock2_pane_ParamLimits

0x5a84,	// (0x00052057) listscroll_clock2_pane

0x5b7f,	// (0x00052152) main_clock2_pane_t3_ParamLimits

0x5b7f,	// (0x00052152) main_clock2_pane_t3

0x5ba3,	// (0x00052176) main_clock2_pane_t4_ParamLimits

0x5ba3,	// (0x00052176) main_clock2_pane_t4

0xe041,	// (0x0005a614) cell_clock2_toolbar_pane

0xe049,	// (0x0005a61c) cell_clock2_toolbar_pane_cp01

0xe049,	// (0x0005a61c) cell_clock2_toolbar_pane_cp02

0xe051,	// (0x0005a624) cell_clock2_toolbar_pane_cp03

0xe059,	// (0x0005a62c) list_clock2_pane

0xb677,	// (0x00057c4a) scroll_pane_cp10

0xe061,	// (0x0005a634) list_single_clock2_pane_ParamLimits

0xe061,	// (0x0005a634) list_single_clock2_pane

0xb7c0,	// (0x00057d93) list_highlight_pane_cp08

0xe06e,	// (0x0005a641) list_single_clock2_pane_t1

0xe07c,	// (0x0005a64f) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0005c12b) list_single_clock2_pane_t

0x9a6b,	// (0x0005603e) bg_button_pane_cp10

0xe08a,	// (0x0005a65d) cell_clock2_toolbar_pane_g1

0x39d2,	// (0x0004ffa5) aid_main_viewer_pane_g1_ParamLimits

0x39d2,	// (0x0004ffa5) aid_main_viewer_pane_g1

0x39e0,	// (0x0004ffb3) aid_main_viewer_pane_g2_ParamLimits

0x39e0,	// (0x0004ffb3) aid_main_viewer_pane_g2

0x39ee,	// (0x0004ffc1) aid_main_viewer_pane_g3_ParamLimits

0x39ee,	// (0x0004ffc1) aid_main_viewer_pane_g3

0x39fd,	// (0x0004ffd0) aid_main_viewer_pane_g4_ParamLimits

0x39fd,	// (0x0004ffd0) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0005ba77) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0005ba77) aid_main_viewer_pane_g

0x430b,	// (0x000508de) main_calc_pane_ParamLimits

0x431f,	// (0x000508f2) main_dialer2_pane_ParamLimits

0x9a6b,	// (0x0005603e) main_cam6_pane

0x9a6b,	// (0x0005603e) main_vid6_pane

0x5a90,	// (0x00052063) listscroll_gen_pane_cp06_ParamLimits

0x5a90,	// (0x00052063) listscroll_gen_pane_cp06

0x5bc6,	// (0x00052199) main_clock2_pane_t5_ParamLimits

0x5bc6,	// (0x00052199) main_clock2_pane_t5

0x5c22,	// (0x000521f5) aid_call2_pane_cp10_ParamLimits

0x5c34,	// (0x00052207) aid_call_pane_cp10_ParamLimits

0xb6f5,	// (0x00057cc8) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb6f5,	// (0x00057cc8) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c46,	// (0x00052219) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c46,	// (0x00052219) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb6f5,	// (0x00057cc8) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0005bdad) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c58,	// (0x0005222b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x62e8,	// (0x000528bb) cell_dialer2_keypad_pane_g2_ParamLimits

0x62e8,	// (0x000528bb) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0005be93) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0005be93) cell_dialer2_keypad_pane_g

0x6304,	// (0x000528d7) cell_dialer2_keypad_pane_t1

0x6e5d,	// (0x00053430) main_cset_text2_pane_ParamLimits

0x6e5d,	// (0x00053430) main_cset_text2_pane

0xde97,	// (0x0005a46a) area_vitu2_query_pane_g1_ParamLimits

0x06a2,	// (0x0004cc75) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0005c048) area_vitu2_query_pane_g_ParamLimits

0x76aa,	// (0x00053c7d) area_vitu2_query_pane_t7_ParamLimits

0x76aa,	// (0x00053c7d) area_vitu2_query_pane_t7

0x76ce,	// (0x00053ca1) bg_button_pane_cp018_ParamLimits

0x76dc,	// (0x00053caf) bg_button_pane_cp021_ParamLimits

0x06db,	// (0x0004ccae) bg_button_pane_cp022_ParamLimits

0x06db,	// (0x0004ccae) bg_vkb2_func_pane_cp08_ParamLimits

0x76ce,	// (0x00053ca1) bg_vkb2_func_pane_cp06_ParamLimits

0x76dc,	// (0x00053caf) bg_vkb2_func_pane_cp07_ParamLimits

0x06ec,	// (0x0004ccbf) input_focus_pane_cp09_ParamLimits

0xa398,	// (0x0005696b) cam6_autofocus_pane_ParamLimits

0xa398,	// (0x0005696b) cam6_autofocus_pane

0x7c1e,	// (0x000541f1) cam6_image_uncrop_pane_ParamLimits

0x7c1e,	// (0x000541f1) cam6_image_uncrop_pane

0x7c2d,	// (0x00054200) cam6_indi_pane_ParamLimits

0x7c2d,	// (0x00054200) cam6_indi_pane

0x7c43,	// (0x00054216) cam6_mode_pane_ParamLimits

0x7c43,	// (0x00054216) cam6_mode_pane

0x7c55,	// (0x00054228) cam6_timer_pane_ParamLimits

0x7c55,	// (0x00054228) cam6_timer_pane

0x7c61,	// (0x00054234) cam6_zoom_pane_ParamLimits

0x7c61,	// (0x00054234) cam6_zoom_pane

0x7c6d,	// (0x00054240) cam6_mode_pane_g1_ParamLimits

0x7c6d,	// (0x00054240) cam6_mode_pane_g1

0x7c7d,	// (0x00054250) cam6_mode_pane_g2_ParamLimits

0x7c7d,	// (0x00054250) cam6_mode_pane_g2

0x7c8d,	// (0x00054260) cam6_mode_pane_g3_ParamLimits

0x7c8d,	// (0x00054260) cam6_mode_pane_g3

0x7c9d,	// (0x00054270) cam6_mode_pane_g4_ParamLimits

0x7c9d,	// (0x00054270) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0005c130) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0005c130) cam6_mode_pane_g

0xe092,	// (0x0005a665) bg_tb_trans_pane_cp08_ParamLimits

0xe092,	// (0x0005a665) bg_tb_trans_pane_cp08

0xe0a0,	// (0x0005a673) cam6_battery_pane_ParamLimits

0xe0a0,	// (0x0005a673) cam6_battery_pane

0xe0b6,	// (0x0005a689) cam6_indi_pane_g1_ParamLimits

0xe0b6,	// (0x0005a689) cam6_indi_pane_g1

0xe0c8,	// (0x0005a69b) cam6_indi_pane_g2_ParamLimits

0xe0c8,	// (0x0005a69b) cam6_indi_pane_g2

0xe0da,	// (0x0005a6ad) cam6_indi_pane_g3_ParamLimits

0xe0da,	// (0x0005a6ad) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0005c139) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0005c139) cam6_indi_pane_g

0xe0ec,	// (0x0005a6bf) cam6_indi_pane_t1_ParamLimits

0xe0ec,	// (0x0005a6bf) cam6_indi_pane_t1

0x7cad,	// (0x00054280) cam6_autofocus_pane_g1

0x7cb5,	// (0x00054288) cam6_autofocus_pane_g2

0x7cbd,	// (0x00054290) cam6_autofocus_pane_g3

0x7cc5,	// (0x00054298) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0005c140) cam6_autofocus_pane_g

0xe112,	// (0x0005a6e5) cam6_timer_pane_g1

0xe11a,	// (0x0005a6ed) cam6_timer_pane_t1

0xe128,	// (0x0005a6fb) cam6_zoom_cont_pane

0xe130,	// (0x0005a703) cam6_zoom_pane_g1

0xe138,	// (0x0005a70b) cam6_zoom_pane_g2

0x7ccd,	// (0x000542a0) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0005c149) cam6_zoom_pane_g

0xcfe6,	// (0x000595b9) cam6_battery_pane_g1

0xcfe6,	// (0x000595b9) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0005bcba) cam6_battery_pane_g

0xe140,	// (0x0005a713) cam6_zoom_cont_pane_g1

0xe149,	// (0x0005a71c) cam6_zoom_cont_pane_g2

0xe152,	// (0x0005a725) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0005c150) cam6_zoom_cont_pane_g

0x7cea,	// (0x000542bd) cam6_mode_pane_cp_ParamLimits

0x7cea,	// (0x000542bd) cam6_mode_pane_cp

0x7c61,	// (0x00054234) cam6_zoom_pane_cp_ParamLimits

0x7c61,	// (0x00054234) cam6_zoom_pane_cp

0x7cfc,	// (0x000542cf) vid6_image_uncrop_cif_pane_ParamLimits

0x7cfc,	// (0x000542cf) vid6_image_uncrop_cif_pane

0x7d0c,	// (0x000542df) vid6_image_uncrop_nhd_pane_ParamLimits

0x7d0c,	// (0x000542df) vid6_image_uncrop_nhd_pane

0x7c1e,	// (0x000541f1) vid6_image_uncrop_vga_pane_ParamLimits

0x7c1e,	// (0x000541f1) vid6_image_uncrop_vga_pane

0x7d1b,	// (0x000542ee) vid6_image_uncrop_wvga_pane_ParamLimits

0x7d1b,	// (0x000542ee) vid6_image_uncrop_wvga_pane

0x7d2a,	// (0x000542fd) vid6_indi_pane_ParamLimits

0x7d2a,	// (0x000542fd) vid6_indi_pane

0xe092,	// (0x0005a665) bg_tb_trans_pane_cp09_ParamLimits

0xe092,	// (0x0005a665) bg_tb_trans_pane_cp09

0xe16a,	// (0x0005a73d) cam6_battery_pane_cp_ParamLimits

0xe16a,	// (0x0005a73d) cam6_battery_pane_cp

0xe176,	// (0x0005a749) vid6_indi_pane_g1_ParamLimits

0xe176,	// (0x0005a749) vid6_indi_pane_g1

0xe188,	// (0x0005a75b) vid6_indi_pane_g2_ParamLimits

0xe188,	// (0x0005a75b) vid6_indi_pane_g2

0xe19a,	// (0x0005a76d) vid6_indi_pane_g3_ParamLimits

0xe19a,	// (0x0005a76d) vid6_indi_pane_g3

0xe1af,	// (0x0005a782) vid6_indi_pane_g4_ParamLimits

0xe1af,	// (0x0005a782) vid6_indi_pane_g4

0xe1c4,	// (0x0005a797) vid6_indi_pane_g5_ParamLimits

0xe1c4,	// (0x0005a797) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0005c157) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0005c157) vid6_indi_pane_g

0xe1de,	// (0x0005a7b1) vid6_indi_pane_t1_ParamLimits

0xe1de,	// (0x0005a7b1) vid6_indi_pane_t1

0xe1f4,	// (0x0005a7c7) vid6_indi_pane_t2_ParamLimits

0xe1f4,	// (0x0005a7c7) vid6_indi_pane_t2

0xe21c,	// (0x0005a7ef) vid6_indi_pane_t3_ParamLimits

0xe21c,	// (0x0005a7ef) vid6_indi_pane_t3

0xe244,	// (0x0005a817) vid6_indi_pane_t4_ParamLimits

0xe244,	// (0x0005a817) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0005c162) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0005c162) vid6_indi_pane_t

0xe268,	// (0x0005a83b) wait_bar_pane_cp08

0x7d42,	// (0x00054315) main_cset_text2_pane_t1_ParamLimits

0x7d42,	// (0x00054315) main_cset_text2_pane_t1

0x7cd5,	// (0x000542a8) listscroll_gen_pane_cp06_t1_ParamLimits

0x7cd5,	// (0x000542a8) listscroll_gen_pane_cp06_t1

0x9a6b,	// (0x0005603e) main_cam6_set_pane

0xd246,	// (0x00059819) bg_tb_trans_pane_cp06_ParamLimits

0xa200,	// (0x000567d3) cam4_indicators_pane_g1_ParamLimits

0xa211,	// (0x000567e4) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0005bed0) cam4_indicators_pane_g_ParamLimits

0xa22f,	// (0x00056802) cam4_indicators_pane_t1_ParamLimits

0xa74e,	// (0x00056d21) bg_tb_trans_pane_cp07_ParamLimits

0xa259,	// (0x0005682c) vid4_indicators_pane_g1_ParamLimits

0xa26d,	// (0x00056840) vid4_indicators_pane_g2_ParamLimits

0xa281,	// (0x00056854) vid4_indicators_pane_g3_ParamLimits

0xa292,	// (0x00056865) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0005bee2) vid4_indicators_pane_g_ParamLimits

0xa2ae,	// (0x00056881) vid4_indicators_pane_t1_ParamLimits

0x7817,	// (0x00053dea) vid4_progress_pane_g1_ParamLimits

0x7829,	// (0x00053dfc) vid4_progress_pane_g2_ParamLimits

0x9e2e,	// (0x00056401) vid4_progress_pane_g3_ParamLimits

0xa329,	// (0x000568fc) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0005c093) vid4_progress_pane_g_ParamLimits

0xa347,	// (0x0005691a) vid4_progress_pane_t1_ParamLimits

0xa35c,	// (0x0005692f) vid4_progress_pane_t2_ParamLimits

0xa372,	// (0x00056945) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0005c09e) vid4_progress_pane_t_ParamLimits

0xa388,	// (0x0005695b) wait_bar_pane_cp07_ParamLimits

0x7d61,	// (0x00054334) main_cam6_set_pane_g2_ParamLimits

0x7d61,	// (0x00054334) main_cam6_set_pane_g2

0x7d85,	// (0x00054358) main_cset6_listscroll_pane_ParamLimits

0x7d85,	// (0x00054358) main_cset6_listscroll_pane

0x7da1,	// (0x00054374) main_cset6_slider_pane_ParamLimits

0x7da1,	// (0x00054374) main_cset6_slider_pane

0x7db7,	// (0x0005438a) main_cset6_text2_pane_ParamLimits

0x7db7,	// (0x0005438a) main_cset6_text2_pane

0xe277,	// (0x0005a84a) main_cset6_text_pane

0xe27f,	// (0x0005a852) main_cset_list_pane_copy1_ParamLimits

0xe27f,	// (0x0005a852) main_cset_list_pane_copy1

0xe28f,	// (0x0005a862) scroll_pane_cp028_copy1

0x7dc5,	// (0x00054398) cset_list_set_pane_copy1

0x7dd7,	// (0x000543aa) aid_position_infowindow_above_copy1

0x7ddf,	// (0x000543b2) aid_position_infowindow_below_copy1

0x0711,	// (0x0004cce4) cset_list_set_pane_g1_copy1

0x0719,	// (0x0004ccec) cset_list_set_pane_g3_copy1_ParamLimits

0x0719,	// (0x0004ccec) cset_list_set_pane_g3_copy1

0x0728,	// (0x0004ccfb) cset_list_set_pane_t1_copy1_ParamLimits

0x0728,	// (0x0004ccfb) cset_list_set_pane_t1_copy1

0xa74e,	// (0x00056d21) list_highlight_pane_cp021_copy1_ParamLimits

0xa74e,	// (0x00056d21) list_highlight_pane_cp021_copy1

0xe298,	// (0x0005a86b) cset6_slider_pane_ParamLimits

0xe298,	// (0x0005a86b) cset6_slider_pane

0xe2c4,	// (0x0005a897) main_cset6_slider_pane_g1_ParamLimits

0xe2c4,	// (0x0005a897) main_cset6_slider_pane_g1

0x7de7,	// (0x000543ba) main_cset6_slider_pane_g2_ParamLimits

0x7de7,	// (0x000543ba) main_cset6_slider_pane_g2

0xe2ec,	// (0x0005a8bf) main_cset6_slider_pane_g3_ParamLimits

0xe2ec,	// (0x0005a8bf) main_cset6_slider_pane_g3

0x7e0f,	// (0x000543e2) main_cset6_slider_pane_g4_ParamLimits

0x7e0f,	// (0x000543e2) main_cset6_slider_pane_g4

0x7e1b,	// (0x000543ee) main_cset6_slider_pane_g5_ParamLimits

0x7e1b,	// (0x000543ee) main_cset6_slider_pane_g5

0xdb5e,	// (0x0005a131) main_cset6_slider_pane_g7_ParamLimits

0xdb5e,	// (0x0005a131) main_cset6_slider_pane_g7

0xdb6a,	// (0x0005a13d) main_cset6_slider_pane_g8_ParamLimits

0xdb6a,	// (0x0005a13d) main_cset6_slider_pane_g8

0x6f0a,	// (0x000534dd) main_cset6_slider_pane_g9_ParamLimits

0x6f0a,	// (0x000534dd) main_cset6_slider_pane_g9

0x6f16,	// (0x000534e9) main_cset6_slider_pane_g10_ParamLimits

0x6f16,	// (0x000534e9) main_cset6_slider_pane_g10

0x6f22,	// (0x000534f5) main_cset6_slider_pane_g11_ParamLimits

0x6f22,	// (0x000534f5) main_cset6_slider_pane_g11

0x6f2e,	// (0x00053501) main_cset6_slider_pane_g12_ParamLimits

0x6f2e,	// (0x00053501) main_cset6_slider_pane_g12

0x6f3a,	// (0x0005350d) main_cset6_slider_pane_g13_ParamLimits

0x6f3a,	// (0x0005350d) main_cset6_slider_pane_g13

0x6f46,	// (0x00053519) main_cset6_slider_pane_g14_ParamLimits

0x6f46,	// (0x00053519) main_cset6_slider_pane_g14

0x7e27,	// (0x000543fa) main_cset6_slider_pane_g15_ParamLimits

0x7e27,	// (0x000543fa) main_cset6_slider_pane_g15

0x6f6a,	// (0x0005353d) main_cset6_slider_pane_g16_ParamLimits

0x6f6a,	// (0x0005353d) main_cset6_slider_pane_g16

0x6f76,	// (0x00053549) main_cset6_slider_pane_g17_ParamLimits

0x6f76,	// (0x00053549) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0005c16b) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0005c16b) main_cset6_slider_pane_g

0xe2f8,	// (0x0005a8cb) main_cset6_slider_pane_t1_ParamLimits

0xe2f8,	// (0x0005a8cb) main_cset6_slider_pane_t1

0x7e57,	// (0x0005442a) main_cset6_slider_pane_t2_ParamLimits

0x7e57,	// (0x0005442a) main_cset6_slider_pane_t2

0x7e82,	// (0x00054455) main_cset6_slider_pane_t3_ParamLimits

0x7e82,	// (0x00054455) main_cset6_slider_pane_t3

0x7ead,	// (0x00054480) main_cset6_slider_pane_t4_ParamLimits

0x7ead,	// (0x00054480) main_cset6_slider_pane_t4

0x7ed8,	// (0x000544ab) main_cset6_slider_pane_t5_ParamLimits

0x7ed8,	// (0x000544ab) main_cset6_slider_pane_t5

0xe339,	// (0x0005a90c) main_cset6_slider_pane_t7_ParamLimits

0xe339,	// (0x0005a90c) main_cset6_slider_pane_t7

0x7f03,	// (0x000544d6) main_cset6_slider_pane_t8_ParamLimits

0x7f03,	// (0x000544d6) main_cset6_slider_pane_t8

0x7f27,	// (0x000544fa) main_cset6_slider_pane_t9_ParamLimits

0x7f27,	// (0x000544fa) main_cset6_slider_pane_t9

0x7f4b,	// (0x0005451e) main_cset6_slider_pane_t10_ParamLimits

0x7f4b,	// (0x0005451e) main_cset6_slider_pane_t10

0x7f6f,	// (0x00054542) main_cset6_slider_pane_t11_ParamLimits

0x7f6f,	// (0x00054542) main_cset6_slider_pane_t11

0xe36f,	// (0x0005a942) main_cset6_slider_pane_t14_ParamLimits

0xe36f,	// (0x0005a942) main_cset6_slider_pane_t14

0xe3a8,	// (0x0005a97b) main_cset6_slider_pane_t15_ParamLimits

0xe3a8,	// (0x0005a97b) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0005c190) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0005c190) main_cset6_slider_pane_t

0xdc22,	// (0x0005a1f5) cset_slider_pane_g1_copy1

0xdc2b,	// (0x0005a1fe) cset_slider_pane_g2_copy1

0xdc34,	// (0x0005a207) cset_slider_pane_g3_copy1

0x9a6b,	// (0x0005603e) bg_popup_sub_pane_cp011_copy1

0xe3e1,	// (0x0005a9b4) main_cset_text_pane_g1_copy1

0xdcbf,	// (0x0005a292) main_cset_text_pane_t1_copy1

0xdccd,	// (0x0005a2a0) main_cset_text_pane_t2_copy1

0xdcdb,	// (0x0005a2ae) main_cset_text_pane_t3_copy1

0xdce9,	// (0x0005a2bc) main_cset_text_pane_t4_copy1

0xdcf7,	// (0x0005a2ca) main_cset_text_pane_t5_copy1

0xe3e9,	// (0x0005a9bc) main_cset_text_pane_t6_copy1

0xe3f7,	// (0x0005a9ca) main_cset_text_pane_t7_copy1

0x7fcb,	// (0x0005459e) main_cset_text2_pane_t1_copy1

0xa74e,	// (0x00056d21) main_ncimui_pane

0x455b,	// (0x00050b2e) popup_query_ncimui_window_ParamLimits

0x455b,	// (0x00050b2e) popup_query_ncimui_window

0x527a,	// (0x0005184d) field_cale_ev2_pane_g4_ParamLimits

0x527a,	// (0x0005184d) field_cale_ev2_pane_g4

0x61c4,	// (0x00052797) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61c4,	// (0x00052797) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0005be6e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0005be6e) cell_video_dialer_keypad_pane_g

0x61dc,	// (0x000527af) cell_video_dialer_keypad_pane_t1

0x9a6b,	// (0x0005603e) bg_popup_window_pane_cp012

0xb538,	// (0x00057b0b) heading_pane_cp06

0xe423,	// (0x0005a9f6) ncim_query_content_pane

0x9a6b,	// (0x0005603e) bg_popup_heading_pane_cp01

0xe42b,	// (0x0005a9fe) ncim_heading_pane_t1

0xe439,	// (0x0005aa0c) ncim_indicator_popup_pane

0xe44b,	// (0x0005aa1e) ncim_query_button_pane

0xe45f,	// (0x0005aa32) ncim_query_content_pane_t1

0xe471,	// (0x0005aa44) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0005c1d4) ncim_query_content_pane_t

0xe4ab,	// (0x0005aa7e) ncim_query_list_pane

0xe4bd,	// (0x0005aa90) ncim_query_popup_pane

0xe439,	// (0x0005aa0c) ncim_indicator_popup_pane_ParamLimits

0x810f,	// (0x000546e2) ncim_query_content_pane_g1_ParamLimits

0x810f,	// (0x000546e2) ncim_query_content_pane_g1

0xe45f,	// (0x0005aa32) ncim_query_content_pane_t1_ParamLimits

0xe471,	// (0x0005aa44) ncim_query_content_pane_t2_ParamLimits

0x811b,	// (0x000546ee) ncim_query_content_pane_t3_ParamLimits

0x811b,	// (0x000546ee) ncim_query_content_pane_t3

0x8143,	// (0x00054716) ncim_query_content_pane_t4_ParamLimits

0x8143,	// (0x00054716) ncim_query_content_pane_t4

0x816b,	// (0x0005473e) ncim_query_content_pane_t5_ParamLimits

0x816b,	// (0x0005473e) ncim_query_content_pane_t5

0xe483,	// (0x0005aa56) ncim_query_content_pane_t6_ParamLimits

0xe483,	// (0x0005aa56) ncim_query_content_pane_t6

0xfc01,	// (0x0005c1d4) ncim_query_content_pane_t_ParamLimits

0xe4ab,	// (0x0005aa7e) ncim_query_list_pane_ParamLimits

0xe4bd,	// (0x0005aa90) ncim_query_popup_pane_ParamLimits

0xe4d1,	// (0x0005aaa4) wait_bar_pane_cp04

0x9a6b,	// (0x0005603e) input_focus_pane_cp011

0xe4d9,	// (0x0005aaac) ncim_query_popup_pane_t1

0xe4e7,	// (0x0005aaba) ncim_list_query_list_pane_ParamLimits

0xe4e7,	// (0x0005aaba) ncim_list_query_list_pane

0x9a6b,	// (0x0005603e) bg_button_pane_cp027

0xe4fa,	// (0x0005aacd) ncim_query_button_pane_g1

0x9a6b,	// (0x0005603e) list_highlight_pane_cp012

0xe504,	// (0x0005aad7) ncim_list_query_list_pane_g1

0xe50c,	// (0x0005aadf) ncim_list_query_list_pane_t1

0xa220,	// (0x000567f3) cam4_indicators_pane_g3_ParamLimits

0xa220,	// (0x000567f3) cam4_indicators_pane_g3

0xa29e,	// (0x00056871) vid4_indicators_pane_g5_ParamLimits

0xa29e,	// (0x00056871) vid4_indicators_pane_g5

0xa338,	// (0x0005690b) vid4_progress_pane_g5_ParamLimits

0xa338,	// (0x0005690b) vid4_progress_pane_g5

0x7ffd,	// (0x000545d0) main_ncimui_pane_g1

0x8063,	// (0x00054636) ncimui_group_query_pane_ParamLimits

0x8063,	// (0x00054636) ncimui_group_query_pane

0x80ab,	// (0x0005467e) ncimui_list_pane_ParamLimits

0x80ab,	// (0x0005467e) ncimui_list_pane

0x80d2,	// (0x000546a5) ncimui_text_pane_ParamLimits

0x80d2,	// (0x000546a5) ncimui_text_pane

0x8193,	// (0x00054766) ncimui_text_pane_t1_ParamLimits

0x8193,	// (0x00054766) ncimui_text_pane_t1

0xe51a,	// (0x0005aaed) ncimui_list_single_graphic_pane_ParamLimits

0xe51a,	// (0x0005aaed) ncimui_list_single_graphic_pane

0x81b1,	// (0x00054784) ncimui_query_pane_ParamLimits

0x81b1,	// (0x00054784) ncimui_query_pane

0x9a6b,	// (0x0005603e) list_highlight_pane_cp013

0xe52a,	// (0x0005aafd) ncim_list_query_list_pane_t1_copy1

0xe504,	// (0x0005aad7) ncim_list_single_graphic_pane_g1

0xe538,	// (0x0005ab0b) ncim_query_button_pane_cp01

0xe544,	// (0x0005ab17) ncim_query_entry_pane_ParamLimits

0xe544,	// (0x0005ab17) ncim_query_entry_pane

0xe557,	// (0x0005ab2a) ncimui_query_pane_g1

0xe563,	// (0x0005ab36) ncimui_query_pane_t1_ParamLimits

0xe563,	// (0x0005ab36) ncimui_query_pane_t1

0xa74e,	// (0x00056d21) input_focus_pane_cp012

0xe57c,	// (0x0005ab4f) ncim_query_entry_pane_t1

0xacd6,	// (0x000572a9) main_im_pane_ParamLimits

0xa74e,	// (0x00056d21) main_mobtv_pane_ParamLimits

0xa74e,	// (0x00056d21) main_mobtv_pane

0x7e3f,	// (0x00054412) main_cset6_slider_pane_g18_ParamLimits

0x7e3f,	// (0x00054412) main_cset6_slider_pane_g18

0x7e4b,	// (0x0005441e) main_cset6_slider_pane_g19_ParamLimits

0x7e4b,	// (0x0005441e) main_cset6_slider_pane_g19

0xb392,	// (0x00057965) bg_main_mobtv_pane_ParamLimits

0xb392,	// (0x00057965) bg_main_mobtv_pane

0x81c4,	// (0x00054797) main_mobtv_info_pane

0x81cd,	// (0x000547a0) main_mobtv_loading_pane_ParamLimits

0x81cd,	// (0x000547a0) main_mobtv_loading_pane

0xe58e,	// (0x0005ab61) main_mobtv_pg_channel_list_pane

0xe598,	// (0x0005ab6b) main_mobtv_pg_hdr_pane

0x81da,	// (0x000547ad) main_mobtv_programe_curr_pane_ParamLimits

0x81da,	// (0x000547ad) main_mobtv_programe_curr_pane

0x81e7,	// (0x000547ba) main_mobtv_programe_next_pane_ParamLimits

0x81e7,	// (0x000547ba) main_mobtv_programe_next_pane

0xe5a1,	// (0x0005ab74) popup_mobtv_noti_window

0xcfe6,	// (0x000595b9) main_tv_pg_hdr_pane_g1

0xe5a9,	// (0x0005ab7c) main_tv_pg_hdr_pane_g2

0xe5b1,	// (0x0005ab84) main_tv_pg_hdr_pane_g3

0xe5b9,	// (0x0005ab8c) main_tv_pg_hdr_pane_g4

0xe5c1,	// (0x0005ab94) main_tv_pg_hdr_pane_g5

0xe5cb,	// (0x0005ab9e) main_tv_pg_hdr_pane_g6

0xe5d5,	// (0x0005aba8) main_tv_pg_hdr_pane_g7

0xe608,	// (0x0005abdb) main_tv_pg_hdr_pane_g8

0xe612,	// (0x0005abe5) main_tv_pg_hdr_pane_g9

0xe61c,	// (0x0005abef) main_tv_pg_hdr_pane_g10

0xe626,	// (0x0005abf9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0005c1e1) main_tv_pg_hdr_pane_g

0xe630,	// (0x0005ac03) main_tv_pg_hdr_pane_t1

0xe63e,	// (0x0005ac11) main_tv_pg_hdr_pane_t2

0xe64c,	// (0x0005ac1f) main_tv_pg_hdr_pane_t3

0xe65c,	// (0x0005ac2f) main_tv_pg_hdr_pane_t4

0xe66c,	// (0x0005ac3f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0005c1f8) main_tv_pg_hdr_pane_t

0xe67c,	// (0x0005ac4f) single_mobtv_pg_channel_pane_ParamLimits

0xe67c,	// (0x0005ac4f) single_mobtv_pg_channel_pane

0xe68e,	// (0x0005ac61) single_mobtv_pg_channel_table_pane

0xe697,	// (0x0005ac6a) single_mobtv_pg_channel_thumb_pane

0xe6a0,	// (0x0005ac73) single_tv_pg_channel_pane_g1

0xe6a9,	// (0x0005ac7c) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0005c203) single_tv_pg_channel_pane_g

0xd246,	// (0x00059819) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd246,	// (0x00059819) bg_single_mobtv_pg_channel_thumb_pane

0xe6b2,	// (0x0005ac85) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe6b2,	// (0x0005ac85) single_mobtv_pg_channel_thumb_pane_g1

0xe6c0,	// (0x0005ac93) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe6c0,	// (0x0005ac93) single_mobtv_pg_channel_thumb_pane_g2

0xe6cc,	// (0x0005ac9f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe6cc,	// (0x0005ac9f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0005c208) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0005c208) single_mobtv_pg_channel_thumb_pane_g

0xe6d8,	// (0x0005acab) single_mobtv_pg_channel_thumb_pane_t1

0xe6e6,	// (0x0005acb9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0005c20f) single_mobtv_pg_channel_thumb_pane_t

0xcfe6,	// (0x000595b9) bg_single_mobtv_pg_channel_table_pane_g1

0xcfe6,	// (0x000595b9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0005bcba) bg_single_mobtv_pg_channel_table_pane_g

0xe6f4,	// (0x0005acc7) single_mobtv_pg_channel_table_pane_t1

0xe702,	// (0x0005acd5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0005c214) single_mobtv_pg_channel_table_pane_t

0x81fc,	// (0x000547cf) main_mobtv_info_pane_g1_ParamLimits

0x81fc,	// (0x000547cf) main_mobtv_info_pane_g1

0x821a,	// (0x000547ed) main_mobtv_info_pane_t1_ParamLimits

0x821a,	// (0x000547ed) main_mobtv_info_pane_t1

0x8292,	// (0x00054865) main_mobtv_info_pane_t2_ParamLimits

0x8292,	// (0x00054865) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0005c21e) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0005c21e) main_mobtv_info_pane_t

0x8321,	// (0x000548f4) wait_bar_pane_cp05

0x8333,	// (0x00054906) main_mobtv_loading_pane_g1_ParamLimits

0x8333,	// (0x00054906) main_mobtv_loading_pane_g1

0x8346,	// (0x00054919) main_mobtv_loading_pane_g2_ParamLimits

0x8346,	// (0x00054919) main_mobtv_loading_pane_g2

0x8352,	// (0x00054925) main_mobtv_loading_pane_g3_ParamLimits

0x8352,	// (0x00054925) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0005c225) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0005c225) main_mobtv_loading_pane_g

0xe710,	// (0x0005ace3) main_mobtv_loading_pane_t1_ParamLimits

0xe710,	// (0x0005ace3) main_mobtv_loading_pane_t1

0xe728,	// (0x0005acfb) main_mobtv_loading_pane_t2_ParamLimits

0xe728,	// (0x0005acfb) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0005c22c) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0005c22c) main_mobtv_loading_pane_t

0x8365,	// (0x00054938) wait_bar_pane_cp06_ParamLimits

0x8365,	// (0x00054938) wait_bar_pane_cp06

0xe74c,	// (0x0005ad1f) main_mobtv_programe_curr_pane_t1

0xe75a,	// (0x0005ad2d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0005c231) main_mobtv_programe_curr_pane_t

0xe768,	// (0x0005ad3b) main_mobtv_programe_next_pane_t1

0xe776,	// (0x0005ad49) main_mobtv_programe_next_pane_t2

0xe784,	// (0x0005ad57) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0005c236) main_mobtv_programe_next_pane_t

0x9a6b,	// (0x0005603e) bg_popup_mobtv_noti_window_pane

0xe792,	// (0x0005ad65) popup_mobtv_noti_window_g1

0xe79a,	// (0x0005ad6d) popup_mobtv_noti_window_t1

0xe7a8,	// (0x0005ad7b) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0005c23d) popup_mobtv_noti_window_t

0xcfe6,	// (0x000595b9) bg_popup_mobtv_noti_window_pane_g1

0x9a6b,	// (0x0005603e) sc_clock_pane

0x9a6b,	// (0x0005603e) main_fs_bigclock_pane

0x7a93,	// (0x00054066) blid2_tripm_pane_t4_ParamLimits

0x7a93,	// (0x00054066) blid2_tripm_pane_t4

0x8374,	// (0x00054947) sc_clock_pane_g1_ParamLimits

0x8374,	// (0x00054947) sc_clock_pane_g1

0x8386,	// (0x00054959) sc_clock_pane_t1_ParamLimits

0x8386,	// (0x00054959) sc_clock_pane_t1

0x83a8,	// (0x0005497b) sc_clock_pane_t2_ParamLimits

0x83a8,	// (0x0005497b) sc_clock_pane_t2

0x83c0,	// (0x00054993) sc_clock_pane_t3_ParamLimits

0x83c0,	// (0x00054993) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0005c242) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0005c242) sc_clock_pane_t

0x8cef,	// (0x000552c2) main_fs_bigclock_indicator_pane_ParamLimits

0x8cef,	// (0x000552c2) main_fs_bigclock_indicator_pane

0xd216,	// (0x000597e9) main_fs_bigclock_pane_g1_ParamLimits

0xd216,	// (0x000597e9) main_fs_bigclock_pane_g1

0x8cfb,	// (0x000552ce) main_fs_bigclock_pane_t1_ParamLimits

0x8cfb,	// (0x000552ce) main_fs_bigclock_pane_t1

0x8d0d,	// (0x000552e0) main_fs_bigclock_pane_t2_ParamLimits

0x8d0d,	// (0x000552e0) main_fs_bigclock_pane_t2

0x8d1f,	// (0x000552f2) main_fs_bigclock_pane_t3_ParamLimits

0x8d1f,	// (0x000552f2) main_fs_bigclock_pane_t3

0x0002,

0xfe2c,	// (0x0005c3ff) main_fs_bigclock_pane_t_ParamLimits

0xfe2c,	// (0x0005c3ff) main_fs_bigclock_pane_t

0xf034,	// (0x0005b607) main_fs_bigclock_indicator_pane_g1

0xe453,	// (0x0005aa26) ncim_query_content_pane_g2_ParamLimits

0xe453,	// (0x0005aa26) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0005c1cf) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0005c1cf) ncim_query_content_pane_g

0x83d9,	// (0x000549ac) sc_clock_pane_t4_ParamLimits

0x83d9,	// (0x000549ac) sc_clock_pane_t4

0xa74e,	// (0x00056d21) main_radioblah_pane

0xd980,	// (0x00059f53) cell_call4_button_pane_t1_copy1_ParamLimits

0xd980,	// (0x00059f53) cell_call4_button_pane_t1_copy1

0x8015,	// (0x000545e8) main_ncimui_pane_t1_ParamLimits

0x8015,	// (0x000545e8) main_ncimui_pane_t1

0x802f,	// (0x00054602) main_ncimui_pane_t2_ParamLimits

0x802f,	// (0x00054602) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0005c1c8) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0005c1c8) main_ncimui_pane_t

0xe8e3,	// (0x0005aeb6) main_radioblah_anim_pane_ParamLimits

0xe8e3,	// (0x0005aeb6) main_radioblah_anim_pane

0xe8f4,	// (0x0005aec7) main_radioblah_info_pane_ParamLimits

0xe8f4,	// (0x0005aec7) main_radioblah_info_pane

0xe908,	// (0x0005aedb) main_radioblah_pane_t1_ParamLimits

0xe908,	// (0x0005aedb) main_radioblah_pane_t1

0xe924,	// (0x0005aef7) main_radioblah_pane_t2_ParamLimits

0xe924,	// (0x0005aef7) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0005c263) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0005c263) main_radioblah_pane_t

0x848f,	// (0x00054a62) main_radioblah_rocker_ctrl_pane_ParamLimits

0x848f,	// (0x00054a62) main_radioblah_rocker_ctrl_pane

0xe96c,	// (0x0005af3f) main_radioblah_info_pane_t1_ParamLimits

0xe96c,	// (0x0005af3f) main_radioblah_info_pane_t1

0x84e7,	// (0x00054aba) main_radioblah_info_pane_t2_ParamLimits

0x84e7,	// (0x00054aba) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0005c26c) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0005c26c) main_radioblah_info_pane_t

0xcfe6,	// (0x000595b9) main_radioblah_rocker_ctrl_pane_g1

0x8597,	// (0x00054b6a) main_radioblah_rocker_ctrl_pane_g2

0x859f,	// (0x00054b72) main_radioblah_rocker_ctrl_pane_g3

0x85a7,	// (0x00054b7a) main_radioblah_rocker_ctrl_pane_g4

0x85af,	// (0x00054b82) main_radioblah_rocker_ctrl_pane_g5

0x85b7,	// (0x00054b8a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0005c275) main_radioblah_rocker_ctrl_pane_g

0x7fcb,	// (0x0005459e) main_cset_text2_pane_t1_copy1_ParamLimits

0xa1f0,	// (0x000567c3) cam4_image_uncrop_qvga_pane

0xa249,	// (0x0005681c) vid4_image_uncrop_qcif_pane

0xa398,	// (0x0005696b) cam6_image_uncrop_qvga_pane_ParamLimits

0xa398,	// (0x0005696b) cam6_image_uncrop_qvga_pane

0xe15a,	// (0x0005a72d) vid6_image_uncrop_qcif_pane_ParamLimits

0xe15a,	// (0x0005a72d) vid6_image_uncrop_qcif_pane

0x9a6b,	// (0x0005603e) bg_popup_preview_window_pane_cp03

0xe405,	// (0x0005a9d8) list_cset_text2_pane

0xe40d,	// (0x0005a9e0) main_cset6_text2_pane_g1

0xe415,	// (0x0005a9e8) main_cset6_text2_pane_t1

0x85bf,	// (0x00054b92) list_cset_text2_pane_t1_ParamLimits

0x85bf,	// (0x00054b92) list_cset_text2_pane_t1

0xa74e,	// (0x00056d21) main_radioblah_pane_ParamLimits

0x830d,	// (0x000548e0) main_mobtv_info_pane_t3_ParamLimits

0x830d,	// (0x000548e0) main_mobtv_info_pane_t3

0x847d,	// (0x00054a50) main_radioblah_pane_g1

0x84b7,	// (0x00054a8a) main_radioblah_info_pane_g1

0x853c,	// (0x00054b0f) main_radioblah_info_pane_t3_ParamLimits

0x853c,	// (0x00054b0f) main_radioblah_info_pane_t3

0x2f4c,	// (0x0004f51f) highlight_cell_cale_month_pane_ParamLimits

0x2f4c,	// (0x0004f51f) highlight_cell_cale_month_pane

0x9a6b,	// (0x0005603e) main_phob_fisheye_pane

0xd322,	// (0x000598f5) scroll_pane_cp0031_ParamLimits

0xd322,	// (0x000598f5) scroll_pane_cp0031

0xe268,	// (0x0005a83b) wait_bar_pane_cp08_ParamLimits

0x7dc5,	// (0x00054398) cset_list_set_pane_copy1_ParamLimits

0xe9a6,	// (0x0005af79) highlight_cell_cale_month_pane_g1

0x85da,	// (0x00054bad) highlight_cell_cale_month_pane_t1

0xdeeb,	// (0x0005a4be) list_gen_pane_cp01

0xdb49,	// (0x0005a11c) scroll_pane_01

0xb3a0,	// (0x00057973) list_single_double_fisheye_pane

0x85e8,	// (0x00054bbb) list_double_fisheye_pane_g1_ParamLimits

0x85e8,	// (0x00054bbb) list_double_fisheye_pane_g1

0x85f4,	// (0x00054bc7) list_double_fisheye_pane_g2_ParamLimits

0x85f4,	// (0x00054bc7) list_double_fisheye_pane_g2

0xb3a9,	// (0x0005797c) list_double_fisheye_pane_g3_ParamLimits

0xb3a9,	// (0x0005797c) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0005c282) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0005c282) list_double_fisheye_pane_g

0xa3a6,	// (0x00056979) list_double_fisheye_pane_t1_ParamLimits

0xa3a6,	// (0x00056979) list_double_fisheye_pane_t1

0xa3c1,	// (0x00056994) list_double_fisheye_pane_t2_ParamLimits

0xa3c1,	// (0x00056994) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0005c28d) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0005c28d) list_double_fisheye_pane_t

0x9a6b,	// (0x0005603e) main_call5_pane

0x8404,	// (0x000549d7) sc_swipe_pane_ParamLimits

0x8404,	// (0x000549d7) sc_swipe_pane

0x8638,	// (0x00054c0b) call5_image_pane_ParamLimits

0x8638,	// (0x00054c0b) call5_image_pane

0x8655,	// (0x00054c28) call5_swipe_1_pane_ParamLimits

0x8655,	// (0x00054c28) call5_swipe_1_pane

0x8668,	// (0x00054c3b) call5_swipe_2_pane_ParamLimits

0x8668,	// (0x00054c3b) call5_swipe_2_pane

0x8693,	// (0x00054c66) popup_call5_audio_first_window_ParamLimits

0x8693,	// (0x00054c66) popup_call5_audio_first_window

0xd246,	// (0x00059819) call5_swipe_1_pane_g1_ParamLimits

0xd246,	// (0x00059819) call5_swipe_1_pane_g1

0xe9ae,	// (0x0005af81) call5_swipe_1_pane_g2_ParamLimits

0xe9ae,	// (0x0005af81) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0005c292) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0005c292) call5_swipe_1_pane_g

0xe9ba,	// (0x0005af8d) call5_swipe_1_pane_t1_ParamLimits

0xe9ba,	// (0x0005af8d) call5_swipe_1_pane_t1

0xd246,	// (0x00059819) call5_swipe_2_pane_g1_ParamLimits

0xd246,	// (0x00059819) call5_swipe_2_pane_g1

0xe9cf,	// (0x0005afa2) call5_swipe_2_pane_g2_ParamLimits

0xe9cf,	// (0x0005afa2) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0005c297) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0005c297) call5_swipe_2_pane_g

0xe9db,	// (0x0005afae) call5_swipe_2_pane_t1_ParamLimits

0xe9db,	// (0x0005afae) call5_swipe_2_pane_t1

0xe9f0,	// (0x0005afc3) sc_swipe_pane_g1_ParamLimits

0xe9f0,	// (0x0005afc3) sc_swipe_pane_g1

0xe9fd,	// (0x0005afd0) sc_swipe_pane_g2_ParamLimits

0xe9fd,	// (0x0005afd0) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0005c29c) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0005c29c) sc_swipe_pane_g

0xea09,	// (0x0005afdc) sc_swipe_pane_t1_ParamLimits

0xea09,	// (0x0005afdc) sc_swipe_pane_t1

0x9a6b,	// (0x0005603e) main_cmail_launcher_pane

0x86a4,	// (0x00054c77) aid_size_cell_cmail_l_ParamLimits

0x86a4,	// (0x00054c77) aid_size_cell_cmail_l

0x86be,	// (0x00054c91) grid_cmail_l_pane_ParamLimits

0x86be,	// (0x00054c91) grid_cmail_l_pane

0x86d9,	// (0x00054cac) cell_cmail_l_pane_ParamLimits

0x86d9,	// (0x00054cac) cell_cmail_l_pane

0x86ff,	// (0x00054cd2) cell_cmail_l_pane_g1_ParamLimits

0x86ff,	// (0x00054cd2) cell_cmail_l_pane_g1

0x8710,	// (0x00054ce3) cell_cmail_l_pane_t1_ParamLimits

0x8710,	// (0x00054ce3) cell_cmail_l_pane_t1

0xea1e,	// (0x0005aff1) cell_cmail_l_pane_t2_ParamLimits

0xea1e,	// (0x0005aff1) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0005c2a1) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0005c2a1) cell_cmail_l_pane_t

0xa74e,	// (0x00056d21) grid_highlight_pane_cp018_ParamLimits

0xa74e,	// (0x00056d21) grid_highlight_pane_cp018

0x0f7c,	// (0x0004d54f) main2_pane_ParamLimits

0x0f7c,	// (0x0004d54f) main2_pane

0xad81,	// (0x00057354) popup_sp_fs_action_menu_bg_pane_g1

0xad89,	// (0x0005735c) popup_sp_fs_action_menu_bg_pane_g2

0xad91,	// (0x00057364) popup_sp_fs_action_menu_bg_pane_g3

0xad99,	// (0x0005736c) popup_sp_fs_action_menu_bg_pane_g4

0xada1,	// (0x00057374) popup_sp_fs_action_menu_bg_pane_g5

0xada9,	// (0x0005737c) popup_sp_fs_action_menu_bg_pane_g6

0xadb1,	// (0x00057384) popup_sp_fs_action_menu_bg_pane_g7

0xadb9,	// (0x0005738c) popup_sp_fs_action_menu_bg_pane_g8

0xadc1,	// (0x00057394) popup_sp_fs_action_menu_bg_pane_g9

0xadc9,	// (0x0005739c) popup_sp_fs_action_menu_bg_pane_g10

0xadc9,	// (0x0005739c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0005b766) popup_sp_fs_action_menu_bg_pane_g

0x022e,	// (0x0004c801) list_medium_line_x2_t3_g3_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x2_t3_g3_g1

0x1f87,	// (0x0004e55a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1f87,	// (0x0004e55a) list_medium_line_x2_t3_g3_g2

0x023a,	// (0x0004c80d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x023a,	// (0x0004c80d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0005b816) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0005b816) list_medium_line_x2_t3_g3_g

0x0246,	// (0x0004c819) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0246,	// (0x0004c819) list_medium_line_x2_t3_g3_t1

0x025b,	// (0x0004c82e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x025b,	// (0x0004c82e) list_medium_line_x2_t3_g3_t2

0x026f,	// (0x0004c842) list_medium_line_x2_t3_g3_t3_ParamLimits

0x026f,	// (0x0004c842) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0005b81d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0005b81d) list_medium_line_x2_t3_g3_t

0x022e,	// (0x0004c801) list_medium_line_x2_t3_g2_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x2_t3_g2_g1

0x023a,	// (0x0004c80d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x023a,	// (0x0004c80d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0005b824) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0005b824) list_medium_line_x2_t3_g2_g

0x0284,	// (0x0004c857) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0284,	// (0x0004c857) list_medium_line_x2_t3_g2_t1

0x029a,	// (0x0004c86d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x029a,	// (0x0004c86d) list_medium_line_x2_t3_g2_t2

0x026f,	// (0x0004c842) list_medium_line_x2_t3_g2_t3_ParamLimits

0x026f,	// (0x0004c842) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0005b829) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0005b829) list_medium_line_x2_t3_g2_t

0x022e,	// (0x0004c801) list_medium_line_x2_t4_g4_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x2_t4_g4_g1

0x1f93,	// (0x0004e566) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f93,	// (0x0004e566) list_medium_line_x2_t4_g4_g2

0x1f87,	// (0x0004e55a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1f87,	// (0x0004e55a) list_medium_line_x2_t4_g4_g3

0x02ac,	// (0x0004c87f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x02ac,	// (0x0004c87f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0005b830) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0005b830) list_medium_line_x2_t4_g4_g

0x02b8,	// (0x0004c88b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x02b8,	// (0x0004c88b) list_medium_line_x2_t4_g4_t1

0x02cf,	// (0x0004c8a2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x02cf,	// (0x0004c8a2) list_medium_line_x2_t4_g4_t2

0x02e4,	// (0x0004c8b7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x02e4,	// (0x0004c8b7) list_medium_line_x2_t4_g4_t3

0x02f6,	// (0x0004c8c9) list_medium_line_x2_t4_g4_t4_ParamLimits

0x02f6,	// (0x0004c8c9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0005b839) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0005b839) list_medium_line_x2_t4_g4_t

0x022e,	// (0x0004c801) list_medium_line_x2_t2_g4_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x2_t2_g4_g1

0x1f93,	// (0x0004e566) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f93,	// (0x0004e566) list_medium_line_x2_t2_g4_g2

0x1f87,	// (0x0004e55a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1f87,	// (0x0004e55a) list_medium_line_x2_t2_g4_g3

0x023a,	// (0x0004c80d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x023a,	// (0x0004c80d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0005b8a0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0005b8a0) list_medium_line_x2_t2_g4_g

0x0308,	// (0x0004c8db) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0308,	// (0x0004c8db) list_medium_line_x2_t2_g4_t1

0x026f,	// (0x0004c842) list_medium_line_x2_t2_g4_t2_ParamLimits

0x026f,	// (0x0004c842) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0005b8a9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0005b8a9) list_medium_line_x2_t2_g4_t

0x022e,	// (0x0004c801) list_medium_line_x2_t2_g3_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x2_t2_g3_g1

0x1f87,	// (0x0004e55a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1f87,	// (0x0004e55a) list_medium_line_x2_t2_g3_g2

0x023a,	// (0x0004c80d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x023a,	// (0x0004c80d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0005b816) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0005b816) list_medium_line_x2_t2_g3_g

0x031d,	// (0x0004c8f0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x031d,	// (0x0004c8f0) list_medium_line_x2_t2_g3_t1

0x026f,	// (0x0004c842) list_medium_line_x2_t2_g3_t2_ParamLimits

0x026f,	// (0x0004c842) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0005b8ae) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0005b8ae) list_medium_line_x2_t2_g3_t

0x311d,	// (0x0004f6f0) main_sp_fs_list_pane_ParamLimits

0x311d,	// (0x0004f6f0) main_sp_fs_list_pane

0xcd17,	// (0x000592ea) sp_fs_scroll_pane_ParamLimits

0xcd17,	// (0x000592ea) sp_fs_scroll_pane

0x0332,	// (0x0004c905) list_medium_line_x2_t3_t1

0x0342,	// (0x0004c915) list_medium_line_x2_t3_t2

0x0350,	// (0x0004c923) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0005b8f9) list_medium_line_x2_t3_t

0x035e,	// (0x0004c931) list_medium_line_x3_t4_t1

0x036e,	// (0x0004c941) list_medium_line_x3_t4_t2

0x037c,	// (0x0004c94f) list_medium_line_x3_t4_t3

0x0350,	// (0x0004c923) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0005b900) list_medium_line_x3_t4_t

0x038a,	// (0x0004c95d) list_medium_line_x4_t5_t1

0x039a,	// (0x0004c96d) list_medium_line_x4_t5_t2

0x037c,	// (0x0004c94f) list_medium_line_x4_t5_t3

0x03a8,	// (0x0004c97b) list_medium_line_x4_t5_t4

0x0350,	// (0x0004c923) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0005b909) list_medium_line_x4_t5_t

0x022e,	// (0x0004c801) list_medium_line_t4_g4_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_t4_g4_g1

0x02ac,	// (0x0004c87f) list_medium_line_t4_g4_g2_ParamLimits

0x02ac,	// (0x0004c87f) list_medium_line_t4_g4_g2

0x03b6,	// (0x0004c989) list_medium_line_t4_g4_g3_ParamLimits

0x03b6,	// (0x0004c989) list_medium_line_t4_g4_g3

0x023a,	// (0x0004c80d) list_medium_line_t4_g4_g4_ParamLimits

0x023a,	// (0x0004c80d) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0005b914) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0005b914) list_medium_line_t4_g4_g

0x03c2,	// (0x0004c995) list_medium_line_t4_g4_t1_ParamLimits

0x03c2,	// (0x0004c995) list_medium_line_t4_g4_t1

0x03d7,	// (0x0004c9aa) list_medium_line_t4_g4_t2_ParamLimits

0x03d7,	// (0x0004c9aa) list_medium_line_t4_g4_t2

0x03ec,	// (0x0004c9bf) list_medium_line_t4_g4_t3_ParamLimits

0x03ec,	// (0x0004c9bf) list_medium_line_t4_g4_t3

0x026f,	// (0x0004c842) list_medium_line_t4_g4_t4_ParamLimits

0x026f,	// (0x0004c842) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0005b91d) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0005b91d) list_medium_line_t4_g4_t

0x31c8,	// (0x0004f79b) chi_dic_find_pane_g1

0x4333,	// (0x00050906) main_tport_pane

0x7232,	// (0x00053805) list_medium_line_plain_t1

0x72e4,	// (0x000538b7) list_medium_line_t2_g2_g1_ParamLimits

0x72e4,	// (0x000538b7) list_medium_line_t2_g2_g1

0x72f0,	// (0x000538c3) list_medium_line_t2_g2_g2_ParamLimits

0x72f0,	// (0x000538c3) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0005bfd9) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0005bfd9) list_medium_line_t2_g2_g

0x0554,	// (0x0004cb27) list_medium_line_t2_g2_t1_ParamLimits

0x0554,	// (0x0004cb27) list_medium_line_t2_g2_t1

0x056e,	// (0x0004cb41) list_medium_line_t2_g2_t2_ParamLimits

0x056e,	// (0x0004cb41) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0005bfde) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0005bfde) list_medium_line_t2_g2_t

0x783b,	// (0x00053e0e) aid_sp_fs_list_icon_a_sm

0x7843,	// (0x00053e16) aid_sp_fs_list_icon_d

0x784b,	// (0x00053e1e) aid_sp_fs_text_primary

0xe5ff,	// (0x0005abd2) aid_sp_fs_text_secondary

0x7854,	// (0x00053e27) list_medium_line

0x7854,	// (0x00053e27) list_medium_line_g2

0x7854,	// (0x00053e27) list_medium_line_g3

0x7854,	// (0x00053e27) list_medium_line_plain

0x7854,	// (0x00053e27) list_medium_line_plain_t2

0x7854,	// (0x00053e27) list_medium_line_plain_t3

0x7854,	// (0x00053e27) list_medium_line_right_icon

0x7854,	// (0x00053e27) list_medium_line_right_iconx2

0x7854,	// (0x00053e27) list_medium_line_t2

0x7854,	// (0x00053e27) list_medium_line_t2_g2

0x7854,	// (0x00053e27) list_medium_line_t2_g3

0x7854,	// (0x00053e27) list_medium_line_t2_right_icon

0x7854,	// (0x00053e27) list_medium_line_t2_right_iconx2

0x7854,	// (0x00053e27) list_medium_line_t3

0x7854,	// (0x00053e27) list_medium_line_t3_g2

0x7854,	// (0x00053e27) list_medium_line_t3_g3

0x7854,	// (0x00053e27) list_medium_line_t3_right_iconx2

0x785d,	// (0x00053e30) list_medium_line_t4_g4

0x7866,	// (0x00053e39) list_medium_line_x2

0x7866,	// (0x00053e39) list_medium_line_x2_t2_g2

0x7866,	// (0x00053e39) list_medium_line_x2_t2_g3

0x7866,	// (0x00053e39) list_medium_line_x2_t2_g4

0x7866,	// (0x00053e39) list_medium_line_x2_t3

0x7866,	// (0x00053e39) list_medium_line_x2_t3_g2

0x7866,	// (0x00053e39) list_medium_line_x2_t3_g3

0x7866,	// (0x00053e39) list_medium_line_x2_t3_g4

0x7866,	// (0x00053e39) list_medium_line_x2_t4_g2

0x7866,	// (0x00053e39) list_medium_line_x2_t4_g4

0x786f,	// (0x00053e42) list_medium_line_x3

0x786f,	// (0x00053e42) list_medium_line_x3_t4

0x786f,	// (0x00053e42) list_medium_line_x3_t4_g4

0x785d,	// (0x00053e30) list_medium_line_x4_t4

0x785d,	// (0x00053e30) list_medium_line_x4_t4_g7

0x785d,	// (0x00053e30) list_medium_line_x4_t5

0x06fd,	// (0x0004ccd0) list_single_fs_dyc_pane_ParamLimits

0x06fd,	// (0x0004ccd0) list_single_fs_dyc_pane

0x022e,	// (0x0004c801) list_medium_line_x4_t4_g7_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x4_t4_g7_g1

0x073d,	// (0x0004cd10) list_medium_line_x4_t4_g7_g2_ParamLimits

0x073d,	// (0x0004cd10) list_medium_line_x4_t4_g7_g2

0x7f93,	// (0x00054566) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7f93,	// (0x00054566) list_medium_line_x4_t4_g7_g3

0x7fa2,	// (0x00054575) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7fa2,	// (0x00054575) list_medium_line_x4_t4_g7_g4

0x0749,	// (0x0004cd1c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0749,	// (0x0004cd1c) list_medium_line_x4_t4_g7_g5

0x0758,	// (0x0004cd2b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0758,	// (0x0004cd2b) list_medium_line_x4_t4_g7_g6

0x0767,	// (0x0004cd3a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0767,	// (0x0004cd3a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0005c1a9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0005c1a9) list_medium_line_x4_t4_g7_g

0x0773,	// (0x0004cd46) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0773,	// (0x0004cd46) list_medium_line_x4_t4_g7_t1

0x0788,	// (0x0004cd5b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0788,	// (0x0004cd5b) list_medium_line_x4_t4_g7_t2

0x079d,	// (0x0004cd70) list_medium_line_x4_t4_g7_t3_ParamLimits

0x079d,	// (0x0004cd70) list_medium_line_x4_t4_g7_t3

0x07b2,	// (0x0004cd85) list_medium_line_x4_t4_g7_t4_ParamLimits

0x07b2,	// (0x0004cd85) list_medium_line_x4_t4_g7_t4

0x07c4,	// (0x0004cd97) list_medium_line_x4_t4_g7_t5_ParamLimits

0x07c4,	// (0x0004cd97) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0005c1b8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0005c1b8) list_medium_line_x4_t4_g7_t

0x7fae,	// (0x00054581) list_single_dyc_row_pane_ParamLimits

0x7fae,	// (0x00054581) list_single_dyc_row_pane

0x8625,	// (0x00054bf8) call5_gesture_pane_ParamLimits

0x8625,	// (0x00054bf8) call5_gesture_pane

0x867b,	// (0x00054c4e) call5_windows_pane_ParamLimits

0x867b,	// (0x00054c4e) call5_windows_pane

0x8726,	// (0x00054cf9) call5_swipe_1_pane_cp_ParamLimits

0x8726,	// (0x00054cf9) call5_swipe_1_pane_cp

0x8732,	// (0x00054d05) call5_swipe_2_pane_cp_ParamLimits

0x8732,	// (0x00054d05) call5_swipe_2_pane_cp

0xb7c0,	// (0x00057d93) call5_image_pane_cp

0x873e,	// (0x00054d11) popup_call5_audio_first_window_cp_ParamLimits

0x873e,	// (0x00054d11) popup_call5_audio_first_window_cp

0xe9f0,	// (0x0005afc3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe9f0,	// (0x0005afc3) call5_swipe_1_pane_g1_cp

0xea30,	// (0x0005b003) call5_swipe_1_pane_g2_cp

0xea09,	// (0x0005afdc) call5_swipe_1_pane_t1_cp_ParamLimits

0xea09,	// (0x0005afdc) call5_swipe_1_pane_t1_cp

0xe9f0,	// (0x0005afc3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe9f0,	// (0x0005afc3) call5_swipe_2_pane_g1_cp

0xea38,	// (0x0005b00b) call5_swipe_2_pane_g2_cp

0xea40,	// (0x0005b013) call5_swipe_2_pane_t1_cp_ParamLimits

0xea40,	// (0x0005b013) call5_swipe_2_pane_t1_cp

0xa74e,	// (0x00056d21) main_sp_fs_email_pane

0xea55,	// (0x0005b028) main_sp_fs_listscroll_pane_te

0x874c,	// (0x00054d1f) popup_sp_fs_action_menu_pane_ParamLimits

0x874c,	// (0x00054d1f) popup_sp_fs_action_menu_pane

0xcfe6,	// (0x000595b9) bg_sp_fs_ctrlbar_pane_g1

0xea5e,	// (0x0005b031) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xea67,	// (0x0005b03a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xea70,	// (0x0005b043) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcfe6,	// (0x000595b9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0005c2a6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcdc9,	// (0x0005939c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcdc9,	// (0x0005939c) bg_sp_fs_ctrlbar_ddmenu_pane

0xea79,	// (0x0005b04c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xea79,	// (0x0005b04c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xea85,	// (0x0005b058) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xea85,	// (0x0005b058) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0005c2af) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0005c2af) main_sp_fs_ctrlbar_ddmenu_pane_g

0xea91,	// (0x0005b064) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xea91,	// (0x0005b064) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa3e3,	// (0x000569b6) list_medium_line_t2_right_icon_g1

0x07d6,	// (0x0004cda9) list_medium_line_t2_right_icon_t1

0x07e6,	// (0x0004cdb9) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0005c2b4) list_medium_line_t2_right_icon_t

0xcbd0,	// (0x000591a3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcbd0,	// (0x000591a3) bg_sp_fs_ctrlbar_pane

0x87d6,	// (0x00054da9) main_sp_fs_ctrlbar_button_pane_cp01

0x87e0,	// (0x00054db3) main_sp_fs_ctrlbar_ddmenu_pane

0xeae3,	// (0x0005b0b6) main_sp_fs_ctrlbar_pane_g1

0xeaef,	// (0x0005b0c2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0005c2b9) main_sp_fs_ctrlbar_pane_g

0xeafb,	// (0x0005b0ce) main_sp_fs_ctrlbar_pane_t1

0x87ea,	// (0x00054dbd) main_sp_fs_ctrlbar_pane

0x880e,	// (0x00054de1) main_sp_fs_listscroll_pane_te_cp01

0x07f8,	// (0x0004cdcb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x07f8,	// (0x0004cdcb) popup_sp_fs_action_menu_pane_cp01

0xa74e,	// (0x00056d21) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa74e,	// (0x00056d21) bg_sp_fs_highlight_list_pane_cp01

0xa3eb,	// (0x000569be) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa3eb,	// (0x000569be) sp_fs_action_menu_list_gene_pane_g1

0xeb2b,	// (0x0005b0fe) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xeb2b,	// (0x0005b0fe) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0005c2c3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0005c2c3) sp_fs_action_menu_list_gene_pane_g

0xa3fa,	// (0x000569cd) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa3fa,	// (0x000569cd) sp_fs_action_menu_list_gene_pane_t1

0xa412,	// (0x000569e5) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa412,	// (0x000569e5) sp_fs_action_menu_list_gene_pane

0xeb38,	// (0x0005b10b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xeb38,	// (0x0005b10b) popup_sp_fs_action_menu_bg_pane

0xa431,	// (0x00056a04) sp_fs_action_menu_list_pane_ParamLimits

0xa431,	// (0x00056a04) sp_fs_action_menu_list_pane

0x0828,	// (0x0004cdfb) sp_fs_scroll_pane_cp01_ParamLimits

0x0828,	// (0x0004cdfb) sp_fs_scroll_pane_cp01

0x084e,	// (0x0004ce21) list_medium_line_plain_t2_t1

0x085e,	// (0x0004ce31) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0005c2c8) list_medium_line_plain_t2_t

0x086e,	// (0x0004ce41) list_medium_line_plain_t3_t1

0x087e,	// (0x0004ce51) list_medium_line_plain_t3_t2

0x088c,	// (0x0004ce5f) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0005c2cd) list_medium_line_plain_t3_t

0x022e,	// (0x0004c801) list_medium_line_x2_t2_g2_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x2_t2_g2_g1

0x023a,	// (0x0004c80d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x023a,	// (0x0004c80d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0005b824) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0005b824) list_medium_line_x2_t2_g2_g

0x03c2,	// (0x0004c995) list_medium_line_x2_t2_g2_t1_ParamLimits

0x03c2,	// (0x0004c995) list_medium_line_x2_t2_g2_t1

0x026f,	// (0x0004c842) list_medium_line_x2_t2_g2_t2_ParamLimits

0x026f,	// (0x0004c842) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0005c2d4) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0005c2d4) list_medium_line_x2_t2_g2_t

0x022e,	// (0x0004c801) list_medium_line_x2_t4_g2_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x2_t4_g2_g1

0x089a,	// (0x0004ce6d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x089a,	// (0x0004ce6d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x0005c2d9) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x0005c2d9) list_medium_line_x2_t4_g2_g

0x08ac,	// (0x0004ce7f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x08ac,	// (0x0004ce7f) list_medium_line_x2_t4_g2_t1

0x08c6,	// (0x0004ce99) list_medium_line_x2_t4_g2_t2_ParamLimits

0x08c6,	// (0x0004ce99) list_medium_line_x2_t4_g2_t2

0x08db,	// (0x0004ceae) list_medium_line_x2_t4_g2_t3_ParamLimits

0x08db,	// (0x0004ceae) list_medium_line_x2_t4_g2_t3

0x026f,	// (0x0004c842) list_medium_line_x2_t4_g2_t4_ParamLimits

0x026f,	// (0x0004c842) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0005c2de) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0005c2de) list_medium_line_x2_t4_g2_t

0xa451,	// (0x00056a24) list_medium_line_t3_right_iconx2_g1

0xa3e3,	// (0x000569b6) list_medium_line_t3_right_iconx2_g2

0x08f0,	// (0x0004cec3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0005c2e7) list_medium_line_t3_right_iconx2_g

0x08fa,	// (0x0004cecd) list_medium_line_t3_right_iconx2_t1

0x090a,	// (0x0004cedd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0005c2ee) list_medium_line_t3_right_iconx2_t

0x022e,	// (0x0004c801) list_medium_line_x3_t4_g4_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x3_t4_g4_g1

0x1f87,	// (0x0004e55a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1f87,	// (0x0004e55a) list_medium_line_x3_t4_g4_g2

0x02ac,	// (0x0004c87f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x02ac,	// (0x0004c87f) list_medium_line_x3_t4_g4_g3

0xa459,	// (0x00056a2c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa459,	// (0x00056a2c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x0005c2f3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x0005c2f3) list_medium_line_x3_t4_g4_g

0x0918,	// (0x0004ceeb) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0918,	// (0x0004ceeb) list_medium_line_x3_t4_g4_t1

0x092f,	// (0x0004cf02) list_medium_line_x3_t4_g4_t2_ParamLimits

0x092f,	// (0x0004cf02) list_medium_line_x3_t4_g4_t2

0x03d7,	// (0x0004c9aa) list_medium_line_x3_t4_g4_t3_ParamLimits

0x03d7,	// (0x0004c9aa) list_medium_line_x3_t4_g4_t3

0x094a,	// (0x0004cf1d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x094a,	// (0x0004cf1d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0005c2fc) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0005c2fc) list_medium_line_x3_t4_g4_t

0x0967,	// (0x0004cf3a) list_single_dyc_row_text_pane_t1_ParamLimits

0x0967,	// (0x0004cf3a) list_single_dyc_row_text_pane_t1

0x09b0,	// (0x0004cf83) list_single_dyc_row_text_pane_t2_ParamLimits

0x09b0,	// (0x0004cf83) list_single_dyc_row_text_pane_t2

0xa465,	// (0x00056a38) list_single_dyc_row_text_pane_t3_ParamLimits

0xa465,	// (0x00056a38) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0005c305) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0005c305) list_single_dyc_row_text_pane_t

0xa477,	// (0x00056a4a) list_single_dyc_row_pane_g1_ParamLimits

0xa477,	// (0x00056a4a) list_single_dyc_row_pane_g1

0xa483,	// (0x00056a56) list_single_dyc_row_pane_g2_ParamLimits

0xa483,	// (0x00056a56) list_single_dyc_row_pane_g2

0xa48f,	// (0x00056a62) list_single_dyc_row_pane_g3_ParamLimits

0xa48f,	// (0x00056a62) list_single_dyc_row_pane_g3

0xa49b,	// (0x00056a6e) list_single_dyc_row_pane_g4_ParamLimits

0xa49b,	// (0x00056a6e) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005c30c) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005c30c) list_single_dyc_row_pane_g

0xa4a7,	// (0x00056a7a) list_single_dyc_row_text_pane_ParamLimits

0xa4a7,	// (0x00056a7a) list_single_dyc_row_text_pane

0x9a6b,	// (0x0005603e) bg_sp_fs_scroll_pane

0xeb46,	// (0x0005b119) thumb_sp_fs_scroll_pane

0x72e4,	// (0x000538b7) list_medium_line_g1_ParamLimits

0x72e4,	// (0x000538b7) list_medium_line_g1

0xa4c6,	// (0x00056a99) list_medium_line_t1_ParamLimits

0xa4c6,	// (0x00056a99) list_medium_line_t1

0x022e,	// (0x0004c801) list_medium_line_x2_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x2_g1

0x1f87,	// (0x0004e55a) list_medium_line_x2_g2_ParamLimits

0x1f87,	// (0x0004e55a) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005c315) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005c315) list_medium_line_x2_g

0xa4db,	// (0x00056aae) list_medium_line_x2_t1_ParamLimits

0xa4db,	// (0x00056aae) list_medium_line_x2_t1

0x022e,	// (0x0004c801) list_medium_line_x3_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x3_g1

0x1f87,	// (0x0004e55a) list_medium_line_x3_g2_ParamLimits

0x1f87,	// (0x0004e55a) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005c315) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005c315) list_medium_line_x3_g

0xa4db,	// (0x00056aae) list_medium_line_x3_t1_ParamLimits

0xa4db,	// (0x00056aae) list_medium_line_x3_t1

0xeb4f,	// (0x0005b122) thumb_sp_fs_scroll_pane_g1

0xeb58,	// (0x0005b12b) thumb_sp_fs_scroll_pane_g2

0xeb61,	// (0x0005b134) thumb_sp_fs_scroll_pane_g3

0x0002,

0x000e,	// (0x0004c5e1) thumb_sp_fs_scroll_pane_g

0xeb4f,	// (0x0005b122) bg_sp_fs_scroll_pane_g1

0xeb58,	// (0x0005b12b) bg_sp_fs_scroll_pane_g2

0xeb61,	// (0x0005b134) bg_sp_fs_scroll_pane_g3

0x0002,

0x000e,	// (0x0004c5e1) bg_sp_fs_scroll_pane_g

0x022e,	// (0x0004c801) list_medium_line_x2_t3_g4_g1_ParamLimits

0x022e,	// (0x0004c801) list_medium_line_x2_t3_g4_g1

0x1f93,	// (0x0004e566) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f93,	// (0x0004e566) list_medium_line_x2_t3_g4_g2

0x1f87,	// (0x0004e55a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1f87,	// (0x0004e55a) list_medium_line_x2_t3_g4_g3

0x023a,	// (0x0004c80d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x023a,	// (0x0004c80d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0005b8a0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0005b8a0) list_medium_line_x2_t3_g4_g

0x0a0a,	// (0x0004cfdd) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0a0a,	// (0x0004cfdd) list_medium_line_x2_t3_g4_t1

0x0a24,	// (0x0004cff7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0a24,	// (0x0004cff7) list_medium_line_x2_t3_g4_t2

0x026f,	// (0x0004c842) list_medium_line_x2_t3_g4_t3_ParamLimits

0x026f,	// (0x0004c842) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0005c31a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0005c31a) list_medium_line_x2_t3_g4_t

0x72e4,	// (0x000538b7) list_medium_line_g2_g1_ParamLimits

0x72e4,	// (0x000538b7) list_medium_line_g2_g1

0x72f0,	// (0x000538c3) list_medium_line_g2_g2_ParamLimits

0x72f0,	// (0x000538c3) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0005bfd9) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0005bfd9) list_medium_line_g2_g

0xa4f1,	// (0x00056ac4) list_medium_line_g2_t1_ParamLimits

0xa4f1,	// (0x00056ac4) list_medium_line_g2_t1

0x72e4,	// (0x000538b7) list_medium_line_t3_g2_g1_ParamLimits

0x72e4,	// (0x000538b7) list_medium_line_t3_g2_g1

0x72f0,	// (0x000538c3) list_medium_line_t3_g2_g2_ParamLimits

0x72f0,	// (0x000538c3) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0005bfd9) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0005bfd9) list_medium_line_t3_g2_g

0x0a3d,	// (0x0004d010) list_medium_line_t3_g2_t1_ParamLimits

0x0a3d,	// (0x0004d010) list_medium_line_t3_g2_t1

0x0a54,	// (0x0004d027) list_medium_line_t3_g2_t2_ParamLimits

0x0a54,	// (0x0004d027) list_medium_line_t3_g2_t2

0x0a69,	// (0x0004d03c) list_medium_line_t3_g2_t3_ParamLimits

0x0a69,	// (0x0004d03c) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0005c321) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0005c321) list_medium_line_t3_g2_t

0xa3e3,	// (0x000569b6) list_medium_line_right_icon_g1

0xa506,	// (0x00056ad9) list_medium_line_right_icon_t1

0x72e4,	// (0x000538b7) list_medium_line_t2_g1_ParamLimits

0x72e4,	// (0x000538b7) list_medium_line_t2_g1

0x0a82,	// (0x0004d055) list_medium_line_t2_t1_ParamLimits

0x0a82,	// (0x0004d055) list_medium_line_t2_t1

0x0a9c,	// (0x0004d06f) list_medium_line_t2_t2_ParamLimits

0x0a9c,	// (0x0004d06f) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0005c328) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0005c328) list_medium_line_t2_t

0x72e4,	// (0x000538b7) list_medium_line_t3_g1_ParamLimits

0x72e4,	// (0x000538b7) list_medium_line_t3_g1

0x0ab5,	// (0x0004d088) list_medium_line_t3_t1_ParamLimits

0x0ab5,	// (0x0004d088) list_medium_line_t3_t1

0x0acf,	// (0x0004d0a2) list_medium_line_t3_t2_ParamLimits

0x0acf,	// (0x0004d0a2) list_medium_line_t3_t2

0x0ae4,	// (0x0004d0b7) list_medium_line_t3_t3_ParamLimits

0x0ae4,	// (0x0004d0b7) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0005c32d) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0005c32d) list_medium_line_t3_t

0x72e4,	// (0x000538b7) list_medium_line_g3_g1_ParamLimits

0x72e4,	// (0x000538b7) list_medium_line_g3_g1

0xa514,	// (0x00056ae7) list_medium_line_g3_g2_ParamLimits

0xa514,	// (0x00056ae7) list_medium_line_g3_g2

0x72f0,	// (0x000538c3) list_medium_line_g3_g3_ParamLimits

0x72f0,	// (0x000538c3) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0005c334) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0005c334) list_medium_line_g3_g

0xa520,	// (0x00056af3) list_medium_line_g3_t1_ParamLimits

0xa520,	// (0x00056af3) list_medium_line_g3_t1

0x72e4,	// (0x000538b7) list_medium_line_t2_g3_g1_ParamLimits

0x72e4,	// (0x000538b7) list_medium_line_t2_g3_g1

0xa514,	// (0x00056ae7) list_medium_line_t2_g3_g2_ParamLimits

0xa514,	// (0x00056ae7) list_medium_line_t2_g3_g2

0x72f0,	// (0x000538c3) list_medium_line_t2_g3_g3_ParamLimits

0x72f0,	// (0x000538c3) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0005c334) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0005c334) list_medium_line_t2_g3_g

0x0af9,	// (0x0004d0cc) list_medium_line_t2_g3_t1_ParamLimits

0x0af9,	// (0x0004d0cc) list_medium_line_t2_g3_t1

0x0b10,	// (0x0004d0e3) list_medium_line_t2_g3_t2_ParamLimits

0x0b10,	// (0x0004d0e3) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0005c33b) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0005c33b) list_medium_line_t2_g3_t

0x72e4,	// (0x000538b7) list_medium_line_t3_g3_g1_ParamLimits

0x72e4,	// (0x000538b7) list_medium_line_t3_g3_g1

0xa514,	// (0x00056ae7) list_medium_line_t3_g3_g2_ParamLimits

0xa514,	// (0x00056ae7) list_medium_line_t3_g3_g2

0x72f0,	// (0x000538c3) list_medium_line_t3_g3_g3_ParamLimits

0x72f0,	// (0x000538c3) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0005c334) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0005c334) list_medium_line_t3_g3_g

0x0b2b,	// (0x0004d0fe) list_medium_line_t3_g3_t1_ParamLimits

0x0b2b,	// (0x0004d0fe) list_medium_line_t3_g3_t1

0x0b44,	// (0x0004d117) list_medium_line_t3_g3_t2_ParamLimits

0x0b44,	// (0x0004d117) list_medium_line_t3_g3_t2

0x0b5a,	// (0x0004d12d) list_medium_line_t3_g3_t3_ParamLimits

0x0b5a,	// (0x0004d12d) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0005c340) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0005c340) list_medium_line_t3_g3_t

0xa451,	// (0x00056a24) list_medium_line_right_iconx2_g1

0xa3e3,	// (0x000569b6) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0005c347) list_medium_line_right_iconx2_g

0xa535,	// (0x00056b08) list_medium_line_right_iconx2_t1

0xa451,	// (0x00056a24) list_medium_line_t2_right_iconx2_g1

0xa3e3,	// (0x000569b6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0005c347) list_medium_line_t2_right_iconx2_g

0x0b74,	// (0x0004d147) list_medium_line_t2_right_iconx2_t1

0x0b84,	// (0x0004d157) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0005c34c) list_medium_line_t2_right_iconx2_t

0x0b96,	// (0x0004d169) list_medium_line_x4_t4_t1

0x0ba4,	// (0x0004d177) list_medium_line_x4_t4_t2

0x0bb4,	// (0x0004d187) list_medium_line_x4_t4_t3

0x0bc4,	// (0x0004d197) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0005c351) list_medium_line_x4_t4_t

0x8871,	// (0x00054e44) tport_appsw_pane_ParamLimits

0x8871,	// (0x00054e44) tport_appsw_pane

0x8889,	// (0x00054e5c) tport_contact_pane_ParamLimits

0x8889,	// (0x00054e5c) tport_contact_pane

0x88a1,	// (0x00054e74) tport_listscroll_pane_ParamLimits

0x88a1,	// (0x00054e74) tport_listscroll_pane

0x88bb,	// (0x00054e8e) cell_tport_appsw_pane_ParamLimits

0x88bb,	// (0x00054e8e) cell_tport_appsw_pane

0xda0f,	// (0x00059fe2) tport_appsw_pane_g1_ParamLimits

0xda0f,	// (0x00059fe2) tport_appsw_pane_g1

0xeb6a,	// (0x0005b13d) tport_contact_pane_g1

0xe4d9,	// (0x0005aaac) tport_contact_pane_t1

0xeb73,	// (0x0005b146) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0005c35a) tport_contact_pane_t

0xeb81,	// (0x0005b154) list_tport_pane

0xeb8a,	// (0x0005b15d) scroll_pane_cp_030

0x8903,	// (0x00054ed6) cell_tport_appsw_pane_g1

0x8913,	// (0x00054ee6) cell_tport_appsw_pane_t1

0x9a6b,	// (0x0005603e) grid_highlight_pane_cp019

0x8921,	// (0x00054ef4) list_tport_double_graphic_pane_ParamLimits

0x8921,	// (0x00054ef4) list_tport_double_graphic_pane

0xa74e,	// (0x00056d21) list_highlight_pane_cp023_ParamLimits

0xa74e,	// (0x00056d21) list_highlight_pane_cp023

0x892e,	// (0x00054f01) list_tport_double_graphic_pane_g1_ParamLimits

0x892e,	// (0x00054f01) list_tport_double_graphic_pane_g1

0x893b,	// (0x00054f0e) list_tport_double_graphic_pane_t1_ParamLimits

0x893b,	// (0x00054f0e) list_tport_double_graphic_pane_t1

0x8950,	// (0x00054f23) list_tport_double_graphic_pane_t2_ParamLimits

0x8950,	// (0x00054f23) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0005c366) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0005c366) list_tport_double_graphic_pane_t

0x9a6b,	// (0x0005603e) main_cale_note_pane

0x6a7e,	// (0x00053051) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6a7e,	// (0x00053051) cell_vitu2_function_top_wide_pane_cp01

0x8321,	// (0x000548f4) wait_bar_pane_cp05_ParamLimits

0xa74e,	// (0x00056d21) listscroll_cmail_pane

0xeb93,	// (0x0005b166) list_cmail_pane

0x8962,	// (0x00054f35) list_cmail_body_pane

0x8976,	// (0x00054f49) list_single_cmail_header_caption_pane

0x898e,	// (0x00054f61) list_single_cmail_header_detail_pane_ParamLimits

0x898e,	// (0x00054f61) list_single_cmail_header_detail_pane

0xeba3,	// (0x0005b176) list_single_cmail_header_caption_pane_t1

0x0bd4,	// (0x0004d1a7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0bd4,	// (0x0004d1a7) list_single_cmail_header_detail_pane_g1

0xa543,	// (0x00056b16) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa543,	// (0x00056b16) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0005c36b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0005c36b) list_single_cmail_header_detail_pane_g

0x0bec,	// (0x0004d1bf) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0bec,	// (0x0004d1bf) list_single_cmail_header_detail_pane_t1

0x0c2a,	// (0x0004d1fd) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0c2a,	// (0x0004d1fd) list_single_cmail_header_editor_pane_bg

0xebbe,	// (0x0005b191) list_cmail_body_pane_g1

0xebc7,	// (0x0005b19a) list_cmail_body_pane_t1

0xda2f,	// (0x0005a002) list_single_cmail_header_editor_pane_bg_g1

0xb100,	// (0x000576d3) list_single_cmail_header_editor_pane_bg_g1_copy1

0xda3f,	// (0x0005a012) list_single_cmail_header_editor_pane_bg_g1_copy2

0xda37,	// (0x0005a00a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdc6e,	// (0x0005a241) list_single_cmail_header_editor_pane_bg_g1_copy4

0xda5f,	// (0x0005a032) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xda4f,	// (0x0005a022) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xda57,	// (0x0005a02a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb0e0,	// (0x000576b3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89c1,	// (0x00054f94) calenote_gesture_pane_ParamLimits

0x89c1,	// (0x00054f94) calenote_gesture_pane

0x89e1,	// (0x00054fb4) calenote_window_pane_ParamLimits

0x89e1,	// (0x00054fb4) calenote_window_pane

0xebd5,	// (0x0005b1a8) popup_note_window_cp01

0x89fd,	// (0x00054fd0) calenote_swipe_1_pane_ParamLimits

0x89fd,	// (0x00054fd0) calenote_swipe_1_pane

0x8732,	// (0x00054d05) calenote_swipe_2_pane_ParamLimits

0x8732,	// (0x00054d05) calenote_swipe_2_pane

0xe9f0,	// (0x0005afc3) calenote_swipe_1_pane_g1_ParamLimits

0xe9f0,	// (0x0005afc3) calenote_swipe_1_pane_g1

0xe9fd,	// (0x0005afd0) calenote_swipe_1_pane_g2_ParamLimits

0xe9fd,	// (0x0005afd0) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0005c29c) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0005c29c) calenote_swipe_1_pane_g

0xebe7,	// (0x0005b1ba) calenote_swipe_1_pane_t1_ParamLimits

0xebe7,	// (0x0005b1ba) calenote_swipe_1_pane_t1

0xe9f0,	// (0x0005afc3) calenote_swipe_2_pane_g1_ParamLimits

0xe9f0,	// (0x0005afc3) calenote_swipe_2_pane_g1

0xec06,	// (0x0005b1d9) calenote_swipe_2_pane_g2_ParamLimits

0xec06,	// (0x0005b1d9) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0005c377) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0005c377) calenote_swipe_2_pane_g

0xec12,	// (0x0005b1e5) calenote_swipe_2_pane_t1_ParamLimits

0xec12,	// (0x0005b1e5) calenote_swipe_2_pane_t1

0x9a6b,	// (0x0005603e) main_mup_navstr_pane

0x5734,	// (0x00051d07) main_mup3_pane_t7_ParamLimits

0x5734,	// (0x00051d07) main_mup3_pane_t7

0xa00e,	// (0x000565e1) main_mp4_pane_g6_ParamLimits

0xa00e,	// (0x000565e1) main_mp4_pane_g6

0xa1b2,	// (0x00056785) main_image3_pane_t4_ParamLimits

0xa1b2,	// (0x00056785) main_image3_pane_t4

0x8a12,	// (0x00054fe5) popup_navstr_preview_pane_ParamLimits

0x8a12,	// (0x00054fe5) popup_navstr_preview_pane

0x8a26,	// (0x00054ff9) scroll_navstr_pane_ParamLimits

0x8a26,	// (0x00054ff9) scroll_navstr_pane

0x9a6b,	// (0x0005603e) bg_popup_preview_window_pane_cp04

0xec39,	// (0x0005b20c) popup_navstr_preview_pane_t1

0x8a3a,	// (0x0005500d) scroll_navstr_pane_g1_ParamLimits

0x8a3a,	// (0x0005500d) scroll_navstr_pane_g1

0x8a4e,	// (0x00055021) scroll_navstr_pane_t1_ParamLimits

0x8a4e,	// (0x00055021) scroll_navstr_pane_t1

0xebde,	// (0x0005b1b1) bg_button_pane_cp014

0xebde,	// (0x0005b1b1) bg_button_pane_cp030

0x8608,	// (0x00054bdb) list_double_fisheye_pane_g4_ParamLimits

0x8608,	// (0x00054bdb) list_double_fisheye_pane_g4

0x8614,	// (0x00054be7) list_double_fisheye_pane_g5_ParamLimits

0x8614,	// (0x00054be7) list_double_fisheye_pane_g5

0xcd17,	// (0x000592ea) sp_fs_scroll_pane_cp03

0xeae3,	// (0x0005b0b6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xeaef,	// (0x0005b0c2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0005c2b9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xeafb,	// (0x0005b0ce) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xeb9b,	// (0x0005b16e) sp_fs_scroll_pane_cp02

0xadec,	// (0x000573bf) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xadec,	// (0x000573bf) popup_sp_fs_calendar_preview_list_single_pane

0x9a6b,	// (0x0005603e) main_cam6_pano_pane

0xa74e,	// (0x00056d21) main_mup3_pane_ParamLimits

0x9a6b,	// (0x0005603e) main_phacti_pane

0x81f4,	// (0x000547c7) bg_button_pane_cp11

0x820e,	// (0x000547e1) main_mobtv_info_pane_g2_ParamLimits

0x820e,	// (0x000547e1) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0005c219) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0005c219) main_mobtv_info_pane_g

0x83eb,	// (0x000549be) sc_clock_pane_t5_ParamLimits

0x83eb,	// (0x000549be) sc_clock_pane_t5

0x847d,	// (0x00054a50) main_radioblah_pane_g1_ParamLimits

0xe93c,	// (0x0005af0f) main_radioblah_pane_t3_ParamLimits

0xe93c,	// (0x0005af0f) main_radioblah_pane_t3

0xe954,	// (0x0005af27) main_radioblah_pane_t4_ParamLimits

0xe954,	// (0x0005af27) main_radioblah_pane_t4

0x84a5,	// (0x00054a78) main_radioblah_text_pane_ParamLimits

0x84a5,	// (0x00054a78) main_radioblah_text_pane

0x84b7,	// (0x00054a8a) main_radioblah_info_pane_g1_ParamLimits

0x8550,	// (0x00054b23) main_radioblah_info_pane_t4_ParamLimits

0x8550,	// (0x00054b23) main_radioblah_info_pane_t4

0xa74e,	// (0x00056d21) main_sp_fs_calendar_pane

0x8a64,	// (0x00055037) main_phacti_pane_g1

0x8a6c,	// (0x0005503f) phacti_note_pane_ParamLimits

0x8a6c,	// (0x0005503f) phacti_note_pane

0xec50,	// (0x0005b223) phacti_term_pane_ParamLimits

0xec50,	// (0x0005b223) phacti_term_pane

0xec65,	// (0x0005b238) phacti_note_pane_t1_ParamLimits

0xec65,	// (0x0005b238) phacti_note_pane_t1

0xa573,	// (0x00056b46) phacti_term_pane_g1

0xa57b,	// (0x00056b4e) phacti_term_pane_t1_ParamLimits

0xa57b,	// (0x00056b4e) phacti_term_pane_t1

0xec7c,	// (0x0005b24f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xec84,	// (0x0005b257) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x007c,	// (0x0004c64f) popup_sp_fs_calendar_preview_list_single_pane_g

0xec8c,	// (0x0005b25f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xec8c,	// (0x0005b25f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xeca2,	// (0x0005b275) aid_popup_sp_fs_bg_corner_pane

0xcfe6,	// (0x000595b9) popup_sp_fs_calendar_preview_bg_pane_g1

0x9a6b,	// (0x0005603e) popup_sp_fs_calendar_preview_bg_pane

0x1e10,	// (0x0004e3e3) popup_sp_fs_calendar_preview_list_pane

0xcbd0,	// (0x000591a3) bg_main_sp_fs_cale_pane_ParamLimits

0xcbd0,	// (0x000591a3) bg_main_sp_fs_cale_pane

0xa5ae,	// (0x00056b81) listscroll_cale_mrui_pane_ParamLimits

0xa5ae,	// (0x00056b81) listscroll_cale_mrui_pane

0xa5c3,	// (0x00056b96) listscroll_sp_fs_schedule_track_pane

0xa5cc,	// (0x00056b9f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa5cc,	// (0x00056b9f) main_sp_fs_ctrlbar_pane_cp01

0xecaa,	// (0x0005b27d) main_sp_fs_ribbon_pane

0xa5df,	// (0x00056bb2) popup_sp_fs_cale_preview_window

0x8ae1,	// (0x000550b4) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ae1,	// (0x000550b4) list_single_sp_fs_schedule_track_pane

0xa74e,	// (0x00056d21) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa74e,	// (0x00056d21) bg_sp_fs_highlight_list_pane_cp03

0x8af6,	// (0x000550c9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8af6,	// (0x000550c9) list_single_sp_fs_schedule_track_pane_g1

0x8b02,	// (0x000550d5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8b02,	// (0x000550d5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdae,	// (0x0005c381) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdae,	// (0x0005c381) list_single_sp_fs_schedule_track_pane_g

0x8b0e,	// (0x000550e1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8b0e,	// (0x000550e1) list_single_sp_fs_schedule_track_pane_t1

0x8b28,	// (0x000550fb) sp_fs_schedule_track_pane_ParamLimits

0x8b28,	// (0x000550fb) sp_fs_schedule_track_pane

0xecb2,	// (0x0005b285) sp_fs_schedule_track_pane_g1

0xecba,	// (0x0005b28d) sp_fs_schedule_track_pane_g2

0xecc2,	// (0x0005b295) sp_fs_schedule_track_pane_g3

0xecca,	// (0x0005b29d) sp_fs_schedule_track_pane_g4

0xecd2,	// (0x0005b2a5) sp_fs_schedule_track_pane_g5

0x0004,

0x0086,	// (0x0004c659) sp_fs_schedule_track_pane_g

0xda2f,	// (0x0005a002) bg_sp_fs_schedule_viewer_highlight_g1

0xb100,	// (0x000576d3) bg_sp_fs_schedule_viewer_highlight_g2

0xda37,	// (0x0005a00a) bg_sp_fs_schedule_viewer_highlight_g3

0xda3f,	// (0x0005a012) bg_sp_fs_schedule_viewer_highlight_g4

0xdc6e,	// (0x0005a241) bg_sp_fs_schedule_viewer_highlight_g5

0xda4f,	// (0x0005a022) bg_sp_fs_schedule_viewer_highlight_g6

0xda57,	// (0x0005a02a) bg_sp_fs_schedule_viewer_highlight_g7

0xda5f,	// (0x0005a032) bg_sp_fs_schedule_viewer_highlight_g8

0xb0e0,	// (0x000576b3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb3,	// (0x0005c386) bg_sp_fs_schedule_viewer_highlight_g

0x9a6b,	// (0x0005603e) bg_main_sp_fs_ribbon_pane

0x8b39,	// (0x0005510c) main_sp_fs_ribbon_pane_g1

0xecda,	// (0x0005b2ad) main_sp_fs_ribbon_pane_t1

0x8b42,	// (0x00055115) main_sp_fs_ribbon_pane_t2

0xece9,	// (0x0005b2bc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc6,	// (0x0005c399) main_sp_fs_ribbon_pane_t

0xecf8,	// (0x0005b2cb) main_sp_fs_ribbon_scheduler_pane

0xed00,	// (0x0005b2d3) bg_main_sp_fs_ribbon_pane_g1

0xed09,	// (0x0005b2dc) bg_main_sp_fs_ribbon_pane_g2

0xed12,	// (0x0005b2e5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x00ab,	// (0x0004c67e) bg_main_sp_fs_ribbon_pane_g

0xed1a,	// (0x0005b2ed) main_sp_fs_ribbon_scheduler_pane_g1

0xed23,	// (0x0005b2f6) main_sp_fs_ribbon_scheduler_pane_g2

0xed2c,	// (0x0005b2ff) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x00b2,	// (0x0004c685) main_sp_fs_ribbon_scheduler_pane_g

0xed35,	// (0x0005b308) list_cale_mrui_pane

0x8b51,	// (0x00055124) sp_fs_scroll_pane_cp07_ParamLimits

0x8b51,	// (0x00055124) sp_fs_scroll_pane_cp07

0x8b6d,	// (0x00055140) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b6d,	// (0x00055140) bg_sp_fs_schedule_viewer_highlight

0xed42,	// (0x0005b315) list_single_sp_fs_schedule_track_pane_cp01

0xed4a,	// (0x0005b31d) list_sp_fs_schedule_track_pane

0xed52,	// (0x0005b325) sp_fs_scroll_pane_cp06_ParamLimits

0xed52,	// (0x0005b325) sp_fs_scroll_pane_cp06

0xcfe6,	// (0x000595b9) bgmain_sp_fs_calendar_pane_g1

0x0c43,	// (0x0004d216) list_single_cale_mrui_pane_ParamLimits

0x0c43,	// (0x0004d216) list_single_cale_mrui_pane

0xa5f1,	// (0x00056bc4) list_single_cale_mrui_row_pane_ParamLimits

0xa5f1,	// (0x00056bc4) list_single_cale_mrui_row_pane

0xa5fe,	// (0x00056bd1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa5fe,	// (0x00056bd1) list_single_cale_mrui_row_pane_g1

0xa636,	// (0x00056c09) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa636,	// (0x00056c09) list_single_cale_mrui_row_pane_t1

0x0c65,	// (0x0004d238) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0c65,	// (0x0004d238) list_single_cale_mrui_row_pane_t2

0xa648,	// (0x00056c1b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa648,	// (0x00056c1b) list_single_cale_mrui_row_pane_t3

0xa677,	// (0x00056c4a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa677,	// (0x00056c4a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdd4,	// (0x0005c3a7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdd4,	// (0x0005c3a7) list_single_cale_mrui_row_pane_t

0x0ccd,	// (0x0004d2a0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0ccd,	// (0x0004d2a0) list_single_cmail_header_editor_pane_bg_cp01

0x0cf3,	// (0x0004d2c6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0cf3,	// (0x0004d2c6) list_single_cmail_header_editor_pane_bg_cp02

0x8b7d,	// (0x00055150) main_radioblah_text_pane_t1_ParamLimits

0x8b7d,	// (0x00055150) main_radioblah_text_pane_t1

0xed71,	// (0x0005b344) cam6_indi_pane_cp01

0xed79,	// (0x0005b34c) cam6_mode_pane_cp01

0xed81,	// (0x0005b354) cam6_pano_pane

0xed8a,	// (0x0005b35d) cam6_zoom_pane_cp01

0xed92,	// (0x0005b365) cam6_pano_image_pane

0xed9d,	// (0x0005b370) cam6_pano_pane_g1

0xe6a9,	// (0x0005ac7c) cam6_pano_pane_g2

0xeda6,	// (0x0005b379) cam6_pano_pane_g3

0xedaf,	// (0x0005b382) cam6_pano_pane_g4

0xd588,	// (0x00059b5b) cam6_pano_pane_g5

0xedb8,	// (0x0005b38b) cam6_pano_pane_g6

0xedc2,	// (0x0005b395) cam6_pano_pane_g7

0xedca,	// (0x0005b39d) cam6_pano_pane_g8

0xedd3,	// (0x0005b3a6) cam6_pano_pane_g9

0x0008,

0xfddd,	// (0x0005c3b0) cam6_pano_pane_g

0x9a6b,	// (0x0005603e) main_browser_tag_pane

0xec31,	// (0x0005b204) grid_navstr_albumart_pane

0xedde,	// (0x0005b3b1) cell_navstr_albumart_pane_ParamLimits

0xedde,	// (0x0005b3b1) cell_navstr_albumart_pane

0xb92f,	// (0x00057f02) cell_navstr_albumart_pane_g1

0xc9e1,	// (0x00058fb4) cell_navstr_albumart_pane_g2

0xc9f1,	// (0x00058fc4) cell_navstr_albumart_pane_g3

0xc9e9,	// (0x00058fbc) cell_navstr_albumart_pane_g4

0x0003,

0x00dc,	// (0x0004c6af) cell_navstr_albumart_pane_g

0x8b98,	// (0x0005516b) bt_list_pane_ParamLimits

0x8b98,	// (0x0005516b) bt_list_pane

0xee00,	// (0x0005b3d3) bt_list_pane_t1

0xee0f,	// (0x0005b3e2) bt_list_pane_t2

0x0001,

0x00e5,	// (0x0004c6b8) bt_list_pane_t

0x9a6b,	// (0x0005603e) main_cale_prevew_pane

0x8bad,	// (0x00055180) popup_cale_preview_window_ParamLimits

0x8bad,	// (0x00055180) popup_cale_preview_window

0xa74e,	// (0x00056d21) bg_popup_preview_window_pane_cp05_ParamLimits

0xa74e,	// (0x00056d21) bg_popup_preview_window_pane_cp05

0xee1e,	// (0x0005b3f1) list_cale_preview_pane_ParamLimits

0xee1e,	// (0x0005b3f1) list_cale_preview_pane

0xee2a,	// (0x0005b3fd) list_double_cale_preview_pane_ParamLimits

0xee2a,	// (0x0005b3fd) list_double_cale_preview_pane

0xee3c,	// (0x0005b40f) list_single_cale_preview_pane_ParamLimits

0xee3c,	// (0x0005b40f) list_single_cale_preview_pane

0xee50,	// (0x0005b423) list_single_cale_preview_pane_g1

0xee58,	// (0x0005b42b) list_single_cale_preview_pane_t1_ParamLimits

0xee58,	// (0x0005b42b) list_single_cale_preview_pane_t1

0xee6d,	// (0x0005b440) list_double_cale_preview_pane_g1

0xee75,	// (0x0005b448) list_double_cale_preview_pane_t1_ParamLimits

0xee75,	// (0x0005b448) list_double_cale_preview_pane_t1

0xee8a,	// (0x0005b45d) list_double_cale_preview_pane_t2_ParamLimits

0xee8a,	// (0x0005b45d) list_double_cale_preview_pane_t2

0x0001,

0x00ea,	// (0x0004c6bd) list_double_cale_preview_pane_t_ParamLimits

0x00ea,	// (0x0004c6bd) list_double_cale_preview_pane_t

0x9a6b,	// (0x0005603e) main_ezdial_pane

0xa74e,	// (0x00056d21) main_sp_fs_email_pane_ParamLimits

0x878e,	// (0x00054d61) cmail_ddmenu_btn01_pane_ParamLimits

0x878e,	// (0x00054d61) cmail_ddmenu_btn01_pane

0x87a1,	// (0x00054d74) cmail_ddmenu_btn02_pane_ParamLimits

0x87a1,	// (0x00054d74) cmail_ddmenu_btn02_pane

0x87c4,	// (0x00054d97) cmail_ddmenu_btn03_pane_ParamLimits

0x87c4,	// (0x00054d97) cmail_ddmenu_btn03_pane

0x87ea,	// (0x00054dbd) main_sp_fs_ctrlbar_pane_ParamLimits

0x880e,	// (0x00054de1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8962,	// (0x00054f35) list_cmail_body_pane_ParamLimits

0x89b6,	// (0x00054f89) bg_button_pane_cp12

0xebb1,	// (0x0005b184) list_single_cmail_header_detail_pane_g3_ParamLimits

0xebb1,	// (0x0005b184) list_single_cmail_header_detail_pane_g3

0xa54f,	// (0x00056b22) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa54f,	// (0x00056b22) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0005c372) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0005c372) list_single_cmail_header_detail_pane_t

0xa590,	// (0x00056b63) phacti_term_pane_t2_ParamLimits

0xa590,	// (0x00056b63) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0005c37c) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0005c37c) phacti_term_pane_t

0xeea2,	// (0x0005b475) aid_size_list_single_double

0x8bc6,	// (0x00055199) popup_ezdial_listscroll_window

0x8be1,	// (0x000551b4) popup_number_entry_window_cp01

0xb7c0,	// (0x00057d93) bg_popup_call_pane_cp09

0xeeae,	// (0x0005b481) ezdial_list_pane

0xeeb6,	// (0x0005b489) scroll_pane_cp23

0xcbd0,	// (0x000591a3) bg_button_pane_cp028_ParamLimits

0xcbd0,	// (0x000591a3) bg_button_pane_cp028

0x8bef,	// (0x000551c2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8bef,	// (0x000551c2) cmail_ddmenu_btn01_pane_g1

0x8bfb,	// (0x000551ce) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8bfb,	// (0x000551ce) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdf0,	// (0x0005c3c3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdf0,	// (0x0005c3c3) cmail_ddmenu_btn01_pane_g

0xeebe,	// (0x0005b491) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeebe,	// (0x0005b491) cmail_ddmenu_btn01_pane_t1

0xcbd0,	// (0x000591a3) bg_button_pane_cp029_ParamLimits

0xcbd0,	// (0x000591a3) bg_button_pane_cp029

0x8c11,	// (0x000551e4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c11,	// (0x000551e4) cmail_ddmenu_btn02_pane_g1

0x8c29,	// (0x000551fc) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c29,	// (0x000551fc) cmail_ddmenu_btn02_pane_t1

0xa74e,	// (0x00056d21) bg_button_pane_cp031_ParamLimits

0xa74e,	// (0x00056d21) bg_button_pane_cp031

0x8c11,	// (0x000551e4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c11,	// (0x000551e4) cmail_ddmenu_btn03_pane_g1

0x8c29,	// (0x000551fc) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c29,	// (0x000551fc) cmail_ddmenu_btn03_pane_t1

0x6304,	// (0x000528d7) cell_dialer2_keypad_pane_t1_ParamLimits

0x631e,	// (0x000528f1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x631e,	// (0x000528f1) cell_dialer2_keypad_pane_t1_copy1

0x805b,	// (0x0005462e) ncimui_group_button_pane

0xa74e,	// (0x00056d21) main_sp_fs_calendar_pane_ParamLimits

0x8976,	// (0x00054f49) list_single_cmail_header_caption_pane_ParamLimits

0xa5a5,	// (0x00056b78) aid_recal_txt_sm_pane

0x9a6b,	// (0x0005603e) mian_recal_day_pane

0xa5df,	// (0x00056bb2) popup_sp_fs_cale_preview_window_ParamLimits

0xeed4,	// (0x0005b4a7) list_recal_day_pane

0xa6c1,	// (0x00056c94) list_single_recal_day_pane_ParamLimits

0xa6c1,	// (0x00056c94) list_single_recal_day_pane

0xeefb,	// (0x0005b4ce) list_single_recal_day_pane_g1_ParamLimits

0xeefb,	// (0x0005b4ce) list_single_recal_day_pane_g1

0xa6d3,	// (0x00056ca6) list_single_recal_day_pane_g2_ParamLimits

0xa6d3,	// (0x00056ca6) list_single_recal_day_pane_g2

0xa6e3,	// (0x00056cb6) list_single_recal_day_pane_g3_ParamLimits

0xa6e3,	// (0x00056cb6) list_single_recal_day_pane_g3

0x0d13,	// (0x0004d2e6) list_single_recal_day_pane_g4_ParamLimits

0x0d13,	// (0x0004d2e6) list_single_recal_day_pane_g4

0xa6ef,	// (0x00056cc2) list_single_recal_day_pane_g5_ParamLimits

0xa6ef,	// (0x00056cc2) list_single_recal_day_pane_g5

0xa6ff,	// (0x00056cd2) list_single_recal_day_pane_g6_ParamLimits

0xa6ff,	// (0x00056cd2) list_single_recal_day_pane_g6

0x0004,

0xfdff,	// (0x0005c3d2) list_single_recal_day_pane_g_ParamLimits

0xfdff,	// (0x0005c3d2) list_single_recal_day_pane_g

0xa713,	// (0x00056ce6) list_single_recal_day_pane_t1

0xa725,	// (0x00056cf8) list_single_recal_day_pane_t2

0x0001,

0xfe0a,	// (0x0005c3dd) list_single_recal_day_pane_t

0x8c4d,	// (0x00055220) ncimui_query_button_pane_ParamLimits

0x8c4d,	// (0x00055220) ncimui_query_button_pane

0x8c5d,	// (0x00055230) ncimui_query_button_pane_t1_ParamLimits

0x8c5d,	// (0x00055230) ncimui_query_button_pane_t1

0xef07,	// (0x0005b4da) ncimui_query_button_pane_t2_ParamLimits

0xef07,	// (0x0005b4da) ncimui_query_button_pane_t2

0x0001,

0xfe0f,	// (0x0005c3e2) ncimui_query_button_pane_t_ParamLimits

0xfe0f,	// (0x0005c3e2) ncimui_query_button_pane_t

0x8c70,	// (0x00055243) query_button_pane_ParamLimits

0x8c70,	// (0x00055243) query_button_pane

0x9a6b,	// (0x0005603e) bg_button_pane_cp0028

0xef1a,	// (0x0005b4ed) query_button_pane_t1

0x4333,	// (0x00050906) main_tport_pane_ParamLimits

0x882e,	// (0x00054e01) bg_popup_window_pane_cp01_ParamLimits

0x882e,	// (0x00054e01) bg_popup_window_pane_cp01

0x8849,	// (0x00054e1c) heading_pane_cp08_ParamLimits

0x8849,	// (0x00054e1c) heading_pane_cp08

0x885c,	// (0x00054e2f) heading_pane_cp07_ParamLimits

0x885c,	// (0x00054e2f) heading_pane_cp07

0x8903,	// (0x00054ed6) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0005c35f) cell_tport_appsw_pane_g

0x3900,	// (0x0004fed3) input_candi_list_open_g1

0xb2b7,	// (0x0005788a) list_cale_time_pane_g6_ParamLimits

0xb2b7,	// (0x0005788a) list_cale_time_pane_g6

0x50ec,	// (0x000516bf) aid_size_touch_calib_1_ParamLimits

0x50ec,	// (0x000516bf) aid_size_touch_calib_1

0x50fe,	// (0x000516d1) aid_size_touch_calib_2_ParamLimits

0x50fe,	// (0x000516d1) aid_size_touch_calib_2

0x5116,	// (0x000516e9) aid_size_touch_calib_3_ParamLimits

0x5116,	// (0x000516e9) aid_size_touch_calib_3

0x5134,	// (0x00051707) aid_size_touch_calib_4_ParamLimits

0x5134,	// (0x00051707) aid_size_touch_calib_4

0x514c,	// (0x0005171f) main_touch_calib_button_group_pane_ParamLimits

0x514c,	// (0x0005171f) main_touch_calib_button_group_pane

0x5164,	// (0x00051737) main_touch_calib_pane_g1_ParamLimits

0x5176,	// (0x00051749) main_touch_calib_pane_g2_ParamLimits

0x5188,	// (0x0005175b) main_touch_calib_pane_g3_ParamLimits

0x519a,	// (0x0005176d) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0005bd2f) main_touch_calib_pane_g_ParamLimits

0x51ac,	// (0x0005177f) main_touch_calib_pane_t1_ParamLimits

0x51c6,	// (0x00051799) main_touch_calib_pane_t2_ParamLimits

0x51e0,	// (0x000517b3) main_touch_calib_pane_t3_ParamLimits

0x51f4,	// (0x000517c7) main_touch_calib_pane_t4_ParamLimits

0x5208,	// (0x000517db) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0005bd38) main_touch_calib_pane_t_ParamLimits

0xd346,	// (0x00059919) list_single_fp_cale_pane_g3_ParamLimits

0xd346,	// (0x00059919) list_single_fp_cale_pane_g3

0xa74e,	// (0x00056d21) bg_button_pane_cp012_ParamLimits

0xa74e,	// (0x00056d21) bg_vkb2_func_pane_cp03_ParamLimits

0x729a,	// (0x0005386d) cell_vitu2_function_top_pane_g1_ParamLimits

0xa74e,	// (0x00056d21) bg_vkb2_func_pane_cp04_ParamLimits

0x7fe9,	// (0x000545bc) main_ncimui_button_group_pane_ParamLimits

0x7fe9,	// (0x000545bc) main_ncimui_button_group_pane

0x8049,	// (0x0005461c) main_ncimui_pane_t3_ParamLimits

0x8049,	// (0x0005461c) main_ncimui_pane_t3

0xec47,	// (0x0005b21a) phacti_button_group_pane

0xeea2,	// (0x0005b475) aid_size_list_single_double_ParamLimits

0x8bc6,	// (0x00055199) popup_ezdial_listscroll_window_ParamLimits

0x8be1,	// (0x000551b4) popup_number_entry_window_cp01_ParamLimits

0x8c83,	// (0x00055256) phacti_button_pane_ParamLimits

0x8c83,	// (0x00055256) phacti_button_pane

0x9a6b,	// (0x0005603e) bg_button_pane_cp14

0xef28,	// (0x0005b4fb) phacti_button_pane_t1

0x8c94,	// (0x00055267) main_touch_calib_button_pane_ParamLimits

0x8c94,	// (0x00055267) main_touch_calib_button_pane

0xacd6,	// (0x000572a9) bg_button_pane_cp18_ParamLimits

0xacd6,	// (0x000572a9) bg_button_pane_cp18

0xef36,	// (0x0005b509) main_touch_calib_button_pane_t1_ParamLimits

0xef36,	// (0x0005b509) main_touch_calib_button_pane_t1

0xef4c,	// (0x0005b51f) main_touch_calib_button_pane_t2_ParamLimits

0xef4c,	// (0x0005b51f) main_touch_calib_button_pane_t2

0x0001,

0x0113,	// (0x0004c6e6) main_touch_calib_button_pane_t_ParamLimits

0x0113,	// (0x0004c6e6) main_touch_calib_button_pane_t

0x9a6b,	// (0x0005603e) cell_ncimui_button_pane

0x9a6b,	// (0x0005603e) bg_button_pane_cp032

0xef6a,	// (0x0005b53d) cell_ncimui_button_pane_t1

0xa192,	// (0x00056765) image3_infobar_pane_ParamLimits

0xa192,	// (0x00056765) image3_infobar_pane

0x8417,	// (0x000549ea) fs_bigclock_status_pane_ParamLimits

0x8417,	// (0x000549ea) fs_bigclock_status_pane

0x8424,	// (0x000549f7) main_fs_bigclock_clock_pane_ParamLimits

0x8424,	// (0x000549f7) main_fs_bigclock_clock_pane

0x8440,	// (0x00054a13) main_fs_bigclock_indi_pane_ParamLimits

0x8440,	// (0x00054a13) main_fs_bigclock_indi_pane

0x8459,	// (0x00054a2c) main_fs_bigclock_swipe_pane_ParamLimits

0x8459,	// (0x00054a2c) main_fs_bigclock_swipe_pane

0x9a6b,	// (0x0005603e) main_fs_clock_dumped_data

0xe7b6,	// (0x0005ad89) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe7b6,	// (0x0005ad89) list_single_fs_bigclock_indicator_pane_g1

0xe7d1,	// (0x0005ada4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe7d1,	// (0x0005ada4) list_single_fs_bigclock_indicator_pane_g2

0xe7eb,	// (0x0005adbe) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe7eb,	// (0x0005adbe) list_single_fs_bigclock_indicator_pane_g3

0xe805,	// (0x0005add8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe805,	// (0x0005add8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0005c24d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0005c24d) list_single_fs_bigclock_indicator_pane_g

0xe82e,	// (0x0005ae01) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe82e,	// (0x0005ae01) list_single_fs_bigclock_indicator_pane_t1

0xe856,	// (0x0005ae29) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe856,	// (0x0005ae29) list_single_fs_bigclock_indicator_pane_t2

0xe87e,	// (0x0005ae51) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe87e,	// (0x0005ae51) list_single_fs_bigclock_indicator_pane_t3

0xe8a6,	// (0x0005ae79) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe8a6,	// (0x0005ae79) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0005c258) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0005c258) list_single_fs_bigclock_indicator_pane_t

0xef78,	// (0x0005b54b) image3_infobar_fav_pane_ParamLimits

0xef78,	// (0x0005b54b) image3_infobar_fav_pane

0xef88,	// (0x0005b55b) image3_infobar_loc_pane_ParamLimits

0xef88,	// (0x0005b55b) image3_infobar_loc_pane

0xef9c,	// (0x0005b56f) image3_infobar_time_pane_ParamLimits

0xef9c,	// (0x0005b56f) image3_infobar_time_pane

0xcfe6,	// (0x000595b9) image3_infobar_time_pane_g1

0xefac,	// (0x0005b57f) image3_infobar_time_pane_t1

0xcfe6,	// (0x000595b9) image3_infobar_loc_pane_g1

0xefba,	// (0x0005b58d) image3_infobar_loc_pane_g2

0x0001,

0xfe14,	// (0x0005c3e7) image3_infobar_loc_pane_g

0xefc2,	// (0x0005b595) image3_infobar_loc_pane_t1

0xcfe6,	// (0x000595b9) image3_infobar_fav_pane_g1

0xefd0,	// (0x0005b5a3) image3_infobar_fav_pane_g2

0x0001,

0xfe19,	// (0x0005c3ec) image3_infobar_fav_pane_g

0xefd8,	// (0x0005b5ab) fs_bigclock_status_battery_pane

0xefe1,	// (0x0005b5b4) fs_bigclock_status_signal_pane

0xefea,	// (0x0005b5bd) fs_bigclock_status_title_pane

0xeff3,	// (0x0005b5c6) fs_bigclock_status_signal_pane_g1

0xeffc,	// (0x0005b5cf) fs_bigclock_status_signal_pane_g2

0x0001,

0x0122,	// (0x0004c6f5) fs_bigclock_status_signal_pane_g

0xf004,	// (0x0005b5d7) fs_bigclock_status_battery_pane_g1

0xf00d,	// (0x0005b5e0) fs_bigclock_status_battery_pane_g2

0x0001,

0x0127,	// (0x0004c6fa) fs_bigclock_status_battery_pane_g

0xf015,	// (0x0005b5e8) fs_bigclock_status_title_pane_t1

0xcfe6,	// (0x000595b9) main_fs_bigclock_clock_pane_g1

0x8ca9,	// (0x0005527c) main_fs_bigclock_clock_pane_g2

0x8ca9,	// (0x0005527c) main_fs_bigclock_clock_pane_g3

0x8ca9,	// (0x0005527c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe1e,	// (0x0005c3f1) main_fs_bigclock_clock_pane_g

0x8cb1,	// (0x00055284) main_fs_bigclock_clock_pane_t1

0x8cbf,	// (0x00055292) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe27,	// (0x0005c3fa) main_fs_bigclock_clock_pane_t

0xf023,	// (0x0005b5f6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xf023,	// (0x0005b5f6) list_single_fs_bigclock_indicator_pane

0x8cce,	// (0x000552a1) list_single_fs_bigclock_pane_ParamLimits

0x8cce,	// (0x000552a1) list_single_fs_bigclock_pane

0xf03d,	// (0x0005b610) main_fs_bigclock_indicator_pane_t1

0xf04c,	// (0x0005b61f) list_single_fs_bigclock_pane_g1

0xf054,	// (0x0005b627) list_single_fs_bigclock_pane_t1

0xcfe6,	// (0x000595b9) main_fs_bigclock_swipe_pane_g1

0xf097,	// (0x0005b66a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe33,	// (0x0005c406) main_fs_bigclock_swipe_pane_g

0xf09f,	// (0x0005b672) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xf09f,	// (0x0005b672) main_fs_bigclock_swipe_pane_t1

0x3129,	// (0x0004f6fc) call_type_pane_ParamLimits

0x9a6b,	// (0x0005603e) main_btmg_pane

0xa62a,	// (0x00056bfd) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa62a,	// (0x00056bfd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdcd,	// (0x0005c3a0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdcd,	// (0x0005c3a0) list_single_cale_mrui_row_pane_g

0xa6b0,	// (0x00056c83) list_recal_vselct_arw_lo_pane

0xeef3,	// (0x0005b4c6) list_recal_vselct_arw_up_pane

0xa6b8,	// (0x00056c8b) list_recal_vselct_pane

0x8d31,	// (0x00055304) btmg_button_pane

0x8d3b,	// (0x0005530e) main_btmg_pane_g1

0x9a6b,	// (0x0005603e) bg_button_pane_cp044

0xf0bc,	// (0x0005b68f) btmg_button_pane_t1

0xcbbc,	// (0x0005918f) aid_listscroll_gen

0xa74e,	// (0x00056d21) main_cntbar_detail_pane

0xeb93,	// (0x0005b166) list_cmail_folder_pane

0xcd17,	// (0x000592ea) sp_fs_scroll_pane_cp03_ParamLimits

0x0d33,	// (0x0004d306) list_single_fs_dyc_pane_cp01_ParamLimits

0x0d33,	// (0x0004d306) list_single_fs_dyc_pane_cp01

0xf0ca,	// (0x0005b69d) aid_size_cmail_indent

0xa737,	// (0x00056d0a) list_single_dyc_row_pane_cp01

0x8d71,	// (0x00055344) cntbar_detail_list_pane_ParamLimits

0x8d71,	// (0x00055344) cntbar_detail_list_pane

0x8dbd,	// (0x00055390) main_cntbar_detail_cont_pane_ParamLimits

0x8dbd,	// (0x00055390) main_cntbar_detail_cont_pane

0xcd17,	// (0x000592ea) scroll_pane_cp032_ParamLimits

0xcd17,	// (0x000592ea) scroll_pane_cp032

0x8dd1,	// (0x000553a4) cntbar_detail_list_event_pane_ParamLimits

0x8dd1,	// (0x000553a4) cntbar_detail_list_event_pane

0x8d81,	// (0x00055354) cntbar_detail_list_shct_pane

0xb14e,	// (0x00057721) aid_list_gen

0x8de1,	// (0x000553b4) aid_scroll

0x8dea,	// (0x000553bd) aid_size_touch_scroll_bar

0x7866,	// (0x00053e39) aid_list_double

0x7854,	// (0x00053e27) aid_list_single

0x7854,	// (0x00053e27) aid_list_single_lg

0x0d4b,	// (0x0004d31e) aid_list_z_g_a_sm

0x0d53,	// (0x0004d326) aid_list_z_g_d

0x0d5b,	// (0x0004d32e) aid_txt_z_prm

0x0d69,	// (0x0004d33c) aid_txt_z_prm_cp01

0x0d77,	// (0x0004d34a) aid_txt_z_sec

0x8df3,	// (0x000553c6) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8df3,	// (0x000553c6) main_cntbar_detail_cont_pane_g1

0x8e07,	// (0x000553da) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e07,	// (0x000553da) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe38,	// (0x0005c40b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe38,	// (0x0005c40b) main_cntbar_detail_cont_pane_g

0x8e17,	// (0x000553ea) main_cntbar_detail_cont_pane_t1

0x8e25,	// (0x000553f8) main_cntbar_detail_cont_pane_t2

0x8e33,	// (0x00055406) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe3d,	// (0x0005c410) main_cntbar_detail_cont_pane_t

0x8e41,	// (0x00055414) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8e41,	// (0x00055414) cell_cntbar_detail_list_shct_pane

0x8e55,	// (0x00055428) cntbar_detail_list_shct_pane_g1

0x8e5e,	// (0x00055431) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe44,	// (0x0005c417) cntbar_detail_list_shct_pane_g

0x8e67,	// (0x0005543a) cntbar_detail_list_event_pane_g1_ParamLimits

0x8e67,	// (0x0005543a) cntbar_detail_list_event_pane_g1

0x8e73,	// (0x00055446) cntbar_detail_list_event_pane_g2_ParamLimits

0x8e73,	// (0x00055446) cntbar_detail_list_event_pane_g2

0x0005,

0xfe49,	// (0x0005c41c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe49,	// (0x0005c41c) cntbar_detail_list_event_pane_g

0x8edf,	// (0x000554b2) cntbar_detail_list_event_pane_t1_ParamLimits

0x8edf,	// (0x000554b2) cntbar_detail_list_event_pane_t1

0x8ef4,	// (0x000554c7) cntbar_detail_list_event_pane_t2_ParamLimits

0x8ef4,	// (0x000554c7) cntbar_detail_list_event_pane_t2

0x0002,

0xfe56,	// (0x0005c429) cntbar_detail_list_event_pane_t_ParamLimits

0xfe56,	// (0x0005c429) cntbar_detail_list_event_pane_t

0xcfe6,	// (0x000595b9) cell_cntbar_detail_list_shct_pane_g1

0x347e,	// (0x0004fa51) navi_pane_mv_g3

0xa74e,	// (0x00056d21) main_cntbar_detail_pane_ParamLimits

0x9a6b,	// (0x0005603e) main_notif_wgt_pane

0x9fa8,	// (0x0005657b) aid_tch_main_mp4_pane_g4

0xa18a,	// (0x0005675d) popup_slider_window_cp02

0xa6a6,	// (0x00056c79) list_recal_day_event_pane

0x8d45,	// (0x00055318) cntbar_detail_btn_pane_ParamLimits

0x8d45,	// (0x00055318) cntbar_detail_btn_pane

0x8d5b,	// (0x0005532e) cntbar_detail_btn_pane_cp01_ParamLimits

0x8d5b,	// (0x0005532e) cntbar_detail_btn_pane_cp01

0x8d81,	// (0x00055354) cntbar_detail_list_shct_pane_ParamLimits

0x8d91,	// (0x00055364) cntbar_detail_pane_g1_ParamLimits

0x8d91,	// (0x00055364) cntbar_detail_pane_g1

0x8da1,	// (0x00055374) cntbar_detail_pane_t1_ParamLimits

0x8da1,	// (0x00055374) cntbar_detail_pane_t1

0x8e7f,	// (0x00055452) cntbar_detail_list_event_pane_g3_ParamLimits

0x8e7f,	// (0x00055452) cntbar_detail_list_event_pane_g3

0x8e97,	// (0x0005546a) cntbar_detail_list_event_pane_g4_ParamLimits

0x8e97,	// (0x0005546a) cntbar_detail_list_event_pane_g4

0x8eaf,	// (0x00055482) cntbar_detail_list_event_pane_g5_ParamLimits

0x8eaf,	// (0x00055482) cntbar_detail_list_event_pane_g5

0x8ec7,	// (0x0005549a) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ec7,	// (0x0005549a) cntbar_detail_list_event_pane_g6

0x8f09,	// (0x000554dc) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f09,	// (0x000554dc) cntbar_detail_list_event_pane_t3

0x8f1b,	// (0x000554ee) popup_notif_wgt_window_ParamLimits

0x8f1b,	// (0x000554ee) popup_notif_wgt_window

0x8f34,	// (0x00055507) popup_submenu_window_cp01_ParamLimits

0x8f34,	// (0x00055507) popup_submenu_window_cp01

0xb7c0,	// (0x00057d93) bg_popup_window_pane_cp10

0x8f46,	// (0x00055519) listscroll_notif_wgt_pane

0x8f57,	// (0x0005552a) list_notif_wgt_window

0x8f60,	// (0x00055533) scroll_pane_cp033

0x8f69,	// (0x0005553c) list_notif_wgt_row_pane_ParamLimits

0x8f69,	// (0x0005553c) list_notif_wgt_row_pane

0x8f79,	// (0x0005554c) aid_size_list_notif_wgt_del

0x8f86,	// (0x00055559) list_notif_wgt_row_pane_g1

0x8f92,	// (0x00055565) list_notif_wgt_row_pane_g2

0x8f9e,	// (0x00055571) list_notif_wgt_row_pane_g3

0x0002,

0xfe5d,	// (0x0005c430) list_notif_wgt_row_pane_g

0x8fab,	// (0x0005557e) list_notif_wgt_row_pane_t1

0x8fc0,	// (0x00055593) list_notif_wgt_row_pane_t2

0x8fd2,	// (0x000555a5) list_notif_wgt_row_pane_t3

0x0002,

0xfe64,	// (0x0005c437) list_notif_wgt_row_pane_t

0xdc76,	// (0x0005a249) list_recal_day_event_pane_g1

0x8fe4,	// (0x000555b7) list_recal_day_event_pane_t1

0x9a6b,	// (0x0005603e) bg_button_pane_cp045

0x8ff3,	// (0x000555c6) cntbar_detail_btn_pane_t1

0xcbd0,	// (0x000591a3) main_callh_pane_ParamLimits

0xcbd0,	// (0x000591a3) main_callh_pane

0x9a6b,	// (0x0005603e) main_coverflow0_pane

0x9a6b,	// (0x0005603e) main_wgtman_pane

0x8467,	// (0x00054a3a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8467,	// (0x00054a3a) main_fs_bigclock_unlock_btn_pane

0x88fb,	// (0x00054ece) bg_button_pane_cp16

0x890b,	// (0x00054ede) cell_tport_appsw_pane_g3

0x9001,	// (0x000555d4) cf0_flow_pane_ParamLimits

0x9001,	// (0x000555d4) cf0_flow_pane

0x9016,	// (0x000555e9) listscroll_cf0_pane

0x9021,	// (0x000555f4) main_cf0_pane_g1

0x9033,	// (0x00055606) main_cf0_pane_t1_ParamLimits

0x9033,	// (0x00055606) main_cf0_pane_t1

0x904a,	// (0x0005561d) main_cf0_pane_t2_ParamLimits

0x904a,	// (0x0005561d) main_cf0_pane_t2

0x0001,

0xfe70,	// (0x0005c443) main_cf0_pane_t_ParamLimits

0xfe70,	// (0x0005c443) main_cf0_pane_t

0x9061,	// (0x00055634) scroll_pane_cp11

0x906c,	// (0x0005563f) cf0_flow_pane_g1

0x9074,	// (0x00055647) cf0_flow_pane_g2

0x0001,

0xfe75,	// (0x0005c448) cf0_flow_pane_g

0x907c,	// (0x0005564f) cf0_flow_pane_t1

0x9a6b,	// (0x0005603e) main_call6_pane

0x9a6b,	// (0x0005603e) main_calllock_pane

0x908a,	// (0x0005565d) call6_btn_grp_pane_ParamLimits

0x908a,	// (0x0005565d) call6_btn_grp_pane

0x90a4,	// (0x00055677) call6_pane_g1_ParamLimits

0x90a4,	// (0x00055677) call6_pane_g1

0x90b9,	// (0x0005568c) popup_call6_1st_window_ParamLimits

0x90b9,	// (0x0005568c) popup_call6_1st_window

0x90ca,	// (0x0005569d) popup_call6_2nd_window_ParamLimits

0x90ca,	// (0x0005569d) popup_call6_2nd_window

0x90db,	// (0x000556ae) cell_call6_btn_pane_ParamLimits

0x90db,	// (0x000556ae) cell_call6_btn_pane

0xb7c0,	// (0x00057d93) bg_popup_call2_in_pane_cp03

0x90ef,	// (0x000556c2) popup_call6_1st_window_g1

0x90f7,	// (0x000556ca) popup_call6_1st_window_g2

0x90ff,	// (0x000556d2) popup_call6_1st_window_g3

0x0002,

0xfe7a,	// (0x0005c44d) popup_call6_1st_window_g

0x9107,	// (0x000556da) popup_call6_1st_window_t1

0x9116,	// (0x000556e9) popup_call6_1st_window_t2

0x9126,	// (0x000556f9) popup_call6_1st_window_t3

0x0002,

0xfe81,	// (0x0005c454) popup_call6_1st_window_t

0xb7c0,	// (0x00057d93) bg_popup_call2_in_pane_cp04

0x90ef,	// (0x000556c2) popup_call6_2nd_window_g1

0x90f7,	// (0x000556ca) popup_call6_2nd_window_g2

0x90ff,	// (0x000556d2) popup_call6_2nd_window_g3

0x0002,

0xfe7a,	// (0x0005c44d) popup_call6_2nd_window_g

0x9107,	// (0x000556da) popup_call6_2nd_window_t1

0x9a6b,	// (0x0005603e) bg_button_pane_cp15

0x9136,	// (0x00055709) cell_call6_btn_pane_g1

0x913f,	// (0x00055712) cell_call6_btn_pane_t1

0x914e,	// (0x00055721) listscroll_wgtman_pane_ParamLimits

0x914e,	// (0x00055721) listscroll_wgtman_pane

0x9171,	// (0x00055744) wgtman_btn_pane_ParamLimits

0x9171,	// (0x00055744) wgtman_btn_pane

0xb677,	// (0x00057c4a) aid_scroll_copy1

0x91b4,	// (0x00055787) list_wgtman_pane

0x91be,	// (0x00055791) wgtman_btn_pane_g1_ParamLimits

0x91be,	// (0x00055791) wgtman_btn_pane_g1

0x91ea,	// (0x000557bd) wgtman_btn_pane_t1_ParamLimits

0x91ea,	// (0x000557bd) wgtman_btn_pane_t1

0x9227,	// (0x000557fa) wgtman_btn_pane_t2_ParamLimits

0x9227,	// (0x000557fa) wgtman_btn_pane_t2

0x0001,

0xfe88,	// (0x0005c45b) wgtman_btn_pane_t_ParamLimits

0xfe88,	// (0x0005c45b) wgtman_btn_pane_t

0x923e,	// (0x00055811) listrow_wgtman_pane_ParamLimits

0x923e,	// (0x00055811) listrow_wgtman_pane

0x9251,	// (0x00055824) listrow_wgtman_pane_g1

0x925e,	// (0x00055831) listrow_wgtman_pane_g2

0x0001,

0xfe8d,	// (0x0005c460) listrow_wgtman_pane_g

0x0d85,	// (0x0004d358) listrow_wgtman_pane_t1

0x0d9d,	// (0x0004d370) listrow_wgtman_pane_t2

0x0001,

0xfe92,	// (0x0005c465) listrow_wgtman_pane_t

0x0dc3,	// (0x0004d396) wait_bar_pane_cp09

0x927c,	// (0x0005584f) main_calllock_btn_pane

0x9286,	// (0x00055859) main_calllock_pane_g1

0x9a6b,	// (0x0005603e) bg_button_pane_cp17

0x9291,	// (0x00055864) main_calllock_btn_pane_g1

0x929a,	// (0x0005586d) main_calllock_btn_pane_t1

0x9a6b,	// (0x0005603e) main_dialer3_pane

0x9a6b,	// (0x0005603e) main_fmrd2_pane

0xcfe6,	// (0x000595b9) main_fs_bigclock_unlock_btn_pane_g1

0x92b1,	// (0x00055884) main_fs_bigclock_unlock_btn_pane_t1

0x92bf,	// (0x00055892) area_fmrd2_info_pane_ParamLimits

0x92bf,	// (0x00055892) area_fmrd2_info_pane

0x92d0,	// (0x000558a3) area_fmrd2_visual_pane_ParamLimits

0x92d0,	// (0x000558a3) area_fmrd2_visual_pane

0x92de,	// (0x000558b1) fmrd2_indi_pane_ParamLimits

0x92de,	// (0x000558b1) fmrd2_indi_pane

0x92eb,	// (0x000558be) area_fmrd2_visual_pane_g1

0x92f3,	// (0x000558c6) area_fmrd2_visual_pane_t1

0x9303,	// (0x000558d6) area_fmrd2_visual_pane_t2

0x9313,	// (0x000558e6) area_fmrd2_visual_pane_t3

0x0002,

0xfe9c,	// (0x0005c46f) area_fmrd2_visual_pane_t

0x9323,	// (0x000558f6) area_fmrd2_info_pane_g1

0x932b,	// (0x000558fe) area_fmrd2_info_pane_t1

0x933b,	// (0x0005590e) area_fmrd2_info_pane_t2

0x934b,	// (0x0005591e) area_fmrd2_info_pane_t3

0x935b,	// (0x0005592e) area_fmrd2_info_pane_t4

0x0003,

0xfea3,	// (0x0005c476) area_fmrd2_info_pane_t

0x9369,	// (0x0005593c) fmrd2_indi_pane_t1

0x9379,	// (0x0005594c) fmrd2_indi_pane_t2

0x9389,	// (0x0005595c) fmrd2_indi_pane_t3

0x0002,

0xfeac,	// (0x0005c47f) fmrd2_indi_pane_t

0xe814,	// (0x0005ade7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe814,	// (0x0005ade7) list_single_fs_bigclock_indicator_pane_g5

0xe8bb,	// (0x0005ae8e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe8bb,	// (0x0005ae8e) list_single_fs_bigclock_indicator_pane_t5

0x8a80,	// (0x00055053) aid_cell_bcale_month_pane_ParamLimits

0x8a80,	// (0x00055053) aid_cell_bcale_month_pane

0x8a9e,	// (0x00055071) bcale_month_pane_ParamLimits

0x8a9e,	// (0x00055071) bcale_month_pane

0x8ac2,	// (0x00055095) bcale_preview_pane_ParamLimits

0x8ac2,	// (0x00055095) bcale_preview_pane

0xf054,	// (0x0005b627) list_single_fs_bigclock_pane_t1_ParamLimits

0xf073,	// (0x0005b646) list_single_fs_bigclock_pane_t2_ParamLimits

0xf073,	// (0x0005b646) list_single_fs_bigclock_pane_t2

0x0001,

0x0141,	// (0x0004c714) list_single_fs_bigclock_pane_t_ParamLimits

0x0141,	// (0x0004c714) list_single_fs_bigclock_pane_t

0x92a9,	// (0x0005587c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe97,	// (0x0005c46a) main_fs_bigclock_unlock_btn_pane_g

0x9399,	// (0x0005596c) aid_dia3_key_size_ParamLimits

0x9399,	// (0x0005596c) aid_dia3_key_size

0x93a8,	// (0x0005597b) aid_dia3_listrow_size_ParamLimits

0x93a8,	// (0x0005597b) aid_dia3_listrow_size

0x93bd,	// (0x00055990) dia3_keypad_fun_pane_ParamLimits

0x93bd,	// (0x00055990) dia3_keypad_fun_pane

0x93d9,	// (0x000559ac) dia3_keypad_num_pane_ParamLimits

0x93d9,	// (0x000559ac) dia3_keypad_num_pane

0x93f4,	// (0x000559c7) dia3_listscroll_pane_ParamLimits

0x93f4,	// (0x000559c7) dia3_listscroll_pane

0x9407,	// (0x000559da) dia3_numentry_pane_ParamLimits

0x9407,	// (0x000559da) dia3_numentry_pane

0x941b,	// (0x000559ee) dia3_list_pane

0x9426,	// (0x000559f9) scroll_pane_cp12

0x9a6b,	// (0x0005603e) bg_dia3_numentry_pane

0x9431,	// (0x00055a04) dia3_numentry_pane_t1

0x9440,	// (0x00055a13) cell_dia3_key_num_pane

0x9448,	// (0x00055a1b) cell_dia3_key0_fun_pane_ParamLimits

0x9448,	// (0x00055a1b) cell_dia3_key0_fun_pane

0x945c,	// (0x00055a2f) cell_dia3_key1_fun_pane_ParamLimits

0x945c,	// (0x00055a2f) cell_dia3_key1_fun_pane

0x9474,	// (0x00055a47) dia3_listrow_pane

0xe4fa,	// (0x0005aacd) bg_dia3_numentry_pane_g1

0x9a6b,	// (0x0005603e) bg_button_pane_cp21

0x9486,	// (0x00055a59) cell_dia3_key_num_pane_t1

0x9494,	// (0x00055a67) cell_dia3_key_num_pane_t2

0x94a3,	// (0x00055a76) cell_dia3_key_num_pane_t3

0x94b2,	// (0x00055a85) cell_dia3_key_num_pane_t4

0x0003,

0xfeb3,	// (0x0005c486) cell_dia3_key_num_pane_t

0x9a6b,	// (0x0005603e) bg_button_pane_cp19

0x94c1,	// (0x00055a94) cell_dia3_key0_fun_pane_g1

0x9a6b,	// (0x0005603e) bg_button_pane_cp20

0x94c9,	// (0x00055a9c) cell_dia3_key1_fun_pane_g1

0x94d1,	// (0x00055aa4) area_left_week_number_pane

0x94dd,	// (0x00055ab0) area_top_day_name_pane

0x94f0,	// (0x00055ac3) frame_month_view_pane

0x9503,	// (0x00055ad6) grid_month_view_pane

0x9511,	// (0x00055ae4) cell_top_day_name_pane_ParamLimits

0x9511,	// (0x00055ae4) cell_top_day_name_pane

0x953e,	// (0x00055b11) cell_area_left_week_number_pane_ParamLimits

0x953e,	// (0x00055b11) cell_area_left_week_number_pane

0x9552,	// (0x00055b25) cell_month_view_pane_ParamLimits

0x9552,	// (0x00055b25) cell_month_view_pane

0x957f,	// (0x00055b52) frm_month_g1

0x958c,	// (0x00055b5f) frm_month_g2

0x959f,	// (0x00055b72) frm_month_g3

0x95b2,	// (0x00055b85) frm_month_g4

0x95c5,	// (0x00055b98) frm_month_g5

0x95d8,	// (0x00055bab) frm_month_g6

0x95eb,	// (0x00055bbe) frm_month_g7

0x95fe,	// (0x00055bd1) frm_month_g8

0x960b,	// (0x00055bde) frm_month_g9

0x961b,	// (0x00055bee) frm_month_g10

0x962b,	// (0x00055bfe) frm_month_g11

0x963b,	// (0x00055c0e) frm_month_g12

0x964d,	// (0x00055c20) frm_month_g13

0x965f,	// (0x00055c32) frm_month_g14

0x9673,	// (0x00055c46) frm_month_g15

0x9687,	// (0x00055c5a) frm_month_g16

0x000f,

0xfebc,	// (0x0005c48f) frm_month_g

0x969b,	// (0x00055c6e) cell_top_day_name_pane_t1

0x96ae,	// (0x00055c81) cell_area_left_week_number_pane_g1

0x96ba,	// (0x00055c8d) cell_area_left_week_number_pane_t1

0xd246,	// (0x00059819) cell_month_view_pane_g1

0x96cd,	// (0x00055ca0) cell_month_view_pane_t1

0x9a6b,	// (0x0005603e) main_fps_pane

0xeaab,	// (0x0005b07e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xeaab,	// (0x0005b07e) cmail_ddmenu_btn02_pane_cp1

0xeac7,	// (0x0005b09a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xeac7,	// (0x0005b09a) cmail_ddmenu_btn02_pane_cp2

0x8c1d,	// (0x000551f0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c1d,	// (0x000551f0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdf5,	// (0x0005c3c8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdf5,	// (0x0005c3c8) cmail_ddmenu_btn02_pane_g

0x8c3b,	// (0x0005520e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c3b,	// (0x0005520e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdfa,	// (0x0005c3cd) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdfa,	// (0x0005c3cd) cmail_ddmenu_btn02_pane_t

0x96e0,	// (0x00055cb3) fps_text_pane_ParamLimits

0x96e0,	// (0x00055cb3) fps_text_pane

0x96f7,	// (0x00055cca) main_fps_pane_g1_ParamLimits

0x96f7,	// (0x00055cca) main_fps_pane_g1

0x9711,	// (0x00055ce4) wait_bar_pane_cp010_ParamLimits

0x9711,	// (0x00055ce4) wait_bar_pane_cp010

0x9722,	// (0x00055cf5) fps_text_pane_t1_ParamLimits

0x9722,	// (0x00055cf5) fps_text_pane_t1

0xe5ed,	// (0x0005abc0) cam4_image_uncrop_pane_g1

0xe5f6,	// (0x0005abc9) cam4_image_uncrop_pane_g2

0x67aa,	// (0x00052d7d) cam4_image_uncrop_pane_g3

0x67b3,	// (0x00052d86) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0005bec7) cam4_image_uncrop_pane_g

0x9474,	// (0x00055a47) dia3_listrow_pane_ParamLimits

0x9a6b,	// (0x0005603e) main_phob2_pane

0x88cc,	// (0x00054e9f) cell_tport_appsw_pane_cp02_ParamLimits

0x88cc,	// (0x00054e9f) cell_tport_appsw_pane_cp02

0x88e0,	// (0x00054eb3) cell_tport_appsw_pane_cp03_ParamLimits

0x88e0,	// (0x00054eb3) cell_tport_appsw_pane_cp03

0x9a6b,	// (0x0005603e) phob2_contact_card_pane

0x9a6b,	// (0x0005603e) phob2_listscroll_pane

0x973a,	// (0x00055d0d) phob2_list_pane

0x9742,	// (0x00055d15) scroll_pane_cp034

0x974a,	// (0x00055d1d) phob2_cc_data_pane_ParamLimits

0x974a,	// (0x00055d1d) phob2_cc_data_pane

0x9769,	// (0x00055d3c) phob2_cc_listscroll_pane_ParamLimits

0x9769,	// (0x00055d3c) phob2_cc_listscroll_pane

0x9787,	// (0x00055d5a) list_double_large_graphic_phob2_pane_ParamLimits

0x9787,	// (0x00055d5a) list_double_large_graphic_phob2_pane

0x979a,	// (0x00055d6d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x979a,	// (0x00055d6d) list_double_large_graphic_phob2_pane_g1

0x0dd5,	// (0x0004d3a8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0dd5,	// (0x0004d3a8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfedd,	// (0x0005c4b0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfedd,	// (0x0005c4b0) list_double_large_graphic_phob2_pane_g

0x0de1,	// (0x0004d3b4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0de1,	// (0x0004d3b4) list_double_large_graphic_phob2_pane_t1

0x0df7,	// (0x0004d3ca) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0df7,	// (0x0004d3ca) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfee2,	// (0x0005c4b5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfee2,	// (0x0005c4b5) list_double_large_graphic_phob2_pane_t

0x9a6b,	// (0x0005603e) list_highlight_pane_cp024

0x97b0,	// (0x00055d83) phob2_cc_button_pane

0x97b8,	// (0x00055d8b) phob2_cc_data_pane_g1_ParamLimits

0x97b8,	// (0x00055d8b) phob2_cc_data_pane_g1

0x97cd,	// (0x00055da0) phob2_cc_data_pane_g2_ParamLimits

0x97cd,	// (0x00055da0) phob2_cc_data_pane_g2

0x0001,

0xfee7,	// (0x0005c4ba) phob2_cc_data_pane_g_ParamLimits

0xfee7,	// (0x0005c4ba) phob2_cc_data_pane_g

0x97df,	// (0x00055db2) phob2_cc_data_pane_t1_ParamLimits

0x97df,	// (0x00055db2) phob2_cc_data_pane_t1

0x97f7,	// (0x00055dca) phob2_cc_data_pane_t2_ParamLimits

0x97f7,	// (0x00055dca) phob2_cc_data_pane_t2

0x980f,	// (0x00055de2) phob2_cc_data_pane_t3_ParamLimits

0x980f,	// (0x00055de2) phob2_cc_data_pane_t3

0x0002,

0xfeec,	// (0x0005c4bf) phob2_cc_data_pane_t_ParamLimits

0xfeec,	// (0x0005c4bf) phob2_cc_data_pane_t

0x9827,	// (0x00055dfa) phob2_cc_list_pane_ParamLimits

0x9827,	// (0x00055dfa) phob2_cc_list_pane

0xdd21,	// (0x0005a2f4) scroll_pane_cp035_ParamLimits

0xdd21,	// (0x0005a2f4) scroll_pane_cp035

0xa74e,	// (0x00056d21) bg_button_pane_cp033

0x9833,	// (0x00055e06) phob2_cc_button_pane_g1

0x983f,	// (0x00055e12) phob2_cc_button_pane_t1

0x9854,	// (0x00055e27) phob2_cc_button_pane_t2

0x0001,

0xfef3,	// (0x0005c4c6) phob2_cc_button_pane_t

0x9866,	// (0x00055e39) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9866,	// (0x00055e39) list_double_large_graphic_phob2_cc_pane

0x9879,	// (0x00055e4c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9879,	// (0x00055e4c) list_double_large_graphic_phob2_cc_pane_g1

0x0e0c,	// (0x0004d3df) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0e0c,	// (0x0004d3df) list_double_large_graphic_phob2_cc_pane_g2

0x0e18,	// (0x0004d3eb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0e18,	// (0x0004d3eb) list_double_large_graphic_phob2_cc_pane_g3

0x0e24,	// (0x0004d3f7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0e24,	// (0x0004d3f7) list_double_large_graphic_phob2_cc_pane_g4

0x0e30,	// (0x0004d403) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0e30,	// (0x0004d403) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfef8,	// (0x0005c4cb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfef8,	// (0x0005c4cb) list_double_large_graphic_phob2_cc_pane_g

0x0e3c,	// (0x0004d40f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0e3c,	// (0x0004d40f) list_double_large_graphic_phob2_cc_pane_t1

0x0e65,	// (0x0004d438) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0e65,	// (0x0004d438) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff03,	// (0x0005c4d6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff03,	// (0x0005c4d6) list_double_large_graphic_phob2_cc_pane_t

0x9885,	// (0x00055e58) list_highlight_pane_cp025_ParamLimits

0x9885,	// (0x00055e58) list_highlight_pane_cp025

0xa74e,	// (0x00056d21) bg_button_pane_cp033_ParamLimits

0x9833,	// (0x00055e06) phob2_cc_button_pane_g1_ParamLimits

0x983f,	// (0x00055e12) phob2_cc_button_pane_t1_ParamLimits

0x9854,	// (0x00055e27) phob2_cc_button_pane_t2_ParamLimits

0xfef3,	// (0x0005c4c6) phob2_cc_button_pane_t_ParamLimits

0x10d7,	// (0x0004d6aa) popup_wgtman_window

0xdb49,	// (0x0005a11c) scroll_pane_cp038

0x9196,	// (0x00055769) wgtman_btn_pane_cp_01_ParamLimits

0x9196,	// (0x00055769) wgtman_btn_pane_cp_01

0x9893,	// (0x00055e66) wgtman_content_pane

0x989c,	// (0x00055e6f) wgtman_heading_pane

0x9a6b,	// (0x0005603e) bg_heading_pane_cp02

0x98a5,	// (0x00055e78) wgtman_heading_pane_g1

0x98ad,	// (0x00055e80) wgtman_heading_pane_t1

0x98bb,	// (0x00055e8e) scroll_pane_cp036

0x98c3,	// (0x00055e96) wgtman_list_pane

0x98cb,	// (0x00055e9e) wgtman_list_pane_t1_ParamLimits

0x98cb,	// (0x00055e9e) wgtman_list_pane_t1

0xa1e4,	// (0x000567b7) cam4_grid_pane

0x0589,	// (0x0004cb5c) bg_button_pane_cp015_ParamLimits

0x7418,	// (0x000539eb) bg_button_pane_cp016_ParamLimits

0x742b,	// (0x000539fe) bg_button_pane_cp017_ParamLimits

0x05d1,	// (0x0004cba4) popup_vitu2_query_window_g3_ParamLimits

0x05d1,	// (0x0004cba4) popup_vitu2_query_window_g3

0x064c,	// (0x0004cc1f) popup_vitu2_query_window_t6_ParamLimits

0x064c,	// (0x0004cc1f) popup_vitu2_query_window_t6

0x0677,	// (0x0004cc4a) popup_vitu2_query_window_t7_ParamLimits

0x0677,	// (0x0004cc4a) popup_vitu2_query_window_t7

0xe5ed,	// (0x0005abc0) cam4_grid_pane_g1

0xe5f6,	// (0x0005abc9) cam4_grid_pane_g2

0x98e7,	// (0x00055eba) cam4_grid_pane_g3

0x98f0,	// (0x00055ec3) cam4_grid_pane_g4

0x0003,

0xff08,	// (0x0005c4db) cam4_grid_pane_g

0x2010,	// (0x0004e5e3) aid_placing_vt_slider_lsc_ParamLimits

0x230d,	// (0x0004e8e0) vidtel_button_pane_ParamLimits

0x230d,	// (0x0004e8e0) vidtel_button_pane

0x98fb,	// (0x00055ece) bg_button_pane_cp034

0x9905,	// (0x00055ed8) vidtel_button_pane_g1

0x990d,	// (0x00055ee0) vidtel_button_pane_t1

0xdc66,	// (0x0005a239) aid_size_vtel_slider_touch

0xdd21,	// (0x0005a2f4) scroll_pane_cp039

0xe538,	// (0x0005ab0b) ncim_query_button_pane_cp01_ParamLimits

0xe557,	// (0x0005ab2a) ncimui_query_pane_g1_ParamLimits

0xa74e,	// (0x00056d21) input_focus_pane_cp012_ParamLimits

0xe57c,	// (0x0005ab4f) ncim_query_entry_pane_t1_ParamLimits

0xdd21,	// (0x0005a2f4) scroll_pane_cp039_ParamLimits

0x33f2,	// (0x0004f9c5) navi_pane_bcale_mc_g1

0x33fa,	// (0x0004f9cd) navi_pane_bcale_mc_t1

0xeb10,	// (0x0005b0e3) main_sp_fs_email_pane_g1

0xeb1c,	// (0x0005b0ef) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0005c2be) main_sp_fs_email_pane_g

0xed64,	// (0x0005b337) list_single_cale_mrui_row_pane_g3_ParamLimits

0xed64,	// (0x0005b337) list_single_cale_mrui_row_pane_g3

0x0d29,	// (0x0004d2fc) list_single_recal_day_pane_g5_event_pane

0xa70b,	// (0x00056cde) list_single_recal_day_pane_g7

0x991b,	// (0x00055eee) list_recal_day_event_pane_cp01

0x9924,	// (0x00055ef7) list_recal_vselct_arw_lo_pane_cp01

0x992c,	// (0x00055eff) list_recal_vselct_arw_up_pane_cp01

0x9934,	// (0x00055f07) list_recal_vselct_pane_cp01

0xdc76,	// (0x0005a249) list_recal_day_event_pane_cp01_g1

0xa740,	// (0x00056d13) list_recal_day_event_pane_cp01_t1

0xa713,	// (0x00056ce6) list_single_recal_day_pane_t1_ParamLimits

0xa725,	// (0x00056cf8) list_single_recal_day_pane_t2_ParamLimits

0xfe0a,	// (0x0005c3dd) list_single_recal_day_pane_t_ParamLimits

0xabf2,	// (0x000571c5) bg_notes_pane_ParamLimits

0xacb4,	// (0x00057287) list_notes_pane_ParamLimits

0x140b,	// (0x0004d9de) scroll_pane_cp06_ParamLimits

0xacd6,	// (0x000572a9) main_notes_pane_ParamLimits

0x9a6b,	// (0x0005603e) main_welc_pane

0x993e,	// (0x00055f11) main_welc_body_pane_ParamLimits

0x993e,	// (0x00055f11) main_welc_body_pane

0x995b,	// (0x00055f2e) main_welc_opti_pane_ParamLimits

0x995b,	// (0x00055f2e) main_welc_opti_pane

0x99a4,	// (0x00055f77) main_welc_pane_t1_ParamLimits

0x99a4,	// (0x00055f77) main_welc_pane_t1

0x99c6,	// (0x00055f99) main_welc_body_row_pane_ParamLimits

0x99c6,	// (0x00055f99) main_welc_body_row_pane

0xe5df,	// (0x0005abb2) main_welc_opti_row_pane_ParamLimits

0xe5df,	// (0x0005abb2) main_welc_opti_row_pane

0x99dc,	// (0x00055faf) main_welc_opti_row_pane_g1

0x99e4,	// (0x00055fb7) main_welc_opti_row_pane_t1

0x99f4,	// (0x00055fc7) main_welc_body_row_pane_t1

0x8f4f,	// (0x00055522) popup_notif_wgt_heading_pane

0x8f79,	// (0x0005554c) aid_size_list_notif_wgt_del_ParamLimits

0x8f86,	// (0x00055559) list_notif_wgt_row_pane_g1_ParamLimits

0x8f92,	// (0x00055565) list_notif_wgt_row_pane_g2_ParamLimits

0x8f9e,	// (0x00055571) list_notif_wgt_row_pane_g3_ParamLimits

0xfe5d,	// (0x0005c430) list_notif_wgt_row_pane_g_ParamLimits

0x8fab,	// (0x0005557e) list_notif_wgt_row_pane_t1_ParamLimits

0x8fc0,	// (0x00055593) list_notif_wgt_row_pane_t2_ParamLimits

0x8fd2,	// (0x000555a5) list_notif_wgt_row_pane_t3_ParamLimits

0xfe64,	// (0x0005c437) list_notif_wgt_row_pane_t_ParamLimits

0x9251,	// (0x00055824) listrow_wgtman_pane_g1_ParamLimits

0x925e,	// (0x00055831) listrow_wgtman_pane_g2_ParamLimits

0xfe8d,	// (0x0005c460) listrow_wgtman_pane_g_ParamLimits

0x0d85,	// (0x0004d358) listrow_wgtman_pane_t1_ParamLimits

0x0d9d,	// (0x0004d370) listrow_wgtman_pane_t2_ParamLimits

0xfe92,	// (0x0005c465) listrow_wgtman_pane_t_ParamLimits

0x0dc3,	// (0x0004d396) wait_bar_pane_cp09_ParamLimits

0x9a6b,	// (0x0005603e) bg_popup_heading_pane_cp02

0x9a03,	// (0x00055fd6) popup_notif_wgt_heading_pane_g1

0x9a0b,	// (0x00055fde) popup_notif_wgt_heading_pane_t1

0x9a6b,	// (0x0005603e) main_vids_pane

0x9a6b,	// (0x0005603e) vids_listscroll_pane

0x9a19,	// (0x00055fec) scroll_pane_cp040

0x9a6b,	// (0x0005603e) vids_list_pane

0x9a24,	// (0x00055ff7) vids_list_double_pane_ParamLimits

0x9a24,	// (0x00055ff7) vids_list_double_pane

0x9a35,	// (0x00056008) vids_list_double_pane_g1

0x9a3e,	// (0x00056011) vids_list_double_pane_t1

0x9a4d,	// (0x00056020) vids_list_double_pane_t2

0x0001,

0xff16,	// (0x0005c4e9) vids_list_double_pane_t

0xa74e,	// (0x00056d21) main_ncimui_pane_ParamLimits

0x7ffd,	// (0x000545d0) main_ncimui_pane_g1_ParamLimits

0x8009,	// (0x000545dc) main_ncimui_pane_g2_ParamLimits

0x8009,	// (0x000545dc) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0005c1c3) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0005c1c3) main_ncimui_pane_g

0x997a,	// (0x00055f4d) main_welc_pane_g1_ParamLimits

0x997a,	// (0x00055f4d) main_welc_pane_g1

0x998f,	// (0x00055f62) main_welc_pane_g2_ParamLimits

0x998f,	// (0x00055f62) main_welc_pane_g2

0x0001,

0xff11,	// (0x0005c4e4) main_welc_pane_g_ParamLimits

0xff11,	// (0x0005c4e4) main_welc_pane_g

0xabf2,	// (0x000571c5) listscroll_mce_pane_ParamLimits

0x34d0,	// (0x0004faa3) wait_bar_pane_cp10

0xcbc4,	// (0x00059197) main_cale_day_pane_ParamLimits

0xcbc4,	// (0x00059197) main_cale_week_pane_ParamLimits

0xabf2,	// (0x000571c5) main_messa_pane_ParamLimits

0x5ab5,	// (0x00052088) main_clock2_btn_pane_ParamLimits

0x5ab5,	// (0x00052088) main_clock2_btn_pane

0xd3ce,	// (0x000599a1) main_clock2_btn_pane_cp01_ParamLimits

0xd3ce,	// (0x000599a1) main_clock2_btn_pane_cp01

0xed35,	// (0x0005b308) list_cale_mrui_pane_ParamLimits

0x902b,	// (0x000555fe) main_cf0_pane_g2

0x0001,

0xfe6b,	// (0x0005c43e) main_cf0_pane_g

0x94d1,	// (0x00055aa4) area_left_week_number_pane_ParamLimits

0x94dd,	// (0x00055ab0) area_top_day_name_pane_ParamLimits

0x94f0,	// (0x00055ac3) frame_month_view_pane_ParamLimits

0x9503,	// (0x00055ad6) grid_month_view_pane_ParamLimits

0x957f,	// (0x00055b52) frm_month_g1_ParamLimits

0x958c,	// (0x00055b5f) frm_month_g2_ParamLimits

0x959f,	// (0x00055b72) frm_month_g3_ParamLimits

0x95b2,	// (0x00055b85) frm_month_g4_ParamLimits

0x95c5,	// (0x00055b98) frm_month_g5_ParamLimits

0x95d8,	// (0x00055bab) frm_month_g6_ParamLimits

0x95eb,	// (0x00055bbe) frm_month_g7_ParamLimits

0x95fe,	// (0x00055bd1) frm_month_g8_ParamLimits

0x960b,	// (0x00055bde) frm_month_g9_ParamLimits

0x961b,	// (0x00055bee) frm_month_g10_ParamLimits

0x962b,	// (0x00055bfe) frm_month_g11_ParamLimits

0x963b,	// (0x00055c0e) frm_month_g12_ParamLimits

0x964d,	// (0x00055c20) frm_month_g13_ParamLimits

0x965f,	// (0x00055c32) frm_month_g14_ParamLimits

0x9673,	// (0x00055c46) frm_month_g15_ParamLimits

0x9687,	// (0x00055c5a) frm_month_g16_ParamLimits

0xfebc,	// (0x0005c48f) frm_month_g_ParamLimits

0x969b,	// (0x00055c6e) cell_top_day_name_pane_t1_ParamLimits

0x96ae,	// (0x00055c81) cell_area_left_week_number_pane_g1_ParamLimits

0x96ba,	// (0x00055c8d) cell_area_left_week_number_pane_t1_ParamLimits

0xd246,	// (0x00059819) cell_month_view_pane_g1_ParamLimits

0x96cd,	// (0x00055ca0) cell_month_view_pane_t1_ParamLimits

0xabea,	// (0x000571bd) main_clock2_btn_pane_g1

0x9a5d,	// (0x00056030) main_clock2_btn_pane_t1

0xa74e,	// (0x00056d21) listscroll_cmail_pane_ParamLimits

0xeb10,	// (0x0005b0e3) main_sp_fs_email_pane_g1_ParamLimits

0xeb1c,	// (0x0005b0ef) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0005c2be) main_sp_fs_email_pane_g_ParamLimits

0xeed4,	// (0x0005b4a7) list_recal_day_pane_ParamLimits

0xeee5,	// (0x0005b4b8) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small

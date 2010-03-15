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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000950de };

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
0x0eba,	// (0x00095f98) Screen

0x0ec6,	// (0x00095fa4) application_window

0x0f22,	// (0x00096000) area_bottom_pane_ParamLimits

0x0f22,	// (0x00096000) area_bottom_pane

0x0f7b,	// (0x00096059) area_top_pane_ParamLimits

0x0f7b,	// (0x00096059) area_top_pane

0x0fdf,	// (0x000960bd) call_video_uplink_pane_ParamLimits

0x0fdf,	// (0x000960bd) call_video_uplink_pane

0x101e,	// (0x000960fc) main_pane_ParamLimits

0x101e,	// (0x000960fc) main_pane

0xb7c5,	// (0x000a08a3) context_pane

0x4824,	// (0x00099902) navi_pane

0x4844,	// (0x00099922) popup_cale_events_window_ParamLimits

0x4844,	// (0x00099922) popup_cale_events_window

0xb7d8,	// (0x000a08b6) popup_mup_playback_window

0x485c,	// (0x0009993a) signal_pane

0xec7e,	// (0x000a3d5c) main_browser_pane

0xa3b5,	// (0x0009f493) main_burst_pane

0x46ac,	// (0x0009978a) main_calc_pane

0xb7ab,	// (0x000a0889) main_cale_day_pane

0x1769,	// (0x00096847) main_cale_month_pane

0xb7ab,	// (0x000a0889) main_cale_week_pane

0xa3b5,	// (0x0009f493) main_call_pane

0xe53b,	// (0x000a3619) main_call_poc_pane

0xa3b5,	// (0x0009f493) main_camera_pane

0xa3b5,	// (0x0009f493) main_chi_dic_pane

0xa23a,	// (0x0009f318) main_clock_pane

0xe53b,	// (0x000a3619) main_fmradio_pane

0xa3b5,	// (0x0009f493) main_graph_messa_pane

0xe53b,	// (0x000a3619) main_help_pane

0xec7e,	// (0x000a3d5c) main_im_pane

0xe796,	// (0x000a3874) main_image_pane_ParamLimits

0xe796,	// (0x000a3874) main_image_pane

0xe53b,	// (0x000a3619) main_location2_pane

0xa3b5,	// (0x0009f493) main_location_pane

0xe796,	// (0x000a3874) main_messa_pane

0xe53b,	// (0x000a3619) main_mp2_pane

0xa3b5,	// (0x0009f493) main_mp_pane

0xe53b,	// (0x000a3619) main_msg_pane

0xe53b,	// (0x000a3619) main_mup_eq_pane

0xe53b,	// (0x000a3619) main_mup_pane

0xec7e,	// (0x000a3d5c) main_notes_pane

0xe53b,	// (0x000a3619) main_pec_pane

0xe53b,	// (0x000a3619) main_phob_pane

0xe53b,	// (0x000a3619) main_pinb_pane

0xe53b,	// (0x000a3619) main_postcard_pane

0xe53b,	// (0x000a3619) main_qdial_pane

0xa3b5,	// (0x0009f493) main_skin_pane

0xe53b,	// (0x000a3619) main_smil2_pane

0xa3b5,	// (0x0009f493) main_smil_pane

0xa3b5,	// (0x0009f493) main_video_pane

0xa3b5,	// (0x0009f493) main_video_tele_pane

0xe796,	// (0x000a3874) main_viewer_pane_ParamLimits

0xe796,	// (0x000a3874) main_viewer_pane

0xa3b5,	// (0x0009f493) main_vorec_pane

0x46f8,	// (0x000997d6) popup_blid_sat_info_window_ParamLimits

0x46f8,	// (0x000997d6) popup_blid_sat_info_window

0x4718,	// (0x000997f6) popup_dyc_status_message_window_ParamLimits

0x4718,	// (0x000997f6) popup_dyc_status_message_window

0x4726,	// (0x00099804) popup_grid_large_graphic_window_ParamLimits

0x4726,	// (0x00099804) popup_grid_large_graphic_window

0x47b5,	// (0x00099893) popup_loc_request_window_ParamLimits

0x47b5,	// (0x00099893) popup_loc_request_window

0x47fc,	// (0x000998da) popup_wml_address_window_ParamLimits

0x47fc,	// (0x000998da) popup_wml_address_window

0x4584,	// (0x00099662) call_muted_g1

0x4242,	// (0x00099320) popup_call_audio_conf_window_ParamLimits

0x4242,	// (0x00099320) popup_call_audio_conf_window

0x4594,	// (0x00099672) popup_call_audio_first_window_ParamLimits

0x4594,	// (0x00099672) popup_call_audio_first_window

0x45d4,	// (0x000996b2) popup_call_audio_in_window_ParamLimits

0x45d4,	// (0x000996b2) popup_call_audio_in_window

0x45f8,	// (0x000996d6) popup_call_audio_out_window_ParamLimits

0x45f8,	// (0x000996d6) popup_call_audio_out_window

0x461a,	// (0x000996f8) popup_call_audio_second_window_ParamLimits

0x461a,	// (0x000996f8) popup_call_audio_second_window

0x464a,	// (0x00099728) popup_call_audio_wait_window_ParamLimits

0x464a,	// (0x00099728) popup_call_audio_wait_window

0x466b,	// (0x00099749) popup_number_entry_window_ParamLimits

0x466b,	// (0x00099749) popup_number_entry_window

0xe0fe,	// (0x000a31dc) bg_popup_call_pane_cp05_ParamLimits

0xe0fe,	// (0x000a31dc) bg_popup_call_pane_cp05

0xe11e,	// (0x000a31fc) popup_number_entry_window_t1

0xe131,	// (0x000a320f) popup_number_entry_window_t2

0xe143,	// (0x000a3221) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x000a41b1) popup_number_entry_window_t

0xe155,	// (0x000a3233) text_title_cp2

0xe168,	// (0x000a3246) bg_popup_call_pane_cp_ParamLimits

0xe168,	// (0x000a3246) bg_popup_call_pane_cp

0xe176,	// (0x000a3254) call_thumbnail_pane

0xe17e,	// (0x000a325c) popup_call_audio_in_window_g1_ParamLimits

0xe17e,	// (0x000a325c) popup_call_audio_in_window_g1

0xe18a,	// (0x000a3268) popup_call_audio_in_window_g2_ParamLimits

0xe18a,	// (0x000a3268) popup_call_audio_in_window_g2

0xe196,	// (0x000a3274) popup_call_audio_in_window_g3_ParamLimits

0xe196,	// (0x000a3274) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x000a41ba) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x000a41ba) popup_call_audio_in_window_g

0xe1a2,	// (0x000a3280) popup_call_audio_in_window_t1_ParamLimits

0xe1a2,	// (0x000a3280) popup_call_audio_in_window_t1

0xe1be,	// (0x000a329c) popup_call_audio_in_window_t2_ParamLimits

0xe1be,	// (0x000a329c) popup_call_audio_in_window_t2

0xe1da,	// (0x000a32b8) popup_call_audio_in_window_t3_ParamLimits

0xe1da,	// (0x000a32b8) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x000a41c1) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x000a41c1) popup_call_audio_in_window_t

0xe168,	// (0x000a3246) bg_popup_call_pane_cp01_ParamLimits

0xe168,	// (0x000a3246) bg_popup_call_pane_cp01

0xe176,	// (0x000a3254) call_thumbnail_pane_cp02

0xe1ed,	// (0x000a32cb) call_type_pane_cp022

0xe1f5,	// (0x000a32d3) popup_call_audio_out_window_g1_ParamLimits

0xe1f5,	// (0x000a32d3) popup_call_audio_out_window_g1

0xe207,	// (0x000a32e5) popup_call_audio_out_window_g2_ParamLimits

0xe207,	// (0x000a32e5) popup_call_audio_out_window_g2

0xe213,	// (0x000a32f1) popup_call_audio_out_window_g3_ParamLimits

0xe213,	// (0x000a32f1) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x000a41c8) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x000a41c8) popup_call_audio_out_window_g

0xe225,	// (0x000a3303) popup_call_audio_out_window_t1_ParamLimits

0xe225,	// (0x000a3303) popup_call_audio_out_window_t1

0xe23d,	// (0x000a331b) popup_call_audio_out_window_t2_ParamLimits

0xe23d,	// (0x000a331b) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x000a41cf) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x000a41cf) popup_call_audio_out_window_t

0xe27c,	// (0x000a335a) bg_popup_call_pane_ParamLimits

0xe27c,	// (0x000a335a) bg_popup_call_pane

0x123a,	// (0x00096318) call_thumbnail_pane_cp_ParamLimits

0x123a,	// (0x00096318) call_thumbnail_pane_cp

0xe300,	// (0x000a33de) call_type_pane_cp01_ParamLimits

0xe300,	// (0x000a33de) call_type_pane_cp01

0xe344,	// (0x000a3422) popup_call_audio_first_window_g1_ParamLimits

0xe344,	// (0x000a3422) popup_call_audio_first_window_g1

0xe390,	// (0x000a346e) popup_call_audio_first_window_g2_ParamLimits

0xe390,	// (0x000a346e) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x000a41d4) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x000a41d4) popup_call_audio_first_window_g

0xe3d4,	// (0x000a34b2) popup_call_audio_first_window_t1_ParamLimits

0xe3d4,	// (0x000a34b2) popup_call_audio_first_window_t1

0xe480,	// (0x000a355e) popup_call_audio_first_window_t4_ParamLimits

0xe480,	// (0x000a355e) popup_call_audio_first_window_t4

0xe50c,	// (0x000a35ea) popup_call_audio_first_window_t5_ParamLimits

0xe50c,	// (0x000a35ea) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x000a41d9) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x000a41d9) popup_call_audio_first_window_t

0xe53b,	// (0x000a3619) bg_popup_call_pane_cp02

0xe545,	// (0x000a3623) call_type_pane_cp023

0xe54d,	// (0x000a362b) popup_call_audio_wait_window_g1

0xe555,	// (0x000a3633) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x000a41e0) popup_call_audio_wait_window_g

0xe55d,	// (0x000a363b) popup_call_audio_wait_window_t3

0xe56b,	// (0x000a3649) bg_popup_call_pane_cp03_ParamLimits

0xe56b,	// (0x000a3649) bg_popup_call_pane_cp03

0xe5cb,	// (0x000a36a9) call_thumbnail_pane_cp011_ParamLimits

0xe5cb,	// (0x000a36a9) call_thumbnail_pane_cp011

0xe5d7,	// (0x000a36b5) call_type_pane_cp034_ParamLimits

0xe5d7,	// (0x000a36b5) call_type_pane_cp034

0xe613,	// (0x000a36f1) popup_call_audio_second_window_g1_ParamLimits

0xe613,	// (0x000a36f1) popup_call_audio_second_window_g1

0xe64f,	// (0x000a372d) popup_call_audio_second_window_g2_ParamLimits

0xe64f,	// (0x000a372d) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x000a41e5) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x000a41e5) popup_call_audio_second_window_g

0xe68b,	// (0x000a3769) popup_call_audio_second_window_t1_ParamLimits

0xe68b,	// (0x000a3769) popup_call_audio_second_window_t1

0xe70c,	// (0x000a37ea) popup_call_audio_second_window_t2_ParamLimits

0xe70c,	// (0x000a37ea) popup_call_audio_second_window_t2

0xe742,	// (0x000a3820) popup_call_audio_second_window_t3_ParamLimits

0xe742,	// (0x000a3820) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x000a41ea) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x000a41ea) popup_call_audio_second_window_t

0xe53b,	// (0x000a3619) bg_popup_call_pane_cp04

0xe778,	// (0x000a3856) list_conf_pane

0xe780,	// (0x000a385e) popup_call_audio_conf_window_t1

0xe78e,	// (0x000a386c) call_thumbnail_pane_g1

0xe796,	// (0x000a3874) bg_pinb_pane_ParamLimits

0xe796,	// (0x000a3874) bg_pinb_pane

0xe7a4,	// (0x000a3882) find_pinb_pane

0xe7ad,	// (0x000a388b) listscroll_pinb_pane_ParamLimits

0xe7ad,	// (0x000a388b) listscroll_pinb_pane

0xe7bc,	// (0x000a389a) pinb_bg_pane_g1

0x125e,	// (0x0009633c) pinb_bg_pane_g2

0x126a,	// (0x00096348) pinb_bg_pane_g3

0x1276,	// (0x00096354) pinb_bg_pane_g4

0x1282,	// (0x00096360) pinb_bg_pane_g5

0x128e,	// (0x0009636c) pinb_bg_pane_g6

0x1299,	// (0x00096377) pinb_bg_pane_g7

0x12a4,	// (0x00096382) pinb_bg_pane_g8

0x12af,	// (0x0009638d) pinb_bg_pane_g9

0x12b9,	// (0x00096397) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x000a41f1) pinb_bg_pane_g

0x12d6,	// (0x000963b4) grid_pinb_pane

0x12e1,	// (0x000963bf) list_pinb_pane

0x12ec,	// (0x000963ca) scroll_pane_cp01_ParamLimits

0x12ec,	// (0x000963ca) scroll_pane_cp01

0xe7c6,	// (0x000a38a4) find_pinb_pane_g1_ParamLimits

0xe7c6,	// (0x000a38a4) find_pinb_pane_g1

0xe7de,	// (0x000a38bc) find_pinb_pane_t1

0xe7f0,	// (0x000a38ce) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x000a420b) find_pinb_pane_t

0xe805,	// (0x000a38e3) input_focus_pane_cp01_ParamLimits

0xe805,	// (0x000a38e3) input_focus_pane_cp01

0x12fe,	// (0x000963dc) cell_pinb_pane_ParamLimits

0x12fe,	// (0x000963dc) cell_pinb_pane

0xe811,	// (0x000a38ef) cell_pinb_pane_g1_ParamLimits

0xe811,	// (0x000a38ef) cell_pinb_pane_g1

0xe824,	// (0x000a3902) cell_pinb_pane_g2_ParamLimits

0xe824,	// (0x000a3902) cell_pinb_pane_g2

0xe830,	// (0x000a390e) cell_pinb_pane_g3_ParamLimits

0xe830,	// (0x000a390e) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x000a4210) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x000a4210) cell_pinb_pane_g

0xe53b,	// (0x000a3619) grid_highlight_pane_cp01

0x132d,	// (0x0009640b) list_pinb_item_pane_ParamLimits

0x132d,	// (0x0009640b) list_pinb_item_pane

0xe53b,	// (0x000a3619) list_highlight_pane_cp02

0x1357,	// (0x00096435) list_pinb_item_pane_g1_ParamLimits

0x1357,	// (0x00096435) list_pinb_item_pane_g1

0x1364,	// (0x00096442) list_pinb_item_pane_g2_ParamLimits

0x1364,	// (0x00096442) list_pinb_item_pane_g2

0x1370,	// (0x0009644e) list_pinb_item_pane_g3_ParamLimits

0x1370,	// (0x0009644e) list_pinb_item_pane_g3

0x1381,	// (0x0009645f) list_pinb_item_pane_g4_ParamLimits

0x1381,	// (0x0009645f) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x000a4217) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x000a4217) list_pinb_item_pane_g

0x138d,	// (0x0009646b) list_pinb_item_pane_t1_ParamLimits

0x138d,	// (0x0009646b) list_pinb_item_pane_t1

0x13be,	// (0x0009649c) calc_display_pane

0x13dc,	// (0x000964ba) calc_paper_pane

0x13f8,	// (0x000964d6) grid_calc_pane

0xe53b,	// (0x000a3619) bg_list_pane_cp01

0x1424,	// (0x00096502) clock_g1

0x142c,	// (0x0009650a) clock_g2

0x0001,

0xf142,	// (0x000a4220) clock_g

0x1436,	// (0x00096514) clock_t1_ParamLimits

0x1436,	// (0x00096514) clock_t1

0x144b,	// (0x00096529) clock_t2_ParamLimits

0x144b,	// (0x00096529) clock_t2

0x145d,	// (0x0009653b) clock_t3_ParamLimits

0x145d,	// (0x0009653b) clock_t3

0x146f,	// (0x0009654d) clock_t4_ParamLimits

0x146f,	// (0x0009654d) clock_t4

0x1481,	// (0x0009655f) clock_t5_ParamLimits

0x1481,	// (0x0009655f) clock_t5

0x1496,	// (0x00096574) clock_t6_ParamLimits

0x1496,	// (0x00096574) clock_t6

0x14a8,	// (0x00096586) clock_t7_ParamLimits

0x14a8,	// (0x00096586) clock_t7

0x14ba,	// (0x00096598) clock_t8_ParamLimits

0x14ba,	// (0x00096598) clock_t8

0x14d0,	// (0x000965ae) clock_t9_ParamLimits

0x14d0,	// (0x000965ae) clock_t9

0x0008,

0xf147,	// (0x000a4225) clock_t_ParamLimits

0xf147,	// (0x000a4225) clock_t

0xe83c,	// (0x000a391a) popup_clock_analogue_window_cp02

0xe83c,	// (0x000a391a) popup_clock_digital_window_cp01

0xe844,	// (0x000a3922) listscroll_help_pane

0xe53b,	// (0x000a3619) phob_pre_status_pane

0xe84e,	// (0x000a392c) grid_qdial_pane

0xe796,	// (0x000a3874) listscroll_mce_pane

0xe796,	// (0x000a3874) bg_notes_pane

0xe858,	// (0x000a3936) list_notes_pane

0x14e6,	// (0x000965c4) scroll_pane_cp06

0xe866,	// (0x000a3944) bg_calc_paper_pane

0x14f5,	// (0x000965d3) list_calc_pane

0xec7e,	// (0x000a3d5c) bg_calc_display_pane

0x150f,	// (0x000965ed) calc_display_pane_t1

0x1524,	// (0x00096602) calc_display_pane_t2

0x1539,	// (0x00096617) calc_display_pane_t3

0x0002,

0xf15a,	// (0x000a4238) calc_display_pane_t

0x154b,	// (0x00096629) cell_calc_pane_ParamLimits

0x154b,	// (0x00096629) cell_calc_pane

0xec8a,	// (0x000a3d68) bg_calc_paper_pane_g1

0xec96,	// (0x000a3d74) bg_calc_paper_pane_g2

0xeca2,	// (0x000a3d80) bg_calc_paper_pane_g3

0xecae,	// (0x000a3d8c) bg_calc_paper_pane_g4

0xecba,	// (0x000a3d98) bg_calc_paper_pane_g5

0x1578,	// (0x00096656) bg_calc_paper_pane_g6

0x1589,	// (0x00096667) bg_calc_paper_pane_g7

0x159a,	// (0x00096678) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x000a423f) bg_calc_paper_pane_g

0x15ab,	// (0x00096689) calc_bg_paper_pane_g9

0x15bc,	// (0x0009669a) list_calc_item_pane_ParamLimits

0x15bc,	// (0x0009669a) list_calc_item_pane

0xed29,	// (0x000a3e07) list_calc_item_pane_g1

0x15f0,	// (0x000966ce) list_calc_item_pane_t1_ParamLimits

0x15f0,	// (0x000966ce) list_calc_item_pane_t1

0x1602,	// (0x000966e0) list_calc_item_pane_t2_ParamLimits

0x1602,	// (0x000966e0) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x000a4250) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x000a4250) list_calc_item_pane_t

0xed36,	// (0x000a3e14) cell_calc_pane_g1

0xed40,	// (0x000a3e1e) grid_highlight_pane_cp02

0xed62,	// (0x000a3e40) bg_calc_display_pane_g1

0x1632,	// (0x00096710) bg_calc_display_pane_g2

0xed6b,	// (0x000a3e49) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x000a425a) bg_calc_display_pane_g

0x163c,	// (0x0009671a) cell_qdial_pane_ParamLimits

0x163c,	// (0x0009671a) cell_qdial_pane

0x1650,	// (0x0009672e) cell_qdial_pane_g1_ParamLimits

0x1650,	// (0x0009672e) cell_qdial_pane_g1

0x165d,	// (0x0009673b) cell_qdial_pane_g2_ParamLimits

0x165d,	// (0x0009673b) cell_qdial_pane_g2

0xed74,	// (0x000a3e52) cell_qdial_pane_g3_ParamLimits

0xed74,	// (0x000a3e52) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x000a4261) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x000a4261) cell_qdial_pane_g

0x167a,	// (0x00096758) cell_qdial_pane_t1_ParamLimits

0x167a,	// (0x00096758) cell_qdial_pane_t1

0x1692,	// (0x00096770) cell_qdial_pane_t2_ParamLimits

0x1692,	// (0x00096770) cell_qdial_pane_t2

0x16a5,	// (0x00096783) cell_qdial_pane_t3_ParamLimits

0x16a5,	// (0x00096783) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x000a426a) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x000a426a) cell_qdial_pane_t

0xe53b,	// (0x000a3619) grid_highlight_pane_cp04

0xed80,	// (0x000a3e5e) thumbnail_qdial_pane_ParamLimits

0xed80,	// (0x000a3e5e) thumbnail_qdial_pane

0xeddc,	// (0x000a3eba) list_help_pane

0xede5,	// (0x000a3ec3) scroll_pane_cp02

0x16b8,	// (0x00096796) help_list_pane_t1_ParamLimits

0x16b8,	// (0x00096796) help_list_pane_t1

0x16f2,	// (0x000967d0) bg_notes_pane_g2

0x16fa,	// (0x000967d8) bg_notes_pane_g3

0x1702,	// (0x000967e0) notes_bg_pane_g1

0x170a,	// (0x000967e8) notes_bg_pane_g4

0x1712,	// (0x000967f0) notes_bg_pane_g5

0x171a,	// (0x000967f8) notes_bg_pane_g6

0x1722,	// (0x00096800) notes_bg_pane_g7

0x172a,	// (0x00096808) notes_bg_pane_g8

0x1732,	// (0x00096810) notes_bg_pane_g9

0x0006,

0xf193,	// (0x000a4271) notes_bg_pane_g

0x173a,	// (0x00096818) list_notes_text_pane_ParamLimits

0x173a,	// (0x00096818) list_notes_text_pane

0xedee,	// (0x000a3ecc) list_notes_text_pane_g1

0xb90a,	// (0x000a09e8) list_notes_text_pane_t1

0x1769,	// (0x00096847) listscroll_cale_week_pane

0x178e,	// (0x0009686c) bg_cale_heading_pane

0xee11,	// (0x000a3eef) bg_cale_pane_cp01

0x17b0,	// (0x0009688e) cale_week_corner_pane

0x17ca,	// (0x000968a8) cale_week_day_heading_pane

0x17ec,	// (0x000968ca) cale_week_scroll_pane_g1

0x1809,	// (0x000968e7) cale_week_scroll_pane_g2

0x181c,	// (0x000968fa) cale_week_scroll_pane_g3

0x182f,	// (0x0009690d) cale_week_scroll_pane_g4

0x1842,	// (0x00096920) cale_week_scroll_pane_g5

0x1855,	// (0x00096933) cale_week_scroll_pane_g6

0x1868,	// (0x00096946) cale_week_scroll_pane_g7

0x187b,	// (0x00096959) cale_week_scroll_pane_g8

0x1890,	// (0x0009696e) cale_week_scroll_pane_g9

0x18a3,	// (0x00096981) cale_week_scroll_pane_g10

0x18b6,	// (0x00096994) cale_week_scroll_pane_g11

0x18c9,	// (0x000969a7) cale_week_scroll_pane_g12

0x18e0,	// (0x000969be) cale_week_scroll_pane_g13

0x18fb,	// (0x000969d9) cale_week_scroll_pane_g14

0x1916,	// (0x000969f4) cale_week_scroll_pane_g15

0x000e,

0xf1a2,	// (0x000a4280) cale_week_scroll_pane_g

0x1931,	// (0x00096a0f) cale_week_time_pane

0x1946,	// (0x00096a24) grid_cale_week_pane

0xee41,	// (0x000a3f1f) scroll_pane_cp08

0x1967,	// (0x00096a45) cell_cale_week_pane_ParamLimits

0x1967,	// (0x00096a45) cell_cale_week_pane

0x19cb,	// (0x00096aa9) cale_week_day_heading_pane_t1

0x1a06,	// (0x00096ae4) cale_week_day_heading_pane_t2

0x1a41,	// (0x00096b1f) cale_week_day_heading_pane_t3

0x1a7c,	// (0x00096b5a) cale_week_day_heading_pane_t4

0x1ab7,	// (0x00096b95) cale_week_day_heading_pane_t5

0x1af2,	// (0x00096bd0) cale_week_day_heading_pane_t6

0x1b2d,	// (0x00096c0b) cale_week_day_heading_pane_t7

0x0006,

0xf1c1,	// (0x000a429f) cale_week_day_heading_pane_t

0xee5e,	// (0x000a3f3c) bg_cale_side_pane

0x1b68,	// (0x00096c46) cale_week_time_pane_t1

0x1b82,	// (0x00096c60) cale_week_time_pane_t2

0x1b9c,	// (0x00096c7a) cale_week_time_pane_t3

0x1bb6,	// (0x00096c94) cale_week_time_pane_t4

0x1bd0,	// (0x00096cae) cale_week_time_pane_t5

0x1bec,	// (0x00096cca) cale_week_time_pane_t6

0x1c0e,	// (0x00096cec) cale_week_time_pane_t7

0x1c32,	// (0x00096d10) cale_week_time_pane_t8

0x0007,

0xf1d0,	// (0x000a42ae) cale_week_time_pane_t

0x1c58,	// (0x00096d36) cell_cale_week_pane_g2

0x1c6b,	// (0x00096d49) cell_cale_week_pane_g3_ParamLimits

0x1c6b,	// (0x00096d49) cell_cale_week_pane_g3

0xee6c,	// (0x000a3f4a) grid_highlight_pane_cp07

0xee74,	// (0x000a3f52) listscroll_gms_pane

0xee7e,	// (0x000a3f5c) grid_gms_pane

0xee87,	// (0x000a3f65) listscroll_gms_pane_g1

0xee8f,	// (0x000a3f6d) listscroll_gms_pane_g2

0x0001,

0x0080,	// (0x0009515e) listscroll_gms_pane_g

0x1c83,	// (0x00096d61) scroll_pane_cp010

0x1c8e,	// (0x00096d6c) cell_gms_pane_ParamLimits

0x1c8e,	// (0x00096d6c) cell_gms_pane

0x1c9e,	// (0x00096d7c) cell_gms_pane_g1

0xee97,	// (0x000a3f75) cell_gms_pane_g2

0xedee,	// (0x000a3ecc) cell_gms_pane_g3

0xee9f,	// (0x000a3f7d) cell_gms_pane_g4

0x0003,

0xf1e1,	// (0x000a42bf) cell_gms_pane_g

0xeea8,	// (0x000a3f86) grid_highlight_pane_cp09

0x452c,	// (0x0009960a) phob_pre_status_pane_g1

0x4534,	// (0x00099612) phob_pre_status_pane_g2

0x453c,	// (0x0009961a) phob_pre_status_pane_g3

0x4544,	// (0x00099622) phob_pre_status_pane_g4

0x0004,

0xf5b6,	// (0x000a4694) phob_pre_status_pane_g

0x4554,	// (0x00099632) phob_pre_status_pane_t1

0x4564,	// (0x00099642) phob_pre_status_pane_t2

0x4574,	// (0x00099652) phob_pre_status_pane_t3

0x0002,

0xf5c1,	// (0x000a469f) phob_pre_status_pane_t

0xe53b,	// (0x000a3619) bg_list_pane_cp05

0x1cae,	// (0x00096d8c) grid_vorec_pane

0x1cba,	// (0x00096d98) vorec_t1

0x1cc8,	// (0x00096da6) vorec_t2

0x1cd6,	// (0x00096db4) vorec_t3

0x1ce4,	// (0x00096dc2) vorec_t4

0x1cf2,	// (0x00096dd0) vorec_t5

0x1d00,	// (0x00096dde) vorec_t6

0x0006,

0xf1ea,	// (0x000a42c8) vorec_t

0x1d1c,	// (0x00096dfa) wait_bar_pane_cp01

0x1d24,	// (0x00096e02) cell_vorec_pane_ParamLimits

0x1d24,	// (0x00096e02) cell_vorec_pane

0xeeb0,	// (0x000a3f8e) cell_vorec_pane_g1

0xe53b,	// (0x000a3619) grid_highlight_pane_cp05

0x1d47,	// (0x00096e25) cams_zoom_pane

0x1d53,	// (0x00096e31) image_vga_pane

0x1d62,	// (0x00096e40) main_camera_pane_g1

0x1d70,	// (0x00096e4e) main_camera_pane_g2

0x1d7c,	// (0x00096e5a) main_camera_pane_g3

0x1d88,	// (0x00096e66) main_camera_pane_g4

0x1d94,	// (0x00096e72) main_camera_pane_g5

0x1da0,	// (0x00096e7e) main_camera_pane_g6

0x1dac,	// (0x00096e8a) main_camera_pane_g7

0x0007,

0xf1f9,	// (0x000a42d7) main_camera_pane_g

0x1db8,	// (0x00096e96) main_camera_pane_t1

0x1dca,	// (0x00096ea8) main_camera_pane_t2

0x0001,

0xf20a,	// (0x000a42e8) main_camera_pane_t

0x1deb,	// (0x00096ec9) cams_zoom_pane_cp_ParamLimits

0x1deb,	// (0x00096ec9) cams_zoom_pane_cp

0x1e0f,	// (0x00096eed) image_cif_pane_ParamLimits

0x1e0f,	// (0x00096eed) image_cif_pane

0x1e2d,	// (0x00096f0b) image_subqcif_pane

0x1e35,	// (0x00096f13) main_video_pane_g1_ParamLimits

0x1e35,	// (0x00096f13) main_video_pane_g1

0x1e55,	// (0x00096f33) main_video_pane_g2_ParamLimits

0x1e55,	// (0x00096f33) main_video_pane_g2

0x1e85,	// (0x00096f63) main_video_pane_g3_ParamLimits

0x1e85,	// (0x00096f63) main_video_pane_g3

0x1eae,	// (0x00096f8c) main_video_pane_g4_ParamLimits

0x1eae,	// (0x00096f8c) main_video_pane_g4

0x1ed7,	// (0x00096fb5) main_video_pane_g5_ParamLimits

0x1ed7,	// (0x00096fb5) main_video_pane_g5

0xeec6,	// (0x000a3fa4) main_video_pane_g6_ParamLimits

0xeec6,	// (0x000a3fa4) main_video_pane_g6

0x0006,

0xf20f,	// (0x000a42ed) main_video_pane_g_ParamLimits

0xf20f,	// (0x000a42ed) main_video_pane_g

0x1ef9,	// (0x00096fd7) main_video_pane_t1_ParamLimits

0x1ef9,	// (0x00096fd7) main_video_pane_t1

0xeee0,	// (0x000a3fbe) cams_zoom_pane_g1

0xeee9,	// (0x000a3fc7) cams_zoom_pane_g2

0xeef2,	// (0x000a3fd0) cams_zoom_pane_g3

0xeefb,	// (0x000a3fd9) cams_zoom_pane_g4

0x0003,

0x00c2,	// (0x000951a0) cams_zoom_pane_g

0x1f43,	// (0x00097021) grid_cams_pane

0x1f51,	// (0x0009702f) linegrid_cams_pane

0x1f5f,	// (0x0009703d) cell_cams_pane_ParamLimits

0x1f5f,	// (0x0009703d) cell_cams_pane

0xef04,	// (0x000a3fe2) cams_burst_image_pane

0xef0c,	// (0x000a3fea) cell_cams_pane_g1

0xe53b,	// (0x000a3619) grid_highlight_pane_cp03

0xed36,	// (0x000a3e14) mp_bg_pane_g1

0xe53b,	// (0x000a3619) bg_list_pane_cp03

0xb6d0,	// (0x000a07ae) bg_mp_pane

0xb6d8,	// (0x000a07b6) grid_mp_pane

0xb6e0,	// (0x000a07be) media_player_g1

0xb6e8,	// (0x000a07c6) media_player_t1

0xb6f6,	// (0x000a07d4) media_player_t2

0xb704,	// (0x000a07e2) media_player_t3

0xb712,	// (0x000a07f0) media_player_t4

0xb720,	// (0x000a07fe) media_player_t5

0xb72e,	// (0x000a080c) media_player_t6

0xb73c,	// (0x000a081a) media_player_t7

0x0006,

0xf5a0,	// (0x000a467e) media_player_t

0xb74a,	// (0x000a0828) wait_bar_pane_cp02

0xf585,	// (0x000a4663) main_usb_pane_t

0x4523,	// (0x00099601) cell_mp_pane

0xed36,	// (0x000a3e14) cell_mp_pane_g1

0xe53b,	// (0x000a3619) grid_highlight_pane_cp06

0xef14,	// (0x000a3ff2) grid_skin_colour_pane

0xef1c,	// (0x000a3ffa) list_highlight_pane_cp03

0x2086,	// (0x00097164) skin_g1

0xef24,	// (0x000a4002) skin_t1

0xef33,	// (0x000a4011) skin_t2

0x0001,

0x00f7,	// (0x000951d5) skin_t

0x2090,	// (0x0009716e) cell_skin_colour_pane_ParamLimits

0x2090,	// (0x0009716e) cell_skin_colour_pane

0xef41,	// (0x000a401f) cell_skin_colour_pane_g1

0x2114,	// (0x000971f2) call_video_g1_ParamLimits

0x2114,	// (0x000971f2) call_video_g1

0x2124,	// (0x00097202) call_video_g2_ParamLimits

0x2124,	// (0x00097202) call_video_g2

0x0001,

0xf24a,	// (0x000a4328) call_video_g_ParamLimits

0xf24a,	// (0x000a4328) call_video_g

0x217e,	// (0x0009725c) call_video_uplink_pane_cp1_ParamLimits

0x217e,	// (0x0009725c) call_video_uplink_pane_cp1

0xef53,	// (0x000a4031) call_video_uplink_pane_cp2

0x224a,	// (0x00097328) video_down_crop_pane_ParamLimits

0x224a,	// (0x00097328) video_down_crop_pane

0x233c,	// (0x0009741a) video_down_pane_ParamLimits

0x233c,	// (0x0009741a) video_down_pane

0xef5b,	// (0x000a4039) video_down_subqcif_pane_ParamLimits

0xef5b,	// (0x000a4039) video_down_subqcif_pane

0xef73,	// (0x000a4051) video_down_subqcif_pane_cp_ParamLimits

0xef73,	// (0x000a4051) video_down_subqcif_pane_cp

0xef99,	// (0x000a4077) im_reading_pane_ParamLimits

0xef99,	// (0x000a4077) im_reading_pane

0x245e,	// (0x0009753c) im_writing_pane_ParamLimits

0x245e,	// (0x0009753c) im_writing_pane

0x247c,	// (0x0009755a) im_reading_pane_t1

0xefb3,	// (0x000a4091) list_im_pane

0xefc4,	// (0x000a40a2) scroll_pane_cp07

0x24d7,	// (0x000975b5) im_writing_pane_t1_ParamLimits

0x24d7,	// (0x000975b5) im_writing_pane_t1

0xefdd,	// (0x000a40bb) im_writing_pane_t2_ParamLimits

0xefdd,	// (0x000a40bb) im_writing_pane_t2

0x0001,

0xf254,	// (0x000a4332) im_writing_pane_t_ParamLimits

0xf254,	// (0x000a4332) im_writing_pane_t

0xe53b,	// (0x000a3619) input_focus_pane_cp04

0xe53b,	// (0x000a3619) input_focus_pane_cp05

0x24e9,	// (0x000975c7) list_im_single_pane_ParamLimits

0x24e9,	// (0x000975c7) list_im_single_pane

0x2511,	// (0x000975ef) list_single_im_pane_t1

0x44e7,	// (0x000995c5) blid_accuracy_pane

0x44ef,	// (0x000995cd) blid_compass_pane

0x44f9,	// (0x000995d7) main_location_t1

0x4507,	// (0x000995e5) main_location_t2

0x4515,	// (0x000995f3) main_location_t3

0x0002,

0xf5af,	// (0x000a468d) main_location_t

0xe53b,	// (0x000a3619) aid_levels_location

0xed36,	// (0x000a3e14) blid_accuracy_pane_g1

0xed36,	// (0x000a3e14) blid_accuracy_pane_g2

0x0001,

0x0168,	// (0x00095246) blid_accuracy_pane_g

0xf025,	// (0x000a4103) wml_content_pane

0xf063,	// (0x000a4141) wml_button_pane_ParamLimits

0xf063,	// (0x000a4141) wml_button_pane

0x2520,	// (0x000975fe) wml_list_single_large_pane_ParamLimits

0x2520,	// (0x000975fe) wml_list_single_large_pane

0x2551,	// (0x0009762f) wml_list_single_medium_pane_ParamLimits

0x2551,	// (0x0009762f) wml_list_single_medium_pane

0x2589,	// (0x00097667) wml_list_single_small_pane_ParamLimits

0x2589,	// (0x00097667) wml_list_single_small_pane

0xf077,	// (0x000a4155) wml_selection_box_pane_ParamLimits

0xf077,	// (0x000a4155) wml_selection_box_pane

0xf08a,	// (0x000a4168) wml_list_single_pane_t1

0xf099,	// (0x000a4177) wml_list_single_medium_pane_t1

0xf0a8,	// (0x000a4186) wml_list_single_large_pane_t1

0xf0b7,	// (0x000a4195) input_focus_pane_cp02_ParamLimits

0xf0b7,	// (0x000a4195) input_focus_pane_cp02

0x9cd5,	// (0x0009edb3) wml_selection_box_pane_g1

0x9cde,	// (0x0009edbc) wml_selection_box_pane_t1_ParamLimits

0x9cde,	// (0x0009edbc) wml_selection_box_pane_t1

0xe796,	// (0x000a3874) bg_wml_button_pane_ParamLimits

0xe796,	// (0x000a3874) bg_wml_button_pane

0x9cf6,	// (0x0009edd4) wml_button_pane_g1

0x9cfe,	// (0x0009eddc) wml_button_pane_t1

0x9cf6,	// (0x0009edd4) wml_button_bg_pane_g1

0x9d0e,	// (0x0009edec) wml_button_bg_pane_g2

0x9d16,	// (0x0009edf4) wml_button_bg_pane_g3

0x9d1e,	// (0x0009edfc) wml_button_bg_pane_g4

0x9d26,	// (0x0009ee04) wml_button_bg_pane_g5

0x9d2e,	// (0x0009ee0c) wml_button_bg_pane_g6

0x9d36,	// (0x0009ee14) wml_button_bg_pane_g7

0x9d3e,	// (0x0009ee1c) wml_button_bg_pane_g8

0x9d46,	// (0x0009ee24) wml_button_bg_pane_g9

0x0008,

0xf259,	// (0x000a4337) wml_button_bg_pane_g

0x25ca,	// (0x000976a8) bg_list_pane_cp02

0x9d4e,	// (0x0009ee2c) mce_header_pane_ParamLimits

0x9d4e,	// (0x0009ee2c) mce_header_pane

0x9d64,	// (0x0009ee42) mce_icon_pane

0x9d64,	// (0x0009ee42) mce_image_pane

0x9d6d,	// (0x0009ee4b) mce_text_pane_ParamLimits

0x9d6d,	// (0x0009ee4b) mce_text_pane

0x25d4,	// (0x000976b2) scroll_pane_cp03

0xf05b,	// (0x000a4139) scroll_pane_cp04

0x9d80,	// (0x0009ee5e) scroll_pane_cp05_ParamLimits

0x9d80,	// (0x0009ee5e) scroll_pane_cp05

0x25de,	// (0x000976bc) mce_header_field_pane_ParamLimits

0x25de,	// (0x000976bc) mce_header_field_pane

0x25fe,	// (0x000976dc) mce_header_field_pane_2_ParamLimits

0x25fe,	// (0x000976dc) mce_header_field_pane_2

0x2614,	// (0x000976f2) mce_header_field_pane_3

0x261c,	// (0x000976fa) list_single_mce_message_pane_ParamLimits

0x261c,	// (0x000976fa) list_single_mce_message_pane

0x264e,	// (0x0009772c) list_single_mce_smart_pane_ParamLimits

0x264e,	// (0x0009772c) list_single_mce_smart_pane

0x9d8c,	// (0x0009ee6a) input_focus_pane_cp03

0x9d95,	// (0x0009ee73) list_header_data_pane

0x268b,	// (0x00097769) mce_header_field_pane_t1

0x269b,	// (0x00097779) list_single_mce_header_pane_ParamLimits

0x269b,	// (0x00097779) list_single_mce_header_pane

0x9d9d,	// (0x0009ee7b) list_single_mce_header_pane_t1

0x9dac,	// (0x0009ee8a) list_single_mce_message_pane_g1

0x9db4,	// (0x0009ee92) list_single_mce_message_pane_t1

0x26f2,	// (0x000977d0) bg_cale_heading_pane_cp01_ParamLimits

0x26f2,	// (0x000977d0) bg_cale_heading_pane_cp01

0x9dc2,	// (0x0009eea0) bg_cale_pane_cp02_ParamLimits

0x9dc2,	// (0x0009eea0) bg_cale_pane_cp02

0x2735,	// (0x00097813) cale_month_corner_pane

0x274f,	// (0x0009782d) cale_month_day_heading_pane_ParamLimits

0x274f,	// (0x0009782d) cale_month_day_heading_pane

0x27aa,	// (0x00097888) cale_month_pane_g1_ParamLimits

0x27aa,	// (0x00097888) cale_month_pane_g1

0x27e2,	// (0x000978c0) cale_month_pane_g2_ParamLimits

0x27e2,	// (0x000978c0) cale_month_pane_g2

0x280d,	// (0x000978eb) cale_month_pane_g3_ParamLimits

0x280d,	// (0x000978eb) cale_month_pane_g3

0x285d,	// (0x0009793b) cale_month_pane_g4_ParamLimits

0x285d,	// (0x0009793b) cale_month_pane_g4

0x28ad,	// (0x0009798b) cale_month_pane_g5_ParamLimits

0x28ad,	// (0x0009798b) cale_month_pane_g5

0x28fd,	// (0x000979db) cale_month_pane_g6_ParamLimits

0x28fd,	// (0x000979db) cale_month_pane_g6

0x294d,	// (0x00097a2b) cale_month_pane_g7_ParamLimits

0x294d,	// (0x00097a2b) cale_month_pane_g7

0x29b5,	// (0x00097a93) cale_month_pane_g8_ParamLimits

0x29b5,	// (0x00097a93) cale_month_pane_g8

0x2a1d,	// (0x00097afb) cale_month_pane_g9_ParamLimits

0x2a1d,	// (0x00097afb) cale_month_pane_g9

0x2a7b,	// (0x00097b59) cale_month_pane_g10_ParamLimits

0x2a7b,	// (0x00097b59) cale_month_pane_g10

0x2ad9,	// (0x00097bb7) cale_month_pane_g11_ParamLimits

0x2ad9,	// (0x00097bb7) cale_month_pane_g11

0x2b2d,	// (0x00097c0b) cale_month_pane_g12_ParamLimits

0x2b2d,	// (0x00097c0b) cale_month_pane_g12

0x2b83,	// (0x00097c61) cale_month_pane_g13_ParamLimits

0x2b83,	// (0x00097c61) cale_month_pane_g13

0x000c,

0xf26c,	// (0x000a434a) cale_month_pane_g_ParamLimits

0xf26c,	// (0x000a434a) cale_month_pane_g

0x2bd9,	// (0x00097cb7) cale_month_week_pane

0x2bee,	// (0x00097ccc) grid_cale_month_pane_ParamLimits

0x2bee,	// (0x00097ccc) grid_cale_month_pane

0x2c40,	// (0x00097d1e) cale_month_day_heading_pane_t1

0x2cc6,	// (0x00097da4) cale_month_day_heading_pane_t2

0x2d57,	// (0x00097e35) cale_month_day_heading_pane_t3

0x2de8,	// (0x00097ec6) cale_month_day_heading_pane_t4

0x2e79,	// (0x00097f57) cale_month_day_heading_pane_t5

0x2f0a,	// (0x00097fe8) cale_month_day_heading_pane_t6

0x2fa7,	// (0x00098085) cale_month_day_heading_pane_t7

0x0006,

0xf287,	// (0x000a4365) cale_month_day_heading_pane_t

0xee5e,	// (0x000a3f3c) bg_cale_side_pane_cp01

0x3050,	// (0x0009812e) cale_month_week_pane_t1

0x3069,	// (0x00098147) cale_month_week_pane_t2

0x3082,	// (0x00098160) cale_month_week_pane_t3

0x309b,	// (0x00098179) cale_month_week_pane_t4

0x30b8,	// (0x00098196) cale_month_week_pane_t5

0x30d9,	// (0x000981b7) cale_month_week_pane_t6

0x0005,

0xf296,	// (0x000a4374) cale_month_week_pane_t

0x30fa,	// (0x000981d8) cell_cale_month_pane_ParamLimits

0x30fa,	// (0x000981d8) cell_cale_month_pane

0x324a,	// (0x00098328) cell_cale_month_pane_g1

0x3256,	// (0x00098334) cell_cale_month_pane_t1_ParamLimits

0x3256,	// (0x00098334) cell_cale_month_pane_t1

0xee6c,	// (0x000a3f4a) grid_highlight_pane_cp08

0xed36,	// (0x000a3e14) main_smil_g1

0x3276,	// (0x00098354) smil_status_pane

0x9e01,	// (0x0009eedf) smil_text_pane

0xb5f0,	// (0x000a06ce) bg_popup_call3_rect_pane_g8

0xb5f8,	// (0x000a06d6) bg_popup_call3_rect_pane_g9

0x0008,

0xf543,	// (0x000a4621) bg_popup_call3_rect_pane_g

0xb83f,	// (0x000a091d) smil_status_volume_pane_g1

0x9e0b,	// (0x0009eee9) smil_status_pane_t1

0x4917,	// (0x000999f5) volume_smil_pane

0x9e22,	// (0x0009ef00) list_smil_text_pane

0x3289,	// (0x00098367) scroll_pane_cp011

0x3294,	// (0x00098372) smil_text_list_pane_t1_ParamLimits

0x3294,	// (0x00098372) smil_text_list_pane_t1

0x3328,	// (0x00098406) aid_volume_smil_ParamLimits

0x3328,	// (0x00098406) aid_volume_smil

0xed36,	// (0x000a3e14) smil_volume_pane_g1

0xed36,	// (0x000a3e14) smil_volume_pane_g2

0x0001,

0x0168,	// (0x00095246) smil_volume_pane_g

0x1769,	// (0x00096847) listscroll_cale_day_pane

0x9e2c,	// (0x0009ef0a) bg_cale_pane

0x9e44,	// (0x0009ef22) list_cale_pane

0x9e67,	// (0x0009ef45) scroll_pane_cp09

0x9e78,	// (0x0009ef56) cale_bg_pane_g1

0x9e80,	// (0x0009ef5e) cale_bg_pane_g2

0x9e88,	// (0x0009ef66) cale_bg_pane_g3

0x9e90,	// (0x0009ef6e) cale_bg_pane_g4

0x9e98,	// (0x0009ef76) cale_bg_pane_g5

0x9ea0,	// (0x0009ef7e) cale_bg_pane_g6

0x9ea8,	// (0x0009ef86) cale_bg_pane_g7

0x9eb0,	// (0x0009ef8e) cale_bg_pane_g8

0x9eb8,	// (0x0009ef96) cale_bg_pane_g9

0x0008,

0xf2b6,	// (0x000a4394) cale_bg_pane_g

0x334a,	// (0x00098428) list_cale_time_pane_ParamLimits

0x334a,	// (0x00098428) list_cale_time_pane

0x336a,	// (0x00098448) list_cale_time_pane_g1_ParamLimits

0x336a,	// (0x00098448) list_cale_time_pane_g1

0x9ec0,	// (0x0009ef9e) list_cale_time_pane_g2_ParamLimits

0x9ec0,	// (0x0009ef9e) list_cale_time_pane_g2

0x3376,	// (0x00098454) list_cale_time_pane_g3_ParamLimits

0x3376,	// (0x00098454) list_cale_time_pane_g3

0x3384,	// (0x00098462) list_cale_time_pane_g4_ParamLimits

0x3384,	// (0x00098462) list_cale_time_pane_g4

0x3392,	// (0x00098470) list_cale_time_pane_g5_ParamLimits

0x3392,	// (0x00098470) list_cale_time_pane_g5

0x0005,

0xf2c9,	// (0x000a43a7) list_cale_time_pane_g_ParamLimits

0xf2c9,	// (0x000a43a7) list_cale_time_pane_g

0x33a0,	// (0x0009847e) list_cale_time_pane_t1_ParamLimits

0x33a0,	// (0x0009847e) list_cale_time_pane_t1

0x33c8,	// (0x000984a6) list_cale_time_pane_t2_ParamLimits

0x33c8,	// (0x000984a6) list_cale_time_pane_t2

0x37a3,	// (0x00098881) aid_blid_cardinal_pane

0x37e5,	// (0x000988c3) compass_pane_t4

0x33f0,	// (0x000984ce) list_cale_time_pane_t4_ParamLimits

0x33f0,	// (0x000984ce) list_cale_time_pane_t4

0x37f3,	// (0x000988d1) compass_pane_t5

0x3803,	// (0x000988e1) compass_pane_t6

0x3811,	// (0x000988ef) compass_pane_t7

0xa307,	// (0x0009f3e5) navi_pane_cc_t1

0xa45c,	// (0x0009f53a) aid_phob_thumbnail_center_pane

0x3fe0,	// (0x000990be) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2d6,	// (0x000a43b4) list_cale_time_pane_t_ParamLimits

0xf2d6,	// (0x000a43b4) list_cale_time_pane_t

0xe168,	// (0x000a3246) bg_popup_window_pane_cp02_ParamLimits

0xe168,	// (0x000a3246) bg_popup_window_pane_cp02

0x9eda,	// (0x0009efb8) heading_pane_cp01_ParamLimits

0x9eda,	// (0x0009efb8) heading_pane_cp01

0x9ee6,	// (0x0009efc4) loc_req_pane_ParamLimits

0x9ee6,	// (0x0009efc4) loc_req_pane

0x9ef6,	// (0x0009efd4) loc_type_pane_ParamLimits

0x9ef6,	// (0x0009efd4) loc_type_pane

0x9f08,	// (0x0009efe6) loc_type_pane_t1_ParamLimits

0x9f08,	// (0x0009efe6) loc_type_pane_t1

0x9f1a,	// (0x0009eff8) loc_type_pane_t2_ParamLimits

0x9f1a,	// (0x0009eff8) loc_type_pane_t2

0x9f2c,	// (0x0009f00a) loc_type_pane_t3_ParamLimits

0x9f2c,	// (0x0009f00a) loc_type_pane_t3

0x0002,

0xf2dd,	// (0x000a43bb) loc_type_pane_t_ParamLimits

0xf2dd,	// (0x000a43bb) loc_type_pane_t

0x9f3e,	// (0x0009f01c) list_loc_req_pane

0x9f48,	// (0x0009f026) scroll_pane_cp012

0x3418,	// (0x000984f6) list_single_loc_request_popup_menu_pane_ParamLimits

0x3418,	// (0x000984f6) list_single_loc_request_popup_menu_pane

0x9f53,	// (0x0009f031) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x9f53,	// (0x0009f031) list_single_loc_request_popup_menu_pane_g1

0x9f5f,	// (0x0009f03d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x9f5f,	// (0x0009f03d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2e4,	// (0x000a43c2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2e4,	// (0x000a43c2) list_single_loc_request_popup_menu_pane_g

0x9f6b,	// (0x0009f049) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x9f6b,	// (0x0009f049) list_single_loc_request_popup_menu_pane_t1

0x3432,	// (0x00098510) bg_popup_window_pane_cp03_ParamLimits

0x3432,	// (0x00098510) bg_popup_window_pane_cp03

0x3440,	// (0x0009851e) heading_loc_req_pane_ParamLimits

0x3440,	// (0x0009851e) heading_loc_req_pane

0x344c,	// (0x0009852a) popup_dyc_status_message_window_g1_ParamLimits

0x344c,	// (0x0009852a) popup_dyc_status_message_window_g1

0x3458,	// (0x00098536) popup_dyc_status_message_window_t1_ParamLimits

0x3458,	// (0x00098536) popup_dyc_status_message_window_t1

0x346a,	// (0x00098548) popup_dyc_status_message_window_t2_ParamLimits

0x346a,	// (0x00098548) popup_dyc_status_message_window_t2

0x347c,	// (0x0009855a) popup_dyc_status_message_window_t3_ParamLimits

0x347c,	// (0x0009855a) popup_dyc_status_message_window_t3

0x0002,

0xf2e9,	// (0x000a43c7) popup_dyc_status_message_window_t_ParamLimits

0xf2e9,	// (0x000a43c7) popup_dyc_status_message_window_t

0xe53b,	// (0x000a3619) bg_heading_pane_cp01

0x9f81,	// (0x0009f05f) heading_loc_req_pane_g1

0x9f89,	// (0x0009f067) heading_loc_req_pane_g2

0x9f91,	// (0x0009f06f) heading_loc_req_pane_g3

0x0002,

0xf2f0,	// (0x000a43ce) heading_loc_req_pane_g

0x9f99,	// (0x0009f077) heading_loc_req_pane_t1

0x9fa8,	// (0x0009f086) bg_popup_sub_pane_cp01_ParamLimits

0x9fa8,	// (0x0009f086) bg_popup_sub_pane_cp01

0x9fb6,	// (0x0009f094) popup_cale_events_window_g1_ParamLimits

0x9fb6,	// (0x0009f094) popup_cale_events_window_g1

0x9fd6,	// (0x0009f0b4) popup_cale_events_window_g2_ParamLimits

0x9fd6,	// (0x0009f0b4) popup_cale_events_window_g2

0x0001,

0xf324,	// (0x000a4402) popup_cale_events_window_g_ParamLimits

0xf324,	// (0x000a4402) popup_cale_events_window_g

0x9ff6,	// (0x0009f0d4) popup_cale_events_window_t1_ParamLimits

0x9ff6,	// (0x0009f0d4) popup_cale_events_window_t1

0xa008,	// (0x0009f0e6) popup_cale_events_window_t2_ParamLimits

0xa008,	// (0x0009f0e6) popup_cale_events_window_t2

0xa046,	// (0x0009f124) popup_cale_events_window_t3_ParamLimits

0xa046,	// (0x0009f124) popup_cale_events_window_t3

0xa080,	// (0x0009f15e) popup_cale_events_window_t4_ParamLimits

0xa080,	// (0x0009f15e) popup_cale_events_window_t4

0x0003,

0xf329,	// (0x000a4407) popup_cale_events_window_t_ParamLimits

0xf329,	// (0x000a4407) popup_cale_events_window_t

0x3583,	// (0x00098661) call_type_pane

0xa0b6,	// (0x0009f194) popup_call_status_window_g1

0x358f,	// (0x0009866d) popup_call_status_window_g2

0x359b,	// (0x00098679) popup_call_status_window_g3

0x0002,

0xf332,	// (0x000a4410) popup_call_status_window_g

0xa0c4,	// (0x0009f1a2) call_type_pane_g1

0xa0cd,	// (0x0009f1ab) call_type_pane_g2

0x0001,

0xf339,	// (0x000a4417) call_type_pane_g

0xe53b,	// (0x000a3619) bg_popup_sub_pane_cp02

0xa0d6,	// (0x0009f1b4) listscroll_popup_wml_pane

0xa0de,	// (0x0009f1bc) list_wml_pane

0xa0e8,	// (0x0009f1c6) scroll_pane_cp013

0xa0f3,	// (0x0009f1d1) list_single_graphic_popup_wml_pane_ParamLimits

0xa0f3,	// (0x0009f1d1) list_single_graphic_popup_wml_pane

0xed36,	// (0x000a3e14) list_single_graphic_popup_wml_pane_g1

0xa107,	// (0x0009f1e5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf33e,	// (0x000a441c) list_single_graphic_popup_wml_pane_g

0xa10f,	// (0x0009f1ed) list_single_graphic_popup_wml_pane_t1

0xa125,	// (0x0009f203) aid_call_pane

0xe78e,	// (0x000a386c) popup_clock_analogue_window_g1

0xe78e,	// (0x000a386c) popup_clock_analogue_window_g2

0x35a7,	// (0x00098685) popup_clock_analogue_window_g3

0x35a7,	// (0x00098685) popup_clock_analogue_window_g4

0xed36,	// (0x000a3e14) popup_clock_analogue_window_g5

0x0004,

0xf343,	// (0x000a4421) popup_clock_analogue_window_g

0x35af,	// (0x0009868d) popup_clock_analogue_window_t1

0x35bd,	// (0x0009869b) clock_digital_number_pane_ParamLimits

0x35bd,	// (0x0009869b) clock_digital_number_pane

0x35c9,	// (0x000986a7) clock_digital_number_pane_cp02_ParamLimits

0x35c9,	// (0x000986a7) clock_digital_number_pane_cp02

0x35d5,	// (0x000986b3) clock_digital_number_pane_cp03_ParamLimits

0x35d5,	// (0x000986b3) clock_digital_number_pane_cp03

0x35e1,	// (0x000986bf) clock_digital_number_pane_cp04_ParamLimits

0x35e1,	// (0x000986bf) clock_digital_number_pane_cp04

0x35f1,	// (0x000986cf) clock_digital_separator_pane_ParamLimits

0x35f1,	// (0x000986cf) clock_digital_separator_pane

0x35fd,	// (0x000986db) popup_clock_digital_window_t1

0xed36,	// (0x000a3e14) clock_digital_number_pane_g1

0xed36,	// (0x000a3e14) clock_digital_number_pane_g2

0x0001,

0x0168,	// (0x00095246) clock_digital_number_pane_g

0xed36,	// (0x000a3e14) clock_digital_separator_pane_g1

0xed36,	// (0x000a3e14) clock_digital_separator_pane_g2

0x0001,

0x0168,	// (0x00095246) clock_digital_separator_pane_g

0xe53b,	// (0x000a3619) bg_popup_window_pane_cp04

0xa12d,	// (0x0009f20b) heading_pane_cp03

0xa135,	// (0x0009f213) listscroll_popup_gms_pane

0xa13d,	// (0x0009f21b) grid_large_graphic_popup_pane

0xa147,	// (0x0009f225) listscroll_popup_gms_pane_g1

0xa14f,	// (0x0009f22d) listscroll_popup_gms_pane_g2

0x0001,

0xf34e,	// (0x000a442c) listscroll_popup_gms_pane_g

0xf05b,	// (0x000a4139) scroll_pane_cp014

0xa157,	// (0x0009f235) cell_large_graphic_popup_pane_ParamLimits

0xa157,	// (0x0009f235) cell_large_graphic_popup_pane

0xa16f,	// (0x0009f24d) cell_large_graphic_popup_pane_g1_ParamLimits

0xa16f,	// (0x0009f24d) cell_large_graphic_popup_pane_g1

0xa17b,	// (0x0009f259) cell_large_graphic_popup_pane_g2_ParamLimits

0xa17b,	// (0x0009f259) cell_large_graphic_popup_pane_g2

0xa187,	// (0x0009f265) cell_large_graphic_popup_pane_g3_ParamLimits

0xa187,	// (0x0009f265) cell_large_graphic_popup_pane_g3

0xa194,	// (0x0009f272) cell_large_graphic_popup_pane_g4_ParamLimits

0xa194,	// (0x0009f272) cell_large_graphic_popup_pane_g4

0x0003,

0xf353,	// (0x000a4431) cell_large_graphic_popup_pane_g_ParamLimits

0xf353,	// (0x000a4431) cell_large_graphic_popup_pane_g

0xa1a4,	// (0x0009f282) grid_highlight_pane_cp010

0xed36,	// (0x000a3e14) bg_popup_call_pane_g1

0xa1ae,	// (0x0009f28c) list_single_graphic_popup_conf_pane_ParamLimits

0xa1ae,	// (0x0009f28c) list_single_graphic_popup_conf_pane

0xa1c1,	// (0x0009f29f) list_highlight_pane_cp01

0xa1ca,	// (0x0009f2a8) list_single_graphic_popup_conf_pane_g1

0xa1d2,	// (0x0009f2b0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf35c,	// (0x000a443a) list_single_graphic_popup_conf_pane_g

0xa1da,	// (0x0009f2b8) list_single_graphic_popup_conf_pane_t1

0xa1e8,	// (0x0009f2c6) linegrid_cams_pane_g1

0x361a,	// (0x000986f8) linegrid_cams_pane_g2

0xedee,	// (0x000a3ecc) linegrid_cams_pane_g3

0xa1f1,	// (0x0009f2cf) linegrid_cams_pane_g4

0x3623,	// (0x00098701) linegrid_cams_pane_g5

0x362c,	// (0x0009870a) linegrid_cams_pane_g6

0xee9f,	// (0x000a3f7d) linegrid_cams_pane_g7

0x0006,

0xf361,	// (0x000a443f) linegrid_cams_pane_g

0xa1fa,	// (0x0009f2d8) popup_clock_analogue_window

0xa1fa,	// (0x0009f2d8) popup_clock_digital_window

0xe53b,	// (0x000a3619) popup_phob_thumbnail_window

0xed36,	// (0x000a3e14) call_video_uplink_pane_g1

0xa203,	// (0x0009f2e1) call_video_uplink_pane_g2

0x0001,

0xf370,	// (0x000a444e) call_video_uplink_pane_g

0xee6c,	// (0x000a3f4a) video_uplink_pane

0xa20b,	// (0x0009f2e9) mce_image_pane_g1

0x3635,	// (0x00098713) mce_image_pane_g2

0x363d,	// (0x0009871b) mce_image_pane_g3

0x3645,	// (0x00098723) mce_image_pane_g4

0x364d,	// (0x0009872b) mce_image_pane_g5

0x0004,

0xf375,	// (0x000a4453) mce_image_pane_g

0xa215,	// (0x0009f2f3) control_top_pane_stacon_cp01_ParamLimits

0xa215,	// (0x0009f2f3) control_top_pane_stacon_cp01

0xa229,	// (0x0009f307) uni_indicator_pane_stacon_cp01_ParamLimits

0xa229,	// (0x0009f307) uni_indicator_pane_stacon_cp01

0xa23a,	// (0x0009f318) bg_popup_sub_pane_cp03

0x3655,	// (0x00098733) chi_dic_find_pane

0x365d,	// (0x0009873b) listscroll_chi_dic_pane

0x3666,	// (0x00098744) main_pane_chidic_g1

0xa244,	// (0x0009f322) chi_dic_find_pane_t1

0xa252,	// (0x0009f330) find_chidic_pane

0xa25b,	// (0x0009f339) chi_dic_list_pane_ParamLimits

0xa25b,	// (0x0009f339) chi_dic_list_pane

0xa26c,	// (0x0009f34a) scroll_pane_cp020

0xa274,	// (0x0009f352) find_chidic_pane_t1

0xe53b,	// (0x000a3619) input_focus_pane_cp06

0x3679,	// (0x00098757) list_chi_dic_pane_ParamLimits

0x3679,	// (0x00098757) list_chi_dic_pane

0x3696,	// (0x00098774) list_chi_dic_pane_t1_ParamLimits

0x3696,	// (0x00098774) list_chi_dic_pane_t1

0xe53b,	// (0x000a3619) list_highlight_pane_cp020

0xa283,	// (0x0009f361) bg_cale_heading_pane_g1

0x36a9,	// (0x00098787) bg_cale_heading_pane_g2

0x36b1,	// (0x0009878f) bg_cale_heading_pane_g3

0x36b9,	// (0x00098797) bg_cale_heading_pane_g4

0x36c3,	// (0x000987a1) bg_cale_heading_pane_g5

0x36cd,	// (0x000987ab) bg_cale_heading_pane_g6

0x36d5,	// (0x000987b3) bg_cale_heading_pane_g7

0x36dd,	// (0x000987bb) bg_cale_heading_pane_g8

0x36e7,	// (0x000987c5) bg_cale_heading_pane_g9

0x0008,

0xf380,	// (0x000a445e) bg_cale_heading_pane_g

0xa283,	// (0x0009f361) bg_cale_side_pane_g1

0x36f1,	// (0x000987cf) bg_cale_side_pane_g2

0x36fb,	// (0x000987d9) bg_cale_side_pane_g3

0x3705,	// (0x000987e3) bg_cale_side_pane_g4

0x370f,	// (0x000987ed) bg_cale_side_pane_g5

0x3719,	// (0x000987f7) bg_cale_side_pane_g6

0x3723,	// (0x00098801) bg_cale_side_pane_g7

0x372d,	// (0x0009880b) bg_cale_side_pane_g8

0x3735,	// (0x00098813) bg_cale_side_pane_g9

0x0008,

0xf393,	// (0x000a4471) bg_cale_side_pane_g

0x373d,	// (0x0009881b) popup_call_status_window_ParamLimits

0x373d,	// (0x0009881b) popup_call_status_window

0xa28b,	// (0x0009f369) stacon_top_pane

0xa293,	// (0x0009f371) status_pane_ParamLimits

0xa293,	// (0x0009f371) status_pane

0xa2a8,	// (0x0009f386) status_small_pane

0xa2b0,	// (0x0009f38e) control_pane

0xe53b,	// (0x000a3619) stacon_bottom_pane

0xa2b8,	// (0x0009f396) list_single_mce_smart_pane_t1_ParamLimits

0xa2b8,	// (0x0009f396) list_single_mce_smart_pane_t1

0xa2cb,	// (0x0009f3a9) list_single_mce_smart_pane_t2_ParamLimits

0xa2cb,	// (0x0009f3a9) list_single_mce_smart_pane_t2

0x0001,

0xf3a6,	// (0x000a4484) list_single_mce_smart_pane_t_ParamLimits

0xf3a6,	// (0x000a4484) list_single_mce_smart_pane_t

0x3749,	// (0x00098827) compass_pane

0x3755,	// (0x00098833) main_location2_pane_t1

0x3769,	// (0x00098847) main_location2_pane_t2

0x377d,	// (0x0009885b) main_location2_pane_t3

0x0003,

0xf3ab,	// (0x000a4489) main_location2_pane_t

0xa2ea,	// (0x0009f3c8) compass_pane_g1_ParamLimits

0xa2ea,	// (0x0009f3c8) compass_pane_g1

0x37c7,	// (0x000988a5) compass_pane_t1

0x37d6,	// (0x000988b4) compass_pane_t2

0x0005,

0xf3b4,	// (0x000a4492) compass_pane_t

0x3821,	// (0x000988ff) text_secondary_cp61

0xa2fe,	// (0x0009f3dc) navi_pane_cams_g5

0xa321,	// (0x0009f3ff) navi_pane_im_t1

0xa32f,	// (0x0009f40d) navi_pane_mp_g1_ParamLimits

0xa32f,	// (0x0009f40d) navi_pane_mp_g1

0xa343,	// (0x0009f421) navi_pane_mp_g2_ParamLimits

0xa343,	// (0x0009f421) navi_pane_mp_g2

0xa34f,	// (0x0009f42d) navi_pane_mp_g3_ParamLimits

0xa34f,	// (0x0009f42d) navi_pane_mp_g3

0x0002,

0xf3c8,	// (0x000a44a6) navi_pane_mp_g_ParamLimits

0xf3c8,	// (0x000a44a6) navi_pane_mp_g

0xa35b,	// (0x0009f439) navi_pane_mp_t1

0xa369,	// (0x0009f447) navi_pane_mp_t2

0x0002,

0xf3cf,	// (0x000a44ad) navi_pane_mp_t

0xa3a5,	// (0x0009f483) navi_pane_vt_g1

0xa35b,	// (0x0009f439) navi_pane_vt_t1

0xa3ad,	// (0x0009f48b) navi_slider_pane

0xa3b5,	// (0x0009f493) zooming_pane

0xa3bd,	// (0x0009f49b) navi_slider_pane_g1

0x3956,	// (0x00098a34) navi_slider_pane_g2

0x0006,

0xf3d6,	// (0x000a44b4) navi_slider_pane_g

0xa3e1,	// (0x0009f4bf) aid_levels_zoom

0xa3e9,	// (0x0009f4c7) zooming_pane_g1

0xa3f1,	// (0x0009f4cf) zooming_pane_g2

0xa3f1,	// (0x0009f4cf) zooming_pane_g3

0x0002,

0xf3e5,	// (0x000a44c3) zooming_pane_g

0xa3f9,	// (0x0009f4d7) level_10_zoom

0xa402,	// (0x0009f4e0) level_11_zoom

0xa40b,	// (0x0009f4e9) level_1_zoom

0xa414,	// (0x0009f4f2) level_2_zoom

0xa41d,	// (0x0009f4fb) level_3_zoom

0xa426,	// (0x0009f504) level_4_zoom

0xa42f,	// (0x0009f50d) level_5_zoom

0xa438,	// (0x0009f516) level_6_zoom

0xa441,	// (0x0009f51f) level_7_zoom

0xa44a,	// (0x0009f528) level_8_zoom

0xa453,	// (0x0009f531) level_9_zoom

0xa464,	// (0x0009f542) popup_phob_thumbnail_window_g1

0xa46c,	// (0x0009f54a) popup_phob_thumbnail_window_g2

0x0001,

0xf3ec,	// (0x000a44ca) popup_phob_thumbnail_window_g

0xb752,	// (0x000a0830) level_1_location

0xb75a,	// (0x000a0838) level_2_location

0xb762,	// (0x000a0840) level_3_location

0xb76a,	// (0x000a0848) level_4_location

0xa3b5,	// (0x0009f493) level_5_location

0x3968,	// (0x00098a46) mce_icon_pane_g1

0x3970,	// (0x00098a4e) mce_icon_pane_g2

0x0001,

0xf3f1,	// (0x000a44cf) mce_icon_pane_g

0x3978,	// (0x00098a56) main_mup_pane_g1_ParamLimits

0x3978,	// (0x00098a56) main_mup_pane_g1

0x3990,	// (0x00098a6e) main_mup_pane_g2_ParamLimits

0x3990,	// (0x00098a6e) main_mup_pane_g2

0x39ac,	// (0x00098a8a) main_mup_pane_g3_ParamLimits

0x39ac,	// (0x00098a8a) main_mup_pane_g3

0x39c8,	// (0x00098aa6) main_mup_pane_g4_ParamLimits

0x39c8,	// (0x00098aa6) main_mup_pane_g4

0x39e4,	// (0x00098ac2) main_mup_pane_g5_ParamLimits

0x39e4,	// (0x00098ac2) main_mup_pane_g5

0x3a05,	// (0x00098ae3) main_mup_pane_g6_ParamLimits

0x3a05,	// (0x00098ae3) main_mup_pane_g6

0x3a21,	// (0x00098aff) main_mup_pane_g7_ParamLimits

0x3a21,	// (0x00098aff) main_mup_pane_g7

0x3a3d,	// (0x00098b1b) main_mup_pane_g8_ParamLimits

0x3a3d,	// (0x00098b1b) main_mup_pane_g8

0x3a59,	// (0x00098b37) main_mup_pane_g9_ParamLimits

0x3a59,	// (0x00098b37) main_mup_pane_g9

0x3a78,	// (0x00098b56) main_mup_pane_g10_ParamLimits

0x3a78,	// (0x00098b56) main_mup_pane_g10

0x3a97,	// (0x00098b75) main_mup_pane_g11_ParamLimits

0x3a97,	// (0x00098b75) main_mup_pane_g11

0x3aaf,	// (0x00098b8d) main_mup_pane_g12_ParamLimits

0x3aaf,	// (0x00098b8d) main_mup_pane_g12

0x3abd,	// (0x00098b9b) main_mup_pane_g13_ParamLimits

0x3abd,	// (0x00098b9b) main_mup_pane_g13

0x000c,

0xf3f6,	// (0x000a44d4) main_mup_pane_g_ParamLimits

0xf3f6,	// (0x000a44d4) main_mup_pane_g

0x3ad3,	// (0x00098bb1) main_mup_pane_t1_ParamLimits

0x3ad3,	// (0x00098bb1) main_mup_pane_t1

0x3af0,	// (0x00098bce) main_mup_pane_t2_ParamLimits

0x3af0,	// (0x00098bce) main_mup_pane_t2

0x3b0a,	// (0x00098be8) main_mup_pane_t3_ParamLimits

0x3b0a,	// (0x00098be8) main_mup_pane_t3

0x3b24,	// (0x00098c02) main_mup_pane_t4_ParamLimits

0x3b24,	// (0x00098c02) main_mup_pane_t4

0x3b36,	// (0x00098c14) main_mup_pane_t5_ParamLimits

0x3b36,	// (0x00098c14) main_mup_pane_t5

0x3b48,	// (0x00098c26) main_mup_pane_t6_ParamLimits

0x3b48,	// (0x00098c26) main_mup_pane_t6

0x0005,

0xf411,	// (0x000a44ef) main_mup_pane_t_ParamLimits

0xf411,	// (0x000a44ef) main_mup_pane_t

0x3b5e,	// (0x00098c3c) mup_progress_pane_ParamLimits

0x3b5e,	// (0x00098c3c) mup_progress_pane

0x3b6a,	// (0x00098c48) mup_visualizer_pane_ParamLimits

0x3b6a,	// (0x00098c48) mup_visualizer_pane

0x3ba8,	// (0x00098c86) mup_volume_pane_ParamLimits

0x3ba8,	// (0x00098c86) mup_volume_pane

0xa0b6,	// (0x0009f194) mup_visualizer_pane_g1_ParamLimits

0xa0b6,	// (0x0009f194) mup_visualizer_pane_g1

0xa0b6,	// (0x0009f194) mup_visualizer_pane_g2_ParamLimits

0xa0b6,	// (0x0009f194) mup_visualizer_pane_g2

0xa2ea,	// (0x0009f3c8) mup_visualizer_pane_g3_ParamLimits

0xa2ea,	// (0x0009f3c8) mup_visualizer_pane_g3

0x0002,

0xf41e,	// (0x000a44fc) mup_visualizer_pane_g_ParamLimits

0xf41e,	// (0x000a44fc) mup_visualizer_pane_g

0xed36,	// (0x000a3e14) mup_volume_pane_g1

0xa47c,	// (0x0009f55a) mup_volume_pane_g2

0x0001,

0xf425,	// (0x000a4503) mup_volume_pane_g

0xed36,	// (0x000a3e14) mup_progress_pane_g1

0xa485,	// (0x0009f563) mup_progress_pane_g2

0xa48e,	// (0x0009f56c) mup_progress_pane_g3

0x0002,

0xf42a,	// (0x000a4508) mup_progress_pane_g

0xe53b,	// (0x000a3619) bg_popup_window_pane_cp05

0xa497,	// (0x0009f575) heading_pane_cp02_ParamLimits

0xa497,	// (0x0009f575) heading_pane_cp02

0xa4b1,	// (0x0009f58f) list_popup_blid_pane

0xa4b9,	// (0x0009f597) list_blid_sat_info_pane_ParamLimits

0xa4b9,	// (0x0009f597) list_blid_sat_info_pane

0xa4cc,	// (0x0009f5aa) list_blid_sat_info_pane_g1

0xa4d4,	// (0x0009f5b2) list_blid_sat_info_pane_t1

0x3cb3,	// (0x00098d91) mup_equalizer_pane_ParamLimits

0x3cb3,	// (0x00098d91) mup_equalizer_pane

0x3cd4,	// (0x00098db2) mup_equalizer_pane_cp1_ParamLimits

0x3cd4,	// (0x00098db2) mup_equalizer_pane_cp1

0x3cf5,	// (0x00098dd3) mup_equalizer_pane_cp2_ParamLimits

0x3cf5,	// (0x00098dd3) mup_equalizer_pane_cp2

0x3d16,	// (0x00098df4) mup_equalizer_pane_cp3_ParamLimits

0x3d16,	// (0x00098df4) mup_equalizer_pane_cp3

0x3d37,	// (0x00098e15) mup_equalizer_pane_cp4_ParamLimits

0x3d37,	// (0x00098e15) mup_equalizer_pane_cp4

0x3d58,	// (0x00098e36) mup_equalizer_pane_cp5

0x3d6e,	// (0x00098e4c) mup_equalizer_pane_cp6

0x3d86,	// (0x00098e64) mup_equalizer_pane_cp7

0xb670,	// (0x000a074e) bg_popup_call_poc_act_pane_g9

0xb678,	// (0x000a0756) bg_popup_call_poc_act_pane_g10

0xb680,	// (0x000a075e) bg_popup_call_poc_act_pane_g11

0x000a,

0xe796,	// (0x000a3874) mup_scale_pane

0xed36,	// (0x000a3e14) mup_scale_pane_g1

0xa4e2,	// (0x0009f5c0) mup_scale_pane_g2

0x0006,

0xf446,	// (0x000a4524) mup_scale_pane_g

0xa506,	// (0x0009f5e4) msg_data_pane

0xa50e,	// (0x0009f5ec) scroll_pane_cp017

0x3db0,	// (0x00098e8e) bg_list_pane_cp04_ParamLimits

0x3db0,	// (0x00098e8e) bg_list_pane_cp04

0xa516,	// (0x0009f5f4) msg_data_pane_g1

0x3dd4,	// (0x00098eb2) msg_data_pane_g2

0x363d,	// (0x0009871b) msg_data_pane_g3

0x3ddc,	// (0x00098eba) msg_data_pane_g4

0x3de4,	// (0x00098ec2) msg_data_pane_g5

0x3dec,	// (0x00098eca) msg_data_pane_g6

0x3df4,	// (0x00098ed2) msg_data_pane_g7

0x0006,

0xf455,	// (0x000a4533) msg_data_pane_g

0x3dfc,	// (0x00098eda) msg_text_pane_ParamLimits

0x3dfc,	// (0x00098eda) msg_text_pane

0x3e3e,	// (0x00098f1c) qrid_highlight_pane_cp011_ParamLimits

0x3e3e,	// (0x00098f1c) qrid_highlight_pane_cp011

0xe53b,	// (0x000a3619) msg_body_pane

0xe53b,	// (0x000a3619) msg_header_pane

0xa51e,	// (0x0009f5fc) input_focus_pane_cp07

0x3e71,	// (0x00098f4f) msg_header_pane_t1_ParamLimits

0x3e71,	// (0x00098f4f) msg_header_pane_t1

0x3e83,	// (0x00098f61) msg_header_pane_t2_ParamLimits

0x3e83,	// (0x00098f61) msg_header_pane_t2

0x0001,

0xf469,	// (0x000a4547) msg_header_pane_t_ParamLimits

0xf469,	// (0x000a4547) msg_header_pane_t

0xa533,	// (0x0009f611) msg_body_pane_g1

0x3e95,	// (0x00098f73) msg_body_pane_t1_ParamLimits

0x3e95,	// (0x00098f73) msg_body_pane_t1

0x3ec6,	// (0x00098fa4) msg_body_pane_t2_ParamLimits

0x3ec6,	// (0x00098fa4) msg_body_pane_t2

0x3ed8,	// (0x00098fb6) msg_body_pane_t3_ParamLimits

0x3ed8,	// (0x00098fb6) msg_body_pane_t3

0x0002,

0xf46e,	// (0x000a454c) msg_body_pane_t_ParamLimits

0xf46e,	// (0x000a454c) msg_body_pane_t

0x3f3c,	// (0x0009901a) main_viewer_pane_g1_ParamLimits

0x3f3c,	// (0x0009901a) main_viewer_pane_g1

0x3f48,	// (0x00099026) main_viewer_pane_g2_ParamLimits

0x3f48,	// (0x00099026) main_viewer_pane_g2

0x3f54,	// (0x00099032) main_viewer_pane_g3_ParamLimits

0x3f54,	// (0x00099032) main_viewer_pane_g3

0x3f65,	// (0x00099043) main_viewer_pane_g4_ParamLimits

0x3f65,	// (0x00099043) main_viewer_pane_g4

0x3f76,	// (0x00099054) main_viewer_pane_g5_ParamLimits

0x3f76,	// (0x00099054) main_viewer_pane_g5

0x3f76,	// (0x00099054) main_viewer_pane_g7_ParamLimits

0x3f76,	// (0x00099054) main_viewer_pane_g7

0x9f53,	// (0x0009f031) main_viewer_pane_g8_ParamLimits

0x9f53,	// (0x0009f031) main_viewer_pane_g8

0x0007,

0xf47e,	// (0x000a455c) main_viewer_pane_g_ParamLimits

0xf47e,	// (0x000a455c) main_viewer_pane_g

0xa53b,	// (0x0009f619) viewer_content_pane_ParamLimits

0xa53b,	// (0x0009f619) viewer_content_pane

0x3fb4,	// (0x00099092) main_postcard_pane_g1_ParamLimits

0x3fb4,	// (0x00099092) main_postcard_pane_g1

0x3fc2,	// (0x000990a0) main_postcard_pane_g2_ParamLimits

0x3fc2,	// (0x000990a0) main_postcard_pane_g2

0x3fd0,	// (0x000990ae) main_postcard_pane_g3_ParamLimits

0x3fd0,	// (0x000990ae) main_postcard_pane_g3

0x0005,

0xf48f,	// (0x000a456d) main_postcard_pane_g_ParamLimits

0xf48f,	// (0x000a456d) main_postcard_pane_g

0x3fe0,	// (0x000990be) main_postcard_pane_g4

0xb852,	// (0x000a0930) smil_status_volume_pane_g2

0x400c,	// (0x000990ea) postcard_pane_ParamLimits

0x400c,	// (0x000990ea) postcard_pane

0xa0b6,	// (0x0009f194) postcard_pane_g1_ParamLimits

0xa0b6,	// (0x0009f194) postcard_pane_g1

0x403e,	// (0x0009911c) postcard_pane_g2_ParamLimits

0x403e,	// (0x0009911c) postcard_pane_g2

0x404a,	// (0x00099128) postcard_pane_g3_ParamLimits

0x404a,	// (0x00099128) postcard_pane_g3

0xa549,	// (0x0009f627) postcard_pane_g4_ParamLimits

0xa549,	// (0x0009f627) postcard_pane_g4

0x4056,	// (0x00099134) postcard_pane_g5_ParamLimits

0x4056,	// (0x00099134) postcard_pane_g5

0x4062,	// (0x00099140) postcard_pane_g6_ParamLimits

0x4062,	// (0x00099140) postcard_pane_g6

0xa557,	// (0x0009f635) postcard_pane_g7_ParamLimits

0xa557,	// (0x0009f635) postcard_pane_g7

0x0006,

0xf49c,	// (0x000a457a) postcard_pane_g_ParamLimits

0xf49c,	// (0x000a457a) postcard_pane_g

0x406e,	// (0x0009914c) main_mp2_pane_g1_ParamLimits

0x406e,	// (0x0009914c) main_mp2_pane_g1

0x407a,	// (0x00099158) main_mp2_pane_g2_ParamLimits

0x407a,	// (0x00099158) main_mp2_pane_g2

0x4086,	// (0x00099164) main_mp2_pane_g3_ParamLimits

0x4086,	// (0x00099164) main_mp2_pane_g3

0x0002,

0xf4ab,	// (0x000a4589) main_mp2_pane_g_ParamLimits

0xf4ab,	// (0x000a4589) main_mp2_pane_g

0x4092,	// (0x00099170) main_mp2_pane_t1_ParamLimits

0x4092,	// (0x00099170) main_mp2_pane_t1

0x40a9,	// (0x00099187) main_mp2_pane_t2_ParamLimits

0x40a9,	// (0x00099187) main_mp2_pane_t2

0x40bb,	// (0x00099199) main_mp2_pane_t3_ParamLimits

0x40bb,	// (0x00099199) main_mp2_pane_t3

0x0002,

0xf4b2,	// (0x000a4590) main_mp2_pane_t_ParamLimits

0xf4b2,	// (0x000a4590) main_mp2_pane_t

0xa565,	// (0x0009f643) pec_content_pane_ParamLimits

0xa565,	// (0x0009f643) pec_content_pane

0xf05b,	// (0x000a4139) scroll_pane_cp015

0xa577,	// (0x0009f655) pec_attribute_pane_ParamLimits

0xa577,	// (0x0009f655) pec_attribute_pane

0x40cd,	// (0x000991ab) pec_content_pane_g1_ParamLimits

0x40cd,	// (0x000991ab) pec_content_pane_g1

0xa587,	// (0x0009f665) pec_content_pane_t1_ParamLimits

0xa587,	// (0x0009f665) pec_content_pane_t1

0xa599,	// (0x0009f677) pec_content_pane_t2_ParamLimits

0xa599,	// (0x0009f677) pec_content_pane_t2

0x0001,

0xf4b9,	// (0x000a4597) pec_content_pane_t_ParamLimits

0xf4b9,	// (0x000a4597) pec_content_pane_t

0x40d9,	// (0x000991b7) list_single_graphic_pane_cp01_ParamLimits

0x40d9,	// (0x000991b7) list_single_graphic_pane_cp01

0xe796,	// (0x000a3874) bg_popup_sub_pane_cp04

0xa5ab,	// (0x0009f689) popup_mup_playback_window_g1

0xa5b7,	// (0x0009f695) popup_mup_playback_window_t1

0xa5cc,	// (0x0009f6aa) popup_mup_playback_window_t2

0x0001,

0xf4be,	// (0x000a459c) popup_mup_playback_window_t

0xa603,	// (0x0009f6e1) main_image_pane_g1_ParamLimits

0xa603,	// (0x0009f6e1) main_image_pane_g1

0xa646,	// (0x0009f724) scroll_pane_cp018_ParamLimits

0xa646,	// (0x0009f724) scroll_pane_cp018

0xa65e,	// (0x0009f73c) scroll_pane_cp016_ParamLimits

0xa65e,	// (0x0009f73c) scroll_pane_cp016

0x4179,	// (0x00099257) smil2_image_pane_ParamLimits

0x4179,	// (0x00099257) smil2_image_pane

0x41ad,	// (0x0009928b) smil2_root_pane_ParamLimits

0x41ad,	// (0x0009928b) smil2_root_pane

0x41d9,	// (0x000992b7) smil2_text_pane_ParamLimits

0x41d9,	// (0x000992b7) smil2_text_pane

0xe53b,	// (0x000a3619) bg_list_pane_cp06

0xa69a,	// (0x0009f778) grid_radio_pane

0xe53b,	// (0x000a3619) bg_popup_window_pane_cp06

0xa6a2,	// (0x0009f780) main_fmradio_pane_t1

0xa12d,	// (0x0009f20b) heading_pane_cp04

0xa6b0,	// (0x0009f78e) main_fmradio_pane_t2

0xb688,	// (0x000a0766) popup_cale_lunar_info_window_g1

0xa6be,	// (0x0009f79c) main_fmradio_pane_t3

0xb690,	// (0x000a076e) popup_cale_lunar_info_window_g2

0xa6cc,	// (0x0009f7aa) main_fmradio_pane_t4

0x0001,

0xa6da,	// (0x0009f7b8) main_fmradio_pane_t5

0x0004,

0xf592,	// (0x000a4670) popup_cale_lunar_info_window_g

0xf4d3,	// (0x000a45b1) main_fmradio_pane_t

0xa6e8,	// (0x0009f7c6) wait_bar_pane_cp03

0xa6f0,	// (0x0009f7ce) cell_fmradio_pane_ParamLimits

0xa6f0,	// (0x0009f7ce) cell_fmradio_pane

0xa557,	// (0x0009f635) cell_fmradio_pane_g1_ParamLimits

0xa557,	// (0x0009f635) cell_fmradio_pane_g1

0xe53b,	// (0x000a3619) grid_highlight_pane_cp011

0xa703,	// (0x0009f7e1) poc_content_pane_ParamLimits

0xa703,	// (0x0009f7e1) poc_content_pane

0xa715,	// (0x0009f7f3) scroll_pane_cp019

0x4219,	// (0x000992f7) popup_call_poc_act_window_ParamLimits

0x4219,	// (0x000992f7) popup_call_poc_act_window

0x4226,	// (0x00099304) popup_call_poc_inact_window_ParamLimits

0x4226,	// (0x00099304) popup_call_poc_inact_window

0xf569,	// (0x000a4647) bg_popup_call_poc_act_pane_g

0xb600,	// (0x000a06de) bg_popup_call_poc_inact_pane_g1

0xb608,	// (0x000a06e6) bg_popup_call_poc_inact_pane_g2

0xa71d,	// (0x0009f7fb) popup_call_poc_act_window_g2

0xb610,	// (0x000a06ee) bg_popup_call_poc_inact_pane_g3

0xb618,	// (0x000a06f6) bg_popup_call_poc_inact_pane_g4

0xb620,	// (0x000a06fe) bg_popup_call_poc_inact_pane_g5

0xa725,	// (0x0009f803) popup_call_poc_act_window_t1_ParamLimits

0xa725,	// (0x0009f803) popup_call_poc_act_window_t1

0xa74d,	// (0x0009f82b) popup_call_poc_act_window_t2_ParamLimits

0xa74d,	// (0x0009f82b) popup_call_poc_act_window_t2

0xa775,	// (0x0009f853) popup_call_poc_act_window_t3_ParamLimits

0xa775,	// (0x0009f853) popup_call_poc_act_window_t3

0xa79d,	// (0x0009f87b) popup_call_poc_act_window_t4_ParamLimits

0xa79d,	// (0x0009f87b) popup_call_poc_act_window_t4

0x0003,

0xf4de,	// (0x000a45bc) popup_call_poc_act_window_t_ParamLimits

0xf4de,	// (0x000a45bc) popup_call_poc_act_window_t

0xb628,	// (0x000a0706) bg_popup_call_poc_inact_pane_g6

0xb630,	// (0x000a070e) bg_popup_call_poc_inact_pane_g7

0xb638,	// (0x000a0716) bg_popup_call_poc_inact_pane_g8

0xa7af,	// (0x0009f88d) popup_call_poc_inact_window_g2

0xb640,	// (0x000a071e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x000a4634) bg_popup_call_poc_inact_pane_g

0xa7b7,	// (0x0009f895) popup_call_poc_inact_window_t1_ParamLimits

0xa7b7,	// (0x0009f895) popup_call_poc_inact_window_t1

0xa7cc,	// (0x0009f8aa) popup_call_poc_inact_window_t2_ParamLimits

0xa7cc,	// (0x0009f8aa) popup_call_poc_inact_window_t2

0xa7e1,	// (0x0009f8bf) popup_call_poc_inact_window_t3_ParamLimits

0xa7e1,	// (0x0009f8bf) popup_call_poc_inact_window_t3

0x0002,

0xf4e7,	// (0x000a45c5) popup_call_poc_inact_window_t_ParamLimits

0xf4e7,	// (0x000a45c5) popup_call_poc_inact_window_t

0xb7c5,	// (0x000a08a3) context_pane_ParamLimits

0x485c,	// (0x0009993a) signal_pane_ParamLimits

0xa3b5,	// (0x0009f493) main_call2_pane

0x47d5,	// (0x000998b3) popup_phob_thumbnail2_window_ParamLimits

0x47d5,	// (0x000998b3) popup_phob_thumbnail2_window

0x3eea,	// (0x00098fc8) aid_hotspot_pointer_arrow_pane

0x3ef2,	// (0x00098fd0) aid_hotspot_pointer_hand_pane

0x454c,	// (0x0009962a) phob_pre_status_pane_g5

0x1d47,	// (0x00096e25) cams_zoom_pane_ParamLimits

0x1d53,	// (0x00096e31) image_vga_pane_ParamLimits

0x1d62,	// (0x00096e40) main_camera_pane_g1_ParamLimits

0x1d70,	// (0x00096e4e) main_camera_pane_g2_ParamLimits

0x1d7c,	// (0x00096e5a) main_camera_pane_g3_ParamLimits

0x1d88,	// (0x00096e66) main_camera_pane_g4_ParamLimits

0x1d94,	// (0x00096e72) main_camera_pane_g5_ParamLimits

0x1da0,	// (0x00096e7e) main_camera_pane_g6_ParamLimits

0x1dac,	// (0x00096e8a) main_camera_pane_g7_ParamLimits

0xf1f9,	// (0x000a42d7) main_camera_pane_g_ParamLimits

0x1db8,	// (0x00096e96) main_camera_pane_t1_ParamLimits

0x1dca,	// (0x00096ea8) main_camera_pane_t2_ParamLimits

0xf20a,	// (0x000a42e8) main_camera_pane_t_ParamLimits

0xe796,	// (0x000a3874) bg_popup_preview_window_pane_cp01_ParamLimits

0xe796,	// (0x000a3874) bg_popup_preview_window_pane_cp01

0xa7f6,	// (0x0009f8d4) popup_phob_thumbnail2_window_g1_ParamLimits

0xa7f6,	// (0x0009f8d4) popup_phob_thumbnail2_window_g1

0xe53b,	// (0x000a3619) call2_cli_visual_pane

0x4242,	// (0x00099320) popup_call2_audio_conf_window_ParamLimits

0x4242,	// (0x00099320) popup_call2_audio_conf_window

0x4257,	// (0x00099335) popup_call2_audio_first_window_ParamLimits

0x4257,	// (0x00099335) popup_call2_audio_first_window

0x42f5,	// (0x000993d3) popup_call2_audio_in_window_ParamLimits

0x42f5,	// (0x000993d3) popup_call2_audio_in_window

0x4337,	// (0x00099415) popup_call2_audio_out_window_ParamLimits

0x4337,	// (0x00099415) popup_call2_audio_out_window

0x4399,	// (0x00099477) popup_call2_audio_second_window_ParamLimits

0x4399,	// (0x00099477) popup_call2_audio_second_window

0x43f7,	// (0x000994d5) popup_call2_audio_wait_window_ParamLimits

0x43f7,	// (0x000994d5) popup_call2_audio_wait_window

0xe53b,	// (0x000a3619) bg_popup_call2_act_pane_cp03

0xe778,	// (0x000a3856) list_conf_pane_cp

0xa802,	// (0x0009f8e0) popup_call2_audio_conf_window_t1

0xa810,	// (0x0009f8ee) list_single_graphic_popup_conf2_pane_ParamLimits

0xa810,	// (0x0009f8ee) list_single_graphic_popup_conf2_pane

0xa1c1,	// (0x0009f29f) list_highlight_pane_cp04

0xa823,	// (0x0009f901) list_single_graphic_popup_conf2_pane_g1

0xa1d2,	// (0x0009f2b0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4ee,	// (0x000a45cc) list_single_graphic_popup_conf2_pane_g

0xa82d,	// (0x0009f90b) list_single_graphic_popup_conf2_pane_t1

0xa83b,	// (0x0009f919) bg_popup_call2_act_pane_cp01_ParamLimits

0xa83b,	// (0x0009f919) bg_popup_call2_act_pane_cp01

0xa8c5,	// (0x0009f9a3) call_type_pane_cp05_ParamLimits

0xa8c5,	// (0x0009f9a3) call_type_pane_cp05

0xa919,	// (0x0009f9f7) popup_call2_audio_second_window_g1_ParamLimits

0xa919,	// (0x0009f9f7) popup_call2_audio_second_window_g1

0xa96d,	// (0x0009fa4b) popup_call2_audio_second_window_g2_ParamLimits

0xa96d,	// (0x0009fa4b) popup_call2_audio_second_window_g2

0x0002,

0xf4f3,	// (0x000a45d1) popup_call2_audio_second_window_g_ParamLimits

0xf4f3,	// (0x000a45d1) popup_call2_audio_second_window_g

0xa9d2,	// (0x0009fab0) popup_call2_audio_second_window_t1_ParamLimits

0xa9d2,	// (0x0009fab0) popup_call2_audio_second_window_t1

0xaa8d,	// (0x0009fb6b) popup_call2_audio_second_window_t2_ParamLimits

0xaa8d,	// (0x0009fb6b) popup_call2_audio_second_window_t2

0xaae0,	// (0x0009fbbe) popup_call2_audio_second_window_t3_ParamLimits

0xaae0,	// (0x0009fbbe) popup_call2_audio_second_window_t3

0x0003,

0xf4fa,	// (0x000a45d8) popup_call2_audio_second_window_t_ParamLimits

0xf4fa,	// (0x000a45d8) popup_call2_audio_second_window_t

0xe53b,	// (0x000a3619) bg_popup_call2_in_pane_cp02

0xe545,	// (0x000a3623) call_type_pane_cp04

0xe54d,	// (0x000a362b) popup_call2_audio_wait_window_g1

0xe555,	// (0x000a3633) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x000a41e0) popup_call2_audio_wait_window_g

0xe55d,	// (0x000a363b) popup_call2_audio_wait_window_t3

0xabd3,	// (0x0009fcb1) bg_popup_call2_act_pane_ParamLimits

0xabd3,	// (0x0009fcb1) bg_popup_call2_act_pane

0xac93,	// (0x0009fd71) call_type_pane_cp03_ParamLimits

0xac93,	// (0x0009fd71) call_type_pane_cp03

0xacf7,	// (0x0009fdd5) popup_call2_audio_first_window_g1_ParamLimits

0xacf7,	// (0x0009fdd5) popup_call2_audio_first_window_g1

0xad67,	// (0x0009fe45) popup_call2_audio_first_window_g2_ParamLimits

0xad67,	// (0x0009fe45) popup_call2_audio_first_window_g2

0xa0b6,	// (0x0009f194) popup_call2_audio_first_window_g3_ParamLimits

0xa0b6,	// (0x0009f194) popup_call2_audio_first_window_g3

0x0004,

0xf503,	// (0x000a45e1) popup_call2_audio_first_window_g_ParamLimits

0xf503,	// (0x000a45e1) popup_call2_audio_first_window_g

0xae45,	// (0x0009ff23) popup_call2_audio_first_window_t1_ParamLimits

0xae45,	// (0x0009ff23) popup_call2_audio_first_window_t1

0xaf48,	// (0x000a0026) popup_call2_audio_first_window_t4_ParamLimits

0xaf48,	// (0x000a0026) popup_call2_audio_first_window_t4

0xb02b,	// (0x000a0109) popup_call2_audio_first_window_t5_ParamLimits

0xb02b,	// (0x000a0109) popup_call2_audio_first_window_t5

0x0003,

0xf50e,	// (0x000a45ec) popup_call2_audio_first_window_t_ParamLimits

0xf50e,	// (0x000a45ec) popup_call2_audio_first_window_t

0xe78e,	// (0x000a386c) bg_popup_call2_act_pane_g1

0xb698,	// (0x000a0776) popup_cale_lunar_info_window_t1

0xb6a6,	// (0x000a0784) popup_cale_lunar_info_window_t2

0xb6b4,	// (0x000a0792) popup_cale_lunar_info_window_t3

0xe53b,	// (0x000a3619) bg_popup_call2_bubble_pane

0xb12c,	// (0x000a020a) bg_popup_call2_in_pane_cp01_ParamLimits

0xb12c,	// (0x000a020a) bg_popup_call2_in_pane_cp01

0xe1ed,	// (0x000a32cb) call_type_pane_cp02

0xb174,	// (0x000a0252) popup_call2_audio_out_window_g1_ParamLimits

0xb174,	// (0x000a0252) popup_call2_audio_out_window_g1

0xb1a0,	// (0x000a027e) popup_call2_audio_out_window_g2_ParamLimits

0xb1a0,	// (0x000a027e) popup_call2_audio_out_window_g2

0xb1c8,	// (0x000a02a6) popup_call2_audio_out_window_g3_ParamLimits

0xb1c8,	// (0x000a02a6) popup_call2_audio_out_window_g3

0x0003,

0xf517,	// (0x000a45f5) popup_call2_audio_out_window_g_ParamLimits

0xf517,	// (0x000a45f5) popup_call2_audio_out_window_g

0xb203,	// (0x000a02e1) popup_call2_audio_out_window_t1_ParamLimits

0xb203,	// (0x000a02e1) popup_call2_audio_out_window_t1

0xb262,	// (0x000a0340) popup_call2_audio_out_window_t2_ParamLimits

0xb262,	// (0x000a0340) popup_call2_audio_out_window_t2

0xb2b6,	// (0x000a0394) popup_call2_audio_out_window_t3_ParamLimits

0xb2b6,	// (0x000a0394) popup_call2_audio_out_window_t3

0xb2cc,	// (0x000a03aa) popup_call2_audio_out_window_t4_ParamLimits

0xb2cc,	// (0x000a03aa) popup_call2_audio_out_window_t4

0xb2e2,	// (0x000a03c0) popup_call2_audio_out_window_t5_ParamLimits

0xb2e2,	// (0x000a03c0) popup_call2_audio_out_window_t5

0x0005,

0xf520,	// (0x000a45fe) popup_call2_audio_out_window_t_ParamLimits

0xf520,	// (0x000a45fe) popup_call2_audio_out_window_t

0xb346,	// (0x000a0424) bg_popup_call2_in_pane_ParamLimits

0xb346,	// (0x000a0424) bg_popup_call2_in_pane

0xb3a2,	// (0x000a0480) popup_call2_audio_in_window_g1_ParamLimits

0xb3a2,	// (0x000a0480) popup_call2_audio_in_window_g1

0xb3da,	// (0x000a04b8) popup_call2_audio_in_window_g2_ParamLimits

0xb3da,	// (0x000a04b8) popup_call2_audio_in_window_g2

0xb412,	// (0x000a04f0) popup_call2_audio_in_window_g3_ParamLimits

0xb412,	// (0x000a04f0) popup_call2_audio_in_window_g3

0x0003,

0xf52d,	// (0x000a460b) popup_call2_audio_in_window_g_ParamLimits

0xf52d,	// (0x000a460b) popup_call2_audio_in_window_g

0xb46a,	// (0x000a0548) popup_call2_audio_in_window_t1_ParamLimits

0xb46a,	// (0x000a0548) popup_call2_audio_in_window_t1

0xb4ea,	// (0x000a05c8) popup_call2_audio_in_window_t2_ParamLimits

0xb4ea,	// (0x000a05c8) popup_call2_audio_in_window_t2

0xb56a,	// (0x000a0648) popup_call2_audio_in_window_t3_ParamLimits

0xb56a,	// (0x000a0648) popup_call2_audio_in_window_t3

0xb584,	// (0x000a0662) popup_call2_audio_in_window_t4_ParamLimits

0xb584,	// (0x000a0662) popup_call2_audio_in_window_t4

0xb596,	// (0x000a0674) popup_call2_audio_in_window_t5_ParamLimits

0xb596,	// (0x000a0674) popup_call2_audio_in_window_t5

0xb5ab,	// (0x000a0689) popup_call2_audio_in_window_t6_ParamLimits

0xb5ab,	// (0x000a0689) popup_call2_audio_in_window_t6

0x0005,

0xf536,	// (0x000a4614) popup_call2_audio_in_window_t_ParamLimits

0xf536,	// (0x000a4614) popup_call2_audio_in_window_t

0xe78e,	// (0x000a386c) bg_popup_call2_in_pane_g1

0xb6c2,	// (0x000a07a0) popup_cale_lunar_info_window_t4

0x0003,

0xf597,	// (0x000a4675) popup_cale_lunar_info_window_t

0xe796,	// (0x000a3874) bg_popup_call2_rect_pane_ParamLimits

0xe796,	// (0x000a3874) bg_popup_call2_rect_pane

0xe53b,	// (0x000a3619) call2_cli_visual_graphic_pane

0xe53b,	// (0x000a3619) call2_cli_visual_text_pane

0x490a,	// (0x000999e8) smil_status_volume_pane_g3

0x0002,

0xed36,	// (0x000a3e14) call2_cli_visual_graphic_pane_g1

0xed36,	// (0x000a3e14) call2_cli_visual_graphic_pane_g2

0xed36,	// (0x000a3e14) call2_cli_visual_graphic_pane_g3

0x0002,

0x03fa,	// (0x000954d8) call2_cli_visual_graphic_pane_g

0xb5c0,	// (0x000a069e) bg_popup_call2_rect_pane_g1

0xedd4,	// (0x000a3eb2) bg_popup_call2_rect_pane_g2

0xb5c8,	// (0x000a06a6) bg_popup_call2_rect_pane_g3

0xb5d0,	// (0x000a06ae) bg_popup_call2_rect_pane_g4

0xb5d8,	// (0x000a06b6) bg_popup_call2_rect_pane_g5

0xb5e0,	// (0x000a06be) bg_popup_call2_rect_pane_g6

0xb5e8,	// (0x000a06c6) bg_popup_call2_rect_pane_g7

0xb5f0,	// (0x000a06ce) bg_popup_call2_rect_pane_g8

0xb5f8,	// (0x000a06d6) bg_popup_call2_rect_pane_g9

0x0008,

0xf543,	// (0x000a4621) bg_popup_call2_rect_pane_g

0xb600,	// (0x000a06de) bg_popup_call2_bubble_pane_g1

0xb608,	// (0x000a06e6) bg_popup_call2_bubble_pane_g2

0xb610,	// (0x000a06ee) bg_popup_call2_bubble_pane_g3

0xb618,	// (0x000a06f6) bg_popup_call2_bubble_pane_g4

0xb620,	// (0x000a06fe) bg_popup_call2_bubble_pane_g5

0xb628,	// (0x000a0706) bg_popup_call2_bubble_pane_g6

0xb630,	// (0x000a070e) bg_popup_call2_bubble_pane_g7

0xb638,	// (0x000a0716) bg_popup_call2_bubble_pane_g8

0xb640,	// (0x000a071e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf556,	// (0x000a4634) bg_popup_call2_bubble_pane_g

0x1779,	// (0x00096857) aid_cale_week_size_cell_pane

0x1ddc,	// (0x00096eba) aid_cams_cif_uncrop_pane_ParamLimits

0x1ddc,	// (0x00096eba) aid_cams_cif_uncrop_pane

0x1f37,	// (0x00097015) aid_cams_size_cell_ParamLimits

0x1f37,	// (0x00097015) aid_cams_size_cell

0x1f43,	// (0x00097021) grid_cams_pane_ParamLimits

0x1f51,	// (0x0009702f) linegrid_cams_pane_ParamLimits

0x213c,	// (0x0009721a) call_video_pane_t1

0x215d,	// (0x0009723b) call_video_pane_t2

0x0001,

0xf24f,	// (0x000a432d) call_video_pane_t

0x26cc,	// (0x000977aa) aid_cale_month_size_cell_pane_ParamLimits

0x26cc,	// (0x000977aa) aid_cale_month_size_cell_pane

0xf5e0,	// (0x000a46be) smil_status_volume_pane_g

0x4917,	// (0x000999f5) volume_smil_pane_ParamLimits

0x0eda,	// (0x00095fb8) aid_popup2_width_pane

0x166d,	// (0x0009674b) cell_qdial_pane_g4_ParamLimits

0x166d,	// (0x0009674b) cell_qdial_pane_g4

0x37a3,	// (0x00098881) aid_blid_cardinal_pane_ParamLimits

0x37b3,	// (0x00098891) aid_blid_destination_pane_ParamLimits

0x37b3,	// (0x00098891) aid_blid_destination_pane

0xe796,	// (0x000a3874) bg_popup_call_poc_act_pane_ParamLimits

0xe796,	// (0x000a3874) bg_popup_call_poc_act_pane

0xe796,	// (0x000a3874) bg_popup_call_poc_inact_pane_ParamLimits

0xe796,	// (0x000a3874) bg_popup_call_poc_inact_pane

0xb648,	// (0x000a0726) bg_popup_call_poc_act_pane_g1

0xb650,	// (0x000a072e) bg_popup_call_poc_act_pane_g2

0xb658,	// (0x000a0736) bg_popup_call_poc_act_pane_g3

0xb618,	// (0x000a06f6) bg_popup_call_poc_act_pane_g4

0xb620,	// (0x000a06fe) bg_popup_call_poc_act_pane_g5

0xb660,	// (0x000a073e) bg_popup_call_poc_act_pane_g6

0xb630,	// (0x000a070e) bg_popup_call_poc_act_pane_g7

0xb668,	// (0x000a0746) bg_popup_call_poc_act_pane_g8

0xe53b,	// (0x000a3619) main_usb_pane

0x470e,	// (0x000997ec) popup_cale_lunar_info_window

0x247c,	// (0x0009755a) im_reading_pane_t1_ParamLimits

0xefb3,	// (0x000a4091) list_im_pane_ParamLimits

0xefc4,	// (0x000a40a2) scroll_pane_cp07_ParamLimits

0xe53b,	// (0x000a3619) grid_highlight_pane_cp012

0xe796,	// (0x000a3874) mup_scale_pane_ParamLimits

0xa0b6,	// (0x0009f194) main_usb_pane_g1_ParamLimits

0xa0b6,	// (0x0009f194) main_usb_pane_g1

0x446f,	// (0x0009954d) main_usb_pane_g2_ParamLimits

0x446f,	// (0x0009954d) main_usb_pane_g2

0x0001,

0xf580,	// (0x000a465e) main_usb_pane_g_ParamLimits

0xf580,	// (0x000a465e) main_usb_pane_g

0x447b,	// (0x00099559) main_usb_pane_t1_ParamLimits

0x447b,	// (0x00099559) main_usb_pane_t1

0x448d,	// (0x0009956b) main_usb_pane_t2_ParamLimits

0x448d,	// (0x0009956b) main_usb_pane_t2

0x449f,	// (0x0009957d) main_usb_pane_t3_ParamLimits

0x449f,	// (0x0009957d) main_usb_pane_t3

0x44b1,	// (0x0009958f) main_usb_pane_t4_ParamLimits

0x44b1,	// (0x0009958f) main_usb_pane_t4

0x44c3,	// (0x000995a1) main_usb_pane_t5_ParamLimits

0x44c3,	// (0x000995a1) main_usb_pane_t5

0x44d5,	// (0x000995b3) main_usb_pane_t6_ParamLimits

0x44d5,	// (0x000995b3) main_usb_pane_t6

0x0005,

0xf585,	// (0x000a4663) main_usb_pane_t_ParamLimits

0x3749,	// (0x00098827) aid_text_placing

0x3755,	// (0x00098833) main_location2_pane_t1_ParamLimits

0x3769,	// (0x00098847) main_location2_pane_t2_ParamLimits

0x377d,	// (0x0009885b) main_location2_pane_t3_ParamLimits

0x3791,	// (0x0009886f) main_location2_pane_t4_ParamLimits

0x3791,	// (0x0009886f) main_location2_pane_t4

0xf3ab,	// (0x000a4489) main_location2_pane_t_ParamLimits

0xe7d2,	// (0x000a38b0) find_pinb_pane_g2_ParamLimits

0xe7d2,	// (0x000a38b0) find_pinb_pane_g2

0x0001,

0xf128,	// (0x000a4206) find_pinb_pane_g_ParamLimits

0xf128,	// (0x000a4206) find_pinb_pane_g

0xe7de,	// (0x000a38bc) find_pinb_pane_t1_ParamLimits

0xe7f0,	// (0x000a38ce) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x000a420b) find_pinb_pane_t_ParamLimits

0xe53b,	// (0x000a3619) main_call3_pane

0x2c40,	// (0x00097d1e) cale_month_day_heading_pane_t1_ParamLimits

0x2cc6,	// (0x00097da4) cale_month_day_heading_pane_t2_ParamLimits

0x2d57,	// (0x00097e35) cale_month_day_heading_pane_t3_ParamLimits

0x2de8,	// (0x00097ec6) cale_month_day_heading_pane_t4_ParamLimits

0x2e79,	// (0x00097f57) cale_month_day_heading_pane_t5_ParamLimits

0x2f0a,	// (0x00097fe8) cale_month_day_heading_pane_t6_ParamLimits

0x2fa7,	// (0x00098085) cale_month_day_heading_pane_t7_ParamLimits

0xf287,	// (0x000a4365) cale_month_day_heading_pane_t_ParamLimits

0x9e19,	// (0x0009eef7) smil_status_volume_pane

0x4026,	// (0x00099104) postcard_address_pane_ParamLimits

0x4026,	// (0x00099104) postcard_address_pane

0x4032,	// (0x00099110) postcard_message_pane_ParamLimits

0x4032,	// (0x00099110) postcard_message_pane

0x4436,	// (0x00099514) call2_cli_visual_pane_t1_ParamLimits

0x4436,	// (0x00099514) call2_cli_visual_pane_t1

0x4a6c,	// (0x00099b4a) postcard_message_pane_t1_ParamLimits

0x4a6c,	// (0x00099b4a) postcard_message_pane_t1

0x4a55,	// (0x00099b33) postcard_address_pane_t1_ParamLimits

0x4a55,	// (0x00099b33) postcard_address_pane_t1

0x4a46,	// (0x00099b24) popup_call3_audio_in_window_ParamLimits

0x4a46,	// (0x00099b24) popup_call3_audio_in_window

0x492c,	// (0x00099a0a) bg_popup_call3_in_pane_ParamLimits

0x492c,	// (0x00099a0a) bg_popup_call3_in_pane

0x498c,	// (0x00099a6a) popup_call3_audio_in_window_g1_ParamLimits

0x498c,	// (0x00099a6a) popup_call3_audio_in_window_g1

0x49a4,	// (0x00099a82) popup_call3_audio_in_window_g2_ParamLimits

0x49a4,	// (0x00099a82) popup_call3_audio_in_window_g2

0x49bc,	// (0x00099a9a) popup_call3_audio_in_window_g3_ParamLimits

0x49bc,	// (0x00099a9a) popup_call3_audio_in_window_g3

0x0003,

0xf5e7,	// (0x000a46c5) popup_call3_audio_in_window_g_ParamLimits

0xf5e7,	// (0x000a46c5) popup_call3_audio_in_window_g

0x49e4,	// (0x00099ac2) popup_call3_audio_in_window_t1_ParamLimits

0x49e4,	// (0x00099ac2) popup_call3_audio_in_window_t1

0x4a0c,	// (0x00099aea) popup_call3_audio_in_window_t2_ParamLimits

0x4a0c,	// (0x00099aea) popup_call3_audio_in_window_t2

0x4a34,	// (0x00099b12) popup_call3_audio_in_window_t3_ParamLimits

0x4a34,	// (0x00099b12) popup_call3_audio_in_window_t3

0x0002,

0xf5f0,	// (0x000a46ce) popup_call3_audio_in_window_t_ParamLimits

0xf5f0,	// (0x000a46ce) popup_call3_audio_in_window_t

0xa3b5,	// (0x0009f493) bg_popup_call3_rect_pane

0xb5c0,	// (0x000a069e) bg_popup_call3_rect_pane_g1

0xedd4,	// (0x000a3eb2) bg_popup_call3_rect_pane_g2

0xb5c8,	// (0x000a06a6) bg_popup_call3_rect_pane_g3

0xb5d0,	// (0x000a06ae) bg_popup_call3_rect_pane_g4

0xb5d8,	// (0x000a06b6) bg_popup_call3_rect_pane_g5

0xb5e0,	// (0x000a06be) bg_popup_call3_rect_pane_g6

0xb5e8,	// (0x000a06c6) bg_popup_call3_rect_pane_g7

0x3bc3,	// (0x00098ca1) mup_visualizer_osc_pane

0xa474,	// (0x0009f552) mup_visualizer_spec_pane

0x494c,	// (0x00099a2a) call3_video_qcif_pane_ParamLimits

0x494c,	// (0x00099a2a) call3_video_qcif_pane

0x495c,	// (0x00099a3a) call3_video_qcif_uncrop_pane_ParamLimits

0x495c,	// (0x00099a3a) call3_video_qcif_uncrop_pane

0x496a,	// (0x00099a48) call3_video_subqcif_pane_ParamLimits

0x496a,	// (0x00099a48) call3_video_subqcif_pane

0x497c,	// (0x00099a5a) call3_video_subqcif_uncrop_pane_ParamLimits

0x497c,	// (0x00099a5a) call3_video_subqcif_uncrop_pane

0x49d4,	// (0x00099ab2) popup_call3_audio_in_window_g4_ParamLimits

0x49d4,	// (0x00099ab2) popup_call3_audio_in_window_g4

0x48f7,	// (0x000999d5) mup_spec_half_pane

0x4900,	// (0x000999de) mup_spec_half_pane_cp

0xb825,	// (0x000a0903) mup_osc_middle_pane

0xb82e,	// (0x000a090c) mup_visualizer_osc_pane_g1

0x48d8,	// (0x000999b6) mup_spec_bar_pane_ParamLimits

0x48d8,	// (0x000999b6) mup_spec_bar_pane

0xb812,	// (0x000a08f0) mup_spec_bar_pane_g1

0xb81c,	// (0x000a08fa) mup_spec_bar_pane_g2

0x0001,

0xf5db,	// (0x000a46b9) mup_spec_bar_pane_g

0x1779,	// (0x00096857) aid_cale_week_size_cell_pane_ParamLimits

0x178e,	// (0x0009686c) bg_cale_heading_pane_ParamLimits

0xee11,	// (0x000a3eef) bg_cale_pane_cp01_ParamLimits

0x17b0,	// (0x0009688e) cale_week_corner_pane_ParamLimits

0x17ca,	// (0x000968a8) cale_week_day_heading_pane_ParamLimits

0x17ec,	// (0x000968ca) cale_week_scroll_pane_g1_ParamLimits

0x1809,	// (0x000968e7) cale_week_scroll_pane_g2_ParamLimits

0x181c,	// (0x000968fa) cale_week_scroll_pane_g3_ParamLimits

0x182f,	// (0x0009690d) cale_week_scroll_pane_g4_ParamLimits

0x1842,	// (0x00096920) cale_week_scroll_pane_g5_ParamLimits

0x1855,	// (0x00096933) cale_week_scroll_pane_g6_ParamLimits

0x1868,	// (0x00096946) cale_week_scroll_pane_g7_ParamLimits

0x187b,	// (0x00096959) cale_week_scroll_pane_g8_ParamLimits

0x1890,	// (0x0009696e) cale_week_scroll_pane_g9_ParamLimits

0x18a3,	// (0x00096981) cale_week_scroll_pane_g10_ParamLimits

0x18b6,	// (0x00096994) cale_week_scroll_pane_g11_ParamLimits

0x18c9,	// (0x000969a7) cale_week_scroll_pane_g12_ParamLimits

0x18e0,	// (0x000969be) cale_week_scroll_pane_g13_ParamLimits

0x18fb,	// (0x000969d9) cale_week_scroll_pane_g14_ParamLimits

0x1916,	// (0x000969f4) cale_week_scroll_pane_g15_ParamLimits

0xf1a2,	// (0x000a4280) cale_week_scroll_pane_g_ParamLimits

0x1931,	// (0x00096a0f) cale_week_time_pane_ParamLimits

0x1946,	// (0x00096a24) grid_cale_week_pane_ParamLimits

0xee2f,	// (0x000a3f0d) listscroll_cale_week_pane_t1

0xee41,	// (0x000a3f1f) scroll_pane_cp08_ParamLimits

0x2735,	// (0x00097813) cale_month_corner_pane_ParamLimits

0x9def,	// (0x0009eecd) cale_month_pane_t1

0x2bd9,	// (0x00097cb7) cale_month_week_pane_ParamLimits

0xa0b6,	// (0x0009f194) popup_call_status_window_g1_ParamLimits

0x358f,	// (0x0009866d) popup_call_status_window_g2_ParamLimits

0x359b,	// (0x00098679) popup_call_status_window_g3_ParamLimits

0xf332,	// (0x000a4410) popup_call_status_window_g_ParamLimits

0xa11d,	// (0x0009f1fb) aid_call2_pane

0x3e63,	// (0x00098f41) msg_header_pane_g1

0x4026,	// (0x00099104) postcard_address2_pane_ParamLimits

0x4026,	// (0x00099104) postcard_address2_pane

0x4032,	// (0x00099110) postcard_message2_pane_ParamLimits

0x4032,	// (0x00099110) postcard_message2_pane

0x486a,	// (0x00099948) message2_row_pane_ParamLimits

0x486a,	// (0x00099948) message2_row_pane

0x4887,	// (0x00099965) address2_row_pane_ParamLimits

0x4887,	// (0x00099965) address2_row_pane

0xb7e0,	// (0x000a08be) postcard_message2_row_pane_g1

0xb7e8,	// (0x000a08c6) postcard_message2_row_pane_t1

0xb7e0,	// (0x000a08be) address2_row_pane_g1

0xb7e8,	// (0x000a08c6) address2_row_pane_t1

0x1ca6,	// (0x00096d84) aid_size_cell_vorec

0xe53b,	// (0x000a3619) main_rss_pane

0x489a,	// (0x00099978) rss_list_single_pane_ParamLimits

0x489a,	// (0x00099978) rss_list_single_pane

0xb7f6,	// (0x000a08d4) rss_list_single_pane_t1

0xb804,	// (0x000a08e2) rss_list_single_pane_t2

0x0001,

0xf5d6,	// (0x000a46b4) rss_list_single_pane_t

0xe53b,	// (0x000a3619) main_camera2_pane

0xe53b,	// (0x000a3619) main_video2_pane

0x4ad0,	// (0x00099bae) cams_zoom_pane_cp2_ParamLimits

0x4ad0,	// (0x00099bae) cams_zoom_pane_cp2

0x4adc,	// (0x00099bba) image2_vga_pane_ParamLimits

0x4adc,	// (0x00099bba) image2_vga_pane

0x4aeb,	// (0x00099bc9) main_camera2_pane_g1_ParamLimits

0x4aeb,	// (0x00099bc9) main_camera2_pane_g1

0x4af7,	// (0x00099bd5) main_camera2_pane_g2_ParamLimits

0x4af7,	// (0x00099bd5) main_camera2_pane_g2

0x4b03,	// (0x00099be1) main_camera2_pane_g3_ParamLimits

0x4b03,	// (0x00099be1) main_camera2_pane_g3

0x4b0f,	// (0x00099bed) main_camera2_pane_g4_ParamLimits

0x4b0f,	// (0x00099bed) main_camera2_pane_g4

0x4b1b,	// (0x00099bf9) main_camera2_pane_g5_ParamLimits

0x4b1b,	// (0x00099bf9) main_camera2_pane_g5

0x4b27,	// (0x00099c05) main_camera2_pane_g6_ParamLimits

0x4b27,	// (0x00099c05) main_camera2_pane_g6

0x4b33,	// (0x00099c11) main_camera2_pane_g7_ParamLimits

0x4b33,	// (0x00099c11) main_camera2_pane_g7

0x4b3f,	// (0x00099c1d) main_camera2_pane_g8_ParamLimits

0x4b3f,	// (0x00099c1d) main_camera2_pane_g8

0x0008,

0xf5f7,	// (0x000a46d5) main_camera2_pane_g_ParamLimits

0xf5f7,	// (0x000a46d5) main_camera2_pane_g

0x4b57,	// (0x00099c35) main_camera2_pane_t1_ParamLimits

0x4b57,	// (0x00099c35) main_camera2_pane_t1

0x4b69,	// (0x00099c47) main_camera2_pane_t2_ParamLimits

0x4b69,	// (0x00099c47) main_camera2_pane_t2

0x4b7b,	// (0x00099c59) main_camera2_pane_t3_ParamLimits

0x4b7b,	// (0x00099c59) main_camera2_pane_t3

0x4b8d,	// (0x00099c6b) main_camera2_pane_t4_ParamLimits

0x4b8d,	// (0x00099c6b) main_camera2_pane_t4

0x0006,

0xf60a,	// (0x000a46e8) main_camera2_pane_t_ParamLimits

0xf60a,	// (0x000a46e8) main_camera2_pane_t

0x4bef,	// (0x00099ccd) cams_zoom_pane_cp4_ParamLimits

0x4bef,	// (0x00099ccd) cams_zoom_pane_cp4

0x4bff,	// (0x00099cdd) image2_cif_pane_ParamLimits

0x4bff,	// (0x00099cdd) image2_cif_pane

0x4c14,	// (0x00099cf2) image2_subqcif_pane_ParamLimits

0x4c14,	// (0x00099cf2) image2_subqcif_pane

0x4c23,	// (0x00099d01) main_video2_pane_g1_ParamLimits

0x4c23,	// (0x00099d01) main_video2_pane_g1

0x4c35,	// (0x00099d13) main_video2_pane_g2_ParamLimits

0x4c35,	// (0x00099d13) main_video2_pane_g2

0x4c45,	// (0x00099d23) main_video2_pane_g3_ParamLimits

0x4c45,	// (0x00099d23) main_video2_pane_g3

0x4c55,	// (0x00099d33) main_video2_pane_g4_ParamLimits

0x4c55,	// (0x00099d33) main_video2_pane_g4

0x4c65,	// (0x00099d43) main_video2_pane_g5_ParamLimits

0x4c65,	// (0x00099d43) main_video2_pane_g5

0x4c75,	// (0x00099d53) main_video2_pane_g6_ParamLimits

0x4c75,	// (0x00099d53) main_video2_pane_g6

0x0005,

0xf619,	// (0x000a46f7) main_video2_pane_g_ParamLimits

0xf619,	// (0x000a46f7) main_video2_pane_g

0x4c87,	// (0x00099d65) main_video2_pane_t1_ParamLimits

0x4c87,	// (0x00099d65) main_video2_pane_t1

0x4ca1,	// (0x00099d7f) main_video2_pane_t2_ParamLimits

0x4ca1,	// (0x00099d7f) main_video2_pane_t2

0x4cc7,	// (0x00099da5) main_video2_pane_t3_ParamLimits

0x4cc7,	// (0x00099da5) main_video2_pane_t3

0x0002,

0xf626,	// (0x000a4704) main_video2_pane_t_ParamLimits

0xf626,	// (0x000a4704) main_video2_pane_t

0x458c,	// (0x0009966a) call_muted_g2

0x0001,

0xf5c8,	// (0x000a46a6) call_muted_g

0xe53b,	// (0x000a3619) main_mup2_pane

0xb865,	// (0x000a0943) main_mup2_pane_g1_ParamLimits

0xb865,	// (0x000a0943) main_mup2_pane_g1

0x4ced,	// (0x00099dcb) main_mup2_pane_g2_ParamLimits

0x4ced,	// (0x00099dcb) main_mup2_pane_g2

0x4f6f,	// (0x0009a04d) main_mup_pane_g13_cp1

0x4f77,	// (0x0009a055) mup_volume_pane_cp1

0x4d0d,	// (0x00099deb) main_mup2_pane_g4_ParamLimits

0x4d0d,	// (0x00099deb) main_mup2_pane_g4

0x4d22,	// (0x00099e00) main_mup2_pane_g5_ParamLimits

0x4d22,	// (0x00099e00) main_mup2_pane_g5

0x4d37,	// (0x00099e15) main_mup2_pane_g6_ParamLimits

0x4d37,	// (0x00099e15) main_mup2_pane_g6

0x4d4c,	// (0x00099e2a) main_mup2_pane_g7_ParamLimits

0x4d4c,	// (0x00099e2a) main_mup2_pane_g7

0x0006,

0xf62d,	// (0x000a470b) main_mup2_pane_g_ParamLimits

0xf62d,	// (0x000a470b) main_mup2_pane_g

0x4d68,	// (0x00099e46) main_mup2_pane_t1_ParamLimits

0x4d68,	// (0x00099e46) main_mup2_pane_t1

0x4d7f,	// (0x00099e5d) main_mup2_pane_t2_ParamLimits

0x4d7f,	// (0x00099e5d) main_mup2_pane_t2

0x4d96,	// (0x00099e74) main_mup2_pane_t3_ParamLimits

0x4d96,	// (0x00099e74) main_mup2_pane_t3

0x4dad,	// (0x00099e8b) main_mup2_pane_t4_ParamLimits

0x4dad,	// (0x00099e8b) main_mup2_pane_t4

0x4dc7,	// (0x00099ea5) main_mup2_pane_t5_ParamLimits

0x4dc7,	// (0x00099ea5) main_mup2_pane_t5

0x4de1,	// (0x00099ebf) main_mup2_pane_t6_ParamLimits

0x4de1,	// (0x00099ebf) main_mup2_pane_t6

0x0005,

0xf63c,	// (0x000a471a) main_mup2_pane_t_ParamLimits

0xf63c,	// (0x000a471a) main_mup2_pane_t

0x4e19,	// (0x00099ef7) mup2_visualizer_pane_ParamLimits

0x4e19,	// (0x00099ef7) mup2_visualizer_pane

0x4e4f,	// (0x00099f2d) mup_progress_pane_cp_ParamLimits

0x4e4f,	// (0x00099f2d) mup_progress_pane_cp

0x4f5a,	// (0x0009a038) mup_volume_pane_cp_ParamLimits

0x4f5a,	// (0x0009a038) mup_volume_pane_cp

0x4e66,	// (0x00099f44) mup2_visualizer_pane_g1_ParamLimits

0x4e66,	// (0x00099f44) mup2_visualizer_pane_g1

0xb871,	// (0x000a094f) mup2_visualizer_pane_g2_ParamLimits

0xb871,	// (0x000a094f) mup2_visualizer_pane_g2

0x4e7b,	// (0x00099f59) mup2_visualizer_pane_g3_ParamLimits

0x4e7b,	// (0x00099f59) mup2_visualizer_pane_g3

0x0002,

0xf649,	// (0x000a4727) mup2_visualizer_pane_g_ParamLimits

0xf649,	// (0x000a4727) mup2_visualizer_pane_g

0xa692,	// (0x0009f770) aid_size_cell_fmradio

0x46a2,	// (0x00099780) aid_height_parent_landcape

0xf042,	// (0x000a4120) wml_content_pane_cp

0xf04a,	// (0x000a4128) wml_tabs_pane

0xf053,	// (0x000a4131) popup_wml_miniature_window

0xf05b,	// (0x000a4139) scroll_pane_cp021

0xf06f,	// (0x000a414d) wml_content_pane_comp8

0xe53b,	// (0x000a3619) bg_popup_sub_pane_cp05

0xb88f,	// (0x000a096d) popup_wml_miniature_window_g1

0xb897,	// (0x000a0975) wml_miniature_view_pane

0x4e89,	// (0x00099f67) aid_size_wml_view

0x4e91,	// (0x00099f6f) wml_miniature_view_pane_g1

0x4e9a,	// (0x00099f78) wml_miniature_view_pane_g2

0x4ea3,	// (0x00099f81) wml_miniature_view_pane_g3

0x4eab,	// (0x00099f89) wml_miniature_view_pane_g4

0x4eb3,	// (0x00099f91) wml_miniature_view_pane_g5

0x4ebb,	// (0x00099f99) wml_miniature_view_pane_g6

0x4ec3,	// (0x00099fa1) wml_miniature_view_pane_g7

0x4ecb,	// (0x00099fa9) wml_miniature_view_pane_g8

0x0007,

0xf650,	// (0x000a472e) wml_miniature_view_pane_g

0xb865,	// (0x000a0943) background_graphic_ParamLimits

0xb865,	// (0x000a0943) background_graphic

0xb89f,	// (0x000a097d) wml_tabs_2_pane

0xb8a8,	// (0x000a0986) wml_tabs_3_pane_ParamLimits

0xb8a8,	// (0x000a0986) wml_tabs_3_pane

0xb8ba,	// (0x000a0998) wml_tabs_4_pane_ParamLimits

0xb8ba,	// (0x000a0998) wml_tabs_4_pane

0xb8d0,	// (0x000a09ae) wml_tabs_5_pane_ParamLimits

0xb8d0,	// (0x000a09ae) wml_tabs_5_pane

0xb918,	// (0x000a09f6) wml_tabs_pane_g2_ParamLimits

0xb918,	// (0x000a09f6) wml_tabs_pane_g2

0xb92c,	// (0x000a0a0a) wml_tabs_pane_g3_ParamLimits

0xb92c,	// (0x000a0a0a) wml_tabs_pane_g3

0x4ed3,	// (0x00099fb1) wml_tabs_2_active_pane_ParamLimits

0x4ed3,	// (0x00099fb1) wml_tabs_2_active_pane

0x4ee3,	// (0x00099fc1) wml_tabs_2_passive_pane_ParamLimits

0x4ee3,	// (0x00099fc1) wml_tabs_2_passive_pane

0x4ef3,	// (0x00099fd1) wml_tabs_3_active_pane_cp_ParamLimits

0x4ef3,	// (0x00099fd1) wml_tabs_3_active_pane_cp

0x4f04,	// (0x00099fe2) wml_tabs_3_passive_pane_ParamLimits

0x4f04,	// (0x00099fe2) wml_tabs_3_passive_pane

0x4f15,	// (0x00099ff3) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f15,	// (0x00099ff3) wml_tabs_3_passive_pane_cp

0x4f26,	// (0x0009a004) tabs_4_active_pane

0x4f2e,	// (0x0009a00c) tabs_4_passive_pane

0x4f36,	// (0x0009a014) tabs_4_passive_pane_cp

0x4f3e,	// (0x0009a01c) tabs_4_passive_pane_cp2

0x4467,	// (0x00099545) aid_height_text

0x3b8c,	// (0x00098c6a) mup_volume_cont_pane_ParamLimits

0x3b8c,	// (0x00098c6a) mup_volume_cont_pane

0x12c4,	// (0x000963a2) aid_size_cell_pinb

0x12ce,	// (0x000963ac) aid_size_list_pinb

0x4e38,	// (0x00099f16) mup2_volume_cont_pane_ParamLimits

0x4e38,	// (0x00099f16) mup2_volume_cont_pane

0x4f46,	// (0x0009a024) mup2_volume_cont_pane_g1_ParamLimits

0x4f46,	// (0x0009a024) mup2_volume_cont_pane_g1

0x0ee6,	// (0x00095fc4) aid_size_cell_touch_ParamLimits

0x0ee6,	// (0x00095fc4) aid_size_cell_touch

0x11a7,	// (0x00096285) touch_pane_ParamLimits

0x11a7,	// (0x00096285) touch_pane

0x119d,	// (0x0009627b) main_rss2_pane

0xb949,	// (0x000a0a27) listscroll_rss2_pane

0xb952,	// (0x000a0a30) rss2_navigation_pane

0xb95a,	// (0x000a0a38) list_rss2_pane

0xa26c,	// (0x0009f34a) scroll_pane_cp22

0xb962,	// (0x000a0a40) rss2_navigation_pane_g1

0xb96b,	// (0x000a0a49) rss2_navigation_pane_g2

0xb973,	// (0x000a0a51) rss2_navigation_pane_g3

0x0002,

0xf661,	// (0x000a473f) rss2_navigation_pane_g

0xb97b,	// (0x000a0a59) rss2_navigation_pane_t1

0x4f7f,	// (0x0009a05d) rss2_list_single_pane_ParamLimits

0x4f7f,	// (0x0009a05d) rss2_list_single_pane

0xb989,	// (0x000a0a67) rss2_list_single_pane_t2

0xb997,	// (0x000a0a75) rss2_list_single_pane_t3_ParamLimits

0xb997,	// (0x000a0a75) rss2_list_single_pane_t3

0xb9b4,	// (0x000a0a92) rss2_list_single_pane_t4

0x3281,	// (0x0009835f) smil_status_pane_g1

0x46b9,	// (0x00099797) main_image2_pane_ParamLimits

0x46b9,	// (0x00099797) main_image2_pane

0x4b4b,	// (0x00099c29) main_camera2_pane_g9_ParamLimits

0x4b4b,	// (0x00099c29) main_camera2_pane_g9

0x4b9f,	// (0x00099c7d) main_camera2_pane_t5_ParamLimits

0x4b9f,	// (0x00099c7d) main_camera2_pane_t5

0x4bb1,	// (0x00099c8f) main_camera2_pane_t6_ParamLimits

0x4bb1,	// (0x00099c8f) main_camera2_pane_t6

0x4fb7,	// (0x0009a095) main_image2_pane_g1_ParamLimits

0x4fb7,	// (0x0009a095) main_image2_pane_g1

0x4203,	// (0x000992e1) smil2_video_pane_ParamLimits

0x4203,	// (0x000992e1) smil2_video_pane

0x0df7,	// (0x00095ed5) aid_zoom_text_primary_cp

0x1138,	// (0x00096216) popup_preview_fixed_window

0xefab,	// (0x000a4089) im_reading_pane_g1

0x4a95,	// (0x00099b73) cams2_bc_adjust_pane_cp_ParamLimits

0x4a95,	// (0x00099b73) cams2_bc_adjust_pane_cp

0x4be1,	// (0x00099cbf) cams2_bc_adjust_pane_ParamLimits

0x4be1,	// (0x00099cbf) cams2_bc_adjust_pane

0xcbeb,	// (0x000a1cc9) cams2_bc_adjust_pane_g1

0x4fc3,	// (0x0009a0a1) cams2_slider_pane

0x4fcc,	// (0x0009a0aa) cams2_slider_pane_g1

0x4fd5,	// (0x0009a0b3) cams2_slider_pane_g2

0x0006,

0xf668,	// (0x000a4746) cams2_slider_pane_g

0x13be,	// (0x0009649c) calc_display_pane_ParamLimits

0x13dc,	// (0x000964ba) calc_paper_pane_ParamLimits

0x13f8,	// (0x000964d6) grid_calc_pane_ParamLimits

0x35fd,	// (0x000986db) popup_clock_digital_window_t1_ParamLimits

0xa62f,	// (0x0009f70d) main_image_pane_t1

0x13a4,	// (0x00096482) aid_size_cell_calc_ParamLimits

0x13a4,	// (0x00096482) aid_size_cell_calc

0x46ea,	// (0x000997c8) popup_blid_sat_info2_window_ParamLimits

0x46ea,	// (0x000997c8) popup_blid_sat_info2_window

0xb9ca,	// (0x000a0aa8) aid_size_cell_blid

0xb9d2,	// (0x000a0ab0) bg_popup_window_pane_cp07

0xb9f5,	// (0x000a0ad3) grid_popup_blid_pane

0xb9ff,	// (0x000a0add) heading_pane_cp05_ParamLimits

0xb9ff,	// (0x000a0add) heading_pane_cp05

0xbac9,	// (0x000a0ba7) cell_popup_blid_pane_ParamLimits

0xbac9,	// (0x000a0ba7) cell_popup_blid_pane

0xbaef,	// (0x000a0bcd) cell_popup_blid_pane_g1

0xbaf7,	// (0x000a0bd5) cell_popup_blid_pane_t1

0x4dfe,	// (0x00099edc) mup2_indicator_pane_ParamLimits

0x4dfe,	// (0x00099edc) mup2_indicator_pane

0xa3b5,	// (0x0009f493) mup2_visualizer_osc_pane

0xb87d,	// (0x000a095b) mup2_visualizer_spec_pane_ParamLimits

0xb87d,	// (0x000a095b) mup2_visualizer_spec_pane

0x4fef,	// (0x0009a0cd) mup2_spec_half_pane

0x4ff8,	// (0x0009a0d6) mup2_spec_half_pane_cp

0x5002,	// (0x0009a0e0) mup2_spec_bar_pane_ParamLimits

0x5002,	// (0x0009a0e0) mup2_spec_bar_pane

0xb812,	// (0x000a08f0) mup2_spec_bar_pane_g1

0xb81c,	// (0x000a08fa) mup2_spec_bar_pane_g2

0x0001,

0xf5db,	// (0x000a46b9) mup2_spec_bar_pane_g

0x5021,	// (0x0009a0ff) mup2_osc_middle_pane

0xb82e,	// (0x000a090c) mup2_visualizer_osc_pane_g1

0xe11e,	// (0x000a31fc) popup_number_entry_window_t1_ParamLimits

0xe131,	// (0x000a320f) popup_number_entry_window_t2_ParamLimits

0xe143,	// (0x000a3221) popup_number_entry_window_t3_ParamLimits

0x11fe,	// (0x000962dc) popup_number_entry_window_t5_ParamLimits

0x11fe,	// (0x000962dc) popup_number_entry_window_t5

0xf0d3,	// (0x000a41b1) popup_number_entry_window_t_ParamLimits

0xe155,	// (0x000a3233) text_title_cp2_ParamLimits

0x3efa,	// (0x00098fd8) aid_hotspot_pointer_text2_pane

0x3f88,	// (0x00099066) main_viewer_pane_g9_ParamLimits

0x3f88,	// (0x00099066) main_viewer_pane_g9

0x9def,	// (0x0009eecd) cale_month_pane_t1_ParamLimits

0x9e2c,	// (0x0009ef0a) bg_cale_pane_ParamLimits

0x9e44,	// (0x0009ef22) list_cale_pane_ParamLimits

0x9e55,	// (0x0009ef33) listscroll_cale_day_pane_t1

0x9e67,	// (0x0009ef45) scroll_pane_cp09_ParamLimits

0x3bcb,	// (0x00098ca9) main_mup_eq_pane_t1_ParamLimits

0x3bcb,	// (0x00098ca9) main_mup_eq_pane_t1

0x3be5,	// (0x00098cc3) main_mup_eq_pane_t2_ParamLimits

0x3be5,	// (0x00098cc3) main_mup_eq_pane_t2

0x3bfd,	// (0x00098cdb) main_mup_eq_pane_t3_ParamLimits

0x3bfd,	// (0x00098cdb) main_mup_eq_pane_t3

0x3c15,	// (0x00098cf3) main_mup_eq_pane_t4_ParamLimits

0x3c15,	// (0x00098cf3) main_mup_eq_pane_t4

0x3c2d,	// (0x00098d0b) main_mup_eq_pane_t5_ParamLimits

0x3c2d,	// (0x00098d0b) main_mup_eq_pane_t5

0x3c45,	// (0x00098d23) main_mup_eq_pane_t6_ParamLimits

0x3c45,	// (0x00098d23) main_mup_eq_pane_t6

0x3c59,	// (0x00098d37) main_mup_eq_pane_t7_ParamLimits

0x3c59,	// (0x00098d37) main_mup_eq_pane_t7

0x3c6d,	// (0x00098d4b) main_mup_eq_pane_t8_ParamLimits

0x3c6d,	// (0x00098d4b) main_mup_eq_pane_t8

0x3c83,	// (0x00098d61) main_mup_eq_pane_t9_ParamLimits

0x3c83,	// (0x00098d61) main_mup_eq_pane_t9

0x3c9b,	// (0x00098d79) main_mup_eq_pane_t10_ParamLimits

0x3c9b,	// (0x00098d79) main_mup_eq_pane_t10

0x0009,

0xf431,	// (0x000a450f) main_mup_eq_pane_t_ParamLimits

0xf431,	// (0x000a450f) main_mup_eq_pane_t

0x3d58,	// (0x00098e36) mup_equalizer_pane_cp5_ParamLimits

0x3d6e,	// (0x00098e4c) mup_equalizer_pane_cp6_ParamLimits

0x3d86,	// (0x00098e64) mup_equalizer_pane_cp7_ParamLimits

0x119d,	// (0x0009627b) main_gallery_pane

0xb837,	// (0x000a0915) smil2_volume_pane

0xb83f,	// (0x000a091d) smil_status_volume_pane_g1_ParamLimits

0xb852,	// (0x000a0930) smil_status_volume_pane_g2_ParamLimits

0x490a,	// (0x000999e8) smil_status_volume_pane_g3_ParamLimits

0xf5e0,	// (0x000a46be) smil_status_volume_pane_g_ParamLimits

0xb9d2,	// (0x000a0ab0) bg_popup_window_pane_cp07_ParamLimits

0xb9e0,	// (0x000a0abe) blid_firmament_pane

0x502a,	// (0x0009a108) aid_size_cell_gallery_ParamLimits

0x502a,	// (0x0009a108) aid_size_cell_gallery

0x5038,	// (0x0009a116) grid_gallery_pane_ParamLimits

0x5038,	// (0x0009a116) grid_gallery_pane

0x5048,	// (0x0009a126) cell_gallery_pane_ParamLimits

0x5048,	// (0x0009a126) cell_gallery_pane

0xbb05,	// (0x000a0be3) bg_cell_gallery_focus_pane_ParamLimits

0xbb05,	// (0x000a0be3) bg_cell_gallery_focus_pane

0xbb17,	// (0x000a0bf5) cell_gallery_pane_g1_ParamLimits

0xbb17,	// (0x000a0bf5) cell_gallery_pane_g1

0x5096,	// (0x0009a174) cell_gallery_pane_g2_ParamLimits

0x5096,	// (0x0009a174) cell_gallery_pane_g2

0x50a3,	// (0x0009a181) cell_gallery_pane_g3_ParamLimits

0x50a3,	// (0x0009a181) cell_gallery_pane_g3

0xbb23,	// (0x000a0c01) cell_gallery_pane_g4_ParamLimits

0xbb23,	// (0x000a0c01) cell_gallery_pane_g4

0x0003,

0xf68e,	// (0x000a476c) cell_gallery_pane_g_ParamLimits

0xf68e,	// (0x000a476c) cell_gallery_pane_g

0xbb2f,	// (0x000a0c0d) bg_cell_gallery_focus_pane_g1

0xbb37,	// (0x000a0c15) bg_cell_gallery_focus_pane_g2

0xbb3f,	// (0x000a0c1d) bg_cell_gallery_focus_pane_g3

0xbb47,	// (0x000a0c25) bg_cell_gallery_focus_pane_g4

0xbb4f,	// (0x000a0c2d) bg_cell_gallery_focus_pane_g5

0xbb57,	// (0x000a0c35) bg_cell_gallery_focus_pane_g6

0xbb5f,	// (0x000a0c3d) bg_cell_gallery_focus_pane_g7

0xbb67,	// (0x000a0c45) bg_cell_gallery_focus_pane_g8

0x0007,

0xf697,	// (0x000a4775) bg_cell_gallery_focus_pane_g

0xbb6f,	// (0x000a0c4d) aid_firma_cardinal

0xbb83,	// (0x000a0c61) blid_firmament_pane_t1

0xbb9a,	// (0x000a0c78) blid_firmament_pane_t2

0xbbb1,	// (0x000a0c8f) blid_firmament_pane_t3

0xbbc8,	// (0x000a0ca6) blid_firmament_pane_t4

0x0003,

0xf6a8,	// (0x000a4786) blid_firmament_pane_t

0xbbdf,	// (0x000a0cbd) blid_sat_info_pane

0xbbef,	// (0x000a0ccd) blid_sat_info_pane_g1

0xbbef,	// (0x000a0ccd) blid_sat_info_pane_g2

0x0001,

0xf6b1,	// (0x000a478f) blid_sat_info_pane_g

0xbbf9,	// (0x000a0cd7) blid_sat_info_pane_t1

0xbc07,	// (0x000a0ce5) smil2_volume_content_pane

0xbc10,	// (0x000a0cee) smil2_volume_pane_g1

0xed6b,	// (0x000a3e49) smil2_volume_content_pane_g1

0xbc18,	// (0x000a0cf6) smil2_volume_content_pane_g2

0xbc21,	// (0x000a0cff) smil2_volume_content_pane_g3

0xbc2a,	// (0x000a0d08) smil2_volume_content_pane_g4

0xbc33,	// (0x000a0d11) smil2_volume_content_pane_g5

0xbc3c,	// (0x000a0d1a) smil2_volume_content_pane_g6

0xbc45,	// (0x000a0d23) smil2_volume_content_pane_g7

0xbc4e,	// (0x000a0d2c) smil2_volume_content_pane_g8

0xbc57,	// (0x000a0d35) smil2_volume_content_pane_g9

0xbc60,	// (0x000a0d3e) smil2_volume_content_pane_g10

0x0009,

0xf6b6,	// (0x000a4794) smil2_volume_content_pane_g

0x19cb,	// (0x00096aa9) cale_week_day_heading_pane_t1_ParamLimits

0x1a06,	// (0x00096ae4) cale_week_day_heading_pane_t2_ParamLimits

0x1a41,	// (0x00096b1f) cale_week_day_heading_pane_t3_ParamLimits

0x1a7c,	// (0x00096b5a) cale_week_day_heading_pane_t4_ParamLimits

0x1ab7,	// (0x00096b95) cale_week_day_heading_pane_t5_ParamLimits

0x1af2,	// (0x00096bd0) cale_week_day_heading_pane_t6_ParamLimits

0x1b2d,	// (0x00096c0b) cale_week_day_heading_pane_t7_ParamLimits

0xf1c1,	// (0x000a429f) cale_week_day_heading_pane_t_ParamLimits

0xee5e,	// (0x000a3f3c) bg_cale_side_pane_ParamLimits

0x1b68,	// (0x00096c46) cale_week_time_pane_t1_ParamLimits

0x1b82,	// (0x00096c60) cale_week_time_pane_t2_ParamLimits

0x1b9c,	// (0x00096c7a) cale_week_time_pane_t3_ParamLimits

0x1bb6,	// (0x00096c94) cale_week_time_pane_t4_ParamLimits

0x1bd0,	// (0x00096cae) cale_week_time_pane_t5_ParamLimits

0x1bec,	// (0x00096cca) cale_week_time_pane_t6_ParamLimits

0x1c0e,	// (0x00096cec) cale_week_time_pane_t7_ParamLimits

0x1c32,	// (0x00096d10) cale_week_time_pane_t8_ParamLimits

0xf1d0,	// (0x000a42ae) cale_week_time_pane_t_ParamLimits

0x1c58,	// (0x00096d36) cell_cale_week_pane_g2_ParamLimits

0xee5e,	// (0x000a3f3c) bg_cale_side_pane_cp01_ParamLimits

0x3050,	// (0x0009812e) cale_month_week_pane_t1_ParamLimits

0x3069,	// (0x00098147) cale_month_week_pane_t2_ParamLimits

0x3082,	// (0x00098160) cale_month_week_pane_t3_ParamLimits

0x309b,	// (0x00098179) cale_month_week_pane_t4_ParamLimits

0x30b8,	// (0x00098196) cale_month_week_pane_t5_ParamLimits

0x30d9,	// (0x000981b7) cale_month_week_pane_t6_ParamLimits

0xf296,	// (0x000a4374) cale_month_week_pane_t_ParamLimits

0x324a,	// (0x00098328) cell_cale_month_pane_g1_ParamLimits

0x119d,	// (0x0009627b) main_cale_event_viewer_pane

0xe0f4,	// (0x000a31d2) listscroll_cale_event_viewer_pane

0xbc69,	// (0x000a0d47) list_cale_ev_pane

0xbc71,	// (0x000a0d4f) scroll_pane_cp023

0xbc7d,	// (0x000a0d5b) field_cale_ev_pane_ParamLimits

0xbc7d,	// (0x000a0d5b) field_cale_ev_pane

0xbc99,	// (0x000a0d77) field_cale_ev_content_pane_ParamLimits

0xbc99,	// (0x000a0d77) field_cale_ev_content_pane

0xbca5,	// (0x000a0d83) field_cale_ev_pane_g1_ParamLimits

0xbca5,	// (0x000a0d83) field_cale_ev_pane_g1

0xbcb1,	// (0x000a0d8f) field_cale_ev_pane_g2_ParamLimits

0xbcb1,	// (0x000a0d8f) field_cale_ev_pane_g2

0xbcc9,	// (0x000a0da7) field_cale_ev_pane_g3_ParamLimits

0xbcc9,	// (0x000a0da7) field_cale_ev_pane_g3

0x0002,

0xf6cb,	// (0x000a47a9) field_cale_ev_pane_g_ParamLimits

0xf6cb,	// (0x000a47a9) field_cale_ev_pane_g

0xbce1,	// (0x000a0dbf) field_cale_ev_pane_t1_ParamLimits

0xbce1,	// (0x000a0dbf) field_cale_ev_pane_t1

0xbcf8,	// (0x000a0dd6) field_cale_ev_content_pane_t1_ParamLimits

0xbcf8,	// (0x000a0dd6) field_cale_ev_content_pane_t1

0x3e5a,	// (0x00098f38) bg_button_pane_cp01

0x1769,	// (0x00096847) listscroll_cale_week_pane_ParamLimits

0xee08,	// (0x000a3ee6) popup_toolbar_window_cp01

0xee2f,	// (0x000a3f0d) listscroll_cale_week_pane_t1_ParamLimits

0x1769,	// (0x00096847) listscroll_cale_day_pane_ParamLimits

0xee08,	// (0x000a3ee6) popup_toolbar_window_cp02

0x9e55,	// (0x0009ef33) listscroll_cale_day_pane_t1_ParamLimits

0x1769,	// (0x00096847) main_cale_month_pane_ParamLimits

0x47e7,	// (0x000998c5) popup_toolbar_window_cp03_ParamLimits

0x47e7,	// (0x000998c5) popup_toolbar_window_cp03

0x4115,	// (0x000991f3) main_image_pane_g2_ParamLimits

0x4115,	// (0x000991f3) main_image_pane_g2

0x4121,	// (0x000991ff) main_image_pane_g3_ParamLimits

0x4121,	// (0x000991ff) main_image_pane_g3

0x0002,

0xf4c3,	// (0x000a45a1) main_image_pane_g_ParamLimits

0xf4c3,	// (0x000a45a1) main_image_pane_g

0xa62f,	// (0x0009f70d) main_image_pane_t1_ParamLimits

0x412d,	// (0x0009920b) main_image_pane_t2_ParamLimits

0x412d,	// (0x0009920b) main_image_pane_t2

0x413f,	// (0x0009921d) main_image_pane_t3_ParamLimits

0x413f,	// (0x0009921d) main_image_pane_t3

0x4151,	// (0x0009922f) main_image_pane_t4_ParamLimits

0x4151,	// (0x0009922f) main_image_pane_t4

0x0003,

0xf4ca,	// (0x000a45a8) main_image_pane_t_ParamLimits

0xf4ca,	// (0x000a45a8) main_image_pane_t

0x4163,	// (0x00099241) popup_image_details_window_cp01

0x416d,	// (0x0009924b) popup_toobar_trans_pane_cp01_ParamLimits

0x416d,	// (0x0009924b) popup_toobar_trans_pane_cp01

0x473d,	// (0x0009981b) popup_image_details_window_ParamLimits

0x473d,	// (0x0009981b) popup_image_details_window

0x474b,	// (0x00099829) popup_image_focus_window

0x4a87,	// (0x00099b65) camera2_autofocus_pane_ParamLimits

0x4a87,	// (0x00099b65) camera2_autofocus_pane

0xe0f4,	// (0x000a31d2) bg_popup_sub_pane_cp06

0xbd15,	// (0x000a0df3) popup_image_focus_window_g1

0xbd1d,	// (0x000a0dfb) popup_image_focus_window_g2

0xbd25,	// (0x000a0e03) popup_image_focus_window_g3

0xbd2d,	// (0x000a0e0b) popup_image_focus_window_g4

0x0003,

0xf6d2,	// (0x000a47b0) popup_image_focus_window_g

0xbd35,	// (0x000a0e13) popup_image_focus_window_t1

0xbd43,	// (0x000a0e21) popup_image_focus_window_t2

0xbd53,	// (0x000a0e31) popup_image_focus_window_t3

0x0002,

0xf6db,	// (0x000a47b9) popup_image_focus_window_t

0xbd61,	// (0x000a0e3f) camera2_autofocus_pane_g1

0xecc6,	// (0x000a3da4) bg_tb_trans_pane_cp01

0xbd6f,	// (0x000a0e4d) popup_image_details_window_g1

0xbd82,	// (0x000a0e60) popup_image_details_window_g2

0x0002,

0xf6ed,	// (0x000a47cb) popup_image_details_window_g

0xbdab,	// (0x000a0e89) popup_image_details_window_t1

0xbdbd,	// (0x000a0e9b) popup_image_details_window_t2

0xbdd6,	// (0x000a0eb4) popup_image_details_window_t3

0xbdea,	// (0x000a0ec8) popup_image_details_window_t4

0xbe05,	// (0x000a0ee3) popup_image_details_window_t5

0x0004,

0xf6f4,	// (0x000a47d2) popup_image_details_window_t

0xe866,	// (0x000a3944) bg_calc_paper_pane_ParamLimits

0x119d,	// (0x0009627b) grid_highlight_pane_cp013

0x14f5,	// (0x000965d3) list_calc_pane_ParamLimits

0x1507,	// (0x000965e5) scroll_pane_cp024

0xec7e,	// (0x000a3d5c) bg_calc_display_pane_ParamLimits

0x150f,	// (0x000965ed) calc_display_pane_t1_ParamLimits

0x1524,	// (0x00096602) calc_display_pane_t2_ParamLimits

0x1539,	// (0x00096617) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x000a4238) calc_display_pane_t_ParamLimits

0x161a,	// (0x000966f8) cell_calc_pane_g2

0x0001,

0xf177,	// (0x000a4255) cell_calc_pane_g

0x1623,	// (0x00096701) cell_calc_pane_t1

0xed40,	// (0x000a3e1e) grid_highlight_pane_cp02_ParamLimits

0xed56,	// (0x000a3e34) toolbar_button_pane_cp01_ParamLimits

0xed56,	// (0x000a3e34) toolbar_button_pane_cp01

0xa674,	// (0x0009f752) temp_image_control_pane_ParamLimits

0xa674,	// (0x0009f752) temp_image_control_pane

0x46b9,	// (0x00099797) main_mp3_pane

0xbe1f,	// (0x000a0efd) temp_image_control_pane_g1_ParamLimits

0xbe1f,	// (0x000a0efd) temp_image_control_pane_g1

0xbe2d,	// (0x000a0f0b) temp_image_control_pane_g2_ParamLimits

0xbe2d,	// (0x000a0f0b) temp_image_control_pane_g2

0xbe3f,	// (0x000a0f1d) temp_image_control_pane_g3_ParamLimits

0xbe3f,	// (0x000a0f1d) temp_image_control_pane_g3

0x50e0,	// (0x0009a1be) temp_image_control_pane_g4_ParamLimits

0x50e0,	// (0x0009a1be) temp_image_control_pane_g4

0x0003,

0xf6ff,	// (0x000a47dd) temp_image_control_pane_g_ParamLimits

0xf6ff,	// (0x000a47dd) temp_image_control_pane_g

0xbe1f,	// (0x000a0efd) main_mp3_pane_g1

0x50f1,	// (0x0009a1cf) main_mp3_pane_g2

0x0007,

0xf708,	// (0x000a47e6) main_mp3_pane_g

0xbe82,	// (0x000a0f60) main_mp3_pane_t1

0xeeba,	// (0x000a3f98) main_camera_pane_g8_ParamLimits

0xeeba,	// (0x000a3f98) main_camera_pane_g8

0x1eed,	// (0x00096fcb) main_video_pane_g7_ParamLimits

0x1eed,	// (0x00096fcb) main_video_pane_g7

0x4bcf,	// (0x00099cad) main_camera2_pane_t7_ParamLimits

0x4bcf,	// (0x00099cad) main_camera2_pane_t7

0xf002,	// (0x000a40e0) scroll_pane_cp025_ParamLimits

0xf002,	// (0x000a40e0) scroll_pane_cp025

0xf016,	// (0x000a40f4) scroll_pane_cp026_ParamLimits

0xf016,	// (0x000a40f4) scroll_pane_cp026

0xf025,	// (0x000a4103) wml_content_pane_ParamLimits

0x119d,	// (0x0009627b) main_touch_calib_pane

0x5195,	// (0x0009a273) main_touch_calib_pane_g1

0x51a1,	// (0x0009a27f) main_touch_calib_pane_g2

0x51ad,	// (0x0009a28b) main_touch_calib_pane_g3

0x51b9,	// (0x0009a297) main_touch_calib_pane_g4

0x0003,

0xf726,	// (0x000a4804) main_touch_calib_pane_g

0x51c5,	// (0x0009a2a3) main_touch_calib_pane_t1

0x51de,	// (0x0009a2bc) main_touch_calib_pane_t2

0x0004,

0xf72f,	// (0x000a480d) main_touch_calib_pane_t

0xa2f6,	// (0x0009f3d4) mup_progress_pane_cp02

0xa315,	// (0x0009f3f3) navi_pane_g1

0xa377,	// (0x0009f455) navi_pane_mp_t3

0x46b9,	// (0x00099797) main_mp3_pane_ParamLimits

0x4824,	// (0x00099902) navi_pane_ParamLimits

0xbe1f,	// (0x000a0efd) main_mp3_pane_g1_ParamLimits

0x50f1,	// (0x0009a1cf) main_mp3_pane_g2_ParamLimits

0x50fd,	// (0x0009a1db) main_mp3_pane_g3_ParamLimits

0x50fd,	// (0x0009a1db) main_mp3_pane_g3

0x5109,	// (0x0009a1e7) main_mp3_pane_g4_ParamLimits

0x5109,	// (0x0009a1e7) main_mp3_pane_g4

0xbe4f,	// (0x000a0f2d) main_mp3_pane_g5_ParamLimits

0xbe4f,	// (0x000a0f2d) main_mp3_pane_g5

0xbe5d,	// (0x000a0f3b) main_mp3_pane_g6_ParamLimits

0xbe5d,	// (0x000a0f3b) main_mp3_pane_g6

0xbe6a,	// (0x000a0f48) main_mp3_pane_g7_ParamLimits

0xbe6a,	// (0x000a0f48) main_mp3_pane_g7

0xbe76,	// (0x000a0f54) main_mp3_pane_g8_ParamLimits

0xbe76,	// (0x000a0f54) main_mp3_pane_g8

0xf708,	// (0x000a47e6) main_mp3_pane_g_ParamLimits

0x5115,	// (0x0009a1f3) main_mp3_pane_t2

0x5125,	// (0x0009a203) main_mp3_pane_t3

0xbe90,	// (0x000a0f6e) main_mp3_pane_t4

0xbe9e,	// (0x000a0f7c) main_mp3_pane_t5

0x0005,

0xf719,	// (0x000a47f7) main_mp3_pane_t

0xbeac,	// (0x000a0f8a) mup_progress_pane_cp01

0x0df7,	// (0x00095ed5) aid_zoom_text_secondary2

0xbc69,	// (0x000a0d47) list_cale_ev2_pane

0xbc71,	// (0x000a0d4f) scroll_pane_cp023_ParamLimits

0x5239,	// (0x0009a317) field_cale_ev2_pane_ParamLimits

0x5239,	// (0x0009a317) field_cale_ev2_pane

0xbeb4,	// (0x000a0f92) field_cale_ev2_pane_g1_ParamLimits

0xbeb4,	// (0x000a0f92) field_cale_ev2_pane_g1

0xbec0,	// (0x000a0f9e) field_cale_ev2_pane_g2_ParamLimits

0xbec0,	// (0x000a0f9e) field_cale_ev2_pane_g2

0xbed8,	// (0x000a0fb6) field_cale_ev2_pane_g3_ParamLimits

0xbed8,	// (0x000a0fb6) field_cale_ev2_pane_g3

0x0003,

0xf73a,	// (0x000a4818) field_cale_ev2_pane_g_ParamLimits

0xf73a,	// (0x000a4818) field_cale_ev2_pane_g

0xbefc,	// (0x000a0fda) field_cale_ev2_pane_t1_ParamLimits

0xbefc,	// (0x000a0fda) field_cale_ev2_pane_t1

0xbf13,	// (0x000a0ff1) field_cale_ev2_pane_t2_ParamLimits

0xbf13,	// (0x000a0ff1) field_cale_ev2_pane_t2

0x0001,

0xf743,	// (0x000a4821) field_cale_ev2_pane_t_ParamLimits

0xf743,	// (0x000a4821) field_cale_ev2_pane_t

0x3ff0,	// (0x000990ce) main_postcard_pane_g5_ParamLimits

0x3ff0,	// (0x000990ce) main_postcard_pane_g5

0x3ffe,	// (0x000990dc) main_postcard_pane_g6_ParamLimits

0x3ffe,	// (0x000990dc) main_postcard_pane_g6

0x1d37,	// (0x00096e15) camera2_autofocus_pane_cp_ParamLimits

0x1d37,	// (0x00096e15) camera2_autofocus_pane_cp

0x46b9,	// (0x00099797) main_mup3_pane

0x5287,	// (0x0009a365) main_mup3_pane_g1_ParamLimits

0x5287,	// (0x0009a365) main_mup3_pane_g1

0x52a8,	// (0x0009a386) main_mup3_pane_g2_ParamLimits

0x52a8,	// (0x0009a386) main_mup3_pane_g2

0x5324,	// (0x0009a402) main_mup3_pane_g3_ParamLimits

0x5324,	// (0x0009a402) main_mup3_pane_g3

0x5367,	// (0x0009a445) main_mup3_pane_g4_ParamLimits

0x5367,	// (0x0009a445) main_mup3_pane_g4

0x53aa,	// (0x0009a488) main_mup3_pane_g5_ParamLimits

0x53aa,	// (0x0009a488) main_mup3_pane_g5

0x53ef,	// (0x0009a4cd) main_mup3_pane_g6_ParamLimits

0x53ef,	// (0x0009a4cd) main_mup3_pane_g6

0xbf28,	// (0x000a1006) main_mup3_pane_g7_ParamLimits

0xbf28,	// (0x000a1006) main_mup3_pane_g7

0x0007,

0xf753,	// (0x000a4831) main_mup3_pane_g_ParamLimits

0xf753,	// (0x000a4831) main_mup3_pane_g

0x5465,	// (0x0009a543) main_mup3_pane_t1_ParamLimits

0x5465,	// (0x0009a543) main_mup3_pane_t1

0x54d4,	// (0x0009a5b2) main_mup3_pane_t2_ParamLimits

0x54d4,	// (0x0009a5b2) main_mup3_pane_t2

0x559d,	// (0x0009a67b) main_mup3_pane_t4_ParamLimits

0x559d,	// (0x0009a67b) main_mup3_pane_t4

0x55eb,	// (0x0009a6c9) main_mup3_pane_t5_ParamLimits

0x55eb,	// (0x0009a6c9) main_mup3_pane_t5

0x569b,	// (0x0009a779) main_mup3_pane_t6_ParamLimits

0x569b,	// (0x0009a779) main_mup3_pane_t6

0x0005,

0xf764,	// (0x000a4842) main_mup3_pane_t_ParamLimits

0xf764,	// (0x000a4842) main_mup3_pane_t

0x5747,	// (0x0009a825) mup3_progress_pane_ParamLimits

0x5747,	// (0x0009a825) mup3_progress_pane

0x57bb,	// (0x0009a899) popup_mup3_control_window_ParamLimits

0x57bb,	// (0x0009a899) popup_mup3_control_window

0xbf36,	// (0x000a1014) popup_mup3_text_window

0x57d4,	// (0x0009a8b2) mup3_progress_pane_t1

0x57f3,	// (0x0009a8d1) mup3_progress_pane_t2

0xbf3e,	// (0x000a101c) mup3_progress_pane_t3

0x0002,

0xf771,	// (0x000a484f) mup3_progress_pane_t

0xbf5b,	// (0x000a1039) mup_progress_pane_cp03

0xe0f4,	// (0x000a31d2) bg_tb_trans_pane_cp04

0x5812,	// (0x0009a8f0) mup3_volume_pane

0x581a,	// (0x0009a8f8) popup_mup3_control_window_g1

0x5823,	// (0x0009a901) mup3_volume_pane_g1

0x582c,	// (0x0009a90a) mup3_volume_pane_g2

0x5835,	// (0x0009a913) mup3_volume_pane_g3

0x0002,

0xf778,	// (0x000a4856) mup3_volume_pane_g

0xe0f4,	// (0x000a31d2) bg_tb_trans_pane_cp03

0xbf6b,	// (0x000a1049) popup_mup3_text_window_g1

0xbf73,	// (0x000a1051) popup_mup3_text_window_t1

0xed29,	// (0x000a3e07) list_calc_item_pane_g1_ParamLimits

0xb940,	// (0x000a0a1e) mup_volume_pane_cp_g1

0x51f7,	// (0x0009a2d5) main_touch_calib_pane_t3

0x520d,	// (0x0009a2eb) main_touch_calib_pane_t4

0x5223,	// (0x0009a301) main_touch_calib_pane_t5

0x0ed2,	// (0x00095fb0) aid_cell_size_toolbar2

0x0eda,	// (0x00095fb8) aid_popup3_width_pane

0x0f1a,	// (0x00095ff8) aid_zoom_text_msg_primary

0x1d0e,	// (0x00096dec) vorec_t7

0xec8a,	// (0x000a3d68) bg_calc_paper_pane_g1_ParamLimits

0xec96,	// (0x000a3d74) bg_calc_paper_pane_g2_ParamLimits

0xeca2,	// (0x000a3d80) bg_calc_paper_pane_g3_ParamLimits

0xecae,	// (0x000a3d8c) bg_calc_paper_pane_g4_ParamLimits

0xecba,	// (0x000a3d98) bg_calc_paper_pane_g5_ParamLimits

0x1578,	// (0x00096656) bg_calc_paper_pane_g6_ParamLimits

0x1589,	// (0x00096667) bg_calc_paper_pane_g7_ParamLimits

0x159a,	// (0x00096678) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x000a423f) bg_calc_paper_pane_g_ParamLimits

0x15ab,	// (0x00096689) calc_bg_paper_pane_g9_ParamLimits

0x1e1e,	// (0x00096efc) image_qvga_pane_ParamLimits

0x1e1e,	// (0x00096efc) image_qvga_pane

0xe796,	// (0x000a3874) bg_popup_sub_pane_cp04_ParamLimits

0xa5ab,	// (0x0009f689) popup_mup_playback_window_g1_ParamLimits

0xa5b7,	// (0x0009f695) popup_mup_playback_window_t1_ParamLimits

0xa5cc,	// (0x0009f6aa) popup_mup_playback_window_t2_ParamLimits

0xf4be,	// (0x000a459c) popup_mup_playback_window_t_ParamLimits

0x4cfe,	// (0x00099ddc) main_mup2_pane_g3_ParamLimits

0x4cfe,	// (0x00099ddc) main_mup2_pane_g3

0x21ea,	// (0x000972c8) popup_toolbar_window_cp04

0xa9c1,	// (0x0009fa9f) popup_call2_audio_second_window_g3_ParamLimits

0xa9c1,	// (0x0009fa9f) popup_call2_audio_second_window_g3

0xadcb,	// (0x0009fea9) popup_call2_audio_first_window_g4_ParamLimits

0xadcb,	// (0x0009fea9) popup_call2_audio_first_window_g4

0xb44a,	// (0x000a0528) popup_call2_audio_in_window_g4_ParamLimits

0xb44a,	// (0x000a0528) popup_call2_audio_in_window_g4

0x4108,	// (0x000991e6) aid_area_sk_bg_cut_ParamLimits

0x4108,	// (0x000991e6) aid_area_sk_bg_cut

0xa5e1,	// (0x0009f6bf) aid_area_sk_bg_cut_2_ParamLimits

0xa5e1,	// (0x0009f6bf) aid_area_sk_bg_cut_2

0x5086,	// (0x0009a164) aid_placing_details_win

0x508e,	// (0x0009a16c) aid_placing_details_win_2

0xbd61,	// (0x000a0e3f) camera2_autofocus_pane_g1_ParamLimits

0x1129,	// (0x00096207) popup_fixed_preview_cale_window_ParamLimits

0x1129,	// (0x00096207) popup_fixed_preview_cale_window

0xa3c6,	// (0x0009f4a4) navi_slider_pane_g3

0xa3cf,	// (0x0009f4ad) navi_slider_pane_g4

0xa3d8,	// (0x0009f4b6) navi_slider_pane_g5

0xa3c6,	// (0x0009f4a4) navi_slider_pane_g6

0x395f,	// (0x00098a3d) navi_slider_pane_g7

0xa4eb,	// (0x0009f5c9) mup_scale_pane_g3

0xa4f4,	// (0x0009f5d2) mup_scale_pane_g4

0xa4fd,	// (0x0009f5db) mup_scale_pane_g5

0x3d9e,	// (0x00098e7c) mup_scale_pane_g6

0x3da7,	// (0x00098e85) mup_scale_pane_g7

0xa3c6,	// (0x0009f4a4) cams2_slider_pane_g3

0xb9c2,	// (0x000a0aa0) cams2_slider_pane_g4

0x4fde,	// (0x0009a0bc) cams2_slider_pane_g5

0xa3c6,	// (0x0009f4a4) cams2_slider_pane_g6

0x4fe6,	// (0x0009a0c4) cams2_slider_pane_g7

0xbbef,	// (0x000a0ccd) camera2_autofocus_pane_cp_g1

0xb7ab,	// (0x000a0889) bg_popup_preview_window_pane_cp02_ParamLimits

0xb7ab,	// (0x000a0889) bg_popup_preview_window_pane_cp02

0xbf81,	// (0x000a105f) list_fp_cale_pane_ParamLimits

0xbf81,	// (0x000a105f) list_fp_cale_pane

0xbf8d,	// (0x000a106b) popup_fixed_preview_cale_window_t1_ParamLimits

0xbf8d,	// (0x000a106b) popup_fixed_preview_cale_window_t1

0x583e,	// (0x0009a91c) popup_fixed_preview_cale_window_t2_ParamLimits

0x583e,	// (0x0009a91c) popup_fixed_preview_cale_window_t2

0x5853,	// (0x0009a931) popup_fixed_preview_cale_window_t3_ParamLimits

0x5853,	// (0x0009a931) popup_fixed_preview_cale_window_t3

0x0002,

0xf77f,	// (0x000a485d) popup_fixed_preview_cale_window_t_ParamLimits

0xf77f,	// (0x000a485d) popup_fixed_preview_cale_window_t

0x5868,	// (0x0009a946) list_single_fp_cale_pane_ParamLimits

0x5868,	// (0x0009a946) list_single_fp_cale_pane

0xbfab,	// (0x000a1089) list_single_fp_cale_pane_g1_ParamLimits

0xbfab,	// (0x000a1089) list_single_fp_cale_pane_g1

0xbfb7,	// (0x000a1095) list_single_fp_cale_pane_g2_ParamLimits

0xbfb7,	// (0x000a1095) list_single_fp_cale_pane_g2

0x0002,

0xf786,	// (0x000a4864) list_single_fp_cale_pane_g_ParamLimits

0xf786,	// (0x000a4864) list_single_fp_cale_pane_g

0xbfd0,	// (0x000a10ae) list_single_fp_cale_pane_t1_ParamLimits

0xbfd0,	// (0x000a10ae) list_single_fp_cale_pane_t1

0xbfe2,	// (0x000a10c0) list_single_fp_cale_pane_t2_ParamLimits

0xbfe2,	// (0x000a10c0) list_single_fp_cale_pane_t2

0x0001,

0xf78d,	// (0x000a486b) list_single_fp_cale_pane_t_ParamLimits

0xf78d,	// (0x000a486b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x119d,	// (0x0009627b) main_dialer_pane

0x587c,	// (0x0009a95a) aid_cell_size_keypad

0x5886,	// (0x0009a964) dialer_ne_pane

0x5890,	// (0x0009a96e) grid_dialer_command_1_pane

0x5898,	// (0x0009a976) grid_dialer_command_2_pane

0x58a0,	// (0x0009a97e) grid_dialer_keypad_pane

0x58b4,	// (0x0009a992) bg_popup_call_pane_cp06_ParamLimits

0x58b4,	// (0x0009a992) bg_popup_call_pane_cp06

0x58c0,	// (0x0009a99e) dialer_ne_clear_pane_ParamLimits

0x58c0,	// (0x0009a99e) dialer_ne_clear_pane

0xc015,	// (0x000a10f3) dialer_ne_pane_g1

0xc01d,	// (0x000a10fb) dialer_ne_pane_t1_ParamLimits

0xc01d,	// (0x000a10fb) dialer_ne_pane_t1

0x58cc,	// (0x0009a9aa) dialer_ne_pane_t2_ParamLimits

0x58cc,	// (0x0009a9aa) dialer_ne_pane_t2

0x58e9,	// (0x0009a9c7) dialer_ne_pane_t3_ParamLimits

0x58e9,	// (0x0009a9c7) dialer_ne_pane_t3

0x0002,

0xf792,	// (0x000a4870) dialer_ne_pane_t_ParamLimits

0xf792,	// (0x000a4870) dialer_ne_pane_t

0x590d,	// (0x0009a9eb) dialer_ne_pane_t3_copy1_ParamLimits

0x590d,	// (0x0009a9eb) dialer_ne_pane_t3_copy1

0x5931,	// (0x0009aa0f) cell_dialer_keypad_pane_ParamLimits

0x5931,	// (0x0009aa0f) cell_dialer_keypad_pane

0x5948,	// (0x0009aa26) cell_dialer_command_1_pane_ParamLimits

0x5948,	// (0x0009aa26) cell_dialer_command_1_pane

0x595e,	// (0x0009aa3c) cell_dialer_command_2_pane_ParamLimits

0x595e,	// (0x0009aa3c) cell_dialer_command_2_pane

0xc02f,	// (0x000a110d) bg_button_pane_cp02_ParamLimits

0xc02f,	// (0x000a110d) bg_button_pane_cp02

0x596d,	// (0x0009aa4b) cell_dialer_keypad_pane_g1_ParamLimits

0x596d,	// (0x0009aa4b) cell_dialer_keypad_pane_g1

0xc02f,	// (0x000a110d) bg_button_pane_cp03_ParamLimits

0xc02f,	// (0x000a110d) bg_button_pane_cp03

0x5982,	// (0x0009aa60) cell_dialer_command_1_pane_g1_ParamLimits

0x5982,	// (0x0009aa60) cell_dialer_command_1_pane_g1

0xc03b,	// (0x000a1119) bg_button_pane_cp04

0x5996,	// (0x0009aa74) cell_dialer_command_2_pane_g1

0xa3b5,	// (0x0009f493) bg_button_pane_cp06

0xc043,	// (0x000a1121) dialer_ne_clear_pane_g1

0x389a,	// (0x00098978) navi_pane_g2

0x38c8,	// (0x000989a6) navi_pane_g3

0x0002,

0xf3c1,	// (0x000a449f) navi_pane_g

0x38f3,	// (0x000989d1) navi_pane_mv_g2

0x391a,	// (0x000989f8) navi_pane_mv_g5

0x3922,	// (0x00098a00) navi_pane_mv_t1

0xec7e,	// (0x000a3d5c) main_clock2_pane

0x59d6,	// (0x0009aab4) main_clock2_list_pane_ParamLimits

0x59d6,	// (0x0009aab4) main_clock2_list_pane

0x5a00,	// (0x0009aade) main_clock2_pane_t1_ParamLimits

0x5a00,	// (0x0009aade) main_clock2_pane_t1

0x5a24,	// (0x0009ab02) main_clock2_pane_t2_ParamLimits

0x5a24,	// (0x0009ab02) main_clock2_pane_t2

0x0004,

0xf799,	// (0x000a4877) main_clock2_pane_t_ParamLimits

0xf799,	// (0x000a4877) main_clock2_pane_t

0x5a7f,	// (0x0009ab5d) popup_clock_analogue_window_cp03_ParamLimits

0x5a7f,	// (0x0009ab5d) popup_clock_analogue_window_cp03

0x5a9d,	// (0x0009ab7b) popup_clock_digital_window_cp02_ParamLimits

0x5a9d,	// (0x0009ab7b) popup_clock_digital_window_cp02

0x5b0c,	// (0x0009abea) main_clock2_list_single_pane_ParamLimits

0x5b0c,	// (0x0009abea) main_clock2_list_single_pane

0xa3b5,	// (0x0009f493) list_highlight_pane_cp05

0xc061,	// (0x000a113f) main_clock2_list_single_pane_t1

0x21ea,	// (0x000972c8) popup_toolbar_window_cp04_ParamLimits

0x50b0,	// (0x0009a18e) camera2_autofocus_pane_g2_ParamLimits

0x50b0,	// (0x0009a18e) camera2_autofocus_pane_g2

0x50bc,	// (0x0009a19a) camera2_autofocus_pane_g3_ParamLimits

0x50bc,	// (0x0009a19a) camera2_autofocus_pane_g3

0x50c8,	// (0x0009a1a6) camera2_autofocus_pane_g4_ParamLimits

0x50c8,	// (0x0009a1a6) camera2_autofocus_pane_g4

0x50d4,	// (0x0009a1b2) camera2_autofocus_pane_g5_ParamLimits

0x50d4,	// (0x0009a1b2) camera2_autofocus_pane_g5

0x0004,

0xf6e2,	// (0x000a47c0) camera2_autofocus_pane_g_ParamLimits

0xf6e2,	// (0x000a47c0) camera2_autofocus_pane_g

0x5267,	// (0x0009a345) camera2_autofocus_pane_cp_g2

0x526f,	// (0x0009a34d) camera2_autofocus_pane_cp_g3

0x5277,	// (0x0009a355) camera2_autofocus_pane_cp_g4

0x527f,	// (0x0009a35d) camera2_autofocus_pane_cp_g5

0x0004,

0xf748,	// (0x000a4826) camera2_autofocus_pane_cp_g

0x58ac,	// (0x0009a98a) popup_dialer_spcha_window

0xe0f4,	// (0x000a31d2) bg_popup_sub_pane_cp07

0xc06f,	// (0x000a114d) list_spcha_pane

0xc077,	// (0x000a1155) list_single_spcha_pane_ParamLimits

0xc077,	// (0x000a1155) list_single_spcha_pane

0xe0f4,	// (0x000a31d2) list_highlight_pane_cp06

0xc088,	// (0x000a1166) list_single_spcha_pane_t1

0xb1f4,	// (0x000a02d2) popup_call2_audio_out_window_g4_ParamLimits

0xb1f4,	// (0x000a02d2) popup_call2_audio_out_window_g4

0x119d,	// (0x0009627b) main_imed2_pane

0x4753,	// (0x00099831) popup_imed_adjust2_window

0x4766,	// (0x00099844) popup_imed_trans_window_ParamLimits

0x4766,	// (0x00099844) popup_imed_trans_window

0xba2b,	// (0x000a0b09) popup_blid_sat_info2_window_t1

0xba39,	// (0x000a0b17) popup_blid_sat_info2_window_t2

0x000a,

0xf677,	// (0x000a4755) popup_blid_sat_info2_window_t

0x5bb6,	// (0x0009ac94) aid_size_cell_colour_35

0x5bd0,	// (0x0009acae) aid_size_cell_colour_112

0x5be7,	// (0x0009acc5) aid_size_cell_effect

0xecc6,	// (0x000a3da4) bg_tb_trans_pane_cp02

0xb8ea,	// (0x000a09c8) heading_imed_pane

0x5c01,	// (0x0009acdf) listscroll_imed_pane

0xc096,	// (0x000a1174) heading_imed_pane_g1

0xc09e,	// (0x000a117c) heading_imed_pane_t1

0xc0ac,	// (0x000a118a) grid_imed_colour_35_pane_ParamLimits

0xc0ac,	// (0x000a118a) grid_imed_colour_35_pane

0x5c0d,	// (0x0009aceb) grid_imed_effect_pane

0xc0c4,	// (0x000a11a2) list_imed_aspect_pane

0x5c1d,	// (0x0009acfb) scroll_pane_cp027_ParamLimits

0x5c1d,	// (0x0009acfb) scroll_pane_cp027

0x5c29,	// (0x0009ad07) cell_imed_effect_pane_ParamLimits

0x5c29,	// (0x0009ad07) cell_imed_effect_pane

0xc0cc,	// (0x000a11aa) cell_imed_colour_pane_ParamLimits

0xc0cc,	// (0x000a11aa) cell_imed_colour_pane

0xc10e,	// (0x000a11ec) cell_imed_colour_pane_g1_ParamLimits

0xc10e,	// (0x000a11ec) cell_imed_colour_pane_g1

0xc11f,	// (0x000a11fd) hgihlgiht_grid_pane_cp016_ParamLimits

0xc11f,	// (0x000a11fd) hgihlgiht_grid_pane_cp016

0x5c41,	// (0x0009ad1f) cell_imed_effect_pane_g1

0x5c49,	// (0x0009ad27) grid_highlight_pane_cp017

0xc130,	// (0x000a120e) list_imed_single_pane_ParamLimits

0xc130,	// (0x000a120e) list_imed_single_pane

0xe0f4,	// (0x000a31d2) list_highlight_pane_cp07

0xc146,	// (0x000a1224) list_imed_aspect_pane_comp1_t1

0xb7b7,	// (0x000a0895) bg_tb_trans_pane_cp05

0xc168,	// (0x000a1246) popup_imed_adjust2_window_g1

0xc18f,	// (0x000a126d) popup_imed_adjust2_window_t1

0xc1a7,	// (0x000a1285) slider_imed_adjust_pane

0xc1bb,	// (0x000a1299) slider_imed_adjust_pane_g1

0xc1cb,	// (0x000a12a9) slider_imed_adjust_pane_g2

0xc1db,	// (0x000a12b9) slider_imed_adjust_pane_g3

0xc1ec,	// (0x000a12ca) slider_imed_adjust_pane_g4

0x0003,

0xf7b6,	// (0x000a4894) slider_imed_adjust_pane_g

0x5c52,	// (0x0009ad30) aid_size_cell_clipart2

0x5c5e,	// (0x0009ad3c) grid_imed_clipart_pane

0xc1fd,	// (0x000a12db) scroll_pane_cp031

0x5c68,	// (0x0009ad46) cell_imed_clipart_pane_ParamLimits

0x5c68,	// (0x0009ad46) cell_imed_clipart_pane

0x5c8f,	// (0x0009ad6d) cell_imed_clipart_pane_g1

0xe0f4,	// (0x000a31d2) grid_highlight_pane_cp014

0x59e2,	// (0x0009aac0) main_clock2_pane_g1_ParamLimits

0x59e2,	// (0x0009aac0) main_clock2_pane_g1

0x5ab7,	// (0x0009ab95) aid_call2_pane_cp10

0x5ac9,	// (0x0009aba7) aid_call_pane_cp10

0xa2ea,	// (0x0009f3c8) popup_clock_analogue_window_cp10_g1

0xa2ea,	// (0x0009f3c8) popup_clock_analogue_window_cp10_g2

0x5adb,	// (0x0009abb9) popup_clock_analogue_window_cp10_g3

0x5adb,	// (0x0009abb9) popup_clock_analogue_window_cp10_g4

0xa2ea,	// (0x0009f3c8) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7a4,	// (0x000a4882) popup_clock_analogue_window_cp10_g

0x5aed,	// (0x0009abcb) popup_clock_analogue_window_cp10_t1

0x5b1e,	// (0x0009abfc) clock_digital_number_pane_cp10_ParamLimits

0x5b1e,	// (0x0009abfc) clock_digital_number_pane_cp10

0x5b36,	// (0x0009ac14) clock_digital_number_pane_cp11_ParamLimits

0x5b36,	// (0x0009ac14) clock_digital_number_pane_cp11

0x5b4e,	// (0x0009ac2c) clock_digital_number_pane_cp12_ParamLimits

0x5b4e,	// (0x0009ac2c) clock_digital_number_pane_cp12

0x5b66,	// (0x0009ac44) clock_digital_number_pane_cp13_ParamLimits

0x5b66,	// (0x0009ac44) clock_digital_number_pane_cp13

0x5b7e,	// (0x0009ac5c) clock_digital_separator_pane_cp10_ParamLimits

0x5b7e,	// (0x0009ac5c) clock_digital_separator_pane_cp10

0x5b96,	// (0x0009ac74) popup_clock_digital_window_cp02_t1_ParamLimits

0x5b96,	// (0x0009ac74) popup_clock_digital_window_cp02_t1

0xe78e,	// (0x000a386c) clock_digital_number_pane_cp10_g1

0xe78e,	// (0x000a386c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7bf,	// (0x000a489d) clock_digital_number_pane_cp10_g

0xe78e,	// (0x000a386c) clock_digital_separator_pane_cp10_g1

0xe78e,	// (0x000a386c) clock_digital_separator_pane_g2_cp10

0xa385,	// (0x0009f463) navi_pane_vded_g4

0xa38e,	// (0x0009f46c) navi_pane_vded_g5

0xa397,	// (0x0009f475) navi_pane_vded_t1

0x119d,	// (0x0009627b) main_vded_pane

0x5c98,	// (0x0009ad76) main_vded_pane_g1

0x5ca4,	// (0x0009ad82) main_vded_pane_g2

0x5cae,	// (0x0009ad8c) main_vded_pane_g3

0x0002,

0xf7c4,	// (0x000a48a2) main_vded_pane_g

0x5cb8,	// (0x0009ad96) main_vded_pane_t1

0x5cc6,	// (0x0009ada4) main_vded_pane_t2

0x0001,

0xf7cb,	// (0x000a48a9) main_vded_pane_t

0x5cd4,	// (0x0009adb2) vded_slider_pane

0x5cde,	// (0x0009adbc) vded_video_pane

0xc205,	// (0x000a12e3) vded_video_pane_g1

0x5ce8,	// (0x0009adc6) vded_video_pane_g2

0xbbef,	// (0x000a0ccd) vded_video_pane_g3

0x0002,

0xf7d0,	// (0x000a48ae) vded_video_pane_g

0xc20f,	// (0x000a12ed) vded_slider_pane_g1

0xc218,	// (0x000a12f6) vded_slider_pane_g2

0xc221,	// (0x000a12ff) vded_slider_pane_g3

0xc22a,	// (0x000a1308) vded_slider_pane_g4

0xc233,	// (0x000a1311) vded_slider_pane_g5

0x0004,

0xf7d7,	// (0x000a48b5) vded_slider_pane_g

0x57ad,	// (0x0009a88b) mup3_rocker_pane_ParamLimits

0x57ad,	// (0x0009a88b) mup3_rocker_pane

0x5cf1,	// (0x0009adcf) mup3_control_keys_pane_g1

0x5cf9,	// (0x0009add7) mup3_control_keys_pane_g2

0x5d01,	// (0x0009addf) mup3_control_keys_pane_g3

0x5d09,	// (0x0009ade7) mup3_control_keys_pane_g4

0x0003,

0xf7e2,	// (0x000a48c0) mup3_control_keys_pane_g

0x1151,	// (0x0009622f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1151,	// (0x0009622f) popup_toolbar2_fixed_window_cp01

0x57c7,	// (0x0009a8a5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x57c7,	// (0x0009a8a5) popup_toolbar2_fixed_window_cp02

0xab33,	// (0x0009fc11) popup_call2_audio_second_window_t4_ParamLimits

0xab33,	// (0x0009fc11) popup_call2_audio_second_window_t4

0xb061,	// (0x000a013f) popup_call2_audio_first_window_t6_ParamLimits

0xb061,	// (0x000a013f) popup_call2_audio_first_window_t6

0xb2f7,	// (0x000a03d5) popup_call2_audio_out_window_t6_ParamLimits

0xb2f7,	// (0x000a03d5) popup_call2_audio_out_window_t6

0x119d,	// (0x0009627b) main_vitu_pane

0x5d19,	// (0x0009adf7) aid_size_cell_itu_ParamLimits

0x5d19,	// (0x0009adf7) aid_size_cell_itu

0xe252,	// (0x000a3330) bg_popup_window_pane_cp08_ParamLimits

0xe252,	// (0x000a3330) bg_popup_window_pane_cp08

0x5d27,	// (0x0009ae05) field_vitu_entry_pane_ParamLimits

0x5d27,	// (0x0009ae05) field_vitu_entry_pane

0x5d36,	// (0x0009ae14) grid_vitu_function_pane_ParamLimits

0x5d36,	// (0x0009ae14) grid_vitu_function_pane

0x5d46,	// (0x0009ae24) grid_vitu_itu_pane_ParamLimits

0x5d46,	// (0x0009ae24) grid_vitu_itu_pane

0x5d56,	// (0x0009ae34) cell_vitu_itu_pane_ParamLimits

0x5d56,	// (0x0009ae34) cell_vitu_itu_pane

0x5d6b,	// (0x0009ae49) cell_vitu_function_pane_ParamLimits

0x5d6b,	// (0x0009ae49) cell_vitu_function_pane

0xecc6,	// (0x000a3da4) bg_popup_sub_pane_cp08_ParamLimits

0xecc6,	// (0x000a3da4) bg_popup_sub_pane_cp08

0x5d7f,	// (0x0009ae5d) field_vitu_entry_pane_t1_ParamLimits

0x5d7f,	// (0x0009ae5d) field_vitu_entry_pane_t1

0xc254,	// (0x000a1332) field_vitu_entry_pane_t2_ParamLimits

0xc254,	// (0x000a1332) field_vitu_entry_pane_t2

0x0001,

0xf7f0,	// (0x000a48ce) field_vitu_entry_pane_t_ParamLimits

0xf7f0,	// (0x000a48ce) field_vitu_entry_pane_t

0xc271,	// (0x000a134f) bg_button_pane_cp05_ParamLimits

0xc271,	// (0x000a134f) bg_button_pane_cp05

0x5d9c,	// (0x0009ae7a) cell_vitu_itu_pane_g1

0x5db4,	// (0x0009ae92) cell_vitu_itu_pane_t1_ParamLimits

0x5db4,	// (0x0009ae92) cell_vitu_itu_pane_t1

0x5dc6,	// (0x0009aea4) cell_vitu_itu_pane_t2_ParamLimits

0x5dc6,	// (0x0009aea4) cell_vitu_itu_pane_t2

0x0002,

0xf7f5,	// (0x000a48d3) cell_vitu_itu_pane_t_ParamLimits

0xf7f5,	// (0x000a48d3) cell_vitu_itu_pane_t

0xc27f,	// (0x000a135d) bg_button_pane_cp07

0x5e09,	// (0x0009aee7) cell_vitu_function_pane_g1

0x141c,	// (0x000964fa) main_calc_pane_g1

0x0f0e,	// (0x00095fec) aid_visual_content_pane

0x119d,	// (0x0009627b) main_vradio_pane

0x5e12,	// (0x0009aef0) main_vradio_pane_g1_ParamLimits

0x5e12,	// (0x0009aef0) main_vradio_pane_g1

0xc289,	// (0x000a1367) main_vradio_pane_g2_ParamLimits

0xc289,	// (0x000a1367) main_vradio_pane_g2

0x0001,

0xf7fc,	// (0x000a48da) main_vradio_pane_g_ParamLimits

0xf7fc,	// (0x000a48da) main_vradio_pane_g

0x5e22,	// (0x0009af00) main_vradio_pane_t1_ParamLimits

0x5e22,	// (0x0009af00) main_vradio_pane_t1

0x5e34,	// (0x0009af12) main_vradio_pane_t2_ParamLimits

0x5e34,	// (0x0009af12) main_vradio_pane_t2

0xc296,	// (0x000a1374) main_vradio_pane_t3_ParamLimits

0xc296,	// (0x000a1374) main_vradio_pane_t3

0x0002,

0xf801,	// (0x000a48df) main_vradio_pane_t_ParamLimits

0xf801,	// (0x000a48df) main_vradio_pane_t

0x5e46,	// (0x0009af24) vradio_rocker_control_pane_ParamLimits

0x5e46,	// (0x0009af24) vradio_rocker_control_pane

0x5e52,	// (0x0009af30) vradio_station_info_pane_ParamLimits

0x5e52,	// (0x0009af30) vradio_station_info_pane

0xc2aa,	// (0x000a1388) vradio_frequency_info_pane_ParamLimits

0xc2aa,	// (0x000a1388) vradio_frequency_info_pane

0xbbef,	// (0x000a0ccd) vradio_station_info_pane_g1

0xc2b9,	// (0x000a1397) vradio_station_info_pane_t1_ParamLimits

0xc2b9,	// (0x000a1397) vradio_station_info_pane_t1

0xc2db,	// (0x000a13b9) vradio_station_info_pane_t2_ParamLimits

0xc2db,	// (0x000a13b9) vradio_station_info_pane_t2

0x0001,

0xf808,	// (0x000a48e6) vradio_station_info_pane_t_ParamLimits

0xf808,	// (0x000a48e6) vradio_station_info_pane_t

0xc2ed,	// (0x000a13cb) vradio_tuning_pane

0xc2f5,	// (0x000a13d3) vradio_rocker_control_pane_g1

0xc2fd,	// (0x000a13db) vradio_rocker_control_pane_g2

0xc305,	// (0x000a13e3) vradio_rocker_control_pane_g3

0xc30d,	// (0x000a13eb) vradio_rocker_control_pane_g4

0xc315,	// (0x000a13f3) vradio_rocker_control_pane_g5

0x0004,

0xf80d,	// (0x000a48eb) vradio_rocker_control_pane_g

0x5e61,	// (0x0009af3f) vradio_frequency_info_pane_g1

0xc31d,	// (0x000a13fb) vradio_frequency_info_pane_t1_ParamLimits

0xc31d,	// (0x000a13fb) vradio_frequency_info_pane_t1

0x5e6b,	// (0x0009af49) vradio_tuning_pane_g1

0x5e74,	// (0x0009af52) vradio_tuning_pane_t1

0x0f57,	// (0x00096035) area_side_right_pane_ParamLimits

0x0f57,	// (0x00096035) area_side_right_pane

0xb772,	// (0x000a0850) status_small_pane_g1

0xb77a,	// (0x000a0858) status_small_pane_g2

0xb783,	// (0x000a0861) status_small_pane_g3

0xb78c,	// (0x000a086a) status_small_pane_g4

0x0003,

0xf5cd,	// (0x000a46ab) status_small_pane_g

0xb795,	// (0x000a0873) status_small_pane_t1

0x119d,	// (0x0009627b) main_video3_pane

0xc331,	// (0x000a140f) cams_zoom_vslider_pane

0xc339,	// (0x000a1417) image3_wide_pane_ParamLimits

0xc339,	// (0x000a1417) image3_wide_pane

0xc353,	// (0x000a1431) image3_wide_small_pane

0xc35f,	// (0x000a143d) main_video3_pane_g1_ParamLimits

0xc35f,	// (0x000a143d) main_video3_pane_g1

0xc37b,	// (0x000a1459) main_video3_pane_g2_ParamLimits

0xc37b,	// (0x000a1459) main_video3_pane_g2

0x0001,

0xf818,	// (0x000a48f6) main_video3_pane_g_ParamLimits

0xf818,	// (0x000a48f6) main_video3_pane_g

0xc397,	// (0x000a1475) main_video3_pane_t1_ParamLimits

0xc397,	// (0x000a1475) main_video3_pane_t1

0xc3c2,	// (0x000a14a0) main_video3_pane_t2_ParamLimits

0xc3c2,	// (0x000a14a0) main_video3_pane_t2

0xc3ed,	// (0x000a14cb) main_video3_pane_t3_ParamLimits

0xc3ed,	// (0x000a14cb) main_video3_pane_t3

0x0002,

0xf81d,	// (0x000a48fb) main_video3_pane_t_ParamLimits

0xf81d,	// (0x000a48fb) main_video3_pane_t

0xc41a,	// (0x000a14f8) cams_zoom_vslider_pane_g1

0xc423,	// (0x000a1501) cams_zoom_vslider_pane_g2

0x0001,

0xf824,	// (0x000a4902) cams_zoom_vslider_pane_g

0xc42b,	// (0x000a1509) small_slider_vertical_pane

0xbbef,	// (0x000a0ccd) small_slider_vertical_pane_g1

0xbbef,	// (0x000a0ccd) small_slider_vertical_pane_g2

0xc433,	// (0x000a1511) small_slider_vertical_pane_g3

0x0002,

0xf829,	// (0x000a4907) small_slider_vertical_pane_g

0x119d,	// (0x0009627b) main_hwr_training_pane

0xc43c,	// (0x000a151a) hwr_training_instruct_pane_ParamLimits

0xc43c,	// (0x000a151a) hwr_training_instruct_pane

0x5e83,	// (0x0009af61) hwr_training_navi_pane_ParamLimits

0x5e83,	// (0x0009af61) hwr_training_navi_pane

0x5e9d,	// (0x0009af7b) hwr_training_write_pane_ParamLimits

0x5e9d,	// (0x0009af7b) hwr_training_write_pane

0xe0f4,	// (0x000a31d2) bg_frame_shadow_pane

0xc473,	// (0x000a1551) hwr_training_write_pane_g1

0xc47b,	// (0x000a1559) hwr_training_write_pane_g2

0xc483,	// (0x000a1561) hwr_training_write_pane_g3

0xc48b,	// (0x000a1569) hwr_training_write_pane_g4

0xc493,	// (0x000a1571) hwr_training_write_pane_g5

0xc49b,	// (0x000a1579) hwr_training_write_pane_g6

0xc4a3,	// (0x000a1581) hwr_training_write_pane_g7

0x0006,

0xf830,	// (0x000a490e) hwr_training_write_pane_g

0x5ed5,	// (0x0009afb3) hwr_training_navi_pane_g1_ParamLimits

0x5ed5,	// (0x0009afb3) hwr_training_navi_pane_g1

0x5ee7,	// (0x0009afc5) hwr_training_navi_pane_g2_ParamLimits

0x5ee7,	// (0x0009afc5) hwr_training_navi_pane_g2

0x5ef9,	// (0x0009afd7) hwr_training_navi_pane_g3_ParamLimits

0x5ef9,	// (0x0009afd7) hwr_training_navi_pane_g3

0x5f09,	// (0x0009afe7) hwr_training_navi_pane_g4_ParamLimits

0x5f09,	// (0x0009afe7) hwr_training_navi_pane_g4

0x0004,

0xf83f,	// (0x000a491d) hwr_training_navi_pane_g_ParamLimits

0xf83f,	// (0x000a491d) hwr_training_navi_pane_g

0x5f23,	// (0x0009b001) hwr_training_navi_pane_t1

0x5f31,	// (0x0009b00f) list_single_hwr_training_instruct_pane_ParamLimits

0x5f31,	// (0x0009b00f) list_single_hwr_training_instruct_pane

0xc4ab,	// (0x000a1589) list_single_hwr_training_instruct_pane_t1

0xbb2f,	// (0x000a0c0d) bg_frame_shadow_pane_g1

0xc4ba,	// (0x000a1598) bg_frame_shadow_pane_g2

0xc4c2,	// (0x000a15a0) bg_frame_shadow_pane_g3

0xc4ca,	// (0x000a15a8) bg_frame_shadow_pane_g4

0xc4d2,	// (0x000a15b0) bg_frame_shadow_pane_g5

0xc4da,	// (0x000a15b8) bg_frame_shadow_pane_g6

0xc4e2,	// (0x000a15c0) bg_frame_shadow_pane_g7

0xedac,	// (0x000a3e8a) bg_frame_shadow_pane_g8

0x0007,

0xf84a,	// (0x000a4928) bg_frame_shadow_pane_g

0x119d,	// (0x0009627b) main_video_tele_dialer_pane

0x5f60,	// (0x0009b03e) aid_size_cell_video_keypad_ParamLimits

0x5f60,	// (0x0009b03e) aid_size_cell_video_keypad

0x5f70,	// (0x0009b04e) grid_video_dialer_keypad_pane_ParamLimits

0x5f70,	// (0x0009b04e) grid_video_dialer_keypad_pane

0x5fa4,	// (0x0009b082) video_down_pane_cp_ParamLimits

0x5fa4,	// (0x0009b082) video_down_pane_cp

0x5fce,	// (0x0009b0ac) cell_video_dialer_keypad_pane_ParamLimits

0x5fce,	// (0x0009b0ac) cell_video_dialer_keypad_pane

0xc4ea,	// (0x000a15c8) bg_button_pane_cp08_ParamLimits

0xc4ea,	// (0x000a15c8) bg_button_pane_cp08

0x5fe3,	// (0x0009b0c1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5fe3,	// (0x0009b0c1) cell_video_dialer_keypad_pane_g1

0x57a1,	// (0x0009a87f) mup3_rocker2_pane_ParamLimits

0x57a1,	// (0x0009a87f) mup3_rocker2_pane

0xbbef,	// (0x000a0ccd) mup3_rocker2_pane_g1

0x46c7,	// (0x000997a5) main_dialer2_pane

0x119d,	// (0x0009627b) main_mp4_pane

0x6026,	// (0x0009b104) main_mp4_pane_g1_ParamLimits

0x6026,	// (0x0009b104) main_mp4_pane_g1

0x6034,	// (0x0009b112) main_mp4_pane_g2_ParamLimits

0x6034,	// (0x0009b112) main_mp4_pane_g2

0x6042,	// (0x0009b120) main_mp4_pane_g3_ParamLimits

0x6042,	// (0x0009b120) main_mp4_pane_g3

0x6087,	// (0x0009b165) main_mp4_pane_g4_ParamLimits

0x6087,	// (0x0009b165) main_mp4_pane_g4

0x60af,	// (0x0009b18d) main_mp4_pane_g5_ParamLimits

0x60af,	// (0x0009b18d) main_mp4_pane_g5

0x0005,

0xf86a,	// (0x000a4948) main_mp4_pane_g_ParamLimits

0xf86a,	// (0x000a4948) main_mp4_pane_g

0x60ff,	// (0x0009b1dd) main_mp4_pane_t1_ParamLimits

0x60ff,	// (0x0009b1dd) main_mp4_pane_t1

0x615b,	// (0x0009b239) main_mp4_pane_t2_ParamLimits

0x615b,	// (0x0009b239) main_mp4_pane_t2

0xc4f6,	// (0x000a15d4) main_mp4_pane_t3_ParamLimits

0xc4f6,	// (0x000a15d4) main_mp4_pane_t3

0x61ad,	// (0x0009b28b) main_mp4_pane_t4_ParamLimits

0x61ad,	// (0x0009b28b) main_mp4_pane_t4

0x0003,

0xf877,	// (0x000a4955) main_mp4_pane_t_ParamLimits

0xf877,	// (0x000a4955) main_mp4_pane_t

0x61f1,	// (0x0009b2cf) mp4_progress_pane_ParamLimits

0x61f1,	// (0x0009b2cf) mp4_progress_pane

0x623b,	// (0x0009b319) mp4_rocker_pane_ParamLimits

0x623b,	// (0x0009b319) mp4_rocker_pane

0xc51e,	// (0x000a15fc) mp4_progress_pane_t1

0xc537,	// (0x000a1615) mp4_progress_pane_t2

0x0001,

0xf880,	// (0x000a495e) mp4_progress_pane_t

0xc550,	// (0x000a162e) mup_progress_pane_cp04

0xcd66,	// (0x000a1e44) mp4_rocker_pane_g1

0x625b,	// (0x0009b339) aid_cell_size_keypad2_ParamLimits

0x625b,	// (0x0009b339) aid_cell_size_keypad2

0x626b,	// (0x0009b349) dialer2_ne_pane_ParamLimits

0x626b,	// (0x0009b349) dialer2_ne_pane

0x6279,	// (0x0009b357) grid_dialer2_keypad_pane_ParamLimits

0x6279,	// (0x0009b357) grid_dialer2_keypad_pane

0xcd70,	// (0x000a1e4e) bg_popup_call_pane_cp07_ParamLimits

0xcd70,	// (0x000a1e4e) bg_popup_call_pane_cp07

0x6289,	// (0x0009b367) dialer2_ne_pane_t1_ParamLimits

0x6289,	// (0x0009b367) dialer2_ne_pane_t1

0x62ae,	// (0x0009b38c) cell_dialer2_keypad_pane_ParamLimits

0x62ae,	// (0x0009b38c) cell_dialer2_keypad_pane

0xc56e,	// (0x000a164c) bg_button_pane_pane_cp04_ParamLimits

0xc56e,	// (0x000a164c) bg_button_pane_pane_cp04

0x62c3,	// (0x0009b3a1) cell_dialer2_keypad_pane_g1_ParamLimits

0x62c3,	// (0x0009b3a1) cell_dialer2_keypad_pane_g1

0x20ac,	// (0x0009718a) aid_placing_vt_set_content_ParamLimits

0x20ac,	// (0x0009718a) aid_placing_vt_set_content

0x20d8,	// (0x000971b6) aid_placing_vt_set_title_ParamLimits

0x20d8,	// (0x000971b6) aid_placing_vt_set_title

0x119d,	// (0x0009627b) main_image3_pane

0x635d,	// (0x0009b43b) area_side_right_pane_cp01_ParamLimits

0x635d,	// (0x0009b43b) area_side_right_pane_cp01

0x638a,	// (0x0009b468) main_image3_pane_g1_ParamLimits

0x638a,	// (0x0009b468) main_image3_pane_g1

0x6398,	// (0x0009b476) main_image3_pane_g2_ParamLimits

0x6398,	// (0x0009b476) main_image3_pane_g2

0x63b1,	// (0x0009b48f) main_image3_pane_g3_ParamLimits

0x63b1,	// (0x0009b48f) main_image3_pane_g3

0x63ca,	// (0x0009b4a8) main_image3_pane_g4_ParamLimits

0x63ca,	// (0x0009b4a8) main_image3_pane_g4

0x0003,

0xf88f,	// (0x000a496d) main_image3_pane_g_ParamLimits

0xf88f,	// (0x000a496d) main_image3_pane_g

0x63e3,	// (0x0009b4c1) main_image3_pane_t1_ParamLimits

0x63e3,	// (0x0009b4c1) main_image3_pane_t1

0x6408,	// (0x0009b4e6) main_image3_pane_t2_ParamLimits

0x6408,	// (0x0009b4e6) main_image3_pane_t2

0x6427,	// (0x0009b505) main_image3_pane_t3_ParamLimits

0x6427,	// (0x0009b505) main_image3_pane_t3

0x0003,

0xf898,	// (0x000a4976) main_image3_pane_t_ParamLimits

0xf898,	// (0x000a4976) main_image3_pane_t

0xe252,	// (0x000a3330) grid_sctrl_middle_pane_cp01_ParamLimits

0xe252,	// (0x000a3330) grid_sctrl_middle_pane_cp01

0x6488,	// (0x0009b566) cell_sctrl_middle_pane_cp01_ParamLimits

0x6488,	// (0x0009b566) cell_sctrl_middle_pane_cp01

0x6499,	// (0x0009b577) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6499,	// (0x0009b577) cell_sctrl_middle_pane_cp01_g1

0x119d,	// (0x0009627b) main_call4_pane

0x64a6,	// (0x0009b584) aid_size_button_call4_ParamLimits

0x64a6,	// (0x0009b584) aid_size_button_call4

0x64d6,	// (0x0009b5b4) call4_windows_pane_ParamLimits

0x64d6,	// (0x0009b5b4) call4_windows_pane

0x64f0,	// (0x0009b5ce) grid_call4_button_pane_ParamLimits

0x64f0,	// (0x0009b5ce) grid_call4_button_pane

0xc57a,	// (0x000a1658) call4_windows_conf_pane

0xc58f,	// (0x000a166d) popup_call4_audio_first_window_ParamLimits

0xc58f,	// (0x000a166d) popup_call4_audio_first_window

0xc5db,	// (0x000a16b9) popup_call4_audio_second_window_ParamLimits

0xc5db,	// (0x000a16b9) popup_call4_audio_second_window

0xc5ef,	// (0x000a16cd) popup_call4_audio_wait_window_ParamLimits

0xc5ef,	// (0x000a16cd) popup_call4_audio_wait_window

0x6514,	// (0x0009b5f2) cell_call4_button_pane_ParamLimits

0x6514,	// (0x0009b5f2) cell_call4_button_pane

0x6539,	// (0x0009b617) bg_button_pane_cp09_ParamLimits

0x6539,	// (0x0009b617) bg_button_pane_cp09

0x6545,	// (0x0009b623) cell_call4_button_pane_g1_ParamLimits

0x6545,	// (0x0009b623) cell_call4_button_pane_g1

0x6552,	// (0x0009b630) cell_call4_button_pane_t1_ParamLimits

0x6552,	// (0x0009b630) cell_call4_button_pane_t1

0xc637,	// (0x000a1715) popup_call4_audio_conf_window_ParamLimits

0xc637,	// (0x000a1715) popup_call4_audio_conf_window

0x57d4,	// (0x0009a8b2) mup3_progress_pane_t1_ParamLimits

0x57f3,	// (0x0009a8d1) mup3_progress_pane_t2_ParamLimits

0xbf3e,	// (0x000a101c) mup3_progress_pane_t3_ParamLimits

0xf771,	// (0x000a484f) mup3_progress_pane_t_ParamLimits

0xbf5b,	// (0x000a1039) mup_progress_pane_cp03_ParamLimits

0x5d11,	// (0x0009adef) mup3_control_keys_pane_g4_copy1

0x621f,	// (0x0009b2fd) mp4_rocker2_pane_ParamLimits

0x621f,	// (0x0009b2fd) mp4_rocker2_pane

0xc64b,	// (0x000a1729) mp4_rocker2_pane_g1

0xc653,	// (0x000a1731) mp4_rocker2_pane_g2

0x6564,	// (0x0009b642) mp4_rocker2_pane_g3

0x656c,	// (0x0009b64a) mp4_rocker2_pane_g4

0x6574,	// (0x0009b652) mp4_rocker2_pane_g5

0x0004,

0xf8a1,	// (0x000a497f) mp4_rocker2_pane_g

0x119d,	// (0x0009627b) main_camera4_pane

0x119d,	// (0x0009627b) main_video4_pane

0x5f80,	// (0x0009b05e) main_video_tele_dialer_pane_t1_ParamLimits

0x5f80,	// (0x0009b05e) main_video_tele_dialer_pane_t1

0x5f92,	// (0x0009b070) main_video_tele_dialer_pane_t2_ParamLimits

0x5f92,	// (0x0009b070) main_video_tele_dialer_pane_t2

0x0001,

0xf85b,	// (0x000a4939) main_video_tele_dialer_pane_t_ParamLimits

0xf85b,	// (0x000a4939) main_video_tele_dialer_pane_t

0x6594,	// (0x0009b672) cam4_autofocus_pane_ParamLimits

0x6594,	// (0x0009b672) cam4_autofocus_pane

0x65ae,	// (0x0009b68c) cam4_image_uncrop_pane_ParamLimits

0x65ae,	// (0x0009b68c) cam4_image_uncrop_pane

0x65c5,	// (0x0009b6a3) cam4_indicators_pane_ParamLimits

0x65c5,	// (0x0009b6a3) cam4_indicators_pane

0x65e1,	// (0x0009b6bf) main_camera4_pane_g1_ParamLimits

0x65e1,	// (0x0009b6bf) main_camera4_pane_g1

0x65ed,	// (0x0009b6cb) main_camera4_pane_g2_ParamLimits

0x65ed,	// (0x0009b6cb) main_camera4_pane_g2

0x65ed,	// (0x0009b6cb) main_camera4_pane_g3_ParamLimits

0x65ed,	// (0x0009b6cb) main_camera4_pane_g3

0x65f9,	// (0x0009b6d7) main_camera4_pane_g4_ParamLimits

0x65f9,	// (0x0009b6d7) main_camera4_pane_g4

0x6605,	// (0x0009b6e3) main_camera4_pane_g5_ParamLimits

0x6605,	// (0x0009b6e3) main_camera4_pane_g5

0x0005,

0xf8ac,	// (0x000a498a) main_camera4_pane_g_ParamLimits

0xf8ac,	// (0x000a498a) main_camera4_pane_g

0x661f,	// (0x0009b6fd) main_camera4_pane_t1_ParamLimits

0x661f,	// (0x0009b6fd) main_camera4_pane_t1

0x6667,	// (0x0009b745) bg_tb_trans_pane_cp06

0x667d,	// (0x0009b75b) cam4_indicators_pane_g1

0x668e,	// (0x0009b76c) cam4_indicators_pane_g2

0x0002,

0xf8c7,	// (0x000a49a5) cam4_indicators_pane_g

0x66ac,	// (0x0009b78a) cam4_indicators_pane_t1

0x66d6,	// (0x0009b7b4) main_video4_pane_g1_ParamLimits

0x66d6,	// (0x0009b7b4) main_video4_pane_g1

0x66e2,	// (0x0009b7c0) main_video4_pane_g2_ParamLimits

0x66e2,	// (0x0009b7c0) main_video4_pane_g2

0x66ee,	// (0x0009b7cc) main_video4_pane_g3_ParamLimits

0x66ee,	// (0x0009b7cc) main_video4_pane_g3

0x66fa,	// (0x0009b7d8) main_video4_pane_g4_ParamLimits

0x66fa,	// (0x0009b7d8) main_video4_pane_g4

0x0004,

0xf8ce,	// (0x000a49ac) main_video4_pane_g_ParamLimits

0xf8ce,	// (0x000a49ac) main_video4_pane_g

0x671a,	// (0x0009b7f8) vid4_indicators_pane_ParamLimits

0x671a,	// (0x0009b7f8) vid4_indicators_pane

0x6739,	// (0x0009b817) video4_image_uncrop_cif_pane_ParamLimits

0x6739,	// (0x0009b817) video4_image_uncrop_cif_pane

0x6748,	// (0x0009b826) video4_image_uncrop_nhd_pane_ParamLimits

0x6748,	// (0x0009b826) video4_image_uncrop_nhd_pane

0x65ae,	// (0x0009b68c) video4_image_uncrop_vga_pane_ParamLimits

0x65ae,	// (0x0009b68c) video4_image_uncrop_vga_pane

0x46b9,	// (0x00099797) bg_tb_trans_pane_cp07

0x675d,	// (0x0009b83b) vid4_indicators_pane_g1

0x6771,	// (0x0009b84f) vid4_indicators_pane_g2

0x6785,	// (0x0009b863) vid4_indicators_pane_g3

0x0004,

0xf8d9,	// (0x000a49b7) vid4_indicators_pane_g

0x67b2,	// (0x0009b890) vid4_indicators_pane_t1

0x67c9,	// (0x0009b8a7) cam4_autofocus_pane_g1

0x67d1,	// (0x0009b8af) cam4_autofocus_pane_g2

0x67d9,	// (0x0009b8b7) cam4_autofocus_pane_g3

0x0002,

0xf8e4,	// (0x000a49c2) cam4_autofocus_pane_g

0x67e1,	// (0x0009b8bf) cam4_autofocus_pane_g3_copy1

0x5fb2,	// (0x0009b090) video_down_pane_cp_t1

0x5fc0,	// (0x0009b09e) video_down_pane_cp_t2

0x0001,

0xf860,	// (0x000a493e) video_down_pane_cp_t

0x1183,	// (0x00096261) popup_vitu2_window_ParamLimits

0x1183,	// (0x00096261) popup_vitu2_window

0x67e9,	// (0x0009b8c7) aid_size_cell2_itu2_ParamLimits

0x67e9,	// (0x0009b8c7) aid_size_cell2_itu2

0x680b,	// (0x0009b8e9) aid_size_cell_itu2_ParamLimits

0x680b,	// (0x0009b8e9) aid_size_cell_itu2

0x684f,	// (0x0009b92d) bg_popup_window_pane_cp09_ParamLimits

0x684f,	// (0x0009b92d) bg_popup_window_pane_cp09

0x685d,	// (0x0009b93b) field_vitu2_entry_pane_ParamLimits

0x685d,	// (0x0009b93b) field_vitu2_entry_pane

0x687d,	// (0x0009b95b) grid_vitu2_function_pane_ParamLimits

0x687d,	// (0x0009b95b) grid_vitu2_function_pane

0x68c1,	// (0x0009b99f) grid_vitu2_itu_pane_ParamLimits

0x68c1,	// (0x0009b99f) grid_vitu2_itu_pane

0x6937,	// (0x0009ba15) cell_vitu2_itu_pane_ParamLimits

0x6937,	// (0x0009ba15) cell_vitu2_itu_pane

0x694c,	// (0x0009ba2a) cell_vitu2_function_pane_ParamLimits

0x694c,	// (0x0009ba2a) cell_vitu2_function_pane

0xc65b,	// (0x000a1739) bg_popup_call_pane_cp08_ParamLimits

0xc65b,	// (0x000a1739) bg_popup_call_pane_cp08

0xc674,	// (0x000a1752) field_vitu2_entry_pane_g1

0xc680,	// (0x000a175e) field_vitu2_entry_pane_g2

0x0002,

0xf8eb,	// (0x000a49c9) field_vitu2_entry_pane_g

0x698d,	// (0x0009ba6b) field_vitu2_entry_pane_t1_ParamLimits

0x698d,	// (0x0009ba6b) field_vitu2_entry_pane_t1

0xc69a,	// (0x000a1778) field_vitu2_entry_pane_t2_ParamLimits

0xc69a,	// (0x000a1778) field_vitu2_entry_pane_t2

0x0001,

0xf8f2,	// (0x000a49d0) field_vitu2_entry_pane_t_ParamLimits

0xf8f2,	// (0x000a49d0) field_vitu2_entry_pane_t

0x69bd,	// (0x0009ba9b) bg_button_pane_cp010_ParamLimits

0x69bd,	// (0x0009ba9b) bg_button_pane_cp010

0x69cb,	// (0x0009baa9) cell_vitu2_itu_pane_g1

0x69e9,	// (0x0009bac7) cell_vitu2_itu_pane_t1_ParamLimits

0x69e9,	// (0x0009bac7) cell_vitu2_itu_pane_t1

0x0dff,	// (0x00095edd) cell_vitu2_itu_pane_t2_ParamLimits

0x0dff,	// (0x00095edd) cell_vitu2_itu_pane_t2

0x0002,

0xf8fc,	// (0x000a49da) cell_vitu2_itu_pane_t_ParamLimits

0xf8fc,	// (0x000a49da) cell_vitu2_itu_pane_t

0x46b9,	// (0x00099797) bg_button_pane_cp011

0x6a3b,	// (0x0009bb19) cell_vitu2_function_pane_g1

0x119d,	// (0x0009627b) main_myfav_hc_pane

0x6469,	// (0x0009b547) popup_image3_note_pane_ParamLimits

0x6469,	// (0x0009b547) popup_image3_note_pane

0x6477,	// (0x0009b555) popup_image3_tool_bar_pane_ParamLimits

0x6477,	// (0x0009b555) popup_image3_tool_bar_pane

0x0e6d,	// (0x00095f4b) cell_vitu2_itu_pane_t3_ParamLimits

0x0e6d,	// (0x00095f4b) cell_vitu2_itu_pane_t3

0xe0f4,	// (0x000a31d2) bg_popup_trans_pane

0xc6bf,	// (0x000a179d) grid_image3_tool_bar_pane

0xc6c9,	// (0x000a17a7) bg_popup_trans_pane_g1

0x9d16,	// (0x0009edf4) bg_popup_trans_pane_g2

0xc6d1,	// (0x000a17af) bg_popup_trans_pane_g3

0xc6d9,	// (0x000a17b7) bg_popup_trans_pane_g4

0xc6e1,	// (0x000a17bf) bg_popup_trans_pane_g5

0xc6e9,	// (0x000a17c7) bg_popup_trans_pane_g6

0xc6f1,	// (0x000a17cf) bg_popup_trans_pane_g7

0xc6f9,	// (0x000a17d7) bg_popup_trans_pane_g8

0x9cf6,	// (0x0009edd4) bg_popup_trans_pane_g9

0x0008,

0xf903,	// (0x000a49e1) bg_popup_trans_pane_g

0xc701,	// (0x000a17df) cell_image3_tool_bar_pane_ParamLimits

0xc701,	// (0x000a17df) cell_image3_tool_bar_pane

0xbbef,	// (0x000a0ccd) cell_image3_tool_bar_pane_g1

0xe0f4,	// (0x000a31d2) bg_popup_trans_pane_cp1

0xc715,	// (0x000a17f3) popup_image3_note_pane_t1

0xc723,	// (0x000a1801) popup_image3_note_pane_t2

0xc731,	// (0x000a180f) popup_image3_note_pane_t3

0x0002,

0xf916,	// (0x000a49f4) popup_image3_note_pane_t

0xc73f,	// (0x000a181d) popup_image3_note_pane_t3_copy1

0x6a4f,	// (0x0009bb2d) bg_myfav_hc_instruction_pane_ParamLimits

0x6a4f,	// (0x0009bb2d) bg_myfav_hc_instruction_pane

0x6a67,	// (0x0009bb45) cell_myfav_contact_pane_ParamLimits

0x6a67,	// (0x0009bb45) cell_myfav_contact_pane

0x6a81,	// (0x0009bb5f) cell_myfav_contact_pane_cp1_ParamLimits

0x6a81,	// (0x0009bb5f) cell_myfav_contact_pane_cp1

0x6a99,	// (0x0009bb77) cell_myfav_contact_pane_cp2_ParamLimits

0x6a99,	// (0x0009bb77) cell_myfav_contact_pane_cp2

0x6ab1,	// (0x0009bb8f) cell_myfav_contact_pane_cp3_ParamLimits

0x6ab1,	// (0x0009bb8f) cell_myfav_contact_pane_cp3

0x6ac8,	// (0x0009bba6) cell_myfav_contact_pane_cp4_ParamLimits

0x6ac8,	// (0x0009bba6) cell_myfav_contact_pane_cp4

0x6ade,	// (0x0009bbbc) cell_myfav_contact_pane_cp5_ParamLimits

0x6ade,	// (0x0009bbbc) cell_myfav_contact_pane_cp5

0x6af2,	// (0x0009bbd0) cell_myfav_contact_pane_cp6_ParamLimits

0x6af2,	// (0x0009bbd0) cell_myfav_contact_pane_cp6

0x6b06,	// (0x0009bbe4) cell_myfav_contact_pane_cp7_ParamLimits

0x6b06,	// (0x0009bbe4) cell_myfav_contact_pane_cp7

0xc74d,	// (0x000a182b) listscroll_gen_pane_cp05

0x6b1e,	// (0x0009bbfc) main_myfav_hc_pane_g1_ParamLimits

0x6b1e,	// (0x0009bbfc) main_myfav_hc_pane_g1

0x6b36,	// (0x0009bc14) main_myfav_hc_pane_g2_ParamLimits

0x6b36,	// (0x0009bc14) main_myfav_hc_pane_g2

0x0002,

0xf91d,	// (0x000a49fb) main_myfav_hc_pane_g_ParamLimits

0xf91d,	// (0x000a49fb) main_myfav_hc_pane_g

0x6b66,	// (0x0009bc44) main_myfav_hc_pane_t1_ParamLimits

0x6b66,	// (0x0009bc44) main_myfav_hc_pane_t1

0xc756,	// (0x000a1834) main_myfav_hc_pane_t2_ParamLimits

0xc756,	// (0x000a1834) main_myfav_hc_pane_t2

0xc77a,	// (0x000a1858) main_myfav_hc_pane_t3_ParamLimits

0xc77a,	// (0x000a1858) main_myfav_hc_pane_t3

0x6b7d,	// (0x0009bc5b) main_myfav_hc_pane_t4_ParamLimits

0x6b7d,	// (0x0009bc5b) main_myfav_hc_pane_t4

0x0004,

0xf924,	// (0x000a4a02) main_myfav_hc_pane_t_ParamLimits

0xf924,	// (0x000a4a02) main_myfav_hc_pane_t

0xbbef,	// (0x000a0ccd) bg_myfav_hc_instruction_pane_g1

0xc78c,	// (0x000a186a) cell_myfav_contact_pane_g1_ParamLimits

0xc78c,	// (0x000a186a) cell_myfav_contact_pane_g1

0xc78c,	// (0x000a186a) cell_myfav_contact_pane_g2_ParamLimits

0xc78c,	// (0x000a186a) cell_myfav_contact_pane_g2

0xc798,	// (0x000a1876) cell_myfav_contact_pane_g3_ParamLimits

0xc798,	// (0x000a1876) cell_myfav_contact_pane_g3

0xbf28,	// (0x000a1006) cell_myfav_contact_pane_g4_ParamLimits

0xbf28,	// (0x000a1006) cell_myfav_contact_pane_g4

0xc7a5,	// (0x000a1883) cell_myfav_contact_pane_g5_ParamLimits

0xc7a5,	// (0x000a1883) cell_myfav_contact_pane_g5

0x0004,

0xf92f,	// (0x000a4a0d) cell_myfav_contact_pane_g_ParamLimits

0xf92f,	// (0x000a4a0d) cell_myfav_contact_pane_g

0x6b4e,	// (0x0009bc2c) main_myfav_hc_pane_g3_ParamLimits

0x6b4e,	// (0x0009bc2c) main_myfav_hc_pane_g3

0x108c,	// (0x0009616a) popup_adpt_find_window

0x6ba7,	// (0x0009bc85) afind_page_pane_ParamLimits

0x6ba7,	// (0x0009bc85) afind_page_pane

0x6bb4,	// (0x0009bc92) aid_size_cell_afind_ParamLimits

0x6bb4,	// (0x0009bc92) aid_size_cell_afind

0x6bce,	// (0x0009bcac) bg_popup_sub_pane_cp09_ParamLimits

0x6bce,	// (0x0009bcac) bg_popup_sub_pane_cp09

0x6bdb,	// (0x0009bcb9) find_pane_cp01_ParamLimits

0x6bdb,	// (0x0009bcb9) find_pane_cp01

0xc7b1,	// (0x000a188f) grid_afind_control_pane_ParamLimits

0xc7b1,	// (0x000a188f) grid_afind_control_pane

0x6be8,	// (0x0009bcc6) grid_afind_pane_ParamLimits

0x6be8,	// (0x0009bcc6) grid_afind_pane

0x6c02,	// (0x0009bce0) cell_afind_pane_ParamLimits

0x6c02,	// (0x0009bce0) cell_afind_pane

0xbbef,	// (0x000a0ccd) afind_page_pane_g1

0x6c4a,	// (0x0009bd28) afind_page_pane_g2

0x6c53,	// (0x0009bd31) afind_page_pane_g3

0x0002,

0xf93a,	// (0x000a4a18) afind_page_pane_g

0x6c5c,	// (0x0009bd3a) afind_page_pane_t1

0xc7c5,	// (0x000a18a3) cell_afind_grid_control_pane_ParamLimits

0xc7c5,	// (0x000a18a3) cell_afind_grid_control_pane

0xc56e,	// (0x000a164c) bg_button_pane_cp69_ParamLimits

0xc56e,	// (0x000a164c) bg_button_pane_cp69

0x6c7c,	// (0x0009bd5a) cell_afind_pane_g1_ParamLimits

0x6c7c,	// (0x0009bd5a) cell_afind_pane_g1

0x6c89,	// (0x0009bd67) cell_afind_pane_t1_ParamLimits

0x6c89,	// (0x0009bd67) cell_afind_pane_t1

0xef04,	// (0x000a3fe2) bg_button_pane_cp72

0xc7d4,	// (0x000a18b2) cell_afind_grid_control_pane_g1

0x4233,	// (0x00099311) aid_image_placing_area_ParamLimits

0x4233,	// (0x00099311) aid_image_placing_area

0xc23c,	// (0x000a131a) field_vitu_entry_pane_g1_ParamLimits

0xc23c,	// (0x000a131a) field_vitu_entry_pane_g1

0xc248,	// (0x000a1326) field_vitu_entry_pane_g2_ParamLimits

0xc248,	// (0x000a1326) field_vitu_entry_pane_g2

0x0001,

0xf7eb,	// (0x000a48c9) field_vitu_entry_pane_g_ParamLimits

0xf7eb,	// (0x000a48c9) field_vitu_entry_pane_g

0x5d9c,	// (0x0009ae7a) cell_vitu_itu_pane_g1_ParamLimits

0x5dec,	// (0x0009aeca) cell_vitu_itu_pane_t3_ParamLimits

0x5dec,	// (0x0009aeca) cell_vitu_itu_pane_t3

0xc51e,	// (0x000a15fc) mp4_progress_pane_t1_ParamLimits

0xc537,	// (0x000a1615) mp4_progress_pane_t2_ParamLimits

0xf880,	// (0x000a495e) mp4_progress_pane_t_ParamLimits

0xc550,	// (0x000a162e) mup_progress_pane_cp04_ParamLimits

0x6b91,	// (0x0009bc6f) main_myfav_hc_pane_t5_ParamLimits

0x6b91,	// (0x0009bc6f) main_myfav_hc_pane_t5

0x0def,	// (0x00095ecd) aid_zoom_text_primary

0x108c,	// (0x0009616a) popup_adpt_find_window_ParamLimits

0x46b9,	// (0x00099797) main_cam_set_pane

0x65d3,	// (0x0009b6b1) cam4_zoom_pane_ParamLimits

0x65d3,	// (0x0009b6b1) cam4_zoom_pane

0x6c9b,	// (0x0009bd79) main_cam_set_pane_g1_ParamLimits

0x6c9b,	// (0x0009bd79) main_cam_set_pane_g1

0x6ca9,	// (0x0009bd87) main_cam_set_pane_g2_ParamLimits

0x6ca9,	// (0x0009bd87) main_cam_set_pane_g2

0x0001,

0xf941,	// (0x000a4a1f) main_cam_set_pane_g_ParamLimits

0xf941,	// (0x000a4a1f) main_cam_set_pane_g

0x6cb5,	// (0x0009bd93) main_cam_set_pane_t1_ParamLimits

0x6cb5,	// (0x0009bd93) main_cam_set_pane_t1

0x6cd1,	// (0x0009bdaf) main_cset_listscroll_pane_ParamLimits

0x6cd1,	// (0x0009bdaf) main_cset_listscroll_pane

0x6cfc,	// (0x0009bdda) main_cset_slider_pane_ParamLimits

0x6cfc,	// (0x0009bdda) main_cset_slider_pane

0xc7e5,	// (0x000a18c3) main_cset_list_pane_ParamLimits

0xc7e5,	// (0x000a18c3) main_cset_list_pane

0xc7f5,	// (0x000a18d3) scroll_pane_cp028

0x6d1b,	// (0x0009bdf9) aid_area_touch_slider

0x6d37,	// (0x0009be15) cset_slider_pane

0x6d61,	// (0x0009be3f) main_cset_slider_pane_g1

0x6d76,	// (0x0009be54) main_cset_slider_pane_g2

0x0011,

0xf946,	// (0x000a4a24) main_cset_slider_pane_g

0xc82e,	// (0x000a190c) main_cset_slider_pane_t1

0x6e3c,	// (0x0009bf1a) main_cset_slider_pane_t2

0x6e56,	// (0x0009bf34) main_cset_slider_pane_t3

0x6e70,	// (0x0009bf4e) main_cset_slider_pane_t4

0x6e8e,	// (0x0009bf6c) main_cset_slider_pane_t5

0x6eac,	// (0x0009bf8a) main_cset_slider_pane_t6

0x6ec3,	// (0x0009bfa1) main_cset_slider_pane_t7

0x000e,

0xf96b,	// (0x000a4a49) main_cset_slider_pane_t

0x6fd1,	// (0x0009c0af) cset_list_set_pane_ParamLimits

0x6fd1,	// (0x0009c0af) cset_list_set_pane

0x6fed,	// (0x0009c0cb) aid_position_infowindow_above

0x6ff5,	// (0x0009c0d3) aid_position_infowindow_below

0x6ffd,	// (0x0009c0db) cset_list_set_pane_g1_ParamLimits

0x6ffd,	// (0x0009c0db) cset_list_set_pane_g1

0xc8ce,	// (0x000a19ac) cset_list_set_pane_g3_ParamLimits

0xc8ce,	// (0x000a19ac) cset_list_set_pane_g3

0x0001,

0xf98a,	// (0x000a4a68) cset_list_set_pane_g_ParamLimits

0xf98a,	// (0x000a4a68) cset_list_set_pane_g

0xc8dd,	// (0x000a19bb) cset_list_set_pane_t1_ParamLimits

0xc8dd,	// (0x000a19bb) cset_list_set_pane_t1

0xecc6,	// (0x000a3da4) list_highlight_pane_cp021_ParamLimits

0xecc6,	// (0x000a3da4) list_highlight_pane_cp021

0xa4eb,	// (0x0009f5c9) cset_slider_pane_g1

0xa4fd,	// (0x0009f5db) cset_slider_pane_g2

0xa4f4,	// (0x0009f5d2) cset_slider_pane_g3

0x0002,

0xf98f,	// (0x000a4a6d) cset_slider_pane_g

0x7009,	// (0x0009c0e7) aid_area_touch_cam4_zoom

0x7011,	// (0x0009c0ef) cam4_zoom_cont_pane

0x7019,	// (0x0009c0f7) cam4_zoom_pane_g1

0x7021,	// (0x0009c0ff) cam4_zoom_pane_g2

0x7029,	// (0x0009c107) cam4_zoom_pane_g3

0x0002,

0xf996,	// (0x000a4a74) cam4_zoom_pane_g

0x7031,	// (0x0009c10f) cam4_zoom_cont_pane_g1

0x703a,	// (0x0009c118) cam4_zoom_cont_pane_g2

0x7043,	// (0x0009c121) cam4_zoom_cont_pane_g3

0x0002,

0xf99d,	// (0x000a4a7b) cam4_zoom_cont_pane_g

0x64c0,	// (0x0009b59e) call4_image_pane_ParamLimits

0x64c0,	// (0x0009b59e) call4_image_pane

0xc57a,	// (0x000a1658) call4_windows_conf_pane_ParamLimits

0xc5b9,	// (0x000a1697) popup_call4_audio_in_window_ParamLimits

0xc5b9,	// (0x000a1697) popup_call4_audio_in_window

0xe0f4,	// (0x000a31d2) bg_popup_call2_act_pane_cp02

0xc62f,	// (0x000a170d) call4_list_conf_pane

0xbbef,	// (0x000a0ccd) call4_image_pane_g1

0xbbef,	// (0x000a0ccd) call4_image_pane_g2

0x0001,

0xf6b1,	// (0x000a478f) call4_image_pane_g

0xc8f2,	// (0x000a19d0) list_single_graphic_popup_conf4_pane_ParamLimits

0xc8f2,	// (0x000a19d0) list_single_graphic_popup_conf4_pane

0xe0f4,	// (0x000a31d2) list_highlight_pane_cp022

0xc905,	// (0x000a19e3) list_single_graphic_popup_conf4_pane_g1

0xa1d2,	// (0x0009f2b0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9a4,	// (0x000a4a82) list_single_graphic_popup_conf4_pane_g

0xc90d,	// (0x000a19eb) list_single_graphic_popup_conf4_pane_t1

0x223c,	// (0x0009731a) popup_vtel_slider_window_ParamLimits

0x223c,	// (0x0009731a) popup_vtel_slider_window

0xc55c,	// (0x000a163a) dialer2_ne_pane_t2_ParamLimits

0xc55c,	// (0x000a163a) dialer2_ne_pane_t2

0x0001,

0xf885,	// (0x000a4963) dialer2_ne_pane_t_ParamLimits

0xf885,	// (0x000a4963) dialer2_ne_pane_t

0xecc6,	// (0x000a3da4) bg_popup_sub_pane_cp010_ParamLimits

0xecc6,	// (0x000a3da4) bg_popup_sub_pane_cp010

0x704c,	// (0x0009c12a) popup_vtel_slider_window_g1_ParamLimits

0x704c,	// (0x0009c12a) popup_vtel_slider_window_g1

0x7058,	// (0x0009c136) popup_vtel_slider_window_g2_ParamLimits

0x7058,	// (0x0009c136) popup_vtel_slider_window_g2

0x0003,

0xf9a9,	// (0x000a4a87) popup_vtel_slider_window_g_ParamLimits

0xf9a9,	// (0x000a4a87) popup_vtel_slider_window_g

0x70a0,	// (0x0009c17e) vtel_slider_pane_ParamLimits

0x70a0,	// (0x0009c17e) vtel_slider_pane

0x70af,	// (0x0009c18d) vtel_slider_pane_g1_ParamLimits

0x70af,	// (0x0009c18d) vtel_slider_pane_g1

0x70bc,	// (0x0009c19a) vtel_slider_pane_g2_ParamLimits

0x70bc,	// (0x0009c19a) vtel_slider_pane_g2

0x70c9,	// (0x0009c1a7) vtel_slider_pane_g3_ParamLimits

0x70c9,	// (0x0009c1a7) vtel_slider_pane_g3

0x70af,	// (0x0009c18d) vtel_slider_pane_g4_ParamLimits

0x70af,	// (0x0009c18d) vtel_slider_pane_g4

0x70d6,	// (0x0009c1b4) vtel_slider_pane_g5_ParamLimits

0x70d6,	// (0x0009c1b4) vtel_slider_pane_g5

0x0004,

0xf9b2,	// (0x000a4a90) vtel_slider_pane_g_ParamLimits

0xf9b2,	// (0x000a4a90) vtel_slider_pane_g

0x119d,	// (0x0009627b) main_gallery2_pane

0x6831,	// (0x0009b90f) aid_size_row_itut2_dropdow_list_ParamLimits

0x6831,	// (0x0009b90f) aid_size_row_itut2_dropdow_list

0x689f,	// (0x0009b97d) grid_vitu2_function_top_pane_ParamLimits

0x689f,	// (0x0009b97d) grid_vitu2_function_top_pane

0x68f5,	// (0x0009b9d3) popup_vitu2_dropdown_list_window_ParamLimits

0x68f5,	// (0x0009b9d3) popup_vitu2_dropdown_list_window

0x6915,	// (0x0009b9f3) popup_vitu2_match_list_window

0x70f1,	// (0x0009c1cf) cell_vitu2_function_top_pane_ParamLimits

0x70f1,	// (0x0009c1cf) cell_vitu2_function_top_pane

0x7111,	// (0x0009c1ef) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7111,	// (0x0009c1ef) cell_vitu2_function_top_pane_cp01

0x712f,	// (0x0009c20d) cell_vitu2_function_top_wide_pane_ParamLimits

0x712f,	// (0x0009c20d) cell_vitu2_function_top_wide_pane

0x46b9,	// (0x00099797) bg_button_pane_cp012

0x714d,	// (0x0009c22b) cell_vitu2_function_top_pane_g1

0x715c,	// (0x0009c23a) bg_button_pane_cp013_ParamLimits

0x715c,	// (0x0009c23a) bg_button_pane_cp013

0x7178,	// (0x0009c256) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7178,	// (0x0009c256) cell_vitu2_function_top_wide_pane_g1

0x1183,	// (0x00096261) bg_popup_sub_pane_cp20

0x7190,	// (0x0009c26e) list_vitu2_match_list_pane

0xc6c9,	// (0x000a17a7) bg_popup_sub_pane_cp20_g1

0xc6d1,	// (0x000a17af) bg_popup_sub_pane_cp20_g2

0x9d16,	// (0x0009edf4) bg_popup_sub_pane_cp20_g3

0xc6d9,	// (0x000a17b7) bg_popup_sub_pane_cp20_g4

0x9cf6,	// (0x0009edd4) bg_popup_sub_pane_cp20_g5

0xc923,	// (0x000a1a01) bg_popup_sub_pane_cp20_g6

0xc6e9,	// (0x000a17c7) bg_popup_sub_pane_cp20_g7

0xc6f1,	// (0x000a17cf) bg_popup_sub_pane_cp20_g8

0xc6f9,	// (0x000a17d7) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9bd,	// (0x000a4a9b) bg_popup_sub_pane_cp20_g

0x71a8,	// (0x0009c286) list_vitu2_match_list_item_pane_ParamLimits

0x71a8,	// (0x0009c286) list_vitu2_match_list_item_pane

0x71ba,	// (0x0009c298) list_vitu2_match_list_item_pane_t1

0x119d,	// (0x0009627b) bg_popup_sub_pane_cp21

0x720f,	// (0x0009c2ed) grid_vitu2_dropdown_list_pane

0x7217,	// (0x0009c2f5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7217,	// (0x0009c2f5) cell_vitu2_dropdown_list_char_pane

0x7238,	// (0x0009c316) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7238,	// (0x0009c316) cell_vitu2_dropdown_list_ctrl_pane

0xc92b,	// (0x000a1a09) cell_vitu2_dropdown_list_char_pane_g1

0xc934,	// (0x000a1a12) cell_vitu2_dropdown_list_char_pane_g2

0xc93d,	// (0x000a1a1b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9da,	// (0x000a4ab8) cell_vitu2_dropdown_list_char_pane_g

0x7264,	// (0x0009c342) cell_vitu2_dropdown_list_char_pane_t1

0x7272,	// (0x0009c350) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7272,	// (0x0009c350) cell_vitu2_dropdown_list_ctrl_pane_g1

0x727f,	// (0x0009c35d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x727f,	// (0x0009c35d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x728c,	// (0x0009c36a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x728c,	// (0x0009c36a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7299,	// (0x0009c377) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7299,	// (0x0009c377) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6667,	// (0x0009b745) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6667,	// (0x0009b745) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9e1,	// (0x000a4abf) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9e1,	// (0x000a4abf) cell_vitu2_dropdown_list_ctrl_pane_g

0x72b5,	// (0x0009c393) aid_size_cell_gallery2_ParamLimits

0x72b5,	// (0x0009c393) aid_size_cell_gallery2

0x72c3,	// (0x0009c3a1) grid_gallery2_pane_ParamLimits

0x72c3,	// (0x0009c3a1) grid_gallery2_pane

0x72d2,	// (0x0009c3b0) scroll_pane_cp029_ParamLimits

0x72d2,	// (0x0009c3b0) scroll_pane_cp029

0x72de,	// (0x0009c3bc) cell_gallery2_pane_ParamLimits

0x72de,	// (0x0009c3bc) cell_gallery2_pane

0xc946,	// (0x000a1a24) cell_gallery2_pane_g2

0x730c,	// (0x0009c3ea) cell_gallery2_pane_g3

0xc950,	// (0x000a1a2e) cell_gallery2_pane_g4

0xc958,	// (0x000a1a36) cell_gallery2_pane_g5

0xa3b5,	// (0x0009f493) grid_highlight_pane_cp10

0x6915,	// (0x0009b9f3) popup_vitu2_match_list_window_ParamLimits

0x6927,	// (0x0009ba05) popup_vitu2_query_window_ParamLimits

0x6927,	// (0x0009ba05) popup_vitu2_query_window

0x119d,	// (0x0009627b) bg_vitu2_candi_button_pane

0xc92b,	// (0x000a1a09) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xc934,	// (0x000a1a12) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xc93d,	// (0x000a1a1b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7314,	// (0x0009c3f2) bg_button_pane_cp015

0x7326,	// (0x0009c404) bg_button_pane_cp016

0x7339,	// (0x0009c417) bg_button_pane_cp017

0xb7b7,	// (0x000a0895) bg_popup_sub_pane_cp22

0xc960,	// (0x000a1a3e) popup_vitu2_query_window_g1

0x737e,	// (0x0009c45c) popup_vitu2_query_window_g2

0x0002,

0xf9ec,	// (0x000a4aca) popup_vitu2_query_window_g

0x739b,	// (0x0009c479) popup_vitu2_query_window_t1_ParamLimits

0x739b,	// (0x0009c479) popup_vitu2_query_window_t1

0x73ce,	// (0x0009c4ac) popup_vitu2_query_window_t2_ParamLimits

0x73ce,	// (0x0009c4ac) popup_vitu2_query_window_t2

0x73e0,	// (0x0009c4be) popup_vitu2_query_window_t3_ParamLimits

0x73e0,	// (0x0009c4be) popup_vitu2_query_window_t3

0x7408,	// (0x0009c4e6) popup_vitu2_query_window_t4_ParamLimits

0x7408,	// (0x0009c4e6) popup_vitu2_query_window_t4

0x7429,	// (0x0009c507) popup_vitu2_query_window_t5_ParamLimits

0x7429,	// (0x0009c507) popup_vitu2_query_window_t5

0x0006,

0xf9f3,	// (0x000a4ad1) popup_vitu2_query_window_t_ParamLimits

0xf9f3,	// (0x000a4ad1) popup_vitu2_query_window_t

0xc7dd,	// (0x000a18bb) main_cset_text_pane

0x6d1b,	// (0x0009bdf9) aid_area_touch_slider_ParamLimits

0x6d37,	// (0x0009be15) cset_slider_pane_ParamLimits

0x6d61,	// (0x0009be3f) main_cset_slider_pane_g1_ParamLimits

0x6d76,	// (0x0009be54) main_cset_slider_pane_g2_ParamLimits

0xc7fe,	// (0x000a18dc) main_cset_slider_pane_g3_ParamLimits

0xc7fe,	// (0x000a18dc) main_cset_slider_pane_g3

0x6d8b,	// (0x0009be69) main_cset_slider_pane_g4_ParamLimits

0x6d8b,	// (0x0009be69) main_cset_slider_pane_g4

0x6d9a,	// (0x0009be78) main_cset_slider_pane_g5_ParamLimits

0x6d9a,	// (0x0009be78) main_cset_slider_pane_g5

0x6da8,	// (0x0009be86) main_cset_slider_pane_g6_ParamLimits

0x6da8,	// (0x0009be86) main_cset_slider_pane_g6

0xf946,	// (0x000a4a24) main_cset_slider_pane_g_ParamLimits

0xc82e,	// (0x000a190c) main_cset_slider_pane_t1_ParamLimits

0x6e3c,	// (0x0009bf1a) main_cset_slider_pane_t2_ParamLimits

0x6e56,	// (0x0009bf34) main_cset_slider_pane_t3_ParamLimits

0x6e70,	// (0x0009bf4e) main_cset_slider_pane_t4_ParamLimits

0x6e8e,	// (0x0009bf6c) main_cset_slider_pane_t5_ParamLimits

0x6eac,	// (0x0009bf8a) main_cset_slider_pane_t6_ParamLimits

0x6ec3,	// (0x0009bfa1) main_cset_slider_pane_t7_ParamLimits

0x6ef1,	// (0x0009bfcf) main_cset_slider_pane_t8_ParamLimits

0x6ef1,	// (0x0009bfcf) main_cset_slider_pane_t8

0x6f19,	// (0x0009bff7) main_cset_slider_pane_t9_ParamLimits

0x6f19,	// (0x0009bff7) main_cset_slider_pane_t9

0x6f41,	// (0x0009c01f) main_cset_slider_pane_t10_ParamLimits

0x6f41,	// (0x0009c01f) main_cset_slider_pane_t10

0x6f69,	// (0x0009c047) main_cset_slider_pane_t11_ParamLimits

0x6f69,	// (0x0009c047) main_cset_slider_pane_t11

0x6f93,	// (0x0009c071) main_cset_slider_pane_t12_ParamLimits

0x6f93,	// (0x0009c071) main_cset_slider_pane_t12

0x6fb2,	// (0x0009c090) main_cset_slider_pane_t13_ParamLimits

0x6fb2,	// (0x0009c090) main_cset_slider_pane_t13

0xf96b,	// (0x000a4a49) main_cset_slider_pane_t_ParamLimits

0xe0f4,	// (0x000a31d2) bg_popup_sub_pane_cp011

0xc96c,	// (0x000a1a4a) main_cset_text_pane_g1

0xc974,	// (0x000a1a52) main_cset_text_pane_t1

0xc982,	// (0x000a1a60) main_cset_text_pane_t2

0xc990,	// (0x000a1a6e) main_cset_text_pane_t3

0xc99e,	// (0x000a1a7c) main_cset_text_pane_t4

0xc9ac,	// (0x000a1a8a) main_cset_text_pane_t5

0xc9ba,	// (0x000a1a98) main_cset_text_pane_t6

0xc9c8,	// (0x000a1aa6) main_cset_text_pane_t7

0x0006,

0xfa02,	// (0x000a4ae0) main_cset_text_pane_t

0x119d,	// (0x0009627b) main_cam4_burst_pane

0x119d,	// (0x0009627b) main_cam5_pane

0x6c6a,	// (0x0009bd48) bg_button_pane_cp019

0x6c73,	// (0x0009bd51) bg_button_pane_cp020

0xc80a,	// (0x000a18e8) main_cset_slider_pane_g7_ParamLimits

0xc80a,	// (0x000a18e8) main_cset_slider_pane_g7

0xc816,	// (0x000a18f4) main_cset_slider_pane_g8_ParamLimits

0xc816,	// (0x000a18f4) main_cset_slider_pane_g8

0x6dbc,	// (0x0009be9a) main_cset_slider_pane_g9_ParamLimits

0x6dbc,	// (0x0009be9a) main_cset_slider_pane_g9

0x6dc8,	// (0x0009bea6) main_cset_slider_pane_g10_ParamLimits

0x6dc8,	// (0x0009bea6) main_cset_slider_pane_g10

0x6dd4,	// (0x0009beb2) main_cset_slider_pane_g11_ParamLimits

0x6dd4,	// (0x0009beb2) main_cset_slider_pane_g11

0x6de0,	// (0x0009bebe) main_cset_slider_pane_g12_ParamLimits

0x6de0,	// (0x0009bebe) main_cset_slider_pane_g12

0x6dec,	// (0x0009beca) main_cset_slider_pane_g13_ParamLimits

0x6dec,	// (0x0009beca) main_cset_slider_pane_g13

0x6dfa,	// (0x0009bed8) main_cset_slider_pane_g14_ParamLimits

0x6dfa,	// (0x0009bed8) main_cset_slider_pane_g14

0x6e08,	// (0x0009bee6) main_cset_slider_pane_g15_ParamLimits

0x6e08,	// (0x0009bee6) main_cset_slider_pane_g15

0xc85c,	// (0x000a193a) main_cset_slider_pane_t14_ParamLimits

0xc85c,	// (0x000a193a) main_cset_slider_pane_t14

0xc895,	// (0x000a1973) main_cset_slider_pane_t15_ParamLimits

0xc895,	// (0x000a1973) main_cset_slider_pane_t15

0x74a0,	// (0x0009c57e) aid_cam4_burst_size_cell_ParamLimits

0x74a0,	// (0x0009c57e) aid_cam4_burst_size_cell

0x74bc,	// (0x0009c59a) grid_cam4_burst_pane_ParamLimits

0x74bc,	// (0x0009c59a) grid_cam4_burst_pane

0x74ec,	// (0x0009c5ca) linegrid_cam4_burst_pane_ParamLimits

0x74ec,	// (0x0009c5ca) linegrid_cam4_burst_pane

0x750e,	// (0x0009c5ec) scroll_pane_cp30_ParamLimits

0x750e,	// (0x0009c5ec) scroll_pane_cp30

0x751a,	// (0x0009c5f8) cell_cam4_burst_pane_ParamLimits

0x751a,	// (0x0009c5f8) cell_cam4_burst_pane

0xc9d6,	// (0x000a1ab4) linegrid_cam4_burst_pane_g1_ParamLimits

0xc9d6,	// (0x000a1ab4) linegrid_cam4_burst_pane_g1

0x7556,	// (0x0009c634) linegrid_cam4_burst_pane_g2_ParamLimits

0x7556,	// (0x0009c634) linegrid_cam4_burst_pane_g2

0xc9e3,	// (0x000a1ac1) linegrid_cam4_burst_pane_g3_ParamLimits

0xc9e3,	// (0x000a1ac1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa11,	// (0x000a4aef) linegrid_cam4_burst_pane_g_ParamLimits

0xfa11,	// (0x000a4aef) linegrid_cam4_burst_pane_g

0x7567,	// (0x0009c645) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7567,	// (0x0009c645) linegrid_cam4_burst_pane_g3_copy1

0xc9f0,	// (0x000a1ace) linegrid_cam4_burst_pane_g4_ParamLimits

0xc9f0,	// (0x000a1ace) linegrid_cam4_burst_pane_g4

0x7581,	// (0x0009c65f) linegrid_cam4_burst_pane_g5_ParamLimits

0x7581,	// (0x0009c65f) linegrid_cam4_burst_pane_g5

0x7592,	// (0x0009c670) linegrid_cam4_burst_pane_g6_ParamLimits

0x7592,	// (0x0009c670) linegrid_cam4_burst_pane_g6

0xc9fd,	// (0x000a1adb) linegrid_cam4_burst_pane_g7_ParamLimits

0xc9fd,	// (0x000a1adb) linegrid_cam4_burst_pane_g7

0x75a3,	// (0x0009c681) cell_cam4_burst_pane_g1

0xca16,	// (0x000a1af4) main_cam5_pane_t1_ParamLimits

0xca16,	// (0x000a1af4) main_cam5_pane_t1

0xca28,	// (0x000a1b06) main_cam5_pane_t2_ParamLimits

0xca28,	// (0x000a1b06) main_cam5_pane_t2

0xca3a,	// (0x000a1b18) main_cam5_pane_t3_ParamLimits

0xca3a,	// (0x000a1b18) main_cam5_pane_t3

0xca73,	// (0x000a1b51) main_cam5_pane_t4_ParamLimits

0xca73,	// (0x000a1b51) main_cam5_pane_t4

0xca8b,	// (0x000a1b69) main_cam5_pane_t5_ParamLimits

0xca8b,	// (0x000a1b69) main_cam5_pane_t5

0xca9f,	// (0x000a1b7d) main_cam5_pane_t6_ParamLimits

0xca9f,	// (0x000a1b7d) main_cam5_pane_t6

0xcab3,	// (0x000a1b91) main_cam5_pane_t7_ParamLimits

0xcab3,	// (0x000a1b91) main_cam5_pane_t7

0xcac5,	// (0x000a1ba3) main_cam5_pane_t8_ParamLimits

0xcac5,	// (0x000a1ba3) main_cam5_pane_t8

0xcae1,	// (0x000a1bbf) main_cam5_pane_t9_ParamLimits

0xcae1,	// (0x000a1bbf) main_cam5_pane_t9

0xcaf3,	// (0x000a1bd1) main_cam5_pane_t10_ParamLimits

0xcaf3,	// (0x000a1bd1) main_cam5_pane_t10

0xcb05,	// (0x000a1be3) main_cam5_pane_t11_ParamLimits

0xcb05,	// (0x000a1be3) main_cam5_pane_t11

0xcb17,	// (0x000a1bf5) main_cam5_pane_t12_ParamLimits

0xcb17,	// (0x000a1bf5) main_cam5_pane_t12

0xcb2c,	// (0x000a1c0a) main_cam5_pane_t13_ParamLimits

0xcb2c,	// (0x000a1c0a) main_cam5_pane_t13

0x000c,

0xfa1d,	// (0x000a4afb) main_cam5_pane_t_ParamLimits

0xfa1d,	// (0x000a4afb) main_cam5_pane_t

0x1142,	// (0x00096220) popup_scut_keymap_window_ParamLimits

0x1142,	// (0x00096220) popup_scut_keymap_window

0x75b8,	// (0x0009c696) aid_size_cell_brow_shortcut

0xa3b5,	// (0x0009f493) bg_popup_window_pane_cp010

0x75c4,	// (0x0009c6a2) grid_scut_pane

0x75d0,	// (0x0009c6ae) cell_scut_pane_ParamLimits

0x75d0,	// (0x0009c6ae) cell_scut_pane

0x75e7,	// (0x0009c6c5) cell_scut_pane_g1

0xcb49,	// (0x000a1c27) cell_scut_pane_t1

0xcb58,	// (0x000a1c36) cell_scut_pane_t2

0x75f0,	// (0x0009c6ce) cell_scut_pane_t3

0x0002,

0xfa38,	// (0x000a4b16) cell_scut_pane_t

0x53fd,	// (0x0009a4db) main_mup3_pane_g8_ParamLimits

0x53fd,	// (0x0009a4db) main_mup3_pane_g8

0x683f,	// (0x0009b91d) area_vitu2_query_pane_ParamLimits

0x683f,	// (0x0009b91d) area_vitu2_query_pane

0x734c,	// (0x0009c42a) input_focus_pane_cp08

0xcb67,	// (0x000a1c45) area_vitu2_query_pane_g1

0x75fe,	// (0x0009c6dc) area_vitu2_query_pane_g2

0x0001,

0xfa3f,	// (0x000a4b1d) area_vitu2_query_pane_g

0x760f,	// (0x0009c6ed) area_vitu2_query_pane_t1_ParamLimits

0x760f,	// (0x0009c6ed) area_vitu2_query_pane_t1

0x7623,	// (0x0009c701) area_vitu2_query_pane_t2_ParamLimits

0x7623,	// (0x0009c701) area_vitu2_query_pane_t2

0x7637,	// (0x0009c715) area_vitu2_query_pane_t3_ParamLimits

0x7637,	// (0x0009c715) area_vitu2_query_pane_t3

0xcb73,	// (0x000a1c51) area_vitu2_query_pane_t4_ParamLimits

0xcb73,	// (0x000a1c51) area_vitu2_query_pane_t4

0xcb9b,	// (0x000a1c79) area_vitu2_query_pane_t5_ParamLimits

0xcb9b,	// (0x000a1c79) area_vitu2_query_pane_t5

0xcbc3,	// (0x000a1ca1) area_vitu2_query_pane_t6_ParamLimits

0xcbc3,	// (0x000a1ca1) area_vitu2_query_pane_t6

0x0006,

0xfa44,	// (0x000a4b22) area_vitu2_query_pane_t_ParamLimits

0xfa44,	// (0x000a4b22) area_vitu2_query_pane_t

0x765f,	// (0x0009c73d) bg_button_pane_cp018

0x766d,	// (0x0009c74b) bg_button_pane_cp021

0x7679,	// (0x0009c757) bg_button_pane_cp022

0x768a,	// (0x0009c768) input_focus_pane_cp09

0x3830,	// (0x0009890e) aid_size_touch_mv_arrow_left

0x385b,	// (0x00098939) aid_size_touch_mv_arrow_right

0x6e20,	// (0x0009befe) main_cset_slider_pane_g16_ParamLimits

0x6e20,	// (0x0009befe) main_cset_slider_pane_g16

0x6e2e,	// (0x0009bf0c) main_cset_slider_pane_g17_ParamLimits

0x6e2e,	// (0x0009bf0c) main_cset_slider_pane_g17

0x75a3,	// (0x0009c681) cell_cam4_burst_pane_g1_ParamLimits

0xe0f4,	// (0x000a31d2) compa_mode_pane

0x7064,	// (0x0009c142) popup_vtel_slider_window_g3_ParamLimits

0x7064,	// (0x0009c142) popup_vtel_slider_window_g3

0x7078,	// (0x0009c156) popup_vtel_slider_window_g4_ParamLimits

0x7078,	// (0x0009c156) popup_vtel_slider_window_g4

0x708c,	// (0x0009c16a) popup_vtel_slider_window_t1_ParamLimits

0x708c,	// (0x0009c16a) popup_vtel_slider_window_t1

0x119d,	// (0x0009627b) main_cl_pane

0x4753,	// (0x00099831) popup_imed_adjust2_window_ParamLimits

0xb7b7,	// (0x000a0895) bg_tb_trans_pane_cp05_ParamLimits

0xc168,	// (0x000a1246) popup_imed_adjust2_window_g1_ParamLimits

0xc177,	// (0x000a1255) popup_imed_adjust2_window_g2_ParamLimits

0xc177,	// (0x000a1255) popup_imed_adjust2_window_g2

0xc183,	// (0x000a1261) popup_imed_adjust2_window_g3_ParamLimits

0xc183,	// (0x000a1261) popup_imed_adjust2_window_g3

0x0002,

0xf7af,	// (0x000a488d) popup_imed_adjust2_window_g_ParamLimits

0xf7af,	// (0x000a488d) popup_imed_adjust2_window_g

0xc18f,	// (0x000a126d) popup_imed_adjust2_window_t1_ParamLimits

0xc1a7,	// (0x000a1285) slider_imed_adjust_pane_ParamLimits

0xc1bb,	// (0x000a1299) slider_imed_adjust_pane_g1_ParamLimits

0xc1cb,	// (0x000a12a9) slider_imed_adjust_pane_g2_ParamLimits

0xc1db,	// (0x000a12b9) slider_imed_adjust_pane_g3_ParamLimits

0xc1ec,	// (0x000a12ca) slider_imed_adjust_pane_g4_ParamLimits

0xf7b6,	// (0x000a4894) slider_imed_adjust_pane_g_ParamLimits

0x657c,	// (0x0009b65a) aid_touch_area_cam4_ParamLimits

0x657c,	// (0x0009b65a) aid_touch_area_cam4

0x658c,	// (0x0009b66a) battery_pane_cp01

0x6613,	// (0x0009b6f1) main_camera4_pane_g6_ParamLimits

0x6613,	// (0x0009b6f1) main_camera4_pane_g6

0x6631,	// (0x0009b70f) main_camera4_pane_t2_ParamLimits

0x6631,	// (0x0009b70f) main_camera4_pane_t2

0x0001,

0xf8b9,	// (0x000a4997) main_camera4_pane_t_ParamLimits

0xf8b9,	// (0x000a4997) main_camera4_pane_t

0x66c6,	// (0x0009b7a4) aid_touch_area_vid4_ParamLimits

0x66c6,	// (0x0009b7a4) aid_touch_area_vid4

0x6706,	// (0x0009b7e4) main_video4_pane_g5_ParamLimits

0x6706,	// (0x0009b7e4) main_video4_pane_g5

0x672a,	// (0x0009b808) vid4_progress_pane_ParamLimits

0x672a,	// (0x0009b808) vid4_progress_pane

0xc822,	// (0x000a1900) main_cset_slider_pane_g18_ParamLimits

0xc822,	// (0x000a1900) main_cset_slider_pane_g18

0xca0a,	// (0x000a1ae8) cell_cam4_burst_pane_g2_ParamLimits

0xca0a,	// (0x000a1ae8) cell_cam4_burst_pane_g2

0x0001,

0xfa18,	// (0x000a4af6) cell_cam4_burst_pane_g_ParamLimits

0xfa18,	// (0x000a4af6) cell_cam4_burst_pane_g

0x769b,	// (0x0009c779) bg_cl_pane_ParamLimits

0x769b,	// (0x0009c779) bg_cl_pane

0x76a7,	// (0x0009c785) cl_header_pane_ParamLimits

0x76a7,	// (0x0009c785) cl_header_pane

0x76b3,	// (0x0009c791) cl_listscroll_pane_ParamLimits

0x76b3,	// (0x0009c791) cl_listscroll_pane

0xcc17,	// (0x000a1cf5) bg_cl_pane_g1

0xcc1f,	// (0x000a1cfd) bg_cl_pane_g2

0xcc27,	// (0x000a1d05) bg_cl_pane_g3

0xcc2f,	// (0x000a1d0d) bg_cl_pane_g4

0xcc37,	// (0x000a1d15) bg_cl_pane_g5

0xcc3f,	// (0x000a1d1d) bg_cl_pane_g6

0xcc47,	// (0x000a1d25) bg_cl_pane_g7

0xcc4f,	// (0x000a1d2d) bg_cl_pane_g8

0xcc57,	// (0x000a1d35) bg_cl_pane_g9

0x0008,

0xfa53,	// (0x000a4b31) bg_cl_pane_g

0x76bf,	// (0x0009c79d) aid_height_cl_leading_ParamLimits

0x76bf,	// (0x0009c79d) aid_height_cl_leading

0x76cb,	// (0x0009c7a9) aid_height_cl_text_ParamLimits

0x76cb,	// (0x0009c7a9) aid_height_cl_text

0xe252,	// (0x000a3330) bg_cl_header_pane_ParamLimits

0xe252,	// (0x000a3330) bg_cl_header_pane

0x76e3,	// (0x0009c7c1) cl_header_pane_g1_ParamLimits

0x76e3,	// (0x0009c7c1) cl_header_pane_g1

0x76f0,	// (0x0009c7ce) cl_header_pane_t1_ParamLimits

0x76f0,	// (0x0009c7ce) cl_header_pane_t1

0xcc5f,	// (0x000a1d3d) cl_list_pane

0xc7f5,	// (0x000a18d3) hc_scroll_pane_cp01

0x9cf6,	// (0x0009edd4) bg_cl_header_pane_g1

0xc6c9,	// (0x000a17a7) bg_cl_header_pane_g2

0x9d16,	// (0x0009edf4) bg_cl_header_pane_g3

0xc6d9,	// (0x000a17b7) bg_cl_header_pane_g4

0xc6d1,	// (0x000a17af) bg_cl_header_pane_g5

0xc923,	// (0x000a1a01) bg_cl_header_pane_g6

0xc6f1,	// (0x000a17cf) bg_cl_header_pane_g7

0xc6f9,	// (0x000a17d7) bg_cl_header_pane_g8

0xc6e9,	// (0x000a17c7) bg_cl_header_pane_g9

0x0008,

0xfa66,	// (0x000a4b44) bg_cl_header_pane_g

0x7702,	// (0x0009c7e0) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7702,	// (0x0009c7e0) hc_cl_list_double_graphic_heading_pane

0x7716,	// (0x0009c7f4) hc_cl_list_single_graphic_pane_ParamLimits

0x7716,	// (0x0009c7f4) hc_cl_list_single_graphic_pane

0x7730,	// (0x0009c80e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7730,	// (0x0009c80e) hc_cl_list_single_graphic_pane_g1

0x773c,	// (0x0009c81a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x773c,	// (0x0009c81a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa79,	// (0x000a4b57) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa79,	// (0x000a4b57) hc_cl_list_single_graphic_pane_g

0x7750,	// (0x0009c82e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7750,	// (0x0009c82e) hc_cl_list_single_graphic_pane_t1

0x7730,	// (0x0009c80e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7730,	// (0x0009c80e) hc_cl_list_double_graphic_heading_pane_g1

0x7765,	// (0x0009c843) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7765,	// (0x0009c843) hc_cl_list_double_graphic_heading_pane_g2

0x7779,	// (0x0009c857) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7779,	// (0x0009c857) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa7e,	// (0x000a4b5c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa7e,	// (0x000a4b5c) hc_cl_list_double_graphic_heading_pane_g

0x778d,	// (0x0009c86b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x778d,	// (0x0009c86b) hc_cl_list_double_graphic_heading_pane_t1

0x77a2,	// (0x0009c880) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x77a2,	// (0x0009c880) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa85,	// (0x000a4b63) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa85,	// (0x000a4b63) hc_cl_list_double_graphic_heading_pane_t

0x77bf,	// (0x0009c89d) vid4_progress_pane_g1

0x77d1,	// (0x0009c8af) vid4_progress_pane_g2

0x9f53,	// (0x0009f031) vid4_progress_pane_g3

0x77e1,	// (0x0009c8bf) vid4_progress_pane_g4

0x0004,

0xfa8a,	// (0x000a4b68) vid4_progress_pane_g

0x77ff,	// (0x0009c8dd) vid4_progress_pane_t1

0x7814,	// (0x0009c8f2) vid4_progress_pane_t2

0x0002,

0xfa95,	// (0x000a4b73) vid4_progress_pane_t

0x7840,	// (0x0009c91e) wait_bar_pane_cp07

0xb9e0,	// (0x000a0abe) blid_firmament_pane_ParamLimits

0xba23,	// (0x000a0b01) popup_blid_sat_info2_window_g1

0xba47,	// (0x000a0b25) popup_blid_sat_info2_window_t3

0xba55,	// (0x000a0b33) popup_blid_sat_info2_window_t4

0xba63,	// (0x000a0b41) popup_blid_sat_info2_window_t5

0xba71,	// (0x000a0b4f) popup_blid_sat_info2_window_t6

0xba81,	// (0x000a0b5f) popup_blid_sat_info2_window_t7

0xba8f,	// (0x000a0b6d) popup_blid_sat_info2_window_t8

0xba9d,	// (0x000a0b7b) popup_blid_sat_info2_window_t9

0xbaab,	// (0x000a0b89) popup_blid_sat_info2_window_t10

0xbb6f,	// (0x000a0c4d) aid_firma_cardinal_ParamLimits

0xbb83,	// (0x000a0c61) blid_firmament_pane_t1_ParamLimits

0xbb9a,	// (0x000a0c78) blid_firmament_pane_t2_ParamLimits

0xbbb1,	// (0x000a0c8f) blid_firmament_pane_t3_ParamLimits

0xbbc8,	// (0x000a0ca6) blid_firmament_pane_t4_ParamLimits

0xf6a8,	// (0x000a4786) blid_firmament_pane_t_ParamLimits

0xbbdf,	// (0x000a0cbd) blid_sat_info_pane_ParamLimits

0x46b9,	// (0x00099797) main_cam_set_pane_ParamLimits

0x5bb6,	// (0x0009ac94) aid_size_cell_colour_35_ParamLimits

0x5bd0,	// (0x0009acae) aid_size_cell_colour_112_ParamLimits

0x5be7,	// (0x0009acc5) aid_size_cell_effect_ParamLimits

0xecc6,	// (0x000a3da4) bg_tb_trans_pane_cp02_ParamLimits

0xb8ea,	// (0x000a09c8) heading_imed_pane_ParamLimits

0x5c01,	// (0x0009acdf) listscroll_imed_pane_ParamLimits

0xaddd,	// (0x0009febb) popup_call2_audio_first_window_g5_ParamLimits

0xaddd,	// (0x0009febb) popup_call2_audio_first_window_g5

0x632b,	// (0x0009b409) aid_size_touch_image3_arrow_left_ParamLimits

0x632b,	// (0x0009b409) aid_size_touch_image3_arrow_left

0x6341,	// (0x0009b41f) aid_size_touch_image3_arrow_right_ParamLimits

0x6341,	// (0x0009b41f) aid_size_touch_image3_arrow_right

0x782a,	// (0x0009c908) vid4_progress_pane_t3

0x5eb5,	// (0x0009af93) main_hwr_training_symbol_option_pane_ParamLimits

0x5eb5,	// (0x0009af93) main_hwr_training_symbol_option_pane

0xc45e,	// (0x000a153c) popup_hwr_training_preview_window_ParamLimits

0xc45e,	// (0x000a153c) popup_hwr_training_preview_window

0x5f16,	// (0x0009aff4) hwr_training_navi_pane_g5_ParamLimits

0x5f16,	// (0x0009aff4) hwr_training_navi_pane_g5

0xc6b7,	// (0x000a1795) popup_char_count_window

0x1183,	// (0x00096261) bg_popup_sub_pane_cp20_ParamLimits

0x7190,	// (0x0009c26e) list_vitu2_match_list_pane_ParamLimits

0x719c,	// (0x0009c27a) vitu2_page_scroll_pane_ParamLimits

0x719c,	// (0x0009c27a) vitu2_page_scroll_pane

0xcc79,	// (0x000a1d57) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcc79,	// (0x000a1d57) list_single_hwr_training_symbol_option_pane

0xcc8c,	// (0x000a1d6a) list_single_hwr_training_symbol_option_pane_g1

0xcc94,	// (0x000a1d72) list_single_hwr_training_symbol_option_pane_t1

0xcca2,	// (0x000a1d80) bg_button_pane_cp023

0xccab,	// (0x000a1d89) bg_button_pane_cp024

0x7888,	// (0x0009c966) vitu2_page_scroll_pane_g1

0x7890,	// (0x0009c96e) vitu2_page_scroll_pane_g2

0x0001,

0xfa9c,	// (0x000a4b7a) vitu2_page_scroll_pane_g

0x7898,	// (0x0009c976) vitu2_page_scroll_pane_t1

0xc218,	// (0x000a12f6) popup_char_count_window_g1

0xccde,	// (0x000a1dbc) popup_char_count_window_g2

0xcce7,	// (0x000a1dc5) popup_char_count_window_g3

0x0002,

0xfaa1,	// (0x000a4b7f) popup_char_count_window_g

0xccf0,	// (0x000a1dce) popup_char_count_window_t1

0x119d,	// (0x0009627b) main_vded2_pane

0xc154,	// (0x000a1232) aid_size_cell_imed_line

0xc15e,	// (0x000a123c) grid_imed_line_width_pane

0x6796,	// (0x0009b874) vid4_indicators_pane_g4

0xccfe,	// (0x000a1ddc) cell_imed_line_width_pane_ParamLimits

0xccfe,	// (0x000a1ddc) cell_imed_line_width_pane

0xcd12,	// (0x000a1df0) cell_imed_line_width_pane_g1

0xcbeb,	// (0x000a1cc9) cell_imed_line_width_pane_g2

0x0001,

0xfaa8,	// (0x000a4b86) cell_imed_line_width_pane_g

0x78a7,	// (0x0009c985) main_vded2_pane_g1_ParamLimits

0x78a7,	// (0x0009c985) main_vded2_pane_g1

0x78b4,	// (0x0009c992) main_vded2_pane_g2_ParamLimits

0x78b4,	// (0x0009c992) main_vded2_pane_g2

0x0001,

0xfaad,	// (0x000a4b8b) main_vded2_pane_g_ParamLimits

0xfaad,	// (0x000a4b8b) main_vded2_pane_g

0x78c2,	// (0x0009c9a0) vded2_slider_pane_ParamLimits

0x78c2,	// (0x0009c9a0) vded2_slider_pane

0x78cf,	// (0x0009c9ad) aid_size_touch_vded2_end

0x78d9,	// (0x0009c9b7) aid_size_touch_vded2_playhead

0xcd1b,	// (0x000a1df9) aid_size_touch_vded2_start

0xcd23,	// (0x000a1e01) vded2_slider_bg_pane

0xcd2c,	// (0x000a1e0a) vded2_slider_pane_g1

0xcd35,	// (0x000a1e13) vded2_slider_pane_g2

0x78e1,	// (0x0009c9bf) vded2_slider_pane_g3

0x0002,

0xfab2,	// (0x000a4b90) vded2_slider_pane_g

0xcd3d,	// (0x000a1e1b) vded2_slider_bg_pane_g1

0xcd46,	// (0x000a1e24) vded2_slider_bg_pane_g2

0xcd4f,	// (0x000a1e2d) vded2_slider_bg_pane_g3

0x0002,

0xfab9,	// (0x000a4b97) vded2_slider_bg_pane_g

0x3f94,	// (0x00099072) aid_postcard_touch_down_pane_ParamLimits

0x3f94,	// (0x00099072) aid_postcard_touch_down_pane

0x3fa4,	// (0x00099082) aid_postcard_touch_up_pane_ParamLimits

0x3fa4,	// (0x00099082) aid_postcard_touch_up_pane

0x119d,	// (0x0009627b) main_blid2_pane

0x46e2,	// (0x000997c0) popup_blid2_search_window

0xe0f4,	// (0x000a31d2) blid2_gps_pane

0xe0f4,	// (0x000a31d2) blid2_navig_pane

0xe0f4,	// (0x000a31d2) blid2_search_pane

0xe0f4,	// (0x000a31d2) blid2_tripm_pane

0x78ea,	// (0x0009c9c8) blid2_search_pane_g1_ParamLimits

0x78ea,	// (0x0009c9c8) blid2_search_pane_g1

0x78fa,	// (0x0009c9d8) blid2_search_pane_t1_ParamLimits

0x78fa,	// (0x0009c9d8) blid2_search_pane_t1

0x790c,	// (0x0009c9ea) aid_size_cell_blid2_gps_ParamLimits

0x790c,	// (0x0009c9ea) aid_size_cell_blid2_gps

0x791c,	// (0x0009c9fa) blid2_gps_pane_g1_ParamLimits

0x791c,	// (0x0009c9fa) blid2_gps_pane_g1

0x7928,	// (0x0009ca06) grid_blid2_satellite_pane_ParamLimits

0x7928,	// (0x0009ca06) grid_blid2_satellite_pane

0x7938,	// (0x0009ca16) blid2_navig_pane_g1_ParamLimits

0x7938,	// (0x0009ca16) blid2_navig_pane_g1

0x7944,	// (0x0009ca22) blid2_navig_pane_t1_ParamLimits

0x7944,	// (0x0009ca22) blid2_navig_pane_t1

0x7956,	// (0x0009ca34) blid2_navig_pane_t2_ParamLimits

0x7956,	// (0x0009ca34) blid2_navig_pane_t2

0x0001,

0xfac0,	// (0x000a4b9e) blid2_navig_pane_t_ParamLimits

0xfac0,	// (0x000a4b9e) blid2_navig_pane_t

0x7968,	// (0x0009ca46) blid2_navig_ring_pane_ParamLimits

0x7968,	// (0x0009ca46) blid2_navig_ring_pane

0x7978,	// (0x0009ca56) blid2_speed_pane_ParamLimits

0x7978,	// (0x0009ca56) blid2_speed_pane

0x7984,	// (0x0009ca62) blid2_tripm_pane_g1_ParamLimits

0x7984,	// (0x0009ca62) blid2_tripm_pane_g1

0x7994,	// (0x0009ca72) blid2_tripm_pane_g2_ParamLimits

0x7994,	// (0x0009ca72) blid2_tripm_pane_g2

0x79a0,	// (0x0009ca7e) blid2_tripm_pane_g3_ParamLimits

0x79a0,	// (0x0009ca7e) blid2_tripm_pane_g3

0x79ac,	// (0x0009ca8a) blid2_tripm_pane_g4_ParamLimits

0x79ac,	// (0x0009ca8a) blid2_tripm_pane_g4

0x79b8,	// (0x0009ca96) blid2_tripm_pane_g5_ParamLimits

0x79b8,	// (0x0009ca96) blid2_tripm_pane_g5

0x0005,

0xfac5,	// (0x000a4ba3) blid2_tripm_pane_g_ParamLimits

0xfac5,	// (0x000a4ba3) blid2_tripm_pane_g

0x79d4,	// (0x0009cab2) blid2_tripm_pane_t1_ParamLimits

0x79d4,	// (0x0009cab2) blid2_tripm_pane_t1

0x79e8,	// (0x0009cac6) blid2_tripm_pane_t2_ParamLimits

0x79e8,	// (0x0009cac6) blid2_tripm_pane_t2

0x79fa,	// (0x0009cad8) blid2_tripm_pane_t3_ParamLimits

0x79fa,	// (0x0009cad8) blid2_tripm_pane_t3

0x0003,

0xfad2,	// (0x000a4bb0) blid2_tripm_pane_t_ParamLimits

0xfad2,	// (0x000a4bb0) blid2_tripm_pane_t

0x7a2c,	// (0x0009cb0a) cell_blid2_satellite_pane_ParamLimits

0x7a2c,	// (0x0009cb0a) cell_blid2_satellite_pane

0x7a46,	// (0x0009cb24) cell_blid2_satellite_pane_g1

0xcd58,	// (0x000a1e36) cell_blid2_satellite_pane_t1

0xbbef,	// (0x000a0ccd) blid2_speed_pane_g1

0xcd7e,	// (0x000a1e5c) blid2_speed_pane_t1

0xcd8c,	// (0x000a1e6a) blid2_speed_pane_t2

0x0001,

0xfadb,	// (0x000a4bb9) blid2_speed_pane_t

0xbbef,	// (0x000a0ccd) blid2_navig_ring_pane_g1

0x7a4f,	// (0x0009cb2d) blid2_navig_ring_pane_g2

0x7a57,	// (0x0009cb35) blid2_navig_ring_pane_g3

0x7a5f,	// (0x0009cb3d) blid2_navig_ring_pane_g4

0x7a67,	// (0x0009cb45) blid2_navig_ring_pane_g5

0x0004,

0xfae0,	// (0x000a4bbe) blid2_navig_ring_pane_g

0xe0f4,	// (0x000a31d2) bg_popup_window_pane_cp011

0xcd9a,	// (0x000a1e78) popup_blid2_search_window_g1

0xcda2,	// (0x000a1e80) popup_blid2_search_window_t1

0xcdb0,	// (0x000a1e8e) popup_blid2_search_window_t2

0x0001,

0xfaeb,	// (0x000a4bc9) popup_blid2_search_window_t

0xeffa,	// (0x000a40d8) main_browser_pane_g1

0xec7e,	// (0x000a3d5c) main_browser_pane_ParamLimits

0x46b9,	// (0x00099797) bg_button_pane_cp011_ParamLimits

0x6a3b,	// (0x0009bb19) cell_vitu2_function_pane_g1_ParamLimits

0xb7b7,	// (0x000a0895) bg_popup_sub_pane_cp22_ParamLimits

0x734c,	// (0x0009c42a) input_focus_pane_cp08_ParamLimits

0x7363,	// (0x0009c441) popup_vitu2_query_button_pane_ParamLimits

0x7363,	// (0x0009c441) popup_vitu2_query_button_pane

0x7374,	// (0x0009c452) popup_vitu2_query_input_button_pane

0xc960,	// (0x000a1a3e) popup_vitu2_query_window_g1_ParamLimits

0x737e,	// (0x0009c45c) popup_vitu2_query_window_g2_ParamLimits

0xf9ec,	// (0x000a4aca) popup_vitu2_query_window_g_ParamLimits

0xe0f4,	// (0x000a31d2) bg_button_pane_cp026

0x7a6f,	// (0x0009cb4d) popup_vitu2_query_input_button_pane_g1

0xe0f4,	// (0x000a31d2) bg_button_pane_cp025

0xcdbe,	// (0x000a1e9c) popup_vitu2_query_button_pane_t1

0x5135,	// (0x0009a213) main_mp3_pane_t6

0x5145,	// (0x0009a223) popup_slider_window_cp01

0x6675,	// (0x0009b753) cam4_battery_pane

0x6755,	// (0x0009b833) cam4_battery_pane_cp02

0x77b7,	// (0x0009c895) cam4_battery_pane_cp01

0x77b7,	// (0x0009c895) cam4_battery_pane_cp03

0xcd66,	// (0x000a1e44) cam4_battery_pane_g1

0xbbef,	// (0x000a0ccd) cam4_battery_pane_g2

0x0001,

0xfaf0,	// (0x000a4bce) cam4_battery_pane_g

0xbab9,	// (0x000a0b97) popup_blid_sat_info2_window_t11

0x3830,	// (0x0009890e) aid_size_touch_mv_arrow_left_ParamLimits

0x385b,	// (0x00098939) aid_size_touch_mv_arrow_right_ParamLimits

0xa315,	// (0x0009f3f3) navi_pane_g1_ParamLimits

0x389a,	// (0x00098978) navi_pane_g2_ParamLimits

0x38c8,	// (0x000989a6) navi_pane_g3_ParamLimits

0xf3c1,	// (0x000a449f) navi_pane_g_ParamLimits

0x3922,	// (0x00098a00) navi_pane_mv_t1_ParamLimits

0x5c0d,	// (0x0009aceb) grid_imed_effect_pane_ParamLimits

0x20fc,	// (0x000971da) aid_placing_vt_slider_lsc

0xef49,	// (0x000a4027) aid_placing_vt_slider_prt

0xecc6,	// (0x000a3da4) bg_tb_trans_pane_cp01_ParamLimits

0xbd6f,	// (0x000a0e4d) popup_image_details_window_g1_ParamLimits

0xbd82,	// (0x000a0e60) popup_image_details_window_g2_ParamLimits

0xbd97,	// (0x000a0e75) popup_image_details_window_g3_ParamLimits

0xbd97,	// (0x000a0e75) popup_image_details_window_g3

0xf6ed,	// (0x000a47cb) popup_image_details_window_g_ParamLimits

0xbdab,	// (0x000a0e89) popup_image_details_window_t1_ParamLimits

0xbdbd,	// (0x000a0e9b) popup_image_details_window_t2_ParamLimits

0xbdd6,	// (0x000a0eb4) popup_image_details_window_t3_ParamLimits

0xbdea,	// (0x000a0ec8) popup_image_details_window_t4_ParamLimits

0xbe05,	// (0x000a0ee3) popup_image_details_window_t5_ParamLimits

0xf6f4,	// (0x000a47d2) popup_image_details_window_t_ParamLimits

0x76d7,	// (0x0009c7b5) cl_header_name_pane_ParamLimits

0x76d7,	// (0x0009c7b5) cl_header_name_pane

0x7a77,	// (0x0009cb55) cl_header_name_pane_t1_ParamLimits

0x7a77,	// (0x0009cb55) cl_header_name_pane_t1

0x7a8e,	// (0x0009cb6c) cl_header_name_pane_t2_ParamLimits

0x7a8e,	// (0x0009cb6c) cl_header_name_pane_t2

0x7ab8,	// (0x0009cb96) cl_header_name_pane_t3_ParamLimits

0x7ab8,	// (0x0009cb96) cl_header_name_pane_t3

0x0002,

0xfaf5,	// (0x000a4bd3) cl_header_name_pane_t_ParamLimits

0xfaf5,	// (0x000a4bd3) cl_header_name_pane_t

0x38f3,	// (0x000989d1) navi_pane_mv_g2_ParamLimits

0xc674,	// (0x000a1752) field_vitu2_entry_pane_g1_ParamLimits

0xc680,	// (0x000a175e) field_vitu2_entry_pane_g2_ParamLimits

0xc68c,	// (0x000a176a) field_vitu2_entry_pane_g3_ParamLimits

0xc68c,	// (0x000a176a) field_vitu2_entry_pane_g3

0xf8eb,	// (0x000a49c9) field_vitu2_entry_pane_g_ParamLimits

0x69cb,	// (0x0009baa9) cell_vitu2_itu_pane_g1_ParamLimits

0x69db,	// (0x0009bab9) cell_vitu2_itu_pane_g2_ParamLimits

0x69db,	// (0x0009bab9) cell_vitu2_itu_pane_g2

0x0001,

0xf8f7,	// (0x000a49d5) cell_vitu2_itu_pane_g_ParamLimits

0xf8f7,	// (0x000a49d5) cell_vitu2_itu_pane_g

0x46b9,	// (0x00099797) bg_vkb2_func_pane_cp05_ParamLimits

0x46b9,	// (0x00099797) bg_vkb2_func_pane_cp05

0x46b9,	// (0x00099797) bg_vkb2_func_pane_cp03

0x46b9,	// (0x00099797) bg_vkb2_func_pane_cp04

0x46b9,	// (0x00099797) bg_vkb2_func_pane_cp10_ParamLimits

0x46b9,	// (0x00099797) bg_vkb2_func_pane_cp10

0x7679,	// (0x0009c757) bg_vkb2_func_pane_cp08

0x765f,	// (0x0009c73d) bg_vkb2_func_pane_cp06

0x766d,	// (0x0009c74b) bg_vkb2_func_pane_cp07

0xccb4,	// (0x000a1d92) bg_vkb2_func_pane_cp11_ParamLimits

0xccb4,	// (0x000a1d92) bg_vkb2_func_pane_cp11

0xccc9,	// (0x000a1da7) bg_vkb2_func_pane_cp12_ParamLimits

0xccc9,	// (0x000a1da7) bg_vkb2_func_pane_cp12

0xe0f4,	// (0x000a31d2) bg_vkb2_func_pane_cp09

0xc6c9,	// (0x000a17a7) bg_vkb2_func_pane_g1

0x9d16,	// (0x0009edf4) bg_vkb2_func_pane_g2

0xc6d1,	// (0x000a17af) bg_vkb2_func_pane_g3

0xc6d9,	// (0x000a17b7) bg_vkb2_func_pane_g4

0xc923,	// (0x000a1a01) bg_vkb2_func_pane_g5

0xc6f1,	// (0x000a17cf) bg_vkb2_func_pane_g6

0xc6f9,	// (0x000a17d7) bg_vkb2_func_pane_g7

0xc6e9,	// (0x000a17c7) bg_vkb2_func_pane_g8

0x9cf6,	// (0x0009edd4) bg_vkb2_func_pane_g9

0x0008,

0xfafc,	// (0x000a4bda) bg_vkb2_func_pane_g

0x79c6,	// (0x0009caa4) blid2_tripm_pane_g6_ParamLimits

0x79c6,	// (0x0009caa4) blid2_tripm_pane_g6

0xc516,	// (0x000a15f4) mp4_progress_pane_g1

0x7a20,	// (0x0009cafe) blid2_tripm_values_pane_ParamLimits

0x7a20,	// (0x0009cafe) blid2_tripm_values_pane

0x7add,	// (0x0009cbbb) blid2_tripm_values_pane_t1

0x7aeb,	// (0x0009cbc9) blid2_tripm_values_pane_t2

0x7af9,	// (0x0009cbd7) blid2_tripm_values_pane_t3

0x7b07,	// (0x0009cbe5) blid2_tripm_values_pane_t4

0x7b15,	// (0x0009cbf3) blid2_tripm_values_pane_t5

0x7b23,	// (0x0009cc01) blid2_tripm_values_pane_t6

0x7b31,	// (0x0009cc0f) blid2_tripm_values_pane_t7

0x7b3f,	// (0x0009cc1d) blid2_tripm_values_pane_t8

0x7b4d,	// (0x0009cc2b) blid2_tripm_values_pane_t9

0x0008,

0xfb0f,	// (0x000a4bed) blid2_tripm_values_pane_t

0x213c,	// (0x0009721a) call_video_pane_t1_ParamLimits

0x215d,	// (0x0009723b) call_video_pane_t2_ParamLimits

0xf24f,	// (0x000a432d) call_video_pane_t_ParamLimits

0x3e63,	// (0x00098f41) msg_header_pane_g1_ParamLimits

0xa527,	// (0x0009f605) msg_header_pane_g2_ParamLimits

0xa527,	// (0x0009f605) msg_header_pane_g2

0x0001,

0xf464,	// (0x000a4542) msg_header_pane_g_ParamLimits

0xf464,	// (0x000a4542) msg_header_pane_g

0xec7e,	// (0x000a3d5c) main_clock2_pane_ParamLimits

0x599e,	// (0x0009aa7c) grid_clock2_toolbar_pane_ParamLimits

0x599e,	// (0x0009aa7c) grid_clock2_toolbar_pane

0x599e,	// (0x0009aa7c) listscroll_clock2_pane_ParamLimits

0x599e,	// (0x0009aa7c) listscroll_clock2_pane

0x5a48,	// (0x0009ab26) main_clock2_pane_t3_ParamLimits

0x5a48,	// (0x0009ab26) main_clock2_pane_t3

0x5a5a,	// (0x0009ab38) main_clock2_pane_t4_ParamLimits

0x5a5a,	// (0x0009ab38) main_clock2_pane_t4

0xcdcc,	// (0x000a1eaa) cell_clock2_toolbar_pane

0xcdd4,	// (0x000a1eb2) cell_clock2_toolbar_pane_cp01

0xcdd4,	// (0x000a1eb2) cell_clock2_toolbar_pane_cp02

0xcddc,	// (0x000a1eba) cell_clock2_toolbar_pane_cp03

0xcde4,	// (0x000a1ec2) list_clock2_pane

0xa26c,	// (0x0009f34a) scroll_pane_cp10

0xcdec,	// (0x000a1eca) list_single_clock2_pane_ParamLimits

0xcdec,	// (0x000a1eca) list_single_clock2_pane

0xa3b5,	// (0x0009f493) list_highlight_pane_cp08

0xcdf9,	// (0x000a1ed7) list_single_clock2_pane_t1

0xce07,	// (0x000a1ee5) list_single_clock2_pane_t2

0x0001,

0xfb22,	// (0x000a4c00) list_single_clock2_pane_t

0xe0f4,	// (0x000a31d2) bg_button_pane_cp10

0xce15,	// (0x000a1ef3) cell_clock2_toolbar_pane_g1

0x3f02,	// (0x00098fe0) aid_main_viewer_pane_g1_ParamLimits

0x3f02,	// (0x00098fe0) aid_main_viewer_pane_g1

0x3f0e,	// (0x00098fec) aid_main_viewer_pane_g2_ParamLimits

0x3f0e,	// (0x00098fec) aid_main_viewer_pane_g2

0x3f1a,	// (0x00098ff8) aid_main_viewer_pane_g3_ParamLimits

0x3f1a,	// (0x00098ff8) aid_main_viewer_pane_g3

0x3f2b,	// (0x00099009) aid_main_viewer_pane_g4_ParamLimits

0x3f2b,	// (0x00099009) aid_main_viewer_pane_g4

0x0003,

0xf475,	// (0x000a4553) aid_main_viewer_pane_g_ParamLimits

0xf475,	// (0x000a4553) aid_main_viewer_pane_g

0x46ac,	// (0x0009978a) main_calc_pane_ParamLimits

0x46c7,	// (0x000997a5) main_dialer2_pane_ParamLimits

0x119d,	// (0x0009627b) main_cam6_pane

0x119d,	// (0x0009627b) main_vid6_pane

0x59aa,	// (0x0009aa88) listscroll_gen_pane_cp06_ParamLimits

0x59aa,	// (0x0009aa88) listscroll_gen_pane_cp06

0x5a6c,	// (0x0009ab4a) main_clock2_pane_t5_ParamLimits

0x5a6c,	// (0x0009ab4a) main_clock2_pane_t5

0x5ab7,	// (0x0009ab95) aid_call2_pane_cp10_ParamLimits

0x5ac9,	// (0x0009aba7) aid_call_pane_cp10_ParamLimits

0xa2ea,	// (0x0009f3c8) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa2ea,	// (0x0009f3c8) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5adb,	// (0x0009abb9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5adb,	// (0x0009abb9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa2ea,	// (0x0009f3c8) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7a4,	// (0x000a4882) popup_clock_analogue_window_cp10_g_ParamLimits

0x5aed,	// (0x0009abcb) popup_clock_analogue_window_cp10_t1_ParamLimits

0x62d8,	// (0x0009b3b6) cell_dialer2_keypad_pane_g2_ParamLimits

0x62d8,	// (0x0009b3b6) cell_dialer2_keypad_pane_g2

0x0001,

0xf88a,	// (0x000a4968) cell_dialer2_keypad_pane_g_ParamLimits

0xf88a,	// (0x000a4968) cell_dialer2_keypad_pane_g

0x62f4,	// (0x0009b3d2) cell_dialer2_keypad_pane_t1

0x6d08,	// (0x0009bde6) main_cset_text2_pane_ParamLimits

0x6d08,	// (0x0009bde6) main_cset_text2_pane

0xcb67,	// (0x000a1c45) area_vitu2_query_pane_g1_ParamLimits

0x75fe,	// (0x0009c6dc) area_vitu2_query_pane_g2_ParamLimits

0xfa3f,	// (0x000a4b1d) area_vitu2_query_pane_g_ParamLimits

0xcbf3,	// (0x000a1cd1) area_vitu2_query_pane_t7_ParamLimits

0xcbf3,	// (0x000a1cd1) area_vitu2_query_pane_t7

0x765f,	// (0x0009c73d) bg_button_pane_cp018_ParamLimits

0x766d,	// (0x0009c74b) bg_button_pane_cp021_ParamLimits

0x7679,	// (0x0009c757) bg_button_pane_cp022_ParamLimits

0x7679,	// (0x0009c757) bg_vkb2_func_pane_cp08_ParamLimits

0x765f,	// (0x0009c73d) bg_vkb2_func_pane_cp06_ParamLimits

0x766d,	// (0x0009c74b) bg_vkb2_func_pane_cp07_ParamLimits

0x768a,	// (0x0009c768) input_focus_pane_cp09_ParamLimits

0x7b5b,	// (0x0009cc39) cam6_autofocus_pane_ParamLimits

0x7b5b,	// (0x0009cc39) cam6_autofocus_pane

0x7b7d,	// (0x0009cc5b) cam6_image_uncrop_pane_ParamLimits

0x7b7d,	// (0x0009cc5b) cam6_image_uncrop_pane

0x7baa,	// (0x0009cc88) cam6_indi_pane_ParamLimits

0x7baa,	// (0x0009cc88) cam6_indi_pane

0x7bc4,	// (0x0009cca2) cam6_mode_pane_ParamLimits

0x7bc4,	// (0x0009cca2) cam6_mode_pane

0x7bd8,	// (0x0009ccb6) cam6_timer_pane_ParamLimits

0x7bd8,	// (0x0009ccb6) cam6_timer_pane

0x7be4,	// (0x0009ccc2) cam6_zoom_pane_ParamLimits

0x7be4,	// (0x0009ccc2) cam6_zoom_pane

0x7bfc,	// (0x0009ccda) cam6_mode_pane_g1_ParamLimits

0x7bfc,	// (0x0009ccda) cam6_mode_pane_g1

0x7c08,	// (0x0009cce6) cam6_mode_pane_g2_ParamLimits

0x7c08,	// (0x0009cce6) cam6_mode_pane_g2

0x7c14,	// (0x0009ccf2) cam6_mode_pane_g3_ParamLimits

0x7c14,	// (0x0009ccf2) cam6_mode_pane_g3

0x7c20,	// (0x0009ccfe) cam6_mode_pane_g4_ParamLimits

0x7c20,	// (0x0009ccfe) cam6_mode_pane_g4

0x0003,

0xfb27,	// (0x000a4c05) cam6_mode_pane_g_ParamLimits

0xfb27,	// (0x000a4c05) cam6_mode_pane_g

0xcd70,	// (0x000a1e4e) bg_tb_trans_pane_cp08_ParamLimits

0xcd70,	// (0x000a1e4e) bg_tb_trans_pane_cp08

0xce1d,	// (0x000a1efb) cam6_battery_pane_ParamLimits

0xce1d,	// (0x000a1efb) cam6_battery_pane

0xce33,	// (0x000a1f11) cam6_indi_pane_g1_ParamLimits

0xce33,	// (0x000a1f11) cam6_indi_pane_g1

0xce45,	// (0x000a1f23) cam6_indi_pane_g2_ParamLimits

0xce45,	// (0x000a1f23) cam6_indi_pane_g2

0xce57,	// (0x000a1f35) cam6_indi_pane_g3_ParamLimits

0xce57,	// (0x000a1f35) cam6_indi_pane_g3

0x0002,

0xfb30,	// (0x000a4c0e) cam6_indi_pane_g_ParamLimits

0xfb30,	// (0x000a4c0e) cam6_indi_pane_g

0xce69,	// (0x000a1f47) cam6_indi_pane_t1_ParamLimits

0xce69,	// (0x000a1f47) cam6_indi_pane_t1

0x67d1,	// (0x0009b8af) cam6_autofocus_pane_g1

0x67c9,	// (0x0009b8a7) cam6_autofocus_pane_g2

0x67e1,	// (0x0009b8bf) cam6_autofocus_pane_g3

0x67d9,	// (0x0009b8b7) cam6_autofocus_pane_g4

0x0003,

0xfb37,	// (0x000a4c15) cam6_autofocus_pane_g

0xce8f,	// (0x000a1f6d) cam6_timer_pane_g1

0xce97,	// (0x000a1f75) cam6_timer_pane_t1

0xcea5,	// (0x000a1f83) cam6_zoom_cont_pane

0xcead,	// (0x000a1f8b) cam6_zoom_pane_g1

0xceb5,	// (0x000a1f93) cam6_zoom_pane_g2

0x7c2c,	// (0x0009cd0a) cam6_zoom_pane_g3

0x0002,

0xfb40,	// (0x000a4c1e) cam6_zoom_pane_g

0xbbef,	// (0x000a0ccd) cam6_battery_pane_g1

0xbbef,	// (0x000a0ccd) cam6_battery_pane_g2

0x0001,

0xf6b1,	// (0x000a478f) cam6_battery_pane_g

0xcebd,	// (0x000a1f9b) cam6_zoom_cont_pane_g1

0xcec6,	// (0x000a1fa4) cam6_zoom_cont_pane_g2

0xcecf,	// (0x000a1fad) cam6_zoom_cont_pane_g3

0x0002,

0xfb47,	// (0x000a4c25) cam6_zoom_cont_pane_g

0x7c49,	// (0x0009cd27) cam6_mode_pane_cp_ParamLimits

0x7c49,	// (0x0009cd27) cam6_mode_pane_cp

0x7c5d,	// (0x0009cd3b) cam6_zoom_pane_cp_ParamLimits

0x7c5d,	// (0x0009cd3b) cam6_zoom_pane_cp

0x7c75,	// (0x0009cd53) vid6_image_uncrop_cif_pane_ParamLimits

0x7c75,	// (0x0009cd53) vid6_image_uncrop_cif_pane

0x7ca1,	// (0x0009cd7f) vid6_image_uncrop_nhd_pane_ParamLimits

0x7ca1,	// (0x0009cd7f) vid6_image_uncrop_nhd_pane

0x7cbe,	// (0x0009cd9c) vid6_image_uncrop_vga_pane_ParamLimits

0x7cbe,	// (0x0009cd9c) vid6_image_uncrop_vga_pane

0x7cdd,	// (0x0009cdbb) vid6_image_uncrop_wvga_pane_ParamLimits

0x7cdd,	// (0x0009cdbb) vid6_image_uncrop_wvga_pane

0x7cfa,	// (0x0009cdd8) vid6_indi_pane_ParamLimits

0x7cfa,	// (0x0009cdd8) vid6_indi_pane

0xcd70,	// (0x000a1e4e) bg_tb_trans_pane_cp09_ParamLimits

0xcd70,	// (0x000a1e4e) bg_tb_trans_pane_cp09

0xcee7,	// (0x000a1fc5) cam6_battery_pane_cp_ParamLimits

0xcee7,	// (0x000a1fc5) cam6_battery_pane_cp

0xcef3,	// (0x000a1fd1) vid6_indi_pane_g1_ParamLimits

0xcef3,	// (0x000a1fd1) vid6_indi_pane_g1

0xcf05,	// (0x000a1fe3) vid6_indi_pane_g2_ParamLimits

0xcf05,	// (0x000a1fe3) vid6_indi_pane_g2

0xcf17,	// (0x000a1ff5) vid6_indi_pane_g3_ParamLimits

0xcf17,	// (0x000a1ff5) vid6_indi_pane_g3

0xcf2c,	// (0x000a200a) vid6_indi_pane_g4_ParamLimits

0xcf2c,	// (0x000a200a) vid6_indi_pane_g4

0xcf41,	// (0x000a201f) vid6_indi_pane_g5_ParamLimits

0xcf41,	// (0x000a201f) vid6_indi_pane_g5

0x0004,

0xfb4e,	// (0x000a4c2c) vid6_indi_pane_g_ParamLimits

0xfb4e,	// (0x000a4c2c) vid6_indi_pane_g

0xcf5b,	// (0x000a2039) vid6_indi_pane_t1_ParamLimits

0xcf5b,	// (0x000a2039) vid6_indi_pane_t1

0xcf71,	// (0x000a204f) vid6_indi_pane_t2_ParamLimits

0xcf71,	// (0x000a204f) vid6_indi_pane_t2

0xcf99,	// (0x000a2077) vid6_indi_pane_t3_ParamLimits

0xcf99,	// (0x000a2077) vid6_indi_pane_t3

0xcfc1,	// (0x000a209f) vid6_indi_pane_t4_ParamLimits

0xcfc1,	// (0x000a209f) vid6_indi_pane_t4

0x0003,

0xfb59,	// (0x000a4c37) vid6_indi_pane_t_ParamLimits

0xfb59,	// (0x000a4c37) vid6_indi_pane_t

0xcfe5,	// (0x000a20c3) wait_bar_pane_cp08

0x7d1d,	// (0x0009cdfb) main_cset_text2_pane_t1_ParamLimits

0x7d1d,	// (0x0009cdfb) main_cset_text2_pane_t1

0x7c34,	// (0x0009cd12) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c34,	// (0x0009cd12) listscroll_gen_pane_cp06_t1

0x119d,	// (0x0009627b) main_cam6_set_pane

0x6667,	// (0x0009b745) bg_tb_trans_pane_cp06_ParamLimits

0x667d,	// (0x0009b75b) cam4_indicators_pane_g1_ParamLimits

0x668e,	// (0x0009b76c) cam4_indicators_pane_g2_ParamLimits

0xf8c7,	// (0x000a49a5) cam4_indicators_pane_g_ParamLimits

0x66ac,	// (0x0009b78a) cam4_indicators_pane_t1_ParamLimits

0x46b9,	// (0x00099797) bg_tb_trans_pane_cp07_ParamLimits

0x675d,	// (0x0009b83b) vid4_indicators_pane_g1_ParamLimits

0x6771,	// (0x0009b84f) vid4_indicators_pane_g2_ParamLimits

0x6785,	// (0x0009b863) vid4_indicators_pane_g3_ParamLimits

0x6796,	// (0x0009b874) vid4_indicators_pane_g4_ParamLimits

0xf8d9,	// (0x000a49b7) vid4_indicators_pane_g_ParamLimits

0x67b2,	// (0x0009b890) vid4_indicators_pane_t1_ParamLimits

0x77bf,	// (0x0009c89d) vid4_progress_pane_g1_ParamLimits

0x77d1,	// (0x0009c8af) vid4_progress_pane_g2_ParamLimits

0x9f53,	// (0x0009f031) vid4_progress_pane_g3_ParamLimits

0x77e1,	// (0x0009c8bf) vid4_progress_pane_g4_ParamLimits

0xfa8a,	// (0x000a4b68) vid4_progress_pane_g_ParamLimits

0x77ff,	// (0x0009c8dd) vid4_progress_pane_t1_ParamLimits

0x7814,	// (0x0009c8f2) vid4_progress_pane_t2_ParamLimits

0x782a,	// (0x0009c908) vid4_progress_pane_t3_ParamLimits

0xfa95,	// (0x000a4b73) vid4_progress_pane_t_ParamLimits

0x7840,	// (0x0009c91e) wait_bar_pane_cp07_ParamLimits

0x7d57,	// (0x0009ce35) main_cam6_set_pane_g2_ParamLimits

0x7d57,	// (0x0009ce35) main_cam6_set_pane_g2

0x7d63,	// (0x0009ce41) main_cset6_listscroll_pane_ParamLimits

0x7d63,	// (0x0009ce41) main_cset6_listscroll_pane

0x7d8e,	// (0x0009ce6c) main_cset6_slider_pane_ParamLimits

0x7d8e,	// (0x0009ce6c) main_cset6_slider_pane

0x7d9a,	// (0x0009ce78) main_cset6_text2_pane_ParamLimits

0x7d9a,	// (0x0009ce78) main_cset6_text2_pane

0xcff4,	// (0x000a20d2) main_cset6_text_pane

0xcffc,	// (0x000a20da) main_cset_list_pane_copy1_ParamLimits

0xcffc,	// (0x000a20da) main_cset_list_pane_copy1

0xd00c,	// (0x000a20ea) scroll_pane_cp028_copy1

0x7dad,	// (0x0009ce8b) cset_list_set_pane_copy1

0x7dc6,	// (0x0009cea4) aid_position_infowindow_above_copy1

0x7dce,	// (0x0009ceac) aid_position_infowindow_below_copy1

0x7dd6,	// (0x0009ceb4) cset_list_set_pane_g1_copy1

0xc8ce,	// (0x000a19ac) cset_list_set_pane_g3_copy1_ParamLimits

0xc8ce,	// (0x000a19ac) cset_list_set_pane_g3_copy1

0xc8dd,	// (0x000a19bb) cset_list_set_pane_t1_copy1_ParamLimits

0xc8dd,	// (0x000a19bb) cset_list_set_pane_t1_copy1

0xecc6,	// (0x000a3da4) list_highlight_pane_cp021_copy1_ParamLimits

0xecc6,	// (0x000a3da4) list_highlight_pane_cp021_copy1

0xd015,	// (0x000a20f3) cset6_slider_pane_ParamLimits

0xd015,	// (0x000a20f3) cset6_slider_pane

0xd041,	// (0x000a211f) main_cset6_slider_pane_g1_ParamLimits

0xd041,	// (0x000a211f) main_cset6_slider_pane_g1

0x7dde,	// (0x0009cebc) main_cset6_slider_pane_g2_ParamLimits

0x7dde,	// (0x0009cebc) main_cset6_slider_pane_g2

0xd069,	// (0x000a2147) main_cset6_slider_pane_g3_ParamLimits

0xd069,	// (0x000a2147) main_cset6_slider_pane_g3

0x7e06,	// (0x0009cee4) main_cset6_slider_pane_g4_ParamLimits

0x7e06,	// (0x0009cee4) main_cset6_slider_pane_g4

0x7e12,	// (0x0009cef0) main_cset6_slider_pane_g5_ParamLimits

0x7e12,	// (0x0009cef0) main_cset6_slider_pane_g5

0xc80a,	// (0x000a18e8) main_cset6_slider_pane_g7_ParamLimits

0xc80a,	// (0x000a18e8) main_cset6_slider_pane_g7

0xc816,	// (0x000a18f4) main_cset6_slider_pane_g8_ParamLimits

0xc816,	// (0x000a18f4) main_cset6_slider_pane_g8

0x7e20,	// (0x0009cefe) main_cset6_slider_pane_g9_ParamLimits

0x7e20,	// (0x0009cefe) main_cset6_slider_pane_g9

0x7e2c,	// (0x0009cf0a) main_cset6_slider_pane_g10_ParamLimits

0x7e2c,	// (0x0009cf0a) main_cset6_slider_pane_g10

0x7e38,	// (0x0009cf16) main_cset6_slider_pane_g11_ParamLimits

0x7e38,	// (0x0009cf16) main_cset6_slider_pane_g11

0x7e44,	// (0x0009cf22) main_cset6_slider_pane_g12_ParamLimits

0x7e44,	// (0x0009cf22) main_cset6_slider_pane_g12

0x7e50,	// (0x0009cf2e) main_cset6_slider_pane_g13_ParamLimits

0x7e50,	// (0x0009cf2e) main_cset6_slider_pane_g13

0x7e5c,	// (0x0009cf3a) main_cset6_slider_pane_g14_ParamLimits

0x7e5c,	// (0x0009cf3a) main_cset6_slider_pane_g14

0x7e68,	// (0x0009cf46) main_cset6_slider_pane_g15_ParamLimits

0x7e68,	// (0x0009cf46) main_cset6_slider_pane_g15

0x7e80,	// (0x0009cf5e) main_cset6_slider_pane_g16_ParamLimits

0x7e80,	// (0x0009cf5e) main_cset6_slider_pane_g16

0x7e8e,	// (0x0009cf6c) main_cset6_slider_pane_g17_ParamLimits

0x7e8e,	// (0x0009cf6c) main_cset6_slider_pane_g17

0x0011,

0xfb62,	// (0x000a4c40) main_cset6_slider_pane_g_ParamLimits

0xfb62,	// (0x000a4c40) main_cset6_slider_pane_g

0xd075,	// (0x000a2153) main_cset6_slider_pane_t1_ParamLimits

0xd075,	// (0x000a2153) main_cset6_slider_pane_t1

0x7eb4,	// (0x0009cf92) main_cset6_slider_pane_t2_ParamLimits

0x7eb4,	// (0x0009cf92) main_cset6_slider_pane_t2

0x7edf,	// (0x0009cfbd) main_cset6_slider_pane_t3_ParamLimits

0x7edf,	// (0x0009cfbd) main_cset6_slider_pane_t3

0x7f0a,	// (0x0009cfe8) main_cset6_slider_pane_t4_ParamLimits

0x7f0a,	// (0x0009cfe8) main_cset6_slider_pane_t4

0x7f35,	// (0x0009d013) main_cset6_slider_pane_t5_ParamLimits

0x7f35,	// (0x0009d013) main_cset6_slider_pane_t5

0xd0b6,	// (0x000a2194) main_cset6_slider_pane_t7_ParamLimits

0xd0b6,	// (0x000a2194) main_cset6_slider_pane_t7

0x7f62,	// (0x0009d040) main_cset6_slider_pane_t8_ParamLimits

0x7f62,	// (0x0009d040) main_cset6_slider_pane_t8

0x7f86,	// (0x0009d064) main_cset6_slider_pane_t9_ParamLimits

0x7f86,	// (0x0009d064) main_cset6_slider_pane_t9

0x7faa,	// (0x0009d088) main_cset6_slider_pane_t10_ParamLimits

0x7faa,	// (0x0009d088) main_cset6_slider_pane_t10

0x7fce,	// (0x0009d0ac) main_cset6_slider_pane_t11_ParamLimits

0x7fce,	// (0x0009d0ac) main_cset6_slider_pane_t11

0xd0ec,	// (0x000a21ca) main_cset6_slider_pane_t14_ParamLimits

0xd0ec,	// (0x000a21ca) main_cset6_slider_pane_t14

0xd125,	// (0x000a2203) main_cset6_slider_pane_t15_ParamLimits

0xd125,	// (0x000a2203) main_cset6_slider_pane_t15

0x000b,

0xfb87,	// (0x000a4c65) main_cset6_slider_pane_t_ParamLimits

0xfb87,	// (0x000a4c65) main_cset6_slider_pane_t

0xca4c,	// (0x000a1b2a) cset_slider_pane_g1_copy1

0xca55,	// (0x000a1b33) cset_slider_pane_g2_copy1

0xca5e,	// (0x000a1b3c) cset_slider_pane_g3_copy1

0xe0f4,	// (0x000a31d2) bg_popup_sub_pane_cp011_copy1

0xd15e,	// (0x000a223c) main_cset_text_pane_g1_copy1

0xc974,	// (0x000a1a52) main_cset_text_pane_t1_copy1

0xc982,	// (0x000a1a60) main_cset_text_pane_t2_copy1

0xc990,	// (0x000a1a6e) main_cset_text_pane_t3_copy1

0xc99e,	// (0x000a1a7c) main_cset_text_pane_t4_copy1

0xc9ac,	// (0x000a1a8a) main_cset_text_pane_t5_copy1

0xd166,	// (0x000a2244) main_cset_text_pane_t6_copy1

0xd174,	// (0x000a2252) main_cset_text_pane_t7_copy1

0x80c5,	// (0x0009d1a3) main_cset_text2_pane_t1_copy1

0x46b9,	// (0x00099797) main_ncimui_pane

0x4718,	// (0x000997f6) popup_query_ncimui_window_ParamLimits

0x4718,	// (0x000997f6) popup_query_ncimui_window

0xbef0,	// (0x000a0fce) field_cale_ev2_pane_g4_ParamLimits

0xbef0,	// (0x000a0fce) field_cale_ev2_pane_g4

0x5ff8,	// (0x0009b0d6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ff8,	// (0x0009b0d6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf865,	// (0x000a4943) cell_video_dialer_keypad_pane_g_ParamLimits

0xf865,	// (0x000a4943) cell_video_dialer_keypad_pane_g

0x6010,	// (0x0009b0ee) cell_video_dialer_keypad_pane_t1

0xe0f4,	// (0x000a31d2) bg_popup_window_pane_cp012

0xa12d,	// (0x0009f20b) heading_pane_cp06

0xd1a0,	// (0x000a227e) ncim_query_content_pane

0xe0f4,	// (0x000a31d2) bg_popup_heading_pane_cp01

0xd1a8,	// (0x000a2286) ncim_heading_pane_t1

0xd1b6,	// (0x000a2294) ncim_indicator_popup_pane

0xd1c8,	// (0x000a22a6) ncim_query_button_pane

0xd1dc,	// (0x000a22ba) ncim_query_content_pane_t1

0xd1ee,	// (0x000a22cc) ncim_query_content_pane_t2

0x0005,

0xfbcb,	// (0x000a4ca9) ncim_query_content_pane_t

0xd228,	// (0x000a2306) ncim_query_list_pane

0xd23a,	// (0x000a2318) ncim_query_popup_pane

0xd1b6,	// (0x000a2294) ncim_indicator_popup_pane_ParamLimits

0x821f,	// (0x0009d2fd) ncim_query_content_pane_g1_ParamLimits

0x821f,	// (0x0009d2fd) ncim_query_content_pane_g1

0xd1dc,	// (0x000a22ba) ncim_query_content_pane_t1_ParamLimits

0xd1ee,	// (0x000a22cc) ncim_query_content_pane_t2_ParamLimits

0x822b,	// (0x0009d309) ncim_query_content_pane_t3_ParamLimits

0x822b,	// (0x0009d309) ncim_query_content_pane_t3

0x8248,	// (0x0009d326) ncim_query_content_pane_t4_ParamLimits

0x8248,	// (0x0009d326) ncim_query_content_pane_t4

0x8265,	// (0x0009d343) ncim_query_content_pane_t5_ParamLimits

0x8265,	// (0x0009d343) ncim_query_content_pane_t5

0xd200,	// (0x000a22de) ncim_query_content_pane_t6_ParamLimits

0xd200,	// (0x000a22de) ncim_query_content_pane_t6

0xfbcb,	// (0x000a4ca9) ncim_query_content_pane_t_ParamLimits

0xd228,	// (0x000a2306) ncim_query_list_pane_ParamLimits

0xd23a,	// (0x000a2318) ncim_query_popup_pane_ParamLimits

0xd24e,	// (0x000a232c) wait_bar_pane_cp04

0xe0f4,	// (0x000a31d2) input_focus_pane_cp011

0xd256,	// (0x000a2334) ncim_query_popup_pane_t1

0xd264,	// (0x000a2342) ncim_list_query_list_pane_ParamLimits

0xd264,	// (0x000a2342) ncim_list_query_list_pane

0xe0f4,	// (0x000a31d2) bg_button_pane_cp027

0xd277,	// (0x000a2355) ncim_query_button_pane_g1

0xe0f4,	// (0x000a31d2) list_highlight_pane_cp012

0xd281,	// (0x000a235f) ncim_list_query_list_pane_g1

0xd289,	// (0x000a2367) ncim_list_query_list_pane_t1

0x669d,	// (0x0009b77b) cam4_indicators_pane_g3_ParamLimits

0x669d,	// (0x0009b77b) cam4_indicators_pane_g3

0x67a2,	// (0x0009b880) vid4_indicators_pane_g5_ParamLimits

0x67a2,	// (0x0009b880) vid4_indicators_pane_g5

0x77f0,	// (0x0009c8ce) vid4_progress_pane_g5_ParamLimits

0x77f0,	// (0x0009c8ce) vid4_progress_pane_g5

0x810b,	// (0x0009d1e9) main_ncimui_pane_g1

0x8173,	// (0x0009d251) ncimui_group_query_pane_ParamLimits

0x8173,	// (0x0009d251) ncimui_group_query_pane

0x81bb,	// (0x0009d299) ncimui_list_pane_ParamLimits

0x81bb,	// (0x0009d299) ncimui_list_pane

0x81e2,	// (0x0009d2c0) ncimui_text_pane_ParamLimits

0x81e2,	// (0x0009d2c0) ncimui_text_pane

0x8282,	// (0x0009d360) ncimui_text_pane_t1_ParamLimits

0x8282,	// (0x0009d360) ncimui_text_pane_t1

0xd297,	// (0x000a2375) ncimui_list_single_graphic_pane_ParamLimits

0xd297,	// (0x000a2375) ncimui_list_single_graphic_pane

0x82a1,	// (0x0009d37f) ncimui_query_pane_ParamLimits

0x82a1,	// (0x0009d37f) ncimui_query_pane

0xe0f4,	// (0x000a31d2) list_highlight_pane_cp013

0xd2a7,	// (0x000a2385) ncim_list_query_list_pane_t1_copy1

0xd281,	// (0x000a235f) ncim_list_single_graphic_pane_g1

0xd2b5,	// (0x000a2393) ncim_query_button_pane_cp01

0xd2c1,	// (0x000a239f) ncim_query_entry_pane_ParamLimits

0xd2c1,	// (0x000a239f) ncim_query_entry_pane

0xd2d4,	// (0x000a23b2) ncimui_query_pane_g1

0xd2e0,	// (0x000a23be) ncimui_query_pane_t1_ParamLimits

0xd2e0,	// (0x000a23be) ncimui_query_pane_t1

0xecc6,	// (0x000a3da4) input_focus_pane_cp012

0xd2f9,	// (0x000a23d7) ncim_query_entry_pane_t1

0xec7e,	// (0x000a3d5c) main_im_pane_ParamLimits

0x46b9,	// (0x00099797) main_mobtv_pane_ParamLimits

0x46b9,	// (0x00099797) main_mobtv_pane

0x7e9c,	// (0x0009cf7a) main_cset6_slider_pane_g18_ParamLimits

0x7e9c,	// (0x0009cf7a) main_cset6_slider_pane_g18

0x7ea8,	// (0x0009cf86) main_cset6_slider_pane_g19_ParamLimits

0x7ea8,	// (0x0009cf86) main_cset6_slider_pane_g19

0xc68c,	// (0x000a176a) bg_main_mobtv_pane_ParamLimits

0xc68c,	// (0x000a176a) bg_main_mobtv_pane

0x82b4,	// (0x0009d392) main_mobtv_info_pane

0x82bf,	// (0x0009d39d) main_mobtv_loading_pane_ParamLimits

0x82bf,	// (0x0009d39d) main_mobtv_loading_pane

0xd30b,	// (0x000a23e9) main_mobtv_pg_channel_list_pane

0xd315,	// (0x000a23f3) main_mobtv_pg_hdr_pane

0x82cc,	// (0x0009d3aa) main_mobtv_programe_curr_pane_ParamLimits

0x82cc,	// (0x0009d3aa) main_mobtv_programe_curr_pane

0x82d9,	// (0x0009d3b7) main_mobtv_programe_next_pane_ParamLimits

0x82d9,	// (0x0009d3b7) main_mobtv_programe_next_pane

0xd31e,	// (0x000a23fc) popup_mobtv_noti_window

0xbbef,	// (0x000a0ccd) main_tv_pg_hdr_pane_g1

0xd326,	// (0x000a2404) main_tv_pg_hdr_pane_g2

0xd32e,	// (0x000a240c) main_tv_pg_hdr_pane_g3

0xd336,	// (0x000a2414) main_tv_pg_hdr_pane_g4

0xd33e,	// (0x000a241c) main_tv_pg_hdr_pane_g5

0xd348,	// (0x000a2426) main_tv_pg_hdr_pane_g6

0xd352,	// (0x000a2430) main_tv_pg_hdr_pane_g7

0xd35c,	// (0x000a243a) main_tv_pg_hdr_pane_g8

0xd366,	// (0x000a2444) main_tv_pg_hdr_pane_g9

0xd370,	// (0x000a244e) main_tv_pg_hdr_pane_g10

0xd37a,	// (0x000a2458) main_tv_pg_hdr_pane_g11

0x000a,

0xfbd8,	// (0x000a4cb6) main_tv_pg_hdr_pane_g

0xd384,	// (0x000a2462) main_tv_pg_hdr_pane_t1

0xd392,	// (0x000a2470) main_tv_pg_hdr_pane_t2

0xd3a0,	// (0x000a247e) main_tv_pg_hdr_pane_t3

0xd3b0,	// (0x000a248e) main_tv_pg_hdr_pane_t4

0xd3c0,	// (0x000a249e) main_tv_pg_hdr_pane_t5

0x0004,

0xfbef,	// (0x000a4ccd) main_tv_pg_hdr_pane_t

0xd3d0,	// (0x000a24ae) single_mobtv_pg_channel_pane_ParamLimits

0xd3d0,	// (0x000a24ae) single_mobtv_pg_channel_pane

0xd3e2,	// (0x000a24c0) single_mobtv_pg_channel_table_pane

0xd3eb,	// (0x000a24c9) single_mobtv_pg_channel_thumb_pane

0xd3f4,	// (0x000a24d2) single_tv_pg_channel_pane_g1

0xd3fd,	// (0x000a24db) single_tv_pg_channel_pane_g2

0x0001,

0xfbfa,	// (0x000a4cd8) single_tv_pg_channel_pane_g

0xbe4f,	// (0x000a0f2d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbe4f,	// (0x000a0f2d) bg_single_mobtv_pg_channel_thumb_pane

0xd406,	// (0x000a24e4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd406,	// (0x000a24e4) single_mobtv_pg_channel_thumb_pane_g1

0xd414,	// (0x000a24f2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd414,	// (0x000a24f2) single_mobtv_pg_channel_thumb_pane_g2

0xd420,	// (0x000a24fe) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd420,	// (0x000a24fe) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbff,	// (0x000a4cdd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbff,	// (0x000a4cdd) single_mobtv_pg_channel_thumb_pane_g

0xd42c,	// (0x000a250a) single_mobtv_pg_channel_thumb_pane_t1

0xd43a,	// (0x000a2518) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc06,	// (0x000a4ce4) single_mobtv_pg_channel_thumb_pane_t

0xbbef,	// (0x000a0ccd) bg_single_mobtv_pg_channel_table_pane_g1

0xbbef,	// (0x000a0ccd) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6b1,	// (0x000a478f) bg_single_mobtv_pg_channel_table_pane_g

0xd448,	// (0x000a2526) single_mobtv_pg_channel_table_pane_t1

0xd456,	// (0x000a2534) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc0b,	// (0x000a4ce9) single_mobtv_pg_channel_table_pane_t

0x82ee,	// (0x0009d3cc) main_mobtv_info_pane_g1_ParamLimits

0x82ee,	// (0x0009d3cc) main_mobtv_info_pane_g1

0x830a,	// (0x0009d3e8) main_mobtv_info_pane_t1_ParamLimits

0x830a,	// (0x0009d3e8) main_mobtv_info_pane_t1

0x8382,	// (0x0009d460) main_mobtv_info_pane_t2_ParamLimits

0x8382,	// (0x0009d460) main_mobtv_info_pane_t2

0x0002,

0xfc15,	// (0x000a4cf3) main_mobtv_info_pane_t_ParamLimits

0xfc15,	// (0x000a4cf3) main_mobtv_info_pane_t

0x8411,	// (0x0009d4ef) wait_bar_pane_cp05

0x8423,	// (0x0009d501) main_mobtv_loading_pane_g1_ParamLimits

0x8423,	// (0x0009d501) main_mobtv_loading_pane_g1

0x8431,	// (0x0009d50f) main_mobtv_loading_pane_g2_ParamLimits

0x8431,	// (0x0009d50f) main_mobtv_loading_pane_g2

0x843d,	// (0x0009d51b) main_mobtv_loading_pane_g3_ParamLimits

0x843d,	// (0x0009d51b) main_mobtv_loading_pane_g3

0x0002,

0xfc1c,	// (0x000a4cfa) main_mobtv_loading_pane_g_ParamLimits

0xfc1c,	// (0x000a4cfa) main_mobtv_loading_pane_g

0xd464,	// (0x000a2542) main_mobtv_loading_pane_t1_ParamLimits

0xd464,	// (0x000a2542) main_mobtv_loading_pane_t1

0xd47c,	// (0x000a255a) main_mobtv_loading_pane_t2_ParamLimits

0xd47c,	// (0x000a255a) main_mobtv_loading_pane_t2

0x0001,

0xfc23,	// (0x000a4d01) main_mobtv_loading_pane_t_ParamLimits

0xfc23,	// (0x000a4d01) main_mobtv_loading_pane_t

0x844b,	// (0x0009d529) wait_bar_pane_cp06_ParamLimits

0x844b,	// (0x0009d529) wait_bar_pane_cp06

0xd4a0,	// (0x000a257e) main_mobtv_programe_curr_pane_t1

0xd4ae,	// (0x000a258c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc28,	// (0x000a4d06) main_mobtv_programe_curr_pane_t

0xd4bc,	// (0x000a259a) main_mobtv_programe_next_pane_t1

0xd4ca,	// (0x000a25a8) main_mobtv_programe_next_pane_t2

0xd4d8,	// (0x000a25b6) main_mobtv_programe_next_pane_t3

0x0002,

0xfc2d,	// (0x000a4d0b) main_mobtv_programe_next_pane_t

0xe0f4,	// (0x000a31d2) bg_popup_mobtv_noti_window_pane

0xd4e6,	// (0x000a25c4) popup_mobtv_noti_window_g1

0xd4ee,	// (0x000a25cc) popup_mobtv_noti_window_t1

0xd4fc,	// (0x000a25da) popup_mobtv_noti_window_t2

0x0001,

0xfc34,	// (0x000a4d12) popup_mobtv_noti_window_t

0xbbef,	// (0x000a0ccd) bg_popup_mobtv_noti_window_pane_g1

0x119d,	// (0x0009627b) sc_clock_pane

0x119d,	// (0x0009627b) main_fs_bigclock_pane

0x7a0e,	// (0x0009caec) blid2_tripm_pane_t4_ParamLimits

0x7a0e,	// (0x0009caec) blid2_tripm_pane_t4

0x8457,	// (0x0009d535) sc_clock_pane_g1_ParamLimits

0x8457,	// (0x0009d535) sc_clock_pane_g1

0x8465,	// (0x0009d543) sc_clock_pane_t1_ParamLimits

0x8465,	// (0x0009d543) sc_clock_pane_t1

0x8478,	// (0x0009d556) sc_clock_pane_t2_ParamLimits

0x8478,	// (0x0009d556) sc_clock_pane_t2

0x848a,	// (0x0009d568) sc_clock_pane_t3_ParamLimits

0x848a,	// (0x0009d568) sc_clock_pane_t3

0x0004,

0xfc39,	// (0x000a4d17) sc_clock_pane_t_ParamLimits

0xfc39,	// (0x000a4d17) sc_clock_pane_t

0x92ab,	// (0x0009e389) main_fs_bigclock_indicator_pane_ParamLimits

0x92ab,	// (0x0009e389) main_fs_bigclock_indicator_pane

0x8525,	// (0x0009d603) main_fs_bigclock_pane_g1_ParamLimits

0x8525,	// (0x0009d603) main_fs_bigclock_pane_g1

0x92b7,	// (0x0009e395) main_fs_bigclock_pane_t1_ParamLimits

0x92b7,	// (0x0009e395) main_fs_bigclock_pane_t1

0x92c9,	// (0x0009e3a7) main_fs_bigclock_pane_t2_ParamLimits

0x92c9,	// (0x0009e3a7) main_fs_bigclock_pane_t2

0x92db,	// (0x0009e3b9) main_fs_bigclock_pane_t3_ParamLimits

0x92db,	// (0x0009e3b9) main_fs_bigclock_pane_t3

0x0002,

0xfe3d,	// (0x000a4f1b) main_fs_bigclock_pane_t_ParamLimits

0xfe3d,	// (0x000a4f1b) main_fs_bigclock_pane_t

0xe044,	// (0x000a3122) main_fs_bigclock_indicator_pane_g1

0xd1d0,	// (0x000a22ae) ncim_query_content_pane_g2_ParamLimits

0xd1d0,	// (0x000a22ae) ncim_query_content_pane_g2

0x0001,

0xfbc6,	// (0x000a4ca4) ncim_query_content_pane_g_ParamLimits

0xfbc6,	// (0x000a4ca4) ncim_query_content_pane_g

0x849e,	// (0x0009d57c) sc_clock_pane_t4_ParamLimits

0x849e,	// (0x0009d57c) sc_clock_pane_t4

0x46b9,	// (0x00099797) main_radioblah_pane

0xc5fd,	// (0x000a16db) cell_call4_button_pane_t1_copy1_ParamLimits

0xc5fd,	// (0x000a16db) cell_call4_button_pane_t1_copy1

0x8125,	// (0x0009d203) main_ncimui_pane_t1_ParamLimits

0x8125,	// (0x0009d203) main_ncimui_pane_t1

0x813f,	// (0x0009d21d) main_ncimui_pane_t2_ParamLimits

0x813f,	// (0x0009d21d) main_ncimui_pane_t2

0x0002,

0xfbbf,	// (0x000a4c9d) main_ncimui_pane_t_ParamLimits

0xfbbf,	// (0x000a4c9d) main_ncimui_pane_t

0xd637,	// (0x000a2715) main_radioblah_anim_pane_ParamLimits

0xd637,	// (0x000a2715) main_radioblah_anim_pane

0xd648,	// (0x000a2726) main_radioblah_info_pane_ParamLimits

0xd648,	// (0x000a2726) main_radioblah_info_pane

0xd65c,	// (0x000a273a) main_radioblah_pane_t1_ParamLimits

0xd65c,	// (0x000a273a) main_radioblah_pane_t1

0xd678,	// (0x000a2756) main_radioblah_pane_t2_ParamLimits

0xd678,	// (0x000a2756) main_radioblah_pane_t2

0x0003,

0xfc5a,	// (0x000a4d38) main_radioblah_pane_t_ParamLimits

0xfc5a,	// (0x000a4d38) main_radioblah_pane_t

0x8577,	// (0x0009d655) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8577,	// (0x0009d655) main_radioblah_rocker_ctrl_pane

0xd6c0,	// (0x000a279e) main_radioblah_info_pane_t1_ParamLimits

0xd6c0,	// (0x000a279e) main_radioblah_info_pane_t1

0x85bc,	// (0x0009d69a) main_radioblah_info_pane_t2_ParamLimits

0x85bc,	// (0x0009d69a) main_radioblah_info_pane_t2

0x0003,

0xfc63,	// (0x000a4d41) main_radioblah_info_pane_t_ParamLimits

0xfc63,	// (0x000a4d41) main_radioblah_info_pane_t

0xbbef,	// (0x000a0ccd) main_radioblah_rocker_ctrl_pane_g1

0x866c,	// (0x0009d74a) main_radioblah_rocker_ctrl_pane_g2

0x8674,	// (0x0009d752) main_radioblah_rocker_ctrl_pane_g3

0x867c,	// (0x0009d75a) main_radioblah_rocker_ctrl_pane_g4

0x8684,	// (0x0009d762) main_radioblah_rocker_ctrl_pane_g5

0x868c,	// (0x0009d76a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc6c,	// (0x000a4d4a) main_radioblah_rocker_ctrl_pane_g

0x80c5,	// (0x0009d1a3) main_cset_text2_pane_t1_copy1_ParamLimits

0x65bd,	// (0x0009b69b) cam4_image_uncrop_qvga_pane

0x6712,	// (0x0009b7f0) vid4_image_uncrop_qcif_pane

0x7b9c,	// (0x0009cc7a) cam6_image_uncrop_qvga_pane_ParamLimits

0x7b9c,	// (0x0009cc7a) cam6_image_uncrop_qvga_pane

0xced7,	// (0x000a1fb5) vid6_image_uncrop_qcif_pane_ParamLimits

0xced7,	// (0x000a1fb5) vid6_image_uncrop_qcif_pane

0xe0f4,	// (0x000a31d2) bg_popup_preview_window_pane_cp03

0xd182,	// (0x000a2260) list_cset_text2_pane

0xd18a,	// (0x000a2268) main_cset6_text2_pane_g1

0xd192,	// (0x000a2270) main_cset6_text2_pane_t1

0x8694,	// (0x0009d772) list_cset_text2_pane_t1_ParamLimits

0x8694,	// (0x0009d772) list_cset_text2_pane_t1

0x46b9,	// (0x00099797) main_radioblah_pane_ParamLimits

0x83fd,	// (0x0009d4db) main_mobtv_info_pane_t3_ParamLimits

0x83fd,	// (0x0009d4db) main_mobtv_info_pane_t3

0x8565,	// (0x0009d643) main_radioblah_pane_g1

0x8590,	// (0x0009d66e) main_radioblah_info_pane_g1

0x8611,	// (0x0009d6ef) main_radioblah_info_pane_t3_ParamLimits

0x8611,	// (0x0009d6ef) main_radioblah_info_pane_t3

0x31fa,	// (0x000982d8) highlight_cell_cale_month_pane_ParamLimits

0x31fa,	// (0x000982d8) highlight_cell_cale_month_pane

0x119d,	// (0x0009627b) main_phob_fisheye_pane

0xbf9f,	// (0x000a107d) scroll_pane_cp0031_ParamLimits

0xbf9f,	// (0x000a107d) scroll_pane_cp0031

0xcfe5,	// (0x000a20c3) wait_bar_pane_cp08_ParamLimits

0x7dad,	// (0x0009ce8b) cset_list_set_pane_copy1_ParamLimits

0xd6fa,	// (0x000a27d8) highlight_cell_cale_month_pane_g1

0x86bb,	// (0x0009d799) highlight_cell_cale_month_pane_t1

0xcc5f,	// (0x000a1d3d) list_gen_pane_cp01

0xc7f5,	// (0x000a18d3) scroll_pane_01

0x86c9,	// (0x0009d7a7) list_single_double_fisheye_pane

0x86d2,	// (0x0009d7b0) list_double_fisheye_pane_g1_ParamLimits

0x86d2,	// (0x0009d7b0) list_double_fisheye_pane_g1

0x86de,	// (0x0009d7bc) list_double_fisheye_pane_g2_ParamLimits

0x86de,	// (0x0009d7bc) list_double_fisheye_pane_g2

0x86f2,	// (0x0009d7d0) list_double_fisheye_pane_g3_ParamLimits

0x86f2,	// (0x0009d7d0) list_double_fisheye_pane_g3

0x0004,

0xfc79,	// (0x000a4d57) list_double_fisheye_pane_g_ParamLimits

0xfc79,	// (0x000a4d57) list_double_fisheye_pane_g

0x871b,	// (0x0009d7f9) list_double_fisheye_pane_t1_ParamLimits

0x871b,	// (0x0009d7f9) list_double_fisheye_pane_t1

0x8736,	// (0x0009d814) list_double_fisheye_pane_t2_ParamLimits

0x8736,	// (0x0009d814) list_double_fisheye_pane_t2

0x0001,

0xfc84,	// (0x000a4d62) list_double_fisheye_pane_t_ParamLimits

0xfc84,	// (0x000a4d62) list_double_fisheye_pane_t

0x119d,	// (0x0009627b) main_call5_pane

0x84c4,	// (0x0009d5a2) sc_swipe_pane_ParamLimits

0x84c4,	// (0x0009d5a2) sc_swipe_pane

0x8764,	// (0x0009d842) call5_image_pane_ParamLimits

0x8764,	// (0x0009d842) call5_image_pane

0x8774,	// (0x0009d852) call5_swipe_1_pane_ParamLimits

0x8774,	// (0x0009d852) call5_swipe_1_pane

0x8780,	// (0x0009d85e) call5_swipe_2_pane_ParamLimits

0x8780,	// (0x0009d85e) call5_swipe_2_pane

0x879a,	// (0x0009d878) popup_call5_audio_first_window_ParamLimits

0x879a,	// (0x0009d878) popup_call5_audio_first_window

0xbe4f,	// (0x000a0f2d) call5_swipe_1_pane_g1_ParamLimits

0xbe4f,	// (0x000a0f2d) call5_swipe_1_pane_g1

0xd702,	// (0x000a27e0) call5_swipe_1_pane_g2_ParamLimits

0xd702,	// (0x000a27e0) call5_swipe_1_pane_g2

0x0001,

0xfc89,	// (0x000a4d67) call5_swipe_1_pane_g_ParamLimits

0xfc89,	// (0x000a4d67) call5_swipe_1_pane_g

0xd70e,	// (0x000a27ec) call5_swipe_1_pane_t1_ParamLimits

0xd70e,	// (0x000a27ec) call5_swipe_1_pane_t1

0xbe4f,	// (0x000a0f2d) call5_swipe_2_pane_g1_ParamLimits

0xbe4f,	// (0x000a0f2d) call5_swipe_2_pane_g1

0xd723,	// (0x000a2801) call5_swipe_2_pane_g2_ParamLimits

0xd723,	// (0x000a2801) call5_swipe_2_pane_g2

0x0001,

0xfc8e,	// (0x000a4d6c) call5_swipe_2_pane_g_ParamLimits

0xfc8e,	// (0x000a4d6c) call5_swipe_2_pane_g

0xd72f,	// (0x000a280d) call5_swipe_2_pane_t1_ParamLimits

0xd72f,	// (0x000a280d) call5_swipe_2_pane_t1

0xd744,	// (0x000a2822) sc_swipe_pane_g1_ParamLimits

0xd744,	// (0x000a2822) sc_swipe_pane_g1

0xd751,	// (0x000a282f) sc_swipe_pane_g2_ParamLimits

0xd751,	// (0x000a282f) sc_swipe_pane_g2

0x0001,

0xfc93,	// (0x000a4d71) sc_swipe_pane_g_ParamLimits

0xfc93,	// (0x000a4d71) sc_swipe_pane_g

0xd75d,	// (0x000a283b) sc_swipe_pane_t1_ParamLimits

0xd75d,	// (0x000a283b) sc_swipe_pane_t1

0x119d,	// (0x0009627b) main_cmail_launcher_pane

0x87a8,	// (0x0009d886) aid_size_cell_cmail_l_ParamLimits

0x87a8,	// (0x0009d886) aid_size_cell_cmail_l

0x87b8,	// (0x0009d896) grid_cmail_l_pane_ParamLimits

0x87b8,	// (0x0009d896) grid_cmail_l_pane

0x87c8,	// (0x0009d8a6) cell_cmail_l_pane_ParamLimits

0x87c8,	// (0x0009d8a6) cell_cmail_l_pane

0x87dc,	// (0x0009d8ba) cell_cmail_l_pane_g1_ParamLimits

0x87dc,	// (0x0009d8ba) cell_cmail_l_pane_g1

0x87ed,	// (0x0009d8cb) cell_cmail_l_pane_t1_ParamLimits

0x87ed,	// (0x0009d8cb) cell_cmail_l_pane_t1

0xd772,	// (0x000a2850) cell_cmail_l_pane_t2_ParamLimits

0xd772,	// (0x000a2850) cell_cmail_l_pane_t2

0x0001,

0xfc98,	// (0x000a4d76) cell_cmail_l_pane_t_ParamLimits

0xfc98,	// (0x000a4d76) cell_cmail_l_pane_t

0xecc6,	// (0x000a3da4) grid_highlight_pane_cp018_ParamLimits

0xecc6,	// (0x000a3da4) grid_highlight_pane_cp018

0x0ff3,	// (0x000960d1) main2_pane_ParamLimits

0x0ff3,	// (0x000960d1) main2_pane

0xed8c,	// (0x000a3e6a) popup_sp_fs_action_menu_bg_pane_g1

0xed94,	// (0x000a3e72) popup_sp_fs_action_menu_bg_pane_g2

0xed9c,	// (0x000a3e7a) popup_sp_fs_action_menu_bg_pane_g3

0xeda4,	// (0x000a3e82) popup_sp_fs_action_menu_bg_pane_g4

0xedac,	// (0x000a3e8a) popup_sp_fs_action_menu_bg_pane_g5

0xedb4,	// (0x000a3e92) popup_sp_fs_action_menu_bg_pane_g6

0xedbc,	// (0x000a3e9a) popup_sp_fs_action_menu_bg_pane_g7

0xedc4,	// (0x000a3ea2) popup_sp_fs_action_menu_bg_pane_g8

0xedcc,	// (0x000a3eaa) popup_sp_fs_action_menu_bg_pane_g9

0xedd4,	// (0x000a3eb2) popup_sp_fs_action_menu_bg_pane_g10

0xedd4,	// (0x000a3eb2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0x001b,	// (0x000950f9) popup_sp_fs_action_menu_bg_pane_g

0x1f72,	// (0x00097050) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x2_t3_g3_g1

0x1f7e,	// (0x0009705c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1f7e,	// (0x0009705c) list_medium_line_x2_t3_g3_g2

0x1f8a,	// (0x00097068) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1f8a,	// (0x00097068) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21e,	// (0x000a42fc) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21e,	// (0x000a42fc) list_medium_line_x2_t3_g3_g

0x1f96,	// (0x00097074) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1f96,	// (0x00097074) list_medium_line_x2_t3_g3_t1

0x1fab,	// (0x00097089) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1fab,	// (0x00097089) list_medium_line_x2_t3_g3_t2

0x1fbd,	// (0x0009709b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1fbd,	// (0x0009709b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf225,	// (0x000a4303) list_medium_line_x2_t3_g3_t_ParamLimits

0xf225,	// (0x000a4303) list_medium_line_x2_t3_g3_t

0x1f72,	// (0x00097050) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x2_t3_g2_g1

0x1f8a,	// (0x00097068) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1f8a,	// (0x00097068) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22c,	// (0x000a430a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22c,	// (0x000a430a) list_medium_line_x2_t3_g2_g

0x1fd2,	// (0x000970b0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1fd2,	// (0x000970b0) list_medium_line_x2_t3_g2_t1

0x1fe8,	// (0x000970c6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1fe8,	// (0x000970c6) list_medium_line_x2_t3_g2_t2

0x1ffa,	// (0x000970d8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1ffa,	// (0x000970d8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf231,	// (0x000a430f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf231,	// (0x000a430f) list_medium_line_x2_t3_g2_t

0x1f72,	// (0x00097050) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x2_t4_g4_g1

0x2018,	// (0x000970f6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2018,	// (0x000970f6) list_medium_line_x2_t4_g4_g2

0x1f7e,	// (0x0009705c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1f7e,	// (0x0009705c) list_medium_line_x2_t4_g4_g3

0x2024,	// (0x00097102) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2024,	// (0x00097102) list_medium_line_x2_t4_g4_g4

0x0003,

0xf238,	// (0x000a4316) list_medium_line_x2_t4_g4_g_ParamLimits

0xf238,	// (0x000a4316) list_medium_line_x2_t4_g4_g

0x2030,	// (0x0009710e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2030,	// (0x0009710e) list_medium_line_x2_t4_g4_t1

0x204a,	// (0x00097128) list_medium_line_x2_t4_g4_t2_ParamLimits

0x204a,	// (0x00097128) list_medium_line_x2_t4_g4_t2

0x205f,	// (0x0009713d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x205f,	// (0x0009713d) list_medium_line_x2_t4_g4_t3

0x2074,	// (0x00097152) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2074,	// (0x00097152) list_medium_line_x2_t4_g4_t4

0x0003,

0xf241,	// (0x000a431f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf241,	// (0x000a431f) list_medium_line_x2_t4_g4_t

0x1f72,	// (0x00097050) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x2_t2_g4_g1

0x2018,	// (0x000970f6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2018,	// (0x000970f6) list_medium_line_x2_t2_g4_g2

0x1f7e,	// (0x0009705c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1f7e,	// (0x0009705c) list_medium_line_x2_t2_g4_g3

0x1f8a,	// (0x00097068) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1f8a,	// (0x00097068) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a3,	// (0x000a4381) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a3,	// (0x000a4381) list_medium_line_x2_t2_g4_g

0x3220,	// (0x000982fe) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3220,	// (0x000982fe) list_medium_line_x2_t2_g4_t1

0x1fbd,	// (0x0009709b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1fbd,	// (0x0009709b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ac,	// (0x000a438a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ac,	// (0x000a438a) list_medium_line_x2_t2_g4_t

0x1f72,	// (0x00097050) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x2_t2_g3_g1

0x1f7e,	// (0x0009705c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1f7e,	// (0x0009705c) list_medium_line_x2_t2_g3_g2

0x1f8a,	// (0x00097068) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1f8a,	// (0x00097068) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21e,	// (0x000a42fc) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21e,	// (0x000a42fc) list_medium_line_x2_t2_g3_g

0x3235,	// (0x00098313) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3235,	// (0x00098313) list_medium_line_x2_t2_g3_t1

0x1fbd,	// (0x0009709b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1fbd,	// (0x0009709b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b1,	// (0x000a438f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b1,	// (0x000a438f) list_medium_line_x2_t2_g3_t

0x348e,	// (0x0009856c) main_sp_fs_list_pane_ParamLimits

0x348e,	// (0x0009856c) main_sp_fs_list_pane

0x349a,	// (0x00098578) sp_fs_scroll_pane_ParamLimits

0x349a,	// (0x00098578) sp_fs_scroll_pane

0x34a6,	// (0x00098584) list_medium_line_x2_t3_t1

0x34b6,	// (0x00098594) list_medium_line_x2_t3_t2

0x34c4,	// (0x000985a2) list_medium_line_x2_t3_t3

0x0002,

0xf2f7,	// (0x000a43d5) list_medium_line_x2_t3_t

0x34d2,	// (0x000985b0) list_medium_line_x3_t4_t1

0x34e2,	// (0x000985c0) list_medium_line_x3_t4_t2

0x34f0,	// (0x000985ce) list_medium_line_x3_t4_t3

0x34c4,	// (0x000985a2) list_medium_line_x3_t4_t4

0x0003,

0xf2fe,	// (0x000a43dc) list_medium_line_x3_t4_t

0x34fe,	// (0x000985dc) list_medium_line_x4_t5_t1

0x350e,	// (0x000985ec) list_medium_line_x4_t5_t2

0x34f0,	// (0x000985ce) list_medium_line_x4_t5_t3

0x351c,	// (0x000985fa) list_medium_line_x4_t5_t4

0x34c4,	// (0x000985a2) list_medium_line_x4_t5_t5

0x0004,

0xf307,	// (0x000a43e5) list_medium_line_x4_t5_t

0x1f72,	// (0x00097050) list_medium_line_t4_g4_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_t4_g4_g1

0x352a,	// (0x00098608) list_medium_line_t4_g4_g2_ParamLimits

0x352a,	// (0x00098608) list_medium_line_t4_g4_g2

0x3536,	// (0x00098614) list_medium_line_t4_g4_g3_ParamLimits

0x3536,	// (0x00098614) list_medium_line_t4_g4_g3

0x1f8a,	// (0x00097068) list_medium_line_t4_g4_g4_ParamLimits

0x1f8a,	// (0x00097068) list_medium_line_t4_g4_g4

0x0003,

0xf312,	// (0x000a43f0) list_medium_line_t4_g4_g_ParamLimits

0xf312,	// (0x000a43f0) list_medium_line_t4_g4_g

0x3542,	// (0x00098620) list_medium_line_t4_g4_t1_ParamLimits

0x3542,	// (0x00098620) list_medium_line_t4_g4_t1

0x3557,	// (0x00098635) list_medium_line_t4_g4_t2_ParamLimits

0x3557,	// (0x00098635) list_medium_line_t4_g4_t2

0x356d,	// (0x0009864b) list_medium_line_t4_g4_t3_ParamLimits

0x356d,	// (0x0009864b) list_medium_line_t4_g4_t3

0x1fbd,	// (0x0009709b) list_medium_line_t4_g4_t4_ParamLimits

0x1fbd,	// (0x0009709b) list_medium_line_t4_g4_t4

0x0003,

0xf31b,	// (0x000a43f9) list_medium_line_t4_g4_t_ParamLimits

0xf31b,	// (0x000a43f9) list_medium_line_t4_g4_t

0x366e,	// (0x0009874c) chi_dic_find_pane_g1

0x46d5,	// (0x000997b3) main_tport_pane

0x70e3,	// (0x0009c1c1) list_medium_line_plain_t1

0x71c8,	// (0x0009c2a6) list_medium_line_t2_g2_g1_ParamLimits

0x71c8,	// (0x0009c2a6) list_medium_line_t2_g2_g1

0x71d4,	// (0x0009c2b2) list_medium_line_t2_g2_g2_ParamLimits

0x71d4,	// (0x0009c2b2) list_medium_line_t2_g2_g2

0x0001,

0xf9d0,	// (0x000a4aae) list_medium_line_t2_g2_g_ParamLimits

0xf9d0,	// (0x000a4aae) list_medium_line_t2_g2_g

0x71e0,	// (0x0009c2be) list_medium_line_t2_g2_t1_ParamLimits

0x71e0,	// (0x0009c2be) list_medium_line_t2_g2_t1

0x71fa,	// (0x0009c2d8) list_medium_line_t2_g2_t2_ParamLimits

0x71fa,	// (0x0009c2d8) list_medium_line_t2_g2_t2

0x0001,

0xf9d5,	// (0x000a4ab3) list_medium_line_t2_g2_t_ParamLimits

0xf9d5,	// (0x000a4ab3) list_medium_line_t2_g2_t

0xcc68,	// (0x000a1d46) aid_sp_fs_list_icon_a_sm

0xe87a,	// (0x000a3958) aid_sp_fs_list_icon_d

0xf0ca,	// (0x000a41a8) aid_sp_fs_text_primary

0xcc70,	// (0x000a1d4e) aid_sp_fs_text_secondary

0x7850,	// (0x0009c92e) list_medium_line

0x7850,	// (0x0009c92e) list_medium_line_g2

0x7850,	// (0x0009c92e) list_medium_line_g3

0x7850,	// (0x0009c92e) list_medium_line_plain

0x7850,	// (0x0009c92e) list_medium_line_plain_t2

0x7850,	// (0x0009c92e) list_medium_line_plain_t3

0x7850,	// (0x0009c92e) list_medium_line_right_icon

0x7850,	// (0x0009c92e) list_medium_line_right_iconx2

0x7850,	// (0x0009c92e) list_medium_line_t2

0x7850,	// (0x0009c92e) list_medium_line_t2_g2

0x7850,	// (0x0009c92e) list_medium_line_t2_g3

0x7850,	// (0x0009c92e) list_medium_line_t2_right_icon

0x7850,	// (0x0009c92e) list_medium_line_t2_right_iconx2

0x7850,	// (0x0009c92e) list_medium_line_t3

0x7850,	// (0x0009c92e) list_medium_line_t3_g2

0x7850,	// (0x0009c92e) list_medium_line_t3_g3

0x7850,	// (0x0009c92e) list_medium_line_t3_right_iconx2

0x7859,	// (0x0009c937) list_medium_line_t4_g4

0x7862,	// (0x0009c940) list_medium_line_x2

0x7862,	// (0x0009c940) list_medium_line_x2_t2_g2

0x7862,	// (0x0009c940) list_medium_line_x2_t2_g3

0x7862,	// (0x0009c940) list_medium_line_x2_t2_g4

0x7862,	// (0x0009c940) list_medium_line_x2_t3

0x7862,	// (0x0009c940) list_medium_line_x2_t3_g2

0x7862,	// (0x0009c940) list_medium_line_x2_t3_g3

0x7862,	// (0x0009c940) list_medium_line_x2_t3_g4

0x7862,	// (0x0009c940) list_medium_line_x2_t4_g2

0x7862,	// (0x0009c940) list_medium_line_x2_t4_g4

0x786b,	// (0x0009c949) list_medium_line_x3

0x786b,	// (0x0009c949) list_medium_line_x3_t4

0x786b,	// (0x0009c949) list_medium_line_x3_t4_g4

0x7859,	// (0x0009c937) list_medium_line_x4_t4

0x7859,	// (0x0009c937) list_medium_line_x4_t4_g7

0x7859,	// (0x0009c937) list_medium_line_x4_t5

0x7874,	// (0x0009c952) list_single_fs_dyc_pane_ParamLimits

0x7874,	// (0x0009c952) list_single_fs_dyc_pane

0x1f72,	// (0x00097050) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x4_t4_g7_g1

0x7ff4,	// (0x0009d0d2) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ff4,	// (0x0009d0d2) list_medium_line_x4_t4_g7_g2

0x8000,	// (0x0009d0de) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8000,	// (0x0009d0de) list_medium_line_x4_t4_g7_g3

0x800f,	// (0x0009d0ed) list_medium_line_x4_t4_g7_g4_ParamLimits

0x800f,	// (0x0009d0ed) list_medium_line_x4_t4_g7_g4

0x801b,	// (0x0009d0f9) list_medium_line_x4_t4_g7_g5_ParamLimits

0x801b,	// (0x0009d0f9) list_medium_line_x4_t4_g7_g5

0x802a,	// (0x0009d108) list_medium_line_x4_t4_g7_g6_ParamLimits

0x802a,	// (0x0009d108) list_medium_line_x4_t4_g7_g6

0x8039,	// (0x0009d117) list_medium_line_x4_t4_g7_g7_ParamLimits

0x8039,	// (0x0009d117) list_medium_line_x4_t4_g7_g7

0x0006,

0xfba0,	// (0x000a4c7e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfba0,	// (0x000a4c7e) list_medium_line_x4_t4_g7_g

0x8045,	// (0x0009d123) list_medium_line_x4_t4_g7_t1_ParamLimits

0x8045,	// (0x0009d123) list_medium_line_x4_t4_g7_t1

0x805a,	// (0x0009d138) list_medium_line_x4_t4_g7_t2_ParamLimits

0x805a,	// (0x0009d138) list_medium_line_x4_t4_g7_t2

0x806f,	// (0x0009d14d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x806f,	// (0x0009d14d) list_medium_line_x4_t4_g7_t3

0x8084,	// (0x0009d162) list_medium_line_x4_t4_g7_t4_ParamLimits

0x8084,	// (0x0009d162) list_medium_line_x4_t4_g7_t4

0x8096,	// (0x0009d174) list_medium_line_x4_t4_g7_t5_ParamLimits

0x8096,	// (0x0009d174) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbaf,	// (0x000a4c8d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbaf,	// (0x000a4c8d) list_medium_line_x4_t4_g7_t

0x80a8,	// (0x0009d186) list_single_dyc_row_pane_ParamLimits

0x80a8,	// (0x0009d186) list_single_dyc_row_pane

0x8758,	// (0x0009d836) call5_gesture_pane_ParamLimits

0x8758,	// (0x0009d836) call5_gesture_pane

0x878c,	// (0x0009d86a) call5_windows_pane_ParamLimits

0x878c,	// (0x0009d86a) call5_windows_pane

0x8803,	// (0x0009d8e1) call5_swipe_1_pane_cp_ParamLimits

0x8803,	// (0x0009d8e1) call5_swipe_1_pane_cp

0x880f,	// (0x0009d8ed) call5_swipe_2_pane_cp_ParamLimits

0x880f,	// (0x0009d8ed) call5_swipe_2_pane_cp

0xa3b5,	// (0x0009f493) call5_image_pane_cp

0x881b,	// (0x0009d8f9) popup_call5_audio_first_window_cp_ParamLimits

0x881b,	// (0x0009d8f9) popup_call5_audio_first_window_cp

0xd744,	// (0x000a2822) call5_swipe_1_pane_g1_cp_ParamLimits

0xd744,	// (0x000a2822) call5_swipe_1_pane_g1_cp

0xd784,	// (0x000a2862) call5_swipe_1_pane_g2_cp

0xd75d,	// (0x000a283b) call5_swipe_1_pane_t1_cp_ParamLimits

0xd75d,	// (0x000a283b) call5_swipe_1_pane_t1_cp

0xd744,	// (0x000a2822) call5_swipe_2_pane_g1_cp_ParamLimits

0xd744,	// (0x000a2822) call5_swipe_2_pane_g1_cp

0xd78c,	// (0x000a286a) call5_swipe_2_pane_g2_cp

0xd794,	// (0x000a2872) call5_swipe_2_pane_t1_cp_ParamLimits

0xd794,	// (0x000a2872) call5_swipe_2_pane_t1_cp

0xecc6,	// (0x000a3da4) main_sp_fs_email_pane

0xd7a9,	// (0x000a2887) main_sp_fs_listscroll_pane_te

0xe882,	// (0x000a3960) popup_sp_fs_action_menu_pane_ParamLimits

0xe882,	// (0x000a3960) popup_sp_fs_action_menu_pane

0xbbef,	// (0x000a0ccd) bg_sp_fs_ctrlbar_pane_g1

0xd7b2,	// (0x000a2890) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd7bb,	// (0x000a2899) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd7c4,	// (0x000a28a2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbbef,	// (0x000a0ccd) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc9d,	// (0x000a4d7b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb9d2,	// (0x000a0ab0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb9d2,	// (0x000a0ab0) bg_sp_fs_ctrlbar_ddmenu_pane

0xd7cd,	// (0x000a28ab) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd7cd,	// (0x000a28ab) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd7d9,	// (0x000a28b7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd7d9,	// (0x000a28b7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfca6,	// (0x000a4d84) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfca6,	// (0x000a4d84) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd7e5,	// (0x000a28c3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd7e5,	// (0x000a28c3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8829,	// (0x0009d907) list_medium_line_t2_right_icon_g1

0x8831,	// (0x0009d90f) list_medium_line_t2_right_icon_t1

0x8841,	// (0x0009d91f) list_medium_line_t2_right_icon_t2

0x0001,

0xfcab,	// (0x000a4d89) list_medium_line_t2_right_icon_t

0xb7b7,	// (0x000a0895) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb7b7,	// (0x000a0895) bg_sp_fs_ctrlbar_pane

0x88a6,	// (0x0009d984) main_sp_fs_ctrlbar_button_pane_cp01

0x88ae,	// (0x0009d98c) main_sp_fs_ctrlbar_ddmenu_pane

0xd837,	// (0x000a2915) main_sp_fs_ctrlbar_pane_g1

0xd843,	// (0x000a2921) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcb0,	// (0x000a4d8e) main_sp_fs_ctrlbar_pane_g

0xd84f,	// (0x000a292d) main_sp_fs_ctrlbar_pane_t1

0x88b8,	// (0x0009d996) main_sp_fs_ctrlbar_pane

0x88ce,	// (0x0009d9ac) main_sp_fs_listscroll_pane_te_cp01

0x88df,	// (0x0009d9bd) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x88df,	// (0x0009d9bd) popup_sp_fs_action_menu_pane_cp01

0xecc6,	// (0x000a3da4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xecc6,	// (0x000a3da4) bg_sp_fs_highlight_list_pane_cp01

0xd87f,	// (0x000a295d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd87f,	// (0x000a295d) sp_fs_action_menu_list_gene_pane_g1

0xd88e,	// (0x000a296c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd88e,	// (0x000a296c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcba,	// (0x000a4d98) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcba,	// (0x000a4d98) sp_fs_action_menu_list_gene_pane_g

0xd89b,	// (0x000a2979) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd89b,	// (0x000a2979) sp_fs_action_menu_list_gene_pane_t1

0xd8b3,	// (0x000a2991) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd8b3,	// (0x000a2991) sp_fs_action_menu_list_gene_pane

0xd8d2,	// (0x000a29b0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd8d2,	// (0x000a29b0) popup_sp_fs_action_menu_bg_pane

0xd8e0,	// (0x000a29be) sp_fs_action_menu_list_pane_ParamLimits

0xd8e0,	// (0x000a29be) sp_fs_action_menu_list_pane

0xe8c4,	// (0x000a39a2) sp_fs_scroll_pane_cp01_ParamLimits

0xe8c4,	// (0x000a39a2) sp_fs_scroll_pane_cp01

0x8909,	// (0x0009d9e7) list_medium_line_plain_t2_t1

0x8919,	// (0x0009d9f7) list_medium_line_plain_t2_t2

0x0001,

0xfcbf,	// (0x000a4d9d) list_medium_line_plain_t2_t

0x8927,	// (0x0009da05) list_medium_line_plain_t3_t1

0x8937,	// (0x0009da15) list_medium_line_plain_t3_t2

0x8945,	// (0x0009da23) list_medium_line_plain_t3_t3

0x0002,

0xfcc4,	// (0x000a4da2) list_medium_line_plain_t3_t

0x1f72,	// (0x00097050) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x2_t2_g2_g1

0x1f8a,	// (0x00097068) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1f8a,	// (0x00097068) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22c,	// (0x000a430a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22c,	// (0x000a430a) list_medium_line_x2_t2_g2_g

0x3542,	// (0x00098620) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3542,	// (0x00098620) list_medium_line_x2_t2_g2_t1

0x1fbd,	// (0x0009709b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1fbd,	// (0x0009709b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfccb,	// (0x000a4da9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfccb,	// (0x000a4da9) list_medium_line_x2_t2_g2_t

0x1f72,	// (0x00097050) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x2_t4_g2_g1

0x8953,	// (0x0009da31) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8953,	// (0x0009da31) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcd0,	// (0x000a4dae) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcd0,	// (0x000a4dae) list_medium_line_x2_t4_g2_g

0x8965,	// (0x0009da43) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8965,	// (0x0009da43) list_medium_line_x2_t4_g2_t1

0x897c,	// (0x0009da5a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x897c,	// (0x0009da5a) list_medium_line_x2_t4_g2_t2

0x8991,	// (0x0009da6f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8991,	// (0x0009da6f) list_medium_line_x2_t4_g2_t3

0x1fbd,	// (0x0009709b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1fbd,	// (0x0009709b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcd5,	// (0x000a4db3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcd5,	// (0x000a4db3) list_medium_line_x2_t4_g2_t

0x89a3,	// (0x0009da81) list_medium_line_t3_right_iconx2_g1

0x8829,	// (0x0009d907) list_medium_line_t3_right_iconx2_g2

0x89ab,	// (0x0009da89) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcde,	// (0x000a4dbc) list_medium_line_t3_right_iconx2_g

0x89b3,	// (0x0009da91) list_medium_line_t3_right_iconx2_t1

0x89c3,	// (0x0009daa1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfce5,	// (0x000a4dc3) list_medium_line_t3_right_iconx2_t

0x1f72,	// (0x00097050) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x3_t4_g4_g1

0x1f7e,	// (0x0009705c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1f7e,	// (0x0009705c) list_medium_line_x3_t4_g4_g2

0x352a,	// (0x00098608) list_medium_line_x3_t4_g4_g3_ParamLimits

0x352a,	// (0x00098608) list_medium_line_x3_t4_g4_g3

0x89d1,	// (0x0009daaf) list_medium_line_x3_t4_g4_g4_ParamLimits

0x89d1,	// (0x0009daaf) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcea,	// (0x000a4dc8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcea,	// (0x000a4dc8) list_medium_line_x3_t4_g4_g

0x89dd,	// (0x0009dabb) list_medium_line_x3_t4_g4_t1_ParamLimits

0x89dd,	// (0x0009dabb) list_medium_line_x3_t4_g4_t1

0x89f4,	// (0x0009dad2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x89f4,	// (0x0009dad2) list_medium_line_x3_t4_g4_t2

0x8a09,	// (0x0009dae7) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8a09,	// (0x0009dae7) list_medium_line_x3_t4_g4_t3

0x8a1e,	// (0x0009dafc) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8a1e,	// (0x0009dafc) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcf3,	// (0x000a4dd1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcf3,	// (0x000a4dd1) list_medium_line_x3_t4_g4_t

0x8a3b,	// (0x0009db19) list_single_dyc_row_text_pane_t1_ParamLimits

0x8a3b,	// (0x0009db19) list_single_dyc_row_text_pane_t1

0x8a72,	// (0x0009db50) list_single_dyc_row_text_pane_t2_ParamLimits

0x8a72,	// (0x0009db50) list_single_dyc_row_text_pane_t2

0xd900,	// (0x000a29de) list_single_dyc_row_text_pane_t3_ParamLimits

0xd900,	// (0x000a29de) list_single_dyc_row_text_pane_t3

0x0002,

0xfcfc,	// (0x000a4dda) list_single_dyc_row_text_pane_t_ParamLimits

0xfcfc,	// (0x000a4dda) list_single_dyc_row_text_pane_t

0xd912,	// (0x000a29f0) list_single_dyc_row_pane_g1_ParamLimits

0xd912,	// (0x000a29f0) list_single_dyc_row_pane_g1

0xd91e,	// (0x000a29fc) list_single_dyc_row_pane_g2_ParamLimits

0xd91e,	// (0x000a29fc) list_single_dyc_row_pane_g2

0xd92a,	// (0x000a2a08) list_single_dyc_row_pane_g3_ParamLimits

0xd92a,	// (0x000a2a08) list_single_dyc_row_pane_g3

0xd936,	// (0x000a2a14) list_single_dyc_row_pane_g4_ParamLimits

0xd936,	// (0x000a2a14) list_single_dyc_row_pane_g4

0x0003,

0xfd03,	// (0x000a4de1) list_single_dyc_row_pane_g_ParamLimits

0xfd03,	// (0x000a4de1) list_single_dyc_row_pane_g

0xd942,	// (0x000a2a20) list_single_dyc_row_text_pane_ParamLimits

0xd942,	// (0x000a2a20) list_single_dyc_row_text_pane

0xe0f4,	// (0x000a31d2) bg_sp_fs_scroll_pane

0xd961,	// (0x000a2a3f) thumb_sp_fs_scroll_pane

0x71c8,	// (0x0009c2a6) list_medium_line_g1_ParamLimits

0x71c8,	// (0x0009c2a6) list_medium_line_g1

0x8acc,	// (0x0009dbaa) list_medium_line_t1_ParamLimits

0x8acc,	// (0x0009dbaa) list_medium_line_t1

0x1f72,	// (0x00097050) list_medium_line_x2_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x2_g1

0x1f7e,	// (0x0009705c) list_medium_line_x2_g2_ParamLimits

0x1f7e,	// (0x0009705c) list_medium_line_x2_g2

0x0001,

0xfd0c,	// (0x000a4dea) list_medium_line_x2_g_ParamLimits

0xfd0c,	// (0x000a4dea) list_medium_line_x2_g

0xd96a,	// (0x000a2a48) list_medium_line_x2_t1_ParamLimits

0xd96a,	// (0x000a2a48) list_medium_line_x2_t1

0x1f72,	// (0x00097050) list_medium_line_x3_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x3_g1

0x1f7e,	// (0x0009705c) list_medium_line_x3_g2_ParamLimits

0x1f7e,	// (0x0009705c) list_medium_line_x3_g2

0x0001,

0xfd0c,	// (0x000a4dea) list_medium_line_x3_g_ParamLimits

0xfd0c,	// (0x000a4dea) list_medium_line_x3_g

0xd96a,	// (0x000a2a48) list_medium_line_x3_t1_ParamLimits

0xd96a,	// (0x000a2a48) list_medium_line_x3_t1

0xd980,	// (0x000a2a5e) thumb_sp_fs_scroll_pane_g1

0xd989,	// (0x000a2a67) thumb_sp_fs_scroll_pane_g2

0xd992,	// (0x000a2a70) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd11,	// (0x000a4def) thumb_sp_fs_scroll_pane_g

0xd980,	// (0x000a2a5e) bg_sp_fs_scroll_pane_g1

0xd989,	// (0x000a2a67) bg_sp_fs_scroll_pane_g2

0xd992,	// (0x000a2a70) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd11,	// (0x000a4def) bg_sp_fs_scroll_pane_g

0x1f72,	// (0x00097050) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1f72,	// (0x00097050) list_medium_line_x2_t3_g4_g1

0x2018,	// (0x000970f6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2018,	// (0x000970f6) list_medium_line_x2_t3_g4_g2

0x1f7e,	// (0x0009705c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1f7e,	// (0x0009705c) list_medium_line_x2_t3_g4_g3

0x1f8a,	// (0x00097068) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1f8a,	// (0x00097068) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a3,	// (0x000a4381) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a3,	// (0x000a4381) list_medium_line_x2_t3_g4_g

0x8ae1,	// (0x0009dbbf) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8ae1,	// (0x0009dbbf) list_medium_line_x2_t3_g4_t1

0x8af7,	// (0x0009dbd5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8af7,	// (0x0009dbd5) list_medium_line_x2_t3_g4_t2

0x1fbd,	// (0x0009709b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1fbd,	// (0x0009709b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd18,	// (0x000a4df6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd18,	// (0x000a4df6) list_medium_line_x2_t3_g4_t

0x71c8,	// (0x0009c2a6) list_medium_line_g2_g1_ParamLimits

0x71c8,	// (0x0009c2a6) list_medium_line_g2_g1

0x71d4,	// (0x0009c2b2) list_medium_line_g2_g2_ParamLimits

0x71d4,	// (0x0009c2b2) list_medium_line_g2_g2

0x0001,

0xf9d0,	// (0x000a4aae) list_medium_line_g2_g_ParamLimits

0xf9d0,	// (0x000a4aae) list_medium_line_g2_g

0x8b10,	// (0x0009dbee) list_medium_line_g2_t1_ParamLimits

0x8b10,	// (0x0009dbee) list_medium_line_g2_t1

0x71c8,	// (0x0009c2a6) list_medium_line_t3_g2_g1_ParamLimits

0x71c8,	// (0x0009c2a6) list_medium_line_t3_g2_g1

0x71d4,	// (0x0009c2b2) list_medium_line_t3_g2_g2_ParamLimits

0x71d4,	// (0x0009c2b2) list_medium_line_t3_g2_g2

0x0001,

0xf9d0,	// (0x000a4aae) list_medium_line_t3_g2_g_ParamLimits

0xf9d0,	// (0x000a4aae) list_medium_line_t3_g2_g

0x8b25,	// (0x0009dc03) list_medium_line_t3_g2_t1_ParamLimits

0x8b25,	// (0x0009dc03) list_medium_line_t3_g2_t1

0x8b3c,	// (0x0009dc1a) list_medium_line_t3_g2_t2_ParamLimits

0x8b3c,	// (0x0009dc1a) list_medium_line_t3_g2_t2

0x8b51,	// (0x0009dc2f) list_medium_line_t3_g2_t3_ParamLimits

0x8b51,	// (0x0009dc2f) list_medium_line_t3_g2_t3

0x0002,

0xfd1f,	// (0x000a4dfd) list_medium_line_t3_g2_t_ParamLimits

0xfd1f,	// (0x000a4dfd) list_medium_line_t3_g2_t

0x8829,	// (0x0009d907) list_medium_line_right_icon_g1

0x8b66,	// (0x0009dc44) list_medium_line_right_icon_t1

0x71c8,	// (0x0009c2a6) list_medium_line_t2_g1_ParamLimits

0x71c8,	// (0x0009c2a6) list_medium_line_t2_g1

0x8b74,	// (0x0009dc52) list_medium_line_t2_t1_ParamLimits

0x8b74,	// (0x0009dc52) list_medium_line_t2_t1

0x8b8e,	// (0x0009dc6c) list_medium_line_t2_t2_ParamLimits

0x8b8e,	// (0x0009dc6c) list_medium_line_t2_t2

0x0001,

0xfd26,	// (0x000a4e04) list_medium_line_t2_t_ParamLimits

0xfd26,	// (0x000a4e04) list_medium_line_t2_t

0x71c8,	// (0x0009c2a6) list_medium_line_t3_g1_ParamLimits

0x71c8,	// (0x0009c2a6) list_medium_line_t3_g1

0x8ba3,	// (0x0009dc81) list_medium_line_t3_t1_ParamLimits

0x8ba3,	// (0x0009dc81) list_medium_line_t3_t1

0x8bba,	// (0x0009dc98) list_medium_line_t3_t2_ParamLimits

0x8bba,	// (0x0009dc98) list_medium_line_t3_t2

0x8bcf,	// (0x0009dcad) list_medium_line_t3_t3_ParamLimits

0x8bcf,	// (0x0009dcad) list_medium_line_t3_t3

0x0002,

0xfd2b,	// (0x000a4e09) list_medium_line_t3_t_ParamLimits

0xfd2b,	// (0x000a4e09) list_medium_line_t3_t

0x71c8,	// (0x0009c2a6) list_medium_line_g3_g1_ParamLimits

0x71c8,	// (0x0009c2a6) list_medium_line_g3_g1

0x8be1,	// (0x0009dcbf) list_medium_line_g3_g2_ParamLimits

0x8be1,	// (0x0009dcbf) list_medium_line_g3_g2

0x71d4,	// (0x0009c2b2) list_medium_line_g3_g3_ParamLimits

0x71d4,	// (0x0009c2b2) list_medium_line_g3_g3

0x0002,

0xfd32,	// (0x000a4e10) list_medium_line_g3_g_ParamLimits

0xfd32,	// (0x000a4e10) list_medium_line_g3_g

0x8bed,	// (0x0009dccb) list_medium_line_g3_t1_ParamLimits

0x8bed,	// (0x0009dccb) list_medium_line_g3_t1

0x71c8,	// (0x0009c2a6) list_medium_line_t2_g3_g1_ParamLimits

0x71c8,	// (0x0009c2a6) list_medium_line_t2_g3_g1

0x8be1,	// (0x0009dcbf) list_medium_line_t2_g3_g2_ParamLimits

0x8be1,	// (0x0009dcbf) list_medium_line_t2_g3_g2

0x71d4,	// (0x0009c2b2) list_medium_line_t2_g3_g3_ParamLimits

0x71d4,	// (0x0009c2b2) list_medium_line_t2_g3_g3

0x0002,

0xfd32,	// (0x000a4e10) list_medium_line_t2_g3_g_ParamLimits

0xfd32,	// (0x000a4e10) list_medium_line_t2_g3_g

0x8c02,	// (0x0009dce0) list_medium_line_t2_g3_t1_ParamLimits

0x8c02,	// (0x0009dce0) list_medium_line_t2_g3_t1

0x8c19,	// (0x0009dcf7) list_medium_line_t2_g3_t2_ParamLimits

0x8c19,	// (0x0009dcf7) list_medium_line_t2_g3_t2

0x0001,

0xfd39,	// (0x000a4e17) list_medium_line_t2_g3_t_ParamLimits

0xfd39,	// (0x000a4e17) list_medium_line_t2_g3_t

0x71c8,	// (0x0009c2a6) list_medium_line_t3_g3_g1_ParamLimits

0x71c8,	// (0x0009c2a6) list_medium_line_t3_g3_g1

0x8be1,	// (0x0009dcbf) list_medium_line_t3_g3_g2_ParamLimits

0x8be1,	// (0x0009dcbf) list_medium_line_t3_g3_g2

0x71d4,	// (0x0009c2b2) list_medium_line_t3_g3_g3_ParamLimits

0x71d4,	// (0x0009c2b2) list_medium_line_t3_g3_g3

0x0002,

0xfd32,	// (0x000a4e10) list_medium_line_t3_g3_g_ParamLimits

0xfd32,	// (0x000a4e10) list_medium_line_t3_g3_g

0x8c2e,	// (0x0009dd0c) list_medium_line_t3_g3_t1_ParamLimits

0x8c2e,	// (0x0009dd0c) list_medium_line_t3_g3_t1

0x8c42,	// (0x0009dd20) list_medium_line_t3_g3_t2_ParamLimits

0x8c42,	// (0x0009dd20) list_medium_line_t3_g3_t2

0x8c54,	// (0x0009dd32) list_medium_line_t3_g3_t3_ParamLimits

0x8c54,	// (0x0009dd32) list_medium_line_t3_g3_t3

0x0002,

0xfd3e,	// (0x000a4e1c) list_medium_line_t3_g3_t_ParamLimits

0xfd3e,	// (0x000a4e1c) list_medium_line_t3_g3_t

0x89a3,	// (0x0009da81) list_medium_line_right_iconx2_g1

0x8829,	// (0x0009d907) list_medium_line_right_iconx2_g2

0x0001,

0xfd45,	// (0x000a4e23) list_medium_line_right_iconx2_g

0x8c66,	// (0x0009dd44) list_medium_line_right_iconx2_t1

0x89a3,	// (0x0009da81) list_medium_line_t2_right_iconx2_g1

0x8829,	// (0x0009d907) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd45,	// (0x000a4e23) list_medium_line_t2_right_iconx2_g

0x8c74,	// (0x0009dd52) list_medium_line_t2_right_iconx2_t1

0x8c84,	// (0x0009dd62) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd4a,	// (0x000a4e28) list_medium_line_t2_right_iconx2_t

0x8c92,	// (0x0009dd70) list_medium_line_x4_t4_t1

0x8ca0,	// (0x0009dd7e) list_medium_line_x4_t4_t2

0x8cb0,	// (0x0009dd8e) list_medium_line_x4_t4_t3

0x8cc0,	// (0x0009dd9e) list_medium_line_x4_t4_t4

0x0003,

0xfd4f,	// (0x000a4e2d) list_medium_line_x4_t4_t

0x8cfa,	// (0x0009ddd8) tport_appsw_pane_ParamLimits

0x8cfa,	// (0x0009ddd8) tport_appsw_pane

0x8d08,	// (0x0009dde6) tport_contact_pane_ParamLimits

0x8d08,	// (0x0009dde6) tport_contact_pane

0x8d18,	// (0x0009ddf6) tport_listscroll_pane_ParamLimits

0x8d18,	// (0x0009ddf6) tport_listscroll_pane

0x8d28,	// (0x0009de06) cell_tport_appsw_pane_ParamLimits

0x8d28,	// (0x0009de06) cell_tport_appsw_pane

0xbf28,	// (0x000a1006) tport_appsw_pane_g1_ParamLimits

0xbf28,	// (0x000a1006) tport_appsw_pane_g1

0xd99b,	// (0x000a2a79) tport_contact_pane_g1

0xd256,	// (0x000a2334) tport_contact_pane_t1

0xd9a4,	// (0x000a2a82) tport_contact_pane_t2

0x0001,

0xfd58,	// (0x000a4e36) tport_contact_pane_t

0xd9b2,	// (0x000a2a90) list_tport_pane

0xd9bb,	// (0x000a2a99) scroll_pane_cp_030

0x8d5b,	// (0x0009de39) cell_tport_appsw_pane_g1

0x8d6b,	// (0x0009de49) cell_tport_appsw_pane_t1

0xe0f4,	// (0x000a31d2) grid_highlight_pane_cp019

0x8d79,	// (0x0009de57) list_tport_double_graphic_pane_ParamLimits

0x8d79,	// (0x0009de57) list_tport_double_graphic_pane

0xecc6,	// (0x000a3da4) list_highlight_pane_cp023_ParamLimits

0xecc6,	// (0x000a3da4) list_highlight_pane_cp023

0x8d8b,	// (0x0009de69) list_tport_double_graphic_pane_g1_ParamLimits

0x8d8b,	// (0x0009de69) list_tport_double_graphic_pane_g1

0x8d98,	// (0x0009de76) list_tport_double_graphic_pane_t1_ParamLimits

0x8d98,	// (0x0009de76) list_tport_double_graphic_pane_t1

0x8dad,	// (0x0009de8b) list_tport_double_graphic_pane_t2_ParamLimits

0x8dad,	// (0x0009de8b) list_tport_double_graphic_pane_t2

0x0001,

0xfd64,	// (0x000a4e42) list_tport_double_graphic_pane_t_ParamLimits

0xfd64,	// (0x000a4e42) list_tport_double_graphic_pane_t

0xe0f4,	// (0x000a31d2) main_cale_note_pane

0x6973,	// (0x0009ba51) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6973,	// (0x0009ba51) cell_vitu2_function_top_wide_pane_cp01

0x8411,	// (0x0009d4ef) wait_bar_pane_cp05_ParamLimits

0xecc6,	// (0x000a3da4) listscroll_cmail_pane

0xd9c4,	// (0x000a2aa2) list_cmail_pane

0x8dbf,	// (0x0009de9d) list_cmail_body_pane

0x8de3,	// (0x0009dec1) list_single_cmail_header_caption_pane

0x8e13,	// (0x0009def1) list_single_cmail_header_detail_pane_ParamLimits

0x8e13,	// (0x0009def1) list_single_cmail_header_detail_pane

0xd9d4,	// (0x000a2ab2) list_single_cmail_header_caption_pane_t1

0x8e54,	// (0x0009df32) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8e54,	// (0x0009df32) list_single_cmail_header_detail_pane_g1

0xe8ea,	// (0x000a39c8) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe8ea,	// (0x000a39c8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd69,	// (0x000a4e47) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd69,	// (0x000a4e47) list_single_cmail_header_detail_pane_g

0x8e6a,	// (0x0009df48) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8e6a,	// (0x0009df48) list_single_cmail_header_detail_pane_t1

0x8ea6,	// (0x0009df84) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8ea6,	// (0x0009df84) list_single_cmail_header_editor_pane_bg

0xda13,	// (0x000a2af1) list_cmail_body_pane_g1

0xda1c,	// (0x000a2afa) list_cmail_body_pane_t1

0xc6c9,	// (0x000a17a7) list_single_cmail_header_editor_pane_bg_g1

0x9d16,	// (0x0009edf4) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc6d9,	// (0x000a17b7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc6d1,	// (0x000a17af) list_single_cmail_header_editor_pane_bg_g1_copy3

0xc923,	// (0x000a1a01) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc6f9,	// (0x000a17d7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc6e9,	// (0x000a17c7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc6f1,	// (0x000a17cf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9cf6,	// (0x0009edd4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8ebd,	// (0x0009df9b) calenote_gesture_pane_ParamLimits

0x8ebd,	// (0x0009df9b) calenote_gesture_pane

0x8ed7,	// (0x0009dfb5) calenote_window_pane_ParamLimits

0x8ed7,	// (0x0009dfb5) calenote_window_pane

0xda2a,	// (0x000a2b08) popup_note_window_cp01

0x8eef,	// (0x0009dfcd) calenote_swipe_1_pane_ParamLimits

0x8eef,	// (0x0009dfcd) calenote_swipe_1_pane

0x880f,	// (0x0009d8ed) calenote_swipe_2_pane_ParamLimits

0x880f,	// (0x0009d8ed) calenote_swipe_2_pane

0xd744,	// (0x000a2822) calenote_swipe_1_pane_g1_ParamLimits

0xd744,	// (0x000a2822) calenote_swipe_1_pane_g1

0xd751,	// (0x000a282f) calenote_swipe_1_pane_g2_ParamLimits

0xd751,	// (0x000a282f) calenote_swipe_1_pane_g2

0x0001,

0xfc93,	// (0x000a4d71) calenote_swipe_1_pane_g_ParamLimits

0xfc93,	// (0x000a4d71) calenote_swipe_1_pane_g

0xda3c,	// (0x000a2b1a) calenote_swipe_1_pane_t1_ParamLimits

0xda3c,	// (0x000a2b1a) calenote_swipe_1_pane_t1

0xd744,	// (0x000a2822) calenote_swipe_2_pane_g1_ParamLimits

0xd744,	// (0x000a2822) calenote_swipe_2_pane_g1

0xda5b,	// (0x000a2b39) calenote_swipe_2_pane_g2_ParamLimits

0xda5b,	// (0x000a2b39) calenote_swipe_2_pane_g2

0x0001,

0xfd75,	// (0x000a4e53) calenote_swipe_2_pane_g_ParamLimits

0xfd75,	// (0x000a4e53) calenote_swipe_2_pane_g

0xda67,	// (0x000a2b45) calenote_swipe_2_pane_t1_ParamLimits

0xda67,	// (0x000a2b45) calenote_swipe_2_pane_t1

0xe0f4,	// (0x000a31d2) main_mup_navstr_pane

0x56ad,	// (0x0009a78b) main_mup3_pane_t7_ParamLimits

0x56ad,	// (0x0009a78b) main_mup3_pane_t7

0x60d7,	// (0x0009b1b5) main_mp4_pane_g6_ParamLimits

0x60d7,	// (0x0009b1b5) main_mp4_pane_g6

0x6457,	// (0x0009b535) main_image3_pane_t4_ParamLimits

0x6457,	// (0x0009b535) main_image3_pane_t4

0x8f02,	// (0x0009dfe0) popup_navstr_preview_pane_ParamLimits

0x8f02,	// (0x0009dfe0) popup_navstr_preview_pane

0x8f0e,	// (0x0009dfec) scroll_navstr_pane_ParamLimits

0x8f0e,	// (0x0009dfec) scroll_navstr_pane

0xe0f4,	// (0x000a31d2) bg_popup_preview_window_pane_cp04

0xda8e,	// (0x000a2b6c) popup_navstr_preview_pane_t1

0x8f1a,	// (0x0009dff8) scroll_navstr_pane_g1_ParamLimits

0x8f1a,	// (0x0009dff8) scroll_navstr_pane_g1

0x8f27,	// (0x0009e005) scroll_navstr_pane_t1_ParamLimits

0x8f27,	// (0x0009e005) scroll_navstr_pane_t1

0xda33,	// (0x000a2b11) bg_button_pane_cp014

0xda33,	// (0x000a2b11) bg_button_pane_cp030

0x86fe,	// (0x0009d7dc) list_double_fisheye_pane_g4_ParamLimits

0x86fe,	// (0x0009d7dc) list_double_fisheye_pane_g4

0x870a,	// (0x0009d7e8) list_double_fisheye_pane_g5_ParamLimits

0x870a,	// (0x0009d7e8) list_double_fisheye_pane_g5

0xb8f6,	// (0x000a09d4) sp_fs_scroll_pane_cp03

0xd837,	// (0x000a2915) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd843,	// (0x000a2921) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcb0,	// (0x000a4d8e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd84f,	// (0x000a292d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd9cc,	// (0x000a2aaa) sp_fs_scroll_pane_cp02

0xedf7,	// (0x000a3ed5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xedf7,	// (0x000a3ed5) popup_sp_fs_calendar_preview_list_single_pane

0xe0f4,	// (0x000a31d2) main_cam6_pano_pane

0x46b9,	// (0x00099797) main_mup3_pane_ParamLimits

0xe0f4,	// (0x000a31d2) main_phacti_pane

0x82e6,	// (0x0009d3c4) bg_button_pane_cp11

0x82fe,	// (0x0009d3dc) main_mobtv_info_pane_g2_ParamLimits

0x82fe,	// (0x0009d3dc) main_mobtv_info_pane_g2

0x0001,

0xfc10,	// (0x000a4cee) main_mobtv_info_pane_g_ParamLimits

0xfc10,	// (0x000a4cee) main_mobtv_info_pane_g

0x84b0,	// (0x0009d58e) sc_clock_pane_t5_ParamLimits

0x84b0,	// (0x0009d58e) sc_clock_pane_t5

0x8565,	// (0x0009d643) main_radioblah_pane_g1_ParamLimits

0xd690,	// (0x000a276e) main_radioblah_pane_t3_ParamLimits

0xd690,	// (0x000a276e) main_radioblah_pane_t3

0xd6a8,	// (0x000a2786) main_radioblah_pane_t4_ParamLimits

0xd6a8,	// (0x000a2786) main_radioblah_pane_t4

0x8583,	// (0x0009d661) main_radioblah_text_pane_ParamLimits

0x8583,	// (0x0009d661) main_radioblah_text_pane

0x8590,	// (0x0009d66e) main_radioblah_info_pane_g1_ParamLimits

0x8625,	// (0x0009d703) main_radioblah_info_pane_t4_ParamLimits

0x8625,	// (0x0009d703) main_radioblah_info_pane_t4

0xecc6,	// (0x000a3da4) main_sp_fs_calendar_pane

0x8f39,	// (0x0009e017) main_phacti_pane_g1

0x8f41,	// (0x0009e01f) phacti_note_pane_ParamLimits

0x8f41,	// (0x0009e01f) phacti_note_pane

0xdaa5,	// (0x000a2b83) phacti_term_pane_ParamLimits

0xdaa5,	// (0x000a2b83) phacti_term_pane

0xdaba,	// (0x000a2b98) phacti_note_pane_t1_ParamLimits

0xdaba,	// (0x000a2b98) phacti_note_pane_t1

0xdad1,	// (0x000a2baf) phacti_term_pane_g1

0xdad9,	// (0x000a2bb7) phacti_term_pane_t1_ParamLimits

0xdad9,	// (0x000a2bb7) phacti_term_pane_t1

0xdb03,	// (0x000a2be1) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdb0b,	// (0x000a2be9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd7f,	// (0x000a4e5d) popup_sp_fs_calendar_preview_list_single_pane_g

0xdb13,	// (0x000a2bf1) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdb13,	// (0x000a2bf1) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdb29,	// (0x000a2c07) aid_popup_sp_fs_bg_corner_pane

0xbbef,	// (0x000a0ccd) popup_sp_fs_calendar_preview_bg_pane_g1

0xe0f4,	// (0x000a31d2) popup_sp_fs_calendar_preview_bg_pane

0xb902,	// (0x000a09e0) popup_sp_fs_calendar_preview_list_pane

0xb7b7,	// (0x000a0895) bg_main_sp_fs_cale_pane_ParamLimits

0xb7b7,	// (0x000a0895) bg_main_sp_fs_cale_pane

0xdb31,	// (0x000a2c0f) listscroll_cale_mrui_pane_ParamLimits

0xdb31,	// (0x000a2c0f) listscroll_cale_mrui_pane

0xdb46,	// (0x000a2c24) listscroll_sp_fs_schedule_track_pane

0xdb4f,	// (0x000a2c2d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdb4f,	// (0x000a2c2d) main_sp_fs_ctrlbar_pane_cp01

0xdb62,	// (0x000a2c40) main_sp_fs_ribbon_pane

0xdb6a,	// (0x000a2c48) popup_sp_fs_cale_preview_window

0x8fa4,	// (0x0009e082) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8fa4,	// (0x0009e082) list_single_sp_fs_schedule_track_pane

0xe252,	// (0x000a3330) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe252,	// (0x000a3330) bg_sp_fs_highlight_list_pane_cp03

0x8fcb,	// (0x0009e0a9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8fcb,	// (0x0009e0a9) list_single_sp_fs_schedule_track_pane_g1

0x8fd7,	// (0x0009e0b5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8fd7,	// (0x0009e0b5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd84,	// (0x000a4e62) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd84,	// (0x000a4e62) list_single_sp_fs_schedule_track_pane_g

0x8fe3,	// (0x0009e0c1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8fe3,	// (0x0009e0c1) list_single_sp_fs_schedule_track_pane_t1

0x8ffb,	// (0x0009e0d9) sp_fs_schedule_track_pane_ParamLimits

0x8ffb,	// (0x0009e0d9) sp_fs_schedule_track_pane

0xdb7c,	// (0x000a2c5a) sp_fs_schedule_track_pane_g1

0xdb84,	// (0x000a2c62) sp_fs_schedule_track_pane_g2

0xdb8c,	// (0x000a2c6a) sp_fs_schedule_track_pane_g3

0xdb94,	// (0x000a2c72) sp_fs_schedule_track_pane_g4

0xdb9c,	// (0x000a2c7a) sp_fs_schedule_track_pane_g5

0x0004,

0xfd89,	// (0x000a4e67) sp_fs_schedule_track_pane_g

0xc6c9,	// (0x000a17a7) bg_sp_fs_schedule_viewer_highlight_g1

0x9d16,	// (0x0009edf4) bg_sp_fs_schedule_viewer_highlight_g2

0xc6d1,	// (0x000a17af) bg_sp_fs_schedule_viewer_highlight_g3

0xc6d9,	// (0x000a17b7) bg_sp_fs_schedule_viewer_highlight_g4

0xc923,	// (0x000a1a01) bg_sp_fs_schedule_viewer_highlight_g5

0xc6e9,	// (0x000a17c7) bg_sp_fs_schedule_viewer_highlight_g6

0xc6f1,	// (0x000a17cf) bg_sp_fs_schedule_viewer_highlight_g7

0xc6f9,	// (0x000a17d7) bg_sp_fs_schedule_viewer_highlight_g8

0x9cf6,	// (0x0009edd4) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd94,	// (0x000a4e72) bg_sp_fs_schedule_viewer_highlight_g

0xe0f4,	// (0x000a31d2) bg_main_sp_fs_ribbon_pane

0x900b,	// (0x0009e0e9) main_sp_fs_ribbon_pane_g1

0xdba4,	// (0x000a2c82) main_sp_fs_ribbon_pane_t1

0x9014,	// (0x0009e0f2) main_sp_fs_ribbon_pane_t2

0xdbb3,	// (0x000a2c91) main_sp_fs_ribbon_pane_t3

0x0002,

0xfda7,	// (0x000a4e85) main_sp_fs_ribbon_pane_t

0xdbc2,	// (0x000a2ca0) main_sp_fs_ribbon_scheduler_pane

0xdbca,	// (0x000a2ca8) bg_main_sp_fs_ribbon_pane_g1

0xdbd3,	// (0x000a2cb1) bg_main_sp_fs_ribbon_pane_g2

0xdbdc,	// (0x000a2cba) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdae,	// (0x000a4e8c) bg_main_sp_fs_ribbon_pane_g

0xdbe4,	// (0x000a2cc2) main_sp_fs_ribbon_scheduler_pane_g1

0xdbed,	// (0x000a2ccb) main_sp_fs_ribbon_scheduler_pane_g2

0xdbf6,	// (0x000a2cd4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdb5,	// (0x000a4e93) main_sp_fs_ribbon_scheduler_pane_g

0xdbff,	// (0x000a2cdd) list_cale_mrui_pane

0x9025,	// (0x0009e103) sp_fs_scroll_pane_cp07_ParamLimits

0x9025,	// (0x0009e103) sp_fs_scroll_pane_cp07

0x9041,	// (0x0009e11f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9041,	// (0x0009e11f) bg_sp_fs_schedule_viewer_highlight

0xdc0c,	// (0x000a2cea) list_single_sp_fs_schedule_track_pane_cp01

0xdc14,	// (0x000a2cf2) list_sp_fs_schedule_track_pane

0xdc1c,	// (0x000a2cfa) sp_fs_scroll_pane_cp06_ParamLimits

0xdc1c,	// (0x000a2cfa) sp_fs_scroll_pane_cp06

0xbbef,	// (0x000a0ccd) bgmain_sp_fs_calendar_pane_g1

0x904e,	// (0x0009e12c) list_single_cale_mrui_pane_ParamLimits

0x904e,	// (0x0009e12c) list_single_cale_mrui_pane

0xdc2e,	// (0x000a2d0c) list_single_cale_mrui_row_pane_ParamLimits

0xdc2e,	// (0x000a2d0c) list_single_cale_mrui_row_pane

0xdc3b,	// (0x000a2d19) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdc3b,	// (0x000a2d19) list_single_cale_mrui_row_pane_g1

0xdc80,	// (0x000a2d5e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdc80,	// (0x000a2d5e) list_single_cale_mrui_row_pane_t1

0x907f,	// (0x0009e15d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x907f,	// (0x0009e15d) list_single_cale_mrui_row_pane_t2

0xdc92,	// (0x000a2d70) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdc92,	// (0x000a2d70) list_single_cale_mrui_row_pane_t3

0xdcc1,	// (0x000a2d9f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdcc1,	// (0x000a2d9f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdc3,	// (0x000a4ea1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdc3,	// (0x000a4ea1) list_single_cale_mrui_row_pane_t

0x90e5,	// (0x0009e1c3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x90e5,	// (0x0009e1c3) list_single_cmail_header_editor_pane_bg_cp01

0x9105,	// (0x0009e1e3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9105,	// (0x0009e1e3) list_single_cmail_header_editor_pane_bg_cp02

0x9121,	// (0x0009e1ff) main_radioblah_text_pane_t1_ParamLimits

0x9121,	// (0x0009e1ff) main_radioblah_text_pane_t1

0xdcf0,	// (0x000a2dce) cam6_indi_pane_cp01

0xdcf8,	// (0x000a2dd6) cam6_mode_pane_cp01

0xdd00,	// (0x000a2dde) cam6_pano_pane

0xdd09,	// (0x000a2de7) cam6_zoom_pane_cp01

0xdd11,	// (0x000a2def) cam6_pano_image_pane

0xdd1c,	// (0x000a2dfa) cam6_pano_pane_g1

0xd3fd,	// (0x000a24db) cam6_pano_pane_g2

0xdd25,	// (0x000a2e03) cam6_pano_pane_g3

0xdd2e,	// (0x000a2e0c) cam6_pano_pane_g4

0xc205,	// (0x000a12e3) cam6_pano_pane_g5

0xdd37,	// (0x000a2e15) cam6_pano_pane_g6

0xdd41,	// (0x000a2e1f) cam6_pano_pane_g7

0xdd49,	// (0x000a2e27) cam6_pano_pane_g8

0xdd52,	// (0x000a2e30) cam6_pano_pane_g9

0x0008,

0xfdcc,	// (0x000a4eaa) cam6_pano_pane_g

0xe0f4,	// (0x000a31d2) main_browser_tag_pane

0xda86,	// (0x000a2b64) grid_navstr_albumart_pane

0xdd5d,	// (0x000a2e3b) cell_navstr_albumart_pane_ParamLimits

0xdd5d,	// (0x000a2e3b) cell_navstr_albumart_pane

0xa516,	// (0x0009f5f4) cell_navstr_albumart_pane_g1

0xb5c8,	// (0x000a06a6) cell_navstr_albumart_pane_g2

0xb5d8,	// (0x000a06b6) cell_navstr_albumart_pane_g3

0xb5d0,	// (0x000a06ae) cell_navstr_albumart_pane_g4

0x0003,

0xfddf,	// (0x000a4ebd) cell_navstr_albumart_pane_g

0x913c,	// (0x0009e21a) bt_list_pane_ParamLimits

0x913c,	// (0x0009e21a) bt_list_pane

0xdd7f,	// (0x000a2e5d) bt_list_pane_t1

0xdd8e,	// (0x000a2e6c) bt_list_pane_t2

0x0001,

0xfde8,	// (0x000a4ec6) bt_list_pane_t

0xe0f4,	// (0x000a31d2) main_cale_prevew_pane

0x9160,	// (0x0009e23e) popup_cale_preview_window_ParamLimits

0x9160,	// (0x0009e23e) popup_cale_preview_window

0xecc6,	// (0x000a3da4) bg_popup_preview_window_pane_cp05_ParamLimits

0xecc6,	// (0x000a3da4) bg_popup_preview_window_pane_cp05

0xdd9d,	// (0x000a2e7b) list_cale_preview_pane_ParamLimits

0xdd9d,	// (0x000a2e7b) list_cale_preview_pane

0xdda9,	// (0x000a2e87) list_double_cale_preview_pane_ParamLimits

0xdda9,	// (0x000a2e87) list_double_cale_preview_pane

0xddbb,	// (0x000a2e99) list_single_cale_preview_pane_ParamLimits

0xddbb,	// (0x000a2e99) list_single_cale_preview_pane

0xddcf,	// (0x000a2ead) list_single_cale_preview_pane_g1

0xddd7,	// (0x000a2eb5) list_single_cale_preview_pane_t1_ParamLimits

0xddd7,	// (0x000a2eb5) list_single_cale_preview_pane_t1

0xddec,	// (0x000a2eca) list_double_cale_preview_pane_g1

0xddf4,	// (0x000a2ed2) list_double_cale_preview_pane_t1_ParamLimits

0xddf4,	// (0x000a2ed2) list_double_cale_preview_pane_t1

0xde09,	// (0x000a2ee7) list_double_cale_preview_pane_t2_ParamLimits

0xde09,	// (0x000a2ee7) list_double_cale_preview_pane_t2

0x0001,

0xfded,	// (0x000a4ecb) list_double_cale_preview_pane_t_ParamLimits

0xfded,	// (0x000a4ecb) list_double_cale_preview_pane_t

0xe0f4,	// (0x000a31d2) main_ezdial_pane

0xecc6,	// (0x000a3da4) main_sp_fs_email_pane_ParamLimits

0x884f,	// (0x0009d92d) cmail_ddmenu_btn01_pane_ParamLimits

0x884f,	// (0x0009d92d) cmail_ddmenu_btn01_pane

0x886c,	// (0x0009d94a) cmail_ddmenu_btn02_pane_ParamLimits

0x886c,	// (0x0009d94a) cmail_ddmenu_btn02_pane

0x888a,	// (0x0009d968) cmail_ddmenu_btn03_pane_ParamLimits

0x888a,	// (0x0009d968) cmail_ddmenu_btn03_pane

0x88b8,	// (0x0009d996) main_sp_fs_ctrlbar_pane_ParamLimits

0x88ce,	// (0x0009d9ac) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8dbf,	// (0x0009de9d) list_cmail_body_pane_ParamLimits

0x8e4b,	// (0x0009df29) bg_button_pane_cp12

0xd9e2,	// (0x000a2ac0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd9e2,	// (0x000a2ac0) list_single_cmail_header_detail_pane_g3

0xd9ef,	// (0x000a2acd) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd9ef,	// (0x000a2acd) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd70,	// (0x000a4e4e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd70,	// (0x000a4e4e) list_single_cmail_header_detail_pane_t

0xdaee,	// (0x000a2bcc) phacti_term_pane_t2_ParamLimits

0xdaee,	// (0x000a2bcc) phacti_term_pane_t2

0x0001,

0xfd7a,	// (0x000a4e58) phacti_term_pane_t_ParamLimits

0xfd7a,	// (0x000a4e58) phacti_term_pane_t

0xde21,	// (0x000a2eff) aid_size_list_single_double

0x9177,	// (0x0009e255) popup_ezdial_listscroll_window

0x919a,	// (0x0009e278) popup_number_entry_window_cp01

0xa3b5,	// (0x0009f493) bg_popup_call_pane_cp09

0xde2d,	// (0x000a2f0b) ezdial_list_pane

0xde35,	// (0x000a2f13) scroll_pane_cp23

0xb9d2,	// (0x000a0ab0) bg_button_pane_cp028_ParamLimits

0xb9d2,	// (0x000a0ab0) bg_button_pane_cp028

0x91a8,	// (0x0009e286) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x91a8,	// (0x0009e286) cmail_ddmenu_btn01_pane_g1

0x91ba,	// (0x0009e298) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91ba,	// (0x0009e298) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdf2,	// (0x000a4ed0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdf2,	// (0x000a4ed0) cmail_ddmenu_btn01_pane_g

0xde3d,	// (0x000a2f1b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xde3d,	// (0x000a2f1b) cmail_ddmenu_btn01_pane_t1

0xb7b7,	// (0x000a0895) bg_button_pane_cp029_ParamLimits

0xb7b7,	// (0x000a0895) bg_button_pane_cp029

0x91ba,	// (0x0009e298) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91ba,	// (0x0009e298) cmail_ddmenu_btn02_pane_g1

0x91d2,	// (0x0009e2b0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91d2,	// (0x0009e2b0) cmail_ddmenu_btn02_pane_t1

0xe252,	// (0x000a3330) bg_button_pane_cp031_ParamLimits

0xe252,	// (0x000a3330) bg_button_pane_cp031

0x91ba,	// (0x0009e298) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91ba,	// (0x0009e298) cmail_ddmenu_btn03_pane_g1

0x91d2,	// (0x0009e2b0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91d2,	// (0x0009e2b0) cmail_ddmenu_btn03_pane_t1

0x62f4,	// (0x0009b3d2) cell_dialer2_keypad_pane_t1_ParamLimits

0x630e,	// (0x0009b3ec) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x630e,	// (0x0009b3ec) cell_dialer2_keypad_pane_t1_copy1

0x816b,	// (0x0009d249) ncimui_group_button_pane

0xecc6,	// (0x000a3da4) main_sp_fs_calendar_pane_ParamLimits

0x8de3,	// (0x0009dec1) list_single_cmail_header_caption_pane_ParamLimits

0xe8f6,	// (0x000a39d4) aid_recal_txt_sm_pane

0xe0f4,	// (0x000a31d2) mian_recal_day_pane

0xdb6a,	// (0x000a2c48) popup_sp_fs_cale_preview_window_ParamLimits

0xde53,	// (0x000a2f31) list_recal_day_pane

0xde95,	// (0x000a2f73) list_single_recal_day_pane_ParamLimits

0xde95,	// (0x000a2f73) list_single_recal_day_pane

0xdea7,	// (0x000a2f85) list_single_recal_day_pane_g1_ParamLimits

0xdea7,	// (0x000a2f85) list_single_recal_day_pane_g1

0xdeb3,	// (0x000a2f91) list_single_recal_day_pane_g2_ParamLimits

0xdeb3,	// (0x000a2f91) list_single_recal_day_pane_g2

0xdec3,	// (0x000a2fa1) list_single_recal_day_pane_g3_ParamLimits

0xdec3,	// (0x000a2fa1) list_single_recal_day_pane_g3

0x91f6,	// (0x0009e2d4) list_single_recal_day_pane_g4_ParamLimits

0x91f6,	// (0x0009e2d4) list_single_recal_day_pane_g4

0xdecf,	// (0x000a2fad) list_single_recal_day_pane_g5_ParamLimits

0xdecf,	// (0x000a2fad) list_single_recal_day_pane_g5

0xdedf,	// (0x000a2fbd) list_single_recal_day_pane_g6_ParamLimits

0xdedf,	// (0x000a2fbd) list_single_recal_day_pane_g6

0x0004,

0xfe01,	// (0x000a4edf) list_single_recal_day_pane_g_ParamLimits

0xfe01,	// (0x000a4edf) list_single_recal_day_pane_g

0xdef3,	// (0x000a2fd1) list_single_recal_day_pane_t1

0xdf05,	// (0x000a2fe3) list_single_recal_day_pane_t2

0x0001,

0xfe0c,	// (0x000a4eea) list_single_recal_day_pane_t

0x9216,	// (0x0009e2f4) ncimui_query_button_pane_ParamLimits

0x9216,	// (0x0009e2f4) ncimui_query_button_pane

0x9226,	// (0x0009e304) ncimui_query_button_pane_t1_ParamLimits

0x9226,	// (0x0009e304) ncimui_query_button_pane_t1

0xdf17,	// (0x000a2ff5) ncimui_query_button_pane_t2_ParamLimits

0xdf17,	// (0x000a2ff5) ncimui_query_button_pane_t2

0x0001,

0xfe11,	// (0x000a4eef) ncimui_query_button_pane_t_ParamLimits

0xfe11,	// (0x000a4eef) ncimui_query_button_pane_t

0x9239,	// (0x0009e317) query_button_pane_ParamLimits

0x9239,	// (0x0009e317) query_button_pane

0xe0f4,	// (0x000a31d2) bg_button_pane_cp0028

0xdf2a,	// (0x000a3008) query_button_pane_t1

0x46d5,	// (0x000997b3) main_tport_pane_ParamLimits

0x8cd0,	// (0x0009ddae) bg_popup_window_pane_cp01_ParamLimits

0x8cd0,	// (0x0009ddae) bg_popup_window_pane_cp01

0x8cde,	// (0x0009ddbc) heading_pane_cp08_ParamLimits

0x8cde,	// (0x0009ddbc) heading_pane_cp08

0x8cec,	// (0x0009ddca) heading_pane_cp07_ParamLimits

0x8cec,	// (0x0009ddca) heading_pane_cp07

0x8d5b,	// (0x0009de39) cell_tport_appsw_pane_g2

0x0002,

0xfd5d,	// (0x000a4e3b) cell_tport_appsw_pane_g

0x3dcc,	// (0x00098eaa) input_candi_list_open_g1

0x9ecd,	// (0x0009efab) list_cale_time_pane_g6_ParamLimits

0x9ecd,	// (0x0009efab) list_cale_time_pane_g6

0x514f,	// (0x0009a22d) aid_size_touch_calib_1_ParamLimits

0x514f,	// (0x0009a22d) aid_size_touch_calib_1

0x515b,	// (0x0009a239) aid_size_touch_calib_2_ParamLimits

0x515b,	// (0x0009a239) aid_size_touch_calib_2

0x5169,	// (0x0009a247) aid_size_touch_calib_3_ParamLimits

0x5169,	// (0x0009a247) aid_size_touch_calib_3

0x5179,	// (0x0009a257) aid_size_touch_calib_4_ParamLimits

0x5179,	// (0x0009a257) aid_size_touch_calib_4

0x5187,	// (0x0009a265) main_touch_calib_button_group_pane_ParamLimits

0x5187,	// (0x0009a265) main_touch_calib_button_group_pane

0x5195,	// (0x0009a273) main_touch_calib_pane_g1_ParamLimits

0x51a1,	// (0x0009a27f) main_touch_calib_pane_g2_ParamLimits

0x51ad,	// (0x0009a28b) main_touch_calib_pane_g3_ParamLimits

0x51b9,	// (0x0009a297) main_touch_calib_pane_g4_ParamLimits

0xf726,	// (0x000a4804) main_touch_calib_pane_g_ParamLimits

0x51c5,	// (0x0009a2a3) main_touch_calib_pane_t1_ParamLimits

0x51de,	// (0x0009a2bc) main_touch_calib_pane_t2_ParamLimits

0x51f7,	// (0x0009a2d5) main_touch_calib_pane_t3_ParamLimits

0x520d,	// (0x0009a2eb) main_touch_calib_pane_t4_ParamLimits

0x5223,	// (0x0009a301) main_touch_calib_pane_t5_ParamLimits

0xf72f,	// (0x000a480d) main_touch_calib_pane_t_ParamLimits

0xbfc3,	// (0x000a10a1) list_single_fp_cale_pane_g3_ParamLimits

0xbfc3,	// (0x000a10a1) list_single_fp_cale_pane_g3

0x46b9,	// (0x00099797) bg_button_pane_cp012_ParamLimits

0x46b9,	// (0x00099797) bg_vkb2_func_pane_cp03_ParamLimits

0x714d,	// (0x0009c22b) cell_vitu2_function_top_pane_g1_ParamLimits

0x46b9,	// (0x00099797) bg_vkb2_func_pane_cp04_ParamLimits

0x80f3,	// (0x0009d1d1) main_ncimui_button_group_pane_ParamLimits

0x80f3,	// (0x0009d1d1) main_ncimui_button_group_pane

0x8159,	// (0x0009d237) main_ncimui_pane_t3_ParamLimits

0x8159,	// (0x0009d237) main_ncimui_pane_t3

0xda9c,	// (0x000a2b7a) phacti_button_group_pane

0xde21,	// (0x000a2eff) aid_size_list_single_double_ParamLimits

0x9177,	// (0x0009e255) popup_ezdial_listscroll_window_ParamLimits

0x919a,	// (0x0009e278) popup_number_entry_window_cp01_ParamLimits

0x9246,	// (0x0009e324) phacti_button_pane_ParamLimits

0x9246,	// (0x0009e324) phacti_button_pane

0xe0f4,	// (0x000a31d2) bg_button_pane_cp14

0xdf38,	// (0x000a3016) phacti_button_pane_t1

0x9257,	// (0x0009e335) main_touch_calib_button_pane_ParamLimits

0x9257,	// (0x0009e335) main_touch_calib_button_pane

0xec7e,	// (0x000a3d5c) bg_button_pane_cp18_ParamLimits

0xec7e,	// (0x000a3d5c) bg_button_pane_cp18

0xdf46,	// (0x000a3024) main_touch_calib_button_pane_t1_ParamLimits

0xdf46,	// (0x000a3024) main_touch_calib_button_pane_t1

0xdf5c,	// (0x000a303a) main_touch_calib_button_pane_t2_ParamLimits

0xdf5c,	// (0x000a303a) main_touch_calib_button_pane_t2

0x0001,

0xfe16,	// (0x000a4ef4) main_touch_calib_button_pane_t_ParamLimits

0xfe16,	// (0x000a4ef4) main_touch_calib_button_pane_t

0xe0f4,	// (0x000a31d2) cell_ncimui_button_pane

0xe0f4,	// (0x000a31d2) bg_button_pane_cp032

0xdf7a,	// (0x000a3058) cell_ncimui_button_pane_t1

0x636a,	// (0x0009b448) image3_infobar_pane_ParamLimits

0x636a,	// (0x0009b448) image3_infobar_pane

0x84d2,	// (0x0009d5b0) fs_bigclock_status_pane_ParamLimits

0x84d2,	// (0x0009d5b0) fs_bigclock_status_pane

0x84df,	// (0x0009d5bd) main_fs_bigclock_clock_pane_ParamLimits

0x84df,	// (0x0009d5bd) main_fs_bigclock_clock_pane

0x8503,	// (0x0009d5e1) main_fs_bigclock_indi_pane_ParamLimits

0x8503,	// (0x0009d5e1) main_fs_bigclock_indi_pane

0x8533,	// (0x0009d611) main_fs_bigclock_swipe_pane_ParamLimits

0x8533,	// (0x0009d611) main_fs_bigclock_swipe_pane

0xe0f4,	// (0x000a31d2) main_fs_clock_dumped_data

0xd50a,	// (0x000a25e8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd50a,	// (0x000a25e8) list_single_fs_bigclock_indicator_pane_g1

0xd525,	// (0x000a2603) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd525,	// (0x000a2603) list_single_fs_bigclock_indicator_pane_g2

0xd53f,	// (0x000a261d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd53f,	// (0x000a261d) list_single_fs_bigclock_indicator_pane_g3

0xd559,	// (0x000a2637) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd559,	// (0x000a2637) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc44,	// (0x000a4d22) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc44,	// (0x000a4d22) list_single_fs_bigclock_indicator_pane_g

0xd582,	// (0x000a2660) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd582,	// (0x000a2660) list_single_fs_bigclock_indicator_pane_t1

0xd5aa,	// (0x000a2688) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd5aa,	// (0x000a2688) list_single_fs_bigclock_indicator_pane_t2

0xd5d2,	// (0x000a26b0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd5d2,	// (0x000a26b0) list_single_fs_bigclock_indicator_pane_t3

0xd5fa,	// (0x000a26d8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd5fa,	// (0x000a26d8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc4f,	// (0x000a4d2d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc4f,	// (0x000a4d2d) list_single_fs_bigclock_indicator_pane_t

0xdf88,	// (0x000a3066) image3_infobar_fav_pane_ParamLimits

0xdf88,	// (0x000a3066) image3_infobar_fav_pane

0xdf98,	// (0x000a3076) image3_infobar_loc_pane_ParamLimits

0xdf98,	// (0x000a3076) image3_infobar_loc_pane

0xdfac,	// (0x000a308a) image3_infobar_time_pane_ParamLimits

0xdfac,	// (0x000a308a) image3_infobar_time_pane

0xbbef,	// (0x000a0ccd) image3_infobar_time_pane_g1

0xdfbc,	// (0x000a309a) image3_infobar_time_pane_t1

0xbbef,	// (0x000a0ccd) image3_infobar_loc_pane_g1

0xdfca,	// (0x000a30a8) image3_infobar_loc_pane_g2

0x0001,

0xfe1b,	// (0x000a4ef9) image3_infobar_loc_pane_g

0xdfd2,	// (0x000a30b0) image3_infobar_loc_pane_t1

0xbbef,	// (0x000a0ccd) image3_infobar_fav_pane_g1

0xdfe0,	// (0x000a30be) image3_infobar_fav_pane_g2

0x0001,

0xfe20,	// (0x000a4efe) image3_infobar_fav_pane_g

0xdfe8,	// (0x000a30c6) fs_bigclock_status_battery_pane

0xdff1,	// (0x000a30cf) fs_bigclock_status_signal_pane

0xdffa,	// (0x000a30d8) fs_bigclock_status_title_pane

0xe003,	// (0x000a30e1) fs_bigclock_status_signal_pane_g1

0xe00c,	// (0x000a30ea) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe25,	// (0x000a4f03) fs_bigclock_status_signal_pane_g

0xe014,	// (0x000a30f2) fs_bigclock_status_battery_pane_g1

0xe01d,	// (0x000a30fb) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe2a,	// (0x000a4f08) fs_bigclock_status_battery_pane_g

0xe025,	// (0x000a3103) fs_bigclock_status_title_pane_t1

0xbbef,	// (0x000a0ccd) main_fs_bigclock_clock_pane_g1

0x9267,	// (0x0009e345) main_fs_bigclock_clock_pane_g2

0x9267,	// (0x0009e345) main_fs_bigclock_clock_pane_g3

0x9267,	// (0x0009e345) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe2f,	// (0x000a4f0d) main_fs_bigclock_clock_pane_g

0x926f,	// (0x0009e34d) main_fs_bigclock_clock_pane_t1

0x927d,	// (0x0009e35b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe38,	// (0x000a4f16) main_fs_bigclock_clock_pane_t

0xe033,	// (0x000a3111) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe033,	// (0x000a3111) list_single_fs_bigclock_indicator_pane

0x928c,	// (0x0009e36a) list_single_fs_bigclock_pane_ParamLimits

0x928c,	// (0x0009e36a) list_single_fs_bigclock_pane

0xe04d,	// (0x000a312b) main_fs_bigclock_indicator_pane_t1

0xe05c,	// (0x000a313a) list_single_fs_bigclock_pane_g1

0xe064,	// (0x000a3142) list_single_fs_bigclock_pane_t1

0xbbef,	// (0x000a0ccd) main_fs_bigclock_swipe_pane_g1

0xe0a7,	// (0x000a3185) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe49,	// (0x000a4f27) main_fs_bigclock_swipe_pane_g

0xe0af,	// (0x000a318d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe0af,	// (0x000a318d) main_fs_bigclock_swipe_pane_t1

0x3583,	// (0x00098661) call_type_pane_ParamLimits

0xe0f4,	// (0x000a31d2) main_btmg_pane

0xdc67,	// (0x000a2d45) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdc67,	// (0x000a2d45) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdbc,	// (0x000a4e9a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdbc,	// (0x000a4e9a) list_single_cale_mrui_row_pane_g

0xde7c,	// (0x000a2f5a) list_recal_vselct_arw_lo_pane

0xde84,	// (0x000a2f62) list_recal_vselct_arw_up_pane

0xde8c,	// (0x000a2f6a) list_recal_vselct_pane

0x92ed,	// (0x0009e3cb) btmg_button_pane

0x92f9,	// (0x0009e3d7) main_btmg_pane_g1

0xe0f4,	// (0x000a31d2) bg_button_pane_cp044

0xe0cc,	// (0x000a31aa) btmg_button_pane_t1

0xb7a3,	// (0x000a0881) aid_listscroll_gen

0xecc6,	// (0x000a3da4) main_cntbar_detail_pane

0xd9c4,	// (0x000a2aa2) list_cmail_folder_pane

0xb8f6,	// (0x000a09d4) sp_fs_scroll_pane_cp03_ParamLimits

0x9301,	// (0x0009e3df) list_single_fs_dyc_pane_cp01_ParamLimits

0x9301,	// (0x0009e3df) list_single_fs_dyc_pane_cp01

0xe0da,	// (0x000a31b8) aid_size_cmail_indent

0xe0e3,	// (0x000a31c1) list_single_dyc_row_pane_cp01

0x934d,	// (0x0009e42b) cntbar_detail_list_pane_ParamLimits

0x934d,	// (0x0009e42b) cntbar_detail_list_pane

0x9387,	// (0x0009e465) main_cntbar_detail_cont_pane_ParamLimits

0x9387,	// (0x0009e465) main_cntbar_detail_cont_pane

0x349a,	// (0x00098578) scroll_pane_cp032_ParamLimits

0x349a,	// (0x00098578) scroll_pane_cp032

0x9393,	// (0x0009e471) cntbar_detail_list_event_pane_ParamLimits

0x9393,	// (0x0009e471) cntbar_detail_list_event_pane

0x9359,	// (0x0009e437) cntbar_detail_list_shct_pane

0x9d64,	// (0x0009ee42) aid_list_gen

0xe8ff,	// (0x000a39dd) aid_scroll

0xe908,	// (0x000a39e6) aid_size_touch_scroll_bar

0x7862,	// (0x0009c940) aid_list_double

0xe911,	// (0x000a39ef) aid_list_single

0x7850,	// (0x0009c92e) aid_list_single_lg

0xe0ec,	// (0x000a31ca) aid_list_z_g_a_sm

0xe91a,	// (0x000a39f8) aid_list_z_g_d

0xe260,	// (0x000a333e) aid_txt_z_prm

0x93a7,	// (0x0009e485) aid_txt_z_prm_cp01

0x93b5,	// (0x0009e493) aid_txt_z_sec

0x93c3,	// (0x0009e4a1) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93c3,	// (0x0009e4a1) main_cntbar_detail_cont_pane_g1

0x93d0,	// (0x0009e4ae) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93d0,	// (0x0009e4ae) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe4e,	// (0x000a4f2c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe4e,	// (0x000a4f2c) main_cntbar_detail_cont_pane_g

0xe922,	// (0x000a3a00) main_cntbar_detail_cont_pane_t1

0xe930,	// (0x000a3a0e) main_cntbar_detail_cont_pane_t2

0xe93e,	// (0x000a3a1c) main_cntbar_detail_cont_pane_t3

0x0002,

0x0d11,	// (0x00095def) main_cntbar_detail_cont_pane_t

0x93dc,	// (0x0009e4ba) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93dc,	// (0x0009e4ba) cell_cntbar_detail_list_shct_pane

0xe94c,	// (0x000a3a2a) cntbar_detail_list_shct_pane_g1

0xe955,	// (0x000a3a33) cntbar_detail_list_shct_pane_g2

0x0001,

0x0d18,	// (0x00095df6) cntbar_detail_list_shct_pane_g

0x93f0,	// (0x0009e4ce) cntbar_detail_list_event_pane_g1_ParamLimits

0x93f0,	// (0x0009e4ce) cntbar_detail_list_event_pane_g1

0x93fc,	// (0x0009e4da) cntbar_detail_list_event_pane_g2_ParamLimits

0x93fc,	// (0x0009e4da) cntbar_detail_list_event_pane_g2

0x0005,

0xfe53,	// (0x000a4f31) cntbar_detail_list_event_pane_g_ParamLimits

0xfe53,	// (0x000a4f31) cntbar_detail_list_event_pane_g

0x9468,	// (0x0009e546) cntbar_detail_list_event_pane_t1_ParamLimits

0x9468,	// (0x0009e546) cntbar_detail_list_event_pane_t1

0x947d,	// (0x0009e55b) cntbar_detail_list_event_pane_t2_ParamLimits

0x947d,	// (0x0009e55b) cntbar_detail_list_event_pane_t2

0x0002,

0xfe60,	// (0x000a4f3e) cntbar_detail_list_event_pane_t_ParamLimits

0xfe60,	// (0x000a4f3e) cntbar_detail_list_event_pane_t

0xbbef,	// (0x000a0ccd) cell_cntbar_detail_list_shct_pane_g1

0x3912,	// (0x000989f0) navi_pane_mv_g3

0xecc6,	// (0x000a3da4) main_cntbar_detail_pane_ParamLimits

0xe0f4,	// (0x000a31d2) main_notif_wgt_pane

0x601e,	// (0x0009b0fc) aid_tch_main_mp4_pane_g4

0x6253,	// (0x0009b331) popup_slider_window_cp02

0xde72,	// (0x000a2f50) list_recal_day_event_pane

0x932d,	// (0x0009e40b) cntbar_detail_btn_pane_ParamLimits

0x932d,	// (0x0009e40b) cntbar_detail_btn_pane

0x933d,	// (0x0009e41b) cntbar_detail_btn_pane_cp01_ParamLimits

0x933d,	// (0x0009e41b) cntbar_detail_btn_pane_cp01

0x9359,	// (0x0009e437) cntbar_detail_list_shct_pane_ParamLimits

0x9365,	// (0x0009e443) cntbar_detail_pane_g1_ParamLimits

0x9365,	// (0x0009e443) cntbar_detail_pane_g1

0x9371,	// (0x0009e44f) cntbar_detail_pane_t1_ParamLimits

0x9371,	// (0x0009e44f) cntbar_detail_pane_t1

0x9408,	// (0x0009e4e6) cntbar_detail_list_event_pane_g3_ParamLimits

0x9408,	// (0x0009e4e6) cntbar_detail_list_event_pane_g3

0x9420,	// (0x0009e4fe) cntbar_detail_list_event_pane_g4_ParamLimits

0x9420,	// (0x0009e4fe) cntbar_detail_list_event_pane_g4

0x9438,	// (0x0009e516) cntbar_detail_list_event_pane_g5_ParamLimits

0x9438,	// (0x0009e516) cntbar_detail_list_event_pane_g5

0x9450,	// (0x0009e52e) cntbar_detail_list_event_pane_g6_ParamLimits

0x9450,	// (0x0009e52e) cntbar_detail_list_event_pane_g6

0x9492,	// (0x0009e570) cntbar_detail_list_event_pane_t3_ParamLimits

0x9492,	// (0x0009e570) cntbar_detail_list_event_pane_t3

0x94a4,	// (0x0009e582) popup_notif_wgt_window_ParamLimits

0x94a4,	// (0x0009e582) popup_notif_wgt_window

0x94b4,	// (0x0009e592) popup_submenu_window_cp01_ParamLimits

0x94b4,	// (0x0009e592) popup_submenu_window_cp01

0xa3b5,	// (0x0009f493) bg_popup_window_pane_cp10

0xe95e,	// (0x000a3a3c) listscroll_notif_wgt_pane

0xe96f,	// (0x000a3a4d) list_notif_wgt_window

0xe978,	// (0x000a3a56) scroll_pane_cp033

0x94c2,	// (0x0009e5a0) list_notif_wgt_row_pane_ParamLimits

0x94c2,	// (0x0009e5a0) list_notif_wgt_row_pane

0xe981,	// (0x000a3a5f) aid_size_list_notif_wgt_del

0xe98e,	// (0x000a3a6c) list_notif_wgt_row_pane_g1

0xe99a,	// (0x000a3a78) list_notif_wgt_row_pane_g2

0xe9a6,	// (0x000a3a84) list_notif_wgt_row_pane_g3

0x0002,

0x0d31,	// (0x00095e0f) list_notif_wgt_row_pane_g

0xe9b3,	// (0x000a3a91) list_notif_wgt_row_pane_t1

0xe9c8,	// (0x000a3aa6) list_notif_wgt_row_pane_t2

0xe9da,	// (0x000a3ab8) list_notif_wgt_row_pane_t3

0x0002,

0x0d38,	// (0x00095e16) list_notif_wgt_row_pane_t

0xc93d,	// (0x000a1a1b) list_recal_day_event_pane_g1

0xe9ec,	// (0x000a3aca) list_recal_day_event_pane_t1

0xe0f4,	// (0x000a31d2) bg_button_pane_cp045

0xe9fb,	// (0x000a3ad9) cntbar_detail_btn_pane_t1

0xb7b7,	// (0x000a0895) main_callh_pane_ParamLimits

0xb7b7,	// (0x000a0895) main_callh_pane

0xe0f4,	// (0x000a31d2) main_coverflow0_pane

0xe0f4,	// (0x000a31d2) main_wgtman_pane

0x854b,	// (0x0009d629) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x854b,	// (0x0009d629) main_fs_bigclock_unlock_btn_pane

0x8d53,	// (0x0009de31) bg_button_pane_cp16

0x8d63,	// (0x0009de41) cell_tport_appsw_pane_g3

0x94d3,	// (0x0009e5b1) cf0_flow_pane_ParamLimits

0x94d3,	// (0x0009e5b1) cf0_flow_pane

0xea09,	// (0x000a3ae7) listscroll_cf0_pane

0xea14,	// (0x000a3af2) main_cf0_pane_g1

0x94e2,	// (0x0009e5c0) main_cf0_pane_t1_ParamLimits

0x94e2,	// (0x0009e5c0) main_cf0_pane_t1

0x94f6,	// (0x0009e5d4) main_cf0_pane_t2_ParamLimits

0x94f6,	// (0x0009e5d4) main_cf0_pane_t2

0x0001,

0xfe67,	// (0x000a4f45) main_cf0_pane_t_ParamLimits

0xfe67,	// (0x000a4f45) main_cf0_pane_t

0xea26,	// (0x000a3b04) scroll_pane_cp11

0x950a,	// (0x0009e5e8) cf0_flow_pane_g1

0x9512,	// (0x0009e5f0) cf0_flow_pane_g2

0x0001,

0xfe6c,	// (0x000a4f4a) cf0_flow_pane_g

0x951a,	// (0x0009e5f8) cf0_flow_pane_t1

0xe0f4,	// (0x000a31d2) main_call6_pane

0xe0f4,	// (0x000a31d2) main_calllock_pane

0x9528,	// (0x0009e606) call6_btn_grp_pane_ParamLimits

0x9528,	// (0x0009e606) call6_btn_grp_pane

0x9537,	// (0x0009e615) call6_pane_g1_ParamLimits

0x9537,	// (0x0009e615) call6_pane_g1

0x9546,	// (0x0009e624) popup_call6_1st_window_ParamLimits

0x9546,	// (0x0009e624) popup_call6_1st_window

0x9554,	// (0x0009e632) popup_call6_2nd_window_ParamLimits

0x9554,	// (0x0009e632) popup_call6_2nd_window

0x9562,	// (0x0009e640) cell_call6_btn_pane_ParamLimits

0x9562,	// (0x0009e640) cell_call6_btn_pane

0xa3b5,	// (0x0009f493) bg_popup_call2_in_pane_cp03

0xea31,	// (0x000a3b0f) popup_call6_1st_window_g1

0xea39,	// (0x000a3b17) popup_call6_1st_window_g2

0xea41,	// (0x000a3b1f) popup_call6_1st_window_g3

0x0002,

0x0d4e,	// (0x00095e2c) popup_call6_1st_window_g

0xea49,	// (0x000a3b27) popup_call6_1st_window_t1

0xea58,	// (0x000a3b36) popup_call6_1st_window_t2

0xea68,	// (0x000a3b46) popup_call6_1st_window_t3

0x0002,

0x0d55,	// (0x00095e33) popup_call6_1st_window_t

0xa3b5,	// (0x0009f493) bg_popup_call2_in_pane_cp04

0xea31,	// (0x000a3b0f) popup_call6_2nd_window_g1

0xea39,	// (0x000a3b17) popup_call6_2nd_window_g2

0xea41,	// (0x000a3b1f) popup_call6_2nd_window_g3

0x0002,

0x0d4e,	// (0x00095e2c) popup_call6_2nd_window_g

0xea49,	// (0x000a3b27) popup_call6_2nd_window_t1

0xe0f4,	// (0x000a31d2) bg_button_pane_cp15

0xea78,	// (0x000a3b56) cell_call6_btn_pane_g1

0xea81,	// (0x000a3b5f) cell_call6_btn_pane_t1

0x9571,	// (0x0009e64f) listscroll_wgtman_pane_ParamLimits

0x9571,	// (0x0009e64f) listscroll_wgtman_pane

0x958f,	// (0x0009e66d) wgtman_btn_pane_ParamLimits

0x958f,	// (0x0009e66d) wgtman_btn_pane

0xa26c,	// (0x0009f34a) aid_scroll_copy1

0xea90,	// (0x000a3b6e) list_wgtman_pane

0x95c4,	// (0x0009e6a2) wgtman_btn_pane_g1_ParamLimits

0x95c4,	// (0x0009e6a2) wgtman_btn_pane_g1

0x95ec,	// (0x0009e6ca) wgtman_btn_pane_t1_ParamLimits

0x95ec,	// (0x0009e6ca) wgtman_btn_pane_t1

0xea9a,	// (0x000a3b78) wgtman_btn_pane_t2_ParamLimits

0xea9a,	// (0x000a3b78) wgtman_btn_pane_t2

0x0001,

0xfe71,	// (0x000a4f4f) wgtman_btn_pane_t_ParamLimits

0xfe71,	// (0x000a4f4f) wgtman_btn_pane_t

0x9623,	// (0x0009e701) listrow_wgtman_pane_ParamLimits

0x9623,	// (0x0009e701) listrow_wgtman_pane

0x963c,	// (0x0009e71a) listrow_wgtman_pane_g1

0x9649,	// (0x0009e727) listrow_wgtman_pane_g2

0x0001,

0xfe76,	// (0x000a4f54) listrow_wgtman_pane_g

0x9667,	// (0x0009e745) listrow_wgtman_pane_t1

0x967f,	// (0x0009e75d) listrow_wgtman_pane_t2

0x0001,

0xfe7b,	// (0x000a4f59) listrow_wgtman_pane_t

0x96a5,	// (0x0009e783) wait_bar_pane_cp09

0xeab1,	// (0x000a3b8f) main_calllock_btn_pane

0xeabb,	// (0x000a3b99) main_calllock_pane_g1

0xe0f4,	// (0x000a31d2) bg_button_pane_cp17

0xeac6,	// (0x000a3ba4) main_calllock_btn_pane_g1

0xeacf,	// (0x000a3bad) main_calllock_btn_pane_t1

0xe0f4,	// (0x000a31d2) main_dialer3_pane

0xe0f4,	// (0x000a31d2) main_fmrd2_pane

0xbbef,	// (0x000a0ccd) main_fs_bigclock_unlock_btn_pane_g1

0xeae6,	// (0x000a3bc4) main_fs_bigclock_unlock_btn_pane_t1

0x96b7,	// (0x0009e795) area_fmrd2_info_pane_ParamLimits

0x96b7,	// (0x0009e795) area_fmrd2_info_pane

0x96c5,	// (0x0009e7a3) area_fmrd2_visual_pane_ParamLimits

0x96c5,	// (0x0009e7a3) area_fmrd2_visual_pane

0x96d3,	// (0x0009e7b1) fmrd2_indi_pane_ParamLimits

0x96d3,	// (0x0009e7b1) fmrd2_indi_pane

0x96e0,	// (0x0009e7be) area_fmrd2_visual_pane_g1

0x96e8,	// (0x0009e7c6) area_fmrd2_visual_pane_t1

0x96f8,	// (0x0009e7d6) area_fmrd2_visual_pane_t2

0x9708,	// (0x0009e7e6) area_fmrd2_visual_pane_t3

0x0002,

0xfe85,	// (0x000a4f63) area_fmrd2_visual_pane_t

0x9718,	// (0x0009e7f6) area_fmrd2_info_pane_g1

0x9720,	// (0x0009e7fe) area_fmrd2_info_pane_t1

0x9730,	// (0x0009e80e) area_fmrd2_info_pane_t2

0x9740,	// (0x0009e81e) area_fmrd2_info_pane_t3

0x9750,	// (0x0009e82e) area_fmrd2_info_pane_t4

0x0003,

0xfe8c,	// (0x000a4f6a) area_fmrd2_info_pane_t

0x975e,	// (0x0009e83c) fmrd2_indi_pane_t1

0x976e,	// (0x0009e84c) fmrd2_indi_pane_t2

0x977e,	// (0x0009e85c) fmrd2_indi_pane_t3

0x0002,

0xfe95,	// (0x000a4f73) fmrd2_indi_pane_t

0xd568,	// (0x000a2646) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd568,	// (0x000a2646) list_single_fs_bigclock_indicator_pane_g5

0xd60f,	// (0x000a26ed) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd60f,	// (0x000a26ed) list_single_fs_bigclock_indicator_pane_t5

0x8f57,	// (0x0009e035) aid_cell_bcale_month_pane_ParamLimits

0x8f57,	// (0x0009e035) aid_cell_bcale_month_pane

0x8f75,	// (0x0009e053) bcale_month_pane_ParamLimits

0x8f75,	// (0x0009e053) bcale_month_pane

0x8f93,	// (0x0009e071) bcale_preview_pane_ParamLimits

0x8f93,	// (0x0009e071) bcale_preview_pane

0xe064,	// (0x000a3142) list_single_fs_bigclock_pane_t1_ParamLimits

0xe083,	// (0x000a3161) list_single_fs_bigclock_pane_t2_ParamLimits

0xe083,	// (0x000a3161) list_single_fs_bigclock_pane_t2

0x0001,

0xfe44,	// (0x000a4f22) list_single_fs_bigclock_pane_t_ParamLimits

0xfe44,	// (0x000a4f22) list_single_fs_bigclock_pane_t

0xeade,	// (0x000a3bbc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe80,	// (0x000a4f5e) main_fs_bigclock_unlock_btn_pane_g

0x978c,	// (0x0009e86a) aid_dia3_key_size_ParamLimits

0x978c,	// (0x0009e86a) aid_dia3_key_size

0x9798,	// (0x0009e876) aid_dia3_listrow_size_ParamLimits

0x9798,	// (0x0009e876) aid_dia3_listrow_size

0x97a8,	// (0x0009e886) dia3_keypad_fun_pane_ParamLimits

0x97a8,	// (0x0009e886) dia3_keypad_fun_pane

0x97ba,	// (0x0009e898) dia3_keypad_num_pane_ParamLimits

0x97ba,	// (0x0009e898) dia3_keypad_num_pane

0x97cc,	// (0x0009e8aa) dia3_listscroll_pane_ParamLimits

0x97cc,	// (0x0009e8aa) dia3_listscroll_pane

0x97da,	// (0x0009e8b8) dia3_numentry_pane_ParamLimits

0x97da,	// (0x0009e8b8) dia3_numentry_pane

0xeaf4,	// (0x000a3bd2) dia3_list_pane

0xeaff,	// (0x000a3bdd) scroll_pane_cp12

0xe0f4,	// (0x000a31d2) bg_dia3_numentry_pane

0x97e8,	// (0x0009e8c6) dia3_numentry_pane_t1

0x97f7,	// (0x0009e8d5) cell_dia3_key_num_pane

0x97ff,	// (0x0009e8dd) cell_dia3_key0_fun_pane_ParamLimits

0x97ff,	// (0x0009e8dd) cell_dia3_key0_fun_pane

0x980c,	// (0x0009e8ea) cell_dia3_key1_fun_pane_ParamLimits

0x980c,	// (0x0009e8ea) cell_dia3_key1_fun_pane

0x9819,	// (0x0009e8f7) dia3_listrow_pane

0xd277,	// (0x000a2355) bg_dia3_numentry_pane_g1

0xe0f4,	// (0x000a31d2) bg_button_pane_cp21

0xeb0a,	// (0x000a3be8) cell_dia3_key_num_pane_t1

0xeb18,	// (0x000a3bf6) cell_dia3_key_num_pane_t2

0xeb27,	// (0x000a3c05) cell_dia3_key_num_pane_t3

0xeb36,	// (0x000a3c14) cell_dia3_key_num_pane_t4

0x0003,

0x0d87,	// (0x00095e65) cell_dia3_key_num_pane_t

0xe0f4,	// (0x000a31d2) bg_button_pane_cp19

0x9826,	// (0x0009e904) cell_dia3_key0_fun_pane_g1

0xe0f4,	// (0x000a31d2) bg_button_pane_cp20

0x982e,	// (0x0009e90c) cell_dia3_key1_fun_pane_g1

0x9836,	// (0x0009e914) area_left_week_number_pane

0x9849,	// (0x0009e927) area_top_day_name_pane

0x9857,	// (0x0009e935) frame_month_view_pane

0xeb45,	// (0x000a3c23) grid_month_view_pane

0x986c,	// (0x0009e94a) cell_top_day_name_pane_ParamLimits

0x986c,	// (0x0009e94a) cell_top_day_name_pane

0x9886,	// (0x0009e964) cell_area_left_week_number_pane_ParamLimits

0x9886,	// (0x0009e964) cell_area_left_week_number_pane

0x98a9,	// (0x0009e987) cell_month_view_pane_ParamLimits

0x98a9,	// (0x0009e987) cell_month_view_pane

0xeb53,	// (0x000a3c31) frm_month_g1

0x98d5,	// (0x0009e9b3) frm_month_g2

0x98e6,	// (0x0009e9c4) frm_month_g3

0x98f7,	// (0x0009e9d5) frm_month_g4

0x9908,	// (0x0009e9e6) frm_month_g5

0x991b,	// (0x0009e9f9) frm_month_g6

0x992e,	// (0x0009ea0c) frm_month_g7

0xeb60,	// (0x000a3c3e) frm_month_g8

0x9941,	// (0x0009ea1f) frm_month_g9

0x994e,	// (0x0009ea2c) frm_month_g10

0x995b,	// (0x0009ea39) frm_month_g11

0x9968,	// (0x0009ea46) frm_month_g12

0x9975,	// (0x0009ea53) frm_month_g13

0x9982,	// (0x0009ea60) frm_month_g14

0x9991,	// (0x0009ea6f) frm_month_g15

0x99a0,	// (0x0009ea7e) frm_month_g16

0x000f,

0xfe9c,	// (0x000a4f7a) frm_month_g

0xeb6d,	// (0x000a3c4b) cell_top_day_name_pane_t1

0x99af,	// (0x0009ea8d) cell_area_left_week_number_pane_g1

0x99be,	// (0x0009ea9c) cell_area_left_week_number_pane_t1

0xbe4f,	// (0x000a0f2d) cell_month_view_pane_g1

0x99d4,	// (0x0009eab2) cell_month_view_pane_t1

0xe0f4,	// (0x000a31d2) main_fps_pane

0xd7ff,	// (0x000a28dd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd7ff,	// (0x000a28dd) cmail_ddmenu_btn02_pane_cp1

0xd81b,	// (0x000a28f9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd81b,	// (0x000a28f9) cmail_ddmenu_btn02_pane_cp2

0x91c6,	// (0x0009e2a4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91c6,	// (0x0009e2a4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdf7,	// (0x000a4ed5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdf7,	// (0x000a4ed5) cmail_ddmenu_btn02_pane_g

0x91e4,	// (0x0009e2c2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91e4,	// (0x0009e2c2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdfc,	// (0x000a4eda) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdfc,	// (0x000a4eda) cmail_ddmenu_btn02_pane_t

0x99ea,	// (0x0009eac8) fps_text_pane_ParamLimits

0x99ea,	// (0x0009eac8) fps_text_pane

0x99f7,	// (0x0009ead5) main_fps_pane_g1_ParamLimits

0x99f7,	// (0x0009ead5) main_fps_pane_g1

0x9a05,	// (0x0009eae3) wait_bar_pane_cp010_ParamLimits

0x9a05,	// (0x0009eae3) wait_bar_pane_cp010

0x9a11,	// (0x0009eaef) fps_text_pane_t1_ParamLimits

0x9a11,	// (0x0009eaef) fps_text_pane_t1

0x6643,	// (0x0009b721) cam4_image_uncrop_pane_g1

0x664c,	// (0x0009b72a) cam4_image_uncrop_pane_g2

0x6655,	// (0x0009b733) cam4_image_uncrop_pane_g3

0x665e,	// (0x0009b73c) cam4_image_uncrop_pane_g4

0x0003,

0xf8be,	// (0x000a499c) cam4_image_uncrop_pane_g

0x9819,	// (0x0009e8f7) dia3_listrow_pane_ParamLimits

0xe0f4,	// (0x000a31d2) main_phob2_pane

0x8d35,	// (0x0009de13) cell_tport_appsw_pane_cp02_ParamLimits

0x8d35,	// (0x0009de13) cell_tport_appsw_pane_cp02

0x8d44,	// (0x0009de22) cell_tport_appsw_pane_cp03_ParamLimits

0x8d44,	// (0x0009de22) cell_tport_appsw_pane_cp03

0xe0f4,	// (0x000a31d2) phob2_contact_card_pane

0xe0f4,	// (0x000a31d2) phob2_listscroll_pane

0xeb80,	// (0x000a3c5e) phob2_list_pane

0xeb88,	// (0x000a3c66) scroll_pane_cp034

0x9a2a,	// (0x0009eb08) phob2_cc_data_pane_ParamLimits

0x9a2a,	// (0x0009eb08) phob2_cc_data_pane

0x9a44,	// (0x0009eb22) phob2_cc_listscroll_pane_ParamLimits

0x9a44,	// (0x0009eb22) phob2_cc_listscroll_pane

0x9a5e,	// (0x0009eb3c) list_double_large_graphic_phob2_pane_ParamLimits

0x9a5e,	// (0x0009eb3c) list_double_large_graphic_phob2_pane

0x9a80,	// (0x0009eb5e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a80,	// (0x0009eb5e) list_double_large_graphic_phob2_pane_g1

0x9a96,	// (0x0009eb74) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a96,	// (0x0009eb74) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfebd,	// (0x000a4f9b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfebd,	// (0x000a4f9b) list_double_large_graphic_phob2_pane_g

0x9aa2,	// (0x0009eb80) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9aa2,	// (0x0009eb80) list_double_large_graphic_phob2_pane_t1

0x9ab8,	// (0x0009eb96) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9ab8,	// (0x0009eb96) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfec2,	// (0x000a4fa0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfec2,	// (0x000a4fa0) list_double_large_graphic_phob2_pane_t

0xe0f4,	// (0x000a31d2) list_highlight_pane_cp024

0xeb90,	// (0x000a3c6e) phob2_cc_button_pane

0x9acd,	// (0x0009ebab) phob2_cc_data_pane_g1_ParamLimits

0x9acd,	// (0x0009ebab) phob2_cc_data_pane_g1

0x9ad9,	// (0x0009ebb7) phob2_cc_data_pane_g2_ParamLimits

0x9ad9,	// (0x0009ebb7) phob2_cc_data_pane_g2

0x0001,

0xfec7,	// (0x000a4fa5) phob2_cc_data_pane_g_ParamLimits

0xfec7,	// (0x000a4fa5) phob2_cc_data_pane_g

0x9ae5,	// (0x0009ebc3) phob2_cc_data_pane_t1_ParamLimits

0x9ae5,	// (0x0009ebc3) phob2_cc_data_pane_t1

0x9af7,	// (0x0009ebd5) phob2_cc_data_pane_t2_ParamLimits

0x9af7,	// (0x0009ebd5) phob2_cc_data_pane_t2

0x9b09,	// (0x0009ebe7) phob2_cc_data_pane_t3_ParamLimits

0x9b09,	// (0x0009ebe7) phob2_cc_data_pane_t3

0x0002,

0xfecc,	// (0x000a4faa) phob2_cc_data_pane_t_ParamLimits

0xfecc,	// (0x000a4faa) phob2_cc_data_pane_t

0xeb98,	// (0x000a3c76) phob2_cc_list_pane_ParamLimits

0xeb98,	// (0x000a3c76) phob2_cc_list_pane

0xca67,	// (0x000a1b45) scroll_pane_cp035_ParamLimits

0xca67,	// (0x000a1b45) scroll_pane_cp035

0xecc6,	// (0x000a3da4) bg_button_pane_cp033

0xeba4,	// (0x000a3c82) phob2_cc_button_pane_g1

0xebb0,	// (0x000a3c8e) phob2_cc_button_pane_t1

0xebc5,	// (0x000a3ca3) phob2_cc_button_pane_t2

0x0001,

0x0dc7,	// (0x00095ea5) phob2_cc_button_pane_t

0x9b1b,	// (0x0009ebf9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b1b,	// (0x0009ebf9) list_double_large_graphic_phob2_cc_pane

0x9b4a,	// (0x0009ec28) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b4a,	// (0x0009ec28) list_double_large_graphic_phob2_cc_pane_g1

0x9b5b,	// (0x0009ec39) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b5b,	// (0x0009ec39) list_double_large_graphic_phob2_cc_pane_g2

0x9b6a,	// (0x0009ec48) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b6a,	// (0x0009ec48) list_double_large_graphic_phob2_cc_pane_g3

0x9b79,	// (0x0009ec57) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b79,	// (0x0009ec57) list_double_large_graphic_phob2_cc_pane_g4

0x9b8a,	// (0x0009ec68) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b8a,	// (0x0009ec68) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfed3,	// (0x000a4fb1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfed3,	// (0x000a4fb1) list_double_large_graphic_phob2_cc_pane_g

0x9b99,	// (0x0009ec77) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b99,	// (0x0009ec77) list_double_large_graphic_phob2_cc_pane_t1

0x9bc2,	// (0x0009eca0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9bc2,	// (0x0009eca0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfede,	// (0x000a4fbc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfede,	// (0x000a4fbc) list_double_large_graphic_phob2_cc_pane_t

0xebd7,	// (0x000a3cb5) list_highlight_pane_cp025_ParamLimits

0xebd7,	// (0x000a3cb5) list_highlight_pane_cp025

0xecc6,	// (0x000a3da4) bg_button_pane_cp033_ParamLimits

0xeba4,	// (0x000a3c82) phob2_cc_button_pane_g1_ParamLimits

0xebb0,	// (0x000a3c8e) phob2_cc_button_pane_t1_ParamLimits

0xebc5,	// (0x000a3ca3) phob2_cc_button_pane_t2_ParamLimits

0x0dc7,	// (0x00095ea5) phob2_cc_button_pane_t_ParamLimits

0x1191,	// (0x0009626f) popup_wgtman_window

0xc7f5,	// (0x000a18d3) scroll_pane_cp038

0x95ac,	// (0x0009e68a) wgtman_btn_pane_cp_01_ParamLimits

0x95ac,	// (0x0009e68a) wgtman_btn_pane_cp_01

0xebe5,	// (0x000a3cc3) wgtman_content_pane

0xebee,	// (0x000a3ccc) wgtman_heading_pane

0xe0f4,	// (0x000a31d2) bg_heading_pane_cp02

0xebf7,	// (0x000a3cd5) wgtman_heading_pane_g1

0xebff,	// (0x000a3cdd) wgtman_heading_pane_t1

0xec0d,	// (0x000a3ceb) scroll_pane_cp036

0xec15,	// (0x000a3cf3) wgtman_list_pane

0xec1d,	// (0x000a3cfb) wgtman_list_pane_t1_ParamLimits

0xec1d,	// (0x000a3cfb) wgtman_list_pane_t1

0x65a2,	// (0x0009b680) cam4_grid_pane

0x7314,	// (0x0009c3f2) bg_button_pane_cp015_ParamLimits

0x7326,	// (0x0009c404) bg_button_pane_cp016_ParamLimits

0x7339,	// (0x0009c417) bg_button_pane_cp017_ParamLimits

0x738f,	// (0x0009c46d) popup_vitu2_query_window_g3_ParamLimits

0x738f,	// (0x0009c46d) popup_vitu2_query_window_g3

0x744a,	// (0x0009c528) popup_vitu2_query_window_t6_ParamLimits

0x744a,	// (0x0009c528) popup_vitu2_query_window_t6

0x7475,	// (0x0009c553) popup_vitu2_query_window_t7_ParamLimits

0x7475,	// (0x0009c553) popup_vitu2_query_window_t7

0xc768,	// (0x000a1846) cam4_grid_pane_g1

0xc771,	// (0x000a184f) cam4_grid_pane_g2

0xec39,	// (0x000a3d17) cam4_grid_pane_g3

0xec42,	// (0x000a3d20) cam4_grid_pane_g4

0x0003,

0xfee3,	// (0x000a4fc1) cam4_grid_pane_g

0x20fc,	// (0x000971da) aid_placing_vt_slider_lsc_ParamLimits

0x243c,	// (0x0009751a) vidtel_button_pane_ParamLimits

0x243c,	// (0x0009751a) vidtel_button_pane

0xec4d,	// (0x000a3d2b) bg_button_pane_cp034

0x9beb,	// (0x0009ecc9) vidtel_button_pane_g1

0xec57,	// (0x000a3d35) vidtel_button_pane_t1

0xc91b,	// (0x000a19f9) aid_size_vtel_slider_touch

0xca67,	// (0x000a1b45) scroll_pane_cp039

0xd2b5,	// (0x000a2393) ncim_query_button_pane_cp01_ParamLimits

0xd2d4,	// (0x000a23b2) ncimui_query_pane_g1_ParamLimits

0xecc6,	// (0x000a3da4) input_focus_pane_cp012_ParamLimits

0xd2f9,	// (0x000a23d7) ncim_query_entry_pane_t1_ParamLimits

0xca67,	// (0x000a1b45) scroll_pane_cp039_ParamLimits

0x3884,	// (0x00098962) navi_pane_bcale_mc_g1

0x388c,	// (0x0009896a) navi_pane_bcale_mc_t1

0xd864,	// (0x000a2942) main_sp_fs_email_pane_g1

0xd870,	// (0x000a294e) main_sp_fs_email_pane_g2

0x0001,

0xfcb5,	// (0x000a4d93) main_sp_fs_email_pane_g

0xdc73,	// (0x000a2d51) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdc73,	// (0x000a2d51) list_single_cale_mrui_row_pane_g3

0x920c,	// (0x0009e2ea) list_single_recal_day_pane_g5_event_pane

0xdeeb,	// (0x000a2fc9) list_single_recal_day_pane_g7

0xec65,	// (0x000a3d43) list_recal_day_event_pane_cp01

0xec6e,	// (0x000a3d4c) list_recal_vselct_arw_lo_pane_cp01

0xec76,	// (0x000a3d54) list_recal_vselct_arw_up_pane_cp01

0xecd4,	// (0x000a3db2) list_recal_vselct_pane_cp01

0xc93d,	// (0x000a1a1b) list_recal_day_event_pane_cp01_g1

0xe26e,	// (0x000a334c) list_recal_day_event_pane_cp01_t1

0xdef3,	// (0x000a2fd1) list_single_recal_day_pane_t1_ParamLimits

0xdf05,	// (0x000a2fe3) list_single_recal_day_pane_t2_ParamLimits

0xfe0c,	// (0x000a4eea) list_single_recal_day_pane_t_ParamLimits

0xe796,	// (0x000a3874) bg_notes_pane_ParamLimits

0xe858,	// (0x000a3936) list_notes_pane_ParamLimits

0x14e6,	// (0x000965c4) scroll_pane_cp06_ParamLimits

0xec7e,	// (0x000a3d5c) main_notes_pane_ParamLimits

0xe0f4,	// (0x000a31d2) main_welc_pane

0x9bf3,	// (0x0009ecd1) main_welc_body_pane_ParamLimits

0x9bf3,	// (0x0009ecd1) main_welc_body_pane

0x9c0c,	// (0x0009ecea) main_welc_opti_pane_ParamLimits

0x9c0c,	// (0x0009ecea) main_welc_opti_pane

0x9c41,	// (0x0009ed1f) main_welc_pane_t1_ParamLimits

0x9c41,	// (0x0009ed1f) main_welc_pane_t1

0x9c5f,	// (0x0009ed3d) main_welc_body_row_pane_ParamLimits

0x9c5f,	// (0x0009ed3d) main_welc_body_row_pane

0xe252,	// (0x000a3330) main_welc_opti_row_pane_ParamLimits

0xe252,	// (0x000a3330) main_welc_opti_row_pane

0xecde,	// (0x000a3dbc) main_welc_opti_row_pane_g1

0xece6,	// (0x000a3dc4) main_welc_opti_row_pane_t1

0xecf6,	// (0x000a3dd4) main_welc_body_row_pane_t1

0xe967,	// (0x000a3a45) popup_notif_wgt_heading_pane

0xe981,	// (0x000a3a5f) aid_size_list_notif_wgt_del_ParamLimits

0xe98e,	// (0x000a3a6c) list_notif_wgt_row_pane_g1_ParamLimits

0xe99a,	// (0x000a3a78) list_notif_wgt_row_pane_g2_ParamLimits

0xe9a6,	// (0x000a3a84) list_notif_wgt_row_pane_g3_ParamLimits

0x0d31,	// (0x00095e0f) list_notif_wgt_row_pane_g_ParamLimits

0xe9b3,	// (0x000a3a91) list_notif_wgt_row_pane_t1_ParamLimits

0xe9c8,	// (0x000a3aa6) list_notif_wgt_row_pane_t2_ParamLimits

0xe9da,	// (0x000a3ab8) list_notif_wgt_row_pane_t3_ParamLimits

0x0d38,	// (0x00095e16) list_notif_wgt_row_pane_t_ParamLimits

0x963c,	// (0x0009e71a) listrow_wgtman_pane_g1_ParamLimits

0x9649,	// (0x0009e727) listrow_wgtman_pane_g2_ParamLimits

0xfe76,	// (0x000a4f54) listrow_wgtman_pane_g_ParamLimits

0x9667,	// (0x0009e745) listrow_wgtman_pane_t1_ParamLimits

0x967f,	// (0x0009e75d) listrow_wgtman_pane_t2_ParamLimits

0xfe7b,	// (0x000a4f59) listrow_wgtman_pane_t_ParamLimits

0x96a5,	// (0x0009e783) wait_bar_pane_cp09_ParamLimits

0xe0f4,	// (0x000a31d2) bg_popup_heading_pane_cp02

0xed05,	// (0x000a3de3) popup_notif_wgt_heading_pane_g1

0xed0d,	// (0x000a3deb) popup_notif_wgt_heading_pane_t1

0xe0f4,	// (0x000a31d2) main_vids_pane

0xe0f4,	// (0x000a31d2) vids_listscroll_pane

0x9c8b,	// (0x0009ed69) scroll_pane_cp040

0xe0f4,	// (0x000a31d2) vids_list_pane

0x9c96,	// (0x0009ed74) vids_list_double_pane_ParamLimits

0x9c96,	// (0x0009ed74) vids_list_double_pane

0x9cae,	// (0x0009ed8c) vids_list_double_pane_g1

0x9cb7,	// (0x0009ed95) vids_list_double_pane_t1

0x9cc7,	// (0x0009eda5) vids_list_double_pane_t2

0x0001,

0xfef1,	// (0x000a4fcf) vids_list_double_pane_t

0x46b9,	// (0x00099797) main_ncimui_pane_ParamLimits

0x810b,	// (0x0009d1e9) main_ncimui_pane_g1_ParamLimits

0x8117,	// (0x0009d1f5) main_ncimui_pane_g2_ParamLimits

0x8117,	// (0x0009d1f5) main_ncimui_pane_g2

0x0001,

0xfbba,	// (0x000a4c98) main_ncimui_pane_g_ParamLimits

0xfbba,	// (0x000a4c98) main_ncimui_pane_g

0x9c27,	// (0x0009ed05) main_welc_pane_g1_ParamLimits

0x9c27,	// (0x0009ed05) main_welc_pane_g1

0x9c33,	// (0x0009ed11) main_welc_pane_g2_ParamLimits

0x9c33,	// (0x0009ed11) main_welc_pane_g2

0x0001,

0xfeec,	// (0x000a4fca) main_welc_pane_g_ParamLimits

0xfeec,	// (0x000a4fca) main_welc_pane_g

0xe796,	// (0x000a3874) listscroll_mce_pane_ParamLimits

0x394e,	// (0x00098a2c) wait_bar_pane_cp10

0xb7ab,	// (0x000a0889) main_cale_day_pane_ParamLimits

0xb7ab,	// (0x000a0889) main_cale_week_pane_ParamLimits

0xe796,	// (0x000a3874) main_messa_pane_ParamLimits

0x59c8,	// (0x0009aaa6) main_clock2_btn_pane_ParamLimits

0x59c8,	// (0x0009aaa6) main_clock2_btn_pane

0xc04b,	// (0x000a1129) main_clock2_btn_pane_cp01_ParamLimits

0xc04b,	// (0x000a1129) main_clock2_btn_pane_cp01

0xdbff,	// (0x000a2cdd) list_cale_mrui_pane_ParamLimits

0xea1e,	// (0x000a3afc) main_cf0_pane_g2

0x0001,

0x0d3f,	// (0x00095e1d) main_cf0_pane_g

0x9836,	// (0x0009e914) area_left_week_number_pane_ParamLimits

0x9849,	// (0x0009e927) area_top_day_name_pane_ParamLimits

0x9857,	// (0x0009e935) frame_month_view_pane_ParamLimits

0xeb45,	// (0x000a3c23) grid_month_view_pane_ParamLimits

0xeb53,	// (0x000a3c31) frm_month_g1_ParamLimits

0x98d5,	// (0x0009e9b3) frm_month_g2_ParamLimits

0x98e6,	// (0x0009e9c4) frm_month_g3_ParamLimits

0x98f7,	// (0x0009e9d5) frm_month_g4_ParamLimits

0x9908,	// (0x0009e9e6) frm_month_g5_ParamLimits

0x991b,	// (0x0009e9f9) frm_month_g6_ParamLimits

0x992e,	// (0x0009ea0c) frm_month_g7_ParamLimits

0xeb60,	// (0x000a3c3e) frm_month_g8_ParamLimits

0x9941,	// (0x0009ea1f) frm_month_g9_ParamLimits

0x994e,	// (0x0009ea2c) frm_month_g10_ParamLimits

0x995b,	// (0x0009ea39) frm_month_g11_ParamLimits

0x9968,	// (0x0009ea46) frm_month_g12_ParamLimits

0x9975,	// (0x0009ea53) frm_month_g13_ParamLimits

0x9982,	// (0x0009ea60) frm_month_g14_ParamLimits

0x9991,	// (0x0009ea6f) frm_month_g15_ParamLimits

0x99a0,	// (0x0009ea7e) frm_month_g16_ParamLimits

0xfe9c,	// (0x000a4f7a) frm_month_g_ParamLimits

0xeb6d,	// (0x000a3c4b) cell_top_day_name_pane_t1_ParamLimits

0x99af,	// (0x0009ea8d) cell_area_left_week_number_pane_g1_ParamLimits

0x99be,	// (0x0009ea9c) cell_area_left_week_number_pane_t1_ParamLimits

0xbe4f,	// (0x000a0f2d) cell_month_view_pane_g1_ParamLimits

0x99d4,	// (0x0009eab2) cell_month_view_pane_t1_ParamLimits

0xe78e,	// (0x000a386c) main_clock2_btn_pane_g1

0xed1b,	// (0x000a3df9) main_clock2_btn_pane_t1

0xecc6,	// (0x000a3da4) listscroll_cmail_pane_ParamLimits

0xd864,	// (0x000a2942) main_sp_fs_email_pane_g1_ParamLimits

0xd870,	// (0x000a294e) main_sp_fs_email_pane_g2_ParamLimits

0xfcb5,	// (0x000a4d93) main_sp_fs_email_pane_g_ParamLimits

0xde53,	// (0x000a2f31) list_recal_day_pane_ParamLimits

0xde64,	// (0x000a2f42) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
